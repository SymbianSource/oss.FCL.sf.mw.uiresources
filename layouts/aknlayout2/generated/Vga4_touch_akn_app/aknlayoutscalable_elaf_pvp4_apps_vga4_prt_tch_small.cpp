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

#include "aknlayoutscalable_elaf_pvp4_apps_vga4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0003dcb8 };

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
0x1a50,	// (0x0003f708) Screen

0x1a5c,	// (0x0003f714) application_window

0x1ab8,	// (0x0003f770) area_bottom_pane_ParamLimits

0x1ab8,	// (0x0003f770) area_bottom_pane

0x1b16,	// (0x0003f7ce) area_top_pane_ParamLimits

0x1b16,	// (0x0003f7ce) area_top_pane

0x1b7a,	// (0x0003f832) call_video_uplink_pane_ParamLimits

0x1b7a,	// (0x0003f832) call_video_uplink_pane

0x1bb9,	// (0x0003f871) main_pane_ParamLimits

0x1bb9,	// (0x0003f871) main_pane

0xc610,	// (0x0004a2c8) context_pane

0x4b3f,	// (0x000427f7) navi_pane

0x4b68,	// (0x00042820) popup_cale_events_window_ParamLimits

0x4b68,	// (0x00042820) popup_cale_events_window

0xc623,	// (0x0004a2db) popup_mup_playback_window

0x4b80,	// (0x00042838) signal_pane

0xa7a5,	// (0x0004845d) main_browser_pane

0xa943,	// (0x000485fb) main_burst_pane

0x49af,	// (0x00042667) main_calc_pane

0xc604,	// (0x0004a2bc) main_cale_day_pane

0x20a5,	// (0x0003fd5d) main_cale_month_pane

0xc604,	// (0x0004a2bc) main_cale_week_pane

0xa943,	// (0x000485fb) main_call_pane

0xa44f,	// (0x00048107) main_call_poc_pane

0xa943,	// (0x000485fb) main_camera_pane

0xa943,	// (0x000485fb) main_chi_dic_pane

0xb13f,	// (0x00048df7) main_clock_pane

0xa44f,	// (0x00048107) main_fmradio_pane

0xa943,	// (0x000485fb) main_graph_messa_pane

0xa44f,	// (0x00048107) main_help_pane

0xa7a5,	// (0x0004845d) main_im_pane

0xa6b8,	// (0x00048370) main_image_pane_ParamLimits

0xa6b8,	// (0x00048370) main_image_pane

0xa44f,	// (0x00048107) main_location2_pane

0xa943,	// (0x000485fb) main_location_pane

0xa6b8,	// (0x00048370) main_messa_pane

0xa44f,	// (0x00048107) main_mp2_pane

0xa943,	// (0x000485fb) main_mp_pane

0xa44f,	// (0x00048107) main_msg_pane

0xa44f,	// (0x00048107) main_mup_eq_pane

0xa44f,	// (0x00048107) main_mup_pane

0xa7a5,	// (0x0004845d) main_notes_pane

0xa44f,	// (0x00048107) main_pec_pane

0xa44f,	// (0x00048107) main_phob_pane

0xa44f,	// (0x00048107) main_pinb_pane

0xa44f,	// (0x00048107) main_postcard_pane

0xa44f,	// (0x00048107) main_qdial_pane

0xa943,	// (0x000485fb) main_skin_pane

0xa44f,	// (0x00048107) main_smil2_pane

0xa943,	// (0x000485fb) main_smil_pane

0xa943,	// (0x000485fb) main_video_pane

0xa943,	// (0x000485fb) main_video_tele_pane

0xa6b8,	// (0x00048370) main_viewer_pane_ParamLimits

0xa6b8,	// (0x00048370) main_viewer_pane

0xa943,	// (0x000485fb) main_vorec_pane

0x49ef,	// (0x000426a7) popup_blid_sat_info_window_ParamLimits

0x49ef,	// (0x000426a7) popup_blid_sat_info_window

0x4a15,	// (0x000426cd) popup_dyc_status_message_window_ParamLimits

0x4a15,	// (0x000426cd) popup_dyc_status_message_window

0x4a25,	// (0x000426dd) popup_grid_large_graphic_window_ParamLimits

0x4a25,	// (0x000426dd) popup_grid_large_graphic_window

0x4aba,	// (0x00042772) popup_loc_request_window_ParamLimits

0x4aba,	// (0x00042772) popup_loc_request_window

0x4b13,	// (0x000427cb) popup_wml_address_window_ParamLimits

0x4b13,	// (0x000427cb) popup_wml_address_window

0x4887,	// (0x0004253f) call_muted_g1

0x44ff,	// (0x000421b7) popup_call_audio_conf_window_ParamLimits

0x44ff,	// (0x000421b7) popup_call_audio_conf_window

0x4897,	// (0x0004254f) popup_call_audio_first_window_ParamLimits

0x4897,	// (0x0004254f) popup_call_audio_first_window

0x48d7,	// (0x0004258f) popup_call_audio_in_window_ParamLimits

0x48d7,	// (0x0004258f) popup_call_audio_in_window

0x48fb,	// (0x000425b3) popup_call_audio_out_window_ParamLimits

0x48fb,	// (0x000425b3) popup_call_audio_out_window

0x491d,	// (0x000425d5) popup_call_audio_second_window_ParamLimits

0x491d,	// (0x000425d5) popup_call_audio_second_window

0x494d,	// (0x00042605) popup_call_audio_wait_window_ParamLimits

0x494d,	// (0x00042605) popup_call_audio_wait_window

0x496e,	// (0x00042626) popup_number_entry_window_ParamLimits

0x496e,	// (0x00042626) popup_number_entry_window

0xa007,	// (0x00047cbf) bg_popup_call_pane_cp05_ParamLimits

0xa007,	// (0x00047cbf) bg_popup_call_pane_cp05

0xa027,	// (0x00047cdf) popup_number_entry_window_t1

0xa03a,	// (0x00047cf2) popup_number_entry_window_t2

0xa04c,	// (0x00047d04) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0004ccfd) popup_number_entry_window_t

0xa093,	// (0x00047d4b) text_title_cp2

0xa0a6,	// (0x00047d5e) bg_popup_call_pane_cp_ParamLimits

0xa0a6,	// (0x00047d5e) bg_popup_call_pane_cp

0xa0b4,	// (0x00047d6c) call_thumbnail_pane

0xa0bc,	// (0x00047d74) popup_call_audio_in_window_g1_ParamLimits

0xa0bc,	// (0x00047d74) popup_call_audio_in_window_g1

0xa0c8,	// (0x00047d80) popup_call_audio_in_window_g2_ParamLimits

0xa0c8,	// (0x00047d80) popup_call_audio_in_window_g2

0xa0d4,	// (0x00047d8c) popup_call_audio_in_window_g3_ParamLimits

0xa0d4,	// (0x00047d8c) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0004cd06) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0004cd06) popup_call_audio_in_window_g

0xa0e0,	// (0x00047d98) popup_call_audio_in_window_t1_ParamLimits

0xa0e0,	// (0x00047d98) popup_call_audio_in_window_t1

0xa0fc,	// (0x00047db4) popup_call_audio_in_window_t2_ParamLimits

0xa0fc,	// (0x00047db4) popup_call_audio_in_window_t2

0xa118,	// (0x00047dd0) popup_call_audio_in_window_t3_ParamLimits

0xa118,	// (0x00047dd0) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0004cd0d) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0004cd0d) popup_call_audio_in_window_t

0xa0a6,	// (0x00047d5e) bg_popup_call_pane_cp01_ParamLimits

0xa0a6,	// (0x00047d5e) bg_popup_call_pane_cp01

0xa0b4,	// (0x00047d6c) call_thumbnail_pane_cp02

0xa12b,	// (0x00047de3) call_type_pane_cp022

0xa133,	// (0x00047deb) popup_call_audio_out_window_g1_ParamLimits

0xa133,	// (0x00047deb) popup_call_audio_out_window_g1

0xa145,	// (0x00047dfd) popup_call_audio_out_window_g2_ParamLimits

0xa145,	// (0x00047dfd) popup_call_audio_out_window_g2

0xa151,	// (0x00047e09) popup_call_audio_out_window_g3_ParamLimits

0xa151,	// (0x00047e09) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0004cd14) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0004cd14) popup_call_audio_out_window_g

0xa163,	// (0x00047e1b) popup_call_audio_out_window_t1_ParamLimits

0xa163,	// (0x00047e1b) popup_call_audio_out_window_t1

0xa17b,	// (0x00047e33) popup_call_audio_out_window_t2_ParamLimits

0xa17b,	// (0x00047e33) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0004cd1b) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0004cd1b) popup_call_audio_out_window_t

0xa190,	// (0x00047e48) bg_popup_call_pane_ParamLimits

0xa190,	// (0x00047e48) bg_popup_call_pane

0x1ce4,	// (0x0003f99c) call_thumbnail_pane_cp_ParamLimits

0x1ce4,	// (0x0003f99c) call_thumbnail_pane_cp

0xa214,	// (0x00047ecc) call_type_pane_cp01_ParamLimits

0xa214,	// (0x00047ecc) call_type_pane_cp01

0xa258,	// (0x00047f10) popup_call_audio_first_window_g1_ParamLimits

0xa258,	// (0x00047f10) popup_call_audio_first_window_g1

0xa2a4,	// (0x00047f5c) popup_call_audio_first_window_g2_ParamLimits

0xa2a4,	// (0x00047f5c) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0004cd20) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0004cd20) popup_call_audio_first_window_g

0xa2e8,	// (0x00047fa0) popup_call_audio_first_window_t1_ParamLimits

0xa2e8,	// (0x00047fa0) popup_call_audio_first_window_t1

0xa394,	// (0x0004804c) popup_call_audio_first_window_t4_ParamLimits

0xa394,	// (0x0004804c) popup_call_audio_first_window_t4

0xa420,	// (0x000480d8) popup_call_audio_first_window_t5_ParamLimits

0xa420,	// (0x000480d8) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0004cd25) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0004cd25) popup_call_audio_first_window_t

0xa44f,	// (0x00048107) bg_popup_call_pane_cp02

0xa459,	// (0x00048111) call_type_pane_cp023

0xa461,	// (0x00048119) popup_call_audio_wait_window_g1

0xa469,	// (0x00048121) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0004cd2c) popup_call_audio_wait_window_g

0xa471,	// (0x00048129) popup_call_audio_wait_window_t3

0xa47f,	// (0x00048137) bg_popup_call_pane_cp03_ParamLimits

0xa47f,	// (0x00048137) bg_popup_call_pane_cp03

0xa4df,	// (0x00048197) call_thumbnail_pane_cp011_ParamLimits

0xa4df,	// (0x00048197) call_thumbnail_pane_cp011

0xa4eb,	// (0x000481a3) call_type_pane_cp034_ParamLimits

0xa4eb,	// (0x000481a3) call_type_pane_cp034

0xa527,	// (0x000481df) popup_call_audio_second_window_g1_ParamLimits

0xa527,	// (0x000481df) popup_call_audio_second_window_g1

0xa563,	// (0x0004821b) popup_call_audio_second_window_g2_ParamLimits

0xa563,	// (0x0004821b) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0004cd31) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0004cd31) popup_call_audio_second_window_g

0xa59f,	// (0x00048257) popup_call_audio_second_window_t1_ParamLimits

0xa59f,	// (0x00048257) popup_call_audio_second_window_t1

0xa620,	// (0x000482d8) popup_call_audio_second_window_t2_ParamLimits

0xa620,	// (0x000482d8) popup_call_audio_second_window_t2

0xa656,	// (0x0004830e) popup_call_audio_second_window_t3_ParamLimits

0xa656,	// (0x0004830e) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0004cd36) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0004cd36) popup_call_audio_second_window_t

0xa44f,	// (0x00048107) bg_popup_call_pane_cp04

0xa69a,	// (0x00048352) list_conf_pane

0xa6a2,	// (0x0004835a) popup_call_audio_conf_window_t1

0xa6b0,	// (0x00048368) call_thumbnail_pane_g1

0xa6b8,	// (0x00048370) bg_pinb_pane_ParamLimits

0xa6b8,	// (0x00048370) bg_pinb_pane

0xa6c6,	// (0x0004837e) find_pinb_pane

0xa6b8,	// (0x00048370) listscroll_pinb_pane_ParamLimits

0xa6b8,	// (0x00048370) listscroll_pinb_pane

0xa6d0,	// (0x00048388) pinb_bg_pane_g1

0xa6d0,	// (0x00048388) pinb_bg_pane_g2

0xa6d0,	// (0x00048388) pinb_bg_pane_g3

0xa6d0,	// (0x00048388) pinb_bg_pane_g4

0xa6d0,	// (0x00048388) pinb_bg_pane_g5

0xa6d0,	// (0x00048388) pinb_bg_pane_g6

0xa6d0,	// (0x00048388) pinb_bg_pane_g7

0xa6d0,	// (0x00048388) pinb_bg_pane_g8

0xa6d0,	// (0x00048388) pinb_bg_pane_g9

0xa6d0,	// (0x00048388) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0004cd3d) pinb_bg_pane_g

0x9ffd,	// (0x00047cb5) grid_pinb_pane

0x9ffd,	// (0x00047cb5) list_pinb_pane

0xa6da,	// (0x00048392) scroll_pane_cp01_ParamLimits

0xa6da,	// (0x00048392) scroll_pane_cp01

0xa6e8,	// (0x000483a0) find_pinb_pane_g1_ParamLimits

0xa6e8,	// (0x000483a0) find_pinb_pane_g1

0xa700,	// (0x000483b8) find_pinb_pane_t1

0xa712,	// (0x000483ca) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0004cd57) find_pinb_pane_t

0xa727,	// (0x000483df) input_focus_pane_cp01_ParamLimits

0xa727,	// (0x000483df) input_focus_pane_cp01

0xa68c,	// (0x00048344) cell_pinb_pane_ParamLimits

0xa68c,	// (0x00048344) cell_pinb_pane

0xa733,	// (0x000483eb) cell_pinb_pane_g1_ParamLimits

0xa733,	// (0x000483eb) cell_pinb_pane_g1

0xa741,	// (0x000483f9) cell_pinb_pane_g2_ParamLimits

0xa741,	// (0x000483f9) cell_pinb_pane_g2

0xa741,	// (0x000483f9) cell_pinb_pane_g3_ParamLimits

0xa741,	// (0x000483f9) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0004cd5c) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0004cd5c) cell_pinb_pane_g

0xa44f,	// (0x00048107) grid_highlight_pane_cp01

0xa68c,	// (0x00048344) list_pinb_item_pane_ParamLimits

0xa68c,	// (0x00048344) list_pinb_item_pane

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp02

0xa74f,	// (0x00048407) list_pinb_item_pane_g1_ParamLimits

0xa74f,	// (0x00048407) list_pinb_item_pane_g1

0xa741,	// (0x000483f9) list_pinb_item_pane_g2_ParamLimits

0xa741,	// (0x000483f9) list_pinb_item_pane_g2

0xa733,	// (0x000483eb) list_pinb_item_pane_g3_ParamLimits

0xa733,	// (0x000483eb) list_pinb_item_pane_g3

0xa741,	// (0x000483f9) list_pinb_item_pane_g4_ParamLimits

0xa741,	// (0x000483f9) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0004cd63) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0004cd63) list_pinb_item_pane_g

0xa75d,	// (0x00048415) list_pinb_item_pane_t1_ParamLimits

0xa75d,	// (0x00048415) list_pinb_item_pane_t1

0x1d22,	// (0x0003f9da) calc_display_pane

0x1d40,	// (0x0003f9f8) calc_paper_pane

0x1d5c,	// (0x0003fa14) grid_calc_pane

0xa44f,	// (0x00048107) bg_list_pane_cp01

0x1d88,	// (0x0003fa40) clock_g1

0x1d90,	// (0x0003fa48) clock_g2

0x0001,

0xf0b4,	// (0x0004cd6c) clock_g

0x1d9a,	// (0x0003fa52) clock_t1_ParamLimits

0x1d9a,	// (0x0003fa52) clock_t1

0x1daf,	// (0x0003fa67) clock_t2_ParamLimits

0x1daf,	// (0x0003fa67) clock_t2

0x1dc1,	// (0x0003fa79) clock_t3_ParamLimits

0x1dc1,	// (0x0003fa79) clock_t3

0x1dd3,	// (0x0003fa8b) clock_t4_ParamLimits

0x1dd3,	// (0x0003fa8b) clock_t4

0x1de5,	// (0x0003fa9d) clock_t5_ParamLimits

0x1de5,	// (0x0003fa9d) clock_t5

0x1dfa,	// (0x0003fab2) clock_t6_ParamLimits

0x1dfa,	// (0x0003fab2) clock_t6

0x1e0c,	// (0x0003fac4) clock_t7_ParamLimits

0x1e0c,	// (0x0003fac4) clock_t7

0x1e1e,	// (0x0003fad6) clock_t8_ParamLimits

0x1e1e,	// (0x0003fad6) clock_t8

0x1e34,	// (0x0003faec) clock_t9_ParamLimits

0x1e34,	// (0x0003faec) clock_t9

0x0008,

0xf0b9,	// (0x0004cd71) clock_t_ParamLimits

0xf0b9,	// (0x0004cd71) clock_t

0xa771,	// (0x00048429) popup_clock_analogue_window_cp02

0xa771,	// (0x00048429) popup_clock_digital_window_cp01

0xa44f,	// (0x00048107) listscroll_help_pane

0xa44f,	// (0x00048107) phob_pre_status_pane

0xa779,	// (0x00048431) grid_qdial_pane

0xa6b8,	// (0x00048370) listscroll_mce_pane

0xa6b8,	// (0x00048370) bg_notes_pane

0xa783,	// (0x0004843b) list_notes_pane

0x1e4a,	// (0x0003fb02) scroll_pane_cp06

0xa791,	// (0x00048449) bg_calc_paper_pane

0x1e59,	// (0x0003fb11) list_calc_pane

0xa7a5,	// (0x0004845d) bg_calc_display_pane

0x1e73,	// (0x0003fb2b) calc_display_pane_t1

0x1e88,	// (0x0003fb40) calc_display_pane_t2

0x1e9d,	// (0x0003fb55) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0004cd84) calc_display_pane_t

0x1eaf,	// (0x0003fb67) cell_calc_pane_ParamLimits

0x1eaf,	// (0x0003fb67) cell_calc_pane

0xa7b1,	// (0x00048469) bg_calc_paper_pane_g1

0xa7bd,	// (0x00048475) bg_calc_paper_pane_g2

0xa7c9,	// (0x00048481) bg_calc_paper_pane_g3

0xa7d5,	// (0x0004848d) bg_calc_paper_pane_g4

0xa7e1,	// (0x00048499) bg_calc_paper_pane_g5

0x1ede,	// (0x0003fb96) bg_calc_paper_pane_g6

0x1eef,	// (0x0003fba7) bg_calc_paper_pane_g7

0x1f00,	// (0x0003fbb8) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0004cd8b) bg_calc_paper_pane_g

0x1f11,	// (0x0003fbc9) calc_bg_paper_pane_g9

0x1f22,	// (0x0003fbda) list_calc_item_pane_ParamLimits

0x1f22,	// (0x0003fbda) list_calc_item_pane

0xa7ed,	// (0x000484a5) list_calc_item_pane_g1

0x1f43,	// (0x0003fbfb) list_calc_item_pane_t1_ParamLimits

0x1f43,	// (0x0003fbfb) list_calc_item_pane_t1

0x1f55,	// (0x0003fc0d) list_calc_item_pane_t2_ParamLimits

0x1f55,	// (0x0003fc0d) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0004cd9c) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0004cd9c) list_calc_item_pane_t

0xa6d0,	// (0x00048388) cell_calc_pane_g1

0xa7fa,	// (0x000484b2) grid_highlight_pane_cp02

0xd841,	// (0x0004b4f9) bg_calc_display_pane_g1

0x1f85,	// (0x0003fc3d) bg_calc_display_pane_g2

0xd84a,	// (0x0004b502) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0004cda6) bg_calc_display_pane_g

0x1f8f,	// (0x0003fc47) cell_qdial_pane_ParamLimits

0x1f8f,	// (0x0003fc47) cell_qdial_pane

0x1fa5,	// (0x0003fc5d) cell_qdial_pane_g1_ParamLimits

0x1fa5,	// (0x0003fc5d) cell_qdial_pane_g1

0x1fb2,	// (0x0003fc6a) cell_qdial_pane_g2_ParamLimits

0x1fb2,	// (0x0003fc6a) cell_qdial_pane_g2

0xa81c,	// (0x000484d4) cell_qdial_pane_g3_ParamLimits

0xa81c,	// (0x000484d4) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0004cdad) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0004cdad) cell_qdial_pane_g

0x1fd0,	// (0x0003fc88) cell_qdial_pane_t1_ParamLimits

0x1fd0,	// (0x0003fc88) cell_qdial_pane_t1

0x1fe8,	// (0x0003fca0) cell_qdial_pane_t2_ParamLimits

0x1fe8,	// (0x0003fca0) cell_qdial_pane_t2

0x1ffb,	// (0x0003fcb3) cell_qdial_pane_t3_ParamLimits

0x1ffb,	// (0x0003fcb3) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0004cdb6) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0004cdb6) cell_qdial_pane_t

0xa44f,	// (0x00048107) grid_highlight_pane_cp04

0xa828,	// (0x000484e0) thumbnail_qdial_pane_ParamLimits

0xa828,	// (0x000484e0) thumbnail_qdial_pane

0xa884,	// (0x0004853c) list_help_pane

0xa88d,	// (0x00048545) scroll_pane_cp02

0x200e,	// (0x0003fcc6) help_list_pane_t1_ParamLimits

0x200e,	// (0x0003fcc6) help_list_pane_t1

0x2035,	// (0x0003fced) bg_notes_pane_g2

0x203d,	// (0x0003fcf5) bg_notes_pane_g3

0x2045,	// (0x0003fcfd) notes_bg_pane_g1

0x204d,	// (0x0003fd05) notes_bg_pane_g4

0x2055,	// (0x0003fd0d) notes_bg_pane_g5

0x205d,	// (0x0003fd15) notes_bg_pane_g6

0x2065,	// (0x0003fd1d) notes_bg_pane_g7

0x206d,	// (0x0003fd25) notes_bg_pane_g8

0x2075,	// (0x0003fd2d) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0004cdd4) notes_bg_pane_g

0x207d,	// (0x0003fd35) list_notes_text_pane_ParamLimits

0x207d,	// (0x0003fd35) list_notes_text_pane

0xa896,	// (0x0004854e) list_notes_text_pane_g1

0x0ce6,	// (0x0003e99e) list_notes_text_pane_t1

0x20a5,	// (0x0003fd5d) listscroll_cale_week_pane

0x20d1,	// (0x0003fd89) bg_cale_heading_pane

0x20fa,	// (0x0003fdb2) bg_cale_pane_cp01

0x211c,	// (0x0003fdd4) cale_week_corner_pane

0x213b,	// (0x0003fdf3) cale_week_day_heading_pane

0x2169,	// (0x0003fe21) cale_week_scroll_pane_g1

0x218d,	// (0x0003fe45) cale_week_scroll_pane_g2

0x21a5,	// (0x0003fe5d) cale_week_scroll_pane_g3

0x21bd,	// (0x0003fe75) cale_week_scroll_pane_g4

0x21d5,	// (0x0003fe8d) cale_week_scroll_pane_g5

0x21ed,	// (0x0003fea5) cale_week_scroll_pane_g6

0x220d,	// (0x0003fec5) cale_week_scroll_pane_g7

0x222d,	// (0x0003fee5) cale_week_scroll_pane_g8

0x224d,	// (0x0003ff05) cale_week_scroll_pane_g9

0x226a,	// (0x0003ff22) cale_week_scroll_pane_g10

0x2287,	// (0x0003ff3f) cale_week_scroll_pane_g11

0x22a6,	// (0x0003ff5e) cale_week_scroll_pane_g12

0x22cb,	// (0x0003ff83) cale_week_scroll_pane_g13

0x22f4,	// (0x0003ffac) cale_week_scroll_pane_g14

0x231d,	// (0x0003ffd5) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0004cde3) cale_week_scroll_pane_g

0x2366,	// (0x0004001e) cale_week_time_pane

0x2386,	// (0x0004003e) grid_cale_week_pane

0xa8cb,	// (0x00048583) scroll_pane_cp08

0x23b7,	// (0x0004006f) cell_cale_week_pane_ParamLimits

0x23b7,	// (0x0004006f) cell_cale_week_pane

0x2447,	// (0x000400ff) cale_week_day_heading_pane_t1

0x246f,	// (0x00040127) cale_week_day_heading_pane_t2

0x249c,	// (0x00040154) cale_week_day_heading_pane_t3

0x24c9,	// (0x00040181) cale_week_day_heading_pane_t4

0x24f6,	// (0x000401ae) cale_week_day_heading_pane_t5

0x2523,	// (0x000401db) cale_week_day_heading_pane_t6

0x2550,	// (0x00040208) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0004ce04) cale_week_day_heading_pane_t

0xa8e8,	// (0x000485a0) bg_cale_side_pane

0x2578,	// (0x00040230) cale_week_time_pane_t1

0x259c,	// (0x00040254) cale_week_time_pane_t2

0x25c0,	// (0x00040278) cale_week_time_pane_t3

0x25e4,	// (0x0004029c) cale_week_time_pane_t4

0x2608,	// (0x000402c0) cale_week_time_pane_t5

0x262e,	// (0x000402e6) cale_week_time_pane_t6

0x2656,	// (0x0004030e) cale_week_time_pane_t7

0x2682,	// (0x0004033a) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0004ce13) cale_week_time_pane_t

0x26b2,	// (0x0004036a) cell_cale_week_pane_g2

0x26d6,	// (0x0004038e) cell_cale_week_pane_g3_ParamLimits

0x26d6,	// (0x0004038e) cell_cale_week_pane_g3

0xa8f6,	// (0x000485ae) grid_highlight_pane_cp07

0xa8fe,	// (0x000485b6) listscroll_gms_pane

0xa908,	// (0x000485c0) grid_gms_pane

0xa911,	// (0x000485c9) listscroll_gms_pane_g1

0xa919,	// (0x000485d1) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0004ce24) listscroll_gms_pane_g

0x26ee,	// (0x000403a6) scroll_pane_cp010

0x26f9,	// (0x000403b1) cell_gms_pane_ParamLimits

0x26f9,	// (0x000403b1) cell_gms_pane

0x270c,	// (0x000403c4) cell_gms_pane_g1

0xa921,	// (0x000485d9) cell_gms_pane_g2

0xa929,	// (0x000485e1) cell_gms_pane_g3

0xa932,	// (0x000485ea) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0004ce29) cell_gms_pane_g

0xa93b,	// (0x000485f3) grid_highlight_pane_cp09

0x480b,	// (0x000424c3) phob_pre_status_pane_g1

0x4813,	// (0x000424cb) phob_pre_status_pane_g2

0x481b,	// (0x000424d3) phob_pre_status_pane_g3

0x4823,	// (0x000424db) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x0004d1f2) phob_pre_status_pane_g

0x4833,	// (0x000424eb) phob_pre_status_pane_t1

0x4843,	// (0x000424fb) phob_pre_status_pane_t2

0x4853,	// (0x0004250b) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x0004d1fd) phob_pre_status_pane_t

0xa943,	// (0x000485fb) bg_list_pane_cp05

0x271c,	// (0x000403d4) grid_vorec_pane

0x2726,	// (0x000403de) vorec_t1

0x2734,	// (0x000403ec) vorec_t2

0x2742,	// (0x000403fa) vorec_t3

0x2750,	// (0x00040408) vorec_t4

0x9409,	// (0x000470c1) vorec_t5

0x9417,	// (0x000470cf) vorec_t6

0x0004,

0xf17a,	// (0x0004ce32) vorec_t

0x9425,	// (0x000470dd) wait_bar_pane_cp01

0x276c,	// (0x00040424) cell_vorec_pane_ParamLimits

0x276c,	// (0x00040424) cell_vorec_pane

0x2781,	// (0x00040439) cell_vorec_pane_g1

0xa44f,	// (0x00048107) grid_highlight_pane_cp05

0xa68c,	// (0x00048344) cams_zoom_pane

0xa68c,	// (0x00048344) image_vga_pane

0xa741,	// (0x000483f9) main_camera_pane_g1

0xa741,	// (0x000483f9) main_camera_pane_g2

0xa741,	// (0x000483f9) main_camera_pane_g3

0xa741,	// (0x000483f9) main_camera_pane_g4

0xa741,	// (0x000483f9) main_camera_pane_g5

0xa741,	// (0x000483f9) main_camera_pane_g6

0xa741,	// (0x000483f9) main_camera_pane_g7

0x0007,

0xf185,	// (0x0004ce3d) main_camera_pane_g

0xb358,	// (0x00049010) main_camera_pane_t1

0xb358,	// (0x00049010) main_camera_pane_t2

0x0001,

0xf196,	// (0x0004ce4e) main_camera_pane_t

0x278b,	// (0x00040443) cams_zoom_pane_cp_ParamLimits

0x278b,	// (0x00040443) cams_zoom_pane_cp

0x27b9,	// (0x00040471) image_cif_pane_ParamLimits

0x27b9,	// (0x00040471) image_cif_pane

0x9ffd,	// (0x00047cb5) image_subqcif_pane

0x27c7,	// (0x0004047f) main_video_pane_g1_ParamLimits

0x27c7,	// (0x0004047f) main_video_pane_g1

0x27ef,	// (0x000404a7) main_video_pane_g2_ParamLimits

0x27ef,	// (0x000404a7) main_video_pane_g2

0x2822,	// (0x000404da) main_video_pane_g3_ParamLimits

0x2822,	// (0x000404da) main_video_pane_g3

0x2822,	// (0x000404da) main_video_pane_g4_ParamLimits

0x2822,	// (0x000404da) main_video_pane_g4

0x2850,	// (0x00040508) main_video_pane_g5_ParamLimits

0x2850,	// (0x00040508) main_video_pane_g5

0xa94b,	// (0x00048603) main_video_pane_g6_ParamLimits

0xa94b,	// (0x00048603) main_video_pane_g6

0x0006,

0xf19b,	// (0x0004ce53) main_video_pane_g_ParamLimits

0xf19b,	// (0x0004ce53) main_video_pane_g

0x286c,	// (0x00040524) main_video_pane_t1_ParamLimits

0x286c,	// (0x00040524) main_video_pane_t1

0xa965,	// (0x0004861d) cams_zoom_pane_g1

0xa965,	// (0x0004861d) cams_zoom_pane_g2

0xa965,	// (0x0004861d) cams_zoom_pane_g3

0xa965,	// (0x0004861d) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0004ce62) cams_zoom_pane_g

0x28b2,	// (0x0004056a) grid_cams_pane

0x28c0,	// (0x00040578) linegrid_cams_pane

0x28cc,	// (0x00040584) cell_cams_pane_ParamLimits

0x28cc,	// (0x00040584) cell_cams_pane

0xa96f,	// (0x00048627) cams_burst_image_pane

0xa977,	// (0x0004862f) cell_cams_pane_g1

0xa44f,	// (0x00048107) grid_highlight_pane_cp03

0xa6d0,	// (0x00048388) mp_bg_pane_g1

0x9ffd,	// (0x00047cb5) bg_list_pane_cp03

0x9ffd,	// (0x00047cb5) bg_mp_pane

0x9ffd,	// (0x00047cb5) grid_mp_pane

0xa965,	// (0x0004861d) media_player_g1

0xaed4,	// (0x00048b8c) media_player_t1

0xaed4,	// (0x00048b8c) media_player_t2

0xaed4,	// (0x00048b8c) media_player_t3

0xaed4,	// (0x00048b8c) media_player_t4

0xaed4,	// (0x00048b8c) media_player_t5

0xaed4,	// (0x00048b8c) media_player_t6

0xaed4,	// (0x00048b8c) media_player_t7

0x0006,

0xf524,	// (0x0004d1dc) media_player_t

0x9ffd,	// (0x00047cb5) wait_bar_pane_cp02

0xf509,	// (0x0004d1c1) main_usb_pane_t

0xb13f,	// (0x00048df7) cell_mp_pane

0xa6d0,	// (0x00048388) cell_mp_pane_g1

0xa44f,	// (0x00048107) grid_highlight_pane_cp06

0xa993,	// (0x0004864b) grid_skin_colour_pane

0xa99b,	// (0x00048653) list_highlight_pane_cp03

0x28e1,	// (0x00040599) skin_g1

0xa9a3,	// (0x0004865b) skin_t1

0xa9b2,	// (0x0004866a) skin_t2

0x0001,

0xf1d8,	// (0x0004ce90) skin_t

0x28eb,	// (0x000405a3) cell_skin_colour_pane_ParamLimits

0x28eb,	// (0x000405a3) cell_skin_colour_pane

0xa9c0,	// (0x00048678) cell_skin_colour_pane_g1

0x296b,	// (0x00040623) call_video_g1_ParamLimits

0x296b,	// (0x00040623) call_video_g1

0x297b,	// (0x00040633) call_video_g2_ParamLimits

0x297b,	// (0x00040633) call_video_g2

0x0001,

0xf1dd,	// (0x0004ce95) call_video_g_ParamLimits

0xf1dd,	// (0x0004ce95) call_video_g

0x29cb,	// (0x00040683) call_video_uplink_pane_cp1_ParamLimits

0x29cb,	// (0x00040683) call_video_uplink_pane_cp1

0xa9d2,	// (0x0004868a) call_video_uplink_pane_cp2

0x2a99,	// (0x00040751) video_down_crop_pane_ParamLimits

0x2a99,	// (0x00040751) video_down_crop_pane

0x2b8b,	// (0x00040843) video_down_pane_ParamLimits

0x2b8b,	// (0x00040843) video_down_pane

0xa9da,	// (0x00048692) video_down_subqcif_pane_ParamLimits

0xa9da,	// (0x00048692) video_down_subqcif_pane

0xa9f4,	// (0x000486ac) video_down_subqcif_pane_cp_ParamLimits

0xa9f4,	// (0x000486ac) video_down_subqcif_pane_cp

0xaa1c,	// (0x000486d4) im_reading_pane_ParamLimits

0xaa1c,	// (0x000486d4) im_reading_pane

0x2ca8,	// (0x00040960) im_writing_pane_ParamLimits

0x2ca8,	// (0x00040960) im_writing_pane

0x2cc6,	// (0x0004097e) im_reading_pane_t1

0xaa36,	// (0x000486ee) list_im_pane

0xaa47,	// (0x000486ff) scroll_pane_cp07

0x2d08,	// (0x000409c0) im_writing_pane_t1_ParamLimits

0x2d08,	// (0x000409c0) im_writing_pane_t1

0xaa60,	// (0x00048718) im_writing_pane_t2_ParamLimits

0xaa60,	// (0x00048718) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0004ce9f) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0004ce9f) im_writing_pane_t

0xa44f,	// (0x00048107) input_focus_pane_cp04

0xa44f,	// (0x00048107) input_focus_pane_cp05

0x2d1a,	// (0x000409d2) list_im_single_pane_ParamLimits

0x2d1a,	// (0x000409d2) list_im_single_pane

0xaa7d,	// (0x00048735) list_single_im_pane_t1

0xa943,	// (0x000485fb) blid_accuracy_pane

0xa943,	// (0x000485fb) blid_compass_pane

0xc5bc,	// (0x0004a274) main_location_t1

0xc5bc,	// (0x0004a274) main_location_t2

0xc5bc,	// (0x0004a274) main_location_t3

0x0002,

0xf533,	// (0x0004d1eb) main_location_t

0xa44f,	// (0x00048107) aid_levels_location

0xa6d0,	// (0x00048388) blid_accuracy_pane_g1

0xa6d0,	// (0x00048388) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0004cef3) blid_accuracy_pane_g

0xaab7,	// (0x0004876f) wml_content_pane

0xaaf5,	// (0x000487ad) wml_button_pane_ParamLimits

0xaaf5,	// (0x000487ad) wml_button_pane

0x2d33,	// (0x000409eb) wml_list_single_large_pane_ParamLimits

0x2d33,	// (0x000409eb) wml_list_single_large_pane

0x2d55,	// (0x00040a0d) wml_list_single_medium_pane_ParamLimits

0x2d55,	// (0x00040a0d) wml_list_single_medium_pane

0x2d78,	// (0x00040a30) wml_list_single_small_pane_ParamLimits

0x2d78,	// (0x00040a30) wml_list_single_small_pane

0xab09,	// (0x000487c1) wml_selection_box_pane_ParamLimits

0xab09,	// (0x000487c1) wml_selection_box_pane

0xab1c,	// (0x000487d4) wml_list_single_pane_t1

0xab2b,	// (0x000487e3) wml_list_single_medium_pane_t1

0xab3a,	// (0x000487f2) wml_list_single_large_pane_t1

0xab49,	// (0x00048801) input_focus_pane_cp02_ParamLimits

0xab49,	// (0x00048801) input_focus_pane_cp02

0xab5c,	// (0x00048814) wml_selection_box_pane_g1

0xab65,	// (0x0004881d) wml_selection_box_pane_t1_ParamLimits

0xab65,	// (0x0004881d) wml_selection_box_pane_t1

0xa6b8,	// (0x00048370) bg_wml_button_pane_ParamLimits

0xa6b8,	// (0x00048370) bg_wml_button_pane

0xab7d,	// (0x00048835) wml_button_pane_g1

0xab85,	// (0x0004883d) wml_button_pane_t1

0xab7d,	// (0x00048835) wml_button_bg_pane_g1

0xab95,	// (0x0004884d) wml_button_bg_pane_g2

0xab9d,	// (0x00048855) wml_button_bg_pane_g3

0xaba5,	// (0x0004885d) wml_button_bg_pane_g4

0xabad,	// (0x00048865) wml_button_bg_pane_g5

0xabb5,	// (0x0004886d) wml_button_bg_pane_g6

0xabbd,	// (0x00048875) wml_button_bg_pane_g7

0xabc5,	// (0x0004887d) wml_button_bg_pane_g8

0xabcd,	// (0x00048885) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0004cea4) wml_button_bg_pane_g

0x2da0,	// (0x00040a58) bg_list_pane_cp02

0xabd5,	// (0x0004888d) mce_header_pane_ParamLimits

0xabd5,	// (0x0004888d) mce_header_pane

0xabeb,	// (0x000488a3) mce_icon_pane

0xabeb,	// (0x000488a3) mce_image_pane

0xabf4,	// (0x000488ac) mce_text_pane_ParamLimits

0xabf4,	// (0x000488ac) mce_text_pane

0x2daa,	// (0x00040a62) scroll_pane_cp03

0xaaed,	// (0x000487a5) scroll_pane_cp04

0xac07,	// (0x000488bf) scroll_pane_cp05_ParamLimits

0xac07,	// (0x000488bf) scroll_pane_cp05

0x2db4,	// (0x00040a6c) mce_header_field_pane_ParamLimits

0x2db4,	// (0x00040a6c) mce_header_field_pane

0x2dd6,	// (0x00040a8e) mce_header_field_pane_2_ParamLimits

0x2dd6,	// (0x00040a8e) mce_header_field_pane_2

0x2dec,	// (0x00040aa4) mce_header_field_pane_3

0x2df4,	// (0x00040aac) list_single_mce_message_pane_ParamLimits

0x2df4,	// (0x00040aac) list_single_mce_message_pane

0x2e13,	// (0x00040acb) list_single_mce_smart_pane_ParamLimits

0x2e13,	// (0x00040acb) list_single_mce_smart_pane

0xac13,	// (0x000488cb) input_focus_pane_cp03

0xac1c,	// (0x000488d4) list_header_data_pane

0x2e3d,	// (0x00040af5) mce_header_field_pane_t1

0x2e4d,	// (0x00040b05) list_single_mce_header_pane_ParamLimits

0x2e4d,	// (0x00040b05) list_single_mce_header_pane

0xac24,	// (0x000488dc) list_single_mce_header_pane_t1

0xac33,	// (0x000488eb) list_single_mce_message_pane_g1

0xac3b,	// (0x000488f3) list_single_mce_message_pane_t1

0x2e91,	// (0x00040b49) bg_cale_heading_pane_cp01_ParamLimits

0x2e91,	// (0x00040b49) bg_cale_heading_pane_cp01

0xac49,	// (0x00048901) bg_cale_pane_cp02_ParamLimits

0xac49,	// (0x00048901) bg_cale_pane_cp02

0x2ee3,	// (0x00040b9b) cale_month_corner_pane

0x2f02,	// (0x00040bba) cale_month_day_heading_pane_ParamLimits

0x2f02,	// (0x00040bba) cale_month_day_heading_pane

0x2f64,	// (0x00040c1c) cale_month_pane_g1_ParamLimits

0x2f64,	// (0x00040c1c) cale_month_pane_g1

0x2fab,	// (0x00040c63) cale_month_pane_g2_ParamLimits

0x2fab,	// (0x00040c63) cale_month_pane_g2

0x2fe3,	// (0x00040c9b) cale_month_pane_g3_ParamLimits

0x2fe3,	// (0x00040c9b) cale_month_pane_g3

0x3037,	// (0x00040cef) cale_month_pane_g4_ParamLimits

0x3037,	// (0x00040cef) cale_month_pane_g4

0x308b,	// (0x00040d43) cale_month_pane_g5_ParamLimits

0x308b,	// (0x00040d43) cale_month_pane_g5

0x30df,	// (0x00040d97) cale_month_pane_g6_ParamLimits

0x30df,	// (0x00040d97) cale_month_pane_g6

0x3143,	// (0x00040dfb) cale_month_pane_g7_ParamLimits

0x3143,	// (0x00040dfb) cale_month_pane_g7

0x31a7,	// (0x00040e5f) cale_month_pane_g8_ParamLimits

0x31a7,	// (0x00040e5f) cale_month_pane_g8

0x320b,	// (0x00040ec3) cale_month_pane_g9_ParamLimits

0x320b,	// (0x00040ec3) cale_month_pane_g9

0x3265,	// (0x00040f1d) cale_month_pane_g10_ParamLimits

0x3265,	// (0x00040f1d) cale_month_pane_g10

0x32b7,	// (0x00040f6f) cale_month_pane_g11_ParamLimits

0x32b7,	// (0x00040f6f) cale_month_pane_g11

0x3305,	// (0x00040fbd) cale_month_pane_g12_ParamLimits

0x3305,	// (0x00040fbd) cale_month_pane_g12

0x3355,	// (0x0004100d) cale_month_pane_g13_ParamLimits

0x3355,	// (0x0004100d) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0004ceb7) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0004ceb7) cale_month_pane_g

0x33a5,	// (0x0004105d) cale_month_week_pane

0x33c5,	// (0x0004107d) grid_cale_month_pane_ParamLimits

0x33c5,	// (0x0004107d) grid_cale_month_pane

0x341e,	// (0x000410d6) cale_month_day_heading_pane_t1

0x34a0,	// (0x00041158) cale_month_day_heading_pane_t2

0x3519,	// (0x000411d1) cale_month_day_heading_pane_t3

0x3592,	// (0x0004124a) cale_month_day_heading_pane_t4

0x360b,	// (0x000412c3) cale_month_day_heading_pane_t5

0x368c,	// (0x00041344) cale_month_day_heading_pane_t6

0x3715,	// (0x000413cd) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0004ced2) cale_month_day_heading_pane_t

0xa8e8,	// (0x000485a0) bg_cale_side_pane_cp01

0x379e,	// (0x00041456) cale_month_week_pane_t1

0x37b7,	// (0x0004146f) cale_month_week_pane_t2

0x37d0,	// (0x00041488) cale_month_week_pane_t3

0x37e9,	// (0x000414a1) cale_month_week_pane_t4

0x3802,	// (0x000414ba) cale_month_week_pane_t5

0x381f,	// (0x000414d7) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0004cee1) cale_month_week_pane_t

0x3842,	// (0x000414fa) cell_cale_month_pane_ParamLimits

0x3842,	// (0x000414fa) cell_cale_month_pane

0x3970,	// (0x00041628) cell_cale_month_pane_g1

0x397c,	// (0x00041634) cell_cale_month_pane_t1_ParamLimits

0x397c,	// (0x00041634) cell_cale_month_pane_t1

0xa8f6,	// (0x000485ae) grid_highlight_pane_cp08

0xa6d0,	// (0x00048388) main_smil_g1

0x39a8,	// (0x00041660) smil_status_pane

0xac88,	// (0x00048940) smil_text_pane

0xc4d2,	// (0x0004a18a) bg_popup_call3_rect_pane_g8

0xc4da,	// (0x0004a192) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0004d17f) bg_popup_call3_rect_pane_g

0xc685,	// (0x0004a33d) smil_status_volume_pane_g1

0xac92,	// (0x0004894a) smil_status_pane_t1

0x4bc8,	// (0x00042880) volume_smil_pane

0xaca9,	// (0x00048961) list_smil_text_pane

0x39bb,	// (0x00041673) scroll_pane_cp011

0x39c6,	// (0x0004167e) smil_text_list_pane_t1_ParamLimits

0x39c6,	// (0x0004167e) smil_text_list_pane_t1

0x3a1a,	// (0x000416d2) aid_volume_smil_ParamLimits

0x3a1a,	// (0x000416d2) aid_volume_smil

0xa6d0,	// (0x00048388) smil_volume_pane_g1

0xa6d0,	// (0x00048388) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0004cef3) smil_volume_pane_g

0x20a5,	// (0x0003fd5d) listscroll_cale_day_pane

0xacb3,	// (0x0004896b) bg_cale_pane

0xaccb,	// (0x00048983) list_cale_pane

0xacee,	// (0x000489a6) scroll_pane_cp09

0xad08,	// (0x000489c0) cale_bg_pane_g1

0xad10,	// (0x000489c8) cale_bg_pane_g2

0xad18,	// (0x000489d0) cale_bg_pane_g3

0xad20,	// (0x000489d8) cale_bg_pane_g4

0xad28,	// (0x000489e0) cale_bg_pane_g5

0xad30,	// (0x000489e8) cale_bg_pane_g6

0xad38,	// (0x000489f0) cale_bg_pane_g7

0xad40,	// (0x000489f8) cale_bg_pane_g8

0xad48,	// (0x00048a00) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0004cef8) cale_bg_pane_g

0xad50,	// (0x00048a08) list_cale_time_pane_ParamLimits

0xad50,	// (0x00048a08) list_cale_time_pane

0xad67,	// (0x00048a1f) list_cale_time_pane_g1_ParamLimits

0xad67,	// (0x00048a1f) list_cale_time_pane_g1

0xad73,	// (0x00048a2b) list_cale_time_pane_g2_ParamLimits

0xad73,	// (0x00048a2b) list_cale_time_pane_g2

0x3a44,	// (0x000416fc) list_cale_time_pane_g3_ParamLimits

0x3a44,	// (0x000416fc) list_cale_time_pane_g3

0x3a52,	// (0x0004170a) list_cale_time_pane_g4_ParamLimits

0x3a52,	// (0x0004170a) list_cale_time_pane_g4

0x3a60,	// (0x00041718) list_cale_time_pane_g5_ParamLimits

0x3a60,	// (0x00041718) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0004cf0b) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0004cf0b) list_cale_time_pane_g

0xad8d,	// (0x00048a45) list_cale_time_pane_t1_ParamLimits

0xad8d,	// (0x00048a45) list_cale_time_pane_t1

0xadb5,	// (0x00048a6d) list_cale_time_pane_t2_ParamLimits

0xadb5,	// (0x00048a6d) list_cale_time_pane_t2

0x3d32,	// (0x000419ea) aid_blid_cardinal_pane

0x3d74,	// (0x00041a2c) compass_pane_t4

0xaddd,	// (0x00048a95) list_cale_time_pane_t4_ParamLimits

0xaddd,	// (0x00048a95) list_cale_time_pane_t4

0x3d82,	// (0x00041a3a) compass_pane_t5

0x3d92,	// (0x00041a4a) compass_pane_t6

0x3da0,	// (0x00041a58) compass_pane_t7

0xb1ef,	// (0x00048ea7) navi_pane_cc_t1

0xb33c,	// (0x00048ff4) aid_phob_thumbnail_center_pane

0x429f,	// (0x00041f57) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0004cf18) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0004cf18) list_cale_time_pane_t

0xa0a6,	// (0x00047d5e) bg_popup_window_pane_cp02_ParamLimits

0xa0a6,	// (0x00047d5e) bg_popup_window_pane_cp02

0xae05,	// (0x00048abd) heading_pane_cp01_ParamLimits

0xae05,	// (0x00048abd) heading_pane_cp01

0xae11,	// (0x00048ac9) loc_req_pane_ParamLimits

0xae11,	// (0x00048ac9) loc_req_pane

0xae21,	// (0x00048ad9) loc_type_pane_ParamLimits

0xae21,	// (0x00048ad9) loc_type_pane

0xae33,	// (0x00048aeb) loc_type_pane_t1_ParamLimits

0xae33,	// (0x00048aeb) loc_type_pane_t1

0xae45,	// (0x00048afd) loc_type_pane_t2_ParamLimits

0xae45,	// (0x00048afd) loc_type_pane_t2

0xae57,	// (0x00048b0f) loc_type_pane_t3_ParamLimits

0xae57,	// (0x00048b0f) loc_type_pane_t3

0x0002,

0xf267,	// (0x0004cf1f) loc_type_pane_t_ParamLimits

0xf267,	// (0x0004cf1f) loc_type_pane_t

0xae69,	// (0x00048b21) list_loc_req_pane

0xae73,	// (0x00048b2b) scroll_pane_cp012

0x3a6e,	// (0x00041726) list_single_loc_request_popup_menu_pane_ParamLimits

0x3a6e,	// (0x00041726) list_single_loc_request_popup_menu_pane

0xae7e,	// (0x00048b36) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae7e,	// (0x00048b36) list_single_loc_request_popup_menu_pane_g1

0xae8a,	// (0x00048b42) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae8a,	// (0x00048b42) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0004cf26) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0004cf26) list_single_loc_request_popup_menu_pane_g

0xae96,	// (0x00048b4e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xae96,	// (0x00048b4e) list_single_loc_request_popup_menu_pane_t1

0x3a80,	// (0x00041738) bg_popup_window_pane_cp03_ParamLimits

0x3a80,	// (0x00041738) bg_popup_window_pane_cp03

0x3a8e,	// (0x00041746) heading_loc_req_pane_ParamLimits

0x3a8e,	// (0x00041746) heading_loc_req_pane

0x3a9a,	// (0x00041752) popup_dyc_status_message_window_g1_ParamLimits

0x3a9a,	// (0x00041752) popup_dyc_status_message_window_g1

0x3aa6,	// (0x0004175e) popup_dyc_status_message_window_t1_ParamLimits

0x3aa6,	// (0x0004175e) popup_dyc_status_message_window_t1

0x3ab8,	// (0x00041770) popup_dyc_status_message_window_t2_ParamLimits

0x3ab8,	// (0x00041770) popup_dyc_status_message_window_t2

0x3aca,	// (0x00041782) popup_dyc_status_message_window_t3_ParamLimits

0x3aca,	// (0x00041782) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0004cf2b) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0004cf2b) popup_dyc_status_message_window_t

0xa44f,	// (0x00048107) bg_heading_pane_cp01

0xaeac,	// (0x00048b64) heading_loc_req_pane_g1

0xaeb4,	// (0x00048b6c) heading_loc_req_pane_g2

0xaebc,	// (0x00048b74) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0004cf32) heading_loc_req_pane_g

0xaec4,	// (0x00048b7c) heading_loc_req_pane_t1

0xaee4,	// (0x00048b9c) bg_popup_sub_pane_cp01_ParamLimits

0xaee4,	// (0x00048b9c) bg_popup_sub_pane_cp01

0xaef2,	// (0x00048baa) popup_cale_events_window_g1_ParamLimits

0xaef2,	// (0x00048baa) popup_cale_events_window_g1

0xaf12,	// (0x00048bca) popup_cale_events_window_g2_ParamLimits

0xaf12,	// (0x00048bca) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0004cf54) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0004cf54) popup_cale_events_window_g

0xaf32,	// (0x00048bea) popup_cale_events_window_t1_ParamLimits

0xaf32,	// (0x00048bea) popup_cale_events_window_t1

0xaf44,	// (0x00048bfc) popup_cale_events_window_t2_ParamLimits

0xaf44,	// (0x00048bfc) popup_cale_events_window_t2

0xaf82,	// (0x00048c3a) popup_cale_events_window_t3_ParamLimits

0xaf82,	// (0x00048c3a) popup_cale_events_window_t3

0xafbc,	// (0x00048c74) popup_cale_events_window_t4_ParamLimits

0xafbc,	// (0x00048c74) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0004cf59) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0004cf59) popup_cale_events_window_t

0x3af4,	// (0x000417ac) call_type_pane

0xb9b9,	// (0x00049671) popup_call_status_window_g1

0x3b00,	// (0x000417b8) popup_call_status_window_g2

0x3b0c,	// (0x000417c4) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0004cf62) popup_call_status_window_g

0xaff2,	// (0x00048caa) call_type_pane_g1

0xaffb,	// (0x00048cb3) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0004cf69) call_type_pane_g

0xa44f,	// (0x00048107) bg_popup_sub_pane_cp02

0xb004,	// (0x00048cbc) listscroll_popup_wml_pane

0xb00c,	// (0x00048cc4) list_wml_pane

0xb016,	// (0x00048cce) scroll_pane_cp013

0xb021,	// (0x00048cd9) list_single_graphic_popup_wml_pane_ParamLimits

0xb021,	// (0x00048cd9) list_single_graphic_popup_wml_pane

0xa6d0,	// (0x00048388) list_single_graphic_popup_wml_pane_g1

0xb035,	// (0x00048ced) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0004cf6e) list_single_graphic_popup_wml_pane_g

0xb03d,	// (0x00048cf5) list_single_graphic_popup_wml_pane_t1

0xb053,	// (0x00048d0b) aid_call_pane

0xa6b0,	// (0x00048368) popup_clock_analogue_window_g1

0xa6b0,	// (0x00048368) popup_clock_analogue_window_g2

0x3b18,	// (0x000417d0) popup_clock_analogue_window_g3

0x3b18,	// (0x000417d0) popup_clock_analogue_window_g4

0xa6d0,	// (0x00048388) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0004cf73) popup_clock_analogue_window_g

0x3b20,	// (0x000417d8) popup_clock_analogue_window_t1

0x3b2e,	// (0x000417e6) clock_digital_number_pane_ParamLimits

0x3b2e,	// (0x000417e6) clock_digital_number_pane

0x3b3a,	// (0x000417f2) clock_digital_number_pane_cp02_ParamLimits

0x3b3a,	// (0x000417f2) clock_digital_number_pane_cp02

0x3b46,	// (0x000417fe) clock_digital_number_pane_cp03_ParamLimits

0x3b46,	// (0x000417fe) clock_digital_number_pane_cp03

0x3b52,	// (0x0004180a) clock_digital_number_pane_cp04_ParamLimits

0x3b52,	// (0x0004180a) clock_digital_number_pane_cp04

0x3b5e,	// (0x00041816) clock_digital_separator_pane_ParamLimits

0x3b5e,	// (0x00041816) clock_digital_separator_pane

0x3b6a,	// (0x00041822) popup_clock_digital_window_t1

0xa6d0,	// (0x00048388) clock_digital_number_pane_g1

0xa6d0,	// (0x00048388) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0004cef3) clock_digital_number_pane_g

0xa6d0,	// (0x00048388) clock_digital_separator_pane_g1

0xa6d0,	// (0x00048388) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0004cef3) clock_digital_separator_pane_g

0xa44f,	// (0x00048107) bg_popup_window_pane_cp04

0xb05b,	// (0x00048d13) heading_pane_cp03

0xa943,	// (0x000485fb) listscroll_popup_gms_pane

0xa44f,	// (0x00048107) grid_large_graphic_popup_pane

0xb064,	// (0x00048d1c) listscroll_popup_gms_pane_g1

0xb06d,	// (0x00048d25) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0004cf7e) listscroll_popup_gms_pane_g

0xb076,	// (0x00048d2e) scroll_pane_cp014

0xa68c,	// (0x00048344) cell_large_graphic_popup_pane_ParamLimits

0xa68c,	// (0x00048344) cell_large_graphic_popup_pane

0xa733,	// (0x000483eb) cell_large_graphic_popup_pane_g1_ParamLimits

0xa733,	// (0x000483eb) cell_large_graphic_popup_pane_g1

0xb07f,	// (0x00048d37) cell_large_graphic_popup_pane_g2_ParamLimits

0xb07f,	// (0x00048d37) cell_large_graphic_popup_pane_g2

0xb08d,	// (0x00048d45) cell_large_graphic_popup_pane_g3_ParamLimits

0xb08d,	// (0x00048d45) cell_large_graphic_popup_pane_g3

0xb09b,	// (0x00048d53) cell_large_graphic_popup_pane_g4_ParamLimits

0xb09b,	// (0x00048d53) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0004cf83) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0004cf83) cell_large_graphic_popup_pane_g

0xa44f,	// (0x00048107) grid_highlight_pane_cp010

0xa6d0,	// (0x00048388) bg_popup_call_pane_g1

0xb0ac,	// (0x00048d64) list_single_graphic_popup_conf_pane_ParamLimits

0xb0ac,	// (0x00048d64) list_single_graphic_popup_conf_pane

0xb0be,	// (0x00048d76) list_highlight_pane_cp01

0xb0c7,	// (0x00048d7f) list_single_graphic_popup_conf_pane_g1

0xb0cf,	// (0x00048d87) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0004cf8c) list_single_graphic_popup_conf_pane_g

0xb0d7,	// (0x00048d8f) list_single_graphic_popup_conf_pane_t1

0xb0e5,	// (0x00048d9d) linegrid_cams_pane_g1

0x3b87,	// (0x0004183f) linegrid_cams_pane_g2

0xa929,	// (0x000485e1) linegrid_cams_pane_g3

0xb0ee,	// (0x00048da6) linegrid_cams_pane_g4

0x3b90,	// (0x00041848) linegrid_cams_pane_g5

0x3b99,	// (0x00041851) linegrid_cams_pane_g6

0xa932,	// (0x000485ea) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0004cf91) linegrid_cams_pane_g

0xb0f7,	// (0x00048daf) popup_clock_analogue_window

0xb0f7,	// (0x00048daf) popup_clock_digital_window

0xa44f,	// (0x00048107) popup_phob_thumbnail_window

0xa6d0,	// (0x00048388) call_video_uplink_pane_g1

0xb100,	// (0x00048db8) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0004cfa0) call_video_uplink_pane_g

0xb108,	// (0x00048dc0) video_uplink_pane

0xb110,	// (0x00048dc8) mce_image_pane_g1

0x3ba4,	// (0x0004185c) mce_image_pane_g2

0x3bae,	// (0x00041866) mce_image_pane_g3

0x3bb8,	// (0x00041870) mce_image_pane_g4

0x3bc0,	// (0x00041878) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0004cfa5) mce_image_pane_g

0xb11a,	// (0x00048dd2) control_top_pane_stacon_cp01_ParamLimits

0xb11a,	// (0x00048dd2) control_top_pane_stacon_cp01

0xb12e,	// (0x00048de6) uni_indicator_pane_stacon_cp01_ParamLimits

0xb12e,	// (0x00048de6) uni_indicator_pane_stacon_cp01

0xb13f,	// (0x00048df7) bg_popup_sub_pane_cp03

0x3bc8,	// (0x00041880) chi_dic_find_pane

0x3bd0,	// (0x00041888) listscroll_chi_dic_pane

0x3bd9,	// (0x00041891) main_pane_chidic_g1

0x3bec,	// (0x000418a4) chi_dic_find_pane_t1

0xb149,	// (0x00048e01) find_chidic_pane

0xb152,	// (0x00048e0a) chi_dic_list_pane_ParamLimits

0xb152,	// (0x00048e0a) chi_dic_list_pane

0xb163,	// (0x00048e1b) scroll_pane_cp020

0x3bfa,	// (0x000418b2) find_chidic_pane_t1

0xa44f,	// (0x00048107) input_focus_pane_cp06

0x3c09,	// (0x000418c1) list_chi_dic_pane_ParamLimits

0x3c09,	// (0x000418c1) list_chi_dic_pane

0x3c1e,	// (0x000418d6) list_chi_dic_pane_t1_ParamLimits

0x3c1e,	// (0x000418d6) list_chi_dic_pane_t1

0xa44f,	// (0x00048107) list_highlight_pane_cp020

0xb16b,	// (0x00048e23) bg_cale_heading_pane_g1

0x3c31,	// (0x000418e9) bg_cale_heading_pane_g2

0x3c39,	// (0x000418f1) bg_cale_heading_pane_g3

0x3c41,	// (0x000418f9) bg_cale_heading_pane_g4

0x3c4b,	// (0x00041903) bg_cale_heading_pane_g5

0x3c55,	// (0x0004190d) bg_cale_heading_pane_g6

0x3c5d,	// (0x00041915) bg_cale_heading_pane_g7

0x3c65,	// (0x0004191d) bg_cale_heading_pane_g8

0x3c6f,	// (0x00041927) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0004cfb0) bg_cale_heading_pane_g

0xb16b,	// (0x00048e23) bg_cale_side_pane_g1

0x3c79,	// (0x00041931) bg_cale_side_pane_g2

0x3c83,	// (0x0004193b) bg_cale_side_pane_g3

0x3c8d,	// (0x00041945) bg_cale_side_pane_g4

0x3c97,	// (0x0004194f) bg_cale_side_pane_g5

0x3ca1,	// (0x00041959) bg_cale_side_pane_g6

0x3cab,	// (0x00041963) bg_cale_side_pane_g7

0x3cb5,	// (0x0004196d) bg_cale_side_pane_g8

0x3cbd,	// (0x00041975) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0004cfc3) bg_cale_side_pane_g

0x3cc5,	// (0x0004197d) popup_call_status_window_ParamLimits

0x3cc5,	// (0x0004197d) popup_call_status_window

0xb173,	// (0x00048e2b) stacon_top_pane

0xb17b,	// (0x00048e33) status_pane_ParamLimits

0xb17b,	// (0x00048e33) status_pane

0xb190,	// (0x00048e48) status_small_pane

0xb198,	// (0x00048e50) control_pane

0xa44f,	// (0x00048107) stacon_bottom_pane

0xb1a0,	// (0x00048e58) list_single_mce_smart_pane_t1_ParamLimits

0xb1a0,	// (0x00048e58) list_single_mce_smart_pane_t1

0xb1b3,	// (0x00048e6b) list_single_mce_smart_pane_t2_ParamLimits

0xb1b3,	// (0x00048e6b) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0004cfd6) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0004cfd6) list_single_mce_smart_pane_t

0x3cd1,	// (0x00041989) compass_pane

0x3cdc,	// (0x00041994) main_location2_pane_t1

0x3cf2,	// (0x000419aa) main_location2_pane_t2

0x3d08,	// (0x000419c0) main_location2_pane_t3

0x0003,

0xf323,	// (0x0004cfdb) main_location2_pane_t

0xb1d2,	// (0x00048e8a) compass_pane_g1_ParamLimits

0xb1d2,	// (0x00048e8a) compass_pane_g1

0x3d56,	// (0x00041a0e) compass_pane_t1

0x3d65,	// (0x00041a1d) compass_pane_t2

0x0005,

0xf32c,	// (0x0004cfe4) compass_pane_t

0x3db0,	// (0x00041a68) text_secondary_cp61

0xb1e6,	// (0x00048e9e) navi_pane_cams_g5

0xb209,	// (0x00048ec1) navi_pane_im_t1

0xb217,	// (0x00048ecf) navi_pane_mp_g1_ParamLimits

0xb217,	// (0x00048ecf) navi_pane_mp_g1

0xb22b,	// (0x00048ee3) navi_pane_mp_g2_ParamLimits

0xb22b,	// (0x00048ee3) navi_pane_mp_g2

0xb237,	// (0x00048eef) navi_pane_mp_g3_ParamLimits

0xb237,	// (0x00048eef) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0004cff8) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0004cff8) navi_pane_mp_g

0xb243,	// (0x00048efb) navi_pane_mp_t1

0xb251,	// (0x00048f09) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0004cfff) navi_pane_mp_t

0xb28d,	// (0x00048f45) navi_pane_vt_g1

0xb243,	// (0x00048efb) navi_pane_vt_t1

0xb295,	// (0x00048f4d) navi_slider_pane

0xa943,	// (0x000485fb) zooming_pane

0xb29d,	// (0x00048f55) navi_slider_pane_g1

0x3ee5,	// (0x00041b9d) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0004d006) navi_slider_pane_g

0xb2c1,	// (0x00048f79) aid_levels_zoom

0xb2c9,	// (0x00048f81) zooming_pane_g1

0xb2d1,	// (0x00048f89) zooming_pane_g2

0xb2d1,	// (0x00048f89) zooming_pane_g3

0x0002,

0xf35d,	// (0x0004d015) zooming_pane_g

0xb2d9,	// (0x00048f91) level_10_zoom

0xb2e2,	// (0x00048f9a) level_11_zoom

0xb2eb,	// (0x00048fa3) level_1_zoom

0xb2f4,	// (0x00048fac) level_2_zoom

0xb2fd,	// (0x00048fb5) level_3_zoom

0xb306,	// (0x00048fbe) level_4_zoom

0xb30f,	// (0x00048fc7) level_5_zoom

0xb318,	// (0x00048fd0) level_6_zoom

0xb321,	// (0x00048fd9) level_7_zoom

0xb32a,	// (0x00048fe2) level_8_zoom

0xb333,	// (0x00048feb) level_9_zoom

0xb344,	// (0x00048ffc) popup_phob_thumbnail_window_g1

0xb36c,	// (0x00049024) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0004d01c) popup_phob_thumbnail_window_g

0x4863,	// (0x0004251b) level_1_location

0x486b,	// (0x00042523) level_2_location

0x4873,	// (0x0004252b) level_3_location

0x487d,	// (0x00042535) level_4_location

0xa943,	// (0x000485fb) level_5_location

0x3ef7,	// (0x00041baf) mce_icon_pane_g1

0x3eff,	// (0x00041bb7) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0004d021) mce_icon_pane_g

0x3f07,	// (0x00041bbf) main_mup_pane_g1_ParamLimits

0x3f07,	// (0x00041bbf) main_mup_pane_g1

0xa74f,	// (0x00048407) main_mup_pane_g2_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g2

0xa74f,	// (0x00048407) main_mup_pane_g3_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g3

0xa74f,	// (0x00048407) main_mup_pane_g4_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g4

0xa74f,	// (0x00048407) main_mup_pane_g5_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g5

0xa74f,	// (0x00048407) main_mup_pane_g6_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g6

0xa74f,	// (0x00048407) main_mup_pane_g7_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g7

0xa74f,	// (0x00048407) main_mup_pane_g8_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g8

0xa74f,	// (0x00048407) main_mup_pane_g9_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g9

0xa74f,	// (0x00048407) main_mup_pane_g10_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g10

0xa74f,	// (0x00048407) main_mup_pane_g11_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g11

0xa741,	// (0x000483f9) main_mup_pane_g12_ParamLimits

0xa741,	// (0x000483f9) main_mup_pane_g12

0xa74f,	// (0x00048407) main_mup_pane_g13_ParamLimits

0xa74f,	// (0x00048407) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0004d026) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0004d026) main_mup_pane_g

0xa75d,	// (0x00048415) main_mup_pane_t1_ParamLimits

0xa75d,	// (0x00048415) main_mup_pane_t1

0xa75d,	// (0x00048415) main_mup_pane_t2_ParamLimits

0xa75d,	// (0x00048415) main_mup_pane_t2

0xa75d,	// (0x00048415) main_mup_pane_t3_ParamLimits

0xa75d,	// (0x00048415) main_mup_pane_t3

0xb358,	// (0x00049010) main_mup_pane_t4_ParamLimits

0xb358,	// (0x00049010) main_mup_pane_t4

0xb358,	// (0x00049010) main_mup_pane_t5_ParamLimits

0xb358,	// (0x00049010) main_mup_pane_t5

0xa97f,	// (0x00048637) main_mup_pane_t6_ParamLimits

0xa97f,	// (0x00048637) main_mup_pane_t6

0x0005,

0xf389,	// (0x0004d041) main_mup_pane_t_ParamLimits

0xf389,	// (0x0004d041) main_mup_pane_t

0xa6da,	// (0x00048392) mup_progress_pane_ParamLimits

0xa6da,	// (0x00048392) mup_progress_pane

0xc6c3,	// (0x0004a37b) mup_visualizer_pane_ParamLimits

0xc6c3,	// (0x0004a37b) mup_visualizer_pane

0xc6c3,	// (0x0004a37b) mup_volume_pane_ParamLimits

0xc6c3,	// (0x0004a37b) mup_volume_pane

0xa741,	// (0x000483f9) mup_visualizer_pane_g1_ParamLimits

0xa741,	// (0x000483f9) mup_visualizer_pane_g1

0xb374,	// (0x0004902c) mup_visualizer_pane_g2_ParamLimits

0xb374,	// (0x0004902c) mup_visualizer_pane_g2

0xa733,	// (0x000483eb) mup_visualizer_pane_g3_ParamLimits

0xa733,	// (0x000483eb) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0004d04e) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0004d04e) mup_visualizer_pane_g

0xa965,	// (0x0004861d) mup_volume_pane_g1

0xa965,	// (0x0004861d) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0004d055) mup_volume_pane_g

0xa965,	// (0x0004861d) mup_progress_pane_g1

0xa965,	// (0x0004861d) mup_progress_pane_g2

0xa965,	// (0x0004861d) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0004d05a) mup_progress_pane_g

0xa44f,	// (0x00048107) bg_popup_window_pane_cp05

0xb382,	// (0x0004903a) heading_pane_cp02_ParamLimits

0xb382,	// (0x0004903a) heading_pane_cp02

0xb39e,	// (0x00049056) list_popup_blid_pane

0xb3a6,	// (0x0004905e) list_blid_sat_info_pane_ParamLimits

0xb3a6,	// (0x0004905e) list_blid_sat_info_pane

0xb3b9,	// (0x00049071) list_blid_sat_info_pane_g1

0xb3c1,	// (0x00049079) list_blid_sat_info_pane_t1

0x4016,	// (0x00041cce) mup_equalizer_pane_ParamLimits

0x4016,	// (0x00041cce) mup_equalizer_pane

0x4037,	// (0x00041cef) mup_equalizer_pane_cp1_ParamLimits

0x4037,	// (0x00041cef) mup_equalizer_pane_cp1

0x4058,	// (0x00041d10) mup_equalizer_pane_cp2_ParamLimits

0x4058,	// (0x00041d10) mup_equalizer_pane_cp2

0x4079,	// (0x00041d31) mup_equalizer_pane_cp3_ParamLimits

0x4079,	// (0x00041d31) mup_equalizer_pane_cp3

0x409e,	// (0x00041d56) mup_equalizer_pane_cp4_ParamLimits

0x409e,	// (0x00041d56) mup_equalizer_pane_cp4

0x40c3,	// (0x00041d7b) mup_equalizer_pane_cp5

0x40db,	// (0x00041d93) mup_equalizer_pane_cp6

0x40f3,	// (0x00041dab) mup_equalizer_pane_cp7

0xc552,	// (0x0004a20a) bg_popup_call_poc_act_pane_g9

0xc55a,	// (0x0004a212) bg_popup_call_poc_act_pane_g10

0xc562,	// (0x0004a21a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6b8,	// (0x00048370) mup_scale_pane

0xa6d0,	// (0x00048388) mup_scale_pane_g1

0xb3cf,	// (0x00049087) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0004d076) mup_scale_pane_g

0xb3f3,	// (0x000490ab) msg_data_pane

0xb3fb,	// (0x000490b3) scroll_pane_cp017

0x411d,	// (0x00041dd5) bg_list_pane_cp04_ParamLimits

0x411d,	// (0x00041dd5) bg_list_pane_cp04

0xb403,	// (0x000490bb) msg_data_pane_g1

0x413d,	// (0x00041df5) msg_data_pane_g2

0x4147,	// (0x00041dff) msg_data_pane_g3

0x4151,	// (0x00041e09) msg_data_pane_g4

0x4159,	// (0x00041e11) msg_data_pane_g5

0x4161,	// (0x00041e19) msg_data_pane_g6

0x4169,	// (0x00041e21) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0004d085) msg_data_pane_g

0x0cfc,	// (0x0003e9b4) msg_text_pane_ParamLimits

0x0cfc,	// (0x0003e9b4) msg_text_pane

0x4171,	// (0x00041e29) qrid_highlight_pane_cp011_ParamLimits

0x4171,	// (0x00041e29) qrid_highlight_pane_cp011

0xa44f,	// (0x00048107) msg_body_pane

0xa44f,	// (0x00048107) msg_header_pane

0xb414,	// (0x000490cc) input_focus_pane_cp07

0x4187,	// (0x00041e3f) msg_header_pane_t1_ParamLimits

0x4187,	// (0x00041e3f) msg_header_pane_t1

0x0d39,	// (0x0003e9f1) msg_header_pane_t2_ParamLimits

0x0d39,	// (0x0003e9f1) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0004d099) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0004d099) msg_header_pane_t

0xb429,	// (0x000490e1) msg_body_pane_g1

0x0d50,	// (0x0003ea08) msg_body_pane_t1_ParamLimits

0x0d50,	// (0x0003ea08) msg_body_pane_t1

0x0d81,	// (0x0003ea39) msg_body_pane_t2_ParamLimits

0x0d81,	// (0x0003ea39) msg_body_pane_t2

0x0d93,	// (0x0003ea4b) msg_body_pane_t3_ParamLimits

0x0d93,	// (0x0003ea4b) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0004d09e) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0004d09e) msg_body_pane_t

0x41ef,	// (0x00041ea7) main_viewer_pane_g1_ParamLimits

0x41ef,	// (0x00041ea7) main_viewer_pane_g1

0x41fb,	// (0x00041eb3) main_viewer_pane_g2_ParamLimits

0x41fb,	// (0x00041eb3) main_viewer_pane_g2

0x4207,	// (0x00041ebf) main_viewer_pane_g3_ParamLimits

0x4207,	// (0x00041ebf) main_viewer_pane_g3

0x4218,	// (0x00041ed0) main_viewer_pane_g4_ParamLimits

0x4218,	// (0x00041ed0) main_viewer_pane_g4

0x4229,	// (0x00041ee1) main_viewer_pane_g5_ParamLimits

0x4229,	// (0x00041ee1) main_viewer_pane_g5

0x4229,	// (0x00041ee1) main_viewer_pane_g7_ParamLimits

0x4229,	// (0x00041ee1) main_viewer_pane_g7

0x423b,	// (0x00041ef3) main_viewer_pane_g8_ParamLimits

0x423b,	// (0x00041ef3) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0004d0ae) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0004d0ae) main_viewer_pane_g

0xb431,	// (0x000490e9) viewer_content_pane_ParamLimits

0xb431,	// (0x000490e9) viewer_content_pane

0x4273,	// (0x00041f2b) main_postcard_pane_g1_ParamLimits

0x4273,	// (0x00041f2b) main_postcard_pane_g1

0x4281,	// (0x00041f39) main_postcard_pane_g2_ParamLimits

0x4281,	// (0x00041f39) main_postcard_pane_g2

0x428f,	// (0x00041f47) main_postcard_pane_g3_ParamLimits

0x428f,	// (0x00041f47) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0004d0bf) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0004d0bf) main_postcard_pane_g

0x429f,	// (0x00041f57) main_postcard_pane_g4

0xc698,	// (0x0004a350) smil_status_volume_pane_g2

0x42cb,	// (0x00041f83) postcard_pane_ParamLimits

0x42cb,	// (0x00041f83) postcard_pane

0xb9b9,	// (0x00049671) postcard_pane_g1_ParamLimits

0xb9b9,	// (0x00049671) postcard_pane_g1

0x4305,	// (0x00041fbd) postcard_pane_g2_ParamLimits

0x4305,	// (0x00041fbd) postcard_pane_g2

0x4311,	// (0x00041fc9) postcard_pane_g3_ParamLimits

0x4311,	// (0x00041fc9) postcard_pane_g3

0xb43f,	// (0x000490f7) postcard_pane_g4_ParamLimits

0xb43f,	// (0x000490f7) postcard_pane_g4

0x431d,	// (0x00041fd5) postcard_pane_g5_ParamLimits

0x431d,	// (0x00041fd5) postcard_pane_g5

0x4329,	// (0x00041fe1) postcard_pane_g6_ParamLimits

0x4329,	// (0x00041fe1) postcard_pane_g6

0xb44d,	// (0x00049105) postcard_pane_g7_ParamLimits

0xb44d,	// (0x00049105) postcard_pane_g7

0x0006,

0xf414,	// (0x0004d0cc) postcard_pane_g_ParamLimits

0xf414,	// (0x0004d0cc) postcard_pane_g

0x4337,	// (0x00041fef) main_mp2_pane_g1_ParamLimits

0x4337,	// (0x00041fef) main_mp2_pane_g1

0x4345,	// (0x00041ffd) main_mp2_pane_g2_ParamLimits

0x4345,	// (0x00041ffd) main_mp2_pane_g2

0x4351,	// (0x00042009) main_mp2_pane_g3_ParamLimits

0x4351,	// (0x00042009) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0004d0db) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0004d0db) main_mp2_pane_g

0x435d,	// (0x00042015) main_mp2_pane_t1_ParamLimits

0x435d,	// (0x00042015) main_mp2_pane_t1

0x4374,	// (0x0004202c) main_mp2_pane_t2_ParamLimits

0x4374,	// (0x0004202c) main_mp2_pane_t2

0x4388,	// (0x00042040) main_mp2_pane_t3_ParamLimits

0x4388,	// (0x00042040) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0004d0e2) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0004d0e2) main_mp2_pane_t

0xb45b,	// (0x00049113) pec_content_pane_ParamLimits

0xb45b,	// (0x00049113) pec_content_pane

0xaaed,	// (0x000487a5) scroll_pane_cp015

0xb46d,	// (0x00049125) pec_attribute_pane_ParamLimits

0xb46d,	// (0x00049125) pec_attribute_pane

0x439a,	// (0x00042052) pec_content_pane_g1_ParamLimits

0x439a,	// (0x00042052) pec_content_pane_g1

0xb47d,	// (0x00049135) pec_content_pane_t1_ParamLimits

0xb47d,	// (0x00049135) pec_content_pane_t1

0xb48f,	// (0x00049147) pec_content_pane_t2_ParamLimits

0xb48f,	// (0x00049147) pec_content_pane_t2

0x0001,

0xf431,	// (0x0004d0e9) pec_content_pane_t_ParamLimits

0xf431,	// (0x0004d0e9) pec_content_pane_t

0x43a6,	// (0x0004205e) list_single_graphic_pane_cp01_ParamLimits

0x43a6,	// (0x0004205e) list_single_graphic_pane_cp01

0xa6b8,	// (0x00048370) bg_popup_sub_pane_cp04

0xb4a1,	// (0x00049159) popup_mup_playback_window_g1

0xb4ad,	// (0x00049165) popup_mup_playback_window_t1

0xb4c2,	// (0x0004917a) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0004d0ee) popup_mup_playback_window_t

0xb4f9,	// (0x000491b1) main_image_pane_g1_ParamLimits

0xb4f9,	// (0x000491b1) main_image_pane_g1

0xb53c,	// (0x000491f4) scroll_pane_cp018_ParamLimits

0xb53c,	// (0x000491f4) scroll_pane_cp018

0xb554,	// (0x0004920c) scroll_pane_cp016_ParamLimits

0xb554,	// (0x0004920c) scroll_pane_cp016

0x4434,	// (0x000420ec) smil2_image_pane_ParamLimits

0x4434,	// (0x000420ec) smil2_image_pane

0x446a,	// (0x00042122) smil2_root_pane_ParamLimits

0x446a,	// (0x00042122) smil2_root_pane

0x4496,	// (0x0004214e) smil2_text_pane_ParamLimits

0x4496,	// (0x0004214e) smil2_text_pane

0xa44f,	// (0x00048107) bg_list_pane_cp06

0xb590,	// (0x00049248) grid_radio_pane

0xa44f,	// (0x00048107) bg_popup_window_pane_cp06

0xb59a,	// (0x00049252) main_fmradio_pane_t1

0xc56a,	// (0x0004a222) heading_pane_cp04

0xb5a8,	// (0x00049260) main_fmradio_pane_t2

0xc572,	// (0x0004a22a) popup_cale_lunar_info_window_g1

0xb5b6,	// (0x0004926e) main_fmradio_pane_t3

0xc57a,	// (0x0004a232) popup_cale_lunar_info_window_g2

0xb5c6,	// (0x0004927e) main_fmradio_pane_t4

0x0001,

0xb5d4,	// (0x0004928c) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x0004d1ce) popup_cale_lunar_info_window_g

0xf44b,	// (0x0004d103) main_fmradio_pane_t

0xb5e2,	// (0x0004929a) wait_bar_pane_cp03

0xb5ea,	// (0x000492a2) cell_fmradio_pane_ParamLimits

0xb5ea,	// (0x000492a2) cell_fmradio_pane

0xb44d,	// (0x00049105) cell_fmradio_pane_g1_ParamLimits

0xb44d,	// (0x00049105) cell_fmradio_pane_g1

0xa44f,	// (0x00048107) grid_highlight_pane_cp011

0xb5ff,	// (0x000492b7) poc_content_pane_ParamLimits

0xb5ff,	// (0x000492b7) poc_content_pane

0xb611,	// (0x000492c9) scroll_pane_cp019

0x44d6,	// (0x0004218e) popup_call_poc_act_window_ParamLimits

0x44d6,	// (0x0004218e) popup_call_poc_act_window

0x44e3,	// (0x0004219b) popup_call_poc_inact_window_ParamLimits

0x44e3,	// (0x0004219b) popup_call_poc_inact_window

0xf4ed,	// (0x0004d1a5) bg_popup_call_poc_act_pane_g

0xc4e2,	// (0x0004a19a) bg_popup_call_poc_inact_pane_g1

0xc4ea,	// (0x0004a1a2) bg_popup_call_poc_inact_pane_g2

0xb619,	// (0x000492d1) popup_call_poc_act_window_g2

0xc4f2,	// (0x0004a1aa) bg_popup_call_poc_inact_pane_g3

0xc4fa,	// (0x0004a1b2) bg_popup_call_poc_inact_pane_g4

0xc502,	// (0x0004a1ba) bg_popup_call_poc_inact_pane_g5

0xb621,	// (0x000492d9) popup_call_poc_act_window_t1_ParamLimits

0xb621,	// (0x000492d9) popup_call_poc_act_window_t1

0xb649,	// (0x00049301) popup_call_poc_act_window_t2_ParamLimits

0xb649,	// (0x00049301) popup_call_poc_act_window_t2

0xb671,	// (0x00049329) popup_call_poc_act_window_t3_ParamLimits

0xb671,	// (0x00049329) popup_call_poc_act_window_t3

0xb699,	// (0x00049351) popup_call_poc_act_window_t4_ParamLimits

0xb699,	// (0x00049351) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0004d10e) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0004d10e) popup_call_poc_act_window_t

0xc50a,	// (0x0004a1c2) bg_popup_call_poc_inact_pane_g6

0xc512,	// (0x0004a1ca) bg_popup_call_poc_inact_pane_g7

0xc51a,	// (0x0004a1d2) bg_popup_call_poc_inact_pane_g8

0xb6ab,	// (0x00049363) popup_call_poc_inact_window_g2

0xc522,	// (0x0004a1da) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x0004d192) bg_popup_call_poc_inact_pane_g

0xb6b3,	// (0x0004936b) popup_call_poc_inact_window_t1_ParamLimits

0xb6b3,	// (0x0004936b) popup_call_poc_inact_window_t1

0xb6c8,	// (0x00049380) popup_call_poc_inact_window_t2_ParamLimits

0xb6c8,	// (0x00049380) popup_call_poc_inact_window_t2

0xb6dd,	// (0x00049395) popup_call_poc_inact_window_t3_ParamLimits

0xb6dd,	// (0x00049395) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0004d117) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0004d117) popup_call_poc_inact_window_t

0xc610,	// (0x0004a2c8) context_pane_ParamLimits

0x4b80,	// (0x00042838) signal_pane_ParamLimits

0xa943,	// (0x000485fb) main_call2_pane

0x4aec,	// (0x000427a4) popup_phob_thumbnail2_window_ParamLimits

0x4aec,	// (0x000427a4) popup_phob_thumbnail2_window

0x419d,	// (0x00041e55) aid_hotspot_pointer_arrow_pane

0x41a5,	// (0x00041e5d) aid_hotspot_pointer_hand_pane

0x482b,	// (0x000424e3) phob_pre_status_pane_g5

0xa68c,	// (0x00048344) cams_zoom_pane_ParamLimits

0xa68c,	// (0x00048344) image_vga_pane_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g1_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g2_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g3_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g4_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g5_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g6_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0004ce3d) main_camera_pane_g_ParamLimits

0xb358,	// (0x00049010) main_camera_pane_t1_ParamLimits

0xb358,	// (0x00049010) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0004ce4e) main_camera_pane_t_ParamLimits

0xa6b8,	// (0x00048370) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6b8,	// (0x00048370) bg_popup_preview_window_pane_cp01

0xb6f2,	// (0x000493aa) popup_phob_thumbnail2_window_g1_ParamLimits

0xb6f2,	// (0x000493aa) popup_phob_thumbnail2_window_g1

0xa44f,	// (0x00048107) call2_cli_visual_pane

0x44ff,	// (0x000421b7) popup_call2_audio_conf_window_ParamLimits

0x44ff,	// (0x000421b7) popup_call2_audio_conf_window

0x4518,	// (0x000421d0) popup_call2_audio_first_window_ParamLimits

0x4518,	// (0x000421d0) popup_call2_audio_first_window

0x45b6,	// (0x0004226e) popup_call2_audio_in_window_ParamLimits

0x45b6,	// (0x0004226e) popup_call2_audio_in_window

0x45fa,	// (0x000422b2) popup_call2_audio_out_window_ParamLimits

0x45fa,	// (0x000422b2) popup_call2_audio_out_window

0x4664,	// (0x0004231c) popup_call2_audio_second_window_ParamLimits

0x4664,	// (0x0004231c) popup_call2_audio_second_window

0x46c2,	// (0x0004237a) popup_call2_audio_wait_window_ParamLimits

0x46c2,	// (0x0004237a) popup_call2_audio_wait_window

0xa44f,	// (0x00048107) bg_popup_call2_act_pane_cp03

0xa69a,	// (0x00048352) list_conf_pane_cp

0xb6fe,	// (0x000493b6) popup_call2_audio_conf_window_t1

0xb70c,	// (0x000493c4) list_single_graphic_popup_conf2_pane_ParamLimits

0xb70c,	// (0x000493c4) list_single_graphic_popup_conf2_pane

0xb0be,	// (0x00048d76) list_highlight_pane_cp04

0xb71f,	// (0x000493d7) list_single_graphic_popup_conf2_pane_g1

0xb0cf,	// (0x00048d87) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0004d11e) list_single_graphic_popup_conf2_pane_g

0xb729,	// (0x000493e1) list_single_graphic_popup_conf2_pane_t1

0xb737,	// (0x000493ef) bg_popup_call2_act_pane_cp01_ParamLimits

0xb737,	// (0x000493ef) bg_popup_call2_act_pane_cp01

0xb7c1,	// (0x00049479) call_type_pane_cp05_ParamLimits

0xb7c1,	// (0x00049479) call_type_pane_cp05

0xb815,	// (0x000494cd) popup_call2_audio_second_window_g1_ParamLimits

0xb815,	// (0x000494cd) popup_call2_audio_second_window_g1

0xb869,	// (0x00049521) popup_call2_audio_second_window_g2_ParamLimits

0xb869,	// (0x00049521) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0004d123) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0004d123) popup_call2_audio_second_window_g

0xb8ce,	// (0x00049586) popup_call2_audio_second_window_t1_ParamLimits

0xb8ce,	// (0x00049586) popup_call2_audio_second_window_t1

0xb9c7,	// (0x0004967f) popup_call2_audio_second_window_t2_ParamLimits

0xb9c7,	// (0x0004967f) popup_call2_audio_second_window_t2

0xba1a,	// (0x000496d2) popup_call2_audio_second_window_t3_ParamLimits

0xba1a,	// (0x000496d2) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0004d12a) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0004d12a) popup_call2_audio_second_window_t

0xa44f,	// (0x00048107) bg_popup_call2_in_pane_cp02

0xa459,	// (0x00048111) call_type_pane_cp04

0x4701,	// (0x000423b9) popup_call2_audio_wait_window_g1

0x4709,	// (0x000423c1) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0004d133) popup_call2_audio_wait_window_g

0xa471,	// (0x00048129) popup_call2_audio_wait_window_t3

0xbb0d,	// (0x000497c5) bg_popup_call2_act_pane_ParamLimits

0xbb0d,	// (0x000497c5) bg_popup_call2_act_pane

0xbbcd,	// (0x00049885) call_type_pane_cp03_ParamLimits

0xbbcd,	// (0x00049885) call_type_pane_cp03

0xbc31,	// (0x000498e9) popup_call2_audio_first_window_g1_ParamLimits

0xbc31,	// (0x000498e9) popup_call2_audio_first_window_g1

0xbca1,	// (0x00049959) popup_call2_audio_first_window_g2_ParamLimits

0xbca1,	// (0x00049959) popup_call2_audio_first_window_g2

0xb9b9,	// (0x00049671) popup_call2_audio_first_window_g3_ParamLimits

0xb9b9,	// (0x00049671) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0004d138) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0004d138) popup_call2_audio_first_window_g

0xbd7f,	// (0x00049a37) popup_call2_audio_first_window_t1_ParamLimits

0xbd7f,	// (0x00049a37) popup_call2_audio_first_window_t1

0xbe82,	// (0x00049b3a) popup_call2_audio_first_window_t4_ParamLimits

0xbe82,	// (0x00049b3a) popup_call2_audio_first_window_t4

0xbf65,	// (0x00049c1d) popup_call2_audio_first_window_t5_ParamLimits

0xbf65,	// (0x00049c1d) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0004d143) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0004d143) popup_call2_audio_first_window_t

0xa6b0,	// (0x00048368) bg_popup_call2_act_pane_g1

0xc584,	// (0x0004a23c) popup_cale_lunar_info_window_t1

0xc592,	// (0x0004a24a) popup_cale_lunar_info_window_t2

0xc5a0,	// (0x0004a258) popup_cale_lunar_info_window_t3

0xa44f,	// (0x00048107) bg_popup_call2_bubble_pane

0xc066,	// (0x00049d1e) bg_popup_call2_in_pane_cp01_ParamLimits

0xc066,	// (0x00049d1e) bg_popup_call2_in_pane_cp01

0xa12b,	// (0x00047de3) call_type_pane_cp02

0x4711,	// (0x000423c9) popup_call2_audio_out_window_g1_ParamLimits

0x4711,	// (0x000423c9) popup_call2_audio_out_window_g1

0xc0ae,	// (0x00049d66) popup_call2_audio_out_window_g2_ParamLimits

0xc0ae,	// (0x00049d66) popup_call2_audio_out_window_g2

0x473d,	// (0x000423f5) popup_call2_audio_out_window_g3_ParamLimits

0x473d,	// (0x000423f5) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0004d14c) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0004d14c) popup_call2_audio_out_window_g

0xc0e5,	// (0x00049d9d) popup_call2_audio_out_window_t1_ParamLimits

0xc0e5,	// (0x00049d9d) popup_call2_audio_out_window_t1

0xc144,	// (0x00049dfc) popup_call2_audio_out_window_t2_ParamLimits

0xc144,	// (0x00049dfc) popup_call2_audio_out_window_t2

0xc198,	// (0x00049e50) popup_call2_audio_out_window_t3_ParamLimits

0xc198,	// (0x00049e50) popup_call2_audio_out_window_t3

0xc1ae,	// (0x00049e66) popup_call2_audio_out_window_t4_ParamLimits

0xc1ae,	// (0x00049e66) popup_call2_audio_out_window_t4

0xc1c4,	// (0x00049e7c) popup_call2_audio_out_window_t5_ParamLimits

0xc1c4,	// (0x00049e7c) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0004d155) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0004d155) popup_call2_audio_out_window_t

0xc228,	// (0x00049ee0) bg_popup_call2_in_pane_ParamLimits

0xc228,	// (0x00049ee0) bg_popup_call2_in_pane

0xc284,	// (0x00049f3c) popup_call2_audio_in_window_g1_ParamLimits

0xc284,	// (0x00049f3c) popup_call2_audio_in_window_g1

0xc2bc,	// (0x00049f74) popup_call2_audio_in_window_g2_ParamLimits

0xc2bc,	// (0x00049f74) popup_call2_audio_in_window_g2

0xc2f4,	// (0x00049fac) popup_call2_audio_in_window_g3_ParamLimits

0xc2f4,	// (0x00049fac) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0004d162) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0004d162) popup_call2_audio_in_window_g

0xc34c,	// (0x0004a004) popup_call2_audio_in_window_t1_ParamLimits

0xc34c,	// (0x0004a004) popup_call2_audio_in_window_t1

0xc3cc,	// (0x0004a084) popup_call2_audio_in_window_t2_ParamLimits

0xc3cc,	// (0x0004a084) popup_call2_audio_in_window_t2

0xc44c,	// (0x0004a104) popup_call2_audio_in_window_t3_ParamLimits

0xc44c,	// (0x0004a104) popup_call2_audio_in_window_t3

0xc466,	// (0x0004a11e) popup_call2_audio_in_window_t4_ParamLimits

0xc466,	// (0x0004a11e) popup_call2_audio_in_window_t4

0xc478,	// (0x0004a130) popup_call2_audio_in_window_t5_ParamLimits

0xc478,	// (0x0004a130) popup_call2_audio_in_window_t5

0xc48d,	// (0x0004a145) popup_call2_audio_in_window_t6_ParamLimits

0xc48d,	// (0x0004a145) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0004d16b) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0004d16b) popup_call2_audio_in_window_t

0xa6b0,	// (0x00048368) bg_popup_call2_in_pane_g1

0xc5ae,	// (0x0004a266) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x0004d1d3) popup_cale_lunar_info_window_t

0xa6b8,	// (0x00048370) bg_popup_call2_rect_pane_ParamLimits

0xa6b8,	// (0x00048370) bg_popup_call2_rect_pane

0xa44f,	// (0x00048107) call2_cli_visual_graphic_pane

0xa44f,	// (0x00048107) call2_cli_visual_text_pane

0x4bbb,	// (0x00042873) smil_status_volume_pane_g3

0x0002,

0xa6d0,	// (0x00048388) call2_cli_visual_graphic_pane_g1

0xa6d0,	// (0x00048388) call2_cli_visual_graphic_pane_g2

0xa6d0,	// (0x00048388) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0004d178) call2_cli_visual_graphic_pane_g

0xc4a2,	// (0x0004a15a) bg_popup_call2_rect_pane_g1

0xa87c,	// (0x00048534) bg_popup_call2_rect_pane_g2

0xc4aa,	// (0x0004a162) bg_popup_call2_rect_pane_g3

0xc4b2,	// (0x0004a16a) bg_popup_call2_rect_pane_g4

0xc4ba,	// (0x0004a172) bg_popup_call2_rect_pane_g5

0xc4c2,	// (0x0004a17a) bg_popup_call2_rect_pane_g6

0xc4ca,	// (0x0004a182) bg_popup_call2_rect_pane_g7

0xc4d2,	// (0x0004a18a) bg_popup_call2_rect_pane_g8

0xc4da,	// (0x0004a192) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0004d17f) bg_popup_call2_rect_pane_g

0xc4e2,	// (0x0004a19a) bg_popup_call2_bubble_pane_g1

0xc4ea,	// (0x0004a1a2) bg_popup_call2_bubble_pane_g2

0xc4f2,	// (0x0004a1aa) bg_popup_call2_bubble_pane_g3

0xc4fa,	// (0x0004a1b2) bg_popup_call2_bubble_pane_g4

0xc502,	// (0x0004a1ba) bg_popup_call2_bubble_pane_g5

0xc50a,	// (0x0004a1c2) bg_popup_call2_bubble_pane_g6

0xc512,	// (0x0004a1ca) bg_popup_call2_bubble_pane_g7

0xc51a,	// (0x0004a1d2) bg_popup_call2_bubble_pane_g8

0xc522,	// (0x0004a1da) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0004d192) bg_popup_call2_bubble_pane_g

0x20b7,	// (0x0003fd6f) aid_cale_week_size_cell_pane

0xa6b8,	// (0x00048370) aid_cams_cif_uncrop_pane_ParamLimits

0xa6b8,	// (0x00048370) aid_cams_cif_uncrop_pane

0x28a6,	// (0x0004055e) aid_cams_size_cell_ParamLimits

0x28a6,	// (0x0004055e) aid_cams_size_cell

0x28b2,	// (0x0004056a) grid_cams_pane_ParamLimits

0x28c0,	// (0x00040578) linegrid_cams_pane_ParamLimits

0x2991,	// (0x00040649) call_video_pane_t1

0x29ae,	// (0x00040666) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0004ce9a) call_video_pane_t

0x2e6b,	// (0x00040b23) aid_cale_month_size_cell_pane_ParamLimits

0x2e6b,	// (0x00040b23) aid_cale_month_size_cell_pane

0xf55f,	// (0x0004d217) smil_status_volume_pane_g

0x4bc8,	// (0x00042880) volume_smil_pane_ParamLimits

0x1a70,	// (0x0003f728) aid_popup2_width_pane

0x1fc3,	// (0x0003fc7b) cell_qdial_pane_g4_ParamLimits

0x1fc3,	// (0x0003fc7b) cell_qdial_pane_g4

0x3d32,	// (0x000419ea) aid_blid_cardinal_pane_ParamLimits

0x3d42,	// (0x000419fa) aid_blid_destination_pane_ParamLimits

0x3d42,	// (0x000419fa) aid_blid_destination_pane

0xa6b8,	// (0x00048370) bg_popup_call_poc_act_pane_ParamLimits

0xa6b8,	// (0x00048370) bg_popup_call_poc_act_pane

0xa6b8,	// (0x00048370) bg_popup_call_poc_inact_pane_ParamLimits

0xa6b8,	// (0x00048370) bg_popup_call_poc_inact_pane

0xc52a,	// (0x0004a1e2) bg_popup_call_poc_act_pane_g1

0xc532,	// (0x0004a1ea) bg_popup_call_poc_act_pane_g2

0xc53a,	// (0x0004a1f2) bg_popup_call_poc_act_pane_g3

0xc4fa,	// (0x0004a1b2) bg_popup_call_poc_act_pane_g4

0xc502,	// (0x0004a1ba) bg_popup_call_poc_act_pane_g5

0xc542,	// (0x0004a1fa) bg_popup_call_poc_act_pane_g6

0xc512,	// (0x0004a1ca) bg_popup_call_poc_act_pane_g7

0xc54a,	// (0x0004a202) bg_popup_call_poc_act_pane_g8

0xa44f,	// (0x00048107) main_usb_pane

0x4a09,	// (0x000426c1) popup_cale_lunar_info_window

0x2cc6,	// (0x0004097e) im_reading_pane_t1_ParamLimits

0xaa36,	// (0x000486ee) list_im_pane_ParamLimits

0xaa47,	// (0x000486ff) scroll_pane_cp07_ParamLimits

0xa44f,	// (0x00048107) grid_highlight_pane_cp012

0xa6b8,	// (0x00048370) mup_scale_pane_ParamLimits

0xb9b9,	// (0x00049671) main_usb_pane_g1_ParamLimits

0xb9b9,	// (0x00049671) main_usb_pane_g1

0x4793,	// (0x0004244b) main_usb_pane_g2_ParamLimits

0x4793,	// (0x0004244b) main_usb_pane_g2

0x0001,

0xf504,	// (0x0004d1bc) main_usb_pane_g_ParamLimits

0xf504,	// (0x0004d1bc) main_usb_pane_g

0x479f,	// (0x00042457) main_usb_pane_t1_ParamLimits

0x479f,	// (0x00042457) main_usb_pane_t1

0x47b1,	// (0x00042469) main_usb_pane_t2_ParamLimits

0x47b1,	// (0x00042469) main_usb_pane_t2

0x47c3,	// (0x0004247b) main_usb_pane_t3_ParamLimits

0x47c3,	// (0x0004247b) main_usb_pane_t3

0x47d5,	// (0x0004248d) main_usb_pane_t4_ParamLimits

0x47d5,	// (0x0004248d) main_usb_pane_t4

0x47e7,	// (0x0004249f) main_usb_pane_t5_ParamLimits

0x47e7,	// (0x0004249f) main_usb_pane_t5

0x47f9,	// (0x000424b1) main_usb_pane_t6_ParamLimits

0x47f9,	// (0x000424b1) main_usb_pane_t6

0x0005,

0xf509,	// (0x0004d1c1) main_usb_pane_t_ParamLimits

0x3cd1,	// (0x00041989) aid_text_placing

0x3cdc,	// (0x00041994) main_location2_pane_t1_ParamLimits

0x3cf2,	// (0x000419aa) main_location2_pane_t2_ParamLimits

0x3d08,	// (0x000419c0) main_location2_pane_t3_ParamLimits

0x3d1e,	// (0x000419d6) main_location2_pane_t4_ParamLimits

0x3d1e,	// (0x000419d6) main_location2_pane_t4

0xf323,	// (0x0004cfdb) main_location2_pane_t_ParamLimits

0xa6f4,	// (0x000483ac) find_pinb_pane_g2_ParamLimits

0xa6f4,	// (0x000483ac) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0004cd52) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0004cd52) find_pinb_pane_g

0xa700,	// (0x000483b8) find_pinb_pane_t1_ParamLimits

0xa712,	// (0x000483ca) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0004cd57) find_pinb_pane_t_ParamLimits

0xa44f,	// (0x00048107) main_call3_pane

0x341e,	// (0x000410d6) cale_month_day_heading_pane_t1_ParamLimits

0x34a0,	// (0x00041158) cale_month_day_heading_pane_t2_ParamLimits

0x3519,	// (0x000411d1) cale_month_day_heading_pane_t3_ParamLimits

0x3592,	// (0x0004124a) cale_month_day_heading_pane_t4_ParamLimits

0x360b,	// (0x000412c3) cale_month_day_heading_pane_t5_ParamLimits

0x368c,	// (0x00041344) cale_month_day_heading_pane_t6_ParamLimits

0x3715,	// (0x000413cd) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0004ced2) cale_month_day_heading_pane_t_ParamLimits

0xaca0,	// (0x00048958) smil_status_volume_pane

0x42e9,	// (0x00041fa1) postcard_address_pane_ParamLimits

0x42e9,	// (0x00041fa1) postcard_address_pane

0x42f7,	// (0x00041faf) postcard_message_pane_ParamLimits

0x42f7,	// (0x00041faf) postcard_message_pane

0x4769,	// (0x00042421) call2_cli_visual_pane_t1_ParamLimits

0x4769,	// (0x00042421) call2_cli_visual_pane_t1

0xc6d1,	// (0x0004a389) postcard_message_pane_t1_ParamLimits

0xc6d1,	// (0x0004a389) postcard_message_pane_t1

0xc6ab,	// (0x0004a363) postcard_address_pane_t1_ParamLimits

0xc6ab,	// (0x0004a363) postcard_address_pane_t1

0x4cff,	// (0x000429b7) popup_call3_audio_in_window_ParamLimits

0x4cff,	// (0x000429b7) popup_call3_audio_in_window

0x4bdd,	// (0x00042895) bg_popup_call3_in_pane_ParamLimits

0x4bdd,	// (0x00042895) bg_popup_call3_in_pane

0x4c45,	// (0x000428fd) popup_call3_audio_in_window_g1_ParamLimits

0x4c45,	// (0x000428fd) popup_call3_audio_in_window_g1

0x4c5d,	// (0x00042915) popup_call3_audio_in_window_g2_ParamLimits

0x4c5d,	// (0x00042915) popup_call3_audio_in_window_g2

0x4c75,	// (0x0004292d) popup_call3_audio_in_window_g3_ParamLimits

0x4c75,	// (0x0004292d) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x0004d21e) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x0004d21e) popup_call3_audio_in_window_g

0x4c9d,	// (0x00042955) popup_call3_audio_in_window_t1_ParamLimits

0x4c9d,	// (0x00042955) popup_call3_audio_in_window_t1

0x4cc5,	// (0x0004297d) popup_call3_audio_in_window_t2_ParamLimits

0x4cc5,	// (0x0004297d) popup_call3_audio_in_window_t2

0x4ced,	// (0x000429a5) popup_call3_audio_in_window_t3_ParamLimits

0x4ced,	// (0x000429a5) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x0004d227) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x0004d227) popup_call3_audio_in_window_t

0xa943,	// (0x000485fb) bg_popup_call3_rect_pane

0xc4a2,	// (0x0004a15a) bg_popup_call3_rect_pane_g1

0xa87c,	// (0x00048534) bg_popup_call3_rect_pane_g2

0xc4aa,	// (0x0004a162) bg_popup_call3_rect_pane_g3

0xc4b2,	// (0x0004a16a) bg_popup_call3_rect_pane_g4

0xc4ba,	// (0x0004a172) bg_popup_call3_rect_pane_g5

0xc4c2,	// (0x0004a17a) bg_popup_call3_rect_pane_g6

0xc4ca,	// (0x0004a182) bg_popup_call3_rect_pane_g7

0x9ffd,	// (0x00047cb5) mup_visualizer_osc_pane

0x9ffd,	// (0x00047cb5) mup_visualizer_spec_pane

0x4bfd,	// (0x000428b5) call3_video_qcif_pane_ParamLimits

0x4bfd,	// (0x000428b5) call3_video_qcif_pane

0x4c0f,	// (0x000428c7) call3_video_qcif_uncrop_pane_ParamLimits

0x4c0f,	// (0x000428c7) call3_video_qcif_uncrop_pane

0x4c1f,	// (0x000428d7) call3_video_subqcif_pane_ParamLimits

0x4c1f,	// (0x000428d7) call3_video_subqcif_pane

0x4c33,	// (0x000428eb) call3_video_subqcif_uncrop_pane_ParamLimits

0x4c33,	// (0x000428eb) call3_video_subqcif_uncrop_pane

0x4c8d,	// (0x00042945) popup_call3_audio_in_window_g4_ParamLimits

0x4c8d,	// (0x00042945) popup_call3_audio_in_window_g4

0x9ffd,	// (0x00047cb5) mup_spec_half_pane

0x9ffd,	// (0x00047cb5) mup_spec_half_pane_cp

0x9ffd,	// (0x00047cb5) mup_osc_middle_pane

0xa965,	// (0x0004861d) mup_visualizer_osc_pane_g1

0xc65e,	// (0x0004a316) mup_spec_bar_pane_ParamLimits

0xc65e,	// (0x0004a316) mup_spec_bar_pane

0xa965,	// (0x0004861d) mup_spec_bar_pane_g1

0xa965,	// (0x0004861d) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0004d055) mup_spec_bar_pane_g

0x20b7,	// (0x0003fd6f) aid_cale_week_size_cell_pane_ParamLimits

0x20d1,	// (0x0003fd89) bg_cale_heading_pane_ParamLimits

0x20fa,	// (0x0003fdb2) bg_cale_pane_cp01_ParamLimits

0x211c,	// (0x0003fdd4) cale_week_corner_pane_ParamLimits

0x213b,	// (0x0003fdf3) cale_week_day_heading_pane_ParamLimits

0x2169,	// (0x0003fe21) cale_week_scroll_pane_g1_ParamLimits

0x218d,	// (0x0003fe45) cale_week_scroll_pane_g2_ParamLimits

0x21a5,	// (0x0003fe5d) cale_week_scroll_pane_g3_ParamLimits

0x21bd,	// (0x0003fe75) cale_week_scroll_pane_g4_ParamLimits

0x21d5,	// (0x0003fe8d) cale_week_scroll_pane_g5_ParamLimits

0x21ed,	// (0x0003fea5) cale_week_scroll_pane_g6_ParamLimits

0x220d,	// (0x0003fec5) cale_week_scroll_pane_g7_ParamLimits

0x222d,	// (0x0003fee5) cale_week_scroll_pane_g8_ParamLimits

0x224d,	// (0x0003ff05) cale_week_scroll_pane_g9_ParamLimits

0x226a,	// (0x0003ff22) cale_week_scroll_pane_g10_ParamLimits

0x2287,	// (0x0003ff3f) cale_week_scroll_pane_g11_ParamLimits

0x22a6,	// (0x0003ff5e) cale_week_scroll_pane_g12_ParamLimits

0x22cb,	// (0x0003ff83) cale_week_scroll_pane_g13_ParamLimits

0x22f4,	// (0x0003ffac) cale_week_scroll_pane_g14_ParamLimits

0x231d,	// (0x0003ffd5) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0004cde3) cale_week_scroll_pane_g_ParamLimits

0x2366,	// (0x0004001e) cale_week_time_pane_ParamLimits

0x2386,	// (0x0004003e) grid_cale_week_pane_ParamLimits

0xa8b9,	// (0x00048571) listscroll_cale_week_pane_t1

0xa8cb,	// (0x00048583) scroll_pane_cp08_ParamLimits

0x2ee3,	// (0x00040b9b) cale_month_corner_pane_ParamLimits

0xac76,	// (0x0004892e) cale_month_pane_t1

0x33a5,	// (0x0004105d) cale_month_week_pane_ParamLimits

0xb9b9,	// (0x00049671) popup_call_status_window_g1_ParamLimits

0x3b00,	// (0x000417b8) popup_call_status_window_g2_ParamLimits

0x3b0c,	// (0x000417c4) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0004cf62) popup_call_status_window_g_ParamLimits

0xb04b,	// (0x00048d03) aid_call2_pane

0x0d2b,	// (0x0003e9e3) msg_header_pane_g1

0x42e9,	// (0x00041fa1) postcard_address2_pane_ParamLimits

0x42e9,	// (0x00041fa1) postcard_address2_pane

0x42f7,	// (0x00041faf) postcard_message2_pane_ParamLimits

0x42f7,	// (0x00041faf) postcard_message2_pane

0x4b8e,	// (0x00042846) message2_row_pane_ParamLimits

0x4b8e,	// (0x00042846) message2_row_pane

0x4ba8,	// (0x00042860) address2_row_pane_ParamLimits

0x4ba8,	// (0x00042860) address2_row_pane

0xc62b,	// (0x0004a2e3) postcard_message2_row_pane_g1

0xc633,	// (0x0004a2eb) postcard_message2_row_pane_t1

0xc62b,	// (0x0004a2e3) address2_row_pane_g1

0xc633,	// (0x0004a2eb) address2_row_pane_t1

0x2714,	// (0x000403cc) aid_size_cell_vorec

0xa44f,	// (0x00048107) main_rss_pane

0xc641,	// (0x0004a2f9) rss_list_single_pane_ParamLimits

0xc641,	// (0x0004a2f9) rss_list_single_pane

0xc64f,	// (0x0004a307) rss_list_single_pane_t1

0xc64f,	// (0x0004a307) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x0004d212) rss_list_single_pane_t

0xa44f,	// (0x00048107) main_camera2_pane

0xa44f,	// (0x00048107) main_video2_pane

0xa68c,	// (0x00048344) cams_zoom_pane_cp2_ParamLimits

0xa68c,	// (0x00048344) cams_zoom_pane_cp2

0xa68c,	// (0x00048344) image2_vga_pane_ParamLimits

0xa68c,	// (0x00048344) image2_vga_pane

0xa741,	// (0x000483f9) main_camera2_pane_g1_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g1

0xa741,	// (0x000483f9) main_camera2_pane_g2_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g2

0xa741,	// (0x000483f9) main_camera2_pane_g3_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g3

0xa741,	// (0x000483f9) main_camera2_pane_g4_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g4

0xa741,	// (0x000483f9) main_camera2_pane_g5_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g5

0xa741,	// (0x000483f9) main_camera2_pane_g6_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g6

0xa741,	// (0x000483f9) main_camera2_pane_g7_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g7

0xa741,	// (0x000483f9) main_camera2_pane_g8_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g8

0x0008,

0xf576,	// (0x0004d22e) main_camera2_pane_g_ParamLimits

0xf576,	// (0x0004d22e) main_camera2_pane_g

0xb358,	// (0x00049010) main_camera2_pane_t1_ParamLimits

0xb358,	// (0x00049010) main_camera2_pane_t1

0xb358,	// (0x00049010) main_camera2_pane_t2_ParamLimits

0xb358,	// (0x00049010) main_camera2_pane_t2

0xb358,	// (0x00049010) main_camera2_pane_t3_ParamLimits

0xb358,	// (0x00049010) main_camera2_pane_t3

0xb358,	// (0x00049010) main_camera2_pane_t4_ParamLimits

0xb358,	// (0x00049010) main_camera2_pane_t4

0x0006,

0xf589,	// (0x0004d241) main_camera2_pane_t_ParamLimits

0xf589,	// (0x0004d241) main_camera2_pane_t

0xb989,	// (0x00049641) cams_zoom_pane_cp4_ParamLimits

0xb989,	// (0x00049641) cams_zoom_pane_cp4

0xa6da,	// (0x00048392) image2_cif_pane_ParamLimits

0xa6da,	// (0x00048392) image2_cif_pane

0xa68c,	// (0x00048344) image2_subqcif_pane_ParamLimits

0xa68c,	// (0x00048344) image2_subqcif_pane

0xb997,	// (0x0004964f) main_video2_pane_g1_ParamLimits

0xb997,	// (0x0004964f) main_video2_pane_g1

0xb997,	// (0x0004964f) main_video2_pane_g2_ParamLimits

0xb997,	// (0x0004964f) main_video2_pane_g2

0xb997,	// (0x0004964f) main_video2_pane_g3_ParamLimits

0xb997,	// (0x0004964f) main_video2_pane_g3

0xb997,	// (0x0004964f) main_video2_pane_g4_ParamLimits

0xb997,	// (0x0004964f) main_video2_pane_g4

0xb997,	// (0x0004964f) main_video2_pane_g5_ParamLimits

0xb997,	// (0x0004964f) main_video2_pane_g5

0xb997,	// (0x0004964f) main_video2_pane_g6_ParamLimits

0xb997,	// (0x0004964f) main_video2_pane_g6

0x0005,

0xf598,	// (0x0004d250) main_video2_pane_g_ParamLimits

0xf598,	// (0x0004d250) main_video2_pane_g

0xb9a5,	// (0x0004965d) main_video2_pane_t1_ParamLimits

0xb9a5,	// (0x0004965d) main_video2_pane_t1

0xb9a5,	// (0x0004965d) main_video2_pane_t2_ParamLimits

0xb9a5,	// (0x0004965d) main_video2_pane_t2

0xb9a5,	// (0x0004965d) main_video2_pane_t3_ParamLimits

0xb9a5,	// (0x0004965d) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x0004d25d) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x0004d25d) main_video2_pane_t

0x488f,	// (0x00042547) call_muted_g2

0x0001,

0xf54c,	// (0x0004d204) call_muted_g

0xa44f,	// (0x00048107) main_mup2_pane

0xa74f,	// (0x00048407) main_mup2_pane_g1_ParamLimits

0xa74f,	// (0x00048407) main_mup2_pane_g1

0xa74f,	// (0x00048407) main_mup2_pane_g2_ParamLimits

0xa74f,	// (0x00048407) main_mup2_pane_g2

0xa965,	// (0x0004861d) main_mup_pane_g13_cp1

0x9ffd,	// (0x00047cb5) mup_volume_pane_cp1

0xa74f,	// (0x00048407) main_mup2_pane_g4_ParamLimits

0xa74f,	// (0x00048407) main_mup2_pane_g4

0xa74f,	// (0x00048407) main_mup2_pane_g5_ParamLimits

0xa74f,	// (0x00048407) main_mup2_pane_g5

0xa74f,	// (0x00048407) main_mup2_pane_g6_ParamLimits

0xa74f,	// (0x00048407) main_mup2_pane_g6

0xa74f,	// (0x00048407) main_mup2_pane_g7_ParamLimits

0xa74f,	// (0x00048407) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x0004d264) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x0004d264) main_mup2_pane_g

0xa75d,	// (0x00048415) main_mup2_pane_t1_ParamLimits

0xa75d,	// (0x00048415) main_mup2_pane_t1

0xa75d,	// (0x00048415) main_mup2_pane_t2_ParamLimits

0xa75d,	// (0x00048415) main_mup2_pane_t2

0xa75d,	// (0x00048415) main_mup2_pane_t3_ParamLimits

0xa75d,	// (0x00048415) main_mup2_pane_t3

0xa75d,	// (0x00048415) main_mup2_pane_t4_ParamLimits

0xa75d,	// (0x00048415) main_mup2_pane_t4

0xa75d,	// (0x00048415) main_mup2_pane_t5_ParamLimits

0xa75d,	// (0x00048415) main_mup2_pane_t5

0xa75d,	// (0x00048415) main_mup2_pane_t6_ParamLimits

0xa75d,	// (0x00048415) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x0004d273) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x0004d273) main_mup2_pane_t

0xc6c3,	// (0x0004a37b) mup2_visualizer_pane_ParamLimits

0xc6c3,	// (0x0004a37b) mup2_visualizer_pane

0xc6c3,	// (0x0004a37b) mup_progress_pane_cp_ParamLimits

0xc6c3,	// (0x0004a37b) mup_progress_pane_cp

0xc6ed,	// (0x0004a3a5) mup_volume_pane_cp_ParamLimits

0xc6ed,	// (0x0004a3a5) mup_volume_pane_cp

0xa733,	// (0x000483eb) mup2_visualizer_pane_g1_ParamLimits

0xa733,	// (0x000483eb) mup2_visualizer_pane_g1

0xa741,	// (0x000483f9) mup2_visualizer_pane_g2_ParamLimits

0xa741,	// (0x000483f9) mup2_visualizer_pane_g2

0xa741,	// (0x000483f9) mup2_visualizer_pane_g3_ParamLimits

0xa741,	// (0x000483f9) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0004cd5c) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0004cd5c) mup2_visualizer_pane_g

0xb588,	// (0x00049240) aid_size_cell_fmradio

0x49a5,	// (0x0004265d) aid_height_parent_landcape

0xaad4,	// (0x0004878c) wml_content_pane_cp

0xaadc,	// (0x00048794) wml_tabs_pane

0xaae5,	// (0x0004879d) popup_wml_miniature_window

0xaaed,	// (0x000487a5) scroll_pane_cp021

0xab01,	// (0x000487b9) wml_content_pane_comp8

0xa44f,	// (0x00048107) bg_popup_sub_pane_cp05

0xc703,	// (0x0004a3bb) popup_wml_miniature_window_g1

0xc70b,	// (0x0004a3c3) wml_miniature_view_pane

0x4d30,	// (0x000429e8) aid_size_wml_view

0x4d38,	// (0x000429f0) wml_miniature_view_pane_g1

0x4d41,	// (0x000429f9) wml_miniature_view_pane_g2

0x4d4a,	// (0x00042a02) wml_miniature_view_pane_g3

0x4d52,	// (0x00042a0a) wml_miniature_view_pane_g4

0x4d5a,	// (0x00042a12) wml_miniature_view_pane_g5

0x4d62,	// (0x00042a1a) wml_miniature_view_pane_g6

0x4d6a,	// (0x00042a22) wml_miniature_view_pane_g7

0x4d72,	// (0x00042a2a) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x0004d280) wml_miniature_view_pane_g

0xc713,	// (0x0004a3cb) background_graphic_ParamLimits

0xc713,	// (0x0004a3cb) background_graphic

0xc71f,	// (0x0004a3d7) wml_tabs_2_pane

0xc728,	// (0x0004a3e0) wml_tabs_3_pane_ParamLimits

0xc728,	// (0x0004a3e0) wml_tabs_3_pane

0xc73a,	// (0x0004a3f2) wml_tabs_4_pane_ParamLimits

0xc73a,	// (0x0004a3f2) wml_tabs_4_pane

0xc750,	// (0x0004a408) wml_tabs_5_pane_ParamLimits

0xc750,	// (0x0004a408) wml_tabs_5_pane

0xc76a,	// (0x0004a422) wml_tabs_pane_g2_ParamLimits

0xc76a,	// (0x0004a422) wml_tabs_pane_g2

0xc77f,	// (0x0004a437) wml_tabs_pane_g3_ParamLimits

0xc77f,	// (0x0004a437) wml_tabs_pane_g3

0xc794,	// (0x0004a44c) wml_tabs_2_active_pane_ParamLimits

0xc794,	// (0x0004a44c) wml_tabs_2_active_pane

0xc794,	// (0x0004a44c) wml_tabs_2_passive_pane_ParamLimits

0xc794,	// (0x0004a44c) wml_tabs_2_passive_pane

0x4d7a,	// (0x00042a32) wml_tabs_3_active_pane_cp_ParamLimits

0x4d7a,	// (0x00042a32) wml_tabs_3_active_pane_cp

0x4d8d,	// (0x00042a45) wml_tabs_3_passive_pane_ParamLimits

0x4d8d,	// (0x00042a45) wml_tabs_3_passive_pane

0x4d9e,	// (0x00042a56) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d9e,	// (0x00042a56) wml_tabs_3_passive_pane_cp

0x4db3,	// (0x00042a6b) tabs_4_active_pane

0x4dbb,	// (0x00042a73) tabs_4_passive_pane

0x4dc3,	// (0x00042a7b) tabs_4_passive_pane_cp

0x4dcb,	// (0x00042a83) tabs_4_passive_pane_cp2

0x478b,	// (0x00042443) aid_height_text

0xc6c3,	// (0x0004a37b) mup_volume_cont_pane_ParamLimits

0xc6c3,	// (0x0004a37b) mup_volume_cont_pane

0x9ffd,	// (0x00047cb5) aid_size_cell_pinb

0x9ffd,	// (0x00047cb5) aid_size_list_pinb

0xc6c3,	// (0x0004a37b) mup2_volume_cont_pane_ParamLimits

0xc6c3,	// (0x0004a37b) mup2_volume_cont_pane

0x4dd5,	// (0x00042a8d) mup2_volume_cont_pane_g1_ParamLimits

0x4dd5,	// (0x00042a8d) mup2_volume_cont_pane_g1

0x1a7c,	// (0x0003f734) aid_size_cell_touch_ParamLimits

0x1a7c,	// (0x0003f734) aid_size_cell_touch

0x1c8d,	// (0x0003f945) touch_pane_ParamLimits

0x1c8d,	// (0x0003f945) touch_pane

0x9ffd,	// (0x00047cb5) main_rss2_pane

0xc7ab,	// (0x0004a463) listscroll_rss2_pane

0xc7b4,	// (0x0004a46c) rss2_navigation_pane

0xc7bc,	// (0x0004a474) list_rss2_pane

0xb163,	// (0x00048e1b) scroll_pane_cp22

0xc7c4,	// (0x0004a47c) rss2_navigation_pane_g1

0xc7cd,	// (0x0004a485) rss2_navigation_pane_g2

0xc7d5,	// (0x0004a48d) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x0004d291) rss2_navigation_pane_g

0xc7dd,	// (0x0004a495) rss2_navigation_pane_t1

0x4deb,	// (0x00042aa3) rss2_list_single_pane_ParamLimits

0x4deb,	// (0x00042aa3) rss2_list_single_pane

0xc7eb,	// (0x0004a4a3) rss2_list_single_pane_t2

0xc7f9,	// (0x0004a4b1) rss2_list_single_pane_t3_ParamLimits

0xc7f9,	// (0x0004a4b1) rss2_list_single_pane_t3

0xc816,	// (0x0004a4ce) rss2_list_single_pane_t4

0x39b3,	// (0x0004166b) smil_status_pane_g1

0xa6da,	// (0x00048392) main_image2_pane_ParamLimits

0xa6da,	// (0x00048392) main_image2_pane

0xa741,	// (0x000483f9) main_camera2_pane_g9_ParamLimits

0xa741,	// (0x000483f9) main_camera2_pane_g9

0xb358,	// (0x00049010) main_camera2_pane_t5_ParamLimits

0xb358,	// (0x00049010) main_camera2_pane_t5

0x4d1c,	// (0x000429d4) main_camera2_pane_t6_ParamLimits

0x4d1c,	// (0x000429d4) main_camera2_pane_t6

0x4e0e,	// (0x00042ac6) main_image2_pane_g1_ParamLimits

0x4e0e,	// (0x00042ac6) main_image2_pane_g1

0x44c0,	// (0x00042178) smil2_video_pane_ParamLimits

0x44c0,	// (0x00042178) smil2_video_pane

0x0c42,	// (0x0003e8fa) aid_zoom_text_primary_cp

0x1c36,	// (0x0003f8ee) popup_preview_fixed_window

0xaa2e,	// (0x000486e6) im_reading_pane_g1

0x4d0e,	// (0x000429c6) cams2_bc_adjust_pane_cp_ParamLimits

0x4d0e,	// (0x000429c6) cams2_bc_adjust_pane_cp

0xa68c,	// (0x00048344) cams2_bc_adjust_pane_ParamLimits

0xa68c,	// (0x00048344) cams2_bc_adjust_pane

0xa965,	// (0x0004861d) cams2_bc_adjust_pane_g1

0x9ffd,	// (0x00047cb5) cams2_slider_pane

0xa965,	// (0x0004861d) cams2_slider_pane_g1

0xa965,	// (0x0004861d) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0004d298) cams2_slider_pane_g

0x1d22,	// (0x0003f9da) calc_display_pane_ParamLimits

0x1d40,	// (0x0003f9f8) calc_paper_pane_ParamLimits

0x1d5c,	// (0x0003fa14) grid_calc_pane_ParamLimits

0x3b6a,	// (0x00041822) popup_clock_digital_window_t1_ParamLimits

0xb525,	// (0x000491dd) main_image_pane_t1

0x1d08,	// (0x0003f9c0) aid_size_cell_calc_ParamLimits

0x1d08,	// (0x0003f9c0) aid_size_cell_calc

0x49df,	// (0x00042697) popup_blid_sat_info2_window_ParamLimits

0x49df,	// (0x00042697) popup_blid_sat_info2_window

0xc824,	// (0x0004a4dc) aid_size_cell_blid

0xc6c3,	// (0x0004a37b) bg_popup_window_pane_cp07

0xc841,	// (0x0004a4f9) grid_popup_blid_pane

0xc84b,	// (0x0004a503) heading_pane_cp05_ParamLimits

0xc84b,	// (0x0004a503) heading_pane_cp05

0xc915,	// (0x0004a5cd) cell_popup_blid_pane_ParamLimits

0xc915,	// (0x0004a5cd) cell_popup_blid_pane

0xc93f,	// (0x0004a5f7) cell_popup_blid_pane_g1

0xc947,	// (0x0004a5ff) cell_popup_blid_pane_t1

0xc6c3,	// (0x0004a37b) mup2_indicator_pane_ParamLimits

0xc6c3,	// (0x0004a37b) mup2_indicator_pane

0x9ffd,	// (0x00047cb5) mup2_visualizer_osc_pane

0xc6ed,	// (0x0004a3a5) mup2_visualizer_spec_pane_ParamLimits

0xc6ed,	// (0x0004a3a5) mup2_visualizer_spec_pane

0x9ffd,	// (0x00047cb5) mup2_spec_half_pane

0x9ffd,	// (0x00047cb5) mup2_spec_half_pane_cp

0xc955,	// (0x0004a60d) mup2_spec_bar_pane_ParamLimits

0xc955,	// (0x0004a60d) mup2_spec_bar_pane

0xa965,	// (0x0004861d) mup2_spec_bar_pane_g1

0xc974,	// (0x0004a62c) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0004d2be) mup2_spec_bar_pane_g

0x9ffd,	// (0x00047cb5) mup2_osc_middle_pane

0xa965,	// (0x0004861d) mup2_visualizer_osc_pane_g1

0xa027,	// (0x00047cdf) popup_number_entry_window_t1_ParamLimits

0xa03a,	// (0x00047cf2) popup_number_entry_window_t2_ParamLimits

0xa04c,	// (0x00047d04) popup_number_entry_window_t3_ParamLimits

0xa05e,	// (0x00047d16) popup_number_entry_window_t5_ParamLimits

0xa05e,	// (0x00047d16) popup_number_entry_window_t5

0xf045,	// (0x0004ccfd) popup_number_entry_window_t_ParamLimits

0xa093,	// (0x00047d4b) text_title_cp2_ParamLimits

0x41ad,	// (0x00041e65) aid_hotspot_pointer_text2_pane

0x4247,	// (0x00041eff) main_viewer_pane_g9_ParamLimits

0x4247,	// (0x00041eff) main_viewer_pane_g9

0xac76,	// (0x0004892e) cale_month_pane_t1_ParamLimits

0xacb3,	// (0x0004896b) bg_cale_pane_ParamLimits

0xaccb,	// (0x00048983) list_cale_pane_ParamLimits

0xacdc,	// (0x00048994) listscroll_cale_day_pane_t1

0xacee,	// (0x000489a6) scroll_pane_cp09_ParamLimits

0x3f1a,	// (0x00041bd2) main_mup_eq_pane_t1_ParamLimits

0x3f1a,	// (0x00041bd2) main_mup_eq_pane_t1

0x3f36,	// (0x00041bee) main_mup_eq_pane_t2_ParamLimits

0x3f36,	// (0x00041bee) main_mup_eq_pane_t2

0x3f52,	// (0x00041c0a) main_mup_eq_pane_t3_ParamLimits

0x3f52,	// (0x00041c0a) main_mup_eq_pane_t3

0x3f6c,	// (0x00041c24) main_mup_eq_pane_t4_ParamLimits

0x3f6c,	// (0x00041c24) main_mup_eq_pane_t4

0x3f86,	// (0x00041c3e) main_mup_eq_pane_t5_ParamLimits

0x3f86,	// (0x00041c3e) main_mup_eq_pane_t5

0x3fa0,	// (0x00041c58) main_mup_eq_pane_t6_ParamLimits

0x3fa0,	// (0x00041c58) main_mup_eq_pane_t6

0x3fb6,	// (0x00041c6e) main_mup_eq_pane_t7_ParamLimits

0x3fb6,	// (0x00041c6e) main_mup_eq_pane_t7

0x3fcc,	// (0x00041c84) main_mup_eq_pane_t8_ParamLimits

0x3fcc,	// (0x00041c84) main_mup_eq_pane_t8

0x3fe2,	// (0x00041c9a) main_mup_eq_pane_t9_ParamLimits

0x3fe2,	// (0x00041c9a) main_mup_eq_pane_t9

0x3ffe,	// (0x00041cb6) main_mup_eq_pane_t10_ParamLimits

0x3ffe,	// (0x00041cb6) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0004d061) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0004d061) main_mup_eq_pane_t

0x40c3,	// (0x00041d7b) mup_equalizer_pane_cp5_ParamLimits

0x40db,	// (0x00041d93) mup_equalizer_pane_cp6_ParamLimits

0x40f3,	// (0x00041dab) mup_equalizer_pane_cp7_ParamLimits

0x9ffd,	// (0x00047cb5) main_gallery_pane

0xc67d,	// (0x0004a335) smil2_volume_pane

0xc685,	// (0x0004a33d) smil_status_volume_pane_g1_ParamLimits

0xc698,	// (0x0004a350) smil_status_volume_pane_g2_ParamLimits

0x4bbb,	// (0x00042873) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0004d217) smil_status_volume_pane_g_ParamLimits

0xc6c3,	// (0x0004a37b) bg_popup_window_pane_cp07_ParamLimits

0xc82c,	// (0x0004a4e4) blid_firmament_pane

0xa68c,	// (0x00048344) aid_size_cell_gallery_ParamLimits

0xa68c,	// (0x00048344) aid_size_cell_gallery

0xa68c,	// (0x00048344) grid_gallery_pane_ParamLimits

0xa68c,	// (0x00048344) grid_gallery_pane

0xb989,	// (0x00049641) cell_gallery_pane_ParamLimits

0xb989,	// (0x00049641) cell_gallery_pane

0xa6da,	// (0x00048392) bg_cell_gallery_focus_pane_ParamLimits

0xa6da,	// (0x00048392) bg_cell_gallery_focus_pane

0xa733,	// (0x000483eb) cell_gallery_pane_g1_ParamLimits

0xa733,	// (0x000483eb) cell_gallery_pane_g1

0xa733,	// (0x000483eb) cell_gallery_pane_g2_ParamLimits

0xa733,	// (0x000483eb) cell_gallery_pane_g2

0xa733,	// (0x000483eb) cell_gallery_pane_g3_ParamLimits

0xa733,	// (0x000483eb) cell_gallery_pane_g3

0xa741,	// (0x000483f9) cell_gallery_pane_g4_ParamLimits

0xa741,	// (0x000483f9) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x0004d2c3) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x0004d2c3) cell_gallery_pane_g

0xc97e,	// (0x0004a636) bg_cell_gallery_focus_pane_g1

0xc986,	// (0x0004a63e) bg_cell_gallery_focus_pane_g2

0xc98e,	// (0x0004a646) bg_cell_gallery_focus_pane_g3

0xc996,	// (0x0004a64e) bg_cell_gallery_focus_pane_g4

0xc99e,	// (0x0004a656) bg_cell_gallery_focus_pane_g5

0xc9a6,	// (0x0004a65e) bg_cell_gallery_focus_pane_g6

0xc9ae,	// (0x0004a666) bg_cell_gallery_focus_pane_g7

0xc9b6,	// (0x0004a66e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x0004d2cc) bg_cell_gallery_focus_pane_g

0xc9be,	// (0x0004a676) aid_firma_cardinal

0xc9d2,	// (0x0004a68a) blid_firmament_pane_t1

0xc9e9,	// (0x0004a6a1) blid_firmament_pane_t2

0xca00,	// (0x0004a6b8) blid_firmament_pane_t3

0xca17,	// (0x0004a6cf) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x0004d2dd) blid_firmament_pane_t

0xca2e,	// (0x0004a6e6) blid_sat_info_pane

0xa965,	// (0x0004861d) blid_sat_info_pane_g1

0xa965,	// (0x0004861d) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0004d055) blid_sat_info_pane_g

0xca3e,	// (0x0004a6f6) blid_sat_info_pane_t1

0xca4c,	// (0x0004a704) smil2_volume_content_pane

0xca55,	// (0x0004a70d) smil2_volume_pane_g1

0xacff,	// (0x000489b7) smil2_volume_content_pane_g1

0xca5d,	// (0x0004a715) smil2_volume_content_pane_g2

0xca66,	// (0x0004a71e) smil2_volume_content_pane_g3

0xca6f,	// (0x0004a727) smil2_volume_content_pane_g4

0xca78,	// (0x0004a730) smil2_volume_content_pane_g5

0xca81,	// (0x0004a739) smil2_volume_content_pane_g6

0xca8a,	// (0x0004a742) smil2_volume_content_pane_g7

0xca93,	// (0x0004a74b) smil2_volume_content_pane_g8

0xca9c,	// (0x0004a754) smil2_volume_content_pane_g9

0xcaa5,	// (0x0004a75d) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x0004d2e6) smil2_volume_content_pane_g

0x2447,	// (0x000400ff) cale_week_day_heading_pane_t1_ParamLimits

0x246f,	// (0x00040127) cale_week_day_heading_pane_t2_ParamLimits

0x249c,	// (0x00040154) cale_week_day_heading_pane_t3_ParamLimits

0x24c9,	// (0x00040181) cale_week_day_heading_pane_t4_ParamLimits

0x24f6,	// (0x000401ae) cale_week_day_heading_pane_t5_ParamLimits

0x2523,	// (0x000401db) cale_week_day_heading_pane_t6_ParamLimits

0x2550,	// (0x00040208) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0004ce04) cale_week_day_heading_pane_t_ParamLimits

0xa8e8,	// (0x000485a0) bg_cale_side_pane_ParamLimits

0x2578,	// (0x00040230) cale_week_time_pane_t1_ParamLimits

0x259c,	// (0x00040254) cale_week_time_pane_t2_ParamLimits

0x25c0,	// (0x00040278) cale_week_time_pane_t3_ParamLimits

0x25e4,	// (0x0004029c) cale_week_time_pane_t4_ParamLimits

0x2608,	// (0x000402c0) cale_week_time_pane_t5_ParamLimits

0x262e,	// (0x000402e6) cale_week_time_pane_t6_ParamLimits

0x2656,	// (0x0004030e) cale_week_time_pane_t7_ParamLimits

0x2682,	// (0x0004033a) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0004ce13) cale_week_time_pane_t_ParamLimits

0x26b2,	// (0x0004036a) cell_cale_week_pane_g2_ParamLimits

0xa8e8,	// (0x000485a0) bg_cale_side_pane_cp01_ParamLimits

0x379e,	// (0x00041456) cale_month_week_pane_t1_ParamLimits

0x37b7,	// (0x0004146f) cale_month_week_pane_t2_ParamLimits

0x37d0,	// (0x00041488) cale_month_week_pane_t3_ParamLimits

0x37e9,	// (0x000414a1) cale_month_week_pane_t4_ParamLimits

0x3802,	// (0x000414ba) cale_month_week_pane_t5_ParamLimits

0x381f,	// (0x000414d7) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0004cee1) cale_month_week_pane_t_ParamLimits

0x3970,	// (0x00041628) cell_cale_month_pane_g1_ParamLimits

0x9ffd,	// (0x00047cb5) main_cale_event_viewer_pane

0x9ffd,	// (0x00047cb5) listscroll_cale_event_viewer_pane

0xcaae,	// (0x0004a766) list_cale_ev_pane

0xcab6,	// (0x0004a76e) scroll_pane_cp023

0x4e1a,	// (0x00042ad2) field_cale_ev_pane_ParamLimits

0x4e1a,	// (0x00042ad2) field_cale_ev_pane

0xcac2,	// (0x0004a77a) field_cale_ev_content_pane_ParamLimits

0xcac2,	// (0x0004a77a) field_cale_ev_content_pane

0xcace,	// (0x0004a786) field_cale_ev_pane_g1_ParamLimits

0xcace,	// (0x0004a786) field_cale_ev_pane_g1

0xcada,	// (0x0004a792) field_cale_ev_pane_g2_ParamLimits

0xcada,	// (0x0004a792) field_cale_ev_pane_g2

0xcaf2,	// (0x0004a7aa) field_cale_ev_pane_g3_ParamLimits

0xcaf2,	// (0x0004a7aa) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x0004d2fb) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x0004d2fb) field_cale_ev_pane_g

0xcb0a,	// (0x0004a7c2) field_cale_ev_pane_t1_ParamLimits

0xcb0a,	// (0x0004a7c2) field_cale_ev_pane_t1

0x4e3e,	// (0x00042af6) field_cale_ev_content_pane_t1_ParamLimits

0x4e3e,	// (0x00042af6) field_cale_ev_content_pane_t1

0xb40b,	// (0x000490c3) bg_button_pane_cp01

0x20a5,	// (0x0003fd5d) listscroll_cale_week_pane_ParamLimits

0xa8b0,	// (0x00048568) popup_toolbar_window_cp01

0xa8b9,	// (0x00048571) listscroll_cale_week_pane_t1_ParamLimits

0x20a5,	// (0x0003fd5d) listscroll_cale_day_pane_ParamLimits

0xa8b0,	// (0x00048568) popup_toolbar_window_cp02

0xacdc,	// (0x00048994) listscroll_cale_day_pane_t1_ParamLimits

0x20a5,	// (0x0003fd5d) main_cale_month_pane_ParamLimits

0x4afe,	// (0x000427b6) popup_toolbar_window_cp03_ParamLimits

0x4afe,	// (0x000427b6) popup_toolbar_window_cp03

0x43d0,	// (0x00042088) main_image_pane_g2_ParamLimits

0x43d0,	// (0x00042088) main_image_pane_g2

0x43dc,	// (0x00042094) main_image_pane_g3_ParamLimits

0x43dc,	// (0x00042094) main_image_pane_g3

0x0002,

0xf43b,	// (0x0004d0f3) main_image_pane_g_ParamLimits

0xf43b,	// (0x0004d0f3) main_image_pane_g

0xb525,	// (0x000491dd) main_image_pane_t1_ParamLimits

0x43e8,	// (0x000420a0) main_image_pane_t2_ParamLimits

0x43e8,	// (0x000420a0) main_image_pane_t2

0x43fa,	// (0x000420b2) main_image_pane_t3_ParamLimits

0x43fa,	// (0x000420b2) main_image_pane_t3

0x440c,	// (0x000420c4) main_image_pane_t4_ParamLimits

0x440c,	// (0x000420c4) main_image_pane_t4

0x0003,

0xf442,	// (0x0004d0fa) main_image_pane_t_ParamLimits

0xf442,	// (0x0004d0fa) main_image_pane_t

0x441e,	// (0x000420d6) popup_image_details_window_cp01

0x4428,	// (0x000420e0) popup_toobar_trans_pane_cp01_ParamLimits

0x4428,	// (0x000420e0) popup_toobar_trans_pane_cp01

0x4a40,	// (0x000426f8) popup_image_details_window_ParamLimits

0x4a40,	// (0x000426f8) popup_image_details_window

0x4a4e,	// (0x00042706) popup_image_focus_window

0xa68c,	// (0x00048344) camera2_autofocus_pane_ParamLimits

0xa68c,	// (0x00048344) camera2_autofocus_pane

0x9ffd,	// (0x00047cb5) bg_popup_sub_pane_cp06

0xcb21,	// (0x0004a7d9) popup_image_focus_window_g1

0xcb29,	// (0x0004a7e1) popup_image_focus_window_g2

0xcb31,	// (0x0004a7e9) popup_image_focus_window_g3

0xcb39,	// (0x0004a7f1) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x0004d302) popup_image_focus_window_g

0xcb41,	// (0x0004a7f9) popup_image_focus_window_t1

0xcb4f,	// (0x0004a807) popup_image_focus_window_t2

0xcb5f,	// (0x0004a817) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x0004d30b) popup_image_focus_window_t

0xa733,	// (0x000483eb) camera2_autofocus_pane_g1

0xa6da,	// (0x00048392) bg_tb_trans_pane_cp01

0xcb6d,	// (0x0004a825) popup_image_details_window_g1

0xcb80,	// (0x0004a838) popup_image_details_window_g2

0x0002,

0xf665,	// (0x0004d31d) popup_image_details_window_g

0xcba9,	// (0x0004a861) popup_image_details_window_t1

0xcbbb,	// (0x0004a873) popup_image_details_window_t2

0xcbd4,	// (0x0004a88c) popup_image_details_window_t3

0xcbe8,	// (0x0004a8a0) popup_image_details_window_t4

0xcc03,	// (0x0004a8bb) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x0004d324) popup_image_details_window_t

0xa791,	// (0x00048449) bg_calc_paper_pane_ParamLimits

0x9ffd,	// (0x00047cb5) grid_highlight_pane_cp013

0x1e59,	// (0x0003fb11) list_calc_pane_ParamLimits

0x1e6b,	// (0x0003fb23) scroll_pane_cp024

0xa7a5,	// (0x0004845d) bg_calc_display_pane_ParamLimits

0x1e73,	// (0x0003fb2b) calc_display_pane_t1_ParamLimits

0x1e88,	// (0x0003fb40) calc_display_pane_t2_ParamLimits

0x1e9d,	// (0x0003fb55) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0004cd84) calc_display_pane_t_ParamLimits

0x1f6d,	// (0x0003fc25) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0004cda1) cell_calc_pane_g

0x1f76,	// (0x0003fc2e) cell_calc_pane_t1

0xa7fa,	// (0x000484b2) grid_highlight_pane_cp02_ParamLimits

0xa810,	// (0x000484c8) toolbar_button_pane_cp01_ParamLimits

0xa810,	// (0x000484c8) toolbar_button_pane_cp01

0xb56a,	// (0x00049222) temp_image_control_pane_ParamLimits

0xb56a,	// (0x00049222) temp_image_control_pane

0xa6da,	// (0x00048392) main_mp3_pane

0xcc1d,	// (0x0004a8d5) temp_image_control_pane_g1_ParamLimits

0xcc1d,	// (0x0004a8d5) temp_image_control_pane_g1

0xcc2b,	// (0x0004a8e3) temp_image_control_pane_g2_ParamLimits

0xcc2b,	// (0x0004a8e3) temp_image_control_pane_g2

0xcc3d,	// (0x0004a8f5) temp_image_control_pane_g3_ParamLimits

0xcc3d,	// (0x0004a8f5) temp_image_control_pane_g3

0x4e59,	// (0x00042b11) temp_image_control_pane_g4_ParamLimits

0x4e59,	// (0x00042b11) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x0004d32f) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x0004d32f) temp_image_control_pane_g

0xcc1d,	// (0x0004a8d5) main_mp3_pane_g1

0x4e6a,	// (0x00042b22) main_mp3_pane_g2

0x0007,

0xf680,	// (0x0004d338) main_mp3_pane_g

0xcc72,	// (0x0004a92a) main_mp3_pane_t1

0xa741,	// (0x000483f9) main_camera_pane_g8_ParamLimits

0xa741,	// (0x000483f9) main_camera_pane_g8

0x285e,	// (0x00040516) main_video_pane_g7_ParamLimits

0x285e,	// (0x00040516) main_video_pane_g7

0xb358,	// (0x00049010) main_camera2_pane_t7_ParamLimits

0xb358,	// (0x00049010) main_camera2_pane_t7

0xaa94,	// (0x0004874c) scroll_pane_cp025_ParamLimits

0xaa94,	// (0x0004874c) scroll_pane_cp025

0xaaa8,	// (0x00048760) scroll_pane_cp026_ParamLimits

0xaaa8,	// (0x00048760) scroll_pane_cp026

0xaab7,	// (0x0004876f) wml_content_pane_ParamLimits

0x9ffd,	// (0x00047cb5) main_touch_calib_pane

0x4f0e,	// (0x00042bc6) main_touch_calib_pane_g1

0x4f1a,	// (0x00042bd2) main_touch_calib_pane_g2

0x4f26,	// (0x00042bde) main_touch_calib_pane_g3

0x4f32,	// (0x00042bea) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x0004d356) main_touch_calib_pane_g

0x4f3e,	// (0x00042bf6) main_touch_calib_pane_t1

0x4f55,	// (0x00042c0d) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x0004d35f) main_touch_calib_pane_t

0xb1de,	// (0x00048e96) mup_progress_pane_cp02

0xb1fd,	// (0x00048eb5) navi_pane_g1

0xb25f,	// (0x00048f17) navi_pane_mp_t3

0xa6da,	// (0x00048392) main_mp3_pane_ParamLimits

0x4b3f,	// (0x000427f7) navi_pane_ParamLimits

0xcc1d,	// (0x0004a8d5) main_mp3_pane_g1_ParamLimits

0x4e6a,	// (0x00042b22) main_mp3_pane_g2_ParamLimits

0x4e76,	// (0x00042b2e) main_mp3_pane_g3_ParamLimits

0x4e76,	// (0x00042b2e) main_mp3_pane_g3

0x4e82,	// (0x00042b3a) main_mp3_pane_g4_ParamLimits

0x4e82,	// (0x00042b3a) main_mp3_pane_g4

0xa733,	// (0x000483eb) main_mp3_pane_g5_ParamLimits

0xa733,	// (0x000483eb) main_mp3_pane_g5

0xcc4d,	// (0x0004a905) main_mp3_pane_g6_ParamLimits

0xcc4d,	// (0x0004a905) main_mp3_pane_g6

0xcc5a,	// (0x0004a912) main_mp3_pane_g7_ParamLimits

0xcc5a,	// (0x0004a912) main_mp3_pane_g7

0xcc66,	// (0x0004a91e) main_mp3_pane_g8_ParamLimits

0xcc66,	// (0x0004a91e) main_mp3_pane_g8

0xf680,	// (0x0004d338) main_mp3_pane_g_ParamLimits

0x4e8e,	// (0x00042b46) main_mp3_pane_t2

0x4e9e,	// (0x00042b56) main_mp3_pane_t3

0xcc80,	// (0x0004a938) main_mp3_pane_t4

0xcc8e,	// (0x0004a946) main_mp3_pane_t5

0x0005,

0xf691,	// (0x0004d349) main_mp3_pane_t

0xcc9c,	// (0x0004a954) mup_progress_pane_cp01

0x0c42,	// (0x0003e8fa) aid_zoom_text_secondary2

0xcaae,	// (0x0004a766) list_cale_ev2_pane

0xcab6,	// (0x0004a76e) scroll_pane_cp023_ParamLimits

0x4fb0,	// (0x00042c68) field_cale_ev2_pane_ParamLimits

0x4fb0,	// (0x00042c68) field_cale_ev2_pane

0x0da5,	// (0x0003ea5d) field_cale_ev2_pane_g1_ParamLimits

0x0da5,	// (0x0003ea5d) field_cale_ev2_pane_g1

0x0db1,	// (0x0003ea69) field_cale_ev2_pane_g2_ParamLimits

0x0db1,	// (0x0003ea69) field_cale_ev2_pane_g2

0x0dc9,	// (0x0003ea81) field_cale_ev2_pane_g3_ParamLimits

0x0dc9,	// (0x0003ea81) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x0004d36a) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x0004d36a) field_cale_ev2_pane_g

0x0ded,	// (0x0003eaa5) field_cale_ev2_pane_t1_ParamLimits

0x0ded,	// (0x0003eaa5) field_cale_ev2_pane_t1

0x0e04,	// (0x0003eabc) field_cale_ev2_pane_t2_ParamLimits

0x0e04,	// (0x0003eabc) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x0004d373) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x0004d373) field_cale_ev2_pane_t

0x42af,	// (0x00041f67) main_postcard_pane_g5_ParamLimits

0x42af,	// (0x00041f67) main_postcard_pane_g5

0x42bd,	// (0x00041f75) main_postcard_pane_g6_ParamLimits

0x42bd,	// (0x00041f75) main_postcard_pane_g6

0xa68c,	// (0x00048344) camera2_autofocus_pane_cp_ParamLimits

0xa68c,	// (0x00048344) camera2_autofocus_pane_cp

0xa6da,	// (0x00048392) main_mup3_pane

0x500e,	// (0x00042cc6) main_mup3_pane_g1_ParamLimits

0x500e,	// (0x00042cc6) main_mup3_pane_g1

0x502f,	// (0x00042ce7) main_mup3_pane_g2_ParamLimits

0x502f,	// (0x00042ce7) main_mup3_pane_g2

0x50a3,	// (0x00042d5b) main_mup3_pane_g3_ParamLimits

0x50a3,	// (0x00042d5b) main_mup3_pane_g3

0x5108,	// (0x00042dc0) main_mup3_pane_g4_ParamLimits

0x5108,	// (0x00042dc0) main_mup3_pane_g4

0x516d,	// (0x00042e25) main_mup3_pane_g5_ParamLimits

0x516d,	// (0x00042e25) main_mup3_pane_g5

0x51d2,	// (0x00042e8a) main_mup3_pane_g6_ParamLimits

0x51d2,	// (0x00042e8a) main_mup3_pane_g6

0xa741,	// (0x000483f9) main_mup3_pane_g7_ParamLimits

0xa741,	// (0x000483f9) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x0004d383) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x0004d383) main_mup3_pane_g

0x524c,	// (0x00042f04) main_mup3_pane_t1_ParamLimits

0x524c,	// (0x00042f04) main_mup3_pane_t1

0x52b1,	// (0x00042f69) main_mup3_pane_t2_ParamLimits

0x52b1,	// (0x00042f69) main_mup3_pane_t2

0x537a,	// (0x00043032) main_mup3_pane_t4_ParamLimits

0x537a,	// (0x00043032) main_mup3_pane_t4

0x53ce,	// (0x00043086) main_mup3_pane_t5_ParamLimits

0x53ce,	// (0x00043086) main_mup3_pane_t5

0x548a,	// (0x00043142) main_mup3_pane_t6_ParamLimits

0x548a,	// (0x00043142) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x0004d394) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x0004d394) main_mup3_pane_t

0x5534,	// (0x000431ec) mup3_progress_pane_ParamLimits

0x5534,	// (0x000431ec) mup3_progress_pane

0x55b2,	// (0x0004326a) popup_mup3_control_window_ParamLimits

0x55b2,	// (0x0004326a) popup_mup3_control_window

0xcca4,	// (0x0004a95c) popup_mup3_text_window

0x55cf,	// (0x00043287) mup3_progress_pane_t1

0x55ed,	// (0x000432a5) mup3_progress_pane_t2

0xccac,	// (0x0004a964) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x0004d3a1) mup3_progress_pane_t

0xccc9,	// (0x0004a981) mup_progress_pane_cp03

0x9ffd,	// (0x00047cb5) bg_tb_trans_pane_cp04

0x560b,	// (0x000432c3) mup3_volume_pane

0x5613,	// (0x000432cb) popup_mup3_control_window_g1

0xd853,	// (0x0004b50b) mup3_volume_pane_g1

0xd85c,	// (0x0004b514) mup3_volume_pane_g2

0xd865,	// (0x0004b51d) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0004d3a8) mup3_volume_pane_g

0x9ffd,	// (0x00047cb5) bg_tb_trans_pane_cp03

0xccd9,	// (0x0004a991) popup_mup3_text_window_g1

0xcce1,	// (0x0004a999) popup_mup3_text_window_t1

0xa7ed,	// (0x000484a5) list_calc_item_pane_g1_ParamLimits

0xc7a2,	// (0x0004a45a) mup_volume_pane_cp_g1

0x4f6e,	// (0x00042c26) main_touch_calib_pane_t3

0x4f84,	// (0x00042c3c) main_touch_calib_pane_t4

0x4f9a,	// (0x00042c52) main_touch_calib_pane_t5

0x1a68,	// (0x0003f720) aid_cell_size_toolbar2

0x1a70,	// (0x0003f728) aid_popup3_width_pane

0x0c3a,	// (0x0003e8f2) aid_zoom_text_msg_primary

0x275e,	// (0x00040416) vorec_t7

0xa7b1,	// (0x00048469) bg_calc_paper_pane_g1_ParamLimits

0xa7bd,	// (0x00048475) bg_calc_paper_pane_g2_ParamLimits

0xa7c9,	// (0x00048481) bg_calc_paper_pane_g3_ParamLimits

0xa7d5,	// (0x0004848d) bg_calc_paper_pane_g4_ParamLimits

0xa7e1,	// (0x00048499) bg_calc_paper_pane_g5_ParamLimits

0x1ede,	// (0x0003fb96) bg_calc_paper_pane_g6_ParamLimits

0x1eef,	// (0x0003fba7) bg_calc_paper_pane_g7_ParamLimits

0x1f00,	// (0x0003fbb8) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0004cd8b) bg_calc_paper_pane_g_ParamLimits

0x1f11,	// (0x0003fbc9) calc_bg_paper_pane_g9_ParamLimits

0xa68c,	// (0x00048344) image_qvga_pane_ParamLimits

0xa68c,	// (0x00048344) image_qvga_pane

0xa6b8,	// (0x00048370) bg_popup_sub_pane_cp04_ParamLimits

0xb4a1,	// (0x00049159) popup_mup_playback_window_g1_ParamLimits

0xb4ad,	// (0x00049165) popup_mup_playback_window_t1_ParamLimits

0xb4c2,	// (0x0004917a) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0004d0ee) popup_mup_playback_window_t_ParamLimits

0xa733,	// (0x000483eb) main_mup2_pane_g3_ParamLimits

0xa733,	// (0x000483eb) main_mup2_pane_g3

0x2a37,	// (0x000406ef) popup_toolbar_window_cp04

0xb8bd,	// (0x00049575) popup_call2_audio_second_window_g3_ParamLimits

0xb8bd,	// (0x00049575) popup_call2_audio_second_window_g3

0xbd05,	// (0x000499bd) popup_call2_audio_first_window_g4_ParamLimits

0xbd05,	// (0x000499bd) popup_call2_audio_first_window_g4

0xc32c,	// (0x00049fe4) popup_call2_audio_in_window_g4_ParamLimits

0xc32c,	// (0x00049fe4) popup_call2_audio_in_window_g4

0x43c3,	// (0x0004207b) aid_area_sk_bg_cut_ParamLimits

0x43c3,	// (0x0004207b) aid_area_sk_bg_cut

0xb4d7,	// (0x0004918f) aid_area_sk_bg_cut_2_ParamLimits

0xb4d7,	// (0x0004918f) aid_area_sk_bg_cut_2

0x9ffd,	// (0x00047cb5) aid_placing_details_win

0x9ffd,	// (0x00047cb5) aid_placing_details_win_2

0xa733,	// (0x000483eb) camera2_autofocus_pane_g1_ParamLimits

0x1c27,	// (0x0003f8df) popup_fixed_preview_cale_window_ParamLimits

0x1c27,	// (0x0003f8df) popup_fixed_preview_cale_window

0xb2a6,	// (0x00048f5e) navi_slider_pane_g3

0xb2af,	// (0x00048f67) navi_slider_pane_g4

0xb2b8,	// (0x00048f70) navi_slider_pane_g5

0xb2a6,	// (0x00048f5e) navi_slider_pane_g6

0x3eee,	// (0x00041ba6) navi_slider_pane_g7

0xb3d8,	// (0x00049090) mup_scale_pane_g3

0xb3e1,	// (0x00049099) mup_scale_pane_g4

0xb3ea,	// (0x000490a2) mup_scale_pane_g5

0x410b,	// (0x00041dc3) mup_scale_pane_g6

0x4114,	// (0x00041dcc) mup_scale_pane_g7

0xa965,	// (0x0004861d) cams2_slider_pane_g3

0xa965,	// (0x0004861d) cams2_slider_pane_g4

0xa965,	// (0x0004861d) cams2_slider_pane_g5

0xa965,	// (0x0004861d) cams2_slider_pane_g6

0xa965,	// (0x0004861d) cams2_slider_pane_g7

0xa965,	// (0x0004861d) camera2_autofocus_pane_cp_g1

0xc604,	// (0x0004a2bc) bg_popup_preview_window_pane_cp02_ParamLimits

0xc604,	// (0x0004a2bc) bg_popup_preview_window_pane_cp02

0xccef,	// (0x0004a9a7) list_fp_cale_pane_ParamLimits

0xccef,	// (0x0004a9a7) list_fp_cale_pane

0xccfb,	// (0x0004a9b3) popup_fixed_preview_cale_window_t1_ParamLimits

0xccfb,	// (0x0004a9b3) popup_fixed_preview_cale_window_t1

0x561c,	// (0x000432d4) popup_fixed_preview_cale_window_t2_ParamLimits

0x561c,	// (0x000432d4) popup_fixed_preview_cale_window_t2

0x5631,	// (0x000432e9) popup_fixed_preview_cale_window_t3_ParamLimits

0x5631,	// (0x000432e9) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x0004d3af) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x0004d3af) popup_fixed_preview_cale_window_t

0x5646,	// (0x000432fe) list_single_fp_cale_pane_ParamLimits

0x5646,	// (0x000432fe) list_single_fp_cale_pane

0xcd19,	// (0x0004a9d1) list_single_fp_cale_pane_g1_ParamLimits

0xcd19,	// (0x0004a9d1) list_single_fp_cale_pane_g1

0xcd25,	// (0x0004a9dd) list_single_fp_cale_pane_g2_ParamLimits

0xcd25,	// (0x0004a9dd) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x0004d3b6) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x0004d3b6) list_single_fp_cale_pane_g

0xcd3e,	// (0x0004a9f6) list_single_fp_cale_pane_t1_ParamLimits

0xcd3e,	// (0x0004a9f6) list_single_fp_cale_pane_t1

0xcd50,	// (0x0004aa08) list_single_fp_cale_pane_t2_ParamLimits

0xcd50,	// (0x0004aa08) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x0004d3bd) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x0004d3bd) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9ffd,	// (0x00047cb5) main_dialer_pane

0x9ffd,	// (0x00047cb5) aid_cell_size_keypad

0x9ffd,	// (0x00047cb5) dialer_ne_pane

0x9ffd,	// (0x00047cb5) grid_dialer_command_1_pane

0x9ffd,	// (0x00047cb5) grid_dialer_command_2_pane

0x9ffd,	// (0x00047cb5) grid_dialer_keypad_pane

0xc6c3,	// (0x0004a37b) bg_popup_call_pane_cp06_ParamLimits

0xc6c3,	// (0x0004a37b) bg_popup_call_pane_cp06

0xc6c3,	// (0x0004a37b) dialer_ne_clear_pane_ParamLimits

0xc6c3,	// (0x0004a37b) dialer_ne_clear_pane

0xa965,	// (0x0004861d) dialer_ne_pane_g1

0xb358,	// (0x00049010) dialer_ne_pane_t1_ParamLimits

0xb358,	// (0x00049010) dialer_ne_pane_t1

0xcd83,	// (0x0004aa3b) dialer_ne_pane_t2_ParamLimits

0xcd83,	// (0x0004aa3b) dialer_ne_pane_t2

0x5656,	// (0x0004330e) dialer_ne_pane_t3_ParamLimits

0x5656,	// (0x0004330e) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x0004d3c2) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x0004d3c2) dialer_ne_pane_t

0x5656,	// (0x0004330e) dialer_ne_pane_t3_copy1_ParamLimits

0x5656,	// (0x0004330e) dialer_ne_pane_t3_copy1

0xcda0,	// (0x0004aa58) cell_dialer_keypad_pane_ParamLimits

0xcda0,	// (0x0004aa58) cell_dialer_keypad_pane

0xa6da,	// (0x00048392) cell_dialer_command_1_pane_ParamLimits

0xa6da,	// (0x00048392) cell_dialer_command_1_pane

0xcdb7,	// (0x0004aa6f) cell_dialer_command_2_pane_ParamLimits

0xcdb7,	// (0x0004aa6f) cell_dialer_command_2_pane

0xa6da,	// (0x00048392) bg_button_pane_cp02_ParamLimits

0xa6da,	// (0x00048392) bg_button_pane_cp02

0xa733,	// (0x000483eb) cell_dialer_keypad_pane_g1_ParamLimits

0xa733,	// (0x000483eb) cell_dialer_keypad_pane_g1

0xa6da,	// (0x00048392) bg_button_pane_cp03_ParamLimits

0xa6da,	// (0x00048392) bg_button_pane_cp03

0xa733,	// (0x000483eb) cell_dialer_command_1_pane_g1_ParamLimits

0xa733,	// (0x000483eb) cell_dialer_command_1_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp04

0xa965,	// (0x0004861d) cell_dialer_command_2_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp06

0xa965,	// (0x0004861d) dialer_ne_clear_pane_g1

0x3e29,	// (0x00041ae1) navi_pane_g2

0x3e57,	// (0x00041b0f) navi_pane_g3

0x0002,

0xf339,	// (0x0004cff1) navi_pane_g

0x3e82,	// (0x00041b3a) navi_pane_mv_g2

0x3ea9,	// (0x00041b61) navi_pane_mv_g5

0x3eb1,	// (0x00041b69) navi_pane_mv_t1

0xa7a5,	// (0x0004845d) main_clock2_pane

0xa68c,	// (0x00048344) main_clock2_list_pane_ParamLimits

0xa68c,	// (0x00048344) main_clock2_list_pane

0x56cb,	// (0x00043383) main_clock2_pane_t1_ParamLimits

0x56cb,	// (0x00043383) main_clock2_pane_t1

0x56f9,	// (0x000433b1) main_clock2_pane_t2_ParamLimits

0x56f9,	// (0x000433b1) main_clock2_pane_t2

0x0004,

0xf716,	// (0x0004d3ce) main_clock2_pane_t_ParamLimits

0xf716,	// (0x0004d3ce) main_clock2_pane_t

0x575e,	// (0x00043416) popup_clock_analogue_window_cp03_ParamLimits

0x575e,	// (0x00043416) popup_clock_analogue_window_cp03

0x577c,	// (0x00043434) popup_clock_digital_window_cp02_ParamLimits

0x577c,	// (0x00043434) popup_clock_digital_window_cp02

0x57f1,	// (0x000434a9) main_clock2_list_single_pane_ParamLimits

0x57f1,	// (0x000434a9) main_clock2_list_single_pane

0xa943,	// (0x000485fb) list_highlight_pane_cp05

0xcdf8,	// (0x0004aab0) main_clock2_list_single_pane_t1

0x2a37,	// (0x000406ef) popup_toolbar_window_cp04_ParamLimits

0xa741,	// (0x000483f9) camera2_autofocus_pane_g2_ParamLimits

0xa741,	// (0x000483f9) camera2_autofocus_pane_g2

0xa741,	// (0x000483f9) camera2_autofocus_pane_g3_ParamLimits

0xa741,	// (0x000483f9) camera2_autofocus_pane_g3

0xa741,	// (0x000483f9) camera2_autofocus_pane_g4_ParamLimits

0xa741,	// (0x000483f9) camera2_autofocus_pane_g4

0xa741,	// (0x000483f9) camera2_autofocus_pane_g5_ParamLimits

0xa741,	// (0x000483f9) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x0004d312) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x0004d312) camera2_autofocus_pane_g

0x4fcb,	// (0x00042c83) camera2_autofocus_pane_cp_g2

0x4fd3,	// (0x00042c8b) camera2_autofocus_pane_cp_g3

0x4fdb,	// (0x00042c93) camera2_autofocus_pane_cp_g4

0x4fe3,	// (0x00042c9b) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x0004d378) camera2_autofocus_pane_cp_g

0x9ffd,	// (0x00047cb5) popup_dialer_spcha_window

0x9ffd,	// (0x00047cb5) bg_popup_sub_pane_cp07

0x9ffd,	// (0x00047cb5) list_spcha_pane

0xce06,	// (0x0004aabe) list_single_spcha_pane_ParamLimits

0xce06,	// (0x0004aabe) list_single_spcha_pane

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp06

0xaed4,	// (0x00048b8c) list_single_spcha_pane_t1

0xc0d6,	// (0x00049d8e) popup_call2_audio_out_window_g4_ParamLimits

0xc0d6,	// (0x00049d8e) popup_call2_audio_out_window_g4

0x9ffd,	// (0x00047cb5) main_imed2_pane

0x4a58,	// (0x00042710) popup_imed_adjust2_window

0x4a6b,	// (0x00042723) popup_imed_trans_window_ParamLimits

0x4a6b,	// (0x00042723) popup_imed_trans_window

0xc877,	// (0x0004a52f) popup_blid_sat_info2_window_t1

0xc885,	// (0x0004a53d) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0004d2a7) popup_blid_sat_info2_window_t

0x58a8,	// (0x00043560) aid_size_cell_colour_35

0x58c2,	// (0x0004357a) aid_size_cell_colour_112

0x58d9,	// (0x00043591) aid_size_cell_effect

0xa6da,	// (0x00048392) bg_tb_trans_pane_cp02

0xb34c,	// (0x00049004) heading_imed_pane

0x58f3,	// (0x000435ab) listscroll_imed_pane

0xce18,	// (0x0004aad0) heading_imed_pane_g1

0xce20,	// (0x0004aad8) heading_imed_pane_t1

0xce2e,	// (0x0004aae6) grid_imed_colour_35_pane_ParamLimits

0xce2e,	// (0x0004aae6) grid_imed_colour_35_pane

0x58ff,	// (0x000435b7) grid_imed_effect_pane

0xce4a,	// (0x0004ab02) list_imed_aspect_pane

0x590f,	// (0x000435c7) scroll_pane_cp027_ParamLimits

0x590f,	// (0x000435c7) scroll_pane_cp027

0x591b,	// (0x000435d3) cell_imed_effect_pane_ParamLimits

0x591b,	// (0x000435d3) cell_imed_effect_pane

0xce52,	// (0x0004ab0a) cell_imed_colour_pane_ParamLimits

0xce52,	// (0x0004ab0a) cell_imed_colour_pane

0xce9c,	// (0x0004ab54) cell_imed_colour_pane_g1_ParamLimits

0xce9c,	// (0x0004ab54) cell_imed_colour_pane_g1

0xcead,	// (0x0004ab65) hgihlgiht_grid_pane_cp016_ParamLimits

0xcead,	// (0x0004ab65) hgihlgiht_grid_pane_cp016

0x5937,	// (0x000435ef) cell_imed_effect_pane_g1

0x593f,	// (0x000435f7) grid_highlight_pane_cp017

0xcebe,	// (0x0004ab76) list_imed_single_pane_ParamLimits

0xcebe,	// (0x0004ab76) list_imed_single_pane

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp07

0xced2,	// (0x0004ab8a) list_imed_aspect_pane_comp1_t1

0xb989,	// (0x00049641) bg_tb_trans_pane_cp05

0xcef4,	// (0x0004abac) popup_imed_adjust2_window_g1

0xcf1b,	// (0x0004abd3) popup_imed_adjust2_window_t1

0xcf33,	// (0x0004abeb) slider_imed_adjust_pane

0xcf47,	// (0x0004abff) slider_imed_adjust_pane_g1

0xcf57,	// (0x0004ac0f) slider_imed_adjust_pane_g2

0xcf67,	// (0x0004ac1f) slider_imed_adjust_pane_g3

0xcf78,	// (0x0004ac30) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x0004d3eb) slider_imed_adjust_pane_g

0x5948,	// (0x00043600) aid_size_cell_clipart2

0xcf89,	// (0x0004ac41) grid_imed_clipart_pane

0xcf93,	// (0x0004ac4b) scroll_pane_cp031

0x5954,	// (0x0004360c) cell_imed_clipart_pane_ParamLimits

0x5954,	// (0x0004360c) cell_imed_clipart_pane

0x5972,	// (0x0004362a) cell_imed_clipart_pane_g1

0x9ffd,	// (0x00047cb5) grid_highlight_pane_cp014

0x56ad,	// (0x00043365) main_clock2_pane_g1_ParamLimits

0x56ad,	// (0x00043365) main_clock2_pane_g1

0x5798,	// (0x00043450) aid_call2_pane_cp10

0x57aa,	// (0x00043462) aid_call_pane_cp10

0xb1d2,	// (0x00048e8a) popup_clock_analogue_window_cp10_g1

0xb1d2,	// (0x00048e8a) popup_clock_analogue_window_cp10_g2

0x57bc,	// (0x00043474) popup_clock_analogue_window_cp10_g3

0x57bc,	// (0x00043474) popup_clock_analogue_window_cp10_g4

0xb1d2,	// (0x00048e8a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x0004d3d9) popup_clock_analogue_window_cp10_g

0x57d2,	// (0x0004348a) popup_clock_analogue_window_cp10_t1

0x5803,	// (0x000434bb) clock_digital_number_pane_cp10_ParamLimits

0x5803,	// (0x000434bb) clock_digital_number_pane_cp10

0x581d,	// (0x000434d5) clock_digital_number_pane_cp11_ParamLimits

0x581d,	// (0x000434d5) clock_digital_number_pane_cp11

0x5837,	// (0x000434ef) clock_digital_number_pane_cp12_ParamLimits

0x5837,	// (0x000434ef) clock_digital_number_pane_cp12

0x5851,	// (0x00043509) clock_digital_number_pane_cp13_ParamLimits

0x5851,	// (0x00043509) clock_digital_number_pane_cp13

0x586d,	// (0x00043525) clock_digital_separator_pane_cp10_ParamLimits

0x586d,	// (0x00043525) clock_digital_separator_pane_cp10

0x5887,	// (0x0004353f) popup_clock_digital_window_cp02_t1_ParamLimits

0x5887,	// (0x0004353f) popup_clock_digital_window_cp02_t1

0xa6b0,	// (0x00048368) clock_digital_number_pane_cp10_g1

0xa6b0,	// (0x00048368) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x0004d3f4) clock_digital_number_pane_cp10_g

0xa6b0,	// (0x00048368) clock_digital_separator_pane_cp10_g1

0xa6b0,	// (0x00048368) clock_digital_separator_pane_g2_cp10

0xb26d,	// (0x00048f25) navi_pane_vded_g4

0xb276,	// (0x00048f2e) navi_pane_vded_g5

0xb27f,	// (0x00048f37) navi_pane_vded_t1

0x9ffd,	// (0x00047cb5) main_vded_pane

0x597b,	// (0x00043633) main_vded_pane_g1

0x5987,	// (0x0004363f) main_vded_pane_g2

0x5991,	// (0x00043649) main_vded_pane_g3

0x0002,

0xf741,	// (0x0004d3f9) main_vded_pane_g

0x599b,	// (0x00043653) main_vded_pane_t1

0x59a9,	// (0x00043661) main_vded_pane_t2

0x0001,

0xf748,	// (0x0004d400) main_vded_pane_t

0x59b7,	// (0x0004366f) vded_slider_pane

0x59c1,	// (0x00043679) vded_video_pane

0xcf9b,	// (0x0004ac53) vded_video_pane_g1

0x59cd,	// (0x00043685) vded_video_pane_g2

0xa965,	// (0x0004861d) vded_video_pane_g3

0x0002,

0xf74d,	// (0x0004d405) vded_video_pane_g

0xcfa5,	// (0x0004ac5d) vded_slider_pane_g1

0xc7a2,	// (0x0004a45a) vded_slider_pane_g2

0xcfae,	// (0x0004ac66) vded_slider_pane_g3

0xcfb7,	// (0x0004ac6f) vded_slider_pane_g4

0xcfc0,	// (0x0004ac78) vded_slider_pane_g5

0x0004,

0xf754,	// (0x0004d40c) vded_slider_pane_g

0x55a6,	// (0x0004325e) mup3_rocker_pane_ParamLimits

0x55a6,	// (0x0004325e) mup3_rocker_pane

0x59d6,	// (0x0004368e) mup3_control_keys_pane_g1

0x59de,	// (0x00043696) mup3_control_keys_pane_g2

0x59e6,	// (0x0004369e) mup3_control_keys_pane_g3

0x59ee,	// (0x000436a6) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0004d417) mup3_control_keys_pane_g

0x1c4f,	// (0x0003f907) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1c4f,	// (0x0003f907) popup_toolbar2_fixed_window_cp01

0x55c2,	// (0x0004327a) popup_toolbar2_fixed_window_cp02_ParamLimits

0x55c2,	// (0x0004327a) popup_toolbar2_fixed_window_cp02

0xba6d,	// (0x00049725) popup_call2_audio_second_window_t4_ParamLimits

0xba6d,	// (0x00049725) popup_call2_audio_second_window_t4

0xbf9b,	// (0x00049c53) popup_call2_audio_first_window_t6_ParamLimits

0xbf9b,	// (0x00049c53) popup_call2_audio_first_window_t6

0xc1d9,	// (0x00049e91) popup_call2_audio_out_window_t6_ParamLimits

0xc1d9,	// (0x00049e91) popup_call2_audio_out_window_t6

0x9ffd,	// (0x00047cb5) main_vitu_pane

0xa68c,	// (0x00048344) aid_size_cell_itu_ParamLimits

0xa68c,	// (0x00048344) aid_size_cell_itu

0xa68c,	// (0x00048344) bg_popup_window_pane_cp08_ParamLimits

0xa68c,	// (0x00048344) bg_popup_window_pane_cp08

0xa68c,	// (0x00048344) field_vitu_entry_pane_ParamLimits

0xa68c,	// (0x00048344) field_vitu_entry_pane

0xa68c,	// (0x00048344) grid_vitu_function_pane_ParamLimits

0xa68c,	// (0x00048344) grid_vitu_function_pane

0xa68c,	// (0x00048344) grid_vitu_itu_pane_ParamLimits

0xa68c,	// (0x00048344) grid_vitu_itu_pane

0xa68c,	// (0x00048344) cell_vitu_itu_pane_ParamLimits

0xa68c,	// (0x00048344) cell_vitu_itu_pane

0xa68c,	// (0x00048344) cell_vitu_function_pane_ParamLimits

0xa68c,	// (0x00048344) cell_vitu_function_pane

0xa6da,	// (0x00048392) bg_popup_sub_pane_cp08_ParamLimits

0xa6da,	// (0x00048392) bg_popup_sub_pane_cp08

0xa97f,	// (0x00048637) field_vitu_entry_pane_t1_ParamLimits

0xa97f,	// (0x00048637) field_vitu_entry_pane_t1

0xcd83,	// (0x0004aa3b) field_vitu_entry_pane_t2_ParamLimits

0xcd83,	// (0x0004aa3b) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x0004d420) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x0004d420) field_vitu_entry_pane_t

0xc6c3,	// (0x0004a37b) bg_button_pane_cp05_ParamLimits

0xc6c3,	// (0x0004a37b) bg_button_pane_cp05

0xcfc9,	// (0x0004ac81) cell_vitu_itu_pane_g1

0xb9a5,	// (0x0004965d) cell_vitu_itu_pane_t1_ParamLimits

0xb9a5,	// (0x0004965d) cell_vitu_itu_pane_t1

0xb9a5,	// (0x0004965d) cell_vitu_itu_pane_t2_ParamLimits

0xb9a5,	// (0x0004965d) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x0004d425) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x0004d425) cell_vitu_itu_pane_t

0x9ffd,	// (0x00047cb5) bg_button_pane_cp07

0xa965,	// (0x0004861d) cell_vitu_function_pane_g1

0x1d80,	// (0x0003fa38) main_calc_pane_g1

0x1aa4,	// (0x0003f75c) aid_visual_content_pane

0x9ffd,	// (0x00047cb5) main_vradio_pane

0xa741,	// (0x000483f9) main_vradio_pane_g1_ParamLimits

0xa741,	// (0x000483f9) main_vradio_pane_g1

0xa741,	// (0x000483f9) main_vradio_pane_g2_ParamLimits

0xa741,	// (0x000483f9) main_vradio_pane_g2

0x0001,

0xf774,	// (0x0004d42c) main_vradio_pane_g_ParamLimits

0xf774,	// (0x0004d42c) main_vradio_pane_g

0xb358,	// (0x00049010) main_vradio_pane_t1_ParamLimits

0xb358,	// (0x00049010) main_vradio_pane_t1

0xb358,	// (0x00049010) main_vradio_pane_t2_ParamLimits

0xb358,	// (0x00049010) main_vradio_pane_t2

0xb358,	// (0x00049010) main_vradio_pane_t3_ParamLimits

0xb358,	// (0x00049010) main_vradio_pane_t3

0x0002,

0xf779,	// (0x0004d431) main_vradio_pane_t_ParamLimits

0xf779,	// (0x0004d431) main_vradio_pane_t

0xa68c,	// (0x00048344) vradio_rocker_control_pane_ParamLimits

0xa68c,	// (0x00048344) vradio_rocker_control_pane

0xa68c,	// (0x00048344) vradio_station_info_pane_ParamLimits

0xa68c,	// (0x00048344) vradio_station_info_pane

0xa6da,	// (0x00048392) vradio_frequency_info_pane_ParamLimits

0xa6da,	// (0x00048392) vradio_frequency_info_pane

0xa965,	// (0x0004861d) vradio_station_info_pane_g1

0xb9a5,	// (0x0004965d) vradio_station_info_pane_t1_ParamLimits

0xb9a5,	// (0x0004965d) vradio_station_info_pane_t1

0xb358,	// (0x00049010) vradio_station_info_pane_t2_ParamLimits

0xb358,	// (0x00049010) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x0004d438) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x0004d438) vradio_station_info_pane_t

0x9ffd,	// (0x00047cb5) vradio_tuning_pane

0x59fe,	// (0x000436b6) vradio_rocker_control_pane_g1

0xcfe5,	// (0x0004ac9d) vradio_rocker_control_pane_g2

0x5a06,	// (0x000436be) vradio_rocker_control_pane_g3

0x5a0e,	// (0x000436c6) vradio_rocker_control_pane_g4

0x5a18,	// (0x000436d0) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x0004d43d) vradio_rocker_control_pane_g

0xa965,	// (0x0004861d) vradio_frequency_info_pane_g1

0xa97f,	// (0x00048637) vradio_frequency_info_pane_t1_ParamLimits

0xa97f,	// (0x00048637) vradio_frequency_info_pane_t1

0x5a20,	// (0x000436d8) vradio_tuning_pane_g1

0x5a2d,	// (0x000436e5) vradio_tuning_pane_t1

0x1aed,	// (0x0003f7a5) area_side_right_pane_ParamLimits

0x1aed,	// (0x0003f7a5) area_side_right_pane

0xc5cb,	// (0x0004a283) status_small_pane_g1

0xc5d3,	// (0x0004a28b) status_small_pane_g2

0xc5dc,	// (0x0004a294) status_small_pane_g3

0xc5e5,	// (0x0004a29d) status_small_pane_g4

0x0003,

0xf551,	// (0x0004d209) status_small_pane_g

0xc5ee,	// (0x0004a2a6) status_small_pane_t1

0x9ffd,	// (0x00047cb5) main_video3_pane

0xcfed,	// (0x0004aca5) cams_zoom_vslider_pane

0xcff5,	// (0x0004acad) image3_wide_pane_ParamLimits

0xcff5,	// (0x0004acad) image3_wide_pane

0xd00f,	// (0x0004acc7) image3_wide_small_pane

0xd01b,	// (0x0004acd3) main_video3_pane_g1_ParamLimits

0xd01b,	// (0x0004acd3) main_video3_pane_g1

0xd037,	// (0x0004acef) main_video3_pane_g2_ParamLimits

0xd037,	// (0x0004acef) main_video3_pane_g2

0x0001,

0xf790,	// (0x0004d448) main_video3_pane_g_ParamLimits

0xf790,	// (0x0004d448) main_video3_pane_g

0xd053,	// (0x0004ad0b) main_video3_pane_t1_ParamLimits

0xd053,	// (0x0004ad0b) main_video3_pane_t1

0xd07e,	// (0x0004ad36) main_video3_pane_t2_ParamLimits

0xd07e,	// (0x0004ad36) main_video3_pane_t2

0xd0ab,	// (0x0004ad63) main_video3_pane_t3_ParamLimits

0xd0ab,	// (0x0004ad63) main_video3_pane_t3

0x0002,

0xf795,	// (0x0004d44d) main_video3_pane_t_ParamLimits

0xf795,	// (0x0004d44d) main_video3_pane_t

0xd0d8,	// (0x0004ad90) cams_zoom_vslider_pane_g1

0xd0e1,	// (0x0004ad99) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x0004d454) cams_zoom_vslider_pane_g

0xd0e9,	// (0x0004ada1) small_slider_vertical_pane

0xa965,	// (0x0004861d) small_slider_vertical_pane_g1

0xa965,	// (0x0004861d) small_slider_vertical_pane_g2

0xd0f1,	// (0x0004ada9) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x0004d459) small_slider_vertical_pane_g

0x9ffd,	// (0x00047cb5) main_hwr_training_pane

0xd0fa,	// (0x0004adb2) hwr_training_instruct_pane_ParamLimits

0xd0fa,	// (0x0004adb2) hwr_training_instruct_pane

0x5a3c,	// (0x000436f4) hwr_training_navi_pane_ParamLimits

0x5a3c,	// (0x000436f4) hwr_training_navi_pane

0x5a56,	// (0x0004370e) hwr_training_write_pane_ParamLimits

0x5a56,	// (0x0004370e) hwr_training_write_pane

0x9ffd,	// (0x00047cb5) bg_frame_shadow_pane

0xd131,	// (0x0004ade9) hwr_training_write_pane_g1

0xd139,	// (0x0004adf1) hwr_training_write_pane_g2

0xd141,	// (0x0004adf9) hwr_training_write_pane_g3

0xd149,	// (0x0004ae01) hwr_training_write_pane_g4

0xd151,	// (0x0004ae09) hwr_training_write_pane_g5

0xd159,	// (0x0004ae11) hwr_training_write_pane_g6

0xd161,	// (0x0004ae19) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x0004d460) hwr_training_write_pane_g

0x5a8e,	// (0x00043746) hwr_training_navi_pane_g1_ParamLimits

0x5a8e,	// (0x00043746) hwr_training_navi_pane_g1

0x5aa0,	// (0x00043758) hwr_training_navi_pane_g2_ParamLimits

0x5aa0,	// (0x00043758) hwr_training_navi_pane_g2

0x5ab2,	// (0x0004376a) hwr_training_navi_pane_g3_ParamLimits

0x5ab2,	// (0x0004376a) hwr_training_navi_pane_g3

0x5ac2,	// (0x0004377a) hwr_training_navi_pane_g4_ParamLimits

0x5ac2,	// (0x0004377a) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x0004d46f) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x0004d46f) hwr_training_navi_pane_g

0x5adc,	// (0x00043794) hwr_training_navi_pane_t1

0x5aea,	// (0x000437a2) list_single_hwr_training_instruct_pane_ParamLimits

0x5aea,	// (0x000437a2) list_single_hwr_training_instruct_pane

0xd169,	// (0x0004ae21) list_single_hwr_training_instruct_pane_t1

0xc97e,	// (0x0004a636) bg_frame_shadow_pane_g1

0xd178,	// (0x0004ae30) bg_frame_shadow_pane_g2

0xd180,	// (0x0004ae38) bg_frame_shadow_pane_g3

0xd188,	// (0x0004ae40) bg_frame_shadow_pane_g4

0xd190,	// (0x0004ae48) bg_frame_shadow_pane_g5

0xd198,	// (0x0004ae50) bg_frame_shadow_pane_g6

0xd1a0,	// (0x0004ae58) bg_frame_shadow_pane_g7

0xa854,	// (0x0004850c) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x0004d47a) bg_frame_shadow_pane_g

0x9ffd,	// (0x00047cb5) main_video_tele_dialer_pane

0x5b03,	// (0x000437bb) aid_size_cell_video_keypad_ParamLimits

0x5b03,	// (0x000437bb) aid_size_cell_video_keypad

0x5b13,	// (0x000437cb) grid_video_dialer_keypad_pane_ParamLimits

0x5b13,	// (0x000437cb) grid_video_dialer_keypad_pane

0x5b45,	// (0x000437fd) video_down_pane_cp_ParamLimits

0x5b45,	// (0x000437fd) video_down_pane_cp

0x5b6f,	// (0x00043827) cell_video_dialer_keypad_pane_ParamLimits

0x5b6f,	// (0x00043827) cell_video_dialer_keypad_pane

0xd1a8,	// (0x0004ae60) bg_button_pane_cp08_ParamLimits

0xd1a8,	// (0x0004ae60) bg_button_pane_cp08

0x5b86,	// (0x0004383e) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b86,	// (0x0004383e) cell_video_dialer_keypad_pane_g1

0x559a,	// (0x00043252) mup3_rocker2_pane_ParamLimits

0x559a,	// (0x00043252) mup3_rocker2_pane

0xa965,	// (0x0004861d) mup3_rocker2_pane_g1

0x49bc,	// (0x00042674) main_dialer2_pane

0x9ffd,	// (0x00047cb5) main_mp4_pane

0x5bdf,	// (0x00043897) main_mp4_pane_g1_ParamLimits

0x5bdf,	// (0x00043897) main_mp4_pane_g1

0x5bed,	// (0x000438a5) main_mp4_pane_g2_ParamLimits

0x5bed,	// (0x000438a5) main_mp4_pane_g2

0x5bfb,	// (0x000438b3) main_mp4_pane_g3_ParamLimits

0x5bfb,	// (0x000438b3) main_mp4_pane_g3

0x5c4e,	// (0x00043906) main_mp4_pane_g4_ParamLimits

0x5c4e,	// (0x00043906) main_mp4_pane_g4

0x5c7c,	// (0x00043934) main_mp4_pane_g5_ParamLimits

0x5c7c,	// (0x00043934) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x0004d49a) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x0004d49a) main_mp4_pane_g

0x5cf0,	// (0x000439a8) main_mp4_pane_t1_ParamLimits

0x5cf0,	// (0x000439a8) main_mp4_pane_t1

0x5d4c,	// (0x00043a04) main_mp4_pane_t2_ParamLimits

0x5d4c,	// (0x00043a04) main_mp4_pane_t2

0xd1b4,	// (0x0004ae6c) main_mp4_pane_t3_ParamLimits

0xd1b4,	// (0x0004ae6c) main_mp4_pane_t3

0x5d9e,	// (0x00043a56) main_mp4_pane_t4_ParamLimits

0x5d9e,	// (0x00043a56) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x0004d4ab) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x0004d4ab) main_mp4_pane_t

0x5dde,	// (0x00043a96) mp4_progress_pane_ParamLimits

0x5dde,	// (0x00043a96) mp4_progress_pane

0x5e28,	// (0x00043ae0) mp4_rocker_pane_ParamLimits

0x5e28,	// (0x00043ae0) mp4_rocker_pane

0xd1e2,	// (0x0004ae9a) mp4_progress_pane_t1

0xd1fb,	// (0x0004aeb3) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x0004d4b4) mp4_progress_pane_t

0xd214,	// (0x0004aecc) mup_progress_pane_cp04

0xa965,	// (0x0004861d) mp4_rocker_pane_g1

0x5e4a,	// (0x00043b02) aid_cell_size_keypad2_ParamLimits

0x5e4a,	// (0x00043b02) aid_cell_size_keypad2

0x5e5a,	// (0x00043b12) dialer2_ne_pane_ParamLimits

0x5e5a,	// (0x00043b12) dialer2_ne_pane

0x5e66,	// (0x00043b1e) grid_dialer2_keypad_pane_ParamLimits

0x5e66,	// (0x00043b1e) grid_dialer2_keypad_pane

0xd306,	// (0x0004afbe) bg_popup_call_pane_cp07_ParamLimits

0xd306,	// (0x0004afbe) bg_popup_call_pane_cp07

0x5e74,	// (0x00043b2c) dialer2_ne_pane_t1_ParamLimits

0x5e74,	// (0x00043b2c) dialer2_ne_pane_t1

0x5e99,	// (0x00043b51) cell_dialer2_keypad_pane_ParamLimits

0x5e99,	// (0x00043b51) cell_dialer2_keypad_pane

0xd239,	// (0x0004aef1) bg_button_pane_pane_cp04_ParamLimits

0xd239,	// (0x0004aef1) bg_button_pane_pane_cp04

0x5eb0,	// (0x00043b68) cell_dialer2_keypad_pane_g1_ParamLimits

0x5eb0,	// (0x00043b68) cell_dialer2_keypad_pane_g1

0x2909,	// (0x000405c1) aid_placing_vt_set_content_ParamLimits

0x2909,	// (0x000405c1) aid_placing_vt_set_content

0x2931,	// (0x000405e9) aid_placing_vt_set_title_ParamLimits

0x2931,	// (0x000405e9) aid_placing_vt_set_title

0x9ffd,	// (0x00047cb5) main_image3_pane

0x5f4a,	// (0x00043c02) area_side_right_pane_cp01_ParamLimits

0x5f4a,	// (0x00043c02) area_side_right_pane_cp01

0xa74f,	// (0x00048407) main_image3_pane_g1_ParamLimits

0xa74f,	// (0x00048407) main_image3_pane_g1

0x5f79,	// (0x00043c31) main_image3_pane_g2_ParamLimits

0x5f79,	// (0x00043c31) main_image3_pane_g2

0x5f92,	// (0x00043c4a) main_image3_pane_g3_ParamLimits

0x5f92,	// (0x00043c4a) main_image3_pane_g3

0x5fab,	// (0x00043c63) main_image3_pane_g4_ParamLimits

0x5fab,	// (0x00043c63) main_image3_pane_g4

0x0003,

0xf80b,	// (0x0004d4c3) main_image3_pane_g_ParamLimits

0xf80b,	// (0x0004d4c3) main_image3_pane_g

0x5fc4,	// (0x00043c7c) main_image3_pane_t1_ParamLimits

0x5fc4,	// (0x00043c7c) main_image3_pane_t1

0x5fe9,	// (0x00043ca1) main_image3_pane_t2_ParamLimits

0x5fe9,	// (0x00043ca1) main_image3_pane_t2

0x6008,	// (0x00043cc0) main_image3_pane_t3_ParamLimits

0x6008,	// (0x00043cc0) main_image3_pane_t3

0x0003,

0xf814,	// (0x0004d4cc) main_image3_pane_t_ParamLimits

0xf814,	// (0x0004d4cc) main_image3_pane_t

0xa68c,	// (0x00048344) grid_sctrl_middle_pane_cp01_ParamLimits

0xa68c,	// (0x00048344) grid_sctrl_middle_pane_cp01

0x6069,	// (0x00043d21) cell_sctrl_middle_pane_cp01_ParamLimits

0x6069,	// (0x00043d21) cell_sctrl_middle_pane_cp01

0x607a,	// (0x00043d32) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x607a,	// (0x00043d32) cell_sctrl_middle_pane_cp01_g1

0x9ffd,	// (0x00047cb5) main_call4_pane

0x6087,	// (0x00043d3f) aid_size_button_call4_ParamLimits

0x6087,	// (0x00043d3f) aid_size_button_call4

0x60bd,	// (0x00043d75) call4_windows_pane_ParamLimits

0x60bd,	// (0x00043d75) call4_windows_pane

0x60d2,	// (0x00043d8a) grid_call4_button_pane_ParamLimits

0x60d2,	// (0x00043d8a) grid_call4_button_pane

0x6102,	// (0x00043dba) call4_windows_conf_pane

0x611b,	// (0x00043dd3) popup_call4_audio_first_window_ParamLimits

0x611b,	// (0x00043dd3) popup_call4_audio_first_window

0x616b,	// (0x00043e23) popup_call4_audio_second_window_ParamLimits

0x616b,	// (0x00043e23) popup_call4_audio_second_window

0x6184,	// (0x00043e3c) popup_call4_audio_wait_window_ParamLimits

0x6184,	// (0x00043e3c) popup_call4_audio_wait_window

0x6192,	// (0x00043e4a) cell_call4_button_pane_ParamLimits

0x6192,	// (0x00043e4a) cell_call4_button_pane

0x61b5,	// (0x00043e6d) bg_button_pane_cp09_ParamLimits

0x61b5,	// (0x00043e6d) bg_button_pane_cp09

0x61c1,	// (0x00043e79) cell_call4_button_pane_g1_ParamLimits

0x61c1,	// (0x00043e79) cell_call4_button_pane_g1

0x61ce,	// (0x00043e86) cell_call4_button_pane_t1_ParamLimits

0x61ce,	// (0x00043e86) cell_call4_button_pane_t1

0xd24d,	// (0x0004af05) popup_call4_audio_conf_window_ParamLimits

0xd24d,	// (0x0004af05) popup_call4_audio_conf_window

0x55cf,	// (0x00043287) mup3_progress_pane_t1_ParamLimits

0x55ed,	// (0x000432a5) mup3_progress_pane_t2_ParamLimits

0xccac,	// (0x0004a964) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x0004d3a1) mup3_progress_pane_t_ParamLimits

0xccc9,	// (0x0004a981) mup_progress_pane_cp03_ParamLimits

0x59f6,	// (0x000436ae) mup3_control_keys_pane_g4_copy1

0x5e0c,	// (0x00043ac4) mp4_rocker2_pane_ParamLimits

0x5e0c,	// (0x00043ac4) mp4_rocker2_pane

0xd267,	// (0x0004af1f) mp4_rocker2_pane_g1

0xd26f,	// (0x0004af27) mp4_rocker2_pane_g2

0x6212,	// (0x00043eca) mp4_rocker2_pane_g3

0x621a,	// (0x00043ed2) mp4_rocker2_pane_g4

0x6222,	// (0x00043eda) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x0004d4d5) mp4_rocker2_pane_g

0x9ffd,	// (0x00047cb5) main_camera4_pane

0x9ffd,	// (0x00047cb5) main_video4_pane

0x5b21,	// (0x000437d9) main_video_tele_dialer_pane_t1_ParamLimits

0x5b21,	// (0x000437d9) main_video_tele_dialer_pane_t1

0x5b33,	// (0x000437eb) main_video_tele_dialer_pane_t2_ParamLimits

0x5b33,	// (0x000437eb) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x0004d48b) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x0004d48b) main_video_tele_dialer_pane_t

0x6242,	// (0x00043efa) cam4_autofocus_pane_ParamLimits

0x6242,	// (0x00043efa) cam4_autofocus_pane

0x625a,	// (0x00043f12) cam4_image_uncrop_pane_ParamLimits

0x625a,	// (0x00043f12) cam4_image_uncrop_pane

0x6273,	// (0x00043f2b) cam4_indicators_pane_ParamLimits

0x6273,	// (0x00043f2b) cam4_indicators_pane

0x628f,	// (0x00043f47) main_camera4_pane_g1_ParamLimits

0x628f,	// (0x00043f47) main_camera4_pane_g1

0x629b,	// (0x00043f53) main_camera4_pane_g2_ParamLimits

0x629b,	// (0x00043f53) main_camera4_pane_g2

0x629b,	// (0x00043f53) main_camera4_pane_g3_ParamLimits

0x629b,	// (0x00043f53) main_camera4_pane_g3

0x62a7,	// (0x00043f5f) main_camera4_pane_g4_ParamLimits

0x62a7,	// (0x00043f5f) main_camera4_pane_g4

0x62b3,	// (0x00043f6b) main_camera4_pane_g5_ParamLimits

0x62b3,	// (0x00043f6b) main_camera4_pane_g5

0x0005,

0xf828,	// (0x0004d4e0) main_camera4_pane_g_ParamLimits

0xf828,	// (0x0004d4e0) main_camera4_pane_g

0x62cd,	// (0x00043f85) main_camera4_pane_t1_ParamLimits

0x62cd,	// (0x00043f85) main_camera4_pane_t1

0xa733,	// (0x000483eb) bg_tb_trans_pane_cp06

0x631f,	// (0x00043fd7) cam4_indicators_pane_g1

0x6330,	// (0x00043fe8) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x0004d4fb) cam4_indicators_pane_g

0x6348,	// (0x00044000) cam4_indicators_pane_t1

0x6372,	// (0x0004402a) main_video4_pane_g1_ParamLimits

0x6372,	// (0x0004402a) main_video4_pane_g1

0x637e,	// (0x00044036) main_video4_pane_g2_ParamLimits

0x637e,	// (0x00044036) main_video4_pane_g2

0x638a,	// (0x00044042) main_video4_pane_g3_ParamLimits

0x638a,	// (0x00044042) main_video4_pane_g3

0x6396,	// (0x0004404e) main_video4_pane_g4_ParamLimits

0x6396,	// (0x0004404e) main_video4_pane_g4

0x0004,

0xf84a,	// (0x0004d502) main_video4_pane_g_ParamLimits

0xf84a,	// (0x0004d502) main_video4_pane_g

0x63b8,	// (0x00044070) vid4_indicators_pane_ParamLimits

0x63b8,	// (0x00044070) vid4_indicators_pane

0x63d7,	// (0x0004408f) video4_image_uncrop_cif_pane_ParamLimits

0x63d7,	// (0x0004408f) video4_image_uncrop_cif_pane

0x63e6,	// (0x0004409e) video4_image_uncrop_nhd_pane_ParamLimits

0x63e6,	// (0x0004409e) video4_image_uncrop_nhd_pane

0x625a,	// (0x00043f12) video4_image_uncrop_vga_pane_ParamLimits

0x625a,	// (0x00043f12) video4_image_uncrop_vga_pane

0xa6da,	// (0x00048392) bg_tb_trans_pane_cp07

0x63ff,	// (0x000440b7) vid4_indicators_pane_g1

0x6415,	// (0x000440cd) vid4_indicators_pane_g2

0x6429,	// (0x000440e1) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x0004d50d) vid4_indicators_pane_g

0x645a,	// (0x00044112) vid4_indicators_pane_t1

0x6471,	// (0x00044129) cam4_autofocus_pane_g1

0x6479,	// (0x00044131) cam4_autofocus_pane_g2

0x6481,	// (0x00044139) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0004d518) cam4_autofocus_pane_g

0x6489,	// (0x00044141) cam4_autofocus_pane_g3_copy1

0x5b53,	// (0x0004380b) video_down_pane_cp_t1

0x5b61,	// (0x00043819) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x0004d490) video_down_pane_cp_t

0xa68c,	// (0x00048344) popup_vitu2_window_ParamLimits

0xa68c,	// (0x00048344) popup_vitu2_window

0x6491,	// (0x00044149) aid_size_cell2_itu2_ParamLimits

0x6491,	// (0x00044149) aid_size_cell2_itu2

0x64b3,	// (0x0004416b) aid_size_cell_itu2_ParamLimits

0x64b3,	// (0x0004416b) aid_size_cell_itu2

0xd306,	// (0x0004afbe) bg_popup_window_pane_cp09_ParamLimits

0xd306,	// (0x0004afbe) bg_popup_window_pane_cp09

0x64f7,	// (0x000441af) field_vitu2_entry_pane_ParamLimits

0x64f7,	// (0x000441af) field_vitu2_entry_pane

0x6517,	// (0x000441cf) grid_vitu2_function_pane_ParamLimits

0x6517,	// (0x000441cf) grid_vitu2_function_pane

0x655b,	// (0x00044213) grid_vitu2_itu_pane_ParamLimits

0x655b,	// (0x00044213) grid_vitu2_itu_pane

0x65d1,	// (0x00044289) cell_vitu2_itu_pane_ParamLimits

0x65d1,	// (0x00044289) cell_vitu2_itu_pane

0x65ec,	// (0x000442a4) cell_vitu2_function_pane_ParamLimits

0x65ec,	// (0x000442a4) cell_vitu2_function_pane

0xd277,	// (0x0004af2f) bg_popup_call_pane_cp08_ParamLimits

0xd277,	// (0x0004af2f) bg_popup_call_pane_cp08

0xd28e,	// (0x0004af46) field_vitu2_entry_pane_g1

0xd29a,	// (0x0004af52) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x0004d51f) field_vitu2_entry_pane_g

0x0e19,	// (0x0003ead1) field_vitu2_entry_pane_t1_ParamLimits

0x0e19,	// (0x0003ead1) field_vitu2_entry_pane_t1

0x0e49,	// (0x0003eb01) field_vitu2_entry_pane_t2_ParamLimits

0x0e49,	// (0x0003eb01) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x0004d526) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x0004d526) field_vitu2_entry_pane_t

0x4d0e,	// (0x000429c6) bg_button_pane_cp010_ParamLimits

0x4d0e,	// (0x000429c6) bg_button_pane_cp010

0x6630,	// (0x000442e8) cell_vitu2_itu_pane_g1

0x6656,	// (0x0004430e) cell_vitu2_itu_pane_t1_ParamLimits

0x6656,	// (0x0004430e) cell_vitu2_itu_pane_t1

0x0e66,	// (0x0003eb1e) cell_vitu2_itu_pane_t2_ParamLimits

0x0e66,	// (0x0003eb1e) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x0004d530) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x0004d530) cell_vitu2_itu_pane_t

0xa6da,	// (0x00048392) bg_button_pane_cp011

0x66a2,	// (0x0004435a) cell_vitu2_function_pane_g1

0x9ffd,	// (0x00047cb5) main_myfav_hc_pane

0x604a,	// (0x00043d02) popup_image3_note_pane_ParamLimits

0x604a,	// (0x00043d02) popup_image3_note_pane

0x6058,	// (0x00043d10) popup_image3_tool_bar_pane_ParamLimits

0x6058,	// (0x00043d10) popup_image3_tool_bar_pane

0x0edc,	// (0x0003eb94) cell_vitu2_itu_pane_t3_ParamLimits

0x0edc,	// (0x0003eb94) cell_vitu2_itu_pane_t3

0x9ffd,	// (0x00047cb5) bg_popup_trans_pane

0xd2ae,	// (0x0004af66) grid_image3_tool_bar_pane

0xd2b8,	// (0x0004af70) bg_popup_trans_pane_g1

0xab9d,	// (0x00048855) bg_popup_trans_pane_g2

0xd2c0,	// (0x0004af78) bg_popup_trans_pane_g3

0xd2c8,	// (0x0004af80) bg_popup_trans_pane_g4

0xd2d0,	// (0x0004af88) bg_popup_trans_pane_g5

0xd2d8,	// (0x0004af90) bg_popup_trans_pane_g6

0xd2e0,	// (0x0004af98) bg_popup_trans_pane_g7

0xd2e8,	// (0x0004afa0) bg_popup_trans_pane_g8

0xab7d,	// (0x00048835) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x0004d537) bg_popup_trans_pane_g

0xd2f0,	// (0x0004afa8) cell_image3_tool_bar_pane_ParamLimits

0xd2f0,	// (0x0004afa8) cell_image3_tool_bar_pane

0xa965,	// (0x0004861d) cell_image3_tool_bar_pane_g1

0x9ffd,	// (0x00047cb5) bg_popup_trans_pane_cp1

0xd314,	// (0x0004afcc) popup_image3_note_pane_t1

0xd322,	// (0x0004afda) popup_image3_note_pane_t2

0xd330,	// (0x0004afe8) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x0004d54a) popup_image3_note_pane_t

0xd340,	// (0x0004aff8) popup_image3_note_pane_t3_copy1

0x66b6,	// (0x0004436e) bg_myfav_hc_instruction_pane_ParamLimits

0x66b6,	// (0x0004436e) bg_myfav_hc_instruction_pane

0x66ce,	// (0x00044386) cell_myfav_contact_pane_ParamLimits

0x66ce,	// (0x00044386) cell_myfav_contact_pane

0x66e8,	// (0x000443a0) cell_myfav_contact_pane_cp1_ParamLimits

0x66e8,	// (0x000443a0) cell_myfav_contact_pane_cp1

0x6700,	// (0x000443b8) cell_myfav_contact_pane_cp2_ParamLimits

0x6700,	// (0x000443b8) cell_myfav_contact_pane_cp2

0x6718,	// (0x000443d0) cell_myfav_contact_pane_cp3_ParamLimits

0x6718,	// (0x000443d0) cell_myfav_contact_pane_cp3

0x672f,	// (0x000443e7) cell_myfav_contact_pane_cp4_ParamLimits

0x672f,	// (0x000443e7) cell_myfav_contact_pane_cp4

0x6745,	// (0x000443fd) cell_myfav_contact_pane_cp5_ParamLimits

0x6745,	// (0x000443fd) cell_myfav_contact_pane_cp5

0x6759,	// (0x00044411) cell_myfav_contact_pane_cp6_ParamLimits

0x6759,	// (0x00044411) cell_myfav_contact_pane_cp6

0x676d,	// (0x00044425) cell_myfav_contact_pane_cp7_ParamLimits

0x676d,	// (0x00044425) cell_myfav_contact_pane_cp7

0xd34e,	// (0x0004b006) listscroll_gen_pane_cp05

0x6785,	// (0x0004443d) main_myfav_hc_pane_g1_ParamLimits

0x6785,	// (0x0004443d) main_myfav_hc_pane_g1

0x679f,	// (0x00044457) main_myfav_hc_pane_g2_ParamLimits

0x679f,	// (0x00044457) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x0004d551) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x0004d551) main_myfav_hc_pane_g

0x67d1,	// (0x00044489) main_myfav_hc_pane_t1_ParamLimits

0x67d1,	// (0x00044489) main_myfav_hc_pane_t1

0xd357,	// (0x0004b00f) main_myfav_hc_pane_t2_ParamLimits

0xd357,	// (0x0004b00f) main_myfav_hc_pane_t2

0xd369,	// (0x0004b021) main_myfav_hc_pane_t3_ParamLimits

0xd369,	// (0x0004b021) main_myfav_hc_pane_t3

0x67e8,	// (0x000444a0) main_myfav_hc_pane_t4_ParamLimits

0x67e8,	// (0x000444a0) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x0004d558) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x0004d558) main_myfav_hc_pane_t

0xa965,	// (0x0004861d) bg_myfav_hc_instruction_pane_g1

0xd37b,	// (0x0004b033) cell_myfav_contact_pane_g1_ParamLimits

0xd37b,	// (0x0004b033) cell_myfav_contact_pane_g1

0xd37b,	// (0x0004b033) cell_myfav_contact_pane_g2_ParamLimits

0xd37b,	// (0x0004b033) cell_myfav_contact_pane_g2

0xd387,	// (0x0004b03f) cell_myfav_contact_pane_g3_ParamLimits

0xd387,	// (0x0004b03f) cell_myfav_contact_pane_g3

0xa741,	// (0x000483f9) cell_myfav_contact_pane_g4_ParamLimits

0xa741,	// (0x000483f9) cell_myfav_contact_pane_g4

0xd394,	// (0x0004b04c) cell_myfav_contact_pane_g5_ParamLimits

0xd394,	// (0x0004b04c) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x0004d563) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x0004d563) cell_myfav_contact_pane_g

0x67b9,	// (0x00044471) main_myfav_hc_pane_g3_ParamLimits

0x67b9,	// (0x00044471) main_myfav_hc_pane_g3

0x0c4a,	// (0x0003e902) popup_adpt_find_window

0x6812,	// (0x000444ca) afind_page_pane_ParamLimits

0x6812,	// (0x000444ca) afind_page_pane

0x681f,	// (0x000444d7) aid_size_cell_afind_ParamLimits

0x681f,	// (0x000444d7) aid_size_cell_afind

0x6839,	// (0x000444f1) bg_popup_sub_pane_cp09_ParamLimits

0x6839,	// (0x000444f1) bg_popup_sub_pane_cp09

0x684a,	// (0x00044502) find_pane_cp01_ParamLimits

0x684a,	// (0x00044502) find_pane_cp01

0xd3a0,	// (0x0004b058) grid_afind_control_pane_ParamLimits

0xd3a0,	// (0x0004b058) grid_afind_control_pane

0x685d,	// (0x00044515) grid_afind_pane_ParamLimits

0x685d,	// (0x00044515) grid_afind_pane

0x6879,	// (0x00044531) cell_afind_pane_ParamLimits

0x6879,	// (0x00044531) cell_afind_pane

0xa965,	// (0x0004861d) afind_page_pane_g1

0x68c1,	// (0x00044579) afind_page_pane_g2

0x68c9,	// (0x00044581) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x0004d56e) afind_page_pane_g

0x68d1,	// (0x00044589) afind_page_pane_t1

0xd3c6,	// (0x0004b07e) cell_afind_grid_control_pane_ParamLimits

0xd3c6,	// (0x0004b07e) cell_afind_grid_control_pane

0xd239,	// (0x0004aef1) bg_button_pane_cp69_ParamLimits

0xd239,	// (0x0004aef1) bg_button_pane_cp69

0x68df,	// (0x00044597) cell_afind_pane_g1_ParamLimits

0x68df,	// (0x00044597) cell_afind_pane_g1

0x68ec,	// (0x000445a4) cell_afind_pane_t1_ParamLimits

0x68ec,	// (0x000445a4) cell_afind_pane_t1

0xa96f,	// (0x00048627) bg_button_pane_cp72

0xd3d5,	// (0x0004b08d) cell_afind_grid_control_pane_g1

0x44f0,	// (0x000421a8) aid_image_placing_area_ParamLimits

0x44f0,	// (0x000421a8) aid_image_placing_area

0xa733,	// (0x000483eb) field_vitu_entry_pane_g1_ParamLimits

0xa733,	// (0x000483eb) field_vitu_entry_pane_g1

0xa733,	// (0x000483eb) field_vitu_entry_pane_g2_ParamLimits

0xa733,	// (0x000483eb) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0004ce79) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0004ce79) field_vitu_entry_pane_g

0xcfc9,	// (0x0004ac81) cell_vitu_itu_pane_g1_ParamLimits

0xcd83,	// (0x0004aa3b) cell_vitu_itu_pane_t3_ParamLimits

0xcd83,	// (0x0004aa3b) cell_vitu_itu_pane_t3

0xd1e2,	// (0x0004ae9a) mp4_progress_pane_t1_ParamLimits

0xd1fb,	// (0x0004aeb3) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x0004d4b4) mp4_progress_pane_t_ParamLimits

0xd214,	// (0x0004aecc) mup_progress_pane_cp04_ParamLimits

0x67fc,	// (0x000444b4) main_myfav_hc_pane_t5_ParamLimits

0x67fc,	// (0x000444b4) main_myfav_hc_pane_t5

0x1ab0,	// (0x0003f768) aid_zoom_text_primary

0x0c4a,	// (0x0003e902) popup_adpt_find_window_ParamLimits

0xa6da,	// (0x00048392) main_cam_set_pane

0x6281,	// (0x00043f39) cam4_zoom_pane_ParamLimits

0x6281,	// (0x00043f39) cam4_zoom_pane

0x68fe,	// (0x000445b6) main_cam_set_pane_g1_ParamLimits

0x68fe,	// (0x000445b6) main_cam_set_pane_g1

0x690c,	// (0x000445c4) main_cam_set_pane_g2_ParamLimits

0x690c,	// (0x000445c4) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x0004d575) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x0004d575) main_cam_set_pane_g

0x6918,	// (0x000445d0) main_cam_set_pane_t1_ParamLimits

0x6918,	// (0x000445d0) main_cam_set_pane_t1

0x6934,	// (0x000445ec) main_cset_listscroll_pane_ParamLimits

0x6934,	// (0x000445ec) main_cset_listscroll_pane

0x6968,	// (0x00044620) main_cset_slider_pane_ParamLimits

0x6968,	// (0x00044620) main_cset_slider_pane

0xd3e6,	// (0x0004b09e) main_cset_list_pane_ParamLimits

0xd3e6,	// (0x0004b09e) main_cset_list_pane

0xd3f6,	// (0x0004b0ae) scroll_pane_cp028

0x6989,	// (0x00044641) aid_area_touch_slider

0x69a5,	// (0x0004465d) cset_slider_pane

0x69c8,	// (0x00044680) main_cset_slider_pane_g1

0x69dd,	// (0x00044695) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x0004d57a) main_cset_slider_pane_g

0xd42f,	// (0x0004b0e7) main_cset_slider_pane_t1

0x6a99,	// (0x00044751) main_cset_slider_pane_t2

0x6ab3,	// (0x0004476b) main_cset_slider_pane_t3

0x6acd,	// (0x00044785) main_cset_slider_pane_t4

0x6ae7,	// (0x0004479f) main_cset_slider_pane_t5

0x6b01,	// (0x000447b9) main_cset_slider_pane_t6

0x6b16,	// (0x000447ce) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x0004d59f) main_cset_slider_pane_t

0x6c1a,	// (0x000448d2) cset_list_set_pane_ParamLimits

0x6c1a,	// (0x000448d2) cset_list_set_pane

0xd4c9,	// (0x0004b181) aid_position_infowindow_above

0xd4d1,	// (0x0004b189) aid_position_infowindow_below

0x0f2e,	// (0x0003ebe6) cset_list_set_pane_g1_ParamLimits

0x0f2e,	// (0x0003ebe6) cset_list_set_pane_g1

0x0f3a,	// (0x0003ebf2) cset_list_set_pane_g3_ParamLimits

0x0f3a,	// (0x0003ebf2) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x0004d5be) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x0004d5be) cset_list_set_pane_g

0x0f49,	// (0x0003ec01) cset_list_set_pane_t1_ParamLimits

0x0f49,	// (0x0003ec01) cset_list_set_pane_t1

0xa6da,	// (0x00048392) list_highlight_pane_cp021_ParamLimits

0xa6da,	// (0x00048392) list_highlight_pane_cp021

0xb3d8,	// (0x00049090) cset_slider_pane_g1

0xb3ea,	// (0x000490a2) cset_slider_pane_g2

0xb3e1,	// (0x00049099) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x0004d5c3) cset_slider_pane_g

0xdd79,	// (0x0004ba31) aid_area_touch_cam4_zoom

0x6c2b,	// (0x000448e3) cam4_zoom_cont_pane

0x6c33,	// (0x000448eb) cam4_zoom_pane_g1

0x6c3b,	// (0x000448f3) cam4_zoom_pane_g2

0x6c43,	// (0x000448fb) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x0004d5ca) cam4_zoom_pane_g

0x6c4b,	// (0x00044903) cam4_zoom_cont_pane_g1

0x6c54,	// (0x0004490c) cam4_zoom_cont_pane_g2

0x6c5d,	// (0x00044915) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x0004d5d1) cam4_zoom_cont_pane_g

0x60a1,	// (0x00043d59) call4_image_pane_ParamLimits

0x60a1,	// (0x00043d59) call4_image_pane

0x6102,	// (0x00043dba) call4_windows_conf_pane_ParamLimits

0x6149,	// (0x00043e01) popup_call4_audio_in_window_ParamLimits

0x6149,	// (0x00043e01) popup_call4_audio_in_window

0x9ffd,	// (0x00047cb5) bg_popup_call2_act_pane_cp02

0xd245,	// (0x0004aefd) call4_list_conf_pane

0xa965,	// (0x0004861d) call4_image_pane_g1

0xa965,	// (0x0004861d) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0004d055) call4_image_pane_g

0xd4d9,	// (0x0004b191) list_single_graphic_popup_conf4_pane_ParamLimits

0xd4d9,	// (0x0004b191) list_single_graphic_popup_conf4_pane

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp022

0xd4ee,	// (0x0004b1a6) list_single_graphic_popup_conf4_pane_g1

0xb0cf,	// (0x00048d87) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x0004d5d8) list_single_graphic_popup_conf4_pane_g

0xd4f6,	// (0x0004b1ae) list_single_graphic_popup_conf4_pane_t1

0x2a8b,	// (0x00040743) popup_vtel_slider_window_ParamLimits

0x2a8b,	// (0x00040743) popup_vtel_slider_window

0xd227,	// (0x0004aedf) dialer2_ne_pane_t2_ParamLimits

0xd227,	// (0x0004aedf) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x0004d4b9) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x0004d4b9) dialer2_ne_pane_t

0xa6da,	// (0x00048392) bg_popup_sub_pane_cp010_ParamLimits

0xa6da,	// (0x00048392) bg_popup_sub_pane_cp010

0x6c66,	// (0x0004491e) popup_vtel_slider_window_g1_ParamLimits

0x6c66,	// (0x0004491e) popup_vtel_slider_window_g1

0x6c72,	// (0x0004492a) popup_vtel_slider_window_g2_ParamLimits

0x6c72,	// (0x0004492a) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x0004d5dd) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x0004d5dd) popup_vtel_slider_window_g

0x6cba,	// (0x00044972) vtel_slider_pane_ParamLimits

0x6cba,	// (0x00044972) vtel_slider_pane

0x6cc9,	// (0x00044981) vtel_slider_pane_g1_ParamLimits

0x6cc9,	// (0x00044981) vtel_slider_pane_g1

0x6cd6,	// (0x0004498e) vtel_slider_pane_g2_ParamLimits

0x6cd6,	// (0x0004498e) vtel_slider_pane_g2

0x6ce3,	// (0x0004499b) vtel_slider_pane_g3_ParamLimits

0x6ce3,	// (0x0004499b) vtel_slider_pane_g3

0x6cc9,	// (0x00044981) vtel_slider_pane_g4_ParamLimits

0x6cc9,	// (0x00044981) vtel_slider_pane_g4

0x6cf0,	// (0x000449a8) vtel_slider_pane_g5_ParamLimits

0x6cf0,	// (0x000449a8) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x0004d5e6) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x0004d5e6) vtel_slider_pane_g

0xa6da,	// (0x00048392) main_gallery2_pane

0x64d9,	// (0x00044191) aid_size_row_itut2_dropdow_list_ParamLimits

0x64d9,	// (0x00044191) aid_size_row_itut2_dropdow_list

0x6539,	// (0x000441f1) grid_vitu2_function_top_pane_ParamLimits

0x6539,	// (0x000441f1) grid_vitu2_function_top_pane

0x658f,	// (0x00044247) popup_vitu2_dropdown_list_window_ParamLimits

0x658f,	// (0x00044247) popup_vitu2_dropdown_list_window

0x65ad,	// (0x00044265) popup_vitu2_match_list_window

0x6cfd,	// (0x000449b5) cell_vitu2_function_top_pane_ParamLimits

0x6cfd,	// (0x000449b5) cell_vitu2_function_top_pane

0x6d17,	// (0x000449cf) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6d17,	// (0x000449cf) cell_vitu2_function_top_pane_cp01

0x6d33,	// (0x000449eb) cell_vitu2_function_top_wide_pane_ParamLimits

0x6d33,	// (0x000449eb) cell_vitu2_function_top_wide_pane

0xa6da,	// (0x00048392) bg_button_pane_cp012

0x6d51,	// (0x00044a09) cell_vitu2_function_top_pane_g1

0x6d65,	// (0x00044a1d) bg_button_pane_cp013_ParamLimits

0x6d65,	// (0x00044a1d) bg_button_pane_cp013

0x6d81,	// (0x00044a39) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6d81,	// (0x00044a39) cell_vitu2_function_top_wide_pane_g1

0xa68c,	// (0x00048344) bg_popup_sub_pane_cp20

0x6d99,	// (0x00044a51) list_vitu2_match_list_pane

0xd2b8,	// (0x0004af70) bg_popup_sub_pane_cp20_g1

0xd2c0,	// (0x0004af78) bg_popup_sub_pane_cp20_g2

0xab9d,	// (0x00048855) bg_popup_sub_pane_cp20_g3

0xd2c8,	// (0x0004af80) bg_popup_sub_pane_cp20_g4

0xab7d,	// (0x00048835) bg_popup_sub_pane_cp20_g5

0xd50c,	// (0x0004b1c4) bg_popup_sub_pane_cp20_g6

0xd2d8,	// (0x0004af90) bg_popup_sub_pane_cp20_g7

0xd2e0,	// (0x0004af98) bg_popup_sub_pane_cp20_g8

0xd2e8,	// (0x0004afa0) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x0004d5f1) bg_popup_sub_pane_cp20_g

0x6db1,	// (0x00044a69) list_vitu2_match_list_item_pane_ParamLimits

0x6db1,	// (0x00044a69) list_vitu2_match_list_item_pane

0x6dc3,	// (0x00044a7b) list_vitu2_match_list_item_pane_t1

0x9ffd,	// (0x00047cb5) bg_popup_sub_pane_cp21

0xa943,	// (0x000485fb) grid_vitu2_dropdown_list_pane

0x6dd1,	// (0x00044a89) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6dd1,	// (0x00044a89) cell_vitu2_dropdown_list_char_pane

0x6df5,	// (0x00044aad) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6df5,	// (0x00044aad) cell_vitu2_dropdown_list_ctrl_pane

0xd514,	// (0x0004b1cc) cell_vitu2_dropdown_list_char_pane_g1

0xd51d,	// (0x0004b1d5) cell_vitu2_dropdown_list_char_pane_g2

0xd526,	// (0x0004b1de) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x0004d604) cell_vitu2_dropdown_list_char_pane_g

0x6e1f,	// (0x00044ad7) cell_vitu2_dropdown_list_char_pane_t1

0x6e2d,	// (0x00044ae5) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6e2d,	// (0x00044ae5) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6e3d,	// (0x00044af5) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6e3d,	// (0x00044af5) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6e4e,	// (0x00044b06) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6e4e,	// (0x00044b06) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6e5e,	// (0x00044b16) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6e5e,	// (0x00044b16) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa733,	// (0x000483eb) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa733,	// (0x000483eb) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x0004d60b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x0004d60b) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e77,	// (0x00044b2f) aid_size_cell_gallery2_ParamLimits

0x6e77,	// (0x00044b2f) aid_size_cell_gallery2

0x6e91,	// (0x00044b49) grid_gallery2_pane_ParamLimits

0x6e91,	// (0x00044b49) grid_gallery2_pane

0x6ea8,	// (0x00044b60) scroll_pane_cp029_ParamLimits

0x6ea8,	// (0x00044b60) scroll_pane_cp029

0x6eb8,	// (0x00044b70) cell_gallery2_pane_ParamLimits

0x6eb8,	// (0x00044b70) cell_gallery2_pane

0xd52f,	// (0x0004b1e7) cell_gallery2_pane_g2

0x6f0f,	// (0x00044bc7) cell_gallery2_pane_g3

0xd537,	// (0x0004b1ef) cell_gallery2_pane_g4

0xd53f,	// (0x0004b1f7) cell_gallery2_pane_g5

0xa943,	// (0x000485fb) grid_highlight_pane_cp10

0x65ad,	// (0x00044265) popup_vitu2_match_list_window_ParamLimits

0x65c1,	// (0x00044279) popup_vitu2_query_window_ParamLimits

0x65c1,	// (0x00044279) popup_vitu2_query_window

0x9ffd,	// (0x00047cb5) bg_vitu2_candi_button_pane

0xd514,	// (0x0004b1cc) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd51d,	// (0x0004b1d5) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd526,	// (0x0004b1de) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0f5e,	// (0x0003ec16) bg_button_pane_cp015

0x6f17,	// (0x00044bcf) bg_button_pane_cp016

0x6f23,	// (0x00044bdb) bg_button_pane_cp017

0xb989,	// (0x00049641) bg_popup_sub_pane_cp22

0xd547,	// (0x0004b1ff) popup_vitu2_query_window_g1

0x0f99,	// (0x0003ec51) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x0004d616) popup_vitu2_query_window_g

0x0fb1,	// (0x0003ec69) popup_vitu2_query_window_t1_ParamLimits

0x0fb1,	// (0x0003ec69) popup_vitu2_query_window_t1

0x0fe4,	// (0x0003ec9c) popup_vitu2_query_window_t2_ParamLimits

0x0fe4,	// (0x0003ec9c) popup_vitu2_query_window_t2

0x0ff6,	// (0x0003ecae) popup_vitu2_query_window_t3_ParamLimits

0x0ff6,	// (0x0003ecae) popup_vitu2_query_window_t3

0x6f4a,	// (0x00044c02) popup_vitu2_query_window_t4_ParamLimits

0x6f4a,	// (0x00044c02) popup_vitu2_query_window_t4

0x6f5e,	// (0x00044c16) popup_vitu2_query_window_t5_ParamLimits

0x6f5e,	// (0x00044c16) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x0004d61d) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x0004d61d) popup_vitu2_query_window_t

0xd3de,	// (0x0004b096) main_cset_text_pane

0x6989,	// (0x00044641) aid_area_touch_slider_ParamLimits

0x69a5,	// (0x0004465d) cset_slider_pane_ParamLimits

0x69c8,	// (0x00044680) main_cset_slider_pane_g1_ParamLimits

0x69dd,	// (0x00044695) main_cset_slider_pane_g2_ParamLimits

0xd3ff,	// (0x0004b0b7) main_cset_slider_pane_g3_ParamLimits

0xd3ff,	// (0x0004b0b7) main_cset_slider_pane_g3

0x69f2,	// (0x000446aa) main_cset_slider_pane_g4_ParamLimits

0x69f2,	// (0x000446aa) main_cset_slider_pane_g4

0x6a01,	// (0x000446b9) main_cset_slider_pane_g5_ParamLimits

0x6a01,	// (0x000446b9) main_cset_slider_pane_g5

0x6a0d,	// (0x000446c5) main_cset_slider_pane_g6_ParamLimits

0x6a0d,	// (0x000446c5) main_cset_slider_pane_g6

0xf8c2,	// (0x0004d57a) main_cset_slider_pane_g_ParamLimits

0xd42f,	// (0x0004b0e7) main_cset_slider_pane_t1_ParamLimits

0x6a99,	// (0x00044751) main_cset_slider_pane_t2_ParamLimits

0x6ab3,	// (0x0004476b) main_cset_slider_pane_t3_ParamLimits

0x6acd,	// (0x00044785) main_cset_slider_pane_t4_ParamLimits

0x6ae7,	// (0x0004479f) main_cset_slider_pane_t5_ParamLimits

0x6b01,	// (0x000447b9) main_cset_slider_pane_t6_ParamLimits

0x6b16,	// (0x000447ce) main_cset_slider_pane_t7_ParamLimits

0x6b40,	// (0x000447f8) main_cset_slider_pane_t8_ParamLimits

0x6b40,	// (0x000447f8) main_cset_slider_pane_t8

0x6b68,	// (0x00044820) main_cset_slider_pane_t9_ParamLimits

0x6b68,	// (0x00044820) main_cset_slider_pane_t9

0x6b90,	// (0x00044848) main_cset_slider_pane_t10_ParamLimits

0x6b90,	// (0x00044848) main_cset_slider_pane_t10

0x6bb8,	// (0x00044870) main_cset_slider_pane_t11_ParamLimits

0x6bb8,	// (0x00044870) main_cset_slider_pane_t11

0x6be0,	// (0x00044898) main_cset_slider_pane_t12_ParamLimits

0x6be0,	// (0x00044898) main_cset_slider_pane_t12

0x6bfd,	// (0x000448b5) main_cset_slider_pane_t13_ParamLimits

0x6bfd,	// (0x000448b5) main_cset_slider_pane_t13

0xf8e7,	// (0x0004d59f) main_cset_slider_pane_t_ParamLimits

0x9ffd,	// (0x00047cb5) bg_popup_sub_pane_cp011

0xd553,	// (0x0004b20b) main_cset_text_pane_g1

0xd55b,	// (0x0004b213) main_cset_text_pane_t1

0xd569,	// (0x0004b221) main_cset_text_pane_t2

0xd577,	// (0x0004b22f) main_cset_text_pane_t3

0xd585,	// (0x0004b23d) main_cset_text_pane_t4

0xd593,	// (0x0004b24b) main_cset_text_pane_t5

0xd5a1,	// (0x0004b259) main_cset_text_pane_t6

0xd5af,	// (0x0004b267) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x0004d62c) main_cset_text_pane_t

0x9ffd,	// (0x00047cb5) main_cam4_burst_pane

0x9ffd,	// (0x00047cb5) main_cam5_pane

0xd3b4,	// (0x0004b06c) bg_button_pane_cp019

0xd3bd,	// (0x0004b075) bg_button_pane_cp020

0xd40b,	// (0x0004b0c3) main_cset_slider_pane_g7_ParamLimits

0xd40b,	// (0x0004b0c3) main_cset_slider_pane_g7

0xd417,	// (0x0004b0cf) main_cset_slider_pane_g8_ParamLimits

0xd417,	// (0x0004b0cf) main_cset_slider_pane_g8

0x6a21,	// (0x000446d9) main_cset_slider_pane_g9_ParamLimits

0x6a21,	// (0x000446d9) main_cset_slider_pane_g9

0x6a2d,	// (0x000446e5) main_cset_slider_pane_g10_ParamLimits

0x6a2d,	// (0x000446e5) main_cset_slider_pane_g10

0x6a39,	// (0x000446f1) main_cset_slider_pane_g11_ParamLimits

0x6a39,	// (0x000446f1) main_cset_slider_pane_g11

0x6a45,	// (0x000446fd) main_cset_slider_pane_g12_ParamLimits

0x6a45,	// (0x000446fd) main_cset_slider_pane_g12

0x6a51,	// (0x00044709) main_cset_slider_pane_g13_ParamLimits

0x6a51,	// (0x00044709) main_cset_slider_pane_g13

0x6a5d,	// (0x00044715) main_cset_slider_pane_g14_ParamLimits

0x6a5d,	// (0x00044715) main_cset_slider_pane_g14

0x6a69,	// (0x00044721) main_cset_slider_pane_g15_ParamLimits

0x6a69,	// (0x00044721) main_cset_slider_pane_g15

0xd457,	// (0x0004b10f) main_cset_slider_pane_t14_ParamLimits

0xd457,	// (0x0004b10f) main_cset_slider_pane_t14

0xd490,	// (0x0004b148) main_cset_slider_pane_t15_ParamLimits

0xd490,	// (0x0004b148) main_cset_slider_pane_t15

0x6f72,	// (0x00044c2a) aid_cam4_burst_size_cell_ParamLimits

0x6f72,	// (0x00044c2a) aid_cam4_burst_size_cell

0x6f8e,	// (0x00044c46) grid_cam4_burst_pane_ParamLimits

0x6f8e,	// (0x00044c46) grid_cam4_burst_pane

0x6fc0,	// (0x00044c78) linegrid_cam4_burst_pane_ParamLimits

0x6fc0,	// (0x00044c78) linegrid_cam4_burst_pane

0x6fde,	// (0x00044c96) scroll_pane_cp30_ParamLimits

0x6fde,	// (0x00044c96) scroll_pane_cp30

0x6fea,	// (0x00044ca2) cell_cam4_burst_pane_ParamLimits

0x6fea,	// (0x00044ca2) cell_cam4_burst_pane

0xd5bd,	// (0x0004b275) linegrid_cam4_burst_pane_g1_ParamLimits

0xd5bd,	// (0x0004b275) linegrid_cam4_burst_pane_g1

0x702a,	// (0x00044ce2) linegrid_cam4_burst_pane_g2_ParamLimits

0x702a,	// (0x00044ce2) linegrid_cam4_burst_pane_g2

0xd5ca,	// (0x0004b282) linegrid_cam4_burst_pane_g3_ParamLimits

0xd5ca,	// (0x0004b282) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x0004d63b) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x0004d63b) linegrid_cam4_burst_pane_g

0x703b,	// (0x00044cf3) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x703b,	// (0x00044cf3) linegrid_cam4_burst_pane_g3_copy1

0xd5d7,	// (0x0004b28f) linegrid_cam4_burst_pane_g4_ParamLimits

0xd5d7,	// (0x0004b28f) linegrid_cam4_burst_pane_g4

0x7055,	// (0x00044d0d) linegrid_cam4_burst_pane_g5_ParamLimits

0x7055,	// (0x00044d0d) linegrid_cam4_burst_pane_g5

0x7066,	// (0x00044d1e) linegrid_cam4_burst_pane_g6_ParamLimits

0x7066,	// (0x00044d1e) linegrid_cam4_burst_pane_g6

0xd5e4,	// (0x0004b29c) linegrid_cam4_burst_pane_g7_ParamLimits

0xd5e4,	// (0x0004b29c) linegrid_cam4_burst_pane_g7

0x707d,	// (0x00044d35) cell_cam4_burst_pane_g1

0xd5fd,	// (0x0004b2b5) main_cam5_pane_t1_ParamLimits

0xd5fd,	// (0x0004b2b5) main_cam5_pane_t1

0xd60f,	// (0x0004b2c7) main_cam5_pane_t2_ParamLimits

0xd60f,	// (0x0004b2c7) main_cam5_pane_t2

0xd621,	// (0x0004b2d9) main_cam5_pane_t3_ParamLimits

0xd621,	// (0x0004b2d9) main_cam5_pane_t3

0xd633,	// (0x0004b2eb) main_cam5_pane_t4_ParamLimits

0xd633,	// (0x0004b2eb) main_cam5_pane_t4

0xd64b,	// (0x0004b303) main_cam5_pane_t5_ParamLimits

0xd64b,	// (0x0004b303) main_cam5_pane_t5

0xd65f,	// (0x0004b317) main_cam5_pane_t6_ParamLimits

0xd65f,	// (0x0004b317) main_cam5_pane_t6

0xd673,	// (0x0004b32b) main_cam5_pane_t7_ParamLimits

0xd673,	// (0x0004b32b) main_cam5_pane_t7

0xd685,	// (0x0004b33d) main_cam5_pane_t8_ParamLimits

0xd685,	// (0x0004b33d) main_cam5_pane_t8

0xd6a3,	// (0x0004b35b) main_cam5_pane_t9_ParamLimits

0xd6a3,	// (0x0004b35b) main_cam5_pane_t9

0xd6b5,	// (0x0004b36d) main_cam5_pane_t10_ParamLimits

0xd6b5,	// (0x0004b36d) main_cam5_pane_t10

0xd6c7,	// (0x0004b37f) main_cam5_pane_t11_ParamLimits

0xd6c7,	// (0x0004b37f) main_cam5_pane_t11

0xd6db,	// (0x0004b393) main_cam5_pane_t12_ParamLimits

0xd6db,	// (0x0004b393) main_cam5_pane_t12

0xd6f2,	// (0x0004b3aa) main_cam5_pane_t13_ParamLimits

0xd6f2,	// (0x0004b3aa) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x0004d647) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x0004d647) main_cam5_pane_t

0x1c40,	// (0x0003f8f8) popup_scut_keymap_window_ParamLimits

0x1c40,	// (0x0003f8f8) popup_scut_keymap_window

0x7090,	// (0x00044d48) aid_size_cell_brow_shortcut

0xa943,	// (0x000485fb) bg_popup_window_pane_cp010

0x709c,	// (0x00044d54) grid_scut_pane

0x70a8,	// (0x00044d60) cell_scut_pane_ParamLimits

0x70a8,	// (0x00044d60) cell_scut_pane

0x70c3,	// (0x00044d7b) cell_scut_pane_g1

0xd715,	// (0x0004b3cd) cell_scut_pane_t1

0xd724,	// (0x0004b3dc) cell_scut_pane_t2

0x70cc,	// (0x00044d84) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x0004d662) cell_scut_pane_t

0x51e0,	// (0x00042e98) main_mup3_pane_g8_ParamLimits

0x51e0,	// (0x00042e98) main_mup3_pane_g8

0x64e7,	// (0x0004419f) area_vitu2_query_pane_ParamLimits

0x64e7,	// (0x0004419f) area_vitu2_query_pane

0x0f73,	// (0x0003ec2b) input_focus_pane_cp08

0xd733,	// (0x0004b3eb) area_vitu2_query_pane_g1

0x1074,	// (0x0003ed2c) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x0004d669) area_vitu2_query_pane_g

0x70da,	// (0x00044d92) area_vitu2_query_pane_t1_ParamLimits

0x70da,	// (0x00044d92) area_vitu2_query_pane_t1

0x70ee,	// (0x00044da6) area_vitu2_query_pane_t2_ParamLimits

0x70ee,	// (0x00044da6) area_vitu2_query_pane_t2

0x1085,	// (0x0003ed3d) area_vitu2_query_pane_t3_ParamLimits

0x1085,	// (0x0003ed3d) area_vitu2_query_pane_t3

0x10ad,	// (0x0003ed65) area_vitu2_query_pane_t4_ParamLimits

0x10ad,	// (0x0003ed65) area_vitu2_query_pane_t4

0x10d5,	// (0x0003ed8d) area_vitu2_query_pane_t5_ParamLimits

0x10d5,	// (0x0003ed8d) area_vitu2_query_pane_t5

0x10fd,	// (0x0003edb5) area_vitu2_query_pane_t6_ParamLimits

0x10fd,	// (0x0003edb5) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x0004d66e) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x0004d66e) area_vitu2_query_pane_t

0x6f17,	// (0x00044bcf) bg_button_pane_cp018

0x7102,	// (0x00044dba) bg_button_pane_cp021

0x1149,	// (0x0003ee01) bg_button_pane_cp022

0x116c,	// (0x0003ee24) input_focus_pane_cp09

0x3dbf,	// (0x00041a77) aid_size_touch_mv_arrow_left

0x3dea,	// (0x00041aa2) aid_size_touch_mv_arrow_right

0x6a81,	// (0x00044739) main_cset_slider_pane_g16_ParamLimits

0x6a81,	// (0x00044739) main_cset_slider_pane_g16

0x6a8d,	// (0x00044745) main_cset_slider_pane_g17_ParamLimits

0x6a8d,	// (0x00044745) main_cset_slider_pane_g17

0x707d,	// (0x00044d35) cell_cam4_burst_pane_g1_ParamLimits

0x9ffd,	// (0x00047cb5) compa_mode_pane

0x6c7e,	// (0x00044936) popup_vtel_slider_window_g3_ParamLimits

0x6c7e,	// (0x00044936) popup_vtel_slider_window_g3

0x6c92,	// (0x0004494a) popup_vtel_slider_window_g4_ParamLimits

0x6c92,	// (0x0004494a) popup_vtel_slider_window_g4

0x6ca6,	// (0x0004495e) popup_vtel_slider_window_t1_ParamLimits

0x6ca6,	// (0x0004495e) popup_vtel_slider_window_t1

0x9ffd,	// (0x00047cb5) main_cl_pane

0x4a58,	// (0x00042710) popup_imed_adjust2_window_ParamLimits

0xb989,	// (0x00049641) bg_tb_trans_pane_cp05_ParamLimits

0xcef4,	// (0x0004abac) popup_imed_adjust2_window_g1_ParamLimits

0xcf03,	// (0x0004abbb) popup_imed_adjust2_window_g2_ParamLimits

0xcf03,	// (0x0004abbb) popup_imed_adjust2_window_g2

0xcf0f,	// (0x0004abc7) popup_imed_adjust2_window_g3_ParamLimits

0xcf0f,	// (0x0004abc7) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x0004d3e4) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x0004d3e4) popup_imed_adjust2_window_g

0xcf1b,	// (0x0004abd3) popup_imed_adjust2_window_t1_ParamLimits

0xcf33,	// (0x0004abeb) slider_imed_adjust_pane_ParamLimits

0xcf47,	// (0x0004abff) slider_imed_adjust_pane_g1_ParamLimits

0xcf57,	// (0x0004ac0f) slider_imed_adjust_pane_g2_ParamLimits

0xcf67,	// (0x0004ac1f) slider_imed_adjust_pane_g3_ParamLimits

0xcf78,	// (0x0004ac30) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x0004d3eb) slider_imed_adjust_pane_g_ParamLimits

0x622a,	// (0x00043ee2) aid_touch_area_cam4_ParamLimits

0x622a,	// (0x00043ee2) aid_touch_area_cam4

0x623a,	// (0x00043ef2) battery_pane_cp01

0x62c1,	// (0x00043f79) main_camera4_pane_g6_ParamLimits

0x62c1,	// (0x00043f79) main_camera4_pane_g6

0x62df,	// (0x00043f97) main_camera4_pane_t2_ParamLimits

0x62df,	// (0x00043f97) main_camera4_pane_t2

0x0001,

0xf835,	// (0x0004d4ed) main_camera4_pane_t_ParamLimits

0xf835,	// (0x0004d4ed) main_camera4_pane_t

0x6362,	// (0x0004401a) aid_touch_area_vid4_ParamLimits

0x6362,	// (0x0004401a) aid_touch_area_vid4

0x63a2,	// (0x0004405a) main_video4_pane_g5_ParamLimits

0x63a2,	// (0x0004405a) main_video4_pane_g5

0x63c8,	// (0x00044080) vid4_progress_pane_ParamLimits

0x63c8,	// (0x00044080) vid4_progress_pane

0xd423,	// (0x0004b0db) main_cset_slider_pane_g18_ParamLimits

0xd423,	// (0x0004b0db) main_cset_slider_pane_g18

0xd5f1,	// (0x0004b2a9) cell_cam4_burst_pane_g2_ParamLimits

0xd5f1,	// (0x0004b2a9) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x0004d642) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x0004d642) cell_cam4_burst_pane_g

0x710e,	// (0x00044dc6) bg_cl_pane_ParamLimits

0x710e,	// (0x00044dc6) bg_cl_pane

0x711a,	// (0x00044dd2) cl_header_pane_ParamLimits

0x711a,	// (0x00044dd2) cl_header_pane

0x7126,	// (0x00044dde) cl_listscroll_pane_ParamLimits

0x7126,	// (0x00044dde) cl_listscroll_pane

0xd73f,	// (0x0004b3f7) bg_cl_pane_g1

0xd747,	// (0x0004b3ff) bg_cl_pane_g2

0xd74f,	// (0x0004b407) bg_cl_pane_g3

0xd757,	// (0x0004b40f) bg_cl_pane_g4

0xd75f,	// (0x0004b417) bg_cl_pane_g5

0xd767,	// (0x0004b41f) bg_cl_pane_g6

0xd76f,	// (0x0004b427) bg_cl_pane_g7

0xd777,	// (0x0004b42f) bg_cl_pane_g8

0xd77f,	// (0x0004b437) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x0004d67d) bg_cl_pane_g

0x7132,	// (0x00044dea) aid_height_cl_leading_ParamLimits

0x7132,	// (0x00044dea) aid_height_cl_leading

0x713e,	// (0x00044df6) aid_height_cl_text_ParamLimits

0x713e,	// (0x00044df6) aid_height_cl_text

0xa68c,	// (0x00048344) bg_cl_header_pane_ParamLimits

0xa68c,	// (0x00048344) bg_cl_header_pane

0x7156,	// (0x00044e0e) cl_header_pane_g1_ParamLimits

0x7156,	// (0x00044e0e) cl_header_pane_g1

0x7163,	// (0x00044e1b) cl_header_pane_t1_ParamLimits

0x7163,	// (0x00044e1b) cl_header_pane_t1

0xd787,	// (0x0004b43f) cl_list_pane

0xd3f6,	// (0x0004b0ae) hc_scroll_pane_cp01

0xab7d,	// (0x00048835) bg_cl_header_pane_g1

0xd2b8,	// (0x0004af70) bg_cl_header_pane_g2

0xab9d,	// (0x00048855) bg_cl_header_pane_g3

0xd2c8,	// (0x0004af80) bg_cl_header_pane_g4

0xd2c0,	// (0x0004af78) bg_cl_header_pane_g5

0xd50c,	// (0x0004b1c4) bg_cl_header_pane_g6

0xd2e0,	// (0x0004af98) bg_cl_header_pane_g7

0xd2e8,	// (0x0004afa0) bg_cl_header_pane_g8

0xd2d8,	// (0x0004af90) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x0004d690) bg_cl_header_pane_g

0x7175,	// (0x00044e2d) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7175,	// (0x00044e2d) hc_cl_list_double_graphic_heading_pane

0x7185,	// (0x00044e3d) hc_cl_list_single_graphic_pane_ParamLimits

0x7185,	// (0x00044e3d) hc_cl_list_single_graphic_pane

0x7197,	// (0x00044e4f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7197,	// (0x00044e4f) hc_cl_list_single_graphic_pane_g1

0x71a3,	// (0x00044e5b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x71a3,	// (0x00044e5b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x0004d6a3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x0004d6a3) hc_cl_list_single_graphic_pane_g

0x71b7,	// (0x00044e6f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x71b7,	// (0x00044e6f) hc_cl_list_single_graphic_pane_t1

0x7197,	// (0x00044e4f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7197,	// (0x00044e4f) hc_cl_list_double_graphic_heading_pane_g1

0x71cc,	// (0x00044e84) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x71cc,	// (0x00044e84) hc_cl_list_double_graphic_heading_pane_g2

0x71e0,	// (0x00044e98) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x71e0,	// (0x00044e98) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0004d6a8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0004d6a8) hc_cl_list_double_graphic_heading_pane_g

0x71f4,	// (0x00044eac) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x71f4,	// (0x00044eac) hc_cl_list_double_graphic_heading_pane_t1

0x7209,	// (0x00044ec1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7209,	// (0x00044ec1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x0004d6af) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x0004d6af) hc_cl_list_double_graphic_heading_pane_t

0x7226,	// (0x00044ede) vid4_progress_pane_g1

0x7236,	// (0x00044eee) vid4_progress_pane_g2

0x7246,	// (0x00044efe) vid4_progress_pane_g3

0x7258,	// (0x00044f10) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x0004d6b4) vid4_progress_pane_g

0x7276,	// (0x00044f2e) vid4_progress_pane_t1

0x7290,	// (0x00044f48) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x0004d6bf) vid4_progress_pane_t

0x72be,	// (0x00044f76) wait_bar_pane_cp07

0xc82c,	// (0x0004a4e4) blid_firmament_pane_ParamLimits

0xc86f,	// (0x0004a527) popup_blid_sat_info2_window_g1

0xc893,	// (0x0004a54b) popup_blid_sat_info2_window_t3

0xc8a1,	// (0x0004a559) popup_blid_sat_info2_window_t4

0xc8af,	// (0x0004a567) popup_blid_sat_info2_window_t5

0xc8bd,	// (0x0004a575) popup_blid_sat_info2_window_t6

0xc8cd,	// (0x0004a585) popup_blid_sat_info2_window_t7

0xc8db,	// (0x0004a593) popup_blid_sat_info2_window_t8

0xc8e9,	// (0x0004a5a1) popup_blid_sat_info2_window_t9

0xc8f7,	// (0x0004a5af) popup_blid_sat_info2_window_t10

0xc9be,	// (0x0004a676) aid_firma_cardinal_ParamLimits

0xc9d2,	// (0x0004a68a) blid_firmament_pane_t1_ParamLimits

0xc9e9,	// (0x0004a6a1) blid_firmament_pane_t2_ParamLimits

0xca00,	// (0x0004a6b8) blid_firmament_pane_t3_ParamLimits

0xca17,	// (0x0004a6cf) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x0004d2dd) blid_firmament_pane_t_ParamLimits

0xca2e,	// (0x0004a6e6) blid_sat_info_pane_ParamLimits

0xa6da,	// (0x00048392) main_cam_set_pane_ParamLimits

0x58a8,	// (0x00043560) aid_size_cell_colour_35_ParamLimits

0x58c2,	// (0x0004357a) aid_size_cell_colour_112_ParamLimits

0x58d9,	// (0x00043591) aid_size_cell_effect_ParamLimits

0xa6da,	// (0x00048392) bg_tb_trans_pane_cp02_ParamLimits

0xb34c,	// (0x00049004) heading_imed_pane_ParamLimits

0x58f3,	// (0x000435ab) listscroll_imed_pane_ParamLimits

0xbd17,	// (0x000499cf) popup_call2_audio_first_window_g5_ParamLimits

0xbd17,	// (0x000499cf) popup_call2_audio_first_window_g5

0x5f18,	// (0x00043bd0) aid_size_touch_image3_arrow_left_ParamLimits

0x5f18,	// (0x00043bd0) aid_size_touch_image3_arrow_left

0x5f2e,	// (0x00043be6) aid_size_touch_image3_arrow_right_ParamLimits

0x5f2e,	// (0x00043be6) aid_size_touch_image3_arrow_right

0x72a9,	// (0x00044f61) vid4_progress_pane_t3

0x5a6e,	// (0x00043726) main_hwr_training_symbol_option_pane_ParamLimits

0x5a6e,	// (0x00043726) main_hwr_training_symbol_option_pane

0xd11c,	// (0x0004add4) popup_hwr_training_preview_window_ParamLimits

0xd11c,	// (0x0004add4) popup_hwr_training_preview_window

0x5acf,	// (0x00043787) hwr_training_navi_pane_g5_ParamLimits

0x5acf,	// (0x00043787) hwr_training_navi_pane_g5

0xd2a6,	// (0x0004af5e) popup_char_count_window

0xa68c,	// (0x00048344) bg_popup_sub_pane_cp20_ParamLimits

0x6d99,	// (0x00044a51) list_vitu2_match_list_pane_ParamLimits

0x6da5,	// (0x00044a5d) vitu2_page_scroll_pane_ParamLimits

0x6da5,	// (0x00044a5d) vitu2_page_scroll_pane

0xd790,	// (0x0004b448) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd790,	// (0x0004b448) list_single_hwr_training_symbol_option_pane

0xd7a3,	// (0x0004b45b) list_single_hwr_training_symbol_option_pane_g1

0xd7ab,	// (0x0004b463) list_single_hwr_training_symbol_option_pane_t1

0xd7b9,	// (0x0004b471) bg_button_pane_cp023

0xd7c2,	// (0x0004b47a) bg_button_pane_cp024

0xd7f5,	// (0x0004b4ad) vitu2_page_scroll_pane_g1

0xd86e,	// (0x0004b526) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x0004d6c6) vitu2_page_scroll_pane_g

0xd876,	// (0x0004b52e) vitu2_page_scroll_pane_t1

0xd841,	// (0x0004b4f9) popup_char_count_window_g1

0xd885,	// (0x0004b53d) popup_char_count_window_g2

0xd84a,	// (0x0004b502) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x0004d6cb) popup_char_count_window_g

0xd88e,	// (0x0004b546) popup_char_count_window_t1

0x9ffd,	// (0x00047cb5) main_vded2_pane

0xcee0,	// (0x0004ab98) aid_size_cell_imed_line

0xceea,	// (0x0004aba2) grid_imed_line_width_pane

0x643c,	// (0x000440f4) vid4_indicators_pane_g4

0xd89c,	// (0x0004b554) cell_imed_line_width_pane_ParamLimits

0xd89c,	// (0x0004b554) cell_imed_line_width_pane

0xd8b2,	// (0x0004b56a) cell_imed_line_width_pane_g1

0xd8bb,	// (0x0004b573) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x0004d6d2) cell_imed_line_width_pane_g

0x72d1,	// (0x00044f89) main_vded2_pane_g1_ParamLimits

0x72d1,	// (0x00044f89) main_vded2_pane_g1

0x72e0,	// (0x00044f98) main_vded2_pane_g2_ParamLimits

0x72e0,	// (0x00044f98) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x0004d6d7) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x0004d6d7) main_vded2_pane_g

0x72ee,	// (0x00044fa6) vded2_slider_pane_ParamLimits

0x72ee,	// (0x00044fa6) vded2_slider_pane

0x72fb,	// (0x00044fb3) aid_size_touch_vded2_end

0x7305,	// (0x00044fbd) aid_size_touch_vded2_playhead

0xd8c3,	// (0x0004b57b) aid_size_touch_vded2_start

0xd8cb,	// (0x0004b583) vded2_slider_bg_pane

0xd8d4,	// (0x0004b58c) vded2_slider_pane_g1

0xd8dd,	// (0x0004b595) vded2_slider_pane_g2

0x730d,	// (0x00044fc5) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x0004d6dc) vded2_slider_pane_g

0xd853,	// (0x0004b50b) vded2_slider_bg_pane_g1

0xd85c,	// (0x0004b514) vded2_slider_bg_pane_g2

0xd865,	// (0x0004b51d) vded2_slider_bg_pane_g3

0x0002,

0xf6f0,	// (0x0004d3a8) vded2_slider_bg_pane_g

0x4253,	// (0x00041f0b) aid_postcard_touch_down_pane_ParamLimits

0x4253,	// (0x00041f0b) aid_postcard_touch_down_pane

0x4263,	// (0x00041f1b) aid_postcard_touch_up_pane_ParamLimits

0x4263,	// (0x00041f1b) aid_postcard_touch_up_pane

0x9ffd,	// (0x00047cb5) main_blid2_pane

0x49d7,	// (0x0004268f) popup_blid2_search_window

0x9ffd,	// (0x00047cb5) blid2_gps_pane

0x9ffd,	// (0x00047cb5) blid2_navig_pane

0x9ffd,	// (0x00047cb5) blid2_search_pane

0x9ffd,	// (0x00047cb5) blid2_tripm_pane

0x7316,	// (0x00044fce) blid2_search_pane_g1_ParamLimits

0x7316,	// (0x00044fce) blid2_search_pane_g1

0x7322,	// (0x00044fda) blid2_search_pane_t1_ParamLimits

0x7322,	// (0x00044fda) blid2_search_pane_t1

0x7334,	// (0x00044fec) aid_size_cell_blid2_gps_ParamLimits

0x7334,	// (0x00044fec) aid_size_cell_blid2_gps

0x7344,	// (0x00044ffc) blid2_gps_pane_g1_ParamLimits

0x7344,	// (0x00044ffc) blid2_gps_pane_g1

0x7350,	// (0x00045008) grid_blid2_satellite_pane_ParamLimits

0x7350,	// (0x00045008) grid_blid2_satellite_pane

0x735e,	// (0x00045016) blid2_navig_pane_g1_ParamLimits

0x735e,	// (0x00045016) blid2_navig_pane_g1

0x736a,	// (0x00045022) blid2_navig_pane_t1_ParamLimits

0x736a,	// (0x00045022) blid2_navig_pane_t1

0x737c,	// (0x00045034) blid2_navig_pane_t2_ParamLimits

0x737c,	// (0x00045034) blid2_navig_pane_t2

0x0001,

0xfa2b,	// (0x0004d6e3) blid2_navig_pane_t_ParamLimits

0xfa2b,	// (0x0004d6e3) blid2_navig_pane_t

0x738e,	// (0x00045046) blid2_navig_ring_pane_ParamLimits

0x738e,	// (0x00045046) blid2_navig_ring_pane

0x739e,	// (0x00045056) blid2_speed_pane_ParamLimits

0x739e,	// (0x00045056) blid2_speed_pane

0x73aa,	// (0x00045062) blid2_tripm_pane_g1_ParamLimits

0x73aa,	// (0x00045062) blid2_tripm_pane_g1

0x73ba,	// (0x00045072) blid2_tripm_pane_g2_ParamLimits

0x73ba,	// (0x00045072) blid2_tripm_pane_g2

0x73c6,	// (0x0004507e) blid2_tripm_pane_g3_ParamLimits

0x73c6,	// (0x0004507e) blid2_tripm_pane_g3

0x73d2,	// (0x0004508a) blid2_tripm_pane_g4_ParamLimits

0x73d2,	// (0x0004508a) blid2_tripm_pane_g4

0x73de,	// (0x00045096) blid2_tripm_pane_g5_ParamLimits

0x73de,	// (0x00045096) blid2_tripm_pane_g5

0x0005,

0xfa30,	// (0x0004d6e8) blid2_tripm_pane_g_ParamLimits

0xfa30,	// (0x0004d6e8) blid2_tripm_pane_g

0x73fa,	// (0x000450b2) blid2_tripm_pane_t1_ParamLimits

0x73fa,	// (0x000450b2) blid2_tripm_pane_t1

0x740c,	// (0x000450c4) blid2_tripm_pane_t2_ParamLimits

0x740c,	// (0x000450c4) blid2_tripm_pane_t2

0x741e,	// (0x000450d6) blid2_tripm_pane_t3_ParamLimits

0x741e,	// (0x000450d6) blid2_tripm_pane_t3

0x0003,

0xfa3d,	// (0x0004d6f5) blid2_tripm_pane_t_ParamLimits

0xfa3d,	// (0x0004d6f5) blid2_tripm_pane_t

0x7450,	// (0x00045108) cell_blid2_satellite_pane_ParamLimits

0x7450,	// (0x00045108) cell_blid2_satellite_pane

0x746e,	// (0x00045126) cell_blid2_satellite_pane_g1

0xd8e5,	// (0x0004b59d) cell_blid2_satellite_pane_t1

0xa965,	// (0x0004861d) blid2_speed_pane_g1

0xd8f3,	// (0x0004b5ab) blid2_speed_pane_t1

0xd901,	// (0x0004b5b9) blid2_speed_pane_t2

0x0001,

0xfa46,	// (0x0004d6fe) blid2_speed_pane_t

0xa965,	// (0x0004861d) blid2_navig_ring_pane_g1

0x7477,	// (0x0004512f) blid2_navig_ring_pane_g2

0x747f,	// (0x00045137) blid2_navig_ring_pane_g3

0x7487,	// (0x0004513f) blid2_navig_ring_pane_g4

0x748f,	// (0x00045147) blid2_navig_ring_pane_g5

0x0004,

0xfa4b,	// (0x0004d703) blid2_navig_ring_pane_g

0x9ffd,	// (0x00047cb5) bg_popup_window_pane_cp011

0xd90f,	// (0x0004b5c7) popup_blid2_search_window_g1

0xd917,	// (0x0004b5cf) popup_blid2_search_window_t1

0xd925,	// (0x0004b5dd) popup_blid2_search_window_t2

0x0001,

0xfa56,	// (0x0004d70e) popup_blid2_search_window_t

0xaa8c,	// (0x00048744) main_browser_pane_g1

0xa7a5,	// (0x0004845d) main_browser_pane_ParamLimits

0xa6da,	// (0x00048392) bg_button_pane_cp011_ParamLimits

0x66a2,	// (0x0004435a) cell_vitu2_function_pane_g1_ParamLimits

0xb989,	// (0x00049641) bg_popup_sub_pane_cp22_ParamLimits

0x0f73,	// (0x0003ec2b) input_focus_pane_cp08_ParamLimits

0x6f2f,	// (0x00044be7) popup_vitu2_query_button_pane_ParamLimits

0x6f2f,	// (0x00044be7) popup_vitu2_query_button_pane

0x0f8f,	// (0x0003ec47) popup_vitu2_query_input_button_pane

0xd547,	// (0x0004b1ff) popup_vitu2_query_window_g1_ParamLimits

0x0f99,	// (0x0003ec51) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x0004d616) popup_vitu2_query_window_g_ParamLimits

0x9ffd,	// (0x00047cb5) bg_button_pane_cp026

0x7497,	// (0x0004514f) popup_vitu2_query_input_button_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp025

0xd933,	// (0x0004b5eb) popup_vitu2_query_button_pane_t1

0x4eae,	// (0x00042b66) main_mp3_pane_t6

0x4ebe,	// (0x00042b76) popup_slider_window_cp01

0x6317,	// (0x00043fcf) cam4_battery_pane

0x63f5,	// (0x000440ad) cam4_battery_pane_cp02

0x721e,	// (0x00044ed6) cam4_battery_pane_cp01

0x721e,	// (0x00044ed6) cam4_battery_pane_cp03

0xa965,	// (0x0004861d) cam4_battery_pane_g1

0xd7fd,	// (0x0004b4b5) cam4_battery_pane_g2

0x0001,

0xfa5b,	// (0x0004d713) cam4_battery_pane_g

0xc905,	// (0x0004a5bd) popup_blid_sat_info2_window_t11

0x3dbf,	// (0x00041a77) aid_size_touch_mv_arrow_left_ParamLimits

0x3dea,	// (0x00041aa2) aid_size_touch_mv_arrow_right_ParamLimits

0xb1fd,	// (0x00048eb5) navi_pane_g1_ParamLimits

0x3e29,	// (0x00041ae1) navi_pane_g2_ParamLimits

0x3e57,	// (0x00041b0f) navi_pane_g3_ParamLimits

0xf339,	// (0x0004cff1) navi_pane_g_ParamLimits

0x3eb1,	// (0x00041b69) navi_pane_mv_t1_ParamLimits

0x58ff,	// (0x000435b7) grid_imed_effect_pane_ParamLimits

0x2953,	// (0x0004060b) aid_placing_vt_slider_lsc

0xa9c8,	// (0x00048680) aid_placing_vt_slider_prt

0xa6da,	// (0x00048392) bg_tb_trans_pane_cp01_ParamLimits

0xcb6d,	// (0x0004a825) popup_image_details_window_g1_ParamLimits

0xcb80,	// (0x0004a838) popup_image_details_window_g2_ParamLimits

0xcb95,	// (0x0004a84d) popup_image_details_window_g3_ParamLimits

0xcb95,	// (0x0004a84d) popup_image_details_window_g3

0xf665,	// (0x0004d31d) popup_image_details_window_g_ParamLimits

0xcba9,	// (0x0004a861) popup_image_details_window_t1_ParamLimits

0xcbbb,	// (0x0004a873) popup_image_details_window_t2_ParamLimits

0xcbd4,	// (0x0004a88c) popup_image_details_window_t3_ParamLimits

0xcbe8,	// (0x0004a8a0) popup_image_details_window_t4_ParamLimits

0xcc03,	// (0x0004a8bb) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x0004d324) popup_image_details_window_t_ParamLimits

0x714a,	// (0x00044e02) cl_header_name_pane_ParamLimits

0x714a,	// (0x00044e02) cl_header_name_pane

0x749f,	// (0x00045157) cl_header_name_pane_t1_ParamLimits

0x749f,	// (0x00045157) cl_header_name_pane_t1

0x74b6,	// (0x0004516e) cl_header_name_pane_t2_ParamLimits

0x74b6,	// (0x0004516e) cl_header_name_pane_t2

0x74e0,	// (0x00045198) cl_header_name_pane_t3_ParamLimits

0x74e0,	// (0x00045198) cl_header_name_pane_t3

0x0002,

0xfa60,	// (0x0004d718) cl_header_name_pane_t_ParamLimits

0xfa60,	// (0x0004d718) cl_header_name_pane_t

0x3e82,	// (0x00041b3a) navi_pane_mv_g2_ParamLimits

0xd28e,	// (0x0004af46) field_vitu2_entry_pane_g1_ParamLimits

0xd29a,	// (0x0004af52) field_vitu2_entry_pane_g2_ParamLimits

0xb997,	// (0x0004964f) field_vitu2_entry_pane_g3_ParamLimits

0xb997,	// (0x0004964f) field_vitu2_entry_pane_g3

0xf867,	// (0x0004d51f) field_vitu2_entry_pane_g_ParamLimits

0x6630,	// (0x000442e8) cell_vitu2_itu_pane_g1_ParamLimits

0x6648,	// (0x00044300) cell_vitu2_itu_pane_g2_ParamLimits

0x6648,	// (0x00044300) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x0004d52b) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x0004d52b) cell_vitu2_itu_pane_g

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp05_ParamLimits

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp05

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp03

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp04

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp10_ParamLimits

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp10

0x115a,	// (0x0003ee12) bg_vkb2_func_pane_cp08

0x6f17,	// (0x00044bcf) bg_vkb2_func_pane_cp06

0x7102,	// (0x00044dba) bg_vkb2_func_pane_cp07

0xd7cb,	// (0x0004b483) bg_vkb2_func_pane_cp11_ParamLimits

0xd7cb,	// (0x0004b483) bg_vkb2_func_pane_cp11

0xd7e0,	// (0x0004b498) bg_vkb2_func_pane_cp12_ParamLimits

0xd7e0,	// (0x0004b498) bg_vkb2_func_pane_cp12

0x9ffd,	// (0x00047cb5) bg_vkb2_func_pane_cp09

0xd2b8,	// (0x0004af70) bg_vkb2_func_pane_g1

0xab9d,	// (0x00048855) bg_vkb2_func_pane_g2

0xd2c0,	// (0x0004af78) bg_vkb2_func_pane_g3

0xd2c8,	// (0x0004af80) bg_vkb2_func_pane_g4

0xd50c,	// (0x0004b1c4) bg_vkb2_func_pane_g5

0xd2e0,	// (0x0004af98) bg_vkb2_func_pane_g6

0xd2e8,	// (0x0004afa0) bg_vkb2_func_pane_g7

0xd2d8,	// (0x0004af90) bg_vkb2_func_pane_g8

0xab7d,	// (0x00048835) bg_vkb2_func_pane_g9

0x0008,

0xfa67,	// (0x0004d71f) bg_vkb2_func_pane_g

0x73ec,	// (0x000450a4) blid2_tripm_pane_g6_ParamLimits

0x73ec,	// (0x000450a4) blid2_tripm_pane_g6

0xd1da,	// (0x0004ae92) mp4_progress_pane_g1

0x7444,	// (0x000450fc) blid2_tripm_values_pane_ParamLimits

0x7444,	// (0x000450fc) blid2_tripm_values_pane

0x7505,	// (0x000451bd) blid2_tripm_values_pane_t1

0x7513,	// (0x000451cb) blid2_tripm_values_pane_t2

0xd941,	// (0x0004b5f9) blid2_tripm_values_pane_t3

0x7521,	// (0x000451d9) blid2_tripm_values_pane_t4

0x752f,	// (0x000451e7) blid2_tripm_values_pane_t5

0x753d,	// (0x000451f5) blid2_tripm_values_pane_t6

0xd94f,	// (0x0004b607) blid2_tripm_values_pane_t7

0x754b,	// (0x00045203) blid2_tripm_values_pane_t8

0x7559,	// (0x00045211) blid2_tripm_values_pane_t9

0x0008,

0xfa7a,	// (0x0004d732) blid2_tripm_values_pane_t

0x2991,	// (0x00040649) call_video_pane_t1_ParamLimits

0x29ae,	// (0x00040666) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0004ce9a) call_video_pane_t_ParamLimits

0x0d2b,	// (0x0003e9e3) msg_header_pane_g1_ParamLimits

0xb41d,	// (0x000490d5) msg_header_pane_g2_ParamLimits

0xb41d,	// (0x000490d5) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0004d094) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0004d094) msg_header_pane_g

0xa7a5,	// (0x0004845d) main_clock2_pane_ParamLimits

0x5678,	// (0x00043330) grid_clock2_toolbar_pane_ParamLimits

0x5678,	// (0x00043330) grid_clock2_toolbar_pane

0x5678,	// (0x00043330) listscroll_clock2_pane_ParamLimits

0x5678,	// (0x00043330) listscroll_clock2_pane

0x5727,	// (0x000433df) main_clock2_pane_t3_ParamLimits

0x5727,	// (0x000433df) main_clock2_pane_t3

0x5739,	// (0x000433f1) main_clock2_pane_t4_ParamLimits

0x5739,	// (0x000433f1) main_clock2_pane_t4

0xd95d,	// (0x0004b615) cell_clock2_toolbar_pane

0xd965,	// (0x0004b61d) cell_clock2_toolbar_pane_cp01

0xd965,	// (0x0004b61d) cell_clock2_toolbar_pane_cp02

0xd96d,	// (0x0004b625) cell_clock2_toolbar_pane_cp03

0xd975,	// (0x0004b62d) list_clock2_pane

0xb163,	// (0x00048e1b) scroll_pane_cp10

0xd97d,	// (0x0004b635) list_single_clock2_pane_ParamLimits

0xd97d,	// (0x0004b635) list_single_clock2_pane

0xa943,	// (0x000485fb) list_highlight_pane_cp08

0xd98a,	// (0x0004b642) list_single_clock2_pane_t1

0xd998,	// (0x0004b650) list_single_clock2_pane_t2

0x0001,

0xfa8d,	// (0x0004d745) list_single_clock2_pane_t

0x9ffd,	// (0x00047cb5) bg_button_pane_cp10

0xd9a6,	// (0x0004b65e) cell_clock2_toolbar_pane_g1

0x41b5,	// (0x00041e6d) aid_main_viewer_pane_g1_ParamLimits

0x41b5,	// (0x00041e6d) aid_main_viewer_pane_g1

0x41c1,	// (0x00041e79) aid_main_viewer_pane_g2_ParamLimits

0x41c1,	// (0x00041e79) aid_main_viewer_pane_g2

0x41cd,	// (0x00041e85) aid_main_viewer_pane_g3_ParamLimits

0x41cd,	// (0x00041e85) aid_main_viewer_pane_g3

0x41de,	// (0x00041e96) aid_main_viewer_pane_g4_ParamLimits

0x41de,	// (0x00041e96) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0004d0a5) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0004d0a5) aid_main_viewer_pane_g

0x49af,	// (0x00042667) main_calc_pane_ParamLimits

0x49bc,	// (0x00042674) main_dialer2_pane_ParamLimits

0x9ffd,	// (0x00047cb5) main_cam6_pane

0x9ffd,	// (0x00047cb5) main_vid6_pane

0x5684,	// (0x0004333c) listscroll_gen_pane_cp06_ParamLimits

0x5684,	// (0x0004333c) listscroll_gen_pane_cp06

0x574b,	// (0x00043403) main_clock2_pane_t5_ParamLimits

0x574b,	// (0x00043403) main_clock2_pane_t5

0x5798,	// (0x00043450) aid_call2_pane_cp10_ParamLimits

0x57aa,	// (0x00043462) aid_call_pane_cp10_ParamLimits

0xb1d2,	// (0x00048e8a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb1d2,	// (0x00048e8a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x57bc,	// (0x00043474) popup_clock_analogue_window_cp10_g3_ParamLimits

0x57bc,	// (0x00043474) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb1d2,	// (0x00048e8a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x0004d3d9) popup_clock_analogue_window_cp10_g_ParamLimits

0x57d2,	// (0x0004348a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5ec5,	// (0x00043b7d) cell_dialer2_keypad_pane_g2_ParamLimits

0x5ec5,	// (0x00043b7d) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x0004d4be) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x0004d4be) cell_dialer2_keypad_pane_g

0x5ee1,	// (0x00043b99) cell_dialer2_keypad_pane_t1

0x6976,	// (0x0004462e) main_cset_text2_pane_ParamLimits

0x6976,	// (0x0004462e) main_cset_text2_pane

0xd733,	// (0x0004b3eb) area_vitu2_query_pane_g1_ParamLimits

0x1074,	// (0x0003ed2c) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x0004d669) area_vitu2_query_pane_g_ParamLimits

0x1125,	// (0x0003eddd) area_vitu2_query_pane_t7_ParamLimits

0x1125,	// (0x0003eddd) area_vitu2_query_pane_t7

0x6f17,	// (0x00044bcf) bg_button_pane_cp018_ParamLimits

0x7102,	// (0x00044dba) bg_button_pane_cp021_ParamLimits

0x1149,	// (0x0003ee01) bg_button_pane_cp022_ParamLimits

0x115a,	// (0x0003ee12) bg_vkb2_func_pane_cp08_ParamLimits

0x6f17,	// (0x00044bcf) bg_vkb2_func_pane_cp06_ParamLimits

0x7102,	// (0x00044dba) bg_vkb2_func_pane_cp07_ParamLimits

0x116c,	// (0x0003ee24) input_focus_pane_cp09_ParamLimits

0x7567,	// (0x0004521f) cam6_autofocus_pane_ParamLimits

0x7567,	// (0x0004521f) cam6_autofocus_pane

0x7589,	// (0x00045241) cam6_image_uncrop_pane_ParamLimits

0x7589,	// (0x00045241) cam6_image_uncrop_pane

0x75bf,	// (0x00045277) cam6_indi_pane_ParamLimits

0x75bf,	// (0x00045277) cam6_indi_pane

0x75d9,	// (0x00045291) cam6_mode_pane_ParamLimits

0x75d9,	// (0x00045291) cam6_mode_pane

0x75ed,	// (0x000452a5) cam6_timer_pane_ParamLimits

0x75ed,	// (0x000452a5) cam6_timer_pane

0x7601,	// (0x000452b9) cam6_zoom_pane_ParamLimits

0x7601,	// (0x000452b9) cam6_zoom_pane

0x761d,	// (0x000452d5) cam6_mode_pane_g1_ParamLimits

0x761d,	// (0x000452d5) cam6_mode_pane_g1

0x7629,	// (0x000452e1) cam6_mode_pane_g2_ParamLimits

0x7629,	// (0x000452e1) cam6_mode_pane_g2

0x7635,	// (0x000452ed) cam6_mode_pane_g3_ParamLimits

0x7635,	// (0x000452ed) cam6_mode_pane_g3

0x7641,	// (0x000452f9) cam6_mode_pane_g4_ParamLimits

0x7641,	// (0x000452f9) cam6_mode_pane_g4

0x0003,

0xfa92,	// (0x0004d74a) cam6_mode_pane_g_ParamLimits

0xfa92,	// (0x0004d74a) cam6_mode_pane_g

0xd306,	// (0x0004afbe) bg_tb_trans_pane_cp08_ParamLimits

0xd306,	// (0x0004afbe) bg_tb_trans_pane_cp08

0xd9ae,	// (0x0004b666) cam6_battery_pane_ParamLimits

0xd9ae,	// (0x0004b666) cam6_battery_pane

0xd9c4,	// (0x0004b67c) cam6_indi_pane_g1_ParamLimits

0xd9c4,	// (0x0004b67c) cam6_indi_pane_g1

0xd9d6,	// (0x0004b68e) cam6_indi_pane_g2_ParamLimits

0xd9d6,	// (0x0004b68e) cam6_indi_pane_g2

0xd9e8,	// (0x0004b6a0) cam6_indi_pane_g3_ParamLimits

0xd9e8,	// (0x0004b6a0) cam6_indi_pane_g3

0x0002,

0xfa9b,	// (0x0004d753) cam6_indi_pane_g_ParamLimits

0xfa9b,	// (0x0004d753) cam6_indi_pane_g

0xd9fa,	// (0x0004b6b2) cam6_indi_pane_t1_ParamLimits

0xd9fa,	// (0x0004b6b2) cam6_indi_pane_t1

0x6471,	// (0x00044129) cam6_autofocus_pane_g1

0x6479,	// (0x00044131) cam6_autofocus_pane_g2

0x6481,	// (0x00044139) cam6_autofocus_pane_g3

0x6489,	// (0x00044141) cam6_autofocus_pane_g4

0x0003,

0xfaa2,	// (0x0004d75a) cam6_autofocus_pane_g

0xda20,	// (0x0004b6d8) cam6_timer_pane_g1

0xda28,	// (0x0004b6e0) cam6_timer_pane_t1

0xda36,	// (0x0004b6ee) cam6_zoom_cont_pane

0xda3e,	// (0x0004b6f6) cam6_zoom_pane_g1

0xda47,	// (0x0004b6ff) cam6_zoom_pane_g2

0x764d,	// (0x00045305) cam6_zoom_pane_g3

0x0002,

0xfaab,	// (0x0004d763) cam6_zoom_pane_g

0xa965,	// (0x0004861d) cam6_battery_pane_g1

0xa965,	// (0x0004861d) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0004d055) cam6_battery_pane_g

0xda3e,	// (0x0004b6f6) cam6_zoom_cont_pane_g1

0xda47,	// (0x0004b6ff) cam6_zoom_cont_pane_g2

0xda50,	// (0x0004b708) cam6_zoom_cont_pane_g3

0x0002,

0xfab2,	// (0x0004d76a) cam6_zoom_cont_pane_g

0x766b,	// (0x00045323) cam6_mode_pane_cp_ParamLimits

0x766b,	// (0x00045323) cam6_mode_pane_cp

0x767f,	// (0x00045337) cam6_zoom_pane_cp_ParamLimits

0x767f,	// (0x00045337) cam6_zoom_pane_cp

0x769b,	// (0x00045353) vid6_image_uncrop_cif_pane_ParamLimits

0x769b,	// (0x00045353) vid6_image_uncrop_cif_pane

0x76c7,	// (0x0004537f) vid6_image_uncrop_nhd_pane_ParamLimits

0x76c7,	// (0x0004537f) vid6_image_uncrop_nhd_pane

0x76e6,	// (0x0004539e) vid6_image_uncrop_vga_pane_ParamLimits

0x76e6,	// (0x0004539e) vid6_image_uncrop_vga_pane

0x7705,	// (0x000453bd) vid6_image_uncrop_wvga_pane_ParamLimits

0x7705,	// (0x000453bd) vid6_image_uncrop_wvga_pane

0x7724,	// (0x000453dc) vid6_indi_pane_ParamLimits

0x7724,	// (0x000453dc) vid6_indi_pane

0xd306,	// (0x0004afbe) bg_tb_trans_pane_cp09_ParamLimits

0xd306,	// (0x0004afbe) bg_tb_trans_pane_cp09

0xda68,	// (0x0004b720) cam6_battery_pane_cp_ParamLimits

0xda68,	// (0x0004b720) cam6_battery_pane_cp

0xda74,	// (0x0004b72c) vid6_indi_pane_g1_ParamLimits

0xda74,	// (0x0004b72c) vid6_indi_pane_g1

0xda86,	// (0x0004b73e) vid6_indi_pane_g2_ParamLimits

0xda86,	// (0x0004b73e) vid6_indi_pane_g2

0xda98,	// (0x0004b750) vid6_indi_pane_g3_ParamLimits

0xda98,	// (0x0004b750) vid6_indi_pane_g3

0xdaaf,	// (0x0004b767) vid6_indi_pane_g4_ParamLimits

0xdaaf,	// (0x0004b767) vid6_indi_pane_g4

0xdac6,	// (0x0004b77e) vid6_indi_pane_g5_ParamLimits

0xdac6,	// (0x0004b77e) vid6_indi_pane_g5

0x0004,

0xfab9,	// (0x0004d771) vid6_indi_pane_g_ParamLimits

0xfab9,	// (0x0004d771) vid6_indi_pane_g

0xdae0,	// (0x0004b798) vid6_indi_pane_t1_ParamLimits

0xdae0,	// (0x0004b798) vid6_indi_pane_t1

0xdaf6,	// (0x0004b7ae) vid6_indi_pane_t2_ParamLimits

0xdaf6,	// (0x0004b7ae) vid6_indi_pane_t2

0xdb1e,	// (0x0004b7d6) vid6_indi_pane_t3_ParamLimits

0xdb1e,	// (0x0004b7d6) vid6_indi_pane_t3

0xdb46,	// (0x0004b7fe) vid6_indi_pane_t4_ParamLimits

0xdb46,	// (0x0004b7fe) vid6_indi_pane_t4

0x0003,

0xfac4,	// (0x0004d77c) vid6_indi_pane_t_ParamLimits

0xfac4,	// (0x0004d77c) vid6_indi_pane_t

0xdb6a,	// (0x0004b822) wait_bar_pane_cp08

0x7749,	// (0x00045401) main_cset_text2_pane_t1_ParamLimits

0x7749,	// (0x00045401) main_cset_text2_pane_t1

0x7656,	// (0x0004530e) listscroll_gen_pane_cp06_t1_ParamLimits

0x7656,	// (0x0004530e) listscroll_gen_pane_cp06_t1

0x9ffd,	// (0x00047cb5) main_cam6_set_pane

0xa733,	// (0x000483eb) bg_tb_trans_pane_cp06_ParamLimits

0x631f,	// (0x00043fd7) cam4_indicators_pane_g1_ParamLimits

0x6330,	// (0x00043fe8) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x0004d4fb) cam4_indicators_pane_g_ParamLimits

0x6348,	// (0x00044000) cam4_indicators_pane_t1_ParamLimits

0xa6da,	// (0x00048392) bg_tb_trans_pane_cp07_ParamLimits

0x63ff,	// (0x000440b7) vid4_indicators_pane_g1_ParamLimits

0x6415,	// (0x000440cd) vid4_indicators_pane_g2_ParamLimits

0x6429,	// (0x000440e1) vid4_indicators_pane_g3_ParamLimits

0x643c,	// (0x000440f4) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x0004d50d) vid4_indicators_pane_g_ParamLimits

0x645a,	// (0x00044112) vid4_indicators_pane_t1_ParamLimits

0x7226,	// (0x00044ede) vid4_progress_pane_g1_ParamLimits

0x7236,	// (0x00044eee) vid4_progress_pane_g2_ParamLimits

0x7246,	// (0x00044efe) vid4_progress_pane_g3_ParamLimits

0x7258,	// (0x00044f10) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x0004d6b4) vid4_progress_pane_g_ParamLimits

0x7276,	// (0x00044f2e) vid4_progress_pane_t1_ParamLimits

0x7290,	// (0x00044f48) vid4_progress_pane_t2_ParamLimits

0x72a9,	// (0x00044f61) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x0004d6bf) vid4_progress_pane_t_ParamLimits

0x72be,	// (0x00044f76) wait_bar_pane_cp07_ParamLimits

0x7770,	// (0x00045428) main_cam6_set_pane_g2_ParamLimits

0x7770,	// (0x00045428) main_cam6_set_pane_g2

0x777c,	// (0x00045434) main_cset6_listscroll_pane_ParamLimits

0x777c,	// (0x00045434) main_cset6_listscroll_pane

0x77a9,	// (0x00045461) main_cset6_slider_pane_ParamLimits

0x77a9,	// (0x00045461) main_cset6_slider_pane

0x77b5,	// (0x0004546d) main_cset6_text2_pane_ParamLimits

0x77b5,	// (0x0004546d) main_cset6_text2_pane

0xdb79,	// (0x0004b831) main_cset6_text_pane

0xdb81,	// (0x0004b839) main_cset_list_pane_copy1_ParamLimits

0xdb81,	// (0x0004b839) main_cset_list_pane_copy1

0xdb91,	// (0x0004b849) scroll_pane_cp028_copy1

0x77c8,	// (0x00045480) cset_list_set_pane_copy1

0x77d8,	// (0x00045490) aid_position_infowindow_above_copy1

0x77e0,	// (0x00045498) aid_position_infowindow_below_copy1

0x11aa,	// (0x0003ee62) cset_list_set_pane_g1_copy1

0x11b2,	// (0x0003ee6a) cset_list_set_pane_g3_copy1_ParamLimits

0x11b2,	// (0x0003ee6a) cset_list_set_pane_g3_copy1

0x11c1,	// (0x0003ee79) cset_list_set_pane_t1_copy1_ParamLimits

0x11c1,	// (0x0003ee79) cset_list_set_pane_t1_copy1

0xa6da,	// (0x00048392) list_highlight_pane_cp021_copy1_ParamLimits

0xa6da,	// (0x00048392) list_highlight_pane_cp021_copy1

0xdb9a,	// (0x0004b852) cset6_slider_pane_ParamLimits

0xdb9a,	// (0x0004b852) cset6_slider_pane

0xdbc6,	// (0x0004b87e) main_cset6_slider_pane_g1_ParamLimits

0xdbc6,	// (0x0004b87e) main_cset6_slider_pane_g1

0x77e8,	// (0x000454a0) main_cset6_slider_pane_g2_ParamLimits

0x77e8,	// (0x000454a0) main_cset6_slider_pane_g2

0xdbee,	// (0x0004b8a6) main_cset6_slider_pane_g3_ParamLimits

0xdbee,	// (0x0004b8a6) main_cset6_slider_pane_g3

0x7810,	// (0x000454c8) main_cset6_slider_pane_g4_ParamLimits

0x7810,	// (0x000454c8) main_cset6_slider_pane_g4

0x781c,	// (0x000454d4) main_cset6_slider_pane_g5_ParamLimits

0x781c,	// (0x000454d4) main_cset6_slider_pane_g5

0xd40b,	// (0x0004b0c3) main_cset6_slider_pane_g7_ParamLimits

0xd40b,	// (0x0004b0c3) main_cset6_slider_pane_g7

0xd417,	// (0x0004b0cf) main_cset6_slider_pane_g8_ParamLimits

0xd417,	// (0x0004b0cf) main_cset6_slider_pane_g8

0x7828,	// (0x000454e0) main_cset6_slider_pane_g9_ParamLimits

0x7828,	// (0x000454e0) main_cset6_slider_pane_g9

0x7834,	// (0x000454ec) main_cset6_slider_pane_g10_ParamLimits

0x7834,	// (0x000454ec) main_cset6_slider_pane_g10

0x7840,	// (0x000454f8) main_cset6_slider_pane_g11_ParamLimits

0x7840,	// (0x000454f8) main_cset6_slider_pane_g11

0x784c,	// (0x00045504) main_cset6_slider_pane_g12_ParamLimits

0x784c,	// (0x00045504) main_cset6_slider_pane_g12

0x7858,	// (0x00045510) main_cset6_slider_pane_g13_ParamLimits

0x7858,	// (0x00045510) main_cset6_slider_pane_g13

0x7864,	// (0x0004551c) main_cset6_slider_pane_g14_ParamLimits

0x7864,	// (0x0004551c) main_cset6_slider_pane_g14

0x7870,	// (0x00045528) main_cset6_slider_pane_g15_ParamLimits

0x7870,	// (0x00045528) main_cset6_slider_pane_g15

0x7888,	// (0x00045540) main_cset6_slider_pane_g16_ParamLimits

0x7888,	// (0x00045540) main_cset6_slider_pane_g16

0x7894,	// (0x0004554c) main_cset6_slider_pane_g17_ParamLimits

0x7894,	// (0x0004554c) main_cset6_slider_pane_g17

0x0011,

0xfacd,	// (0x0004d785) main_cset6_slider_pane_g_ParamLimits

0xfacd,	// (0x0004d785) main_cset6_slider_pane_g

0xdbfa,	// (0x0004b8b2) main_cset6_slider_pane_t1_ParamLimits

0xdbfa,	// (0x0004b8b2) main_cset6_slider_pane_t1

0x78b8,	// (0x00045570) main_cset6_slider_pane_t2_ParamLimits

0x78b8,	// (0x00045570) main_cset6_slider_pane_t2

0x78e3,	// (0x0004559b) main_cset6_slider_pane_t3_ParamLimits

0x78e3,	// (0x0004559b) main_cset6_slider_pane_t3

0x790e,	// (0x000455c6) main_cset6_slider_pane_t4_ParamLimits

0x790e,	// (0x000455c6) main_cset6_slider_pane_t4

0x7939,	// (0x000455f1) main_cset6_slider_pane_t5_ParamLimits

0x7939,	// (0x000455f1) main_cset6_slider_pane_t5

0xdc3b,	// (0x0004b8f3) main_cset6_slider_pane_t7_ParamLimits

0xdc3b,	// (0x0004b8f3) main_cset6_slider_pane_t7

0x7964,	// (0x0004561c) main_cset6_slider_pane_t8_ParamLimits

0x7964,	// (0x0004561c) main_cset6_slider_pane_t8

0x7988,	// (0x00045640) main_cset6_slider_pane_t9_ParamLimits

0x7988,	// (0x00045640) main_cset6_slider_pane_t9

0x79ac,	// (0x00045664) main_cset6_slider_pane_t10_ParamLimits

0x79ac,	// (0x00045664) main_cset6_slider_pane_t10

0x79d0,	// (0x00045688) main_cset6_slider_pane_t11_ParamLimits

0x79d0,	// (0x00045688) main_cset6_slider_pane_t11

0xdc71,	// (0x0004b929) main_cset6_slider_pane_t14_ParamLimits

0xdc71,	// (0x0004b929) main_cset6_slider_pane_t14

0xdcaa,	// (0x0004b962) main_cset6_slider_pane_t15_ParamLimits

0xdcaa,	// (0x0004b962) main_cset6_slider_pane_t15

0x000b,

0xfaf2,	// (0x0004d7aa) main_cset6_slider_pane_t_ParamLimits

0xfaf2,	// (0x0004d7aa) main_cset6_slider_pane_t

0xdce3,	// (0x0004b99b) cset_slider_pane_g1_copy1

0xdcec,	// (0x0004b9a4) cset_slider_pane_g2_copy1

0xdcf5,	// (0x0004b9ad) cset_slider_pane_g3_copy1

0x9ffd,	// (0x00047cb5) bg_popup_sub_pane_cp011_copy1

0xdd07,	// (0x0004b9bf) main_cset_text_pane_g1_copy1

0xd55b,	// (0x0004b213) main_cset_text_pane_t1_copy1

0xd569,	// (0x0004b221) main_cset_text_pane_t2_copy1

0xd577,	// (0x0004b22f) main_cset_text_pane_t3_copy1

0xd585,	// (0x0004b23d) main_cset_text_pane_t4_copy1

0xd593,	// (0x0004b24b) main_cset_text_pane_t5_copy1

0xdd0f,	// (0x0004b9c7) main_cset_text_pane_t6_copy1

0xdd1d,	// (0x0004b9d5) main_cset_text_pane_t7_copy1

0x79f4,	// (0x000456ac) main_cset_text2_pane_t1_copy1

0xa6da,	// (0x00048392) main_ncimui_pane

0x4a15,	// (0x000426cd) popup_query_ncimui_window_ParamLimits

0x4a15,	// (0x000426cd) popup_query_ncimui_window

0x0de1,	// (0x0003ea99) field_cale_ev2_pane_g4_ParamLimits

0x0de1,	// (0x0003ea99) field_cale_ev2_pane_g4

0x5b9b,	// (0x00043853) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b9b,	// (0x00043853) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0004d495) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0004d495) cell_video_dialer_keypad_pane_g

0x5bb3,	// (0x0004386b) cell_video_dialer_keypad_pane_t1

0x9ffd,	// (0x00047cb5) bg_popup_window_pane_cp012

0xc56a,	// (0x0004a222) heading_pane_cp06

0xdd49,	// (0x0004ba01) ncim_query_content_pane

0x9ffd,	// (0x00047cb5) bg_popup_heading_pane_cp01

0xdd51,	// (0x0004ba09) ncim_heading_pane_t1

0xdd5f,	// (0x0004ba17) ncim_indicator_popup_pane

0xdd71,	// (0x0004ba29) ncim_query_button_pane

0xdd90,	// (0x0004ba48) ncim_query_content_pane_t1

0xdda2,	// (0x0004ba5a) ncim_query_content_pane_t2

0x0005,

0xfb36,	// (0x0004d7ee) ncim_query_content_pane_t

0xdddc,	// (0x0004ba94) ncim_query_list_pane

0xddee,	// (0x0004baa6) ncim_query_popup_pane

0xdd5f,	// (0x0004ba17) ncim_indicator_popup_pane_ParamLimits

0x7b50,	// (0x00045808) ncim_query_content_pane_g1_ParamLimits

0x7b50,	// (0x00045808) ncim_query_content_pane_g1

0xdd90,	// (0x0004ba48) ncim_query_content_pane_t1_ParamLimits

0xdda2,	// (0x0004ba5a) ncim_query_content_pane_t2_ParamLimits

0x7b5c,	// (0x00045814) ncim_query_content_pane_t3_ParamLimits

0x7b5c,	// (0x00045814) ncim_query_content_pane_t3

0x7b79,	// (0x00045831) ncim_query_content_pane_t4_ParamLimits

0x7b79,	// (0x00045831) ncim_query_content_pane_t4

0x7b96,	// (0x0004584e) ncim_query_content_pane_t5_ParamLimits

0x7b96,	// (0x0004584e) ncim_query_content_pane_t5

0xddb4,	// (0x0004ba6c) ncim_query_content_pane_t6_ParamLimits

0xddb4,	// (0x0004ba6c) ncim_query_content_pane_t6

0xfb36,	// (0x0004d7ee) ncim_query_content_pane_t_ParamLimits

0xdddc,	// (0x0004ba94) ncim_query_list_pane_ParamLimits

0xddee,	// (0x0004baa6) ncim_query_popup_pane_ParamLimits

0xde02,	// (0x0004baba) wait_bar_pane_cp04

0x9ffd,	// (0x00047cb5) input_focus_pane_cp011

0xde0a,	// (0x0004bac2) ncim_query_popup_pane_t1

0xde18,	// (0x0004bad0) ncim_list_query_list_pane_ParamLimits

0xde18,	// (0x0004bad0) ncim_list_query_list_pane

0x9ffd,	// (0x00047cb5) bg_button_pane_cp027

0xde2b,	// (0x0004bae3) ncim_query_button_pane_g1

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp012

0xde35,	// (0x0004baed) ncim_list_query_list_pane_g1

0xde3d,	// (0x0004baf5) ncim_list_query_list_pane_t1

0x633c,	// (0x00043ff4) cam4_indicators_pane_g3_ParamLimits

0x633c,	// (0x00043ff4) cam4_indicators_pane_g3

0x6448,	// (0x00044100) vid4_indicators_pane_g5_ParamLimits

0x6448,	// (0x00044100) vid4_indicators_pane_g5

0x7267,	// (0x00044f1f) vid4_progress_pane_g5_ParamLimits

0x7267,	// (0x00044f1f) vid4_progress_pane_g5

0x7a26,	// (0x000456de) main_ncimui_pane_g1

0x7a92,	// (0x0004574a) ncimui_group_query_pane_ParamLimits

0x7a92,	// (0x0004574a) ncimui_group_query_pane

0x7aec,	// (0x000457a4) ncimui_list_pane_ParamLimits

0x7aec,	// (0x000457a4) ncimui_list_pane

0x7b13,	// (0x000457cb) ncimui_text_pane_ParamLimits

0x7b13,	// (0x000457cb) ncimui_text_pane

0x7bb3,	// (0x0004586b) ncimui_text_pane_t1_ParamLimits

0x7bb3,	// (0x0004586b) ncimui_text_pane_t1

0xde4b,	// (0x0004bb03) ncimui_list_single_graphic_pane_ParamLimits

0xde4b,	// (0x0004bb03) ncimui_list_single_graphic_pane

0x7bd2,	// (0x0004588a) ncimui_query_pane_ParamLimits

0x7bd2,	// (0x0004588a) ncimui_query_pane

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp013

0xde5b,	// (0x0004bb13) ncim_list_query_list_pane_t1_copy1

0xde35,	// (0x0004baed) ncim_list_single_graphic_pane_g1

0x7be5,	// (0x0004589d) ncim_query_button_pane_cp01

0x7bf1,	// (0x000458a9) ncim_query_entry_pane_ParamLimits

0x7bf1,	// (0x000458a9) ncim_query_entry_pane

0x7c04,	// (0x000458bc) ncimui_query_pane_g1

0x7c10,	// (0x000458c8) ncimui_query_pane_t1_ParamLimits

0x7c10,	// (0x000458c8) ncimui_query_pane_t1

0xa6da,	// (0x00048392) input_focus_pane_cp012

0xde69,	// (0x0004bb21) ncim_query_entry_pane_t1

0xa7a5,	// (0x0004845d) main_im_pane_ParamLimits

0xa6da,	// (0x00048392) main_mobtv_pane_ParamLimits

0xa6da,	// (0x00048392) main_mobtv_pane

0x78a0,	// (0x00045558) main_cset6_slider_pane_g18_ParamLimits

0x78a0,	// (0x00045558) main_cset6_slider_pane_g18

0x78ac,	// (0x00045564) main_cset6_slider_pane_g19_ParamLimits

0x78ac,	// (0x00045564) main_cset6_slider_pane_g19

0xb997,	// (0x0004964f) bg_main_mobtv_pane_ParamLimits

0xb997,	// (0x0004964f) bg_main_mobtv_pane

0x7c29,	// (0x000458e1) main_mobtv_info_pane

0x7c34,	// (0x000458ec) main_mobtv_loading_pane_ParamLimits

0x7c34,	// (0x000458ec) main_mobtv_loading_pane

0xde7b,	// (0x0004bb33) main_mobtv_pg_channel_list_pane

0xde85,	// (0x0004bb3d) main_mobtv_pg_hdr_pane

0x7c41,	// (0x000458f9) main_mobtv_programe_curr_pane_ParamLimits

0x7c41,	// (0x000458f9) main_mobtv_programe_curr_pane

0x7c4e,	// (0x00045906) main_mobtv_programe_next_pane_ParamLimits

0x7c4e,	// (0x00045906) main_mobtv_programe_next_pane

0xde8e,	// (0x0004bb46) popup_mobtv_noti_window

0xa965,	// (0x0004861d) main_tv_pg_hdr_pane_g1

0xde98,	// (0x0004bb50) main_tv_pg_hdr_pane_g2

0xdea0,	// (0x0004bb58) main_tv_pg_hdr_pane_g3

0xdea8,	// (0x0004bb60) main_tv_pg_hdr_pane_g4

0xdeb0,	// (0x0004bb68) main_tv_pg_hdr_pane_g5

0xdeba,	// (0x0004bb72) main_tv_pg_hdr_pane_g6

0xdec4,	// (0x0004bb7c) main_tv_pg_hdr_pane_g7

0xdece,	// (0x0004bb86) main_tv_pg_hdr_pane_g8

0xded8,	// (0x0004bb90) main_tv_pg_hdr_pane_g9

0xdee2,	// (0x0004bb9a) main_tv_pg_hdr_pane_g10

0xdeec,	// (0x0004bba4) main_tv_pg_hdr_pane_g11

0x000a,

0xfb43,	// (0x0004d7fb) main_tv_pg_hdr_pane_g

0xdef6,	// (0x0004bbae) main_tv_pg_hdr_pane_t1

0xdf04,	// (0x0004bbbc) main_tv_pg_hdr_pane_t2

0xdf12,	// (0x0004bbca) main_tv_pg_hdr_pane_t3

0xdf22,	// (0x0004bbda) main_tv_pg_hdr_pane_t4

0xdf32,	// (0x0004bbea) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5a,	// (0x0004d812) main_tv_pg_hdr_pane_t

0xdf42,	// (0x0004bbfa) single_mobtv_pg_channel_pane_ParamLimits

0xdf42,	// (0x0004bbfa) single_mobtv_pg_channel_pane

0xdf54,	// (0x0004bc0c) single_mobtv_pg_channel_table_pane

0xdf5d,	// (0x0004bc15) single_mobtv_pg_channel_thumb_pane

0xdf66,	// (0x0004bc1e) single_tv_pg_channel_pane_g1

0xdf6f,	// (0x0004bc27) single_tv_pg_channel_pane_g2

0x0001,

0xfb65,	// (0x0004d81d) single_tv_pg_channel_pane_g

0xa733,	// (0x000483eb) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa733,	// (0x000483eb) bg_single_mobtv_pg_channel_thumb_pane

0xdf78,	// (0x0004bc30) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf78,	// (0x0004bc30) single_mobtv_pg_channel_thumb_pane_g1

0xdf86,	// (0x0004bc3e) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf86,	// (0x0004bc3e) single_mobtv_pg_channel_thumb_pane_g2

0xdf92,	// (0x0004bc4a) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf92,	// (0x0004bc4a) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6a,	// (0x0004d822) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6a,	// (0x0004d822) single_mobtv_pg_channel_thumb_pane_g

0xdf9e,	// (0x0004bc56) single_mobtv_pg_channel_thumb_pane_t1

0xdfac,	// (0x0004bc64) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb71,	// (0x0004d829) single_mobtv_pg_channel_thumb_pane_t

0xa965,	// (0x0004861d) bg_single_mobtv_pg_channel_table_pane_g1

0xa965,	// (0x0004861d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0004d055) bg_single_mobtv_pg_channel_table_pane_g

0xdfba,	// (0x0004bc72) single_mobtv_pg_channel_table_pane_t1

0xdfc8,	// (0x0004bc80) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb76,	// (0x0004d82e) single_mobtv_pg_channel_table_pane_t

0x7c63,	// (0x0004591b) main_mobtv_info_pane_g1_ParamLimits

0x7c63,	// (0x0004591b) main_mobtv_info_pane_g1

0x7c7f,	// (0x00045937) main_mobtv_info_pane_t1_ParamLimits

0x7c7f,	// (0x00045937) main_mobtv_info_pane_t1

0x7cf7,	// (0x000459af) main_mobtv_info_pane_t2_ParamLimits

0x7cf7,	// (0x000459af) main_mobtv_info_pane_t2

0x0002,

0xfb80,	// (0x0004d838) main_mobtv_info_pane_t_ParamLimits

0xfb80,	// (0x0004d838) main_mobtv_info_pane_t

0x7d88,	// (0x00045a40) wait_bar_pane_cp05

0x7d9a,	// (0x00045a52) main_mobtv_loading_pane_g1_ParamLimits

0x7d9a,	// (0x00045a52) main_mobtv_loading_pane_g1

0x7da6,	// (0x00045a5e) main_mobtv_loading_pane_g2_ParamLimits

0x7da6,	// (0x00045a5e) main_mobtv_loading_pane_g2

0x7db2,	// (0x00045a6a) main_mobtv_loading_pane_g3_ParamLimits

0x7db2,	// (0x00045a6a) main_mobtv_loading_pane_g3

0x0002,

0xfb87,	// (0x0004d83f) main_mobtv_loading_pane_g_ParamLimits

0xfb87,	// (0x0004d83f) main_mobtv_loading_pane_g

0xdfd6,	// (0x0004bc8e) main_mobtv_loading_pane_t1_ParamLimits

0xdfd6,	// (0x0004bc8e) main_mobtv_loading_pane_t1

0xdfee,	// (0x0004bca6) main_mobtv_loading_pane_t2_ParamLimits

0xdfee,	// (0x0004bca6) main_mobtv_loading_pane_t2

0x0001,

0xfb8e,	// (0x0004d846) main_mobtv_loading_pane_t_ParamLimits

0xfb8e,	// (0x0004d846) main_mobtv_loading_pane_t

0x7dc0,	// (0x00045a78) wait_bar_pane_cp06_ParamLimits

0x7dc0,	// (0x00045a78) wait_bar_pane_cp06

0xe012,	// (0x0004bcca) main_mobtv_programe_curr_pane_t1

0xe020,	// (0x0004bcd8) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb93,	// (0x0004d84b) main_mobtv_programe_curr_pane_t

0xe02e,	// (0x0004bce6) main_mobtv_programe_next_pane_t1

0xe03c,	// (0x0004bcf4) main_mobtv_programe_next_pane_t2

0xe04a,	// (0x0004bd02) main_mobtv_programe_next_pane_t3

0x0002,

0xfb98,	// (0x0004d850) main_mobtv_programe_next_pane_t

0x9ffd,	// (0x00047cb5) bg_popup_mobtv_noti_window_pane

0xe058,	// (0x0004bd10) popup_mobtv_noti_window_g1

0xe060,	// (0x0004bd18) popup_mobtv_noti_window_t1

0xe06e,	// (0x0004bd26) popup_mobtv_noti_window_t2

0x0001,

0xfb9f,	// (0x0004d857) popup_mobtv_noti_window_t

0xa965,	// (0x0004861d) bg_popup_mobtv_noti_window_pane_g1

0x9ffd,	// (0x00047cb5) sc_clock_pane

0x9ffd,	// (0x00047cb5) main_fs_bigclock_pane

0x7432,	// (0x000450ea) blid2_tripm_pane_t4_ParamLimits

0x7432,	// (0x000450ea) blid2_tripm_pane_t4

0x7dcc,	// (0x00045a84) sc_clock_pane_g1_ParamLimits

0x7dcc,	// (0x00045a84) sc_clock_pane_g1

0x7dda,	// (0x00045a92) sc_clock_pane_t1_ParamLimits

0x7dda,	// (0x00045a92) sc_clock_pane_t1

0x7def,	// (0x00045aa7) sc_clock_pane_t2_ParamLimits

0x7def,	// (0x00045aa7) sc_clock_pane_t2

0x7e01,	// (0x00045ab9) sc_clock_pane_t3_ParamLimits

0x7e01,	// (0x00045ab9) sc_clock_pane_t3

0x0004,

0xfba4,	// (0x0004d85c) sc_clock_pane_t_ParamLimits

0xfba4,	// (0x0004d85c) sc_clock_pane_t

0x8893,	// (0x0004654b) main_fs_bigclock_indicator_pane_ParamLimits

0x8893,	// (0x0004654b) main_fs_bigclock_indicator_pane

0x7e90,	// (0x00045b48) main_fs_bigclock_pane_g1_ParamLimits

0x7e90,	// (0x00045b48) main_fs_bigclock_pane_g1

0x889f,	// (0x00046557) main_fs_bigclock_pane_t1_ParamLimits

0x889f,	// (0x00046557) main_fs_bigclock_pane_t1

0x88b1,	// (0x00046569) main_fs_bigclock_pane_t2_ParamLimits

0x88b1,	// (0x00046569) main_fs_bigclock_pane_t2

0x88c5,	// (0x0004657d) main_fs_bigclock_pane_t3_ParamLimits

0x88c5,	// (0x0004657d) main_fs_bigclock_pane_t3

0x0002,

0xfd35,	// (0x0004d9ed) main_fs_bigclock_pane_t_ParamLimits

0xfd35,	// (0x0004d9ed) main_fs_bigclock_pane_t

0xe75f,	// (0x0004c417) main_fs_bigclock_indicator_pane_g1

0xdd82,	// (0x0004ba3a) ncim_query_content_pane_g2_ParamLimits

0xdd82,	// (0x0004ba3a) ncim_query_content_pane_g2

0x0001,

0xfb31,	// (0x0004d7e9) ncim_query_content_pane_g_ParamLimits

0xfb31,	// (0x0004d7e9) ncim_query_content_pane_g

0x7e13,	// (0x00045acb) sc_clock_pane_t4_ParamLimits

0x7e13,	// (0x00045acb) sc_clock_pane_t4

0xa6da,	// (0x00048392) main_radioblah_pane

0x61e0,	// (0x00043e98) cell_call4_button_pane_t1_copy1_ParamLimits

0x61e0,	// (0x00043e98) cell_call4_button_pane_t1_copy1

0x7a42,	// (0x000456fa) main_ncimui_pane_t1_ParamLimits

0x7a42,	// (0x000456fa) main_ncimui_pane_t1

0x7a5c,	// (0x00045714) main_ncimui_pane_t2_ParamLimits

0x7a5c,	// (0x00045714) main_ncimui_pane_t2

0x0002,

0xfb2a,	// (0x0004d7e2) main_ncimui_pane_t_ParamLimits

0xfb2a,	// (0x0004d7e2) main_ncimui_pane_t

0xe07c,	// (0x0004bd34) main_radioblah_anim_pane_ParamLimits

0xe07c,	// (0x0004bd34) main_radioblah_anim_pane

0xe08d,	// (0x0004bd45) main_radioblah_info_pane_ParamLimits

0xe08d,	// (0x0004bd45) main_radioblah_info_pane

0xe0a1,	// (0x0004bd59) main_radioblah_pane_t1_ParamLimits

0xe0a1,	// (0x0004bd59) main_radioblah_pane_t1

0xe0bd,	// (0x0004bd75) main_radioblah_pane_t2_ParamLimits

0xe0bd,	// (0x0004bd75) main_radioblah_pane_t2

0x0003,

0xfbc5,	// (0x0004d87d) main_radioblah_pane_t_ParamLimits

0xfbc5,	// (0x0004d87d) main_radioblah_pane_t

0x802f,	// (0x00045ce7) main_radioblah_rocker_ctrl_pane_ParamLimits

0x802f,	// (0x00045ce7) main_radioblah_rocker_ctrl_pane

0xe105,	// (0x0004bdbd) main_radioblah_info_pane_t1_ParamLimits

0xe105,	// (0x0004bdbd) main_radioblah_info_pane_t1

0x8078,	// (0x00045d30) main_radioblah_info_pane_t2_ParamLimits

0x8078,	// (0x00045d30) main_radioblah_info_pane_t2

0x0003,

0xfbce,	// (0x0004d886) main_radioblah_info_pane_t_ParamLimits

0xfbce,	// (0x0004d886) main_radioblah_info_pane_t

0xa965,	// (0x0004861d) main_radioblah_rocker_ctrl_pane_g1

0x8128,	// (0x00045de0) main_radioblah_rocker_ctrl_pane_g2

0x8130,	// (0x00045de8) main_radioblah_rocker_ctrl_pane_g3

0x8138,	// (0x00045df0) main_radioblah_rocker_ctrl_pane_g4

0x8140,	// (0x00045df8) main_radioblah_rocker_ctrl_pane_g5

0x8148,	// (0x00045e00) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd7,	// (0x0004d88f) main_radioblah_rocker_ctrl_pane_g

0x79f4,	// (0x000456ac) main_cset_text2_pane_t1_copy1_ParamLimits

0x6269,	// (0x00043f21) cam4_image_uncrop_qvga_pane

0x63ae,	// (0x00044066) vid4_image_uncrop_qcif_pane

0x75b1,	// (0x00045269) cam6_image_uncrop_qvga_pane_ParamLimits

0x75b1,	// (0x00045269) cam6_image_uncrop_qvga_pane

0xda58,	// (0x0004b710) vid6_image_uncrop_qcif_pane_ParamLimits

0xda58,	// (0x0004b710) vid6_image_uncrop_qcif_pane

0x9ffd,	// (0x00047cb5) bg_popup_preview_window_pane_cp03

0xdd2b,	// (0x0004b9e3) list_cset_text2_pane

0xdd33,	// (0x0004b9eb) main_cset6_text2_pane_g1

0xdd3b,	// (0x0004b9f3) main_cset6_text2_pane_t1

0x8150,	// (0x00045e08) list_cset_text2_pane_t1_ParamLimits

0x8150,	// (0x00045e08) list_cset_text2_pane_t1

0xa6da,	// (0x00048392) main_radioblah_pane_ParamLimits

0x7d74,	// (0x00045a2c) main_mobtv_info_pane_t3_ParamLimits

0x7d74,	// (0x00045a2c) main_mobtv_info_pane_t3

0x801d,	// (0x00045cd5) main_radioblah_pane_g1

0x8048,	// (0x00045d00) main_radioblah_info_pane_g1

0x80cd,	// (0x00045d85) main_radioblah_info_pane_t3_ParamLimits

0x80cd,	// (0x00045d85) main_radioblah_info_pane_t3

0x394a,	// (0x00041602) highlight_cell_cale_month_pane_ParamLimits

0x394a,	// (0x00041602) highlight_cell_cale_month_pane

0x9ffd,	// (0x00047cb5) main_phob_fisheye_pane

0xcd0d,	// (0x0004a9c5) scroll_pane_cp0031_ParamLimits

0xcd0d,	// (0x0004a9c5) scroll_pane_cp0031

0xdb6a,	// (0x0004b822) wait_bar_pane_cp08_ParamLimits

0x77c8,	// (0x00045480) cset_list_set_pane_copy1_ParamLimits

0xe13f,	// (0x0004bdf7) highlight_cell_cale_month_pane_g1

0x8167,	// (0x00045e1f) highlight_cell_cale_month_pane_t1

0xd787,	// (0x0004b43f) list_gen_pane_cp01

0xd3f6,	// (0x0004b0ae) scroll_pane_01

0x8175,	// (0x00045e2d) list_single_double_fisheye_pane

0x11f3,	// (0x0003eeab) list_double_fisheye_pane_g1_ParamLimits

0x11f3,	// (0x0003eeab) list_double_fisheye_pane_g1

0x11ff,	// (0x0003eeb7) list_double_fisheye_pane_g2_ParamLimits

0x11ff,	// (0x0003eeb7) list_double_fisheye_pane_g2

0x1213,	// (0x0003eecb) list_double_fisheye_pane_g3_ParamLimits

0x1213,	// (0x0003eecb) list_double_fisheye_pane_g3

0x0004,

0xfbe4,	// (0x0004d89c) list_double_fisheye_pane_g_ParamLimits

0xfbe4,	// (0x0004d89c) list_double_fisheye_pane_g

0x123c,	// (0x0003eef4) list_double_fisheye_pane_t1_ParamLimits

0x123c,	// (0x0003eef4) list_double_fisheye_pane_t1

0x1257,	// (0x0003ef0f) list_double_fisheye_pane_t2_ParamLimits

0x1257,	// (0x0003ef0f) list_double_fisheye_pane_t2

0x0001,

0xfbef,	// (0x0004d8a7) list_double_fisheye_pane_t_ParamLimits

0xfbef,	// (0x0004d8a7) list_double_fisheye_pane_t

0x9ffd,	// (0x00047cb5) main_call5_pane

0x7e39,	// (0x00045af1) sc_swipe_pane_ParamLimits

0x7e39,	// (0x00045af1) sc_swipe_pane

0x818a,	// (0x00045e42) call5_image_pane_ParamLimits

0x818a,	// (0x00045e42) call5_image_pane

0x819c,	// (0x00045e54) call5_swipe_1_pane_ParamLimits

0x819c,	// (0x00045e54) call5_swipe_1_pane

0x81a8,	// (0x00045e60) call5_swipe_2_pane_ParamLimits

0x81a8,	// (0x00045e60) call5_swipe_2_pane

0x81c2,	// (0x00045e7a) popup_call5_audio_first_window_ParamLimits

0x81c2,	// (0x00045e7a) popup_call5_audio_first_window

0xa733,	// (0x000483eb) call5_swipe_1_pane_g1_ParamLimits

0xa733,	// (0x000483eb) call5_swipe_1_pane_g1

0xe147,	// (0x0004bdff) call5_swipe_1_pane_g2_ParamLimits

0xe147,	// (0x0004bdff) call5_swipe_1_pane_g2

0x0001,

0xfbf4,	// (0x0004d8ac) call5_swipe_1_pane_g_ParamLimits

0xfbf4,	// (0x0004d8ac) call5_swipe_1_pane_g

0xe153,	// (0x0004be0b) call5_swipe_1_pane_t1_ParamLimits

0xe153,	// (0x0004be0b) call5_swipe_1_pane_t1

0xa733,	// (0x000483eb) call5_swipe_2_pane_g1_ParamLimits

0xa733,	// (0x000483eb) call5_swipe_2_pane_g1

0xe168,	// (0x0004be20) call5_swipe_2_pane_g2_ParamLimits

0xe168,	// (0x0004be20) call5_swipe_2_pane_g2

0x0001,

0xfbf9,	// (0x0004d8b1) call5_swipe_2_pane_g_ParamLimits

0xfbf9,	// (0x0004d8b1) call5_swipe_2_pane_g

0xe174,	// (0x0004be2c) call5_swipe_2_pane_t1_ParamLimits

0xe174,	// (0x0004be2c) call5_swipe_2_pane_t1

0xe189,	// (0x0004be41) sc_swipe_pane_g1_ParamLimits

0xe189,	// (0x0004be41) sc_swipe_pane_g1

0xe196,	// (0x0004be4e) sc_swipe_pane_g2_ParamLimits

0xe196,	// (0x0004be4e) sc_swipe_pane_g2

0x0001,

0xfbfe,	// (0x0004d8b6) sc_swipe_pane_g_ParamLimits

0xfbfe,	// (0x0004d8b6) sc_swipe_pane_g

0xe1a2,	// (0x0004be5a) sc_swipe_pane_t1_ParamLimits

0xe1a2,	// (0x0004be5a) sc_swipe_pane_t1

0x9ffd,	// (0x00047cb5) main_cmail_launcher_pane

0x81d2,	// (0x00045e8a) aid_size_cell_cmail_l_ParamLimits

0x81d2,	// (0x00045e8a) aid_size_cell_cmail_l

0x81e0,	// (0x00045e98) grid_cmail_l_pane_ParamLimits

0x81e0,	// (0x00045e98) grid_cmail_l_pane

0x81ee,	// (0x00045ea6) cell_cmail_l_pane_ParamLimits

0x81ee,	// (0x00045ea6) cell_cmail_l_pane

0x8209,	// (0x00045ec1) cell_cmail_l_pane_g1_ParamLimits

0x8209,	// (0x00045ec1) cell_cmail_l_pane_g1

0x8215,	// (0x00045ecd) cell_cmail_l_pane_t1_ParamLimits

0x8215,	// (0x00045ecd) cell_cmail_l_pane_t1

0x822b,	// (0x00045ee3) cell_cmail_l_pane_t2_ParamLimits

0x822b,	// (0x00045ee3) cell_cmail_l_pane_t2

0x0001,

0xfc03,	// (0x0004d8bb) cell_cmail_l_pane_t_ParamLimits

0xfc03,	// (0x0004d8bb) cell_cmail_l_pane_t

0xa6da,	// (0x00048392) grid_highlight_pane_cp018_ParamLimits

0xa6da,	// (0x00048392) grid_highlight_pane_cp018

0x1b8e,	// (0x0003f846) main2_pane_ParamLimits

0x1b8e,	// (0x0003f846) main2_pane

0xa834,	// (0x000484ec) popup_sp_fs_action_menu_bg_pane_g1

0xa83c,	// (0x000484f4) popup_sp_fs_action_menu_bg_pane_g2

0xa844,	// (0x000484fc) popup_sp_fs_action_menu_bg_pane_g3

0xa84c,	// (0x00048504) popup_sp_fs_action_menu_bg_pane_g4

0xa854,	// (0x0004850c) popup_sp_fs_action_menu_bg_pane_g5

0xa85c,	// (0x00048514) popup_sp_fs_action_menu_bg_pane_g6

0xa864,	// (0x0004851c) popup_sp_fs_action_menu_bg_pane_g7

0xa86c,	// (0x00048524) popup_sp_fs_action_menu_bg_pane_g8

0xa874,	// (0x0004852c) popup_sp_fs_action_menu_bg_pane_g9

0xa87c,	// (0x00048534) popup_sp_fs_action_menu_bg_pane_g10

0xa87c,	// (0x00048534) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0004cdbd) popup_sp_fs_action_menu_bg_pane_g

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g3_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g3_g2

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0004ce6b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0004ce6b) list_medium_line_x2_t3_g3_g

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g3_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g3_t2

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0004ce72) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0004ce72) list_medium_line_x2_t3_g3_t

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g2_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_x2_t3_g2_g

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g2_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g2_t2

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0004ce72) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0004ce72) list_medium_line_x2_t3_g2_t

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g2

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g3

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0004ce7e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0004ce7e) list_medium_line_x2_t4_g4_g

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t2

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t3

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0004ce87) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0004ce87) list_medium_line_x2_t4_g4_t

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g2

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g3

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0004ce7e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0004ce7e) list_medium_line_x2_t2_g4_g

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g4_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0004ceee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0004ceee) list_medium_line_x2_t2_g4_t

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g3_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g3_g2

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0004ce6b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0004ce6b) list_medium_line_x2_t2_g3_g

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g3_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0004ceee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0004ceee) list_medium_line_x2_t2_g3_t

0x3adc,	// (0x00041794) main_sp_fs_list_pane_ParamLimits

0x3adc,	// (0x00041794) main_sp_fs_list_pane

0x3ae8,	// (0x000417a0) sp_fs_scroll_pane_ParamLimits

0x3ae8,	// (0x000417a0) sp_fs_scroll_pane

0xaed4,	// (0x00048b8c) list_medium_line_x2_t3_t1

0xaed4,	// (0x00048b8c) list_medium_line_x2_t3_t2

0xaed4,	// (0x00048b8c) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0004cf39) list_medium_line_x2_t3_t

0xaed4,	// (0x00048b8c) list_medium_line_x3_t4_t1

0xaed4,	// (0x00048b8c) list_medium_line_x3_t4_t2

0xaed4,	// (0x00048b8c) list_medium_line_x3_t4_t3

0xaed4,	// (0x00048b8c) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0004cf40) list_medium_line_x3_t4_t

0xaed4,	// (0x00048b8c) list_medium_line_x4_t5_t1

0xaed4,	// (0x00048b8c) list_medium_line_x4_t5_t2

0xaed4,	// (0x00048b8c) list_medium_line_x4_t5_t3

0xaed4,	// (0x00048b8c) list_medium_line_x4_t5_t4

0xaed4,	// (0x00048b8c) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0004cf49) list_medium_line_x4_t5_t

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g1

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g2

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g3

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g4_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0004ce7e) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0004ce7e) list_medium_line_t4_g4_g

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t1

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t2

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t3

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t4_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0004ce87) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0004ce87) list_medium_line_t4_g4_t

0x3be1,	// (0x00041899) chi_dic_find_pane_g1

0x49ca,	// (0x00042682) main_tport_pane

0xaed4,	// (0x00048b8c) list_medium_line_plain_t1

0xa733,	// (0x000483eb) list_medium_line_t2_g2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t2_g2_g1

0xa733,	// (0x000483eb) list_medium_line_t2_g2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_t2_g2_g

0xa97f,	// (0x00048637) list_medium_line_t2_g2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t2_g2_t1

0xa97f,	// (0x00048637) list_medium_line_t2_g2_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0004ceee) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0004ceee) list_medium_line_t2_g2_t

0x117d,	// (0x0003ee35) aid_sp_fs_list_icon_a_sm

0x1185,	// (0x0003ee3d) aid_sp_fs_list_icon_d

0x118d,	// (0x0003ee45) aid_sp_fs_text_primary

0xe2b0,	// (0x0004bf68) aid_sp_fs_text_secondary

0x9ffd,	// (0x00047cb5) list_medium_line

0x9ffd,	// (0x00047cb5) list_medium_line_g2

0x9ffd,	// (0x00047cb5) list_medium_line_g3

0x9ffd,	// (0x00047cb5) list_medium_line_plain

0x9ffd,	// (0x00047cb5) list_medium_line_plain_t2

0x9ffd,	// (0x00047cb5) list_medium_line_plain_t3

0x9ffd,	// (0x00047cb5) list_medium_line_right_icon

0x9ffd,	// (0x00047cb5) list_medium_line_right_iconx2

0x9ffd,	// (0x00047cb5) list_medium_line_t2

0x9ffd,	// (0x00047cb5) list_medium_line_t2_g2

0x9ffd,	// (0x00047cb5) list_medium_line_t2_g3

0x9ffd,	// (0x00047cb5) list_medium_line_t2_right_icon

0x9ffd,	// (0x00047cb5) list_medium_line_t2_right_iconx2

0x9ffd,	// (0x00047cb5) list_medium_line_t3

0x9ffd,	// (0x00047cb5) list_medium_line_t3_g2

0x9ffd,	// (0x00047cb5) list_medium_line_t3_g3

0x9ffd,	// (0x00047cb5) list_medium_line_t3_right_iconx2

0x9ffd,	// (0x00047cb5) list_medium_line_t4_g4

0x9ffd,	// (0x00047cb5) list_medium_line_x2

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t2_g2

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t2_g3

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t2_g4

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t3

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t3_g2

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t3_g3

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t3_g4

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t4_g2

0x9ffd,	// (0x00047cb5) list_medium_line_x2_t4_g4

0x9ffd,	// (0x00047cb5) list_medium_line_x3

0x9ffd,	// (0x00047cb5) list_medium_line_x3_t4

0x9ffd,	// (0x00047cb5) list_medium_line_x3_t4_g4

0x9ffd,	// (0x00047cb5) list_medium_line_x4_t4

0x9ffd,	// (0x00047cb5) list_medium_line_x4_t4_g7

0x9ffd,	// (0x00047cb5) list_medium_line_x4_t5

0x1196,	// (0x0003ee4e) list_single_fs_dyc_pane_ParamLimits

0x1196,	// (0x0003ee4e) list_single_fs_dyc_pane

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g1

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g2

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g3

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g4

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g5

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x4_t4_g7_g6

0xa741,	// (0x000483f9) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa741,	// (0x000483f9) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0b,	// (0x0004d7c3) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0b,	// (0x0004d7c3) list_medium_line_x4_t4_g7_g

0xa97f,	// (0x00048637) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x4_t4_g7_t1

0xa97f,	// (0x00048637) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x4_t4_g7_t2

0xa97f,	// (0x00048637) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x4_t4_g7_t3

0xb358,	// (0x00049010) list_medium_line_x4_t4_g7_t4_ParamLimits

0xb358,	// (0x00049010) list_medium_line_x4_t4_g7_t4

0xb358,	// (0x00049010) list_medium_line_x4_t4_g7_t5_ParamLimits

0xb358,	// (0x00049010) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1a,	// (0x0004d7d2) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1a,	// (0x0004d7d2) list_medium_line_x4_t4_g7_t

0x11d6,	// (0x0003ee8e) list_single_dyc_row_pane_ParamLimits

0x11d6,	// (0x0003ee8e) list_single_dyc_row_pane

0x817e,	// (0x00045e36) call5_gesture_pane_ParamLimits

0x817e,	// (0x00045e36) call5_gesture_pane

0x81b4,	// (0x00045e6c) call5_windows_pane_ParamLimits

0x81b4,	// (0x00045e6c) call5_windows_pane

0x8248,	// (0x00045f00) call5_swipe_1_pane_cp_ParamLimits

0x8248,	// (0x00045f00) call5_swipe_1_pane_cp

0x8254,	// (0x00045f0c) call5_swipe_2_pane_cp_ParamLimits

0x8254,	// (0x00045f0c) call5_swipe_2_pane_cp

0xa943,	// (0x000485fb) call5_image_pane_cp

0x8260,	// (0x00045f18) popup_call5_audio_first_window_cp_ParamLimits

0x8260,	// (0x00045f18) popup_call5_audio_first_window_cp

0xe189,	// (0x0004be41) call5_swipe_1_pane_g1_cp_ParamLimits

0xe189,	// (0x0004be41) call5_swipe_1_pane_g1_cp

0xe1b7,	// (0x0004be6f) call5_swipe_1_pane_g2_cp

0xe1a2,	// (0x0004be5a) call5_swipe_1_pane_t1_cp_ParamLimits

0xe1a2,	// (0x0004be5a) call5_swipe_1_pane_t1_cp

0xe189,	// (0x0004be41) call5_swipe_2_pane_g1_cp_ParamLimits

0xe189,	// (0x0004be41) call5_swipe_2_pane_g1_cp

0xe1bf,	// (0x0004be77) call5_swipe_2_pane_g2_cp

0xe1c7,	// (0x0004be7f) call5_swipe_2_pane_t1_cp_ParamLimits

0xe1c7,	// (0x0004be7f) call5_swipe_2_pane_t1_cp

0xa6da,	// (0x00048392) main_sp_fs_email_pane

0xdd79,	// (0x0004ba31) main_sp_fs_listscroll_pane_te

0x1279,	// (0x0003ef31) popup_sp_fs_action_menu_pane_ParamLimits

0x1279,	// (0x0003ef31) popup_sp_fs_action_menu_pane

0xa965,	// (0x0004861d) bg_sp_fs_ctrlbar_pane_g1

0xe1dc,	// (0x0004be94) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe1e5,	// (0x0004be9d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe1ee,	// (0x0004bea6) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa965,	// (0x0004861d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc08,	// (0x0004d8c0) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc6c3,	// (0x0004a37b) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc6c3,	// (0x0004a37b) bg_sp_fs_ctrlbar_ddmenu_pane

0xe1f7,	// (0x0004beaf) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe1f7,	// (0x0004beaf) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe203,	// (0x0004bebb) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe203,	// (0x0004bebb) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc11,	// (0x0004d8c9) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc11,	// (0x0004d8c9) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe20f,	// (0x0004bec7) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe20f,	// (0x0004bec7) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa965,	// (0x0004861d) list_medium_line_t2_right_icon_g1

0xaed4,	// (0x00048b8c) list_medium_line_t2_right_icon_t1

0xaed4,	// (0x00048b8c) list_medium_line_t2_right_icon_t2

0x0001,

0xfc16,	// (0x0004d8ce) list_medium_line_t2_right_icon_t

0xb989,	// (0x00049641) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb989,	// (0x00049641) bg_sp_fs_ctrlbar_pane

0x82c7,	// (0x00045f7f) main_sp_fs_ctrlbar_button_pane_cp01

0x82cf,	// (0x00045f87) main_sp_fs_ctrlbar_ddmenu_pane

0xe263,	// (0x0004bf1b) main_sp_fs_ctrlbar_pane_g1

0xe26f,	// (0x0004bf27) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc1b,	// (0x0004d8d3) main_sp_fs_ctrlbar_pane_g

0x830d,	// (0x00045fc5) main_sp_fs_ctrlbar_pane_t1

0x834a,	// (0x00046002) main_sp_fs_ctrlbar_pane

0x8364,	// (0x0004601c) main_sp_fs_listscroll_pane_te_cp01

0x12bf,	// (0x0003ef77) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x12bf,	// (0x0003ef77) popup_sp_fs_action_menu_pane_cp01

0xa6da,	// (0x00048392) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6da,	// (0x00048392) bg_sp_fs_highlight_list_pane_cp01

0x12df,	// (0x0003ef97) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x12df,	// (0x0003ef97) sp_fs_action_menu_list_gene_pane_g1

0xe2b9,	// (0x0004bf71) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe2b9,	// (0x0004bf71) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc29,	// (0x0004d8e1) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc29,	// (0x0004d8e1) sp_fs_action_menu_list_gene_pane_g

0x12ee,	// (0x0003efa6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x12ee,	// (0x0003efa6) sp_fs_action_menu_list_gene_pane_t1

0x1306,	// (0x0003efbe) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1306,	// (0x0003efbe) sp_fs_action_menu_list_gene_pane

0xe2c6,	// (0x0004bf7e) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe2c6,	// (0x0004bf7e) popup_sp_fs_action_menu_bg_pane

0x1329,	// (0x0003efe1) sp_fs_action_menu_list_pane_ParamLimits

0x1329,	// (0x0003efe1) sp_fs_action_menu_list_pane

0x134d,	// (0x0003f005) sp_fs_scroll_pane_cp01_ParamLimits

0x134d,	// (0x0003f005) sp_fs_scroll_pane_cp01

0xaed4,	// (0x00048b8c) list_medium_line_plain_t2_t1

0xaed4,	// (0x00048b8c) list_medium_line_plain_t2_t2

0x0001,

0xfc16,	// (0x0004d8ce) list_medium_line_plain_t2_t

0xaed4,	// (0x00048b8c) list_medium_line_plain_t3_t1

0xaed4,	// (0x00048b8c) list_medium_line_plain_t3_t2

0xaed4,	// (0x00048b8c) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0004cf39) list_medium_line_plain_t3_t

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g2_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_x2_t2_g2_g

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g2_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0004ceee) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0004ceee) list_medium_line_x2_t2_g2_t

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g2_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_x2_t4_g2_g

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t2

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t3

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0004ce87) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0004ce87) list_medium_line_x2_t4_g2_t

0xa965,	// (0x0004861d) list_medium_line_t3_right_iconx2_g1

0xa965,	// (0x0004861d) list_medium_line_t3_right_iconx2_g2

0xa965,	// (0x0004861d) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0004d05a) list_medium_line_t3_right_iconx2_g

0xaed4,	// (0x00048b8c) list_medium_line_t3_right_iconx2_t1

0xaed4,	// (0x00048b8c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc16,	// (0x0004d8ce) list_medium_line_t3_right_iconx2_t

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g1

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g2

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g3

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0004ce7e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0004ce7e) list_medium_line_x3_t4_g4_g

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t1

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t2

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t3

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0004ce87) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0004ce87) list_medium_line_x3_t4_g4_t

0x1373,	// (0x0003f02b) list_single_dyc_row_text_pane_t1_ParamLimits

0x1373,	// (0x0003f02b) list_single_dyc_row_text_pane_t1

0x13b0,	// (0x0003f068) list_single_dyc_row_text_pane_t2_ParamLimits

0x13b0,	// (0x0003f068) list_single_dyc_row_text_pane_t2

0x1426,	// (0x0003f0de) list_single_dyc_row_text_pane_t3_ParamLimits

0x1426,	// (0x0003f0de) list_single_dyc_row_text_pane_t3

0x0005,

0xfc2e,	// (0x0004d8e6) list_single_dyc_row_text_pane_t_ParamLimits

0xfc2e,	// (0x0004d8e6) list_single_dyc_row_text_pane_t

0x14fd,	// (0x0003f1b5) list_single_dyc_row_pane_g1_ParamLimits

0x14fd,	// (0x0003f1b5) list_single_dyc_row_pane_g1

0x1509,	// (0x0003f1c1) list_single_dyc_row_pane_g2_ParamLimits

0x1509,	// (0x0003f1c1) list_single_dyc_row_pane_g2

0x1515,	// (0x0003f1cd) list_single_dyc_row_pane_g3_ParamLimits

0x1515,	// (0x0003f1cd) list_single_dyc_row_pane_g3

0x1521,	// (0x0003f1d9) list_single_dyc_row_pane_g4_ParamLimits

0x1521,	// (0x0003f1d9) list_single_dyc_row_pane_g4

0x0003,

0xfc3b,	// (0x0004d8f3) list_single_dyc_row_pane_g_ParamLimits

0xfc3b,	// (0x0004d8f3) list_single_dyc_row_pane_g

0x152d,	// (0x0003f1e5) list_single_dyc_row_text_pane_ParamLimits

0x152d,	// (0x0003f1e5) list_single_dyc_row_text_pane

0x9ffd,	// (0x00047cb5) bg_sp_fs_scroll_pane

0xe2d4,	// (0x0004bf8c) thumb_sp_fs_scroll_pane

0xa733,	// (0x000483eb) list_medium_line_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_g1

0xa97f,	// (0x00048637) list_medium_line_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t1

0xa733,	// (0x000483eb) list_medium_line_x2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_g1

0xa733,	// (0x000483eb) list_medium_line_x2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_x2_g

0xa97f,	// (0x00048637) list_medium_line_x2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t1

0xa733,	// (0x000483eb) list_medium_line_x3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x3_g1

0xd813,	// (0x0004b4cb) list_medium_line_x3_g2_ParamLimits

0xd813,	// (0x0004b4cb) list_medium_line_x3_g2

0x0001,

0xfc44,	// (0x0004d8fc) list_medium_line_x3_g_ParamLimits

0xfc44,	// (0x0004d8fc) list_medium_line_x3_g

0xe2dd,	// (0x0004bf95) list_medium_line_x3_t1_ParamLimits

0xe2dd,	// (0x0004bf95) list_medium_line_x3_t1

0xe2f1,	// (0x0004bfa9) thumb_sp_fs_scroll_pane_g1

0xe2fa,	// (0x0004bfb2) thumb_sp_fs_scroll_pane_g2

0xe303,	// (0x0004bfbb) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc49,	// (0x0004d901) thumb_sp_fs_scroll_pane_g

0xe2f1,	// (0x0004bfa9) bg_sp_fs_scroll_pane_g1

0xe2fa,	// (0x0004bfb2) bg_sp_fs_scroll_pane_g2

0xe303,	// (0x0004bfbb) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc49,	// (0x0004d901) bg_sp_fs_scroll_pane_g

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g1

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g2

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g3

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0004ce7e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0004ce7e) list_medium_line_x2_t3_g4_g

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g4_t1

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g4_t2

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0004ce72) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0004ce72) list_medium_line_x2_t3_g4_t

0xa733,	// (0x000483eb) list_medium_line_g2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_g2_g1

0xa733,	// (0x000483eb) list_medium_line_g2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_g2_g

0xa97f,	// (0x00048637) list_medium_line_g2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_g2_t1

0xa733,	// (0x000483eb) list_medium_line_t3_g2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t3_g2_g1

0xa733,	// (0x000483eb) list_medium_line_t3_g2_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0004ce79) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0004ce79) list_medium_line_t3_g2_g

0xa97f,	// (0x00048637) list_medium_line_t3_g2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_g2_t1

0xa97f,	// (0x00048637) list_medium_line_t3_g2_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_g2_t2

0xa97f,	// (0x00048637) list_medium_line_t3_g2_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0004ce72) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0004ce72) list_medium_line_t3_g2_t

0xa965,	// (0x0004861d) list_medium_line_right_icon_g1

0xaed4,	// (0x00048b8c) list_medium_line_right_icon_t1

0xa733,	// (0x000483eb) list_medium_line_t2_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t2_g1

0xa97f,	// (0x00048637) list_medium_line_t2_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t2_t1

0xa97f,	// (0x00048637) list_medium_line_t2_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0004ceee) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0004ceee) list_medium_line_t2_t

0xa733,	// (0x000483eb) list_medium_line_t3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t3_g1

0xa97f,	// (0x00048637) list_medium_line_t3_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_t1

0xa97f,	// (0x00048637) list_medium_line_t3_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_t2

0xa97f,	// (0x00048637) list_medium_line_t3_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0004ce72) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0004ce72) list_medium_line_t3_t

0xa733,	// (0x000483eb) list_medium_line_g3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_g3_g1

0xa733,	// (0x000483eb) list_medium_line_g3_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_g3_g2

0xa733,	// (0x000483eb) list_medium_line_g3_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0004ce6b) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0004ce6b) list_medium_line_g3_g

0xa97f,	// (0x00048637) list_medium_line_g3_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_g3_t1

0xa733,	// (0x000483eb) list_medium_line_t2_g3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t2_g3_g1

0xa733,	// (0x000483eb) list_medium_line_t2_g3_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t2_g3_g2

0xa733,	// (0x000483eb) list_medium_line_t2_g3_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0004ce6b) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0004ce6b) list_medium_line_t2_g3_g

0xa97f,	// (0x00048637) list_medium_line_t2_g3_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t2_g3_t1

0xa97f,	// (0x00048637) list_medium_line_t2_g3_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0004ceee) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0004ceee) list_medium_line_t2_g3_t

0xa733,	// (0x000483eb) list_medium_line_t3_g3_g1_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t3_g3_g1

0xa733,	// (0x000483eb) list_medium_line_t3_g3_g2_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t3_g3_g2

0xa733,	// (0x000483eb) list_medium_line_t3_g3_g3_ParamLimits

0xa733,	// (0x000483eb) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0004ce6b) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0004ce6b) list_medium_line_t3_g3_g

0xa97f,	// (0x00048637) list_medium_line_t3_g3_t1_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_g3_t1

0xa97f,	// (0x00048637) list_medium_line_t3_g3_t2_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_g3_t2

0xa97f,	// (0x00048637) list_medium_line_t3_g3_t3_ParamLimits

0xa97f,	// (0x00048637) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0004ce72) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0004ce72) list_medium_line_t3_g3_t

0xa965,	// (0x0004861d) list_medium_line_right_iconx2_g1

0xa965,	// (0x0004861d) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0004d055) list_medium_line_right_iconx2_g

0xaed4,	// (0x00048b8c) list_medium_line_right_iconx2_t1

0xa965,	// (0x0004861d) list_medium_line_t2_right_iconx2_g1

0xa965,	// (0x0004861d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0004d055) list_medium_line_t2_right_iconx2_g

0xaed4,	// (0x00048b8c) list_medium_line_t2_right_iconx2_t1

0xaed4,	// (0x00048b8c) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc16,	// (0x0004d8ce) list_medium_line_t2_right_iconx2_t

0xaed4,	// (0x00048b8c) list_medium_line_x4_t4_t1

0xaed4,	// (0x00048b8c) list_medium_line_x4_t4_t2

0xaed4,	// (0x00048b8c) list_medium_line_x4_t4_t3

0xaed4,	// (0x00048b8c) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0004cf40) list_medium_line_x4_t4_t

0x839f,	// (0x00046057) tport_appsw_pane_ParamLimits

0x839f,	// (0x00046057) tport_appsw_pane

0x83ad,	// (0x00046065) tport_contact_pane_ParamLimits

0x83ad,	// (0x00046065) tport_contact_pane

0x83bd,	// (0x00046075) tport_listscroll_pane_ParamLimits

0x83bd,	// (0x00046075) tport_listscroll_pane

0x83cd,	// (0x00046085) cell_tport_appsw_pane_ParamLimits

0x83cd,	// (0x00046085) cell_tport_appsw_pane

0xa741,	// (0x000483f9) tport_appsw_pane_g1_ParamLimits

0xa741,	// (0x000483f9) tport_appsw_pane_g1

0x83fa,	// (0x000460b2) tport_contact_pane_g1

0x8403,	// (0x000460bb) tport_contact_pane_t1

0x8411,	// (0x000460c9) tport_contact_pane_t2

0x0001,

0xfc50,	// (0x0004d908) tport_contact_pane_t

0xe30c,	// (0x0004bfc4) list_tport_pane

0xe315,	// (0x0004bfcd) scroll_pane_cp_030

0x8427,	// (0x000460df) cell_tport_appsw_pane_g1

0x8437,	// (0x000460ef) cell_tport_appsw_pane_t1

0x8445,	// (0x000460fd) grid_highlight_pane_cp019

0x844d,	// (0x00046105) list_tport_double_graphic_pane_ParamLimits

0x844d,	// (0x00046105) list_tport_double_graphic_pane

0xa6da,	// (0x00048392) list_highlight_pane_cp023_ParamLimits

0xa6da,	// (0x00048392) list_highlight_pane_cp023

0x845a,	// (0x00046112) list_tport_double_graphic_pane_g1_ParamLimits

0x845a,	// (0x00046112) list_tport_double_graphic_pane_g1

0x8467,	// (0x0004611f) list_tport_double_graphic_pane_t1_ParamLimits

0x8467,	// (0x0004611f) list_tport_double_graphic_pane_t1

0x847c,	// (0x00046134) list_tport_double_graphic_pane_t2_ParamLimits

0x847c,	// (0x00046134) list_tport_double_graphic_pane_t2

0x0001,

0xfc5c,	// (0x0004d914) list_tport_double_graphic_pane_t_ParamLimits

0xfc5c,	// (0x0004d914) list_tport_double_graphic_pane_t

0x9ffd,	// (0x00047cb5) main_cale_note_pane

0x6615,	// (0x000442cd) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6615,	// (0x000442cd) cell_vitu2_function_top_wide_pane_cp01

0x7d88,	// (0x00045a40) wait_bar_pane_cp05_ParamLimits

0xa6da,	// (0x00048392) listscroll_cmail_pane

0xe326,	// (0x0004bfde) list_cmail_pane

0x848e,	// (0x00046146) list_cmail_body_pane

0x84a8,	// (0x00046160) list_single_cmail_header_caption_pane

0x84c8,	// (0x00046180) list_single_cmail_header_detail_pane_ParamLimits

0x84c8,	// (0x00046180) list_single_cmail_header_detail_pane

0xe33d,	// (0x0004bff5) list_single_cmail_header_caption_pane_t1

0x154c,	// (0x0003f204) list_single_cmail_header_detail_pane_g1_ParamLimits

0x154c,	// (0x0003f204) list_single_cmail_header_detail_pane_g1

0x1564,	// (0x0003f21c) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1564,	// (0x0003f21c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc61,	// (0x0004d919) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc61,	// (0x0004d919) list_single_cmail_header_detail_pane_g

0x1570,	// (0x0003f228) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1570,	// (0x0003f228) list_single_cmail_header_detail_pane_t1

0x15d0,	// (0x0003f288) list_single_cmail_header_editor_pane_bg_ParamLimits

0x15d0,	// (0x0003f288) list_single_cmail_header_editor_pane_bg

0xdf6f,	// (0x0004bc27) list_cmail_body_pane_g1

0xe361,	// (0x0004c019) list_cmail_body_pane_t1

0xd2b8,	// (0x0004af70) list_single_cmail_header_editor_pane_bg_g1

0xab9d,	// (0x00048855) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd2c8,	// (0x0004af80) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd2c0,	// (0x0004af78) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd50c,	// (0x0004b1c4) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd2e8,	// (0x0004afa0) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd2d8,	// (0x0004af90) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd2e0,	// (0x0004af98) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xab7d,	// (0x00048835) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x84fe,	// (0x000461b6) calenote_gesture_pane_ParamLimits

0x84fe,	// (0x000461b6) calenote_gesture_pane

0x8518,	// (0x000461d0) calenote_window_pane_ParamLimits

0x8518,	// (0x000461d0) calenote_window_pane

0xe36f,	// (0x0004c027) popup_note_window_cp01

0x8530,	// (0x000461e8) calenote_swipe_1_pane_ParamLimits

0x8530,	// (0x000461e8) calenote_swipe_1_pane

0x8254,	// (0x00045f0c) calenote_swipe_2_pane_ParamLimits

0x8254,	// (0x00045f0c) calenote_swipe_2_pane

0xe189,	// (0x0004be41) calenote_swipe_1_pane_g1_ParamLimits

0xe189,	// (0x0004be41) calenote_swipe_1_pane_g1

0xe196,	// (0x0004be4e) calenote_swipe_1_pane_g2_ParamLimits

0xe196,	// (0x0004be4e) calenote_swipe_1_pane_g2

0x0001,

0xfbfe,	// (0x0004d8b6) calenote_swipe_1_pane_g_ParamLimits

0xfbfe,	// (0x0004d8b6) calenote_swipe_1_pane_g

0xe381,	// (0x0004c039) calenote_swipe_1_pane_t1_ParamLimits

0xe381,	// (0x0004c039) calenote_swipe_1_pane_t1

0xe189,	// (0x0004be41) calenote_swipe_2_pane_g1_ParamLimits

0xe189,	// (0x0004be41) calenote_swipe_2_pane_g1

0xe3a0,	// (0x0004c058) calenote_swipe_2_pane_g2_ParamLimits

0xe3a0,	// (0x0004c058) calenote_swipe_2_pane_g2

0x0001,

0xfc6d,	// (0x0004d925) calenote_swipe_2_pane_g_ParamLimits

0xfc6d,	// (0x0004d925) calenote_swipe_2_pane_g

0xe3ac,	// (0x0004c064) calenote_swipe_2_pane_t1_ParamLimits

0xe3ac,	// (0x0004c064) calenote_swipe_2_pane_t1

0x9ffd,	// (0x00047cb5) main_mup_navstr_pane

0x549c,	// (0x00043154) main_mup3_pane_t7_ParamLimits

0x549c,	// (0x00043154) main_mup3_pane_t7

0x5caa,	// (0x00043962) main_mp4_pane_g6_ParamLimits

0x5caa,	// (0x00043962) main_mp4_pane_g6

0x6038,	// (0x00043cf0) main_image3_pane_t4_ParamLimits

0x6038,	// (0x00043cf0) main_image3_pane_t4

0x8543,	// (0x000461fb) popup_navstr_preview_pane_ParamLimits

0x8543,	// (0x000461fb) popup_navstr_preview_pane

0x854f,	// (0x00046207) scroll_navstr_pane_ParamLimits

0x854f,	// (0x00046207) scroll_navstr_pane

0x9ffd,	// (0x00047cb5) bg_popup_preview_window_pane_cp04

0xe3d3,	// (0x0004c08b) popup_navstr_preview_pane_t1

0x855b,	// (0x00046213) scroll_navstr_pane_g1_ParamLimits

0x855b,	// (0x00046213) scroll_navstr_pane_g1

0x8568,	// (0x00046220) scroll_navstr_pane_t1_ParamLimits

0x8568,	// (0x00046220) scroll_navstr_pane_t1

0xe378,	// (0x0004c030) bg_button_pane_cp014

0xe378,	// (0x0004c030) bg_button_pane_cp030

0x121f,	// (0x0003eed7) list_double_fisheye_pane_g4_ParamLimits

0x121f,	// (0x0003eed7) list_double_fisheye_pane_g4

0x122b,	// (0x0003eee3) list_double_fisheye_pane_g5_ParamLimits

0x122b,	// (0x0003eee3) list_double_fisheye_pane_g5

0xd821,	// (0x0004b4d9) sp_fs_scroll_pane_cp03

0xe263,	// (0x0004bf1b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe26f,	// (0x0004bf27) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc1b,	// (0x0004d8d3) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x830d,	// (0x00045fc5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe335,	// (0x0004bfed) sp_fs_scroll_pane_cp02

0xa89f,	// (0x00048557) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa89f,	// (0x00048557) popup_sp_fs_calendar_preview_list_single_pane

0x9ffd,	// (0x00047cb5) main_cam6_pano_pane

0xa6da,	// (0x00048392) main_mup3_pane_ParamLimits

0x9ffd,	// (0x00047cb5) main_phacti_pane

0x7c5b,	// (0x00045913) bg_button_pane_cp11

0x7c73,	// (0x0004592b) main_mobtv_info_pane_g2_ParamLimits

0x7c73,	// (0x0004592b) main_mobtv_info_pane_g2

0x0001,

0xfb7b,	// (0x0004d833) main_mobtv_info_pane_g_ParamLimits

0xfb7b,	// (0x0004d833) main_mobtv_info_pane_g

0x7e25,	// (0x00045add) sc_clock_pane_t5_ParamLimits

0x7e25,	// (0x00045add) sc_clock_pane_t5

0x801d,	// (0x00045cd5) main_radioblah_pane_g1_ParamLimits

0xe0d5,	// (0x0004bd8d) main_radioblah_pane_t3_ParamLimits

0xe0d5,	// (0x0004bd8d) main_radioblah_pane_t3

0xe0ed,	// (0x0004bda5) main_radioblah_pane_t4_ParamLimits

0xe0ed,	// (0x0004bda5) main_radioblah_pane_t4

0x803b,	// (0x00045cf3) main_radioblah_text_pane_ParamLimits

0x803b,	// (0x00045cf3) main_radioblah_text_pane

0x8048,	// (0x00045d00) main_radioblah_info_pane_g1_ParamLimits

0x80e1,	// (0x00045d99) main_radioblah_info_pane_t4_ParamLimits

0x80e1,	// (0x00045d99) main_radioblah_info_pane_t4

0xa6da,	// (0x00048392) main_sp_fs_calendar_pane

0x857a,	// (0x00046232) main_phacti_pane_g1

0x8582,	// (0x0004623a) phacti_note_pane_ParamLimits

0x8582,	// (0x0004623a) phacti_note_pane

0xe3ea,	// (0x0004c0a2) phacti_term_pane_ParamLimits

0xe3ea,	// (0x0004c0a2) phacti_term_pane

0xe3ff,	// (0x0004c0b7) phacti_note_pane_t1_ParamLimits

0xe3ff,	// (0x0004c0b7) phacti_note_pane_t1

0x15e7,	// (0x0003f29f) phacti_term_pane_g1

0x15ef,	// (0x0003f2a7) phacti_term_pane_t1_ParamLimits

0x15ef,	// (0x0003f2a7) phacti_term_pane_t1

0xe416,	// (0x0004c0ce) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe41e,	// (0x0004c0d6) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc77,	// (0x0004d92f) popup_sp_fs_calendar_preview_list_single_pane_g

0xe426,	// (0x0004c0de) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe426,	// (0x0004c0de) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe43c,	// (0x0004c0f4) aid_popup_sp_fs_bg_corner_pane

0xa965,	// (0x0004861d) popup_sp_fs_calendar_preview_bg_pane_g1

0x9ffd,	// (0x00047cb5) popup_sp_fs_calendar_preview_bg_pane

0xe444,	// (0x0004c0fc) popup_sp_fs_calendar_preview_list_pane

0xb989,	// (0x00049641) bg_main_sp_fs_cale_pane_ParamLimits

0xb989,	// (0x00049641) bg_main_sp_fs_cale_pane

0x1622,	// (0x0003f2da) listscroll_cale_mrui_pane_ParamLimits

0x1622,	// (0x0003f2da) listscroll_cale_mrui_pane

0x1637,	// (0x0003f2ef) listscroll_sp_fs_schedule_track_pane

0x1640,	// (0x0003f2f8) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1640,	// (0x0003f2f8) main_sp_fs_ctrlbar_pane_cp01

0xe44c,	// (0x0004c104) main_sp_fs_ribbon_pane

0x1653,	// (0x0003f30b) popup_sp_fs_cale_preview_window

0x85e5,	// (0x0004629d) list_single_sp_fs_schedule_track_pane_ParamLimits

0x85e5,	// (0x0004629d) list_single_sp_fs_schedule_track_pane

0xa68c,	// (0x00048344) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa68c,	// (0x00048344) bg_sp_fs_highlight_list_pane_cp03

0x85fc,	// (0x000462b4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x85fc,	// (0x000462b4) list_single_sp_fs_schedule_track_pane_g1

0x8608,	// (0x000462c0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8608,	// (0x000462c0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc7c,	// (0x0004d934) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc7c,	// (0x0004d934) list_single_sp_fs_schedule_track_pane_g

0x8614,	// (0x000462cc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8614,	// (0x000462cc) list_single_sp_fs_schedule_track_pane_t1

0x8632,	// (0x000462ea) sp_fs_schedule_track_pane_ParamLimits

0x8632,	// (0x000462ea) sp_fs_schedule_track_pane

0xe454,	// (0x0004c10c) sp_fs_schedule_track_pane_g1

0xe45c,	// (0x0004c114) sp_fs_schedule_track_pane_g2

0xe464,	// (0x0004c11c) sp_fs_schedule_track_pane_g3

0xe46c,	// (0x0004c124) sp_fs_schedule_track_pane_g4

0xe474,	// (0x0004c12c) sp_fs_schedule_track_pane_g5

0x0004,

0xfc81,	// (0x0004d939) sp_fs_schedule_track_pane_g

0xd2b8,	// (0x0004af70) bg_sp_fs_schedule_viewer_highlight_g1

0xab9d,	// (0x00048855) bg_sp_fs_schedule_viewer_highlight_g2

0xd2c0,	// (0x0004af78) bg_sp_fs_schedule_viewer_highlight_g3

0xd2c8,	// (0x0004af80) bg_sp_fs_schedule_viewer_highlight_g4

0xd50c,	// (0x0004b1c4) bg_sp_fs_schedule_viewer_highlight_g5

0xd2d8,	// (0x0004af90) bg_sp_fs_schedule_viewer_highlight_g6

0xd2e0,	// (0x0004af98) bg_sp_fs_schedule_viewer_highlight_g7

0xd2e8,	// (0x0004afa0) bg_sp_fs_schedule_viewer_highlight_g8

0xab7d,	// (0x00048835) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc8c,	// (0x0004d944) bg_sp_fs_schedule_viewer_highlight_g

0x9ffd,	// (0x00047cb5) bg_main_sp_fs_ribbon_pane

0x8644,	// (0x000462fc) main_sp_fs_ribbon_pane_g1

0xe47c,	// (0x0004c134) main_sp_fs_ribbon_pane_t1

0x864d,	// (0x00046305) main_sp_fs_ribbon_pane_t2

0xe48b,	// (0x0004c143) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9f,	// (0x0004d957) main_sp_fs_ribbon_pane_t

0xe49a,	// (0x0004c152) main_sp_fs_ribbon_scheduler_pane

0xe4a2,	// (0x0004c15a) bg_main_sp_fs_ribbon_pane_g1

0xe4ab,	// (0x0004c163) bg_main_sp_fs_ribbon_pane_g2

0xe4b4,	// (0x0004c16c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfca6,	// (0x0004d95e) bg_main_sp_fs_ribbon_pane_g

0xe4bc,	// (0x0004c174) main_sp_fs_ribbon_scheduler_pane_g1

0xe4c5,	// (0x0004c17d) main_sp_fs_ribbon_scheduler_pane_g2

0xe4ce,	// (0x0004c186) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcad,	// (0x0004d965) main_sp_fs_ribbon_scheduler_pane_g

0xe4d7,	// (0x0004c18f) list_cale_mrui_pane

0x865c,	// (0x00046314) sp_fs_scroll_pane_cp07_ParamLimits

0x865c,	// (0x00046314) sp_fs_scroll_pane_cp07

0x8678,	// (0x00046330) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8678,	// (0x00046330) bg_sp_fs_schedule_viewer_highlight

0xe4e4,	// (0x0004c19c) list_single_sp_fs_schedule_track_pane_cp01

0xe4ec,	// (0x0004c1a4) list_sp_fs_schedule_track_pane

0xe4f4,	// (0x0004c1ac) sp_fs_scroll_pane_cp06_ParamLimits

0xe4f4,	// (0x0004c1ac) sp_fs_scroll_pane_cp06

0xa965,	// (0x0004861d) bgmain_sp_fs_calendar_pane_g1

0x1665,	// (0x0003f31d) list_single_cale_mrui_pane_ParamLimits

0x1665,	// (0x0003f31d) list_single_cale_mrui_pane

0x1689,	// (0x0003f341) list_single_cale_mrui_row_pane_ParamLimits

0x1689,	// (0x0003f341) list_single_cale_mrui_row_pane

0x1696,	// (0x0003f34e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1696,	// (0x0003f34e) list_single_cale_mrui_row_pane_g1

0x16ce,	// (0x0003f386) list_single_cale_mrui_row_pane_t1_ParamLimits

0x16ce,	// (0x0003f386) list_single_cale_mrui_row_pane_t1

0x16e0,	// (0x0003f398) list_single_cale_mrui_row_pane_t2_ParamLimits

0x16e0,	// (0x0003f398) list_single_cale_mrui_row_pane_t2

0x1746,	// (0x0003f3fe) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1746,	// (0x0003f3fe) list_single_cale_mrui_row_pane_t3

0x1775,	// (0x0003f42d) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1775,	// (0x0003f42d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcbb,	// (0x0004d973) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcbb,	// (0x0004d973) list_single_cale_mrui_row_pane_t

0x17a4,	// (0x0003f45c) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x17a4,	// (0x0003f45c) list_single_cmail_header_editor_pane_bg_cp01

0x17ce,	// (0x0003f486) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x17ce,	// (0x0003f486) list_single_cmail_header_editor_pane_bg_cp02

0x8685,	// (0x0004633d) main_radioblah_text_pane_t1_ParamLimits

0x8685,	// (0x0004633d) main_radioblah_text_pane_t1

0xe513,	// (0x0004c1cb) cam6_indi_pane_cp01

0xe51b,	// (0x0004c1d3) cam6_mode_pane_cp01

0xe523,	// (0x0004c1db) cam6_pano_pane

0xe52c,	// (0x0004c1e4) cam6_zoom_pane_cp01

0xe536,	// (0x0004c1ee) cam6_pano_image_pane

0xe53f,	// (0x0004c1f7) cam6_pano_pane_g1

0xdf6f,	// (0x0004bc27) cam6_pano_pane_g2

0xe548,	// (0x0004c200) cam6_pano_pane_g3

0xe551,	// (0x0004c209) cam6_pano_pane_g4

0xcf9b,	// (0x0004ac53) cam6_pano_pane_g5

0xe55a,	// (0x0004c212) cam6_pano_pane_g6

0xe562,	// (0x0004c21a) cam6_pano_pane_g7

0xe56a,	// (0x0004c222) cam6_pano_pane_g8

0xe573,	// (0x0004c22b) cam6_pano_pane_g9

0x0008,

0xfcc4,	// (0x0004d97c) cam6_pano_pane_g

0x9ffd,	// (0x00047cb5) main_browser_tag_pane

0xe3cb,	// (0x0004c083) grid_navstr_albumart_pane

0xe57e,	// (0x0004c236) cell_navstr_albumart_pane_ParamLimits

0xe57e,	// (0x0004c236) cell_navstr_albumart_pane

0xe59a,	// (0x0004c252) cell_navstr_albumart_pane_g1

0xc4aa,	// (0x0004a162) cell_navstr_albumart_pane_g2

0xc4ba,	// (0x0004a172) cell_navstr_albumart_pane_g3

0xc4b2,	// (0x0004a16a) cell_navstr_albumart_pane_g4

0x0003,

0xfcd7,	// (0x0004d98f) cell_navstr_albumart_pane_g

0x869f,	// (0x00046357) bt_list_pane_ParamLimits

0x869f,	// (0x00046357) bt_list_pane

0x86b8,	// (0x00046370) bt_list_pane_t1

0x86c7,	// (0x0004637f) bt_list_pane_t2

0x0001,

0xfce0,	// (0x0004d998) bt_list_pane_t

0x9ffd,	// (0x00047cb5) main_cale_prevew_pane

0x86d6,	// (0x0004638e) popup_cale_preview_window_ParamLimits

0x86d6,	// (0x0004638e) popup_cale_preview_window

0xa6da,	// (0x00048392) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6da,	// (0x00048392) bg_popup_preview_window_pane_cp05

0xe5a2,	// (0x0004c25a) list_cale_preview_pane_ParamLimits

0xe5a2,	// (0x0004c25a) list_cale_preview_pane

0x86f3,	// (0x000463ab) list_double_cale_preview_pane_ParamLimits

0x86f3,	// (0x000463ab) list_double_cale_preview_pane

0x8707,	// (0x000463bf) list_single_cale_preview_pane_ParamLimits

0x8707,	// (0x000463bf) list_single_cale_preview_pane

0x871f,	// (0x000463d7) list_single_cale_preview_pane_g1

0x8727,	// (0x000463df) list_single_cale_preview_pane_t1_ParamLimits

0x8727,	// (0x000463df) list_single_cale_preview_pane_t1

0x873c,	// (0x000463f4) list_double_cale_preview_pane_g1

0x8744,	// (0x000463fc) list_double_cale_preview_pane_t1_ParamLimits

0x8744,	// (0x000463fc) list_double_cale_preview_pane_t1

0x8759,	// (0x00046411) list_double_cale_preview_pane_t2_ParamLimits

0x8759,	// (0x00046411) list_double_cale_preview_pane_t2

0x0001,

0xfce5,	// (0x0004d99d) list_double_cale_preview_pane_t_ParamLimits

0xfce5,	// (0x0004d99d) list_double_cale_preview_pane_t

0x9ffd,	// (0x00047cb5) main_ezdial_pane

0xa6da,	// (0x00048392) main_sp_fs_email_pane_ParamLimits

0x826e,	// (0x00045f26) cmail_ddmenu_btn01_pane_ParamLimits

0x826e,	// (0x00045f26) cmail_ddmenu_btn01_pane

0x828b,	// (0x00045f43) cmail_ddmenu_btn02_pane_ParamLimits

0x828b,	// (0x00045f43) cmail_ddmenu_btn02_pane

0x82a9,	// (0x00045f61) cmail_ddmenu_btn03_pane_ParamLimits

0x82a9,	// (0x00045f61) cmail_ddmenu_btn03_pane

0x834a,	// (0x00046002) main_sp_fs_ctrlbar_pane_ParamLimits

0x8364,	// (0x0004601c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x848e,	// (0x00046146) list_cmail_body_pane_ParamLimits

0xe34b,	// (0x0004c003) bg_button_pane_cp12

0xe354,	// (0x0004c00c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe354,	// (0x0004c00c) list_single_cmail_header_detail_pane_g3

0x15ac,	// (0x0003f264) list_single_cmail_header_detail_pane_t2_ParamLimits

0x15ac,	// (0x0003f264) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc68,	// (0x0004d920) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc68,	// (0x0004d920) list_single_cmail_header_detail_pane_t

0x1604,	// (0x0003f2bc) phacti_term_pane_t2_ParamLimits

0x1604,	// (0x0003f2bc) phacti_term_pane_t2

0x0001,

0xfc72,	// (0x0004d92a) phacti_term_pane_t_ParamLimits

0xfc72,	// (0x0004d92a) phacti_term_pane_t

0xe5ae,	// (0x0004c266) aid_size_list_single_double

0x8771,	// (0x00046429) popup_ezdial_listscroll_window

0x8793,	// (0x0004644b) popup_number_entry_window_cp01

0xa943,	// (0x000485fb) bg_popup_call_pane_cp09

0xe5ba,	// (0x0004c272) ezdial_list_pane

0xe5c2,	// (0x0004c27a) scroll_pane_cp23

0xc6c3,	// (0x0004a37b) bg_button_pane_cp028_ParamLimits

0xc6c3,	// (0x0004a37b) bg_button_pane_cp028

0x87a1,	// (0x00046459) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x87a1,	// (0x00046459) cmail_ddmenu_btn01_pane_g1

0x87b3,	// (0x0004646b) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x87b3,	// (0x0004646b) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcea,	// (0x0004d9a2) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcea,	// (0x0004d9a2) cmail_ddmenu_btn01_pane_g

0xe5ca,	// (0x0004c282) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe5ca,	// (0x0004c282) cmail_ddmenu_btn01_pane_t1

0xb989,	// (0x00049641) bg_button_pane_cp029_ParamLimits

0xb989,	// (0x00049641) bg_button_pane_cp029

0x87bf,	// (0x00046477) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x87bf,	// (0x00046477) cmail_ddmenu_btn02_pane_g1

0x87d7,	// (0x0004648f) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x87d7,	// (0x0004648f) cmail_ddmenu_btn02_pane_t1

0xa68c,	// (0x00048344) bg_button_pane_cp031_ParamLimits

0xa68c,	// (0x00048344) bg_button_pane_cp031

0x87bf,	// (0x00046477) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x87bf,	// (0x00046477) cmail_ddmenu_btn03_pane_g1

0x87d7,	// (0x0004648f) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x87d7,	// (0x0004648f) cmail_ddmenu_btn03_pane_t1

0x5ee1,	// (0x00043b99) cell_dialer2_keypad_pane_t1_ParamLimits

0x5efb,	// (0x00043bb3) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5efb,	// (0x00043bb3) cell_dialer2_keypad_pane_t1_copy1

0x7a88,	// (0x00045740) ncimui_group_button_pane

0xa6da,	// (0x00048392) main_sp_fs_calendar_pane_ParamLimits

0x84a8,	// (0x00046160) list_single_cmail_header_caption_pane_ParamLimits

0x1619,	// (0x0003f2d1) aid_recal_txt_sm_pane

0x9ffd,	// (0x00047cb5) mian_recal_day_pane

0x1653,	// (0x0003f30b) popup_sp_fs_cale_preview_window_ParamLimits

0xe5e0,	// (0x0004c298) list_recal_day_pane

0x1806,	// (0x0003f4be) list_single_recal_day_pane_ParamLimits

0x1806,	// (0x0003f4be) list_single_recal_day_pane

0xe607,	// (0x0004c2bf) list_single_recal_day_pane_g1_ParamLimits

0xe607,	// (0x0004c2bf) list_single_recal_day_pane_g1

0x1818,	// (0x0003f4d0) list_single_recal_day_pane_g2_ParamLimits

0x1818,	// (0x0003f4d0) list_single_recal_day_pane_g2

0x1824,	// (0x0003f4dc) list_single_recal_day_pane_g3_ParamLimits

0x1824,	// (0x0003f4dc) list_single_recal_day_pane_g3

0x1830,	// (0x0003f4e8) list_single_recal_day_pane_g4_ParamLimits

0x1830,	// (0x0003f4e8) list_single_recal_day_pane_g4

0x183e,	// (0x0003f4f6) list_single_recal_day_pane_g5_ParamLimits

0x183e,	// (0x0003f4f6) list_single_recal_day_pane_g5

0x1854,	// (0x0003f50c) list_single_recal_day_pane_g6_ParamLimits

0x1854,	// (0x0003f50c) list_single_recal_day_pane_g6

0x0004,

0xfcf9,	// (0x0004d9b1) list_single_recal_day_pane_g_ParamLimits

0xfcf9,	// (0x0004d9b1) list_single_recal_day_pane_g

0x1868,	// (0x0003f520) list_single_recal_day_pane_t1

0x187a,	// (0x0003f532) list_single_recal_day_pane_t2

0x0001,

0xfd04,	// (0x0004d9bc) list_single_recal_day_pane_t

0x87fb,	// (0x000464b3) ncimui_query_button_pane_ParamLimits

0x87fb,	// (0x000464b3) ncimui_query_button_pane

0x880b,	// (0x000464c3) ncimui_query_button_pane_t1_ParamLimits

0x880b,	// (0x000464c3) ncimui_query_button_pane_t1

0xe613,	// (0x0004c2cb) ncimui_query_button_pane_t2_ParamLimits

0xe613,	// (0x0004c2cb) ncimui_query_button_pane_t2

0x0001,

0xfd09,	// (0x0004d9c1) ncimui_query_button_pane_t_ParamLimits

0xfd09,	// (0x0004d9c1) ncimui_query_button_pane_t

0x881e,	// (0x000464d6) query_button_pane_ParamLimits

0x881e,	// (0x000464d6) query_button_pane

0x9ffd,	// (0x00047cb5) bg_button_pane_cp0028

0xe626,	// (0x0004c2de) query_button_pane_t1

0x49ca,	// (0x00042682) main_tport_pane_ParamLimits

0x8375,	// (0x0004602d) bg_popup_window_pane_cp01_ParamLimits

0x8375,	// (0x0004602d) bg_popup_window_pane_cp01

0x8383,	// (0x0004603b) heading_pane_cp08_ParamLimits

0x8383,	// (0x0004603b) heading_pane_cp08

0x8391,	// (0x00046049) heading_pane_cp07_ParamLimits

0x8391,	// (0x00046049) heading_pane_cp07

0x8427,	// (0x000460df) cell_tport_appsw_pane_g2

0x0002,

0xfc55,	// (0x0004d90d) cell_tport_appsw_pane_g

0x0cf4,	// (0x0003e9ac) input_candi_list_open_g1

0xad80,	// (0x00048a38) list_cale_time_pane_g6_ParamLimits

0xad80,	// (0x00048a38) list_cale_time_pane_g6

0x4ec8,	// (0x00042b80) aid_size_touch_calib_1_ParamLimits

0x4ec8,	// (0x00042b80) aid_size_touch_calib_1

0x4ed4,	// (0x00042b8c) aid_size_touch_calib_2_ParamLimits

0x4ed4,	// (0x00042b8c) aid_size_touch_calib_2

0x4ee2,	// (0x00042b9a) aid_size_touch_calib_3_ParamLimits

0x4ee2,	// (0x00042b9a) aid_size_touch_calib_3

0x4ef2,	// (0x00042baa) aid_size_touch_calib_4_ParamLimits

0x4ef2,	// (0x00042baa) aid_size_touch_calib_4

0x4f00,	// (0x00042bb8) main_touch_calib_button_group_pane_ParamLimits

0x4f00,	// (0x00042bb8) main_touch_calib_button_group_pane

0x4f0e,	// (0x00042bc6) main_touch_calib_pane_g1_ParamLimits

0x4f1a,	// (0x00042bd2) main_touch_calib_pane_g2_ParamLimits

0x4f26,	// (0x00042bde) main_touch_calib_pane_g3_ParamLimits

0x4f32,	// (0x00042bea) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x0004d356) main_touch_calib_pane_g_ParamLimits

0x4f3e,	// (0x00042bf6) main_touch_calib_pane_t1_ParamLimits

0x4f55,	// (0x00042c0d) main_touch_calib_pane_t2_ParamLimits

0x4f6e,	// (0x00042c26) main_touch_calib_pane_t3_ParamLimits

0x4f84,	// (0x00042c3c) main_touch_calib_pane_t4_ParamLimits

0x4f9a,	// (0x00042c52) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x0004d35f) main_touch_calib_pane_t_ParamLimits

0xcd31,	// (0x0004a9e9) list_single_fp_cale_pane_g3_ParamLimits

0xcd31,	// (0x0004a9e9) list_single_fp_cale_pane_g3

0xa6da,	// (0x00048392) bg_button_pane_cp012_ParamLimits

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp03_ParamLimits

0x6d51,	// (0x00044a09) cell_vitu2_function_top_pane_g1_ParamLimits

0xa6da,	// (0x00048392) bg_vkb2_func_pane_cp04_ParamLimits

0x7a0e,	// (0x000456c6) main_ncimui_button_group_pane_ParamLimits

0x7a0e,	// (0x000456c6) main_ncimui_button_group_pane

0x7a76,	// (0x0004572e) main_ncimui_pane_t3_ParamLimits

0x7a76,	// (0x0004572e) main_ncimui_pane_t3

0xe3e1,	// (0x0004c099) phacti_button_group_pane

0xe5ae,	// (0x0004c266) aid_size_list_single_double_ParamLimits

0x8771,	// (0x00046429) popup_ezdial_listscroll_window_ParamLimits

0x8793,	// (0x0004644b) popup_number_entry_window_cp01_ParamLimits

0x882b,	// (0x000464e3) phacti_button_pane_ParamLimits

0x882b,	// (0x000464e3) phacti_button_pane

0x9ffd,	// (0x00047cb5) bg_button_pane_cp14

0xe634,	// (0x0004c2ec) phacti_button_pane_t1

0x883c,	// (0x000464f4) main_touch_calib_button_pane_ParamLimits

0x883c,	// (0x000464f4) main_touch_calib_button_pane

0xa7a5,	// (0x0004845d) bg_button_pane_cp18_ParamLimits

0xa7a5,	// (0x0004845d) bg_button_pane_cp18

0xe642,	// (0x0004c2fa) main_touch_calib_button_pane_t1_ParamLimits

0xe642,	// (0x0004c2fa) main_touch_calib_button_pane_t1

0xe658,	// (0x0004c310) main_touch_calib_button_pane_t2_ParamLimits

0xe658,	// (0x0004c310) main_touch_calib_button_pane_t2

0x0001,

0xfd0e,	// (0x0004d9c6) main_touch_calib_button_pane_t_ParamLimits

0xfd0e,	// (0x0004d9c6) main_touch_calib_button_pane_t

0x9ffd,	// (0x00047cb5) cell_ncimui_button_pane

0x9ffd,	// (0x00047cb5) bg_button_pane_cp032

0xe676,	// (0x0004c32e) cell_ncimui_button_pane_t1

0x5f57,	// (0x00043c0f) image3_infobar_pane_ParamLimits

0x5f57,	// (0x00043c0f) image3_infobar_pane

0x7e47,	// (0x00045aff) fs_bigclock_status_pane_ParamLimits

0x7e47,	// (0x00045aff) fs_bigclock_status_pane

0x7e54,	// (0x00045b0c) main_fs_bigclock_clock_pane_ParamLimits

0x7e54,	// (0x00045b0c) main_fs_bigclock_clock_pane

0x7e70,	// (0x00045b28) main_fs_bigclock_indi_pane_ParamLimits

0x7e70,	// (0x00045b28) main_fs_bigclock_indi_pane

0x7e9e,	// (0x00045b56) main_fs_bigclock_swipe_pane_ParamLimits

0x7e9e,	// (0x00045b56) main_fs_bigclock_swipe_pane

0x9ffd,	// (0x00047cb5) main_fs_clock_dumped_data

0x7ed8,	// (0x00045b90) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7ed8,	// (0x00045b90) list_single_fs_bigclock_indicator_pane_g1

0x7ef7,	// (0x00045baf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7ef7,	// (0x00045baf) list_single_fs_bigclock_indicator_pane_g2

0x7f11,	// (0x00045bc9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7f11,	// (0x00045bc9) list_single_fs_bigclock_indicator_pane_g3

0x7f2d,	// (0x00045be5) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7f2d,	// (0x00045be5) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaf,	// (0x0004d867) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaf,	// (0x0004d867) list_single_fs_bigclock_indicator_pane_g

0x7f5c,	// (0x00045c14) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7f5c,	// (0x00045c14) list_single_fs_bigclock_indicator_pane_t1

0x7f84,	// (0x00045c3c) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7f84,	// (0x00045c3c) list_single_fs_bigclock_indicator_pane_t2

0x7fac,	// (0x00045c64) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7fac,	// (0x00045c64) list_single_fs_bigclock_indicator_pane_t3

0x7fd4,	// (0x00045c8c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7fd4,	// (0x00045c8c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbba,	// (0x0004d872) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbba,	// (0x0004d872) list_single_fs_bigclock_indicator_pane_t

0xe684,	// (0x0004c33c) image3_infobar_fav_pane_ParamLimits

0xe684,	// (0x0004c33c) image3_infobar_fav_pane

0xe694,	// (0x0004c34c) image3_infobar_loc_pane_ParamLimits

0xe694,	// (0x0004c34c) image3_infobar_loc_pane

0xe6aa,	// (0x0004c362) image3_infobar_time_pane_ParamLimits

0xe6aa,	// (0x0004c362) image3_infobar_time_pane

0xa965,	// (0x0004861d) image3_infobar_time_pane_g1

0xe6ba,	// (0x0004c372) image3_infobar_time_pane_t1

0xa965,	// (0x0004861d) image3_infobar_loc_pane_g1

0xe6c8,	// (0x0004c380) image3_infobar_loc_pane_g2

0x0001,

0xfd13,	// (0x0004d9cb) image3_infobar_loc_pane_g

0xe6d0,	// (0x0004c388) image3_infobar_loc_pane_t1

0xa965,	// (0x0004861d) image3_infobar_fav_pane_g1

0xe6de,	// (0x0004c396) image3_infobar_fav_pane_g2

0x0001,

0xfd18,	// (0x0004d9d0) image3_infobar_fav_pane_g

0xe6e6,	// (0x0004c39e) fs_bigclock_status_battery_pane

0xe6ef,	// (0x0004c3a7) fs_bigclock_status_signal_pane

0xe6f8,	// (0x0004c3b0) fs_bigclock_status_title_pane

0xe701,	// (0x0004c3b9) fs_bigclock_status_signal_pane_g1

0xe70a,	// (0x0004c3c2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd1d,	// (0x0004d9d5) fs_bigclock_status_signal_pane_g

0xe712,	// (0x0004c3ca) fs_bigclock_status_battery_pane_g1

0xe71b,	// (0x0004c3d3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd22,	// (0x0004d9da) fs_bigclock_status_battery_pane_g

0xe723,	// (0x0004c3db) fs_bigclock_status_title_pane_t1

0x884c,	// (0x00046504) main_fs_bigclock_clock_pane_g1

0x884c,	// (0x00046504) main_fs_bigclock_clock_pane_g2

0x885b,	// (0x00046513) main_fs_bigclock_clock_pane_g3

0x885b,	// (0x00046513) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd27,	// (0x0004d9df) main_fs_bigclock_clock_pane_g

0x886b,	// (0x00046523) main_fs_bigclock_clock_pane_t1

0x8880,	// (0x00046538) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd30,	// (0x0004d9e8) main_fs_bigclock_clock_pane_t

0xe731,	// (0x0004c3e9) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe731,	// (0x0004c3e9) list_single_fs_bigclock_indicator_pane

0xe742,	// (0x0004c3fa) list_single_fs_bigclock_pane_ParamLimits

0xe742,	// (0x0004c3fa) list_single_fs_bigclock_pane

0xe768,	// (0x0004c420) main_fs_bigclock_indicator_pane_t1

0xe777,	// (0x0004c42f) list_single_fs_bigclock_pane_g1

0xe77f,	// (0x0004c437) list_single_fs_bigclock_pane_t1

0xa965,	// (0x0004861d) main_fs_bigclock_swipe_pane_g1

0xe7c2,	// (0x0004c47a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd41,	// (0x0004d9f9) main_fs_bigclock_swipe_pane_g

0xe7ca,	// (0x0004c482) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe7ca,	// (0x0004c482) main_fs_bigclock_swipe_pane_t1

0x3af4,	// (0x000417ac) call_type_pane_ParamLimits

0x9ffd,	// (0x00047cb5) main_btmg_pane

0x16c2,	// (0x0003f37a) list_single_cale_mrui_row_pane_g2_ParamLimits

0x16c2,	// (0x0003f37a) list_single_cale_mrui_row_pane_g2

0x0002,

0xfcb4,	// (0x0004d96c) list_single_cale_mrui_row_pane_g_ParamLimits

0xfcb4,	// (0x0004d96c) list_single_cale_mrui_row_pane_g

0x17f4,	// (0x0003f4ac) list_recal_vselct_arw_lo_pane

0xe5ff,	// (0x0004c2b7) list_recal_vselct_arw_up_pane

0x17fc,	// (0x0003f4b4) list_recal_vselct_pane

0x88d7,	// (0x0004658f) btmg_button_pane

0x88e3,	// (0x0004659b) main_btmg_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp044

0xe7e7,	// (0x0004c49f) btmg_button_pane_t1

0xc5fc,	// (0x0004a2b4) aid_listscroll_gen

0xa6da,	// (0x00048392) main_cntbar_detail_pane

0xe31e,	// (0x0004bfd6) list_cmail_folder_pane

0xd821,	// (0x0004b4d9) sp_fs_scroll_pane_cp03_ParamLimits

0x188c,	// (0x0003f544) list_single_fs_dyc_pane_cp01_ParamLimits

0x188c,	// (0x0003f544) list_single_fs_dyc_pane_cp01

0xe7f5,	// (0x0004c4ad) aid_size_cmail_indent

0x18aa,	// (0x0003f562) list_single_dyc_row_pane_cp01

0x890b,	// (0x000465c3) cntbar_detail_list_pane_ParamLimits

0x890b,	// (0x000465c3) cntbar_detail_list_pane

0x894b,	// (0x00046603) main_cntbar_detail_cont_pane_ParamLimits

0x894b,	// (0x00046603) main_cntbar_detail_cont_pane

0x3ae8,	// (0x000417a0) scroll_pane_cp032_ParamLimits

0x3ae8,	// (0x000417a0) scroll_pane_cp032

0x8957,	// (0x0004660f) cntbar_detail_list_event_pane_ParamLimits

0x8957,	// (0x0004660f) cntbar_detail_list_event_pane

0x8919,	// (0x000465d1) cntbar_detail_list_shct_pane

0xabeb,	// (0x000488a3) aid_list_gen

0xe818,	// (0x0004c4d0) aid_scroll

0xe821,	// (0x0004c4d9) aid_size_touch_scroll_bar

0x8175,	// (0x00045e2d) aid_list_double

0x18b3,	// (0x0003f56b) aid_list_single

0x8967,	// (0x0004661f) aid_list_single_lg

0x18bc,	// (0x0003f574) aid_list_z_g_a_sm

0x18c4,	// (0x0003f57c) aid_list_z_g_d

0x18cc,	// (0x0003f584) aid_txt_z_prm

0x18da,	// (0x0003f592) aid_txt_z_prm_cp01

0x18e8,	// (0x0003f5a0) aid_txt_z_sec

0x8970,	// (0x00046628) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8970,	// (0x00046628) main_cntbar_detail_cont_pane_g1

0x897d,	// (0x00046635) main_cntbar_detail_cont_pane_g2_ParamLimits

0x897d,	// (0x00046635) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd46,	// (0x0004d9fe) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd46,	// (0x0004d9fe) main_cntbar_detail_cont_pane_g

0xe82a,	// (0x0004c4e2) main_cntbar_detail_cont_pane_t1

0xe838,	// (0x0004c4f0) main_cntbar_detail_cont_pane_t2

0xe846,	// (0x0004c4fe) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd4b,	// (0x0004da03) main_cntbar_detail_cont_pane_t

0x8989,	// (0x00046641) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8989,	// (0x00046641) cell_cntbar_detail_list_shct_pane

0xe854,	// (0x0004c50c) cntbar_detail_list_shct_pane_g1

0xe85d,	// (0x0004c515) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd52,	// (0x0004da0a) cntbar_detail_list_shct_pane_g

0x899d,	// (0x00046655) cntbar_detail_list_event_pane_g1_ParamLimits

0x899d,	// (0x00046655) cntbar_detail_list_event_pane_g1

0x89a9,	// (0x00046661) cntbar_detail_list_event_pane_g2_ParamLimits

0x89a9,	// (0x00046661) cntbar_detail_list_event_pane_g2

0x0005,

0xfd57,	// (0x0004da0f) cntbar_detail_list_event_pane_g_ParamLimits

0xfd57,	// (0x0004da0f) cntbar_detail_list_event_pane_g

0x8a17,	// (0x000466cf) cntbar_detail_list_event_pane_t1_ParamLimits

0x8a17,	// (0x000466cf) cntbar_detail_list_event_pane_t1

0x8a2c,	// (0x000466e4) cntbar_detail_list_event_pane_t2_ParamLimits

0x8a2c,	// (0x000466e4) cntbar_detail_list_event_pane_t2

0x0002,

0xfd64,	// (0x0004da1c) cntbar_detail_list_event_pane_t_ParamLimits

0xfd64,	// (0x0004da1c) cntbar_detail_list_event_pane_t

0xa965,	// (0x0004861d) cell_cntbar_detail_list_shct_pane_g1

0x3ea1,	// (0x00041b59) navi_pane_mv_g3

0xa6da,	// (0x00048392) main_cntbar_detail_pane_ParamLimits

0x9ffd,	// (0x00047cb5) main_notif_wgt_pane

0x5bd7,	// (0x0004388f) aid_tch_main_mp4_pane_g4

0x5e40,	// (0x00043af8) popup_slider_window_cp02

0x17ea,	// (0x0003f4a2) list_recal_day_event_pane

0x88eb,	// (0x000465a3) cntbar_detail_btn_pane_ParamLimits

0x88eb,	// (0x000465a3) cntbar_detail_btn_pane

0x88fb,	// (0x000465b3) cntbar_detail_btn_pane_cp01_ParamLimits

0x88fb,	// (0x000465b3) cntbar_detail_btn_pane_cp01

0x8919,	// (0x000465d1) cntbar_detail_list_shct_pane_ParamLimits

0x8925,	// (0x000465dd) cntbar_detail_pane_g1_ParamLimits

0x8925,	// (0x000465dd) cntbar_detail_pane_g1

0x8935,	// (0x000465ed) cntbar_detail_pane_t1_ParamLimits

0x8935,	// (0x000465ed) cntbar_detail_pane_t1

0x89b5,	// (0x0004666d) cntbar_detail_list_event_pane_g3_ParamLimits

0x89b5,	// (0x0004666d) cntbar_detail_list_event_pane_g3

0x89cd,	// (0x00046685) cntbar_detail_list_event_pane_g4_ParamLimits

0x89cd,	// (0x00046685) cntbar_detail_list_event_pane_g4

0x89e5,	// (0x0004669d) cntbar_detail_list_event_pane_g5_ParamLimits

0x89e5,	// (0x0004669d) cntbar_detail_list_event_pane_g5

0x89fd,	// (0x000466b5) cntbar_detail_list_event_pane_g6_ParamLimits

0x89fd,	// (0x000466b5) cntbar_detail_list_event_pane_g6

0x8a41,	// (0x000466f9) cntbar_detail_list_event_pane_t3_ParamLimits

0x8a41,	// (0x000466f9) cntbar_detail_list_event_pane_t3

0x8a53,	// (0x0004670b) popup_notif_wgt_window_ParamLimits

0x8a53,	// (0x0004670b) popup_notif_wgt_window

0x8a63,	// (0x0004671b) popup_submenu_window_cp01_ParamLimits

0x8a63,	// (0x0004671b) popup_submenu_window_cp01

0xa943,	// (0x000485fb) bg_popup_window_pane_cp10

0xe866,	// (0x0004c51e) listscroll_notif_wgt_pane

0xe878,	// (0x0004c530) list_notif_wgt_window

0xe881,	// (0x0004c539) scroll_pane_cp033

0x8a73,	// (0x0004672b) list_notif_wgt_row_pane_ParamLimits

0x8a73,	// (0x0004672b) list_notif_wgt_row_pane

0xe88a,	// (0x0004c542) aid_size_list_notif_wgt_del

0xe897,	// (0x0004c54f) list_notif_wgt_row_pane_g1

0xe8a3,	// (0x0004c55b) list_notif_wgt_row_pane_g2

0xe8b2,	// (0x0004c56a) list_notif_wgt_row_pane_g3

0x0002,

0xfd6b,	// (0x0004da23) list_notif_wgt_row_pane_g

0xe8bf,	// (0x0004c577) list_notif_wgt_row_pane_t1

0xe8d5,	// (0x0004c58d) list_notif_wgt_row_pane_t2

0xe8e7,	// (0x0004c59f) list_notif_wgt_row_pane_t3

0x0002,

0xfd72,	// (0x0004da2a) list_notif_wgt_row_pane_t

0xd514,	// (0x0004b1cc) list_recal_day_event_pane_g1

0xe8f9,	// (0x0004c5b1) list_recal_day_event_pane_t1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp045

0x8a87,	// (0x0004673f) cntbar_detail_btn_pane_t1

0xb989,	// (0x00049641) main_callh_pane_ParamLimits

0xb989,	// (0x00049641) main_callh_pane

0x9ffd,	// (0x00047cb5) main_coverflow0_pane

0x9ffd,	// (0x00047cb5) main_wgtman_pane

0x7eb6,	// (0x00045b6e) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7eb6,	// (0x00045b6e) main_fs_bigclock_unlock_btn_pane

0x841f,	// (0x000460d7) bg_button_pane_cp16

0x842f,	// (0x000460e7) cell_tport_appsw_pane_g3

0x8a95,	// (0x0004674d) cf0_flow_pane_ParamLimits

0x8a95,	// (0x0004674d) cf0_flow_pane

0xe908,	// (0x0004c5c0) listscroll_cf0_pane

0xe913,	// (0x0004c5cb) main_cf0_pane_g1

0x8aa4,	// (0x0004675c) main_cf0_pane_t1_ParamLimits

0x8aa4,	// (0x0004675c) main_cf0_pane_t1

0x8ab8,	// (0x00046770) main_cf0_pane_t2_ParamLimits

0x8ab8,	// (0x00046770) main_cf0_pane_t2

0x0001,

0xfd7e,	// (0x0004da36) main_cf0_pane_t_ParamLimits

0xfd7e,	// (0x0004da36) main_cf0_pane_t

0xe925,	// (0x0004c5dd) scroll_pane_cp11

0x8acc,	// (0x00046784) cf0_flow_pane_g1

0x8ad4,	// (0x0004678c) cf0_flow_pane_g2

0x0001,

0xfd83,	// (0x0004da3b) cf0_flow_pane_g

0x8adc,	// (0x00046794) cf0_flow_pane_t1

0x9ffd,	// (0x00047cb5) main_call6_pane

0x9ffd,	// (0x00047cb5) main_calllock_pane

0x8aea,	// (0x000467a2) call6_btn_grp_pane_ParamLimits

0x8aea,	// (0x000467a2) call6_btn_grp_pane

0x8af7,	// (0x000467af) call6_pane_g1_ParamLimits

0x8af7,	// (0x000467af) call6_pane_g1

0x8b07,	// (0x000467bf) popup_call6_1st_window_ParamLimits

0x8b07,	// (0x000467bf) popup_call6_1st_window

0x8b17,	// (0x000467cf) popup_call6_2nd_window_ParamLimits

0x8b17,	// (0x000467cf) popup_call6_2nd_window

0x8b27,	// (0x000467df) cell_call6_btn_pane_ParamLimits

0x8b27,	// (0x000467df) cell_call6_btn_pane

0xa943,	// (0x000485fb) bg_popup_call2_in_pane_cp03

0xe930,	// (0x0004c5e8) popup_call6_1st_window_g1

0xe938,	// (0x0004c5f0) popup_call6_1st_window_g2

0xe940,	// (0x0004c5f8) popup_call6_1st_window_g3

0x0002,

0xfd88,	// (0x0004da40) popup_call6_1st_window_g

0xe948,	// (0x0004c600) popup_call6_1st_window_t1

0xe957,	// (0x0004c60f) popup_call6_1st_window_t2

0xe967,	// (0x0004c61f) popup_call6_1st_window_t3

0x0002,

0xfd8f,	// (0x0004da47) popup_call6_1st_window_t

0xa943,	// (0x000485fb) bg_popup_call2_in_pane_cp04

0xe977,	// (0x0004c62f) popup_call6_2nd_window_g1

0xe97f,	// (0x0004c637) popup_call6_2nd_window_g2

0xe987,	// (0x0004c63f) popup_call6_2nd_window_g3

0x0002,

0xfd96,	// (0x0004da4e) popup_call6_2nd_window_g

0xe98f,	// (0x0004c647) popup_call6_2nd_window_t1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp15

0xe99e,	// (0x0004c656) cell_call6_btn_pane_g1

0xef26,	// (0x0004cbde) cell_call6_btn_pane_t1

0x8b38,	// (0x000467f0) listscroll_wgtman_pane_ParamLimits

0x8b38,	// (0x000467f0) listscroll_wgtman_pane

0x8b54,	// (0x0004680c) wgtman_btn_pane_ParamLimits

0x8b54,	// (0x0004680c) wgtman_btn_pane

0xb163,	// (0x00048e1b) aid_scroll_copy1

0xe9a7,	// (0x0004c65f) list_wgtman_pane

0x8b89,	// (0x00046841) wgtman_btn_pane_g1_ParamLimits

0x8b89,	// (0x00046841) wgtman_btn_pane_g1

0x8bb1,	// (0x00046869) wgtman_btn_pane_t1_ParamLimits

0x8bb1,	// (0x00046869) wgtman_btn_pane_t1

0xe9b1,	// (0x0004c669) wgtman_btn_pane_t2_ParamLimits

0xe9b1,	// (0x0004c669) wgtman_btn_pane_t2

0x0001,

0xfd9d,	// (0x0004da55) wgtman_btn_pane_t_ParamLimits

0xfd9d,	// (0x0004da55) wgtman_btn_pane_t

0x8be8,	// (0x000468a0) listrow_wgtman_pane_ParamLimits

0x8be8,	// (0x000468a0) listrow_wgtman_pane

0x8bff,	// (0x000468b7) listrow_wgtman_pane_g1

0x8c0c,	// (0x000468c4) listrow_wgtman_pane_g2

0x0001,

0xfda2,	// (0x0004da5a) listrow_wgtman_pane_g

0x18f6,	// (0x0003f5ae) listrow_wgtman_pane_t1

0x190e,	// (0x0003f5c6) listrow_wgtman_pane_t2

0x0001,

0xfda7,	// (0x0004da5f) listrow_wgtman_pane_t

0x1934,	// (0x0003f5ec) wait_bar_pane_cp09

0xe9c8,	// (0x0004c680) main_calllock_btn_pane

0xe9d2,	// (0x0004c68a) main_calllock_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp17

0xe99e,	// (0x0004c656) main_calllock_btn_pane_g1

0xe9de,	// (0x0004c696) main_calllock_btn_pane_t1

0x9ffd,	// (0x00047cb5) main_dialer3_pane

0x9ffd,	// (0x00047cb5) main_fmrd2_pane

0xa965,	// (0x0004861d) main_fs_bigclock_unlock_btn_pane_g1

0x8c32,	// (0x000468ea) main_fs_bigclock_unlock_btn_pane_t1

0x8c40,	// (0x000468f8) area_fmrd2_info_pane_ParamLimits

0x8c40,	// (0x000468f8) area_fmrd2_info_pane

0x8c4c,	// (0x00046904) area_fmrd2_visual_pane_ParamLimits

0x8c4c,	// (0x00046904) area_fmrd2_visual_pane

0x8c5a,	// (0x00046912) fmrd2_indi_pane_ParamLimits

0x8c5a,	// (0x00046912) fmrd2_indi_pane

0x8c67,	// (0x0004691f) area_fmrd2_visual_pane_g1

0x8c6f,	// (0x00046927) area_fmrd2_visual_pane_t1

0x8c7f,	// (0x00046937) area_fmrd2_visual_pane_t2

0x8c8f,	// (0x00046947) area_fmrd2_visual_pane_t3

0x0002,

0xfdb1,	// (0x0004da69) area_fmrd2_visual_pane_t

0x8c9f,	// (0x00046957) area_fmrd2_info_pane_g1

0x8ca7,	// (0x0004695f) area_fmrd2_info_pane_t1

0x8cb7,	// (0x0004696f) area_fmrd2_info_pane_t2

0x8cc7,	// (0x0004697f) area_fmrd2_info_pane_t3

0x8cd7,	// (0x0004698f) area_fmrd2_info_pane_t4

0x0003,

0xfdb8,	// (0x0004da70) area_fmrd2_info_pane_t

0x8ce7,	// (0x0004699f) fmrd2_indi_pane_t1

0x8cf7,	// (0x000469af) fmrd2_indi_pane_t2

0x8d07,	// (0x000469bf) fmrd2_indi_pane_t3

0x0002,

0xfdc1,	// (0x0004da79) fmrd2_indi_pane_t

0x7f3e,	// (0x00045bf6) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7f3e,	// (0x00045bf6) list_single_fs_bigclock_indicator_pane_g5

0x7ff3,	// (0x00045cab) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7ff3,	// (0x00045cab) list_single_fs_bigclock_indicator_pane_t5

0x8598,	// (0x00046250) aid_cell_bcale_month_pane_ParamLimits

0x8598,	// (0x00046250) aid_cell_bcale_month_pane

0x85b6,	// (0x0004626e) bcale_month_pane_ParamLimits

0x85b6,	// (0x0004626e) bcale_month_pane

0x85d4,	// (0x0004628c) bcale_preview_pane_ParamLimits

0x85d4,	// (0x0004628c) bcale_preview_pane

0xe77f,	// (0x0004c437) list_single_fs_bigclock_pane_t1_ParamLimits

0xe79e,	// (0x0004c456) list_single_fs_bigclock_pane_t2_ParamLimits

0xe79e,	// (0x0004c456) list_single_fs_bigclock_pane_t2

0x0001,

0xfd3c,	// (0x0004d9f4) list_single_fs_bigclock_pane_t_ParamLimits

0xfd3c,	// (0x0004d9f4) list_single_fs_bigclock_pane_t

0x8c2a,	// (0x000468e2) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdac,	// (0x0004da64) main_fs_bigclock_unlock_btn_pane_g

0x8d17,	// (0x000469cf) aid_dia3_key_size_ParamLimits

0x8d17,	// (0x000469cf) aid_dia3_key_size

0x8d23,	// (0x000469db) aid_dia3_listrow_size_ParamLimits

0x8d23,	// (0x000469db) aid_dia3_listrow_size

0x8d33,	// (0x000469eb) dia3_keypad_fun_pane_ParamLimits

0x8d33,	// (0x000469eb) dia3_keypad_fun_pane

0x8d43,	// (0x000469fb) dia3_keypad_num_pane_ParamLimits

0x8d43,	// (0x000469fb) dia3_keypad_num_pane

0x8d53,	// (0x00046a0b) dia3_listscroll_pane_ParamLimits

0x8d53,	// (0x00046a0b) dia3_listscroll_pane

0x8d61,	// (0x00046a19) dia3_numentry_pane_ParamLimits

0x8d61,	// (0x00046a19) dia3_numentry_pane

0xe9ed,	// (0x0004c6a5) dia3_list_pane

0x8d6f,	// (0x00046a27) scroll_pane_cp12

0x9ffd,	// (0x00047cb5) bg_dia3_numentry_pane

0x8d7a,	// (0x00046a32) dia3_numentry_pane_t1

0x8d89,	// (0x00046a41) cell_dia3_key_num_pane

0x8d91,	// (0x00046a49) cell_dia3_key0_fun_pane_ParamLimits

0x8d91,	// (0x00046a49) cell_dia3_key0_fun_pane

0x8d9e,	// (0x00046a56) cell_dia3_key1_fun_pane_ParamLimits

0x8d9e,	// (0x00046a56) cell_dia3_key1_fun_pane

0x8dab,	// (0x00046a63) dia3_listrow_pane

0xde2b,	// (0x0004bae3) bg_dia3_numentry_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp21

0x8db8,	// (0x00046a70) cell_dia3_key_num_pane_t1

0x8dc6,	// (0x00046a7e) cell_dia3_key_num_pane_t2

0x8dd5,	// (0x00046a8d) cell_dia3_key_num_pane_t3

0x8de4,	// (0x00046a9c) cell_dia3_key_num_pane_t4

0x0003,

0xfdc8,	// (0x0004da80) cell_dia3_key_num_pane_t

0x9ffd,	// (0x00047cb5) bg_button_pane_cp19

0x8df3,	// (0x00046aab) cell_dia3_key0_fun_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp20

0x8dfb,	// (0x00046ab3) cell_dia3_key1_fun_pane_g1

0x8e03,	// (0x00046abb) area_left_week_number_pane

0x8e16,	// (0x00046ace) area_top_day_name_pane

0x8e24,	// (0x00046adc) frame_month_view_pane

0xe9f8,	// (0x0004c6b0) grid_month_view_pane

0x8e39,	// (0x00046af1) cell_top_day_name_pane_ParamLimits

0x8e39,	// (0x00046af1) cell_top_day_name_pane

0x8e55,	// (0x00046b0d) cell_area_left_week_number_pane_ParamLimits

0x8e55,	// (0x00046b0d) cell_area_left_week_number_pane

0x8e76,	// (0x00046b2e) cell_month_view_pane_ParamLimits

0x8e76,	// (0x00046b2e) cell_month_view_pane

0xea06,	// (0x0004c6be) frm_month_g1

0x8ea2,	// (0x00046b5a) frm_month_g2

0x8eb3,	// (0x00046b6b) frm_month_g3

0x8ec4,	// (0x00046b7c) frm_month_g4

0x8ed5,	// (0x00046b8d) frm_month_g5

0x8ee6,	// (0x00046b9e) frm_month_g6

0x8ef9,	// (0x00046bb1) frm_month_g7

0xea13,	// (0x0004c6cb) frm_month_g8

0x8f0c,	// (0x00046bc4) frm_month_g9

0x8f19,	// (0x00046bd1) frm_month_g10

0x8f26,	// (0x00046bde) frm_month_g11

0x8f33,	// (0x00046beb) frm_month_g12

0x8f40,	// (0x00046bf8) frm_month_g13

0x8f4f,	// (0x00046c07) frm_month_g14

0x8f5e,	// (0x00046c16) frm_month_g15

0x8f6d,	// (0x00046c25) frm_month_g16

0x000f,

0xfdd1,	// (0x0004da89) frm_month_g

0xea20,	// (0x0004c6d8) cell_top_day_name_pane_t1

0x8f7c,	// (0x00046c34) cell_area_left_week_number_pane_g1

0x8f8b,	// (0x00046c43) cell_area_left_week_number_pane_t1

0xa733,	// (0x000483eb) cell_month_view_pane_g1

0x8fa1,	// (0x00046c59) cell_month_view_pane_t1

0x9ffd,	// (0x00047cb5) main_fps_pane

0xe229,	// (0x0004bee1) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe229,	// (0x0004bee1) cmail_ddmenu_btn02_pane_cp1

0xe245,	// (0x0004befd) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe245,	// (0x0004befd) cmail_ddmenu_btn02_pane_cp2

0x87cb,	// (0x00046483) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x87cb,	// (0x00046483) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcef,	// (0x0004d9a7) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcef,	// (0x0004d9a7) cmail_ddmenu_btn02_pane_g

0x87e9,	// (0x000464a1) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x87e9,	// (0x000464a1) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcf4,	// (0x0004d9ac) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcf4,	// (0x0004d9ac) cmail_ddmenu_btn02_pane_t

0x8fb7,	// (0x00046c6f) fps_text_pane_ParamLimits

0x8fb7,	// (0x00046c6f) fps_text_pane

0x8fc4,	// (0x00046c7c) main_fps_pane_g1_ParamLimits

0x8fc4,	// (0x00046c7c) main_fps_pane_g1

0x8fd0,	// (0x00046c88) wait_bar_pane_cp010_ParamLimits

0x8fd0,	// (0x00046c88) wait_bar_pane_cp010

0x8fdc,	// (0x00046c94) fps_text_pane_t1_ParamLimits

0x8fdc,	// (0x00046c94) fps_text_pane_t1

0x62f1,	// (0x00043fa9) cam4_image_uncrop_pane_g1

0x62fa,	// (0x00043fb2) cam4_image_uncrop_pane_g2

0x6303,	// (0x00043fbb) cam4_image_uncrop_pane_g3

0x630c,	// (0x00043fc4) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x0004d4f2) cam4_image_uncrop_pane_g

0x8dab,	// (0x00046a63) dia3_listrow_pane_ParamLimits

0x9ffd,	// (0x00047cb5) main_phob2_pane

0x83dc,	// (0x00046094) cell_tport_appsw_pane_cp02_ParamLimits

0x83dc,	// (0x00046094) cell_tport_appsw_pane_cp02

0x83eb,	// (0x000460a3) cell_tport_appsw_pane_cp03_ParamLimits

0x83eb,	// (0x000460a3) cell_tport_appsw_pane_cp03

0x9ffd,	// (0x00047cb5) phob2_contact_card_pane

0x9ffd,	// (0x00047cb5) phob2_listscroll_pane

0xea33,	// (0x0004c6eb) phob2_list_pane

0xea3b,	// (0x0004c6f3) scroll_pane_cp034

0x8ff5,	// (0x00046cad) phob2_cc_data_pane_ParamLimits

0x8ff5,	// (0x00046cad) phob2_cc_data_pane

0x900c,	// (0x00046cc4) phob2_cc_listscroll_pane_ParamLimits

0x900c,	// (0x00046cc4) phob2_cc_listscroll_pane

0x9028,	// (0x00046ce0) list_double_large_graphic_phob2_pane_ParamLimits

0x9028,	// (0x00046ce0) list_double_large_graphic_phob2_pane

0x903c,	// (0x00046cf4) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x903c,	// (0x00046cf4) list_double_large_graphic_phob2_pane_g1

0x1946,	// (0x0003f5fe) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x1946,	// (0x0003f5fe) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdf2,	// (0x0004daaa) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdf2,	// (0x0004daaa) list_double_large_graphic_phob2_pane_g

0x196c,	// (0x0003f624) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x196c,	// (0x0003f624) list_double_large_graphic_phob2_pane_t1

0x1981,	// (0x0003f639) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x1981,	// (0x0003f639) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdfb,	// (0x0004dab3) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdfb,	// (0x0004dab3) list_double_large_graphic_phob2_pane_t

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp024

0x9049,	// (0x00046d01) phob2_cc_button_pane

0x9053,	// (0x00046d0b) phob2_cc_data_pane_g1_ParamLimits

0x9053,	// (0x00046d0b) phob2_cc_data_pane_g1

0x9066,	// (0x00046d1e) phob2_cc_data_pane_g2_ParamLimits

0x9066,	// (0x00046d1e) phob2_cc_data_pane_g2

0x0001,

0xfe00,	// (0x0004dab8) phob2_cc_data_pane_g_ParamLimits

0xfe00,	// (0x0004dab8) phob2_cc_data_pane_g

0x907a,	// (0x00046d32) phob2_cc_data_pane_t1_ParamLimits

0x907a,	// (0x00046d32) phob2_cc_data_pane_t1

0x909b,	// (0x00046d53) phob2_cc_data_pane_t2_ParamLimits

0x909b,	// (0x00046d53) phob2_cc_data_pane_t2

0x90bc,	// (0x00046d74) phob2_cc_data_pane_t3_ParamLimits

0x90bc,	// (0x00046d74) phob2_cc_data_pane_t3

0x0002,

0xfe05,	// (0x0004dabd) phob2_cc_data_pane_t_ParamLimits

0xfe05,	// (0x0004dabd) phob2_cc_data_pane_t

0xea43,	// (0x0004c6fb) phob2_cc_list_pane_ParamLimits

0xea43,	// (0x0004c6fb) phob2_cc_list_pane

0xd807,	// (0x0004b4bf) scroll_pane_cp035_ParamLimits

0xd807,	// (0x0004b4bf) scroll_pane_cp035

0xa6da,	// (0x00048392) bg_button_pane_cp033

0x90dd,	// (0x00046d95) phob2_cc_button_pane_g1

0x90e9,	// (0x00046da1) phob2_cc_button_pane_t1

0x90fe,	// (0x00046db6) phob2_cc_button_pane_t2

0x0001,

0xfe0c,	// (0x0004dac4) phob2_cc_button_pane_t

0x9110,	// (0x00046dc8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9110,	// (0x00046dc8) list_double_large_graphic_phob2_cc_pane

0x915d,	// (0x00046e15) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x915d,	// (0x00046e15) list_double_large_graphic_phob2_cc_pane_g1

0x1996,	// (0x0003f64e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x1996,	// (0x0003f64e) list_double_large_graphic_phob2_cc_pane_g2

0x19a5,	// (0x0003f65d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x19a5,	// (0x0003f65d) list_double_large_graphic_phob2_cc_pane_g3

0x19b4,	// (0x0003f66c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x19b4,	// (0x0003f66c) list_double_large_graphic_phob2_cc_pane_g4

0x19c5,	// (0x0003f67d) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x19c5,	// (0x0003f67d) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe11,	// (0x0004dac9) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe11,	// (0x0004dac9) list_double_large_graphic_phob2_cc_pane_g

0x19d4,	// (0x0003f68c) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x19d4,	// (0x0003f68c) list_double_large_graphic_phob2_cc_pane_t1

0x19fd,	// (0x0003f6b5) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x19fd,	// (0x0003f6b5) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe1c,	// (0x0004dad4) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe1c,	// (0x0004dad4) list_double_large_graphic_phob2_cc_pane_t

0xea4f,	// (0x0004c707) list_highlight_pane_cp025_ParamLimits

0xea4f,	// (0x0004c707) list_highlight_pane_cp025

0xa6da,	// (0x00048392) bg_button_pane_cp033_ParamLimits

0x90dd,	// (0x00046d95) phob2_cc_button_pane_g1_ParamLimits

0x90e9,	// (0x00046da1) phob2_cc_button_pane_t1_ParamLimits

0x90fe,	// (0x00046db6) phob2_cc_button_pane_t2_ParamLimits

0xfe0c,	// (0x0004dac4) phob2_cc_button_pane_t_ParamLimits

0x1c81,	// (0x0003f939) popup_wgtman_window

0xd3f6,	// (0x0004b0ae) scroll_pane_cp038

0x8b71,	// (0x00046829) wgtman_btn_pane_cp_01_ParamLimits

0x8b71,	// (0x00046829) wgtman_btn_pane_cp_01

0xea5d,	// (0x0004c715) wgtman_content_pane

0xea66,	// (0x0004c71e) wgtman_heading_pane

0x9ffd,	// (0x00047cb5) bg_heading_pane_cp02

0xea6f,	// (0x0004c727) wgtman_heading_pane_g1

0xea77,	// (0x0004c72f) wgtman_heading_pane_t1

0xea85,	// (0x0004c73d) scroll_pane_cp036

0xea8d,	// (0x0004c745) wgtman_list_pane

0xe296,	// (0x0004bf4e) wgtman_list_pane_t1_ParamLimits

0xe296,	// (0x0004bf4e) wgtman_list_pane_t1

0x624e,	// (0x00043f06) cam4_grid_pane

0x0f5e,	// (0x0003ec16) bg_button_pane_cp015_ParamLimits

0x6f17,	// (0x00044bcf) bg_button_pane_cp016_ParamLimits

0x6f23,	// (0x00044bdb) bg_button_pane_cp017_ParamLimits

0x6f3e,	// (0x00044bf6) popup_vitu2_query_window_g3_ParamLimits

0x6f3e,	// (0x00044bf6) popup_vitu2_query_window_g3

0x101e,	// (0x0003ecd6) popup_vitu2_query_window_t6_ParamLimits

0x101e,	// (0x0003ecd6) popup_vitu2_query_window_t6

0x1049,	// (0x0003ed01) popup_vitu2_query_window_t7_ParamLimits

0x1049,	// (0x0003ed01) popup_vitu2_query_window_t7

0xd82d,	// (0x0004b4e5) cam4_grid_pane_g1

0xd836,	// (0x0004b4ee) cam4_grid_pane_g2

0xea95,	// (0x0004c74d) cam4_grid_pane_g3

0xea9e,	// (0x0004c756) cam4_grid_pane_g4

0x0003,

0xfe21,	// (0x0004dad9) cam4_grid_pane_g

0x2953,	// (0x0004060b) aid_placing_vt_slider_lsc_ParamLimits

0x2c86,	// (0x0004093e) vidtel_button_pane_ParamLimits

0x2c86,	// (0x0004093e) vidtel_button_pane

0x9ffd,	// (0x00047cb5) bg_button_pane_cp034

0xeaa9,	// (0x0004c761) vidtel_button_pane_g1

0xeab1,	// (0x0004c769) vidtel_button_pane_t1

0xd504,	// (0x0004b1bc) aid_size_vtel_slider_touch

0xd807,	// (0x0004b4bf) scroll_pane_cp039

0x7be5,	// (0x0004589d) ncim_query_button_pane_cp01_ParamLimits

0x7c04,	// (0x000458bc) ncimui_query_pane_g1_ParamLimits

0xa6da,	// (0x00048392) input_focus_pane_cp012_ParamLimits

0xde69,	// (0x0004bb21) ncim_query_entry_pane_t1_ParamLimits

0xd807,	// (0x0004b4bf) scroll_pane_cp039_ParamLimits

0x3e13,	// (0x00041acb) navi_pane_bcale_mc_g1

0x3e1b,	// (0x00041ad3) navi_pane_bcale_mc_t1

0xe27b,	// (0x0004bf33) main_sp_fs_email_pane_g1

0xe287,	// (0x0004bf3f) main_sp_fs_email_pane_g2

0x0001,

0xfc24,	// (0x0004d8dc) main_sp_fs_email_pane_g

0xe506,	// (0x0004c1be) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe506,	// (0x0004c1be) list_single_cale_mrui_row_pane_g3

0x184a,	// (0x0003f502) list_single_recal_day_pane_g5_event_pane

0x1860,	// (0x0003f518) list_single_recal_day_pane_g7

0xeac7,	// (0x0004c77f) list_recal_day_event_pane_cp01

0xead0,	// (0x0004c788) list_recal_vselct_arw_lo_pane_cp01

0xead8,	// (0x0004c790) list_recal_vselct_arw_up_pane_cp01

0xeae0,	// (0x0004c798) list_recal_vselct_pane_cp01

0xd514,	// (0x0004b1cc) list_recal_day_event_pane_cp01_g1

0x1a26,	// (0x0003f6de) list_recal_day_event_pane_cp01_t1

0x1868,	// (0x0003f520) list_single_recal_day_pane_t1_ParamLimits

0x187a,	// (0x0003f532) list_single_recal_day_pane_t2_ParamLimits

0xfd04,	// (0x0004d9bc) list_single_recal_day_pane_t_ParamLimits

0xa6b8,	// (0x00048370) bg_notes_pane_ParamLimits

0xa783,	// (0x0004843b) list_notes_pane_ParamLimits

0x1e4a,	// (0x0003fb02) scroll_pane_cp06_ParamLimits

0xa7a5,	// (0x0004845d) main_notes_pane_ParamLimits

0xa6da,	// (0x00048392) main_welc_pane

0x9190,	// (0x00046e48) main_welc_body_pane_ParamLimits

0x9190,	// (0x00046e48) main_welc_body_pane

0x91ab,	// (0x00046e63) main_welc_opti_pane_ParamLimits

0x91ab,	// (0x00046e63) main_welc_opti_pane

0x920c,	// (0x00046ec4) main_welc_pane_t1_ParamLimits

0x920c,	// (0x00046ec4) main_welc_pane_t1

0xe7fe,	// (0x0004c4b6) main_welc_body_row_pane_ParamLimits

0xe7fe,	// (0x0004c4b6) main_welc_body_row_pane

0xa68c,	// (0x00048344) main_welc_opti_row_pane_ParamLimits

0xa68c,	// (0x00048344) main_welc_opti_row_pane

0xeafa,	// (0x0004c7b2) main_welc_opti_row_pane_g1

0x93b2,	// (0x0004706a) main_welc_opti_row_pane_t1

0xeb02,	// (0x0004c7ba) main_welc_body_row_pane_t1

0xe870,	// (0x0004c528) popup_notif_wgt_heading_pane

0xe88a,	// (0x0004c542) aid_size_list_notif_wgt_del_ParamLimits

0xe897,	// (0x0004c54f) list_notif_wgt_row_pane_g1_ParamLimits

0xe8a3,	// (0x0004c55b) list_notif_wgt_row_pane_g2_ParamLimits

0xe8b2,	// (0x0004c56a) list_notif_wgt_row_pane_g3_ParamLimits

0xfd6b,	// (0x0004da23) list_notif_wgt_row_pane_g_ParamLimits

0xe8bf,	// (0x0004c577) list_notif_wgt_row_pane_t1_ParamLimits

0xe8d5,	// (0x0004c58d) list_notif_wgt_row_pane_t2_ParamLimits

0xe8e7,	// (0x0004c59f) list_notif_wgt_row_pane_t3_ParamLimits

0xfd72,	// (0x0004da2a) list_notif_wgt_row_pane_t_ParamLimits

0x8bff,	// (0x000468b7) listrow_wgtman_pane_g1_ParamLimits

0x8c0c,	// (0x000468c4) listrow_wgtman_pane_g2_ParamLimits

0xfda2,	// (0x0004da5a) listrow_wgtman_pane_g_ParamLimits

0x18f6,	// (0x0003f5ae) listrow_wgtman_pane_t1_ParamLimits

0x190e,	// (0x0003f5c6) listrow_wgtman_pane_t2_ParamLimits

0xfda7,	// (0x0004da5f) listrow_wgtman_pane_t_ParamLimits

0x1934,	// (0x0003f5ec) wait_bar_pane_cp09_ParamLimits

0x9ffd,	// (0x00047cb5) bg_popup_heading_pane_cp02

0xeb11,	// (0x0004c7c9) popup_notif_wgt_heading_pane_g1

0xeb19,	// (0x0004c7d1) popup_notif_wgt_heading_pane_t1

0x9ffd,	// (0x00047cb5) main_vids_pane

0x9ffd,	// (0x00047cb5) vids_listscroll_pane

0x93c1,	// (0x00047079) scroll_pane_cp040

0x9ffd,	// (0x00047cb5) vids_list_pane

0x93cc,	// (0x00047084) vids_list_double_pane_ParamLimits

0x93cc,	// (0x00047084) vids_list_double_pane

0x93e0,	// (0x00047098) vids_list_double_pane_g1

0x93e9,	// (0x000470a1) vids_list_double_pane_t1

0x93f9,	// (0x000470b1) vids_list_double_pane_t2

0x0001,

0xfe40,	// (0x0004daf8) vids_list_double_pane_t

0xa6da,	// (0x00048392) main_ncimui_pane_ParamLimits

0x7a26,	// (0x000456de) main_ncimui_pane_g1_ParamLimits

0x7a34,	// (0x000456ec) main_ncimui_pane_g2_ParamLimits

0x7a34,	// (0x000456ec) main_ncimui_pane_g2

0x0001,

0xfb25,	// (0x0004d7dd) main_ncimui_pane_g_ParamLimits

0xfb25,	// (0x0004d7dd) main_ncimui_pane_g

0x91c6,	// (0x00046e7e) main_welc_pane_g1_ParamLimits

0x91c6,	// (0x00046e7e) main_welc_pane_g1

0x91d2,	// (0x00046e8a) main_welc_pane_g2_ParamLimits

0x91d2,	// (0x00046e8a) main_welc_pane_g2

0x0003,

0xfe2a,	// (0x0004dae2) main_welc_pane_g_ParamLimits

0xfe2a,	// (0x0004dae2) main_welc_pane_g

0xa6b8,	// (0x00048370) listscroll_mce_pane_ParamLimits

0x3edd,	// (0x00041b95) wait_bar_pane_cp10

0xc604,	// (0x0004a2bc) main_cale_day_pane_ParamLimits

0xc604,	// (0x0004a2bc) main_cale_week_pane_ParamLimits

0xa6b8,	// (0x00048370) main_messa_pane_ParamLimits

0x56a1,	// (0x00043359) main_clock2_btn_pane_ParamLimits

0x56a1,	// (0x00043359) main_clock2_btn_pane

0xcdc8,	// (0x0004aa80) main_clock2_btn_pane_cp01_ParamLimits

0xcdc8,	// (0x0004aa80) main_clock2_btn_pane_cp01

0xe4d7,	// (0x0004c18f) list_cale_mrui_pane_ParamLimits

0xe91d,	// (0x0004c5d5) main_cf0_pane_g2

0x0001,

0xfd79,	// (0x0004da31) main_cf0_pane_g

0x8e03,	// (0x00046abb) area_left_week_number_pane_ParamLimits

0x8e16,	// (0x00046ace) area_top_day_name_pane_ParamLimits

0x8e24,	// (0x00046adc) frame_month_view_pane_ParamLimits

0xe9f8,	// (0x0004c6b0) grid_month_view_pane_ParamLimits

0xea06,	// (0x0004c6be) frm_month_g1_ParamLimits

0x8ea2,	// (0x00046b5a) frm_month_g2_ParamLimits

0x8eb3,	// (0x00046b6b) frm_month_g3_ParamLimits

0x8ec4,	// (0x00046b7c) frm_month_g4_ParamLimits

0x8ed5,	// (0x00046b8d) frm_month_g5_ParamLimits

0x8ee6,	// (0x00046b9e) frm_month_g6_ParamLimits

0x8ef9,	// (0x00046bb1) frm_month_g7_ParamLimits

0xea13,	// (0x0004c6cb) frm_month_g8_ParamLimits

0x8f0c,	// (0x00046bc4) frm_month_g9_ParamLimits

0x8f19,	// (0x00046bd1) frm_month_g10_ParamLimits

0x8f26,	// (0x00046bde) frm_month_g11_ParamLimits

0x8f33,	// (0x00046beb) frm_month_g12_ParamLimits

0x8f40,	// (0x00046bf8) frm_month_g13_ParamLimits

0x8f4f,	// (0x00046c07) frm_month_g14_ParamLimits

0x8f5e,	// (0x00046c16) frm_month_g15_ParamLimits

0x8f6d,	// (0x00046c25) frm_month_g16_ParamLimits

0xfdd1,	// (0x0004da89) frm_month_g_ParamLimits

0xea20,	// (0x0004c6d8) cell_top_day_name_pane_t1_ParamLimits

0x8f7c,	// (0x00046c34) cell_area_left_week_number_pane_g1_ParamLimits

0x8f8b,	// (0x00046c43) cell_area_left_week_number_pane_t1_ParamLimits

0xa733,	// (0x000483eb) cell_month_view_pane_g1_ParamLimits

0x8fa1,	// (0x00046c59) cell_month_view_pane_t1_ParamLimits

0xa6b0,	// (0x00048368) main_clock2_btn_pane_g1

0xeb27,	// (0x0004c7df) main_clock2_btn_pane_t1

0xa6da,	// (0x00048392) listscroll_cmail_pane_ParamLimits

0xe27b,	// (0x0004bf33) main_sp_fs_email_pane_g1_ParamLimits

0xe287,	// (0x0004bf3f) main_sp_fs_email_pane_g2_ParamLimits

0xfc24,	// (0x0004d8dc) main_sp_fs_email_pane_g_ParamLimits

0xe5e0,	// (0x0004c298) list_recal_day_pane_ParamLimits

0xe5f1,	// (0x0004c2a9) mian_recal_day_pane_t1

0x1438,	// (0x0003f0f0) list_single_dyc_row_text_pane_t4_ParamLimits

0x1438,	// (0x0003f0f0) list_single_dyc_row_text_pane_t4

0x1475,	// (0x0003f12d) list_single_dyc_row_text_pane_t5_ParamLimits

0x1475,	// (0x0003f12d) list_single_dyc_row_text_pane_t5

0x14eb,	// (0x0003f1a3) list_single_dyc_row_text_pane_t6_ParamLimits

0x14eb,	// (0x0003f1a3) list_single_dyc_row_text_pane_t6

0x3a3c,	// (0x000416f4) aid_mgn_list_cale_time_pane

0xa6da,	// (0x00048392) main_gallery2_pane_ParamLimits

0xcddc,	// (0x0004aa94) main_clock2_pane_cp01_t1

0xcdea,	// (0x0004aaa2) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x0004d3c9) main_clock2_pane_cp01_t

0x2346,	// (0x0003fffe) cale_week_scroll_pane_g16_ParamLimits

0x2346,	// (0x0003fffe) cale_week_scroll_pane_g16

0xa943,	// (0x000485fb) vorec_slider_pane

0xeab1,	// (0x0004c769) vidtel_button_pane_t1_ParamLimits

0x884c,	// (0x00046504) main_fs_bigclock_clock_pane_g1_ParamLimits

0x884c,	// (0x00046504) main_fs_bigclock_clock_pane_g2_ParamLimits

0x885b,	// (0x00046513) main_fs_bigclock_clock_pane_g3_ParamLimits

0x885b,	// (0x00046513) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd27,	// (0x0004d9df) main_fs_bigclock_clock_pane_g_ParamLimits

0x886b,	// (0x00046523) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8880,	// (0x00046538) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd30,	// (0x0004d9e8) main_fs_bigclock_clock_pane_t_ParamLimits

0x4feb,	// (0x00042ca3) main_mup3_lyrics_pane_ParamLimits

0x4feb,	// (0x00042ca3) main_mup3_lyrics_pane

0x942e,	// (0x000470e6) main_mup3_lyrics_pane_t1_ParamLimits

0x942e,	// (0x000470e6) main_mup3_lyrics_pane_t1

0x5bc1,	// (0x00043879) aid_main_mp4_pane_t1_area

0x5bcb,	// (0x00043883) aid_main_mp4_pane_t2_area

0x5cd8,	// (0x00043990) main_mp4_pane_g7_ParamLimits

0x5cd8,	// (0x00043990) main_mp4_pane_g7

0x5ce4,	// (0x0004399c) main_mp4_pane_g8_ParamLimits

0x5ce4,	// (0x0004399c) main_mp4_pane_g8

0x60f6,	// (0x00043dae) aid_call6_pane_g1_size

0x913c,	// (0x00046df4) list_double_large_graphic_phob2_other_pane_ParamLimits

0x913c,	// (0x00046df4) list_double_large_graphic_phob2_other_pane

0x9455,	// (0x0004710d) list_double_large_graphic_phob2_other_pane_g1

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp026

0xa6da,	// (0x00048392) main_welc_pane_ParamLimits

0x82d9,	// (0x00045f91) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x82d9,	// (0x00045f91) main_sp_fs_ctrlbar_pane_g3

0x82f3,	// (0x00045fab) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x82f3,	// (0x00045fab) main_sp_fs_ctrlbar_pane_g4

0x8325,	// (0x00045fdd) toolbar2_fixed_button_pane_cp01

0x8330,	// (0x00045fe8) toolbar2_fixed_button_pane_cp02

0x833d,	// (0x00045ff5) toolbar2_fixed_button_pane_cp03

0x9180,	// (0x00046e38) list_welc_entry_pane_ParamLimits

0x9180,	// (0x00046e38) list_welc_entry_pane

0x91e0,	// (0x00046e98) main_welc_pane_g3_ParamLimits

0x91e0,	// (0x00046e98) main_welc_pane_g3

0x922a,	// (0x00046ee2) main_welc_pane_t2_ParamLimits

0x922a,	// (0x00046ee2) main_welc_pane_t2

0x923e,	// (0x00046ef6) main_welc_pane_t3_ParamLimits

0x923e,	// (0x00046ef6) main_welc_pane_t3

0x0005,

0xfe33,	// (0x0004daeb) main_welc_pane_t_ParamLimits

0xfe33,	// (0x0004daeb) main_welc_pane_t

0x9342,	// (0x00046ffa) welc_button_pane_ParamLimits

0x9342,	// (0x00046ffa) welc_button_pane

0x93a4,	// (0x0004705c) welc_service_logo_pane_ParamLimits

0x93a4,	// (0x0004705c) welc_service_logo_pane

0x945d,	// (0x00047115) list_single_welc_entry_pane_ParamLimits

0x945d,	// (0x00047115) list_single_welc_entry_pane

0x946e,	// (0x00047126) list_single_welc_entry_pane_g1

0x9478,	// (0x00047130) list_single_welc_entry_pane_t1

0x9486,	// (0x0004713e) list_single_welc_entry_pane_t2

0x0001,

0xfe45,	// (0x0004dafd) list_single_welc_entry_pane_t

0x9ffd,	// (0x00047cb5) bg_button_pane_cp035

0x9494,	// (0x0004714c) welc_button_pane_t1

0xeb35,	// (0x0004c7ed) welc_service_logo_pane_g1

0xeb3e,	// (0x0004c7f6) welc_service_logo_pane_g2

0x0001,

0xfe4a,	// (0x0004db02) welc_service_logo_pane_g

0x9ffd,	// (0x00047cb5) main_int_radio_pane

0xdcfe,	// (0x0004b9b6) list_single_fs_dyc_pane_g1

0x1952,	// (0x0003f60a) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x1952,	// (0x0003f60a) list_double_large_graphic_phob2_pane_g3

0x195e,	// (0x0003f616) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x195e,	// (0x0003f616) list_double_large_graphic_phob2_pane_g4

0x94a2,	// (0x0004715a) main_int_radio1_pane_ParamLimits

0x94a2,	// (0x0004715a) main_int_radio1_pane

0xeb47,	// (0x0004c7ff) find_pane_cp02

0x94b8,	// (0x00047170) input_focus_pane_cp12_ParamLimits

0x94b8,	// (0x00047170) input_focus_pane_cp12

0x94c4,	// (0x0004717c) input_focus_pane_cp13_ParamLimits

0x94c4,	// (0x0004717c) input_focus_pane_cp13

0x94dc,	// (0x00047194) input_focus_pane_cp14_ParamLimits

0x94dc,	// (0x00047194) input_focus_pane_cp14

0xeb50,	// (0x0004c808) int_radio1_listscroll_pane

0x94f4,	// (0x000471ac) main_int_radio1_pane_g1_ParamLimits

0x94f4,	// (0x000471ac) main_int_radio1_pane_g1

0x9500,	// (0x000471b8) main_int_radio1_pane_t1_ParamLimits

0x9500,	// (0x000471b8) main_int_radio1_pane_t1

0x9512,	// (0x000471ca) main_int_radio1_pane_t2_ParamLimits

0x9512,	// (0x000471ca) main_int_radio1_pane_t2

0x9526,	// (0x000471de) main_int_radio1_pane_t3_ParamLimits

0x9526,	// (0x000471de) main_int_radio1_pane_t3

0x953a,	// (0x000471f2) main_int_radio1_pane_t4_ParamLimits

0x953a,	// (0x000471f2) main_int_radio1_pane_t4

0xeb5a,	// (0x0004c812) main_int_radio1_pane_t5_ParamLimits

0xeb5a,	// (0x0004c812) main_int_radio1_pane_t5

0x9551,	// (0x00047209) main_int_radio1_pane_t6_ParamLimits

0x9551,	// (0x00047209) main_int_radio1_pane_t6

0x9563,	// (0x0004721b) main_int_radio1_pane_t7_ParamLimits

0x9563,	// (0x0004721b) main_int_radio1_pane_t7

0x9575,	// (0x0004722d) main_int_radio1_pane_t8_ParamLimits

0x9575,	// (0x0004722d) main_int_radio1_pane_t8

0x9587,	// (0x0004723f) main_int_radio1_pane_t9_ParamLimits

0x9587,	// (0x0004723f) main_int_radio1_pane_t9

0x9599,	// (0x00047251) main_int_radio1_pane_t10_ParamLimits

0x9599,	// (0x00047251) main_int_radio1_pane_t10

0x95ca,	// (0x00047282) main_int_radio1_pane_t11_ParamLimits

0x95ca,	// (0x00047282) main_int_radio1_pane_t11

0x95fb,	// (0x000472b3) main_int_radio1_pane_t12_ParamLimits

0x95fb,	// (0x000472b3) main_int_radio1_pane_t12

0x000b,

0xfe4f,	// (0x0004db07) main_int_radio1_pane_t_ParamLimits

0xfe4f,	// (0x0004db07) main_int_radio1_pane_t

0xea33,	// (0x0004c6eb) int_radio_list_pane

0xea3b,	// (0x0004c6f3) scroll_pane_cp037

0xeb6c,	// (0x0004c824) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb6c,	// (0x0004c824) list_double_large_graphic_int_radio_pane

0xeb80,	// (0x0004c838) list_double_large_graphic_int_radio_pane_g1

0x1a34,	// (0x0003f6ec) list_double_large_graphic_int_radio_pane_t1

0x1a42,	// (0x0003f6fa) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe68,	// (0x0004db20) list_double_large_graphic_int_radio_pane_t

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp027

0xeaea,	// (0x0004c7a2) main_button_pane_4

0x91ec,	// (0x00046ea4) main_welc_pane_g4_ParamLimits

0x91ec,	// (0x00046ea4) main_welc_pane_g4

0x9250,	// (0x00046f08) main_welc_pane_t4_ParamLimits

0x9250,	// (0x00046f08) main_welc_pane_t4

0x9262,	// (0x00046f1a) main_welc_pane_t5_ParamLimits

0x9262,	// (0x00046f1a) main_welc_pane_t5

0x9296,	// (0x00046f4e) main_welc_pane_t6_ParamLimits

0x9296,	// (0x00046f4e) main_welc_pane_t6

0x9350,	// (0x00047008) welc_button_pane_2_ParamLimits

0x9350,	// (0x00047008) welc_button_pane_2

0x936a,	// (0x00047022) welc_button_pane_3_ParamLimits

0x936a,	// (0x00047022) welc_button_pane_3

0xeaf2,	// (0x0004c7aa) welc_button_pane_4

0x9386,	// (0x0004703e) welc_button_pane_5_ParamLimits

0x9386,	// (0x0004703e) welc_button_pane_5

0x1aa4,	// (0x0003f75c) main_popup_welc_pane

0xeb98,	// (0x0004c850) main_welc_sk_g3

0xeba2,	// (0x0004c85a) main_welc_sk_g4

0xebac,	// (0x0004c864) main_welc_sk_t3

0xebbc,	// (0x0004c874) main_welc_sk_t4

0xebcc,	// (0x0004c884) popup_welc_pane_t4

0xebda,	// (0x0004c892) popup_welc_pane_t5

0xebe8,	// (0x0004c8a0) popup_welc_pane_t6

0x9ffd,	// (0x00047cb5) main_acti_pane

0x9ffd,	// (0x00047cb5) main_sso_pane

0x9612,	// (0x000472ca) sso_body_pane_ParamLimits

0x9612,	// (0x000472ca) sso_body_pane

0x9621,	// (0x000472d9) sso_logo_pane_ParamLimits

0x9621,	// (0x000472d9) sso_logo_pane

0x964a,	// (0x00047302) sso_sk_pane_ParamLimits

0x964a,	// (0x00047302) sso_sk_pane

0xa965,	// (0x0004861d) main_sso_logo_pane_g1

0x9657,	// (0x0004730f) sso_sk_pane_t1_ParamLimits

0x9657,	// (0x0004730f) sso_sk_pane_t1

0x966b,	// (0x00047323) sso_sk_pane_t2_ParamLimits

0x966b,	// (0x00047323) sso_sk_pane_t2

0x0001,

0xfe6d,	// (0x0004db25) sso_sk_pane_t_ParamLimits

0xfe6d,	// (0x0004db25) sso_sk_pane_t

0xec2a,	// (0x0004c8e2) aid_sso_gap

0xec33,	// (0x0004c8eb) aid_sso_txt1

0xec3d,	// (0x0004c8f5) aid_sso_txt2

0xec47,	// (0x0004c8ff) aid_sso_txt3

0x0002,

0xfe72,	// (0x0004db2a) aid_sso_txt

0xec51,	// (0x0004c909) aid_sso_widget

0x96c8,	// (0x00047380) sso_btn_pane_ParamLimits

0x96c8,	// (0x00047380) sso_btn_pane

0x9741,	// (0x000473f9) sso_option_pane_ParamLimits

0x9741,	// (0x000473f9) sso_option_pane

0x97bd,	// (0x00047475) sso_query_pane_ParamLimits

0x97bd,	// (0x00047475) sso_query_pane

0x980d,	// (0x000474c5) sso_query_pane_cp01_ParamLimits

0x980d,	// (0x000474c5) sso_query_pane_cp01

0x9865,	// (0x0004751d) sso_t_hdr_pane_ParamLimits

0x9865,	// (0x0004751d) sso_t_hdr_pane

0x9889,	// (0x00047541) sso_t_nml_pane_ParamLimits

0x9889,	// (0x00047541) sso_t_nml_pane

0xec5b,	// (0x0004c913) sso_t_sub_pane

0x962e,	// (0x000472e6) sso_popup_window_ParamLimits

0x962e,	// (0x000472e6) sso_popup_window

0x967d,	// (0x00047335) sso_apps_pane_ParamLimits

0x967d,	// (0x00047335) sso_apps_pane

0x96a0,	// (0x00047358) sso_body_pane_g1

0x96a8,	// (0x00047360) sso_body_pane_t1

0x96b8,	// (0x00047370) sso_body_pane_t2

0x0001,

0xfe79,	// (0x0004db31) sso_body_pane_t

0x9713,	// (0x000473cb) sso_btn_pane_cp01_ParamLimits

0x9713,	// (0x000473cb) sso_btn_pane_cp01

0x978f,	// (0x00047447) sso_prog_pane_ParamLimits

0x978f,	// (0x00047447) sso_prog_pane

0x98d9,	// (0x00047591) sso_t_hdr_pane_t1_ParamLimits

0x98d9,	// (0x00047591) sso_t_hdr_pane_t1

0xec70,	// (0x0004c928) input_focus_pane_cp10_ParamLimits

0xec70,	// (0x0004c928) input_focus_pane_cp10

0xec8a,	// (0x0004c942) sso_query_pane_t1_ParamLimits

0xec8a,	// (0x0004c942) sso_query_pane_t1

0xec9d,	// (0x0004c955) sso_query_pane_t2_ParamLimits

0xec9d,	// (0x0004c955) sso_query_pane_t2

0xecb7,	// (0x0004c96f) sso_query_pane_t3_ParamLimits

0xecb7,	// (0x0004c96f) sso_query_pane_t3

0xece1,	// (0x0004c999) sso_query_pane_t4_ParamLimits

0xece1,	// (0x0004c999) sso_query_pane_t4

0x0003,

0xfe7e,	// (0x0004db36) sso_query_pane_t_ParamLimits

0xfe7e,	// (0x0004db36) sso_query_pane_t

0x9ffd,	// (0x00047cb5) bg_button_pane_cp22

0xeb89,	// (0x0004c841) sso_btn_pane_t1

0x98f2,	// (0x000475aa) sso_t_nml_pane_t1_ParamLimits

0x98f2,	// (0x000475aa) sso_t_nml_pane_t1

0x990f,	// (0x000475c7) sso_option_row_pane_ParamLimits

0x990f,	// (0x000475c7) sso_option_row_pane

0xed05,	// (0x0004c9bd) sso_t_sub_pane_t1_ParamLimits

0xed05,	// (0x0004c9bd) sso_t_sub_pane_t1

0xa6da,	// (0x00048392) bg_popup_window_pane_cp11_ParamLimits

0xa6da,	// (0x00048392) bg_popup_window_pane_cp11

0xed22,	// (0x0004c9da) popup_sk_window_cp01_ParamLimits

0xed22,	// (0x0004c9da) popup_sk_window_cp01

0xed2f,	// (0x0004c9e7) sso_popup_body_pane_ParamLimits

0xed2f,	// (0x0004c9e7) sso_popup_body_pane

0xed3c,	// (0x0004c9f4) scroll_pane_cp21_ParamLimits

0xed3c,	// (0x0004c9f4) scroll_pane_cp21

0xed49,	// (0x0004ca01) sso_popup_body_t_pane_ParamLimits

0xed49,	// (0x0004ca01) sso_popup_body_t_pane

0xed56,	// (0x0004ca0e) sso_popup_body_t_hdr_pane_ParamLimits

0xed56,	// (0x0004ca0e) sso_popup_body_t_hdr_pane

0xed69,	// (0x0004ca21) sso_popup_body_t_nml_pane_ParamLimits

0xed69,	// (0x0004ca21) sso_popup_body_t_nml_pane

0xed87,	// (0x0004ca3f) sso_popup_body_t_sub_pane_ParamLimits

0xed87,	// (0x0004ca3f) sso_popup_body_t_sub_pane

0xedaa,	// (0x0004ca62) sso_popup_body_t_hdr_pane_t1

0x991c,	// (0x000475d4) sso_popup_body_t_nml_pane_t1_ParamLimits

0x991c,	// (0x000475d4) sso_popup_body_t_nml_pane_t1

0xedba,	// (0x0004ca72) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedba,	// (0x0004ca72) sso_popup_body_t_sub_pane_t1

0xa965,	// (0x0004861d) sso_prog_pane_g1

0x9963,	// (0x0004761b) sso_apps_pane_comp1_ParamLimits

0x9963,	// (0x0004761b) sso_apps_pane_comp1

0xeddf,	// (0x0004ca97) sso_apps_pane_comp1_g1

0xede7,	// (0x0004ca9f) sso_apps_pane_comp1_t1

0xee03,	// (0x0004cabb) sso_option_row_pane_g1

0xee0b,	// (0x0004cac3) sso_option_row_pane_t1

0x916e,	// (0x00046e26) bg_welc_area_ParamLimits

0x916e,	// (0x00046e26) bg_welc_area

0x92cc,	// (0x00046f84) sso_t_hdr_pane_a_t1_ParamLimits

0x92cc,	// (0x00046f84) sso_t_hdr_pane_a_t1

0x92e0,	// (0x00046f98) sso_t_nml_pane_a_t1_ParamLimits

0x92e0,	// (0x00046f98) sso_t_nml_pane_a_t1

0x930e,	// (0x00046fc6) sso_t_sub_pane_a_t1_ParamLimits

0x930e,	// (0x00046fc6) sso_t_sub_pane_a_t1

0xeb89,	// (0x0004c841) sso_btn_pane_t1_copy1

0x9ffd,	// (0x00047cb5) welc_button_pane_2_comp1

0xebf8,	// (0x0004c8b0) sso_t_hdr_pane_p_t1

0xec08,	// (0x0004c8c0) sso_t_nml_pane_p_t1

0xec18,	// (0x0004c8d0) sso_t_sub_pane_p_t1

0xe326,	// (0x0004bfde) list_cmail_pane_ParamLimits

0x9396,	// (0x0004704e) welc_button_pane_cp01_ParamLimits

0x9396,	// (0x0004704e) welc_button_pane_cp01

0x9ffd,	// (0x00047cb5) main_att_pane

0xedf5,	// (0x0004caad) input_focus_pane_cp10_t1

0xee0b,	// (0x0004cac3) sso_option_row_pane_t1_ParamLimits

0x9978,	// (0x00047630) main_att_body_pane_ParamLimits

0x9978,	// (0x00047630) main_att_body_pane

0x99a4,	// (0x0004765c) att_btn_pane_ParamLimits

0x99a4,	// (0x0004765c) att_btn_pane

0x99c6,	// (0x0004767e) att_btn_pane_cp01_ParamLimits

0x99c6,	// (0x0004767e) att_btn_pane_cp01

0x99e0,	// (0x00047698) att_li_srv_pane_ParamLimits

0x99e0,	// (0x00047698) att_li_srv_pane

0x99f2,	// (0x000476aa) att_opt_pane_ParamLimits

0x99f2,	// (0x000476aa) att_opt_pane

0x9a36,	// (0x000476ee) att_query_pane_ParamLimits

0x9a36,	// (0x000476ee) att_query_pane

0x9a7a,	// (0x00047732) att_query_pane_cp01_ParamLimits

0x9a7a,	// (0x00047732) att_query_pane_cp01

0x9abe,	// (0x00047776) att_t_hdr_pane_ParamLimits

0x9abe,	// (0x00047776) att_t_hdr_pane

0x9b1c,	// (0x000477d4) att_t_nml_pane_ParamLimits

0x9b1c,	// (0x000477d4) att_t_nml_pane

0x9b64,	// (0x0004781c) att_t_nml_pane_cp01_ParamLimits

0x9b64,	// (0x0004781c) att_t_nml_pane_cp01

0x9b88,	// (0x00047840) att_t_nmlb_pane_ParamLimits

0x9b88,	// (0x00047840) att_t_nmlb_pane

0x9ba2,	// (0x0004785a) att_term_pane_ParamLimits

0x9ba2,	// (0x0004785a) att_term_pane

0x9be8,	// (0x000478a0) main_att_body_pane_g1_ParamLimits

0x9be8,	// (0x000478a0) main_att_body_pane_g1

0xee21,	// (0x0004cad9) att_t_hdr_pane_t1_ParamLimits

0xee21,	// (0x0004cad9) att_t_hdr_pane_t1

0xee3a,	// (0x0004caf2) att_t_nml_pane_t1_ParamLimits

0xee3a,	// (0x0004caf2) att_t_nml_pane_t1

0xee5f,	// (0x0004cb17) att_btn_pane_t1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp23

0x9c1c,	// (0x000478d4) att_li_srv_row_pane_ParamLimits

0x9c1c,	// (0x000478d4) att_li_srv_row_pane

0xee6f,	// (0x0004cb27) att_t_nmlb_pane_t1_ParamLimits

0xee6f,	// (0x0004cb27) att_t_nmlb_pane_t1

0xee88,	// (0x0004cb40) att_query_pane_t1

0xee97,	// (0x0004cb4f) att_query_pane_t2

0xeea6,	// (0x0004cb5e) att_query_pane_t3

0x0002,

0xfe87,	// (0x0004db3f) att_query_pane_t

0xeeb5,	// (0x0004cb6d) input_focus_pane_cp11

0xeebe,	// (0x0004cb76) att_term_pane_t1_ParamLimits

0xeebe,	// (0x0004cb76) att_term_pane_t1

0x9ffd,	// (0x00047cb5) att_opt_row_pane

0xeedb,	// (0x0004cb93) att_opt_row_pane_g1

0xeee3,	// (0x0004cb9b) att_opt_row_pane_t1_ParamLimits

0xeee3,	// (0x0004cb9b) att_opt_row_pane_t1

0x9c2c,	// (0x000478e4) att_li_srv_row_pane_g1

0x9c34,	// (0x000478ec) att_li_srv_row_pane_t1

0x9c49,	// (0x00047901) att_li_srv_row_pane_t2

0x0001,

0xfe8e,	// (0x0004db46) att_li_srv_row_pane_t

0x9ffd,	// (0x00047cb5) main_call7_pane

0x9ffd,	// (0x00047cb5) main_vod_pane

0xec5b,	// (0x0004c913) sso_t_sub_pane_ParamLimits

0x998c,	// (0x00047644) att_btn_emg_pane_ParamLimits

0x998c,	// (0x00047644) att_btn_emg_pane

0x9c34,	// (0x000478ec) att_li_srv_row_pane_t1_ParamLimits

0x9c49,	// (0x00047901) att_li_srv_row_pane_t2_ParamLimits

0xfe8e,	// (0x0004db46) att_li_srv_row_pane_t_ParamLimits

0xeefc,	// (0x0004cbb4) att_btn_close_pane_g1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp24

0x49bc,	// (0x00042674) main_vod_body_pane_ParamLimits

0x49bc,	// (0x00042674) main_vod_body_pane

0x9c5e,	// (0x00047916) main_vod_body_pane_g1_ParamLimits

0x9c5e,	// (0x00047916) main_vod_body_pane_g1

0x9c8e,	// (0x00047946) scroll_pane_cp24_ParamLimits

0x9c8e,	// (0x00047946) scroll_pane_cp24

0x9cd6,	// (0x0004798e) vod_btn_pane_ParamLimits

0x9cd6,	// (0x0004798e) vod_btn_pane

0x9d16,	// (0x000479ce) vod_det_pane_ParamLimits

0x9d16,	// (0x000479ce) vod_det_pane

0x9d42,	// (0x000479fa) vod_logo_g1_ParamLimits

0x9d42,	// (0x000479fa) vod_logo_g1

0x9d7c,	// (0x00047a34) vod_opt_pane_ParamLimits

0x9d7c,	// (0x00047a34) vod_opt_pane

0x9dac,	// (0x00047a64) vod_opt_pane_cp01_ParamLimits

0x9dac,	// (0x00047a64) vod_opt_pane_cp01

0x9dd4,	// (0x00047a8c) vod_query_pane_ParamLimits

0x9dd4,	// (0x00047a8c) vod_query_pane

0x9dfe,	// (0x00047ab6) vod_query_pane_cp01_ParamLimits

0x9dfe,	// (0x00047ab6) vod_query_pane_cp01

0x9e0a,	// (0x00047ac2) vod_t_nml_pane_ParamLimits

0x9e0a,	// (0x00047ac2) vod_t_nml_pane

0x9eb8,	// (0x00047b70) vod_t_nml_pane_cp01_ParamLimits

0x9eb8,	// (0x00047b70) vod_t_nml_pane_cp01

0x9ef0,	// (0x00047ba8) vod_t_sub_pane_ParamLimits

0x9ef0,	// (0x00047ba8) vod_t_sub_pane

0x9f1e,	// (0x00047bd6) vod_t_sub_pane_cp01_ParamLimits

0x9f1e,	// (0x00047bd6) vod_t_sub_pane_cp01

0xeeb5,	// (0x0004cb6d) vod_query_field_pane

0xee88,	// (0x0004cb40) vod_query_pane_t1

0x9ffd,	// (0x00047cb5) bg_button_pane_cp25

0xef04,	// (0x0004cbbc) sso_btn_pane_t1_copy2

0x9f46,	// (0x00047bfe) vod_t_nml_pane_t1_ParamLimits

0x9f46,	// (0x00047bfe) vod_t_nml_pane_t1

0xef14,	// (0x0004cbcc) vod_opt_row_pane_ParamLimits

0xef14,	// (0x0004cbcc) vod_opt_row_pane

0xef35,	// (0x0004cbed) vod_t_sub_pane_t1_ParamLimits

0xef35,	// (0x0004cbed) vod_t_sub_pane_t1

0x9f83,	// (0x00047c3b) vod_det_cell_pane_ParamLimits

0x9f83,	// (0x00047c3b) vod_det_cell_pane

0x9ffd,	// (0x00047cb5) input_focus_pane_cp15

0xef4e,	// (0x0004cc06) vod_query_field_pane_t1

0xef5c,	// (0x0004cc14) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x0004cc14) vod_opt_row_pane_g1

0xef68,	// (0x0004cc20) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x0004cc20) vod_opt_row_pane_t1

0xef8d,	// (0x0004cc45) vod_det_cell_field_pane

0xef96,	// (0x0004cc4e) vod_det_cell_pane_g1

0xee88,	// (0x0004cb40) vod_det_cell_pane_t1

0x9ffd,	// (0x00047cb5) input_focus_pane_cp16

0xef4e,	// (0x0004cc06) vod_det_cell_field_pane_t1

0x8aea,	// (0x000467a2) call7_btn_grp_pane_ParamLimits

0x8aea,	// (0x000467a2) call7_btn_grp_pane

0x9f95,	// (0x00047c4d) call7_bubble_pane_ParamLimits

0x9f95,	// (0x00047c4d) call7_bubble_pane

0x8b27,	// (0x000467df) cell_call7_btn_pane_ParamLimits

0x8b27,	// (0x000467df) cell_call7_btn_pane

0x9fa4,	// (0x00047c5c) call7_pane_g1_ParamLimits

0x9fa4,	// (0x00047c5c) call7_pane_g1

0x9fb3,	// (0x00047c6b) call7_windows_conf_pane_ParamLimits

0x9fb3,	// (0x00047c6b) call7_windows_conf_pane

0x9fd3,	// (0x00047c8b) popup_call7_1st_window_ParamLimits

0x9fd3,	// (0x00047c8b) popup_call7_1st_window

0x9fe1,	// (0x00047c99) popup_call7_2nd_window_ParamLimits

0x9fe1,	// (0x00047c99) popup_call7_2nd_window

0x9fef,	// (0x00047ca7) popup_call7_3rd_window_ParamLimits

0x9fef,	// (0x00047ca7) popup_call7_3rd_window

0x9ffd,	// (0x00047cb5) bg_button_pane_cp26

0xe99e,	// (0x0004c656) cell_call7_btn_pane_g1

0xef26,	// (0x0004cbde) cell_call7_btn_pane_t1

0x9ffd,	// (0x00047cb5) bg_popup_window_pane_cp12

0xef9e,	// (0x0004cc56) popup_call7_1st_window_g1

0xefa6,	// (0x0004cc5e) popup_call7_1st_window_g2

0xefae,	// (0x0004cc66) popup_call7_1st_window_g3

0x0002,

0xfe93,	// (0x0004db4b) popup_call7_1st_window_g

0xefb6,	// (0x0004cc6e) popup_call7_1st_window_t1

0xefc5,	// (0x0004cc7d) popup_call7_1st_window_t2

0xefd5,	// (0x0004cc8d) popup_call7_1st_window_t3

0x0002,

0xfe9a,	// (0x0004db52) popup_call7_1st_window_t

0x9ffd,	// (0x00047cb5) bg_popup_window_pane_cp13

0xefe5,	// (0x0004cc9d) popup_call7_2nd_window_g1

0xefed,	// (0x0004cca5) popup_call7_2nd_window_g2

0xeff5,	// (0x0004ccad) popup_call7_2nd_window_g3

0x0002,

0xfea1,	// (0x0004db59) popup_call7_2nd_window_g

0xeffd,	// (0x0004ccb5) popup_call7_2nd_window_t1

0x9ffd,	// (0x00047cb5) bg_popup_window_pane_cp14

0xf00c,	// (0x0004ccc4) call7_list_conf_pane

0xf014,	// (0x0004cccc) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0004cccc) call7_list_conf_row_pane

0xf027,	// (0x0004ccdf) call7_list_conf_row_pane_g1

0xf02f,	// (0x0004cce7) call7_list_conf_row_pane_g2

0x0001,

0xfea8,	// (0x0004db60) call7_list_conf_row_pane_g

0xf037,	// (0x0004ccef) call7_list_conf_row_pane_t1

0x9ffd,	// (0x00047cb5) list_highlight_pane_cp22
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

} // end of namespace AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch_Small

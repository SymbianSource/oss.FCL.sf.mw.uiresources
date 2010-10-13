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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00047adc };

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
0x0b01,	// (0x000485dd) Screen

0x0b0d,	// (0x000485e9) application_window

0x0b49,	// (0x00048625) area_bottom_pane_ParamLimits

0x0b49,	// (0x00048625) area_bottom_pane

0x0b82,	// (0x0004865e) area_top_pane_ParamLimits

0x0b82,	// (0x0004865e) area_top_pane

0xad5a,	// (0x00052836) call_video_uplink_pane_ParamLimits

0xad5a,	// (0x00052836) call_video_uplink_pane

0x0c10,	// (0x000486ec) main_pane_ParamLimits

0x0c10,	// (0x000486ec) main_pane

0xb7a3,	// (0x0005327f) context_pane

0x53f9,	// (0x0004ced5) navi_pane

0x5430,	// (0x0004cf0c) popup_cale_events_window_ParamLimits

0x5430,	// (0x0004cf0c) popup_cale_events_window

0xb7b6,	// (0x00053292) popup_mup_playback_window

0x5448,	// (0x0004cf24) signal_pane

0x102d,	// (0x00048b09) main_browser_pane

0x199b,	// (0x00049477) main_burst_pane

0x5111,	// (0x0004cbed) main_calc_pane

0xb73f,	// (0x0005321b) main_cale_day_pane

0x1319,	// (0x00048df5) main_cale_month_pane

0xb73f,	// (0x0005321b) main_cale_week_pane

0x199b,	// (0x00049477) main_call_pane

0xecdf,	// (0x000567bb) main_call_poc_pane

0x199b,	// (0x00049477) main_camera_pane

0x199b,	// (0x00049477) main_chi_dic_pane

0x3585,	// (0x0004b061) main_clock_pane

0xecdf,	// (0x000567bb) main_fmradio_pane

0x199b,	// (0x00049477) main_graph_messa_pane

0xecdf,	// (0x000567bb) main_help_pane

0x102d,	// (0x00048b09) main_im_pane

0x0e6c,	// (0x00048948) main_image_pane_ParamLimits

0x0e6c,	// (0x00048948) main_image_pane

0xecdf,	// (0x000567bb) main_location2_pane

0x199b,	// (0x00049477) main_location_pane

0x0e6c,	// (0x00048948) main_messa_pane

0xecdf,	// (0x000567bb) main_mp2_pane

0x199b,	// (0x00049477) main_mp_pane

0xecdf,	// (0x000567bb) main_msg_pane

0xecdf,	// (0x000567bb) main_mup_eq_pane

0xecdf,	// (0x000567bb) main_mup_pane

0x102d,	// (0x00048b09) main_notes_pane

0xecdf,	// (0x000567bb) main_pec_pane

0xecdf,	// (0x000567bb) main_phob_pane

0xecdf,	// (0x000567bb) main_pinb_pane

0xecdf,	// (0x000567bb) main_postcard_pane

0xecdf,	// (0x000567bb) main_qdial_pane

0x199b,	// (0x00049477) main_skin_pane

0xecdf,	// (0x000567bb) main_smil2_pane

0x199b,	// (0x00049477) main_smil_pane

0x199b,	// (0x00049477) main_video_pane

0x199b,	// (0x00049477) main_video_tele_pane

0x0e6c,	// (0x00048948) main_viewer_pane_ParamLimits

0x0e6c,	// (0x00048948) main_viewer_pane

0x199b,	// (0x00049477) main_vorec_pane

0x5167,	// (0x0004cc43) popup_blid_sat_info_window_ParamLimits

0x5167,	// (0x0004cc43) popup_blid_sat_info_window

0x51cb,	// (0x0004cca7) popup_dyc_status_message_window_ParamLimits

0x51cb,	// (0x0004cca7) popup_dyc_status_message_window

0x51e5,	// (0x0004ccc1) popup_grid_large_graphic_window_ParamLimits

0x51e5,	// (0x0004ccc1) popup_grid_large_graphic_window

0x52a7,	// (0x0004cd83) popup_loc_request_window_ParamLimits

0x52a7,	// (0x0004cd83) popup_loc_request_window

0x53cd,	// (0x0004cea9) popup_wml_address_window_ParamLimits

0x53cd,	// (0x0004cea9) popup_wml_address_window

0x4f4f,	// (0x0004ca2b) call_muted_g1

0x44d4,	// (0x0004bfb0) popup_call_audio_conf_window_ParamLimits

0x44d4,	// (0x0004bfb0) popup_call_audio_conf_window

0x4f5f,	// (0x0004ca3b) popup_call_audio_first_window_ParamLimits

0x4f5f,	// (0x0004ca3b) popup_call_audio_first_window

0x4fd5,	// (0x0004cab1) popup_call_audio_in_window_ParamLimits

0x4fd5,	// (0x0004cab1) popup_call_audio_in_window

0x5011,	// (0x0004caed) popup_call_audio_out_window_ParamLimits

0x5011,	// (0x0004caed) popup_call_audio_out_window

0x504b,	// (0x0004cb27) popup_call_audio_second_window_ParamLimits

0x504b,	// (0x0004cb27) popup_call_audio_second_window

0x50a1,	// (0x0004cb7d) popup_call_audio_wait_window_ParamLimits

0x50a1,	// (0x0004cb7d) popup_call_audio_wait_window

0x50d6,	// (0x0004cbb2) popup_number_entry_window_ParamLimits

0x50d6,	// (0x0004cbb2) popup_number_entry_window

0xdf29,	// (0x00055a05) bg_popup_call_pane_cp05_ParamLimits

0xdf29,	// (0x00055a05) bg_popup_call_pane_cp05

0xdf49,	// (0x00055a25) popup_number_entry_window_t1

0xdf5c,	// (0x00055a38) popup_number_entry_window_t2

0xdf6e,	// (0x00055a4a) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x00056b1c) popup_number_entry_window_t

0xdfb5,	// (0x00055a91) text_title_cp2

0xdfc8,	// (0x00055aa4) bg_popup_call_pane_cp_ParamLimits

0xdfc8,	// (0x00055aa4) bg_popup_call_pane_cp

0xdfd6,	// (0x00055ab2) call_thumbnail_pane

0xdfde,	// (0x00055aba) popup_call_audio_in_window_g1_ParamLimits

0xdfde,	// (0x00055aba) popup_call_audio_in_window_g1

0xdfea,	// (0x00055ac6) popup_call_audio_in_window_g2_ParamLimits

0xdfea,	// (0x00055ac6) popup_call_audio_in_window_g2

0xdff6,	// (0x00055ad2) popup_call_audio_in_window_g3_ParamLimits

0xdff6,	// (0x00055ad2) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x00056b25) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x00056b25) popup_call_audio_in_window_g

0xe002,	// (0x00055ade) popup_call_audio_in_window_t1_ParamLimits

0xe002,	// (0x00055ade) popup_call_audio_in_window_t1

0xe01e,	// (0x00055afa) popup_call_audio_in_window_t2_ParamLimits

0xe01e,	// (0x00055afa) popup_call_audio_in_window_t2

0xe03a,	// (0x00055b16) popup_call_audio_in_window_t3_ParamLimits

0xe03a,	// (0x00055b16) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x00056b2c) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x00056b2c) popup_call_audio_in_window_t

0xdfc8,	// (0x00055aa4) bg_popup_call_pane_cp01_ParamLimits

0xdfc8,	// (0x00055aa4) bg_popup_call_pane_cp01

0xdfd6,	// (0x00055ab2) call_thumbnail_pane_cp02

0xe04d,	// (0x00055b29) call_type_pane_cp022

0xe055,	// (0x00055b31) popup_call_audio_out_window_g1_ParamLimits

0xe055,	// (0x00055b31) popup_call_audio_out_window_g1

0xe067,	// (0x00055b43) popup_call_audio_out_window_g2_ParamLimits

0xe067,	// (0x00055b43) popup_call_audio_out_window_g2

0xe073,	// (0x00055b4f) popup_call_audio_out_window_g3_ParamLimits

0xe073,	// (0x00055b4f) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x00056b33) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x00056b33) popup_call_audio_out_window_g

0xe085,	// (0x00055b61) popup_call_audio_out_window_t1_ParamLimits

0xe085,	// (0x00055b61) popup_call_audio_out_window_t1

0xe09d,	// (0x00055b79) popup_call_audio_out_window_t2_ParamLimits

0xe09d,	// (0x00055b79) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x00056b3a) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x00056b3a) popup_call_audio_out_window_t

0xe0b2,	// (0x00055b8e) bg_popup_call_pane_ParamLimits

0xe0b2,	// (0x00055b8e) bg_popup_call_pane

0x0d3d,	// (0x00048819) call_thumbnail_pane_cp_ParamLimits

0x0d3d,	// (0x00048819) call_thumbnail_pane_cp

0xe136,	// (0x00055c12) call_type_pane_cp01_ParamLimits

0xe136,	// (0x00055c12) call_type_pane_cp01

0xe17a,	// (0x00055c56) popup_call_audio_first_window_g1_ParamLimits

0xe17a,	// (0x00055c56) popup_call_audio_first_window_g1

0xe1c6,	// (0x00055ca2) popup_call_audio_first_window_g2_ParamLimits

0xe1c6,	// (0x00055ca2) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x00056b3f) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x00056b3f) popup_call_audio_first_window_g

0xe20a,	// (0x00055ce6) popup_call_audio_first_window_t1_ParamLimits

0xe20a,	// (0x00055ce6) popup_call_audio_first_window_t1

0xec24,	// (0x00056700) popup_call_audio_first_window_t4_ParamLimits

0xec24,	// (0x00056700) popup_call_audio_first_window_t4

0xecb0,	// (0x0005678c) popup_call_audio_first_window_t5_ParamLimits

0xecb0,	// (0x0005678c) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x00056b44) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x00056b44) popup_call_audio_first_window_t

0xecdf,	// (0x000567bb) bg_popup_call_pane_cp02

0xece9,	// (0x000567c5) call_type_pane_cp023

0xecf1,	// (0x000567cd) popup_call_audio_wait_window_g1

0xecf9,	// (0x000567d5) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x00056b4b) popup_call_audio_wait_window_g

0xed01,	// (0x000567dd) popup_call_audio_wait_window_t3

0xed0f,	// (0x000567eb) bg_popup_call_pane_cp03_ParamLimits

0xed0f,	// (0x000567eb) bg_popup_call_pane_cp03

0xed6f,	// (0x0005684b) call_thumbnail_pane_cp011_ParamLimits

0xed6f,	// (0x0005684b) call_thumbnail_pane_cp011

0xed7b,	// (0x00056857) call_type_pane_cp034_ParamLimits

0xed7b,	// (0x00056857) call_type_pane_cp034

0xedb7,	// (0x00056893) popup_call_audio_second_window_g1_ParamLimits

0xedb7,	// (0x00056893) popup_call_audio_second_window_g1

0xedf3,	// (0x000568cf) popup_call_audio_second_window_g2_ParamLimits

0xedf3,	// (0x000568cf) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x00056b50) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x00056b50) popup_call_audio_second_window_g

0x0d61,	// (0x0004883d) popup_call_audio_second_window_t1_ParamLimits

0x0d61,	// (0x0004883d) popup_call_audio_second_window_t1

0x0de2,	// (0x000488be) popup_call_audio_second_window_t2_ParamLimits

0x0de2,	// (0x000488be) popup_call_audio_second_window_t2

0x0e18,	// (0x000488f4) popup_call_audio_second_window_t3_ParamLimits

0x0e18,	// (0x000488f4) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x00056b55) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x00056b55) popup_call_audio_second_window_t

0xecdf,	// (0x000567bb) bg_popup_call_pane_cp04

0x0e4e,	// (0x0004892a) list_conf_pane

0x0e56,	// (0x00048932) popup_call_audio_conf_window_t1

0x0e64,	// (0x00048940) call_thumbnail_pane_g1

0x0e6c,	// (0x00048948) bg_pinb_pane_ParamLimits

0x0e6c,	// (0x00048948) bg_pinb_pane

0x0e7a,	// (0x00048956) find_pinb_pane

0x0e6c,	// (0x00048948) listscroll_pinb_pane_ParamLimits

0x0e6c,	// (0x00048948) listscroll_pinb_pane

0x0e84,	// (0x00048960) pinb_bg_pane_g1

0x0e84,	// (0x00048960) pinb_bg_pane_g2

0x0e84,	// (0x00048960) pinb_bg_pane_g3

0x0e84,	// (0x00048960) pinb_bg_pane_g4

0x0e84,	// (0x00048960) pinb_bg_pane_g5

0x0e84,	// (0x00048960) pinb_bg_pane_g6

0x0e84,	// (0x00048960) pinb_bg_pane_g7

0x0e84,	// (0x00048960) pinb_bg_pane_g8

0x0e84,	// (0x00048960) pinb_bg_pane_g9

0x0e84,	// (0x00048960) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x00056b5c) pinb_bg_pane_g

0xdf1f,	// (0x000559fb) grid_pinb_pane

0xdf1f,	// (0x000559fb) list_pinb_pane

0x0cd1,	// (0x000487ad) scroll_pane_cp01_ParamLimits

0x0cd1,	// (0x000487ad) scroll_pane_cp01

0x0e8e,	// (0x0004896a) find_pinb_pane_g1_ParamLimits

0x0e8e,	// (0x0004896a) find_pinb_pane_g1

0x0ea6,	// (0x00048982) find_pinb_pane_t1

0x0eb8,	// (0x00048994) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x00056b76) find_pinb_pane_t

0x0ecd,	// (0x000489a9) input_focus_pane_cp01_ParamLimits

0x0ecd,	// (0x000489a9) input_focus_pane_cp01

0x0ed9,	// (0x000489b5) cell_pinb_pane_ParamLimits

0x0ed9,	// (0x000489b5) cell_pinb_pane

0x0ee7,	// (0x000489c3) cell_pinb_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_pinb_pane_g1

0x0ef5,	// (0x000489d1) cell_pinb_pane_g2_ParamLimits

0x0ef5,	// (0x000489d1) cell_pinb_pane_g2

0x0ef5,	// (0x000489d1) cell_pinb_pane_g3_ParamLimits

0x0ef5,	// (0x000489d1) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x00056b7b) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x00056b7b) cell_pinb_pane_g

0xecdf,	// (0x000567bb) grid_highlight_pane_cp01

0x0ed9,	// (0x000489b5) list_pinb_item_pane_ParamLimits

0x0ed9,	// (0x000489b5) list_pinb_item_pane

0xdf1f,	// (0x000559fb) list_highlight_pane_cp02

0x0f03,	// (0x000489df) list_pinb_item_pane_g1_ParamLimits

0x0f03,	// (0x000489df) list_pinb_item_pane_g1

0x0ef5,	// (0x000489d1) list_pinb_item_pane_g2_ParamLimits

0x0ef5,	// (0x000489d1) list_pinb_item_pane_g2

0x0ee7,	// (0x000489c3) list_pinb_item_pane_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_pinb_item_pane_g3

0x0ef5,	// (0x000489d1) list_pinb_item_pane_g4_ParamLimits

0x0ef5,	// (0x000489d1) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x00056b82) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x00056b82) list_pinb_item_pane_g

0x0f11,	// (0x000489ed) list_pinb_item_pane_t1_ParamLimits

0x0f11,	// (0x000489ed) list_pinb_item_pane_t1

0x0f45,	// (0x00048a21) calc_display_pane

0x0f6a,	// (0x00048a46) calc_paper_pane

0x0f8d,	// (0x00048a69) grid_calc_pane

0xdf1f,	// (0x000559fb) bg_list_pane_cp01

0x0fbb,	// (0x00048a97) clock_g1

0x0fbb,	// (0x00048a97) clock_g2

0x0001,

0xf0af,	// (0x00056b8b) clock_g

0x0fc5,	// (0x00048aa1) clock_t1_ParamLimits

0x0fc5,	// (0x00048aa1) clock_t1

0x0fd9,	// (0x00048ab5) clock_t2_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t2

0x0fd9,	// (0x00048ab5) clock_t3_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t3

0x0fd9,	// (0x00048ab5) clock_t4_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t4

0x0fc5,	// (0x00048aa1) clock_t5_ParamLimits

0x0fc5,	// (0x00048aa1) clock_t5

0x0fd9,	// (0x00048ab5) clock_t6_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t6

0x0fd9,	// (0x00048ab5) clock_t7_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t7

0x0fd9,	// (0x00048ab5) clock_t8_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t8

0x0fd9,	// (0x00048ab5) clock_t9_ParamLimits

0x0fd9,	// (0x00048ab5) clock_t9

0x0008,

0xf0b4,	// (0x00056b90) clock_t_ParamLimits

0xf0b4,	// (0x00056b90) clock_t

0xdf1f,	// (0x000559fb) popup_clock_analogue_window_cp02

0xdf1f,	// (0x000559fb) popup_clock_digital_window_cp01

0xecdf,	// (0x000567bb) listscroll_help_pane

0xecdf,	// (0x000567bb) phob_pre_status_pane

0x0fed,	// (0x00048ac9) grid_qdial_pane

0x0e6c,	// (0x00048948) listscroll_mce_pane

0x0e6c,	// (0x00048948) bg_notes_pane

0x0ff7,	// (0x00048ad3) list_notes_pane

0x1005,	// (0x00048ae1) scroll_pane_cp06

0x1019,	// (0x00048af5) bg_calc_paper_pane

0xad80,	// (0x0005285c) list_calc_pane

0x102d,	// (0x00048b09) bg_calc_display_pane

0x1039,	// (0x00048b15) calc_display_pane_t1

0x104e,	// (0x00048b2a) calc_display_pane_t2

0xad9a,	// (0x00052876) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x00056ba3) calc_display_pane_t

0x1063,	// (0x00048b3f) cell_calc_pane_ParamLimits

0x1063,	// (0x00048b3f) cell_calc_pane

0x109e,	// (0x00048b7a) bg_calc_paper_pane_g1

0x10aa,	// (0x00048b86) bg_calc_paper_pane_g2

0x10b6,	// (0x00048b92) bg_calc_paper_pane_g3

0x10c2,	// (0x00048b9e) bg_calc_paper_pane_g4

0x10ce,	// (0x00048baa) bg_calc_paper_pane_g5

0x10da,	// (0x00048bb6) bg_calc_paper_pane_g6

0x10ed,	// (0x00048bc9) bg_calc_paper_pane_g7

0x1100,	// (0x00048bdc) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x00056baa) bg_calc_paper_pane_g

0x1113,	// (0x00048bef) calc_bg_paper_pane_g9

0x1126,	// (0x00048c02) list_calc_item_pane_ParamLimits

0x1126,	// (0x00048c02) list_calc_item_pane

0x113e,	// (0x00048c1a) list_calc_item_pane_g1

0xadac,	// (0x00052888) list_calc_item_pane_t1_ParamLimits

0xadac,	// (0x00052888) list_calc_item_pane_t1

0x114b,	// (0x00048c27) list_calc_item_pane_t2_ParamLimits

0x114b,	// (0x00048c27) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x00056bbb) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x00056bbb) list_calc_item_pane_t

0x0e84,	// (0x00048960) cell_calc_pane_g1

0x117d,	// (0x00048c59) grid_highlight_pane_cp02

0x119f,	// (0x00048c7b) bg_calc_display_pane_g1

0x11a8,	// (0x00048c84) bg_calc_display_pane_g2

0x11b2,	// (0x00048c8e) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x00056bc5) bg_calc_display_pane_g

0x11bb,	// (0x00048c97) cell_qdial_pane_ParamLimits

0x11bb,	// (0x00048c97) cell_qdial_pane

0x11cf,	// (0x00048cab) cell_qdial_pane_g1_ParamLimits

0x11cf,	// (0x00048cab) cell_qdial_pane_g1

0x11e5,	// (0x00048cc1) cell_qdial_pane_g2_ParamLimits

0x11e5,	// (0x00048cc1) cell_qdial_pane_g2

0x11f6,	// (0x00048cd2) cell_qdial_pane_g3_ParamLimits

0x11f6,	// (0x00048cd2) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x00056bcc) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x00056bcc) cell_qdial_pane_g

0x1218,	// (0x00048cf4) cell_qdial_pane_t1_ParamLimits

0x1218,	// (0x00048cf4) cell_qdial_pane_t1

0x1230,	// (0x00048d0c) cell_qdial_pane_t2_ParamLimits

0x1230,	// (0x00048d0c) cell_qdial_pane_t2

0x1243,	// (0x00048d1f) cell_qdial_pane_t3_ParamLimits

0x1243,	// (0x00048d1f) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x00056bd5) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x00056bd5) cell_qdial_pane_t

0xecdf,	// (0x000567bb) grid_highlight_pane_cp04

0x1256,	// (0x00048d32) thumbnail_qdial_pane_ParamLimits

0x1256,	// (0x00048d32) thumbnail_qdial_pane

0x12b2,	// (0x00048d8e) list_help_pane

0x12bb,	// (0x00048d97) scroll_pane_cp02

0x12c4,	// (0x00048da0) help_list_pane_t1_ParamLimits

0x12c4,	// (0x00048da0) help_list_pane_t1

0xadbe,	// (0x0005289a) bg_notes_pane_g2

0xadc6,	// (0x000528a2) bg_notes_pane_g3

0xadce,	// (0x000528aa) notes_bg_pane_g1

0xadd6,	// (0x000528b2) notes_bg_pane_g4

0xadde,	// (0x000528ba) notes_bg_pane_g5

0xade6,	// (0x000528c2) notes_bg_pane_g6

0xadee,	// (0x000528ca) notes_bg_pane_g7

0xadf6,	// (0x000528d2) notes_bg_pane_g8

0xadfe,	// (0x000528da) notes_bg_pane_g9

0x0006,

0xf117,	// (0x00056bf3) notes_bg_pane_g

0x12e8,	// (0x00048dc4) list_notes_text_pane_ParamLimits

0x12e8,	// (0x00048dc4) list_notes_text_pane

0x12ff,	// (0x00048ddb) list_notes_text_pane_g1

0xae06,	// (0x000528e2) list_notes_text_pane_t1

0x1319,	// (0x00048df5) listscroll_cale_week_pane

0x134c,	// (0x00048e28) bg_cale_heading_pane

0x1370,	// (0x00048e4c) bg_cale_pane_cp01

0x138d,	// (0x00048e69) cale_week_corner_pane

0x13ac,	// (0x00048e88) cale_week_day_heading_pane

0x13d5,	// (0x00048eb1) cale_week_scroll_pane_g1

0x13f4,	// (0x00048ed0) cale_week_scroll_pane_g2

0x140c,	// (0x00048ee8) cale_week_scroll_pane_g3

0x1424,	// (0x00048f00) cale_week_scroll_pane_g4

0x143c,	// (0x00048f18) cale_week_scroll_pane_g5

0x145c,	// (0x00048f38) cale_week_scroll_pane_g6

0x147c,	// (0x00048f58) cale_week_scroll_pane_g7

0x14a0,	// (0x00048f7c) cale_week_scroll_pane_g8

0x14c4,	// (0x00048fa0) cale_week_scroll_pane_g9

0x14dc,	// (0x00048fb8) cale_week_scroll_pane_g10

0x14f4,	// (0x00048fd0) cale_week_scroll_pane_g11

0x150c,	// (0x00048fe8) cale_week_scroll_pane_g12

0x1530,	// (0x0004900c) cale_week_scroll_pane_g13

0x1530,	// (0x0004900c) cale_week_scroll_pane_g14

0x1530,	// (0x0004900c) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x00056c02) cale_week_scroll_pane_g

0x1578,	// (0x00049054) cale_week_time_pane

0x159c,	// (0x00049078) grid_cale_week_pane

0x15e0,	// (0x000490bc) scroll_pane_cp08

0x15fd,	// (0x000490d9) cell_cale_week_pane_ParamLimits

0x15fd,	// (0x000490d9) cell_cale_week_pane

0x1699,	// (0x00049175) cale_week_day_heading_pane_t1

0x16c3,	// (0x0004919f) cale_week_day_heading_pane_t2

0x16f2,	// (0x000491ce) cale_week_day_heading_pane_t3

0x1721,	// (0x000491fd) cale_week_day_heading_pane_t4

0x1750,	// (0x0004922c) cale_week_day_heading_pane_t5

0x1783,	// (0x0004925f) cale_week_day_heading_pane_t6

0x17ba,	// (0x00049296) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x00056c23) cale_week_day_heading_pane_t

0x17e4,	// (0x000492c0) bg_cale_side_pane

0x17f2,	// (0x000492ce) cale_week_time_pane_t1

0x180c,	// (0x000492e8) cale_week_time_pane_t2

0x1826,	// (0x00049302) cale_week_time_pane_t3

0x1840,	// (0x0004931c) cale_week_time_pane_t4

0x185a,	// (0x00049336) cale_week_time_pane_t5

0x1874,	// (0x00049350) cale_week_time_pane_t6

0x1894,	// (0x00049370) cale_week_time_pane_t7

0x18ba,	// (0x00049396) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x00056c32) cale_week_time_pane_t

0x18e0,	// (0x000493bc) cell_cale_week_pane_g2

0x1904,	// (0x000493e0) cell_cale_week_pane_g3_ParamLimits

0x1904,	// (0x000493e0) cell_cale_week_pane_g3

0x191c,	// (0x000493f8) grid_highlight_pane_cp07

0x1924,	// (0x00049400) listscroll_gms_pane

0x192e,	// (0x0004940a) grid_gms_pane

0x1937,	// (0x00049413) listscroll_gms_pane_g1

0x193f,	// (0x0004941b) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x00056c43) listscroll_gms_pane_g

0x1947,	// (0x00049423) scroll_pane_cp010

0x1952,	// (0x0004942e) cell_gms_pane_ParamLimits

0x1952,	// (0x0004942e) cell_gms_pane

0x1969,	// (0x00049445) cell_gms_pane_g1

0x1971,	// (0x0004944d) cell_gms_pane_g2

0x1979,	// (0x00049455) cell_gms_pane_g3

0x1982,	// (0x0004945e) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x00056c48) cell_gms_pane_g

0x198b,	// (0x00049467) grid_highlight_pane_cp09

0x4ed3,	// (0x0004c9af) phob_pre_status_pane_g1

0x4edb,	// (0x0004c9b7) phob_pre_status_pane_g2

0x4ee3,	// (0x0004c9bf) phob_pre_status_pane_g3

0x4eeb,	// (0x0004c9c7) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x00056ff7) phob_pre_status_pane_g

0x4efb,	// (0x0004c9d7) phob_pre_status_pane_t1

0x4f0b,	// (0x0004c9e7) phob_pre_status_pane_t2

0x4f1b,	// (0x0004c9f7) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x00057002) phob_pre_status_pane_t

0x199b,	// (0x00049477) bg_list_pane_cp05

0x19a3,	// (0x0004947f) grid_vorec_pane

0x19ad,	// (0x00049489) vorec_t1

0x19bb,	// (0x00049497) vorec_t2

0x19c9,	// (0x000494a5) vorec_t3

0x19d7,	// (0x000494b3) vorec_t4

0xdf11,	// (0x000559ed) vorec_t5

0x9ebe,	// (0x0005199a) vorec_t6

0x0004,

0xf175,	// (0x00056c51) vorec_t

0x9ecc,	// (0x000519a8) wait_bar_pane_cp01

0x19f3,	// (0x000494cf) cell_vorec_pane_ParamLimits

0x19f3,	// (0x000494cf) cell_vorec_pane

0xae14,	// (0x000528f0) cell_vorec_pane_g1

0xecdf,	// (0x000567bb) grid_highlight_pane_cp05

0x0cd1,	// (0x000487ad) cams_zoom_pane

0x0cd1,	// (0x000487ad) image_vga_pane

0x0ee7,	// (0x000489c3) main_camera_pane_g1

0x0ee7,	// (0x000489c3) main_camera_pane_g2

0x0ee7,	// (0x000489c3) main_camera_pane_g3

0x0ee7,	// (0x000489c3) main_camera_pane_g4

0x0ee7,	// (0x000489c3) main_camera_pane_g5

0x0ee7,	// (0x000489c3) main_camera_pane_g6

0x0ee7,	// (0x000489c3) main_camera_pane_g7

0x0007,

0xf180,	// (0x00056c5c) main_camera_pane_g

0x0fc5,	// (0x00048aa1) main_camera_pane_t1

0x0fc5,	// (0x00048aa1) main_camera_pane_t2

0x0001,

0xf191,	// (0x00056c6d) main_camera_pane_t

0x1a1c,	// (0x000494f8) cams_zoom_pane_cp_ParamLimits

0x1a1c,	// (0x000494f8) cams_zoom_pane_cp

0x1a50,	// (0x0004952c) image_cif_pane_ParamLimits

0x1a50,	// (0x0004952c) image_cif_pane

0xdf1f,	// (0x000559fb) image_subqcif_pane

0x1a62,	// (0x0004953e) main_video_pane_g1_ParamLimits

0x1a62,	// (0x0004953e) main_video_pane_g1

0x1a90,	// (0x0004956c) main_video_pane_g2_ParamLimits

0x1a90,	// (0x0004956c) main_video_pane_g2

0x1aca,	// (0x000495a6) main_video_pane_g3_ParamLimits

0x1aca,	// (0x000495a6) main_video_pane_g3

0x1aca,	// (0x000495a6) main_video_pane_g4_ParamLimits

0x1aca,	// (0x000495a6) main_video_pane_g4

0x1afe,	// (0x000495da) main_video_pane_g5_ParamLimits

0x1afe,	// (0x000495da) main_video_pane_g5

0x1b0c,	// (0x000495e8) main_video_pane_g6_ParamLimits

0x1b0c,	// (0x000495e8) main_video_pane_g6

0x0006,

0xf196,	// (0x00056c72) main_video_pane_g_ParamLimits

0xf196,	// (0x00056c72) main_video_pane_g

0x1b34,	// (0x00049610) main_video_pane_t1_ParamLimits

0x1b34,	// (0x00049610) main_video_pane_t1

0x0fbb,	// (0x00048a97) cams_zoom_pane_g1

0x0fbb,	// (0x00048a97) cams_zoom_pane_g2

0x0fbb,	// (0x00048a97) cams_zoom_pane_g3

0x0fbb,	// (0x00048a97) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x00056c81) cams_zoom_pane_g

0x0cd1,	// (0x000487ad) grid_cams_pane

0x0cd1,	// (0x000487ad) linegrid_cams_pane

0x1b78,	// (0x00049654) cell_cams_pane_ParamLimits

0x1b78,	// (0x00049654) cell_cams_pane

0xdf1f,	// (0x000559fb) cams_burst_image_pane

0x0fbb,	// (0x00048a97) cell_cams_pane_g1

0xdf1f,	// (0x000559fb) grid_highlight_pane_cp03

0x0e84,	// (0x00048960) mp_bg_pane_g1

0xdf1f,	// (0x000559fb) bg_list_pane_cp03

0xdf1f,	// (0x000559fb) bg_mp_pane

0xdf1f,	// (0x000559fb) grid_mp_pane

0x0fbb,	// (0x00048a97) media_player_g1

0x3291,	// (0x0004ad6d) media_player_t1

0x3291,	// (0x0004ad6d) media_player_t2

0x3291,	// (0x0004ad6d) media_player_t3

0x3291,	// (0x0004ad6d) media_player_t4

0x3291,	// (0x0004ad6d) media_player_t5

0x3291,	// (0x0004ad6d) media_player_t6

0x3291,	// (0x0004ad6d) media_player_t7

0x0006,

0xf505,	// (0x00056fe1) media_player_t

0xdf1f,	// (0x000559fb) wait_bar_pane_cp02

0xf4ea,	// (0x00056fc6) main_usb_pane_t

0x3585,	// (0x0004b061) cell_mp_pane

0x0e84,	// (0x00048960) cell_mp_pane_g1

0xecdf,	// (0x000567bb) grid_highlight_pane_cp06

0x1b8d,	// (0x00049669) grid_skin_colour_pane

0x1b95,	// (0x00049671) list_highlight_pane_cp03

0x1b9d,	// (0x00049679) skin_g1

0x1ba5,	// (0x00049681) skin_t1

0x1bb4,	// (0x00049690) skin_t2

0x0001,

0xf1d3,	// (0x00056caf) skin_t

0x1bc2,	// (0x0004969e) cell_skin_colour_pane_ParamLimits

0x1bc2,	// (0x0004969e) cell_skin_colour_pane

0x1be2,	// (0x000496be) cell_skin_colour_pane_g1

0x1c47,	// (0x00049723) call_video_g1_ParamLimits

0x1c47,	// (0x00049723) call_video_g1

0x1c63,	// (0x0004973f) call_video_g2_ParamLimits

0x1c63,	// (0x0004973f) call_video_g2

0x0001,

0xf1d8,	// (0x00056cb4) call_video_g_ParamLimits

0xf1d8,	// (0x00056cb4) call_video_g

0x1ca8,	// (0x00049784) call_video_uplink_pane_cp1_ParamLimits

0x1ca8,	// (0x00049784) call_video_uplink_pane_cp1

0x1d0d,	// (0x000497e9) call_video_uplink_pane_cp2

0x1d51,	// (0x0004982d) video_down_crop_pane_ParamLimits

0x1d51,	// (0x0004982d) video_down_crop_pane

0x1e3a,	// (0x00049916) video_down_pane_ParamLimits

0x1e3a,	// (0x00049916) video_down_pane

0x1f2c,	// (0x00049a08) video_down_subqcif_pane_ParamLimits

0x1f2c,	// (0x00049a08) video_down_subqcif_pane

0x1f46,	// (0x00049a22) video_down_subqcif_pane_cp_ParamLimits

0x1f46,	// (0x00049a22) video_down_subqcif_pane_cp

0x1f87,	// (0x00049a63) im_reading_pane_ParamLimits

0x1f87,	// (0x00049a63) im_reading_pane

0x1f99,	// (0x00049a75) im_writing_pane_ParamLimits

0x1f99,	// (0x00049a75) im_writing_pane

0x1fbf,	// (0x00049a9b) im_reading_pane_t1

0x1ffe,	// (0x00049ada) list_im_pane

0x200f,	// (0x00049aeb) scroll_pane_cp07

0x2028,	// (0x00049b04) im_writing_pane_t1_ParamLimits

0x2028,	// (0x00049b04) im_writing_pane_t1

0x203d,	// (0x00049b19) im_writing_pane_t2_ParamLimits

0x203d,	// (0x00049b19) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x00056cbe) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x00056cbe) im_writing_pane_t

0xecdf,	// (0x000567bb) input_focus_pane_cp04

0xecdf,	// (0x000567bb) input_focus_pane_cp05

0x205a,	// (0x00049b36) list_im_single_pane_ParamLimits

0x205a,	// (0x00049b36) list_im_single_pane

0x2070,	// (0x00049b4c) list_single_im_pane_t1

0x199b,	// (0x00049477) blid_accuracy_pane

0x199b,	// (0x00049477) blid_compass_pane

0xb6f7,	// (0x000531d3) main_location_t1

0xb6f7,	// (0x000531d3) main_location_t2

0xb6f7,	// (0x000531d3) main_location_t3

0x0002,

0xf514,	// (0x00056ff0) main_location_t

0xecdf,	// (0x000567bb) aid_levels_location

0x0e84,	// (0x00048960) blid_accuracy_pane_g1

0x0e84,	// (0x00048960) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x00056d0d) blid_accuracy_pane_g

0x20aa,	// (0x00049b86) wml_content_pane

0x20e8,	// (0x00049bc4) wml_button_pane_ParamLimits

0x20e8,	// (0x00049bc4) wml_button_pane

0x20fc,	// (0x00049bd8) wml_list_single_large_pane_ParamLimits

0x20fc,	// (0x00049bd8) wml_list_single_large_pane

0x2115,	// (0x00049bf1) wml_list_single_medium_pane_ParamLimits

0x2115,	// (0x00049bf1) wml_list_single_medium_pane

0x212f,	// (0x00049c0b) wml_list_single_small_pane_ParamLimits

0x212f,	// (0x00049c0b) wml_list_single_small_pane

0x214b,	// (0x00049c27) wml_selection_box_pane_ParamLimits

0x214b,	// (0x00049c27) wml_selection_box_pane

0x215e,	// (0x00049c3a) wml_list_single_pane_t1

0x216d,	// (0x00049c49) wml_list_single_medium_pane_t1

0x217c,	// (0x00049c58) wml_list_single_large_pane_t1

0x218b,	// (0x00049c67) input_focus_pane_cp02_ParamLimits

0x218b,	// (0x00049c67) input_focus_pane_cp02

0x219e,	// (0x00049c7a) wml_selection_box_pane_g1

0x21a7,	// (0x00049c83) wml_selection_box_pane_t1_ParamLimits

0x21a7,	// (0x00049c83) wml_selection_box_pane_t1

0x0e6c,	// (0x00048948) bg_wml_button_pane_ParamLimits

0x0e6c,	// (0x00048948) bg_wml_button_pane

0x21bf,	// (0x00049c9b) wml_button_pane_g1

0x21c7,	// (0x00049ca3) wml_button_pane_t1

0x21bf,	// (0x00049c9b) wml_button_bg_pane_g1

0x21d7,	// (0x00049cb3) wml_button_bg_pane_g2

0x21df,	// (0x00049cbb) wml_button_bg_pane_g3

0x21e7,	// (0x00049cc3) wml_button_bg_pane_g4

0x21ef,	// (0x00049ccb) wml_button_bg_pane_g5

0x21f7,	// (0x00049cd3) wml_button_bg_pane_g6

0x21ff,	// (0x00049cdb) wml_button_bg_pane_g7

0x2207,	// (0x00049ce3) wml_button_bg_pane_g8

0x220f,	// (0x00049ceb) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x00056cc3) wml_button_bg_pane_g

0x2217,	// (0x00049cf3) bg_list_pane_cp02

0x2221,	// (0x00049cfd) mce_header_pane_ParamLimits

0x2221,	// (0x00049cfd) mce_header_pane

0x2237,	// (0x00049d13) mce_icon_pane

0x2237,	// (0x00049d13) mce_image_pane

0x2240,	// (0x00049d1c) mce_text_pane_ParamLimits

0x2240,	// (0x00049d1c) mce_text_pane

0x2253,	// (0x00049d2f) scroll_pane_cp03

0x20e0,	// (0x00049bbc) scroll_pane_cp04

0x225d,	// (0x00049d39) scroll_pane_cp05_ParamLimits

0x225d,	// (0x00049d39) scroll_pane_cp05

0x2269,	// (0x00049d45) mce_header_field_pane_ParamLimits

0x2269,	// (0x00049d45) mce_header_field_pane

0x2282,	// (0x00049d5e) mce_header_field_pane_2_ParamLimits

0x2282,	// (0x00049d5e) mce_header_field_pane_2

0x2298,	// (0x00049d74) mce_header_field_pane_3

0x22a0,	// (0x00049d7c) list_single_mce_message_pane_ParamLimits

0x22a0,	// (0x00049d7c) list_single_mce_message_pane

0x22bc,	// (0x00049d98) list_single_mce_smart_pane_ParamLimits

0x22bc,	// (0x00049d98) list_single_mce_smart_pane

0x22e3,	// (0x00049dbf) input_focus_pane_cp03

0x22ec,	// (0x00049dc8) list_header_data_pane

0x22f4,	// (0x00049dd0) mce_header_field_pane_t1

0x2304,	// (0x00049de0) list_single_mce_header_pane_ParamLimits

0x2304,	// (0x00049de0) list_single_mce_header_pane

0x2318,	// (0x00049df4) list_single_mce_header_pane_t1

0x2327,	// (0x00049e03) list_single_mce_message_pane_g1

0x232f,	// (0x00049e0b) list_single_mce_message_pane_t1

0x2363,	// (0x00049e3f) bg_cale_heading_pane_cp01_ParamLimits

0x2363,	// (0x00049e3f) bg_cale_heading_pane_cp01

0x23b5,	// (0x00049e91) bg_cale_pane_cp02_ParamLimits

0x23b5,	// (0x00049e91) bg_cale_pane_cp02

0x23e2,	// (0x00049ebe) cale_month_corner_pane

0x2401,	// (0x00049edd) cale_month_day_heading_pane_ParamLimits

0x2401,	// (0x00049edd) cale_month_day_heading_pane

0x246b,	// (0x00049f47) cale_month_pane_g1_ParamLimits

0x246b,	// (0x00049f47) cale_month_pane_g1

0x24b2,	// (0x00049f8e) cale_month_pane_g2_ParamLimits

0x24b2,	// (0x00049f8e) cale_month_pane_g2

0x24ee,	// (0x00049fca) cale_month_pane_g3_ParamLimits

0x24ee,	// (0x00049fca) cale_month_pane_g3

0x2542,	// (0x0004a01e) cale_month_pane_g4_ParamLimits

0x2542,	// (0x0004a01e) cale_month_pane_g4

0x2596,	// (0x0004a072) cale_month_pane_g5_ParamLimits

0x2596,	// (0x0004a072) cale_month_pane_g5

0x25f2,	// (0x0004a0ce) cale_month_pane_g6_ParamLimits

0x25f2,	// (0x0004a0ce) cale_month_pane_g6

0x265a,	// (0x0004a136) cale_month_pane_g7_ParamLimits

0x265a,	// (0x0004a136) cale_month_pane_g7

0x26c6,	// (0x0004a1a2) cale_month_pane_g8_ParamLimits

0x26c6,	// (0x0004a1a2) cale_month_pane_g8

0x2732,	// (0x0004a20e) cale_month_pane_g9_ParamLimits

0x2732,	// (0x0004a20e) cale_month_pane_g9

0x2796,	// (0x0004a272) cale_month_pane_g10_ParamLimits

0x2796,	// (0x0004a272) cale_month_pane_g10

0x27e8,	// (0x0004a2c4) cale_month_pane_g11_ParamLimits

0x27e8,	// (0x0004a2c4) cale_month_pane_g11

0x283a,	// (0x0004a316) cale_month_pane_g12_ParamLimits

0x283a,	// (0x0004a316) cale_month_pane_g12

0x2892,	// (0x0004a36e) cale_month_pane_g13_ParamLimits

0x2892,	// (0x0004a36e) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x00056cd6) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x00056cd6) cale_month_pane_g

0x28fc,	// (0x0004a3d8) cale_month_week_pane

0x2920,	// (0x0004a3fc) grid_cale_month_pane_ParamLimits

0x2920,	// (0x0004a3fc) grid_cale_month_pane

0x2981,	// (0x0004a45d) cale_month_day_heading_pane_t1

0x2a07,	// (0x0004a4e3) cale_month_day_heading_pane_t2

0x2a80,	// (0x0004a55c) cale_month_day_heading_pane_t3

0x2af9,	// (0x0004a5d5) cale_month_day_heading_pane_t4

0x2b7a,	// (0x0004a656) cale_month_day_heading_pane_t5

0x2c03,	// (0x0004a6df) cale_month_day_heading_pane_t6

0x2c94,	// (0x0004a770) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x00056cf1) cale_month_day_heading_pane_t

0x17e4,	// (0x000492c0) bg_cale_side_pane_cp01

0x2d25,	// (0x0004a801) cale_month_week_pane_t1

0x2d3e,	// (0x0004a81a) cale_month_week_pane_t2

0x2d57,	// (0x0004a833) cale_month_week_pane_t3

0x2d70,	// (0x0004a84c) cale_month_week_pane_t4

0x2d89,	// (0x0004a865) cale_month_week_pane_t5

0x2da2,	// (0x0004a87e) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x00056d00) cale_month_week_pane_t

0x2dc7,	// (0x0004a8a3) cell_cale_month_pane_ParamLimits

0x2dc7,	// (0x0004a8a3) cell_cale_month_pane

0xae1e,	// (0x000528fa) cell_cale_month_pane_g1

0x2f05,	// (0x0004a9e1) cell_cale_month_pane_t1_ParamLimits

0x2f05,	// (0x0004a9e1) cell_cale_month_pane_t1

0x191c,	// (0x000493f8) grid_highlight_pane_cp08

0x0e84,	// (0x00048960) main_smil_g1

0x2f31,	// (0x0004aa0d) smil_status_pane

0x2f3c,	// (0x0004aa18) smil_text_pane

0xb60d,	// (0x000530e9) bg_popup_call3_rect_pane_g8

0xb615,	// (0x000530f1) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x00056f89) bg_popup_call3_rect_pane_g

0xb818,	// (0x000532f4) smil_status_volume_pane_g1

0x2f50,	// (0x0004aa2c) smil_status_pane_t1

0xb84b,	// (0x00053327) volume_smil_pane

0x2f67,	// (0x0004aa43) list_smil_text_pane

0x2f71,	// (0x0004aa4d) scroll_pane_cp011

0x2f7c,	// (0x0004aa58) smil_text_list_pane_t1_ParamLimits

0x2f7c,	// (0x0004aa58) smil_text_list_pane_t1

0xae2a,	// (0x00052906) aid_volume_smil_ParamLimits

0xae2a,	// (0x00052906) aid_volume_smil

0x0e84,	// (0x00048960) smil_volume_pane_g1

0x0e84,	// (0x00048960) smil_volume_pane_g2

0x0001,

0xf231,	// (0x00056d0d) smil_volume_pane_g

0x1319,	// (0x00048df5) listscroll_cale_day_pane

0x2fc8,	// (0x0004aaa4) bg_cale_pane

0x2fe0,	// (0x0004aabc) list_cale_pane

0x3003,	// (0x0004aadf) scroll_pane_cp09

0x3014,	// (0x0004aaf0) cale_bg_pane_g1

0x301c,	// (0x0004aaf8) cale_bg_pane_g2

0x3024,	// (0x0004ab00) cale_bg_pane_g3

0x302c,	// (0x0004ab08) cale_bg_pane_g4

0x3034,	// (0x0004ab10) cale_bg_pane_g5

0x303c,	// (0x0004ab18) cale_bg_pane_g6

0x3044,	// (0x0004ab20) cale_bg_pane_g7

0x304c,	// (0x0004ab28) cale_bg_pane_g8

0x3054,	// (0x0004ab30) cale_bg_pane_g9

0x0008,

0xf236,	// (0x00056d12) cale_bg_pane_g

0x3064,	// (0x0004ab40) list_cale_time_pane_ParamLimits

0x3064,	// (0x0004ab40) list_cale_time_pane

0x307b,	// (0x0004ab57) list_cale_time_pane_g1_ParamLimits

0x307b,	// (0x0004ab57) list_cale_time_pane_g1

0x3087,	// (0x0004ab63) list_cale_time_pane_g2_ParamLimits

0x3087,	// (0x0004ab63) list_cale_time_pane_g2

0x3094,	// (0x0004ab70) list_cale_time_pane_g3_ParamLimits

0x3094,	// (0x0004ab70) list_cale_time_pane_g3

0x30a2,	// (0x0004ab7e) list_cale_time_pane_g4_ParamLimits

0x30a2,	// (0x0004ab7e) list_cale_time_pane_g4

0x30b0,	// (0x0004ab8c) list_cale_time_pane_g5_ParamLimits

0x30b0,	// (0x0004ab8c) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x00056d25) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x00056d25) list_cale_time_pane_g

0x30cb,	// (0x0004aba7) list_cale_time_pane_t1_ParamLimits

0x30cb,	// (0x0004aba7) list_cale_time_pane_t1

0x30f3,	// (0x0004abcf) list_cale_time_pane_t2_ParamLimits

0x30f3,	// (0x0004abcf) list_cale_time_pane_t2

0x37c0,	// (0x0004b29c) aid_blid_cardinal_pane

0x380a,	// (0x0004b2e6) compass_pane_t4

0x311b,	// (0x0004abf7) list_cale_time_pane_t4_ParamLimits

0x311b,	// (0x0004abf7) list_cale_time_pane_t4

0x3818,	// (0x0004b2f4) compass_pane_t5

0x3828,	// (0x0004b304) compass_pane_t6

0x3836,	// (0x0004b312) compass_pane_t7

0x38ce,	// (0x0004b3aa) navi_pane_cc_t1

0x3aed,	// (0x0004b5c9) aid_phob_thumbnail_center_pane

0x3f63,	// (0x0004ba3f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x00056d32) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x00056d32) list_cale_time_pane_t

0xdfc8,	// (0x00055aa4) bg_popup_window_pane_cp02_ParamLimits

0xdfc8,	// (0x00055aa4) bg_popup_window_pane_cp02

0x3143,	// (0x0004ac1f) heading_pane_cp01_ParamLimits

0x3143,	// (0x0004ac1f) heading_pane_cp01

0x314f,	// (0x0004ac2b) loc_req_pane_ParamLimits

0x314f,	// (0x0004ac2b) loc_req_pane

0x315f,	// (0x0004ac3b) loc_type_pane_ParamLimits

0x315f,	// (0x0004ac3b) loc_type_pane

0x3171,	// (0x0004ac4d) loc_type_pane_t1_ParamLimits

0x3171,	// (0x0004ac4d) loc_type_pane_t1

0x3183,	// (0x0004ac5f) loc_type_pane_t2_ParamLimits

0x3183,	// (0x0004ac5f) loc_type_pane_t2

0x3195,	// (0x0004ac71) loc_type_pane_t3_ParamLimits

0x3195,	// (0x0004ac71) loc_type_pane_t3

0x0002,

0xf25d,	// (0x00056d39) loc_type_pane_t_ParamLimits

0xf25d,	// (0x00056d39) loc_type_pane_t

0x31a7,	// (0x0004ac83) list_loc_req_pane

0x31b1,	// (0x0004ac8d) scroll_pane_cp012

0x31bc,	// (0x0004ac98) list_single_loc_request_popup_menu_pane_ParamLimits

0x31bc,	// (0x0004ac98) list_single_loc_request_popup_menu_pane

0x31c9,	// (0x0004aca5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x31c9,	// (0x0004aca5) list_single_loc_request_popup_menu_pane_g1

0x31d5,	// (0x0004acb1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x31d5,	// (0x0004acb1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x00056d40) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x00056d40) list_single_loc_request_popup_menu_pane_g

0x31e1,	// (0x0004acbd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x31e1,	// (0x0004acbd) list_single_loc_request_popup_menu_pane_t1

0x0e6c,	// (0x00048948) bg_popup_window_pane_cp03_ParamLimits

0x0e6c,	// (0x00048948) bg_popup_window_pane_cp03

0x31f7,	// (0x0004acd3) heading_loc_req_pane_ParamLimits

0x31f7,	// (0x0004acd3) heading_loc_req_pane

0x3203,	// (0x0004acdf) popup_dyc_status_message_window_g1_ParamLimits

0x3203,	// (0x0004acdf) popup_dyc_status_message_window_g1

0x3217,	// (0x0004acf3) popup_dyc_status_message_window_t1_ParamLimits

0x3217,	// (0x0004acf3) popup_dyc_status_message_window_t1

0x322c,	// (0x0004ad08) popup_dyc_status_message_window_t2_ParamLimits

0x322c,	// (0x0004ad08) popup_dyc_status_message_window_t2

0x3241,	// (0x0004ad1d) popup_dyc_status_message_window_t3_ParamLimits

0x3241,	// (0x0004ad1d) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x00056d45) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x00056d45) popup_dyc_status_message_window_t

0xecdf,	// (0x000567bb) bg_heading_pane_cp01

0x325d,	// (0x0004ad39) heading_loc_req_pane_g1

0x3265,	// (0x0004ad41) heading_loc_req_pane_g2

0x326d,	// (0x0004ad49) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x00056d4c) heading_loc_req_pane_g

0x3275,	// (0x0004ad51) heading_loc_req_pane_t1

0x32a1,	// (0x0004ad7d) bg_popup_sub_pane_cp01_ParamLimits

0x32a1,	// (0x0004ad7d) bg_popup_sub_pane_cp01

0x32af,	// (0x0004ad8b) popup_cale_events_window_g1_ParamLimits

0x32af,	// (0x0004ad8b) popup_cale_events_window_g1

0x32cf,	// (0x0004adab) popup_cale_events_window_g2_ParamLimits

0x32cf,	// (0x0004adab) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x00056d6e) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x00056d6e) popup_cale_events_window_g

0x32ef,	// (0x0004adcb) popup_cale_events_window_t1_ParamLimits

0x32ef,	// (0x0004adcb) popup_cale_events_window_t1

0x3301,	// (0x0004addd) popup_cale_events_window_t2_ParamLimits

0x3301,	// (0x0004addd) popup_cale_events_window_t2

0x333f,	// (0x0004ae1b) popup_cale_events_window_t3_ParamLimits

0x333f,	// (0x0004ae1b) popup_cale_events_window_t3

0x3379,	// (0x0004ae55) popup_cale_events_window_t4_ParamLimits

0x3379,	// (0x0004ae55) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x00056d73) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x00056d73) popup_cale_events_window_t

0x33af,	// (0x0004ae8b) call_type_pane

0x33bf,	// (0x0004ae9b) popup_call_status_window_g1

0x33d3,	// (0x0004aeaf) popup_call_status_window_g2

0x33e7,	// (0x0004aec3) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x00056d7c) popup_call_status_window_g

0x33f7,	// (0x0004aed3) call_type_pane_g1

0x3400,	// (0x0004aedc) call_type_pane_g2

0x0001,

0xf2a7,	// (0x00056d83) call_type_pane_g

0xecdf,	// (0x000567bb) bg_popup_sub_pane_cp02

0x3409,	// (0x0004aee5) listscroll_popup_wml_pane

0x3411,	// (0x0004aeed) list_wml_pane

0x341b,	// (0x0004aef7) scroll_pane_cp013

0x3426,	// (0x0004af02) list_single_graphic_popup_wml_pane_ParamLimits

0x3426,	// (0x0004af02) list_single_graphic_popup_wml_pane

0x0e84,	// (0x00048960) list_single_graphic_popup_wml_pane_g1

0x343a,	// (0x0004af16) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x00056d88) list_single_graphic_popup_wml_pane_g

0x3442,	// (0x0004af1e) list_single_graphic_popup_wml_pane_t1

0x3458,	// (0x0004af34) aid_call_pane

0x0e64,	// (0x00048940) popup_clock_analogue_window_g1

0x0e64,	// (0x00048940) popup_clock_analogue_window_g2

0xae4c,	// (0x00052928) popup_clock_analogue_window_g3

0xae4c,	// (0x00052928) popup_clock_analogue_window_g4

0x0e84,	// (0x00048960) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x00056d8d) popup_clock_analogue_window_g

0xae54,	// (0x00052930) popup_clock_analogue_window_t1

0xae62,	// (0x0005293e) clock_digital_number_pane_ParamLimits

0xae62,	// (0x0005293e) clock_digital_number_pane

0xae6e,	// (0x0005294a) clock_digital_number_pane_cp02_ParamLimits

0xae6e,	// (0x0005294a) clock_digital_number_pane_cp02

0xae7a,	// (0x00052956) clock_digital_number_pane_cp03_ParamLimits

0xae7a,	// (0x00052956) clock_digital_number_pane_cp03

0xae86,	// (0x00052962) clock_digital_number_pane_cp04_ParamLimits

0xae86,	// (0x00052962) clock_digital_number_pane_cp04

0xae92,	// (0x0005296e) clock_digital_separator_pane_ParamLimits

0xae92,	// (0x0005296e) clock_digital_separator_pane

0xae9e,	// (0x0005297a) popup_clock_digital_window_t1

0x0e84,	// (0x00048960) clock_digital_number_pane_g1

0x0e84,	// (0x00048960) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x00056d0d) clock_digital_number_pane_g

0x0e84,	// (0x00048960) clock_digital_separator_pane_g1

0x0e84,	// (0x00048960) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x00056d0d) clock_digital_separator_pane_g

0xecdf,	// (0x000567bb) bg_popup_window_pane_cp04

0x3460,	// (0x0004af3c) heading_pane_cp03

0x199b,	// (0x00049477) listscroll_popup_gms_pane

0xecdf,	// (0x000567bb) grid_large_graphic_popup_pane

0x3469,	// (0x0004af45) listscroll_popup_gms_pane_g1

0x3472,	// (0x0004af4e) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x00056d98) listscroll_popup_gms_pane_g

0x347b,	// (0x0004af57) scroll_pane_cp014

0x0ed9,	// (0x000489b5) cell_large_graphic_popup_pane_ParamLimits

0x0ed9,	// (0x000489b5) cell_large_graphic_popup_pane

0x0ee7,	// (0x000489c3) cell_large_graphic_popup_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_large_graphic_popup_pane_g1

0x3484,	// (0x0004af60) cell_large_graphic_popup_pane_g2_ParamLimits

0x3484,	// (0x0004af60) cell_large_graphic_popup_pane_g2

0x3492,	// (0x0004af6e) cell_large_graphic_popup_pane_g3_ParamLimits

0x3492,	// (0x0004af6e) cell_large_graphic_popup_pane_g3

0x34a0,	// (0x0004af7c) cell_large_graphic_popup_pane_g4_ParamLimits

0x34a0,	// (0x0004af7c) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x00056d9d) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x00056d9d) cell_large_graphic_popup_pane_g

0xecdf,	// (0x000567bb) grid_highlight_pane_cp010

0x0e84,	// (0x00048960) bg_popup_call_pane_g1

0x34b1,	// (0x0004af8d) list_single_graphic_popup_conf_pane_ParamLimits

0x34b1,	// (0x0004af8d) list_single_graphic_popup_conf_pane

0x34c3,	// (0x0004af9f) list_highlight_pane_cp01

0x34cc,	// (0x0004afa8) list_single_graphic_popup_conf_pane_g1

0x34d4,	// (0x0004afb0) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x00056da6) list_single_graphic_popup_conf_pane_g

0x34dc,	// (0x0004afb8) list_single_graphic_popup_conf_pane_t1

0x34ea,	// (0x0004afc6) linegrid_cams_pane_g1

0x34f3,	// (0x0004afcf) linegrid_cams_pane_g2

0x1979,	// (0x00049455) linegrid_cams_pane_g3

0x34fc,	// (0x0004afd8) linegrid_cams_pane_g4

0x3505,	// (0x0004afe1) linegrid_cams_pane_g5

0x350e,	// (0x0004afea) linegrid_cams_pane_g6

0x1982,	// (0x0004945e) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x00056dab) linegrid_cams_pane_g

0x3519,	// (0x0004aff5) popup_clock_analogue_window

0x3519,	// (0x0004aff5) popup_clock_digital_window

0xecdf,	// (0x000567bb) popup_phob_thumbnail_window

0x0e84,	// (0x00048960) call_video_uplink_pane_g1

0x3522,	// (0x0004affe) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x00056dba) call_video_uplink_pane_g

0x352a,	// (0x0004b006) video_uplink_pane

0x3532,	// (0x0004b00e) mce_image_pane_g1

0x353c,	// (0x0004b018) mce_image_pane_g2

0x3546,	// (0x0004b022) mce_image_pane_g3

0x3550,	// (0x0004b02c) mce_image_pane_g4

0x3558,	// (0x0004b034) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x00056dbf) mce_image_pane_g

0x3560,	// (0x0004b03c) control_top_pane_stacon_cp01_ParamLimits

0x3560,	// (0x0004b03c) control_top_pane_stacon_cp01

0x3574,	// (0x0004b050) uni_indicator_pane_stacon_cp01_ParamLimits

0x3574,	// (0x0004b050) uni_indicator_pane_stacon_cp01

0x3585,	// (0x0004b061) bg_popup_sub_pane_cp03

0x358f,	// (0x0004b06b) chi_dic_find_pane

0x3597,	// (0x0004b073) listscroll_chi_dic_pane

0x35a0,	// (0x0004b07c) main_pane_chidic_g1

0x35b3,	// (0x0004b08f) chi_dic_find_pane_t1

0x35c1,	// (0x0004b09d) find_chidic_pane

0x35ca,	// (0x0004b0a6) chi_dic_list_pane_ParamLimits

0x35ca,	// (0x0004b0a6) chi_dic_list_pane

0x35db,	// (0x0004b0b7) scroll_pane_cp020

0x35e3,	// (0x0004b0bf) find_chidic_pane_t1

0xecdf,	// (0x000567bb) input_focus_pane_cp06

0x35f2,	// (0x0004b0ce) list_chi_dic_pane_ParamLimits

0x35f2,	// (0x0004b0ce) list_chi_dic_pane

0x3604,	// (0x0004b0e0) list_chi_dic_pane_t1_ParamLimits

0x3604,	// (0x0004b0e0) list_chi_dic_pane_t1

0xecdf,	// (0x000567bb) list_highlight_pane_cp020

0x3617,	// (0x0004b0f3) bg_cale_heading_pane_g1

0x361f,	// (0x0004b0fb) bg_cale_heading_pane_g2

0x3627,	// (0x0004b103) bg_cale_heading_pane_g3

0x362f,	// (0x0004b10b) bg_cale_heading_pane_g4

0x3639,	// (0x0004b115) bg_cale_heading_pane_g5

0x3643,	// (0x0004b11f) bg_cale_heading_pane_g6

0x364b,	// (0x0004b127) bg_cale_heading_pane_g7

0x3653,	// (0x0004b12f) bg_cale_heading_pane_g8

0x365d,	// (0x0004b139) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x00056dca) bg_cale_heading_pane_g

0x3617,	// (0x0004b0f3) bg_cale_side_pane_g1

0x3667,	// (0x0004b143) bg_cale_side_pane_g2

0x3671,	// (0x0004b14d) bg_cale_side_pane_g3

0x367b,	// (0x0004b157) bg_cale_side_pane_g4

0x3685,	// (0x0004b161) bg_cale_side_pane_g5

0x368f,	// (0x0004b16b) bg_cale_side_pane_g6

0x3699,	// (0x0004b175) bg_cale_side_pane_g7

0x36a3,	// (0x0004b17f) bg_cale_side_pane_g8

0x36ab,	// (0x0004b187) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x00056ddd) bg_cale_side_pane_g

0x36b3,	// (0x0004b18f) popup_call_status_window_ParamLimits

0x36b3,	// (0x0004b18f) popup_call_status_window

0x3700,	// (0x0004b1dc) stacon_top_pane

0x3708,	// (0x0004b1e4) status_pane_ParamLimits

0x3708,	// (0x0004b1e4) status_pane

0x371d,	// (0x0004b1f9) status_small_pane

0x3725,	// (0x0004b201) control_pane

0xecdf,	// (0x000567bb) stacon_bottom_pane

0x372d,	// (0x0004b209) list_single_mce_smart_pane_t1_ParamLimits

0x372d,	// (0x0004b209) list_single_mce_smart_pane_t1

0x3740,	// (0x0004b21c) list_single_mce_smart_pane_t2_ParamLimits

0x3740,	// (0x0004b21c) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x00056df0) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x00056df0) list_single_mce_smart_pane_t

0x375f,	// (0x0004b23b) compass_pane

0x376a,	// (0x0004b246) main_location2_pane_t1

0x3780,	// (0x0004b25c) main_location2_pane_t2

0x3796,	// (0x0004b272) main_location2_pane_t3

0x0003,

0xf319,	// (0x00056df5) main_location2_pane_t

0x37e0,	// (0x0004b2bc) compass_pane_g1_ParamLimits

0x37e0,	// (0x0004b2bc) compass_pane_g1

0x37ec,	// (0x0004b2c8) compass_pane_t1

0x37fb,	// (0x0004b2d7) compass_pane_t2

0x0005,

0xf322,	// (0x00056dfe) compass_pane_t

0x3846,	// (0x0004b322) text_secondary_cp61

0x38c5,	// (0x0004b3a1) navi_pane_cams_g5

0x3941,	// (0x0004b41d) navi_pane_im_t1

0x394f,	// (0x0004b42b) navi_pane_mp_g1_ParamLimits

0x394f,	// (0x0004b42b) navi_pane_mp_g1

0x3963,	// (0x0004b43f) navi_pane_mp_g2_ParamLimits

0x3963,	// (0x0004b43f) navi_pane_mp_g2

0x396f,	// (0x0004b44b) navi_pane_mp_g3_ParamLimits

0x396f,	// (0x0004b44b) navi_pane_mp_g3

0x0002,

0xf336,	// (0x00056e12) navi_pane_mp_g_ParamLimits

0xf336,	// (0x00056e12) navi_pane_mp_g

0x397b,	// (0x0004b457) navi_pane_mp_t1

0x3989,	// (0x0004b465) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x00056e19) navi_pane_mp_t

0x3a36,	// (0x0004b512) navi_pane_vt_g1

0x397b,	// (0x0004b457) navi_pane_vt_t1

0x3a3e,	// (0x0004b51a) navi_slider_pane

0x199b,	// (0x00049477) zooming_pane

0x3a4e,	// (0x0004b52a) navi_slider_pane_g1

0xaebb,	// (0x00052997) navi_slider_pane_g2

0x0006,

0xf344,	// (0x00056e20) navi_slider_pane_g

0x3a72,	// (0x0004b54e) aid_levels_zoom

0x3a7a,	// (0x0004b556) zooming_pane_g1

0x3a82,	// (0x0004b55e) zooming_pane_g2

0x3a82,	// (0x0004b55e) zooming_pane_g3

0x0002,

0xf353,	// (0x00056e2f) zooming_pane_g

0x3a8a,	// (0x0004b566) level_10_zoom

0x3a93,	// (0x0004b56f) level_11_zoom

0x3a9c,	// (0x0004b578) level_1_zoom

0x3aa5,	// (0x0004b581) level_2_zoom

0x3aae,	// (0x0004b58a) level_3_zoom

0x3ab7,	// (0x0004b593) level_4_zoom

0x3ac0,	// (0x0004b59c) level_5_zoom

0x3ac9,	// (0x0004b5a5) level_6_zoom

0x3ad2,	// (0x0004b5ae) level_7_zoom

0x3adb,	// (0x0004b5b7) level_8_zoom

0x3ae4,	// (0x0004b5c0) level_9_zoom

0x3af5,	// (0x0004b5d1) popup_phob_thumbnail_window_g1

0x3afd,	// (0x0004b5d9) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x00056e36) popup_phob_thumbnail_window_g

0x4f2b,	// (0x0004ca07) level_1_location

0x4f33,	// (0x0004ca0f) level_2_location

0x4f3b,	// (0x0004ca17) level_3_location

0x4f45,	// (0x0004ca21) level_4_location

0x199b,	// (0x00049477) level_5_location

0x3b05,	// (0x0004b5e1) mce_icon_pane_g1

0x3b0f,	// (0x0004b5eb) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x00056e3b) mce_icon_pane_g

0x3b17,	// (0x0004b5f3) main_mup_pane_g1_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g1

0x3b17,	// (0x0004b5f3) main_mup_pane_g2_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g2

0x3b17,	// (0x0004b5f3) main_mup_pane_g3_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g3

0x3b17,	// (0x0004b5f3) main_mup_pane_g4_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g4

0x3b17,	// (0x0004b5f3) main_mup_pane_g5_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g5

0x3b17,	// (0x0004b5f3) main_mup_pane_g6_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g6

0x3b17,	// (0x0004b5f3) main_mup_pane_g7_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g7

0x3b17,	// (0x0004b5f3) main_mup_pane_g8_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g8

0x3b17,	// (0x0004b5f3) main_mup_pane_g9_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g9

0x3b17,	// (0x0004b5f3) main_mup_pane_g10_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g10

0x3b17,	// (0x0004b5f3) main_mup_pane_g11_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g11

0x0ee7,	// (0x000489c3) main_mup_pane_g12_ParamLimits

0x0ee7,	// (0x000489c3) main_mup_pane_g12

0x3b17,	// (0x0004b5f3) main_mup_pane_g13_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup_pane_g13

0x000c,

0xf364,	// (0x00056e40) main_mup_pane_g_ParamLimits

0xf364,	// (0x00056e40) main_mup_pane_g

0x3b25,	// (0x0004b601) main_mup_pane_t1_ParamLimits

0x3b25,	// (0x0004b601) main_mup_pane_t1

0x3b25,	// (0x0004b601) main_mup_pane_t2_ParamLimits

0x3b25,	// (0x0004b601) main_mup_pane_t2

0x3b25,	// (0x0004b601) main_mup_pane_t3_ParamLimits

0x3b25,	// (0x0004b601) main_mup_pane_t3

0x0fc5,	// (0x00048aa1) main_mup_pane_t4_ParamLimits

0x0fc5,	// (0x00048aa1) main_mup_pane_t4

0x0fc5,	// (0x00048aa1) main_mup_pane_t5_ParamLimits

0x0fc5,	// (0x00048aa1) main_mup_pane_t5

0x0fd9,	// (0x00048ab5) main_mup_pane_t6_ParamLimits

0x0fd9,	// (0x00048ab5) main_mup_pane_t6

0x0005,

0xf37f,	// (0x00056e5b) main_mup_pane_t_ParamLimits

0xf37f,	// (0x00056e5b) main_mup_pane_t

0x0ed9,	// (0x000489b5) mup_progress_pane_ParamLimits

0x0ed9,	// (0x000489b5) mup_progress_pane

0x3b39,	// (0x0004b615) mup_visualizer_pane_ParamLimits

0x3b39,	// (0x0004b615) mup_visualizer_pane

0x3b39,	// (0x0004b615) mup_volume_pane_ParamLimits

0x3b39,	// (0x0004b615) mup_volume_pane

0x0ef5,	// (0x000489d1) mup_visualizer_pane_g1_ParamLimits

0x0ef5,	// (0x000489d1) mup_visualizer_pane_g1

0x3b47,	// (0x0004b623) mup_visualizer_pane_g2_ParamLimits

0x3b47,	// (0x0004b623) mup_visualizer_pane_g2

0x0ee7,	// (0x000489c3) mup_visualizer_pane_g3_ParamLimits

0x0ee7,	// (0x000489c3) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x00056e68) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x00056e68) mup_visualizer_pane_g

0x0fbb,	// (0x00048a97) mup_volume_pane_g1

0x0fbb,	// (0x00048a97) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) mup_volume_pane_g

0x0fbb,	// (0x00048a97) mup_progress_pane_g1

0x0fbb,	// (0x00048a97) mup_progress_pane_g2

0x0fbb,	// (0x00048a97) mup_progress_pane_g3

0x0002,

0xf393,	// (0x00056e6f) mup_progress_pane_g

0xecdf,	// (0x000567bb) bg_popup_window_pane_cp05

0x3b55,	// (0x0004b631) heading_pane_cp02_ParamLimits

0x3b55,	// (0x0004b631) heading_pane_cp02

0x3b71,	// (0x0004b64d) list_popup_blid_pane

0x3b79,	// (0x0004b655) list_blid_sat_info_pane_ParamLimits

0x3b79,	// (0x0004b655) list_blid_sat_info_pane

0x3b8c,	// (0x0004b668) list_blid_sat_info_pane_g1

0x3b94,	// (0x0004b670) list_blid_sat_info_pane_t1

0x3cae,	// (0x0004b78a) mup_equalizer_pane_ParamLimits

0x3cae,	// (0x0004b78a) mup_equalizer_pane

0x3ccf,	// (0x0004b7ab) mup_equalizer_pane_cp1_ParamLimits

0x3ccf,	// (0x0004b7ab) mup_equalizer_pane_cp1

0x3cf0,	// (0x0004b7cc) mup_equalizer_pane_cp2_ParamLimits

0x3cf0,	// (0x0004b7cc) mup_equalizer_pane_cp2

0x3d15,	// (0x0004b7f1) mup_equalizer_pane_cp3_ParamLimits

0x3d15,	// (0x0004b7f1) mup_equalizer_pane_cp3

0x3d3e,	// (0x0004b81a) mup_equalizer_pane_cp4_ParamLimits

0x3d3e,	// (0x0004b81a) mup_equalizer_pane_cp4

0x3d67,	// (0x0004b843) mup_equalizer_pane_cp5

0x3d7f,	// (0x0004b85b) mup_equalizer_pane_cp6

0x3d97,	// (0x0004b873) mup_equalizer_pane_cp7

0xb68d,	// (0x00053169) bg_popup_call_poc_act_pane_g9

0xb695,	// (0x00053171) bg_popup_call_poc_act_pane_g10

0xb69d,	// (0x00053179) bg_popup_call_poc_act_pane_g11

0x000a,

0x0e6c,	// (0x00048948) mup_scale_pane

0x0e84,	// (0x00048960) mup_scale_pane_g1

0x3daf,	// (0x0004b88b) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x00056e8b) mup_scale_pane_g

0x3de5,	// (0x0004b8c1) msg_data_pane

0x3ded,	// (0x0004b8c9) scroll_pane_cp017

0x01b5,	// (0x00047c91) bg_list_pane_cp04_ParamLimits

0x01b5,	// (0x00047c91) bg_list_pane_cp04

0x3df5,	// (0x0004b8d1) msg_data_pane_g1

0x3dfd,	// (0x0004b8d9) msg_data_pane_g2

0x3e07,	// (0x0004b8e3) msg_data_pane_g3

0x3e11,	// (0x0004b8ed) msg_data_pane_g4

0x3e19,	// (0x0004b8f5) msg_data_pane_g5

0x3e21,	// (0x0004b8fd) msg_data_pane_g6

0x3e29,	// (0x0004b905) msg_data_pane_g7

0x0006,

0xf3be,	// (0x00056e9a) msg_data_pane_g

0x01d3,	// (0x00047caf) msg_text_pane_ParamLimits

0x01d3,	// (0x00047caf) msg_text_pane

0x3e31,	// (0x0004b90d) qrid_highlight_pane_cp011_ParamLimits

0x3e31,	// (0x0004b90d) qrid_highlight_pane_cp011

0xecdf,	// (0x000567bb) msg_body_pane

0x0e6c,	// (0x00048948) msg_header_pane

0xaed5,	// (0x000529b1) input_focus_pane_cp07

0xaeea,	// (0x000529c6) msg_header_pane_t1_ParamLimits

0xaeea,	// (0x000529c6) msg_header_pane_t1

0xaf06,	// (0x000529e2) msg_header_pane_t2_ParamLimits

0xaf06,	// (0x000529e2) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x00056eae) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x00056eae) msg_header_pane_t

0x3e67,	// (0x0004b943) msg_body_pane_g1

0xaf26,	// (0x00052a02) msg_body_pane_t1_ParamLimits

0xaf26,	// (0x00052a02) msg_body_pane_t1

0xaf57,	// (0x00052a33) msg_body_pane_t2_ParamLimits

0xaf57,	// (0x00052a33) msg_body_pane_t2

0xaf69,	// (0x00052a45) msg_body_pane_t3_ParamLimits

0xaf69,	// (0x00052a45) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x00056eb3) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x00056eb3) msg_body_pane_t

0x3ea9,	// (0x0004b985) main_viewer_pane_g1_ParamLimits

0x3ea9,	// (0x0004b985) main_viewer_pane_g1

0x3eb7,	// (0x0004b993) main_viewer_pane_g2_ParamLimits

0x3eb7,	// (0x0004b993) main_viewer_pane_g2

0x3ec5,	// (0x0004b9a1) main_viewer_pane_g3_ParamLimits

0x3ec5,	// (0x0004b9a1) main_viewer_pane_g3

0x3ed4,	// (0x0004b9b0) main_viewer_pane_g4_ParamLimits

0x3ed4,	// (0x0004b9b0) main_viewer_pane_g4

0xaf93,	// (0x00052a6f) main_viewer_pane_g5_ParamLimits

0xaf93,	// (0x00052a6f) main_viewer_pane_g5

0xaf93,	// (0x00052a6f) main_viewer_pane_g7_ParamLimits

0xaf93,	// (0x00052a6f) main_viewer_pane_g7

0xafa5,	// (0x00052a81) main_viewer_pane_g8_ParamLimits

0xafa5,	// (0x00052a81) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x00056ec3) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x00056ec3) main_viewer_pane_g

0x3ee3,	// (0x0004b9bf) viewer_content_pane_ParamLimits

0x3ee3,	// (0x0004b9bf) viewer_content_pane

0x3f20,	// (0x0004b9fc) main_postcard_pane_g1_ParamLimits

0x3f20,	// (0x0004b9fc) main_postcard_pane_g1

0x3f36,	// (0x0004ba12) main_postcard_pane_g2_ParamLimits

0x3f36,	// (0x0004ba12) main_postcard_pane_g2

0x3f4c,	// (0x0004ba28) main_postcard_pane_g3_ParamLimits

0x3f4c,	// (0x0004ba28) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x00056ed4) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x00056ed4) main_postcard_pane_g

0x3f63,	// (0x0004ba3f) main_postcard_pane_g4

0xb82b,	// (0x00053307) smil_status_volume_pane_g2

0x3fa6,	// (0x0004ba82) postcard_pane_ParamLimits

0x3fa6,	// (0x0004ba82) postcard_pane

0x3ff6,	// (0x0004bad2) postcard_pane_g1_ParamLimits

0x3ff6,	// (0x0004bad2) postcard_pane_g1

0x4004,	// (0x0004bae0) postcard_pane_g2_ParamLimits

0x4004,	// (0x0004bae0) postcard_pane_g2

0x4010,	// (0x0004baec) postcard_pane_g3_ParamLimits

0x4010,	// (0x0004baec) postcard_pane_g3

0x401c,	// (0x0004baf8) postcard_pane_g4_ParamLimits

0x401c,	// (0x0004baf8) postcard_pane_g4

0x402a,	// (0x0004bb06) postcard_pane_g5_ParamLimits

0x402a,	// (0x0004bb06) postcard_pane_g5

0x403f,	// (0x0004bb1b) postcard_pane_g6_ParamLimits

0x403f,	// (0x0004bb1b) postcard_pane_g6

0x3ff6,	// (0x0004bad2) postcard_pane_g7_ParamLimits

0x3ff6,	// (0x0004bad2) postcard_pane_g7

0x0006,

0xf405,	// (0x00056ee1) postcard_pane_g_ParamLimits

0xf405,	// (0x00056ee1) postcard_pane_g

0x4057,	// (0x0004bb33) main_mp2_pane_g1_ParamLimits

0x4057,	// (0x0004bb33) main_mp2_pane_g1

0x4065,	// (0x0004bb41) main_mp2_pane_g2_ParamLimits

0x4065,	// (0x0004bb41) main_mp2_pane_g2

0x4071,	// (0x0004bb4d) main_mp2_pane_g3_ParamLimits

0x4071,	// (0x0004bb4d) main_mp2_pane_g3

0x0002,

0xf414,	// (0x00056ef0) main_mp2_pane_g_ParamLimits

0xf414,	// (0x00056ef0) main_mp2_pane_g

0x407d,	// (0x0004bb59) main_mp2_pane_t1_ParamLimits

0x407d,	// (0x0004bb59) main_mp2_pane_t1

0x4094,	// (0x0004bb70) main_mp2_pane_t2_ParamLimits

0x4094,	// (0x0004bb70) main_mp2_pane_t2

0x40a6,	// (0x0004bb82) main_mp2_pane_t3_ParamLimits

0x40a6,	// (0x0004bb82) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x00056ef7) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x00056ef7) main_mp2_pane_t

0x0cd1,	// (0x000487ad) pec_content_pane_ParamLimits

0x0cd1,	// (0x000487ad) pec_content_pane

0xdf1f,	// (0x000559fb) scroll_pane_cp015

0x3b39,	// (0x0004b615) pec_attribute_pane_ParamLimits

0x3b39,	// (0x0004b615) pec_attribute_pane

0x0ee7,	// (0x000489c3) pec_content_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) pec_content_pane_g1

0x40b8,	// (0x0004bb94) pec_content_pane_t1_ParamLimits

0x40b8,	// (0x0004bb94) pec_content_pane_t1

0x40cc,	// (0x0004bba8) pec_content_pane_t2_ParamLimits

0x40cc,	// (0x0004bba8) pec_content_pane_t2

0x0001,

0xf422,	// (0x00056efe) pec_content_pane_t_ParamLimits

0xf422,	// (0x00056efe) pec_content_pane_t

0x0ed9,	// (0x000489b5) list_single_graphic_pane_cp01_ParamLimits

0x0ed9,	// (0x000489b5) list_single_graphic_pane_cp01

0x0e6c,	// (0x00048948) bg_popup_sub_pane_cp04

0x40e0,	// (0x0004bbbc) popup_mup_playback_window_g1

0x40ec,	// (0x0004bbc8) popup_mup_playback_window_t1

0x4101,	// (0x0004bbdd) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x00056f03) popup_mup_playback_window_t

0x4156,	// (0x0004bc32) main_image_pane_g1_ParamLimits

0x4156,	// (0x0004bc32) main_image_pane_g1

0x4233,	// (0x0004bd0f) scroll_pane_cp018_ParamLimits

0x4233,	// (0x0004bd0f) scroll_pane_cp018

0x424b,	// (0x0004bd27) scroll_pane_cp016_ParamLimits

0x424b,	// (0x0004bd27) scroll_pane_cp016

0x427f,	// (0x0004bd5b) smil2_image_pane_ParamLimits

0x427f,	// (0x0004bd5b) smil2_image_pane

0x42b5,	// (0x0004bd91) smil2_root_pane_ParamLimits

0x42b5,	// (0x0004bd91) smil2_root_pane

0x42ed,	// (0x0004bdc9) smil2_text_pane_ParamLimits

0x42ed,	// (0x0004bdc9) smil2_text_pane

0xdf1f,	// (0x000559fb) bg_list_pane_cp06

0xdf1f,	// (0x000559fb) grid_radio_pane

0xecdf,	// (0x000567bb) bg_popup_window_pane_cp06

0x3291,	// (0x0004ad6d) main_fmradio_pane_t1

0xb6a5,	// (0x00053181) heading_pane_cp04

0x3291,	// (0x0004ad6d) main_fmradio_pane_t2

0xb6ad,	// (0x00053189) popup_cale_lunar_info_window_g1

0x3291,	// (0x0004ad6d) main_fmradio_pane_t3

0xb6b5,	// (0x00053191) popup_cale_lunar_info_window_g2

0x3291,	// (0x0004ad6d) main_fmradio_pane_t4

0x0001,

0x3291,	// (0x0004ad6d) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x00056fd3) popup_cale_lunar_info_window_g

0xf287,	// (0x00056d63) main_fmradio_pane_t

0xdf1f,	// (0x000559fb) wait_bar_pane_cp03

0x0ed9,	// (0x000489b5) cell_fmradio_pane_ParamLimits

0x0ed9,	// (0x000489b5) cell_fmradio_pane

0x0ee7,	// (0x000489c3) cell_fmradio_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_fmradio_pane_g1

0xdf1f,	// (0x000559fb) grid_highlight_pane_cp011

0x437d,	// (0x0004be59) poc_content_pane_ParamLimits

0x437d,	// (0x0004be59) poc_content_pane

0x438f,	// (0x0004be6b) scroll_pane_cp019

0x4397,	// (0x0004be73) popup_call_poc_act_window_ParamLimits

0x4397,	// (0x0004be73) popup_call_poc_act_window

0x43bb,	// (0x0004be97) popup_call_poc_inact_window_ParamLimits

0x43bb,	// (0x0004be97) popup_call_poc_inact_window

0xf4d3,	// (0x00056faf) bg_popup_call_poc_act_pane_g

0xb61d,	// (0x000530f9) bg_popup_call_poc_inact_pane_g1

0xb625,	// (0x00053101) bg_popup_call_poc_inact_pane_g2

0x43d4,	// (0x0004beb0) popup_call_poc_act_window_g2

0xb62d,	// (0x00053109) bg_popup_call_poc_inact_pane_g3

0xb635,	// (0x00053111) bg_popup_call_poc_inact_pane_g4

0xb63d,	// (0x00053119) bg_popup_call_poc_inact_pane_g5

0x43dc,	// (0x0004beb8) popup_call_poc_act_window_t1_ParamLimits

0x43dc,	// (0x0004beb8) popup_call_poc_act_window_t1

0x4404,	// (0x0004bee0) popup_call_poc_act_window_t2_ParamLimits

0x4404,	// (0x0004bee0) popup_call_poc_act_window_t2

0x442c,	// (0x0004bf08) popup_call_poc_act_window_t3_ParamLimits

0x442c,	// (0x0004bf08) popup_call_poc_act_window_t3

0x4454,	// (0x0004bf30) popup_call_poc_act_window_t4_ParamLimits

0x4454,	// (0x0004bf30) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x00056f18) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x00056f18) popup_call_poc_act_window_t

0xb645,	// (0x00053121) bg_popup_call_poc_inact_pane_g6

0xb64d,	// (0x00053129) bg_popup_call_poc_inact_pane_g7

0xb655,	// (0x00053131) bg_popup_call_poc_inact_pane_g8

0x4466,	// (0x0004bf42) popup_call_poc_inact_window_g2

0xb65d,	// (0x00053139) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x00056f9c) bg_popup_call_poc_inact_pane_g

0x446e,	// (0x0004bf4a) popup_call_poc_inact_window_t1_ParamLimits

0x446e,	// (0x0004bf4a) popup_call_poc_inact_window_t1

0x4483,	// (0x0004bf5f) popup_call_poc_inact_window_t2_ParamLimits

0x4483,	// (0x0004bf5f) popup_call_poc_inact_window_t2

0x4498,	// (0x0004bf74) popup_call_poc_inact_window_t3_ParamLimits

0x4498,	// (0x0004bf74) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x00056f21) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x00056f21) popup_call_poc_inact_window_t

0xb7a3,	// (0x0005327f) context_pane_ParamLimits

0x5448,	// (0x0004cf24) signal_pane_ParamLimits

0x199b,	// (0x00049477) main_call2_pane

0xb77c,	// (0x00053258) popup_phob_thumbnail2_window_ParamLimits

0xb77c,	// (0x00053258) popup_phob_thumbnail2_window

0xaf7b,	// (0x00052a57) aid_hotspot_pointer_arrow_pane

0xaf83,	// (0x00052a5f) aid_hotspot_pointer_hand_pane

0x4ef3,	// (0x0004c9cf) phob_pre_status_pane_g5

0x0cd1,	// (0x000487ad) cams_zoom_pane_ParamLimits

0x0cd1,	// (0x000487ad) image_vga_pane_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g2_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g3_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g4_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g5_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g6_ParamLimits

0x0ee7,	// (0x000489c3) main_camera_pane_g7_ParamLimits

0xf180,	// (0x00056c5c) main_camera_pane_g_ParamLimits

0x0fc5,	// (0x00048aa1) main_camera_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) main_camera_pane_t2_ParamLimits

0xf191,	// (0x00056c6d) main_camera_pane_t_ParamLimits

0x0e6c,	// (0x00048948) bg_popup_preview_window_pane_cp01_ParamLimits

0x0e6c,	// (0x00048948) bg_popup_preview_window_pane_cp01

0x44ad,	// (0x0004bf89) popup_phob_thumbnail2_window_g1_ParamLimits

0x44ad,	// (0x0004bf89) popup_phob_thumbnail2_window_g1

0xecdf,	// (0x000567bb) call2_cli_visual_pane

0x44d4,	// (0x0004bfb0) popup_call2_audio_conf_window_ParamLimits

0x44d4,	// (0x0004bfb0) popup_call2_audio_conf_window

0x44fc,	// (0x0004bfd8) popup_call2_audio_first_window_ParamLimits

0x44fc,	// (0x0004bfd8) popup_call2_audio_first_window

0x4592,	// (0x0004c06e) popup_call2_audio_in_window_ParamLimits

0x4592,	// (0x0004c06e) popup_call2_audio_in_window

0x45de,	// (0x0004c0ba) popup_call2_audio_out_window_ParamLimits

0x45de,	// (0x0004c0ba) popup_call2_audio_out_window

0x4650,	// (0x0004c12c) popup_call2_audio_second_window_ParamLimits

0x4650,	// (0x0004c12c) popup_call2_audio_second_window

0x46b6,	// (0x0004c192) popup_call2_audio_wait_window_ParamLimits

0x46b6,	// (0x0004c192) popup_call2_audio_wait_window

0xecdf,	// (0x000567bb) bg_popup_call2_act_pane_cp03

0x0e4e,	// (0x0004892a) list_conf_pane_cp

0x46f0,	// (0x0004c1cc) popup_call2_audio_conf_window_t1

0x46fe,	// (0x0004c1da) list_single_graphic_popup_conf2_pane_ParamLimits

0x46fe,	// (0x0004c1da) list_single_graphic_popup_conf2_pane

0x34c3,	// (0x0004af9f) list_highlight_pane_cp04

0x4711,	// (0x0004c1ed) list_single_graphic_popup_conf2_pane_g1

0x34d4,	// (0x0004afb0) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x00056f28) list_single_graphic_popup_conf2_pane_g

0x471b,	// (0x0004c1f7) list_single_graphic_popup_conf2_pane_t1

0x4729,	// (0x0004c205) bg_popup_call2_act_pane_cp01_ParamLimits

0x4729,	// (0x0004c205) bg_popup_call2_act_pane_cp01

0x47b3,	// (0x0004c28f) call_type_pane_cp05_ParamLimits

0x47b3,	// (0x0004c28f) call_type_pane_cp05

0x4807,	// (0x0004c2e3) popup_call2_audio_second_window_g1_ParamLimits

0x4807,	// (0x0004c2e3) popup_call2_audio_second_window_g1

0x485b,	// (0x0004c337) popup_call2_audio_second_window_g2_ParamLimits

0x485b,	// (0x0004c337) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x00056f2d) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x00056f2d) popup_call2_audio_second_window_g

0x48c0,	// (0x0004c39c) popup_call2_audio_second_window_t1_ParamLimits

0x48c0,	// (0x0004c39c) popup_call2_audio_second_window_t1

0x497b,	// (0x0004c457) popup_call2_audio_second_window_t2_ParamLimits

0x497b,	// (0x0004c457) popup_call2_audio_second_window_t2

0x49ce,	// (0x0004c4aa) popup_call2_audio_second_window_t3_ParamLimits

0x49ce,	// (0x0004c4aa) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x00056f34) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x00056f34) popup_call2_audio_second_window_t

0xecdf,	// (0x000567bb) bg_popup_call2_in_pane_cp02

0xece9,	// (0x000567c5) call_type_pane_cp04

0x4ac1,	// (0x0004c59d) popup_call2_audio_wait_window_g1

0x4ac9,	// (0x0004c5a5) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x00056f3d) popup_call2_audio_wait_window_g

0xed01,	// (0x000567dd) popup_call2_audio_wait_window_t3

0x4ad1,	// (0x0004c5ad) bg_popup_call2_act_pane_ParamLimits

0x4ad1,	// (0x0004c5ad) bg_popup_call2_act_pane

0x4b91,	// (0x0004c66d) call_type_pane_cp03_ParamLimits

0x4b91,	// (0x0004c66d) call_type_pane_cp03

0x4bf5,	// (0x0004c6d1) popup_call2_audio_first_window_g1_ParamLimits

0x4bf5,	// (0x0004c6d1) popup_call2_audio_first_window_g1

0x4c65,	// (0x0004c741) popup_call2_audio_first_window_g2_ParamLimits

0x4c65,	// (0x0004c741) popup_call2_audio_first_window_g2

0x4cc9,	// (0x0004c7a5) popup_call2_audio_first_window_g3_ParamLimits

0x4cc9,	// (0x0004c7a5) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x00056f42) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x00056f42) popup_call2_audio_first_window_g

0x4d51,	// (0x0004c82d) popup_call2_audio_first_window_t1_ParamLimits

0x4d51,	// (0x0004c82d) popup_call2_audio_first_window_t1

0xafbd,	// (0x00052a99) popup_call2_audio_first_window_t4_ParamLimits

0xafbd,	// (0x00052a99) popup_call2_audio_first_window_t4

0xb0a0,	// (0x00052b7c) popup_call2_audio_first_window_t5_ParamLimits

0xb0a0,	// (0x00052b7c) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x00056f4d) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x00056f4d) popup_call2_audio_first_window_t

0x0e64,	// (0x00048940) bg_popup_call2_act_pane_g1

0xb6bf,	// (0x0005319b) popup_cale_lunar_info_window_t1

0xb6cd,	// (0x000531a9) popup_cale_lunar_info_window_t2

0xb6db,	// (0x000531b7) popup_cale_lunar_info_window_t3

0xecdf,	// (0x000567bb) bg_popup_call2_bubble_pane

0xb1a1,	// (0x00052c7d) bg_popup_call2_in_pane_cp01_ParamLimits

0xb1a1,	// (0x00052c7d) bg_popup_call2_in_pane_cp01

0xe04d,	// (0x00055b29) call_type_pane_cp02

0x4e54,	// (0x0004c930) popup_call2_audio_out_window_g1_ParamLimits

0x4e54,	// (0x0004c930) popup_call2_audio_out_window_g1

0xb1e9,	// (0x00052cc5) popup_call2_audio_out_window_g2_ParamLimits

0xb1e9,	// (0x00052cc5) popup_call2_audio_out_window_g2

0x4e80,	// (0x0004c95c) popup_call2_audio_out_window_g3_ParamLimits

0x4e80,	// (0x0004c95c) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x00056f56) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x00056f56) popup_call2_audio_out_window_g

0xb220,	// (0x00052cfc) popup_call2_audio_out_window_t1_ParamLimits

0xb220,	// (0x00052cfc) popup_call2_audio_out_window_t1

0xb27f,	// (0x00052d5b) popup_call2_audio_out_window_t2_ParamLimits

0xb27f,	// (0x00052d5b) popup_call2_audio_out_window_t2

0xb2d3,	// (0x00052daf) popup_call2_audio_out_window_t3_ParamLimits

0xb2d3,	// (0x00052daf) popup_call2_audio_out_window_t3

0xb2e9,	// (0x00052dc5) popup_call2_audio_out_window_t4_ParamLimits

0xb2e9,	// (0x00052dc5) popup_call2_audio_out_window_t4

0xb2ff,	// (0x00052ddb) popup_call2_audio_out_window_t5_ParamLimits

0xb2ff,	// (0x00052ddb) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x00056f5f) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x00056f5f) popup_call2_audio_out_window_t

0xb363,	// (0x00052e3f) bg_popup_call2_in_pane_ParamLimits

0xb363,	// (0x00052e3f) bg_popup_call2_in_pane

0xb3bf,	// (0x00052e9b) popup_call2_audio_in_window_g1_ParamLimits

0xb3bf,	// (0x00052e9b) popup_call2_audio_in_window_g1

0xb3f7,	// (0x00052ed3) popup_call2_audio_in_window_g2_ParamLimits

0xb3f7,	// (0x00052ed3) popup_call2_audio_in_window_g2

0xb42f,	// (0x00052f0b) popup_call2_audio_in_window_g3_ParamLimits

0xb42f,	// (0x00052f0b) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x00056f6c) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x00056f6c) popup_call2_audio_in_window_g

0xb487,	// (0x00052f63) popup_call2_audio_in_window_t1_ParamLimits

0xb487,	// (0x00052f63) popup_call2_audio_in_window_t1

0xb507,	// (0x00052fe3) popup_call2_audio_in_window_t2_ParamLimits

0xb507,	// (0x00052fe3) popup_call2_audio_in_window_t2

0xb587,	// (0x00053063) popup_call2_audio_in_window_t3_ParamLimits

0xb587,	// (0x00053063) popup_call2_audio_in_window_t3

0xb5a1,	// (0x0005307d) popup_call2_audio_in_window_t4_ParamLimits

0xb5a1,	// (0x0005307d) popup_call2_audio_in_window_t4

0xb5b3,	// (0x0005308f) popup_call2_audio_in_window_t5_ParamLimits

0xb5b3,	// (0x0005308f) popup_call2_audio_in_window_t5

0xb5c8,	// (0x000530a4) popup_call2_audio_in_window_t6_ParamLimits

0xb5c8,	// (0x000530a4) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x00056f75) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x00056f75) popup_call2_audio_in_window_t

0x0e64,	// (0x00048940) bg_popup_call2_in_pane_g1

0xb6e9,	// (0x000531c5) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x00056fd8) popup_cale_lunar_info_window_t

0x0e6c,	// (0x00048948) bg_popup_call2_rect_pane_ParamLimits

0x0e6c,	// (0x00048948) bg_popup_call2_rect_pane

0xecdf,	// (0x000567bb) call2_cli_visual_graphic_pane

0xecdf,	// (0x000567bb) call2_cli_visual_text_pane

0xb83e,	// (0x0005331a) smil_status_volume_pane_g3

0x0002,

0x0e84,	// (0x00048960) call2_cli_visual_graphic_pane_g1

0x0e84,	// (0x00048960) call2_cli_visual_graphic_pane_g2

0x0e84,	// (0x00048960) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x00056f82) call2_cli_visual_graphic_pane_g

0xb5dd,	// (0x000530b9) bg_popup_call2_rect_pane_g1

0x12aa,	// (0x00048d86) bg_popup_call2_rect_pane_g2

0xb5e5,	// (0x000530c1) bg_popup_call2_rect_pane_g3

0xb5ed,	// (0x000530c9) bg_popup_call2_rect_pane_g4

0xb5f5,	// (0x000530d1) bg_popup_call2_rect_pane_g5

0xb5fd,	// (0x000530d9) bg_popup_call2_rect_pane_g6

0xb605,	// (0x000530e1) bg_popup_call2_rect_pane_g7

0xb60d,	// (0x000530e9) bg_popup_call2_rect_pane_g8

0xb615,	// (0x000530f1) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x00056f89) bg_popup_call2_rect_pane_g

0xb61d,	// (0x000530f9) bg_popup_call2_bubble_pane_g1

0xb625,	// (0x00053101) bg_popup_call2_bubble_pane_g2

0xb62d,	// (0x00053109) bg_popup_call2_bubble_pane_g3

0xb635,	// (0x00053111) bg_popup_call2_bubble_pane_g4

0xb63d,	// (0x00053119) bg_popup_call2_bubble_pane_g5

0xb645,	// (0x00053121) bg_popup_call2_bubble_pane_g6

0xb64d,	// (0x00053129) bg_popup_call2_bubble_pane_g7

0xb655,	// (0x00053131) bg_popup_call2_bubble_pane_g8

0xb65d,	// (0x00053139) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x00056f9c) bg_popup_call2_bubble_pane_g

0x1332,	// (0x00048e0e) aid_cale_week_size_cell_pane

0x1a08,	// (0x000494e4) aid_cams_cif_uncrop_pane_ParamLimits

0x1a08,	// (0x000494e4) aid_cams_cif_uncrop_pane

0x0cd1,	// (0x000487ad) aid_cams_size_cell_ParamLimits

0x0cd1,	// (0x000487ad) aid_cams_size_cell

0x0cd1,	// (0x000487ad) grid_cams_pane_ParamLimits

0x0cd1,	// (0x000487ad) linegrid_cams_pane_ParamLimits

0x1c74,	// (0x00049750) call_video_pane_t1

0x1c8e,	// (0x0004976a) call_video_pane_t2

0x0001,

0xf1dd,	// (0x00056cb9) call_video_pane_t

0x233d,	// (0x00049e19) aid_cale_month_size_cell_pane_ParamLimits

0x233d,	// (0x00049e19) aid_cale_month_size_cell_pane

0xf540,	// (0x0005701c) smil_status_volume_pane_g

0xb84b,	// (0x00053327) volume_smil_pane_ParamLimits

0xad0d,	// (0x000527e9) aid_popup2_width_pane

0x1202,	// (0x00048cde) cell_qdial_pane_g4_ParamLimits

0x1202,	// (0x00048cde) cell_qdial_pane_g4

0x37c0,	// (0x0004b29c) aid_blid_cardinal_pane_ParamLimits

0x37cc,	// (0x0004b2a8) aid_blid_destination_pane_ParamLimits

0x37cc,	// (0x0004b2a8) aid_blid_destination_pane

0x0e6c,	// (0x00048948) bg_popup_call_poc_act_pane_ParamLimits

0x0e6c,	// (0x00048948) bg_popup_call_poc_act_pane

0x0e6c,	// (0x00048948) bg_popup_call_poc_inact_pane_ParamLimits

0x0e6c,	// (0x00048948) bg_popup_call_poc_inact_pane

0xb665,	// (0x00053141) bg_popup_call_poc_act_pane_g1

0xb66d,	// (0x00053149) bg_popup_call_poc_act_pane_g2

0xb675,	// (0x00053151) bg_popup_call_poc_act_pane_g3

0xb635,	// (0x00053111) bg_popup_call_poc_act_pane_g4

0xb63d,	// (0x00053119) bg_popup_call_poc_act_pane_g5

0xb67d,	// (0x00053159) bg_popup_call_poc_act_pane_g6

0xb64d,	// (0x00053129) bg_popup_call_poc_act_pane_g7

0xb685,	// (0x00053161) bg_popup_call_poc_act_pane_g8

0xecdf,	// (0x000567bb) main_usb_pane

0xb753,	// (0x0005322f) popup_cale_lunar_info_window

0x1fbf,	// (0x00049a9b) im_reading_pane_t1_ParamLimits

0x1ffe,	// (0x00049ada) list_im_pane_ParamLimits

0x200f,	// (0x00049aeb) scroll_pane_cp07_ParamLimits

0xecdf,	// (0x000567bb) grid_highlight_pane_cp012

0x0e6c,	// (0x00048948) mup_scale_pane_ParamLimits

0x0ee7,	// (0x000489c3) main_usb_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) main_usb_pane_g1

0x0ee7,	// (0x000489c3) main_usb_pane_g2_ParamLimits

0x0ee7,	// (0x000489c3) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x00056c98) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x00056c98) main_usb_pane_g

0x0fc5,	// (0x00048aa1) main_usb_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) main_usb_pane_t1

0x0fc5,	// (0x00048aa1) main_usb_pane_t2_ParamLimits

0x0fc5,	// (0x00048aa1) main_usb_pane_t2

0x0fc5,	// (0x00048aa1) main_usb_pane_t3_ParamLimits

0x0fc5,	// (0x00048aa1) main_usb_pane_t3

0x0fc5,	// (0x00048aa1) main_usb_pane_t4_ParamLimits

0x0fc5,	// (0x00048aa1) main_usb_pane_t4

0x0fc5,	// (0x00048aa1) main_usb_pane_t5_ParamLimits

0x0fc5,	// (0x00048aa1) main_usb_pane_t5

0x0fc5,	// (0x00048aa1) main_usb_pane_t6_ParamLimits

0x0fc5,	// (0x00048aa1) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x00056fc6) main_usb_pane_t_ParamLimits

0x375f,	// (0x0004b23b) aid_text_placing

0x376a,	// (0x0004b246) main_location2_pane_t1_ParamLimits

0x3780,	// (0x0004b25c) main_location2_pane_t2_ParamLimits

0x3796,	// (0x0004b272) main_location2_pane_t3_ParamLimits

0x37ac,	// (0x0004b288) main_location2_pane_t4_ParamLimits

0x37ac,	// (0x0004b288) main_location2_pane_t4

0xf319,	// (0x00056df5) main_location2_pane_t_ParamLimits

0x0e9a,	// (0x00048976) find_pinb_pane_g2_ParamLimits

0x0e9a,	// (0x00048976) find_pinb_pane_g2

0x0001,

0xf095,	// (0x00056b71) find_pinb_pane_g_ParamLimits

0xf095,	// (0x00056b71) find_pinb_pane_g

0x0ea6,	// (0x00048982) find_pinb_pane_t1_ParamLimits

0x0eb8,	// (0x00048994) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x00056b76) find_pinb_pane_t_ParamLimits

0xecdf,	// (0x000567bb) main_call3_pane

0x2981,	// (0x0004a45d) cale_month_day_heading_pane_t1_ParamLimits

0x2a07,	// (0x0004a4e3) cale_month_day_heading_pane_t2_ParamLimits

0x2a80,	// (0x0004a55c) cale_month_day_heading_pane_t3_ParamLimits

0x2af9,	// (0x0004a5d5) cale_month_day_heading_pane_t4_ParamLimits

0x2b7a,	// (0x0004a656) cale_month_day_heading_pane_t5_ParamLimits

0x2c03,	// (0x0004a6df) cale_month_day_heading_pane_t6_ParamLimits

0x2c94,	// (0x0004a770) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x00056cf1) cale_month_day_heading_pane_t_ParamLimits

0x2f5e,	// (0x0004aa3a) smil_status_volume_pane

0x3fca,	// (0x0004baa6) postcard_address_pane_ParamLimits

0x3fca,	// (0x0004baa6) postcard_address_pane

0x3fe0,	// (0x0004babc) postcard_message_pane_ParamLimits

0x3fe0,	// (0x0004babc) postcard_message_pane

0x4eac,	// (0x0004c988) call2_cli_visual_pane_t1_ParamLimits

0x4eac,	// (0x0004c988) call2_cli_visual_pane_t1

0xb878,	// (0x00053354) postcard_message_pane_t1_ParamLimits

0xb878,	// (0x00053354) postcard_message_pane_t1

0xb860,	// (0x0005333c) postcard_address_pane_t1_ParamLimits

0xb860,	// (0x0005333c) postcard_address_pane_t1

0x5604,	// (0x0004d0e0) popup_call3_audio_in_window_ParamLimits

0x5604,	// (0x0004d0e0) popup_call3_audio_in_window

0x5489,	// (0x0004cf65) bg_popup_call3_in_pane_ParamLimits

0x5489,	// (0x0004cf65) bg_popup_call3_in_pane

0x5505,	// (0x0004cfe1) popup_call3_audio_in_window_g1_ParamLimits

0x5505,	// (0x0004cfe1) popup_call3_audio_in_window_g1

0x5525,	// (0x0004d001) popup_call3_audio_in_window_g2_ParamLimits

0x5525,	// (0x0004d001) popup_call3_audio_in_window_g2

0x5545,	// (0x0004d021) popup_call3_audio_in_window_g3_ParamLimits

0x5545,	// (0x0004d021) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x00057023) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x00057023) popup_call3_audio_in_window_g

0x5576,	// (0x0004d052) popup_call3_audio_in_window_t1_ParamLimits

0x5576,	// (0x0004d052) popup_call3_audio_in_window_t1

0x55b4,	// (0x0004d090) popup_call3_audio_in_window_t2_ParamLimits

0x55b4,	// (0x0004d090) popup_call3_audio_in_window_t2

0x55f2,	// (0x0004d0ce) popup_call3_audio_in_window_t3_ParamLimits

0x55f2,	// (0x0004d0ce) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x0005702c) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x0005702c) popup_call3_audio_in_window_t

0x199b,	// (0x00049477) bg_popup_call3_rect_pane

0xb5dd,	// (0x000530b9) bg_popup_call3_rect_pane_g1

0x12aa,	// (0x00048d86) bg_popup_call3_rect_pane_g2

0xb5e5,	// (0x000530c1) bg_popup_call3_rect_pane_g3

0xb5ed,	// (0x000530c9) bg_popup_call3_rect_pane_g4

0xb5f5,	// (0x000530d1) bg_popup_call3_rect_pane_g5

0xb5fd,	// (0x000530d9) bg_popup_call3_rect_pane_g6

0xb605,	// (0x000530e1) bg_popup_call3_rect_pane_g7

0xdf1f,	// (0x000559fb) mup_visualizer_osc_pane

0xdf1f,	// (0x000559fb) mup_visualizer_spec_pane

0x54b9,	// (0x0004cf95) call3_video_qcif_pane_ParamLimits

0x54b9,	// (0x0004cf95) call3_video_qcif_pane

0x54cc,	// (0x0004cfa8) call3_video_qcif_uncrop_pane_ParamLimits

0x54cc,	// (0x0004cfa8) call3_video_qcif_uncrop_pane

0x54dc,	// (0x0004cfb8) call3_video_subqcif_pane_ParamLimits

0x54dc,	// (0x0004cfb8) call3_video_subqcif_pane

0x54f2,	// (0x0004cfce) call3_video_subqcif_uncrop_pane_ParamLimits

0x54f2,	// (0x0004cfce) call3_video_subqcif_uncrop_pane

0x5565,	// (0x0004d041) popup_call3_audio_in_window_g4_ParamLimits

0x5565,	// (0x0004d041) popup_call3_audio_in_window_g4

0xdf1f,	// (0x000559fb) mup_spec_half_pane

0xdf1f,	// (0x000559fb) mup_spec_half_pane_cp

0xdf1f,	// (0x000559fb) mup_osc_middle_pane

0x0fbb,	// (0x00048a97) mup_visualizer_osc_pane_g1

0xb7f1,	// (0x000532cd) mup_spec_bar_pane_ParamLimits

0xb7f1,	// (0x000532cd) mup_spec_bar_pane

0x0fbb,	// (0x00048a97) mup_spec_bar_pane_g1

0x0fbb,	// (0x00048a97) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) mup_spec_bar_pane_g

0x1332,	// (0x00048e0e) aid_cale_week_size_cell_pane_ParamLimits

0x134c,	// (0x00048e28) bg_cale_heading_pane_ParamLimits

0x1370,	// (0x00048e4c) bg_cale_pane_cp01_ParamLimits

0x138d,	// (0x00048e69) cale_week_corner_pane_ParamLimits

0x13ac,	// (0x00048e88) cale_week_day_heading_pane_ParamLimits

0x13d5,	// (0x00048eb1) cale_week_scroll_pane_g1_ParamLimits

0x13f4,	// (0x00048ed0) cale_week_scroll_pane_g2_ParamLimits

0x140c,	// (0x00048ee8) cale_week_scroll_pane_g3_ParamLimits

0x1424,	// (0x00048f00) cale_week_scroll_pane_g4_ParamLimits

0x143c,	// (0x00048f18) cale_week_scroll_pane_g5_ParamLimits

0x145c,	// (0x00048f38) cale_week_scroll_pane_g6_ParamLimits

0x147c,	// (0x00048f58) cale_week_scroll_pane_g7_ParamLimits

0x14a0,	// (0x00048f7c) cale_week_scroll_pane_g8_ParamLimits

0x14c4,	// (0x00048fa0) cale_week_scroll_pane_g9_ParamLimits

0x14dc,	// (0x00048fb8) cale_week_scroll_pane_g10_ParamLimits

0x14f4,	// (0x00048fd0) cale_week_scroll_pane_g11_ParamLimits

0x150c,	// (0x00048fe8) cale_week_scroll_pane_g12_ParamLimits

0x1530,	// (0x0004900c) cale_week_scroll_pane_g13_ParamLimits

0x1530,	// (0x0004900c) cale_week_scroll_pane_g14_ParamLimits

0x1530,	// (0x0004900c) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x00056c02) cale_week_scroll_pane_g_ParamLimits

0x1578,	// (0x00049054) cale_week_time_pane_ParamLimits

0x159c,	// (0x00049078) grid_cale_week_pane_ParamLimits

0x15ce,	// (0x000490aa) listscroll_cale_week_pane_t1

0x15e0,	// (0x000490bc) scroll_pane_cp08_ParamLimits

0x23e2,	// (0x00049ebe) cale_month_corner_pane_ParamLimits

0x28ea,	// (0x0004a3c6) cale_month_pane_t1

0x28fc,	// (0x0004a3d8) cale_month_week_pane_ParamLimits

0x33bf,	// (0x0004ae9b) popup_call_status_window_g1_ParamLimits

0x33d3,	// (0x0004aeaf) popup_call_status_window_g2_ParamLimits

0x33e7,	// (0x0004aec3) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x00056d7c) popup_call_status_window_g_ParamLimits

0x3450,	// (0x0004af2c) aid_call2_pane

0x0218,	// (0x00047cf4) msg_header_pane_g1

0x3fca,	// (0x0004baa6) postcard_address2_pane_ParamLimits

0x3fca,	// (0x0004baa6) postcard_address2_pane

0x3fe0,	// (0x0004babc) postcard_message2_pane_ParamLimits

0x3fe0,	// (0x0004babc) postcard_message2_pane

0x5456,	// (0x0004cf32) message2_row_pane_ParamLimits

0x5456,	// (0x0004cf32) message2_row_pane

0x5476,	// (0x0004cf52) address2_row_pane_ParamLimits

0x5476,	// (0x0004cf52) address2_row_pane

0xb7be,	// (0x0005329a) postcard_message2_row_pane_g1

0xb7c6,	// (0x000532a2) postcard_message2_row_pane_t1

0xb7be,	// (0x0005329a) address2_row_pane_g1

0xb7c6,	// (0x000532a2) address2_row_pane_t1

0x1993,	// (0x0004946f) aid_size_cell_vorec

0xecdf,	// (0x000567bb) main_rss_pane

0xb7d4,	// (0x000532b0) rss_list_single_pane_ParamLimits

0xb7d4,	// (0x000532b0) rss_list_single_pane

0xb7e2,	// (0x000532be) rss_list_single_pane_t1

0xb7e2,	// (0x000532be) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x00057017) rss_list_single_pane_t

0xecdf,	// (0x000567bb) main_camera2_pane

0xecdf,	// (0x000567bb) main_video2_pane

0xb894,	// (0x00053370) cams_zoom_pane_cp2_ParamLimits

0xb894,	// (0x00053370) cams_zoom_pane_cp2

0xb894,	// (0x00053370) image2_vga_pane_ParamLimits

0xb894,	// (0x00053370) image2_vga_pane

0xb8a2,	// (0x0005337e) main_camera2_pane_g1_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g1

0xb8a2,	// (0x0005337e) main_camera2_pane_g2_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g2

0xb8a2,	// (0x0005337e) main_camera2_pane_g3_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g3

0xb8a2,	// (0x0005337e) main_camera2_pane_g4_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g4

0xb8a2,	// (0x0005337e) main_camera2_pane_g5_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g5

0xb8a2,	// (0x0005337e) main_camera2_pane_g6_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g6

0xb8a2,	// (0x0005337e) main_camera2_pane_g7_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g7

0xb8a2,	// (0x0005337e) main_camera2_pane_g8_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g8

0x0008,

0xf557,	// (0x00057033) main_camera2_pane_g_ParamLimits

0xf557,	// (0x00057033) main_camera2_pane_g

0x5626,	// (0x0004d102) main_camera2_pane_t1_ParamLimits

0x5626,	// (0x0004d102) main_camera2_pane_t1

0x5626,	// (0x0004d102) main_camera2_pane_t2_ParamLimits

0x5626,	// (0x0004d102) main_camera2_pane_t2

0x5626,	// (0x0004d102) main_camera2_pane_t3_ParamLimits

0x5626,	// (0x0004d102) main_camera2_pane_t3

0x5626,	// (0x0004d102) main_camera2_pane_t4_ParamLimits

0x5626,	// (0x0004d102) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x00057046) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x00057046) main_camera2_pane_t

0xb8c4,	// (0x000533a0) cams_zoom_pane_cp4_ParamLimits

0xb8c4,	// (0x000533a0) cams_zoom_pane_cp4

0xb8d2,	// (0x000533ae) image2_cif_pane_ParamLimits

0xb8d2,	// (0x000533ae) image2_cif_pane

0x0cd1,	// (0x000487ad) image2_subqcif_pane_ParamLimits

0x0cd1,	// (0x000487ad) image2_subqcif_pane

0x563a,	// (0x0004d116) main_video2_pane_g1_ParamLimits

0x563a,	// (0x0004d116) main_video2_pane_g1

0x563a,	// (0x0004d116) main_video2_pane_g2_ParamLimits

0x563a,	// (0x0004d116) main_video2_pane_g2

0x563a,	// (0x0004d116) main_video2_pane_g3_ParamLimits

0x563a,	// (0x0004d116) main_video2_pane_g3

0x563a,	// (0x0004d116) main_video2_pane_g4_ParamLimits

0x563a,	// (0x0004d116) main_video2_pane_g4

0x563a,	// (0x0004d116) main_video2_pane_g5_ParamLimits

0x563a,	// (0x0004d116) main_video2_pane_g5

0x563a,	// (0x0004d116) main_video2_pane_g6_ParamLimits

0x563a,	// (0x0004d116) main_video2_pane_g6

0x0005,

0xf579,	// (0x00057055) main_video2_pane_g_ParamLimits

0xf579,	// (0x00057055) main_video2_pane_g

0x5648,	// (0x0004d124) main_video2_pane_t1_ParamLimits

0x5648,	// (0x0004d124) main_video2_pane_t1

0x5648,	// (0x0004d124) main_video2_pane_t2_ParamLimits

0x5648,	// (0x0004d124) main_video2_pane_t2

0x5648,	// (0x0004d124) main_video2_pane_t3_ParamLimits

0x5648,	// (0x0004d124) main_video2_pane_t3

0x0002,

0xf586,	// (0x00057062) main_video2_pane_t_ParamLimits

0xf586,	// (0x00057062) main_video2_pane_t

0x4f57,	// (0x0004ca33) call_muted_g2

0x0001,

0xf52d,	// (0x00057009) call_muted_g

0xecdf,	// (0x000567bb) main_mup2_pane

0x3b17,	// (0x0004b5f3) main_mup2_pane_g1_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup2_pane_g1

0x3b17,	// (0x0004b5f3) main_mup2_pane_g2_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup2_pane_g2

0x0fbb,	// (0x00048a97) main_mup_pane_g13_cp1

0xdf1f,	// (0x000559fb) mup_volume_pane_cp1

0x3b17,	// (0x0004b5f3) main_mup2_pane_g4_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup2_pane_g4

0x3b17,	// (0x0004b5f3) main_mup2_pane_g5_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup2_pane_g5

0x3b17,	// (0x0004b5f3) main_mup2_pane_g6_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup2_pane_g6

0x3b17,	// (0x0004b5f3) main_mup2_pane_g7_ParamLimits

0x3b17,	// (0x0004b5f3) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x00057069) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x00057069) main_mup2_pane_g

0x3b25,	// (0x0004b601) main_mup2_pane_t1_ParamLimits

0x3b25,	// (0x0004b601) main_mup2_pane_t1

0x3b25,	// (0x0004b601) main_mup2_pane_t2_ParamLimits

0x3b25,	// (0x0004b601) main_mup2_pane_t2

0x3b25,	// (0x0004b601) main_mup2_pane_t3_ParamLimits

0x3b25,	// (0x0004b601) main_mup2_pane_t3

0x3b25,	// (0x0004b601) main_mup2_pane_t4_ParamLimits

0x3b25,	// (0x0004b601) main_mup2_pane_t4

0x3b25,	// (0x0004b601) main_mup2_pane_t5_ParamLimits

0x3b25,	// (0x0004b601) main_mup2_pane_t5

0x3b25,	// (0x0004b601) main_mup2_pane_t6_ParamLimits

0x3b25,	// (0x0004b601) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x00057078) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x00057078) main_mup2_pane_t

0x3b39,	// (0x0004b615) mup2_visualizer_pane_ParamLimits

0x3b39,	// (0x0004b615) mup2_visualizer_pane

0x3b39,	// (0x0004b615) mup_progress_pane_cp_ParamLimits

0x3b39,	// (0x0004b615) mup_progress_pane_cp

0xb8e0,	// (0x000533bc) mup_volume_pane_cp_ParamLimits

0xb8e0,	// (0x000533bc) mup_volume_pane_cp

0x0ee7,	// (0x000489c3) mup2_visualizer_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) mup2_visualizer_pane_g1

0x0ef5,	// (0x000489d1) mup2_visualizer_pane_g2_ParamLimits

0x0ef5,	// (0x000489d1) mup2_visualizer_pane_g2

0x0ef5,	// (0x000489d1) mup2_visualizer_pane_g3_ParamLimits

0x0ef5,	// (0x000489d1) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x00056b7b) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x00056b7b) mup2_visualizer_pane_g

0xdf1f,	// (0x000559fb) aid_size_cell_fmradio

0x5107,	// (0x0004cbe3) aid_height_parent_landcape

0x20c7,	// (0x00049ba3) wml_content_pane_cp

0x20cf,	// (0x00049bab) wml_tabs_pane

0x20d8,	// (0x00049bb4) popup_wml_miniature_window

0x20e0,	// (0x00049bbc) scroll_pane_cp021

0x20f4,	// (0x00049bd0) wml_content_pane_comp8

0xecdf,	// (0x000567bb) bg_popup_sub_pane_cp05

0xb8f6,	// (0x000533d2) popup_wml_miniature_window_g1

0xb8fe,	// (0x000533da) wml_miniature_view_pane

0x565c,	// (0x0004d138) aid_size_wml_view

0x5664,	// (0x0004d140) wml_miniature_view_pane_g1

0x566d,	// (0x0004d149) wml_miniature_view_pane_g2

0x5676,	// (0x0004d152) wml_miniature_view_pane_g3

0x567e,	// (0x0004d15a) wml_miniature_view_pane_g4

0x5686,	// (0x0004d162) wml_miniature_view_pane_g5

0x568e,	// (0x0004d16a) wml_miniature_view_pane_g6

0x5696,	// (0x0004d172) wml_miniature_view_pane_g7

0x569e,	// (0x0004d17a) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x00057085) wml_miniature_view_pane_g

0xb906,	// (0x000533e2) background_graphic_ParamLimits

0xb906,	// (0x000533e2) background_graphic

0xb912,	// (0x000533ee) wml_tabs_2_pane

0xb91b,	// (0x000533f7) wml_tabs_3_pane_ParamLimits

0xb91b,	// (0x000533f7) wml_tabs_3_pane

0xb92d,	// (0x00053409) wml_tabs_4_pane_ParamLimits

0xb92d,	// (0x00053409) wml_tabs_4_pane

0xb943,	// (0x0005341f) wml_tabs_5_pane_ParamLimits

0xb943,	// (0x0005341f) wml_tabs_5_pane

0xb95d,	// (0x00053439) wml_tabs_pane_g2_ParamLimits

0xb95d,	// (0x00053439) wml_tabs_pane_g2

0xb972,	// (0x0005344e) wml_tabs_pane_g3_ParamLimits

0xb972,	// (0x0005344e) wml_tabs_pane_g3

0xb987,	// (0x00053463) wml_tabs_2_active_pane_ParamLimits

0xb987,	// (0x00053463) wml_tabs_2_active_pane

0xb987,	// (0x00053463) wml_tabs_2_passive_pane_ParamLimits

0xb987,	// (0x00053463) wml_tabs_2_passive_pane

0x56a6,	// (0x0004d182) wml_tabs_3_active_pane_cp_ParamLimits

0x56a6,	// (0x0004d182) wml_tabs_3_active_pane_cp

0x56bb,	// (0x0004d197) wml_tabs_3_passive_pane_ParamLimits

0x56bb,	// (0x0004d197) wml_tabs_3_passive_pane

0x56ce,	// (0x0004d1aa) wml_tabs_3_passive_pane_cp_ParamLimits

0x56ce,	// (0x0004d1aa) wml_tabs_3_passive_pane_cp

0x56e5,	// (0x0004d1c1) tabs_4_active_pane

0x56ed,	// (0x0004d1c9) tabs_4_passive_pane

0x56f7,	// (0x0004d1d3) tabs_4_passive_pane_cp

0x56ff,	// (0x0004d1db) tabs_4_passive_pane_cp2

0x4ecb,	// (0x0004c9a7) aid_height_text

0x3b39,	// (0x0004b615) mup_volume_cont_pane_ParamLimits

0x3b39,	// (0x0004b615) mup_volume_cont_pane

0xdf1f,	// (0x000559fb) aid_size_cell_pinb

0xdf1f,	// (0x000559fb) aid_size_list_pinb

0x3b39,	// (0x0004b615) mup2_volume_cont_pane_ParamLimits

0x3b39,	// (0x0004b615) mup2_volume_cont_pane

0xb995,	// (0x00053471) mup2_volume_cont_pane_g1_ParamLimits

0xb995,	// (0x00053471) mup2_volume_cont_pane_g1

0x0b19,	// (0x000485f5) aid_size_cell_touch_ParamLimits

0x0b19,	// (0x000485f5) aid_size_cell_touch

0x0ceb,	// (0x000487c7) touch_pane_ParamLimits

0x0ceb,	// (0x000487c7) touch_pane

0xdf1f,	// (0x000559fb) main_rss2_pane

0xb9b4,	// (0x00053490) listscroll_rss2_pane

0xb9bd,	// (0x00053499) rss2_navigation_pane

0xb9c5,	// (0x000534a1) list_rss2_pane

0x35db,	// (0x0004b0b7) scroll_pane_cp22

0xb9cd,	// (0x000534a9) rss2_navigation_pane_g1

0xb9d6,	// (0x000534b2) rss2_navigation_pane_g2

0xb9de,	// (0x000534ba) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x00057096) rss2_navigation_pane_g

0xb9e6,	// (0x000534c2) rss2_navigation_pane_t1

0x5709,	// (0x0004d1e5) rss2_list_single_pane_ParamLimits

0x5709,	// (0x0004d1e5) rss2_list_single_pane

0xb9f4,	// (0x000534d0) rss2_list_single_pane_t2

0xba02,	// (0x000534de) rss2_list_single_pane_t3_ParamLimits

0xba02,	// (0x000534de) rss2_list_single_pane_t3

0xba1f,	// (0x000534fb) rss2_list_single_pane_t4

0x2f46,	// (0x0004aa22) smil_status_pane_g1

0x0cd1,	// (0x000487ad) main_image2_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_image2_pane

0xb8a2,	// (0x0005337e) main_camera2_pane_g9_ParamLimits

0xb8a2,	// (0x0005337e) main_camera2_pane_g9

0x5626,	// (0x0004d102) main_camera2_pane_t5_ParamLimits

0x5626,	// (0x0004d102) main_camera2_pane_t5

0xb8b0,	// (0x0005338c) main_camera2_pane_t6_ParamLimits

0xb8b0,	// (0x0005338c) main_camera2_pane_t6

0x5720,	// (0x0004d1fc) main_image2_pane_g1_ParamLimits

0x5720,	// (0x0004d1fc) main_image2_pane_g1

0x4327,	// (0x0004be03) smil2_video_pane_ParamLimits

0x4327,	// (0x0004be03) smil2_video_pane

0xad29,	// (0x00052805) aid_zoom_text_primary_cp

0xad6e,	// (0x0005284a) popup_preview_fixed_window

0x1fb7,	// (0x00049a93) im_reading_pane_g1

0x5618,	// (0x0004d0f4) cams2_bc_adjust_pane_cp_ParamLimits

0x5618,	// (0x0004d0f4) cams2_bc_adjust_pane_cp

0x3b39,	// (0x0004b615) cams2_bc_adjust_pane_ParamLimits

0x3b39,	// (0x0004b615) cams2_bc_adjust_pane

0x0fbb,	// (0x00048a97) cams2_bc_adjust_pane_g1

0xdf1f,	// (0x000559fb) cams2_slider_pane

0x0fbb,	// (0x00048a97) cams2_slider_pane_g1

0x0fbb,	// (0x00048a97) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x0005709d) cams2_slider_pane_g

0x0f45,	// (0x00048a21) calc_display_pane_ParamLimits

0x0f6a,	// (0x00048a46) calc_paper_pane_ParamLimits

0x0f8d,	// (0x00048a69) grid_calc_pane_ParamLimits

0xae9e,	// (0x0005297a) popup_clock_digital_window_t1_ParamLimits

0x41a4,	// (0x0004bc80) main_image_pane_t1

0x0f25,	// (0x00048a01) aid_size_cell_calc_ParamLimits

0x0f25,	// (0x00048a01) aid_size_cell_calc

0x514d,	// (0x0004cc29) popup_blid_sat_info2_window_ParamLimits

0x514d,	// (0x0004cc29) popup_blid_sat_info2_window

0xba2d,	// (0x00053509) aid_size_cell_blid

0xb8d2,	// (0x000533ae) bg_popup_window_pane_cp07

0xba4a,	// (0x00053526) grid_popup_blid_pane

0xba54,	// (0x00053530) heading_pane_cp05_ParamLimits

0xba54,	// (0x00053530) heading_pane_cp05

0xbb1e,	// (0x000535fa) cell_popup_blid_pane_ParamLimits

0xbb1e,	// (0x000535fa) cell_popup_blid_pane

0xbb48,	// (0x00053624) cell_popup_blid_pane_g1

0xbb50,	// (0x0005362c) cell_popup_blid_pane_t1

0x3b39,	// (0x0004b615) mup2_indicator_pane_ParamLimits

0x3b39,	// (0x0004b615) mup2_indicator_pane

0xdf1f,	// (0x000559fb) mup2_visualizer_osc_pane

0xb8e0,	// (0x000533bc) mup2_visualizer_spec_pane_ParamLimits

0xb8e0,	// (0x000533bc) mup2_visualizer_spec_pane

0xdf1f,	// (0x000559fb) mup2_spec_half_pane

0xdf1f,	// (0x000559fb) mup2_spec_half_pane_cp

0xbb5e,	// (0x0005363a) mup2_spec_bar_pane_ParamLimits

0xbb5e,	// (0x0005363a) mup2_spec_bar_pane

0x0fbb,	// (0x00048a97) mup2_spec_bar_pane_g1

0xbb7d,	// (0x00053659) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x000570c3) mup2_spec_bar_pane_g

0xdf1f,	// (0x000559fb) mup2_osc_middle_pane

0x0fbb,	// (0x00048a97) mup2_visualizer_osc_pane_g1

0xdf49,	// (0x00055a25) popup_number_entry_window_t1_ParamLimits

0xdf5c,	// (0x00055a38) popup_number_entry_window_t2_ParamLimits

0xdf6e,	// (0x00055a4a) popup_number_entry_window_t3_ParamLimits

0xdf80,	// (0x00055a5c) popup_number_entry_window_t5_ParamLimits

0xdf80,	// (0x00055a5c) popup_number_entry_window_t5

0xf040,	// (0x00056b1c) popup_number_entry_window_t_ParamLimits

0xdfb5,	// (0x00055a91) text_title_cp2_ParamLimits

0xaf8b,	// (0x00052a67) aid_hotspot_pointer_text2_pane

0xafb1,	// (0x00052a8d) main_viewer_pane_g9_ParamLimits

0xafb1,	// (0x00052a8d) main_viewer_pane_g9

0x28ea,	// (0x0004a3c6) cale_month_pane_t1_ParamLimits

0x2fc8,	// (0x0004aaa4) bg_cale_pane_ParamLimits

0x2fe0,	// (0x0004aabc) list_cale_pane_ParamLimits

0x2ff1,	// (0x0004aacd) listscroll_cale_day_pane_t1

0x3003,	// (0x0004aadf) scroll_pane_cp09_ParamLimits

0x3ba2,	// (0x0004b67e) main_mup_eq_pane_t1_ParamLimits

0x3ba2,	// (0x0004b67e) main_mup_eq_pane_t1

0x3bbe,	// (0x0004b69a) main_mup_eq_pane_t2_ParamLimits

0x3bbe,	// (0x0004b69a) main_mup_eq_pane_t2

0x3bda,	// (0x0004b6b6) main_mup_eq_pane_t3_ParamLimits

0x3bda,	// (0x0004b6b6) main_mup_eq_pane_t3

0x3bf8,	// (0x0004b6d4) main_mup_eq_pane_t4_ParamLimits

0x3bf8,	// (0x0004b6d4) main_mup_eq_pane_t4

0x3c16,	// (0x0004b6f2) main_mup_eq_pane_t5_ParamLimits

0x3c16,	// (0x0004b6f2) main_mup_eq_pane_t5

0x3c34,	// (0x0004b710) main_mup_eq_pane_t6_ParamLimits

0x3c34,	// (0x0004b710) main_mup_eq_pane_t6

0x3c4a,	// (0x0004b726) main_mup_eq_pane_t7_ParamLimits

0x3c4a,	// (0x0004b726) main_mup_eq_pane_t7

0x3c60,	// (0x0004b73c) main_mup_eq_pane_t8_ParamLimits

0x3c60,	// (0x0004b73c) main_mup_eq_pane_t8

0x3c76,	// (0x0004b752) main_mup_eq_pane_t9_ParamLimits

0x3c76,	// (0x0004b752) main_mup_eq_pane_t9

0x3c92,	// (0x0004b76e) main_mup_eq_pane_t10_ParamLimits

0x3c92,	// (0x0004b76e) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x00056e76) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x00056e76) main_mup_eq_pane_t

0x3d67,	// (0x0004b843) mup_equalizer_pane_cp5_ParamLimits

0x3d7f,	// (0x0004b85b) mup_equalizer_pane_cp6_ParamLimits

0x3d97,	// (0x0004b873) mup_equalizer_pane_cp7_ParamLimits

0xdf1f,	// (0x000559fb) main_gallery_pane

0xb810,	// (0x000532ec) smil2_volume_pane

0xb818,	// (0x000532f4) smil_status_volume_pane_g1_ParamLimits

0xb82b,	// (0x00053307) smil_status_volume_pane_g2_ParamLimits

0xb83e,	// (0x0005331a) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x0005701c) smil_status_volume_pane_g_ParamLimits

0xb8d2,	// (0x000533ae) bg_popup_window_pane_cp07_ParamLimits

0xba35,	// (0x00053511) blid_firmament_pane

0x0cd1,	// (0x000487ad) aid_size_cell_gallery_ParamLimits

0x0cd1,	// (0x000487ad) aid_size_cell_gallery

0x0cd1,	// (0x000487ad) grid_gallery_pane_ParamLimits

0x0cd1,	// (0x000487ad) grid_gallery_pane

0xb8d2,	// (0x000533ae) cell_gallery_pane_ParamLimits

0xb8d2,	// (0x000533ae) cell_gallery_pane

0x0cd1,	// (0x000487ad) bg_cell_gallery_focus_pane_ParamLimits

0x0cd1,	// (0x000487ad) bg_cell_gallery_focus_pane

0x0ee7,	// (0x000489c3) cell_gallery_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_gallery_pane_g1

0x0ee7,	// (0x000489c3) cell_gallery_pane_g2_ParamLimits

0x0ee7,	// (0x000489c3) cell_gallery_pane_g2

0x0ee7,	// (0x000489c3) cell_gallery_pane_g3_ParamLimits

0x0ee7,	// (0x000489c3) cell_gallery_pane_g3

0x0ef5,	// (0x000489d1) cell_gallery_pane_g4_ParamLimits

0x0ef5,	// (0x000489d1) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x000570c8) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x000570c8) cell_gallery_pane_g

0xbb87,	// (0x00053663) bg_cell_gallery_focus_pane_g1

0xbb8f,	// (0x0005366b) bg_cell_gallery_focus_pane_g2

0xbb97,	// (0x00053673) bg_cell_gallery_focus_pane_g3

0xbb9f,	// (0x0005367b) bg_cell_gallery_focus_pane_g4

0xbba7,	// (0x00053683) bg_cell_gallery_focus_pane_g5

0xbbaf,	// (0x0005368b) bg_cell_gallery_focus_pane_g6

0xbbb7,	// (0x00053693) bg_cell_gallery_focus_pane_g7

0xbbbf,	// (0x0005369b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x000570d1) bg_cell_gallery_focus_pane_g

0xbbc7,	// (0x000536a3) aid_firma_cardinal

0xbbdb,	// (0x000536b7) blid_firmament_pane_t1

0xbbf2,	// (0x000536ce) blid_firmament_pane_t2

0xbc09,	// (0x000536e5) blid_firmament_pane_t3

0xbc20,	// (0x000536fc) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x000570e2) blid_firmament_pane_t

0xbc37,	// (0x00053713) blid_sat_info_pane

0x0fbb,	// (0x00048a97) blid_sat_info_pane_g1

0x0fbb,	// (0x00048a97) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) blid_sat_info_pane_g

0xbc47,	// (0x00053723) blid_sat_info_pane_t1

0xbc55,	// (0x00053731) smil2_volume_content_pane

0xbc5e,	// (0x0005373a) smil2_volume_pane_g1

0x119f,	// (0x00048c7b) smil2_volume_content_pane_g1

0xbc66,	// (0x00053742) smil2_volume_content_pane_g2

0xbc6f,	// (0x0005374b) smil2_volume_content_pane_g3

0xbc78,	// (0x00053754) smil2_volume_content_pane_g4

0xbc81,	// (0x0005375d) smil2_volume_content_pane_g5

0xbc8a,	// (0x00053766) smil2_volume_content_pane_g6

0xbc93,	// (0x0005376f) smil2_volume_content_pane_g7

0xbc9c,	// (0x00053778) smil2_volume_content_pane_g8

0xbca5,	// (0x00053781) smil2_volume_content_pane_g9

0xbcae,	// (0x0005378a) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x000570eb) smil2_volume_content_pane_g

0x1699,	// (0x00049175) cale_week_day_heading_pane_t1_ParamLimits

0x16c3,	// (0x0004919f) cale_week_day_heading_pane_t2_ParamLimits

0x16f2,	// (0x000491ce) cale_week_day_heading_pane_t3_ParamLimits

0x1721,	// (0x000491fd) cale_week_day_heading_pane_t4_ParamLimits

0x1750,	// (0x0004922c) cale_week_day_heading_pane_t5_ParamLimits

0x1783,	// (0x0004925f) cale_week_day_heading_pane_t6_ParamLimits

0x17ba,	// (0x00049296) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x00056c23) cale_week_day_heading_pane_t_ParamLimits

0x17e4,	// (0x000492c0) bg_cale_side_pane_ParamLimits

0x17f2,	// (0x000492ce) cale_week_time_pane_t1_ParamLimits

0x180c,	// (0x000492e8) cale_week_time_pane_t2_ParamLimits

0x1826,	// (0x00049302) cale_week_time_pane_t3_ParamLimits

0x1840,	// (0x0004931c) cale_week_time_pane_t4_ParamLimits

0x185a,	// (0x00049336) cale_week_time_pane_t5_ParamLimits

0x1874,	// (0x00049350) cale_week_time_pane_t6_ParamLimits

0x1894,	// (0x00049370) cale_week_time_pane_t7_ParamLimits

0x18ba,	// (0x00049396) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x00056c32) cale_week_time_pane_t_ParamLimits

0x18e0,	// (0x000493bc) cell_cale_week_pane_g2_ParamLimits

0x17e4,	// (0x000492c0) bg_cale_side_pane_cp01_ParamLimits

0x2d25,	// (0x0004a801) cale_month_week_pane_t1_ParamLimits

0x2d3e,	// (0x0004a81a) cale_month_week_pane_t2_ParamLimits

0x2d57,	// (0x0004a833) cale_month_week_pane_t3_ParamLimits

0x2d70,	// (0x0004a84c) cale_month_week_pane_t4_ParamLimits

0x2d89,	// (0x0004a865) cale_month_week_pane_t5_ParamLimits

0x2da2,	// (0x0004a87e) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x00056d00) cale_month_week_pane_t_ParamLimits

0xae1e,	// (0x000528fa) cell_cale_month_pane_g1_ParamLimits

0xdf1f,	// (0x000559fb) main_cale_event_viewer_pane

0xdf1f,	// (0x000559fb) listscroll_cale_event_viewer_pane

0xbcb7,	// (0x00053793) list_cale_ev_pane

0xbcbf,	// (0x0005379b) scroll_pane_cp023

0x5736,	// (0x0004d212) field_cale_ev_pane_ParamLimits

0x5736,	// (0x0004d212) field_cale_ev_pane

0xbccb,	// (0x000537a7) field_cale_ev_content_pane_ParamLimits

0xbccb,	// (0x000537a7) field_cale_ev_content_pane

0xbcd7,	// (0x000537b3) field_cale_ev_pane_g1_ParamLimits

0xbcd7,	// (0x000537b3) field_cale_ev_pane_g1

0xbce3,	// (0x000537bf) field_cale_ev_pane_g2_ParamLimits

0xbce3,	// (0x000537bf) field_cale_ev_pane_g2

0xbcfb,	// (0x000537d7) field_cale_ev_pane_g3_ParamLimits

0xbcfb,	// (0x000537d7) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x00057100) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x00057100) field_cale_ev_pane_g

0xbd13,	// (0x000537ef) field_cale_ev_pane_t1_ParamLimits

0xbd13,	// (0x000537ef) field_cale_ev_pane_t1

0x575a,	// (0x0004d236) field_cale_ev_content_pane_t1_ParamLimits

0x575a,	// (0x0004d236) field_cale_ev_content_pane_t1

0x3e47,	// (0x0004b923) bg_button_pane_cp01

0x1319,	// (0x00048df5) listscroll_cale_week_pane_ParamLimits

0x1329,	// (0x00048e05) popup_toolbar_window_cp01

0x15ce,	// (0x000490aa) listscroll_cale_week_pane_t1_ParamLimits

0x1319,	// (0x00048df5) listscroll_cale_day_pane_ParamLimits

0x1329,	// (0x00048e05) popup_toolbar_window_cp02

0x2ff1,	// (0x0004aacd) listscroll_cale_day_pane_t1_ParamLimits

0x1319,	// (0x00048df5) main_cale_month_pane_ParamLimits

0xb78e,	// (0x0005326a) popup_toolbar_window_cp03_ParamLimits

0xb78e,	// (0x0005326a) popup_toolbar_window_cp03

0x4182,	// (0x0004bc5e) main_image_pane_g2_ParamLimits

0x4182,	// (0x0004bc5e) main_image_pane_g2

0x4193,	// (0x0004bc6f) main_image_pane_g3_ParamLimits

0x4193,	// (0x0004bc6f) main_image_pane_g3

0x0002,

0xf42c,	// (0x00056f08) main_image_pane_g_ParamLimits

0xf42c,	// (0x00056f08) main_image_pane_g

0x41a4,	// (0x0004bc80) main_image_pane_t1_ParamLimits

0x41bb,	// (0x0004bc97) main_image_pane_t2_ParamLimits

0x41bb,	// (0x0004bc97) main_image_pane_t2

0x41cd,	// (0x0004bca9) main_image_pane_t3_ParamLimits

0x41cd,	// (0x0004bca9) main_image_pane_t3

0x41f5,	// (0x0004bcd1) main_image_pane_t4_ParamLimits

0x41f5,	// (0x0004bcd1) main_image_pane_t4

0x0003,

0xf433,	// (0x00056f0f) main_image_pane_t_ParamLimits

0xf433,	// (0x00056f0f) main_image_pane_t

0x4215,	// (0x0004bcf1) popup_image_details_window_cp01

0x421f,	// (0x0004bcfb) popup_toobar_trans_pane_cp01_ParamLimits

0x421f,	// (0x0004bcfb) popup_toobar_trans_pane_cp01

0x5240,	// (0x0004cd1c) popup_image_details_window_ParamLimits

0x5240,	// (0x0004cd1c) popup_image_details_window

0xb75f,	// (0x0005323b) popup_image_focus_window

0xb894,	// (0x00053370) camera2_autofocus_pane_ParamLimits

0xb894,	// (0x00053370) camera2_autofocus_pane

0xdf1f,	// (0x000559fb) bg_popup_sub_pane_cp06

0xbd2a,	// (0x00053806) popup_image_focus_window_g1

0xbd32,	// (0x0005380e) popup_image_focus_window_g2

0xbd3a,	// (0x00053816) popup_image_focus_window_g3

0xbd42,	// (0x0005381e) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x00057107) popup_image_focus_window_g

0xbd4a,	// (0x00053826) popup_image_focus_window_t1

0xbd58,	// (0x00053834) popup_image_focus_window_t2

0xbd68,	// (0x00053844) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x00057110) popup_image_focus_window_t

0x0ee7,	// (0x000489c3) camera2_autofocus_pane_g1

0x0cd1,	// (0x000487ad) bg_tb_trans_pane_cp01

0xbd76,	// (0x00053852) popup_image_details_window_g1

0xbd89,	// (0x00053865) popup_image_details_window_g2

0x0002,

0xf646,	// (0x00057122) popup_image_details_window_g

0xbdb2,	// (0x0005388e) popup_image_details_window_t1

0xbdc4,	// (0x000538a0) popup_image_details_window_t2

0xbddd,	// (0x000538b9) popup_image_details_window_t3

0xbdf1,	// (0x000538cd) popup_image_details_window_t4

0xbe0c,	// (0x000538e8) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x00057129) popup_image_details_window_t

0x1019,	// (0x00048af5) bg_calc_paper_pane_ParamLimits

0xdf1f,	// (0x000559fb) grid_highlight_pane_cp013

0xad80,	// (0x0005285c) list_calc_pane_ParamLimits

0xad92,	// (0x0005286e) scroll_pane_cp024

0x102d,	// (0x00048b09) bg_calc_display_pane_ParamLimits

0x1039,	// (0x00048b15) calc_display_pane_t1_ParamLimits

0x104e,	// (0x00048b2a) calc_display_pane_t2_ParamLimits

0xad9a,	// (0x00052876) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x00056ba3) calc_display_pane_t_ParamLimits

0x1165,	// (0x00048c41) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x00056bc0) cell_calc_pane_g

0x116e,	// (0x00048c4a) cell_calc_pane_t1

0x117d,	// (0x00048c59) grid_highlight_pane_cp02_ParamLimits

0x1193,	// (0x00048c6f) toolbar_button_pane_cp01_ParamLimits

0x1193,	// (0x00048c6f) toolbar_button_pane_cp01

0x4261,	// (0x0004bd3d) temp_image_control_pane_ParamLimits

0x4261,	// (0x0004bd3d) temp_image_control_pane

0x0cd1,	// (0x000487ad) main_mp3_pane

0xbe26,	// (0x00053902) temp_image_control_pane_g1_ParamLimits

0xbe26,	// (0x00053902) temp_image_control_pane_g1

0xbe34,	// (0x00053910) temp_image_control_pane_g2_ParamLimits

0xbe34,	// (0x00053910) temp_image_control_pane_g2

0xbe46,	// (0x00053922) temp_image_control_pane_g3_ParamLimits

0xbe46,	// (0x00053922) temp_image_control_pane_g3

0x577b,	// (0x0004d257) temp_image_control_pane_g4_ParamLimits

0x577b,	// (0x0004d257) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x00057134) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x00057134) temp_image_control_pane_g

0xbe26,	// (0x00053902) main_mp3_pane_g1

0x578e,	// (0x0004d26a) main_mp3_pane_g2

0x0007,

0xf661,	// (0x0005713d) main_mp3_pane_g

0xbe7b,	// (0x00053957) main_mp3_pane_t1

0x0ef5,	// (0x000489d1) main_camera_pane_g8_ParamLimits

0x0ef5,	// (0x000489d1) main_camera_pane_g8

0x1b26,	// (0x00049602) main_video_pane_g7_ParamLimits

0x1b26,	// (0x00049602) main_video_pane_g7

0x0fd9,	// (0x00048ab5) main_camera2_pane_t7_ParamLimits

0x0fd9,	// (0x00048ab5) main_camera2_pane_t7

0x2087,	// (0x00049b63) scroll_pane_cp025_ParamLimits

0x2087,	// (0x00049b63) scroll_pane_cp025

0x209b,	// (0x00049b77) scroll_pane_cp026_ParamLimits

0x209b,	// (0x00049b77) scroll_pane_cp026

0x20aa,	// (0x00049b86) wml_content_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_touch_calib_pane

0x5860,	// (0x0004d33c) main_touch_calib_pane_g1

0x5872,	// (0x0004d34e) main_touch_calib_pane_g2

0x5884,	// (0x0004d360) main_touch_calib_pane_g3

0x5896,	// (0x0004d372) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x0005715b) main_touch_calib_pane_g

0x58a8,	// (0x0004d384) main_touch_calib_pane_t1

0x58c2,	// (0x0004d39e) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x00057164) main_touch_calib_pane_t

0x38a7,	// (0x0004b383) mup_progress_pane_cp02

0x38dc,	// (0x0004b3b8) navi_pane_g1

0x3997,	// (0x0004b473) navi_pane_mp_t3

0x0cd1,	// (0x000487ad) main_mp3_pane_ParamLimits

0x53f9,	// (0x0004ced5) navi_pane_ParamLimits

0xbe26,	// (0x00053902) main_mp3_pane_g1_ParamLimits

0x578e,	// (0x0004d26a) main_mp3_pane_g2_ParamLimits

0x579a,	// (0x0004d276) main_mp3_pane_g3_ParamLimits

0x579a,	// (0x0004d276) main_mp3_pane_g3

0x57a8,	// (0x0004d284) main_mp3_pane_g4_ParamLimits

0x57a8,	// (0x0004d284) main_mp3_pane_g4

0x0ee7,	// (0x000489c3) main_mp3_pane_g5_ParamLimits

0x0ee7,	// (0x000489c3) main_mp3_pane_g5

0xbe56,	// (0x00053932) main_mp3_pane_g6_ParamLimits

0xbe56,	// (0x00053932) main_mp3_pane_g6

0xbe63,	// (0x0005393f) main_mp3_pane_g7_ParamLimits

0xbe63,	// (0x0005393f) main_mp3_pane_g7

0xbe6f,	// (0x0005394b) main_mp3_pane_g8_ParamLimits

0xbe6f,	// (0x0005394b) main_mp3_pane_g8

0xf661,	// (0x0005713d) main_mp3_pane_g_ParamLimits

0x57b4,	// (0x0004d290) main_mp3_pane_t2

0x57c2,	// (0x0004d29e) main_mp3_pane_t3

0xbe89,	// (0x00053965) main_mp3_pane_t4

0xbe97,	// (0x00053973) main_mp3_pane_t5

0x0005,

0xf672,	// (0x0005714e) main_mp3_pane_t

0xbea5,	// (0x00053981) mup_progress_pane_cp01

0xad29,	// (0x00052805) aid_zoom_text_secondary2

0xbcb7,	// (0x00053793) list_cale_ev2_pane

0xbcbf,	// (0x0005379b) scroll_pane_cp023_ParamLimits

0x591c,	// (0x0004d3f8) field_cale_ev2_pane_ParamLimits

0x591c,	// (0x0004d3f8) field_cale_ev2_pane

0x0226,	// (0x00047d02) field_cale_ev2_pane_g1_ParamLimits

0x0226,	// (0x00047d02) field_cale_ev2_pane_g1

0x0232,	// (0x00047d0e) field_cale_ev2_pane_g2_ParamLimits

0x0232,	// (0x00047d0e) field_cale_ev2_pane_g2

0x024a,	// (0x00047d26) field_cale_ev2_pane_g3_ParamLimits

0x024a,	// (0x00047d26) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x0005716f) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x0005716f) field_cale_ev2_pane_g

0x0262,	// (0x00047d3e) field_cale_ev2_pane_t1_ParamLimits

0x0262,	// (0x00047d3e) field_cale_ev2_pane_t1

0x0279,	// (0x00047d55) field_cale_ev2_pane_t2_ParamLimits

0x0279,	// (0x00047d55) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x00057178) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x00057178) field_cale_ev2_pane_t

0x3f7a,	// (0x0004ba56) main_postcard_pane_g5_ParamLimits

0x3f7a,	// (0x0004ba56) main_postcard_pane_g5

0x3f90,	// (0x0004ba6c) main_postcard_pane_g6_ParamLimits

0x3f90,	// (0x0004ba6c) main_postcard_pane_g6

0x0cd1,	// (0x000487ad) camera2_autofocus_pane_cp_ParamLimits

0x0cd1,	// (0x000487ad) camera2_autofocus_pane_cp

0x0cd1,	// (0x000487ad) main_mup3_pane

0x598a,	// (0x0004d466) main_mup3_pane_g1_ParamLimits

0x598a,	// (0x0004d466) main_mup3_pane_g1

0x59ac,	// (0x0004d488) main_mup3_pane_g2_ParamLimits

0x59ac,	// (0x0004d488) main_mup3_pane_g2

0x5a27,	// (0x0004d503) main_mup3_pane_g3_ParamLimits

0x5a27,	// (0x0004d503) main_mup3_pane_g3

0x5a91,	// (0x0004d56d) main_mup3_pane_g4_ParamLimits

0x5a91,	// (0x0004d56d) main_mup3_pane_g4

0x5afb,	// (0x0004d5d7) main_mup3_pane_g5_ParamLimits

0x5afb,	// (0x0004d5d7) main_mup3_pane_g5

0x5b65,	// (0x0004d641) main_mup3_pane_g6_ParamLimits

0x5b65,	// (0x0004d641) main_mup3_pane_g6

0x0ef5,	// (0x000489d1) main_mup3_pane_g7_ParamLimits

0x0ef5,	// (0x000489d1) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x00057188) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x00057188) main_mup3_pane_g

0x5be9,	// (0x0004d6c5) main_mup3_pane_t1_ParamLimits

0x5be9,	// (0x0004d6c5) main_mup3_pane_t1

0x5c53,	// (0x0004d72f) main_mup3_pane_t2_ParamLimits

0x5c53,	// (0x0004d72f) main_mup3_pane_t2

0x5d29,	// (0x0004d805) main_mup3_pane_t4_ParamLimits

0x5d29,	// (0x0004d805) main_mup3_pane_t4

0x5d87,	// (0x0004d863) main_mup3_pane_t5_ParamLimits

0x5d87,	// (0x0004d863) main_mup3_pane_t5

0x5e4f,	// (0x0004d92b) main_mup3_pane_t6_ParamLimits

0x5e4f,	// (0x0004d92b) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x00057199) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x00057199) main_mup3_pane_t

0x5f07,	// (0x0004d9e3) mup3_progress_pane_ParamLimits

0x5f07,	// (0x0004d9e3) mup3_progress_pane

0x5f9f,	// (0x0004da7b) popup_mup3_control_window_ParamLimits

0x5f9f,	// (0x0004da7b) popup_mup3_control_window

0xbeb9,	// (0x00053995) popup_mup3_text_window

0x5fd5,	// (0x0004dab1) mup3_progress_pane_t1

0x5ff4,	// (0x0004dad0) mup3_progress_pane_t2

0xbec1,	// (0x0005399d) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x000571a6) mup3_progress_pane_t

0xbede,	// (0x000539ba) mup_progress_pane_cp03

0xdf1f,	// (0x000559fb) bg_tb_trans_pane_cp04

0x6013,	// (0x0004daef) mup3_volume_pane

0x601b,	// (0x0004daf7) popup_mup3_control_window_g1

0x6024,	// (0x0004db00) mup3_volume_pane_g1

0x602d,	// (0x0004db09) mup3_volume_pane_g2

0x6036,	// (0x0004db12) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x000571ad) mup3_volume_pane_g

0xdf1f,	// (0x000559fb) bg_tb_trans_pane_cp03

0xbeee,	// (0x000539ca) popup_mup3_text_window_g1

0xbef6,	// (0x000539d2) popup_mup3_text_window_t1

0x113e,	// (0x00048c1a) list_calc_item_pane_g1_ParamLimits

0xb9ab,	// (0x00053487) mup_volume_pane_cp_g1

0x58dc,	// (0x0004d3b8) main_touch_calib_pane_t3

0x58f0,	// (0x0004d3cc) main_touch_calib_pane_t4

0x5906,	// (0x0004d3e2) main_touch_calib_pane_t5

0xad05,	// (0x000527e1) aid_cell_size_toolbar2

0xad0d,	// (0x000527e9) aid_popup3_width_pane

0xad19,	// (0x000527f5) aid_zoom_text_msg_primary

0x19e5,	// (0x000494c1) vorec_t7

0x109e,	// (0x00048b7a) bg_calc_paper_pane_g1_ParamLimits

0x10aa,	// (0x00048b86) bg_calc_paper_pane_g2_ParamLimits

0x10b6,	// (0x00048b92) bg_calc_paper_pane_g3_ParamLimits

0x10c2,	// (0x00048b9e) bg_calc_paper_pane_g4_ParamLimits

0x10ce,	// (0x00048baa) bg_calc_paper_pane_g5_ParamLimits

0x10da,	// (0x00048bb6) bg_calc_paper_pane_g6_ParamLimits

0x10ed,	// (0x00048bc9) bg_calc_paper_pane_g7_ParamLimits

0x1100,	// (0x00048bdc) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x00056baa) bg_calc_paper_pane_g_ParamLimits

0x1113,	// (0x00048bef) calc_bg_paper_pane_g9_ParamLimits

0x0cd1,	// (0x000487ad) image_qvga_pane_ParamLimits

0x0cd1,	// (0x000487ad) image_qvga_pane

0x0e6c,	// (0x00048948) bg_popup_sub_pane_cp04_ParamLimits

0x40e0,	// (0x0004bbbc) popup_mup_playback_window_g1_ParamLimits

0x40ec,	// (0x0004bbc8) popup_mup_playback_window_t1_ParamLimits

0x4101,	// (0x0004bbdd) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x00056f03) popup_mup_playback_window_t_ParamLimits

0x0ef5,	// (0x000489d1) main_mup2_pane_g3_ParamLimits

0x0ef5,	// (0x000489d1) main_mup2_pane_g3

0x1d15,	// (0x000497f1) popup_toolbar_window_cp04

0x48af,	// (0x0004c38b) popup_call2_audio_second_window_g3_ParamLimits

0x48af,	// (0x0004c38b) popup_call2_audio_second_window_g3

0x4cd7,	// (0x0004c7b3) popup_call2_audio_first_window_g4_ParamLimits

0x4cd7,	// (0x0004c7b3) popup_call2_audio_first_window_g4

0xb467,	// (0x00052f43) popup_call2_audio_in_window_g4_ParamLimits

0xb467,	// (0x00052f43) popup_call2_audio_in_window_g4

0x4116,	// (0x0004bbf2) aid_area_sk_bg_cut_ParamLimits

0x4116,	// (0x0004bbf2) aid_area_sk_bg_cut

0x4134,	// (0x0004bc10) aid_area_sk_bg_cut_2_ParamLimits

0x4134,	// (0x0004bc10) aid_area_sk_bg_cut_2

0xdf1f,	// (0x000559fb) aid_placing_details_win

0xdf1f,	// (0x000559fb) aid_placing_details_win_2

0x0ee7,	// (0x000489c3) camera2_autofocus_pane_g1_ParamLimits

0x0c78,	// (0x00048754) popup_fixed_preview_cale_window_ParamLimits

0x0c78,	// (0x00048754) popup_fixed_preview_cale_window

0x3a57,	// (0x0004b533) navi_slider_pane_g3

0x3a60,	// (0x0004b53c) navi_slider_pane_g4

0x3a69,	// (0x0004b545) navi_slider_pane_g5

0x3a57,	// (0x0004b533) navi_slider_pane_g6

0xaec4,	// (0x000529a0) navi_slider_pane_g7

0x3db8,	// (0x0004b894) mup_scale_pane_g3

0x3dc1,	// (0x0004b89d) mup_scale_pane_g4

0x3dca,	// (0x0004b8a6) mup_scale_pane_g5

0x3dd3,	// (0x0004b8af) mup_scale_pane_g6

0x3ddc,	// (0x0004b8b8) mup_scale_pane_g7

0x0fbb,	// (0x00048a97) cams2_slider_pane_g3

0x0fbb,	// (0x00048a97) cams2_slider_pane_g4

0x0fbb,	// (0x00048a97) cams2_slider_pane_g5

0x0fbb,	// (0x00048a97) cams2_slider_pane_g6

0x0fbb,	// (0x00048a97) cams2_slider_pane_g7

0x0fbb,	// (0x00048a97) camera2_autofocus_pane_cp_g1

0xb73f,	// (0x0005321b) bg_popup_preview_window_pane_cp02_ParamLimits

0xb73f,	// (0x0005321b) bg_popup_preview_window_pane_cp02

0xbf04,	// (0x000539e0) list_fp_cale_pane_ParamLimits

0xbf04,	// (0x000539e0) list_fp_cale_pane

0xbf10,	// (0x000539ec) popup_fixed_preview_cale_window_t1_ParamLimits

0xbf10,	// (0x000539ec) popup_fixed_preview_cale_window_t1

0x603f,	// (0x0004db1b) popup_fixed_preview_cale_window_t2_ParamLimits

0x603f,	// (0x0004db1b) popup_fixed_preview_cale_window_t2

0x6054,	// (0x0004db30) popup_fixed_preview_cale_window_t3_ParamLimits

0x6054,	// (0x0004db30) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x000571b4) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x000571b4) popup_fixed_preview_cale_window_t

0x606b,	// (0x0004db47) list_single_fp_cale_pane_ParamLimits

0x606b,	// (0x0004db47) list_single_fp_cale_pane

0xbf2e,	// (0x00053a0a) list_single_fp_cale_pane_g1_ParamLimits

0xbf2e,	// (0x00053a0a) list_single_fp_cale_pane_g1

0xbf3a,	// (0x00053a16) list_single_fp_cale_pane_g2_ParamLimits

0xbf3a,	// (0x00053a16) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x000571bb) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x000571bb) list_single_fp_cale_pane_g

0xbf53,	// (0x00053a2f) list_single_fp_cale_pane_t1_ParamLimits

0xbf53,	// (0x00053a2f) list_single_fp_cale_pane_t1

0xbf65,	// (0x00053a41) list_single_fp_cale_pane_t2_ParamLimits

0xbf65,	// (0x00053a41) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x000571c2) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x000571c2) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xdf1f,	// (0x000559fb) main_dialer_pane

0xdf1f,	// (0x000559fb) aid_cell_size_keypad

0xdf1f,	// (0x000559fb) dialer_ne_pane

0xdf1f,	// (0x000559fb) grid_dialer_command_1_pane

0xdf1f,	// (0x000559fb) grid_dialer_command_2_pane

0xdf1f,	// (0x000559fb) grid_dialer_keypad_pane

0x6080,	// (0x0004db5c) bg_popup_call_pane_cp06_ParamLimits

0x6080,	// (0x0004db5c) bg_popup_call_pane_cp06

0x6080,	// (0x0004db5c) dialer_ne_clear_pane_ParamLimits

0x6080,	// (0x0004db5c) dialer_ne_clear_pane

0x0fbb,	// (0x00048a97) dialer_ne_pane_g1

0x0fd9,	// (0x00048ab5) dialer_ne_pane_t1_ParamLimits

0x0fd9,	// (0x00048ab5) dialer_ne_pane_t1

0x608e,	// (0x0004db6a) dialer_ne_pane_t2_ParamLimits

0x608e,	// (0x0004db6a) dialer_ne_pane_t2

0x60b6,	// (0x0004db92) dialer_ne_pane_t3_ParamLimits

0x60b6,	// (0x0004db92) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x000571c7) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x000571c7) dialer_ne_pane_t

0x60b6,	// (0x0004db92) dialer_ne_pane_t3_copy1_ParamLimits

0x60b6,	// (0x0004db92) dialer_ne_pane_t3_copy1

0xbf98,	// (0x00053a74) cell_dialer_keypad_pane_ParamLimits

0xbf98,	// (0x00053a74) cell_dialer_keypad_pane

0x0cd1,	// (0x000487ad) cell_dialer_command_1_pane_ParamLimits

0x0cd1,	// (0x000487ad) cell_dialer_command_1_pane

0xbfaf,	// (0x00053a8b) cell_dialer_command_2_pane_ParamLimits

0xbfaf,	// (0x00053a8b) cell_dialer_command_2_pane

0x0cd1,	// (0x000487ad) bg_button_pane_cp02_ParamLimits

0x0cd1,	// (0x000487ad) bg_button_pane_cp02

0x0ee7,	// (0x000489c3) cell_dialer_keypad_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_dialer_keypad_pane_g1

0x0cd1,	// (0x000487ad) bg_button_pane_cp03_ParamLimits

0x0cd1,	// (0x000487ad) bg_button_pane_cp03

0x0ee7,	// (0x000489c3) cell_dialer_command_1_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_dialer_command_1_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp04

0x0fbb,	// (0x00048a97) cell_dialer_command_2_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp06

0x0fbb,	// (0x00048a97) dialer_ne_clear_pane_g1

0x38e8,	// (0x0004b3c4) navi_pane_g2

0x3916,	// (0x0004b3f2) navi_pane_g3

0x0002,

0xf32f,	// (0x00056e0b) navi_pane_g

0x39a5,	// (0x0004b481) navi_pane_mv_g2

0x39cc,	// (0x0004b4a8) navi_pane_mv_g5

0x39d4,	// (0x0004b4b0) navi_pane_mv_t1

0x102d,	// (0x00048b09) main_clock2_pane

0x0cd1,	// (0x000487ad) main_clock2_list_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_clock2_list_pane

0x6147,	// (0x0004dc23) main_clock2_pane_t1_ParamLimits

0x6147,	// (0x0004dc23) main_clock2_pane_t1

0x6182,	// (0x0004dc5e) main_clock2_pane_t2_ParamLimits

0x6182,	// (0x0004dc5e) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x000571d3) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x000571d3) main_clock2_pane_t

0x6221,	// (0x0004dcfd) popup_clock_analogue_window_cp03_ParamLimits

0x6221,	// (0x0004dcfd) popup_clock_analogue_window_cp03

0x6246,	// (0x0004dd22) popup_clock_digital_window_cp02_ParamLimits

0x6246,	// (0x0004dd22) popup_clock_digital_window_cp02

0x62bf,	// (0x0004dd9b) main_clock2_list_single_pane_ParamLimits

0x62bf,	// (0x0004dd9b) main_clock2_list_single_pane

0x199b,	// (0x00049477) list_highlight_pane_cp05

0xbff0,	// (0x00053acc) main_clock2_list_single_pane_t1

0x1d15,	// (0x000497f1) popup_toolbar_window_cp04_ParamLimits

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g2_ParamLimits

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g2

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g3_ParamLimits

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g3

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g4_ParamLimits

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g4

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g5_ParamLimits

0x0ef5,	// (0x000489d1) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x00057117) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x00057117) camera2_autofocus_pane_g

0x5940,	// (0x0004d41c) camera2_autofocus_pane_cp_g2

0x5948,	// (0x0004d424) camera2_autofocus_pane_cp_g3

0x5950,	// (0x0004d42c) camera2_autofocus_pane_cp_g4

0x5958,	// (0x0004d434) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x0005717d) camera2_autofocus_pane_cp_g

0xdf1f,	// (0x000559fb) popup_dialer_spcha_window

0xdf1f,	// (0x000559fb) bg_popup_sub_pane_cp07

0xdf1f,	// (0x000559fb) list_spcha_pane

0xbffe,	// (0x00053ada) list_single_spcha_pane_ParamLimits

0xbffe,	// (0x00053ada) list_single_spcha_pane

0xdf1f,	// (0x000559fb) list_highlight_pane_cp06

0x3291,	// (0x0004ad6d) list_single_spcha_pane_t1

0xb211,	// (0x00052ced) popup_call2_audio_out_window_g4_ParamLimits

0xb211,	// (0x00052ced) popup_call2_audio_out_window_g4

0xdf1f,	// (0x000559fb) main_imed2_pane

0xb769,	// (0x00053245) popup_imed_adjust2_window

0x5258,	// (0x0004cd34) popup_imed_trans_window_ParamLimits

0x5258,	// (0x0004cd34) popup_imed_trans_window

0xba80,	// (0x0005355c) popup_blid_sat_info2_window_t1

0xba8e,	// (0x0005356a) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x000570ac) popup_blid_sat_info2_window_t

0x637a,	// (0x0004de56) aid_size_cell_colour_35

0x639a,	// (0x0004de76) aid_size_cell_colour_112

0x63ba,	// (0x0004de96) aid_size_cell_effect

0x3b39,	// (0x0004b615) bg_tb_trans_pane_cp02

0x3143,	// (0x0004ac1f) heading_imed_pane

0x63da,	// (0x0004deb6) listscroll_imed_pane

0xc010,	// (0x00053aec) heading_imed_pane_g1

0xc018,	// (0x00053af4) heading_imed_pane_t1

0xc026,	// (0x00053b02) grid_imed_colour_35_pane_ParamLimits

0xc026,	// (0x00053b02) grid_imed_colour_35_pane

0x63e6,	// (0x0004dec2) grid_imed_effect_pane

0xc042,	// (0x00053b1e) list_imed_aspect_pane

0x63fd,	// (0x0004ded9) scroll_pane_cp027_ParamLimits

0x63fd,	// (0x0004ded9) scroll_pane_cp027

0x640e,	// (0x0004deea) cell_imed_effect_pane_ParamLimits

0x640e,	// (0x0004deea) cell_imed_effect_pane

0xc04a,	// (0x00053b26) cell_imed_colour_pane_ParamLimits

0xc04a,	// (0x00053b26) cell_imed_colour_pane

0xc094,	// (0x00053b70) cell_imed_colour_pane_g1_ParamLimits

0xc094,	// (0x00053b70) cell_imed_colour_pane_g1

0xc0a5,	// (0x00053b81) hgihlgiht_grid_pane_cp016_ParamLimits

0xc0a5,	// (0x00053b81) hgihlgiht_grid_pane_cp016

0x6439,	// (0x0004df15) cell_imed_effect_pane_g1

0x6441,	// (0x0004df1d) grid_highlight_pane_cp017

0xc0b6,	// (0x00053b92) list_imed_single_pane_ParamLimits

0xc0b6,	// (0x00053b92) list_imed_single_pane

0xdf1f,	// (0x000559fb) list_highlight_pane_cp07

0xc0ca,	// (0x00053ba6) list_imed_aspect_pane_comp1_t1

0x3b39,	// (0x0004b615) bg_tb_trans_pane_cp05

0xc0ec,	// (0x00053bc8) popup_imed_adjust2_window_g1

0xc113,	// (0x00053bef) popup_imed_adjust2_window_t1

0xc12b,	// (0x00053c07) slider_imed_adjust_pane

0xc13f,	// (0x00053c1b) slider_imed_adjust_pane_g1

0xc14f,	// (0x00053c2b) slider_imed_adjust_pane_g2

0xc15f,	// (0x00053c3b) slider_imed_adjust_pane_g3

0xc170,	// (0x00053c4c) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x000571f0) slider_imed_adjust_pane_g

0x644a,	// (0x0004df26) aid_size_cell_clipart2

0xc181,	// (0x00053c5d) grid_imed_clipart_pane

0x3ded,	// (0x0004b8c9) scroll_pane_cp031

0x6456,	// (0x0004df32) cell_imed_clipart_pane_ParamLimits

0x6456,	// (0x0004df32) cell_imed_clipart_pane

0x6473,	// (0x0004df4f) cell_imed_clipart_pane_g1

0xdf1f,	// (0x000559fb) grid_highlight_pane_cp014

0x6125,	// (0x0004dc01) main_clock2_pane_g1_ParamLimits

0x6125,	// (0x0004dc01) main_clock2_pane_g1

0x6266,	// (0x0004dd42) aid_call2_pane_cp10

0x6278,	// (0x0004dd54) aid_call_pane_cp10

0x37e0,	// (0x0004b2bc) popup_clock_analogue_window_cp10_g1

0x37e0,	// (0x0004b2bc) popup_clock_analogue_window_cp10_g2

0x628a,	// (0x0004dd66) popup_clock_analogue_window_cp10_g3

0x628a,	// (0x0004dd66) popup_clock_analogue_window_cp10_g4

0x37e0,	// (0x0004b2bc) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x000571de) popup_clock_analogue_window_cp10_g

0x62a0,	// (0x0004dd7c) popup_clock_analogue_window_cp10_t1

0x62d1,	// (0x0004ddad) clock_digital_number_pane_cp10_ParamLimits

0x62d1,	// (0x0004ddad) clock_digital_number_pane_cp10

0x62eb,	// (0x0004ddc7) clock_digital_number_pane_cp11_ParamLimits

0x62eb,	// (0x0004ddc7) clock_digital_number_pane_cp11

0x6305,	// (0x0004dde1) clock_digital_number_pane_cp12_ParamLimits

0x6305,	// (0x0004dde1) clock_digital_number_pane_cp12

0x6321,	// (0x0004ddfd) clock_digital_number_pane_cp13_ParamLimits

0x6321,	// (0x0004ddfd) clock_digital_number_pane_cp13

0x633d,	// (0x0004de19) clock_digital_separator_pane_cp10_ParamLimits

0x633d,	// (0x0004de19) clock_digital_separator_pane_cp10

0x6359,	// (0x0004de35) popup_clock_digital_window_cp02_t1_ParamLimits

0x6359,	// (0x0004de35) popup_clock_digital_window_cp02_t1

0x0e64,	// (0x00048940) clock_digital_number_pane_cp10_g1

0x0e64,	// (0x00048940) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000571f9) clock_digital_number_pane_cp10_g

0x0e64,	// (0x00048940) clock_digital_separator_pane_cp10_g1

0x0e64,	// (0x00048940) clock_digital_separator_pane_g2_cp10

0x3a16,	// (0x0004b4f2) navi_pane_vded_g4

0x3a1f,	// (0x0004b4fb) navi_pane_vded_g5

0x3a28,	// (0x0004b504) navi_pane_vded_t1

0xdf1f,	// (0x000559fb) main_vded_pane

0x647c,	// (0x0004df58) main_vded_pane_g1

0x6488,	// (0x0004df64) main_vded_pane_g2

0x6494,	// (0x0004df70) main_vded_pane_g3

0x0002,

0xf722,	// (0x000571fe) main_vded_pane_g

0x64a0,	// (0x0004df7c) main_vded_pane_t1

0x64ae,	// (0x0004df8a) main_vded_pane_t2

0x0001,

0xf729,	// (0x00057205) main_vded_pane_t

0x64bc,	// (0x0004df98) vded_slider_pane

0x64c6,	// (0x0004dfa2) vded_video_pane

0xc18b,	// (0x00053c67) vded_video_pane_g1

0x64d2,	// (0x0004dfae) vded_video_pane_g2

0x0fbb,	// (0x00048a97) vded_video_pane_g3

0x0002,

0xf72e,	// (0x0005720a) vded_video_pane_g

0xc195,	// (0x00053c71) vded_slider_pane_g1

0xb9ab,	// (0x00053487) vded_slider_pane_g2

0xc19e,	// (0x00053c7a) vded_slider_pane_g3

0xc1a7,	// (0x00053c83) vded_slider_pane_g4

0xc1b0,	// (0x00053c8c) vded_slider_pane_g5

0x0004,

0xf735,	// (0x00057211) vded_slider_pane_g

0x5f89,	// (0x0004da65) mup3_rocker_pane_ParamLimits

0x5f89,	// (0x0004da65) mup3_rocker_pane

0x64db,	// (0x0004dfb7) mup3_control_keys_pane_g1

0x64e3,	// (0x0004dfbf) mup3_control_keys_pane_g2

0x64eb,	// (0x0004dfc7) mup3_control_keys_pane_g3

0x64f3,	// (0x0004dfcf) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x0005721c) mup3_control_keys_pane_g

0x0cad,	// (0x00048789) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0cad,	// (0x00048789) popup_toolbar2_fixed_window_cp01

0x5fbf,	// (0x0004da9b) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5fbf,	// (0x0004da9b) popup_toolbar2_fixed_window_cp02

0x4a21,	// (0x0004c4fd) popup_call2_audio_second_window_t4_ParamLimits

0x4a21,	// (0x0004c4fd) popup_call2_audio_second_window_t4

0xb0d6,	// (0x00052bb2) popup_call2_audio_first_window_t6_ParamLimits

0xb0d6,	// (0x00052bb2) popup_call2_audio_first_window_t6

0xb314,	// (0x00052df0) popup_call2_audio_out_window_t6_ParamLimits

0xb314,	// (0x00052df0) popup_call2_audio_out_window_t6

0xdf1f,	// (0x000559fb) main_vitu_pane

0x0cd1,	// (0x000487ad) aid_size_cell_itu_ParamLimits

0x0cd1,	// (0x000487ad) aid_size_cell_itu

0x0cd1,	// (0x000487ad) bg_popup_window_pane_cp08_ParamLimits

0x0cd1,	// (0x000487ad) bg_popup_window_pane_cp08

0x0cd1,	// (0x000487ad) field_vitu_entry_pane_ParamLimits

0x0cd1,	// (0x000487ad) field_vitu_entry_pane

0x0cd1,	// (0x000487ad) grid_vitu_function_pane_ParamLimits

0x0cd1,	// (0x000487ad) grid_vitu_function_pane

0x0cd1,	// (0x000487ad) grid_vitu_itu_pane_ParamLimits

0x0cd1,	// (0x000487ad) grid_vitu_itu_pane

0x0cd1,	// (0x000487ad) cell_vitu_itu_pane_ParamLimits

0x0cd1,	// (0x000487ad) cell_vitu_itu_pane

0x0cd1,	// (0x000487ad) cell_vitu_function_pane_ParamLimits

0x0cd1,	// (0x000487ad) cell_vitu_function_pane

0x0cd1,	// (0x000487ad) bg_popup_sub_pane_cp08_ParamLimits

0x0cd1,	// (0x000487ad) bg_popup_sub_pane_cp08

0x0fc5,	// (0x00048aa1) field_vitu_entry_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) field_vitu_entry_pane_t1

0xc1b9,	// (0x00053c95) field_vitu_entry_pane_t2_ParamLimits

0xc1b9,	// (0x00053c95) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x00057225) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x00057225) field_vitu_entry_pane_t

0xb8d2,	// (0x000533ae) bg_button_pane_cp05_ParamLimits

0xb8d2,	// (0x000533ae) bg_button_pane_cp05

0xc1d6,	// (0x00053cb2) cell_vitu_itu_pane_g1

0x3b25,	// (0x0004b601) cell_vitu_itu_pane_t1_ParamLimits

0x3b25,	// (0x0004b601) cell_vitu_itu_pane_t1

0x3b25,	// (0x0004b601) cell_vitu_itu_pane_t2_ParamLimits

0x3b25,	// (0x0004b601) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x0005722a) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x0005722a) cell_vitu_itu_pane_t

0xdf1f,	// (0x000559fb) bg_button_pane_cp07

0x0fbb,	// (0x00048a97) cell_vitu_function_pane_g1

0xad78,	// (0x00052854) main_calc_pane_g1

0x0b3d,	// (0x00048619) aid_visual_content_pane

0xdf1f,	// (0x000559fb) main_vradio_pane

0x0ee7,	// (0x000489c3) main_vradio_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) main_vradio_pane_g1

0x0ef5,	// (0x000489d1) main_vradio_pane_g2_ParamLimits

0x0ef5,	// (0x000489d1) main_vradio_pane_g2

0x0001,

0xf755,	// (0x00057231) main_vradio_pane_g_ParamLimits

0xf755,	// (0x00057231) main_vradio_pane_g

0x0fc5,	// (0x00048aa1) main_vradio_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) main_vradio_pane_t1

0x0fc5,	// (0x00048aa1) main_vradio_pane_t2_ParamLimits

0x0fc5,	// (0x00048aa1) main_vradio_pane_t2

0x0fd9,	// (0x00048ab5) main_vradio_pane_t3_ParamLimits

0x0fd9,	// (0x00048ab5) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x00057236) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x00057236) main_vradio_pane_t

0x0cd1,	// (0x000487ad) vradio_rocker_control_pane_ParamLimits

0x0cd1,	// (0x000487ad) vradio_rocker_control_pane

0x0cd1,	// (0x000487ad) vradio_station_info_pane_ParamLimits

0x0cd1,	// (0x000487ad) vradio_station_info_pane

0x0cd1,	// (0x000487ad) vradio_frequency_info_pane_ParamLimits

0x0cd1,	// (0x000487ad) vradio_frequency_info_pane

0x0fbb,	// (0x00048a97) vradio_station_info_pane_g1

0x3b25,	// (0x0004b601) vradio_station_info_pane_t1_ParamLimits

0x3b25,	// (0x0004b601) vradio_station_info_pane_t1

0x0fd9,	// (0x00048ab5) vradio_station_info_pane_t2_ParamLimits

0x0fd9,	// (0x00048ab5) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x0005723d) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x0005723d) vradio_station_info_pane_t

0xdf1f,	// (0x000559fb) vradio_tuning_pane

0x6503,	// (0x0004dfdf) vradio_rocker_control_pane_g1

0xc1f2,	// (0x00053cce) vradio_rocker_control_pane_g2

0x650d,	// (0x0004dfe9) vradio_rocker_control_pane_g3

0x6517,	// (0x0004dff3) vradio_rocker_control_pane_g4

0x6521,	// (0x0004dffd) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x00057242) vradio_rocker_control_pane_g

0x0fbb,	// (0x00048a97) vradio_frequency_info_pane_g1

0x0fc5,	// (0x00048aa1) vradio_frequency_info_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) vradio_frequency_info_pane_t1

0x652b,	// (0x0004e007) vradio_tuning_pane_g1

0x6536,	// (0x0004e012) vradio_tuning_pane_t1

0xad31,	// (0x0005280d) area_side_right_pane_ParamLimits

0xad31,	// (0x0005280d) area_side_right_pane

0xb706,	// (0x000531e2) status_small_pane_g1

0xb70e,	// (0x000531ea) status_small_pane_g2

0xb717,	// (0x000531f3) status_small_pane_g3

0xb720,	// (0x000531fc) status_small_pane_g4

0x0003,

0xf532,	// (0x0005700e) status_small_pane_g

0xb729,	// (0x00053205) status_small_pane_t1

0xdf1f,	// (0x000559fb) main_video3_pane

0xdf1f,	// (0x000559fb) cams_zoom_vslider_pane

0xc1fa,	// (0x00053cd6) image3_wide_pane_ParamLimits

0xc1fa,	// (0x00053cd6) image3_wide_pane

0xdf1f,	// (0x000559fb) image3_wide_small_pane

0xc214,	// (0x00053cf0) main_video3_pane_g1_ParamLimits

0xc214,	// (0x00053cf0) main_video3_pane_g1

0xc214,	// (0x00053cf0) main_video3_pane_g2_ParamLimits

0xc214,	// (0x00053cf0) main_video3_pane_g2

0x0001,

0xf771,	// (0x0005724d) main_video3_pane_g_ParamLimits

0xf771,	// (0x0005724d) main_video3_pane_g

0xc232,	// (0x00053d0e) main_video3_pane_t1_ParamLimits

0xc232,	// (0x00053d0e) main_video3_pane_t1

0xc232,	// (0x00053d0e) main_video3_pane_t2_ParamLimits

0xc232,	// (0x00053d0e) main_video3_pane_t2

0xc232,	// (0x00053d0e) main_video3_pane_t3_ParamLimits

0xc232,	// (0x00053d0e) main_video3_pane_t3

0x0002,

0xf776,	// (0x00057252) main_video3_pane_t_ParamLimits

0xf776,	// (0x00057252) main_video3_pane_t

0x0fbb,	// (0x00048a97) cams_zoom_vslider_pane_g1

0x0fbb,	// (0x00048a97) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) cams_zoom_vslider_pane_g

0xdf1f,	// (0x000559fb) small_slider_vertical_pane

0x0fbb,	// (0x00048a97) small_slider_vertical_pane_g1

0x0fbb,	// (0x00048a97) small_slider_vertical_pane_g2

0xc259,	// (0x00053d35) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x00057259) small_slider_vertical_pane_g

0xdf1f,	// (0x000559fb) main_hwr_training_pane

0xc262,	// (0x00053d3e) hwr_training_instruct_pane_ParamLimits

0xc262,	// (0x00053d3e) hwr_training_instruct_pane

0x6545,	// (0x0004e021) hwr_training_navi_pane_ParamLimits

0x6545,	// (0x0004e021) hwr_training_navi_pane

0x6564,	// (0x0004e040) hwr_training_write_pane_ParamLimits

0x6564,	// (0x0004e040) hwr_training_write_pane

0xdf1f,	// (0x000559fb) bg_frame_shadow_pane

0xc299,	// (0x00053d75) hwr_training_write_pane_g1

0xc2a1,	// (0x00053d7d) hwr_training_write_pane_g2

0xc2a9,	// (0x00053d85) hwr_training_write_pane_g3

0xc2b1,	// (0x00053d8d) hwr_training_write_pane_g4

0xc2b9,	// (0x00053d95) hwr_training_write_pane_g5

0xc2c1,	// (0x00053d9d) hwr_training_write_pane_g6

0xc2c9,	// (0x00053da5) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x00057260) hwr_training_write_pane_g

0xc2d1,	// (0x00053dad) hwr_training_navi_pane_g1_ParamLimits

0xc2d1,	// (0x00053dad) hwr_training_navi_pane_g1

0xc2e3,	// (0x00053dbf) hwr_training_navi_pane_g2_ParamLimits

0xc2e3,	// (0x00053dbf) hwr_training_navi_pane_g2

0xc2f5,	// (0x00053dd1) hwr_training_navi_pane_g3_ParamLimits

0xc2f5,	// (0x00053dd1) hwr_training_navi_pane_g3

0xc305,	// (0x00053de1) hwr_training_navi_pane_g4_ParamLimits

0xc305,	// (0x00053de1) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x0005726f) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x0005726f) hwr_training_navi_pane_g

0xc312,	// (0x00053dee) hwr_training_navi_pane_t1

0x65ac,	// (0x0004e088) list_single_hwr_training_instruct_pane_ParamLimits

0x65ac,	// (0x0004e088) list_single_hwr_training_instruct_pane

0xc320,	// (0x00053dfc) list_single_hwr_training_instruct_pane_t1

0xbb87,	// (0x00053663) bg_frame_shadow_pane_g1

0xc32f,	// (0x00053e0b) bg_frame_shadow_pane_g2

0xc337,	// (0x00053e13) bg_frame_shadow_pane_g3

0xc33f,	// (0x00053e1b) bg_frame_shadow_pane_g4

0xc347,	// (0x00053e23) bg_frame_shadow_pane_g5

0xc34f,	// (0x00053e2b) bg_frame_shadow_pane_g6

0xc357,	// (0x00053e33) bg_frame_shadow_pane_g7

0x1282,	// (0x00048d5e) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x0005727a) bg_frame_shadow_pane_g

0xdf1f,	// (0x000559fb) main_video_tele_dialer_pane

0x65c8,	// (0x0004e0a4) aid_size_cell_video_keypad_ParamLimits

0x65c8,	// (0x0004e0a4) aid_size_cell_video_keypad

0x65e2,	// (0x0004e0be) grid_video_dialer_keypad_pane_ParamLimits

0x65e2,	// (0x0004e0be) grid_video_dialer_keypad_pane

0x662e,	// (0x0004e10a) video_down_pane_cp_ParamLimits

0x662e,	// (0x0004e10a) video_down_pane_cp

0x6660,	// (0x0004e13c) cell_video_dialer_keypad_pane_ParamLimits

0x6660,	// (0x0004e13c) cell_video_dialer_keypad_pane

0xc35f,	// (0x00053e3b) bg_button_pane_cp08_ParamLimits

0xc35f,	// (0x00053e3b) bg_button_pane_cp08

0x6686,	// (0x0004e162) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6686,	// (0x0004e162) cell_video_dialer_keypad_pane_g1

0x5f73,	// (0x0004da4f) mup3_rocker2_pane_ParamLimits

0x5f73,	// (0x0004da4f) mup3_rocker2_pane

0x0fbb,	// (0x00048a97) mup3_rocker2_pane_g1

0x5125,	// (0x0004cc01) main_dialer2_pane

0xdf1f,	// (0x000559fb) main_mp4_pane

0xc389,	// (0x00053e65) main_mp4_pane_g1_ParamLimits

0xc389,	// (0x00053e65) main_mp4_pane_g1

0xc389,	// (0x00053e65) main_mp4_pane_g2_ParamLimits

0xc389,	// (0x00053e65) main_mp4_pane_g2

0x66c1,	// (0x0004e19d) main_mp4_pane_g3_ParamLimits

0x66c1,	// (0x0004e19d) main_mp4_pane_g3

0xc3a7,	// (0x00053e83) main_mp4_pane_g4_ParamLimits

0xc3a7,	// (0x00053e83) main_mp4_pane_g4

0xc3cf,	// (0x00053eab) main_mp4_pane_g5_ParamLimits

0xc3cf,	// (0x00053eab) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x0005729a) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x0005729a) main_mp4_pane_g

0xc437,	// (0x00053f13) main_mp4_pane_t1_ParamLimits

0xc437,	// (0x00053f13) main_mp4_pane_t1

0xc499,	// (0x00053f75) main_mp4_pane_t2_ParamLimits

0xc499,	// (0x00053f75) main_mp4_pane_t2

0xc4fd,	// (0x00053fd9) main_mp4_pane_t3_ParamLimits

0xc4fd,	// (0x00053fd9) main_mp4_pane_t3

0xc55b,	// (0x00054037) main_mp4_pane_t4_ParamLimits

0xc55b,	// (0x00054037) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x000572ab) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x000572ab) main_mp4_pane_t

0xc5b9,	// (0x00054095) mp4_progress_pane_ParamLimits

0xc5b9,	// (0x00054095) mp4_progress_pane

0xc5ed,	// (0x000540c9) mp4_rocker_pane_ParamLimits

0xc5ed,	// (0x000540c9) mp4_rocker_pane

0xc60b,	// (0x000540e7) mp4_progress_pane_t1

0xc62d,	// (0x00054109) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x000572b4) mp4_progress_pane_t

0xc64f,	// (0x0005412b) mup_progress_pane_cp04

0x0fbb,	// (0x00048a97) mp4_rocker_pane_g1

0x0cd1,	// (0x000487ad) aid_cell_size_keypad2_ParamLimits

0x0cd1,	// (0x000487ad) aid_cell_size_keypad2

0x0cd1,	// (0x000487ad) dialer2_ne_pane_ParamLimits

0x0cd1,	// (0x000487ad) dialer2_ne_pane

0x0cd1,	// (0x000487ad) grid_dialer2_keypad_pane_ParamLimits

0x0cd1,	// (0x000487ad) grid_dialer2_keypad_pane

0xb8d2,	// (0x000533ae) bg_popup_call_pane_cp07_ParamLimits

0xb8d2,	// (0x000533ae) bg_popup_call_pane_cp07

0x66f3,	// (0x0004e1cf) dialer2_ne_pane_t1_ParamLimits

0x66f3,	// (0x0004e1cf) dialer2_ne_pane_t1

0x6733,	// (0x0004e20f) cell_dialer2_keypad_pane_ParamLimits

0x6733,	// (0x0004e20f) cell_dialer2_keypad_pane

0xb8d2,	// (0x000533ae) bg_button_pane_pane_cp04_ParamLimits

0xb8d2,	// (0x000533ae) bg_button_pane_pane_cp04

0x0ee7,	// (0x000489c3) cell_dialer2_keypad_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) cell_dialer2_keypad_pane_g1

0x1bea,	// (0x000496c6) aid_placing_vt_set_content_ParamLimits

0x1bea,	// (0x000496c6) aid_placing_vt_set_content

0x1c0e,	// (0x000496ea) aid_placing_vt_set_title_ParamLimits

0x1c0e,	// (0x000496ea) aid_placing_vt_set_title

0xdf1f,	// (0x000559fb) main_image3_pane

0x67a8,	// (0x0004e284) area_side_right_pane_cp01_ParamLimits

0x67a8,	// (0x0004e284) area_side_right_pane_cp01

0x67c1,	// (0x0004e29d) main_image3_pane_g1_ParamLimits

0x67c1,	// (0x0004e29d) main_image3_pane_g1

0x67cf,	// (0x0004e2ab) main_image3_pane_g2_ParamLimits

0x67cf,	// (0x0004e2ab) main_image3_pane_g2

0x67f7,	// (0x0004e2d3) main_image3_pane_g3_ParamLimits

0x67f7,	// (0x0004e2d3) main_image3_pane_g3

0x6821,	// (0x0004e2fd) main_image3_pane_g4_ParamLimits

0x6821,	// (0x0004e2fd) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x000572c3) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x000572c3) main_image3_pane_g

0x684b,	// (0x0004e327) main_image3_pane_t1_ParamLimits

0x684b,	// (0x0004e327) main_image3_pane_t1

0x68a3,	// (0x0004e37f) main_image3_pane_t2_ParamLimits

0x68a3,	// (0x0004e37f) main_image3_pane_t2

0x68f5,	// (0x0004e3d1) main_image3_pane_t3_ParamLimits

0x68f5,	// (0x0004e3d1) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x000572cc) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x000572cc) main_image3_pane_t

0x0cd1,	// (0x000487ad) grid_sctrl_middle_pane_cp01_ParamLimits

0x0cd1,	// (0x000487ad) grid_sctrl_middle_pane_cp01

0x697d,	// (0x0004e459) cell_sctrl_middle_pane_cp01_ParamLimits

0x697d,	// (0x0004e459) cell_sctrl_middle_pane_cp01

0x699a,	// (0x0004e476) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x699a,	// (0x0004e476) cell_sctrl_middle_pane_cp01_g1

0xdf1f,	// (0x000559fb) main_call4_pane

0x69af,	// (0x0004e48b) aid_size_button_call4_ParamLimits

0x69af,	// (0x0004e48b) aid_size_button_call4

0x69e2,	// (0x0004e4be) call4_windows_pane_ParamLimits

0x69e2,	// (0x0004e4be) call4_windows_pane

0x6a01,	// (0x0004e4dd) grid_call4_button_pane_ParamLimits

0x6a01,	// (0x0004e4dd) grid_call4_button_pane

0x6a38,	// (0x0004e514) call4_windows_conf_pane

0x6a51,	// (0x0004e52d) popup_call4_audio_first_window_ParamLimits

0x6a51,	// (0x0004e52d) popup_call4_audio_first_window

0x6aa1,	// (0x0004e57d) popup_call4_audio_second_window_ParamLimits

0x6aa1,	// (0x0004e57d) popup_call4_audio_second_window

0x6aba,	// (0x0004e596) popup_call4_audio_wait_window_ParamLimits

0x6aba,	// (0x0004e596) popup_call4_audio_wait_window

0x6ac8,	// (0x0004e5a4) cell_call4_button_pane_ParamLimits

0x6ac8,	// (0x0004e5a4) cell_call4_button_pane

0x6aef,	// (0x0004e5cb) bg_button_pane_cp09_ParamLimits

0x6aef,	// (0x0004e5cb) bg_button_pane_cp09

0x6afb,	// (0x0004e5d7) cell_call4_button_pane_g1_ParamLimits

0x6afb,	// (0x0004e5d7) cell_call4_button_pane_g1

0x6b21,	// (0x0004e5fd) cell_call4_button_pane_t1_ParamLimits

0x6b21,	// (0x0004e5fd) cell_call4_button_pane_t1

0xc6fe,	// (0x000541da) popup_call4_audio_conf_window_ParamLimits

0xc6fe,	// (0x000541da) popup_call4_audio_conf_window

0x5fd5,	// (0x0004dab1) mup3_progress_pane_t1_ParamLimits

0x5ff4,	// (0x0004dad0) mup3_progress_pane_t2_ParamLimits

0xbec1,	// (0x0005399d) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x000571a6) mup3_progress_pane_t_ParamLimits

0xbede,	// (0x000539ba) mup_progress_pane_cp03_ParamLimits

0x64fb,	// (0x0004dfd7) mup3_control_keys_pane_g4_copy1

0xc5ed,	// (0x000540c9) mp4_rocker2_pane_ParamLimits

0xc5ed,	// (0x000540c9) mp4_rocker2_pane

0xc718,	// (0x000541f4) mp4_rocker2_pane_g1

0xc718,	// (0x000541f4) mp4_rocker2_pane_g2

0xc718,	// (0x000541f4) mp4_rocker2_pane_g3

0xc718,	// (0x000541f4) mp4_rocker2_pane_g4

0xc718,	// (0x000541f4) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x000572d5) mp4_rocker2_pane_g

0xdf1f,	// (0x000559fb) main_camera4_pane

0xdf1f,	// (0x000559fb) main_video4_pane

0x65fc,	// (0x0004e0d8) main_video_tele_dialer_pane_t1_ParamLimits

0x65fc,	// (0x0004e0d8) main_video_tele_dialer_pane_t1

0x6615,	// (0x0004e0f1) main_video_tele_dialer_pane_t2_ParamLimits

0x6615,	// (0x0004e0f1) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x0005728b) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x0005728b) main_video_tele_dialer_pane_t

0x6b5f,	// (0x0004e63b) cam4_autofocus_pane_ParamLimits

0x6b5f,	// (0x0004e63b) cam4_autofocus_pane

0x6b75,	// (0x0004e651) cam4_image_uncrop_pane_ParamLimits

0x6b75,	// (0x0004e651) cam4_image_uncrop_pane

0x6b8e,	// (0x0004e66a) cam4_indicators_pane_ParamLimits

0x6b8e,	// (0x0004e66a) cam4_indicators_pane

0x6bbe,	// (0x0004e69a) main_camera4_pane_g1_ParamLimits

0x6bbe,	// (0x0004e69a) main_camera4_pane_g1

0x6bd0,	// (0x0004e6ac) main_camera4_pane_g2_ParamLimits

0x6bd0,	// (0x0004e6ac) main_camera4_pane_g2

0x6be3,	// (0x0004e6bf) main_camera4_pane_g3_ParamLimits

0x6be3,	// (0x0004e6bf) main_camera4_pane_g3

0x6bf6,	// (0x0004e6d2) main_camera4_pane_g4_ParamLimits

0x6bf6,	// (0x0004e6d2) main_camera4_pane_g4

0x6c09,	// (0x0004e6e5) main_camera4_pane_g5_ParamLimits

0x6c09,	// (0x0004e6e5) main_camera4_pane_g5

0x0005,

0xf804,	// (0x000572e0) main_camera4_pane_g_ParamLimits

0xf804,	// (0x000572e0) main_camera4_pane_g

0x6c2d,	// (0x0004e709) main_camera4_pane_t1_ParamLimits

0x6c2d,	// (0x0004e709) main_camera4_pane_t1

0x0ee7,	// (0x000489c3) bg_tb_trans_pane_cp06

0xc746,	// (0x00054222) cam4_indicators_pane_g1

0xc757,	// (0x00054233) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x000572fb) cam4_indicators_pane_g

0xc76f,	// (0x0005424b) cam4_indicators_pane_t1

0x6c91,	// (0x0004e76d) main_video4_pane_g1_ParamLimits

0x6c91,	// (0x0004e76d) main_video4_pane_g1

0x6ca0,	// (0x0004e77c) main_video4_pane_g2_ParamLimits

0x6ca0,	// (0x0004e77c) main_video4_pane_g2

0x6cb0,	// (0x0004e78c) main_video4_pane_g3_ParamLimits

0x6cb0,	// (0x0004e78c) main_video4_pane_g3

0x6cc0,	// (0x0004e79c) main_video4_pane_g4_ParamLimits

0x6cc0,	// (0x0004e79c) main_video4_pane_g4

0x0004,

0xf826,	// (0x00057302) main_video4_pane_g_ParamLimits

0xf826,	// (0x00057302) main_video4_pane_g

0x6ce0,	// (0x0004e7bc) vid4_indicators_pane_ParamLimits

0x6ce0,	// (0x0004e7bc) vid4_indicators_pane

0x6d0a,	// (0x0004e7e6) video4_image_uncrop_cif_pane_ParamLimits

0x6d0a,	// (0x0004e7e6) video4_image_uncrop_cif_pane

0x6d24,	// (0x0004e800) video4_image_uncrop_nhd_pane_ParamLimits

0x6d24,	// (0x0004e800) video4_image_uncrop_nhd_pane

0x6b75,	// (0x0004e651) video4_image_uncrop_vga_pane_ParamLimits

0x6b75,	// (0x0004e651) video4_image_uncrop_vga_pane

0x0cd1,	// (0x000487ad) bg_tb_trans_pane_cp07

0xc79d,	// (0x00054279) vid4_indicators_pane_g1

0xc7b3,	// (0x0005428f) vid4_indicators_pane_g2

0xc7c7,	// (0x000542a3) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x0005730d) vid4_indicators_pane_g

0xc7f8,	// (0x000542d4) vid4_indicators_pane_t1

0x6d3b,	// (0x0004e817) cam4_autofocus_pane_g1

0x6d43,	// (0x0004e81f) cam4_autofocus_pane_g2

0x6d4b,	// (0x0004e827) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x00057318) cam4_autofocus_pane_g

0x6d53,	// (0x0004e82f) cam4_autofocus_pane_g3_copy1

0x6644,	// (0x0004e120) video_down_pane_cp_t1

0x6652,	// (0x0004e12e) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x00057290) video_down_pane_cp_t

0x0cd1,	// (0x000487ad) popup_vitu2_window_ParamLimits

0x0cd1,	// (0x000487ad) popup_vitu2_window

0x6d5b,	// (0x0004e837) aid_size_cell2_itu2_ParamLimits

0x6d5b,	// (0x0004e837) aid_size_cell2_itu2

0x6d81,	// (0x0004e85d) aid_size_cell_itu2_ParamLimits

0x6d81,	// (0x0004e85d) aid_size_cell_itu2

0x6080,	// (0x0004db5c) bg_popup_window_pane_cp09_ParamLimits

0x6080,	// (0x0004db5c) bg_popup_window_pane_cp09

0x6ddf,	// (0x0004e8bb) field_vitu2_entry_pane_ParamLimits

0x6ddf,	// (0x0004e8bb) field_vitu2_entry_pane

0x6e07,	// (0x0004e8e3) grid_vitu2_function_pane_ParamLimits

0x6e07,	// (0x0004e8e3) grid_vitu2_function_pane

0x6e58,	// (0x0004e934) grid_vitu2_itu_pane_ParamLimits

0x6e58,	// (0x0004e934) grid_vitu2_itu_pane

0x6ee8,	// (0x0004e9c4) cell_vitu2_itu_pane_ParamLimits

0x6ee8,	// (0x0004e9c4) cell_vitu2_itu_pane

0x6f16,	// (0x0004e9f2) cell_vitu2_function_pane_ParamLimits

0x6f16,	// (0x0004e9f2) cell_vitu2_function_pane

0xc80f,	// (0x000542eb) bg_popup_call_pane_cp08_ParamLimits

0xc80f,	// (0x000542eb) bg_popup_call_pane_cp08

0xc826,	// (0x00054302) field_vitu2_entry_pane_g1

0xc832,	// (0x0005430e) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x0005731f) field_vitu2_entry_pane_g

0x028e,	// (0x00047d6a) field_vitu2_entry_pane_t1_ParamLimits

0x028e,	// (0x00047d6a) field_vitu2_entry_pane_t1

0xc83e,	// (0x0005431a) field_vitu2_entry_pane_t2_ParamLimits

0xc83e,	// (0x0005431a) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x00057326) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x00057326) field_vitu2_entry_pane_t

0x6f5a,	// (0x0004ea36) bg_button_pane_cp010_ParamLimits

0x6f5a,	// (0x0004ea36) bg_button_pane_cp010

0x6f68,	// (0x0004ea44) cell_vitu2_itu_pane_g1

0x6f8e,	// (0x0004ea6a) cell_vitu2_itu_pane_t1_ParamLimits

0x6f8e,	// (0x0004ea6a) cell_vitu2_itu_pane_t1

0x02be,	// (0x00047d9a) cell_vitu2_itu_pane_t2_ParamLimits

0x02be,	// (0x00047d9a) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x00057330) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x00057330) cell_vitu2_itu_pane_t

0x0cd1,	// (0x000487ad) bg_button_pane_cp011

0x6fec,	// (0x0004eac8) cell_vitu2_function_pane_g1

0xdf1f,	// (0x000559fb) main_myfav_hc_pane

0x6945,	// (0x0004e421) popup_image3_note_pane_ParamLimits

0x6945,	// (0x0004e421) popup_image3_note_pane

0x6961,	// (0x0004e43d) popup_image3_tool_bar_pane_ParamLimits

0x6961,	// (0x0004e43d) popup_image3_tool_bar_pane

0x034c,	// (0x00047e28) cell_vitu2_itu_pane_t3_ParamLimits

0x034c,	// (0x00047e28) cell_vitu2_itu_pane_t3

0xdf1f,	// (0x000559fb) bg_popup_trans_pane

0xc863,	// (0x0005433f) grid_image3_tool_bar_pane

0xc86d,	// (0x00054349) bg_popup_trans_pane_g1

0x21df,	// (0x00049cbb) bg_popup_trans_pane_g2

0xc875,	// (0x00054351) bg_popup_trans_pane_g3

0xc87d,	// (0x00054359) bg_popup_trans_pane_g4

0xc885,	// (0x00054361) bg_popup_trans_pane_g5

0xc88d,	// (0x00054369) bg_popup_trans_pane_g6

0xc895,	// (0x00054371) bg_popup_trans_pane_g7

0xc89d,	// (0x00054379) bg_popup_trans_pane_g8

0x21bf,	// (0x00049c9b) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x00057337) bg_popup_trans_pane_g

0xc8a5,	// (0x00054381) cell_image3_tool_bar_pane_ParamLimits

0xc8a5,	// (0x00054381) cell_image3_tool_bar_pane

0x0fbb,	// (0x00048a97) cell_image3_tool_bar_pane_g1

0xdf1f,	// (0x000559fb) bg_popup_trans_pane_cp1

0xc8bb,	// (0x00054397) popup_image3_note_pane_t1

0xc8c9,	// (0x000543a5) popup_image3_note_pane_t2

0xc8d7,	// (0x000543b3) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x0005734a) popup_image3_note_pane_t

0xc8e7,	// (0x000543c3) popup_image3_note_pane_t3_copy1

0x7000,	// (0x0004eadc) bg_myfav_hc_instruction_pane_ParamLimits

0x7000,	// (0x0004eadc) bg_myfav_hc_instruction_pane

0x7018,	// (0x0004eaf4) cell_myfav_contact_pane_ParamLimits

0x7018,	// (0x0004eaf4) cell_myfav_contact_pane

0x7034,	// (0x0004eb10) cell_myfav_contact_pane_cp1_ParamLimits

0x7034,	// (0x0004eb10) cell_myfav_contact_pane_cp1

0x704c,	// (0x0004eb28) cell_myfav_contact_pane_cp2_ParamLimits

0x704c,	// (0x0004eb28) cell_myfav_contact_pane_cp2

0x7064,	// (0x0004eb40) cell_myfav_contact_pane_cp3_ParamLimits

0x7064,	// (0x0004eb40) cell_myfav_contact_pane_cp3

0x707b,	// (0x0004eb57) cell_myfav_contact_pane_cp4_ParamLimits

0x707b,	// (0x0004eb57) cell_myfav_contact_pane_cp4

0x7093,	// (0x0004eb6f) cell_myfav_contact_pane_cp5_ParamLimits

0x7093,	// (0x0004eb6f) cell_myfav_contact_pane_cp5

0x70a7,	// (0x0004eb83) cell_myfav_contact_pane_cp6_ParamLimits

0x70a7,	// (0x0004eb83) cell_myfav_contact_pane_cp6

0x70bd,	// (0x0004eb99) cell_myfav_contact_pane_cp7_ParamLimits

0x70bd,	// (0x0004eb99) cell_myfav_contact_pane_cp7

0xc8f5,	// (0x000543d1) listscroll_gen_pane_cp05

0x70d5,	// (0x0004ebb1) main_myfav_hc_pane_g1_ParamLimits

0x70d5,	// (0x0004ebb1) main_myfav_hc_pane_g1

0x70ef,	// (0x0004ebcb) main_myfav_hc_pane_g2_ParamLimits

0x70ef,	// (0x0004ebcb) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x00057351) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x00057351) main_myfav_hc_pane_g

0x7123,	// (0x0004ebff) main_myfav_hc_pane_t1_ParamLimits

0x7123,	// (0x0004ebff) main_myfav_hc_pane_t1

0xc8fe,	// (0x000543da) main_myfav_hc_pane_t2_ParamLimits

0xc8fe,	// (0x000543da) main_myfav_hc_pane_t2

0xc910,	// (0x000543ec) main_myfav_hc_pane_t3_ParamLimits

0xc910,	// (0x000543ec) main_myfav_hc_pane_t3

0x713a,	// (0x0004ec16) main_myfav_hc_pane_t4_ParamLimits

0x713a,	// (0x0004ec16) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x00057358) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x00057358) main_myfav_hc_pane_t

0x0fbb,	// (0x00048a97) bg_myfav_hc_instruction_pane_g1

0xc922,	// (0x000543fe) cell_myfav_contact_pane_g1_ParamLimits

0xc922,	// (0x000543fe) cell_myfav_contact_pane_g1

0xc922,	// (0x000543fe) cell_myfav_contact_pane_g2_ParamLimits

0xc922,	// (0x000543fe) cell_myfav_contact_pane_g2

0xc92e,	// (0x0005440a) cell_myfav_contact_pane_g3_ParamLimits

0xc92e,	// (0x0005440a) cell_myfav_contact_pane_g3

0x0ef5,	// (0x000489d1) cell_myfav_contact_pane_g4_ParamLimits

0x0ef5,	// (0x000489d1) cell_myfav_contact_pane_g4

0xc93b,	// (0x00054417) cell_myfav_contact_pane_g5_ParamLimits

0xc93b,	// (0x00054417) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x00057363) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x00057363) cell_myfav_contact_pane_g

0x7109,	// (0x0004ebe5) main_myfav_hc_pane_g3_ParamLimits

0x7109,	// (0x0004ebe5) main_myfav_hc_pane_g3

0x014f,	// (0x00047c2b) popup_adpt_find_window

0x7164,	// (0x0004ec40) afind_page_pane_ParamLimits

0x7164,	// (0x0004ec40) afind_page_pane

0x717a,	// (0x0004ec56) aid_size_cell_afind_ParamLimits

0x717a,	// (0x0004ec56) aid_size_cell_afind

0x7198,	// (0x0004ec74) bg_popup_sub_pane_cp09_ParamLimits

0x7198,	// (0x0004ec74) bg_popup_sub_pane_cp09

0x71aa,	// (0x0004ec86) find_pane_cp01_ParamLimits

0x71aa,	// (0x0004ec86) find_pane_cp01

0xc947,	// (0x00054423) grid_afind_control_pane_ParamLimits

0xc947,	// (0x00054423) grid_afind_control_pane

0x71be,	// (0x0004ec9a) grid_afind_pane_ParamLimits

0x71be,	// (0x0004ec9a) grid_afind_pane

0x71e0,	// (0x0004ecbc) cell_afind_pane_ParamLimits

0x71e0,	// (0x0004ecbc) cell_afind_pane

0x0fbb,	// (0x00048a97) afind_page_pane_g1

0x7249,	// (0x0004ed25) afind_page_pane_g2

0x7251,	// (0x0004ed2d) afind_page_pane_g3

0x0002,

0xf892,	// (0x0005736e) afind_page_pane_g

0x7259,	// (0x0004ed35) afind_page_pane_t1

0xc96d,	// (0x00054449) cell_afind_grid_control_pane_ParamLimits

0xc96d,	// (0x00054449) cell_afind_grid_control_pane

0xc97c,	// (0x00054458) bg_button_pane_cp69_ParamLimits

0xc97c,	// (0x00054458) bg_button_pane_cp69

0x7267,	// (0x0004ed43) cell_afind_pane_g1_ParamLimits

0x7267,	// (0x0004ed43) cell_afind_pane_g1

0x7274,	// (0x0004ed50) cell_afind_pane_t1_ParamLimits

0x7274,	// (0x0004ed50) cell_afind_pane_t1

0xc988,	// (0x00054464) bg_button_pane_cp72

0xc990,	// (0x0005446c) cell_afind_grid_control_pane_g1

0x44b9,	// (0x0004bf95) aid_image_placing_area_ParamLimits

0x44b9,	// (0x0004bf95) aid_image_placing_area

0x0ee7,	// (0x000489c3) field_vitu_entry_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) field_vitu_entry_pane_g1

0x0ee7,	// (0x000489c3) field_vitu_entry_pane_g2_ParamLimits

0x0ee7,	// (0x000489c3) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x00056c98) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x00056c98) field_vitu_entry_pane_g

0xc1d6,	// (0x00053cb2) cell_vitu_itu_pane_g1_ParamLimits

0xc1b9,	// (0x00053c95) cell_vitu_itu_pane_t3_ParamLimits

0xc1b9,	// (0x00053c95) cell_vitu_itu_pane_t3

0xc60b,	// (0x000540e7) mp4_progress_pane_t1_ParamLimits

0xc62d,	// (0x00054109) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x000572b4) mp4_progress_pane_t_ParamLimits

0xc64f,	// (0x0005412b) mup_progress_pane_cp04_ParamLimits

0x714e,	// (0x0004ec2a) main_myfav_hc_pane_t5_ParamLimits

0x714e,	// (0x0004ec2a) main_myfav_hc_pane_t5

0xad21,	// (0x000527fd) aid_zoom_text_primary

0x014f,	// (0x00047c2b) popup_adpt_find_window_ParamLimits

0x0cd1,	// (0x000487ad) main_cam_set_pane

0x6ba7,	// (0x0004e683) cam4_zoom_pane_ParamLimits

0x6ba7,	// (0x0004e683) cam4_zoom_pane

0x7286,	// (0x0004ed62) main_cam_set_pane_g1_ParamLimits

0x7286,	// (0x0004ed62) main_cam_set_pane_g1

0x7294,	// (0x0004ed70) main_cam_set_pane_g2_ParamLimits

0x7294,	// (0x0004ed70) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x00057375) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x00057375) main_cam_set_pane_g

0x72b5,	// (0x0004ed91) main_cam_set_pane_t1_ParamLimits

0x72b5,	// (0x0004ed91) main_cam_set_pane_t1

0x72d0,	// (0x0004edac) main_cset_listscroll_pane_ParamLimits

0x72d0,	// (0x0004edac) main_cset_listscroll_pane

0x72f8,	// (0x0004edd4) main_cset_slider_pane_ParamLimits

0x72f8,	// (0x0004edd4) main_cset_slider_pane

0xc9a1,	// (0x0005447d) main_cset_list_pane_ParamLimits

0xc9a1,	// (0x0005447d) main_cset_list_pane

0xc9b1,	// (0x0005448d) scroll_pane_cp028

0x7322,	// (0x0004edfe) aid_area_touch_slider

0x733e,	// (0x0004ee1a) cset_slider_pane

0x7361,	// (0x0004ee3d) main_cset_slider_pane_g1

0x7376,	// (0x0004ee52) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x0005737a) main_cset_slider_pane_g

0xc9ea,	// (0x000544c6) main_cset_slider_pane_t1

0x7438,	// (0x0004ef14) main_cset_slider_pane_t2

0x7452,	// (0x0004ef2e) main_cset_slider_pane_t3

0x746c,	// (0x0004ef48) main_cset_slider_pane_t4

0x7486,	// (0x0004ef62) main_cset_slider_pane_t5

0x74a4,	// (0x0004ef80) main_cset_slider_pane_t6

0x74b9,	// (0x0004ef95) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x0005739f) main_cset_slider_pane_t

0x75c5,	// (0x0004f0a1) cset_list_set_pane_ParamLimits

0x75c5,	// (0x0004f0a1) cset_list_set_pane

0xca84,	// (0x00054560) aid_position_infowindow_above

0xca8c,	// (0x00054568) aid_position_infowindow_below

0x03aa,	// (0x00047e86) cset_list_set_pane_g1_ParamLimits

0x03aa,	// (0x00047e86) cset_list_set_pane_g1

0x03b6,	// (0x00047e92) cset_list_set_pane_g3_ParamLimits

0x03b6,	// (0x00047e92) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x000573be) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x000573be) cset_list_set_pane_g

0x03c5,	// (0x00047ea1) cset_list_set_pane_t1_ParamLimits

0x03c5,	// (0x00047ea1) cset_list_set_pane_t1

0x0cd1,	// (0x000487ad) list_highlight_pane_cp021_ParamLimits

0x0cd1,	// (0x000487ad) list_highlight_pane_cp021

0x3db8,	// (0x0004b894) cset_slider_pane_g1

0x3dca,	// (0x0004b8a6) cset_slider_pane_g2

0x3dc1,	// (0x0004b89d) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x000573c3) cset_slider_pane_g

0xca94,	// (0x00054570) aid_area_touch_cam4_zoom

0x75d9,	// (0x0004f0b5) cam4_zoom_cont_pane

0x75e1,	// (0x0004f0bd) cam4_zoom_pane_g1

0x75e9,	// (0x0004f0c5) cam4_zoom_pane_g2

0x75f1,	// (0x0004f0cd) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x000573ca) cam4_zoom_pane_g

0xca9d,	// (0x00054579) cam4_zoom_cont_pane_g1

0xcaa6,	// (0x00054582) cam4_zoom_cont_pane_g2

0xcaaf,	// (0x0005458b) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x000573d1) cam4_zoom_cont_pane_g

0x69cd,	// (0x0004e4a9) call4_image_pane_ParamLimits

0x69cd,	// (0x0004e4a9) call4_image_pane

0x6a38,	// (0x0004e514) call4_windows_conf_pane_ParamLimits

0x6a7f,	// (0x0004e55b) popup_call4_audio_in_window_ParamLimits

0x6a7f,	// (0x0004e55b) popup_call4_audio_in_window

0xdf1f,	// (0x000559fb) bg_popup_call2_act_pane_cp02

0xc6f6,	// (0x000541d2) call4_list_conf_pane

0x0fbb,	// (0x00048a97) call4_image_pane_g1

0x0fbb,	// (0x00048a97) call4_image_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) call4_image_pane_g

0xcab8,	// (0x00054594) list_single_graphic_popup_conf4_pane_ParamLimits

0xcab8,	// (0x00054594) list_single_graphic_popup_conf4_pane

0xdf1f,	// (0x000559fb) list_highlight_pane_cp022

0xcacd,	// (0x000545a9) list_single_graphic_popup_conf4_pane_g1

0x34d4,	// (0x0004afb0) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x000573d8) list_single_graphic_popup_conf4_pane_g

0xcad5,	// (0x000545b1) list_single_graphic_popup_conf4_pane_t1

0x1d37,	// (0x00049813) popup_vtel_slider_window_ParamLimits

0x1d37,	// (0x00049813) popup_vtel_slider_window

0xc662,	// (0x0005413e) dialer2_ne_pane_t2_ParamLimits

0xc662,	// (0x0005413e) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x000572b9) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x000572b9) dialer2_ne_pane_t

0xb8d2,	// (0x000533ae) bg_popup_sub_pane_cp010_ParamLimits

0xb8d2,	// (0x000533ae) bg_popup_sub_pane_cp010

0x75f9,	// (0x0004f0d5) popup_vtel_slider_window_g1_ParamLimits

0x75f9,	// (0x0004f0d5) popup_vtel_slider_window_g1

0x760c,	// (0x0004f0e8) popup_vtel_slider_window_g2_ParamLimits

0x760c,	// (0x0004f0e8) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x000573dd) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x000573dd) popup_vtel_slider_window_g

0x7662,	// (0x0004f13e) vtel_slider_pane_ParamLimits

0x7662,	// (0x0004f13e) vtel_slider_pane

0x7684,	// (0x0004f160) vtel_slider_pane_g1_ParamLimits

0x7684,	// (0x0004f160) vtel_slider_pane_g1

0x7698,	// (0x0004f174) vtel_slider_pane_g2_ParamLimits

0x7698,	// (0x0004f174) vtel_slider_pane_g2

0x76b0,	// (0x0004f18c) vtel_slider_pane_g3_ParamLimits

0x76b0,	// (0x0004f18c) vtel_slider_pane_g3

0x7684,	// (0x0004f160) vtel_slider_pane_g4_ParamLimits

0x7684,	// (0x0004f160) vtel_slider_pane_g4

0x76c6,	// (0x0004f1a2) vtel_slider_pane_g5_ParamLimits

0x76c6,	// (0x0004f1a2) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x000573e6) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x000573e6) vtel_slider_pane_g

0x0cd1,	// (0x000487ad) main_gallery2_pane

0x6dad,	// (0x0004e889) aid_size_row_itut2_dropdow_list_ParamLimits

0x6dad,	// (0x0004e889) aid_size_row_itut2_dropdow_list

0x6e2f,	// (0x0004e90b) grid_vitu2_function_top_pane_ParamLimits

0x6e2f,	// (0x0004e90b) grid_vitu2_function_top_pane

0x6e93,	// (0x0004e96f) popup_vitu2_dropdown_list_window_ParamLimits

0x6e93,	// (0x0004e96f) popup_vitu2_dropdown_list_window

0x6eba,	// (0x0004e996) popup_vitu2_match_list_window

0x76dc,	// (0x0004f1b8) cell_vitu2_function_top_pane_ParamLimits

0x76dc,	// (0x0004f1b8) cell_vitu2_function_top_pane

0x76f6,	// (0x0004f1d2) cell_vitu2_function_top_pane_cp01_ParamLimits

0x76f6,	// (0x0004f1d2) cell_vitu2_function_top_pane_cp01

0x7712,	// (0x0004f1ee) cell_vitu2_function_top_wide_pane_ParamLimits

0x7712,	// (0x0004f1ee) cell_vitu2_function_top_wide_pane

0x0cd1,	// (0x000487ad) bg_button_pane_cp012

0x7730,	// (0x0004f20c) cell_vitu2_function_top_pane_g1

0xcaeb,	// (0x000545c7) bg_button_pane_cp013_ParamLimits

0xcaeb,	// (0x000545c7) bg_button_pane_cp013

0x7744,	// (0x0004f220) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7744,	// (0x0004f220) cell_vitu2_function_top_wide_pane_g1

0x0cd1,	// (0x000487ad) bg_popup_sub_pane_cp20

0x775c,	// (0x0004f238) list_vitu2_match_list_pane

0xc86d,	// (0x00054349) bg_popup_sub_pane_cp20_g1

0xc875,	// (0x00054351) bg_popup_sub_pane_cp20_g2

0x21df,	// (0x00049cbb) bg_popup_sub_pane_cp20_g3

0xc87d,	// (0x00054359) bg_popup_sub_pane_cp20_g4

0x21bf,	// (0x00049c9b) bg_popup_sub_pane_cp20_g5

0xcb07,	// (0x000545e3) bg_popup_sub_pane_cp20_g6

0xc88d,	// (0x00054369) bg_popup_sub_pane_cp20_g7

0xc895,	// (0x00054371) bg_popup_sub_pane_cp20_g8

0xc89d,	// (0x00054379) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x000573f1) bg_popup_sub_pane_cp20_g

0xcb0f,	// (0x000545eb) list_vitu2_match_list_item_pane_ParamLimits

0xcb0f,	// (0x000545eb) list_vitu2_match_list_item_pane

0xcb21,	// (0x000545fd) list_vitu2_match_list_item_pane_t1

0xdf1f,	// (0x000559fb) bg_popup_sub_pane_cp21

0x199b,	// (0x00049477) grid_vitu2_dropdown_list_pane

0x7774,	// (0x0004f250) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7774,	// (0x0004f250) cell_vitu2_dropdown_list_char_pane

0x7796,	// (0x0004f272) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7796,	// (0x0004f272) cell_vitu2_dropdown_list_ctrl_pane

0xcb2f,	// (0x0005460b) cell_vitu2_dropdown_list_char_pane_g1

0xcb38,	// (0x00054614) cell_vitu2_dropdown_list_char_pane_g2

0xcb41,	// (0x0005461d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x00057404) cell_vitu2_dropdown_list_char_pane_g

0x77c0,	// (0x0004f29c) cell_vitu2_dropdown_list_char_pane_t1

0x77ce,	// (0x0004f2aa) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x77ce,	// (0x0004f2aa) cell_vitu2_dropdown_list_ctrl_pane_g1

0x77de,	// (0x0004f2ba) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x77de,	// (0x0004f2ba) cell_vitu2_dropdown_list_ctrl_pane_g2

0x77ef,	// (0x0004f2cb) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x77ef,	// (0x0004f2cb) cell_vitu2_dropdown_list_ctrl_pane_g3

0x77ff,	// (0x0004f2db) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x77ff,	// (0x0004f2db) cell_vitu2_dropdown_list_ctrl_pane_g4

0x0ee7,	// (0x000489c3) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x0ee7,	// (0x000489c3) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x0005740b) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x0005740b) cell_vitu2_dropdown_list_ctrl_pane_g

0x781b,	// (0x0004f2f7) aid_size_cell_gallery2_ParamLimits

0x781b,	// (0x0004f2f7) aid_size_cell_gallery2

0x7839,	// (0x0004f315) grid_gallery2_pane_ParamLimits

0x7839,	// (0x0004f315) grid_gallery2_pane

0x7853,	// (0x0004f32f) scroll_pane_cp029_ParamLimits

0x7853,	// (0x0004f32f) scroll_pane_cp029

0x7864,	// (0x0004f340) cell_gallery2_pane_ParamLimits

0x7864,	// (0x0004f340) cell_gallery2_pane

0xcb4a,	// (0x00054626) cell_gallery2_pane_g2

0x78c8,	// (0x0004f3a4) cell_gallery2_pane_g3

0xcb52,	// (0x0005462e) cell_gallery2_pane_g4

0xcb5a,	// (0x00054636) cell_gallery2_pane_g5

0x199b,	// (0x00049477) grid_highlight_pane_cp10

0x6eba,	// (0x0004e996) popup_vitu2_match_list_window_ParamLimits

0x6ed1,	// (0x0004e9ad) popup_vitu2_query_window_ParamLimits

0x6ed1,	// (0x0004e9ad) popup_vitu2_query_window

0xdf1f,	// (0x000559fb) bg_vitu2_candi_button_pane

0xcb2f,	// (0x0005460b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcb38,	// (0x00054614) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcb41,	// (0x0005461d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x03da,	// (0x00047eb6) bg_button_pane_cp015

0x78d0,	// (0x0004f3ac) bg_button_pane_cp016

0x78dc,	// (0x0004f3b8) bg_button_pane_cp017

0x3b39,	// (0x0004b615) bg_popup_sub_pane_cp22

0xcb62,	// (0x0005463e) popup_vitu2_query_window_g1

0x0417,	// (0x00047ef3) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x00057416) popup_vitu2_query_window_g

0x0431,	// (0x00047f0d) popup_vitu2_query_window_t1_ParamLimits

0x0431,	// (0x00047f0d) popup_vitu2_query_window_t1

0x0466,	// (0x00047f42) popup_vitu2_query_window_t2_ParamLimits

0x0466,	// (0x00047f42) popup_vitu2_query_window_t2

0x0478,	// (0x00047f54) popup_vitu2_query_window_t3_ParamLimits

0x0478,	// (0x00047f54) popup_vitu2_query_window_t3

0x7903,	// (0x0004f3df) popup_vitu2_query_window_t4_ParamLimits

0x7903,	// (0x0004f3df) popup_vitu2_query_window_t4

0x7917,	// (0x0004f3f3) popup_vitu2_query_window_t5_ParamLimits

0x7917,	// (0x0004f3f3) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x0005741d) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x0005741d) popup_vitu2_query_window_t

0xc999,	// (0x00054475) main_cset_text_pane

0x7322,	// (0x0004edfe) aid_area_touch_slider_ParamLimits

0x733e,	// (0x0004ee1a) cset_slider_pane_ParamLimits

0x7361,	// (0x0004ee3d) main_cset_slider_pane_g1_ParamLimits

0x7376,	// (0x0004ee52) main_cset_slider_pane_g2_ParamLimits

0xc9ba,	// (0x00054496) main_cset_slider_pane_g3_ParamLimits

0xc9ba,	// (0x00054496) main_cset_slider_pane_g3

0x738b,	// (0x0004ee67) main_cset_slider_pane_g4_ParamLimits

0x738b,	// (0x0004ee67) main_cset_slider_pane_g4

0x739a,	// (0x0004ee76) main_cset_slider_pane_g5_ParamLimits

0x739a,	// (0x0004ee76) main_cset_slider_pane_g5

0x73a8,	// (0x0004ee84) main_cset_slider_pane_g6_ParamLimits

0x73a8,	// (0x0004ee84) main_cset_slider_pane_g6

0xf89e,	// (0x0005737a) main_cset_slider_pane_g_ParamLimits

0xc9ea,	// (0x000544c6) main_cset_slider_pane_t1_ParamLimits

0x7438,	// (0x0004ef14) main_cset_slider_pane_t2_ParamLimits

0x7452,	// (0x0004ef2e) main_cset_slider_pane_t3_ParamLimits

0x746c,	// (0x0004ef48) main_cset_slider_pane_t4_ParamLimits

0x7486,	// (0x0004ef62) main_cset_slider_pane_t5_ParamLimits

0x74a4,	// (0x0004ef80) main_cset_slider_pane_t6_ParamLimits

0x74b9,	// (0x0004ef95) main_cset_slider_pane_t7_ParamLimits

0x74e7,	// (0x0004efc3) main_cset_slider_pane_t8_ParamLimits

0x74e7,	// (0x0004efc3) main_cset_slider_pane_t8

0x750f,	// (0x0004efeb) main_cset_slider_pane_t9_ParamLimits

0x750f,	// (0x0004efeb) main_cset_slider_pane_t9

0x7537,	// (0x0004f013) main_cset_slider_pane_t10_ParamLimits

0x7537,	// (0x0004f013) main_cset_slider_pane_t10

0x755f,	// (0x0004f03b) main_cset_slider_pane_t11_ParamLimits

0x755f,	// (0x0004f03b) main_cset_slider_pane_t11

0x7589,	// (0x0004f065) main_cset_slider_pane_t12_ParamLimits

0x7589,	// (0x0004f065) main_cset_slider_pane_t12

0x75a6,	// (0x0004f082) main_cset_slider_pane_t13_ParamLimits

0x75a6,	// (0x0004f082) main_cset_slider_pane_t13

0xf8c3,	// (0x0005739f) main_cset_slider_pane_t_ParamLimits

0xdf1f,	// (0x000559fb) bg_popup_sub_pane_cp011

0xcb6e,	// (0x0005464a) main_cset_text_pane_g1

0xcb76,	// (0x00054652) main_cset_text_pane_t1

0xcb84,	// (0x00054660) main_cset_text_pane_t2

0xcb92,	// (0x0005466e) main_cset_text_pane_t3

0xcba0,	// (0x0005467c) main_cset_text_pane_t4

0xcbae,	// (0x0005468a) main_cset_text_pane_t5

0xcbbc,	// (0x00054698) main_cset_text_pane_t6

0xcbca,	// (0x000546a6) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x0005742c) main_cset_text_pane_t

0xdf1f,	// (0x000559fb) main_cam4_burst_pane

0xdf1f,	// (0x000559fb) main_cam5_pane

0xc95b,	// (0x00054437) bg_button_pane_cp019

0xc964,	// (0x00054440) bg_button_pane_cp020

0xc9c6,	// (0x000544a2) main_cset_slider_pane_g7_ParamLimits

0xc9c6,	// (0x000544a2) main_cset_slider_pane_g7

0xc9d2,	// (0x000544ae) main_cset_slider_pane_g8_ParamLimits

0xc9d2,	// (0x000544ae) main_cset_slider_pane_g8

0x73bc,	// (0x0004ee98) main_cset_slider_pane_g9_ParamLimits

0x73bc,	// (0x0004ee98) main_cset_slider_pane_g9

0x73c8,	// (0x0004eea4) main_cset_slider_pane_g10_ParamLimits

0x73c8,	// (0x0004eea4) main_cset_slider_pane_g10

0x73d4,	// (0x0004eeb0) main_cset_slider_pane_g11_ParamLimits

0x73d4,	// (0x0004eeb0) main_cset_slider_pane_g11

0x73e0,	// (0x0004eebc) main_cset_slider_pane_g12_ParamLimits

0x73e0,	// (0x0004eebc) main_cset_slider_pane_g12

0x73ec,	// (0x0004eec8) main_cset_slider_pane_g13_ParamLimits

0x73ec,	// (0x0004eec8) main_cset_slider_pane_g13

0x73f8,	// (0x0004eed4) main_cset_slider_pane_g14_ParamLimits

0x73f8,	// (0x0004eed4) main_cset_slider_pane_g14

0x7404,	// (0x0004eee0) main_cset_slider_pane_g15_ParamLimits

0x7404,	// (0x0004eee0) main_cset_slider_pane_g15

0xca12,	// (0x000544ee) main_cset_slider_pane_t14_ParamLimits

0xca12,	// (0x000544ee) main_cset_slider_pane_t14

0xca4b,	// (0x00054527) main_cset_slider_pane_t15_ParamLimits

0xca4b,	// (0x00054527) main_cset_slider_pane_t15

0x792b,	// (0x0004f407) aid_cam4_burst_size_cell_ParamLimits

0x792b,	// (0x0004f407) aid_cam4_burst_size_cell

0x794b,	// (0x0004f427) grid_cam4_burst_pane_ParamLimits

0x794b,	// (0x0004f427) grid_cam4_burst_pane

0x7985,	// (0x0004f461) linegrid_cam4_burst_pane_ParamLimits

0x7985,	// (0x0004f461) linegrid_cam4_burst_pane

0xd215,	// (0x00054cf1) scroll_pane_cp30_ParamLimits

0xd215,	// (0x00054cf1) scroll_pane_cp30

0x79a7,	// (0x0004f483) cell_cam4_burst_pane_ParamLimits

0x79a7,	// (0x0004f483) cell_cam4_burst_pane

0xcbd8,	// (0x000546b4) linegrid_cam4_burst_pane_g1_ParamLimits

0xcbd8,	// (0x000546b4) linegrid_cam4_burst_pane_g1

0x79fc,	// (0x0004f4d8) linegrid_cam4_burst_pane_g2_ParamLimits

0x79fc,	// (0x0004f4d8) linegrid_cam4_burst_pane_g2

0xcbe5,	// (0x000546c1) linegrid_cam4_burst_pane_g3_ParamLimits

0xcbe5,	// (0x000546c1) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x0005743b) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x0005743b) linegrid_cam4_burst_pane_g

0x7a0d,	// (0x0004f4e9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7a0d,	// (0x0004f4e9) linegrid_cam4_burst_pane_g3_copy1

0xcbf2,	// (0x000546ce) linegrid_cam4_burst_pane_g4_ParamLimits

0xcbf2,	// (0x000546ce) linegrid_cam4_burst_pane_g4

0x7a2b,	// (0x0004f507) linegrid_cam4_burst_pane_g5_ParamLimits

0x7a2b,	// (0x0004f507) linegrid_cam4_burst_pane_g5

0x7a3c,	// (0x0004f518) linegrid_cam4_burst_pane_g6_ParamLimits

0x7a3c,	// (0x0004f518) linegrid_cam4_burst_pane_g6

0xcbff,	// (0x000546db) linegrid_cam4_burst_pane_g7_ParamLimits

0xcbff,	// (0x000546db) linegrid_cam4_burst_pane_g7

0x7a53,	// (0x0004f52f) cell_cam4_burst_pane_g1

0xcc18,	// (0x000546f4) main_cam5_pane_t1_ParamLimits

0xcc18,	// (0x000546f4) main_cam5_pane_t1

0xcc2a,	// (0x00054706) main_cam5_pane_t2_ParamLimits

0xcc2a,	// (0x00054706) main_cam5_pane_t2

0xcc3c,	// (0x00054718) main_cam5_pane_t3_ParamLimits

0xcc3c,	// (0x00054718) main_cam5_pane_t3

0xcc4e,	// (0x0005472a) main_cam5_pane_t4_ParamLimits

0xcc4e,	// (0x0005472a) main_cam5_pane_t4

0xcc66,	// (0x00054742) main_cam5_pane_t5_ParamLimits

0xcc66,	// (0x00054742) main_cam5_pane_t5

0xcc7a,	// (0x00054756) main_cam5_pane_t6_ParamLimits

0xcc7a,	// (0x00054756) main_cam5_pane_t6

0xcc8e,	// (0x0005476a) main_cam5_pane_t7_ParamLimits

0xcc8e,	// (0x0005476a) main_cam5_pane_t7

0xcca0,	// (0x0005477c) main_cam5_pane_t8_ParamLimits

0xcca0,	// (0x0005477c) main_cam5_pane_t8

0xccbe,	// (0x0005479a) main_cam5_pane_t9_ParamLimits

0xccbe,	// (0x0005479a) main_cam5_pane_t9

0xccd0,	// (0x000547ac) main_cam5_pane_t10_ParamLimits

0xccd0,	// (0x000547ac) main_cam5_pane_t10

0xcce2,	// (0x000547be) main_cam5_pane_t11_ParamLimits

0xcce2,	// (0x000547be) main_cam5_pane_t11

0xccf6,	// (0x000547d2) main_cam5_pane_t12_ParamLimits

0xccf6,	// (0x000547d2) main_cam5_pane_t12

0xcd0d,	// (0x000547e9) main_cam5_pane_t13_ParamLimits

0xcd0d,	// (0x000547e9) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x00057447) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x00057447) main_cam5_pane_t

0x0c91,	// (0x0004876d) popup_scut_keymap_window_ParamLimits

0x0c91,	// (0x0004876d) popup_scut_keymap_window

0x7a66,	// (0x0004f542) aid_size_cell_brow_shortcut

0x199b,	// (0x00049477) bg_popup_window_pane_cp010

0x7a72,	// (0x0004f54e) grid_scut_pane

0x7a7e,	// (0x0004f55a) cell_scut_pane_ParamLimits

0x7a7e,	// (0x0004f55a) cell_scut_pane

0x7a97,	// (0x0004f573) cell_scut_pane_g1

0xcd30,	// (0x0005480c) cell_scut_pane_t1

0xcd3f,	// (0x0005481b) cell_scut_pane_t2

0x7aa0,	// (0x0004f57c) cell_scut_pane_t3

0x0002,

0xf986,	// (0x00057462) cell_scut_pane_t

0x5b78,	// (0x0004d654) main_mup3_pane_g8_ParamLimits

0x5b78,	// (0x0004d654) main_mup3_pane_g8

0x6dc7,	// (0x0004e8a3) area_vitu2_query_pane_ParamLimits

0x6dc7,	// (0x0004e8a3) area_vitu2_query_pane

0x03f1,	// (0x00047ecd) input_focus_pane_cp08

0xcd4e,	// (0x0005482a) area_vitu2_query_pane_g1

0x04f6,	// (0x00047fd2) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x00057469) area_vitu2_query_pane_g

0x7aae,	// (0x0004f58a) area_vitu2_query_pane_t1_ParamLimits

0x7aae,	// (0x0004f58a) area_vitu2_query_pane_t1

0x7ac2,	// (0x0004f59e) area_vitu2_query_pane_t2_ParamLimits

0x7ac2,	// (0x0004f59e) area_vitu2_query_pane_t2

0x050b,	// (0x00047fe7) area_vitu2_query_pane_t3_ParamLimits

0x050b,	// (0x00047fe7) area_vitu2_query_pane_t3

0xcd5a,	// (0x00054836) area_vitu2_query_pane_t4_ParamLimits

0xcd5a,	// (0x00054836) area_vitu2_query_pane_t4

0xcd82,	// (0x0005485e) area_vitu2_query_pane_t5_ParamLimits

0xcd82,	// (0x0005485e) area_vitu2_query_pane_t5

0xcdaa,	// (0x00054886) area_vitu2_query_pane_t6_ParamLimits

0xcdaa,	// (0x00054886) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x0005746e) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x0005746e) area_vitu2_query_pane_t

0x7ad6,	// (0x0004f5b2) bg_button_pane_cp018

0x7ae2,	// (0x0004f5be) bg_button_pane_cp021

0x0537,	// (0x00048013) bg_button_pane_cp022

0x055e,	// (0x0004803a) input_focus_pane_cp09

0x3855,	// (0x0004b331) aid_size_touch_mv_arrow_left

0x387e,	// (0x0004b35a) aid_size_touch_mv_arrow_right

0x741c,	// (0x0004eef8) main_cset_slider_pane_g16_ParamLimits

0x741c,	// (0x0004eef8) main_cset_slider_pane_g16

0x742a,	// (0x0004ef06) main_cset_slider_pane_g17_ParamLimits

0x742a,	// (0x0004ef06) main_cset_slider_pane_g17

0x7a53,	// (0x0004f52f) cell_cam4_burst_pane_g1_ParamLimits

0xdf1f,	// (0x000559fb) compa_mode_pane

0x761c,	// (0x0004f0f8) popup_vtel_slider_window_g3_ParamLimits

0x761c,	// (0x0004f0f8) popup_vtel_slider_window_g3

0x7633,	// (0x0004f10f) popup_vtel_slider_window_g4_ParamLimits

0x7633,	// (0x0004f10f) popup_vtel_slider_window_g4

0x764a,	// (0x0004f126) popup_vtel_slider_window_t1_ParamLimits

0x764a,	// (0x0004f126) popup_vtel_slider_window_t1

0xdf1f,	// (0x000559fb) main_cl_pane

0xb769,	// (0x00053245) popup_imed_adjust2_window_ParamLimits

0x3b39,	// (0x0004b615) bg_tb_trans_pane_cp05_ParamLimits

0xc0ec,	// (0x00053bc8) popup_imed_adjust2_window_g1_ParamLimits

0xc0fb,	// (0x00053bd7) popup_imed_adjust2_window_g2_ParamLimits

0xc0fb,	// (0x00053bd7) popup_imed_adjust2_window_g2

0xc107,	// (0x00053be3) popup_imed_adjust2_window_g3_ParamLimits

0xc107,	// (0x00053be3) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x000571e9) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x000571e9) popup_imed_adjust2_window_g

0xc113,	// (0x00053bef) popup_imed_adjust2_window_t1_ParamLimits

0xc12b,	// (0x00053c07) slider_imed_adjust_pane_ParamLimits

0xc13f,	// (0x00053c1b) slider_imed_adjust_pane_g1_ParamLimits

0xc14f,	// (0x00053c2b) slider_imed_adjust_pane_g2_ParamLimits

0xc15f,	// (0x00053c3b) slider_imed_adjust_pane_g3_ParamLimits

0xc170,	// (0x00053c4c) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x000571f0) slider_imed_adjust_pane_g_ParamLimits

0x6b47,	// (0x0004e623) aid_touch_area_cam4_ParamLimits

0x6b47,	// (0x0004e623) aid_touch_area_cam4

0xc720,	// (0x000541fc) battery_pane_cp01

0x6c1a,	// (0x0004e6f6) main_camera4_pane_g6_ParamLimits

0x6c1a,	// (0x0004e6f6) main_camera4_pane_g6

0x6c44,	// (0x0004e720) main_camera4_pane_t2_ParamLimits

0x6c44,	// (0x0004e720) main_camera4_pane_t2

0x0001,

0xf811,	// (0x000572ed) main_camera4_pane_t_ParamLimits

0xf811,	// (0x000572ed) main_camera4_pane_t

0x6c79,	// (0x0004e755) aid_touch_area_vid4_ParamLimits

0x6c79,	// (0x0004e755) aid_touch_area_vid4

0x6cd0,	// (0x0004e7ac) main_video4_pane_g5_ParamLimits

0x6cd0,	// (0x0004e7ac) main_video4_pane_g5

0x6cf6,	// (0x0004e7d2) vid4_progress_pane_ParamLimits

0x6cf6,	// (0x0004e7d2) vid4_progress_pane

0xc9de,	// (0x000544ba) main_cset_slider_pane_g18_ParamLimits

0xc9de,	// (0x000544ba) main_cset_slider_pane_g18

0xcc0c,	// (0x000546e8) cell_cam4_burst_pane_g2_ParamLimits

0xcc0c,	// (0x000546e8) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x00057442) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x00057442) cell_cam4_burst_pane_g

0x102d,	// (0x00048b09) bg_cl_pane_ParamLimits

0x102d,	// (0x00048b09) bg_cl_pane

0x7aee,	// (0x0004f5ca) cl_header_pane_ParamLimits

0x7aee,	// (0x0004f5ca) cl_header_pane

0x7b02,	// (0x0004f5de) cl_listscroll_pane_ParamLimits

0x7b02,	// (0x0004f5de) cl_listscroll_pane

0xcdf6,	// (0x000548d2) bg_cl_pane_g1

0xcdfe,	// (0x000548da) bg_cl_pane_g2

0xce06,	// (0x000548e2) bg_cl_pane_g3

0xce0e,	// (0x000548ea) bg_cl_pane_g4

0xce16,	// (0x000548f2) bg_cl_pane_g5

0xce1e,	// (0x000548fa) bg_cl_pane_g6

0xce26,	// (0x00054902) bg_cl_pane_g7

0xce2e,	// (0x0005490a) bg_cl_pane_g8

0xce36,	// (0x00054912) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x0005747d) bg_cl_pane_g

0x7b12,	// (0x0004f5ee) aid_height_cl_leading_ParamLimits

0x7b12,	// (0x0004f5ee) aid_height_cl_leading

0x7b1e,	// (0x0004f5fa) aid_height_cl_text_ParamLimits

0x7b1e,	// (0x0004f5fa) aid_height_cl_text

0x0cd1,	// (0x000487ad) bg_cl_header_pane_ParamLimits

0x0cd1,	// (0x000487ad) bg_cl_header_pane

0x7b3d,	// (0x0004f619) cl_header_pane_g1_ParamLimits

0x7b3d,	// (0x0004f619) cl_header_pane_g1

0x7b53,	// (0x0004f62f) cl_header_pane_t1_ParamLimits

0x7b53,	// (0x0004f62f) cl_header_pane_t1

0xce3e,	// (0x0005491a) cl_list_pane

0xc9b1,	// (0x0005448d) hc_scroll_pane_cp01

0x21bf,	// (0x00049c9b) bg_cl_header_pane_g1

0xc86d,	// (0x00054349) bg_cl_header_pane_g2

0x21df,	// (0x00049cbb) bg_cl_header_pane_g3

0xc87d,	// (0x00054359) bg_cl_header_pane_g4

0xc875,	// (0x00054351) bg_cl_header_pane_g5

0xcb07,	// (0x000545e3) bg_cl_header_pane_g6

0xc895,	// (0x00054371) bg_cl_header_pane_g7

0xc89d,	// (0x00054379) bg_cl_header_pane_g8

0xc88d,	// (0x00054369) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x00057490) bg_cl_header_pane_g

0x7b6c,	// (0x0004f648) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b6c,	// (0x0004f648) hc_cl_list_double_graphic_heading_pane

0x7b7f,	// (0x0004f65b) hc_cl_list_single_graphic_pane_ParamLimits

0x7b7f,	// (0x0004f65b) hc_cl_list_single_graphic_pane

0x7b97,	// (0x0004f673) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b97,	// (0x0004f673) hc_cl_list_single_graphic_pane_g1

0x7ba3,	// (0x0004f67f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7ba3,	// (0x0004f67f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x000574a3) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x000574a3) hc_cl_list_single_graphic_pane_g

0x7bb7,	// (0x0004f693) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7bb7,	// (0x0004f693) hc_cl_list_single_graphic_pane_t1

0x7b97,	// (0x0004f673) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b97,	// (0x0004f673) hc_cl_list_double_graphic_heading_pane_g1

0x7bcc,	// (0x0004f6a8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7bcc,	// (0x0004f6a8) hc_cl_list_double_graphic_heading_pane_g2

0x7be0,	// (0x0004f6bc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7be0,	// (0x0004f6bc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x000574a8) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x000574a8) hc_cl_list_double_graphic_heading_pane_g

0x7bf4,	// (0x0004f6d0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7bf4,	// (0x0004f6d0) hc_cl_list_double_graphic_heading_pane_t1

0x7c09,	// (0x0004f6e5) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7c09,	// (0x0004f6e5) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x000574af) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x000574af) hc_cl_list_double_graphic_heading_pane_t

0xce4f,	// (0x0005492b) vid4_progress_pane_g1

0xce5f,	// (0x0005493b) vid4_progress_pane_g2

0x7c1e,	// (0x0004f6fa) vid4_progress_pane_g3

0xce6f,	// (0x0005494b) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x000574b4) vid4_progress_pane_g

0x7c30,	// (0x0004f70c) vid4_progress_pane_t1

0xce8d,	// (0x00054969) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x000574bf) vid4_progress_pane_t

0x7c4a,	// (0x0004f726) wait_bar_pane_cp07

0xba35,	// (0x00053511) blid_firmament_pane_ParamLimits

0xba78,	// (0x00053554) popup_blid_sat_info2_window_g1

0xba9c,	// (0x00053578) popup_blid_sat_info2_window_t3

0xbaaa,	// (0x00053586) popup_blid_sat_info2_window_t4

0xbab8,	// (0x00053594) popup_blid_sat_info2_window_t5

0xbac6,	// (0x000535a2) popup_blid_sat_info2_window_t6

0xbad6,	// (0x000535b2) popup_blid_sat_info2_window_t7

0xbae4,	// (0x000535c0) popup_blid_sat_info2_window_t8

0xbaf2,	// (0x000535ce) popup_blid_sat_info2_window_t9

0xbb00,	// (0x000535dc) popup_blid_sat_info2_window_t10

0xbbc7,	// (0x000536a3) aid_firma_cardinal_ParamLimits

0xbbdb,	// (0x000536b7) blid_firmament_pane_t1_ParamLimits

0xbbf2,	// (0x000536ce) blid_firmament_pane_t2_ParamLimits

0xbc09,	// (0x000536e5) blid_firmament_pane_t3_ParamLimits

0xbc20,	// (0x000536fc) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x000570e2) blid_firmament_pane_t_ParamLimits

0xbc37,	// (0x00053713) blid_sat_info_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_cam_set_pane_ParamLimits

0x637a,	// (0x0004de56) aid_size_cell_colour_35_ParamLimits

0x639a,	// (0x0004de76) aid_size_cell_colour_112_ParamLimits

0x63ba,	// (0x0004de96) aid_size_cell_effect_ParamLimits

0x3b39,	// (0x0004b615) bg_tb_trans_pane_cp02_ParamLimits

0x3143,	// (0x0004ac1f) heading_imed_pane_ParamLimits

0x63da,	// (0x0004deb6) listscroll_imed_pane_ParamLimits

0x4ce9,	// (0x0004c7c5) popup_call2_audio_first_window_g5_ParamLimits

0x4ce9,	// (0x0004c7c5) popup_call2_audio_first_window_g5

0x674a,	// (0x0004e226) aid_size_touch_image3_arrow_left_ParamLimits

0x674a,	// (0x0004e226) aid_size_touch_image3_arrow_left

0x6776,	// (0x0004e252) aid_size_touch_image3_arrow_right_ParamLimits

0x6776,	// (0x0004e252) aid_size_touch_image3_arrow_right

0xcea6,	// (0x00054982) vid4_progress_pane_t3

0x657f,	// (0x0004e05b) main_hwr_training_symbol_option_pane_ParamLimits

0x657f,	// (0x0004e05b) main_hwr_training_symbol_option_pane

0xc284,	// (0x00053d60) popup_hwr_training_preview_window_ParamLimits

0xc284,	// (0x00053d60) popup_hwr_training_preview_window

0x659f,	// (0x0004e07b) hwr_training_navi_pane_g5_ParamLimits

0x659f,	// (0x0004e07b) hwr_training_navi_pane_g5

0xc85b,	// (0x00054337) popup_char_count_window

0x0cd1,	// (0x000487ad) bg_popup_sub_pane_cp20_ParamLimits

0x775c,	// (0x0004f238) list_vitu2_match_list_pane_ParamLimits

0x7768,	// (0x0004f244) vitu2_page_scroll_pane_ParamLimits

0x7768,	// (0x0004f244) vitu2_page_scroll_pane

0xd22a,	// (0x00054d06) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd22a,	// (0x00054d06) list_single_hwr_training_symbol_option_pane

0xd23d,	// (0x00054d19) list_single_hwr_training_symbol_option_pane_g1

0xd245,	// (0x00054d21) list_single_hwr_training_symbol_option_pane_t1

0xd253,	// (0x00054d2f) bg_button_pane_cp023

0xd25c,	// (0x00054d38) bg_button_pane_cp024

0xd28f,	// (0x00054d6b) vitu2_page_scroll_pane_g1

0xd297,	// (0x00054d73) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x000574c6) vitu2_page_scroll_pane_g

0xd29f,	// (0x00054d7b) vitu2_page_scroll_pane_t1

0xd2ae,	// (0x00054d8a) popup_char_count_window_g1

0xd2b7,	// (0x00054d93) popup_char_count_window_g2

0xd2c0,	// (0x00054d9c) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x000574cb) popup_char_count_window_g

0xd2c9,	// (0x00054da5) popup_char_count_window_t1

0xdf1f,	// (0x000559fb) main_vded2_pane

0xc0d8,	// (0x00053bb4) aid_size_cell_imed_line

0xc0e2,	// (0x00053bbe) grid_imed_line_width_pane

0xc7da,	// (0x000542b6) vid4_indicators_pane_g4

0xd2d7,	// (0x00054db3) cell_imed_line_width_pane_ParamLimits

0xd2d7,	// (0x00054db3) cell_imed_line_width_pane

0xd2ed,	// (0x00054dc9) cell_imed_line_width_pane_g1

0xd2f6,	// (0x00054dd2) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x000574d2) cell_imed_line_width_pane_g

0x7c5d,	// (0x0004f739) main_vded2_pane_g1_ParamLimits

0x7c5d,	// (0x0004f739) main_vded2_pane_g1

0x7c78,	// (0x0004f754) main_vded2_pane_g2_ParamLimits

0x7c78,	// (0x0004f754) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x000574d7) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x000574d7) main_vded2_pane_g

0x7c8a,	// (0x0004f766) vded2_slider_pane_ParamLimits

0x7c8a,	// (0x0004f766) vded2_slider_pane

0x7c9a,	// (0x0004f776) aid_size_touch_vded2_end

0x7ca4,	// (0x0004f780) aid_size_touch_vded2_playhead

0xd2fe,	// (0x00054dda) aid_size_touch_vded2_start

0xd306,	// (0x00054de2) vded2_slider_bg_pane

0xd30f,	// (0x00054deb) vded2_slider_pane_g1

0xd318,	// (0x00054df4) vded2_slider_pane_g2

0x7cae,	// (0x0004f78a) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x000574dc) vded2_slider_pane_g

0xd320,	// (0x00054dfc) vded2_slider_bg_pane_g1

0xd329,	// (0x00054e05) vded2_slider_bg_pane_g2

0xd332,	// (0x00054e0e) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x000574e3) vded2_slider_bg_pane_g

0x3ef1,	// (0x0004b9cd) aid_postcard_touch_down_pane_ParamLimits

0x3ef1,	// (0x0004b9cd) aid_postcard_touch_down_pane

0x3f09,	// (0x0004b9e5) aid_postcard_touch_up_pane_ParamLimits

0x3f09,	// (0x0004b9e5) aid_postcard_touch_up_pane

0xdf1f,	// (0x000559fb) main_blid2_pane

0xb74b,	// (0x00053227) popup_blid2_search_window

0xdf1f,	// (0x000559fb) blid2_gps_pane

0xdf1f,	// (0x000559fb) blid2_navig_pane

0xdf1f,	// (0x000559fb) blid2_search_pane

0xdf1f,	// (0x000559fb) blid2_tripm_pane

0x7cb9,	// (0x0004f795) blid2_search_pane_g1_ParamLimits

0x7cb9,	// (0x0004f795) blid2_search_pane_g1

0x7ccc,	// (0x0004f7a8) blid2_search_pane_t1_ParamLimits

0x7ccc,	// (0x0004f7a8) blid2_search_pane_t1

0x7cde,	// (0x0004f7ba) aid_size_cell_blid2_gps_ParamLimits

0x7cde,	// (0x0004f7ba) aid_size_cell_blid2_gps

0x7cf6,	// (0x0004f7d2) blid2_gps_pane_g1_ParamLimits

0x7cf6,	// (0x0004f7d2) blid2_gps_pane_g1

0x7d0a,	// (0x0004f7e6) grid_blid2_satellite_pane_ParamLimits

0x7d0a,	// (0x0004f7e6) grid_blid2_satellite_pane

0x7d22,	// (0x0004f7fe) blid2_navig_pane_g1_ParamLimits

0x7d22,	// (0x0004f7fe) blid2_navig_pane_g1

0x7d2e,	// (0x0004f80a) blid2_navig_pane_t1_ParamLimits

0x7d2e,	// (0x0004f80a) blid2_navig_pane_t1

0x7d49,	// (0x0004f825) blid2_navig_pane_t2_ParamLimits

0x7d49,	// (0x0004f825) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x000574ea) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x000574ea) blid2_navig_pane_t

0x7d64,	// (0x0004f840) blid2_navig_ring_pane_ParamLimits

0x7d64,	// (0x0004f840) blid2_navig_ring_pane

0x7d7f,	// (0x0004f85b) blid2_speed_pane_ParamLimits

0x7d7f,	// (0x0004f85b) blid2_speed_pane

0x7d8b,	// (0x0004f867) blid2_tripm_pane_g1_ParamLimits

0x7d8b,	// (0x0004f867) blid2_tripm_pane_g1

0x7da6,	// (0x0004f882) blid2_tripm_pane_g2_ParamLimits

0x7da6,	// (0x0004f882) blid2_tripm_pane_g2

0x7db9,	// (0x0004f895) blid2_tripm_pane_g3_ParamLimits

0x7db9,	// (0x0004f895) blid2_tripm_pane_g3

0x7dca,	// (0x0004f8a6) blid2_tripm_pane_g4_ParamLimits

0x7dca,	// (0x0004f8a6) blid2_tripm_pane_g4

0x7ddb,	// (0x0004f8b7) blid2_tripm_pane_g5_ParamLimits

0x7ddb,	// (0x0004f8b7) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x000574ef) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x000574ef) blid2_tripm_pane_g

0x7e01,	// (0x0004f8dd) blid2_tripm_pane_t1_ParamLimits

0x7e01,	// (0x0004f8dd) blid2_tripm_pane_t1

0x7e1a,	// (0x0004f8f6) blid2_tripm_pane_t2_ParamLimits

0x7e1a,	// (0x0004f8f6) blid2_tripm_pane_t2

0x7e33,	// (0x0004f90f) blid2_tripm_pane_t3_ParamLimits

0x7e33,	// (0x0004f90f) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x000574fc) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x000574fc) blid2_tripm_pane_t

0x7e7a,	// (0x0004f956) cell_blid2_satellite_pane_ParamLimits

0x7e7a,	// (0x0004f956) cell_blid2_satellite_pane

0x7e96,	// (0x0004f972) cell_blid2_satellite_pane_g1

0xd33b,	// (0x00054e17) cell_blid2_satellite_pane_t1

0x0fbb,	// (0x00048a97) blid2_speed_pane_g1

0xd349,	// (0x00054e25) blid2_speed_pane_t1

0xd357,	// (0x00054e33) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x00057505) blid2_speed_pane_t

0x0fbb,	// (0x00048a97) blid2_navig_ring_pane_g1

0x7e9f,	// (0x0004f97b) blid2_navig_ring_pane_g2

0x7ea7,	// (0x0004f983) blid2_navig_ring_pane_g3

0x7eaf,	// (0x0004f98b) blid2_navig_ring_pane_g4

0x7eb7,	// (0x0004f993) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x0005750a) blid2_navig_ring_pane_g

0xdf1f,	// (0x000559fb) bg_popup_window_pane_cp011

0xd365,	// (0x00054e41) popup_blid2_search_window_g1

0xd36d,	// (0x00054e49) popup_blid2_search_window_t1

0xd37b,	// (0x00054e57) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x00057515) popup_blid2_search_window_t

0x207f,	// (0x00049b5b) main_browser_pane_g1

0x102d,	// (0x00048b09) main_browser_pane_ParamLimits

0x0cd1,	// (0x000487ad) bg_button_pane_cp011_ParamLimits

0x6fec,	// (0x0004eac8) cell_vitu2_function_pane_g1_ParamLimits

0x3b39,	// (0x0004b615) bg_popup_sub_pane_cp22_ParamLimits

0x03f1,	// (0x00047ecd) input_focus_pane_cp08_ParamLimits

0x78e8,	// (0x0004f3c4) popup_vitu2_query_button_pane_ParamLimits

0x78e8,	// (0x0004f3c4) popup_vitu2_query_button_pane

0x040d,	// (0x00047ee9) popup_vitu2_query_input_button_pane

0xcb62,	// (0x0005463e) popup_vitu2_query_window_g1_ParamLimits

0x0417,	// (0x00047ef3) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x00057416) popup_vitu2_query_window_g_ParamLimits

0xdf1f,	// (0x000559fb) bg_button_pane_cp026

0x7ebf,	// (0x0004f99b) popup_vitu2_query_input_button_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp025

0xd389,	// (0x00054e65) popup_vitu2_query_button_pane_t1

0x57d0,	// (0x0004d2ac) main_mp3_pane_t6

0x57de,	// (0x0004d2ba) popup_slider_window_cp01

0xc73e,	// (0x0005421a) cam4_battery_pane

0xc793,	// (0x0005426f) cam4_battery_pane_cp02

0xce47,	// (0x00054923) cam4_battery_pane_cp01

0xce47,	// (0x00054923) cam4_battery_pane_cp03

0x0fbb,	// (0x00048a97) cam4_battery_pane_g1

0xd397,	// (0x00054e73) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x0005751a) cam4_battery_pane_g

0xbb0e,	// (0x000535ea) popup_blid_sat_info2_window_t11

0x3855,	// (0x0004b331) aid_size_touch_mv_arrow_left_ParamLimits

0x387e,	// (0x0004b35a) aid_size_touch_mv_arrow_right_ParamLimits

0x38dc,	// (0x0004b3b8) navi_pane_g1_ParamLimits

0x38e8,	// (0x0004b3c4) navi_pane_g2_ParamLimits

0x3916,	// (0x0004b3f2) navi_pane_g3_ParamLimits

0xf32f,	// (0x00056e0b) navi_pane_g_ParamLimits

0x39d4,	// (0x0004b4b0) navi_pane_mv_t1_ParamLimits

0x63e6,	// (0x0004dec2) grid_imed_effect_pane_ParamLimits

0x1c2d,	// (0x00049709) aid_placing_vt_slider_lsc

0x1c3d,	// (0x00049719) aid_placing_vt_slider_prt

0x0cd1,	// (0x000487ad) bg_tb_trans_pane_cp01_ParamLimits

0xbd76,	// (0x00053852) popup_image_details_window_g1_ParamLimits

0xbd89,	// (0x00053865) popup_image_details_window_g2_ParamLimits

0xbd9e,	// (0x0005387a) popup_image_details_window_g3_ParamLimits

0xbd9e,	// (0x0005387a) popup_image_details_window_g3

0xf646,	// (0x00057122) popup_image_details_window_g_ParamLimits

0xbdb2,	// (0x0005388e) popup_image_details_window_t1_ParamLimits

0xbdc4,	// (0x000538a0) popup_image_details_window_t2_ParamLimits

0xbddd,	// (0x000538b9) popup_image_details_window_t3_ParamLimits

0xbdf1,	// (0x000538cd) popup_image_details_window_t4_ParamLimits

0xbe0c,	// (0x000538e8) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x00057129) popup_image_details_window_t_ParamLimits

0x7b2a,	// (0x0004f606) cl_header_name_pane_ParamLimits

0x7b2a,	// (0x0004f606) cl_header_name_pane

0x7ec7,	// (0x0004f9a3) cl_header_name_pane_t1_ParamLimits

0x7ec7,	// (0x0004f9a3) cl_header_name_pane_t1

0x7ee8,	// (0x0004f9c4) cl_header_name_pane_t2_ParamLimits

0x7ee8,	// (0x0004f9c4) cl_header_name_pane_t2

0x7f2a,	// (0x0004fa06) cl_header_name_pane_t3_ParamLimits

0x7f2a,	// (0x0004fa06) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x0005751f) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x0005751f) cl_header_name_pane_t

0x39a5,	// (0x0004b481) navi_pane_mv_g2_ParamLimits

0xc826,	// (0x00054302) field_vitu2_entry_pane_g1_ParamLimits

0xc832,	// (0x0005430e) field_vitu2_entry_pane_g2_ParamLimits

0x3b17,	// (0x0004b5f3) field_vitu2_entry_pane_g3_ParamLimits

0x3b17,	// (0x0004b5f3) field_vitu2_entry_pane_g3

0xf843,	// (0x0005731f) field_vitu2_entry_pane_g_ParamLimits

0x6f68,	// (0x0004ea44) cell_vitu2_itu_pane_g1_ParamLimits

0x6f80,	// (0x0004ea5c) cell_vitu2_itu_pane_g2_ParamLimits

0x6f80,	// (0x0004ea5c) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x0005732b) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x0005732b) cell_vitu2_itu_pane_g

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp05_ParamLimits

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp05

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp03

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp04

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp10_ParamLimits

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp10

0x054a,	// (0x00048026) bg_vkb2_func_pane_cp08

0x7ad6,	// (0x0004f5b2) bg_vkb2_func_pane_cp06

0x7ae2,	// (0x0004f5be) bg_vkb2_func_pane_cp07

0xd265,	// (0x00054d41) bg_vkb2_func_pane_cp11_ParamLimits

0xd265,	// (0x00054d41) bg_vkb2_func_pane_cp11

0xd27a,	// (0x00054d56) bg_vkb2_func_pane_cp12_ParamLimits

0xd27a,	// (0x00054d56) bg_vkb2_func_pane_cp12

0xdf1f,	// (0x000559fb) bg_vkb2_func_pane_cp09

0xc86d,	// (0x00054349) bg_vkb2_func_pane_g1

0x21df,	// (0x00049cbb) bg_vkb2_func_pane_g2

0xc875,	// (0x00054351) bg_vkb2_func_pane_g3

0xc87d,	// (0x00054359) bg_vkb2_func_pane_g4

0xcb07,	// (0x000545e3) bg_vkb2_func_pane_g5

0xc895,	// (0x00054371) bg_vkb2_func_pane_g6

0xc89d,	// (0x00054379) bg_vkb2_func_pane_g7

0xc88d,	// (0x00054369) bg_vkb2_func_pane_g8

0x21bf,	// (0x00049c9b) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x00057526) bg_vkb2_func_pane_g

0x7def,	// (0x0004f8cb) blid2_tripm_pane_g6_ParamLimits

0x7def,	// (0x0004f8cb) blid2_tripm_pane_g6

0xc603,	// (0x000540df) mp4_progress_pane_g1

0x7e66,	// (0x0004f942) blid2_tripm_values_pane_ParamLimits

0x7e66,	// (0x0004f942) blid2_tripm_values_pane

0x7f5b,	// (0x0004fa37) blid2_tripm_values_pane_t1

0x7f69,	// (0x0004fa45) blid2_tripm_values_pane_t2

0xd3a1,	// (0x00054e7d) blid2_tripm_values_pane_t3

0x7f77,	// (0x0004fa53) blid2_tripm_values_pane_t4

0x7f85,	// (0x0004fa61) blid2_tripm_values_pane_t5

0x7f93,	// (0x0004fa6f) blid2_tripm_values_pane_t6

0xd3af,	// (0x00054e8b) blid2_tripm_values_pane_t7

0x7fa1,	// (0x0004fa7d) blid2_tripm_values_pane_t8

0x7faf,	// (0x0004fa8b) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x00057539) blid2_tripm_values_pane_t

0x1c74,	// (0x00049750) call_video_pane_t1_ParamLimits

0x1c8e,	// (0x0004976a) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x00056cb9) call_video_pane_t_ParamLimits

0x0218,	// (0x00047cf4) msg_header_pane_g1_ParamLimits

0x3e5b,	// (0x0004b937) msg_header_pane_g2_ParamLimits

0x3e5b,	// (0x0004b937) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x00056ea9) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x00056ea9) msg_header_pane_g

0x102d,	// (0x00048b09) main_clock2_pane_ParamLimits

0x60e3,	// (0x0004dbbf) grid_clock2_toolbar_pane_ParamLimits

0x60e3,	// (0x0004dbbf) grid_clock2_toolbar_pane

0x60e3,	// (0x0004dbbf) listscroll_clock2_pane_ParamLimits

0x60e3,	// (0x0004dbbf) listscroll_clock2_pane

0x61c2,	// (0x0004dc9e) main_clock2_pane_t3_ParamLimits

0x61c2,	// (0x0004dc9e) main_clock2_pane_t3

0x61e5,	// (0x0004dcc1) main_clock2_pane_t4_ParamLimits

0x61e5,	// (0x0004dcc1) main_clock2_pane_t4

0xd3bd,	// (0x00054e99) cell_clock2_toolbar_pane

0xd3c5,	// (0x00054ea1) cell_clock2_toolbar_pane_cp01

0xd3c5,	// (0x00054ea1) cell_clock2_toolbar_pane_cp02

0xd3cd,	// (0x00054ea9) cell_clock2_toolbar_pane_cp03

0xd3d5,	// (0x00054eb1) list_clock2_pane

0x35db,	// (0x0004b0b7) scroll_pane_cp10

0xd3dd,	// (0x00054eb9) list_single_clock2_pane_ParamLimits

0xd3dd,	// (0x00054eb9) list_single_clock2_pane

0x199b,	// (0x00049477) list_highlight_pane_cp08

0xd3ea,	// (0x00054ec6) list_single_clock2_pane_t1

0xd3f8,	// (0x00054ed4) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x0005754c) list_single_clock2_pane_t

0xdf1f,	// (0x000559fb) bg_button_pane_cp10

0xd406,	// (0x00054ee2) cell_clock2_toolbar_pane_g1

0x3e6f,	// (0x0004b94b) aid_main_viewer_pane_g1_ParamLimits

0x3e6f,	// (0x0004b94b) aid_main_viewer_pane_g1

0x3e7d,	// (0x0004b959) aid_main_viewer_pane_g2_ParamLimits

0x3e7d,	// (0x0004b959) aid_main_viewer_pane_g2

0x3e8b,	// (0x0004b967) aid_main_viewer_pane_g3_ParamLimits

0x3e8b,	// (0x0004b967) aid_main_viewer_pane_g3

0x3e9a,	// (0x0004b976) aid_main_viewer_pane_g4_ParamLimits

0x3e9a,	// (0x0004b976) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x00056eba) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x00056eba) aid_main_viewer_pane_g

0x5111,	// (0x0004cbed) main_calc_pane_ParamLimits

0x5125,	// (0x0004cc01) main_dialer2_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_cam6_pane

0xdf1f,	// (0x000559fb) main_vid6_pane

0x60ef,	// (0x0004dbcb) listscroll_gen_pane_cp06_ParamLimits

0x60ef,	// (0x0004dbcb) listscroll_gen_pane_cp06

0x6208,	// (0x0004dce4) main_clock2_pane_t5_ParamLimits

0x6208,	// (0x0004dce4) main_clock2_pane_t5

0x6266,	// (0x0004dd42) aid_call2_pane_cp10_ParamLimits

0x6278,	// (0x0004dd54) aid_call_pane_cp10_ParamLimits

0x37e0,	// (0x0004b2bc) popup_clock_analogue_window_cp10_g1_ParamLimits

0x37e0,	// (0x0004b2bc) popup_clock_analogue_window_cp10_g2_ParamLimits

0x628a,	// (0x0004dd66) popup_clock_analogue_window_cp10_g3_ParamLimits

0x628a,	// (0x0004dd66) popup_clock_analogue_window_cp10_g4_ParamLimits

0x37e0,	// (0x0004b2bc) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x000571de) popup_clock_analogue_window_cp10_g_ParamLimits

0x62a0,	// (0x0004dd7c) popup_clock_analogue_window_cp10_t1_ParamLimits

0xc674,	// (0x00054150) cell_dialer2_keypad_pane_g2_ParamLimits

0xc674,	// (0x00054150) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x000572be) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x000572be) cell_dialer2_keypad_pane_g

0x0fc5,	// (0x00048aa1) cell_dialer2_keypad_pane_t1

0x7314,	// (0x0004edf0) main_cset_text2_pane_ParamLimits

0x7314,	// (0x0004edf0) main_cset_text2_pane

0xcd4e,	// (0x0005482a) area_vitu2_query_pane_g1_ParamLimits

0x04f6,	// (0x00047fd2) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x00057469) area_vitu2_query_pane_g_ParamLimits

0xcdd2,	// (0x000548ae) area_vitu2_query_pane_t7_ParamLimits

0xcdd2,	// (0x000548ae) area_vitu2_query_pane_t7

0x7ad6,	// (0x0004f5b2) bg_button_pane_cp018_ParamLimits

0x7ae2,	// (0x0004f5be) bg_button_pane_cp021_ParamLimits

0x0537,	// (0x00048013) bg_button_pane_cp022_ParamLimits

0x054a,	// (0x00048026) bg_vkb2_func_pane_cp08_ParamLimits

0x7ad6,	// (0x0004f5b2) bg_vkb2_func_pane_cp06_ParamLimits

0x7ae2,	// (0x0004f5be) bg_vkb2_func_pane_cp07_ParamLimits

0x055e,	// (0x0004803a) input_focus_pane_cp09_ParamLimits

0xced4,	// (0x000549b0) cam6_autofocus_pane_ParamLimits

0xced4,	// (0x000549b0) cam6_autofocus_pane

0x7fbd,	// (0x0004fa99) cam6_image_uncrop_pane_ParamLimits

0x7fbd,	// (0x0004fa99) cam6_image_uncrop_pane

0x7fcd,	// (0x0004faa9) cam6_indi_pane_ParamLimits

0x7fcd,	// (0x0004faa9) cam6_indi_pane

0x7fe3,	// (0x0004fabf) cam6_mode_pane_ParamLimits

0x7fe3,	// (0x0004fabf) cam6_mode_pane

0x7ff5,	// (0x0004fad1) cam6_timer_pane_ParamLimits

0x7ff5,	// (0x0004fad1) cam6_timer_pane

0x8001,	// (0x0004fadd) cam6_zoom_pane_ParamLimits

0x8001,	// (0x0004fadd) cam6_zoom_pane

0x800f,	// (0x0004faeb) cam6_mode_pane_g1_ParamLimits

0x800f,	// (0x0004faeb) cam6_mode_pane_g1

0x801f,	// (0x0004fafb) cam6_mode_pane_g2_ParamLimits

0x801f,	// (0x0004fafb) cam6_mode_pane_g2

0x802f,	// (0x0004fb0b) cam6_mode_pane_g3_ParamLimits

0x802f,	// (0x0004fb0b) cam6_mode_pane_g3

0x803f,	// (0x0004fb1b) cam6_mode_pane_g4_ParamLimits

0x803f,	// (0x0004fb1b) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x00057551) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x00057551) cam6_mode_pane_g

0xb8c4,	// (0x000533a0) bg_tb_trans_pane_cp08_ParamLimits

0xb8c4,	// (0x000533a0) bg_tb_trans_pane_cp08

0xd40e,	// (0x00054eea) cam6_battery_pane_ParamLimits

0xd40e,	// (0x00054eea) cam6_battery_pane

0xd424,	// (0x00054f00) cam6_indi_pane_g1_ParamLimits

0xd424,	// (0x00054f00) cam6_indi_pane_g1

0xd436,	// (0x00054f12) cam6_indi_pane_g2_ParamLimits

0xd436,	// (0x00054f12) cam6_indi_pane_g2

0xd448,	// (0x00054f24) cam6_indi_pane_g3_ParamLimits

0xd448,	// (0x00054f24) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x0005755a) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x0005755a) cam6_indi_pane_g

0xd45a,	// (0x00054f36) cam6_indi_pane_t1_ParamLimits

0xd45a,	// (0x00054f36) cam6_indi_pane_t1

0x6d3b,	// (0x0004e817) cam6_autofocus_pane_g1

0x6d43,	// (0x0004e81f) cam6_autofocus_pane_g2

0x6d4b,	// (0x0004e827) cam6_autofocus_pane_g3

0x6d53,	// (0x0004e82f) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x00057561) cam6_autofocus_pane_g

0xd480,	// (0x00054f5c) cam6_timer_pane_g1

0xd488,	// (0x00054f64) cam6_timer_pane_t1

0xd496,	// (0x00054f72) cam6_zoom_cont_pane

0xd49e,	// (0x00054f7a) cam6_zoom_pane_g1

0xd4a7,	// (0x00054f83) cam6_zoom_pane_g2

0x804f,	// (0x0004fb2b) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x0005756a) cam6_zoom_pane_g

0x0fbb,	// (0x00048a97) cam6_battery_pane_g1

0x0fbb,	// (0x00048a97) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) cam6_battery_pane_g

0xd49e,	// (0x00054f7a) cam6_zoom_cont_pane_g1

0xd4a7,	// (0x00054f83) cam6_zoom_cont_pane_g2

0xd4b0,	// (0x00054f8c) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x00057571) cam6_zoom_cont_pane_g

0x806d,	// (0x0004fb49) cam6_mode_pane_cp_ParamLimits

0x806d,	// (0x0004fb49) cam6_mode_pane_cp

0x807f,	// (0x0004fb5b) cam6_zoom_pane_cp_ParamLimits

0x807f,	// (0x0004fb5b) cam6_zoom_pane_cp

0x808d,	// (0x0004fb69) vid6_image_uncrop_cif_pane_ParamLimits

0x808d,	// (0x0004fb69) vid6_image_uncrop_cif_pane

0x809d,	// (0x0004fb79) vid6_image_uncrop_nhd_pane_ParamLimits

0x809d,	// (0x0004fb79) vid6_image_uncrop_nhd_pane

0x80ac,	// (0x0004fb88) vid6_image_uncrop_vga_pane_ParamLimits

0x80ac,	// (0x0004fb88) vid6_image_uncrop_vga_pane

0x80bb,	// (0x0004fb97) vid6_image_uncrop_wvga_pane_ParamLimits

0x80bb,	// (0x0004fb97) vid6_image_uncrop_wvga_pane

0x80ca,	// (0x0004fba6) vid6_indi_pane_ParamLimits

0x80ca,	// (0x0004fba6) vid6_indi_pane

0xb8c4,	// (0x000533a0) bg_tb_trans_pane_cp09_ParamLimits

0xb8c4,	// (0x000533a0) bg_tb_trans_pane_cp09

0xd4c8,	// (0x00054fa4) cam6_battery_pane_cp_ParamLimits

0xd4c8,	// (0x00054fa4) cam6_battery_pane_cp

0xd4d4,	// (0x00054fb0) vid6_indi_pane_g1_ParamLimits

0xd4d4,	// (0x00054fb0) vid6_indi_pane_g1

0xd4e6,	// (0x00054fc2) vid6_indi_pane_g2_ParamLimits

0xd4e6,	// (0x00054fc2) vid6_indi_pane_g2

0xd4f8,	// (0x00054fd4) vid6_indi_pane_g3_ParamLimits

0xd4f8,	// (0x00054fd4) vid6_indi_pane_g3

0xd50f,	// (0x00054feb) vid6_indi_pane_g4_ParamLimits

0xd50f,	// (0x00054feb) vid6_indi_pane_g4

0xd526,	// (0x00055002) vid6_indi_pane_g5_ParamLimits

0xd526,	// (0x00055002) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x00057578) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x00057578) vid6_indi_pane_g

0xd540,	// (0x0005501c) vid6_indi_pane_t1_ParamLimits

0xd540,	// (0x0005501c) vid6_indi_pane_t1

0xd556,	// (0x00055032) vid6_indi_pane_t2_ParamLimits

0xd556,	// (0x00055032) vid6_indi_pane_t2

0xd57e,	// (0x0005505a) vid6_indi_pane_t3_ParamLimits

0xd57e,	// (0x0005505a) vid6_indi_pane_t3

0xd5a6,	// (0x00055082) vid6_indi_pane_t4_ParamLimits

0xd5a6,	// (0x00055082) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x00057583) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x00057583) vid6_indi_pane_t

0xd5ca,	// (0x000550a6) wait_bar_pane_cp08

0x80e2,	// (0x0004fbbe) main_cset_text2_pane_t1_ParamLimits

0x80e2,	// (0x0004fbbe) main_cset_text2_pane_t1

0x8058,	// (0x0004fb34) listscroll_gen_pane_cp06_t1_ParamLimits

0x8058,	// (0x0004fb34) listscroll_gen_pane_cp06_t1

0xdf1f,	// (0x000559fb) main_cam6_set_pane

0x0ee7,	// (0x000489c3) bg_tb_trans_pane_cp06_ParamLimits

0xc746,	// (0x00054222) cam4_indicators_pane_g1_ParamLimits

0xc757,	// (0x00054233) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x000572fb) cam4_indicators_pane_g_ParamLimits

0xc76f,	// (0x0005424b) cam4_indicators_pane_t1_ParamLimits

0x0cd1,	// (0x000487ad) bg_tb_trans_pane_cp07_ParamLimits

0xc79d,	// (0x00054279) vid4_indicators_pane_g1_ParamLimits

0xc7b3,	// (0x0005428f) vid4_indicators_pane_g2_ParamLimits

0xc7c7,	// (0x000542a3) vid4_indicators_pane_g3_ParamLimits

0xc7da,	// (0x000542b6) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x0005730d) vid4_indicators_pane_g_ParamLimits

0xc7f8,	// (0x000542d4) vid4_indicators_pane_t1_ParamLimits

0xce4f,	// (0x0005492b) vid4_progress_pane_g1_ParamLimits

0xce5f,	// (0x0005493b) vid4_progress_pane_g2_ParamLimits

0x7c1e,	// (0x0004f6fa) vid4_progress_pane_g3_ParamLimits

0xce6f,	// (0x0005494b) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x000574b4) vid4_progress_pane_g_ParamLimits

0x7c30,	// (0x0004f70c) vid4_progress_pane_t1_ParamLimits

0xce8d,	// (0x00054969) vid4_progress_pane_t2_ParamLimits

0xcea6,	// (0x00054982) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x000574bf) vid4_progress_pane_t_ParamLimits

0x7c4a,	// (0x0004f726) wait_bar_pane_cp07_ParamLimits

0x8103,	// (0x0004fbdf) main_cam6_set_pane_g2_ParamLimits

0x8103,	// (0x0004fbdf) main_cam6_set_pane_g2

0x8129,	// (0x0004fc05) main_cset6_listscroll_pane_ParamLimits

0x8129,	// (0x0004fc05) main_cset6_listscroll_pane

0x8147,	// (0x0004fc23) main_cset6_slider_pane_ParamLimits

0x8147,	// (0x0004fc23) main_cset6_slider_pane

0x815d,	// (0x0004fc39) main_cset6_text2_pane_ParamLimits

0x815d,	// (0x0004fc39) main_cset6_text2_pane

0xd5d9,	// (0x000550b5) main_cset6_text_pane

0xd5e1,	// (0x000550bd) main_cset_list_pane_copy1_ParamLimits

0xd5e1,	// (0x000550bd) main_cset_list_pane_copy1

0xd5f1,	// (0x000550cd) scroll_pane_cp028_copy1

0x816b,	// (0x0004fc47) cset_list_set_pane_copy1

0x817f,	// (0x0004fc5b) aid_position_infowindow_above_copy1

0x8187,	// (0x0004fc63) aid_position_infowindow_below_copy1

0x0583,	// (0x0004805f) cset_list_set_pane_g1_copy1

0x058b,	// (0x00048067) cset_list_set_pane_g3_copy1_ParamLimits

0x058b,	// (0x00048067) cset_list_set_pane_g3_copy1

0x059a,	// (0x00048076) cset_list_set_pane_t1_copy1_ParamLimits

0x059a,	// (0x00048076) cset_list_set_pane_t1_copy1

0x0cd1,	// (0x000487ad) list_highlight_pane_cp021_copy1_ParamLimits

0x0cd1,	// (0x000487ad) list_highlight_pane_cp021_copy1

0xd5fa,	// (0x000550d6) cset6_slider_pane_ParamLimits

0xd5fa,	// (0x000550d6) cset6_slider_pane

0xd626,	// (0x00055102) main_cset6_slider_pane_g1_ParamLimits

0xd626,	// (0x00055102) main_cset6_slider_pane_g1

0x818f,	// (0x0004fc6b) main_cset6_slider_pane_g2_ParamLimits

0x818f,	// (0x0004fc6b) main_cset6_slider_pane_g2

0xd64e,	// (0x0005512a) main_cset6_slider_pane_g3_ParamLimits

0xd64e,	// (0x0005512a) main_cset6_slider_pane_g3

0x81b7,	// (0x0004fc93) main_cset6_slider_pane_g4_ParamLimits

0x81b7,	// (0x0004fc93) main_cset6_slider_pane_g4

0x81c3,	// (0x0004fc9f) main_cset6_slider_pane_g5_ParamLimits

0x81c3,	// (0x0004fc9f) main_cset6_slider_pane_g5

0xc9c6,	// (0x000544a2) main_cset6_slider_pane_g7_ParamLimits

0xc9c6,	// (0x000544a2) main_cset6_slider_pane_g7

0xc9d2,	// (0x000544ae) main_cset6_slider_pane_g8_ParamLimits

0xc9d2,	// (0x000544ae) main_cset6_slider_pane_g8

0x73bc,	// (0x0004ee98) main_cset6_slider_pane_g9_ParamLimits

0x73bc,	// (0x0004ee98) main_cset6_slider_pane_g9

0x73c8,	// (0x0004eea4) main_cset6_slider_pane_g10_ParamLimits

0x73c8,	// (0x0004eea4) main_cset6_slider_pane_g10

0x73d4,	// (0x0004eeb0) main_cset6_slider_pane_g11_ParamLimits

0x73d4,	// (0x0004eeb0) main_cset6_slider_pane_g11

0x73e0,	// (0x0004eebc) main_cset6_slider_pane_g12_ParamLimits

0x73e0,	// (0x0004eebc) main_cset6_slider_pane_g12

0x73ec,	// (0x0004eec8) main_cset6_slider_pane_g13_ParamLimits

0x73ec,	// (0x0004eec8) main_cset6_slider_pane_g13

0x73f8,	// (0x0004eed4) main_cset6_slider_pane_g14_ParamLimits

0x73f8,	// (0x0004eed4) main_cset6_slider_pane_g14

0x81d1,	// (0x0004fcad) main_cset6_slider_pane_g15_ParamLimits

0x81d1,	// (0x0004fcad) main_cset6_slider_pane_g15

0x741c,	// (0x0004eef8) main_cset6_slider_pane_g16_ParamLimits

0x741c,	// (0x0004eef8) main_cset6_slider_pane_g16

0x742a,	// (0x0004ef06) main_cset6_slider_pane_g17_ParamLimits

0x742a,	// (0x0004ef06) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x0005758c) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x0005758c) main_cset6_slider_pane_g

0xd65a,	// (0x00055136) main_cset6_slider_pane_t1_ParamLimits

0xd65a,	// (0x00055136) main_cset6_slider_pane_t1

0x8201,	// (0x0004fcdd) main_cset6_slider_pane_t2_ParamLimits

0x8201,	// (0x0004fcdd) main_cset6_slider_pane_t2

0x822c,	// (0x0004fd08) main_cset6_slider_pane_t3_ParamLimits

0x822c,	// (0x0004fd08) main_cset6_slider_pane_t3

0x8257,	// (0x0004fd33) main_cset6_slider_pane_t4_ParamLimits

0x8257,	// (0x0004fd33) main_cset6_slider_pane_t4

0x8282,	// (0x0004fd5e) main_cset6_slider_pane_t5_ParamLimits

0x8282,	// (0x0004fd5e) main_cset6_slider_pane_t5

0xd69b,	// (0x00055177) main_cset6_slider_pane_t7_ParamLimits

0xd69b,	// (0x00055177) main_cset6_slider_pane_t7

0x82af,	// (0x0004fd8b) main_cset6_slider_pane_t8_ParamLimits

0x82af,	// (0x0004fd8b) main_cset6_slider_pane_t8

0x82d3,	// (0x0004fdaf) main_cset6_slider_pane_t9_ParamLimits

0x82d3,	// (0x0004fdaf) main_cset6_slider_pane_t9

0x82f7,	// (0x0004fdd3) main_cset6_slider_pane_t10_ParamLimits

0x82f7,	// (0x0004fdd3) main_cset6_slider_pane_t10

0x831b,	// (0x0004fdf7) main_cset6_slider_pane_t11_ParamLimits

0x831b,	// (0x0004fdf7) main_cset6_slider_pane_t11

0xd6d1,	// (0x000551ad) main_cset6_slider_pane_t14_ParamLimits

0xd6d1,	// (0x000551ad) main_cset6_slider_pane_t14

0xd70a,	// (0x000551e6) main_cset6_slider_pane_t15_ParamLimits

0xd70a,	// (0x000551e6) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x000575b1) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x000575b1) main_cset6_slider_pane_t

0xd743,	// (0x0005521f) cset_slider_pane_g1_copy1

0xd74c,	// (0x00055228) cset_slider_pane_g2_copy1

0xd755,	// (0x00055231) cset_slider_pane_g3_copy1

0xdf1f,	// (0x000559fb) bg_popup_sub_pane_cp011_copy1

0xd767,	// (0x00055243) main_cset_text_pane_g1_copy1

0xcb76,	// (0x00054652) main_cset_text_pane_t1_copy1

0xcb84,	// (0x00054660) main_cset_text_pane_t2_copy1

0xcb92,	// (0x0005466e) main_cset_text_pane_t3_copy1

0xcba0,	// (0x0005467c) main_cset_text_pane_t4_copy1

0xcbae,	// (0x0005468a) main_cset_text_pane_t5_copy1

0xd76f,	// (0x0005524b) main_cset_text_pane_t6_copy1

0xd77d,	// (0x00055259) main_cset_text_pane_t7_copy1

0x80e2,	// (0x0004fbbe) main_cset_text2_pane_t1_copy1

0x0cd1,	// (0x000487ad) main_ncimui_pane

0x53b3,	// (0x0004ce8f) popup_query_ncimui_window_ParamLimits

0x53b3,	// (0x0004ce8f) popup_query_ncimui_window

0xbead,	// (0x00053989) field_cale_ev2_pane_g4_ParamLimits

0xbead,	// (0x00053989) field_cale_ev2_pane_g4

0x669b,	// (0x0004e177) cell_video_dialer_keypad_pane_g2_ParamLimits

0x669b,	// (0x0004e177) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x00057295) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x00057295) cell_video_dialer_keypad_pane_g

0x66b3,	// (0x0004e18f) cell_video_dialer_keypad_pane_t1

0xdf1f,	// (0x000559fb) bg_popup_window_pane_cp012

0xb6a5,	// (0x00053181) heading_pane_cp06

0xd7a9,	// (0x00055285) ncim_query_content_pane

0xdf1f,	// (0x000559fb) bg_popup_heading_pane_cp01

0xd7b1,	// (0x0005528d) ncim_heading_pane_t1

0xd7bf,	// (0x0005529b) ncim_indicator_popup_pane

0xd7d1,	// (0x000552ad) ncim_query_button_pane

0xd7e7,	// (0x000552c3) ncim_query_content_pane_t1

0xd7f9,	// (0x000552d5) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x000575f5) ncim_query_content_pane_t

0xd833,	// (0x0005530f) ncim_query_list_pane

0xd845,	// (0x00055321) ncim_query_popup_pane

0xd7bf,	// (0x0005529b) ncim_indicator_popup_pane_ParamLimits

0x846a,	// (0x0004ff46) ncim_query_content_pane_g1_ParamLimits

0x846a,	// (0x0004ff46) ncim_query_content_pane_g1

0xd7e7,	// (0x000552c3) ncim_query_content_pane_t1_ParamLimits

0xd7f9,	// (0x000552d5) ncim_query_content_pane_t2_ParamLimits

0x8476,	// (0x0004ff52) ncim_query_content_pane_t3_ParamLimits

0x8476,	// (0x0004ff52) ncim_query_content_pane_t3

0x849e,	// (0x0004ff7a) ncim_query_content_pane_t4_ParamLimits

0x849e,	// (0x0004ff7a) ncim_query_content_pane_t4

0x84c6,	// (0x0004ffa2) ncim_query_content_pane_t5_ParamLimits

0x84c6,	// (0x0004ffa2) ncim_query_content_pane_t5

0xd80b,	// (0x000552e7) ncim_query_content_pane_t6_ParamLimits

0xd80b,	// (0x000552e7) ncim_query_content_pane_t6

0xfb19,	// (0x000575f5) ncim_query_content_pane_t_ParamLimits

0xd833,	// (0x0005530f) ncim_query_list_pane_ParamLimits

0xd845,	// (0x00055321) ncim_query_popup_pane_ParamLimits

0xd859,	// (0x00055335) wait_bar_pane_cp04

0xdf1f,	// (0x000559fb) input_focus_pane_cp011

0xd861,	// (0x0005533d) ncim_query_popup_pane_t1

0xd86f,	// (0x0005534b) ncim_list_query_list_pane_ParamLimits

0xd86f,	// (0x0005534b) ncim_list_query_list_pane

0xdf1f,	// (0x000559fb) bg_button_pane_cp027

0xd882,	// (0x0005535e) ncim_query_button_pane_g1

0xdf1f,	// (0x000559fb) list_highlight_pane_cp012

0xd88c,	// (0x00055368) ncim_list_query_list_pane_g1

0xd894,	// (0x00055370) ncim_list_query_list_pane_t1

0xc763,	// (0x0005423f) cam4_indicators_pane_g3_ParamLimits

0xc763,	// (0x0005423f) cam4_indicators_pane_g3

0xc7e6,	// (0x000542c2) vid4_indicators_pane_g5_ParamLimits

0xc7e6,	// (0x000542c2) vid4_indicators_pane_g5

0xce7e,	// (0x0005495a) vid4_progress_pane_g5_ParamLimits

0xce7e,	// (0x0005495a) vid4_progress_pane_g5

0x8355,	// (0x0004fe31) main_ncimui_pane_g1

0x83be,	// (0x0004fe9a) ncimui_group_query_pane_ParamLimits

0x83be,	// (0x0004fe9a) ncimui_group_query_pane

0x8406,	// (0x0004fee2) ncimui_list_pane_ParamLimits

0x8406,	// (0x0004fee2) ncimui_list_pane

0x842d,	// (0x0004ff09) ncimui_text_pane_ParamLimits

0x842d,	// (0x0004ff09) ncimui_text_pane

0x84ee,	// (0x0004ffca) ncimui_text_pane_t1_ParamLimits

0x84ee,	// (0x0004ffca) ncimui_text_pane_t1

0xd8a2,	// (0x0005537e) ncimui_list_single_graphic_pane_ParamLimits

0xd8a2,	// (0x0005537e) ncimui_list_single_graphic_pane

0x850c,	// (0x0004ffe8) ncimui_query_pane_ParamLimits

0x850c,	// (0x0004ffe8) ncimui_query_pane

0xdf1f,	// (0x000559fb) list_highlight_pane_cp013

0xd8b2,	// (0x0005538e) ncim_list_query_list_pane_t1_copy1

0xd88c,	// (0x00055368) ncim_list_single_graphic_pane_g1

0x851f,	// (0x0004fffb) ncim_query_button_pane_cp01

0x852b,	// (0x00050007) ncim_query_entry_pane_ParamLimits

0x852b,	// (0x00050007) ncim_query_entry_pane

0x853e,	// (0x0005001a) ncimui_query_pane_g1

0x854a,	// (0x00050026) ncimui_query_pane_t1_ParamLimits

0x854a,	// (0x00050026) ncimui_query_pane_t1

0x0cd1,	// (0x000487ad) input_focus_pane_cp012

0xd8c0,	// (0x0005539c) ncim_query_entry_pane_t1

0x102d,	// (0x00048b09) main_im_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_mobtv_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_mobtv_pane

0x81e9,	// (0x0004fcc5) main_cset6_slider_pane_g18_ParamLimits

0x81e9,	// (0x0004fcc5) main_cset6_slider_pane_g18

0x81f5,	// (0x0004fcd1) main_cset6_slider_pane_g19_ParamLimits

0x81f5,	// (0x0004fcd1) main_cset6_slider_pane_g19

0x0f03,	// (0x000489df) bg_main_mobtv_pane_ParamLimits

0x0f03,	// (0x000489df) bg_main_mobtv_pane

0x8563,	// (0x0005003f) main_mobtv_info_pane

0x856e,	// (0x0005004a) main_mobtv_loading_pane_ParamLimits

0x856e,	// (0x0005004a) main_mobtv_loading_pane

0xd8d2,	// (0x000553ae) main_mobtv_pg_channel_list_pane

0xd8dc,	// (0x000553b8) main_mobtv_pg_hdr_pane

0x857b,	// (0x00050057) main_mobtv_programe_curr_pane_ParamLimits

0x857b,	// (0x00050057) main_mobtv_programe_curr_pane

0x8588,	// (0x00050064) main_mobtv_programe_next_pane_ParamLimits

0x8588,	// (0x00050064) main_mobtv_programe_next_pane

0xd8e5,	// (0x000553c1) popup_mobtv_noti_window

0x0fbb,	// (0x00048a97) main_tv_pg_hdr_pane_g1

0xd8ef,	// (0x000553cb) main_tv_pg_hdr_pane_g2

0xd8f7,	// (0x000553d3) main_tv_pg_hdr_pane_g3

0xd8ff,	// (0x000553db) main_tv_pg_hdr_pane_g4

0xd907,	// (0x000553e3) main_tv_pg_hdr_pane_g5

0xd911,	// (0x000553ed) main_tv_pg_hdr_pane_g6

0xd91b,	// (0x000553f7) main_tv_pg_hdr_pane_g7

0xd925,	// (0x00055401) main_tv_pg_hdr_pane_g8

0xd92f,	// (0x0005540b) main_tv_pg_hdr_pane_g9

0xd939,	// (0x00055415) main_tv_pg_hdr_pane_g10

0xd943,	// (0x0005541f) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x00057602) main_tv_pg_hdr_pane_g

0xd94d,	// (0x00055429) main_tv_pg_hdr_pane_t1

0xd95b,	// (0x00055437) main_tv_pg_hdr_pane_t2

0xd969,	// (0x00055445) main_tv_pg_hdr_pane_t3

0xd979,	// (0x00055455) main_tv_pg_hdr_pane_t4

0xd989,	// (0x00055465) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x00057619) main_tv_pg_hdr_pane_t

0xd999,	// (0x00055475) single_mobtv_pg_channel_pane_ParamLimits

0xd999,	// (0x00055475) single_mobtv_pg_channel_pane

0xd9ab,	// (0x00055487) single_mobtv_pg_channel_table_pane

0xd9b4,	// (0x00055490) single_mobtv_pg_channel_thumb_pane

0xd9bd,	// (0x00055499) single_tv_pg_channel_pane_g1

0xd9c6,	// (0x000554a2) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x00057624) single_tv_pg_channel_pane_g

0x0ee7,	// (0x000489c3) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x0ee7,	// (0x000489c3) bg_single_mobtv_pg_channel_thumb_pane

0xd9cf,	// (0x000554ab) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd9cf,	// (0x000554ab) single_mobtv_pg_channel_thumb_pane_g1

0xd9dd,	// (0x000554b9) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd9dd,	// (0x000554b9) single_mobtv_pg_channel_thumb_pane_g2

0xd9e9,	// (0x000554c5) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd9e9,	// (0x000554c5) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x00057629) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x00057629) single_mobtv_pg_channel_thumb_pane_g

0xd9f5,	// (0x000554d1) single_mobtv_pg_channel_thumb_pane_t1

0xda03,	// (0x000554df) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x00057630) single_mobtv_pg_channel_thumb_pane_t

0x0fbb,	// (0x00048a97) bg_single_mobtv_pg_channel_table_pane_g1

0x0fbb,	// (0x00048a97) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x00056b8b) bg_single_mobtv_pg_channel_table_pane_g

0xda11,	// (0x000554ed) single_mobtv_pg_channel_table_pane_t1

0xda1f,	// (0x000554fb) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x00057635) single_mobtv_pg_channel_table_pane_t

0x859d,	// (0x00050079) main_mobtv_info_pane_g1_ParamLimits

0x859d,	// (0x00050079) main_mobtv_info_pane_g1

0x85bb,	// (0x00050097) main_mobtv_info_pane_t1_ParamLimits

0x85bb,	// (0x00050097) main_mobtv_info_pane_t1

0x8633,	// (0x0005010f) main_mobtv_info_pane_t2_ParamLimits

0x8633,	// (0x0005010f) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x0005763f) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x0005763f) main_mobtv_info_pane_t

0x86c4,	// (0x000501a0) wait_bar_pane_cp05

0x86d6,	// (0x000501b2) main_mobtv_loading_pane_g1_ParamLimits

0x86d6,	// (0x000501b2) main_mobtv_loading_pane_g1

0x86e7,	// (0x000501c3) main_mobtv_loading_pane_g2_ParamLimits

0x86e7,	// (0x000501c3) main_mobtv_loading_pane_g2

0x86f3,	// (0x000501cf) main_mobtv_loading_pane_g3_ParamLimits

0x86f3,	// (0x000501cf) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x00057646) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x00057646) main_mobtv_loading_pane_g

0xda2d,	// (0x00055509) main_mobtv_loading_pane_t1_ParamLimits

0xda2d,	// (0x00055509) main_mobtv_loading_pane_t1

0xda45,	// (0x00055521) main_mobtv_loading_pane_t2_ParamLimits

0xda45,	// (0x00055521) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x0005764d) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x0005764d) main_mobtv_loading_pane_t

0x8706,	// (0x000501e2) wait_bar_pane_cp06_ParamLimits

0x8706,	// (0x000501e2) wait_bar_pane_cp06

0xda69,	// (0x00055545) main_mobtv_programe_curr_pane_t1

0xda77,	// (0x00055553) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x00057652) main_mobtv_programe_curr_pane_t

0xda85,	// (0x00055561) main_mobtv_programe_next_pane_t1

0xda93,	// (0x0005556f) main_mobtv_programe_next_pane_t2

0xdaa1,	// (0x0005557d) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x00057657) main_mobtv_programe_next_pane_t

0xdf1f,	// (0x000559fb) bg_popup_mobtv_noti_window_pane

0xdaaf,	// (0x0005558b) popup_mobtv_noti_window_g1

0xdab7,	// (0x00055593) popup_mobtv_noti_window_t1

0xdac5,	// (0x000555a1) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x0005765e) popup_mobtv_noti_window_t

0x0fbb,	// (0x00048a97) bg_popup_mobtv_noti_window_pane_g1

0xdf1f,	// (0x000559fb) sc_clock_pane

0xdf1f,	// (0x000559fb) main_fs_bigclock_pane

0x7e50,	// (0x0004f92c) blid2_tripm_pane_t4_ParamLimits

0x7e50,	// (0x0004f92c) blid2_tripm_pane_t4

0x0ee7,	// (0x000489c3) sc_clock_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) sc_clock_pane_g1

0x0fc5,	// (0x00048aa1) sc_clock_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) sc_clock_pane_t1

0x0fc5,	// (0x00048aa1) sc_clock_pane_t2_ParamLimits

0x0fc5,	// (0x00048aa1) sc_clock_pane_t2

0x0fc5,	// (0x00048aa1) sc_clock_pane_t3_ParamLimits

0x0fc5,	// (0x00048aa1) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x00057663) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x00057663) sc_clock_pane_t

0x913e,	// (0x00050c1a) main_fs_bigclock_indicator_pane_ParamLimits

0x913e,	// (0x00050c1a) main_fs_bigclock_indicator_pane

0x8786,	// (0x00050262) main_fs_bigclock_pane_g1_ParamLimits

0x8786,	// (0x00050262) main_fs_bigclock_pane_g1

0x914a,	// (0x00050c26) main_fs_bigclock_pane_t1_ParamLimits

0x914a,	// (0x00050c26) main_fs_bigclock_pane_t1

0x915c,	// (0x00050c38) main_fs_bigclock_pane_t2_ParamLimits

0x915c,	// (0x00050c38) main_fs_bigclock_pane_t2

0x9170,	// (0x00050c4c) main_fs_bigclock_pane_t3_ParamLimits

0x9170,	// (0x00050c4c) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x000577f4) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x000577f4) main_fs_bigclock_pane_t

0xe557,	// (0x00056033) main_fs_bigclock_indicator_pane_g1

0xd7d9,	// (0x000552b5) ncim_query_content_pane_g2_ParamLimits

0xd7d9,	// (0x000552b5) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x000575f0) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x000575f0) ncim_query_content_pane_g

0x0fc5,	// (0x00048aa1) sc_clock_pane_t4_ParamLimits

0x0fc5,	// (0x00048aa1) sc_clock_pane_t4

0x0cd1,	// (0x000487ad) main_radioblah_pane

0xc6c4,	// (0x000541a0) cell_call4_button_pane_t1_copy1_ParamLimits

0xc6c4,	// (0x000541a0) cell_call4_button_pane_t1_copy1

0x836d,	// (0x0004fe49) main_ncimui_pane_t1_ParamLimits

0x836d,	// (0x0004fe49) main_ncimui_pane_t1

0x8387,	// (0x0004fe63) main_ncimui_pane_t2_ParamLimits

0x8387,	// (0x0004fe63) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x000575e9) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x000575e9) main_ncimui_pane_t

0x3b39,	// (0x0004b615) main_radioblah_anim_pane_ParamLimits

0x3b39,	// (0x0004b615) main_radioblah_anim_pane

0x3b39,	// (0x0004b615) main_radioblah_info_pane_ParamLimits

0x3b39,	// (0x0004b615) main_radioblah_info_pane

0x3b25,	// (0x0004b601) main_radioblah_pane_t1_ParamLimits

0x3b25,	// (0x0004b601) main_radioblah_pane_t1

0x3b25,	// (0x0004b601) main_radioblah_pane_t2_ParamLimits

0x3b25,	// (0x0004b601) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x00057684) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x00057684) main_radioblah_pane_t

0x0cd1,	// (0x000487ad) main_radioblah_rocker_ctrl_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_radioblah_rocker_ctrl_pane

0xb8b0,	// (0x0005338c) main_radioblah_info_pane_t1_ParamLimits

0xb8b0,	// (0x0005338c) main_radioblah_info_pane_t1

0xdb03,	// (0x000555df) main_radioblah_info_pane_t2_ParamLimits

0xdb03,	// (0x000555df) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x0005768d) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x0005768d) main_radioblah_info_pane_t

0x0fbb,	// (0x00048a97) main_radioblah_rocker_ctrl_pane_g1

0x0fbb,	// (0x00048a97) main_radioblah_rocker_ctrl_pane_g2

0x0fbb,	// (0x00048a97) main_radioblah_rocker_ctrl_pane_g3

0x0fbb,	// (0x00048a97) main_radioblah_rocker_ctrl_pane_g4

0x0fbb,	// (0x00048a97) main_radioblah_rocker_ctrl_pane_g5

0x0fbb,	// (0x00048a97) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x00057696) main_radioblah_rocker_ctrl_pane_g

0x80e2,	// (0x0004fbbe) main_cset_text2_pane_t1_copy1_ParamLimits

0xc734,	// (0x00054210) cam4_image_uncrop_qvga_pane

0xc789,	// (0x00054265) vid4_image_uncrop_qcif_pane

0xced4,	// (0x000549b0) cam6_image_uncrop_qvga_pane_ParamLimits

0xced4,	// (0x000549b0) cam6_image_uncrop_qvga_pane

0xd4b8,	// (0x00054f94) vid6_image_uncrop_qcif_pane_ParamLimits

0xd4b8,	// (0x00054f94) vid6_image_uncrop_qcif_pane

0xdf1f,	// (0x000559fb) bg_popup_preview_window_pane_cp03

0xd78b,	// (0x00055267) list_cset_text2_pane

0xd793,	// (0x0005526f) main_cset6_text2_pane_g1

0xd79b,	// (0x00055277) main_cset6_text2_pane_t1

0xe2ca,	// (0x00055da6) list_cset_text2_pane_t1_ParamLimits

0xe2ca,	// (0x00055da6) list_cset_text2_pane_t1

0x0cd1,	// (0x000487ad) main_radioblah_pane_ParamLimits

0x86b0,	// (0x0005018c) main_mobtv_info_pane_t3_ParamLimits

0x86b0,	// (0x0005018c) main_mobtv_info_pane_t3

0x3b17,	// (0x0004b5f3) main_radioblah_pane_g1

0xdad3,	// (0x000555af) main_radioblah_info_pane_g1

0x0fd9,	// (0x00048ab5) main_radioblah_info_pane_t3_ParamLimits

0x0fd9,	// (0x00048ab5) main_radioblah_info_pane_t3

0x2edf,	// (0x0004a9bb) highlight_cell_cale_month_pane_ParamLimits

0x2edf,	// (0x0004a9bb) highlight_cell_cale_month_pane

0xdf1f,	// (0x000559fb) main_phob_fisheye_pane

0xbf22,	// (0x000539fe) scroll_pane_cp0031_ParamLimits

0xbf22,	// (0x000539fe) scroll_pane_cp0031

0xd5ca,	// (0x000550a6) wait_bar_pane_cp08_ParamLimits

0x816b,	// (0x0004fc47) cset_list_set_pane_copy1_ParamLimits

0xdb52,	// (0x0005562e) highlight_cell_cale_month_pane_g1

0x891d,	// (0x000503f9) highlight_cell_cale_month_pane_t1

0xce3e,	// (0x0005491a) list_gen_pane_cp01

0xc9b1,	// (0x0005448d) scroll_pane_01

0x892b,	// (0x00050407) list_single_double_fisheye_pane

0x05cc,	// (0x000480a8) list_double_fisheye_pane_g1_ParamLimits

0x05cc,	// (0x000480a8) list_double_fisheye_pane_g1

0x05d8,	// (0x000480b4) list_double_fisheye_pane_g2_ParamLimits

0x05d8,	// (0x000480b4) list_double_fisheye_pane_g2

0x8934,	// (0x00050410) list_double_fisheye_pane_g3_ParamLimits

0x8934,	// (0x00050410) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x000576a3) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x000576a3) list_double_fisheye_pane_g

0x0609,	// (0x000480e5) list_double_fisheye_pane_t1_ParamLimits

0x0609,	// (0x000480e5) list_double_fisheye_pane_t1

0x0624,	// (0x00048100) list_double_fisheye_pane_t2_ParamLimits

0x0624,	// (0x00048100) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x000576ae) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x000576ae) list_double_fisheye_pane_t

0xdf1f,	// (0x000559fb) main_call5_pane

0x0cd1,	// (0x000487ad) sc_swipe_pane_ParamLimits

0x0cd1,	// (0x000487ad) sc_swipe_pane

0x8953,	// (0x0005042f) call5_image_pane_ParamLimits

0x8953,	// (0x0005042f) call5_image_pane

0x8970,	// (0x0005044c) call5_swipe_1_pane_ParamLimits

0x8970,	// (0x0005044c) call5_swipe_1_pane

0x8983,	// (0x0005045f) call5_swipe_2_pane_ParamLimits

0x8983,	// (0x0005045f) call5_swipe_2_pane

0x89ae,	// (0x0005048a) popup_call5_audio_first_window_ParamLimits

0x89ae,	// (0x0005048a) popup_call5_audio_first_window

0x0ee7,	// (0x000489c3) call5_swipe_1_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) call5_swipe_1_pane_g1

0xdb5a,	// (0x00055636) call5_swipe_1_pane_g2_ParamLimits

0xdb5a,	// (0x00055636) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x000576b3) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x000576b3) call5_swipe_1_pane_g

0xdb66,	// (0x00055642) call5_swipe_1_pane_t1_ParamLimits

0xdb66,	// (0x00055642) call5_swipe_1_pane_t1

0x0ee7,	// (0x000489c3) call5_swipe_2_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) call5_swipe_2_pane_g1

0xdb7b,	// (0x00055657) call5_swipe_2_pane_g2_ParamLimits

0xdb7b,	// (0x00055657) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x000576b8) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x000576b8) call5_swipe_2_pane_g

0xdb87,	// (0x00055663) call5_swipe_2_pane_t1_ParamLimits

0xdb87,	// (0x00055663) call5_swipe_2_pane_t1

0x0ee7,	// (0x000489c3) sc_swipe_pane_g1_ParamLimits

0x0ee7,	// (0x000489c3) sc_swipe_pane_g1

0x0ef5,	// (0x000489d1) sc_swipe_pane_g2_ParamLimits

0x0ef5,	// (0x000489d1) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x00057231) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x00057231) sc_swipe_pane_g

0x0fc5,	// (0x00048aa1) sc_swipe_pane_t1_ParamLimits

0x0fc5,	// (0x00048aa1) sc_swipe_pane_t1

0xdf1f,	// (0x000559fb) main_cmail_launcher_pane

0x89c3,	// (0x0005049f) aid_size_cell_cmail_l_ParamLimits

0x89c3,	// (0x0005049f) aid_size_cell_cmail_l

0x89d8,	// (0x000504b4) grid_cmail_l_pane_ParamLimits

0x89d8,	// (0x000504b4) grid_cmail_l_pane

0x89f2,	// (0x000504ce) cell_cmail_l_pane_ParamLimits

0x89f2,	// (0x000504ce) cell_cmail_l_pane

0x8a13,	// (0x000504ef) cell_cmail_l_pane_g1_ParamLimits

0x8a13,	// (0x000504ef) cell_cmail_l_pane_g1

0x8a1f,	// (0x000504fb) cell_cmail_l_pane_t1_ParamLimits

0x8a1f,	// (0x000504fb) cell_cmail_l_pane_t1

0x8a35,	// (0x00050511) cell_cmail_l_pane_t2_ParamLimits

0x8a35,	// (0x00050511) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x000576bd) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x000576bd) cell_cmail_l_pane_t

0x0cd1,	// (0x000487ad) grid_highlight_pane_cp018_ParamLimits

0x0cd1,	// (0x000487ad) grid_highlight_pane_cp018

0x0bdf,	// (0x000486bb) main2_pane_ParamLimits

0x0bdf,	// (0x000486bb) main2_pane

0x1262,	// (0x00048d3e) popup_sp_fs_action_menu_bg_pane_g1

0x126a,	// (0x00048d46) popup_sp_fs_action_menu_bg_pane_g2

0x1272,	// (0x00048d4e) popup_sp_fs_action_menu_bg_pane_g3

0x127a,	// (0x00048d56) popup_sp_fs_action_menu_bg_pane_g4

0x1282,	// (0x00048d5e) popup_sp_fs_action_menu_bg_pane_g5

0x128a,	// (0x00048d66) popup_sp_fs_action_menu_bg_pane_g6

0x1292,	// (0x00048d6e) popup_sp_fs_action_menu_bg_pane_g7

0x129a,	// (0x00048d76) popup_sp_fs_action_menu_bg_pane_g8

0x12a2,	// (0x00048d7e) popup_sp_fs_action_menu_bg_pane_g9

0x12aa,	// (0x00048d86) popup_sp_fs_action_menu_bg_pane_g10

0x12aa,	// (0x00048d86) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x00056bdc) popup_sp_fs_action_menu_bg_pane_g

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g3_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g3_g2

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x00056c8a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x00056c8a) list_medium_line_x2_t3_g3_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g3_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g3_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x00056c91) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x00056c91) list_medium_line_x2_t3_g3_t

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g2_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_x2_t3_g2_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g2_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g2_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x00056c91) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x00056c91) list_medium_line_x2_t3_g2_t

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g2

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g3

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x00056c9d) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x00056c9d) list_medium_line_x2_t4_g4_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t3

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x00056ca6) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x00056ca6) list_medium_line_x2_t4_g4_t

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g2

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g3

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x00056c9d) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x00056c9d) list_medium_line_x2_t2_g4_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g4_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x00056c6d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x00056c6d) list_medium_line_x2_t2_g4_t

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g3_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g3_g2

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x00056c8a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x00056c8a) list_medium_line_x2_t2_g3_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g3_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x00056c6d) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x00056c6d) list_medium_line_x2_t2_g3_t

0x3285,	// (0x0004ad61) main_sp_fs_list_pane_ParamLimits

0x3285,	// (0x0004ad61) main_sp_fs_list_pane

0xd209,	// (0x00054ce5) sp_fs_scroll_pane_ParamLimits

0xd209,	// (0x00054ce5) sp_fs_scroll_pane

0x3291,	// (0x0004ad6d) list_medium_line_x2_t3_t1

0x3291,	// (0x0004ad6d) list_medium_line_x2_t3_t2

0x3291,	// (0x0004ad6d) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x00056d53) list_medium_line_x2_t3_t

0x3291,	// (0x0004ad6d) list_medium_line_x3_t4_t1

0x3291,	// (0x0004ad6d) list_medium_line_x3_t4_t2

0x3291,	// (0x0004ad6d) list_medium_line_x3_t4_t3

0x3291,	// (0x0004ad6d) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x00056d5a) list_medium_line_x3_t4_t

0x3291,	// (0x0004ad6d) list_medium_line_x4_t5_t1

0x3291,	// (0x0004ad6d) list_medium_line_x4_t5_t2

0x3291,	// (0x0004ad6d) list_medium_line_x4_t5_t3

0x3291,	// (0x0004ad6d) list_medium_line_x4_t5_t4

0x3291,	// (0x0004ad6d) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x00056d63) list_medium_line_x4_t5_t

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g1

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g2

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g3

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g4_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x00056c9d) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x00056c9d) list_medium_line_t4_g4_g

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t2

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t3

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t4_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x00056ca6) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x00056ca6) list_medium_line_t4_g4_t

0x35a8,	// (0x0004b084) chi_dic_find_pane_g1

0x5139,	// (0x0004cc15) main_tport_pane

0x3291,	// (0x0004ad6d) list_medium_line_plain_t1

0x0ee7,	// (0x000489c3) list_medium_line_t2_g2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t2_g2_g1

0x0ee7,	// (0x000489c3) list_medium_line_t2_g2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_t2_g2_g

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g2_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g2_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x00056c6d) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x00056c6d) list_medium_line_t2_g2_t

0xcebb,	// (0x00054997) aid_sp_fs_list_icon_a_sm

0xcec3,	// (0x0005499f) aid_sp_fs_list_icon_d

0xcecb,	// (0x000549a7) aid_sp_fs_text_primary

0xd221,	// (0x00054cfd) aid_sp_fs_text_secondary

0xdf1f,	// (0x000559fb) list_medium_line

0xdf1f,	// (0x000559fb) list_medium_line_g2

0xdf1f,	// (0x000559fb) list_medium_line_g3

0xdf1f,	// (0x000559fb) list_medium_line_plain

0xdf1f,	// (0x000559fb) list_medium_line_plain_t2

0xdf1f,	// (0x000559fb) list_medium_line_plain_t3

0xdf1f,	// (0x000559fb) list_medium_line_right_icon

0xdf1f,	// (0x000559fb) list_medium_line_right_iconx2

0xdf1f,	// (0x000559fb) list_medium_line_t2

0xdf1f,	// (0x000559fb) list_medium_line_t2_g2

0xdf1f,	// (0x000559fb) list_medium_line_t2_g3

0xdf1f,	// (0x000559fb) list_medium_line_t2_right_icon

0xdf1f,	// (0x000559fb) list_medium_line_t2_right_iconx2

0xdf1f,	// (0x000559fb) list_medium_line_t3

0xdf1f,	// (0x000559fb) list_medium_line_t3_g2

0xdf1f,	// (0x000559fb) list_medium_line_t3_g3

0xdf1f,	// (0x000559fb) list_medium_line_t3_right_iconx2

0xdf1f,	// (0x000559fb) list_medium_line_t4_g4

0xdf1f,	// (0x000559fb) list_medium_line_x2

0xdf1f,	// (0x000559fb) list_medium_line_x2_t2_g2

0xdf1f,	// (0x000559fb) list_medium_line_x2_t2_g3

0xdf1f,	// (0x000559fb) list_medium_line_x2_t2_g4

0xdf1f,	// (0x000559fb) list_medium_line_x2_t3

0xdf1f,	// (0x000559fb) list_medium_line_x2_t3_g2

0xdf1f,	// (0x000559fb) list_medium_line_x2_t3_g3

0xdf1f,	// (0x000559fb) list_medium_line_x2_t3_g4

0xdf1f,	// (0x000559fb) list_medium_line_x2_t4_g2

0xdf1f,	// (0x000559fb) list_medium_line_x2_t4_g4

0xdf1f,	// (0x000559fb) list_medium_line_x3

0xdf1f,	// (0x000559fb) list_medium_line_x3_t4

0xdf1f,	// (0x000559fb) list_medium_line_x3_t4_g4

0xdf1f,	// (0x000559fb) list_medium_line_x4_t4

0xdf1f,	// (0x000559fb) list_medium_line_x4_t4_g7

0xdf1f,	// (0x000559fb) list_medium_line_x4_t5

0x056f,	// (0x0004804b) list_single_fs_dyc_pane_ParamLimits

0x056f,	// (0x0004804b) list_single_fs_dyc_pane

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g1

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g2

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g3

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g4_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g4

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g5

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x4_t4_g7_g6

0x0ef5,	// (0x000489d1) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0ef5,	// (0x000489d1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x000575ca) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x000575ca) list_medium_line_x4_t4_g7_g

0x0fc5,	// (0x00048aa1) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x4_t4_g7_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x4_t4_g7_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x4_t4_g7_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x4_t4_g7_t3

0x0fd9,	// (0x00048ab5) list_medium_line_x4_t4_g7_t4_ParamLimits

0x0fd9,	// (0x00048ab5) list_medium_line_x4_t4_g7_t4

0x0fd9,	// (0x00048ab5) list_medium_line_x4_t4_g7_t5_ParamLimits

0x0fd9,	// (0x00048ab5) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x000575d9) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x000575d9) list_medium_line_x4_t4_g7_t

0x05af,	// (0x0004808b) list_single_dyc_row_pane_ParamLimits

0x05af,	// (0x0004808b) list_single_dyc_row_pane

0x8940,	// (0x0005041c) call5_gesture_pane_ParamLimits

0x8940,	// (0x0005041c) call5_gesture_pane

0x8996,	// (0x00050472) call5_windows_pane_ParamLimits

0x8996,	// (0x00050472) call5_windows_pane

0x8a52,	// (0x0005052e) call5_swipe_1_pane_cp_ParamLimits

0x8a52,	// (0x0005052e) call5_swipe_1_pane_cp

0x8a5e,	// (0x0005053a) call5_swipe_2_pane_cp_ParamLimits

0x8a5e,	// (0x0005053a) call5_swipe_2_pane_cp

0x199b,	// (0x00049477) call5_image_pane_cp

0x8a6a,	// (0x00050546) popup_call5_audio_first_window_cp_ParamLimits

0x8a6a,	// (0x00050546) popup_call5_audio_first_window_cp

0xdb9c,	// (0x00055678) call5_swipe_1_pane_g1_cp_ParamLimits

0xdb9c,	// (0x00055678) call5_swipe_1_pane_g1_cp

0xdba9,	// (0x00055685) call5_swipe_1_pane_g2_cp

0xdbb1,	// (0x0005568d) call5_swipe_1_pane_t1_cp_ParamLimits

0xdbb1,	// (0x0005568d) call5_swipe_1_pane_t1_cp

0xdb9c,	// (0x00055678) call5_swipe_2_pane_g1_cp_ParamLimits

0xdb9c,	// (0x00055678) call5_swipe_2_pane_g1_cp

0xdbc6,	// (0x000556a2) call5_swipe_2_pane_g2_cp

0xdbce,	// (0x000556aa) call5_swipe_2_pane_t1_cp_ParamLimits

0xdbce,	// (0x000556aa) call5_swipe_2_pane_t1_cp

0x0cd1,	// (0x000487ad) main_sp_fs_email_pane

0xca94,	// (0x00054570) main_sp_fs_listscroll_pane_te

0x0646,	// (0x00048122) popup_sp_fs_action_menu_pane_ParamLimits

0x0646,	// (0x00048122) popup_sp_fs_action_menu_pane

0x0fbb,	// (0x00048a97) bg_sp_fs_ctrlbar_pane_g1

0xdbe3,	// (0x000556bf) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdbec,	// (0x000556c8) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdbf5,	// (0x000556d1) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x0fbb,	// (0x00048a97) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x000576c2) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb8d2,	// (0x000533ae) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb8d2,	// (0x000533ae) bg_sp_fs_ctrlbar_ddmenu_pane

0xdbfe,	// (0x000556da) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdbfe,	// (0x000556da) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdc0a,	// (0x000556e6) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdc0a,	// (0x000556e6) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x000576cb) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x000576cb) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdc16,	// (0x000556f2) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdc16,	// (0x000556f2) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x0fbb,	// (0x00048a97) list_medium_line_t2_right_icon_g1

0x3291,	// (0x0004ad6d) list_medium_line_t2_right_icon_t1

0x3291,	// (0x0004ad6d) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x000576d0) list_medium_line_t2_right_icon_t

0x3b39,	// (0x0004b615) bg_sp_fs_ctrlbar_pane_ParamLimits

0x3b39,	// (0x0004b615) bg_sp_fs_ctrlbar_pane

0x8ac5,	// (0x000505a1) main_sp_fs_ctrlbar_button_pane_cp01

0x8acf,	// (0x000505ab) main_sp_fs_ctrlbar_ddmenu_pane

0xdc6a,	// (0x00055746) main_sp_fs_ctrlbar_pane_g1

0xdc76,	// (0x00055752) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x000576d5) main_sp_fs_ctrlbar_pane_g

0x8b0d,	// (0x000505e9) main_sp_fs_ctrlbar_pane_t1

0x8b4c,	// (0x00050628) main_sp_fs_ctrlbar_pane

0x8b70,	// (0x0005064c) main_sp_fs_listscroll_pane_te_cp01

0x068c,	// (0x00048168) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x068c,	// (0x00048168) popup_sp_fs_action_menu_pane_cp01

0x0cd1,	// (0x000487ad) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0cd1,	// (0x000487ad) bg_sp_fs_highlight_list_pane_cp01

0xcee2,	// (0x000549be) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcee2,	// (0x000549be) sp_fs_action_menu_list_gene_pane_g1

0xdc9d,	// (0x00055779) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdc9d,	// (0x00055779) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x000576e3) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x000576e3) sp_fs_action_menu_list_gene_pane_g

0xcef1,	// (0x000549cd) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcef1,	// (0x000549cd) sp_fs_action_menu_list_gene_pane_t1

0xcf09,	// (0x000549e5) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcf09,	// (0x000549e5) sp_fs_action_menu_list_gene_pane

0xdcaa,	// (0x00055786) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdcaa,	// (0x00055786) popup_sp_fs_action_menu_bg_pane

0xcf2c,	// (0x00054a08) sp_fs_action_menu_list_pane_ParamLimits

0xcf2c,	// (0x00054a08) sp_fs_action_menu_list_pane

0xcf50,	// (0x00054a2c) sp_fs_scroll_pane_cp01_ParamLimits

0xcf50,	// (0x00054a2c) sp_fs_scroll_pane_cp01

0x3291,	// (0x0004ad6d) list_medium_line_plain_t2_t1

0x3291,	// (0x0004ad6d) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x000576d0) list_medium_line_plain_t2_t

0x3291,	// (0x0004ad6d) list_medium_line_plain_t3_t1

0x3291,	// (0x0004ad6d) list_medium_line_plain_t3_t2

0x3291,	// (0x0004ad6d) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x00056d53) list_medium_line_plain_t3_t

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g2_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_x2_t2_g2_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g2_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x00056c6d) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x00056c6d) list_medium_line_x2_t2_g2_t

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g2_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_x2_t4_g2_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t3

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x00056ca6) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x00056ca6) list_medium_line_x2_t4_g2_t

0x0fbb,	// (0x00048a97) list_medium_line_t3_right_iconx2_g1

0x0fbb,	// (0x00048a97) list_medium_line_t3_right_iconx2_g2

0x0fbb,	// (0x00048a97) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x00056e6f) list_medium_line_t3_right_iconx2_g

0x3291,	// (0x0004ad6d) list_medium_line_t3_right_iconx2_t1

0x3291,	// (0x0004ad6d) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x000576d0) list_medium_line_t3_right_iconx2_t

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g1

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g2

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g3

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x00056c9d) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x00056c9d) list_medium_line_x3_t4_g4_g

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t3

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x00056ca6) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x00056ca6) list_medium_line_x3_t4_g4_t

0x06b1,	// (0x0004818d) list_single_dyc_row_text_pane_t1_ParamLimits

0x06b1,	// (0x0004818d) list_single_dyc_row_text_pane_t1

0x06fa,	// (0x000481d6) list_single_dyc_row_text_pane_t2_ParamLimits

0x06fa,	// (0x000481d6) list_single_dyc_row_text_pane_t2

0xcf76,	// (0x00054a52) list_single_dyc_row_text_pane_t3_ParamLimits

0xcf76,	// (0x00054a52) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x000576e8) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x000576e8) list_single_dyc_row_text_pane_t

0xcf9a,	// (0x00054a76) list_single_dyc_row_pane_g1_ParamLimits

0xcf9a,	// (0x00054a76) list_single_dyc_row_pane_g1

0xcfa6,	// (0x00054a82) list_single_dyc_row_pane_g2_ParamLimits

0xcfa6,	// (0x00054a82) list_single_dyc_row_pane_g2

0xcfb2,	// (0x00054a8e) list_single_dyc_row_pane_g3_ParamLimits

0xcfb2,	// (0x00054a8e) list_single_dyc_row_pane_g3

0xcfbe,	// (0x00054a9a) list_single_dyc_row_pane_g4_ParamLimits

0xcfbe,	// (0x00054a9a) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x000576f5) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x000576f5) list_single_dyc_row_pane_g

0xcfca,	// (0x00054aa6) list_single_dyc_row_text_pane_ParamLimits

0xcfca,	// (0x00054aa6) list_single_dyc_row_text_pane

0xdf1f,	// (0x000559fb) bg_sp_fs_scroll_pane

0xdcb8,	// (0x00055794) thumb_sp_fs_scroll_pane

0x0ee7,	// (0x000489c3) list_medium_line_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_g1

0x0fc5,	// (0x00048aa1) list_medium_line_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t1

0x0ee7,	// (0x000489c3) list_medium_line_x2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_x2_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t1

0x0ee7,	// (0x000489c3) list_medium_line_x3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x3_g1

0xdcc1,	// (0x0005579d) list_medium_line_x3_g2_ParamLimits

0xdcc1,	// (0x0005579d) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x000576fe) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x000576fe) list_medium_line_x3_g

0xdccf,	// (0x000557ab) list_medium_line_x3_t1_ParamLimits

0xdccf,	// (0x000557ab) list_medium_line_x3_t1

0xdce3,	// (0x000557bf) thumb_sp_fs_scroll_pane_g1

0xdcec,	// (0x000557c8) thumb_sp_fs_scroll_pane_g2

0xdcf5,	// (0x000557d1) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x00057703) thumb_sp_fs_scroll_pane_g

0xdce3,	// (0x000557bf) bg_sp_fs_scroll_pane_g1

0xdcec,	// (0x000557c8) bg_sp_fs_scroll_pane_g2

0xdcf5,	// (0x000557d1) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x00057703) bg_sp_fs_scroll_pane_g

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g1

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g2

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g3

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x00056c9d) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x00056c9d) list_medium_line_x2_t3_g4_g

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g4_t1

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g4_t2

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x00056c91) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x00056c91) list_medium_line_x2_t3_g4_t

0x0ee7,	// (0x000489c3) list_medium_line_g2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_g2_g1

0x0ee7,	// (0x000489c3) list_medium_line_g2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_g2_g

0x0fc5,	// (0x00048aa1) list_medium_line_g2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_g2_t1

0x0ee7,	// (0x000489c3) list_medium_line_t3_g2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t3_g2_g1

0x0ee7,	// (0x000489c3) list_medium_line_t3_g2_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x00056c98) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x00056c98) list_medium_line_t3_g2_g

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g2_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g2_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g2_t2

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g2_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x00056c91) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x00056c91) list_medium_line_t3_g2_t

0x0fbb,	// (0x00048a97) list_medium_line_right_icon_g1

0x3291,	// (0x0004ad6d) list_medium_line_right_icon_t1

0x0ee7,	// (0x000489c3) list_medium_line_t2_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t2_g1

0x0fc5,	// (0x00048aa1) list_medium_line_t2_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t2_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t2_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x00056c6d) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x00056c6d) list_medium_line_t2_t

0x0ee7,	// (0x000489c3) list_medium_line_t3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t3_g1

0x0fc5,	// (0x00048aa1) list_medium_line_t3_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t3_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_t2

0x0fc5,	// (0x00048aa1) list_medium_line_t3_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x00056c91) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x00056c91) list_medium_line_t3_t

0x0ee7,	// (0x000489c3) list_medium_line_g3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_g3_g1

0x0ee7,	// (0x000489c3) list_medium_line_g3_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_g3_g2

0x0ee7,	// (0x000489c3) list_medium_line_g3_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x00056c8a) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x00056c8a) list_medium_line_g3_g

0x0fc5,	// (0x00048aa1) list_medium_line_g3_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_g3_t1

0x0ee7,	// (0x000489c3) list_medium_line_t2_g3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t2_g3_g1

0x0ee7,	// (0x000489c3) list_medium_line_t2_g3_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t2_g3_g2

0x0ee7,	// (0x000489c3) list_medium_line_t2_g3_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x00056c8a) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x00056c8a) list_medium_line_t2_g3_g

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g3_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g3_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g3_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x00056c6d) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x00056c6d) list_medium_line_t2_g3_t

0x0ee7,	// (0x000489c3) list_medium_line_t3_g3_g1_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t3_g3_g1

0x0ee7,	// (0x000489c3) list_medium_line_t3_g3_g2_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t3_g3_g2

0x0ee7,	// (0x000489c3) list_medium_line_t3_g3_g3_ParamLimits

0x0ee7,	// (0x000489c3) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x00056c8a) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x00056c8a) list_medium_line_t3_g3_g

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g3_t1_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g3_t1

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g3_t2_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g3_t2

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g3_t3_ParamLimits

0x0fc5,	// (0x00048aa1) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x00056c91) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x00056c91) list_medium_line_t3_g3_t

0x0fbb,	// (0x00048a97) list_medium_line_right_iconx2_g1

0x0fbb,	// (0x00048a97) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x00056b8b) list_medium_line_right_iconx2_g

0x3291,	// (0x0004ad6d) list_medium_line_right_iconx2_t1

0x0fbb,	// (0x00048a97) list_medium_line_t2_right_iconx2_g1

0x0fbb,	// (0x00048a97) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x00056b8b) list_medium_line_t2_right_iconx2_g

0x3291,	// (0x0004ad6d) list_medium_line_t2_right_iconx2_t1

0x3291,	// (0x0004ad6d) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x000576d0) list_medium_line_t2_right_iconx2_t

0x3291,	// (0x0004ad6d) list_medium_line_x4_t4_t1

0x3291,	// (0x0004ad6d) list_medium_line_x4_t4_t2

0x3291,	// (0x0004ad6d) list_medium_line_x4_t4_t3

0x3291,	// (0x0004ad6d) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x00056d5a) list_medium_line_x4_t4_t

0x8be0,	// (0x000506bc) tport_appsw_pane_ParamLimits

0x8be0,	// (0x000506bc) tport_appsw_pane

0x8bf8,	// (0x000506d4) tport_contact_pane_ParamLimits

0x8bf8,	// (0x000506d4) tport_contact_pane

0x8c13,	// (0x000506ef) tport_listscroll_pane_ParamLimits

0x8c13,	// (0x000506ef) tport_listscroll_pane

0x8c2b,	// (0x00050707) cell_tport_appsw_pane_ParamLimits

0x8c2b,	// (0x00050707) cell_tport_appsw_pane

0x3b17,	// (0x0004b5f3) tport_appsw_pane_g1_ParamLimits

0x3b17,	// (0x0004b5f3) tport_appsw_pane_g1

0x8c75,	// (0x00050751) tport_contact_pane_g1

0x8c7e,	// (0x0005075a) tport_contact_pane_t1

0x8c8c,	// (0x00050768) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x0005770a) tport_contact_pane_t

0xdcfe,	// (0x000557da) list_tport_pane

0xdd07,	// (0x000557e3) scroll_pane_cp_030

0x8ca2,	// (0x0005077e) cell_tport_appsw_pane_g1

0x8cb2,	// (0x0005078e) cell_tport_appsw_pane_t1

0x8cc0,	// (0x0005079c) grid_highlight_pane_cp019

0x8cc8,	// (0x000507a4) list_tport_double_graphic_pane_ParamLimits

0x8cc8,	// (0x000507a4) list_tport_double_graphic_pane

0x0cd1,	// (0x000487ad) list_highlight_pane_cp023_ParamLimits

0x0cd1,	// (0x000487ad) list_highlight_pane_cp023

0x8cd5,	// (0x000507b1) list_tport_double_graphic_pane_g1_ParamLimits

0x8cd5,	// (0x000507b1) list_tport_double_graphic_pane_g1

0x8ce2,	// (0x000507be) list_tport_double_graphic_pane_t1_ParamLimits

0x8ce2,	// (0x000507be) list_tport_double_graphic_pane_t1

0x8cf7,	// (0x000507d3) list_tport_double_graphic_pane_t2_ParamLimits

0x8cf7,	// (0x000507d3) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x00057716) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x00057716) list_tport_double_graphic_pane_t

0xdf1f,	// (0x000559fb) main_cale_note_pane

0x6f3f,	// (0x0004ea1b) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6f3f,	// (0x0004ea1b) cell_vitu2_function_top_wide_pane_cp01

0x86c4,	// (0x000501a0) wait_bar_pane_cp05_ParamLimits

0x0cd1,	// (0x000487ad) listscroll_cmail_pane

0xdd18,	// (0x000557f4) list_cmail_pane

0x8d09,	// (0x000507e5) list_cmail_body_pane

0x8d20,	// (0x000507fc) list_single_cmail_header_caption_pane

0x8d3a,	// (0x00050816) list_single_cmail_header_detail_pane_ParamLimits

0x8d3a,	// (0x00050816) list_single_cmail_header_detail_pane

0xdd2f,	// (0x0005580b) list_single_cmail_header_caption_pane_t1

0x082f,	// (0x0004830b) list_single_cmail_header_detail_pane_g1_ParamLimits

0x082f,	// (0x0004830b) list_single_cmail_header_detail_pane_g1

0xcfe9,	// (0x00054ac5) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcfe9,	// (0x00054ac5) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x0005771b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x0005771b) list_single_cmail_header_detail_pane_g

0x0847,	// (0x00048323) list_single_cmail_header_detail_pane_t1_ParamLimits

0x0847,	// (0x00048323) list_single_cmail_header_detail_pane_t1

0x0883,	// (0x0004835f) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0883,	// (0x0004835f) list_single_cmail_header_editor_pane_bg

0xd9c6,	// (0x000554a2) list_cmail_body_pane_g1

0xdd53,	// (0x0005582f) list_cmail_body_pane_t1

0xc86d,	// (0x00054349) list_single_cmail_header_editor_pane_bg_g1

0x21df,	// (0x00049cbb) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc87d,	// (0x00054359) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc875,	// (0x00054351) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcb07,	// (0x000545e3) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc89d,	// (0x00054379) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc88d,	// (0x00054369) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc895,	// (0x00054371) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x21bf,	// (0x00049c9b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d6d,	// (0x00050849) calenote_gesture_pane_ParamLimits

0x8d6d,	// (0x00050849) calenote_gesture_pane

0x8d8d,	// (0x00050869) calenote_window_pane_ParamLimits

0x8d8d,	// (0x00050869) calenote_window_pane

0xdd61,	// (0x0005583d) popup_note_window_cp01

0x8da9,	// (0x00050885) calenote_swipe_1_pane_ParamLimits

0x8da9,	// (0x00050885) calenote_swipe_1_pane

0x8a5e,	// (0x0005053a) calenote_swipe_2_pane_ParamLimits

0x8a5e,	// (0x0005053a) calenote_swipe_2_pane

0xdb9c,	// (0x00055678) calenote_swipe_1_pane_g1_ParamLimits

0xdb9c,	// (0x00055678) calenote_swipe_1_pane_g1

0xdd73,	// (0x0005584f) calenote_swipe_1_pane_g2_ParamLimits

0xdd73,	// (0x0005584f) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x00057727) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x00057727) calenote_swipe_1_pane_g

0xdd7f,	// (0x0005585b) calenote_swipe_1_pane_t1_ParamLimits

0xdd7f,	// (0x0005585b) calenote_swipe_1_pane_t1

0xdb9c,	// (0x00055678) calenote_swipe_2_pane_g1_ParamLimits

0xdb9c,	// (0x00055678) calenote_swipe_2_pane_g1

0xdd9e,	// (0x0005587a) calenote_swipe_2_pane_g2_ParamLimits

0xdd9e,	// (0x0005587a) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x0005772c) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x0005772c) calenote_swipe_2_pane_g

0xddaa,	// (0x00055886) calenote_swipe_2_pane_t1_ParamLimits

0xddaa,	// (0x00055886) calenote_swipe_2_pane_t1

0xdf1f,	// (0x000559fb) main_mup_navstr_pane

0x5e61,	// (0x0004d93d) main_mup3_pane_t7_ParamLimits

0x5e61,	// (0x0004d93d) main_mup3_pane_t7

0xc3f7,	// (0x00053ed3) main_mp4_pane_g6_ParamLimits

0xc3f7,	// (0x00053ed3) main_mp4_pane_g6

0xc6b2,	// (0x0005418e) main_image3_pane_t4_ParamLimits

0xc6b2,	// (0x0005418e) main_image3_pane_t4

0x8dbe,	// (0x0005089a) popup_navstr_preview_pane_ParamLimits

0x8dbe,	// (0x0005089a) popup_navstr_preview_pane

0x8dce,	// (0x000508aa) scroll_navstr_pane_ParamLimits

0x8dce,	// (0x000508aa) scroll_navstr_pane

0xdf1f,	// (0x000559fb) bg_popup_preview_window_pane_cp04

0xddd1,	// (0x000558ad) popup_navstr_preview_pane_t1

0x8de2,	// (0x000508be) scroll_navstr_pane_g1_ParamLimits

0x8de2,	// (0x000508be) scroll_navstr_pane_g1

0x8df6,	// (0x000508d2) scroll_navstr_pane_t1_ParamLimits

0x8df6,	// (0x000508d2) scroll_navstr_pane_t1

0xdd6a,	// (0x00055846) bg_button_pane_cp014

0xdd6a,	// (0x00055846) bg_button_pane_cp030

0x05ec,	// (0x000480c8) list_double_fisheye_pane_g4_ParamLimits

0x05ec,	// (0x000480c8) list_double_fisheye_pane_g4

0x05f8,	// (0x000480d4) list_double_fisheye_pane_g5_ParamLimits

0x05f8,	// (0x000480d4) list_double_fisheye_pane_g5

0xd209,	// (0x00054ce5) sp_fs_scroll_pane_cp03

0xdc6a,	// (0x00055746) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdc76,	// (0x00055752) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x000576d5) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x8b0d,	// (0x000505e9) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdd27,	// (0x00055803) sp_fs_scroll_pane_cp02

0x1308,	// (0x00048de4) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x1308,	// (0x00048de4) popup_sp_fs_calendar_preview_list_single_pane

0xdf1f,	// (0x000559fb) main_cam6_pano_pane

0x0cd1,	// (0x000487ad) main_mup3_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_phacti_pane

0x8595,	// (0x00050071) bg_button_pane_cp11

0x85af,	// (0x0005008b) main_mobtv_info_pane_g2_ParamLimits

0x85af,	// (0x0005008b) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x0005763a) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x0005763a) main_mobtv_info_pane_g

0x0fc5,	// (0x00048aa1) sc_clock_pane_t5_ParamLimits

0x0fc5,	// (0x00048aa1) sc_clock_pane_t5

0x3b17,	// (0x0004b5f3) main_radioblah_pane_g1_ParamLimits

0x3b25,	// (0x0004b601) main_radioblah_pane_t3_ParamLimits

0x3b25,	// (0x0004b601) main_radioblah_pane_t3

0x3b25,	// (0x0004b601) main_radioblah_pane_t4_ParamLimits

0x3b25,	// (0x0004b601) main_radioblah_pane_t4

0x0cd1,	// (0x000487ad) main_radioblah_text_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_radioblah_text_pane

0xdad3,	// (0x000555af) main_radioblah_info_pane_g1_ParamLimits

0xdb17,	// (0x000555f3) main_radioblah_info_pane_t4_ParamLimits

0xdb17,	// (0x000555f3) main_radioblah_info_pane_t4

0x0cd1,	// (0x000487ad) main_sp_fs_calendar_pane

0x8e0d,	// (0x000508e9) main_phacti_pane_g1

0x8e15,	// (0x000508f1) phacti_note_pane_ParamLimits

0x8e15,	// (0x000508f1) phacti_note_pane

0xdde8,	// (0x000558c4) phacti_term_pane_ParamLimits

0xdde8,	// (0x000558c4) phacti_term_pane

0xddfd,	// (0x000558d9) phacti_note_pane_t1_ParamLimits

0xddfd,	// (0x000558d9) phacti_note_pane_t1

0xd019,	// (0x00054af5) phacti_term_pane_g1

0xd021,	// (0x00054afd) phacti_term_pane_t1_ParamLimits

0xd021,	// (0x00054afd) phacti_term_pane_t1

0xde14,	// (0x000558f0) popup_sp_fs_calendar_preview_list_single_pane_g1

0xde1c,	// (0x000558f8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x00057736) popup_sp_fs_calendar_preview_list_single_pane_g

0xde24,	// (0x00055900) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde24,	// (0x00055900) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde3a,	// (0x00055916) aid_popup_sp_fs_bg_corner_pane

0x0fbb,	// (0x00048a97) popup_sp_fs_calendar_preview_bg_pane_g1

0xdf1f,	// (0x000559fb) popup_sp_fs_calendar_preview_bg_pane

0xde42,	// (0x0005591e) popup_sp_fs_calendar_preview_list_pane

0x3b39,	// (0x0004b615) bg_main_sp_fs_cale_pane_ParamLimits

0x3b39,	// (0x0004b615) bg_main_sp_fs_cale_pane

0xd054,	// (0x00054b30) listscroll_cale_mrui_pane_ParamLimits

0xd054,	// (0x00054b30) listscroll_cale_mrui_pane

0xd069,	// (0x00054b45) listscroll_sp_fs_schedule_track_pane

0xd072,	// (0x00054b4e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd072,	// (0x00054b4e) main_sp_fs_ctrlbar_pane_cp01

0xde4a,	// (0x00055926) main_sp_fs_ribbon_pane

0xd085,	// (0x00054b61) popup_sp_fs_cale_preview_window

0x8e8a,	// (0x00050966) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e8a,	// (0x00050966) list_single_sp_fs_schedule_track_pane

0x0cd1,	// (0x000487ad) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0cd1,	// (0x000487ad) bg_sp_fs_highlight_list_pane_cp03

0x8e9d,	// (0x00050979) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e9d,	// (0x00050979) list_single_sp_fs_schedule_track_pane_g1

0x8ea9,	// (0x00050985) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8ea9,	// (0x00050985) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x0005773b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x0005773b) list_single_sp_fs_schedule_track_pane_g

0x8eb5,	// (0x00050991) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8eb5,	// (0x00050991) list_single_sp_fs_schedule_track_pane_t1

0x8ed7,	// (0x000509b3) sp_fs_schedule_track_pane_ParamLimits

0x8ed7,	// (0x000509b3) sp_fs_schedule_track_pane

0xde52,	// (0x0005592e) sp_fs_schedule_track_pane_g1

0xde5a,	// (0x00055936) sp_fs_schedule_track_pane_g2

0xde62,	// (0x0005593e) sp_fs_schedule_track_pane_g3

0xde6a,	// (0x00055946) sp_fs_schedule_track_pane_g4

0xde72,	// (0x0005594e) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x00057740) sp_fs_schedule_track_pane_g

0xc86d,	// (0x00054349) bg_sp_fs_schedule_viewer_highlight_g1

0x21df,	// (0x00049cbb) bg_sp_fs_schedule_viewer_highlight_g2

0xc875,	// (0x00054351) bg_sp_fs_schedule_viewer_highlight_g3

0xc87d,	// (0x00054359) bg_sp_fs_schedule_viewer_highlight_g4

0xcb07,	// (0x000545e3) bg_sp_fs_schedule_viewer_highlight_g5

0xc88d,	// (0x00054369) bg_sp_fs_schedule_viewer_highlight_g6

0xc895,	// (0x00054371) bg_sp_fs_schedule_viewer_highlight_g7

0xc89d,	// (0x00054379) bg_sp_fs_schedule_viewer_highlight_g8

0x21bf,	// (0x00049c9b) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x0005774b) bg_sp_fs_schedule_viewer_highlight_g

0xdf1f,	// (0x000559fb) bg_main_sp_fs_ribbon_pane

0x8eec,	// (0x000509c8) main_sp_fs_ribbon_pane_g1

0xde7a,	// (0x00055956) main_sp_fs_ribbon_pane_t1

0x8ef5,	// (0x000509d1) main_sp_fs_ribbon_pane_t2

0xde89,	// (0x00055965) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x0005775e) main_sp_fs_ribbon_pane_t

0xde98,	// (0x00055974) main_sp_fs_ribbon_scheduler_pane

0xdea0,	// (0x0005597c) bg_main_sp_fs_ribbon_pane_g1

0xdea9,	// (0x00055985) bg_main_sp_fs_ribbon_pane_g2

0xdeb2,	// (0x0005598e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x00057765) bg_main_sp_fs_ribbon_pane_g

0xdeba,	// (0x00055996) main_sp_fs_ribbon_scheduler_pane_g1

0xdec3,	// (0x0005599f) main_sp_fs_ribbon_scheduler_pane_g2

0xdecc,	// (0x000559a8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x0005776c) main_sp_fs_ribbon_scheduler_pane_g

0xded5,	// (0x000559b1) list_cale_mrui_pane

0x8f04,	// (0x000509e0) sp_fs_scroll_pane_cp07_ParamLimits

0x8f04,	// (0x000509e0) sp_fs_scroll_pane_cp07

0x8f20,	// (0x000509fc) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f20,	// (0x000509fc) bg_sp_fs_schedule_viewer_highlight

0xdee2,	// (0x000559be) list_single_sp_fs_schedule_track_pane_cp01

0xdeea,	// (0x000559c6) list_sp_fs_schedule_track_pane

0xdef2,	// (0x000559ce) sp_fs_scroll_pane_cp06_ParamLimits

0xdef2,	// (0x000559ce) sp_fs_scroll_pane_cp06

0x0fbb,	// (0x00048a97) bgmain_sp_fs_calendar_pane_g1

0x0896,	// (0x00048372) list_single_cale_mrui_pane_ParamLimits

0x0896,	// (0x00048372) list_single_cale_mrui_pane

0xd097,	// (0x00054b73) list_single_cale_mrui_row_pane_ParamLimits

0xd097,	// (0x00054b73) list_single_cale_mrui_row_pane

0xd0a4,	// (0x00054b80) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd0a4,	// (0x00054b80) list_single_cale_mrui_row_pane_g1

0xd0dc,	// (0x00054bb8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd0dc,	// (0x00054bb8) list_single_cale_mrui_row_pane_t1

0x08b9,	// (0x00048395) list_single_cale_mrui_row_pane_t2_ParamLimits

0x08b9,	// (0x00048395) list_single_cale_mrui_row_pane_t2

0xd0ee,	// (0x00054bca) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd0ee,	// (0x00054bca) list_single_cale_mrui_row_pane_t3

0xd11d,	// (0x00054bf9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd11d,	// (0x00054bf9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x0005777a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x0005777a) list_single_cale_mrui_row_pane_t

0x091f,	// (0x000483fb) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x091f,	// (0x000483fb) list_single_cmail_header_editor_pane_bg_cp01

0x094b,	// (0x00048427) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x094b,	// (0x00048427) list_single_cmail_header_editor_pane_bg_cp02

0xe2e4,	// (0x00055dc0) main_radioblah_text_pane_t1_ParamLimits

0xe2e4,	// (0x00055dc0) main_radioblah_text_pane_t1

0xe2fe,	// (0x00055dda) cam6_indi_pane_cp01

0xe306,	// (0x00055de2) cam6_mode_pane_cp01

0xe30e,	// (0x00055dea) cam6_pano_pane

0xe317,	// (0x00055df3) cam6_zoom_pane_cp01

0xe321,	// (0x00055dfd) cam6_pano_image_pane

0xe32a,	// (0x00055e06) cam6_pano_pane_g1

0xd9c6,	// (0x000554a2) cam6_pano_pane_g2

0xe333,	// (0x00055e0f) cam6_pano_pane_g3

0xe33c,	// (0x00055e18) cam6_pano_pane_g4

0xc18b,	// (0x00053c67) cam6_pano_pane_g5

0xe345,	// (0x00055e21) cam6_pano_pane_g6

0xe34d,	// (0x00055e29) cam6_pano_pane_g7

0xe355,	// (0x00055e31) cam6_pano_pane_g8

0xe35e,	// (0x00055e3a) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x00057783) cam6_pano_pane_g

0xdf1f,	// (0x000559fb) main_browser_tag_pane

0xddc9,	// (0x000558a5) grid_navstr_albumart_pane

0xe369,	// (0x00055e45) cell_navstr_albumart_pane_ParamLimits

0xe369,	// (0x00055e45) cell_navstr_albumart_pane

0xe385,	// (0x00055e61) cell_navstr_albumart_pane_g1

0xb5e5,	// (0x000530c1) cell_navstr_albumart_pane_g2

0xb5f5,	// (0x000530d1) cell_navstr_albumart_pane_g3

0xb5ed,	// (0x000530c9) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x00057796) cell_navstr_albumart_pane_g

0x8f32,	// (0x00050a0e) bt_list_pane_ParamLimits

0x8f32,	// (0x00050a0e) bt_list_pane

0x8f48,	// (0x00050a24) bt_list_pane_t1

0x8f57,	// (0x00050a33) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x0005779f) bt_list_pane_t

0xdf1f,	// (0x000559fb) main_cale_prevew_pane

0x8f66,	// (0x00050a42) popup_cale_preview_window_ParamLimits

0x8f66,	// (0x00050a42) popup_cale_preview_window

0x0cd1,	// (0x000487ad) bg_popup_preview_window_pane_cp05_ParamLimits

0x0cd1,	// (0x000487ad) bg_popup_preview_window_pane_cp05

0xe38d,	// (0x00055e69) list_cale_preview_pane_ParamLimits

0xe38d,	// (0x00055e69) list_cale_preview_pane

0x8f83,	// (0x00050a5f) list_double_cale_preview_pane_ParamLimits

0x8f83,	// (0x00050a5f) list_double_cale_preview_pane

0x8f97,	// (0x00050a73) list_single_cale_preview_pane_ParamLimits

0x8f97,	// (0x00050a73) list_single_cale_preview_pane

0x8faf,	// (0x00050a8b) list_single_cale_preview_pane_g1

0x8fb7,	// (0x00050a93) list_single_cale_preview_pane_t1_ParamLimits

0x8fb7,	// (0x00050a93) list_single_cale_preview_pane_t1

0x8fcc,	// (0x00050aa8) list_double_cale_preview_pane_g1

0x8fd4,	// (0x00050ab0) list_double_cale_preview_pane_t1_ParamLimits

0x8fd4,	// (0x00050ab0) list_double_cale_preview_pane_t1

0x8fe9,	// (0x00050ac5) list_double_cale_preview_pane_t2_ParamLimits

0x8fe9,	// (0x00050ac5) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x000577a4) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x000577a4) list_double_cale_preview_pane_t

0xdf1f,	// (0x000559fb) main_ezdial_pane

0x0cd1,	// (0x000487ad) main_sp_fs_email_pane_ParamLimits

0x8a78,	// (0x00050554) cmail_ddmenu_btn01_pane_ParamLimits

0x8a78,	// (0x00050554) cmail_ddmenu_btn01_pane

0x8a8b,	// (0x00050567) cmail_ddmenu_btn02_pane_ParamLimits

0x8a8b,	// (0x00050567) cmail_ddmenu_btn02_pane

0x8aae,	// (0x0005058a) cmail_ddmenu_btn03_pane_ParamLimits

0x8aae,	// (0x0005058a) cmail_ddmenu_btn03_pane

0x8b4c,	// (0x00050628) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b70,	// (0x0005064c) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d09,	// (0x000507e5) list_cmail_body_pane_ParamLimits

0xdd3d,	// (0x00055819) bg_button_pane_cp12

0xdd46,	// (0x00055822) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdd46,	// (0x00055822) list_single_cmail_header_detail_pane_g3

0xcff5,	// (0x00054ad1) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcff5,	// (0x00054ad1) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x00057722) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x00057722) list_single_cmail_header_detail_pane_t

0xd036,	// (0x00054b12) phacti_term_pane_t2_ParamLimits

0xd036,	// (0x00054b12) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x00057731) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x00057731) phacti_term_pane_t

0xe399,	// (0x00055e75) aid_size_list_single_double

0x9001,	// (0x00050add) popup_ezdial_listscroll_window

0xe3a5,	// (0x00055e81) popup_number_entry_window_cp01

0x199b,	// (0x00049477) bg_popup_call_pane_cp09

0xe3b2,	// (0x00055e8e) ezdial_list_pane

0xe3ba,	// (0x00055e96) scroll_pane_cp23

0x3b39,	// (0x0004b615) bg_button_pane_cp028_ParamLimits

0x3b39,	// (0x0004b615) bg_button_pane_cp028

0x901d,	// (0x00050af9) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x901d,	// (0x00050af9) cmail_ddmenu_btn01_pane_g1

0x902c,	// (0x00050b08) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x902c,	// (0x00050b08) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x000577a9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x000577a9) cmail_ddmenu_btn01_pane_g

0xe3c2,	// (0x00055e9e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe3c2,	// (0x00055e9e) cmail_ddmenu_btn01_pane_t1

0x3b39,	// (0x0004b615) bg_button_pane_cp029_ParamLimits

0x3b39,	// (0x0004b615) bg_button_pane_cp029

0x9042,	// (0x00050b1e) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9042,	// (0x00050b1e) cmail_ddmenu_btn02_pane_g1

0x905d,	// (0x00050b39) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x905d,	// (0x00050b39) cmail_ddmenu_btn02_pane_t1

0x0cd1,	// (0x000487ad) bg_button_pane_cp031_ParamLimits

0x0cd1,	// (0x000487ad) bg_button_pane_cp031

0x9042,	// (0x00050b1e) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9042,	// (0x00050b1e) cmail_ddmenu_btn03_pane_g1

0x905d,	// (0x00050b39) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x905d,	// (0x00050b39) cmail_ddmenu_btn03_pane_t1

0x0fc5,	// (0x00048aa1) cell_dialer2_keypad_pane_t1_ParamLimits

0xc1b9,	// (0x00053c95) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xc1b9,	// (0x00053c95) cell_dialer2_keypad_pane_t1_copy1

0x83b6,	// (0x0004fe92) ncimui_group_button_pane

0x0cd1,	// (0x000487ad) main_sp_fs_calendar_pane_ParamLimits

0x8d20,	// (0x000507fc) list_single_cmail_header_caption_pane_ParamLimits

0xd04b,	// (0x00054b27) aid_recal_txt_sm_pane

0xdf1f,	// (0x000559fb) mian_recal_day_pane

0xd085,	// (0x00054b61) popup_sp_fs_cale_preview_window_ParamLimits

0xe3d8,	// (0x00055eb4) list_recal_day_pane

0xd168,	// (0x00054c44) list_single_recal_day_pane_ParamLimits

0xd168,	// (0x00054c44) list_single_recal_day_pane

0xe3ff,	// (0x00055edb) list_single_recal_day_pane_g1_ParamLimits

0xe3ff,	// (0x00055edb) list_single_recal_day_pane_g1

0xd17a,	// (0x00054c56) list_single_recal_day_pane_g2_ParamLimits

0xd17a,	// (0x00054c56) list_single_recal_day_pane_g2

0xd186,	// (0x00054c62) list_single_recal_day_pane_g3_ParamLimits

0xd186,	// (0x00054c62) list_single_recal_day_pane_g3

0x0969,	// (0x00048445) list_single_recal_day_pane_g4_ParamLimits

0x0969,	// (0x00048445) list_single_recal_day_pane_g4

0xd192,	// (0x00054c6e) list_single_recal_day_pane_g5_ParamLimits

0xd192,	// (0x00054c6e) list_single_recal_day_pane_g5

0xd19e,	// (0x00054c7a) list_single_recal_day_pane_g6_ParamLimits

0xd19e,	// (0x00054c7a) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x000577b8) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x000577b8) list_single_recal_day_pane_g

0xd1b2,	// (0x00054c8e) list_single_recal_day_pane_t1

0xd1c4,	// (0x00054ca0) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x000577c3) list_single_recal_day_pane_t

0x9084,	// (0x00050b60) ncimui_query_button_pane_ParamLimits

0x9084,	// (0x00050b60) ncimui_query_button_pane

0x9094,	// (0x00050b70) ncimui_query_button_pane_t1_ParamLimits

0x9094,	// (0x00050b70) ncimui_query_button_pane_t1

0xe40b,	// (0x00055ee7) ncimui_query_button_pane_t2_ParamLimits

0xe40b,	// (0x00055ee7) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x000577c8) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x000577c8) ncimui_query_button_pane_t

0x90a7,	// (0x00050b83) query_button_pane_ParamLimits

0x90a7,	// (0x00050b83) query_button_pane

0xdf1f,	// (0x000559fb) bg_button_pane_cp0028

0xe41e,	// (0x00055efa) query_button_pane_t1

0x5139,	// (0x0004cc15) main_tport_pane_ParamLimits

0x8b9c,	// (0x00050678) bg_popup_window_pane_cp01_ParamLimits

0x8b9c,	// (0x00050678) bg_popup_window_pane_cp01

0x8bb5,	// (0x00050691) heading_pane_cp08_ParamLimits

0x8bb5,	// (0x00050691) heading_pane_cp08

0x8bcb,	// (0x000506a7) heading_pane_cp07_ParamLimits

0x8bcb,	// (0x000506a7) heading_pane_cp07

0x8ca2,	// (0x0005077e) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x0005770f) cell_tport_appsw_pane_g

0xaecd,	// (0x000529a9) input_candi_list_open_g1

0x30be,	// (0x0004ab9a) list_cale_time_pane_g6_ParamLimits

0x30be,	// (0x0004ab9a) list_cale_time_pane_g6

0x57e8,	// (0x0004d2c4) aid_size_touch_calib_1_ParamLimits

0x57e8,	// (0x0004d2c4) aid_size_touch_calib_1

0x57fa,	// (0x0004d2d6) aid_size_touch_calib_2_ParamLimits

0x57fa,	// (0x0004d2d6) aid_size_touch_calib_2

0x5812,	// (0x0004d2ee) aid_size_touch_calib_3_ParamLimits

0x5812,	// (0x0004d2ee) aid_size_touch_calib_3

0x5830,	// (0x0004d30c) aid_size_touch_calib_4_ParamLimits

0x5830,	// (0x0004d30c) aid_size_touch_calib_4

0x5848,	// (0x0004d324) main_touch_calib_button_group_pane_ParamLimits

0x5848,	// (0x0004d324) main_touch_calib_button_group_pane

0x5860,	// (0x0004d33c) main_touch_calib_pane_g1_ParamLimits

0x5872,	// (0x0004d34e) main_touch_calib_pane_g2_ParamLimits

0x5884,	// (0x0004d360) main_touch_calib_pane_g3_ParamLimits

0x5896,	// (0x0004d372) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x0005715b) main_touch_calib_pane_g_ParamLimits

0x58a8,	// (0x0004d384) main_touch_calib_pane_t1_ParamLimits

0x58c2,	// (0x0004d39e) main_touch_calib_pane_t2_ParamLimits

0x58dc,	// (0x0004d3b8) main_touch_calib_pane_t3_ParamLimits

0x58f0,	// (0x0004d3cc) main_touch_calib_pane_t4_ParamLimits

0x5906,	// (0x0004d3e2) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x00057164) main_touch_calib_pane_t_ParamLimits

0xbf46,	// (0x00053a22) list_single_fp_cale_pane_g3_ParamLimits

0xbf46,	// (0x00053a22) list_single_fp_cale_pane_g3

0x0cd1,	// (0x000487ad) bg_button_pane_cp012_ParamLimits

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp03_ParamLimits

0x7730,	// (0x0004f20c) cell_vitu2_function_top_pane_g1_ParamLimits

0x0cd1,	// (0x000487ad) bg_vkb2_func_pane_cp04_ParamLimits

0x8341,	// (0x0004fe1d) main_ncimui_button_group_pane_ParamLimits

0x8341,	// (0x0004fe1d) main_ncimui_button_group_pane

0x83a1,	// (0x0004fe7d) main_ncimui_pane_t3_ParamLimits

0x83a1,	// (0x0004fe7d) main_ncimui_pane_t3

0xdddf,	// (0x000558bb) phacti_button_group_pane

0xe399,	// (0x00055e75) aid_size_list_single_double_ParamLimits

0x9001,	// (0x00050add) popup_ezdial_listscroll_window_ParamLimits

0xe3a5,	// (0x00055e81) popup_number_entry_window_cp01_ParamLimits

0x90ba,	// (0x00050b96) phacti_button_pane_ParamLimits

0x90ba,	// (0x00050b96) phacti_button_pane

0xdf1f,	// (0x000559fb) bg_button_pane_cp14

0xe42c,	// (0x00055f08) phacti_button_pane_t1

0x90cb,	// (0x00050ba7) main_touch_calib_button_pane_ParamLimits

0x90cb,	// (0x00050ba7) main_touch_calib_button_pane

0x102d,	// (0x00048b09) bg_button_pane_cp18_ParamLimits

0x102d,	// (0x00048b09) bg_button_pane_cp18

0xe43a,	// (0x00055f16) main_touch_calib_button_pane_t1_ParamLimits

0xe43a,	// (0x00055f16) main_touch_calib_button_pane_t1

0xe450,	// (0x00055f2c) main_touch_calib_button_pane_t2_ParamLimits

0xe450,	// (0x00055f2c) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x000577cd) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x000577cd) main_touch_calib_button_pane_t

0xdf1f,	// (0x000559fb) cell_ncimui_button_pane

0xdf1f,	// (0x000559fb) bg_button_pane_cp032

0xe46e,	// (0x00055f4a) cell_ncimui_button_pane_t1

0xc690,	// (0x0005416c) image3_infobar_pane_ParamLimits

0xc690,	// (0x0005416c) image3_infobar_pane

0x8715,	// (0x000501f1) fs_bigclock_status_pane_ParamLimits

0x8715,	// (0x000501f1) fs_bigclock_status_pane

0x8722,	// (0x000501fe) main_fs_bigclock_clock_pane_ParamLimits

0x8722,	// (0x000501fe) main_fs_bigclock_clock_pane

0x8754,	// (0x00050230) main_fs_bigclock_indi_pane_ParamLimits

0x8754,	// (0x00050230) main_fs_bigclock_indi_pane

0x8794,	// (0x00050270) main_fs_bigclock_swipe_pane_ParamLimits

0x8794,	// (0x00050270) main_fs_bigclock_swipe_pane

0xdf1f,	// (0x000559fb) main_fs_clock_dumped_data

0x87e0,	// (0x000502bc) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x87e0,	// (0x000502bc) list_single_fs_bigclock_indicator_pane_g1

0x87f9,	// (0x000502d5) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x87f9,	// (0x000502d5) list_single_fs_bigclock_indicator_pane_g2

0x8813,	// (0x000502ef) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x8813,	// (0x000502ef) list_single_fs_bigclock_indicator_pane_g3

0x882d,	// (0x00050309) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x882d,	// (0x00050309) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x0005766e) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x0005766e) list_single_fs_bigclock_indicator_pane_g

0x885c,	// (0x00050338) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x885c,	// (0x00050338) list_single_fs_bigclock_indicator_pane_t1

0x8884,	// (0x00050360) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x8884,	// (0x00050360) list_single_fs_bigclock_indicator_pane_t2

0x88ac,	// (0x00050388) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x88ac,	// (0x00050388) list_single_fs_bigclock_indicator_pane_t3

0x88d4,	// (0x000503b0) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x88d4,	// (0x000503b0) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x00057679) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x00057679) list_single_fs_bigclock_indicator_pane_t

0xe47c,	// (0x00055f58) image3_infobar_fav_pane_ParamLimits

0xe47c,	// (0x00055f58) image3_infobar_fav_pane

0xe48c,	// (0x00055f68) image3_infobar_loc_pane_ParamLimits

0xe48c,	// (0x00055f68) image3_infobar_loc_pane

0xe4a2,	// (0x00055f7e) image3_infobar_time_pane_ParamLimits

0xe4a2,	// (0x00055f7e) image3_infobar_time_pane

0x0fbb,	// (0x00048a97) image3_infobar_time_pane_g1

0xe4b2,	// (0x00055f8e) image3_infobar_time_pane_t1

0x0fbb,	// (0x00048a97) image3_infobar_loc_pane_g1

0xe4c0,	// (0x00055f9c) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x000577d2) image3_infobar_loc_pane_g

0xe4c8,	// (0x00055fa4) image3_infobar_loc_pane_t1

0x0fbb,	// (0x00048a97) image3_infobar_fav_pane_g1

0xe4d6,	// (0x00055fb2) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x000577d7) image3_infobar_fav_pane_g

0xe4de,	// (0x00055fba) fs_bigclock_status_battery_pane

0xe4e7,	// (0x00055fc3) fs_bigclock_status_signal_pane

0xe4f0,	// (0x00055fcc) fs_bigclock_status_title_pane

0xe4f9,	// (0x00055fd5) fs_bigclock_status_signal_pane_g1

0xe502,	// (0x00055fde) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x000577dc) fs_bigclock_status_signal_pane_g

0xe50a,	// (0x00055fe6) fs_bigclock_status_battery_pane_g1

0xe513,	// (0x00055fef) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x000577e1) fs_bigclock_status_battery_pane_g

0xe51b,	// (0x00055ff7) fs_bigclock_status_title_pane_t1

0x90e0,	// (0x00050bbc) main_fs_bigclock_clock_pane_g1

0x90e0,	// (0x00050bbc) main_fs_bigclock_clock_pane_g2

0x90f3,	// (0x00050bcf) main_fs_bigclock_clock_pane_g3

0x90f3,	// (0x00050bcf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x000577e6) main_fs_bigclock_clock_pane_g

0x910a,	// (0x00050be6) main_fs_bigclock_clock_pane_t1

0x9120,	// (0x00050bfc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x000577ef) main_fs_bigclock_clock_pane_t

0xe529,	// (0x00056005) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe529,	// (0x00056005) list_single_fs_bigclock_indicator_pane

0xe53a,	// (0x00056016) list_single_fs_bigclock_pane_ParamLimits

0xe53a,	// (0x00056016) list_single_fs_bigclock_pane

0xe560,	// (0x0005603c) main_fs_bigclock_indicator_pane_t1

0xe56f,	// (0x0005604b) list_single_fs_bigclock_pane_g1

0xe577,	// (0x00056053) list_single_fs_bigclock_pane_t1

0x0fbb,	// (0x00048a97) main_fs_bigclock_swipe_pane_g1

0xe5ba,	// (0x00056096) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x00057800) main_fs_bigclock_swipe_pane_g

0xe5c2,	// (0x0005609e) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe5c2,	// (0x0005609e) main_fs_bigclock_swipe_pane_t1

0x33af,	// (0x0004ae8b) call_type_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_btmg_pane

0xd0d0,	// (0x00054bac) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd0d0,	// (0x00054bac) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x00057773) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x00057773) list_single_cale_mrui_row_pane_g

0xd156,	// (0x00054c32) list_recal_vselct_arw_lo_pane

0xe3f7,	// (0x00055ed3) list_recal_vselct_arw_up_pane

0xd15e,	// (0x00054c3a) list_recal_vselct_pane

0x9182,	// (0x00050c5e) btmg_button_pane

0x918c,	// (0x00050c68) main_btmg_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp044

0xe5df,	// (0x000560bb) btmg_button_pane_t1

0xb737,	// (0x00053213) aid_listscroll_gen

0x0cd1,	// (0x000487ad) main_cntbar_detail_pane

0xdd10,	// (0x000557ec) list_cmail_folder_pane

0xd209,	// (0x00054ce5) sp_fs_scroll_pane_cp03_ParamLimits

0x0981,	// (0x0004845d) list_single_fs_dyc_pane_cp01_ParamLimits

0x0981,	// (0x0004845d) list_single_fs_dyc_pane_cp01

0xe5ed,	// (0x000560c9) aid_size_cmail_indent

0xd1d6,	// (0x00054cb2) list_single_dyc_row_pane_cp01

0x91ca,	// (0x00050ca6) cntbar_detail_list_pane_ParamLimits

0x91ca,	// (0x00050ca6) cntbar_detail_list_pane

0x921c,	// (0x00050cf8) main_cntbar_detail_cont_pane_ParamLimits

0x921c,	// (0x00050cf8) main_cntbar_detail_cont_pane

0xd209,	// (0x00054ce5) scroll_pane_cp032_ParamLimits

0xd209,	// (0x00054ce5) scroll_pane_cp032

0x9230,	// (0x00050d0c) cntbar_detail_list_event_pane_ParamLimits

0x9230,	// (0x00050d0c) cntbar_detail_list_event_pane

0x91dc,	// (0x00050cb8) cntbar_detail_list_shct_pane

0x2237,	// (0x00049d13) aid_list_gen

0xe5f6,	// (0x000560d2) aid_scroll

0xe5ff,	// (0x000560db) aid_size_touch_scroll_bar

0x9240,	// (0x00050d1c) aid_list_double

0x099c,	// (0x00048478) aid_list_single

0x9240,	// (0x00050d1c) aid_list_single_lg

0x09a5,	// (0x00048481) aid_list_z_g_a_sm

0x09ad,	// (0x00048489) aid_list_z_g_d

0x09b5,	// (0x00048491) aid_txt_z_prm

0x09c3,	// (0x0004849f) aid_txt_z_prm_cp01

0x09d1,	// (0x000484ad) aid_txt_z_sec

0x9249,	// (0x00050d25) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9249,	// (0x00050d25) main_cntbar_detail_cont_pane_g1

0x925d,	// (0x00050d39) main_cntbar_detail_cont_pane_g2_ParamLimits

0x925d,	// (0x00050d39) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x00057805) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x00057805) main_cntbar_detail_cont_pane_g

0xe608,	// (0x000560e4) main_cntbar_detail_cont_pane_t1

0xe616,	// (0x000560f2) main_cntbar_detail_cont_pane_t2

0xe624,	// (0x00056100) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x0005780a) main_cntbar_detail_cont_pane_t

0x926d,	// (0x00050d49) cell_cntbar_detail_list_shct_pane_ParamLimits

0x926d,	// (0x00050d49) cell_cntbar_detail_list_shct_pane

0xe632,	// (0x0005610e) cntbar_detail_list_shct_pane_g1

0xe63b,	// (0x00056117) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x00057811) cntbar_detail_list_shct_pane_g

0x927f,	// (0x00050d5b) cntbar_detail_list_event_pane_g1_ParamLimits

0x927f,	// (0x00050d5b) cntbar_detail_list_event_pane_g1

0x928b,	// (0x00050d67) cntbar_detail_list_event_pane_g2_ParamLimits

0x928b,	// (0x00050d67) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x00057816) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x00057816) cntbar_detail_list_event_pane_g

0x92f9,	// (0x00050dd5) cntbar_detail_list_event_pane_t1_ParamLimits

0x92f9,	// (0x00050dd5) cntbar_detail_list_event_pane_t1

0x930e,	// (0x00050dea) cntbar_detail_list_event_pane_t2_ParamLimits

0x930e,	// (0x00050dea) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x00057823) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x00057823) cntbar_detail_list_event_pane_t

0x0fbb,	// (0x00048a97) cell_cntbar_detail_list_shct_pane_g1

0x39c4,	// (0x0004b4a0) navi_pane_mv_g3

0x0cd1,	// (0x000487ad) main_cntbar_detail_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_notif_wgt_pane

0xc381,	// (0x00053e5d) aid_tch_main_mp4_pane_g4

0xc5f9,	// (0x000540d5) popup_slider_window_cp02

0xd14c,	// (0x00054c28) list_recal_day_event_pane

0x9196,	// (0x00050c72) cntbar_detail_btn_pane_ParamLimits

0x9196,	// (0x00050c72) cntbar_detail_btn_pane

0x91af,	// (0x00050c8b) cntbar_detail_btn_pane_cp01_ParamLimits

0x91af,	// (0x00050c8b) cntbar_detail_btn_pane_cp01

0x91dc,	// (0x00050cb8) cntbar_detail_list_shct_pane_ParamLimits

0x91ec,	// (0x00050cc8) cntbar_detail_pane_g1_ParamLimits

0x91ec,	// (0x00050cc8) cntbar_detail_pane_g1

0x9200,	// (0x00050cdc) cntbar_detail_pane_t1_ParamLimits

0x9200,	// (0x00050cdc) cntbar_detail_pane_t1

0x9297,	// (0x00050d73) cntbar_detail_list_event_pane_g3_ParamLimits

0x9297,	// (0x00050d73) cntbar_detail_list_event_pane_g3

0x92af,	// (0x00050d8b) cntbar_detail_list_event_pane_g4_ParamLimits

0x92af,	// (0x00050d8b) cntbar_detail_list_event_pane_g4

0x92c7,	// (0x00050da3) cntbar_detail_list_event_pane_g5_ParamLimits

0x92c7,	// (0x00050da3) cntbar_detail_list_event_pane_g5

0x92df,	// (0x00050dbb) cntbar_detail_list_event_pane_g6_ParamLimits

0x92df,	// (0x00050dbb) cntbar_detail_list_event_pane_g6

0x9323,	// (0x00050dff) cntbar_detail_list_event_pane_t3_ParamLimits

0x9323,	// (0x00050dff) cntbar_detail_list_event_pane_t3

0x9335,	// (0x00050e11) popup_notif_wgt_window_ParamLimits

0x9335,	// (0x00050e11) popup_notif_wgt_window

0x934e,	// (0x00050e2a) popup_submenu_window_cp01_ParamLimits

0x934e,	// (0x00050e2a) popup_submenu_window_cp01

0x199b,	// (0x00049477) bg_popup_window_pane_cp10

0xe644,	// (0x00056120) listscroll_notif_wgt_pane

0xe656,	// (0x00056132) list_notif_wgt_window

0xe65f,	// (0x0005613b) scroll_pane_cp033

0x9362,	// (0x00050e3e) list_notif_wgt_row_pane_ParamLimits

0x9362,	// (0x00050e3e) list_notif_wgt_row_pane

0xe668,	// (0x00056144) aid_size_list_notif_wgt_del

0xe675,	// (0x00056151) list_notif_wgt_row_pane_g1

0xe681,	// (0x0005615d) list_notif_wgt_row_pane_g2

0xe690,	// (0x0005616c) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x0005782a) list_notif_wgt_row_pane_g

0xe69d,	// (0x00056179) list_notif_wgt_row_pane_t1

0xe6b3,	// (0x0005618f) list_notif_wgt_row_pane_t2

0xe6c5,	// (0x000561a1) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x00057831) list_notif_wgt_row_pane_t

0xcb2f,	// (0x0005460b) list_recal_day_event_pane_g1

0xe6d7,	// (0x000561b3) list_recal_day_event_pane_t1

0xdf1f,	// (0x000559fb) bg_button_pane_cp045

0x9372,	// (0x00050e4e) cntbar_detail_btn_pane_t1

0x3b39,	// (0x0004b615) main_callh_pane_ParamLimits

0x3b39,	// (0x0004b615) main_callh_pane

0xdf1f,	// (0x000559fb) main_coverflow0_pane

0xdf1f,	// (0x000559fb) main_wgtman_pane

0x87b5,	// (0x00050291) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x87b5,	// (0x00050291) main_fs_bigclock_unlock_btn_pane

0x8c9a,	// (0x00050776) bg_button_pane_cp16

0x8caa,	// (0x00050786) cell_tport_appsw_pane_g3

0x9380,	// (0x00050e5c) cf0_flow_pane_ParamLimits

0x9380,	// (0x00050e5c) cf0_flow_pane

0xe6e6,	// (0x000561c2) listscroll_cf0_pane

0xe6f1,	// (0x000561cd) main_cf0_pane_g1

0x9395,	// (0x00050e71) main_cf0_pane_t1_ParamLimits

0x9395,	// (0x00050e71) main_cf0_pane_t1

0x93ac,	// (0x00050e88) main_cf0_pane_t2_ParamLimits

0x93ac,	// (0x00050e88) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x0005783d) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x0005783d) main_cf0_pane_t

0xe703,	// (0x000561df) scroll_pane_cp11

0x93c3,	// (0x00050e9f) cf0_flow_pane_g1

0x93cf,	// (0x00050eab) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x00057842) cf0_flow_pane_g

0x93db,	// (0x00050eb7) cf0_flow_pane_t1

0xdf1f,	// (0x000559fb) main_call6_pane

0xdf1f,	// (0x000559fb) main_calllock_pane

0x93ed,	// (0x00050ec9) call6_btn_grp_pane_ParamLimits

0x93ed,	// (0x00050ec9) call6_btn_grp_pane

0x9407,	// (0x00050ee3) call6_pane_g1_ParamLimits

0x9407,	// (0x00050ee3) call6_pane_g1

0x9420,	// (0x00050efc) popup_call6_1st_window_ParamLimits

0x9420,	// (0x00050efc) popup_call6_1st_window

0x9434,	// (0x00050f10) popup_call6_2nd_window_ParamLimits

0x9434,	// (0x00050f10) popup_call6_2nd_window

0x9448,	// (0x00050f24) cell_call6_btn_pane_ParamLimits

0x9448,	// (0x00050f24) cell_call6_btn_pane

0x199b,	// (0x00049477) bg_popup_call2_in_pane_cp03

0xe70e,	// (0x000561ea) popup_call6_1st_window_g1

0xe716,	// (0x000561f2) popup_call6_1st_window_g2

0xe71e,	// (0x000561fa) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x00057847) popup_call6_1st_window_g

0xe726,	// (0x00056202) popup_call6_1st_window_t1

0xe735,	// (0x00056211) popup_call6_1st_window_t2

0xe745,	// (0x00056221) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x0005784e) popup_call6_1st_window_t

0x199b,	// (0x00049477) bg_popup_call2_in_pane_cp04

0xe755,	// (0x00056231) popup_call6_2nd_window_g1

0xe75d,	// (0x00056239) popup_call6_2nd_window_g2

0xe765,	// (0x00056241) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x00057855) popup_call6_2nd_window_g

0xe76d,	// (0x00056249) popup_call6_2nd_window_t1

0xdf1f,	// (0x000559fb) bg_button_pane_cp15

0xe77c,	// (0x00056258) cell_call6_btn_pane_g1

0xe785,	// (0x00056261) cell_call6_btn_pane_t1

0x945c,	// (0x00050f38) listscroll_wgtman_pane_ParamLimits

0x945c,	// (0x00050f38) listscroll_wgtman_pane

0x947d,	// (0x00050f59) wgtman_btn_pane_ParamLimits

0x947d,	// (0x00050f59) wgtman_btn_pane

0x35db,	// (0x0004b0b7) aid_scroll_copy1

0xe794,	// (0x00056270) list_wgtman_pane

0x94c0,	// (0x00050f9c) wgtman_btn_pane_g1_ParamLimits

0x94c0,	// (0x00050f9c) wgtman_btn_pane_g1

0x94ec,	// (0x00050fc8) wgtman_btn_pane_t1_ParamLimits

0x94ec,	// (0x00050fc8) wgtman_btn_pane_t1

0xe79e,	// (0x0005627a) wgtman_btn_pane_t2_ParamLimits

0xe79e,	// (0x0005627a) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x0005785c) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x0005785c) wgtman_btn_pane_t

0x9529,	// (0x00051005) listrow_wgtman_pane_ParamLimits

0x9529,	// (0x00051005) listrow_wgtman_pane

0x953d,	// (0x00051019) listrow_wgtman_pane_g1

0x954a,	// (0x00051026) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x00057861) listrow_wgtman_pane_g

0x09df,	// (0x000484bb) listrow_wgtman_pane_t1

0x09f7,	// (0x000484d3) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x00057866) listrow_wgtman_pane_t

0x0a1d,	// (0x000484f9) wait_bar_pane_cp09

0xe7b5,	// (0x00056291) main_calllock_btn_pane

0xe7bf,	// (0x0005629b) main_calllock_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp17

0xe77c,	// (0x00056258) main_calllock_btn_pane_g1

0xe7cb,	// (0x000562a7) main_calllock_btn_pane_t1

0xdf1f,	// (0x000559fb) main_dialer3_pane

0xdf1f,	// (0x000559fb) main_fmrd2_pane

0x0fbb,	// (0x00048a97) main_fs_bigclock_unlock_btn_pane_g1

0x9570,	// (0x0005104c) main_fs_bigclock_unlock_btn_pane_t1

0x957e,	// (0x0005105a) area_fmrd2_info_pane_ParamLimits

0x957e,	// (0x0005105a) area_fmrd2_info_pane

0x958f,	// (0x0005106b) area_fmrd2_visual_pane_ParamLimits

0x958f,	// (0x0005106b) area_fmrd2_visual_pane

0x959d,	// (0x00051079) fmrd2_indi_pane_ParamLimits

0x959d,	// (0x00051079) fmrd2_indi_pane

0x95aa,	// (0x00051086) area_fmrd2_visual_pane_g1

0x95b2,	// (0x0005108e) area_fmrd2_visual_pane_t1

0x95c2,	// (0x0005109e) area_fmrd2_visual_pane_t2

0x95d2,	// (0x000510ae) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x00057870) area_fmrd2_visual_pane_t

0x95e2,	// (0x000510be) area_fmrd2_info_pane_g1

0x95ea,	// (0x000510c6) area_fmrd2_info_pane_t1

0x95fa,	// (0x000510d6) area_fmrd2_info_pane_t2

0x960a,	// (0x000510e6) area_fmrd2_info_pane_t3

0x961a,	// (0x000510f6) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x00057877) area_fmrd2_info_pane_t

0x962a,	// (0x00051106) fmrd2_indi_pane_t1

0x963a,	// (0x00051116) fmrd2_indi_pane_t2

0x964a,	// (0x00051126) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x00057880) fmrd2_indi_pane_t

0x883e,	// (0x0005031a) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x883e,	// (0x0005031a) list_single_fs_bigclock_indicator_pane_g5

0x88f3,	// (0x000503cf) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x88f3,	// (0x000503cf) list_single_fs_bigclock_indicator_pane_t5

0x8e29,	// (0x00050905) aid_cell_bcale_month_pane_ParamLimits

0x8e29,	// (0x00050905) aid_cell_bcale_month_pane

0x8e47,	// (0x00050923) bcale_month_pane_ParamLimits

0x8e47,	// (0x00050923) bcale_month_pane

0x8e6b,	// (0x00050947) bcale_preview_pane_ParamLimits

0x8e6b,	// (0x00050947) bcale_preview_pane

0xe577,	// (0x00056053) list_single_fs_bigclock_pane_t1_ParamLimits

0xe596,	// (0x00056072) list_single_fs_bigclock_pane_t2_ParamLimits

0xe596,	// (0x00056072) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x000577fb) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x000577fb) list_single_fs_bigclock_pane_t

0x9568,	// (0x00051044) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x0005786b) main_fs_bigclock_unlock_btn_pane_g

0x965a,	// (0x00051136) aid_dia3_key_size_ParamLimits

0x965a,	// (0x00051136) aid_dia3_key_size

0x966e,	// (0x0005114a) aid_dia3_listrow_size_ParamLimits

0x966e,	// (0x0005114a) aid_dia3_listrow_size

0x9688,	// (0x00051164) dia3_keypad_fun_pane_ParamLimits

0x9688,	// (0x00051164) dia3_keypad_fun_pane

0x96a2,	// (0x0005117e) dia3_keypad_num_pane_ParamLimits

0x96a2,	// (0x0005117e) dia3_keypad_num_pane

0x96bc,	// (0x00051198) dia3_listscroll_pane_ParamLimits

0x96bc,	// (0x00051198) dia3_listscroll_pane

0x96d2,	// (0x000511ae) dia3_numentry_pane_ParamLimits

0x96d2,	// (0x000511ae) dia3_numentry_pane

0xe7da,	// (0x000562b6) dia3_list_pane

0x96ec,	// (0x000511c8) scroll_pane_cp12

0xdf1f,	// (0x000559fb) bg_dia3_numentry_pane

0x96f7,	// (0x000511d3) dia3_numentry_pane_t1

0x9706,	// (0x000511e2) cell_dia3_key_num_pane

0x970e,	// (0x000511ea) cell_dia3_key0_fun_pane_ParamLimits

0x970e,	// (0x000511ea) cell_dia3_key0_fun_pane

0x9722,	// (0x000511fe) cell_dia3_key1_fun_pane_ParamLimits

0x9722,	// (0x000511fe) cell_dia3_key1_fun_pane

0x9737,	// (0x00051213) dia3_listrow_pane

0xd882,	// (0x0005535e) bg_dia3_numentry_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp21

0x9749,	// (0x00051225) cell_dia3_key_num_pane_t1

0x9757,	// (0x00051233) cell_dia3_key_num_pane_t2

0x9757,	// (0x00051233) cell_dia3_key_num_pane_t3

0x9757,	// (0x00051233) cell_dia3_key_num_pane_t4

0x0003,

0xfdab,	// (0x00057887) cell_dia3_key_num_pane_t

0xdf1f,	// (0x000559fb) bg_button_pane_cp19

0x9766,	// (0x00051242) cell_dia3_key0_fun_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp20

0x976e,	// (0x0005124a) cell_dia3_key1_fun_pane_g1

0x9776,	// (0x00051252) area_left_week_number_pane

0x9784,	// (0x00051260) area_top_day_name_pane

0x9797,	// (0x00051273) frame_month_view_pane

0xe7e5,	// (0x000562c1) grid_month_view_pane

0x97ac,	// (0x00051288) cell_top_day_name_pane_ParamLimits

0x97ac,	// (0x00051288) cell_top_day_name_pane

0x97db,	// (0x000512b7) cell_area_left_week_number_pane_ParamLimits

0x97db,	// (0x000512b7) cell_area_left_week_number_pane

0x97f1,	// (0x000512cd) cell_month_view_pane_ParamLimits

0x97f1,	// (0x000512cd) cell_month_view_pane

0xe7f3,	// (0x000562cf) frm_month_g1

0x9822,	// (0x000512fe) frm_month_g2

0x9835,	// (0x00051311) frm_month_g3

0x9848,	// (0x00051324) frm_month_g4

0x985b,	// (0x00051337) frm_month_g5

0x986e,	// (0x0005134a) frm_month_g6

0x9883,	// (0x0005135f) frm_month_g7

0xe800,	// (0x000562dc) frm_month_g8

0x9898,	// (0x00051374) frm_month_g9

0x98a8,	// (0x00051384) frm_month_g10

0x98b8,	// (0x00051394) frm_month_g11

0x98c8,	// (0x000513a4) frm_month_g12

0x98da,	// (0x000513b6) frm_month_g13

0x98ee,	// (0x000513ca) frm_month_g14

0x9902,	// (0x000513de) frm_month_g15

0x9916,	// (0x000513f2) frm_month_g16

0x000f,

0xfdb4,	// (0x00057890) frm_month_g

0xe80d,	// (0x000562e9) cell_top_day_name_pane_t1

0x992a,	// (0x00051406) cell_area_left_week_number_pane_g1

0x9936,	// (0x00051412) cell_area_left_week_number_pane_t1

0x0ee7,	// (0x000489c3) cell_month_view_pane_g1

0x9949,	// (0x00051425) cell_month_view_pane_t1

0xdf1f,	// (0x000559fb) main_fps_pane

0xdc30,	// (0x0005570c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdc30,	// (0x0005570c) cmail_ddmenu_btn02_pane_cp1

0xdc4c,	// (0x00055728) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdc4c,	// (0x00055728) cmail_ddmenu_btn02_pane_cp2

0x9051,	// (0x00050b2d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9051,	// (0x00050b2d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x000577ae) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x000577ae) cmail_ddmenu_btn02_pane_g

0x9072,	// (0x00050b4e) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9072,	// (0x00050b4e) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x000577b3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x000577b3) cmail_ddmenu_btn02_pane_t

0x995c,	// (0x00051438) fps_text_pane_ParamLimits

0x995c,	// (0x00051438) fps_text_pane

0x9973,	// (0x0005144f) main_fps_pane_g1_ParamLimits

0x9973,	// (0x0005144f) main_fps_pane_g1

0x998b,	// (0x00051467) wait_bar_pane_cp010_ParamLimits

0x998b,	// (0x00051467) wait_bar_pane_cp010

0x999e,	// (0x0005147a) fps_text_pane_t1_ParamLimits

0x999e,	// (0x0005147a) fps_text_pane_t1

0xe2b6,	// (0x00055d92) cam4_image_uncrop_pane_g1

0xe2bf,	// (0x00055d9b) cam4_image_uncrop_pane_g2

0x6c65,	// (0x0004e741) cam4_image_uncrop_pane_g3

0x6c6e,	// (0x0004e74a) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x000572f2) cam4_image_uncrop_pane_g

0x9737,	// (0x00051213) dia3_listrow_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_phob2_pane

0x8c44,	// (0x00050720) cell_tport_appsw_pane_cp02_ParamLimits

0x8c44,	// (0x00050720) cell_tport_appsw_pane_cp02

0x8c58,	// (0x00050734) cell_tport_appsw_pane_cp03_ParamLimits

0x8c58,	// (0x00050734) cell_tport_appsw_pane_cp03

0xdf1f,	// (0x000559fb) phob2_contact_card_pane

0xdf1f,	// (0x000559fb) phob2_listscroll_pane

0xe820,	// (0x000562fc) phob2_list_pane

0xe828,	// (0x00056304) scroll_pane_cp034

0x99b6,	// (0x00051492) phob2_cc_data_pane_ParamLimits

0x99b6,	// (0x00051492) phob2_cc_data_pane

0x99cf,	// (0x000514ab) phob2_cc_listscroll_pane_ParamLimits

0x99cf,	// (0x000514ab) phob2_cc_listscroll_pane

0x99f0,	// (0x000514cc) list_double_large_graphic_phob2_pane_ParamLimits

0x99f0,	// (0x000514cc) list_double_large_graphic_phob2_pane

0x9a04,	// (0x000514e0) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a04,	// (0x000514e0) list_double_large_graphic_phob2_pane_g1

0x0a2f,	// (0x0004850b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0a2f,	// (0x0004850b) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd5,	// (0x000578b1) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd5,	// (0x000578b1) list_double_large_graphic_phob2_pane_g

0x0a55,	// (0x00048531) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x0a55,	// (0x00048531) list_double_large_graphic_phob2_pane_t1

0x0a6a,	// (0x00048546) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0a6a,	// (0x00048546) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x000578ba) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x000578ba) list_double_large_graphic_phob2_pane_t

0xdf1f,	// (0x000559fb) list_highlight_pane_cp024

0x9a11,	// (0x000514ed) phob2_cc_button_pane

0x9a1d,	// (0x000514f9) phob2_cc_data_pane_g1_ParamLimits

0x9a1d,	// (0x000514f9) phob2_cc_data_pane_g1

0x9a33,	// (0x0005150f) phob2_cc_data_pane_g2_ParamLimits

0x9a33,	// (0x0005150f) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x000578bf) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x000578bf) phob2_cc_data_pane_g

0x9a4b,	// (0x00051527) phob2_cc_data_pane_t1_ParamLimits

0x9a4b,	// (0x00051527) phob2_cc_data_pane_t1

0x9a7b,	// (0x00051557) phob2_cc_data_pane_t2_ParamLimits

0x9a7b,	// (0x00051557) phob2_cc_data_pane_t2

0x9aab,	// (0x00051587) phob2_cc_data_pane_t3_ParamLimits

0x9aab,	// (0x00051587) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x000578c4) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x000578c4) phob2_cc_data_pane_t

0xe830,	// (0x0005630c) phob2_cc_list_pane_ParamLimits

0xe830,	// (0x0005630c) phob2_cc_list_pane

0xd215,	// (0x00054cf1) scroll_pane_cp035_ParamLimits

0xd215,	// (0x00054cf1) scroll_pane_cp035

0x0cd1,	// (0x000487ad) bg_button_pane_cp033

0x9adb,	// (0x000515b7) phob2_cc_button_pane_g1

0x9ae7,	// (0x000515c3) phob2_cc_button_pane_t1

0x9afc,	// (0x000515d8) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x000578cb) phob2_cc_button_pane_t

0x9b0e,	// (0x000515ea) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9b0e,	// (0x000515ea) list_double_large_graphic_phob2_cc_pane

0x9b45,	// (0x00051621) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b45,	// (0x00051621) list_double_large_graphic_phob2_cc_pane_g1

0x0a7f,	// (0x0004855b) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x0a7f,	// (0x0004855b) list_double_large_graphic_phob2_cc_pane_g2

0x0a8b,	// (0x00048567) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x0a8b,	// (0x00048567) list_double_large_graphic_phob2_cc_pane_g3

0x0a97,	// (0x00048573) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x0a97,	// (0x00048573) list_double_large_graphic_phob2_cc_pane_g4

0x0aa3,	// (0x0004857f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x0aa3,	// (0x0004857f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x000578d0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x000578d0) list_double_large_graphic_phob2_cc_pane_g

0x0aaf,	// (0x0004858b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x0aaf,	// (0x0004858b) list_double_large_graphic_phob2_cc_pane_t1

0x0ad8,	// (0x000485b4) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x0ad8,	// (0x000485b4) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x000578db) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x000578db) list_double_large_graphic_phob2_cc_pane_t

0xe83c,	// (0x00056318) list_highlight_pane_cp025_ParamLimits

0xe83c,	// (0x00056318) list_highlight_pane_cp025

0x0cd1,	// (0x000487ad) bg_button_pane_cp033_ParamLimits

0x9adb,	// (0x000515b7) phob2_cc_button_pane_g1_ParamLimits

0x9ae7,	// (0x000515c3) phob2_cc_button_pane_t1_ParamLimits

0x9afc,	// (0x000515d8) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x000578cb) phob2_cc_button_pane_t_ParamLimits

0x0cdf,	// (0x000487bb) popup_wgtman_window

0xc9b1,	// (0x0005448d) scroll_pane_cp038

0x94a2,	// (0x00050f7e) wgtman_btn_pane_cp_01_ParamLimits

0x94a2,	// (0x00050f7e) wgtman_btn_pane_cp_01

0xe84a,	// (0x00056326) wgtman_content_pane

0xe853,	// (0x0005632f) wgtman_heading_pane

0xdf1f,	// (0x000559fb) bg_heading_pane_cp02

0xe85c,	// (0x00056338) wgtman_heading_pane_g1

0xe864,	// (0x00056340) wgtman_heading_pane_t1

0xe872,	// (0x0005634e) scroll_pane_cp036

0xe87a,	// (0x00056356) wgtman_list_pane

0xe2ca,	// (0x00055da6) wgtman_list_pane_t1_ParamLimits

0xe2ca,	// (0x00055da6) wgtman_list_pane_t1

0xc728,	// (0x00054204) cam4_grid_pane

0x03da,	// (0x00047eb6) bg_button_pane_cp015_ParamLimits

0x78d0,	// (0x0004f3ac) bg_button_pane_cp016_ParamLimits

0x78dc,	// (0x0004f3b8) bg_button_pane_cp017_ParamLimits

0x78f7,	// (0x0004f3d3) popup_vitu2_query_window_g3_ParamLimits

0x78f7,	// (0x0004f3d3) popup_vitu2_query_window_g3

0x04a0,	// (0x00047f7c) popup_vitu2_query_window_t6_ParamLimits

0x04a0,	// (0x00047f7c) popup_vitu2_query_window_t6

0x04cb,	// (0x00047fa7) popup_vitu2_query_window_t7_ParamLimits

0x04cb,	// (0x00047fa7) popup_vitu2_query_window_t7

0xe2b6,	// (0x00055d92) cam4_grid_pane_g1

0xe2bf,	// (0x00055d9b) cam4_grid_pane_g2

0xe882,	// (0x0005635e) cam4_grid_pane_g3

0xe88b,	// (0x00056367) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x000578e0) cam4_grid_pane_g

0x1c2d,	// (0x00049709) aid_placing_vt_slider_lsc_ParamLimits

0x1f6e,	// (0x00049a4a) vidtel_button_pane_ParamLimits

0x1f6e,	// (0x00049a4a) vidtel_button_pane

0xdf1f,	// (0x000559fb) bg_button_pane_cp034

0xe896,	// (0x00056372) vidtel_button_pane_g1

0xe89e,	// (0x0005637a) vidtel_button_pane_t1

0xcae3,	// (0x000545bf) aid_size_vtel_slider_touch

0xd215,	// (0x00054cf1) scroll_pane_cp039

0x851f,	// (0x0004fffb) ncim_query_button_pane_cp01_ParamLimits

0x853e,	// (0x0005001a) ncimui_query_pane_g1_ParamLimits

0x0cd1,	// (0x000487ad) input_focus_pane_cp012_ParamLimits

0xd8c0,	// (0x0005539c) ncim_query_entry_pane_t1_ParamLimits

0xd215,	// (0x00054cf1) scroll_pane_cp039_ParamLimits

0x38af,	// (0x0004b38b) navi_pane_bcale_mc_g1

0x38b7,	// (0x0004b393) navi_pane_bcale_mc_t1

0xdc82,	// (0x0005575e) main_sp_fs_email_pane_g1

0xdc8e,	// (0x0005576a) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x000576de) main_sp_fs_email_pane_g

0xdf04,	// (0x000559e0) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdf04,	// (0x000559e0) list_single_cale_mrui_row_pane_g3

0x0977,	// (0x00048453) list_single_recal_day_pane_g5_event_pane

0xd1aa,	// (0x00054c86) list_single_recal_day_pane_g7

0xe8b4,	// (0x00056390) list_recal_day_event_pane_cp01

0xe8bd,	// (0x00056399) list_recal_vselct_arw_lo_pane_cp01

0xe8c5,	// (0x000563a1) list_recal_vselct_arw_up_pane_cp01

0xe8cd,	// (0x000563a9) list_recal_vselct_pane_cp01

0xcb2f,	// (0x0005460b) list_recal_day_event_pane_cp01_g1

0xd1df,	// (0x00054cbb) list_recal_day_event_pane_cp01_t1

0xd1b2,	// (0x00054c8e) list_single_recal_day_pane_t1_ParamLimits

0xd1c4,	// (0x00054ca0) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x000577c3) list_single_recal_day_pane_t_ParamLimits

0x0e6c,	// (0x00048948) bg_notes_pane_ParamLimits

0x0ff7,	// (0x00048ad3) list_notes_pane_ParamLimits

0x1005,	// (0x00048ae1) scroll_pane_cp06_ParamLimits

0x102d,	// (0x00048b09) main_notes_pane_ParamLimits

0x0cd1,	// (0x000487ad) main_welc_pane

0x9b7f,	// (0x0005165b) main_welc_body_pane_ParamLimits

0x9b7f,	// (0x0005165b) main_welc_body_pane

0x9b9e,	// (0x0005167a) main_welc_opti_pane_ParamLimits

0x9b9e,	// (0x0005167a) main_welc_opti_pane

0x9c2c,	// (0x00051708) main_welc_pane_t1_ParamLimits

0x9c2c,	// (0x00051708) main_welc_pane_t1

0x9e54,	// (0x00051930) main_welc_body_row_pane_ParamLimits

0x9e54,	// (0x00051930) main_welc_body_row_pane

0x0ed9,	// (0x000489b5) main_welc_opti_row_pane_ParamLimits

0x0ed9,	// (0x000489b5) main_welc_opti_row_pane

0xe8e7,	// (0x000563c3) main_welc_opti_row_pane_g1

0x9e68,	// (0x00051944) main_welc_opti_row_pane_t1

0xe8ef,	// (0x000563cb) main_welc_body_row_pane_t1

0xe64e,	// (0x0005612a) popup_notif_wgt_heading_pane

0xe668,	// (0x00056144) aid_size_list_notif_wgt_del_ParamLimits

0xe675,	// (0x00056151) list_notif_wgt_row_pane_g1_ParamLimits

0xe681,	// (0x0005615d) list_notif_wgt_row_pane_g2_ParamLimits

0xe690,	// (0x0005616c) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x0005782a) list_notif_wgt_row_pane_g_ParamLimits

0xe69d,	// (0x00056179) list_notif_wgt_row_pane_t1_ParamLimits

0xe6b3,	// (0x0005618f) list_notif_wgt_row_pane_t2_ParamLimits

0xe6c5,	// (0x000561a1) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x00057831) list_notif_wgt_row_pane_t_ParamLimits

0x953d,	// (0x00051019) listrow_wgtman_pane_g1_ParamLimits

0x954a,	// (0x00051026) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x00057861) listrow_wgtman_pane_g_ParamLimits

0x09df,	// (0x000484bb) listrow_wgtman_pane_t1_ParamLimits

0x09f7,	// (0x000484d3) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x00057866) listrow_wgtman_pane_t_ParamLimits

0x0a1d,	// (0x000484f9) wait_bar_pane_cp09_ParamLimits

0xdf1f,	// (0x000559fb) bg_popup_heading_pane_cp02

0xe8fe,	// (0x000563da) popup_notif_wgt_heading_pane_g1

0xe906,	// (0x000563e2) popup_notif_wgt_heading_pane_t1

0xdf1f,	// (0x000559fb) main_vids_pane

0xdf1f,	// (0x000559fb) vids_listscroll_pane

0x9e77,	// (0x00051953) scroll_pane_cp040

0xdf1f,	// (0x000559fb) vids_list_pane

0x9e82,	// (0x0005195e) vids_list_double_pane_ParamLimits

0x9e82,	// (0x0005195e) vids_list_double_pane

0x9e95,	// (0x00051971) vids_list_double_pane_g1

0x9e9e,	// (0x0005197a) vids_list_double_pane_t1

0x9eae,	// (0x0005198a) vids_list_double_pane_t2

0x0001,

0xfe23,	// (0x000578ff) vids_list_double_pane_t

0x0cd1,	// (0x000487ad) main_ncimui_pane_ParamLimits

0x8355,	// (0x0004fe31) main_ncimui_pane_g1_ParamLimits

0x8361,	// (0x0004fe3d) main_ncimui_pane_g2_ParamLimits

0x8361,	// (0x0004fe3d) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x000575e4) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x000575e4) main_ncimui_pane_g

0x9bbd,	// (0x00051699) main_welc_pane_g1_ParamLimits

0x9bbd,	// (0x00051699) main_welc_pane_g1

0x9bd2,	// (0x000516ae) main_welc_pane_g2_ParamLimits

0x9bd2,	// (0x000516ae) main_welc_pane_g2

0x0003,

0xfe0d,	// (0x000578e9) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x000578e9) main_welc_pane_g

0x0e6c,	// (0x00048948) listscroll_mce_pane_ParamLimits

0x3a46,	// (0x0004b522) wait_bar_pane_cp10

0xb73f,	// (0x0005321b) main_cale_day_pane_ParamLimits

0xb73f,	// (0x0005321b) main_cale_week_pane_ParamLimits

0x0e6c,	// (0x00048948) main_messa_pane_ParamLimits

0x6113,	// (0x0004dbef) main_clock2_btn_pane_ParamLimits

0x6113,	// (0x0004dbef) main_clock2_btn_pane

0xbfc0,	// (0x00053a9c) main_clock2_btn_pane_cp01_ParamLimits

0xbfc0,	// (0x00053a9c) main_clock2_btn_pane_cp01

0xded5,	// (0x000559b1) list_cale_mrui_pane_ParamLimits

0xe6fb,	// (0x000561d7) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x00057838) main_cf0_pane_g

0x9776,	// (0x00051252) area_left_week_number_pane_ParamLimits

0x9784,	// (0x00051260) area_top_day_name_pane_ParamLimits

0x9797,	// (0x00051273) frame_month_view_pane_ParamLimits

0xe7e5,	// (0x000562c1) grid_month_view_pane_ParamLimits

0xe7f3,	// (0x000562cf) frm_month_g1_ParamLimits

0x9822,	// (0x000512fe) frm_month_g2_ParamLimits

0x9835,	// (0x00051311) frm_month_g3_ParamLimits

0x9848,	// (0x00051324) frm_month_g4_ParamLimits

0x985b,	// (0x00051337) frm_month_g5_ParamLimits

0x986e,	// (0x0005134a) frm_month_g6_ParamLimits

0x9883,	// (0x0005135f) frm_month_g7_ParamLimits

0xe800,	// (0x000562dc) frm_month_g8_ParamLimits

0x9898,	// (0x00051374) frm_month_g9_ParamLimits

0x98a8,	// (0x00051384) frm_month_g10_ParamLimits

0x98b8,	// (0x00051394) frm_month_g11_ParamLimits

0x98c8,	// (0x000513a4) frm_month_g12_ParamLimits

0x98da,	// (0x000513b6) frm_month_g13_ParamLimits

0x98ee,	// (0x000513ca) frm_month_g14_ParamLimits

0x9902,	// (0x000513de) frm_month_g15_ParamLimits

0x9916,	// (0x000513f2) frm_month_g16_ParamLimits

0xfdb4,	// (0x00057890) frm_month_g_ParamLimits

0xe80d,	// (0x000562e9) cell_top_day_name_pane_t1_ParamLimits

0x992a,	// (0x00051406) cell_area_left_week_number_pane_g1_ParamLimits

0x9936,	// (0x00051412) cell_area_left_week_number_pane_t1_ParamLimits

0x0ee7,	// (0x000489c3) cell_month_view_pane_g1_ParamLimits

0x9949,	// (0x00051425) cell_month_view_pane_t1_ParamLimits

0x0e64,	// (0x00048940) main_clock2_btn_pane_g1

0xe914,	// (0x000563f0) main_clock2_btn_pane_t1

0x0cd1,	// (0x000487ad) listscroll_cmail_pane_ParamLimits

0xdc82,	// (0x0005575e) main_sp_fs_email_pane_g1_ParamLimits

0xdc8e,	// (0x0005576a) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x000576de) main_sp_fs_email_pane_g_ParamLimits

0xe3d8,	// (0x00055eb4) list_recal_day_pane_ParamLimits

0xe3e9,	// (0x00055ec5) mian_recal_day_pane_t1

0x0770,	// (0x0004824c) list_single_dyc_row_text_pane_t4_ParamLimits

0x0770,	// (0x0004824c) list_single_dyc_row_text_pane_t4

0x07b9,	// (0x00048295) list_single_dyc_row_text_pane_t5_ParamLimits

0x07b9,	// (0x00048295) list_single_dyc_row_text_pane_t5

0xcf88,	// (0x00054a64) list_single_dyc_row_text_pane_t6_ParamLimits

0xcf88,	// (0x00054a64) list_single_dyc_row_text_pane_t6

0x305c,	// (0x0004ab38) aid_mgn_list_cale_time_pane

0x0cd1,	// (0x000487ad) main_gallery2_pane_ParamLimits

0xbfd4,	// (0x00053ab0) main_clock2_pane_cp01_t1

0xbfe2,	// (0x00053abe) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x000571ce) main_clock2_pane_cp01_t

0x1554,	// (0x00049030) cale_week_scroll_pane_g16_ParamLimits

0x1554,	// (0x00049030) cale_week_scroll_pane_g16

0x199b,	// (0x00049477) vorec_slider_pane

0xe89e,	// (0x0005637a) vidtel_button_pane_t1_ParamLimits

0x90e0,	// (0x00050bbc) main_fs_bigclock_clock_pane_g1_ParamLimits

0x90e0,	// (0x00050bbc) main_fs_bigclock_clock_pane_g2_ParamLimits

0x90f3,	// (0x00050bcf) main_fs_bigclock_clock_pane_g3_ParamLimits

0x90f3,	// (0x00050bcf) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x000577e6) main_fs_bigclock_clock_pane_g_ParamLimits

0x910a,	// (0x00050be6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x9120,	// (0x00050bfc) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x000577ef) main_fs_bigclock_clock_pane_t_ParamLimits

0x5960,	// (0x0004d43c) main_mup3_lyrics_pane_ParamLimits

0x5960,	// (0x0004d43c) main_mup3_lyrics_pane

0x9ed6,	// (0x000519b2) main_mup3_lyrics_pane_t1_ParamLimits

0x9ed6,	// (0x000519b2) main_mup3_lyrics_pane_t1

0xc36b,	// (0x00053e47) aid_main_mp4_pane_t1_area

0xc375,	// (0x00053e51) aid_main_mp4_pane_t2_area

0xc41f,	// (0x00053efb) main_mp4_pane_g7_ParamLimits

0xc41f,	// (0x00053efb) main_mp4_pane_g7

0xc42b,	// (0x00053f07) main_mp4_pane_g8_ParamLimits

0xc42b,	// (0x00053f07) main_mp4_pane_g8

0x6a2c,	// (0x0004e508) aid_call6_pane_g1_size

0x9b2d,	// (0x00051609) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9b2d,	// (0x00051609) list_double_large_graphic_phob2_other_pane

0x3014,	// (0x0004aaf0) list_double_large_graphic_phob2_other_pane_g1

0xdf1f,	// (0x000559fb) list_highlight_pane_cp026

0x0cd1,	// (0x000487ad) main_welc_pane_ParamLimits

0x8ad9,	// (0x000505b5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8ad9,	// (0x000505b5) main_sp_fs_ctrlbar_pane_g3

0x8af3,	// (0x000505cf) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8af3,	// (0x000505cf) main_sp_fs_ctrlbar_pane_g4

0x8b27,	// (0x00050603) toolbar2_fixed_button_pane_cp01

0x8b32,	// (0x0005060e) toolbar2_fixed_button_pane_cp02

0x8b3f,	// (0x0005061b) toolbar2_fixed_button_pane_cp03

0x9b64,	// (0x00051640) list_welc_entry_pane_ParamLimits

0x9b64,	// (0x00051640) list_welc_entry_pane

0x9be7,	// (0x000516c3) main_welc_pane_g3_ParamLimits

0x9be7,	// (0x000516c3) main_welc_pane_g3

0x9c4e,	// (0x0005172a) main_welc_pane_t2_ParamLimits

0x9c4e,	// (0x0005172a) main_welc_pane_t2

0x9c71,	// (0x0005174d) main_welc_pane_t3_ParamLimits

0x9c71,	// (0x0005174d) main_welc_pane_t3

0x0005,

0xfe16,	// (0x000578f2) main_welc_pane_t_ParamLimits

0xfe16,	// (0x000578f2) main_welc_pane_t

0x9da9,	// (0x00051885) welc_button_pane_ParamLimits

0x9da9,	// (0x00051885) welc_button_pane

0x9e3c,	// (0x00051918) welc_service_logo_pane_ParamLimits

0x9e3c,	// (0x00051918) welc_service_logo_pane

0x9ef1,	// (0x000519cd) list_single_welc_entry_pane_ParamLimits

0x9ef1,	// (0x000519cd) list_single_welc_entry_pane

0x9f02,	// (0x000519de) list_single_welc_entry_pane_g1

0x9f0a,	// (0x000519e6) list_single_welc_entry_pane_t1

0x9f18,	// (0x000519f4) list_single_welc_entry_pane_t2

0x0001,

0xfe28,	// (0x00057904) list_single_welc_entry_pane_t

0xdf1f,	// (0x000559fb) bg_button_pane_cp035

0xe922,	// (0x000563fe) welc_button_pane_t1

0x9f26,	// (0x00051a02) welc_service_logo_pane_g1

0x9f2f,	// (0x00051a0b) welc_service_logo_pane_g2

0x0001,

0xfe2d,	// (0x00057909) welc_service_logo_pane_g

0xdf1f,	// (0x000559fb) main_int_radio_pane

0xd75e,	// (0x0005523a) list_single_fs_dyc_pane_g1

0x0a3b,	// (0x00048517) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x0a3b,	// (0x00048517) list_double_large_graphic_phob2_pane_g3

0x0a47,	// (0x00048523) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x0a47,	// (0x00048523) list_double_large_graphic_phob2_pane_g4

0x9f38,	// (0x00051a14) main_int_radio1_pane_ParamLimits

0x9f38,	// (0x00051a14) main_int_radio1_pane

0xe930,	// (0x0005640c) find_pane_cp02

0x9f55,	// (0x00051a31) input_focus_pane_cp12_ParamLimits

0x9f55,	// (0x00051a31) input_focus_pane_cp12

0x9f65,	// (0x00051a41) input_focus_pane_cp13_ParamLimits

0x9f65,	// (0x00051a41) input_focus_pane_cp13

0x9f79,	// (0x00051a55) input_focus_pane_cp14_ParamLimits

0x9f79,	// (0x00051a55) input_focus_pane_cp14

0xe939,	// (0x00056415) int_radio1_listscroll_pane

0x9f8d,	// (0x00051a69) main_int_radio1_pane_g1_ParamLimits

0x9f8d,	// (0x00051a69) main_int_radio1_pane_g1

0x9fa3,	// (0x00051a7f) main_int_radio1_pane_t1_ParamLimits

0x9fa3,	// (0x00051a7f) main_int_radio1_pane_t1

0x9fbc,	// (0x00051a98) main_int_radio1_pane_t2_ParamLimits

0x9fbc,	// (0x00051a98) main_int_radio1_pane_t2

0x9fd7,	// (0x00051ab3) main_int_radio1_pane_t3_ParamLimits

0x9fd7,	// (0x00051ab3) main_int_radio1_pane_t3

0x9ff2,	// (0x00051ace) main_int_radio1_pane_t4_ParamLimits

0x9ff2,	// (0x00051ace) main_int_radio1_pane_t4

0xe943,	// (0x0005641f) main_int_radio1_pane_t5_ParamLimits

0xe943,	// (0x0005641f) main_int_radio1_pane_t5

0xa004,	// (0x00051ae0) main_int_radio1_pane_t6_ParamLimits

0xa004,	// (0x00051ae0) main_int_radio1_pane_t6

0xa019,	// (0x00051af5) main_int_radio1_pane_t7_ParamLimits

0xa019,	// (0x00051af5) main_int_radio1_pane_t7

0xa02e,	// (0x00051b0a) main_int_radio1_pane_t8_ParamLimits

0xa02e,	// (0x00051b0a) main_int_radio1_pane_t8

0xa04b,	// (0x00051b27) main_int_radio1_pane_t9_ParamLimits

0xa04b,	// (0x00051b27) main_int_radio1_pane_t9

0xa05d,	// (0x00051b39) main_int_radio1_pane_t10_ParamLimits

0xa05d,	// (0x00051b39) main_int_radio1_pane_t10

0xa083,	// (0x00051b5f) main_int_radio1_pane_t11_ParamLimits

0xa083,	// (0x00051b5f) main_int_radio1_pane_t11

0xa0a9,	// (0x00051b85) main_int_radio1_pane_t12_ParamLimits

0xa0a9,	// (0x00051b85) main_int_radio1_pane_t12

0x000b,

0xfe32,	// (0x0005790e) main_int_radio1_pane_t_ParamLimits

0xfe32,	// (0x0005790e) main_int_radio1_pane_t

0xe820,	// (0x000562fc) int_radio_list_pane

0xe828,	// (0x00056304) scroll_pane_cp037

0xe955,	// (0x00056431) list_double_large_graphic_int_radio_pane_ParamLimits

0xe955,	// (0x00056431) list_double_large_graphic_int_radio_pane

0xe969,	// (0x00056445) list_double_large_graphic_int_radio_pane_g1

0xd1ed,	// (0x00054cc9) list_double_large_graphic_int_radio_pane_t1

0xd1fb,	// (0x00054cd7) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4b,	// (0x00057927) list_double_large_graphic_int_radio_pane_t

0xdf1f,	// (0x000559fb) list_highlight_pane_cp027

0xe8d7,	// (0x000563b3) main_button_pane_4

0x9bfb,	// (0x000516d7) main_welc_pane_g4_ParamLimits

0x9bfb,	// (0x000516d7) main_welc_pane_g4

0x9c94,	// (0x00051770) main_welc_pane_t4_ParamLimits

0x9c94,	// (0x00051770) main_welc_pane_t4

0x9cab,	// (0x00051787) main_welc_pane_t5_ParamLimits

0x9cab,	// (0x00051787) main_welc_pane_t5

0x9cea,	// (0x000517c6) main_welc_pane_t6_ParamLimits

0x9cea,	// (0x000517c6) main_welc_pane_t6

0x9dbe,	// (0x0005189a) welc_button_pane_2_ParamLimits

0x9dbe,	// (0x0005189a) welc_button_pane_2

0x9de1,	// (0x000518bd) welc_button_pane_3_ParamLimits

0x9de1,	// (0x000518bd) welc_button_pane_3

0xe8df,	// (0x000563bb) welc_button_pane_4

0x9e09,	// (0x000518e5) welc_button_pane_5_ParamLimits

0x9e09,	// (0x000518e5) welc_button_pane_5

0x0b3d,	// (0x00048619) main_popup_welc_pane

0xe98a,	// (0x00056466) main_welc_sk_g3

0xe994,	// (0x00056470) main_welc_sk_g4

0xe99e,	// (0x0005647a) main_welc_sk_t3

0xe9ae,	// (0x0005648a) main_welc_sk_t4

0xe9be,	// (0x0005649a) popup_welc_pane_t4

0xe9cc,	// (0x000564a8) popup_welc_pane_t5

0xe9da,	// (0x000564b6) popup_welc_pane_t6

0xdf1f,	// (0x000559fb) main_acti_pane

0xdf1f,	// (0x000559fb) main_sso_pane

0xa0bb,	// (0x00051b97) sso_body_pane_ParamLimits

0xa0bb,	// (0x00051b97) sso_body_pane

0xa0d0,	// (0x00051bac) sso_logo_pane_ParamLimits

0xa0d0,	// (0x00051bac) sso_logo_pane

0xa109,	// (0x00051be5) sso_sk_pane_ParamLimits

0xa109,	// (0x00051be5) sso_sk_pane

0xea1c,	// (0x000564f8) main_sso_logo_pane_g1

0xa11b,	// (0x00051bf7) sso_sk_pane_t1_ParamLimits

0xa11b,	// (0x00051bf7) sso_sk_pane_t1

0xa135,	// (0x00051c11) sso_sk_pane_t2_ParamLimits

0xa135,	// (0x00051c11) sso_sk_pane_t2

0x0001,

0xfe50,	// (0x0005792c) sso_sk_pane_t_ParamLimits

0xfe50,	// (0x0005792c) sso_sk_pane_t

0xea27,	// (0x00056503) aid_sso_gap

0xea30,	// (0x0005650c) aid_sso_txt1

0xea3a,	// (0x00056516) aid_sso_txt2

0xea44,	// (0x00056520) aid_sso_txt3

0x0002,

0x010f,	// (0x00047beb) aid_sso_txt

0xea4e,	// (0x0005652a) aid_sso_widget

0xa19f,	// (0x00051c7b) sso_btn_pane_ParamLimits

0xa19f,	// (0x00051c7b) sso_btn_pane

0xa223,	// (0x00051cff) sso_option_pane_ParamLimits

0xa223,	// (0x00051cff) sso_option_pane

0xa2e1,	// (0x00051dbd) sso_query_pane_ParamLimits

0xa2e1,	// (0x00051dbd) sso_query_pane

0xa337,	// (0x00051e13) sso_query_pane_cp01_ParamLimits

0xa337,	// (0x00051e13) sso_query_pane_cp01

0xa397,	// (0x00051e73) sso_t_hdr_pane_ParamLimits

0xa397,	// (0x00051e73) sso_t_hdr_pane

0xa3c1,	// (0x00051e9d) sso_t_nml_pane_ParamLimits

0xa3c1,	// (0x00051e9d) sso_t_nml_pane

0xea58,	// (0x00056534) sso_t_sub_pane

0xa0dd,	// (0x00051bb9) sso_popup_window_ParamLimits

0xa0dd,	// (0x00051bb9) sso_popup_window

0xa14b,	// (0x00051c27) sso_apps_pane_ParamLimits

0xa14b,	// (0x00051c27) sso_apps_pane

0xa175,	// (0x00051c51) sso_body_pane_g1

0xa17f,	// (0x00051c5b) sso_body_pane_t1

0xa18f,	// (0x00051c6b) sso_body_pane_t2

0x0001,

0xfe55,	// (0x00057931) sso_body_pane_t

0xa1eb,	// (0x00051cc7) sso_btn_pane_cp01_ParamLimits

0xa1eb,	// (0x00051cc7) sso_btn_pane_cp01

0xa2b5,	// (0x00051d91) sso_prog_pane_ParamLimits

0xa2b5,	// (0x00051d91) sso_prog_pane

0xa417,	// (0x00051ef3) sso_t_hdr_pane_t1_ParamLimits

0xa417,	// (0x00051ef3) sso_t_hdr_pane_t1

0xea6d,	// (0x00056549) input_focus_pane_cp10_ParamLimits

0xea6d,	// (0x00056549) input_focus_pane_cp10

0xea81,	// (0x0005655d) sso_query_pane_t1_ParamLimits

0xea81,	// (0x0005655d) sso_query_pane_t1

0xea94,	// (0x00056570) sso_query_pane_t2_ParamLimits

0xea94,	// (0x00056570) sso_query_pane_t2

0xeaae,	// (0x0005658a) sso_query_pane_t3_ParamLimits

0xeaae,	// (0x0005658a) sso_query_pane_t3

0xead8,	// (0x000565b4) sso_query_pane_t4_ParamLimits

0xead8,	// (0x000565b4) sso_query_pane_t4

0x0003,

0x011b,	// (0x00047bf7) sso_query_pane_t_ParamLimits

0x011b,	// (0x00047bf7) sso_query_pane_t

0xe981,	// (0x0005645d) bg_button_pane_cp22

0xe972,	// (0x0005644e) sso_btn_pane_t1

0xa42a,	// (0x00051f06) sso_t_nml_pane_t1_ParamLimits

0xa42a,	// (0x00051f06) sso_t_nml_pane_t1

0xeafc,	// (0x000565d8) sso_option_row_pane_ParamLimits

0xeafc,	// (0x000565d8) sso_option_row_pane

0xeb09,	// (0x000565e5) sso_t_sub_pane_t1_ParamLimits

0xeb09,	// (0x000565e5) sso_t_sub_pane_t1

0x0cd1,	// (0x000487ad) bg_popup_window_pane_cp11_ParamLimits

0x0cd1,	// (0x000487ad) bg_popup_window_pane_cp11

0xeb26,	// (0x00056602) popup_sk_window_cp01_ParamLimits

0xeb26,	// (0x00056602) popup_sk_window_cp01

0xeb33,	// (0x0005660f) sso_popup_body_pane_ParamLimits

0xeb33,	// (0x0005660f) sso_popup_body_pane

0xeb40,	// (0x0005661c) scroll_pane_cp21_ParamLimits

0xeb40,	// (0x0005661c) scroll_pane_cp21

0xeb4d,	// (0x00056629) sso_popup_body_t_pane_ParamLimits

0xeb4d,	// (0x00056629) sso_popup_body_t_pane

0xeb5a,	// (0x00056636) sso_popup_body_t_hdr_pane_ParamLimits

0xeb5a,	// (0x00056636) sso_popup_body_t_hdr_pane

0xa445,	// (0x00051f21) sso_popup_body_t_nml_pane_ParamLimits

0xa445,	// (0x00051f21) sso_popup_body_t_nml_pane

0xa46c,	// (0x00051f48) sso_popup_body_t_sub_pane_ParamLimits

0xa46c,	// (0x00051f48) sso_popup_body_t_sub_pane

0xeb6c,	// (0x00056648) sso_popup_body_t_hdr_pane_t1

0xa48f,	// (0x00051f6b) sso_popup_body_t_nml_pane_t1_ParamLimits

0xa48f,	// (0x00051f6b) sso_popup_body_t_nml_pane_t1

0xeb7c,	// (0x00056658) sso_popup_body_t_sub_pane_t1_ParamLimits

0xeb7c,	// (0x00056658) sso_popup_body_t_sub_pane_t1

0x0fbb,	// (0x00048a97) sso_prog_pane_g1

0xa4c7,	// (0x00051fa3) sso_apps_pane_comp1_ParamLimits

0xa4c7,	// (0x00051fa3) sso_apps_pane_comp1

0xeba1,	// (0x0005667d) sso_apps_pane_comp1_g1

0xeba9,	// (0x00056685) sso_apps_pane_comp1_t1

0xebc5,	// (0x000566a1) sso_option_row_pane_g1

0xebcd,	// (0x000566a9) sso_option_row_pane_t1

0xdd18,	// (0x000557f4) list_cmail_pane_ParamLimits

0xdf1f,	// (0x000559fb) main_call7_pane

0x9b51,	// (0x0005162d) bg_welc_area_ParamLimits

0x9b51,	// (0x0005162d) bg_welc_area

0x9d28,	// (0x00051804) sso_t_hdr_pane_a_t1_ParamLimits

0x9d28,	// (0x00051804) sso_t_hdr_pane_a_t1

0x9d41,	// (0x0005181d) sso_t_nml_pane_a_t1_ParamLimits

0x9d41,	// (0x0005181d) sso_t_nml_pane_a_t1

0x9d70,	// (0x0005184c) sso_t_sub_pane_a_t1_ParamLimits

0x9d70,	// (0x0005184c) sso_t_sub_pane_a_t1

0x9e22,	// (0x000518fe) welc_button_pane_cp01_ParamLimits

0x9e22,	// (0x000518fe) welc_button_pane_cp01

0xe972,	// (0x0005644e) sso_btn_pane_t1_copy1

0xe981,	// (0x0005645d) welc_button_pane_2_comp1

0xe9ea,	// (0x000564c6) sso_t_hdr_pane_p_t1

0xe9fa,	// (0x000564d6) sso_t_nml_pane_p_t1

0xea0a,	// (0x000564e6) sso_t_sub_pane_p_t1

0xdf1f,	// (0x000559fb) main_att_pane

0xdf1f,	// (0x000559fb) main_vod_pane

0xea58,	// (0x00056534) sso_t_sub_pane_ParamLimits

0xebb7,	// (0x00056693) input_focus_pane_cp10_t1

0xebcd,	// (0x000566a9) sso_option_row_pane_t1_ParamLimits

0xa4e1,	// (0x00051fbd) main_att_body_pane_ParamLimits

0xa4e1,	// (0x00051fbd) main_att_body_pane

0xa4f7,	// (0x00051fd3) att_btn_emg_pane_ParamLimits

0xa4f7,	// (0x00051fd3) att_btn_emg_pane

0xa516,	// (0x00051ff2) att_btn_pane_ParamLimits

0xa516,	// (0x00051ff2) att_btn_pane

0xa58b,	// (0x00052067) att_btn_pane_cp01_ParamLimits

0xa58b,	// (0x00052067) att_btn_pane_cp01

0xa5ab,	// (0x00052087) att_li_srv_pane_ParamLimits

0xa5ab,	// (0x00052087) att_li_srv_pane

0xa5c8,	// (0x000520a4) att_opt_pane_ParamLimits

0xa5c8,	// (0x000520a4) att_opt_pane

0xa612,	// (0x000520ee) att_query_pane_ParamLimits

0xa612,	// (0x000520ee) att_query_pane

0xa68b,	// (0x00052167) att_query_pane_cp01_ParamLimits

0xa68b,	// (0x00052167) att_query_pane_cp01

0xa6d7,	// (0x000521b3) att_t_hdr_pane_ParamLimits

0xa6d7,	// (0x000521b3) att_t_hdr_pane

0xa747,	// (0x00052223) att_t_nml_pane_ParamLimits

0xa747,	// (0x00052223) att_t_nml_pane

0xa7c1,	// (0x0005229d) att_t_nml_pane_cp01_ParamLimits

0xa7c1,	// (0x0005229d) att_t_nml_pane_cp01

0xa7ef,	// (0x000522cb) att_t_nmlb_pane_ParamLimits

0xa7ef,	// (0x000522cb) att_t_nmlb_pane

0xa85c,	// (0x00052338) att_term_pane_ParamLimits

0xa85c,	// (0x00052338) att_term_pane

0xa8a8,	// (0x00052384) main_att_body_pane_g1_ParamLimits

0xa8a8,	// (0x00052384) main_att_body_pane_g1

0xebe6,	// (0x000566c2) att_t_hdr_pane_t1_ParamLimits

0xebe6,	// (0x000566c2) att_t_hdr_pane_t1

0xebff,	// (0x000566db) att_t_nml_pane_t1_ParamLimits

0xebff,	// (0x000566db) att_t_nml_pane_t1

0xee2f,	// (0x0005690b) att_btn_pane_t1

0xe981,	// (0x0005645d) bg_button_pane_cp23

0xa8d6,	// (0x000523b2) att_li_srv_row_pane_ParamLimits

0xa8d6,	// (0x000523b2) att_li_srv_row_pane

0xee3f,	// (0x0005691b) att_t_nmlb_pane_t1_ParamLimits

0xee3f,	// (0x0005691b) att_t_nmlb_pane_t1

0xee5d,	// (0x00056939) att_query_pane_t1

0xee6c,	// (0x00056948) att_query_pane_t2

0xee7b,	// (0x00056957) att_query_pane_t3

0x0002,

0xfe5a,	// (0x00057936) att_query_pane_t

0xee8a,	// (0x00056966) input_focus_pane_cp11

0xee93,	// (0x0005696f) att_term_pane_t1_ParamLimits

0xee93,	// (0x0005696f) att_term_pane_t1

0xdf1f,	// (0x000559fb) att_opt_row_pane

0xebc5,	// (0x000566a1) att_opt_row_pane_g1

0xeeb0,	// (0x0005698c) att_opt_row_pane_t1_ParamLimits

0xeeb0,	// (0x0005698c) att_opt_row_pane_t1

0xa8e6,	// (0x000523c2) att_li_srv_row_pane_g1

0xa8ee,	// (0x000523ca) att_li_srv_row_pane_t1_ParamLimits

0xa8ee,	// (0x000523ca) att_li_srv_row_pane_t1

0xa903,	// (0x000523df) att_li_srv_row_pane_t2_ParamLimits

0xa903,	// (0x000523df) att_li_srv_row_pane_t2

0x0001,

0xfe61,	// (0x0005793d) att_li_srv_row_pane_t_ParamLimits

0xfe61,	// (0x0005793d) att_li_srv_row_pane_t

0xeec9,	// (0x000569a5) att_btn_close_pane_g1

0xdf1f,	// (0x000559fb) bg_button_pane_cp24

0xa918,	// (0x000523f4) main_vod_body_pane_ParamLimits

0xa918,	// (0x000523f4) main_vod_body_pane

0xa92c,	// (0x00052408) main_vod_body_pane_g1_ParamLimits

0xa92c,	// (0x00052408) main_vod_body_pane_g1

0xa960,	// (0x0005243c) scroll_pane_cp24_ParamLimits

0xa960,	// (0x0005243c) scroll_pane_cp24

0xa9ae,	// (0x0005248a) vod_btn_pane_ParamLimits

0xa9ae,	// (0x0005248a) vod_btn_pane

0xa9f0,	// (0x000524cc) vod_det_pane_ParamLimits

0xa9f0,	// (0x000524cc) vod_det_pane

0xaa24,	// (0x00052500) vod_logo_g1_ParamLimits

0xaa24,	// (0x00052500) vod_logo_g1

0xaa72,	// (0x0005254e) vod_opt_pane_ParamLimits

0xaa72,	// (0x0005254e) vod_opt_pane

0xaaa5,	// (0x00052581) vod_opt_pane_cp01_ParamLimits

0xaaa5,	// (0x00052581) vod_opt_pane_cp01

0xaad1,	// (0x000525ad) vod_query_pane_ParamLimits

0xaad1,	// (0x000525ad) vod_query_pane

0xaafc,	// (0x000525d8) vod_query_pane_cp01_ParamLimits

0xaafc,	// (0x000525d8) vod_query_pane_cp01

0xab08,	// (0x000525e4) vod_t_nml_pane_ParamLimits

0xab08,	// (0x000525e4) vod_t_nml_pane

0xabbd,	// (0x00052699) vod_t_nml_pane_cp01_ParamLimits

0xabbd,	// (0x00052699) vod_t_nml_pane_cp01

0xabf9,	// (0x000526d5) vod_t_sub_pane_ParamLimits

0xabf9,	// (0x000526d5) vod_t_sub_pane

0xac2a,	// (0x00052706) vod_t_sub_pane_cp01_ParamLimits

0xac2a,	// (0x00052706) vod_t_sub_pane_cp01

0xee8a,	// (0x00056966) vod_query_field_pane

0xeed1,	// (0x000569ad) vod_query_pane_t1

0xe981,	// (0x0005645d) bg_button_pane_cp25

0xeee0,	// (0x000569bc) sso_btn_pane_t1_copy2

0xac56,	// (0x00052732) vod_t_nml_pane_t1_ParamLimits

0xac56,	// (0x00052732) vod_t_nml_pane_t1

0xeeef,	// (0x000569cb) vod_opt_row_pane_ParamLimits

0xeeef,	// (0x000569cb) vod_opt_row_pane

0xef01,	// (0x000569dd) vod_t_sub_pane_t1_ParamLimits

0xef01,	// (0x000569dd) vod_t_sub_pane_t1

0xef1a,	// (0x000569f6) vod_det_cell_pane_ParamLimits

0xef1a,	// (0x000569f6) vod_det_cell_pane

0xdf1f,	// (0x000559fb) input_focus_pane_cp15

0xef2b,	// (0x00056a07) vod_query_field_pane_t1

0xef39,	// (0x00056a15) vod_opt_row_pane_g1_ParamLimits

0xef39,	// (0x00056a15) vod_opt_row_pane_g1

0xef45,	// (0x00056a21) vod_opt_row_pane_t1_ParamLimits

0xef45,	// (0x00056a21) vod_opt_row_pane_t1

0xef64,	// (0x00056a40) vod_det_cell_field_pane

0xef6d,	// (0x00056a49) vod_det_cell_pane_g1

0xef75,	// (0x00056a51) vod_det_cell_pane_t1

0xdf1f,	// (0x000559fb) input_focus_pane_cp16

0xef84,	// (0x00056a60) vod_det_cell_field_pane_t1

0x93ed,	// (0x00050ec9) call7_btn_grp_pane_ParamLimits

0x93ed,	// (0x00050ec9) call7_btn_grp_pane

0x0cd1,	// (0x000487ad) call7_bubble_pane_ParamLimits

0x0cd1,	// (0x000487ad) call7_bubble_pane

0xac8b,	// (0x00052767) cell_call7_btn_pane_ParamLimits

0xac8b,	// (0x00052767) cell_call7_btn_pane

0xac9f,	// (0x0005277b) call7_pane_g1_ParamLimits

0xac9f,	// (0x0005277b) call7_pane_g1

0xacb1,	// (0x0005278d) call7_windows_conf_pane_ParamLimits

0xacb1,	// (0x0005278d) call7_windows_conf_pane

0xaccf,	// (0x000527ab) popup_call7_1st_window_ParamLimits

0xaccf,	// (0x000527ab) popup_call7_1st_window

0xace1,	// (0x000527bd) popup_call7_2nd_window_ParamLimits

0xace1,	// (0x000527bd) popup_call7_2nd_window

0xacf3,	// (0x000527cf) popup_call7_3rd_window_ParamLimits

0xacf3,	// (0x000527cf) popup_call7_3rd_window

0xdf1f,	// (0x000559fb) bg_button_pane_cp26

0xe77c,	// (0x00056258) cell_call7_btn_pane_g1

0xe785,	// (0x00056261) cell_call7_btn_pane_t1

0xdf1f,	// (0x000559fb) bg_popup_window_pane_cp12

0xef92,	// (0x00056a6e) popup_call7_1st_window_g1

0xef9a,	// (0x00056a76) popup_call7_1st_window_g2

0xefa2,	// (0x00056a7e) popup_call7_1st_window_g3

0x0002,

0xfe66,	// (0x00057942) popup_call7_1st_window_g

0xefaa,	// (0x00056a86) popup_call7_1st_window_t1

0xefb9,	// (0x00056a95) popup_call7_1st_window_t2

0xefc9,	// (0x00056aa5) popup_call7_1st_window_t3

0x0002,

0xfe6d,	// (0x00057949) popup_call7_1st_window_t

0xdf1f,	// (0x000559fb) bg_popup_window_pane_cp13

0xefd9,	// (0x00056ab5) popup_call7_2nd_window_g1

0xefe1,	// (0x00056abd) popup_call7_2nd_window_g2

0xefe9,	// (0x00056ac5) popup_call7_2nd_window_g3

0x0002,

0xfe74,	// (0x00057950) popup_call7_2nd_window_g

0xefaa,	// (0x00056a86) popup_call7_2nd_window_t1

0xdf1f,	// (0x000559fb) bg_popup_window_pane_cp14

0xeff1,	// (0x00056acd) call7_list_conf_pane

0xeff9,	// (0x00056ad5) call7_list_conf_row_pane_ParamLimits

0xeff9,	// (0x00056ad5) call7_list_conf_row_pane

0xf00c,	// (0x00056ae8) call7_list_conf_row_pane_g1

0xf014,	// (0x00056af0) call7_list_conf_row_pane_g2

0x0001,

0xfe7b,	// (0x00057957) call7_list_conf_row_pane_g

0xf01c,	// (0x00056af8) call7_list_conf_row_pane_t1

0xdf1f,	// (0x000559fb) list_highlight_pane_cp22

0xa27d,	// (0x00051d59) sso_option_pane_cp01_ParamLimits

0xa27d,	// (0x00051d59) sso_option_pane_cp01

0x0e6c,	// (0x00048948) msg_header_pane_ParamLimits

0x3e47,	// (0x0004b923) bg_button_pane_cp01_ParamLimits

0xaed5,	// (0x000529b1) input_focus_pane_cp07_ParamLimits

0x8b90,	// (0x0005066c) popup_email_progress_window

0x0fbb,	// (0x00048a97) popup_email_progress_window_g1

0xf02a,	// (0x00056b06) popup_email_progress_window_g2

0x0001,

0xfe80,	// (0x0005795c) popup_email_progress_window_g

0xf032,	// (0x00056b0e) popup_email_progress_window_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Small

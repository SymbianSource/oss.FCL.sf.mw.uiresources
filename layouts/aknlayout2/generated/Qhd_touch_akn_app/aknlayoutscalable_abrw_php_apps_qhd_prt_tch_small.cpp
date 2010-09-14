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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004a794 };

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
0x5ccc,	// (0x00050460) Screen

0x5cd8,	// (0x0005046c) application_window

0x5d34,	// (0x000504c8) area_bottom_pane_ParamLimits

0x5d34,	// (0x000504c8) area_bottom_pane

0x5d8c,	// (0x00050520) area_top_pane_ParamLimits

0x5d8c,	// (0x00050520) area_top_pane

0x5df0,	// (0x00050584) call_video_uplink_pane_ParamLimits

0x5df0,	// (0x00050584) call_video_uplink_pane

0x5e2f,	// (0x000505c3) main_pane_ParamLimits

0x5e2f,	// (0x000505c3) main_pane

0xdf46,	// (0x000586da) context_pane

0x8c9c,	// (0x00053430) navi_pane

0x8cc2,	// (0x00053456) popup_cale_events_window_ParamLimits

0x8cc2,	// (0x00053456) popup_cale_events_window

0xdf59,	// (0x000586ed) popup_mup_playback_window

0x8cda,	// (0x0005346e) signal_pane

0x3042,	// (0x0004d7d6) main_browser_pane

0x31f4,	// (0x0004d988) main_burst_pane

0x8b1a,	// (0x000532ae) main_calc_pane

0x4fb2,	// (0x0004f746) main_cale_day_pane

0x645d,	// (0x00050bf1) main_cale_month_pane

0x4fb2,	// (0x0004f746) main_cale_week_pane

0x31f4,	// (0x0004d988) main_call_pane

0x2cfa,	// (0x0004d48e) main_call_poc_pane

0x31f4,	// (0x0004d988) main_camera_pane

0x31f4,	// (0x0004d988) main_chi_dic_pane

0x39d4,	// (0x0004e168) main_clock_pane

0x2cfa,	// (0x0004d48e) main_fmradio_pane

0x31f4,	// (0x0004d988) main_graph_messa_pane

0x2cfa,	// (0x0004d48e) main_help_pane

0x3042,	// (0x0004d7d6) main_im_pane

0x2f63,	// (0x0004d6f7) main_image_pane_ParamLimits

0x2f63,	// (0x0004d6f7) main_image_pane

0x2cfa,	// (0x0004d48e) main_location2_pane

0x31f4,	// (0x0004d988) main_location_pane

0x2f63,	// (0x0004d6f7) main_messa_pane

0x2cfa,	// (0x0004d48e) main_mp2_pane

0x31f4,	// (0x0004d988) main_mp_pane

0x2cfa,	// (0x0004d48e) main_msg_pane

0x2cfa,	// (0x0004d48e) main_mup_eq_pane

0x2cfa,	// (0x0004d48e) main_mup_pane

0x3042,	// (0x0004d7d6) main_notes_pane

0x2cfa,	// (0x0004d48e) main_pec_pane

0x2cfa,	// (0x0004d48e) main_phob_pane

0x2cfa,	// (0x0004d48e) main_pinb_pane

0x2cfa,	// (0x0004d48e) main_postcard_pane

0x2cfa,	// (0x0004d48e) main_qdial_pane

0x31f4,	// (0x0004d988) main_skin_pane

0x2cfa,	// (0x0004d48e) main_smil2_pane

0x31f4,	// (0x0004d988) main_smil_pane

0x31f4,	// (0x0004d988) main_video_pane

0x31f4,	// (0x0004d988) main_video_tele_pane

0x2f63,	// (0x0004d6f7) main_viewer_pane_ParamLimits

0x2f63,	// (0x0004d6f7) main_viewer_pane

0x31f4,	// (0x0004d988) main_vorec_pane

0x8b66,	// (0x000532fa) popup_blid_sat_info_window_ParamLimits

0x8b66,	// (0x000532fa) popup_blid_sat_info_window

0x8b86,	// (0x0005331a) popup_dyc_status_message_window_ParamLimits

0x8b86,	// (0x0005331a) popup_dyc_status_message_window

0x8b96,	// (0x0005332a) popup_grid_large_graphic_window_ParamLimits

0x8b96,	// (0x0005332a) popup_grid_large_graphic_window

0x8c27,	// (0x000533bb) popup_loc_request_window_ParamLimits

0x8c27,	// (0x000533bb) popup_loc_request_window

0x8c74,	// (0x00053408) popup_wml_address_window_ParamLimits

0x8c74,	// (0x00053408) popup_wml_address_window

0x89f2,	// (0x00053186) call_muted_g1

0x866d,	// (0x00052e01) popup_call_audio_conf_window_ParamLimits

0x866d,	// (0x00052e01) popup_call_audio_conf_window

0x8a02,	// (0x00053196) popup_call_audio_first_window_ParamLimits

0x8a02,	// (0x00053196) popup_call_audio_first_window

0x8a42,	// (0x000531d6) popup_call_audio_in_window_ParamLimits

0x8a42,	// (0x000531d6) popup_call_audio_in_window

0x8a66,	// (0x000531fa) popup_call_audio_out_window_ParamLimits

0x8a66,	// (0x000531fa) popup_call_audio_out_window

0x8a88,	// (0x0005321c) popup_call_audio_second_window_ParamLimits

0x8a88,	// (0x0005321c) popup_call_audio_second_window

0x8ab8,	// (0x0005324c) popup_call_audio_wait_window_ParamLimits

0x8ab8,	// (0x0005324c) popup_call_audio_wait_window

0x8ad9,	// (0x0005326d) popup_number_entry_window_ParamLimits

0x8ad9,	// (0x0005326d) popup_number_entry_window

0x2892,	// (0x0004d026) bg_popup_call_pane_cp05_ParamLimits

0x2892,	// (0x0004d026) bg_popup_call_pane_cp05

0x2907,	// (0x0004d09b) popup_number_entry_window_t1

0x291a,	// (0x0004d0ae) popup_number_entry_window_t2

0x292c,	// (0x0004d0c0) popup_number_entry_window_t3

0x0003,

0xf06b,	// (0x000597ff) popup_number_entry_window_t

0x293e,	// (0x0004d0d2) text_title_cp2

0x2951,	// (0x0004d0e5) bg_popup_call_pane_cp_ParamLimits

0x2951,	// (0x0004d0e5) bg_popup_call_pane_cp

0x295f,	// (0x0004d0f3) call_thumbnail_pane

0x2967,	// (0x0004d0fb) popup_call_audio_in_window_g1_ParamLimits

0x2967,	// (0x0004d0fb) popup_call_audio_in_window_g1

0x2973,	// (0x0004d107) popup_call_audio_in_window_g2_ParamLimits

0x2973,	// (0x0004d107) popup_call_audio_in_window_g2

0x297f,	// (0x0004d113) popup_call_audio_in_window_g3_ParamLimits

0x297f,	// (0x0004d113) popup_call_audio_in_window_g3

0x0002,

0xf074,	// (0x00059808) popup_call_audio_in_window_g_ParamLimits

0xf074,	// (0x00059808) popup_call_audio_in_window_g

0x298b,	// (0x0004d11f) popup_call_audio_in_window_t1_ParamLimits

0x298b,	// (0x0004d11f) popup_call_audio_in_window_t1

0x29a7,	// (0x0004d13b) popup_call_audio_in_window_t2_ParamLimits

0x29a7,	// (0x0004d13b) popup_call_audio_in_window_t2

0x29c3,	// (0x0004d157) popup_call_audio_in_window_t3_ParamLimits

0x29c3,	// (0x0004d157) popup_call_audio_in_window_t3

0x0002,

0xf07b,	// (0x0005980f) popup_call_audio_in_window_t_ParamLimits

0xf07b,	// (0x0005980f) popup_call_audio_in_window_t

0x2951,	// (0x0004d0e5) bg_popup_call_pane_cp01_ParamLimits

0x2951,	// (0x0004d0e5) bg_popup_call_pane_cp01

0x295f,	// (0x0004d0f3) call_thumbnail_pane_cp02

0x29d6,	// (0x0004d16a) call_type_pane_cp022

0x29de,	// (0x0004d172) popup_call_audio_out_window_g1_ParamLimits

0x29de,	// (0x0004d172) popup_call_audio_out_window_g1

0x29f0,	// (0x0004d184) popup_call_audio_out_window_g2_ParamLimits

0x29f0,	// (0x0004d184) popup_call_audio_out_window_g2

0x29fc,	// (0x0004d190) popup_call_audio_out_window_g3_ParamLimits

0x29fc,	// (0x0004d190) popup_call_audio_out_window_g3

0x0002,

0xf082,	// (0x00059816) popup_call_audio_out_window_g_ParamLimits

0xf082,	// (0x00059816) popup_call_audio_out_window_g

0x2a0e,	// (0x0004d1a2) popup_call_audio_out_window_t1_ParamLimits

0x2a0e,	// (0x0004d1a2) popup_call_audio_out_window_t1

0x2a26,	// (0x0004d1ba) popup_call_audio_out_window_t2_ParamLimits

0x2a26,	// (0x0004d1ba) popup_call_audio_out_window_t2

0x0001,

0xf089,	// (0x0005981d) popup_call_audio_out_window_t_ParamLimits

0xf089,	// (0x0005981d) popup_call_audio_out_window_t

0x2a3b,	// (0x0004d1cf) bg_popup_call_pane_ParamLimits

0x2a3b,	// (0x0004d1cf) bg_popup_call_pane

0x6048,	// (0x000507dc) call_thumbnail_pane_cp_ParamLimits

0x6048,	// (0x000507dc) call_thumbnail_pane_cp

0x2abf,	// (0x0004d253) call_type_pane_cp01_ParamLimits

0x2abf,	// (0x0004d253) call_type_pane_cp01

0x2b03,	// (0x0004d297) popup_call_audio_first_window_g1_ParamLimits

0x2b03,	// (0x0004d297) popup_call_audio_first_window_g1

0x2b4f,	// (0x0004d2e3) popup_call_audio_first_window_g2_ParamLimits

0x2b4f,	// (0x0004d2e3) popup_call_audio_first_window_g2

0x0001,

0xf08e,	// (0x00059822) popup_call_audio_first_window_g_ParamLimits

0xf08e,	// (0x00059822) popup_call_audio_first_window_g

0x2b93,	// (0x0004d327) popup_call_audio_first_window_t1_ParamLimits

0x2b93,	// (0x0004d327) popup_call_audio_first_window_t1

0x2c3f,	// (0x0004d3d3) popup_call_audio_first_window_t4_ParamLimits

0x2c3f,	// (0x0004d3d3) popup_call_audio_first_window_t4

0x2ccb,	// (0x0004d45f) popup_call_audio_first_window_t5_ParamLimits

0x2ccb,	// (0x0004d45f) popup_call_audio_first_window_t5

0x0002,

0xf093,	// (0x00059827) popup_call_audio_first_window_t_ParamLimits

0xf093,	// (0x00059827) popup_call_audio_first_window_t

0x2cfa,	// (0x0004d48e) bg_popup_call_pane_cp02

0x2d04,	// (0x0004d498) call_type_pane_cp023

0x2d0c,	// (0x0004d4a0) popup_call_audio_wait_window_g1

0x2d14,	// (0x0004d4a8) popup_call_audio_wait_window_g2

0x0001,

0xf09a,	// (0x0005982e) popup_call_audio_wait_window_g

0x2d1c,	// (0x0004d4b0) popup_call_audio_wait_window_t3

0x2d2a,	// (0x0004d4be) bg_popup_call_pane_cp03_ParamLimits

0x2d2a,	// (0x0004d4be) bg_popup_call_pane_cp03

0x2d8a,	// (0x0004d51e) call_thumbnail_pane_cp011_ParamLimits

0x2d8a,	// (0x0004d51e) call_thumbnail_pane_cp011

0x2d96,	// (0x0004d52a) call_type_pane_cp034_ParamLimits

0x2d96,	// (0x0004d52a) call_type_pane_cp034

0x2dd2,	// (0x0004d566) popup_call_audio_second_window_g1_ParamLimits

0x2dd2,	// (0x0004d566) popup_call_audio_second_window_g1

0x2e0e,	// (0x0004d5a2) popup_call_audio_second_window_g2_ParamLimits

0x2e0e,	// (0x0004d5a2) popup_call_audio_second_window_g2

0x0001,

0xf09f,	// (0x00059833) popup_call_audio_second_window_g_ParamLimits

0xf09f,	// (0x00059833) popup_call_audio_second_window_g

0x2e4a,	// (0x0004d5de) popup_call_audio_second_window_t1_ParamLimits

0x2e4a,	// (0x0004d5de) popup_call_audio_second_window_t1

0x2ecb,	// (0x0004d65f) popup_call_audio_second_window_t2_ParamLimits

0x2ecb,	// (0x0004d65f) popup_call_audio_second_window_t2

0x2f01,	// (0x0004d695) popup_call_audio_second_window_t3_ParamLimits

0x2f01,	// (0x0004d695) popup_call_audio_second_window_t3

0x0002,

0xf0a4,	// (0x00059838) popup_call_audio_second_window_t_ParamLimits

0xf0a4,	// (0x00059838) popup_call_audio_second_window_t

0x2cfa,	// (0x0004d48e) bg_popup_call_pane_cp04

0x2f45,	// (0x0004d6d9) list_conf_pane

0x2f4d,	// (0x0004d6e1) popup_call_audio_conf_window_t1

0x2f5b,	// (0x0004d6ef) call_thumbnail_pane_g1

0x2f63,	// (0x0004d6f7) bg_pinb_pane_ParamLimits

0x2f63,	// (0x0004d6f7) bg_pinb_pane

0x2f71,	// (0x0004d705) find_pinb_pane

0x2f63,	// (0x0004d6f7) listscroll_pinb_pane_ParamLimits

0x2f63,	// (0x0004d6f7) listscroll_pinb_pane

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g1

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g2

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g3

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g4

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g5

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g6

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g7

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g8

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g9

0x2f7b,	// (0x0004d70f) pinb_bg_pane_g10

0x0009,

0xf0ab,	// (0x0005983f) pinb_bg_pane_g

0x2888,	// (0x0004d01c) grid_pinb_pane

0x2888,	// (0x0004d01c) list_pinb_pane

0x2f37,	// (0x0004d6cb) scroll_pane_cp01_ParamLimits

0x2f37,	// (0x0004d6cb) scroll_pane_cp01

0x2f85,	// (0x0004d719) find_pinb_pane_g1_ParamLimits

0x2f85,	// (0x0004d719) find_pinb_pane_g1

0x2f9d,	// (0x0004d731) find_pinb_pane_t1

0x2faf,	// (0x0004d743) find_pinb_pane_t2

0x0001,

0xf0c5,	// (0x00059859) find_pinb_pane_t

0x2fc4,	// (0x0004d758) input_focus_pane_cp01_ParamLimits

0x2fc4,	// (0x0004d758) input_focus_pane_cp01

0x28b2,	// (0x0004d046) cell_pinb_pane_ParamLimits

0x28b2,	// (0x0004d046) cell_pinb_pane

0x2fd0,	// (0x0004d764) cell_pinb_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) cell_pinb_pane_g1

0x2fde,	// (0x0004d772) cell_pinb_pane_g2_ParamLimits

0x2fde,	// (0x0004d772) cell_pinb_pane_g2

0x2fde,	// (0x0004d772) cell_pinb_pane_g3_ParamLimits

0x2fde,	// (0x0004d772) cell_pinb_pane_g3

0x0002,

0xf0ca,	// (0x0005985e) cell_pinb_pane_g_ParamLimits

0xf0ca,	// (0x0005985e) cell_pinb_pane_g

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp01

0x28b2,	// (0x0004d046) list_pinb_item_pane_ParamLimits

0x28b2,	// (0x0004d046) list_pinb_item_pane

0x2888,	// (0x0004d01c) list_highlight_pane_cp02

0x2fec,	// (0x0004d780) list_pinb_item_pane_g1_ParamLimits

0x2fec,	// (0x0004d780) list_pinb_item_pane_g1

0x2fde,	// (0x0004d772) list_pinb_item_pane_g2_ParamLimits

0x2fde,	// (0x0004d772) list_pinb_item_pane_g2

0x2fd0,	// (0x0004d764) list_pinb_item_pane_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_pinb_item_pane_g3

0x2fde,	// (0x0004d772) list_pinb_item_pane_g4_ParamLimits

0x2fde,	// (0x0004d772) list_pinb_item_pane_g4

0x0003,

0xf0d1,	// (0x00059865) list_pinb_item_pane_g_ParamLimits

0xf0d1,	// (0x00059865) list_pinb_item_pane_g

0x2ffa,	// (0x0004d78e) list_pinb_item_pane_t1_ParamLimits

0x2ffa,	// (0x0004d78e) list_pinb_item_pane_t1

0x6086,	// (0x0005081a) calc_display_pane

0x60a4,	// (0x00050838) calc_paper_pane

0x60c0,	// (0x00050854) grid_calc_pane

0x2cfa,	// (0x0004d48e) bg_list_pane_cp01

0x60ec,	// (0x00050880) clock_g1

0x60f4,	// (0x00050888) clock_g2

0x0001,

0xf0da,	// (0x0005986e) clock_g

0x60fe,	// (0x00050892) clock_t1_ParamLimits

0x60fe,	// (0x00050892) clock_t1

0x6113,	// (0x000508a7) clock_t2_ParamLimits

0x6113,	// (0x000508a7) clock_t2

0x6125,	// (0x000508b9) clock_t3_ParamLimits

0x6125,	// (0x000508b9) clock_t3

0x6137,	// (0x000508cb) clock_t4_ParamLimits

0x6137,	// (0x000508cb) clock_t4

0x6149,	// (0x000508dd) clock_t5_ParamLimits

0x6149,	// (0x000508dd) clock_t5

0x615e,	// (0x000508f2) clock_t6_ParamLimits

0x615e,	// (0x000508f2) clock_t6

0x6170,	// (0x00050904) clock_t7_ParamLimits

0x6170,	// (0x00050904) clock_t7

0x6182,	// (0x00050916) clock_t8_ParamLimits

0x6182,	// (0x00050916) clock_t8

0x6198,	// (0x0005092c) clock_t9_ParamLimits

0x6198,	// (0x0005092c) clock_t9

0x0008,

0xf0df,	// (0x00059873) clock_t_ParamLimits

0xf0df,	// (0x00059873) clock_t

0x300e,	// (0x0004d7a2) popup_clock_analogue_window_cp02

0x300e,	// (0x0004d7a2) popup_clock_digital_window_cp01

0x2cfa,	// (0x0004d48e) listscroll_help_pane

0x2cfa,	// (0x0004d48e) phob_pre_status_pane

0x3016,	// (0x0004d7aa) grid_qdial_pane

0x61ae,	// (0x00050942) listscroll_mce_pane

0x2f63,	// (0x0004d6f7) bg_notes_pane

0x3020,	// (0x0004d7b4) list_notes_pane

0x61cc,	// (0x00050960) scroll_pane_cp06

0x302e,	// (0x0004d7c2) bg_calc_paper_pane

0x61db,	// (0x0005096f) list_calc_pane

0x3042,	// (0x0004d7d6) bg_calc_display_pane

0x61f5,	// (0x00050989) calc_display_pane_t1

0x620a,	// (0x0005099e) calc_display_pane_t2

0x621f,	// (0x000509b3) calc_display_pane_t3

0x0002,

0xf0f2,	// (0x00059886) calc_display_pane_t

0x6231,	// (0x000509c5) cell_calc_pane_ParamLimits

0x6231,	// (0x000509c5) cell_calc_pane

0x304e,	// (0x0004d7e2) bg_calc_paper_pane_g1

0x3066,	// (0x0004d7fa) bg_calc_paper_pane_g2

0x305a,	// (0x0004d7ee) bg_calc_paper_pane_g3

0x307e,	// (0x0004d812) bg_calc_paper_pane_g4

0x3072,	// (0x0004d806) bg_calc_paper_pane_g5

0x625e,	// (0x000509f2) bg_calc_paper_pane_g6

0x626f,	// (0x00050a03) bg_calc_paper_pane_g7

0x6280,	// (0x00050a14) bg_calc_paper_pane_g8

0x0007,

0xf0f9,	// (0x0005988d) bg_calc_paper_pane_g

0x6291,	// (0x00050a25) calc_bg_paper_pane_g9

0x62a2,	// (0x00050a36) list_calc_item_pane_ParamLimits

0x62a2,	// (0x00050a36) list_calc_item_pane

0x308a,	// (0x0004d81e) list_calc_item_pane_g1

0x62ce,	// (0x00050a62) list_calc_item_pane_t1_ParamLimits

0x62ce,	// (0x00050a62) list_calc_item_pane_t1

0x62e0,	// (0x00050a74) list_calc_item_pane_t2_ParamLimits

0x62e0,	// (0x00050a74) list_calc_item_pane_t2

0x0001,

0xf10a,	// (0x0005989e) list_calc_item_pane_t_ParamLimits

0xf10a,	// (0x0005989e) list_calc_item_pane_t

0x2f7b,	// (0x0004d70f) cell_calc_pane_g1

0x3097,	// (0x0004d82b) grid_highlight_pane_cp02

0x6310,	// (0x00050aa4) bg_calc_display_pane_g1

0x6319,	// (0x00050aad) bg_calc_display_pane_g2

0x6323,	// (0x00050ab7) bg_calc_display_pane_g3

0x0002,

0xf114,	// (0x000598a8) bg_calc_display_pane_g

0x632c,	// (0x00050ac0) cell_qdial_pane_ParamLimits

0x632c,	// (0x00050ac0) cell_qdial_pane

0x6340,	// (0x00050ad4) cell_qdial_pane_g1_ParamLimits

0x6340,	// (0x00050ad4) cell_qdial_pane_g1

0x634d,	// (0x00050ae1) cell_qdial_pane_g2_ParamLimits

0x634d,	// (0x00050ae1) cell_qdial_pane_g2

0x30b9,	// (0x0004d84d) cell_qdial_pane_g3_ParamLimits

0x30b9,	// (0x0004d84d) cell_qdial_pane_g3

0x0003,

0xf11b,	// (0x000598af) cell_qdial_pane_g_ParamLimits

0xf11b,	// (0x000598af) cell_qdial_pane_g

0x636b,	// (0x00050aff) cell_qdial_pane_t1_ParamLimits

0x636b,	// (0x00050aff) cell_qdial_pane_t1

0x6383,	// (0x00050b17) cell_qdial_pane_t2_ParamLimits

0x6383,	// (0x00050b17) cell_qdial_pane_t2

0x6396,	// (0x00050b2a) cell_qdial_pane_t3_ParamLimits

0x6396,	// (0x00050b2a) cell_qdial_pane_t3

0x0002,

0xf124,	// (0x000598b8) cell_qdial_pane_t_ParamLimits

0xf124,	// (0x000598b8) cell_qdial_pane_t

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp04

0x30c5,	// (0x0004d859) thumbnail_qdial_pane_ParamLimits

0x30c5,	// (0x0004d859) thumbnail_qdial_pane

0x3121,	// (0x0004d8b5) list_help_pane

0x312a,	// (0x0004d8be) scroll_pane_cp02

0x63a9,	// (0x00050b3d) help_list_pane_t1_ParamLimits

0x63a9,	// (0x00050b3d) help_list_pane_t1

0x63df,	// (0x00050b73) bg_notes_pane_g2

0x63e7,	// (0x00050b7b) bg_notes_pane_g3

0x63ef,	// (0x00050b83) notes_bg_pane_g1

0x63f7,	// (0x00050b8b) notes_bg_pane_g4

0x63ff,	// (0x00050b93) notes_bg_pane_g5

0x6407,	// (0x00050b9b) notes_bg_pane_g6

0x640f,	// (0x00050ba3) notes_bg_pane_g7

0x6417,	// (0x00050bab) notes_bg_pane_g8

0x641f,	// (0x00050bb3) notes_bg_pane_g9

0x0006,

0xf142,	// (0x000598d6) notes_bg_pane_g

0x6427,	// (0x00050bbb) list_notes_text_pane_ParamLimits

0x6427,	// (0x00050bbb) list_notes_text_pane

0x3133,	// (0x0004d8c7) list_notes_text_pane_g1

0x644f,	// (0x00050be3) list_notes_text_pane_t1

0x645d,	// (0x00050bf1) listscroll_cale_week_pane

0x6482,	// (0x00050c16) bg_cale_heading_pane

0x3156,	// (0x0004d8ea) bg_cale_pane_cp01

0x64a2,	// (0x00050c36) cale_week_corner_pane

0x64bc,	// (0x00050c50) cale_week_day_heading_pane

0x64dc,	// (0x00050c70) cale_week_scroll_pane_g1

0x64f7,	// (0x00050c8b) cale_week_scroll_pane_g2

0x650a,	// (0x00050c9e) cale_week_scroll_pane_g3

0x651d,	// (0x00050cb1) cale_week_scroll_pane_g4

0x6530,	// (0x00050cc4) cale_week_scroll_pane_g5

0x6543,	// (0x00050cd7) cale_week_scroll_pane_g6

0x6556,	// (0x00050cea) cale_week_scroll_pane_g7

0x656b,	// (0x00050cff) cale_week_scroll_pane_g8

0x6580,	// (0x00050d14) cale_week_scroll_pane_g9

0x6593,	// (0x00050d27) cale_week_scroll_pane_g10

0x65a6,	// (0x00050d3a) cale_week_scroll_pane_g11

0x65b9,	// (0x00050d4d) cale_week_scroll_pane_g12

0x65d0,	// (0x00050d64) cale_week_scroll_pane_g13

0x65eb,	// (0x00050d7f) cale_week_scroll_pane_g14

0x6606,	// (0x00050d9a) cale_week_scroll_pane_g15

0x000f,

0xf151,	// (0x000598e5) cale_week_scroll_pane_g

0x6636,	// (0x00050dca) cale_week_time_pane

0x664b,	// (0x00050ddf) grid_cale_week_pane

0x3185,	// (0x0004d919) scroll_pane_cp08

0x666a,	// (0x00050dfe) cell_cale_week_pane_ParamLimits

0x666a,	// (0x00050dfe) cell_cale_week_pane

0x66cc,	// (0x00050e60) cale_week_day_heading_pane_t1

0x66e7,	// (0x00050e7b) cale_week_day_heading_pane_t2

0x6702,	// (0x00050e96) cale_week_day_heading_pane_t3

0x671d,	// (0x00050eb1) cale_week_day_heading_pane_t4

0x6738,	// (0x00050ecc) cale_week_day_heading_pane_t5

0x6753,	// (0x00050ee7) cale_week_day_heading_pane_t6

0x676e,	// (0x00050f02) cale_week_day_heading_pane_t7

0x0006,

0xf172,	// (0x00059906) cale_week_day_heading_pane_t

0x31a2,	// (0x0004d936) bg_cale_side_pane

0x6789,	// (0x00050f1d) cale_week_time_pane_t1

0x67a3,	// (0x00050f37) cale_week_time_pane_t2

0x67bd,	// (0x00050f51) cale_week_time_pane_t3

0x67d7,	// (0x00050f6b) cale_week_time_pane_t4

0x67f1,	// (0x00050f85) cale_week_time_pane_t5

0x680b,	// (0x00050f9f) cale_week_time_pane_t6

0x6829,	// (0x00050fbd) cale_week_time_pane_t7

0x684b,	// (0x00050fdf) cale_week_time_pane_t8

0x0007,

0xf181,	// (0x00059915) cale_week_time_pane_t

0x686f,	// (0x00051003) cell_cale_week_pane_g2

0x6893,	// (0x00051027) cell_cale_week_pane_g3_ParamLimits

0x6893,	// (0x00051027) cell_cale_week_pane_g3

0x31b0,	// (0x0004d944) grid_highlight_pane_cp07

0x31b8,	// (0x0004d94c) listscroll_gms_pane

0x31c2,	// (0x0004d956) grid_gms_pane

0x31cb,	// (0x0004d95f) listscroll_gms_pane_g1

0x31d3,	// (0x0004d967) listscroll_gms_pane_g2

0x0001,

0xf192,	// (0x00059926) listscroll_gms_pane_g

0x68ab,	// (0x0005103f) scroll_pane_cp010

0x68b6,	// (0x0005104a) cell_gms_pane_ParamLimits

0x68b6,	// (0x0005104a) cell_gms_pane

0x68c9,	// (0x0005105d) cell_gms_pane_g1

0x31db,	// (0x0004d96f) cell_gms_pane_g2

0x3133,	// (0x0004d8c7) cell_gms_pane_g3

0x31e3,	// (0x0004d977) cell_gms_pane_g4

0x0003,

0xf197,	// (0x0005992b) cell_gms_pane_g

0x31ec,	// (0x0004d980) grid_highlight_pane_cp09

0x8976,	// (0x0005310a) phob_pre_status_pane_g1

0x897e,	// (0x00053112) phob_pre_status_pane_g2

0x8986,	// (0x0005311a) phob_pre_status_pane_g3

0x898e,	// (0x00053122) phob_pre_status_pane_g4

0x0004,

0xf560,	// (0x00059cf4) phob_pre_status_pane_g

0x899e,	// (0x00053132) phob_pre_status_pane_t1

0x89ae,	// (0x00053142) phob_pre_status_pane_t2

0x89be,	// (0x00053152) phob_pre_status_pane_t3

0x0002,

0xf56b,	// (0x00059cff) phob_pre_status_pane_t

0x31f4,	// (0x0004d988) bg_list_pane_cp05

0x68d9,	// (0x0005106d) grid_vorec_pane

0x68e3,	// (0x00051077) vorec_t1

0x68f1,	// (0x00051085) vorec_t2

0x68ff,	// (0x00051093) vorec_t3

0x690d,	// (0x000510a1) vorec_t4

0xda07,	// (0x0005819b) vorec_t5

0xda15,	// (0x000581a9) vorec_t6

0x0004,

0xf1a0,	// (0x00059934) vorec_t

0xda23,	// (0x000581b7) wait_bar_pane_cp01

0x6929,	// (0x000510bd) cell_vorec_pane_ParamLimits

0x6929,	// (0x000510bd) cell_vorec_pane

0x693c,	// (0x000510d0) cell_vorec_pane_g1

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp05

0x28b2,	// (0x0004d046) cams_zoom_pane

0x28b2,	// (0x0004d046) image_vga_pane

0x2fde,	// (0x0004d772) main_camera_pane_g1

0x2fde,	// (0x0004d772) main_camera_pane_g2

0x2fde,	// (0x0004d772) main_camera_pane_g3

0x2fde,	// (0x0004d772) main_camera_pane_g4

0x2fde,	// (0x0004d772) main_camera_pane_g5

0x2fde,	// (0x0004d772) main_camera_pane_g6

0x2fde,	// (0x0004d772) main_camera_pane_g7

0x0007,

0xf1ab,	// (0x0005993f) main_camera_pane_g

0x324c,	// (0x0004d9e0) main_camera_pane_t1

0x324c,	// (0x0004d9e0) main_camera_pane_t2

0x0001,

0xf1bc,	// (0x00059950) main_camera_pane_t

0x6946,	// (0x000510da) cams_zoom_pane_cp_ParamLimits

0x6946,	// (0x000510da) cams_zoom_pane_cp

0x6974,	// (0x00051108) image_cif_pane_ParamLimits

0x6974,	// (0x00051108) image_cif_pane

0x2888,	// (0x0004d01c) image_subqcif_pane

0x6982,	// (0x00051116) main_video_pane_g1_ParamLimits

0x6982,	// (0x00051116) main_video_pane_g1

0x69aa,	// (0x0005113e) main_video_pane_g2_ParamLimits

0x69aa,	// (0x0005113e) main_video_pane_g2

0x69dd,	// (0x00051171) main_video_pane_g3_ParamLimits

0x69dd,	// (0x00051171) main_video_pane_g3

0x69dd,	// (0x00051171) main_video_pane_g4_ParamLimits

0x69dd,	// (0x00051171) main_video_pane_g4

0x6a0b,	// (0x0005119f) main_video_pane_g5_ParamLimits

0x6a0b,	// (0x0005119f) main_video_pane_g5

0x3210,	// (0x0004d9a4) main_video_pane_g6_ParamLimits

0x3210,	// (0x0004d9a4) main_video_pane_g6

0x0006,

0xf1c1,	// (0x00059955) main_video_pane_g_ParamLimits

0xf1c1,	// (0x00059955) main_video_pane_g

0x6a27,	// (0x000511bb) main_video_pane_t1_ParamLimits

0x6a27,	// (0x000511bb) main_video_pane_t1

0x322a,	// (0x0004d9be) cams_zoom_pane_g1

0x322a,	// (0x0004d9be) cams_zoom_pane_g2

0x322a,	// (0x0004d9be) cams_zoom_pane_g3

0x322a,	// (0x0004d9be) cams_zoom_pane_g4

0x0003,

0xf1d0,	// (0x00059964) cams_zoom_pane_g

0x6a6d,	// (0x00051201) grid_cams_pane

0x6a7b,	// (0x0005120f) linegrid_cams_pane

0x6a89,	// (0x0005121d) cell_cams_pane_ParamLimits

0x6a89,	// (0x0005121d) cell_cams_pane

0x3234,	// (0x0004d9c8) cams_burst_image_pane

0x323c,	// (0x0004d9d0) cell_cams_pane_g1

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp03

0x2f7b,	// (0x0004d70f) mp_bg_pane_g1

0x2888,	// (0x0004d01c) bg_list_pane_cp03

0x2888,	// (0x0004d01c) bg_mp_pane

0x2888,	// (0x0004d01c) grid_mp_pane

0x322a,	// (0x0004d9be) media_player_g1

0x375a,	// (0x0004deee) media_player_t1

0x375a,	// (0x0004deee) media_player_t2

0x375a,	// (0x0004deee) media_player_t3

0x375a,	// (0x0004deee) media_player_t4

0x375a,	// (0x0004deee) media_player_t5

0x375a,	// (0x0004deee) media_player_t6

0x375a,	// (0x0004deee) media_player_t7

0x0006,

0xf54a,	// (0x00059cde) media_player_t

0x2888,	// (0x0004d01c) wait_bar_pane_cp02

0xf52f,	// (0x00059cc3) main_usb_pane_t

0x39d4,	// (0x0004e168) cell_mp_pane

0x2f7b,	// (0x0004d70f) cell_mp_pane_g1

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp06

0x3244,	// (0x0004d9d8) grid_skin_colour_pane

0x3260,	// (0x0004d9f4) list_highlight_pane_cp03

0x6a9c,	// (0x00051230) skin_g1

0x3268,	// (0x0004d9fc) skin_t1

0x3277,	// (0x0004da0b) skin_t2

0x0001,

0xf1fe,	// (0x00059992) skin_t

0x6aa6,	// (0x0005123a) cell_skin_colour_pane_ParamLimits

0x6aa6,	// (0x0005123a) cell_skin_colour_pane

0x3285,	// (0x0004da19) cell_skin_colour_pane_g1

0x6b2a,	// (0x000512be) call_video_g1_ParamLimits

0x6b2a,	// (0x000512be) call_video_g1

0x6b3a,	// (0x000512ce) call_video_g2_ParamLimits

0x6b3a,	// (0x000512ce) call_video_g2

0x0001,

0xf203,	// (0x00059997) call_video_g_ParamLimits

0xf203,	// (0x00059997) call_video_g

0x6b94,	// (0x00051328) call_video_uplink_pane_cp1_ParamLimits

0x6b94,	// (0x00051328) call_video_uplink_pane_cp1

0x3297,	// (0x0004da2b) call_video_uplink_pane_cp2

0x6c60,	// (0x000513f4) video_down_crop_pane_ParamLimits

0x6c60,	// (0x000513f4) video_down_crop_pane

0x6d5e,	// (0x000514f2) video_down_pane_ParamLimits

0x6d5e,	// (0x000514f2) video_down_pane

0x329f,	// (0x0004da33) video_down_subqcif_pane_ParamLimits

0x329f,	// (0x0004da33) video_down_subqcif_pane

0x32b7,	// (0x0004da4b) video_down_subqcif_pane_cp_ParamLimits

0x32b7,	// (0x0004da4b) video_down_subqcif_pane_cp

0x32dd,	// (0x0004da71) im_reading_pane_ParamLimits

0x32dd,	// (0x0004da71) im_reading_pane

0x6e7e,	// (0x00051612) im_writing_pane_ParamLimits

0x6e7e,	// (0x00051612) im_writing_pane

0x6e9c,	// (0x00051630) im_reading_pane_t1

0x32f7,	// (0x0004da8b) list_im_pane

0x3308,	// (0x0004da9c) scroll_pane_cp07

0x6ef0,	// (0x00051684) im_writing_pane_t1_ParamLimits

0x6ef0,	// (0x00051684) im_writing_pane_t1

0x3321,	// (0x0004dab5) im_writing_pane_t2_ParamLimits

0x3321,	// (0x0004dab5) im_writing_pane_t2

0x0001,

0xf20d,	// (0x000599a1) im_writing_pane_t_ParamLimits

0xf20d,	// (0x000599a1) im_writing_pane_t

0x2cfa,	// (0x0004d48e) input_focus_pane_cp04

0x2cfa,	// (0x0004d48e) input_focus_pane_cp05

0x6f05,	// (0x00051699) list_im_single_pane_ParamLimits

0x6f05,	// (0x00051699) list_im_single_pane

0x6f29,	// (0x000516bd) list_single_im_pane_t1

0x31f4,	// (0x0004d988) blid_accuracy_pane

0x31f4,	// (0x0004d988) blid_compass_pane

0x4f6a,	// (0x0004f6fe) main_location_t1

0x4f6a,	// (0x0004f6fe) main_location_t2

0x4f6a,	// (0x0004f6fe) main_location_t3

0x0002,

0xf559,	// (0x00059ced) main_location_t

0x2cfa,	// (0x0004d48e) aid_levels_location

0x2f7b,	// (0x0004d70f) blid_accuracy_pane_g1

0x2f7b,	// (0x0004d70f) blid_accuracy_pane_g2

0x0001,

0xf261,	// (0x000599f5) blid_accuracy_pane_g

0x3369,	// (0x0004dafd) wml_content_pane

0x33a7,	// (0x0004db3b) wml_button_pane_ParamLimits

0x33a7,	// (0x0004db3b) wml_button_pane

0x6f38,	// (0x000516cc) wml_list_single_large_pane_ParamLimits

0x6f38,	// (0x000516cc) wml_list_single_large_pane

0x6f62,	// (0x000516f6) wml_list_single_medium_pane_ParamLimits

0x6f62,	// (0x000516f6) wml_list_single_medium_pane

0x6f93,	// (0x00051727) wml_list_single_small_pane_ParamLimits

0x6f93,	// (0x00051727) wml_list_single_small_pane

0x33bb,	// (0x0004db4f) wml_selection_box_pane_ParamLimits

0x33bb,	// (0x0004db4f) wml_selection_box_pane

0x33ce,	// (0x0004db62) wml_list_single_pane_t1

0x33dd,	// (0x0004db71) wml_list_single_medium_pane_t1

0x33ec,	// (0x0004db80) wml_list_single_large_pane_t1

0x33fb,	// (0x0004db8f) input_focus_pane_cp02_ParamLimits

0x33fb,	// (0x0004db8f) input_focus_pane_cp02

0x340e,	// (0x0004dba2) wml_selection_box_pane_g1

0x3417,	// (0x0004dbab) wml_selection_box_pane_t1_ParamLimits

0x3417,	// (0x0004dbab) wml_selection_box_pane_t1

0x2f63,	// (0x0004d6f7) bg_wml_button_pane_ParamLimits

0x2f63,	// (0x0004d6f7) bg_wml_button_pane

0x342f,	// (0x0004dbc3) wml_button_pane_g1

0x3437,	// (0x0004dbcb) wml_button_pane_t1

0x342f,	// (0x0004dbc3) wml_button_bg_pane_g1

0x3447,	// (0x0004dbdb) wml_button_bg_pane_g2

0x344f,	// (0x0004dbe3) wml_button_bg_pane_g3

0x3457,	// (0x0004dbeb) wml_button_bg_pane_g4

0x345f,	// (0x0004dbf3) wml_button_bg_pane_g5

0x3467,	// (0x0004dbfb) wml_button_bg_pane_g6

0x346f,	// (0x0004dc03) wml_button_bg_pane_g7

0x3477,	// (0x0004dc0b) wml_button_bg_pane_g8

0x347f,	// (0x0004dc13) wml_button_bg_pane_g9

0x0008,

0xf212,	// (0x000599a6) wml_button_bg_pane_g

0x6fcd,	// (0x00051761) bg_list_pane_cp02

0x3487,	// (0x0004dc1b) mce_header_pane_ParamLimits

0x3487,	// (0x0004dc1b) mce_header_pane

0x349d,	// (0x0004dc31) mce_icon_pane

0x349d,	// (0x0004dc31) mce_image_pane

0x6fd5,	// (0x00051769) mce_text_pane_ParamLimits

0x6fd5,	// (0x00051769) mce_text_pane

0x6fe8,	// (0x0005177c) scroll_pane_cp03

0x339f,	// (0x0004db33) scroll_pane_cp04

0x34a6,	// (0x0004dc3a) scroll_pane_cp05_ParamLimits

0x34a6,	// (0x0004dc3a) scroll_pane_cp05

0x6ff0,	// (0x00051784) mce_header_field_pane_ParamLimits

0x6ff0,	// (0x00051784) mce_header_field_pane

0x7010,	// (0x000517a4) mce_header_field_pane_2_ParamLimits

0x7010,	// (0x000517a4) mce_header_field_pane_2

0x7026,	// (0x000517ba) mce_header_field_pane_3

0x702e,	// (0x000517c2) list_single_mce_message_pane_ParamLimits

0x702e,	// (0x000517c2) list_single_mce_message_pane

0x703e,	// (0x000517d2) list_single_mce_smart_pane_ParamLimits

0x703e,	// (0x000517d2) list_single_mce_smart_pane

0x34b2,	// (0x0004dc46) input_focus_pane_cp03

0x34bb,	// (0x0004dc4f) list_header_data_pane

0x7059,	// (0x000517ed) mce_header_field_pane_t1

0x7067,	// (0x000517fb) list_single_mce_header_pane_ParamLimits

0x7067,	// (0x000517fb) list_single_mce_header_pane

0x34c3,	// (0x0004dc57) list_single_mce_header_pane_t1

0x34d2,	// (0x0004dc66) list_single_mce_message_pane_g1

0x34da,	// (0x0004dc6e) list_single_mce_message_pane_t1

0x709e,	// (0x00051832) bg_cale_heading_pane_cp01_ParamLimits

0x709e,	// (0x00051832) bg_cale_heading_pane_cp01

0x34e8,	// (0x0004dc7c) bg_cale_pane_cp02_ParamLimits

0x34e8,	// (0x0004dc7c) bg_cale_pane_cp02

0x70ec,	// (0x00051880) cale_month_corner_pane

0x710b,	// (0x0005189f) cale_month_day_heading_pane_ParamLimits

0x710b,	// (0x0005189f) cale_month_day_heading_pane

0x7171,	// (0x00051905) cale_month_pane_g1_ParamLimits

0x7171,	// (0x00051905) cale_month_pane_g1

0x71b4,	// (0x00051948) cale_month_pane_g2_ParamLimits

0x71b4,	// (0x00051948) cale_month_pane_g2

0x71ec,	// (0x00051980) cale_month_pane_g3_ParamLimits

0x71ec,	// (0x00051980) cale_month_pane_g3

0x7238,	// (0x000519cc) cale_month_pane_g4_ParamLimits

0x7238,	// (0x000519cc) cale_month_pane_g4

0x7284,	// (0x00051a18) cale_month_pane_g5_ParamLimits

0x7284,	// (0x00051a18) cale_month_pane_g5

0x72d0,	// (0x00051a64) cale_month_pane_g6_ParamLimits

0x72d0,	// (0x00051a64) cale_month_pane_g6

0x731c,	// (0x00051ab0) cale_month_pane_g7_ParamLimits

0x731c,	// (0x00051ab0) cale_month_pane_g7

0x7380,	// (0x00051b14) cale_month_pane_g8_ParamLimits

0x7380,	// (0x00051b14) cale_month_pane_g8

0x73e4,	// (0x00051b78) cale_month_pane_g9_ParamLimits

0x73e4,	// (0x00051b78) cale_month_pane_g9

0x7442,	// (0x00051bd6) cale_month_pane_g10_ParamLimits

0x7442,	// (0x00051bd6) cale_month_pane_g10

0x749e,	// (0x00051c32) cale_month_pane_g11_ParamLimits

0x749e,	// (0x00051c32) cale_month_pane_g11

0x74f2,	// (0x00051c86) cale_month_pane_g12_ParamLimits

0x74f2,	// (0x00051c86) cale_month_pane_g12

0x7548,	// (0x00051cdc) cale_month_pane_g13_ParamLimits

0x7548,	// (0x00051cdc) cale_month_pane_g13

0x000c,

0xf225,	// (0x000599b9) cale_month_pane_g_ParamLimits

0xf225,	// (0x000599b9) cale_month_pane_g

0x759e,	// (0x00051d32) cale_month_week_pane

0x75c2,	// (0x00051d56) grid_cale_month_pane_ParamLimits

0x75c2,	// (0x00051d56) grid_cale_month_pane

0x761b,	// (0x00051daf) cale_month_day_heading_pane_t1

0x76a1,	// (0x00051e35) cale_month_day_heading_pane_t2

0x771a,	// (0x00051eae) cale_month_day_heading_pane_t3

0x7793,	// (0x00051f27) cale_month_day_heading_pane_t4

0x780c,	// (0x00051fa0) cale_month_day_heading_pane_t5

0x7885,	// (0x00052019) cale_month_day_heading_pane_t6

0x78fe,	// (0x00052092) cale_month_day_heading_pane_t7

0x0006,

0xf240,	// (0x000599d4) cale_month_day_heading_pane_t

0x31a2,	// (0x0004d936) bg_cale_side_pane_cp01

0x798f,	// (0x00052123) cale_month_week_pane_t1

0x79a8,	// (0x0005213c) cale_month_week_pane_t2

0x79c1,	// (0x00052155) cale_month_week_pane_t3

0x79da,	// (0x0005216e) cale_month_week_pane_t4

0x79f3,	// (0x00052187) cale_month_week_pane_t5

0x7a14,	// (0x000521a8) cale_month_week_pane_t6

0x0005,

0xf24f,	// (0x000599e3) cale_month_week_pane_t

0x7a35,	// (0x000521c9) cell_cale_month_pane_ParamLimits

0x7a35,	// (0x000521c9) cell_cale_month_pane

0x7b57,	// (0x000522eb) cell_cale_month_pane_g1

0x7b63,	// (0x000522f7) cell_cale_month_pane_t1_ParamLimits

0x7b63,	// (0x000522f7) cell_cale_month_pane_t1

0x31b0,	// (0x0004d944) grid_highlight_pane_cp08

0x2f7b,	// (0x0004d70f) main_smil_g1

0x7b8f,	// (0x00052323) smil_status_pane

0x3527,	// (0x0004dcbb) smil_text_pane

0x4e82,	// (0x0004f616) bg_popup_call3_rect_pane_g8

0x4e8a,	// (0x0004f61e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ed,	// (0x00059c81) bg_popup_call3_rect_pane_g

0xdfbb,	// (0x0005874f) smil_status_volume_pane_g1

0x3531,	// (0x0004dcc5) smil_status_pane_t1

0x8d23,	// (0x000534b7) volume_smil_pane

0x3548,	// (0x0004dcdc) list_smil_text_pane

0x7ba2,	// (0x00052336) scroll_pane_cp011

0x7bad,	// (0x00052341) smil_text_list_pane_t1_ParamLimits

0x7bad,	// (0x00052341) smil_text_list_pane_t1

0x7c25,	// (0x000523b9) aid_volume_smil_ParamLimits

0x7c25,	// (0x000523b9) aid_volume_smil

0x2f7b,	// (0x0004d70f) smil_volume_pane_g1

0x2f7b,	// (0x0004d70f) smil_volume_pane_g2

0x0001,

0xf261,	// (0x000599f5) smil_volume_pane_g

0x645d,	// (0x00050bf1) listscroll_cale_day_pane

0x3552,	// (0x0004dce6) bg_cale_pane

0x356a,	// (0x0004dcfe) list_cale_pane

0x358d,	// (0x0004dd21) scroll_pane_cp09

0x359e,	// (0x0004dd32) cale_bg_pane_g1

0x35a6,	// (0x0004dd3a) cale_bg_pane_g2

0x35ae,	// (0x0004dd42) cale_bg_pane_g3

0x35b6,	// (0x0004dd4a) cale_bg_pane_g4

0x35be,	// (0x0004dd52) cale_bg_pane_g5

0x35c6,	// (0x0004dd5a) cale_bg_pane_g6

0x35ce,	// (0x0004dd62) cale_bg_pane_g7

0x35d6,	// (0x0004dd6a) cale_bg_pane_g8

0x35de,	// (0x0004dd72) cale_bg_pane_g9

0x0008,

0xf266,	// (0x000599fa) cale_bg_pane_g

0x7c47,	// (0x000523db) list_cale_time_pane_ParamLimits

0x7c47,	// (0x000523db) list_cale_time_pane

0x35ee,	// (0x0004dd82) list_cale_time_pane_g1_ParamLimits

0x35ee,	// (0x0004dd82) list_cale_time_pane_g1

0x35fa,	// (0x0004dd8e) list_cale_time_pane_g2_ParamLimits

0x35fa,	// (0x0004dd8e) list_cale_time_pane_g2

0x7c69,	// (0x000523fd) list_cale_time_pane_g3_ParamLimits

0x7c69,	// (0x000523fd) list_cale_time_pane_g3

0x7c77,	// (0x0005240b) list_cale_time_pane_g4_ParamLimits

0x7c77,	// (0x0005240b) list_cale_time_pane_g4

0x7c85,	// (0x00052419) list_cale_time_pane_g5_ParamLimits

0x7c85,	// (0x00052419) list_cale_time_pane_g5

0x0005,

0xf279,	// (0x00059a0d) list_cale_time_pane_g_ParamLimits

0xf279,	// (0x00059a0d) list_cale_time_pane_g

0x3614,	// (0x0004dda8) list_cale_time_pane_t1_ParamLimits

0x3614,	// (0x0004dda8) list_cale_time_pane_t1

0x363c,	// (0x0004ddd0) list_cale_time_pane_t2_ParamLimits

0x363c,	// (0x0004ddd0) list_cale_time_pane_t2

0x7f28,	// (0x000526bc) aid_blid_cardinal_pane

0x7f6a,	// (0x000526fe) compass_pane_t4

0x3664,	// (0x0004ddf8) list_cale_time_pane_t4_ParamLimits

0x3664,	// (0x0004ddf8) list_cale_time_pane_t4

0x7f78,	// (0x0005270c) compass_pane_t5

0x7f88,	// (0x0005271c) compass_pane_t6

0x7f96,	// (0x0005272a) compass_pane_t7

0x3b19,	// (0x0004e2ad) navi_pane_cc_t1

0x3cf6,	// (0x0004e48a) aid_phob_thumbnail_center_pane

0x8414,	// (0x00052ba8) main_postcard_pane_g4_ParamLimits

0x0002,

0xf286,	// (0x00059a1a) list_cale_time_pane_t_ParamLimits

0xf286,	// (0x00059a1a) list_cale_time_pane_t

0x2951,	// (0x0004d0e5) bg_popup_window_pane_cp02_ParamLimits

0x2951,	// (0x0004d0e5) bg_popup_window_pane_cp02

0x368c,	// (0x0004de20) heading_pane_cp01_ParamLimits

0x368c,	// (0x0004de20) heading_pane_cp01

0x3698,	// (0x0004de2c) loc_req_pane_ParamLimits

0x3698,	// (0x0004de2c) loc_req_pane

0x36a8,	// (0x0004de3c) loc_type_pane_ParamLimits

0x36a8,	// (0x0004de3c) loc_type_pane

0x36ba,	// (0x0004de4e) loc_type_pane_t1_ParamLimits

0x36ba,	// (0x0004de4e) loc_type_pane_t1

0x36cc,	// (0x0004de60) loc_type_pane_t2_ParamLimits

0x36cc,	// (0x0004de60) loc_type_pane_t2

0x36de,	// (0x0004de72) loc_type_pane_t3_ParamLimits

0x36de,	// (0x0004de72) loc_type_pane_t3

0x0002,

0xf28d,	// (0x00059a21) loc_type_pane_t_ParamLimits

0xf28d,	// (0x00059a21) loc_type_pane_t

0x36f0,	// (0x0004de84) list_loc_req_pane

0x36fa,	// (0x0004de8e) scroll_pane_cp012

0x7c93,	// (0x00052427) list_single_loc_request_popup_menu_pane_ParamLimits

0x7c93,	// (0x00052427) list_single_loc_request_popup_menu_pane

0x3705,	// (0x0004de99) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3705,	// (0x0004de99) list_single_loc_request_popup_menu_pane_g1

0x3711,	// (0x0004dea5) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3711,	// (0x0004dea5) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf294,	// (0x00059a28) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf294,	// (0x00059a28) list_single_loc_request_popup_menu_pane_g

0x371d,	// (0x0004deb1) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x371d,	// (0x0004deb1) list_single_loc_request_popup_menu_pane_t1

0x7ca5,	// (0x00052439) bg_popup_window_pane_cp03_ParamLimits

0x7ca5,	// (0x00052439) bg_popup_window_pane_cp03

0x7cb3,	// (0x00052447) heading_loc_req_pane_ParamLimits

0x7cb3,	// (0x00052447) heading_loc_req_pane

0x7cbf,	// (0x00052453) popup_dyc_status_message_window_g1_ParamLimits

0x7cbf,	// (0x00052453) popup_dyc_status_message_window_g1

0x7ccb,	// (0x0005245f) popup_dyc_status_message_window_t1_ParamLimits

0x7ccb,	// (0x0005245f) popup_dyc_status_message_window_t1

0x7cdd,	// (0x00052471) popup_dyc_status_message_window_t2_ParamLimits

0x7cdd,	// (0x00052471) popup_dyc_status_message_window_t2

0x7cef,	// (0x00052483) popup_dyc_status_message_window_t3_ParamLimits

0x7cef,	// (0x00052483) popup_dyc_status_message_window_t3

0x0002,

0xf299,	// (0x00059a2d) popup_dyc_status_message_window_t_ParamLimits

0xf299,	// (0x00059a2d) popup_dyc_status_message_window_t

0x2cfa,	// (0x0004d48e) bg_heading_pane_cp01

0x3733,	// (0x0004dec7) heading_loc_req_pane_g1

0x373b,	// (0x0004decf) heading_loc_req_pane_g2

0x3743,	// (0x0004ded7) heading_loc_req_pane_g3

0x0002,

0xf2a0,	// (0x00059a34) heading_loc_req_pane_g

0x374b,	// (0x0004dedf) heading_loc_req_pane_t1

0x376a,	// (0x0004defe) bg_popup_sub_pane_cp01_ParamLimits

0x376a,	// (0x0004defe) bg_popup_sub_pane_cp01

0x3778,	// (0x0004df0c) popup_cale_events_window_g1_ParamLimits

0x3778,	// (0x0004df0c) popup_cale_events_window_g1

0x3798,	// (0x0004df2c) popup_cale_events_window_g2_ParamLimits

0x3798,	// (0x0004df2c) popup_cale_events_window_g2

0x0001,

0xf2c2,	// (0x00059a56) popup_cale_events_window_g_ParamLimits

0xf2c2,	// (0x00059a56) popup_cale_events_window_g

0x37b8,	// (0x0004df4c) popup_cale_events_window_t1_ParamLimits

0x37b8,	// (0x0004df4c) popup_cale_events_window_t1

0x37ca,	// (0x0004df5e) popup_cale_events_window_t2_ParamLimits

0x37ca,	// (0x0004df5e) popup_cale_events_window_t2

0x3808,	// (0x0004df9c) popup_cale_events_window_t3_ParamLimits

0x3808,	// (0x0004df9c) popup_cale_events_window_t3

0x3842,	// (0x0004dfd6) popup_cale_events_window_t4_ParamLimits

0x3842,	// (0x0004dfd6) popup_cale_events_window_t4

0x0003,

0xf2c7,	// (0x00059a5b) popup_cale_events_window_t_ParamLimits

0xf2c7,	// (0x00059a5b) popup_cale_events_window_t

0x7d19,	// (0x000524ad) call_type_pane

0x38d9,	// (0x0004e06d) popup_call_status_window_g1

0x7d25,	// (0x000524b9) popup_call_status_window_g2

0x7d31,	// (0x000524c5) popup_call_status_window_g3

0x0002,

0xf2d0,	// (0x00059a64) popup_call_status_window_g

0x3878,	// (0x0004e00c) call_type_pane_g1

0x3881,	// (0x0004e015) call_type_pane_g2

0x0001,

0xf2d7,	// (0x00059a6b) call_type_pane_g

0x2cfa,	// (0x0004d48e) bg_popup_sub_pane_cp02

0x388a,	// (0x0004e01e) listscroll_popup_wml_pane

0x3892,	// (0x0004e026) list_wml_pane

0x389c,	// (0x0004e030) scroll_pane_cp013

0x38a7,	// (0x0004e03b) list_single_graphic_popup_wml_pane_ParamLimits

0x38a7,	// (0x0004e03b) list_single_graphic_popup_wml_pane

0x2f7b,	// (0x0004d70f) list_single_graphic_popup_wml_pane_g1

0x38bb,	// (0x0004e04f) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2dc,	// (0x00059a70) list_single_graphic_popup_wml_pane_g

0x38c3,	// (0x0004e057) list_single_graphic_popup_wml_pane_t1

0x38d1,	// (0x0004e065) aid_call_pane

0x2f5b,	// (0x0004d6ef) popup_clock_analogue_window_g1

0x2f5b,	// (0x0004d6ef) popup_clock_analogue_window_g2

0x7d3d,	// (0x000524d1) popup_clock_analogue_window_g3

0x7d3d,	// (0x000524d1) popup_clock_analogue_window_g4

0x2f7b,	// (0x0004d70f) popup_clock_analogue_window_g5

0x0004,

0xf2e1,	// (0x00059a75) popup_clock_analogue_window_g

0x7d45,	// (0x000524d9) popup_clock_analogue_window_t1

0x7d53,	// (0x000524e7) clock_digital_number_pane_ParamLimits

0x7d53,	// (0x000524e7) clock_digital_number_pane

0x7d5f,	// (0x000524f3) clock_digital_number_pane_cp02_ParamLimits

0x7d5f,	// (0x000524f3) clock_digital_number_pane_cp02

0x7d6b,	// (0x000524ff) clock_digital_number_pane_cp03_ParamLimits

0x7d6b,	// (0x000524ff) clock_digital_number_pane_cp03

0x7d77,	// (0x0005250b) clock_digital_number_pane_cp04_ParamLimits

0x7d77,	// (0x0005250b) clock_digital_number_pane_cp04

0x7d87,	// (0x0005251b) clock_digital_separator_pane_ParamLimits

0x7d87,	// (0x0005251b) clock_digital_separator_pane

0x7d93,	// (0x00052527) popup_clock_digital_window_t1

0x2f7b,	// (0x0004d70f) clock_digital_number_pane_g1

0x2f7b,	// (0x0004d70f) clock_digital_number_pane_g2

0x0001,

0xf261,	// (0x000599f5) clock_digital_number_pane_g

0x2f7b,	// (0x0004d70f) clock_digital_separator_pane_g1

0x2f7b,	// (0x0004d70f) clock_digital_separator_pane_g2

0x0001,

0xf261,	// (0x000599f5) clock_digital_separator_pane_g

0x2cfa,	// (0x0004d48e) bg_popup_window_pane_cp04

0x38ef,	// (0x0004e083) heading_pane_cp03

0x31f4,	// (0x0004d988) listscroll_popup_gms_pane

0x2cfa,	// (0x0004d48e) grid_large_graphic_popup_pane

0x38f8,	// (0x0004e08c) listscroll_popup_gms_pane_g1

0x3901,	// (0x0004e095) listscroll_popup_gms_pane_g2

0x0001,

0xf2ec,	// (0x00059a80) listscroll_popup_gms_pane_g

0x390a,	// (0x0004e09e) scroll_pane_cp014

0x28b2,	// (0x0004d046) cell_large_graphic_popup_pane_ParamLimits

0x28b2,	// (0x0004d046) cell_large_graphic_popup_pane

0x2fd0,	// (0x0004d764) cell_large_graphic_popup_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) cell_large_graphic_popup_pane_g1

0x3913,	// (0x0004e0a7) cell_large_graphic_popup_pane_g2_ParamLimits

0x3913,	// (0x0004e0a7) cell_large_graphic_popup_pane_g2

0x3921,	// (0x0004e0b5) cell_large_graphic_popup_pane_g3_ParamLimits

0x3921,	// (0x0004e0b5) cell_large_graphic_popup_pane_g3

0x392f,	// (0x0004e0c3) cell_large_graphic_popup_pane_g4_ParamLimits

0x392f,	// (0x0004e0c3) cell_large_graphic_popup_pane_g4

0x0003,

0xf2f1,	// (0x00059a85) cell_large_graphic_popup_pane_g_ParamLimits

0xf2f1,	// (0x00059a85) cell_large_graphic_popup_pane_g

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp010

0x2f7b,	// (0x0004d70f) bg_popup_call_pane_g1

0x3940,	// (0x0004e0d4) list_single_graphic_popup_conf_pane_ParamLimits

0x3940,	// (0x0004e0d4) list_single_graphic_popup_conf_pane

0x3953,	// (0x0004e0e7) list_highlight_pane_cp01

0x395c,	// (0x0004e0f0) list_single_graphic_popup_conf_pane_g1

0x3964,	// (0x0004e0f8) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2fa,	// (0x00059a8e) list_single_graphic_popup_conf_pane_g

0x396c,	// (0x0004e100) list_single_graphic_popup_conf_pane_t1

0x397a,	// (0x0004e10e) linegrid_cams_pane_g1

0x7db0,	// (0x00052544) linegrid_cams_pane_g2

0x3133,	// (0x0004d8c7) linegrid_cams_pane_g3

0x3983,	// (0x0004e117) linegrid_cams_pane_g4

0x7db9,	// (0x0005254d) linegrid_cams_pane_g5

0x7dc2,	// (0x00052556) linegrid_cams_pane_g6

0x31e3,	// (0x0004d977) linegrid_cams_pane_g7

0x0006,

0xf2ff,	// (0x00059a93) linegrid_cams_pane_g

0x398c,	// (0x0004e120) popup_clock_analogue_window

0x398c,	// (0x0004e120) popup_clock_digital_window

0x2cfa,	// (0x0004d48e) popup_phob_thumbnail_window

0x2f7b,	// (0x0004d70f) call_video_uplink_pane_g1

0x3995,	// (0x0004e129) call_video_uplink_pane_g2

0x0001,

0xf30e,	// (0x00059aa2) call_video_uplink_pane_g

0x399d,	// (0x0004e131) video_uplink_pane

0x39a5,	// (0x0004e139) mce_image_pane_g1

0x7dcb,	// (0x0005255f) mce_image_pane_g2

0x7dd5,	// (0x00052569) mce_image_pane_g3

0x7ddd,	// (0x00052571) mce_image_pane_g4

0x7de5,	// (0x00052579) mce_image_pane_g5

0x0004,

0xf313,	// (0x00059aa7) mce_image_pane_g

0x39af,	// (0x0004e143) control_top_pane_stacon_cp01_ParamLimits

0x39af,	// (0x0004e143) control_top_pane_stacon_cp01

0x39c3,	// (0x0004e157) uni_indicator_pane_stacon_cp01_ParamLimits

0x39c3,	// (0x0004e157) uni_indicator_pane_stacon_cp01

0x39d4,	// (0x0004e168) bg_popup_sub_pane_cp03

0x39de,	// (0x0004e172) chi_dic_find_pane

0x7ded,	// (0x00052581) listscroll_chi_dic_pane

0x39e6,	// (0x0004e17a) main_pane_chidic_g1

0x39ee,	// (0x0004e182) chi_dic_find_pane_t1

0x39fc,	// (0x0004e190) find_chidic_pane

0x3a05,	// (0x0004e199) chi_dic_list_pane_ParamLimits

0x3a05,	// (0x0004e199) chi_dic_list_pane

0x3a16,	// (0x0004e1aa) scroll_pane_cp020

0x3a1e,	// (0x0004e1b2) find_chidic_pane_t1

0x2cfa,	// (0x0004d48e) input_focus_pane_cp06

0x7e01,	// (0x00052595) list_chi_dic_pane_ParamLimits

0x7e01,	// (0x00052595) list_chi_dic_pane

0x7e1b,	// (0x000525af) list_chi_dic_pane_t1_ParamLimits

0x7e1b,	// (0x000525af) list_chi_dic_pane_t1

0x2cfa,	// (0x0004d48e) list_highlight_pane_cp020

0x3a2d,	// (0x0004e1c1) bg_cale_heading_pane_g1

0x7e2e,	// (0x000525c2) bg_cale_heading_pane_g2

0x7e36,	// (0x000525ca) bg_cale_heading_pane_g3

0x7e3e,	// (0x000525d2) bg_cale_heading_pane_g4

0x7e48,	// (0x000525dc) bg_cale_heading_pane_g5

0x7e52,	// (0x000525e6) bg_cale_heading_pane_g6

0x7e5a,	// (0x000525ee) bg_cale_heading_pane_g7

0x7e62,	// (0x000525f6) bg_cale_heading_pane_g8

0x7e6c,	// (0x00052600) bg_cale_heading_pane_g9

0x0008,

0xf31e,	// (0x00059ab2) bg_cale_heading_pane_g

0x3a2d,	// (0x0004e1c1) bg_cale_side_pane_g1

0x7e76,	// (0x0005260a) bg_cale_side_pane_g2

0x7e80,	// (0x00052614) bg_cale_side_pane_g3

0x7e8a,	// (0x0005261e) bg_cale_side_pane_g4

0x7e94,	// (0x00052628) bg_cale_side_pane_g5

0x7e9e,	// (0x00052632) bg_cale_side_pane_g6

0x7ea8,	// (0x0005263c) bg_cale_side_pane_g7

0x7eb2,	// (0x00052646) bg_cale_side_pane_g8

0x7eba,	// (0x0005264e) bg_cale_side_pane_g9

0x0008,

0xf331,	// (0x00059ac5) bg_cale_side_pane_g

0x7ec2,	// (0x00052656) popup_call_status_window_ParamLimits

0x7ec2,	// (0x00052656) popup_call_status_window

0x3a35,	// (0x0004e1c9) stacon_top_pane

0x3a3d,	// (0x0004e1d1) status_pane_ParamLimits

0x3a3d,	// (0x0004e1d1) status_pane

0x3a52,	// (0x0004e1e6) status_small_pane

0x3a5a,	// (0x0004e1ee) control_pane

0x2cfa,	// (0x0004d48e) stacon_bottom_pane

0x3a62,	// (0x0004e1f6) list_single_mce_smart_pane_t1_ParamLimits

0x3a62,	// (0x0004e1f6) list_single_mce_smart_pane_t1

0x3a75,	// (0x0004e209) list_single_mce_smart_pane_t2_ParamLimits

0x3a75,	// (0x0004e209) list_single_mce_smart_pane_t2

0x0001,

0xf344,	// (0x00059ad8) list_single_mce_smart_pane_t_ParamLimits

0xf344,	// (0x00059ad8) list_single_mce_smart_pane_t

0x7ece,	// (0x00052662) compass_pane

0x7eda,	// (0x0005266e) main_location2_pane_t1

0x7eee,	// (0x00052682) main_location2_pane_t2

0x7f02,	// (0x00052696) main_location2_pane_t3

0x0003,

0xf349,	// (0x00059add) main_location2_pane_t

0x3a94,	// (0x0004e228) compass_pane_g1_ParamLimits

0x3a94,	// (0x0004e228) compass_pane_g1

0x7f4c,	// (0x000526e0) compass_pane_t1

0x7f5b,	// (0x000526ef) compass_pane_t2

0x0005,

0xf352,	// (0x00059ae6) compass_pane_t

0x7fa6,	// (0x0005273a) text_secondary_cp61

0x3b10,	// (0x0004e2a4) navi_pane_cams_g5

0x3b8c,	// (0x0004e320) navi_pane_im_t1

0x3b9a,	// (0x0004e32e) navi_pane_mp_g1_ParamLimits

0x3b9a,	// (0x0004e32e) navi_pane_mp_g1

0x3bae,	// (0x0004e342) navi_pane_mp_g2_ParamLimits

0x3bae,	// (0x0004e342) navi_pane_mp_g2

0x3bba,	// (0x0004e34e) navi_pane_mp_g3_ParamLimits

0x3bba,	// (0x0004e34e) navi_pane_mp_g3

0x0002,

0xf366,	// (0x00059afa) navi_pane_mp_g_ParamLimits

0xf366,	// (0x00059afa) navi_pane_mp_g

0x3bc6,	// (0x0004e35a) navi_pane_mp_t1

0x3bd4,	// (0x0004e368) navi_pane_mp_t2

0x0002,

0xf36d,	// (0x00059b01) navi_pane_mp_t

0x3c3f,	// (0x0004e3d3) navi_pane_vt_g1

0x3bc6,	// (0x0004e35a) navi_pane_vt_t1

0x3c47,	// (0x0004e3db) navi_slider_pane

0x31f4,	// (0x0004d988) zooming_pane

0x3c57,	// (0x0004e3eb) navi_slider_pane_g1

0x7fe1,	// (0x00052775) navi_slider_pane_g2

0x0006,

0xf374,	// (0x00059b08) navi_slider_pane_g

0x3c7b,	// (0x0004e40f) aid_levels_zoom

0x3c83,	// (0x0004e417) zooming_pane_g1

0x3c8b,	// (0x0004e41f) zooming_pane_g2

0x3c8b,	// (0x0004e41f) zooming_pane_g3

0x0002,

0xf383,	// (0x00059b17) zooming_pane_g

0x3c93,	// (0x0004e427) level_10_zoom

0x3c9c,	// (0x0004e430) level_11_zoom

0x3ca5,	// (0x0004e439) level_1_zoom

0x3cae,	// (0x0004e442) level_2_zoom

0x3cb7,	// (0x0004e44b) level_3_zoom

0x3cc0,	// (0x0004e454) level_4_zoom

0x3cc9,	// (0x0004e45d) level_5_zoom

0x3cd2,	// (0x0004e466) level_6_zoom

0x3cdb,	// (0x0004e46f) level_7_zoom

0x3ce4,	// (0x0004e478) level_8_zoom

0x3ced,	// (0x0004e481) level_9_zoom

0x3cfe,	// (0x0004e492) popup_phob_thumbnail_window_g1

0x3d06,	// (0x0004e49a) popup_phob_thumbnail_window_g2

0x0001,

0xf38a,	// (0x00059b1e) popup_phob_thumbnail_window_g

0x89ce,	// (0x00053162) level_1_location

0x89d6,	// (0x0005316a) level_2_location

0x89de,	// (0x00053172) level_3_location

0x89e8,	// (0x0005317c) level_4_location

0x31f4,	// (0x0004d988) level_5_location

0x7ff3,	// (0x00052787) mce_icon_pane_g1

0x7ffb,	// (0x0005278f) mce_icon_pane_g2

0x0001,

0xf38f,	// (0x00059b23) mce_icon_pane_g

0x8003,	// (0x00052797) main_mup_pane_g1_ParamLimits

0x8003,	// (0x00052797) main_mup_pane_g1

0x2fec,	// (0x0004d780) main_mup_pane_g2_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g2

0x2fec,	// (0x0004d780) main_mup_pane_g3_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g3

0x2fec,	// (0x0004d780) main_mup_pane_g4_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g4

0x2fec,	// (0x0004d780) main_mup_pane_g5_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g5

0x2fec,	// (0x0004d780) main_mup_pane_g6_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g6

0x2fec,	// (0x0004d780) main_mup_pane_g7_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g7

0x2fec,	// (0x0004d780) main_mup_pane_g8_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g8

0x2fec,	// (0x0004d780) main_mup_pane_g9_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g9

0x2fec,	// (0x0004d780) main_mup_pane_g10_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g10

0x2fec,	// (0x0004d780) main_mup_pane_g11_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g11

0x2fde,	// (0x0004d772) main_mup_pane_g12_ParamLimits

0x2fde,	// (0x0004d772) main_mup_pane_g12

0x2fec,	// (0x0004d780) main_mup_pane_g13_ParamLimits

0x2fec,	// (0x0004d780) main_mup_pane_g13

0x000c,

0xf394,	// (0x00059b28) main_mup_pane_g_ParamLimits

0xf394,	// (0x00059b28) main_mup_pane_g

0x2ffa,	// (0x0004d78e) main_mup_pane_t1_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup_pane_t1

0x2ffa,	// (0x0004d78e) main_mup_pane_t2_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup_pane_t2

0x2ffa,	// (0x0004d78e) main_mup_pane_t3_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup_pane_t3

0x324c,	// (0x0004d9e0) main_mup_pane_t4_ParamLimits

0x324c,	// (0x0004d9e0) main_mup_pane_t4

0x324c,	// (0x0004d9e0) main_mup_pane_t5_ParamLimits

0x324c,	// (0x0004d9e0) main_mup_pane_t5

0x31fc,	// (0x0004d990) main_mup_pane_t6_ParamLimits

0x31fc,	// (0x0004d990) main_mup_pane_t6

0x0005,

0xf3af,	// (0x00059b43) main_mup_pane_t_ParamLimits

0xf3af,	// (0x00059b43) main_mup_pane_t

0x2f37,	// (0x0004d6cb) mup_progress_pane_ParamLimits

0x2f37,	// (0x0004d6cb) mup_progress_pane

0xdf38,	// (0x000586cc) mup_visualizer_pane_ParamLimits

0xdf38,	// (0x000586cc) mup_visualizer_pane

0xdf38,	// (0x000586cc) mup_volume_pane_ParamLimits

0xdf38,	// (0x000586cc) mup_volume_pane

0x2fde,	// (0x0004d772) mup_visualizer_pane_g1_ParamLimits

0x2fde,	// (0x0004d772) mup_visualizer_pane_g1

0x3d0e,	// (0x0004e4a2) mup_visualizer_pane_g2_ParamLimits

0x3d0e,	// (0x0004e4a2) mup_visualizer_pane_g2

0x2fd0,	// (0x0004d764) mup_visualizer_pane_g3_ParamLimits

0x2fd0,	// (0x0004d764) mup_visualizer_pane_g3

0x0002,

0xf3bc,	// (0x00059b50) mup_visualizer_pane_g_ParamLimits

0xf3bc,	// (0x00059b50) mup_visualizer_pane_g

0x322a,	// (0x0004d9be) mup_volume_pane_g1

0x322a,	// (0x0004d9be) mup_volume_pane_g2

0x0001,

0xf3c3,	// (0x00059b57) mup_volume_pane_g

0x322a,	// (0x0004d9be) mup_progress_pane_g1

0x322a,	// (0x0004d9be) mup_progress_pane_g2

0x322a,	// (0x0004d9be) mup_progress_pane_g3

0x0002,

0xf3c8,	// (0x00059b5c) mup_progress_pane_g

0x2cfa,	// (0x0004d48e) bg_popup_window_pane_cp05

0x3d1c,	// (0x0004e4b0) heading_pane_cp02_ParamLimits

0x3d1c,	// (0x0004e4b0) heading_pane_cp02

0x3d36,	// (0x0004e4ca) list_popup_blid_pane

0x3d3e,	// (0x0004e4d2) list_blid_sat_info_pane_ParamLimits

0x3d3e,	// (0x0004e4d2) list_blid_sat_info_pane

0x3d51,	// (0x0004e4e5) list_blid_sat_info_pane_g1

0x3d59,	// (0x0004e4ed) list_blid_sat_info_pane_t1

0x8100,	// (0x00052894) mup_equalizer_pane_ParamLimits

0x8100,	// (0x00052894) mup_equalizer_pane

0x8121,	// (0x000528b5) mup_equalizer_pane_cp1_ParamLimits

0x8121,	// (0x000528b5) mup_equalizer_pane_cp1

0x8142,	// (0x000528d6) mup_equalizer_pane_cp2_ParamLimits

0x8142,	// (0x000528d6) mup_equalizer_pane_cp2

0x8163,	// (0x000528f7) mup_equalizer_pane_cp3_ParamLimits

0x8163,	// (0x000528f7) mup_equalizer_pane_cp3

0x8184,	// (0x00052918) mup_equalizer_pane_cp4_ParamLimits

0x8184,	// (0x00052918) mup_equalizer_pane_cp4

0x81a5,	// (0x00052939) mup_equalizer_pane_cp5

0x81bb,	// (0x0005294f) mup_equalizer_pane_cp6

0x81d3,	// (0x00052967) mup_equalizer_pane_cp7

0x4f02,	// (0x0004f696) bg_popup_call_poc_act_pane_g9

0x4f0a,	// (0x0004f69e) bg_popup_call_poc_act_pane_g10

0x4f12,	// (0x0004f6a6) bg_popup_call_poc_act_pane_g11

0x000a,

0x2f63,	// (0x0004d6f7) mup_scale_pane

0x2f7b,	// (0x0004d70f) mup_scale_pane_g1

0x3d67,	// (0x0004e4fb) mup_scale_pane_g2

0x0006,

0xf3e4,	// (0x00059b78) mup_scale_pane_g

0x3d8b,	// (0x0004e51f) msg_data_pane

0x3d93,	// (0x0004e527) scroll_pane_cp017

0x81fd,	// (0x00052991) bg_list_pane_cp04_ParamLimits

0x81fd,	// (0x00052991) bg_list_pane_cp04

0x3d9b,	// (0x0004e52f) msg_data_pane_g1

0x8219,	// (0x000529ad) msg_data_pane_g2

0x8223,	// (0x000529b7) msg_data_pane_g3

0x822b,	// (0x000529bf) msg_data_pane_g4

0x8233,	// (0x000529c7) msg_data_pane_g5

0x823b,	// (0x000529cf) msg_data_pane_g6

0x8243,	// (0x000529d7) msg_data_pane_g7

0x0006,

0xf3f3,	// (0x00059b87) msg_data_pane_g

0x824b,	// (0x000529df) msg_text_pane_ParamLimits

0x824b,	// (0x000529df) msg_text_pane

0x829a,	// (0x00052a2e) qrid_highlight_pane_cp011_ParamLimits

0x829a,	// (0x00052a2e) qrid_highlight_pane_cp011

0x2cfa,	// (0x0004d48e) msg_body_pane

0x2cfa,	// (0x0004d48e) msg_header_pane

0x3dac,	// (0x0004e540) input_focus_pane_cp07

0x82c0,	// (0x00052a54) msg_header_pane_t1_ParamLimits

0x82c0,	// (0x00052a54) msg_header_pane_t1

0x82d6,	// (0x00052a6a) msg_header_pane_t2_ParamLimits

0x82d6,	// (0x00052a6a) msg_header_pane_t2

0x0001,

0xf407,	// (0x00059b9b) msg_header_pane_t_ParamLimits

0xf407,	// (0x00059b9b) msg_header_pane_t

0x3dc1,	// (0x0004e555) msg_body_pane_g1

0x82ed,	// (0x00052a81) msg_body_pane_t1_ParamLimits

0x82ed,	// (0x00052a81) msg_body_pane_t1

0x05e3,	// (0x0004ad77) msg_body_pane_t2_ParamLimits

0x05e3,	// (0x0004ad77) msg_body_pane_t2

0x05f5,	// (0x0004ad89) msg_body_pane_t3_ParamLimits

0x05f5,	// (0x0004ad89) msg_body_pane_t3

0x0002,

0xf40c,	// (0x00059ba0) msg_body_pane_t_ParamLimits

0xf40c,	// (0x00059ba0) msg_body_pane_t

0x8370,	// (0x00052b04) main_viewer_pane_g1_ParamLimits

0x8370,	// (0x00052b04) main_viewer_pane_g1

0x837c,	// (0x00052b10) main_viewer_pane_g2_ParamLimits

0x837c,	// (0x00052b10) main_viewer_pane_g2

0x8388,	// (0x00052b1c) main_viewer_pane_g3_ParamLimits

0x8388,	// (0x00052b1c) main_viewer_pane_g3

0x8399,	// (0x00052b2d) main_viewer_pane_g4_ParamLimits

0x8399,	// (0x00052b2d) main_viewer_pane_g4

0x83aa,	// (0x00052b3e) main_viewer_pane_g5_ParamLimits

0x83aa,	// (0x00052b3e) main_viewer_pane_g5

0x83aa,	// (0x00052b3e) main_viewer_pane_g7_ParamLimits

0x83aa,	// (0x00052b3e) main_viewer_pane_g7

0x3705,	// (0x0004de99) main_viewer_pane_g8_ParamLimits

0x3705,	// (0x0004de99) main_viewer_pane_g8

0x0007,

0xf41c,	// (0x00059bb0) main_viewer_pane_g_ParamLimits

0xf41c,	// (0x00059bb0) main_viewer_pane_g

0x3dc9,	// (0x0004e55d) viewer_content_pane_ParamLimits

0x3dc9,	// (0x0004e55d) viewer_content_pane

0x83e8,	// (0x00052b7c) main_postcard_pane_g1_ParamLimits

0x83e8,	// (0x00052b7c) main_postcard_pane_g1

0x83f6,	// (0x00052b8a) main_postcard_pane_g2_ParamLimits

0x83f6,	// (0x00052b8a) main_postcard_pane_g2

0x8404,	// (0x00052b98) main_postcard_pane_g3_ParamLimits

0x8404,	// (0x00052b98) main_postcard_pane_g3

0x0005,

0xf42d,	// (0x00059bc1) main_postcard_pane_g_ParamLimits

0xf42d,	// (0x00059bc1) main_postcard_pane_g

0x8414,	// (0x00052ba8) main_postcard_pane_g4

0xdfce,	// (0x00058762) smil_status_volume_pane_g2

0x8440,	// (0x00052bd4) postcard_pane_ParamLimits

0x8440,	// (0x00052bd4) postcard_pane

0x38d9,	// (0x0004e06d) postcard_pane_g1_ParamLimits

0x38d9,	// (0x0004e06d) postcard_pane_g1

0x8472,	// (0x00052c06) postcard_pane_g2_ParamLimits

0x8472,	// (0x00052c06) postcard_pane_g2

0x847e,	// (0x00052c12) postcard_pane_g3_ParamLimits

0x847e,	// (0x00052c12) postcard_pane_g3

0x3de5,	// (0x0004e579) postcard_pane_g4_ParamLimits

0x3de5,	// (0x0004e579) postcard_pane_g4

0x848a,	// (0x00052c1e) postcard_pane_g5_ParamLimits

0x848a,	// (0x00052c1e) postcard_pane_g5

0x8496,	// (0x00052c2a) postcard_pane_g6_ParamLimits

0x8496,	// (0x00052c2a) postcard_pane_g6

0x3dd7,	// (0x0004e56b) postcard_pane_g7_ParamLimits

0x3dd7,	// (0x0004e56b) postcard_pane_g7

0x0006,

0xf43a,	// (0x00059bce) postcard_pane_g_ParamLimits

0xf43a,	// (0x00059bce) postcard_pane_g

0x84a2,	// (0x00052c36) main_mp2_pane_g1_ParamLimits

0x84a2,	// (0x00052c36) main_mp2_pane_g1

0x84ae,	// (0x00052c42) main_mp2_pane_g2_ParamLimits

0x84ae,	// (0x00052c42) main_mp2_pane_g2

0x84ba,	// (0x00052c4e) main_mp2_pane_g3_ParamLimits

0x84ba,	// (0x00052c4e) main_mp2_pane_g3

0x0002,

0xf449,	// (0x00059bdd) main_mp2_pane_g_ParamLimits

0xf449,	// (0x00059bdd) main_mp2_pane_g

0x84c6,	// (0x00052c5a) main_mp2_pane_t1_ParamLimits

0x84c6,	// (0x00052c5a) main_mp2_pane_t1

0x84dd,	// (0x00052c71) main_mp2_pane_t2_ParamLimits

0x84dd,	// (0x00052c71) main_mp2_pane_t2

0x84f1,	// (0x00052c85) main_mp2_pane_t3_ParamLimits

0x84f1,	// (0x00052c85) main_mp2_pane_t3

0x0002,

0xf450,	// (0x00059be4) main_mp2_pane_t_ParamLimits

0xf450,	// (0x00059be4) main_mp2_pane_t

0x3df3,	// (0x0004e587) pec_content_pane_ParamLimits

0x3df3,	// (0x0004e587) pec_content_pane

0x339f,	// (0x0004db33) scroll_pane_cp015

0x3e05,	// (0x0004e599) pec_attribute_pane_ParamLimits

0x3e05,	// (0x0004e599) pec_attribute_pane

0x8503,	// (0x00052c97) pec_content_pane_g1_ParamLimits

0x8503,	// (0x00052c97) pec_content_pane_g1

0x3e15,	// (0x0004e5a9) pec_content_pane_t1_ParamLimits

0x3e15,	// (0x0004e5a9) pec_content_pane_t1

0x3e27,	// (0x0004e5bb) pec_content_pane_t2_ParamLimits

0x3e27,	// (0x0004e5bb) pec_content_pane_t2

0x0001,

0xf457,	// (0x00059beb) pec_content_pane_t_ParamLimits

0xf457,	// (0x00059beb) pec_content_pane_t

0x850f,	// (0x00052ca3) list_single_graphic_pane_cp01_ParamLimits

0x850f,	// (0x00052ca3) list_single_graphic_pane_cp01

0x2f63,	// (0x0004d6f7) bg_popup_sub_pane_cp04

0x3e39,	// (0x0004e5cd) popup_mup_playback_window_g1

0x3e45,	// (0x0004e5d9) popup_mup_playback_window_t1

0x3e5a,	// (0x0004e5ee) popup_mup_playback_window_t2

0x0001,

0xf45c,	// (0x00059bf0) popup_mup_playback_window_t

0x3e91,	// (0x0004e625) main_image_pane_g1_ParamLimits

0x3e91,	// (0x0004e625) main_image_pane_g1

0x3ed4,	// (0x0004e668) scroll_pane_cp018_ParamLimits

0x3ed4,	// (0x0004e668) scroll_pane_cp018

0x3eec,	// (0x0004e680) scroll_pane_cp016_ParamLimits

0x3eec,	// (0x0004e680) scroll_pane_cp016

0x85a8,	// (0x00052d3c) smil2_image_pane_ParamLimits

0x85a8,	// (0x00052d3c) smil2_image_pane

0x85d8,	// (0x00052d6c) smil2_root_pane_ParamLimits

0x85d8,	// (0x00052d6c) smil2_root_pane

0x8604,	// (0x00052d98) smil2_text_pane_ParamLimits

0x8604,	// (0x00052d98) smil2_text_pane

0x2cfa,	// (0x0004d48e) bg_list_pane_cp06

0x3f28,	// (0x0004e6bc) grid_radio_pane

0x2cfa,	// (0x0004d48e) bg_popup_window_pane_cp06

0x3f30,	// (0x0004e6c4) main_fmradio_pane_t1

0x4f1a,	// (0x0004f6ae) heading_pane_cp04

0x3f3e,	// (0x0004e6d2) main_fmradio_pane_t2

0x4f22,	// (0x0004f6b6) popup_cale_lunar_info_window_g1

0x3f4c,	// (0x0004e6e0) main_fmradio_pane_t3

0x4f2a,	// (0x0004f6be) popup_cale_lunar_info_window_g2

0x3f5a,	// (0x0004e6ee) main_fmradio_pane_t4

0x0001,

0x3f68,	// (0x0004e6fc) main_fmradio_pane_t5

0x0004,

0xf53c,	// (0x00059cd0) popup_cale_lunar_info_window_g

0xf471,	// (0x00059c05) main_fmradio_pane_t

0x3f76,	// (0x0004e70a) wait_bar_pane_cp03

0x3f7e,	// (0x0004e712) cell_fmradio_pane_ParamLimits

0x3f7e,	// (0x0004e712) cell_fmradio_pane

0x3dd7,	// (0x0004e56b) cell_fmradio_pane_g1_ParamLimits

0x3dd7,	// (0x0004e56b) cell_fmradio_pane_g1

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp011

0x3f91,	// (0x0004e725) poc_content_pane_ParamLimits

0x3f91,	// (0x0004e725) poc_content_pane

0x3fa3,	// (0x0004e737) scroll_pane_cp019

0x8644,	// (0x00052dd8) popup_call_poc_act_window_ParamLimits

0x8644,	// (0x00052dd8) popup_call_poc_act_window

0x8651,	// (0x00052de5) popup_call_poc_inact_window_ParamLimits

0x8651,	// (0x00052de5) popup_call_poc_inact_window

0xf513,	// (0x00059ca7) bg_popup_call_poc_act_pane_g

0x4e92,	// (0x0004f626) bg_popup_call_poc_inact_pane_g1

0x4e9a,	// (0x0004f62e) bg_popup_call_poc_inact_pane_g2

0x3fab,	// (0x0004e73f) popup_call_poc_act_window_g2

0x4ea2,	// (0x0004f636) bg_popup_call_poc_inact_pane_g3

0x4eaa,	// (0x0004f63e) bg_popup_call_poc_inact_pane_g4

0x4eb2,	// (0x0004f646) bg_popup_call_poc_inact_pane_g5

0x3fb3,	// (0x0004e747) popup_call_poc_act_window_t1_ParamLimits

0x3fb3,	// (0x0004e747) popup_call_poc_act_window_t1

0x3fdb,	// (0x0004e76f) popup_call_poc_act_window_t2_ParamLimits

0x3fdb,	// (0x0004e76f) popup_call_poc_act_window_t2

0x4003,	// (0x0004e797) popup_call_poc_act_window_t3_ParamLimits

0x4003,	// (0x0004e797) popup_call_poc_act_window_t3

0x402b,	// (0x0004e7bf) popup_call_poc_act_window_t4_ParamLimits

0x402b,	// (0x0004e7bf) popup_call_poc_act_window_t4

0x0003,

0xf47c,	// (0x00059c10) popup_call_poc_act_window_t_ParamLimits

0xf47c,	// (0x00059c10) popup_call_poc_act_window_t

0x4eba,	// (0x0004f64e) bg_popup_call_poc_inact_pane_g6

0x4ec2,	// (0x0004f656) bg_popup_call_poc_inact_pane_g7

0x4eca,	// (0x0004f65e) bg_popup_call_poc_inact_pane_g8

0x403d,	// (0x0004e7d1) popup_call_poc_inact_window_g2

0x4ed2,	// (0x0004f666) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf500,	// (0x00059c94) bg_popup_call_poc_inact_pane_g

0x4045,	// (0x0004e7d9) popup_call_poc_inact_window_t1_ParamLimits

0x4045,	// (0x0004e7d9) popup_call_poc_inact_window_t1

0x405a,	// (0x0004e7ee) popup_call_poc_inact_window_t2_ParamLimits

0x405a,	// (0x0004e7ee) popup_call_poc_inact_window_t2

0x406f,	// (0x0004e803) popup_call_poc_inact_window_t3_ParamLimits

0x406f,	// (0x0004e803) popup_call_poc_inact_window_t3

0x0002,

0xf485,	// (0x00059c19) popup_call_poc_inact_window_t_ParamLimits

0xf485,	// (0x00059c19) popup_call_poc_inact_window_t

0xdf46,	// (0x000586da) context_pane_ParamLimits

0x8cda,	// (0x0005346e) signal_pane_ParamLimits

0x31f4,	// (0x0004d988) main_call2_pane

0x8c4d,	// (0x000533e1) popup_phob_thumbnail2_window_ParamLimits

0x8c4d,	// (0x000533e1) popup_phob_thumbnail2_window

0x831e,	// (0x00052ab2) aid_hotspot_pointer_arrow_pane

0x8326,	// (0x00052aba) aid_hotspot_pointer_hand_pane

0x8996,	// (0x0005312a) phob_pre_status_pane_g5

0x28b2,	// (0x0004d046) cams_zoom_pane_ParamLimits

0x28b2,	// (0x0004d046) image_vga_pane_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g1_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g2_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g3_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g4_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g5_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g6_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g7_ParamLimits

0xf1ab,	// (0x0005993f) main_camera_pane_g_ParamLimits

0x324c,	// (0x0004d9e0) main_camera_pane_t1_ParamLimits

0x324c,	// (0x0004d9e0) main_camera_pane_t2_ParamLimits

0xf1bc,	// (0x00059950) main_camera_pane_t_ParamLimits

0x2f63,	// (0x0004d6f7) bg_popup_preview_window_pane_cp01_ParamLimits

0x2f63,	// (0x0004d6f7) bg_popup_preview_window_pane_cp01

0x4084,	// (0x0004e818) popup_phob_thumbnail2_window_g1_ParamLimits

0x4084,	// (0x0004e818) popup_phob_thumbnail2_window_g1

0x2cfa,	// (0x0004d48e) call2_cli_visual_pane

0x866d,	// (0x00052e01) popup_call2_audio_conf_window_ParamLimits

0x866d,	// (0x00052e01) popup_call2_audio_conf_window

0x8682,	// (0x00052e16) popup_call2_audio_first_window_ParamLimits

0x8682,	// (0x00052e16) popup_call2_audio_first_window

0x8720,	// (0x00052eb4) popup_call2_audio_in_window_ParamLimits

0x8720,	// (0x00052eb4) popup_call2_audio_in_window

0x8762,	// (0x00052ef6) popup_call2_audio_out_window_ParamLimits

0x8762,	// (0x00052ef6) popup_call2_audio_out_window

0x87c4,	// (0x00052f58) popup_call2_audio_second_window_ParamLimits

0x87c4,	// (0x00052f58) popup_call2_audio_second_window

0x8822,	// (0x00052fb6) popup_call2_audio_wait_window_ParamLimits

0x8822,	// (0x00052fb6) popup_call2_audio_wait_window

0x2cfa,	// (0x0004d48e) bg_popup_call2_act_pane_cp03

0x2f45,	// (0x0004d6d9) list_conf_pane_cp

0x4090,	// (0x0004e824) popup_call2_audio_conf_window_t1

0x3940,	// (0x0004e0d4) list_single_graphic_popup_conf2_pane_ParamLimits

0x3940,	// (0x0004e0d4) list_single_graphic_popup_conf2_pane

0x3953,	// (0x0004e0e7) list_highlight_pane_cp04

0x409e,	// (0x0004e832) list_single_graphic_popup_conf2_pane_g1

0x3964,	// (0x0004e0f8) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf48c,	// (0x00059c20) list_single_graphic_popup_conf2_pane_g

0x40a8,	// (0x0004e83c) list_single_graphic_popup_conf2_pane_t1

0x40b6,	// (0x0004e84a) bg_popup_call2_act_pane_cp01_ParamLimits

0x40b6,	// (0x0004e84a) bg_popup_call2_act_pane_cp01

0x4140,	// (0x0004e8d4) call_type_pane_cp05_ParamLimits

0x4140,	// (0x0004e8d4) call_type_pane_cp05

0x4194,	// (0x0004e928) popup_call2_audio_second_window_g1_ParamLimits

0x4194,	// (0x0004e928) popup_call2_audio_second_window_g1

0x41e8,	// (0x0004e97c) popup_call2_audio_second_window_g2_ParamLimits

0x41e8,	// (0x0004e97c) popup_call2_audio_second_window_g2

0x0002,

0xf491,	// (0x00059c25) popup_call2_audio_second_window_g_ParamLimits

0xf491,	// (0x00059c25) popup_call2_audio_second_window_g

0x424d,	// (0x0004e9e1) popup_call2_audio_second_window_t1_ParamLimits

0x424d,	// (0x0004e9e1) popup_call2_audio_second_window_t1

0x4308,	// (0x0004ea9c) popup_call2_audio_second_window_t2_ParamLimits

0x4308,	// (0x0004ea9c) popup_call2_audio_second_window_t2

0x435b,	// (0x0004eaef) popup_call2_audio_second_window_t3_ParamLimits

0x435b,	// (0x0004eaef) popup_call2_audio_second_window_t3

0x0003,

0xf498,	// (0x00059c2c) popup_call2_audio_second_window_t_ParamLimits

0xf498,	// (0x00059c2c) popup_call2_audio_second_window_t

0x2cfa,	// (0x0004d48e) bg_popup_call2_in_pane_cp02

0x2d04,	// (0x0004d498) call_type_pane_cp04

0x8861,	// (0x00052ff5) popup_call2_audio_wait_window_g1

0x8869,	// (0x00052ffd) popup_call2_audio_wait_window_g2

0x0001,

0xf4a1,	// (0x00059c35) popup_call2_audio_wait_window_g

0x2d1c,	// (0x0004d4b0) popup_call2_audio_wait_window_t3

0x444e,	// (0x0004ebe2) bg_popup_call2_act_pane_ParamLimits

0x444e,	// (0x0004ebe2) bg_popup_call2_act_pane

0x450e,	// (0x0004eca2) call_type_pane_cp03_ParamLimits

0x450e,	// (0x0004eca2) call_type_pane_cp03

0x4572,	// (0x0004ed06) popup_call2_audio_first_window_g1_ParamLimits

0x4572,	// (0x0004ed06) popup_call2_audio_first_window_g1

0x45e2,	// (0x0004ed76) popup_call2_audio_first_window_g2_ParamLimits

0x45e2,	// (0x0004ed76) popup_call2_audio_first_window_g2

0x38d9,	// (0x0004e06d) popup_call2_audio_first_window_g3_ParamLimits

0x38d9,	// (0x0004e06d) popup_call2_audio_first_window_g3

0x0004,

0xf4a6,	// (0x00059c3a) popup_call2_audio_first_window_g_ParamLimits

0xf4a6,	// (0x00059c3a) popup_call2_audio_first_window_g

0x472f,	// (0x0004eec3) popup_call2_audio_first_window_t1_ParamLimits

0x472f,	// (0x0004eec3) popup_call2_audio_first_window_t1

0x4832,	// (0x0004efc6) popup_call2_audio_first_window_t4_ParamLimits

0x4832,	// (0x0004efc6) popup_call2_audio_first_window_t4

0x4915,	// (0x0004f0a9) popup_call2_audio_first_window_t5_ParamLimits

0x4915,	// (0x0004f0a9) popup_call2_audio_first_window_t5

0x0003,

0xf4b1,	// (0x00059c45) popup_call2_audio_first_window_t_ParamLimits

0xf4b1,	// (0x00059c45) popup_call2_audio_first_window_t

0x2f5b,	// (0x0004d6ef) bg_popup_call2_act_pane_g1

0x4f32,	// (0x0004f6c6) popup_cale_lunar_info_window_t1

0x4f40,	// (0x0004f6d4) popup_cale_lunar_info_window_t2

0x4f4e,	// (0x0004f6e2) popup_cale_lunar_info_window_t3

0x2cfa,	// (0x0004d48e) bg_popup_call2_bubble_pane

0x4a16,	// (0x0004f1aa) bg_popup_call2_in_pane_cp01_ParamLimits

0x4a16,	// (0x0004f1aa) bg_popup_call2_in_pane_cp01

0x29d6,	// (0x0004d16a) call_type_pane_cp02

0x8871,	// (0x00053005) popup_call2_audio_out_window_g1_ParamLimits

0x8871,	// (0x00053005) popup_call2_audio_out_window_g1

0x4a5e,	// (0x0004f1f2) popup_call2_audio_out_window_g2_ParamLimits

0x4a5e,	// (0x0004f1f2) popup_call2_audio_out_window_g2

0x889d,	// (0x00053031) popup_call2_audio_out_window_g3_ParamLimits

0x889d,	// (0x00053031) popup_call2_audio_out_window_g3

0x0003,

0xf4ba,	// (0x00059c4e) popup_call2_audio_out_window_g_ParamLimits

0xf4ba,	// (0x00059c4e) popup_call2_audio_out_window_g

0x4a95,	// (0x0004f229) popup_call2_audio_out_window_t1_ParamLimits

0x4a95,	// (0x0004f229) popup_call2_audio_out_window_t1

0x4af4,	// (0x0004f288) popup_call2_audio_out_window_t2_ParamLimits

0x4af4,	// (0x0004f288) popup_call2_audio_out_window_t2

0x4b48,	// (0x0004f2dc) popup_call2_audio_out_window_t3_ParamLimits

0x4b48,	// (0x0004f2dc) popup_call2_audio_out_window_t3

0x4b5e,	// (0x0004f2f2) popup_call2_audio_out_window_t4_ParamLimits

0x4b5e,	// (0x0004f2f2) popup_call2_audio_out_window_t4

0x4b74,	// (0x0004f308) popup_call2_audio_out_window_t5_ParamLimits

0x4b74,	// (0x0004f308) popup_call2_audio_out_window_t5

0x0005,

0xf4c3,	// (0x00059c57) popup_call2_audio_out_window_t_ParamLimits

0xf4c3,	// (0x00059c57) popup_call2_audio_out_window_t

0x4bd8,	// (0x0004f36c) bg_popup_call2_in_pane_ParamLimits

0x4bd8,	// (0x0004f36c) bg_popup_call2_in_pane

0x4c34,	// (0x0004f3c8) popup_call2_audio_in_window_g1_ParamLimits

0x4c34,	// (0x0004f3c8) popup_call2_audio_in_window_g1

0x4c6c,	// (0x0004f400) popup_call2_audio_in_window_g2_ParamLimits

0x4c6c,	// (0x0004f400) popup_call2_audio_in_window_g2

0x4ca4,	// (0x0004f438) popup_call2_audio_in_window_g3_ParamLimits

0x4ca4,	// (0x0004f438) popup_call2_audio_in_window_g3

0x0003,

0xf4d0,	// (0x00059c64) popup_call2_audio_in_window_g_ParamLimits

0xf4d0,	// (0x00059c64) popup_call2_audio_in_window_g

0x4cfc,	// (0x0004f490) popup_call2_audio_in_window_t1_ParamLimits

0x4cfc,	// (0x0004f490) popup_call2_audio_in_window_t1

0x4d7c,	// (0x0004f510) popup_call2_audio_in_window_t2_ParamLimits

0x4d7c,	// (0x0004f510) popup_call2_audio_in_window_t2

0x4dfc,	// (0x0004f590) popup_call2_audio_in_window_t3_ParamLimits

0x4dfc,	// (0x0004f590) popup_call2_audio_in_window_t3

0x4e16,	// (0x0004f5aa) popup_call2_audio_in_window_t4_ParamLimits

0x4e16,	// (0x0004f5aa) popup_call2_audio_in_window_t4

0x4e28,	// (0x0004f5bc) popup_call2_audio_in_window_t5_ParamLimits

0x4e28,	// (0x0004f5bc) popup_call2_audio_in_window_t5

0x4e3d,	// (0x0004f5d1) popup_call2_audio_in_window_t6_ParamLimits

0x4e3d,	// (0x0004f5d1) popup_call2_audio_in_window_t6

0x0005,

0xf4d9,	// (0x00059c6d) popup_call2_audio_in_window_t_ParamLimits

0xf4d9,	// (0x00059c6d) popup_call2_audio_in_window_t

0x2f5b,	// (0x0004d6ef) bg_popup_call2_in_pane_g1

0x4f5c,	// (0x0004f6f0) popup_cale_lunar_info_window_t4

0x0003,

0xf541,	// (0x00059cd5) popup_cale_lunar_info_window_t

0x2f63,	// (0x0004d6f7) bg_popup_call2_rect_pane_ParamLimits

0x2f63,	// (0x0004d6f7) bg_popup_call2_rect_pane

0x2cfa,	// (0x0004d48e) call2_cli_visual_graphic_pane

0x2cfa,	// (0x0004d48e) call2_cli_visual_text_pane

0x8d16,	// (0x000534aa) smil_status_volume_pane_g3

0x0002,

0x2f7b,	// (0x0004d70f) call2_cli_visual_graphic_pane_g1

0x2f7b,	// (0x0004d70f) call2_cli_visual_graphic_pane_g2

0x2f7b,	// (0x0004d70f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4e6,	// (0x00059c7a) call2_cli_visual_graphic_pane_g

0x4e52,	// (0x0004f5e6) bg_popup_call2_rect_pane_g1

0x3119,	// (0x0004d8ad) bg_popup_call2_rect_pane_g2

0x4e5a,	// (0x0004f5ee) bg_popup_call2_rect_pane_g3

0x4e62,	// (0x0004f5f6) bg_popup_call2_rect_pane_g4

0x4e6a,	// (0x0004f5fe) bg_popup_call2_rect_pane_g5

0x4e72,	// (0x0004f606) bg_popup_call2_rect_pane_g6

0x4e7a,	// (0x0004f60e) bg_popup_call2_rect_pane_g7

0x4e82,	// (0x0004f616) bg_popup_call2_rect_pane_g8

0x4e8a,	// (0x0004f61e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ed,	// (0x00059c81) bg_popup_call2_rect_pane_g

0x4e92,	// (0x0004f626) bg_popup_call2_bubble_pane_g1

0x4e9a,	// (0x0004f62e) bg_popup_call2_bubble_pane_g2

0x4ea2,	// (0x0004f636) bg_popup_call2_bubble_pane_g3

0x4eaa,	// (0x0004f63e) bg_popup_call2_bubble_pane_g4

0x4eb2,	// (0x0004f646) bg_popup_call2_bubble_pane_g5

0x4eba,	// (0x0004f64e) bg_popup_call2_bubble_pane_g6

0x4ec2,	// (0x0004f656) bg_popup_call2_bubble_pane_g7

0x4eca,	// (0x0004f65e) bg_popup_call2_bubble_pane_g8

0x4ed2,	// (0x0004f666) bg_popup_call2_bubble_pane_g9

0x0008,

0xf500,	// (0x00059c94) bg_popup_call2_bubble_pane_g

0x646d,	// (0x00050c01) aid_cale_week_size_cell_pane

0x2f63,	// (0x0004d6f7) aid_cams_cif_uncrop_pane_ParamLimits

0x2f63,	// (0x0004d6f7) aid_cams_cif_uncrop_pane

0x6a61,	// (0x000511f5) aid_cams_size_cell_ParamLimits

0x6a61,	// (0x000511f5) aid_cams_size_cell

0x6a6d,	// (0x00051201) grid_cams_pane_ParamLimits

0x6a7b,	// (0x0005120f) linegrid_cams_pane_ParamLimits

0x6b52,	// (0x000512e6) call_video_pane_t1

0x6b73,	// (0x00051307) call_video_pane_t2

0x0001,

0xf208,	// (0x0005999c) call_video_pane_t

0x7078,	// (0x0005180c) aid_cale_month_size_cell_pane_ParamLimits

0x7078,	// (0x0005180c) aid_cale_month_size_cell_pane

0xf585,	// (0x00059d19) smil_status_volume_pane_g

0x8d23,	// (0x000534b7) volume_smil_pane_ParamLimits

0x5cec,	// (0x00050480) aid_popup2_width_pane

0x635e,	// (0x00050af2) cell_qdial_pane_g4_ParamLimits

0x635e,	// (0x00050af2) cell_qdial_pane_g4

0x7f28,	// (0x000526bc) aid_blid_cardinal_pane_ParamLimits

0x7f38,	// (0x000526cc) aid_blid_destination_pane_ParamLimits

0x7f38,	// (0x000526cc) aid_blid_destination_pane

0x2f63,	// (0x0004d6f7) bg_popup_call_poc_act_pane_ParamLimits

0x2f63,	// (0x0004d6f7) bg_popup_call_poc_act_pane

0x2f63,	// (0x0004d6f7) bg_popup_call_poc_inact_pane_ParamLimits

0x2f63,	// (0x0004d6f7) bg_popup_call_poc_inact_pane

0x4eda,	// (0x0004f66e) bg_popup_call_poc_act_pane_g1

0x4ee2,	// (0x0004f676) bg_popup_call_poc_act_pane_g2

0x4eea,	// (0x0004f67e) bg_popup_call_poc_act_pane_g3

0x4eaa,	// (0x0004f63e) bg_popup_call_poc_act_pane_g4

0x4eb2,	// (0x0004f646) bg_popup_call_poc_act_pane_g5

0x4ef2,	// (0x0004f686) bg_popup_call_poc_act_pane_g6

0x4ec2,	// (0x0004f656) bg_popup_call_poc_act_pane_g7

0x4efa,	// (0x0004f68e) bg_popup_call_poc_act_pane_g8

0x2cfa,	// (0x0004d48e) main_usb_pane

0x8b7c,	// (0x00053310) popup_cale_lunar_info_window

0x6e9c,	// (0x00051630) im_reading_pane_t1_ParamLimits

0x32f7,	// (0x0004da8b) list_im_pane_ParamLimits

0x3308,	// (0x0004da9c) scroll_pane_cp07_ParamLimits

0x2cfa,	// (0x0004d48e) grid_highlight_pane_cp012

0x2f63,	// (0x0004d6f7) mup_scale_pane_ParamLimits

0x38d9,	// (0x0004e06d) main_usb_pane_g1_ParamLimits

0x38d9,	// (0x0004e06d) main_usb_pane_g1

0x88fe,	// (0x00053092) main_usb_pane_g2_ParamLimits

0x88fe,	// (0x00053092) main_usb_pane_g2

0x0001,

0xf52a,	// (0x00059cbe) main_usb_pane_g_ParamLimits

0xf52a,	// (0x00059cbe) main_usb_pane_g

0x890a,	// (0x0005309e) main_usb_pane_t1_ParamLimits

0x890a,	// (0x0005309e) main_usb_pane_t1

0x891c,	// (0x000530b0) main_usb_pane_t2_ParamLimits

0x891c,	// (0x000530b0) main_usb_pane_t2

0x892e,	// (0x000530c2) main_usb_pane_t3_ParamLimits

0x892e,	// (0x000530c2) main_usb_pane_t3

0x8940,	// (0x000530d4) main_usb_pane_t4_ParamLimits

0x8940,	// (0x000530d4) main_usb_pane_t4

0x8952,	// (0x000530e6) main_usb_pane_t5_ParamLimits

0x8952,	// (0x000530e6) main_usb_pane_t5

0x8964,	// (0x000530f8) main_usb_pane_t6_ParamLimits

0x8964,	// (0x000530f8) main_usb_pane_t6

0x0005,

0xf52f,	// (0x00059cc3) main_usb_pane_t_ParamLimits

0x7ece,	// (0x00052662) aid_text_placing

0x7eda,	// (0x0005266e) main_location2_pane_t1_ParamLimits

0x7eee,	// (0x00052682) main_location2_pane_t2_ParamLimits

0x7f02,	// (0x00052696) main_location2_pane_t3_ParamLimits

0x7f16,	// (0x000526aa) main_location2_pane_t4_ParamLimits

0x7f16,	// (0x000526aa) main_location2_pane_t4

0xf349,	// (0x00059add) main_location2_pane_t_ParamLimits

0x2f91,	// (0x0004d725) find_pinb_pane_g2_ParamLimits

0x2f91,	// (0x0004d725) find_pinb_pane_g2

0x0001,

0xf0c0,	// (0x00059854) find_pinb_pane_g_ParamLimits

0xf0c0,	// (0x00059854) find_pinb_pane_g

0x2f9d,	// (0x0004d731) find_pinb_pane_t1_ParamLimits

0x2faf,	// (0x0004d743) find_pinb_pane_t2_ParamLimits

0xf0c5,	// (0x00059859) find_pinb_pane_t_ParamLimits

0x2cfa,	// (0x0004d48e) main_call3_pane

0x761b,	// (0x00051daf) cale_month_day_heading_pane_t1_ParamLimits

0x76a1,	// (0x00051e35) cale_month_day_heading_pane_t2_ParamLimits

0x771a,	// (0x00051eae) cale_month_day_heading_pane_t3_ParamLimits

0x7793,	// (0x00051f27) cale_month_day_heading_pane_t4_ParamLimits

0x780c,	// (0x00051fa0) cale_month_day_heading_pane_t5_ParamLimits

0x7885,	// (0x00052019) cale_month_day_heading_pane_t6_ParamLimits

0x78fe,	// (0x00052092) cale_month_day_heading_pane_t7_ParamLimits

0xf240,	// (0x000599d4) cale_month_day_heading_pane_t_ParamLimits

0x353f,	// (0x0004dcd3) smil_status_volume_pane

0x845a,	// (0x00052bee) postcard_address_pane_ParamLimits

0x845a,	// (0x00052bee) postcard_address_pane

0x8466,	// (0x00052bfa) postcard_message_pane_ParamLimits

0x8466,	// (0x00052bfa) postcard_message_pane

0x88c9,	// (0x0005305d) call2_cli_visual_pane_t1_ParamLimits

0x88c9,	// (0x0005305d) call2_cli_visual_pane_t1

0xdff9,	// (0x0005878d) postcard_message_pane_t1_ParamLimits

0xdff9,	// (0x0005878d) postcard_message_pane_t1

0xdfe1,	// (0x00058775) postcard_address_pane_t1_ParamLimits

0xdfe1,	// (0x00058775) postcard_address_pane_t1

0x8e54,	// (0x000535e8) popup_call3_audio_in_window_ParamLimits

0x8e54,	// (0x000535e8) popup_call3_audio_in_window

0x8d38,	// (0x000534cc) bg_popup_call3_in_pane_ParamLimits

0x8d38,	// (0x000534cc) bg_popup_call3_in_pane

0x8d9a,	// (0x0005352e) popup_call3_audio_in_window_g1_ParamLimits

0x8d9a,	// (0x0005352e) popup_call3_audio_in_window_g1

0x8db2,	// (0x00053546) popup_call3_audio_in_window_g2_ParamLimits

0x8db2,	// (0x00053546) popup_call3_audio_in_window_g2

0x8dca,	// (0x0005355e) popup_call3_audio_in_window_g3_ParamLimits

0x8dca,	// (0x0005355e) popup_call3_audio_in_window_g3

0x0003,

0xf58c,	// (0x00059d20) popup_call3_audio_in_window_g_ParamLimits

0xf58c,	// (0x00059d20) popup_call3_audio_in_window_g

0x8df2,	// (0x00053586) popup_call3_audio_in_window_t1_ParamLimits

0x8df2,	// (0x00053586) popup_call3_audio_in_window_t1

0x8e1a,	// (0x000535ae) popup_call3_audio_in_window_t2_ParamLimits

0x8e1a,	// (0x000535ae) popup_call3_audio_in_window_t2

0x8e42,	// (0x000535d6) popup_call3_audio_in_window_t3_ParamLimits

0x8e42,	// (0x000535d6) popup_call3_audio_in_window_t3

0x0002,

0xf595,	// (0x00059d29) popup_call3_audio_in_window_t_ParamLimits

0xf595,	// (0x00059d29) popup_call3_audio_in_window_t

0x31f4,	// (0x0004d988) bg_popup_call3_rect_pane

0x4e52,	// (0x0004f5e6) bg_popup_call3_rect_pane_g1

0x3119,	// (0x0004d8ad) bg_popup_call3_rect_pane_g2

0x4e5a,	// (0x0004f5ee) bg_popup_call3_rect_pane_g3

0x4e62,	// (0x0004f5f6) bg_popup_call3_rect_pane_g4

0x4e6a,	// (0x0004f5fe) bg_popup_call3_rect_pane_g5

0x4e72,	// (0x0004f606) bg_popup_call3_rect_pane_g6

0x4e7a,	// (0x0004f60e) bg_popup_call3_rect_pane_g7

0x2888,	// (0x0004d01c) mup_visualizer_osc_pane

0x2888,	// (0x0004d01c) mup_visualizer_spec_pane

0x8d58,	// (0x000534ec) call3_video_qcif_pane_ParamLimits

0x8d58,	// (0x000534ec) call3_video_qcif_pane

0x8d6a,	// (0x000534fe) call3_video_qcif_uncrop_pane_ParamLimits

0x8d6a,	// (0x000534fe) call3_video_qcif_uncrop_pane

0x8d78,	// (0x0005350c) call3_video_subqcif_pane_ParamLimits

0x8d78,	// (0x0005350c) call3_video_subqcif_pane

0x8d8a,	// (0x0005351e) call3_video_subqcif_uncrop_pane_ParamLimits

0x8d8a,	// (0x0005351e) call3_video_subqcif_uncrop_pane

0x8de2,	// (0x00053576) popup_call3_audio_in_window_g4_ParamLimits

0x8de2,	// (0x00053576) popup_call3_audio_in_window_g4

0x2888,	// (0x0004d01c) mup_spec_half_pane

0x2888,	// (0x0004d01c) mup_spec_half_pane_cp

0x2888,	// (0x0004d01c) mup_osc_middle_pane

0x322a,	// (0x0004d9be) mup_visualizer_osc_pane_g1

0xdf94,	// (0x00058728) mup_spec_bar_pane_ParamLimits

0xdf94,	// (0x00058728) mup_spec_bar_pane

0x322a,	// (0x0004d9be) mup_spec_bar_pane_g1

0x322a,	// (0x0004d9be) mup_spec_bar_pane_g2

0x0001,

0xf3c3,	// (0x00059b57) mup_spec_bar_pane_g

0x646d,	// (0x00050c01) aid_cale_week_size_cell_pane_ParamLimits

0x6482,	// (0x00050c16) bg_cale_heading_pane_ParamLimits

0x3156,	// (0x0004d8ea) bg_cale_pane_cp01_ParamLimits

0x64a2,	// (0x00050c36) cale_week_corner_pane_ParamLimits

0x64bc,	// (0x00050c50) cale_week_day_heading_pane_ParamLimits

0x64dc,	// (0x00050c70) cale_week_scroll_pane_g1_ParamLimits

0x64f7,	// (0x00050c8b) cale_week_scroll_pane_g2_ParamLimits

0x650a,	// (0x00050c9e) cale_week_scroll_pane_g3_ParamLimits

0x651d,	// (0x00050cb1) cale_week_scroll_pane_g4_ParamLimits

0x6530,	// (0x00050cc4) cale_week_scroll_pane_g5_ParamLimits

0x6543,	// (0x00050cd7) cale_week_scroll_pane_g6_ParamLimits

0x6556,	// (0x00050cea) cale_week_scroll_pane_g7_ParamLimits

0x656b,	// (0x00050cff) cale_week_scroll_pane_g8_ParamLimits

0x6580,	// (0x00050d14) cale_week_scroll_pane_g9_ParamLimits

0x6593,	// (0x00050d27) cale_week_scroll_pane_g10_ParamLimits

0x65a6,	// (0x00050d3a) cale_week_scroll_pane_g11_ParamLimits

0x65b9,	// (0x00050d4d) cale_week_scroll_pane_g12_ParamLimits

0x65d0,	// (0x00050d64) cale_week_scroll_pane_g13_ParamLimits

0x65eb,	// (0x00050d7f) cale_week_scroll_pane_g14_ParamLimits

0x6606,	// (0x00050d9a) cale_week_scroll_pane_g15_ParamLimits

0xf151,	// (0x000598e5) cale_week_scroll_pane_g_ParamLimits

0x6636,	// (0x00050dca) cale_week_time_pane_ParamLimits

0x664b,	// (0x00050ddf) grid_cale_week_pane_ParamLimits

0x3173,	// (0x0004d907) listscroll_cale_week_pane_t1

0x3185,	// (0x0004d919) scroll_pane_cp08_ParamLimits

0x70ec,	// (0x00051880) cale_month_corner_pane_ParamLimits

0x3515,	// (0x0004dca9) cale_month_pane_t1

0x759e,	// (0x00051d32) cale_month_week_pane_ParamLimits

0x38d9,	// (0x0004e06d) popup_call_status_window_g1_ParamLimits

0x7d25,	// (0x000524b9) popup_call_status_window_g2_ParamLimits

0x7d31,	// (0x000524c5) popup_call_status_window_g3_ParamLimits

0xf2d0,	// (0x00059a64) popup_call_status_window_g_ParamLimits

0x38e7,	// (0x0004e07b) aid_call2_pane

0x82b4,	// (0x00052a48) msg_header_pane_g1

0x845a,	// (0x00052bee) postcard_address2_pane_ParamLimits

0x845a,	// (0x00052bee) postcard_address2_pane

0x8466,	// (0x00052bfa) postcard_message2_pane_ParamLimits

0x8466,	// (0x00052bfa) postcard_message2_pane

0x8ce8,	// (0x0005347c) message2_row_pane_ParamLimits

0x8ce8,	// (0x0005347c) message2_row_pane

0x8d03,	// (0x00053497) address2_row_pane_ParamLimits

0x8d03,	// (0x00053497) address2_row_pane

0xdf61,	// (0x000586f5) postcard_message2_row_pane_g1

0xdf69,	// (0x000586fd) postcard_message2_row_pane_t1

0xdf61,	// (0x000586f5) address2_row_pane_g1

0xdf69,	// (0x000586fd) address2_row_pane_t1

0x68d1,	// (0x00051065) aid_size_cell_vorec

0x2cfa,	// (0x0004d48e) main_rss_pane

0xdf77,	// (0x0005870b) rss_list_single_pane_ParamLimits

0xdf77,	// (0x0005870b) rss_list_single_pane

0xdf85,	// (0x00058719) rss_list_single_pane_t1

0xdf85,	// (0x00058719) rss_list_single_pane_t2

0x0001,

0xf580,	// (0x00059d14) rss_list_single_pane_t

0x2cfa,	// (0x0004d48e) main_camera2_pane

0x2cfa,	// (0x0004d48e) main_video2_pane

0x5f94,	// (0x00050728) cams_zoom_pane_cp2_ParamLimits

0x5f94,	// (0x00050728) cams_zoom_pane_cp2

0x5f94,	// (0x00050728) image2_vga_pane_ParamLimits

0x5f94,	// (0x00050728) image2_vga_pane

0x3913,	// (0x0004e0a7) main_camera2_pane_g1_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g1

0x3913,	// (0x0004e0a7) main_camera2_pane_g2_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g2

0x3913,	// (0x0004e0a7) main_camera2_pane_g3_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g3

0x3913,	// (0x0004e0a7) main_camera2_pane_g4_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g4

0x3913,	// (0x0004e0a7) main_camera2_pane_g5_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g5

0x3913,	// (0x0004e0a7) main_camera2_pane_g6_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g6

0x3913,	// (0x0004e0a7) main_camera2_pane_g7_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g7

0x3913,	// (0x0004e0a7) main_camera2_pane_g8_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g8

0x0008,

0xf59c,	// (0x00059d30) main_camera2_pane_g_ParamLimits

0xf59c,	// (0x00059d30) main_camera2_pane_g

0x8e71,	// (0x00053605) main_camera2_pane_t1_ParamLimits

0x8e71,	// (0x00053605) main_camera2_pane_t1

0x8e71,	// (0x00053605) main_camera2_pane_t2_ParamLimits

0x8e71,	// (0x00053605) main_camera2_pane_t2

0x8e71,	// (0x00053605) main_camera2_pane_t3_ParamLimits

0x8e71,	// (0x00053605) main_camera2_pane_t3

0x8e71,	// (0x00053605) main_camera2_pane_t4_ParamLimits

0x8e71,	// (0x00053605) main_camera2_pane_t4

0x0006,

0xf5af,	// (0x00059d43) main_camera2_pane_t_ParamLimits

0xf5af,	// (0x00059d43) main_camera2_pane_t

0x8e99,	// (0x0005362d) cams_zoom_pane_cp4_ParamLimits

0x8e99,	// (0x0005362d) cams_zoom_pane_cp4

0x8b27,	// (0x000532bb) image2_cif_pane_ParamLimits

0x8b27,	// (0x000532bb) image2_cif_pane

0x5f94,	// (0x00050728) image2_subqcif_pane_ParamLimits

0x5f94,	// (0x00050728) image2_subqcif_pane

0x8ea7,	// (0x0005363b) main_video2_pane_g1_ParamLimits

0x8ea7,	// (0x0005363b) main_video2_pane_g1

0x8ea7,	// (0x0005363b) main_video2_pane_g2_ParamLimits

0x8ea7,	// (0x0005363b) main_video2_pane_g2

0x8ea7,	// (0x0005363b) main_video2_pane_g3_ParamLimits

0x8ea7,	// (0x0005363b) main_video2_pane_g3

0x8ea7,	// (0x0005363b) main_video2_pane_g4_ParamLimits

0x8ea7,	// (0x0005363b) main_video2_pane_g4

0x8ea7,	// (0x0005363b) main_video2_pane_g5_ParamLimits

0x8ea7,	// (0x0005363b) main_video2_pane_g5

0x8ea7,	// (0x0005363b) main_video2_pane_g6_ParamLimits

0x8ea7,	// (0x0005363b) main_video2_pane_g6

0x0005,

0xf5be,	// (0x00059d52) main_video2_pane_g_ParamLimits

0xf5be,	// (0x00059d52) main_video2_pane_g

0x8eb5,	// (0x00053649) main_video2_pane_t1_ParamLimits

0x8eb5,	// (0x00053649) main_video2_pane_t1

0x8eb5,	// (0x00053649) main_video2_pane_t2_ParamLimits

0x8eb5,	// (0x00053649) main_video2_pane_t2

0x8eb5,	// (0x00053649) main_video2_pane_t3_ParamLimits

0x8eb5,	// (0x00053649) main_video2_pane_t3

0x0002,

0xf5cb,	// (0x00059d5f) main_video2_pane_t_ParamLimits

0xf5cb,	// (0x00059d5f) main_video2_pane_t

0x89fa,	// (0x0005318e) call_muted_g2

0x0001,

0xf572,	// (0x00059d06) call_muted_g

0x2cfa,	// (0x0004d48e) main_mup2_pane

0x2fec,	// (0x0004d780) main_mup2_pane_g1_ParamLimits

0x2fec,	// (0x0004d780) main_mup2_pane_g1

0x2fec,	// (0x0004d780) main_mup2_pane_g2_ParamLimits

0x2fec,	// (0x0004d780) main_mup2_pane_g2

0xe0d3,	// (0x00058867) main_mup_pane_g13_cp1

0x5fae,	// (0x00050742) mup_volume_pane_cp1

0x2fec,	// (0x0004d780) main_mup2_pane_g4_ParamLimits

0x2fec,	// (0x0004d780) main_mup2_pane_g4

0x2fec,	// (0x0004d780) main_mup2_pane_g5_ParamLimits

0x2fec,	// (0x0004d780) main_mup2_pane_g5

0x2fec,	// (0x0004d780) main_mup2_pane_g6_ParamLimits

0x2fec,	// (0x0004d780) main_mup2_pane_g6

0x2fec,	// (0x0004d780) main_mup2_pane_g7_ParamLimits

0x2fec,	// (0x0004d780) main_mup2_pane_g7

0x0006,

0xf5d2,	// (0x00059d66) main_mup2_pane_g_ParamLimits

0xf5d2,	// (0x00059d66) main_mup2_pane_g

0x2ffa,	// (0x0004d78e) main_mup2_pane_t1_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup2_pane_t1

0x2ffa,	// (0x0004d78e) main_mup2_pane_t2_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup2_pane_t2

0x2ffa,	// (0x0004d78e) main_mup2_pane_t3_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup2_pane_t3

0x2ffa,	// (0x0004d78e) main_mup2_pane_t4_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup2_pane_t4

0x2ffa,	// (0x0004d78e) main_mup2_pane_t5_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup2_pane_t5

0x2ffa,	// (0x0004d78e) main_mup2_pane_t6_ParamLimits

0x2ffa,	// (0x0004d78e) main_mup2_pane_t6

0x0005,

0xf5e1,	// (0x00059d75) main_mup2_pane_t_ParamLimits

0xf5e1,	// (0x00059d75) main_mup2_pane_t

0xdf38,	// (0x000586cc) mup2_visualizer_pane_ParamLimits

0xdf38,	// (0x000586cc) mup2_visualizer_pane

0xdf38,	// (0x000586cc) mup_progress_pane_cp_ParamLimits

0xdf38,	// (0x000586cc) mup_progress_pane_cp

0x8f7c,	// (0x00053710) mup_volume_pane_cp_ParamLimits

0x8f7c,	// (0x00053710) mup_volume_pane_cp

0x2fd0,	// (0x0004d764) mup2_visualizer_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) mup2_visualizer_pane_g1

0x2fde,	// (0x0004d772) mup2_visualizer_pane_g2_ParamLimits

0x2fde,	// (0x0004d772) mup2_visualizer_pane_g2

0x2fde,	// (0x0004d772) mup2_visualizer_pane_g3_ParamLimits

0x2fde,	// (0x0004d772) mup2_visualizer_pane_g3

0x0002,

0xf0ca,	// (0x0005985e) mup2_visualizer_pane_g_ParamLimits

0xf0ca,	// (0x0005985e) mup2_visualizer_pane_g

0x3f20,	// (0x0004e6b4) aid_size_cell_fmradio

0x8b10,	// (0x000532a4) aid_height_parent_landcape

0x3386,	// (0x0004db1a) wml_content_pane_cp

0x338e,	// (0x0004db22) wml_tabs_pane

0x3397,	// (0x0004db2b) popup_wml_miniature_window

0x339f,	// (0x0004db33) scroll_pane_cp021

0x33b3,	// (0x0004db47) wml_content_pane_comp8

0x2cfa,	// (0x0004d48e) bg_popup_sub_pane_cp05

0xe02b,	// (0x000587bf) popup_wml_miniature_window_g1

0xe033,	// (0x000587c7) wml_miniature_view_pane

0x8ec9,	// (0x0005365d) aid_size_wml_view

0x8ed1,	// (0x00053665) wml_miniature_view_pane_g1

0x8eda,	// (0x0005366e) wml_miniature_view_pane_g2

0x8ee3,	// (0x00053677) wml_miniature_view_pane_g3

0x8eeb,	// (0x0005367f) wml_miniature_view_pane_g4

0x8ef3,	// (0x00053687) wml_miniature_view_pane_g5

0x8efb,	// (0x0005368f) wml_miniature_view_pane_g6

0x8f03,	// (0x00053697) wml_miniature_view_pane_g7

0x8f0b,	// (0x0005369f) wml_miniature_view_pane_g8

0x0007,

0xf5ee,	// (0x00059d82) wml_miniature_view_pane_g

0xe03b,	// (0x000587cf) background_graphic_ParamLimits

0xe03b,	// (0x000587cf) background_graphic

0xe047,	// (0x000587db) wml_tabs_2_pane

0xe050,	// (0x000587e4) wml_tabs_3_pane_ParamLimits

0xe050,	// (0x000587e4) wml_tabs_3_pane

0xe062,	// (0x000587f6) wml_tabs_4_pane_ParamLimits

0xe062,	// (0x000587f6) wml_tabs_4_pane

0xe078,	// (0x0005880c) wml_tabs_5_pane_ParamLimits

0xe078,	// (0x0005880c) wml_tabs_5_pane

0xe092,	// (0x00058826) wml_tabs_pane_g2_ParamLimits

0xe092,	// (0x00058826) wml_tabs_pane_g2

0xe0a7,	// (0x0005883b) wml_tabs_pane_g3_ParamLimits

0xe0a7,	// (0x0005883b) wml_tabs_pane_g3

0xe0bc,	// (0x00058850) wml_tabs_2_active_pane_ParamLimits

0xe0bc,	// (0x00058850) wml_tabs_2_active_pane

0xe0bc,	// (0x00058850) wml_tabs_2_passive_pane_ParamLimits

0xe0bc,	// (0x00058850) wml_tabs_2_passive_pane

0x8f13,	// (0x000536a7) wml_tabs_3_active_pane_cp_ParamLimits

0x8f13,	// (0x000536a7) wml_tabs_3_active_pane_cp

0x8f24,	// (0x000536b8) wml_tabs_3_passive_pane_ParamLimits

0x8f24,	// (0x000536b8) wml_tabs_3_passive_pane

0x8f35,	// (0x000536c9) wml_tabs_3_passive_pane_cp_ParamLimits

0x8f35,	// (0x000536c9) wml_tabs_3_passive_pane_cp

0x8f46,	// (0x000536da) tabs_4_active_pane

0x8f4e,	// (0x000536e2) tabs_4_passive_pane

0x8f56,	// (0x000536ea) tabs_4_passive_pane_cp

0x8f5e,	// (0x000536f2) tabs_4_passive_pane_cp2

0x88f6,	// (0x0005308a) aid_height_text

0xdf38,	// (0x000586cc) mup_volume_cont_pane_ParamLimits

0xdf38,	// (0x000586cc) mup_volume_cont_pane

0x2888,	// (0x0004d01c) aid_size_cell_pinb

0x2888,	// (0x0004d01c) aid_size_list_pinb

0xdf38,	// (0x000586cc) mup2_volume_cont_pane_ParamLimits

0xdf38,	// (0x000586cc) mup2_volume_cont_pane

0x8f66,	// (0x000536fa) mup2_volume_cont_pane_g1_ParamLimits

0x8f66,	// (0x000536fa) mup2_volume_cont_pane_g1

0x5cf8,	// (0x0005048c) aid_size_cell_touch_ParamLimits

0x5cf8,	// (0x0005048c) aid_size_cell_touch

0x5fb8,	// (0x0005074c) touch_pane_ParamLimits

0x5fb8,	// (0x0005074c) touch_pane

0x5fae,	// (0x00050742) main_rss2_pane

0xe0dd,	// (0x00058871) listscroll_rss2_pane

0xe0e6,	// (0x0005887a) rss2_navigation_pane

0xe0ee,	// (0x00058882) list_rss2_pane

0x3a16,	// (0x0004e1aa) scroll_pane_cp22

0xe0f6,	// (0x0005888a) rss2_navigation_pane_g1

0xe0ff,	// (0x00058893) rss2_navigation_pane_g2

0xe107,	// (0x0005889b) rss2_navigation_pane_g3

0x0002,

0xf5ff,	// (0x00059d93) rss2_navigation_pane_g

0xe10f,	// (0x000588a3) rss2_navigation_pane_t1

0x8f92,	// (0x00053726) rss2_list_single_pane_ParamLimits

0x8f92,	// (0x00053726) rss2_list_single_pane

0xe11d,	// (0x000588b1) rss2_list_single_pane_t2

0xe12b,	// (0x000588bf) rss2_list_single_pane_t3_ParamLimits

0xe12b,	// (0x000588bf) rss2_list_single_pane_t3

0xe148,	// (0x000588dc) rss2_list_single_pane_t4

0x7b9a,	// (0x0005232e) smil_status_pane_g1

0x8b27,	// (0x000532bb) main_image2_pane_ParamLimits

0x8b27,	// (0x000532bb) main_image2_pane

0x3913,	// (0x0004e0a7) main_camera2_pane_g9_ParamLimits

0x3913,	// (0x0004e0a7) main_camera2_pane_g9

0x8e71,	// (0x00053605) main_camera2_pane_t5_ParamLimits

0x8e71,	// (0x00053605) main_camera2_pane_t5

0x8e85,	// (0x00053619) main_camera2_pane_t6_ParamLimits

0x8e85,	// (0x00053619) main_camera2_pane_t6

0x8fc3,	// (0x00053757) main_image2_pane_g1_ParamLimits

0x8fc3,	// (0x00053757) main_image2_pane_g1

0x862e,	// (0x00052dc2) smil2_video_pane_ParamLimits

0x862e,	// (0x00052dc2) smil2_video_pane

0x5bfc,	// (0x00050390) aid_zoom_text_primary_cp

0x5f49,	// (0x000506dd) popup_preview_fixed_window

0x32ef,	// (0x0004da83) im_reading_pane_g1

0x8e63,	// (0x000535f7) cams2_bc_adjust_pane_cp_ParamLimits

0x8e63,	// (0x000535f7) cams2_bc_adjust_pane_cp

0x5f94,	// (0x00050728) cams2_bc_adjust_pane_ParamLimits

0x5f94,	// (0x00050728) cams2_bc_adjust_pane

0xe0d3,	// (0x00058867) cams2_bc_adjust_pane_g1

0x5fae,	// (0x00050742) cams2_slider_pane

0xe0d3,	// (0x00058867) cams2_slider_pane_g1

0xe0d3,	// (0x00058867) cams2_slider_pane_g2

0x0006,

0xf606,	// (0x00059d9a) cams2_slider_pane_g

0x6086,	// (0x0005081a) calc_display_pane_ParamLimits

0x60a4,	// (0x00050838) calc_paper_pane_ParamLimits

0x60c0,	// (0x00050854) grid_calc_pane_ParamLimits

0x7d93,	// (0x00052527) popup_clock_digital_window_t1_ParamLimits

0x3ebd,	// (0x0004e651) main_image_pane_t1

0x606c,	// (0x00050800) aid_size_cell_calc_ParamLimits

0x606c,	// (0x00050800) aid_size_cell_calc

0x8b58,	// (0x000532ec) popup_blid_sat_info2_window_ParamLimits

0x8b58,	// (0x000532ec) popup_blid_sat_info2_window

0xe156,	// (0x000588ea) aid_size_cell_blid

0xdf38,	// (0x000586cc) bg_popup_window_pane_cp07

0xe173,	// (0x00058907) grid_popup_blid_pane

0xe17d,	// (0x00058911) heading_pane_cp05_ParamLimits

0xe17d,	// (0x00058911) heading_pane_cp05

0xe247,	// (0x000589db) cell_popup_blid_pane_ParamLimits

0xe247,	// (0x000589db) cell_popup_blid_pane

0xe26b,	// (0x000589ff) cell_popup_blid_pane_g1

0xe273,	// (0x00058a07) cell_popup_blid_pane_t1

0xdf38,	// (0x000586cc) mup2_indicator_pane_ParamLimits

0xdf38,	// (0x000586cc) mup2_indicator_pane

0x2888,	// (0x0004d01c) mup2_visualizer_osc_pane

0xe015,	// (0x000587a9) mup2_visualizer_spec_pane_ParamLimits

0xe015,	// (0x000587a9) mup2_visualizer_spec_pane

0x2888,	// (0x0004d01c) mup2_spec_half_pane

0x2888,	// (0x0004d01c) mup2_spec_half_pane_cp

0xe281,	// (0x00058a15) mup2_spec_bar_pane_ParamLimits

0xe281,	// (0x00058a15) mup2_spec_bar_pane

0x322a,	// (0x0004d9be) mup2_spec_bar_pane_g1

0xe2a0,	// (0x00058a34) mup2_spec_bar_pane_g2

0x0001,

0xf62c,	// (0x00059dc0) mup2_spec_bar_pane_g

0x2888,	// (0x0004d01c) mup2_osc_middle_pane

0x322a,	// (0x0004d9be) mup2_visualizer_osc_pane_g1

0x2907,	// (0x0004d09b) popup_number_entry_window_t1_ParamLimits

0x291a,	// (0x0004d0ae) popup_number_entry_window_t2_ParamLimits

0x292c,	// (0x0004d0c0) popup_number_entry_window_t3_ParamLimits

0x600f,	// (0x000507a3) popup_number_entry_window_t5_ParamLimits

0x600f,	// (0x000507a3) popup_number_entry_window_t5

0xf06b,	// (0x000597ff) popup_number_entry_window_t_ParamLimits

0x293e,	// (0x0004d0d2) text_title_cp2_ParamLimits

0x832e,	// (0x00052ac2) aid_hotspot_pointer_text2_pane

0x83bc,	// (0x00052b50) main_viewer_pane_g9_ParamLimits

0x83bc,	// (0x00052b50) main_viewer_pane_g9

0x3515,	// (0x0004dca9) cale_month_pane_t1_ParamLimits

0x3552,	// (0x0004dce6) bg_cale_pane_ParamLimits

0x356a,	// (0x0004dcfe) list_cale_pane_ParamLimits

0x357b,	// (0x0004dd0f) listscroll_cale_day_pane_t1

0x358d,	// (0x0004dd21) scroll_pane_cp09_ParamLimits

0x8016,	// (0x000527aa) main_mup_eq_pane_t1_ParamLimits

0x8016,	// (0x000527aa) main_mup_eq_pane_t1

0x8030,	// (0x000527c4) main_mup_eq_pane_t2_ParamLimits

0x8030,	// (0x000527c4) main_mup_eq_pane_t2

0x804a,	// (0x000527de) main_mup_eq_pane_t3_ParamLimits

0x804a,	// (0x000527de) main_mup_eq_pane_t3

0x8062,	// (0x000527f6) main_mup_eq_pane_t4_ParamLimits

0x8062,	// (0x000527f6) main_mup_eq_pane_t4

0x807a,	// (0x0005280e) main_mup_eq_pane_t5_ParamLimits

0x807a,	// (0x0005280e) main_mup_eq_pane_t5

0x8092,	// (0x00052826) main_mup_eq_pane_t6_ParamLimits

0x8092,	// (0x00052826) main_mup_eq_pane_t6

0x80a6,	// (0x0005283a) main_mup_eq_pane_t7_ParamLimits

0x80a6,	// (0x0005283a) main_mup_eq_pane_t7

0x80ba,	// (0x0005284e) main_mup_eq_pane_t8_ParamLimits

0x80ba,	// (0x0005284e) main_mup_eq_pane_t8

0x80d0,	// (0x00052864) main_mup_eq_pane_t9_ParamLimits

0x80d0,	// (0x00052864) main_mup_eq_pane_t9

0x80e8,	// (0x0005287c) main_mup_eq_pane_t10_ParamLimits

0x80e8,	// (0x0005287c) main_mup_eq_pane_t10

0x0009,

0xf3cf,	// (0x00059b63) main_mup_eq_pane_t_ParamLimits

0xf3cf,	// (0x00059b63) main_mup_eq_pane_t

0x81a5,	// (0x00052939) mup_equalizer_pane_cp5_ParamLimits

0x81bb,	// (0x0005294f) mup_equalizer_pane_cp6_ParamLimits

0x81d3,	// (0x00052967) mup_equalizer_pane_cp7_ParamLimits

0x5fae,	// (0x00050742) main_gallery_pane

0xdfb3,	// (0x00058747) smil2_volume_pane

0xdfbb,	// (0x0005874f) smil_status_volume_pane_g1_ParamLimits

0xdfce,	// (0x00058762) smil_status_volume_pane_g2_ParamLimits

0x8d16,	// (0x000534aa) smil_status_volume_pane_g3_ParamLimits

0xf585,	// (0x00059d19) smil_status_volume_pane_g_ParamLimits

0xdf38,	// (0x000586cc) bg_popup_window_pane_cp07_ParamLimits

0xe15e,	// (0x000588f2) blid_firmament_pane

0x28b2,	// (0x0004d046) aid_size_cell_gallery_ParamLimits

0x28b2,	// (0x0004d046) aid_size_cell_gallery

0x28b2,	// (0x0004d046) grid_gallery_pane_ParamLimits

0x28b2,	// (0x0004d046) grid_gallery_pane

0x46ad,	// (0x0004ee41) cell_gallery_pane_ParamLimits

0x46ad,	// (0x0004ee41) cell_gallery_pane

0x2f37,	// (0x0004d6cb) bg_cell_gallery_focus_pane_ParamLimits

0x2f37,	// (0x0004d6cb) bg_cell_gallery_focus_pane

0x2fd0,	// (0x0004d764) cell_gallery_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) cell_gallery_pane_g1

0x2fd0,	// (0x0004d764) cell_gallery_pane_g2_ParamLimits

0x2fd0,	// (0x0004d764) cell_gallery_pane_g2

0x2fd0,	// (0x0004d764) cell_gallery_pane_g3_ParamLimits

0x2fd0,	// (0x0004d764) cell_gallery_pane_g3

0x2fde,	// (0x0004d772) cell_gallery_pane_g4_ParamLimits

0x2fde,	// (0x0004d772) cell_gallery_pane_g4

0x0003,

0xf631,	// (0x00059dc5) cell_gallery_pane_g_ParamLimits

0xf631,	// (0x00059dc5) cell_gallery_pane_g

0xe2aa,	// (0x00058a3e) bg_cell_gallery_focus_pane_g1

0xe2b2,	// (0x00058a46) bg_cell_gallery_focus_pane_g2

0xe2ba,	// (0x00058a4e) bg_cell_gallery_focus_pane_g3

0xe2c2,	// (0x00058a56) bg_cell_gallery_focus_pane_g4

0xe2ca,	// (0x00058a5e) bg_cell_gallery_focus_pane_g5

0xe2d2,	// (0x00058a66) bg_cell_gallery_focus_pane_g6

0xe2da,	// (0x00058a6e) bg_cell_gallery_focus_pane_g7

0xe2e2,	// (0x00058a76) bg_cell_gallery_focus_pane_g8

0x0007,

0xf63a,	// (0x00059dce) bg_cell_gallery_focus_pane_g

0xe2ea,	// (0x00058a7e) aid_firma_cardinal

0xe2fe,	// (0x00058a92) blid_firmament_pane_t1

0xe315,	// (0x00058aa9) blid_firmament_pane_t2

0xe32c,	// (0x00058ac0) blid_firmament_pane_t3

0xe343,	// (0x00058ad7) blid_firmament_pane_t4

0x0003,

0xf64b,	// (0x00059ddf) blid_firmament_pane_t

0xe35a,	// (0x00058aee) blid_sat_info_pane

0x322a,	// (0x0004d9be) blid_sat_info_pane_g1

0x322a,	// (0x0004d9be) blid_sat_info_pane_g2

0x0001,

0xf3c3,	// (0x00059b57) blid_sat_info_pane_g

0xe36a,	// (0x00058afe) blid_sat_info_pane_t1

0xe378,	// (0x00058b0c) smil2_volume_content_pane

0xe381,	// (0x00058b15) smil2_volume_pane_g1

0x4658,	// (0x0004edec) smil2_volume_content_pane_g1

0xe389,	// (0x00058b1d) smil2_volume_content_pane_g2

0xe392,	// (0x00058b26) smil2_volume_content_pane_g3

0xe39b,	// (0x00058b2f) smil2_volume_content_pane_g4

0xe3a4,	// (0x00058b38) smil2_volume_content_pane_g5

0xe3ad,	// (0x00058b41) smil2_volume_content_pane_g6

0xe3b6,	// (0x00058b4a) smil2_volume_content_pane_g7

0xe3bf,	// (0x00058b53) smil2_volume_content_pane_g8

0xe3c8,	// (0x00058b5c) smil2_volume_content_pane_g9

0xe3d1,	// (0x00058b65) smil2_volume_content_pane_g10

0x0009,

0xf654,	// (0x00059de8) smil2_volume_content_pane_g

0x66cc,	// (0x00050e60) cale_week_day_heading_pane_t1_ParamLimits

0x66e7,	// (0x00050e7b) cale_week_day_heading_pane_t2_ParamLimits

0x6702,	// (0x00050e96) cale_week_day_heading_pane_t3_ParamLimits

0x671d,	// (0x00050eb1) cale_week_day_heading_pane_t4_ParamLimits

0x6738,	// (0x00050ecc) cale_week_day_heading_pane_t5_ParamLimits

0x6753,	// (0x00050ee7) cale_week_day_heading_pane_t6_ParamLimits

0x676e,	// (0x00050f02) cale_week_day_heading_pane_t7_ParamLimits

0xf172,	// (0x00059906) cale_week_day_heading_pane_t_ParamLimits

0x31a2,	// (0x0004d936) bg_cale_side_pane_ParamLimits

0x6789,	// (0x00050f1d) cale_week_time_pane_t1_ParamLimits

0x67a3,	// (0x00050f37) cale_week_time_pane_t2_ParamLimits

0x67bd,	// (0x00050f51) cale_week_time_pane_t3_ParamLimits

0x67d7,	// (0x00050f6b) cale_week_time_pane_t4_ParamLimits

0x67f1,	// (0x00050f85) cale_week_time_pane_t5_ParamLimits

0x680b,	// (0x00050f9f) cale_week_time_pane_t6_ParamLimits

0x6829,	// (0x00050fbd) cale_week_time_pane_t7_ParamLimits

0x684b,	// (0x00050fdf) cale_week_time_pane_t8_ParamLimits

0xf181,	// (0x00059915) cale_week_time_pane_t_ParamLimits

0x686f,	// (0x00051003) cell_cale_week_pane_g2_ParamLimits

0x31a2,	// (0x0004d936) bg_cale_side_pane_cp01_ParamLimits

0x798f,	// (0x00052123) cale_month_week_pane_t1_ParamLimits

0x79a8,	// (0x0005213c) cale_month_week_pane_t2_ParamLimits

0x79c1,	// (0x00052155) cale_month_week_pane_t3_ParamLimits

0x79da,	// (0x0005216e) cale_month_week_pane_t4_ParamLimits

0x79f3,	// (0x00052187) cale_month_week_pane_t5_ParamLimits

0x7a14,	// (0x000521a8) cale_month_week_pane_t6_ParamLimits

0xf24f,	// (0x000599e3) cale_month_week_pane_t_ParamLimits

0x7b57,	// (0x000522eb) cell_cale_month_pane_g1_ParamLimits

0x5fae,	// (0x00050742) main_cale_event_viewer_pane

0x2888,	// (0x0004d01c) listscroll_cale_event_viewer_pane

0xe3da,	// (0x00058b6e) list_cale_ev_pane

0xe3e2,	// (0x00058b76) scroll_pane_cp023

0xe3ee,	// (0x00058b82) field_cale_ev_pane_ParamLimits

0xe3ee,	// (0x00058b82) field_cale_ev_pane

0xe40c,	// (0x00058ba0) field_cale_ev_content_pane_ParamLimits

0xe40c,	// (0x00058ba0) field_cale_ev_content_pane

0xe418,	// (0x00058bac) field_cale_ev_pane_g1_ParamLimits

0xe418,	// (0x00058bac) field_cale_ev_pane_g1

0xe424,	// (0x00058bb8) field_cale_ev_pane_g2_ParamLimits

0xe424,	// (0x00058bb8) field_cale_ev_pane_g2

0xe43c,	// (0x00058bd0) field_cale_ev_pane_g3_ParamLimits

0xe43c,	// (0x00058bd0) field_cale_ev_pane_g3

0x0002,

0xf669,	// (0x00059dfd) field_cale_ev_pane_g_ParamLimits

0xf669,	// (0x00059dfd) field_cale_ev_pane_g

0xe454,	// (0x00058be8) field_cale_ev_pane_t1_ParamLimits

0xe454,	// (0x00058be8) field_cale_ev_pane_t1

0x4661,	// (0x0004edf5) field_cale_ev_content_pane_t1_ParamLimits

0x4661,	// (0x0004edf5) field_cale_ev_content_pane_t1

0x3da3,	// (0x0004e537) bg_button_pane_cp01

0x645d,	// (0x00050bf1) listscroll_cale_week_pane_ParamLimits

0x314d,	// (0x0004d8e1) popup_toolbar_window_cp01

0x3173,	// (0x0004d907) listscroll_cale_week_pane_t1_ParamLimits

0x645d,	// (0x00050bf1) listscroll_cale_day_pane_ParamLimits

0x314d,	// (0x0004d8e1) popup_toolbar_window_cp02

0x357b,	// (0x0004dd0f) listscroll_cale_day_pane_t1_ParamLimits

0x645d,	// (0x00050bf1) main_cale_month_pane_ParamLimits

0x8c5f,	// (0x000533f3) popup_toolbar_window_cp03_ParamLimits

0x8c5f,	// (0x000533f3) popup_toolbar_window_cp03

0x8544,	// (0x00052cd8) main_image_pane_g2_ParamLimits

0x8544,	// (0x00052cd8) main_image_pane_g2

0x8550,	// (0x00052ce4) main_image_pane_g3_ParamLimits

0x8550,	// (0x00052ce4) main_image_pane_g3

0x0002,

0xf461,	// (0x00059bf5) main_image_pane_g_ParamLimits

0xf461,	// (0x00059bf5) main_image_pane_g

0x3ebd,	// (0x0004e651) main_image_pane_t1_ParamLimits

0x855c,	// (0x00052cf0) main_image_pane_t2_ParamLimits

0x855c,	// (0x00052cf0) main_image_pane_t2

0x856e,	// (0x00052d02) main_image_pane_t3_ParamLimits

0x856e,	// (0x00052d02) main_image_pane_t3

0x8580,	// (0x00052d14) main_image_pane_t4_ParamLimits

0x8580,	// (0x00052d14) main_image_pane_t4

0x0003,

0xf468,	// (0x00059bfc) main_image_pane_t_ParamLimits

0xf468,	// (0x00059bfc) main_image_pane_t

0x8592,	// (0x00052d26) popup_image_details_window_cp01

0x859c,	// (0x00052d30) popup_toobar_trans_pane_cp01_ParamLimits

0x859c,	// (0x00052d30) popup_toobar_trans_pane_cp01

0x8baf,	// (0x00053343) popup_image_details_window_ParamLimits

0x8baf,	// (0x00053343) popup_image_details_window

0x8bbd,	// (0x00053351) popup_image_focus_window

0x5f94,	// (0x00050728) camera2_autofocus_pane_ParamLimits

0x5f94,	// (0x00050728) camera2_autofocus_pane

0x2888,	// (0x0004d01c) bg_popup_sub_pane_cp06

0xe46b,	// (0x00058bff) popup_image_focus_window_g1

0xe473,	// (0x00058c07) popup_image_focus_window_g2

0xe47b,	// (0x00058c0f) popup_image_focus_window_g3

0xe483,	// (0x00058c17) popup_image_focus_window_g4

0x0003,

0xf670,	// (0x00059e04) popup_image_focus_window_g

0xe48b,	// (0x00058c1f) popup_image_focus_window_t1

0xe499,	// (0x00058c2d) popup_image_focus_window_t2

0xe4a9,	// (0x00058c3d) popup_image_focus_window_t3

0x0002,

0xf679,	// (0x00059e0d) popup_image_focus_window_t

0x2fd0,	// (0x0004d764) camera2_autofocus_pane_g1

0x2f37,	// (0x0004d6cb) bg_tb_trans_pane_cp01

0xe4b7,	// (0x00058c4b) popup_image_details_window_g1

0xe4ca,	// (0x00058c5e) popup_image_details_window_g2

0x0002,

0xf68b,	// (0x00059e1f) popup_image_details_window_g

0xe4f3,	// (0x00058c87) popup_image_details_window_t1

0xe505,	// (0x00058c99) popup_image_details_window_t2

0xe51e,	// (0x00058cb2) popup_image_details_window_t3

0xe532,	// (0x00058cc6) popup_image_details_window_t4

0xe54d,	// (0x00058ce1) popup_image_details_window_t5

0x0004,

0xf692,	// (0x00059e26) popup_image_details_window_t

0x302e,	// (0x0004d7c2) bg_calc_paper_pane_ParamLimits

0x5fae,	// (0x00050742) grid_highlight_pane_cp013

0x61db,	// (0x0005096f) list_calc_pane_ParamLimits

0x61ed,	// (0x00050981) scroll_pane_cp024

0x3042,	// (0x0004d7d6) bg_calc_display_pane_ParamLimits

0x61f5,	// (0x00050989) calc_display_pane_t1_ParamLimits

0x620a,	// (0x0005099e) calc_display_pane_t2_ParamLimits

0x621f,	// (0x000509b3) calc_display_pane_t3_ParamLimits

0xf0f2,	// (0x00059886) calc_display_pane_t_ParamLimits

0x62f8,	// (0x00050a8c) cell_calc_pane_g2

0x0001,

0xf10f,	// (0x000598a3) cell_calc_pane_g

0x6301,	// (0x00050a95) cell_calc_pane_t1

0x3097,	// (0x0004d82b) grid_highlight_pane_cp02_ParamLimits

0x30ad,	// (0x0004d841) toolbar_button_pane_cp01_ParamLimits

0x30ad,	// (0x0004d841) toolbar_button_pane_cp01

0x3f02,	// (0x0004e696) temp_image_control_pane_ParamLimits

0x3f02,	// (0x0004e696) temp_image_control_pane

0x8b27,	// (0x000532bb) main_mp3_pane

0xe567,	// (0x00058cfb) temp_image_control_pane_g1_ParamLimits

0xe567,	// (0x00058cfb) temp_image_control_pane_g1

0xe575,	// (0x00058d09) temp_image_control_pane_g2_ParamLimits

0xe575,	// (0x00058d09) temp_image_control_pane_g2

0xe587,	// (0x00058d1b) temp_image_control_pane_g3_ParamLimits

0xe587,	// (0x00058d1b) temp_image_control_pane_g3

0x8fcf,	// (0x00053763) temp_image_control_pane_g4_ParamLimits

0x8fcf,	// (0x00053763) temp_image_control_pane_g4

0x0003,

0xf69d,	// (0x00059e31) temp_image_control_pane_g_ParamLimits

0xf69d,	// (0x00059e31) temp_image_control_pane_g

0xe567,	// (0x00058cfb) main_mp3_pane_g1

0x8fe0,	// (0x00053774) main_mp3_pane_g2

0x0007,

0xf6a6,	// (0x00059e3a) main_mp3_pane_g

0xe5bc,	// (0x00058d50) main_mp3_pane_t1

0x2fde,	// (0x0004d772) main_camera_pane_g8_ParamLimits

0x2fde,	// (0x0004d772) main_camera_pane_g8

0x6a19,	// (0x000511ad) main_video_pane_g7_ParamLimits

0x6a19,	// (0x000511ad) main_video_pane_g7

0x8e71,	// (0x00053605) main_camera2_pane_t7_ParamLimits

0x8e71,	// (0x00053605) main_camera2_pane_t7

0x3346,	// (0x0004dada) scroll_pane_cp025_ParamLimits

0x3346,	// (0x0004dada) scroll_pane_cp025

0x335a,	// (0x0004daee) scroll_pane_cp026_ParamLimits

0x335a,	// (0x0004daee) scroll_pane_cp026

0x3369,	// (0x0004dafd) wml_content_pane_ParamLimits

0x5fae,	// (0x00050742) main_touch_calib_pane

0x9084,	// (0x00053818) main_touch_calib_pane_g1

0x9090,	// (0x00053824) main_touch_calib_pane_g2

0x909c,	// (0x00053830) main_touch_calib_pane_g3

0x90a8,	// (0x0005383c) main_touch_calib_pane_g4

0x0003,

0xf6c4,	// (0x00059e58) main_touch_calib_pane_g

0x90b4,	// (0x00053848) main_touch_calib_pane_t1

0x90cd,	// (0x00053861) main_touch_calib_pane_t2

0x0004,

0xf6cd,	// (0x00059e61) main_touch_calib_pane_t

0x3af2,	// (0x0004e286) mup_progress_pane_cp02

0x3b27,	// (0x0004e2bb) navi_pane_g1

0x3be2,	// (0x0004e376) navi_pane_mp_t3

0x8b27,	// (0x000532bb) main_mp3_pane_ParamLimits

0x8c9c,	// (0x00053430) navi_pane_ParamLimits

0xe567,	// (0x00058cfb) main_mp3_pane_g1_ParamLimits

0x8fe0,	// (0x00053774) main_mp3_pane_g2_ParamLimits

0x8fec,	// (0x00053780) main_mp3_pane_g3_ParamLimits

0x8fec,	// (0x00053780) main_mp3_pane_g3

0x8ff8,	// (0x0005378c) main_mp3_pane_g4_ParamLimits

0x8ff8,	// (0x0005378c) main_mp3_pane_g4

0x2fd0,	// (0x0004d764) main_mp3_pane_g5_ParamLimits

0x2fd0,	// (0x0004d764) main_mp3_pane_g5

0xe597,	// (0x00058d2b) main_mp3_pane_g6_ParamLimits

0xe597,	// (0x00058d2b) main_mp3_pane_g6

0xe5a4,	// (0x00058d38) main_mp3_pane_g7_ParamLimits

0xe5a4,	// (0x00058d38) main_mp3_pane_g7

0xe5b0,	// (0x00058d44) main_mp3_pane_g8_ParamLimits

0xe5b0,	// (0x00058d44) main_mp3_pane_g8

0xf6a6,	// (0x00059e3a) main_mp3_pane_g_ParamLimits

0x9004,	// (0x00053798) main_mp3_pane_t2

0x9014,	// (0x000537a8) main_mp3_pane_t3

0xe5ca,	// (0x00058d5e) main_mp3_pane_t4

0xe5d8,	// (0x00058d6c) main_mp3_pane_t5

0x0005,

0xf6b7,	// (0x00059e4b) main_mp3_pane_t

0xe5e6,	// (0x00058d7a) mup_progress_pane_cp01

0x5bfc,	// (0x00050390) aid_zoom_text_secondary2

0xe3da,	// (0x00058b6e) list_cale_ev2_pane

0xe3e2,	// (0x00058b76) scroll_pane_cp023_ParamLimits

0x9128,	// (0x000538bc) field_cale_ev2_pane_ParamLimits

0x9128,	// (0x000538bc) field_cale_ev2_pane

0x0713,	// (0x0004aea7) field_cale_ev2_pane_g1_ParamLimits

0x0713,	// (0x0004aea7) field_cale_ev2_pane_g1

0x071f,	// (0x0004aeb3) field_cale_ev2_pane_g2_ParamLimits

0x071f,	// (0x0004aeb3) field_cale_ev2_pane_g2

0x0737,	// (0x0004aecb) field_cale_ev2_pane_g3_ParamLimits

0x0737,	// (0x0004aecb) field_cale_ev2_pane_g3

0x0003,

0xf6d8,	// (0x00059e6c) field_cale_ev2_pane_g_ParamLimits

0xf6d8,	// (0x00059e6c) field_cale_ev2_pane_g

0x9151,	// (0x000538e5) field_cale_ev2_pane_t1_ParamLimits

0x9151,	// (0x000538e5) field_cale_ev2_pane_t1

0x9168,	// (0x000538fc) field_cale_ev2_pane_t2_ParamLimits

0x9168,	// (0x000538fc) field_cale_ev2_pane_t2

0x0001,

0xf6e1,	// (0x00059e75) field_cale_ev2_pane_t_ParamLimits

0xf6e1,	// (0x00059e75) field_cale_ev2_pane_t

0x8424,	// (0x00052bb8) main_postcard_pane_g5_ParamLimits

0x8424,	// (0x00052bb8) main_postcard_pane_g5

0x8432,	// (0x00052bc6) main_postcard_pane_g6_ParamLimits

0x8432,	// (0x00052bc6) main_postcard_pane_g6

0x28b2,	// (0x0004d046) camera2_autofocus_pane_cp_ParamLimits

0x28b2,	// (0x0004d046) camera2_autofocus_pane_cp

0x8b27,	// (0x000532bb) main_mup3_pane

0x91bc,	// (0x00053950) main_mup3_pane_g1_ParamLimits

0x91bc,	// (0x00053950) main_mup3_pane_g1

0x91dd,	// (0x00053971) main_mup3_pane_g2_ParamLimits

0x91dd,	// (0x00053971) main_mup3_pane_g2

0x9255,	// (0x000539e9) main_mup3_pane_g3_ParamLimits

0x9255,	// (0x000539e9) main_mup3_pane_g3

0x9298,	// (0x00053a2c) main_mup3_pane_g4_ParamLimits

0x9298,	// (0x00053a2c) main_mup3_pane_g4

0x92db,	// (0x00053a6f) main_mup3_pane_g5_ParamLimits

0x92db,	// (0x00053a6f) main_mup3_pane_g5

0x931e,	// (0x00053ab2) main_mup3_pane_g6_ParamLimits

0x931e,	// (0x00053ab2) main_mup3_pane_g6

0x2fde,	// (0x0004d772) main_mup3_pane_g7_ParamLimits

0x2fde,	// (0x0004d772) main_mup3_pane_g7

0x0007,

0xf6f1,	// (0x00059e85) main_mup3_pane_g_ParamLimits

0xf6f1,	// (0x00059e85) main_mup3_pane_g

0x9394,	// (0x00053b28) main_mup3_pane_t1_ParamLimits

0x9394,	// (0x00053b28) main_mup3_pane_t1

0x9403,	// (0x00053b97) main_mup3_pane_t2_ParamLimits

0x9403,	// (0x00053b97) main_mup3_pane_t2

0x94cc,	// (0x00053c60) main_mup3_pane_t4_ParamLimits

0x94cc,	// (0x00053c60) main_mup3_pane_t4

0x951a,	// (0x00053cae) main_mup3_pane_t5_ParamLimits

0x951a,	// (0x00053cae) main_mup3_pane_t5

0x95ca,	// (0x00053d5e) main_mup3_pane_t6_ParamLimits

0x95ca,	// (0x00053d5e) main_mup3_pane_t6

0x0005,

0xf702,	// (0x00059e96) main_mup3_pane_t_ParamLimits

0xf702,	// (0x00059e96) main_mup3_pane_t

0x9676,	// (0x00053e0a) mup3_progress_pane_ParamLimits

0x9676,	// (0x00053e0a) mup3_progress_pane

0x96f4,	// (0x00053e88) popup_mup3_control_window_ParamLimits

0x96f4,	// (0x00053e88) popup_mup3_control_window

0xe5ee,	// (0x00058d82) popup_mup3_text_window

0x970d,	// (0x00053ea1) mup3_progress_pane_t1

0x972c,	// (0x00053ec0) mup3_progress_pane_t2

0xe5f6,	// (0x00058d8a) mup3_progress_pane_t3

0x0002,

0xf70f,	// (0x00059ea3) mup3_progress_pane_t

0xe613,	// (0x00058da7) mup_progress_pane_cp03

0x2888,	// (0x0004d01c) bg_tb_trans_pane_cp04

0x974b,	// (0x00053edf) mup3_volume_pane

0x9753,	// (0x00053ee7) popup_mup3_control_window_g1

0x975c,	// (0x00053ef0) mup3_volume_pane_g1

0x9765,	// (0x00053ef9) mup3_volume_pane_g2

0x976e,	// (0x00053f02) mup3_volume_pane_g3

0x0002,

0xf716,	// (0x00059eaa) mup3_volume_pane_g

0x2888,	// (0x0004d01c) bg_tb_trans_pane_cp03

0xe623,	// (0x00058db7) popup_mup3_text_window_g1

0xe62b,	// (0x00058dbf) popup_mup3_text_window_t1

0x308a,	// (0x0004d81e) list_calc_item_pane_g1_ParamLimits

0xe0ca,	// (0x0005885e) mup_volume_pane_cp_g1

0x90e6,	// (0x0005387a) main_touch_calib_pane_t3

0x90fc,	// (0x00053890) main_touch_calib_pane_t4

0x9112,	// (0x000538a6) main_touch_calib_pane_t5

0x5ce4,	// (0x00050478) aid_cell_size_toolbar2

0x5cec,	// (0x00050480) aid_popup3_width_pane

0x5bf4,	// (0x00050388) aid_zoom_text_msg_primary

0x691b,	// (0x000510af) vorec_t7

0x304e,	// (0x0004d7e2) bg_calc_paper_pane_g1_ParamLimits

0x3066,	// (0x0004d7fa) bg_calc_paper_pane_g2_ParamLimits

0x305a,	// (0x0004d7ee) bg_calc_paper_pane_g3_ParamLimits

0x307e,	// (0x0004d812) bg_calc_paper_pane_g4_ParamLimits

0x3072,	// (0x0004d806) bg_calc_paper_pane_g5_ParamLimits

0x625e,	// (0x000509f2) bg_calc_paper_pane_g6_ParamLimits

0x626f,	// (0x00050a03) bg_calc_paper_pane_g7_ParamLimits

0x6280,	// (0x00050a14) bg_calc_paper_pane_g8_ParamLimits

0xf0f9,	// (0x0005988d) bg_calc_paper_pane_g_ParamLimits

0x6291,	// (0x00050a25) calc_bg_paper_pane_g9_ParamLimits

0x28b2,	// (0x0004d046) image_qvga_pane_ParamLimits

0x28b2,	// (0x0004d046) image_qvga_pane

0x2f63,	// (0x0004d6f7) bg_popup_sub_pane_cp04_ParamLimits

0x3e39,	// (0x0004e5cd) popup_mup_playback_window_g1_ParamLimits

0x3e45,	// (0x0004e5d9) popup_mup_playback_window_t1_ParamLimits

0x3e5a,	// (0x0004e5ee) popup_mup_playback_window_t2_ParamLimits

0xf45c,	// (0x00059bf0) popup_mup_playback_window_t_ParamLimits

0x2fd0,	// (0x0004d764) main_mup2_pane_g3_ParamLimits

0x2fd0,	// (0x0004d764) main_mup2_pane_g3

0x6c00,	// (0x00051394) popup_toolbar_window_cp04

0x423c,	// (0x0004e9d0) popup_call2_audio_second_window_g3_ParamLimits

0x423c,	// (0x0004e9d0) popup_call2_audio_second_window_g3

0x4646,	// (0x0004edda) popup_call2_audio_first_window_g4_ParamLimits

0x4646,	// (0x0004edda) popup_call2_audio_first_window_g4

0x4cdc,	// (0x0004f470) popup_call2_audio_in_window_g4_ParamLimits

0x4cdc,	// (0x0004f470) popup_call2_audio_in_window_g4

0x8537,	// (0x00052ccb) aid_area_sk_bg_cut_ParamLimits

0x8537,	// (0x00052ccb) aid_area_sk_bg_cut

0x3e6f,	// (0x0004e603) aid_area_sk_bg_cut_2_ParamLimits

0x3e6f,	// (0x0004e603) aid_area_sk_bg_cut_2

0x2888,	// (0x0004d01c) aid_placing_details_win

0x2888,	// (0x0004d01c) aid_placing_details_win_2

0x2fd0,	// (0x0004d764) camera2_autofocus_pane_g1_ParamLimits

0x5f3a,	// (0x000506ce) popup_fixed_preview_cale_window_ParamLimits

0x5f3a,	// (0x000506ce) popup_fixed_preview_cale_window

0x3c72,	// (0x0004e406) navi_slider_pane_g3

0x3c69,	// (0x0004e3fd) navi_slider_pane_g4

0x3c60,	// (0x0004e3f4) navi_slider_pane_g5

0x3c72,	// (0x0004e406) navi_slider_pane_g6

0x7fea,	// (0x0005277e) navi_slider_pane_g7

0x3d70,	// (0x0004e504) mup_scale_pane_g3

0x3d79,	// (0x0004e50d) mup_scale_pane_g4

0x3d82,	// (0x0004e516) mup_scale_pane_g5

0x81eb,	// (0x0005297f) mup_scale_pane_g6

0x81f4,	// (0x00052988) mup_scale_pane_g7

0xe0d3,	// (0x00058867) cams2_slider_pane_g3

0xe0d3,	// (0x00058867) cams2_slider_pane_g4

0xe0d3,	// (0x00058867) cams2_slider_pane_g5

0xe0d3,	// (0x00058867) cams2_slider_pane_g6

0xe0d3,	// (0x00058867) cams2_slider_pane_g7

0x322a,	// (0x0004d9be) camera2_autofocus_pane_cp_g1

0x4fb2,	// (0x0004f746) bg_popup_preview_window_pane_cp02_ParamLimits

0x4fb2,	// (0x0004f746) bg_popup_preview_window_pane_cp02

0xe639,	// (0x00058dcd) list_fp_cale_pane_ParamLimits

0xe639,	// (0x00058dcd) list_fp_cale_pane

0xe645,	// (0x00058dd9) popup_fixed_preview_cale_window_t1_ParamLimits

0xe645,	// (0x00058dd9) popup_fixed_preview_cale_window_t1

0x9777,	// (0x00053f0b) popup_fixed_preview_cale_window_t2_ParamLimits

0x9777,	// (0x00053f0b) popup_fixed_preview_cale_window_t2

0x978c,	// (0x00053f20) popup_fixed_preview_cale_window_t3_ParamLimits

0x978c,	// (0x00053f20) popup_fixed_preview_cale_window_t3

0x0002,

0xf71d,	// (0x00059eb1) popup_fixed_preview_cale_window_t_ParamLimits

0xf71d,	// (0x00059eb1) popup_fixed_preview_cale_window_t

0x97a1,	// (0x00053f35) list_single_fp_cale_pane_ParamLimits

0x97a1,	// (0x00053f35) list_single_fp_cale_pane

0xe663,	// (0x00058df7) list_single_fp_cale_pane_g1_ParamLimits

0xe663,	// (0x00058df7) list_single_fp_cale_pane_g1

0xe66f,	// (0x00058e03) list_single_fp_cale_pane_g2_ParamLimits

0xe66f,	// (0x00058e03) list_single_fp_cale_pane_g2

0x0002,

0xf724,	// (0x00059eb8) list_single_fp_cale_pane_g_ParamLimits

0xf724,	// (0x00059eb8) list_single_fp_cale_pane_g

0xe688,	// (0x00058e1c) list_single_fp_cale_pane_t1_ParamLimits

0xe688,	// (0x00058e1c) list_single_fp_cale_pane_t1

0xe69a,	// (0x00058e2e) list_single_fp_cale_pane_t2_ParamLimits

0xe69a,	// (0x00058e2e) list_single_fp_cale_pane_t2

0x0001,

0xf72b,	// (0x00059ebf) list_single_fp_cale_pane_t_ParamLimits

0xf72b,	// (0x00059ebf) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x5fae,	// (0x00050742) main_dialer_pane

0x2888,	// (0x0004d01c) aid_cell_size_keypad

0x2888,	// (0x0004d01c) dialer_ne_pane

0x2888,	// (0x0004d01c) grid_dialer_command_1_pane

0x2888,	// (0x0004d01c) grid_dialer_command_2_pane

0x2888,	// (0x0004d01c) grid_dialer_keypad_pane

0xdf38,	// (0x000586cc) bg_popup_call_pane_cp06_ParamLimits

0xdf38,	// (0x000586cc) bg_popup_call_pane_cp06

0xdf38,	// (0x000586cc) dialer_ne_clear_pane_ParamLimits

0xdf38,	// (0x000586cc) dialer_ne_clear_pane

0x322a,	// (0x0004d9be) dialer_ne_pane_g1

0x324c,	// (0x0004d9e0) dialer_ne_pane_t1_ParamLimits

0x324c,	// (0x0004d9e0) dialer_ne_pane_t1

0xe6cd,	// (0x00058e61) dialer_ne_pane_t2_ParamLimits

0xe6cd,	// (0x00058e61) dialer_ne_pane_t2

0x97b4,	// (0x00053f48) dialer_ne_pane_t3_ParamLimits

0x97b4,	// (0x00053f48) dialer_ne_pane_t3

0x0002,

0xf730,	// (0x00059ec4) dialer_ne_pane_t_ParamLimits

0xf730,	// (0x00059ec4) dialer_ne_pane_t

0x97b4,	// (0x00053f48) dialer_ne_pane_t3_copy1_ParamLimits

0x97b4,	// (0x00053f48) dialer_ne_pane_t3_copy1

0xe6ea,	// (0x00058e7e) cell_dialer_keypad_pane_ParamLimits

0xe6ea,	// (0x00058e7e) cell_dialer_keypad_pane

0x2f37,	// (0x0004d6cb) cell_dialer_command_1_pane_ParamLimits

0x2f37,	// (0x0004d6cb) cell_dialer_command_1_pane

0xe701,	// (0x00058e95) cell_dialer_command_2_pane_ParamLimits

0xe701,	// (0x00058e95) cell_dialer_command_2_pane

0x2f37,	// (0x0004d6cb) bg_button_pane_cp02_ParamLimits

0x2f37,	// (0x0004d6cb) bg_button_pane_cp02

0x2fd0,	// (0x0004d764) cell_dialer_keypad_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) cell_dialer_keypad_pane_g1

0x2f37,	// (0x0004d6cb) bg_button_pane_cp03_ParamLimits

0x2f37,	// (0x0004d6cb) bg_button_pane_cp03

0x2fd0,	// (0x0004d764) cell_dialer_command_1_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) cell_dialer_command_1_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp04

0x322a,	// (0x0004d9be) cell_dialer_command_2_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp06

0x322a,	// (0x0004d9be) dialer_ne_clear_pane_g1

0x3b33,	// (0x0004e2c7) navi_pane_g2

0x3b61,	// (0x0004e2f5) navi_pane_g3

0x0002,

0xf35f,	// (0x00059af3) navi_pane_g

0x3bf0,	// (0x0004e384) navi_pane_mv_g2

0x3c17,	// (0x0004e3ab) navi_pane_mv_g5

0x7fb5,	// (0x00052749) navi_pane_mv_t1

0x3042,	// (0x0004d7d6) main_clock2_pane

0x28b2,	// (0x0004d046) main_clock2_list_pane_ParamLimits

0x28b2,	// (0x0004d046) main_clock2_list_pane

0x982a,	// (0x00053fbe) main_clock2_pane_t1_ParamLimits

0x982a,	// (0x00053fbe) main_clock2_pane_t1

0x9858,	// (0x00053fec) main_clock2_pane_t2_ParamLimits

0x9858,	// (0x00053fec) main_clock2_pane_t2

0x0004,

0xf73c,	// (0x00059ed0) main_clock2_pane_t_ParamLimits

0xf73c,	// (0x00059ed0) main_clock2_pane_t

0x98bd,	// (0x00054051) popup_clock_analogue_window_cp03_ParamLimits

0x98bd,	// (0x00054051) popup_clock_analogue_window_cp03

0x98db,	// (0x0005406f) popup_clock_digital_window_cp02_ParamLimits

0x98db,	// (0x0005406f) popup_clock_digital_window_cp02

0x9950,	// (0x000540e4) main_clock2_list_single_pane_ParamLimits

0x9950,	// (0x000540e4) main_clock2_list_single_pane

0x31f4,	// (0x0004d988) list_highlight_pane_cp05

0xe748,	// (0x00058edc) main_clock2_list_single_pane_t1

0x6c00,	// (0x00051394) popup_toolbar_window_cp04_ParamLimits

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g2_ParamLimits

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g2

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g3_ParamLimits

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g3

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g4_ParamLimits

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g4

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g5_ParamLimits

0x2fde,	// (0x0004d772) camera2_autofocus_pane_g5

0x0004,

0xf680,	// (0x00059e14) camera2_autofocus_pane_g_ParamLimits

0xf680,	// (0x00059e14) camera2_autofocus_pane_g

0x917d,	// (0x00053911) camera2_autofocus_pane_cp_g2

0x9185,	// (0x00053919) camera2_autofocus_pane_cp_g3

0x918d,	// (0x00053921) camera2_autofocus_pane_cp_g4

0x9195,	// (0x00053929) camera2_autofocus_pane_cp_g5

0x0004,

0xf6e6,	// (0x00059e7a) camera2_autofocus_pane_cp_g

0x2888,	// (0x0004d01c) popup_dialer_spcha_window

0x2888,	// (0x0004d01c) bg_popup_sub_pane_cp07

0x2888,	// (0x0004d01c) list_spcha_pane

0xe756,	// (0x00058eea) list_single_spcha_pane_ParamLimits

0xe756,	// (0x00058eea) list_single_spcha_pane

0x2888,	// (0x0004d01c) list_highlight_pane_cp06

0x375a,	// (0x0004deee) list_single_spcha_pane_t1

0x4a86,	// (0x0004f21a) popup_call2_audio_out_window_g4_ParamLimits

0x4a86,	// (0x0004f21a) popup_call2_audio_out_window_g4

0x5fae,	// (0x00050742) main_imed2_pane

0x8bc5,	// (0x00053359) popup_imed_adjust2_window

0x8bd8,	// (0x0005336c) popup_imed_trans_window_ParamLimits

0x8bd8,	// (0x0005336c) popup_imed_trans_window

0xe1a9,	// (0x0005893d) popup_blid_sat_info2_window_t1

0xe1b7,	// (0x0005894b) popup_blid_sat_info2_window_t2

0x000a,

0xf615,	// (0x00059da9) popup_blid_sat_info2_window_t

0x9a05,	// (0x00054199) aid_size_cell_colour_35

0x9a1f,	// (0x000541b3) aid_size_cell_colour_112

0x9a36,	// (0x000541ca) aid_size_cell_effect

0x2f37,	// (0x0004d6cb) bg_tb_trans_pane_cp02

0x467f,	// (0x0004ee13) heading_imed_pane

0x9a50,	// (0x000541e4) listscroll_imed_pane

0xe768,	// (0x00058efc) heading_imed_pane_g1

0xe770,	// (0x00058f04) heading_imed_pane_t1

0xe77e,	// (0x00058f12) grid_imed_colour_35_pane_ParamLimits

0xe77e,	// (0x00058f12) grid_imed_colour_35_pane

0x9a5c,	// (0x000541f0) grid_imed_effect_pane

0xe795,	// (0x00058f29) list_imed_aspect_pane

0x9a6c,	// (0x00054200) scroll_pane_cp027_ParamLimits

0x9a6c,	// (0x00054200) scroll_pane_cp027

0x9a78,	// (0x0005420c) cell_imed_effect_pane_ParamLimits

0x9a78,	// (0x0005420c) cell_imed_effect_pane

0xe79d,	// (0x00058f31) cell_imed_colour_pane_ParamLimits

0xe79d,	// (0x00058f31) cell_imed_colour_pane

0xe7df,	// (0x00058f73) cell_imed_colour_pane_g1_ParamLimits

0xe7df,	// (0x00058f73) cell_imed_colour_pane_g1

0xe7f0,	// (0x00058f84) hgihlgiht_grid_pane_cp016_ParamLimits

0xe7f0,	// (0x00058f84) hgihlgiht_grid_pane_cp016

0x9a90,	// (0x00054224) cell_imed_effect_pane_g1

0x9a98,	// (0x0005422c) grid_highlight_pane_cp017

0xe801,	// (0x00058f95) list_imed_single_pane_ParamLimits

0xe801,	// (0x00058f95) list_imed_single_pane

0x2888,	// (0x0004d01c) list_highlight_pane_cp07

0xe816,	// (0x00058faa) list_imed_aspect_pane_comp1_t1

0x46ad,	// (0x0004ee41) bg_tb_trans_pane_cp05

0xe838,	// (0x00058fcc) popup_imed_adjust2_window_g1

0xe85f,	// (0x00058ff3) popup_imed_adjust2_window_t1

0xe877,	// (0x0005900b) slider_imed_adjust_pane

0xe88b,	// (0x0005901f) slider_imed_adjust_pane_g1

0xe89b,	// (0x0005902f) slider_imed_adjust_pane_g2

0xe8ab,	// (0x0005903f) slider_imed_adjust_pane_g3

0xe8bc,	// (0x00059050) slider_imed_adjust_pane_g4

0x0003,

0xf759,	// (0x00059eed) slider_imed_adjust_pane_g

0x9aa1,	// (0x00054235) aid_size_cell_clipart2

0x9aad,	// (0x00054241) grid_imed_clipart_pane

0xe8cd,	// (0x00059061) scroll_pane_cp031

0x9ab7,	// (0x0005424b) cell_imed_clipart_pane_ParamLimits

0x9ab7,	// (0x0005424b) cell_imed_clipart_pane

0x9ad9,	// (0x0005426d) cell_imed_clipart_pane_g1

0x2888,	// (0x0004d01c) grid_highlight_pane_cp014

0x980c,	// (0x00053fa0) main_clock2_pane_g1_ParamLimits

0x980c,	// (0x00053fa0) main_clock2_pane_g1

0x98f7,	// (0x0005408b) aid_call2_pane_cp10

0x9909,	// (0x0005409d) aid_call_pane_cp10

0x3a94,	// (0x0004e228) popup_clock_analogue_window_cp10_g1

0x3a94,	// (0x0004e228) popup_clock_analogue_window_cp10_g2

0x991b,	// (0x000540af) popup_clock_analogue_window_cp10_g3

0x991b,	// (0x000540af) popup_clock_analogue_window_cp10_g4

0x3a94,	// (0x0004e228) popup_clock_analogue_window_cp10_g5

0x0004,

0xf747,	// (0x00059edb) popup_clock_analogue_window_cp10_g

0x9931,	// (0x000540c5) popup_clock_analogue_window_cp10_t1

0x9962,	// (0x000540f6) clock_digital_number_pane_cp10_ParamLimits

0x9962,	// (0x000540f6) clock_digital_number_pane_cp10

0x997c,	// (0x00054110) clock_digital_number_pane_cp11_ParamLimits

0x997c,	// (0x00054110) clock_digital_number_pane_cp11

0x9996,	// (0x0005412a) clock_digital_number_pane_cp12_ParamLimits

0x9996,	// (0x0005412a) clock_digital_number_pane_cp12

0x99b0,	// (0x00054144) clock_digital_number_pane_cp13_ParamLimits

0x99b0,	// (0x00054144) clock_digital_number_pane_cp13

0x99ca,	// (0x0005415e) clock_digital_separator_pane_cp10_ParamLimits

0x99ca,	// (0x0005415e) clock_digital_separator_pane_cp10

0x99e4,	// (0x00054178) popup_clock_digital_window_cp02_t1_ParamLimits

0x99e4,	// (0x00054178) popup_clock_digital_window_cp02_t1

0x2f5b,	// (0x0004d6ef) clock_digital_number_pane_cp10_g1

0x2f5b,	// (0x0004d6ef) clock_digital_number_pane_cp10_g2

0x0001,

0xf762,	// (0x00059ef6) clock_digital_number_pane_cp10_g

0x2f5b,	// (0x0004d6ef) clock_digital_separator_pane_cp10_g1

0x2f5b,	// (0x0004d6ef) clock_digital_separator_pane_g2_cp10

0x3c1f,	// (0x0004e3b3) navi_pane_vded_g4

0x3c28,	// (0x0004e3bc) navi_pane_vded_g5

0x3c31,	// (0x0004e3c5) navi_pane_vded_t1

0x5fae,	// (0x00050742) main_vded_pane

0x9ae2,	// (0x00054276) main_vded_pane_g1

0x9aee,	// (0x00054282) main_vded_pane_g2

0x9af8,	// (0x0005428c) main_vded_pane_g3

0x0002,

0xf767,	// (0x00059efb) main_vded_pane_g

0x9b02,	// (0x00054296) main_vded_pane_t1

0x9b10,	// (0x000542a4) main_vded_pane_t2

0x0001,

0xf76e,	// (0x00059f02) main_vded_pane_t

0x9b1e,	// (0x000542b2) vded_slider_pane

0x9b28,	// (0x000542bc) vded_video_pane

0xe8d5,	// (0x00059069) vded_video_pane_g1

0x9b32,	// (0x000542c6) vded_video_pane_g2

0x322a,	// (0x0004d9be) vded_video_pane_g3

0x0002,

0xf773,	// (0x00059f07) vded_video_pane_g

0xe8df,	// (0x00059073) vded_slider_pane_g1

0xe0ca,	// (0x0005885e) vded_slider_pane_g2

0xe8e8,	// (0x0005907c) vded_slider_pane_g3

0xe8f1,	// (0x00059085) vded_slider_pane_g4

0xe8fa,	// (0x0005908e) vded_slider_pane_g5

0x0004,

0xf77a,	// (0x00059f0e) vded_slider_pane_g

0x96e6,	// (0x00053e7a) mup3_rocker_pane_ParamLimits

0x96e6,	// (0x00053e7a) mup3_rocker_pane

0x9b3b,	// (0x000542cf) mup3_control_keys_pane_g1

0x9b43,	// (0x000542d7) mup3_control_keys_pane_g2

0x9b4b,	// (0x000542df) mup3_control_keys_pane_g3

0x9b53,	// (0x000542e7) mup3_control_keys_pane_g4

0x0003,

0xf785,	// (0x00059f19) mup3_control_keys_pane_g

0x5f62,	// (0x000506f6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5f62,	// (0x000506f6) popup_toolbar2_fixed_window_cp01

0x9700,	// (0x00053e94) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9700,	// (0x00053e94) popup_toolbar2_fixed_window_cp02

0x43ae,	// (0x0004eb42) popup_call2_audio_second_window_t4_ParamLimits

0x43ae,	// (0x0004eb42) popup_call2_audio_second_window_t4

0x494b,	// (0x0004f0df) popup_call2_audio_first_window_t6_ParamLimits

0x494b,	// (0x0004f0df) popup_call2_audio_first_window_t6

0x4b89,	// (0x0004f31d) popup_call2_audio_out_window_t6_ParamLimits

0x4b89,	// (0x0004f31d) popup_call2_audio_out_window_t6

0x5fae,	// (0x00050742) main_vitu_pane

0x28b2,	// (0x0004d046) aid_size_cell_itu_ParamLimits

0x28b2,	// (0x0004d046) aid_size_cell_itu

0x28b2,	// (0x0004d046) bg_popup_window_pane_cp08_ParamLimits

0x28b2,	// (0x0004d046) bg_popup_window_pane_cp08

0x28b2,	// (0x0004d046) field_vitu_entry_pane_ParamLimits

0x28b2,	// (0x0004d046) field_vitu_entry_pane

0x28b2,	// (0x0004d046) grid_vitu_function_pane_ParamLimits

0x28b2,	// (0x0004d046) grid_vitu_function_pane

0x28b2,	// (0x0004d046) grid_vitu_itu_pane_ParamLimits

0x28b2,	// (0x0004d046) grid_vitu_itu_pane

0x28b2,	// (0x0004d046) cell_vitu_itu_pane_ParamLimits

0x28b2,	// (0x0004d046) cell_vitu_itu_pane

0x28b2,	// (0x0004d046) cell_vitu_function_pane_ParamLimits

0x28b2,	// (0x0004d046) cell_vitu_function_pane

0x2f37,	// (0x0004d6cb) bg_popup_sub_pane_cp08_ParamLimits

0x2f37,	// (0x0004d6cb) bg_popup_sub_pane_cp08

0x31fc,	// (0x0004d990) field_vitu_entry_pane_t1_ParamLimits

0x31fc,	// (0x0004d990) field_vitu_entry_pane_t1

0xe6cd,	// (0x00058e61) field_vitu_entry_pane_t2_ParamLimits

0xe6cd,	// (0x00058e61) field_vitu_entry_pane_t2

0x0001,

0xf78e,	// (0x00059f22) field_vitu_entry_pane_t_ParamLimits

0xf78e,	// (0x00059f22) field_vitu_entry_pane_t

0xdf38,	// (0x000586cc) bg_button_pane_cp05_ParamLimits

0xdf38,	// (0x000586cc) bg_button_pane_cp05

0xe903,	// (0x00059097) cell_vitu_itu_pane_g1

0x4699,	// (0x0004ee2d) cell_vitu_itu_pane_t1_ParamLimits

0x4699,	// (0x0004ee2d) cell_vitu_itu_pane_t1

0x4699,	// (0x0004ee2d) cell_vitu_itu_pane_t2_ParamLimits

0x4699,	// (0x0004ee2d) cell_vitu_itu_pane_t2

0x0002,

0xf793,	// (0x00059f27) cell_vitu_itu_pane_t_ParamLimits

0xf793,	// (0x00059f27) cell_vitu_itu_pane_t

0x2888,	// (0x0004d01c) bg_button_pane_cp07

0x322a,	// (0x0004d9be) cell_vitu_function_pane_g1

0x60e4,	// (0x00050878) main_calc_pane_g1

0x5d20,	// (0x000504b4) aid_visual_content_pane

0x5fae,	// (0x00050742) main_vradio_pane

0x2fde,	// (0x0004d772) main_vradio_pane_g1_ParamLimits

0x2fde,	// (0x0004d772) main_vradio_pane_g1

0x2fde,	// (0x0004d772) main_vradio_pane_g2_ParamLimits

0x2fde,	// (0x0004d772) main_vradio_pane_g2

0x0001,

0xf79a,	// (0x00059f2e) main_vradio_pane_g_ParamLimits

0xf79a,	// (0x00059f2e) main_vradio_pane_g

0x324c,	// (0x0004d9e0) main_vradio_pane_t1_ParamLimits

0x324c,	// (0x0004d9e0) main_vradio_pane_t1

0x324c,	// (0x0004d9e0) main_vradio_pane_t2_ParamLimits

0x324c,	// (0x0004d9e0) main_vradio_pane_t2

0x324c,	// (0x0004d9e0) main_vradio_pane_t3_ParamLimits

0x324c,	// (0x0004d9e0) main_vradio_pane_t3

0x0002,

0xf79f,	// (0x00059f33) main_vradio_pane_t_ParamLimits

0xf79f,	// (0x00059f33) main_vradio_pane_t

0x28b2,	// (0x0004d046) vradio_rocker_control_pane_ParamLimits

0x28b2,	// (0x0004d046) vradio_rocker_control_pane

0x28b2,	// (0x0004d046) vradio_station_info_pane_ParamLimits

0x28b2,	// (0x0004d046) vradio_station_info_pane

0x2f37,	// (0x0004d6cb) vradio_frequency_info_pane_ParamLimits

0x2f37,	// (0x0004d6cb) vradio_frequency_info_pane

0x322a,	// (0x0004d9be) vradio_station_info_pane_g1

0x4699,	// (0x0004ee2d) vradio_station_info_pane_t1_ParamLimits

0x4699,	// (0x0004ee2d) vradio_station_info_pane_t1

0x324c,	// (0x0004d9e0) vradio_station_info_pane_t2_ParamLimits

0x324c,	// (0x0004d9e0) vradio_station_info_pane_t2

0x0001,

0xf7a6,	// (0x00059f3a) vradio_station_info_pane_t_ParamLimits

0xf7a6,	// (0x00059f3a) vradio_station_info_pane_t

0x2888,	// (0x0004d01c) vradio_tuning_pane

0x9b63,	// (0x000542f7) vradio_rocker_control_pane_g1

0xe91f,	// (0x000590b3) vradio_rocker_control_pane_g2

0x9b6b,	// (0x000542ff) vradio_rocker_control_pane_g3

0x9b73,	// (0x00054307) vradio_rocker_control_pane_g4

0x9b7b,	// (0x0005430f) vradio_rocker_control_pane_g5

0x0004,

0xf7ab,	// (0x00059f3f) vradio_rocker_control_pane_g

0x322a,	// (0x0004d9be) vradio_frequency_info_pane_g1

0x31fc,	// (0x0004d990) vradio_frequency_info_pane_t1_ParamLimits

0x31fc,	// (0x0004d990) vradio_frequency_info_pane_t1

0x9b83,	// (0x00054317) vradio_tuning_pane_g1

0x9b90,	// (0x00054324) vradio_tuning_pane_t1

0x5d69,	// (0x000504fd) area_side_right_pane_ParamLimits

0x5d69,	// (0x000504fd) area_side_right_pane

0x4f79,	// (0x0004f70d) status_small_pane_g1

0x4f81,	// (0x0004f715) status_small_pane_g2

0x4f8a,	// (0x0004f71e) status_small_pane_g3

0x4f93,	// (0x0004f727) status_small_pane_g4

0x0003,

0xf577,	// (0x00059d0b) status_small_pane_g

0x4f9c,	// (0x0004f730) status_small_pane_t1

0x5fae,	// (0x00050742) main_video3_pane

0xe927,	// (0x000590bb) cams_zoom_vslider_pane

0xe92f,	// (0x000590c3) image3_wide_pane_ParamLimits

0xe92f,	// (0x000590c3) image3_wide_pane

0xe949,	// (0x000590dd) image3_wide_small_pane

0xe955,	// (0x000590e9) main_video3_pane_g1_ParamLimits

0xe955,	// (0x000590e9) main_video3_pane_g1

0xe971,	// (0x00059105) main_video3_pane_g2_ParamLimits

0xe971,	// (0x00059105) main_video3_pane_g2

0x0001,

0xf7b6,	// (0x00059f4a) main_video3_pane_g_ParamLimits

0xf7b6,	// (0x00059f4a) main_video3_pane_g

0xe98d,	// (0x00059121) main_video3_pane_t1_ParamLimits

0xe98d,	// (0x00059121) main_video3_pane_t1

0xe9b8,	// (0x0005914c) main_video3_pane_t2_ParamLimits

0xe9b8,	// (0x0005914c) main_video3_pane_t2

0xe9e3,	// (0x00059177) main_video3_pane_t3_ParamLimits

0xe9e3,	// (0x00059177) main_video3_pane_t3

0x0002,

0xf7bb,	// (0x00059f4f) main_video3_pane_t_ParamLimits

0xf7bb,	// (0x00059f4f) main_video3_pane_t

0xea10,	// (0x000591a4) cams_zoom_vslider_pane_g1

0xea19,	// (0x000591ad) cams_zoom_vslider_pane_g2

0x0001,

0xf7c2,	// (0x00059f56) cams_zoom_vslider_pane_g

0xea21,	// (0x000591b5) small_slider_vertical_pane

0x322a,	// (0x0004d9be) small_slider_vertical_pane_g1

0x322a,	// (0x0004d9be) small_slider_vertical_pane_g2

0xea29,	// (0x000591bd) small_slider_vertical_pane_g3

0x0002,

0xf7c7,	// (0x00059f5b) small_slider_vertical_pane_g

0x5fae,	// (0x00050742) main_hwr_training_pane

0xea32,	// (0x000591c6) hwr_training_instruct_pane_ParamLimits

0xea32,	// (0x000591c6) hwr_training_instruct_pane

0x9b9f,	// (0x00054333) hwr_training_navi_pane_ParamLimits

0x9b9f,	// (0x00054333) hwr_training_navi_pane

0x9bb9,	// (0x0005434d) hwr_training_write_pane_ParamLimits

0x9bb9,	// (0x0005434d) hwr_training_write_pane

0x2888,	// (0x0004d01c) bg_frame_shadow_pane

0xea69,	// (0x000591fd) hwr_training_write_pane_g1

0xea71,	// (0x00059205) hwr_training_write_pane_g2

0xea79,	// (0x0005920d) hwr_training_write_pane_g3

0xea81,	// (0x00059215) hwr_training_write_pane_g4

0xea89,	// (0x0005921d) hwr_training_write_pane_g5

0xea91,	// (0x00059225) hwr_training_write_pane_g6

0xea99,	// (0x0005922d) hwr_training_write_pane_g7

0x0006,

0xf7ce,	// (0x00059f62) hwr_training_write_pane_g

0x9bf1,	// (0x00054385) hwr_training_navi_pane_g1_ParamLimits

0x9bf1,	// (0x00054385) hwr_training_navi_pane_g1

0x9c03,	// (0x00054397) hwr_training_navi_pane_g2_ParamLimits

0x9c03,	// (0x00054397) hwr_training_navi_pane_g2

0x9c15,	// (0x000543a9) hwr_training_navi_pane_g3_ParamLimits

0x9c15,	// (0x000543a9) hwr_training_navi_pane_g3

0x9c25,	// (0x000543b9) hwr_training_navi_pane_g4_ParamLimits

0x9c25,	// (0x000543b9) hwr_training_navi_pane_g4

0x0004,

0xf7dd,	// (0x00059f71) hwr_training_navi_pane_g_ParamLimits

0xf7dd,	// (0x00059f71) hwr_training_navi_pane_g

0x9c3f,	// (0x000543d3) hwr_training_navi_pane_t1

0x9c4d,	// (0x000543e1) list_single_hwr_training_instruct_pane_ParamLimits

0x9c4d,	// (0x000543e1) list_single_hwr_training_instruct_pane

0xeaa1,	// (0x00059235) list_single_hwr_training_instruct_pane_t1

0xe2aa,	// (0x00058a3e) bg_frame_shadow_pane_g1

0xeab0,	// (0x00059244) bg_frame_shadow_pane_g2

0xeab8,	// (0x0005924c) bg_frame_shadow_pane_g3

0xeac0,	// (0x00059254) bg_frame_shadow_pane_g4

0xeac8,	// (0x0005925c) bg_frame_shadow_pane_g5

0xead0,	// (0x00059264) bg_frame_shadow_pane_g6

0xead8,	// (0x0005926c) bg_frame_shadow_pane_g7

0x30f1,	// (0x0004d885) bg_frame_shadow_pane_g8

0x0007,

0xf7e8,	// (0x00059f7c) bg_frame_shadow_pane_g

0x5fae,	// (0x00050742) main_video_tele_dialer_pane

0x9c72,	// (0x00054406) aid_size_cell_video_keypad_ParamLimits

0x9c72,	// (0x00054406) aid_size_cell_video_keypad

0x9c82,	// (0x00054416) grid_video_dialer_keypad_pane_ParamLimits

0x9c82,	// (0x00054416) grid_video_dialer_keypad_pane

0x9cb6,	// (0x0005444a) video_down_pane_cp_ParamLimits

0x9cb6,	// (0x0005444a) video_down_pane_cp

0x9ce0,	// (0x00054474) cell_video_dialer_keypad_pane_ParamLimits

0x9ce0,	// (0x00054474) cell_video_dialer_keypad_pane

0xeae0,	// (0x00059274) bg_button_pane_cp08_ParamLimits

0xeae0,	// (0x00059274) bg_button_pane_cp08

0x9cf5,	// (0x00054489) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9cf5,	// (0x00054489) cell_video_dialer_keypad_pane_g1

0x96da,	// (0x00053e6e) mup3_rocker2_pane_ParamLimits

0x96da,	// (0x00053e6e) mup3_rocker2_pane

0x322a,	// (0x0004d9be) mup3_rocker2_pane_g1

0x8b35,	// (0x000532c9) main_dialer2_pane

0x5fae,	// (0x00050742) main_mp4_pane

0x9d4a,	// (0x000544de) main_mp4_pane_g1_ParamLimits

0x9d4a,	// (0x000544de) main_mp4_pane_g1

0x9d58,	// (0x000544ec) main_mp4_pane_g2_ParamLimits

0x9d58,	// (0x000544ec) main_mp4_pane_g2

0x9d66,	// (0x000544fa) main_mp4_pane_g3_ParamLimits

0x9d66,	// (0x000544fa) main_mp4_pane_g3

0x9dab,	// (0x0005453f) main_mp4_pane_g4_ParamLimits

0x9dab,	// (0x0005453f) main_mp4_pane_g4

0x9dd9,	// (0x0005456d) main_mp4_pane_g5_ParamLimits

0x9dd9,	// (0x0005456d) main_mp4_pane_g5

0x0007,

0xf808,	// (0x00059f9c) main_mp4_pane_g_ParamLimits

0xf808,	// (0x00059f9c) main_mp4_pane_g

0x9e4d,	// (0x000545e1) main_mp4_pane_t1_ParamLimits

0x9e4d,	// (0x000545e1) main_mp4_pane_t1

0x9ea9,	// (0x0005463d) main_mp4_pane_t2_ParamLimits

0x9ea9,	// (0x0005463d) main_mp4_pane_t2

0xeaec,	// (0x00059280) main_mp4_pane_t3_ParamLimits

0xeaec,	// (0x00059280) main_mp4_pane_t3

0x9efb,	// (0x0005468f) main_mp4_pane_t4_ParamLimits

0x9efb,	// (0x0005468f) main_mp4_pane_t4

0x0003,

0xf819,	// (0x00059fad) main_mp4_pane_t_ParamLimits

0xf819,	// (0x00059fad) main_mp4_pane_t

0x9f3f,	// (0x000546d3) mp4_progress_pane_ParamLimits

0x9f3f,	// (0x000546d3) mp4_progress_pane

0x9f89,	// (0x0005471d) mp4_rocker_pane_ParamLimits

0x9f89,	// (0x0005471d) mp4_rocker_pane

0xeb1a,	// (0x000592ae) mp4_progress_pane_t1

0xeb33,	// (0x000592c7) mp4_progress_pane_t2

0x0001,

0xf822,	// (0x00059fb6) mp4_progress_pane_t

0xeb4c,	// (0x000592e0) mup_progress_pane_cp04

0xe0d3,	// (0x00058867) mp4_rocker_pane_g1

0x9fa9,	// (0x0005473d) aid_cell_size_keypad2_ParamLimits

0x9fa9,	// (0x0005473d) aid_cell_size_keypad2

0x9fb9,	// (0x0005474d) dialer2_ne_pane_ParamLimits

0x9fb9,	// (0x0005474d) dialer2_ne_pane

0x9fc7,	// (0x0005475b) grid_dialer2_keypad_pane_ParamLimits

0x9fc7,	// (0x0005475b) grid_dialer2_keypad_pane

0x06ef,	// (0x0004ae83) bg_popup_call_pane_cp07_ParamLimits

0x06ef,	// (0x0004ae83) bg_popup_call_pane_cp07

0x9fd7,	// (0x0005476b) dialer2_ne_pane_t1_ParamLimits

0x9fd7,	// (0x0005476b) dialer2_ne_pane_t1

0x9ffc,	// (0x00054790) cell_dialer2_keypad_pane_ParamLimits

0x9ffc,	// (0x00054790) cell_dialer2_keypad_pane

0xeb71,	// (0x00059305) bg_button_pane_pane_cp04_ParamLimits

0xeb71,	// (0x00059305) bg_button_pane_pane_cp04

0xa011,	// (0x000547a5) cell_dialer2_keypad_pane_g1_ParamLimits

0xa011,	// (0x000547a5) cell_dialer2_keypad_pane_g1

0x6ac2,	// (0x00051256) aid_placing_vt_set_content_ParamLimits

0x6ac2,	// (0x00051256) aid_placing_vt_set_content

0x6aee,	// (0x00051282) aid_placing_vt_set_title_ParamLimits

0x6aee,	// (0x00051282) aid_placing_vt_set_title

0x5fae,	// (0x00050742) main_image3_pane

0xa0ab,	// (0x0005483f) area_side_right_pane_cp01_ParamLimits

0xa0ab,	// (0x0005483f) area_side_right_pane_cp01

0xa0d8,	// (0x0005486c) main_image3_pane_g1_ParamLimits

0xa0d8,	// (0x0005486c) main_image3_pane_g1

0xa0e6,	// (0x0005487a) main_image3_pane_g2_ParamLimits

0xa0e6,	// (0x0005487a) main_image3_pane_g2

0xa0ff,	// (0x00054893) main_image3_pane_g3_ParamLimits

0xa0ff,	// (0x00054893) main_image3_pane_g3

0xa118,	// (0x000548ac) main_image3_pane_g4_ParamLimits

0xa118,	// (0x000548ac) main_image3_pane_g4

0x0003,

0xf831,	// (0x00059fc5) main_image3_pane_g_ParamLimits

0xf831,	// (0x00059fc5) main_image3_pane_g

0xa131,	// (0x000548c5) main_image3_pane_t1_ParamLimits

0xa131,	// (0x000548c5) main_image3_pane_t1

0xa156,	// (0x000548ea) main_image3_pane_t2_ParamLimits

0xa156,	// (0x000548ea) main_image3_pane_t2

0xa175,	// (0x00054909) main_image3_pane_t3_ParamLimits

0xa175,	// (0x00054909) main_image3_pane_t3

0x0003,

0xf83a,	// (0x00059fce) main_image3_pane_t_ParamLimits

0xf83a,	// (0x00059fce) main_image3_pane_t

0x28b2,	// (0x0004d046) grid_sctrl_middle_pane_cp01_ParamLimits

0x28b2,	// (0x0004d046) grid_sctrl_middle_pane_cp01

0xa1d6,	// (0x0005496a) cell_sctrl_middle_pane_cp01_ParamLimits

0xa1d6,	// (0x0005496a) cell_sctrl_middle_pane_cp01

0xa1e7,	// (0x0005497b) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa1e7,	// (0x0005497b) cell_sctrl_middle_pane_cp01_g1

0x5fae,	// (0x00050742) main_call4_pane

0xa1f4,	// (0x00054988) aid_size_button_call4_ParamLimits

0xa1f4,	// (0x00054988) aid_size_button_call4

0xa22a,	// (0x000549be) call4_windows_pane_ParamLimits

0xa22a,	// (0x000549be) call4_windows_pane

0xa23f,	// (0x000549d3) grid_call4_button_pane_ParamLimits

0xa23f,	// (0x000549d3) grid_call4_button_pane

0xa26d,	// (0x00054a01) call4_windows_conf_pane

0xa284,	// (0x00054a18) popup_call4_audio_first_window_ParamLimits

0xa284,	// (0x00054a18) popup_call4_audio_first_window

0xa2d4,	// (0x00054a68) popup_call4_audio_second_window_ParamLimits

0xa2d4,	// (0x00054a68) popup_call4_audio_second_window

0xa2ed,	// (0x00054a81) popup_call4_audio_wait_window_ParamLimits

0xa2ed,	// (0x00054a81) popup_call4_audio_wait_window

0xa2fb,	// (0x00054a8f) cell_call4_button_pane_ParamLimits

0xa2fb,	// (0x00054a8f) cell_call4_button_pane

0xa31e,	// (0x00054ab2) bg_button_pane_cp09_ParamLimits

0xa31e,	// (0x00054ab2) bg_button_pane_cp09

0xa32a,	// (0x00054abe) cell_call4_button_pane_g1_ParamLimits

0xa32a,	// (0x00054abe) cell_call4_button_pane_g1

0xa337,	// (0x00054acb) cell_call4_button_pane_t1_ParamLimits

0xa337,	// (0x00054acb) cell_call4_button_pane_t1

0xeb85,	// (0x00059319) popup_call4_audio_conf_window_ParamLimits

0xeb85,	// (0x00059319) popup_call4_audio_conf_window

0x970d,	// (0x00053ea1) mup3_progress_pane_t1_ParamLimits

0x972c,	// (0x00053ec0) mup3_progress_pane_t2_ParamLimits

0xe5f6,	// (0x00058d8a) mup3_progress_pane_t3_ParamLimits

0xf70f,	// (0x00059ea3) mup3_progress_pane_t_ParamLimits

0xe613,	// (0x00058da7) mup_progress_pane_cp03_ParamLimits

0x9b5b,	// (0x000542ef) mup3_control_keys_pane_g4_copy1

0x9f6d,	// (0x00054701) mp4_rocker2_pane_ParamLimits

0x9f6d,	// (0x00054701) mp4_rocker2_pane

0xeb99,	// (0x0005932d) mp4_rocker2_pane_g1

0xeba1,	// (0x00059335) mp4_rocker2_pane_g2

0xa37b,	// (0x00054b0f) mp4_rocker2_pane_g3

0xa383,	// (0x00054b17) mp4_rocker2_pane_g4

0xa38b,	// (0x00054b1f) mp4_rocker2_pane_g5

0x0004,

0xf843,	// (0x00059fd7) mp4_rocker2_pane_g

0x5fae,	// (0x00050742) main_camera4_pane

0x5fae,	// (0x00050742) main_video4_pane

0x9c92,	// (0x00054426) main_video_tele_dialer_pane_t1_ParamLimits

0x9c92,	// (0x00054426) main_video_tele_dialer_pane_t1

0x9ca4,	// (0x00054438) main_video_tele_dialer_pane_t2_ParamLimits

0x9ca4,	// (0x00054438) main_video_tele_dialer_pane_t2

0x0001,

0xf7f9,	// (0x00059f8d) main_video_tele_dialer_pane_t_ParamLimits

0xf7f9,	// (0x00059f8d) main_video_tele_dialer_pane_t

0xa3ab,	// (0x00054b3f) cam4_autofocus_pane_ParamLimits

0xa3ab,	// (0x00054b3f) cam4_autofocus_pane

0xa3c5,	// (0x00054b59) cam4_image_uncrop_pane_ParamLimits

0xa3c5,	// (0x00054b59) cam4_image_uncrop_pane

0xa3dc,	// (0x00054b70) cam4_indicators_pane_ParamLimits

0xa3dc,	// (0x00054b70) cam4_indicators_pane

0xa3f8,	// (0x00054b8c) main_camera4_pane_g1_ParamLimits

0xa3f8,	// (0x00054b8c) main_camera4_pane_g1

0xa404,	// (0x00054b98) main_camera4_pane_g2_ParamLimits

0xa404,	// (0x00054b98) main_camera4_pane_g2

0xa404,	// (0x00054b98) main_camera4_pane_g3_ParamLimits

0xa404,	// (0x00054b98) main_camera4_pane_g3

0xa410,	// (0x00054ba4) main_camera4_pane_g4_ParamLimits

0xa410,	// (0x00054ba4) main_camera4_pane_g4

0xa41c,	// (0x00054bb0) main_camera4_pane_g5_ParamLimits

0xa41c,	// (0x00054bb0) main_camera4_pane_g5

0x0005,

0xf84e,	// (0x00059fe2) main_camera4_pane_g_ParamLimits

0xf84e,	// (0x00059fe2) main_camera4_pane_g

0xa436,	// (0x00054bca) main_camera4_pane_t1_ParamLimits

0xa436,	// (0x00054bca) main_camera4_pane_t1

0xeba9,	// (0x0005933d) bg_tb_trans_pane_cp06

0xa486,	// (0x00054c1a) cam4_indicators_pane_g1

0xa497,	// (0x00054c2b) cam4_indicators_pane_g2

0x0002,

0xf869,	// (0x00059ffd) cam4_indicators_pane_g

0xa4b5,	// (0x00054c49) cam4_indicators_pane_t1

0xa4df,	// (0x00054c73) main_video4_pane_g1_ParamLimits

0xa4df,	// (0x00054c73) main_video4_pane_g1

0xa4eb,	// (0x00054c7f) main_video4_pane_g2_ParamLimits

0xa4eb,	// (0x00054c7f) main_video4_pane_g2

0xa4f7,	// (0x00054c8b) main_video4_pane_g3_ParamLimits

0xa4f7,	// (0x00054c8b) main_video4_pane_g3

0xa503,	// (0x00054c97) main_video4_pane_g4_ParamLimits

0xa503,	// (0x00054c97) main_video4_pane_g4

0x0004,

0xf870,	// (0x0005a004) main_video4_pane_g_ParamLimits

0xf870,	// (0x0005a004) main_video4_pane_g

0xa523,	// (0x00054cb7) vid4_indicators_pane_ParamLimits

0xa523,	// (0x00054cb7) vid4_indicators_pane

0xa542,	// (0x00054cd6) video4_image_uncrop_cif_pane_ParamLimits

0xa542,	// (0x00054cd6) video4_image_uncrop_cif_pane

0xa551,	// (0x00054ce5) video4_image_uncrop_nhd_pane_ParamLimits

0xa551,	// (0x00054ce5) video4_image_uncrop_nhd_pane

0xa3c5,	// (0x00054b59) video4_image_uncrop_vga_pane_ParamLimits

0xa3c5,	// (0x00054b59) video4_image_uncrop_vga_pane

0x8b27,	// (0x000532bb) bg_tb_trans_pane_cp07

0xa568,	// (0x00054cfc) vid4_indicators_pane_g1

0xa57c,	// (0x00054d10) vid4_indicators_pane_g2

0xa590,	// (0x00054d24) vid4_indicators_pane_g3

0x0004,

0xf87b,	// (0x0005a00f) vid4_indicators_pane_g

0xa5bf,	// (0x00054d53) vid4_indicators_pane_t1

0xa5d6,	// (0x00054d6a) cam4_autofocus_pane_g1

0xa5de,	// (0x00054d72) cam4_autofocus_pane_g2

0xa5e6,	// (0x00054d7a) cam4_autofocus_pane_g3

0x0002,

0xf886,	// (0x0005a01a) cam4_autofocus_pane_g

0xa5ee,	// (0x00054d82) cam4_autofocus_pane_g3_copy1

0x9cc4,	// (0x00054458) video_down_pane_cp_t1

0x9cd2,	// (0x00054466) video_down_pane_cp_t2

0x0001,

0xf7fe,	// (0x00059f92) video_down_pane_cp_t

0x5f94,	// (0x00050728) popup_vitu2_window_ParamLimits

0x5f94,	// (0x00050728) popup_vitu2_window

0xa5f6,	// (0x00054d8a) aid_size_cell2_itu2_ParamLimits

0xa5f6,	// (0x00054d8a) aid_size_cell2_itu2

0xa618,	// (0x00054dac) aid_size_cell_itu2_ParamLimits

0xa618,	// (0x00054dac) aid_size_cell_itu2

0xa65c,	// (0x00054df0) bg_popup_window_pane_cp09_ParamLimits

0xa65c,	// (0x00054df0) bg_popup_window_pane_cp09

0xa66a,	// (0x00054dfe) field_vitu2_entry_pane_ParamLimits

0xa66a,	// (0x00054dfe) field_vitu2_entry_pane

0xa68a,	// (0x00054e1e) grid_vitu2_function_pane_ParamLimits

0xa68a,	// (0x00054e1e) grid_vitu2_function_pane

0xa6ce,	// (0x00054e62) grid_vitu2_itu_pane_ParamLimits

0xa6ce,	// (0x00054e62) grid_vitu2_itu_pane

0xa746,	// (0x00054eda) cell_vitu2_itu_pane_ParamLimits

0xa746,	// (0x00054eda) cell_vitu2_itu_pane

0xa75f,	// (0x00054ef3) cell_vitu2_function_pane_ParamLimits

0xa75f,	// (0x00054ef3) cell_vitu2_function_pane

0xebb7,	// (0x0005934b) bg_popup_call_pane_cp08_ParamLimits

0xebb7,	// (0x0005934b) bg_popup_call_pane_cp08

0xebce,	// (0x00059362) field_vitu2_entry_pane_g1

0xebda,	// (0x0005936e) field_vitu2_entry_pane_g2

0x0002,

0xf88d,	// (0x0005a021) field_vitu2_entry_pane_g

0xa7a0,	// (0x00054f34) field_vitu2_entry_pane_t1_ParamLimits

0xa7a0,	// (0x00054f34) field_vitu2_entry_pane_t1

0x0b3d,	// (0x0004b2d1) field_vitu2_entry_pane_t2_ParamLimits

0x0b3d,	// (0x0004b2d1) field_vitu2_entry_pane_t2

0x0001,

0xf894,	// (0x0005a028) field_vitu2_entry_pane_t_ParamLimits

0xf894,	// (0x0005a028) field_vitu2_entry_pane_t

0x8e63,	// (0x000535f7) bg_button_pane_cp010_ParamLimits

0x8e63,	// (0x000535f7) bg_button_pane_cp010

0xa7d4,	// (0x00054f68) cell_vitu2_itu_pane_g1

0xa7fa,	// (0x00054f8e) cell_vitu2_itu_pane_t1_ParamLimits

0xa7fa,	// (0x00054f8e) cell_vitu2_itu_pane_t1

0x5c04,	// (0x00050398) cell_vitu2_itu_pane_t2_ParamLimits

0x5c04,	// (0x00050398) cell_vitu2_itu_pane_t2

0x0002,

0xf89e,	// (0x0005a032) cell_vitu2_itu_pane_t_ParamLimits

0xf89e,	// (0x0005a032) cell_vitu2_itu_pane_t

0x8b27,	// (0x000532bb) bg_button_pane_cp011

0xa846,	// (0x00054fda) cell_vitu2_function_pane_g1

0x5fae,	// (0x00050742) main_myfav_hc_pane

0xa1b7,	// (0x0005494b) popup_image3_note_pane_ParamLimits

0xa1b7,	// (0x0005494b) popup_image3_note_pane

0xa1c5,	// (0x00054959) popup_image3_tool_bar_pane_ParamLimits

0xa1c5,	// (0x00054959) popup_image3_tool_bar_pane

0x5c7a,	// (0x0005040e) cell_vitu2_itu_pane_t3_ParamLimits

0x5c7a,	// (0x0005040e) cell_vitu2_itu_pane_t3

0x2888,	// (0x0004d01c) bg_popup_trans_pane

0xebee,	// (0x00059382) grid_image3_tool_bar_pane

0xebf8,	// (0x0005938c) bg_popup_trans_pane_g1

0x344f,	// (0x0004dbe3) bg_popup_trans_pane_g2

0xec00,	// (0x00059394) bg_popup_trans_pane_g3

0xec08,	// (0x0005939c) bg_popup_trans_pane_g4

0xec10,	// (0x000593a4) bg_popup_trans_pane_g5

0xec18,	// (0x000593ac) bg_popup_trans_pane_g6

0xec20,	// (0x000593b4) bg_popup_trans_pane_g7

0xec28,	// (0x000593bc) bg_popup_trans_pane_g8

0x342f,	// (0x0004dbc3) bg_popup_trans_pane_g9

0x0008,

0xf8a5,	// (0x0005a039) bg_popup_trans_pane_g

0xec30,	// (0x000593c4) cell_image3_tool_bar_pane_ParamLimits

0xec30,	// (0x000593c4) cell_image3_tool_bar_pane

0x322a,	// (0x0004d9be) cell_image3_tool_bar_pane_g1

0x2888,	// (0x0004d01c) bg_popup_trans_pane_cp1

0xec44,	// (0x000593d8) popup_image3_note_pane_t1

0xec52,	// (0x000593e6) popup_image3_note_pane_t2

0xec60,	// (0x000593f4) popup_image3_note_pane_t3

0x0002,

0xf8b8,	// (0x0005a04c) popup_image3_note_pane_t

0xec6e,	// (0x00059402) popup_image3_note_pane_t3_copy1

0xa85a,	// (0x00054fee) bg_myfav_hc_instruction_pane_ParamLimits

0xa85a,	// (0x00054fee) bg_myfav_hc_instruction_pane

0xa872,	// (0x00055006) cell_myfav_contact_pane_ParamLimits

0xa872,	// (0x00055006) cell_myfav_contact_pane

0xa88c,	// (0x00055020) cell_myfav_contact_pane_cp1_ParamLimits

0xa88c,	// (0x00055020) cell_myfav_contact_pane_cp1

0xa8a4,	// (0x00055038) cell_myfav_contact_pane_cp2_ParamLimits

0xa8a4,	// (0x00055038) cell_myfav_contact_pane_cp2

0xa8bc,	// (0x00055050) cell_myfav_contact_pane_cp3_ParamLimits

0xa8bc,	// (0x00055050) cell_myfav_contact_pane_cp3

0xa8d3,	// (0x00055067) cell_myfav_contact_pane_cp4_ParamLimits

0xa8d3,	// (0x00055067) cell_myfav_contact_pane_cp4

0xa8e9,	// (0x0005507d) cell_myfav_contact_pane_cp5_ParamLimits

0xa8e9,	// (0x0005507d) cell_myfav_contact_pane_cp5

0xa8fd,	// (0x00055091) cell_myfav_contact_pane_cp6_ParamLimits

0xa8fd,	// (0x00055091) cell_myfav_contact_pane_cp6

0xa911,	// (0x000550a5) cell_myfav_contact_pane_cp7_ParamLimits

0xa911,	// (0x000550a5) cell_myfav_contact_pane_cp7

0xec7c,	// (0x00059410) listscroll_gen_pane_cp05

0xa929,	// (0x000550bd) main_myfav_hc_pane_g1_ParamLimits

0xa929,	// (0x000550bd) main_myfav_hc_pane_g1

0xa93f,	// (0x000550d3) main_myfav_hc_pane_g2_ParamLimits

0xa93f,	// (0x000550d3) main_myfav_hc_pane_g2

0x0002,

0xf8bf,	// (0x0005a053) main_myfav_hc_pane_g_ParamLimits

0xf8bf,	// (0x0005a053) main_myfav_hc_pane_g

0xa96d,	// (0x00055101) main_myfav_hc_pane_t1_ParamLimits

0xa96d,	// (0x00055101) main_myfav_hc_pane_t1

0xec85,	// (0x00059419) main_myfav_hc_pane_t2_ParamLimits

0xec85,	// (0x00059419) main_myfav_hc_pane_t2

0xec97,	// (0x0005942b) main_myfav_hc_pane_t3_ParamLimits

0xec97,	// (0x0005942b) main_myfav_hc_pane_t3

0xa984,	// (0x00055118) main_myfav_hc_pane_t4_ParamLimits

0xa984,	// (0x00055118) main_myfav_hc_pane_t4

0x0004,

0xf8c6,	// (0x0005a05a) main_myfav_hc_pane_t_ParamLimits

0xf8c6,	// (0x0005a05a) main_myfav_hc_pane_t

0x322a,	// (0x0004d9be) bg_myfav_hc_instruction_pane_g1

0xeca9,	// (0x0005943d) cell_myfav_contact_pane_g1_ParamLimits

0xeca9,	// (0x0005943d) cell_myfav_contact_pane_g1

0xeca9,	// (0x0005943d) cell_myfav_contact_pane_g2_ParamLimits

0xeca9,	// (0x0005943d) cell_myfav_contact_pane_g2

0xecb5,	// (0x00059449) cell_myfav_contact_pane_g3_ParamLimits

0xecb5,	// (0x00059449) cell_myfav_contact_pane_g3

0x2fde,	// (0x0004d772) cell_myfav_contact_pane_g4_ParamLimits

0x2fde,	// (0x0004d772) cell_myfav_contact_pane_g4

0xecc2,	// (0x00059456) cell_myfav_contact_pane_g5_ParamLimits

0xecc2,	// (0x00059456) cell_myfav_contact_pane_g5

0x0004,

0xf8d1,	// (0x0005a065) cell_myfav_contact_pane_g_ParamLimits

0xf8d1,	// (0x0005a065) cell_myfav_contact_pane_g

0xa955,	// (0x000550e9) main_myfav_hc_pane_g3_ParamLimits

0xa955,	// (0x000550e9) main_myfav_hc_pane_g3

0x5e9d,	// (0x00050631) popup_adpt_find_window

0xa9ae,	// (0x00055142) afind_page_pane_ParamLimits

0xa9ae,	// (0x00055142) afind_page_pane

0xa9bb,	// (0x0005514f) aid_size_cell_afind_ParamLimits

0xa9bb,	// (0x0005514f) aid_size_cell_afind

0xa9d5,	// (0x00055169) bg_popup_sub_pane_cp09_ParamLimits

0xa9d5,	// (0x00055169) bg_popup_sub_pane_cp09

0xa9e2,	// (0x00055176) find_pane_cp01_ParamLimits

0xa9e2,	// (0x00055176) find_pane_cp01

0xecce,	// (0x00059462) grid_afind_control_pane_ParamLimits

0xecce,	// (0x00059462) grid_afind_control_pane

0xa9ef,	// (0x00055183) grid_afind_pane_ParamLimits

0xa9ef,	// (0x00055183) grid_afind_pane

0xaa0b,	// (0x0005519f) cell_afind_pane_ParamLimits

0xaa0b,	// (0x0005519f) cell_afind_pane

0x322a,	// (0x0004d9be) afind_page_pane_g1

0xaa53,	// (0x000551e7) afind_page_pane_g2

0xaa5c,	// (0x000551f0) afind_page_pane_g3

0x0002,

0xf8dc,	// (0x0005a070) afind_page_pane_g

0xaa65,	// (0x000551f9) afind_page_pane_t1

0xece2,	// (0x00059476) cell_afind_grid_control_pane_ParamLimits

0xece2,	// (0x00059476) cell_afind_grid_control_pane

0xeb71,	// (0x00059305) bg_button_pane_cp69_ParamLimits

0xeb71,	// (0x00059305) bg_button_pane_cp69

0xaa85,	// (0x00055219) cell_afind_pane_g1_ParamLimits

0xaa85,	// (0x00055219) cell_afind_pane_g1

0xaa92,	// (0x00055226) cell_afind_pane_t1_ParamLimits

0xaa92,	// (0x00055226) cell_afind_pane_t1

0x3234,	// (0x0004d9c8) bg_button_pane_cp72

0xecf1,	// (0x00059485) cell_afind_grid_control_pane_g1

0x865e,	// (0x00052df2) aid_image_placing_area_ParamLimits

0x865e,	// (0x00052df2) aid_image_placing_area

0x2fd0,	// (0x0004d764) field_vitu_entry_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) field_vitu_entry_pane_g1

0x2fd0,	// (0x0004d764) field_vitu_entry_pane_g2_ParamLimits

0x2fd0,	// (0x0004d764) field_vitu_entry_pane_g2

0x0001,

0xf1e7,	// (0x0005997b) field_vitu_entry_pane_g_ParamLimits

0xf1e7,	// (0x0005997b) field_vitu_entry_pane_g

0xe903,	// (0x00059097) cell_vitu_itu_pane_g1_ParamLimits

0xe6cd,	// (0x00058e61) cell_vitu_itu_pane_t3_ParamLimits

0xe6cd,	// (0x00058e61) cell_vitu_itu_pane_t3

0xeb1a,	// (0x000592ae) mp4_progress_pane_t1_ParamLimits

0xeb33,	// (0x000592c7) mp4_progress_pane_t2_ParamLimits

0xf822,	// (0x00059fb6) mp4_progress_pane_t_ParamLimits

0xeb4c,	// (0x000592e0) mup_progress_pane_cp04_ParamLimits

0xa998,	// (0x0005512c) main_myfav_hc_pane_t5_ParamLimits

0xa998,	// (0x0005512c) main_myfav_hc_pane_t5

0x5d2c,	// (0x000504c0) aid_zoom_text_primary

0x5e9d,	// (0x00050631) popup_adpt_find_window_ParamLimits

0x8b27,	// (0x000532bb) main_cam_set_pane

0xa3ea,	// (0x00054b7e) cam4_zoom_pane_ParamLimits

0xa3ea,	// (0x00054b7e) cam4_zoom_pane

0xaaa4,	// (0x00055238) main_cam_set_pane_g1_ParamLimits

0xaaa4,	// (0x00055238) main_cam_set_pane_g1

0xaab2,	// (0x00055246) main_cam_set_pane_g2_ParamLimits

0xaab2,	// (0x00055246) main_cam_set_pane_g2

0x0001,

0xf8e3,	// (0x0005a077) main_cam_set_pane_g_ParamLimits

0xf8e3,	// (0x0005a077) main_cam_set_pane_g

0xaabe,	// (0x00055252) main_cam_set_pane_t1_ParamLimits

0xaabe,	// (0x00055252) main_cam_set_pane_t1

0xaada,	// (0x0005526e) main_cset_listscroll_pane_ParamLimits

0xaada,	// (0x0005526e) main_cset_listscroll_pane

0xab0c,	// (0x000552a0) main_cset_slider_pane_ParamLimits

0xab0c,	// (0x000552a0) main_cset_slider_pane

0xed02,	// (0x00059496) main_cset_list_pane_ParamLimits

0xed02,	// (0x00059496) main_cset_list_pane

0xed12,	// (0x000594a6) scroll_pane_cp028

0xab2b,	// (0x000552bf) aid_area_touch_slider

0xab47,	// (0x000552db) cset_slider_pane

0xab6a,	// (0x000552fe) main_cset_slider_pane_g1

0xab7f,	// (0x00055313) main_cset_slider_pane_g2

0x0011,

0xf8e8,	// (0x0005a07c) main_cset_slider_pane_g

0xed4b,	// (0x000594df) main_cset_slider_pane_t1

0xac41,	// (0x000553d5) main_cset_slider_pane_t2

0xac5b,	// (0x000553ef) main_cset_slider_pane_t3

0xac75,	// (0x00055409) main_cset_slider_pane_t4

0xac8f,	// (0x00055423) main_cset_slider_pane_t5

0xacad,	// (0x00055441) main_cset_slider_pane_t6

0xacc4,	// (0x00055458) main_cset_slider_pane_t7

0x000e,

0xf90d,	// (0x0005a0a1) main_cset_slider_pane_t

0xadd0,	// (0x00055564) cset_list_set_pane_ParamLimits

0xadd0,	// (0x00055564) cset_list_set_pane

0xede5,	// (0x00059579) aid_position_infowindow_above

0xeded,	// (0x00059581) aid_position_infowindow_below

0x0b5a,	// (0x0004b2ee) cset_list_set_pane_g1_ParamLimits

0x0b5a,	// (0x0004b2ee) cset_list_set_pane_g1

0x0b66,	// (0x0004b2fa) cset_list_set_pane_g3_ParamLimits

0x0b66,	// (0x0004b2fa) cset_list_set_pane_g3

0x0001,

0xf92c,	// (0x0005a0c0) cset_list_set_pane_g_ParamLimits

0xf92c,	// (0x0005a0c0) cset_list_set_pane_g

0x0b75,	// (0x0004b309) cset_list_set_pane_t1_ParamLimits

0x0b75,	// (0x0004b309) cset_list_set_pane_t1

0x2f37,	// (0x0004d6cb) list_highlight_pane_cp021_ParamLimits

0x2f37,	// (0x0004d6cb) list_highlight_pane_cp021

0x3d70,	// (0x0004e504) cset_slider_pane_g1

0x3d82,	// (0x0004e516) cset_slider_pane_g2

0x3d79,	// (0x0004e50d) cset_slider_pane_g3

0x0002,

0xf931,	// (0x0005a0c5) cset_slider_pane_g

0xade6,	// (0x0005557a) aid_area_touch_cam4_zoom

0xadee,	// (0x00055582) cam4_zoom_cont_pane

0xadf6,	// (0x0005558a) cam4_zoom_pane_g1

0xadfe,	// (0x00055592) cam4_zoom_pane_g2

0xae06,	// (0x0005559a) cam4_zoom_pane_g3

0x0002,

0xf938,	// (0x0005a0cc) cam4_zoom_pane_g

0xae0e,	// (0x000555a2) cam4_zoom_cont_pane_g1

0xae17,	// (0x000555ab) cam4_zoom_cont_pane_g2

0xae20,	// (0x000555b4) cam4_zoom_cont_pane_g3

0x0002,

0xf93f,	// (0x0005a0d3) cam4_zoom_cont_pane_g

0xa20e,	// (0x000549a2) call4_image_pane_ParamLimits

0xa20e,	// (0x000549a2) call4_image_pane

0xa26d,	// (0x00054a01) call4_windows_conf_pane_ParamLimits

0xa2b2,	// (0x00054a46) popup_call4_audio_in_window_ParamLimits

0xa2b2,	// (0x00054a46) popup_call4_audio_in_window

0x2888,	// (0x0004d01c) bg_popup_call2_act_pane_cp02

0xeb7d,	// (0x00059311) call4_list_conf_pane

0x322a,	// (0x0004d9be) call4_image_pane_g1

0x322a,	// (0x0004d9be) call4_image_pane_g2

0x0001,

0xf3c3,	// (0x00059b57) call4_image_pane_g

0xedf5,	// (0x00059589) list_single_graphic_popup_conf4_pane_ParamLimits

0xedf5,	// (0x00059589) list_single_graphic_popup_conf4_pane

0x2888,	// (0x0004d01c) list_highlight_pane_cp022

0xee08,	// (0x0005959c) list_single_graphic_popup_conf4_pane_g1

0x3964,	// (0x0004e0f8) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf946,	// (0x0005a0da) list_single_graphic_popup_conf4_pane_g

0xee10,	// (0x000595a4) list_single_graphic_popup_conf4_pane_t1

0x6c52,	// (0x000513e6) popup_vtel_slider_window_ParamLimits

0x6c52,	// (0x000513e6) popup_vtel_slider_window

0xeb5f,	// (0x000592f3) dialer2_ne_pane_t2_ParamLimits

0xeb5f,	// (0x000592f3) dialer2_ne_pane_t2

0x0001,

0xf827,	// (0x00059fbb) dialer2_ne_pane_t_ParamLimits

0xf827,	// (0x00059fbb) dialer2_ne_pane_t

0x2f37,	// (0x0004d6cb) bg_popup_sub_pane_cp010_ParamLimits

0x2f37,	// (0x0004d6cb) bg_popup_sub_pane_cp010

0xae29,	// (0x000555bd) popup_vtel_slider_window_g1_ParamLimits

0xae29,	// (0x000555bd) popup_vtel_slider_window_g1

0xae35,	// (0x000555c9) popup_vtel_slider_window_g2_ParamLimits

0xae35,	// (0x000555c9) popup_vtel_slider_window_g2

0x0003,

0xf94b,	// (0x0005a0df) popup_vtel_slider_window_g_ParamLimits

0xf94b,	// (0x0005a0df) popup_vtel_slider_window_g

0xae7d,	// (0x00055611) vtel_slider_pane_ParamLimits

0xae7d,	// (0x00055611) vtel_slider_pane

0xae8c,	// (0x00055620) vtel_slider_pane_g1_ParamLimits

0xae8c,	// (0x00055620) vtel_slider_pane_g1

0xae99,	// (0x0005562d) vtel_slider_pane_g2_ParamLimits

0xae99,	// (0x0005562d) vtel_slider_pane_g2

0xaea6,	// (0x0005563a) vtel_slider_pane_g3_ParamLimits

0xaea6,	// (0x0005563a) vtel_slider_pane_g3

0xae8c,	// (0x00055620) vtel_slider_pane_g4_ParamLimits

0xae8c,	// (0x00055620) vtel_slider_pane_g4

0xaeb3,	// (0x00055647) vtel_slider_pane_g5_ParamLimits

0xaeb3,	// (0x00055647) vtel_slider_pane_g5

0x0004,

0xf954,	// (0x0005a0e8) vtel_slider_pane_g_ParamLimits

0xf954,	// (0x0005a0e8) vtel_slider_pane_g

0x8b27,	// (0x000532bb) main_gallery2_pane

0xa63e,	// (0x00054dd2) aid_size_row_itut2_dropdow_list_ParamLimits

0xa63e,	// (0x00054dd2) aid_size_row_itut2_dropdow_list

0xa6ac,	// (0x00054e40) grid_vitu2_function_top_pane_ParamLimits

0xa6ac,	// (0x00054e40) grid_vitu2_function_top_pane

0xa706,	// (0x00054e9a) popup_vitu2_dropdown_list_window_ParamLimits

0xa706,	// (0x00054e9a) popup_vitu2_dropdown_list_window

0xa724,	// (0x00054eb8) popup_vitu2_match_list_window

0xaec0,	// (0x00055654) cell_vitu2_function_top_pane_ParamLimits

0xaec0,	// (0x00055654) cell_vitu2_function_top_pane

0xaeda,	// (0x0005566e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xaeda,	// (0x0005566e) cell_vitu2_function_top_pane_cp01

0xaef6,	// (0x0005568a) cell_vitu2_function_top_wide_pane_ParamLimits

0xaef6,	// (0x0005568a) cell_vitu2_function_top_wide_pane

0x8b27,	// (0x000532bb) bg_button_pane_cp012

0xaf14,	// (0x000556a8) cell_vitu2_function_top_pane_g1

0xaf28,	// (0x000556bc) bg_button_pane_cp013_ParamLimits

0xaf28,	// (0x000556bc) bg_button_pane_cp013

0xaf44,	// (0x000556d8) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xaf44,	// (0x000556d8) cell_vitu2_function_top_wide_pane_g1

0x5f94,	// (0x00050728) bg_popup_sub_pane_cp20

0xaf5c,	// (0x000556f0) list_vitu2_match_list_pane

0xebf8,	// (0x0005938c) bg_popup_sub_pane_cp20_g1

0xec00,	// (0x00059394) bg_popup_sub_pane_cp20_g2

0x344f,	// (0x0004dbe3) bg_popup_sub_pane_cp20_g3

0xec08,	// (0x0005939c) bg_popup_sub_pane_cp20_g4

0x342f,	// (0x0004dbc3) bg_popup_sub_pane_cp20_g5

0xee26,	// (0x000595ba) bg_popup_sub_pane_cp20_g6

0xec18,	// (0x000593ac) bg_popup_sub_pane_cp20_g7

0xec20,	// (0x000593b4) bg_popup_sub_pane_cp20_g8

0xec28,	// (0x000593bc) bg_popup_sub_pane_cp20_g9

0x0008,

0xf95f,	// (0x0005a0f3) bg_popup_sub_pane_cp20_g

0xaf74,	// (0x00055708) list_vitu2_match_list_item_pane_ParamLimits

0xaf74,	// (0x00055708) list_vitu2_match_list_item_pane

0xaf86,	// (0x0005571a) list_vitu2_match_list_item_pane_t1

0x5fae,	// (0x00050742) bg_popup_sub_pane_cp21

0x31f4,	// (0x0004d988) grid_vitu2_dropdown_list_pane

0xaf94,	// (0x00055728) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xaf94,	// (0x00055728) cell_vitu2_dropdown_list_char_pane

0xafb4,	// (0x00055748) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xafb4,	// (0x00055748) cell_vitu2_dropdown_list_ctrl_pane

0xee2e,	// (0x000595c2) cell_vitu2_dropdown_list_char_pane_g1

0xee37,	// (0x000595cb) cell_vitu2_dropdown_list_char_pane_g2

0xee40,	// (0x000595d4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf972,	// (0x0005a106) cell_vitu2_dropdown_list_char_pane_g

0xafdc,	// (0x00055770) cell_vitu2_dropdown_list_char_pane_t1

0xafea,	// (0x0005577e) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xafea,	// (0x0005577e) cell_vitu2_dropdown_list_ctrl_pane_g1

0xaff7,	// (0x0005578b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xaff7,	// (0x0005578b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb004,	// (0x00055798) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb004,	// (0x00055798) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb011,	// (0x000557a5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb011,	// (0x000557a5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeba9,	// (0x0005933d) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeba9,	// (0x0005933d) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf979,	// (0x0005a10d) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf979,	// (0x0005a10d) cell_vitu2_dropdown_list_ctrl_pane_g

0xb02d,	// (0x000557c1) aid_size_cell_gallery2_ParamLimits

0xb02d,	// (0x000557c1) aid_size_cell_gallery2

0xb047,	// (0x000557db) grid_gallery2_pane_ParamLimits

0xb047,	// (0x000557db) grid_gallery2_pane

0xb05e,	// (0x000557f2) scroll_pane_cp029_ParamLimits

0xb05e,	// (0x000557f2) scroll_pane_cp029

0xb06e,	// (0x00055802) cell_gallery2_pane_ParamLimits

0xb06e,	// (0x00055802) cell_gallery2_pane

0xee49,	// (0x000595dd) cell_gallery2_pane_g2

0x1e77,	// (0x0004c60b) cell_gallery2_pane_g3

0xee51,	// (0x000595e5) cell_gallery2_pane_g4

0xee59,	// (0x000595ed) cell_gallery2_pane_g5

0x31f4,	// (0x0004d988) grid_highlight_pane_cp10

0xa724,	// (0x00054eb8) popup_vitu2_match_list_window_ParamLimits

0xa736,	// (0x00054eca) popup_vitu2_query_window_ParamLimits

0xa736,	// (0x00054eca) popup_vitu2_query_window

0x5fae,	// (0x00050742) bg_vitu2_candi_button_pane

0xee2e,	// (0x000595c2) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee37,	// (0x000595cb) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee40,	// (0x000595d4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb0c3,	// (0x00055857) bg_button_pane_cp015

0xb0d8,	// (0x0005586c) bg_button_pane_cp016

0xb0e4,	// (0x00055878) bg_button_pane_cp017

0x46ad,	// (0x0004ee41) bg_popup_sub_pane_cp22

0xee61,	// (0x000595f5) popup_vitu2_query_window_g1

0xb124,	// (0x000558b8) popup_vitu2_query_window_g2

0x0002,

0xf984,	// (0x0005a118) popup_vitu2_query_window_g

0xb148,	// (0x000558dc) popup_vitu2_query_window_t1_ParamLimits

0xb148,	// (0x000558dc) popup_vitu2_query_window_t1

0xb17b,	// (0x0005590f) popup_vitu2_query_window_t2_ParamLimits

0xb17b,	// (0x0005590f) popup_vitu2_query_window_t2

0xb18d,	// (0x00055921) popup_vitu2_query_window_t3_ParamLimits

0xb18d,	// (0x00055921) popup_vitu2_query_window_t3

0xb1b5,	// (0x00055949) popup_vitu2_query_window_t4_ParamLimits

0xb1b5,	// (0x00055949) popup_vitu2_query_window_t4

0xb1c9,	// (0x0005595d) popup_vitu2_query_window_t5_ParamLimits

0xb1c9,	// (0x0005595d) popup_vitu2_query_window_t5

0x0006,

0xf98b,	// (0x0005a11f) popup_vitu2_query_window_t_ParamLimits

0xf98b,	// (0x0005a11f) popup_vitu2_query_window_t

0xecfa,	// (0x0005948e) main_cset_text_pane

0xab2b,	// (0x000552bf) aid_area_touch_slider_ParamLimits

0xab47,	// (0x000552db) cset_slider_pane_ParamLimits

0xab6a,	// (0x000552fe) main_cset_slider_pane_g1_ParamLimits

0xab7f,	// (0x00055313) main_cset_slider_pane_g2_ParamLimits

0xed1b,	// (0x000594af) main_cset_slider_pane_g3_ParamLimits

0xed1b,	// (0x000594af) main_cset_slider_pane_g3

0xab94,	// (0x00055328) main_cset_slider_pane_g4_ParamLimits

0xab94,	// (0x00055328) main_cset_slider_pane_g4

0xaba3,	// (0x00055337) main_cset_slider_pane_g5_ParamLimits

0xaba3,	// (0x00055337) main_cset_slider_pane_g5

0xabb1,	// (0x00055345) main_cset_slider_pane_g6_ParamLimits

0xabb1,	// (0x00055345) main_cset_slider_pane_g6

0xf8e8,	// (0x0005a07c) main_cset_slider_pane_g_ParamLimits

0xed4b,	// (0x000594df) main_cset_slider_pane_t1_ParamLimits

0xac41,	// (0x000553d5) main_cset_slider_pane_t2_ParamLimits

0xac5b,	// (0x000553ef) main_cset_slider_pane_t3_ParamLimits

0xac75,	// (0x00055409) main_cset_slider_pane_t4_ParamLimits

0xac8f,	// (0x00055423) main_cset_slider_pane_t5_ParamLimits

0xacad,	// (0x00055441) main_cset_slider_pane_t6_ParamLimits

0xacc4,	// (0x00055458) main_cset_slider_pane_t7_ParamLimits

0xacf2,	// (0x00055486) main_cset_slider_pane_t8_ParamLimits

0xacf2,	// (0x00055486) main_cset_slider_pane_t8

0xad1a,	// (0x000554ae) main_cset_slider_pane_t9_ParamLimits

0xad1a,	// (0x000554ae) main_cset_slider_pane_t9

0xad42,	// (0x000554d6) main_cset_slider_pane_t10_ParamLimits

0xad42,	// (0x000554d6) main_cset_slider_pane_t10

0xad6a,	// (0x000554fe) main_cset_slider_pane_t11_ParamLimits

0xad6a,	// (0x000554fe) main_cset_slider_pane_t11

0xad94,	// (0x00055528) main_cset_slider_pane_t12_ParamLimits

0xad94,	// (0x00055528) main_cset_slider_pane_t12

0xadb1,	// (0x00055545) main_cset_slider_pane_t13_ParamLimits

0xadb1,	// (0x00055545) main_cset_slider_pane_t13

0xf90d,	// (0x0005a0a1) main_cset_slider_pane_t_ParamLimits

0x2888,	// (0x0004d01c) bg_popup_sub_pane_cp011

0xee6d,	// (0x00059601) main_cset_text_pane_g1

0xee75,	// (0x00059609) main_cset_text_pane_t1

0xee83,	// (0x00059617) main_cset_text_pane_t2

0xee91,	// (0x00059625) main_cset_text_pane_t3

0xee9f,	// (0x00059633) main_cset_text_pane_t4

0xeead,	// (0x00059641) main_cset_text_pane_t5

0xeebb,	// (0x0005964f) main_cset_text_pane_t6

0xeec9,	// (0x0005965d) main_cset_text_pane_t7

0x0006,

0xf99a,	// (0x0005a12e) main_cset_text_pane_t

0x5fae,	// (0x00050742) main_cam4_burst_pane

0x5fae,	// (0x00050742) main_cam5_pane

0xaa73,	// (0x00055207) bg_button_pane_cp019

0xaa7c,	// (0x00055210) bg_button_pane_cp020

0xed27,	// (0x000594bb) main_cset_slider_pane_g7_ParamLimits

0xed27,	// (0x000594bb) main_cset_slider_pane_g7

0xed33,	// (0x000594c7) main_cset_slider_pane_g8_ParamLimits

0xed33,	// (0x000594c7) main_cset_slider_pane_g8

0xabc5,	// (0x00055359) main_cset_slider_pane_g9_ParamLimits

0xabc5,	// (0x00055359) main_cset_slider_pane_g9

0xabd1,	// (0x00055365) main_cset_slider_pane_g10_ParamLimits

0xabd1,	// (0x00055365) main_cset_slider_pane_g10

0xabdd,	// (0x00055371) main_cset_slider_pane_g11_ParamLimits

0xabdd,	// (0x00055371) main_cset_slider_pane_g11

0xabe9,	// (0x0005537d) main_cset_slider_pane_g12_ParamLimits

0xabe9,	// (0x0005537d) main_cset_slider_pane_g12

0xabf5,	// (0x00055389) main_cset_slider_pane_g13_ParamLimits

0xabf5,	// (0x00055389) main_cset_slider_pane_g13

0xac01,	// (0x00055395) main_cset_slider_pane_g14_ParamLimits

0xac01,	// (0x00055395) main_cset_slider_pane_g14

0xac0d,	// (0x000553a1) main_cset_slider_pane_g15_ParamLimits

0xac0d,	// (0x000553a1) main_cset_slider_pane_g15

0xed73,	// (0x00059507) main_cset_slider_pane_t14_ParamLimits

0xed73,	// (0x00059507) main_cset_slider_pane_t14

0xedac,	// (0x00059540) main_cset_slider_pane_t15_ParamLimits

0xedac,	// (0x00059540) main_cset_slider_pane_t15

0xb233,	// (0x000559c7) aid_cam4_burst_size_cell_ParamLimits

0xb233,	// (0x000559c7) aid_cam4_burst_size_cell

0xb24f,	// (0x000559e3) grid_cam4_burst_pane_ParamLimits

0xb24f,	// (0x000559e3) grid_cam4_burst_pane

0xb27f,	// (0x00055a13) linegrid_cam4_burst_pane_ParamLimits

0xb27f,	// (0x00055a13) linegrid_cam4_burst_pane

0xb29f,	// (0x00055a33) scroll_pane_cp30_ParamLimits

0xb29f,	// (0x00055a33) scroll_pane_cp30

0xb2ab,	// (0x00055a3f) cell_cam4_burst_pane_ParamLimits

0xb2ab,	// (0x00055a3f) cell_cam4_burst_pane

0xeed7,	// (0x0005966b) linegrid_cam4_burst_pane_g1_ParamLimits

0xeed7,	// (0x0005966b) linegrid_cam4_burst_pane_g1

0xb2e7,	// (0x00055a7b) linegrid_cam4_burst_pane_g2_ParamLimits

0xb2e7,	// (0x00055a7b) linegrid_cam4_burst_pane_g2

0xeee4,	// (0x00059678) linegrid_cam4_burst_pane_g3_ParamLimits

0xeee4,	// (0x00059678) linegrid_cam4_burst_pane_g3

0x0002,

0xf9a9,	// (0x0005a13d) linegrid_cam4_burst_pane_g_ParamLimits

0xf9a9,	// (0x0005a13d) linegrid_cam4_burst_pane_g

0xb2f8,	// (0x00055a8c) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb2f8,	// (0x00055a8c) linegrid_cam4_burst_pane_g3_copy1

0xeef1,	// (0x00059685) linegrid_cam4_burst_pane_g4_ParamLimits

0xeef1,	// (0x00059685) linegrid_cam4_burst_pane_g4

0xb312,	// (0x00055aa6) linegrid_cam4_burst_pane_g5_ParamLimits

0xb312,	// (0x00055aa6) linegrid_cam4_burst_pane_g5

0xb323,	// (0x00055ab7) linegrid_cam4_burst_pane_g6_ParamLimits

0xb323,	// (0x00055ab7) linegrid_cam4_burst_pane_g6

0xeefe,	// (0x00059692) linegrid_cam4_burst_pane_g7_ParamLimits

0xeefe,	// (0x00059692) linegrid_cam4_burst_pane_g7

0xb334,	// (0x00055ac8) cell_cam4_burst_pane_g1

0xef17,	// (0x000596ab) main_cam5_pane_t1_ParamLimits

0xef17,	// (0x000596ab) main_cam5_pane_t1

0xef29,	// (0x000596bd) main_cam5_pane_t2_ParamLimits

0xef29,	// (0x000596bd) main_cam5_pane_t2

0xef3b,	// (0x000596cf) main_cam5_pane_t3_ParamLimits

0xef3b,	// (0x000596cf) main_cam5_pane_t3

0xef4d,	// (0x000596e1) main_cam5_pane_t4_ParamLimits

0xef4d,	// (0x000596e1) main_cam5_pane_t4

0xef65,	// (0x000596f9) main_cam5_pane_t5_ParamLimits

0xef65,	// (0x000596f9) main_cam5_pane_t5

0xef79,	// (0x0005970d) main_cam5_pane_t6_ParamLimits

0xef79,	// (0x0005970d) main_cam5_pane_t6

0xef8d,	// (0x00059721) main_cam5_pane_t7_ParamLimits

0xef8d,	// (0x00059721) main_cam5_pane_t7

0xef9f,	// (0x00059733) main_cam5_pane_t8_ParamLimits

0xef9f,	// (0x00059733) main_cam5_pane_t8

0xefbb,	// (0x0005974f) main_cam5_pane_t9_ParamLimits

0xefbb,	// (0x0005974f) main_cam5_pane_t9

0xefcd,	// (0x00059761) main_cam5_pane_t10_ParamLimits

0xefcd,	// (0x00059761) main_cam5_pane_t10

0xefdf,	// (0x00059773) main_cam5_pane_t11_ParamLimits

0xefdf,	// (0x00059773) main_cam5_pane_t11

0xeff1,	// (0x00059785) main_cam5_pane_t12_ParamLimits

0xeff1,	// (0x00059785) main_cam5_pane_t12

0xf006,	// (0x0005979a) main_cam5_pane_t13_ParamLimits

0xf006,	// (0x0005979a) main_cam5_pane_t13

0x000c,

0xf9b5,	// (0x0005a149) main_cam5_pane_t_ParamLimits

0xf9b5,	// (0x0005a149) main_cam5_pane_t

0x5f53,	// (0x000506e7) popup_scut_keymap_window_ParamLimits

0x5f53,	// (0x000506e7) popup_scut_keymap_window

0xb347,	// (0x00055adb) aid_size_cell_brow_shortcut

0x31f4,	// (0x0004d988) bg_popup_window_pane_cp010

0xb353,	// (0x00055ae7) grid_scut_pane

0xb35f,	// (0x00055af3) cell_scut_pane_ParamLimits

0xb35f,	// (0x00055af3) cell_scut_pane

0xb376,	// (0x00055b0a) cell_scut_pane_g1

0xf023,	// (0x000597b7) cell_scut_pane_t1

0xf032,	// (0x000597c6) cell_scut_pane_t2

0xb37f,	// (0x00055b13) cell_scut_pane_t3

0x0002,

0xf9d0,	// (0x0005a164) cell_scut_pane_t

0x932c,	// (0x00053ac0) main_mup3_pane_g8_ParamLimits

0x932c,	// (0x00053ac0) main_mup3_pane_g8

0xa64c,	// (0x00054de0) area_vitu2_query_pane_ParamLimits

0xa64c,	// (0x00054de0) area_vitu2_query_pane

0xb0f0,	// (0x00055884) input_focus_pane_cp08

0xf041,	// (0x000597d5) area_vitu2_query_pane_g1

0xb38d,	// (0x00055b21) area_vitu2_query_pane_g2

0x0001,

0xf9d7,	// (0x0005a16b) area_vitu2_query_pane_g

0xb39e,	// (0x00055b32) area_vitu2_query_pane_t1_ParamLimits

0xb39e,	// (0x00055b32) area_vitu2_query_pane_t1

0xb3b2,	// (0x00055b46) area_vitu2_query_pane_t2_ParamLimits

0xb3b2,	// (0x00055b46) area_vitu2_query_pane_t2

0xb3c6,	// (0x00055b5a) area_vitu2_query_pane_t3_ParamLimits

0xb3c6,	// (0x00055b5a) area_vitu2_query_pane_t3

0x0c01,	// (0x0004b395) area_vitu2_query_pane_t4_ParamLimits

0x0c01,	// (0x0004b395) area_vitu2_query_pane_t4

0x0c29,	// (0x0004b3bd) area_vitu2_query_pane_t5_ParamLimits

0x0c29,	// (0x0004b3bd) area_vitu2_query_pane_t5

0x0c51,	// (0x0004b3e5) area_vitu2_query_pane_t6_ParamLimits

0x0c51,	// (0x0004b3e5) area_vitu2_query_pane_t6

0x0006,

0xf9dc,	// (0x0005a170) area_vitu2_query_pane_t_ParamLimits

0xf9dc,	// (0x0005a170) area_vitu2_query_pane_t

0xb0d8,	// (0x0005586c) bg_button_pane_cp018

0xb3ee,	// (0x00055b82) bg_button_pane_cp021

0xb3fa,	// (0x00055b8e) bg_button_pane_cp022

0xb41d,	// (0x00055bb1) input_focus_pane_cp09

0x3aa0,	// (0x0004e234) aid_size_touch_mv_arrow_left

0x3ac9,	// (0x0004e25d) aid_size_touch_mv_arrow_right

0xac25,	// (0x000553b9) main_cset_slider_pane_g16_ParamLimits

0xac25,	// (0x000553b9) main_cset_slider_pane_g16

0xac33,	// (0x000553c7) main_cset_slider_pane_g17_ParamLimits

0xac33,	// (0x000553c7) main_cset_slider_pane_g17

0xb334,	// (0x00055ac8) cell_cam4_burst_pane_g1_ParamLimits

0x2888,	// (0x0004d01c) compa_mode_pane

0xae41,	// (0x000555d5) popup_vtel_slider_window_g3_ParamLimits

0xae41,	// (0x000555d5) popup_vtel_slider_window_g3

0xae55,	// (0x000555e9) popup_vtel_slider_window_g4_ParamLimits

0xae55,	// (0x000555e9) popup_vtel_slider_window_g4

0xae69,	// (0x000555fd) popup_vtel_slider_window_t1_ParamLimits

0xae69,	// (0x000555fd) popup_vtel_slider_window_t1

0x5fae,	// (0x00050742) main_cl_pane

0x8bc5,	// (0x00053359) popup_imed_adjust2_window_ParamLimits

0x46ad,	// (0x0004ee41) bg_tb_trans_pane_cp05_ParamLimits

0xe838,	// (0x00058fcc) popup_imed_adjust2_window_g1_ParamLimits

0xe847,	// (0x00058fdb) popup_imed_adjust2_window_g2_ParamLimits

0xe847,	// (0x00058fdb) popup_imed_adjust2_window_g2

0xe853,	// (0x00058fe7) popup_imed_adjust2_window_g3_ParamLimits

0xe853,	// (0x00058fe7) popup_imed_adjust2_window_g3

0x0002,

0xf752,	// (0x00059ee6) popup_imed_adjust2_window_g_ParamLimits

0xf752,	// (0x00059ee6) popup_imed_adjust2_window_g

0xe85f,	// (0x00058ff3) popup_imed_adjust2_window_t1_ParamLimits

0xe877,	// (0x0005900b) slider_imed_adjust_pane_ParamLimits

0xe88b,	// (0x0005901f) slider_imed_adjust_pane_g1_ParamLimits

0xe89b,	// (0x0005902f) slider_imed_adjust_pane_g2_ParamLimits

0xe8ab,	// (0x0005903f) slider_imed_adjust_pane_g3_ParamLimits

0xe8bc,	// (0x00059050) slider_imed_adjust_pane_g4_ParamLimits

0xf759,	// (0x00059eed) slider_imed_adjust_pane_g_ParamLimits

0xa393,	// (0x00054b27) aid_touch_area_cam4_ParamLimits

0xa393,	// (0x00054b27) aid_touch_area_cam4

0xa3a3,	// (0x00054b37) battery_pane_cp01

0xa42a,	// (0x00054bbe) main_camera4_pane_g6_ParamLimits

0xa42a,	// (0x00054bbe) main_camera4_pane_g6

0xa448,	// (0x00054bdc) main_camera4_pane_t2_ParamLimits

0xa448,	// (0x00054bdc) main_camera4_pane_t2

0x0001,

0xf85b,	// (0x00059fef) main_camera4_pane_t_ParamLimits

0xf85b,	// (0x00059fef) main_camera4_pane_t

0xa4cf,	// (0x00054c63) aid_touch_area_vid4_ParamLimits

0xa4cf,	// (0x00054c63) aid_touch_area_vid4

0xa50f,	// (0x00054ca3) main_video4_pane_g5_ParamLimits

0xa50f,	// (0x00054ca3) main_video4_pane_g5

0xa533,	// (0x00054cc7) vid4_progress_pane_ParamLimits

0xa533,	// (0x00054cc7) vid4_progress_pane

0xed3f,	// (0x000594d3) main_cset_slider_pane_g18_ParamLimits

0xed3f,	// (0x000594d3) main_cset_slider_pane_g18

0xef0b,	// (0x0005969f) cell_cam4_burst_pane_g2_ParamLimits

0xef0b,	// (0x0005969f) cell_cam4_burst_pane_g2

0x0001,

0xf9b0,	// (0x0005a144) cell_cam4_burst_pane_g_ParamLimits

0xf9b0,	// (0x0005a144) cell_cam4_burst_pane_g

0xb42d,	// (0x00055bc1) bg_cl_pane_ParamLimits

0xb42d,	// (0x00055bc1) bg_cl_pane

0xb439,	// (0x00055bcd) cl_header_pane_ParamLimits

0xb439,	// (0x00055bcd) cl_header_pane

0xb445,	// (0x00055bd9) cl_listscroll_pane_ParamLimits

0xb445,	// (0x00055bd9) cl_listscroll_pane

0x0c9d,	// (0x0004b431) bg_cl_pane_g1

0x0ca5,	// (0x0004b439) bg_cl_pane_g2

0x0cad,	// (0x0004b441) bg_cl_pane_g3

0x0cb5,	// (0x0004b449) bg_cl_pane_g4

0x0cbd,	// (0x0004b451) bg_cl_pane_g5

0x0cc5,	// (0x0004b459) bg_cl_pane_g6

0x0ccd,	// (0x0004b461) bg_cl_pane_g7

0x0cd5,	// (0x0004b469) bg_cl_pane_g8

0x0cdd,	// (0x0004b471) bg_cl_pane_g9

0x0008,

0xf9eb,	// (0x0005a17f) bg_cl_pane_g

0xb451,	// (0x00055be5) aid_height_cl_leading_ParamLimits

0xb451,	// (0x00055be5) aid_height_cl_leading

0xb45d,	// (0x00055bf1) aid_height_cl_text_ParamLimits

0xb45d,	// (0x00055bf1) aid_height_cl_text

0x28b2,	// (0x0004d046) bg_cl_header_pane_ParamLimits

0x28b2,	// (0x0004d046) bg_cl_header_pane

0xb475,	// (0x00055c09) cl_header_pane_g1_ParamLimits

0xb475,	// (0x00055c09) cl_header_pane_g1

0xb482,	// (0x00055c16) cl_header_pane_t1_ParamLimits

0xb482,	// (0x00055c16) cl_header_pane_t1

0x0ce5,	// (0x0004b479) cl_list_pane

0xed12,	// (0x000594a6) hc_scroll_pane_cp01

0x342f,	// (0x0004dbc3) bg_cl_header_pane_g1

0xebf8,	// (0x0005938c) bg_cl_header_pane_g2

0x344f,	// (0x0004dbe3) bg_cl_header_pane_g3

0xec08,	// (0x0005939c) bg_cl_header_pane_g4

0xec00,	// (0x00059394) bg_cl_header_pane_g5

0xee26,	// (0x000595ba) bg_cl_header_pane_g6

0xec20,	// (0x000593b4) bg_cl_header_pane_g7

0xec28,	// (0x000593bc) bg_cl_header_pane_g8

0xec18,	// (0x000593ac) bg_cl_header_pane_g9

0x0008,

0xf9fe,	// (0x0005a192) bg_cl_header_pane_g

0xb494,	// (0x00055c28) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb494,	// (0x00055c28) hc_cl_list_double_graphic_heading_pane

0xb4a5,	// (0x00055c39) hc_cl_list_single_graphic_pane_ParamLimits

0xb4a5,	// (0x00055c39) hc_cl_list_single_graphic_pane

0xb4be,	// (0x00055c52) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb4be,	// (0x00055c52) hc_cl_list_single_graphic_pane_g1

0xb4ca,	// (0x00055c5e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb4ca,	// (0x00055c5e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa11,	// (0x0005a1a5) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa11,	// (0x0005a1a5) hc_cl_list_single_graphic_pane_g

0xb4de,	// (0x00055c72) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb4de,	// (0x00055c72) hc_cl_list_single_graphic_pane_t1

0xb4be,	// (0x00055c52) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb4be,	// (0x00055c52) hc_cl_list_double_graphic_heading_pane_g1

0xb4f3,	// (0x00055c87) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb4f3,	// (0x00055c87) hc_cl_list_double_graphic_heading_pane_g2

0xb507,	// (0x00055c9b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb507,	// (0x00055c9b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa16,	// (0x0005a1aa) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa16,	// (0x0005a1aa) hc_cl_list_double_graphic_heading_pane_g

0xb51b,	// (0x00055caf) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb51b,	// (0x00055caf) hc_cl_list_double_graphic_heading_pane_t1

0xb530,	// (0x00055cc4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb530,	// (0x00055cc4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa1d,	// (0x0005a1b1) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa1d,	// (0x0005a1b1) hc_cl_list_double_graphic_heading_pane_t

0xb54d,	// (0x00055ce1) vid4_progress_pane_g1

0xb55d,	// (0x00055cf1) vid4_progress_pane_g2

0xb56d,	// (0x00055d01) vid4_progress_pane_g3

0xb57f,	// (0x00055d13) vid4_progress_pane_g4

0x0004,

0xfa22,	// (0x0005a1b6) vid4_progress_pane_g

0xb597,	// (0x00055d2b) vid4_progress_pane_t1

0xb5ad,	// (0x00055d41) vid4_progress_pane_t2

0x0002,

0xfa2d,	// (0x0005a1c1) vid4_progress_pane_t

0xb5d7,	// (0x00055d6b) wait_bar_pane_cp07

0xe15e,	// (0x000588f2) blid_firmament_pane_ParamLimits

0xe1a1,	// (0x00058935) popup_blid_sat_info2_window_g1

0xe1c5,	// (0x00058959) popup_blid_sat_info2_window_t3

0xe1d3,	// (0x00058967) popup_blid_sat_info2_window_t4

0xe1e1,	// (0x00058975) popup_blid_sat_info2_window_t5

0xe1ef,	// (0x00058983) popup_blid_sat_info2_window_t6

0xe1ff,	// (0x00058993) popup_blid_sat_info2_window_t7

0xe20d,	// (0x000589a1) popup_blid_sat_info2_window_t8

0xe21b,	// (0x000589af) popup_blid_sat_info2_window_t9

0xe229,	// (0x000589bd) popup_blid_sat_info2_window_t10

0xe2ea,	// (0x00058a7e) aid_firma_cardinal_ParamLimits

0xe2fe,	// (0x00058a92) blid_firmament_pane_t1_ParamLimits

0xe315,	// (0x00058aa9) blid_firmament_pane_t2_ParamLimits

0xe32c,	// (0x00058ac0) blid_firmament_pane_t3_ParamLimits

0xe343,	// (0x00058ad7) blid_firmament_pane_t4_ParamLimits

0xf64b,	// (0x00059ddf) blid_firmament_pane_t_ParamLimits

0xe35a,	// (0x00058aee) blid_sat_info_pane_ParamLimits

0x8b27,	// (0x000532bb) main_cam_set_pane_ParamLimits

0x9a05,	// (0x00054199) aid_size_cell_colour_35_ParamLimits

0x9a1f,	// (0x000541b3) aid_size_cell_colour_112_ParamLimits

0x9a36,	// (0x000541ca) aid_size_cell_effect_ParamLimits

0x2f37,	// (0x0004d6cb) bg_tb_trans_pane_cp02_ParamLimits

0x467f,	// (0x0004ee13) heading_imed_pane_ParamLimits

0x9a50,	// (0x000541e4) listscroll_imed_pane_ParamLimits

0x46bb,	// (0x0004ee4f) popup_call2_audio_first_window_g5_ParamLimits

0x46bb,	// (0x0004ee4f) popup_call2_audio_first_window_g5

0xa079,	// (0x0005480d) aid_size_touch_image3_arrow_left_ParamLimits

0xa079,	// (0x0005480d) aid_size_touch_image3_arrow_left

0xa08f,	// (0x00054823) aid_size_touch_image3_arrow_right_ParamLimits

0xa08f,	// (0x00054823) aid_size_touch_image3_arrow_right

0xb5c2,	// (0x00055d56) vid4_progress_pane_t3

0x9bd1,	// (0x00054365) main_hwr_training_symbol_option_pane_ParamLimits

0x9bd1,	// (0x00054365) main_hwr_training_symbol_option_pane

0xea54,	// (0x000591e8) popup_hwr_training_preview_window_ParamLimits

0xea54,	// (0x000591e8) popup_hwr_training_preview_window

0x9c32,	// (0x000543c6) hwr_training_navi_pane_g5_ParamLimits

0x9c32,	// (0x000543c6) hwr_training_navi_pane_g5

0xebe6,	// (0x0005937a) popup_char_count_window

0x5f94,	// (0x00050728) bg_popup_sub_pane_cp20_ParamLimits

0xaf5c,	// (0x000556f0) list_vitu2_match_list_pane_ParamLimits

0xaf68,	// (0x000556fc) vitu2_page_scroll_pane_ParamLimits

0xaf68,	// (0x000556fc) vitu2_page_scroll_pane

0x0d50,	// (0x0004b4e4) list_single_hwr_training_symbol_option_pane_ParamLimits

0x0d50,	// (0x0004b4e4) list_single_hwr_training_symbol_option_pane

0x0d63,	// (0x0004b4f7) list_single_hwr_training_symbol_option_pane_g1

0x0d6b,	// (0x0004b4ff) list_single_hwr_training_symbol_option_pane_t1

0x0d79,	// (0x0004b50d) bg_button_pane_cp023

0x0d82,	// (0x0004b516) bg_button_pane_cp024

0x0db5,	// (0x0004b549) vitu2_page_scroll_pane_g1

0x0dbd,	// (0x0004b551) vitu2_page_scroll_pane_g2

0x0001,

0xfa34,	// (0x0005a1c8) vitu2_page_scroll_pane_g

0x0dc5,	// (0x0004b559) vitu2_page_scroll_pane_t1

0xe0ca,	// (0x0005885e) popup_char_count_window_g1

0x0dd4,	// (0x0004b568) popup_char_count_window_g2

0x0ddd,	// (0x0004b571) popup_char_count_window_g3

0x0002,

0xfa39,	// (0x0005a1cd) popup_char_count_window_g

0x0de6,	// (0x0004b57a) popup_char_count_window_t1

0x5fae,	// (0x00050742) main_vded2_pane

0xe824,	// (0x00058fb8) aid_size_cell_imed_line

0xe82e,	// (0x00058fc2) grid_imed_line_width_pane

0xa5a1,	// (0x00054d35) vid4_indicators_pane_g4

0x0df4,	// (0x0004b588) cell_imed_line_width_pane_ParamLimits

0x0df4,	// (0x0004b588) cell_imed_line_width_pane

0x0e08,	// (0x0004b59c) cell_imed_line_width_pane_g1

0x0e11,	// (0x0004b5a5) cell_imed_line_width_pane_g2

0x0001,

0xfa40,	// (0x0005a1d4) cell_imed_line_width_pane_g

0xb5fe,	// (0x00055d92) main_vded2_pane_g1_ParamLimits

0xb5fe,	// (0x00055d92) main_vded2_pane_g1

0xb60b,	// (0x00055d9f) main_vded2_pane_g2_ParamLimits

0xb60b,	// (0x00055d9f) main_vded2_pane_g2

0x0001,

0xfa45,	// (0x0005a1d9) main_vded2_pane_g_ParamLimits

0xfa45,	// (0x0005a1d9) main_vded2_pane_g

0xb619,	// (0x00055dad) vded2_slider_pane_ParamLimits

0xb619,	// (0x00055dad) vded2_slider_pane

0xb626,	// (0x00055dba) aid_size_touch_vded2_end

0xb630,	// (0x00055dc4) aid_size_touch_vded2_playhead

0x0e19,	// (0x0004b5ad) aid_size_touch_vded2_start

0x0e21,	// (0x0004b5b5) vded2_slider_bg_pane

0x0e2a,	// (0x0004b5be) vded2_slider_pane_g1

0x0e33,	// (0x0004b5c7) vded2_slider_pane_g2

0xb638,	// (0x00055dcc) vded2_slider_pane_g3

0x0002,

0xfa4a,	// (0x0005a1de) vded2_slider_pane_g

0x0e3b,	// (0x0004b5cf) vded2_slider_bg_pane_g1

0x0e44,	// (0x0004b5d8) vded2_slider_bg_pane_g2

0x0e4d,	// (0x0004b5e1) vded2_slider_bg_pane_g3

0x0002,

0xfa51,	// (0x0005a1e5) vded2_slider_bg_pane_g

0x83c8,	// (0x00052b5c) aid_postcard_touch_down_pane_ParamLimits

0x83c8,	// (0x00052b5c) aid_postcard_touch_down_pane

0x83d8,	// (0x00052b6c) aid_postcard_touch_up_pane_ParamLimits

0x83d8,	// (0x00052b6c) aid_postcard_touch_up_pane

0x5fae,	// (0x00050742) main_blid2_pane

0x8b50,	// (0x000532e4) popup_blid2_search_window

0x2888,	// (0x0004d01c) blid2_gps_pane

0x2888,	// (0x0004d01c) blid2_navig_pane

0x2888,	// (0x0004d01c) blid2_search_pane

0x2888,	// (0x0004d01c) blid2_tripm_pane

0xb641,	// (0x00055dd5) blid2_search_pane_g1_ParamLimits

0xb641,	// (0x00055dd5) blid2_search_pane_g1

0xb651,	// (0x00055de5) blid2_search_pane_t1_ParamLimits

0xb651,	// (0x00055de5) blid2_search_pane_t1

0xb663,	// (0x00055df7) aid_size_cell_blid2_gps_ParamLimits

0xb663,	// (0x00055df7) aid_size_cell_blid2_gps

0xb673,	// (0x00055e07) blid2_gps_pane_g1_ParamLimits

0xb673,	// (0x00055e07) blid2_gps_pane_g1

0xb67f,	// (0x00055e13) grid_blid2_satellite_pane_ParamLimits

0xb67f,	// (0x00055e13) grid_blid2_satellite_pane

0xb68f,	// (0x00055e23) blid2_navig_pane_g1_ParamLimits

0xb68f,	// (0x00055e23) blid2_navig_pane_g1

0xb69b,	// (0x00055e2f) blid2_navig_pane_t1_ParamLimits

0xb69b,	// (0x00055e2f) blid2_navig_pane_t1

0xb6ad,	// (0x00055e41) blid2_navig_pane_t2_ParamLimits

0xb6ad,	// (0x00055e41) blid2_navig_pane_t2

0x0001,

0xfa58,	// (0x0005a1ec) blid2_navig_pane_t_ParamLimits

0xfa58,	// (0x0005a1ec) blid2_navig_pane_t

0xb6bf,	// (0x00055e53) blid2_navig_ring_pane_ParamLimits

0xb6bf,	// (0x00055e53) blid2_navig_ring_pane

0xb6cf,	// (0x00055e63) blid2_speed_pane_ParamLimits

0xb6cf,	// (0x00055e63) blid2_speed_pane

0xb6db,	// (0x00055e6f) blid2_tripm_pane_g1_ParamLimits

0xb6db,	// (0x00055e6f) blid2_tripm_pane_g1

0xb6eb,	// (0x00055e7f) blid2_tripm_pane_g2_ParamLimits

0xb6eb,	// (0x00055e7f) blid2_tripm_pane_g2

0xb6f7,	// (0x00055e8b) blid2_tripm_pane_g3_ParamLimits

0xb6f7,	// (0x00055e8b) blid2_tripm_pane_g3

0xb703,	// (0x00055e97) blid2_tripm_pane_g4_ParamLimits

0xb703,	// (0x00055e97) blid2_tripm_pane_g4

0xb70f,	// (0x00055ea3) blid2_tripm_pane_g5_ParamLimits

0xb70f,	// (0x00055ea3) blid2_tripm_pane_g5

0x0005,

0xfa5d,	// (0x0005a1f1) blid2_tripm_pane_g_ParamLimits

0xfa5d,	// (0x0005a1f1) blid2_tripm_pane_g

0xb72b,	// (0x00055ebf) blid2_tripm_pane_t1_ParamLimits

0xb72b,	// (0x00055ebf) blid2_tripm_pane_t1

0xb73f,	// (0x00055ed3) blid2_tripm_pane_t2_ParamLimits

0xb73f,	// (0x00055ed3) blid2_tripm_pane_t2

0xb751,	// (0x00055ee5) blid2_tripm_pane_t3_ParamLimits

0xb751,	// (0x00055ee5) blid2_tripm_pane_t3

0x0003,

0xfa6a,	// (0x0005a1fe) blid2_tripm_pane_t_ParamLimits

0xfa6a,	// (0x0005a1fe) blid2_tripm_pane_t

0xb783,	// (0x00055f17) cell_blid2_satellite_pane_ParamLimits

0xb783,	// (0x00055f17) cell_blid2_satellite_pane

0xb79d,	// (0x00055f31) cell_blid2_satellite_pane_g1

0x0e56,	// (0x0004b5ea) cell_blid2_satellite_pane_t1

0x322a,	// (0x0004d9be) blid2_speed_pane_g1

0x0e64,	// (0x0004b5f8) blid2_speed_pane_t1

0x0e72,	// (0x0004b606) blid2_speed_pane_t2

0x0001,

0xfa73,	// (0x0005a207) blid2_speed_pane_t

0x322a,	// (0x0004d9be) blid2_navig_ring_pane_g1

0xb7a6,	// (0x00055f3a) blid2_navig_ring_pane_g2

0xb7ae,	// (0x00055f42) blid2_navig_ring_pane_g3

0xb7b6,	// (0x00055f4a) blid2_navig_ring_pane_g4

0xb7be,	// (0x00055f52) blid2_navig_ring_pane_g5

0x0004,

0xfa78,	// (0x0005a20c) blid2_navig_ring_pane_g

0x2888,	// (0x0004d01c) bg_popup_window_pane_cp011

0x0e80,	// (0x0004b614) popup_blid2_search_window_g1

0x0e88,	// (0x0004b61c) popup_blid2_search_window_t1

0x0e96,	// (0x0004b62a) popup_blid2_search_window_t2

0x0001,

0xfa83,	// (0x0005a217) popup_blid2_search_window_t

0x333e,	// (0x0004dad2) main_browser_pane_g1

0x3042,	// (0x0004d7d6) main_browser_pane_ParamLimits

0x8b27,	// (0x000532bb) bg_button_pane_cp011_ParamLimits

0xa846,	// (0x00054fda) cell_vitu2_function_pane_g1_ParamLimits

0x46ad,	// (0x0004ee41) bg_popup_sub_pane_cp22_ParamLimits

0xb0f0,	// (0x00055884) input_focus_pane_cp08_ParamLimits

0xb10b,	// (0x0005589f) popup_vitu2_query_button_pane_ParamLimits

0xb10b,	// (0x0005589f) popup_vitu2_query_button_pane

0xb11a,	// (0x000558ae) popup_vitu2_query_input_button_pane

0xee61,	// (0x000595f5) popup_vitu2_query_window_g1_ParamLimits

0xb124,	// (0x000558b8) popup_vitu2_query_window_g2_ParamLimits

0xf984,	// (0x0005a118) popup_vitu2_query_window_g_ParamLimits

0x2888,	// (0x0004d01c) bg_button_pane_cp026

0xb7c6,	// (0x00055f5a) popup_vitu2_query_input_button_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp025

0x0ea4,	// (0x0004b638) popup_vitu2_query_button_pane_t1

0x9024,	// (0x000537b8) main_mp3_pane_t6

0x9034,	// (0x000537c8) popup_slider_window_cp01

0xa47e,	// (0x00054c12) cam4_battery_pane

0xa55e,	// (0x00054cf2) cam4_battery_pane_cp02

0xb545,	// (0x00055cd9) cam4_battery_pane_cp01

0xb545,	// (0x00055cd9) cam4_battery_pane_cp03

0xe0d3,	// (0x00058867) cam4_battery_pane_g1

0x322a,	// (0x0004d9be) cam4_battery_pane_g2

0x0001,

0xfa88,	// (0x0005a21c) cam4_battery_pane_g

0xe237,	// (0x000589cb) popup_blid_sat_info2_window_t11

0x3aa0,	// (0x0004e234) aid_size_touch_mv_arrow_left_ParamLimits

0x3ac9,	// (0x0004e25d) aid_size_touch_mv_arrow_right_ParamLimits

0x3b27,	// (0x0004e2bb) navi_pane_g1_ParamLimits

0x3b33,	// (0x0004e2c7) navi_pane_g2_ParamLimits

0x3b61,	// (0x0004e2f5) navi_pane_g3_ParamLimits

0xf35f,	// (0x00059af3) navi_pane_g_ParamLimits

0x7fb5,	// (0x00052749) navi_pane_mv_t1_ParamLimits

0x9a5c,	// (0x000541f0) grid_imed_effect_pane_ParamLimits

0x6b12,	// (0x000512a6) aid_placing_vt_slider_lsc

0x328d,	// (0x0004da21) aid_placing_vt_slider_prt

0x2f37,	// (0x0004d6cb) bg_tb_trans_pane_cp01_ParamLimits

0xe4b7,	// (0x00058c4b) popup_image_details_window_g1_ParamLimits

0xe4ca,	// (0x00058c5e) popup_image_details_window_g2_ParamLimits

0xe4df,	// (0x00058c73) popup_image_details_window_g3_ParamLimits

0xe4df,	// (0x00058c73) popup_image_details_window_g3

0xf68b,	// (0x00059e1f) popup_image_details_window_g_ParamLimits

0xe4f3,	// (0x00058c87) popup_image_details_window_t1_ParamLimits

0xe505,	// (0x00058c99) popup_image_details_window_t2_ParamLimits

0xe51e,	// (0x00058cb2) popup_image_details_window_t3_ParamLimits

0xe532,	// (0x00058cc6) popup_image_details_window_t4_ParamLimits

0xe54d,	// (0x00058ce1) popup_image_details_window_t5_ParamLimits

0xf692,	// (0x00059e26) popup_image_details_window_t_ParamLimits

0xb469,	// (0x00055bfd) cl_header_name_pane_ParamLimits

0xb469,	// (0x00055bfd) cl_header_name_pane

0xb7ce,	// (0x00055f62) cl_header_name_pane_t1_ParamLimits

0xb7ce,	// (0x00055f62) cl_header_name_pane_t1

0xb7e5,	// (0x00055f79) cl_header_name_pane_t2_ParamLimits

0xb7e5,	// (0x00055f79) cl_header_name_pane_t2

0xb80f,	// (0x00055fa3) cl_header_name_pane_t3_ParamLimits

0xb80f,	// (0x00055fa3) cl_header_name_pane_t3

0x0002,

0xfa8d,	// (0x0005a221) cl_header_name_pane_t_ParamLimits

0xfa8d,	// (0x0005a221) cl_header_name_pane_t

0x3bf0,	// (0x0004e384) navi_pane_mv_g2_ParamLimits

0xebce,	// (0x00059362) field_vitu2_entry_pane_g1_ParamLimits

0xebda,	// (0x0005936e) field_vitu2_entry_pane_g2_ParamLimits

0x468b,	// (0x0004ee1f) field_vitu2_entry_pane_g3_ParamLimits

0x468b,	// (0x0004ee1f) field_vitu2_entry_pane_g3

0xf88d,	// (0x0005a021) field_vitu2_entry_pane_g_ParamLimits

0xa7d4,	// (0x00054f68) cell_vitu2_itu_pane_g1_ParamLimits

0xa7ec,	// (0x00054f80) cell_vitu2_itu_pane_g2_ParamLimits

0xa7ec,	// (0x00054f80) cell_vitu2_itu_pane_g2

0x0001,

0xf899,	// (0x0005a02d) cell_vitu2_itu_pane_g_ParamLimits

0xf899,	// (0x0005a02d) cell_vitu2_itu_pane_g

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp05_ParamLimits

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp05

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp03

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp04

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp10_ParamLimits

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp10

0xb40b,	// (0x00055b9f) bg_vkb2_func_pane_cp08

0xb0d8,	// (0x0005586c) bg_vkb2_func_pane_cp06

0xb3ee,	// (0x00055b82) bg_vkb2_func_pane_cp07

0x0d8b,	// (0x0004b51f) bg_vkb2_func_pane_cp11_ParamLimits

0x0d8b,	// (0x0004b51f) bg_vkb2_func_pane_cp11

0x0da0,	// (0x0004b534) bg_vkb2_func_pane_cp12_ParamLimits

0x0da0,	// (0x0004b534) bg_vkb2_func_pane_cp12

0x2888,	// (0x0004d01c) bg_vkb2_func_pane_cp09

0xebf8,	// (0x0005938c) bg_vkb2_func_pane_g1

0x344f,	// (0x0004dbe3) bg_vkb2_func_pane_g2

0xec00,	// (0x00059394) bg_vkb2_func_pane_g3

0xec08,	// (0x0005939c) bg_vkb2_func_pane_g4

0xee26,	// (0x000595ba) bg_vkb2_func_pane_g5

0xec20,	// (0x000593b4) bg_vkb2_func_pane_g6

0xec28,	// (0x000593bc) bg_vkb2_func_pane_g7

0xec18,	// (0x000593ac) bg_vkb2_func_pane_g8

0x342f,	// (0x0004dbc3) bg_vkb2_func_pane_g9

0x0008,

0xfa94,	// (0x0005a228) bg_vkb2_func_pane_g

0xb71d,	// (0x00055eb1) blid2_tripm_pane_g6_ParamLimits

0xb71d,	// (0x00055eb1) blid2_tripm_pane_g6

0xeb12,	// (0x000592a6) mp4_progress_pane_g1

0xb777,	// (0x00055f0b) blid2_tripm_values_pane_ParamLimits

0xb777,	// (0x00055f0b) blid2_tripm_values_pane

0xb834,	// (0x00055fc8) blid2_tripm_values_pane_t1

0xb842,	// (0x00055fd6) blid2_tripm_values_pane_t2

0xb850,	// (0x00055fe4) blid2_tripm_values_pane_t3

0xb85e,	// (0x00055ff2) blid2_tripm_values_pane_t4

0xb86c,	// (0x00056000) blid2_tripm_values_pane_t5

0xb87a,	// (0x0005600e) blid2_tripm_values_pane_t6

0xb888,	// (0x0005601c) blid2_tripm_values_pane_t7

0xb896,	// (0x0005602a) blid2_tripm_values_pane_t8

0xb8a4,	// (0x00056038) blid2_tripm_values_pane_t9

0x0008,

0xfaa7,	// (0x0005a23b) blid2_tripm_values_pane_t

0x6b52,	// (0x000512e6) call_video_pane_t1_ParamLimits

0x6b73,	// (0x00051307) call_video_pane_t2_ParamLimits

0xf208,	// (0x0005999c) call_video_pane_t_ParamLimits

0x82b4,	// (0x00052a48) msg_header_pane_g1_ParamLimits

0x3db5,	// (0x0004e549) msg_header_pane_g2_ParamLimits

0x3db5,	// (0x0004e549) msg_header_pane_g2

0x0001,

0xf402,	// (0x00059b96) msg_header_pane_g_ParamLimits

0xf402,	// (0x00059b96) msg_header_pane_g

0x3042,	// (0x0004d7d6) main_clock2_pane_ParamLimits

0x97d6,	// (0x00053f6a) grid_clock2_toolbar_pane_ParamLimits

0x97d6,	// (0x00053f6a) grid_clock2_toolbar_pane

0x97d6,	// (0x00053f6a) listscroll_clock2_pane_ParamLimits

0x97d6,	// (0x00053f6a) listscroll_clock2_pane

0x9886,	// (0x0005401a) main_clock2_pane_t3_ParamLimits

0x9886,	// (0x0005401a) main_clock2_pane_t3

0x9898,	// (0x0005402c) main_clock2_pane_t4_ParamLimits

0x9898,	// (0x0005402c) main_clock2_pane_t4

0x0eb2,	// (0x0004b646) cell_clock2_toolbar_pane

0x0eba,	// (0x0004b64e) cell_clock2_toolbar_pane_cp01

0x0eba,	// (0x0004b64e) cell_clock2_toolbar_pane_cp02

0x0ec2,	// (0x0004b656) cell_clock2_toolbar_pane_cp03

0x0eca,	// (0x0004b65e) list_clock2_pane

0x3a16,	// (0x0004e1aa) scroll_pane_cp10

0x0ed2,	// (0x0004b666) list_single_clock2_pane_ParamLimits

0x0ed2,	// (0x0004b666) list_single_clock2_pane

0x31f4,	// (0x0004d988) list_highlight_pane_cp08

0x0edf,	// (0x0004b673) list_single_clock2_pane_t1

0x0eed,	// (0x0004b681) list_single_clock2_pane_t2

0x0001,

0xfaba,	// (0x0005a24e) list_single_clock2_pane_t

0x2888,	// (0x0004d01c) bg_button_pane_cp10

0x0efb,	// (0x0004b68f) cell_clock2_toolbar_pane_g1

0x8336,	// (0x00052aca) aid_main_viewer_pane_g1_ParamLimits

0x8336,	// (0x00052aca) aid_main_viewer_pane_g1

0x8342,	// (0x00052ad6) aid_main_viewer_pane_g2_ParamLimits

0x8342,	// (0x00052ad6) aid_main_viewer_pane_g2

0x834e,	// (0x00052ae2) aid_main_viewer_pane_g3_ParamLimits

0x834e,	// (0x00052ae2) aid_main_viewer_pane_g3

0x835f,	// (0x00052af3) aid_main_viewer_pane_g4_ParamLimits

0x835f,	// (0x00052af3) aid_main_viewer_pane_g4

0x0003,

0xf413,	// (0x00059ba7) aid_main_viewer_pane_g_ParamLimits

0xf413,	// (0x00059ba7) aid_main_viewer_pane_g

0x8b1a,	// (0x000532ae) main_calc_pane_ParamLimits

0x8b35,	// (0x000532c9) main_dialer2_pane_ParamLimits

0x5fae,	// (0x00050742) main_cam6_pane

0x5fae,	// (0x00050742) main_vid6_pane

0x97e2,	// (0x00053f76) listscroll_gen_pane_cp06_ParamLimits

0x97e2,	// (0x00053f76) listscroll_gen_pane_cp06

0x98aa,	// (0x0005403e) main_clock2_pane_t5_ParamLimits

0x98aa,	// (0x0005403e) main_clock2_pane_t5

0x98f7,	// (0x0005408b) aid_call2_pane_cp10_ParamLimits

0x9909,	// (0x0005409d) aid_call_pane_cp10_ParamLimits

0x3a94,	// (0x0004e228) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3a94,	// (0x0004e228) popup_clock_analogue_window_cp10_g2_ParamLimits

0x991b,	// (0x000540af) popup_clock_analogue_window_cp10_g3_ParamLimits

0x991b,	// (0x000540af) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3a94,	// (0x0004e228) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf747,	// (0x00059edb) popup_clock_analogue_window_cp10_g_ParamLimits

0x9931,	// (0x000540c5) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa026,	// (0x000547ba) cell_dialer2_keypad_pane_g2_ParamLimits

0xa026,	// (0x000547ba) cell_dialer2_keypad_pane_g2

0x0001,

0xf82c,	// (0x00059fc0) cell_dialer2_keypad_pane_g_ParamLimits

0xf82c,	// (0x00059fc0) cell_dialer2_keypad_pane_g

0xa042,	// (0x000547d6) cell_dialer2_keypad_pane_t1

0xab18,	// (0x000552ac) main_cset_text2_pane_ParamLimits

0xab18,	// (0x000552ac) main_cset_text2_pane

0xf041,	// (0x000597d5) area_vitu2_query_pane_g1_ParamLimits

0xb38d,	// (0x00055b21) area_vitu2_query_pane_g2_ParamLimits

0xf9d7,	// (0x0005a16b) area_vitu2_query_pane_g_ParamLimits

0x0c79,	// (0x0004b40d) area_vitu2_query_pane_t7_ParamLimits

0x0c79,	// (0x0004b40d) area_vitu2_query_pane_t7

0xb0d8,	// (0x0005586c) bg_button_pane_cp018_ParamLimits

0xb3ee,	// (0x00055b82) bg_button_pane_cp021_ParamLimits

0xb3fa,	// (0x00055b8e) bg_button_pane_cp022_ParamLimits

0xb40b,	// (0x00055b9f) bg_vkb2_func_pane_cp08_ParamLimits

0xb0d8,	// (0x0005586c) bg_vkb2_func_pane_cp06_ParamLimits

0xb3ee,	// (0x00055b82) bg_vkb2_func_pane_cp07_ParamLimits

0xb41d,	// (0x00055bb1) input_focus_pane_cp09_ParamLimits

0xb8b2,	// (0x00056046) cam6_autofocus_pane_ParamLimits

0xb8b2,	// (0x00056046) cam6_autofocus_pane

0xb8d4,	// (0x00056068) cam6_image_uncrop_pane_ParamLimits

0xb8d4,	// (0x00056068) cam6_image_uncrop_pane

0xb901,	// (0x00056095) cam6_indi_pane_ParamLimits

0xb901,	// (0x00056095) cam6_indi_pane

0xb91b,	// (0x000560af) cam6_mode_pane_ParamLimits

0xb91b,	// (0x000560af) cam6_mode_pane

0xb92f,	// (0x000560c3) cam6_timer_pane_ParamLimits

0xb92f,	// (0x000560c3) cam6_timer_pane

0xb93b,	// (0x000560cf) cam6_zoom_pane_ParamLimits

0xb93b,	// (0x000560cf) cam6_zoom_pane

0xb953,	// (0x000560e7) cam6_mode_pane_g1_ParamLimits

0xb953,	// (0x000560e7) cam6_mode_pane_g1

0xb95f,	// (0x000560f3) cam6_mode_pane_g2_ParamLimits

0xb95f,	// (0x000560f3) cam6_mode_pane_g2

0xb96b,	// (0x000560ff) cam6_mode_pane_g3_ParamLimits

0xb96b,	// (0x000560ff) cam6_mode_pane_g3

0xb977,	// (0x0005610b) cam6_mode_pane_g4_ParamLimits

0xb977,	// (0x0005610b) cam6_mode_pane_g4

0x0003,

0xfabf,	// (0x0005a253) cam6_mode_pane_g_ParamLimits

0xfabf,	// (0x0005a253) cam6_mode_pane_g

0x06ef,	// (0x0004ae83) bg_tb_trans_pane_cp08_ParamLimits

0x06ef,	// (0x0004ae83) bg_tb_trans_pane_cp08

0x0f03,	// (0x0004b697) cam6_battery_pane_ParamLimits

0x0f03,	// (0x0004b697) cam6_battery_pane

0x0f19,	// (0x0004b6ad) cam6_indi_pane_g1_ParamLimits

0x0f19,	// (0x0004b6ad) cam6_indi_pane_g1

0x0f2b,	// (0x0004b6bf) cam6_indi_pane_g2_ParamLimits

0x0f2b,	// (0x0004b6bf) cam6_indi_pane_g2

0x0f3d,	// (0x0004b6d1) cam6_indi_pane_g3_ParamLimits

0x0f3d,	// (0x0004b6d1) cam6_indi_pane_g3

0x0002,

0xfac8,	// (0x0005a25c) cam6_indi_pane_g_ParamLimits

0xfac8,	// (0x0005a25c) cam6_indi_pane_g

0x0f4f,	// (0x0004b6e3) cam6_indi_pane_t1_ParamLimits

0x0f4f,	// (0x0004b6e3) cam6_indi_pane_t1

0xa5de,	// (0x00054d72) cam6_autofocus_pane_g1

0xa5d6,	// (0x00054d6a) cam6_autofocus_pane_g2

0xa5ee,	// (0x00054d82) cam6_autofocus_pane_g3

0xa5e6,	// (0x00054d7a) cam6_autofocus_pane_g4

0x0003,

0xfacf,	// (0x0005a263) cam6_autofocus_pane_g

0x0f75,	// (0x0004b709) cam6_timer_pane_g1

0x0f7d,	// (0x0004b711) cam6_timer_pane_t1

0x0f8b,	// (0x0004b71f) cam6_zoom_cont_pane

0x0f93,	// (0x0004b727) cam6_zoom_pane_g1

0x0f9b,	// (0x0004b72f) cam6_zoom_pane_g2

0xb983,	// (0x00056117) cam6_zoom_pane_g3

0x0002,

0xfad8,	// (0x0005a26c) cam6_zoom_pane_g

0x322a,	// (0x0004d9be) cam6_battery_pane_g1

0x322a,	// (0x0004d9be) cam6_battery_pane_g2

0x0001,

0xf3c3,	// (0x00059b57) cam6_battery_pane_g

0x0fa3,	// (0x0004b737) cam6_zoom_cont_pane_g1

0x0fac,	// (0x0004b740) cam6_zoom_cont_pane_g2

0x0fb5,	// (0x0004b749) cam6_zoom_cont_pane_g3

0x0002,

0xfadf,	// (0x0005a273) cam6_zoom_cont_pane_g

0xb9a0,	// (0x00056134) cam6_mode_pane_cp_ParamLimits

0xb9a0,	// (0x00056134) cam6_mode_pane_cp

0xb9b4,	// (0x00056148) cam6_zoom_pane_cp_ParamLimits

0xb9b4,	// (0x00056148) cam6_zoom_pane_cp

0xb9cc,	// (0x00056160) vid6_image_uncrop_cif_pane_ParamLimits

0xb9cc,	// (0x00056160) vid6_image_uncrop_cif_pane

0xb9f8,	// (0x0005618c) vid6_image_uncrop_nhd_pane_ParamLimits

0xb9f8,	// (0x0005618c) vid6_image_uncrop_nhd_pane

0xba15,	// (0x000561a9) vid6_image_uncrop_vga_pane_ParamLimits

0xba15,	// (0x000561a9) vid6_image_uncrop_vga_pane

0xba34,	// (0x000561c8) vid6_image_uncrop_wvga_pane_ParamLimits

0xba34,	// (0x000561c8) vid6_image_uncrop_wvga_pane

0xba51,	// (0x000561e5) vid6_indi_pane_ParamLimits

0xba51,	// (0x000561e5) vid6_indi_pane

0x06ef,	// (0x0004ae83) bg_tb_trans_pane_cp09_ParamLimits

0x06ef,	// (0x0004ae83) bg_tb_trans_pane_cp09

0x0fcd,	// (0x0004b761) cam6_battery_pane_cp_ParamLimits

0x0fcd,	// (0x0004b761) cam6_battery_pane_cp

0x0fd9,	// (0x0004b76d) vid6_indi_pane_g1_ParamLimits

0x0fd9,	// (0x0004b76d) vid6_indi_pane_g1

0x0feb,	// (0x0004b77f) vid6_indi_pane_g2_ParamLimits

0x0feb,	// (0x0004b77f) vid6_indi_pane_g2

0x0ffd,	// (0x0004b791) vid6_indi_pane_g3_ParamLimits

0x0ffd,	// (0x0004b791) vid6_indi_pane_g3

0x1012,	// (0x0004b7a6) vid6_indi_pane_g4_ParamLimits

0x1012,	// (0x0004b7a6) vid6_indi_pane_g4

0x1027,	// (0x0004b7bb) vid6_indi_pane_g5_ParamLimits

0x1027,	// (0x0004b7bb) vid6_indi_pane_g5

0x0004,

0xfae6,	// (0x0005a27a) vid6_indi_pane_g_ParamLimits

0xfae6,	// (0x0005a27a) vid6_indi_pane_g

0x1041,	// (0x0004b7d5) vid6_indi_pane_t1_ParamLimits

0x1041,	// (0x0004b7d5) vid6_indi_pane_t1

0x1057,	// (0x0004b7eb) vid6_indi_pane_t2_ParamLimits

0x1057,	// (0x0004b7eb) vid6_indi_pane_t2

0x107f,	// (0x0004b813) vid6_indi_pane_t3_ParamLimits

0x107f,	// (0x0004b813) vid6_indi_pane_t3

0x10a7,	// (0x0004b83b) vid6_indi_pane_t4_ParamLimits

0x10a7,	// (0x0004b83b) vid6_indi_pane_t4

0x0003,

0xfaf1,	// (0x0005a285) vid6_indi_pane_t_ParamLimits

0xfaf1,	// (0x0005a285) vid6_indi_pane_t

0x10cb,	// (0x0004b85f) wait_bar_pane_cp08

0xba76,	// (0x0005620a) main_cset_text2_pane_t1_ParamLimits

0xba76,	// (0x0005620a) main_cset_text2_pane_t1

0xb98b,	// (0x0005611f) listscroll_gen_pane_cp06_t1_ParamLimits

0xb98b,	// (0x0005611f) listscroll_gen_pane_cp06_t1

0x5fae,	// (0x00050742) main_cam6_set_pane

0xeba9,	// (0x0005933d) bg_tb_trans_pane_cp06_ParamLimits

0xa486,	// (0x00054c1a) cam4_indicators_pane_g1_ParamLimits

0xa497,	// (0x00054c2b) cam4_indicators_pane_g2_ParamLimits

0xf869,	// (0x00059ffd) cam4_indicators_pane_g_ParamLimits

0xa4b5,	// (0x00054c49) cam4_indicators_pane_t1_ParamLimits

0x8b27,	// (0x000532bb) bg_tb_trans_pane_cp07_ParamLimits

0xa568,	// (0x00054cfc) vid4_indicators_pane_g1_ParamLimits

0xa57c,	// (0x00054d10) vid4_indicators_pane_g2_ParamLimits

0xa590,	// (0x00054d24) vid4_indicators_pane_g3_ParamLimits

0xa5a1,	// (0x00054d35) vid4_indicators_pane_g4_ParamLimits

0xf87b,	// (0x0005a00f) vid4_indicators_pane_g_ParamLimits

0xa5bf,	// (0x00054d53) vid4_indicators_pane_t1_ParamLimits

0xb54d,	// (0x00055ce1) vid4_progress_pane_g1_ParamLimits

0xb55d,	// (0x00055cf1) vid4_progress_pane_g2_ParamLimits

0xb56d,	// (0x00055d01) vid4_progress_pane_g3_ParamLimits

0xb57f,	// (0x00055d13) vid4_progress_pane_g4_ParamLimits

0xfa22,	// (0x0005a1b6) vid4_progress_pane_g_ParamLimits

0xb597,	// (0x00055d2b) vid4_progress_pane_t1_ParamLimits

0xb5ad,	// (0x00055d41) vid4_progress_pane_t2_ParamLimits

0xb5c2,	// (0x00055d56) vid4_progress_pane_t3_ParamLimits

0xfa2d,	// (0x0005a1c1) vid4_progress_pane_t_ParamLimits

0xb5d7,	// (0x00055d6b) wait_bar_pane_cp07_ParamLimits

0xbaa9,	// (0x0005623d) main_cam6_set_pane_g2_ParamLimits

0xbaa9,	// (0x0005623d) main_cam6_set_pane_g2

0xbab5,	// (0x00056249) main_cset6_listscroll_pane_ParamLimits

0xbab5,	// (0x00056249) main_cset6_listscroll_pane

0xbae0,	// (0x00056274) main_cset6_slider_pane_ParamLimits

0xbae0,	// (0x00056274) main_cset6_slider_pane

0xbaec,	// (0x00056280) main_cset6_text2_pane_ParamLimits

0xbaec,	// (0x00056280) main_cset6_text2_pane

0x10da,	// (0x0004b86e) main_cset6_text_pane

0x10e2,	// (0x0004b876) main_cset_list_pane_copy1_ParamLimits

0x10e2,	// (0x0004b876) main_cset_list_pane_copy1

0x10f2,	// (0x0004b886) scroll_pane_cp028_copy1

0xbaff,	// (0x00056293) cset_list_set_pane_copy1

0xbb12,	// (0x000562a6) aid_position_infowindow_above_copy1

0xbb1a,	// (0x000562ae) aid_position_infowindow_below_copy1

0xbb22,	// (0x000562b6) cset_list_set_pane_g1_copy1

0x0b66,	// (0x0004b2fa) cset_list_set_pane_g3_copy1_ParamLimits

0x0b66,	// (0x0004b2fa) cset_list_set_pane_g3_copy1

0x0b75,	// (0x0004b309) cset_list_set_pane_t1_copy1_ParamLimits

0x0b75,	// (0x0004b309) cset_list_set_pane_t1_copy1

0x2f37,	// (0x0004d6cb) list_highlight_pane_cp021_copy1_ParamLimits

0x2f37,	// (0x0004d6cb) list_highlight_pane_cp021_copy1

0x10fb,	// (0x0004b88f) cset6_slider_pane_ParamLimits

0x10fb,	// (0x0004b88f) cset6_slider_pane

0x1127,	// (0x0004b8bb) main_cset6_slider_pane_g1_ParamLimits

0x1127,	// (0x0004b8bb) main_cset6_slider_pane_g1

0xbb2a,	// (0x000562be) main_cset6_slider_pane_g2_ParamLimits

0xbb2a,	// (0x000562be) main_cset6_slider_pane_g2

0x114f,	// (0x0004b8e3) main_cset6_slider_pane_g3_ParamLimits

0x114f,	// (0x0004b8e3) main_cset6_slider_pane_g3

0xbb52,	// (0x000562e6) main_cset6_slider_pane_g4_ParamLimits

0xbb52,	// (0x000562e6) main_cset6_slider_pane_g4

0xbb5e,	// (0x000562f2) main_cset6_slider_pane_g5_ParamLimits

0xbb5e,	// (0x000562f2) main_cset6_slider_pane_g5

0xed27,	// (0x000594bb) main_cset6_slider_pane_g7_ParamLimits

0xed27,	// (0x000594bb) main_cset6_slider_pane_g7

0xed33,	// (0x000594c7) main_cset6_slider_pane_g8_ParamLimits

0xed33,	// (0x000594c7) main_cset6_slider_pane_g8

0xbb6c,	// (0x00056300) main_cset6_slider_pane_g9_ParamLimits

0xbb6c,	// (0x00056300) main_cset6_slider_pane_g9

0xbb78,	// (0x0005630c) main_cset6_slider_pane_g10_ParamLimits

0xbb78,	// (0x0005630c) main_cset6_slider_pane_g10

0xbb84,	// (0x00056318) main_cset6_slider_pane_g11_ParamLimits

0xbb84,	// (0x00056318) main_cset6_slider_pane_g11

0xbb90,	// (0x00056324) main_cset6_slider_pane_g12_ParamLimits

0xbb90,	// (0x00056324) main_cset6_slider_pane_g12

0xbb9c,	// (0x00056330) main_cset6_slider_pane_g13_ParamLimits

0xbb9c,	// (0x00056330) main_cset6_slider_pane_g13

0xbba8,	// (0x0005633c) main_cset6_slider_pane_g14_ParamLimits

0xbba8,	// (0x0005633c) main_cset6_slider_pane_g14

0xbbb4,	// (0x00056348) main_cset6_slider_pane_g15_ParamLimits

0xbbb4,	// (0x00056348) main_cset6_slider_pane_g15

0xbbcc,	// (0x00056360) main_cset6_slider_pane_g16_ParamLimits

0xbbcc,	// (0x00056360) main_cset6_slider_pane_g16

0xbbda,	// (0x0005636e) main_cset6_slider_pane_g17_ParamLimits

0xbbda,	// (0x0005636e) main_cset6_slider_pane_g17

0x0011,

0xfafa,	// (0x0005a28e) main_cset6_slider_pane_g_ParamLimits

0xfafa,	// (0x0005a28e) main_cset6_slider_pane_g

0x115b,	// (0x0004b8ef) main_cset6_slider_pane_t1_ParamLimits

0x115b,	// (0x0004b8ef) main_cset6_slider_pane_t1

0xbc00,	// (0x00056394) main_cset6_slider_pane_t2_ParamLimits

0xbc00,	// (0x00056394) main_cset6_slider_pane_t2

0xbc2b,	// (0x000563bf) main_cset6_slider_pane_t3_ParamLimits

0xbc2b,	// (0x000563bf) main_cset6_slider_pane_t3

0xbc56,	// (0x000563ea) main_cset6_slider_pane_t4_ParamLimits

0xbc56,	// (0x000563ea) main_cset6_slider_pane_t4

0xbc81,	// (0x00056415) main_cset6_slider_pane_t5_ParamLimits

0xbc81,	// (0x00056415) main_cset6_slider_pane_t5

0x119c,	// (0x0004b930) main_cset6_slider_pane_t7_ParamLimits

0x119c,	// (0x0004b930) main_cset6_slider_pane_t7

0xbcae,	// (0x00056442) main_cset6_slider_pane_t8_ParamLimits

0xbcae,	// (0x00056442) main_cset6_slider_pane_t8

0xbcd2,	// (0x00056466) main_cset6_slider_pane_t9_ParamLimits

0xbcd2,	// (0x00056466) main_cset6_slider_pane_t9

0xbcf6,	// (0x0005648a) main_cset6_slider_pane_t10_ParamLimits

0xbcf6,	// (0x0005648a) main_cset6_slider_pane_t10

0xbd1a,	// (0x000564ae) main_cset6_slider_pane_t11_ParamLimits

0xbd1a,	// (0x000564ae) main_cset6_slider_pane_t11

0x11d2,	// (0x0004b966) main_cset6_slider_pane_t14_ParamLimits

0x11d2,	// (0x0004b966) main_cset6_slider_pane_t14

0x120b,	// (0x0004b99f) main_cset6_slider_pane_t15_ParamLimits

0x120b,	// (0x0004b99f) main_cset6_slider_pane_t15

0x000b,

0xfb1f,	// (0x0005a2b3) main_cset6_slider_pane_t_ParamLimits

0xfb1f,	// (0x0005a2b3) main_cset6_slider_pane_t

0x0baa,	// (0x0004b33e) cset_slider_pane_g1_copy1

0x0bb3,	// (0x0004b347) cset_slider_pane_g2_copy1

0x0bbc,	// (0x0004b350) cset_slider_pane_g3_copy1

0x2888,	// (0x0004d01c) bg_popup_sub_pane_cp011_copy1

0x1244,	// (0x0004b9d8) main_cset_text_pane_g1_copy1

0xee75,	// (0x00059609) main_cset_text_pane_t1_copy1

0xee83,	// (0x00059617) main_cset_text_pane_t2_copy1

0xee91,	// (0x00059625) main_cset_text_pane_t3_copy1

0xee9f,	// (0x00059633) main_cset_text_pane_t4_copy1

0xeead,	// (0x00059641) main_cset_text_pane_t5_copy1

0x124c,	// (0x0004b9e0) main_cset_text_pane_t6_copy1

0x125a,	// (0x0004b9ee) main_cset_text_pane_t7_copy1

0xbd5b,	// (0x000564ef) main_cset_text2_pane_t1_copy1

0x8b27,	// (0x000532bb) main_ncimui_pane

0x8b86,	// (0x0005331a) popup_query_ncimui_window_ParamLimits

0x8b86,	// (0x0005331a) popup_query_ncimui_window

0x074f,	// (0x0004aee3) field_cale_ev2_pane_g4_ParamLimits

0x074f,	// (0x0004aee3) field_cale_ev2_pane_g4

0x9d06,	// (0x0005449a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9d06,	// (0x0005449a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf803,	// (0x00059f97) cell_video_dialer_keypad_pane_g_ParamLimits

0xf803,	// (0x00059f97) cell_video_dialer_keypad_pane_g

0x9d1e,	// (0x000544b2) cell_video_dialer_keypad_pane_t1

0x2888,	// (0x0004d01c) bg_popup_window_pane_cp012

0x4f1a,	// (0x0004f6ae) heading_pane_cp06

0x1286,	// (0x0004ba1a) ncim_query_content_pane

0x2888,	// (0x0004d01c) bg_popup_heading_pane_cp01

0x128e,	// (0x0004ba22) ncim_heading_pane_t1

0x129c,	// (0x0004ba30) ncim_indicator_popup_pane

0x12ae,	// (0x0004ba42) ncim_query_button_pane

0x12c2,	// (0x0004ba56) ncim_query_content_pane_t1

0x12d4,	// (0x0004ba68) ncim_query_content_pane_t2

0x0005,

0xfb63,	// (0x0005a2f7) ncim_query_content_pane_t

0x130e,	// (0x0004baa2) ncim_query_list_pane

0x1320,	// (0x0004bab4) ncim_query_popup_pane

0x129c,	// (0x0004ba30) ncim_indicator_popup_pane_ParamLimits

0xbeae,	// (0x00056642) ncim_query_content_pane_g1_ParamLimits

0xbeae,	// (0x00056642) ncim_query_content_pane_g1

0x12c2,	// (0x0004ba56) ncim_query_content_pane_t1_ParamLimits

0x12d4,	// (0x0004ba68) ncim_query_content_pane_t2_ParamLimits

0xbeba,	// (0x0005664e) ncim_query_content_pane_t3_ParamLimits

0xbeba,	// (0x0005664e) ncim_query_content_pane_t3

0xbed7,	// (0x0005666b) ncim_query_content_pane_t4_ParamLimits

0xbed7,	// (0x0005666b) ncim_query_content_pane_t4

0xbef4,	// (0x00056688) ncim_query_content_pane_t5_ParamLimits

0xbef4,	// (0x00056688) ncim_query_content_pane_t5

0x12e6,	// (0x0004ba7a) ncim_query_content_pane_t6_ParamLimits

0x12e6,	// (0x0004ba7a) ncim_query_content_pane_t6

0xfb63,	// (0x0005a2f7) ncim_query_content_pane_t_ParamLimits

0x130e,	// (0x0004baa2) ncim_query_list_pane_ParamLimits

0x1320,	// (0x0004bab4) ncim_query_popup_pane_ParamLimits

0x1334,	// (0x0004bac8) wait_bar_pane_cp04

0x2888,	// (0x0004d01c) input_focus_pane_cp011

0x133c,	// (0x0004bad0) ncim_query_popup_pane_t1

0x134a,	// (0x0004bade) ncim_list_query_list_pane_ParamLimits

0x134a,	// (0x0004bade) ncim_list_query_list_pane

0x2888,	// (0x0004d01c) bg_button_pane_cp027

0x1357,	// (0x0004baeb) ncim_query_button_pane_g1

0x2888,	// (0x0004d01c) list_highlight_pane_cp012

0x1361,	// (0x0004baf5) ncim_list_query_list_pane_g1

0x1369,	// (0x0004bafd) ncim_list_query_list_pane_t1

0xa4a6,	// (0x00054c3a) cam4_indicators_pane_g3_ParamLimits

0xa4a6,	// (0x00054c3a) cam4_indicators_pane_g3

0xa5ad,	// (0x00054d41) vid4_indicators_pane_g5_ParamLimits

0xa5ad,	// (0x00054d41) vid4_indicators_pane_g5

0xb58b,	// (0x00055d1f) vid4_progress_pane_g5_ParamLimits

0xb58b,	// (0x00055d1f) vid4_progress_pane_g5

0xbd9a,	// (0x0005652e) main_ncimui_pane_g1

0xbe02,	// (0x00056596) ncimui_group_query_pane_ParamLimits

0xbe02,	// (0x00056596) ncimui_group_query_pane

0xbe4a,	// (0x000565de) ncimui_list_pane_ParamLimits

0xbe4a,	// (0x000565de) ncimui_list_pane

0xbe71,	// (0x00056605) ncimui_text_pane_ParamLimits

0xbe71,	// (0x00056605) ncimui_text_pane

0xbf11,	// (0x000566a5) ncimui_text_pane_t1_ParamLimits

0xbf11,	// (0x000566a5) ncimui_text_pane_t1

0x1377,	// (0x0004bb0b) ncimui_list_single_graphic_pane_ParamLimits

0x1377,	// (0x0004bb0b) ncimui_list_single_graphic_pane

0xbf30,	// (0x000566c4) ncimui_query_pane_ParamLimits

0xbf30,	// (0x000566c4) ncimui_query_pane

0x2888,	// (0x0004d01c) list_highlight_pane_cp013

0x1387,	// (0x0004bb1b) ncim_list_query_list_pane_t1_copy1

0x1361,	// (0x0004baf5) ncim_list_single_graphic_pane_g1

0xbf43,	// (0x000566d7) ncim_query_button_pane_cp01

0xbf4f,	// (0x000566e3) ncim_query_entry_pane_ParamLimits

0xbf4f,	// (0x000566e3) ncim_query_entry_pane

0xbf62,	// (0x000566f6) ncimui_query_pane_g1

0xbf6e,	// (0x00056702) ncimui_query_pane_t1_ParamLimits

0xbf6e,	// (0x00056702) ncimui_query_pane_t1

0x2f37,	// (0x0004d6cb) input_focus_pane_cp012

0x1395,	// (0x0004bb29) ncim_query_entry_pane_t1

0x3042,	// (0x0004d7d6) main_im_pane_ParamLimits

0x8b27,	// (0x000532bb) main_mobtv_pane_ParamLimits

0x8b27,	// (0x000532bb) main_mobtv_pane

0xbbe8,	// (0x0005637c) main_cset6_slider_pane_g18_ParamLimits

0xbbe8,	// (0x0005637c) main_cset6_slider_pane_g18

0xbbf4,	// (0x00056388) main_cset6_slider_pane_g19_ParamLimits

0xbbf4,	// (0x00056388) main_cset6_slider_pane_g19

0x468b,	// (0x0004ee1f) bg_main_mobtv_pane_ParamLimits

0x468b,	// (0x0004ee1f) bg_main_mobtv_pane

0xbf87,	// (0x0005671b) main_mobtv_info_pane

0xbf92,	// (0x00056726) main_mobtv_loading_pane_ParamLimits

0xbf92,	// (0x00056726) main_mobtv_loading_pane

0x13a7,	// (0x0004bb3b) main_mobtv_pg_channel_list_pane

0x13b1,	// (0x0004bb45) main_mobtv_pg_hdr_pane

0xbf9f,	// (0x00056733) main_mobtv_programe_curr_pane_ParamLimits

0xbf9f,	// (0x00056733) main_mobtv_programe_curr_pane

0xbfac,	// (0x00056740) main_mobtv_programe_next_pane_ParamLimits

0xbfac,	// (0x00056740) main_mobtv_programe_next_pane

0x13ba,	// (0x0004bb4e) popup_mobtv_noti_window

0x322a,	// (0x0004d9be) main_tv_pg_hdr_pane_g1

0x13c2,	// (0x0004bb56) main_tv_pg_hdr_pane_g2

0x13ca,	// (0x0004bb5e) main_tv_pg_hdr_pane_g3

0x13d2,	// (0x0004bb66) main_tv_pg_hdr_pane_g4

0x13da,	// (0x0004bb6e) main_tv_pg_hdr_pane_g5

0x13e4,	// (0x0004bb78) main_tv_pg_hdr_pane_g6

0x13ee,	// (0x0004bb82) main_tv_pg_hdr_pane_g7

0x13f8,	// (0x0004bb8c) main_tv_pg_hdr_pane_g8

0x1402,	// (0x0004bb96) main_tv_pg_hdr_pane_g9

0x140c,	// (0x0004bba0) main_tv_pg_hdr_pane_g10

0x1416,	// (0x0004bbaa) main_tv_pg_hdr_pane_g11

0x000a,

0xfb70,	// (0x0005a304) main_tv_pg_hdr_pane_g

0x1420,	// (0x0004bbb4) main_tv_pg_hdr_pane_t1

0x142e,	// (0x0004bbc2) main_tv_pg_hdr_pane_t2

0x143c,	// (0x0004bbd0) main_tv_pg_hdr_pane_t3

0x144c,	// (0x0004bbe0) main_tv_pg_hdr_pane_t4

0x145c,	// (0x0004bbf0) main_tv_pg_hdr_pane_t5

0x0004,

0xfb87,	// (0x0005a31b) main_tv_pg_hdr_pane_t

0x146c,	// (0x0004bc00) single_mobtv_pg_channel_pane_ParamLimits

0x146c,	// (0x0004bc00) single_mobtv_pg_channel_pane

0x147e,	// (0x0004bc12) single_mobtv_pg_channel_table_pane

0x1487,	// (0x0004bc1b) single_mobtv_pg_channel_thumb_pane

0x1490,	// (0x0004bc24) single_tv_pg_channel_pane_g1

0x1499,	// (0x0004bc2d) single_tv_pg_channel_pane_g2

0x0001,

0xfb92,	// (0x0005a326) single_tv_pg_channel_pane_g

0x2fd0,	// (0x0004d764) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x2fd0,	// (0x0004d764) bg_single_mobtv_pg_channel_thumb_pane

0x14a2,	// (0x0004bc36) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x14a2,	// (0x0004bc36) single_mobtv_pg_channel_thumb_pane_g1

0x14b0,	// (0x0004bc44) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x14b0,	// (0x0004bc44) single_mobtv_pg_channel_thumb_pane_g2

0x14bc,	// (0x0004bc50) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x14bc,	// (0x0004bc50) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb97,	// (0x0005a32b) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb97,	// (0x0005a32b) single_mobtv_pg_channel_thumb_pane_g

0x14c8,	// (0x0004bc5c) single_mobtv_pg_channel_thumb_pane_t1

0x14d6,	// (0x0004bc6a) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb9e,	// (0x0005a332) single_mobtv_pg_channel_thumb_pane_t

0x322a,	// (0x0004d9be) bg_single_mobtv_pg_channel_table_pane_g1

0x322a,	// (0x0004d9be) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf3c3,	// (0x00059b57) bg_single_mobtv_pg_channel_table_pane_g

0x14e4,	// (0x0004bc78) single_mobtv_pg_channel_table_pane_t1

0x14f2,	// (0x0004bc86) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfba3,	// (0x0005a337) single_mobtv_pg_channel_table_pane_t

0xbfc1,	// (0x00056755) main_mobtv_info_pane_g1_ParamLimits

0xbfc1,	// (0x00056755) main_mobtv_info_pane_g1

0xbfdd,	// (0x00056771) main_mobtv_info_pane_t1_ParamLimits

0xbfdd,	// (0x00056771) main_mobtv_info_pane_t1

0xc055,	// (0x000567e9) main_mobtv_info_pane_t2_ParamLimits

0xc055,	// (0x000567e9) main_mobtv_info_pane_t2

0x0002,

0xfbad,	// (0x0005a341) main_mobtv_info_pane_t_ParamLimits

0xfbad,	// (0x0005a341) main_mobtv_info_pane_t

0xc0e4,	// (0x00056878) wait_bar_pane_cp05

0xc0f6,	// (0x0005688a) main_mobtv_loading_pane_g1_ParamLimits

0xc0f6,	// (0x0005688a) main_mobtv_loading_pane_g1

0xc104,	// (0x00056898) main_mobtv_loading_pane_g2_ParamLimits

0xc104,	// (0x00056898) main_mobtv_loading_pane_g2

0xc110,	// (0x000568a4) main_mobtv_loading_pane_g3_ParamLimits

0xc110,	// (0x000568a4) main_mobtv_loading_pane_g3

0x0002,

0xfbb4,	// (0x0005a348) main_mobtv_loading_pane_g_ParamLimits

0xfbb4,	// (0x0005a348) main_mobtv_loading_pane_g

0x1500,	// (0x0004bc94) main_mobtv_loading_pane_t1_ParamLimits

0x1500,	// (0x0004bc94) main_mobtv_loading_pane_t1

0x1518,	// (0x0004bcac) main_mobtv_loading_pane_t2_ParamLimits

0x1518,	// (0x0004bcac) main_mobtv_loading_pane_t2

0x0001,

0xfbbb,	// (0x0005a34f) main_mobtv_loading_pane_t_ParamLimits

0xfbbb,	// (0x0005a34f) main_mobtv_loading_pane_t

0xc11e,	// (0x000568b2) wait_bar_pane_cp06_ParamLimits

0xc11e,	// (0x000568b2) wait_bar_pane_cp06

0x153c,	// (0x0004bcd0) main_mobtv_programe_curr_pane_t1

0x154a,	// (0x0004bcde) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbc0,	// (0x0005a354) main_mobtv_programe_curr_pane_t

0x1558,	// (0x0004bcec) main_mobtv_programe_next_pane_t1

0x1566,	// (0x0004bcfa) main_mobtv_programe_next_pane_t2

0x1574,	// (0x0004bd08) main_mobtv_programe_next_pane_t3

0x0002,

0xfbc5,	// (0x0005a359) main_mobtv_programe_next_pane_t

0x2888,	// (0x0004d01c) bg_popup_mobtv_noti_window_pane

0x1582,	// (0x0004bd16) popup_mobtv_noti_window_g1

0x158a,	// (0x0004bd1e) popup_mobtv_noti_window_t1

0x1598,	// (0x0004bd2c) popup_mobtv_noti_window_t2

0x0001,

0xfbcc,	// (0x0005a360) popup_mobtv_noti_window_t

0x322a,	// (0x0004d9be) bg_popup_mobtv_noti_window_pane_g1

0x5fae,	// (0x00050742) sc_clock_pane

0x5fae,	// (0x00050742) main_fs_bigclock_pane

0xb765,	// (0x00055ef9) blid2_tripm_pane_t4_ParamLimits

0xb765,	// (0x00055ef9) blid2_tripm_pane_t4

0xc12a,	// (0x000568be) sc_clock_pane_g1_ParamLimits

0xc12a,	// (0x000568be) sc_clock_pane_g1

0xc138,	// (0x000568cc) sc_clock_pane_t1_ParamLimits

0xc138,	// (0x000568cc) sc_clock_pane_t1

0xc14b,	// (0x000568df) sc_clock_pane_t2_ParamLimits

0xc14b,	// (0x000568df) sc_clock_pane_t2

0xc15d,	// (0x000568f1) sc_clock_pane_t3_ParamLimits

0xc15d,	// (0x000568f1) sc_clock_pane_t3

0x0004,

0xfbd1,	// (0x0005a365) sc_clock_pane_t_ParamLimits

0xfbd1,	// (0x0005a365) sc_clock_pane_t

0xcda0,	// (0x00057534) main_fs_bigclock_indicator_pane_ParamLimits

0xcda0,	// (0x00057534) main_fs_bigclock_indicator_pane

0xc1e0,	// (0x00056974) main_fs_bigclock_pane_g1_ParamLimits

0xc1e0,	// (0x00056974) main_fs_bigclock_pane_g1

0xcdac,	// (0x00057540) main_fs_bigclock_pane_t1_ParamLimits

0xcdac,	// (0x00057540) main_fs_bigclock_pane_t1

0xcdbe,	// (0x00057552) main_fs_bigclock_pane_t2_ParamLimits

0xcdbe,	// (0x00057552) main_fs_bigclock_pane_t2

0xcdd2,	// (0x00057566) main_fs_bigclock_pane_t3_ParamLimits

0xcdd2,	// (0x00057566) main_fs_bigclock_pane_t3

0x0002,

0xfd62,	// (0x0005a4f6) main_fs_bigclock_pane_t_ParamLimits

0xfd62,	// (0x0005a4f6) main_fs_bigclock_pane_t

0x20ff,	// (0x0004c893) main_fs_bigclock_indicator_pane_g1

0x12b6,	// (0x0004ba4a) ncim_query_content_pane_g2_ParamLimits

0x12b6,	// (0x0004ba4a) ncim_query_content_pane_g2

0x0001,

0xfb5e,	// (0x0005a2f2) ncim_query_content_pane_g_ParamLimits

0xfb5e,	// (0x0005a2f2) ncim_query_content_pane_g

0xc171,	// (0x00056905) sc_clock_pane_t4_ParamLimits

0xc171,	// (0x00056905) sc_clock_pane_t4

0x8b27,	// (0x000532bb) main_radioblah_pane

0xa349,	// (0x00054add) cell_call4_button_pane_t1_copy1_ParamLimits

0xa349,	// (0x00054add) cell_call4_button_pane_t1_copy1

0xbdb4,	// (0x00056548) main_ncimui_pane_t1_ParamLimits

0xbdb4,	// (0x00056548) main_ncimui_pane_t1

0xbdce,	// (0x00056562) main_ncimui_pane_t2_ParamLimits

0xbdce,	// (0x00056562) main_ncimui_pane_t2

0x0002,

0xfb57,	// (0x0005a2eb) main_ncimui_pane_t_ParamLimits

0xfb57,	// (0x0005a2eb) main_ncimui_pane_t

0x16dd,	// (0x0004be71) main_radioblah_anim_pane_ParamLimits

0x16dd,	// (0x0004be71) main_radioblah_anim_pane

0x16ee,	// (0x0004be82) main_radioblah_info_pane_ParamLimits

0x16ee,	// (0x0004be82) main_radioblah_info_pane

0x1702,	// (0x0004be96) main_radioblah_pane_t1_ParamLimits

0x1702,	// (0x0004be96) main_radioblah_pane_t1

0x171e,	// (0x0004beb2) main_radioblah_pane_t2_ParamLimits

0x171e,	// (0x0004beb2) main_radioblah_pane_t2

0x0003,

0xfbf2,	// (0x0005a386) main_radioblah_pane_t_ParamLimits

0xfbf2,	// (0x0005a386) main_radioblah_pane_t

0xc236,	// (0x000569ca) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc236,	// (0x000569ca) main_radioblah_rocker_ctrl_pane

0x1766,	// (0x0004befa) main_radioblah_info_pane_t1_ParamLimits

0x1766,	// (0x0004befa) main_radioblah_info_pane_t1

0xc27b,	// (0x00056a0f) main_radioblah_info_pane_t2_ParamLimits

0xc27b,	// (0x00056a0f) main_radioblah_info_pane_t2

0x0003,

0xfbfb,	// (0x0005a38f) main_radioblah_info_pane_t_ParamLimits

0xfbfb,	// (0x0005a38f) main_radioblah_info_pane_t

0x322a,	// (0x0004d9be) main_radioblah_rocker_ctrl_pane_g1

0xc32b,	// (0x00056abf) main_radioblah_rocker_ctrl_pane_g2

0xc333,	// (0x00056ac7) main_radioblah_rocker_ctrl_pane_g3

0xc33b,	// (0x00056acf) main_radioblah_rocker_ctrl_pane_g4

0xc343,	// (0x00056ad7) main_radioblah_rocker_ctrl_pane_g5

0xc34b,	// (0x00056adf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc04,	// (0x0005a398) main_radioblah_rocker_ctrl_pane_g

0xbd5b,	// (0x000564ef) main_cset_text2_pane_t1_copy1_ParamLimits

0xa3d4,	// (0x00054b68) cam4_image_uncrop_qvga_pane

0xa51b,	// (0x00054caf) vid4_image_uncrop_qcif_pane

0xb8f3,	// (0x00056087) cam6_image_uncrop_qvga_pane_ParamLimits

0xb8f3,	// (0x00056087) cam6_image_uncrop_qvga_pane

0x0fbd,	// (0x0004b751) vid6_image_uncrop_qcif_pane_ParamLimits

0x0fbd,	// (0x0004b751) vid6_image_uncrop_qcif_pane

0x2888,	// (0x0004d01c) bg_popup_preview_window_pane_cp03

0x1268,	// (0x0004b9fc) list_cset_text2_pane

0x1270,	// (0x0004ba04) main_cset6_text2_pane_g1

0x1278,	// (0x0004ba0c) main_cset6_text2_pane_t1

0xc353,	// (0x00056ae7) list_cset_text2_pane_t1_ParamLimits

0xc353,	// (0x00056ae7) list_cset_text2_pane_t1

0x8b27,	// (0x000532bb) main_radioblah_pane_ParamLimits

0xc0d0,	// (0x00056864) main_mobtv_info_pane_t3_ParamLimits

0xc0d0,	// (0x00056864) main_mobtv_info_pane_t3

0xc224,	// (0x000569b8) main_radioblah_pane_g1

0xc24f,	// (0x000569e3) main_radioblah_info_pane_g1

0xc2d0,	// (0x00056a64) main_radioblah_info_pane_t3_ParamLimits

0xc2d0,	// (0x00056a64) main_radioblah_info_pane_t3

0x7b31,	// (0x000522c5) highlight_cell_cale_month_pane_ParamLimits

0x7b31,	// (0x000522c5) highlight_cell_cale_month_pane

0x5fae,	// (0x00050742) main_phob_fisheye_pane

0xe657,	// (0x00058deb) scroll_pane_cp0031_ParamLimits

0xe657,	// (0x00058deb) scroll_pane_cp0031

0x10cb,	// (0x0004b85f) wait_bar_pane_cp08_ParamLimits

0xbaff,	// (0x00056293) cset_list_set_pane_copy1_ParamLimits

0x17a0,	// (0x0004bf34) highlight_cell_cale_month_pane_g1

0xc370,	// (0x00056b04) highlight_cell_cale_month_pane_t1

0x0ce5,	// (0x0004b479) list_gen_pane_cp01

0xed12,	// (0x000594a6) scroll_pane_01

0xc37e,	// (0x00056b12) list_single_double_fisheye_pane

0xc387,	// (0x00056b1b) list_double_fisheye_pane_g1_ParamLimits

0xc387,	// (0x00056b1b) list_double_fisheye_pane_g1

0xc393,	// (0x00056b27) list_double_fisheye_pane_g2_ParamLimits

0xc393,	// (0x00056b27) list_double_fisheye_pane_g2

0xc3a7,	// (0x00056b3b) list_double_fisheye_pane_g3_ParamLimits

0xc3a7,	// (0x00056b3b) list_double_fisheye_pane_g3

0x0004,

0xfc11,	// (0x0005a3a5) list_double_fisheye_pane_g_ParamLimits

0xfc11,	// (0x0005a3a5) list_double_fisheye_pane_g

0xc3d0,	// (0x00056b64) list_double_fisheye_pane_t1_ParamLimits

0xc3d0,	// (0x00056b64) list_double_fisheye_pane_t1

0xc3eb,	// (0x00056b7f) list_double_fisheye_pane_t2_ParamLimits

0xc3eb,	// (0x00056b7f) list_double_fisheye_pane_t2

0x0001,

0xfc1c,	// (0x0005a3b0) list_double_fisheye_pane_t_ParamLimits

0xfc1c,	// (0x0005a3b0) list_double_fisheye_pane_t

0x5fae,	// (0x00050742) main_call5_pane

0xc197,	// (0x0005692b) sc_swipe_pane_ParamLimits

0xc197,	// (0x0005692b) sc_swipe_pane

0xc419,	// (0x00056bad) call5_image_pane_ParamLimits

0xc419,	// (0x00056bad) call5_image_pane

0xc429,	// (0x00056bbd) call5_swipe_1_pane_ParamLimits

0xc429,	// (0x00056bbd) call5_swipe_1_pane

0xc435,	// (0x00056bc9) call5_swipe_2_pane_ParamLimits

0xc435,	// (0x00056bc9) call5_swipe_2_pane

0xc44f,	// (0x00056be3) popup_call5_audio_first_window_ParamLimits

0xc44f,	// (0x00056be3) popup_call5_audio_first_window

0x2fd0,	// (0x0004d764) call5_swipe_1_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) call5_swipe_1_pane_g1

0x17a8,	// (0x0004bf3c) call5_swipe_1_pane_g2_ParamLimits

0x17a8,	// (0x0004bf3c) call5_swipe_1_pane_g2

0x0001,

0xfc21,	// (0x0005a3b5) call5_swipe_1_pane_g_ParamLimits

0xfc21,	// (0x0005a3b5) call5_swipe_1_pane_g

0x17b4,	// (0x0004bf48) call5_swipe_1_pane_t1_ParamLimits

0x17b4,	// (0x0004bf48) call5_swipe_1_pane_t1

0x2fd0,	// (0x0004d764) call5_swipe_2_pane_g1_ParamLimits

0x2fd0,	// (0x0004d764) call5_swipe_2_pane_g1

0x17c9,	// (0x0004bf5d) call5_swipe_2_pane_g2_ParamLimits

0x17c9,	// (0x0004bf5d) call5_swipe_2_pane_g2

0x0001,

0xfc26,	// (0x0005a3ba) call5_swipe_2_pane_g_ParamLimits

0xfc26,	// (0x0005a3ba) call5_swipe_2_pane_g

0x17d5,	// (0x0004bf69) call5_swipe_2_pane_t1_ParamLimits

0x17d5,	// (0x0004bf69) call5_swipe_2_pane_t1

0x17ea,	// (0x0004bf7e) sc_swipe_pane_g1_ParamLimits

0x17ea,	// (0x0004bf7e) sc_swipe_pane_g1

0x17f7,	// (0x0004bf8b) sc_swipe_pane_g2_ParamLimits

0x17f7,	// (0x0004bf8b) sc_swipe_pane_g2

0x0001,

0xfc2b,	// (0x0005a3bf) sc_swipe_pane_g_ParamLimits

0xfc2b,	// (0x0005a3bf) sc_swipe_pane_g

0x1803,	// (0x0004bf97) sc_swipe_pane_t1_ParamLimits

0x1803,	// (0x0004bf97) sc_swipe_pane_t1

0x5fae,	// (0x00050742) main_cmail_launcher_pane

0xc45d,	// (0x00056bf1) aid_size_cell_cmail_l_ParamLimits

0xc45d,	// (0x00056bf1) aid_size_cell_cmail_l

0xc46b,	// (0x00056bff) grid_cmail_l_pane_ParamLimits

0xc46b,	// (0x00056bff) grid_cmail_l_pane

0xc47b,	// (0x00056c0f) cell_cmail_l_pane_ParamLimits

0xc47b,	// (0x00056c0f) cell_cmail_l_pane

0x1818,	// (0x0004bfac) cell_cmail_l_pane_g1_ParamLimits

0x1818,	// (0x0004bfac) cell_cmail_l_pane_g1

0x1824,	// (0x0004bfb8) cell_cmail_l_pane_t1_ParamLimits

0x1824,	// (0x0004bfb8) cell_cmail_l_pane_t1

0x183a,	// (0x0004bfce) cell_cmail_l_pane_t2_ParamLimits

0x183a,	// (0x0004bfce) cell_cmail_l_pane_t2

0x0001,

0xfc30,	// (0x0005a3c4) cell_cmail_l_pane_t_ParamLimits

0xfc30,	// (0x0005a3c4) cell_cmail_l_pane_t

0x2f37,	// (0x0004d6cb) grid_highlight_pane_cp018_ParamLimits

0x2f37,	// (0x0004d6cb) grid_highlight_pane_cp018

0x5e04,	// (0x00050598) main2_pane_ParamLimits

0x5e04,	// (0x00050598) main2_pane

0x30d1,	// (0x0004d865) popup_sp_fs_action_menu_bg_pane_g1

0x30d9,	// (0x0004d86d) popup_sp_fs_action_menu_bg_pane_g2

0x30e1,	// (0x0004d875) popup_sp_fs_action_menu_bg_pane_g3

0x30e9,	// (0x0004d87d) popup_sp_fs_action_menu_bg_pane_g4

0x30f1,	// (0x0004d885) popup_sp_fs_action_menu_bg_pane_g5

0x30f9,	// (0x0004d88d) popup_sp_fs_action_menu_bg_pane_g6

0x3101,	// (0x0004d895) popup_sp_fs_action_menu_bg_pane_g7

0x3109,	// (0x0004d89d) popup_sp_fs_action_menu_bg_pane_g8

0x3111,	// (0x0004d8a5) popup_sp_fs_action_menu_bg_pane_g9

0x3119,	// (0x0004d8ad) popup_sp_fs_action_menu_bg_pane_g10

0x3119,	// (0x0004d8ad) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf12b,	// (0x000598bf) popup_sp_fs_action_menu_bg_pane_g

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g3_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g3_g2

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1d9,	// (0x0005996d) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1d9,	// (0x0005996d) list_medium_line_x2_t3_g3_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g3_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g3_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g3_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g3_t2

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g3_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1e0,	// (0x00059974) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1e0,	// (0x00059974) list_medium_line_x2_t3_g3_t

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g2_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_x2_t3_g2_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g2_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g2_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g2_t2

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g2_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1e0,	// (0x00059974) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1e0,	// (0x00059974) list_medium_line_x2_t3_g2_t

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g2

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g3

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g4_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1ec,	// (0x00059980) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1ec,	// (0x00059980) list_medium_line_x2_t4_g4_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t2

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t3

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t4_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1f5,	// (0x00059989) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1f5,	// (0x00059989) list_medium_line_x2_t4_g4_t

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g2

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g3

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1ec,	// (0x00059980) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1ec,	// (0x00059980) list_medium_line_x2_t2_g4_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g4_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g4_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g4_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g4_t2

0x0001,

0xf25c,	// (0x000599f0) list_medium_line_x2_t2_g4_t_ParamLimits

0xf25c,	// (0x000599f0) list_medium_line_x2_t2_g4_t

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g3_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g3_g2

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1d9,	// (0x0005996d) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1d9,	// (0x0005996d) list_medium_line_x2_t2_g3_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g3_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g3_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g3_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g3_t2

0x0001,

0xf25c,	// (0x000599f0) list_medium_line_x2_t2_g3_t_ParamLimits

0xf25c,	// (0x000599f0) list_medium_line_x2_t2_g3_t

0x7d01,	// (0x00052495) main_sp_fs_list_pane_ParamLimits

0x7d01,	// (0x00052495) main_sp_fs_list_pane

0x7d0d,	// (0x000524a1) sp_fs_scroll_pane_ParamLimits

0x7d0d,	// (0x000524a1) sp_fs_scroll_pane

0x375a,	// (0x0004deee) list_medium_line_x2_t3_t1

0x375a,	// (0x0004deee) list_medium_line_x2_t3_t2

0x375a,	// (0x0004deee) list_medium_line_x2_t3_t3

0x0002,

0xf2a7,	// (0x00059a3b) list_medium_line_x2_t3_t

0x375a,	// (0x0004deee) list_medium_line_x3_t4_t1

0x375a,	// (0x0004deee) list_medium_line_x3_t4_t2

0x375a,	// (0x0004deee) list_medium_line_x3_t4_t3

0x375a,	// (0x0004deee) list_medium_line_x3_t4_t4

0x0003,

0xf2ae,	// (0x00059a42) list_medium_line_x3_t4_t

0x375a,	// (0x0004deee) list_medium_line_x4_t5_t1

0x375a,	// (0x0004deee) list_medium_line_x4_t5_t2

0x375a,	// (0x0004deee) list_medium_line_x4_t5_t3

0x375a,	// (0x0004deee) list_medium_line_x4_t5_t4

0x375a,	// (0x0004deee) list_medium_line_x4_t5_t5

0x0004,

0xf2b7,	// (0x00059a4b) list_medium_line_x4_t5_t

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g1

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g2

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g3

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g4_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t4_g4_g4

0x0003,

0xf1ec,	// (0x00059980) list_medium_line_t4_g4_g_ParamLimits

0xf1ec,	// (0x00059980) list_medium_line_t4_g4_g

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t1

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t2

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t3

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t4_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t4_g4_t4

0x0003,

0xf1f5,	// (0x00059989) list_medium_line_t4_g4_t_ParamLimits

0xf1f5,	// (0x00059989) list_medium_line_t4_g4_t

0x7df6,	// (0x0005258a) chi_dic_find_pane_g1

0x8b43,	// (0x000532d7) main_tport_pane

0x375a,	// (0x0004deee) list_medium_line_plain_t1

0x2fd0,	// (0x0004d764) list_medium_line_t2_g2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t2_g2_g1

0x2fd0,	// (0x0004d764) list_medium_line_t2_g2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t2_g2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_t2_g2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_t2_g2_g

0x31fc,	// (0x0004d990) list_medium_line_t2_g2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t2_g2_t1

0x31fc,	// (0x0004d990) list_medium_line_t2_g2_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t2_g2_t2

0x0001,

0xf25c,	// (0x000599f0) list_medium_line_t2_g2_t_ParamLimits

0xf25c,	// (0x000599f0) list_medium_line_t2_g2_t

0x0d2e,	// (0x0004b4c2) aid_sp_fs_list_icon_a_sm

0x0d36,	// (0x0004b4ca) aid_sp_fs_list_icon_d

0x0d3e,	// (0x0004b4d2) aid_sp_fs_text_primary

0x0d47,	// (0x0004b4db) aid_sp_fs_text_secondary

0x2888,	// (0x0004d01c) list_medium_line

0x2888,	// (0x0004d01c) list_medium_line_g2

0x2888,	// (0x0004d01c) list_medium_line_g3

0x2888,	// (0x0004d01c) list_medium_line_plain

0x2888,	// (0x0004d01c) list_medium_line_plain_t2

0x2888,	// (0x0004d01c) list_medium_line_plain_t3

0x2888,	// (0x0004d01c) list_medium_line_right_icon

0x2888,	// (0x0004d01c) list_medium_line_right_iconx2

0x2888,	// (0x0004d01c) list_medium_line_t2

0x2888,	// (0x0004d01c) list_medium_line_t2_g2

0x2888,	// (0x0004d01c) list_medium_line_t2_g3

0x2888,	// (0x0004d01c) list_medium_line_t2_right_icon

0x2888,	// (0x0004d01c) list_medium_line_t2_right_iconx2

0x2888,	// (0x0004d01c) list_medium_line_t3

0x2888,	// (0x0004d01c) list_medium_line_t3_g2

0x2888,	// (0x0004d01c) list_medium_line_t3_g3

0x2888,	// (0x0004d01c) list_medium_line_t3_right_iconx2

0x2888,	// (0x0004d01c) list_medium_line_t4_g4

0x2888,	// (0x0004d01c) list_medium_line_x2

0x2888,	// (0x0004d01c) list_medium_line_x2_t2_g2

0x2888,	// (0x0004d01c) list_medium_line_x2_t2_g3

0x2888,	// (0x0004d01c) list_medium_line_x2_t2_g4

0x2888,	// (0x0004d01c) list_medium_line_x2_t3

0x2888,	// (0x0004d01c) list_medium_line_x2_t3_g2

0x2888,	// (0x0004d01c) list_medium_line_x2_t3_g3

0x2888,	// (0x0004d01c) list_medium_line_x2_t3_g4

0x2888,	// (0x0004d01c) list_medium_line_x2_t4_g2

0x2888,	// (0x0004d01c) list_medium_line_x2_t4_g4

0x2888,	// (0x0004d01c) list_medium_line_x3

0x2888,	// (0x0004d01c) list_medium_line_x3_t4

0x2888,	// (0x0004d01c) list_medium_line_x3_t4_g4

0x2888,	// (0x0004d01c) list_medium_line_x4_t4

0x2888,	// (0x0004d01c) list_medium_line_x4_t4_g7

0x2888,	// (0x0004d01c) list_medium_line_x4_t5

0xb5ea,	// (0x00055d7e) list_single_fs_dyc_pane_ParamLimits

0xb5ea,	// (0x00055d7e) list_single_fs_dyc_pane

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g1

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g2

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g3

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g4

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g5_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g5

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g6_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x4_t4_g7_g6

0x2fde,	// (0x0004d772) list_medium_line_x4_t4_g7_g7_ParamLimits

0x2fde,	// (0x0004d772) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb38,	// (0x0005a2cc) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb38,	// (0x0005a2cc) list_medium_line_x4_t4_g7_g

0x31fc,	// (0x0004d990) list_medium_line_x4_t4_g7_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x4_t4_g7_t1

0x31fc,	// (0x0004d990) list_medium_line_x4_t4_g7_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x4_t4_g7_t2

0x31fc,	// (0x0004d990) list_medium_line_x4_t4_g7_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x4_t4_g7_t3

0x324c,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t4_ParamLimits

0x324c,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t4

0x324c,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t5_ParamLimits

0x324c,	// (0x0004d9e0) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb47,	// (0x0005a2db) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb47,	// (0x0005a2db) list_medium_line_x4_t4_g7_t

0xbd3e,	// (0x000564d2) list_single_dyc_row_pane_ParamLimits

0xbd3e,	// (0x000564d2) list_single_dyc_row_pane

0xc40d,	// (0x00056ba1) call5_gesture_pane_ParamLimits

0xc40d,	// (0x00056ba1) call5_gesture_pane

0xc441,	// (0x00056bd5) call5_windows_pane_ParamLimits

0xc441,	// (0x00056bd5) call5_windows_pane

0xc494,	// (0x00056c28) call5_swipe_1_pane_cp_ParamLimits

0xc494,	// (0x00056c28) call5_swipe_1_pane_cp

0xc4a0,	// (0x00056c34) call5_swipe_2_pane_cp_ParamLimits

0xc4a0,	// (0x00056c34) call5_swipe_2_pane_cp

0x31f4,	// (0x0004d988) call5_image_pane_cp

0xc4ac,	// (0x00056c40) popup_call5_audio_first_window_cp_ParamLimits

0xc4ac,	// (0x00056c40) popup_call5_audio_first_window_cp

0x17ea,	// (0x0004bf7e) call5_swipe_1_pane_g1_cp_ParamLimits

0x17ea,	// (0x0004bf7e) call5_swipe_1_pane_g1_cp

0x1857,	// (0x0004bfeb) call5_swipe_1_pane_g2_cp

0x1803,	// (0x0004bf97) call5_swipe_1_pane_t1_cp_ParamLimits

0x1803,	// (0x0004bf97) call5_swipe_1_pane_t1_cp

0x17ea,	// (0x0004bf7e) call5_swipe_2_pane_g1_cp_ParamLimits

0x17ea,	// (0x0004bf7e) call5_swipe_2_pane_g1_cp

0x185f,	// (0x0004bff3) call5_swipe_2_pane_g2_cp

0x1867,	// (0x0004bffb) call5_swipe_2_pane_t1_cp_ParamLimits

0x1867,	// (0x0004bffb) call5_swipe_2_pane_t1_cp

0x2f37,	// (0x0004d6cb) main_sp_fs_email_pane

0x187c,	// (0x0004c010) main_sp_fs_listscroll_pane_te

0xc4ba,	// (0x00056c4e) popup_sp_fs_action_menu_pane_ParamLimits

0xc4ba,	// (0x00056c4e) popup_sp_fs_action_menu_pane

0x322a,	// (0x0004d9be) bg_sp_fs_ctrlbar_pane_g1

0x1885,	// (0x0004c019) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x188e,	// (0x0004c022) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x1897,	// (0x0004c02b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x322a,	// (0x0004d9be) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc35,	// (0x0005a3c9) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdf38,	// (0x000586cc) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdf38,	// (0x000586cc) bg_sp_fs_ctrlbar_ddmenu_pane

0x18a0,	// (0x0004c034) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x18a0,	// (0x0004c034) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x18ac,	// (0x0004c040) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x18ac,	// (0x0004c040) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc3e,	// (0x0005a3d2) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc3e,	// (0x0005a3d2) main_sp_fs_ctrlbar_ddmenu_pane_g

0x18b8,	// (0x0004c04c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x18b8,	// (0x0004c04c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x322a,	// (0x0004d9be) list_medium_line_t2_right_icon_g1

0x375a,	// (0x0004deee) list_medium_line_t2_right_icon_t1

0x375a,	// (0x0004deee) list_medium_line_t2_right_icon_t2

0x0001,

0xfc43,	// (0x0005a3d7) list_medium_line_t2_right_icon_t

0x46ad,	// (0x0004ee41) bg_sp_fs_ctrlbar_pane_ParamLimits

0x46ad,	// (0x0004ee41) bg_sp_fs_ctrlbar_pane

0xc555,	// (0x00056ce9) main_sp_fs_ctrlbar_button_pane_cp01

0xc55d,	// (0x00056cf1) main_sp_fs_ctrlbar_ddmenu_pane

0x190a,	// (0x0004c09e) main_sp_fs_ctrlbar_pane_g1

0x1916,	// (0x0004c0aa) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc48,	// (0x0005a3dc) main_sp_fs_ctrlbar_pane_g

0xc599,	// (0x00056d2d) main_sp_fs_ctrlbar_pane_t1

0xc5d4,	// (0x00056d68) main_sp_fs_ctrlbar_pane

0xc5ea,	// (0x00056d7e) main_sp_fs_listscroll_pane_te_cp01

0xc5fb,	// (0x00056d8f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc5fb,	// (0x00056d8f) popup_sp_fs_action_menu_pane_cp01

0x2f37,	// (0x0004d6cb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x2f37,	// (0x0004d6cb) bg_sp_fs_highlight_list_pane_cp01

0x193d,	// (0x0004c0d1) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x193d,	// (0x0004c0d1) sp_fs_action_menu_list_gene_pane_g1

0x194c,	// (0x0004c0e0) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x194c,	// (0x0004c0e0) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc56,	// (0x0005a3ea) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc56,	// (0x0005a3ea) sp_fs_action_menu_list_gene_pane_g

0x1959,	// (0x0004c0ed) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x1959,	// (0x0004c0ed) sp_fs_action_menu_list_gene_pane_t1

0x1971,	// (0x0004c105) sp_fs_action_menu_list_gene_pane_ParamLimits

0x1971,	// (0x0004c105) sp_fs_action_menu_list_gene_pane

0x1990,	// (0x0004c124) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x1990,	// (0x0004c124) popup_sp_fs_action_menu_bg_pane

0x199e,	// (0x0004c132) sp_fs_action_menu_list_pane_ParamLimits

0x199e,	// (0x0004c132) sp_fs_action_menu_list_pane

0xc61b,	// (0x00056daf) sp_fs_scroll_pane_cp01_ParamLimits

0xc61b,	// (0x00056daf) sp_fs_scroll_pane_cp01

0x375a,	// (0x0004deee) list_medium_line_plain_t2_t1

0x375a,	// (0x0004deee) list_medium_line_plain_t2_t2

0x0001,

0xfc43,	// (0x0005a3d7) list_medium_line_plain_t2_t

0x375a,	// (0x0004deee) list_medium_line_plain_t3_t1

0x375a,	// (0x0004deee) list_medium_line_plain_t3_t2

0x375a,	// (0x0004deee) list_medium_line_plain_t3_t3

0x0002,

0xf2a7,	// (0x00059a3b) list_medium_line_plain_t3_t

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g2_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_x2_t2_g2_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g2_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g2_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t2_g2_t2

0x0001,

0xf25c,	// (0x000599f0) list_medium_line_x2_t2_g2_t_ParamLimits

0xf25c,	// (0x000599f0) list_medium_line_x2_t2_g2_t

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g2_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_x2_t4_g2_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t2

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t3

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t4_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1f5,	// (0x00059989) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1f5,	// (0x00059989) list_medium_line_x2_t4_g2_t

0x322a,	// (0x0004d9be) list_medium_line_t3_right_iconx2_g1

0x322a,	// (0x0004d9be) list_medium_line_t3_right_iconx2_g2

0x322a,	// (0x0004d9be) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3c8,	// (0x00059b5c) list_medium_line_t3_right_iconx2_g

0x375a,	// (0x0004deee) list_medium_line_t3_right_iconx2_t1

0x375a,	// (0x0004deee) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc43,	// (0x0005a3d7) list_medium_line_t3_right_iconx2_t

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g1

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g2

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g3

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1ec,	// (0x00059980) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1ec,	// (0x00059980) list_medium_line_x3_t4_g4_g

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t1

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t2

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t3

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t4_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1f5,	// (0x00059989) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1f5,	// (0x00059989) list_medium_line_x3_t4_g4_t

0xc641,	// (0x00056dd5) list_single_dyc_row_text_pane_t1_ParamLimits

0xc641,	// (0x00056dd5) list_single_dyc_row_text_pane_t1

0xc678,	// (0x00056e0c) list_single_dyc_row_text_pane_t2_ParamLimits

0xc678,	// (0x00056e0c) list_single_dyc_row_text_pane_t2

0x19be,	// (0x0004c152) list_single_dyc_row_text_pane_t3_ParamLimits

0x19be,	// (0x0004c152) list_single_dyc_row_text_pane_t3

0x0005,

0xfc5b,	// (0x0005a3ef) list_single_dyc_row_text_pane_t_ParamLimits

0xfc5b,	// (0x0005a3ef) list_single_dyc_row_text_pane_t

0x19e2,	// (0x0004c176) list_single_dyc_row_pane_g1_ParamLimits

0x19e2,	// (0x0004c176) list_single_dyc_row_pane_g1

0x19ee,	// (0x0004c182) list_single_dyc_row_pane_g2_ParamLimits

0x19ee,	// (0x0004c182) list_single_dyc_row_pane_g2

0x19fa,	// (0x0004c18e) list_single_dyc_row_pane_g3_ParamLimits

0x19fa,	// (0x0004c18e) list_single_dyc_row_pane_g3

0x1a06,	// (0x0004c19a) list_single_dyc_row_pane_g4_ParamLimits

0x1a06,	// (0x0004c19a) list_single_dyc_row_pane_g4

0x0003,

0xfc68,	// (0x0005a3fc) list_single_dyc_row_pane_g_ParamLimits

0xfc68,	// (0x0005a3fc) list_single_dyc_row_pane_g

0x1a12,	// (0x0004c1a6) list_single_dyc_row_text_pane_ParamLimits

0x1a12,	// (0x0004c1a6) list_single_dyc_row_text_pane

0x2888,	// (0x0004d01c) bg_sp_fs_scroll_pane

0x1a31,	// (0x0004c1c5) thumb_sp_fs_scroll_pane

0x2fd0,	// (0x0004d764) list_medium_line_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_g1

0x31fc,	// (0x0004d990) list_medium_line_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t1

0x2fd0,	// (0x0004d764) list_medium_line_x2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_x2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_x2_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t1

0x2fd0,	// (0x0004d764) list_medium_line_x3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x3_g1

0xeba9,	// (0x0005933d) list_medium_line_x3_g2_ParamLimits

0xeba9,	// (0x0005933d) list_medium_line_x3_g2

0x0001,

0xfc71,	// (0x0005a405) list_medium_line_x3_g_ParamLimits

0xfc71,	// (0x0005a405) list_medium_line_x3_g

0x1a3a,	// (0x0004c1ce) list_medium_line_x3_t1_ParamLimits

0x1a3a,	// (0x0004c1ce) list_medium_line_x3_t1

0x1a4e,	// (0x0004c1e2) thumb_sp_fs_scroll_pane_g1

0x1a57,	// (0x0004c1eb) thumb_sp_fs_scroll_pane_g2

0x1a60,	// (0x0004c1f4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc76,	// (0x0005a40a) thumb_sp_fs_scroll_pane_g

0x1a4e,	// (0x0004c1e2) bg_sp_fs_scroll_pane_g1

0x1a57,	// (0x0004c1eb) bg_sp_fs_scroll_pane_g2

0x1a60,	// (0x0004c1f4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc76,	// (0x0005a40a) bg_sp_fs_scroll_pane_g

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g1

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g2

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g3

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1ec,	// (0x00059980) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1ec,	// (0x00059980) list_medium_line_x2_t3_g4_g

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g4_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g4_t1

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g4_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g4_t2

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g4_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1e0,	// (0x00059974) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1e0,	// (0x00059974) list_medium_line_x2_t3_g4_t

0x2fd0,	// (0x0004d764) list_medium_line_g2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_g2_g1

0x2fd0,	// (0x0004d764) list_medium_line_g2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_g2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_g2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_g2_g

0x31fc,	// (0x0004d990) list_medium_line_g2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_g2_t1

0x2fd0,	// (0x0004d764) list_medium_line_t3_g2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t3_g2_g1

0x2fd0,	// (0x0004d764) list_medium_line_t3_g2_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t3_g2_g2

0x0001,

0xf1e7,	// (0x0005997b) list_medium_line_t3_g2_g_ParamLimits

0xf1e7,	// (0x0005997b) list_medium_line_t3_g2_g

0x31fc,	// (0x0004d990) list_medium_line_t3_g2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_g2_t1

0x31fc,	// (0x0004d990) list_medium_line_t3_g2_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_g2_t2

0x31fc,	// (0x0004d990) list_medium_line_t3_g2_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_g2_t3

0x0002,

0xf1e0,	// (0x00059974) list_medium_line_t3_g2_t_ParamLimits

0xf1e0,	// (0x00059974) list_medium_line_t3_g2_t

0x322a,	// (0x0004d9be) list_medium_line_right_icon_g1

0x375a,	// (0x0004deee) list_medium_line_right_icon_t1

0x2fd0,	// (0x0004d764) list_medium_line_t2_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t2_g1

0x31fc,	// (0x0004d990) list_medium_line_t2_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t2_t1

0x31fc,	// (0x0004d990) list_medium_line_t2_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t2_t2

0x0001,

0xf25c,	// (0x000599f0) list_medium_line_t2_t_ParamLimits

0xf25c,	// (0x000599f0) list_medium_line_t2_t

0x2fd0,	// (0x0004d764) list_medium_line_t3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t3_g1

0x31fc,	// (0x0004d990) list_medium_line_t3_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_t1

0x31fc,	// (0x0004d990) list_medium_line_t3_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_t2

0x31fc,	// (0x0004d990) list_medium_line_t3_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_t3

0x0002,

0xf1e0,	// (0x00059974) list_medium_line_t3_t_ParamLimits

0xf1e0,	// (0x00059974) list_medium_line_t3_t

0x2fd0,	// (0x0004d764) list_medium_line_g3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_g3_g1

0x2fd0,	// (0x0004d764) list_medium_line_g3_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_g3_g2

0x2fd0,	// (0x0004d764) list_medium_line_g3_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_g3_g3

0x0002,

0xf1d9,	// (0x0005996d) list_medium_line_g3_g_ParamLimits

0xf1d9,	// (0x0005996d) list_medium_line_g3_g

0x31fc,	// (0x0004d990) list_medium_line_g3_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_g3_t1

0x2fd0,	// (0x0004d764) list_medium_line_t2_g3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t2_g3_g1

0x2fd0,	// (0x0004d764) list_medium_line_t2_g3_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t2_g3_g2

0x2fd0,	// (0x0004d764) list_medium_line_t2_g3_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t2_g3_g3

0x0002,

0xf1d9,	// (0x0005996d) list_medium_line_t2_g3_g_ParamLimits

0xf1d9,	// (0x0005996d) list_medium_line_t2_g3_g

0x31fc,	// (0x0004d990) list_medium_line_t2_g3_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t2_g3_t1

0x31fc,	// (0x0004d990) list_medium_line_t2_g3_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t2_g3_t2

0x0001,

0xf25c,	// (0x000599f0) list_medium_line_t2_g3_t_ParamLimits

0xf25c,	// (0x000599f0) list_medium_line_t2_g3_t

0x2fd0,	// (0x0004d764) list_medium_line_t3_g3_g1_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t3_g3_g1

0x2fd0,	// (0x0004d764) list_medium_line_t3_g3_g2_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t3_g3_g2

0x2fd0,	// (0x0004d764) list_medium_line_t3_g3_g3_ParamLimits

0x2fd0,	// (0x0004d764) list_medium_line_t3_g3_g3

0x0002,

0xf1d9,	// (0x0005996d) list_medium_line_t3_g3_g_ParamLimits

0xf1d9,	// (0x0005996d) list_medium_line_t3_g3_g

0x31fc,	// (0x0004d990) list_medium_line_t3_g3_t1_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_g3_t1

0x31fc,	// (0x0004d990) list_medium_line_t3_g3_t2_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_g3_t2

0x31fc,	// (0x0004d990) list_medium_line_t3_g3_t3_ParamLimits

0x31fc,	// (0x0004d990) list_medium_line_t3_g3_t3

0x0002,

0xf1e0,	// (0x00059974) list_medium_line_t3_g3_t_ParamLimits

0xf1e0,	// (0x00059974) list_medium_line_t3_g3_t

0x322a,	// (0x0004d9be) list_medium_line_right_iconx2_g1

0x322a,	// (0x0004d9be) list_medium_line_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00059b57) list_medium_line_right_iconx2_g

0x375a,	// (0x0004deee) list_medium_line_right_iconx2_t1

0x322a,	// (0x0004d9be) list_medium_line_t2_right_iconx2_g1

0x322a,	// (0x0004d9be) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf3c3,	// (0x00059b57) list_medium_line_t2_right_iconx2_g

0x375a,	// (0x0004deee) list_medium_line_t2_right_iconx2_t1

0x375a,	// (0x0004deee) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc43,	// (0x0005a3d7) list_medium_line_t2_right_iconx2_t

0x375a,	// (0x0004deee) list_medium_line_x4_t4_t1

0x375a,	// (0x0004deee) list_medium_line_x4_t4_t2

0x375a,	// (0x0004deee) list_medium_line_x4_t4_t3

0x375a,	// (0x0004deee) list_medium_line_x4_t4_t4

0x0003,

0xf2ae,	// (0x00059a42) list_medium_line_x4_t4_t

0xc7c5,	// (0x00056f59) tport_appsw_pane_ParamLimits

0xc7c5,	// (0x00056f59) tport_appsw_pane

0xc7d3,	// (0x00056f67) tport_contact_pane_ParamLimits

0xc7d3,	// (0x00056f67) tport_contact_pane

0xc7e3,	// (0x00056f77) tport_listscroll_pane_ParamLimits

0xc7e3,	// (0x00056f77) tport_listscroll_pane

0xc7f3,	// (0x00056f87) cell_tport_appsw_pane_ParamLimits

0xc7f3,	// (0x00056f87) cell_tport_appsw_pane

0x2fde,	// (0x0004d772) tport_appsw_pane_g1_ParamLimits

0x2fde,	// (0x0004d772) tport_appsw_pane_g1

0x1a69,	// (0x0004c1fd) tport_contact_pane_g1

0x133c,	// (0x0004bad0) tport_contact_pane_t1

0x1a72,	// (0x0004c206) tport_contact_pane_t2

0x0001,

0xfc7d,	// (0x0005a411) tport_contact_pane_t

0x1a80,	// (0x0004c214) list_tport_pane

0x1a89,	// (0x0004c21d) scroll_pane_cp_030

0xc826,	// (0x00056fba) cell_tport_appsw_pane_g1

0xc836,	// (0x00056fca) cell_tport_appsw_pane_t1

0xc844,	// (0x00056fd8) grid_highlight_pane_cp019

0xc84c,	// (0x00056fe0) list_tport_double_graphic_pane_ParamLimits

0xc84c,	// (0x00056fe0) list_tport_double_graphic_pane

0x2f37,	// (0x0004d6cb) list_highlight_pane_cp023_ParamLimits

0x2f37,	// (0x0004d6cb) list_highlight_pane_cp023

0xc85d,	// (0x00056ff1) list_tport_double_graphic_pane_g1_ParamLimits

0xc85d,	// (0x00056ff1) list_tport_double_graphic_pane_g1

0xc86a,	// (0x00056ffe) list_tport_double_graphic_pane_t1_ParamLimits

0xc86a,	// (0x00056ffe) list_tport_double_graphic_pane_t1

0xc87f,	// (0x00057013) list_tport_double_graphic_pane_t2_ParamLimits

0xc87f,	// (0x00057013) list_tport_double_graphic_pane_t2

0x0001,

0xfc89,	// (0x0005a41d) list_tport_double_graphic_pane_t_ParamLimits

0xfc89,	// (0x0005a41d) list_tport_double_graphic_pane_t

0x2888,	// (0x0004d01c) main_cale_note_pane

0xa786,	// (0x00054f1a) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa786,	// (0x00054f1a) cell_vitu2_function_top_wide_pane_cp01

0xc0e4,	// (0x00056878) wait_bar_pane_cp05_ParamLimits

0x2f37,	// (0x0004d6cb) listscroll_cmail_pane

0x1a92,	// (0x0004c226) list_cmail_pane

0xc891,	// (0x00057025) list_cmail_body_pane

0xc8b8,	// (0x0005704c) list_single_cmail_header_caption_pane

0xc8e1,	// (0x00057075) list_single_cmail_header_detail_pane_ParamLimits

0xc8e1,	// (0x00057075) list_single_cmail_header_detail_pane

0x1aa2,	// (0x0004c236) list_single_cmail_header_caption_pane_t1

0xc917,	// (0x000570ab) list_single_cmail_header_detail_pane_g1_ParamLimits

0xc917,	// (0x000570ab) list_single_cmail_header_detail_pane_g1

0x1ab9,	// (0x0004c24d) list_single_cmail_header_detail_pane_g2_ParamLimits

0x1ab9,	// (0x0004c24d) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc8e,	// (0x0005a422) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc8e,	// (0x0005a422) list_single_cmail_header_detail_pane_g

0x1ad2,	// (0x0004c266) list_single_cmail_header_detail_pane_t1_ParamLimits

0x1ad2,	// (0x0004c266) list_single_cmail_header_detail_pane_t1

0x1b32,	// (0x0004c2c6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x1b32,	// (0x0004c2c6) list_single_cmail_header_editor_pane_bg

0x1499,	// (0x0004bc2d) list_cmail_body_pane_g1

0x1b49,	// (0x0004c2dd) list_cmail_body_pane_t1

0xebf8,	// (0x0005938c) list_single_cmail_header_editor_pane_bg_g1

0x344f,	// (0x0004dbe3) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec08,	// (0x0005939c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec00,	// (0x00059394) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee26,	// (0x000595ba) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec28,	// (0x000593bc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec18,	// (0x000593ac) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec20,	// (0x000593b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x342f,	// (0x0004dbc3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xc92d,	// (0x000570c1) calenote_gesture_pane_ParamLimits

0xc92d,	// (0x000570c1) calenote_gesture_pane

0xc947,	// (0x000570db) calenote_window_pane_ParamLimits

0xc947,	// (0x000570db) calenote_window_pane

0x1b57,	// (0x0004c2eb) popup_note_window_cp01

0xc95f,	// (0x000570f3) calenote_swipe_1_pane_ParamLimits

0xc95f,	// (0x000570f3) calenote_swipe_1_pane

0xc4a0,	// (0x00056c34) calenote_swipe_2_pane_ParamLimits

0xc4a0,	// (0x00056c34) calenote_swipe_2_pane

0x17ea,	// (0x0004bf7e) calenote_swipe_1_pane_g1_ParamLimits

0x17ea,	// (0x0004bf7e) calenote_swipe_1_pane_g1

0x17f7,	// (0x0004bf8b) calenote_swipe_1_pane_g2_ParamLimits

0x17f7,	// (0x0004bf8b) calenote_swipe_1_pane_g2

0x0001,

0xfc2b,	// (0x0005a3bf) calenote_swipe_1_pane_g_ParamLimits

0xfc2b,	// (0x0005a3bf) calenote_swipe_1_pane_g

0x1b69,	// (0x0004c2fd) calenote_swipe_1_pane_t1_ParamLimits

0x1b69,	// (0x0004c2fd) calenote_swipe_1_pane_t1

0x17ea,	// (0x0004bf7e) calenote_swipe_2_pane_g1_ParamLimits

0x17ea,	// (0x0004bf7e) calenote_swipe_2_pane_g1

0x1b88,	// (0x0004c31c) calenote_swipe_2_pane_g2_ParamLimits

0x1b88,	// (0x0004c31c) calenote_swipe_2_pane_g2

0x0001,

0xfc9a,	// (0x0005a42e) calenote_swipe_2_pane_g_ParamLimits

0xfc9a,	// (0x0005a42e) calenote_swipe_2_pane_g

0x1b94,	// (0x0004c328) calenote_swipe_2_pane_t1_ParamLimits

0x1b94,	// (0x0004c328) calenote_swipe_2_pane_t1

0x2888,	// (0x0004d01c) main_mup_navstr_pane

0x95dc,	// (0x00053d70) main_mup3_pane_t7_ParamLimits

0x95dc,	// (0x00053d70) main_mup3_pane_t7

0x9e07,	// (0x0005459b) main_mp4_pane_g6_ParamLimits

0x9e07,	// (0x0005459b) main_mp4_pane_g6

0xa1a5,	// (0x00054939) main_image3_pane_t4_ParamLimits

0xa1a5,	// (0x00054939) main_image3_pane_t4

0xc972,	// (0x00057106) popup_navstr_preview_pane_ParamLimits

0xc972,	// (0x00057106) popup_navstr_preview_pane

0xc97e,	// (0x00057112) scroll_navstr_pane_ParamLimits

0xc97e,	// (0x00057112) scroll_navstr_pane

0x2888,	// (0x0004d01c) bg_popup_preview_window_pane_cp04

0x1bbb,	// (0x0004c34f) popup_navstr_preview_pane_t1

0xc98a,	// (0x0005711e) scroll_navstr_pane_g1_ParamLimits

0xc98a,	// (0x0005711e) scroll_navstr_pane_g1

0xc997,	// (0x0005712b) scroll_navstr_pane_t1_ParamLimits

0xc997,	// (0x0005712b) scroll_navstr_pane_t1

0x1b60,	// (0x0004c2f4) bg_button_pane_cp014

0x1b60,	// (0x0004c2f4) bg_button_pane_cp030

0xc3b3,	// (0x00056b47) list_double_fisheye_pane_g4_ParamLimits

0xc3b3,	// (0x00056b47) list_double_fisheye_pane_g4

0xc3bf,	// (0x00056b53) list_double_fisheye_pane_g5_ParamLimits

0xc3bf,	// (0x00056b53) list_double_fisheye_pane_g5

0x4723,	// (0x0004eeb7) sp_fs_scroll_pane_cp03

0x190a,	// (0x0004c09e) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x1916,	// (0x0004c0aa) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc48,	// (0x0005a3dc) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc599,	// (0x00056d2d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x1a9a,	// (0x0004c22e) sp_fs_scroll_pane_cp02

0x313c,	// (0x0004d8d0) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x313c,	// (0x0004d8d0) popup_sp_fs_calendar_preview_list_single_pane

0x2888,	// (0x0004d01c) main_cam6_pano_pane

0x8b27,	// (0x000532bb) main_mup3_pane_ParamLimits

0x2888,	// (0x0004d01c) main_phacti_pane

0xbfb9,	// (0x0005674d) bg_button_pane_cp11

0xbfd1,	// (0x00056765) main_mobtv_info_pane_g2_ParamLimits

0xbfd1,	// (0x00056765) main_mobtv_info_pane_g2

0x0001,

0xfba8,	// (0x0005a33c) main_mobtv_info_pane_g_ParamLimits

0xfba8,	// (0x0005a33c) main_mobtv_info_pane_g

0xc183,	// (0x00056917) sc_clock_pane_t5_ParamLimits

0xc183,	// (0x00056917) sc_clock_pane_t5

0xc224,	// (0x000569b8) main_radioblah_pane_g1_ParamLimits

0x1736,	// (0x0004beca) main_radioblah_pane_t3_ParamLimits

0x1736,	// (0x0004beca) main_radioblah_pane_t3

0x174e,	// (0x0004bee2) main_radioblah_pane_t4_ParamLimits

0x174e,	// (0x0004bee2) main_radioblah_pane_t4

0xc242,	// (0x000569d6) main_radioblah_text_pane_ParamLimits

0xc242,	// (0x000569d6) main_radioblah_text_pane

0xc24f,	// (0x000569e3) main_radioblah_info_pane_g1_ParamLimits

0xc2e4,	// (0x00056a78) main_radioblah_info_pane_t4_ParamLimits

0xc2e4,	// (0x00056a78) main_radioblah_info_pane_t4

0x2f37,	// (0x0004d6cb) main_sp_fs_calendar_pane

0xc9a9,	// (0x0005713d) main_phacti_pane_g1

0xc9b1,	// (0x00057145) phacti_note_pane_ParamLimits

0xc9b1,	// (0x00057145) phacti_note_pane

0x1bd2,	// (0x0004c366) phacti_term_pane_ParamLimits

0x1bd2,	// (0x0004c366) phacti_term_pane

0x1be7,	// (0x0004c37b) phacti_note_pane_t1_ParamLimits

0x1be7,	// (0x0004c37b) phacti_note_pane_t1

0x1bfe,	// (0x0004c392) phacti_term_pane_g1

0x1c06,	// (0x0004c39a) phacti_term_pane_t1_ParamLimits

0x1c06,	// (0x0004c39a) phacti_term_pane_t1

0x1c30,	// (0x0004c3c4) popup_sp_fs_calendar_preview_list_single_pane_g1

0x31db,	// (0x0004d96f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfca4,	// (0x0005a438) popup_sp_fs_calendar_preview_list_single_pane_g

0x1c38,	// (0x0004c3cc) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x1c38,	// (0x0004c3cc) popup_sp_fs_calendar_preview_list_single_pane_t1

0x1c4e,	// (0x0004c3e2) aid_popup_sp_fs_bg_corner_pane

0x322a,	// (0x0004d9be) popup_sp_fs_calendar_preview_bg_pane_g1

0x2888,	// (0x0004d01c) popup_sp_fs_calendar_preview_bg_pane

0x1c56,	// (0x0004c3ea) popup_sp_fs_calendar_preview_list_pane

0x46ad,	// (0x0004ee41) bg_main_sp_fs_cale_pane_ParamLimits

0x46ad,	// (0x0004ee41) bg_main_sp_fs_cale_pane

0x1c67,	// (0x0004c3fb) listscroll_cale_mrui_pane_ParamLimits

0x1c67,	// (0x0004c3fb) listscroll_cale_mrui_pane

0x1c7c,	// (0x0004c410) listscroll_sp_fs_schedule_track_pane

0x1c85,	// (0x0004c419) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x1c85,	// (0x0004c419) main_sp_fs_ctrlbar_pane_cp01

0x1c98,	// (0x0004c42c) main_sp_fs_ribbon_pane

0x1ca0,	// (0x0004c434) popup_sp_fs_cale_preview_window

0xca14,	// (0x000571a8) list_single_sp_fs_schedule_track_pane_ParamLimits

0xca14,	// (0x000571a8) list_single_sp_fs_schedule_track_pane

0x28b2,	// (0x0004d046) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x28b2,	// (0x0004d046) bg_sp_fs_highlight_list_pane_cp03

0xca34,	// (0x000571c8) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xca34,	// (0x000571c8) list_single_sp_fs_schedule_track_pane_g1

0xca40,	// (0x000571d4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xca40,	// (0x000571d4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfca9,	// (0x0005a43d) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfca9,	// (0x0005a43d) list_single_sp_fs_schedule_track_pane_g

0xca4c,	// (0x000571e0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xca4c,	// (0x000571e0) list_single_sp_fs_schedule_track_pane_t1

0xca64,	// (0x000571f8) sp_fs_schedule_track_pane_ParamLimits

0xca64,	// (0x000571f8) sp_fs_schedule_track_pane

0x1cb2,	// (0x0004c446) sp_fs_schedule_track_pane_g1

0x1cba,	// (0x0004c44e) sp_fs_schedule_track_pane_g2

0x1cc2,	// (0x0004c456) sp_fs_schedule_track_pane_g3

0x1cca,	// (0x0004c45e) sp_fs_schedule_track_pane_g4

0x1cd2,	// (0x0004c466) sp_fs_schedule_track_pane_g5

0x0004,

0xfcae,	// (0x0005a442) sp_fs_schedule_track_pane_g

0xebf8,	// (0x0005938c) bg_sp_fs_schedule_viewer_highlight_g1

0x344f,	// (0x0004dbe3) bg_sp_fs_schedule_viewer_highlight_g2

0xec00,	// (0x00059394) bg_sp_fs_schedule_viewer_highlight_g3

0xec08,	// (0x0005939c) bg_sp_fs_schedule_viewer_highlight_g4

0xee26,	// (0x000595ba) bg_sp_fs_schedule_viewer_highlight_g5

0xec18,	// (0x000593ac) bg_sp_fs_schedule_viewer_highlight_g6

0xec20,	// (0x000593b4) bg_sp_fs_schedule_viewer_highlight_g7

0xec28,	// (0x000593bc) bg_sp_fs_schedule_viewer_highlight_g8

0x342f,	// (0x0004dbc3) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfcb9,	// (0x0005a44d) bg_sp_fs_schedule_viewer_highlight_g

0x2888,	// (0x0004d01c) bg_main_sp_fs_ribbon_pane

0xca74,	// (0x00057208) main_sp_fs_ribbon_pane_g1

0x1cda,	// (0x0004c46e) main_sp_fs_ribbon_pane_t1

0xca7d,	// (0x00057211) main_sp_fs_ribbon_pane_t2

0x1ce9,	// (0x0004c47d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfccc,	// (0x0005a460) main_sp_fs_ribbon_pane_t

0x1cf8,	// (0x0004c48c) main_sp_fs_ribbon_scheduler_pane

0x1d00,	// (0x0004c494) bg_main_sp_fs_ribbon_pane_g1

0x1d09,	// (0x0004c49d) bg_main_sp_fs_ribbon_pane_g2

0x1d12,	// (0x0004c4a6) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfcd3,	// (0x0005a467) bg_main_sp_fs_ribbon_pane_g

0x1d1a,	// (0x0004c4ae) main_sp_fs_ribbon_scheduler_pane_g1

0x1d23,	// (0x0004c4b7) main_sp_fs_ribbon_scheduler_pane_g2

0x1d2c,	// (0x0004c4c0) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfcda,	// (0x0005a46e) main_sp_fs_ribbon_scheduler_pane_g

0x1d35,	// (0x0004c4c9) list_cale_mrui_pane

0xca8c,	// (0x00057220) sp_fs_scroll_pane_cp07_ParamLimits

0xca8c,	// (0x00057220) sp_fs_scroll_pane_cp07

0xcaa8,	// (0x0005723c) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcaa8,	// (0x0005723c) bg_sp_fs_schedule_viewer_highlight

0x1d42,	// (0x0004c4d6) list_single_sp_fs_schedule_track_pane_cp01

0x1d4a,	// (0x0004c4de) list_sp_fs_schedule_track_pane

0x1d52,	// (0x0004c4e6) sp_fs_scroll_pane_cp06_ParamLimits

0x1d52,	// (0x0004c4e6) sp_fs_scroll_pane_cp06

0x322a,	// (0x0004d9be) bgmain_sp_fs_calendar_pane_g1

0xcab5,	// (0x00057249) list_single_cale_mrui_pane_ParamLimits

0xcab5,	// (0x00057249) list_single_cale_mrui_pane

0x1d64,	// (0x0004c4f8) list_single_cale_mrui_row_pane_ParamLimits

0x1d64,	// (0x0004c4f8) list_single_cale_mrui_row_pane

0x1d71,	// (0x0004c505) list_single_cale_mrui_row_pane_g1_ParamLimits

0x1d71,	// (0x0004c505) list_single_cale_mrui_row_pane_g1

0x1db6,	// (0x0004c54a) list_single_cale_mrui_row_pane_t1_ParamLimits

0x1db6,	// (0x0004c54a) list_single_cale_mrui_row_pane_t1

0xcae3,	// (0x00057277) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcae3,	// (0x00057277) list_single_cale_mrui_row_pane_t2

0x1dc8,	// (0x0004c55c) list_single_cale_mrui_row_pane_t3_ParamLimits

0x1dc8,	// (0x0004c55c) list_single_cale_mrui_row_pane_t3

0x1df7,	// (0x0004c58b) list_single_cale_mrui_row_pane_t4_ParamLimits

0x1df7,	// (0x0004c58b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfce8,	// (0x0005a47c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfce8,	// (0x0005a47c) list_single_cale_mrui_row_pane_t

0xcb49,	// (0x000572dd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xcb49,	// (0x000572dd) list_single_cmail_header_editor_pane_bg_cp01

0xcb69,	// (0x000572fd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xcb69,	// (0x000572fd) list_single_cmail_header_editor_pane_bg_cp02

0xcb85,	// (0x00057319) main_radioblah_text_pane_t1_ParamLimits

0xcb85,	// (0x00057319) main_radioblah_text_pane_t1

0x1e26,	// (0x0004c5ba) cam6_indi_pane_cp01

0x1e2e,	// (0x0004c5c2) cam6_mode_pane_cp01

0x1e36,	// (0x0004c5ca) cam6_pano_pane

0x1e3f,	// (0x0004c5d3) cam6_zoom_pane_cp01

0x1e47,	// (0x0004c5db) cam6_pano_image_pane

0x1e52,	// (0x0004c5e6) cam6_pano_pane_g1

0x1499,	// (0x0004bc2d) cam6_pano_pane_g2

0x1e5b,	// (0x0004c5ef) cam6_pano_pane_g3

0x1e64,	// (0x0004c5f8) cam6_pano_pane_g4

0xe8d5,	// (0x00059069) cam6_pano_pane_g5

0x1e6d,	// (0x0004c601) cam6_pano_pane_g6

0x1e77,	// (0x0004c60b) cam6_pano_pane_g7

0x1e7f,	// (0x0004c613) cam6_pano_pane_g8

0x1e88,	// (0x0004c61c) cam6_pano_pane_g9

0x0008,

0xfcf1,	// (0x0005a485) cam6_pano_pane_g

0x2888,	// (0x0004d01c) main_browser_tag_pane

0x1bb3,	// (0x0004c347) grid_navstr_albumart_pane

0x1e93,	// (0x0004c627) cell_navstr_albumart_pane_ParamLimits

0x1e93,	// (0x0004c627) cell_navstr_albumart_pane

0x1eb3,	// (0x0004c647) cell_navstr_albumart_pane_g1

0x4e5a,	// (0x0004f5ee) cell_navstr_albumart_pane_g2

0x4e6a,	// (0x0004f5fe) cell_navstr_albumart_pane_g3

0x4e62,	// (0x0004f5f6) cell_navstr_albumart_pane_g4

0x0003,

0xfd04,	// (0x0005a498) cell_navstr_albumart_pane_g

0xcba0,	// (0x00057334) bt_list_pane_ParamLimits

0xcba0,	// (0x00057334) bt_list_pane

0xcbc0,	// (0x00057354) bt_list_pane_t1

0xcbcf,	// (0x00057363) bt_list_pane_t2

0x0001,

0xfd0d,	// (0x0005a4a1) bt_list_pane_t

0x2888,	// (0x0004d01c) main_cale_prevew_pane

0xcbde,	// (0x00057372) popup_cale_preview_window_ParamLimits

0xcbde,	// (0x00057372) popup_cale_preview_window

0x2f37,	// (0x0004d6cb) bg_popup_preview_window_pane_cp05_ParamLimits

0x2f37,	// (0x0004d6cb) bg_popup_preview_window_pane_cp05

0x1ebb,	// (0x0004c64f) list_cale_preview_pane_ParamLimits

0x1ebb,	// (0x0004c64f) list_cale_preview_pane

0xcbf7,	// (0x0005738b) list_double_cale_preview_pane_ParamLimits

0xcbf7,	// (0x0005738b) list_double_cale_preview_pane

0xcc09,	// (0x0005739d) list_single_cale_preview_pane_ParamLimits

0xcc09,	// (0x0005739d) list_single_cale_preview_pane

0xcc1f,	// (0x000573b3) list_single_cale_preview_pane_g1

0xcc27,	// (0x000573bb) list_single_cale_preview_pane_t1_ParamLimits

0xcc27,	// (0x000573bb) list_single_cale_preview_pane_t1

0xcc3c,	// (0x000573d0) list_double_cale_preview_pane_g1

0xcc44,	// (0x000573d8) list_double_cale_preview_pane_t1_ParamLimits

0xcc44,	// (0x000573d8) list_double_cale_preview_pane_t1

0xcc59,	// (0x000573ed) list_double_cale_preview_pane_t2_ParamLimits

0xcc59,	// (0x000573ed) list_double_cale_preview_pane_t2

0x0001,

0xfd12,	// (0x0005a4a6) list_double_cale_preview_pane_t_ParamLimits

0xfd12,	// (0x0005a4a6) list_double_cale_preview_pane_t

0x2888,	// (0x0004d01c) main_ezdial_pane

0x2f37,	// (0x0004d6cb) main_sp_fs_email_pane_ParamLimits

0xc4fe,	// (0x00056c92) cmail_ddmenu_btn01_pane_ParamLimits

0xc4fe,	// (0x00056c92) cmail_ddmenu_btn01_pane

0xc51b,	// (0x00056caf) cmail_ddmenu_btn02_pane_ParamLimits

0xc51b,	// (0x00056caf) cmail_ddmenu_btn02_pane

0xc539,	// (0x00056ccd) cmail_ddmenu_btn03_pane_ParamLimits

0xc539,	// (0x00056ccd) cmail_ddmenu_btn03_pane

0xc5d4,	// (0x00056d68) main_sp_fs_ctrlbar_pane_ParamLimits

0xc5ea,	// (0x00056d7e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xc891,	// (0x00057025) list_cmail_body_pane_ParamLimits

0x1ab0,	// (0x0004c244) bg_button_pane_cp12

0x1ac5,	// (0x0004c259) list_single_cmail_header_detail_pane_g3_ParamLimits

0x1ac5,	// (0x0004c259) list_single_cmail_header_detail_pane_g3

0x1b0e,	// (0x0004c2a2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x1b0e,	// (0x0004c2a2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc95,	// (0x0005a429) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc95,	// (0x0005a429) list_single_cmail_header_detail_pane_t

0x1c1b,	// (0x0004c3af) phacti_term_pane_t2_ParamLimits

0x1c1b,	// (0x0004c3af) phacti_term_pane_t2

0x0001,

0xfc9f,	// (0x0005a433) phacti_term_pane_t_ParamLimits

0xfc9f,	// (0x0005a433) phacti_term_pane_t

0x1ec7,	// (0x0004c65b) aid_size_list_single_double

0xcc71,	// (0x00057405) popup_ezdial_listscroll_window

0xcc92,	// (0x00057426) popup_number_entry_window_cp01

0x31f4,	// (0x0004d988) bg_popup_call_pane_cp09

0x1ed3,	// (0x0004c667) ezdial_list_pane

0x1edb,	// (0x0004c66f) scroll_pane_cp23

0xdf38,	// (0x000586cc) bg_button_pane_cp028_ParamLimits

0xdf38,	// (0x000586cc) bg_button_pane_cp028

0xcca0,	// (0x00057434) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcca0,	// (0x00057434) cmail_ddmenu_btn01_pane_g1

0xccb0,	// (0x00057444) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xccb0,	// (0x00057444) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd17,	// (0x0005a4ab) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd17,	// (0x0005a4ab) cmail_ddmenu_btn01_pane_g

0x1ee3,	// (0x0004c677) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x1ee3,	// (0x0004c677) cmail_ddmenu_btn01_pane_t1

0x46ad,	// (0x0004ee41) bg_button_pane_cp029_ParamLimits

0x46ad,	// (0x0004ee41) bg_button_pane_cp029

0xccbc,	// (0x00057450) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xccbc,	// (0x00057450) cmail_ddmenu_btn02_pane_g1

0xccd4,	// (0x00057468) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xccd4,	// (0x00057468) cmail_ddmenu_btn02_pane_t1

0x28b2,	// (0x0004d046) bg_button_pane_cp031_ParamLimits

0x28b2,	// (0x0004d046) bg_button_pane_cp031

0xccbc,	// (0x00057450) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xccbc,	// (0x00057450) cmail_ddmenu_btn03_pane_g1

0xccd4,	// (0x00057468) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xccd4,	// (0x00057468) cmail_ddmenu_btn03_pane_t1

0xa042,	// (0x000547d6) cell_dialer2_keypad_pane_t1_ParamLimits

0xa05c,	// (0x000547f0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa05c,	// (0x000547f0) cell_dialer2_keypad_pane_t1_copy1

0xbdfa,	// (0x0005658e) ncimui_group_button_pane

0x2f37,	// (0x0004d6cb) main_sp_fs_calendar_pane_ParamLimits

0xc8b8,	// (0x0005704c) list_single_cmail_header_caption_pane_ParamLimits

0x1c5e,	// (0x0004c3f2) aid_recal_txt_sm_pane

0x2888,	// (0x0004d01c) mian_recal_day_pane

0x1ca0,	// (0x0004c434) popup_sp_fs_cale_preview_window_ParamLimits

0x1ef9,	// (0x0004c68d) list_recal_day_pane

0x1f3b,	// (0x0004c6cf) list_single_recal_day_pane_ParamLimits

0x1f3b,	// (0x0004c6cf) list_single_recal_day_pane

0x1f4d,	// (0x0004c6e1) list_single_recal_day_pane_g1_ParamLimits

0x1f4d,	// (0x0004c6e1) list_single_recal_day_pane_g1

0x1f59,	// (0x0004c6ed) list_single_recal_day_pane_g2_ParamLimits

0x1f59,	// (0x0004c6ed) list_single_recal_day_pane_g2

0x1f65,	// (0x0004c6f9) list_single_recal_day_pane_g3_ParamLimits

0x1f65,	// (0x0004c6f9) list_single_recal_day_pane_g3

0xccf8,	// (0x0005748c) list_single_recal_day_pane_g4_ParamLimits

0xccf8,	// (0x0005748c) list_single_recal_day_pane_g4

0x1f71,	// (0x0004c705) list_single_recal_day_pane_g5_ParamLimits

0x1f71,	// (0x0004c705) list_single_recal_day_pane_g5

0x1f7d,	// (0x0004c711) list_single_recal_day_pane_g6_ParamLimits

0x1f7d,	// (0x0004c711) list_single_recal_day_pane_g6

0x0004,

0xfd26,	// (0x0005a4ba) list_single_recal_day_pane_g_ParamLimits

0xfd26,	// (0x0005a4ba) list_single_recal_day_pane_g

0x1f91,	// (0x0004c725) list_single_recal_day_pane_t1

0x1fa3,	// (0x0004c737) list_single_recal_day_pane_t2

0x0001,

0xfd31,	// (0x0005a4c5) list_single_recal_day_pane_t

0xcd10,	// (0x000574a4) ncimui_query_button_pane_ParamLimits

0xcd10,	// (0x000574a4) ncimui_query_button_pane

0xcd20,	// (0x000574b4) ncimui_query_button_pane_t1_ParamLimits

0xcd20,	// (0x000574b4) ncimui_query_button_pane_t1

0x1fb5,	// (0x0004c749) ncimui_query_button_pane_t2_ParamLimits

0x1fb5,	// (0x0004c749) ncimui_query_button_pane_t2

0x0001,

0xfd36,	// (0x0005a4ca) ncimui_query_button_pane_t_ParamLimits

0xfd36,	// (0x0005a4ca) ncimui_query_button_pane_t

0xcd33,	// (0x000574c7) query_button_pane_ParamLimits

0xcd33,	// (0x000574c7) query_button_pane

0x2888,	// (0x0004d01c) bg_button_pane_cp0028

0x1fc8,	// (0x0004c75c) query_button_pane_t1

0x8b43,	// (0x000532d7) main_tport_pane_ParamLimits

0xc79b,	// (0x00056f2f) bg_popup_window_pane_cp01_ParamLimits

0xc79b,	// (0x00056f2f) bg_popup_window_pane_cp01

0xc7a9,	// (0x00056f3d) heading_pane_cp08_ParamLimits

0xc7a9,	// (0x00056f3d) heading_pane_cp08

0xc7b7,	// (0x00056f4b) heading_pane_cp07_ParamLimits

0xc7b7,	// (0x00056f4b) heading_pane_cp07

0xc826,	// (0x00056fba) cell_tport_appsw_pane_g2

0x0002,

0xfc82,	// (0x0005a416) cell_tport_appsw_pane_g

0x05db,	// (0x0004ad6f) input_candi_list_open_g1

0x3607,	// (0x0004dd9b) list_cale_time_pane_g6_ParamLimits

0x3607,	// (0x0004dd9b) list_cale_time_pane_g6

0x903e,	// (0x000537d2) aid_size_touch_calib_1_ParamLimits

0x903e,	// (0x000537d2) aid_size_touch_calib_1

0x904a,	// (0x000537de) aid_size_touch_calib_2_ParamLimits

0x904a,	// (0x000537de) aid_size_touch_calib_2

0x9058,	// (0x000537ec) aid_size_touch_calib_3_ParamLimits

0x9058,	// (0x000537ec) aid_size_touch_calib_3

0x9068,	// (0x000537fc) aid_size_touch_calib_4_ParamLimits

0x9068,	// (0x000537fc) aid_size_touch_calib_4

0x9076,	// (0x0005380a) main_touch_calib_button_group_pane_ParamLimits

0x9076,	// (0x0005380a) main_touch_calib_button_group_pane

0x9084,	// (0x00053818) main_touch_calib_pane_g1_ParamLimits

0x9090,	// (0x00053824) main_touch_calib_pane_g2_ParamLimits

0x909c,	// (0x00053830) main_touch_calib_pane_g3_ParamLimits

0x90a8,	// (0x0005383c) main_touch_calib_pane_g4_ParamLimits

0xf6c4,	// (0x00059e58) main_touch_calib_pane_g_ParamLimits

0x90b4,	// (0x00053848) main_touch_calib_pane_t1_ParamLimits

0x90cd,	// (0x00053861) main_touch_calib_pane_t2_ParamLimits

0x90e6,	// (0x0005387a) main_touch_calib_pane_t3_ParamLimits

0x90fc,	// (0x00053890) main_touch_calib_pane_t4_ParamLimits

0x9112,	// (0x000538a6) main_touch_calib_pane_t5_ParamLimits

0xf6cd,	// (0x00059e61) main_touch_calib_pane_t_ParamLimits

0xe67b,	// (0x00058e0f) list_single_fp_cale_pane_g3_ParamLimits

0xe67b,	// (0x00058e0f) list_single_fp_cale_pane_g3

0x8b27,	// (0x000532bb) bg_button_pane_cp012_ParamLimits

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp03_ParamLimits

0xaf14,	// (0x000556a8) cell_vitu2_function_top_pane_g1_ParamLimits

0x8b27,	// (0x000532bb) bg_vkb2_func_pane_cp04_ParamLimits

0xbd82,	// (0x00056516) main_ncimui_button_group_pane_ParamLimits

0xbd82,	// (0x00056516) main_ncimui_button_group_pane

0xbde8,	// (0x0005657c) main_ncimui_pane_t3_ParamLimits

0xbde8,	// (0x0005657c) main_ncimui_pane_t3

0x1bc9,	// (0x0004c35d) phacti_button_group_pane

0x1ec7,	// (0x0004c65b) aid_size_list_single_double_ParamLimits

0xcc71,	// (0x00057405) popup_ezdial_listscroll_window_ParamLimits

0xcc92,	// (0x00057426) popup_number_entry_window_cp01_ParamLimits

0xcd40,	// (0x000574d4) phacti_button_pane_ParamLimits

0xcd40,	// (0x000574d4) phacti_button_pane

0x2888,	// (0x0004d01c) bg_button_pane_cp14

0x1fd6,	// (0x0004c76a) phacti_button_pane_t1

0xcd51,	// (0x000574e5) main_touch_calib_button_pane_ParamLimits

0xcd51,	// (0x000574e5) main_touch_calib_button_pane

0x3042,	// (0x0004d7d6) bg_button_pane_cp18_ParamLimits

0x3042,	// (0x0004d7d6) bg_button_pane_cp18

0x1fe4,	// (0x0004c778) main_touch_calib_button_pane_t1_ParamLimits

0x1fe4,	// (0x0004c778) main_touch_calib_button_pane_t1

0x1ffa,	// (0x0004c78e) main_touch_calib_button_pane_t2_ParamLimits

0x1ffa,	// (0x0004c78e) main_touch_calib_button_pane_t2

0x0001,

0xfd3b,	// (0x0005a4cf) main_touch_calib_button_pane_t_ParamLimits

0xfd3b,	// (0x0005a4cf) main_touch_calib_button_pane_t

0x2888,	// (0x0004d01c) cell_ncimui_button_pane

0x2888,	// (0x0004d01c) bg_button_pane_cp032

0x2018,	// (0x0004c7ac) cell_ncimui_button_pane_t1

0xa0b8,	// (0x0005484c) image3_infobar_pane_ParamLimits

0xa0b8,	// (0x0005484c) image3_infobar_pane

0xc1a5,	// (0x00056939) fs_bigclock_status_pane_ParamLimits

0xc1a5,	// (0x00056939) fs_bigclock_status_pane

0xc1b2,	// (0x00056946) main_fs_bigclock_clock_pane_ParamLimits

0xc1b2,	// (0x00056946) main_fs_bigclock_clock_pane

0xc1c6,	// (0x0005695a) main_fs_bigclock_indi_pane_ParamLimits

0xc1c6,	// (0x0005695a) main_fs_bigclock_indi_pane

0xc1ee,	// (0x00056982) main_fs_bigclock_swipe_pane_ParamLimits

0xc1ee,	// (0x00056982) main_fs_bigclock_swipe_pane

0x2888,	// (0x0004d01c) main_fs_clock_dumped_data

0x15a6,	// (0x0004bd3a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x15a6,	// (0x0004bd3a) list_single_fs_bigclock_indicator_pane_g1

0x15c1,	// (0x0004bd55) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x15c1,	// (0x0004bd55) list_single_fs_bigclock_indicator_pane_g2

0x15db,	// (0x0004bd6f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x15db,	// (0x0004bd6f) list_single_fs_bigclock_indicator_pane_g3

0x15f5,	// (0x0004bd89) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x15f5,	// (0x0004bd89) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbdc,	// (0x0005a370) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbdc,	// (0x0005a370) list_single_fs_bigclock_indicator_pane_g

0x1620,	// (0x0004bdb4) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x1620,	// (0x0004bdb4) list_single_fs_bigclock_indicator_pane_t1

0x1648,	// (0x0004bddc) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x1648,	// (0x0004bddc) list_single_fs_bigclock_indicator_pane_t2

0x1670,	// (0x0004be04) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x1670,	// (0x0004be04) list_single_fs_bigclock_indicator_pane_t3

0x1698,	// (0x0004be2c) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x1698,	// (0x0004be2c) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbe7,	// (0x0005a37b) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbe7,	// (0x0005a37b) list_single_fs_bigclock_indicator_pane_t

0x2026,	// (0x0004c7ba) image3_infobar_fav_pane_ParamLimits

0x2026,	// (0x0004c7ba) image3_infobar_fav_pane

0x2036,	// (0x0004c7ca) image3_infobar_loc_pane_ParamLimits

0x2036,	// (0x0004c7ca) image3_infobar_loc_pane

0x204a,	// (0x0004c7de) image3_infobar_time_pane_ParamLimits

0x204a,	// (0x0004c7de) image3_infobar_time_pane

0x322a,	// (0x0004d9be) image3_infobar_time_pane_g1

0x205a,	// (0x0004c7ee) image3_infobar_time_pane_t1

0x322a,	// (0x0004d9be) image3_infobar_loc_pane_g1

0x2068,	// (0x0004c7fc) image3_infobar_loc_pane_g2

0x0001,

0xfd40,	// (0x0005a4d4) image3_infobar_loc_pane_g

0x2070,	// (0x0004c804) image3_infobar_loc_pane_t1

0x322a,	// (0x0004d9be) image3_infobar_fav_pane_g1

0x207e,	// (0x0004c812) image3_infobar_fav_pane_g2

0x0001,

0xfd45,	// (0x0005a4d9) image3_infobar_fav_pane_g

0x2086,	// (0x0004c81a) fs_bigclock_status_battery_pane

0x208f,	// (0x0004c823) fs_bigclock_status_signal_pane

0x2098,	// (0x0004c82c) fs_bigclock_status_title_pane

0x20a1,	// (0x0004c835) fs_bigclock_status_signal_pane_g1

0x20aa,	// (0x0004c83e) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd4a,	// (0x0005a4de) fs_bigclock_status_signal_pane_g

0x20b2,	// (0x0004c846) fs_bigclock_status_battery_pane_g1

0x20bb,	// (0x0004c84f) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd4f,	// (0x0005a4e3) fs_bigclock_status_battery_pane_g

0x20c3,	// (0x0004c857) fs_bigclock_status_title_pane_t1

0xcd61,	// (0x000574f5) main_fs_bigclock_clock_pane_g1

0xcd61,	// (0x000574f5) main_fs_bigclock_clock_pane_g2

0xcd6e,	// (0x00057502) main_fs_bigclock_clock_pane_g3

0xcd6e,	// (0x00057502) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd54,	// (0x0005a4e8) main_fs_bigclock_clock_pane_g

0xcd7a,	// (0x0005750e) main_fs_bigclock_clock_pane_t1

0xcd8d,	// (0x00057521) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd5d,	// (0x0005a4f1) main_fs_bigclock_clock_pane_t

0x20d1,	// (0x0004c865) list_single_fs_bigclock_indicator_pane_ParamLimits

0x20d1,	// (0x0004c865) list_single_fs_bigclock_indicator_pane

0x20e2,	// (0x0004c876) list_single_fs_bigclock_pane_ParamLimits

0x20e2,	// (0x0004c876) list_single_fs_bigclock_pane

0x2108,	// (0x0004c89c) main_fs_bigclock_indicator_pane_t1

0x2117,	// (0x0004c8ab) list_single_fs_bigclock_pane_g1

0x211f,	// (0x0004c8b3) list_single_fs_bigclock_pane_t1

0x322a,	// (0x0004d9be) main_fs_bigclock_swipe_pane_g1

0x2162,	// (0x0004c8f6) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd6e,	// (0x0005a502) main_fs_bigclock_swipe_pane_g

0x216a,	// (0x0004c8fe) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x216a,	// (0x0004c8fe) main_fs_bigclock_swipe_pane_t1

0x7d19,	// (0x000524ad) call_type_pane_ParamLimits

0x2888,	// (0x0004d01c) main_btmg_pane

0x1d9d,	// (0x0004c531) list_single_cale_mrui_row_pane_g2_ParamLimits

0x1d9d,	// (0x0004c531) list_single_cale_mrui_row_pane_g2

0x0002,

0xfce1,	// (0x0005a475) list_single_cale_mrui_row_pane_g_ParamLimits

0xfce1,	// (0x0005a475) list_single_cale_mrui_row_pane_g

0x1f22,	// (0x0004c6b6) list_recal_vselct_arw_lo_pane

0x1f2a,	// (0x0004c6be) list_recal_vselct_arw_up_pane

0x1f32,	// (0x0004c6c6) list_recal_vselct_pane

0xcde4,	// (0x00057578) btmg_button_pane

0xcdf0,	// (0x00057584) main_btmg_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp044

0x2187,	// (0x0004c91b) btmg_button_pane_t1

0x4faa,	// (0x0004f73e) aid_listscroll_gen

0x2f37,	// (0x0004d6cb) main_cntbar_detail_pane

0x1a92,	// (0x0004c226) list_cmail_folder_pane

0x4723,	// (0x0004eeb7) sp_fs_scroll_pane_cp03_ParamLimits

0xcdf8,	// (0x0005758c) list_single_fs_dyc_pane_cp01_ParamLimits

0xcdf8,	// (0x0005758c) list_single_fs_dyc_pane_cp01

0x2195,	// (0x0004c929) aid_size_cmail_indent

0x219e,	// (0x0004c932) list_single_dyc_row_pane_cp01

0xce44,	// (0x000575d8) cntbar_detail_list_pane_ParamLimits

0xce44,	// (0x000575d8) cntbar_detail_list_pane

0xce7e,	// (0x00057612) main_cntbar_detail_cont_pane_ParamLimits

0xce7e,	// (0x00057612) main_cntbar_detail_cont_pane

0x7d0d,	// (0x000524a1) scroll_pane_cp032_ParamLimits

0x7d0d,	// (0x000524a1) scroll_pane_cp032

0xce8a,	// (0x0005761e) cntbar_detail_list_event_pane_ParamLimits

0xce8a,	// (0x0005761e) cntbar_detail_list_event_pane

0xce50,	// (0x000575e4) cntbar_detail_list_shct_pane

0x349d,	// (0x0004dc31) aid_list_gen

0x21a7,	// (0x0004c93b) aid_scroll

0x21b0,	// (0x0004c944) aid_size_touch_scroll_bar

0xce9e,	// (0x00057632) aid_list_double

0xcea7,	// (0x0005763b) aid_list_single

0x21b9,	// (0x0004c94d) aid_list_single_lg

0xceb0,	// (0x00057644) aid_list_z_g_a_sm

0xceb8,	// (0x0005764c) aid_list_z_g_d

0xcec0,	// (0x00057654) aid_txt_z_prm

0xcece,	// (0x00057662) aid_txt_z_prm_cp01

0xcedc,	// (0x00057670) aid_txt_z_sec

0xceea,	// (0x0005767e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xceea,	// (0x0005767e) main_cntbar_detail_cont_pane_g1

0xcef7,	// (0x0005768b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xcef7,	// (0x0005768b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd73,	// (0x0005a507) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd73,	// (0x0005a507) main_cntbar_detail_cont_pane_g

0x21c2,	// (0x0004c956) main_cntbar_detail_cont_pane_t1

0x21d0,	// (0x0004c964) main_cntbar_detail_cont_pane_t2

0x21de,	// (0x0004c972) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd78,	// (0x0005a50c) main_cntbar_detail_cont_pane_t

0xcf03,	// (0x00057697) cell_cntbar_detail_list_shct_pane_ParamLimits

0xcf03,	// (0x00057697) cell_cntbar_detail_list_shct_pane

0x21ec,	// (0x0004c980) cntbar_detail_list_shct_pane_g1

0x21f5,	// (0x0004c989) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd7f,	// (0x0005a513) cntbar_detail_list_shct_pane_g

0xcf17,	// (0x000576ab) cntbar_detail_list_event_pane_g1_ParamLimits

0xcf17,	// (0x000576ab) cntbar_detail_list_event_pane_g1

0xcf23,	// (0x000576b7) cntbar_detail_list_event_pane_g2_ParamLimits

0xcf23,	// (0x000576b7) cntbar_detail_list_event_pane_g2

0x0005,

0xfd84,	// (0x0005a518) cntbar_detail_list_event_pane_g_ParamLimits

0xfd84,	// (0x0005a518) cntbar_detail_list_event_pane_g

0xcf8f,	// (0x00057723) cntbar_detail_list_event_pane_t1_ParamLimits

0xcf8f,	// (0x00057723) cntbar_detail_list_event_pane_t1

0xcfa4,	// (0x00057738) cntbar_detail_list_event_pane_t2_ParamLimits

0xcfa4,	// (0x00057738) cntbar_detail_list_event_pane_t2

0x0002,

0xfd91,	// (0x0005a525) cntbar_detail_list_event_pane_t_ParamLimits

0xfd91,	// (0x0005a525) cntbar_detail_list_event_pane_t

0x322a,	// (0x0004d9be) cell_cntbar_detail_list_shct_pane_g1

0x3c0f,	// (0x0004e3a3) navi_pane_mv_g3

0x2f37,	// (0x0004d6cb) main_cntbar_detail_pane_ParamLimits

0x2888,	// (0x0004d01c) main_notif_wgt_pane

0x9d42,	// (0x000544d6) aid_tch_main_mp4_pane_g4

0x9fa1,	// (0x00054735) popup_slider_window_cp02

0x1f18,	// (0x0004c6ac) list_recal_day_event_pane

0xce24,	// (0x000575b8) cntbar_detail_btn_pane_ParamLimits

0xce24,	// (0x000575b8) cntbar_detail_btn_pane

0xce34,	// (0x000575c8) cntbar_detail_btn_pane_cp01_ParamLimits

0xce34,	// (0x000575c8) cntbar_detail_btn_pane_cp01

0xce50,	// (0x000575e4) cntbar_detail_list_shct_pane_ParamLimits

0xce5c,	// (0x000575f0) cntbar_detail_pane_g1_ParamLimits

0xce5c,	// (0x000575f0) cntbar_detail_pane_g1

0xce68,	// (0x000575fc) cntbar_detail_pane_t1_ParamLimits

0xce68,	// (0x000575fc) cntbar_detail_pane_t1

0xcf2f,	// (0x000576c3) cntbar_detail_list_event_pane_g3_ParamLimits

0xcf2f,	// (0x000576c3) cntbar_detail_list_event_pane_g3

0xcf47,	// (0x000576db) cntbar_detail_list_event_pane_g4_ParamLimits

0xcf47,	// (0x000576db) cntbar_detail_list_event_pane_g4

0xcf5f,	// (0x000576f3) cntbar_detail_list_event_pane_g5_ParamLimits

0xcf5f,	// (0x000576f3) cntbar_detail_list_event_pane_g5

0xcf77,	// (0x0005770b) cntbar_detail_list_event_pane_g6_ParamLimits

0xcf77,	// (0x0005770b) cntbar_detail_list_event_pane_g6

0xcfb9,	// (0x0005774d) cntbar_detail_list_event_pane_t3_ParamLimits

0xcfb9,	// (0x0005774d) cntbar_detail_list_event_pane_t3

0xcfcb,	// (0x0005775f) popup_notif_wgt_window_ParamLimits

0xcfcb,	// (0x0005775f) popup_notif_wgt_window

0xcfdb,	// (0x0005776f) popup_submenu_window_cp01_ParamLimits

0xcfdb,	// (0x0005776f) popup_submenu_window_cp01

0x31f4,	// (0x0004d988) bg_popup_window_pane_cp10

0x21fe,	// (0x0004c992) listscroll_notif_wgt_pane

0x2210,	// (0x0004c9a4) list_notif_wgt_window

0x2219,	// (0x0004c9ad) scroll_pane_cp033

0xcfed,	// (0x00057781) list_notif_wgt_row_pane_ParamLimits

0xcfed,	// (0x00057781) list_notif_wgt_row_pane

0x2222,	// (0x0004c9b6) aid_size_list_notif_wgt_del

0x222f,	// (0x0004c9c3) list_notif_wgt_row_pane_g1

0x223b,	// (0x0004c9cf) list_notif_wgt_row_pane_g2

0x224a,	// (0x0004c9de) list_notif_wgt_row_pane_g3

0x0002,

0xfd98,	// (0x0005a52c) list_notif_wgt_row_pane_g

0x2257,	// (0x0004c9eb) list_notif_wgt_row_pane_t1

0x226d,	// (0x0004ca01) list_notif_wgt_row_pane_t2

0x227f,	// (0x0004ca13) list_notif_wgt_row_pane_t3

0x0002,

0xfd9f,	// (0x0005a533) list_notif_wgt_row_pane_t

0xee40,	// (0x000595d4) list_recal_day_event_pane_g1

0x2291,	// (0x0004ca25) list_recal_day_event_pane_t1

0x2888,	// (0x0004d01c) bg_button_pane_cp045

0x22a0,	// (0x0004ca34) cntbar_detail_btn_pane_t1

0x46ad,	// (0x0004ee41) main_callh_pane_ParamLimits

0x46ad,	// (0x0004ee41) main_callh_pane

0x2888,	// (0x0004d01c) main_coverflow0_pane

0x2888,	// (0x0004d01c) main_wgtman_pane

0xc206,	// (0x0005699a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc206,	// (0x0005699a) main_fs_bigclock_unlock_btn_pane

0xc81e,	// (0x00056fb2) bg_button_pane_cp16

0xc82e,	// (0x00056fc2) cell_tport_appsw_pane_g3

0xcfff,	// (0x00057793) cf0_flow_pane_ParamLimits

0xcfff,	// (0x00057793) cf0_flow_pane

0x22ae,	// (0x0004ca42) listscroll_cf0_pane

0x22b9,	// (0x0004ca4d) main_cf0_pane_g1

0xd00e,	// (0x000577a2) main_cf0_pane_t1_ParamLimits

0xd00e,	// (0x000577a2) main_cf0_pane_t1

0xd022,	// (0x000577b6) main_cf0_pane_t2_ParamLimits

0xd022,	// (0x000577b6) main_cf0_pane_t2

0x0001,

0xfdab,	// (0x0005a53f) main_cf0_pane_t_ParamLimits

0xfdab,	// (0x0005a53f) main_cf0_pane_t

0x22cb,	// (0x0004ca5f) scroll_pane_cp11

0xd036,	// (0x000577ca) cf0_flow_pane_g1

0xd03e,	// (0x000577d2) cf0_flow_pane_g2

0x0001,

0xfdb0,	// (0x0005a544) cf0_flow_pane_g

0xd046,	// (0x000577da) cf0_flow_pane_t1

0x2888,	// (0x0004d01c) main_call6_pane

0x2888,	// (0x0004d01c) main_calllock_pane

0xd054,	// (0x000577e8) call6_btn_grp_pane_ParamLimits

0xd054,	// (0x000577e8) call6_btn_grp_pane

0xd063,	// (0x000577f7) call6_pane_g1_ParamLimits

0xd063,	// (0x000577f7) call6_pane_g1

0xd073,	// (0x00057807) popup_call6_1st_window_ParamLimits

0xd073,	// (0x00057807) popup_call6_1st_window

0xd081,	// (0x00057815) popup_call6_2nd_window_ParamLimits

0xd081,	// (0x00057815) popup_call6_2nd_window

0xd08f,	// (0x00057823) cell_call6_btn_pane_ParamLimits

0xd08f,	// (0x00057823) cell_call6_btn_pane

0x31f4,	// (0x0004d988) bg_popup_call2_in_pane_cp03

0x22d6,	// (0x0004ca6a) popup_call6_1st_window_g1

0x22de,	// (0x0004ca72) popup_call6_1st_window_g2

0x22e6,	// (0x0004ca7a) popup_call6_1st_window_g3

0x0002,

0xfdb5,	// (0x0005a549) popup_call6_1st_window_g

0x22ee,	// (0x0004ca82) popup_call6_1st_window_t1

0x22fd,	// (0x0004ca91) popup_call6_1st_window_t2

0x230b,	// (0x0004ca9f) popup_call6_1st_window_t3

0x0002,

0xfdbc,	// (0x0005a550) popup_call6_1st_window_t

0x31f4,	// (0x0004d988) bg_popup_call2_in_pane_cp04

0x2319,	// (0x0004caad) popup_call6_2nd_window_g1

0x2321,	// (0x0004cab5) popup_call6_2nd_window_g2

0x2329,	// (0x0004cabd) popup_call6_2nd_window_g3

0x0002,

0xfdc3,	// (0x0005a557) popup_call6_2nd_window_g

0x2331,	// (0x0004cac5) popup_call6_2nd_window_t1

0x5fae,	// (0x00050742) bg_button_pane_cp15

0xd09e,	// (0x00057832) cell_call6_btn_pane_g1

0xd0a7,	// (0x0005783b) cell_call6_btn_pane_t1

0xd0b6,	// (0x0005784a) listscroll_wgtman_pane_ParamLimits

0xd0b6,	// (0x0005784a) listscroll_wgtman_pane

0xd0d2,	// (0x00057866) wgtman_btn_pane_ParamLimits

0xd0d2,	// (0x00057866) wgtman_btn_pane

0x3a16,	// (0x0004e1aa) aid_scroll_copy1

0x2349,	// (0x0004cadd) list_wgtman_pane

0xd107,	// (0x0005789b) wgtman_btn_pane_g1_ParamLimits

0xd107,	// (0x0005789b) wgtman_btn_pane_g1

0xd12f,	// (0x000578c3) wgtman_btn_pane_t1_ParamLimits

0xd12f,	// (0x000578c3) wgtman_btn_pane_t1

0x2353,	// (0x0004cae7) wgtman_btn_pane_t2_ParamLimits

0x2353,	// (0x0004cae7) wgtman_btn_pane_t2

0x0001,

0xfdca,	// (0x0005a55e) wgtman_btn_pane_t_ParamLimits

0xfdca,	// (0x0005a55e) wgtman_btn_pane_t

0xd166,	// (0x000578fa) listrow_wgtman_pane_ParamLimits

0xd166,	// (0x000578fa) listrow_wgtman_pane

0xd181,	// (0x00057915) listrow_wgtman_pane_g1

0xd18e,	// (0x00057922) listrow_wgtman_pane_g2

0x0001,

0xfdcf,	// (0x0005a563) listrow_wgtman_pane_g

0xd1ac,	// (0x00057940) listrow_wgtman_pane_t1

0xd1c4,	// (0x00057958) listrow_wgtman_pane_t2

0x0001,

0xfdd4,	// (0x0005a568) listrow_wgtman_pane_t

0xd1ea,	// (0x0005797e) wait_bar_pane_cp09

0x236a,	// (0x0004cafe) main_calllock_btn_pane

0x2374,	// (0x0004cb08) main_calllock_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp17

0x2340,	// (0x0004cad4) main_calllock_btn_pane_g1

0x237c,	// (0x0004cb10) main_calllock_btn_pane_t1

0x2888,	// (0x0004d01c) main_dialer3_pane

0x2888,	// (0x0004d01c) main_fmrd2_pane

0x322a,	// (0x0004d9be) main_fs_bigclock_unlock_btn_pane_g1

0xd204,	// (0x00057998) main_fs_bigclock_unlock_btn_pane_t1

0xd212,	// (0x000579a6) area_fmrd2_info_pane_ParamLimits

0xd212,	// (0x000579a6) area_fmrd2_info_pane

0xd220,	// (0x000579b4) area_fmrd2_visual_pane_ParamLimits

0xd220,	// (0x000579b4) area_fmrd2_visual_pane

0xd22e,	// (0x000579c2) fmrd2_indi_pane_ParamLimits

0xd22e,	// (0x000579c2) fmrd2_indi_pane

0xd23b,	// (0x000579cf) area_fmrd2_visual_pane_g1

0xd243,	// (0x000579d7) area_fmrd2_visual_pane_t1

0xd253,	// (0x000579e7) area_fmrd2_visual_pane_t2

0xd263,	// (0x000579f7) area_fmrd2_visual_pane_t3

0x0002,

0xfdde,	// (0x0005a572) area_fmrd2_visual_pane_t

0xd273,	// (0x00057a07) area_fmrd2_info_pane_g1

0xd27b,	// (0x00057a0f) area_fmrd2_info_pane_t1

0xd28b,	// (0x00057a1f) area_fmrd2_info_pane_t2

0xd29b,	// (0x00057a2f) area_fmrd2_info_pane_t3

0xd2ab,	// (0x00057a3f) area_fmrd2_info_pane_t4

0x0003,

0xfde5,	// (0x0005a579) area_fmrd2_info_pane_t

0xd2b9,	// (0x00057a4d) fmrd2_indi_pane_t1

0xd2c9,	// (0x00057a5d) fmrd2_indi_pane_t2

0xd2d9,	// (0x00057a6d) fmrd2_indi_pane_t3

0x0002,

0xfdee,	// (0x0005a582) fmrd2_indi_pane_t

0x1604,	// (0x0004bd98) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x1604,	// (0x0004bd98) list_single_fs_bigclock_indicator_pane_g5

0x16b5,	// (0x0004be49) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x16b5,	// (0x0004be49) list_single_fs_bigclock_indicator_pane_t5

0xc9c7,	// (0x0005715b) aid_cell_bcale_month_pane_ParamLimits

0xc9c7,	// (0x0005715b) aid_cell_bcale_month_pane

0xc9e5,	// (0x00057179) bcale_month_pane_ParamLimits

0xc9e5,	// (0x00057179) bcale_month_pane

0xca03,	// (0x00057197) bcale_preview_pane_ParamLimits

0xca03,	// (0x00057197) bcale_preview_pane

0x211f,	// (0x0004c8b3) list_single_fs_bigclock_pane_t1_ParamLimits

0x213e,	// (0x0004c8d2) list_single_fs_bigclock_pane_t2_ParamLimits

0x213e,	// (0x0004c8d2) list_single_fs_bigclock_pane_t2

0x0001,

0xfd69,	// (0x0005a4fd) list_single_fs_bigclock_pane_t_ParamLimits

0xfd69,	// (0x0005a4fd) list_single_fs_bigclock_pane_t

0xd1fc,	// (0x00057990) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfdd9,	// (0x0005a56d) main_fs_bigclock_unlock_btn_pane_g

0xd2e7,	// (0x00057a7b) aid_dia3_key_size_ParamLimits

0xd2e7,	// (0x00057a7b) aid_dia3_key_size

0xd2f3,	// (0x00057a87) aid_dia3_listrow_size_ParamLimits

0xd2f3,	// (0x00057a87) aid_dia3_listrow_size

0xd303,	// (0x00057a97) dia3_keypad_fun_pane_ParamLimits

0xd303,	// (0x00057a97) dia3_keypad_fun_pane

0xd315,	// (0x00057aa9) dia3_keypad_num_pane_ParamLimits

0xd315,	// (0x00057aa9) dia3_keypad_num_pane

0xd327,	// (0x00057abb) dia3_listscroll_pane_ParamLimits

0xd327,	// (0x00057abb) dia3_listscroll_pane

0xd335,	// (0x00057ac9) dia3_numentry_pane_ParamLimits

0xd335,	// (0x00057ac9) dia3_numentry_pane

0x238b,	// (0x0004cb1f) dia3_list_pane

0x2396,	// (0x0004cb2a) scroll_pane_cp12

0x2888,	// (0x0004d01c) bg_dia3_numentry_pane

0xd343,	// (0x00057ad7) dia3_numentry_pane_t1

0xd352,	// (0x00057ae6) cell_dia3_key_num_pane

0xd35a,	// (0x00057aee) cell_dia3_key0_fun_pane_ParamLimits

0xd35a,	// (0x00057aee) cell_dia3_key0_fun_pane

0xd367,	// (0x00057afb) cell_dia3_key1_fun_pane_ParamLimits

0xd367,	// (0x00057afb) cell_dia3_key1_fun_pane

0xd374,	// (0x00057b08) dia3_listrow_pane

0x1357,	// (0x0004baeb) bg_dia3_numentry_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp21

0x23a1,	// (0x0004cb35) cell_dia3_key_num_pane_t1

0x23af,	// (0x0004cb43) cell_dia3_key_num_pane_t2

0x23be,	// (0x0004cb52) cell_dia3_key_num_pane_t3

0x23cd,	// (0x0004cb61) cell_dia3_key_num_pane_t4

0x0003,

0xfdf5,	// (0x0005a589) cell_dia3_key_num_pane_t

0x2888,	// (0x0004d01c) bg_button_pane_cp19

0xd381,	// (0x00057b15) cell_dia3_key0_fun_pane_g1

0x2888,	// (0x0004d01c) bg_button_pane_cp20

0xd389,	// (0x00057b1d) cell_dia3_key1_fun_pane_g1

0xd391,	// (0x00057b25) area_left_week_number_pane

0xd3a4,	// (0x00057b38) area_top_day_name_pane

0xd3b2,	// (0x00057b46) frame_month_view_pane

0x23dc,	// (0x0004cb70) grid_month_view_pane

0xd3c7,	// (0x00057b5b) cell_top_day_name_pane_ParamLimits

0xd3c7,	// (0x00057b5b) cell_top_day_name_pane

0xd3e1,	// (0x00057b75) cell_area_left_week_number_pane_ParamLimits

0xd3e1,	// (0x00057b75) cell_area_left_week_number_pane

0xd404,	// (0x00057b98) cell_month_view_pane_ParamLimits

0xd404,	// (0x00057b98) cell_month_view_pane

0x23ea,	// (0x0004cb7e) frm_month_g1

0xd430,	// (0x00057bc4) frm_month_g2

0xd441,	// (0x00057bd5) frm_month_g3

0xd452,	// (0x00057be6) frm_month_g4

0xd463,	// (0x00057bf7) frm_month_g5

0xd476,	// (0x00057c0a) frm_month_g6

0xd489,	// (0x00057c1d) frm_month_g7

0x23f7,	// (0x0004cb8b) frm_month_g8

0xd49c,	// (0x00057c30) frm_month_g9

0xd4a9,	// (0x00057c3d) frm_month_g10

0xd4b6,	// (0x00057c4a) frm_month_g11

0xd4c3,	// (0x00057c57) frm_month_g12

0xd4d0,	// (0x00057c64) frm_month_g13

0xd4dd,	// (0x00057c71) frm_month_g14

0xd4ec,	// (0x00057c80) frm_month_g15

0xd4fb,	// (0x00057c8f) frm_month_g16

0x000f,

0xfdfe,	// (0x0005a592) frm_month_g

0x2404,	// (0x0004cb98) cell_top_day_name_pane_t1

0xd50a,	// (0x00057c9e) cell_area_left_week_number_pane_g1

0xd519,	// (0x00057cad) cell_area_left_week_number_pane_t1

0x2fd0,	// (0x0004d764) cell_month_view_pane_g1

0xd52f,	// (0x00057cc3) cell_month_view_pane_t1

0x2888,	// (0x0004d01c) main_fps_pane

0x18d2,	// (0x0004c066) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x18d2,	// (0x0004c066) cmail_ddmenu_btn02_pane_cp1

0x18ee,	// (0x0004c082) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x18ee,	// (0x0004c082) cmail_ddmenu_btn02_pane_cp2

0xccc8,	// (0x0005745c) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xccc8,	// (0x0005745c) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd1c,	// (0x0005a4b0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd1c,	// (0x0005a4b0) cmail_ddmenu_btn02_pane_g

0xcce6,	// (0x0005747a) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcce6,	// (0x0005747a) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd21,	// (0x0005a4b5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd21,	// (0x0005a4b5) cmail_ddmenu_btn02_pane_t

0xd545,	// (0x00057cd9) fps_text_pane_ParamLimits

0xd545,	// (0x00057cd9) fps_text_pane

0xd552,	// (0x00057ce6) main_fps_pane_g1_ParamLimits

0xd552,	// (0x00057ce6) main_fps_pane_g1

0xd560,	// (0x00057cf4) wait_bar_pane_cp010_ParamLimits

0xd560,	// (0x00057cf4) wait_bar_pane_cp010

0xd56c,	// (0x00057d00) fps_text_pane_t1_ParamLimits

0xd56c,	// (0x00057d00) fps_text_pane_t1

0xa45a,	// (0x00054bee) cam4_image_uncrop_pane_g1

0xa463,	// (0x00054bf7) cam4_image_uncrop_pane_g2

0xa46c,	// (0x00054c00) cam4_image_uncrop_pane_g3

0xa475,	// (0x00054c09) cam4_image_uncrop_pane_g4

0x0003,

0xf860,	// (0x00059ff4) cam4_image_uncrop_pane_g

0xd374,	// (0x00057b08) dia3_listrow_pane_ParamLimits

0x2888,	// (0x0004d01c) main_phob2_pane

0xc800,	// (0x00056f94) cell_tport_appsw_pane_cp02_ParamLimits

0xc800,	// (0x00056f94) cell_tport_appsw_pane_cp02

0xc80f,	// (0x00056fa3) cell_tport_appsw_pane_cp03_ParamLimits

0xc80f,	// (0x00056fa3) cell_tport_appsw_pane_cp03

0x2888,	// (0x0004d01c) phob2_contact_card_pane

0x2888,	// (0x0004d01c) phob2_listscroll_pane

0x2417,	// (0x0004cbab) phob2_list_pane

0x241f,	// (0x0004cbb3) scroll_pane_cp034

0xd585,	// (0x00057d19) phob2_cc_data_pane_ParamLimits

0xd585,	// (0x00057d19) phob2_cc_data_pane

0xd59f,	// (0x00057d33) phob2_cc_listscroll_pane_ParamLimits

0xd59f,	// (0x00057d33) phob2_cc_listscroll_pane

0xd166,	// (0x000578fa) list_double_large_graphic_phob2_pane_ParamLimits

0xd166,	// (0x000578fa) list_double_large_graphic_phob2_pane

0xd5b9,	// (0x00057d4d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd5b9,	// (0x00057d4d) list_double_large_graphic_phob2_pane_g1

0xd5c6,	// (0x00057d5a) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd5c6,	// (0x00057d5a) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfe1f,	// (0x0005a5b3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe1f,	// (0x0005a5b3) list_double_large_graphic_phob2_pane_g

0xd5ec,	// (0x00057d80) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd5ec,	// (0x00057d80) list_double_large_graphic_phob2_pane_t1

0xd601,	// (0x00057d95) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd601,	// (0x00057d95) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe28,	// (0x0005a5bc) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe28,	// (0x0005a5bc) list_double_large_graphic_phob2_pane_t

0x2888,	// (0x0004d01c) list_highlight_pane_cp024

0x2427,	// (0x0004cbbb) phob2_cc_button_pane

0xd616,	// (0x00057daa) phob2_cc_data_pane_g1_ParamLimits

0xd616,	// (0x00057daa) phob2_cc_data_pane_g1

0xd625,	// (0x00057db9) phob2_cc_data_pane_g2_ParamLimits

0xd625,	// (0x00057db9) phob2_cc_data_pane_g2

0x0001,

0xfe2d,	// (0x0005a5c1) phob2_cc_data_pane_g_ParamLimits

0xfe2d,	// (0x0005a5c1) phob2_cc_data_pane_g

0xd634,	// (0x00057dc8) phob2_cc_data_pane_t1_ParamLimits

0xd634,	// (0x00057dc8) phob2_cc_data_pane_t1

0xd649,	// (0x00057ddd) phob2_cc_data_pane_t2_ParamLimits

0xd649,	// (0x00057ddd) phob2_cc_data_pane_t2

0xd65e,	// (0x00057df2) phob2_cc_data_pane_t3_ParamLimits

0xd65e,	// (0x00057df2) phob2_cc_data_pane_t3

0x0002,

0xfe32,	// (0x0005a5c6) phob2_cc_data_pane_t_ParamLimits

0xfe32,	// (0x0005a5c6) phob2_cc_data_pane_t

0x242f,	// (0x0004cbc3) phob2_cc_list_pane_ParamLimits

0x242f,	// (0x0004cbc3) phob2_cc_list_pane

0xf04d,	// (0x000597e1) scroll_pane_cp035_ParamLimits

0xf04d,	// (0x000597e1) scroll_pane_cp035

0x2f37,	// (0x0004d6cb) bg_button_pane_cp033

0x243b,	// (0x0004cbcf) phob2_cc_button_pane_g1

0x2447,	// (0x0004cbdb) phob2_cc_button_pane_t1

0x245c,	// (0x0004cbf0) phob2_cc_button_pane_t2

0x0001,

0xfe39,	// (0x0005a5cd) phob2_cc_button_pane_t

0xd673,	// (0x00057e07) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd673,	// (0x00057e07) list_double_large_graphic_phob2_cc_pane

0xd6e1,	// (0x00057e75) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd6e1,	// (0x00057e75) list_double_large_graphic_phob2_cc_pane_g1

0x246e,	// (0x0004cc02) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x246e,	// (0x0004cc02) list_double_large_graphic_phob2_cc_pane_g2

0xd6f2,	// (0x00057e86) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd6f2,	// (0x00057e86) list_double_large_graphic_phob2_cc_pane_g3

0xd6fe,	// (0x00057e92) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd6fe,	// (0x00057e92) list_double_large_graphic_phob2_cc_pane_g4

0xd70a,	// (0x00057e9e) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd70a,	// (0x00057e9e) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe3e,	// (0x0005a5d2) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe3e,	// (0x0005a5d2) list_double_large_graphic_phob2_cc_pane_g

0xd716,	// (0x00057eaa) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd716,	// (0x00057eaa) list_double_large_graphic_phob2_cc_pane_t1

0xd73f,	// (0x00057ed3) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd73f,	// (0x00057ed3) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe49,	// (0x0005a5dd) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe49,	// (0x0005a5dd) list_double_large_graphic_phob2_cc_pane_t

0x247a,	// (0x0004cc0e) list_highlight_pane_cp025_ParamLimits

0x247a,	// (0x0004cc0e) list_highlight_pane_cp025

0x2f37,	// (0x0004d6cb) bg_button_pane_cp033_ParamLimits

0x243b,	// (0x0004cbcf) phob2_cc_button_pane_g1_ParamLimits

0x2447,	// (0x0004cbdb) phob2_cc_button_pane_t1_ParamLimits

0x245c,	// (0x0004cbf0) phob2_cc_button_pane_t2_ParamLimits

0xfe39,	// (0x0005a5cd) phob2_cc_button_pane_t_ParamLimits

0x5fa2,	// (0x00050736) popup_wgtman_window

0xed12,	// (0x000594a6) scroll_pane_cp038

0xd0ef,	// (0x00057883) wgtman_btn_pane_cp_01_ParamLimits

0xd0ef,	// (0x00057883) wgtman_btn_pane_cp_01

0x2488,	// (0x0004cc1c) wgtman_content_pane

0x2491,	// (0x0004cc25) wgtman_heading_pane

0x2888,	// (0x0004d01c) bg_heading_pane_cp02

0x249a,	// (0x0004cc2e) wgtman_heading_pane_g1

0x24a2,	// (0x0004cc36) wgtman_heading_pane_t1

0x24b0,	// (0x0004cc44) scroll_pane_cp036

0x24b8,	// (0x0004cc4c) wgtman_list_pane

0x24c0,	// (0x0004cc54) wgtman_list_pane_t1_ParamLimits

0x24c0,	// (0x0004cc54) wgtman_list_pane_t1

0xa3b9,	// (0x00054b4d) cam4_grid_pane

0xb0c3,	// (0x00055857) bg_button_pane_cp015_ParamLimits

0xb0d8,	// (0x0005586c) bg_button_pane_cp016_ParamLimits

0xb0e4,	// (0x00055878) bg_button_pane_cp017_ParamLimits

0xb13c,	// (0x000558d0) popup_vitu2_query_window_g3_ParamLimits

0xb13c,	// (0x000558d0) popup_vitu2_query_window_g3

0xb1dd,	// (0x00055971) popup_vitu2_query_window_t6_ParamLimits

0xb1dd,	// (0x00055971) popup_vitu2_query_window_t6

0xb208,	// (0x0005599c) popup_vitu2_query_window_t7_ParamLimits

0xb208,	// (0x0005599c) popup_vitu2_query_window_t7

0xf059,	// (0x000597ed) cam4_grid_pane_g1

0xf062,	// (0x000597f6) cam4_grid_pane_g2

0x24da,	// (0x0004cc6e) cam4_grid_pane_g3

0x24e3,	// (0x0004cc77) cam4_grid_pane_g4

0x0003,

0xfe4e,	// (0x0005a5e2) cam4_grid_pane_g

0x6b12,	// (0x000512a6) aid_placing_vt_slider_lsc_ParamLimits

0x6e5e,	// (0x000515f2) vidtel_button_pane_ParamLimits

0x6e5e,	// (0x000515f2) vidtel_button_pane

0x2888,	// (0x0004d01c) bg_button_pane_cp034

0x24ee,	// (0x0004cc82) vidtel_button_pane_g1

0x24f6,	// (0x0004cc8a) vidtel_button_pane_t1

0xee1e,	// (0x000595b2) aid_size_vtel_slider_touch

0xf04d,	// (0x000597e1) scroll_pane_cp039

0xbf43,	// (0x000566d7) ncim_query_button_pane_cp01_ParamLimits

0xbf62,	// (0x000566f6) ncimui_query_pane_g1_ParamLimits

0x2f37,	// (0x0004d6cb) input_focus_pane_cp012_ParamLimits

0x1395,	// (0x0004bb29) ncim_query_entry_pane_t1_ParamLimits

0xf04d,	// (0x000597e1) scroll_pane_cp039_ParamLimits

0x3afa,	// (0x0004e28e) navi_pane_bcale_mc_g1

0x3b02,	// (0x0004e296) navi_pane_bcale_mc_t1

0x1922,	// (0x0004c0b6) main_sp_fs_email_pane_g1

0x192e,	// (0x0004c0c2) main_sp_fs_email_pane_g2

0x0001,

0xfc51,	// (0x0005a3e5) main_sp_fs_email_pane_g

0x1da9,	// (0x0004c53d) list_single_cale_mrui_row_pane_g3_ParamLimits

0x1da9,	// (0x0004c53d) list_single_cale_mrui_row_pane_g3

0xcd06,	// (0x0005749a) list_single_recal_day_pane_g5_event_pane

0x1f89,	// (0x0004c71d) list_single_recal_day_pane_g7

0x250c,	// (0x0004cca0) list_recal_day_event_pane_cp01

0x2515,	// (0x0004cca9) list_recal_vselct_arw_lo_pane_cp01

0x251d,	// (0x0004ccb1) list_recal_vselct_arw_up_pane_cp01

0x2525,	// (0x0004ccb9) list_recal_vselct_pane_cp01

0xee40,	// (0x000595d4) list_recal_day_event_pane_cp01_g1

0x252f,	// (0x0004ccc3) list_recal_day_event_pane_cp01_t1

0x1f91,	// (0x0004c725) list_single_recal_day_pane_t1_ParamLimits

0x1fa3,	// (0x0004c737) list_single_recal_day_pane_t2_ParamLimits

0xfd31,	// (0x0005a4c5) list_single_recal_day_pane_t_ParamLimits

0x2f63,	// (0x0004d6f7) bg_notes_pane_ParamLimits

0x3020,	// (0x0004d7b4) list_notes_pane_ParamLimits

0x61cc,	// (0x00050960) scroll_pane_cp06_ParamLimits

0x3042,	// (0x0004d7d6) main_notes_pane_ParamLimits

0x2f37,	// (0x0004d6cb) main_welc_pane

0xd789,	// (0x00057f1d) main_welc_body_pane_ParamLimits

0xd789,	// (0x00057f1d) main_welc_body_pane

0xd7a3,	// (0x00057f37) main_welc_opti_pane_ParamLimits

0xd7a3,	// (0x00057f37) main_welc_opti_pane

0xd802,	// (0x00057f96) main_welc_pane_t1_ParamLimits

0xd802,	// (0x00057f96) main_welc_pane_t1

0xd98a,	// (0x0005811e) main_welc_body_row_pane_ParamLimits

0xd98a,	// (0x0005811e) main_welc_body_row_pane

0x28b2,	// (0x0004d046) main_welc_opti_row_pane_ParamLimits

0x28b2,	// (0x0004d046) main_welc_opti_row_pane

0x254d,	// (0x0004cce1) main_welc_opti_row_pane_g1

0xd9af,	// (0x00058143) main_welc_opti_row_pane_t1

0x2555,	// (0x0004cce9) main_welc_body_row_pane_t1

0x2208,	// (0x0004c99c) popup_notif_wgt_heading_pane

0x2222,	// (0x0004c9b6) aid_size_list_notif_wgt_del_ParamLimits

0x222f,	// (0x0004c9c3) list_notif_wgt_row_pane_g1_ParamLimits

0x223b,	// (0x0004c9cf) list_notif_wgt_row_pane_g2_ParamLimits

0x224a,	// (0x0004c9de) list_notif_wgt_row_pane_g3_ParamLimits

0xfd98,	// (0x0005a52c) list_notif_wgt_row_pane_g_ParamLimits

0x2257,	// (0x0004c9eb) list_notif_wgt_row_pane_t1_ParamLimits

0x226d,	// (0x0004ca01) list_notif_wgt_row_pane_t2_ParamLimits

0x227f,	// (0x0004ca13) list_notif_wgt_row_pane_t3_ParamLimits

0xfd9f,	// (0x0005a533) list_notif_wgt_row_pane_t_ParamLimits

0xd181,	// (0x00057915) listrow_wgtman_pane_g1_ParamLimits

0xd18e,	// (0x00057922) listrow_wgtman_pane_g2_ParamLimits

0xfdcf,	// (0x0005a563) listrow_wgtman_pane_g_ParamLimits

0xd1ac,	// (0x00057940) listrow_wgtman_pane_t1_ParamLimits

0xd1c4,	// (0x00057958) listrow_wgtman_pane_t2_ParamLimits

0xfdd4,	// (0x0005a568) listrow_wgtman_pane_t_ParamLimits

0xd1ea,	// (0x0005797e) wait_bar_pane_cp09_ParamLimits

0x2888,	// (0x0004d01c) bg_popup_heading_pane_cp02

0x2564,	// (0x0004ccf8) popup_notif_wgt_heading_pane_g1

0x256c,	// (0x0004cd00) popup_notif_wgt_heading_pane_t1

0x2888,	// (0x0004d01c) main_vids_pane

0x2888,	// (0x0004d01c) vids_listscroll_pane

0xd9be,	// (0x00058152) scroll_pane_cp040

0x2888,	// (0x0004d01c) vids_list_pane

0xd9c9,	// (0x0005815d) vids_list_double_pane_ParamLimits

0xd9c9,	// (0x0005815d) vids_list_double_pane

0xd9e0,	// (0x00058174) vids_list_double_pane_g1

0xd9e9,	// (0x0005817d) vids_list_double_pane_t1

0xd9f9,	// (0x0005818d) vids_list_double_pane_t2

0x0001,

0xfe6d,	// (0x0005a601) vids_list_double_pane_t

0x8b27,	// (0x000532bb) main_ncimui_pane_ParamLimits

0xbd9a,	// (0x0005652e) main_ncimui_pane_g1_ParamLimits

0xbda6,	// (0x0005653a) main_ncimui_pane_g2_ParamLimits

0xbda6,	// (0x0005653a) main_ncimui_pane_g2

0x0001,

0xfb52,	// (0x0005a2e6) main_ncimui_pane_g_ParamLimits

0xfb52,	// (0x0005a2e6) main_ncimui_pane_g

0xd7bc,	// (0x00057f50) main_welc_pane_g1_ParamLimits

0xd7bc,	// (0x00057f50) main_welc_pane_g1

0xd7c8,	// (0x00057f5c) main_welc_pane_g2_ParamLimits

0xd7c8,	// (0x00057f5c) main_welc_pane_g2

0x0003,

0xfe57,	// (0x0005a5eb) main_welc_pane_g_ParamLimits

0xfe57,	// (0x0005a5eb) main_welc_pane_g

0x61ae,	// (0x00050942) listscroll_mce_pane_ParamLimits

0x3c4f,	// (0x0004e3e3) wait_bar_pane_cp10

0x4fb2,	// (0x0004f746) main_cale_day_pane_ParamLimits

0x4fb2,	// (0x0004f746) main_cale_week_pane_ParamLimits

0x2f63,	// (0x0004d6f7) main_messa_pane_ParamLimits

0x9800,	// (0x00053f94) main_clock2_btn_pane_ParamLimits

0x9800,	// (0x00053f94) main_clock2_btn_pane

0xe712,	// (0x00058ea6) main_clock2_btn_pane_cp01_ParamLimits

0xe712,	// (0x00058ea6) main_clock2_btn_pane_cp01

0x1d35,	// (0x0004c4c9) list_cale_mrui_pane_ParamLimits

0x22c3,	// (0x0004ca57) main_cf0_pane_g2

0x0001,

0xfda6,	// (0x0005a53a) main_cf0_pane_g

0xd391,	// (0x00057b25) area_left_week_number_pane_ParamLimits

0xd3a4,	// (0x00057b38) area_top_day_name_pane_ParamLimits

0xd3b2,	// (0x00057b46) frame_month_view_pane_ParamLimits

0x23dc,	// (0x0004cb70) grid_month_view_pane_ParamLimits

0x23ea,	// (0x0004cb7e) frm_month_g1_ParamLimits

0xd430,	// (0x00057bc4) frm_month_g2_ParamLimits

0xd441,	// (0x00057bd5) frm_month_g3_ParamLimits

0xd452,	// (0x00057be6) frm_month_g4_ParamLimits

0xd463,	// (0x00057bf7) frm_month_g5_ParamLimits

0xd476,	// (0x00057c0a) frm_month_g6_ParamLimits

0xd489,	// (0x00057c1d) frm_month_g7_ParamLimits

0x23f7,	// (0x0004cb8b) frm_month_g8_ParamLimits

0xd49c,	// (0x00057c30) frm_month_g9_ParamLimits

0xd4a9,	// (0x00057c3d) frm_month_g10_ParamLimits

0xd4b6,	// (0x00057c4a) frm_month_g11_ParamLimits

0xd4c3,	// (0x00057c57) frm_month_g12_ParamLimits

0xd4d0,	// (0x00057c64) frm_month_g13_ParamLimits

0xd4dd,	// (0x00057c71) frm_month_g14_ParamLimits

0xd4ec,	// (0x00057c80) frm_month_g15_ParamLimits

0xd4fb,	// (0x00057c8f) frm_month_g16_ParamLimits

0xfdfe,	// (0x0005a592) frm_month_g_ParamLimits

0x2404,	// (0x0004cb98) cell_top_day_name_pane_t1_ParamLimits

0xd50a,	// (0x00057c9e) cell_area_left_week_number_pane_g1_ParamLimits

0xd519,	// (0x00057cad) cell_area_left_week_number_pane_t1_ParamLimits

0x2fd0,	// (0x0004d764) cell_month_view_pane_g1_ParamLimits

0xd52f,	// (0x00057cc3) cell_month_view_pane_t1_ParamLimits

0x2f5b,	// (0x0004d6ef) main_clock2_btn_pane_g1

0x257a,	// (0x0004cd0e) main_clock2_btn_pane_t1

0x2f37,	// (0x0004d6cb) listscroll_cmail_pane_ParamLimits

0x1922,	// (0x0004c0b6) main_sp_fs_email_pane_g1_ParamLimits

0x192e,	// (0x0004c0c2) main_sp_fs_email_pane_g2_ParamLimits

0xfc51,	// (0x0005a3e5) main_sp_fs_email_pane_g_ParamLimits

0x1ef9,	// (0x0004c68d) list_recal_day_pane_ParamLimits

0x1f0a,	// (0x0004c69e) mian_recal_day_pane_t1

0xc6ee,	// (0x00056e82) list_single_dyc_row_text_pane_t4_ParamLimits

0xc6ee,	// (0x00056e82) list_single_dyc_row_text_pane_t4

0xc725,	// (0x00056eb9) list_single_dyc_row_text_pane_t5_ParamLimits

0xc725,	// (0x00056eb9) list_single_dyc_row_text_pane_t5

0x19d0,	// (0x0004c164) list_single_dyc_row_text_pane_t6_ParamLimits

0x19d0,	// (0x0004c164) list_single_dyc_row_text_pane_t6

0x35e6,	// (0x0004dd7a) aid_mgn_list_cale_time_pane

0x8b27,	// (0x000532bb) main_gallery2_pane_ParamLimits

0xe728,	// (0x00058ebc) main_clock2_pane_cp01_t1

0xe738,	// (0x00058ecc) main_clock2_pane_cp01_t3

0x0001,

0xf737,	// (0x00059ecb) main_clock2_pane_cp01_t

0x6621,	// (0x00050db5) cale_week_scroll_pane_g16_ParamLimits

0x6621,	// (0x00050db5) cale_week_scroll_pane_g16

0x31f4,	// (0x0004d988) vorec_slider_pane

0x24f6,	// (0x0004cc8a) vidtel_button_pane_t1_ParamLimits

0xcd61,	// (0x000574f5) main_fs_bigclock_clock_pane_g1_ParamLimits

0xcd61,	// (0x000574f5) main_fs_bigclock_clock_pane_g2_ParamLimits

0xcd6e,	// (0x00057502) main_fs_bigclock_clock_pane_g3_ParamLimits

0xcd6e,	// (0x00057502) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd54,	// (0x0005a4e8) main_fs_bigclock_clock_pane_g_ParamLimits

0xcd7a,	// (0x0005750e) main_fs_bigclock_clock_pane_t1_ParamLimits

0xcd8d,	// (0x00057521) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd5d,	// (0x0005a4f1) main_fs_bigclock_clock_pane_t_ParamLimits

0x919d,	// (0x00053931) main_mup3_lyrics_pane_ParamLimits

0x919d,	// (0x00053931) main_mup3_lyrics_pane

0xda2d,	// (0x000581c1) main_mup3_lyrics_pane_t1_ParamLimits

0xda2d,	// (0x000581c1) main_mup3_lyrics_pane_t1

0x9d2c,	// (0x000544c0) aid_main_mp4_pane_t1_area

0x9d36,	// (0x000544ca) aid_main_mp4_pane_t2_area

0x9e35,	// (0x000545c9) main_mp4_pane_g7_ParamLimits

0x9e35,	// (0x000545c9) main_mp4_pane_g7

0x9e41,	// (0x000545d5) main_mp4_pane_g8_ParamLimits

0x9e41,	// (0x000545d5) main_mp4_pane_g8

0xa261,	// (0x000549f5) aid_call6_pane_g1_size

0xd6b5,	// (0x00057e49) list_double_large_graphic_phob2_other_pane_ParamLimits

0xd6b5,	// (0x00057e49) list_double_large_graphic_phob2_other_pane

0x359e,	// (0x0004dd32) list_double_large_graphic_phob2_other_pane_g1

0x2888,	// (0x0004d01c) list_highlight_pane_cp026

0x2f37,	// (0x0004d6cb) main_welc_pane_ParamLimits

0xc567,	// (0x00056cfb) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0xc567,	// (0x00056cfb) main_sp_fs_ctrlbar_pane_g3

0xc57f,	// (0x00056d13) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0xc57f,	// (0x00056d13) main_sp_fs_ctrlbar_pane_g4

0xc5b1,	// (0x00056d45) toolbar2_fixed_button_pane_cp01

0xc5bc,	// (0x00056d50) toolbar2_fixed_button_pane_cp02

0xc5c7,	// (0x00056d5b) toolbar2_fixed_button_pane_cp03

0xd77a,	// (0x00057f0e) list_welc_entry_pane_ParamLimits

0xd77a,	// (0x00057f0e) list_welc_entry_pane

0xd7d6,	// (0x00057f6a) main_welc_pane_g3_ParamLimits

0xd7d6,	// (0x00057f6a) main_welc_pane_g3

0xd81c,	// (0x00057fb0) main_welc_pane_t2_ParamLimits

0xd81c,	// (0x00057fb0) main_welc_pane_t2

0xd830,	// (0x00057fc4) main_welc_pane_t3_ParamLimits

0xd830,	// (0x00057fc4) main_welc_pane_t3

0x0005,

0xfe60,	// (0x0005a5f4) main_welc_pane_t_ParamLimits

0xfe60,	// (0x0005a5f4) main_welc_pane_t

0xd92c,	// (0x000580c0) welc_button_pane_ParamLimits

0xd92c,	// (0x000580c0) welc_button_pane

0xd97c,	// (0x00058110) welc_service_logo_pane_ParamLimits

0xd97c,	// (0x00058110) welc_service_logo_pane

0xda5f,	// (0x000581f3) list_single_welc_entry_pane_ParamLimits

0xda5f,	// (0x000581f3) list_single_welc_entry_pane

0xda70,	// (0x00058204) list_single_welc_entry_pane_g1

0xda78,	// (0x0005820c) list_single_welc_entry_pane_t1

0xda86,	// (0x0005821a) list_single_welc_entry_pane_t2

0x0001,

0xfe72,	// (0x0005a606) list_single_welc_entry_pane_t

0x2888,	// (0x0004d01c) bg_button_pane_cp035

0x2588,	// (0x0004cd1c) welc_button_pane_t1

0x2596,	// (0x0004cd2a) welc_service_logo_pane_g1

0x259f,	// (0x0004cd33) welc_service_logo_pane_g2

0x0001,

0xfe77,	// (0x0005a60b) welc_service_logo_pane_g

0x5fae,	// (0x00050742) main_int_radio_pane

0x4658,	// (0x0004edec) list_single_fs_dyc_pane_g1

0xd5d2,	// (0x00057d66) list_double_large_graphic_phob2_pane_g3_ParamLimits

0xd5d2,	// (0x00057d66) list_double_large_graphic_phob2_pane_g3

0xd5de,	// (0x00057d72) list_double_large_graphic_phob2_pane_g4_ParamLimits

0xd5de,	// (0x00057d72) list_double_large_graphic_phob2_pane_g4

0xda94,	// (0x00058228) main_int_radio1_pane_ParamLimits

0xda94,	// (0x00058228) main_int_radio1_pane

0x25a8,	// (0x0004cd3c) find_pane_cp02

0xdaa6,	// (0x0005823a) input_focus_pane_cp12_ParamLimits

0xdaa6,	// (0x0005823a) input_focus_pane_cp12

0xdab2,	// (0x00058246) input_focus_pane_cp13_ParamLimits

0xdab2,	// (0x00058246) input_focus_pane_cp13

0xdaca,	// (0x0005825e) input_focus_pane_cp14_ParamLimits

0xdaca,	// (0x0005825e) input_focus_pane_cp14

0x25b1,	// (0x0004cd45) int_radio1_listscroll_pane

0xdae2,	// (0x00058276) main_int_radio1_pane_g1_ParamLimits

0xdae2,	// (0x00058276) main_int_radio1_pane_g1

0xdaf2,	// (0x00058286) main_int_radio1_pane_t1_ParamLimits

0xdaf2,	// (0x00058286) main_int_radio1_pane_t1

0xdb06,	// (0x0005829a) main_int_radio1_pane_t2_ParamLimits

0xdb06,	// (0x0005829a) main_int_radio1_pane_t2

0xdb1a,	// (0x000582ae) main_int_radio1_pane_t3_ParamLimits

0xdb1a,	// (0x000582ae) main_int_radio1_pane_t3

0xdb2e,	// (0x000582c2) main_int_radio1_pane_t4_ParamLimits

0xdb2e,	// (0x000582c2) main_int_radio1_pane_t4

0x25bb,	// (0x0004cd4f) main_int_radio1_pane_t5_ParamLimits

0x25bb,	// (0x0004cd4f) main_int_radio1_pane_t5

0xdb45,	// (0x000582d9) main_int_radio1_pane_t6_ParamLimits

0xdb45,	// (0x000582d9) main_int_radio1_pane_t6

0xdb57,	// (0x000582eb) main_int_radio1_pane_t7_ParamLimits

0xdb57,	// (0x000582eb) main_int_radio1_pane_t7

0xdb69,	// (0x000582fd) main_int_radio1_pane_t8_ParamLimits

0xdb69,	// (0x000582fd) main_int_radio1_pane_t8

0xdb7d,	// (0x00058311) main_int_radio1_pane_t9_ParamLimits

0xdb7d,	// (0x00058311) main_int_radio1_pane_t9

0xdb8f,	// (0x00058323) main_int_radio1_pane_t10_ParamLimits

0xdb8f,	// (0x00058323) main_int_radio1_pane_t10

0xdbc0,	// (0x00058354) main_int_radio1_pane_t11_ParamLimits

0xdbc0,	// (0x00058354) main_int_radio1_pane_t11

0xdbf1,	// (0x00058385) main_int_radio1_pane_t12_ParamLimits

0xdbf1,	// (0x00058385) main_int_radio1_pane_t12

0x000b,

0xfe7c,	// (0x0005a610) main_int_radio1_pane_t_ParamLimits

0xfe7c,	// (0x0005a610) main_int_radio1_pane_t

0x25cd,	// (0x0004cd61) int_radio_list_pane

0x241f,	// (0x0004cbb3) scroll_pane_cp037

0x25d5,	// (0x0004cd69) list_double_large_graphic_int_radio_pane_ParamLimits

0x25d5,	// (0x0004cd69) list_double_large_graphic_int_radio_pane

0x25ed,	// (0x0004cd81) list_double_large_graphic_int_radio_pane_g1

0x25f6,	// (0x0004cd8a) list_double_large_graphic_int_radio_pane_t1

0x2604,	// (0x0004cd98) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe95,	// (0x0005a629) list_double_large_graphic_int_radio_pane_t

0x2888,	// (0x0004d01c) list_highlight_pane_cp027

0x253d,	// (0x0004ccd1) main_button_pane_4

0xd7e2,	// (0x00057f76) main_welc_pane_g4_ParamLimits

0xd7e2,	// (0x00057f76) main_welc_pane_g4

0xd842,	// (0x00057fd6) main_welc_pane_t4_ParamLimits

0xd842,	// (0x00057fd6) main_welc_pane_t4

0xd854,	// (0x00057fe8) main_welc_pane_t5_ParamLimits

0xd854,	// (0x00057fe8) main_welc_pane_t5

0xd884,	// (0x00058018) main_welc_pane_t6_ParamLimits

0xd884,	// (0x00058018) main_welc_pane_t6

0xd93a,	// (0x000580ce) welc_button_pane_2_ParamLimits

0xd93a,	// (0x000580ce) welc_button_pane_2

0xd952,	// (0x000580e6) welc_button_pane_3_ParamLimits

0xd952,	// (0x000580e6) welc_button_pane_3

0x2545,	// (0x0004ccd9) welc_button_pane_4

0xd96c,	// (0x00058100) welc_button_pane_5_ParamLimits

0xd96c,	// (0x00058100) welc_button_pane_5

0x5d20,	// (0x000504b4) main_popup_welc_pane

0x2621,	// (0x0004cdb5) main_welc_sk_g3

0x262b,	// (0x0004cdbf) main_welc_sk_g4

0x2635,	// (0x0004cdc9) main_welc_sk_t3

0x2645,	// (0x0004cdd9) main_welc_sk_t4

0x2655,	// (0x0004cde9) popup_welc_pane_t4

0x2663,	// (0x0004cdf7) popup_welc_pane_t5

0x2673,	// (0x0004ce07) popup_welc_pane_t6

0x5fae,	// (0x00050742) main_acti_pane

0x2888,	// (0x0004d01c) main_sso_pane

0xdc08,	// (0x0005839c) sso_body_pane_ParamLimits

0xdc08,	// (0x0005839c) sso_body_pane

0xdc16,	// (0x000583aa) sso_logo_pane_ParamLimits

0xdc16,	// (0x000583aa) sso_logo_pane

0xdc3d,	// (0x000583d1) sso_sk_pane_ParamLimits

0xdc3d,	// (0x000583d1) sso_sk_pane

0x322a,	// (0x0004d9be) main_sso_logo_pane_g1

0xdc4a,	// (0x000583de) sso_sk_pane_t1_ParamLimits

0xdc4a,	// (0x000583de) sso_sk_pane_t1

0xdc5e,	// (0x000583f2) sso_sk_pane_t2_ParamLimits

0xdc5e,	// (0x000583f2) sso_sk_pane_t2

0x0001,

0xfe9a,	// (0x0005a62e) sso_sk_pane_t_ParamLimits

0xfe9a,	// (0x0005a62e) sso_sk_pane_t

0x26b1,	// (0x0004ce45) aid_sso_gap

0x26ba,	// (0x0004ce4e) aid_sso_txt1

0x26c4,	// (0x0004ce58) aid_sso_txt2

0x26ce,	// (0x0004ce62) aid_sso_txt3

0x0002,

0xfe9f,	// (0x0005a633) aid_sso_txt

0x26d8,	// (0x0004ce6c) aid_sso_widget

0xdcbd,	// (0x00058451) sso_btn_pane_ParamLimits

0xdcbd,	// (0x00058451) sso_btn_pane

0xdd36,	// (0x000584ca) sso_option_pane_ParamLimits

0xdd36,	// (0x000584ca) sso_option_pane

0xddb0,	// (0x00058544) sso_query_pane_ParamLimits

0xddb0,	// (0x00058544) sso_query_pane

0xde00,	// (0x00058594) sso_query_pane_cp01_ParamLimits

0xde00,	// (0x00058594) sso_query_pane_cp01

0xde52,	// (0x000585e6) sso_t_hdr_pane_ParamLimits

0xde52,	// (0x000585e6) sso_t_hdr_pane

0xde71,	// (0x00058605) sso_t_nml_pane_ParamLimits

0xde71,	// (0x00058605) sso_t_nml_pane

0x26ce,	// (0x0004ce62) sso_t_sub_pane

0xdc23,	// (0x000583b7) sso_popup_window_ParamLimits

0xdc23,	// (0x000583b7) sso_popup_window

0xdc70,	// (0x00058404) sso_apps_pane_ParamLimits

0xdc70,	// (0x00058404) sso_apps_pane

0xdc93,	// (0x00058427) sso_body_pane_g1

0xdc9d,	// (0x00058431) sso_body_pane_t1

0xdcad,	// (0x00058441) sso_body_pane_t2

0x0001,

0xfea6,	// (0x0005a63a) sso_body_pane_t

0xdd08,	// (0x0005849c) sso_btn_pane_cp01_ParamLimits

0xdd08,	// (0x0005849c) sso_btn_pane_cp01

0xdd82,	// (0x00058516) sso_prog_pane_ParamLimits

0xdd82,	// (0x00058516) sso_prog_pane

0x26e2,	// (0x0004ce76) sso_t_hdr_pane_t1_ParamLimits

0x26e2,	// (0x0004ce76) sso_t_hdr_pane_t1

0x26f5,	// (0x0004ce89) input_focus_pane_cp10_ParamLimits

0x26f5,	// (0x0004ce89) input_focus_pane_cp10

0x270b,	// (0x0004ce9f) sso_query_pane_t1_ParamLimits

0x270b,	// (0x0004ce9f) sso_query_pane_t1

0x271e,	// (0x0004ceb2) sso_query_pane_t2_ParamLimits

0x271e,	// (0x0004ceb2) sso_query_pane_t2

0x2739,	// (0x0004cecd) sso_query_pane_t3_ParamLimits

0x2739,	// (0x0004cecd) sso_query_pane_t3

0x2763,	// (0x0004cef7) sso_query_pane_t4_ParamLimits

0x2763,	// (0x0004cef7) sso_query_pane_t4

0x0003,

0xfeab,	// (0x0005a63f) sso_query_pane_t_ParamLimits

0xfeab,	// (0x0005a63f) sso_query_pane_t

0x2888,	// (0x0004d01c) bg_button_pane_cp22

0x2612,	// (0x0004cda6) sso_btn_pane_t1

0xdec1,	// (0x00058655) sso_t_nml_pane_t1_ParamLimits

0xdec1,	// (0x00058655) sso_t_nml_pane_t1

0x2787,	// (0x0004cf1b) sso_option_row_pane_ParamLimits

0x2787,	// (0x0004cf1b) sso_option_row_pane

0x2794,	// (0x0004cf28) sso_t_sub_pane_t1_ParamLimits

0x2794,	// (0x0004cf28) sso_t_sub_pane_t1

0x2f37,	// (0x0004d6cb) bg_popup_window_pane_cp11_ParamLimits

0x2f37,	// (0x0004d6cb) bg_popup_window_pane_cp11

0x27a7,	// (0x0004cf3b) popup_sk_window_cp01_ParamLimits

0x27a7,	// (0x0004cf3b) popup_sk_window_cp01

0x27b4,	// (0x0004cf48) sso_popup_body_pane_ParamLimits

0x27b4,	// (0x0004cf48) sso_popup_body_pane

0x27c1,	// (0x0004cf55) scroll_pane_cp21_ParamLimits

0x27c1,	// (0x0004cf55) scroll_pane_cp21

0x27ce,	// (0x0004cf62) sso_popup_body_t_pane_ParamLimits

0x27ce,	// (0x0004cf62) sso_popup_body_t_pane

0x27db,	// (0x0004cf6f) sso_popup_body_t_hdr_pane_ParamLimits

0x27db,	// (0x0004cf6f) sso_popup_body_t_hdr_pane

0x27e9,	// (0x0004cf7d) sso_popup_body_t_nml_pane_ParamLimits

0x27e9,	// (0x0004cf7d) sso_popup_body_t_nml_pane

0x2804,	// (0x0004cf98) sso_popup_body_t_sub_pane_ParamLimits

0x2804,	// (0x0004cf98) sso_popup_body_t_sub_pane

0x2827,	// (0x0004cfbb) sso_popup_body_t_hdr_pane_t1

0xdede,	// (0x00058672) sso_popup_body_t_nml_pane_t1_ParamLimits

0xdede,	// (0x00058672) sso_popup_body_t_nml_pane_t1

0x2837,	// (0x0004cfcb) sso_popup_body_t_sub_pane_t1_ParamLimits

0x2837,	// (0x0004cfcb) sso_popup_body_t_sub_pane_t1

0x322a,	// (0x0004d9be) sso_prog_pane_g1

0xdf1f,	// (0x000586b3) sso_apps_pane_comp1_ParamLimits

0xdf1f,	// (0x000586b3) sso_apps_pane_comp1

0x285c,	// (0x0004cff0) sso_apps_pane_comp1_g1

0x2864,	// (0x0004cff8) sso_apps_pane_comp1_t1

0x2872,	// (0x0004d006) sso_option_row_pane_g1

0x287a,	// (0x0004d00e) sso_option_row_pane_t1

0xd768,	// (0x00057efc) bg_welc_area_ParamLimits

0xd768,	// (0x00057efc) bg_welc_area

0xd8ba,	// (0x0005804e) sso_t_hdr_pane_a_t1_ParamLimits

0xd8ba,	// (0x0005804e) sso_t_hdr_pane_a_t1

0xd8ce,	// (0x00058062) sso_t_nml_pane_a_t1_ParamLimits

0xd8ce,	// (0x00058062) sso_t_nml_pane_a_t1

0xd8f8,	// (0x0005808c) sso_t_sub_pane_a_t1_ParamLimits

0xd8f8,	// (0x0005808c) sso_t_sub_pane_a_t1

0x2612,	// (0x0004cda6) sso_btn_pane_t1_copy1

0x2888,	// (0x0004d01c) welc_button_pane_2_comp1

0x2681,	// (0x0004ce15) sso_t_hdr_pane_p_t1

0x2691,	// (0x0004ce25) sso_t_nml_pane_p_t1

0x26a1,	// (0x0004ce35) sso_t_sub_pane_p_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

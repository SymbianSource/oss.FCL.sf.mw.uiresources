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

#include "aknlayoutscalable_abrw_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0007d71e };

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
0x591e,	// (0x0008303c) Screen

0x592a,	// (0x00083048) application_window

0x596a,	// (0x00083088) area_bottom_pane_ParamLimits

0x596a,	// (0x00083088) area_bottom_pane

0x599f,	// (0x000830bd) area_top_pane_ParamLimits

0x599f,	// (0x000830bd) area_top_pane

0x4149,	// (0x00081867) call_video_uplink_pane_ParamLimits

0x4149,	// (0x00081867) call_video_uplink_pane

0x5a2c,	// (0x0008314a) main_pane_ParamLimits

0x5a2c,	// (0x0008314a) main_pane

0x14ac,	// (0x0007ebca) context_pane

0x8ae9,	// (0x00086207) navi_pane

0x8b09,	// (0x00086227) popup_cale_events_window_ParamLimits

0x8b09,	// (0x00086227) popup_cale_events_window

0x14bf,	// (0x0007ebdd) popup_mup_playback_window

0x8b21,	// (0x0008623f) signal_pane

0x4923,	// (0x00082041) main_browser_pane

0xe52f,	// (0x0008bc4d) main_burst_pane

0x89b3,	// (0x000860d1) main_calc_pane

0xe52f,	// (0x0008bc4d) main_cale_day_pane

0x4923,	// (0x00082041) main_cale_month_pane

0xe52f,	// (0x0008bc4d) main_cale_week_pane

0xe52f,	// (0x0008bc4d) main_call_pane

0x45f1,	// (0x00081d0f) main_call_poc_pane

0xe52f,	// (0x0008bc4d) main_camera_pane

0xe52f,	// (0x0008bc4d) main_chi_dic_pane

0xe3b4,	// (0x0008bad2) main_clock_pane

0x45f1,	// (0x00081d0f) main_fmradio_pane

0xe52f,	// (0x0008bc4d) main_graph_messa_pane

0x45f1,	// (0x00081d0f) main_help_pane

0x4923,	// (0x00082041) main_im_pane

0x484c,	// (0x00081f6a) main_image_pane_ParamLimits

0x484c,	// (0x00081f6a) main_image_pane

0x45f1,	// (0x00081d0f) main_location2_pane

0xe52f,	// (0x0008bc4d) main_location_pane

0x45f1,	// (0x00081d0f) main_messa_pane

0x45f1,	// (0x00081d0f) main_mp2_pane

0xe52f,	// (0x0008bc4d) main_mp_pane

0x45f1,	// (0x00081d0f) main_msg_pane

0x45f1,	// (0x00081d0f) main_mup_eq_pane

0x45f1,	// (0x00081d0f) main_mup_pane

0xe52f,	// (0x0008bc4d) main_notes_pane

0x45f1,	// (0x00081d0f) main_pec_pane

0x45f1,	// (0x00081d0f) main_phob_pane

0x45f1,	// (0x00081d0f) main_pinb_pane

0x45f1,	// (0x00081d0f) main_postcard_pane

0x45f1,	// (0x00081d0f) main_qdial_pane

0xe52f,	// (0x0008bc4d) main_skin_pane

0x45f1,	// (0x00081d0f) main_smil2_pane

0xe52f,	// (0x0008bc4d) main_smil_pane

0xe52f,	// (0x0008bc4d) main_video_pane

0xe52f,	// (0x0008bc4d) main_video_tele_pane

0x484c,	// (0x00081f6a) main_viewer_pane_ParamLimits

0x484c,	// (0x00081f6a) main_viewer_pane

0xe52f,	// (0x0008bc4d) main_vorec_pane

0x89e9,	// (0x00086107) popup_blid_sat_info_window_ParamLimits

0x89e9,	// (0x00086107) popup_blid_sat_info_window

0x89ff,	// (0x0008611d) popup_dyc_status_message_window_ParamLimits

0x89ff,	// (0x0008611d) popup_dyc_status_message_window

0x8a0f,	// (0x0008612d) popup_grid_large_graphic_window_ParamLimits

0x8a0f,	// (0x0008612d) popup_grid_large_graphic_window

0x8a85,	// (0x000861a3) popup_loc_request_window_ParamLimits

0x8a85,	// (0x000861a3) popup_loc_request_window

0x8ac1,	// (0x000861df) popup_wml_address_window_ParamLimits

0x8ac1,	// (0x000861df) popup_wml_address_window

0x888b,	// (0x00085fa9) call_muted_g1

0x854d,	// (0x00085c6b) popup_call_audio_conf_window_ParamLimits

0x854d,	// (0x00085c6b) popup_call_audio_conf_window

0x889b,	// (0x00085fb9) popup_call_audio_first_window_ParamLimits

0x889b,	// (0x00085fb9) popup_call_audio_first_window

0x88db,	// (0x00085ff9) popup_call_audio_in_window_ParamLimits

0x88db,	// (0x00085ff9) popup_call_audio_in_window

0x88ff,	// (0x0008601d) popup_call_audio_out_window_ParamLimits

0x88ff,	// (0x0008601d) popup_call_audio_out_window

0x8921,	// (0x0008603f) popup_call_audio_second_window_ParamLimits

0x8921,	// (0x0008603f) popup_call_audio_second_window

0x8951,	// (0x0008606f) popup_call_audio_wait_window_ParamLimits

0x8951,	// (0x0008606f) popup_call_audio_wait_window

0x8972,	// (0x00086090) popup_number_entry_window_ParamLimits

0x8972,	// (0x00086090) popup_number_entry_window

0x4175,	// (0x00081893) bg_popup_call_pane_cp05_ParamLimits

0x4175,	// (0x00081893) bg_popup_call_pane_cp05

0x4195,	// (0x000818b3) popup_number_entry_window_t1

0x41a8,	// (0x000818c6) popup_number_entry_window_t2

0x41ba,	// (0x000818d8) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0008c80a) popup_number_entry_window_t

0x41cc,	// (0x000818ea) text_title_cp2

0x41df,	// (0x000818fd) bg_popup_call_pane_cp_ParamLimits

0x41df,	// (0x000818fd) bg_popup_call_pane_cp

0x41ed,	// (0x0008190b) call_thumbnail_pane

0x41f5,	// (0x00081913) popup_call_audio_in_window_g1_ParamLimits

0x41f5,	// (0x00081913) popup_call_audio_in_window_g1

0x4201,	// (0x0008191f) popup_call_audio_in_window_g2_ParamLimits

0x4201,	// (0x0008191f) popup_call_audio_in_window_g2

0x420d,	// (0x0008192b) popup_call_audio_in_window_g3_ParamLimits

0x420d,	// (0x0008192b) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0008c813) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0008c813) popup_call_audio_in_window_g

0x4219,	// (0x00081937) popup_call_audio_in_window_t1_ParamLimits

0x4219,	// (0x00081937) popup_call_audio_in_window_t1

0x4235,	// (0x00081953) popup_call_audio_in_window_t2_ParamLimits

0x4235,	// (0x00081953) popup_call_audio_in_window_t2

0x42ba,	// (0x000819d8) popup_call_audio_in_window_t3_ParamLimits

0x42ba,	// (0x000819d8) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0008c81a) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0008c81a) popup_call_audio_in_window_t

0x41df,	// (0x000818fd) bg_popup_call_pane_cp01_ParamLimits

0x41df,	// (0x000818fd) bg_popup_call_pane_cp01

0x41ed,	// (0x0008190b) call_thumbnail_pane_cp02

0x42cd,	// (0x000819eb) call_type_pane_cp022

0x42d5,	// (0x000819f3) popup_call_audio_out_window_g1_ParamLimits

0x42d5,	// (0x000819f3) popup_call_audio_out_window_g1

0x42e7,	// (0x00081a05) popup_call_audio_out_window_g2_ParamLimits

0x42e7,	// (0x00081a05) popup_call_audio_out_window_g2

0x42f3,	// (0x00081a11) popup_call_audio_out_window_g3_ParamLimits

0x42f3,	// (0x00081a11) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0008c821) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0008c821) popup_call_audio_out_window_g

0x4305,	// (0x00081a23) popup_call_audio_out_window_t1_ParamLimits

0x4305,	// (0x00081a23) popup_call_audio_out_window_t1

0x431d,	// (0x00081a3b) popup_call_audio_out_window_t2_ParamLimits

0x431d,	// (0x00081a3b) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0008c828) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0008c828) popup_call_audio_out_window_t

0x4332,	// (0x00081a50) bg_popup_call_pane_ParamLimits

0x4332,	// (0x00081a50) bg_popup_call_pane

0x5c0d,	// (0x0008332b) call_thumbnail_pane_cp_ParamLimits

0x5c0d,	// (0x0008332b) call_thumbnail_pane_cp

0x43b6,	// (0x00081ad4) call_type_pane_cp01_ParamLimits

0x43b6,	// (0x00081ad4) call_type_pane_cp01

0x43fa,	// (0x00081b18) popup_call_audio_first_window_g1_ParamLimits

0x43fa,	// (0x00081b18) popup_call_audio_first_window_g1

0x4446,	// (0x00081b64) popup_call_audio_first_window_g2_ParamLimits

0x4446,	// (0x00081b64) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0008c82d) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0008c82d) popup_call_audio_first_window_g

0x448a,	// (0x00081ba8) popup_call_audio_first_window_t1_ParamLimits

0x448a,	// (0x00081ba8) popup_call_audio_first_window_t1

0x4536,	// (0x00081c54) popup_call_audio_first_window_t4_ParamLimits

0x4536,	// (0x00081c54) popup_call_audio_first_window_t4

0x45c2,	// (0x00081ce0) popup_call_audio_first_window_t5_ParamLimits

0x45c2,	// (0x00081ce0) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0008c832) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0008c832) popup_call_audio_first_window_t

0x45f1,	// (0x00081d0f) bg_popup_call_pane_cp02

0x45fb,	// (0x00081d19) call_type_pane_cp023

0x4603,	// (0x00081d21) popup_call_audio_wait_window_g1

0x460b,	// (0x00081d29) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008c839) popup_call_audio_wait_window_g

0x4613,	// (0x00081d31) popup_call_audio_wait_window_t3

0x4621,	// (0x00081d3f) bg_popup_call_pane_cp03_ParamLimits

0x4621,	// (0x00081d3f) bg_popup_call_pane_cp03

0x4681,	// (0x00081d9f) call_thumbnail_pane_cp011_ParamLimits

0x4681,	// (0x00081d9f) call_thumbnail_pane_cp011

0x468d,	// (0x00081dab) call_type_pane_cp034_ParamLimits

0x468d,	// (0x00081dab) call_type_pane_cp034

0x46c9,	// (0x00081de7) popup_call_audio_second_window_g1_ParamLimits

0x46c9,	// (0x00081de7) popup_call_audio_second_window_g1

0x4705,	// (0x00081e23) popup_call_audio_second_window_g2_ParamLimits

0x4705,	// (0x00081e23) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0008c83e) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0008c83e) popup_call_audio_second_window_g

0x4741,	// (0x00081e5f) popup_call_audio_second_window_t1_ParamLimits

0x4741,	// (0x00081e5f) popup_call_audio_second_window_t1

0x47c2,	// (0x00081ee0) popup_call_audio_second_window_t2_ParamLimits

0x47c2,	// (0x00081ee0) popup_call_audio_second_window_t2

0x47f8,	// (0x00081f16) popup_call_audio_second_window_t3_ParamLimits

0x47f8,	// (0x00081f16) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0008c843) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0008c843) popup_call_audio_second_window_t

0x45f1,	// (0x00081d0f) bg_popup_call_pane_cp04

0x482e,	// (0x00081f4c) list_conf_pane

0x4836,	// (0x00081f54) popup_call_audio_conf_window_t1

0x4844,	// (0x00081f62) call_thumbnail_pane_g1

0x484c,	// (0x00081f6a) bg_pinb_pane_ParamLimits

0x484c,	// (0x00081f6a) bg_pinb_pane

0x485a,	// (0x00081f78) find_pinb_pane

0x4863,	// (0x00081f81) listscroll_pinb_pane_ParamLimits

0x4863,	// (0x00081f81) listscroll_pinb_pane

0x4872,	// (0x00081f90) pinb_bg_pane_g1

0x5c31,	// (0x0008334f) pinb_bg_pane_g2

0x5c3d,	// (0x0008335b) pinb_bg_pane_g3

0x5c49,	// (0x00083367) pinb_bg_pane_g4

0x5c55,	// (0x00083373) pinb_bg_pane_g5

0x5c61,	// (0x0008337f) pinb_bg_pane_g6

0x5c6c,	// (0x0008338a) pinb_bg_pane_g7

0x5c77,	// (0x00083395) pinb_bg_pane_g8

0x5c82,	// (0x000833a0) pinb_bg_pane_g9

0x5c8c,	// (0x000833aa) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0008c84a) pinb_bg_pane_g

0x5ca9,	// (0x000833c7) grid_pinb_pane

0x5cb4,	// (0x000833d2) list_pinb_pane

0x5cbf,	// (0x000833dd) scroll_pane_cp01_ParamLimits

0x5cbf,	// (0x000833dd) scroll_pane_cp01

0x487c,	// (0x00081f9a) find_pinb_pane_g1_ParamLimits

0x487c,	// (0x00081f9a) find_pinb_pane_g1

0x4894,	// (0x00081fb2) find_pinb_pane_t1

0x48a6,	// (0x00081fc4) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0008c864) find_pinb_pane_t

0x48bb,	// (0x00081fd9) input_focus_pane_cp01_ParamLimits

0x48bb,	// (0x00081fd9) input_focus_pane_cp01

0x5cd1,	// (0x000833ef) cell_pinb_pane_ParamLimits

0x5cd1,	// (0x000833ef) cell_pinb_pane

0x5cf6,	// (0x00083414) cell_pinb_pane_g1_ParamLimits

0x5cf6,	// (0x00083414) cell_pinb_pane_g1

0x5d0b,	// (0x00083429) cell_pinb_pane_g2_ParamLimits

0x5d0b,	// (0x00083429) cell_pinb_pane_g2

0x48c7,	// (0x00081fe5) cell_pinb_pane_g3_ParamLimits

0x48c7,	// (0x00081fe5) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0008c869) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0008c869) cell_pinb_pane_g

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp01

0x5d17,	// (0x00083435) list_pinb_item_pane_ParamLimits

0x5d17,	// (0x00083435) list_pinb_item_pane

0x45f1,	// (0x00081d0f) list_highlight_pane_cp02

0x5d37,	// (0x00083455) list_pinb_item_pane_g1_ParamLimits

0x5d37,	// (0x00083455) list_pinb_item_pane_g1

0x48d3,	// (0x00081ff1) list_pinb_item_pane_g2_ParamLimits

0x48d3,	// (0x00081ff1) list_pinb_item_pane_g2

0x5d44,	// (0x00083462) list_pinb_item_pane_g3_ParamLimits

0x5d44,	// (0x00083462) list_pinb_item_pane_g3

0x5d55,	// (0x00083473) list_pinb_item_pane_g4_ParamLimits

0x5d55,	// (0x00083473) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0008c870) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0008c870) list_pinb_item_pane_g

0x5d61,	// (0x0008347f) list_pinb_item_pane_t1_ParamLimits

0x5d61,	// (0x0008347f) list_pinb_item_pane_t1

0x5d92,	// (0x000834b0) calc_display_pane

0x5db0,	// (0x000834ce) calc_paper_pane

0x5dcc,	// (0x000834ea) grid_calc_pane

0x45f1,	// (0x00081d0f) bg_list_pane_cp01

0x5df6,	// (0x00083514) clock_g1

0x5dfe,	// (0x0008351c) clock_g2

0x0001,

0xf15b,	// (0x0008c879) clock_g

0x5e08,	// (0x00083526) clock_t1_ParamLimits

0x5e08,	// (0x00083526) clock_t1

0x5e1d,	// (0x0008353b) clock_t2_ParamLimits

0x5e1d,	// (0x0008353b) clock_t2

0x5e2f,	// (0x0008354d) clock_t3_ParamLimits

0x5e2f,	// (0x0008354d) clock_t3

0x5e41,	// (0x0008355f) clock_t4_ParamLimits

0x5e41,	// (0x0008355f) clock_t4

0x5e53,	// (0x00083571) clock_t5_ParamLimits

0x5e53,	// (0x00083571) clock_t5

0x5e68,	// (0x00083586) clock_t6_ParamLimits

0x5e68,	// (0x00083586) clock_t6

0x5e7a,	// (0x00083598) clock_t7_ParamLimits

0x5e7a,	// (0x00083598) clock_t7

0x5e8c,	// (0x000835aa) clock_t8_ParamLimits

0x5e8c,	// (0x000835aa) clock_t8

0x5ea2,	// (0x000835c0) clock_t9_ParamLimits

0x5ea2,	// (0x000835c0) clock_t9

0x0008,

0xf160,	// (0x0008c87e) clock_t_ParamLimits

0xf160,	// (0x0008c87e) clock_t

0x48df,	// (0x00081ffd) popup_clock_analogue_window_cp02

0x48df,	// (0x00081ffd) popup_clock_digital_window_cp01

0x48e7,	// (0x00082005) listscroll_help_pane

0x45f1,	// (0x00081d0f) phob_pre_status_pane

0x48f1,	// (0x0008200f) grid_qdial_pane

0x45f1,	// (0x00081d0f) listscroll_mce_pane

0x48fb,	// (0x00082019) bg_notes_pane

0x4905,	// (0x00082023) list_notes_pane

0x5eb8,	// (0x000835d6) scroll_pane_cp06

0x490f,	// (0x0008202d) bg_calc_paper_pane

0x5ecd,	// (0x000835eb) list_calc_pane

0x4923,	// (0x00082041) bg_calc_display_pane

0x5ee7,	// (0x00083605) calc_display_pane_t1

0x5efc,	// (0x0008361a) calc_display_pane_t2

0x5f11,	// (0x0008362f) calc_display_pane_t3

0x0002,

0xf173,	// (0x0008c891) calc_display_pane_t

0x5f23,	// (0x00083641) cell_calc_pane_ParamLimits

0x5f23,	// (0x00083641) cell_calc_pane

0x492f,	// (0x0008204d) bg_calc_paper_pane_g1

0x4947,	// (0x00082065) bg_calc_paper_pane_g2

0x493b,	// (0x00082059) bg_calc_paper_pane_g3

0x495f,	// (0x0008207d) bg_calc_paper_pane_g4

0x4953,	// (0x00082071) bg_calc_paper_pane_g5

0x5f50,	// (0x0008366e) bg_calc_paper_pane_g6

0x5f61,	// (0x0008367f) bg_calc_paper_pane_g7

0x5f72,	// (0x00083690) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0008c898) bg_calc_paper_pane_g

0x5f83,	// (0x000836a1) calc_bg_paper_pane_g9

0x5f94,	// (0x000836b2) list_calc_item_pane_ParamLimits

0x5f94,	// (0x000836b2) list_calc_item_pane

0x496b,	// (0x00082089) list_calc_item_pane_g1

0x5fc3,	// (0x000836e1) list_calc_item_pane_t1_ParamLimits

0x5fc3,	// (0x000836e1) list_calc_item_pane_t1

0x5fd5,	// (0x000836f3) list_calc_item_pane_t2_ParamLimits

0x5fd5,	// (0x000836f3) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0008c8a9) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0008c8a9) list_calc_item_pane_t

0x4978,	// (0x00082096) cell_calc_pane_g1

0x4982,	// (0x000820a0) grid_highlight_pane_cp02

0x6005,	// (0x00083723) bg_calc_display_pane_g1

0x600e,	// (0x0008372c) bg_calc_display_pane_g2

0x198e,	// (0x0007f0ac) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0008c8b3) bg_calc_display_pane_g

0x6018,	// (0x00083736) cell_qdial_pane_ParamLimits

0x6018,	// (0x00083736) cell_qdial_pane

0x602c,	// (0x0008374a) cell_qdial_pane_g1_ParamLimits

0x602c,	// (0x0008374a) cell_qdial_pane_g1

0x6039,	// (0x00083757) cell_qdial_pane_g2_ParamLimits

0x6039,	// (0x00083757) cell_qdial_pane_g2

0x49a4,	// (0x000820c2) cell_qdial_pane_g3_ParamLimits

0x49a4,	// (0x000820c2) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0008c8ba) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0008c8ba) cell_qdial_pane_g

0x6057,	// (0x00083775) cell_qdial_pane_t1_ParamLimits

0x6057,	// (0x00083775) cell_qdial_pane_t1

0x606f,	// (0x0008378d) cell_qdial_pane_t2_ParamLimits

0x606f,	// (0x0008378d) cell_qdial_pane_t2

0x6082,	// (0x000837a0) cell_qdial_pane_t3_ParamLimits

0x6082,	// (0x000837a0) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0008c8c3) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0008c8c3) cell_qdial_pane_t

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp04

0x49b0,	// (0x000820ce) thumbnail_qdial_pane_ParamLimits

0x49b0,	// (0x000820ce) thumbnail_qdial_pane

0x4a0c,	// (0x0008212a) list_help_pane

0x4a15,	// (0x00082133) scroll_pane_cp02

0x6095,	// (0x000837b3) help_list_pane_t1_ParamLimits

0x6095,	// (0x000837b3) help_list_pane_t1

0x60c8,	// (0x000837e6) bg_notes_pane_g2

0x60d0,	// (0x000837ee) bg_notes_pane_g3

0x60d8,	// (0x000837f6) notes_bg_pane_g1

0x60e0,	// (0x000837fe) notes_bg_pane_g4

0x60e8,	// (0x00083806) notes_bg_pane_g5

0x60f0,	// (0x0008380e) notes_bg_pane_g6

0x60f8,	// (0x00083816) notes_bg_pane_g7

0x6100,	// (0x0008381e) notes_bg_pane_g8

0x6108,	// (0x00083826) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0008c8e1) notes_bg_pane_g

0x6110,	// (0x0008382e) list_notes_text_pane_ParamLimits

0x6110,	// (0x0008382e) list_notes_text_pane

0xdb4b,	// (0x0008b269) list_notes_text_pane_g1

0x6135,	// (0x00083853) list_notes_text_pane_t1

0x4923,	// (0x00082041) listscroll_cale_week_pane

0x6160,	// (0x0008387e) bg_cale_heading_pane

0xdb65,	// (0x0008b283) bg_cale_pane_cp01

0x617c,	// (0x0008389a) cale_week_corner_pane

0x6192,	// (0x000838b0) cale_week_day_heading_pane

0x61ae,	// (0x000838cc) cale_week_scroll_pane_g1

0x61c7,	// (0x000838e5) cale_week_scroll_pane_g2

0x61d8,	// (0x000838f6) cale_week_scroll_pane_g3

0x61e9,	// (0x00083907) cale_week_scroll_pane_g4

0x61fa,	// (0x00083918) cale_week_scroll_pane_g5

0x620b,	// (0x00083929) cale_week_scroll_pane_g6

0x621c,	// (0x0008393a) cale_week_scroll_pane_g7

0x622f,	// (0x0008394d) cale_week_scroll_pane_g8

0x6242,	// (0x00083960) cale_week_scroll_pane_g9

0x6253,	// (0x00083971) cale_week_scroll_pane_g10

0x6264,	// (0x00083982) cale_week_scroll_pane_g11

0x6275,	// (0x00083993) cale_week_scroll_pane_g12

0x6286,	// (0x000839a4) cale_week_scroll_pane_g13

0x629f,	// (0x000839bd) cale_week_scroll_pane_g14

0x62b8,	// (0x000839d6) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0008c8f0) cale_week_scroll_pane_g

0x62d1,	// (0x000839ef) cale_week_time_pane

0x62e4,	// (0x00083a02) grid_cale_week_pane

0x6301,	// (0x00083a1f) scroll_pane_cp08

0x631b,	// (0x00083a39) cell_cale_week_pane_ParamLimits

0x631b,	// (0x00083a39) cell_cale_week_pane

0x6367,	// (0x00083a85) cale_week_day_heading_pane_t1

0x6380,	// (0x00083a9e) cale_week_day_heading_pane_t2

0x6399,	// (0x00083ab7) cale_week_day_heading_pane_t3

0x63b2,	// (0x00083ad0) cale_week_day_heading_pane_t4

0x63cb,	// (0x00083ae9) cale_week_day_heading_pane_t5

0x63e4,	// (0x00083b02) cale_week_day_heading_pane_t6

0x63fd,	// (0x00083b1b) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0008c90f) cale_week_day_heading_pane_t

0xdb90,	// (0x0008b2ae) bg_cale_side_pane

0x6416,	// (0x00083b34) cale_week_time_pane_t1

0x642e,	// (0x00083b4c) cale_week_time_pane_t2

0x6446,	// (0x00083b64) cale_week_time_pane_t3

0x645e,	// (0x00083b7c) cale_week_time_pane_t4

0x6476,	// (0x00083b94) cale_week_time_pane_t5

0x648e,	// (0x00083bac) cale_week_time_pane_t6

0x64a6,	// (0x00083bc4) cale_week_time_pane_t7

0x64c6,	// (0x00083be4) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0008c91e) cale_week_time_pane_t

0x64e6,	// (0x00083c04) cell_cale_week_pane_g2

0x64f7,	// (0x00083c15) cell_cale_week_pane_g3_ParamLimits

0x64f7,	// (0x00083c15) cell_cale_week_pane_g3

0xdb9e,	// (0x0008b2bc) grid_highlight_pane_cp07

0xdba6,	// (0x0008b2c4) listscroll_gms_pane

0xdbb0,	// (0x0008b2ce) grid_gms_pane

0xdbb9,	// (0x0008b2d7) listscroll_gms_pane_g1

0xdbc1,	// (0x0008b2df) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0008c92f) listscroll_gms_pane_g

0x650f,	// (0x00083c2d) scroll_pane_cp010

0x651a,	// (0x00083c38) cell_gms_pane_ParamLimits

0x651a,	// (0x00083c38) cell_gms_pane

0x652d,	// (0x00083c4b) cell_gms_pane_g1

0xdbc9,	// (0x0008b2e7) cell_gms_pane_g2

0xdbd1,	// (0x0008b2ef) cell_gms_pane_g3

0xdbda,	// (0x0008b2f8) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0008c934) cell_gms_pane_g

0xdbe3,	// (0x0008b301) grid_highlight_pane_cp09

0x8833,	// (0x00085f51) phob_pre_status_pane_g1

0x883b,	// (0x00085f59) phob_pre_status_pane_g2

0x8843,	// (0x00085f61) phob_pre_status_pane_g3

0x884b,	// (0x00085f69) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0008cd23) phob_pre_status_pane_g

0x885b,	// (0x00085f79) phob_pre_status_pane_t1

0x886b,	// (0x00085f89) phob_pre_status_pane_t2

0x887b,	// (0x00085f99) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0008cd2e) phob_pre_status_pane_t

0x45f1,	// (0x00081d0f) bg_list_pane_cp05

0x653d,	// (0x00083c5b) grid_vorec_pane

0x6547,	// (0x00083c65) vorec_t1

0x6555,	// (0x00083c73) vorec_t2

0x6563,	// (0x00083c81) vorec_t3

0x6571,	// (0x00083c8f) vorec_t4

0x657f,	// (0x00083c9d) vorec_t5

0x658d,	// (0x00083cab) vorec_t6

0x0006,

0xf21f,	// (0x0008c93d) vorec_t

0x65a9,	// (0x00083cc7) wait_bar_pane_cp01

0x65b1,	// (0x00083ccf) cell_vorec_pane_ParamLimits

0x65b1,	// (0x00083ccf) cell_vorec_pane

0xdbeb,	// (0x0008b309) cell_vorec_pane_g1

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp05

0x65d4,	// (0x00083cf2) cams_zoom_pane

0x65e0,	// (0x00083cfe) image_vga_pane

0x65ef,	// (0x00083d0d) main_camera_pane_g1

0x65fd,	// (0x00083d1b) main_camera_pane_g2

0x6609,	// (0x00083d27) main_camera_pane_g3

0x6615,	// (0x00083d33) main_camera_pane_g4

0x6621,	// (0x00083d3f) main_camera_pane_g5

0x662d,	// (0x00083d4b) main_camera_pane_g6

0x6639,	// (0x00083d57) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0008c94c) main_camera_pane_g

0x6645,	// (0x00083d63) main_camera_pane_t1

0x6657,	// (0x00083d75) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0008c95d) main_camera_pane_t

0x6678,	// (0x00083d96) cams_zoom_pane_cp_ParamLimits

0x6678,	// (0x00083d96) cams_zoom_pane_cp

0x669c,	// (0x00083dba) image_cif_pane_ParamLimits

0x669c,	// (0x00083dba) image_cif_pane

0x66ba,	// (0x00083dd8) image_subqcif_pane

0x66c2,	// (0x00083de0) main_video_pane_g1_ParamLimits

0x66c2,	// (0x00083de0) main_video_pane_g1

0x66e2,	// (0x00083e00) main_video_pane_g2_ParamLimits

0x66e2,	// (0x00083e00) main_video_pane_g2

0x6712,	// (0x00083e30) main_video_pane_g3_ParamLimits

0x6712,	// (0x00083e30) main_video_pane_g3

0x673b,	// (0x00083e59) main_video_pane_g4_ParamLimits

0x673b,	// (0x00083e59) main_video_pane_g4

0x6764,	// (0x00083e82) main_video_pane_g5_ParamLimits

0x6764,	// (0x00083e82) main_video_pane_g5

0xdc01,	// (0x0008b31f) main_video_pane_g6_ParamLimits

0xdc01,	// (0x0008b31f) main_video_pane_g6

0x0006,

0xf244,	// (0x0008c962) main_video_pane_g_ParamLimits

0xf244,	// (0x0008c962) main_video_pane_g

0x6788,	// (0x00083ea6) main_video_pane_t1_ParamLimits

0x6788,	// (0x00083ea6) main_video_pane_t1

0xdc1b,	// (0x0008b339) cams_zoom_pane_g1

0xdc24,	// (0x0008b342) cams_zoom_pane_g2

0xdc2d,	// (0x0008b34b) cams_zoom_pane_g3

0xdc36,	// (0x0008b354) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0008c971) cams_zoom_pane_g

0x67d2,	// (0x00083ef0) grid_cams_pane

0x67e0,	// (0x00083efe) linegrid_cams_pane

0x67ee,	// (0x00083f0c) cell_cams_pane_ParamLimits

0x67ee,	// (0x00083f0c) cell_cams_pane

0xdc3f,	// (0x0008b35d) cams_burst_image_pane

0xdc47,	// (0x0008b365) cell_cams_pane_g1

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp03

0x4978,	// (0x00082096) mp_bg_pane_g1

0x45f1,	// (0x00081d0f) bg_list_pane_cp03

0x1384,	// (0x0007eaa2) bg_mp_pane

0x138c,	// (0x0007eaaa) grid_mp_pane

0x1394,	// (0x0007eab2) media_player_g1

0x139c,	// (0x0007eaba) media_player_t1

0x13aa,	// (0x0007eac8) media_player_t2

0x13b8,	// (0x0007ead6) media_player_t3

0x13c6,	// (0x0007eae4) media_player_t4

0x13d4,	// (0x0007eaf2) media_player_t5

0x13e2,	// (0x0007eb00) media_player_t6

0x13f0,	// (0x0007eb0e) media_player_t7

0x0006,

0xf5ef,	// (0x0008cd0d) media_player_t

0x13fe,	// (0x0007eb1c) wait_bar_pane_cp02

0xf5d4,	// (0x0008ccf2) main_usb_pane_t

0x882a,	// (0x00085f48) cell_mp_pane

0x4978,	// (0x00082096) cell_mp_pane_g1

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp06

0xdc4f,	// (0x0008b36d) grid_skin_colour_pane

0xdc57,	// (0x0008b375) list_highlight_pane_cp03

0x6858,	// (0x00083f76) skin_g1

0xdc5f,	// (0x0008b37d) skin_t1

0xdc6e,	// (0x0008b38c) skin_t2

0x0001,

0xf288,	// (0x0008c9a6) skin_t

0x6862,	// (0x00083f80) cell_skin_colour_pane_ParamLimits

0x6862,	// (0x00083f80) cell_skin_colour_pane

0xdc7c,	// (0x0008b39a) cell_skin_colour_pane_g1

0x68e4,	// (0x00084002) call_video_g1_ParamLimits

0x68e4,	// (0x00084002) call_video_g1

0x68f4,	// (0x00084012) call_video_g2_ParamLimits

0x68f4,	// (0x00084012) call_video_g2

0x0001,

0xf28d,	// (0x0008c9ab) call_video_g_ParamLimits

0xf28d,	// (0x0008c9ab) call_video_g

0x694e,	// (0x0008406c) call_video_uplink_pane_cp1_ParamLimits

0x694e,	// (0x0008406c) call_video_uplink_pane_cp1

0xdc8e,	// (0x0008b3ac) call_video_uplink_pane_cp2

0x6a1a,	// (0x00084138) video_down_crop_pane_ParamLimits

0x6a1a,	// (0x00084138) video_down_crop_pane

0x6b18,	// (0x00084236) video_down_pane_ParamLimits

0x6b18,	// (0x00084236) video_down_pane

0xdc96,	// (0x0008b3b4) video_down_subqcif_pane_ParamLimits

0xdc96,	// (0x0008b3b4) video_down_subqcif_pane

0xdcae,	// (0x0008b3cc) video_down_subqcif_pane_cp_ParamLimits

0xdcae,	// (0x0008b3cc) video_down_subqcif_pane_cp

0xdcd2,	// (0x0008b3f0) im_reading_pane_ParamLimits

0xdcd2,	// (0x0008b3f0) im_reading_pane

0x6c3a,	// (0x00084358) im_writing_pane_ParamLimits

0x6c3a,	// (0x00084358) im_writing_pane

0x6c58,	// (0x00084376) im_reading_pane_t1

0xdcec,	// (0x0008b40a) list_im_pane

0xdcfd,	// (0x0008b41b) scroll_pane_cp07

0x6cac,	// (0x000843ca) im_writing_pane_t1_ParamLimits

0x6cac,	// (0x000843ca) im_writing_pane_t1

0xdd16,	// (0x0008b434) im_writing_pane_t2_ParamLimits

0xdd16,	// (0x0008b434) im_writing_pane_t2

0x0001,

0xf297,	// (0x0008c9b5) im_writing_pane_t_ParamLimits

0xf297,	// (0x0008c9b5) im_writing_pane_t

0x45f1,	// (0x00081d0f) input_focus_pane_cp04

0x45f1,	// (0x00081d0f) input_focus_pane_cp05

0x6cc1,	// (0x000843df) list_im_single_pane_ParamLimits

0x6cc1,	// (0x000843df) list_im_single_pane

0x6ce5,	// (0x00084403) list_single_im_pane_t1

0x87ee,	// (0x00085f0c) blid_accuracy_pane

0x87f6,	// (0x00085f14) blid_compass_pane

0x8800,	// (0x00085f1e) main_location_t1

0x880e,	// (0x00085f2c) main_location_t2

0x881c,	// (0x00085f3a) main_location_t3

0x0002,

0xf5fe,	// (0x0008cd1c) main_location_t

0x45f1,	// (0x00081d0f) aid_levels_location

0x4978,	// (0x00082096) blid_accuracy_pane_g1

0x4978,	// (0x00082096) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0008ca17) blid_accuracy_pane_g

0xdd5e,	// (0x0008b47c) wml_content_pane

0xdd9c,	// (0x0008b4ba) wml_button_pane_ParamLimits

0xdd9c,	// (0x0008b4ba) wml_button_pane

0x6cf4,	// (0x00084412) wml_list_single_large_pane_ParamLimits

0x6cf4,	// (0x00084412) wml_list_single_large_pane

0x6d1e,	// (0x0008443c) wml_list_single_medium_pane_ParamLimits

0x6d1e,	// (0x0008443c) wml_list_single_medium_pane

0x6d4f,	// (0x0008446d) wml_list_single_small_pane_ParamLimits

0x6d4f,	// (0x0008446d) wml_list_single_small_pane

0xddb0,	// (0x0008b4ce) wml_selection_box_pane_ParamLimits

0xddb0,	// (0x0008b4ce) wml_selection_box_pane

0xddc3,	// (0x0008b4e1) wml_list_single_pane_t1

0xddd2,	// (0x0008b4f0) wml_list_single_medium_pane_t1

0xdde1,	// (0x0008b4ff) wml_list_single_large_pane_t1

0xddf0,	// (0x0008b50e) input_focus_pane_cp02_ParamLimits

0xddf0,	// (0x0008b50e) input_focus_pane_cp02

0xde03,	// (0x0008b521) wml_selection_box_pane_g1

0xde0c,	// (0x0008b52a) wml_selection_box_pane_t1_ParamLimits

0xde0c,	// (0x0008b52a) wml_selection_box_pane_t1

0x484c,	// (0x00081f6a) bg_wml_button_pane_ParamLimits

0x484c,	// (0x00081f6a) bg_wml_button_pane

0xde24,	// (0x0008b542) wml_button_pane_g1

0xde2c,	// (0x0008b54a) wml_button_pane_t1

0xde24,	// (0x0008b542) wml_button_bg_pane_g1

0xde3c,	// (0x0008b55a) wml_button_bg_pane_g2

0xde44,	// (0x0008b562) wml_button_bg_pane_g3

0xde4c,	// (0x0008b56a) wml_button_bg_pane_g4

0xde54,	// (0x0008b572) wml_button_bg_pane_g5

0xde5c,	// (0x0008b57a) wml_button_bg_pane_g6

0xde64,	// (0x0008b582) wml_button_bg_pane_g7

0xde6c,	// (0x0008b58a) wml_button_bg_pane_g8

0xde74,	// (0x0008b592) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0008c9ba) wml_button_bg_pane_g

0x6d89,	// (0x000844a7) bg_list_pane_cp02

0xde7c,	// (0x0008b59a) mce_header_pane_ParamLimits

0xde7c,	// (0x0008b59a) mce_header_pane

0xde92,	// (0x0008b5b0) mce_icon_pane

0xde92,	// (0x0008b5b0) mce_image_pane

0xde9b,	// (0x0008b5b9) mce_text_pane_ParamLimits

0xde9b,	// (0x0008b5b9) mce_text_pane

0x6d93,	// (0x000844b1) scroll_pane_cp03

0xdd94,	// (0x0008b4b2) scroll_pane_cp04

0xdeae,	// (0x0008b5cc) scroll_pane_cp05_ParamLimits

0xdeae,	// (0x0008b5cc) scroll_pane_cp05

0x6d9d,	// (0x000844bb) mce_header_field_pane_ParamLimits

0x6d9d,	// (0x000844bb) mce_header_field_pane

0x6dbd,	// (0x000844db) mce_header_field_pane_2_ParamLimits

0x6dbd,	// (0x000844db) mce_header_field_pane_2

0x6dd3,	// (0x000844f1) mce_header_field_pane_3

0x6ddb,	// (0x000844f9) list_single_mce_message_pane_ParamLimits

0x6ddb,	// (0x000844f9) list_single_mce_message_pane

0x6e00,	// (0x0008451e) list_single_mce_smart_pane_ParamLimits

0x6e00,	// (0x0008451e) list_single_mce_smart_pane

0xdeba,	// (0x0008b5d8) input_focus_pane_cp03

0xdec3,	// (0x0008b5e1) list_header_data_pane

0x6e30,	// (0x0008454e) mce_header_field_pane_t1

0x6e3e,	// (0x0008455c) list_single_mce_header_pane_ParamLimits

0x6e3e,	// (0x0008455c) list_single_mce_header_pane

0xdecb,	// (0x0008b5e9) list_single_mce_header_pane_t1

0xdeda,	// (0x0008b5f8) list_single_mce_message_pane_g1

0xdee2,	// (0x0008b600) list_single_mce_message_pane_t1

0x6e82,	// (0x000845a0) bg_cale_heading_pane_cp01_ParamLimits

0x6e82,	// (0x000845a0) bg_cale_heading_pane_cp01

0xdef0,	// (0x0008b60e) bg_cale_pane_cp02_ParamLimits

0xdef0,	// (0x0008b60e) bg_cale_pane_cp02

0x6eb5,	// (0x000845d3) cale_month_corner_pane

0x6ecb,	// (0x000845e9) cale_month_day_heading_pane_ParamLimits

0x6ecb,	// (0x000845e9) cale_month_day_heading_pane

0x6f0e,	// (0x0008462c) cale_month_pane_g1_ParamLimits

0x6f0e,	// (0x0008462c) cale_month_pane_g1

0x6f3a,	// (0x00084658) cale_month_pane_g2_ParamLimits

0x6f3a,	// (0x00084658) cale_month_pane_g2

0x6f5d,	// (0x0008467b) cale_month_pane_g3_ParamLimits

0x6f5d,	// (0x0008467b) cale_month_pane_g3

0x6f99,	// (0x000846b7) cale_month_pane_g4_ParamLimits

0x6f99,	// (0x000846b7) cale_month_pane_g4

0x6fd5,	// (0x000846f3) cale_month_pane_g5_ParamLimits

0x6fd5,	// (0x000846f3) cale_month_pane_g5

0x7011,	// (0x0008472f) cale_month_pane_g6_ParamLimits

0x7011,	// (0x0008472f) cale_month_pane_g6

0x704d,	// (0x0008476b) cale_month_pane_g7_ParamLimits

0x704d,	// (0x0008476b) cale_month_pane_g7

0x7099,	// (0x000847b7) cale_month_pane_g8_ParamLimits

0x7099,	// (0x000847b7) cale_month_pane_g8

0x70e5,	// (0x00084803) cale_month_pane_g9_ParamLimits

0x70e5,	// (0x00084803) cale_month_pane_g9

0x712b,	// (0x00084849) cale_month_pane_g10_ParamLimits

0x712b,	// (0x00084849) cale_month_pane_g10

0x7165,	// (0x00084883) cale_month_pane_g11_ParamLimits

0x7165,	// (0x00084883) cale_month_pane_g11

0x71a3,	// (0x000848c1) cale_month_pane_g12_ParamLimits

0x71a3,	// (0x000848c1) cale_month_pane_g12

0x71e1,	// (0x000848ff) cale_month_pane_g13_ParamLimits

0x71e1,	// (0x000848ff) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0008c9cd) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0008c9cd) cale_month_pane_g

0x721f,	// (0x0008493d) cale_month_week_pane

0x7232,	// (0x00084950) grid_cale_month_pane_ParamLimits

0x7232,	// (0x00084950) grid_cale_month_pane

0x7270,	// (0x0008498e) cale_month_day_heading_pane_t1

0x72ce,	// (0x000849ec) cale_month_day_heading_pane_t2

0x7333,	// (0x00084a51) cale_month_day_heading_pane_t3

0x7398,	// (0x00084ab6) cale_month_day_heading_pane_t4

0x73fd,	// (0x00084b1b) cale_month_day_heading_pane_t5

0x7462,	// (0x00084b80) cale_month_day_heading_pane_t6

0x74c7,	// (0x00084be5) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0008c9e8) cale_month_day_heading_pane_t

0xdb90,	// (0x0008b2ae) bg_cale_side_pane_cp01

0x753c,	// (0x00084c5a) cale_month_week_pane_t1

0x7553,	// (0x00084c71) cale_month_week_pane_t2

0x756a,	// (0x00084c88) cale_month_week_pane_t3

0x7581,	// (0x00084c9f) cale_month_week_pane_t4

0x7598,	// (0x00084cb6) cale_month_week_pane_t5

0x75b3,	// (0x00084cd1) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0008c9f7) cale_month_week_pane_t

0x75d2,	// (0x00084cf0) cell_cale_month_pane_ParamLimits

0x75d2,	// (0x00084cf0) cell_cale_month_pane

0x7698,	// (0x00084db6) cell_cale_month_pane_g1

0x76a4,	// (0x00084dc2) cell_cale_month_pane_t1_ParamLimits

0x76a4,	// (0x00084dc2) cell_cale_month_pane_t1

0xdb9e,	// (0x0008b2bc) grid_highlight_pane_cp08

0x4978,	// (0x00082096) main_smil_g1

0x76c0,	// (0x00084dde) smil_status_pane

0xdf25,	// (0x0008b643) smil_text_pane

0x12a4,	// (0x0007e9c2) bg_popup_call3_rect_pane_g8

0x12ac,	// (0x0007e9ca) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0008ccb0) bg_popup_call3_rect_pane_g

0x1539,	// (0x0007ec57) smil_status_volume_pane_g1

0xdf2f,	// (0x0008b64d) smil_status_pane_t1

0x8bd4,	// (0x000862f2) volume_smil_pane

0xdf46,	// (0x0008b664) list_smil_text_pane

0x76d3,	// (0x00084df1) scroll_pane_cp011

0x76de,	// (0x00084dfc) smil_text_list_pane_t1_ParamLimits

0x76de,	// (0x00084dfc) smil_text_list_pane_t1

0x7756,	// (0x00084e74) aid_volume_smil_ParamLimits

0x7756,	// (0x00084e74) aid_volume_smil

0x4978,	// (0x00082096) smil_volume_pane_g1

0x4978,	// (0x00082096) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0008ca17) smil_volume_pane_g

0x4923,	// (0x00082041) listscroll_cale_day_pane

0xdf50,	// (0x0008b66e) bg_cale_pane

0xdf68,	// (0x0008b686) list_cale_pane

0xdf79,	// (0x0008b697) scroll_pane_cp09

0xdf8a,	// (0x0008b6a8) cale_bg_pane_g1

0xdf92,	// (0x0008b6b0) cale_bg_pane_g2

0xdf9a,	// (0x0008b6b8) cale_bg_pane_g3

0xdfa2,	// (0x0008b6c0) cale_bg_pane_g4

0xdfaa,	// (0x0008b6c8) cale_bg_pane_g5

0xdfb2,	// (0x0008b6d0) cale_bg_pane_g6

0xdfba,	// (0x0008b6d8) cale_bg_pane_g7

0xdfc2,	// (0x0008b6e0) cale_bg_pane_g8

0xdfca,	// (0x0008b6e8) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0008ca1c) cale_bg_pane_g

0x7778,	// (0x00084e96) list_cale_time_pane_ParamLimits

0x7778,	// (0x00084e96) list_cale_time_pane

0xdfd2,	// (0x0008b6f0) list_cale_time_pane_g1_ParamLimits

0xdfd2,	// (0x0008b6f0) list_cale_time_pane_g1

0xdfde,	// (0x0008b6fc) list_cale_time_pane_g2_ParamLimits

0xdfde,	// (0x0008b6fc) list_cale_time_pane_g2

0x7794,	// (0x00084eb2) list_cale_time_pane_g3_ParamLimits

0x7794,	// (0x00084eb2) list_cale_time_pane_g3

0x77a2,	// (0x00084ec0) list_cale_time_pane_g4_ParamLimits

0x77a2,	// (0x00084ec0) list_cale_time_pane_g4

0x77b0,	// (0x00084ece) list_cale_time_pane_g5_ParamLimits

0x77b0,	// (0x00084ece) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0008ca2f) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0008ca2f) list_cale_time_pane_g

0xdff8,	// (0x0008b716) list_cale_time_pane_t1_ParamLimits

0xdff8,	// (0x0008b716) list_cale_time_pane_t1

0xe020,	// (0x0008b73e) list_cale_time_pane_t2_ParamLimits

0xe020,	// (0x0008b73e) list_cale_time_pane_t2

0x7ae1,	// (0x000851ff) aid_blid_cardinal_pane

0x7b23,	// (0x00085241) compass_pane_t4

0xe048,	// (0x0008b766) list_cale_time_pane_t4_ParamLimits

0xe048,	// (0x0008b766) list_cale_time_pane_t4

0x7b31,	// (0x0008524f) compass_pane_t5

0x7b41,	// (0x0008525f) compass_pane_t6

0x7b4f,	// (0x0008526d) compass_pane_t7

0xe481,	// (0x0008bb9f) navi_pane_cc_t1

0xe5d6,	// (0x0008bcf4) aid_phob_thumbnail_center_pane

0x82f4,	// (0x00085a12) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0008ca3c) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0008ca3c) list_cale_time_pane_t

0x41df,	// (0x000818fd) bg_popup_window_pane_cp02_ParamLimits

0x41df,	// (0x000818fd) bg_popup_window_pane_cp02

0xe070,	// (0x0008b78e) heading_pane_cp01_ParamLimits

0xe070,	// (0x0008b78e) heading_pane_cp01

0xe07c,	// (0x0008b79a) loc_req_pane_ParamLimits

0xe07c,	// (0x0008b79a) loc_req_pane

0xe08c,	// (0x0008b7aa) loc_type_pane_ParamLimits

0xe08c,	// (0x0008b7aa) loc_type_pane

0xe09e,	// (0x0008b7bc) loc_type_pane_t1_ParamLimits

0xe09e,	// (0x0008b7bc) loc_type_pane_t1

0xe0b0,	// (0x0008b7ce) loc_type_pane_t2_ParamLimits

0xe0b0,	// (0x0008b7ce) loc_type_pane_t2

0xe0c2,	// (0x0008b7e0) loc_type_pane_t3_ParamLimits

0xe0c2,	// (0x0008b7e0) loc_type_pane_t3

0x0002,

0xf325,	// (0x0008ca43) loc_type_pane_t_ParamLimits

0xf325,	// (0x0008ca43) loc_type_pane_t

0xe0d4,	// (0x0008b7f2) list_loc_req_pane

0xe0de,	// (0x0008b7fc) scroll_pane_cp012

0x77be,	// (0x00084edc) list_single_loc_request_popup_menu_pane_ParamLimits

0x77be,	// (0x00084edc) list_single_loc_request_popup_menu_pane

0xe0e9,	// (0x0008b807) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe0e9,	// (0x0008b807) list_single_loc_request_popup_menu_pane_g1

0xe0f5,	// (0x0008b813) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe0f5,	// (0x0008b813) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0008ca4a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0008ca4a) list_single_loc_request_popup_menu_pane_g

0xe101,	// (0x0008b81f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe101,	// (0x0008b81f) list_single_loc_request_popup_menu_pane_t1

0x77d0,	// (0x00084eee) bg_popup_window_pane_cp03_ParamLimits

0x77d0,	// (0x00084eee) bg_popup_window_pane_cp03

0x77de,	// (0x00084efc) heading_loc_req_pane_ParamLimits

0x77de,	// (0x00084efc) heading_loc_req_pane

0x77ea,	// (0x00084f08) popup_dyc_status_message_window_g1_ParamLimits

0x77ea,	// (0x00084f08) popup_dyc_status_message_window_g1

0x77f6,	// (0x00084f14) popup_dyc_status_message_window_t1_ParamLimits

0x77f6,	// (0x00084f14) popup_dyc_status_message_window_t1

0x7808,	// (0x00084f26) popup_dyc_status_message_window_t2_ParamLimits

0x7808,	// (0x00084f26) popup_dyc_status_message_window_t2

0x781a,	// (0x00084f38) popup_dyc_status_message_window_t3_ParamLimits

0x781a,	// (0x00084f38) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0008ca4f) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0008ca4f) popup_dyc_status_message_window_t

0x45f1,	// (0x00081d0f) bg_heading_pane_cp01

0xe117,	// (0x0008b835) heading_loc_req_pane_g1

0xe11f,	// (0x0008b83d) heading_loc_req_pane_g2

0xe127,	// (0x0008b845) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0008ca56) heading_loc_req_pane_g

0xe12f,	// (0x0008b84d) heading_loc_req_pane_t1

0xe13e,	// (0x0008b85c) bg_popup_sub_pane_cp01_ParamLimits

0xe13e,	// (0x0008b85c) bg_popup_sub_pane_cp01

0xe14c,	// (0x0008b86a) popup_cale_events_window_g1_ParamLimits

0xe14c,	// (0x0008b86a) popup_cale_events_window_g1

0xe16c,	// (0x0008b88a) popup_cale_events_window_g2_ParamLimits

0xe16c,	// (0x0008b88a) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0008ca8a) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0008ca8a) popup_cale_events_window_g

0xe18c,	// (0x0008b8aa) popup_cale_events_window_t1_ParamLimits

0xe18c,	// (0x0008b8aa) popup_cale_events_window_t1

0xe19e,	// (0x0008b8bc) popup_cale_events_window_t2_ParamLimits

0xe19e,	// (0x0008b8bc) popup_cale_events_window_t2

0xe1dc,	// (0x0008b8fa) popup_cale_events_window_t3_ParamLimits

0xe1dc,	// (0x0008b8fa) popup_cale_events_window_t3

0xe216,	// (0x0008b934) popup_cale_events_window_t4_ParamLimits

0xe216,	// (0x0008b934) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0008ca8f) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0008ca8f) popup_cale_events_window_t

0x789e,	// (0x00084fbc) call_type_pane

0xe24c,	// (0x0008b96a) popup_call_status_window_g1

0x78aa,	// (0x00084fc8) popup_call_status_window_g2

0x78b6,	// (0x00084fd4) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0008ca98) popup_call_status_window_g

0xe25a,	// (0x0008b978) call_type_pane_g1

0xe263,	// (0x0008b981) call_type_pane_g2

0x0001,

0xf381,	// (0x0008ca9f) call_type_pane_g

0x45f1,	// (0x00081d0f) bg_popup_sub_pane_cp02

0xe26c,	// (0x0008b98a) listscroll_popup_wml_pane

0xe274,	// (0x0008b992) list_wml_pane

0xe27e,	// (0x0008b99c) scroll_pane_cp013

0xe289,	// (0x0008b9a7) list_single_graphic_popup_wml_pane_ParamLimits

0xe289,	// (0x0008b9a7) list_single_graphic_popup_wml_pane

0x4978,	// (0x00082096) list_single_graphic_popup_wml_pane_g1

0xe29d,	// (0x0008b9bb) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0008caa4) list_single_graphic_popup_wml_pane_g

0xe2a5,	// (0x0008b9c3) list_single_graphic_popup_wml_pane_t1

0xe2bb,	// (0x0008b9d9) aid_call_pane

0x4844,	// (0x00081f62) popup_clock_analogue_window_g1

0x4844,	// (0x00081f62) popup_clock_analogue_window_g2

0x78c2,	// (0x00084fe0) popup_clock_analogue_window_g3

0x78c2,	// (0x00084fe0) popup_clock_analogue_window_g4

0x4978,	// (0x00082096) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0008caa9) popup_clock_analogue_window_g

0x78ca,	// (0x00084fe8) popup_clock_analogue_window_t1

0x78d8,	// (0x00084ff6) clock_digital_number_pane_ParamLimits

0x78d8,	// (0x00084ff6) clock_digital_number_pane

0x78e4,	// (0x00085002) clock_digital_number_pane_cp02_ParamLimits

0x78e4,	// (0x00085002) clock_digital_number_pane_cp02

0x78f0,	// (0x0008500e) clock_digital_number_pane_cp03_ParamLimits

0x78f0,	// (0x0008500e) clock_digital_number_pane_cp03

0x78fc,	// (0x0008501a) clock_digital_number_pane_cp04_ParamLimits

0x78fc,	// (0x0008501a) clock_digital_number_pane_cp04

0x790c,	// (0x0008502a) clock_digital_separator_pane_ParamLimits

0x790c,	// (0x0008502a) clock_digital_separator_pane

0x7918,	// (0x00085036) popup_clock_digital_window_t1

0x4978,	// (0x00082096) clock_digital_number_pane_g1

0x4978,	// (0x00082096) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0008ca17) clock_digital_number_pane_g

0x4978,	// (0x00082096) clock_digital_separator_pane_g1

0x4978,	// (0x00082096) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0008ca17) clock_digital_separator_pane_g

0x45f1,	// (0x00081d0f) bg_popup_window_pane_cp04

0xe2c3,	// (0x0008b9e1) heading_pane_cp03

0xe2cb,	// (0x0008b9e9) listscroll_popup_gms_pane

0xe2d3,	// (0x0008b9f1) grid_large_graphic_popup_pane

0xe2dd,	// (0x0008b9fb) listscroll_popup_gms_pane_g1

0xe2e5,	// (0x0008ba03) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0008cab4) listscroll_popup_gms_pane_g

0xdd94,	// (0x0008b4b2) scroll_pane_cp014

0x7935,	// (0x00085053) cell_large_graphic_popup_pane_ParamLimits

0x7935,	// (0x00085053) cell_large_graphic_popup_pane

0x794d,	// (0x0008506b) cell_large_graphic_popup_pane_g1_ParamLimits

0x794d,	// (0x0008506b) cell_large_graphic_popup_pane_g1

0xe2ed,	// (0x0008ba0b) cell_large_graphic_popup_pane_g2_ParamLimits

0xe2ed,	// (0x0008ba0b) cell_large_graphic_popup_pane_g2

0xe2f9,	// (0x0008ba17) cell_large_graphic_popup_pane_g3_ParamLimits

0xe2f9,	// (0x0008ba17) cell_large_graphic_popup_pane_g3

0xe306,	// (0x0008ba24) cell_large_graphic_popup_pane_g4_ParamLimits

0xe306,	// (0x0008ba24) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0008cab9) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0008cab9) cell_large_graphic_popup_pane_g

0xe316,	// (0x0008ba34) grid_highlight_pane_cp010

0x4978,	// (0x00082096) bg_popup_call_pane_g1

0xe320,	// (0x0008ba3e) list_single_graphic_popup_conf_pane_ParamLimits

0xe320,	// (0x0008ba3e) list_single_graphic_popup_conf_pane

0xe333,	// (0x0008ba51) list_highlight_pane_cp01

0xe33c,	// (0x0008ba5a) list_single_graphic_popup_conf_pane_g1

0xe344,	// (0x0008ba62) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0008cac2) list_single_graphic_popup_conf_pane_g

0xe34c,	// (0x0008ba6a) list_single_graphic_popup_conf_pane_t1

0xe35a,	// (0x0008ba78) linegrid_cams_pane_g1

0x7959,	// (0x00085077) linegrid_cams_pane_g2

0xdbd1,	// (0x0008b2ef) linegrid_cams_pane_g3

0xe363,	// (0x0008ba81) linegrid_cams_pane_g4

0x7962,	// (0x00085080) linegrid_cams_pane_g5

0x796b,	// (0x00085089) linegrid_cams_pane_g6

0xdbda,	// (0x0008b2f8) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0008cac7) linegrid_cams_pane_g

0xe36c,	// (0x0008ba8a) popup_clock_analogue_window

0xe36c,	// (0x0008ba8a) popup_clock_digital_window

0x45f1,	// (0x00081d0f) popup_phob_thumbnail_window

0x4978,	// (0x00082096) call_video_uplink_pane_g1

0xe375,	// (0x0008ba93) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0008cad6) call_video_uplink_pane_g

0xe37d,	// (0x0008ba9b) video_uplink_pane

0xe385,	// (0x0008baa3) mce_image_pane_g1

0x7974,	// (0x00085092) mce_image_pane_g2

0x797e,	// (0x0008509c) mce_image_pane_g3

0x7986,	// (0x000850a4) mce_image_pane_g4

0x798e,	// (0x000850ac) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0008cadb) mce_image_pane_g

0xe38f,	// (0x0008baad) control_top_pane_stacon_cp01_ParamLimits

0xe38f,	// (0x0008baad) control_top_pane_stacon_cp01

0xe3a3,	// (0x0008bac1) uni_indicator_pane_stacon_cp01_ParamLimits

0xe3a3,	// (0x0008bac1) uni_indicator_pane_stacon_cp01

0xe3b4,	// (0x0008bad2) bg_popup_sub_pane_cp03

0x7996,	// (0x000850b4) chi_dic_find_pane

0x799e,	// (0x000850bc) listscroll_chi_dic_pane

0x79a7,	// (0x000850c5) main_pane_chidic_g1

0xe3be,	// (0x0008badc) chi_dic_find_pane_t1

0xe3cc,	// (0x0008baea) find_chidic_pane

0xe3d5,	// (0x0008baf3) chi_dic_list_pane_ParamLimits

0xe3d5,	// (0x0008baf3) chi_dic_list_pane

0xe3e6,	// (0x0008bb04) scroll_pane_cp020

0xe3ee,	// (0x0008bb0c) find_chidic_pane_t1

0x45f1,	// (0x00081d0f) input_focus_pane_cp06

0x79ba,	// (0x000850d8) list_chi_dic_pane_ParamLimits

0x79ba,	// (0x000850d8) list_chi_dic_pane

0x79d4,	// (0x000850f2) list_chi_dic_pane_t1_ParamLimits

0x79d4,	// (0x000850f2) list_chi_dic_pane_t1

0x45f1,	// (0x00081d0f) list_highlight_pane_cp020

0xe3fd,	// (0x0008bb1b) bg_cale_heading_pane_g1

0x79e7,	// (0x00085105) bg_cale_heading_pane_g2

0x79ef,	// (0x0008510d) bg_cale_heading_pane_g3

0x79f7,	// (0x00085115) bg_cale_heading_pane_g4

0x7a01,	// (0x0008511f) bg_cale_heading_pane_g5

0x7a0b,	// (0x00085129) bg_cale_heading_pane_g6

0x7a13,	// (0x00085131) bg_cale_heading_pane_g7

0x7a1b,	// (0x00085139) bg_cale_heading_pane_g8

0x7a25,	// (0x00085143) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0008cae6) bg_cale_heading_pane_g

0xe3fd,	// (0x0008bb1b) bg_cale_side_pane_g1

0x7a2f,	// (0x0008514d) bg_cale_side_pane_g2

0x7a39,	// (0x00085157) bg_cale_side_pane_g3

0x7a43,	// (0x00085161) bg_cale_side_pane_g4

0x7a4d,	// (0x0008516b) bg_cale_side_pane_g5

0x7a57,	// (0x00085175) bg_cale_side_pane_g6

0x7a61,	// (0x0008517f) bg_cale_side_pane_g7

0x7a6b,	// (0x00085189) bg_cale_side_pane_g8

0x7a73,	// (0x00085191) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0008caf9) bg_cale_side_pane_g

0x7a7b,	// (0x00085199) popup_call_status_window_ParamLimits

0x7a7b,	// (0x00085199) popup_call_status_window

0xe405,	// (0x0008bb23) stacon_top_pane

0xe40d,	// (0x0008bb2b) status_pane_ParamLimits

0xe40d,	// (0x0008bb2b) status_pane

0xe422,	// (0x0008bb40) status_small_pane

0xe42a,	// (0x0008bb48) control_pane

0x45f1,	// (0x00081d0f) stacon_bottom_pane

0xe432,	// (0x0008bb50) list_single_mce_smart_pane_t1_ParamLimits

0xe432,	// (0x0008bb50) list_single_mce_smart_pane_t1

0xe445,	// (0x0008bb63) list_single_mce_smart_pane_t2_ParamLimits

0xe445,	// (0x0008bb63) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0008cb0c) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0008cb0c) list_single_mce_smart_pane_t

0x7a87,	// (0x000851a5) compass_pane

0x7a93,	// (0x000851b1) main_location2_pane_t1

0x7aa7,	// (0x000851c5) main_location2_pane_t2

0x7abb,	// (0x000851d9) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0008cb11) main_location2_pane_t

0xe464,	// (0x0008bb82) compass_pane_g1_ParamLimits

0xe464,	// (0x0008bb82) compass_pane_g1

0x7b05,	// (0x00085223) compass_pane_t1

0x7b14,	// (0x00085232) compass_pane_t2

0x0005,

0xf3fc,	// (0x0008cb1a) compass_pane_t

0x7b5f,	// (0x0008527d) text_secondary_cp61

0xe478,	// (0x0008bb96) navi_pane_cams_g5

0xe49b,	// (0x0008bbb9) navi_pane_im_t1

0xe4a9,	// (0x0008bbc7) navi_pane_mp_g1_ParamLimits

0xe4a9,	// (0x0008bbc7) navi_pane_mp_g1

0xe4bd,	// (0x0008bbdb) navi_pane_mp_g2_ParamLimits

0xe4bd,	// (0x0008bbdb) navi_pane_mp_g2

0xe4c9,	// (0x0008bbe7) navi_pane_mp_g3_ParamLimits

0xe4c9,	// (0x0008bbe7) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0008cb2e) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0008cb2e) navi_pane_mp_g

0xe4d5,	// (0x0008bbf3) navi_pane_mp_t1

0xe4e3,	// (0x0008bc01) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0008cb35) navi_pane_mp_t

0xe51f,	// (0x0008bc3d) navi_pane_vt_g1

0xe4d5,	// (0x0008bbf3) navi_pane_vt_t1

0xe527,	// (0x0008bc45) navi_slider_pane

0xe52f,	// (0x0008bc4d) zooming_pane

0xe537,	// (0x0008bc55) navi_slider_pane_g1

0x7c74,	// (0x00085392) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0008cb3c) navi_slider_pane_g

0xe55b,	// (0x0008bc79) aid_levels_zoom

0xe563,	// (0x0008bc81) zooming_pane_g1

0xe56b,	// (0x0008bc89) zooming_pane_g2

0xe56b,	// (0x0008bc89) zooming_pane_g3

0x0002,

0xf42d,	// (0x0008cb4b) zooming_pane_g

0xe573,	// (0x0008bc91) level_10_zoom

0xe57c,	// (0x0008bc9a) level_11_zoom

0xe585,	// (0x0008bca3) level_1_zoom

0xe58e,	// (0x0008bcac) level_2_zoom

0xe597,	// (0x0008bcb5) level_3_zoom

0xe5a0,	// (0x0008bcbe) level_4_zoom

0xe5a9,	// (0x0008bcc7) level_5_zoom

0xe5b2,	// (0x0008bcd0) level_6_zoom

0xe5bb,	// (0x0008bcd9) level_7_zoom

0xe5c4,	// (0x0008bce2) level_8_zoom

0xe5cd,	// (0x0008bceb) level_9_zoom

0xe5de,	// (0x0008bcfc) popup_phob_thumbnail_window_g1

0xe5e6,	// (0x0008bd04) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0008cb52) popup_phob_thumbnail_window_g

0x1406,	// (0x0007eb24) level_1_location

0x140e,	// (0x0007eb2c) level_2_location

0x1416,	// (0x0007eb34) level_3_location

0x141e,	// (0x0007eb3c) level_4_location

0xe52f,	// (0x0008bc4d) level_5_location

0x7c86,	// (0x000853a4) mce_icon_pane_g1

0x7c8e,	// (0x000853ac) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0008cb57) mce_icon_pane_g

0x7c96,	// (0x000853b4) main_mup_pane_g1_ParamLimits

0x7c96,	// (0x000853b4) main_mup_pane_g1

0x7cae,	// (0x000853cc) main_mup_pane_g2_ParamLimits

0x7cae,	// (0x000853cc) main_mup_pane_g2

0x7cca,	// (0x000853e8) main_mup_pane_g3_ParamLimits

0x7cca,	// (0x000853e8) main_mup_pane_g3

0x7ce6,	// (0x00085404) main_mup_pane_g4_ParamLimits

0x7ce6,	// (0x00085404) main_mup_pane_g4

0x7d02,	// (0x00085420) main_mup_pane_g5_ParamLimits

0x7d02,	// (0x00085420) main_mup_pane_g5

0x7d23,	// (0x00085441) main_mup_pane_g6_ParamLimits

0x7d23,	// (0x00085441) main_mup_pane_g6

0x7d3f,	// (0x0008545d) main_mup_pane_g7_ParamLimits

0x7d3f,	// (0x0008545d) main_mup_pane_g7

0x7d5b,	// (0x00085479) main_mup_pane_g8_ParamLimits

0x7d5b,	// (0x00085479) main_mup_pane_g8

0x7d7b,	// (0x00085499) main_mup_pane_g9_ParamLimits

0x7d7b,	// (0x00085499) main_mup_pane_g9

0x7d9a,	// (0x000854b8) main_mup_pane_g10_ParamLimits

0x7d9a,	// (0x000854b8) main_mup_pane_g10

0x7db9,	// (0x000854d7) main_mup_pane_g11_ParamLimits

0x7db9,	// (0x000854d7) main_mup_pane_g11

0x7dd1,	// (0x000854ef) main_mup_pane_g12_ParamLimits

0x7dd1,	// (0x000854ef) main_mup_pane_g12

0x7ddf,	// (0x000854fd) main_mup_pane_g13_ParamLimits

0x7ddf,	// (0x000854fd) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0008cb5c) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0008cb5c) main_mup_pane_g

0x7df5,	// (0x00085513) main_mup_pane_t1_ParamLimits

0x7df5,	// (0x00085513) main_mup_pane_t1

0x7e12,	// (0x00085530) main_mup_pane_t2_ParamLimits

0x7e12,	// (0x00085530) main_mup_pane_t2

0x7e2c,	// (0x0008554a) main_mup_pane_t3_ParamLimits

0x7e2c,	// (0x0008554a) main_mup_pane_t3

0x7e46,	// (0x00085564) main_mup_pane_t4_ParamLimits

0x7e46,	// (0x00085564) main_mup_pane_t4

0x7e58,	// (0x00085576) main_mup_pane_t5_ParamLimits

0x7e58,	// (0x00085576) main_mup_pane_t5

0x7e6a,	// (0x00085588) main_mup_pane_t6_ParamLimits

0x7e6a,	// (0x00085588) main_mup_pane_t6

0x0005,

0xf459,	// (0x0008cb77) main_mup_pane_t_ParamLimits

0xf459,	// (0x0008cb77) main_mup_pane_t

0x7e80,	// (0x0008559e) mup_progress_pane_ParamLimits

0x7e80,	// (0x0008559e) mup_progress_pane

0x7e8c,	// (0x000855aa) mup_visualizer_pane_ParamLimits

0x7e8c,	// (0x000855aa) mup_visualizer_pane

0x7ec6,	// (0x000855e4) mup_volume_pane_ParamLimits

0x7ec6,	// (0x000855e4) mup_volume_pane

0xe24c,	// (0x0008b96a) mup_visualizer_pane_g1_ParamLimits

0xe24c,	// (0x0008b96a) mup_visualizer_pane_g1

0xe24c,	// (0x0008b96a) mup_visualizer_pane_g2_ParamLimits

0xe24c,	// (0x0008b96a) mup_visualizer_pane_g2

0xe464,	// (0x0008bb82) mup_visualizer_pane_g3_ParamLimits

0xe464,	// (0x0008bb82) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0008cb84) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0008cb84) mup_visualizer_pane_g

0x4978,	// (0x00082096) mup_volume_pane_g1

0xe5f6,	// (0x0008bd14) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0008cb8b) mup_volume_pane_g

0x4978,	// (0x00082096) mup_progress_pane_g1

0xe5ff,	// (0x0008bd1d) mup_progress_pane_g2

0xe608,	// (0x0008bd26) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0008cb90) mup_progress_pane_g

0x45f1,	// (0x00081d0f) bg_popup_window_pane_cp05

0xe611,	// (0x0008bd2f) heading_pane_cp02_ParamLimits

0xe611,	// (0x0008bd2f) heading_pane_cp02

0xe62b,	// (0x0008bd49) list_popup_blid_pane

0xe633,	// (0x0008bd51) list_blid_sat_info_pane_ParamLimits

0xe633,	// (0x0008bd51) list_blid_sat_info_pane

0xe646,	// (0x0008bd64) list_blid_sat_info_pane_g1

0xe64e,	// (0x0008bd6c) list_blid_sat_info_pane_t1

0x7fd3,	// (0x000856f1) mup_equalizer_pane_ParamLimits

0x7fd3,	// (0x000856f1) mup_equalizer_pane

0x7ff4,	// (0x00085712) mup_equalizer_pane_cp1_ParamLimits

0x7ff4,	// (0x00085712) mup_equalizer_pane_cp1

0x8015,	// (0x00085733) mup_equalizer_pane_cp2_ParamLimits

0x8015,	// (0x00085733) mup_equalizer_pane_cp2

0x8036,	// (0x00085754) mup_equalizer_pane_cp3_ParamLimits

0x8036,	// (0x00085754) mup_equalizer_pane_cp3

0x8057,	// (0x00085775) mup_equalizer_pane_cp4_ParamLimits

0x8057,	// (0x00085775) mup_equalizer_pane_cp4

0x8078,	// (0x00085796) mup_equalizer_pane_cp5

0x808e,	// (0x000857ac) mup_equalizer_pane_cp6

0x80a6,	// (0x000857c4) mup_equalizer_pane_cp7

0x1324,	// (0x0007ea42) bg_popup_call_poc_act_pane_g9

0x132c,	// (0x0007ea4a) bg_popup_call_poc_act_pane_g10

0x1334,	// (0x0007ea52) bg_popup_call_poc_act_pane_g11

0x000a,

0x484c,	// (0x00081f6a) mup_scale_pane

0x4978,	// (0x00082096) mup_scale_pane_g1

0xe65c,	// (0x0008bd7a) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0008cbac) mup_scale_pane_g

0xe680,	// (0x0008bd9e) msg_data_pane

0xe688,	// (0x0008bda6) scroll_pane_cp017

0x80d0,	// (0x000857ee) bg_list_pane_cp04_ParamLimits

0x80d0,	// (0x000857ee) bg_list_pane_cp04

0xe690,	// (0x0008bdae) msg_data_pane_g1

0x80f6,	// (0x00085814) msg_data_pane_g2

0x8100,	// (0x0008581e) msg_data_pane_g3

0x8108,	// (0x00085826) msg_data_pane_g4

0x8110,	// (0x0008582e) msg_data_pane_g5

0x8118,	// (0x00085836) msg_data_pane_g6

0x8120,	// (0x0008583e) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0008cbbb) msg_data_pane_g

0x8128,	// (0x00085846) msg_text_pane_ParamLimits

0x8128,	// (0x00085846) msg_text_pane

0x815f,	// (0x0008587d) qrid_highlight_pane_cp011_ParamLimits

0x815f,	// (0x0008587d) qrid_highlight_pane_cp011

0x45f1,	// (0x00081d0f) msg_body_pane

0x45f1,	// (0x00081d0f) msg_header_pane

0xe6a1,	// (0x0008bdbf) input_focus_pane_cp07

0x8185,	// (0x000858a3) msg_header_pane_t1_ParamLimits

0x8185,	// (0x000858a3) msg_header_pane_t1

0x8197,	// (0x000858b5) msg_header_pane_t2_ParamLimits

0x8197,	// (0x000858b5) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0008cbcf) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0008cbcf) msg_header_pane_t

0xe6b6,	// (0x0008bdd4) msg_body_pane_g1

0x81a9,	// (0x000858c7) msg_body_pane_t1_ParamLimits

0x81a9,	// (0x000858c7) msg_body_pane_t1

0x81da,	// (0x000858f8) msg_body_pane_t2_ParamLimits

0x81da,	// (0x000858f8) msg_body_pane_t2

0x81ec,	// (0x0008590a) msg_body_pane_t3_ParamLimits

0x81ec,	// (0x0008590a) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0008cbd4) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0008cbd4) msg_body_pane_t

0x8250,	// (0x0008596e) main_viewer_pane_g1_ParamLimits

0x8250,	// (0x0008596e) main_viewer_pane_g1

0x825c,	// (0x0008597a) main_viewer_pane_g2_ParamLimits

0x825c,	// (0x0008597a) main_viewer_pane_g2

0x8268,	// (0x00085986) main_viewer_pane_g3_ParamLimits

0x8268,	// (0x00085986) main_viewer_pane_g3

0x8279,	// (0x00085997) main_viewer_pane_g4_ParamLimits

0x8279,	// (0x00085997) main_viewer_pane_g4

0x828a,	// (0x000859a8) main_viewer_pane_g5_ParamLimits

0x828a,	// (0x000859a8) main_viewer_pane_g5

0x828a,	// (0x000859a8) main_viewer_pane_g7_ParamLimits

0x828a,	// (0x000859a8) main_viewer_pane_g7

0xe0e9,	// (0x0008b807) main_viewer_pane_g8_ParamLimits

0xe0e9,	// (0x0008b807) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0008cbe4) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0008cbe4) main_viewer_pane_g

0xe6be,	// (0x0008bddc) viewer_content_pane_ParamLimits

0xe6be,	// (0x0008bddc) viewer_content_pane

0x82c8,	// (0x000859e6) main_postcard_pane_g1_ParamLimits

0x82c8,	// (0x000859e6) main_postcard_pane_g1

0x82d6,	// (0x000859f4) main_postcard_pane_g2_ParamLimits

0x82d6,	// (0x000859f4) main_postcard_pane_g2

0x82e4,	// (0x00085a02) main_postcard_pane_g3_ParamLimits

0x82e4,	// (0x00085a02) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0008cbf5) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0008cbf5) main_postcard_pane_g

0x82f4,	// (0x00085a12) main_postcard_pane_g4

0x1526,	// (0x0007ec44) smil_status_volume_pane_g2

0x8320,	// (0x00085a3e) postcard_pane_ParamLimits

0x8320,	// (0x00085a3e) postcard_pane

0xe24c,	// (0x0008b96a) postcard_pane_g1_ParamLimits

0xe24c,	// (0x0008b96a) postcard_pane_g1

0x8352,	// (0x00085a70) postcard_pane_g2_ParamLimits

0x8352,	// (0x00085a70) postcard_pane_g2

0x835e,	// (0x00085a7c) postcard_pane_g3_ParamLimits

0x835e,	// (0x00085a7c) postcard_pane_g3

0xe6cc,	// (0x0008bdea) postcard_pane_g4_ParamLimits

0xe6cc,	// (0x0008bdea) postcard_pane_g4

0x836a,	// (0x00085a88) postcard_pane_g5_ParamLimits

0x836a,	// (0x00085a88) postcard_pane_g5

0x8376,	// (0x00085a94) postcard_pane_g6_ParamLimits

0x8376,	// (0x00085a94) postcard_pane_g6

0xe6da,	// (0x0008bdf8) postcard_pane_g7_ParamLimits

0xe6da,	// (0x0008bdf8) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0008cc02) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0008cc02) postcard_pane_g

0x8382,	// (0x00085aa0) main_mp2_pane_g1_ParamLimits

0x8382,	// (0x00085aa0) main_mp2_pane_g1

0x838e,	// (0x00085aac) main_mp2_pane_g2_ParamLimits

0x838e,	// (0x00085aac) main_mp2_pane_g2

0x839a,	// (0x00085ab8) main_mp2_pane_g3_ParamLimits

0x839a,	// (0x00085ab8) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0008cc11) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0008cc11) main_mp2_pane_g

0x83a6,	// (0x00085ac4) main_mp2_pane_t1_ParamLimits

0x83a6,	// (0x00085ac4) main_mp2_pane_t1

0x83bd,	// (0x00085adb) main_mp2_pane_t2_ParamLimits

0x83bd,	// (0x00085adb) main_mp2_pane_t2

0x83d1,	// (0x00085aef) main_mp2_pane_t3_ParamLimits

0x83d1,	// (0x00085aef) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0008cc18) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0008cc18) main_mp2_pane_t

0xe6e8,	// (0x0008be06) pec_content_pane_ParamLimits

0xe6e8,	// (0x0008be06) pec_content_pane

0xdd94,	// (0x0008b4b2) scroll_pane_cp015

0xe6fa,	// (0x0008be18) pec_attribute_pane_ParamLimits

0xe6fa,	// (0x0008be18) pec_attribute_pane

0x83e3,	// (0x00085b01) pec_content_pane_g1_ParamLimits

0x83e3,	// (0x00085b01) pec_content_pane_g1

0xe70a,	// (0x0008be28) pec_content_pane_t1_ParamLimits

0xe70a,	// (0x0008be28) pec_content_pane_t1

0xe71c,	// (0x0008be3a) pec_content_pane_t2_ParamLimits

0xe71c,	// (0x0008be3a) pec_content_pane_t2

0x0001,

0xf501,	// (0x0008cc1f) pec_content_pane_t_ParamLimits

0xf501,	// (0x0008cc1f) pec_content_pane_t

0x83ef,	// (0x00085b0d) list_single_graphic_pane_cp01_ParamLimits

0x83ef,	// (0x00085b0d) list_single_graphic_pane_cp01

0x484c,	// (0x00081f6a) bg_popup_sub_pane_cp04

0xe72e,	// (0x0008be4c) popup_mup_playback_window_g1

0xe73a,	// (0x0008be58) popup_mup_playback_window_t1

0xe74f,	// (0x0008be6d) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0008cc24) popup_mup_playback_window_t

0xe786,	// (0x0008bea4) main_image_pane_g1_ParamLimits

0xe786,	// (0x0008bea4) main_image_pane_g1

0xe7c9,	// (0x0008bee7) scroll_pane_cp018_ParamLimits

0xe7c9,	// (0x0008bee7) scroll_pane_cp018

0xe7e1,	// (0x0008beff) scroll_pane_cp016_ParamLimits

0xe7e1,	// (0x0008beff) scroll_pane_cp016

0x8488,	// (0x00085ba6) smil2_image_pane_ParamLimits

0x8488,	// (0x00085ba6) smil2_image_pane

0x84b8,	// (0x00085bd6) smil2_root_pane_ParamLimits

0x84b8,	// (0x00085bd6) smil2_root_pane

0x84e4,	// (0x00085c02) smil2_text_pane_ParamLimits

0x84e4,	// (0x00085c02) smil2_text_pane

0x45f1,	// (0x00081d0f) bg_list_pane_cp06

0xe81d,	// (0x0008bf3b) grid_radio_pane

0x45f1,	// (0x00081d0f) bg_popup_window_pane_cp06

0xe825,	// (0x0008bf43) main_fmradio_pane_t1

0xe2c3,	// (0x0008b9e1) heading_pane_cp04

0xe833,	// (0x0008bf51) main_fmradio_pane_t2

0x133c,	// (0x0007ea5a) popup_cale_lunar_info_window_g1

0xe841,	// (0x0008bf5f) main_fmradio_pane_t3

0x1344,	// (0x0007ea62) popup_cale_lunar_info_window_g2

0xe84f,	// (0x0008bf6d) main_fmradio_pane_t4

0x0001,

0xe85d,	// (0x0008bf7b) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0008ccff) popup_cale_lunar_info_window_g

0xf51b,	// (0x0008cc39) main_fmradio_pane_t

0xe86b,	// (0x0008bf89) wait_bar_pane_cp03

0xe873,	// (0x0008bf91) cell_fmradio_pane_ParamLimits

0xe873,	// (0x0008bf91) cell_fmradio_pane

0xe6da,	// (0x0008bdf8) cell_fmradio_pane_g1_ParamLimits

0xe6da,	// (0x0008bdf8) cell_fmradio_pane_g1

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp011

0xe886,	// (0x0008bfa4) poc_content_pane_ParamLimits

0xe886,	// (0x0008bfa4) poc_content_pane

0xe898,	// (0x0008bfb6) scroll_pane_cp019

0x8524,	// (0x00085c42) popup_call_poc_act_window_ParamLimits

0x8524,	// (0x00085c42) popup_call_poc_act_window

0x8531,	// (0x00085c4f) popup_call_poc_inact_window_ParamLimits

0x8531,	// (0x00085c4f) popup_call_poc_inact_window

0xf5b8,	// (0x0008ccd6) bg_popup_call_poc_act_pane_g

0x12b4,	// (0x0007e9d2) bg_popup_call_poc_inact_pane_g1

0x12bc,	// (0x0007e9da) bg_popup_call_poc_inact_pane_g2

0xe8a0,	// (0x0008bfbe) popup_call_poc_act_window_g2

0x12c4,	// (0x0007e9e2) bg_popup_call_poc_inact_pane_g3

0x12cc,	// (0x0007e9ea) bg_popup_call_poc_inact_pane_g4

0x12d4,	// (0x0007e9f2) bg_popup_call_poc_inact_pane_g5

0xe8a8,	// (0x0008bfc6) popup_call_poc_act_window_t1_ParamLimits

0xe8a8,	// (0x0008bfc6) popup_call_poc_act_window_t1

0xe8d0,	// (0x0008bfee) popup_call_poc_act_window_t2_ParamLimits

0xe8d0,	// (0x0008bfee) popup_call_poc_act_window_t2

0xe8f8,	// (0x0008c016) popup_call_poc_act_window_t3_ParamLimits

0xe8f8,	// (0x0008c016) popup_call_poc_act_window_t3

0xe920,	// (0x0008c03e) popup_call_poc_act_window_t4_ParamLimits

0xe920,	// (0x0008c03e) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0008cc44) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0008cc44) popup_call_poc_act_window_t

0x12dc,	// (0x0007e9fa) bg_popup_call_poc_inact_pane_g6

0x12e4,	// (0x0007ea02) bg_popup_call_poc_inact_pane_g7

0x12ec,	// (0x0007ea0a) bg_popup_call_poc_inact_pane_g8

0xe932,	// (0x0008c050) popup_call_poc_inact_window_g2

0x12f4,	// (0x0007ea12) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0008ccc3) bg_popup_call_poc_inact_pane_g

0xe93a,	// (0x0008c058) popup_call_poc_inact_window_t1_ParamLimits

0xe93a,	// (0x0008c058) popup_call_poc_inact_window_t1

0xe94f,	// (0x0008c06d) popup_call_poc_inact_window_t2_ParamLimits

0xe94f,	// (0x0008c06d) popup_call_poc_inact_window_t2

0xe964,	// (0x0008c082) popup_call_poc_inact_window_t3_ParamLimits

0xe964,	// (0x0008c082) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0008cc4d) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0008cc4d) popup_call_poc_inact_window_t

0x14ac,	// (0x0007ebca) context_pane_ParamLimits

0x8b21,	// (0x0008623f) signal_pane_ParamLimits

0xe52f,	// (0x0008bc4d) main_call2_pane

0x149a,	// (0x0007ebb8) popup_phob_thumbnail2_window_ParamLimits

0x149a,	// (0x0007ebb8) popup_phob_thumbnail2_window

0x81fe,	// (0x0008591c) aid_hotspot_pointer_arrow_pane

0x8206,	// (0x00085924) aid_hotspot_pointer_hand_pane

0x8853,	// (0x00085f71) phob_pre_status_pane_g5

0x65d4,	// (0x00083cf2) cams_zoom_pane_ParamLimits

0x65e0,	// (0x00083cfe) image_vga_pane_ParamLimits

0x65ef,	// (0x00083d0d) main_camera_pane_g1_ParamLimits

0x65fd,	// (0x00083d1b) main_camera_pane_g2_ParamLimits

0x6609,	// (0x00083d27) main_camera_pane_g3_ParamLimits

0x6615,	// (0x00083d33) main_camera_pane_g4_ParamLimits

0x6621,	// (0x00083d3f) main_camera_pane_g5_ParamLimits

0x662d,	// (0x00083d4b) main_camera_pane_g6_ParamLimits

0x6639,	// (0x00083d57) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0008c94c) main_camera_pane_g_ParamLimits

0x6645,	// (0x00083d63) main_camera_pane_t1_ParamLimits

0x6657,	// (0x00083d75) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0008c95d) main_camera_pane_t_ParamLimits

0x484c,	// (0x00081f6a) bg_popup_preview_window_pane_cp01_ParamLimits

0x484c,	// (0x00081f6a) bg_popup_preview_window_pane_cp01

0xe979,	// (0x0008c097) popup_phob_thumbnail2_window_g1_ParamLimits

0xe979,	// (0x0008c097) popup_phob_thumbnail2_window_g1

0x45f1,	// (0x00081d0f) call2_cli_visual_pane

0x854d,	// (0x00085c6b) popup_call2_audio_conf_window_ParamLimits

0x854d,	// (0x00085c6b) popup_call2_audio_conf_window

0x8562,	// (0x00085c80) popup_call2_audio_first_window_ParamLimits

0x8562,	// (0x00085c80) popup_call2_audio_first_window

0x8600,	// (0x00085d1e) popup_call2_audio_in_window_ParamLimits

0x8600,	// (0x00085d1e) popup_call2_audio_in_window

0x8642,	// (0x00085d60) popup_call2_audio_out_window_ParamLimits

0x8642,	// (0x00085d60) popup_call2_audio_out_window

0x86a4,	// (0x00085dc2) popup_call2_audio_second_window_ParamLimits

0x86a4,	// (0x00085dc2) popup_call2_audio_second_window

0x8702,	// (0x00085e20) popup_call2_audio_wait_window_ParamLimits

0x8702,	// (0x00085e20) popup_call2_audio_wait_window

0x45f1,	// (0x00081d0f) bg_popup_call2_act_pane_cp03

0x482e,	// (0x00081f4c) list_conf_pane_cp

0xe985,	// (0x0008c0a3) popup_call2_audio_conf_window_t1

0xe320,	// (0x0008ba3e) list_single_graphic_popup_conf2_pane_ParamLimits

0xe320,	// (0x0008ba3e) list_single_graphic_popup_conf2_pane

0xe333,	// (0x0008ba51) list_highlight_pane_cp04

0xe993,	// (0x0008c0b1) list_single_graphic_popup_conf2_pane_g1

0xe344,	// (0x0008ba62) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0008cc54) list_single_graphic_popup_conf2_pane_g

0xe99d,	// (0x0008c0bb) list_single_graphic_popup_conf2_pane_t1

0xe9ab,	// (0x0008c0c9) bg_popup_call2_act_pane_cp01_ParamLimits

0xe9ab,	// (0x0008c0c9) bg_popup_call2_act_pane_cp01

0xea35,	// (0x0008c153) call_type_pane_cp05_ParamLimits

0xea35,	// (0x0008c153) call_type_pane_cp05

0xea89,	// (0x0008c1a7) popup_call2_audio_second_window_g1_ParamLimits

0xea89,	// (0x0008c1a7) popup_call2_audio_second_window_g1

0xeadd,	// (0x0008c1fb) popup_call2_audio_second_window_g2_ParamLimits

0xeadd,	// (0x0008c1fb) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0008cc59) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0008cc59) popup_call2_audio_second_window_g

0xeb42,	// (0x0008c260) popup_call2_audio_second_window_t1_ParamLimits

0xeb42,	// (0x0008c260) popup_call2_audio_second_window_t1

0x0741,	// (0x0007de5f) popup_call2_audio_second_window_t2_ParamLimits

0x0741,	// (0x0007de5f) popup_call2_audio_second_window_t2

0x0794,	// (0x0007deb2) popup_call2_audio_second_window_t3_ParamLimits

0x0794,	// (0x0007deb2) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0008cc60) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0008cc60) popup_call2_audio_second_window_t

0x45f1,	// (0x00081d0f) bg_popup_call2_in_pane_cp02

0x45fb,	// (0x00081d19) call_type_pane_cp04

0x4603,	// (0x00081d21) popup_call2_audio_wait_window_g1

0x460b,	// (0x00081d29) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0008c839) popup_call2_audio_wait_window_g

0x4613,	// (0x00081d31) popup_call2_audio_wait_window_t3

0x0887,	// (0x0007dfa5) bg_popup_call2_act_pane_ParamLimits

0x0887,	// (0x0007dfa5) bg_popup_call2_act_pane

0x0947,	// (0x0007e065) call_type_pane_cp03_ParamLimits

0x0947,	// (0x0007e065) call_type_pane_cp03

0x09ab,	// (0x0007e0c9) popup_call2_audio_first_window_g1_ParamLimits

0x09ab,	// (0x0007e0c9) popup_call2_audio_first_window_g1

0x0a1b,	// (0x0007e139) popup_call2_audio_first_window_g2_ParamLimits

0x0a1b,	// (0x0007e139) popup_call2_audio_first_window_g2

0xe24c,	// (0x0008b96a) popup_call2_audio_first_window_g3_ParamLimits

0xe24c,	// (0x0008b96a) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0008cc69) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0008cc69) popup_call2_audio_first_window_g

0x0af9,	// (0x0007e217) popup_call2_audio_first_window_t1_ParamLimits

0x0af9,	// (0x0007e217) popup_call2_audio_first_window_t1

0x0bfc,	// (0x0007e31a) popup_call2_audio_first_window_t4_ParamLimits

0x0bfc,	// (0x0007e31a) popup_call2_audio_first_window_t4

0x0cdf,	// (0x0007e3fd) popup_call2_audio_first_window_t5_ParamLimits

0x0cdf,	// (0x0007e3fd) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0008cc74) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0008cc74) popup_call2_audio_first_window_t

0x4844,	// (0x00081f62) bg_popup_call2_act_pane_g1

0x134c,	// (0x0007ea6a) popup_cale_lunar_info_window_t1

0x135a,	// (0x0007ea78) popup_cale_lunar_info_window_t2

0x1368,	// (0x0007ea86) popup_cale_lunar_info_window_t3

0x45f1,	// (0x00081d0f) bg_popup_call2_bubble_pane

0x0de0,	// (0x0007e4fe) bg_popup_call2_in_pane_cp01_ParamLimits

0x0de0,	// (0x0007e4fe) bg_popup_call2_in_pane_cp01

0x42cd,	// (0x000819eb) call_type_pane_cp02

0x0e28,	// (0x0007e546) popup_call2_audio_out_window_g1_ParamLimits

0x0e28,	// (0x0007e546) popup_call2_audio_out_window_g1

0x0e54,	// (0x0007e572) popup_call2_audio_out_window_g2_ParamLimits

0x0e54,	// (0x0007e572) popup_call2_audio_out_window_g2

0x0e7c,	// (0x0007e59a) popup_call2_audio_out_window_g3_ParamLimits

0x0e7c,	// (0x0007e59a) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0008cc7d) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0008cc7d) popup_call2_audio_out_window_g

0x0eb7,	// (0x0007e5d5) popup_call2_audio_out_window_t1_ParamLimits

0x0eb7,	// (0x0007e5d5) popup_call2_audio_out_window_t1

0x0f16,	// (0x0007e634) popup_call2_audio_out_window_t2_ParamLimits

0x0f16,	// (0x0007e634) popup_call2_audio_out_window_t2

0x0f6a,	// (0x0007e688) popup_call2_audio_out_window_t3_ParamLimits

0x0f6a,	// (0x0007e688) popup_call2_audio_out_window_t3

0x0f80,	// (0x0007e69e) popup_call2_audio_out_window_t4_ParamLimits

0x0f80,	// (0x0007e69e) popup_call2_audio_out_window_t4

0x0f96,	// (0x0007e6b4) popup_call2_audio_out_window_t5_ParamLimits

0x0f96,	// (0x0007e6b4) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0008cc86) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0008cc86) popup_call2_audio_out_window_t

0x0ffa,	// (0x0007e718) bg_popup_call2_in_pane_ParamLimits

0x0ffa,	// (0x0007e718) bg_popup_call2_in_pane

0x1056,	// (0x0007e774) popup_call2_audio_in_window_g1_ParamLimits

0x1056,	// (0x0007e774) popup_call2_audio_in_window_g1

0x108e,	// (0x0007e7ac) popup_call2_audio_in_window_g2_ParamLimits

0x108e,	// (0x0007e7ac) popup_call2_audio_in_window_g2

0x10c6,	// (0x0007e7e4) popup_call2_audio_in_window_g3_ParamLimits

0x10c6,	// (0x0007e7e4) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0008cc93) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0008cc93) popup_call2_audio_in_window_g

0x111e,	// (0x0007e83c) popup_call2_audio_in_window_t1_ParamLimits

0x111e,	// (0x0007e83c) popup_call2_audio_in_window_t1

0x119e,	// (0x0007e8bc) popup_call2_audio_in_window_t2_ParamLimits

0x119e,	// (0x0007e8bc) popup_call2_audio_in_window_t2

0x121e,	// (0x0007e93c) popup_call2_audio_in_window_t3_ParamLimits

0x121e,	// (0x0007e93c) popup_call2_audio_in_window_t3

0x1238,	// (0x0007e956) popup_call2_audio_in_window_t4_ParamLimits

0x1238,	// (0x0007e956) popup_call2_audio_in_window_t4

0x124a,	// (0x0007e968) popup_call2_audio_in_window_t5_ParamLimits

0x124a,	// (0x0007e968) popup_call2_audio_in_window_t5

0x125f,	// (0x0007e97d) popup_call2_audio_in_window_t6_ParamLimits

0x125f,	// (0x0007e97d) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0008cc9c) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0008cc9c) popup_call2_audio_in_window_t

0x4844,	// (0x00081f62) bg_popup_call2_in_pane_g1

0x1376,	// (0x0007ea94) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0008cd04) popup_cale_lunar_info_window_t

0x484c,	// (0x00081f6a) bg_popup_call2_rect_pane_ParamLimits

0x484c,	// (0x00081f6a) bg_popup_call2_rect_pane

0x45f1,	// (0x00081d0f) call2_cli_visual_graphic_pane

0x45f1,	// (0x00081d0f) call2_cli_visual_text_pane

0x8bc7,	// (0x000862e5) smil_status_volume_pane_g3

0x0002,

0x4978,	// (0x00082096) call2_cli_visual_graphic_pane_g1

0x4978,	// (0x00082096) call2_cli_visual_graphic_pane_g2

0x4978,	// (0x00082096) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0008cca9) call2_cli_visual_graphic_pane_g

0x1274,	// (0x0007e992) bg_popup_call2_rect_pane_g1

0x4a04,	// (0x00082122) bg_popup_call2_rect_pane_g2

0x127c,	// (0x0007e99a) bg_popup_call2_rect_pane_g3

0x1284,	// (0x0007e9a2) bg_popup_call2_rect_pane_g4

0x128c,	// (0x0007e9aa) bg_popup_call2_rect_pane_g5

0x1294,	// (0x0007e9b2) bg_popup_call2_rect_pane_g6

0x129c,	// (0x0007e9ba) bg_popup_call2_rect_pane_g7

0x12a4,	// (0x0007e9c2) bg_popup_call2_rect_pane_g8

0x12ac,	// (0x0007e9ca) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0008ccb0) bg_popup_call2_rect_pane_g

0x12b4,	// (0x0007e9d2) bg_popup_call2_bubble_pane_g1

0x12bc,	// (0x0007e9da) bg_popup_call2_bubble_pane_g2

0x12c4,	// (0x0007e9e2) bg_popup_call2_bubble_pane_g3

0x12cc,	// (0x0007e9ea) bg_popup_call2_bubble_pane_g4

0x12d4,	// (0x0007e9f2) bg_popup_call2_bubble_pane_g5

0x12dc,	// (0x0007e9fa) bg_popup_call2_bubble_pane_g6

0x12e4,	// (0x0007ea02) bg_popup_call2_bubble_pane_g7

0x12ec,	// (0x0007ea0a) bg_popup_call2_bubble_pane_g8

0x12f4,	// (0x0007ea12) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0008ccc3) bg_popup_call2_bubble_pane_g

0x614d,	// (0x0008386b) aid_cale_week_size_cell_pane

0x6669,	// (0x00083d87) aid_cams_cif_uncrop_pane_ParamLimits

0x6669,	// (0x00083d87) aid_cams_cif_uncrop_pane

0x67c6,	// (0x00083ee4) aid_cams_size_cell_ParamLimits

0x67c6,	// (0x00083ee4) aid_cams_size_cell

0x67d2,	// (0x00083ef0) grid_cams_pane_ParamLimits

0x67e0,	// (0x00083efe) linegrid_cams_pane_ParamLimits

0x690c,	// (0x0008402a) call_video_pane_t1

0x692d,	// (0x0008404b) call_video_pane_t2

0x0001,

0xf292,	// (0x0008c9b0) call_video_pane_t

0x6e64,	// (0x00084582) aid_cale_month_size_cell_pane_ParamLimits

0x6e64,	// (0x00084582) aid_cale_month_size_cell_pane

0xf62f,	// (0x0008cd4d) smil_status_volume_pane_g

0x8bd4,	// (0x000862f2) volume_smil_pane_ParamLimits

0x03b0,	// (0x0007dace) aid_popup2_width_pane

0x604a,	// (0x00083768) cell_qdial_pane_g4_ParamLimits

0x604a,	// (0x00083768) cell_qdial_pane_g4

0x7ae1,	// (0x000851ff) aid_blid_cardinal_pane_ParamLimits

0x7af1,	// (0x0008520f) aid_blid_destination_pane_ParamLimits

0x7af1,	// (0x0008520f) aid_blid_destination_pane

0x484c,	// (0x00081f6a) bg_popup_call_poc_act_pane_ParamLimits

0x484c,	// (0x00081f6a) bg_popup_call_poc_act_pane

0x484c,	// (0x00081f6a) bg_popup_call_poc_inact_pane_ParamLimits

0x484c,	// (0x00081f6a) bg_popup_call_poc_inact_pane

0x12fc,	// (0x0007ea1a) bg_popup_call_poc_act_pane_g1

0x1304,	// (0x0007ea22) bg_popup_call_poc_act_pane_g2

0x130c,	// (0x0007ea2a) bg_popup_call_poc_act_pane_g3

0x12cc,	// (0x0007e9ea) bg_popup_call_poc_act_pane_g4

0x12d4,	// (0x0007e9f2) bg_popup_call_poc_act_pane_g5

0x1314,	// (0x0007ea32) bg_popup_call_poc_act_pane_g6

0x12e4,	// (0x0007ea02) bg_popup_call_poc_act_pane_g7

0x131c,	// (0x0007ea3a) bg_popup_call_poc_act_pane_g8

0x45f1,	// (0x00081d0f) main_usb_pane

0x1475,	// (0x0007eb93) popup_cale_lunar_info_window

0x6c58,	// (0x00084376) im_reading_pane_t1_ParamLimits

0xdcec,	// (0x0008b40a) list_im_pane_ParamLimits

0xdcfd,	// (0x0008b41b) scroll_pane_cp07_ParamLimits

0x45f1,	// (0x00081d0f) grid_highlight_pane_cp012

0x484c,	// (0x00081f6a) mup_scale_pane_ParamLimits

0xe24c,	// (0x0008b96a) main_usb_pane_g1_ParamLimits

0xe24c,	// (0x0008b96a) main_usb_pane_g1

0x8776,	// (0x00085e94) main_usb_pane_g2_ParamLimits

0x8776,	// (0x00085e94) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0008cced) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0008cced) main_usb_pane_g

0x8782,	// (0x00085ea0) main_usb_pane_t1_ParamLimits

0x8782,	// (0x00085ea0) main_usb_pane_t1

0x8794,	// (0x00085eb2) main_usb_pane_t2_ParamLimits

0x8794,	// (0x00085eb2) main_usb_pane_t2

0x87a6,	// (0x00085ec4) main_usb_pane_t3_ParamLimits

0x87a6,	// (0x00085ec4) main_usb_pane_t3

0x87b8,	// (0x00085ed6) main_usb_pane_t4_ParamLimits

0x87b8,	// (0x00085ed6) main_usb_pane_t4

0x87ca,	// (0x00085ee8) main_usb_pane_t5_ParamLimits

0x87ca,	// (0x00085ee8) main_usb_pane_t5

0x87dc,	// (0x00085efa) main_usb_pane_t6_ParamLimits

0x87dc,	// (0x00085efa) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0008ccf2) main_usb_pane_t_ParamLimits

0x7a87,	// (0x000851a5) aid_text_placing

0x7a93,	// (0x000851b1) main_location2_pane_t1_ParamLimits

0x7aa7,	// (0x000851c5) main_location2_pane_t2_ParamLimits

0x7abb,	// (0x000851d9) main_location2_pane_t3_ParamLimits

0x7acf,	// (0x000851ed) main_location2_pane_t4_ParamLimits

0x7acf,	// (0x000851ed) main_location2_pane_t4

0xf3f3,	// (0x0008cb11) main_location2_pane_t_ParamLimits

0x4888,	// (0x00081fa6) find_pinb_pane_g2_ParamLimits

0x4888,	// (0x00081fa6) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0008c85f) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0008c85f) find_pinb_pane_g

0x4894,	// (0x00081fb2) find_pinb_pane_t1_ParamLimits

0x48a6,	// (0x00081fc4) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0008c864) find_pinb_pane_t_ParamLimits

0x45f1,	// (0x00081d0f) main_call3_pane

0x7270,	// (0x0008498e) cale_month_day_heading_pane_t1_ParamLimits

0x72ce,	// (0x000849ec) cale_month_day_heading_pane_t2_ParamLimits

0x7333,	// (0x00084a51) cale_month_day_heading_pane_t3_ParamLimits

0x7398,	// (0x00084ab6) cale_month_day_heading_pane_t4_ParamLimits

0x73fd,	// (0x00084b1b) cale_month_day_heading_pane_t5_ParamLimits

0x7462,	// (0x00084b80) cale_month_day_heading_pane_t6_ParamLimits

0x74c7,	// (0x00084be5) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0008c9e8) cale_month_day_heading_pane_t_ParamLimits

0xdf3d,	// (0x0008b65b) smil_status_volume_pane

0x833a,	// (0x00085a58) postcard_address_pane_ParamLimits

0x833a,	// (0x00085a58) postcard_address_pane

0x8346,	// (0x00085a64) postcard_message_pane_ParamLimits

0x8346,	// (0x00085a64) postcard_message_pane

0x8741,	// (0x00085e5f) call2_cli_visual_pane_t1_ParamLimits

0x8741,	// (0x00085e5f) call2_cli_visual_pane_t1

0x8d2b,	// (0x00086449) postcard_message_pane_t1_ParamLimits

0x8d2b,	// (0x00086449) postcard_message_pane_t1

0x8d14,	// (0x00086432) postcard_address_pane_t1_ParamLimits

0x8d14,	// (0x00086432) postcard_address_pane_t1

0x8d05,	// (0x00086423) popup_call3_audio_in_window_ParamLimits

0x8d05,	// (0x00086423) popup_call3_audio_in_window

0x8be9,	// (0x00086307) bg_popup_call3_in_pane_ParamLimits

0x8be9,	// (0x00086307) bg_popup_call3_in_pane

0x8c4b,	// (0x00086369) popup_call3_audio_in_window_g1_ParamLimits

0x8c4b,	// (0x00086369) popup_call3_audio_in_window_g1

0x8c63,	// (0x00086381) popup_call3_audio_in_window_g2_ParamLimits

0x8c63,	// (0x00086381) popup_call3_audio_in_window_g2

0x8c7b,	// (0x00086399) popup_call3_audio_in_window_g3_ParamLimits

0x8c7b,	// (0x00086399) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0008cd54) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0008cd54) popup_call3_audio_in_window_g

0x8ca3,	// (0x000863c1) popup_call3_audio_in_window_t1_ParamLimits

0x8ca3,	// (0x000863c1) popup_call3_audio_in_window_t1

0x8ccb,	// (0x000863e9) popup_call3_audio_in_window_t2_ParamLimits

0x8ccb,	// (0x000863e9) popup_call3_audio_in_window_t2

0x8cf3,	// (0x00086411) popup_call3_audio_in_window_t3_ParamLimits

0x8cf3,	// (0x00086411) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0008cd5d) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0008cd5d) popup_call3_audio_in_window_t

0xe52f,	// (0x0008bc4d) bg_popup_call3_rect_pane

0x1274,	// (0x0007e992) bg_popup_call3_rect_pane_g1

0x4a04,	// (0x00082122) bg_popup_call3_rect_pane_g2

0x127c,	// (0x0007e99a) bg_popup_call3_rect_pane_g3

0x1284,	// (0x0007e9a2) bg_popup_call3_rect_pane_g4

0x128c,	// (0x0007e9aa) bg_popup_call3_rect_pane_g5

0x1294,	// (0x0007e9b2) bg_popup_call3_rect_pane_g6

0x129c,	// (0x0007e9ba) bg_popup_call3_rect_pane_g7

0x7ee1,	// (0x000855ff) mup_visualizer_osc_pane

0xe5ee,	// (0x0008bd0c) mup_visualizer_spec_pane

0x8c09,	// (0x00086327) call3_video_qcif_pane_ParamLimits

0x8c09,	// (0x00086327) call3_video_qcif_pane

0x8c1b,	// (0x00086339) call3_video_qcif_uncrop_pane_ParamLimits

0x8c1b,	// (0x00086339) call3_video_qcif_uncrop_pane

0x8c29,	// (0x00086347) call3_video_subqcif_pane_ParamLimits

0x8c29,	// (0x00086347) call3_video_subqcif_pane

0x8c3b,	// (0x00086359) call3_video_subqcif_uncrop_pane_ParamLimits

0x8c3b,	// (0x00086359) call3_video_subqcif_uncrop_pane

0x8c93,	// (0x000863b1) popup_call3_audio_in_window_g4_ParamLimits

0x8c93,	// (0x000863b1) popup_call3_audio_in_window_g4

0x8bb6,	// (0x000862d4) mup_spec_half_pane

0x8bbf,	// (0x000862dd) mup_spec_half_pane_cp

0x150c,	// (0x0007ec2a) mup_osc_middle_pane

0x1515,	// (0x0007ec33) mup_visualizer_osc_pane_g1

0x8b97,	// (0x000862b5) mup_spec_bar_pane_ParamLimits

0x8b97,	// (0x000862b5) mup_spec_bar_pane

0x14f9,	// (0x0007ec17) mup_spec_bar_pane_g1

0x1503,	// (0x0007ec21) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008cd48) mup_spec_bar_pane_g

0x614d,	// (0x0008386b) aid_cale_week_size_cell_pane_ParamLimits

0x6160,	// (0x0008387e) bg_cale_heading_pane_ParamLimits

0xdb65,	// (0x0008b283) bg_cale_pane_cp01_ParamLimits

0x617c,	// (0x0008389a) cale_week_corner_pane_ParamLimits

0x6192,	// (0x000838b0) cale_week_day_heading_pane_ParamLimits

0x61ae,	// (0x000838cc) cale_week_scroll_pane_g1_ParamLimits

0x61c7,	// (0x000838e5) cale_week_scroll_pane_g2_ParamLimits

0x61d8,	// (0x000838f6) cale_week_scroll_pane_g3_ParamLimits

0x61e9,	// (0x00083907) cale_week_scroll_pane_g4_ParamLimits

0x61fa,	// (0x00083918) cale_week_scroll_pane_g5_ParamLimits

0x620b,	// (0x00083929) cale_week_scroll_pane_g6_ParamLimits

0x621c,	// (0x0008393a) cale_week_scroll_pane_g7_ParamLimits

0x622f,	// (0x0008394d) cale_week_scroll_pane_g8_ParamLimits

0x6242,	// (0x00083960) cale_week_scroll_pane_g9_ParamLimits

0x6253,	// (0x00083971) cale_week_scroll_pane_g10_ParamLimits

0x6264,	// (0x00083982) cale_week_scroll_pane_g11_ParamLimits

0x6275,	// (0x00083993) cale_week_scroll_pane_g12_ParamLimits

0x6286,	// (0x000839a4) cale_week_scroll_pane_g13_ParamLimits

0x629f,	// (0x000839bd) cale_week_scroll_pane_g14_ParamLimits

0x62b8,	// (0x000839d6) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0008c8f0) cale_week_scroll_pane_g_ParamLimits

0x62d1,	// (0x000839ef) cale_week_time_pane_ParamLimits

0x62e4,	// (0x00083a02) grid_cale_week_pane_ParamLimits

0xdb7e,	// (0x0008b29c) listscroll_cale_week_pane_t1

0x6301,	// (0x00083a1f) scroll_pane_cp08_ParamLimits

0x6eb5,	// (0x000845d3) cale_month_corner_pane_ParamLimits

0xdf13,	// (0x0008b631) cale_month_pane_t1

0x721f,	// (0x0008493d) cale_month_week_pane_ParamLimits

0xe24c,	// (0x0008b96a) popup_call_status_window_g1_ParamLimits

0x78aa,	// (0x00084fc8) popup_call_status_window_g2_ParamLimits

0x78b6,	// (0x00084fd4) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0008ca98) popup_call_status_window_g_ParamLimits

0xe2b3,	// (0x0008b9d1) aid_call2_pane

0x8179,	// (0x00085897) msg_header_pane_g1

0x833a,	// (0x00085a58) postcard_address2_pane_ParamLimits

0x833a,	// (0x00085a58) postcard_address2_pane

0x8346,	// (0x00085a64) postcard_message2_pane_ParamLimits

0x8346,	// (0x00085a64) postcard_message2_pane

0x8b2f,	// (0x0008624d) message2_row_pane_ParamLimits

0x8b2f,	// (0x0008624d) message2_row_pane

0x8b4a,	// (0x00086268) address2_row_pane_ParamLimits

0x8b4a,	// (0x00086268) address2_row_pane

0x14c7,	// (0x0007ebe5) postcard_message2_row_pane_g1

0x14cf,	// (0x0007ebed) postcard_message2_row_pane_t1

0x14c7,	// (0x0007ebe5) address2_row_pane_g1

0x14cf,	// (0x0007ebed) address2_row_pane_t1

0x6535,	// (0x00083c53) aid_size_cell_vorec

0x45f1,	// (0x00081d0f) main_rss_pane

0x8b5d,	// (0x0008627b) rss_list_single_pane_ParamLimits

0x8b5d,	// (0x0008627b) rss_list_single_pane

0x14dd,	// (0x0007ebfb) rss_list_single_pane_t1

0x14eb,	// (0x0007ec09) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0008cd43) rss_list_single_pane_t

0x45f1,	// (0x00081d0f) main_camera2_pane

0x45f1,	// (0x00081d0f) main_video2_pane

0x8d8f,	// (0x000864ad) cams_zoom_pane_cp2_ParamLimits

0x8d8f,	// (0x000864ad) cams_zoom_pane_cp2

0x8d9b,	// (0x000864b9) image2_vga_pane_ParamLimits

0x8d9b,	// (0x000864b9) image2_vga_pane

0x8daa,	// (0x000864c8) main_camera2_pane_g1_ParamLimits

0x8daa,	// (0x000864c8) main_camera2_pane_g1

0x8db6,	// (0x000864d4) main_camera2_pane_g2_ParamLimits

0x8db6,	// (0x000864d4) main_camera2_pane_g2

0x8dc2,	// (0x000864e0) main_camera2_pane_g3_ParamLimits

0x8dc2,	// (0x000864e0) main_camera2_pane_g3

0x8dce,	// (0x000864ec) main_camera2_pane_g4_ParamLimits

0x8dce,	// (0x000864ec) main_camera2_pane_g4

0x8dda,	// (0x000864f8) main_camera2_pane_g5_ParamLimits

0x8dda,	// (0x000864f8) main_camera2_pane_g5

0x8de6,	// (0x00086504) main_camera2_pane_g6_ParamLimits

0x8de6,	// (0x00086504) main_camera2_pane_g6

0x8df2,	// (0x00086510) main_camera2_pane_g7_ParamLimits

0x8df2,	// (0x00086510) main_camera2_pane_g7

0x8dfe,	// (0x0008651c) main_camera2_pane_g8_ParamLimits

0x8dfe,	// (0x0008651c) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0008cd64) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0008cd64) main_camera2_pane_g

0x8e16,	// (0x00086534) main_camera2_pane_t1_ParamLimits

0x8e16,	// (0x00086534) main_camera2_pane_t1

0x8e28,	// (0x00086546) main_camera2_pane_t2_ParamLimits

0x8e28,	// (0x00086546) main_camera2_pane_t2

0x8e3a,	// (0x00086558) main_camera2_pane_t3_ParamLimits

0x8e3a,	// (0x00086558) main_camera2_pane_t3

0x8e4c,	// (0x0008656a) main_camera2_pane_t4_ParamLimits

0x8e4c,	// (0x0008656a) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0008cd77) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0008cd77) main_camera2_pane_t

0x8eae,	// (0x000865cc) cams_zoom_pane_cp4_ParamLimits

0x8eae,	// (0x000865cc) cams_zoom_pane_cp4

0x8ebe,	// (0x000865dc) image2_cif_pane_ParamLimits

0x8ebe,	// (0x000865dc) image2_cif_pane

0x8ed3,	// (0x000865f1) image2_subqcif_pane_ParamLimits

0x8ed3,	// (0x000865f1) image2_subqcif_pane

0x8ee2,	// (0x00086600) main_video2_pane_g1_ParamLimits

0x8ee2,	// (0x00086600) main_video2_pane_g1

0x8ef4,	// (0x00086612) main_video2_pane_g2_ParamLimits

0x8ef4,	// (0x00086612) main_video2_pane_g2

0x8f04,	// (0x00086622) main_video2_pane_g3_ParamLimits

0x8f04,	// (0x00086622) main_video2_pane_g3

0x8f14,	// (0x00086632) main_video2_pane_g4_ParamLimits

0x8f14,	// (0x00086632) main_video2_pane_g4

0x8f24,	// (0x00086642) main_video2_pane_g5_ParamLimits

0x8f24,	// (0x00086642) main_video2_pane_g5

0x8f34,	// (0x00086652) main_video2_pane_g6_ParamLimits

0x8f34,	// (0x00086652) main_video2_pane_g6

0x0005,

0xf668,	// (0x0008cd86) main_video2_pane_g_ParamLimits

0xf668,	// (0x0008cd86) main_video2_pane_g

0x8f46,	// (0x00086664) main_video2_pane_t1_ParamLimits

0x8f46,	// (0x00086664) main_video2_pane_t1

0x8f60,	// (0x0008667e) main_video2_pane_t2_ParamLimits

0x8f60,	// (0x0008667e) main_video2_pane_t2

0x8f86,	// (0x000866a4) main_video2_pane_t3_ParamLimits

0x8f86,	// (0x000866a4) main_video2_pane_t3

0x0002,

0xf675,	// (0x0008cd93) main_video2_pane_t_ParamLimits

0xf675,	// (0x0008cd93) main_video2_pane_t

0x8893,	// (0x00085fb1) call_muted_g2

0x0001,

0xf617,	// (0x0008cd35) call_muted_g

0x45f1,	// (0x00081d0f) main_mup2_pane

0x15cc,	// (0x0007ecea) main_mup2_pane_g1_ParamLimits

0x15cc,	// (0x0007ecea) main_mup2_pane_g1

0x8fac,	// (0x000866ca) main_mup2_pane_g2_ParamLimits

0x8fac,	// (0x000866ca) main_mup2_pane_g2

0x922e,	// (0x0008694c) main_mup_pane_g13_cp1

0x9236,	// (0x00086954) mup_volume_pane_cp1

0x8fcc,	// (0x000866ea) main_mup2_pane_g4_ParamLimits

0x8fcc,	// (0x000866ea) main_mup2_pane_g4

0x8fe1,	// (0x000866ff) main_mup2_pane_g5_ParamLimits

0x8fe1,	// (0x000866ff) main_mup2_pane_g5

0x8ff6,	// (0x00086714) main_mup2_pane_g6_ParamLimits

0x8ff6,	// (0x00086714) main_mup2_pane_g6

0x900b,	// (0x00086729) main_mup2_pane_g7_ParamLimits

0x900b,	// (0x00086729) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0008cd9a) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0008cd9a) main_mup2_pane_g

0x9027,	// (0x00086745) main_mup2_pane_t1_ParamLimits

0x9027,	// (0x00086745) main_mup2_pane_t1

0x903e,	// (0x0008675c) main_mup2_pane_t2_ParamLimits

0x903e,	// (0x0008675c) main_mup2_pane_t2

0x9055,	// (0x00086773) main_mup2_pane_t3_ParamLimits

0x9055,	// (0x00086773) main_mup2_pane_t3

0x906c,	// (0x0008678a) main_mup2_pane_t4_ParamLimits

0x906c,	// (0x0008678a) main_mup2_pane_t4

0x9086,	// (0x000867a4) main_mup2_pane_t5_ParamLimits

0x9086,	// (0x000867a4) main_mup2_pane_t5

0x90a0,	// (0x000867be) main_mup2_pane_t6_ParamLimits

0x90a0,	// (0x000867be) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0008cda9) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0008cda9) main_mup2_pane_t

0x90d8,	// (0x000867f6) mup2_visualizer_pane_ParamLimits

0x90d8,	// (0x000867f6) mup2_visualizer_pane

0x910e,	// (0x0008682c) mup_progress_pane_cp_ParamLimits

0x910e,	// (0x0008682c) mup_progress_pane_cp

0x9219,	// (0x00086937) mup_volume_pane_cp_ParamLimits

0x9219,	// (0x00086937) mup_volume_pane_cp

0x9125,	// (0x00086843) mup2_visualizer_pane_g1_ParamLimits

0x9125,	// (0x00086843) mup2_visualizer_pane_g1

0x159e,	// (0x0007ecbc) mup2_visualizer_pane_g2_ParamLimits

0x159e,	// (0x0007ecbc) mup2_visualizer_pane_g2

0x913a,	// (0x00086858) mup2_visualizer_pane_g3_ParamLimits

0x913a,	// (0x00086858) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0008cdb6) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0008cdb6) mup2_visualizer_pane_g

0xe815,	// (0x0008bf33) aid_size_cell_fmradio

0x89a9,	// (0x000860c7) aid_height_parent_landcape

0xdd7b,	// (0x0008b499) wml_content_pane_cp

0xdd83,	// (0x0008b4a1) wml_tabs_pane

0xdd8c,	// (0x0008b4aa) popup_wml_miniature_window

0xdd94,	// (0x0008b4b2) scroll_pane_cp021

0xdda8,	// (0x0008b4c6) wml_content_pane_comp8

0x45f1,	// (0x00081d0f) bg_popup_sub_pane_cp05

0x15bc,	// (0x0007ecda) popup_wml_miniature_window_g1

0x15c4,	// (0x0007ece2) wml_miniature_view_pane

0x9148,	// (0x00086866) aid_size_wml_view

0x9150,	// (0x0008686e) wml_miniature_view_pane_g1

0x9159,	// (0x00086877) wml_miniature_view_pane_g2

0x9162,	// (0x00086880) wml_miniature_view_pane_g3

0x916a,	// (0x00086888) wml_miniature_view_pane_g4

0x9172,	// (0x00086890) wml_miniature_view_pane_g5

0x917a,	// (0x00086898) wml_miniature_view_pane_g6

0x9182,	// (0x000868a0) wml_miniature_view_pane_g7

0x918a,	// (0x000868a8) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0008cdbd) wml_miniature_view_pane_g

0x15cc,	// (0x0007ecea) background_graphic_ParamLimits

0x15cc,	// (0x0007ecea) background_graphic

0x15d8,	// (0x0007ecf6) wml_tabs_2_pane

0x15e1,	// (0x0007ecff) wml_tabs_3_pane_ParamLimits

0x15e1,	// (0x0007ecff) wml_tabs_3_pane

0x15f3,	// (0x0007ed11) wml_tabs_4_pane_ParamLimits

0x15f3,	// (0x0007ed11) wml_tabs_4_pane

0x1609,	// (0x0007ed27) wml_tabs_5_pane_ParamLimits

0x1609,	// (0x0007ed27) wml_tabs_5_pane

0x1623,	// (0x0007ed41) wml_tabs_pane_g2_ParamLimits

0x1623,	// (0x0007ed41) wml_tabs_pane_g2

0x1637,	// (0x0007ed55) wml_tabs_pane_g3_ParamLimits

0x1637,	// (0x0007ed55) wml_tabs_pane_g3

0x9192,	// (0x000868b0) wml_tabs_2_active_pane_ParamLimits

0x9192,	// (0x000868b0) wml_tabs_2_active_pane

0x91a2,	// (0x000868c0) wml_tabs_2_passive_pane_ParamLimits

0x91a2,	// (0x000868c0) wml_tabs_2_passive_pane

0x91b2,	// (0x000868d0) wml_tabs_3_active_pane_cp_ParamLimits

0x91b2,	// (0x000868d0) wml_tabs_3_active_pane_cp

0x91c3,	// (0x000868e1) wml_tabs_3_passive_pane_ParamLimits

0x91c3,	// (0x000868e1) wml_tabs_3_passive_pane

0x91d4,	// (0x000868f2) wml_tabs_3_passive_pane_cp_ParamLimits

0x91d4,	// (0x000868f2) wml_tabs_3_passive_pane_cp

0x91e5,	// (0x00086903) tabs_4_active_pane

0x91ed,	// (0x0008690b) tabs_4_passive_pane

0x91f5,	// (0x00086913) tabs_4_passive_pane_cp

0x91fd,	// (0x0008691b) tabs_4_passive_pane_cp2

0x876e,	// (0x00085e8c) aid_height_text

0x7eae,	// (0x000855cc) mup_volume_cont_pane_ParamLimits

0x7eae,	// (0x000855cc) mup_volume_cont_pane

0x5c97,	// (0x000833b5) aid_size_cell_pinb

0x5ca1,	// (0x000833bf) aid_size_list_pinb

0x90f7,	// (0x00086815) mup2_volume_cont_pane_ParamLimits

0x90f7,	// (0x00086815) mup2_volume_cont_pane

0x9205,	// (0x00086923) mup2_volume_cont_pane_g1_ParamLimits

0x9205,	// (0x00086923) mup2_volume_cont_pane_g1

0x5936,	// (0x00083054) aid_size_cell_touch_ParamLimits

0x5936,	// (0x00083054) aid_size_cell_touch

0x5b7d,	// (0x0008329b) touch_pane_ParamLimits

0x5b7d,	// (0x0008329b) touch_pane

0x039e,	// (0x0007dabc) main_rss2_pane

0x168d,	// (0x0007edab) listscroll_rss2_pane

0x1696,	// (0x0007edb4) rss2_navigation_pane

0x169e,	// (0x0007edbc) list_rss2_pane

0xe3e6,	// (0x0008bb04) scroll_pane_cp22

0x16a6,	// (0x0007edc4) rss2_navigation_pane_g1

0x16af,	// (0x0007edcd) rss2_navigation_pane_g2

0x16b7,	// (0x0007edd5) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0008cdce) rss2_navigation_pane_g

0x16bf,	// (0x0007eddd) rss2_navigation_pane_t1

0x923e,	// (0x0008695c) rss2_list_single_pane_ParamLimits

0x923e,	// (0x0008695c) rss2_list_single_pane

0x16cd,	// (0x0007edeb) rss2_list_single_pane_t2

0x16db,	// (0x0007edf9) rss2_list_single_pane_t3_ParamLimits

0x16db,	// (0x0007edf9) rss2_list_single_pane_t3

0x16f8,	// (0x0007ee16) rss2_list_single_pane_t4

0x76cb,	// (0x00084de9) smil_status_pane_g1

0x4167,	// (0x00081885) main_image2_pane_ParamLimits

0x4167,	// (0x00081885) main_image2_pane

0x8e0a,	// (0x00086528) main_camera2_pane_g9_ParamLimits

0x8e0a,	// (0x00086528) main_camera2_pane_g9

0x8e5e,	// (0x0008657c) main_camera2_pane_t5_ParamLimits

0x8e5e,	// (0x0008657c) main_camera2_pane_t5

0x8e70,	// (0x0008658e) main_camera2_pane_t6_ParamLimits

0x8e70,	// (0x0008658e) main_camera2_pane_t6

0x926f,	// (0x0008698d) main_image2_pane_g1_ParamLimits

0x926f,	// (0x0008698d) main_image2_pane_g1

0x850e,	// (0x00085c2c) smil2_video_pane_ParamLimits

0x850e,	// (0x00085c2c) smil2_video_pane

0x03cc,	// (0x0007daea) aid_zoom_text_primary_cp

0x415d,	// (0x0008187b) popup_preview_fixed_window

0xdce4,	// (0x0008b402) im_reading_pane_g1

0x8d54,	// (0x00086472) cams2_bc_adjust_pane_cp_ParamLimits

0x8d54,	// (0x00086472) cams2_bc_adjust_pane_cp

0x8ea0,	// (0x000865be) cams2_bc_adjust_pane_ParamLimits

0x8ea0,	// (0x000865be) cams2_bc_adjust_pane

0x2307,	// (0x0007fa25) cams2_bc_adjust_pane_g1

0x927b,	// (0x00086999) cams2_slider_pane

0x9284,	// (0x000869a2) cams2_slider_pane_g1

0x928d,	// (0x000869ab) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0008cdd5) cams2_slider_pane_g

0x5d92,	// (0x000834b0) calc_display_pane_ParamLimits

0x5db0,	// (0x000834ce) calc_paper_pane_ParamLimits

0x5dcc,	// (0x000834ea) grid_calc_pane_ParamLimits

0x7918,	// (0x00085036) popup_clock_digital_window_t1_ParamLimits

0xe7b2,	// (0x0008bed0) main_image_pane_t1

0x5d78,	// (0x00083496) aid_size_cell_calc_ParamLimits

0x5d78,	// (0x00083496) aid_size_cell_calc

0x89db,	// (0x000860f9) popup_blid_sat_info2_window_ParamLimits

0x89db,	// (0x000860f9) popup_blid_sat_info2_window

0x1742,	// (0x0007ee60) aid_size_cell_blid

0x174a,	// (0x0007ee68) bg_popup_window_pane_cp07

0x176d,	// (0x0007ee8b) grid_popup_blid_pane

0x1777,	// (0x0007ee95) heading_pane_cp05_ParamLimits

0x1777,	// (0x0007ee95) heading_pane_cp05

0x1841,	// (0x0007ef5f) cell_popup_blid_pane_ParamLimits

0x1841,	// (0x0007ef5f) cell_popup_blid_pane

0x1865,	// (0x0007ef83) cell_popup_blid_pane_g1

0x186d,	// (0x0007ef8b) cell_popup_blid_pane_t1

0x90bd,	// (0x000867db) mup2_indicator_pane_ParamLimits

0x90bd,	// (0x000867db) mup2_indicator_pane

0xe52f,	// (0x0008bc4d) mup2_visualizer_osc_pane

0x15aa,	// (0x0007ecc8) mup2_visualizer_spec_pane_ParamLimits

0x15aa,	// (0x0007ecc8) mup2_visualizer_spec_pane

0x92a7,	// (0x000869c5) mup2_spec_half_pane

0x92b0,	// (0x000869ce) mup2_spec_half_pane_cp

0x92ba,	// (0x000869d8) mup2_spec_bar_pane_ParamLimits

0x92ba,	// (0x000869d8) mup2_spec_bar_pane

0x14f9,	// (0x0007ec17) mup2_spec_bar_pane_g1

0x1503,	// (0x0007ec21) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0008cd48) mup2_spec_bar_pane_g

0x92d9,	// (0x000869f7) mup2_osc_middle_pane

0x1515,	// (0x0007ec33) mup2_visualizer_osc_pane_g1

0x4195,	// (0x000818b3) popup_number_entry_window_t1_ParamLimits

0x41a8,	// (0x000818c6) popup_number_entry_window_t2_ParamLimits

0x41ba,	// (0x000818d8) popup_number_entry_window_t3_ParamLimits

0x5bd4,	// (0x000832f2) popup_number_entry_window_t5_ParamLimits

0x5bd4,	// (0x000832f2) popup_number_entry_window_t5

0xf0ec,	// (0x0008c80a) popup_number_entry_window_t_ParamLimits

0x41cc,	// (0x000818ea) text_title_cp2_ParamLimits

0x820e,	// (0x0008592c) aid_hotspot_pointer_text2_pane

0x829c,	// (0x000859ba) main_viewer_pane_g9_ParamLimits

0x829c,	// (0x000859ba) main_viewer_pane_g9

0xdf13,	// (0x0008b631) cale_month_pane_t1_ParamLimits

0xdf50,	// (0x0008b66e) bg_cale_pane_ParamLimits

0xdf68,	// (0x0008b686) list_cale_pane_ParamLimits

0xdb7e,	// (0x0008b29c) listscroll_cale_day_pane_t1

0xdf79,	// (0x0008b697) scroll_pane_cp09_ParamLimits

0x7ee9,	// (0x00085607) main_mup_eq_pane_t1_ParamLimits

0x7ee9,	// (0x00085607) main_mup_eq_pane_t1

0x7f03,	// (0x00085621) main_mup_eq_pane_t2_ParamLimits

0x7f03,	// (0x00085621) main_mup_eq_pane_t2

0x7f1d,	// (0x0008563b) main_mup_eq_pane_t3_ParamLimits

0x7f1d,	// (0x0008563b) main_mup_eq_pane_t3

0x7f35,	// (0x00085653) main_mup_eq_pane_t4_ParamLimits

0x7f35,	// (0x00085653) main_mup_eq_pane_t4

0x7f4d,	// (0x0008566b) main_mup_eq_pane_t5_ParamLimits

0x7f4d,	// (0x0008566b) main_mup_eq_pane_t5

0x7f65,	// (0x00085683) main_mup_eq_pane_t6_ParamLimits

0x7f65,	// (0x00085683) main_mup_eq_pane_t6

0x7f79,	// (0x00085697) main_mup_eq_pane_t7_ParamLimits

0x7f79,	// (0x00085697) main_mup_eq_pane_t7

0x7f8d,	// (0x000856ab) main_mup_eq_pane_t8_ParamLimits

0x7f8d,	// (0x000856ab) main_mup_eq_pane_t8

0x7fa3,	// (0x000856c1) main_mup_eq_pane_t9_ParamLimits

0x7fa3,	// (0x000856c1) main_mup_eq_pane_t9

0x7fbb,	// (0x000856d9) main_mup_eq_pane_t10_ParamLimits

0x7fbb,	// (0x000856d9) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0008cb97) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0008cb97) main_mup_eq_pane_t

0x8078,	// (0x00085796) mup_equalizer_pane_cp5_ParamLimits

0x808e,	// (0x000857ac) mup_equalizer_pane_cp6_ParamLimits

0x80a6,	// (0x000857c4) mup_equalizer_pane_cp7_ParamLimits

0x039e,	// (0x0007dabc) main_gallery_pane

0x151e,	// (0x0007ec3c) smil2_volume_pane

0x1539,	// (0x0007ec57) smil_status_volume_pane_g1_ParamLimits

0x1526,	// (0x0007ec44) smil_status_volume_pane_g2_ParamLimits

0x8bc7,	// (0x000862e5) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0008cd4d) smil_status_volume_pane_g_ParamLimits

0x174a,	// (0x0007ee68) bg_popup_window_pane_cp07_ParamLimits

0x1758,	// (0x0007ee76) blid_firmament_pane

0x92e2,	// (0x00086a00) aid_size_cell_gallery_ParamLimits

0x92e2,	// (0x00086a00) aid_size_cell_gallery

0x92f0,	// (0x00086a0e) grid_gallery_pane_ParamLimits

0x92f0,	// (0x00086a0e) grid_gallery_pane

0x9300,	// (0x00086a1e) cell_gallery_pane_ParamLimits

0x9300,	// (0x00086a1e) cell_gallery_pane

0x187b,	// (0x0007ef99) bg_cell_gallery_focus_pane_ParamLimits

0x187b,	// (0x0007ef99) bg_cell_gallery_focus_pane

0x188d,	// (0x0007efab) cell_gallery_pane_g1_ParamLimits

0x188d,	// (0x0007efab) cell_gallery_pane_g1

0x934e,	// (0x00086a6c) cell_gallery_pane_g2_ParamLimits

0x934e,	// (0x00086a6c) cell_gallery_pane_g2

0x935b,	// (0x00086a79) cell_gallery_pane_g3_ParamLimits

0x935b,	// (0x00086a79) cell_gallery_pane_g3

0x1899,	// (0x0007efb7) cell_gallery_pane_g4_ParamLimits

0x1899,	// (0x0007efb7) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0008cdfb) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0008cdfb) cell_gallery_pane_g

0x18a5,	// (0x0007efc3) bg_cell_gallery_focus_pane_g1

0x18ad,	// (0x0007efcb) bg_cell_gallery_focus_pane_g2

0x18b5,	// (0x0007efd3) bg_cell_gallery_focus_pane_g3

0x18bd,	// (0x0007efdb) bg_cell_gallery_focus_pane_g4

0x18c5,	// (0x0007efe3) bg_cell_gallery_focus_pane_g5

0x18cd,	// (0x0007efeb) bg_cell_gallery_focus_pane_g6

0x18d5,	// (0x0007eff3) bg_cell_gallery_focus_pane_g7

0x18dd,	// (0x0007effb) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0008ce04) bg_cell_gallery_focus_pane_g

0x18e5,	// (0x0007f003) aid_firma_cardinal

0x18f9,	// (0x0007f017) blid_firmament_pane_t1

0x1910,	// (0x0007f02e) blid_firmament_pane_t2

0x1927,	// (0x0007f045) blid_firmament_pane_t3

0x193e,	// (0x0007f05c) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0008ce15) blid_firmament_pane_t

0x1955,	// (0x0007f073) blid_sat_info_pane

0x1965,	// (0x0007f083) blid_sat_info_pane_g1

0x1965,	// (0x0007f083) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0008ce1e) blid_sat_info_pane_g

0x196f,	// (0x0007f08d) blid_sat_info_pane_t1

0x197d,	// (0x0007f09b) smil2_volume_content_pane

0x1986,	// (0x0007f0a4) smil2_volume_pane_g1

0x198e,	// (0x0007f0ac) smil2_volume_content_pane_g1

0x1997,	// (0x0007f0b5) smil2_volume_content_pane_g2

0x19a0,	// (0x0007f0be) smil2_volume_content_pane_g3

0x19a9,	// (0x0007f0c7) smil2_volume_content_pane_g4

0x19b2,	// (0x0007f0d0) smil2_volume_content_pane_g5

0x19bb,	// (0x0007f0d9) smil2_volume_content_pane_g6

0x19c4,	// (0x0007f0e2) smil2_volume_content_pane_g7

0x19cd,	// (0x0007f0eb) smil2_volume_content_pane_g8

0x19d6,	// (0x0007f0f4) smil2_volume_content_pane_g9

0x19df,	// (0x0007f0fd) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0008ce23) smil2_volume_content_pane_g

0x6367,	// (0x00083a85) cale_week_day_heading_pane_t1_ParamLimits

0x6380,	// (0x00083a9e) cale_week_day_heading_pane_t2_ParamLimits

0x6399,	// (0x00083ab7) cale_week_day_heading_pane_t3_ParamLimits

0x63b2,	// (0x00083ad0) cale_week_day_heading_pane_t4_ParamLimits

0x63cb,	// (0x00083ae9) cale_week_day_heading_pane_t5_ParamLimits

0x63e4,	// (0x00083b02) cale_week_day_heading_pane_t6_ParamLimits

0x63fd,	// (0x00083b1b) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0008c90f) cale_week_day_heading_pane_t_ParamLimits

0xdb90,	// (0x0008b2ae) bg_cale_side_pane_ParamLimits

0x6416,	// (0x00083b34) cale_week_time_pane_t1_ParamLimits

0x642e,	// (0x00083b4c) cale_week_time_pane_t2_ParamLimits

0x6446,	// (0x00083b64) cale_week_time_pane_t3_ParamLimits

0x645e,	// (0x00083b7c) cale_week_time_pane_t4_ParamLimits

0x6476,	// (0x00083b94) cale_week_time_pane_t5_ParamLimits

0x648e,	// (0x00083bac) cale_week_time_pane_t6_ParamLimits

0x64a6,	// (0x00083bc4) cale_week_time_pane_t7_ParamLimits

0x64c6,	// (0x00083be4) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0008c91e) cale_week_time_pane_t_ParamLimits

0x64e6,	// (0x00083c04) cell_cale_week_pane_g2_ParamLimits

0xdb90,	// (0x0008b2ae) bg_cale_side_pane_cp01_ParamLimits

0x753c,	// (0x00084c5a) cale_month_week_pane_t1_ParamLimits

0x7553,	// (0x00084c71) cale_month_week_pane_t2_ParamLimits

0x756a,	// (0x00084c88) cale_month_week_pane_t3_ParamLimits

0x7581,	// (0x00084c9f) cale_month_week_pane_t4_ParamLimits

0x7598,	// (0x00084cb6) cale_month_week_pane_t5_ParamLimits

0x75b3,	// (0x00084cd1) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0008c9f7) cale_month_week_pane_t_ParamLimits

0x7698,	// (0x00084db6) cell_cale_month_pane_g1_ParamLimits

0x039e,	// (0x0007dabc) main_cale_event_viewer_pane

0x039e,	// (0x0007dabc) listscroll_cale_event_viewer_pane

0x19e8,	// (0x0007f106) list_cale_ev_pane

0x19f0,	// (0x0007f10e) scroll_pane_cp023

0x19fc,	// (0x0007f11a) field_cale_ev_pane_ParamLimits

0x19fc,	// (0x0007f11a) field_cale_ev_pane

0x1a1a,	// (0x0007f138) field_cale_ev_content_pane_ParamLimits

0x1a1a,	// (0x0007f138) field_cale_ev_content_pane

0x1a26,	// (0x0007f144) field_cale_ev_pane_g1_ParamLimits

0x1a26,	// (0x0007f144) field_cale_ev_pane_g1

0x1a32,	// (0x0007f150) field_cale_ev_pane_g2_ParamLimits

0x1a32,	// (0x0007f150) field_cale_ev_pane_g2

0x1a4a,	// (0x0007f168) field_cale_ev_pane_g3_ParamLimits

0x1a4a,	// (0x0007f168) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0008ce38) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0008ce38) field_cale_ev_pane_g

0x1a62,	// (0x0007f180) field_cale_ev_pane_t1_ParamLimits

0x1a62,	// (0x0007f180) field_cale_ev_pane_t1

0x1a79,	// (0x0007f197) field_cale_ev_content_pane_t1_ParamLimits

0x1a79,	// (0x0007f197) field_cale_ev_content_pane_t1

0xe698,	// (0x0008bdb6) bg_button_pane_cp01

0x4923,	// (0x00082041) listscroll_cale_week_pane_ParamLimits

0x6143,	// (0x00083861) popup_toolbar_window_cp01

0xdb7e,	// (0x0008b29c) listscroll_cale_week_pane_t1_ParamLimits

0x4923,	// (0x00082041) listscroll_cale_day_pane_ParamLimits

0x6143,	// (0x00083861) popup_toolbar_window_cp02

0xdb7e,	// (0x0008b29c) listscroll_cale_day_pane_t1_ParamLimits

0x4923,	// (0x00082041) main_cale_month_pane_ParamLimits

0x8aab,	// (0x000861c9) popup_toolbar_window_cp03_ParamLimits

0x8aab,	// (0x000861c9) popup_toolbar_window_cp03

0x8424,	// (0x00085b42) main_image_pane_g2_ParamLimits

0x8424,	// (0x00085b42) main_image_pane_g2

0x8430,	// (0x00085b4e) main_image_pane_g3_ParamLimits

0x8430,	// (0x00085b4e) main_image_pane_g3

0x0002,

0xf50b,	// (0x0008cc29) main_image_pane_g_ParamLimits

0xf50b,	// (0x0008cc29) main_image_pane_g

0xe7b2,	// (0x0008bed0) main_image_pane_t1_ParamLimits

0x843c,	// (0x00085b5a) main_image_pane_t2_ParamLimits

0x843c,	// (0x00085b5a) main_image_pane_t2

0x844e,	// (0x00085b6c) main_image_pane_t3_ParamLimits

0x844e,	// (0x00085b6c) main_image_pane_t3

0x8460,	// (0x00085b7e) main_image_pane_t4_ParamLimits

0x8460,	// (0x00085b7e) main_image_pane_t4

0x0003,

0xf512,	// (0x0008cc30) main_image_pane_t_ParamLimits

0xf512,	// (0x0008cc30) main_image_pane_t

0x8472,	// (0x00085b90) popup_image_details_window_cp01

0x847c,	// (0x00085b9a) popup_toobar_trans_pane_cp01_ParamLimits

0x847c,	// (0x00085b9a) popup_toobar_trans_pane_cp01

0x8a28,	// (0x00086146) popup_image_details_window_ParamLimits

0x8a28,	// (0x00086146) popup_image_details_window

0x147f,	// (0x0007eb9d) popup_image_focus_window

0x8d46,	// (0x00086464) camera2_autofocus_pane_ParamLimits

0x8d46,	// (0x00086464) camera2_autofocus_pane

0x039e,	// (0x0007dabc) bg_popup_sub_pane_cp06

0x1a97,	// (0x0007f1b5) popup_image_focus_window_g1

0x1a9f,	// (0x0007f1bd) popup_image_focus_window_g2

0x1aa7,	// (0x0007f1c5) popup_image_focus_window_g3

0x1aaf,	// (0x0007f1cd) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0008ce3f) popup_image_focus_window_g

0x1ab7,	// (0x0007f1d5) popup_image_focus_window_t1

0x1ac5,	// (0x0007f1e3) popup_image_focus_window_t2

0x1ad5,	// (0x0007f1f3) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0008ce48) popup_image_focus_window_t

0x1ae3,	// (0x0007f201) camera2_autofocus_pane_g1

0x4167,	// (0x00081885) bg_tb_trans_pane_cp01

0x1af1,	// (0x0007f20f) popup_image_details_window_g1

0x1b04,	// (0x0007f222) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0008ce5a) popup_image_details_window_g

0x1b2d,	// (0x0007f24b) popup_image_details_window_t1

0x1b3f,	// (0x0007f25d) popup_image_details_window_t2

0x1b58,	// (0x0007f276) popup_image_details_window_t3

0x1b6c,	// (0x0007f28a) popup_image_details_window_t4

0x1b87,	// (0x0007f2a5) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0008ce61) popup_image_details_window_t

0x490f,	// (0x0008202d) bg_calc_paper_pane_ParamLimits

0x5ec3,	// (0x000835e1) grid_highlight_pane_cp013

0x5ecd,	// (0x000835eb) list_calc_pane_ParamLimits

0x5edf,	// (0x000835fd) scroll_pane_cp024

0x4923,	// (0x00082041) bg_calc_display_pane_ParamLimits

0x5ee7,	// (0x00083605) calc_display_pane_t1_ParamLimits

0x5efc,	// (0x0008361a) calc_display_pane_t2_ParamLimits

0x5f11,	// (0x0008362f) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0008c891) calc_display_pane_t_ParamLimits

0x5fed,	// (0x0008370b) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0008c8ae) cell_calc_pane_g

0x5ff6,	// (0x00083714) cell_calc_pane_t1

0x4982,	// (0x000820a0) grid_highlight_pane_cp02_ParamLimits

0x4998,	// (0x000820b6) toolbar_button_pane_cp01_ParamLimits

0x4998,	// (0x000820b6) toolbar_button_pane_cp01

0xe7f7,	// (0x0008bf15) temp_image_control_pane_ParamLimits

0xe7f7,	// (0x0008bf15) temp_image_control_pane

0x4167,	// (0x00081885) main_mp3_pane

0x1ba1,	// (0x0007f2bf) temp_image_control_pane_g1_ParamLimits

0x1ba1,	// (0x0007f2bf) temp_image_control_pane_g1

0x1baf,	// (0x0007f2cd) temp_image_control_pane_g2_ParamLimits

0x1baf,	// (0x0007f2cd) temp_image_control_pane_g2

0x1bc1,	// (0x0007f2df) temp_image_control_pane_g3_ParamLimits

0x1bc1,	// (0x0007f2df) temp_image_control_pane_g3

0x9398,	// (0x00086ab6) temp_image_control_pane_g4_ParamLimits

0x9398,	// (0x00086ab6) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0008ce6c) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0008ce6c) temp_image_control_pane_g

0x1ba1,	// (0x0007f2bf) main_mp3_pane_g1

0x93a9,	// (0x00086ac7) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0008ce75) main_mp3_pane_g

0x1c04,	// (0x0007f322) main_mp3_pane_t1

0xdbf5,	// (0x0008b313) main_camera_pane_g8_ParamLimits

0xdbf5,	// (0x0008b313) main_camera_pane_g8

0x677c,	// (0x00083e9a) main_video_pane_g7_ParamLimits

0x677c,	// (0x00083e9a) main_video_pane_g7

0x8e8e,	// (0x000865ac) main_camera2_pane_t7_ParamLimits

0x8e8e,	// (0x000865ac) main_camera2_pane_t7

0xdd3b,	// (0x0008b459) scroll_pane_cp025_ParamLimits

0xdd3b,	// (0x0008b459) scroll_pane_cp025

0xdd4f,	// (0x0008b46d) scroll_pane_cp026_ParamLimits

0xdd4f,	// (0x0008b46d) scroll_pane_cp026

0xdd5e,	// (0x0008b47c) wml_content_pane_ParamLimits

0x039e,	// (0x0007dabc) main_touch_calib_pane

0x944d,	// (0x00086b6b) main_touch_calib_pane_g1

0x9459,	// (0x00086b77) main_touch_calib_pane_g2

0x9465,	// (0x00086b83) main_touch_calib_pane_g3

0x9471,	// (0x00086b8f) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0008ce93) main_touch_calib_pane_g

0x947d,	// (0x00086b9b) main_touch_calib_pane_t1

0x9494,	// (0x00086bb2) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0008ce9c) main_touch_calib_pane_t

0xe470,	// (0x0008bb8e) mup_progress_pane_cp02

0xe48f,	// (0x0008bbad) navi_pane_g1

0xe4f1,	// (0x0008bc0f) navi_pane_mp_t3

0x4167,	// (0x00081885) main_mp3_pane_ParamLimits

0x8ae9,	// (0x00086207) navi_pane_ParamLimits

0x1ba1,	// (0x0007f2bf) main_mp3_pane_g1_ParamLimits

0x93a9,	// (0x00086ac7) main_mp3_pane_g2_ParamLimits

0x93b5,	// (0x00086ad3) main_mp3_pane_g3_ParamLimits

0x93b5,	// (0x00086ad3) main_mp3_pane_g3

0x93c1,	// (0x00086adf) main_mp3_pane_g4_ParamLimits

0x93c1,	// (0x00086adf) main_mp3_pane_g4

0x1bd1,	// (0x0007f2ef) main_mp3_pane_g5_ParamLimits

0x1bd1,	// (0x0007f2ef) main_mp3_pane_g5

0x1bdf,	// (0x0007f2fd) main_mp3_pane_g6_ParamLimits

0x1bdf,	// (0x0007f2fd) main_mp3_pane_g6

0x1bec,	// (0x0007f30a) main_mp3_pane_g7_ParamLimits

0x1bec,	// (0x0007f30a) main_mp3_pane_g7

0x1bf8,	// (0x0007f316) main_mp3_pane_g8_ParamLimits

0x1bf8,	// (0x0007f316) main_mp3_pane_g8

0xf757,	// (0x0008ce75) main_mp3_pane_g_ParamLimits

0x93cd,	// (0x00086aeb) main_mp3_pane_t2

0x93dd,	// (0x00086afb) main_mp3_pane_t3

0x1c12,	// (0x0007f330) main_mp3_pane_t4

0x1c20,	// (0x0007f33e) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0008ce86) main_mp3_pane_t

0x1c2e,	// (0x0007f34c) mup_progress_pane_cp01

0x03cc,	// (0x0007daea) aid_zoom_text_secondary2

0x19e8,	// (0x0007f106) list_cale_ev2_pane

0x19f0,	// (0x0007f10e) scroll_pane_cp023_ParamLimits

0x94e9,	// (0x00086c07) field_cale_ev2_pane_ParamLimits

0x94e9,	// (0x00086c07) field_cale_ev2_pane

0x9512,	// (0x00086c30) field_cale_ev2_pane_g1_ParamLimits

0x9512,	// (0x00086c30) field_cale_ev2_pane_g1

0x951e,	// (0x00086c3c) field_cale_ev2_pane_g2_ParamLimits

0x951e,	// (0x00086c3c) field_cale_ev2_pane_g2

0x9536,	// (0x00086c54) field_cale_ev2_pane_g3_ParamLimits

0x9536,	// (0x00086c54) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0008cea7) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0008cea7) field_cale_ev2_pane_g

0x1c42,	// (0x0007f360) field_cale_ev2_pane_t1_ParamLimits

0x1c42,	// (0x0007f360) field_cale_ev2_pane_t1

0x1c59,	// (0x0007f377) field_cale_ev2_pane_t2_ParamLimits

0x1c59,	// (0x0007f377) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0008ceb0) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0008ceb0) field_cale_ev2_pane_t

0x8304,	// (0x00085a22) main_postcard_pane_g5_ParamLimits

0x8304,	// (0x00085a22) main_postcard_pane_g5

0x8312,	// (0x00085a30) main_postcard_pane_g6_ParamLimits

0x8312,	// (0x00085a30) main_postcard_pane_g6

0x65c4,	// (0x00083ce2) camera2_autofocus_pane_cp_ParamLimits

0x65c4,	// (0x00083ce2) camera2_autofocus_pane_cp

0x4167,	// (0x00081885) main_mup3_pane

0x956e,	// (0x00086c8c) main_mup3_pane_g1_ParamLimits

0x956e,	// (0x00086c8c) main_mup3_pane_g1

0x958f,	// (0x00086cad) main_mup3_pane_g2_ParamLimits

0x958f,	// (0x00086cad) main_mup3_pane_g2

0x9607,	// (0x00086d25) main_mup3_pane_g3_ParamLimits

0x9607,	// (0x00086d25) main_mup3_pane_g3

0x9646,	// (0x00086d64) main_mup3_pane_g4_ParamLimits

0x9646,	// (0x00086d64) main_mup3_pane_g4

0x9685,	// (0x00086da3) main_mup3_pane_g5_ParamLimits

0x9685,	// (0x00086da3) main_mup3_pane_g5

0x96c4,	// (0x00086de2) main_mup3_pane_g6_ParamLimits

0x96c4,	// (0x00086de2) main_mup3_pane_g6

0x1c6e,	// (0x0007f38c) main_mup3_pane_g7_ParamLimits

0x1c6e,	// (0x0007f38c) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0008cec0) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0008cec0) main_mup3_pane_g

0x9736,	// (0x00086e54) main_mup3_pane_t1_ParamLimits

0x9736,	// (0x00086e54) main_mup3_pane_t1

0x97a1,	// (0x00086ebf) main_mup3_pane_t2_ParamLimits

0x97a1,	// (0x00086ebf) main_mup3_pane_t2

0x9866,	// (0x00086f84) main_mup3_pane_t4_ParamLimits

0x9866,	// (0x00086f84) main_mup3_pane_t4

0x98b4,	// (0x00086fd2) main_mup3_pane_t5_ParamLimits

0x98b4,	// (0x00086fd2) main_mup3_pane_t5

0x995c,	// (0x0008707a) main_mup3_pane_t6_ParamLimits

0x995c,	// (0x0008707a) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0008ced1) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0008ced1) main_mup3_pane_t

0x9a04,	// (0x00087122) mup3_progress_pane_ParamLimits

0x9a04,	// (0x00087122) mup3_progress_pane

0x9a6f,	// (0x0008718d) popup_mup3_control_window_ParamLimits

0x9a6f,	// (0x0008718d) popup_mup3_control_window

0x1c7c,	// (0x0007f39a) popup_mup3_text_window

0x9a88,	// (0x000871a6) mup3_progress_pane_t1

0x9a9f,	// (0x000871bd) mup3_progress_pane_t2

0x1c84,	// (0x0007f3a2) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0008cede) mup3_progress_pane_t

0x1c9b,	// (0x0007f3b9) mup_progress_pane_cp03

0x039e,	// (0x0007dabc) bg_tb_trans_pane_cp04

0x9ab6,	// (0x000871d4) mup3_volume_pane

0x9abe,	// (0x000871dc) popup_mup3_control_window_g1

0x9ac7,	// (0x000871e5) mup3_volume_pane_g1

0x9ad0,	// (0x000871ee) mup3_volume_pane_g2

0x9ad9,	// (0x000871f7) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0008cee5) mup3_volume_pane_g

0x039e,	// (0x0007dabc) bg_tb_trans_pane_cp03

0x1cab,	// (0x0007f3c9) popup_mup3_text_window_g1

0x1cb3,	// (0x0007f3d1) popup_mup3_text_window_t1

0x496b,	// (0x00082089) list_calc_item_pane_g1_ParamLimits

0x1674,	// (0x0007ed92) mup_volume_pane_cp_g1

0x94ab,	// (0x00086bc9) main_touch_calib_pane_t3

0x94bf,	// (0x00086bdd) main_touch_calib_pane_t4

0x94d3,	// (0x00086bf1) main_touch_calib_pane_t5

0x03a8,	// (0x0007dac6) aid_cell_size_toolbar2

0x03b0,	// (0x0007dace) aid_popup3_width_pane

0x03bc,	// (0x0007dada) aid_zoom_text_msg_primary

0x659b,	// (0x00083cb9) vorec_t7

0x492f,	// (0x0008204d) bg_calc_paper_pane_g1_ParamLimits

0x4947,	// (0x00082065) bg_calc_paper_pane_g2_ParamLimits

0x493b,	// (0x00082059) bg_calc_paper_pane_g3_ParamLimits

0x495f,	// (0x0008207d) bg_calc_paper_pane_g4_ParamLimits

0x4953,	// (0x00082071) bg_calc_paper_pane_g5_ParamLimits

0x5f50,	// (0x0008366e) bg_calc_paper_pane_g6_ParamLimits

0x5f61,	// (0x0008367f) bg_calc_paper_pane_g7_ParamLimits

0x5f72,	// (0x00083690) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0008c898) bg_calc_paper_pane_g_ParamLimits

0x5f83,	// (0x000836a1) calc_bg_paper_pane_g9_ParamLimits

0x66ab,	// (0x00083dc9) image_qvga_pane_ParamLimits

0x66ab,	// (0x00083dc9) image_qvga_pane

0x484c,	// (0x00081f6a) bg_popup_sub_pane_cp04_ParamLimits

0xe72e,	// (0x0008be4c) popup_mup_playback_window_g1_ParamLimits

0xe73a,	// (0x0008be58) popup_mup_playback_window_t1_ParamLimits

0xe74f,	// (0x0008be6d) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0008cc24) popup_mup_playback_window_t_ParamLimits

0x8fbd,	// (0x000866db) main_mup2_pane_g3_ParamLimits

0x8fbd,	// (0x000866db) main_mup2_pane_g3

0x69ba,	// (0x000840d8) popup_toolbar_window_cp04

0xeb31,	// (0x0008c24f) popup_call2_audio_second_window_g3_ParamLimits

0xeb31,	// (0x0008c24f) popup_call2_audio_second_window_g3

0x0a7f,	// (0x0007e19d) popup_call2_audio_first_window_g4_ParamLimits

0x0a7f,	// (0x0007e19d) popup_call2_audio_first_window_g4

0x10fe,	// (0x0007e81c) popup_call2_audio_in_window_g4_ParamLimits

0x10fe,	// (0x0007e81c) popup_call2_audio_in_window_g4

0x8417,	// (0x00085b35) aid_area_sk_bg_cut_ParamLimits

0x8417,	// (0x00085b35) aid_area_sk_bg_cut

0xe764,	// (0x0008be82) aid_area_sk_bg_cut_2_ParamLimits

0xe764,	// (0x0008be82) aid_area_sk_bg_cut_2

0x933e,	// (0x00086a5c) aid_placing_details_win

0x9346,	// (0x00086a64) aid_placing_details_win_2

0x1ae3,	// (0x0007f201) camera2_autofocus_pane_g1_ParamLimits

0x5b37,	// (0x00083255) popup_fixed_preview_cale_window_ParamLimits

0x5b37,	// (0x00083255) popup_fixed_preview_cale_window

0xe540,	// (0x0008bc5e) navi_slider_pane_g3

0xe549,	// (0x0008bc67) navi_slider_pane_g4

0xe552,	// (0x0008bc70) navi_slider_pane_g5

0xe540,	// (0x0008bc5e) navi_slider_pane_g6

0x7c7d,	// (0x0008539b) navi_slider_pane_g7

0xe665,	// (0x0008bd83) mup_scale_pane_g3

0xe66e,	// (0x0008bd8c) mup_scale_pane_g4

0xe677,	// (0x0008bd95) mup_scale_pane_g5

0x80be,	// (0x000857dc) mup_scale_pane_g6

0x80c7,	// (0x000857e5) mup_scale_pane_g7

0xe540,	// (0x0008bc5e) cams2_slider_pane_g3

0x1729,	// (0x0007ee47) cams2_slider_pane_g4

0x9296,	// (0x000869b4) cams2_slider_pane_g5

0xe540,	// (0x0008bc5e) cams2_slider_pane_g6

0x929e,	// (0x000869bc) cams2_slider_pane_g7

0x1965,	// (0x0007f083) camera2_autofocus_pane_cp_g1

0x1cc1,	// (0x0007f3df) bg_popup_preview_window_pane_cp02_ParamLimits

0x1cc1,	// (0x0007f3df) bg_popup_preview_window_pane_cp02

0x1ccd,	// (0x0007f3eb) list_fp_cale_pane_ParamLimits

0x1ccd,	// (0x0007f3eb) list_fp_cale_pane

0x1cd9,	// (0x0007f3f7) popup_fixed_preview_cale_window_t1_ParamLimits

0x1cd9,	// (0x0007f3f7) popup_fixed_preview_cale_window_t1

0x9ae2,	// (0x00087200) popup_fixed_preview_cale_window_t2_ParamLimits

0x9ae2,	// (0x00087200) popup_fixed_preview_cale_window_t2

0x9af7,	// (0x00087215) popup_fixed_preview_cale_window_t3_ParamLimits

0x9af7,	// (0x00087215) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0008ceec) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0008ceec) popup_fixed_preview_cale_window_t

0x9b0c,	// (0x0008722a) list_single_fp_cale_pane_ParamLimits

0x9b0c,	// (0x0008722a) list_single_fp_cale_pane

0x1cf7,	// (0x0007f415) list_single_fp_cale_pane_g1_ParamLimits

0x1cf7,	// (0x0007f415) list_single_fp_cale_pane_g1

0x1d03,	// (0x0007f421) list_single_fp_cale_pane_g2_ParamLimits

0x1d03,	// (0x0007f421) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0008cef3) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0008cef3) list_single_fp_cale_pane_g

0x1d1c,	// (0x0007f43a) list_single_fp_cale_pane_t1_ParamLimits

0x1d1c,	// (0x0007f43a) list_single_fp_cale_pane_t1

0x1d2e,	// (0x0007f44c) list_single_fp_cale_pane_t2_ParamLimits

0x1d2e,	// (0x0007f44c) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0008cefa) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0008cefa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x039e,	// (0x0007dabc) main_dialer_pane

0x9b1e,	// (0x0008723c) aid_cell_size_keypad

0x9b28,	// (0x00087246) dialer_ne_pane

0x9b32,	// (0x00087250) grid_dialer_command_1_pane

0x9b3a,	// (0x00087258) grid_dialer_command_2_pane

0x9b42,	// (0x00087260) grid_dialer_keypad_pane

0x9b54,	// (0x00087272) bg_popup_call_pane_cp06_ParamLimits

0x9b54,	// (0x00087272) bg_popup_call_pane_cp06

0x9b60,	// (0x0008727e) dialer_ne_clear_pane_ParamLimits

0x9b60,	// (0x0008727e) dialer_ne_clear_pane

0x1d61,	// (0x0007f47f) dialer_ne_pane_g1

0x1d69,	// (0x0007f487) dialer_ne_pane_t1_ParamLimits

0x1d69,	// (0x0007f487) dialer_ne_pane_t1

0x9b6c,	// (0x0008728a) dialer_ne_pane_t2_ParamLimits

0x9b6c,	// (0x0008728a) dialer_ne_pane_t2

0x9b89,	// (0x000872a7) dialer_ne_pane_t3_ParamLimits

0x9b89,	// (0x000872a7) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0008ceff) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0008ceff) dialer_ne_pane_t

0x9bad,	// (0x000872cb) dialer_ne_pane_t3_copy1_ParamLimits

0x9bad,	// (0x000872cb) dialer_ne_pane_t3_copy1

0x9bd1,	// (0x000872ef) cell_dialer_keypad_pane_ParamLimits

0x9bd1,	// (0x000872ef) cell_dialer_keypad_pane

0x9be8,	// (0x00087306) cell_dialer_command_1_pane_ParamLimits

0x9be8,	// (0x00087306) cell_dialer_command_1_pane

0x9bfe,	// (0x0008731c) cell_dialer_command_2_pane_ParamLimits

0x9bfe,	// (0x0008731c) cell_dialer_command_2_pane

0x1d7b,	// (0x0007f499) bg_button_pane_cp02_ParamLimits

0x1d7b,	// (0x0007f499) bg_button_pane_cp02

0x9c0d,	// (0x0008732b) cell_dialer_keypad_pane_g1_ParamLimits

0x9c0d,	// (0x0008732b) cell_dialer_keypad_pane_g1

0x1d7b,	// (0x0007f499) bg_button_pane_cp03_ParamLimits

0x1d7b,	// (0x0007f499) bg_button_pane_cp03

0x9c22,	// (0x00087340) cell_dialer_command_1_pane_g1_ParamLimits

0x9c22,	// (0x00087340) cell_dialer_command_1_pane_g1

0x1d87,	// (0x0007f4a5) bg_button_pane_cp04

0x9c36,	// (0x00087354) cell_dialer_command_2_pane_g1

0xe52f,	// (0x0008bc4d) bg_button_pane_cp06

0x1d8f,	// (0x0007f4ad) dialer_ne_clear_pane_g1

0x7bc0,	// (0x000852de) navi_pane_g2

0x7bee,	// (0x0008530c) navi_pane_g3

0x0002,

0xf409,	// (0x0008cb27) navi_pane_g

0x7c19,	// (0x00085337) navi_pane_mv_g2

0x7c40,	// (0x0008535e) navi_pane_mv_g5

0x7c48,	// (0x00085366) navi_pane_mv_t1

0x4923,	// (0x00082041) main_clock2_pane

0x9c65,	// (0x00087383) main_clock2_list_pane_ParamLimits

0x9c65,	// (0x00087383) main_clock2_list_pane

0x9c8d,	// (0x000873ab) main_clock2_pane_t1_ParamLimits

0x9c8d,	// (0x000873ab) main_clock2_pane_t1

0x9cbb,	// (0x000873d9) main_clock2_pane_t2_ParamLimits

0x9cbb,	// (0x000873d9) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0008cf06) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0008cf06) main_clock2_pane_t

0x9d22,	// (0x00087440) popup_clock_analogue_window_cp03_ParamLimits

0x9d22,	// (0x00087440) popup_clock_analogue_window_cp03

0x9d40,	// (0x0008745e) popup_clock_digital_window_cp02_ParamLimits

0x9d40,	// (0x0008745e) popup_clock_digital_window_cp02

0x9dad,	// (0x000874cb) main_clock2_list_single_pane_ParamLimits

0x9dad,	// (0x000874cb) main_clock2_list_single_pane

0xe52f,	// (0x0008bc4d) list_highlight_pane_cp05

0x1d97,	// (0x0007f4b5) main_clock2_list_single_pane_t1

0x69ba,	// (0x000840d8) popup_toolbar_window_cp04_ParamLimits

0x9368,	// (0x00086a86) camera2_autofocus_pane_g2_ParamLimits

0x9368,	// (0x00086a86) camera2_autofocus_pane_g2

0x9374,	// (0x00086a92) camera2_autofocus_pane_g3_ParamLimits

0x9374,	// (0x00086a92) camera2_autofocus_pane_g3

0x9380,	// (0x00086a9e) camera2_autofocus_pane_g4_ParamLimits

0x9380,	// (0x00086a9e) camera2_autofocus_pane_g4

0x938c,	// (0x00086aaa) camera2_autofocus_pane_g5_ParamLimits

0x938c,	// (0x00086aaa) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0008ce4f) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0008ce4f) camera2_autofocus_pane_g

0x954e,	// (0x00086c6c) camera2_autofocus_pane_cp_g2

0x9556,	// (0x00086c74) camera2_autofocus_pane_cp_g3

0x955e,	// (0x00086c7c) camera2_autofocus_pane_cp_g4

0x9566,	// (0x00086c84) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0008ceb5) camera2_autofocus_pane_cp_g

0x9b4c,	// (0x0008726a) popup_dialer_spcha_window

0x039e,	// (0x0007dabc) bg_popup_sub_pane_cp07

0x1da5,	// (0x0007f4c3) list_spcha_pane

0x1dad,	// (0x0007f4cb) list_single_spcha_pane_ParamLimits

0x1dad,	// (0x0007f4cb) list_single_spcha_pane

0x039e,	// (0x0007dabc) list_highlight_pane_cp06

0x1dbe,	// (0x0007f4dc) list_single_spcha_pane_t1

0x0ea8,	// (0x0007e5c6) popup_call2_audio_out_window_g4_ParamLimits

0x0ea8,	// (0x0007e5c6) popup_call2_audio_out_window_g4

0x039e,	// (0x0007dabc) main_imed2_pane

0x1487,	// (0x0007eba5) popup_imed_adjust2_window

0x8a36,	// (0x00086154) popup_imed_trans_window_ParamLimits

0x8a36,	// (0x00086154) popup_imed_trans_window

0x17a3,	// (0x0007eec1) popup_blid_sat_info2_window_t1

0x17b1,	// (0x0007eecf) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0008cde4) popup_blid_sat_info2_window_t

0x9e57,	// (0x00087575) aid_size_cell_colour_35

0x9e71,	// (0x0008758f) aid_size_cell_colour_112

0x9e88,	// (0x000875a6) aid_size_cell_effect

0x4167,	// (0x00081885) bg_tb_trans_pane_cp02

0xebfd,	// (0x0008c31b) heading_imed_pane

0x9ea2,	// (0x000875c0) listscroll_imed_pane

0x1dcc,	// (0x0007f4ea) heading_imed_pane_g1

0x1dd4,	// (0x0007f4f2) heading_imed_pane_t1

0x1de2,	// (0x0007f500) grid_imed_colour_35_pane_ParamLimits

0x1de2,	// (0x0007f500) grid_imed_colour_35_pane

0x9eae,	// (0x000875cc) grid_imed_effect_pane

0x1df9,	// (0x0007f517) list_imed_aspect_pane

0x9ebe,	// (0x000875dc) scroll_pane_cp027_ParamLimits

0x9ebe,	// (0x000875dc) scroll_pane_cp027

0x9eca,	// (0x000875e8) cell_imed_effect_pane_ParamLimits

0x9eca,	// (0x000875e8) cell_imed_effect_pane

0x1e01,	// (0x0007f51f) cell_imed_colour_pane_ParamLimits

0x1e01,	// (0x0007f51f) cell_imed_colour_pane

0x1e43,	// (0x0007f561) cell_imed_colour_pane_g1_ParamLimits

0x1e43,	// (0x0007f561) cell_imed_colour_pane_g1

0x1e54,	// (0x0007f572) hgihlgiht_grid_pane_cp016_ParamLimits

0x1e54,	// (0x0007f572) hgihlgiht_grid_pane_cp016

0x9ee2,	// (0x00087600) cell_imed_effect_pane_g1

0x9eea,	// (0x00087608) grid_highlight_pane_cp017

0x1e65,	// (0x0007f583) list_imed_single_pane_ParamLimits

0x1e65,	// (0x0007f583) list_imed_single_pane

0x039e,	// (0x0007dabc) list_highlight_pane_cp07

0x1e7a,	// (0x0007f598) list_imed_aspect_pane_comp1_t1

0x145f,	// (0x0007eb7d) bg_tb_trans_pane_cp05

0x1e9c,	// (0x0007f5ba) popup_imed_adjust2_window_g1

0x1ec3,	// (0x0007f5e1) popup_imed_adjust2_window_t1

0x1edb,	// (0x0007f5f9) slider_imed_adjust_pane

0x1eef,	// (0x0007f60d) slider_imed_adjust_pane_g1

0x1eff,	// (0x0007f61d) slider_imed_adjust_pane_g2

0x1f0f,	// (0x0007f62d) slider_imed_adjust_pane_g3

0x1f20,	// (0x0007f63e) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0008cf23) slider_imed_adjust_pane_g

0x9ef3,	// (0x00087611) aid_size_cell_clipart2

0x9eff,	// (0x0008761d) grid_imed_clipart_pane

0x1f31,	// (0x0007f64f) scroll_pane_cp031

0x9f09,	// (0x00087627) cell_imed_clipart_pane_ParamLimits

0x9f09,	// (0x00087627) cell_imed_clipart_pane

0x9f2b,	// (0x00087649) cell_imed_clipart_pane_g1

0x039e,	// (0x0007dabc) grid_highlight_pane_cp014

0x9c71,	// (0x0008738f) main_clock2_pane_g1_ParamLimits

0x9c71,	// (0x0008738f) main_clock2_pane_g1

0x9d58,	// (0x00087476) aid_call2_pane_cp10

0x9d6a,	// (0x00087488) aid_call_pane_cp10

0xe464,	// (0x0008bb82) popup_clock_analogue_window_cp10_g1

0xe464,	// (0x0008bb82) popup_clock_analogue_window_cp10_g2

0x9d7c,	// (0x0008749a) popup_clock_analogue_window_cp10_g3

0x9d7c,	// (0x0008749a) popup_clock_analogue_window_cp10_g4

0xe464,	// (0x0008bb82) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0008cf11) popup_clock_analogue_window_cp10_g

0x9d8e,	// (0x000874ac) popup_clock_analogue_window_cp10_t1

0x9dbf,	// (0x000874dd) clock_digital_number_pane_cp10_ParamLimits

0x9dbf,	// (0x000874dd) clock_digital_number_pane_cp10

0x9dd7,	// (0x000874f5) clock_digital_number_pane_cp11_ParamLimits

0x9dd7,	// (0x000874f5) clock_digital_number_pane_cp11

0x9def,	// (0x0008750d) clock_digital_number_pane_cp12_ParamLimits

0x9def,	// (0x0008750d) clock_digital_number_pane_cp12

0x9e07,	// (0x00087525) clock_digital_number_pane_cp13_ParamLimits

0x9e07,	// (0x00087525) clock_digital_number_pane_cp13

0x9e1f,	// (0x0008753d) clock_digital_separator_pane_cp10_ParamLimits

0x9e1f,	// (0x0008753d) clock_digital_separator_pane_cp10

0x9e37,	// (0x00087555) popup_clock_digital_window_cp02_t1_ParamLimits

0x9e37,	// (0x00087555) popup_clock_digital_window_cp02_t1

0x4844,	// (0x00081f62) clock_digital_number_pane_cp10_g1

0x4844,	// (0x00081f62) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0008cf2c) clock_digital_number_pane_cp10_g

0x4844,	// (0x00081f62) clock_digital_separator_pane_cp10_g1

0x4844,	// (0x00081f62) clock_digital_separator_pane_g2_cp10

0xe4ff,	// (0x0008bc1d) navi_pane_vded_g4

0xe508,	// (0x0008bc26) navi_pane_vded_g5

0xe511,	// (0x0008bc2f) navi_pane_vded_t1

0x039e,	// (0x0007dabc) main_vded_pane

0x9f34,	// (0x00087652) main_vded_pane_g1

0x9f40,	// (0x0008765e) main_vded_pane_g2

0x9f4a,	// (0x00087668) main_vded_pane_g3

0x0002,

0xf813,	// (0x0008cf31) main_vded_pane_g

0x9f54,	// (0x00087672) main_vded_pane_t1

0x9f62,	// (0x00087680) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0008cf38) main_vded_pane_t

0x9f70,	// (0x0008768e) vded_slider_pane

0x9f7a,	// (0x00087698) vded_video_pane

0x1f39,	// (0x0007f657) vded_video_pane_g1

0x9f84,	// (0x000876a2) vded_video_pane_g2

0x1965,	// (0x0007f083) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0008cf3d) vded_video_pane_g

0x1f43,	// (0x0007f661) vded_slider_pane_g1

0x1674,	// (0x0007ed92) vded_slider_pane_g2

0x1f4c,	// (0x0007f66a) vded_slider_pane_g3

0x1f55,	// (0x0007f673) vded_slider_pane_g4

0x1f5e,	// (0x0007f67c) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0008cf44) vded_slider_pane_g

0x9a61,	// (0x0008717f) mup3_rocker_pane_ParamLimits

0x9a61,	// (0x0008717f) mup3_rocker_pane

0x9f8d,	// (0x000876ab) mup3_control_keys_pane_g1

0x9f95,	// (0x000876b3) mup3_control_keys_pane_g2

0x9f9d,	// (0x000876bb) mup3_control_keys_pane_g3

0x9fa5,	// (0x000876c3) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0008cf4f) mup3_control_keys_pane_g

0x5b55,	// (0x00083273) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5b55,	// (0x00083273) popup_toolbar2_fixed_window_cp01

0x9a7b,	// (0x00087199) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9a7b,	// (0x00087199) popup_toolbar2_fixed_window_cp02

0x07e7,	// (0x0007df05) popup_call2_audio_second_window_t4_ParamLimits

0x07e7,	// (0x0007df05) popup_call2_audio_second_window_t4

0x0d15,	// (0x0007e433) popup_call2_audio_first_window_t6_ParamLimits

0x0d15,	// (0x0007e433) popup_call2_audio_first_window_t6

0x0fab,	// (0x0007e6c9) popup_call2_audio_out_window_t6_ParamLimits

0x0fab,	// (0x0007e6c9) popup_call2_audio_out_window_t6

0x039e,	// (0x0007dabc) main_vitu_pane

0x9fb5,	// (0x000876d3) aid_size_cell_itu_ParamLimits

0x9fb5,	// (0x000876d3) aid_size_cell_itu

0x20c2,	// (0x0007f7e0) bg_popup_window_pane_cp08_ParamLimits

0x20c2,	// (0x0007f7e0) bg_popup_window_pane_cp08

0x9fc3,	// (0x000876e1) field_vitu_entry_pane_ParamLimits

0x9fc3,	// (0x000876e1) field_vitu_entry_pane

0x9fd2,	// (0x000876f0) grid_vitu_function_pane_ParamLimits

0x9fd2,	// (0x000876f0) grid_vitu_function_pane

0x9fe2,	// (0x00087700) grid_vitu_itu_pane_ParamLimits

0x9fe2,	// (0x00087700) grid_vitu_itu_pane

0x9ff2,	// (0x00087710) cell_vitu_itu_pane_ParamLimits

0x9ff2,	// (0x00087710) cell_vitu_itu_pane

0xa007,	// (0x00087725) cell_vitu_function_pane_ParamLimits

0xa007,	// (0x00087725) cell_vitu_function_pane

0x4167,	// (0x00081885) bg_popup_sub_pane_cp08_ParamLimits

0x4167,	// (0x00081885) bg_popup_sub_pane_cp08

0xa019,	// (0x00087737) field_vitu_entry_pane_t1_ParamLimits

0xa019,	// (0x00087737) field_vitu_entry_pane_t1

0x1f7f,	// (0x0007f69d) field_vitu_entry_pane_t2_ParamLimits

0x1f7f,	// (0x0007f69d) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0008cf5d) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0008cf5d) field_vitu_entry_pane_t

0x1f9c,	// (0x0007f6ba) bg_button_pane_cp05_ParamLimits

0x1f9c,	// (0x0007f6ba) bg_button_pane_cp05

0xa034,	// (0x00087752) cell_vitu_itu_pane_g1

0xa04c,	// (0x0008776a) cell_vitu_itu_pane_t1_ParamLimits

0xa04c,	// (0x0008776a) cell_vitu_itu_pane_t1

0xa05e,	// (0x0008777c) cell_vitu_itu_pane_t2_ParamLimits

0xa05e,	// (0x0008777c) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0008cf62) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0008cf62) cell_vitu_itu_pane_t

0x1faa,	// (0x0007f6c8) bg_button_pane_cp07

0xa093,	// (0x000877b1) cell_vitu_function_pane_g1

0x5dee,	// (0x0008350c) main_calc_pane_g1

0x595e,	// (0x0008307c) aid_visual_content_pane

0x039e,	// (0x0007dabc) main_vradio_pane

0xa09c,	// (0x000877ba) main_vradio_pane_g1_ParamLimits

0xa09c,	// (0x000877ba) main_vradio_pane_g1

0x1fb4,	// (0x0007f6d2) main_vradio_pane_g2_ParamLimits

0x1fb4,	// (0x0007f6d2) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0008cf69) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0008cf69) main_vradio_pane_g

0xa0ac,	// (0x000877ca) main_vradio_pane_t1_ParamLimits

0xa0ac,	// (0x000877ca) main_vradio_pane_t1

0xa0be,	// (0x000877dc) main_vradio_pane_t2_ParamLimits

0xa0be,	// (0x000877dc) main_vradio_pane_t2

0x1fc1,	// (0x0007f6df) main_vradio_pane_t3_ParamLimits

0x1fc1,	// (0x0007f6df) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0008cf6e) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0008cf6e) main_vradio_pane_t

0xa0d0,	// (0x000877ee) vradio_rocker_control_pane_ParamLimits

0xa0d0,	// (0x000877ee) vradio_rocker_control_pane

0xa0dc,	// (0x000877fa) vradio_station_info_pane_ParamLimits

0xa0dc,	// (0x000877fa) vradio_station_info_pane

0x1fd5,	// (0x0007f6f3) vradio_frequency_info_pane_ParamLimits

0x1fd5,	// (0x0007f6f3) vradio_frequency_info_pane

0x1965,	// (0x0007f083) vradio_station_info_pane_g1

0x1fe4,	// (0x0007f702) vradio_station_info_pane_t1_ParamLimits

0x1fe4,	// (0x0007f702) vradio_station_info_pane_t1

0x2006,	// (0x0007f724) vradio_station_info_pane_t2_ParamLimits

0x2006,	// (0x0007f724) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0008cf75) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0008cf75) vradio_station_info_pane_t

0x2018,	// (0x0007f736) vradio_tuning_pane

0x2020,	// (0x0007f73e) vradio_rocker_control_pane_g1

0x2028,	// (0x0007f746) vradio_rocker_control_pane_g2

0x2030,	// (0x0007f74e) vradio_rocker_control_pane_g3

0x2038,	// (0x0007f756) vradio_rocker_control_pane_g4

0x2040,	// (0x0007f75e) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0008cf7a) vradio_rocker_control_pane_g

0xa0eb,	// (0x00087809) vradio_frequency_info_pane_g1

0x2048,	// (0x0007f766) vradio_frequency_info_pane_t1_ParamLimits

0x2048,	// (0x0007f766) vradio_frequency_info_pane_t1

0xa0f5,	// (0x00087813) vradio_tuning_pane_g1

0xa0fe,	// (0x0008781c) vradio_tuning_pane_t1

0x03d4,	// (0x0007daf2) area_side_right_pane_ParamLimits

0x03d4,	// (0x0007daf2) area_side_right_pane

0x1426,	// (0x0007eb44) status_small_pane_g1

0x142e,	// (0x0007eb4c) status_small_pane_g2

0x1437,	// (0x0007eb55) status_small_pane_g3

0x1440,	// (0x0007eb5e) status_small_pane_g4

0x0003,

0xf61c,	// (0x0008cd3a) status_small_pane_g

0x1449,	// (0x0007eb67) status_small_pane_t1

0x039e,	// (0x0007dabc) main_video3_pane

0x205c,	// (0x0007f77a) cams_zoom_vslider_pane

0x2064,	// (0x0007f782) image3_wide_pane_ParamLimits

0x2064,	// (0x0007f782) image3_wide_pane

0x207e,	// (0x0007f79c) image3_wide_small_pane

0x208a,	// (0x0007f7a8) main_video3_pane_g1_ParamLimits

0x208a,	// (0x0007f7a8) main_video3_pane_g1

0x20a6,	// (0x0007f7c4) main_video3_pane_g2_ParamLimits

0x20a6,	// (0x0007f7c4) main_video3_pane_g2

0x0001,

0xf867,	// (0x0008cf85) main_video3_pane_g_ParamLimits

0xf867,	// (0x0008cf85) main_video3_pane_g

0x3e77,	// (0x00081595) main_video3_pane_t1_ParamLimits

0x3e77,	// (0x00081595) main_video3_pane_t1

0x3ea2,	// (0x000815c0) main_video3_pane_t2_ParamLimits

0x3ea2,	// (0x000815c0) main_video3_pane_t2

0x3ecd,	// (0x000815eb) main_video3_pane_t3_ParamLimits

0x3ecd,	// (0x000815eb) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0008cf8a) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0008cf8a) main_video3_pane_t

0x3efa,	// (0x00081618) cams_zoom_vslider_pane_g1

0x3f03,	// (0x00081621) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0008cf91) cams_zoom_vslider_pane_g

0x3f0b,	// (0x00081629) small_slider_vertical_pane

0x1965,	// (0x0007f083) small_slider_vertical_pane_g1

0x1965,	// (0x0007f083) small_slider_vertical_pane_g2

0x3f13,	// (0x00081631) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0008cf96) small_slider_vertical_pane_g

0x039e,	// (0x0007dabc) main_hwr_training_pane

0x3f1c,	// (0x0008163a) hwr_training_instruct_pane_ParamLimits

0x3f1c,	// (0x0008163a) hwr_training_instruct_pane

0xa10d,	// (0x0008782b) hwr_training_navi_pane_ParamLimits

0xa10d,	// (0x0008782b) hwr_training_navi_pane

0xa127,	// (0x00087845) hwr_training_write_pane_ParamLimits

0xa127,	// (0x00087845) hwr_training_write_pane

0x039e,	// (0x0007dabc) bg_frame_shadow_pane

0x3f53,	// (0x00081671) hwr_training_write_pane_g1

0x3f5b,	// (0x00081679) hwr_training_write_pane_g2

0x3f63,	// (0x00081681) hwr_training_write_pane_g3

0x3f6b,	// (0x00081689) hwr_training_write_pane_g4

0x3f73,	// (0x00081691) hwr_training_write_pane_g5

0x3f7b,	// (0x00081699) hwr_training_write_pane_g6

0x3f83,	// (0x000816a1) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0008cf9d) hwr_training_write_pane_g

0xa15f,	// (0x0008787d) hwr_training_navi_pane_g1_ParamLimits

0xa15f,	// (0x0008787d) hwr_training_navi_pane_g1

0xa171,	// (0x0008788f) hwr_training_navi_pane_g2_ParamLimits

0xa171,	// (0x0008788f) hwr_training_navi_pane_g2

0xa183,	// (0x000878a1) hwr_training_navi_pane_g3_ParamLimits

0xa183,	// (0x000878a1) hwr_training_navi_pane_g3

0xa193,	// (0x000878b1) hwr_training_navi_pane_g4_ParamLimits

0xa193,	// (0x000878b1) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0008cfac) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0008cfac) hwr_training_navi_pane_g

0xa1ad,	// (0x000878cb) hwr_training_navi_pane_t1

0xa1bb,	// (0x000878d9) list_single_hwr_training_instruct_pane_ParamLimits

0xa1bb,	// (0x000878d9) list_single_hwr_training_instruct_pane

0x3f8b,	// (0x000816a9) list_single_hwr_training_instruct_pane_t1

0x18a5,	// (0x0007efc3) bg_frame_shadow_pane_g1

0x3f9a,	// (0x000816b8) bg_frame_shadow_pane_g2

0x3fa2,	// (0x000816c0) bg_frame_shadow_pane_g3

0x3faa,	// (0x000816c8) bg_frame_shadow_pane_g4

0x3fb2,	// (0x000816d0) bg_frame_shadow_pane_g5

0x3fba,	// (0x000816d8) bg_frame_shadow_pane_g6

0x3fc2,	// (0x000816e0) bg_frame_shadow_pane_g7

0x49dc,	// (0x000820fa) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0008cfb7) bg_frame_shadow_pane_g

0x039e,	// (0x0007dabc) main_video_tele_dialer_pane

0xa1e0,	// (0x000878fe) aid_size_cell_video_keypad_ParamLimits

0xa1e0,	// (0x000878fe) aid_size_cell_video_keypad

0xa1f0,	// (0x0008790e) grid_video_dialer_keypad_pane_ParamLimits

0xa1f0,	// (0x0008790e) grid_video_dialer_keypad_pane

0xa222,	// (0x00087940) video_down_pane_cp_ParamLimits

0xa222,	// (0x00087940) video_down_pane_cp

0xa22e,	// (0x0008794c) cell_video_dialer_keypad_pane_ParamLimits

0xa22e,	// (0x0008794c) cell_video_dialer_keypad_pane

0x3fe6,	// (0x00081704) bg_button_pane_cp08_ParamLimits

0x3fe6,	// (0x00081704) bg_button_pane_cp08

0xa243,	// (0x00087961) cell_video_dialer_keypad_pane_g1_ParamLimits

0xa243,	// (0x00087961) cell_video_dialer_keypad_pane_g1

0x9a55,	// (0x00087173) mup3_rocker2_pane_ParamLimits

0x9a55,	// (0x00087173) mup3_rocker2_pane

0x1965,	// (0x0007f083) mup3_rocker2_pane_g1

0x89c0,	// (0x000860de) main_dialer2_pane

0x039e,	// (0x0007dabc) main_mp4_pane

0xa285,	// (0x000879a3) main_mp4_pane_g1_ParamLimits

0xa285,	// (0x000879a3) main_mp4_pane_g1

0xa293,	// (0x000879b1) main_mp4_pane_g2_ParamLimits

0xa293,	// (0x000879b1) main_mp4_pane_g2

0xa2a1,	// (0x000879bf) main_mp4_pane_g3_ParamLimits

0xa2a1,	// (0x000879bf) main_mp4_pane_g3

0xa2e6,	// (0x00087a04) main_mp4_pane_g4_ParamLimits

0xa2e6,	// (0x00087a04) main_mp4_pane_g4

0xa30e,	// (0x00087a2c) main_mp4_pane_g5_ParamLimits

0xa30e,	// (0x00087a2c) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0008cfd7) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0008cfd7) main_mp4_pane_g

0xa35e,	// (0x00087a7c) main_mp4_pane_t1_ParamLimits

0xa35e,	// (0x00087a7c) main_mp4_pane_t1

0xa3ba,	// (0x00087ad8) main_mp4_pane_t2_ParamLimits

0xa3ba,	// (0x00087ad8) main_mp4_pane_t2

0x3ff2,	// (0x00081710) main_mp4_pane_t3_ParamLimits

0x3ff2,	// (0x00081710) main_mp4_pane_t3

0xa40c,	// (0x00087b2a) main_mp4_pane_t4_ParamLimits

0xa40c,	// (0x00087b2a) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0008cfe4) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0008cfe4) main_mp4_pane_t

0xa450,	// (0x00087b6e) mp4_progress_pane_ParamLimits

0xa450,	// (0x00087b6e) mp4_progress_pane

0xa49a,	// (0x00087bb8) mp4_rocker_pane_ParamLimits

0xa49a,	// (0x00087bb8) mp4_rocker_pane

0x401a,	// (0x00081738) mp4_progress_pane_t1

0x4033,	// (0x00081751) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0008cfed) mp4_progress_pane_t

0x404c,	// (0x0008176a) mup_progress_pane_cp04

0xec09,	// (0x0008c327) mp4_rocker_pane_g1

0xa4ba,	// (0x00087bd8) aid_cell_size_keypad2_ParamLimits

0xa4ba,	// (0x00087bd8) aid_cell_size_keypad2

0xa4ca,	// (0x00087be8) dialer2_ne_pane_ParamLimits

0xa4ca,	// (0x00087be8) dialer2_ne_pane

0xa4d8,	// (0x00087bf6) grid_dialer2_keypad_pane_ParamLimits

0xa4d8,	// (0x00087bf6) grid_dialer2_keypad_pane

0x23f9,	// (0x0007fb17) bg_popup_call_pane_cp07_ParamLimits

0x23f9,	// (0x0007fb17) bg_popup_call_pane_cp07

0xa4e8,	// (0x00087c06) dialer2_ne_pane_t1_ParamLimits

0xa4e8,	// (0x00087c06) dialer2_ne_pane_t1

0xa50d,	// (0x00087c2b) cell_dialer2_keypad_pane_ParamLimits

0xa50d,	// (0x00087c2b) cell_dialer2_keypad_pane

0x406a,	// (0x00081788) bg_button_pane_pane_cp04_ParamLimits

0x406a,	// (0x00081788) bg_button_pane_pane_cp04

0xa522,	// (0x00087c40) cell_dialer2_keypad_pane_g1_ParamLimits

0xa522,	// (0x00087c40) cell_dialer2_keypad_pane_g1

0x687e,	// (0x00083f9c) aid_placing_vt_set_content_ParamLimits

0x687e,	// (0x00083f9c) aid_placing_vt_set_content

0x68a8,	// (0x00083fc6) aid_placing_vt_set_title_ParamLimits

0x68a8,	// (0x00083fc6) aid_placing_vt_set_title

0x039e,	// (0x0007dabc) main_image3_pane

0xa5bc,	// (0x00087cda) area_side_right_pane_cp01_ParamLimits

0xa5bc,	// (0x00087cda) area_side_right_pane_cp01

0xa5e9,	// (0x00087d07) main_image3_pane_g1_ParamLimits

0xa5e9,	// (0x00087d07) main_image3_pane_g1

0xa5f7,	// (0x00087d15) main_image3_pane_g2_ParamLimits

0xa5f7,	// (0x00087d15) main_image3_pane_g2

0xa610,	// (0x00087d2e) main_image3_pane_g3_ParamLimits

0xa610,	// (0x00087d2e) main_image3_pane_g3

0xa629,	// (0x00087d47) main_image3_pane_g4_ParamLimits

0xa629,	// (0x00087d47) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0008cffc) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0008cffc) main_image3_pane_g

0xa642,	// (0x00087d60) main_image3_pane_t1_ParamLimits

0xa642,	// (0x00087d60) main_image3_pane_t1

0xa667,	// (0x00087d85) main_image3_pane_t2_ParamLimits

0xa667,	// (0x00087d85) main_image3_pane_t2

0xa686,	// (0x00087da4) main_image3_pane_t3_ParamLimits

0xa686,	// (0x00087da4) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0008d005) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0008d005) main_image3_pane_t

0x20c2,	// (0x0007f7e0) grid_sctrl_middle_pane_cp01_ParamLimits

0x20c2,	// (0x0007f7e0) grid_sctrl_middle_pane_cp01

0xa6e7,	// (0x00087e05) cell_sctrl_middle_pane_cp01_ParamLimits

0xa6e7,	// (0x00087e05) cell_sctrl_middle_pane_cp01

0xa6f8,	// (0x00087e16) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa6f8,	// (0x00087e16) cell_sctrl_middle_pane_cp01_g1

0x039e,	// (0x0007dabc) main_call4_pane

0xa705,	// (0x00087e23) aid_size_button_call4_ParamLimits

0xa705,	// (0x00087e23) aid_size_button_call4

0xa735,	// (0x00087e53) call4_windows_pane_ParamLimits

0xa735,	// (0x00087e53) call4_windows_pane

0xa74f,	// (0x00087e6d) grid_call4_button_pane_ParamLimits

0xa74f,	// (0x00087e6d) grid_call4_button_pane

0x4076,	// (0x00081794) call4_windows_conf_pane

0x408d,	// (0x000817ab) popup_call4_audio_first_window_ParamLimits

0x408d,	// (0x000817ab) popup_call4_audio_first_window

0x40d9,	// (0x000817f7) popup_call4_audio_second_window_ParamLimits

0x40d9,	// (0x000817f7) popup_call4_audio_second_window

0x40ed,	// (0x0008180b) popup_call4_audio_wait_window_ParamLimits

0x40ed,	// (0x0008180b) popup_call4_audio_wait_window

0xa773,	// (0x00087e91) cell_call4_button_pane_ParamLimits

0xa773,	// (0x00087e91) cell_call4_button_pane

0xa798,	// (0x00087eb6) bg_button_pane_cp09_ParamLimits

0xa798,	// (0x00087eb6) bg_button_pane_cp09

0xa7a4,	// (0x00087ec2) cell_call4_button_pane_g1_ParamLimits

0xa7a4,	// (0x00087ec2) cell_call4_button_pane_g1

0xa7b1,	// (0x00087ecf) cell_call4_button_pane_t1_ParamLimits

0xa7b1,	// (0x00087ecf) cell_call4_button_pane_t1

0x4135,	// (0x00081853) popup_call4_audio_conf_window_ParamLimits

0x4135,	// (0x00081853) popup_call4_audio_conf_window

0x9a88,	// (0x000871a6) mup3_progress_pane_t1_ParamLimits

0x9a9f,	// (0x000871bd) mup3_progress_pane_t2_ParamLimits

0x1c84,	// (0x0007f3a2) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0008cede) mup3_progress_pane_t_ParamLimits

0x1c9b,	// (0x0007f3b9) mup_progress_pane_cp03_ParamLimits

0x9fad,	// (0x000876cb) mup3_control_keys_pane_g4_copy1

0xa47e,	// (0x00087b9c) mp4_rocker2_pane_ParamLimits

0xa47e,	// (0x00087b9c) mp4_rocker2_pane

0x4259,	// (0x00081977) mp4_rocker2_pane_g1

0x4251,	// (0x0008196f) mp4_rocker2_pane_g2

0xa7c3,	// (0x00087ee1) mp4_rocker2_pane_g3

0xa7cb,	// (0x00087ee9) mp4_rocker2_pane_g4

0xa7d3,	// (0x00087ef1) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0008d00e) mp4_rocker2_pane_g

0x039e,	// (0x0007dabc) main_camera4_pane

0x039e,	// (0x0007dabc) main_video4_pane

0xa1fe,	// (0x0008791c) main_video_tele_dialer_pane_t1_ParamLimits

0xa1fe,	// (0x0008791c) main_video_tele_dialer_pane_t1

0xa210,	// (0x0008792e) main_video_tele_dialer_pane_t2_ParamLimits

0xa210,	// (0x0008792e) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0008cfc8) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0008cfc8) main_video_tele_dialer_pane_t

0xa7f3,	// (0x00087f11) cam4_autofocus_pane_ParamLimits

0xa7f3,	// (0x00087f11) cam4_autofocus_pane

0xa80d,	// (0x00087f2b) cam4_image_uncrop_pane_ParamLimits

0xa80d,	// (0x00087f2b) cam4_image_uncrop_pane

0xa824,	// (0x00087f42) cam4_indicators_pane_ParamLimits

0xa824,	// (0x00087f42) cam4_indicators_pane

0xa840,	// (0x00087f5e) main_camera4_pane_g1_ParamLimits

0xa840,	// (0x00087f5e) main_camera4_pane_g1

0xa84c,	// (0x00087f6a) main_camera4_pane_g2_ParamLimits

0xa84c,	// (0x00087f6a) main_camera4_pane_g2

0xa84c,	// (0x00087f6a) main_camera4_pane_g3_ParamLimits

0xa84c,	// (0x00087f6a) main_camera4_pane_g3

0xa858,	// (0x00087f76) main_camera4_pane_g4_ParamLimits

0xa858,	// (0x00087f76) main_camera4_pane_g4

0xa864,	// (0x00087f82) main_camera4_pane_g5_ParamLimits

0xa864,	// (0x00087f82) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0008d019) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0008d019) main_camera4_pane_g

0xa87e,	// (0x00087f9c) main_camera4_pane_t1_ParamLimits

0xa87e,	// (0x00087f9c) main_camera4_pane_t1

0xa8c6,	// (0x00087fe4) bg_tb_trans_pane_cp06

0xa8dc,	// (0x00087ffa) cam4_indicators_pane_g1

0xa8ed,	// (0x0008800b) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0008d034) cam4_indicators_pane_g

0xa90b,	// (0x00088029) cam4_indicators_pane_t1

0xa935,	// (0x00088053) main_video4_pane_g1_ParamLimits

0xa935,	// (0x00088053) main_video4_pane_g1

0xa941,	// (0x0008805f) main_video4_pane_g2_ParamLimits

0xa941,	// (0x0008805f) main_video4_pane_g2

0xa94d,	// (0x0008806b) main_video4_pane_g3_ParamLimits

0xa94d,	// (0x0008806b) main_video4_pane_g3

0xa959,	// (0x00088077) main_video4_pane_g4_ParamLimits

0xa959,	// (0x00088077) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0008d03b) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0008d03b) main_video4_pane_g

0xa979,	// (0x00088097) vid4_indicators_pane_ParamLimits

0xa979,	// (0x00088097) vid4_indicators_pane

0xa997,	// (0x000880b5) video4_image_uncrop_cif_pane_ParamLimits

0xa997,	// (0x000880b5) video4_image_uncrop_cif_pane

0xa9a6,	// (0x000880c4) video4_image_uncrop_nhd_pane_ParamLimits

0xa9a6,	// (0x000880c4) video4_image_uncrop_nhd_pane

0xa80d,	// (0x00087f2b) video4_image_uncrop_vga_pane_ParamLimits

0xa80d,	// (0x00087f2b) video4_image_uncrop_vga_pane

0xa9b3,	// (0x000880d1) bg_tb_trans_pane_cp07

0xa9cb,	// (0x000880e9) vid4_indicators_pane_g1

0xa9dc,	// (0x000880fa) vid4_indicators_pane_g2

0xa9ed,	// (0x0008810b) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0008d046) vid4_indicators_pane_g

0xaa1a,	// (0x00088138) vid4_indicators_pane_t1

0xaa33,	// (0x00088151) cam4_autofocus_pane_g1

0xaa3b,	// (0x00088159) cam4_autofocus_pane_g2

0xaa43,	// (0x00088161) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0008d051) cam4_autofocus_pane_g

0xaa4b,	// (0x00088169) cam4_autofocus_pane_g3_copy1

0x3fca,	// (0x000816e8) video_down_pane_cp_t1

0x3fd8,	// (0x000816f6) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0008cfcd) video_down_pane_cp_t

0x20c2,	// (0x0007f7e0) popup_vitu2_window_ParamLimits

0x20c2,	// (0x0007f7e0) popup_vitu2_window

0xaa53,	// (0x00088171) aid_size_cell2_itu2_ParamLimits

0xaa53,	// (0x00088171) aid_size_cell2_itu2

0xaa75,	// (0x00088193) aid_size_cell_itu2_ParamLimits

0xaa75,	// (0x00088193) aid_size_cell_itu2

0xaab9,	// (0x000881d7) bg_popup_window_pane_cp09_ParamLimits

0xaab9,	// (0x000881d7) bg_popup_window_pane_cp09

0xaac7,	// (0x000881e5) field_vitu2_entry_pane_ParamLimits

0xaac7,	// (0x000881e5) field_vitu2_entry_pane

0xaae7,	// (0x00088205) grid_vitu2_function_pane_ParamLimits

0xaae7,	// (0x00088205) grid_vitu2_function_pane

0xab2b,	// (0x00088249) grid_vitu2_itu_pane_ParamLimits

0xab2b,	// (0x00088249) grid_vitu2_itu_pane

0xaba3,	// (0x000882c1) cell_vitu2_itu_pane_ParamLimits

0xaba3,	// (0x000882c1) cell_vitu2_itu_pane

0xabb8,	// (0x000882d6) cell_vitu2_function_pane_ParamLimits

0xabb8,	// (0x000882d6) cell_vitu2_function_pane

0x4273,	// (0x00081991) bg_popup_call_pane_cp08_ParamLimits

0x4273,	// (0x00081991) bg_popup_call_pane_cp08

0x428c,	// (0x000819aa) field_vitu2_entry_pane_g1

0x4298,	// (0x000819b6) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0008d058) field_vitu2_entry_pane_g

0x20d0,	// (0x0007f7ee) field_vitu2_entry_pane_t1_ParamLimits

0x20d0,	// (0x0007f7ee) field_vitu2_entry_pane_t1

0x20ff,	// (0x0007f81d) field_vitu2_entry_pane_t2_ParamLimits

0x20ff,	// (0x0007f81d) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0008d05f) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0008d05f) field_vitu2_entry_pane_t

0xabf7,	// (0x00088315) bg_button_pane_cp010_ParamLimits

0xabf7,	// (0x00088315) bg_button_pane_cp010

0xac05,	// (0x00088323) cell_vitu2_itu_pane_g1

0xac23,	// (0x00088341) cell_vitu2_itu_pane_t1_ParamLimits

0xac23,	// (0x00088341) cell_vitu2_itu_pane_t1

0x5863,	// (0x00082f81) cell_vitu2_itu_pane_t2_ParamLimits

0x5863,	// (0x00082f81) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0008d069) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0008d069) cell_vitu2_itu_pane_t

0xa9b3,	// (0x000880d1) bg_button_pane_cp011

0xac75,	// (0x00088393) cell_vitu2_function_pane_g1

0x039e,	// (0x0007dabc) main_myfav_hc_pane

0xa6c8,	// (0x00087de6) popup_image3_note_pane_ParamLimits

0xa6c8,	// (0x00087de6) popup_image3_note_pane

0xa6d6,	// (0x00087df4) popup_image3_tool_bar_pane_ParamLimits

0xa6d6,	// (0x00087df4) popup_image3_tool_bar_pane

0x58d1,	// (0x00082fef) cell_vitu2_itu_pane_t3_ParamLimits

0x58d1,	// (0x00082fef) cell_vitu2_itu_pane_t3

0x039e,	// (0x0007dabc) bg_popup_trans_pane

0xec13,	// (0x0008c331) grid_image3_tool_bar_pane

0xec1d,	// (0x0008c33b) bg_popup_trans_pane_g1

0xde44,	// (0x0008b562) bg_popup_trans_pane_g2

0xec25,	// (0x0008c343) bg_popup_trans_pane_g3

0xec2d,	// (0x0008c34b) bg_popup_trans_pane_g4

0xec35,	// (0x0008c353) bg_popup_trans_pane_g5

0xec3d,	// (0x0008c35b) bg_popup_trans_pane_g6

0xec45,	// (0x0008c363) bg_popup_trans_pane_g7

0xec4d,	// (0x0008c36b) bg_popup_trans_pane_g8

0xde24,	// (0x0008b542) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0008d070) bg_popup_trans_pane_g

0xec55,	// (0x0008c373) cell_image3_tool_bar_pane_ParamLimits

0xec55,	// (0x0008c373) cell_image3_tool_bar_pane

0x1965,	// (0x0007f083) cell_image3_tool_bar_pane_g1

0x039e,	// (0x0007dabc) bg_popup_trans_pane_cp1

0xec69,	// (0x0008c387) popup_image3_note_pane_t1

0xec77,	// (0x0008c395) popup_image3_note_pane_t2

0xec85,	// (0x0008c3a3) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0008d083) popup_image3_note_pane_t

0xec93,	// (0x0008c3b1) popup_image3_note_pane_t3_copy1

0xac89,	// (0x000883a7) bg_myfav_hc_instruction_pane_ParamLimits

0xac89,	// (0x000883a7) bg_myfav_hc_instruction_pane

0xaca1,	// (0x000883bf) cell_myfav_contact_pane_ParamLimits

0xaca1,	// (0x000883bf) cell_myfav_contact_pane

0xacbb,	// (0x000883d9) cell_myfav_contact_pane_cp1_ParamLimits

0xacbb,	// (0x000883d9) cell_myfav_contact_pane_cp1

0xacd3,	// (0x000883f1) cell_myfav_contact_pane_cp2_ParamLimits

0xacd3,	// (0x000883f1) cell_myfav_contact_pane_cp2

0xaceb,	// (0x00088409) cell_myfav_contact_pane_cp3_ParamLimits

0xaceb,	// (0x00088409) cell_myfav_contact_pane_cp3

0xad02,	// (0x00088420) cell_myfav_contact_pane_cp4_ParamLimits

0xad02,	// (0x00088420) cell_myfav_contact_pane_cp4

0xad18,	// (0x00088436) cell_myfav_contact_pane_cp5_ParamLimits

0xad18,	// (0x00088436) cell_myfav_contact_pane_cp5

0xad2c,	// (0x0008844a) cell_myfav_contact_pane_cp6_ParamLimits

0xad2c,	// (0x0008844a) cell_myfav_contact_pane_cp6

0xad40,	// (0x0008845e) cell_myfav_contact_pane_cp7_ParamLimits

0xad40,	// (0x0008845e) cell_myfav_contact_pane_cp7

0xeca1,	// (0x0008c3bf) listscroll_gen_pane_cp05

0xad58,	// (0x00088476) main_myfav_hc_pane_g1_ParamLimits

0xad58,	// (0x00088476) main_myfav_hc_pane_g1

0xad6e,	// (0x0008848c) main_myfav_hc_pane_g2_ParamLimits

0xad6e,	// (0x0008848c) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0008d08a) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0008d08a) main_myfav_hc_pane_g

0xad9c,	// (0x000884ba) main_myfav_hc_pane_t1_ParamLimits

0xad9c,	// (0x000884ba) main_myfav_hc_pane_t1

0xecaa,	// (0x0008c3c8) main_myfav_hc_pane_t2_ParamLimits

0xecaa,	// (0x0008c3c8) main_myfav_hc_pane_t2

0xecbc,	// (0x0008c3da) main_myfav_hc_pane_t3_ParamLimits

0xecbc,	// (0x0008c3da) main_myfav_hc_pane_t3

0xadb3,	// (0x000884d1) main_myfav_hc_pane_t4_ParamLimits

0xadb3,	// (0x000884d1) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0008d091) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0008d091) main_myfav_hc_pane_t

0x1965,	// (0x0007f083) bg_myfav_hc_instruction_pane_g1

0xecce,	// (0x0008c3ec) cell_myfav_contact_pane_g1_ParamLimits

0xecce,	// (0x0008c3ec) cell_myfav_contact_pane_g1

0xecce,	// (0x0008c3ec) cell_myfav_contact_pane_g2_ParamLimits

0xecce,	// (0x0008c3ec) cell_myfav_contact_pane_g2

0xecda,	// (0x0008c3f8) cell_myfav_contact_pane_g3_ParamLimits

0xecda,	// (0x0008c3f8) cell_myfav_contact_pane_g3

0x1c6e,	// (0x0007f38c) cell_myfav_contact_pane_g4_ParamLimits

0x1c6e,	// (0x0007f38c) cell_myfav_contact_pane_g4

0xece7,	// (0x0008c405) cell_myfav_contact_pane_g5_ParamLimits

0xece7,	// (0x0008c405) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0008d09c) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0008d09c) cell_myfav_contact_pane_g

0xad84,	// (0x000884a2) main_myfav_hc_pane_g3_ParamLimits

0xad84,	// (0x000884a2) main_myfav_hc_pane_g3

0x5a9a,	// (0x000831b8) popup_adpt_find_window

0xaddd,	// (0x000884fb) afind_page_pane_ParamLimits

0xaddd,	// (0x000884fb) afind_page_pane

0xadea,	// (0x00088508) aid_size_cell_afind_ParamLimits

0xadea,	// (0x00088508) aid_size_cell_afind

0xae04,	// (0x00088522) bg_popup_sub_pane_cp09_ParamLimits

0xae04,	// (0x00088522) bg_popup_sub_pane_cp09

0xae11,	// (0x0008852f) find_pane_cp01_ParamLimits

0xae11,	// (0x0008852f) find_pane_cp01

0xecf3,	// (0x0008c411) grid_afind_control_pane_ParamLimits

0xecf3,	// (0x0008c411) grid_afind_control_pane

0xae1e,	// (0x0008853c) grid_afind_pane_ParamLimits

0xae1e,	// (0x0008853c) grid_afind_pane

0xae3a,	// (0x00088558) cell_afind_pane_ParamLimits

0xae3a,	// (0x00088558) cell_afind_pane

0x1965,	// (0x0007f083) afind_page_pane_g1

0xae82,	// (0x000885a0) afind_page_pane_g2

0xae8b,	// (0x000885a9) afind_page_pane_g3

0x0002,

0xf989,	// (0x0008d0a7) afind_page_pane_g

0xae94,	// (0x000885b2) afind_page_pane_t1

0xed07,	// (0x0008c425) cell_afind_grid_control_pane_ParamLimits

0xed07,	// (0x0008c425) cell_afind_grid_control_pane

0x406a,	// (0x00081788) bg_button_pane_cp69_ParamLimits

0x406a,	// (0x00081788) bg_button_pane_cp69

0xaeb4,	// (0x000885d2) cell_afind_pane_g1_ParamLimits

0xaeb4,	// (0x000885d2) cell_afind_pane_g1

0xaec1,	// (0x000885df) cell_afind_pane_t1_ParamLimits

0xaec1,	// (0x000885df) cell_afind_pane_t1

0xdc3f,	// (0x0008b35d) bg_button_pane_cp72

0xed16,	// (0x0008c434) cell_afind_grid_control_pane_g1

0x853e,	// (0x00085c5c) aid_image_placing_area_ParamLimits

0x853e,	// (0x00085c5c) aid_image_placing_area

0x1f67,	// (0x0007f685) field_vitu_entry_pane_g1_ParamLimits

0x1f67,	// (0x0007f685) field_vitu_entry_pane_g1

0x1f73,	// (0x0007f691) field_vitu_entry_pane_g2_ParamLimits

0x1f73,	// (0x0007f691) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0008cf58) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0008cf58) field_vitu_entry_pane_g

0xa034,	// (0x00087752) cell_vitu_itu_pane_g1_ParamLimits

0xa076,	// (0x00087794) cell_vitu_itu_pane_t3_ParamLimits

0xa076,	// (0x00087794) cell_vitu_itu_pane_t3

0x401a,	// (0x00081738) mp4_progress_pane_t1_ParamLimits

0x4033,	// (0x00081751) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0008cfed) mp4_progress_pane_t_ParamLimits

0x404c,	// (0x0008176a) mup_progress_pane_cp04_ParamLimits

0xadc7,	// (0x000884e5) main_myfav_hc_pane_t5_ParamLimits

0xadc7,	// (0x000884e5) main_myfav_hc_pane_t5

0x03c4,	// (0x0007dae2) aid_zoom_text_primary

0x5a9a,	// (0x000831b8) popup_adpt_find_window_ParamLimits

0x4167,	// (0x00081885) main_cam_set_pane

0xa832,	// (0x00087f50) cam4_zoom_pane_ParamLimits

0xa832,	// (0x00087f50) cam4_zoom_pane

0xaed3,	// (0x000885f1) main_cam_set_pane_g1_ParamLimits

0xaed3,	// (0x000885f1) main_cam_set_pane_g1

0xaee1,	// (0x000885ff) main_cam_set_pane_g2_ParamLimits

0xaee1,	// (0x000885ff) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0008d0ae) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0008d0ae) main_cam_set_pane_g

0xaeed,	// (0x0008860b) main_cam_set_pane_t1_ParamLimits

0xaeed,	// (0x0008860b) main_cam_set_pane_t1

0xaf09,	// (0x00088627) main_cset_listscroll_pane_ParamLimits

0xaf09,	// (0x00088627) main_cset_listscroll_pane

0xaf34,	// (0x00088652) main_cset_slider_pane_ParamLimits

0xaf34,	// (0x00088652) main_cset_slider_pane

0xed27,	// (0x0008c445) main_cset_list_pane_ParamLimits

0xed27,	// (0x0008c445) main_cset_list_pane

0xed37,	// (0x0008c455) scroll_pane_cp028

0xaf53,	// (0x00088671) aid_area_touch_slider

0xaf6f,	// (0x0008868d) cset_slider_pane

0xaf99,	// (0x000886b7) main_cset_slider_pane_g1

0xafae,	// (0x000886cc) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0008d0b3) main_cset_slider_pane_g

0xed70,	// (0x0008c48e) main_cset_slider_pane_t1

0xb070,	// (0x0008878e) main_cset_slider_pane_t2

0xb08a,	// (0x000887a8) main_cset_slider_pane_t3

0xb0a4,	// (0x000887c2) main_cset_slider_pane_t4

0xb0be,	// (0x000887dc) main_cset_slider_pane_t5

0xb0dc,	// (0x000887fa) main_cset_slider_pane_t6

0xb0f3,	// (0x00088811) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0008d0d8) main_cset_slider_pane_t

0xb1ff,	// (0x0008891d) cset_list_set_pane_ParamLimits

0xb1ff,	// (0x0008891d) cset_list_set_pane

0xb215,	// (0x00088933) aid_position_infowindow_above

0xb21d,	// (0x0008893b) aid_position_infowindow_below

0xb225,	// (0x00088943) cset_list_set_pane_g1_ParamLimits

0xb225,	// (0x00088943) cset_list_set_pane_g1

0x211c,	// (0x0007f83a) cset_list_set_pane_g3_ParamLimits

0x211c,	// (0x0007f83a) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0008d0f7) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0008d0f7) cset_list_set_pane_g

0x212b,	// (0x0007f849) cset_list_set_pane_t1_ParamLimits

0x212b,	// (0x0007f849) cset_list_set_pane_t1

0x4167,	// (0x00081885) list_highlight_pane_cp021_ParamLimits

0x4167,	// (0x00081885) list_highlight_pane_cp021

0xe665,	// (0x0008bd83) cset_slider_pane_g1

0xe677,	// (0x0008bd95) cset_slider_pane_g2

0xe66e,	// (0x0008bd8c) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0008d0fc) cset_slider_pane_g

0xb231,	// (0x0008894f) aid_area_touch_cam4_zoom

0xb239,	// (0x00088957) cam4_zoom_cont_pane

0xb241,	// (0x0008895f) cam4_zoom_pane_g1

0xb249,	// (0x00088967) cam4_zoom_pane_g2

0xb251,	// (0x0008896f) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0008d103) cam4_zoom_pane_g

0xb259,	// (0x00088977) cam4_zoom_cont_pane_g1

0xb262,	// (0x00088980) cam4_zoom_cont_pane_g2

0xb26b,	// (0x00088989) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0008d10a) cam4_zoom_cont_pane_g

0xa71f,	// (0x00087e3d) call4_image_pane_ParamLimits

0xa71f,	// (0x00087e3d) call4_image_pane

0x4076,	// (0x00081794) call4_windows_conf_pane_ParamLimits

0x40b7,	// (0x000817d5) popup_call4_audio_in_window_ParamLimits

0x40b7,	// (0x000817d5) popup_call4_audio_in_window

0x039e,	// (0x0007dabc) bg_popup_call2_act_pane_cp02

0x412d,	// (0x0008184b) call4_list_conf_pane

0x1965,	// (0x0007f083) call4_image_pane_g1

0x1965,	// (0x0007f083) call4_image_pane_g2

0x0001,

0xf700,	// (0x0008ce1e) call4_image_pane_g

0xee10,	// (0x0008c52e) list_single_graphic_popup_conf4_pane_ParamLimits

0xee10,	// (0x0008c52e) list_single_graphic_popup_conf4_pane

0x039e,	// (0x0007dabc) list_highlight_pane_cp022

0xee23,	// (0x0008c541) list_single_graphic_popup_conf4_pane_g1

0xe344,	// (0x0008ba62) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0008d111) list_single_graphic_popup_conf4_pane_g

0xee2b,	// (0x0008c549) list_single_graphic_popup_conf4_pane_t1

0x6a0c,	// (0x0008412a) popup_vtel_slider_window_ParamLimits

0x6a0c,	// (0x0008412a) popup_vtel_slider_window

0x4058,	// (0x00081776) dialer2_ne_pane_t2_ParamLimits

0x4058,	// (0x00081776) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0008cff2) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0008cff2) dialer2_ne_pane_t

0x4167,	// (0x00081885) bg_popup_sub_pane_cp010_ParamLimits

0x4167,	// (0x00081885) bg_popup_sub_pane_cp010

0xb274,	// (0x00088992) popup_vtel_slider_window_g1_ParamLimits

0xb274,	// (0x00088992) popup_vtel_slider_window_g1

0xb280,	// (0x0008899e) popup_vtel_slider_window_g2_ParamLimits

0xb280,	// (0x0008899e) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0008d116) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0008d116) popup_vtel_slider_window_g

0xb2c8,	// (0x000889e6) vtel_slider_pane_ParamLimits

0xb2c8,	// (0x000889e6) vtel_slider_pane

0xb2d7,	// (0x000889f5) vtel_slider_pane_g1_ParamLimits

0xb2d7,	// (0x000889f5) vtel_slider_pane_g1

0xb2e4,	// (0x00088a02) vtel_slider_pane_g2_ParamLimits

0xb2e4,	// (0x00088a02) vtel_slider_pane_g2

0xb2f1,	// (0x00088a0f) vtel_slider_pane_g3_ParamLimits

0xb2f1,	// (0x00088a0f) vtel_slider_pane_g3

0xb2d7,	// (0x000889f5) vtel_slider_pane_g4_ParamLimits

0xb2d7,	// (0x000889f5) vtel_slider_pane_g4

0xb2fe,	// (0x00088a1c) vtel_slider_pane_g5_ParamLimits

0xb2fe,	// (0x00088a1c) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0008d11f) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0008d11f) vtel_slider_pane_g

0x039e,	// (0x0007dabc) main_gallery2_pane

0xaa9b,	// (0x000881b9) aid_size_row_itut2_dropdow_list_ParamLimits

0xaa9b,	// (0x000881b9) aid_size_row_itut2_dropdow_list

0xab09,	// (0x00088227) grid_vitu2_function_top_pane_ParamLimits

0xab09,	// (0x00088227) grid_vitu2_function_top_pane

0xab5f,	// (0x0008827d) popup_vitu2_dropdown_list_window_ParamLimits

0xab5f,	// (0x0008827d) popup_vitu2_dropdown_list_window

0xab7f,	// (0x0008829d) popup_vitu2_match_list_window

0xb30b,	// (0x00088a29) cell_vitu2_function_top_pane_ParamLimits

0xb30b,	// (0x00088a29) cell_vitu2_function_top_pane

0xb32b,	// (0x00088a49) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb32b,	// (0x00088a49) cell_vitu2_function_top_pane_cp01

0xb349,	// (0x00088a67) cell_vitu2_function_top_wide_pane_ParamLimits

0xb349,	// (0x00088a67) cell_vitu2_function_top_wide_pane

0xa9b3,	// (0x000880d1) bg_button_pane_cp012

0xb367,	// (0x00088a85) cell_vitu2_function_top_pane_g1

0xb376,	// (0x00088a94) bg_button_pane_cp013_ParamLimits

0xb376,	// (0x00088a94) bg_button_pane_cp013

0xb392,	// (0x00088ab0) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb392,	// (0x00088ab0) cell_vitu2_function_top_wide_pane_g1

0xb3aa,	// (0x00088ac8) bg_popup_sub_pane_cp20

0xb3b8,	// (0x00088ad6) list_vitu2_match_list_pane

0xec1d,	// (0x0008c33b) bg_popup_sub_pane_cp20_g1

0xec25,	// (0x0008c343) bg_popup_sub_pane_cp20_g2

0xde44,	// (0x0008b562) bg_popup_sub_pane_cp20_g3

0xec2d,	// (0x0008c34b) bg_popup_sub_pane_cp20_g4

0xde24,	// (0x0008b542) bg_popup_sub_pane_cp20_g5

0xee41,	// (0x0008c55f) bg_popup_sub_pane_cp20_g6

0xec3d,	// (0x0008c35b) bg_popup_sub_pane_cp20_g7

0xec45,	// (0x0008c363) bg_popup_sub_pane_cp20_g8

0xec4d,	// (0x0008c36b) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0008d12a) bg_popup_sub_pane_cp20_g

0xb3d0,	// (0x00088aee) list_vitu2_match_list_item_pane_ParamLimits

0xb3d0,	// (0x00088aee) list_vitu2_match_list_item_pane

0xb3e2,	// (0x00088b00) list_vitu2_match_list_item_pane_t1

0x5ec3,	// (0x000835e1) bg_popup_sub_pane_cp21

0xb41f,	// (0x00088b3d) grid_vitu2_dropdown_list_pane

0xb427,	// (0x00088b45) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb427,	// (0x00088b45) cell_vitu2_dropdown_list_char_pane

0xb448,	// (0x00088b66) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb448,	// (0x00088b66) cell_vitu2_dropdown_list_ctrl_pane

0xee49,	// (0x0008c567) cell_vitu2_dropdown_list_char_pane_g1

0xee52,	// (0x0008c570) cell_vitu2_dropdown_list_char_pane_g2

0xee5b,	// (0x0008c579) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0008d147) cell_vitu2_dropdown_list_char_pane_g

0xb474,	// (0x00088b92) cell_vitu2_dropdown_list_char_pane_t1

0xb482,	// (0x00088ba0) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb482,	// (0x00088ba0) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb492,	// (0x00088bb0) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb492,	// (0x00088bb0) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb4a3,	// (0x00088bc1) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb4a3,	// (0x00088bc1) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb4b3,	// (0x00088bd1) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb4b3,	// (0x00088bd1) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa8c6,	// (0x00087fe4) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa8c6,	// (0x00087fe4) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0008d14e) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0008d14e) cell_vitu2_dropdown_list_ctrl_pane_g

0xb4cf,	// (0x00088bed) aid_size_cell_gallery2_ParamLimits

0xb4cf,	// (0x00088bed) aid_size_cell_gallery2

0xb4dd,	// (0x00088bfb) grid_gallery2_pane_ParamLimits

0xb4dd,	// (0x00088bfb) grid_gallery2_pane

0xb4ec,	// (0x00088c0a) scroll_pane_cp029_ParamLimits

0xb4ec,	// (0x00088c0a) scroll_pane_cp029

0xb4f8,	// (0x00088c16) cell_gallery2_pane_ParamLimits

0xb4f8,	// (0x00088c16) cell_gallery2_pane

0xee64,	// (0x0008c582) cell_gallery2_pane_g2

0x3401,	// (0x00080b1f) cell_gallery2_pane_g3

0xee6e,	// (0x0008c58c) cell_gallery2_pane_g4

0xee76,	// (0x0008c594) cell_gallery2_pane_g5

0xe52f,	// (0x0008bc4d) grid_highlight_pane_cp10

0xab7f,	// (0x0008829d) popup_vitu2_match_list_window_ParamLimits

0xab93,	// (0x000882b1) popup_vitu2_query_window_ParamLimits

0xab93,	// (0x000882b1) popup_vitu2_query_window

0x5ec3,	// (0x000835e1) bg_vitu2_candi_button_pane

0xee49,	// (0x0008c567) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xee52,	// (0x0008c570) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xee5b,	// (0x0008c579) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb526,	// (0x00088c44) bg_button_pane_cp015

0xb538,	// (0x00088c56) bg_button_pane_cp016

0xb54b,	// (0x00088c69) bg_button_pane_cp017

0x145f,	// (0x0007eb7d) bg_popup_sub_pane_cp22

0xee7e,	// (0x0008c59c) popup_vitu2_query_window_g1

0xb590,	// (0x00088cae) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0008d159) popup_vitu2_query_window_g

0xb5ad,	// (0x00088ccb) popup_vitu2_query_window_t1_ParamLimits

0xb5ad,	// (0x00088ccb) popup_vitu2_query_window_t1

0xb5e0,	// (0x00088cfe) popup_vitu2_query_window_t2_ParamLimits

0xb5e0,	// (0x00088cfe) popup_vitu2_query_window_t2

0xb5f2,	// (0x00088d10) popup_vitu2_query_window_t3_ParamLimits

0xb5f2,	// (0x00088d10) popup_vitu2_query_window_t3

0xb61a,	// (0x00088d38) popup_vitu2_query_window_t4_ParamLimits

0xb61a,	// (0x00088d38) popup_vitu2_query_window_t4

0xb63b,	// (0x00088d59) popup_vitu2_query_window_t5_ParamLimits

0xb63b,	// (0x00088d59) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0008d160) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0008d160) popup_vitu2_query_window_t

0xed1f,	// (0x0008c43d) main_cset_text_pane

0xaf53,	// (0x00088671) aid_area_touch_slider_ParamLimits

0xaf6f,	// (0x0008868d) cset_slider_pane_ParamLimits

0xaf99,	// (0x000886b7) main_cset_slider_pane_g1_ParamLimits

0xafae,	// (0x000886cc) main_cset_slider_pane_g2_ParamLimits

0xed40,	// (0x0008c45e) main_cset_slider_pane_g3_ParamLimits

0xed40,	// (0x0008c45e) main_cset_slider_pane_g3

0xafc3,	// (0x000886e1) main_cset_slider_pane_g4_ParamLimits

0xafc3,	// (0x000886e1) main_cset_slider_pane_g4

0xafd2,	// (0x000886f0) main_cset_slider_pane_g5_ParamLimits

0xafd2,	// (0x000886f0) main_cset_slider_pane_g5

0xafe0,	// (0x000886fe) main_cset_slider_pane_g6_ParamLimits

0xafe0,	// (0x000886fe) main_cset_slider_pane_g6

0xf995,	// (0x0008d0b3) main_cset_slider_pane_g_ParamLimits

0xed70,	// (0x0008c48e) main_cset_slider_pane_t1_ParamLimits

0xb070,	// (0x0008878e) main_cset_slider_pane_t2_ParamLimits

0xb08a,	// (0x000887a8) main_cset_slider_pane_t3_ParamLimits

0xb0a4,	// (0x000887c2) main_cset_slider_pane_t4_ParamLimits

0xb0be,	// (0x000887dc) main_cset_slider_pane_t5_ParamLimits

0xb0dc,	// (0x000887fa) main_cset_slider_pane_t6_ParamLimits

0xb0f3,	// (0x00088811) main_cset_slider_pane_t7_ParamLimits

0xb121,	// (0x0008883f) main_cset_slider_pane_t8_ParamLimits

0xb121,	// (0x0008883f) main_cset_slider_pane_t8

0xb149,	// (0x00088867) main_cset_slider_pane_t9_ParamLimits

0xb149,	// (0x00088867) main_cset_slider_pane_t9

0xb171,	// (0x0008888f) main_cset_slider_pane_t10_ParamLimits

0xb171,	// (0x0008888f) main_cset_slider_pane_t10

0xb199,	// (0x000888b7) main_cset_slider_pane_t11_ParamLimits

0xb199,	// (0x000888b7) main_cset_slider_pane_t11

0xb1c3,	// (0x000888e1) main_cset_slider_pane_t12_ParamLimits

0xb1c3,	// (0x000888e1) main_cset_slider_pane_t12

0xb1e0,	// (0x000888fe) main_cset_slider_pane_t13_ParamLimits

0xb1e0,	// (0x000888fe) main_cset_slider_pane_t13

0xf9ba,	// (0x0008d0d8) main_cset_slider_pane_t_ParamLimits

0x039e,	// (0x0007dabc) bg_popup_sub_pane_cp011

0xee8a,	// (0x0008c5a8) main_cset_text_pane_g1

0xee92,	// (0x0008c5b0) main_cset_text_pane_t1

0xeea0,	// (0x0008c5be) main_cset_text_pane_t2

0xeeae,	// (0x0008c5cc) main_cset_text_pane_t3

0xeebc,	// (0x0008c5da) main_cset_text_pane_t4

0xeeca,	// (0x0008c5e8) main_cset_text_pane_t5

0xeed8,	// (0x0008c5f6) main_cset_text_pane_t6

0xeee6,	// (0x0008c604) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0008d16f) main_cset_text_pane_t

0x039e,	// (0x0007dabc) main_cam4_burst_pane

0x039e,	// (0x0007dabc) main_cam5_pane

0xaea2,	// (0x000885c0) bg_button_pane_cp019

0xaeab,	// (0x000885c9) bg_button_pane_cp020

0xed4c,	// (0x0008c46a) main_cset_slider_pane_g7_ParamLimits

0xed4c,	// (0x0008c46a) main_cset_slider_pane_g7

0xed58,	// (0x0008c476) main_cset_slider_pane_g8_ParamLimits

0xed58,	// (0x0008c476) main_cset_slider_pane_g8

0xaff4,	// (0x00088712) main_cset_slider_pane_g9_ParamLimits

0xaff4,	// (0x00088712) main_cset_slider_pane_g9

0xb000,	// (0x0008871e) main_cset_slider_pane_g10_ParamLimits

0xb000,	// (0x0008871e) main_cset_slider_pane_g10

0xb00c,	// (0x0008872a) main_cset_slider_pane_g11_ParamLimits

0xb00c,	// (0x0008872a) main_cset_slider_pane_g11

0xb018,	// (0x00088736) main_cset_slider_pane_g12_ParamLimits

0xb018,	// (0x00088736) main_cset_slider_pane_g12

0xb024,	// (0x00088742) main_cset_slider_pane_g13_ParamLimits

0xb024,	// (0x00088742) main_cset_slider_pane_g13

0xb030,	// (0x0008874e) main_cset_slider_pane_g14_ParamLimits

0xb030,	// (0x0008874e) main_cset_slider_pane_g14

0xb03c,	// (0x0008875a) main_cset_slider_pane_g15_ParamLimits

0xb03c,	// (0x0008875a) main_cset_slider_pane_g15

0xed9e,	// (0x0008c4bc) main_cset_slider_pane_t14_ParamLimits

0xed9e,	// (0x0008c4bc) main_cset_slider_pane_t14

0xedd7,	// (0x0008c4f5) main_cset_slider_pane_t15_ParamLimits

0xedd7,	// (0x0008c4f5) main_cset_slider_pane_t15

0xb6b2,	// (0x00088dd0) aid_cam4_burst_size_cell_ParamLimits

0xb6b2,	// (0x00088dd0) aid_cam4_burst_size_cell

0xb6ce,	// (0x00088dec) grid_cam4_burst_pane_ParamLimits

0xb6ce,	// (0x00088dec) grid_cam4_burst_pane

0xb6fe,	// (0x00088e1c) linegrid_cam4_burst_pane_ParamLimits

0xb6fe,	// (0x00088e1c) linegrid_cam4_burst_pane

0xb71e,	// (0x00088e3c) scroll_pane_cp30_ParamLimits

0xb71e,	// (0x00088e3c) scroll_pane_cp30

0xb72a,	// (0x00088e48) cell_cam4_burst_pane_ParamLimits

0xb72a,	// (0x00088e48) cell_cam4_burst_pane

0xeef4,	// (0x0008c612) linegrid_cam4_burst_pane_g1_ParamLimits

0xeef4,	// (0x0008c612) linegrid_cam4_burst_pane_g1

0xb766,	// (0x00088e84) linegrid_cam4_burst_pane_g2_ParamLimits

0xb766,	// (0x00088e84) linegrid_cam4_burst_pane_g2

0xef01,	// (0x0008c61f) linegrid_cam4_burst_pane_g3_ParamLimits

0xef01,	// (0x0008c61f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0008d17e) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0008d17e) linegrid_cam4_burst_pane_g

0xb777,	// (0x00088e95) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb777,	// (0x00088e95) linegrid_cam4_burst_pane_g3_copy1

0xef0e,	// (0x0008c62c) linegrid_cam4_burst_pane_g4_ParamLimits

0xef0e,	// (0x0008c62c) linegrid_cam4_burst_pane_g4

0xb791,	// (0x00088eaf) linegrid_cam4_burst_pane_g5_ParamLimits

0xb791,	// (0x00088eaf) linegrid_cam4_burst_pane_g5

0xb7a2,	// (0x00088ec0) linegrid_cam4_burst_pane_g6_ParamLimits

0xb7a2,	// (0x00088ec0) linegrid_cam4_burst_pane_g6

0xef1b,	// (0x0008c639) linegrid_cam4_burst_pane_g7_ParamLimits

0xef1b,	// (0x0008c639) linegrid_cam4_burst_pane_g7

0xb7b3,	// (0x00088ed1) cell_cam4_burst_pane_g1

0xef34,	// (0x0008c652) main_cam5_pane_t1_ParamLimits

0xef34,	// (0x0008c652) main_cam5_pane_t1

0xef46,	// (0x0008c664) main_cam5_pane_t2_ParamLimits

0xef46,	// (0x0008c664) main_cam5_pane_t2

0xef58,	// (0x0008c676) main_cam5_pane_t3_ParamLimits

0xef58,	// (0x0008c676) main_cam5_pane_t3

0xef6a,	// (0x0008c688) main_cam5_pane_t4_ParamLimits

0xef6a,	// (0x0008c688) main_cam5_pane_t4

0xef82,	// (0x0008c6a0) main_cam5_pane_t5_ParamLimits

0xef82,	// (0x0008c6a0) main_cam5_pane_t5

0xef96,	// (0x0008c6b4) main_cam5_pane_t6_ParamLimits

0xef96,	// (0x0008c6b4) main_cam5_pane_t6

0xefaa,	// (0x0008c6c8) main_cam5_pane_t7_ParamLimits

0xefaa,	// (0x0008c6c8) main_cam5_pane_t7

0xefbc,	// (0x0008c6da) main_cam5_pane_t8_ParamLimits

0xefbc,	// (0x0008c6da) main_cam5_pane_t8

0xefd8,	// (0x0008c6f6) main_cam5_pane_t9_ParamLimits

0xefd8,	// (0x0008c6f6) main_cam5_pane_t9

0xefea,	// (0x0008c708) main_cam5_pane_t10_ParamLimits

0xefea,	// (0x0008c708) main_cam5_pane_t10

0xeffc,	// (0x0008c71a) main_cam5_pane_t11_ParamLimits

0xeffc,	// (0x0008c71a) main_cam5_pane_t11

0xf00e,	// (0x0008c72c) main_cam5_pane_t12_ParamLimits

0xf00e,	// (0x0008c72c) main_cam5_pane_t12

0xf023,	// (0x0008c741) main_cam5_pane_t13_ParamLimits

0xf023,	// (0x0008c741) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0008d18a) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0008d18a) main_cam5_pane_t

0x5b46,	// (0x00083264) popup_scut_keymap_window_ParamLimits

0x5b46,	// (0x00083264) popup_scut_keymap_window

0xb7c6,	// (0x00088ee4) aid_size_cell_brow_shortcut

0xe52f,	// (0x0008bc4d) bg_popup_window_pane_cp010

0xb7d2,	// (0x00088ef0) grid_scut_pane

0xb7de,	// (0x00088efc) cell_scut_pane_ParamLimits

0xb7de,	// (0x00088efc) cell_scut_pane

0xb7f5,	// (0x00088f13) cell_scut_pane_g1

0xf040,	// (0x0008c75e) cell_scut_pane_t1

0xf04f,	// (0x0008c76d) cell_scut_pane_t2

0xb7fe,	// (0x00088f1c) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0008d1a5) cell_scut_pane_t

0x96d2,	// (0x00086df0) main_mup3_pane_g8_ParamLimits

0x96d2,	// (0x00086df0) main_mup3_pane_g8

0xaaa9,	// (0x000881c7) area_vitu2_query_pane_ParamLimits

0xaaa9,	// (0x000881c7) area_vitu2_query_pane

0xb55e,	// (0x00088c7c) input_focus_pane_cp08

0xf05e,	// (0x0008c77c) area_vitu2_query_pane_g1

0xb80c,	// (0x00088f2a) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0008d1ac) area_vitu2_query_pane_g

0xb81d,	// (0x00088f3b) area_vitu2_query_pane_t1_ParamLimits

0xb81d,	// (0x00088f3b) area_vitu2_query_pane_t1

0xb831,	// (0x00088f4f) area_vitu2_query_pane_t2_ParamLimits

0xb831,	// (0x00088f4f) area_vitu2_query_pane_t2

0xb845,	// (0x00088f63) area_vitu2_query_pane_t3_ParamLimits

0xb845,	// (0x00088f63) area_vitu2_query_pane_t3

0x2181,	// (0x0007f89f) area_vitu2_query_pane_t4_ParamLimits

0x2181,	// (0x0007f89f) area_vitu2_query_pane_t4

0x21a9,	// (0x0007f8c7) area_vitu2_query_pane_t5_ParamLimits

0x21a9,	// (0x0007f8c7) area_vitu2_query_pane_t5

0x21d1,	// (0x0007f8ef) area_vitu2_query_pane_t6_ParamLimits

0x21d1,	// (0x0007f8ef) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0008d1b1) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0008d1b1) area_vitu2_query_pane_t

0xb86d,	// (0x00088f8b) bg_button_pane_cp018

0xb87b,	// (0x00088f99) bg_button_pane_cp021

0xb887,	// (0x00088fa5) bg_button_pane_cp022

0xb898,	// (0x00088fb6) input_focus_pane_cp09

0x7b6e,	// (0x0008528c) aid_size_touch_mv_arrow_left

0x7b97,	// (0x000852b5) aid_size_touch_mv_arrow_right

0xb054,	// (0x00088772) main_cset_slider_pane_g16_ParamLimits

0xb054,	// (0x00088772) main_cset_slider_pane_g16

0xb062,	// (0x00088780) main_cset_slider_pane_g17_ParamLimits

0xb062,	// (0x00088780) main_cset_slider_pane_g17

0xb7b3,	// (0x00088ed1) cell_cam4_burst_pane_g1_ParamLimits

0x039e,	// (0x0007dabc) compa_mode_pane

0xb28c,	// (0x000889aa) popup_vtel_slider_window_g3_ParamLimits

0xb28c,	// (0x000889aa) popup_vtel_slider_window_g3

0xb2a0,	// (0x000889be) popup_vtel_slider_window_g4_ParamLimits

0xb2a0,	// (0x000889be) popup_vtel_slider_window_g4

0xb2b4,	// (0x000889d2) popup_vtel_slider_window_t1_ParamLimits

0xb2b4,	// (0x000889d2) popup_vtel_slider_window_t1

0x039e,	// (0x0007dabc) main_cl_pane

0x1487,	// (0x0007eba5) popup_imed_adjust2_window_ParamLimits

0x145f,	// (0x0007eb7d) bg_tb_trans_pane_cp05_ParamLimits

0x1e9c,	// (0x0007f5ba) popup_imed_adjust2_window_g1_ParamLimits

0x1eab,	// (0x0007f5c9) popup_imed_adjust2_window_g2_ParamLimits

0x1eab,	// (0x0007f5c9) popup_imed_adjust2_window_g2

0x1eb7,	// (0x0007f5d5) popup_imed_adjust2_window_g3_ParamLimits

0x1eb7,	// (0x0007f5d5) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0008cf1c) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0008cf1c) popup_imed_adjust2_window_g

0x1ec3,	// (0x0007f5e1) popup_imed_adjust2_window_t1_ParamLimits

0x1edb,	// (0x0007f5f9) slider_imed_adjust_pane_ParamLimits

0x1eef,	// (0x0007f60d) slider_imed_adjust_pane_g1_ParamLimits

0x1eff,	// (0x0007f61d) slider_imed_adjust_pane_g2_ParamLimits

0x1f0f,	// (0x0007f62d) slider_imed_adjust_pane_g3_ParamLimits

0x1f20,	// (0x0007f63e) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0008cf23) slider_imed_adjust_pane_g_ParamLimits

0xa7db,	// (0x00087ef9) aid_touch_area_cam4_ParamLimits

0xa7db,	// (0x00087ef9) aid_touch_area_cam4

0xa7eb,	// (0x00087f09) battery_pane_cp01

0xa872,	// (0x00087f90) main_camera4_pane_g6_ParamLimits

0xa872,	// (0x00087f90) main_camera4_pane_g6

0xa890,	// (0x00087fae) main_camera4_pane_t2_ParamLimits

0xa890,	// (0x00087fae) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0008d026) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0008d026) main_camera4_pane_t

0xa925,	// (0x00088043) aid_touch_area_vid4_ParamLimits

0xa925,	// (0x00088043) aid_touch_area_vid4

0xa965,	// (0x00088083) main_video4_pane_g5_ParamLimits

0xa965,	// (0x00088083) main_video4_pane_g5

0xa987,	// (0x000880a5) vid4_progress_pane_ParamLimits

0xa987,	// (0x000880a5) vid4_progress_pane

0xed64,	// (0x0008c482) main_cset_slider_pane_g18_ParamLimits

0xed64,	// (0x0008c482) main_cset_slider_pane_g18

0xef28,	// (0x0008c646) cell_cam4_burst_pane_g2_ParamLimits

0xef28,	// (0x0008c646) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0008d185) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0008d185) cell_cam4_burst_pane_g

0xb8a9,	// (0x00088fc7) bg_cl_pane_ParamLimits

0xb8a9,	// (0x00088fc7) bg_cl_pane

0xb8b5,	// (0x00088fd3) cl_header_pane_ParamLimits

0xb8b5,	// (0x00088fd3) cl_header_pane

0xb8c1,	// (0x00088fdf) cl_listscroll_pane_ParamLimits

0xb8c1,	// (0x00088fdf) cl_listscroll_pane

0xf06a,	// (0x0008c788) bg_cl_pane_g1

0xf072,	// (0x0008c790) bg_cl_pane_g2

0xf07a,	// (0x0008c798) bg_cl_pane_g3

0xf082,	// (0x0008c7a0) bg_cl_pane_g4

0xf08a,	// (0x0008c7a8) bg_cl_pane_g5

0xf092,	// (0x0008c7b0) bg_cl_pane_g6

0xf09a,	// (0x0008c7b8) bg_cl_pane_g7

0xf0a2,	// (0x0008c7c0) bg_cl_pane_g8

0xf0aa,	// (0x0008c7c8) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0008d1c0) bg_cl_pane_g

0xb8cd,	// (0x00088feb) aid_height_cl_leading_ParamLimits

0xb8cd,	// (0x00088feb) aid_height_cl_leading

0xb8d9,	// (0x00088ff7) aid_height_cl_text_ParamLimits

0xb8d9,	// (0x00088ff7) aid_height_cl_text

0x20c2,	// (0x0007f7e0) bg_cl_header_pane_ParamLimits

0x20c2,	// (0x0007f7e0) bg_cl_header_pane

0xb8f1,	// (0x0008900f) cl_header_pane_g1_ParamLimits

0xb8f1,	// (0x0008900f) cl_header_pane_g1

0xb8fe,	// (0x0008901c) cl_header_pane_t1_ParamLimits

0xb8fe,	// (0x0008901c) cl_header_pane_t1

0xf0b2,	// (0x0008c7d0) cl_list_pane

0xed37,	// (0x0008c455) hc_scroll_pane_cp01

0xde24,	// (0x0008b542) bg_cl_header_pane_g1

0xec1d,	// (0x0008c33b) bg_cl_header_pane_g2

0xde44,	// (0x0008b562) bg_cl_header_pane_g3

0xec2d,	// (0x0008c34b) bg_cl_header_pane_g4

0xec25,	// (0x0008c343) bg_cl_header_pane_g5

0xee41,	// (0x0008c55f) bg_cl_header_pane_g6

0xec45,	// (0x0008c363) bg_cl_header_pane_g7

0xec4d,	// (0x0008c36b) bg_cl_header_pane_g8

0xec3d,	// (0x0008c35b) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0008d1d3) bg_cl_header_pane_g

0xb910,	// (0x0008902e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb910,	// (0x0008902e) hc_cl_list_double_graphic_heading_pane

0xb921,	// (0x0008903f) hc_cl_list_single_graphic_pane_ParamLimits

0xb921,	// (0x0008903f) hc_cl_list_single_graphic_pane

0xb93a,	// (0x00089058) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb93a,	// (0x00089058) hc_cl_list_single_graphic_pane_g1

0xb946,	// (0x00089064) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb946,	// (0x00089064) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0008d1e6) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0008d1e6) hc_cl_list_single_graphic_pane_g

0xb95a,	// (0x00089078) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb95a,	// (0x00089078) hc_cl_list_single_graphic_pane_t1

0xb93a,	// (0x00089058) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb93a,	// (0x00089058) hc_cl_list_double_graphic_heading_pane_g1

0xb96f,	// (0x0008908d) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb96f,	// (0x0008908d) hc_cl_list_double_graphic_heading_pane_g2

0xb983,	// (0x000890a1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb983,	// (0x000890a1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0008d1eb) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0008d1eb) hc_cl_list_double_graphic_heading_pane_g

0xb997,	// (0x000890b5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb997,	// (0x000890b5) hc_cl_list_double_graphic_heading_pane_t1

0xb9ac,	// (0x000890ca) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb9ac,	// (0x000890ca) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0008d1f2) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0008d1f2) hc_cl_list_double_graphic_heading_pane_t

0xb9c9,	// (0x000890e7) vid4_progress_pane_g1

0xb9d9,	// (0x000890f7) vid4_progress_pane_g2

0xe0e9,	// (0x0008b807) vid4_progress_pane_g3

0xb9e9,	// (0x00089107) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0008d1f7) vid4_progress_pane_g

0xba07,	// (0x00089125) vid4_progress_pane_t1

0xba1c,	// (0x0008913a) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0008d202) vid4_progress_pane_t

0xba47,	// (0x00089165) wait_bar_pane_cp07

0x1758,	// (0x0007ee76) blid_firmament_pane_ParamLimits

0x179b,	// (0x0007eeb9) popup_blid_sat_info2_window_g1

0x17bf,	// (0x0007eedd) popup_blid_sat_info2_window_t3

0x17cd,	// (0x0007eeeb) popup_blid_sat_info2_window_t4

0x17db,	// (0x0007eef9) popup_blid_sat_info2_window_t5

0x17e9,	// (0x0007ef07) popup_blid_sat_info2_window_t6

0x17f9,	// (0x0007ef17) popup_blid_sat_info2_window_t7

0x1807,	// (0x0007ef25) popup_blid_sat_info2_window_t8

0x1815,	// (0x0007ef33) popup_blid_sat_info2_window_t9

0x1823,	// (0x0007ef41) popup_blid_sat_info2_window_t10

0x18e5,	// (0x0007f003) aid_firma_cardinal_ParamLimits

0x18f9,	// (0x0007f017) blid_firmament_pane_t1_ParamLimits

0x1910,	// (0x0007f02e) blid_firmament_pane_t2_ParamLimits

0x1927,	// (0x0007f045) blid_firmament_pane_t3_ParamLimits

0x193e,	// (0x0007f05c) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0008ce15) blid_firmament_pane_t_ParamLimits

0x1955,	// (0x0007f073) blid_sat_info_pane_ParamLimits

0x4167,	// (0x00081885) main_cam_set_pane_ParamLimits

0x9e57,	// (0x00087575) aid_size_cell_colour_35_ParamLimits

0x9e71,	// (0x0008758f) aid_size_cell_colour_112_ParamLimits

0x9e88,	// (0x000875a6) aid_size_cell_effect_ParamLimits

0x4167,	// (0x00081885) bg_tb_trans_pane_cp02_ParamLimits

0xebfd,	// (0x0008c31b) heading_imed_pane_ParamLimits

0x9ea2,	// (0x000875c0) listscroll_imed_pane_ParamLimits

0x0a91,	// (0x0007e1af) popup_call2_audio_first_window_g5_ParamLimits

0x0a91,	// (0x0007e1af) popup_call2_audio_first_window_g5

0xa58a,	// (0x00087ca8) aid_size_touch_image3_arrow_left_ParamLimits

0xa58a,	// (0x00087ca8) aid_size_touch_image3_arrow_left

0xa5a0,	// (0x00087cbe) aid_size_touch_image3_arrow_right_ParamLimits

0xa5a0,	// (0x00087cbe) aid_size_touch_image3_arrow_right

0xba32,	// (0x00089150) vid4_progress_pane_t3

0xa13f,	// (0x0008785d) main_hwr_training_symbol_option_pane_ParamLimits

0xa13f,	// (0x0008785d) main_hwr_training_symbol_option_pane

0x3f3e,	// (0x0008165c) popup_hwr_training_preview_window_ParamLimits

0x3f3e,	// (0x0008165c) popup_hwr_training_preview_window

0xa1a0,	// (0x000878be) hwr_training_navi_pane_g5_ParamLimits

0xa1a0,	// (0x000878be) hwr_training_navi_pane_g5

0x42b2,	// (0x000819d0) popup_char_count_window

0xb3aa,	// (0x00088ac8) bg_popup_sub_pane_cp20_ParamLimits

0xb3b8,	// (0x00088ad6) list_vitu2_match_list_pane_ParamLimits

0xb3c4,	// (0x00088ae2) vitu2_page_scroll_pane_ParamLimits

0xb3c4,	// (0x00088ae2) vitu2_page_scroll_pane

0xf0bb,	// (0x0008c7d9) list_single_hwr_training_symbol_option_pane_ParamLimits

0xf0bb,	// (0x0008c7d9) list_single_hwr_training_symbol_option_pane

0x226f,	// (0x0007f98d) list_single_hwr_training_symbol_option_pane_g1

0x2277,	// (0x0007f995) list_single_hwr_training_symbol_option_pane_t1

0x2285,	// (0x0007f9a3) bg_button_pane_cp023

0x228e,	// (0x0007f9ac) bg_button_pane_cp024

0xba59,	// (0x00089177) vitu2_page_scroll_pane_g1

0xba61,	// (0x0008917f) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0008d209) vitu2_page_scroll_pane_g

0xba69,	// (0x00089187) vitu2_page_scroll_pane_t1

0x22c1,	// (0x0007f9df) popup_char_count_window_g1

0x22ca,	// (0x0007f9e8) popup_char_count_window_g2

0x22d3,	// (0x0007f9f1) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0008d20e) popup_char_count_window_g

0x22dc,	// (0x0007f9fa) popup_char_count_window_t1

0x039e,	// (0x0007dabc) main_vded2_pane

0x1e88,	// (0x0007f5a6) aid_size_cell_imed_line

0x1e92,	// (0x0007f5b0) grid_imed_line_width_pane

0xa9fe,	// (0x0008811c) vid4_indicators_pane_g4

0x22ea,	// (0x0007fa08) cell_imed_line_width_pane_ParamLimits

0x22ea,	// (0x0007fa08) cell_imed_line_width_pane

0x22fe,	// (0x0007fa1c) cell_imed_line_width_pane_g1

0x2307,	// (0x0007fa25) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0008d215) cell_imed_line_width_pane_g

0xba78,	// (0x00089196) main_vded2_pane_g1_ParamLimits

0xba78,	// (0x00089196) main_vded2_pane_g1

0xba85,	// (0x000891a3) main_vded2_pane_g2_ParamLimits

0xba85,	// (0x000891a3) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0008d21a) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0008d21a) main_vded2_pane_g

0xba93,	// (0x000891b1) vded2_slider_pane_ParamLimits

0xba93,	// (0x000891b1) vded2_slider_pane

0xbaa0,	// (0x000891be) aid_size_touch_vded2_end

0xbaaa,	// (0x000891c8) aid_size_touch_vded2_playhead

0x230f,	// (0x0007fa2d) aid_size_touch_vded2_start

0x2317,	// (0x0007fa35) vded2_slider_bg_pane

0x2320,	// (0x0007fa3e) vded2_slider_pane_g1

0x2329,	// (0x0007fa47) vded2_slider_pane_g2

0xbab2,	// (0x000891d0) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0008d21f) vded2_slider_pane_g

0x2331,	// (0x0007fa4f) vded2_slider_bg_pane_g1

0x233a,	// (0x0007fa58) vded2_slider_bg_pane_g2

0x2343,	// (0x0007fa61) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0008d226) vded2_slider_bg_pane_g

0x82a8,	// (0x000859c6) aid_postcard_touch_down_pane_ParamLimits

0x82a8,	// (0x000859c6) aid_postcard_touch_down_pane

0x82b8,	// (0x000859d6) aid_postcard_touch_up_pane_ParamLimits

0x82b8,	// (0x000859d6) aid_postcard_touch_up_pane

0x039e,	// (0x0007dabc) main_blid2_pane

0x146d,	// (0x0007eb8b) popup_blid2_search_window

0x039e,	// (0x0007dabc) blid2_gps_pane

0x039e,	// (0x0007dabc) blid2_navig_pane

0x039e,	// (0x0007dabc) blid2_search_pane

0x039e,	// (0x0007dabc) blid2_tripm_pane

0xbabb,	// (0x000891d9) blid2_search_pane_g1_ParamLimits

0xbabb,	// (0x000891d9) blid2_search_pane_g1

0xbacb,	// (0x000891e9) blid2_search_pane_t1_ParamLimits

0xbacb,	// (0x000891e9) blid2_search_pane_t1

0xbadd,	// (0x000891fb) aid_size_cell_blid2_gps_ParamLimits

0xbadd,	// (0x000891fb) aid_size_cell_blid2_gps

0xbaed,	// (0x0008920b) blid2_gps_pane_g1_ParamLimits

0xbaed,	// (0x0008920b) blid2_gps_pane_g1

0xbaf9,	// (0x00089217) grid_blid2_satellite_pane_ParamLimits

0xbaf9,	// (0x00089217) grid_blid2_satellite_pane

0xbb09,	// (0x00089227) blid2_navig_pane_g1_ParamLimits

0xbb09,	// (0x00089227) blid2_navig_pane_g1

0xbb15,	// (0x00089233) blid2_navig_pane_t1_ParamLimits

0xbb15,	// (0x00089233) blid2_navig_pane_t1

0xbb27,	// (0x00089245) blid2_navig_pane_t2_ParamLimits

0xbb27,	// (0x00089245) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0008d22d) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0008d22d) blid2_navig_pane_t

0xbb39,	// (0x00089257) blid2_navig_ring_pane_ParamLimits

0xbb39,	// (0x00089257) blid2_navig_ring_pane

0xbb49,	// (0x00089267) blid2_speed_pane_ParamLimits

0xbb49,	// (0x00089267) blid2_speed_pane

0xbb55,	// (0x00089273) blid2_tripm_pane_g1_ParamLimits

0xbb55,	// (0x00089273) blid2_tripm_pane_g1

0xbb65,	// (0x00089283) blid2_tripm_pane_g2_ParamLimits

0xbb65,	// (0x00089283) blid2_tripm_pane_g2

0xbb71,	// (0x0008928f) blid2_tripm_pane_g3_ParamLimits

0xbb71,	// (0x0008928f) blid2_tripm_pane_g3

0xbb7d,	// (0x0008929b) blid2_tripm_pane_g4_ParamLimits

0xbb7d,	// (0x0008929b) blid2_tripm_pane_g4

0xbb89,	// (0x000892a7) blid2_tripm_pane_g5_ParamLimits

0xbb89,	// (0x000892a7) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0008d232) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0008d232) blid2_tripm_pane_g

0xbba5,	// (0x000892c3) blid2_tripm_pane_t1_ParamLimits

0xbba5,	// (0x000892c3) blid2_tripm_pane_t1

0xbbb9,	// (0x000892d7) blid2_tripm_pane_t2_ParamLimits

0xbbb9,	// (0x000892d7) blid2_tripm_pane_t2

0xbbcb,	// (0x000892e9) blid2_tripm_pane_t3_ParamLimits

0xbbcb,	// (0x000892e9) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0008d23f) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0008d23f) blid2_tripm_pane_t

0xbbfd,	// (0x0008931b) cell_blid2_satellite_pane_ParamLimits

0xbbfd,	// (0x0008931b) cell_blid2_satellite_pane

0xbc17,	// (0x00089335) cell_blid2_satellite_pane_g1

0x234c,	// (0x0007fa6a) cell_blid2_satellite_pane_t1

0x1965,	// (0x0007f083) blid2_speed_pane_g1

0x235a,	// (0x0007fa78) blid2_speed_pane_t1

0x2368,	// (0x0007fa86) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0008d248) blid2_speed_pane_t

0x1965,	// (0x0007f083) blid2_navig_ring_pane_g1

0xbc20,	// (0x0008933e) blid2_navig_ring_pane_g2

0xbc28,	// (0x00089346) blid2_navig_ring_pane_g3

0xbc30,	// (0x0008934e) blid2_navig_ring_pane_g4

0xbc38,	// (0x00089356) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0008d24d) blid2_navig_ring_pane_g

0x039e,	// (0x0007dabc) bg_popup_window_pane_cp011

0x2376,	// (0x0007fa94) popup_blid2_search_window_g1

0x237e,	// (0x0007fa9c) popup_blid2_search_window_t1

0x238c,	// (0x0007faaa) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0008d258) popup_blid2_search_window_t

0xdd33,	// (0x0008b451) main_browser_pane_g1

0x4923,	// (0x00082041) main_browser_pane_ParamLimits

0xa9b3,	// (0x000880d1) bg_button_pane_cp011_ParamLimits

0xac75,	// (0x00088393) cell_vitu2_function_pane_g1_ParamLimits

0x145f,	// (0x0007eb7d) bg_popup_sub_pane_cp22_ParamLimits

0xb55e,	// (0x00088c7c) input_focus_pane_cp08_ParamLimits

0xb575,	// (0x00088c93) popup_vitu2_query_button_pane_ParamLimits

0xb575,	// (0x00088c93) popup_vitu2_query_button_pane

0xb586,	// (0x00088ca4) popup_vitu2_query_input_button_pane

0xee7e,	// (0x0008c59c) popup_vitu2_query_window_g1_ParamLimits

0xb590,	// (0x00088cae) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0008d159) popup_vitu2_query_window_g_ParamLimits

0x039e,	// (0x0007dabc) bg_button_pane_cp026

0xbc40,	// (0x0008935e) popup_vitu2_query_input_button_pane_g1

0x039e,	// (0x0007dabc) bg_button_pane_cp025

0x239a,	// (0x0007fab8) popup_vitu2_query_button_pane_t1

0x93ed,	// (0x00086b0b) main_mp3_pane_t6

0x93fd,	// (0x00086b1b) popup_slider_window_cp01

0xa8d4,	// (0x00087ff2) cam4_battery_pane

0xa9c1,	// (0x000880df) cam4_battery_pane_cp02

0xb9c1,	// (0x000890df) cam4_battery_pane_cp01

0xb9c1,	// (0x000890df) cam4_battery_pane_cp03

0xec09,	// (0x0008c327) cam4_battery_pane_g1

0x1965,	// (0x0007f083) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0008d25d) cam4_battery_pane_g

0x1831,	// (0x0007ef4f) popup_blid_sat_info2_window_t11

0x7b6e,	// (0x0008528c) aid_size_touch_mv_arrow_left_ParamLimits

0x7b97,	// (0x000852b5) aid_size_touch_mv_arrow_right_ParamLimits

0xe48f,	// (0x0008bbad) navi_pane_g1_ParamLimits

0x7bc0,	// (0x000852de) navi_pane_g2_ParamLimits

0x7bee,	// (0x0008530c) navi_pane_g3_ParamLimits

0xf409,	// (0x0008cb27) navi_pane_g_ParamLimits

0x7c48,	// (0x00085366) navi_pane_mv_t1_ParamLimits

0x9eae,	// (0x000875cc) grid_imed_effect_pane_ParamLimits

0x68cc,	// (0x00083fea) aid_placing_vt_slider_lsc

0xdc84,	// (0x0008b3a2) aid_placing_vt_slider_prt

0x4167,	// (0x00081885) bg_tb_trans_pane_cp01_ParamLimits

0x1af1,	// (0x0007f20f) popup_image_details_window_g1_ParamLimits

0x1b04,	// (0x0007f222) popup_image_details_window_g2_ParamLimits

0x1b19,	// (0x0007f237) popup_image_details_window_g3_ParamLimits

0x1b19,	// (0x0007f237) popup_image_details_window_g3

0xf73c,	// (0x0008ce5a) popup_image_details_window_g_ParamLimits

0x1b2d,	// (0x0007f24b) popup_image_details_window_t1_ParamLimits

0x1b3f,	// (0x0007f25d) popup_image_details_window_t2_ParamLimits

0x1b58,	// (0x0007f276) popup_image_details_window_t3_ParamLimits

0x1b6c,	// (0x0007f28a) popup_image_details_window_t4_ParamLimits

0x1b87,	// (0x0007f2a5) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0008ce61) popup_image_details_window_t_ParamLimits

0xb8e5,	// (0x00089003) cl_header_name_pane_ParamLimits

0xb8e5,	// (0x00089003) cl_header_name_pane

0xbc48,	// (0x00089366) cl_header_name_pane_t1_ParamLimits

0xbc48,	// (0x00089366) cl_header_name_pane_t1

0xbc5f,	// (0x0008937d) cl_header_name_pane_t2_ParamLimits

0xbc5f,	// (0x0008937d) cl_header_name_pane_t2

0xbc89,	// (0x000893a7) cl_header_name_pane_t3_ParamLimits

0xbc89,	// (0x000893a7) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0008d262) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0008d262) cl_header_name_pane_t

0x7c19,	// (0x00085337) navi_pane_mv_g2_ParamLimits

0x428c,	// (0x000819aa) field_vitu2_entry_pane_g1_ParamLimits

0x4298,	// (0x000819b6) field_vitu2_entry_pane_g2_ParamLimits

0x42a4,	// (0x000819c2) field_vitu2_entry_pane_g3_ParamLimits

0x42a4,	// (0x000819c2) field_vitu2_entry_pane_g3

0xf93a,	// (0x0008d058) field_vitu2_entry_pane_g_ParamLimits

0xac05,	// (0x00088323) cell_vitu2_itu_pane_g1_ParamLimits

0xac15,	// (0x00088333) cell_vitu2_itu_pane_g2_ParamLimits

0xac15,	// (0x00088333) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0008d064) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0008d064) cell_vitu2_itu_pane_g

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp05_ParamLimits

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp05

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp03

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp04

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp10_ParamLimits

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp10

0xb887,	// (0x00088fa5) bg_vkb2_func_pane_cp08

0xb86d,	// (0x00088f8b) bg_vkb2_func_pane_cp06

0xb87b,	// (0x00088f99) bg_vkb2_func_pane_cp07

0x2297,	// (0x0007f9b5) bg_vkb2_func_pane_cp11_ParamLimits

0x2297,	// (0x0007f9b5) bg_vkb2_func_pane_cp11

0x22ac,	// (0x0007f9ca) bg_vkb2_func_pane_cp12_ParamLimits

0x22ac,	// (0x0007f9ca) bg_vkb2_func_pane_cp12

0x039e,	// (0x0007dabc) bg_vkb2_func_pane_cp09

0xec1d,	// (0x0008c33b) bg_vkb2_func_pane_g1

0xde44,	// (0x0008b562) bg_vkb2_func_pane_g2

0xec25,	// (0x0008c343) bg_vkb2_func_pane_g3

0xec2d,	// (0x0008c34b) bg_vkb2_func_pane_g4

0xee41,	// (0x0008c55f) bg_vkb2_func_pane_g5

0xec45,	// (0x0008c363) bg_vkb2_func_pane_g6

0xec4d,	// (0x0008c36b) bg_vkb2_func_pane_g7

0xec3d,	// (0x0008c35b) bg_vkb2_func_pane_g8

0xde24,	// (0x0008b542) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0008d269) bg_vkb2_func_pane_g

0xbb97,	// (0x000892b5) blid2_tripm_pane_g6_ParamLimits

0xbb97,	// (0x000892b5) blid2_tripm_pane_g6

0x4012,	// (0x00081730) mp4_progress_pane_g1

0xbbf1,	// (0x0008930f) blid2_tripm_values_pane_ParamLimits

0xbbf1,	// (0x0008930f) blid2_tripm_values_pane

0xbcae,	// (0x000893cc) blid2_tripm_values_pane_t1

0xbcbc,	// (0x000893da) blid2_tripm_values_pane_t2

0xbcca,	// (0x000893e8) blid2_tripm_values_pane_t3

0xbcd8,	// (0x000893f6) blid2_tripm_values_pane_t4

0xbce6,	// (0x00089404) blid2_tripm_values_pane_t5

0xbcf4,	// (0x00089412) blid2_tripm_values_pane_t6

0xbd02,	// (0x00089420) blid2_tripm_values_pane_t7

0xbd10,	// (0x0008942e) blid2_tripm_values_pane_t8

0xbd1e,	// (0x0008943c) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0008d27c) blid2_tripm_values_pane_t

0x690c,	// (0x0008402a) call_video_pane_t1_ParamLimits

0x692d,	// (0x0008404b) call_video_pane_t2_ParamLimits

0xf292,	// (0x0008c9b0) call_video_pane_t_ParamLimits

0x8179,	// (0x00085897) msg_header_pane_g1_ParamLimits

0xe6aa,	// (0x0008bdc8) msg_header_pane_g2_ParamLimits

0xe6aa,	// (0x0008bdc8) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0008cbca) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0008cbca) msg_header_pane_g

0x4923,	// (0x00082041) main_clock2_pane_ParamLimits

0x9c3e,	// (0x0008735c) grid_clock2_toolbar_pane_ParamLimits

0x9c3e,	// (0x0008735c) grid_clock2_toolbar_pane

0x9c3e,	// (0x0008735c) listscroll_clock2_pane_ParamLimits

0x9c3e,	// (0x0008735c) listscroll_clock2_pane

0x9ceb,	// (0x00087409) main_clock2_pane_t3_ParamLimits

0x9ceb,	// (0x00087409) main_clock2_pane_t3

0x9cfd,	// (0x0008741b) main_clock2_pane_t4_ParamLimits

0x9cfd,	// (0x0008741b) main_clock2_pane_t4

0x23a8,	// (0x0007fac6) cell_clock2_toolbar_pane

0x23b0,	// (0x0007face) cell_clock2_toolbar_pane_cp01

0x23b0,	// (0x0007face) cell_clock2_toolbar_pane_cp02

0x23b8,	// (0x0007fad6) cell_clock2_toolbar_pane_cp03

0x23c0,	// (0x0007fade) list_clock2_pane

0xe3e6,	// (0x0008bb04) scroll_pane_cp10

0x23c8,	// (0x0007fae6) list_single_clock2_pane_ParamLimits

0x23c8,	// (0x0007fae6) list_single_clock2_pane

0xe52f,	// (0x0008bc4d) list_highlight_pane_cp08

0x23d5,	// (0x0007faf3) list_single_clock2_pane_t1

0x23e3,	// (0x0007fb01) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0008d28f) list_single_clock2_pane_t

0x039e,	// (0x0007dabc) bg_button_pane_cp10

0x23f1,	// (0x0007fb0f) cell_clock2_toolbar_pane_g1

0x8216,	// (0x00085934) aid_main_viewer_pane_g1_ParamLimits

0x8216,	// (0x00085934) aid_main_viewer_pane_g1

0x8222,	// (0x00085940) aid_main_viewer_pane_g2_ParamLimits

0x8222,	// (0x00085940) aid_main_viewer_pane_g2

0x822e,	// (0x0008594c) aid_main_viewer_pane_g3_ParamLimits

0x822e,	// (0x0008594c) aid_main_viewer_pane_g3

0x823f,	// (0x0008595d) aid_main_viewer_pane_g4_ParamLimits

0x823f,	// (0x0008595d) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0008cbdb) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0008cbdb) aid_main_viewer_pane_g

0x89b3,	// (0x000860d1) main_calc_pane_ParamLimits

0x89c0,	// (0x000860de) main_dialer2_pane_ParamLimits

0x039e,	// (0x0007dabc) main_cam6_pane

0x039e,	// (0x0007dabc) main_vid6_pane

0x9c4a,	// (0x00087368) listscroll_gen_pane_cp06_ParamLimits

0x9c4a,	// (0x00087368) listscroll_gen_pane_cp06

0x9d0f,	// (0x0008742d) main_clock2_pane_t5_ParamLimits

0x9d0f,	// (0x0008742d) main_clock2_pane_t5

0x9d58,	// (0x00087476) aid_call2_pane_cp10_ParamLimits

0x9d6a,	// (0x00087488) aid_call_pane_cp10_ParamLimits

0xe464,	// (0x0008bb82) popup_clock_analogue_window_cp10_g1_ParamLimits

0xe464,	// (0x0008bb82) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9d7c,	// (0x0008749a) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9d7c,	// (0x0008749a) popup_clock_analogue_window_cp10_g4_ParamLimits

0xe464,	// (0x0008bb82) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0008cf11) popup_clock_analogue_window_cp10_g_ParamLimits

0x9d8e,	// (0x000874ac) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa537,	// (0x00087c55) cell_dialer2_keypad_pane_g2_ParamLimits

0xa537,	// (0x00087c55) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0008cff7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0008cff7) cell_dialer2_keypad_pane_g

0xa553,	// (0x00087c71) cell_dialer2_keypad_pane_t1

0xaf40,	// (0x0008865e) main_cset_text2_pane_ParamLimits

0xaf40,	// (0x0008865e) main_cset_text2_pane

0xf05e,	// (0x0008c77c) area_vitu2_query_pane_g1_ParamLimits

0xb80c,	// (0x00088f2a) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0008d1ac) area_vitu2_query_pane_g_ParamLimits

0x21f9,	// (0x0007f917) area_vitu2_query_pane_t7_ParamLimits

0x21f9,	// (0x0007f917) area_vitu2_query_pane_t7

0xb86d,	// (0x00088f8b) bg_button_pane_cp018_ParamLimits

0xb87b,	// (0x00088f99) bg_button_pane_cp021_ParamLimits

0xb887,	// (0x00088fa5) bg_button_pane_cp022_ParamLimits

0xb887,	// (0x00088fa5) bg_vkb2_func_pane_cp08_ParamLimits

0xb86d,	// (0x00088f8b) bg_vkb2_func_pane_cp06_ParamLimits

0xb87b,	// (0x00088f99) bg_vkb2_func_pane_cp07_ParamLimits

0xb898,	// (0x00088fb6) input_focus_pane_cp09_ParamLimits

0xbd2c,	// (0x0008944a) cam6_autofocus_pane_ParamLimits

0xbd2c,	// (0x0008944a) cam6_autofocus_pane

0xbd4e,	// (0x0008946c) cam6_image_uncrop_pane_ParamLimits

0xbd4e,	// (0x0008946c) cam6_image_uncrop_pane

0xbd7b,	// (0x00089499) cam6_indi_pane_ParamLimits

0xbd7b,	// (0x00089499) cam6_indi_pane

0xbd95,	// (0x000894b3) cam6_mode_pane_ParamLimits

0xbd95,	// (0x000894b3) cam6_mode_pane

0xbda9,	// (0x000894c7) cam6_timer_pane_ParamLimits

0xbda9,	// (0x000894c7) cam6_timer_pane

0xbdb5,	// (0x000894d3) cam6_zoom_pane_ParamLimits

0xbdb5,	// (0x000894d3) cam6_zoom_pane

0xbdcd,	// (0x000894eb) cam6_mode_pane_g1_ParamLimits

0xbdcd,	// (0x000894eb) cam6_mode_pane_g1

0xbdd9,	// (0x000894f7) cam6_mode_pane_g2_ParamLimits

0xbdd9,	// (0x000894f7) cam6_mode_pane_g2

0xbde5,	// (0x00089503) cam6_mode_pane_g3_ParamLimits

0xbde5,	// (0x00089503) cam6_mode_pane_g3

0xbdf1,	// (0x0008950f) cam6_mode_pane_g4_ParamLimits

0xbdf1,	// (0x0008950f) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0008d294) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0008d294) cam6_mode_pane_g

0x23f9,	// (0x0007fb17) bg_tb_trans_pane_cp08_ParamLimits

0x23f9,	// (0x0007fb17) bg_tb_trans_pane_cp08

0x2407,	// (0x0007fb25) cam6_battery_pane_ParamLimits

0x2407,	// (0x0007fb25) cam6_battery_pane

0x241d,	// (0x0007fb3b) cam6_indi_pane_g1_ParamLimits

0x241d,	// (0x0007fb3b) cam6_indi_pane_g1

0x242f,	// (0x0007fb4d) cam6_indi_pane_g2_ParamLimits

0x242f,	// (0x0007fb4d) cam6_indi_pane_g2

0x2441,	// (0x0007fb5f) cam6_indi_pane_g3_ParamLimits

0x2441,	// (0x0007fb5f) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0008d29d) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0008d29d) cam6_indi_pane_g

0x2453,	// (0x0007fb71) cam6_indi_pane_t1_ParamLimits

0x2453,	// (0x0007fb71) cam6_indi_pane_t1

0xaa3b,	// (0x00088159) cam6_autofocus_pane_g1

0xaa33,	// (0x00088151) cam6_autofocus_pane_g2

0xaa4b,	// (0x00088169) cam6_autofocus_pane_g3

0xaa43,	// (0x00088161) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0008d2a4) cam6_autofocus_pane_g

0x2479,	// (0x0007fb97) cam6_timer_pane_g1

0x2481,	// (0x0007fb9f) cam6_timer_pane_t1

0x248f,	// (0x0007fbad) cam6_zoom_cont_pane

0x2497,	// (0x0007fbb5) cam6_zoom_pane_g1

0x249f,	// (0x0007fbbd) cam6_zoom_pane_g2

0xbdfd,	// (0x0008951b) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0008d2ad) cam6_zoom_pane_g

0x1965,	// (0x0007f083) cam6_battery_pane_g1

0x1965,	// (0x0007f083) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0008ce1e) cam6_battery_pane_g

0x24a7,	// (0x0007fbc5) cam6_zoom_cont_pane_g1

0x24b0,	// (0x0007fbce) cam6_zoom_cont_pane_g2

0x24b9,	// (0x0007fbd7) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0008d2b4) cam6_zoom_cont_pane_g

0xbe1a,	// (0x00089538) cam6_mode_pane_cp_ParamLimits

0xbe1a,	// (0x00089538) cam6_mode_pane_cp

0xbe2e,	// (0x0008954c) cam6_zoom_pane_cp_ParamLimits

0xbe2e,	// (0x0008954c) cam6_zoom_pane_cp

0xbe46,	// (0x00089564) vid6_image_uncrop_cif_pane_ParamLimits

0xbe46,	// (0x00089564) vid6_image_uncrop_cif_pane

0xbe72,	// (0x00089590) vid6_image_uncrop_nhd_pane_ParamLimits

0xbe72,	// (0x00089590) vid6_image_uncrop_nhd_pane

0xbe8f,	// (0x000895ad) vid6_image_uncrop_vga_pane_ParamLimits

0xbe8f,	// (0x000895ad) vid6_image_uncrop_vga_pane

0xbeae,	// (0x000895cc) vid6_image_uncrop_wvga_pane_ParamLimits

0xbeae,	// (0x000895cc) vid6_image_uncrop_wvga_pane

0xbecb,	// (0x000895e9) vid6_indi_pane_ParamLimits

0xbecb,	// (0x000895e9) vid6_indi_pane

0x23f9,	// (0x0007fb17) bg_tb_trans_pane_cp09_ParamLimits

0x23f9,	// (0x0007fb17) bg_tb_trans_pane_cp09

0x24d1,	// (0x0007fbef) cam6_battery_pane_cp_ParamLimits

0x24d1,	// (0x0007fbef) cam6_battery_pane_cp

0x24dd,	// (0x0007fbfb) vid6_indi_pane_g1_ParamLimits

0x24dd,	// (0x0007fbfb) vid6_indi_pane_g1

0x24ef,	// (0x0007fc0d) vid6_indi_pane_g2_ParamLimits

0x24ef,	// (0x0007fc0d) vid6_indi_pane_g2

0x2501,	// (0x0007fc1f) vid6_indi_pane_g3_ParamLimits

0x2501,	// (0x0007fc1f) vid6_indi_pane_g3

0x2516,	// (0x0007fc34) vid6_indi_pane_g4_ParamLimits

0x2516,	// (0x0007fc34) vid6_indi_pane_g4

0x252b,	// (0x0007fc49) vid6_indi_pane_g5_ParamLimits

0x252b,	// (0x0007fc49) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0008d2bb) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0008d2bb) vid6_indi_pane_g

0x2545,	// (0x0007fc63) vid6_indi_pane_t1_ParamLimits

0x2545,	// (0x0007fc63) vid6_indi_pane_t1

0x255b,	// (0x0007fc79) vid6_indi_pane_t2_ParamLimits

0x255b,	// (0x0007fc79) vid6_indi_pane_t2

0x2583,	// (0x0007fca1) vid6_indi_pane_t3_ParamLimits

0x2583,	// (0x0007fca1) vid6_indi_pane_t3

0x25ab,	// (0x0007fcc9) vid6_indi_pane_t4_ParamLimits

0x25ab,	// (0x0007fcc9) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0008d2c6) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0008d2c6) vid6_indi_pane_t

0x25cf,	// (0x0007fced) wait_bar_pane_cp08

0xbef0,	// (0x0008960e) main_cset_text2_pane_t1_ParamLimits

0xbef0,	// (0x0008960e) main_cset_text2_pane_t1

0xbe05,	// (0x00089523) listscroll_gen_pane_cp06_t1_ParamLimits

0xbe05,	// (0x00089523) listscroll_gen_pane_cp06_t1

0x039e,	// (0x0007dabc) main_cam6_set_pane

0xa8c6,	// (0x00087fe4) bg_tb_trans_pane_cp06_ParamLimits

0xa8dc,	// (0x00087ffa) cam4_indicators_pane_g1_ParamLimits

0xa8ed,	// (0x0008800b) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0008d034) cam4_indicators_pane_g_ParamLimits

0xa90b,	// (0x00088029) cam4_indicators_pane_t1_ParamLimits

0xa9b3,	// (0x000880d1) bg_tb_trans_pane_cp07_ParamLimits

0xa9cb,	// (0x000880e9) vid4_indicators_pane_g1_ParamLimits

0xa9dc,	// (0x000880fa) vid4_indicators_pane_g2_ParamLimits

0xa9ed,	// (0x0008810b) vid4_indicators_pane_g3_ParamLimits

0xa9fe,	// (0x0008811c) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0008d046) vid4_indicators_pane_g_ParamLimits

0xaa1a,	// (0x00088138) vid4_indicators_pane_t1_ParamLimits

0xb9c9,	// (0x000890e7) vid4_progress_pane_g1_ParamLimits

0xb9d9,	// (0x000890f7) vid4_progress_pane_g2_ParamLimits

0xe0e9,	// (0x0008b807) vid4_progress_pane_g3_ParamLimits

0xb9e9,	// (0x00089107) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0008d1f7) vid4_progress_pane_g_ParamLimits

0xba07,	// (0x00089125) vid4_progress_pane_t1_ParamLimits

0xba1c,	// (0x0008913a) vid4_progress_pane_t2_ParamLimits

0xba32,	// (0x00089150) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0008d202) vid4_progress_pane_t_ParamLimits

0xba47,	// (0x00089165) wait_bar_pane_cp07_ParamLimits

0xbf23,	// (0x00089641) main_cam6_set_pane_g2_ParamLimits

0xbf23,	// (0x00089641) main_cam6_set_pane_g2

0xbf2f,	// (0x0008964d) main_cset6_listscroll_pane_ParamLimits

0xbf2f,	// (0x0008964d) main_cset6_listscroll_pane

0xbf5a,	// (0x00089678) main_cset6_slider_pane_ParamLimits

0xbf5a,	// (0x00089678) main_cset6_slider_pane

0xbf66,	// (0x00089684) main_cset6_text2_pane_ParamLimits

0xbf66,	// (0x00089684) main_cset6_text2_pane

0x25de,	// (0x0007fcfc) main_cset6_text_pane

0x25e6,	// (0x0007fd04) main_cset_list_pane_copy1_ParamLimits

0x25e6,	// (0x0007fd04) main_cset_list_pane_copy1

0x25f6,	// (0x0007fd14) scroll_pane_cp028_copy1

0xbf79,	// (0x00089697) cset_list_set_pane_copy1

0xbf8c,	// (0x000896aa) aid_position_infowindow_above_copy1

0xbf94,	// (0x000896b2) aid_position_infowindow_below_copy1

0xbf9c,	// (0x000896ba) cset_list_set_pane_g1_copy1

0x211c,	// (0x0007f83a) cset_list_set_pane_g3_copy1_ParamLimits

0x211c,	// (0x0007f83a) cset_list_set_pane_g3_copy1

0x212b,	// (0x0007f849) cset_list_set_pane_t1_copy1_ParamLimits

0x212b,	// (0x0007f849) cset_list_set_pane_t1_copy1

0x4167,	// (0x00081885) list_highlight_pane_cp021_copy1_ParamLimits

0x4167,	// (0x00081885) list_highlight_pane_cp021_copy1

0x25ff,	// (0x0007fd1d) cset6_slider_pane_ParamLimits

0x25ff,	// (0x0007fd1d) cset6_slider_pane

0x262b,	// (0x0007fd49) main_cset6_slider_pane_g1_ParamLimits

0x262b,	// (0x0007fd49) main_cset6_slider_pane_g1

0xbfa4,	// (0x000896c2) main_cset6_slider_pane_g2_ParamLimits

0xbfa4,	// (0x000896c2) main_cset6_slider_pane_g2

0x2653,	// (0x0007fd71) main_cset6_slider_pane_g3_ParamLimits

0x2653,	// (0x0007fd71) main_cset6_slider_pane_g3

0xbfcc,	// (0x000896ea) main_cset6_slider_pane_g4_ParamLimits

0xbfcc,	// (0x000896ea) main_cset6_slider_pane_g4

0xbfd8,	// (0x000896f6) main_cset6_slider_pane_g5_ParamLimits

0xbfd8,	// (0x000896f6) main_cset6_slider_pane_g5

0xed4c,	// (0x0008c46a) main_cset6_slider_pane_g7_ParamLimits

0xed4c,	// (0x0008c46a) main_cset6_slider_pane_g7

0xed58,	// (0x0008c476) main_cset6_slider_pane_g8_ParamLimits

0xed58,	// (0x0008c476) main_cset6_slider_pane_g8

0xbfe6,	// (0x00089704) main_cset6_slider_pane_g9_ParamLimits

0xbfe6,	// (0x00089704) main_cset6_slider_pane_g9

0xbff2,	// (0x00089710) main_cset6_slider_pane_g10_ParamLimits

0xbff2,	// (0x00089710) main_cset6_slider_pane_g10

0xbffe,	// (0x0008971c) main_cset6_slider_pane_g11_ParamLimits

0xbffe,	// (0x0008971c) main_cset6_slider_pane_g11

0xc00a,	// (0x00089728) main_cset6_slider_pane_g12_ParamLimits

0xc00a,	// (0x00089728) main_cset6_slider_pane_g12

0xc016,	// (0x00089734) main_cset6_slider_pane_g13_ParamLimits

0xc016,	// (0x00089734) main_cset6_slider_pane_g13

0xc022,	// (0x00089740) main_cset6_slider_pane_g14_ParamLimits

0xc022,	// (0x00089740) main_cset6_slider_pane_g14

0xc02e,	// (0x0008974c) main_cset6_slider_pane_g15_ParamLimits

0xc02e,	// (0x0008974c) main_cset6_slider_pane_g15

0xc046,	// (0x00089764) main_cset6_slider_pane_g16_ParamLimits

0xc046,	// (0x00089764) main_cset6_slider_pane_g16

0xc054,	// (0x00089772) main_cset6_slider_pane_g17_ParamLimits

0xc054,	// (0x00089772) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0008d2cf) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0008d2cf) main_cset6_slider_pane_g

0x265f,	// (0x0007fd7d) main_cset6_slider_pane_t1_ParamLimits

0x265f,	// (0x0007fd7d) main_cset6_slider_pane_t1

0xc07a,	// (0x00089798) main_cset6_slider_pane_t2_ParamLimits

0xc07a,	// (0x00089798) main_cset6_slider_pane_t2

0xc0a5,	// (0x000897c3) main_cset6_slider_pane_t3_ParamLimits

0xc0a5,	// (0x000897c3) main_cset6_slider_pane_t3

0xc0d0,	// (0x000897ee) main_cset6_slider_pane_t4_ParamLimits

0xc0d0,	// (0x000897ee) main_cset6_slider_pane_t4

0xc0fb,	// (0x00089819) main_cset6_slider_pane_t5_ParamLimits

0xc0fb,	// (0x00089819) main_cset6_slider_pane_t5

0x26a0,	// (0x0007fdbe) main_cset6_slider_pane_t7_ParamLimits

0x26a0,	// (0x0007fdbe) main_cset6_slider_pane_t7

0xc128,	// (0x00089846) main_cset6_slider_pane_t8_ParamLimits

0xc128,	// (0x00089846) main_cset6_slider_pane_t8

0xc14c,	// (0x0008986a) main_cset6_slider_pane_t9_ParamLimits

0xc14c,	// (0x0008986a) main_cset6_slider_pane_t9

0xc170,	// (0x0008988e) main_cset6_slider_pane_t10_ParamLimits

0xc170,	// (0x0008988e) main_cset6_slider_pane_t10

0xc194,	// (0x000898b2) main_cset6_slider_pane_t11_ParamLimits

0xc194,	// (0x000898b2) main_cset6_slider_pane_t11

0x26d6,	// (0x0007fdf4) main_cset6_slider_pane_t14_ParamLimits

0x26d6,	// (0x0007fdf4) main_cset6_slider_pane_t14

0x270f,	// (0x0007fe2d) main_cset6_slider_pane_t15_ParamLimits

0x270f,	// (0x0007fe2d) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0008d2f4) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0008d2f4) main_cset6_slider_pane_t

0x2140,	// (0x0007f85e) cset_slider_pane_g1_copy1

0x2149,	// (0x0007f867) cset_slider_pane_g2_copy1

0x2152,	// (0x0007f870) cset_slider_pane_g3_copy1

0x039e,	// (0x0007dabc) bg_popup_sub_pane_cp011_copy1

0xee8a,	// (0x0008c5a8) main_cset_text_pane_g1_copy1

0xee92,	// (0x0008c5b0) main_cset_text_pane_t1_copy1

0xeea0,	// (0x0008c5be) main_cset_text_pane_t2_copy1

0xeeae,	// (0x0008c5cc) main_cset_text_pane_t3_copy1

0xeebc,	// (0x0008c5da) main_cset_text_pane_t4_copy1

0xeeca,	// (0x0008c5e8) main_cset_text_pane_t5_copy1

0xeed8,	// (0x0008c5f6) main_cset_text_pane_t6_copy1

0xeee6,	// (0x0008c604) main_cset_text_pane_t7_copy1

0xc1b8,	// (0x000898d6) main_cset_text2_pane_t1_copy1

0x039e,	// (0x0007dabc) main_ncimui_pane

0x89ff,	// (0x0008611d) popup_query_ncimui_window_ParamLimits

0x89ff,	// (0x0008611d) popup_query_ncimui_window

0x1c36,	// (0x0007f354) field_cale_ev2_pane_g4_ParamLimits

0x1c36,	// (0x0007f354) field_cale_ev2_pane_g4

0xa257,	// (0x00087975) cell_video_dialer_keypad_pane_g2_ParamLimits

0xa257,	// (0x00087975) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0008cfd2) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0008cfd2) cell_video_dialer_keypad_pane_g

0xa26f,	// (0x0008798d) cell_video_dialer_keypad_pane_t1

0x039e,	// (0x0007dabc) bg_popup_window_pane_cp012

0xe2c3,	// (0x0008b9e1) heading_pane_cp06

0x2837,	// (0x0007ff55) ncim_query_content_pane

0x039e,	// (0x0007dabc) bg_popup_heading_pane_cp01

0x283f,	// (0x0007ff5d) ncim_heading_pane_t1

0x284d,	// (0x0007ff6b) ncim_indicator_popup_pane

0x285f,	// (0x0007ff7d) ncim_query_button_pane

0x2873,	// (0x0007ff91) ncim_query_content_pane_t1

0x2885,	// (0x0007ffa3) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0008d333) ncim_query_content_pane_t

0x28bf,	// (0x0007ffdd) ncim_query_list_pane

0x28d1,	// (0x0007ffef) ncim_query_popup_pane

0x284d,	// (0x0007ff6b) ncim_indicator_popup_pane_ParamLimits

0xc2da,	// (0x000899f8) ncim_query_content_pane_g1_ParamLimits

0xc2da,	// (0x000899f8) ncim_query_content_pane_g1

0x2873,	// (0x0007ff91) ncim_query_content_pane_t1_ParamLimits

0x2885,	// (0x0007ffa3) ncim_query_content_pane_t2_ParamLimits

0xc2e6,	// (0x00089a04) ncim_query_content_pane_t3_ParamLimits

0xc2e6,	// (0x00089a04) ncim_query_content_pane_t3

0xc303,	// (0x00089a21) ncim_query_content_pane_t4_ParamLimits

0xc303,	// (0x00089a21) ncim_query_content_pane_t4

0xc320,	// (0x00089a3e) ncim_query_content_pane_t5_ParamLimits

0xc320,	// (0x00089a3e) ncim_query_content_pane_t5

0x2897,	// (0x0007ffb5) ncim_query_content_pane_t6_ParamLimits

0x2897,	// (0x0007ffb5) ncim_query_content_pane_t6

0xfc15,	// (0x0008d333) ncim_query_content_pane_t_ParamLimits

0x28bf,	// (0x0007ffdd) ncim_query_list_pane_ParamLimits

0x28d1,	// (0x0007ffef) ncim_query_popup_pane_ParamLimits

0x28e5,	// (0x00080003) wait_bar_pane_cp04

0x039e,	// (0x0007dabc) input_focus_pane_cp011

0x28ed,	// (0x0008000b) ncim_query_popup_pane_t1

0x28fb,	// (0x00080019) ncim_list_query_list_pane_ParamLimits

0x28fb,	// (0x00080019) ncim_list_query_list_pane

0x039e,	// (0x0007dabc) bg_button_pane_cp027

0x2908,	// (0x00080026) ncim_query_button_pane_g1

0x039e,	// (0x0007dabc) list_highlight_pane_cp012

0x2912,	// (0x00080030) ncim_list_query_list_pane_g1

0x291a,	// (0x00080038) ncim_list_query_list_pane_t1

0xa8fc,	// (0x0008801a) cam4_indicators_pane_g3_ParamLimits

0xa8fc,	// (0x0008801a) cam4_indicators_pane_g3

0xaa0a,	// (0x00088128) vid4_indicators_pane_g5_ParamLimits

0xaa0a,	// (0x00088128) vid4_indicators_pane_g5

0xb9f8,	// (0x00089116) vid4_progress_pane_g5_ParamLimits

0xb9f8,	// (0x00089116) vid4_progress_pane_g5

0xc1f3,	// (0x00089911) main_ncimui_pane_g1

0xc249,	// (0x00089967) ncimui_group_query_pane_ParamLimits

0xc249,	// (0x00089967) ncimui_group_query_pane

0xc285,	// (0x000899a3) ncimui_list_pane_ParamLimits

0xc285,	// (0x000899a3) ncimui_list_pane

0xc2a6,	// (0x000899c4) ncimui_text_pane_ParamLimits

0xc2a6,	// (0x000899c4) ncimui_text_pane

0xc33d,	// (0x00089a5b) ncimui_text_pane_t1_ParamLimits

0xc33d,	// (0x00089a5b) ncimui_text_pane_t1

0x2928,	// (0x00080046) ncimui_list_single_graphic_pane_ParamLimits

0x2928,	// (0x00080046) ncimui_list_single_graphic_pane

0xc35c,	// (0x00089a7a) ncimui_query_pane_ParamLimits

0xc35c,	// (0x00089a7a) ncimui_query_pane

0x039e,	// (0x0007dabc) list_highlight_pane_cp013

0x2938,	// (0x00080056) ncim_list_query_list_pane_t1_copy1

0x2912,	// (0x00080030) ncim_list_single_graphic_pane_g1

0x2946,	// (0x00080064) ncim_query_button_pane_cp01

0x2952,	// (0x00080070) ncim_query_entry_pane_ParamLimits

0x2952,	// (0x00080070) ncim_query_entry_pane

0x2965,	// (0x00080083) ncimui_query_pane_g1

0x2971,	// (0x0008008f) ncimui_query_pane_t1_ParamLimits

0x2971,	// (0x0008008f) ncimui_query_pane_t1

0x4167,	// (0x00081885) input_focus_pane_cp012

0x298a,	// (0x000800a8) ncim_query_entry_pane_t1

0x4923,	// (0x00082041) main_im_pane_ParamLimits

0x4167,	// (0x00081885) main_mobtv_pane_ParamLimits

0x4167,	// (0x00081885) main_mobtv_pane

0xc062,	// (0x00089780) main_cset6_slider_pane_g18_ParamLimits

0xc062,	// (0x00089780) main_cset6_slider_pane_g18

0xc06e,	// (0x0008978c) main_cset6_slider_pane_g19_ParamLimits

0xc06e,	// (0x0008978c) main_cset6_slider_pane_g19

0x42a4,	// (0x000819c2) bg_main_mobtv_pane_ParamLimits

0x42a4,	// (0x000819c2) bg_main_mobtv_pane

0xc36f,	// (0x00089a8d) main_mobtv_info_pane

0xc37a,	// (0x00089a98) main_mobtv_loading_pane_ParamLimits

0xc37a,	// (0x00089a98) main_mobtv_loading_pane

0x29aa,	// (0x000800c8) main_mobtv_pg_channel_list_pane

0x29b4,	// (0x000800d2) main_mobtv_pg_hdr_pane

0xc387,	// (0x00089aa5) main_mobtv_programe_curr_pane_ParamLimits

0xc387,	// (0x00089aa5) main_mobtv_programe_curr_pane

0xc394,	// (0x00089ab2) main_mobtv_programe_next_pane_ParamLimits

0xc394,	// (0x00089ab2) main_mobtv_programe_next_pane

0x29bd,	// (0x000800db) popup_mobtv_noti_window

0x1965,	// (0x0007f083) main_tv_pg_hdr_pane_g1

0x29c5,	// (0x000800e3) main_tv_pg_hdr_pane_g2

0x29cd,	// (0x000800eb) main_tv_pg_hdr_pane_g3

0x29d5,	// (0x000800f3) main_tv_pg_hdr_pane_g4

0x29dd,	// (0x000800fb) main_tv_pg_hdr_pane_g5

0x29e7,	// (0x00080105) main_tv_pg_hdr_pane_g6

0x29f1,	// (0x0008010f) main_tv_pg_hdr_pane_g7

0x29fb,	// (0x00080119) main_tv_pg_hdr_pane_g8

0x2a05,	// (0x00080123) main_tv_pg_hdr_pane_g9

0x2a0f,	// (0x0008012d) main_tv_pg_hdr_pane_g10

0x2a19,	// (0x00080137) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0008d340) main_tv_pg_hdr_pane_g

0x2a23,	// (0x00080141) main_tv_pg_hdr_pane_t1

0x2a31,	// (0x0008014f) main_tv_pg_hdr_pane_t2

0x2a3f,	// (0x0008015d) main_tv_pg_hdr_pane_t3

0x2a4f,	// (0x0008016d) main_tv_pg_hdr_pane_t4

0x2a5f,	// (0x0008017d) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0008d357) main_tv_pg_hdr_pane_t

0x2a6f,	// (0x0008018d) single_mobtv_pg_channel_pane_ParamLimits

0x2a6f,	// (0x0008018d) single_mobtv_pg_channel_pane

0x2a81,	// (0x0008019f) single_mobtv_pg_channel_table_pane

0x2a8a,	// (0x000801a8) single_mobtv_pg_channel_thumb_pane

0x2a93,	// (0x000801b1) single_tv_pg_channel_pane_g1

0x2a9c,	// (0x000801ba) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0008d362) single_tv_pg_channel_pane_g

0x1bd1,	// (0x0007f2ef) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x1bd1,	// (0x0007f2ef) bg_single_mobtv_pg_channel_thumb_pane

0x2aa5,	// (0x000801c3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x2aa5,	// (0x000801c3) single_mobtv_pg_channel_thumb_pane_g1

0x2ab3,	// (0x000801d1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x2ab3,	// (0x000801d1) single_mobtv_pg_channel_thumb_pane_g2

0x2abf,	// (0x000801dd) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2abf,	// (0x000801dd) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0008d367) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0008d367) single_mobtv_pg_channel_thumb_pane_g

0x2acb,	// (0x000801e9) single_mobtv_pg_channel_thumb_pane_t1

0x2ad9,	// (0x000801f7) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0008d36e) single_mobtv_pg_channel_thumb_pane_t

0x1965,	// (0x0007f083) bg_single_mobtv_pg_channel_table_pane_g1

0x1965,	// (0x0007f083) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0008ce1e) bg_single_mobtv_pg_channel_table_pane_g

0x2ae7,	// (0x00080205) single_mobtv_pg_channel_table_pane_t1

0x2af5,	// (0x00080213) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0008d373) single_mobtv_pg_channel_table_pane_t

0xc3a9,	// (0x00089ac7) main_mobtv_info_pane_g1_ParamLimits

0xc3a9,	// (0x00089ac7) main_mobtv_info_pane_g1

0xc3c5,	// (0x00089ae3) main_mobtv_info_pane_t1_ParamLimits

0xc3c5,	// (0x00089ae3) main_mobtv_info_pane_t1

0xc43d,	// (0x00089b5b) main_mobtv_info_pane_t2_ParamLimits

0xc43d,	// (0x00089b5b) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0008d37d) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0008d37d) main_mobtv_info_pane_t

0xc4cc,	// (0x00089bea) wait_bar_pane_cp05

0xc4de,	// (0x00089bfc) main_mobtv_loading_pane_g1_ParamLimits

0xc4de,	// (0x00089bfc) main_mobtv_loading_pane_g1

0xc4ec,	// (0x00089c0a) main_mobtv_loading_pane_g2_ParamLimits

0xc4ec,	// (0x00089c0a) main_mobtv_loading_pane_g2

0xc4f8,	// (0x00089c16) main_mobtv_loading_pane_g3_ParamLimits

0xc4f8,	// (0x00089c16) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0008d384) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0008d384) main_mobtv_loading_pane_g

0x2b03,	// (0x00080221) main_mobtv_loading_pane_t1_ParamLimits

0x2b03,	// (0x00080221) main_mobtv_loading_pane_t1

0x2b1b,	// (0x00080239) main_mobtv_loading_pane_t2_ParamLimits

0x2b1b,	// (0x00080239) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0008d38b) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0008d38b) main_mobtv_loading_pane_t

0xc506,	// (0x00089c24) wait_bar_pane_cp06_ParamLimits

0xc506,	// (0x00089c24) wait_bar_pane_cp06

0x2b3f,	// (0x0008025d) main_mobtv_programe_curr_pane_t1

0x2b4d,	// (0x0008026b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0008d390) main_mobtv_programe_curr_pane_t

0x2b5b,	// (0x00080279) main_mobtv_programe_next_pane_t1

0x2b69,	// (0x00080287) main_mobtv_programe_next_pane_t2

0x2b77,	// (0x00080295) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0008d395) main_mobtv_programe_next_pane_t

0x039e,	// (0x0007dabc) bg_popup_mobtv_noti_window_pane

0x2b85,	// (0x000802a3) popup_mobtv_noti_window_g1

0x2b8d,	// (0x000802ab) popup_mobtv_noti_window_t1

0x2b9b,	// (0x000802b9) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0008d39c) popup_mobtv_noti_window_t

0x1965,	// (0x0007f083) bg_popup_mobtv_noti_window_pane_g1

0x039e,	// (0x0007dabc) sc_clock_pane

0x039e,	// (0x0007dabc) main_fs_bigclock_pane

0xbbdf,	// (0x000892fd) blid2_tripm_pane_t4_ParamLimits

0xbbdf,	// (0x000892fd) blid2_tripm_pane_t4

0xc512,	// (0x00089c30) sc_clock_pane_g1_ParamLimits

0xc512,	// (0x00089c30) sc_clock_pane_g1

0xc520,	// (0x00089c3e) sc_clock_pane_t1_ParamLimits

0xc520,	// (0x00089c3e) sc_clock_pane_t1

0xc533,	// (0x00089c51) sc_clock_pane_t2_ParamLimits

0xc533,	// (0x00089c51) sc_clock_pane_t2

0xc545,	// (0x00089c63) sc_clock_pane_t3_ParamLimits

0xc545,	// (0x00089c63) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0008d3a1) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0008d3a1) sc_clock_pane_t

0xd34f,	// (0x0008aa6d) main_fs_bigclock_indicator_pane_ParamLimits

0xd34f,	// (0x0008aa6d) main_fs_bigclock_indicator_pane

0xc5e3,	// (0x00089d01) main_fs_bigclock_pane_g1_ParamLimits

0xc5e3,	// (0x00089d01) main_fs_bigclock_pane_g1

0xd35b,	// (0x0008aa79) main_fs_bigclock_pane_t1_ParamLimits

0xd35b,	// (0x0008aa79) main_fs_bigclock_pane_t1

0xd36d,	// (0x0008aa8b) main_fs_bigclock_pane_t2_ParamLimits

0xd36d,	// (0x0008aa8b) main_fs_bigclock_pane_t2

0xd381,	// (0x0008aa9f) main_fs_bigclock_pane_t3_ParamLimits

0xd381,	// (0x0008aa9f) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0008d5a0) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0008d5a0) main_fs_bigclock_pane_t

0x3643,	// (0x00080d61) main_fs_bigclock_indicator_pane_g1

0x2867,	// (0x0007ff85) ncim_query_content_pane_g2_ParamLimits

0x2867,	// (0x0007ff85) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0008d32e) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0008d32e) ncim_query_content_pane_g

0xc559,	// (0x00089c77) sc_clock_pane_t4_ParamLimits

0xc559,	// (0x00089c77) sc_clock_pane_t4

0x4167,	// (0x00081885) main_radioblah_pane

0x40fb,	// (0x00081819) cell_call4_button_pane_t1_copy1_ParamLimits

0x40fb,	// (0x00081819) cell_call4_button_pane_t1_copy1

0xc1fb,	// (0x00089919) main_ncimui_pane_t1_ParamLimits

0xc1fb,	// (0x00089919) main_ncimui_pane_t1

0xc215,	// (0x00089933) main_ncimui_pane_t2_ParamLimits

0xc215,	// (0x00089933) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0008d327) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0008d327) main_ncimui_pane_t

0x2ba9,	// (0x000802c7) main_radioblah_anim_pane_ParamLimits

0x2ba9,	// (0x000802c7) main_radioblah_anim_pane

0x2bba,	// (0x000802d8) main_radioblah_info_pane_ParamLimits

0x2bba,	// (0x000802d8) main_radioblah_info_pane

0x2bce,	// (0x000802ec) main_radioblah_pane_t1_ParamLimits

0x2bce,	// (0x000802ec) main_radioblah_pane_t1

0x2bea,	// (0x00080308) main_radioblah_pane_t2_ParamLimits

0x2bea,	// (0x00080308) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0008d3c2) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0008d3c2) main_radioblah_pane_t

0xc75c,	// (0x00089e7a) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc75c,	// (0x00089e7a) main_radioblah_rocker_ctrl_pane

0x2c32,	// (0x00080350) main_radioblah_info_pane_t1_ParamLimits

0x2c32,	// (0x00080350) main_radioblah_info_pane_t1

0xc7a1,	// (0x00089ebf) main_radioblah_info_pane_t2_ParamLimits

0xc7a1,	// (0x00089ebf) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0008d3cb) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0008d3cb) main_radioblah_info_pane_t

0x1965,	// (0x0007f083) main_radioblah_rocker_ctrl_pane_g1

0xc851,	// (0x00089f6f) main_radioblah_rocker_ctrl_pane_g2

0xc859,	// (0x00089f77) main_radioblah_rocker_ctrl_pane_g3

0xc861,	// (0x00089f7f) main_radioblah_rocker_ctrl_pane_g4

0xc869,	// (0x00089f87) main_radioblah_rocker_ctrl_pane_g5

0xc871,	// (0x00089f8f) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0008d3d4) main_radioblah_rocker_ctrl_pane_g

0xc1b8,	// (0x000898d6) main_cset_text2_pane_t1_copy1_ParamLimits

0xa81c,	// (0x00087f3a) cam4_image_uncrop_qvga_pane

0xa971,	// (0x0008808f) vid4_image_uncrop_qcif_pane

0xbd6d,	// (0x0008948b) cam6_image_uncrop_qvga_pane_ParamLimits

0xbd6d,	// (0x0008948b) cam6_image_uncrop_qvga_pane

0x24c1,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane_ParamLimits

0x24c1,	// (0x0007fbdf) vid6_image_uncrop_qcif_pane

0x039e,	// (0x0007dabc) bg_popup_preview_window_pane_cp03

0x2819,	// (0x0007ff37) list_cset_text2_pane

0x2821,	// (0x0007ff3f) main_cset6_text2_pane_g1

0x2829,	// (0x0007ff47) main_cset6_text2_pane_t1

0x3a0f,	// (0x0008112d) list_cset_text2_pane_t1_ParamLimits

0x3a0f,	// (0x0008112d) list_cset_text2_pane_t1

0x4167,	// (0x00081885) main_radioblah_pane_ParamLimits

0xc4b8,	// (0x00089bd6) main_mobtv_info_pane_t3_ParamLimits

0xc4b8,	// (0x00089bd6) main_mobtv_info_pane_t3

0xc74a,	// (0x00089e68) main_radioblah_pane_g1

0xc775,	// (0x00089e93) main_radioblah_info_pane_g1

0xc7f6,	// (0x00089f14) main_radioblah_info_pane_t3_ParamLimits

0xc7f6,	// (0x00089f14) main_radioblah_info_pane_t3

0x767a,	// (0x00084d98) highlight_cell_cale_month_pane_ParamLimits

0x767a,	// (0x00084d98) highlight_cell_cale_month_pane

0x039e,	// (0x0007dabc) main_phob_fisheye_pane

0x1ceb,	// (0x0007f409) scroll_pane_cp0031_ParamLimits

0x1ceb,	// (0x0007f409) scroll_pane_cp0031

0x25cf,	// (0x0007fced) wait_bar_pane_cp08_ParamLimits

0xbf79,	// (0x00089697) cset_list_set_pane_copy1_ParamLimits

0x2c6c,	// (0x0008038a) highlight_cell_cale_month_pane_g1

0xc879,	// (0x00089f97) highlight_cell_cale_month_pane_t1

0xf0b2,	// (0x0008c7d0) list_gen_pane_cp01

0xed37,	// (0x0008c455) scroll_pane_01

0xc887,	// (0x00089fa5) list_single_double_fisheye_pane

0xc890,	// (0x00089fae) list_double_fisheye_pane_g1_ParamLimits

0xc890,	// (0x00089fae) list_double_fisheye_pane_g1

0xc89c,	// (0x00089fba) list_double_fisheye_pane_g2_ParamLimits

0xc89c,	// (0x00089fba) list_double_fisheye_pane_g2

0xc8b0,	// (0x00089fce) list_double_fisheye_pane_g3_ParamLimits

0xc8b0,	// (0x00089fce) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0008d3e1) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0008d3e1) list_double_fisheye_pane_g

0xc8d9,	// (0x00089ff7) list_double_fisheye_pane_t1_ParamLimits

0xc8d9,	// (0x00089ff7) list_double_fisheye_pane_t1

0xc8f4,	// (0x0008a012) list_double_fisheye_pane_t2_ParamLimits

0xc8f4,	// (0x0008a012) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0008d3ec) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0008d3ec) list_double_fisheye_pane_t

0x039e,	// (0x0007dabc) main_call5_pane

0xc57f,	// (0x00089c9d) sc_swipe_pane_ParamLimits

0xc57f,	// (0x00089c9d) sc_swipe_pane

0xc922,	// (0x0008a040) call5_image_pane_ParamLimits

0xc922,	// (0x0008a040) call5_image_pane

0xc932,	// (0x0008a050) call5_swipe_1_pane_ParamLimits

0xc932,	// (0x0008a050) call5_swipe_1_pane

0xc93e,	// (0x0008a05c) call5_swipe_2_pane_ParamLimits

0xc93e,	// (0x0008a05c) call5_swipe_2_pane

0xc958,	// (0x0008a076) popup_call5_audio_first_window_ParamLimits

0xc958,	// (0x0008a076) popup_call5_audio_first_window

0x1bd1,	// (0x0007f2ef) call5_swipe_1_pane_g1_ParamLimits

0x1bd1,	// (0x0007f2ef) call5_swipe_1_pane_g1

0x2c74,	// (0x00080392) call5_swipe_1_pane_g2_ParamLimits

0x2c74,	// (0x00080392) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0008d3f1) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0008d3f1) call5_swipe_1_pane_g

0x2c80,	// (0x0008039e) call5_swipe_1_pane_t1_ParamLimits

0x2c80,	// (0x0008039e) call5_swipe_1_pane_t1

0x1bd1,	// (0x0007f2ef) call5_swipe_2_pane_g1_ParamLimits

0x1bd1,	// (0x0007f2ef) call5_swipe_2_pane_g1

0x2c95,	// (0x000803b3) call5_swipe_2_pane_g2_ParamLimits

0x2c95,	// (0x000803b3) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0008d3f6) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0008d3f6) call5_swipe_2_pane_g

0x2ca1,	// (0x000803bf) call5_swipe_2_pane_t1_ParamLimits

0x2ca1,	// (0x000803bf) call5_swipe_2_pane_t1

0x2cb6,	// (0x000803d4) sc_swipe_pane_g1_ParamLimits

0x2cb6,	// (0x000803d4) sc_swipe_pane_g1

0x2cc3,	// (0x000803e1) sc_swipe_pane_g2_ParamLimits

0x2cc3,	// (0x000803e1) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0008d3fb) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0008d3fb) sc_swipe_pane_g

0x2ccf,	// (0x000803ed) sc_swipe_pane_t1_ParamLimits

0x2ccf,	// (0x000803ed) sc_swipe_pane_t1

0x039e,	// (0x0007dabc) main_cmail_launcher_pane

0xc966,	// (0x0008a084) aid_size_cell_cmail_l_ParamLimits

0xc966,	// (0x0008a084) aid_size_cell_cmail_l

0xc976,	// (0x0008a094) grid_cmail_l_pane_ParamLimits

0xc976,	// (0x0008a094) grid_cmail_l_pane

0xc986,	// (0x0008a0a4) cell_cmail_l_pane_ParamLimits

0xc986,	// (0x0008a0a4) cell_cmail_l_pane

0xc99a,	// (0x0008a0b8) cell_cmail_l_pane_g1_ParamLimits

0xc99a,	// (0x0008a0b8) cell_cmail_l_pane_g1

0xc9a6,	// (0x0008a0c4) cell_cmail_l_pane_t1_ParamLimits

0xc9a6,	// (0x0008a0c4) cell_cmail_l_pane_t1

0x2ce4,	// (0x00080402) cell_cmail_l_pane_t2_ParamLimits

0x2ce4,	// (0x00080402) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0008d400) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0008d400) cell_cmail_l_pane_t

0x4167,	// (0x00081885) grid_highlight_pane_cp018_ParamLimits

0x4167,	// (0x00081885) grid_highlight_pane_cp018

0x5a03,	// (0x00083121) main2_pane_ParamLimits

0x5a03,	// (0x00083121) main2_pane

0x49bc,	// (0x000820da) popup_sp_fs_action_menu_bg_pane_g1

0x49c4,	// (0x000820e2) popup_sp_fs_action_menu_bg_pane_g2

0x49cc,	// (0x000820ea) popup_sp_fs_action_menu_bg_pane_g3

0x49d4,	// (0x000820f2) popup_sp_fs_action_menu_bg_pane_g4

0x49dc,	// (0x000820fa) popup_sp_fs_action_menu_bg_pane_g5

0x49e4,	// (0x00082102) popup_sp_fs_action_menu_bg_pane_g6

0x49ec,	// (0x0008210a) popup_sp_fs_action_menu_bg_pane_g7

0x49f4,	// (0x00082112) popup_sp_fs_action_menu_bg_pane_g8

0x49fc,	// (0x0008211a) popup_sp_fs_action_menu_bg_pane_g9

0x4a04,	// (0x00082122) popup_sp_fs_action_menu_bg_pane_g10

0x4a04,	// (0x00082122) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0008c8ca) popup_sp_fs_action_menu_bg_pane_g

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t3_g3_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t3_g3_g1

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t3_g3_g2_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t3_g3_g2

0x0508,	// (0x0007dc26) list_medium_line_x2_t3_g3_g3_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0008c97a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0008c97a) list_medium_line_x2_t3_g3_g

0x0514,	// (0x0007dc32) list_medium_line_x2_t3_g3_t1_ParamLimits

0x0514,	// (0x0007dc32) list_medium_line_x2_t3_g3_t1

0x6801,	// (0x00083f1f) list_medium_line_x2_t3_g3_t2_ParamLimits

0x6801,	// (0x00083f1f) list_medium_line_x2_t3_g3_t2

0x0529,	// (0x0007dc47) list_medium_line_x2_t3_g3_t3_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0008c981) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0008c981) list_medium_line_x2_t3_g3_t

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t3_g2_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t3_g2_g1

0x0508,	// (0x0007dc26) list_medium_line_x2_t3_g2_g2_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0008c988) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0008c988) list_medium_line_x2_t3_g2_g

0x053e,	// (0x0007dc5c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x053e,	// (0x0007dc5c) list_medium_line_x2_t3_g2_t1

0x0554,	// (0x0007dc72) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0554,	// (0x0007dc72) list_medium_line_x2_t3_g2_t2

0x0566,	// (0x0007dc84) list_medium_line_x2_t3_g2_t3_ParamLimits

0x0566,	// (0x0007dc84) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0008c98d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0008c98d) list_medium_line_x2_t3_g2_t

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t4_g4_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t4_g4_g1

0x0583,	// (0x0007dca1) list_medium_line_x2_t4_g4_g2_ParamLimits

0x0583,	// (0x0007dca1) list_medium_line_x2_t4_g4_g2

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t4_g4_g3_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t4_g4_g3

0x058f,	// (0x0007dcad) list_medium_line_x2_t4_g4_g4_ParamLimits

0x058f,	// (0x0007dcad) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0008c994) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0008c994) list_medium_line_x2_t4_g4_g

0x6813,	// (0x00083f31) list_medium_line_x2_t4_g4_t1_ParamLimits

0x6813,	// (0x00083f31) list_medium_line_x2_t4_g4_t1

0x682d,	// (0x00083f4b) list_medium_line_x2_t4_g4_t2_ParamLimits

0x682d,	// (0x00083f4b) list_medium_line_x2_t4_g4_t2

0x6843,	// (0x00083f61) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6843,	// (0x00083f61) list_medium_line_x2_t4_g4_t3

0x059b,	// (0x0007dcb9) list_medium_line_x2_t4_g4_t4_ParamLimits

0x059b,	// (0x0007dcb9) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0008c99d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0008c99d) list_medium_line_x2_t4_g4_t

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t2_g4_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t2_g4_g1

0x0583,	// (0x0007dca1) list_medium_line_x2_t2_g4_g2_ParamLimits

0x0583,	// (0x0007dca1) list_medium_line_x2_t2_g4_g2

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t2_g4_g3_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t2_g4_g3

0x0508,	// (0x0007dc26) list_medium_line_x2_t2_g4_g4_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0008ca04) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0008ca04) list_medium_line_x2_t2_g4_g

0x05ad,	// (0x0007dccb) list_medium_line_x2_t2_g4_t1_ParamLimits

0x05ad,	// (0x0007dccb) list_medium_line_x2_t2_g4_t1

0x0529,	// (0x0007dc47) list_medium_line_x2_t2_g4_t2_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0008ca0d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0008ca0d) list_medium_line_x2_t2_g4_t

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t2_g3_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t2_g3_g1

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t2_g3_g2_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t2_g3_g2

0x0508,	// (0x0007dc26) list_medium_line_x2_t2_g3_g3_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0008c97a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0008c97a) list_medium_line_x2_t2_g3_g

0x05c2,	// (0x0007dce0) list_medium_line_x2_t2_g3_t1_ParamLimits

0x05c2,	// (0x0007dce0) list_medium_line_x2_t2_g3_t1

0x0529,	// (0x0007dc47) list_medium_line_x2_t2_g3_t2_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0008ca12) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0008ca12) list_medium_line_x2_t2_g3_t

0x782c,	// (0x00084f4a) main_sp_fs_list_pane_ParamLimits

0x782c,	// (0x00084f4a) main_sp_fs_list_pane

0x7838,	// (0x00084f56) sp_fs_scroll_pane_ParamLimits

0x7838,	// (0x00084f56) sp_fs_scroll_pane

0x7844,	// (0x00084f62) list_medium_line_x2_t3_t1

0x7854,	// (0x00084f72) list_medium_line_x2_t3_t2

0x0605,	// (0x0007dd23) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0008ca5d) list_medium_line_x2_t3_t

0x7862,	// (0x00084f80) list_medium_line_x3_t4_t1

0x7872,	// (0x00084f90) list_medium_line_x3_t4_t2

0x0613,	// (0x0007dd31) list_medium_line_x3_t4_t3

0x0605,	// (0x0007dd23) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0008ca64) list_medium_line_x3_t4_t

0x7880,	// (0x00084f9e) list_medium_line_x4_t5_t1

0x7890,	// (0x00084fae) list_medium_line_x4_t5_t2

0x0613,	// (0x0007dd31) list_medium_line_x4_t5_t3

0x0621,	// (0x0007dd3f) list_medium_line_x4_t5_t4

0x0605,	// (0x0007dd23) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0008ca6d) list_medium_line_x4_t5_t

0x04f0,	// (0x0007dc0e) list_medium_line_t4_g4_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_t4_g4_g1

0x058f,	// (0x0007dcad) list_medium_line_t4_g4_g2_ParamLimits

0x058f,	// (0x0007dcad) list_medium_line_t4_g4_g2

0x062f,	// (0x0007dd4d) list_medium_line_t4_g4_g3_ParamLimits

0x062f,	// (0x0007dd4d) list_medium_line_t4_g4_g3

0x0508,	// (0x0007dc26) list_medium_line_t4_g4_g4_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0008ca78) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0008ca78) list_medium_line_t4_g4_g

0x063b,	// (0x0007dd59) list_medium_line_t4_g4_t1_ParamLimits

0x063b,	// (0x0007dd59) list_medium_line_t4_g4_t1

0x0650,	// (0x0007dd6e) list_medium_line_t4_g4_t2_ParamLimits

0x0650,	// (0x0007dd6e) list_medium_line_t4_g4_t2

0x0665,	// (0x0007dd83) list_medium_line_t4_g4_t3_ParamLimits

0x0665,	// (0x0007dd83) list_medium_line_t4_g4_t3

0x0529,	// (0x0007dc47) list_medium_line_t4_g4_t4_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0008ca81) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0008ca81) list_medium_line_t4_g4_t

0x79af,	// (0x000850cd) chi_dic_find_pane_g1

0x89ce,	// (0x000860ec) main_tport_pane

0x215b,	// (0x0007f879) list_medium_line_plain_t1

0x2169,	// (0x0007f887) list_medium_line_t2_g2_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_t2_g2_g1

0x2175,	// (0x0007f893) list_medium_line_t2_g2_g2_ParamLimits

0x2175,	// (0x0007f893) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0008d13d) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0008d13d) list_medium_line_t2_g2_g

0xb3f0,	// (0x00088b0e) list_medium_line_t2_g2_t1_ParamLimits

0xb3f0,	// (0x00088b0e) list_medium_line_t2_g2_t1

0xb40a,	// (0x00088b28) list_medium_line_t2_g2_t2_ParamLimits

0xb40a,	// (0x00088b28) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0008d142) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0008d142) list_medium_line_t2_g2_t

0x221d,	// (0x0007f93b) aid_sp_fs_list_icon_a_sm

0x3e44,	// (0x00081562) aid_sp_fs_list_icon_d

0x2225,	// (0x0007f943) aid_sp_fs_text_primary

0x222e,	// (0x0007f94c) aid_sp_fs_text_secondary

0x2237,	// (0x0007f955) list_medium_line

0x2237,	// (0x0007f955) list_medium_line_g2

0x2237,	// (0x0007f955) list_medium_line_g3

0x2237,	// (0x0007f955) list_medium_line_plain

0x2237,	// (0x0007f955) list_medium_line_plain_t2

0x2237,	// (0x0007f955) list_medium_line_plain_t3

0x2237,	// (0x0007f955) list_medium_line_right_icon

0x2237,	// (0x0007f955) list_medium_line_right_iconx2

0x2237,	// (0x0007f955) list_medium_line_t2

0x2237,	// (0x0007f955) list_medium_line_t2_g2

0x2237,	// (0x0007f955) list_medium_line_t2_g3

0x2237,	// (0x0007f955) list_medium_line_t2_right_icon

0x2237,	// (0x0007f955) list_medium_line_t2_right_iconx2

0x2237,	// (0x0007f955) list_medium_line_t3

0x2237,	// (0x0007f955) list_medium_line_t3_g2

0x2237,	// (0x0007f955) list_medium_line_t3_g3

0x2237,	// (0x0007f955) list_medium_line_t3_right_iconx2

0x2240,	// (0x0007f95e) list_medium_line_t4_g4

0x2249,	// (0x0007f967) list_medium_line_x2

0x2249,	// (0x0007f967) list_medium_line_x2_t2_g2

0x2249,	// (0x0007f967) list_medium_line_x2_t2_g3

0x2249,	// (0x0007f967) list_medium_line_x2_t2_g4

0x2249,	// (0x0007f967) list_medium_line_x2_t3

0x2249,	// (0x0007f967) list_medium_line_x2_t3_g2

0x2249,	// (0x0007f967) list_medium_line_x2_t3_g3

0x2249,	// (0x0007f967) list_medium_line_x2_t3_g4

0x2249,	// (0x0007f967) list_medium_line_x2_t4_g2

0x2249,	// (0x0007f967) list_medium_line_x2_t4_g4

0x2252,	// (0x0007f970) list_medium_line_x3

0x2252,	// (0x0007f970) list_medium_line_x3_t4

0x2252,	// (0x0007f970) list_medium_line_x3_t4_g4

0x2240,	// (0x0007f95e) list_medium_line_x4_t4

0x2240,	// (0x0007f95e) list_medium_line_x4_t4_g7

0x2240,	// (0x0007f95e) list_medium_line_x4_t5

0x225b,	// (0x0007f979) list_single_fs_dyc_pane_ParamLimits

0x225b,	// (0x0007f979) list_single_fs_dyc_pane

0x04f0,	// (0x0007dc0e) list_medium_line_x4_t4_g7_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x4_t4_g7_g1

0x2748,	// (0x0007fe66) list_medium_line_x4_t4_g7_g2_ParamLimits

0x2748,	// (0x0007fe66) list_medium_line_x4_t4_g7_g2

0x2754,	// (0x0007fe72) list_medium_line_x4_t4_g7_g3_ParamLimits

0x2754,	// (0x0007fe72) list_medium_line_x4_t4_g7_g3

0x2763,	// (0x0007fe81) list_medium_line_x4_t4_g7_g4_ParamLimits

0x2763,	// (0x0007fe81) list_medium_line_x4_t4_g7_g4

0x276f,	// (0x0007fe8d) list_medium_line_x4_t4_g7_g5_ParamLimits

0x276f,	// (0x0007fe8d) list_medium_line_x4_t4_g7_g5

0x277e,	// (0x0007fe9c) list_medium_line_x4_t4_g7_g6_ParamLimits

0x277e,	// (0x0007fe9c) list_medium_line_x4_t4_g7_g6

0x278d,	// (0x0007feab) list_medium_line_x4_t4_g7_g7_ParamLimits

0x278d,	// (0x0007feab) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0008d30d) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0008d30d) list_medium_line_x4_t4_g7_g

0x2799,	// (0x0007feb7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x2799,	// (0x0007feb7) list_medium_line_x4_t4_g7_t1

0x27ae,	// (0x0007fecc) list_medium_line_x4_t4_g7_t2_ParamLimits

0x27ae,	// (0x0007fecc) list_medium_line_x4_t4_g7_t2

0x27c3,	// (0x0007fee1) list_medium_line_x4_t4_g7_t3_ParamLimits

0x27c3,	// (0x0007fee1) list_medium_line_x4_t4_g7_t3

0x27d8,	// (0x0007fef6) list_medium_line_x4_t4_g7_t4_ParamLimits

0x27d8,	// (0x0007fef6) list_medium_line_x4_t4_g7_t4

0x27ea,	// (0x0007ff08) list_medium_line_x4_t4_g7_t5_ParamLimits

0x27ea,	// (0x0007ff08) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0008d31c) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0008d31c) list_medium_line_x4_t4_g7_t

0x27fc,	// (0x0007ff1a) list_single_dyc_row_pane_ParamLimits

0x27fc,	// (0x0007ff1a) list_single_dyc_row_pane

0xc916,	// (0x0008a034) call5_gesture_pane_ParamLimits

0xc916,	// (0x0008a034) call5_gesture_pane

0xc94a,	// (0x0008a068) call5_windows_pane_ParamLimits

0xc94a,	// (0x0008a068) call5_windows_pane

0xc9bc,	// (0x0008a0da) call5_swipe_1_pane_cp_ParamLimits

0xc9bc,	// (0x0008a0da) call5_swipe_1_pane_cp

0xc9c8,	// (0x0008a0e6) call5_swipe_2_pane_cp_ParamLimits

0xc9c8,	// (0x0008a0e6) call5_swipe_2_pane_cp

0xe52f,	// (0x0008bc4d) call5_image_pane_cp

0xc9d4,	// (0x0008a0f2) popup_call5_audio_first_window_cp_ParamLimits

0xc9d4,	// (0x0008a0f2) popup_call5_audio_first_window_cp

0x2cb6,	// (0x000803d4) call5_swipe_1_pane_g1_cp_ParamLimits

0x2cb6,	// (0x000803d4) call5_swipe_1_pane_g1_cp

0x2cf6,	// (0x00080414) call5_swipe_1_pane_g2_cp

0x2ccf,	// (0x000803ed) call5_swipe_1_pane_t1_cp_ParamLimits

0x2ccf,	// (0x000803ed) call5_swipe_1_pane_t1_cp

0x2cb6,	// (0x000803d4) call5_swipe_2_pane_g1_cp_ParamLimits

0x2cb6,	// (0x000803d4) call5_swipe_2_pane_g1_cp

0x2cfe,	// (0x0008041c) call5_swipe_2_pane_g2_cp

0x2d06,	// (0x00080424) call5_swipe_2_pane_t1_cp_ParamLimits

0x2d06,	// (0x00080424) call5_swipe_2_pane_t1_cp

0x4167,	// (0x00081885) main_sp_fs_email_pane

0x2d1b,	// (0x00080439) main_sp_fs_listscroll_pane_te

0x2d24,	// (0x00080442) popup_sp_fs_action_menu_pane_ParamLimits

0x2d24,	// (0x00080442) popup_sp_fs_action_menu_pane

0x1965,	// (0x0007f083) bg_sp_fs_ctrlbar_pane_g1

0x2d68,	// (0x00080486) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d71,	// (0x0008048f) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2d7a,	// (0x00080498) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x1965,	// (0x0007f083) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0008d405) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x174a,	// (0x0007ee68) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x174a,	// (0x0007ee68) bg_sp_fs_ctrlbar_ddmenu_pane

0x2d83,	// (0x000804a1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x2d83,	// (0x000804a1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2d8f,	// (0x000804ad) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2d8f,	// (0x000804ad) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0008d40e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0008d40e) main_sp_fs_ctrlbar_ddmenu_pane_g

0x2d9b,	// (0x000804b9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x2d9b,	// (0x000804b9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x2db5,	// (0x000804d3) list_medium_line_t2_right_icon_g1

0xc9e2,	// (0x0008a100) list_medium_line_t2_right_icon_t1

0xc9f2,	// (0x0008a110) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0008d413) list_medium_line_t2_right_icon_t

0x145f,	// (0x0007eb7d) bg_sp_fs_ctrlbar_pane_ParamLimits

0x145f,	// (0x0007eb7d) bg_sp_fs_ctrlbar_pane

0xca57,	// (0x0008a175) main_sp_fs_ctrlbar_button_pane_cp01

0xca5f,	// (0x0008a17d) main_sp_fs_ctrlbar_ddmenu_pane

0x2df5,	// (0x00080513) main_sp_fs_ctrlbar_pane_g1

0x2e01,	// (0x0008051f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0008d418) main_sp_fs_ctrlbar_pane_g

0x2e0d,	// (0x0008052b) main_sp_fs_ctrlbar_pane_t1

0xca69,	// (0x0008a187) main_sp_fs_ctrlbar_pane

0xca85,	// (0x0008a1a3) main_sp_fs_listscroll_pane_te_cp01

0xca96,	// (0x0008a1b4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xca96,	// (0x0008a1b4) popup_sp_fs_action_menu_pane_cp01

0x4167,	// (0x00081885) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4167,	// (0x00081885) bg_sp_fs_highlight_list_pane_cp01

0x2e22,	// (0x00080540) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x2e22,	// (0x00080540) sp_fs_action_menu_list_gene_pane_g1

0x2e31,	// (0x0008054f) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x2e31,	// (0x0008054f) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0008d41d) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0008d41d) sp_fs_action_menu_list_gene_pane_g

0x2e3e,	// (0x0008055c) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x2e3e,	// (0x0008055c) sp_fs_action_menu_list_gene_pane_t1

0x2e56,	// (0x00080574) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2e56,	// (0x00080574) sp_fs_action_menu_list_gene_pane

0x2e77,	// (0x00080595) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2e77,	// (0x00080595) popup_sp_fs_action_menu_bg_pane

0x2e85,	// (0x000805a3) sp_fs_action_menu_list_pane_ParamLimits

0x2e85,	// (0x000805a3) sp_fs_action_menu_list_pane

0x2ea7,	// (0x000805c5) sp_fs_scroll_pane_cp01_ParamLimits

0x2ea7,	// (0x000805c5) sp_fs_scroll_pane_cp01

0xcab0,	// (0x0008a1ce) list_medium_line_plain_t2_t1

0xcac0,	// (0x0008a1de) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0008d422) list_medium_line_plain_t2_t

0xcace,	// (0x0008a1ec) list_medium_line_plain_t3_t1

0xcade,	// (0x0008a1fc) list_medium_line_plain_t3_t2

0xcaec,	// (0x0008a20a) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0008d427) list_medium_line_plain_t3_t

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t2_g2_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t2_g2_g1

0x0508,	// (0x0007dc26) list_medium_line_x2_t2_g2_g2_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0008c988) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0008c988) list_medium_line_x2_t2_g2_g

0x063b,	// (0x0007dd59) list_medium_line_x2_t2_g2_t1_ParamLimits

0x063b,	// (0x0007dd59) list_medium_line_x2_t2_g2_t1

0x0529,	// (0x0007dc47) list_medium_line_x2_t2_g2_t2_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0008d42e) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0008d42e) list_medium_line_x2_t2_g2_t

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t4_g2_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t4_g2_g1

0x2ecd,	// (0x000805eb) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2ecd,	// (0x000805eb) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0008d433) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0008d433) list_medium_line_x2_t4_g2_g

0xcafa,	// (0x0008a218) list_medium_line_x2_t4_g2_t1_ParamLimits

0xcafa,	// (0x0008a218) list_medium_line_x2_t4_g2_t1

0xcb11,	// (0x0008a22f) list_medium_line_x2_t4_g2_t2_ParamLimits

0xcb11,	// (0x0008a22f) list_medium_line_x2_t4_g2_t2

0xcb26,	// (0x0008a244) list_medium_line_x2_t4_g2_t3_ParamLimits

0xcb26,	// (0x0008a244) list_medium_line_x2_t4_g2_t3

0x0529,	// (0x0007dc47) list_medium_line_x2_t4_g2_t4_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0008d438) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0008d438) list_medium_line_x2_t4_g2_t

0x2edf,	// (0x000805fd) list_medium_line_t3_right_iconx2_g1

0x2db5,	// (0x000804d3) list_medium_line_t3_right_iconx2_g2

0xcb38,	// (0x0008a256) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0008d441) list_medium_line_t3_right_iconx2_g

0xcb40,	// (0x0008a25e) list_medium_line_t3_right_iconx2_t1

0xcb50,	// (0x0008a26e) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0008d448) list_medium_line_t3_right_iconx2_t

0x04f0,	// (0x0007dc0e) list_medium_line_x3_t4_g4_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x3_t4_g4_g1

0x04fc,	// (0x0007dc1a) list_medium_line_x3_t4_g4_g2_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x3_t4_g4_g2

0x058f,	// (0x0007dcad) list_medium_line_x3_t4_g4_g3_ParamLimits

0x058f,	// (0x0007dcad) list_medium_line_x3_t4_g4_g3

0x2ee7,	// (0x00080605) list_medium_line_x3_t4_g4_g4_ParamLimits

0x2ee7,	// (0x00080605) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0008d44d) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0008d44d) list_medium_line_x3_t4_g4_g

0xcb5e,	// (0x0008a27c) list_medium_line_x3_t4_g4_t1_ParamLimits

0xcb5e,	// (0x0008a27c) list_medium_line_x3_t4_g4_t1

0xcb75,	// (0x0008a293) list_medium_line_x3_t4_g4_t2_ParamLimits

0xcb75,	// (0x0008a293) list_medium_line_x3_t4_g4_t2

0x0650,	// (0x0007dd6e) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0650,	// (0x0007dd6e) list_medium_line_x3_t4_g4_t3

0x2ef3,	// (0x00080611) list_medium_line_x3_t4_g4_t4_ParamLimits

0x2ef3,	// (0x00080611) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0008d456) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0008d456) list_medium_line_x3_t4_g4_t

0xcb8a,	// (0x0008a2a8) list_single_dyc_row_text_pane_t1_ParamLimits

0xcb8a,	// (0x0008a2a8) list_single_dyc_row_text_pane_t1

0xcbc1,	// (0x0008a2df) list_single_dyc_row_text_pane_t2_ParamLimits

0xcbc1,	// (0x0008a2df) list_single_dyc_row_text_pane_t2

0x2f10,	// (0x0008062e) list_single_dyc_row_text_pane_t3_ParamLimits

0x2f10,	// (0x0008062e) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0008d45f) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0008d45f) list_single_dyc_row_text_pane_t

0x2f22,	// (0x00080640) list_single_dyc_row_pane_g1_ParamLimits

0x2f22,	// (0x00080640) list_single_dyc_row_pane_g1

0x2f2e,	// (0x0008064c) list_single_dyc_row_pane_g2_ParamLimits

0x2f2e,	// (0x0008064c) list_single_dyc_row_pane_g2

0x2f3a,	// (0x00080658) list_single_dyc_row_pane_g3_ParamLimits

0x2f3a,	// (0x00080658) list_single_dyc_row_pane_g3

0x2f46,	// (0x00080664) list_single_dyc_row_pane_g4_ParamLimits

0x2f46,	// (0x00080664) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0008d466) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0008d466) list_single_dyc_row_pane_g

0x2f52,	// (0x00080670) list_single_dyc_row_text_pane_ParamLimits

0x2f52,	// (0x00080670) list_single_dyc_row_text_pane

0x039e,	// (0x0007dabc) bg_sp_fs_scroll_pane

0x2f71,	// (0x0008068f) thumb_sp_fs_scroll_pane

0x2169,	// (0x0007f887) list_medium_line_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_g1

0x2f7a,	// (0x00080698) list_medium_line_t1_ParamLimits

0x2f7a,	// (0x00080698) list_medium_line_t1

0x04f0,	// (0x0007dc0e) list_medium_line_x2_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_g1

0x04fc,	// (0x0007dc1a) list_medium_line_x2_g2_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0008d46f) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0008d46f) list_medium_line_x2_g

0x2f8f,	// (0x000806ad) list_medium_line_x2_t1_ParamLimits

0x2f8f,	// (0x000806ad) list_medium_line_x2_t1

0x04f0,	// (0x0007dc0e) list_medium_line_x3_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x3_g1

0x04fc,	// (0x0007dc1a) list_medium_line_x3_g2_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0008d46f) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0008d46f) list_medium_line_x3_g

0x2f8f,	// (0x000806ad) list_medium_line_x3_t1_ParamLimits

0x2f8f,	// (0x000806ad) list_medium_line_x3_t1

0x2fa5,	// (0x000806c3) thumb_sp_fs_scroll_pane_g1

0x2fae,	// (0x000806cc) thumb_sp_fs_scroll_pane_g2

0x2fb7,	// (0x000806d5) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008d474) thumb_sp_fs_scroll_pane_g

0x2fa5,	// (0x000806c3) bg_sp_fs_scroll_pane_g1

0x2fae,	// (0x000806cc) bg_sp_fs_scroll_pane_g2

0x2fb7,	// (0x000806d5) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0008d474) bg_sp_fs_scroll_pane_g

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t3_g4_g1_ParamLimits

0x04f0,	// (0x0007dc0e) list_medium_line_x2_t3_g4_g1

0x0583,	// (0x0007dca1) list_medium_line_x2_t3_g4_g2_ParamLimits

0x0583,	// (0x0007dca1) list_medium_line_x2_t3_g4_g2

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t3_g4_g3_ParamLimits

0x04fc,	// (0x0007dc1a) list_medium_line_x2_t3_g4_g3

0x0508,	// (0x0007dc26) list_medium_line_x2_t3_g4_g4_ParamLimits

0x0508,	// (0x0007dc26) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0008ca04) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0008ca04) list_medium_line_x2_t3_g4_g

0xcc1b,	// (0x0008a339) list_medium_line_x2_t3_g4_t1_ParamLimits

0xcc1b,	// (0x0008a339) list_medium_line_x2_t3_g4_t1

0xcc31,	// (0x0008a34f) list_medium_line_x2_t3_g4_t2_ParamLimits

0xcc31,	// (0x0008a34f) list_medium_line_x2_t3_g4_t2

0x0529,	// (0x0007dc47) list_medium_line_x2_t3_g4_t3_ParamLimits

0x0529,	// (0x0007dc47) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0008d47b) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0008d47b) list_medium_line_x2_t3_g4_t

0x2169,	// (0x0007f887) list_medium_line_g2_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_g2_g1

0x2175,	// (0x0007f893) list_medium_line_g2_g2_ParamLimits

0x2175,	// (0x0007f893) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0008d13d) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0008d13d) list_medium_line_g2_g

0x2fc0,	// (0x000806de) list_medium_line_g2_t1_ParamLimits

0x2fc0,	// (0x000806de) list_medium_line_g2_t1

0x2169,	// (0x0007f887) list_medium_line_t3_g2_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_t3_g2_g1

0x2175,	// (0x0007f893) list_medium_line_t3_g2_g2_ParamLimits

0x2175,	// (0x0007f893) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0008d13d) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0008d13d) list_medium_line_t3_g2_g

0xcc4b,	// (0x0008a369) list_medium_line_t3_g2_t1_ParamLimits

0xcc4b,	// (0x0008a369) list_medium_line_t3_g2_t1

0xcc62,	// (0x0008a380) list_medium_line_t3_g2_t2_ParamLimits

0xcc62,	// (0x0008a380) list_medium_line_t3_g2_t2

0xcc77,	// (0x0008a395) list_medium_line_t3_g2_t3_ParamLimits

0xcc77,	// (0x0008a395) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0008d482) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0008d482) list_medium_line_t3_g2_t

0x2db5,	// (0x000804d3) list_medium_line_right_icon_g1

0x2fd5,	// (0x000806f3) list_medium_line_right_icon_t1

0x2169,	// (0x0007f887) list_medium_line_t2_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_t2_g1

0xcc8c,	// (0x0008a3aa) list_medium_line_t2_t1_ParamLimits

0xcc8c,	// (0x0008a3aa) list_medium_line_t2_t1

0xcca6,	// (0x0008a3c4) list_medium_line_t2_t2_ParamLimits

0xcca6,	// (0x0008a3c4) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0008d489) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0008d489) list_medium_line_t2_t

0x2169,	// (0x0007f887) list_medium_line_t3_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_t3_g1

0xccbb,	// (0x0008a3d9) list_medium_line_t3_t1_ParamLimits

0xccbb,	// (0x0008a3d9) list_medium_line_t3_t1

0xccd2,	// (0x0008a3f0) list_medium_line_t3_t2_ParamLimits

0xccd2,	// (0x0008a3f0) list_medium_line_t3_t2

0xcce7,	// (0x0008a405) list_medium_line_t3_t3_ParamLimits

0xcce7,	// (0x0008a405) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0008d48e) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0008d48e) list_medium_line_t3_t

0x2169,	// (0x0007f887) list_medium_line_g3_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_g3_g1

0x2fe3,	// (0x00080701) list_medium_line_g3_g2_ParamLimits

0x2fe3,	// (0x00080701) list_medium_line_g3_g2

0x2175,	// (0x0007f893) list_medium_line_g3_g3_ParamLimits

0x2175,	// (0x0007f893) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0008d495) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0008d495) list_medium_line_g3_g

0x2fef,	// (0x0008070d) list_medium_line_g3_t1_ParamLimits

0x2fef,	// (0x0008070d) list_medium_line_g3_t1

0x2169,	// (0x0007f887) list_medium_line_t2_g3_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_t2_g3_g1

0x2fe3,	// (0x00080701) list_medium_line_t2_g3_g2_ParamLimits

0x2fe3,	// (0x00080701) list_medium_line_t2_g3_g2

0x2175,	// (0x0007f893) list_medium_line_t2_g3_g3_ParamLimits

0x2175,	// (0x0007f893) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0008d495) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0008d495) list_medium_line_t2_g3_g

0xccf9,	// (0x0008a417) list_medium_line_t2_g3_t1_ParamLimits

0xccf9,	// (0x0008a417) list_medium_line_t2_g3_t1

0xcd13,	// (0x0008a431) list_medium_line_t2_g3_t2_ParamLimits

0xcd13,	// (0x0008a431) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0008d49c) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0008d49c) list_medium_line_t2_g3_t

0x2169,	// (0x0007f887) list_medium_line_t3_g3_g1_ParamLimits

0x2169,	// (0x0007f887) list_medium_line_t3_g3_g1

0x2fe3,	// (0x00080701) list_medium_line_t3_g3_g2_ParamLimits

0x2fe3,	// (0x00080701) list_medium_line_t3_g3_g2

0x2175,	// (0x0007f893) list_medium_line_t3_g3_g3_ParamLimits

0x2175,	// (0x0007f893) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0008d495) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0008d495) list_medium_line_t3_g3_g

0xcd28,	// (0x0008a446) list_medium_line_t3_g3_t1_ParamLimits

0xcd28,	// (0x0008a446) list_medium_line_t3_g3_t1

0xcd3c,	// (0x0008a45a) list_medium_line_t3_g3_t2_ParamLimits

0xcd3c,	// (0x0008a45a) list_medium_line_t3_g3_t2

0xcd4e,	// (0x0008a46c) list_medium_line_t3_g3_t3_ParamLimits

0xcd4e,	// (0x0008a46c) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0008d4a1) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0008d4a1) list_medium_line_t3_g3_t

0x2edf,	// (0x000805fd) list_medium_line_right_iconx2_g1

0x2db5,	// (0x000804d3) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008d4a8) list_medium_line_right_iconx2_g

0x3004,	// (0x00080722) list_medium_line_right_iconx2_t1

0x2edf,	// (0x000805fd) list_medium_line_t2_right_iconx2_g1

0x2db5,	// (0x000804d3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0008d4a8) list_medium_line_t2_right_iconx2_g

0xcd60,	// (0x0008a47e) list_medium_line_t2_right_iconx2_t1

0xcd70,	// (0x0008a48e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0008d4ad) list_medium_line_t2_right_iconx2_t

0x3012,	// (0x00080730) list_medium_line_x4_t4_t1

0xcd7e,	// (0x0008a49c) list_medium_line_x4_t4_t2

0xcd8e,	// (0x0008a4ac) list_medium_line_x4_t4_t3

0xcd9e,	// (0x0008a4bc) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0008d4b2) list_medium_line_x4_t4_t

0xcdd7,	// (0x0008a4f5) tport_appsw_pane_ParamLimits

0xcdd7,	// (0x0008a4f5) tport_appsw_pane

0xcde3,	// (0x0008a501) tport_contact_pane_ParamLimits

0xcde3,	// (0x0008a501) tport_contact_pane

0xcdf3,	// (0x0008a511) tport_listscroll_pane_ParamLimits

0xcdf3,	// (0x0008a511) tport_listscroll_pane

0xce03,	// (0x0008a521) cell_tport_appsw_pane_ParamLimits

0xce03,	// (0x0008a521) cell_tport_appsw_pane

0x1c6e,	// (0x0007f38c) tport_appsw_pane_g1_ParamLimits

0x1c6e,	// (0x0007f38c) tport_appsw_pane_g1

0x3020,	// (0x0008073e) tport_contact_pane_g1

0x28ed,	// (0x0008000b) tport_contact_pane_t1

0x3029,	// (0x00080747) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0008d4bb) tport_contact_pane_t

0x3037,	// (0x00080755) list_tport_pane

0x3040,	// (0x0008075e) scroll_pane_cp_030

0x3051,	// (0x0008076f) cell_tport_appsw_pane_g1

0x3061,	// (0x0008077f) cell_tport_appsw_pane_t1

0x039e,	// (0x0007dabc) grid_highlight_pane_cp019

0xce2e,	// (0x0008a54c) list_tport_double_graphic_pane_ParamLimits

0xce2e,	// (0x0008a54c) list_tport_double_graphic_pane

0x4167,	// (0x00081885) list_highlight_pane_cp023_ParamLimits

0x4167,	// (0x00081885) list_highlight_pane_cp023

0xce40,	// (0x0008a55e) list_tport_double_graphic_pane_g1_ParamLimits

0xce40,	// (0x0008a55e) list_tport_double_graphic_pane_g1

0xce4d,	// (0x0008a56b) list_tport_double_graphic_pane_t1_ParamLimits

0xce4d,	// (0x0008a56b) list_tport_double_graphic_pane_t1

0xce62,	// (0x0008a580) list_tport_double_graphic_pane_t2_ParamLimits

0xce62,	// (0x0008a580) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0008d4c7) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0008d4c7) list_tport_double_graphic_pane_t

0x039e,	// (0x0007dabc) main_cale_note_pane

0xabdd,	// (0x000882fb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xabdd,	// (0x000882fb) cell_vitu2_function_top_wide_pane_cp01

0xc4cc,	// (0x00089bea) wait_bar_pane_cp05_ParamLimits

0x039e,	// (0x0007dabc) listscroll_cmail_pane

0x3077,	// (0x00080795) list_cmail_pane

0xce7e,	// (0x0008a59c) list_cmail_body_pane

0xce9b,	// (0x0008a5b9) list_single_cmail_header_caption_pane

0xcec0,	// (0x0008a5de) list_single_cmail_header_detail_pane_ParamLimits

0xcec0,	// (0x0008a5de) list_single_cmail_header_detail_pane

0xcef3,	// (0x0008a611) list_single_cmail_header_caption_pane_t1

0xcf01,	// (0x0008a61f) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcf01,	// (0x0008a61f) list_single_cmail_header_detail_pane_g1

0x3e5a,	// (0x00081578) list_single_cmail_header_detail_pane_g2_ParamLimits

0x3e5a,	// (0x00081578) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0008d4cc) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0008d4cc) list_single_cmail_header_detail_pane_g

0x30a5,	// (0x000807c3) list_single_cmail_header_detail_pane_t1_ParamLimits

0x30a5,	// (0x000807c3) list_single_cmail_header_detail_pane_t1

0x30df,	// (0x000807fd) list_single_cmail_header_editor_pane_bg_ParamLimits

0x30df,	// (0x000807fd) list_single_cmail_header_editor_pane_bg

0x2a9c,	// (0x000801ba) list_cmail_body_pane_g1

0x30f1,	// (0x0008080f) list_cmail_body_pane_t1

0xec1d,	// (0x0008c33b) list_single_cmail_header_editor_pane_bg_g1

0xde44,	// (0x0008b562) list_single_cmail_header_editor_pane_bg_g1_copy1

0xec2d,	// (0x0008c34b) list_single_cmail_header_editor_pane_bg_g1_copy2

0xec25,	// (0x0008c343) list_single_cmail_header_editor_pane_bg_g1_copy3

0xee41,	// (0x0008c55f) list_single_cmail_header_editor_pane_bg_g1_copy4

0xec4d,	// (0x0008c36b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xec3d,	// (0x0008c35b) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xec45,	// (0x0008c363) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xde24,	// (0x0008b542) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcf3b,	// (0x0008a659) calenote_gesture_pane_ParamLimits

0xcf3b,	// (0x0008a659) calenote_gesture_pane

0xcf55,	// (0x0008a673) calenote_window_pane_ParamLimits

0xcf55,	// (0x0008a673) calenote_window_pane

0x30ff,	// (0x0008081d) popup_note_window_cp01

0xcf6d,	// (0x0008a68b) calenote_swipe_1_pane_ParamLimits

0xcf6d,	// (0x0008a68b) calenote_swipe_1_pane

0xc9c8,	// (0x0008a0e6) calenote_swipe_2_pane_ParamLimits

0xc9c8,	// (0x0008a0e6) calenote_swipe_2_pane

0x2cb6,	// (0x000803d4) calenote_swipe_1_pane_g1_ParamLimits

0x2cb6,	// (0x000803d4) calenote_swipe_1_pane_g1

0x2cc3,	// (0x000803e1) calenote_swipe_1_pane_g2_ParamLimits

0x2cc3,	// (0x000803e1) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0008d3fb) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0008d3fb) calenote_swipe_1_pane_g

0x3111,	// (0x0008082f) calenote_swipe_1_pane_t1_ParamLimits

0x3111,	// (0x0008082f) calenote_swipe_1_pane_t1

0x2cb6,	// (0x000803d4) calenote_swipe_2_pane_g1_ParamLimits

0x2cb6,	// (0x000803d4) calenote_swipe_2_pane_g1

0x3130,	// (0x0008084e) calenote_swipe_2_pane_g2_ParamLimits

0x3130,	// (0x0008084e) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0008d4d8) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0008d4d8) calenote_swipe_2_pane_g

0x313c,	// (0x0008085a) calenote_swipe_2_pane_t1_ParamLimits

0x313c,	// (0x0008085a) calenote_swipe_2_pane_t1

0x039e,	// (0x0007dabc) main_mup_navstr_pane

0x996e,	// (0x0008708c) main_mup3_pane_t7_ParamLimits

0x996e,	// (0x0008708c) main_mup3_pane_t7

0xa336,	// (0x00087a54) main_mp4_pane_g6_ParamLimits

0xa336,	// (0x00087a54) main_mp4_pane_g6

0xa6b6,	// (0x00087dd4) main_image3_pane_t4_ParamLimits

0xa6b6,	// (0x00087dd4) main_image3_pane_t4

0xcf80,	// (0x0008a69e) popup_navstr_preview_pane_ParamLimits

0xcf80,	// (0x0008a69e) popup_navstr_preview_pane

0xcf8c,	// (0x0008a6aa) scroll_navstr_pane_ParamLimits

0xcf8c,	// (0x0008a6aa) scroll_navstr_pane

0x039e,	// (0x0007dabc) bg_popup_preview_window_pane_cp04

0x3163,	// (0x00080881) popup_navstr_preview_pane_t1

0xcf98,	// (0x0008a6b6) scroll_navstr_pane_g1_ParamLimits

0xcf98,	// (0x0008a6b6) scroll_navstr_pane_g1

0xcfa5,	// (0x0008a6c3) scroll_navstr_pane_t1_ParamLimits

0xcfa5,	// (0x0008a6c3) scroll_navstr_pane_t1

0x3108,	// (0x00080826) bg_button_pane_cp014

0x3108,	// (0x00080826) bg_button_pane_cp030

0xc8bc,	// (0x00089fda) list_double_fisheye_pane_g4_ParamLimits

0xc8bc,	// (0x00089fda) list_double_fisheye_pane_g4

0xc8c8,	// (0x00089fe6) list_double_fisheye_pane_g5_ParamLimits

0xc8c8,	// (0x00089fe6) list_double_fisheye_pane_g5

0x307f,	// (0x0008079d) sp_fs_scroll_pane_cp03

0x2df5,	// (0x00080513) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2e01,	// (0x0008051f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0008d418) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2e0d,	// (0x0008052b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xce74,	// (0x0008a592) sp_fs_scroll_pane_cp02

0xdb54,	// (0x0008b272) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xdb54,	// (0x0008b272) popup_sp_fs_calendar_preview_list_single_pane

0x039e,	// (0x0007dabc) main_cam6_pano_pane

0x4167,	// (0x00081885) main_mup3_pane_ParamLimits

0x039e,	// (0x0007dabc) main_phacti_pane

0xc3a1,	// (0x00089abf) bg_button_pane_cp11

0xc3b9,	// (0x00089ad7) main_mobtv_info_pane_g2_ParamLimits

0xc3b9,	// (0x00089ad7) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0008d378) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0008d378) main_mobtv_info_pane_g

0xc56b,	// (0x00089c89) sc_clock_pane_t5_ParamLimits

0xc56b,	// (0x00089c89) sc_clock_pane_t5

0xc74a,	// (0x00089e68) main_radioblah_pane_g1_ParamLimits

0x2c02,	// (0x00080320) main_radioblah_pane_t3_ParamLimits

0x2c02,	// (0x00080320) main_radioblah_pane_t3

0x2c1a,	// (0x00080338) main_radioblah_pane_t4_ParamLimits

0x2c1a,	// (0x00080338) main_radioblah_pane_t4

0xc768,	// (0x00089e86) main_radioblah_text_pane_ParamLimits

0xc768,	// (0x00089e86) main_radioblah_text_pane

0xc775,	// (0x00089e93) main_radioblah_info_pane_g1_ParamLimits

0xc80a,	// (0x00089f28) main_radioblah_info_pane_t4_ParamLimits

0xc80a,	// (0x00089f28) main_radioblah_info_pane_t4

0x4167,	// (0x00081885) main_sp_fs_calendar_pane

0xcfb7,	// (0x0008a6d5) main_phacti_pane_g1

0xcfbf,	// (0x0008a6dd) phacti_note_pane_ParamLimits

0xcfbf,	// (0x0008a6dd) phacti_note_pane

0x317a,	// (0x00080898) phacti_term_pane_ParamLimits

0x317a,	// (0x00080898) phacti_term_pane

0x318f,	// (0x000808ad) phacti_note_pane_t1_ParamLimits

0x318f,	// (0x000808ad) phacti_note_pane_t1

0x31a6,	// (0x000808c4) phacti_term_pane_g1

0x31ae,	// (0x000808cc) phacti_term_pane_t1_ParamLimits

0x31ae,	// (0x000808cc) phacti_term_pane_t1

0x31d8,	// (0x000808f6) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdc47,	// (0x0008b365) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0008d4e2) popup_sp_fs_calendar_preview_list_single_pane_g

0x31e0,	// (0x000808fe) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x31e0,	// (0x000808fe) popup_sp_fs_calendar_preview_list_single_pane_t1

0x31f5,	// (0x00080913) aid_popup_sp_fs_bg_corner_pane

0x1965,	// (0x0007f083) popup_sp_fs_calendar_preview_bg_pane_g1

0x039e,	// (0x0007dabc) popup_sp_fs_calendar_preview_bg_pane

0x31fd,	// (0x0008091b) popup_sp_fs_calendar_preview_list_pane

0x4167,	// (0x00081885) bg_main_sp_fs_cale_pane_ParamLimits

0x4167,	// (0x00081885) bg_main_sp_fs_cale_pane

0x3205,	// (0x00080923) listscroll_cale_mrui_pane_ParamLimits

0x3205,	// (0x00080923) listscroll_cale_mrui_pane

0x3219,	// (0x00080937) listscroll_sp_fs_schedule_track_pane

0x3222,	// (0x00080940) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x3222,	// (0x00080940) main_sp_fs_ctrlbar_pane_cp01

0x3233,	// (0x00080951) main_sp_fs_ribbon_pane

0x323b,	// (0x00080959) popup_sp_fs_cale_preview_window

0xcffe,	// (0x0008a71c) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcffe,	// (0x0008a71c) list_single_sp_fs_schedule_track_pane

0x20c2,	// (0x0007f7e0) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x20c2,	// (0x0007f7e0) bg_sp_fs_highlight_list_pane_cp03

0xd017,	// (0x0008a735) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xd017,	// (0x0008a735) list_single_sp_fs_schedule_track_pane_g1

0xd023,	// (0x0008a741) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xd023,	// (0x0008a741) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0008d4e7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0008d4e7) list_single_sp_fs_schedule_track_pane_g

0xd02f,	// (0x0008a74d) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xd02f,	// (0x0008a74d) list_single_sp_fs_schedule_track_pane_t1

0xd047,	// (0x0008a765) sp_fs_schedule_track_pane_ParamLimits

0xd047,	// (0x0008a765) sp_fs_schedule_track_pane

0x324d,	// (0x0008096b) sp_fs_schedule_track_pane_g1

0x3255,	// (0x00080973) sp_fs_schedule_track_pane_g2

0x325d,	// (0x0008097b) sp_fs_schedule_track_pane_g3

0x3265,	// (0x00080983) sp_fs_schedule_track_pane_g4

0x326d,	// (0x0008098b) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0008d4ec) sp_fs_schedule_track_pane_g

0xec1d,	// (0x0008c33b) bg_sp_fs_schedule_viewer_highlight_g1

0xde44,	// (0x0008b562) bg_sp_fs_schedule_viewer_highlight_g2

0xec25,	// (0x0008c343) bg_sp_fs_schedule_viewer_highlight_g3

0xec2d,	// (0x0008c34b) bg_sp_fs_schedule_viewer_highlight_g4

0xee41,	// (0x0008c55f) bg_sp_fs_schedule_viewer_highlight_g5

0xec3d,	// (0x0008c35b) bg_sp_fs_schedule_viewer_highlight_g6

0xec45,	// (0x0008c363) bg_sp_fs_schedule_viewer_highlight_g7

0xec4d,	// (0x0008c36b) bg_sp_fs_schedule_viewer_highlight_g8

0xde24,	// (0x0008b542) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0008d4f7) bg_sp_fs_schedule_viewer_highlight_g

0x039e,	// (0x0007dabc) bg_main_sp_fs_ribbon_pane

0xd057,	// (0x0008a775) main_sp_fs_ribbon_pane_g1

0x3275,	// (0x00080993) main_sp_fs_ribbon_pane_t1

0xd060,	// (0x0008a77e) main_sp_fs_ribbon_pane_t2

0x3284,	// (0x000809a2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0008d50a) main_sp_fs_ribbon_pane_t

0x3293,	// (0x000809b1) main_sp_fs_ribbon_scheduler_pane

0x329b,	// (0x000809b9) bg_main_sp_fs_ribbon_pane_g1

0x32a4,	// (0x000809c2) bg_main_sp_fs_ribbon_pane_g2

0x32ad,	// (0x000809cb) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0008d511) bg_main_sp_fs_ribbon_pane_g

0x32b5,	// (0x000809d3) main_sp_fs_ribbon_scheduler_pane_g1

0x32be,	// (0x000809dc) main_sp_fs_ribbon_scheduler_pane_g2

0x32c7,	// (0x000809e5) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0008d518) main_sp_fs_ribbon_scheduler_pane_g

0x32d0,	// (0x000809ee) list_cale_mrui_pane

0xd06f,	// (0x0008a78d) sp_fs_scroll_pane_cp07_ParamLimits

0xd06f,	// (0x0008a78d) sp_fs_scroll_pane_cp07

0xd085,	// (0x0008a7a3) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xd085,	// (0x0008a7a3) bg_sp_fs_schedule_viewer_highlight

0x32d9,	// (0x000809f7) list_single_sp_fs_schedule_track_pane_cp01

0x32e1,	// (0x000809ff) list_sp_fs_schedule_track_pane

0x32e9,	// (0x00080a07) sp_fs_scroll_pane_cp06_ParamLimits

0x32e9,	// (0x00080a07) sp_fs_scroll_pane_cp06

0x1965,	// (0x0007f083) bgmain_sp_fs_calendar_pane_g1

0xd092,	// (0x0008a7b0) list_single_cale_mrui_pane_ParamLimits

0xd092,	// (0x0008a7b0) list_single_cale_mrui_pane

0x32fb,	// (0x00080a19) list_single_cale_mrui_row_pane_ParamLimits

0x32fb,	// (0x00080a19) list_single_cale_mrui_row_pane

0x3308,	// (0x00080a26) list_single_cale_mrui_row_pane_g1_ParamLimits

0x3308,	// (0x00080a26) list_single_cale_mrui_row_pane_g1

0x3340,	// (0x00080a5e) list_single_cale_mrui_row_pane_t1_ParamLimits

0x3340,	// (0x00080a5e) list_single_cale_mrui_row_pane_t1

0xd0b7,	// (0x0008a7d5) list_single_cale_mrui_row_pane_t2_ParamLimits

0xd0b7,	// (0x0008a7d5) list_single_cale_mrui_row_pane_t2

0x3352,	// (0x00080a70) list_single_cale_mrui_row_pane_t3_ParamLimits

0x3352,	// (0x00080a70) list_single_cale_mrui_row_pane_t3

0x3381,	// (0x00080a9f) list_single_cale_mrui_row_pane_t4_ParamLimits

0x3381,	// (0x00080a9f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0008d524) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0008d524) list_single_cale_mrui_row_pane_t

0xd11d,	// (0x0008a83b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xd11d,	// (0x0008a83b) list_single_cmail_header_editor_pane_bg_cp01

0xd13d,	// (0x0008a85b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xd13d,	// (0x0008a85b) list_single_cmail_header_editor_pane_bg_cp02

0xd159,	// (0x0008a877) main_radioblah_text_pane_t1_ParamLimits

0xd159,	// (0x0008a877) main_radioblah_text_pane_t1

0x33b0,	// (0x00080ace) cam6_indi_pane_cp01

0x33b8,	// (0x00080ad6) cam6_mode_pane_cp01

0x33c0,	// (0x00080ade) cam6_pano_pane

0x33c9,	// (0x00080ae7) cam6_zoom_pane_cp01

0x33d1,	// (0x00080aef) cam6_pano_image_pane

0x33dc,	// (0x00080afa) cam6_pano_pane_g1

0x2a9c,	// (0x000801ba) cam6_pano_pane_g2

0x33e5,	// (0x00080b03) cam6_pano_pane_g3

0x33ee,	// (0x00080b0c) cam6_pano_pane_g4

0x1f39,	// (0x0007f657) cam6_pano_pane_g5

0x33f7,	// (0x00080b15) cam6_pano_pane_g6

0x3401,	// (0x00080b1f) cam6_pano_pane_g7

0x3409,	// (0x00080b27) cam6_pano_pane_g8

0x3412,	// (0x00080b30) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0008d52d) cam6_pano_pane_g

0x039e,	// (0x0007dabc) main_browser_tag_pane

0x315b,	// (0x00080879) grid_navstr_albumart_pane

0x341d,	// (0x00080b3b) cell_navstr_albumart_pane_ParamLimits

0x341d,	// (0x00080b3b) cell_navstr_albumart_pane

0x3440,	// (0x00080b5e) cell_navstr_albumart_pane_g1

0x127c,	// (0x0007e99a) cell_navstr_albumart_pane_g2

0x128c,	// (0x0007e9aa) cell_navstr_albumart_pane_g3

0x1284,	// (0x0007e9a2) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0008d540) cell_navstr_albumart_pane_g

0xd174,	// (0x0008a892) bt_list_pane_ParamLimits

0xd174,	// (0x0008a892) bt_list_pane

0xd194,	// (0x0008a8b2) bt_list_pane_t1

0xd1a3,	// (0x0008a8c1) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0008d549) bt_list_pane_t

0x039e,	// (0x0007dabc) main_cale_prevew_pane

0xd1b2,	// (0x0008a8d0) popup_cale_preview_window_ParamLimits

0xd1b2,	// (0x0008a8d0) popup_cale_preview_window

0x4167,	// (0x00081885) bg_popup_preview_window_pane_cp05_ParamLimits

0x4167,	// (0x00081885) bg_popup_preview_window_pane_cp05

0x3448,	// (0x00080b66) list_cale_preview_pane_ParamLimits

0x3448,	// (0x00080b66) list_cale_preview_pane

0x3772,	// (0x00080e90) list_double_cale_preview_pane_ParamLimits

0x3772,	// (0x00080e90) list_double_cale_preview_pane

0xd1cb,	// (0x0008a8e9) list_single_cale_preview_pane_ParamLimits

0xd1cb,	// (0x0008a8e9) list_single_cale_preview_pane

0xd1e1,	// (0x0008a8ff) list_single_cale_preview_pane_g1

0xd1e9,	// (0x0008a907) list_single_cale_preview_pane_t1_ParamLimits

0xd1e9,	// (0x0008a907) list_single_cale_preview_pane_t1

0xd1fe,	// (0x0008a91c) list_double_cale_preview_pane_g1

0xd206,	// (0x0008a924) list_double_cale_preview_pane_t1_ParamLimits

0xd206,	// (0x0008a924) list_double_cale_preview_pane_t1

0xd21b,	// (0x0008a939) list_double_cale_preview_pane_t2_ParamLimits

0xd21b,	// (0x0008a939) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0008d54e) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0008d54e) list_double_cale_preview_pane_t

0x039e,	// (0x0007dabc) main_ezdial_pane

0x4167,	// (0x00081885) main_sp_fs_email_pane_ParamLimits

0xca00,	// (0x0008a11e) cmail_ddmenu_btn01_pane_ParamLimits

0xca00,	// (0x0008a11e) cmail_ddmenu_btn01_pane

0xca1d,	// (0x0008a13b) cmail_ddmenu_btn02_pane_ParamLimits

0xca1d,	// (0x0008a13b) cmail_ddmenu_btn02_pane

0xca3b,	// (0x0008a159) cmail_ddmenu_btn03_pane_ParamLimits

0xca3b,	// (0x0008a159) cmail_ddmenu_btn03_pane

0xca69,	// (0x0008a187) main_sp_fs_ctrlbar_pane_ParamLimits

0xca85,	// (0x0008a1a3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xce7e,	// (0x0008a59c) list_cmail_body_pane_ParamLimits

0x308f,	// (0x000807ad) bg_button_pane_cp12

0x3098,	// (0x000807b6) list_single_cmail_header_detail_pane_g3_ParamLimits

0x3098,	// (0x000807b6) list_single_cmail_header_detail_pane_g3

0xcf17,	// (0x0008a635) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcf17,	// (0x0008a635) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0008d4d3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0008d4d3) list_single_cmail_header_detail_pane_t

0x31c3,	// (0x000808e1) phacti_term_pane_t2_ParamLimits

0x31c3,	// (0x000808e1) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0008d4dd) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0008d4dd) phacti_term_pane_t

0x3454,	// (0x00080b72) aid_size_list_single_double

0xd233,	// (0x0008a951) popup_ezdial_listscroll_window

0xd253,	// (0x0008a971) popup_number_entry_window_cp01

0xe52f,	// (0x0008bc4d) bg_popup_call_pane_cp09

0x3460,	// (0x00080b7e) ezdial_list_pane

0x3468,	// (0x00080b86) scroll_pane_cp23

0x174a,	// (0x0007ee68) bg_button_pane_cp028_ParamLimits

0x174a,	// (0x0007ee68) bg_button_pane_cp028

0xd261,	// (0x0008a97f) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xd261,	// (0x0008a97f) cmail_ddmenu_btn01_pane_g1

0xd271,	// (0x0008a98f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xd271,	// (0x0008a98f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0008d553) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0008d553) cmail_ddmenu_btn01_pane_g

0x3470,	// (0x00080b8e) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x3470,	// (0x00080b8e) cmail_ddmenu_btn01_pane_t1

0x145f,	// (0x0007eb7d) bg_button_pane_cp029_ParamLimits

0x145f,	// (0x0007eb7d) bg_button_pane_cp029

0xd271,	// (0x0008a98f) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xd271,	// (0x0008a98f) cmail_ddmenu_btn02_pane_g1

0xd289,	// (0x0008a9a7) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xd289,	// (0x0008a9a7) cmail_ddmenu_btn02_pane_t1

0x20c2,	// (0x0007f7e0) bg_button_pane_cp031_ParamLimits

0x20c2,	// (0x0007f7e0) bg_button_pane_cp031

0xd271,	// (0x0008a98f) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xd271,	// (0x0008a98f) cmail_ddmenu_btn03_pane_g1

0xd289,	// (0x0008a9a7) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xd289,	// (0x0008a9a7) cmail_ddmenu_btn03_pane_t1

0xa553,	// (0x00087c71) cell_dialer2_keypad_pane_t1_ParamLimits

0xa56d,	// (0x00087c8b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa56d,	// (0x00087c8b) cell_dialer2_keypad_pane_t1_copy1

0xc241,	// (0x0008995f) ncimui_group_button_pane

0x4167,	// (0x00081885) main_sp_fs_calendar_pane_ParamLimits

0xce9b,	// (0x0008a5b9) list_single_cmail_header_caption_pane_ParamLimits

0xf0da,	// (0x0008c7f8) aid_recal_txt_sm_pane

0x039e,	// (0x0007dabc) mian_recal_day_pane

0x323b,	// (0x00080959) popup_sp_fs_cale_preview_window_ParamLimits

0x039e,	// (0x0007dabc) list_recal_day_pane

0x349e,	// (0x00080bbc) list_single_recal_day_pane_ParamLimits

0x349e,	// (0x00080bbc) list_single_recal_day_pane

0x34b0,	// (0x00080bce) list_single_recal_day_pane_g1_ParamLimits

0x34b0,	// (0x00080bce) list_single_recal_day_pane_g1

0x34bc,	// (0x00080bda) list_single_recal_day_pane_g2_ParamLimits

0x34bc,	// (0x00080bda) list_single_recal_day_pane_g2

0x34cb,	// (0x00080be9) list_single_recal_day_pane_g3_ParamLimits

0x34cb,	// (0x00080be9) list_single_recal_day_pane_g3

0xd2ad,	// (0x0008a9cb) list_single_recal_day_pane_g4_ParamLimits

0xd2ad,	// (0x0008a9cb) list_single_recal_day_pane_g4

0x34d7,	// (0x00080bf5) list_single_recal_day_pane_g5_ParamLimits

0x34d7,	// (0x00080bf5) list_single_recal_day_pane_g5

0x34e6,	// (0x00080c04) list_single_recal_day_pane_g6_ParamLimits

0x34e6,	// (0x00080c04) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0008d562) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0008d562) list_single_recal_day_pane_g

0x34f2,	// (0x00080c10) list_single_recal_day_pane_t1

0x3500,	// (0x00080c1e) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0008d56f) list_single_recal_day_pane_t

0xd2c0,	// (0x0008a9de) ncimui_query_button_pane_ParamLimits

0xd2c0,	// (0x0008a9de) ncimui_query_button_pane

0xd2d0,	// (0x0008a9ee) ncimui_query_button_pane_t1_ParamLimits

0xd2d0,	// (0x0008a9ee) ncimui_query_button_pane_t1

0x350e,	// (0x00080c2c) ncimui_query_button_pane_t2_ParamLimits

0x350e,	// (0x00080c2c) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0008d574) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0008d574) ncimui_query_button_pane_t

0xd2e3,	// (0x0008aa01) query_button_pane_ParamLimits

0xd2e3,	// (0x0008aa01) query_button_pane

0x039e,	// (0x0007dabc) bg_button_pane_cp0028

0x3521,	// (0x00080c3f) query_button_pane_t1

0x89ce,	// (0x000860ec) main_tport_pane_ParamLimits

0xcdae,	// (0x0008a4cc) bg_popup_window_pane_cp01_ParamLimits

0xcdae,	// (0x0008a4cc) bg_popup_window_pane_cp01

0xcdbb,	// (0x0008a4d9) heading_pane_cp08_ParamLimits

0xcdbb,	// (0x0008a4d9) heading_pane_cp08

0xcdc9,	// (0x0008a4e7) heading_pane_cp07_ParamLimits

0xcdc9,	// (0x0008a4e7) heading_pane_cp07

0x3051,	// (0x0008076f) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0008d4c0) cell_tport_appsw_pane_g

0x80ee,	// (0x0008580c) input_candi_list_open_g1

0xdfeb,	// (0x0008b709) list_cale_time_pane_g6_ParamLimits

0xdfeb,	// (0x0008b709) list_cale_time_pane_g6

0x9407,	// (0x00086b25) aid_size_touch_calib_1_ParamLimits

0x9407,	// (0x00086b25) aid_size_touch_calib_1

0x9413,	// (0x00086b31) aid_size_touch_calib_2_ParamLimits

0x9413,	// (0x00086b31) aid_size_touch_calib_2

0x9421,	// (0x00086b3f) aid_size_touch_calib_3_ParamLimits

0x9421,	// (0x00086b3f) aid_size_touch_calib_3

0x9431,	// (0x00086b4f) aid_size_touch_calib_4_ParamLimits

0x9431,	// (0x00086b4f) aid_size_touch_calib_4

0x943f,	// (0x00086b5d) main_touch_calib_button_group_pane_ParamLimits

0x943f,	// (0x00086b5d) main_touch_calib_button_group_pane

0x944d,	// (0x00086b6b) main_touch_calib_pane_g1_ParamLimits

0x9459,	// (0x00086b77) main_touch_calib_pane_g2_ParamLimits

0x9465,	// (0x00086b83) main_touch_calib_pane_g3_ParamLimits

0x9471,	// (0x00086b8f) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0008ce93) main_touch_calib_pane_g_ParamLimits

0x947d,	// (0x00086b9b) main_touch_calib_pane_t1_ParamLimits

0x9494,	// (0x00086bb2) main_touch_calib_pane_t2_ParamLimits

0x94ab,	// (0x00086bc9) main_touch_calib_pane_t3_ParamLimits

0x94bf,	// (0x00086bdd) main_touch_calib_pane_t4_ParamLimits

0x94d3,	// (0x00086bf1) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0008ce9c) main_touch_calib_pane_t_ParamLimits

0x1d0f,	// (0x0007f42d) list_single_fp_cale_pane_g3_ParamLimits

0x1d0f,	// (0x0007f42d) list_single_fp_cale_pane_g3

0xa9b3,	// (0x000880d1) bg_button_pane_cp012_ParamLimits

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp03_ParamLimits

0xb367,	// (0x00088a85) cell_vitu2_function_top_pane_g1_ParamLimits

0xa9b3,	// (0x000880d1) bg_vkb2_func_pane_cp04_ParamLimits

0xc1df,	// (0x000898fd) main_ncimui_button_group_pane_ParamLimits

0xc1df,	// (0x000898fd) main_ncimui_button_group_pane

0xc22f,	// (0x0008994d) main_ncimui_pane_t3_ParamLimits

0xc22f,	// (0x0008994d) main_ncimui_pane_t3

0x3171,	// (0x0008088f) phacti_button_group_pane

0x3454,	// (0x00080b72) aid_size_list_single_double_ParamLimits

0xd233,	// (0x0008a951) popup_ezdial_listscroll_window_ParamLimits

0xd253,	// (0x0008a971) popup_number_entry_window_cp01_ParamLimits

0xd2f0,	// (0x0008aa0e) phacti_button_pane_ParamLimits

0xd2f0,	// (0x0008aa0e) phacti_button_pane

0x039e,	// (0x0007dabc) bg_button_pane_cp14

0x352f,	// (0x00080c4d) phacti_button_pane_t1

0xd301,	// (0x0008aa1f) main_touch_calib_button_pane_ParamLimits

0xd301,	// (0x0008aa1f) main_touch_calib_button_pane

0x4923,	// (0x00082041) bg_button_pane_cp18_ParamLimits

0x4923,	// (0x00082041) bg_button_pane_cp18

0x353d,	// (0x00080c5b) main_touch_calib_button_pane_t1_ParamLimits

0x353d,	// (0x00080c5b) main_touch_calib_button_pane_t1

0x3553,	// (0x00080c71) main_touch_calib_button_pane_t2_ParamLimits

0x3553,	// (0x00080c71) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0008d579) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0008d579) main_touch_calib_button_pane_t

0x039e,	// (0x0007dabc) cell_ncimui_button_pane

0x039e,	// (0x0007dabc) bg_button_pane_cp032

0x3571,	// (0x00080c8f) cell_ncimui_button_pane_t1

0xa5c9,	// (0x00087ce7) image3_infobar_pane_ParamLimits

0xa5c9,	// (0x00087ce7) image3_infobar_pane

0xc58d,	// (0x00089cab) fs_bigclock_status_pane_ParamLimits

0xc58d,	// (0x00089cab) fs_bigclock_status_pane

0xc59a,	// (0x00089cb8) main_fs_bigclock_clock_pane_ParamLimits

0xc59a,	// (0x00089cb8) main_fs_bigclock_clock_pane

0xc5be,	// (0x00089cdc) main_fs_bigclock_indi_pane_ParamLimits

0xc5be,	// (0x00089cdc) main_fs_bigclock_indi_pane

0xc5f1,	// (0x00089d0f) main_fs_bigclock_swipe_pane_ParamLimits

0xc5f1,	// (0x00089d0f) main_fs_bigclock_swipe_pane

0x039e,	// (0x0007dabc) main_fs_clock_dumped_data

0xc623,	// (0x00089d41) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc623,	// (0x00089d41) list_single_fs_bigclock_indicator_pane_g1

0xc644,	// (0x00089d62) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc644,	// (0x00089d62) list_single_fs_bigclock_indicator_pane_g2

0xc65e,	// (0x00089d7c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc65e,	// (0x00089d7c) list_single_fs_bigclock_indicator_pane_g3

0xc678,	// (0x00089d96) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc678,	// (0x00089d96) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0008d3ac) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0008d3ac) list_single_fs_bigclock_indicator_pane_g

0xc69e,	// (0x00089dbc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc69e,	// (0x00089dbc) list_single_fs_bigclock_indicator_pane_t1

0xc6c6,	// (0x00089de4) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc6c6,	// (0x00089de4) list_single_fs_bigclock_indicator_pane_t2

0xc6ee,	// (0x00089e0c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc6ee,	// (0x00089e0c) list_single_fs_bigclock_indicator_pane_t3

0xc716,	// (0x00089e34) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc716,	// (0x00089e34) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0008d3b7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0008d3b7) list_single_fs_bigclock_indicator_pane_t

0x357f,	// (0x00080c9d) image3_infobar_fav_pane_ParamLimits

0x357f,	// (0x00080c9d) image3_infobar_fav_pane

0x358f,	// (0x00080cad) image3_infobar_loc_pane_ParamLimits

0x358f,	// (0x00080cad) image3_infobar_loc_pane

0x35a3,	// (0x00080cc1) image3_infobar_time_pane_ParamLimits

0x35a3,	// (0x00080cc1) image3_infobar_time_pane

0x1965,	// (0x0007f083) image3_infobar_time_pane_g1

0x35b3,	// (0x00080cd1) image3_infobar_time_pane_t1

0x1965,	// (0x0007f083) image3_infobar_loc_pane_g1

0x35c1,	// (0x00080cdf) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0008d57e) image3_infobar_loc_pane_g

0x35c9,	// (0x00080ce7) image3_infobar_loc_pane_t1

0x1965,	// (0x0007f083) image3_infobar_fav_pane_g1

0x35d7,	// (0x00080cf5) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0008d583) image3_infobar_fav_pane_g

0x35df,	// (0x00080cfd) fs_bigclock_status_battery_pane

0x35e8,	// (0x00080d06) fs_bigclock_status_signal_pane

0x35f1,	// (0x00080d0f) fs_bigclock_status_title_pane

0x35fa,	// (0x00080d18) fs_bigclock_status_signal_pane_g1

0x3603,	// (0x00080d21) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0008d588) fs_bigclock_status_signal_pane_g

0x360b,	// (0x00080d29) fs_bigclock_status_battery_pane_g1

0x3614,	// (0x00080d32) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0008d58d) fs_bigclock_status_battery_pane_g

0x361c,	// (0x00080d3a) fs_bigclock_status_title_pane_t1

0x1965,	// (0x0007f083) main_fs_bigclock_clock_pane_g1

0x362a,	// (0x00080d48) main_fs_bigclock_clock_pane_g2

0x362a,	// (0x00080d48) main_fs_bigclock_clock_pane_g3

0x362a,	// (0x00080d48) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0008d592) main_fs_bigclock_clock_pane_g

0xd313,	// (0x0008aa31) main_fs_bigclock_clock_pane_t1

0xd321,	// (0x0008aa3f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0008d59b) main_fs_bigclock_clock_pane_t

0x3632,	// (0x00080d50) list_single_fs_bigclock_indicator_pane_ParamLimits

0x3632,	// (0x00080d50) list_single_fs_bigclock_indicator_pane

0xd330,	// (0x0008aa4e) list_single_fs_bigclock_pane_ParamLimits

0xd330,	// (0x0008aa4e) list_single_fs_bigclock_pane

0x364c,	// (0x00080d6a) main_fs_bigclock_indicator_pane_t1

0x365b,	// (0x00080d79) list_single_fs_bigclock_pane_g1

0x3663,	// (0x00080d81) list_single_fs_bigclock_pane_t1

0x1965,	// (0x0007f083) main_fs_bigclock_swipe_pane_g1

0x36a3,	// (0x00080dc1) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0008d5ac) main_fs_bigclock_swipe_pane_g

0x36ab,	// (0x00080dc9) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x36ab,	// (0x00080dc9) main_fs_bigclock_swipe_pane_t1

0x789e,	// (0x00084fbc) call_type_pane_ParamLimits

0x039e,	// (0x0007dabc) main_btmg_pane

0x3334,	// (0x00080a52) list_single_cale_mrui_row_pane_g2_ParamLimits

0x3334,	// (0x00080a52) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0008d51f) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0008d51f) list_single_cale_mrui_row_pane_g

0x348e,	// (0x00080bac) list_recal_vselct_arw_lo_pane

0x3496,	// (0x00080bb4) list_recal_vselct_arw_up_pane

0xf0e3,	// (0x0008c801) list_recal_vselct_pane

0x36c8,	// (0x00080de6) btmg_button_pane

0xd393,	// (0x0008aab1) main_btmg_pane_g1

0x039e,	// (0x0007dabc) bg_button_pane_cp044

0x36d2,	// (0x00080df0) btmg_button_pane_t1

0x1457,	// (0x0007eb75) aid_listscroll_gen

0x4167,	// (0x00081885) main_cntbar_detail_pane

0x306f,	// (0x0008078d) list_cmail_folder_pane

0x307f,	// (0x0008079d) sp_fs_scroll_pane_cp03_ParamLimits

0xd39b,	// (0x0008aab9) list_single_fs_dyc_pane_cp01_ParamLimits

0xd39b,	// (0x0008aab9) list_single_fs_dyc_pane_cp01

0x36e0,	// (0x00080dfe) aid_size_cmail_indent

0x3e66,	// (0x00081584) list_single_dyc_row_pane_cp01

0xd3dd,	// (0x0008aafb) cntbar_detail_list_pane_ParamLimits

0xd3dd,	// (0x0008aafb) cntbar_detail_list_pane

0xd417,	// (0x0008ab35) main_cntbar_detail_cont_pane_ParamLimits

0xd417,	// (0x0008ab35) main_cntbar_detail_cont_pane

0x7838,	// (0x00084f56) scroll_pane_cp032_ParamLimits

0x7838,	// (0x00084f56) scroll_pane_cp032

0xd423,	// (0x0008ab41) cntbar_detail_list_event_pane_ParamLimits

0xd423,	// (0x0008ab41) cntbar_detail_list_event_pane

0xd3e9,	// (0x0008ab07) cntbar_detail_list_shct_pane

0xde92,	// (0x0008b5b0) aid_list_gen

0x36e9,	// (0x00080e07) aid_scroll

0x36f2,	// (0x00080e10) aid_size_touch_scroll_bar

0xd437,	// (0x0008ab55) aid_list_double

0x36fb,	// (0x00080e19) aid_list_single

0xd440,	// (0x0008ab5e) aid_list_single_lg

0x3704,	// (0x00080e22) aid_list_z_g_a_sm

0x3e6f,	// (0x0008158d) aid_list_z_g_d

0x370c,	// (0x00080e2a) aid_txt_z_prm

0xd449,	// (0x0008ab67) aid_txt_z_prm_cp01

0xd457,	// (0x0008ab75) aid_txt_z_sec

0xd465,	// (0x0008ab83) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd465,	// (0x0008ab83) main_cntbar_detail_cont_pane_g1

0xd472,	// (0x0008ab90) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd472,	// (0x0008ab90) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0008d5b1) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0008d5b1) main_cntbar_detail_cont_pane_g

0x371a,	// (0x00080e38) main_cntbar_detail_cont_pane_t1

0x3728,	// (0x00080e46) main_cntbar_detail_cont_pane_t2

0x3736,	// (0x00080e54) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0008d5b6) main_cntbar_detail_cont_pane_t

0xd47e,	// (0x0008ab9c) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd47e,	// (0x0008ab9c) cell_cntbar_detail_list_shct_pane

0x3744,	// (0x00080e62) cntbar_detail_list_shct_pane_g1

0x374d,	// (0x00080e6b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0008d5bd) cntbar_detail_list_shct_pane_g

0xd492,	// (0x0008abb0) cntbar_detail_list_event_pane_g1_ParamLimits

0xd492,	// (0x0008abb0) cntbar_detail_list_event_pane_g1

0xd49e,	// (0x0008abbc) cntbar_detail_list_event_pane_g2_ParamLimits

0xd49e,	// (0x0008abbc) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0008d5c2) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0008d5c2) cntbar_detail_list_event_pane_g

0xd50a,	// (0x0008ac28) cntbar_detail_list_event_pane_t1_ParamLimits

0xd50a,	// (0x0008ac28) cntbar_detail_list_event_pane_t1

0xd51f,	// (0x0008ac3d) cntbar_detail_list_event_pane_t2_ParamLimits

0xd51f,	// (0x0008ac3d) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0008d5cf) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0008d5cf) cntbar_detail_list_event_pane_t

0x1965,	// (0x0007f083) cell_cntbar_detail_list_shct_pane_g1

0x7c38,	// (0x00085356) navi_pane_mv_g3

0x4167,	// (0x00081885) main_cntbar_detail_pane_ParamLimits

0x039e,	// (0x0007dabc) main_notif_wgt_pane

0xa27d,	// (0x0008799b) aid_tch_main_mp4_pane_g4

0xa4b2,	// (0x00087bd0) popup_slider_window_cp02

0x3485,	// (0x00080ba3) list_recal_day_event_pane

0xd3bd,	// (0x0008aadb) cntbar_detail_btn_pane_ParamLimits

0xd3bd,	// (0x0008aadb) cntbar_detail_btn_pane

0xd3cd,	// (0x0008aaeb) cntbar_detail_btn_pane_cp01_ParamLimits

0xd3cd,	// (0x0008aaeb) cntbar_detail_btn_pane_cp01

0xd3e9,	// (0x0008ab07) cntbar_detail_list_shct_pane_ParamLimits

0xd3f5,	// (0x0008ab13) cntbar_detail_pane_g1_ParamLimits

0xd3f5,	// (0x0008ab13) cntbar_detail_pane_g1

0xd401,	// (0x0008ab1f) cntbar_detail_pane_t1_ParamLimits

0xd401,	// (0x0008ab1f) cntbar_detail_pane_t1

0xd4aa,	// (0x0008abc8) cntbar_detail_list_event_pane_g3_ParamLimits

0xd4aa,	// (0x0008abc8) cntbar_detail_list_event_pane_g3

0xd4c2,	// (0x0008abe0) cntbar_detail_list_event_pane_g4_ParamLimits

0xd4c2,	// (0x0008abe0) cntbar_detail_list_event_pane_g4

0xd4da,	// (0x0008abf8) cntbar_detail_list_event_pane_g5_ParamLimits

0xd4da,	// (0x0008abf8) cntbar_detail_list_event_pane_g5

0xd4f2,	// (0x0008ac10) cntbar_detail_list_event_pane_g6_ParamLimits

0xd4f2,	// (0x0008ac10) cntbar_detail_list_event_pane_g6

0xd534,	// (0x0008ac52) cntbar_detail_list_event_pane_t3_ParamLimits

0xd534,	// (0x0008ac52) cntbar_detail_list_event_pane_t3

0xd546,	// (0x0008ac64) popup_notif_wgt_window_ParamLimits

0xd546,	// (0x0008ac64) popup_notif_wgt_window

0xd556,	// (0x0008ac74) popup_submenu_window_cp01_ParamLimits

0xd556,	// (0x0008ac74) popup_submenu_window_cp01

0xe52f,	// (0x0008bc4d) bg_popup_window_pane_cp10

0x3756,	// (0x00080e74) listscroll_notif_wgt_pane

0x3760,	// (0x00080e7e) list_notif_wgt_window

0x3769,	// (0x00080e87) scroll_pane_cp033

0x3772,	// (0x00080e90) list_notif_wgt_row_pane_ParamLimits

0x3772,	// (0x00080e90) list_notif_wgt_row_pane

0x3784,	// (0x00080ea2) aid_size_list_notif_wgt_del

0x378d,	// (0x00080eab) list_notif_wgt_row_pane_g1

0x3795,	// (0x00080eb3) list_notif_wgt_row_pane_g2

0x379d,	// (0x00080ebb) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0008d5d6) list_notif_wgt_row_pane_g

0x37a6,	// (0x00080ec4) list_notif_wgt_row_pane_t1

0x37b4,	// (0x00080ed2) list_notif_wgt_row_pane_t2

0x37c2,	// (0x00080ee0) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0008d5dd) list_notif_wgt_row_pane_t

0xee5b,	// (0x0008c579) list_recal_day_event_pane_g1

0x37d0,	// (0x00080eee) list_recal_day_event_pane_t1

0x039e,	// (0x0007dabc) bg_button_pane_cp045

0x37df,	// (0x00080efd) cntbar_detail_btn_pane_t1

0x145f,	// (0x0007eb7d) main_callh_pane_ParamLimits

0x145f,	// (0x0007eb7d) main_callh_pane

0x039e,	// (0x0007dabc) main_coverflow0_pane

0x039e,	// (0x0007dabc) main_wgtman_pane

0xc609,	// (0x00089d27) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc609,	// (0x00089d27) main_fs_bigclock_unlock_btn_pane

0x3049,	// (0x00080767) bg_button_pane_cp16

0x3059,	// (0x00080777) cell_tport_appsw_pane_g3

0xd564,	// (0x0008ac82) cf0_flow_pane_ParamLimits

0xd564,	// (0x0008ac82) cf0_flow_pane

0x37ed,	// (0x00080f0b) listscroll_cf0_pane

0x37f6,	// (0x00080f14) main_cf0_pane_g1

0xd573,	// (0x0008ac91) main_cf0_pane_t1_ParamLimits

0xd573,	// (0x0008ac91) main_cf0_pane_t1

0xd587,	// (0x0008aca5) main_cf0_pane_t2_ParamLimits

0xd587,	// (0x0008aca5) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0008d5e4) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0008d5e4) main_cf0_pane_t

0x3800,	// (0x00080f1e) scroll_pane_cp11

0xd59b,	// (0x0008acb9) cf0_flow_pane_g1

0xd5a3,	// (0x0008acc1) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0008d5e9) cf0_flow_pane_g

0xd5ab,	// (0x0008acc9) cf0_flow_pane_t1

0x039e,	// (0x0007dabc) main_call6_pane

0x039e,	// (0x0007dabc) main_calllock_pane

0xd5b9,	// (0x0008acd7) call6_btn_grp_pane_ParamLimits

0xd5b9,	// (0x0008acd7) call6_btn_grp_pane

0xd5c8,	// (0x0008ace6) call6_pane_g1_ParamLimits

0xd5c8,	// (0x0008ace6) call6_pane_g1

0xd5d7,	// (0x0008acf5) popup_call6_1st_window_ParamLimits

0xd5d7,	// (0x0008acf5) popup_call6_1st_window

0xd5e5,	// (0x0008ad03) popup_call6_2nd_window_ParamLimits

0xd5e5,	// (0x0008ad03) popup_call6_2nd_window

0xd5f3,	// (0x0008ad11) cell_call6_btn_pane_ParamLimits

0xd5f3,	// (0x0008ad11) cell_call6_btn_pane

0xe52f,	// (0x0008bc4d) bg_popup_call2_in_pane_cp03

0x380b,	// (0x00080f29) popup_call6_1st_window_g1

0x3813,	// (0x00080f31) popup_call6_1st_window_g2

0x381b,	// (0x00080f39) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0008d5ee) popup_call6_1st_window_g

0x3823,	// (0x00080f41) popup_call6_1st_window_t1

0x3832,	// (0x00080f50) popup_call6_1st_window_t2

0x3842,	// (0x00080f60) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0008d5f5) popup_call6_1st_window_t

0xe52f,	// (0x0008bc4d) bg_popup_call2_in_pane_cp04

0x380b,	// (0x00080f29) popup_call6_2nd_window_g1

0x3813,	// (0x00080f31) popup_call6_2nd_window_g2

0x381b,	// (0x00080f39) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0008d5ee) popup_call6_2nd_window_g

0x3823,	// (0x00080f41) popup_call6_2nd_window_t1

0x039e,	// (0x0007dabc) bg_button_pane_cp15

0x3852,	// (0x00080f70) cell_call6_btn_pane_g1

0x385b,	// (0x00080f79) cell_call6_btn_pane_t1

0xd602,	// (0x0008ad20) listscroll_wgtman_pane_ParamLimits

0xd602,	// (0x0008ad20) listscroll_wgtman_pane

0xd620,	// (0x0008ad3e) wgtman_btn_pane_ParamLimits

0xd620,	// (0x0008ad3e) wgtman_btn_pane

0xe3e6,	// (0x0008bb04) aid_scroll_copy1

0x386a,	// (0x00080f88) list_wgtman_pane

0xd655,	// (0x0008ad73) wgtman_btn_pane_g1_ParamLimits

0xd655,	// (0x0008ad73) wgtman_btn_pane_g1

0xd67d,	// (0x0008ad9b) wgtman_btn_pane_t1_ParamLimits

0xd67d,	// (0x0008ad9b) wgtman_btn_pane_t1

0x3874,	// (0x00080f92) wgtman_btn_pane_t2_ParamLimits

0x3874,	// (0x00080f92) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0008d5fc) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0008d5fc) wgtman_btn_pane_t

0xd6b4,	// (0x0008add2) listrow_wgtman_pane_ParamLimits

0xd6b4,	// (0x0008add2) listrow_wgtman_pane

0xd6cf,	// (0x0008aded) listrow_wgtman_pane_g1

0xd6d8,	// (0x0008adf6) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0008d601) listrow_wgtman_pane_g

0xd6e2,	// (0x0008ae00) listrow_wgtman_pane_t1

0xd6f0,	// (0x0008ae0e) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0008d606) listrow_wgtman_pane_t

0xd6fe,	// (0x0008ae1c) wait_bar_pane_cp09

0x388b,	// (0x00080fa9) main_calllock_btn_pane

0x3895,	// (0x00080fb3) main_calllock_pane_g1

0x039e,	// (0x0007dabc) bg_button_pane_cp17

0x38a1,	// (0x00080fbf) main_calllock_btn_pane_g1

0x38aa,	// (0x00080fc8) main_calllock_btn_pane_t1

0x039e,	// (0x0007dabc) main_dialer3_pane

0x039e,	// (0x0007dabc) main_fmrd2_pane

0x1965,	// (0x0007f083) main_fs_bigclock_unlock_btn_pane_g1

0x38c1,	// (0x00080fdf) main_fs_bigclock_unlock_btn_pane_t1

0xd706,	// (0x0008ae24) area_fmrd2_info_pane_ParamLimits

0xd706,	// (0x0008ae24) area_fmrd2_info_pane

0xd714,	// (0x0008ae32) area_fmrd2_visual_pane_ParamLimits

0xd714,	// (0x0008ae32) area_fmrd2_visual_pane

0xd722,	// (0x0008ae40) fmrd2_indi_pane_ParamLimits

0xd722,	// (0x0008ae40) fmrd2_indi_pane

0xd72f,	// (0x0008ae4d) area_fmrd2_visual_pane_g1

0xd737,	// (0x0008ae55) area_fmrd2_visual_pane_t1

0xd747,	// (0x0008ae65) area_fmrd2_visual_pane_t2

0xd757,	// (0x0008ae75) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0008d610) area_fmrd2_visual_pane_t

0xd767,	// (0x0008ae85) area_fmrd2_info_pane_g1

0xd76f,	// (0x0008ae8d) area_fmrd2_info_pane_t1

0xd77f,	// (0x0008ae9d) area_fmrd2_info_pane_t2

0xd78f,	// (0x0008aead) area_fmrd2_info_pane_t3

0xd79f,	// (0x0008aebd) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0008d617) area_fmrd2_info_pane_t

0xd7ad,	// (0x0008aecb) fmrd2_indi_pane_t1

0xd7bd,	// (0x0008aedb) fmrd2_indi_pane_t2

0xd7cd,	// (0x0008aeeb) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0008d620) fmrd2_indi_pane_t

0xc687,	// (0x00089da5) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc687,	// (0x00089da5) list_single_fs_bigclock_indicator_pane_g5

0xc72b,	// (0x00089e49) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc72b,	// (0x00089e49) list_single_fs_bigclock_indicator_pane_t5

0xcfd5,	// (0x0008a6f3) aid_cell_bcale_month_pane_ParamLimits

0xcfd5,	// (0x0008a6f3) aid_cell_bcale_month_pane

0xcfe1,	// (0x0008a6ff) bcale_month_pane_ParamLimits

0xcfe1,	// (0x0008a6ff) bcale_month_pane

0xcfef,	// (0x0008a70d) bcale_preview_pane_ParamLimits

0xcfef,	// (0x0008a70d) bcale_preview_pane

0x3663,	// (0x00080d81) list_single_fs_bigclock_pane_t1_ParamLimits

0x367f,	// (0x00080d9d) list_single_fs_bigclock_pane_t2_ParamLimits

0x367f,	// (0x00080d9d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0008d5a7) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0008d5a7) list_single_fs_bigclock_pane_t

0x38b9,	// (0x00080fd7) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0008d60b) main_fs_bigclock_unlock_btn_pane_g

0xd7db,	// (0x0008aef9) aid_dia3_key_size_ParamLimits

0xd7db,	// (0x0008aef9) aid_dia3_key_size

0xd7e7,	// (0x0008af05) aid_dia3_listrow_size_ParamLimits

0xd7e7,	// (0x0008af05) aid_dia3_listrow_size

0xd7f7,	// (0x0008af15) dia3_keypad_fun_pane_ParamLimits

0xd7f7,	// (0x0008af15) dia3_keypad_fun_pane

0xd809,	// (0x0008af27) dia3_keypad_num_pane_ParamLimits

0xd809,	// (0x0008af27) dia3_keypad_num_pane

0xd81b,	// (0x0008af39) dia3_listscroll_pane_ParamLimits

0xd81b,	// (0x0008af39) dia3_listscroll_pane

0xd829,	// (0x0008af47) dia3_numentry_pane_ParamLimits

0xd829,	// (0x0008af47) dia3_numentry_pane

0x38cf,	// (0x00080fed) dia3_list_pane

0x38da,	// (0x00080ff8) scroll_pane_cp12

0x039e,	// (0x0007dabc) bg_dia3_numentry_pane

0xd837,	// (0x0008af55) dia3_numentry_pane_t1

0xd846,	// (0x0008af64) cell_dia3_key_num_pane

0xd84e,	// (0x0008af6c) cell_dia3_key0_fun_pane_ParamLimits

0xd84e,	// (0x0008af6c) cell_dia3_key0_fun_pane

0xd85b,	// (0x0008af79) cell_dia3_key1_fun_pane_ParamLimits

0xd85b,	// (0x0008af79) cell_dia3_key1_fun_pane

0xd868,	// (0x0008af86) dia3_listrow_pane

0x2908,	// (0x00080026) bg_dia3_numentry_pane_g1

0x039e,	// (0x0007dabc) bg_button_pane_cp21

0x38e5,	// (0x00081003) cell_dia3_key_num_pane_t1

0x38f3,	// (0x00081011) cell_dia3_key_num_pane_t2

0x3902,	// (0x00081020) cell_dia3_key_num_pane_t3

0x3911,	// (0x0008102f) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0008d627) cell_dia3_key_num_pane_t

0x039e,	// (0x0007dabc) bg_button_pane_cp19

0xd875,	// (0x0008af93) cell_dia3_key0_fun_pane_g1

0x039e,	// (0x0007dabc) bg_button_pane_cp20

0xd87d,	// (0x0008af9b) cell_dia3_key1_fun_pane_g1

0xd885,	// (0x0008afa3) area_left_week_number_pane

0x3e66,	// (0x00081584) area_top_day_name_pane

0xd88e,	// (0x0008afac) frame_month_view_pane

0xd898,	// (0x0008afb6) grid_month_view_pane

0xd8a2,	// (0x0008afc0) cell_top_day_name_pane_ParamLimits

0xd8a2,	// (0x0008afc0) cell_top_day_name_pane

0xd8bc,	// (0x0008afda) cell_area_left_week_number_pane_ParamLimits

0xd8bc,	// (0x0008afda) cell_area_left_week_number_pane

0xd8d0,	// (0x0008afee) cell_month_view_pane_ParamLimits

0xd8d0,	// (0x0008afee) cell_month_view_pane

0x3920,	// (0x0008103e) frm_month_g1

0xd8ed,	// (0x0008b00b) frm_month_g2

0xd8f7,	// (0x0008b015) frm_month_g3

0xd901,	// (0x0008b01f) frm_month_g4

0xd90b,	// (0x0008b029) frm_month_g5

0xd915,	// (0x0008b033) frm_month_g6

0xd91f,	// (0x0008b03d) frm_month_g7

0x3929,	// (0x00081047) frm_month_g8

0xd929,	// (0x0008b047) frm_month_g9

0xd932,	// (0x0008b050) frm_month_g10

0xd93b,	// (0x0008b059) frm_month_g11

0xd944,	// (0x0008b062) frm_month_g12

0xd94d,	// (0x0008b06b) frm_month_g13

0xd956,	// (0x0008b074) frm_month_g14

0xd95f,	// (0x0008b07d) frm_month_g15

0xd96a,	// (0x0008b088) frm_month_g16

0x000f,

0xff12,	// (0x0008d630) frm_month_g

0xd975,	// (0x0008b093) cell_top_day_name_pane_t1

0xd984,	// (0x0008b0a2) cell_area_left_week_number_pane_g1

0xd975,	// (0x0008b093) cell_area_left_week_number_pane_t1

0x1965,	// (0x0007f083) cell_month_view_pane_g1

0xd98c,	// (0x0008b0aa) cell_month_view_pane_t1

0x039e,	// (0x0007dabc) main_fps_pane

0x2dbd,	// (0x000804db) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x2dbd,	// (0x000804db) cmail_ddmenu_btn02_pane_cp1

0x2dd9,	// (0x000804f7) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x2dd9,	// (0x000804f7) cmail_ddmenu_btn02_pane_cp2

0xd27d,	// (0x0008a99b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xd27d,	// (0x0008a99b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0008d558) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0008d558) cmail_ddmenu_btn02_pane_g

0xd29b,	// (0x0008a9b9) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xd29b,	// (0x0008a9b9) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0008d55d) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0008d55d) cmail_ddmenu_btn02_pane_t

0xd99b,	// (0x0008b0b9) fps_text_pane_ParamLimits

0xd99b,	// (0x0008b0b9) fps_text_pane

0xd9a8,	// (0x0008b0c6) main_fps_pane_g1_ParamLimits

0xd9a8,	// (0x0008b0c6) main_fps_pane_g1

0xd9b6,	// (0x0008b0d4) wait_bar_pane_cp010_ParamLimits

0xd9b6,	// (0x0008b0d4) wait_bar_pane_cp010

0xd9c2,	// (0x0008b0e0) fps_text_pane_t1_ParamLimits

0xd9c2,	// (0x0008b0e0) fps_text_pane_t1

0xa8a2,	// (0x00087fc0) cam4_image_uncrop_pane_g1

0xa8ab,	// (0x00087fc9) cam4_image_uncrop_pane_g2

0xa8b4,	// (0x00087fd2) cam4_image_uncrop_pane_g3

0xa8bd,	// (0x00087fdb) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0008d02b) cam4_image_uncrop_pane_g

0xd868,	// (0x0008af86) dia3_listrow_pane_ParamLimits

0x039e,	// (0x0007dabc) main_phob2_pane

0xce10,	// (0x0008a52e) cell_tport_appsw_pane_cp02_ParamLimits

0xce10,	// (0x0008a52e) cell_tport_appsw_pane_cp02

0xce1f,	// (0x0008a53d) cell_tport_appsw_pane_cp03_ParamLimits

0xce1f,	// (0x0008a53d) cell_tport_appsw_pane_cp03

0x039e,	// (0x0007dabc) phob2_contact_card_pane

0x039e,	// (0x0007dabc) phob2_listscroll_pane

0x3932,	// (0x00081050) phob2_list_pane

0x393a,	// (0x00081058) scroll_pane_cp034

0xd9db,	// (0x0008b0f9) phob2_cc_data_pane_ParamLimits

0xd9db,	// (0x0008b0f9) phob2_cc_data_pane

0xd9f5,	// (0x0008b113) phob2_cc_listscroll_pane_ParamLimits

0xd9f5,	// (0x0008b113) phob2_cc_listscroll_pane

0xda0f,	// (0x0008b12d) list_double_large_graphic_phob2_pane_ParamLimits

0xda0f,	// (0x0008b12d) list_double_large_graphic_phob2_pane

0x3942,	// (0x00081060) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x3942,	// (0x00081060) list_double_large_graphic_phob2_pane_g1

0x394f,	// (0x0008106d) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x394f,	// (0x0008106d) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0008d651) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0008d651) list_double_large_graphic_phob2_pane_g

0x395b,	// (0x00081079) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x395b,	// (0x00081079) list_double_large_graphic_phob2_pane_t1

0x3970,	// (0x0008108e) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x3970,	// (0x0008108e) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0008d656) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0008d656) list_double_large_graphic_phob2_pane_t

0x039e,	// (0x0007dabc) list_highlight_pane_cp024

0x3982,	// (0x000810a0) phob2_cc_button_pane

0xda2d,	// (0x0008b14b) phob2_cc_data_pane_g1_ParamLimits

0xda2d,	// (0x0008b14b) phob2_cc_data_pane_g1

0xda39,	// (0x0008b157) phob2_cc_data_pane_g2_ParamLimits

0xda39,	// (0x0008b157) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0008d65b) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0008d65b) phob2_cc_data_pane_g

0xda45,	// (0x0008b163) phob2_cc_data_pane_t1_ParamLimits

0xda45,	// (0x0008b163) phob2_cc_data_pane_t1

0xda57,	// (0x0008b175) phob2_cc_data_pane_t2_ParamLimits

0xda57,	// (0x0008b175) phob2_cc_data_pane_t2

0xda69,	// (0x0008b187) phob2_cc_data_pane_t3_ParamLimits

0xda69,	// (0x0008b187) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0008d660) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0008d660) phob2_cc_data_pane_t

0x398a,	// (0x000810a8) phob2_cc_list_pane_ParamLimits

0x398a,	// (0x000810a8) phob2_cc_list_pane

0xf0ce,	// (0x0008c7ec) scroll_pane_cp035_ParamLimits

0xf0ce,	// (0x0008c7ec) scroll_pane_cp035

0x4167,	// (0x00081885) bg_button_pane_cp033

0x3996,	// (0x000810b4) phob2_cc_button_pane_g1

0x39a2,	// (0x000810c0) phob2_cc_button_pane_t1

0x39b7,	// (0x000810d5) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0008d667) phob2_cc_button_pane_t

0xda7b,	// (0x0008b199) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xda7b,	// (0x0008b199) list_double_large_graphic_phob2_cc_pane

0xdaa2,	// (0x0008b1c0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xdaa2,	// (0x0008b1c0) list_double_large_graphic_phob2_cc_pane_g1

0xdab3,	// (0x0008b1d1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xdab3,	// (0x0008b1d1) list_double_large_graphic_phob2_cc_pane_g2

0xdac2,	// (0x0008b1e0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xdac2,	// (0x0008b1e0) list_double_large_graphic_phob2_cc_pane_g3

0xdad1,	// (0x0008b1ef) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xdad1,	// (0x0008b1ef) list_double_large_graphic_phob2_cc_pane_g4

0xdae2,	// (0x0008b200) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xdae2,	// (0x0008b200) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0008d66c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0008d66c) list_double_large_graphic_phob2_cc_pane_g

0xdaf1,	// (0x0008b20f) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xdaf1,	// (0x0008b20f) list_double_large_graphic_phob2_cc_pane_t1

0xdb1a,	// (0x0008b238) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xdb1a,	// (0x0008b238) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0008d677) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0008d677) list_double_large_graphic_phob2_cc_pane_t

0x39c9,	// (0x000810e7) list_highlight_pane_cp025_ParamLimits

0x39c9,	// (0x000810e7) list_highlight_pane_cp025

0x4167,	// (0x00081885) bg_button_pane_cp033_ParamLimits

0x3996,	// (0x000810b4) phob2_cc_button_pane_g1_ParamLimits

0x39a2,	// (0x000810c0) phob2_cc_button_pane_t1_ParamLimits

0x39b7,	// (0x000810d5) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0008d667) phob2_cc_button_pane_t_ParamLimits

0x595e,	// (0x0008307c) popup_wgtman_window

0xed37,	// (0x0008c455) scroll_pane_cp038

0xd63d,	// (0x0008ad5b) wgtman_btn_pane_cp_01_ParamLimits

0xd63d,	// (0x0008ad5b) wgtman_btn_pane_cp_01

0x39d7,	// (0x000810f5) wgtman_content_pane

0x39e0,	// (0x000810fe) wgtman_heading_pane

0x039e,	// (0x0007dabc) bg_heading_pane_cp02

0x39e9,	// (0x00081107) wgtman_heading_pane_g1

0x39f1,	// (0x0008110f) wgtman_heading_pane_t1

0x39ff,	// (0x0008111d) scroll_pane_cp036

0x3a07,	// (0x00081125) wgtman_list_pane

0x3a0f,	// (0x0008112d) wgtman_list_pane_t1_ParamLimits

0x3a0f,	// (0x0008112d) wgtman_list_pane_t1

0xa801,	// (0x00087f1f) cam4_grid_pane

0xb526,	// (0x00088c44) bg_button_pane_cp015_ParamLimits

0xb538,	// (0x00088c56) bg_button_pane_cp016_ParamLimits

0xb54b,	// (0x00088c69) bg_button_pane_cp017_ParamLimits

0xb5a1,	// (0x00088cbf) popup_vitu2_query_window_g3_ParamLimits

0xb5a1,	// (0x00088cbf) popup_vitu2_query_window_g3

0xb65c,	// (0x00088d7a) popup_vitu2_query_window_t6_ParamLimits

0xb65c,	// (0x00088d7a) popup_vitu2_query_window_t6

0xb687,	// (0x00088da5) popup_vitu2_query_window_t7_ParamLimits

0xb687,	// (0x00088da5) popup_vitu2_query_window_t7

0x4261,	// (0x0008197f) cam4_grid_pane_g1

0x426a,	// (0x00081988) cam4_grid_pane_g2

0x3a2c,	// (0x0008114a) cam4_grid_pane_g3

0x3a35,	// (0x00081153) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0008d67c) cam4_grid_pane_g

0x68cc,	// (0x00083fea) aid_placing_vt_slider_lsc_ParamLimits

0x6c18,	// (0x00084336) vidtel_button_pane_ParamLimits

0x6c18,	// (0x00084336) vidtel_button_pane

0x039e,	// (0x0007dabc) bg_button_pane_cp034

0xdb43,	// (0x0008b261) vidtel_button_pane_g1

0x3a40,	// (0x0008115e) vidtel_button_pane_t1

0xee39,	// (0x0008c557) aid_size_vtel_slider_touch

0xf0ce,	// (0x0008c7ec) scroll_pane_cp039

0x2946,	// (0x00080064) ncim_query_button_pane_cp01_ParamLimits

0x2965,	// (0x00080083) ncimui_query_pane_g1_ParamLimits

0x4167,	// (0x00081885) input_focus_pane_cp012_ParamLimits

0x298a,	// (0x000800a8) ncim_query_entry_pane_t1_ParamLimits

0xf0ce,	// (0x0008c7ec) scroll_pane_cp039_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

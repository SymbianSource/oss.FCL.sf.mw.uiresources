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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0009a744 };

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
0x0d8a,	// (0x0009b4ce) Screen

0x0d96,	// (0x0009b4da) application_window

0x0df2,	// (0x0009b536) area_bottom_pane_ParamLimits

0x0df2,	// (0x0009b536) area_bottom_pane

0x0e4b,	// (0x0009b58f) area_top_pane_ParamLimits

0x0e4b,	// (0x0009b58f) area_top_pane

0x0eaf,	// (0x0009b5f3) call_video_uplink_pane_ParamLimits

0x0eaf,	// (0x0009b5f3) call_video_uplink_pane

0x0eee,	// (0x0009b632) main_pane_ParamLimits

0x0eee,	// (0x0009b632) main_pane

0xc917,	// (0x000a705b) context_pane

0x43fb,	// (0x0009eb3f) navi_pane

0x4421,	// (0x0009eb65) popup_cale_events_window_ParamLimits

0x4421,	// (0x0009eb65) popup_cale_events_window

0xc92a,	// (0x000a706e) popup_mup_playback_window

0x4439,	// (0x0009eb7d) signal_pane

0xa8b9,	// (0x000a4ffd) main_browser_pane

0xaa87,	// (0x000a51cb) main_burst_pane

0x4279,	// (0x0009e9bd) main_calc_pane

0xc8fd,	// (0x000a7041) main_cale_day_pane

0x1657,	// (0x0009bd9b) main_cale_month_pane

0xc8fd,	// (0x000a7041) main_cale_week_pane

0xaa87,	// (0x000a51cb) main_call_pane

0xa3e8,	// (0x000a4b2c) main_call_poc_pane

0xaa87,	// (0x000a51cb) main_camera_pane

0xaa87,	// (0x000a51cb) main_chi_dic_pane

0xb26a,	// (0x000a59ae) main_clock_pane

0xa3e8,	// (0x000a4b2c) main_fmradio_pane

0xaa87,	// (0x000a51cb) main_graph_messa_pane

0xa3e8,	// (0x000a4b2c) main_help_pane

0xa8b9,	// (0x000a4ffd) main_im_pane

0xa7f4,	// (0x000a4f38) main_image_pane_ParamLimits

0xa7f4,	// (0x000a4f38) main_image_pane

0xa3e8,	// (0x000a4b2c) main_location2_pane

0xaa87,	// (0x000a51cb) main_location_pane

0xa7f4,	// (0x000a4f38) main_messa_pane

0xa3e8,	// (0x000a4b2c) main_mp2_pane

0xaa87,	// (0x000a51cb) main_mp_pane

0xa3e8,	// (0x000a4b2c) main_msg_pane

0xa3e8,	// (0x000a4b2c) main_mup_eq_pane

0xa3e8,	// (0x000a4b2c) main_mup_pane

0xa8b9,	// (0x000a4ffd) main_notes_pane

0xa3e8,	// (0x000a4b2c) main_pec_pane

0xa3e8,	// (0x000a4b2c) main_phob_pane

0xa3e8,	// (0x000a4b2c) main_pinb_pane

0xa3e8,	// (0x000a4b2c) main_postcard_pane

0xa3e8,	// (0x000a4b2c) main_qdial_pane

0xaa87,	// (0x000a51cb) main_skin_pane

0xa3e8,	// (0x000a4b2c) main_smil2_pane

0xaa87,	// (0x000a51cb) main_smil_pane

0xaa87,	// (0x000a51cb) main_video_pane

0xaa87,	// (0x000a51cb) main_video_tele_pane

0xa7f4,	// (0x000a4f38) main_viewer_pane_ParamLimits

0xa7f4,	// (0x000a4f38) main_viewer_pane

0xaa87,	// (0x000a51cb) main_vorec_pane

0x42c5,	// (0x0009ea09) popup_blid_sat_info_window_ParamLimits

0x42c5,	// (0x0009ea09) popup_blid_sat_info_window

0x42e5,	// (0x0009ea29) popup_dyc_status_message_window_ParamLimits

0x42e5,	// (0x0009ea29) popup_dyc_status_message_window

0x42f5,	// (0x0009ea39) popup_grid_large_graphic_window_ParamLimits

0x42f5,	// (0x0009ea39) popup_grid_large_graphic_window

0x4386,	// (0x0009eaca) popup_loc_request_window_ParamLimits

0x4386,	// (0x0009eaca) popup_loc_request_window

0x43d3,	// (0x0009eb17) popup_wml_address_window_ParamLimits

0x43d3,	// (0x0009eb17) popup_wml_address_window

0x4151,	// (0x0009e895) call_muted_g1

0x3e13,	// (0x0009e557) popup_call_audio_conf_window_ParamLimits

0x3e13,	// (0x0009e557) popup_call_audio_conf_window

0x4161,	// (0x0009e8a5) popup_call_audio_first_window_ParamLimits

0x4161,	// (0x0009e8a5) popup_call_audio_first_window

0x41a1,	// (0x0009e8e5) popup_call_audio_in_window_ParamLimits

0x41a1,	// (0x0009e8e5) popup_call_audio_in_window

0x41c5,	// (0x0009e909) popup_call_audio_out_window_ParamLimits

0x41c5,	// (0x0009e909) popup_call_audio_out_window

0x41e7,	// (0x0009e92b) popup_call_audio_second_window_ParamLimits

0x41e7,	// (0x0009e92b) popup_call_audio_second_window

0x4217,	// (0x0009e95b) popup_call_audio_wait_window_ParamLimits

0x4217,	// (0x0009e95b) popup_call_audio_wait_window

0x4238,	// (0x0009e97c) popup_number_entry_window_ParamLimits

0x4238,	// (0x0009e97c) popup_number_entry_window

0x9ccf,	// (0x000a4413) bg_popup_call_pane_cp05_ParamLimits

0x9ccf,	// (0x000a4413) bg_popup_call_pane_cp05

0x9cef,	// (0x000a4433) popup_number_entry_window_t1

0x9d02,	// (0x000a4446) popup_number_entry_window_t2

0x9d14,	// (0x000a4458) popup_number_entry_window_t3

0x0003,

0xf0af,	// (0x000a97f3) popup_number_entry_window_t

0x9d26,	// (0x000a446a) text_title_cp2

0x9d39,	// (0x000a447d) bg_popup_call_pane_cp_ParamLimits

0x9d39,	// (0x000a447d) bg_popup_call_pane_cp

0x9d47,	// (0x000a448b) call_thumbnail_pane

0x9d4f,	// (0x000a4493) popup_call_audio_in_window_g1_ParamLimits

0x9d4f,	// (0x000a4493) popup_call_audio_in_window_g1

0x9d5b,	// (0x000a449f) popup_call_audio_in_window_g2_ParamLimits

0x9d5b,	// (0x000a449f) popup_call_audio_in_window_g2

0x9d67,	// (0x000a44ab) popup_call_audio_in_window_g3_ParamLimits

0x9d67,	// (0x000a44ab) popup_call_audio_in_window_g3

0x0002,

0xf0b8,	// (0x000a97fc) popup_call_audio_in_window_g_ParamLimits

0xf0b8,	// (0x000a97fc) popup_call_audio_in_window_g

0x9d73,	// (0x000a44b7) popup_call_audio_in_window_t1_ParamLimits

0x9d73,	// (0x000a44b7) popup_call_audio_in_window_t1

0x9d8f,	// (0x000a44d3) popup_call_audio_in_window_t2_ParamLimits

0x9d8f,	// (0x000a44d3) popup_call_audio_in_window_t2

0x9dab,	// (0x000a44ef) popup_call_audio_in_window_t3_ParamLimits

0x9dab,	// (0x000a44ef) popup_call_audio_in_window_t3

0x0002,

0xf0bf,	// (0x000a9803) popup_call_audio_in_window_t_ParamLimits

0xf0bf,	// (0x000a9803) popup_call_audio_in_window_t

0x9d39,	// (0x000a447d) bg_popup_call_pane_cp01_ParamLimits

0x9d39,	// (0x000a447d) bg_popup_call_pane_cp01

0x9d47,	// (0x000a448b) call_thumbnail_pane_cp02

0x9dbe,	// (0x000a4502) call_type_pane_cp022

0x9dc6,	// (0x000a450a) popup_call_audio_out_window_g1_ParamLimits

0x9dc6,	// (0x000a450a) popup_call_audio_out_window_g1

0x9dd8,	// (0x000a451c) popup_call_audio_out_window_g2_ParamLimits

0x9dd8,	// (0x000a451c) popup_call_audio_out_window_g2

0x9de4,	// (0x000a4528) popup_call_audio_out_window_g3_ParamLimits

0x9de4,	// (0x000a4528) popup_call_audio_out_window_g3

0x0002,

0xf0c6,	// (0x000a980a) popup_call_audio_out_window_g_ParamLimits

0xf0c6,	// (0x000a980a) popup_call_audio_out_window_g

0x9df6,	// (0x000a453a) popup_call_audio_out_window_t1_ParamLimits

0x9df6,	// (0x000a453a) popup_call_audio_out_window_t1

0x9e0e,	// (0x000a4552) popup_call_audio_out_window_t2_ParamLimits

0x9e0e,	// (0x000a4552) popup_call_audio_out_window_t2

0x0001,

0xf0cd,	// (0x000a9811) popup_call_audio_out_window_t_ParamLimits

0xf0cd,	// (0x000a9811) popup_call_audio_out_window_t

0x9e23,	// (0x000a4567) bg_popup_call_pane_ParamLimits

0x9e23,	// (0x000a4567) bg_popup_call_pane

0x1107,	// (0x0009b84b) call_thumbnail_pane_cp_ParamLimits

0x1107,	// (0x0009b84b) call_thumbnail_pane_cp

0x9ea7,	// (0x000a45eb) call_type_pane_cp01_ParamLimits

0x9ea7,	// (0x000a45eb) call_type_pane_cp01

0x9eeb,	// (0x000a462f) popup_call_audio_first_window_g1_ParamLimits

0x9eeb,	// (0x000a462f) popup_call_audio_first_window_g1

0x9f37,	// (0x000a467b) popup_call_audio_first_window_g2_ParamLimits

0x9f37,	// (0x000a467b) popup_call_audio_first_window_g2

0x0001,

0xf0d2,	// (0x000a9816) popup_call_audio_first_window_g_ParamLimits

0xf0d2,	// (0x000a9816) popup_call_audio_first_window_g

0x9f7b,	// (0x000a46bf) popup_call_audio_first_window_t1_ParamLimits

0x9f7b,	// (0x000a46bf) popup_call_audio_first_window_t1

0xa027,	// (0x000a476b) popup_call_audio_first_window_t4_ParamLimits

0xa027,	// (0x000a476b) popup_call_audio_first_window_t4

0xa3b9,	// (0x000a4afd) popup_call_audio_first_window_t5_ParamLimits

0xa3b9,	// (0x000a4afd) popup_call_audio_first_window_t5

0x0002,

0xf0d7,	// (0x000a981b) popup_call_audio_first_window_t_ParamLimits

0xf0d7,	// (0x000a981b) popup_call_audio_first_window_t

0xa3e8,	// (0x000a4b2c) bg_popup_call_pane_cp02

0xa3f2,	// (0x000a4b36) call_type_pane_cp023

0xa3fa,	// (0x000a4b3e) popup_call_audio_wait_window_g1

0xa402,	// (0x000a4b46) popup_call_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000a9822) popup_call_audio_wait_window_g

0xa40a,	// (0x000a4b4e) popup_call_audio_wait_window_t3

0xa418,	// (0x000a4b5c) bg_popup_call_pane_cp03_ParamLimits

0xa418,	// (0x000a4b5c) bg_popup_call_pane_cp03

0xa629,	// (0x000a4d6d) call_thumbnail_pane_cp011_ParamLimits

0xa629,	// (0x000a4d6d) call_thumbnail_pane_cp011

0xa635,	// (0x000a4d79) call_type_pane_cp034_ParamLimits

0xa635,	// (0x000a4d79) call_type_pane_cp034

0xa671,	// (0x000a4db5) popup_call_audio_second_window_g1_ParamLimits

0xa671,	// (0x000a4db5) popup_call_audio_second_window_g1

0xa6ad,	// (0x000a4df1) popup_call_audio_second_window_g2_ParamLimits

0xa6ad,	// (0x000a4df1) popup_call_audio_second_window_g2

0x0001,

0xf0e3,	// (0x000a9827) popup_call_audio_second_window_g_ParamLimits

0xf0e3,	// (0x000a9827) popup_call_audio_second_window_g

0xa6e9,	// (0x000a4e2d) popup_call_audio_second_window_t1_ParamLimits

0xa6e9,	// (0x000a4e2d) popup_call_audio_second_window_t1

0xa76a,	// (0x000a4eae) popup_call_audio_second_window_t2_ParamLimits

0xa76a,	// (0x000a4eae) popup_call_audio_second_window_t2

0xa7a0,	// (0x000a4ee4) popup_call_audio_second_window_t3_ParamLimits

0xa7a0,	// (0x000a4ee4) popup_call_audio_second_window_t3

0x0002,

0xf0e8,	// (0x000a982c) popup_call_audio_second_window_t_ParamLimits

0xf0e8,	// (0x000a982c) popup_call_audio_second_window_t

0xa3e8,	// (0x000a4b2c) bg_popup_call_pane_cp04

0xa7d6,	// (0x000a4f1a) list_conf_pane

0xa7de,	// (0x000a4f22) popup_call_audio_conf_window_t1

0xa7ec,	// (0x000a4f30) call_thumbnail_pane_g1

0xa7f4,	// (0x000a4f38) bg_pinb_pane_ParamLimits

0xa7f4,	// (0x000a4f38) bg_pinb_pane

0xa802,	// (0x000a4f46) find_pinb_pane

0xa80b,	// (0x000a4f4f) listscroll_pinb_pane_ParamLimits

0xa80b,	// (0x000a4f4f) listscroll_pinb_pane

0xa81a,	// (0x000a4f5e) pinb_bg_pane_g1

0x112b,	// (0x0009b86f) pinb_bg_pane_g2

0x1137,	// (0x0009b87b) pinb_bg_pane_g3

0x1143,	// (0x0009b887) pinb_bg_pane_g4

0x114f,	// (0x0009b893) pinb_bg_pane_g5

0x115b,	// (0x0009b89f) pinb_bg_pane_g6

0x1166,	// (0x0009b8aa) pinb_bg_pane_g7

0x1171,	// (0x0009b8b5) pinb_bg_pane_g8

0x117c,	// (0x0009b8c0) pinb_bg_pane_g9

0x1186,	// (0x0009b8ca) pinb_bg_pane_g10

0x0009,

0xf0ef,	// (0x000a9833) pinb_bg_pane_g

0x11a3,	// (0x0009b8e7) grid_pinb_pane

0x11ae,	// (0x0009b8f2) list_pinb_pane

0x11b9,	// (0x0009b8fd) scroll_pane_cp01_ParamLimits

0x11b9,	// (0x0009b8fd) scroll_pane_cp01

0xa824,	// (0x000a4f68) find_pinb_pane_g1_ParamLimits

0xa824,	// (0x000a4f68) find_pinb_pane_g1

0xa83c,	// (0x000a4f80) find_pinb_pane_t1

0xa84e,	// (0x000a4f92) find_pinb_pane_t2

0x0001,

0xf109,	// (0x000a984d) find_pinb_pane_t

0xa863,	// (0x000a4fa7) input_focus_pane_cp01_ParamLimits

0xa863,	// (0x000a4fa7) input_focus_pane_cp01

0x11cb,	// (0x0009b90f) cell_pinb_pane_ParamLimits

0x11cb,	// (0x0009b90f) cell_pinb_pane

0x11f3,	// (0x0009b937) cell_pinb_pane_g1_ParamLimits

0x11f3,	// (0x0009b937) cell_pinb_pane_g1

0x1208,	// (0x0009b94c) cell_pinb_pane_g2_ParamLimits

0x1208,	// (0x0009b94c) cell_pinb_pane_g2

0xa86f,	// (0x000a4fb3) cell_pinb_pane_g3_ParamLimits

0xa86f,	// (0x000a4fb3) cell_pinb_pane_g3

0x0002,

0xf10e,	// (0x000a9852) cell_pinb_pane_g_ParamLimits

0xf10e,	// (0x000a9852) cell_pinb_pane_g

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp01

0x1214,	// (0x0009b958) list_pinb_item_pane_ParamLimits

0x1214,	// (0x0009b958) list_pinb_item_pane

0xa3e8,	// (0x000a4b2c) list_highlight_pane_cp02

0x123a,	// (0x0009b97e) list_pinb_item_pane_g1_ParamLimits

0x123a,	// (0x0009b97e) list_pinb_item_pane_g1

0x1247,	// (0x0009b98b) list_pinb_item_pane_g2_ParamLimits

0x1247,	// (0x0009b98b) list_pinb_item_pane_g2

0x1253,	// (0x0009b997) list_pinb_item_pane_g3_ParamLimits

0x1253,	// (0x0009b997) list_pinb_item_pane_g3

0x1264,	// (0x0009b9a8) list_pinb_item_pane_g4_ParamLimits

0x1264,	// (0x0009b9a8) list_pinb_item_pane_g4

0x0003,

0xf115,	// (0x000a9859) list_pinb_item_pane_g_ParamLimits

0xf115,	// (0x000a9859) list_pinb_item_pane_g

0x1270,	// (0x0009b9b4) list_pinb_item_pane_t1_ParamLimits

0x1270,	// (0x0009b9b4) list_pinb_item_pane_t1

0x12a1,	// (0x0009b9e5) calc_display_pane

0x12bf,	// (0x0009ba03) calc_paper_pane

0x12db,	// (0x0009ba1f) grid_calc_pane

0xa3e8,	// (0x000a4b2c) bg_list_pane_cp01

0x1307,	// (0x0009ba4b) clock_g1

0x130f,	// (0x0009ba53) clock_g2

0x0001,

0xf11e,	// (0x000a9862) clock_g

0x1319,	// (0x0009ba5d) clock_t1_ParamLimits

0x1319,	// (0x0009ba5d) clock_t1

0x132e,	// (0x0009ba72) clock_t2_ParamLimits

0x132e,	// (0x0009ba72) clock_t2

0x1340,	// (0x0009ba84) clock_t3_ParamLimits

0x1340,	// (0x0009ba84) clock_t3

0x1352,	// (0x0009ba96) clock_t4_ParamLimits

0x1352,	// (0x0009ba96) clock_t4

0x1364,	// (0x0009baa8) clock_t5_ParamLimits

0x1364,	// (0x0009baa8) clock_t5

0x1379,	// (0x0009babd) clock_t6_ParamLimits

0x1379,	// (0x0009babd) clock_t6

0x138b,	// (0x0009bacf) clock_t7_ParamLimits

0x138b,	// (0x0009bacf) clock_t7

0x139d,	// (0x0009bae1) clock_t8_ParamLimits

0x139d,	// (0x0009bae1) clock_t8

0x13b3,	// (0x0009baf7) clock_t9_ParamLimits

0x13b3,	// (0x0009baf7) clock_t9

0x0008,

0xf123,	// (0x000a9867) clock_t_ParamLimits

0xf123,	// (0x000a9867) clock_t

0xa87b,	// (0x000a4fbf) popup_clock_analogue_window_cp02

0xa87b,	// (0x000a4fbf) popup_clock_digital_window_cp01

0xa883,	// (0x000a4fc7) listscroll_help_pane

0xa3e8,	// (0x000a4b2c) phob_pre_status_pane

0xa88d,	// (0x000a4fd1) grid_qdial_pane

0xa7f4,	// (0x000a4f38) listscroll_mce_pane

0xa7f4,	// (0x000a4f38) bg_notes_pane

0xa897,	// (0x000a4fdb) list_notes_pane

0x13c9,	// (0x0009bb0d) scroll_pane_cp06

0xa8a5,	// (0x000a4fe9) bg_calc_paper_pane

0x13d8,	// (0x0009bb1c) list_calc_pane

0xa8b9,	// (0x000a4ffd) bg_calc_display_pane

0x13f2,	// (0x0009bb36) calc_display_pane_t1

0x1407,	// (0x0009bb4b) calc_display_pane_t2

0x141c,	// (0x0009bb60) calc_display_pane_t3

0x0002,

0xf136,	// (0x000a987a) calc_display_pane_t

0x142e,	// (0x0009bb72) cell_calc_pane_ParamLimits

0x142e,	// (0x0009bb72) cell_calc_pane

0xa8c5,	// (0x000a5009) bg_calc_paper_pane_g1

0xa8d1,	// (0x000a5015) bg_calc_paper_pane_g2

0xa8dd,	// (0x000a5021) bg_calc_paper_pane_g3

0xa8e9,	// (0x000a502d) bg_calc_paper_pane_g4

0xa8f5,	// (0x000a5039) bg_calc_paper_pane_g5

0x145b,	// (0x0009bb9f) bg_calc_paper_pane_g6

0x146c,	// (0x0009bbb0) bg_calc_paper_pane_g7

0x147d,	// (0x0009bbc1) bg_calc_paper_pane_g8

0x0007,

0xf13d,	// (0x000a9881) bg_calc_paper_pane_g

0x148e,	// (0x0009bbd2) calc_bg_paper_pane_g9

0x149f,	// (0x0009bbe3) list_calc_item_pane_ParamLimits

0x149f,	// (0x0009bbe3) list_calc_item_pane

0xa901,	// (0x000a5045) list_calc_item_pane_g1

0x14cb,	// (0x0009bc0f) list_calc_item_pane_t1_ParamLimits

0x14cb,	// (0x0009bc0f) list_calc_item_pane_t1

0x14dd,	// (0x0009bc21) list_calc_item_pane_t2_ParamLimits

0x14dd,	// (0x0009bc21) list_calc_item_pane_t2

0x0001,

0xf14e,	// (0x000a9892) list_calc_item_pane_t_ParamLimits

0xf14e,	// (0x000a9892) list_calc_item_pane_t

0xa90e,	// (0x000a5052) cell_calc_pane_g1

0xa918,	// (0x000a505c) grid_highlight_pane_cp02

0x150d,	// (0x0009bc51) bg_calc_display_pane_g1

0x1516,	// (0x0009bc5a) bg_calc_display_pane_g2

0x1520,	// (0x0009bc64) bg_calc_display_pane_g3

0x0002,

0xf158,	// (0x000a989c) bg_calc_display_pane_g

0x1529,	// (0x0009bc6d) cell_qdial_pane_ParamLimits

0x1529,	// (0x0009bc6d) cell_qdial_pane

0x153d,	// (0x0009bc81) cell_qdial_pane_g1_ParamLimits

0x153d,	// (0x0009bc81) cell_qdial_pane_g1

0x154a,	// (0x0009bc8e) cell_qdial_pane_g2_ParamLimits

0x154a,	// (0x0009bc8e) cell_qdial_pane_g2

0xa93a,	// (0x000a507e) cell_qdial_pane_g3_ParamLimits

0xa93a,	// (0x000a507e) cell_qdial_pane_g3

0x0003,

0xf15f,	// (0x000a98a3) cell_qdial_pane_g_ParamLimits

0xf15f,	// (0x000a98a3) cell_qdial_pane_g

0x1568,	// (0x0009bcac) cell_qdial_pane_t1_ParamLimits

0x1568,	// (0x0009bcac) cell_qdial_pane_t1

0x1580,	// (0x0009bcc4) cell_qdial_pane_t2_ParamLimits

0x1580,	// (0x0009bcc4) cell_qdial_pane_t2

0x1593,	// (0x0009bcd7) cell_qdial_pane_t3_ParamLimits

0x1593,	// (0x0009bcd7) cell_qdial_pane_t3

0x0002,

0xf168,	// (0x000a98ac) cell_qdial_pane_t_ParamLimits

0xf168,	// (0x000a98ac) cell_qdial_pane_t

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp04

0xa946,	// (0x000a508a) thumbnail_qdial_pane_ParamLimits

0xa946,	// (0x000a508a) thumbnail_qdial_pane

0xa9a2,	// (0x000a50e6) list_help_pane

0xa9ab,	// (0x000a50ef) scroll_pane_cp02

0x15a6,	// (0x0009bcea) help_list_pane_t1_ParamLimits

0x15a6,	// (0x0009bcea) help_list_pane_t1

0x15d9,	// (0x0009bd1d) bg_notes_pane_g2

0x15e1,	// (0x0009bd25) bg_notes_pane_g3

0x15e9,	// (0x0009bd2d) notes_bg_pane_g1

0x15f1,	// (0x0009bd35) notes_bg_pane_g4

0x15f9,	// (0x0009bd3d) notes_bg_pane_g5

0x1601,	// (0x0009bd45) notes_bg_pane_g6

0x1609,	// (0x0009bd4d) notes_bg_pane_g7

0x1611,	// (0x0009bd55) notes_bg_pane_g8

0x1619,	// (0x0009bd5d) notes_bg_pane_g9

0x0006,

0xf186,	// (0x000a98ca) notes_bg_pane_g

0x1621,	// (0x0009bd65) list_notes_text_pane_ParamLimits

0x1621,	// (0x0009bd65) list_notes_text_pane

0xa9b4,	// (0x000a50f8) list_notes_text_pane_g1

0x1649,	// (0x0009bd8d) list_notes_text_pane_t1

0x1657,	// (0x0009bd9b) listscroll_cale_week_pane

0x167c,	// (0x0009bdc0) bg_cale_heading_pane

0xa9d7,	// (0x000a511b) bg_cale_pane_cp01

0x169c,	// (0x0009bde0) cale_week_corner_pane

0x16b6,	// (0x0009bdfa) cale_week_day_heading_pane

0x16d6,	// (0x0009be1a) cale_week_scroll_pane_g1

0x16f1,	// (0x0009be35) cale_week_scroll_pane_g2

0x1704,	// (0x0009be48) cale_week_scroll_pane_g3

0x1717,	// (0x0009be5b) cale_week_scroll_pane_g4

0x172a,	// (0x0009be6e) cale_week_scroll_pane_g5

0x173d,	// (0x0009be81) cale_week_scroll_pane_g6

0x1750,	// (0x0009be94) cale_week_scroll_pane_g7

0x1765,	// (0x0009bea9) cale_week_scroll_pane_g8

0x177a,	// (0x0009bebe) cale_week_scroll_pane_g9

0x178d,	// (0x0009bed1) cale_week_scroll_pane_g10

0x17a0,	// (0x0009bee4) cale_week_scroll_pane_g11

0x17b3,	// (0x0009bef7) cale_week_scroll_pane_g12

0x17ca,	// (0x0009bf0e) cale_week_scroll_pane_g13

0x17e5,	// (0x0009bf29) cale_week_scroll_pane_g14

0x1800,	// (0x0009bf44) cale_week_scroll_pane_g15

0x000f,

0xf195,	// (0x000a98d9) cale_week_scroll_pane_g

0x1830,	// (0x0009bf74) cale_week_time_pane

0x1845,	// (0x0009bf89) grid_cale_week_pane

0xaa06,	// (0x000a514a) scroll_pane_cp08

0x1864,	// (0x0009bfa8) cell_cale_week_pane_ParamLimits

0x1864,	// (0x0009bfa8) cell_cale_week_pane

0x18c6,	// (0x0009c00a) cale_week_day_heading_pane_t1

0x18e1,	// (0x0009c025) cale_week_day_heading_pane_t2

0x18fc,	// (0x0009c040) cale_week_day_heading_pane_t3

0x1917,	// (0x0009c05b) cale_week_day_heading_pane_t4

0x1932,	// (0x0009c076) cale_week_day_heading_pane_t5

0x194d,	// (0x0009c091) cale_week_day_heading_pane_t6

0x1968,	// (0x0009c0ac) cale_week_day_heading_pane_t7

0x0006,

0xf1b6,	// (0x000a98fa) cale_week_day_heading_pane_t

0xaa23,	// (0x000a5167) bg_cale_side_pane

0x1983,	// (0x0009c0c7) cale_week_time_pane_t1

0x199d,	// (0x0009c0e1) cale_week_time_pane_t2

0x19b7,	// (0x0009c0fb) cale_week_time_pane_t3

0x19d1,	// (0x0009c115) cale_week_time_pane_t4

0x19eb,	// (0x0009c12f) cale_week_time_pane_t5

0x1a05,	// (0x0009c149) cale_week_time_pane_t6

0x1a23,	// (0x0009c167) cale_week_time_pane_t7

0x1a45,	// (0x0009c189) cale_week_time_pane_t8

0x0007,

0xf1c5,	// (0x000a9909) cale_week_time_pane_t

0x1a69,	// (0x0009c1ad) cell_cale_week_pane_g2

0x1a8d,	// (0x0009c1d1) cell_cale_week_pane_g3_ParamLimits

0x1a8d,	// (0x0009c1d1) cell_cale_week_pane_g3

0xaa31,	// (0x000a5175) grid_highlight_pane_cp07

0xaa39,	// (0x000a517d) listscroll_gms_pane

0xaa43,	// (0x000a5187) grid_gms_pane

0xaa4c,	// (0x000a5190) listscroll_gms_pane_g1

0xaa54,	// (0x000a5198) listscroll_gms_pane_g2

0x0001,

0xf1d6,	// (0x000a991a) listscroll_gms_pane_g

0x1aa5,	// (0x0009c1e9) scroll_pane_cp010

0x1ab0,	// (0x0009c1f4) cell_gms_pane_ParamLimits

0x1ab0,	// (0x0009c1f4) cell_gms_pane

0x1ac3,	// (0x0009c207) cell_gms_pane_g1

0xaa65,	// (0x000a51a9) cell_gms_pane_g2

0xaa6d,	// (0x000a51b1) cell_gms_pane_g3

0xaa76,	// (0x000a51ba) cell_gms_pane_g4

0x0003,

0xf1db,	// (0x000a991f) cell_gms_pane_g

0xaa7f,	// (0x000a51c3) grid_highlight_pane_cp09

0x40f9,	// (0x0009e83d) phob_pre_status_pane_g1

0x4101,	// (0x0009e845) phob_pre_status_pane_g2

0x4109,	// (0x0009e84d) phob_pre_status_pane_g3

0x4111,	// (0x0009e855) phob_pre_status_pane_g4

0x0004,

0xf504,	// (0x000a9c48) phob_pre_status_pane_g

0x4121,	// (0x0009e865) phob_pre_status_pane_t1

0x4131,	// (0x0009e875) phob_pre_status_pane_t2

0x4141,	// (0x0009e885) phob_pre_status_pane_t3

0x0002,

0xf50f,	// (0x000a9c53) phob_pre_status_pane_t

0xaa87,	// (0x000a51cb) bg_list_pane_cp05

0x1ad3,	// (0x0009c217) grid_vorec_pane

0x1add,	// (0x0009c221) vorec_t1

0x1aeb,	// (0x0009c22f) vorec_t2

0x1af9,	// (0x0009c23d) vorec_t3

0x1b07,	// (0x0009c24b) vorec_t4

0x9c6d,	// (0x000a43b1) vorec_t5

0x9c7b,	// (0x000a43bf) vorec_t6

0x0004,

0xf1e4,	// (0x000a9928) vorec_t

0x9c89,	// (0x000a43cd) wait_bar_pane_cp01

0x1b23,	// (0x0009c267) cell_vorec_pane_ParamLimits

0x1b23,	// (0x0009c267) cell_vorec_pane

0x1b36,	// (0x0009c27a) cell_vorec_pane_g1

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp05

0x1b50,	// (0x0009c294) cams_zoom_pane

0x1b5c,	// (0x0009c2a0) image_vga_pane

0x1b6b,	// (0x0009c2af) main_camera_pane_g1

0x1b79,	// (0x0009c2bd) main_camera_pane_g2

0x1b85,	// (0x0009c2c9) main_camera_pane_g3

0x1b91,	// (0x0009c2d5) main_camera_pane_g4

0x1b9d,	// (0x0009c2e1) main_camera_pane_g5

0x1ba9,	// (0x0009c2ed) main_camera_pane_g6

0x1bb5,	// (0x0009c2f9) main_camera_pane_g7

0x0007,

0xf1ef,	// (0x000a9933) main_camera_pane_g

0x1bc1,	// (0x0009c305) main_camera_pane_t1

0x1bd3,	// (0x0009c317) main_camera_pane_t2

0x0001,

0xf200,	// (0x000a9944) main_camera_pane_t

0x1bf4,	// (0x0009c338) cams_zoom_pane_cp_ParamLimits

0x1bf4,	// (0x0009c338) cams_zoom_pane_cp

0x1c18,	// (0x0009c35c) image_cif_pane_ParamLimits

0x1c18,	// (0x0009c35c) image_cif_pane

0x1c36,	// (0x0009c37a) image_subqcif_pane

0x1c3e,	// (0x0009c382) main_video_pane_g1_ParamLimits

0x1c3e,	// (0x0009c382) main_video_pane_g1

0x1c5e,	// (0x0009c3a2) main_video_pane_g2_ParamLimits

0x1c5e,	// (0x0009c3a2) main_video_pane_g2

0x1c8e,	// (0x0009c3d2) main_video_pane_g3_ParamLimits

0x1c8e,	// (0x0009c3d2) main_video_pane_g3

0x1cb7,	// (0x0009c3fb) main_video_pane_g4_ParamLimits

0x1cb7,	// (0x0009c3fb) main_video_pane_g4

0x1ce0,	// (0x0009c424) main_video_pane_g5_ParamLimits

0x1ce0,	// (0x0009c424) main_video_pane_g5

0xaa9b,	// (0x000a51df) main_video_pane_g6_ParamLimits

0xaa9b,	// (0x000a51df) main_video_pane_g6

0x0006,

0xf205,	// (0x000a9949) main_video_pane_g_ParamLimits

0xf205,	// (0x000a9949) main_video_pane_g

0x1d02,	// (0x0009c446) main_video_pane_t1_ParamLimits

0x1d02,	// (0x0009c446) main_video_pane_t1

0xaab5,	// (0x000a51f9) cams_zoom_pane_g1

0xaabe,	// (0x000a5202) cams_zoom_pane_g2

0xaac7,	// (0x000a520b) cams_zoom_pane_g3

0xaad0,	// (0x000a5214) cams_zoom_pane_g4

0x0003,

0xf214,	// (0x000a9958) cams_zoom_pane_g

0x1d4c,	// (0x0009c490) grid_cams_pane

0x1d5a,	// (0x0009c49e) linegrid_cams_pane

0x1d68,	// (0x0009c4ac) cell_cams_pane_ParamLimits

0x1d68,	// (0x0009c4ac) cell_cams_pane

0xaad9,	// (0x000a521d) cams_burst_image_pane

0xaae1,	// (0x000a5225) cell_cams_pane_g1

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp03

0xa90e,	// (0x000a5052) mp_bg_pane_g1

0xa3e8,	// (0x000a4b2c) bg_list_pane_cp03

0xc822,	// (0x000a6f66) bg_mp_pane

0xc82a,	// (0x000a6f6e) grid_mp_pane

0xc832,	// (0x000a6f76) media_player_g1

0xc83a,	// (0x000a6f7e) media_player_t1

0xc848,	// (0x000a6f8c) media_player_t2

0xc856,	// (0x000a6f9a) media_player_t3

0xc864,	// (0x000a6fa8) media_player_t4

0xc872,	// (0x000a6fb6) media_player_t5

0xc880,	// (0x000a6fc4) media_player_t6

0xc88e,	// (0x000a6fd2) media_player_t7

0x0006,

0x02fb,	// (0x0009aa3f) media_player_t

0xc89c,	// (0x000a6fe0) wait_bar_pane_cp02

0xf4f0,	// (0x000a9c34) main_usb_pane_t

0x40f0,	// (0x0009e834) cell_mp_pane

0xa90e,	// (0x000a5052) cell_mp_pane_g1

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp06

0xaae9,	// (0x000a522d) grid_skin_colour_pane

0xaaf1,	// (0x000a5235) list_highlight_pane_cp03

0x1e72,	// (0x0009c5b6) skin_g1

0xaaf9,	// (0x000a523d) skin_t1

0xab08,	// (0x000a524c) skin_t2

0x0001,

0xf249,	// (0x000a998d) skin_t

0x1e7c,	// (0x0009c5c0) cell_skin_colour_pane_ParamLimits

0x1e7c,	// (0x0009c5c0) cell_skin_colour_pane

0xab16,	// (0x000a525a) cell_skin_colour_pane_g1

0x1f00,	// (0x0009c644) call_video_g1_ParamLimits

0x1f00,	// (0x0009c644) call_video_g1

0x1f10,	// (0x0009c654) call_video_g2_ParamLimits

0x1f10,	// (0x0009c654) call_video_g2

0x0001,

0xf24e,	// (0x000a9992) call_video_g_ParamLimits

0xf24e,	// (0x000a9992) call_video_g

0x1f6a,	// (0x0009c6ae) call_video_uplink_pane_cp1_ParamLimits

0x1f6a,	// (0x0009c6ae) call_video_uplink_pane_cp1

0xab28,	// (0x000a526c) call_video_uplink_pane_cp2

0x2036,	// (0x0009c77a) video_down_crop_pane_ParamLimits

0x2036,	// (0x0009c77a) video_down_crop_pane

0x2134,	// (0x0009c878) video_down_pane_ParamLimits

0x2134,	// (0x0009c878) video_down_pane

0xab30,	// (0x000a5274) video_down_subqcif_pane_ParamLimits

0xab30,	// (0x000a5274) video_down_subqcif_pane

0xab48,	// (0x000a528c) video_down_subqcif_pane_cp_ParamLimits

0xab48,	// (0x000a528c) video_down_subqcif_pane_cp

0xab6e,	// (0x000a52b2) im_reading_pane_ParamLimits

0xab6e,	// (0x000a52b2) im_reading_pane

0x2254,	// (0x0009c998) im_writing_pane_ParamLimits

0x2254,	// (0x0009c998) im_writing_pane

0x2272,	// (0x0009c9b6) im_reading_pane_t1

0xab88,	// (0x000a52cc) list_im_pane

0xab99,	// (0x000a52dd) scroll_pane_cp07

0x22c6,	// (0x0009ca0a) im_writing_pane_t1_ParamLimits

0x22c6,	// (0x0009ca0a) im_writing_pane_t1

0xabb2,	// (0x000a52f6) im_writing_pane_t2_ParamLimits

0xabb2,	// (0x000a52f6) im_writing_pane_t2

0x0001,

0xf258,	// (0x000a999c) im_writing_pane_t_ParamLimits

0xf258,	// (0x000a999c) im_writing_pane_t

0xa3e8,	// (0x000a4b2c) input_focus_pane_cp04

0xa3e8,	// (0x000a4b2c) input_focus_pane_cp05

0x22db,	// (0x0009ca1f) list_im_single_pane_ParamLimits

0x22db,	// (0x0009ca1f) list_im_single_pane

0x22ff,	// (0x0009ca43) list_single_im_pane_t1

0x40b4,	// (0x0009e7f8) blid_accuracy_pane

0x40bc,	// (0x0009e800) blid_compass_pane

0x40c6,	// (0x0009e80a) main_location_t1

0x40d4,	// (0x0009e818) main_location_t2

0x40e2,	// (0x0009e826) main_location_t3

0x0002,

0xf4fd,	// (0x000a9c41) main_location_t

0xa3e8,	// (0x000a4b2c) aid_levels_location

0xa90e,	// (0x000a5052) blid_accuracy_pane_g1

0xa90e,	// (0x000a5052) blid_accuracy_pane_g2

0x0001,

0xf2ba,	// (0x000a99fe) blid_accuracy_pane_g

0xabfa,	// (0x000a533e) wml_content_pane

0xac38,	// (0x000a537c) wml_button_pane_ParamLimits

0xac38,	// (0x000a537c) wml_button_pane

0x230e,	// (0x0009ca52) wml_list_single_large_pane_ParamLimits

0x230e,	// (0x0009ca52) wml_list_single_large_pane

0x2338,	// (0x0009ca7c) wml_list_single_medium_pane_ParamLimits

0x2338,	// (0x0009ca7c) wml_list_single_medium_pane

0x2369,	// (0x0009caad) wml_list_single_small_pane_ParamLimits

0x2369,	// (0x0009caad) wml_list_single_small_pane

0xac4c,	// (0x000a5390) wml_selection_box_pane_ParamLimits

0xac4c,	// (0x000a5390) wml_selection_box_pane

0xac5f,	// (0x000a53a3) wml_list_single_pane_t1

0xac6e,	// (0x000a53b2) wml_list_single_medium_pane_t1

0xac7d,	// (0x000a53c1) wml_list_single_large_pane_t1

0xac8c,	// (0x000a53d0) input_focus_pane_cp02_ParamLimits

0xac8c,	// (0x000a53d0) input_focus_pane_cp02

0xac9f,	// (0x000a53e3) wml_selection_box_pane_g1

0xaca8,	// (0x000a53ec) wml_selection_box_pane_t1_ParamLimits

0xaca8,	// (0x000a53ec) wml_selection_box_pane_t1

0xa7f4,	// (0x000a4f38) bg_wml_button_pane_ParamLimits

0xa7f4,	// (0x000a4f38) bg_wml_button_pane

0xacc0,	// (0x000a5404) wml_button_pane_g1

0xacc8,	// (0x000a540c) wml_button_pane_t1

0xacc0,	// (0x000a5404) wml_button_bg_pane_g1

0xacd8,	// (0x000a541c) wml_button_bg_pane_g2

0xace0,	// (0x000a5424) wml_button_bg_pane_g3

0xace8,	// (0x000a542c) wml_button_bg_pane_g4

0xacf0,	// (0x000a5434) wml_button_bg_pane_g5

0xacf8,	// (0x000a543c) wml_button_bg_pane_g6

0xad00,	// (0x000a5444) wml_button_bg_pane_g7

0xad08,	// (0x000a544c) wml_button_bg_pane_g8

0xad10,	// (0x000a5454) wml_button_bg_pane_g9

0x0008,

0xf25d,	// (0x000a99a1) wml_button_bg_pane_g

0x23a3,	// (0x0009cae7) bg_list_pane_cp02

0xad18,	// (0x000a545c) mce_header_pane_ParamLimits

0xad18,	// (0x000a545c) mce_header_pane

0xad2e,	// (0x000a5472) mce_icon_pane

0xad2e,	// (0x000a5472) mce_image_pane

0xad37,	// (0x000a547b) mce_text_pane_ParamLimits

0xad37,	// (0x000a547b) mce_text_pane

0x23ad,	// (0x0009caf1) scroll_pane_cp03

0xac30,	// (0x000a5374) scroll_pane_cp04

0xad4a,	// (0x000a548e) scroll_pane_cp05_ParamLimits

0xad4a,	// (0x000a548e) scroll_pane_cp05

0x23b7,	// (0x0009cafb) mce_header_field_pane_ParamLimits

0x23b7,	// (0x0009cafb) mce_header_field_pane

0x23d7,	// (0x0009cb1b) mce_header_field_pane_2_ParamLimits

0x23d7,	// (0x0009cb1b) mce_header_field_pane_2

0x23ed,	// (0x0009cb31) mce_header_field_pane_3

0x23f5,	// (0x0009cb39) list_single_mce_message_pane_ParamLimits

0x23f5,	// (0x0009cb39) list_single_mce_message_pane

0x2420,	// (0x0009cb64) list_single_mce_smart_pane_ParamLimits

0x2420,	// (0x0009cb64) list_single_mce_smart_pane

0xad56,	// (0x000a549a) input_focus_pane_cp03

0xad5f,	// (0x000a54a3) list_header_data_pane

0x2456,	// (0x0009cb9a) mce_header_field_pane_t1

0x2464,	// (0x0009cba8) list_single_mce_header_pane_ParamLimits

0x2464,	// (0x0009cba8) list_single_mce_header_pane

0xad67,	// (0x000a54ab) list_single_mce_header_pane_t1

0xad76,	// (0x000a54ba) list_single_mce_message_pane_g1

0xad7e,	// (0x000a54c2) list_single_mce_message_pane_t1

0x24b6,	// (0x0009cbfa) bg_cale_heading_pane_cp01_ParamLimits

0x24b6,	// (0x0009cbfa) bg_cale_heading_pane_cp01

0xad8c,	// (0x000a54d0) bg_cale_pane_cp02_ParamLimits

0xad8c,	// (0x000a54d0) bg_cale_pane_cp02

0x2504,	// (0x0009cc48) cale_month_corner_pane

0x2523,	// (0x0009cc67) cale_month_day_heading_pane_ParamLimits

0x2523,	// (0x0009cc67) cale_month_day_heading_pane

0x2589,	// (0x0009cccd) cale_month_pane_g1_ParamLimits

0x2589,	// (0x0009cccd) cale_month_pane_g1

0x25cc,	// (0x0009cd10) cale_month_pane_g2_ParamLimits

0x25cc,	// (0x0009cd10) cale_month_pane_g2

0x2604,	// (0x0009cd48) cale_month_pane_g3_ParamLimits

0x2604,	// (0x0009cd48) cale_month_pane_g3

0x2650,	// (0x0009cd94) cale_month_pane_g4_ParamLimits

0x2650,	// (0x0009cd94) cale_month_pane_g4

0x269c,	// (0x0009cde0) cale_month_pane_g5_ParamLimits

0x269c,	// (0x0009cde0) cale_month_pane_g5

0x26e8,	// (0x0009ce2c) cale_month_pane_g6_ParamLimits

0x26e8,	// (0x0009ce2c) cale_month_pane_g6

0x2734,	// (0x0009ce78) cale_month_pane_g7_ParamLimits

0x2734,	// (0x0009ce78) cale_month_pane_g7

0x2798,	// (0x0009cedc) cale_month_pane_g8_ParamLimits

0x2798,	// (0x0009cedc) cale_month_pane_g8

0x27fc,	// (0x0009cf40) cale_month_pane_g9_ParamLimits

0x27fc,	// (0x0009cf40) cale_month_pane_g9

0x285a,	// (0x0009cf9e) cale_month_pane_g10_ParamLimits

0x285a,	// (0x0009cf9e) cale_month_pane_g10

0x28b6,	// (0x0009cffa) cale_month_pane_g11_ParamLimits

0x28b6,	// (0x0009cffa) cale_month_pane_g11

0x290a,	// (0x0009d04e) cale_month_pane_g12_ParamLimits

0x290a,	// (0x0009d04e) cale_month_pane_g12

0x2960,	// (0x0009d0a4) cale_month_pane_g13_ParamLimits

0x2960,	// (0x0009d0a4) cale_month_pane_g13

0x000c,

0xf270,	// (0x000a99b4) cale_month_pane_g_ParamLimits

0xf270,	// (0x000a99b4) cale_month_pane_g

0x29b6,	// (0x0009d0fa) cale_month_week_pane

0x29da,	// (0x0009d11e) grid_cale_month_pane_ParamLimits

0x29da,	// (0x0009d11e) grid_cale_month_pane

0x2a33,	// (0x0009d177) cale_month_day_heading_pane_t1

0x2ab9,	// (0x0009d1fd) cale_month_day_heading_pane_t2

0x2b32,	// (0x0009d276) cale_month_day_heading_pane_t3

0x2bab,	// (0x0009d2ef) cale_month_day_heading_pane_t4

0x2c24,	// (0x0009d368) cale_month_day_heading_pane_t5

0x2c9d,	// (0x0009d3e1) cale_month_day_heading_pane_t6

0x2d16,	// (0x0009d45a) cale_month_day_heading_pane_t7

0x0006,

0xf28b,	// (0x000a99cf) cale_month_day_heading_pane_t

0xaa23,	// (0x000a5167) bg_cale_side_pane_cp01

0x2da7,	// (0x0009d4eb) cale_month_week_pane_t1

0x2dc0,	// (0x0009d504) cale_month_week_pane_t2

0x2dd9,	// (0x0009d51d) cale_month_week_pane_t3

0x2df2,	// (0x0009d536) cale_month_week_pane_t4

0x2e0b,	// (0x0009d54f) cale_month_week_pane_t5

0x2e2c,	// (0x0009d570) cale_month_week_pane_t6

0x0005,

0xf29a,	// (0x000a99de) cale_month_week_pane_t

0x2e4d,	// (0x0009d591) cell_cale_month_pane_ParamLimits

0x2e4d,	// (0x0009d591) cell_cale_month_pane

0x2f99,	// (0x0009d6dd) cell_cale_month_pane_g1

0x2fa5,	// (0x0009d6e9) cell_cale_month_pane_t1_ParamLimits

0x2fa5,	// (0x0009d6e9) cell_cale_month_pane_t1

0xaa31,	// (0x000a5175) grid_highlight_pane_cp08

0xa90e,	// (0x000a5052) main_smil_g1

0x2fd1,	// (0x0009d715) smil_status_pane

0xadcb,	// (0x000a550f) smil_text_pane

0xc742,	// (0x000a6e86) bg_popup_call3_rect_pane_g8

0xc74a,	// (0x000a6e8e) bg_popup_call3_rect_pane_g9

0x0008,

0xf4d8,	// (0x000a9c1c) bg_popup_call3_rect_pane_g

0xc991,	// (0x000a70d5) smil_status_volume_pane_g1

0xadd5,	// (0x000a5519) smil_status_pane_t1

0x44ec,	// (0x0009ec30) volume_smil_pane

0xadec,	// (0x000a5530) list_smil_text_pane

0x2fe4,	// (0x0009d728) scroll_pane_cp011

0x2fef,	// (0x0009d733) smil_text_list_pane_t1_ParamLimits

0x2fef,	// (0x0009d733) smil_text_list_pane_t1

0x3067,	// (0x0009d7ab) aid_volume_smil_ParamLimits

0x3067,	// (0x0009d7ab) aid_volume_smil

0xa90e,	// (0x000a5052) smil_volume_pane_g1

0xa90e,	// (0x000a5052) smil_volume_pane_g2

0x0001,

0xf2ba,	// (0x000a99fe) smil_volume_pane_g

0x1657,	// (0x0009bd9b) listscroll_cale_day_pane

0xadf6,	// (0x000a553a) bg_cale_pane

0xae0e,	// (0x000a5552) list_cale_pane

0xae31,	// (0x000a5575) scroll_pane_cp09

0xae42,	// (0x000a5586) cale_bg_pane_g1

0xae4a,	// (0x000a558e) cale_bg_pane_g2

0xae52,	// (0x000a5596) cale_bg_pane_g3

0xae5a,	// (0x000a559e) cale_bg_pane_g4

0xae62,	// (0x000a55a6) cale_bg_pane_g5

0xae6a,	// (0x000a55ae) cale_bg_pane_g6

0xae72,	// (0x000a55b6) cale_bg_pane_g7

0xae7a,	// (0x000a55be) cale_bg_pane_g8

0xae82,	// (0x000a55c6) cale_bg_pane_g9

0x0008,

0xf2bf,	// (0x000a9a03) cale_bg_pane_g

0x3091,	// (0x0009d7d5) list_cale_time_pane_ParamLimits

0x3091,	// (0x0009d7d5) list_cale_time_pane

0xae8a,	// (0x000a55ce) list_cale_time_pane_g1_ParamLimits

0xae8a,	// (0x000a55ce) list_cale_time_pane_g1

0xae96,	// (0x000a55da) list_cale_time_pane_g2_ParamLimits

0xae96,	// (0x000a55da) list_cale_time_pane_g2

0x30b3,	// (0x0009d7f7) list_cale_time_pane_g3_ParamLimits

0x30b3,	// (0x0009d7f7) list_cale_time_pane_g3

0x30c1,	// (0x0009d805) list_cale_time_pane_g4_ParamLimits

0x30c1,	// (0x0009d805) list_cale_time_pane_g4

0x30cf,	// (0x0009d813) list_cale_time_pane_g5_ParamLimits

0x30cf,	// (0x0009d813) list_cale_time_pane_g5

0x0005,

0xf2d2,	// (0x000a9a16) list_cale_time_pane_g_ParamLimits

0xf2d2,	// (0x000a9a16) list_cale_time_pane_g

0xaeb0,	// (0x000a55f4) list_cale_time_pane_t1_ParamLimits

0xaeb0,	// (0x000a55f4) list_cale_time_pane_t1

0xaed8,	// (0x000a561c) list_cale_time_pane_t2_ParamLimits

0xaed8,	// (0x000a561c) list_cale_time_pane_t2

0x3471,	// (0x0009dbb5) aid_blid_cardinal_pane

0x34b3,	// (0x0009dbf7) compass_pane_t4

0xaf00,	// (0x000a5644) list_cale_time_pane_t4_ParamLimits

0xaf00,	// (0x000a5644) list_cale_time_pane_t4

0x34c1,	// (0x0009dc05) compass_pane_t5

0x34d1,	// (0x0009dc15) compass_pane_t6

0x34df,	// (0x0009dc23) compass_pane_t7

0xb3c1,	// (0x000a5b05) navi_pane_cc_t1

0xb5ac,	// (0x000a5cf0) aid_phob_thumbnail_center_pane

0x3bba,	// (0x0009e2fe) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2df,	// (0x000a9a23) list_cale_time_pane_t_ParamLimits

0xf2df,	// (0x000a9a23) list_cale_time_pane_t

0x9d39,	// (0x000a447d) bg_popup_window_pane_cp02_ParamLimits

0x9d39,	// (0x000a447d) bg_popup_window_pane_cp02

0xaf28,	// (0x000a566c) heading_pane_cp01_ParamLimits

0xaf28,	// (0x000a566c) heading_pane_cp01

0xaf34,	// (0x000a5678) loc_req_pane_ParamLimits

0xaf34,	// (0x000a5678) loc_req_pane

0xaf44,	// (0x000a5688) loc_type_pane_ParamLimits

0xaf44,	// (0x000a5688) loc_type_pane

0xaf56,	// (0x000a569a) loc_type_pane_t1_ParamLimits

0xaf56,	// (0x000a569a) loc_type_pane_t1

0xaf68,	// (0x000a56ac) loc_type_pane_t2_ParamLimits

0xaf68,	// (0x000a56ac) loc_type_pane_t2

0xaf7a,	// (0x000a56be) loc_type_pane_t3_ParamLimits

0xaf7a,	// (0x000a56be) loc_type_pane_t3

0x0002,

0xf2e6,	// (0x000a9a2a) loc_type_pane_t_ParamLimits

0xf2e6,	// (0x000a9a2a) loc_type_pane_t

0xaf8c,	// (0x000a56d0) list_loc_req_pane

0xaf96,	// (0x000a56da) scroll_pane_cp012

0x30dd,	// (0x0009d821) list_single_loc_request_popup_menu_pane_ParamLimits

0x30dd,	// (0x0009d821) list_single_loc_request_popup_menu_pane

0xafa1,	// (0x000a56e5) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xafa1,	// (0x000a56e5) list_single_loc_request_popup_menu_pane_g1

0xafad,	// (0x000a56f1) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xafad,	// (0x000a56f1) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf2ed,	// (0x000a9a31) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf2ed,	// (0x000a9a31) list_single_loc_request_popup_menu_pane_g

0xafb9,	// (0x000a56fd) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xafb9,	// (0x000a56fd) list_single_loc_request_popup_menu_pane_t1

0x30ef,	// (0x0009d833) bg_popup_window_pane_cp03_ParamLimits

0x30ef,	// (0x0009d833) bg_popup_window_pane_cp03

0x30fd,	// (0x0009d841) heading_loc_req_pane_ParamLimits

0x30fd,	// (0x0009d841) heading_loc_req_pane

0x3109,	// (0x0009d84d) popup_dyc_status_message_window_g1_ParamLimits

0x3109,	// (0x0009d84d) popup_dyc_status_message_window_g1

0x3115,	// (0x0009d859) popup_dyc_status_message_window_t1_ParamLimits

0x3115,	// (0x0009d859) popup_dyc_status_message_window_t1

0x3127,	// (0x0009d86b) popup_dyc_status_message_window_t2_ParamLimits

0x3127,	// (0x0009d86b) popup_dyc_status_message_window_t2

0x3139,	// (0x0009d87d) popup_dyc_status_message_window_t3_ParamLimits

0x3139,	// (0x0009d87d) popup_dyc_status_message_window_t3

0x0002,

0xf2f2,	// (0x000a9a36) popup_dyc_status_message_window_t_ParamLimits

0xf2f2,	// (0x000a9a36) popup_dyc_status_message_window_t

0xa3e8,	// (0x000a4b2c) bg_heading_pane_cp01

0xafcf,	// (0x000a5713) heading_loc_req_pane_g1

0xafd7,	// (0x000a571b) heading_loc_req_pane_g2

0xafdf,	// (0x000a5723) heading_loc_req_pane_g3

0x0002,

0xf2f9,	// (0x000a9a3d) heading_loc_req_pane_g

0xafe7,	// (0x000a572b) heading_loc_req_pane_t1

0xaff6,	// (0x000a573a) bg_popup_sub_pane_cp01_ParamLimits

0xaff6,	// (0x000a573a) bg_popup_sub_pane_cp01

0xb004,	// (0x000a5748) popup_cale_events_window_g1_ParamLimits

0xb004,	// (0x000a5748) popup_cale_events_window_g1

0xb024,	// (0x000a5768) popup_cale_events_window_g2_ParamLimits

0xb024,	// (0x000a5768) popup_cale_events_window_g2

0x0001,

0xf32d,	// (0x000a9a71) popup_cale_events_window_g_ParamLimits

0xf32d,	// (0x000a9a71) popup_cale_events_window_g

0xb044,	// (0x000a5788) popup_cale_events_window_t1_ParamLimits

0xb044,	// (0x000a5788) popup_cale_events_window_t1

0xb056,	// (0x000a579a) popup_cale_events_window_t2_ParamLimits

0xb056,	// (0x000a579a) popup_cale_events_window_t2

0xb094,	// (0x000a57d8) popup_cale_events_window_t3_ParamLimits

0xb094,	// (0x000a57d8) popup_cale_events_window_t3

0xb0da,	// (0x000a581e) popup_cale_events_window_t4_ParamLimits

0xb0da,	// (0x000a581e) popup_cale_events_window_t4

0x0003,

0xf332,	// (0x000a9a76) popup_cale_events_window_t_ParamLimits

0xf332,	// (0x000a9a76) popup_cale_events_window_t

0x323e,	// (0x0009d982) call_type_pane

0xb4ef,	// (0x000a5c33) popup_call_status_window_g1

0x324a,	// (0x0009d98e) popup_call_status_window_g2

0x3256,	// (0x0009d99a) popup_call_status_window_g3

0x0002,

0xf33b,	// (0x000a9a7f) popup_call_status_window_g

0xb110,	// (0x000a5854) call_type_pane_g1

0xb119,	// (0x000a585d) call_type_pane_g2

0x0001,

0xf342,	// (0x000a9a86) call_type_pane_g

0xa3e8,	// (0x000a4b2c) bg_popup_sub_pane_cp02

0xb122,	// (0x000a5866) listscroll_popup_wml_pane

0xb12a,	// (0x000a586e) list_wml_pane

0xb134,	// (0x000a5878) scroll_pane_cp013

0xb13f,	// (0x000a5883) list_single_graphic_popup_wml_pane_ParamLimits

0xb13f,	// (0x000a5883) list_single_graphic_popup_wml_pane

0xa90e,	// (0x000a5052) list_single_graphic_popup_wml_pane_g1

0xb153,	// (0x000a5897) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf347,	// (0x000a9a8b) list_single_graphic_popup_wml_pane_g

0xb15b,	// (0x000a589f) list_single_graphic_popup_wml_pane_t1

0xb171,	// (0x000a58b5) aid_call_pane

0xa7ec,	// (0x000a4f30) popup_clock_analogue_window_g1

0xa7ec,	// (0x000a4f30) popup_clock_analogue_window_g2

0x3262,	// (0x0009d9a6) popup_clock_analogue_window_g3

0x3262,	// (0x0009d9a6) popup_clock_analogue_window_g4

0xa90e,	// (0x000a5052) popup_clock_analogue_window_g5

0x0004,

0xf34c,	// (0x000a9a90) popup_clock_analogue_window_g

0x326a,	// (0x0009d9ae) popup_clock_analogue_window_t1

0x3278,	// (0x0009d9bc) clock_digital_number_pane_ParamLimits

0x3278,	// (0x0009d9bc) clock_digital_number_pane

0x3284,	// (0x0009d9c8) clock_digital_number_pane_cp02_ParamLimits

0x3284,	// (0x0009d9c8) clock_digital_number_pane_cp02

0x3290,	// (0x0009d9d4) clock_digital_number_pane_cp03_ParamLimits

0x3290,	// (0x0009d9d4) clock_digital_number_pane_cp03

0x329c,	// (0x0009d9e0) clock_digital_number_pane_cp04_ParamLimits

0x329c,	// (0x0009d9e0) clock_digital_number_pane_cp04

0x32ac,	// (0x0009d9f0) clock_digital_separator_pane_ParamLimits

0x32ac,	// (0x0009d9f0) clock_digital_separator_pane

0x32b8,	// (0x0009d9fc) popup_clock_digital_window_t1

0xa90e,	// (0x000a5052) clock_digital_number_pane_g1

0xa90e,	// (0x000a5052) clock_digital_number_pane_g2

0x0001,

0xf2ba,	// (0x000a99fe) clock_digital_number_pane_g

0xa90e,	// (0x000a5052) clock_digital_separator_pane_g1

0xa90e,	// (0x000a5052) clock_digital_separator_pane_g2

0x0001,

0xf2ba,	// (0x000a99fe) clock_digital_separator_pane_g

0xa3e8,	// (0x000a4b2c) bg_popup_window_pane_cp04

0xb179,	// (0x000a58bd) heading_pane_cp03

0xb181,	// (0x000a58c5) listscroll_popup_gms_pane

0xb189,	// (0x000a58cd) grid_large_graphic_popup_pane

0xb193,	// (0x000a58d7) listscroll_popup_gms_pane_g1

0xb19b,	// (0x000a58df) listscroll_popup_gms_pane_g2

0x0001,

0xf357,	// (0x000a9a9b) listscroll_popup_gms_pane_g

0xac30,	// (0x000a5374) scroll_pane_cp014

0x32d5,	// (0x0009da19) cell_large_graphic_popup_pane_ParamLimits

0x32d5,	// (0x0009da19) cell_large_graphic_popup_pane

0x32ed,	// (0x0009da31) cell_large_graphic_popup_pane_g1_ParamLimits

0x32ed,	// (0x0009da31) cell_large_graphic_popup_pane_g1

0xb1a3,	// (0x000a58e7) cell_large_graphic_popup_pane_g2_ParamLimits

0xb1a3,	// (0x000a58e7) cell_large_graphic_popup_pane_g2

0xb1af,	// (0x000a58f3) cell_large_graphic_popup_pane_g3_ParamLimits

0xb1af,	// (0x000a58f3) cell_large_graphic_popup_pane_g3

0xb1bc,	// (0x000a5900) cell_large_graphic_popup_pane_g4_ParamLimits

0xb1bc,	// (0x000a5900) cell_large_graphic_popup_pane_g4

0x0003,

0xf35c,	// (0x000a9aa0) cell_large_graphic_popup_pane_g_ParamLimits

0xf35c,	// (0x000a9aa0) cell_large_graphic_popup_pane_g

0xb1cc,	// (0x000a5910) grid_highlight_pane_cp010

0xa90e,	// (0x000a5052) bg_popup_call_pane_g1

0xb1d6,	// (0x000a591a) list_single_graphic_popup_conf_pane_ParamLimits

0xb1d6,	// (0x000a591a) list_single_graphic_popup_conf_pane

0xb1e9,	// (0x000a592d) list_highlight_pane_cp01

0xb1f2,	// (0x000a5936) list_single_graphic_popup_conf_pane_g1

0xb1fa,	// (0x000a593e) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf365,	// (0x000a9aa9) list_single_graphic_popup_conf_pane_g

0xb202,	// (0x000a5946) list_single_graphic_popup_conf_pane_t1

0xb210,	// (0x000a5954) linegrid_cams_pane_g1

0x32f9,	// (0x0009da3d) linegrid_cams_pane_g2

0xaa6d,	// (0x000a51b1) linegrid_cams_pane_g3

0xb219,	// (0x000a595d) linegrid_cams_pane_g4

0x3302,	// (0x0009da46) linegrid_cams_pane_g5

0x330b,	// (0x0009da4f) linegrid_cams_pane_g6

0xaa76,	// (0x000a51ba) linegrid_cams_pane_g7

0x0006,

0xf36a,	// (0x000a9aae) linegrid_cams_pane_g

0xb222,	// (0x000a5966) popup_clock_analogue_window

0xb222,	// (0x000a5966) popup_clock_digital_window

0xa3e8,	// (0x000a4b2c) popup_phob_thumbnail_window

0xa90e,	// (0x000a5052) call_video_uplink_pane_g1

0xb22b,	// (0x000a596f) call_video_uplink_pane_g2

0x0001,

0xf379,	// (0x000a9abd) call_video_uplink_pane_g

0xb233,	// (0x000a5977) video_uplink_pane

0xb23b,	// (0x000a597f) mce_image_pane_g1

0x3314,	// (0x0009da58) mce_image_pane_g2

0x331e,	// (0x0009da62) mce_image_pane_g3

0x3326,	// (0x0009da6a) mce_image_pane_g4

0x332e,	// (0x0009da72) mce_image_pane_g5

0x0004,

0xf37e,	// (0x000a9ac2) mce_image_pane_g

0xb245,	// (0x000a5989) control_top_pane_stacon_cp01_ParamLimits

0xb245,	// (0x000a5989) control_top_pane_stacon_cp01

0xb259,	// (0x000a599d) uni_indicator_pane_stacon_cp01_ParamLimits

0xb259,	// (0x000a599d) uni_indicator_pane_stacon_cp01

0xb26a,	// (0x000a59ae) bg_popup_sub_pane_cp03

0xb274,	// (0x000a59b8) chi_dic_find_pane

0x3336,	// (0x0009da7a) listscroll_chi_dic_pane

0xb27c,	// (0x000a59c0) main_pane_chidic_g1

0xb284,	// (0x000a59c8) chi_dic_find_pane_t1

0xb292,	// (0x000a59d6) find_chidic_pane

0xb29b,	// (0x000a59df) chi_dic_list_pane_ParamLimits

0xb29b,	// (0x000a59df) chi_dic_list_pane

0xb2ac,	// (0x000a59f0) scroll_pane_cp020

0xb2b4,	// (0x000a59f8) find_chidic_pane_t1

0xa3e8,	// (0x000a4b2c) input_focus_pane_cp06

0x334a,	// (0x0009da8e) list_chi_dic_pane_ParamLimits

0x334a,	// (0x0009da8e) list_chi_dic_pane

0x3364,	// (0x0009daa8) list_chi_dic_pane_t1_ParamLimits

0x3364,	// (0x0009daa8) list_chi_dic_pane_t1

0xa3e8,	// (0x000a4b2c) list_highlight_pane_cp020

0xb2c3,	// (0x000a5a07) bg_cale_heading_pane_g1

0x3377,	// (0x0009dabb) bg_cale_heading_pane_g2

0x337f,	// (0x0009dac3) bg_cale_heading_pane_g3

0x3387,	// (0x0009dacb) bg_cale_heading_pane_g4

0x3391,	// (0x0009dad5) bg_cale_heading_pane_g5

0x339b,	// (0x0009dadf) bg_cale_heading_pane_g6

0x33a3,	// (0x0009dae7) bg_cale_heading_pane_g7

0x33ab,	// (0x0009daef) bg_cale_heading_pane_g8

0x33b5,	// (0x0009daf9) bg_cale_heading_pane_g9

0x0008,

0xf389,	// (0x000a9acd) bg_cale_heading_pane_g

0xb2c3,	// (0x000a5a07) bg_cale_side_pane_g1

0x33bf,	// (0x0009db03) bg_cale_side_pane_g2

0x33c9,	// (0x0009db0d) bg_cale_side_pane_g3

0x33d3,	// (0x0009db17) bg_cale_side_pane_g4

0x33dd,	// (0x0009db21) bg_cale_side_pane_g5

0x33e7,	// (0x0009db2b) bg_cale_side_pane_g6

0x33f1,	// (0x0009db35) bg_cale_side_pane_g7

0x33fb,	// (0x0009db3f) bg_cale_side_pane_g8

0x3403,	// (0x0009db47) bg_cale_side_pane_g9

0x0008,

0xf39c,	// (0x000a9ae0) bg_cale_side_pane_g

0x340b,	// (0x0009db4f) popup_call_status_window_ParamLimits

0x340b,	// (0x0009db4f) popup_call_status_window

0xb2cb,	// (0x000a5a0f) stacon_top_pane

0xb2e5,	// (0x000a5a29) status_pane_ParamLimits

0xb2e5,	// (0x000a5a29) status_pane

0xb2fa,	// (0x000a5a3e) status_small_pane

0xb302,	// (0x000a5a46) control_pane

0xa3e8,	// (0x000a4b2c) stacon_bottom_pane

0xb30a,	// (0x000a5a4e) list_single_mce_smart_pane_t1_ParamLimits

0xb30a,	// (0x000a5a4e) list_single_mce_smart_pane_t1

0xb31d,	// (0x000a5a61) list_single_mce_smart_pane_t2_ParamLimits

0xb31d,	// (0x000a5a61) list_single_mce_smart_pane_t2

0x0001,

0x00fa,	// (0x0009a83e) list_single_mce_smart_pane_t_ParamLimits

0x00fa,	// (0x0009a83e) list_single_mce_smart_pane_t

0x3417,	// (0x0009db5b) compass_pane

0x3423,	// (0x0009db67) main_location2_pane_t1

0x3437,	// (0x0009db7b) main_location2_pane_t2

0x344b,	// (0x0009db8f) main_location2_pane_t3

0x0003,

0xf3af,	// (0x000a9af3) main_location2_pane_t

0xb33c,	// (0x000a5a80) compass_pane_g1_ParamLimits

0xb33c,	// (0x000a5a80) compass_pane_g1

0x3495,	// (0x0009dbd9) compass_pane_t1

0x34a4,	// (0x0009dbe8) compass_pane_t2

0x0005,

0xf3b8,	// (0x000a9afc) compass_pane_t

0x34ef,	// (0x0009dc33) text_secondary_cp61

0xb3b8,	// (0x000a5afc) navi_pane_cams_g5

0xb434,	// (0x000a5b78) navi_pane_im_t1

0xb442,	// (0x000a5b86) navi_pane_mp_g1_ParamLimits

0xb442,	// (0x000a5b86) navi_pane_mp_g1

0xb456,	// (0x000a5b9a) navi_pane_mp_g2_ParamLimits

0xb456,	// (0x000a5b9a) navi_pane_mp_g2

0xb462,	// (0x000a5ba6) navi_pane_mp_g3_ParamLimits

0xb462,	// (0x000a5ba6) navi_pane_mp_g3

0x0002,

0x011c,	// (0x0009a860) navi_pane_mp_g_ParamLimits

0x011c,	// (0x0009a860) navi_pane_mp_g

0xb46e,	// (0x000a5bb2) navi_pane_mp_t1

0xb47c,	// (0x000a5bc0) navi_pane_mp_t2

0x0002,

0x0123,	// (0x0009a867) navi_pane_mp_t

0xb4e7,	// (0x000a5c2b) navi_pane_vt_g1

0xb46e,	// (0x000a5bb2) navi_pane_vt_t1

0xb4fd,	// (0x000a5c41) navi_slider_pane

0xaa87,	// (0x000a51cb) zooming_pane

0xb50d,	// (0x000a5c51) navi_slider_pane_g1

0x352a,	// (0x0009dc6e) navi_slider_pane_g2

0x0006,

0xf3c5,	// (0x000a9b09) navi_slider_pane_g

0xb531,	// (0x000a5c75) aid_levels_zoom

0xb539,	// (0x000a5c7d) zooming_pane_g1

0xb541,	// (0x000a5c85) zooming_pane_g2

0xb541,	// (0x000a5c85) zooming_pane_g3

0x0002,

0xf3d4,	// (0x000a9b18) zooming_pane_g

0xb549,	// (0x000a5c8d) level_10_zoom

0xb552,	// (0x000a5c96) level_11_zoom

0xb55b,	// (0x000a5c9f) level_1_zoom

0xb564,	// (0x000a5ca8) level_2_zoom

0xb56d,	// (0x000a5cb1) level_3_zoom

0xb576,	// (0x000a5cba) level_4_zoom

0xb57f,	// (0x000a5cc3) level_5_zoom

0xb588,	// (0x000a5ccc) level_6_zoom

0xb591,	// (0x000a5cd5) level_7_zoom

0xb59a,	// (0x000a5cde) level_8_zoom

0xb5a3,	// (0x000a5ce7) level_9_zoom

0xb5b4,	// (0x000a5cf8) popup_phob_thumbnail_window_g1

0xb5bc,	// (0x000a5d00) popup_phob_thumbnail_window_g2

0x0001,

0xf3db,	// (0x000a9b1f) popup_phob_thumbnail_window_g

0xc8a4,	// (0x000a6fe8) level_1_location

0xc8ac,	// (0x000a6ff0) level_2_location

0xc8b4,	// (0x000a6ff8) level_3_location

0xc8bc,	// (0x000a7000) level_4_location

0xaa87,	// (0x000a51cb) level_5_location

0x353c,	// (0x0009dc80) mce_icon_pane_g1

0x3544,	// (0x0009dc88) mce_icon_pane_g2

0x0001,

0xf3e0,	// (0x000a9b24) mce_icon_pane_g

0x354c,	// (0x0009dc90) main_mup_pane_g1_ParamLimits

0x354c,	// (0x0009dc90) main_mup_pane_g1

0x3564,	// (0x0009dca8) main_mup_pane_g2_ParamLimits

0x3564,	// (0x0009dca8) main_mup_pane_g2

0x3580,	// (0x0009dcc4) main_mup_pane_g3_ParamLimits

0x3580,	// (0x0009dcc4) main_mup_pane_g3

0x359c,	// (0x0009dce0) main_mup_pane_g4_ParamLimits

0x359c,	// (0x0009dce0) main_mup_pane_g4

0x35b8,	// (0x0009dcfc) main_mup_pane_g5_ParamLimits

0x35b8,	// (0x0009dcfc) main_mup_pane_g5

0x35d9,	// (0x0009dd1d) main_mup_pane_g6_ParamLimits

0x35d9,	// (0x0009dd1d) main_mup_pane_g6

0x35f5,	// (0x0009dd39) main_mup_pane_g7_ParamLimits

0x35f5,	// (0x0009dd39) main_mup_pane_g7

0x3611,	// (0x0009dd55) main_mup_pane_g8_ParamLimits

0x3611,	// (0x0009dd55) main_mup_pane_g8

0x3631,	// (0x0009dd75) main_mup_pane_g9_ParamLimits

0x3631,	// (0x0009dd75) main_mup_pane_g9

0x3650,	// (0x0009dd94) main_mup_pane_g10_ParamLimits

0x3650,	// (0x0009dd94) main_mup_pane_g10

0x366f,	// (0x0009ddb3) main_mup_pane_g11_ParamLimits

0x366f,	// (0x0009ddb3) main_mup_pane_g11

0x3687,	// (0x0009ddcb) main_mup_pane_g12_ParamLimits

0x3687,	// (0x0009ddcb) main_mup_pane_g12

0x3695,	// (0x0009ddd9) main_mup_pane_g13_ParamLimits

0x3695,	// (0x0009ddd9) main_mup_pane_g13

0x000c,

0xf3e5,	// (0x000a9b29) main_mup_pane_g_ParamLimits

0xf3e5,	// (0x000a9b29) main_mup_pane_g

0x36ab,	// (0x0009ddef) main_mup_pane_t1_ParamLimits

0x36ab,	// (0x0009ddef) main_mup_pane_t1

0x36c8,	// (0x0009de0c) main_mup_pane_t2_ParamLimits

0x36c8,	// (0x0009de0c) main_mup_pane_t2

0x36e2,	// (0x0009de26) main_mup_pane_t3_ParamLimits

0x36e2,	// (0x0009de26) main_mup_pane_t3

0x36fc,	// (0x0009de40) main_mup_pane_t4_ParamLimits

0x36fc,	// (0x0009de40) main_mup_pane_t4

0x370e,	// (0x0009de52) main_mup_pane_t5_ParamLimits

0x370e,	// (0x0009de52) main_mup_pane_t5

0x3720,	// (0x0009de64) main_mup_pane_t6_ParamLimits

0x3720,	// (0x0009de64) main_mup_pane_t6

0x0005,

0xf400,	// (0x000a9b44) main_mup_pane_t_ParamLimits

0xf400,	// (0x000a9b44) main_mup_pane_t

0x3736,	// (0x0009de7a) mup_progress_pane_ParamLimits

0x3736,	// (0x0009de7a) mup_progress_pane

0x3742,	// (0x0009de86) mup_visualizer_pane_ParamLimits

0x3742,	// (0x0009de86) mup_visualizer_pane

0x377c,	// (0x0009dec0) mup_volume_pane_ParamLimits

0x377c,	// (0x0009dec0) mup_volume_pane

0xb4ef,	// (0x000a5c33) mup_visualizer_pane_g1_ParamLimits

0xb4ef,	// (0x000a5c33) mup_visualizer_pane_g1

0xb4ef,	// (0x000a5c33) mup_visualizer_pane_g2_ParamLimits

0xb4ef,	// (0x000a5c33) mup_visualizer_pane_g2

0xb33c,	// (0x000a5a80) mup_visualizer_pane_g3_ParamLimits

0xb33c,	// (0x000a5a80) mup_visualizer_pane_g3

0x0002,

0xf40d,	// (0x000a9b51) mup_visualizer_pane_g_ParamLimits

0xf40d,	// (0x000a9b51) mup_visualizer_pane_g

0xa90e,	// (0x000a5052) mup_volume_pane_g1

0xb5cc,	// (0x000a5d10) mup_volume_pane_g2

0x0001,

0xf414,	// (0x000a9b58) mup_volume_pane_g

0xa90e,	// (0x000a5052) mup_progress_pane_g1

0xb5d5,	// (0x000a5d19) mup_progress_pane_g2

0xb5de,	// (0x000a5d22) mup_progress_pane_g3

0x0002,

0xf419,	// (0x000a9b5d) mup_progress_pane_g

0xa3e8,	// (0x000a4b2c) bg_popup_window_pane_cp05

0xb5e7,	// (0x000a5d2b) heading_pane_cp02_ParamLimits

0xb5e7,	// (0x000a5d2b) heading_pane_cp02

0xb601,	// (0x000a5d45) list_popup_blid_pane

0xb609,	// (0x000a5d4d) list_blid_sat_info_pane_ParamLimits

0xb609,	// (0x000a5d4d) list_blid_sat_info_pane

0xb61c,	// (0x000a5d60) list_blid_sat_info_pane_g1

0xb624,	// (0x000a5d68) list_blid_sat_info_pane_t1

0x3889,	// (0x0009dfcd) mup_equalizer_pane_ParamLimits

0x3889,	// (0x0009dfcd) mup_equalizer_pane

0x38aa,	// (0x0009dfee) mup_equalizer_pane_cp1_ParamLimits

0x38aa,	// (0x0009dfee) mup_equalizer_pane_cp1

0x38cb,	// (0x0009e00f) mup_equalizer_pane_cp2_ParamLimits

0x38cb,	// (0x0009e00f) mup_equalizer_pane_cp2

0x38ec,	// (0x0009e030) mup_equalizer_pane_cp3_ParamLimits

0x38ec,	// (0x0009e030) mup_equalizer_pane_cp3

0x390d,	// (0x0009e051) mup_equalizer_pane_cp4_ParamLimits

0x390d,	// (0x0009e051) mup_equalizer_pane_cp4

0x392e,	// (0x0009e072) mup_equalizer_pane_cp5

0x3944,	// (0x0009e088) mup_equalizer_pane_cp6

0x395c,	// (0x0009e0a0) mup_equalizer_pane_cp7

0xc7c2,	// (0x000a6f06) bg_popup_call_poc_act_pane_g9

0xc7ca,	// (0x000a6f0e) bg_popup_call_poc_act_pane_g10

0xc7d2,	// (0x000a6f16) bg_popup_call_poc_act_pane_g11

0x000a,

0xa7f4,	// (0x000a4f38) mup_scale_pane

0xa90e,	// (0x000a5052) mup_scale_pane_g1

0xb632,	// (0x000a5d76) mup_scale_pane_g2

0x0006,

0xf435,	// (0x000a9b79) mup_scale_pane_g

0xb656,	// (0x000a5d9a) msg_data_pane

0xb65e,	// (0x000a5da2) scroll_pane_cp017

0x3986,	// (0x0009e0ca) bg_list_pane_cp04_ParamLimits

0x3986,	// (0x0009e0ca) bg_list_pane_cp04

0xb666,	// (0x000a5daa) msg_data_pane_g1

0x39ac,	// (0x0009e0f0) msg_data_pane_g2

0x39b6,	// (0x0009e0fa) msg_data_pane_g3

0x39be,	// (0x0009e102) msg_data_pane_g4

0x39c6,	// (0x0009e10a) msg_data_pane_g5

0x39ce,	// (0x0009e112) msg_data_pane_g6

0x39d6,	// (0x0009e11a) msg_data_pane_g7

0x0006,

0xf444,	// (0x000a9b88) msg_data_pane_g

0x39de,	// (0x0009e122) msg_text_pane_ParamLimits

0x39de,	// (0x0009e122) msg_text_pane

0x3a25,	// (0x0009e169) qrid_highlight_pane_cp011_ParamLimits

0x3a25,	// (0x0009e169) qrid_highlight_pane_cp011

0xa3e8,	// (0x000a4b2c) msg_body_pane

0xa3e8,	// (0x000a4b2c) msg_header_pane

0xb677,	// (0x000a5dbb) input_focus_pane_cp07

0x3a4b,	// (0x0009e18f) msg_header_pane_t1_ParamLimits

0x3a4b,	// (0x0009e18f) msg_header_pane_t1

0x3a5d,	// (0x0009e1a1) msg_header_pane_t2_ParamLimits

0x3a5d,	// (0x0009e1a1) msg_header_pane_t2

0x0001,

0xf458,	// (0x000a9b9c) msg_header_pane_t_ParamLimits

0xf458,	// (0x000a9b9c) msg_header_pane_t

0xb68c,	// (0x000a5dd0) msg_body_pane_g1

0x3a6f,	// (0x0009e1b3) msg_body_pane_t1_ParamLimits

0x3a6f,	// (0x0009e1b3) msg_body_pane_t1

0x3aa0,	// (0x0009e1e4) msg_body_pane_t2_ParamLimits

0x3aa0,	// (0x0009e1e4) msg_body_pane_t2

0x3ab2,	// (0x0009e1f6) msg_body_pane_t3_ParamLimits

0x3ab2,	// (0x0009e1f6) msg_body_pane_t3

0x0002,

0xf45d,	// (0x000a9ba1) msg_body_pane_t_ParamLimits

0xf45d,	// (0x000a9ba1) msg_body_pane_t

0x3b16,	// (0x0009e25a) main_viewer_pane_g1_ParamLimits

0x3b16,	// (0x0009e25a) main_viewer_pane_g1

0x3b22,	// (0x0009e266) main_viewer_pane_g2_ParamLimits

0x3b22,	// (0x0009e266) main_viewer_pane_g2

0x3b2e,	// (0x0009e272) main_viewer_pane_g3_ParamLimits

0x3b2e,	// (0x0009e272) main_viewer_pane_g3

0x3b3f,	// (0x0009e283) main_viewer_pane_g4_ParamLimits

0x3b3f,	// (0x0009e283) main_viewer_pane_g4

0x3b50,	// (0x0009e294) main_viewer_pane_g5_ParamLimits

0x3b50,	// (0x0009e294) main_viewer_pane_g5

0x3b50,	// (0x0009e294) main_viewer_pane_g7_ParamLimits

0x3b50,	// (0x0009e294) main_viewer_pane_g7

0xafa1,	// (0x000a56e5) main_viewer_pane_g8_ParamLimits

0xafa1,	// (0x000a56e5) main_viewer_pane_g8

0x0007,

0xf46d,	// (0x000a9bb1) main_viewer_pane_g_ParamLimits

0xf46d,	// (0x000a9bb1) main_viewer_pane_g

0xb694,	// (0x000a5dd8) viewer_content_pane_ParamLimits

0xb694,	// (0x000a5dd8) viewer_content_pane

0x3b8e,	// (0x0009e2d2) main_postcard_pane_g1_ParamLimits

0x3b8e,	// (0x0009e2d2) main_postcard_pane_g1

0x3b9c,	// (0x0009e2e0) main_postcard_pane_g2_ParamLimits

0x3b9c,	// (0x0009e2e0) main_postcard_pane_g2

0x3baa,	// (0x0009e2ee) main_postcard_pane_g3_ParamLimits

0x3baa,	// (0x0009e2ee) main_postcard_pane_g3

0x0005,

0xf47e,	// (0x000a9bc2) main_postcard_pane_g_ParamLimits

0xf47e,	// (0x000a9bc2) main_postcard_pane_g

0x3bba,	// (0x0009e2fe) main_postcard_pane_g4

0xc9a4,	// (0x000a70e8) smil_status_volume_pane_g2

0x3be6,	// (0x0009e32a) postcard_pane_ParamLimits

0x3be6,	// (0x0009e32a) postcard_pane

0xb4ef,	// (0x000a5c33) postcard_pane_g1_ParamLimits

0xb4ef,	// (0x000a5c33) postcard_pane_g1

0x3c18,	// (0x0009e35c) postcard_pane_g2_ParamLimits

0x3c18,	// (0x0009e35c) postcard_pane_g2

0x3c24,	// (0x0009e368) postcard_pane_g3_ParamLimits

0x3c24,	// (0x0009e368) postcard_pane_g3

0xb6a2,	// (0x000a5de6) postcard_pane_g4_ParamLimits

0xb6a2,	// (0x000a5de6) postcard_pane_g4

0x3c30,	// (0x0009e374) postcard_pane_g5_ParamLimits

0x3c30,	// (0x0009e374) postcard_pane_g5

0x3c3c,	// (0x0009e380) postcard_pane_g6_ParamLimits

0x3c3c,	// (0x0009e380) postcard_pane_g6

0xb6b0,	// (0x000a5df4) postcard_pane_g7_ParamLimits

0xb6b0,	// (0x000a5df4) postcard_pane_g7

0x0006,

0xf48b,	// (0x000a9bcf) postcard_pane_g_ParamLimits

0xf48b,	// (0x000a9bcf) postcard_pane_g

0x3c48,	// (0x0009e38c) main_mp2_pane_g1_ParamLimits

0x3c48,	// (0x0009e38c) main_mp2_pane_g1

0x3c54,	// (0x0009e398) main_mp2_pane_g2_ParamLimits

0x3c54,	// (0x0009e398) main_mp2_pane_g2

0x3c60,	// (0x0009e3a4) main_mp2_pane_g3_ParamLimits

0x3c60,	// (0x0009e3a4) main_mp2_pane_g3

0x0002,

0xf49a,	// (0x000a9bde) main_mp2_pane_g_ParamLimits

0xf49a,	// (0x000a9bde) main_mp2_pane_g

0x3c6c,	// (0x0009e3b0) main_mp2_pane_t1_ParamLimits

0x3c6c,	// (0x0009e3b0) main_mp2_pane_t1

0x3c83,	// (0x0009e3c7) main_mp2_pane_t2_ParamLimits

0x3c83,	// (0x0009e3c7) main_mp2_pane_t2

0x3c97,	// (0x0009e3db) main_mp2_pane_t3_ParamLimits

0x3c97,	// (0x0009e3db) main_mp2_pane_t3

0x0002,

0xf4a1,	// (0x000a9be5) main_mp2_pane_t_ParamLimits

0xf4a1,	// (0x000a9be5) main_mp2_pane_t

0xb6be,	// (0x000a5e02) pec_content_pane_ParamLimits

0xb6be,	// (0x000a5e02) pec_content_pane

0xac30,	// (0x000a5374) scroll_pane_cp015

0xb6d0,	// (0x000a5e14) pec_attribute_pane_ParamLimits

0xb6d0,	// (0x000a5e14) pec_attribute_pane

0x3ca9,	// (0x0009e3ed) pec_content_pane_g1_ParamLimits

0x3ca9,	// (0x0009e3ed) pec_content_pane_g1

0xb6e0,	// (0x000a5e24) pec_content_pane_t1_ParamLimits

0xb6e0,	// (0x000a5e24) pec_content_pane_t1

0xb6f2,	// (0x000a5e36) pec_content_pane_t2_ParamLimits

0xb6f2,	// (0x000a5e36) pec_content_pane_t2

0x0001,

0x020d,	// (0x0009a951) pec_content_pane_t_ParamLimits

0x020d,	// (0x0009a951) pec_content_pane_t

0x3cb5,	// (0x0009e3f9) list_single_graphic_pane_cp01_ParamLimits

0x3cb5,	// (0x0009e3f9) list_single_graphic_pane_cp01

0xa7f4,	// (0x000a4f38) bg_popup_sub_pane_cp04

0xb704,	// (0x000a5e48) popup_mup_playback_window_g1

0xb710,	// (0x000a5e54) popup_mup_playback_window_t1

0xb725,	// (0x000a5e69) popup_mup_playback_window_t2

0x0001,

0x0212,	// (0x0009a956) popup_mup_playback_window_t

0xb75c,	// (0x000a5ea0) main_image_pane_g1_ParamLimits

0xb75c,	// (0x000a5ea0) main_image_pane_g1

0xb79f,	// (0x000a5ee3) scroll_pane_cp018_ParamLimits

0xb79f,	// (0x000a5ee3) scroll_pane_cp018

0xb7b7,	// (0x000a5efb) scroll_pane_cp016_ParamLimits

0xb7b7,	// (0x000a5efb) scroll_pane_cp016

0x3d4e,	// (0x0009e492) smil2_image_pane_ParamLimits

0x3d4e,	// (0x0009e492) smil2_image_pane

0x3d7e,	// (0x0009e4c2) smil2_root_pane_ParamLimits

0x3d7e,	// (0x0009e4c2) smil2_root_pane

0x3daa,	// (0x0009e4ee) smil2_text_pane_ParamLimits

0x3daa,	// (0x0009e4ee) smil2_text_pane

0xa3e8,	// (0x000a4b2c) bg_list_pane_cp06

0xb7f3,	// (0x000a5f37) grid_radio_pane

0xa3e8,	// (0x000a4b2c) bg_popup_window_pane_cp06

0xb7fb,	// (0x000a5f3f) main_fmradio_pane_t1

0xb179,	// (0x000a58bd) heading_pane_cp04

0xb809,	// (0x000a5f4d) main_fmradio_pane_t2

0xc7da,	// (0x000a6f1e) popup_cale_lunar_info_window_g1

0xb817,	// (0x000a5f5b) main_fmradio_pane_t3

0xc7e2,	// (0x000a6f26) popup_cale_lunar_info_window_g2

0xb825,	// (0x000a5f69) main_fmradio_pane_t4

0x0001,

0xb833,	// (0x000a5f77) main_fmradio_pane_t5

0x0004,

0x02ed,	// (0x0009aa31) popup_cale_lunar_info_window_g

0x0227,	// (0x0009a96b) main_fmradio_pane_t

0xb841,	// (0x000a5f85) wait_bar_pane_cp03

0xb849,	// (0x000a5f8d) cell_fmradio_pane_ParamLimits

0xb849,	// (0x000a5f8d) cell_fmradio_pane

0xb6b0,	// (0x000a5df4) cell_fmradio_pane_g1_ParamLimits

0xb6b0,	// (0x000a5df4) cell_fmradio_pane_g1

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp011

0xb85c,	// (0x000a5fa0) poc_content_pane_ParamLimits

0xb85c,	// (0x000a5fa0) poc_content_pane

0xb86e,	// (0x000a5fb2) scroll_pane_cp019

0x3dea,	// (0x0009e52e) popup_call_poc_act_window_ParamLimits

0x3dea,	// (0x0009e52e) popup_call_poc_act_window

0x3df7,	// (0x0009e53b) popup_call_poc_inact_window_ParamLimits

0x3df7,	// (0x0009e53b) popup_call_poc_inact_window

0x02c4,	// (0x0009aa08) bg_popup_call_poc_act_pane_g

0xc752,	// (0x000a6e96) bg_popup_call_poc_inact_pane_g1

0xc75a,	// (0x000a6e9e) bg_popup_call_poc_inact_pane_g2

0xb876,	// (0x000a5fba) popup_call_poc_act_window_g2

0xc762,	// (0x000a6ea6) bg_popup_call_poc_inact_pane_g3

0xc76a,	// (0x000a6eae) bg_popup_call_poc_inact_pane_g4

0xc772,	// (0x000a6eb6) bg_popup_call_poc_inact_pane_g5

0xb87e,	// (0x000a5fc2) popup_call_poc_act_window_t1_ParamLimits

0xb87e,	// (0x000a5fc2) popup_call_poc_act_window_t1

0xb8a6,	// (0x000a5fea) popup_call_poc_act_window_t2_ParamLimits

0xb8a6,	// (0x000a5fea) popup_call_poc_act_window_t2

0xb8ce,	// (0x000a6012) popup_call_poc_act_window_t3_ParamLimits

0xb8ce,	// (0x000a6012) popup_call_poc_act_window_t3

0xb8f6,	// (0x000a603a) popup_call_poc_act_window_t4_ParamLimits

0xb8f6,	// (0x000a603a) popup_call_poc_act_window_t4

0x0003,

0x0232,	// (0x0009a976) popup_call_poc_act_window_t_ParamLimits

0x0232,	// (0x0009a976) popup_call_poc_act_window_t

0xc77a,	// (0x000a6ebe) bg_popup_call_poc_inact_pane_g6

0xc782,	// (0x000a6ec6) bg_popup_call_poc_inact_pane_g7

0xc78a,	// (0x000a6ece) bg_popup_call_poc_inact_pane_g8

0xb908,	// (0x000a604c) popup_call_poc_inact_window_g2

0xc792,	// (0x000a6ed6) bg_popup_call_poc_inact_pane_g9

0x0008,

0x02b1,	// (0x0009a9f5) bg_popup_call_poc_inact_pane_g

0xb910,	// (0x000a6054) popup_call_poc_inact_window_t1_ParamLimits

0xb910,	// (0x000a6054) popup_call_poc_inact_window_t1

0xb925,	// (0x000a6069) popup_call_poc_inact_window_t2_ParamLimits

0xb925,	// (0x000a6069) popup_call_poc_inact_window_t2

0xb93a,	// (0x000a607e) popup_call_poc_inact_window_t3_ParamLimits

0xb93a,	// (0x000a607e) popup_call_poc_inact_window_t3

0x0002,

0x023b,	// (0x0009a97f) popup_call_poc_inact_window_t_ParamLimits

0x023b,	// (0x0009a97f) popup_call_poc_inact_window_t

0xc917,	// (0x000a705b) context_pane_ParamLimits

0x4439,	// (0x0009eb7d) signal_pane_ParamLimits

0xaa87,	// (0x000a51cb) main_call2_pane

0x43ac,	// (0x0009eaf0) popup_phob_thumbnail2_window_ParamLimits

0x43ac,	// (0x0009eaf0) popup_phob_thumbnail2_window

0x3ac4,	// (0x0009e208) aid_hotspot_pointer_arrow_pane

0x3acc,	// (0x0009e210) aid_hotspot_pointer_hand_pane

0x4119,	// (0x0009e85d) phob_pre_status_pane_g5

0x1b50,	// (0x0009c294) cams_zoom_pane_ParamLimits

0x1b5c,	// (0x0009c2a0) image_vga_pane_ParamLimits

0x1b6b,	// (0x0009c2af) main_camera_pane_g1_ParamLimits

0x1b79,	// (0x0009c2bd) main_camera_pane_g2_ParamLimits

0x1b85,	// (0x0009c2c9) main_camera_pane_g3_ParamLimits

0x1b91,	// (0x0009c2d5) main_camera_pane_g4_ParamLimits

0x1b9d,	// (0x0009c2e1) main_camera_pane_g5_ParamLimits

0x1ba9,	// (0x0009c2ed) main_camera_pane_g6_ParamLimits

0x1bb5,	// (0x0009c2f9) main_camera_pane_g7_ParamLimits

0xf1ef,	// (0x000a9933) main_camera_pane_g_ParamLimits

0x1bc1,	// (0x0009c305) main_camera_pane_t1_ParamLimits

0x1bd3,	// (0x0009c317) main_camera_pane_t2_ParamLimits

0xf200,	// (0x000a9944) main_camera_pane_t_ParamLimits

0xa7f4,	// (0x000a4f38) bg_popup_preview_window_pane_cp01_ParamLimits

0xa7f4,	// (0x000a4f38) bg_popup_preview_window_pane_cp01

0xb94f,	// (0x000a6093) popup_phob_thumbnail2_window_g1_ParamLimits

0xb94f,	// (0x000a6093) popup_phob_thumbnail2_window_g1

0xa3e8,	// (0x000a4b2c) call2_cli_visual_pane

0x3e13,	// (0x0009e557) popup_call2_audio_conf_window_ParamLimits

0x3e13,	// (0x0009e557) popup_call2_audio_conf_window

0x3e28,	// (0x0009e56c) popup_call2_audio_first_window_ParamLimits

0x3e28,	// (0x0009e56c) popup_call2_audio_first_window

0x3ec6,	// (0x0009e60a) popup_call2_audio_in_window_ParamLimits

0x3ec6,	// (0x0009e60a) popup_call2_audio_in_window

0x3f08,	// (0x0009e64c) popup_call2_audio_out_window_ParamLimits

0x3f08,	// (0x0009e64c) popup_call2_audio_out_window

0x3f6a,	// (0x0009e6ae) popup_call2_audio_second_window_ParamLimits

0x3f6a,	// (0x0009e6ae) popup_call2_audio_second_window

0x3fc8,	// (0x0009e70c) popup_call2_audio_wait_window_ParamLimits

0x3fc8,	// (0x0009e70c) popup_call2_audio_wait_window

0xa3e8,	// (0x000a4b2c) bg_popup_call2_act_pane_cp03

0xa7d6,	// (0x000a4f1a) list_conf_pane_cp

0xb95b,	// (0x000a609f) popup_call2_audio_conf_window_t1

0xb1d6,	// (0x000a591a) list_single_graphic_popup_conf2_pane_ParamLimits

0xb1d6,	// (0x000a591a) list_single_graphic_popup_conf2_pane

0xb1e9,	// (0x000a592d) list_highlight_pane_cp04

0xb969,	// (0x000a60ad) list_single_graphic_popup_conf2_pane_g1

0xb1fa,	// (0x000a593e) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b8,	// (0x000a9bfc) list_single_graphic_popup_conf2_pane_g

0xb973,	// (0x000a60b7) list_single_graphic_popup_conf2_pane_t1

0xb981,	// (0x000a60c5) bg_popup_call2_act_pane_cp01_ParamLimits

0xb981,	// (0x000a60c5) bg_popup_call2_act_pane_cp01

0xba0b,	// (0x000a614f) call_type_pane_cp05_ParamLimits

0xba0b,	// (0x000a614f) call_type_pane_cp05

0xba5f,	// (0x000a61a3) popup_call2_audio_second_window_g1_ParamLimits

0xba5f,	// (0x000a61a3) popup_call2_audio_second_window_g1

0xbab3,	// (0x000a61f7) popup_call2_audio_second_window_g2_ParamLimits

0xbab3,	// (0x000a61f7) popup_call2_audio_second_window_g2

0x0002,

0x0247,	// (0x0009a98b) popup_call2_audio_second_window_g_ParamLimits

0x0247,	// (0x0009a98b) popup_call2_audio_second_window_g

0xbb18,	// (0x000a625c) popup_call2_audio_second_window_t1_ParamLimits

0xbb18,	// (0x000a625c) popup_call2_audio_second_window_t1

0xbbd3,	// (0x000a6317) popup_call2_audio_second_window_t2_ParamLimits

0xbbd3,	// (0x000a6317) popup_call2_audio_second_window_t2

0xbc26,	// (0x000a636a) popup_call2_audio_second_window_t3_ParamLimits

0xbc26,	// (0x000a636a) popup_call2_audio_second_window_t3

0x0003,

0x024e,	// (0x0009a992) popup_call2_audio_second_window_t_ParamLimits

0x024e,	// (0x0009a992) popup_call2_audio_second_window_t

0xa3e8,	// (0x000a4b2c) bg_popup_call2_in_pane_cp02

0xa3f2,	// (0x000a4b36) call_type_pane_cp04

0xa3fa,	// (0x000a4b3e) popup_call2_audio_wait_window_g1

0xa402,	// (0x000a4b46) popup_call2_audio_wait_window_g2

0x0001,

0xf0de,	// (0x000a9822) popup_call2_audio_wait_window_g

0xa40a,	// (0x000a4b4e) popup_call2_audio_wait_window_t3

0xbd19,	// (0x000a645d) bg_popup_call2_act_pane_ParamLimits

0xbd19,	// (0x000a645d) bg_popup_call2_act_pane

0xbdd9,	// (0x000a651d) call_type_pane_cp03_ParamLimits

0xbdd9,	// (0x000a651d) call_type_pane_cp03

0xbe3d,	// (0x000a6581) popup_call2_audio_first_window_g1_ParamLimits

0xbe3d,	// (0x000a6581) popup_call2_audio_first_window_g1

0xbead,	// (0x000a65f1) popup_call2_audio_first_window_g2_ParamLimits

0xbead,	// (0x000a65f1) popup_call2_audio_first_window_g2

0xb4ef,	// (0x000a5c33) popup_call2_audio_first_window_g3_ParamLimits

0xb4ef,	// (0x000a5c33) popup_call2_audio_first_window_g3

0x0004,

0xf4bd,	// (0x000a9c01) popup_call2_audio_first_window_g_ParamLimits

0xf4bd,	// (0x000a9c01) popup_call2_audio_first_window_g

0xbf8b,	// (0x000a66cf) popup_call2_audio_first_window_t1_ParamLimits

0xbf8b,	// (0x000a66cf) popup_call2_audio_first_window_t1

0xc08e,	// (0x000a67d2) popup_call2_audio_first_window_t4_ParamLimits

0xc08e,	// (0x000a67d2) popup_call2_audio_first_window_t4

0xc171,	// (0x000a68b5) popup_call2_audio_first_window_t5_ParamLimits

0xc171,	// (0x000a68b5) popup_call2_audio_first_window_t5

0x0003,

0xf4c8,	// (0x000a9c0c) popup_call2_audio_first_window_t_ParamLimits

0xf4c8,	// (0x000a9c0c) popup_call2_audio_first_window_t

0xa7ec,	// (0x000a4f30) bg_popup_call2_act_pane_g1

0xc7ea,	// (0x000a6f2e) popup_cale_lunar_info_window_t1

0xc7f8,	// (0x000a6f3c) popup_cale_lunar_info_window_t2

0xc806,	// (0x000a6f4a) popup_cale_lunar_info_window_t3

0xa3e8,	// (0x000a4b2c) bg_popup_call2_bubble_pane

0xc272,	// (0x000a69b6) bg_popup_call2_in_pane_cp01_ParamLimits

0xc272,	// (0x000a69b6) bg_popup_call2_in_pane_cp01

0x9dbe,	// (0x000a4502) call_type_pane_cp02

0xc2c6,	// (0x000a6a0a) popup_call2_audio_out_window_g1_ParamLimits

0xc2c6,	// (0x000a6a0a) popup_call2_audio_out_window_g1

0xc2f2,	// (0x000a6a36) popup_call2_audio_out_window_g2_ParamLimits

0xc2f2,	// (0x000a6a36) popup_call2_audio_out_window_g2

0xc31a,	// (0x000a6a5e) popup_call2_audio_out_window_g3_ParamLimits

0xc31a,	// (0x000a6a5e) popup_call2_audio_out_window_g3

0x0003,

0x026b,	// (0x0009a9af) popup_call2_audio_out_window_g_ParamLimits

0x026b,	// (0x0009a9af) popup_call2_audio_out_window_g

0xc355,	// (0x000a6a99) popup_call2_audio_out_window_t1_ParamLimits

0xc355,	// (0x000a6a99) popup_call2_audio_out_window_t1

0xc3b4,	// (0x000a6af8) popup_call2_audio_out_window_t2_ParamLimits

0xc3b4,	// (0x000a6af8) popup_call2_audio_out_window_t2

0xc408,	// (0x000a6b4c) popup_call2_audio_out_window_t3_ParamLimits

0xc408,	// (0x000a6b4c) popup_call2_audio_out_window_t3

0xc41e,	// (0x000a6b62) popup_call2_audio_out_window_t4_ParamLimits

0xc41e,	// (0x000a6b62) popup_call2_audio_out_window_t4

0xc434,	// (0x000a6b78) popup_call2_audio_out_window_t5_ParamLimits

0xc434,	// (0x000a6b78) popup_call2_audio_out_window_t5

0x0005,

0x0274,	// (0x0009a9b8) popup_call2_audio_out_window_t_ParamLimits

0x0274,	// (0x0009a9b8) popup_call2_audio_out_window_t

0xc498,	// (0x000a6bdc) bg_popup_call2_in_pane_ParamLimits

0xc498,	// (0x000a6bdc) bg_popup_call2_in_pane

0xc4f4,	// (0x000a6c38) popup_call2_audio_in_window_g1_ParamLimits

0xc4f4,	// (0x000a6c38) popup_call2_audio_in_window_g1

0xc52c,	// (0x000a6c70) popup_call2_audio_in_window_g2_ParamLimits

0xc52c,	// (0x000a6c70) popup_call2_audio_in_window_g2

0xc564,	// (0x000a6ca8) popup_call2_audio_in_window_g3_ParamLimits

0xc564,	// (0x000a6ca8) popup_call2_audio_in_window_g3

0x0003,

0x0281,	// (0x0009a9c5) popup_call2_audio_in_window_g_ParamLimits

0x0281,	// (0x0009a9c5) popup_call2_audio_in_window_g

0xc5bc,	// (0x000a6d00) popup_call2_audio_in_window_t1_ParamLimits

0xc5bc,	// (0x000a6d00) popup_call2_audio_in_window_t1

0xc63c,	// (0x000a6d80) popup_call2_audio_in_window_t2_ParamLimits

0xc63c,	// (0x000a6d80) popup_call2_audio_in_window_t2

0xc6bc,	// (0x000a6e00) popup_call2_audio_in_window_t3_ParamLimits

0xc6bc,	// (0x000a6e00) popup_call2_audio_in_window_t3

0xc6d6,	// (0x000a6e1a) popup_call2_audio_in_window_t4_ParamLimits

0xc6d6,	// (0x000a6e1a) popup_call2_audio_in_window_t4

0xc6e8,	// (0x000a6e2c) popup_call2_audio_in_window_t5_ParamLimits

0xc6e8,	// (0x000a6e2c) popup_call2_audio_in_window_t5

0xc6fd,	// (0x000a6e41) popup_call2_audio_in_window_t6_ParamLimits

0xc6fd,	// (0x000a6e41) popup_call2_audio_in_window_t6

0x0005,

0x028a,	// (0x0009a9ce) popup_call2_audio_in_window_t_ParamLimits

0x028a,	// (0x0009a9ce) popup_call2_audio_in_window_t

0xa7ec,	// (0x000a4f30) bg_popup_call2_in_pane_g1

0xc814,	// (0x000a6f58) popup_cale_lunar_info_window_t4

0x0003,

0x02f2,	// (0x0009aa36) popup_cale_lunar_info_window_t

0xa7f4,	// (0x000a4f38) bg_popup_call2_rect_pane_ParamLimits

0xa7f4,	// (0x000a4f38) bg_popup_call2_rect_pane

0xa3e8,	// (0x000a4b2c) call2_cli_visual_graphic_pane

0xa3e8,	// (0x000a4b2c) call2_cli_visual_text_pane

0x44df,	// (0x0009ec23) smil_status_volume_pane_g3

0x0002,

0xa90e,	// (0x000a5052) call2_cli_visual_graphic_pane_g1

0xa90e,	// (0x000a5052) call2_cli_visual_graphic_pane_g2

0xa90e,	// (0x000a5052) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4d1,	// (0x000a9c15) call2_cli_visual_graphic_pane_g

0xc712,	// (0x000a6e56) bg_popup_call2_rect_pane_g1

0xa99a,	// (0x000a50de) bg_popup_call2_rect_pane_g2

0xc71a,	// (0x000a6e5e) bg_popup_call2_rect_pane_g3

0xc722,	// (0x000a6e66) bg_popup_call2_rect_pane_g4

0xc72a,	// (0x000a6e6e) bg_popup_call2_rect_pane_g5

0xc732,	// (0x000a6e76) bg_popup_call2_rect_pane_g6

0xc73a,	// (0x000a6e7e) bg_popup_call2_rect_pane_g7

0xc742,	// (0x000a6e86) bg_popup_call2_rect_pane_g8

0xc74a,	// (0x000a6e8e) bg_popup_call2_rect_pane_g9

0x0008,

0xf4d8,	// (0x000a9c1c) bg_popup_call2_rect_pane_g

0xc752,	// (0x000a6e96) bg_popup_call2_bubble_pane_g1

0xc75a,	// (0x000a6e9e) bg_popup_call2_bubble_pane_g2

0xc762,	// (0x000a6ea6) bg_popup_call2_bubble_pane_g3

0xc76a,	// (0x000a6eae) bg_popup_call2_bubble_pane_g4

0xc772,	// (0x000a6eb6) bg_popup_call2_bubble_pane_g5

0xc77a,	// (0x000a6ebe) bg_popup_call2_bubble_pane_g6

0xc782,	// (0x000a6ec6) bg_popup_call2_bubble_pane_g7

0xc78a,	// (0x000a6ece) bg_popup_call2_bubble_pane_g8

0xc792,	// (0x000a6ed6) bg_popup_call2_bubble_pane_g9

0x0008,

0x02b1,	// (0x0009a9f5) bg_popup_call2_bubble_pane_g

0x1667,	// (0x0009bdab) aid_cale_week_size_cell_pane

0x1be5,	// (0x0009c329) aid_cams_cif_uncrop_pane_ParamLimits

0x1be5,	// (0x0009c329) aid_cams_cif_uncrop_pane

0x1d40,	// (0x0009c484) aid_cams_size_cell_ParamLimits

0x1d40,	// (0x0009c484) aid_cams_size_cell

0x1d4c,	// (0x0009c490) grid_cams_pane_ParamLimits

0x1d5a,	// (0x0009c49e) linegrid_cams_pane_ParamLimits

0x1f28,	// (0x0009c66c) call_video_pane_t1

0x1f49,	// (0x0009c68d) call_video_pane_t2

0x0001,

0xf253,	// (0x000a9997) call_video_pane_t

0x2490,	// (0x0009cbd4) aid_cale_month_size_cell_pane_ParamLimits

0x2490,	// (0x0009cbd4) aid_cale_month_size_cell_pane

0xf51b,	// (0x000a9c5f) smil_status_volume_pane_g

0x44ec,	// (0x0009ec30) volume_smil_pane_ParamLimits

0x0daa,	// (0x0009b4ee) aid_popup2_width_pane

0x155b,	// (0x0009bc9f) cell_qdial_pane_g4_ParamLimits

0x155b,	// (0x0009bc9f) cell_qdial_pane_g4

0x3471,	// (0x0009dbb5) aid_blid_cardinal_pane_ParamLimits

0x3481,	// (0x0009dbc5) aid_blid_destination_pane_ParamLimits

0x3481,	// (0x0009dbc5) aid_blid_destination_pane

0xa7f4,	// (0x000a4f38) bg_popup_call_poc_act_pane_ParamLimits

0xa7f4,	// (0x000a4f38) bg_popup_call_poc_act_pane

0xa7f4,	// (0x000a4f38) bg_popup_call_poc_inact_pane_ParamLimits

0xa7f4,	// (0x000a4f38) bg_popup_call_poc_inact_pane

0xc79a,	// (0x000a6ede) bg_popup_call_poc_act_pane_g1

0xc7a2,	// (0x000a6ee6) bg_popup_call_poc_act_pane_g2

0xc7aa,	// (0x000a6eee) bg_popup_call_poc_act_pane_g3

0xc76a,	// (0x000a6eae) bg_popup_call_poc_act_pane_g4

0xc772,	// (0x000a6eb6) bg_popup_call_poc_act_pane_g5

0xc7b2,	// (0x000a6ef6) bg_popup_call_poc_act_pane_g6

0xc782,	// (0x000a6ec6) bg_popup_call_poc_act_pane_g7

0xc7ba,	// (0x000a6efe) bg_popup_call_poc_act_pane_g8

0xa3e8,	// (0x000a4b2c) main_usb_pane

0x42db,	// (0x0009ea1f) popup_cale_lunar_info_window

0x2272,	// (0x0009c9b6) im_reading_pane_t1_ParamLimits

0xab88,	// (0x000a52cc) list_im_pane_ParamLimits

0xab99,	// (0x000a52dd) scroll_pane_cp07_ParamLimits

0xa3e8,	// (0x000a4b2c) grid_highlight_pane_cp012

0xa7f4,	// (0x000a4f38) mup_scale_pane_ParamLimits

0xb4ef,	// (0x000a5c33) main_usb_pane_g1_ParamLimits

0xb4ef,	// (0x000a5c33) main_usb_pane_g1

0x403c,	// (0x0009e780) main_usb_pane_g2_ParamLimits

0x403c,	// (0x0009e780) main_usb_pane_g2

0x0001,

0xf4eb,	// (0x000a9c2f) main_usb_pane_g_ParamLimits

0xf4eb,	// (0x000a9c2f) main_usb_pane_g

0x4048,	// (0x0009e78c) main_usb_pane_t1_ParamLimits

0x4048,	// (0x0009e78c) main_usb_pane_t1

0x405a,	// (0x0009e79e) main_usb_pane_t2_ParamLimits

0x405a,	// (0x0009e79e) main_usb_pane_t2

0x406c,	// (0x0009e7b0) main_usb_pane_t3_ParamLimits

0x406c,	// (0x0009e7b0) main_usb_pane_t3

0x407e,	// (0x0009e7c2) main_usb_pane_t4_ParamLimits

0x407e,	// (0x0009e7c2) main_usb_pane_t4

0x4090,	// (0x0009e7d4) main_usb_pane_t5_ParamLimits

0x4090,	// (0x0009e7d4) main_usb_pane_t5

0x40a2,	// (0x0009e7e6) main_usb_pane_t6_ParamLimits

0x40a2,	// (0x0009e7e6) main_usb_pane_t6

0x0005,

0xf4f0,	// (0x000a9c34) main_usb_pane_t_ParamLimits

0x3417,	// (0x0009db5b) aid_text_placing

0x3423,	// (0x0009db67) main_location2_pane_t1_ParamLimits

0x3437,	// (0x0009db7b) main_location2_pane_t2_ParamLimits

0x344b,	// (0x0009db8f) main_location2_pane_t3_ParamLimits

0x345f,	// (0x0009dba3) main_location2_pane_t4_ParamLimits

0x345f,	// (0x0009dba3) main_location2_pane_t4

0xf3af,	// (0x000a9af3) main_location2_pane_t_ParamLimits

0xa830,	// (0x000a4f74) find_pinb_pane_g2_ParamLimits

0xa830,	// (0x000a4f74) find_pinb_pane_g2

0x0001,

0xf104,	// (0x000a9848) find_pinb_pane_g_ParamLimits

0xf104,	// (0x000a9848) find_pinb_pane_g

0xa83c,	// (0x000a4f80) find_pinb_pane_t1_ParamLimits

0xa84e,	// (0x000a4f92) find_pinb_pane_t2_ParamLimits

0xf109,	// (0x000a984d) find_pinb_pane_t_ParamLimits

0xa3e8,	// (0x000a4b2c) main_call3_pane

0x2a33,	// (0x0009d177) cale_month_day_heading_pane_t1_ParamLimits

0x2ab9,	// (0x0009d1fd) cale_month_day_heading_pane_t2_ParamLimits

0x2b32,	// (0x0009d276) cale_month_day_heading_pane_t3_ParamLimits

0x2bab,	// (0x0009d2ef) cale_month_day_heading_pane_t4_ParamLimits

0x2c24,	// (0x0009d368) cale_month_day_heading_pane_t5_ParamLimits

0x2c9d,	// (0x0009d3e1) cale_month_day_heading_pane_t6_ParamLimits

0x2d16,	// (0x0009d45a) cale_month_day_heading_pane_t7_ParamLimits

0xf28b,	// (0x000a99cf) cale_month_day_heading_pane_t_ParamLimits

0xade3,	// (0x000a5527) smil_status_volume_pane

0x3c00,	// (0x0009e344) postcard_address_pane_ParamLimits

0x3c00,	// (0x0009e344) postcard_address_pane

0x3c0c,	// (0x0009e350) postcard_message_pane_ParamLimits

0x3c0c,	// (0x0009e350) postcard_message_pane

0x4007,	// (0x0009e74b) call2_cli_visual_pane_t1_ParamLimits

0x4007,	// (0x0009e74b) call2_cli_visual_pane_t1

0x4643,	// (0x0009ed87) postcard_message_pane_t1_ParamLimits

0x4643,	// (0x0009ed87) postcard_message_pane_t1

0x462c,	// (0x0009ed70) postcard_address_pane_t1_ParamLimits

0x462c,	// (0x0009ed70) postcard_address_pane_t1

0x461d,	// (0x0009ed61) popup_call3_audio_in_window_ParamLimits

0x461d,	// (0x0009ed61) popup_call3_audio_in_window

0x4501,	// (0x0009ec45) bg_popup_call3_in_pane_ParamLimits

0x4501,	// (0x0009ec45) bg_popup_call3_in_pane

0x4563,	// (0x0009eca7) popup_call3_audio_in_window_g1_ParamLimits

0x4563,	// (0x0009eca7) popup_call3_audio_in_window_g1

0x457b,	// (0x0009ecbf) popup_call3_audio_in_window_g2_ParamLimits

0x457b,	// (0x0009ecbf) popup_call3_audio_in_window_g2

0x4593,	// (0x0009ecd7) popup_call3_audio_in_window_g3_ParamLimits

0x4593,	// (0x0009ecd7) popup_call3_audio_in_window_g3

0x0003,

0xf522,	// (0x000a9c66) popup_call3_audio_in_window_g_ParamLimits

0xf522,	// (0x000a9c66) popup_call3_audio_in_window_g

0x45bb,	// (0x0009ecff) popup_call3_audio_in_window_t1_ParamLimits

0x45bb,	// (0x0009ecff) popup_call3_audio_in_window_t1

0x45e3,	// (0x0009ed27) popup_call3_audio_in_window_t2_ParamLimits

0x45e3,	// (0x0009ed27) popup_call3_audio_in_window_t2

0x460b,	// (0x0009ed4f) popup_call3_audio_in_window_t3_ParamLimits

0x460b,	// (0x0009ed4f) popup_call3_audio_in_window_t3

0x0002,

0xf52b,	// (0x000a9c6f) popup_call3_audio_in_window_t_ParamLimits

0xf52b,	// (0x000a9c6f) popup_call3_audio_in_window_t

0xaa87,	// (0x000a51cb) bg_popup_call3_rect_pane

0xc712,	// (0x000a6e56) bg_popup_call3_rect_pane_g1

0xa99a,	// (0x000a50de) bg_popup_call3_rect_pane_g2

0xc71a,	// (0x000a6e5e) bg_popup_call3_rect_pane_g3

0xc722,	// (0x000a6e66) bg_popup_call3_rect_pane_g4

0xc72a,	// (0x000a6e6e) bg_popup_call3_rect_pane_g5

0xc732,	// (0x000a6e76) bg_popup_call3_rect_pane_g6

0xc73a,	// (0x000a6e7e) bg_popup_call3_rect_pane_g7

0x3797,	// (0x0009dedb) mup_visualizer_osc_pane

0xb5c4,	// (0x000a5d08) mup_visualizer_spec_pane

0x4521,	// (0x0009ec65) call3_video_qcif_pane_ParamLimits

0x4521,	// (0x0009ec65) call3_video_qcif_pane

0x4533,	// (0x0009ec77) call3_video_qcif_uncrop_pane_ParamLimits

0x4533,	// (0x0009ec77) call3_video_qcif_uncrop_pane

0x4541,	// (0x0009ec85) call3_video_subqcif_pane_ParamLimits

0x4541,	// (0x0009ec85) call3_video_subqcif_pane

0x4553,	// (0x0009ec97) call3_video_subqcif_uncrop_pane_ParamLimits

0x4553,	// (0x0009ec97) call3_video_subqcif_uncrop_pane

0x45ab,	// (0x0009ecef) popup_call3_audio_in_window_g4_ParamLimits

0x45ab,	// (0x0009ecef) popup_call3_audio_in_window_g4

0x44ce,	// (0x0009ec12) mup_spec_half_pane

0x44d7,	// (0x0009ec1b) mup_spec_half_pane_cp

0xc977,	// (0x000a70bb) mup_osc_middle_pane

0xc980,	// (0x000a70c4) mup_visualizer_osc_pane_g1

0x44af,	// (0x0009ebf3) mup_spec_bar_pane_ParamLimits

0x44af,	// (0x0009ebf3) mup_spec_bar_pane

0xc964,	// (0x000a70a8) mup_spec_bar_pane_g1

0xc96e,	// (0x000a70b2) mup_spec_bar_pane_g2

0x0001,

0x0336,	// (0x0009aa7a) mup_spec_bar_pane_g

0x1667,	// (0x0009bdab) aid_cale_week_size_cell_pane_ParamLimits

0x167c,	// (0x0009bdc0) bg_cale_heading_pane_ParamLimits

0xa9d7,	// (0x000a511b) bg_cale_pane_cp01_ParamLimits

0x169c,	// (0x0009bde0) cale_week_corner_pane_ParamLimits

0x16b6,	// (0x0009bdfa) cale_week_day_heading_pane_ParamLimits

0x16d6,	// (0x0009be1a) cale_week_scroll_pane_g1_ParamLimits

0x16f1,	// (0x0009be35) cale_week_scroll_pane_g2_ParamLimits

0x1704,	// (0x0009be48) cale_week_scroll_pane_g3_ParamLimits

0x1717,	// (0x0009be5b) cale_week_scroll_pane_g4_ParamLimits

0x172a,	// (0x0009be6e) cale_week_scroll_pane_g5_ParamLimits

0x173d,	// (0x0009be81) cale_week_scroll_pane_g6_ParamLimits

0x1750,	// (0x0009be94) cale_week_scroll_pane_g7_ParamLimits

0x1765,	// (0x0009bea9) cale_week_scroll_pane_g8_ParamLimits

0x177a,	// (0x0009bebe) cale_week_scroll_pane_g9_ParamLimits

0x178d,	// (0x0009bed1) cale_week_scroll_pane_g10_ParamLimits

0x17a0,	// (0x0009bee4) cale_week_scroll_pane_g11_ParamLimits

0x17b3,	// (0x0009bef7) cale_week_scroll_pane_g12_ParamLimits

0x17ca,	// (0x0009bf0e) cale_week_scroll_pane_g13_ParamLimits

0x17e5,	// (0x0009bf29) cale_week_scroll_pane_g14_ParamLimits

0x1800,	// (0x0009bf44) cale_week_scroll_pane_g15_ParamLimits

0xf195,	// (0x000a98d9) cale_week_scroll_pane_g_ParamLimits

0x1830,	// (0x0009bf74) cale_week_time_pane_ParamLimits

0x1845,	// (0x0009bf89) grid_cale_week_pane_ParamLimits

0xa9f4,	// (0x000a5138) listscroll_cale_week_pane_t1

0xaa06,	// (0x000a514a) scroll_pane_cp08_ParamLimits

0x2504,	// (0x0009cc48) cale_month_corner_pane_ParamLimits

0xadb9,	// (0x000a54fd) cale_month_pane_t1

0x29b6,	// (0x0009d0fa) cale_month_week_pane_ParamLimits

0xb4ef,	// (0x000a5c33) popup_call_status_window_g1_ParamLimits

0x324a,	// (0x0009d98e) popup_call_status_window_g2_ParamLimits

0x3256,	// (0x0009d99a) popup_call_status_window_g3_ParamLimits

0xf33b,	// (0x000a9a7f) popup_call_status_window_g_ParamLimits

0xb169,	// (0x000a58ad) aid_call2_pane

0x3a3f,	// (0x0009e183) msg_header_pane_g1

0x3c00,	// (0x0009e344) postcard_address2_pane_ParamLimits

0x3c00,	// (0x0009e344) postcard_address2_pane

0x3c0c,	// (0x0009e350) postcard_message2_pane_ParamLimits

0x3c0c,	// (0x0009e350) postcard_message2_pane

0x4447,	// (0x0009eb8b) message2_row_pane_ParamLimits

0x4447,	// (0x0009eb8b) message2_row_pane

0x4462,	// (0x0009eba6) address2_row_pane_ParamLimits

0x4462,	// (0x0009eba6) address2_row_pane

0xc932,	// (0x000a7076) postcard_message2_row_pane_g1

0xc93a,	// (0x000a707e) postcard_message2_row_pane_t1

0xc932,	// (0x000a7076) address2_row_pane_g1

0xc93a,	// (0x000a707e) address2_row_pane_t1

0x1acb,	// (0x0009c20f) aid_size_cell_vorec

0xa3e8,	// (0x000a4b2c) main_rss_pane

0x4475,	// (0x0009ebb9) rss_list_single_pane_ParamLimits

0x4475,	// (0x0009ebb9) rss_list_single_pane

0xc948,	// (0x000a708c) rss_list_single_pane_t1

0xc956,	// (0x000a709a) rss_list_single_pane_t2

0x0001,

0x0331,	// (0x0009aa75) rss_list_single_pane_t

0xa3e8,	// (0x000a4b2c) main_camera2_pane

0xa3e8,	// (0x000a4b2c) main_video2_pane

0x46a7,	// (0x0009edeb) cams_zoom_pane_cp2_ParamLimits

0x46a7,	// (0x0009edeb) cams_zoom_pane_cp2

0x46b3,	// (0x0009edf7) image2_vga_pane_ParamLimits

0x46b3,	// (0x0009edf7) image2_vga_pane

0x46c2,	// (0x0009ee06) main_camera2_pane_g1_ParamLimits

0x46c2,	// (0x0009ee06) main_camera2_pane_g1

0x46ce,	// (0x0009ee12) main_camera2_pane_g2_ParamLimits

0x46ce,	// (0x0009ee12) main_camera2_pane_g2

0x46da,	// (0x0009ee1e) main_camera2_pane_g3_ParamLimits

0x46da,	// (0x0009ee1e) main_camera2_pane_g3

0x46e6,	// (0x0009ee2a) main_camera2_pane_g4_ParamLimits

0x46e6,	// (0x0009ee2a) main_camera2_pane_g4

0x46f2,	// (0x0009ee36) main_camera2_pane_g5_ParamLimits

0x46f2,	// (0x0009ee36) main_camera2_pane_g5

0x46fe,	// (0x0009ee42) main_camera2_pane_g6_ParamLimits

0x46fe,	// (0x0009ee42) main_camera2_pane_g6

0x470a,	// (0x0009ee4e) main_camera2_pane_g7_ParamLimits

0x470a,	// (0x0009ee4e) main_camera2_pane_g7

0x4716,	// (0x0009ee5a) main_camera2_pane_g8_ParamLimits

0x4716,	// (0x0009ee5a) main_camera2_pane_g8

0x0008,

0xf532,	// (0x000a9c76) main_camera2_pane_g_ParamLimits

0xf532,	// (0x000a9c76) main_camera2_pane_g

0x472e,	// (0x0009ee72) main_camera2_pane_t1_ParamLimits

0x472e,	// (0x0009ee72) main_camera2_pane_t1

0x4740,	// (0x0009ee84) main_camera2_pane_t2_ParamLimits

0x4740,	// (0x0009ee84) main_camera2_pane_t2

0x4752,	// (0x0009ee96) main_camera2_pane_t3_ParamLimits

0x4752,	// (0x0009ee96) main_camera2_pane_t3

0x4764,	// (0x0009eea8) main_camera2_pane_t4_ParamLimits

0x4764,	// (0x0009eea8) main_camera2_pane_t4

0x0006,

0xf545,	// (0x000a9c89) main_camera2_pane_t_ParamLimits

0xf545,	// (0x000a9c89) main_camera2_pane_t

0x47c6,	// (0x0009ef0a) cams_zoom_pane_cp4_ParamLimits

0x47c6,	// (0x0009ef0a) cams_zoom_pane_cp4

0x47d6,	// (0x0009ef1a) image2_cif_pane_ParamLimits

0x47d6,	// (0x0009ef1a) image2_cif_pane

0x47eb,	// (0x0009ef2f) image2_subqcif_pane_ParamLimits

0x47eb,	// (0x0009ef2f) image2_subqcif_pane

0x47fa,	// (0x0009ef3e) main_video2_pane_g1_ParamLimits

0x47fa,	// (0x0009ef3e) main_video2_pane_g1

0x480c,	// (0x0009ef50) main_video2_pane_g2_ParamLimits

0x480c,	// (0x0009ef50) main_video2_pane_g2

0x481c,	// (0x0009ef60) main_video2_pane_g3_ParamLimits

0x481c,	// (0x0009ef60) main_video2_pane_g3

0x482c,	// (0x0009ef70) main_video2_pane_g4_ParamLimits

0x482c,	// (0x0009ef70) main_video2_pane_g4

0x483c,	// (0x0009ef80) main_video2_pane_g5_ParamLimits

0x483c,	// (0x0009ef80) main_video2_pane_g5

0x484c,	// (0x0009ef90) main_video2_pane_g6_ParamLimits

0x484c,	// (0x0009ef90) main_video2_pane_g6

0x0005,

0xf554,	// (0x000a9c98) main_video2_pane_g_ParamLimits

0xf554,	// (0x000a9c98) main_video2_pane_g

0x485e,	// (0x0009efa2) main_video2_pane_t1_ParamLimits

0x485e,	// (0x0009efa2) main_video2_pane_t1

0x4878,	// (0x0009efbc) main_video2_pane_t2_ParamLimits

0x4878,	// (0x0009efbc) main_video2_pane_t2

0x489e,	// (0x0009efe2) main_video2_pane_t3_ParamLimits

0x489e,	// (0x0009efe2) main_video2_pane_t3

0x0002,

0xf561,	// (0x000a9ca5) main_video2_pane_t_ParamLimits

0xf561,	// (0x000a9ca5) main_video2_pane_t

0x4159,	// (0x0009e89d) call_muted_g2

0x0001,

0xf516,	// (0x000a9c5a) call_muted_g

0xa3e8,	// (0x000a4b2c) main_mup2_pane

0xc9b7,	// (0x000a70fb) main_mup2_pane_g1_ParamLimits

0xc9b7,	// (0x000a70fb) main_mup2_pane_g1

0x48c4,	// (0x0009f008) main_mup2_pane_g2_ParamLimits

0x48c4,	// (0x0009f008) main_mup2_pane_g2

0x4b46,	// (0x0009f28a) main_mup_pane_g13_cp1

0x4b4e,	// (0x0009f292) mup_volume_pane_cp1

0x48e4,	// (0x0009f028) main_mup2_pane_g4_ParamLimits

0x48e4,	// (0x0009f028) main_mup2_pane_g4

0x48f9,	// (0x0009f03d) main_mup2_pane_g5_ParamLimits

0x48f9,	// (0x0009f03d) main_mup2_pane_g5

0x490e,	// (0x0009f052) main_mup2_pane_g6_ParamLimits

0x490e,	// (0x0009f052) main_mup2_pane_g6

0x4923,	// (0x0009f067) main_mup2_pane_g7_ParamLimits

0x4923,	// (0x0009f067) main_mup2_pane_g7

0x0006,

0xf568,	// (0x000a9cac) main_mup2_pane_g_ParamLimits

0xf568,	// (0x000a9cac) main_mup2_pane_g

0x493f,	// (0x0009f083) main_mup2_pane_t1_ParamLimits

0x493f,	// (0x0009f083) main_mup2_pane_t1

0x4956,	// (0x0009f09a) main_mup2_pane_t2_ParamLimits

0x4956,	// (0x0009f09a) main_mup2_pane_t2

0x496d,	// (0x0009f0b1) main_mup2_pane_t3_ParamLimits

0x496d,	// (0x0009f0b1) main_mup2_pane_t3

0x4984,	// (0x0009f0c8) main_mup2_pane_t4_ParamLimits

0x4984,	// (0x0009f0c8) main_mup2_pane_t4

0x499e,	// (0x0009f0e2) main_mup2_pane_t5_ParamLimits

0x499e,	// (0x0009f0e2) main_mup2_pane_t5

0x49b8,	// (0x0009f0fc) main_mup2_pane_t6_ParamLimits

0x49b8,	// (0x0009f0fc) main_mup2_pane_t6

0x0005,

0xf577,	// (0x000a9cbb) main_mup2_pane_t_ParamLimits

0xf577,	// (0x000a9cbb) main_mup2_pane_t

0x49f0,	// (0x0009f134) mup2_visualizer_pane_ParamLimits

0x49f0,	// (0x0009f134) mup2_visualizer_pane

0x4a26,	// (0x0009f16a) mup_progress_pane_cp_ParamLimits

0x4a26,	// (0x0009f16a) mup_progress_pane_cp

0x4b31,	// (0x0009f275) mup_volume_pane_cp_ParamLimits

0x4b31,	// (0x0009f275) mup_volume_pane_cp

0x4a3d,	// (0x0009f181) mup2_visualizer_pane_g1_ParamLimits

0x4a3d,	// (0x0009f181) mup2_visualizer_pane_g1

0xc9c3,	// (0x000a7107) mup2_visualizer_pane_g2_ParamLimits

0xc9c3,	// (0x000a7107) mup2_visualizer_pane_g2

0x4a52,	// (0x0009f196) mup2_visualizer_pane_g3_ParamLimits

0x4a52,	// (0x0009f196) mup2_visualizer_pane_g3

0x0002,

0xf584,	// (0x000a9cc8) mup2_visualizer_pane_g_ParamLimits

0xf584,	// (0x000a9cc8) mup2_visualizer_pane_g

0xb7eb,	// (0x000a5f2f) aid_size_cell_fmradio

0x426f,	// (0x0009e9b3) aid_height_parent_landcape

0xac17,	// (0x000a535b) wml_content_pane_cp

0xac1f,	// (0x000a5363) wml_tabs_pane

0xac28,	// (0x000a536c) popup_wml_miniature_window

0xac30,	// (0x000a5374) scroll_pane_cp021

0xac44,	// (0x000a5388) wml_content_pane_comp8

0xa3e8,	// (0x000a4b2c) bg_popup_sub_pane_cp05

0xc9e1,	// (0x000a7125) popup_wml_miniature_window_g1

0xc9e9,	// (0x000a712d) wml_miniature_view_pane

0x4a60,	// (0x0009f1a4) aid_size_wml_view

0x4a68,	// (0x0009f1ac) wml_miniature_view_pane_g1

0x4a71,	// (0x0009f1b5) wml_miniature_view_pane_g2

0x4a7a,	// (0x0009f1be) wml_miniature_view_pane_g3

0x4a82,	// (0x0009f1c6) wml_miniature_view_pane_g4

0x4a8a,	// (0x0009f1ce) wml_miniature_view_pane_g5

0x4a92,	// (0x0009f1d6) wml_miniature_view_pane_g6

0x4a9a,	// (0x0009f1de) wml_miniature_view_pane_g7

0x4aa2,	// (0x0009f1e6) wml_miniature_view_pane_g8

0x0007,

0xf58b,	// (0x000a9ccf) wml_miniature_view_pane_g

0xc9b7,	// (0x000a70fb) background_graphic_ParamLimits

0xc9b7,	// (0x000a70fb) background_graphic

0xc9f1,	// (0x000a7135) wml_tabs_2_pane

0xc9fa,	// (0x000a713e) wml_tabs_3_pane_ParamLimits

0xc9fa,	// (0x000a713e) wml_tabs_3_pane

0xca0c,	// (0x000a7150) wml_tabs_4_pane_ParamLimits

0xca0c,	// (0x000a7150) wml_tabs_4_pane

0xca22,	// (0x000a7166) wml_tabs_5_pane_ParamLimits

0xca22,	// (0x000a7166) wml_tabs_5_pane

0xca3c,	// (0x000a7180) wml_tabs_pane_g2_ParamLimits

0xca3c,	// (0x000a7180) wml_tabs_pane_g2

0xca50,	// (0x000a7194) wml_tabs_pane_g3_ParamLimits

0xca50,	// (0x000a7194) wml_tabs_pane_g3

0x4aaa,	// (0x0009f1ee) wml_tabs_2_active_pane_ParamLimits

0x4aaa,	// (0x0009f1ee) wml_tabs_2_active_pane

0x4aba,	// (0x0009f1fe) wml_tabs_2_passive_pane_ParamLimits

0x4aba,	// (0x0009f1fe) wml_tabs_2_passive_pane

0x4aca,	// (0x0009f20e) wml_tabs_3_active_pane_cp_ParamLimits

0x4aca,	// (0x0009f20e) wml_tabs_3_active_pane_cp

0x4adb,	// (0x0009f21f) wml_tabs_3_passive_pane_ParamLimits

0x4adb,	// (0x0009f21f) wml_tabs_3_passive_pane

0x4aec,	// (0x0009f230) wml_tabs_3_passive_pane_cp_ParamLimits

0x4aec,	// (0x0009f230) wml_tabs_3_passive_pane_cp

0x4afd,	// (0x0009f241) tabs_4_active_pane

0x4b05,	// (0x0009f249) tabs_4_passive_pane

0x4b0d,	// (0x0009f251) tabs_4_passive_pane_cp

0x4b15,	// (0x0009f259) tabs_4_passive_pane_cp2

0x4034,	// (0x0009e778) aid_height_text

0x3764,	// (0x0009dea8) mup_volume_cont_pane_ParamLimits

0x3764,	// (0x0009dea8) mup_volume_cont_pane

0x1191,	// (0x0009b8d5) aid_size_cell_pinb

0x119b,	// (0x0009b8df) aid_size_list_pinb

0x4a0f,	// (0x0009f153) mup2_volume_cont_pane_ParamLimits

0x4a0f,	// (0x0009f153) mup2_volume_cont_pane

0x4b1d,	// (0x0009f261) mup2_volume_cont_pane_g1_ParamLimits

0x4b1d,	// (0x0009f261) mup2_volume_cont_pane_g1

0x0db6,	// (0x0009b4fa) aid_size_cell_touch_ParamLimits

0x0db6,	// (0x0009b4fa) aid_size_cell_touch

0x1077,	// (0x0009b7bb) touch_pane_ParamLimits

0x1077,	// (0x0009b7bb) touch_pane

0x106d,	// (0x0009b7b1) main_rss2_pane

0xca6d,	// (0x000a71b1) listscroll_rss2_pane

0xca76,	// (0x000a71ba) rss2_navigation_pane

0xca7e,	// (0x000a71c2) list_rss2_pane

0xb2ac,	// (0x000a59f0) scroll_pane_cp22

0xca86,	// (0x000a71ca) rss2_navigation_pane_g1

0xca8f,	// (0x000a71d3) rss2_navigation_pane_g2

0xca97,	// (0x000a71db) rss2_navigation_pane_g3

0x0002,

0x03bc,	// (0x0009ab00) rss2_navigation_pane_g

0xca9f,	// (0x000a71e3) rss2_navigation_pane_t1

0x4b56,	// (0x0009f29a) rss2_list_single_pane_ParamLimits

0x4b56,	// (0x0009f29a) rss2_list_single_pane

0xcaad,	// (0x000a71f1) rss2_list_single_pane_t2

0xcabb,	// (0x000a71ff) rss2_list_single_pane_t3_ParamLimits

0xcabb,	// (0x000a71ff) rss2_list_single_pane_t3

0xcad8,	// (0x000a721c) rss2_list_single_pane_t4

0x2fdc,	// (0x0009d720) smil_status_pane_g1

0x4286,	// (0x0009e9ca) main_image2_pane_ParamLimits

0x4286,	// (0x0009e9ca) main_image2_pane

0x4722,	// (0x0009ee66) main_camera2_pane_g9_ParamLimits

0x4722,	// (0x0009ee66) main_camera2_pane_g9

0x4776,	// (0x0009eeba) main_camera2_pane_t5_ParamLimits

0x4776,	// (0x0009eeba) main_camera2_pane_t5

0x4788,	// (0x0009eecc) main_camera2_pane_t6_ParamLimits

0x4788,	// (0x0009eecc) main_camera2_pane_t6

0x4b87,	// (0x0009f2cb) main_image2_pane_g1_ParamLimits

0x4b87,	// (0x0009f2cb) main_image2_pane_g1

0x3dd4,	// (0x0009e518) smil2_video_pane_ParamLimits

0x3dd4,	// (0x0009e518) smil2_video_pane

0x0dea,	// (0x0009b52e) aid_zoom_text_primary_cp

0x1008,	// (0x0009b74c) popup_preview_fixed_window

0xab80,	// (0x000a52c4) im_reading_pane_g1

0x466c,	// (0x0009edb0) cams2_bc_adjust_pane_cp_ParamLimits

0x466c,	// (0x0009edb0) cams2_bc_adjust_pane_cp

0x47b8,	// (0x0009eefc) cams2_bc_adjust_pane_ParamLimits

0x47b8,	// (0x0009eefc) cams2_bc_adjust_pane

0xd993,	// (0x000a80d7) cams2_bc_adjust_pane_g1

0x4b93,	// (0x0009f2d7) cams2_slider_pane

0x4b9c,	// (0x0009f2e0) cams2_slider_pane_g1

0x4ba5,	// (0x0009f2e9) cams2_slider_pane_g2

0x0006,

0xf59c,	// (0x000a9ce0) cams2_slider_pane_g

0x12a1,	// (0x0009b9e5) calc_display_pane_ParamLimits

0x12bf,	// (0x0009ba03) calc_paper_pane_ParamLimits

0x12db,	// (0x0009ba1f) grid_calc_pane_ParamLimits

0x32b8,	// (0x0009d9fc) popup_clock_digital_window_t1_ParamLimits

0xb788,	// (0x000a5ecc) main_image_pane_t1

0x1287,	// (0x0009b9cb) aid_size_cell_calc_ParamLimits

0x1287,	// (0x0009b9cb) aid_size_cell_calc

0x42b7,	// (0x0009e9fb) popup_blid_sat_info2_window_ParamLimits

0x42b7,	// (0x0009e9fb) popup_blid_sat_info2_window

0xcaee,	// (0x000a7232) aid_size_cell_blid

0xcaf6,	// (0x000a723a) bg_popup_window_pane_cp07

0xcb19,	// (0x000a725d) grid_popup_blid_pane

0xcb23,	// (0x000a7267) heading_pane_cp05_ParamLimits

0xcb23,	// (0x000a7267) heading_pane_cp05

0xcbed,	// (0x000a7331) cell_popup_blid_pane_ParamLimits

0xcbed,	// (0x000a7331) cell_popup_blid_pane

0xcc11,	// (0x000a7355) cell_popup_blid_pane_g1

0xcc19,	// (0x000a735d) cell_popup_blid_pane_t1

0x49d5,	// (0x0009f119) mup2_indicator_pane_ParamLimits

0x49d5,	// (0x0009f119) mup2_indicator_pane

0xaa87,	// (0x000a51cb) mup2_visualizer_osc_pane

0xc9cf,	// (0x000a7113) mup2_visualizer_spec_pane_ParamLimits

0xc9cf,	// (0x000a7113) mup2_visualizer_spec_pane

0x4bbf,	// (0x0009f303) mup2_spec_half_pane

0x4bc8,	// (0x0009f30c) mup2_spec_half_pane_cp

0x4bd2,	// (0x0009f316) mup2_spec_bar_pane_ParamLimits

0x4bd2,	// (0x0009f316) mup2_spec_bar_pane

0xc964,	// (0x000a70a8) mup2_spec_bar_pane_g1

0xc96e,	// (0x000a70b2) mup2_spec_bar_pane_g2

0x0001,

0x0336,	// (0x0009aa7a) mup2_spec_bar_pane_g

0x4bf1,	// (0x0009f335) mup2_osc_middle_pane

0xc980,	// (0x000a70c4) mup2_visualizer_osc_pane_g1

0x9cef,	// (0x000a4433) popup_number_entry_window_t1_ParamLimits

0x9d02,	// (0x000a4446) popup_number_entry_window_t2_ParamLimits

0x9d14,	// (0x000a4458) popup_number_entry_window_t3_ParamLimits

0x10ce,	// (0x0009b812) popup_number_entry_window_t5_ParamLimits

0x10ce,	// (0x0009b812) popup_number_entry_window_t5

0xf0af,	// (0x000a97f3) popup_number_entry_window_t_ParamLimits

0x9d26,	// (0x000a446a) text_title_cp2_ParamLimits

0x3ad4,	// (0x0009e218) aid_hotspot_pointer_text2_pane

0x3b62,	// (0x0009e2a6) main_viewer_pane_g9_ParamLimits

0x3b62,	// (0x0009e2a6) main_viewer_pane_g9

0xadb9,	// (0x000a54fd) cale_month_pane_t1_ParamLimits

0xadf6,	// (0x000a553a) bg_cale_pane_ParamLimits

0xae0e,	// (0x000a5552) list_cale_pane_ParamLimits

0xae1f,	// (0x000a5563) listscroll_cale_day_pane_t1

0xae31,	// (0x000a5575) scroll_pane_cp09_ParamLimits

0x379f,	// (0x0009dee3) main_mup_eq_pane_t1_ParamLimits

0x379f,	// (0x0009dee3) main_mup_eq_pane_t1

0x37b9,	// (0x0009defd) main_mup_eq_pane_t2_ParamLimits

0x37b9,	// (0x0009defd) main_mup_eq_pane_t2

0x37d3,	// (0x0009df17) main_mup_eq_pane_t3_ParamLimits

0x37d3,	// (0x0009df17) main_mup_eq_pane_t3

0x37eb,	// (0x0009df2f) main_mup_eq_pane_t4_ParamLimits

0x37eb,	// (0x0009df2f) main_mup_eq_pane_t4

0x3803,	// (0x0009df47) main_mup_eq_pane_t5_ParamLimits

0x3803,	// (0x0009df47) main_mup_eq_pane_t5

0x381b,	// (0x0009df5f) main_mup_eq_pane_t6_ParamLimits

0x381b,	// (0x0009df5f) main_mup_eq_pane_t6

0x382f,	// (0x0009df73) main_mup_eq_pane_t7_ParamLimits

0x382f,	// (0x0009df73) main_mup_eq_pane_t7

0x3843,	// (0x0009df87) main_mup_eq_pane_t8_ParamLimits

0x3843,	// (0x0009df87) main_mup_eq_pane_t8

0x3859,	// (0x0009df9d) main_mup_eq_pane_t9_ParamLimits

0x3859,	// (0x0009df9d) main_mup_eq_pane_t9

0x3871,	// (0x0009dfb5) main_mup_eq_pane_t10_ParamLimits

0x3871,	// (0x0009dfb5) main_mup_eq_pane_t10

0x0009,

0xf420,	// (0x000a9b64) main_mup_eq_pane_t_ParamLimits

0xf420,	// (0x000a9b64) main_mup_eq_pane_t

0x392e,	// (0x0009e072) mup_equalizer_pane_cp5_ParamLimits

0x3944,	// (0x0009e088) mup_equalizer_pane_cp6_ParamLimits

0x395c,	// (0x0009e0a0) mup_equalizer_pane_cp7_ParamLimits

0x106d,	// (0x0009b7b1) main_gallery_pane

0xc989,	// (0x000a70cd) smil2_volume_pane

0xc991,	// (0x000a70d5) smil_status_volume_pane_g1_ParamLimits

0xc9a4,	// (0x000a70e8) smil_status_volume_pane_g2_ParamLimits

0x44df,	// (0x0009ec23) smil_status_volume_pane_g3_ParamLimits

0xf51b,	// (0x000a9c5f) smil_status_volume_pane_g_ParamLimits

0xcaf6,	// (0x000a723a) bg_popup_window_pane_cp07_ParamLimits

0xcb04,	// (0x000a7248) blid_firmament_pane

0x4bfa,	// (0x0009f33e) aid_size_cell_gallery_ParamLimits

0x4bfa,	// (0x0009f33e) aid_size_cell_gallery

0x4c08,	// (0x0009f34c) grid_gallery_pane_ParamLimits

0x4c08,	// (0x0009f34c) grid_gallery_pane

0x4c18,	// (0x0009f35c) cell_gallery_pane_ParamLimits

0x4c18,	// (0x0009f35c) cell_gallery_pane

0xcc27,	// (0x000a736b) bg_cell_gallery_focus_pane_ParamLimits

0xcc27,	// (0x000a736b) bg_cell_gallery_focus_pane

0xcc39,	// (0x000a737d) cell_gallery_pane_g1_ParamLimits

0xcc39,	// (0x000a737d) cell_gallery_pane_g1

0x4c66,	// (0x0009f3aa) cell_gallery_pane_g2_ParamLimits

0x4c66,	// (0x0009f3aa) cell_gallery_pane_g2

0x4c73,	// (0x0009f3b7) cell_gallery_pane_g3_ParamLimits

0x4c73,	// (0x0009f3b7) cell_gallery_pane_g3

0xcc45,	// (0x000a7389) cell_gallery_pane_g4_ParamLimits

0xcc45,	// (0x000a7389) cell_gallery_pane_g4

0x0003,

0xf5ab,	// (0x000a9cef) cell_gallery_pane_g_ParamLimits

0xf5ab,	// (0x000a9cef) cell_gallery_pane_g

0xcc51,	// (0x000a7395) bg_cell_gallery_focus_pane_g1

0xcc59,	// (0x000a739d) bg_cell_gallery_focus_pane_g2

0xcc61,	// (0x000a73a5) bg_cell_gallery_focus_pane_g3

0xcc69,	// (0x000a73ad) bg_cell_gallery_focus_pane_g4

0xcc71,	// (0x000a73b5) bg_cell_gallery_focus_pane_g5

0xcc79,	// (0x000a73bd) bg_cell_gallery_focus_pane_g6

0xcc81,	// (0x000a73c5) bg_cell_gallery_focus_pane_g7

0xcc89,	// (0x000a73cd) bg_cell_gallery_focus_pane_g8

0x0007,

0x03f2,	// (0x0009ab36) bg_cell_gallery_focus_pane_g

0xcc91,	// (0x000a73d5) aid_firma_cardinal

0xcca5,	// (0x000a73e9) blid_firmament_pane_t1

0xccbc,	// (0x000a7400) blid_firmament_pane_t2

0xccd3,	// (0x000a7417) blid_firmament_pane_t3

0xccea,	// (0x000a742e) blid_firmament_pane_t4

0x0003,

0x0403,	// (0x0009ab47) blid_firmament_pane_t

0xcd01,	// (0x000a7445) blid_sat_info_pane

0xcd11,	// (0x000a7455) blid_sat_info_pane_g1

0xcd11,	// (0x000a7455) blid_sat_info_pane_g2

0x0001,

0x040c,	// (0x0009ab50) blid_sat_info_pane_g

0xcd1b,	// (0x000a745f) blid_sat_info_pane_t1

0xcd29,	// (0x000a746d) smil2_volume_content_pane

0xcd32,	// (0x000a7476) smil2_volume_pane_g1

0xaa5c,	// (0x000a51a0) smil2_volume_content_pane_g1

0xcd3a,	// (0x000a747e) smil2_volume_content_pane_g2

0xcd43,	// (0x000a7487) smil2_volume_content_pane_g3

0xcd4c,	// (0x000a7490) smil2_volume_content_pane_g4

0xcd55,	// (0x000a7499) smil2_volume_content_pane_g5

0xcd5e,	// (0x000a74a2) smil2_volume_content_pane_g6

0xcd67,	// (0x000a74ab) smil2_volume_content_pane_g7

0xcd70,	// (0x000a74b4) smil2_volume_content_pane_g8

0xcd79,	// (0x000a74bd) smil2_volume_content_pane_g9

0xcd82,	// (0x000a74c6) smil2_volume_content_pane_g10

0x0009,

0xf5b4,	// (0x000a9cf8) smil2_volume_content_pane_g

0x18c6,	// (0x0009c00a) cale_week_day_heading_pane_t1_ParamLimits

0x18e1,	// (0x0009c025) cale_week_day_heading_pane_t2_ParamLimits

0x18fc,	// (0x0009c040) cale_week_day_heading_pane_t3_ParamLimits

0x1917,	// (0x0009c05b) cale_week_day_heading_pane_t4_ParamLimits

0x1932,	// (0x0009c076) cale_week_day_heading_pane_t5_ParamLimits

0x194d,	// (0x0009c091) cale_week_day_heading_pane_t6_ParamLimits

0x1968,	// (0x0009c0ac) cale_week_day_heading_pane_t7_ParamLimits

0xf1b6,	// (0x000a98fa) cale_week_day_heading_pane_t_ParamLimits

0xaa23,	// (0x000a5167) bg_cale_side_pane_ParamLimits

0x1983,	// (0x0009c0c7) cale_week_time_pane_t1_ParamLimits

0x199d,	// (0x0009c0e1) cale_week_time_pane_t2_ParamLimits

0x19b7,	// (0x0009c0fb) cale_week_time_pane_t3_ParamLimits

0x19d1,	// (0x0009c115) cale_week_time_pane_t4_ParamLimits

0x19eb,	// (0x0009c12f) cale_week_time_pane_t5_ParamLimits

0x1a05,	// (0x0009c149) cale_week_time_pane_t6_ParamLimits

0x1a23,	// (0x0009c167) cale_week_time_pane_t7_ParamLimits

0x1a45,	// (0x0009c189) cale_week_time_pane_t8_ParamLimits

0xf1c5,	// (0x000a9909) cale_week_time_pane_t_ParamLimits

0x1a69,	// (0x0009c1ad) cell_cale_week_pane_g2_ParamLimits

0xaa23,	// (0x000a5167) bg_cale_side_pane_cp01_ParamLimits

0x2da7,	// (0x0009d4eb) cale_month_week_pane_t1_ParamLimits

0x2dc0,	// (0x0009d504) cale_month_week_pane_t2_ParamLimits

0x2dd9,	// (0x0009d51d) cale_month_week_pane_t3_ParamLimits

0x2df2,	// (0x0009d536) cale_month_week_pane_t4_ParamLimits

0x2e0b,	// (0x0009d54f) cale_month_week_pane_t5_ParamLimits

0x2e2c,	// (0x0009d570) cale_month_week_pane_t6_ParamLimits

0xf29a,	// (0x000a99de) cale_month_week_pane_t_ParamLimits

0x2f99,	// (0x0009d6dd) cell_cale_month_pane_g1_ParamLimits

0x106d,	// (0x0009b7b1) main_cale_event_viewer_pane

0x9cc5,	// (0x000a4409) listscroll_cale_event_viewer_pane

0xcd8b,	// (0x000a74cf) list_cale_ev_pane

0xcd93,	// (0x000a74d7) scroll_pane_cp023

0xcd9f,	// (0x000a74e3) field_cale_ev_pane_ParamLimits

0xcd9f,	// (0x000a74e3) field_cale_ev_pane

0xcdbd,	// (0x000a7501) field_cale_ev_content_pane_ParamLimits

0xcdbd,	// (0x000a7501) field_cale_ev_content_pane

0xcdc9,	// (0x000a750d) field_cale_ev_pane_g1_ParamLimits

0xcdc9,	// (0x000a750d) field_cale_ev_pane_g1

0xcdd5,	// (0x000a7519) field_cale_ev_pane_g2_ParamLimits

0xcdd5,	// (0x000a7519) field_cale_ev_pane_g2

0xcded,	// (0x000a7531) field_cale_ev_pane_g3_ParamLimits

0xcded,	// (0x000a7531) field_cale_ev_pane_g3

0x0002,

0x0426,	// (0x0009ab6a) field_cale_ev_pane_g_ParamLimits

0x0426,	// (0x0009ab6a) field_cale_ev_pane_g

0xce05,	// (0x000a7549) field_cale_ev_pane_t1_ParamLimits

0xce05,	// (0x000a7549) field_cale_ev_pane_t1

0xce1c,	// (0x000a7560) field_cale_ev_content_pane_t1_ParamLimits

0xce1c,	// (0x000a7560) field_cale_ev_content_pane_t1

0xb66e,	// (0x000a5db2) bg_button_pane_cp01

0x1657,	// (0x0009bd9b) listscroll_cale_week_pane_ParamLimits

0xa9ce,	// (0x000a5112) popup_toolbar_window_cp01

0xa9f4,	// (0x000a5138) listscroll_cale_week_pane_t1_ParamLimits

0x1657,	// (0x0009bd9b) listscroll_cale_day_pane_ParamLimits

0xa9ce,	// (0x000a5112) popup_toolbar_window_cp02

0xae1f,	// (0x000a5563) listscroll_cale_day_pane_t1_ParamLimits

0x1657,	// (0x0009bd9b) main_cale_month_pane_ParamLimits

0x43be,	// (0x0009eb02) popup_toolbar_window_cp03_ParamLimits

0x43be,	// (0x0009eb02) popup_toolbar_window_cp03

0x3cea,	// (0x0009e42e) main_image_pane_g2_ParamLimits

0x3cea,	// (0x0009e42e) main_image_pane_g2

0x3cf6,	// (0x0009e43a) main_image_pane_g3_ParamLimits

0x3cf6,	// (0x0009e43a) main_image_pane_g3

0x0002,

0xf4a8,	// (0x000a9bec) main_image_pane_g_ParamLimits

0xf4a8,	// (0x000a9bec) main_image_pane_g

0xb788,	// (0x000a5ecc) main_image_pane_t1_ParamLimits

0x3d02,	// (0x0009e446) main_image_pane_t2_ParamLimits

0x3d02,	// (0x0009e446) main_image_pane_t2

0x3d14,	// (0x0009e458) main_image_pane_t3_ParamLimits

0x3d14,	// (0x0009e458) main_image_pane_t3

0x3d26,	// (0x0009e46a) main_image_pane_t4_ParamLimits

0x3d26,	// (0x0009e46a) main_image_pane_t4

0x0003,

0xf4af,	// (0x000a9bf3) main_image_pane_t_ParamLimits

0xf4af,	// (0x000a9bf3) main_image_pane_t

0x3d38,	// (0x0009e47c) popup_image_details_window_cp01

0x3d42,	// (0x0009e486) popup_toobar_trans_pane_cp01_ParamLimits

0x3d42,	// (0x0009e486) popup_toobar_trans_pane_cp01

0x430e,	// (0x0009ea52) popup_image_details_window_ParamLimits

0x430e,	// (0x0009ea52) popup_image_details_window

0x431c,	// (0x0009ea60) popup_image_focus_window

0x465e,	// (0x0009eda2) camera2_autofocus_pane_ParamLimits

0x465e,	// (0x0009eda2) camera2_autofocus_pane

0x9cc5,	// (0x000a4409) bg_popup_sub_pane_cp06

0xce3a,	// (0x000a757e) popup_image_focus_window_g1

0xce42,	// (0x000a7586) popup_image_focus_window_g2

0xce4a,	// (0x000a758e) popup_image_focus_window_g3

0xce52,	// (0x000a7596) popup_image_focus_window_g4

0x0003,

0x042d,	// (0x0009ab71) popup_image_focus_window_g

0xce5a,	// (0x000a759e) popup_image_focus_window_t1

0xce68,	// (0x000a75ac) popup_image_focus_window_t2

0xce78,	// (0x000a75bc) popup_image_focus_window_t3

0x0002,

0x0436,	// (0x0009ab7a) popup_image_focus_window_t

0xce86,	// (0x000a75ca) camera2_autofocus_pane_g1

0xa478,	// (0x000a4bbc) bg_tb_trans_pane_cp01

0xce94,	// (0x000a75d8) popup_image_details_window_g1

0xcea7,	// (0x000a75eb) popup_image_details_window_g2

0x0002,

0x0448,	// (0x0009ab8c) popup_image_details_window_g

0xced0,	// (0x000a7614) popup_image_details_window_t1

0xcee2,	// (0x000a7626) popup_image_details_window_t2

0xcefb,	// (0x000a763f) popup_image_details_window_t3

0xcf0f,	// (0x000a7653) popup_image_details_window_t4

0xcf2a,	// (0x000a766e) popup_image_details_window_t5

0x0004,

0x044f,	// (0x0009ab93) popup_image_details_window_t

0xa8a5,	// (0x000a4fe9) bg_calc_paper_pane_ParamLimits

0x106d,	// (0x0009b7b1) grid_highlight_pane_cp013

0x13d8,	// (0x0009bb1c) list_calc_pane_ParamLimits

0x13ea,	// (0x0009bb2e) scroll_pane_cp024

0xa8b9,	// (0x000a4ffd) bg_calc_display_pane_ParamLimits

0x13f2,	// (0x0009bb36) calc_display_pane_t1_ParamLimits

0x1407,	// (0x0009bb4b) calc_display_pane_t2_ParamLimits

0x141c,	// (0x0009bb60) calc_display_pane_t3_ParamLimits

0xf136,	// (0x000a987a) calc_display_pane_t_ParamLimits

0x14f5,	// (0x0009bc39) cell_calc_pane_g2

0x0001,

0xf153,	// (0x000a9897) cell_calc_pane_g

0x14fe,	// (0x0009bc42) cell_calc_pane_t1

0xa918,	// (0x000a505c) grid_highlight_pane_cp02_ParamLimits

0xa92e,	// (0x000a5072) toolbar_button_pane_cp01_ParamLimits

0xa92e,	// (0x000a5072) toolbar_button_pane_cp01

0xb7cd,	// (0x000a5f11) temp_image_control_pane_ParamLimits

0xb7cd,	// (0x000a5f11) temp_image_control_pane

0x4286,	// (0x0009e9ca) main_mp3_pane

0xcf44,	// (0x000a7688) temp_image_control_pane_g1_ParamLimits

0xcf44,	// (0x000a7688) temp_image_control_pane_g1

0xcf52,	// (0x000a7696) temp_image_control_pane_g2_ParamLimits

0xcf52,	// (0x000a7696) temp_image_control_pane_g2

0xcf64,	// (0x000a76a8) temp_image_control_pane_g3_ParamLimits

0xcf64,	// (0x000a76a8) temp_image_control_pane_g3

0x4cb0,	// (0x0009f3f4) temp_image_control_pane_g4_ParamLimits

0x4cb0,	// (0x0009f3f4) temp_image_control_pane_g4

0x0003,

0xf5d4,	// (0x000a9d18) temp_image_control_pane_g_ParamLimits

0xf5d4,	// (0x000a9d18) temp_image_control_pane_g

0xcf44,	// (0x000a7688) main_mp3_pane_g1

0x4cc1,	// (0x0009f405) main_mp3_pane_g2

0x0007,

0xf5dd,	// (0x000a9d21) main_mp3_pane_g

0xcfa7,	// (0x000a76eb) main_mp3_pane_t1

0xaa8f,	// (0x000a51d3) main_camera_pane_g8_ParamLimits

0xaa8f,	// (0x000a51d3) main_camera_pane_g8

0x1cf6,	// (0x0009c43a) main_video_pane_g7_ParamLimits

0x1cf6,	// (0x0009c43a) main_video_pane_g7

0x47a6,	// (0x0009eeea) main_camera2_pane_t7_ParamLimits

0x47a6,	// (0x0009eeea) main_camera2_pane_t7

0xabd7,	// (0x000a531b) scroll_pane_cp025_ParamLimits

0xabd7,	// (0x000a531b) scroll_pane_cp025

0xabeb,	// (0x000a532f) scroll_pane_cp026_ParamLimits

0xabeb,	// (0x000a532f) scroll_pane_cp026

0xabfa,	// (0x000a533e) wml_content_pane_ParamLimits

0x106d,	// (0x0009b7b1) main_touch_calib_pane

0x4d65,	// (0x0009f4a9) main_touch_calib_pane_g1

0x4d71,	// (0x0009f4b5) main_touch_calib_pane_g2

0x4d7d,	// (0x0009f4c1) main_touch_calib_pane_g3

0x4d89,	// (0x0009f4cd) main_touch_calib_pane_g4

0x0003,

0xf5fb,	// (0x000a9d3f) main_touch_calib_pane_g

0x4d95,	// (0x0009f4d9) main_touch_calib_pane_t1

0x4dae,	// (0x0009f4f2) main_touch_calib_pane_t2

0x0004,

0xf604,	// (0x000a9d48) main_touch_calib_pane_t

0xb39a,	// (0x000a5ade) mup_progress_pane_cp02

0xb3cf,	// (0x000a5b13) navi_pane_g1

0xb48a,	// (0x000a5bce) navi_pane_mp_t3

0x4286,	// (0x0009e9ca) main_mp3_pane_ParamLimits

0x43fb,	// (0x0009eb3f) navi_pane_ParamLimits

0xcf44,	// (0x000a7688) main_mp3_pane_g1_ParamLimits

0x4cc1,	// (0x0009f405) main_mp3_pane_g2_ParamLimits

0x4ccd,	// (0x0009f411) main_mp3_pane_g3_ParamLimits

0x4ccd,	// (0x0009f411) main_mp3_pane_g3

0x4cd9,	// (0x0009f41d) main_mp3_pane_g4_ParamLimits

0x4cd9,	// (0x0009f41d) main_mp3_pane_g4

0xcf74,	// (0x000a76b8) main_mp3_pane_g5_ParamLimits

0xcf74,	// (0x000a76b8) main_mp3_pane_g5

0xcf82,	// (0x000a76c6) main_mp3_pane_g6_ParamLimits

0xcf82,	// (0x000a76c6) main_mp3_pane_g6

0xcf8f,	// (0x000a76d3) main_mp3_pane_g7_ParamLimits

0xcf8f,	// (0x000a76d3) main_mp3_pane_g7

0xcf9b,	// (0x000a76df) main_mp3_pane_g8_ParamLimits

0xcf9b,	// (0x000a76df) main_mp3_pane_g8

0xf5dd,	// (0x000a9d21) main_mp3_pane_g_ParamLimits

0x4ce5,	// (0x0009f429) main_mp3_pane_t2

0x4cf5,	// (0x0009f439) main_mp3_pane_t3

0xcfb5,	// (0x000a76f9) main_mp3_pane_t4

0xcfc3,	// (0x000a7707) main_mp3_pane_t5

0x0005,

0xf5ee,	// (0x000a9d32) main_mp3_pane_t

0xcfd1,	// (0x000a7715) mup_progress_pane_cp01

0x0dea,	// (0x0009b52e) aid_zoom_text_secondary2

0xcd8b,	// (0x000a74cf) list_cale_ev2_pane

0xcd93,	// (0x000a74d7) scroll_pane_cp023_ParamLimits

0x4e09,	// (0x0009f54d) field_cale_ev2_pane_ParamLimits

0x4e09,	// (0x0009f54d) field_cale_ev2_pane

0x4e32,	// (0x0009f576) field_cale_ev2_pane_g1_ParamLimits

0x4e32,	// (0x0009f576) field_cale_ev2_pane_g1

0x4e3e,	// (0x0009f582) field_cale_ev2_pane_g2_ParamLimits

0x4e3e,	// (0x0009f582) field_cale_ev2_pane_g2

0x4e56,	// (0x0009f59a) field_cale_ev2_pane_g3_ParamLimits

0x4e56,	// (0x0009f59a) field_cale_ev2_pane_g3

0x0003,

0xf60f,	// (0x000a9d53) field_cale_ev2_pane_g_ParamLimits

0xf60f,	// (0x000a9d53) field_cale_ev2_pane_g

0xa0b3,	// (0x000a47f7) field_cale_ev2_pane_t1_ParamLimits

0xa0b3,	// (0x000a47f7) field_cale_ev2_pane_t1

0xa0ca,	// (0x000a480e) field_cale_ev2_pane_t2_ParamLimits

0xa0ca,	// (0x000a480e) field_cale_ev2_pane_t2

0x0001,

0xf618,	// (0x000a9d5c) field_cale_ev2_pane_t_ParamLimits

0xf618,	// (0x000a9d5c) field_cale_ev2_pane_t

0x3bca,	// (0x0009e30e) main_postcard_pane_g5_ParamLimits

0x3bca,	// (0x0009e30e) main_postcard_pane_g5

0x3bd8,	// (0x0009e31c) main_postcard_pane_g6_ParamLimits

0x3bd8,	// (0x0009e31c) main_postcard_pane_g6

0x1b40,	// (0x0009c284) camera2_autofocus_pane_cp_ParamLimits

0x1b40,	// (0x0009c284) camera2_autofocus_pane_cp

0x4286,	// (0x0009e9ca) main_mup3_pane

0x4e8d,	// (0x0009f5d1) main_mup3_pane_g1_ParamLimits

0x4e8d,	// (0x0009f5d1) main_mup3_pane_g1

0x4eae,	// (0x0009f5f2) main_mup3_pane_g2_ParamLimits

0x4eae,	// (0x0009f5f2) main_mup3_pane_g2

0x4f26,	// (0x0009f66a) main_mup3_pane_g3_ParamLimits

0x4f26,	// (0x0009f66a) main_mup3_pane_g3

0x4f69,	// (0x0009f6ad) main_mup3_pane_g4_ParamLimits

0x4f69,	// (0x0009f6ad) main_mup3_pane_g4

0x4fac,	// (0x0009f6f0) main_mup3_pane_g5_ParamLimits

0x4fac,	// (0x0009f6f0) main_mup3_pane_g5

0x4fef,	// (0x0009f733) main_mup3_pane_g6_ParamLimits

0x4fef,	// (0x0009f733) main_mup3_pane_g6

0xcff9,	// (0x000a773d) main_mup3_pane_g7_ParamLimits

0xcff9,	// (0x000a773d) main_mup3_pane_g7

0x0007,

0xf61d,	// (0x000a9d61) main_mup3_pane_g_ParamLimits

0xf61d,	// (0x000a9d61) main_mup3_pane_g

0x5065,	// (0x0009f7a9) main_mup3_pane_t1_ParamLimits

0x5065,	// (0x0009f7a9) main_mup3_pane_t1

0x50d4,	// (0x0009f818) main_mup3_pane_t2_ParamLimits

0x50d4,	// (0x0009f818) main_mup3_pane_t2

0x519d,	// (0x0009f8e1) main_mup3_pane_t4_ParamLimits

0x519d,	// (0x0009f8e1) main_mup3_pane_t4

0x51eb,	// (0x0009f92f) main_mup3_pane_t5_ParamLimits

0x51eb,	// (0x0009f92f) main_mup3_pane_t5

0x529b,	// (0x0009f9df) main_mup3_pane_t6_ParamLimits

0x529b,	// (0x0009f9df) main_mup3_pane_t6

0x0005,

0xf62e,	// (0x000a9d72) main_mup3_pane_t_ParamLimits

0xf62e,	// (0x000a9d72) main_mup3_pane_t

0x5347,	// (0x0009fa8b) mup3_progress_pane_ParamLimits

0x5347,	// (0x0009fa8b) mup3_progress_pane

0x53c5,	// (0x0009fb09) popup_mup3_control_window_ParamLimits

0x53c5,	// (0x0009fb09) popup_mup3_control_window

0xd007,	// (0x000a774b) popup_mup3_text_window

0x53de,	// (0x0009fb22) mup3_progress_pane_t1

0x53fd,	// (0x0009fb41) mup3_progress_pane_t2

0xd00f,	// (0x000a7753) mup3_progress_pane_t3

0x0002,

0xf63b,	// (0x000a9d7f) mup3_progress_pane_t

0xd02c,	// (0x000a7770) mup_progress_pane_cp03

0x9cc5,	// (0x000a4409) bg_tb_trans_pane_cp04

0x541c,	// (0x0009fb60) mup3_volume_pane

0x5424,	// (0x0009fb68) popup_mup3_control_window_g1

0x542d,	// (0x0009fb71) mup3_volume_pane_g1

0x5436,	// (0x0009fb7a) mup3_volume_pane_g2

0x543f,	// (0x0009fb83) mup3_volume_pane_g3

0x0002,

0xf642,	// (0x000a9d86) mup3_volume_pane_g

0x9cc5,	// (0x000a4409) bg_tb_trans_pane_cp03

0xd03c,	// (0x000a7780) popup_mup3_text_window_g1

0xd044,	// (0x000a7788) popup_mup3_text_window_t1

0xa901,	// (0x000a5045) list_calc_item_pane_g1_ParamLimits

0xca64,	// (0x000a71a8) mup_volume_pane_cp_g1

0x4dc7,	// (0x0009f50b) main_touch_calib_pane_t3

0x4ddd,	// (0x0009f521) main_touch_calib_pane_t4

0x4df3,	// (0x0009f537) main_touch_calib_pane_t5

0x0da2,	// (0x0009b4e6) aid_cell_size_toolbar2

0x0daa,	// (0x0009b4ee) aid_popup3_width_pane

0x0cb2,	// (0x0009b3f6) aid_zoom_text_msg_primary

0x1b15,	// (0x0009c259) vorec_t7

0xa8c5,	// (0x000a5009) bg_calc_paper_pane_g1_ParamLimits

0xa8d1,	// (0x000a5015) bg_calc_paper_pane_g2_ParamLimits

0xa8dd,	// (0x000a5021) bg_calc_paper_pane_g3_ParamLimits

0xa8e9,	// (0x000a502d) bg_calc_paper_pane_g4_ParamLimits

0xa8f5,	// (0x000a5039) bg_calc_paper_pane_g5_ParamLimits

0x145b,	// (0x0009bb9f) bg_calc_paper_pane_g6_ParamLimits

0x146c,	// (0x0009bbb0) bg_calc_paper_pane_g7_ParamLimits

0x147d,	// (0x0009bbc1) bg_calc_paper_pane_g8_ParamLimits

0xf13d,	// (0x000a9881) bg_calc_paper_pane_g_ParamLimits

0x148e,	// (0x0009bbd2) calc_bg_paper_pane_g9_ParamLimits

0x1c27,	// (0x0009c36b) image_qvga_pane_ParamLimits

0x1c27,	// (0x0009c36b) image_qvga_pane

0xa7f4,	// (0x000a4f38) bg_popup_sub_pane_cp04_ParamLimits

0xb704,	// (0x000a5e48) popup_mup_playback_window_g1_ParamLimits

0xb710,	// (0x000a5e54) popup_mup_playback_window_t1_ParamLimits

0xb725,	// (0x000a5e69) popup_mup_playback_window_t2_ParamLimits

0x0212,	// (0x0009a956) popup_mup_playback_window_t_ParamLimits

0x48d5,	// (0x0009f019) main_mup2_pane_g3_ParamLimits

0x48d5,	// (0x0009f019) main_mup2_pane_g3

0x1fd6,	// (0x0009c71a) popup_toolbar_window_cp04

0xbb07,	// (0x000a624b) popup_call2_audio_second_window_g3_ParamLimits

0xbb07,	// (0x000a624b) popup_call2_audio_second_window_g3

0xbf11,	// (0x000a6655) popup_call2_audio_first_window_g4_ParamLimits

0xbf11,	// (0x000a6655) popup_call2_audio_first_window_g4

0xc59c,	// (0x000a6ce0) popup_call2_audio_in_window_g4_ParamLimits

0xc59c,	// (0x000a6ce0) popup_call2_audio_in_window_g4

0x3cdd,	// (0x0009e421) aid_area_sk_bg_cut_ParamLimits

0x3cdd,	// (0x0009e421) aid_area_sk_bg_cut

0xb73a,	// (0x000a5e7e) aid_area_sk_bg_cut_2_ParamLimits

0xb73a,	// (0x000a5e7e) aid_area_sk_bg_cut_2

0x4c56,	// (0x0009f39a) aid_placing_details_win

0x4c5e,	// (0x0009f3a2) aid_placing_details_win_2

0xce86,	// (0x000a75ca) camera2_autofocus_pane_g1_ParamLimits

0x0ff9,	// (0x0009b73d) popup_fixed_preview_cale_window_ParamLimits

0x0ff9,	// (0x0009b73d) popup_fixed_preview_cale_window

0xb516,	// (0x000a5c5a) navi_slider_pane_g3

0xb51f,	// (0x000a5c63) navi_slider_pane_g4

0xb528,	// (0x000a5c6c) navi_slider_pane_g5

0xb516,	// (0x000a5c5a) navi_slider_pane_g6

0x3533,	// (0x0009dc77) navi_slider_pane_g7

0xb63b,	// (0x000a5d7f) mup_scale_pane_g3

0xb644,	// (0x000a5d88) mup_scale_pane_g4

0xb64d,	// (0x000a5d91) mup_scale_pane_g5

0x3974,	// (0x0009e0b8) mup_scale_pane_g6

0x397d,	// (0x0009e0c1) mup_scale_pane_g7

0xb516,	// (0x000a5c5a) cams2_slider_pane_g3

0xcae6,	// (0x000a722a) cams2_slider_pane_g4

0x4bae,	// (0x0009f2f2) cams2_slider_pane_g5

0xb516,	// (0x000a5c5a) cams2_slider_pane_g6

0x4bb6,	// (0x0009f2fa) cams2_slider_pane_g7

0xcd11,	// (0x000a7455) camera2_autofocus_pane_cp_g1

0xc8fd,	// (0x000a7041) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8fd,	// (0x000a7041) bg_popup_preview_window_pane_cp02

0xd052,	// (0x000a7796) list_fp_cale_pane_ParamLimits

0xd052,	// (0x000a7796) list_fp_cale_pane

0xd05e,	// (0x000a77a2) popup_fixed_preview_cale_window_t1_ParamLimits

0xd05e,	// (0x000a77a2) popup_fixed_preview_cale_window_t1

0x5448,	// (0x0009fb8c) popup_fixed_preview_cale_window_t2_ParamLimits

0x5448,	// (0x0009fb8c) popup_fixed_preview_cale_window_t2

0x545d,	// (0x0009fba1) popup_fixed_preview_cale_window_t3_ParamLimits

0x545d,	// (0x0009fba1) popup_fixed_preview_cale_window_t3

0x0002,

0xf649,	// (0x000a9d8d) popup_fixed_preview_cale_window_t_ParamLimits

0xf649,	// (0x000a9d8d) popup_fixed_preview_cale_window_t

0x5472,	// (0x0009fbb6) list_single_fp_cale_pane_ParamLimits

0x5472,	// (0x0009fbb6) list_single_fp_cale_pane

0xd07c,	// (0x000a77c0) list_single_fp_cale_pane_g1_ParamLimits

0xd07c,	// (0x000a77c0) list_single_fp_cale_pane_g1

0xd088,	// (0x000a77cc) list_single_fp_cale_pane_g2_ParamLimits

0xd088,	// (0x000a77cc) list_single_fp_cale_pane_g2

0x0002,

0x04e1,	// (0x0009ac25) list_single_fp_cale_pane_g_ParamLimits

0x04e1,	// (0x0009ac25) list_single_fp_cale_pane_g

0xd0a1,	// (0x000a77e5) list_single_fp_cale_pane_t1_ParamLimits

0xd0a1,	// (0x000a77e5) list_single_fp_cale_pane_t1

0xd0b3,	// (0x000a77f7) list_single_fp_cale_pane_t2_ParamLimits

0xd0b3,	// (0x000a77f7) list_single_fp_cale_pane_t2

0x0001,

0x04e8,	// (0x0009ac2c) list_single_fp_cale_pane_t_ParamLimits

0x04e8,	// (0x0009ac2c) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x106d,	// (0x0009b7b1) main_dialer_pane

0x5485,	// (0x0009fbc9) aid_cell_size_keypad

0x548f,	// (0x0009fbd3) dialer_ne_pane

0x5499,	// (0x0009fbdd) grid_dialer_command_1_pane

0x54a1,	// (0x0009fbe5) grid_dialer_command_2_pane

0x54a9,	// (0x0009fbed) grid_dialer_keypad_pane

0x54bb,	// (0x0009fbff) bg_popup_call_pane_cp06_ParamLimits

0x54bb,	// (0x0009fbff) bg_popup_call_pane_cp06

0x54c7,	// (0x0009fc0b) dialer_ne_clear_pane_ParamLimits

0x54c7,	// (0x0009fc0b) dialer_ne_clear_pane

0xd0e6,	// (0x000a782a) dialer_ne_pane_g1

0xd0ee,	// (0x000a7832) dialer_ne_pane_t1_ParamLimits

0xd0ee,	// (0x000a7832) dialer_ne_pane_t1

0x54d3,	// (0x0009fc17) dialer_ne_pane_t2_ParamLimits

0x54d3,	// (0x0009fc17) dialer_ne_pane_t2

0x54f0,	// (0x0009fc34) dialer_ne_pane_t3_ParamLimits

0x54f0,	// (0x0009fc34) dialer_ne_pane_t3

0x0002,

0xf650,	// (0x000a9d94) dialer_ne_pane_t_ParamLimits

0xf650,	// (0x000a9d94) dialer_ne_pane_t

0x5514,	// (0x0009fc58) dialer_ne_pane_t3_copy1_ParamLimits

0x5514,	// (0x0009fc58) dialer_ne_pane_t3_copy1

0x5538,	// (0x0009fc7c) cell_dialer_keypad_pane_ParamLimits

0x5538,	// (0x0009fc7c) cell_dialer_keypad_pane

0x554f,	// (0x0009fc93) cell_dialer_command_1_pane_ParamLimits

0x554f,	// (0x0009fc93) cell_dialer_command_1_pane

0x5565,	// (0x0009fca9) cell_dialer_command_2_pane_ParamLimits

0x5565,	// (0x0009fca9) cell_dialer_command_2_pane

0xd100,	// (0x000a7844) bg_button_pane_cp02_ParamLimits

0xd100,	// (0x000a7844) bg_button_pane_cp02

0x5574,	// (0x0009fcb8) cell_dialer_keypad_pane_g1_ParamLimits

0x5574,	// (0x0009fcb8) cell_dialer_keypad_pane_g1

0xd100,	// (0x000a7844) bg_button_pane_cp03_ParamLimits

0xd100,	// (0x000a7844) bg_button_pane_cp03

0x5589,	// (0x0009fccd) cell_dialer_command_1_pane_g1_ParamLimits

0x5589,	// (0x0009fccd) cell_dialer_command_1_pane_g1

0xd10c,	// (0x000a7850) bg_button_pane_cp04

0x559d,	// (0x0009fce1) cell_dialer_command_2_pane_g1

0xaa87,	// (0x000a51cb) bg_button_pane_cp06

0xd114,	// (0x000a7858) dialer_ne_clear_pane_g1

0xb3db,	// (0x000a5b1f) navi_pane_g2

0xb409,	// (0x000a5b4d) navi_pane_g3

0x0002,

0x0115,	// (0x0009a859) navi_pane_g

0xb498,	// (0x000a5bdc) navi_pane_mv_g2

0xb4bf,	// (0x000a5c03) navi_pane_mv_g5

0x34fe,	// (0x0009dc42) navi_pane_mv_t1

0xa8b9,	// (0x000a4ffd) main_clock2_pane

0xee45,	// (0x000a9589) main_clock2_list_pane_ParamLimits

0xee45,	// (0x000a9589) main_clock2_list_pane

0x55f9,	// (0x0009fd3d) main_clock2_pane_t1_ParamLimits

0x55f9,	// (0x0009fd3d) main_clock2_pane_t1

0x5627,	// (0x0009fd6b) main_clock2_pane_t2_ParamLimits

0x5627,	// (0x0009fd6b) main_clock2_pane_t2

0x0004,

0xf657,	// (0x000a9d9b) main_clock2_pane_t_ParamLimits

0xf657,	// (0x000a9d9b) main_clock2_pane_t

0x568c,	// (0x0009fdd0) popup_clock_analogue_window_cp03_ParamLimits

0x568c,	// (0x0009fdd0) popup_clock_analogue_window_cp03

0x56aa,	// (0x0009fdee) popup_clock_digital_window_cp02_ParamLimits

0x56aa,	// (0x0009fdee) popup_clock_digital_window_cp02

0x571f,	// (0x0009fe63) main_clock2_list_single_pane_ParamLimits

0x571f,	// (0x0009fe63) main_clock2_list_single_pane

0xaa87,	// (0x000a51cb) list_highlight_pane_cp05

0xd152,	// (0x000a7896) main_clock2_list_single_pane_t1

0x1fd6,	// (0x0009c71a) popup_toolbar_window_cp04_ParamLimits

0x4c80,	// (0x0009f3c4) camera2_autofocus_pane_g2_ParamLimits

0x4c80,	// (0x0009f3c4) camera2_autofocus_pane_g2

0x4c8c,	// (0x0009f3d0) camera2_autofocus_pane_g3_ParamLimits

0x4c8c,	// (0x0009f3d0) camera2_autofocus_pane_g3

0x4c98,	// (0x0009f3dc) camera2_autofocus_pane_g4_ParamLimits

0x4c98,	// (0x0009f3dc) camera2_autofocus_pane_g4

0x4ca4,	// (0x0009f3e8) camera2_autofocus_pane_g5_ParamLimits

0x4ca4,	// (0x0009f3e8) camera2_autofocus_pane_g5

0x0004,

0xf5c9,	// (0x000a9d0d) camera2_autofocus_pane_g_ParamLimits

0xf5c9,	// (0x000a9d0d) camera2_autofocus_pane_g

0xcfd9,	// (0x000a771d) camera2_autofocus_pane_cp_g2

0xcfe1,	// (0x000a7725) camera2_autofocus_pane_cp_g3

0xcfe9,	// (0x000a772d) camera2_autofocus_pane_cp_g4

0xcff1,	// (0x000a7735) camera2_autofocus_pane_cp_g5

0x0004,

0x04a3,	// (0x0009abe7) camera2_autofocus_pane_cp_g

0x54b3,	// (0x0009fbf7) popup_dialer_spcha_window

0x9cc5,	// (0x000a4409) bg_popup_sub_pane_cp07

0xd160,	// (0x000a78a4) list_spcha_pane

0xd168,	// (0x000a78ac) list_single_spcha_pane_ParamLimits

0xd168,	// (0x000a78ac) list_single_spcha_pane

0x9cc5,	// (0x000a4409) list_highlight_pane_cp06

0xd179,	// (0x000a78bd) list_single_spcha_pane_t1

0xc346,	// (0x000a6a8a) popup_call2_audio_out_window_g4_ParamLimits

0xc346,	// (0x000a6a8a) popup_call2_audio_out_window_g4

0x106d,	// (0x0009b7b1) main_imed2_pane

0x4324,	// (0x0009ea68) popup_imed_adjust2_window

0x4337,	// (0x0009ea7b) popup_imed_trans_window_ParamLimits

0x4337,	// (0x0009ea7b) popup_imed_trans_window

0xcb4f,	// (0x000a7293) popup_blid_sat_info2_window_t1

0xcb5d,	// (0x000a72a1) popup_blid_sat_info2_window_t2

0x000a,

0x03d2,	// (0x0009ab16) popup_blid_sat_info2_window_t

0x57d4,	// (0x0009ff18) aid_size_cell_colour_35

0x57ee,	// (0x0009ff32) aid_size_cell_colour_112

0x5805,	// (0x0009ff49) aid_size_cell_effect

0xa478,	// (0x000a4bbc) bg_tb_trans_pane_cp02

0xb0ce,	// (0x000a5812) heading_imed_pane

0x581f,	// (0x0009ff63) listscroll_imed_pane

0xd187,	// (0x000a78cb) heading_imed_pane_g1

0xd18f,	// (0x000a78d3) heading_imed_pane_t1

0xd19d,	// (0x000a78e1) grid_imed_colour_35_pane_ParamLimits

0xd19d,	// (0x000a78e1) grid_imed_colour_35_pane

0x582b,	// (0x0009ff6f) grid_imed_effect_pane

0xd1b4,	// (0x000a78f8) list_imed_aspect_pane

0x583b,	// (0x0009ff7f) scroll_pane_cp027_ParamLimits

0x583b,	// (0x0009ff7f) scroll_pane_cp027

0x5847,	// (0x0009ff8b) cell_imed_effect_pane_ParamLimits

0x5847,	// (0x0009ff8b) cell_imed_effect_pane

0xd1bc,	// (0x000a7900) cell_imed_colour_pane_ParamLimits

0xd1bc,	// (0x000a7900) cell_imed_colour_pane

0xd1fe,	// (0x000a7942) cell_imed_colour_pane_g1_ParamLimits

0xd1fe,	// (0x000a7942) cell_imed_colour_pane_g1

0xd20f,	// (0x000a7953) hgihlgiht_grid_pane_cp016_ParamLimits

0xd20f,	// (0x000a7953) hgihlgiht_grid_pane_cp016

0x585f,	// (0x0009ffa3) cell_imed_effect_pane_g1

0x5867,	// (0x0009ffab) grid_highlight_pane_cp017

0xd220,	// (0x000a7964) list_imed_single_pane_ParamLimits

0xd220,	// (0x000a7964) list_imed_single_pane

0x9cc5,	// (0x000a4409) list_highlight_pane_cp07

0xd235,	// (0x000a7979) list_imed_aspect_pane_comp1_t1

0xc909,	// (0x000a704d) bg_tb_trans_pane_cp05

0xd257,	// (0x000a799b) popup_imed_adjust2_window_g1

0xd27e,	// (0x000a79c2) popup_imed_adjust2_window_t1

0xd296,	// (0x000a79da) slider_imed_adjust_pane

0xd2aa,	// (0x000a79ee) slider_imed_adjust_pane_g1

0xd2ba,	// (0x000a79fe) slider_imed_adjust_pane_g2

0xd2ca,	// (0x000a7a0e) slider_imed_adjust_pane_g3

0xd2db,	// (0x000a7a1f) slider_imed_adjust_pane_g4

0x0003,

0x0516,	// (0x0009ac5a) slider_imed_adjust_pane_g

0x5870,	// (0x0009ffb4) aid_size_cell_clipart2

0x587c,	// (0x0009ffc0) grid_imed_clipart_pane

0xd2ec,	// (0x000a7a30) scroll_pane_cp031

0x5886,	// (0x0009ffca) cell_imed_clipart_pane_ParamLimits

0x5886,	// (0x0009ffca) cell_imed_clipart_pane

0x58a8,	// (0x0009ffec) cell_imed_clipart_pane_g1

0x9cc5,	// (0x000a4409) grid_highlight_pane_cp014

0x55db,	// (0x0009fd1f) main_clock2_pane_g1_ParamLimits

0x55db,	// (0x0009fd1f) main_clock2_pane_g1

0x56c6,	// (0x0009fe0a) aid_call2_pane_cp10

0x56d8,	// (0x0009fe1c) aid_call_pane_cp10

0xb33c,	// (0x000a5a80) popup_clock_analogue_window_cp10_g1

0xb33c,	// (0x000a5a80) popup_clock_analogue_window_cp10_g2

0x56ea,	// (0x0009fe2e) popup_clock_analogue_window_cp10_g3

0x56ea,	// (0x0009fe2e) popup_clock_analogue_window_cp10_g4

0xb33c,	// (0x000a5a80) popup_clock_analogue_window_cp10_g5

0x0004,

0xf662,	// (0x000a9da6) popup_clock_analogue_window_cp10_g

0x5700,	// (0x0009fe44) popup_clock_analogue_window_cp10_t1

0x5731,	// (0x0009fe75) clock_digital_number_pane_cp10_ParamLimits

0x5731,	// (0x0009fe75) clock_digital_number_pane_cp10

0x574b,	// (0x0009fe8f) clock_digital_number_pane_cp11_ParamLimits

0x574b,	// (0x0009fe8f) clock_digital_number_pane_cp11

0x5765,	// (0x0009fea9) clock_digital_number_pane_cp12_ParamLimits

0x5765,	// (0x0009fea9) clock_digital_number_pane_cp12

0x577f,	// (0x0009fec3) clock_digital_number_pane_cp13_ParamLimits

0x577f,	// (0x0009fec3) clock_digital_number_pane_cp13

0x5799,	// (0x0009fedd) clock_digital_separator_pane_cp10_ParamLimits

0x5799,	// (0x0009fedd) clock_digital_separator_pane_cp10

0x57b3,	// (0x0009fef7) popup_clock_digital_window_cp02_t1_ParamLimits

0x57b3,	// (0x0009fef7) popup_clock_digital_window_cp02_t1

0xa7ec,	// (0x000a4f30) clock_digital_number_pane_cp10_g1

0xa7ec,	// (0x000a4f30) clock_digital_number_pane_cp10_g2

0x0001,

0xf66d,	// (0x000a9db1) clock_digital_number_pane_cp10_g

0xa7ec,	// (0x000a4f30) clock_digital_separator_pane_cp10_g1

0xa7ec,	// (0x000a4f30) clock_digital_separator_pane_g2_cp10

0xb4c7,	// (0x000a5c0b) navi_pane_vded_g4

0xb4d0,	// (0x000a5c14) navi_pane_vded_g5

0xb4d9,	// (0x000a5c1d) navi_pane_vded_t1

0x106d,	// (0x0009b7b1) main_vded_pane

0x58b1,	// (0x0009fff5) main_vded_pane_g1

0x58bd,	// (0x000a0001) main_vded_pane_g2

0x58c7,	// (0x000a000b) main_vded_pane_g3

0x0002,

0xf672,	// (0x000a9db6) main_vded_pane_g

0x58d1,	// (0x000a0015) main_vded_pane_t1

0x58df,	// (0x000a0023) main_vded_pane_t2

0x0001,

0xf679,	// (0x000a9dbd) main_vded_pane_t

0x58ed,	// (0x000a0031) vded_slider_pane

0x58f7,	// (0x000a003b) vded_video_pane

0xd2f4,	// (0x000a7a38) vded_video_pane_g1

0x5901,	// (0x000a0045) vded_video_pane_g2

0xcd11,	// (0x000a7455) vded_video_pane_g3

0x0002,

0xf67e,	// (0x000a9dc2) vded_video_pane_g

0xd2fe,	// (0x000a7a42) vded_slider_pane_g1

0xca64,	// (0x000a71a8) vded_slider_pane_g2

0xd307,	// (0x000a7a4b) vded_slider_pane_g3

0xd310,	// (0x000a7a54) vded_slider_pane_g4

0xd319,	// (0x000a7a5d) vded_slider_pane_g5

0x0004,

0x0537,	// (0x0009ac7b) vded_slider_pane_g

0x53b7,	// (0x0009fafb) mup3_rocker_pane_ParamLimits

0x53b7,	// (0x0009fafb) mup3_rocker_pane

0x590a,	// (0x000a004e) mup3_control_keys_pane_g1

0x5912,	// (0x000a0056) mup3_control_keys_pane_g2

0x591a,	// (0x000a005e) mup3_control_keys_pane_g3

0x5922,	// (0x000a0066) mup3_control_keys_pane_g4

0x0003,

0xf685,	// (0x000a9dc9) mup3_control_keys_pane_g

0x1021,	// (0x0009b765) popup_toolbar2_fixed_window_cp01_ParamLimits

0x1021,	// (0x0009b765) popup_toolbar2_fixed_window_cp01

0x53d1,	// (0x0009fb15) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53d1,	// (0x0009fb15) popup_toolbar2_fixed_window_cp02

0xbc79,	// (0x000a63bd) popup_call2_audio_second_window_t4_ParamLimits

0xbc79,	// (0x000a63bd) popup_call2_audio_second_window_t4

0xc1a7,	// (0x000a68eb) popup_call2_audio_first_window_t6_ParamLimits

0xc1a7,	// (0x000a68eb) popup_call2_audio_first_window_t6

0xc449,	// (0x000a6b8d) popup_call2_audio_out_window_t6_ParamLimits

0xc449,	// (0x000a6b8d) popup_call2_audio_out_window_t6

0x106d,	// (0x0009b7b1) main_vitu_pane

0x5932,	// (0x000a0076) aid_size_cell_itu_ParamLimits

0x5932,	// (0x000a0076) aid_size_cell_itu

0xee45,	// (0x000a9589) bg_popup_window_pane_cp08_ParamLimits

0xee45,	// (0x000a9589) bg_popup_window_pane_cp08

0x5940,	// (0x000a0084) field_vitu_entry_pane_ParamLimits

0x5940,	// (0x000a0084) field_vitu_entry_pane

0x594f,	// (0x000a0093) grid_vitu_function_pane_ParamLimits

0x594f,	// (0x000a0093) grid_vitu_function_pane

0x595f,	// (0x000a00a3) grid_vitu_itu_pane_ParamLimits

0x595f,	// (0x000a00a3) grid_vitu_itu_pane

0x596f,	// (0x000a00b3) cell_vitu_itu_pane_ParamLimits

0x596f,	// (0x000a00b3) cell_vitu_itu_pane

0x5984,	// (0x000a00c8) cell_vitu_function_pane_ParamLimits

0x5984,	// (0x000a00c8) cell_vitu_function_pane

0xa478,	// (0x000a4bbc) bg_popup_sub_pane_cp08_ParamLimits

0xa478,	// (0x000a4bbc) bg_popup_sub_pane_cp08

0x5996,	// (0x000a00da) field_vitu_entry_pane_t1_ParamLimits

0x5996,	// (0x000a00da) field_vitu_entry_pane_t1

0xd33a,	// (0x000a7a7e) field_vitu_entry_pane_t2_ParamLimits

0xd33a,	// (0x000a7a7e) field_vitu_entry_pane_t2

0x0001,

0xf68e,	// (0x000a9dd2) field_vitu_entry_pane_t_ParamLimits

0xf68e,	// (0x000a9dd2) field_vitu_entry_pane_t

0xd357,	// (0x000a7a9b) bg_button_pane_cp05_ParamLimits

0xd357,	// (0x000a7a9b) bg_button_pane_cp05

0x59b2,	// (0x000a00f6) cell_vitu_itu_pane_g1

0x59ca,	// (0x000a010e) cell_vitu_itu_pane_t1_ParamLimits

0x59ca,	// (0x000a010e) cell_vitu_itu_pane_t1

0x59dc,	// (0x000a0120) cell_vitu_itu_pane_t2_ParamLimits

0x59dc,	// (0x000a0120) cell_vitu_itu_pane_t2

0x0002,

0xf693,	// (0x000a9dd7) cell_vitu_itu_pane_t_ParamLimits

0xf693,	// (0x000a9dd7) cell_vitu_itu_pane_t

0xd365,	// (0x000a7aa9) bg_button_pane_cp07

0x5a11,	// (0x000a0155) cell_vitu_function_pane_g1

0x12ff,	// (0x0009ba43) main_calc_pane_g1

0x0dde,	// (0x0009b522) aid_visual_content_pane

0x106d,	// (0x0009b7b1) main_vradio_pane

0x5a1a,	// (0x000a015e) main_vradio_pane_g1_ParamLimits

0x5a1a,	// (0x000a015e) main_vradio_pane_g1

0xd36f,	// (0x000a7ab3) main_vradio_pane_g2_ParamLimits

0xd36f,	// (0x000a7ab3) main_vradio_pane_g2

0x0001,

0xf69a,	// (0x000a9dde) main_vradio_pane_g_ParamLimits

0xf69a,	// (0x000a9dde) main_vradio_pane_g

0x5a2a,	// (0x000a016e) main_vradio_pane_t1_ParamLimits

0x5a2a,	// (0x000a016e) main_vradio_pane_t1

0x5a3c,	// (0x000a0180) main_vradio_pane_t2_ParamLimits

0x5a3c,	// (0x000a0180) main_vradio_pane_t2

0xd37c,	// (0x000a7ac0) main_vradio_pane_t3_ParamLimits

0xd37c,	// (0x000a7ac0) main_vradio_pane_t3

0x0002,

0xf69f,	// (0x000a9de3) main_vradio_pane_t_ParamLimits

0xf69f,	// (0x000a9de3) main_vradio_pane_t

0x5a4e,	// (0x000a0192) vradio_rocker_control_pane_ParamLimits

0x5a4e,	// (0x000a0192) vradio_rocker_control_pane

0x5a5a,	// (0x000a019e) vradio_station_info_pane_ParamLimits

0x5a5a,	// (0x000a019e) vradio_station_info_pane

0xd390,	// (0x000a7ad4) vradio_frequency_info_pane_ParamLimits

0xd390,	// (0x000a7ad4) vradio_frequency_info_pane

0xcd11,	// (0x000a7455) vradio_station_info_pane_g1

0xd39f,	// (0x000a7ae3) vradio_station_info_pane_t1_ParamLimits

0xd39f,	// (0x000a7ae3) vradio_station_info_pane_t1

0xd3c1,	// (0x000a7b05) vradio_station_info_pane_t2_ParamLimits

0xd3c1,	// (0x000a7b05) vradio_station_info_pane_t2

0x0001,

0x0568,	// (0x0009acac) vradio_station_info_pane_t_ParamLimits

0x0568,	// (0x0009acac) vradio_station_info_pane_t

0xd3d3,	// (0x000a7b17) vradio_tuning_pane

0xd3db,	// (0x000a7b1f) vradio_rocker_control_pane_g1

0xd3e3,	// (0x000a7b27) vradio_rocker_control_pane_g2

0xd3eb,	// (0x000a7b2f) vradio_rocker_control_pane_g3

0xd3f3,	// (0x000a7b37) vradio_rocker_control_pane_g4

0xd3fb,	// (0x000a7b3f) vradio_rocker_control_pane_g5

0x0004,

0x056d,	// (0x0009acb1) vradio_rocker_control_pane_g

0x5a69,	// (0x000a01ad) vradio_frequency_info_pane_g1

0xd403,	// (0x000a7b47) vradio_frequency_info_pane_t1_ParamLimits

0xd403,	// (0x000a7b47) vradio_frequency_info_pane_t1

0x5a73,	// (0x000a01b7) vradio_tuning_pane_g1

0x5a7c,	// (0x000a01c0) vradio_tuning_pane_t1

0x0e27,	// (0x0009b56b) area_side_right_pane_ParamLimits

0x0e27,	// (0x0009b56b) area_side_right_pane

0xc8c4,	// (0x000a7008) status_small_pane_g1

0xc8cc,	// (0x000a7010) status_small_pane_g2

0xc8d5,	// (0x000a7019) status_small_pane_g3

0xc8de,	// (0x000a7022) status_small_pane_g4

0x0003,

0x0328,	// (0x0009aa6c) status_small_pane_g

0xc8e7,	// (0x000a702b) status_small_pane_t1

0x106d,	// (0x0009b7b1) main_video3_pane

0xd417,	// (0x000a7b5b) cams_zoom_vslider_pane

0xd41f,	// (0x000a7b63) image3_wide_pane_ParamLimits

0xd41f,	// (0x000a7b63) image3_wide_pane

0xd439,	// (0x000a7b7d) image3_wide_small_pane

0xd445,	// (0x000a7b89) main_video3_pane_g1_ParamLimits

0xd445,	// (0x000a7b89) main_video3_pane_g1

0xd461,	// (0x000a7ba5) main_video3_pane_g2_ParamLimits

0xd461,	// (0x000a7ba5) main_video3_pane_g2

0x0001,

0x0578,	// (0x0009acbc) main_video3_pane_g_ParamLimits

0x0578,	// (0x0009acbc) main_video3_pane_g

0xd47d,	// (0x000a7bc1) main_video3_pane_t1_ParamLimits

0xd47d,	// (0x000a7bc1) main_video3_pane_t1

0xd4a8,	// (0x000a7bec) main_video3_pane_t2_ParamLimits

0xd4a8,	// (0x000a7bec) main_video3_pane_t2

0xd4d3,	// (0x000a7c17) main_video3_pane_t3_ParamLimits

0xd4d3,	// (0x000a7c17) main_video3_pane_t3

0x0002,

0x057d,	// (0x0009acc1) main_video3_pane_t_ParamLimits

0x057d,	// (0x0009acc1) main_video3_pane_t

0xd500,	// (0x000a7c44) cams_zoom_vslider_pane_g1

0xd509,	// (0x000a7c4d) cams_zoom_vslider_pane_g2

0x0001,

0x0584,	// (0x0009acc8) cams_zoom_vslider_pane_g

0xd511,	// (0x000a7c55) small_slider_vertical_pane

0xcd11,	// (0x000a7455) small_slider_vertical_pane_g1

0xcd11,	// (0x000a7455) small_slider_vertical_pane_g2

0xd519,	// (0x000a7c5d) small_slider_vertical_pane_g3

0x0002,

0x0589,	// (0x0009accd) small_slider_vertical_pane_g

0x106d,	// (0x0009b7b1) main_hwr_training_pane

0xd522,	// (0x000a7c66) hwr_training_instruct_pane_ParamLimits

0xd522,	// (0x000a7c66) hwr_training_instruct_pane

0x5a8b,	// (0x000a01cf) hwr_training_navi_pane_ParamLimits

0x5a8b,	// (0x000a01cf) hwr_training_navi_pane

0x5aa5,	// (0x000a01e9) hwr_training_write_pane_ParamLimits

0x5aa5,	// (0x000a01e9) hwr_training_write_pane

0x9cc5,	// (0x000a4409) bg_frame_shadow_pane

0xd559,	// (0x000a7c9d) hwr_training_write_pane_g1

0xd561,	// (0x000a7ca5) hwr_training_write_pane_g2

0xd569,	// (0x000a7cad) hwr_training_write_pane_g3

0xd571,	// (0x000a7cb5) hwr_training_write_pane_g4

0xd579,	// (0x000a7cbd) hwr_training_write_pane_g5

0xd581,	// (0x000a7cc5) hwr_training_write_pane_g6

0xd589,	// (0x000a7ccd) hwr_training_write_pane_g7

0x0006,

0x0590,	// (0x0009acd4) hwr_training_write_pane_g

0x5add,	// (0x000a0221) hwr_training_navi_pane_g1_ParamLimits

0x5add,	// (0x000a0221) hwr_training_navi_pane_g1

0x5aef,	// (0x000a0233) hwr_training_navi_pane_g2_ParamLimits

0x5aef,	// (0x000a0233) hwr_training_navi_pane_g2

0x5b01,	// (0x000a0245) hwr_training_navi_pane_g3_ParamLimits

0x5b01,	// (0x000a0245) hwr_training_navi_pane_g3

0x5b11,	// (0x000a0255) hwr_training_navi_pane_g4_ParamLimits

0x5b11,	// (0x000a0255) hwr_training_navi_pane_g4

0x0004,

0xf6a6,	// (0x000a9dea) hwr_training_navi_pane_g_ParamLimits

0xf6a6,	// (0x000a9dea) hwr_training_navi_pane_g

0x5b2b,	// (0x000a026f) hwr_training_navi_pane_t1

0x5b39,	// (0x000a027d) list_single_hwr_training_instruct_pane_ParamLimits

0x5b39,	// (0x000a027d) list_single_hwr_training_instruct_pane

0xd591,	// (0x000a7cd5) list_single_hwr_training_instruct_pane_t1

0xcc51,	// (0x000a7395) bg_frame_shadow_pane_g1

0xd5a0,	// (0x000a7ce4) bg_frame_shadow_pane_g2

0xd5a8,	// (0x000a7cec) bg_frame_shadow_pane_g3

0xd5b0,	// (0x000a7cf4) bg_frame_shadow_pane_g4

0xd5b8,	// (0x000a7cfc) bg_frame_shadow_pane_g5

0xd5c0,	// (0x000a7d04) bg_frame_shadow_pane_g6

0xd5c8,	// (0x000a7d0c) bg_frame_shadow_pane_g7

0xa972,	// (0x000a50b6) bg_frame_shadow_pane_g8

0x0007,

0xf6b1,	// (0x000a9df5) bg_frame_shadow_pane_g

0x106d,	// (0x0009b7b1) main_video_tele_dialer_pane

0x5b5e,	// (0x000a02a2) aid_size_cell_video_keypad_ParamLimits

0x5b5e,	// (0x000a02a2) aid_size_cell_video_keypad

0x5b6e,	// (0x000a02b2) grid_video_dialer_keypad_pane_ParamLimits

0x5b6e,	// (0x000a02b2) grid_video_dialer_keypad_pane

0x5ba2,	// (0x000a02e6) video_down_pane_cp_ParamLimits

0x5ba2,	// (0x000a02e6) video_down_pane_cp

0x5bcc,	// (0x000a0310) cell_video_dialer_keypad_pane_ParamLimits

0x5bcc,	// (0x000a0310) cell_video_dialer_keypad_pane

0xd5d0,	// (0x000a7d14) bg_button_pane_cp08_ParamLimits

0xd5d0,	// (0x000a7d14) bg_button_pane_cp08

0x5be1,	// (0x000a0325) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5be1,	// (0x000a0325) cell_video_dialer_keypad_pane_g1

0x53ab,	// (0x0009faef) mup3_rocker2_pane_ParamLimits

0x53ab,	// (0x0009faef) mup3_rocker2_pane

0xcd11,	// (0x000a7455) mup3_rocker2_pane_g1

0x4294,	// (0x0009e9d8) main_dialer2_pane

0x106d,	// (0x0009b7b1) main_mp4_pane

0x5c36,	// (0x000a037a) main_mp4_pane_g1_ParamLimits

0x5c36,	// (0x000a037a) main_mp4_pane_g1

0x5c44,	// (0x000a0388) main_mp4_pane_g2_ParamLimits

0x5c44,	// (0x000a0388) main_mp4_pane_g2

0x5c52,	// (0x000a0396) main_mp4_pane_g3_ParamLimits

0x5c52,	// (0x000a0396) main_mp4_pane_g3

0x5c97,	// (0x000a03db) main_mp4_pane_g4_ParamLimits

0x5c97,	// (0x000a03db) main_mp4_pane_g4

0x5cc5,	// (0x000a0409) main_mp4_pane_g5_ParamLimits

0x5cc5,	// (0x000a0409) main_mp4_pane_g5

0x0007,

0xf6d1,	// (0x000a9e15) main_mp4_pane_g_ParamLimits

0xf6d1,	// (0x000a9e15) main_mp4_pane_g

0x5d39,	// (0x000a047d) main_mp4_pane_t1_ParamLimits

0x5d39,	// (0x000a047d) main_mp4_pane_t1

0x5d95,	// (0x000a04d9) main_mp4_pane_t2_ParamLimits

0x5d95,	// (0x000a04d9) main_mp4_pane_t2

0xd5dc,	// (0x000a7d20) main_mp4_pane_t3_ParamLimits

0xd5dc,	// (0x000a7d20) main_mp4_pane_t3

0x5de7,	// (0x000a052b) main_mp4_pane_t4_ParamLimits

0x5de7,	// (0x000a052b) main_mp4_pane_t4

0x0003,

0xf6e2,	// (0x000a9e26) main_mp4_pane_t_ParamLimits

0xf6e2,	// (0x000a9e26) main_mp4_pane_t

0x5e2b,	// (0x000a056f) mp4_progress_pane_ParamLimits

0x5e2b,	// (0x000a056f) mp4_progress_pane

0x5e75,	// (0x000a05b9) mp4_rocker_pane_ParamLimits

0x5e75,	// (0x000a05b9) mp4_rocker_pane

0xd60a,	// (0x000a7d4e) mp4_progress_pane_t1

0xd623,	// (0x000a7d67) mp4_progress_pane_t2

0x0001,

0x05e4,	// (0x0009ad28) mp4_progress_pane_t

0xd63c,	// (0x000a7d80) mup_progress_pane_cp04

0xd99b,	// (0x000a80df) mp4_rocker_pane_g1

0x5e95,	// (0x000a05d9) aid_cell_size_keypad2_ParamLimits

0x5e95,	// (0x000a05d9) aid_cell_size_keypad2

0x5ea5,	// (0x000a05e9) dialer2_ne_pane_ParamLimits

0x5ea5,	// (0x000a05e9) dialer2_ne_pane

0x5eb3,	// (0x000a05f7) grid_dialer2_keypad_pane_ParamLimits

0x5eb3,	// (0x000a05f7) grid_dialer2_keypad_pane

0xdb9e,	// (0x000a82e2) bg_popup_call_pane_cp07_ParamLimits

0xdb9e,	// (0x000a82e2) bg_popup_call_pane_cp07

0x5ec3,	// (0x000a0607) dialer2_ne_pane_t1_ParamLimits

0x5ec3,	// (0x000a0607) dialer2_ne_pane_t1

0x5ee8,	// (0x000a062c) cell_dialer2_keypad_pane_ParamLimits

0x5ee8,	// (0x000a062c) cell_dialer2_keypad_pane

0xd661,	// (0x000a7da5) bg_button_pane_pane_cp04_ParamLimits

0xd661,	// (0x000a7da5) bg_button_pane_pane_cp04

0x5efd,	// (0x000a0641) cell_dialer2_keypad_pane_g1_ParamLimits

0x5efd,	// (0x000a0641) cell_dialer2_keypad_pane_g1

0x1e98,	// (0x0009c5dc) aid_placing_vt_set_content_ParamLimits

0x1e98,	// (0x0009c5dc) aid_placing_vt_set_content

0x1ec4,	// (0x0009c608) aid_placing_vt_set_title_ParamLimits

0x1ec4,	// (0x0009c608) aid_placing_vt_set_title

0x106d,	// (0x0009b7b1) main_image3_pane

0x5f97,	// (0x000a06db) area_side_right_pane_cp01_ParamLimits

0x5f97,	// (0x000a06db) area_side_right_pane_cp01

0x5fc4,	// (0x000a0708) main_image3_pane_g1_ParamLimits

0x5fc4,	// (0x000a0708) main_image3_pane_g1

0x5fd2,	// (0x000a0716) main_image3_pane_g2_ParamLimits

0x5fd2,	// (0x000a0716) main_image3_pane_g2

0x5feb,	// (0x000a072f) main_image3_pane_g3_ParamLimits

0x5feb,	// (0x000a072f) main_image3_pane_g3

0x6004,	// (0x000a0748) main_image3_pane_g4_ParamLimits

0x6004,	// (0x000a0748) main_image3_pane_g4

0x0003,

0xf6f5,	// (0x000a9e39) main_image3_pane_g_ParamLimits

0xf6f5,	// (0x000a9e39) main_image3_pane_g

0x601d,	// (0x000a0761) main_image3_pane_t1_ParamLimits

0x601d,	// (0x000a0761) main_image3_pane_t1

0x6042,	// (0x000a0786) main_image3_pane_t2_ParamLimits

0x6042,	// (0x000a0786) main_image3_pane_t2

0x6061,	// (0x000a07a5) main_image3_pane_t3_ParamLimits

0x6061,	// (0x000a07a5) main_image3_pane_t3

0x0003,

0xf6fe,	// (0x000a9e42) main_image3_pane_t_ParamLimits

0xf6fe,	// (0x000a9e42) main_image3_pane_t

0xee45,	// (0x000a9589) grid_sctrl_middle_pane_cp01_ParamLimits

0xee45,	// (0x000a9589) grid_sctrl_middle_pane_cp01

0x60c2,	// (0x000a0806) cell_sctrl_middle_pane_cp01_ParamLimits

0x60c2,	// (0x000a0806) cell_sctrl_middle_pane_cp01

0x60d3,	// (0x000a0817) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60d3,	// (0x000a0817) cell_sctrl_middle_pane_cp01_g1

0x106d,	// (0x0009b7b1) main_call4_pane

0x60e0,	// (0x000a0824) aid_size_button_call4_ParamLimits

0x60e0,	// (0x000a0824) aid_size_button_call4

0x6116,	// (0x000a085a) call4_windows_pane_ParamLimits

0x6116,	// (0x000a085a) call4_windows_pane

0x612b,	// (0x000a086f) grid_call4_button_pane_ParamLimits

0x612b,	// (0x000a086f) grid_call4_button_pane

0x6159,	// (0x000a089d) call4_windows_conf_pane

0x6170,	// (0x000a08b4) popup_call4_audio_first_window_ParamLimits

0x6170,	// (0x000a08b4) popup_call4_audio_first_window

0x61c0,	// (0x000a0904) popup_call4_audio_second_window_ParamLimits

0x61c0,	// (0x000a0904) popup_call4_audio_second_window

0x61d9,	// (0x000a091d) popup_call4_audio_wait_window_ParamLimits

0x61d9,	// (0x000a091d) popup_call4_audio_wait_window

0x61e7,	// (0x000a092b) cell_call4_button_pane_ParamLimits

0x61e7,	// (0x000a092b) cell_call4_button_pane

0x620a,	// (0x000a094e) bg_button_pane_cp09_ParamLimits

0x620a,	// (0x000a094e) bg_button_pane_cp09

0x6216,	// (0x000a095a) cell_call4_button_pane_g1_ParamLimits

0x6216,	// (0x000a095a) cell_call4_button_pane_g1

0x6223,	// (0x000a0967) cell_call4_button_pane_t1_ParamLimits

0x6223,	// (0x000a0967) cell_call4_button_pane_t1

0xd675,	// (0x000a7db9) popup_call4_audio_conf_window_ParamLimits

0xd675,	// (0x000a7db9) popup_call4_audio_conf_window

0x53de,	// (0x0009fb22) mup3_progress_pane_t1_ParamLimits

0x53fd,	// (0x0009fb41) mup3_progress_pane_t2_ParamLimits

0xd00f,	// (0x000a7753) mup3_progress_pane_t3_ParamLimits

0xf63b,	// (0x000a9d7f) mup3_progress_pane_t_ParamLimits

0xd02c,	// (0x000a7770) mup_progress_pane_cp03_ParamLimits

0x592a,	// (0x000a006e) mup3_control_keys_pane_g4_copy1

0x5e59,	// (0x000a059d) mp4_rocker2_pane_ParamLimits

0x5e59,	// (0x000a059d) mp4_rocker2_pane

0xd689,	// (0x000a7dcd) mp4_rocker2_pane_g1

0xd691,	// (0x000a7dd5) mp4_rocker2_pane_g2

0x6267,	// (0x000a09ab) mp4_rocker2_pane_g3

0x626f,	// (0x000a09b3) mp4_rocker2_pane_g4

0x6277,	// (0x000a09bb) mp4_rocker2_pane_g5

0x0004,

0xf707,	// (0x000a9e4b) mp4_rocker2_pane_g

0x106d,	// (0x0009b7b1) main_camera4_pane

0x106d,	// (0x0009b7b1) main_video4_pane

0x5b7e,	// (0x000a02c2) main_video_tele_dialer_pane_t1_ParamLimits

0x5b7e,	// (0x000a02c2) main_video_tele_dialer_pane_t1

0x5b90,	// (0x000a02d4) main_video_tele_dialer_pane_t2_ParamLimits

0x5b90,	// (0x000a02d4) main_video_tele_dialer_pane_t2

0x0001,

0xf6c2,	// (0x000a9e06) main_video_tele_dialer_pane_t_ParamLimits

0xf6c2,	// (0x000a9e06) main_video_tele_dialer_pane_t

0x6297,	// (0x000a09db) cam4_autofocus_pane_ParamLimits

0x6297,	// (0x000a09db) cam4_autofocus_pane

0x62b1,	// (0x000a09f5) cam4_image_uncrop_pane_ParamLimits

0x62b1,	// (0x000a09f5) cam4_image_uncrop_pane

0x62c8,	// (0x000a0a0c) cam4_indicators_pane_ParamLimits

0x62c8,	// (0x000a0a0c) cam4_indicators_pane

0x62e4,	// (0x000a0a28) main_camera4_pane_g1_ParamLimits

0x62e4,	// (0x000a0a28) main_camera4_pane_g1

0x62f0,	// (0x000a0a34) main_camera4_pane_g2_ParamLimits

0x62f0,	// (0x000a0a34) main_camera4_pane_g2

0x62f0,	// (0x000a0a34) main_camera4_pane_g3_ParamLimits

0x62f0,	// (0x000a0a34) main_camera4_pane_g3

0x62fc,	// (0x000a0a40) main_camera4_pane_g4_ParamLimits

0x62fc,	// (0x000a0a40) main_camera4_pane_g4

0x6308,	// (0x000a0a4c) main_camera4_pane_g5_ParamLimits

0x6308,	// (0x000a0a4c) main_camera4_pane_g5

0x0005,

0xf712,	// (0x000a9e56) main_camera4_pane_g_ParamLimits

0xf712,	// (0x000a9e56) main_camera4_pane_g

0x6322,	// (0x000a0a66) main_camera4_pane_t1_ParamLimits

0x6322,	// (0x000a0a66) main_camera4_pane_t1

0x636a,	// (0x000a0aae) bg_tb_trans_pane_cp06

0x6380,	// (0x000a0ac4) cam4_indicators_pane_g1

0x6391,	// (0x000a0ad5) cam4_indicators_pane_g2

0x0002,

0xf72d,	// (0x000a9e71) cam4_indicators_pane_g

0x63af,	// (0x000a0af3) cam4_indicators_pane_t1

0x63d9,	// (0x000a0b1d) main_video4_pane_g1_ParamLimits

0x63d9,	// (0x000a0b1d) main_video4_pane_g1

0x63e5,	// (0x000a0b29) main_video4_pane_g2_ParamLimits

0x63e5,	// (0x000a0b29) main_video4_pane_g2

0x63f1,	// (0x000a0b35) main_video4_pane_g3_ParamLimits

0x63f1,	// (0x000a0b35) main_video4_pane_g3

0x63fd,	// (0x000a0b41) main_video4_pane_g4_ParamLimits

0x63fd,	// (0x000a0b41) main_video4_pane_g4

0x0004,

0xf734,	// (0x000a9e78) main_video4_pane_g_ParamLimits

0xf734,	// (0x000a9e78) main_video4_pane_g

0x641d,	// (0x000a0b61) vid4_indicators_pane_ParamLimits

0x641d,	// (0x000a0b61) vid4_indicators_pane

0x643c,	// (0x000a0b80) video4_image_uncrop_cif_pane_ParamLimits

0x643c,	// (0x000a0b80) video4_image_uncrop_cif_pane

0x644b,	// (0x000a0b8f) video4_image_uncrop_nhd_pane_ParamLimits

0x644b,	// (0x000a0b8f) video4_image_uncrop_nhd_pane

0x62b1,	// (0x000a09f5) video4_image_uncrop_vga_pane_ParamLimits

0x62b1,	// (0x000a09f5) video4_image_uncrop_vga_pane

0x4286,	// (0x0009e9ca) bg_tb_trans_pane_cp07

0x6462,	// (0x000a0ba6) vid4_indicators_pane_g1

0x6476,	// (0x000a0bba) vid4_indicators_pane_g2

0x648a,	// (0x000a0bce) vid4_indicators_pane_g3

0x0004,

0xf73f,	// (0x000a9e83) vid4_indicators_pane_g

0x64b9,	// (0x000a0bfd) vid4_indicators_pane_t1

0x64d0,	// (0x000a0c14) cam4_autofocus_pane_g1

0x64d8,	// (0x000a0c1c) cam4_autofocus_pane_g2

0x64e0,	// (0x000a0c24) cam4_autofocus_pane_g3

0x0002,

0xf74a,	// (0x000a9e8e) cam4_autofocus_pane_g

0x64e8,	// (0x000a0c2c) cam4_autofocus_pane_g3_copy1

0x5bb0,	// (0x000a02f4) video_down_pane_cp_t1

0x5bbe,	// (0x000a0302) video_down_pane_cp_t2

0x0001,

0xf6c7,	// (0x000a9e0b) video_down_pane_cp_t

0x1053,	// (0x0009b797) popup_vitu2_window_ParamLimits

0x1053,	// (0x0009b797) popup_vitu2_window

0x64f0,	// (0x000a0c34) aid_size_cell2_itu2_ParamLimits

0x64f0,	// (0x000a0c34) aid_size_cell2_itu2

0x6512,	// (0x000a0c56) aid_size_cell_itu2_ParamLimits

0x6512,	// (0x000a0c56) aid_size_cell_itu2

0x6556,	// (0x000a0c9a) bg_popup_window_pane_cp09_ParamLimits

0x6556,	// (0x000a0c9a) bg_popup_window_pane_cp09

0x6564,	// (0x000a0ca8) field_vitu2_entry_pane_ParamLimits

0x6564,	// (0x000a0ca8) field_vitu2_entry_pane

0x6584,	// (0x000a0cc8) grid_vitu2_function_pane_ParamLimits

0x6584,	// (0x000a0cc8) grid_vitu2_function_pane

0x65c8,	// (0x000a0d0c) grid_vitu2_itu_pane_ParamLimits

0x65c8,	// (0x000a0d0c) grid_vitu2_itu_pane

0x6644,	// (0x000a0d88) cell_vitu2_itu_pane_ParamLimits

0x6644,	// (0x000a0d88) cell_vitu2_itu_pane

0x665d,	// (0x000a0da1) cell_vitu2_function_pane_ParamLimits

0x665d,	// (0x000a0da1) cell_vitu2_function_pane

0xd699,	// (0x000a7ddd) bg_popup_call_pane_cp08_ParamLimits

0xd699,	// (0x000a7ddd) bg_popup_call_pane_cp08

0xd6b0,	// (0x000a7df4) field_vitu2_entry_pane_g1

0xd6bc,	// (0x000a7e00) field_vitu2_entry_pane_g2

0x0002,

0x064f,	// (0x0009ad93) field_vitu2_entry_pane_g

0x669e,	// (0x000a0de2) field_vitu2_entry_pane_t1_ParamLimits

0x669e,	// (0x000a0de2) field_vitu2_entry_pane_t1

0xa0df,	// (0x000a4823) field_vitu2_entry_pane_t2_ParamLimits

0xa0df,	// (0x000a4823) field_vitu2_entry_pane_t2

0x0001,

0xf751,	// (0x000a9e95) field_vitu2_entry_pane_t_ParamLimits

0xf751,	// (0x000a9e95) field_vitu2_entry_pane_t

0x66ce,	// (0x000a0e12) bg_button_pane_cp010_ParamLimits

0x66ce,	// (0x000a0e12) bg_button_pane_cp010

0x66dc,	// (0x000a0e20) cell_vitu2_itu_pane_g1

0x66fc,	// (0x000a0e40) cell_vitu2_itu_pane_t1_ParamLimits

0x66fc,	// (0x000a0e40) cell_vitu2_itu_pane_t1

0x0cc2,	// (0x0009b406) cell_vitu2_itu_pane_t2_ParamLimits

0x0cc2,	// (0x0009b406) cell_vitu2_itu_pane_t2

0x0002,

0xf75b,	// (0x000a9e9f) cell_vitu2_itu_pane_t_ParamLimits

0xf75b,	// (0x000a9e9f) cell_vitu2_itu_pane_t

0x4286,	// (0x0009e9ca) bg_button_pane_cp011

0x6748,	// (0x000a0e8c) cell_vitu2_function_pane_g1

0x106d,	// (0x0009b7b1) main_myfav_hc_pane

0x60a3,	// (0x000a07e7) popup_image3_note_pane_ParamLimits

0x60a3,	// (0x000a07e7) popup_image3_note_pane

0x60b1,	// (0x000a07f5) popup_image3_tool_bar_pane_ParamLimits

0x60b1,	// (0x000a07f5) popup_image3_tool_bar_pane

0x0d38,	// (0x0009b47c) cell_vitu2_itu_pane_t3_ParamLimits

0x0d38,	// (0x0009b47c) cell_vitu2_itu_pane_t3

0x9cc5,	// (0x000a4409) bg_popup_trans_pane

0xd6de,	// (0x000a7e22) grid_image3_tool_bar_pane

0xd6e8,	// (0x000a7e2c) bg_popup_trans_pane_g1

0xace0,	// (0x000a5424) bg_popup_trans_pane_g2

0xd6f0,	// (0x000a7e34) bg_popup_trans_pane_g3

0xd6f8,	// (0x000a7e3c) bg_popup_trans_pane_g4

0xd700,	// (0x000a7e44) bg_popup_trans_pane_g5

0xd708,	// (0x000a7e4c) bg_popup_trans_pane_g6

0xd710,	// (0x000a7e54) bg_popup_trans_pane_g7

0xd718,	// (0x000a7e5c) bg_popup_trans_pane_g8

0xacc0,	// (0x000a5404) bg_popup_trans_pane_g9

0x0008,

0xf762,	// (0x000a9ea6) bg_popup_trans_pane_g

0xd720,	// (0x000a7e64) cell_image3_tool_bar_pane_ParamLimits

0xd720,	// (0x000a7e64) cell_image3_tool_bar_pane

0xcd11,	// (0x000a7455) cell_image3_tool_bar_pane_g1

0x9cc5,	// (0x000a4409) bg_popup_trans_pane_cp1

0xd734,	// (0x000a7e78) popup_image3_note_pane_t1

0xd742,	// (0x000a7e86) popup_image3_note_pane_t2

0xd750,	// (0x000a7e94) popup_image3_note_pane_t3

0x0002,

0x067a,	// (0x0009adbe) popup_image3_note_pane_t

0xd75e,	// (0x000a7ea2) popup_image3_note_pane_t3_copy1

0x675c,	// (0x000a0ea0) bg_myfav_hc_instruction_pane_ParamLimits

0x675c,	// (0x000a0ea0) bg_myfav_hc_instruction_pane

0x6774,	// (0x000a0eb8) cell_myfav_contact_pane_ParamLimits

0x6774,	// (0x000a0eb8) cell_myfav_contact_pane

0x678e,	// (0x000a0ed2) cell_myfav_contact_pane_cp1_ParamLimits

0x678e,	// (0x000a0ed2) cell_myfav_contact_pane_cp1

0x67a6,	// (0x000a0eea) cell_myfav_contact_pane_cp2_ParamLimits

0x67a6,	// (0x000a0eea) cell_myfav_contact_pane_cp2

0x67be,	// (0x000a0f02) cell_myfav_contact_pane_cp3_ParamLimits

0x67be,	// (0x000a0f02) cell_myfav_contact_pane_cp3

0x67d5,	// (0x000a0f19) cell_myfav_contact_pane_cp4_ParamLimits

0x67d5,	// (0x000a0f19) cell_myfav_contact_pane_cp4

0x67eb,	// (0x000a0f2f) cell_myfav_contact_pane_cp5_ParamLimits

0x67eb,	// (0x000a0f2f) cell_myfav_contact_pane_cp5

0x67ff,	// (0x000a0f43) cell_myfav_contact_pane_cp6_ParamLimits

0x67ff,	// (0x000a0f43) cell_myfav_contact_pane_cp6

0x6813,	// (0x000a0f57) cell_myfav_contact_pane_cp7_ParamLimits

0x6813,	// (0x000a0f57) cell_myfav_contact_pane_cp7

0xd76c,	// (0x000a7eb0) listscroll_gen_pane_cp05

0x682b,	// (0x000a0f6f) main_myfav_hc_pane_g1_ParamLimits

0x682b,	// (0x000a0f6f) main_myfav_hc_pane_g1

0x6841,	// (0x000a0f85) main_myfav_hc_pane_g2_ParamLimits

0x6841,	// (0x000a0f85) main_myfav_hc_pane_g2

0x0002,

0xf775,	// (0x000a9eb9) main_myfav_hc_pane_g_ParamLimits

0xf775,	// (0x000a9eb9) main_myfav_hc_pane_g

0x686f,	// (0x000a0fb3) main_myfav_hc_pane_t1_ParamLimits

0x686f,	// (0x000a0fb3) main_myfav_hc_pane_t1

0xd775,	// (0x000a7eb9) main_myfav_hc_pane_t2_ParamLimits

0xd775,	// (0x000a7eb9) main_myfav_hc_pane_t2

0xd787,	// (0x000a7ecb) main_myfav_hc_pane_t3_ParamLimits

0xd787,	// (0x000a7ecb) main_myfav_hc_pane_t3

0x6886,	// (0x000a0fca) main_myfav_hc_pane_t4_ParamLimits

0x6886,	// (0x000a0fca) main_myfav_hc_pane_t4

0x0004,

0xf77c,	// (0x000a9ec0) main_myfav_hc_pane_t_ParamLimits

0xf77c,	// (0x000a9ec0) main_myfav_hc_pane_t

0xcd11,	// (0x000a7455) bg_myfav_hc_instruction_pane_g1

0xd799,	// (0x000a7edd) cell_myfav_contact_pane_g1_ParamLimits

0xd799,	// (0x000a7edd) cell_myfav_contact_pane_g1

0xd799,	// (0x000a7edd) cell_myfav_contact_pane_g2_ParamLimits

0xd799,	// (0x000a7edd) cell_myfav_contact_pane_g2

0xd7a5,	// (0x000a7ee9) cell_myfav_contact_pane_g3_ParamLimits

0xd7a5,	// (0x000a7ee9) cell_myfav_contact_pane_g3

0xcff9,	// (0x000a773d) cell_myfav_contact_pane_g4_ParamLimits

0xcff9,	// (0x000a773d) cell_myfav_contact_pane_g4

0xd7b2,	// (0x000a7ef6) cell_myfav_contact_pane_g5_ParamLimits

0xd7b2,	// (0x000a7ef6) cell_myfav_contact_pane_g5

0x0004,

0x0693,	// (0x0009add7) cell_myfav_contact_pane_g_ParamLimits

0x0693,	// (0x0009add7) cell_myfav_contact_pane_g

0x6857,	// (0x000a0f9b) main_myfav_hc_pane_g3_ParamLimits

0x6857,	// (0x000a0f9b) main_myfav_hc_pane_g3

0x0f5c,	// (0x0009b6a0) popup_adpt_find_window

0x68b0,	// (0x000a0ff4) afind_page_pane_ParamLimits

0x68b0,	// (0x000a0ff4) afind_page_pane

0x68bd,	// (0x000a1001) aid_size_cell_afind_ParamLimits

0x68bd,	// (0x000a1001) aid_size_cell_afind

0x68d7,	// (0x000a101b) bg_popup_sub_pane_cp09_ParamLimits

0x68d7,	// (0x000a101b) bg_popup_sub_pane_cp09

0x68e4,	// (0x000a1028) find_pane_cp01_ParamLimits

0x68e4,	// (0x000a1028) find_pane_cp01

0xd7be,	// (0x000a7f02) grid_afind_control_pane_ParamLimits

0xd7be,	// (0x000a7f02) grid_afind_control_pane

0x68f1,	// (0x000a1035) grid_afind_pane_ParamLimits

0x68f1,	// (0x000a1035) grid_afind_pane

0x690d,	// (0x000a1051) cell_afind_pane_ParamLimits

0x690d,	// (0x000a1051) cell_afind_pane

0xcd11,	// (0x000a7455) afind_page_pane_g1

0x6955,	// (0x000a1099) afind_page_pane_g2

0x695e,	// (0x000a10a2) afind_page_pane_g3

0x0002,

0xf787,	// (0x000a9ecb) afind_page_pane_g

0x6967,	// (0x000a10ab) afind_page_pane_t1

0xd7d2,	// (0x000a7f16) cell_afind_grid_control_pane_ParamLimits

0xd7d2,	// (0x000a7f16) cell_afind_grid_control_pane

0xd661,	// (0x000a7da5) bg_button_pane_cp69_ParamLimits

0xd661,	// (0x000a7da5) bg_button_pane_cp69

0x6987,	// (0x000a10cb) cell_afind_pane_g1_ParamLimits

0x6987,	// (0x000a10cb) cell_afind_pane_g1

0x6994,	// (0x000a10d8) cell_afind_pane_t1_ParamLimits

0x6994,	// (0x000a10d8) cell_afind_pane_t1

0xaad9,	// (0x000a521d) bg_button_pane_cp72

0xd7e1,	// (0x000a7f25) cell_afind_grid_control_pane_g1

0x3e04,	// (0x0009e548) aid_image_placing_area_ParamLimits

0x3e04,	// (0x0009e548) aid_image_placing_area

0xd322,	// (0x000a7a66) field_vitu_entry_pane_g1_ParamLimits

0xd322,	// (0x000a7a66) field_vitu_entry_pane_g1

0xd32e,	// (0x000a7a72) field_vitu_entry_pane_g2_ParamLimits

0xd32e,	// (0x000a7a72) field_vitu_entry_pane_g2

0x0001,

0x054b,	// (0x0009ac8f) field_vitu_entry_pane_g_ParamLimits

0x054b,	// (0x0009ac8f) field_vitu_entry_pane_g

0x59b2,	// (0x000a00f6) cell_vitu_itu_pane_g1_ParamLimits

0x59f4,	// (0x000a0138) cell_vitu_itu_pane_t3_ParamLimits

0x59f4,	// (0x000a0138) cell_vitu_itu_pane_t3

0xd60a,	// (0x000a7d4e) mp4_progress_pane_t1_ParamLimits

0xd623,	// (0x000a7d67) mp4_progress_pane_t2_ParamLimits

0x05e4,	// (0x0009ad28) mp4_progress_pane_t_ParamLimits

0xd63c,	// (0x000a7d80) mup_progress_pane_cp04_ParamLimits

0x689a,	// (0x000a0fde) main_myfav_hc_pane_t5_ParamLimits

0x689a,	// (0x000a0fde) main_myfav_hc_pane_t5

0x0cba,	// (0x0009b3fe) aid_zoom_text_primary

0x0f5c,	// (0x0009b6a0) popup_adpt_find_window_ParamLimits

0x4286,	// (0x0009e9ca) main_cam_set_pane

0x62d6,	// (0x000a0a1a) cam4_zoom_pane_ParamLimits

0x62d6,	// (0x000a0a1a) cam4_zoom_pane

0x69a6,	// (0x000a10ea) main_cam_set_pane_g1_ParamLimits

0x69a6,	// (0x000a10ea) main_cam_set_pane_g1

0x69b4,	// (0x000a10f8) main_cam_set_pane_g2_ParamLimits

0x69b4,	// (0x000a10f8) main_cam_set_pane_g2

0x0001,

0xf78e,	// (0x000a9ed2) main_cam_set_pane_g_ParamLimits

0xf78e,	// (0x000a9ed2) main_cam_set_pane_g

0x69c0,	// (0x000a1104) main_cam_set_pane_t1_ParamLimits

0x69c0,	// (0x000a1104) main_cam_set_pane_t1

0x69dc,	// (0x000a1120) main_cset_listscroll_pane_ParamLimits

0x69dc,	// (0x000a1120) main_cset_listscroll_pane

0x6a07,	// (0x000a114b) main_cset_slider_pane_ParamLimits

0x6a07,	// (0x000a114b) main_cset_slider_pane

0xd7f2,	// (0x000a7f36) main_cset_list_pane_ParamLimits

0xd7f2,	// (0x000a7f36) main_cset_list_pane

0xd802,	// (0x000a7f46) scroll_pane_cp028

0x6a26,	// (0x000a116a) aid_area_touch_slider

0x6a42,	// (0x000a1186) cset_slider_pane

0x6a6c,	// (0x000a11b0) main_cset_slider_pane_g1

0x6a81,	// (0x000a11c5) main_cset_slider_pane_g2

0x0011,

0xf793,	// (0x000a9ed7) main_cset_slider_pane_g

0xd83b,	// (0x000a7f7f) main_cset_slider_pane_t1

0x6b43,	// (0x000a1287) main_cset_slider_pane_t2

0x6b5d,	// (0x000a12a1) main_cset_slider_pane_t3

0x6b77,	// (0x000a12bb) main_cset_slider_pane_t4

0x6b91,	// (0x000a12d5) main_cset_slider_pane_t5

0x6baf,	// (0x000a12f3) main_cset_slider_pane_t6

0x6bc6,	// (0x000a130a) main_cset_slider_pane_t7

0x000e,

0xf7b8,	// (0x000a9efc) main_cset_slider_pane_t

0x6cd2,	// (0x000a1416) cset_list_set_pane_ParamLimits

0x6cd2,	// (0x000a1416) cset_list_set_pane

0x6ce8,	// (0x000a142c) aid_position_infowindow_above

0x6cf0,	// (0x000a1434) aid_position_infowindow_below

0xa492,	// (0x000a4bd6) cset_list_set_pane_g1_ParamLimits

0xa492,	// (0x000a4bd6) cset_list_set_pane_g1

0xa0fc,	// (0x000a4840) cset_list_set_pane_g3_ParamLimits

0xa0fc,	// (0x000a4840) cset_list_set_pane_g3

0x0001,

0xf7d7,	// (0x000a9f1b) cset_list_set_pane_g_ParamLimits

0xf7d7,	// (0x000a9f1b) cset_list_set_pane_g

0xa10b,	// (0x000a484f) cset_list_set_pane_t1_ParamLimits

0xa10b,	// (0x000a484f) cset_list_set_pane_t1

0xa478,	// (0x000a4bbc) list_highlight_pane_cp021_ParamLimits

0xa478,	// (0x000a4bbc) list_highlight_pane_cp021

0xb63b,	// (0x000a5d7f) cset_slider_pane_g1

0xb64d,	// (0x000a5d91) cset_slider_pane_g2

0xb644,	// (0x000a5d88) cset_slider_pane_g3

0x0002,

0x06f3,	// (0x0009ae37) cset_slider_pane_g

0x6cf8,	// (0x000a143c) aid_area_touch_cam4_zoom

0x6d00,	// (0x000a1444) cam4_zoom_cont_pane

0x6d08,	// (0x000a144c) cam4_zoom_pane_g1

0x6d10,	// (0x000a1454) cam4_zoom_pane_g2

0x6d18,	// (0x000a145c) cam4_zoom_pane_g3

0x0002,

0xf7dc,	// (0x000a9f20) cam4_zoom_pane_g

0x6d20,	// (0x000a1464) cam4_zoom_cont_pane_g1

0x6d29,	// (0x000a146d) cam4_zoom_cont_pane_g2

0x6d32,	// (0x000a1476) cam4_zoom_cont_pane_g3

0x0002,

0xf7e3,	// (0x000a9f27) cam4_zoom_cont_pane_g

0x60fa,	// (0x000a083e) call4_image_pane_ParamLimits

0x60fa,	// (0x000a083e) call4_image_pane

0x6159,	// (0x000a089d) call4_windows_conf_pane_ParamLimits

0x619e,	// (0x000a08e2) popup_call4_audio_in_window_ParamLimits

0x619e,	// (0x000a08e2) popup_call4_audio_in_window

0x9cc5,	// (0x000a4409) bg_popup_call2_act_pane_cp02

0xd66d,	// (0x000a7db1) call4_list_conf_pane

0xcd11,	// (0x000a7455) call4_image_pane_g1

0xcd11,	// (0x000a7455) call4_image_pane_g2

0x0001,

0x040c,	// (0x0009ab50) call4_image_pane_g

0xd8db,	// (0x000a801f) list_single_graphic_popup_conf4_pane_ParamLimits

0xd8db,	// (0x000a801f) list_single_graphic_popup_conf4_pane

0x9cc5,	// (0x000a4409) list_highlight_pane_cp022

0xd8ee,	// (0x000a8032) list_single_graphic_popup_conf4_pane_g1

0xb1fa,	// (0x000a593e) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf7ea,	// (0x000a9f2e) list_single_graphic_popup_conf4_pane_g

0xd8f6,	// (0x000a803a) list_single_graphic_popup_conf4_pane_t1

0x2028,	// (0x0009c76c) popup_vtel_slider_window_ParamLimits

0x2028,	// (0x0009c76c) popup_vtel_slider_window

0xd64f,	// (0x000a7d93) dialer2_ne_pane_t2_ParamLimits

0xd64f,	// (0x000a7d93) dialer2_ne_pane_t2

0x0001,

0xf6eb,	// (0x000a9e2f) dialer2_ne_pane_t_ParamLimits

0xf6eb,	// (0x000a9e2f) dialer2_ne_pane_t

0xa478,	// (0x000a4bbc) bg_popup_sub_pane_cp010_ParamLimits

0xa478,	// (0x000a4bbc) bg_popup_sub_pane_cp010

0x6d3b,	// (0x000a147f) popup_vtel_slider_window_g1_ParamLimits

0x6d3b,	// (0x000a147f) popup_vtel_slider_window_g1

0x6d47,	// (0x000a148b) popup_vtel_slider_window_g2_ParamLimits

0x6d47,	// (0x000a148b) popup_vtel_slider_window_g2

0x0003,

0xf7ef,	// (0x000a9f33) popup_vtel_slider_window_g_ParamLimits

0xf7ef,	// (0x000a9f33) popup_vtel_slider_window_g

0x6d8f,	// (0x000a14d3) vtel_slider_pane_ParamLimits

0x6d8f,	// (0x000a14d3) vtel_slider_pane

0x6d9e,	// (0x000a14e2) vtel_slider_pane_g1_ParamLimits

0x6d9e,	// (0x000a14e2) vtel_slider_pane_g1

0x6dab,	// (0x000a14ef) vtel_slider_pane_g2_ParamLimits

0x6dab,	// (0x000a14ef) vtel_slider_pane_g2

0x6db8,	// (0x000a14fc) vtel_slider_pane_g3_ParamLimits

0x6db8,	// (0x000a14fc) vtel_slider_pane_g3

0x6d9e,	// (0x000a14e2) vtel_slider_pane_g4_ParamLimits

0x6d9e,	// (0x000a14e2) vtel_slider_pane_g4

0x6dc5,	// (0x000a1509) vtel_slider_pane_g5_ParamLimits

0x6dc5,	// (0x000a1509) vtel_slider_pane_g5

0x0004,

0xf7f8,	// (0x000a9f3c) vtel_slider_pane_g_ParamLimits

0xf7f8,	// (0x000a9f3c) vtel_slider_pane_g

0x4286,	// (0x0009e9ca) main_gallery2_pane

0x6538,	// (0x000a0c7c) aid_size_row_itut2_dropdow_list_ParamLimits

0x6538,	// (0x000a0c7c) aid_size_row_itut2_dropdow_list

0x65a6,	// (0x000a0cea) grid_vitu2_function_top_pane_ParamLimits

0x65a6,	// (0x000a0cea) grid_vitu2_function_top_pane

0x6600,	// (0x000a0d44) popup_vitu2_dropdown_list_window_ParamLimits

0x6600,	// (0x000a0d44) popup_vitu2_dropdown_list_window

0x6620,	// (0x000a0d64) popup_vitu2_match_list_window

0x6de0,	// (0x000a1524) cell_vitu2_function_top_pane_ParamLimits

0x6de0,	// (0x000a1524) cell_vitu2_function_top_pane

0x6dfa,	// (0x000a153e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6dfa,	// (0x000a153e) cell_vitu2_function_top_pane_cp01

0x6e16,	// (0x000a155a) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e16,	// (0x000a155a) cell_vitu2_function_top_wide_pane

0x4286,	// (0x0009e9ca) bg_button_pane_cp012

0x6e32,	// (0x000a1576) cell_vitu2_function_top_pane_g1

0x6e46,	// (0x000a158a) bg_button_pane_cp013_ParamLimits

0x6e46,	// (0x000a158a) bg_button_pane_cp013

0x6e62,	// (0x000a15a6) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e62,	// (0x000a15a6) cell_vitu2_function_top_wide_pane_g1

0x1053,	// (0x0009b797) bg_popup_sub_pane_cp20

0x6e7a,	// (0x000a15be) list_vitu2_match_list_pane

0xd6e8,	// (0x000a7e2c) bg_popup_sub_pane_cp20_g1

0xd6f0,	// (0x000a7e34) bg_popup_sub_pane_cp20_g2

0xace0,	// (0x000a5424) bg_popup_sub_pane_cp20_g3

0xd6f8,	// (0x000a7e3c) bg_popup_sub_pane_cp20_g4

0xacc0,	// (0x000a5404) bg_popup_sub_pane_cp20_g5

0xd90c,	// (0x000a8050) bg_popup_sub_pane_cp20_g6

0xd708,	// (0x000a7e4c) bg_popup_sub_pane_cp20_g7

0xd710,	// (0x000a7e54) bg_popup_sub_pane_cp20_g8

0xd718,	// (0x000a7e5c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf803,	// (0x000a9f47) bg_popup_sub_pane_cp20_g

0x6e92,	// (0x000a15d6) list_vitu2_match_list_item_pane_ParamLimits

0x6e92,	// (0x000a15d6) list_vitu2_match_list_item_pane

0x6ea4,	// (0x000a15e8) list_vitu2_match_list_item_pane_t1

0x106d,	// (0x0009b7b1) bg_popup_sub_pane_cp21

0x6efa,	// (0x000a163e) grid_vitu2_dropdown_list_pane

0x6f02,	// (0x000a1646) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f02,	// (0x000a1646) cell_vitu2_dropdown_list_char_pane

0x6f23,	// (0x000a1667) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f23,	// (0x000a1667) cell_vitu2_dropdown_list_ctrl_pane

0xd914,	// (0x000a8058) cell_vitu2_dropdown_list_char_pane_g1

0xd91d,	// (0x000a8061) cell_vitu2_dropdown_list_char_pane_g2

0xd926,	// (0x000a806a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x073e,	// (0x0009ae82) cell_vitu2_dropdown_list_char_pane_g

0x6f4f,	// (0x000a1693) cell_vitu2_dropdown_list_char_pane_t1

0x6f5d,	// (0x000a16a1) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f5d,	// (0x000a16a1) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f6d,	// (0x000a16b1) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f6d,	// (0x000a16b1) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f7e,	// (0x000a16c2) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f7e,	// (0x000a16c2) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f8e,	// (0x000a16d2) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f8e,	// (0x000a16d2) cell_vitu2_dropdown_list_ctrl_pane_g4

0x636a,	// (0x000a0aae) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x636a,	// (0x000a0aae) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf820,	// (0x000a9f64) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf820,	// (0x000a9f64) cell_vitu2_dropdown_list_ctrl_pane_g

0x6faa,	// (0x000a16ee) aid_size_cell_gallery2_ParamLimits

0x6faa,	// (0x000a16ee) aid_size_cell_gallery2

0x6fc4,	// (0x000a1708) grid_gallery2_pane_ParamLimits

0x6fc4,	// (0x000a1708) grid_gallery2_pane

0x6fdb,	// (0x000a171f) scroll_pane_cp029_ParamLimits

0x6fdb,	// (0x000a171f) scroll_pane_cp029

0x6feb,	// (0x000a172f) cell_gallery2_pane_ParamLimits

0x6feb,	// (0x000a172f) cell_gallery2_pane

0xd92f,	// (0x000a8073) cell_gallery2_pane_g2

0xea1e,	// (0x000a9162) cell_gallery2_pane_g3

0xd937,	// (0x000a807b) cell_gallery2_pane_g4

0xd93f,	// (0x000a8083) cell_gallery2_pane_g5

0xaa87,	// (0x000a51cb) grid_highlight_pane_cp10

0x6620,	// (0x000a0d64) popup_vitu2_match_list_window_ParamLimits

0x6634,	// (0x000a0d78) popup_vitu2_query_window_ParamLimits

0x6634,	// (0x000a0d78) popup_vitu2_query_window

0x106d,	// (0x0009b7b1) bg_vitu2_candi_button_pane

0xd914,	// (0x000a8058) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd91d,	// (0x000a8061) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd926,	// (0x000a806a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7040,	// (0x000a1784) bg_button_pane_cp015

0x7052,	// (0x000a1796) bg_button_pane_cp016

0x7065,	// (0x000a17a9) bg_button_pane_cp017

0xc909,	// (0x000a704d) bg_popup_sub_pane_cp22

0xd947,	// (0x000a808b) popup_vitu2_query_window_g1

0x70aa,	// (0x000a17ee) popup_vitu2_query_window_g2

0x0002,

0xf82b,	// (0x000a9f6f) popup_vitu2_query_window_g

0x70c7,	// (0x000a180b) popup_vitu2_query_window_t1_ParamLimits

0x70c7,	// (0x000a180b) popup_vitu2_query_window_t1

0x70fa,	// (0x000a183e) popup_vitu2_query_window_t2_ParamLimits

0x70fa,	// (0x000a183e) popup_vitu2_query_window_t2

0x710c,	// (0x000a1850) popup_vitu2_query_window_t3_ParamLimits

0x710c,	// (0x000a1850) popup_vitu2_query_window_t3

0x7134,	// (0x000a1878) popup_vitu2_query_window_t4_ParamLimits

0x7134,	// (0x000a1878) popup_vitu2_query_window_t4

0x7155,	// (0x000a1899) popup_vitu2_query_window_t5_ParamLimits

0x7155,	// (0x000a1899) popup_vitu2_query_window_t5

0x0006,

0xf832,	// (0x000a9f76) popup_vitu2_query_window_t_ParamLimits

0xf832,	// (0x000a9f76) popup_vitu2_query_window_t

0xd7ea,	// (0x000a7f2e) main_cset_text_pane

0x6a26,	// (0x000a116a) aid_area_touch_slider_ParamLimits

0x6a42,	// (0x000a1186) cset_slider_pane_ParamLimits

0x6a6c,	// (0x000a11b0) main_cset_slider_pane_g1_ParamLimits

0x6a81,	// (0x000a11c5) main_cset_slider_pane_g2_ParamLimits

0xd80b,	// (0x000a7f4f) main_cset_slider_pane_g3_ParamLimits

0xd80b,	// (0x000a7f4f) main_cset_slider_pane_g3

0x6a96,	// (0x000a11da) main_cset_slider_pane_g4_ParamLimits

0x6a96,	// (0x000a11da) main_cset_slider_pane_g4

0x6aa5,	// (0x000a11e9) main_cset_slider_pane_g5_ParamLimits

0x6aa5,	// (0x000a11e9) main_cset_slider_pane_g5

0x6ab3,	// (0x000a11f7) main_cset_slider_pane_g6_ParamLimits

0x6ab3,	// (0x000a11f7) main_cset_slider_pane_g6

0xf793,	// (0x000a9ed7) main_cset_slider_pane_g_ParamLimits

0xd83b,	// (0x000a7f7f) main_cset_slider_pane_t1_ParamLimits

0x6b43,	// (0x000a1287) main_cset_slider_pane_t2_ParamLimits

0x6b5d,	// (0x000a12a1) main_cset_slider_pane_t3_ParamLimits

0x6b77,	// (0x000a12bb) main_cset_slider_pane_t4_ParamLimits

0x6b91,	// (0x000a12d5) main_cset_slider_pane_t5_ParamLimits

0x6baf,	// (0x000a12f3) main_cset_slider_pane_t6_ParamLimits

0x6bc6,	// (0x000a130a) main_cset_slider_pane_t7_ParamLimits

0x6bf4,	// (0x000a1338) main_cset_slider_pane_t8_ParamLimits

0x6bf4,	// (0x000a1338) main_cset_slider_pane_t8

0x6c1c,	// (0x000a1360) main_cset_slider_pane_t9_ParamLimits

0x6c1c,	// (0x000a1360) main_cset_slider_pane_t9

0x6c44,	// (0x000a1388) main_cset_slider_pane_t10_ParamLimits

0x6c44,	// (0x000a1388) main_cset_slider_pane_t10

0x6c6c,	// (0x000a13b0) main_cset_slider_pane_t11_ParamLimits

0x6c6c,	// (0x000a13b0) main_cset_slider_pane_t11

0x6c96,	// (0x000a13da) main_cset_slider_pane_t12_ParamLimits

0x6c96,	// (0x000a13da) main_cset_slider_pane_t12

0x6cb3,	// (0x000a13f7) main_cset_slider_pane_t13_ParamLimits

0x6cb3,	// (0x000a13f7) main_cset_slider_pane_t13

0xf7b8,	// (0x000a9efc) main_cset_slider_pane_t_ParamLimits

0x9cc5,	// (0x000a4409) bg_popup_sub_pane_cp011

0xd953,	// (0x000a8097) main_cset_text_pane_g1

0xd95b,	// (0x000a809f) main_cset_text_pane_t1

0xd969,	// (0x000a80ad) main_cset_text_pane_t2

0xd977,	// (0x000a80bb) main_cset_text_pane_t3

0xd985,	// (0x000a80c9) main_cset_text_pane_t4

0xd9a5,	// (0x000a80e9) main_cset_text_pane_t5

0xd9b3,	// (0x000a80f7) main_cset_text_pane_t6

0xd9c1,	// (0x000a8105) main_cset_text_pane_t7

0x0006,

0xf841,	// (0x000a9f85) main_cset_text_pane_t

0x106d,	// (0x0009b7b1) main_cam4_burst_pane

0x106d,	// (0x0009b7b1) main_cam5_pane

0x6975,	// (0x000a10b9) bg_button_pane_cp019

0x697e,	// (0x000a10c2) bg_button_pane_cp020

0xd817,	// (0x000a7f5b) main_cset_slider_pane_g7_ParamLimits

0xd817,	// (0x000a7f5b) main_cset_slider_pane_g7

0xd823,	// (0x000a7f67) main_cset_slider_pane_g8_ParamLimits

0xd823,	// (0x000a7f67) main_cset_slider_pane_g8

0x6ac7,	// (0x000a120b) main_cset_slider_pane_g9_ParamLimits

0x6ac7,	// (0x000a120b) main_cset_slider_pane_g9

0x6ad3,	// (0x000a1217) main_cset_slider_pane_g10_ParamLimits

0x6ad3,	// (0x000a1217) main_cset_slider_pane_g10

0x6adf,	// (0x000a1223) main_cset_slider_pane_g11_ParamLimits

0x6adf,	// (0x000a1223) main_cset_slider_pane_g11

0x6aeb,	// (0x000a122f) main_cset_slider_pane_g12_ParamLimits

0x6aeb,	// (0x000a122f) main_cset_slider_pane_g12

0x6af7,	// (0x000a123b) main_cset_slider_pane_g13_ParamLimits

0x6af7,	// (0x000a123b) main_cset_slider_pane_g13

0x6b03,	// (0x000a1247) main_cset_slider_pane_g14_ParamLimits

0x6b03,	// (0x000a1247) main_cset_slider_pane_g14

0x6b0f,	// (0x000a1253) main_cset_slider_pane_g15_ParamLimits

0x6b0f,	// (0x000a1253) main_cset_slider_pane_g15

0xd869,	// (0x000a7fad) main_cset_slider_pane_t14_ParamLimits

0xd869,	// (0x000a7fad) main_cset_slider_pane_t14

0xd8a2,	// (0x000a7fe6) main_cset_slider_pane_t15_ParamLimits

0xd8a2,	// (0x000a7fe6) main_cset_slider_pane_t15

0x71cc,	// (0x000a1910) aid_cam4_burst_size_cell_ParamLimits

0x71cc,	// (0x000a1910) aid_cam4_burst_size_cell

0x71e8,	// (0x000a192c) grid_cam4_burst_pane_ParamLimits

0x71e8,	// (0x000a192c) grid_cam4_burst_pane

0x7218,	// (0x000a195c) linegrid_cam4_burst_pane_ParamLimits

0x7218,	// (0x000a195c) linegrid_cam4_burst_pane

0x7238,	// (0x000a197c) scroll_pane_cp30_ParamLimits

0x7238,	// (0x000a197c) scroll_pane_cp30

0x7244,	// (0x000a1988) cell_cam4_burst_pane_ParamLimits

0x7244,	// (0x000a1988) cell_cam4_burst_pane

0xd9cf,	// (0x000a8113) linegrid_cam4_burst_pane_g1_ParamLimits

0xd9cf,	// (0x000a8113) linegrid_cam4_burst_pane_g1

0x7280,	// (0x000a19c4) linegrid_cam4_burst_pane_g2_ParamLimits

0x7280,	// (0x000a19c4) linegrid_cam4_burst_pane_g2

0xd9dc,	// (0x000a8120) linegrid_cam4_burst_pane_g3_ParamLimits

0xd9dc,	// (0x000a8120) linegrid_cam4_burst_pane_g3

0x0002,

0xf850,	// (0x000a9f94) linegrid_cam4_burst_pane_g_ParamLimits

0xf850,	// (0x000a9f94) linegrid_cam4_burst_pane_g

0x7291,	// (0x000a19d5) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7291,	// (0x000a19d5) linegrid_cam4_burst_pane_g3_copy1

0xd9e9,	// (0x000a812d) linegrid_cam4_burst_pane_g4_ParamLimits

0xd9e9,	// (0x000a812d) linegrid_cam4_burst_pane_g4

0x72ab,	// (0x000a19ef) linegrid_cam4_burst_pane_g5_ParamLimits

0x72ab,	// (0x000a19ef) linegrid_cam4_burst_pane_g5

0x72bc,	// (0x000a1a00) linegrid_cam4_burst_pane_g6_ParamLimits

0x72bc,	// (0x000a1a00) linegrid_cam4_burst_pane_g6

0xd9f6,	// (0x000a813a) linegrid_cam4_burst_pane_g7_ParamLimits

0xd9f6,	// (0x000a813a) linegrid_cam4_burst_pane_g7

0x72cd,	// (0x000a1a11) cell_cam4_burst_pane_g1

0xda0f,	// (0x000a8153) main_cam5_pane_t1_ParamLimits

0xda0f,	// (0x000a8153) main_cam5_pane_t1

0xda21,	// (0x000a8165) main_cam5_pane_t2_ParamLimits

0xda21,	// (0x000a8165) main_cam5_pane_t2

0xda33,	// (0x000a8177) main_cam5_pane_t3_ParamLimits

0xda33,	// (0x000a8177) main_cam5_pane_t3

0xda45,	// (0x000a8189) main_cam5_pane_t4_ParamLimits

0xda45,	// (0x000a8189) main_cam5_pane_t4

0xda5d,	// (0x000a81a1) main_cam5_pane_t5_ParamLimits

0xda5d,	// (0x000a81a1) main_cam5_pane_t5

0xda71,	// (0x000a81b5) main_cam5_pane_t6_ParamLimits

0xda71,	// (0x000a81b5) main_cam5_pane_t6

0xda85,	// (0x000a81c9) main_cam5_pane_t7_ParamLimits

0xda85,	// (0x000a81c9) main_cam5_pane_t7

0xda97,	// (0x000a81db) main_cam5_pane_t8_ParamLimits

0xda97,	// (0x000a81db) main_cam5_pane_t8

0xdab3,	// (0x000a81f7) main_cam5_pane_t9_ParamLimits

0xdab3,	// (0x000a81f7) main_cam5_pane_t9

0xdac5,	// (0x000a8209) main_cam5_pane_t10_ParamLimits

0xdac5,	// (0x000a8209) main_cam5_pane_t10

0xdad7,	// (0x000a821b) main_cam5_pane_t11_ParamLimits

0xdad7,	// (0x000a821b) main_cam5_pane_t11

0xdae9,	// (0x000a822d) main_cam5_pane_t12_ParamLimits

0xdae9,	// (0x000a822d) main_cam5_pane_t12

0xdafe,	// (0x000a8242) main_cam5_pane_t13_ParamLimits

0xdafe,	// (0x000a8242) main_cam5_pane_t13

0x000c,

0xf85c,	// (0x000a9fa0) main_cam5_pane_t_ParamLimits

0xf85c,	// (0x000a9fa0) main_cam5_pane_t

0x1012,	// (0x0009b756) popup_scut_keymap_window_ParamLimits

0x1012,	// (0x0009b756) popup_scut_keymap_window

0x72e0,	// (0x000a1a24) aid_size_cell_brow_shortcut

0xaa87,	// (0x000a51cb) bg_popup_window_pane_cp010

0x72ec,	// (0x000a1a30) grid_scut_pane

0x72f8,	// (0x000a1a3c) cell_scut_pane_ParamLimits

0x72f8,	// (0x000a1a3c) cell_scut_pane

0x730f,	// (0x000a1a53) cell_scut_pane_g1

0xdb1b,	// (0x000a825f) cell_scut_pane_t1

0xdb2a,	// (0x000a826e) cell_scut_pane_t2

0x7318,	// (0x000a1a5c) cell_scut_pane_t3

0x0002,

0xf877,	// (0x000a9fbb) cell_scut_pane_t

0x4ffd,	// (0x0009f741) main_mup3_pane_g8_ParamLimits

0x4ffd,	// (0x0009f741) main_mup3_pane_g8

0x6546,	// (0x000a0c8a) area_vitu2_query_pane_ParamLimits

0x6546,	// (0x000a0c8a) area_vitu2_query_pane

0x7078,	// (0x000a17bc) input_focus_pane_cp08

0xdb39,	// (0x000a827d) area_vitu2_query_pane_g1

0x7326,	// (0x000a1a6a) area_vitu2_query_pane_g2

0x0001,

0xf87e,	// (0x000a9fc2) area_vitu2_query_pane_g

0x7337,	// (0x000a1a7b) area_vitu2_query_pane_t1_ParamLimits

0x7337,	// (0x000a1a7b) area_vitu2_query_pane_t1

0x734b,	// (0x000a1a8f) area_vitu2_query_pane_t2_ParamLimits

0x734b,	// (0x000a1a8f) area_vitu2_query_pane_t2

0x735f,	// (0x000a1aa3) area_vitu2_query_pane_t3_ParamLimits

0x735f,	// (0x000a1aa3) area_vitu2_query_pane_t3

0xa120,	// (0x000a4864) area_vitu2_query_pane_t4_ParamLimits

0xa120,	// (0x000a4864) area_vitu2_query_pane_t4

0xa148,	// (0x000a488c) area_vitu2_query_pane_t5_ParamLimits

0xa148,	// (0x000a488c) area_vitu2_query_pane_t5

0xa170,	// (0x000a48b4) area_vitu2_query_pane_t6_ParamLimits

0xa170,	// (0x000a48b4) area_vitu2_query_pane_t6

0x0006,

0xf883,	// (0x000a9fc7) area_vitu2_query_pane_t_ParamLimits

0xf883,	// (0x000a9fc7) area_vitu2_query_pane_t

0x7387,	// (0x000a1acb) bg_button_pane_cp018

0x7395,	// (0x000a1ad9) bg_button_pane_cp021

0x73a1,	// (0x000a1ae5) bg_button_pane_cp022

0x73b2,	// (0x000a1af6) input_focus_pane_cp09

0xb348,	// (0x000a5a8c) aid_size_touch_mv_arrow_left

0xb371,	// (0x000a5ab5) aid_size_touch_mv_arrow_right

0x6b27,	// (0x000a126b) main_cset_slider_pane_g16_ParamLimits

0x6b27,	// (0x000a126b) main_cset_slider_pane_g16

0x6b35,	// (0x000a1279) main_cset_slider_pane_g17_ParamLimits

0x6b35,	// (0x000a1279) main_cset_slider_pane_g17

0x72cd,	// (0x000a1a11) cell_cam4_burst_pane_g1_ParamLimits

0x9cc5,	// (0x000a4409) compa_mode_pane

0x6d53,	// (0x000a1497) popup_vtel_slider_window_g3_ParamLimits

0x6d53,	// (0x000a1497) popup_vtel_slider_window_g3

0x6d67,	// (0x000a14ab) popup_vtel_slider_window_g4_ParamLimits

0x6d67,	// (0x000a14ab) popup_vtel_slider_window_g4

0x6d7b,	// (0x000a14bf) popup_vtel_slider_window_t1_ParamLimits

0x6d7b,	// (0x000a14bf) popup_vtel_slider_window_t1

0x106d,	// (0x0009b7b1) main_cl_pane

0x4324,	// (0x0009ea68) popup_imed_adjust2_window_ParamLimits

0xc909,	// (0x000a704d) bg_tb_trans_pane_cp05_ParamLimits

0xd257,	// (0x000a799b) popup_imed_adjust2_window_g1_ParamLimits

0xd266,	// (0x000a79aa) popup_imed_adjust2_window_g2_ParamLimits

0xd266,	// (0x000a79aa) popup_imed_adjust2_window_g2

0xd272,	// (0x000a79b6) popup_imed_adjust2_window_g3_ParamLimits

0xd272,	// (0x000a79b6) popup_imed_adjust2_window_g3

0x0002,

0x050f,	// (0x0009ac53) popup_imed_adjust2_window_g_ParamLimits

0x050f,	// (0x0009ac53) popup_imed_adjust2_window_g

0xd27e,	// (0x000a79c2) popup_imed_adjust2_window_t1_ParamLimits

0xd296,	// (0x000a79da) slider_imed_adjust_pane_ParamLimits

0xd2aa,	// (0x000a79ee) slider_imed_adjust_pane_g1_ParamLimits

0xd2ba,	// (0x000a79fe) slider_imed_adjust_pane_g2_ParamLimits

0xd2ca,	// (0x000a7a0e) slider_imed_adjust_pane_g3_ParamLimits

0xd2db,	// (0x000a7a1f) slider_imed_adjust_pane_g4_ParamLimits

0x0516,	// (0x0009ac5a) slider_imed_adjust_pane_g_ParamLimits

0x627f,	// (0x000a09c3) aid_touch_area_cam4_ParamLimits

0x627f,	// (0x000a09c3) aid_touch_area_cam4

0x628f,	// (0x000a09d3) battery_pane_cp01

0x6316,	// (0x000a0a5a) main_camera4_pane_g6_ParamLimits

0x6316,	// (0x000a0a5a) main_camera4_pane_g6

0x6334,	// (0x000a0a78) main_camera4_pane_t2_ParamLimits

0x6334,	// (0x000a0a78) main_camera4_pane_t2

0x0001,

0xf71f,	// (0x000a9e63) main_camera4_pane_t_ParamLimits

0xf71f,	// (0x000a9e63) main_camera4_pane_t

0x63c9,	// (0x000a0b0d) aid_touch_area_vid4_ParamLimits

0x63c9,	// (0x000a0b0d) aid_touch_area_vid4

0x6409,	// (0x000a0b4d) main_video4_pane_g5_ParamLimits

0x6409,	// (0x000a0b4d) main_video4_pane_g5

0x642d,	// (0x000a0b71) vid4_progress_pane_ParamLimits

0x642d,	// (0x000a0b71) vid4_progress_pane

0xd82f,	// (0x000a7f73) main_cset_slider_pane_g18_ParamLimits

0xd82f,	// (0x000a7f73) main_cset_slider_pane_g18

0xda03,	// (0x000a8147) cell_cam4_burst_pane_g2_ParamLimits

0xda03,	// (0x000a8147) cell_cam4_burst_pane_g2

0x0001,

0xf857,	// (0x000a9f9b) cell_cam4_burst_pane_g_ParamLimits

0xf857,	// (0x000a9f9b) cell_cam4_burst_pane_g

0x73c3,	// (0x000a1b07) bg_cl_pane_ParamLimits

0x73c3,	// (0x000a1b07) bg_cl_pane

0x73cf,	// (0x000a1b13) cl_header_pane_ParamLimits

0x73cf,	// (0x000a1b13) cl_header_pane

0x73db,	// (0x000a1b1f) cl_listscroll_pane_ParamLimits

0x73db,	// (0x000a1b1f) cl_listscroll_pane

0xdb45,	// (0x000a8289) bg_cl_pane_g1

0xdb4d,	// (0x000a8291) bg_cl_pane_g2

0xdb55,	// (0x000a8299) bg_cl_pane_g3

0xdb5d,	// (0x000a82a1) bg_cl_pane_g4

0xdbac,	// (0x000a82f0) bg_cl_pane_g5

0xdbb4,	// (0x000a82f8) bg_cl_pane_g6

0xdbbc,	// (0x000a8300) bg_cl_pane_g7

0xdbc4,	// (0x000a8308) bg_cl_pane_g8

0xdbcc,	// (0x000a8310) bg_cl_pane_g9

0x0008,

0xf892,	// (0x000a9fd6) bg_cl_pane_g

0x73e7,	// (0x000a1b2b) aid_height_cl_leading_ParamLimits

0x73e7,	// (0x000a1b2b) aid_height_cl_leading

0x73f3,	// (0x000a1b37) aid_height_cl_text_ParamLimits

0x73f3,	// (0x000a1b37) aid_height_cl_text

0xee45,	// (0x000a9589) bg_cl_header_pane_ParamLimits

0xee45,	// (0x000a9589) bg_cl_header_pane

0x740b,	// (0x000a1b4f) cl_header_pane_g1_ParamLimits

0x740b,	// (0x000a1b4f) cl_header_pane_g1

0x7418,	// (0x000a1b5c) cl_header_pane_t1_ParamLimits

0x7418,	// (0x000a1b5c) cl_header_pane_t1

0xdbd4,	// (0x000a8318) cl_list_pane

0xd802,	// (0x000a7f46) hc_scroll_pane_cp01

0xacc0,	// (0x000a5404) bg_cl_header_pane_g1

0xd6e8,	// (0x000a7e2c) bg_cl_header_pane_g2

0xace0,	// (0x000a5424) bg_cl_header_pane_g3

0xd6f8,	// (0x000a7e3c) bg_cl_header_pane_g4

0xd6f0,	// (0x000a7e34) bg_cl_header_pane_g5

0xd90c,	// (0x000a8050) bg_cl_header_pane_g6

0xd710,	// (0x000a7e54) bg_cl_header_pane_g7

0xd718,	// (0x000a7e5c) bg_cl_header_pane_g8

0xd708,	// (0x000a7e4c) bg_cl_header_pane_g9

0x0008,

0xf8a5,	// (0x000a9fe9) bg_cl_header_pane_g

0x742a,	// (0x000a1b6e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x742a,	// (0x000a1b6e) hc_cl_list_double_graphic_heading_pane

0x743b,	// (0x000a1b7f) hc_cl_list_single_graphic_pane_ParamLimits

0x743b,	// (0x000a1b7f) hc_cl_list_single_graphic_pane

0x7454,	// (0x000a1b98) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7454,	// (0x000a1b98) hc_cl_list_single_graphic_pane_g1

0x7460,	// (0x000a1ba4) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7460,	// (0x000a1ba4) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8b8,	// (0x000a9ffc) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8b8,	// (0x000a9ffc) hc_cl_list_single_graphic_pane_g

0x7474,	// (0x000a1bb8) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7474,	// (0x000a1bb8) hc_cl_list_single_graphic_pane_t1

0x7454,	// (0x000a1b98) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7454,	// (0x000a1b98) hc_cl_list_double_graphic_heading_pane_g1

0x7489,	// (0x000a1bcd) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7489,	// (0x000a1bcd) hc_cl_list_double_graphic_heading_pane_g2

0x749d,	// (0x000a1be1) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x749d,	// (0x000a1be1) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8bd,	// (0x000aa001) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8bd,	// (0x000aa001) hc_cl_list_double_graphic_heading_pane_g

0x74b1,	// (0x000a1bf5) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x74b1,	// (0x000a1bf5) hc_cl_list_double_graphic_heading_pane_t1

0x74c6,	// (0x000a1c0a) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74c6,	// (0x000a1c0a) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8c4,	// (0x000aa008) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8c4,	// (0x000aa008) hc_cl_list_double_graphic_heading_pane_t

0x74e3,	// (0x000a1c27) vid4_progress_pane_g1

0x74f3,	// (0x000a1c37) vid4_progress_pane_g2

0x7503,	// (0x000a1c47) vid4_progress_pane_g3

0x7515,	// (0x000a1c59) vid4_progress_pane_g4

0x0004,

0xf8c9,	// (0x000aa00d) vid4_progress_pane_g

0x752d,	// (0x000a1c71) vid4_progress_pane_t1

0x7543,	// (0x000a1c87) vid4_progress_pane_t2

0x0002,

0xf8d4,	// (0x000aa018) vid4_progress_pane_t

0x756d,	// (0x000a1cb1) wait_bar_pane_cp07

0xcb04,	// (0x000a7248) blid_firmament_pane_ParamLimits

0xcb47,	// (0x000a728b) popup_blid_sat_info2_window_g1

0xcb6b,	// (0x000a72af) popup_blid_sat_info2_window_t3

0xcb79,	// (0x000a72bd) popup_blid_sat_info2_window_t4

0xcb87,	// (0x000a72cb) popup_blid_sat_info2_window_t5

0xcb95,	// (0x000a72d9) popup_blid_sat_info2_window_t6

0xcba5,	// (0x000a72e9) popup_blid_sat_info2_window_t7

0xcbb3,	// (0x000a72f7) popup_blid_sat_info2_window_t8

0xcbc1,	// (0x000a7305) popup_blid_sat_info2_window_t9

0xcbcf,	// (0x000a7313) popup_blid_sat_info2_window_t10

0xcc91,	// (0x000a73d5) aid_firma_cardinal_ParamLimits

0xcca5,	// (0x000a73e9) blid_firmament_pane_t1_ParamLimits

0xccbc,	// (0x000a7400) blid_firmament_pane_t2_ParamLimits

0xccd3,	// (0x000a7417) blid_firmament_pane_t3_ParamLimits

0xccea,	// (0x000a742e) blid_firmament_pane_t4_ParamLimits

0x0403,	// (0x0009ab47) blid_firmament_pane_t_ParamLimits

0xcd01,	// (0x000a7445) blid_sat_info_pane_ParamLimits

0x4286,	// (0x0009e9ca) main_cam_set_pane_ParamLimits

0x57d4,	// (0x0009ff18) aid_size_cell_colour_35_ParamLimits

0x57ee,	// (0x0009ff32) aid_size_cell_colour_112_ParamLimits

0x5805,	// (0x0009ff49) aid_size_cell_effect_ParamLimits

0xa478,	// (0x000a4bbc) bg_tb_trans_pane_cp02_ParamLimits

0xb0ce,	// (0x000a5812) heading_imed_pane_ParamLimits

0x581f,	// (0x0009ff63) listscroll_imed_pane_ParamLimits

0xbf23,	// (0x000a6667) popup_call2_audio_first_window_g5_ParamLimits

0xbf23,	// (0x000a6667) popup_call2_audio_first_window_g5

0x5f65,	// (0x000a06a9) aid_size_touch_image3_arrow_left_ParamLimits

0x5f65,	// (0x000a06a9) aid_size_touch_image3_arrow_left

0x5f7b,	// (0x000a06bf) aid_size_touch_image3_arrow_right_ParamLimits

0x5f7b,	// (0x000a06bf) aid_size_touch_image3_arrow_right

0x7558,	// (0x000a1c9c) vid4_progress_pane_t3

0x5abd,	// (0x000a0201) main_hwr_training_symbol_option_pane_ParamLimits

0x5abd,	// (0x000a0201) main_hwr_training_symbol_option_pane

0xd544,	// (0x000a7c88) popup_hwr_training_preview_window_ParamLimits

0xd544,	// (0x000a7c88) popup_hwr_training_preview_window

0x5b1e,	// (0x000a0262) hwr_training_navi_pane_g5_ParamLimits

0x5b1e,	// (0x000a0262) hwr_training_navi_pane_g5

0xd6d6,	// (0x000a7e1a) popup_char_count_window

0x1053,	// (0x0009b797) bg_popup_sub_pane_cp20_ParamLimits

0x6e7a,	// (0x000a15be) list_vitu2_match_list_pane_ParamLimits

0x6e86,	// (0x000a15ca) vitu2_page_scroll_pane_ParamLimits

0x6e86,	// (0x000a15ca) vitu2_page_scroll_pane

0xdbdd,	// (0x000a8321) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdbdd,	// (0x000a8321) list_single_hwr_training_symbol_option_pane

0xdbf0,	// (0x000a8334) list_single_hwr_training_symbol_option_pane_g1

0xdbf8,	// (0x000a833c) list_single_hwr_training_symbol_option_pane_t1

0xdc06,	// (0x000a834a) bg_button_pane_cp023

0xdc0f,	// (0x000a8353) bg_button_pane_cp024

0x75af,	// (0x000a1cf3) vitu2_page_scroll_pane_g1

0x75b7,	// (0x000a1cfb) vitu2_page_scroll_pane_g2

0x0001,

0xf8db,	// (0x000aa01f) vitu2_page_scroll_pane_g

0x75bf,	// (0x000a1d03) vitu2_page_scroll_pane_t1

0xca64,	// (0x000a71a8) popup_char_count_window_g1

0xdc42,	// (0x000a8386) popup_char_count_window_g2

0xdc4b,	// (0x000a838f) popup_char_count_window_g3

0x0002,

0xf8e0,	// (0x000aa024) popup_char_count_window_g

0xdc54,	// (0x000a8398) popup_char_count_window_t1

0x106d,	// (0x0009b7b1) main_vded2_pane

0xd243,	// (0x000a7987) aid_size_cell_imed_line

0xd24d,	// (0x000a7991) grid_imed_line_width_pane

0x649b,	// (0x000a0bdf) vid4_indicators_pane_g4

0xdc62,	// (0x000a83a6) cell_imed_line_width_pane_ParamLimits

0xdc62,	// (0x000a83a6) cell_imed_line_width_pane

0xdc76,	// (0x000a83ba) cell_imed_line_width_pane_g1

0xd993,	// (0x000a80d7) cell_imed_line_width_pane_g2

0x0001,

0xf8e7,	// (0x000aa02b) cell_imed_line_width_pane_g

0x75ce,	// (0x000a1d12) main_vded2_pane_g1_ParamLimits

0x75ce,	// (0x000a1d12) main_vded2_pane_g1

0x75db,	// (0x000a1d1f) main_vded2_pane_g2_ParamLimits

0x75db,	// (0x000a1d1f) main_vded2_pane_g2

0x0001,

0xf8ec,	// (0x000aa030) main_vded2_pane_g_ParamLimits

0xf8ec,	// (0x000aa030) main_vded2_pane_g

0x75e9,	// (0x000a1d2d) vded2_slider_pane_ParamLimits

0x75e9,	// (0x000a1d2d) vded2_slider_pane

0x75f6,	// (0x000a1d3a) aid_size_touch_vded2_end

0x7600,	// (0x000a1d44) aid_size_touch_vded2_playhead

0xdc7f,	// (0x000a83c3) aid_size_touch_vded2_start

0xdc87,	// (0x000a83cb) vded2_slider_bg_pane

0xdc90,	// (0x000a83d4) vded2_slider_pane_g1

0xdc99,	// (0x000a83dd) vded2_slider_pane_g2

0x7608,	// (0x000a1d4c) vded2_slider_pane_g3

0x0002,

0xf8f1,	// (0x000aa035) vded2_slider_pane_g

0xdca1,	// (0x000a83e5) vded2_slider_bg_pane_g1

0xdcaa,	// (0x000a83ee) vded2_slider_bg_pane_g2

0xdcb3,	// (0x000a83f7) vded2_slider_bg_pane_g3

0x0002,

0xf8f8,	// (0x000aa03c) vded2_slider_bg_pane_g

0x3b6e,	// (0x0009e2b2) aid_postcard_touch_down_pane_ParamLimits

0x3b6e,	// (0x0009e2b2) aid_postcard_touch_down_pane

0x3b7e,	// (0x0009e2c2) aid_postcard_touch_up_pane_ParamLimits

0x3b7e,	// (0x0009e2c2) aid_postcard_touch_up_pane

0x106d,	// (0x0009b7b1) main_blid2_pane

0x42af,	// (0x0009e9f3) popup_blid2_search_window

0x9cc5,	// (0x000a4409) blid2_gps_pane

0x9cc5,	// (0x000a4409) blid2_navig_pane

0x9cc5,	// (0x000a4409) blid2_search_pane

0x9cc5,	// (0x000a4409) blid2_tripm_pane

0x7611,	// (0x000a1d55) blid2_search_pane_g1_ParamLimits

0x7611,	// (0x000a1d55) blid2_search_pane_g1

0x7621,	// (0x000a1d65) blid2_search_pane_t1_ParamLimits

0x7621,	// (0x000a1d65) blid2_search_pane_t1

0x7633,	// (0x000a1d77) aid_size_cell_blid2_gps_ParamLimits

0x7633,	// (0x000a1d77) aid_size_cell_blid2_gps

0x7643,	// (0x000a1d87) blid2_gps_pane_g1_ParamLimits

0x7643,	// (0x000a1d87) blid2_gps_pane_g1

0x764f,	// (0x000a1d93) grid_blid2_satellite_pane_ParamLimits

0x764f,	// (0x000a1d93) grid_blid2_satellite_pane

0x765f,	// (0x000a1da3) blid2_navig_pane_g1_ParamLimits

0x765f,	// (0x000a1da3) blid2_navig_pane_g1

0x766b,	// (0x000a1daf) blid2_navig_pane_t1_ParamLimits

0x766b,	// (0x000a1daf) blid2_navig_pane_t1

0x767d,	// (0x000a1dc1) blid2_navig_pane_t2_ParamLimits

0x767d,	// (0x000a1dc1) blid2_navig_pane_t2

0x0001,

0xf8ff,	// (0x000aa043) blid2_navig_pane_t_ParamLimits

0xf8ff,	// (0x000aa043) blid2_navig_pane_t

0x768f,	// (0x000a1dd3) blid2_navig_ring_pane_ParamLimits

0x768f,	// (0x000a1dd3) blid2_navig_ring_pane

0x769f,	// (0x000a1de3) blid2_speed_pane_ParamLimits

0x769f,	// (0x000a1de3) blid2_speed_pane

0x76ab,	// (0x000a1def) blid2_tripm_pane_g1_ParamLimits

0x76ab,	// (0x000a1def) blid2_tripm_pane_g1

0x76bb,	// (0x000a1dff) blid2_tripm_pane_g2_ParamLimits

0x76bb,	// (0x000a1dff) blid2_tripm_pane_g2

0x76c7,	// (0x000a1e0b) blid2_tripm_pane_g3_ParamLimits

0x76c7,	// (0x000a1e0b) blid2_tripm_pane_g3

0x76d3,	// (0x000a1e17) blid2_tripm_pane_g4_ParamLimits

0x76d3,	// (0x000a1e17) blid2_tripm_pane_g4

0x76df,	// (0x000a1e23) blid2_tripm_pane_g5_ParamLimits

0x76df,	// (0x000a1e23) blid2_tripm_pane_g5

0x0005,

0xf904,	// (0x000aa048) blid2_tripm_pane_g_ParamLimits

0xf904,	// (0x000aa048) blid2_tripm_pane_g

0x76fb,	// (0x000a1e3f) blid2_tripm_pane_t1_ParamLimits

0x76fb,	// (0x000a1e3f) blid2_tripm_pane_t1

0x770f,	// (0x000a1e53) blid2_tripm_pane_t2_ParamLimits

0x770f,	// (0x000a1e53) blid2_tripm_pane_t2

0x7721,	// (0x000a1e65) blid2_tripm_pane_t3_ParamLimits

0x7721,	// (0x000a1e65) blid2_tripm_pane_t3

0x0003,

0xf911,	// (0x000aa055) blid2_tripm_pane_t_ParamLimits

0xf911,	// (0x000aa055) blid2_tripm_pane_t

0x7753,	// (0x000a1e97) cell_blid2_satellite_pane_ParamLimits

0x7753,	// (0x000a1e97) cell_blid2_satellite_pane

0x776d,	// (0x000a1eb1) cell_blid2_satellite_pane_g1

0xdcbc,	// (0x000a8400) cell_blid2_satellite_pane_t1

0xcd11,	// (0x000a7455) blid2_speed_pane_g1

0xdcca,	// (0x000a840e) blid2_speed_pane_t1

0xdcd8,	// (0x000a841c) blid2_speed_pane_t2

0x0001,

0xf91a,	// (0x000aa05e) blid2_speed_pane_t

0xcd11,	// (0x000a7455) blid2_navig_ring_pane_g1

0x7776,	// (0x000a1eba) blid2_navig_ring_pane_g2

0x777e,	// (0x000a1ec2) blid2_navig_ring_pane_g3

0x7786,	// (0x000a1eca) blid2_navig_ring_pane_g4

0x778e,	// (0x000a1ed2) blid2_navig_ring_pane_g5

0x0004,

0xf91f,	// (0x000aa063) blid2_navig_ring_pane_g

0x9cc5,	// (0x000a4409) bg_popup_window_pane_cp011

0xdce6,	// (0x000a842a) popup_blid2_search_window_g1

0xdcee,	// (0x000a8432) popup_blid2_search_window_t1

0xdcfc,	// (0x000a8440) popup_blid2_search_window_t2

0x0001,

0xf92a,	// (0x000aa06e) popup_blid2_search_window_t

0xabcf,	// (0x000a5313) main_browser_pane_g1

0xa8b9,	// (0x000a4ffd) main_browser_pane_ParamLimits

0x4286,	// (0x0009e9ca) bg_button_pane_cp011_ParamLimits

0x6748,	// (0x000a0e8c) cell_vitu2_function_pane_g1_ParamLimits

0xc909,	// (0x000a704d) bg_popup_sub_pane_cp22_ParamLimits

0x7078,	// (0x000a17bc) input_focus_pane_cp08_ParamLimits

0x708f,	// (0x000a17d3) popup_vitu2_query_button_pane_ParamLimits

0x708f,	// (0x000a17d3) popup_vitu2_query_button_pane

0x70a0,	// (0x000a17e4) popup_vitu2_query_input_button_pane

0xd947,	// (0x000a808b) popup_vitu2_query_window_g1_ParamLimits

0x70aa,	// (0x000a17ee) popup_vitu2_query_window_g2_ParamLimits

0xf82b,	// (0x000a9f6f) popup_vitu2_query_window_g_ParamLimits

0x9cc5,	// (0x000a4409) bg_button_pane_cp026

0x7796,	// (0x000a1eda) popup_vitu2_query_input_button_pane_g1

0x9cc5,	// (0x000a4409) bg_button_pane_cp025

0xdd0a,	// (0x000a844e) popup_vitu2_query_button_pane_t1

0x4d05,	// (0x0009f449) main_mp3_pane_t6

0x4d15,	// (0x0009f459) popup_slider_window_cp01

0x6378,	// (0x000a0abc) cam4_battery_pane

0x6458,	// (0x000a0b9c) cam4_battery_pane_cp02

0x74db,	// (0x000a1c1f) cam4_battery_pane_cp01

0x74db,	// (0x000a1c1f) cam4_battery_pane_cp03

0xd99b,	// (0x000a80df) cam4_battery_pane_g1

0xcd11,	// (0x000a7455) cam4_battery_pane_g2

0x0001,

0xf92f,	// (0x000aa073) cam4_battery_pane_g

0xcbdd,	// (0x000a7321) popup_blid_sat_info2_window_t11

0xb348,	// (0x000a5a8c) aid_size_touch_mv_arrow_left_ParamLimits

0xb371,	// (0x000a5ab5) aid_size_touch_mv_arrow_right_ParamLimits

0xb3cf,	// (0x000a5b13) navi_pane_g1_ParamLimits

0xb3db,	// (0x000a5b1f) navi_pane_g2_ParamLimits

0xb409,	// (0x000a5b4d) navi_pane_g3_ParamLimits

0x0115,	// (0x0009a859) navi_pane_g_ParamLimits

0x34fe,	// (0x0009dc42) navi_pane_mv_t1_ParamLimits

0x582b,	// (0x0009ff6f) grid_imed_effect_pane_ParamLimits

0x1ee8,	// (0x0009c62c) aid_placing_vt_slider_lsc

0xab1e,	// (0x000a5262) aid_placing_vt_slider_prt

0xa478,	// (0x000a4bbc) bg_tb_trans_pane_cp01_ParamLimits

0xce94,	// (0x000a75d8) popup_image_details_window_g1_ParamLimits

0xcea7,	// (0x000a75eb) popup_image_details_window_g2_ParamLimits

0xcebc,	// (0x000a7600) popup_image_details_window_g3_ParamLimits

0xcebc,	// (0x000a7600) popup_image_details_window_g3

0x0448,	// (0x0009ab8c) popup_image_details_window_g_ParamLimits

0xced0,	// (0x000a7614) popup_image_details_window_t1_ParamLimits

0xcee2,	// (0x000a7626) popup_image_details_window_t2_ParamLimits

0xcefb,	// (0x000a763f) popup_image_details_window_t3_ParamLimits

0xcf0f,	// (0x000a7653) popup_image_details_window_t4_ParamLimits

0xcf2a,	// (0x000a766e) popup_image_details_window_t5_ParamLimits

0x044f,	// (0x0009ab93) popup_image_details_window_t_ParamLimits

0x73ff,	// (0x000a1b43) cl_header_name_pane_ParamLimits

0x73ff,	// (0x000a1b43) cl_header_name_pane

0x779e,	// (0x000a1ee2) cl_header_name_pane_t1_ParamLimits

0x779e,	// (0x000a1ee2) cl_header_name_pane_t1

0x77b5,	// (0x000a1ef9) cl_header_name_pane_t2_ParamLimits

0x77b5,	// (0x000a1ef9) cl_header_name_pane_t2

0x77df,	// (0x000a1f23) cl_header_name_pane_t3_ParamLimits

0x77df,	// (0x000a1f23) cl_header_name_pane_t3

0x0002,

0xf934,	// (0x000aa078) cl_header_name_pane_t_ParamLimits

0xf934,	// (0x000aa078) cl_header_name_pane_t

0xb498,	// (0x000a5bdc) navi_pane_mv_g2_ParamLimits

0xd6b0,	// (0x000a7df4) field_vitu2_entry_pane_g1_ParamLimits

0xd6bc,	// (0x000a7e00) field_vitu2_entry_pane_g2_ParamLimits

0xd6c8,	// (0x000a7e0c) field_vitu2_entry_pane_g3_ParamLimits

0xd6c8,	// (0x000a7e0c) field_vitu2_entry_pane_g3

0x064f,	// (0x0009ad93) field_vitu2_entry_pane_g_ParamLimits

0x66dc,	// (0x000a0e20) cell_vitu2_itu_pane_g1_ParamLimits

0x66ee,	// (0x000a0e32) cell_vitu2_itu_pane_g2_ParamLimits

0x66ee,	// (0x000a0e32) cell_vitu2_itu_pane_g2

0x0001,

0xf756,	// (0x000a9e9a) cell_vitu2_itu_pane_g_ParamLimits

0xf756,	// (0x000a9e9a) cell_vitu2_itu_pane_g

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp05_ParamLimits

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp05

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp03

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp04

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp10_ParamLimits

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp10

0x73a1,	// (0x000a1ae5) bg_vkb2_func_pane_cp08

0x7387,	// (0x000a1acb) bg_vkb2_func_pane_cp06

0x7395,	// (0x000a1ad9) bg_vkb2_func_pane_cp07

0xdc18,	// (0x000a835c) bg_vkb2_func_pane_cp11_ParamLimits

0xdc18,	// (0x000a835c) bg_vkb2_func_pane_cp11

0xdc2d,	// (0x000a8371) bg_vkb2_func_pane_cp12_ParamLimits

0xdc2d,	// (0x000a8371) bg_vkb2_func_pane_cp12

0x9cc5,	// (0x000a4409) bg_vkb2_func_pane_cp09

0xd6e8,	// (0x000a7e2c) bg_vkb2_func_pane_g1

0xace0,	// (0x000a5424) bg_vkb2_func_pane_g2

0xd6f0,	// (0x000a7e34) bg_vkb2_func_pane_g3

0xd6f8,	// (0x000a7e3c) bg_vkb2_func_pane_g4

0xd90c,	// (0x000a8050) bg_vkb2_func_pane_g5

0xd710,	// (0x000a7e54) bg_vkb2_func_pane_g6

0xd718,	// (0x000a7e5c) bg_vkb2_func_pane_g7

0xd708,	// (0x000a7e4c) bg_vkb2_func_pane_g8

0xacc0,	// (0x000a5404) bg_vkb2_func_pane_g9

0x0008,

0xf93b,	// (0x000aa07f) bg_vkb2_func_pane_g

0x76ed,	// (0x000a1e31) blid2_tripm_pane_g6_ParamLimits

0x76ed,	// (0x000a1e31) blid2_tripm_pane_g6

0xd602,	// (0x000a7d46) mp4_progress_pane_g1

0x7747,	// (0x000a1e8b) blid2_tripm_values_pane_ParamLimits

0x7747,	// (0x000a1e8b) blid2_tripm_values_pane

0x7804,	// (0x000a1f48) blid2_tripm_values_pane_t1

0x7812,	// (0x000a1f56) blid2_tripm_values_pane_t2

0x7820,	// (0x000a1f64) blid2_tripm_values_pane_t3

0x782e,	// (0x000a1f72) blid2_tripm_values_pane_t4

0x783c,	// (0x000a1f80) blid2_tripm_values_pane_t5

0x784a,	// (0x000a1f8e) blid2_tripm_values_pane_t6

0x7858,	// (0x000a1f9c) blid2_tripm_values_pane_t7

0x7866,	// (0x000a1faa) blid2_tripm_values_pane_t8

0x7874,	// (0x000a1fb8) blid2_tripm_values_pane_t9

0x0008,

0xf94e,	// (0x000aa092) blid2_tripm_values_pane_t

0x1f28,	// (0x0009c66c) call_video_pane_t1_ParamLimits

0x1f49,	// (0x0009c68d) call_video_pane_t2_ParamLimits

0xf253,	// (0x000a9997) call_video_pane_t_ParamLimits

0x3a3f,	// (0x0009e183) msg_header_pane_g1_ParamLimits

0xb680,	// (0x000a5dc4) msg_header_pane_g2_ParamLimits

0xb680,	// (0x000a5dc4) msg_header_pane_g2

0x0001,

0xf453,	// (0x000a9b97) msg_header_pane_g_ParamLimits

0xf453,	// (0x000a9b97) msg_header_pane_g

0xa8b9,	// (0x000a4ffd) main_clock2_pane_ParamLimits

0x55a5,	// (0x0009fce9) grid_clock2_toolbar_pane_ParamLimits

0x55a5,	// (0x0009fce9) grid_clock2_toolbar_pane

0x55a5,	// (0x0009fce9) listscroll_clock2_pane_ParamLimits

0x55a5,	// (0x0009fce9) listscroll_clock2_pane

0x5655,	// (0x0009fd99) main_clock2_pane_t3_ParamLimits

0x5655,	// (0x0009fd99) main_clock2_pane_t3

0x5667,	// (0x0009fdab) main_clock2_pane_t4_ParamLimits

0x5667,	// (0x0009fdab) main_clock2_pane_t4

0xdd18,	// (0x000a845c) cell_clock2_toolbar_pane

0xdd20,	// (0x000a8464) cell_clock2_toolbar_pane_cp01

0xdd20,	// (0x000a8464) cell_clock2_toolbar_pane_cp02

0xdd28,	// (0x000a846c) cell_clock2_toolbar_pane_cp03

0xdd30,	// (0x000a8474) list_clock2_pane

0xb2ac,	// (0x000a59f0) scroll_pane_cp10

0xdd38,	// (0x000a847c) list_single_clock2_pane_ParamLimits

0xdd38,	// (0x000a847c) list_single_clock2_pane

0xaa87,	// (0x000a51cb) list_highlight_pane_cp08

0xdd45,	// (0x000a8489) list_single_clock2_pane_t1

0xdd53,	// (0x000a8497) list_single_clock2_pane_t2

0x0001,

0xf961,	// (0x000aa0a5) list_single_clock2_pane_t

0x9cc5,	// (0x000a4409) bg_button_pane_cp10

0xdd61,	// (0x000a84a5) cell_clock2_toolbar_pane_g1

0x3adc,	// (0x0009e220) aid_main_viewer_pane_g1_ParamLimits

0x3adc,	// (0x0009e220) aid_main_viewer_pane_g1

0x3ae8,	// (0x0009e22c) aid_main_viewer_pane_g2_ParamLimits

0x3ae8,	// (0x0009e22c) aid_main_viewer_pane_g2

0x3af4,	// (0x0009e238) aid_main_viewer_pane_g3_ParamLimits

0x3af4,	// (0x0009e238) aid_main_viewer_pane_g3

0x3b05,	// (0x0009e249) aid_main_viewer_pane_g4_ParamLimits

0x3b05,	// (0x0009e249) aid_main_viewer_pane_g4

0x0003,

0xf464,	// (0x000a9ba8) aid_main_viewer_pane_g_ParamLimits

0xf464,	// (0x000a9ba8) aid_main_viewer_pane_g

0x4279,	// (0x0009e9bd) main_calc_pane_ParamLimits

0x4294,	// (0x0009e9d8) main_dialer2_pane_ParamLimits

0x106d,	// (0x0009b7b1) main_cam6_pane

0x106d,	// (0x0009b7b1) main_vid6_pane

0x55b1,	// (0x0009fcf5) listscroll_gen_pane_cp06_ParamLimits

0x55b1,	// (0x0009fcf5) listscroll_gen_pane_cp06

0x5679,	// (0x0009fdbd) main_clock2_pane_t5_ParamLimits

0x5679,	// (0x0009fdbd) main_clock2_pane_t5

0x56c6,	// (0x0009fe0a) aid_call2_pane_cp10_ParamLimits

0x56d8,	// (0x0009fe1c) aid_call_pane_cp10_ParamLimits

0xb33c,	// (0x000a5a80) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb33c,	// (0x000a5a80) popup_clock_analogue_window_cp10_g2_ParamLimits

0x56ea,	// (0x0009fe2e) popup_clock_analogue_window_cp10_g3_ParamLimits

0x56ea,	// (0x0009fe2e) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb33c,	// (0x000a5a80) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf662,	// (0x000a9da6) popup_clock_analogue_window_cp10_g_ParamLimits

0x5700,	// (0x0009fe44) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f12,	// (0x000a0656) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f12,	// (0x000a0656) cell_dialer2_keypad_pane_g2

0x0001,

0xf6f0,	// (0x000a9e34) cell_dialer2_keypad_pane_g_ParamLimits

0xf6f0,	// (0x000a9e34) cell_dialer2_keypad_pane_g

0x5f2e,	// (0x000a0672) cell_dialer2_keypad_pane_t1

0x6a13,	// (0x000a1157) main_cset_text2_pane_ParamLimits

0x6a13,	// (0x000a1157) main_cset_text2_pane

0xdb39,	// (0x000a827d) area_vitu2_query_pane_g1_ParamLimits

0x7326,	// (0x000a1a6a) area_vitu2_query_pane_g2_ParamLimits

0xf87e,	// (0x000a9fc2) area_vitu2_query_pane_g_ParamLimits

0xa198,	// (0x000a48dc) area_vitu2_query_pane_t7_ParamLimits

0xa198,	// (0x000a48dc) area_vitu2_query_pane_t7

0x7387,	// (0x000a1acb) bg_button_pane_cp018_ParamLimits

0x7395,	// (0x000a1ad9) bg_button_pane_cp021_ParamLimits

0x73a1,	// (0x000a1ae5) bg_button_pane_cp022_ParamLimits

0x73a1,	// (0x000a1ae5) bg_vkb2_func_pane_cp08_ParamLimits

0x7387,	// (0x000a1acb) bg_vkb2_func_pane_cp06_ParamLimits

0x7395,	// (0x000a1ad9) bg_vkb2_func_pane_cp07_ParamLimits

0x73b2,	// (0x000a1af6) input_focus_pane_cp09_ParamLimits

0x7882,	// (0x000a1fc6) cam6_autofocus_pane_ParamLimits

0x7882,	// (0x000a1fc6) cam6_autofocus_pane

0x78a4,	// (0x000a1fe8) cam6_image_uncrop_pane_ParamLimits

0x78a4,	// (0x000a1fe8) cam6_image_uncrop_pane

0x78d1,	// (0x000a2015) cam6_indi_pane_ParamLimits

0x78d1,	// (0x000a2015) cam6_indi_pane

0x78eb,	// (0x000a202f) cam6_mode_pane_ParamLimits

0x78eb,	// (0x000a202f) cam6_mode_pane

0x78ff,	// (0x000a2043) cam6_timer_pane_ParamLimits

0x78ff,	// (0x000a2043) cam6_timer_pane

0x790b,	// (0x000a204f) cam6_zoom_pane_ParamLimits

0x790b,	// (0x000a204f) cam6_zoom_pane

0x7923,	// (0x000a2067) cam6_mode_pane_g1_ParamLimits

0x7923,	// (0x000a2067) cam6_mode_pane_g1

0x792f,	// (0x000a2073) cam6_mode_pane_g2_ParamLimits

0x792f,	// (0x000a2073) cam6_mode_pane_g2

0x793b,	// (0x000a207f) cam6_mode_pane_g3_ParamLimits

0x793b,	// (0x000a207f) cam6_mode_pane_g3

0x7947,	// (0x000a208b) cam6_mode_pane_g4_ParamLimits

0x7947,	// (0x000a208b) cam6_mode_pane_g4

0x0003,

0xf966,	// (0x000aa0aa) cam6_mode_pane_g_ParamLimits

0xf966,	// (0x000aa0aa) cam6_mode_pane_g

0xdb9e,	// (0x000a82e2) bg_tb_trans_pane_cp08_ParamLimits

0xdb9e,	// (0x000a82e2) bg_tb_trans_pane_cp08

0xdd69,	// (0x000a84ad) cam6_battery_pane_ParamLimits

0xdd69,	// (0x000a84ad) cam6_battery_pane

0xdd7f,	// (0x000a84c3) cam6_indi_pane_g1_ParamLimits

0xdd7f,	// (0x000a84c3) cam6_indi_pane_g1

0xdd91,	// (0x000a84d5) cam6_indi_pane_g2_ParamLimits

0xdd91,	// (0x000a84d5) cam6_indi_pane_g2

0xdda3,	// (0x000a84e7) cam6_indi_pane_g3_ParamLimits

0xdda3,	// (0x000a84e7) cam6_indi_pane_g3

0x0002,

0x0894,	// (0x0009afd8) cam6_indi_pane_g_ParamLimits

0x0894,	// (0x0009afd8) cam6_indi_pane_g

0xddb5,	// (0x000a84f9) cam6_indi_pane_t1_ParamLimits

0xddb5,	// (0x000a84f9) cam6_indi_pane_t1

0x64d8,	// (0x000a0c1c) cam6_autofocus_pane_g1

0x64d0,	// (0x000a0c14) cam6_autofocus_pane_g2

0x64e8,	// (0x000a0c2c) cam6_autofocus_pane_g3

0x64e0,	// (0x000a0c24) cam6_autofocus_pane_g4

0x0003,

0xf96f,	// (0x000aa0b3) cam6_autofocus_pane_g

0xdddb,	// (0x000a851f) cam6_timer_pane_g1

0xdde3,	// (0x000a8527) cam6_timer_pane_t1

0xddf1,	// (0x000a8535) cam6_zoom_cont_pane

0xddf9,	// (0x000a853d) cam6_zoom_pane_g1

0xde01,	// (0x000a8545) cam6_zoom_pane_g2

0x7953,	// (0x000a2097) cam6_zoom_pane_g3

0x0002,

0xf978,	// (0x000aa0bc) cam6_zoom_pane_g

0xcd11,	// (0x000a7455) cam6_battery_pane_g1

0xcd11,	// (0x000a7455) cam6_battery_pane_g2

0x0001,

0x040c,	// (0x0009ab50) cam6_battery_pane_g

0xde09,	// (0x000a854d) cam6_zoom_cont_pane_g1

0xde12,	// (0x000a8556) cam6_zoom_cont_pane_g2

0xde1b,	// (0x000a855f) cam6_zoom_cont_pane_g3

0x0002,

0x08ab,	// (0x0009afef) cam6_zoom_cont_pane_g

0x7970,	// (0x000a20b4) cam6_mode_pane_cp_ParamLimits

0x7970,	// (0x000a20b4) cam6_mode_pane_cp

0x7984,	// (0x000a20c8) cam6_zoom_pane_cp_ParamLimits

0x7984,	// (0x000a20c8) cam6_zoom_pane_cp

0x799c,	// (0x000a20e0) vid6_image_uncrop_cif_pane_ParamLimits

0x799c,	// (0x000a20e0) vid6_image_uncrop_cif_pane

0x79c8,	// (0x000a210c) vid6_image_uncrop_nhd_pane_ParamLimits

0x79c8,	// (0x000a210c) vid6_image_uncrop_nhd_pane

0x79e5,	// (0x000a2129) vid6_image_uncrop_vga_pane_ParamLimits

0x79e5,	// (0x000a2129) vid6_image_uncrop_vga_pane

0x7a04,	// (0x000a2148) vid6_image_uncrop_wvga_pane_ParamLimits

0x7a04,	// (0x000a2148) vid6_image_uncrop_wvga_pane

0x7a21,	// (0x000a2165) vid6_indi_pane_ParamLimits

0x7a21,	// (0x000a2165) vid6_indi_pane

0xdb9e,	// (0x000a82e2) bg_tb_trans_pane_cp09_ParamLimits

0xdb9e,	// (0x000a82e2) bg_tb_trans_pane_cp09

0xde33,	// (0x000a8577) cam6_battery_pane_cp_ParamLimits

0xde33,	// (0x000a8577) cam6_battery_pane_cp

0xde3f,	// (0x000a8583) vid6_indi_pane_g1_ParamLimits

0xde3f,	// (0x000a8583) vid6_indi_pane_g1

0xde51,	// (0x000a8595) vid6_indi_pane_g2_ParamLimits

0xde51,	// (0x000a8595) vid6_indi_pane_g2

0xde63,	// (0x000a85a7) vid6_indi_pane_g3_ParamLimits

0xde63,	// (0x000a85a7) vid6_indi_pane_g3

0xde78,	// (0x000a85bc) vid6_indi_pane_g4_ParamLimits

0xde78,	// (0x000a85bc) vid6_indi_pane_g4

0xde8d,	// (0x000a85d1) vid6_indi_pane_g5_ParamLimits

0xde8d,	// (0x000a85d1) vid6_indi_pane_g5

0x0004,

0x08b2,	// (0x0009aff6) vid6_indi_pane_g_ParamLimits

0x08b2,	// (0x0009aff6) vid6_indi_pane_g

0xdea7,	// (0x000a85eb) vid6_indi_pane_t1_ParamLimits

0xdea7,	// (0x000a85eb) vid6_indi_pane_t1

0xdebd,	// (0x000a8601) vid6_indi_pane_t2_ParamLimits

0xdebd,	// (0x000a8601) vid6_indi_pane_t2

0xdee5,	// (0x000a8629) vid6_indi_pane_t3_ParamLimits

0xdee5,	// (0x000a8629) vid6_indi_pane_t3

0xdf0d,	// (0x000a8651) vid6_indi_pane_t4_ParamLimits

0xdf0d,	// (0x000a8651) vid6_indi_pane_t4

0x0003,

0x08bd,	// (0x0009b001) vid6_indi_pane_t_ParamLimits

0x08bd,	// (0x0009b001) vid6_indi_pane_t

0xdf31,	// (0x000a8675) wait_bar_pane_cp08

0x7a46,	// (0x000a218a) main_cset_text2_pane_t1_ParamLimits

0x7a46,	// (0x000a218a) main_cset_text2_pane_t1

0x795b,	// (0x000a209f) listscroll_gen_pane_cp06_t1_ParamLimits

0x795b,	// (0x000a209f) listscroll_gen_pane_cp06_t1

0x106d,	// (0x0009b7b1) main_cam6_set_pane

0x636a,	// (0x000a0aae) bg_tb_trans_pane_cp06_ParamLimits

0x6380,	// (0x000a0ac4) cam4_indicators_pane_g1_ParamLimits

0x6391,	// (0x000a0ad5) cam4_indicators_pane_g2_ParamLimits

0xf72d,	// (0x000a9e71) cam4_indicators_pane_g_ParamLimits

0x63af,	// (0x000a0af3) cam4_indicators_pane_t1_ParamLimits

0x4286,	// (0x0009e9ca) bg_tb_trans_pane_cp07_ParamLimits

0x6462,	// (0x000a0ba6) vid4_indicators_pane_g1_ParamLimits

0x6476,	// (0x000a0bba) vid4_indicators_pane_g2_ParamLimits

0x648a,	// (0x000a0bce) vid4_indicators_pane_g3_ParamLimits

0x649b,	// (0x000a0bdf) vid4_indicators_pane_g4_ParamLimits

0xf73f,	// (0x000a9e83) vid4_indicators_pane_g_ParamLimits

0x64b9,	// (0x000a0bfd) vid4_indicators_pane_t1_ParamLimits

0x74e3,	// (0x000a1c27) vid4_progress_pane_g1_ParamLimits

0x74f3,	// (0x000a1c37) vid4_progress_pane_g2_ParamLimits

0x7503,	// (0x000a1c47) vid4_progress_pane_g3_ParamLimits

0x7515,	// (0x000a1c59) vid4_progress_pane_g4_ParamLimits

0xf8c9,	// (0x000aa00d) vid4_progress_pane_g_ParamLimits

0x752d,	// (0x000a1c71) vid4_progress_pane_t1_ParamLimits

0x7543,	// (0x000a1c87) vid4_progress_pane_t2_ParamLimits

0x7558,	// (0x000a1c9c) vid4_progress_pane_t3_ParamLimits

0xf8d4,	// (0x000aa018) vid4_progress_pane_t_ParamLimits

0x756d,	// (0x000a1cb1) wait_bar_pane_cp07_ParamLimits

0x7a79,	// (0x000a21bd) main_cam6_set_pane_g2_ParamLimits

0x7a79,	// (0x000a21bd) main_cam6_set_pane_g2

0x7a85,	// (0x000a21c9) main_cset6_listscroll_pane_ParamLimits

0x7a85,	// (0x000a21c9) main_cset6_listscroll_pane

0x7ab0,	// (0x000a21f4) main_cset6_slider_pane_ParamLimits

0x7ab0,	// (0x000a21f4) main_cset6_slider_pane

0x7abc,	// (0x000a2200) main_cset6_text2_pane_ParamLimits

0x7abc,	// (0x000a2200) main_cset6_text2_pane

0xdf40,	// (0x000a8684) main_cset6_text_pane

0xdf48,	// (0x000a868c) main_cset_list_pane_copy1_ParamLimits

0xdf48,	// (0x000a868c) main_cset_list_pane_copy1

0xdf58,	// (0x000a869c) scroll_pane_cp028_copy1

0x7acf,	// (0x000a2213) cset_list_set_pane_copy1

0x7ae2,	// (0x000a2226) aid_position_infowindow_above_copy1

0x7aea,	// (0x000a222e) aid_position_infowindow_below_copy1

0x7af2,	// (0x000a2236) cset_list_set_pane_g1_copy1

0xa0fc,	// (0x000a4840) cset_list_set_pane_g3_copy1_ParamLimits

0xa0fc,	// (0x000a4840) cset_list_set_pane_g3_copy1

0xa10b,	// (0x000a484f) cset_list_set_pane_t1_copy1_ParamLimits

0xa10b,	// (0x000a484f) cset_list_set_pane_t1_copy1

0xa478,	// (0x000a4bbc) list_highlight_pane_cp021_copy1_ParamLimits

0xa478,	// (0x000a4bbc) list_highlight_pane_cp021_copy1

0xdf61,	// (0x000a86a5) cset6_slider_pane_ParamLimits

0xdf61,	// (0x000a86a5) cset6_slider_pane

0xdf8d,	// (0x000a86d1) main_cset6_slider_pane_g1_ParamLimits

0xdf8d,	// (0x000a86d1) main_cset6_slider_pane_g1

0x7afa,	// (0x000a223e) main_cset6_slider_pane_g2_ParamLimits

0x7afa,	// (0x000a223e) main_cset6_slider_pane_g2

0xdfb5,	// (0x000a86f9) main_cset6_slider_pane_g3_ParamLimits

0xdfb5,	// (0x000a86f9) main_cset6_slider_pane_g3

0x7b22,	// (0x000a2266) main_cset6_slider_pane_g4_ParamLimits

0x7b22,	// (0x000a2266) main_cset6_slider_pane_g4

0x7b2e,	// (0x000a2272) main_cset6_slider_pane_g5_ParamLimits

0x7b2e,	// (0x000a2272) main_cset6_slider_pane_g5

0xd817,	// (0x000a7f5b) main_cset6_slider_pane_g7_ParamLimits

0xd817,	// (0x000a7f5b) main_cset6_slider_pane_g7

0xd823,	// (0x000a7f67) main_cset6_slider_pane_g8_ParamLimits

0xd823,	// (0x000a7f67) main_cset6_slider_pane_g8

0x7b3c,	// (0x000a2280) main_cset6_slider_pane_g9_ParamLimits

0x7b3c,	// (0x000a2280) main_cset6_slider_pane_g9

0x7b48,	// (0x000a228c) main_cset6_slider_pane_g10_ParamLimits

0x7b48,	// (0x000a228c) main_cset6_slider_pane_g10

0x7b54,	// (0x000a2298) main_cset6_slider_pane_g11_ParamLimits

0x7b54,	// (0x000a2298) main_cset6_slider_pane_g11

0x7b60,	// (0x000a22a4) main_cset6_slider_pane_g12_ParamLimits

0x7b60,	// (0x000a22a4) main_cset6_slider_pane_g12

0x7b6c,	// (0x000a22b0) main_cset6_slider_pane_g13_ParamLimits

0x7b6c,	// (0x000a22b0) main_cset6_slider_pane_g13

0x7b78,	// (0x000a22bc) main_cset6_slider_pane_g14_ParamLimits

0x7b78,	// (0x000a22bc) main_cset6_slider_pane_g14

0x7b84,	// (0x000a22c8) main_cset6_slider_pane_g15_ParamLimits

0x7b84,	// (0x000a22c8) main_cset6_slider_pane_g15

0x7b9c,	// (0x000a22e0) main_cset6_slider_pane_g16_ParamLimits

0x7b9c,	// (0x000a22e0) main_cset6_slider_pane_g16

0x7baa,	// (0x000a22ee) main_cset6_slider_pane_g17_ParamLimits

0x7baa,	// (0x000a22ee) main_cset6_slider_pane_g17

0x0011,

0xf97f,	// (0x000aa0c3) main_cset6_slider_pane_g_ParamLimits

0xf97f,	// (0x000aa0c3) main_cset6_slider_pane_g

0xdfc1,	// (0x000a8705) main_cset6_slider_pane_t1_ParamLimits

0xdfc1,	// (0x000a8705) main_cset6_slider_pane_t1

0x7bd0,	// (0x000a2314) main_cset6_slider_pane_t2_ParamLimits

0x7bd0,	// (0x000a2314) main_cset6_slider_pane_t2

0x7bfb,	// (0x000a233f) main_cset6_slider_pane_t3_ParamLimits

0x7bfb,	// (0x000a233f) main_cset6_slider_pane_t3

0x7c26,	// (0x000a236a) main_cset6_slider_pane_t4_ParamLimits

0x7c26,	// (0x000a236a) main_cset6_slider_pane_t4

0x7c51,	// (0x000a2395) main_cset6_slider_pane_t5_ParamLimits

0x7c51,	// (0x000a2395) main_cset6_slider_pane_t5

0xe002,	// (0x000a8746) main_cset6_slider_pane_t7_ParamLimits

0xe002,	// (0x000a8746) main_cset6_slider_pane_t7

0x7c7e,	// (0x000a23c2) main_cset6_slider_pane_t8_ParamLimits

0x7c7e,	// (0x000a23c2) main_cset6_slider_pane_t8

0x7ca2,	// (0x000a23e6) main_cset6_slider_pane_t9_ParamLimits

0x7ca2,	// (0x000a23e6) main_cset6_slider_pane_t9

0x7cc6,	// (0x000a240a) main_cset6_slider_pane_t10_ParamLimits

0x7cc6,	// (0x000a240a) main_cset6_slider_pane_t10

0x7cea,	// (0x000a242e) main_cset6_slider_pane_t11_ParamLimits

0x7cea,	// (0x000a242e) main_cset6_slider_pane_t11

0xe038,	// (0x000a877c) main_cset6_slider_pane_t14_ParamLimits

0xe038,	// (0x000a877c) main_cset6_slider_pane_t14

0xe071,	// (0x000a87b5) main_cset6_slider_pane_t15_ParamLimits

0xe071,	// (0x000a87b5) main_cset6_slider_pane_t15

0x000b,

0xf9a4,	// (0x000aa0e8) main_cset6_slider_pane_t_ParamLimits

0xf9a4,	// (0x000aa0e8) main_cset6_slider_pane_t

0xdb65,	// (0x000a82a9) cset_slider_pane_g1_copy1

0xdb6e,	// (0x000a82b2) cset_slider_pane_g2_copy1

0xdb77,	// (0x000a82bb) cset_slider_pane_g3_copy1

0x9cc5,	// (0x000a4409) bg_popup_sub_pane_cp011_copy1

0xe0aa,	// (0x000a87ee) main_cset_text_pane_g1_copy1

0xd95b,	// (0x000a809f) main_cset_text_pane_t1_copy1

0xd969,	// (0x000a80ad) main_cset_text_pane_t2_copy1

0xd977,	// (0x000a80bb) main_cset_text_pane_t3_copy1

0xd985,	// (0x000a80c9) main_cset_text_pane_t4_copy1

0xd9a5,	// (0x000a80e9) main_cset_text_pane_t5_copy1

0xe0b2,	// (0x000a87f6) main_cset_text_pane_t6_copy1

0xe0c0,	// (0x000a8804) main_cset_text_pane_t7_copy1

0x7de6,	// (0x000a252a) main_cset_text2_pane_t1_copy1

0x4286,	// (0x0009e9ca) main_ncimui_pane

0x42e5,	// (0x0009ea29) popup_query_ncimui_window_ParamLimits

0x42e5,	// (0x0009ea29) popup_query_ncimui_window

0xa486,	// (0x000a4bca) field_cale_ev2_pane_g4_ParamLimits

0xa486,	// (0x000a4bca) field_cale_ev2_pane_g4

0x5bf2,	// (0x000a0336) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5bf2,	// (0x000a0336) cell_video_dialer_keypad_pane_g2

0x0001,

0xf6cc,	// (0x000a9e10) cell_video_dialer_keypad_pane_g_ParamLimits

0xf6cc,	// (0x000a9e10) cell_video_dialer_keypad_pane_g

0x5c0a,	// (0x000a034e) cell_video_dialer_keypad_pane_t1

0x9cc5,	// (0x000a4409) bg_popup_window_pane_cp012

0xb179,	// (0x000a58bd) heading_pane_cp06

0xe0ec,	// (0x000a8830) ncim_query_content_pane

0x9cc5,	// (0x000a4409) bg_popup_heading_pane_cp01

0xe0f4,	// (0x000a8838) ncim_heading_pane_t1

0xe102,	// (0x000a8846) ncim_indicator_popup_pane

0xe114,	// (0x000a8858) ncim_query_button_pane

0xe128,	// (0x000a886c) ncim_query_content_pane_t1

0xe13a,	// (0x000a887e) ncim_query_content_pane_t2

0x0005,

0xf9e8,	// (0x000aa12c) ncim_query_content_pane_t

0xe174,	// (0x000a88b8) ncim_query_list_pane

0xe186,	// (0x000a88ca) ncim_query_popup_pane

0xe102,	// (0x000a8846) ncim_indicator_popup_pane_ParamLimits

0x7f39,	// (0x000a267d) ncim_query_content_pane_g1_ParamLimits

0x7f39,	// (0x000a267d) ncim_query_content_pane_g1

0xe128,	// (0x000a886c) ncim_query_content_pane_t1_ParamLimits

0xe13a,	// (0x000a887e) ncim_query_content_pane_t2_ParamLimits

0x7f45,	// (0x000a2689) ncim_query_content_pane_t3_ParamLimits

0x7f45,	// (0x000a2689) ncim_query_content_pane_t3

0x7f62,	// (0x000a26a6) ncim_query_content_pane_t4_ParamLimits

0x7f62,	// (0x000a26a6) ncim_query_content_pane_t4

0x7f7f,	// (0x000a26c3) ncim_query_content_pane_t5_ParamLimits

0x7f7f,	// (0x000a26c3) ncim_query_content_pane_t5

0xe14c,	// (0x000a8890) ncim_query_content_pane_t6_ParamLimits

0xe14c,	// (0x000a8890) ncim_query_content_pane_t6

0xf9e8,	// (0x000aa12c) ncim_query_content_pane_t_ParamLimits

0xe174,	// (0x000a88b8) ncim_query_list_pane_ParamLimits

0xe186,	// (0x000a88ca) ncim_query_popup_pane_ParamLimits

0xe19a,	// (0x000a88de) wait_bar_pane_cp04

0x9cc5,	// (0x000a4409) input_focus_pane_cp011

0xe1a2,	// (0x000a88e6) ncim_query_popup_pane_t1

0xe1b0,	// (0x000a88f4) ncim_list_query_list_pane_ParamLimits

0xe1b0,	// (0x000a88f4) ncim_list_query_list_pane

0x9cc5,	// (0x000a4409) bg_button_pane_cp027

0xe1bd,	// (0x000a8901) ncim_query_button_pane_g1

0x9cc5,	// (0x000a4409) list_highlight_pane_cp012

0xe1c7,	// (0x000a890b) ncim_list_query_list_pane_g1

0xe1cf,	// (0x000a8913) ncim_list_query_list_pane_t1

0x63a0,	// (0x000a0ae4) cam4_indicators_pane_g3_ParamLimits

0x63a0,	// (0x000a0ae4) cam4_indicators_pane_g3

0x64a7,	// (0x000a0beb) vid4_indicators_pane_g5_ParamLimits

0x64a7,	// (0x000a0beb) vid4_indicators_pane_g5

0x7521,	// (0x000a1c65) vid4_progress_pane_g5_ParamLimits

0x7521,	// (0x000a1c65) vid4_progress_pane_g5

0x7e25,	// (0x000a2569) main_ncimui_pane_g1

0x7e8d,	// (0x000a25d1) ncimui_group_query_pane_ParamLimits

0x7e8d,	// (0x000a25d1) ncimui_group_query_pane

0x7ed5,	// (0x000a2619) ncimui_list_pane_ParamLimits

0x7ed5,	// (0x000a2619) ncimui_list_pane

0x7efc,	// (0x000a2640) ncimui_text_pane_ParamLimits

0x7efc,	// (0x000a2640) ncimui_text_pane

0x7f9c,	// (0x000a26e0) ncimui_text_pane_t1_ParamLimits

0x7f9c,	// (0x000a26e0) ncimui_text_pane_t1

0xe1dd,	// (0x000a8921) ncimui_list_single_graphic_pane_ParamLimits

0xe1dd,	// (0x000a8921) ncimui_list_single_graphic_pane

0x7fbb,	// (0x000a26ff) ncimui_query_pane_ParamLimits

0x7fbb,	// (0x000a26ff) ncimui_query_pane

0x9cc5,	// (0x000a4409) list_highlight_pane_cp013

0xe1ed,	// (0x000a8931) ncim_list_query_list_pane_t1_copy1

0xe1c7,	// (0x000a890b) ncim_list_single_graphic_pane_g1

0x7fce,	// (0x000a2712) ncim_query_button_pane_cp01

0x7fda,	// (0x000a271e) ncim_query_entry_pane_ParamLimits

0x7fda,	// (0x000a271e) ncim_query_entry_pane

0x7fed,	// (0x000a2731) ncimui_query_pane_g1

0x7ff9,	// (0x000a273d) ncimui_query_pane_t1_ParamLimits

0x7ff9,	// (0x000a273d) ncimui_query_pane_t1

0xa478,	// (0x000a4bbc) input_focus_pane_cp012

0xe1fb,	// (0x000a893f) ncim_query_entry_pane_t1

0xa8b9,	// (0x000a4ffd) main_im_pane_ParamLimits

0x4286,	// (0x0009e9ca) main_mobtv_pane_ParamLimits

0x4286,	// (0x0009e9ca) main_mobtv_pane

0x7bb8,	// (0x000a22fc) main_cset6_slider_pane_g18_ParamLimits

0x7bb8,	// (0x000a22fc) main_cset6_slider_pane_g18

0x7bc4,	// (0x000a2308) main_cset6_slider_pane_g19_ParamLimits

0x7bc4,	// (0x000a2308) main_cset6_slider_pane_g19

0xd6c8,	// (0x000a7e0c) bg_main_mobtv_pane_ParamLimits

0xd6c8,	// (0x000a7e0c) bg_main_mobtv_pane

0x8012,	// (0x000a2756) main_mobtv_info_pane

0x801d,	// (0x000a2761) main_mobtv_loading_pane_ParamLimits

0x801d,	// (0x000a2761) main_mobtv_loading_pane

0xe20d,	// (0x000a8951) main_mobtv_pg_channel_list_pane

0xe217,	// (0x000a895b) main_mobtv_pg_hdr_pane

0x802a,	// (0x000a276e) main_mobtv_programe_curr_pane_ParamLimits

0x802a,	// (0x000a276e) main_mobtv_programe_curr_pane

0x8037,	// (0x000a277b) main_mobtv_programe_next_pane_ParamLimits

0x8037,	// (0x000a277b) main_mobtv_programe_next_pane

0xe220,	// (0x000a8964) popup_mobtv_noti_window

0xcd11,	// (0x000a7455) main_tv_pg_hdr_pane_g1

0xe228,	// (0x000a896c) main_tv_pg_hdr_pane_g2

0xe230,	// (0x000a8974) main_tv_pg_hdr_pane_g3

0xe238,	// (0x000a897c) main_tv_pg_hdr_pane_g4

0xe240,	// (0x000a8984) main_tv_pg_hdr_pane_g5

0xe24a,	// (0x000a898e) main_tv_pg_hdr_pane_g6

0xe254,	// (0x000a8998) main_tv_pg_hdr_pane_g7

0xe25e,	// (0x000a89a2) main_tv_pg_hdr_pane_g8

0xe268,	// (0x000a89ac) main_tv_pg_hdr_pane_g9

0xe272,	// (0x000a89b6) main_tv_pg_hdr_pane_g10

0xe27c,	// (0x000a89c0) main_tv_pg_hdr_pane_g11

0x000a,

0x093c,	// (0x0009b080) main_tv_pg_hdr_pane_g

0xe286,	// (0x000a89ca) main_tv_pg_hdr_pane_t1

0xe294,	// (0x000a89d8) main_tv_pg_hdr_pane_t2

0xe2a2,	// (0x000a89e6) main_tv_pg_hdr_pane_t3

0xe2b2,	// (0x000a89f6) main_tv_pg_hdr_pane_t4

0xe2c2,	// (0x000a8a06) main_tv_pg_hdr_pane_t5

0x0004,

0x0953,	// (0x0009b097) main_tv_pg_hdr_pane_t

0xe2d2,	// (0x000a8a16) single_mobtv_pg_channel_pane_ParamLimits

0xe2d2,	// (0x000a8a16) single_mobtv_pg_channel_pane

0xe2e4,	// (0x000a8a28) single_mobtv_pg_channel_table_pane

0xe2ed,	// (0x000a8a31) single_mobtv_pg_channel_thumb_pane

0xe2f6,	// (0x000a8a3a) single_tv_pg_channel_pane_g1

0xe2ff,	// (0x000a8a43) single_tv_pg_channel_pane_g2

0x0001,

0x095e,	// (0x0009b0a2) single_tv_pg_channel_pane_g

0xcf74,	// (0x000a76b8) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf74,	// (0x000a76b8) bg_single_mobtv_pg_channel_thumb_pane

0xe308,	// (0x000a8a4c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe308,	// (0x000a8a4c) single_mobtv_pg_channel_thumb_pane_g1

0xe316,	// (0x000a8a5a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe316,	// (0x000a8a5a) single_mobtv_pg_channel_thumb_pane_g2

0xe322,	// (0x000a8a66) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe322,	// (0x000a8a66) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0963,	// (0x0009b0a7) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0963,	// (0x0009b0a7) single_mobtv_pg_channel_thumb_pane_g

0xe32e,	// (0x000a8a72) single_mobtv_pg_channel_thumb_pane_t1

0xe33c,	// (0x000a8a80) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x096a,	// (0x0009b0ae) single_mobtv_pg_channel_thumb_pane_t

0xcd11,	// (0x000a7455) bg_single_mobtv_pg_channel_table_pane_g1

0xcd11,	// (0x000a7455) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x040c,	// (0x0009ab50) bg_single_mobtv_pg_channel_table_pane_g

0xe34a,	// (0x000a8a8e) single_mobtv_pg_channel_table_pane_t1

0xe358,	// (0x000a8a9c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x096f,	// (0x0009b0b3) single_mobtv_pg_channel_table_pane_t

0x804c,	// (0x000a2790) main_mobtv_info_pane_g1_ParamLimits

0x804c,	// (0x000a2790) main_mobtv_info_pane_g1

0x8068,	// (0x000a27ac) main_mobtv_info_pane_t1_ParamLimits

0x8068,	// (0x000a27ac) main_mobtv_info_pane_t1

0x80e0,	// (0x000a2824) main_mobtv_info_pane_t2_ParamLimits

0x80e0,	// (0x000a2824) main_mobtv_info_pane_t2

0x0002,

0xf9fa,	// (0x000aa13e) main_mobtv_info_pane_t_ParamLimits

0xf9fa,	// (0x000aa13e) main_mobtv_info_pane_t

0x816f,	// (0x000a28b3) wait_bar_pane_cp05

0x8181,	// (0x000a28c5) main_mobtv_loading_pane_g1_ParamLimits

0x8181,	// (0x000a28c5) main_mobtv_loading_pane_g1

0x818f,	// (0x000a28d3) main_mobtv_loading_pane_g2_ParamLimits

0x818f,	// (0x000a28d3) main_mobtv_loading_pane_g2

0x819b,	// (0x000a28df) main_mobtv_loading_pane_g3_ParamLimits

0x819b,	// (0x000a28df) main_mobtv_loading_pane_g3

0x0002,

0xfa01,	// (0x000aa145) main_mobtv_loading_pane_g_ParamLimits

0xfa01,	// (0x000aa145) main_mobtv_loading_pane_g

0xe366,	// (0x000a8aaa) main_mobtv_loading_pane_t1_ParamLimits

0xe366,	// (0x000a8aaa) main_mobtv_loading_pane_t1

0xe37e,	// (0x000a8ac2) main_mobtv_loading_pane_t2_ParamLimits

0xe37e,	// (0x000a8ac2) main_mobtv_loading_pane_t2

0x0001,

0x0987,	// (0x0009b0cb) main_mobtv_loading_pane_t_ParamLimits

0x0987,	// (0x0009b0cb) main_mobtv_loading_pane_t

0x81a9,	// (0x000a28ed) wait_bar_pane_cp06_ParamLimits

0x81a9,	// (0x000a28ed) wait_bar_pane_cp06

0xe3a2,	// (0x000a8ae6) main_mobtv_programe_curr_pane_t1

0xe3b0,	// (0x000a8af4) main_mobtv_programe_curr_pane_t2

0x0001,

0x098c,	// (0x0009b0d0) main_mobtv_programe_curr_pane_t

0xe3be,	// (0x000a8b02) main_mobtv_programe_next_pane_t1

0xe3cc,	// (0x000a8b10) main_mobtv_programe_next_pane_t2

0xe3da,	// (0x000a8b1e) main_mobtv_programe_next_pane_t3

0x0002,

0x0991,	// (0x0009b0d5) main_mobtv_programe_next_pane_t

0x9cc5,	// (0x000a4409) bg_popup_mobtv_noti_window_pane

0xe3e8,	// (0x000a8b2c) popup_mobtv_noti_window_g1

0xe3f0,	// (0x000a8b34) popup_mobtv_noti_window_t1

0xe3fe,	// (0x000a8b42) popup_mobtv_noti_window_t2

0x0001,

0x0998,	// (0x0009b0dc) popup_mobtv_noti_window_t

0xcd11,	// (0x000a7455) bg_popup_mobtv_noti_window_pane_g1

0x106d,	// (0x0009b7b1) sc_clock_pane

0x106d,	// (0x0009b7b1) main_fs_bigclock_pane

0x7735,	// (0x000a1e79) blid2_tripm_pane_t4_ParamLimits

0x7735,	// (0x000a1e79) blid2_tripm_pane_t4

0x81b5,	// (0x000a28f9) sc_clock_pane_g1_ParamLimits

0x81b5,	// (0x000a28f9) sc_clock_pane_g1

0x81c3,	// (0x000a2907) sc_clock_pane_t1_ParamLimits

0x81c3,	// (0x000a2907) sc_clock_pane_t1

0x81d6,	// (0x000a291a) sc_clock_pane_t2_ParamLimits

0x81d6,	// (0x000a291a) sc_clock_pane_t2

0x81e8,	// (0x000a292c) sc_clock_pane_t3_ParamLimits

0x81e8,	// (0x000a292c) sc_clock_pane_t3

0x0004,

0xfa08,	// (0x000aa14c) sc_clock_pane_t_ParamLimits

0xfa08,	// (0x000aa14c) sc_clock_pane_t

0x9172,	// (0x000a38b6) main_fs_bigclock_indicator_pane_ParamLimits

0x9172,	// (0x000a38b6) main_fs_bigclock_indicator_pane

0x826b,	// (0x000a29af) main_fs_bigclock_pane_g1_ParamLimits

0x826b,	// (0x000a29af) main_fs_bigclock_pane_g1

0x917e,	// (0x000a38c2) main_fs_bigclock_pane_t1_ParamLimits

0x917e,	// (0x000a38c2) main_fs_bigclock_pane_t1

0x9190,	// (0x000a38d4) main_fs_bigclock_pane_t2_ParamLimits

0x9190,	// (0x000a38d4) main_fs_bigclock_pane_t2

0x91a4,	// (0x000a38e8) main_fs_bigclock_pane_t3_ParamLimits

0x91a4,	// (0x000a38e8) main_fs_bigclock_pane_t3

0x0002,

0xfb84,	// (0x000aa2c8) main_fs_bigclock_pane_t_ParamLimits

0xfb84,	// (0x000aa2c8) main_fs_bigclock_pane_t

0xec38,	// (0x000a937c) main_fs_bigclock_indicator_pane_g1

0xe11c,	// (0x000a8860) ncim_query_content_pane_g2_ParamLimits

0xe11c,	// (0x000a8860) ncim_query_content_pane_g2

0x0001,

0xf9e3,	// (0x000aa127) ncim_query_content_pane_g_ParamLimits

0xf9e3,	// (0x000aa127) ncim_query_content_pane_g

0x81fc,	// (0x000a2940) sc_clock_pane_t4_ParamLimits

0x81fc,	// (0x000a2940) sc_clock_pane_t4

0x4286,	// (0x0009e9ca) main_radioblah_pane

0x6235,	// (0x000a0979) cell_call4_button_pane_t1_copy1_ParamLimits

0x6235,	// (0x000a0979) cell_call4_button_pane_t1_copy1

0x7e3f,	// (0x000a2583) main_ncimui_pane_t1_ParamLimits

0x7e3f,	// (0x000a2583) main_ncimui_pane_t1

0x7e59,	// (0x000a259d) main_ncimui_pane_t2_ParamLimits

0x7e59,	// (0x000a259d) main_ncimui_pane_t2

0x0002,

0xf9dc,	// (0x000aa120) main_ncimui_pane_t_ParamLimits

0xf9dc,	// (0x000aa120) main_ncimui_pane_t

0xe543,	// (0x000a8c87) main_radioblah_anim_pane_ParamLimits

0xe543,	// (0x000a8c87) main_radioblah_anim_pane

0xe554,	// (0x000a8c98) main_radioblah_info_pane_ParamLimits

0xe554,	// (0x000a8c98) main_radioblah_info_pane

0xe568,	// (0x000a8cac) main_radioblah_pane_t1_ParamLimits

0xe568,	// (0x000a8cac) main_radioblah_pane_t1

0xe584,	// (0x000a8cc8) main_radioblah_pane_t2_ParamLimits

0xe584,	// (0x000a8cc8) main_radioblah_pane_t2

0x0003,

0x09be,	// (0x0009b102) main_radioblah_pane_t_ParamLimits

0x09be,	// (0x0009b102) main_radioblah_pane_t

0x82c1,	// (0x000a2a05) main_radioblah_rocker_ctrl_pane_ParamLimits

0x82c1,	// (0x000a2a05) main_radioblah_rocker_ctrl_pane

0xe5cc,	// (0x000a8d10) main_radioblah_info_pane_t1_ParamLimits

0xe5cc,	// (0x000a8d10) main_radioblah_info_pane_t1

0x8306,	// (0x000a2a4a) main_radioblah_info_pane_t2_ParamLimits

0x8306,	// (0x000a2a4a) main_radioblah_info_pane_t2

0x0003,

0xfa13,	// (0x000aa157) main_radioblah_info_pane_t_ParamLimits

0xfa13,	// (0x000aa157) main_radioblah_info_pane_t

0xcd11,	// (0x000a7455) main_radioblah_rocker_ctrl_pane_g1

0x83b6,	// (0x000a2afa) main_radioblah_rocker_ctrl_pane_g2

0x83be,	// (0x000a2b02) main_radioblah_rocker_ctrl_pane_g3

0x83c6,	// (0x000a2b0a) main_radioblah_rocker_ctrl_pane_g4

0x83ce,	// (0x000a2b12) main_radioblah_rocker_ctrl_pane_g5

0x83d6,	// (0x000a2b1a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa1c,	// (0x000aa160) main_radioblah_rocker_ctrl_pane_g

0x7de6,	// (0x000a252a) main_cset_text2_pane_t1_copy1_ParamLimits

0x62c0,	// (0x000a0a04) cam4_image_uncrop_qvga_pane

0x6415,	// (0x000a0b59) vid4_image_uncrop_qcif_pane

0x78c3,	// (0x000a2007) cam6_image_uncrop_qvga_pane_ParamLimits

0x78c3,	// (0x000a2007) cam6_image_uncrop_qvga_pane

0xde23,	// (0x000a8567) vid6_image_uncrop_qcif_pane_ParamLimits

0xde23,	// (0x000a8567) vid6_image_uncrop_qcif_pane

0x9cc5,	// (0x000a4409) bg_popup_preview_window_pane_cp03

0xe0ce,	// (0x000a8812) list_cset_text2_pane

0xe0d6,	// (0x000a881a) main_cset6_text2_pane_g1

0xe0de,	// (0x000a8822) main_cset6_text2_pane_t1

0x83de,	// (0x000a2b22) list_cset_text2_pane_t1_ParamLimits

0x83de,	// (0x000a2b22) list_cset_text2_pane_t1

0x4286,	// (0x0009e9ca) main_radioblah_pane_ParamLimits

0x815b,	// (0x000a289f) main_mobtv_info_pane_t3_ParamLimits

0x815b,	// (0x000a289f) main_mobtv_info_pane_t3

0x82af,	// (0x000a29f3) main_radioblah_pane_g1

0x82da,	// (0x000a2a1e) main_radioblah_info_pane_g1

0x835b,	// (0x000a2a9f) main_radioblah_info_pane_t3_ParamLimits

0x835b,	// (0x000a2a9f) main_radioblah_info_pane_t3

0x2f49,	// (0x0009d68d) highlight_cell_cale_month_pane_ParamLimits

0x2f49,	// (0x0009d68d) highlight_cell_cale_month_pane

0x106d,	// (0x0009b7b1) main_phob_fisheye_pane

0xd070,	// (0x000a77b4) scroll_pane_cp0031_ParamLimits

0xd070,	// (0x000a77b4) scroll_pane_cp0031

0xdf31,	// (0x000a8675) wait_bar_pane_cp08_ParamLimits

0x7acf,	// (0x000a2213) cset_list_set_pane_copy1_ParamLimits

0xe606,	// (0x000a8d4a) highlight_cell_cale_month_pane_g1

0x83fb,	// (0x000a2b3f) highlight_cell_cale_month_pane_t1

0xdbd4,	// (0x000a8318) list_gen_pane_cp01

0xd802,	// (0x000a7f46) scroll_pane_01

0x8409,	// (0x000a2b4d) list_single_double_fisheye_pane

0x8412,	// (0x000a2b56) list_double_fisheye_pane_g1_ParamLimits

0x8412,	// (0x000a2b56) list_double_fisheye_pane_g1

0x841e,	// (0x000a2b62) list_double_fisheye_pane_g2_ParamLimits

0x841e,	// (0x000a2b62) list_double_fisheye_pane_g2

0x8432,	// (0x000a2b76) list_double_fisheye_pane_g3_ParamLimits

0x8432,	// (0x000a2b76) list_double_fisheye_pane_g3

0x0004,

0xfa29,	// (0x000aa16d) list_double_fisheye_pane_g_ParamLimits

0xfa29,	// (0x000aa16d) list_double_fisheye_pane_g

0x845b,	// (0x000a2b9f) list_double_fisheye_pane_t1_ParamLimits

0x845b,	// (0x000a2b9f) list_double_fisheye_pane_t1

0x8476,	// (0x000a2bba) list_double_fisheye_pane_t2_ParamLimits

0x8476,	// (0x000a2bba) list_double_fisheye_pane_t2

0x0001,

0xfa34,	// (0x000aa178) list_double_fisheye_pane_t_ParamLimits

0xfa34,	// (0x000aa178) list_double_fisheye_pane_t

0x106d,	// (0x0009b7b1) main_call5_pane

0x8222,	// (0x000a2966) sc_swipe_pane_ParamLimits

0x8222,	// (0x000a2966) sc_swipe_pane

0x84a4,	// (0x000a2be8) call5_image_pane_ParamLimits

0x84a4,	// (0x000a2be8) call5_image_pane

0x84b4,	// (0x000a2bf8) call5_swipe_1_pane_ParamLimits

0x84b4,	// (0x000a2bf8) call5_swipe_1_pane

0x84c0,	// (0x000a2c04) call5_swipe_2_pane_ParamLimits

0x84c0,	// (0x000a2c04) call5_swipe_2_pane

0x84da,	// (0x000a2c1e) popup_call5_audio_first_window_ParamLimits

0x84da,	// (0x000a2c1e) popup_call5_audio_first_window

0xcf74,	// (0x000a76b8) call5_swipe_1_pane_g1_ParamLimits

0xcf74,	// (0x000a76b8) call5_swipe_1_pane_g1

0xe60e,	// (0x000a8d52) call5_swipe_1_pane_g2_ParamLimits

0xe60e,	// (0x000a8d52) call5_swipe_1_pane_g2

0x0001,

0x09ed,	// (0x0009b131) call5_swipe_1_pane_g_ParamLimits

0x09ed,	// (0x0009b131) call5_swipe_1_pane_g

0xe61a,	// (0x000a8d5e) call5_swipe_1_pane_t1_ParamLimits

0xe61a,	// (0x000a8d5e) call5_swipe_1_pane_t1

0xcf74,	// (0x000a76b8) call5_swipe_2_pane_g1_ParamLimits

0xcf74,	// (0x000a76b8) call5_swipe_2_pane_g1

0xe62f,	// (0x000a8d73) call5_swipe_2_pane_g2_ParamLimits

0xe62f,	// (0x000a8d73) call5_swipe_2_pane_g2

0x0001,

0x09f2,	// (0x0009b136) call5_swipe_2_pane_g_ParamLimits

0x09f2,	// (0x0009b136) call5_swipe_2_pane_g

0xe63b,	// (0x000a8d7f) call5_swipe_2_pane_t1_ParamLimits

0xe63b,	// (0x000a8d7f) call5_swipe_2_pane_t1

0xe650,	// (0x000a8d94) sc_swipe_pane_g1_ParamLimits

0xe650,	// (0x000a8d94) sc_swipe_pane_g1

0xe65d,	// (0x000a8da1) sc_swipe_pane_g2_ParamLimits

0xe65d,	// (0x000a8da1) sc_swipe_pane_g2

0x0001,

0x09f7,	// (0x0009b13b) sc_swipe_pane_g_ParamLimits

0x09f7,	// (0x0009b13b) sc_swipe_pane_g

0xe669,	// (0x000a8dad) sc_swipe_pane_t1_ParamLimits

0xe669,	// (0x000a8dad) sc_swipe_pane_t1

0x106d,	// (0x0009b7b1) main_cmail_launcher_pane

0x84e8,	// (0x000a2c2c) aid_size_cell_cmail_l_ParamLimits

0x84e8,	// (0x000a2c2c) aid_size_cell_cmail_l

0x84f6,	// (0x000a2c3a) grid_cmail_l_pane_ParamLimits

0x84f6,	// (0x000a2c3a) grid_cmail_l_pane

0x8506,	// (0x000a2c4a) cell_cmail_l_pane_ParamLimits

0x8506,	// (0x000a2c4a) cell_cmail_l_pane

0xe67e,	// (0x000a8dc2) cell_cmail_l_pane_g1_ParamLimits

0xe67e,	// (0x000a8dc2) cell_cmail_l_pane_g1

0xe68a,	// (0x000a8dce) cell_cmail_l_pane_t1_ParamLimits

0xe68a,	// (0x000a8dce) cell_cmail_l_pane_t1

0xe6a0,	// (0x000a8de4) cell_cmail_l_pane_t2_ParamLimits

0xe6a0,	// (0x000a8de4) cell_cmail_l_pane_t2

0x0001,

0x09fc,	// (0x0009b140) cell_cmail_l_pane_t_ParamLimits

0x09fc,	// (0x0009b140) cell_cmail_l_pane_t

0xa478,	// (0x000a4bbc) grid_highlight_pane_cp018_ParamLimits

0xa478,	// (0x000a4bbc) grid_highlight_pane_cp018

0x0ec3,	// (0x0009b607) main2_pane_ParamLimits

0x0ec3,	// (0x0009b607) main2_pane

0xa952,	// (0x000a5096) popup_sp_fs_action_menu_bg_pane_g1

0xa95a,	// (0x000a509e) popup_sp_fs_action_menu_bg_pane_g2

0xa962,	// (0x000a50a6) popup_sp_fs_action_menu_bg_pane_g3

0xa96a,	// (0x000a50ae) popup_sp_fs_action_menu_bg_pane_g4

0xa972,	// (0x000a50b6) popup_sp_fs_action_menu_bg_pane_g5

0xa97a,	// (0x000a50be) popup_sp_fs_action_menu_bg_pane_g6

0xa982,	// (0x000a50c6) popup_sp_fs_action_menu_bg_pane_g7

0xa98a,	// (0x000a50ce) popup_sp_fs_action_menu_bg_pane_g8

0xa992,	// (0x000a50d6) popup_sp_fs_action_menu_bg_pane_g9

0xa99a,	// (0x000a50de) popup_sp_fs_action_menu_bg_pane_g10

0xa99a,	// (0x000a50de) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf16f,	// (0x000a98b3) popup_sp_fs_action_menu_bg_pane_g

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t3_g3_g1

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t3_g3_g2

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t3_g3_g3

0x0002,

0xf21d,	// (0x000a9961) list_medium_line_x2_t3_g3_g_ParamLimits

0xf21d,	// (0x000a9961) list_medium_line_x2_t3_g3_g

0x1d9f,	// (0x0009c4e3) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1d9f,	// (0x0009c4e3) list_medium_line_x2_t3_g3_t1

0x1db4,	// (0x0009c4f8) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1db4,	// (0x0009c4f8) list_medium_line_x2_t3_g3_t2

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t3_g3_t3

0x0002,

0xf224,	// (0x000a9968) list_medium_line_x2_t3_g3_t_ParamLimits

0xf224,	// (0x000a9968) list_medium_line_x2_t3_g3_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t3_g2_g1

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t3_g2_g2

0x0001,

0xf22b,	// (0x000a996f) list_medium_line_x2_t3_g2_g_ParamLimits

0xf22b,	// (0x000a996f) list_medium_line_x2_t3_g2_g

0x1ddb,	// (0x0009c51f) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ddb,	// (0x0009c51f) list_medium_line_x2_t3_g2_t1

0x1df1,	// (0x0009c535) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1df1,	// (0x0009c535) list_medium_line_x2_t3_g2_t2

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t3_g2_t3

0x0002,

0xf230,	// (0x000a9974) list_medium_line_x2_t3_g2_t_ParamLimits

0xf230,	// (0x000a9974) list_medium_line_x2_t3_g2_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t4_g4_g1

0x1e03,	// (0x0009c547) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e03,	// (0x0009c547) list_medium_line_x2_t4_g4_g2

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t4_g4_g3

0x1e0f,	// (0x0009c553) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1e0f,	// (0x0009c553) list_medium_line_x2_t4_g4_g4

0x0003,

0xf237,	// (0x000a997b) list_medium_line_x2_t4_g4_g_ParamLimits

0xf237,	// (0x000a997b) list_medium_line_x2_t4_g4_g

0x1e1b,	// (0x0009c55f) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e1b,	// (0x0009c55f) list_medium_line_x2_t4_g4_t1

0x1e35,	// (0x0009c579) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e35,	// (0x0009c579) list_medium_line_x2_t4_g4_t2

0x1e4b,	// (0x0009c58f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e4b,	// (0x0009c58f) list_medium_line_x2_t4_g4_t3

0x1e60,	// (0x0009c5a4) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1e60,	// (0x0009c5a4) list_medium_line_x2_t4_g4_t4

0x0003,

0xf240,	// (0x000a9984) list_medium_line_x2_t4_g4_t_ParamLimits

0xf240,	// (0x000a9984) list_medium_line_x2_t4_g4_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t2_g4_g1

0x1e03,	// (0x0009c547) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e03,	// (0x0009c547) list_medium_line_x2_t2_g4_g2

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t2_g4_g3

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2a7,	// (0x000a99eb) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2a7,	// (0x000a99eb) list_medium_line_x2_t2_g4_g

0x2f6f,	// (0x0009d6b3) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2f6f,	// (0x0009d6b3) list_medium_line_x2_t2_g4_t1

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2b0,	// (0x000a99f4) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2b0,	// (0x000a99f4) list_medium_line_x2_t2_g4_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t2_g3_g1

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t2_g3_g2

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t2_g3_g3

0x0002,

0xf21d,	// (0x000a9961) list_medium_line_x2_t2_g3_g_ParamLimits

0xf21d,	// (0x000a9961) list_medium_line_x2_t2_g3_g

0x2f84,	// (0x0009d6c8) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2f84,	// (0x0009d6c8) list_medium_line_x2_t2_g3_t1

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2b5,	// (0x000a99f9) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2b5,	// (0x000a99f9) list_medium_line_x2_t2_g3_t

0x314b,	// (0x0009d88f) main_sp_fs_list_pane_ParamLimits

0x314b,	// (0x0009d88f) main_sp_fs_list_pane

0x3157,	// (0x0009d89b) sp_fs_scroll_pane_ParamLimits

0x3157,	// (0x0009d89b) sp_fs_scroll_pane

0x3163,	// (0x0009d8a7) list_medium_line_x2_t3_t1

0x3173,	// (0x0009d8b7) list_medium_line_x2_t3_t2

0x3181,	// (0x0009d8c5) list_medium_line_x2_t3_t3

0x0002,

0xf300,	// (0x000a9a44) list_medium_line_x2_t3_t

0x318f,	// (0x0009d8d3) list_medium_line_x3_t4_t1

0x319f,	// (0x0009d8e3) list_medium_line_x3_t4_t2

0x31ad,	// (0x0009d8f1) list_medium_line_x3_t4_t3

0x3181,	// (0x0009d8c5) list_medium_line_x3_t4_t4

0x0003,

0xf307,	// (0x000a9a4b) list_medium_line_x3_t4_t

0x31bb,	// (0x0009d8ff) list_medium_line_x4_t5_t1

0x31cb,	// (0x0009d90f) list_medium_line_x4_t5_t2

0x31ad,	// (0x0009d8f1) list_medium_line_x4_t5_t3

0x31d9,	// (0x0009d91d) list_medium_line_x4_t5_t4

0x3181,	// (0x0009d8c5) list_medium_line_x4_t5_t5

0x0004,

0xf310,	// (0x000a9a54) list_medium_line_x4_t5_t

0x1d7b,	// (0x0009c4bf) list_medium_line_t4_g4_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_t4_g4_g1

0x31e7,	// (0x0009d92b) list_medium_line_t4_g4_g2_ParamLimits

0x31e7,	// (0x0009d92b) list_medium_line_t4_g4_g2

0x31f3,	// (0x0009d937) list_medium_line_t4_g4_g3_ParamLimits

0x31f3,	// (0x0009d937) list_medium_line_t4_g4_g3

0x1d93,	// (0x0009c4d7) list_medium_line_t4_g4_g4_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_t4_g4_g4

0x0003,

0xf31b,	// (0x000a9a5f) list_medium_line_t4_g4_g_ParamLimits

0xf31b,	// (0x000a9a5f) list_medium_line_t4_g4_g

0x31ff,	// (0x0009d943) list_medium_line_t4_g4_t1_ParamLimits

0x31ff,	// (0x0009d943) list_medium_line_t4_g4_t1

0x3214,	// (0x0009d958) list_medium_line_t4_g4_t2_ParamLimits

0x3214,	// (0x0009d958) list_medium_line_t4_g4_t2

0x3229,	// (0x0009d96d) list_medium_line_t4_g4_t3_ParamLimits

0x3229,	// (0x0009d96d) list_medium_line_t4_g4_t3

0x1dc6,	// (0x0009c50a) list_medium_line_t4_g4_t4_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_t4_g4_t4

0x0003,

0xf324,	// (0x000a9a68) list_medium_line_t4_g4_t_ParamLimits

0xf324,	// (0x000a9a68) list_medium_line_t4_g4_t

0x333f,	// (0x0009da83) chi_dic_find_pane_g1

0x42a2,	// (0x0009e9e6) main_tport_pane

0x6dd2,	// (0x000a1516) list_medium_line_plain_t1

0x6eb2,	// (0x000a15f6) list_medium_line_t2_g2_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_t2_g2_g1

0x6ebe,	// (0x000a1602) list_medium_line_t2_g2_g2_ParamLimits

0x6ebe,	// (0x000a1602) list_medium_line_t2_g2_g2

0x0001,

0xf816,	// (0x000a9f5a) list_medium_line_t2_g2_g_ParamLimits

0xf816,	// (0x000a9f5a) list_medium_line_t2_g2_g

0x6eca,	// (0x000a160e) list_medium_line_t2_g2_t1_ParamLimits

0x6eca,	// (0x000a160e) list_medium_line_t2_g2_t1

0x6ee4,	// (0x000a1628) list_medium_line_t2_g2_t2_ParamLimits

0x6ee4,	// (0x000a1628) list_medium_line_t2_g2_t2

0x0001,

0xf81b,	// (0x000a9f5f) list_medium_line_t2_g2_t_ParamLimits

0xf81b,	// (0x000a9f5f) list_medium_line_t2_g2_t

0xa1bc,	// (0x000a4900) aid_sp_fs_list_icon_a_sm

0xa49e,	// (0x000a4be2) aid_sp_fs_list_icon_d

0xb2d3,	// (0x000a5a17) aid_sp_fs_text_primary

0xa1c4,	// (0x000a4908) aid_sp_fs_text_secondary

0x7580,	// (0x000a1cc4) list_medium_line

0x7580,	// (0x000a1cc4) list_medium_line_g2

0x7580,	// (0x000a1cc4) list_medium_line_g3

0x7580,	// (0x000a1cc4) list_medium_line_plain

0x7580,	// (0x000a1cc4) list_medium_line_plain_t2

0x7580,	// (0x000a1cc4) list_medium_line_plain_t3

0x7580,	// (0x000a1cc4) list_medium_line_right_icon

0x7580,	// (0x000a1cc4) list_medium_line_right_iconx2

0x7580,	// (0x000a1cc4) list_medium_line_t2

0x7580,	// (0x000a1cc4) list_medium_line_t2_g2

0x7580,	// (0x000a1cc4) list_medium_line_t2_g3

0x7580,	// (0x000a1cc4) list_medium_line_t2_right_icon

0x7580,	// (0x000a1cc4) list_medium_line_t2_right_iconx2

0x7580,	// (0x000a1cc4) list_medium_line_t3

0x7580,	// (0x000a1cc4) list_medium_line_t3_g2

0x7580,	// (0x000a1cc4) list_medium_line_t3_g3

0x7580,	// (0x000a1cc4) list_medium_line_t3_right_iconx2

0x7589,	// (0x000a1ccd) list_medium_line_t4_g4

0xb2dc,	// (0x000a5a20) list_medium_line_x2

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t2_g2

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t2_g3

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t2_g4

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t3

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t3_g2

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t3_g3

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t3_g4

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t4_g2

0xb2dc,	// (0x000a5a20) list_medium_line_x2_t4_g4

0x7592,	// (0x000a1cd6) list_medium_line_x3

0x7592,	// (0x000a1cd6) list_medium_line_x3_t4

0x7592,	// (0x000a1cd6) list_medium_line_x3_t4_g4

0x7589,	// (0x000a1ccd) list_medium_line_x4_t4

0x7589,	// (0x000a1ccd) list_medium_line_x4_t4_g7

0x7589,	// (0x000a1ccd) list_medium_line_x4_t5

0x759b,	// (0x000a1cdf) list_single_fs_dyc_pane_ParamLimits

0x759b,	// (0x000a1cdf) list_single_fs_dyc_pane

0x1d7b,	// (0x0009c4bf) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x4_t4_g7_g1

0x7d0e,	// (0x000a2452) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d0e,	// (0x000a2452) list_medium_line_x4_t4_g7_g2

0x7d1a,	// (0x000a245e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d1a,	// (0x000a245e) list_medium_line_x4_t4_g7_g3

0x7d29,	// (0x000a246d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d29,	// (0x000a246d) list_medium_line_x4_t4_g7_g4

0x7d35,	// (0x000a2479) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d35,	// (0x000a2479) list_medium_line_x4_t4_g7_g5

0x7d44,	// (0x000a2488) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d44,	// (0x000a2488) list_medium_line_x4_t4_g7_g6

0x7d53,	// (0x000a2497) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d53,	// (0x000a2497) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9bd,	// (0x000aa101) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9bd,	// (0x000aa101) list_medium_line_x4_t4_g7_g

0x7d5f,	// (0x000a24a3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d5f,	// (0x000a24a3) list_medium_line_x4_t4_g7_t1

0x7d74,	// (0x000a24b8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d74,	// (0x000a24b8) list_medium_line_x4_t4_g7_t2

0x7d89,	// (0x000a24cd) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d89,	// (0x000a24cd) list_medium_line_x4_t4_g7_t3

0x7d9e,	// (0x000a24e2) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d9e,	// (0x000a24e2) list_medium_line_x4_t4_g7_t4

0x7db0,	// (0x000a24f4) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7db0,	// (0x000a24f4) list_medium_line_x4_t4_g7_t5

0x0004,

0xf9cc,	// (0x000aa110) list_medium_line_x4_t4_g7_t_ParamLimits

0xf9cc,	// (0x000aa110) list_medium_line_x4_t4_g7_t

0x7dc2,	// (0x000a2506) list_single_dyc_row_pane_ParamLimits

0x7dc2,	// (0x000a2506) list_single_dyc_row_pane

0x8498,	// (0x000a2bdc) call5_gesture_pane_ParamLimits

0x8498,	// (0x000a2bdc) call5_gesture_pane

0x84cc,	// (0x000a2c10) call5_windows_pane_ParamLimits

0x84cc,	// (0x000a2c10) call5_windows_pane

0x851f,	// (0x000a2c63) call5_swipe_1_pane_cp_ParamLimits

0x851f,	// (0x000a2c63) call5_swipe_1_pane_cp

0x852b,	// (0x000a2c6f) call5_swipe_2_pane_cp_ParamLimits

0x852b,	// (0x000a2c6f) call5_swipe_2_pane_cp

0xaa87,	// (0x000a51cb) call5_image_pane_cp

0x8537,	// (0x000a2c7b) popup_call5_audio_first_window_cp_ParamLimits

0x8537,	// (0x000a2c7b) popup_call5_audio_first_window_cp

0xe650,	// (0x000a8d94) call5_swipe_1_pane_g1_cp_ParamLimits

0xe650,	// (0x000a8d94) call5_swipe_1_pane_g1_cp

0xe6bd,	// (0x000a8e01) call5_swipe_1_pane_g2_cp

0xe669,	// (0x000a8dad) call5_swipe_1_pane_t1_cp_ParamLimits

0xe669,	// (0x000a8dad) call5_swipe_1_pane_t1_cp

0xe650,	// (0x000a8d94) call5_swipe_2_pane_g1_cp_ParamLimits

0xe650,	// (0x000a8d94) call5_swipe_2_pane_g1_cp

0xe6c5,	// (0x000a8e09) call5_swipe_2_pane_g2_cp

0xe6cd,	// (0x000a8e11) call5_swipe_2_pane_t1_cp_ParamLimits

0xe6cd,	// (0x000a8e11) call5_swipe_2_pane_t1_cp

0xa478,	// (0x000a4bbc) main_sp_fs_email_pane

0xe6e2,	// (0x000a8e26) main_sp_fs_listscroll_pane_te

0x8545,	// (0x000a2c89) popup_sp_fs_action_menu_pane_ParamLimits

0x8545,	// (0x000a2c89) popup_sp_fs_action_menu_pane

0xcd11,	// (0x000a7455) bg_sp_fs_ctrlbar_pane_g1

0xe6eb,	// (0x000a8e2f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6f4,	// (0x000a8e38) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe6fd,	// (0x000a8e41) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcd11,	// (0x000a7455) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0a01,	// (0x0009b145) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcaf6,	// (0x000a723a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcaf6,	// (0x000a723a) bg_sp_fs_ctrlbar_ddmenu_pane

0xe706,	// (0x000a8e4a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe706,	// (0x000a8e4a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe712,	// (0x000a8e56) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe712,	// (0x000a8e56) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0a0a,	// (0x0009b14e) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0a0a,	// (0x0009b14e) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe71e,	// (0x000a8e62) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe71e,	// (0x000a8e62) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8589,	// (0x000a2ccd) list_medium_line_t2_right_icon_g1

0x8591,	// (0x000a2cd5) list_medium_line_t2_right_icon_t1

0x85a1,	// (0x000a2ce5) list_medium_line_t2_right_icon_t2

0x0001,

0xfa39,	// (0x000aa17d) list_medium_line_t2_right_icon_t

0xc909,	// (0x000a704d) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc909,	// (0x000a704d) bg_sp_fs_ctrlbar_pane

0x8606,	// (0x000a2d4a) main_sp_fs_ctrlbar_button_pane_cp01

0x860e,	// (0x000a2d52) main_sp_fs_ctrlbar_ddmenu_pane

0xe770,	// (0x000a8eb4) main_sp_fs_ctrlbar_pane_g1

0xe77c,	// (0x000a8ec0) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfa3e,	// (0x000aa182) main_sp_fs_ctrlbar_pane_g

0x864a,	// (0x000a2d8e) main_sp_fs_ctrlbar_pane_t1

0x8685,	// (0x000a2dc9) main_sp_fs_ctrlbar_pane

0x869b,	// (0x000a2ddf) main_sp_fs_listscroll_pane_te_cp01

0x86ac,	// (0x000a2df0) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x86ac,	// (0x000a2df0) popup_sp_fs_action_menu_pane_cp01

0xa478,	// (0x000a4bbc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa478,	// (0x000a4bbc) bg_sp_fs_highlight_list_pane_cp01

0xa1cd,	// (0x000a4911) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa1cd,	// (0x000a4911) sp_fs_action_menu_list_gene_pane_g1

0xe7a3,	// (0x000a8ee7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe7a3,	// (0x000a8ee7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa47,	// (0x000aa18b) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa47,	// (0x000aa18b) sp_fs_action_menu_list_gene_pane_g

0xa1dc,	// (0x000a4920) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa1dc,	// (0x000a4920) sp_fs_action_menu_list_gene_pane_t1

0xa1f4,	// (0x000a4938) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa1f4,	// (0x000a4938) sp_fs_action_menu_list_gene_pane

0xe7b0,	// (0x000a8ef4) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe7b0,	// (0x000a8ef4) popup_sp_fs_action_menu_bg_pane

0xa215,	// (0x000a4959) sp_fs_action_menu_list_pane_ParamLimits

0xa215,	// (0x000a4959) sp_fs_action_menu_list_pane

0xa4a6,	// (0x000a4bea) sp_fs_scroll_pane_cp01_ParamLimits

0xa4a6,	// (0x000a4bea) sp_fs_scroll_pane_cp01

0x86d6,	// (0x000a2e1a) list_medium_line_plain_t2_t1

0x86e6,	// (0x000a2e2a) list_medium_line_plain_t2_t2

0x0001,

0xfa4c,	// (0x000aa190) list_medium_line_plain_t2_t

0x86f4,	// (0x000a2e38) list_medium_line_plain_t3_t1

0x8704,	// (0x000a2e48) list_medium_line_plain_t3_t2

0x8712,	// (0x000a2e56) list_medium_line_plain_t3_t3

0x0002,

0xfa51,	// (0x000aa195) list_medium_line_plain_t3_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t2_g2_g1

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t2_g2_g2

0x0001,

0xf22b,	// (0x000a996f) list_medium_line_x2_t2_g2_g_ParamLimits

0xf22b,	// (0x000a996f) list_medium_line_x2_t2_g2_g

0x31ff,	// (0x0009d943) list_medium_line_x2_t2_g2_t1_ParamLimits

0x31ff,	// (0x0009d943) list_medium_line_x2_t2_g2_t1

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa58,	// (0x000aa19c) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa58,	// (0x000aa19c) list_medium_line_x2_t2_g2_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t4_g2_g1

0x8720,	// (0x000a2e64) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8720,	// (0x000a2e64) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa5d,	// (0x000aa1a1) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa5d,	// (0x000aa1a1) list_medium_line_x2_t4_g2_g

0x8732,	// (0x000a2e76) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8732,	// (0x000a2e76) list_medium_line_x2_t4_g2_t1

0x874c,	// (0x000a2e90) list_medium_line_x2_t4_g2_t2_ParamLimits

0x874c,	// (0x000a2e90) list_medium_line_x2_t4_g2_t2

0x8762,	// (0x000a2ea6) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8762,	// (0x000a2ea6) list_medium_line_x2_t4_g2_t3

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa62,	// (0x000aa1a6) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa62,	// (0x000aa1a6) list_medium_line_x2_t4_g2_t

0x8777,	// (0x000a2ebb) list_medium_line_t3_right_iconx2_g1

0x8589,	// (0x000a2ccd) list_medium_line_t3_right_iconx2_g2

0x877f,	// (0x000a2ec3) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa6b,	// (0x000aa1af) list_medium_line_t3_right_iconx2_g

0x8787,	// (0x000a2ecb) list_medium_line_t3_right_iconx2_t1

0x8797,	// (0x000a2edb) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa72,	// (0x000aa1b6) list_medium_line_t3_right_iconx2_t

0x1d7b,	// (0x0009c4bf) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x3_t4_g4_g1

0x1d87,	// (0x0009c4cb) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x3_t4_g4_g2

0x31e7,	// (0x0009d92b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x31e7,	// (0x0009d92b) list_medium_line_x3_t4_g4_g3

0x87a5,	// (0x000a2ee9) list_medium_line_x3_t4_g4_g4_ParamLimits

0x87a5,	// (0x000a2ee9) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa77,	// (0x000aa1bb) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa77,	// (0x000aa1bb) list_medium_line_x3_t4_g4_g

0x87b1,	// (0x000a2ef5) list_medium_line_x3_t4_g4_t1_ParamLimits

0x87b1,	// (0x000a2ef5) list_medium_line_x3_t4_g4_t1

0x87c8,	// (0x000a2f0c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x87c8,	// (0x000a2f0c) list_medium_line_x3_t4_g4_t2

0x3214,	// (0x0009d958) list_medium_line_x3_t4_g4_t3_ParamLimits

0x3214,	// (0x0009d958) list_medium_line_x3_t4_g4_t3

0x87dd,	// (0x000a2f21) list_medium_line_x3_t4_g4_t4_ParamLimits

0x87dd,	// (0x000a2f21) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa80,	// (0x000aa1c4) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa80,	// (0x000aa1c4) list_medium_line_x3_t4_g4_t

0x87fa,	// (0x000a2f3e) list_single_dyc_row_text_pane_t1_ParamLimits

0x87fa,	// (0x000a2f3e) list_single_dyc_row_text_pane_t1

0x8831,	// (0x000a2f75) list_single_dyc_row_text_pane_t2_ParamLimits

0x8831,	// (0x000a2f75) list_single_dyc_row_text_pane_t2

0xa237,	// (0x000a497b) list_single_dyc_row_text_pane_t3_ParamLimits

0xa237,	// (0x000a497b) list_single_dyc_row_text_pane_t3

0x0005,

0xfa89,	// (0x000aa1cd) list_single_dyc_row_text_pane_t_ParamLimits

0xfa89,	// (0x000aa1cd) list_single_dyc_row_text_pane_t

0xa25b,	// (0x000a499f) list_single_dyc_row_pane_g1_ParamLimits

0xa25b,	// (0x000a499f) list_single_dyc_row_pane_g1

0xa267,	// (0x000a49ab) list_single_dyc_row_pane_g2_ParamLimits

0xa267,	// (0x000a49ab) list_single_dyc_row_pane_g2

0xa273,	// (0x000a49b7) list_single_dyc_row_pane_g3_ParamLimits

0xa273,	// (0x000a49b7) list_single_dyc_row_pane_g3

0xa27f,	// (0x000a49c3) list_single_dyc_row_pane_g4_ParamLimits

0xa27f,	// (0x000a49c3) list_single_dyc_row_pane_g4

0x0003,

0xfa96,	// (0x000aa1da) list_single_dyc_row_pane_g_ParamLimits

0xfa96,	// (0x000aa1da) list_single_dyc_row_pane_g

0xa28b,	// (0x000a49cf) list_single_dyc_row_text_pane_ParamLimits

0xa28b,	// (0x000a49cf) list_single_dyc_row_text_pane

0x9cc5,	// (0x000a4409) bg_sp_fs_scroll_pane

0xe7be,	// (0x000a8f02) thumb_sp_fs_scroll_pane

0x6eb2,	// (0x000a15f6) list_medium_line_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_g1

0x8954,	// (0x000a3098) list_medium_line_t1_ParamLimits

0x8954,	// (0x000a3098) list_medium_line_t1

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_g1

0x1d87,	// (0x0009c4cb) list_medium_line_x2_g2_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x2_g2

0x0001,

0xfa9f,	// (0x000aa1e3) list_medium_line_x2_g_ParamLimits

0xfa9f,	// (0x000aa1e3) list_medium_line_x2_g

0xa2aa,	// (0x000a49ee) list_medium_line_x2_t1_ParamLimits

0xa2aa,	// (0x000a49ee) list_medium_line_x2_t1

0x1d7b,	// (0x0009c4bf) list_medium_line_x3_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x3_g1

0x1d87,	// (0x0009c4cb) list_medium_line_x3_g2_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x3_g2

0x0001,

0xfa9f,	// (0x000aa1e3) list_medium_line_x3_g_ParamLimits

0xfa9f,	// (0x000aa1e3) list_medium_line_x3_g

0xa2aa,	// (0x000a49ee) list_medium_line_x3_t1_ParamLimits

0xa2aa,	// (0x000a49ee) list_medium_line_x3_t1

0xe7c7,	// (0x000a8f0b) thumb_sp_fs_scroll_pane_g1

0xe7d0,	// (0x000a8f14) thumb_sp_fs_scroll_pane_g2

0xe7d9,	// (0x000a8f1d) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a7f,	// (0x0009b1c3) thumb_sp_fs_scroll_pane_g

0xe7c7,	// (0x000a8f0b) bg_sp_fs_scroll_pane_g1

0xe7d0,	// (0x000a8f14) bg_sp_fs_scroll_pane_g2

0xe7d9,	// (0x000a8f1d) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a7f,	// (0x0009b1c3) bg_sp_fs_scroll_pane_g

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1d7b,	// (0x0009c4bf) list_medium_line_x2_t3_g4_g1

0x1e03,	// (0x0009c547) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e03,	// (0x0009c547) list_medium_line_x2_t3_g4_g2

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1d87,	// (0x0009c4cb) list_medium_line_x2_t3_g4_g3

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1d93,	// (0x0009c4d7) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2a7,	// (0x000a99eb) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2a7,	// (0x000a99eb) list_medium_line_x2_t3_g4_g

0x8969,	// (0x000a30ad) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8969,	// (0x000a30ad) list_medium_line_x2_t3_g4_t1

0x897f,	// (0x000a30c3) list_medium_line_x2_t3_g4_t2_ParamLimits

0x897f,	// (0x000a30c3) list_medium_line_x2_t3_g4_t2

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1dc6,	// (0x0009c50a) list_medium_line_x2_t3_g4_t3

0x0002,

0xfaa4,	// (0x000aa1e8) list_medium_line_x2_t3_g4_t_ParamLimits

0xfaa4,	// (0x000aa1e8) list_medium_line_x2_t3_g4_t

0x6eb2,	// (0x000a15f6) list_medium_line_g2_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_g2_g1

0x6ebe,	// (0x000a1602) list_medium_line_g2_g2_ParamLimits

0x6ebe,	// (0x000a1602) list_medium_line_g2_g2

0x0001,

0xf816,	// (0x000a9f5a) list_medium_line_g2_g_ParamLimits

0xf816,	// (0x000a9f5a) list_medium_line_g2_g

0x8999,	// (0x000a30dd) list_medium_line_g2_t1_ParamLimits

0x8999,	// (0x000a30dd) list_medium_line_g2_t1

0x6eb2,	// (0x000a15f6) list_medium_line_t3_g2_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_t3_g2_g1

0x6ebe,	// (0x000a1602) list_medium_line_t3_g2_g2_ParamLimits

0x6ebe,	// (0x000a1602) list_medium_line_t3_g2_g2

0x0001,

0xf816,	// (0x000a9f5a) list_medium_line_t3_g2_g_ParamLimits

0xf816,	// (0x000a9f5a) list_medium_line_t3_g2_g

0x89ae,	// (0x000a30f2) list_medium_line_t3_g2_t1_ParamLimits

0x89ae,	// (0x000a30f2) list_medium_line_t3_g2_t1

0x89c8,	// (0x000a310c) list_medium_line_t3_g2_t2_ParamLimits

0x89c8,	// (0x000a310c) list_medium_line_t3_g2_t2

0x89de,	// (0x000a3122) list_medium_line_t3_g2_t3_ParamLimits

0x89de,	// (0x000a3122) list_medium_line_t3_g2_t3

0x0002,

0xfaab,	// (0x000aa1ef) list_medium_line_t3_g2_t_ParamLimits

0xfaab,	// (0x000aa1ef) list_medium_line_t3_g2_t

0x8589,	// (0x000a2ccd) list_medium_line_right_icon_g1

0x89f4,	// (0x000a3138) list_medium_line_right_icon_t1

0x6eb2,	// (0x000a15f6) list_medium_line_t2_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_t2_g1

0x8a02,	// (0x000a3146) list_medium_line_t2_t1_ParamLimits

0x8a02,	// (0x000a3146) list_medium_line_t2_t1

0x8a1c,	// (0x000a3160) list_medium_line_t2_t2_ParamLimits

0x8a1c,	// (0x000a3160) list_medium_line_t2_t2

0x0001,

0xfab2,	// (0x000aa1f6) list_medium_line_t2_t_ParamLimits

0xfab2,	// (0x000aa1f6) list_medium_line_t2_t

0x6eb2,	// (0x000a15f6) list_medium_line_t3_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_t3_g1

0x8a31,	// (0x000a3175) list_medium_line_t3_t1_ParamLimits

0x8a31,	// (0x000a3175) list_medium_line_t3_t1

0x8a4b,	// (0x000a318f) list_medium_line_t3_t2_ParamLimits

0x8a4b,	// (0x000a318f) list_medium_line_t3_t2

0x8a61,	// (0x000a31a5) list_medium_line_t3_t3_ParamLimits

0x8a61,	// (0x000a31a5) list_medium_line_t3_t3

0x0002,

0xfab7,	// (0x000aa1fb) list_medium_line_t3_t_ParamLimits

0xfab7,	// (0x000aa1fb) list_medium_line_t3_t

0x6eb2,	// (0x000a15f6) list_medium_line_g3_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_g3_g1

0x8a76,	// (0x000a31ba) list_medium_line_g3_g2_ParamLimits

0x8a76,	// (0x000a31ba) list_medium_line_g3_g2

0x6ebe,	// (0x000a1602) list_medium_line_g3_g3_ParamLimits

0x6ebe,	// (0x000a1602) list_medium_line_g3_g3

0x0002,

0xfabe,	// (0x000aa202) list_medium_line_g3_g_ParamLimits

0xfabe,	// (0x000aa202) list_medium_line_g3_g

0x8a82,	// (0x000a31c6) list_medium_line_g3_t1_ParamLimits

0x8a82,	// (0x000a31c6) list_medium_line_g3_t1

0x6eb2,	// (0x000a15f6) list_medium_line_t2_g3_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_t2_g3_g1

0x8a76,	// (0x000a31ba) list_medium_line_t2_g3_g2_ParamLimits

0x8a76,	// (0x000a31ba) list_medium_line_t2_g3_g2

0x6ebe,	// (0x000a1602) list_medium_line_t2_g3_g3_ParamLimits

0x6ebe,	// (0x000a1602) list_medium_line_t2_g3_g3

0x0002,

0xfabe,	// (0x000aa202) list_medium_line_t2_g3_g_ParamLimits

0xfabe,	// (0x000aa202) list_medium_line_t2_g3_g

0x8a97,	// (0x000a31db) list_medium_line_t2_g3_t1_ParamLimits

0x8a97,	// (0x000a31db) list_medium_line_t2_g3_t1

0x8ab1,	// (0x000a31f5) list_medium_line_t2_g3_t2_ParamLimits

0x8ab1,	// (0x000a31f5) list_medium_line_t2_g3_t2

0x0001,

0xfac5,	// (0x000aa209) list_medium_line_t2_g3_t_ParamLimits

0xfac5,	// (0x000aa209) list_medium_line_t2_g3_t

0x6eb2,	// (0x000a15f6) list_medium_line_t3_g3_g1_ParamLimits

0x6eb2,	// (0x000a15f6) list_medium_line_t3_g3_g1

0x8a76,	// (0x000a31ba) list_medium_line_t3_g3_g2_ParamLimits

0x8a76,	// (0x000a31ba) list_medium_line_t3_g3_g2

0x6ebe,	// (0x000a1602) list_medium_line_t3_g3_g3_ParamLimits

0x6ebe,	// (0x000a1602) list_medium_line_t3_g3_g3

0x0002,

0xfabe,	// (0x000aa202) list_medium_line_t3_g3_g_ParamLimits

0xfabe,	// (0x000aa202) list_medium_line_t3_g3_g

0x8ac7,	// (0x000a320b) list_medium_line_t3_g3_t1_ParamLimits

0x8ac7,	// (0x000a320b) list_medium_line_t3_g3_t1

0x8ae0,	// (0x000a3224) list_medium_line_t3_g3_t2_ParamLimits

0x8ae0,	// (0x000a3224) list_medium_line_t3_g3_t2

0x8af6,	// (0x000a323a) list_medium_line_t3_g3_t3_ParamLimits

0x8af6,	// (0x000a323a) list_medium_line_t3_g3_t3

0x0002,

0xfaca,	// (0x000aa20e) list_medium_line_t3_g3_t_ParamLimits

0xfaca,	// (0x000aa20e) list_medium_line_t3_g3_t

0x8777,	// (0x000a2ebb) list_medium_line_right_iconx2_g1

0x8589,	// (0x000a2ccd) list_medium_line_right_iconx2_g2

0x0001,

0xfad1,	// (0x000aa215) list_medium_line_right_iconx2_g

0x8b0c,	// (0x000a3250) list_medium_line_right_iconx2_t1

0x8777,	// (0x000a2ebb) list_medium_line_t2_right_iconx2_g1

0x8589,	// (0x000a2ccd) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfad1,	// (0x000aa215) list_medium_line_t2_right_iconx2_g

0x8b1a,	// (0x000a325e) list_medium_line_t2_right_iconx2_t1

0x8b2a,	// (0x000a326e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfad6,	// (0x000aa21a) list_medium_line_t2_right_iconx2_t

0x8b38,	// (0x000a327c) list_medium_line_x4_t4_t1

0x8b46,	// (0x000a328a) list_medium_line_x4_t4_t2

0x8b56,	// (0x000a329a) list_medium_line_x4_t4_t3

0x8b66,	// (0x000a32aa) list_medium_line_x4_t4_t4

0x0003,

0xfadb,	// (0x000aa21f) list_medium_line_x4_t4_t

0x8ba0,	// (0x000a32e4) tport_appsw_pane_ParamLimits

0x8ba0,	// (0x000a32e4) tport_appsw_pane

0x8bae,	// (0x000a32f2) tport_contact_pane_ParamLimits

0x8bae,	// (0x000a32f2) tport_contact_pane

0x8bbe,	// (0x000a3302) tport_listscroll_pane_ParamLimits

0x8bbe,	// (0x000a3302) tport_listscroll_pane

0x8bce,	// (0x000a3312) cell_tport_appsw_pane_ParamLimits

0x8bce,	// (0x000a3312) cell_tport_appsw_pane

0xcff9,	// (0x000a773d) tport_appsw_pane_g1_ParamLimits

0xcff9,	// (0x000a773d) tport_appsw_pane_g1

0xe7e2,	// (0x000a8f26) tport_contact_pane_g1

0xe1a2,	// (0x000a88e6) tport_contact_pane_t1

0xe7eb,	// (0x000a8f2f) tport_contact_pane_t2

0x0001,

0x0ac6,	// (0x0009b20a) tport_contact_pane_t

0xe7f9,	// (0x000a8f3d) list_tport_pane

0xe802,	// (0x000a8f46) scroll_pane_cp_030

0x8c01,	// (0x000a3345) cell_tport_appsw_pane_g1

0x8c11,	// (0x000a3355) cell_tport_appsw_pane_t1

0x8c1f,	// (0x000a3363) grid_highlight_pane_cp019

0x8c27,	// (0x000a336b) list_tport_double_graphic_pane_ParamLimits

0x8c27,	// (0x000a336b) list_tport_double_graphic_pane

0xa478,	// (0x000a4bbc) list_highlight_pane_cp023_ParamLimits

0xa478,	// (0x000a4bbc) list_highlight_pane_cp023

0x8c38,	// (0x000a337c) list_tport_double_graphic_pane_g1_ParamLimits

0x8c38,	// (0x000a337c) list_tport_double_graphic_pane_g1

0x8c45,	// (0x000a3389) list_tport_double_graphic_pane_t1_ParamLimits

0x8c45,	// (0x000a3389) list_tport_double_graphic_pane_t1

0x8c5a,	// (0x000a339e) list_tport_double_graphic_pane_t2_ParamLimits

0x8c5a,	// (0x000a339e) list_tport_double_graphic_pane_t2

0x0001,

0xfaeb,	// (0x000aa22f) list_tport_double_graphic_pane_t_ParamLimits

0xfaeb,	// (0x000aa22f) list_tport_double_graphic_pane_t

0x9cc5,	// (0x000a4409) main_cale_note_pane

0x6684,	// (0x000a0dc8) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6684,	// (0x000a0dc8) cell_vitu2_function_top_wide_pane_cp01

0x816f,	// (0x000a28b3) wait_bar_pane_cp05_ParamLimits

0xa478,	// (0x000a4bbc) listscroll_cmail_pane

0xe80b,	// (0x000a8f4f) list_cmail_pane

0x8c6c,	// (0x000a33b0) list_cmail_body_pane

0x8c93,	// (0x000a33d7) list_single_cmail_header_caption_pane

0x8cbe,	// (0x000a3402) list_single_cmail_header_detail_pane_ParamLimits

0x8cbe,	// (0x000a3402) list_single_cmail_header_detail_pane

0xe81b,	// (0x000a8f5f) list_single_cmail_header_caption_pane_t1

0x8cf4,	// (0x000a3438) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8cf4,	// (0x000a3438) list_single_cmail_header_detail_pane_g1

0xa4cc,	// (0x000a4c10) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa4cc,	// (0x000a4c10) list_single_cmail_header_detail_pane_g2

0x0002,

0xfaf0,	// (0x000aa234) list_single_cmail_header_detail_pane_g_ParamLimits

0xfaf0,	// (0x000aa234) list_single_cmail_header_detail_pane_g

0xa2c0,	// (0x000a4a04) list_single_cmail_header_detail_pane_t1_ParamLimits

0xa2c0,	// (0x000a4a04) list_single_cmail_header_detail_pane_t1

0xa320,	// (0x000a4a64) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa320,	// (0x000a4a64) list_single_cmail_header_editor_pane_bg

0xe2ff,	// (0x000a8a43) list_cmail_body_pane_g1

0xe83f,	// (0x000a8f83) list_cmail_body_pane_t1

0xd6e8,	// (0x000a7e2c) list_single_cmail_header_editor_pane_bg_g1

0xace0,	// (0x000a5424) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd6f8,	// (0x000a7e3c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd6f0,	// (0x000a7e34) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd90c,	// (0x000a8050) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd718,	// (0x000a7e5c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd708,	// (0x000a7e4c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd710,	// (0x000a7e54) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xacc0,	// (0x000a5404) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d0a,	// (0x000a344e) calenote_gesture_pane_ParamLimits

0x8d0a,	// (0x000a344e) calenote_gesture_pane

0x8d24,	// (0x000a3468) calenote_window_pane_ParamLimits

0x8d24,	// (0x000a3468) calenote_window_pane

0xe84d,	// (0x000a8f91) popup_note_window_cp01

0x8d3c,	// (0x000a3480) calenote_swipe_1_pane_ParamLimits

0x8d3c,	// (0x000a3480) calenote_swipe_1_pane

0x852b,	// (0x000a2c6f) calenote_swipe_2_pane_ParamLimits

0x852b,	// (0x000a2c6f) calenote_swipe_2_pane

0xe650,	// (0x000a8d94) calenote_swipe_1_pane_g1_ParamLimits

0xe650,	// (0x000a8d94) calenote_swipe_1_pane_g1

0xe65d,	// (0x000a8da1) calenote_swipe_1_pane_g2_ParamLimits

0xe65d,	// (0x000a8da1) calenote_swipe_1_pane_g2

0x0001,

0x09f7,	// (0x0009b13b) calenote_swipe_1_pane_g_ParamLimits

0x09f7,	// (0x0009b13b) calenote_swipe_1_pane_g

0xe85f,	// (0x000a8fa3) calenote_swipe_1_pane_t1_ParamLimits

0xe85f,	// (0x000a8fa3) calenote_swipe_1_pane_t1

0xe650,	// (0x000a8d94) calenote_swipe_2_pane_g1_ParamLimits

0xe650,	// (0x000a8d94) calenote_swipe_2_pane_g1

0xe87e,	// (0x000a8fc2) calenote_swipe_2_pane_g2_ParamLimits

0xe87e,	// (0x000a8fc2) calenote_swipe_2_pane_g2

0x0001,

0x0ae3,	// (0x0009b227) calenote_swipe_2_pane_g_ParamLimits

0x0ae3,	// (0x0009b227) calenote_swipe_2_pane_g

0xe88a,	// (0x000a8fce) calenote_swipe_2_pane_t1_ParamLimits

0xe88a,	// (0x000a8fce) calenote_swipe_2_pane_t1

0x9cc5,	// (0x000a4409) main_mup_navstr_pane

0x52ad,	// (0x0009f9f1) main_mup3_pane_t7_ParamLimits

0x52ad,	// (0x0009f9f1) main_mup3_pane_t7

0x5cf3,	// (0x000a0437) main_mp4_pane_g6_ParamLimits

0x5cf3,	// (0x000a0437) main_mp4_pane_g6

0x6091,	// (0x000a07d5) main_image3_pane_t4_ParamLimits

0x6091,	// (0x000a07d5) main_image3_pane_t4

0x8d4f,	// (0x000a3493) popup_navstr_preview_pane_ParamLimits

0x8d4f,	// (0x000a3493) popup_navstr_preview_pane

0x8d5b,	// (0x000a349f) scroll_navstr_pane_ParamLimits

0x8d5b,	// (0x000a349f) scroll_navstr_pane

0x9cc5,	// (0x000a4409) bg_popup_preview_window_pane_cp04

0xe8b1,	// (0x000a8ff5) popup_navstr_preview_pane_t1

0x8d67,	// (0x000a34ab) scroll_navstr_pane_g1_ParamLimits

0x8d67,	// (0x000a34ab) scroll_navstr_pane_g1

0x8d74,	// (0x000a34b8) scroll_navstr_pane_t1_ParamLimits

0x8d74,	// (0x000a34b8) scroll_navstr_pane_t1

0xe856,	// (0x000a8f9a) bg_button_pane_cp014

0xe856,	// (0x000a8f9a) bg_button_pane_cp030

0x843e,	// (0x000a2b82) list_double_fisheye_pane_g4_ParamLimits

0x843e,	// (0x000a2b82) list_double_fisheye_pane_g4

0x844a,	// (0x000a2b8e) list_double_fisheye_pane_g5_ParamLimits

0x844a,	// (0x000a2b8e) list_double_fisheye_pane_g5

0xc2ba,	// (0x000a69fe) sp_fs_scroll_pane_cp03

0xe770,	// (0x000a8eb4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe77c,	// (0x000a8ec0) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfa3e,	// (0x000aa182) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x864a,	// (0x000a2d8e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe813,	// (0x000a8f57) sp_fs_scroll_pane_cp02

0xa9bd,	// (0x000a5101) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa9bd,	// (0x000a5101) popup_sp_fs_calendar_preview_list_single_pane

0x9cc5,	// (0x000a4409) main_cam6_pano_pane

0x4286,	// (0x0009e9ca) main_mup3_pane_ParamLimits

0x9cc5,	// (0x000a4409) main_phacti_pane

0x8044,	// (0x000a2788) bg_button_pane_cp11

0x805c,	// (0x000a27a0) main_mobtv_info_pane_g2_ParamLimits

0x805c,	// (0x000a27a0) main_mobtv_info_pane_g2

0x0001,

0xf9f5,	// (0x000aa139) main_mobtv_info_pane_g_ParamLimits

0xf9f5,	// (0x000aa139) main_mobtv_info_pane_g

0x820e,	// (0x000a2952) sc_clock_pane_t5_ParamLimits

0x820e,	// (0x000a2952) sc_clock_pane_t5

0x82af,	// (0x000a29f3) main_radioblah_pane_g1_ParamLimits

0xe59c,	// (0x000a8ce0) main_radioblah_pane_t3_ParamLimits

0xe59c,	// (0x000a8ce0) main_radioblah_pane_t3

0xe5b4,	// (0x000a8cf8) main_radioblah_pane_t4_ParamLimits

0xe5b4,	// (0x000a8cf8) main_radioblah_pane_t4

0x82cd,	// (0x000a2a11) main_radioblah_text_pane_ParamLimits

0x82cd,	// (0x000a2a11) main_radioblah_text_pane

0x82da,	// (0x000a2a1e) main_radioblah_info_pane_g1_ParamLimits

0x836f,	// (0x000a2ab3) main_radioblah_info_pane_t4_ParamLimits

0x836f,	// (0x000a2ab3) main_radioblah_info_pane_t4

0xa478,	// (0x000a4bbc) main_sp_fs_calendar_pane

0x8d86,	// (0x000a34ca) main_phacti_pane_g1

0x8d8e,	// (0x000a34d2) phacti_note_pane_ParamLimits

0x8d8e,	// (0x000a34d2) phacti_note_pane

0xe8c8,	// (0x000a900c) phacti_term_pane_ParamLimits

0xe8c8,	// (0x000a900c) phacti_term_pane

0xe8dd,	// (0x000a9021) phacti_note_pane_t1_ParamLimits

0xe8dd,	// (0x000a9021) phacti_note_pane_t1

0xa337,	// (0x000a4a7b) phacti_term_pane_g1

0xa33f,	// (0x000a4a83) phacti_term_pane_t1_ParamLimits

0xa33f,	// (0x000a4a83) phacti_term_pane_t1

0xe8f4,	// (0x000a9038) popup_sp_fs_calendar_preview_list_single_pane_g1

0xaa65,	// (0x000a51a9) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfb01,	// (0x000aa245) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8fc,	// (0x000a9040) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8fc,	// (0x000a9040) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe912,	// (0x000a9056) aid_popup_sp_fs_bg_corner_pane

0xcd11,	// (0x000a7455) popup_sp_fs_calendar_preview_bg_pane_g1

0x9cc5,	// (0x000a4409) popup_sp_fs_calendar_preview_bg_pane

0xe91a,	// (0x000a905e) popup_sp_fs_calendar_preview_list_pane

0xc909,	// (0x000a704d) bg_main_sp_fs_cale_pane_ParamLimits

0xc909,	// (0x000a704d) bg_main_sp_fs_cale_pane

0xa369,	// (0x000a4aad) listscroll_cale_mrui_pane_ParamLimits

0xa369,	// (0x000a4aad) listscroll_cale_mrui_pane

0xa37e,	// (0x000a4ac2) listscroll_sp_fs_schedule_track_pane

0xa387,	// (0x000a4acb) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa387,	// (0x000a4acb) main_sp_fs_ctrlbar_pane_cp01

0xe922,	// (0x000a9066) main_sp_fs_ribbon_pane

0xa39a,	// (0x000a4ade) popup_sp_fs_cale_preview_window

0x8df1,	// (0x000a3535) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8df1,	// (0x000a3535) list_single_sp_fs_schedule_track_pane

0xee45,	// (0x000a9589) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xee45,	// (0x000a9589) bg_sp_fs_highlight_list_pane_cp03

0x8e13,	// (0x000a3557) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e13,	// (0x000a3557) list_single_sp_fs_schedule_track_pane_g1

0x8e1f,	// (0x000a3563) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e1f,	// (0x000a3563) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb06,	// (0x000aa24a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb06,	// (0x000aa24a) list_single_sp_fs_schedule_track_pane_g

0x8e2b,	// (0x000a356f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8e2b,	// (0x000a356f) list_single_sp_fs_schedule_track_pane_t1

0x8e43,	// (0x000a3587) sp_fs_schedule_track_pane_ParamLimits

0x8e43,	// (0x000a3587) sp_fs_schedule_track_pane

0xe92a,	// (0x000a906e) sp_fs_schedule_track_pane_g1

0xe932,	// (0x000a9076) sp_fs_schedule_track_pane_g2

0xe93a,	// (0x000a907e) sp_fs_schedule_track_pane_g3

0xe942,	// (0x000a9086) sp_fs_schedule_track_pane_g4

0xe94a,	// (0x000a908e) sp_fs_schedule_track_pane_g5

0x0004,

0x0af7,	// (0x0009b23b) sp_fs_schedule_track_pane_g

0xd6e8,	// (0x000a7e2c) bg_sp_fs_schedule_viewer_highlight_g1

0xace0,	// (0x000a5424) bg_sp_fs_schedule_viewer_highlight_g2

0xd6f0,	// (0x000a7e34) bg_sp_fs_schedule_viewer_highlight_g3

0xd6f8,	// (0x000a7e3c) bg_sp_fs_schedule_viewer_highlight_g4

0xd90c,	// (0x000a8050) bg_sp_fs_schedule_viewer_highlight_g5

0xd708,	// (0x000a7e4c) bg_sp_fs_schedule_viewer_highlight_g6

0xd710,	// (0x000a7e54) bg_sp_fs_schedule_viewer_highlight_g7

0xd718,	// (0x000a7e5c) bg_sp_fs_schedule_viewer_highlight_g8

0xacc0,	// (0x000a5404) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb0b,	// (0x000aa24f) bg_sp_fs_schedule_viewer_highlight_g

0x9cc5,	// (0x000a4409) bg_main_sp_fs_ribbon_pane

0x8e53,	// (0x000a3597) main_sp_fs_ribbon_pane_g1

0xe952,	// (0x000a9096) main_sp_fs_ribbon_pane_t1

0x8e5c,	// (0x000a35a0) main_sp_fs_ribbon_pane_t2

0xe961,	// (0x000a90a5) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb1e,	// (0x000aa262) main_sp_fs_ribbon_pane_t

0xe970,	// (0x000a90b4) main_sp_fs_ribbon_scheduler_pane

0xe978,	// (0x000a90bc) bg_main_sp_fs_ribbon_pane_g1

0xe981,	// (0x000a90c5) bg_main_sp_fs_ribbon_pane_g2

0xe98a,	// (0x000a90ce) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b1c,	// (0x0009b260) bg_main_sp_fs_ribbon_pane_g

0xe992,	// (0x000a90d6) main_sp_fs_ribbon_scheduler_pane_g1

0xe99b,	// (0x000a90df) main_sp_fs_ribbon_scheduler_pane_g2

0xe9a4,	// (0x000a90e8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b23,	// (0x0009b267) main_sp_fs_ribbon_scheduler_pane_g

0xe9ad,	// (0x000a90f1) list_cale_mrui_pane

0x8e6b,	// (0x000a35af) sp_fs_scroll_pane_cp07_ParamLimits

0x8e6b,	// (0x000a35af) sp_fs_scroll_pane_cp07

0x8e87,	// (0x000a35cb) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8e87,	// (0x000a35cb) bg_sp_fs_schedule_viewer_highlight

0xe9ba,	// (0x000a90fe) list_single_sp_fs_schedule_track_pane_cp01

0xe9c2,	// (0x000a9106) list_sp_fs_schedule_track_pane

0xe9ca,	// (0x000a910e) sp_fs_scroll_pane_cp06_ParamLimits

0xe9ca,	// (0x000a910e) sp_fs_scroll_pane_cp06

0xcd11,	// (0x000a7455) bgmain_sp_fs_calendar_pane_g1

0x8e94,	// (0x000a35d8) list_single_cale_mrui_pane_ParamLimits

0x8e94,	// (0x000a35d8) list_single_cale_mrui_pane

0xa3ac,	// (0x000a4af0) list_single_cale_mrui_row_pane_ParamLimits

0xa3ac,	// (0x000a4af0) list_single_cale_mrui_row_pane

0xa4e1,	// (0x000a4c25) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa4e1,	// (0x000a4c25) list_single_cale_mrui_row_pane_g1

0xa519,	// (0x000a4c5d) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa519,	// (0x000a4c5d) list_single_cale_mrui_row_pane_t1

0x8ec1,	// (0x000a3605) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8ec1,	// (0x000a3605) list_single_cale_mrui_row_pane_t2

0xa52b,	// (0x000a4c6f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa52b,	// (0x000a4c6f) list_single_cale_mrui_row_pane_t3

0xa55a,	// (0x000a4c9e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa55a,	// (0x000a4c9e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb2c,	// (0x000aa270) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb2c,	// (0x000aa270) list_single_cale_mrui_row_pane_t

0x8f27,	// (0x000a366b) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f27,	// (0x000a366b) list_single_cmail_header_editor_pane_bg_cp01

0x8f47,	// (0x000a368b) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8f47,	// (0x000a368b) list_single_cmail_header_editor_pane_bg_cp02

0x8f63,	// (0x000a36a7) main_radioblah_text_pane_t1_ParamLimits

0x8f63,	// (0x000a36a7) main_radioblah_text_pane_t1

0xe9e9,	// (0x000a912d) cam6_indi_pane_cp01

0xe9f1,	// (0x000a9135) cam6_mode_pane_cp01

0xe9f9,	// (0x000a913d) cam6_pano_pane

0xea02,	// (0x000a9146) cam6_zoom_pane_cp01

0xea0a,	// (0x000a914e) cam6_pano_image_pane

0xea15,	// (0x000a9159) cam6_pano_pane_g1

0xe2ff,	// (0x000a8a43) cam6_pano_pane_g2

0xea26,	// (0x000a916a) cam6_pano_pane_g3

0xea2f,	// (0x000a9173) cam6_pano_pane_g4

0xd2f4,	// (0x000a7a38) cam6_pano_pane_g5

0xea38,	// (0x000a917c) cam6_pano_pane_g6

0xea1e,	// (0x000a9162) cam6_pano_pane_g7

0xea42,	// (0x000a9186) cam6_pano_pane_g8

0xea4b,	// (0x000a918f) cam6_pano_pane_g9

0x0008,

0xfb35,	// (0x000aa279) cam6_pano_pane_g

0x9cc5,	// (0x000a4409) main_browser_tag_pane

0xe8a9,	// (0x000a8fed) grid_navstr_albumart_pane

0xea56,	// (0x000a919a) cell_navstr_albumart_pane_ParamLimits

0xea56,	// (0x000a919a) cell_navstr_albumart_pane

0xea76,	// (0x000a91ba) cell_navstr_albumart_pane_g1

0xc71a,	// (0x000a6e5e) cell_navstr_albumart_pane_g2

0xc72a,	// (0x000a6e6e) cell_navstr_albumart_pane_g3

0xc722,	// (0x000a6e66) cell_navstr_albumart_pane_g4

0x0003,

0x0b4d,	// (0x0009b291) cell_navstr_albumart_pane_g

0x8f7e,	// (0x000a36c2) bt_list_pane_ParamLimits

0x8f7e,	// (0x000a36c2) bt_list_pane

0x8f9e,	// (0x000a36e2) bt_list_pane_t1

0x8fad,	// (0x000a36f1) bt_list_pane_t2

0x0001,

0xfb48,	// (0x000aa28c) bt_list_pane_t

0x9cc5,	// (0x000a4409) main_cale_prevew_pane

0x8fbc,	// (0x000a3700) popup_cale_preview_window_ParamLimits

0x8fbc,	// (0x000a3700) popup_cale_preview_window

0xa478,	// (0x000a4bbc) bg_popup_preview_window_pane_cp05_ParamLimits

0xa478,	// (0x000a4bbc) bg_popup_preview_window_pane_cp05

0xea7e,	// (0x000a91c2) list_cale_preview_pane_ParamLimits

0xea7e,	// (0x000a91c2) list_cale_preview_pane

0x8fd5,	// (0x000a3719) list_double_cale_preview_pane_ParamLimits

0x8fd5,	// (0x000a3719) list_double_cale_preview_pane

0x8fe7,	// (0x000a372b) list_single_cale_preview_pane_ParamLimits

0x8fe7,	// (0x000a372b) list_single_cale_preview_pane

0x8ffd,	// (0x000a3741) list_single_cale_preview_pane_g1

0x9005,	// (0x000a3749) list_single_cale_preview_pane_t1_ParamLimits

0x9005,	// (0x000a3749) list_single_cale_preview_pane_t1

0x901a,	// (0x000a375e) list_double_cale_preview_pane_g1

0x9022,	// (0x000a3766) list_double_cale_preview_pane_t1_ParamLimits

0x9022,	// (0x000a3766) list_double_cale_preview_pane_t1

0x9037,	// (0x000a377b) list_double_cale_preview_pane_t2_ParamLimits

0x9037,	// (0x000a377b) list_double_cale_preview_pane_t2

0x0001,

0xfb4d,	// (0x000aa291) list_double_cale_preview_pane_t_ParamLimits

0xfb4d,	// (0x000aa291) list_double_cale_preview_pane_t

0x9cc5,	// (0x000a4409) main_ezdial_pane

0xa478,	// (0x000a4bbc) main_sp_fs_email_pane_ParamLimits

0x85af,	// (0x000a2cf3) cmail_ddmenu_btn01_pane_ParamLimits

0x85af,	// (0x000a2cf3) cmail_ddmenu_btn01_pane

0x85cc,	// (0x000a2d10) cmail_ddmenu_btn02_pane_ParamLimits

0x85cc,	// (0x000a2d10) cmail_ddmenu_btn02_pane

0x85ea,	// (0x000a2d2e) cmail_ddmenu_btn03_pane_ParamLimits

0x85ea,	// (0x000a2d2e) cmail_ddmenu_btn03_pane

0x8685,	// (0x000a2dc9) main_sp_fs_ctrlbar_pane_ParamLimits

0x869b,	// (0x000a2ddf) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8c6c,	// (0x000a33b0) list_cmail_body_pane_ParamLimits

0xe829,	// (0x000a8f6d) bg_button_pane_cp12

0xe832,	// (0x000a8f76) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe832,	// (0x000a8f76) list_single_cmail_header_detail_pane_g3

0xa2fc,	// (0x000a4a40) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2fc,	// (0x000a4a40) list_single_cmail_header_detail_pane_t2

0x0001,

0xfaf7,	// (0x000aa23b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfaf7,	// (0x000aa23b) list_single_cmail_header_detail_pane_t

0xa354,	// (0x000a4a98) phacti_term_pane_t2_ParamLimits

0xa354,	// (0x000a4a98) phacti_term_pane_t2

0x0001,

0xfafc,	// (0x000aa240) phacti_term_pane_t_ParamLimits

0xfafc,	// (0x000aa240) phacti_term_pane_t

0xea8a,	// (0x000a91ce) aid_size_list_single_double

0x904f,	// (0x000a3793) popup_ezdial_listscroll_window

0x9070,	// (0x000a37b4) popup_number_entry_window_cp01

0xaa87,	// (0x000a51cb) bg_popup_call_pane_cp09

0xea96,	// (0x000a91da) ezdial_list_pane

0xea9e,	// (0x000a91e2) scroll_pane_cp23

0xcaf6,	// (0x000a723a) bg_button_pane_cp028_ParamLimits

0xcaf6,	// (0x000a723a) bg_button_pane_cp028

0x907e,	// (0x000a37c2) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x907e,	// (0x000a37c2) cmail_ddmenu_btn01_pane_g1

0x908e,	// (0x000a37d2) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x908e,	// (0x000a37d2) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb52,	// (0x000aa296) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb52,	// (0x000aa296) cmail_ddmenu_btn01_pane_g

0xeaa6,	// (0x000a91ea) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeaa6,	// (0x000a91ea) cmail_ddmenu_btn01_pane_t1

0xc909,	// (0x000a704d) bg_button_pane_cp029_ParamLimits

0xc909,	// (0x000a704d) bg_button_pane_cp029

0x908e,	// (0x000a37d2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x908e,	// (0x000a37d2) cmail_ddmenu_btn02_pane_g1

0x90a6,	// (0x000a37ea) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x90a6,	// (0x000a37ea) cmail_ddmenu_btn02_pane_t1

0xee45,	// (0x000a9589) bg_button_pane_cp031_ParamLimits

0xee45,	// (0x000a9589) bg_button_pane_cp031

0x908e,	// (0x000a37d2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x908e,	// (0x000a37d2) cmail_ddmenu_btn03_pane_g1

0x90a6,	// (0x000a37ea) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x90a6,	// (0x000a37ea) cmail_ddmenu_btn03_pane_t1

0x5f2e,	// (0x000a0672) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f48,	// (0x000a068c) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f48,	// (0x000a068c) cell_dialer2_keypad_pane_t1_copy1

0x7e85,	// (0x000a25c9) ncimui_group_button_pane

0xa478,	// (0x000a4bbc) main_sp_fs_calendar_pane_ParamLimits

0x8c93,	// (0x000a33d7) list_single_cmail_header_caption_pane_ParamLimits

0xa4d8,	// (0x000a4c1c) aid_recal_txt_sm_pane

0x9cc5,	// (0x000a4409) mian_recal_day_pane

0xa39a,	// (0x000a4ade) popup_sp_fs_cale_preview_window_ParamLimits

0xeabb,	// (0x000a91ff) list_recal_day_pane

0xa5a4,	// (0x000a4ce8) list_single_recal_day_pane_ParamLimits

0xa5a4,	// (0x000a4ce8) list_single_recal_day_pane

0xeae2,	// (0x000a9226) list_single_recal_day_pane_g1_ParamLimits

0xeae2,	// (0x000a9226) list_single_recal_day_pane_g1

0xa5b6,	// (0x000a4cfa) list_single_recal_day_pane_g2_ParamLimits

0xa5b6,	// (0x000a4cfa) list_single_recal_day_pane_g2

0xa5c2,	// (0x000a4d06) list_single_recal_day_pane_g3_ParamLimits

0xa5c2,	// (0x000a4d06) list_single_recal_day_pane_g3

0x90ca,	// (0x000a380e) list_single_recal_day_pane_g4_ParamLimits

0x90ca,	// (0x000a380e) list_single_recal_day_pane_g4

0xa5ce,	// (0x000a4d12) list_single_recal_day_pane_g5_ParamLimits

0xa5ce,	// (0x000a4d12) list_single_recal_day_pane_g5

0xa5da,	// (0x000a4d1e) list_single_recal_day_pane_g6_ParamLimits

0xa5da,	// (0x000a4d1e) list_single_recal_day_pane_g6

0x0004,

0xfb61,	// (0x000aa2a5) list_single_recal_day_pane_g_ParamLimits

0xfb61,	// (0x000aa2a5) list_single_recal_day_pane_g

0xa5ee,	// (0x000a4d32) list_single_recal_day_pane_t1

0xa600,	// (0x000a4d44) list_single_recal_day_pane_t2

0x0001,

0xfb6c,	// (0x000aa2b0) list_single_recal_day_pane_t

0x90e2,	// (0x000a3826) ncimui_query_button_pane_ParamLimits

0x90e2,	// (0x000a3826) ncimui_query_button_pane

0x90f2,	// (0x000a3836) ncimui_query_button_pane_t1_ParamLimits

0x90f2,	// (0x000a3836) ncimui_query_button_pane_t1

0xeaee,	// (0x000a9232) ncimui_query_button_pane_t2_ParamLimits

0xeaee,	// (0x000a9232) ncimui_query_button_pane_t2

0x0001,

0xfb71,	// (0x000aa2b5) ncimui_query_button_pane_t_ParamLimits

0xfb71,	// (0x000aa2b5) ncimui_query_button_pane_t

0x9105,	// (0x000a3849) query_button_pane_ParamLimits

0x9105,	// (0x000a3849) query_button_pane

0x9cc5,	// (0x000a4409) bg_button_pane_cp0028

0xeb01,	// (0x000a9245) query_button_pane_t1

0x42a2,	// (0x0009e9e6) main_tport_pane_ParamLimits

0x8b76,	// (0x000a32ba) bg_popup_window_pane_cp01_ParamLimits

0x8b76,	// (0x000a32ba) bg_popup_window_pane_cp01

0x8b84,	// (0x000a32c8) heading_pane_cp08_ParamLimits

0x8b84,	// (0x000a32c8) heading_pane_cp08

0x8b92,	// (0x000a32d6) heading_pane_cp07_ParamLimits

0x8b92,	// (0x000a32d6) heading_pane_cp07

0x8c01,	// (0x000a3345) cell_tport_appsw_pane_g2

0x0002,

0xfae4,	// (0x000aa228) cell_tport_appsw_pane_g

0x39a4,	// (0x0009e0e8) input_candi_list_open_g1

0xaea3,	// (0x000a55e7) list_cale_time_pane_g6_ParamLimits

0xaea3,	// (0x000a55e7) list_cale_time_pane_g6

0x4d1f,	// (0x0009f463) aid_size_touch_calib_1_ParamLimits

0x4d1f,	// (0x0009f463) aid_size_touch_calib_1

0x4d2b,	// (0x0009f46f) aid_size_touch_calib_2_ParamLimits

0x4d2b,	// (0x0009f46f) aid_size_touch_calib_2

0x4d39,	// (0x0009f47d) aid_size_touch_calib_3_ParamLimits

0x4d39,	// (0x0009f47d) aid_size_touch_calib_3

0x4d49,	// (0x0009f48d) aid_size_touch_calib_4_ParamLimits

0x4d49,	// (0x0009f48d) aid_size_touch_calib_4

0x4d57,	// (0x0009f49b) main_touch_calib_button_group_pane_ParamLimits

0x4d57,	// (0x0009f49b) main_touch_calib_button_group_pane

0x4d65,	// (0x0009f4a9) main_touch_calib_pane_g1_ParamLimits

0x4d71,	// (0x0009f4b5) main_touch_calib_pane_g2_ParamLimits

0x4d7d,	// (0x0009f4c1) main_touch_calib_pane_g3_ParamLimits

0x4d89,	// (0x0009f4cd) main_touch_calib_pane_g4_ParamLimits

0xf5fb,	// (0x000a9d3f) main_touch_calib_pane_g_ParamLimits

0x4d95,	// (0x0009f4d9) main_touch_calib_pane_t1_ParamLimits

0x4dae,	// (0x0009f4f2) main_touch_calib_pane_t2_ParamLimits

0x4dc7,	// (0x0009f50b) main_touch_calib_pane_t3_ParamLimits

0x4ddd,	// (0x0009f521) main_touch_calib_pane_t4_ParamLimits

0x4df3,	// (0x0009f537) main_touch_calib_pane_t5_ParamLimits

0xf604,	// (0x000a9d48) main_touch_calib_pane_t_ParamLimits

0xd094,	// (0x000a77d8) list_single_fp_cale_pane_g3_ParamLimits

0xd094,	// (0x000a77d8) list_single_fp_cale_pane_g3

0x4286,	// (0x0009e9ca) bg_button_pane_cp012_ParamLimits

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp03_ParamLimits

0x6e32,	// (0x000a1576) cell_vitu2_function_top_pane_g1_ParamLimits

0x4286,	// (0x0009e9ca) bg_vkb2_func_pane_cp04_ParamLimits

0x7e0d,	// (0x000a2551) main_ncimui_button_group_pane_ParamLimits

0x7e0d,	// (0x000a2551) main_ncimui_button_group_pane

0x7e73,	// (0x000a25b7) main_ncimui_pane_t3_ParamLimits

0x7e73,	// (0x000a25b7) main_ncimui_pane_t3

0xe8bf,	// (0x000a9003) phacti_button_group_pane

0xea8a,	// (0x000a91ce) aid_size_list_single_double_ParamLimits

0x904f,	// (0x000a3793) popup_ezdial_listscroll_window_ParamLimits

0x9070,	// (0x000a37b4) popup_number_entry_window_cp01_ParamLimits

0x9112,	// (0x000a3856) phacti_button_pane_ParamLimits

0x9112,	// (0x000a3856) phacti_button_pane

0x9cc5,	// (0x000a4409) bg_button_pane_cp14

0xeb0f,	// (0x000a9253) phacti_button_pane_t1

0x9123,	// (0x000a3867) main_touch_calib_button_pane_ParamLimits

0x9123,	// (0x000a3867) main_touch_calib_button_pane

0xa8b9,	// (0x000a4ffd) bg_button_pane_cp18_ParamLimits

0xa8b9,	// (0x000a4ffd) bg_button_pane_cp18

0xeb1d,	// (0x000a9261) main_touch_calib_button_pane_t1_ParamLimits

0xeb1d,	// (0x000a9261) main_touch_calib_button_pane_t1

0xeb33,	// (0x000a9277) main_touch_calib_button_pane_t2_ParamLimits

0xeb33,	// (0x000a9277) main_touch_calib_button_pane_t2

0x0001,

0x0b84,	// (0x0009b2c8) main_touch_calib_button_pane_t_ParamLimits

0x0b84,	// (0x0009b2c8) main_touch_calib_button_pane_t

0x9cc5,	// (0x000a4409) cell_ncimui_button_pane

0x9cc5,	// (0x000a4409) bg_button_pane_cp032

0xeb51,	// (0x000a9295) cell_ncimui_button_pane_t1

0x5fa4,	// (0x000a06e8) image3_infobar_pane_ParamLimits

0x5fa4,	// (0x000a06e8) image3_infobar_pane

0x8230,	// (0x000a2974) fs_bigclock_status_pane_ParamLimits

0x8230,	// (0x000a2974) fs_bigclock_status_pane

0x823d,	// (0x000a2981) main_fs_bigclock_clock_pane_ParamLimits

0x823d,	// (0x000a2981) main_fs_bigclock_clock_pane

0x8251,	// (0x000a2995) main_fs_bigclock_indi_pane_ParamLimits

0x8251,	// (0x000a2995) main_fs_bigclock_indi_pane

0x8279,	// (0x000a29bd) main_fs_bigclock_swipe_pane_ParamLimits

0x8279,	// (0x000a29bd) main_fs_bigclock_swipe_pane

0x9cc5,	// (0x000a4409) main_fs_clock_dumped_data

0xe40c,	// (0x000a8b50) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe40c,	// (0x000a8b50) list_single_fs_bigclock_indicator_pane_g1

0xe427,	// (0x000a8b6b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe427,	// (0x000a8b6b) list_single_fs_bigclock_indicator_pane_g2

0xe441,	// (0x000a8b85) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe441,	// (0x000a8b85) list_single_fs_bigclock_indicator_pane_g3

0xe45b,	// (0x000a8b9f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe45b,	// (0x000a8b9f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x09a8,	// (0x0009b0ec) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x09a8,	// (0x0009b0ec) list_single_fs_bigclock_indicator_pane_g

0xe486,	// (0x000a8bca) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe486,	// (0x000a8bca) list_single_fs_bigclock_indicator_pane_t1

0xe4ae,	// (0x000a8bf2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe4ae,	// (0x000a8bf2) list_single_fs_bigclock_indicator_pane_t2

0xe4d6,	// (0x000a8c1a) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe4d6,	// (0x000a8c1a) list_single_fs_bigclock_indicator_pane_t3

0xe4fe,	// (0x000a8c42) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4fe,	// (0x000a8c42) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09b3,	// (0x0009b0f7) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09b3,	// (0x0009b0f7) list_single_fs_bigclock_indicator_pane_t

0xeb5f,	// (0x000a92a3) image3_infobar_fav_pane_ParamLimits

0xeb5f,	// (0x000a92a3) image3_infobar_fav_pane

0xeb6f,	// (0x000a92b3) image3_infobar_loc_pane_ParamLimits

0xeb6f,	// (0x000a92b3) image3_infobar_loc_pane

0xeb83,	// (0x000a92c7) image3_infobar_time_pane_ParamLimits

0xeb83,	// (0x000a92c7) image3_infobar_time_pane

0xcd11,	// (0x000a7455) image3_infobar_time_pane_g1

0xeb93,	// (0x000a92d7) image3_infobar_time_pane_t1

0xcd11,	// (0x000a7455) image3_infobar_loc_pane_g1

0xeba1,	// (0x000a92e5) image3_infobar_loc_pane_g2

0x0001,

0x0b89,	// (0x0009b2cd) image3_infobar_loc_pane_g

0xeba9,	// (0x000a92ed) image3_infobar_loc_pane_t1

0xcd11,	// (0x000a7455) image3_infobar_fav_pane_g1

0xebb7,	// (0x000a92fb) image3_infobar_fav_pane_g2

0x0001,

0x0b8e,	// (0x0009b2d2) image3_infobar_fav_pane_g

0xebbf,	// (0x000a9303) fs_bigclock_status_battery_pane

0xebc8,	// (0x000a930c) fs_bigclock_status_signal_pane

0xebd1,	// (0x000a9315) fs_bigclock_status_title_pane

0xebda,	// (0x000a931e) fs_bigclock_status_signal_pane_g1

0xebe3,	// (0x000a9327) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b93,	// (0x0009b2d7) fs_bigclock_status_signal_pane_g

0xebeb,	// (0x000a932f) fs_bigclock_status_battery_pane_g1

0xebf4,	// (0x000a9338) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b98,	// (0x0009b2dc) fs_bigclock_status_battery_pane_g

0xebfc,	// (0x000a9340) fs_bigclock_status_title_pane_t1

0x9133,	// (0x000a3877) main_fs_bigclock_clock_pane_g1

0x9133,	// (0x000a3877) main_fs_bigclock_clock_pane_g2

0x9140,	// (0x000a3884) main_fs_bigclock_clock_pane_g3

0x9140,	// (0x000a3884) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb76,	// (0x000aa2ba) main_fs_bigclock_clock_pane_g

0x914c,	// (0x000a3890) main_fs_bigclock_clock_pane_t1

0x915f,	// (0x000a38a3) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb7f,	// (0x000aa2c3) main_fs_bigclock_clock_pane_t

0xec0a,	// (0x000a934e) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec0a,	// (0x000a934e) list_single_fs_bigclock_indicator_pane

0xec1b,	// (0x000a935f) list_single_fs_bigclock_pane_ParamLimits

0xec1b,	// (0x000a935f) list_single_fs_bigclock_pane

0xec41,	// (0x000a9385) main_fs_bigclock_indicator_pane_t1

0xec50,	// (0x000a9394) list_single_fs_bigclock_pane_g1

0xec58,	// (0x000a939c) list_single_fs_bigclock_pane_t1

0xcd11,	// (0x000a7455) main_fs_bigclock_swipe_pane_g1

0xec9b,	// (0x000a93df) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0bb7,	// (0x0009b2fb) main_fs_bigclock_swipe_pane_g

0xeca3,	// (0x000a93e7) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca3,	// (0x000a93e7) main_fs_bigclock_swipe_pane_t1

0x323e,	// (0x0009d982) call_type_pane_ParamLimits

0x9cc5,	// (0x000a4409) main_btmg_pane

0xa50d,	// (0x000a4c51) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa50d,	// (0x000a4c51) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb25,	// (0x000aa269) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb25,	// (0x000aa269) list_single_cale_mrui_row_pane_g

0xa593,	// (0x000a4cd7) list_recal_vselct_arw_lo_pane

0xeada,	// (0x000a921e) list_recal_vselct_arw_up_pane

0xa59b,	// (0x000a4cdf) list_recal_vselct_pane

0x91b6,	// (0x000a38fa) btmg_button_pane

0x91c2,	// (0x000a3906) main_btmg_pane_g1

0x9cc5,	// (0x000a4409) bg_button_pane_cp044

0xecc0,	// (0x000a9404) btmg_button_pane_t1

0xc8f5,	// (0x000a7039) aid_listscroll_gen

0xa478,	// (0x000a4bbc) main_cntbar_detail_pane

0xe80b,	// (0x000a8f4f) list_cmail_folder_pane

0xc2ba,	// (0x000a69fe) sp_fs_scroll_pane_cp03_ParamLimits

0x91ca,	// (0x000a390e) list_single_fs_dyc_pane_cp01_ParamLimits

0x91ca,	// (0x000a390e) list_single_fs_dyc_pane_cp01

0xecce,	// (0x000a9412) aid_size_cmail_indent

0xa612,	// (0x000a4d56) list_single_dyc_row_pane_cp01

0x920f,	// (0x000a3953) cntbar_detail_list_pane_ParamLimits

0x920f,	// (0x000a3953) cntbar_detail_list_pane

0x9249,	// (0x000a398d) main_cntbar_detail_cont_pane_ParamLimits

0x9249,	// (0x000a398d) main_cntbar_detail_cont_pane

0x3157,	// (0x0009d89b) scroll_pane_cp032_ParamLimits

0x3157,	// (0x0009d89b) scroll_pane_cp032

0x9255,	// (0x000a3999) cntbar_detail_list_event_pane_ParamLimits

0x9255,	// (0x000a3999) cntbar_detail_list_event_pane

0x921b,	// (0x000a395f) cntbar_detail_list_shct_pane

0xad2e,	// (0x000a5472) aid_list_gen

0xecd7,	// (0x000a941b) aid_scroll

0xece0,	// (0x000a9424) aid_size_touch_scroll_bar

0xb2dc,	// (0x000a5a20) aid_list_double

0x9269,	// (0x000a39ad) aid_list_single

0x7580,	// (0x000a1cc4) aid_list_single_lg

0x9272,	// (0x000a39b6) aid_list_z_g_a_sm

0x927a,	// (0x000a39be) aid_list_z_g_d

0x9282,	// (0x000a39c6) aid_txt_z_prm

0x9290,	// (0x000a39d4) aid_txt_z_prm_cp01

0x929e,	// (0x000a39e2) aid_txt_z_sec

0x92ac,	// (0x000a39f0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92ac,	// (0x000a39f0) main_cntbar_detail_cont_pane_g1

0x92b9,	// (0x000a39fd) main_cntbar_detail_cont_pane_g2_ParamLimits

0x92b9,	// (0x000a39fd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb8b,	// (0x000aa2cf) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb8b,	// (0x000aa2cf) main_cntbar_detail_cont_pane_g

0xece9,	// (0x000a942d) main_cntbar_detail_cont_pane_t1

0xecf7,	// (0x000a943b) main_cntbar_detail_cont_pane_t2

0xed05,	// (0x000a9449) main_cntbar_detail_cont_pane_t3

0x0002,

0x0bc1,	// (0x0009b305) main_cntbar_detail_cont_pane_t

0x92c5,	// (0x000a3a09) cell_cntbar_detail_list_shct_pane_ParamLimits

0x92c5,	// (0x000a3a09) cell_cntbar_detail_list_shct_pane

0xed13,	// (0x000a9457) cntbar_detail_list_shct_pane_g1

0xed1c,	// (0x000a9460) cntbar_detail_list_shct_pane_g2

0x0001,

0x0bc8,	// (0x0009b30c) cntbar_detail_list_shct_pane_g

0x92d9,	// (0x000a3a1d) cntbar_detail_list_event_pane_g1_ParamLimits

0x92d9,	// (0x000a3a1d) cntbar_detail_list_event_pane_g1

0x92e5,	// (0x000a3a29) cntbar_detail_list_event_pane_g2_ParamLimits

0x92e5,	// (0x000a3a29) cntbar_detail_list_event_pane_g2

0x0005,

0xfb90,	// (0x000aa2d4) cntbar_detail_list_event_pane_g_ParamLimits

0xfb90,	// (0x000aa2d4) cntbar_detail_list_event_pane_g

0x9351,	// (0x000a3a95) cntbar_detail_list_event_pane_t1_ParamLimits

0x9351,	// (0x000a3a95) cntbar_detail_list_event_pane_t1

0x9366,	// (0x000a3aaa) cntbar_detail_list_event_pane_t2_ParamLimits

0x9366,	// (0x000a3aaa) cntbar_detail_list_event_pane_t2

0x0002,

0xfb9d,	// (0x000aa2e1) cntbar_detail_list_event_pane_t_ParamLimits

0xfb9d,	// (0x000aa2e1) cntbar_detail_list_event_pane_t

0xcd11,	// (0x000a7455) cell_cntbar_detail_list_shct_pane_g1

0xb4b7,	// (0x000a5bfb) navi_pane_mv_g3

0xa478,	// (0x000a4bbc) main_cntbar_detail_pane_ParamLimits

0x9cc5,	// (0x000a4409) main_notif_wgt_pane

0x5c2e,	// (0x000a0372) aid_tch_main_mp4_pane_g4

0x5e8d,	// (0x000a05d1) popup_slider_window_cp02

0xa589,	// (0x000a4ccd) list_recal_day_event_pane

0x91ef,	// (0x000a3933) cntbar_detail_btn_pane_ParamLimits

0x91ef,	// (0x000a3933) cntbar_detail_btn_pane

0x91ff,	// (0x000a3943) cntbar_detail_btn_pane_cp01_ParamLimits

0x91ff,	// (0x000a3943) cntbar_detail_btn_pane_cp01

0x921b,	// (0x000a395f) cntbar_detail_list_shct_pane_ParamLimits

0x9227,	// (0x000a396b) cntbar_detail_pane_g1_ParamLimits

0x9227,	// (0x000a396b) cntbar_detail_pane_g1

0x9233,	// (0x000a3977) cntbar_detail_pane_t1_ParamLimits

0x9233,	// (0x000a3977) cntbar_detail_pane_t1

0x92f1,	// (0x000a3a35) cntbar_detail_list_event_pane_g3_ParamLimits

0x92f1,	// (0x000a3a35) cntbar_detail_list_event_pane_g3

0x9309,	// (0x000a3a4d) cntbar_detail_list_event_pane_g4_ParamLimits

0x9309,	// (0x000a3a4d) cntbar_detail_list_event_pane_g4

0x9321,	// (0x000a3a65) cntbar_detail_list_event_pane_g5_ParamLimits

0x9321,	// (0x000a3a65) cntbar_detail_list_event_pane_g5

0x9339,	// (0x000a3a7d) cntbar_detail_list_event_pane_g6_ParamLimits

0x9339,	// (0x000a3a7d) cntbar_detail_list_event_pane_g6

0x937b,	// (0x000a3abf) cntbar_detail_list_event_pane_t3_ParamLimits

0x937b,	// (0x000a3abf) cntbar_detail_list_event_pane_t3

0x938d,	// (0x000a3ad1) popup_notif_wgt_window_ParamLimits

0x938d,	// (0x000a3ad1) popup_notif_wgt_window

0x939d,	// (0x000a3ae1) popup_submenu_window_cp01_ParamLimits

0x939d,	// (0x000a3ae1) popup_submenu_window_cp01

0xaa87,	// (0x000a51cb) bg_popup_window_pane_cp10

0xed25,	// (0x000a9469) listscroll_notif_wgt_pane

0xed37,	// (0x000a947b) list_notif_wgt_window

0xed40,	// (0x000a9484) scroll_pane_cp033

0x93af,	// (0x000a3af3) list_notif_wgt_row_pane_ParamLimits

0x93af,	// (0x000a3af3) list_notif_wgt_row_pane

0xed49,	// (0x000a948d) aid_size_list_notif_wgt_del

0xed56,	// (0x000a949a) list_notif_wgt_row_pane_g1

0xed62,	// (0x000a94a6) list_notif_wgt_row_pane_g2

0xed71,	// (0x000a94b5) list_notif_wgt_row_pane_g3

0x0002,

0x0be1,	// (0x0009b325) list_notif_wgt_row_pane_g

0xed7e,	// (0x000a94c2) list_notif_wgt_row_pane_t1

0xed94,	// (0x000a94d8) list_notif_wgt_row_pane_t2

0xeda6,	// (0x000a94ea) list_notif_wgt_row_pane_t3

0x0002,

0x0be8,	// (0x0009b32c) list_notif_wgt_row_pane_t

0xd926,	// (0x000a806a) list_recal_day_event_pane_g1

0xedb8,	// (0x000a94fc) list_recal_day_event_pane_t1

0x9cc5,	// (0x000a4409) bg_button_pane_cp045

0x93c1,	// (0x000a3b05) cntbar_detail_btn_pane_t1

0xc909,	// (0x000a704d) main_callh_pane_ParamLimits

0xc909,	// (0x000a704d) main_callh_pane

0x9cc5,	// (0x000a4409) main_coverflow0_pane

0x9cc5,	// (0x000a4409) main_wgtman_pane

0x8291,	// (0x000a29d5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8291,	// (0x000a29d5) main_fs_bigclock_unlock_btn_pane

0x8bf9,	// (0x000a333d) bg_button_pane_cp16

0x8c09,	// (0x000a334d) cell_tport_appsw_pane_g3

0x93cf,	// (0x000a3b13) cf0_flow_pane_ParamLimits

0x93cf,	// (0x000a3b13) cf0_flow_pane

0xedc7,	// (0x000a950b) listscroll_cf0_pane

0xedd2,	// (0x000a9516) main_cf0_pane_g1

0x93de,	// (0x000a3b22) main_cf0_pane_t1_ParamLimits

0x93de,	// (0x000a3b22) main_cf0_pane_t1

0x93f2,	// (0x000a3b36) main_cf0_pane_t2_ParamLimits

0x93f2,	// (0x000a3b36) main_cf0_pane_t2

0x0001,

0xfba4,	// (0x000aa2e8) main_cf0_pane_t_ParamLimits

0xfba4,	// (0x000aa2e8) main_cf0_pane_t

0xede4,	// (0x000a9528) scroll_pane_cp11

0x9406,	// (0x000a3b4a) cf0_flow_pane_g1

0x940e,	// (0x000a3b52) cf0_flow_pane_g2

0x0001,

0xfba9,	// (0x000aa2ed) cf0_flow_pane_g

0x9416,	// (0x000a3b5a) cf0_flow_pane_t1

0x9cc5,	// (0x000a4409) main_call6_pane

0x9cc5,	// (0x000a4409) main_calllock_pane

0x9424,	// (0x000a3b68) call6_btn_grp_pane_ParamLimits

0x9424,	// (0x000a3b68) call6_btn_grp_pane

0x9433,	// (0x000a3b77) call6_pane_g1_ParamLimits

0x9433,	// (0x000a3b77) call6_pane_g1

0x9443,	// (0x000a3b87) popup_call6_1st_window_ParamLimits

0x9443,	// (0x000a3b87) popup_call6_1st_window

0x9451,	// (0x000a3b95) popup_call6_2nd_window_ParamLimits

0x9451,	// (0x000a3b95) popup_call6_2nd_window

0x945f,	// (0x000a3ba3) cell_call6_btn_pane_ParamLimits

0x945f,	// (0x000a3ba3) cell_call6_btn_pane

0xaa87,	// (0x000a51cb) bg_popup_call2_in_pane_cp03

0xedef,	// (0x000a9533) popup_call6_1st_window_g1

0xedf7,	// (0x000a953b) popup_call6_1st_window_g2

0xedff,	// (0x000a9543) popup_call6_1st_window_g3

0x0002,

0x0bfe,	// (0x0009b342) popup_call6_1st_window_g

0xee07,	// (0x000a954b) popup_call6_1st_window_t1

0xee16,	// (0x000a955a) popup_call6_1st_window_t2

0xee24,	// (0x000a9568) popup_call6_1st_window_t3

0x0002,

0x0c05,	// (0x0009b349) popup_call6_1st_window_t

0xaa87,	// (0x000a51cb) bg_popup_call2_in_pane_cp04

0xedef,	// (0x000a9533) popup_call6_2nd_window_g1

0xedf7,	// (0x000a953b) popup_call6_2nd_window_g2

0xedff,	// (0x000a9543) popup_call6_2nd_window_g3

0x0002,

0x0bfe,	// (0x0009b342) popup_call6_2nd_window_g

0xee07,	// (0x000a954b) popup_call6_2nd_window_t1

0x106d,	// (0x0009b7b1) bg_button_pane_cp15

0x946e,	// (0x000a3bb2) cell_call6_btn_pane_g1

0x9477,	// (0x000a3bbb) cell_call6_btn_pane_t1

0x9486,	// (0x000a3bca) listscroll_wgtman_pane_ParamLimits

0x9486,	// (0x000a3bca) listscroll_wgtman_pane

0x94a2,	// (0x000a3be6) wgtman_btn_pane_ParamLimits

0x94a2,	// (0x000a3be6) wgtman_btn_pane

0xb2ac,	// (0x000a59f0) aid_scroll_copy1

0xee32,	// (0x000a9576) list_wgtman_pane

0x94d7,	// (0x000a3c1b) wgtman_btn_pane_g1_ParamLimits

0x94d7,	// (0x000a3c1b) wgtman_btn_pane_g1

0x94ff,	// (0x000a3c43) wgtman_btn_pane_t1_ParamLimits

0x94ff,	// (0x000a3c43) wgtman_btn_pane_t1

0xee53,	// (0x000a9597) wgtman_btn_pane_t2_ParamLimits

0xee53,	// (0x000a9597) wgtman_btn_pane_t2

0x0001,

0xfbae,	// (0x000aa2f2) wgtman_btn_pane_t_ParamLimits

0xfbae,	// (0x000aa2f2) wgtman_btn_pane_t

0x9536,	// (0x000a3c7a) listrow_wgtman_pane_ParamLimits

0x9536,	// (0x000a3c7a) listrow_wgtman_pane

0x9551,	// (0x000a3c95) listrow_wgtman_pane_g1

0x955e,	// (0x000a3ca2) listrow_wgtman_pane_g2

0x0001,

0xfbb3,	// (0x000aa2f7) listrow_wgtman_pane_g

0x957c,	// (0x000a3cc0) listrow_wgtman_pane_t1

0x9594,	// (0x000a3cd8) listrow_wgtman_pane_t2

0x0001,

0xfbb8,	// (0x000aa2fc) listrow_wgtman_pane_t

0x95ba,	// (0x000a3cfe) wait_bar_pane_cp09

0xee6a,	// (0x000a95ae) main_calllock_btn_pane

0xee74,	// (0x000a95b8) main_calllock_pane_g1

0x9cc5,	// (0x000a4409) bg_button_pane_cp17

0xee3c,	// (0x000a9580) main_calllock_btn_pane_g1

0xee80,	// (0x000a95c4) main_calllock_btn_pane_t1

0x9cc5,	// (0x000a4409) main_dialer3_pane

0x9cc5,	// (0x000a4409) main_fmrd2_pane

0xcd11,	// (0x000a7455) main_fs_bigclock_unlock_btn_pane_g1

0x95d4,	// (0x000a3d18) main_fs_bigclock_unlock_btn_pane_t1

0x95e2,	// (0x000a3d26) area_fmrd2_info_pane_ParamLimits

0x95e2,	// (0x000a3d26) area_fmrd2_info_pane

0x95f0,	// (0x000a3d34) area_fmrd2_visual_pane_ParamLimits

0x95f0,	// (0x000a3d34) area_fmrd2_visual_pane

0x95fe,	// (0x000a3d42) fmrd2_indi_pane_ParamLimits

0x95fe,	// (0x000a3d42) fmrd2_indi_pane

0x960b,	// (0x000a3d4f) area_fmrd2_visual_pane_g1

0x9613,	// (0x000a3d57) area_fmrd2_visual_pane_t1

0x9623,	// (0x000a3d67) area_fmrd2_visual_pane_t2

0x9633,	// (0x000a3d77) area_fmrd2_visual_pane_t3

0x0002,

0xfbc2,	// (0x000aa306) area_fmrd2_visual_pane_t

0x9643,	// (0x000a3d87) area_fmrd2_info_pane_g1

0x964b,	// (0x000a3d8f) area_fmrd2_info_pane_t1

0x965b,	// (0x000a3d9f) area_fmrd2_info_pane_t2

0x966b,	// (0x000a3daf) area_fmrd2_info_pane_t3

0x967b,	// (0x000a3dbf) area_fmrd2_info_pane_t4

0x0003,

0xfbc9,	// (0x000aa30d) area_fmrd2_info_pane_t

0x9689,	// (0x000a3dcd) fmrd2_indi_pane_t1

0x9699,	// (0x000a3ddd) fmrd2_indi_pane_t2

0x96a9,	// (0x000a3ded) fmrd2_indi_pane_t3

0x0002,

0xfbd2,	// (0x000aa316) fmrd2_indi_pane_t

0xe46a,	// (0x000a8bae) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe46a,	// (0x000a8bae) list_single_fs_bigclock_indicator_pane_g5

0xe51b,	// (0x000a8c5f) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe51b,	// (0x000a8c5f) list_single_fs_bigclock_indicator_pane_t5

0x8da4,	// (0x000a34e8) aid_cell_bcale_month_pane_ParamLimits

0x8da4,	// (0x000a34e8) aid_cell_bcale_month_pane

0x8dc2,	// (0x000a3506) bcale_month_pane_ParamLimits

0x8dc2,	// (0x000a3506) bcale_month_pane

0x8de0,	// (0x000a3524) bcale_preview_pane_ParamLimits

0x8de0,	// (0x000a3524) bcale_preview_pane

0xec58,	// (0x000a939c) list_single_fs_bigclock_pane_t1_ParamLimits

0xec77,	// (0x000a93bb) list_single_fs_bigclock_pane_t2_ParamLimits

0xec77,	// (0x000a93bb) list_single_fs_bigclock_pane_t2

0x0001,

0x0bb2,	// (0x0009b2f6) list_single_fs_bigclock_pane_t_ParamLimits

0x0bb2,	// (0x0009b2f6) list_single_fs_bigclock_pane_t

0x95cc,	// (0x000a3d10) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbbd,	// (0x000aa301) main_fs_bigclock_unlock_btn_pane_g

0x96b7,	// (0x000a3dfb) aid_dia3_key_size_ParamLimits

0x96b7,	// (0x000a3dfb) aid_dia3_key_size

0x96c3,	// (0x000a3e07) aid_dia3_listrow_size_ParamLimits

0x96c3,	// (0x000a3e07) aid_dia3_listrow_size

0x96d3,	// (0x000a3e17) dia3_keypad_fun_pane_ParamLimits

0x96d3,	// (0x000a3e17) dia3_keypad_fun_pane

0x96e5,	// (0x000a3e29) dia3_keypad_num_pane_ParamLimits

0x96e5,	// (0x000a3e29) dia3_keypad_num_pane

0x96f7,	// (0x000a3e3b) dia3_listscroll_pane_ParamLimits

0x96f7,	// (0x000a3e3b) dia3_listscroll_pane

0x9705,	// (0x000a3e49) dia3_numentry_pane_ParamLimits

0x9705,	// (0x000a3e49) dia3_numentry_pane

0xee8f,	// (0x000a95d3) dia3_list_pane

0xee9a,	// (0x000a95de) scroll_pane_cp12

0x9cc5,	// (0x000a4409) bg_dia3_numentry_pane

0x9713,	// (0x000a3e57) dia3_numentry_pane_t1

0x9722,	// (0x000a3e66) cell_dia3_key_num_pane

0x972a,	// (0x000a3e6e) cell_dia3_key0_fun_pane_ParamLimits

0x972a,	// (0x000a3e6e) cell_dia3_key0_fun_pane

0x9737,	// (0x000a3e7b) cell_dia3_key1_fun_pane_ParamLimits

0x9737,	// (0x000a3e7b) cell_dia3_key1_fun_pane

0x9744,	// (0x000a3e88) dia3_listrow_pane

0xe1bd,	// (0x000a8901) bg_dia3_numentry_pane_g1

0x9cc5,	// (0x000a4409) bg_button_pane_cp21

0xeea5,	// (0x000a95e9) cell_dia3_key_num_pane_t1

0xeeb3,	// (0x000a95f7) cell_dia3_key_num_pane_t2

0xeec2,	// (0x000a9606) cell_dia3_key_num_pane_t3

0xeed1,	// (0x000a9615) cell_dia3_key_num_pane_t4

0x0003,

0xfbd9,	// (0x000aa31d) cell_dia3_key_num_pane_t

0x9cc5,	// (0x000a4409) bg_button_pane_cp19

0x9751,	// (0x000a3e95) cell_dia3_key0_fun_pane_g1

0x9cc5,	// (0x000a4409) bg_button_pane_cp20

0x9759,	// (0x000a3e9d) cell_dia3_key1_fun_pane_g1

0x9761,	// (0x000a3ea5) area_left_week_number_pane

0x9774,	// (0x000a3eb8) area_top_day_name_pane

0x9782,	// (0x000a3ec6) frame_month_view_pane

0xeee0,	// (0x000a9624) grid_month_view_pane

0x9797,	// (0x000a3edb) cell_top_day_name_pane_ParamLimits

0x9797,	// (0x000a3edb) cell_top_day_name_pane

0x97b1,	// (0x000a3ef5) cell_area_left_week_number_pane_ParamLimits

0x97b1,	// (0x000a3ef5) cell_area_left_week_number_pane

0x97d4,	// (0x000a3f18) cell_month_view_pane_ParamLimits

0x97d4,	// (0x000a3f18) cell_month_view_pane

0xeeee,	// (0x000a9632) frm_month_g1

0x9800,	// (0x000a3f44) frm_month_g2

0x9811,	// (0x000a3f55) frm_month_g3

0x9822,	// (0x000a3f66) frm_month_g4

0x9833,	// (0x000a3f77) frm_month_g5

0x9846,	// (0x000a3f8a) frm_month_g6

0x9859,	// (0x000a3f9d) frm_month_g7

0xeefb,	// (0x000a963f) frm_month_g8

0x986c,	// (0x000a3fb0) frm_month_g9

0x9879,	// (0x000a3fbd) frm_month_g10

0x9886,	// (0x000a3fca) frm_month_g11

0x9893,	// (0x000a3fd7) frm_month_g12

0x98a0,	// (0x000a3fe4) frm_month_g13

0x98ad,	// (0x000a3ff1) frm_month_g14

0x98bc,	// (0x000a4000) frm_month_g15

0x98cb,	// (0x000a400f) frm_month_g16

0x000f,

0xfbe2,	// (0x000aa326) frm_month_g

0xef08,	// (0x000a964c) cell_top_day_name_pane_t1

0x98da,	// (0x000a401e) cell_area_left_week_number_pane_g1

0x98e9,	// (0x000a402d) cell_area_left_week_number_pane_t1

0xcf74,	// (0x000a76b8) cell_month_view_pane_g1

0x98ff,	// (0x000a4043) cell_month_view_pane_t1

0x9cc5,	// (0x000a4409) main_fps_pane

0xe738,	// (0x000a8e7c) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe738,	// (0x000a8e7c) cmail_ddmenu_btn02_pane_cp1

0xe754,	// (0x000a8e98) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe754,	// (0x000a8e98) cmail_ddmenu_btn02_pane_cp2

0x909a,	// (0x000a37de) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x909a,	// (0x000a37de) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb57,	// (0x000aa29b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb57,	// (0x000aa29b) cmail_ddmenu_btn02_pane_g

0x90b8,	// (0x000a37fc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x90b8,	// (0x000a37fc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb5c,	// (0x000aa2a0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb5c,	// (0x000aa2a0) cmail_ddmenu_btn02_pane_t

0x9915,	// (0x000a4059) fps_text_pane_ParamLimits

0x9915,	// (0x000a4059) fps_text_pane

0x9922,	// (0x000a4066) main_fps_pane_g1_ParamLimits

0x9922,	// (0x000a4066) main_fps_pane_g1

0x9930,	// (0x000a4074) wait_bar_pane_cp010_ParamLimits

0x9930,	// (0x000a4074) wait_bar_pane_cp010

0x993c,	// (0x000a4080) fps_text_pane_t1_ParamLimits

0x993c,	// (0x000a4080) fps_text_pane_t1

0x6346,	// (0x000a0a8a) cam4_image_uncrop_pane_g1

0x634f,	// (0x000a0a93) cam4_image_uncrop_pane_g2

0x6358,	// (0x000a0a9c) cam4_image_uncrop_pane_g3

0x6361,	// (0x000a0aa5) cam4_image_uncrop_pane_g4

0x0003,

0xf724,	// (0x000a9e68) cam4_image_uncrop_pane_g

0x9744,	// (0x000a3e88) dia3_listrow_pane_ParamLimits

0x9cc5,	// (0x000a4409) main_phob2_pane

0x8bdb,	// (0x000a331f) cell_tport_appsw_pane_cp02_ParamLimits

0x8bdb,	// (0x000a331f) cell_tport_appsw_pane_cp02

0x8bea,	// (0x000a332e) cell_tport_appsw_pane_cp03_ParamLimits

0x8bea,	// (0x000a332e) cell_tport_appsw_pane_cp03

0x9cc5,	// (0x000a4409) phob2_contact_card_pane

0x9cc5,	// (0x000a4409) phob2_listscroll_pane

0xef1b,	// (0x000a965f) phob2_list_pane

0xef23,	// (0x000a9667) scroll_pane_cp034

0x9955,	// (0x000a4099) phob2_cc_data_pane_ParamLimits

0x9955,	// (0x000a4099) phob2_cc_data_pane

0x996f,	// (0x000a40b3) phob2_cc_listscroll_pane_ParamLimits

0x996f,	// (0x000a40b3) phob2_cc_listscroll_pane

0x9536,	// (0x000a3c7a) list_double_large_graphic_phob2_pane_ParamLimits

0x9536,	// (0x000a3c7a) list_double_large_graphic_phob2_pane

0x9989,	// (0x000a40cd) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9989,	// (0x000a40cd) list_double_large_graphic_phob2_pane_g1

0x999f,	// (0x000a40e3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x999f,	// (0x000a40e3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc03,	// (0x000aa347) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc03,	// (0x000aa347) list_double_large_graphic_phob2_pane_g

0x99ab,	// (0x000a40ef) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99ab,	// (0x000a40ef) list_double_large_graphic_phob2_pane_t1

0x99c0,	// (0x000a4104) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99c0,	// (0x000a4104) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc08,	// (0x000aa34c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc08,	// (0x000aa34c) list_double_large_graphic_phob2_pane_t

0x9cc5,	// (0x000a4409) list_highlight_pane_cp024

0x99d2,	// (0x000a4116) phob2_cc_button_pane

0x99da,	// (0x000a411e) phob2_cc_data_pane_g1_ParamLimits

0x99da,	// (0x000a411e) phob2_cc_data_pane_g1

0x99e6,	// (0x000a412a) phob2_cc_data_pane_g2_ParamLimits

0x99e6,	// (0x000a412a) phob2_cc_data_pane_g2

0x0001,

0xfc0d,	// (0x000aa351) phob2_cc_data_pane_g_ParamLimits

0xfc0d,	// (0x000aa351) phob2_cc_data_pane_g

0x99f2,	// (0x000a4136) phob2_cc_data_pane_t1_ParamLimits

0x99f2,	// (0x000a4136) phob2_cc_data_pane_t1

0x9a04,	// (0x000a4148) phob2_cc_data_pane_t2_ParamLimits

0x9a04,	// (0x000a4148) phob2_cc_data_pane_t2

0x9a16,	// (0x000a415a) phob2_cc_data_pane_t3_ParamLimits

0x9a16,	// (0x000a415a) phob2_cc_data_pane_t3

0x0002,

0xfc12,	// (0x000aa356) phob2_cc_data_pane_t_ParamLimits

0xfc12,	// (0x000aa356) phob2_cc_data_pane_t

0xef2b,	// (0x000a966f) phob2_cc_list_pane_ParamLimits

0xef2b,	// (0x000a966f) phob2_cc_list_pane

0xdb80,	// (0x000a82c4) scroll_pane_cp035_ParamLimits

0xdb80,	// (0x000a82c4) scroll_pane_cp035

0xa478,	// (0x000a4bbc) bg_button_pane_cp033

0xef37,	// (0x000a967b) phob2_cc_button_pane_g1

0xef43,	// (0x000a9687) phob2_cc_button_pane_t1

0xef58,	// (0x000a969c) phob2_cc_button_pane_t2

0x0001,

0xfc19,	// (0x000aa35d) phob2_cc_button_pane_t

0x9a28,	// (0x000a416c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a28,	// (0x000a416c) list_double_large_graphic_phob2_cc_pane

0x9a96,	// (0x000a41da) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a96,	// (0x000a41da) list_double_large_graphic_phob2_cc_pane_g1

0x9aa7,	// (0x000a41eb) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9aa7,	// (0x000a41eb) list_double_large_graphic_phob2_cc_pane_g2

0x9ab3,	// (0x000a41f7) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9ab3,	// (0x000a41f7) list_double_large_graphic_phob2_cc_pane_g3

0x9abf,	// (0x000a4203) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9abf,	// (0x000a4203) list_double_large_graphic_phob2_cc_pane_g4

0x9acb,	// (0x000a420f) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9acb,	// (0x000a420f) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc1e,	// (0x000aa362) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc1e,	// (0x000aa362) list_double_large_graphic_phob2_cc_pane_g

0x9ad7,	// (0x000a421b) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ad7,	// (0x000a421b) list_double_large_graphic_phob2_cc_pane_t1

0x9b00,	// (0x000a4244) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b00,	// (0x000a4244) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc29,	// (0x000aa36d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc29,	// (0x000aa36d) list_double_large_graphic_phob2_cc_pane_t

0xef6a,	// (0x000a96ae) list_highlight_pane_cp025_ParamLimits

0xef6a,	// (0x000a96ae) list_highlight_pane_cp025

0xa478,	// (0x000a4bbc) bg_button_pane_cp033_ParamLimits

0xef37,	// (0x000a967b) phob2_cc_button_pane_g1_ParamLimits

0xef43,	// (0x000a9687) phob2_cc_button_pane_t1_ParamLimits

0xef58,	// (0x000a969c) phob2_cc_button_pane_t2_ParamLimits

0xfc19,	// (0x000aa35d) phob2_cc_button_pane_t_ParamLimits

0x1061,	// (0x0009b7a5) popup_wgtman_window

0xd802,	// (0x000a7f46) scroll_pane_cp038

0x94bf,	// (0x000a3c03) wgtman_btn_pane_cp_01_ParamLimits

0x94bf,	// (0x000a3c03) wgtman_btn_pane_cp_01

0xef78,	// (0x000a96bc) wgtman_content_pane

0xef81,	// (0x000a96c5) wgtman_heading_pane

0x9cc5,	// (0x000a4409) bg_heading_pane_cp02

0xef8a,	// (0x000a96ce) wgtman_heading_pane_g1

0xef92,	// (0x000a96d6) wgtman_heading_pane_t1

0xefa0,	// (0x000a96e4) scroll_pane_cp036

0xefa8,	// (0x000a96ec) wgtman_list_pane

0xefb0,	// (0x000a96f4) wgtman_list_pane_t1_ParamLimits

0xefb0,	// (0x000a96f4) wgtman_list_pane_t1

0x62a5,	// (0x000a09e9) cam4_grid_pane

0x7040,	// (0x000a1784) bg_button_pane_cp015_ParamLimits

0x7052,	// (0x000a1796) bg_button_pane_cp016_ParamLimits

0x7065,	// (0x000a17a9) bg_button_pane_cp017_ParamLimits

0x70bb,	// (0x000a17ff) popup_vitu2_query_window_g3_ParamLimits

0x70bb,	// (0x000a17ff) popup_vitu2_query_window_g3

0x7176,	// (0x000a18ba) popup_vitu2_query_window_t6_ParamLimits

0x7176,	// (0x000a18ba) popup_vitu2_query_window_t6

0x71a1,	// (0x000a18e5) popup_vitu2_query_window_t7_ParamLimits

0x71a1,	// (0x000a18e5) popup_vitu2_query_window_t7

0xdb8c,	// (0x000a82d0) cam4_grid_pane_g1

0xdb95,	// (0x000a82d9) cam4_grid_pane_g2

0xefca,	// (0x000a970e) cam4_grid_pane_g3

0xefd3,	// (0x000a9717) cam4_grid_pane_g4

0x0003,

0xfc2e,	// (0x000aa372) cam4_grid_pane_g

0x1ee8,	// (0x0009c62c) aid_placing_vt_slider_lsc_ParamLimits

0x2234,	// (0x0009c978) vidtel_button_pane_ParamLimits

0x2234,	// (0x0009c978) vidtel_button_pane

0x9cc5,	// (0x000a4409) bg_button_pane_cp034

0xefde,	// (0x000a9722) vidtel_button_pane_g1

0xefe6,	// (0x000a972a) vidtel_button_pane_t1

0xd904,	// (0x000a8048) aid_size_vtel_slider_touch

0xdb80,	// (0x000a82c4) scroll_pane_cp039

0x7fce,	// (0x000a2712) ncim_query_button_pane_cp01_ParamLimits

0x7fed,	// (0x000a2731) ncimui_query_pane_g1_ParamLimits

0xa478,	// (0x000a4bbc) input_focus_pane_cp012_ParamLimits

0xe1fb,	// (0x000a893f) ncim_query_entry_pane_t1_ParamLimits

0xdb80,	// (0x000a82c4) scroll_pane_cp039_ParamLimits

0xb3a2,	// (0x000a5ae6) navi_pane_bcale_mc_g1

0xb3aa,	// (0x000a5aee) navi_pane_bcale_mc_t1

0xe788,	// (0x000a8ecc) main_sp_fs_email_pane_g1

0xe794,	// (0x000a8ed8) main_sp_fs_email_pane_g2

0x0001,

0x0a1d,	// (0x0009b161) main_sp_fs_email_pane_g

0xe9dc,	// (0x000a9120) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe9dc,	// (0x000a9120) list_single_cale_mrui_row_pane_g3

0x90d8,	// (0x000a381c) list_single_recal_day_pane_g5_event_pane

0xa5e6,	// (0x000a4d2a) list_single_recal_day_pane_g7

0xeffc,	// (0x000a9740) list_recal_day_event_pane_cp01

0xf005,	// (0x000a9749) list_recal_vselct_arw_lo_pane_cp01

0xf00d,	// (0x000a9751) list_recal_vselct_arw_up_pane_cp01

0xf015,	// (0x000a9759) list_recal_vselct_pane_cp01

0xd926,	// (0x000a806a) list_recal_day_event_pane_cp01_g1

0xa61b,	// (0x000a4d5f) list_recal_day_event_pane_cp01_t1

0xa5ee,	// (0x000a4d32) list_single_recal_day_pane_t1_ParamLimits

0xa600,	// (0x000a4d44) list_single_recal_day_pane_t2_ParamLimits

0xfb6c,	// (0x000aa2b0) list_single_recal_day_pane_t_ParamLimits

0xa7f4,	// (0x000a4f38) bg_notes_pane_ParamLimits

0xa897,	// (0x000a4fdb) list_notes_pane_ParamLimits

0x13c9,	// (0x0009bb0d) scroll_pane_cp06_ParamLimits

0xa8b9,	// (0x000a4ffd) main_notes_pane_ParamLimits

0xa478,	// (0x000a4bbc) main_welc_pane

0x9b38,	// (0x000a427c) main_welc_body_pane_ParamLimits

0x9b38,	// (0x000a427c) main_welc_body_pane

0x9b52,	// (0x000a4296) main_welc_opti_pane_ParamLimits

0x9b52,	// (0x000a4296) main_welc_opti_pane

0x9b91,	// (0x000a42d5) main_welc_pane_t1_ParamLimits

0x9b91,	// (0x000a42d5) main_welc_pane_t1

0x9bed,	// (0x000a4331) main_welc_body_row_pane_ParamLimits

0x9bed,	// (0x000a4331) main_welc_body_row_pane

0xee45,	// (0x000a9589) main_welc_opti_row_pane_ParamLimits

0xee45,	// (0x000a9589) main_welc_opti_row_pane

0xf01f,	// (0x000a9763) main_welc_opti_row_pane_g1

0x9c12,	// (0x000a4356) main_welc_opti_row_pane_t1

0xf027,	// (0x000a976b) main_welc_body_row_pane_t1

0xed2f,	// (0x000a9473) popup_notif_wgt_heading_pane

0xed49,	// (0x000a948d) aid_size_list_notif_wgt_del_ParamLimits

0xed56,	// (0x000a949a) list_notif_wgt_row_pane_g1_ParamLimits

0xed62,	// (0x000a94a6) list_notif_wgt_row_pane_g2_ParamLimits

0xed71,	// (0x000a94b5) list_notif_wgt_row_pane_g3_ParamLimits

0x0be1,	// (0x0009b325) list_notif_wgt_row_pane_g_ParamLimits

0xed7e,	// (0x000a94c2) list_notif_wgt_row_pane_t1_ParamLimits

0xed94,	// (0x000a94d8) list_notif_wgt_row_pane_t2_ParamLimits

0xeda6,	// (0x000a94ea) list_notif_wgt_row_pane_t3_ParamLimits

0x0be8,	// (0x0009b32c) list_notif_wgt_row_pane_t_ParamLimits

0x9551,	// (0x000a3c95) listrow_wgtman_pane_g1_ParamLimits

0x955e,	// (0x000a3ca2) listrow_wgtman_pane_g2_ParamLimits

0xfbb3,	// (0x000aa2f7) listrow_wgtman_pane_g_ParamLimits

0x957c,	// (0x000a3cc0) listrow_wgtman_pane_t1_ParamLimits

0x9594,	// (0x000a3cd8) listrow_wgtman_pane_t2_ParamLimits

0xfbb8,	// (0x000aa2fc) listrow_wgtman_pane_t_ParamLimits

0x95ba,	// (0x000a3cfe) wait_bar_pane_cp09_ParamLimits

0x9cc5,	// (0x000a4409) bg_popup_heading_pane_cp02

0xf036,	// (0x000a977a) popup_notif_wgt_heading_pane_g1

0xf03e,	// (0x000a9782) popup_notif_wgt_heading_pane_t1

0x9cc5,	// (0x000a4409) main_vids_pane

0x9cc5,	// (0x000a4409) vids_listscroll_pane

0x9c21,	// (0x000a4365) scroll_pane_cp040

0x9cc5,	// (0x000a4409) vids_list_pane

0x9c2c,	// (0x000a4370) vids_list_double_pane_ParamLimits

0x9c2c,	// (0x000a4370) vids_list_double_pane

0x9c46,	// (0x000a438a) vids_list_double_pane_g1

0x9c4f,	// (0x000a4393) vids_list_double_pane_t1

0x9c5f,	// (0x000a43a3) vids_list_double_pane_t2

0x0001,

0xfc45,	// (0x000aa389) vids_list_double_pane_t

0x4286,	// (0x0009e9ca) main_ncimui_pane_ParamLimits

0x7e25,	// (0x000a2569) main_ncimui_pane_g1_ParamLimits

0x7e31,	// (0x000a2575) main_ncimui_pane_g2_ParamLimits

0x7e31,	// (0x000a2575) main_ncimui_pane_g2

0x0001,

0xf9d7,	// (0x000aa11b) main_ncimui_pane_g_ParamLimits

0xf9d7,	// (0x000aa11b) main_ncimui_pane_g

0x9b6b,	// (0x000a42af) main_welc_pane_g1_ParamLimits

0x9b6b,	// (0x000a42af) main_welc_pane_g1

0x9b77,	// (0x000a42bb) main_welc_pane_g2_ParamLimits

0x9b77,	// (0x000a42bb) main_welc_pane_g2

0x0002,

0xfc37,	// (0x000aa37b) main_welc_pane_g_ParamLimits

0xfc37,	// (0x000aa37b) main_welc_pane_g

0xa7f4,	// (0x000a4f38) listscroll_mce_pane_ParamLimits

0xb505,	// (0x000a5c49) wait_bar_pane_cp10

0xc8fd,	// (0x000a7041) main_cale_day_pane_ParamLimits

0xc8fd,	// (0x000a7041) main_cale_week_pane_ParamLimits

0xa7f4,	// (0x000a4f38) main_messa_pane_ParamLimits

0x55cf,	// (0x0009fd13) main_clock2_btn_pane_ParamLimits

0x55cf,	// (0x0009fd13) main_clock2_btn_pane

0xd11c,	// (0x000a7860) main_clock2_btn_pane_cp01_ParamLimits

0xd11c,	// (0x000a7860) main_clock2_btn_pane_cp01

0xe9ad,	// (0x000a90f1) list_cale_mrui_pane_ParamLimits

0xeddc,	// (0x000a9520) main_cf0_pane_g2

0x0001,

0x0bef,	// (0x0009b333) main_cf0_pane_g

0x9761,	// (0x000a3ea5) area_left_week_number_pane_ParamLimits

0x9774,	// (0x000a3eb8) area_top_day_name_pane_ParamLimits

0x9782,	// (0x000a3ec6) frame_month_view_pane_ParamLimits

0xeee0,	// (0x000a9624) grid_month_view_pane_ParamLimits

0xeeee,	// (0x000a9632) frm_month_g1_ParamLimits

0x9800,	// (0x000a3f44) frm_month_g2_ParamLimits

0x9811,	// (0x000a3f55) frm_month_g3_ParamLimits

0x9822,	// (0x000a3f66) frm_month_g4_ParamLimits

0x9833,	// (0x000a3f77) frm_month_g5_ParamLimits

0x9846,	// (0x000a3f8a) frm_month_g6_ParamLimits

0x9859,	// (0x000a3f9d) frm_month_g7_ParamLimits

0xeefb,	// (0x000a963f) frm_month_g8_ParamLimits

0x986c,	// (0x000a3fb0) frm_month_g9_ParamLimits

0x9879,	// (0x000a3fbd) frm_month_g10_ParamLimits

0x9886,	// (0x000a3fca) frm_month_g11_ParamLimits

0x9893,	// (0x000a3fd7) frm_month_g12_ParamLimits

0x98a0,	// (0x000a3fe4) frm_month_g13_ParamLimits

0x98ad,	// (0x000a3ff1) frm_month_g14_ParamLimits

0x98bc,	// (0x000a4000) frm_month_g15_ParamLimits

0x98cb,	// (0x000a400f) frm_month_g16_ParamLimits

0xfbe2,	// (0x000aa326) frm_month_g_ParamLimits

0xef08,	// (0x000a964c) cell_top_day_name_pane_t1_ParamLimits

0x98da,	// (0x000a401e) cell_area_left_week_number_pane_g1_ParamLimits

0x98e9,	// (0x000a402d) cell_area_left_week_number_pane_t1_ParamLimits

0xcf74,	// (0x000a76b8) cell_month_view_pane_g1_ParamLimits

0x98ff,	// (0x000a4043) cell_month_view_pane_t1_ParamLimits

0xa7ec,	// (0x000a4f30) main_clock2_btn_pane_g1

0xf04c,	// (0x000a9790) main_clock2_btn_pane_t1

0xa478,	// (0x000a4bbc) listscroll_cmail_pane_ParamLimits

0xe788,	// (0x000a8ecc) main_sp_fs_email_pane_g1_ParamLimits

0xe794,	// (0x000a8ed8) main_sp_fs_email_pane_g2_ParamLimits

0x0a1d,	// (0x0009b161) main_sp_fs_email_pane_g_ParamLimits

0xeabb,	// (0x000a91ff) list_recal_day_pane_ParamLimits

0xeacc,	// (0x000a9210) mian_recal_day_pane_t1

0x88a7,	// (0x000a2feb) list_single_dyc_row_text_pane_t4_ParamLimits

0x88a7,	// (0x000a2feb) list_single_dyc_row_text_pane_t4

0x88de,	// (0x000a3022) list_single_dyc_row_text_pane_t5_ParamLimits

0x88de,	// (0x000a3022) list_single_dyc_row_text_pane_t5

0xa249,	// (0x000a498d) list_single_dyc_row_text_pane_t6_ParamLimits

0xa249,	// (0x000a498d) list_single_dyc_row_text_pane_t6

0x3089,	// (0x0009d7cd) aid_mgn_list_cale_time_pane

0x4286,	// (0x0009e9ca) main_gallery2_pane_ParamLimits

0xd132,	// (0x000a7876) main_clock2_pane_cp01_t1

0xd142,	// (0x000a7886) main_clock2_pane_cp01_t3

0x0001,

0x04f4,	// (0x0009ac38) main_clock2_pane_cp01_t

0x181b,	// (0x0009bf5f) cale_week_scroll_pane_g16_ParamLimits

0x181b,	// (0x0009bf5f) cale_week_scroll_pane_g16

0xaa87,	// (0x000a51cb) vorec_slider_pane

0xefe6,	// (0x000a972a) vidtel_button_pane_t1_ParamLimits

0x9133,	// (0x000a3877) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9133,	// (0x000a3877) main_fs_bigclock_clock_pane_g2_ParamLimits

0x9140,	// (0x000a3884) main_fs_bigclock_clock_pane_g3_ParamLimits

0x9140,	// (0x000a3884) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb76,	// (0x000aa2ba) main_fs_bigclock_clock_pane_g_ParamLimits

0x914c,	// (0x000a3890) main_fs_bigclock_clock_pane_t1_ParamLimits

0x915f,	// (0x000a38a3) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb7f,	// (0x000aa2c3) main_fs_bigclock_clock_pane_t_ParamLimits

0x4e6e,	// (0x0009f5b2) main_mup3_lyrics_pane_ParamLimits

0x4e6e,	// (0x0009f5b2) main_mup3_lyrics_pane

0x9c93,	// (0x000a43d7) main_mup3_lyrics_pane_t1_ParamLimits

0x9c93,	// (0x000a43d7) main_mup3_lyrics_pane_t1

0x5c18,	// (0x000a035c) aid_main_mp4_pane_t1_area

0x5c22,	// (0x000a0366) aid_main_mp4_pane_t2_area

0x5d21,	// (0x000a0465) main_mp4_pane_g7_ParamLimits

0x5d21,	// (0x000a0465) main_mp4_pane_g7

0x5d2d,	// (0x000a0471) main_mp4_pane_g8_ParamLimits

0x5d2d,	// (0x000a0471) main_mp4_pane_g8

0x614d,	// (0x000a0891) aid_call6_pane_g1_size

0x9a6a,	// (0x000a41ae) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9a6a,	// (0x000a41ae) list_double_large_graphic_phob2_other_pane

0xae42,	// (0x000a5586) list_double_large_graphic_phob2_other_pane_g1

0x9cc5,	// (0x000a4409) list_highlight_pane_cp026

0xa478,	// (0x000a4bbc) main_welc_pane_ParamLimits

0x8618,	// (0x000a2d5c) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x8618,	// (0x000a2d5c) main_sp_fs_ctrlbar_pane_g3

0x8630,	// (0x000a2d74) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x8630,	// (0x000a2d74) main_sp_fs_ctrlbar_pane_g4

0x8662,	// (0x000a2da6) toolbar2_fixed_button_pane_cp01

0x866d,	// (0x000a2db1) toolbar2_fixed_button_pane_cp02

0x8678,	// (0x000a2dbc) toolbar2_fixed_button_pane_cp03

0x9b29,	// (0x000a426d) list_welc_entry_pane_ParamLimits

0x9b29,	// (0x000a426d) list_welc_entry_pane

0x9b85,	// (0x000a42c9) main_welc_pane_g3_ParamLimits

0x9b85,	// (0x000a42c9) main_welc_pane_g3

0x9bab,	// (0x000a42ef) main_welc_pane_t2_ParamLimits

0x9bab,	// (0x000a42ef) main_welc_pane_t2

0x9bbf,	// (0x000a4303) main_welc_pane_t3_ParamLimits

0x9bbf,	// (0x000a4303) main_welc_pane_t3

0x0002,

0xfc3e,	// (0x000aa382) main_welc_pane_t_ParamLimits

0xfc3e,	// (0x000aa382) main_welc_pane_t

0x9bd1,	// (0x000a4315) welc_button_pane_ParamLimits

0x9bd1,	// (0x000a4315) welc_button_pane

0x9bdf,	// (0x000a4323) welc_service_logo_pane_ParamLimits

0x9bdf,	// (0x000a4323) welc_service_logo_pane

0xf05a,	// (0x000a979e) list_single_welc_entry_pane_ParamLimits

0xf05a,	// (0x000a979e) list_single_welc_entry_pane

0xf06b,	// (0x000a97af) list_single_welc_entry_pane_g1

0xf073,	// (0x000a97b7) list_single_welc_entry_pane_t1

0xf081,	// (0x000a97c5) list_single_welc_entry_pane_t2

0x0001,

0x0ca8,	// (0x0009b3ec) list_single_welc_entry_pane_t

0x9cc5,	// (0x000a4409) bg_button_pane_cp035

0xf08f,	// (0x000a97d3) welc_button_pane_t1

0xf09d,	// (0x000a97e1) welc_service_logo_pane_g1

0xf0a6,	// (0x000a97ea) welc_service_logo_pane_g2

0x0001,

0x0cad,	// (0x0009b3f1) welc_service_logo_pane_g
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

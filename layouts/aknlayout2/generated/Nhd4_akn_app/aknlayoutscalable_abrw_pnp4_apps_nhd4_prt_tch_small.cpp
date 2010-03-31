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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005c56d };

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
0x0d4a,	// (0x0005d2b7) Screen

0x0d56,	// (0x0005d2c3) application_window

0x0db2,	// (0x0005d31f) area_bottom_pane_ParamLimits

0x0db2,	// (0x0005d31f) area_bottom_pane

0x0e0b,	// (0x0005d378) area_top_pane_ParamLimits

0x0e0b,	// (0x0005d378) area_top_pane

0x0e6f,	// (0x0005d3dc) call_video_uplink_pane_ParamLimits

0x0e6f,	// (0x0005d3dc) call_video_uplink_pane

0x0eae,	// (0x0005d41b) main_pane_ParamLimits

0x0eae,	// (0x0005d41b) main_pane

0xc817,	// (0x00068d84) context_pane

0x4390,	// (0x000608fd) navi_pane

0x43b6,	// (0x00060923) popup_cale_events_window_ParamLimits

0x43b6,	// (0x00060923) popup_cale_events_window

0xc82a,	// (0x00068d97) popup_mup_playback_window

0x43ce,	// (0x0006093b) signal_pane

0xa7a1,	// (0x00066d0e) main_browser_pane

0xb3e6,	// (0x00067953) main_burst_pane

0x4218,	// (0x00060785) main_calc_pane

0xc7fd,	// (0x00068d6a) main_cale_day_pane

0x15f9,	// (0x0005db66) main_cale_month_pane

0xc7fd,	// (0x00068d6a) main_cale_week_pane

0xb3e6,	// (0x00067953) main_call_pane

0xa215,	// (0x00066782) main_call_poc_pane

0xb3e6,	// (0x00067953) main_camera_pane

0xb3e6,	// (0x00067953) main_chi_dic_pane

0xb163,	// (0x000676d0) main_clock_pane

0xa215,	// (0x00066782) main_fmradio_pane

0xb3e6,	// (0x00067953) main_graph_messa_pane

0xa215,	// (0x00066782) main_help_pane

0xa7a1,	// (0x00066d0e) main_im_pane

0xa6bd,	// (0x00066c2a) main_image_pane_ParamLimits

0xa6bd,	// (0x00066c2a) main_image_pane

0xa215,	// (0x00066782) main_location2_pane

0xb3e6,	// (0x00067953) main_location_pane

0xa6bd,	// (0x00066c2a) main_messa_pane

0xa215,	// (0x00066782) main_mp2_pane

0xb3e6,	// (0x00067953) main_mp_pane

0xa215,	// (0x00066782) main_msg_pane

0xa215,	// (0x00066782) main_mup_eq_pane

0xa215,	// (0x00066782) main_mup_pane

0xa7a1,	// (0x00066d0e) main_notes_pane

0xa215,	// (0x00066782) main_pec_pane

0xa215,	// (0x00066782) main_phob_pane

0xa215,	// (0x00066782) main_pinb_pane

0xa215,	// (0x00066782) main_postcard_pane

0xa215,	// (0x00066782) main_qdial_pane

0xb3e6,	// (0x00067953) main_skin_pane

0xa215,	// (0x00066782) main_smil2_pane

0xb3e6,	// (0x00067953) main_smil_pane

0xb3e6,	// (0x00067953) main_video_pane

0xb3e6,	// (0x00067953) main_video_tele_pane

0xa6bd,	// (0x00066c2a) main_viewer_pane_ParamLimits

0xa6bd,	// (0x00066c2a) main_viewer_pane

0xb3e6,	// (0x00067953) main_vorec_pane

0x4264,	// (0x000607d1) popup_blid_sat_info_window_ParamLimits

0x4264,	// (0x000607d1) popup_blid_sat_info_window

0x4284,	// (0x000607f1) popup_dyc_status_message_window_ParamLimits

0x4284,	// (0x000607f1) popup_dyc_status_message_window

0x4292,	// (0x000607ff) popup_grid_large_graphic_window_ParamLimits

0x4292,	// (0x000607ff) popup_grid_large_graphic_window

0x4321,	// (0x0006088e) popup_loc_request_window_ParamLimits

0x4321,	// (0x0006088e) popup_loc_request_window

0x4368,	// (0x000608d5) popup_wml_address_window_ParamLimits

0x4368,	// (0x000608d5) popup_wml_address_window

0x40f0,	// (0x0006065d) call_muted_g1

0x3dae,	// (0x0006031b) popup_call_audio_conf_window_ParamLimits

0x3dae,	// (0x0006031b) popup_call_audio_conf_window

0x4100,	// (0x0006066d) popup_call_audio_first_window_ParamLimits

0x4100,	// (0x0006066d) popup_call_audio_first_window

0x4140,	// (0x000606ad) popup_call_audio_in_window_ParamLimits

0x4140,	// (0x000606ad) popup_call_audio_in_window

0x4164,	// (0x000606d1) popup_call_audio_out_window_ParamLimits

0x4164,	// (0x000606d1) popup_call_audio_out_window

0x4186,	// (0x000606f3) popup_call_audio_second_window_ParamLimits

0x4186,	// (0x000606f3) popup_call_audio_second_window

0x41b6,	// (0x00060723) popup_call_audio_wait_window_ParamLimits

0x41b6,	// (0x00060723) popup_call_audio_wait_window

0x41d7,	// (0x00060744) popup_number_entry_window_ParamLimits

0x41d7,	// (0x00060744) popup_number_entry_window

0x988a,	// (0x00065df7) bg_popup_call_pane_cp05_ParamLimits

0x988a,	// (0x00065df7) bg_popup_call_pane_cp05

0x98aa,	// (0x00065e17) popup_number_entry_window_t1

0x98bd,	// (0x00065e2a) popup_number_entry_window_t2

0x98cf,	// (0x00065e3c) popup_number_entry_window_t3

0x0003,

0xf0cd,	// (0x0006b63a) popup_number_entry_window_t

0x98e1,	// (0x00065e4e) text_title_cp2

0x98f4,	// (0x00065e61) bg_popup_call_pane_cp_ParamLimits

0x98f4,	// (0x00065e61) bg_popup_call_pane_cp

0x9902,	// (0x00065e6f) call_thumbnail_pane

0x990a,	// (0x00065e77) popup_call_audio_in_window_g1_ParamLimits

0x990a,	// (0x00065e77) popup_call_audio_in_window_g1

0x9916,	// (0x00065e83) popup_call_audio_in_window_g2_ParamLimits

0x9916,	// (0x00065e83) popup_call_audio_in_window_g2

0x9922,	// (0x00065e8f) popup_call_audio_in_window_g3_ParamLimits

0x9922,	// (0x00065e8f) popup_call_audio_in_window_g3

0x0002,

0xf0d6,	// (0x0006b643) popup_call_audio_in_window_g_ParamLimits

0xf0d6,	// (0x0006b643) popup_call_audio_in_window_g

0x992e,	// (0x00065e9b) popup_call_audio_in_window_t1_ParamLimits

0x992e,	// (0x00065e9b) popup_call_audio_in_window_t1

0x994a,	// (0x00065eb7) popup_call_audio_in_window_t2_ParamLimits

0x994a,	// (0x00065eb7) popup_call_audio_in_window_t2

0x9966,	// (0x00065ed3) popup_call_audio_in_window_t3_ParamLimits

0x9966,	// (0x00065ed3) popup_call_audio_in_window_t3

0x0002,

0xf0dd,	// (0x0006b64a) popup_call_audio_in_window_t_ParamLimits

0xf0dd,	// (0x0006b64a) popup_call_audio_in_window_t

0x98f4,	// (0x00065e61) bg_popup_call_pane_cp01_ParamLimits

0x98f4,	// (0x00065e61) bg_popup_call_pane_cp01

0x9902,	// (0x00065e6f) call_thumbnail_pane_cp02

0x9979,	// (0x00065ee6) call_type_pane_cp022

0x9981,	// (0x00065eee) popup_call_audio_out_window_g1_ParamLimits

0x9981,	// (0x00065eee) popup_call_audio_out_window_g1

0x9993,	// (0x00065f00) popup_call_audio_out_window_g2_ParamLimits

0x9993,	// (0x00065f00) popup_call_audio_out_window_g2

0x999f,	// (0x00065f0c) popup_call_audio_out_window_g3_ParamLimits

0x999f,	// (0x00065f0c) popup_call_audio_out_window_g3

0x0002,

0xf0e4,	// (0x0006b651) popup_call_audio_out_window_g_ParamLimits

0xf0e4,	// (0x0006b651) popup_call_audio_out_window_g

0x99b1,	// (0x00065f1e) popup_call_audio_out_window_t1_ParamLimits

0x99b1,	// (0x00065f1e) popup_call_audio_out_window_t1

0x99c9,	// (0x00065f36) popup_call_audio_out_window_t2_ParamLimits

0x99c9,	// (0x00065f36) popup_call_audio_out_window_t2

0x0001,

0xf0eb,	// (0x0006b658) popup_call_audio_out_window_t_ParamLimits

0xf0eb,	// (0x0006b658) popup_call_audio_out_window_t

0x99de,	// (0x00065f4b) bg_popup_call_pane_ParamLimits

0x99de,	// (0x00065f4b) bg_popup_call_pane

0x10ca,	// (0x0005d637) call_thumbnail_pane_cp_ParamLimits

0x10ca,	// (0x0005d637) call_thumbnail_pane_cp

0x9a62,	// (0x00065fcf) call_type_pane_cp01_ParamLimits

0x9a62,	// (0x00065fcf) call_type_pane_cp01

0x9aa6,	// (0x00066013) popup_call_audio_first_window_g1_ParamLimits

0x9aa6,	// (0x00066013) popup_call_audio_first_window_g1

0x9af2,	// (0x0006605f) popup_call_audio_first_window_g2_ParamLimits

0x9af2,	// (0x0006605f) popup_call_audio_first_window_g2

0x0001,

0xf0f0,	// (0x0006b65d) popup_call_audio_first_window_g_ParamLimits

0xf0f0,	// (0x0006b65d) popup_call_audio_first_window_g

0x9b36,	// (0x000660a3) popup_call_audio_first_window_t1_ParamLimits

0x9b36,	// (0x000660a3) popup_call_audio_first_window_t1

0x9be2,	// (0x0006614f) popup_call_audio_first_window_t4_ParamLimits

0x9be2,	// (0x0006614f) popup_call_audio_first_window_t4

0xa1e6,	// (0x00066753) popup_call_audio_first_window_t5_ParamLimits

0xa1e6,	// (0x00066753) popup_call_audio_first_window_t5

0x0002,

0xf0f5,	// (0x0006b662) popup_call_audio_first_window_t_ParamLimits

0xf0f5,	// (0x0006b662) popup_call_audio_first_window_t

0xa215,	// (0x00066782) bg_popup_call_pane_cp02

0xa21f,	// (0x0006678c) call_type_pane_cp023

0xa227,	// (0x00066794) popup_call_audio_wait_window_g1

0xa22f,	// (0x0006679c) popup_call_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0006b669) popup_call_audio_wait_window_g

0xa237,	// (0x000667a4) popup_call_audio_wait_window_t3

0xa245,	// (0x000667b2) bg_popup_call_pane_cp03_ParamLimits

0xa245,	// (0x000667b2) bg_popup_call_pane_cp03

0xa40d,	// (0x0006697a) call_thumbnail_pane_cp011_ParamLimits

0xa40d,	// (0x0006697a) call_thumbnail_pane_cp011

0xa419,	// (0x00066986) call_type_pane_cp034_ParamLimits

0xa419,	// (0x00066986) call_type_pane_cp034

0xa455,	// (0x000669c2) popup_call_audio_second_window_g1_ParamLimits

0xa455,	// (0x000669c2) popup_call_audio_second_window_g1

0xa491,	// (0x000669fe) popup_call_audio_second_window_g2_ParamLimits

0xa491,	// (0x000669fe) popup_call_audio_second_window_g2

0x0001,

0xf101,	// (0x0006b66e) popup_call_audio_second_window_g_ParamLimits

0xf101,	// (0x0006b66e) popup_call_audio_second_window_g

0xa4cd,	// (0x00066a3a) popup_call_audio_second_window_t1_ParamLimits

0xa4cd,	// (0x00066a3a) popup_call_audio_second_window_t1

0xa633,	// (0x00066ba0) popup_call_audio_second_window_t2_ParamLimits

0xa633,	// (0x00066ba0) popup_call_audio_second_window_t2

0xa669,	// (0x00066bd6) popup_call_audio_second_window_t3_ParamLimits

0xa669,	// (0x00066bd6) popup_call_audio_second_window_t3

0x0002,

0xf106,	// (0x0006b673) popup_call_audio_second_window_t_ParamLimits

0xf106,	// (0x0006b673) popup_call_audio_second_window_t

0xa215,	// (0x00066782) bg_popup_call_pane_cp04

0xa69f,	// (0x00066c0c) list_conf_pane

0xa6a7,	// (0x00066c14) popup_call_audio_conf_window_t1

0xa6b5,	// (0x00066c22) call_thumbnail_pane_g1

0xa6bd,	// (0x00066c2a) bg_pinb_pane_ParamLimits

0xa6bd,	// (0x00066c2a) bg_pinb_pane

0xa6cb,	// (0x00066c38) find_pinb_pane

0xa6d4,	// (0x00066c41) listscroll_pinb_pane_ParamLimits

0xa6d4,	// (0x00066c41) listscroll_pinb_pane

0xa6e3,	// (0x00066c50) pinb_bg_pane_g1

0x10ee,	// (0x0005d65b) pinb_bg_pane_g2

0x10fa,	// (0x0005d667) pinb_bg_pane_g3

0x1106,	// (0x0005d673) pinb_bg_pane_g4

0x1112,	// (0x0005d67f) pinb_bg_pane_g5

0x111e,	// (0x0005d68b) pinb_bg_pane_g6

0x1129,	// (0x0005d696) pinb_bg_pane_g7

0x1134,	// (0x0005d6a1) pinb_bg_pane_g8

0x113f,	// (0x0005d6ac) pinb_bg_pane_g9

0x1149,	// (0x0005d6b6) pinb_bg_pane_g10

0x0009,

0xf10d,	// (0x0006b67a) pinb_bg_pane_g

0x1166,	// (0x0005d6d3) grid_pinb_pane

0x1171,	// (0x0005d6de) list_pinb_pane

0x117c,	// (0x0005d6e9) scroll_pane_cp01_ParamLimits

0x117c,	// (0x0005d6e9) scroll_pane_cp01

0xa6ed,	// (0x00066c5a) find_pinb_pane_g1_ParamLimits

0xa6ed,	// (0x00066c5a) find_pinb_pane_g1

0xa705,	// (0x00066c72) find_pinb_pane_t1

0xa717,	// (0x00066c84) find_pinb_pane_t2

0x0001,

0xf127,	// (0x0006b694) find_pinb_pane_t

0xa72c,	// (0x00066c99) input_focus_pane_cp01_ParamLimits

0xa72c,	// (0x00066c99) input_focus_pane_cp01

0x118e,	// (0x0005d6fb) cell_pinb_pane_ParamLimits

0x118e,	// (0x0005d6fb) cell_pinb_pane

0xa738,	// (0x00066ca5) cell_pinb_pane_g1_ParamLimits

0xa738,	// (0x00066ca5) cell_pinb_pane_g1

0xa74b,	// (0x00066cb8) cell_pinb_pane_g2_ParamLimits

0xa74b,	// (0x00066cb8) cell_pinb_pane_g2

0xa757,	// (0x00066cc4) cell_pinb_pane_g3_ParamLimits

0xa757,	// (0x00066cc4) cell_pinb_pane_g3

0x0002,

0xf12c,	// (0x0006b699) cell_pinb_pane_g_ParamLimits

0xf12c,	// (0x0006b699) cell_pinb_pane_g

0xa215,	// (0x00066782) grid_highlight_pane_cp01

0x11bd,	// (0x0005d72a) list_pinb_item_pane_ParamLimits

0x11bd,	// (0x0005d72a) list_pinb_item_pane

0xa215,	// (0x00066782) list_highlight_pane_cp02

0x11e7,	// (0x0005d754) list_pinb_item_pane_g1_ParamLimits

0x11e7,	// (0x0005d754) list_pinb_item_pane_g1

0x11f4,	// (0x0005d761) list_pinb_item_pane_g2_ParamLimits

0x11f4,	// (0x0005d761) list_pinb_item_pane_g2

0x1200,	// (0x0005d76d) list_pinb_item_pane_g3_ParamLimits

0x1200,	// (0x0005d76d) list_pinb_item_pane_g3

0x1211,	// (0x0005d77e) list_pinb_item_pane_g4_ParamLimits

0x1211,	// (0x0005d77e) list_pinb_item_pane_g4

0x0003,

0xf133,	// (0x0006b6a0) list_pinb_item_pane_g_ParamLimits

0xf133,	// (0x0006b6a0) list_pinb_item_pane_g

0x121d,	// (0x0005d78a) list_pinb_item_pane_t1_ParamLimits

0x121d,	// (0x0005d78a) list_pinb_item_pane_t1

0x124e,	// (0x0005d7bb) calc_display_pane

0x126c,	// (0x0005d7d9) calc_paper_pane

0x1288,	// (0x0005d7f5) grid_calc_pane

0xa215,	// (0x00066782) bg_list_pane_cp01

0x12b4,	// (0x0005d821) clock_g1

0x12bc,	// (0x0005d829) clock_g2

0x0001,

0xf13c,	// (0x0006b6a9) clock_g

0x12c6,	// (0x0005d833) clock_t1_ParamLimits

0x12c6,	// (0x0005d833) clock_t1

0x12db,	// (0x0005d848) clock_t2_ParamLimits

0x12db,	// (0x0005d848) clock_t2

0x12ed,	// (0x0005d85a) clock_t3_ParamLimits

0x12ed,	// (0x0005d85a) clock_t3

0x12ff,	// (0x0005d86c) clock_t4_ParamLimits

0x12ff,	// (0x0005d86c) clock_t4

0x1311,	// (0x0005d87e) clock_t5_ParamLimits

0x1311,	// (0x0005d87e) clock_t5

0x1326,	// (0x0005d893) clock_t6_ParamLimits

0x1326,	// (0x0005d893) clock_t6

0x1338,	// (0x0005d8a5) clock_t7_ParamLimits

0x1338,	// (0x0005d8a5) clock_t7

0x134a,	// (0x0005d8b7) clock_t8_ParamLimits

0x134a,	// (0x0005d8b7) clock_t8

0x1360,	// (0x0005d8cd) clock_t9_ParamLimits

0x1360,	// (0x0005d8cd) clock_t9

0x0008,

0xf141,	// (0x0006b6ae) clock_t_ParamLimits

0xf141,	// (0x0006b6ae) clock_t

0xa763,	// (0x00066cd0) popup_clock_analogue_window_cp02

0xa763,	// (0x00066cd0) popup_clock_digital_window_cp01

0xa76b,	// (0x00066cd8) listscroll_help_pane

0xa215,	// (0x00066782) phob_pre_status_pane

0xa775,	// (0x00066ce2) grid_qdial_pane

0xa6bd,	// (0x00066c2a) listscroll_mce_pane

0xa6bd,	// (0x00066c2a) bg_notes_pane

0xa77f,	// (0x00066cec) list_notes_pane

0x1376,	// (0x0005d8e3) scroll_pane_cp06

0xa78d,	// (0x00066cfa) bg_calc_paper_pane

0x1385,	// (0x0005d8f2) list_calc_pane

0xa7a1,	// (0x00066d0e) bg_calc_display_pane

0x139f,	// (0x0005d90c) calc_display_pane_t1

0x13b4,	// (0x0005d921) calc_display_pane_t2

0x13c9,	// (0x0005d936) calc_display_pane_t3

0x0002,

0xf154,	// (0x0006b6c1) calc_display_pane_t

0x13db,	// (0x0005d948) cell_calc_pane_ParamLimits

0x13db,	// (0x0005d948) cell_calc_pane

0xa7ad,	// (0x00066d1a) bg_calc_paper_pane_g1

0xa7b9,	// (0x00066d26) bg_calc_paper_pane_g2

0xa7c5,	// (0x00066d32) bg_calc_paper_pane_g3

0xa7d1,	// (0x00066d3e) bg_calc_paper_pane_g4

0xa7dd,	// (0x00066d4a) bg_calc_paper_pane_g5

0x1408,	// (0x0005d975) bg_calc_paper_pane_g6

0x1419,	// (0x0005d986) bg_calc_paper_pane_g7

0x142a,	// (0x0005d997) bg_calc_paper_pane_g8

0x0007,

0xf15b,	// (0x0006b6c8) bg_calc_paper_pane_g

0x143b,	// (0x0005d9a8) calc_bg_paper_pane_g9

0x144c,	// (0x0005d9b9) list_calc_item_pane_ParamLimits

0x144c,	// (0x0005d9b9) list_calc_item_pane

0xa7e9,	// (0x00066d56) list_calc_item_pane_g1

0x1480,	// (0x0005d9ed) list_calc_item_pane_t1_ParamLimits

0x1480,	// (0x0005d9ed) list_calc_item_pane_t1

0x1492,	// (0x0005d9ff) list_calc_item_pane_t2_ParamLimits

0x1492,	// (0x0005d9ff) list_calc_item_pane_t2

0x0001,

0xf16c,	// (0x0006b6d9) list_calc_item_pane_t_ParamLimits

0xf16c,	// (0x0006b6d9) list_calc_item_pane_t

0xa7f6,	// (0x00066d63) cell_calc_pane_g1

0xa800,	// (0x00066d6d) grid_highlight_pane_cp02

0xa822,	// (0x00066d8f) bg_calc_display_pane_g1

0x14c2,	// (0x0005da2f) bg_calc_display_pane_g2

0xa82b,	// (0x00066d98) bg_calc_display_pane_g3

0x0002,

0xf176,	// (0x0006b6e3) bg_calc_display_pane_g

0x14cc,	// (0x0005da39) cell_qdial_pane_ParamLimits

0x14cc,	// (0x0005da39) cell_qdial_pane

0x14e0,	// (0x0005da4d) cell_qdial_pane_g1_ParamLimits

0x14e0,	// (0x0005da4d) cell_qdial_pane_g1

0x14ed,	// (0x0005da5a) cell_qdial_pane_g2_ParamLimits

0x14ed,	// (0x0005da5a) cell_qdial_pane_g2

0xa834,	// (0x00066da1) cell_qdial_pane_g3_ParamLimits

0xa834,	// (0x00066da1) cell_qdial_pane_g3

0x0003,

0xf17d,	// (0x0006b6ea) cell_qdial_pane_g_ParamLimits

0xf17d,	// (0x0006b6ea) cell_qdial_pane_g

0x150a,	// (0x0005da77) cell_qdial_pane_t1_ParamLimits

0x150a,	// (0x0005da77) cell_qdial_pane_t1

0x1522,	// (0x0005da8f) cell_qdial_pane_t2_ParamLimits

0x1522,	// (0x0005da8f) cell_qdial_pane_t2

0x1535,	// (0x0005daa2) cell_qdial_pane_t3_ParamLimits

0x1535,	// (0x0005daa2) cell_qdial_pane_t3

0x0002,

0xf186,	// (0x0006b6f3) cell_qdial_pane_t_ParamLimits

0xf186,	// (0x0006b6f3) cell_qdial_pane_t

0xa215,	// (0x00066782) grid_highlight_pane_cp04

0xa840,	// (0x00066dad) thumbnail_qdial_pane_ParamLimits

0xa840,	// (0x00066dad) thumbnail_qdial_pane

0xa89c,	// (0x00066e09) list_help_pane

0xa8a5,	// (0x00066e12) scroll_pane_cp02

0x1548,	// (0x0005dab5) help_list_pane_t1_ParamLimits

0x1548,	// (0x0005dab5) help_list_pane_t1

0x1582,	// (0x0005daef) bg_notes_pane_g2

0x158a,	// (0x0005daf7) bg_notes_pane_g3

0x1592,	// (0x0005daff) notes_bg_pane_g1

0x159a,	// (0x0005db07) notes_bg_pane_g4

0x15a2,	// (0x0005db0f) notes_bg_pane_g5

0x15aa,	// (0x0005db17) notes_bg_pane_g6

0x15b2,	// (0x0005db1f) notes_bg_pane_g7

0x15ba,	// (0x0005db27) notes_bg_pane_g8

0x15c2,	// (0x0005db2f) notes_bg_pane_g9

0x0006,

0xf1a4,	// (0x0006b711) notes_bg_pane_g

0x15ca,	// (0x0005db37) list_notes_text_pane_ParamLimits

0x15ca,	// (0x0005db37) list_notes_text_pane

0xa8ae,	// (0x00066e1b) list_notes_text_pane_g1

0x9c6e,	// (0x000661db) list_notes_text_pane_t1

0x15f9,	// (0x0005db66) listscroll_cale_week_pane

0x161e,	// (0x0005db8b) bg_cale_heading_pane

0xa8d1,	// (0x00066e3e) bg_cale_pane_cp01

0x1640,	// (0x0005dbad) cale_week_corner_pane

0x165a,	// (0x0005dbc7) cale_week_day_heading_pane

0x167c,	// (0x0005dbe9) cale_week_scroll_pane_g1

0x1699,	// (0x0005dc06) cale_week_scroll_pane_g2

0x16ac,	// (0x0005dc19) cale_week_scroll_pane_g3

0x16bf,	// (0x0005dc2c) cale_week_scroll_pane_g4

0x16d2,	// (0x0005dc3f) cale_week_scroll_pane_g5

0x16e5,	// (0x0005dc52) cale_week_scroll_pane_g6

0x16f8,	// (0x0005dc65) cale_week_scroll_pane_g7

0x170b,	// (0x0005dc78) cale_week_scroll_pane_g8

0x1720,	// (0x0005dc8d) cale_week_scroll_pane_g9

0x1733,	// (0x0005dca0) cale_week_scroll_pane_g10

0x1746,	// (0x0005dcb3) cale_week_scroll_pane_g11

0x1759,	// (0x0005dcc6) cale_week_scroll_pane_g12

0x1770,	// (0x0005dcdd) cale_week_scroll_pane_g13

0x178b,	// (0x0005dcf8) cale_week_scroll_pane_g14

0x17a6,	// (0x0005dd13) cale_week_scroll_pane_g15

0x000e,

0xf1b3,	// (0x0006b720) cale_week_scroll_pane_g

0x17c1,	// (0x0005dd2e) cale_week_time_pane

0x17d6,	// (0x0005dd43) grid_cale_week_pane

0xa901,	// (0x00066e6e) scroll_pane_cp08

0x17f7,	// (0x0005dd64) cell_cale_week_pane_ParamLimits

0x17f7,	// (0x0005dd64) cell_cale_week_pane

0x185b,	// (0x0005ddc8) cale_week_day_heading_pane_t1

0x1896,	// (0x0005de03) cale_week_day_heading_pane_t2

0x18d1,	// (0x0005de3e) cale_week_day_heading_pane_t3

0x190c,	// (0x0005de79) cale_week_day_heading_pane_t4

0x1947,	// (0x0005deb4) cale_week_day_heading_pane_t5

0x1982,	// (0x0005deef) cale_week_day_heading_pane_t6

0x19bd,	// (0x0005df2a) cale_week_day_heading_pane_t7

0x0006,

0xf1d2,	// (0x0006b73f) cale_week_day_heading_pane_t

0xa91e,	// (0x00066e8b) bg_cale_side_pane

0x19f8,	// (0x0005df65) cale_week_time_pane_t1

0x1a12,	// (0x0005df7f) cale_week_time_pane_t2

0x1a2c,	// (0x0005df99) cale_week_time_pane_t3

0x1a46,	// (0x0005dfb3) cale_week_time_pane_t4

0x1a60,	// (0x0005dfcd) cale_week_time_pane_t5

0x1a7c,	// (0x0005dfe9) cale_week_time_pane_t6

0x1a9e,	// (0x0005e00b) cale_week_time_pane_t7

0x1ac2,	// (0x0005e02f) cale_week_time_pane_t8

0x0007,

0xf1e1,	// (0x0006b74e) cale_week_time_pane_t

0x1ae8,	// (0x0005e055) cell_cale_week_pane_g2

0x1afb,	// (0x0005e068) cell_cale_week_pane_g3_ParamLimits

0x1afb,	// (0x0005e068) cell_cale_week_pane_g3

0xa92c,	// (0x00066e99) grid_highlight_pane_cp07

0xa934,	// (0x00066ea1) listscroll_gms_pane

0xa93e,	// (0x00066eab) grid_gms_pane

0xa947,	// (0x00066eb4) listscroll_gms_pane_g1

0xa94f,	// (0x00066ebc) listscroll_gms_pane_g2

0x0001,

0xf1f2,	// (0x0006b75f) listscroll_gms_pane_g

0x1b13,	// (0x0005e080) scroll_pane_cp010

0x1b1e,	// (0x0005e08b) cell_gms_pane_ParamLimits

0x1b1e,	// (0x0005e08b) cell_gms_pane

0x1b2e,	// (0x0005e09b) cell_gms_pane_g1

0xa957,	// (0x00066ec4) cell_gms_pane_g2

0xa8ae,	// (0x00066e1b) cell_gms_pane_g3

0xa95f,	// (0x00066ecc) cell_gms_pane_g4

0x0003,

0xf1f7,	// (0x0006b764) cell_gms_pane_g

0xa968,	// (0x00066ed5) grid_highlight_pane_cp09

0x4098,	// (0x00060605) phob_pre_status_pane_g1

0x40a0,	// (0x0006060d) phob_pre_status_pane_g2

0x40a8,	// (0x00060615) phob_pre_status_pane_g3

0x40b0,	// (0x0006061d) phob_pre_status_pane_g4

0x0004,

0xf535,	// (0x0006baa2) phob_pre_status_pane_g

0x40c0,	// (0x0006062d) phob_pre_status_pane_t1

0x40d0,	// (0x0006063d) phob_pre_status_pane_t2

0x40e0,	// (0x0006064d) phob_pre_status_pane_t3

0x0002,

0xf540,	// (0x0006baad) phob_pre_status_pane_t

0xa215,	// (0x00066782) bg_list_pane_cp05

0x1b3e,	// (0x0005e0ab) grid_vorec_pane

0x1b48,	// (0x0005e0b5) vorec_t1

0x1b56,	// (0x0005e0c3) vorec_t2

0x1b64,	// (0x0005e0d1) vorec_t3

0x1b72,	// (0x0005e0df) vorec_t4

0x1b80,	// (0x0005e0ed) vorec_t5

0x1b8e,	// (0x0005e0fb) vorec_t6

0x0006,

0xf200,	// (0x0006b76d) vorec_t

0x1baa,	// (0x0005e117) wait_bar_pane_cp01

0x1bb2,	// (0x0005e11f) cell_vorec_pane_ParamLimits

0x1bb2,	// (0x0005e11f) cell_vorec_pane

0x1bc5,	// (0x0005e132) cell_vorec_pane_g1

0xa215,	// (0x00066782) grid_highlight_pane_cp05

0x1bdf,	// (0x0005e14c) cams_zoom_pane

0x1beb,	// (0x0005e158) image_vga_pane

0x1bfa,	// (0x0005e167) main_camera_pane_g1

0x1c08,	// (0x0005e175) main_camera_pane_g2

0x1c14,	// (0x0005e181) main_camera_pane_g3

0x1c20,	// (0x0005e18d) main_camera_pane_g4

0x1c2c,	// (0x0005e199) main_camera_pane_g5

0x1c38,	// (0x0005e1a5) main_camera_pane_g6

0x1c44,	// (0x0005e1b1) main_camera_pane_g7

0x0007,

0xf20f,	// (0x0006b77c) main_camera_pane_g

0x1c50,	// (0x0005e1bd) main_camera_pane_t1

0x1c62,	// (0x0005e1cf) main_camera_pane_t2

0x0001,

0xf220,	// (0x0006b78d) main_camera_pane_t

0x1c83,	// (0x0005e1f0) cams_zoom_pane_cp_ParamLimits

0x1c83,	// (0x0005e1f0) cams_zoom_pane_cp

0x1ca7,	// (0x0005e214) image_cif_pane_ParamLimits

0x1ca7,	// (0x0005e214) image_cif_pane

0x1cc5,	// (0x0005e232) image_subqcif_pane

0x1ccd,	// (0x0005e23a) main_video_pane_g1_ParamLimits

0x1ccd,	// (0x0005e23a) main_video_pane_g1

0x1ced,	// (0x0005e25a) main_video_pane_g2_ParamLimits

0x1ced,	// (0x0005e25a) main_video_pane_g2

0x1d1d,	// (0x0005e28a) main_video_pane_g3_ParamLimits

0x1d1d,	// (0x0005e28a) main_video_pane_g3

0x1d46,	// (0x0005e2b3) main_video_pane_g4_ParamLimits

0x1d46,	// (0x0005e2b3) main_video_pane_g4

0x1d6f,	// (0x0005e2dc) main_video_pane_g5_ParamLimits

0x1d6f,	// (0x0005e2dc) main_video_pane_g5

0xa97c,	// (0x00066ee9) main_video_pane_g6_ParamLimits

0xa97c,	// (0x00066ee9) main_video_pane_g6

0x0006,

0xf225,	// (0x0006b792) main_video_pane_g_ParamLimits

0xf225,	// (0x0006b792) main_video_pane_g

0x1d91,	// (0x0005e2fe) main_video_pane_t1_ParamLimits

0x1d91,	// (0x0005e2fe) main_video_pane_t1

0xa996,	// (0x00066f03) cams_zoom_pane_g1

0xa99f,	// (0x00066f0c) cams_zoom_pane_g2

0xa9a8,	// (0x00066f15) cams_zoom_pane_g3

0xa9b1,	// (0x00066f1e) cams_zoom_pane_g4

0x0003,

0xf234,	// (0x0006b7a1) cams_zoom_pane_g

0x1ddb,	// (0x0005e348) grid_cams_pane

0x1de9,	// (0x0005e356) linegrid_cams_pane

0x1df7,	// (0x0005e364) cell_cams_pane_ParamLimits

0x1df7,	// (0x0005e364) cell_cams_pane

0xa9ba,	// (0x00066f27) cams_burst_image_pane

0xa9c2,	// (0x00066f2f) cell_cams_pane_g1

0xa215,	// (0x00066782) grid_highlight_pane_cp03

0xa7f6,	// (0x00066d63) mp_bg_pane_g1

0xa215,	// (0x00066782) bg_list_pane_cp03

0xc722,	// (0x00068c8f) bg_mp_pane

0xc72a,	// (0x00068c97) grid_mp_pane

0xc732,	// (0x00068c9f) media_player_g1

0xc73a,	// (0x00068ca7) media_player_t1

0xc748,	// (0x00068cb5) media_player_t2

0xc756,	// (0x00068cc3) media_player_t3

0xc764,	// (0x00068cd1) media_player_t4

0xc772,	// (0x00068cdf) media_player_t5

0xc780,	// (0x00068ced) media_player_t6

0xc78e,	// (0x00068cfb) media_player_t7

0x0006,

0x0301,	// (0x0005c86e) media_player_t

0xc79c,	// (0x00068d09) wait_bar_pane_cp02

0xf521,	// (0x0006ba8e) main_usb_pane_t

0x408f,	// (0x000605fc) cell_mp_pane

0xa7f6,	// (0x00066d63) cell_mp_pane_g1

0xa215,	// (0x00066782) grid_highlight_pane_cp06

0xa9ca,	// (0x00066f37) grid_skin_colour_pane

0xa9d2,	// (0x00066f3f) list_highlight_pane_cp03

0x1e74,	// (0x0005e3e1) skin_g1

0xa9da,	// (0x00066f47) skin_t1

0xa9e9,	// (0x00066f56) skin_t2

0x0001,

0xf269,	// (0x0006b7d6) skin_t

0x1e7e,	// (0x0005e3eb) cell_skin_colour_pane_ParamLimits

0x1e7e,	// (0x0005e3eb) cell_skin_colour_pane

0xa9f7,	// (0x00066f64) cell_skin_colour_pane_g1

0x1f02,	// (0x0005e46f) call_video_g1_ParamLimits

0x1f02,	// (0x0005e46f) call_video_g1

0x1f12,	// (0x0005e47f) call_video_g2_ParamLimits

0x1f12,	// (0x0005e47f) call_video_g2

0x0001,

0xf26e,	// (0x0006b7db) call_video_g_ParamLimits

0xf26e,	// (0x0006b7db) call_video_g

0x1f6c,	// (0x0005e4d9) call_video_uplink_pane_cp1_ParamLimits

0x1f6c,	// (0x0005e4d9) call_video_uplink_pane_cp1

0xaa09,	// (0x00066f76) call_video_uplink_pane_cp2

0x2038,	// (0x0005e5a5) video_down_crop_pane_ParamLimits

0x2038,	// (0x0005e5a5) video_down_crop_pane

0x212a,	// (0x0005e697) video_down_pane_ParamLimits

0x212a,	// (0x0005e697) video_down_pane

0xaa11,	// (0x00066f7e) video_down_subqcif_pane_ParamLimits

0xaa11,	// (0x00066f7e) video_down_subqcif_pane

0xaa29,	// (0x00066f96) video_down_subqcif_pane_cp_ParamLimits

0xaa29,	// (0x00066f96) video_down_subqcif_pane_cp

0xaa4f,	// (0x00066fbc) im_reading_pane_ParamLimits

0xaa4f,	// (0x00066fbc) im_reading_pane

0x224c,	// (0x0005e7b9) im_writing_pane_ParamLimits

0x224c,	// (0x0005e7b9) im_writing_pane

0x226a,	// (0x0005e7d7) im_reading_pane_t1

0xaa69,	// (0x00066fd6) list_im_pane

0xaa7a,	// (0x00066fe7) scroll_pane_cp07

0x22c5,	// (0x0005e832) im_writing_pane_t1_ParamLimits

0x22c5,	// (0x0005e832) im_writing_pane_t1

0xaa93,	// (0x00067000) im_writing_pane_t2_ParamLimits

0xaa93,	// (0x00067000) im_writing_pane_t2

0x0001,

0xf278,	// (0x0006b7e5) im_writing_pane_t_ParamLimits

0xf278,	// (0x0006b7e5) im_writing_pane_t

0xa215,	// (0x00066782) input_focus_pane_cp04

0xa215,	// (0x00066782) input_focus_pane_cp05

0x22d7,	// (0x0005e844) list_im_single_pane_ParamLimits

0x22d7,	// (0x0005e844) list_im_single_pane

0x22ff,	// (0x0005e86c) list_single_im_pane_t1

0x4053,	// (0x000605c0) blid_accuracy_pane

0x405b,	// (0x000605c8) blid_compass_pane

0x4065,	// (0x000605d2) main_location_t1

0x4073,	// (0x000605e0) main_location_t2

0x4081,	// (0x000605ee) main_location_t3

0x0002,

0xf52e,	// (0x0006ba9b) main_location_t

0xa215,	// (0x00066782) aid_levels_location

0xa7f6,	// (0x00066d63) blid_accuracy_pane_g1

0xa7f6,	// (0x00066d63) blid_accuracy_pane_g2

0x0001,

0xf2da,	// (0x0006b847) blid_accuracy_pane_g

0xaadb,	// (0x00067048) wml_content_pane

0xab19,	// (0x00067086) wml_button_pane_ParamLimits

0xab19,	// (0x00067086) wml_button_pane

0x230e,	// (0x0005e87b) wml_list_single_large_pane_ParamLimits

0x230e,	// (0x0005e87b) wml_list_single_large_pane

0x233f,	// (0x0005e8ac) wml_list_single_medium_pane_ParamLimits

0x233f,	// (0x0005e8ac) wml_list_single_medium_pane

0x2377,	// (0x0005e8e4) wml_list_single_small_pane_ParamLimits

0x2377,	// (0x0005e8e4) wml_list_single_small_pane

0xab2d,	// (0x0006709a) wml_selection_box_pane_ParamLimits

0xab2d,	// (0x0006709a) wml_selection_box_pane

0xab40,	// (0x000670ad) wml_list_single_pane_t1

0xab4f,	// (0x000670bc) wml_list_single_medium_pane_t1

0xab5e,	// (0x000670cb) wml_list_single_large_pane_t1

0xab6d,	// (0x000670da) input_focus_pane_cp02_ParamLimits

0xab6d,	// (0x000670da) input_focus_pane_cp02

0xab80,	// (0x000670ed) wml_selection_box_pane_g1

0xab89,	// (0x000670f6) wml_selection_box_pane_t1_ParamLimits

0xab89,	// (0x000670f6) wml_selection_box_pane_t1

0xa6bd,	// (0x00066c2a) bg_wml_button_pane_ParamLimits

0xa6bd,	// (0x00066c2a) bg_wml_button_pane

0xaba1,	// (0x0006710e) wml_button_pane_g1

0xaba9,	// (0x00067116) wml_button_pane_t1

0xaba1,	// (0x0006710e) wml_button_bg_pane_g1

0xabb9,	// (0x00067126) wml_button_bg_pane_g2

0xabc1,	// (0x0006712e) wml_button_bg_pane_g3

0xabc9,	// (0x00067136) wml_button_bg_pane_g4

0xabd1,	// (0x0006713e) wml_button_bg_pane_g5

0xabd9,	// (0x00067146) wml_button_bg_pane_g6

0xabe1,	// (0x0006714e) wml_button_bg_pane_g7

0xabe9,	// (0x00067156) wml_button_bg_pane_g8

0xabf1,	// (0x0006715e) wml_button_bg_pane_g9

0x0008,

0xf27d,	// (0x0006b7ea) wml_button_bg_pane_g

0x23b8,	// (0x0005e925) bg_list_pane_cp02

0xabf9,	// (0x00067166) mce_header_pane_ParamLimits

0xabf9,	// (0x00067166) mce_header_pane

0xac0f,	// (0x0006717c) mce_icon_pane

0xac0f,	// (0x0006717c) mce_image_pane

0xac18,	// (0x00067185) mce_text_pane_ParamLimits

0xac18,	// (0x00067185) mce_text_pane

0x23c2,	// (0x0005e92f) scroll_pane_cp03

0xab11,	// (0x0006707e) scroll_pane_cp04

0xac2b,	// (0x00067198) scroll_pane_cp05_ParamLimits

0xac2b,	// (0x00067198) scroll_pane_cp05

0x23cc,	// (0x0005e939) mce_header_field_pane_ParamLimits

0x23cc,	// (0x0005e939) mce_header_field_pane

0x23ec,	// (0x0005e959) mce_header_field_pane_2_ParamLimits

0x23ec,	// (0x0005e959) mce_header_field_pane_2

0x2402,	// (0x0005e96f) mce_header_field_pane_3

0x240a,	// (0x0005e977) list_single_mce_message_pane_ParamLimits

0x240a,	// (0x0005e977) list_single_mce_message_pane

0x243c,	// (0x0005e9a9) list_single_mce_smart_pane_ParamLimits

0x243c,	// (0x0005e9a9) list_single_mce_smart_pane

0xac37,	// (0x000671a4) input_focus_pane_cp03

0xac40,	// (0x000671ad) list_header_data_pane

0x2479,	// (0x0005e9e6) mce_header_field_pane_t1

0x2489,	// (0x0005e9f6) list_single_mce_header_pane_ParamLimits

0x2489,	// (0x0005e9f6) list_single_mce_header_pane

0xac48,	// (0x000671b5) list_single_mce_header_pane_t1

0xac57,	// (0x000671c4) list_single_mce_message_pane_g1

0xac5f,	// (0x000671cc) list_single_mce_message_pane_t1

0x24e0,	// (0x0005ea4d) bg_cale_heading_pane_cp01_ParamLimits

0x24e0,	// (0x0005ea4d) bg_cale_heading_pane_cp01

0xac6d,	// (0x000671da) bg_cale_pane_cp02_ParamLimits

0xac6d,	// (0x000671da) bg_cale_pane_cp02

0x2523,	// (0x0005ea90) cale_month_corner_pane

0x253d,	// (0x0005eaaa) cale_month_day_heading_pane_ParamLimits

0x253d,	// (0x0005eaaa) cale_month_day_heading_pane

0x2598,	// (0x0005eb05) cale_month_pane_g1_ParamLimits

0x2598,	// (0x0005eb05) cale_month_pane_g1

0x25d0,	// (0x0005eb3d) cale_month_pane_g2_ParamLimits

0x25d0,	// (0x0005eb3d) cale_month_pane_g2

0x25fb,	// (0x0005eb68) cale_month_pane_g3_ParamLimits

0x25fb,	// (0x0005eb68) cale_month_pane_g3

0x264b,	// (0x0005ebb8) cale_month_pane_g4_ParamLimits

0x264b,	// (0x0005ebb8) cale_month_pane_g4

0x269b,	// (0x0005ec08) cale_month_pane_g5_ParamLimits

0x269b,	// (0x0005ec08) cale_month_pane_g5

0x26eb,	// (0x0005ec58) cale_month_pane_g6_ParamLimits

0x26eb,	// (0x0005ec58) cale_month_pane_g6

0x273b,	// (0x0005eca8) cale_month_pane_g7_ParamLimits

0x273b,	// (0x0005eca8) cale_month_pane_g7

0x27a3,	// (0x0005ed10) cale_month_pane_g8_ParamLimits

0x27a3,	// (0x0005ed10) cale_month_pane_g8

0x280b,	// (0x0005ed78) cale_month_pane_g9_ParamLimits

0x280b,	// (0x0005ed78) cale_month_pane_g9

0x2869,	// (0x0005edd6) cale_month_pane_g10_ParamLimits

0x2869,	// (0x0005edd6) cale_month_pane_g10

0x28c7,	// (0x0005ee34) cale_month_pane_g11_ParamLimits

0x28c7,	// (0x0005ee34) cale_month_pane_g11

0x291b,	// (0x0005ee88) cale_month_pane_g12_ParamLimits

0x291b,	// (0x0005ee88) cale_month_pane_g12

0x2971,	// (0x0005eede) cale_month_pane_g13_ParamLimits

0x2971,	// (0x0005eede) cale_month_pane_g13

0x000c,

0xf290,	// (0x0006b7fd) cale_month_pane_g_ParamLimits

0xf290,	// (0x0006b7fd) cale_month_pane_g

0x29c7,	// (0x0005ef34) cale_month_week_pane

0x29dc,	// (0x0005ef49) grid_cale_month_pane_ParamLimits

0x29dc,	// (0x0005ef49) grid_cale_month_pane

0x2a2e,	// (0x0005ef9b) cale_month_day_heading_pane_t1

0x2ab4,	// (0x0005f021) cale_month_day_heading_pane_t2

0x2b45,	// (0x0005f0b2) cale_month_day_heading_pane_t3

0x2bd6,	// (0x0005f143) cale_month_day_heading_pane_t4

0x2c67,	// (0x0005f1d4) cale_month_day_heading_pane_t5

0x2cf8,	// (0x0005f265) cale_month_day_heading_pane_t6

0x2d95,	// (0x0005f302) cale_month_day_heading_pane_t7

0x0006,

0xf2ab,	// (0x0006b818) cale_month_day_heading_pane_t

0xa91e,	// (0x00066e8b) bg_cale_side_pane_cp01

0x2e3e,	// (0x0005f3ab) cale_month_week_pane_t1

0x2e57,	// (0x0005f3c4) cale_month_week_pane_t2

0x2e70,	// (0x0005f3dd) cale_month_week_pane_t3

0x2e89,	// (0x0005f3f6) cale_month_week_pane_t4

0x2ea6,	// (0x0005f413) cale_month_week_pane_t5

0x2ec7,	// (0x0005f434) cale_month_week_pane_t6

0x0005,

0xf2ba,	// (0x0006b827) cale_month_week_pane_t

0x2ee8,	// (0x0005f455) cell_cale_month_pane_ParamLimits

0x2ee8,	// (0x0005f455) cell_cale_month_pane

0x300e,	// (0x0005f57b) cell_cale_month_pane_g1

0x301a,	// (0x0005f587) cell_cale_month_pane_t1_ParamLimits

0x301a,	// (0x0005f587) cell_cale_month_pane_t1

0xa92c,	// (0x00066e99) grid_highlight_pane_cp08

0xa7f6,	// (0x00066d63) main_smil_g1

0x303a,	// (0x0005f5a7) smil_status_pane

0xacac,	// (0x00067219) smil_text_pane

0xc642,	// (0x00068baf) bg_popup_call3_rect_pane_g8

0xc64a,	// (0x00068bb7) bg_popup_call3_rect_pane_g9

0x0008,

0xf509,	// (0x0006ba76) bg_popup_call3_rect_pane_g

0xc891,	// (0x00068dfe) smil_status_volume_pane_g1

0xacb6,	// (0x00067223) smil_status_pane_t1

0x4489,	// (0x000609f6) volume_smil_pane

0xaccd,	// (0x0006723a) list_smil_text_pane

0x304d,	// (0x0005f5ba) scroll_pane_cp011

0x3058,	// (0x0005f5c5) smil_text_list_pane_t1_ParamLimits

0x3058,	// (0x0005f5c5) smil_text_list_pane_t1

0x30ec,	// (0x0005f659) aid_volume_smil_ParamLimits

0x30ec,	// (0x0005f659) aid_volume_smil

0xa7f6,	// (0x00066d63) smil_volume_pane_g1

0xa7f6,	// (0x00066d63) smil_volume_pane_g2

0x0001,

0xf2da,	// (0x0006b847) smil_volume_pane_g

0x15f9,	// (0x0005db66) listscroll_cale_day_pane

0xacd7,	// (0x00067244) bg_cale_pane

0xacef,	// (0x0006725c) list_cale_pane

0xad12,	// (0x0006727f) scroll_pane_cp09

0xad23,	// (0x00067290) cale_bg_pane_g1

0xad2b,	// (0x00067298) cale_bg_pane_g2

0xad33,	// (0x000672a0) cale_bg_pane_g3

0xad3b,	// (0x000672a8) cale_bg_pane_g4

0xad43,	// (0x000672b0) cale_bg_pane_g5

0xad4b,	// (0x000672b8) cale_bg_pane_g6

0xad53,	// (0x000672c0) cale_bg_pane_g7

0xad5b,	// (0x000672c8) cale_bg_pane_g8

0xad63,	// (0x000672d0) cale_bg_pane_g9

0x0008,

0xf2df,	// (0x0006b84c) cale_bg_pane_g

0x310e,	// (0x0005f67b) list_cale_time_pane_ParamLimits

0x310e,	// (0x0005f67b) list_cale_time_pane

0xad73,	// (0x000672e0) list_cale_time_pane_g1_ParamLimits

0xad73,	// (0x000672e0) list_cale_time_pane_g1

0xad7f,	// (0x000672ec) list_cale_time_pane_g2_ParamLimits

0xad7f,	// (0x000672ec) list_cale_time_pane_g2

0x313a,	// (0x0005f6a7) list_cale_time_pane_g3_ParamLimits

0x313a,	// (0x0005f6a7) list_cale_time_pane_g3

0x3148,	// (0x0005f6b5) list_cale_time_pane_g4_ParamLimits

0x3148,	// (0x0005f6b5) list_cale_time_pane_g4

0x3156,	// (0x0005f6c3) list_cale_time_pane_g5_ParamLimits

0x3156,	// (0x0005f6c3) list_cale_time_pane_g5

0x0005,

0xf2f2,	// (0x0006b85f) list_cale_time_pane_g_ParamLimits

0xf2f2,	// (0x0006b85f) list_cale_time_pane_g

0xad99,	// (0x00067306) list_cale_time_pane_t1_ParamLimits

0xad99,	// (0x00067306) list_cale_time_pane_t1

0xadc1,	// (0x0006732e) list_cale_time_pane_t2_ParamLimits

0xadc1,	// (0x0006732e) list_cale_time_pane_t2

0x349b,	// (0x0005fa08) aid_blid_cardinal_pane

0x34dd,	// (0x0005fa4a) compass_pane_t4

0xade9,	// (0x00067356) list_cale_time_pane_t4_ParamLimits

0xade9,	// (0x00067356) list_cale_time_pane_t4

0x34eb,	// (0x0005fa58) compass_pane_t5

0x34fb,	// (0x0005fa68) compass_pane_t6

0x3509,	// (0x0005fa76) compass_pane_t7

0xb29a,	// (0x00067807) navi_pane_cc_t1

0xb48d,	// (0x000679fa) aid_phob_thumbnail_center_pane

0x3b4c,	// (0x000600b9) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2ff,	// (0x0006b86c) list_cale_time_pane_t_ParamLimits

0xf2ff,	// (0x0006b86c) list_cale_time_pane_t

0x98f4,	// (0x00065e61) bg_popup_window_pane_cp02_ParamLimits

0x98f4,	// (0x00065e61) bg_popup_window_pane_cp02

0xae11,	// (0x0006737e) heading_pane_cp01_ParamLimits

0xae11,	// (0x0006737e) heading_pane_cp01

0xae1d,	// (0x0006738a) loc_req_pane_ParamLimits

0xae1d,	// (0x0006738a) loc_req_pane

0xae2d,	// (0x0006739a) loc_type_pane_ParamLimits

0xae2d,	// (0x0006739a) loc_type_pane

0xae3f,	// (0x000673ac) loc_type_pane_t1_ParamLimits

0xae3f,	// (0x000673ac) loc_type_pane_t1

0xae51,	// (0x000673be) loc_type_pane_t2_ParamLimits

0xae51,	// (0x000673be) loc_type_pane_t2

0xae63,	// (0x000673d0) loc_type_pane_t3_ParamLimits

0xae63,	// (0x000673d0) loc_type_pane_t3

0x0002,

0xf306,	// (0x0006b873) loc_type_pane_t_ParamLimits

0xf306,	// (0x0006b873) loc_type_pane_t

0xae75,	// (0x000673e2) list_loc_req_pane

0xae7f,	// (0x000673ec) scroll_pane_cp012

0x3164,	// (0x0005f6d1) list_single_loc_request_popup_menu_pane_ParamLimits

0x3164,	// (0x0005f6d1) list_single_loc_request_popup_menu_pane

0xae8a,	// (0x000673f7) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xae8a,	// (0x000673f7) list_single_loc_request_popup_menu_pane_g1

0xae96,	// (0x00067403) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xae96,	// (0x00067403) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30d,	// (0x0006b87a) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30d,	// (0x0006b87a) list_single_loc_request_popup_menu_pane_g

0xaea2,	// (0x0006740f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaea2,	// (0x0006740f) list_single_loc_request_popup_menu_pane_t1

0x317d,	// (0x0005f6ea) bg_popup_window_pane_cp03_ParamLimits

0x317d,	// (0x0005f6ea) bg_popup_window_pane_cp03

0x318b,	// (0x0005f6f8) heading_loc_req_pane_ParamLimits

0x318b,	// (0x0005f6f8) heading_loc_req_pane

0x3197,	// (0x0005f704) popup_dyc_status_message_window_g1_ParamLimits

0x3197,	// (0x0005f704) popup_dyc_status_message_window_g1

0x31a3,	// (0x0005f710) popup_dyc_status_message_window_t1_ParamLimits

0x31a3,	// (0x0005f710) popup_dyc_status_message_window_t1

0x31b5,	// (0x0005f722) popup_dyc_status_message_window_t2_ParamLimits

0x31b5,	// (0x0005f722) popup_dyc_status_message_window_t2

0x31c7,	// (0x0005f734) popup_dyc_status_message_window_t3_ParamLimits

0x31c7,	// (0x0005f734) popup_dyc_status_message_window_t3

0x0002,

0xf312,	// (0x0006b87f) popup_dyc_status_message_window_t_ParamLimits

0xf312,	// (0x0006b87f) popup_dyc_status_message_window_t

0xa215,	// (0x00066782) bg_heading_pane_cp01

0xaeb8,	// (0x00067425) heading_loc_req_pane_g1

0xaec0,	// (0x0006742d) heading_loc_req_pane_g2

0xaec8,	// (0x00067435) heading_loc_req_pane_g3

0x0002,

0xf319,	// (0x0006b886) heading_loc_req_pane_g

0xaed0,	// (0x0006743d) heading_loc_req_pane_t1

0xaedf,	// (0x0006744c) bg_popup_sub_pane_cp01_ParamLimits

0xaedf,	// (0x0006744c) bg_popup_sub_pane_cp01

0xaeed,	// (0x0006745a) popup_cale_events_window_g1_ParamLimits

0xaeed,	// (0x0006745a) popup_cale_events_window_g1

0xaf0d,	// (0x0006747a) popup_cale_events_window_g2_ParamLimits

0xaf0d,	// (0x0006747a) popup_cale_events_window_g2

0x0001,

0xf34d,	// (0x0006b8ba) popup_cale_events_window_g_ParamLimits

0xf34d,	// (0x0006b8ba) popup_cale_events_window_g

0xaf2d,	// (0x0006749a) popup_cale_events_window_t1_ParamLimits

0xaf2d,	// (0x0006749a) popup_cale_events_window_t1

0xaf3f,	// (0x000674ac) popup_cale_events_window_t2_ParamLimits

0xaf3f,	// (0x000674ac) popup_cale_events_window_t2

0xaf7d,	// (0x000674ea) popup_cale_events_window_t3_ParamLimits

0xaf7d,	// (0x000674ea) popup_cale_events_window_t3

0xafb7,	// (0x00067524) popup_cale_events_window_t4_ParamLimits

0xafb7,	// (0x00067524) popup_cale_events_window_t4

0x0003,

0xf352,	// (0x0006b8bf) popup_cale_events_window_t_ParamLimits

0xf352,	// (0x0006b8bf) popup_cale_events_window_t

0x327b,	// (0x0005f7e8) call_type_pane

0xb2e2,	// (0x0006784f) popup_call_status_window_g1

0x3287,	// (0x0005f7f4) popup_call_status_window_g2

0x3293,	// (0x0005f800) popup_call_status_window_g3

0x0002,

0xf35b,	// (0x0006b8c8) popup_call_status_window_g

0xafed,	// (0x0006755a) call_type_pane_g1

0xaff6,	// (0x00067563) call_type_pane_g2

0x0001,

0xf362,	// (0x0006b8cf) call_type_pane_g

0xa215,	// (0x00066782) bg_popup_sub_pane_cp02

0xafff,	// (0x0006756c) listscroll_popup_wml_pane

0xb007,	// (0x00067574) list_wml_pane

0xb011,	// (0x0006757e) scroll_pane_cp013

0xb01c,	// (0x00067589) list_single_graphic_popup_wml_pane_ParamLimits

0xb01c,	// (0x00067589) list_single_graphic_popup_wml_pane

0xa7f6,	// (0x00066d63) list_single_graphic_popup_wml_pane_g1

0xb030,	// (0x0006759d) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf367,	// (0x0006b8d4) list_single_graphic_popup_wml_pane_g

0xb038,	// (0x000675a5) list_single_graphic_popup_wml_pane_t1

0xb04e,	// (0x000675bb) aid_call_pane

0xa6b5,	// (0x00066c22) popup_clock_analogue_window_g1

0xa6b5,	// (0x00066c22) popup_clock_analogue_window_g2

0x329f,	// (0x0005f80c) popup_clock_analogue_window_g3

0x329f,	// (0x0005f80c) popup_clock_analogue_window_g4

0xa7f6,	// (0x00066d63) popup_clock_analogue_window_g5

0x0004,

0xf36c,	// (0x0006b8d9) popup_clock_analogue_window_g

0x32a7,	// (0x0005f814) popup_clock_analogue_window_t1

0x32b5,	// (0x0005f822) clock_digital_number_pane_ParamLimits

0x32b5,	// (0x0005f822) clock_digital_number_pane

0x32c1,	// (0x0005f82e) clock_digital_number_pane_cp02_ParamLimits

0x32c1,	// (0x0005f82e) clock_digital_number_pane_cp02

0x32cd,	// (0x0005f83a) clock_digital_number_pane_cp03_ParamLimits

0x32cd,	// (0x0005f83a) clock_digital_number_pane_cp03

0x32d9,	// (0x0005f846) clock_digital_number_pane_cp04_ParamLimits

0x32d9,	// (0x0005f846) clock_digital_number_pane_cp04

0x32e9,	// (0x0005f856) clock_digital_separator_pane_ParamLimits

0x32e9,	// (0x0005f856) clock_digital_separator_pane

0x32f5,	// (0x0005f862) popup_clock_digital_window_t1

0xa7f6,	// (0x00066d63) clock_digital_number_pane_g1

0xa7f6,	// (0x00066d63) clock_digital_number_pane_g2

0x0001,

0xf2da,	// (0x0006b847) clock_digital_number_pane_g

0xa7f6,	// (0x00066d63) clock_digital_separator_pane_g1

0xa7f6,	// (0x00066d63) clock_digital_separator_pane_g2

0x0001,

0xf2da,	// (0x0006b847) clock_digital_separator_pane_g

0xa215,	// (0x00066782) bg_popup_window_pane_cp04

0xb056,	// (0x000675c3) heading_pane_cp03

0xb05e,	// (0x000675cb) listscroll_popup_gms_pane

0xb066,	// (0x000675d3) grid_large_graphic_popup_pane

0xb070,	// (0x000675dd) listscroll_popup_gms_pane_g1

0xb078,	// (0x000675e5) listscroll_popup_gms_pane_g2

0x0001,

0xf377,	// (0x0006b8e4) listscroll_popup_gms_pane_g

0xab11,	// (0x0006707e) scroll_pane_cp014

0xb080,	// (0x000675ed) cell_large_graphic_popup_pane_ParamLimits

0xb080,	// (0x000675ed) cell_large_graphic_popup_pane

0xb098,	// (0x00067605) cell_large_graphic_popup_pane_g1_ParamLimits

0xb098,	// (0x00067605) cell_large_graphic_popup_pane_g1

0xb0a4,	// (0x00067611) cell_large_graphic_popup_pane_g2_ParamLimits

0xb0a4,	// (0x00067611) cell_large_graphic_popup_pane_g2

0xb0b0,	// (0x0006761d) cell_large_graphic_popup_pane_g3_ParamLimits

0xb0b0,	// (0x0006761d) cell_large_graphic_popup_pane_g3

0xb0bd,	// (0x0006762a) cell_large_graphic_popup_pane_g4_ParamLimits

0xb0bd,	// (0x0006762a) cell_large_graphic_popup_pane_g4

0x0003,

0xf37c,	// (0x0006b8e9) cell_large_graphic_popup_pane_g_ParamLimits

0xf37c,	// (0x0006b8e9) cell_large_graphic_popup_pane_g

0xb0cd,	// (0x0006763a) grid_highlight_pane_cp010

0xa7f6,	// (0x00066d63) bg_popup_call_pane_g1

0xb0d7,	// (0x00067644) list_single_graphic_popup_conf_pane_ParamLimits

0xb0d7,	// (0x00067644) list_single_graphic_popup_conf_pane

0xb0ea,	// (0x00067657) list_highlight_pane_cp01

0xb0f3,	// (0x00067660) list_single_graphic_popup_conf_pane_g1

0xb0fb,	// (0x00067668) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf385,	// (0x0006b8f2) list_single_graphic_popup_conf_pane_g

0xb103,	// (0x00067670) list_single_graphic_popup_conf_pane_t1

0xb111,	// (0x0006767e) linegrid_cams_pane_g1

0x3312,	// (0x0005f87f) linegrid_cams_pane_g2

0xa8ae,	// (0x00066e1b) linegrid_cams_pane_g3

0xb11a,	// (0x00067687) linegrid_cams_pane_g4

0x331b,	// (0x0005f888) linegrid_cams_pane_g5

0x3324,	// (0x0005f891) linegrid_cams_pane_g6

0xa95f,	// (0x00066ecc) linegrid_cams_pane_g7

0x0006,

0xf38a,	// (0x0006b8f7) linegrid_cams_pane_g

0xb123,	// (0x00067690) popup_clock_analogue_window

0xb123,	// (0x00067690) popup_clock_digital_window

0xa215,	// (0x00066782) popup_phob_thumbnail_window

0xa7f6,	// (0x00066d63) call_video_uplink_pane_g1

0xb12c,	// (0x00067699) call_video_uplink_pane_g2

0x0001,

0xf399,	// (0x0006b906) call_video_uplink_pane_g

0xa92c,	// (0x00066e99) video_uplink_pane

0xb134,	// (0x000676a1) mce_image_pane_g1

0x332d,	// (0x0005f89a) mce_image_pane_g2

0x3335,	// (0x0005f8a2) mce_image_pane_g3

0x333d,	// (0x0005f8aa) mce_image_pane_g4

0x3345,	// (0x0005f8b2) mce_image_pane_g5

0x0004,

0xf39e,	// (0x0006b90b) mce_image_pane_g

0xb13e,	// (0x000676ab) control_top_pane_stacon_cp01_ParamLimits

0xb13e,	// (0x000676ab) control_top_pane_stacon_cp01

0xb152,	// (0x000676bf) uni_indicator_pane_stacon_cp01_ParamLimits

0xb152,	// (0x000676bf) uni_indicator_pane_stacon_cp01

0xb163,	// (0x000676d0) bg_popup_sub_pane_cp03

0x334d,	// (0x0005f8ba) chi_dic_find_pane

0x3355,	// (0x0005f8c2) listscroll_chi_dic_pane

0x335e,	// (0x0005f8cb) main_pane_chidic_g1

0xb16d,	// (0x000676da) chi_dic_find_pane_t1

0xb17b,	// (0x000676e8) find_chidic_pane

0xb184,	// (0x000676f1) chi_dic_list_pane_ParamLimits

0xb184,	// (0x000676f1) chi_dic_list_pane

0xb195,	// (0x00067702) scroll_pane_cp020

0xb19d,	// (0x0006770a) find_chidic_pane_t1

0xa215,	// (0x00066782) input_focus_pane_cp06

0x3371,	// (0x0005f8de) list_chi_dic_pane_ParamLimits

0x3371,	// (0x0005f8de) list_chi_dic_pane

0x338e,	// (0x0005f8fb) list_chi_dic_pane_t1_ParamLimits

0x338e,	// (0x0005f8fb) list_chi_dic_pane_t1

0xa215,	// (0x00066782) list_highlight_pane_cp020

0xb1ac,	// (0x00067719) bg_cale_heading_pane_g1

0x33a1,	// (0x0005f90e) bg_cale_heading_pane_g2

0x33a9,	// (0x0005f916) bg_cale_heading_pane_g3

0x33b1,	// (0x0005f91e) bg_cale_heading_pane_g4

0x33bb,	// (0x0005f928) bg_cale_heading_pane_g5

0x33c5,	// (0x0005f932) bg_cale_heading_pane_g6

0x33cd,	// (0x0005f93a) bg_cale_heading_pane_g7

0x33d5,	// (0x0005f942) bg_cale_heading_pane_g8

0x33df,	// (0x0005f94c) bg_cale_heading_pane_g9

0x0008,

0xf3a9,	// (0x0006b916) bg_cale_heading_pane_g

0xb1ac,	// (0x00067719) bg_cale_side_pane_g1

0x33e9,	// (0x0005f956) bg_cale_side_pane_g2

0x33f3,	// (0x0005f960) bg_cale_side_pane_g3

0x33fd,	// (0x0005f96a) bg_cale_side_pane_g4

0x3407,	// (0x0005f974) bg_cale_side_pane_g5

0x3411,	// (0x0005f97e) bg_cale_side_pane_g6

0x341b,	// (0x0005f988) bg_cale_side_pane_g7

0x3425,	// (0x0005f992) bg_cale_side_pane_g8

0x342d,	// (0x0005f99a) bg_cale_side_pane_g9

0x0008,

0xf3bc,	// (0x0006b929) bg_cale_side_pane_g

0x3435,	// (0x0005f9a2) popup_call_status_window_ParamLimits

0x3435,	// (0x0005f9a2) popup_call_status_window

0xb1b4,	// (0x00067721) stacon_top_pane

0xb1bc,	// (0x00067729) status_pane_ParamLimits

0xb1bc,	// (0x00067729) status_pane

0xb1d1,	// (0x0006773e) status_small_pane

0xb1d9,	// (0x00067746) control_pane

0xa215,	// (0x00066782) stacon_bottom_pane

0xb1e1,	// (0x0006774e) list_single_mce_smart_pane_t1_ParamLimits

0xb1e1,	// (0x0006774e) list_single_mce_smart_pane_t1

0xb1f4,	// (0x00067761) list_single_mce_smart_pane_t2_ParamLimits

0xb1f4,	// (0x00067761) list_single_mce_smart_pane_t2

0x0001,

0xf3cf,	// (0x0006b93c) list_single_mce_smart_pane_t_ParamLimits

0xf3cf,	// (0x0006b93c) list_single_mce_smart_pane_t

0x3441,	// (0x0005f9ae) compass_pane

0x344d,	// (0x0005f9ba) main_location2_pane_t1

0x3461,	// (0x0005f9ce) main_location2_pane_t2

0x3475,	// (0x0005f9e2) main_location2_pane_t3

0x0003,

0xf3d4,	// (0x0006b941) main_location2_pane_t

0xb213,	// (0x00067780) compass_pane_g1_ParamLimits

0xb213,	// (0x00067780) compass_pane_g1

0x34bf,	// (0x0005fa2c) compass_pane_t1

0x34ce,	// (0x0005fa3b) compass_pane_t2

0x0005,

0xf3dd,	// (0x0006b94a) compass_pane_t

0x3519,	// (0x0005fa86) text_secondary_cp61

0xb291,	// (0x000677fe) navi_pane_cams_g5

0xb31b,	// (0x00067888) navi_pane_im_t1

0xb329,	// (0x00067896) navi_pane_mp_g1_ParamLimits

0xb329,	// (0x00067896) navi_pane_mp_g1

0xb33d,	// (0x000678aa) navi_pane_mp_g2_ParamLimits

0xb33d,	// (0x000678aa) navi_pane_mp_g2

0xb349,	// (0x000678b6) navi_pane_mp_g3_ParamLimits

0xb349,	// (0x000678b6) navi_pane_mp_g3

0x0002,

0xf3f1,	// (0x0006b95e) navi_pane_mp_g_ParamLimits

0xf3f1,	// (0x0006b95e) navi_pane_mp_g

0xb355,	// (0x000678c2) navi_pane_mp_t1

0xb363,	// (0x000678d0) navi_pane_mp_t2

0x0002,

0xf3f8,	// (0x0006b965) navi_pane_mp_t

0xb3ce,	// (0x0006793b) navi_pane_vt_g1

0xb355,	// (0x000678c2) navi_pane_vt_t1

0xb3d6,	// (0x00067943) navi_slider_pane

0xb3e6,	// (0x00067953) zooming_pane

0xb3ee,	// (0x0006795b) navi_slider_pane_g1

0x3554,	// (0x0005fac1) navi_slider_pane_g2

0x0006,

0xf3ff,	// (0x0006b96c) navi_slider_pane_g

0xb412,	// (0x0006797f) aid_levels_zoom

0xb41a,	// (0x00067987) zooming_pane_g1

0xb422,	// (0x0006798f) zooming_pane_g2

0xb422,	// (0x0006798f) zooming_pane_g3

0x0002,

0xf40e,	// (0x0006b97b) zooming_pane_g

0xb42a,	// (0x00067997) level_10_zoom

0xb433,	// (0x000679a0) level_11_zoom

0xb43c,	// (0x000679a9) level_1_zoom

0xb445,	// (0x000679b2) level_2_zoom

0xb44e,	// (0x000679bb) level_3_zoom

0xb457,	// (0x000679c4) level_4_zoom

0xb460,	// (0x000679cd) level_5_zoom

0xb469,	// (0x000679d6) level_6_zoom

0xb472,	// (0x000679df) level_7_zoom

0xb47b,	// (0x000679e8) level_8_zoom

0xb484,	// (0x000679f1) level_9_zoom

0xb495,	// (0x00067a02) popup_phob_thumbnail_window_g1

0xb49d,	// (0x00067a0a) popup_phob_thumbnail_window_g2

0x0001,

0xf415,	// (0x0006b982) popup_phob_thumbnail_window_g

0xc7a4,	// (0x00068d11) level_1_location

0xc7ac,	// (0x00068d19) level_2_location

0xc7b4,	// (0x00068d21) level_3_location

0xc7bc,	// (0x00068d29) level_4_location

0xb3e6,	// (0x00067953) level_5_location

0x3566,	// (0x0005fad3) mce_icon_pane_g1

0x356e,	// (0x0005fadb) mce_icon_pane_g2

0x0001,

0xf41a,	// (0x0006b987) mce_icon_pane_g

0x3576,	// (0x0005fae3) main_mup_pane_g1_ParamLimits

0x3576,	// (0x0005fae3) main_mup_pane_g1

0x358e,	// (0x0005fafb) main_mup_pane_g2_ParamLimits

0x358e,	// (0x0005fafb) main_mup_pane_g2

0x35aa,	// (0x0005fb17) main_mup_pane_g3_ParamLimits

0x35aa,	// (0x0005fb17) main_mup_pane_g3

0x35c6,	// (0x0005fb33) main_mup_pane_g4_ParamLimits

0x35c6,	// (0x0005fb33) main_mup_pane_g4

0x35e2,	// (0x0005fb4f) main_mup_pane_g5_ParamLimits

0x35e2,	// (0x0005fb4f) main_mup_pane_g5

0x3603,	// (0x0005fb70) main_mup_pane_g6_ParamLimits

0x3603,	// (0x0005fb70) main_mup_pane_g6

0x361f,	// (0x0005fb8c) main_mup_pane_g7_ParamLimits

0x361f,	// (0x0005fb8c) main_mup_pane_g7

0x363b,	// (0x0005fba8) main_mup_pane_g8_ParamLimits

0x363b,	// (0x0005fba8) main_mup_pane_g8

0x3657,	// (0x0005fbc4) main_mup_pane_g9_ParamLimits

0x3657,	// (0x0005fbc4) main_mup_pane_g9

0x3676,	// (0x0005fbe3) main_mup_pane_g10_ParamLimits

0x3676,	// (0x0005fbe3) main_mup_pane_g10

0x3695,	// (0x0005fc02) main_mup_pane_g11_ParamLimits

0x3695,	// (0x0005fc02) main_mup_pane_g11

0x36ad,	// (0x0005fc1a) main_mup_pane_g12_ParamLimits

0x36ad,	// (0x0005fc1a) main_mup_pane_g12

0x36bb,	// (0x0005fc28) main_mup_pane_g13_ParamLimits

0x36bb,	// (0x0005fc28) main_mup_pane_g13

0x000c,

0xf41f,	// (0x0006b98c) main_mup_pane_g_ParamLimits

0xf41f,	// (0x0006b98c) main_mup_pane_g

0x36d1,	// (0x0005fc3e) main_mup_pane_t1_ParamLimits

0x36d1,	// (0x0005fc3e) main_mup_pane_t1

0x36ee,	// (0x0005fc5b) main_mup_pane_t2_ParamLimits

0x36ee,	// (0x0005fc5b) main_mup_pane_t2

0x3708,	// (0x0005fc75) main_mup_pane_t3_ParamLimits

0x3708,	// (0x0005fc75) main_mup_pane_t3

0x3722,	// (0x0005fc8f) main_mup_pane_t4_ParamLimits

0x3722,	// (0x0005fc8f) main_mup_pane_t4

0x3734,	// (0x0005fca1) main_mup_pane_t5_ParamLimits

0x3734,	// (0x0005fca1) main_mup_pane_t5

0x3746,	// (0x0005fcb3) main_mup_pane_t6_ParamLimits

0x3746,	// (0x0005fcb3) main_mup_pane_t6

0x0005,

0xf43a,	// (0x0006b9a7) main_mup_pane_t_ParamLimits

0xf43a,	// (0x0006b9a7) main_mup_pane_t

0x375c,	// (0x0005fcc9) mup_progress_pane_ParamLimits

0x375c,	// (0x0005fcc9) mup_progress_pane

0x3768,	// (0x0005fcd5) mup_visualizer_pane_ParamLimits

0x3768,	// (0x0005fcd5) mup_visualizer_pane

0x37a6,	// (0x0005fd13) mup_volume_pane_ParamLimits

0x37a6,	// (0x0005fd13) mup_volume_pane

0xb2e2,	// (0x0006784f) mup_visualizer_pane_g1_ParamLimits

0xb2e2,	// (0x0006784f) mup_visualizer_pane_g1

0xb2e2,	// (0x0006784f) mup_visualizer_pane_g2_ParamLimits

0xb2e2,	// (0x0006784f) mup_visualizer_pane_g2

0xb213,	// (0x00067780) mup_visualizer_pane_g3_ParamLimits

0xb213,	// (0x00067780) mup_visualizer_pane_g3

0x0002,

0xf447,	// (0x0006b9b4) mup_visualizer_pane_g_ParamLimits

0xf447,	// (0x0006b9b4) mup_visualizer_pane_g

0xa7f6,	// (0x00066d63) mup_volume_pane_g1

0xb4ad,	// (0x00067a1a) mup_volume_pane_g2

0x0001,

0xf44e,	// (0x0006b9bb) mup_volume_pane_g

0xa7f6,	// (0x00066d63) mup_progress_pane_g1

0xb4b6,	// (0x00067a23) mup_progress_pane_g2

0xb4bf,	// (0x00067a2c) mup_progress_pane_g3

0x0002,

0xf453,	// (0x0006b9c0) mup_progress_pane_g

0xa215,	// (0x00066782) bg_popup_window_pane_cp05

0xb4e9,	// (0x00067a56) heading_pane_cp02_ParamLimits

0xb4e9,	// (0x00067a56) heading_pane_cp02

0xb503,	// (0x00067a70) list_popup_blid_pane

0xb50b,	// (0x00067a78) list_blid_sat_info_pane_ParamLimits

0xb50b,	// (0x00067a78) list_blid_sat_info_pane

0xb51e,	// (0x00067a8b) list_blid_sat_info_pane_g1

0xb526,	// (0x00067a93) list_blid_sat_info_pane_t1

0x38b1,	// (0x0005fe1e) mup_equalizer_pane_ParamLimits

0x38b1,	// (0x0005fe1e) mup_equalizer_pane

0x38d2,	// (0x0005fe3f) mup_equalizer_pane_cp1_ParamLimits

0x38d2,	// (0x0005fe3f) mup_equalizer_pane_cp1

0x38f3,	// (0x0005fe60) mup_equalizer_pane_cp2_ParamLimits

0x38f3,	// (0x0005fe60) mup_equalizer_pane_cp2

0x3914,	// (0x0005fe81) mup_equalizer_pane_cp3_ParamLimits

0x3914,	// (0x0005fe81) mup_equalizer_pane_cp3

0x3935,	// (0x0005fea2) mup_equalizer_pane_cp4_ParamLimits

0x3935,	// (0x0005fea2) mup_equalizer_pane_cp4

0x3956,	// (0x0005fec3) mup_equalizer_pane_cp5

0x396c,	// (0x0005fed9) mup_equalizer_pane_cp6

0x3984,	// (0x0005fef1) mup_equalizer_pane_cp7

0xc6c2,	// (0x00068c2f) bg_popup_call_poc_act_pane_g9

0xc6ca,	// (0x00068c37) bg_popup_call_poc_act_pane_g10

0xc6d2,	// (0x00068c3f) bg_popup_call_poc_act_pane_g11

0x000a,

0xa6bd,	// (0x00066c2a) mup_scale_pane

0xa7f6,	// (0x00066d63) mup_scale_pane_g1

0xb534,	// (0x00067aa1) mup_scale_pane_g2

0x0006,

0xf46f,	// (0x0006b9dc) mup_scale_pane_g

0xb558,	// (0x00067ac5) msg_data_pane

0xb560,	// (0x00067acd) scroll_pane_cp017

0x9d93,	// (0x00066300) bg_list_pane_cp04_ParamLimits

0x9d93,	// (0x00066300) bg_list_pane_cp04

0xb568,	// (0x00067ad5) msg_data_pane_g1

0x39ae,	// (0x0005ff1b) msg_data_pane_g2

0x3335,	// (0x0005f8a2) msg_data_pane_g3

0x39b6,	// (0x0005ff23) msg_data_pane_g4

0x39be,	// (0x0005ff2b) msg_data_pane_g5

0x39c6,	// (0x0005ff33) msg_data_pane_g6

0x39ce,	// (0x0005ff3b) msg_data_pane_g7

0x0006,

0xf47e,	// (0x0006b9eb) msg_data_pane_g

0x39d6,	// (0x0005ff43) msg_text_pane_ParamLimits

0x39d6,	// (0x0005ff43) msg_text_pane

0x3a23,	// (0x0005ff90) qrid_highlight_pane_cp011_ParamLimits

0x3a23,	// (0x0005ff90) qrid_highlight_pane_cp011

0xa215,	// (0x00066782) msg_body_pane

0xa215,	// (0x00066782) msg_header_pane

0xb570,	// (0x00067add) input_focus_pane_cp07

0x9db3,	// (0x00066320) msg_header_pane_t1_ParamLimits

0x9db3,	// (0x00066320) msg_header_pane_t1

0x9dc5,	// (0x00066332) msg_header_pane_t2_ParamLimits

0x9dc5,	// (0x00066332) msg_header_pane_t2

0x0001,

0xf492,	// (0x0006b9ff) msg_header_pane_t_ParamLimits

0xf492,	// (0x0006b9ff) msg_header_pane_t

0xb585,	// (0x00067af2) msg_body_pane_g1

0x9dd7,	// (0x00066344) msg_body_pane_t1_ParamLimits

0x9dd7,	// (0x00066344) msg_body_pane_t1

0x9e08,	// (0x00066375) msg_body_pane_t2_ParamLimits

0x9e08,	// (0x00066375) msg_body_pane_t2

0x9e1a,	// (0x00066387) msg_body_pane_t3_ParamLimits

0x9e1a,	// (0x00066387) msg_body_pane_t3

0x0002,

0xf497,	// (0x0006ba04) msg_body_pane_t_ParamLimits

0xf497,	// (0x0006ba04) msg_body_pane_t

0x3aa8,	// (0x00060015) main_viewer_pane_g1_ParamLimits

0x3aa8,	// (0x00060015) main_viewer_pane_g1

0x3ab4,	// (0x00060021) main_viewer_pane_g2_ParamLimits

0x3ab4,	// (0x00060021) main_viewer_pane_g2

0x3ac0,	// (0x0006002d) main_viewer_pane_g3_ParamLimits

0x3ac0,	// (0x0006002d) main_viewer_pane_g3

0x3ad1,	// (0x0006003e) main_viewer_pane_g4_ParamLimits

0x3ad1,	// (0x0006003e) main_viewer_pane_g4

0x3ae2,	// (0x0006004f) main_viewer_pane_g5_ParamLimits

0x3ae2,	// (0x0006004f) main_viewer_pane_g5

0x3ae2,	// (0x0006004f) main_viewer_pane_g7_ParamLimits

0x3ae2,	// (0x0006004f) main_viewer_pane_g7

0xae8a,	// (0x000673f7) main_viewer_pane_g8_ParamLimits

0xae8a,	// (0x000673f7) main_viewer_pane_g8

0x0007,

0xf4a7,	// (0x0006ba14) main_viewer_pane_g_ParamLimits

0xf4a7,	// (0x0006ba14) main_viewer_pane_g

0xb58d,	// (0x00067afa) viewer_content_pane_ParamLimits

0xb58d,	// (0x00067afa) viewer_content_pane

0x3b20,	// (0x0006008d) main_postcard_pane_g1_ParamLimits

0x3b20,	// (0x0006008d) main_postcard_pane_g1

0x3b2e,	// (0x0006009b) main_postcard_pane_g2_ParamLimits

0x3b2e,	// (0x0006009b) main_postcard_pane_g2

0x3b3c,	// (0x000600a9) main_postcard_pane_g3_ParamLimits

0x3b3c,	// (0x000600a9) main_postcard_pane_g3

0x0005,

0xf4b8,	// (0x0006ba25) main_postcard_pane_g_ParamLimits

0xf4b8,	// (0x0006ba25) main_postcard_pane_g

0x3b4c,	// (0x000600b9) main_postcard_pane_g4

0xc8a4,	// (0x00068e11) smil_status_volume_pane_g2

0x3b78,	// (0x000600e5) postcard_pane_ParamLimits

0x3b78,	// (0x000600e5) postcard_pane

0xb2e2,	// (0x0006784f) postcard_pane_g1_ParamLimits

0xb2e2,	// (0x0006784f) postcard_pane_g1

0x3baa,	// (0x00060117) postcard_pane_g2_ParamLimits

0x3baa,	// (0x00060117) postcard_pane_g2

0x3bb6,	// (0x00060123) postcard_pane_g3_ParamLimits

0x3bb6,	// (0x00060123) postcard_pane_g3

0xb59b,	// (0x00067b08) postcard_pane_g4_ParamLimits

0xb59b,	// (0x00067b08) postcard_pane_g4

0x3bc2,	// (0x0006012f) postcard_pane_g5_ParamLimits

0x3bc2,	// (0x0006012f) postcard_pane_g5

0x3bce,	// (0x0006013b) postcard_pane_g6_ParamLimits

0x3bce,	// (0x0006013b) postcard_pane_g6

0xb5a9,	// (0x00067b16) postcard_pane_g7_ParamLimits

0xb5a9,	// (0x00067b16) postcard_pane_g7

0x0006,

0xf4c5,	// (0x0006ba32) postcard_pane_g_ParamLimits

0xf4c5,	// (0x0006ba32) postcard_pane_g

0x3bda,	// (0x00060147) main_mp2_pane_g1_ParamLimits

0x3bda,	// (0x00060147) main_mp2_pane_g1

0x3be6,	// (0x00060153) main_mp2_pane_g2_ParamLimits

0x3be6,	// (0x00060153) main_mp2_pane_g2

0x3bf2,	// (0x0006015f) main_mp2_pane_g3_ParamLimits

0x3bf2,	// (0x0006015f) main_mp2_pane_g3

0x0002,

0xf4d4,	// (0x0006ba41) main_mp2_pane_g_ParamLimits

0xf4d4,	// (0x0006ba41) main_mp2_pane_g

0x3bfe,	// (0x0006016b) main_mp2_pane_t1_ParamLimits

0x3bfe,	// (0x0006016b) main_mp2_pane_t1

0x3c15,	// (0x00060182) main_mp2_pane_t2_ParamLimits

0x3c15,	// (0x00060182) main_mp2_pane_t2

0x3c27,	// (0x00060194) main_mp2_pane_t3_ParamLimits

0x3c27,	// (0x00060194) main_mp2_pane_t3

0x0002,

0xf4db,	// (0x0006ba48) main_mp2_pane_t_ParamLimits

0xf4db,	// (0x0006ba48) main_mp2_pane_t

0xb5b7,	// (0x00067b24) pec_content_pane_ParamLimits

0xb5b7,	// (0x00067b24) pec_content_pane

0xab11,	// (0x0006707e) scroll_pane_cp015

0xb5c9,	// (0x00067b36) pec_attribute_pane_ParamLimits

0xb5c9,	// (0x00067b36) pec_attribute_pane

0x3c39,	// (0x000601a6) pec_content_pane_g1_ParamLimits

0x3c39,	// (0x000601a6) pec_content_pane_g1

0xb5d9,	// (0x00067b46) pec_content_pane_t1_ParamLimits

0xb5d9,	// (0x00067b46) pec_content_pane_t1

0xb5eb,	// (0x00067b58) pec_content_pane_t2_ParamLimits

0xb5eb,	// (0x00067b58) pec_content_pane_t2

0x0001,

0x0213,	// (0x0005c780) pec_content_pane_t_ParamLimits

0x0213,	// (0x0005c780) pec_content_pane_t

0x3c45,	// (0x000601b2) list_single_graphic_pane_cp01_ParamLimits

0x3c45,	// (0x000601b2) list_single_graphic_pane_cp01

0xa6bd,	// (0x00066c2a) bg_popup_sub_pane_cp04

0xb5fd,	// (0x00067b6a) popup_mup_playback_window_g1

0xb609,	// (0x00067b76) popup_mup_playback_window_t1

0xb61e,	// (0x00067b8b) popup_mup_playback_window_t2

0x0001,

0x0218,	// (0x0005c785) popup_mup_playback_window_t

0xb655,	// (0x00067bc2) main_image_pane_g1_ParamLimits

0xb655,	// (0x00067bc2) main_image_pane_g1

0xb698,	// (0x00067c05) scroll_pane_cp018_ParamLimits

0xb698,	// (0x00067c05) scroll_pane_cp018

0xb6b0,	// (0x00067c1d) scroll_pane_cp016_ParamLimits

0xb6b0,	// (0x00067c1d) scroll_pane_cp016

0x3ce5,	// (0x00060252) smil2_image_pane_ParamLimits

0x3ce5,	// (0x00060252) smil2_image_pane

0x3d19,	// (0x00060286) smil2_root_pane_ParamLimits

0x3d19,	// (0x00060286) smil2_root_pane

0x3d45,	// (0x000602b2) smil2_text_pane_ParamLimits

0x3d45,	// (0x000602b2) smil2_text_pane

0xa215,	// (0x00066782) bg_list_pane_cp06

0xb6ec,	// (0x00067c59) grid_radio_pane

0xa215,	// (0x00066782) bg_popup_window_pane_cp06

0xb6f4,	// (0x00067c61) main_fmradio_pane_t1

0xb056,	// (0x000675c3) heading_pane_cp04

0xb702,	// (0x00067c6f) main_fmradio_pane_t2

0xc6da,	// (0x00068c47) popup_cale_lunar_info_window_g1

0xb710,	// (0x00067c7d) main_fmradio_pane_t3

0xc6e2,	// (0x00068c4f) popup_cale_lunar_info_window_g2

0xb71e,	// (0x00067c8b) main_fmradio_pane_t4

0x0001,

0xb72c,	// (0x00067c99) main_fmradio_pane_t5

0x0004,

0x02f3,	// (0x0005c860) popup_cale_lunar_info_window_g

0x022d,	// (0x0005c79a) main_fmradio_pane_t

0xb73a,	// (0x00067ca7) wait_bar_pane_cp03

0xb742,	// (0x00067caf) cell_fmradio_pane_ParamLimits

0xb742,	// (0x00067caf) cell_fmradio_pane

0xb5a9,	// (0x00067b16) cell_fmradio_pane_g1_ParamLimits

0xb5a9,	// (0x00067b16) cell_fmradio_pane_g1

0xa215,	// (0x00066782) grid_highlight_pane_cp011

0xb755,	// (0x00067cc2) poc_content_pane_ParamLimits

0xb755,	// (0x00067cc2) poc_content_pane

0xb767,	// (0x00067cd4) scroll_pane_cp019

0x3d85,	// (0x000602f2) popup_call_poc_act_window_ParamLimits

0x3d85,	// (0x000602f2) popup_call_poc_act_window

0x3d92,	// (0x000602ff) popup_call_poc_inact_window_ParamLimits

0x3d92,	// (0x000602ff) popup_call_poc_inact_window

0x02ca,	// (0x0005c837) bg_popup_call_poc_act_pane_g

0xc652,	// (0x00068bbf) bg_popup_call_poc_inact_pane_g1

0xc65a,	// (0x00068bc7) bg_popup_call_poc_inact_pane_g2

0xb76f,	// (0x00067cdc) popup_call_poc_act_window_g2

0xc662,	// (0x00068bcf) bg_popup_call_poc_inact_pane_g3

0xc66a,	// (0x00068bd7) bg_popup_call_poc_inact_pane_g4

0xc672,	// (0x00068bdf) bg_popup_call_poc_inact_pane_g5

0xb777,	// (0x00067ce4) popup_call_poc_act_window_t1_ParamLimits

0xb777,	// (0x00067ce4) popup_call_poc_act_window_t1

0xb79f,	// (0x00067d0c) popup_call_poc_act_window_t2_ParamLimits

0xb79f,	// (0x00067d0c) popup_call_poc_act_window_t2

0xb7c7,	// (0x00067d34) popup_call_poc_act_window_t3_ParamLimits

0xb7c7,	// (0x00067d34) popup_call_poc_act_window_t3

0xb7ef,	// (0x00067d5c) popup_call_poc_act_window_t4_ParamLimits

0xb7ef,	// (0x00067d5c) popup_call_poc_act_window_t4

0x0003,

0x0238,	// (0x0005c7a5) popup_call_poc_act_window_t_ParamLimits

0x0238,	// (0x0005c7a5) popup_call_poc_act_window_t

0xc67a,	// (0x00068be7) bg_popup_call_poc_inact_pane_g6

0xc682,	// (0x00068bef) bg_popup_call_poc_inact_pane_g7

0xc68a,	// (0x00068bf7) bg_popup_call_poc_inact_pane_g8

0xb801,	// (0x00067d6e) popup_call_poc_inact_window_g2

0xc692,	// (0x00068bff) bg_popup_call_poc_inact_pane_g9

0x0008,

0x02b7,	// (0x0005c824) bg_popup_call_poc_inact_pane_g

0xb809,	// (0x00067d76) popup_call_poc_inact_window_t1_ParamLimits

0xb809,	// (0x00067d76) popup_call_poc_inact_window_t1

0xb81e,	// (0x00067d8b) popup_call_poc_inact_window_t2_ParamLimits

0xb81e,	// (0x00067d8b) popup_call_poc_inact_window_t2

0xb833,	// (0x00067da0) popup_call_poc_inact_window_t3_ParamLimits

0xb833,	// (0x00067da0) popup_call_poc_inact_window_t3

0x0002,

0x0241,	// (0x0005c7ae) popup_call_poc_inact_window_t_ParamLimits

0x0241,	// (0x0005c7ae) popup_call_poc_inact_window_t

0xc817,	// (0x00068d84) context_pane_ParamLimits

0x43ce,	// (0x0006093b) signal_pane_ParamLimits

0xb3e6,	// (0x00067953) main_call2_pane

0x4341,	// (0x000608ae) popup_phob_thumbnail2_window_ParamLimits

0x4341,	// (0x000608ae) popup_phob_thumbnail2_window

0x3a56,	// (0x0005ffc3) aid_hotspot_pointer_arrow_pane

0x3a5e,	// (0x0005ffcb) aid_hotspot_pointer_hand_pane

0x40b8,	// (0x00060625) phob_pre_status_pane_g5

0x1bdf,	// (0x0005e14c) cams_zoom_pane_ParamLimits

0x1beb,	// (0x0005e158) image_vga_pane_ParamLimits

0x1bfa,	// (0x0005e167) main_camera_pane_g1_ParamLimits

0x1c08,	// (0x0005e175) main_camera_pane_g2_ParamLimits

0x1c14,	// (0x0005e181) main_camera_pane_g3_ParamLimits

0x1c20,	// (0x0005e18d) main_camera_pane_g4_ParamLimits

0x1c2c,	// (0x0005e199) main_camera_pane_g5_ParamLimits

0x1c38,	// (0x0005e1a5) main_camera_pane_g6_ParamLimits

0x1c44,	// (0x0005e1b1) main_camera_pane_g7_ParamLimits

0xf20f,	// (0x0006b77c) main_camera_pane_g_ParamLimits

0x1c50,	// (0x0005e1bd) main_camera_pane_t1_ParamLimits

0x1c62,	// (0x0005e1cf) main_camera_pane_t2_ParamLimits

0xf220,	// (0x0006b78d) main_camera_pane_t_ParamLimits

0xa6bd,	// (0x00066c2a) bg_popup_preview_window_pane_cp01_ParamLimits

0xa6bd,	// (0x00066c2a) bg_popup_preview_window_pane_cp01

0xb848,	// (0x00067db5) popup_phob_thumbnail2_window_g1_ParamLimits

0xb848,	// (0x00067db5) popup_phob_thumbnail2_window_g1

0xa215,	// (0x00066782) call2_cli_visual_pane

0x3dae,	// (0x0006031b) popup_call2_audio_conf_window_ParamLimits

0x3dae,	// (0x0006031b) popup_call2_audio_conf_window

0x3dc3,	// (0x00060330) popup_call2_audio_first_window_ParamLimits

0x3dc3,	// (0x00060330) popup_call2_audio_first_window

0x3e61,	// (0x000603ce) popup_call2_audio_in_window_ParamLimits

0x3e61,	// (0x000603ce) popup_call2_audio_in_window

0x3ea3,	// (0x00060410) popup_call2_audio_out_window_ParamLimits

0x3ea3,	// (0x00060410) popup_call2_audio_out_window

0x3f05,	// (0x00060472) popup_call2_audio_second_window_ParamLimits

0x3f05,	// (0x00060472) popup_call2_audio_second_window

0x3f63,	// (0x000604d0) popup_call2_audio_wait_window_ParamLimits

0x3f63,	// (0x000604d0) popup_call2_audio_wait_window

0xa215,	// (0x00066782) bg_popup_call2_act_pane_cp03

0xa69f,	// (0x00066c0c) list_conf_pane_cp

0xb854,	// (0x00067dc1) popup_call2_audio_conf_window_t1

0xb862,	// (0x00067dcf) list_single_graphic_popup_conf2_pane_ParamLimits

0xb862,	// (0x00067dcf) list_single_graphic_popup_conf2_pane

0xb0ea,	// (0x00067657) list_highlight_pane_cp04

0xb875,	// (0x00067de2) list_single_graphic_popup_conf2_pane_g1

0xb0fb,	// (0x00067668) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4f2,	// (0x0006ba5f) list_single_graphic_popup_conf2_pane_g

0xb87f,	// (0x00067dec) list_single_graphic_popup_conf2_pane_t1

0xb88d,	// (0x00067dfa) bg_popup_call2_act_pane_cp01_ParamLimits

0xb88d,	// (0x00067dfa) bg_popup_call2_act_pane_cp01

0xb917,	// (0x00067e84) call_type_pane_cp05_ParamLimits

0xb917,	// (0x00067e84) call_type_pane_cp05

0xb96b,	// (0x00067ed8) popup_call2_audio_second_window_g1_ParamLimits

0xb96b,	// (0x00067ed8) popup_call2_audio_second_window_g1

0xb9bf,	// (0x00067f2c) popup_call2_audio_second_window_g2_ParamLimits

0xb9bf,	// (0x00067f2c) popup_call2_audio_second_window_g2

0x0002,

0x024d,	// (0x0005c7ba) popup_call2_audio_second_window_g_ParamLimits

0x024d,	// (0x0005c7ba) popup_call2_audio_second_window_g

0xba24,	// (0x00067f91) popup_call2_audio_second_window_t1_ParamLimits

0xba24,	// (0x00067f91) popup_call2_audio_second_window_t1

0xbadf,	// (0x0006804c) popup_call2_audio_second_window_t2_ParamLimits

0xbadf,	// (0x0006804c) popup_call2_audio_second_window_t2

0xbb32,	// (0x0006809f) popup_call2_audio_second_window_t3_ParamLimits

0xbb32,	// (0x0006809f) popup_call2_audio_second_window_t3

0x0003,

0x0254,	// (0x0005c7c1) popup_call2_audio_second_window_t_ParamLimits

0x0254,	// (0x0005c7c1) popup_call2_audio_second_window_t

0xa215,	// (0x00066782) bg_popup_call2_in_pane_cp02

0xa21f,	// (0x0006678c) call_type_pane_cp04

0xa227,	// (0x00066794) popup_call2_audio_wait_window_g1

0xa22f,	// (0x0006679c) popup_call2_audio_wait_window_g2

0x0001,

0xf0fc,	// (0x0006b669) popup_call2_audio_wait_window_g

0xa237,	// (0x000667a4) popup_call2_audio_wait_window_t3

0xbc25,	// (0x00068192) bg_popup_call2_act_pane_ParamLimits

0xbc25,	// (0x00068192) bg_popup_call2_act_pane

0xbce5,	// (0x00068252) call_type_pane_cp03_ParamLimits

0xbce5,	// (0x00068252) call_type_pane_cp03

0xbd49,	// (0x000682b6) popup_call2_audio_first_window_g1_ParamLimits

0xbd49,	// (0x000682b6) popup_call2_audio_first_window_g1

0xbdb9,	// (0x00068326) popup_call2_audio_first_window_g2_ParamLimits

0xbdb9,	// (0x00068326) popup_call2_audio_first_window_g2

0xb2e2,	// (0x0006784f) popup_call2_audio_first_window_g3_ParamLimits

0xb2e2,	// (0x0006784f) popup_call2_audio_first_window_g3

0x0004,

0xf4f7,	// (0x0006ba64) popup_call2_audio_first_window_g_ParamLimits

0xf4f7,	// (0x0006ba64) popup_call2_audio_first_window_g

0xbe97,	// (0x00068404) popup_call2_audio_first_window_t1_ParamLimits

0xbe97,	// (0x00068404) popup_call2_audio_first_window_t1

0xbf9a,	// (0x00068507) popup_call2_audio_first_window_t4_ParamLimits

0xbf9a,	// (0x00068507) popup_call2_audio_first_window_t4

0xc07d,	// (0x000685ea) popup_call2_audio_first_window_t5_ParamLimits

0xc07d,	// (0x000685ea) popup_call2_audio_first_window_t5

0x0003,

0x0268,	// (0x0005c7d5) popup_call2_audio_first_window_t_ParamLimits

0x0268,	// (0x0005c7d5) popup_call2_audio_first_window_t

0xa6b5,	// (0x00066c22) bg_popup_call2_act_pane_g1

0xc6ea,	// (0x00068c57) popup_cale_lunar_info_window_t1

0xc6f8,	// (0x00068c65) popup_cale_lunar_info_window_t2

0xc706,	// (0x00068c73) popup_cale_lunar_info_window_t3

0xa215,	// (0x00066782) bg_popup_call2_bubble_pane

0xc17e,	// (0x000686eb) bg_popup_call2_in_pane_cp01_ParamLimits

0xc17e,	// (0x000686eb) bg_popup_call2_in_pane_cp01

0x9979,	// (0x00065ee6) call_type_pane_cp02

0xc1c6,	// (0x00068733) popup_call2_audio_out_window_g1_ParamLimits

0xc1c6,	// (0x00068733) popup_call2_audio_out_window_g1

0xc1f2,	// (0x0006875f) popup_call2_audio_out_window_g2_ParamLimits

0xc1f2,	// (0x0006875f) popup_call2_audio_out_window_g2

0xc21a,	// (0x00068787) popup_call2_audio_out_window_g3_ParamLimits

0xc21a,	// (0x00068787) popup_call2_audio_out_window_g3

0x0003,

0x0271,	// (0x0005c7de) popup_call2_audio_out_window_g_ParamLimits

0x0271,	// (0x0005c7de) popup_call2_audio_out_window_g

0xc255,	// (0x000687c2) popup_call2_audio_out_window_t1_ParamLimits

0xc255,	// (0x000687c2) popup_call2_audio_out_window_t1

0xc2b4,	// (0x00068821) popup_call2_audio_out_window_t2_ParamLimits

0xc2b4,	// (0x00068821) popup_call2_audio_out_window_t2

0xc308,	// (0x00068875) popup_call2_audio_out_window_t3_ParamLimits

0xc308,	// (0x00068875) popup_call2_audio_out_window_t3

0xc31e,	// (0x0006888b) popup_call2_audio_out_window_t4_ParamLimits

0xc31e,	// (0x0006888b) popup_call2_audio_out_window_t4

0xc334,	// (0x000688a1) popup_call2_audio_out_window_t5_ParamLimits

0xc334,	// (0x000688a1) popup_call2_audio_out_window_t5

0x0005,

0x027a,	// (0x0005c7e7) popup_call2_audio_out_window_t_ParamLimits

0x027a,	// (0x0005c7e7) popup_call2_audio_out_window_t

0xc398,	// (0x00068905) bg_popup_call2_in_pane_ParamLimits

0xc398,	// (0x00068905) bg_popup_call2_in_pane

0xc3f4,	// (0x00068961) popup_call2_audio_in_window_g1_ParamLimits

0xc3f4,	// (0x00068961) popup_call2_audio_in_window_g1

0xc42c,	// (0x00068999) popup_call2_audio_in_window_g2_ParamLimits

0xc42c,	// (0x00068999) popup_call2_audio_in_window_g2

0xc464,	// (0x000689d1) popup_call2_audio_in_window_g3_ParamLimits

0xc464,	// (0x000689d1) popup_call2_audio_in_window_g3

0x0003,

0x0287,	// (0x0005c7f4) popup_call2_audio_in_window_g_ParamLimits

0x0287,	// (0x0005c7f4) popup_call2_audio_in_window_g

0xc4bc,	// (0x00068a29) popup_call2_audio_in_window_t1_ParamLimits

0xc4bc,	// (0x00068a29) popup_call2_audio_in_window_t1

0xc53c,	// (0x00068aa9) popup_call2_audio_in_window_t2_ParamLimits

0xc53c,	// (0x00068aa9) popup_call2_audio_in_window_t2

0xc5bc,	// (0x00068b29) popup_call2_audio_in_window_t3_ParamLimits

0xc5bc,	// (0x00068b29) popup_call2_audio_in_window_t3

0xc5d6,	// (0x00068b43) popup_call2_audio_in_window_t4_ParamLimits

0xc5d6,	// (0x00068b43) popup_call2_audio_in_window_t4

0xc5e8,	// (0x00068b55) popup_call2_audio_in_window_t5_ParamLimits

0xc5e8,	// (0x00068b55) popup_call2_audio_in_window_t5

0xc5fd,	// (0x00068b6a) popup_call2_audio_in_window_t6_ParamLimits

0xc5fd,	// (0x00068b6a) popup_call2_audio_in_window_t6

0x0005,

0x0290,	// (0x0005c7fd) popup_call2_audio_in_window_t_ParamLimits

0x0290,	// (0x0005c7fd) popup_call2_audio_in_window_t

0xa6b5,	// (0x00066c22) bg_popup_call2_in_pane_g1

0xc714,	// (0x00068c81) popup_cale_lunar_info_window_t4

0x0003,

0x02f8,	// (0x0005c865) popup_cale_lunar_info_window_t

0xa6bd,	// (0x00066c2a) bg_popup_call2_rect_pane_ParamLimits

0xa6bd,	// (0x00066c2a) bg_popup_call2_rect_pane

0xa215,	// (0x00066782) call2_cli_visual_graphic_pane

0xa215,	// (0x00066782) call2_cli_visual_text_pane

0x447c,	// (0x000609e9) smil_status_volume_pane_g3

0x0002,

0xa7f6,	// (0x00066d63) call2_cli_visual_graphic_pane_g1

0xa7f6,	// (0x00066d63) call2_cli_visual_graphic_pane_g2

0xa7f6,	// (0x00066d63) call2_cli_visual_graphic_pane_g3

0x0002,

0xf502,	// (0x0006ba6f) call2_cli_visual_graphic_pane_g

0xc612,	// (0x00068b7f) bg_popup_call2_rect_pane_g1

0xa894,	// (0x00066e01) bg_popup_call2_rect_pane_g2

0xc61a,	// (0x00068b87) bg_popup_call2_rect_pane_g3

0xc622,	// (0x00068b8f) bg_popup_call2_rect_pane_g4

0xc62a,	// (0x00068b97) bg_popup_call2_rect_pane_g5

0xc632,	// (0x00068b9f) bg_popup_call2_rect_pane_g6

0xc63a,	// (0x00068ba7) bg_popup_call2_rect_pane_g7

0xc642,	// (0x00068baf) bg_popup_call2_rect_pane_g8

0xc64a,	// (0x00068bb7) bg_popup_call2_rect_pane_g9

0x0008,

0xf509,	// (0x0006ba76) bg_popup_call2_rect_pane_g

0xc652,	// (0x00068bbf) bg_popup_call2_bubble_pane_g1

0xc65a,	// (0x00068bc7) bg_popup_call2_bubble_pane_g2

0xc662,	// (0x00068bcf) bg_popup_call2_bubble_pane_g3

0xc66a,	// (0x00068bd7) bg_popup_call2_bubble_pane_g4

0xc672,	// (0x00068bdf) bg_popup_call2_bubble_pane_g5

0xc67a,	// (0x00068be7) bg_popup_call2_bubble_pane_g6

0xc682,	// (0x00068bef) bg_popup_call2_bubble_pane_g7

0xc68a,	// (0x00068bf7) bg_popup_call2_bubble_pane_g8

0xc692,	// (0x00068bff) bg_popup_call2_bubble_pane_g9

0x0008,

0x02b7,	// (0x0005c824) bg_popup_call2_bubble_pane_g

0x1609,	// (0x0005db76) aid_cale_week_size_cell_pane

0x1c74,	// (0x0005e1e1) aid_cams_cif_uncrop_pane_ParamLimits

0x1c74,	// (0x0005e1e1) aid_cams_cif_uncrop_pane

0x1dcf,	// (0x0005e33c) aid_cams_size_cell_ParamLimits

0x1dcf,	// (0x0005e33c) aid_cams_size_cell

0x1ddb,	// (0x0005e348) grid_cams_pane_ParamLimits

0x1de9,	// (0x0005e356) linegrid_cams_pane_ParamLimits

0x1f2a,	// (0x0005e497) call_video_pane_t1

0x1f4b,	// (0x0005e4b8) call_video_pane_t2

0x0001,

0xf273,	// (0x0006b7e0) call_video_pane_t

0x24ba,	// (0x0005ea27) aid_cale_month_size_cell_pane_ParamLimits

0x24ba,	// (0x0005ea27) aid_cale_month_size_cell_pane

0xf54c,	// (0x0006bab9) smil_status_volume_pane_g

0x4489,	// (0x000609f6) volume_smil_pane_ParamLimits

0x0d6a,	// (0x0005d2d7) aid_popup2_width_pane

0x14fd,	// (0x0005da6a) cell_qdial_pane_g4_ParamLimits

0x14fd,	// (0x0005da6a) cell_qdial_pane_g4

0x349b,	// (0x0005fa08) aid_blid_cardinal_pane_ParamLimits

0x34ab,	// (0x0005fa18) aid_blid_destination_pane_ParamLimits

0x34ab,	// (0x0005fa18) aid_blid_destination_pane

0xa6bd,	// (0x00066c2a) bg_popup_call_poc_act_pane_ParamLimits

0xa6bd,	// (0x00066c2a) bg_popup_call_poc_act_pane

0xa6bd,	// (0x00066c2a) bg_popup_call_poc_inact_pane_ParamLimits

0xa6bd,	// (0x00066c2a) bg_popup_call_poc_inact_pane

0xc69a,	// (0x00068c07) bg_popup_call_poc_act_pane_g1

0xc6a2,	// (0x00068c0f) bg_popup_call_poc_act_pane_g2

0xc6aa,	// (0x00068c17) bg_popup_call_poc_act_pane_g3

0xc66a,	// (0x00068bd7) bg_popup_call_poc_act_pane_g4

0xc672,	// (0x00068bdf) bg_popup_call_poc_act_pane_g5

0xc6b2,	// (0x00068c1f) bg_popup_call_poc_act_pane_g6

0xc682,	// (0x00068bef) bg_popup_call_poc_act_pane_g7

0xc6ba,	// (0x00068c27) bg_popup_call_poc_act_pane_g8

0xa215,	// (0x00066782) main_usb_pane

0x427a,	// (0x000607e7) popup_cale_lunar_info_window

0x226a,	// (0x0005e7d7) im_reading_pane_t1_ParamLimits

0xaa69,	// (0x00066fd6) list_im_pane_ParamLimits

0xaa7a,	// (0x00066fe7) scroll_pane_cp07_ParamLimits

0xa215,	// (0x00066782) grid_highlight_pane_cp012

0xa6bd,	// (0x00066c2a) mup_scale_pane_ParamLimits

0xb2e2,	// (0x0006784f) main_usb_pane_g1_ParamLimits

0xb2e2,	// (0x0006784f) main_usb_pane_g1

0x3fdb,	// (0x00060548) main_usb_pane_g2_ParamLimits

0x3fdb,	// (0x00060548) main_usb_pane_g2

0x0001,

0xf51c,	// (0x0006ba89) main_usb_pane_g_ParamLimits

0xf51c,	// (0x0006ba89) main_usb_pane_g

0x3fe7,	// (0x00060554) main_usb_pane_t1_ParamLimits

0x3fe7,	// (0x00060554) main_usb_pane_t1

0x3ff9,	// (0x00060566) main_usb_pane_t2_ParamLimits

0x3ff9,	// (0x00060566) main_usb_pane_t2

0x400b,	// (0x00060578) main_usb_pane_t3_ParamLimits

0x400b,	// (0x00060578) main_usb_pane_t3

0x401d,	// (0x0006058a) main_usb_pane_t4_ParamLimits

0x401d,	// (0x0006058a) main_usb_pane_t4

0x402f,	// (0x0006059c) main_usb_pane_t5_ParamLimits

0x402f,	// (0x0006059c) main_usb_pane_t5

0x4041,	// (0x000605ae) main_usb_pane_t6_ParamLimits

0x4041,	// (0x000605ae) main_usb_pane_t6

0x0005,

0xf521,	// (0x0006ba8e) main_usb_pane_t_ParamLimits

0x3441,	// (0x0005f9ae) aid_text_placing

0x344d,	// (0x0005f9ba) main_location2_pane_t1_ParamLimits

0x3461,	// (0x0005f9ce) main_location2_pane_t2_ParamLimits

0x3475,	// (0x0005f9e2) main_location2_pane_t3_ParamLimits

0x3489,	// (0x0005f9f6) main_location2_pane_t4_ParamLimits

0x3489,	// (0x0005f9f6) main_location2_pane_t4

0xf3d4,	// (0x0006b941) main_location2_pane_t_ParamLimits

0xa6f9,	// (0x00066c66) find_pinb_pane_g2_ParamLimits

0xa6f9,	// (0x00066c66) find_pinb_pane_g2

0x0001,

0xf122,	// (0x0006b68f) find_pinb_pane_g_ParamLimits

0xf122,	// (0x0006b68f) find_pinb_pane_g

0xa705,	// (0x00066c72) find_pinb_pane_t1_ParamLimits

0xa717,	// (0x00066c84) find_pinb_pane_t2_ParamLimits

0xf127,	// (0x0006b694) find_pinb_pane_t_ParamLimits

0xa215,	// (0x00066782) main_call3_pane

0x2a2e,	// (0x0005ef9b) cale_month_day_heading_pane_t1_ParamLimits

0x2ab4,	// (0x0005f021) cale_month_day_heading_pane_t2_ParamLimits

0x2b45,	// (0x0005f0b2) cale_month_day_heading_pane_t3_ParamLimits

0x2bd6,	// (0x0005f143) cale_month_day_heading_pane_t4_ParamLimits

0x2c67,	// (0x0005f1d4) cale_month_day_heading_pane_t5_ParamLimits

0x2cf8,	// (0x0005f265) cale_month_day_heading_pane_t6_ParamLimits

0x2d95,	// (0x0005f302) cale_month_day_heading_pane_t7_ParamLimits

0xf2ab,	// (0x0006b818) cale_month_day_heading_pane_t_ParamLimits

0xacc4,	// (0x00067231) smil_status_volume_pane

0x3b92,	// (0x000600ff) postcard_address_pane_ParamLimits

0x3b92,	// (0x000600ff) postcard_address_pane

0x3b9e,	// (0x0006010b) postcard_message_pane_ParamLimits

0x3b9e,	// (0x0006010b) postcard_message_pane

0x3fa2,	// (0x0006050f) call2_cli_visual_pane_t1_ParamLimits

0x3fa2,	// (0x0006050f) call2_cli_visual_pane_t1

0x45de,	// (0x00060b4b) postcard_message_pane_t1_ParamLimits

0x45de,	// (0x00060b4b) postcard_message_pane_t1

0x45c7,	// (0x00060b34) postcard_address_pane_t1_ParamLimits

0x45c7,	// (0x00060b34) postcard_address_pane_t1

0x45b8,	// (0x00060b25) popup_call3_audio_in_window_ParamLimits

0x45b8,	// (0x00060b25) popup_call3_audio_in_window

0x449e,	// (0x00060a0b) bg_popup_call3_in_pane_ParamLimits

0x449e,	// (0x00060a0b) bg_popup_call3_in_pane

0x44fe,	// (0x00060a6b) popup_call3_audio_in_window_g1_ParamLimits

0x44fe,	// (0x00060a6b) popup_call3_audio_in_window_g1

0x4516,	// (0x00060a83) popup_call3_audio_in_window_g2_ParamLimits

0x4516,	// (0x00060a83) popup_call3_audio_in_window_g2

0x452e,	// (0x00060a9b) popup_call3_audio_in_window_g3_ParamLimits

0x452e,	// (0x00060a9b) popup_call3_audio_in_window_g3

0x0003,

0xf553,	// (0x0006bac0) popup_call3_audio_in_window_g_ParamLimits

0xf553,	// (0x0006bac0) popup_call3_audio_in_window_g

0x4556,	// (0x00060ac3) popup_call3_audio_in_window_t1_ParamLimits

0x4556,	// (0x00060ac3) popup_call3_audio_in_window_t1

0x457e,	// (0x00060aeb) popup_call3_audio_in_window_t2_ParamLimits

0x457e,	// (0x00060aeb) popup_call3_audio_in_window_t2

0x45a6,	// (0x00060b13) popup_call3_audio_in_window_t3_ParamLimits

0x45a6,	// (0x00060b13) popup_call3_audio_in_window_t3

0x0002,

0xf55c,	// (0x0006bac9) popup_call3_audio_in_window_t_ParamLimits

0xf55c,	// (0x0006bac9) popup_call3_audio_in_window_t

0xb3e6,	// (0x00067953) bg_popup_call3_rect_pane

0xc612,	// (0x00068b7f) bg_popup_call3_rect_pane_g1

0xa894,	// (0x00066e01) bg_popup_call3_rect_pane_g2

0xc61a,	// (0x00068b87) bg_popup_call3_rect_pane_g3

0xc622,	// (0x00068b8f) bg_popup_call3_rect_pane_g4

0xc62a,	// (0x00068b97) bg_popup_call3_rect_pane_g5

0xc632,	// (0x00068b9f) bg_popup_call3_rect_pane_g6

0xc63a,	// (0x00068ba7) bg_popup_call3_rect_pane_g7

0x37c1,	// (0x0005fd2e) mup_visualizer_osc_pane

0xb4a5,	// (0x00067a12) mup_visualizer_spec_pane

0x44be,	// (0x00060a2b) call3_video_qcif_pane_ParamLimits

0x44be,	// (0x00060a2b) call3_video_qcif_pane

0x44ce,	// (0x00060a3b) call3_video_qcif_uncrop_pane_ParamLimits

0x44ce,	// (0x00060a3b) call3_video_qcif_uncrop_pane

0x44dc,	// (0x00060a49) call3_video_subqcif_pane_ParamLimits

0x44dc,	// (0x00060a49) call3_video_subqcif_pane

0x44ee,	// (0x00060a5b) call3_video_subqcif_uncrop_pane_ParamLimits

0x44ee,	// (0x00060a5b) call3_video_subqcif_uncrop_pane

0x4546,	// (0x00060ab3) popup_call3_audio_in_window_g4_ParamLimits

0x4546,	// (0x00060ab3) popup_call3_audio_in_window_g4

0x4469,	// (0x000609d6) mup_spec_half_pane

0x4472,	// (0x000609df) mup_spec_half_pane_cp

0xc877,	// (0x00068de4) mup_osc_middle_pane

0xc880,	// (0x00068ded) mup_visualizer_osc_pane_g1

0x444a,	// (0x000609b7) mup_spec_bar_pane_ParamLimits

0x444a,	// (0x000609b7) mup_spec_bar_pane

0xc864,	// (0x00068dd1) mup_spec_bar_pane_g1

0xc86e,	// (0x00068ddb) mup_spec_bar_pane_g2

0x0001,

0x033c,	// (0x0005c8a9) mup_spec_bar_pane_g

0x1609,	// (0x0005db76) aid_cale_week_size_cell_pane_ParamLimits

0x161e,	// (0x0005db8b) bg_cale_heading_pane_ParamLimits

0xa8d1,	// (0x00066e3e) bg_cale_pane_cp01_ParamLimits

0x1640,	// (0x0005dbad) cale_week_corner_pane_ParamLimits

0x165a,	// (0x0005dbc7) cale_week_day_heading_pane_ParamLimits

0x167c,	// (0x0005dbe9) cale_week_scroll_pane_g1_ParamLimits

0x1699,	// (0x0005dc06) cale_week_scroll_pane_g2_ParamLimits

0x16ac,	// (0x0005dc19) cale_week_scroll_pane_g3_ParamLimits

0x16bf,	// (0x0005dc2c) cale_week_scroll_pane_g4_ParamLimits

0x16d2,	// (0x0005dc3f) cale_week_scroll_pane_g5_ParamLimits

0x16e5,	// (0x0005dc52) cale_week_scroll_pane_g6_ParamLimits

0x16f8,	// (0x0005dc65) cale_week_scroll_pane_g7_ParamLimits

0x170b,	// (0x0005dc78) cale_week_scroll_pane_g8_ParamLimits

0x1720,	// (0x0005dc8d) cale_week_scroll_pane_g9_ParamLimits

0x1733,	// (0x0005dca0) cale_week_scroll_pane_g10_ParamLimits

0x1746,	// (0x0005dcb3) cale_week_scroll_pane_g11_ParamLimits

0x1759,	// (0x0005dcc6) cale_week_scroll_pane_g12_ParamLimits

0x1770,	// (0x0005dcdd) cale_week_scroll_pane_g13_ParamLimits

0x178b,	// (0x0005dcf8) cale_week_scroll_pane_g14_ParamLimits

0x17a6,	// (0x0005dd13) cale_week_scroll_pane_g15_ParamLimits

0xf1b3,	// (0x0006b720) cale_week_scroll_pane_g_ParamLimits

0x17c1,	// (0x0005dd2e) cale_week_time_pane_ParamLimits

0x17d6,	// (0x0005dd43) grid_cale_week_pane_ParamLimits

0xa8ef,	// (0x00066e5c) listscroll_cale_week_pane_t1

0xa901,	// (0x00066e6e) scroll_pane_cp08_ParamLimits

0x2523,	// (0x0005ea90) cale_month_corner_pane_ParamLimits

0xac9a,	// (0x00067207) cale_month_pane_t1

0x29c7,	// (0x0005ef34) cale_month_week_pane_ParamLimits

0xb2e2,	// (0x0006784f) popup_call_status_window_g1_ParamLimits

0x3287,	// (0x0005f7f4) popup_call_status_window_g2_ParamLimits

0x3293,	// (0x0005f800) popup_call_status_window_g3_ParamLimits

0xf35b,	// (0x0006b8c8) popup_call_status_window_g_ParamLimits

0xb046,	// (0x000675b3) aid_call2_pane

0x3a48,	// (0x0005ffb5) msg_header_pane_g1

0x3b92,	// (0x000600ff) postcard_address2_pane_ParamLimits

0x3b92,	// (0x000600ff) postcard_address2_pane

0x3b9e,	// (0x0006010b) postcard_message2_pane_ParamLimits

0x3b9e,	// (0x0006010b) postcard_message2_pane

0x43dc,	// (0x00060949) message2_row_pane_ParamLimits

0x43dc,	// (0x00060949) message2_row_pane

0x43f9,	// (0x00060966) address2_row_pane_ParamLimits

0x43f9,	// (0x00060966) address2_row_pane

0xc832,	// (0x00068d9f) postcard_message2_row_pane_g1

0xc83a,	// (0x00068da7) postcard_message2_row_pane_t1

0xc832,	// (0x00068d9f) address2_row_pane_g1

0xc83a,	// (0x00068da7) address2_row_pane_t1

0x1b36,	// (0x0005e0a3) aid_size_cell_vorec

0xa215,	// (0x00066782) main_rss_pane

0x440c,	// (0x00060979) rss_list_single_pane_ParamLimits

0x440c,	// (0x00060979) rss_list_single_pane

0xc848,	// (0x00068db5) rss_list_single_pane_t1

0xc856,	// (0x00068dc3) rss_list_single_pane_t2

0x0001,

0x0337,	// (0x0005c8a4) rss_list_single_pane_t

0xa215,	// (0x00066782) main_camera2_pane

0xa215,	// (0x00066782) main_video2_pane

0x4642,	// (0x00060baf) cams_zoom_pane_cp2_ParamLimits

0x4642,	// (0x00060baf) cams_zoom_pane_cp2

0x464e,	// (0x00060bbb) image2_vga_pane_ParamLimits

0x464e,	// (0x00060bbb) image2_vga_pane

0x465d,	// (0x00060bca) main_camera2_pane_g1_ParamLimits

0x465d,	// (0x00060bca) main_camera2_pane_g1

0x4669,	// (0x00060bd6) main_camera2_pane_g2_ParamLimits

0x4669,	// (0x00060bd6) main_camera2_pane_g2

0x4675,	// (0x00060be2) main_camera2_pane_g3_ParamLimits

0x4675,	// (0x00060be2) main_camera2_pane_g3

0x4681,	// (0x00060bee) main_camera2_pane_g4_ParamLimits

0x4681,	// (0x00060bee) main_camera2_pane_g4

0x468d,	// (0x00060bfa) main_camera2_pane_g5_ParamLimits

0x468d,	// (0x00060bfa) main_camera2_pane_g5

0x4699,	// (0x00060c06) main_camera2_pane_g6_ParamLimits

0x4699,	// (0x00060c06) main_camera2_pane_g6

0x46a5,	// (0x00060c12) main_camera2_pane_g7_ParamLimits

0x46a5,	// (0x00060c12) main_camera2_pane_g7

0x46b1,	// (0x00060c1e) main_camera2_pane_g8_ParamLimits

0x46b1,	// (0x00060c1e) main_camera2_pane_g8

0x0008,

0xf563,	// (0x0006bad0) main_camera2_pane_g_ParamLimits

0xf563,	// (0x0006bad0) main_camera2_pane_g

0x46c9,	// (0x00060c36) main_camera2_pane_t1_ParamLimits

0x46c9,	// (0x00060c36) main_camera2_pane_t1

0x46db,	// (0x00060c48) main_camera2_pane_t2_ParamLimits

0x46db,	// (0x00060c48) main_camera2_pane_t2

0x46ed,	// (0x00060c5a) main_camera2_pane_t3_ParamLimits

0x46ed,	// (0x00060c5a) main_camera2_pane_t3

0x46ff,	// (0x00060c6c) main_camera2_pane_t4_ParamLimits

0x46ff,	// (0x00060c6c) main_camera2_pane_t4

0x0006,

0xf576,	// (0x0006bae3) main_camera2_pane_t_ParamLimits

0xf576,	// (0x0006bae3) main_camera2_pane_t

0x4761,	// (0x00060cce) cams_zoom_pane_cp4_ParamLimits

0x4761,	// (0x00060cce) cams_zoom_pane_cp4

0x4771,	// (0x00060cde) image2_cif_pane_ParamLimits

0x4771,	// (0x00060cde) image2_cif_pane

0x4786,	// (0x00060cf3) image2_subqcif_pane_ParamLimits

0x4786,	// (0x00060cf3) image2_subqcif_pane

0x4795,	// (0x00060d02) main_video2_pane_g1_ParamLimits

0x4795,	// (0x00060d02) main_video2_pane_g1

0x47a7,	// (0x00060d14) main_video2_pane_g2_ParamLimits

0x47a7,	// (0x00060d14) main_video2_pane_g2

0x47b7,	// (0x00060d24) main_video2_pane_g3_ParamLimits

0x47b7,	// (0x00060d24) main_video2_pane_g3

0x47c7,	// (0x00060d34) main_video2_pane_g4_ParamLimits

0x47c7,	// (0x00060d34) main_video2_pane_g4

0x47d7,	// (0x00060d44) main_video2_pane_g5_ParamLimits

0x47d7,	// (0x00060d44) main_video2_pane_g5

0x47e7,	// (0x00060d54) main_video2_pane_g6_ParamLimits

0x47e7,	// (0x00060d54) main_video2_pane_g6

0x0005,

0xf585,	// (0x0006baf2) main_video2_pane_g_ParamLimits

0xf585,	// (0x0006baf2) main_video2_pane_g

0x47f9,	// (0x00060d66) main_video2_pane_t1_ParamLimits

0x47f9,	// (0x00060d66) main_video2_pane_t1

0x4813,	// (0x00060d80) main_video2_pane_t2_ParamLimits

0x4813,	// (0x00060d80) main_video2_pane_t2

0x4839,	// (0x00060da6) main_video2_pane_t3_ParamLimits

0x4839,	// (0x00060da6) main_video2_pane_t3

0x0002,

0xf592,	// (0x0006baff) main_video2_pane_t_ParamLimits

0xf592,	// (0x0006baff) main_video2_pane_t

0x40f8,	// (0x00060665) call_muted_g2

0x0001,

0xf547,	// (0x0006bab4) call_muted_g

0xa215,	// (0x00066782) main_mup2_pane

0xc8b7,	// (0x00068e24) main_mup2_pane_g1_ParamLimits

0xc8b7,	// (0x00068e24) main_mup2_pane_g1

0x485f,	// (0x00060dcc) main_mup2_pane_g2_ParamLimits

0x485f,	// (0x00060dcc) main_mup2_pane_g2

0x4ae1,	// (0x0006104e) main_mup_pane_g13_cp1

0x4ae9,	// (0x00061056) mup_volume_pane_cp1

0x487f,	// (0x00060dec) main_mup2_pane_g4_ParamLimits

0x487f,	// (0x00060dec) main_mup2_pane_g4

0x4894,	// (0x00060e01) main_mup2_pane_g5_ParamLimits

0x4894,	// (0x00060e01) main_mup2_pane_g5

0x48a9,	// (0x00060e16) main_mup2_pane_g6_ParamLimits

0x48a9,	// (0x00060e16) main_mup2_pane_g6

0x48be,	// (0x00060e2b) main_mup2_pane_g7_ParamLimits

0x48be,	// (0x00060e2b) main_mup2_pane_g7

0x0006,

0xf599,	// (0x0006bb06) main_mup2_pane_g_ParamLimits

0xf599,	// (0x0006bb06) main_mup2_pane_g

0x48da,	// (0x00060e47) main_mup2_pane_t1_ParamLimits

0x48da,	// (0x00060e47) main_mup2_pane_t1

0x48f1,	// (0x00060e5e) main_mup2_pane_t2_ParamLimits

0x48f1,	// (0x00060e5e) main_mup2_pane_t2

0x4908,	// (0x00060e75) main_mup2_pane_t3_ParamLimits

0x4908,	// (0x00060e75) main_mup2_pane_t3

0x491f,	// (0x00060e8c) main_mup2_pane_t4_ParamLimits

0x491f,	// (0x00060e8c) main_mup2_pane_t4

0x4939,	// (0x00060ea6) main_mup2_pane_t5_ParamLimits

0x4939,	// (0x00060ea6) main_mup2_pane_t5

0x4953,	// (0x00060ec0) main_mup2_pane_t6_ParamLimits

0x4953,	// (0x00060ec0) main_mup2_pane_t6

0x0005,

0xf5a8,	// (0x0006bb15) main_mup2_pane_t_ParamLimits

0xf5a8,	// (0x0006bb15) main_mup2_pane_t

0x498b,	// (0x00060ef8) mup2_visualizer_pane_ParamLimits

0x498b,	// (0x00060ef8) mup2_visualizer_pane

0x49c1,	// (0x00060f2e) mup_progress_pane_cp_ParamLimits

0x49c1,	// (0x00060f2e) mup_progress_pane_cp

0x4acc,	// (0x00061039) mup_volume_pane_cp_ParamLimits

0x4acc,	// (0x00061039) mup_volume_pane_cp

0x49d8,	// (0x00060f45) mup2_visualizer_pane_g1_ParamLimits

0x49d8,	// (0x00060f45) mup2_visualizer_pane_g1

0xc8c3,	// (0x00068e30) mup2_visualizer_pane_g2_ParamLimits

0xc8c3,	// (0x00068e30) mup2_visualizer_pane_g2

0x49ed,	// (0x00060f5a) mup2_visualizer_pane_g3_ParamLimits

0x49ed,	// (0x00060f5a) mup2_visualizer_pane_g3

0x0002,

0xf5b5,	// (0x0006bb22) mup2_visualizer_pane_g_ParamLimits

0xf5b5,	// (0x0006bb22) mup2_visualizer_pane_g

0xb6e4,	// (0x00067c51) aid_size_cell_fmradio

0x420e,	// (0x0006077b) aid_height_parent_landcape

0xaaf8,	// (0x00067065) wml_content_pane_cp

0xab00,	// (0x0006706d) wml_tabs_pane

0xab09,	// (0x00067076) popup_wml_miniature_window

0xab11,	// (0x0006707e) scroll_pane_cp021

0xab25,	// (0x00067092) wml_content_pane_comp8

0xa215,	// (0x00066782) bg_popup_sub_pane_cp05

0xc8e1,	// (0x00068e4e) popup_wml_miniature_window_g1

0xc8e9,	// (0x00068e56) wml_miniature_view_pane

0x49fb,	// (0x00060f68) aid_size_wml_view

0x4a03,	// (0x00060f70) wml_miniature_view_pane_g1

0x4a0c,	// (0x00060f79) wml_miniature_view_pane_g2

0x4a15,	// (0x00060f82) wml_miniature_view_pane_g3

0x4a1d,	// (0x00060f8a) wml_miniature_view_pane_g4

0x4a25,	// (0x00060f92) wml_miniature_view_pane_g5

0x4a2d,	// (0x00060f9a) wml_miniature_view_pane_g6

0x4a35,	// (0x00060fa2) wml_miniature_view_pane_g7

0x4a3d,	// (0x00060faa) wml_miniature_view_pane_g8

0x0007,

0xf5bc,	// (0x0006bb29) wml_miniature_view_pane_g

0xc8b7,	// (0x00068e24) background_graphic_ParamLimits

0xc8b7,	// (0x00068e24) background_graphic

0xc8f1,	// (0x00068e5e) wml_tabs_2_pane

0xc8fa,	// (0x00068e67) wml_tabs_3_pane_ParamLimits

0xc8fa,	// (0x00068e67) wml_tabs_3_pane

0xc90c,	// (0x00068e79) wml_tabs_4_pane_ParamLimits

0xc90c,	// (0x00068e79) wml_tabs_4_pane

0xc922,	// (0x00068e8f) wml_tabs_5_pane_ParamLimits

0xc922,	// (0x00068e8f) wml_tabs_5_pane

0xc93c,	// (0x00068ea9) wml_tabs_pane_g2_ParamLimits

0xc93c,	// (0x00068ea9) wml_tabs_pane_g2

0xc950,	// (0x00068ebd) wml_tabs_pane_g3_ParamLimits

0xc950,	// (0x00068ebd) wml_tabs_pane_g3

0x4a45,	// (0x00060fb2) wml_tabs_2_active_pane_ParamLimits

0x4a45,	// (0x00060fb2) wml_tabs_2_active_pane

0x4a55,	// (0x00060fc2) wml_tabs_2_passive_pane_ParamLimits

0x4a55,	// (0x00060fc2) wml_tabs_2_passive_pane

0x4a65,	// (0x00060fd2) wml_tabs_3_active_pane_cp_ParamLimits

0x4a65,	// (0x00060fd2) wml_tabs_3_active_pane_cp

0x4a76,	// (0x00060fe3) wml_tabs_3_passive_pane_ParamLimits

0x4a76,	// (0x00060fe3) wml_tabs_3_passive_pane

0x4a87,	// (0x00060ff4) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a87,	// (0x00060ff4) wml_tabs_3_passive_pane_cp

0x4a98,	// (0x00061005) tabs_4_active_pane

0x4aa0,	// (0x0006100d) tabs_4_passive_pane

0x4aa8,	// (0x00061015) tabs_4_passive_pane_cp

0x4ab0,	// (0x0006101d) tabs_4_passive_pane_cp2

0x3fd3,	// (0x00060540) aid_height_text

0x378a,	// (0x0005fcf7) mup_volume_cont_pane_ParamLimits

0x378a,	// (0x0005fcf7) mup_volume_cont_pane

0x1154,	// (0x0005d6c1) aid_size_cell_pinb

0x115e,	// (0x0005d6cb) aid_size_list_pinb

0x49aa,	// (0x00060f17) mup2_volume_cont_pane_ParamLimits

0x49aa,	// (0x00060f17) mup2_volume_cont_pane

0x4ab8,	// (0x00061025) mup2_volume_cont_pane_g1_ParamLimits

0x4ab8,	// (0x00061025) mup2_volume_cont_pane_g1

0x0d76,	// (0x0005d2e3) aid_size_cell_touch_ParamLimits

0x0d76,	// (0x0005d2e3) aid_size_cell_touch

0x1037,	// (0x0005d5a4) touch_pane_ParamLimits

0x1037,	// (0x0005d5a4) touch_pane

0x102d,	// (0x0005d59a) main_rss2_pane

0xc96d,	// (0x00068eda) listscroll_rss2_pane

0xc976,	// (0x00068ee3) rss2_navigation_pane

0xc97e,	// (0x00068eeb) list_rss2_pane

0xb195,	// (0x00067702) scroll_pane_cp22

0xc986,	// (0x00068ef3) rss2_navigation_pane_g1

0xc98f,	// (0x00068efc) rss2_navigation_pane_g2

0xc997,	// (0x00068f04) rss2_navigation_pane_g3

0x0002,

0x03c2,	// (0x0005c92f) rss2_navigation_pane_g

0xc99f,	// (0x00068f0c) rss2_navigation_pane_t1

0x4af1,	// (0x0006105e) rss2_list_single_pane_ParamLimits

0x4af1,	// (0x0006105e) rss2_list_single_pane

0xc9ad,	// (0x00068f1a) rss2_list_single_pane_t2

0xc9bb,	// (0x00068f28) rss2_list_single_pane_t3_ParamLimits

0xc9bb,	// (0x00068f28) rss2_list_single_pane_t3

0xc9d8,	// (0x00068f45) rss2_list_single_pane_t4

0x3045,	// (0x0005f5b2) smil_status_pane_g1

0x4225,	// (0x00060792) main_image2_pane_ParamLimits

0x4225,	// (0x00060792) main_image2_pane

0x46bd,	// (0x00060c2a) main_camera2_pane_g9_ParamLimits

0x46bd,	// (0x00060c2a) main_camera2_pane_g9

0x4711,	// (0x00060c7e) main_camera2_pane_t5_ParamLimits

0x4711,	// (0x00060c7e) main_camera2_pane_t5

0x4723,	// (0x00060c90) main_camera2_pane_t6_ParamLimits

0x4723,	// (0x00060c90) main_camera2_pane_t6

0x4b29,	// (0x00061096) main_image2_pane_g1_ParamLimits

0x4b29,	// (0x00061096) main_image2_pane_g1

0x3d6f,	// (0x000602dc) smil2_video_pane_ParamLimits

0x3d6f,	// (0x000602dc) smil2_video_pane

0x0c7f,	// (0x0005d1ec) aid_zoom_text_primary_cp

0x0fc8,	// (0x0005d535) popup_preview_fixed_window

0xaa61,	// (0x00066fce) im_reading_pane_g1

0x4607,	// (0x00060b74) cams2_bc_adjust_pane_cp_ParamLimits

0x4607,	// (0x00060b74) cams2_bc_adjust_pane_cp

0x4753,	// (0x00060cc0) cams2_bc_adjust_pane_ParamLimits

0x4753,	// (0x00060cc0) cams2_bc_adjust_pane

0xda63,	// (0x00069fd0) cams2_bc_adjust_pane_g1

0x4b35,	// (0x000610a2) cams2_slider_pane

0x4b3e,	// (0x000610ab) cams2_slider_pane_g1

0x4b47,	// (0x000610b4) cams2_slider_pane_g2

0x0006,

0xf5cd,	// (0x0006bb3a) cams2_slider_pane_g

0x124e,	// (0x0005d7bb) calc_display_pane_ParamLimits

0x126c,	// (0x0005d7d9) calc_paper_pane_ParamLimits

0x1288,	// (0x0005d7f5) grid_calc_pane_ParamLimits

0x32f5,	// (0x0005f862) popup_clock_digital_window_t1_ParamLimits

0xb681,	// (0x00067bee) main_image_pane_t1

0x1234,	// (0x0005d7a1) aid_size_cell_calc_ParamLimits

0x1234,	// (0x0005d7a1) aid_size_cell_calc

0x4256,	// (0x000607c3) popup_blid_sat_info2_window_ParamLimits

0x4256,	// (0x000607c3) popup_blid_sat_info2_window

0xc9ee,	// (0x00068f5b) aid_size_cell_blid

0xc9f6,	// (0x00068f63) bg_popup_window_pane_cp07

0xca19,	// (0x00068f86) grid_popup_blid_pane

0xca23,	// (0x00068f90) heading_pane_cp05_ParamLimits

0xca23,	// (0x00068f90) heading_pane_cp05

0xcaed,	// (0x0006905a) cell_popup_blid_pane_ParamLimits

0xcaed,	// (0x0006905a) cell_popup_blid_pane

0xcb13,	// (0x00069080) cell_popup_blid_pane_g1

0xcb1b,	// (0x00069088) cell_popup_blid_pane_t1

0x4970,	// (0x00060edd) mup2_indicator_pane_ParamLimits

0x4970,	// (0x00060edd) mup2_indicator_pane

0xb3e6,	// (0x00067953) mup2_visualizer_osc_pane

0xc8cf,	// (0x00068e3c) mup2_visualizer_spec_pane_ParamLimits

0xc8cf,	// (0x00068e3c) mup2_visualizer_spec_pane

0x4b61,	// (0x000610ce) mup2_spec_half_pane

0x4b6a,	// (0x000610d7) mup2_spec_half_pane_cp

0x4b74,	// (0x000610e1) mup2_spec_bar_pane_ParamLimits

0x4b74,	// (0x000610e1) mup2_spec_bar_pane

0xc864,	// (0x00068dd1) mup2_spec_bar_pane_g1

0xc86e,	// (0x00068ddb) mup2_spec_bar_pane_g2

0x0001,

0x033c,	// (0x0005c8a9) mup2_spec_bar_pane_g

0x4b93,	// (0x00061100) mup2_osc_middle_pane

0xc880,	// (0x00068ded) mup2_visualizer_osc_pane_g1

0x98aa,	// (0x00065e17) popup_number_entry_window_t1_ParamLimits

0x98bd,	// (0x00065e2a) popup_number_entry_window_t2_ParamLimits

0x98cf,	// (0x00065e3c) popup_number_entry_window_t3_ParamLimits

0x108e,	// (0x0005d5fb) popup_number_entry_window_t5_ParamLimits

0x108e,	// (0x0005d5fb) popup_number_entry_window_t5

0xf0cd,	// (0x0006b63a) popup_number_entry_window_t_ParamLimits

0x98e1,	// (0x00065e4e) text_title_cp2_ParamLimits

0x3a66,	// (0x0005ffd3) aid_hotspot_pointer_text2_pane

0x3af4,	// (0x00060061) main_viewer_pane_g9_ParamLimits

0x3af4,	// (0x00060061) main_viewer_pane_g9

0xac9a,	// (0x00067207) cale_month_pane_t1_ParamLimits

0xacd7,	// (0x00067244) bg_cale_pane_ParamLimits

0xacef,	// (0x0006725c) list_cale_pane_ParamLimits

0xad00,	// (0x0006726d) listscroll_cale_day_pane_t1

0xad12,	// (0x0006727f) scroll_pane_cp09_ParamLimits

0x37c9,	// (0x0005fd36) main_mup_eq_pane_t1_ParamLimits

0x37c9,	// (0x0005fd36) main_mup_eq_pane_t1

0x37e3,	// (0x0005fd50) main_mup_eq_pane_t2_ParamLimits

0x37e3,	// (0x0005fd50) main_mup_eq_pane_t2

0x37fb,	// (0x0005fd68) main_mup_eq_pane_t3_ParamLimits

0x37fb,	// (0x0005fd68) main_mup_eq_pane_t3

0x3813,	// (0x0005fd80) main_mup_eq_pane_t4_ParamLimits

0x3813,	// (0x0005fd80) main_mup_eq_pane_t4

0x382b,	// (0x0005fd98) main_mup_eq_pane_t5_ParamLimits

0x382b,	// (0x0005fd98) main_mup_eq_pane_t5

0x3843,	// (0x0005fdb0) main_mup_eq_pane_t6_ParamLimits

0x3843,	// (0x0005fdb0) main_mup_eq_pane_t6

0x3857,	// (0x0005fdc4) main_mup_eq_pane_t7_ParamLimits

0x3857,	// (0x0005fdc4) main_mup_eq_pane_t7

0x386b,	// (0x0005fdd8) main_mup_eq_pane_t8_ParamLimits

0x386b,	// (0x0005fdd8) main_mup_eq_pane_t8

0x3881,	// (0x0005fdee) main_mup_eq_pane_t9_ParamLimits

0x3881,	// (0x0005fdee) main_mup_eq_pane_t9

0x3899,	// (0x0005fe06) main_mup_eq_pane_t10_ParamLimits

0x3899,	// (0x0005fe06) main_mup_eq_pane_t10

0x0009,

0xf45a,	// (0x0006b9c7) main_mup_eq_pane_t_ParamLimits

0xf45a,	// (0x0006b9c7) main_mup_eq_pane_t

0x3956,	// (0x0005fec3) mup_equalizer_pane_cp5_ParamLimits

0x396c,	// (0x0005fed9) mup_equalizer_pane_cp6_ParamLimits

0x3984,	// (0x0005fef1) mup_equalizer_pane_cp7_ParamLimits

0x102d,	// (0x0005d59a) main_gallery_pane

0xc889,	// (0x00068df6) smil2_volume_pane

0xc891,	// (0x00068dfe) smil_status_volume_pane_g1_ParamLimits

0xc8a4,	// (0x00068e11) smil_status_volume_pane_g2_ParamLimits

0x447c,	// (0x000609e9) smil_status_volume_pane_g3_ParamLimits

0xf54c,	// (0x0006bab9) smil_status_volume_pane_g_ParamLimits

0xc9f6,	// (0x00068f63) bg_popup_window_pane_cp07_ParamLimits

0xca04,	// (0x00068f71) blid_firmament_pane

0x4b9c,	// (0x00061109) aid_size_cell_gallery_ParamLimits

0x4b9c,	// (0x00061109) aid_size_cell_gallery

0x4baa,	// (0x00061117) grid_gallery_pane_ParamLimits

0x4baa,	// (0x00061117) grid_gallery_pane

0x4bba,	// (0x00061127) cell_gallery_pane_ParamLimits

0x4bba,	// (0x00061127) cell_gallery_pane

0xcb29,	// (0x00069096) bg_cell_gallery_focus_pane_ParamLimits

0xcb29,	// (0x00069096) bg_cell_gallery_focus_pane

0xcb3b,	// (0x000690a8) cell_gallery_pane_g1_ParamLimits

0xcb3b,	// (0x000690a8) cell_gallery_pane_g1

0x4c08,	// (0x00061175) cell_gallery_pane_g2_ParamLimits

0x4c08,	// (0x00061175) cell_gallery_pane_g2

0x4c15,	// (0x00061182) cell_gallery_pane_g3_ParamLimits

0x4c15,	// (0x00061182) cell_gallery_pane_g3

0xcb47,	// (0x000690b4) cell_gallery_pane_g4_ParamLimits

0xcb47,	// (0x000690b4) cell_gallery_pane_g4

0x0003,

0xf5dc,	// (0x0006bb49) cell_gallery_pane_g_ParamLimits

0xf5dc,	// (0x0006bb49) cell_gallery_pane_g

0xcb53,	// (0x000690c0) bg_cell_gallery_focus_pane_g1

0xcb5b,	// (0x000690c8) bg_cell_gallery_focus_pane_g2

0xcb63,	// (0x000690d0) bg_cell_gallery_focus_pane_g3

0xcb6b,	// (0x000690d8) bg_cell_gallery_focus_pane_g4

0xcb73,	// (0x000690e0) bg_cell_gallery_focus_pane_g5

0xcb7b,	// (0x000690e8) bg_cell_gallery_focus_pane_g6

0xcb83,	// (0x000690f0) bg_cell_gallery_focus_pane_g7

0xcb8b,	// (0x000690f8) bg_cell_gallery_focus_pane_g8

0x0007,

0x03f8,	// (0x0005c965) bg_cell_gallery_focus_pane_g

0xcb93,	// (0x00069100) aid_firma_cardinal

0xcba7,	// (0x00069114) blid_firmament_pane_t1

0xcbbe,	// (0x0006912b) blid_firmament_pane_t2

0xcbd5,	// (0x00069142) blid_firmament_pane_t3

0xcbec,	// (0x00069159) blid_firmament_pane_t4

0x0003,

0x0409,	// (0x0005c976) blid_firmament_pane_t

0xcc03,	// (0x00069170) blid_sat_info_pane

0xcc13,	// (0x00069180) blid_sat_info_pane_g1

0xcc13,	// (0x00069180) blid_sat_info_pane_g2

0x0001,

0x0412,	// (0x0005c97f) blid_sat_info_pane_g

0xcc1d,	// (0x0006918a) blid_sat_info_pane_t1

0xcc2b,	// (0x00069198) smil2_volume_content_pane

0xcc34,	// (0x000691a1) smil2_volume_pane_g1

0xa82b,	// (0x00066d98) smil2_volume_content_pane_g1

0xcc3c,	// (0x000691a9) smil2_volume_content_pane_g2

0xcc45,	// (0x000691b2) smil2_volume_content_pane_g3

0xcc4e,	// (0x000691bb) smil2_volume_content_pane_g4

0xcc57,	// (0x000691c4) smil2_volume_content_pane_g5

0xcc60,	// (0x000691cd) smil2_volume_content_pane_g6

0xcc69,	// (0x000691d6) smil2_volume_content_pane_g7

0xcc72,	// (0x000691df) smil2_volume_content_pane_g8

0xcc7b,	// (0x000691e8) smil2_volume_content_pane_g9

0xcc84,	// (0x000691f1) smil2_volume_content_pane_g10

0x0009,

0xf5e5,	// (0x0006bb52) smil2_volume_content_pane_g

0x185b,	// (0x0005ddc8) cale_week_day_heading_pane_t1_ParamLimits

0x1896,	// (0x0005de03) cale_week_day_heading_pane_t2_ParamLimits

0x18d1,	// (0x0005de3e) cale_week_day_heading_pane_t3_ParamLimits

0x190c,	// (0x0005de79) cale_week_day_heading_pane_t4_ParamLimits

0x1947,	// (0x0005deb4) cale_week_day_heading_pane_t5_ParamLimits

0x1982,	// (0x0005deef) cale_week_day_heading_pane_t6_ParamLimits

0x19bd,	// (0x0005df2a) cale_week_day_heading_pane_t7_ParamLimits

0xf1d2,	// (0x0006b73f) cale_week_day_heading_pane_t_ParamLimits

0xa91e,	// (0x00066e8b) bg_cale_side_pane_ParamLimits

0x19f8,	// (0x0005df65) cale_week_time_pane_t1_ParamLimits

0x1a12,	// (0x0005df7f) cale_week_time_pane_t2_ParamLimits

0x1a2c,	// (0x0005df99) cale_week_time_pane_t3_ParamLimits

0x1a46,	// (0x0005dfb3) cale_week_time_pane_t4_ParamLimits

0x1a60,	// (0x0005dfcd) cale_week_time_pane_t5_ParamLimits

0x1a7c,	// (0x0005dfe9) cale_week_time_pane_t6_ParamLimits

0x1a9e,	// (0x0005e00b) cale_week_time_pane_t7_ParamLimits

0x1ac2,	// (0x0005e02f) cale_week_time_pane_t8_ParamLimits

0xf1e1,	// (0x0006b74e) cale_week_time_pane_t_ParamLimits

0x1ae8,	// (0x0005e055) cell_cale_week_pane_g2_ParamLimits

0xa91e,	// (0x00066e8b) bg_cale_side_pane_cp01_ParamLimits

0x2e3e,	// (0x0005f3ab) cale_month_week_pane_t1_ParamLimits

0x2e57,	// (0x0005f3c4) cale_month_week_pane_t2_ParamLimits

0x2e70,	// (0x0005f3dd) cale_month_week_pane_t3_ParamLimits

0x2e89,	// (0x0005f3f6) cale_month_week_pane_t4_ParamLimits

0x2ea6,	// (0x0005f413) cale_month_week_pane_t5_ParamLimits

0x2ec7,	// (0x0005f434) cale_month_week_pane_t6_ParamLimits

0xf2ba,	// (0x0006b827) cale_month_week_pane_t_ParamLimits

0x300e,	// (0x0005f57b) cell_cale_month_pane_g1_ParamLimits

0x102d,	// (0x0005d59a) main_cale_event_viewer_pane

0x9880,	// (0x00065ded) listscroll_cale_event_viewer_pane

0xcc8d,	// (0x000691fa) list_cale_ev_pane

0xcc95,	// (0x00069202) scroll_pane_cp023

0xcca1,	// (0x0006920e) field_cale_ev_pane_ParamLimits

0xcca1,	// (0x0006920e) field_cale_ev_pane

0xccbd,	// (0x0006922a) field_cale_ev_content_pane_ParamLimits

0xccbd,	// (0x0006922a) field_cale_ev_content_pane

0xccc9,	// (0x00069236) field_cale_ev_pane_g1_ParamLimits

0xccc9,	// (0x00069236) field_cale_ev_pane_g1

0xccd5,	// (0x00069242) field_cale_ev_pane_g2_ParamLimits

0xccd5,	// (0x00069242) field_cale_ev_pane_g2

0xcced,	// (0x0006925a) field_cale_ev_pane_g3_ParamLimits

0xcced,	// (0x0006925a) field_cale_ev_pane_g3

0x0002,

0x042c,	// (0x0005c999) field_cale_ev_pane_g_ParamLimits

0x042c,	// (0x0005c999) field_cale_ev_pane_g

0xcd05,	// (0x00069272) field_cale_ev_pane_t1_ParamLimits

0xcd05,	// (0x00069272) field_cale_ev_pane_t1

0xcd1c,	// (0x00069289) field_cale_ev_content_pane_t1_ParamLimits

0xcd1c,	// (0x00069289) field_cale_ev_content_pane_t1

0x3a3f,	// (0x0005ffac) bg_button_pane_cp01

0x15f9,	// (0x0005db66) listscroll_cale_week_pane_ParamLimits

0xa8c8,	// (0x00066e35) popup_toolbar_window_cp01

0xa8ef,	// (0x00066e5c) listscroll_cale_week_pane_t1_ParamLimits

0x15f9,	// (0x0005db66) listscroll_cale_day_pane_ParamLimits

0xa8c8,	// (0x00066e35) popup_toolbar_window_cp02

0xad00,	// (0x0006726d) listscroll_cale_day_pane_t1_ParamLimits

0x15f9,	// (0x0005db66) main_cale_month_pane_ParamLimits

0x4353,	// (0x000608c0) popup_toolbar_window_cp03_ParamLimits

0x4353,	// (0x000608c0) popup_toolbar_window_cp03

0x3c81,	// (0x000601ee) main_image_pane_g2_ParamLimits

0x3c81,	// (0x000601ee) main_image_pane_g2

0x3c8d,	// (0x000601fa) main_image_pane_g3_ParamLimits

0x3c8d,	// (0x000601fa) main_image_pane_g3

0x0002,

0xf4e2,	// (0x0006ba4f) main_image_pane_g_ParamLimits

0xf4e2,	// (0x0006ba4f) main_image_pane_g

0xb681,	// (0x00067bee) main_image_pane_t1_ParamLimits

0x3c99,	// (0x00060206) main_image_pane_t2_ParamLimits

0x3c99,	// (0x00060206) main_image_pane_t2

0x3cab,	// (0x00060218) main_image_pane_t3_ParamLimits

0x3cab,	// (0x00060218) main_image_pane_t3

0x3cbd,	// (0x0006022a) main_image_pane_t4_ParamLimits

0x3cbd,	// (0x0006022a) main_image_pane_t4

0x0003,

0xf4e9,	// (0x0006ba56) main_image_pane_t_ParamLimits

0xf4e9,	// (0x0006ba56) main_image_pane_t

0x3ccf,	// (0x0006023c) popup_image_details_window_cp01

0x3cd9,	// (0x00060246) popup_toobar_trans_pane_cp01_ParamLimits

0x3cd9,	// (0x00060246) popup_toobar_trans_pane_cp01

0x42a9,	// (0x00060816) popup_image_details_window_ParamLimits

0x42a9,	// (0x00060816) popup_image_details_window

0x42b7,	// (0x00060824) popup_image_focus_window

0x45f9,	// (0x00060b66) camera2_autofocus_pane_ParamLimits

0x45f9,	// (0x00060b66) camera2_autofocus_pane

0x9880,	// (0x00065ded) bg_popup_sub_pane_cp06

0xcd39,	// (0x000692a6) popup_image_focus_window_g1

0xcd41,	// (0x000692ae) popup_image_focus_window_g2

0xcd49,	// (0x000692b6) popup_image_focus_window_g3

0xcd51,	// (0x000692be) popup_image_focus_window_g4

0x0003,

0x0433,	// (0x0005c9a0) popup_image_focus_window_g

0xcd59,	// (0x000692c6) popup_image_focus_window_t1

0xcd67,	// (0x000692d4) popup_image_focus_window_t2

0xcd77,	// (0x000692e4) popup_image_focus_window_t3

0x0002,

0x043c,	// (0x0005c9a9) popup_image_focus_window_t

0xcd85,	// (0x000692f2) camera2_autofocus_pane_g1

0xa54e,	// (0x00066abb) bg_tb_trans_pane_cp01

0xcd93,	// (0x00069300) popup_image_details_window_g1

0xcda6,	// (0x00069313) popup_image_details_window_g2

0x0002,

0x044e,	// (0x0005c9bb) popup_image_details_window_g

0xcdcf,	// (0x0006933c) popup_image_details_window_t1

0xcde1,	// (0x0006934e) popup_image_details_window_t2

0xcdfa,	// (0x00069367) popup_image_details_window_t3

0xce0e,	// (0x0006937b) popup_image_details_window_t4

0xce29,	// (0x00069396) popup_image_details_window_t5

0x0004,

0x0455,	// (0x0005c9c2) popup_image_details_window_t

0xa78d,	// (0x00066cfa) bg_calc_paper_pane_ParamLimits

0x102d,	// (0x0005d59a) grid_highlight_pane_cp013

0x1385,	// (0x0005d8f2) list_calc_pane_ParamLimits

0x1397,	// (0x0005d904) scroll_pane_cp024

0xa7a1,	// (0x00066d0e) bg_calc_display_pane_ParamLimits

0x139f,	// (0x0005d90c) calc_display_pane_t1_ParamLimits

0x13b4,	// (0x0005d921) calc_display_pane_t2_ParamLimits

0x13c9,	// (0x0005d936) calc_display_pane_t3_ParamLimits

0xf154,	// (0x0006b6c1) calc_display_pane_t_ParamLimits

0x14aa,	// (0x0005da17) cell_calc_pane_g2

0x0001,

0xf171,	// (0x0006b6de) cell_calc_pane_g

0x14b3,	// (0x0005da20) cell_calc_pane_t1

0xa800,	// (0x00066d6d) grid_highlight_pane_cp02_ParamLimits

0xa816,	// (0x00066d83) toolbar_button_pane_cp01_ParamLimits

0xa816,	// (0x00066d83) toolbar_button_pane_cp01

0xb6c6,	// (0x00067c33) temp_image_control_pane_ParamLimits

0xb6c6,	// (0x00067c33) temp_image_control_pane

0x4225,	// (0x00060792) main_mp3_pane

0xce43,	// (0x000693b0) temp_image_control_pane_g1_ParamLimits

0xce43,	// (0x000693b0) temp_image_control_pane_g1

0xce51,	// (0x000693be) temp_image_control_pane_g2_ParamLimits

0xce51,	// (0x000693be) temp_image_control_pane_g2

0xce63,	// (0x000693d0) temp_image_control_pane_g3_ParamLimits

0xce63,	// (0x000693d0) temp_image_control_pane_g3

0x4c52,	// (0x000611bf) temp_image_control_pane_g4_ParamLimits

0x4c52,	// (0x000611bf) temp_image_control_pane_g4

0x0003,

0xf605,	// (0x0006bb72) temp_image_control_pane_g_ParamLimits

0xf605,	// (0x0006bb72) temp_image_control_pane_g

0xce43,	// (0x000693b0) main_mp3_pane_g1

0x4c63,	// (0x000611d0) main_mp3_pane_g2

0x0007,

0xf60e,	// (0x0006bb7b) main_mp3_pane_g

0xcea6,	// (0x00069413) main_mp3_pane_t1

0xa970,	// (0x00066edd) main_camera_pane_g8_ParamLimits

0xa970,	// (0x00066edd) main_camera_pane_g8

0x1d85,	// (0x0005e2f2) main_video_pane_g7_ParamLimits

0x1d85,	// (0x0005e2f2) main_video_pane_g7

0x4741,	// (0x00060cae) main_camera2_pane_t7_ParamLimits

0x4741,	// (0x00060cae) main_camera2_pane_t7

0xaab8,	// (0x00067025) scroll_pane_cp025_ParamLimits

0xaab8,	// (0x00067025) scroll_pane_cp025

0xaacc,	// (0x00067039) scroll_pane_cp026_ParamLimits

0xaacc,	// (0x00067039) scroll_pane_cp026

0xaadb,	// (0x00067048) wml_content_pane_ParamLimits

0x102d,	// (0x0005d59a) main_touch_calib_pane

0x4d07,	// (0x00061274) main_touch_calib_pane_g1

0x4d13,	// (0x00061280) main_touch_calib_pane_g2

0x4d1f,	// (0x0006128c) main_touch_calib_pane_g3

0x4d2b,	// (0x00061298) main_touch_calib_pane_g4

0x0003,

0xf62c,	// (0x0006bb99) main_touch_calib_pane_g

0x4d37,	// (0x000612a4) main_touch_calib_pane_t1

0x4d50,	// (0x000612bd) main_touch_calib_pane_t2

0x0004,

0xf635,	// (0x0006bba2) main_touch_calib_pane_t

0xb273,	// (0x000677e0) mup_progress_pane_cp02

0xb2a8,	// (0x00067815) navi_pane_g1

0xb371,	// (0x000678de) navi_pane_mp_t3

0x4225,	// (0x00060792) main_mp3_pane_ParamLimits

0x4390,	// (0x000608fd) navi_pane_ParamLimits

0xce43,	// (0x000693b0) main_mp3_pane_g1_ParamLimits

0x4c63,	// (0x000611d0) main_mp3_pane_g2_ParamLimits

0x4c6f,	// (0x000611dc) main_mp3_pane_g3_ParamLimits

0x4c6f,	// (0x000611dc) main_mp3_pane_g3

0x4c7b,	// (0x000611e8) main_mp3_pane_g4_ParamLimits

0x4c7b,	// (0x000611e8) main_mp3_pane_g4

0xce73,	// (0x000693e0) main_mp3_pane_g5_ParamLimits

0xce73,	// (0x000693e0) main_mp3_pane_g5

0xce81,	// (0x000693ee) main_mp3_pane_g6_ParamLimits

0xce81,	// (0x000693ee) main_mp3_pane_g6

0xce8e,	// (0x000693fb) main_mp3_pane_g7_ParamLimits

0xce8e,	// (0x000693fb) main_mp3_pane_g7

0xce9a,	// (0x00069407) main_mp3_pane_g8_ParamLimits

0xce9a,	// (0x00069407) main_mp3_pane_g8

0xf60e,	// (0x0006bb7b) main_mp3_pane_g_ParamLimits

0x4c87,	// (0x000611f4) main_mp3_pane_t2

0x4c97,	// (0x00061204) main_mp3_pane_t3

0xceb4,	// (0x00069421) main_mp3_pane_t4

0xcec2,	// (0x0006942f) main_mp3_pane_t5

0x0005,

0xf61f,	// (0x0006bb8c) main_mp3_pane_t

0xced0,	// (0x0006943d) mup_progress_pane_cp01

0x0c7f,	// (0x0005d1ec) aid_zoom_text_secondary2

0xcc8d,	// (0x000691fa) list_cale_ev2_pane

0xcc95,	// (0x00069202) scroll_pane_cp023_ParamLimits

0x4dab,	// (0x00061318) field_cale_ev2_pane_ParamLimits

0x4dab,	// (0x00061318) field_cale_ev2_pane

0x9e2c,	// (0x00066399) field_cale_ev2_pane_g1_ParamLimits

0x9e2c,	// (0x00066399) field_cale_ev2_pane_g1

0x9e38,	// (0x000663a5) field_cale_ev2_pane_g2_ParamLimits

0x9e38,	// (0x000663a5) field_cale_ev2_pane_g2

0x9e50,	// (0x000663bd) field_cale_ev2_pane_g3_ParamLimits

0x9e50,	// (0x000663bd) field_cale_ev2_pane_g3

0x0003,

0xf640,	// (0x0006bbad) field_cale_ev2_pane_g_ParamLimits

0xf640,	// (0x0006bbad) field_cale_ev2_pane_g

0x9e74,	// (0x000663e1) field_cale_ev2_pane_t1_ParamLimits

0x9e74,	// (0x000663e1) field_cale_ev2_pane_t1

0x9e8b,	// (0x000663f8) field_cale_ev2_pane_t2_ParamLimits

0x9e8b,	// (0x000663f8) field_cale_ev2_pane_t2

0x0001,

0xf649,	// (0x0006bbb6) field_cale_ev2_pane_t_ParamLimits

0xf649,	// (0x0006bbb6) field_cale_ev2_pane_t

0x3b5c,	// (0x000600c9) main_postcard_pane_g5_ParamLimits

0x3b5c,	// (0x000600c9) main_postcard_pane_g5

0x3b6a,	// (0x000600d7) main_postcard_pane_g6_ParamLimits

0x3b6a,	// (0x000600d7) main_postcard_pane_g6

0x1bcf,	// (0x0005e13c) camera2_autofocus_pane_cp_ParamLimits

0x1bcf,	// (0x0005e13c) camera2_autofocus_pane_cp

0x4225,	// (0x00060792) main_mup3_pane

0x4df9,	// (0x00061366) main_mup3_pane_g1_ParamLimits

0x4df9,	// (0x00061366) main_mup3_pane_g1

0x4e1a,	// (0x00061387) main_mup3_pane_g2_ParamLimits

0x4e1a,	// (0x00061387) main_mup3_pane_g2

0x4e96,	// (0x00061403) main_mup3_pane_g3_ParamLimits

0x4e96,	// (0x00061403) main_mup3_pane_g3

0x4ed9,	// (0x00061446) main_mup3_pane_g4_ParamLimits

0x4ed9,	// (0x00061446) main_mup3_pane_g4

0x4f1c,	// (0x00061489) main_mup3_pane_g5_ParamLimits

0x4f1c,	// (0x00061489) main_mup3_pane_g5

0x4f61,	// (0x000614ce) main_mup3_pane_g6_ParamLimits

0x4f61,	// (0x000614ce) main_mup3_pane_g6

0xced8,	// (0x00069445) main_mup3_pane_g7_ParamLimits

0xced8,	// (0x00069445) main_mup3_pane_g7

0x0007,

0xf659,	// (0x0006bbc6) main_mup3_pane_g_ParamLimits

0xf659,	// (0x0006bbc6) main_mup3_pane_g

0x4fd7,	// (0x00061544) main_mup3_pane_t1_ParamLimits

0x4fd7,	// (0x00061544) main_mup3_pane_t1

0x5046,	// (0x000615b3) main_mup3_pane_t2_ParamLimits

0x5046,	// (0x000615b3) main_mup3_pane_t2

0x510f,	// (0x0006167c) main_mup3_pane_t4_ParamLimits

0x510f,	// (0x0006167c) main_mup3_pane_t4

0x515d,	// (0x000616ca) main_mup3_pane_t5_ParamLimits

0x515d,	// (0x000616ca) main_mup3_pane_t5

0x520d,	// (0x0006177a) main_mup3_pane_t6_ParamLimits

0x520d,	// (0x0006177a) main_mup3_pane_t6

0x0005,

0xf66a,	// (0x0006bbd7) main_mup3_pane_t_ParamLimits

0xf66a,	// (0x0006bbd7) main_mup3_pane_t

0x52b9,	// (0x00061826) mup3_progress_pane_ParamLimits

0x52b9,	// (0x00061826) mup3_progress_pane

0x532d,	// (0x0006189a) popup_mup3_control_window_ParamLimits

0x532d,	// (0x0006189a) popup_mup3_control_window

0xcee6,	// (0x00069453) popup_mup3_text_window

0x5346,	// (0x000618b3) mup3_progress_pane_t1

0x5365,	// (0x000618d2) mup3_progress_pane_t2

0xceee,	// (0x0006945b) mup3_progress_pane_t3

0x0002,

0xf677,	// (0x0006bbe4) mup3_progress_pane_t

0xcf0b,	// (0x00069478) mup_progress_pane_cp03

0x9880,	// (0x00065ded) bg_tb_trans_pane_cp04

0x5384,	// (0x000618f1) mup3_volume_pane

0x538c,	// (0x000618f9) popup_mup3_control_window_g1

0x5395,	// (0x00061902) mup3_volume_pane_g1

0x539e,	// (0x0006190b) mup3_volume_pane_g2

0x53a7,	// (0x00061914) mup3_volume_pane_g3

0x0002,

0xf67e,	// (0x0006bbeb) mup3_volume_pane_g

0x9880,	// (0x00065ded) bg_tb_trans_pane_cp03

0xcf1b,	// (0x00069488) popup_mup3_text_window_g1

0xcf23,	// (0x00069490) popup_mup3_text_window_t1

0xa7e9,	// (0x00066d56) list_calc_item_pane_g1_ParamLimits

0xc964,	// (0x00068ed1) mup_volume_pane_cp_g1

0x4d69,	// (0x000612d6) main_touch_calib_pane_t3

0x4d7f,	// (0x000612ec) main_touch_calib_pane_t4

0x4d95,	// (0x00061302) main_touch_calib_pane_t5

0x0d62,	// (0x0005d2cf) aid_cell_size_toolbar2

0x0d6a,	// (0x0005d2d7) aid_popup3_width_pane

0x0c77,	// (0x0005d1e4) aid_zoom_text_msg_primary

0x1b9c,	// (0x0005e109) vorec_t7

0xa7ad,	// (0x00066d1a) bg_calc_paper_pane_g1_ParamLimits

0xa7b9,	// (0x00066d26) bg_calc_paper_pane_g2_ParamLimits

0xa7c5,	// (0x00066d32) bg_calc_paper_pane_g3_ParamLimits

0xa7d1,	// (0x00066d3e) bg_calc_paper_pane_g4_ParamLimits

0xa7dd,	// (0x00066d4a) bg_calc_paper_pane_g5_ParamLimits

0x1408,	// (0x0005d975) bg_calc_paper_pane_g6_ParamLimits

0x1419,	// (0x0005d986) bg_calc_paper_pane_g7_ParamLimits

0x142a,	// (0x0005d997) bg_calc_paper_pane_g8_ParamLimits

0xf15b,	// (0x0006b6c8) bg_calc_paper_pane_g_ParamLimits

0x143b,	// (0x0005d9a8) calc_bg_paper_pane_g9_ParamLimits

0x1cb6,	// (0x0005e223) image_qvga_pane_ParamLimits

0x1cb6,	// (0x0005e223) image_qvga_pane

0xa6bd,	// (0x00066c2a) bg_popup_sub_pane_cp04_ParamLimits

0xb5fd,	// (0x00067b6a) popup_mup_playback_window_g1_ParamLimits

0xb609,	// (0x00067b76) popup_mup_playback_window_t1_ParamLimits

0xb61e,	// (0x00067b8b) popup_mup_playback_window_t2_ParamLimits

0x0218,	// (0x0005c785) popup_mup_playback_window_t_ParamLimits

0x4870,	// (0x00060ddd) main_mup2_pane_g3_ParamLimits

0x4870,	// (0x00060ddd) main_mup2_pane_g3

0x1fd8,	// (0x0005e545) popup_toolbar_window_cp04

0xba13,	// (0x00067f80) popup_call2_audio_second_window_g3_ParamLimits

0xba13,	// (0x00067f80) popup_call2_audio_second_window_g3

0xbe1d,	// (0x0006838a) popup_call2_audio_first_window_g4_ParamLimits

0xbe1d,	// (0x0006838a) popup_call2_audio_first_window_g4

0xc49c,	// (0x00068a09) popup_call2_audio_in_window_g4_ParamLimits

0xc49c,	// (0x00068a09) popup_call2_audio_in_window_g4

0x3c74,	// (0x000601e1) aid_area_sk_bg_cut_ParamLimits

0x3c74,	// (0x000601e1) aid_area_sk_bg_cut

0xb633,	// (0x00067ba0) aid_area_sk_bg_cut_2_ParamLimits

0xb633,	// (0x00067ba0) aid_area_sk_bg_cut_2

0x4bf8,	// (0x00061165) aid_placing_details_win

0x4c00,	// (0x0006116d) aid_placing_details_win_2

0xcd85,	// (0x000692f2) camera2_autofocus_pane_g1_ParamLimits

0x0fb9,	// (0x0005d526) popup_fixed_preview_cale_window_ParamLimits

0x0fb9,	// (0x0005d526) popup_fixed_preview_cale_window

0xb3f7,	// (0x00067964) navi_slider_pane_g3

0xb400,	// (0x0006796d) navi_slider_pane_g4

0xb409,	// (0x00067976) navi_slider_pane_g5

0xb3f7,	// (0x00067964) navi_slider_pane_g6

0x355d,	// (0x0005faca) navi_slider_pane_g7

0xb53d,	// (0x00067aaa) mup_scale_pane_g3

0xb546,	// (0x00067ab3) mup_scale_pane_g4

0xb54f,	// (0x00067abc) mup_scale_pane_g5

0x399c,	// (0x0005ff09) mup_scale_pane_g6

0x39a5,	// (0x0005ff12) mup_scale_pane_g7

0xb3f7,	// (0x00067964) cams2_slider_pane_g3

0xc9e6,	// (0x00068f53) cams2_slider_pane_g4

0x4b50,	// (0x000610bd) cams2_slider_pane_g5

0xb3f7,	// (0x00067964) cams2_slider_pane_g6

0x4b58,	// (0x000610c5) cams2_slider_pane_g7

0xcc13,	// (0x00069180) camera2_autofocus_pane_cp_g1

0xc7fd,	// (0x00068d6a) bg_popup_preview_window_pane_cp02_ParamLimits

0xc7fd,	// (0x00068d6a) bg_popup_preview_window_pane_cp02

0xcf31,	// (0x0006949e) list_fp_cale_pane_ParamLimits

0xcf31,	// (0x0006949e) list_fp_cale_pane

0xcf3d,	// (0x000694aa) popup_fixed_preview_cale_window_t1_ParamLimits

0xcf3d,	// (0x000694aa) popup_fixed_preview_cale_window_t1

0x53b0,	// (0x0006191d) popup_fixed_preview_cale_window_t2_ParamLimits

0x53b0,	// (0x0006191d) popup_fixed_preview_cale_window_t2

0x53c5,	// (0x00061932) popup_fixed_preview_cale_window_t3_ParamLimits

0x53c5,	// (0x00061932) popup_fixed_preview_cale_window_t3

0x0002,

0xf685,	// (0x0006bbf2) popup_fixed_preview_cale_window_t_ParamLimits

0xf685,	// (0x0006bbf2) popup_fixed_preview_cale_window_t

0x53da,	// (0x00061947) list_single_fp_cale_pane_ParamLimits

0x53da,	// (0x00061947) list_single_fp_cale_pane

0xcf5b,	// (0x000694c8) list_single_fp_cale_pane_g1_ParamLimits

0xcf5b,	// (0x000694c8) list_single_fp_cale_pane_g1

0xcf67,	// (0x000694d4) list_single_fp_cale_pane_g2_ParamLimits

0xcf67,	// (0x000694d4) list_single_fp_cale_pane_g2

0x0002,

0x04e7,	// (0x0005ca54) list_single_fp_cale_pane_g_ParamLimits

0x04e7,	// (0x0005ca54) list_single_fp_cale_pane_g

0xcf80,	// (0x000694ed) list_single_fp_cale_pane_t1_ParamLimits

0xcf80,	// (0x000694ed) list_single_fp_cale_pane_t1

0xcf92,	// (0x000694ff) list_single_fp_cale_pane_t2_ParamLimits

0xcf92,	// (0x000694ff) list_single_fp_cale_pane_t2

0x0001,

0xf68c,	// (0x0006bbf9) list_single_fp_cale_pane_t_ParamLimits

0xf68c,	// (0x0006bbf9) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x102d,	// (0x0005d59a) main_dialer_pane

0x53ee,	// (0x0006195b) aid_cell_size_keypad

0x53f8,	// (0x00061965) dialer_ne_pane

0x5402,	// (0x0006196f) grid_dialer_command_1_pane

0x540a,	// (0x00061977) grid_dialer_command_2_pane

0x5412,	// (0x0006197f) grid_dialer_keypad_pane

0x5426,	// (0x00061993) bg_popup_call_pane_cp06_ParamLimits

0x5426,	// (0x00061993) bg_popup_call_pane_cp06

0x5432,	// (0x0006199f) dialer_ne_clear_pane_ParamLimits

0x5432,	// (0x0006199f) dialer_ne_clear_pane

0xcfc5,	// (0x00069532) dialer_ne_pane_g1

0xcfcd,	// (0x0006953a) dialer_ne_pane_t1_ParamLimits

0xcfcd,	// (0x0006953a) dialer_ne_pane_t1

0x543e,	// (0x000619ab) dialer_ne_pane_t2_ParamLimits

0x543e,	// (0x000619ab) dialer_ne_pane_t2

0x545b,	// (0x000619c8) dialer_ne_pane_t3_ParamLimits

0x545b,	// (0x000619c8) dialer_ne_pane_t3

0x0002,

0xf691,	// (0x0006bbfe) dialer_ne_pane_t_ParamLimits

0xf691,	// (0x0006bbfe) dialer_ne_pane_t

0x547f,	// (0x000619ec) dialer_ne_pane_t3_copy1_ParamLimits

0x547f,	// (0x000619ec) dialer_ne_pane_t3_copy1

0x54a3,	// (0x00061a10) cell_dialer_keypad_pane_ParamLimits

0x54a3,	// (0x00061a10) cell_dialer_keypad_pane

0x54ba,	// (0x00061a27) cell_dialer_command_1_pane_ParamLimits

0x54ba,	// (0x00061a27) cell_dialer_command_1_pane

0x54d0,	// (0x00061a3d) cell_dialer_command_2_pane_ParamLimits

0x54d0,	// (0x00061a3d) cell_dialer_command_2_pane

0xcfdf,	// (0x0006954c) bg_button_pane_cp02_ParamLimits

0xcfdf,	// (0x0006954c) bg_button_pane_cp02

0x54df,	// (0x00061a4c) cell_dialer_keypad_pane_g1_ParamLimits

0x54df,	// (0x00061a4c) cell_dialer_keypad_pane_g1

0xcfdf,	// (0x0006954c) bg_button_pane_cp03_ParamLimits

0xcfdf,	// (0x0006954c) bg_button_pane_cp03

0x54f4,	// (0x00061a61) cell_dialer_command_1_pane_g1_ParamLimits

0x54f4,	// (0x00061a61) cell_dialer_command_1_pane_g1

0xcfeb,	// (0x00069558) bg_button_pane_cp04

0x5508,	// (0x00061a75) cell_dialer_command_2_pane_g1

0xb3e6,	// (0x00067953) bg_button_pane_cp06

0xcff3,	// (0x00069560) dialer_ne_clear_pane_g1

0xb2b4,	// (0x00067821) navi_pane_g2

0xb2f0,	// (0x0006785d) navi_pane_g3

0x0002,

0xf3ea,	// (0x0006b957) navi_pane_g

0xb37f,	// (0x000678ec) navi_pane_mv_g2

0xb3a6,	// (0x00067913) navi_pane_mv_g5

0x3528,	// (0x0005fa95) navi_pane_mv_t1

0xa7a1,	// (0x00066d0e) main_clock2_pane

0x5548,	// (0x00061ab5) main_clock2_list_pane_ParamLimits

0x5548,	// (0x00061ab5) main_clock2_list_pane

0x5572,	// (0x00061adf) main_clock2_pane_t1_ParamLimits

0x5572,	// (0x00061adf) main_clock2_pane_t1

0x5596,	// (0x00061b03) main_clock2_pane_t2_ParamLimits

0x5596,	// (0x00061b03) main_clock2_pane_t2

0x0004,

0xf698,	// (0x0006bc05) main_clock2_pane_t_ParamLimits

0xf698,	// (0x0006bc05) main_clock2_pane_t

0x55f1,	// (0x00061b5e) popup_clock_analogue_window_cp03_ParamLimits

0x55f1,	// (0x00061b5e) popup_clock_analogue_window_cp03

0x560f,	// (0x00061b7c) popup_clock_digital_window_cp02_ParamLimits

0x560f,	// (0x00061b7c) popup_clock_digital_window_cp02

0x567e,	// (0x00061beb) main_clock2_list_single_pane_ParamLimits

0x567e,	// (0x00061beb) main_clock2_list_single_pane

0xb3e6,	// (0x00067953) list_highlight_pane_cp05

0xd011,	// (0x0006957e) main_clock2_list_single_pane_t1

0x1fd8,	// (0x0005e545) popup_toolbar_window_cp04_ParamLimits

0x4c22,	// (0x0006118f) camera2_autofocus_pane_g2_ParamLimits

0x4c22,	// (0x0006118f) camera2_autofocus_pane_g2

0x4c2e,	// (0x0006119b) camera2_autofocus_pane_g3_ParamLimits

0x4c2e,	// (0x0006119b) camera2_autofocus_pane_g3

0x4c3a,	// (0x000611a7) camera2_autofocus_pane_g4_ParamLimits

0x4c3a,	// (0x000611a7) camera2_autofocus_pane_g4

0x4c46,	// (0x000611b3) camera2_autofocus_pane_g5_ParamLimits

0x4c46,	// (0x000611b3) camera2_autofocus_pane_g5

0x0004,

0xf5fa,	// (0x0006bb67) camera2_autofocus_pane_g_ParamLimits

0xf5fa,	// (0x0006bb67) camera2_autofocus_pane_g

0x4dd9,	// (0x00061346) camera2_autofocus_pane_cp_g2

0x4de1,	// (0x0006134e) camera2_autofocus_pane_cp_g3

0x4de9,	// (0x00061356) camera2_autofocus_pane_cp_g4

0x4df1,	// (0x0006135e) camera2_autofocus_pane_cp_g5

0x0004,

0xf64e,	// (0x0006bbbb) camera2_autofocus_pane_cp_g

0x541e,	// (0x0006198b) popup_dialer_spcha_window

0x9880,	// (0x00065ded) bg_popup_sub_pane_cp07

0xd02b,	// (0x00069598) list_spcha_pane

0xd033,	// (0x000695a0) list_single_spcha_pane_ParamLimits

0xd033,	// (0x000695a0) list_single_spcha_pane

0x9880,	// (0x00065ded) list_highlight_pane_cp06

0xd044,	// (0x000695b1) list_single_spcha_pane_t1

0xc246,	// (0x000687b3) popup_call2_audio_out_window_g4_ParamLimits

0xc246,	// (0x000687b3) popup_call2_audio_out_window_g4

0x102d,	// (0x0005d59a) main_imed2_pane

0x42bf,	// (0x0006082c) popup_imed_adjust2_window

0x42d2,	// (0x0006083f) popup_imed_trans_window_ParamLimits

0x42d2,	// (0x0006083f) popup_imed_trans_window

0xca4f,	// (0x00068fbc) popup_blid_sat_info2_window_t1

0xca5d,	// (0x00068fca) popup_blid_sat_info2_window_t2

0x000a,

0x03d8,	// (0x0005c945) popup_blid_sat_info2_window_t

0x5728,	// (0x00061c95) aid_size_cell_colour_35

0x5742,	// (0x00061caf) aid_size_cell_colour_112

0x5759,	// (0x00061cc6) aid_size_cell_effect

0xa54e,	// (0x00066abb) bg_tb_trans_pane_cp02

0xb4c8,	// (0x00067a35) heading_imed_pane

0x5773,	// (0x00061ce0) listscroll_imed_pane

0xd052,	// (0x000695bf) heading_imed_pane_g1

0xd05a,	// (0x000695c7) heading_imed_pane_t1

0xd068,	// (0x000695d5) grid_imed_colour_35_pane_ParamLimits

0xd068,	// (0x000695d5) grid_imed_colour_35_pane

0x577f,	// (0x00061cec) grid_imed_effect_pane

0xd080,	// (0x000695ed) list_imed_aspect_pane

0x578f,	// (0x00061cfc) scroll_pane_cp027_ParamLimits

0x578f,	// (0x00061cfc) scroll_pane_cp027

0x579b,	// (0x00061d08) cell_imed_effect_pane_ParamLimits

0x579b,	// (0x00061d08) cell_imed_effect_pane

0xd088,	// (0x000695f5) cell_imed_colour_pane_ParamLimits

0xd088,	// (0x000695f5) cell_imed_colour_pane

0xd0ca,	// (0x00069637) cell_imed_colour_pane_g1_ParamLimits

0xd0ca,	// (0x00069637) cell_imed_colour_pane_g1

0xd0db,	// (0x00069648) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0db,	// (0x00069648) hgihlgiht_grid_pane_cp016

0x57b3,	// (0x00061d20) cell_imed_effect_pane_g1

0x57bb,	// (0x00061d28) grid_highlight_pane_cp017

0xd0ec,	// (0x00069659) list_imed_single_pane_ParamLimits

0xd0ec,	// (0x00069659) list_imed_single_pane

0x9880,	// (0x00065ded) list_highlight_pane_cp07

0xd102,	// (0x0006966f) list_imed_aspect_pane_comp1_t1

0xc809,	// (0x00068d76) bg_tb_trans_pane_cp05

0xd124,	// (0x00069691) popup_imed_adjust2_window_g1

0xd14b,	// (0x000696b8) popup_imed_adjust2_window_t1

0xd163,	// (0x000696d0) slider_imed_adjust_pane

0xd177,	// (0x000696e4) slider_imed_adjust_pane_g1

0xd187,	// (0x000696f4) slider_imed_adjust_pane_g2

0xd197,	// (0x00069704) slider_imed_adjust_pane_g3

0xd1a8,	// (0x00069715) slider_imed_adjust_pane_g4

0x0003,

0x0517,	// (0x0005ca84) slider_imed_adjust_pane_g

0x57c4,	// (0x00061d31) aid_size_cell_clipart2

0x57d0,	// (0x00061d3d) grid_imed_clipart_pane

0xd1b9,	// (0x00069726) scroll_pane_cp031

0x57da,	// (0x00061d47) cell_imed_clipart_pane_ParamLimits

0x57da,	// (0x00061d47) cell_imed_clipart_pane

0x5801,	// (0x00061d6e) cell_imed_clipart_pane_g1

0x9880,	// (0x00065ded) grid_highlight_pane_cp014

0x5554,	// (0x00061ac1) main_clock2_pane_g1_ParamLimits

0x5554,	// (0x00061ac1) main_clock2_pane_g1

0x5629,	// (0x00061b96) aid_call2_pane_cp10

0x563b,	// (0x00061ba8) aid_call_pane_cp10

0xb213,	// (0x00067780) popup_clock_analogue_window_cp10_g1

0xb213,	// (0x00067780) popup_clock_analogue_window_cp10_g2

0x564d,	// (0x00061bba) popup_clock_analogue_window_cp10_g3

0x564d,	// (0x00061bba) popup_clock_analogue_window_cp10_g4

0xb213,	// (0x00067780) popup_clock_analogue_window_cp10_g5

0x0004,

0xf6a3,	// (0x0006bc10) popup_clock_analogue_window_cp10_g

0x565f,	// (0x00061bcc) popup_clock_analogue_window_cp10_t1

0x5690,	// (0x00061bfd) clock_digital_number_pane_cp10_ParamLimits

0x5690,	// (0x00061bfd) clock_digital_number_pane_cp10

0x56a8,	// (0x00061c15) clock_digital_number_pane_cp11_ParamLimits

0x56a8,	// (0x00061c15) clock_digital_number_pane_cp11

0x56c0,	// (0x00061c2d) clock_digital_number_pane_cp12_ParamLimits

0x56c0,	// (0x00061c2d) clock_digital_number_pane_cp12

0x56d8,	// (0x00061c45) clock_digital_number_pane_cp13_ParamLimits

0x56d8,	// (0x00061c45) clock_digital_number_pane_cp13

0x56f0,	// (0x00061c5d) clock_digital_separator_pane_cp10_ParamLimits

0x56f0,	// (0x00061c5d) clock_digital_separator_pane_cp10

0x5708,	// (0x00061c75) popup_clock_digital_window_cp02_t1_ParamLimits

0x5708,	// (0x00061c75) popup_clock_digital_window_cp02_t1

0xa6b5,	// (0x00066c22) clock_digital_number_pane_cp10_g1

0xa6b5,	// (0x00066c22) clock_digital_number_pane_cp10_g2

0x0001,

0xf6ae,	// (0x0006bc1b) clock_digital_number_pane_cp10_g

0xa6b5,	// (0x00066c22) clock_digital_separator_pane_cp10_g1

0xa6b5,	// (0x00066c22) clock_digital_separator_pane_g2_cp10

0xb3ae,	// (0x0006791b) navi_pane_vded_g4

0xb3b7,	// (0x00067924) navi_pane_vded_g5

0xb3c0,	// (0x0006792d) navi_pane_vded_t1

0x102d,	// (0x0005d59a) main_vded_pane

0x580a,	// (0x00061d77) main_vded_pane_g1

0x5816,	// (0x00061d83) main_vded_pane_g2

0x5820,	// (0x00061d8d) main_vded_pane_g3

0x0002,

0xf6b3,	// (0x0006bc20) main_vded_pane_g

0x582a,	// (0x00061d97) main_vded_pane_t1

0x5838,	// (0x00061da5) main_vded_pane_t2

0x0001,

0xf6ba,	// (0x0006bc27) main_vded_pane_t

0x5846,	// (0x00061db3) vded_slider_pane

0x5850,	// (0x00061dbd) vded_video_pane

0xd1c1,	// (0x0006972e) vded_video_pane_g1

0x585a,	// (0x00061dc7) vded_video_pane_g2

0xcc13,	// (0x00069180) vded_video_pane_g3

0x0002,

0xf6bf,	// (0x0006bc2c) vded_video_pane_g

0xd1cb,	// (0x00069738) vded_slider_pane_g1

0xd1d4,	// (0x00069741) vded_slider_pane_g2

0xd1dd,	// (0x0006974a) vded_slider_pane_g3

0xd1e6,	// (0x00069753) vded_slider_pane_g4

0xd1ef,	// (0x0006975c) vded_slider_pane_g5

0x0004,

0x0538,	// (0x0005caa5) vded_slider_pane_g

0x531f,	// (0x0006188c) mup3_rocker_pane_ParamLimits

0x531f,	// (0x0006188c) mup3_rocker_pane

0x5863,	// (0x00061dd0) mup3_control_keys_pane_g1

0x586b,	// (0x00061dd8) mup3_control_keys_pane_g2

0x5873,	// (0x00061de0) mup3_control_keys_pane_g3

0x587b,	// (0x00061de8) mup3_control_keys_pane_g4

0x0003,

0xf6c6,	// (0x0006bc33) mup3_control_keys_pane_g

0x0fe1,	// (0x0005d54e) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0fe1,	// (0x0005d54e) popup_toolbar2_fixed_window_cp01

0x5339,	// (0x000618a6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5339,	// (0x000618a6) popup_toolbar2_fixed_window_cp02

0xbb85,	// (0x000680f2) popup_call2_audio_second_window_t4_ParamLimits

0xbb85,	// (0x000680f2) popup_call2_audio_second_window_t4

0xc0b3,	// (0x00068620) popup_call2_audio_first_window_t6_ParamLimits

0xc0b3,	// (0x00068620) popup_call2_audio_first_window_t6

0xc349,	// (0x000688b6) popup_call2_audio_out_window_t6_ParamLimits

0xc349,	// (0x000688b6) popup_call2_audio_out_window_t6

0x102d,	// (0x0005d59a) main_vitu_pane

0x588b,	// (0x00061df8) aid_size_cell_itu_ParamLimits

0x588b,	// (0x00061df8) aid_size_cell_itu

0xeab3,	// (0x0006b020) bg_popup_window_pane_cp08_ParamLimits

0xeab3,	// (0x0006b020) bg_popup_window_pane_cp08

0x5899,	// (0x00061e06) field_vitu_entry_pane_ParamLimits

0x5899,	// (0x00061e06) field_vitu_entry_pane

0x58a8,	// (0x00061e15) grid_vitu_function_pane_ParamLimits

0x58a8,	// (0x00061e15) grid_vitu_function_pane

0x58b8,	// (0x00061e25) grid_vitu_itu_pane_ParamLimits

0x58b8,	// (0x00061e25) grid_vitu_itu_pane

0x58c8,	// (0x00061e35) cell_vitu_itu_pane_ParamLimits

0x58c8,	// (0x00061e35) cell_vitu_itu_pane

0x58dd,	// (0x00061e4a) cell_vitu_function_pane_ParamLimits

0x58dd,	// (0x00061e4a) cell_vitu_function_pane

0xa54e,	// (0x00066abb) bg_popup_sub_pane_cp08_ParamLimits

0xa54e,	// (0x00066abb) bg_popup_sub_pane_cp08

0x58f1,	// (0x00061e5e) field_vitu_entry_pane_t1_ParamLimits

0x58f1,	// (0x00061e5e) field_vitu_entry_pane_t1

0xd210,	// (0x0006977d) field_vitu_entry_pane_t2_ParamLimits

0xd210,	// (0x0006977d) field_vitu_entry_pane_t2

0x0001,

0xf6cf,	// (0x0006bc3c) field_vitu_entry_pane_t_ParamLimits

0xf6cf,	// (0x0006bc3c) field_vitu_entry_pane_t

0xd22d,	// (0x0006979a) bg_button_pane_cp05_ParamLimits

0xd22d,	// (0x0006979a) bg_button_pane_cp05

0x590e,	// (0x00061e7b) cell_vitu_itu_pane_g1

0x5926,	// (0x00061e93) cell_vitu_itu_pane_t1_ParamLimits

0x5926,	// (0x00061e93) cell_vitu_itu_pane_t1

0x5938,	// (0x00061ea5) cell_vitu_itu_pane_t2_ParamLimits

0x5938,	// (0x00061ea5) cell_vitu_itu_pane_t2

0x0002,

0xf6d4,	// (0x0006bc41) cell_vitu_itu_pane_t_ParamLimits

0xf6d4,	// (0x0006bc41) cell_vitu_itu_pane_t

0xd23b,	// (0x000697a8) bg_button_pane_cp07

0x597b,	// (0x00061ee8) cell_vitu_function_pane_g1

0x12ac,	// (0x0005d819) main_calc_pane_g1

0x0d9e,	// (0x0005d30b) aid_visual_content_pane

0x102d,	// (0x0005d59a) main_vradio_pane

0x5984,	// (0x00061ef1) main_vradio_pane_g1_ParamLimits

0x5984,	// (0x00061ef1) main_vradio_pane_g1

0xd245,	// (0x000697b2) main_vradio_pane_g2_ParamLimits

0xd245,	// (0x000697b2) main_vradio_pane_g2

0x0001,

0xf6db,	// (0x0006bc48) main_vradio_pane_g_ParamLimits

0xf6db,	// (0x0006bc48) main_vradio_pane_g

0x5994,	// (0x00061f01) main_vradio_pane_t1_ParamLimits

0x5994,	// (0x00061f01) main_vradio_pane_t1

0x59a6,	// (0x00061f13) main_vradio_pane_t2_ParamLimits

0x59a6,	// (0x00061f13) main_vradio_pane_t2

0xd252,	// (0x000697bf) main_vradio_pane_t3_ParamLimits

0xd252,	// (0x000697bf) main_vradio_pane_t3

0x0002,

0xf6e0,	// (0x0006bc4d) main_vradio_pane_t_ParamLimits

0xf6e0,	// (0x0006bc4d) main_vradio_pane_t

0x59b8,	// (0x00061f25) vradio_rocker_control_pane_ParamLimits

0x59b8,	// (0x00061f25) vradio_rocker_control_pane

0x59c4,	// (0x00061f31) vradio_station_info_pane_ParamLimits

0x59c4,	// (0x00061f31) vradio_station_info_pane

0xd266,	// (0x000697d3) vradio_frequency_info_pane_ParamLimits

0xd266,	// (0x000697d3) vradio_frequency_info_pane

0xcc13,	// (0x00069180) vradio_station_info_pane_g1

0xd275,	// (0x000697e2) vradio_station_info_pane_t1_ParamLimits

0xd275,	// (0x000697e2) vradio_station_info_pane_t1

0xd297,	// (0x00069804) vradio_station_info_pane_t2_ParamLimits

0xd297,	// (0x00069804) vradio_station_info_pane_t2

0x0001,

0x0569,	// (0x0005cad6) vradio_station_info_pane_t_ParamLimits

0x0569,	// (0x0005cad6) vradio_station_info_pane_t

0xd2a9,	// (0x00069816) vradio_tuning_pane

0xd2b1,	// (0x0006981e) vradio_rocker_control_pane_g1

0xd2b9,	// (0x00069826) vradio_rocker_control_pane_g2

0xd2c1,	// (0x0006982e) vradio_rocker_control_pane_g3

0xd2c9,	// (0x00069836) vradio_rocker_control_pane_g4

0xd2d1,	// (0x0006983e) vradio_rocker_control_pane_g5

0x0004,

0x056e,	// (0x0005cadb) vradio_rocker_control_pane_g

0x59d3,	// (0x00061f40) vradio_frequency_info_pane_g1

0xd2d9,	// (0x00069846) vradio_frequency_info_pane_t1_ParamLimits

0xd2d9,	// (0x00069846) vradio_frequency_info_pane_t1

0x59dd,	// (0x00061f4a) vradio_tuning_pane_g1

0x59e6,	// (0x00061f53) vradio_tuning_pane_t1

0x0de7,	// (0x0005d354) area_side_right_pane_ParamLimits

0x0de7,	// (0x0005d354) area_side_right_pane

0xc7c4,	// (0x00068d31) status_small_pane_g1

0xc7cc,	// (0x00068d39) status_small_pane_g2

0xc7d5,	// (0x00068d42) status_small_pane_g3

0xc7de,	// (0x00068d4b) status_small_pane_g4

0x0003,

0x032e,	// (0x0005c89b) status_small_pane_g

0xc7e7,	// (0x00068d54) status_small_pane_t1

0x102d,	// (0x0005d59a) main_video3_pane

0xd2ed,	// (0x0006985a) cams_zoom_vslider_pane

0xd2f5,	// (0x00069862) image3_wide_pane_ParamLimits

0xd2f5,	// (0x00069862) image3_wide_pane

0xd30f,	// (0x0006987c) image3_wide_small_pane

0xd31b,	// (0x00069888) main_video3_pane_g1_ParamLimits

0xd31b,	// (0x00069888) main_video3_pane_g1

0xd337,	// (0x000698a4) main_video3_pane_g2_ParamLimits

0xd337,	// (0x000698a4) main_video3_pane_g2

0x0001,

0x0579,	// (0x0005cae6) main_video3_pane_g_ParamLimits

0x0579,	// (0x0005cae6) main_video3_pane_g

0xd353,	// (0x000698c0) main_video3_pane_t1_ParamLimits

0xd353,	// (0x000698c0) main_video3_pane_t1

0xd37e,	// (0x000698eb) main_video3_pane_t2_ParamLimits

0xd37e,	// (0x000698eb) main_video3_pane_t2

0xd3a9,	// (0x00069916) main_video3_pane_t3_ParamLimits

0xd3a9,	// (0x00069916) main_video3_pane_t3

0x0002,

0x057e,	// (0x0005caeb) main_video3_pane_t_ParamLimits

0x057e,	// (0x0005caeb) main_video3_pane_t

0xd3d6,	// (0x00069943) cams_zoom_vslider_pane_g1

0xd3df,	// (0x0006994c) cams_zoom_vslider_pane_g2

0x0001,

0x0585,	// (0x0005caf2) cams_zoom_vslider_pane_g

0xd3e7,	// (0x00069954) small_slider_vertical_pane

0xcc13,	// (0x00069180) small_slider_vertical_pane_g1

0xcc13,	// (0x00069180) small_slider_vertical_pane_g2

0xd3ef,	// (0x0006995c) small_slider_vertical_pane_g3

0x0002,

0x058a,	// (0x0005caf7) small_slider_vertical_pane_g

0x102d,	// (0x0005d59a) main_hwr_training_pane

0xd3f8,	// (0x00069965) hwr_training_instruct_pane_ParamLimits

0xd3f8,	// (0x00069965) hwr_training_instruct_pane

0x59f5,	// (0x00061f62) hwr_training_navi_pane_ParamLimits

0x59f5,	// (0x00061f62) hwr_training_navi_pane

0x5a0f,	// (0x00061f7c) hwr_training_write_pane_ParamLimits

0x5a0f,	// (0x00061f7c) hwr_training_write_pane

0x9880,	// (0x00065ded) bg_frame_shadow_pane

0xd42f,	// (0x0006999c) hwr_training_write_pane_g1

0xd437,	// (0x000699a4) hwr_training_write_pane_g2

0xd43f,	// (0x000699ac) hwr_training_write_pane_g3

0xd447,	// (0x000699b4) hwr_training_write_pane_g4

0xd44f,	// (0x000699bc) hwr_training_write_pane_g5

0xd457,	// (0x000699c4) hwr_training_write_pane_g6

0xd45f,	// (0x000699cc) hwr_training_write_pane_g7

0x0006,

0x0591,	// (0x0005cafe) hwr_training_write_pane_g

0x5a47,	// (0x00061fb4) hwr_training_navi_pane_g1_ParamLimits

0x5a47,	// (0x00061fb4) hwr_training_navi_pane_g1

0x5a59,	// (0x00061fc6) hwr_training_navi_pane_g2_ParamLimits

0x5a59,	// (0x00061fc6) hwr_training_navi_pane_g2

0x5a6b,	// (0x00061fd8) hwr_training_navi_pane_g3_ParamLimits

0x5a6b,	// (0x00061fd8) hwr_training_navi_pane_g3

0x5a7b,	// (0x00061fe8) hwr_training_navi_pane_g4_ParamLimits

0x5a7b,	// (0x00061fe8) hwr_training_navi_pane_g4

0x0004,

0xf6e7,	// (0x0006bc54) hwr_training_navi_pane_g_ParamLimits

0xf6e7,	// (0x0006bc54) hwr_training_navi_pane_g

0x5a95,	// (0x00062002) hwr_training_navi_pane_t1

0x5aa3,	// (0x00062010) list_single_hwr_training_instruct_pane_ParamLimits

0x5aa3,	// (0x00062010) list_single_hwr_training_instruct_pane

0xd467,	// (0x000699d4) list_single_hwr_training_instruct_pane_t1

0xcb53,	// (0x000690c0) bg_frame_shadow_pane_g1

0xd476,	// (0x000699e3) bg_frame_shadow_pane_g2

0xd47e,	// (0x000699eb) bg_frame_shadow_pane_g3

0xd486,	// (0x000699f3) bg_frame_shadow_pane_g4

0xd48e,	// (0x000699fb) bg_frame_shadow_pane_g5

0xd496,	// (0x00069a03) bg_frame_shadow_pane_g6

0xd49e,	// (0x00069a0b) bg_frame_shadow_pane_g7

0xa86c,	// (0x00066dd9) bg_frame_shadow_pane_g8

0x0007,

0xf6f2,	// (0x0006bc5f) bg_frame_shadow_pane_g

0x102d,	// (0x0005d59a) main_video_tele_dialer_pane

0x5ad2,	// (0x0006203f) aid_size_cell_video_keypad_ParamLimits

0x5ad2,	// (0x0006203f) aid_size_cell_video_keypad

0x5ae2,	// (0x0006204f) grid_video_dialer_keypad_pane_ParamLimits

0x5ae2,	// (0x0006204f) grid_video_dialer_keypad_pane

0x5b16,	// (0x00062083) video_down_pane_cp_ParamLimits

0x5b16,	// (0x00062083) video_down_pane_cp

0x5b40,	// (0x000620ad) cell_video_dialer_keypad_pane_ParamLimits

0x5b40,	// (0x000620ad) cell_video_dialer_keypad_pane

0xd4a6,	// (0x00069a13) bg_button_pane_cp08_ParamLimits

0xd4a6,	// (0x00069a13) bg_button_pane_cp08

0x5b55,	// (0x000620c2) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5b55,	// (0x000620c2) cell_video_dialer_keypad_pane_g1

0x5313,	// (0x00061880) mup3_rocker2_pane_ParamLimits

0x5313,	// (0x00061880) mup3_rocker2_pane

0xcc13,	// (0x00069180) mup3_rocker2_pane_g1

0x4233,	// (0x000607a0) main_dialer2_pane

0x102d,	// (0x0005d59a) main_mp4_pane

0x5b98,	// (0x00062105) main_mp4_pane_g1_ParamLimits

0x5b98,	// (0x00062105) main_mp4_pane_g1

0x5ba6,	// (0x00062113) main_mp4_pane_g2_ParamLimits

0x5ba6,	// (0x00062113) main_mp4_pane_g2

0x5bb4,	// (0x00062121) main_mp4_pane_g3_ParamLimits

0x5bb4,	// (0x00062121) main_mp4_pane_g3

0x5bf9,	// (0x00062166) main_mp4_pane_g4_ParamLimits

0x5bf9,	// (0x00062166) main_mp4_pane_g4

0x5c21,	// (0x0006218e) main_mp4_pane_g5_ParamLimits

0x5c21,	// (0x0006218e) main_mp4_pane_g5

0x0005,

0xf712,	// (0x0006bc7f) main_mp4_pane_g_ParamLimits

0xf712,	// (0x0006bc7f) main_mp4_pane_g

0x5c71,	// (0x000621de) main_mp4_pane_t1_ParamLimits

0x5c71,	// (0x000621de) main_mp4_pane_t1

0x5ccd,	// (0x0006223a) main_mp4_pane_t2_ParamLimits

0x5ccd,	// (0x0006223a) main_mp4_pane_t2

0xd4b2,	// (0x00069a1f) main_mp4_pane_t3_ParamLimits

0xd4b2,	// (0x00069a1f) main_mp4_pane_t3

0x5d1f,	// (0x0006228c) main_mp4_pane_t4_ParamLimits

0x5d1f,	// (0x0006228c) main_mp4_pane_t4

0x0003,

0xf71f,	// (0x0006bc8c) main_mp4_pane_t_ParamLimits

0xf71f,	// (0x0006bc8c) main_mp4_pane_t

0x5d63,	// (0x000622d0) mp4_progress_pane_ParamLimits

0x5d63,	// (0x000622d0) mp4_progress_pane

0x5dad,	// (0x0006231a) mp4_rocker_pane_ParamLimits

0x5dad,	// (0x0006231a) mp4_rocker_pane

0xd4da,	// (0x00069a47) mp4_progress_pane_t1

0xd4f3,	// (0x00069a60) mp4_progress_pane_t2

0x0001,

0x05e1,	// (0x0005cb4e) mp4_progress_pane_t

0xd50c,	// (0x00069a79) mup_progress_pane_cp04

0xda6b,	// (0x00069fd8) mp4_rocker_pane_g1

0x5dcd,	// (0x0006233a) aid_cell_size_keypad2_ParamLimits

0x5dcd,	// (0x0006233a) aid_cell_size_keypad2

0x5ddd,	// (0x0006234a) dialer2_ne_pane_ParamLimits

0x5ddd,	// (0x0006234a) dialer2_ne_pane

0x5deb,	// (0x00062358) grid_dialer2_keypad_pane_ParamLimits

0x5deb,	// (0x00062358) grid_dialer2_keypad_pane

0xdc65,	// (0x0006a1d2) bg_popup_call_pane_cp07_ParamLimits

0xdc65,	// (0x0006a1d2) bg_popup_call_pane_cp07

0x5dfb,	// (0x00062368) dialer2_ne_pane_t1_ParamLimits

0x5dfb,	// (0x00062368) dialer2_ne_pane_t1

0x5e20,	// (0x0006238d) cell_dialer2_keypad_pane_ParamLimits

0x5e20,	// (0x0006238d) cell_dialer2_keypad_pane

0xd52a,	// (0x00069a97) bg_button_pane_pane_cp04_ParamLimits

0xd52a,	// (0x00069a97) bg_button_pane_pane_cp04

0x5e35,	// (0x000623a2) cell_dialer2_keypad_pane_g1_ParamLimits

0x5e35,	// (0x000623a2) cell_dialer2_keypad_pane_g1

0x1e9a,	// (0x0005e407) aid_placing_vt_set_content_ParamLimits

0x1e9a,	// (0x0005e407) aid_placing_vt_set_content

0x1ec6,	// (0x0005e433) aid_placing_vt_set_title_ParamLimits

0x1ec6,	// (0x0005e433) aid_placing_vt_set_title

0x102d,	// (0x0005d59a) main_image3_pane

0x5ecf,	// (0x0006243c) area_side_right_pane_cp01_ParamLimits

0x5ecf,	// (0x0006243c) area_side_right_pane_cp01

0x5efc,	// (0x00062469) main_image3_pane_g1_ParamLimits

0x5efc,	// (0x00062469) main_image3_pane_g1

0x5f0a,	// (0x00062477) main_image3_pane_g2_ParamLimits

0x5f0a,	// (0x00062477) main_image3_pane_g2

0x5f23,	// (0x00062490) main_image3_pane_g3_ParamLimits

0x5f23,	// (0x00062490) main_image3_pane_g3

0x5f3c,	// (0x000624a9) main_image3_pane_g4_ParamLimits

0x5f3c,	// (0x000624a9) main_image3_pane_g4

0x0003,

0xf732,	// (0x0006bc9f) main_image3_pane_g_ParamLimits

0xf732,	// (0x0006bc9f) main_image3_pane_g

0x5f55,	// (0x000624c2) main_image3_pane_t1_ParamLimits

0x5f55,	// (0x000624c2) main_image3_pane_t1

0x5f7a,	// (0x000624e7) main_image3_pane_t2_ParamLimits

0x5f7a,	// (0x000624e7) main_image3_pane_t2

0x5f99,	// (0x00062506) main_image3_pane_t3_ParamLimits

0x5f99,	// (0x00062506) main_image3_pane_t3

0x0003,

0xf73b,	// (0x0006bca8) main_image3_pane_t_ParamLimits

0xf73b,	// (0x0006bca8) main_image3_pane_t

0xeab3,	// (0x0006b020) grid_sctrl_middle_pane_cp01_ParamLimits

0xeab3,	// (0x0006b020) grid_sctrl_middle_pane_cp01

0x5ffa,	// (0x00062567) cell_sctrl_middle_pane_cp01_ParamLimits

0x5ffa,	// (0x00062567) cell_sctrl_middle_pane_cp01

0x600b,	// (0x00062578) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x600b,	// (0x00062578) cell_sctrl_middle_pane_cp01_g1

0x102d,	// (0x0005d59a) main_call4_pane

0x6018,	// (0x00062585) aid_size_button_call4_ParamLimits

0x6018,	// (0x00062585) aid_size_button_call4

0x6048,	// (0x000625b5) call4_windows_pane_ParamLimits

0x6048,	// (0x000625b5) call4_windows_pane

0x6062,	// (0x000625cf) grid_call4_button_pane_ParamLimits

0x6062,	// (0x000625cf) grid_call4_button_pane

0xd536,	// (0x00069aa3) call4_windows_conf_pane

0xd54b,	// (0x00069ab8) popup_call4_audio_first_window_ParamLimits

0xd54b,	// (0x00069ab8) popup_call4_audio_first_window

0xd597,	// (0x00069b04) popup_call4_audio_second_window_ParamLimits

0xd597,	// (0x00069b04) popup_call4_audio_second_window

0xd5ab,	// (0x00069b18) popup_call4_audio_wait_window_ParamLimits

0xd5ab,	// (0x00069b18) popup_call4_audio_wait_window

0x6086,	// (0x000625f3) cell_call4_button_pane_ParamLimits

0x6086,	// (0x000625f3) cell_call4_button_pane

0x60ab,	// (0x00062618) bg_button_pane_cp09_ParamLimits

0x60ab,	// (0x00062618) bg_button_pane_cp09

0x60b7,	// (0x00062624) cell_call4_button_pane_g1_ParamLimits

0x60b7,	// (0x00062624) cell_call4_button_pane_g1

0x60c4,	// (0x00062631) cell_call4_button_pane_t1_ParamLimits

0x60c4,	// (0x00062631) cell_call4_button_pane_t1

0xd5f3,	// (0x00069b60) popup_call4_audio_conf_window_ParamLimits

0xd5f3,	// (0x00069b60) popup_call4_audio_conf_window

0x5346,	// (0x000618b3) mup3_progress_pane_t1_ParamLimits

0x5365,	// (0x000618d2) mup3_progress_pane_t2_ParamLimits

0xceee,	// (0x0006945b) mup3_progress_pane_t3_ParamLimits

0xf677,	// (0x0006bbe4) mup3_progress_pane_t_ParamLimits

0xcf0b,	// (0x00069478) mup_progress_pane_cp03_ParamLimits

0x5883,	// (0x00061df0) mup3_control_keys_pane_g4_copy1

0x5d91,	// (0x000622fe) mp4_rocker2_pane_ParamLimits

0x5d91,	// (0x000622fe) mp4_rocker2_pane

0xd607,	// (0x00069b74) mp4_rocker2_pane_g1

0xd60f,	// (0x00069b7c) mp4_rocker2_pane_g2

0x60d6,	// (0x00062643) mp4_rocker2_pane_g3

0x60de,	// (0x0006264b) mp4_rocker2_pane_g4

0x60e6,	// (0x00062653) mp4_rocker2_pane_g5

0x0004,

0xf744,	// (0x0006bcb1) mp4_rocker2_pane_g

0x102d,	// (0x0005d59a) main_camera4_pane

0x102d,	// (0x0005d59a) main_video4_pane

0x5af2,	// (0x0006205f) main_video_tele_dialer_pane_t1_ParamLimits

0x5af2,	// (0x0006205f) main_video_tele_dialer_pane_t1

0x5b04,	// (0x00062071) main_video_tele_dialer_pane_t2_ParamLimits

0x5b04,	// (0x00062071) main_video_tele_dialer_pane_t2

0x0001,

0xf703,	// (0x0006bc70) main_video_tele_dialer_pane_t_ParamLimits

0xf703,	// (0x0006bc70) main_video_tele_dialer_pane_t

0x6106,	// (0x00062673) cam4_autofocus_pane_ParamLimits

0x6106,	// (0x00062673) cam4_autofocus_pane

0x6120,	// (0x0006268d) cam4_image_uncrop_pane_ParamLimits

0x6120,	// (0x0006268d) cam4_image_uncrop_pane

0x6137,	// (0x000626a4) cam4_indicators_pane_ParamLimits

0x6137,	// (0x000626a4) cam4_indicators_pane

0x6153,	// (0x000626c0) main_camera4_pane_g1_ParamLimits

0x6153,	// (0x000626c0) main_camera4_pane_g1

0x615f,	// (0x000626cc) main_camera4_pane_g2_ParamLimits

0x615f,	// (0x000626cc) main_camera4_pane_g2

0x615f,	// (0x000626cc) main_camera4_pane_g3_ParamLimits

0x615f,	// (0x000626cc) main_camera4_pane_g3

0x616b,	// (0x000626d8) main_camera4_pane_g4_ParamLimits

0x616b,	// (0x000626d8) main_camera4_pane_g4

0x6177,	// (0x000626e4) main_camera4_pane_g5_ParamLimits

0x6177,	// (0x000626e4) main_camera4_pane_g5

0x0005,

0xf74f,	// (0x0006bcbc) main_camera4_pane_g_ParamLimits

0xf74f,	// (0x0006bcbc) main_camera4_pane_g

0x6191,	// (0x000626fe) main_camera4_pane_t1_ParamLimits

0x6191,	// (0x000626fe) main_camera4_pane_t1

0x61d9,	// (0x00062746) bg_tb_trans_pane_cp06

0x61ef,	// (0x0006275c) cam4_indicators_pane_g1

0x6200,	// (0x0006276d) cam4_indicators_pane_g2

0x0002,

0xf76a,	// (0x0006bcd7) cam4_indicators_pane_g

0x621e,	// (0x0006278b) cam4_indicators_pane_t1

0x6248,	// (0x000627b5) main_video4_pane_g1_ParamLimits

0x6248,	// (0x000627b5) main_video4_pane_g1

0x6254,	// (0x000627c1) main_video4_pane_g2_ParamLimits

0x6254,	// (0x000627c1) main_video4_pane_g2

0x6260,	// (0x000627cd) main_video4_pane_g3_ParamLimits

0x6260,	// (0x000627cd) main_video4_pane_g3

0x626c,	// (0x000627d9) main_video4_pane_g4_ParamLimits

0x626c,	// (0x000627d9) main_video4_pane_g4

0x0004,

0xf771,	// (0x0006bcde) main_video4_pane_g_ParamLimits

0xf771,	// (0x0006bcde) main_video4_pane_g

0x628c,	// (0x000627f9) vid4_indicators_pane_ParamLimits

0x628c,	// (0x000627f9) vid4_indicators_pane

0x62ab,	// (0x00062818) video4_image_uncrop_cif_pane_ParamLimits

0x62ab,	// (0x00062818) video4_image_uncrop_cif_pane

0x62ba,	// (0x00062827) video4_image_uncrop_nhd_pane_ParamLimits

0x62ba,	// (0x00062827) video4_image_uncrop_nhd_pane

0x6120,	// (0x0006268d) video4_image_uncrop_vga_pane_ParamLimits

0x6120,	// (0x0006268d) video4_image_uncrop_vga_pane

0x4225,	// (0x00060792) bg_tb_trans_pane_cp07

0x62cf,	// (0x0006283c) vid4_indicators_pane_g1

0x62e3,	// (0x00062850) vid4_indicators_pane_g2

0x62f7,	// (0x00062864) vid4_indicators_pane_g3

0x0004,

0xf77c,	// (0x0006bce9) vid4_indicators_pane_g

0x6324,	// (0x00062891) vid4_indicators_pane_t1

0x633b,	// (0x000628a8) cam4_autofocus_pane_g1

0x6343,	// (0x000628b0) cam4_autofocus_pane_g2

0x634b,	// (0x000628b8) cam4_autofocus_pane_g3

0x0002,

0xf787,	// (0x0006bcf4) cam4_autofocus_pane_g

0x6353,	// (0x000628c0) cam4_autofocus_pane_g3_copy1

0x5b24,	// (0x00062091) video_down_pane_cp_t1

0x5b32,	// (0x0006209f) video_down_pane_cp_t2

0x0001,

0xf708,	// (0x0006bc75) video_down_pane_cp_t

0x1013,	// (0x0005d580) popup_vitu2_window_ParamLimits

0x1013,	// (0x0005d580) popup_vitu2_window

0x635b,	// (0x000628c8) aid_size_cell2_itu2_ParamLimits

0x635b,	// (0x000628c8) aid_size_cell2_itu2

0x637d,	// (0x000628ea) aid_size_cell_itu2_ParamLimits

0x637d,	// (0x000628ea) aid_size_cell_itu2

0x63c1,	// (0x0006292e) bg_popup_window_pane_cp09_ParamLimits

0x63c1,	// (0x0006292e) bg_popup_window_pane_cp09

0x63cf,	// (0x0006293c) field_vitu2_entry_pane_ParamLimits

0x63cf,	// (0x0006293c) field_vitu2_entry_pane

0x63ef,	// (0x0006295c) grid_vitu2_function_pane_ParamLimits

0x63ef,	// (0x0006295c) grid_vitu2_function_pane

0x6433,	// (0x000629a0) grid_vitu2_itu_pane_ParamLimits

0x6433,	// (0x000629a0) grid_vitu2_itu_pane

0x64a9,	// (0x00062a16) cell_vitu2_itu_pane_ParamLimits

0x64a9,	// (0x00062a16) cell_vitu2_itu_pane

0x64be,	// (0x00062a2b) cell_vitu2_function_pane_ParamLimits

0x64be,	// (0x00062a2b) cell_vitu2_function_pane

0xd617,	// (0x00069b84) bg_popup_call_pane_cp08_ParamLimits

0xd617,	// (0x00069b84) bg_popup_call_pane_cp08

0xd630,	// (0x00069b9d) field_vitu2_entry_pane_g1

0xd63c,	// (0x00069ba9) field_vitu2_entry_pane_g2

0x0002,

0x064c,	// (0x0005cbb9) field_vitu2_entry_pane_g

0x64ff,	// (0x00062a6c) field_vitu2_entry_pane_t1_ParamLimits

0x64ff,	// (0x00062a6c) field_vitu2_entry_pane_t1

0x9ea0,	// (0x0006640d) field_vitu2_entry_pane_t2_ParamLimits

0x9ea0,	// (0x0006640d) field_vitu2_entry_pane_t2

0x0001,

0xf78e,	// (0x0006bcfb) field_vitu2_entry_pane_t_ParamLimits

0xf78e,	// (0x0006bcfb) field_vitu2_entry_pane_t

0x6532,	// (0x00062a9f) bg_button_pane_cp010_ParamLimits

0x6532,	// (0x00062a9f) bg_button_pane_cp010

0x6540,	// (0x00062aad) cell_vitu2_itu_pane_g1

0x6569,	// (0x00062ad6) cell_vitu2_itu_pane_t1_ParamLimits

0x6569,	// (0x00062ad6) cell_vitu2_itu_pane_t1

0x0c87,	// (0x0005d1f4) cell_vitu2_itu_pane_t2_ParamLimits

0x0c87,	// (0x0005d1f4) cell_vitu2_itu_pane_t2

0x0002,

0xf798,	// (0x0006bd05) cell_vitu2_itu_pane_t_ParamLimits

0xf798,	// (0x0006bd05) cell_vitu2_itu_pane_t

0x4225,	// (0x00060792) bg_button_pane_cp011

0x65b5,	// (0x00062b22) cell_vitu2_function_pane_g1

0x102d,	// (0x0005d59a) main_myfav_hc_pane

0x5fdb,	// (0x00062548) popup_image3_note_pane_ParamLimits

0x5fdb,	// (0x00062548) popup_image3_note_pane

0x5fe9,	// (0x00062556) popup_image3_tool_bar_pane_ParamLimits

0x5fe9,	// (0x00062556) popup_image3_tool_bar_pane

0x0cfd,	// (0x0005d26a) cell_vitu2_itu_pane_t3_ParamLimits

0x0cfd,	// (0x0005d26a) cell_vitu2_itu_pane_t3

0x9880,	// (0x00065ded) bg_popup_trans_pane

0xd65e,	// (0x00069bcb) grid_image3_tool_bar_pane

0xd668,	// (0x00069bd5) bg_popup_trans_pane_g1

0xabc1,	// (0x0006712e) bg_popup_trans_pane_g2

0xd670,	// (0x00069bdd) bg_popup_trans_pane_g3

0xd678,	// (0x00069be5) bg_popup_trans_pane_g4

0xd680,	// (0x00069bed) bg_popup_trans_pane_g5

0xd688,	// (0x00069bf5) bg_popup_trans_pane_g6

0xd690,	// (0x00069bfd) bg_popup_trans_pane_g7

0xd698,	// (0x00069c05) bg_popup_trans_pane_g8

0xaba1,	// (0x0006710e) bg_popup_trans_pane_g9

0x0008,

0xf79f,	// (0x0006bd0c) bg_popup_trans_pane_g

0xd6a0,	// (0x00069c0d) cell_image3_tool_bar_pane_ParamLimits

0xd6a0,	// (0x00069c0d) cell_image3_tool_bar_pane

0xcc13,	// (0x00069180) cell_image3_tool_bar_pane_g1

0x9880,	// (0x00065ded) bg_popup_trans_pane_cp1

0xd6b4,	// (0x00069c21) popup_image3_note_pane_t1

0xd6c2,	// (0x00069c2f) popup_image3_note_pane_t2

0xd6d0,	// (0x00069c3d) popup_image3_note_pane_t3

0x0002,

0x0677,	// (0x0005cbe4) popup_image3_note_pane_t

0xd6de,	// (0x00069c4b) popup_image3_note_pane_t3_copy1

0x65c9,	// (0x00062b36) bg_myfav_hc_instruction_pane_ParamLimits

0x65c9,	// (0x00062b36) bg_myfav_hc_instruction_pane

0x65e1,	// (0x00062b4e) cell_myfav_contact_pane_ParamLimits

0x65e1,	// (0x00062b4e) cell_myfav_contact_pane

0x65fb,	// (0x00062b68) cell_myfav_contact_pane_cp1_ParamLimits

0x65fb,	// (0x00062b68) cell_myfav_contact_pane_cp1

0x6613,	// (0x00062b80) cell_myfav_contact_pane_cp2_ParamLimits

0x6613,	// (0x00062b80) cell_myfav_contact_pane_cp2

0x662b,	// (0x00062b98) cell_myfav_contact_pane_cp3_ParamLimits

0x662b,	// (0x00062b98) cell_myfav_contact_pane_cp3

0x6642,	// (0x00062baf) cell_myfav_contact_pane_cp4_ParamLimits

0x6642,	// (0x00062baf) cell_myfav_contact_pane_cp4

0x6658,	// (0x00062bc5) cell_myfav_contact_pane_cp5_ParamLimits

0x6658,	// (0x00062bc5) cell_myfav_contact_pane_cp5

0x666c,	// (0x00062bd9) cell_myfav_contact_pane_cp6_ParamLimits

0x666c,	// (0x00062bd9) cell_myfav_contact_pane_cp6

0x6680,	// (0x00062bed) cell_myfav_contact_pane_cp7_ParamLimits

0x6680,	// (0x00062bed) cell_myfav_contact_pane_cp7

0xd6ec,	// (0x00069c59) listscroll_gen_pane_cp05

0x6698,	// (0x00062c05) main_myfav_hc_pane_g1_ParamLimits

0x6698,	// (0x00062c05) main_myfav_hc_pane_g1

0x66b0,	// (0x00062c1d) main_myfav_hc_pane_g2_ParamLimits

0x66b0,	// (0x00062c1d) main_myfav_hc_pane_g2

0x0002,

0xf7b2,	// (0x0006bd1f) main_myfav_hc_pane_g_ParamLimits

0xf7b2,	// (0x0006bd1f) main_myfav_hc_pane_g

0x66e0,	// (0x00062c4d) main_myfav_hc_pane_t1_ParamLimits

0x66e0,	// (0x00062c4d) main_myfav_hc_pane_t1

0xd6f5,	// (0x00069c62) main_myfav_hc_pane_t2_ParamLimits

0xd6f5,	// (0x00069c62) main_myfav_hc_pane_t2

0xd707,	// (0x00069c74) main_myfav_hc_pane_t3_ParamLimits

0xd707,	// (0x00069c74) main_myfav_hc_pane_t3

0x66f7,	// (0x00062c64) main_myfav_hc_pane_t4_ParamLimits

0x66f7,	// (0x00062c64) main_myfav_hc_pane_t4

0x0004,

0xf7b9,	// (0x0006bd26) main_myfav_hc_pane_t_ParamLimits

0xf7b9,	// (0x0006bd26) main_myfav_hc_pane_t

0xcc13,	// (0x00069180) bg_myfav_hc_instruction_pane_g1

0xd719,	// (0x00069c86) cell_myfav_contact_pane_g1_ParamLimits

0xd719,	// (0x00069c86) cell_myfav_contact_pane_g1

0xd719,	// (0x00069c86) cell_myfav_contact_pane_g2_ParamLimits

0xd719,	// (0x00069c86) cell_myfav_contact_pane_g2

0xd725,	// (0x00069c92) cell_myfav_contact_pane_g3_ParamLimits

0xd725,	// (0x00069c92) cell_myfav_contact_pane_g3

0xced8,	// (0x00069445) cell_myfav_contact_pane_g4_ParamLimits

0xced8,	// (0x00069445) cell_myfav_contact_pane_g4

0xd732,	// (0x00069c9f) cell_myfav_contact_pane_g5_ParamLimits

0xd732,	// (0x00069c9f) cell_myfav_contact_pane_g5

0x0004,

0x0690,	// (0x0005cbfd) cell_myfav_contact_pane_g_ParamLimits

0x0690,	// (0x0005cbfd) cell_myfav_contact_pane_g

0x66c8,	// (0x00062c35) main_myfav_hc_pane_g3_ParamLimits

0x66c8,	// (0x00062c35) main_myfav_hc_pane_g3

0x0f1c,	// (0x0005d489) popup_adpt_find_window

0x6721,	// (0x00062c8e) afind_page_pane_ParamLimits

0x6721,	// (0x00062c8e) afind_page_pane

0x672e,	// (0x00062c9b) aid_size_cell_afind_ParamLimits

0x672e,	// (0x00062c9b) aid_size_cell_afind

0x6748,	// (0x00062cb5) bg_popup_sub_pane_cp09_ParamLimits

0x6748,	// (0x00062cb5) bg_popup_sub_pane_cp09

0x6755,	// (0x00062cc2) find_pane_cp01_ParamLimits

0x6755,	// (0x00062cc2) find_pane_cp01

0xd73e,	// (0x00069cab) grid_afind_control_pane_ParamLimits

0xd73e,	// (0x00069cab) grid_afind_control_pane

0x6762,	// (0x00062ccf) grid_afind_pane_ParamLimits

0x6762,	// (0x00062ccf) grid_afind_pane

0x677c,	// (0x00062ce9) cell_afind_pane_ParamLimits

0x677c,	// (0x00062ce9) cell_afind_pane

0xcc13,	// (0x00069180) afind_page_pane_g1

0x67c4,	// (0x00062d31) afind_page_pane_g2

0x67cd,	// (0x00062d3a) afind_page_pane_g3

0x0002,

0xf7c4,	// (0x0006bd31) afind_page_pane_g

0x67d6,	// (0x00062d43) afind_page_pane_t1

0xd752,	// (0x00069cbf) cell_afind_grid_control_pane_ParamLimits

0xd752,	// (0x00069cbf) cell_afind_grid_control_pane

0xd52a,	// (0x00069a97) bg_button_pane_cp69_ParamLimits

0xd52a,	// (0x00069a97) bg_button_pane_cp69

0x67f6,	// (0x00062d63) cell_afind_pane_g1_ParamLimits

0x67f6,	// (0x00062d63) cell_afind_pane_g1

0x6803,	// (0x00062d70) cell_afind_pane_t1_ParamLimits

0x6803,	// (0x00062d70) cell_afind_pane_t1

0xa9ba,	// (0x00066f27) bg_button_pane_cp72

0xd761,	// (0x00069cce) cell_afind_grid_control_pane_g1

0x3d9f,	// (0x0006030c) aid_image_placing_area_ParamLimits

0x3d9f,	// (0x0006030c) aid_image_placing_area

0xd1f8,	// (0x00069765) field_vitu_entry_pane_g1_ParamLimits

0xd1f8,	// (0x00069765) field_vitu_entry_pane_g1

0xd204,	// (0x00069771) field_vitu_entry_pane_g2_ParamLimits

0xd204,	// (0x00069771) field_vitu_entry_pane_g2

0x0001,

0x054c,	// (0x0005cab9) field_vitu_entry_pane_g_ParamLimits

0x054c,	// (0x0005cab9) field_vitu_entry_pane_g

0x590e,	// (0x00061e7b) cell_vitu_itu_pane_g1_ParamLimits

0x595e,	// (0x00061ecb) cell_vitu_itu_pane_t3_ParamLimits

0x595e,	// (0x00061ecb) cell_vitu_itu_pane_t3

0xd4da,	// (0x00069a47) mp4_progress_pane_t1_ParamLimits

0xd4f3,	// (0x00069a60) mp4_progress_pane_t2_ParamLimits

0x05e1,	// (0x0005cb4e) mp4_progress_pane_t_ParamLimits

0xd50c,	// (0x00069a79) mup_progress_pane_cp04_ParamLimits

0x670b,	// (0x00062c78) main_myfav_hc_pane_t5_ParamLimits

0x670b,	// (0x00062c78) main_myfav_hc_pane_t5

0x0daa,	// (0x0005d317) aid_zoom_text_primary

0x0f1c,	// (0x0005d489) popup_adpt_find_window_ParamLimits

0x4225,	// (0x00060792) main_cam_set_pane

0x6145,	// (0x000626b2) cam4_zoom_pane_ParamLimits

0x6145,	// (0x000626b2) cam4_zoom_pane

0x6815,	// (0x00062d82) main_cam_set_pane_g1_ParamLimits

0x6815,	// (0x00062d82) main_cam_set_pane_g1

0x6823,	// (0x00062d90) main_cam_set_pane_g2_ParamLimits

0x6823,	// (0x00062d90) main_cam_set_pane_g2

0x0001,

0xf7cb,	// (0x0006bd38) main_cam_set_pane_g_ParamLimits

0xf7cb,	// (0x0006bd38) main_cam_set_pane_g

0x682f,	// (0x00062d9c) main_cam_set_pane_t1_ParamLimits

0x682f,	// (0x00062d9c) main_cam_set_pane_t1

0x684b,	// (0x00062db8) main_cset_listscroll_pane_ParamLimits

0x684b,	// (0x00062db8) main_cset_listscroll_pane

0x6876,	// (0x00062de3) main_cset_slider_pane_ParamLimits

0x6876,	// (0x00062de3) main_cset_slider_pane

0xd772,	// (0x00069cdf) main_cset_list_pane_ParamLimits

0xd772,	// (0x00069cdf) main_cset_list_pane

0xd782,	// (0x00069cef) scroll_pane_cp028

0x6895,	// (0x00062e02) aid_area_touch_slider

0x68b1,	// (0x00062e1e) cset_slider_pane

0x68db,	// (0x00062e48) main_cset_slider_pane_g1

0x68f0,	// (0x00062e5d) main_cset_slider_pane_g2

0x0011,

0xf7d0,	// (0x0006bd3d) main_cset_slider_pane_g

0xd7bb,	// (0x00069d28) main_cset_slider_pane_t1

0x69b6,	// (0x00062f23) main_cset_slider_pane_t2

0x69d0,	// (0x00062f3d) main_cset_slider_pane_t3

0x69ea,	// (0x00062f57) main_cset_slider_pane_t4

0x6a08,	// (0x00062f75) main_cset_slider_pane_t5

0x6a26,	// (0x00062f93) main_cset_slider_pane_t6

0x6a3d,	// (0x00062faa) main_cset_slider_pane_t7

0x000e,

0xf7f5,	// (0x0006bd62) main_cset_slider_pane_t

0x6b4b,	// (0x000630b8) cset_list_set_pane_ParamLimits

0x6b4b,	// (0x000630b8) cset_list_set_pane

0x6b67,	// (0x000630d4) aid_position_infowindow_above

0x6b6f,	// (0x000630dc) aid_position_infowindow_below

0x9ebd,	// (0x0006642a) cset_list_set_pane_g1_ParamLimits

0x9ebd,	// (0x0006642a) cset_list_set_pane_g1

0x6b77,	// (0x000630e4) cset_list_set_pane_g3_ParamLimits

0x6b77,	// (0x000630e4) cset_list_set_pane_g3

0x0001,

0xf814,	// (0x0006bd81) cset_list_set_pane_g_ParamLimits

0xf814,	// (0x0006bd81) cset_list_set_pane_g

0x9ec9,	// (0x00066436) cset_list_set_pane_t1_ParamLimits

0x9ec9,	// (0x00066436) cset_list_set_pane_t1

0xa54e,	// (0x00066abb) list_highlight_pane_cp021_ParamLimits

0xa54e,	// (0x00066abb) list_highlight_pane_cp021

0xb53d,	// (0x00067aaa) cset_slider_pane_g1

0xb54f,	// (0x00067abc) cset_slider_pane_g2

0xb546,	// (0x00067ab3) cset_slider_pane_g3

0x0002,

0x06f0,	// (0x0005cc5d) cset_slider_pane_g

0x6b86,	// (0x000630f3) aid_area_touch_cam4_zoom

0x6b8e,	// (0x000630fb) cam4_zoom_cont_pane

0x6b96,	// (0x00063103) cam4_zoom_pane_g1

0x6b9e,	// (0x0006310b) cam4_zoom_pane_g2

0x6ba6,	// (0x00063113) cam4_zoom_pane_g3

0x0002,

0xf819,	// (0x0006bd86) cam4_zoom_pane_g

0x6bae,	// (0x0006311b) cam4_zoom_cont_pane_g1

0x6bb7,	// (0x00063124) cam4_zoom_cont_pane_g2

0x6bc0,	// (0x0006312d) cam4_zoom_cont_pane_g3

0x0002,

0xf820,	// (0x0006bd8d) cam4_zoom_cont_pane_g

0x6032,	// (0x0006259f) call4_image_pane_ParamLimits

0x6032,	// (0x0006259f) call4_image_pane

0xd536,	// (0x00069aa3) call4_windows_conf_pane_ParamLimits

0xd575,	// (0x00069ae2) popup_call4_audio_in_window_ParamLimits

0xd575,	// (0x00069ae2) popup_call4_audio_in_window

0x9880,	// (0x00065ded) bg_popup_call2_act_pane_cp02

0xd5eb,	// (0x00069b58) call4_list_conf_pane

0xcc13,	// (0x00069180) call4_image_pane_g1

0xcc13,	// (0x00069180) call4_image_pane_g2

0x0001,

0x0412,	// (0x0005c97f) call4_image_pane_g

0xd85b,	// (0x00069dc8) list_single_graphic_popup_conf4_pane_ParamLimits

0xd85b,	// (0x00069dc8) list_single_graphic_popup_conf4_pane

0x9880,	// (0x00065ded) list_highlight_pane_cp022

0xd86e,	// (0x00069ddb) list_single_graphic_popup_conf4_pane_g1

0xb0fb,	// (0x00067668) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf827,	// (0x0006bd94) list_single_graphic_popup_conf4_pane_g

0xd876,	// (0x00069de3) list_single_graphic_popup_conf4_pane_t1

0x202a,	// (0x0005e597) popup_vtel_slider_window_ParamLimits

0x202a,	// (0x0005e597) popup_vtel_slider_window

0xd518,	// (0x00069a85) dialer2_ne_pane_t2_ParamLimits

0xd518,	// (0x00069a85) dialer2_ne_pane_t2

0x0001,

0xf728,	// (0x0006bc95) dialer2_ne_pane_t_ParamLimits

0xf728,	// (0x0006bc95) dialer2_ne_pane_t

0xa54e,	// (0x00066abb) bg_popup_sub_pane_cp010_ParamLimits

0xa54e,	// (0x00066abb) bg_popup_sub_pane_cp010

0x6bc9,	// (0x00063136) popup_vtel_slider_window_g1_ParamLimits

0x6bc9,	// (0x00063136) popup_vtel_slider_window_g1

0x6bd5,	// (0x00063142) popup_vtel_slider_window_g2_ParamLimits

0x6bd5,	// (0x00063142) popup_vtel_slider_window_g2

0x0003,

0xf82c,	// (0x0006bd99) popup_vtel_slider_window_g_ParamLimits

0xf82c,	// (0x0006bd99) popup_vtel_slider_window_g

0x6c1d,	// (0x0006318a) vtel_slider_pane_ParamLimits

0x6c1d,	// (0x0006318a) vtel_slider_pane

0x6c2c,	// (0x00063199) vtel_slider_pane_g1_ParamLimits

0x6c2c,	// (0x00063199) vtel_slider_pane_g1

0x6c39,	// (0x000631a6) vtel_slider_pane_g2_ParamLimits

0x6c39,	// (0x000631a6) vtel_slider_pane_g2

0x6c46,	// (0x000631b3) vtel_slider_pane_g3_ParamLimits

0x6c46,	// (0x000631b3) vtel_slider_pane_g3

0x6c2c,	// (0x00063199) vtel_slider_pane_g4_ParamLimits

0x6c2c,	// (0x00063199) vtel_slider_pane_g4

0x6c53,	// (0x000631c0) vtel_slider_pane_g5_ParamLimits

0x6c53,	// (0x000631c0) vtel_slider_pane_g5

0x0004,

0xf835,	// (0x0006bda2) vtel_slider_pane_g_ParamLimits

0xf835,	// (0x0006bda2) vtel_slider_pane_g

0x4225,	// (0x00060792) main_gallery2_pane

0x63a3,	// (0x00062910) aid_size_row_itut2_dropdow_list_ParamLimits

0x63a3,	// (0x00062910) aid_size_row_itut2_dropdow_list

0x6411,	// (0x0006297e) grid_vitu2_function_top_pane_ParamLimits

0x6411,	// (0x0006297e) grid_vitu2_function_top_pane

0x6467,	// (0x000629d4) popup_vitu2_dropdown_list_window_ParamLimits

0x6467,	// (0x000629d4) popup_vitu2_dropdown_list_window

0x6487,	// (0x000629f4) popup_vitu2_match_list_window

0x6c60,	// (0x000631cd) cell_vitu2_function_top_pane_ParamLimits

0x6c60,	// (0x000631cd) cell_vitu2_function_top_pane

0x6c80,	// (0x000631ed) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6c80,	// (0x000631ed) cell_vitu2_function_top_pane_cp01

0x6c9e,	// (0x0006320b) cell_vitu2_function_top_wide_pane_ParamLimits

0x6c9e,	// (0x0006320b) cell_vitu2_function_top_wide_pane

0x4225,	// (0x00060792) bg_button_pane_cp012

0x6cbc,	// (0x00063229) cell_vitu2_function_top_pane_g1

0x6cd0,	// (0x0006323d) bg_button_pane_cp013_ParamLimits

0x6cd0,	// (0x0006323d) bg_button_pane_cp013

0x6cec,	// (0x00063259) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6cec,	// (0x00063259) cell_vitu2_function_top_wide_pane_g1

0x1013,	// (0x0005d580) bg_popup_sub_pane_cp20

0x6d04,	// (0x00063271) list_vitu2_match_list_pane

0xd668,	// (0x00069bd5) bg_popup_sub_pane_cp20_g1

0xd670,	// (0x00069bdd) bg_popup_sub_pane_cp20_g2

0xabc1,	// (0x0006712e) bg_popup_sub_pane_cp20_g3

0xd678,	// (0x00069be5) bg_popup_sub_pane_cp20_g4

0xaba1,	// (0x0006710e) bg_popup_sub_pane_cp20_g5

0xd88c,	// (0x00069df9) bg_popup_sub_pane_cp20_g6

0xd688,	// (0x00069bf5) bg_popup_sub_pane_cp20_g7

0xd690,	// (0x00069bfd) bg_popup_sub_pane_cp20_g8

0xd698,	// (0x00069c05) bg_popup_sub_pane_cp20_g9

0x0008,

0xf840,	// (0x0006bdad) bg_popup_sub_pane_cp20_g

0x6d1c,	// (0x00063289) list_vitu2_match_list_item_pane_ParamLimits

0x6d1c,	// (0x00063289) list_vitu2_match_list_item_pane

0x6d2e,	// (0x0006329b) list_vitu2_match_list_item_pane_t1

0x102d,	// (0x0005d59a) bg_popup_sub_pane_cp21

0x6d6b,	// (0x000632d8) grid_vitu2_dropdown_list_pane

0x6d73,	// (0x000632e0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6d73,	// (0x000632e0) cell_vitu2_dropdown_list_char_pane

0x6d94,	// (0x00063301) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6d94,	// (0x00063301) cell_vitu2_dropdown_list_ctrl_pane

0xd894,	// (0x00069e01) cell_vitu2_dropdown_list_char_pane_g1

0xd89d,	// (0x00069e0a) cell_vitu2_dropdown_list_char_pane_g2

0xd8a6,	// (0x00069e13) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x073b,	// (0x0005cca8) cell_vitu2_dropdown_list_char_pane_g

0x6dc0,	// (0x0006332d) cell_vitu2_dropdown_list_char_pane_t1

0x6dce,	// (0x0006333b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6dce,	// (0x0006333b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6dde,	// (0x0006334b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6dde,	// (0x0006334b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6def,	// (0x0006335c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6def,	// (0x0006335c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6dff,	// (0x0006336c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6dff,	// (0x0006336c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x61d9,	// (0x00062746) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x61d9,	// (0x00062746) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf85d,	// (0x0006bdca) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf85d,	// (0x0006bdca) cell_vitu2_dropdown_list_ctrl_pane_g

0x6e1b,	// (0x00063388) aid_size_cell_gallery2_ParamLimits

0x6e1b,	// (0x00063388) aid_size_cell_gallery2

0x6e35,	// (0x000633a2) grid_gallery2_pane_ParamLimits

0x6e35,	// (0x000633a2) grid_gallery2_pane

0x578f,	// (0x00061cfc) scroll_pane_cp029_ParamLimits

0x578f,	// (0x00061cfc) scroll_pane_cp029

0x6e4c,	// (0x000633b9) cell_gallery2_pane_ParamLimits

0x6e4c,	// (0x000633b9) cell_gallery2_pane

0xd8af,	// (0x00069e1c) cell_gallery2_pane_g2

0x6ea1,	// (0x0006340e) cell_gallery2_pane_g3

0xd8b7,	// (0x00069e24) cell_gallery2_pane_g4

0xd8bf,	// (0x00069e2c) cell_gallery2_pane_g5

0xb3e6,	// (0x00067953) grid_highlight_pane_cp10

0x6487,	// (0x000629f4) popup_vitu2_match_list_window_ParamLimits

0x6499,	// (0x00062a06) popup_vitu2_query_window_ParamLimits

0x6499,	// (0x00062a06) popup_vitu2_query_window

0x102d,	// (0x0005d59a) bg_vitu2_candi_button_pane

0xd894,	// (0x00069e01) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd89d,	// (0x00069e0a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd8a6,	// (0x00069e13) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6ea9,	// (0x00063416) bg_button_pane_cp015

0x6ebb,	// (0x00063428) bg_button_pane_cp016

0x6ece,	// (0x0006343b) bg_button_pane_cp017

0xc809,	// (0x00068d76) bg_popup_sub_pane_cp22

0xd8c7,	// (0x00069e34) popup_vitu2_query_window_g1

0x6f13,	// (0x00063480) popup_vitu2_query_window_g2

0x0002,

0xf868,	// (0x0006bdd5) popup_vitu2_query_window_g

0x6f30,	// (0x0006349d) popup_vitu2_query_window_t1_ParamLimits

0x6f30,	// (0x0006349d) popup_vitu2_query_window_t1

0x6f63,	// (0x000634d0) popup_vitu2_query_window_t2_ParamLimits

0x6f63,	// (0x000634d0) popup_vitu2_query_window_t2

0x6f75,	// (0x000634e2) popup_vitu2_query_window_t3_ParamLimits

0x6f75,	// (0x000634e2) popup_vitu2_query_window_t3

0x6f9d,	// (0x0006350a) popup_vitu2_query_window_t4_ParamLimits

0x6f9d,	// (0x0006350a) popup_vitu2_query_window_t4

0x6fbe,	// (0x0006352b) popup_vitu2_query_window_t5_ParamLimits

0x6fbe,	// (0x0006352b) popup_vitu2_query_window_t5

0x0006,

0xf86f,	// (0x0006bddc) popup_vitu2_query_window_t_ParamLimits

0xf86f,	// (0x0006bddc) popup_vitu2_query_window_t

0xd76a,	// (0x00069cd7) main_cset_text_pane

0x6895,	// (0x00062e02) aid_area_touch_slider_ParamLimits

0x68b1,	// (0x00062e1e) cset_slider_pane_ParamLimits

0x68db,	// (0x00062e48) main_cset_slider_pane_g1_ParamLimits

0x68f0,	// (0x00062e5d) main_cset_slider_pane_g2_ParamLimits

0xd78b,	// (0x00069cf8) main_cset_slider_pane_g3_ParamLimits

0xd78b,	// (0x00069cf8) main_cset_slider_pane_g3

0x6905,	// (0x00062e72) main_cset_slider_pane_g4_ParamLimits

0x6905,	// (0x00062e72) main_cset_slider_pane_g4

0x6914,	// (0x00062e81) main_cset_slider_pane_g5_ParamLimits

0x6914,	// (0x00062e81) main_cset_slider_pane_g5

0x6922,	// (0x00062e8f) main_cset_slider_pane_g6_ParamLimits

0x6922,	// (0x00062e8f) main_cset_slider_pane_g6

0xf7d0,	// (0x0006bd3d) main_cset_slider_pane_g_ParamLimits

0xd7bb,	// (0x00069d28) main_cset_slider_pane_t1_ParamLimits

0x69b6,	// (0x00062f23) main_cset_slider_pane_t2_ParamLimits

0x69d0,	// (0x00062f3d) main_cset_slider_pane_t3_ParamLimits

0x69ea,	// (0x00062f57) main_cset_slider_pane_t4_ParamLimits

0x6a08,	// (0x00062f75) main_cset_slider_pane_t5_ParamLimits

0x6a26,	// (0x00062f93) main_cset_slider_pane_t6_ParamLimits

0x6a3d,	// (0x00062faa) main_cset_slider_pane_t7_ParamLimits

0x6a6b,	// (0x00062fd8) main_cset_slider_pane_t8_ParamLimits

0x6a6b,	// (0x00062fd8) main_cset_slider_pane_t8

0x6a93,	// (0x00063000) main_cset_slider_pane_t9_ParamLimits

0x6a93,	// (0x00063000) main_cset_slider_pane_t9

0x6abb,	// (0x00063028) main_cset_slider_pane_t10_ParamLimits

0x6abb,	// (0x00063028) main_cset_slider_pane_t10

0x6ae3,	// (0x00063050) main_cset_slider_pane_t11_ParamLimits

0x6ae3,	// (0x00063050) main_cset_slider_pane_t11

0x6b0d,	// (0x0006307a) main_cset_slider_pane_t12_ParamLimits

0x6b0d,	// (0x0006307a) main_cset_slider_pane_t12

0x6b2c,	// (0x00063099) main_cset_slider_pane_t13_ParamLimits

0x6b2c,	// (0x00063099) main_cset_slider_pane_t13

0xf7f5,	// (0x0006bd62) main_cset_slider_pane_t_ParamLimits

0x9880,	// (0x00065ded) bg_popup_sub_pane_cp011

0xd8d3,	// (0x00069e40) main_cset_text_pane_g1

0xd8db,	// (0x00069e48) main_cset_text_pane_t1

0xd8e9,	// (0x00069e56) main_cset_text_pane_t2

0xd8f7,	// (0x00069e64) main_cset_text_pane_t3

0xd905,	// (0x00069e72) main_cset_text_pane_t4

0xd913,	// (0x00069e80) main_cset_text_pane_t5

0xd921,	// (0x00069e8e) main_cset_text_pane_t6

0xd92f,	// (0x00069e9c) main_cset_text_pane_t7

0x0006,

0x0763,	// (0x0005ccd0) main_cset_text_pane_t

0x102d,	// (0x0005d59a) main_cam4_burst_pane

0x102d,	// (0x0005d59a) main_cam5_pane

0x67e4,	// (0x00062d51) bg_button_pane_cp019

0x67ed,	// (0x00062d5a) bg_button_pane_cp020

0xd797,	// (0x00069d04) main_cset_slider_pane_g7_ParamLimits

0xd797,	// (0x00069d04) main_cset_slider_pane_g7

0xd7a3,	// (0x00069d10) main_cset_slider_pane_g8_ParamLimits

0xd7a3,	// (0x00069d10) main_cset_slider_pane_g8

0x6936,	// (0x00062ea3) main_cset_slider_pane_g9_ParamLimits

0x6936,	// (0x00062ea3) main_cset_slider_pane_g9

0x6942,	// (0x00062eaf) main_cset_slider_pane_g10_ParamLimits

0x6942,	// (0x00062eaf) main_cset_slider_pane_g10

0x694e,	// (0x00062ebb) main_cset_slider_pane_g11_ParamLimits

0x694e,	// (0x00062ebb) main_cset_slider_pane_g11

0x695a,	// (0x00062ec7) main_cset_slider_pane_g12_ParamLimits

0x695a,	// (0x00062ec7) main_cset_slider_pane_g12

0x6966,	// (0x00062ed3) main_cset_slider_pane_g13_ParamLimits

0x6966,	// (0x00062ed3) main_cset_slider_pane_g13

0x6974,	// (0x00062ee1) main_cset_slider_pane_g14_ParamLimits

0x6974,	// (0x00062ee1) main_cset_slider_pane_g14

0x6982,	// (0x00062eef) main_cset_slider_pane_g15_ParamLimits

0x6982,	// (0x00062eef) main_cset_slider_pane_g15

0xd7e9,	// (0x00069d56) main_cset_slider_pane_t14_ParamLimits

0xd7e9,	// (0x00069d56) main_cset_slider_pane_t14

0xd822,	// (0x00069d8f) main_cset_slider_pane_t15_ParamLimits

0xd822,	// (0x00069d8f) main_cset_slider_pane_t15

0x7035,	// (0x000635a2) aid_cam4_burst_size_cell_ParamLimits

0x7035,	// (0x000635a2) aid_cam4_burst_size_cell

0x7051,	// (0x000635be) grid_cam4_burst_pane_ParamLimits

0x7051,	// (0x000635be) grid_cam4_burst_pane

0x7081,	// (0x000635ee) linegrid_cam4_burst_pane_ParamLimits

0x7081,	// (0x000635ee) linegrid_cam4_burst_pane

0x70a3,	// (0x00063610) scroll_pane_cp30_ParamLimits

0x70a3,	// (0x00063610) scroll_pane_cp30

0x70af,	// (0x0006361c) cell_cam4_burst_pane_ParamLimits

0x70af,	// (0x0006361c) cell_cam4_burst_pane

0xd93d,	// (0x00069eaa) linegrid_cam4_burst_pane_g1_ParamLimits

0xd93d,	// (0x00069eaa) linegrid_cam4_burst_pane_g1

0x70eb,	// (0x00063658) linegrid_cam4_burst_pane_g2_ParamLimits

0x70eb,	// (0x00063658) linegrid_cam4_burst_pane_g2

0xd94a,	// (0x00069eb7) linegrid_cam4_burst_pane_g3_ParamLimits

0xd94a,	// (0x00069eb7) linegrid_cam4_burst_pane_g3

0x0002,

0xf87e,	// (0x0006bdeb) linegrid_cam4_burst_pane_g_ParamLimits

0xf87e,	// (0x0006bdeb) linegrid_cam4_burst_pane_g

0x70fc,	// (0x00063669) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x70fc,	// (0x00063669) linegrid_cam4_burst_pane_g3_copy1

0xd957,	// (0x00069ec4) linegrid_cam4_burst_pane_g4_ParamLimits

0xd957,	// (0x00069ec4) linegrid_cam4_burst_pane_g4

0x7116,	// (0x00063683) linegrid_cam4_burst_pane_g5_ParamLimits

0x7116,	// (0x00063683) linegrid_cam4_burst_pane_g5

0x7127,	// (0x00063694) linegrid_cam4_burst_pane_g6_ParamLimits

0x7127,	// (0x00063694) linegrid_cam4_burst_pane_g6

0xd964,	// (0x00069ed1) linegrid_cam4_burst_pane_g7_ParamLimits

0xd964,	// (0x00069ed1) linegrid_cam4_burst_pane_g7

0x7138,	// (0x000636a5) cell_cam4_burst_pane_g1

0xd97d,	// (0x00069eea) main_cam5_pane_t1_ParamLimits

0xd97d,	// (0x00069eea) main_cam5_pane_t1

0xd98f,	// (0x00069efc) main_cam5_pane_t2_ParamLimits

0xd98f,	// (0x00069efc) main_cam5_pane_t2

0xd9a1,	// (0x00069f0e) main_cam5_pane_t3_ParamLimits

0xd9a1,	// (0x00069f0e) main_cam5_pane_t3

0xd9b3,	// (0x00069f20) main_cam5_pane_t4_ParamLimits

0xd9b3,	// (0x00069f20) main_cam5_pane_t4

0xd9cb,	// (0x00069f38) main_cam5_pane_t5_ParamLimits

0xd9cb,	// (0x00069f38) main_cam5_pane_t5

0xd9df,	// (0x00069f4c) main_cam5_pane_t6_ParamLimits

0xd9df,	// (0x00069f4c) main_cam5_pane_t6

0xd9f3,	// (0x00069f60) main_cam5_pane_t7_ParamLimits

0xd9f3,	// (0x00069f60) main_cam5_pane_t7

0xda05,	// (0x00069f72) main_cam5_pane_t8_ParamLimits

0xda05,	// (0x00069f72) main_cam5_pane_t8

0xda21,	// (0x00069f8e) main_cam5_pane_t9_ParamLimits

0xda21,	// (0x00069f8e) main_cam5_pane_t9

0xda33,	// (0x00069fa0) main_cam5_pane_t10_ParamLimits

0xda33,	// (0x00069fa0) main_cam5_pane_t10

0xda45,	// (0x00069fb2) main_cam5_pane_t11_ParamLimits

0xda45,	// (0x00069fb2) main_cam5_pane_t11

0xda75,	// (0x00069fe2) main_cam5_pane_t12_ParamLimits

0xda75,	// (0x00069fe2) main_cam5_pane_t12

0xda8a,	// (0x00069ff7) main_cam5_pane_t13_ParamLimits

0xda8a,	// (0x00069ff7) main_cam5_pane_t13

0x000c,

0xf88a,	// (0x0006bdf7) main_cam5_pane_t_ParamLimits

0xf88a,	// (0x0006bdf7) main_cam5_pane_t

0x0fd2,	// (0x0005d53f) popup_scut_keymap_window_ParamLimits

0x0fd2,	// (0x0005d53f) popup_scut_keymap_window

0x714d,	// (0x000636ba) aid_size_cell_brow_shortcut

0xb3e6,	// (0x00067953) bg_popup_window_pane_cp010

0x7159,	// (0x000636c6) grid_scut_pane

0x7165,	// (0x000636d2) cell_scut_pane_ParamLimits

0x7165,	// (0x000636d2) cell_scut_pane

0x717c,	// (0x000636e9) cell_scut_pane_g1

0xdaa7,	// (0x0006a014) cell_scut_pane_t1

0xdab6,	// (0x0006a023) cell_scut_pane_t2

0x7185,	// (0x000636f2) cell_scut_pane_t3

0x0002,

0xf8a5,	// (0x0006be12) cell_scut_pane_t

0x4f6f,	// (0x000614dc) main_mup3_pane_g8_ParamLimits

0x4f6f,	// (0x000614dc) main_mup3_pane_g8

0x63b1,	// (0x0006291e) area_vitu2_query_pane_ParamLimits

0x63b1,	// (0x0006291e) area_vitu2_query_pane

0x6ee1,	// (0x0006344e) input_focus_pane_cp08

0xdac5,	// (0x0006a032) area_vitu2_query_pane_g1

0x7193,	// (0x00063700) area_vitu2_query_pane_g2

0x0001,

0xf8ac,	// (0x0006be19) area_vitu2_query_pane_g

0x71a4,	// (0x00063711) area_vitu2_query_pane_t1_ParamLimits

0x71a4,	// (0x00063711) area_vitu2_query_pane_t1

0x71b8,	// (0x00063725) area_vitu2_query_pane_t2_ParamLimits

0x71b8,	// (0x00063725) area_vitu2_query_pane_t2

0x71cc,	// (0x00063739) area_vitu2_query_pane_t3_ParamLimits

0x71cc,	// (0x00063739) area_vitu2_query_pane_t3

0x9f04,	// (0x00066471) area_vitu2_query_pane_t4_ParamLimits

0x9f04,	// (0x00066471) area_vitu2_query_pane_t4

0x9f2c,	// (0x00066499) area_vitu2_query_pane_t5_ParamLimits

0x9f2c,	// (0x00066499) area_vitu2_query_pane_t5

0x9f54,	// (0x000664c1) area_vitu2_query_pane_t6_ParamLimits

0x9f54,	// (0x000664c1) area_vitu2_query_pane_t6

0x0006,

0xf8b1,	// (0x0006be1e) area_vitu2_query_pane_t_ParamLimits

0xf8b1,	// (0x0006be1e) area_vitu2_query_pane_t

0x71f4,	// (0x00063761) bg_button_pane_cp018

0x7202,	// (0x0006376f) bg_button_pane_cp021

0x720e,	// (0x0006377b) bg_button_pane_cp022

0x721f,	// (0x0006378c) input_focus_pane_cp09

0xb21f,	// (0x0006778c) aid_size_touch_mv_arrow_left

0xb24a,	// (0x000677b7) aid_size_touch_mv_arrow_right

0x699a,	// (0x00062f07) main_cset_slider_pane_g16_ParamLimits

0x699a,	// (0x00062f07) main_cset_slider_pane_g16

0x69a8,	// (0x00062f15) main_cset_slider_pane_g17_ParamLimits

0x69a8,	// (0x00062f15) main_cset_slider_pane_g17

0x7138,	// (0x000636a5) cell_cam4_burst_pane_g1_ParamLimits

0x9880,	// (0x00065ded) compa_mode_pane

0x6be1,	// (0x0006314e) popup_vtel_slider_window_g3_ParamLimits

0x6be1,	// (0x0006314e) popup_vtel_slider_window_g3

0x6bf5,	// (0x00063162) popup_vtel_slider_window_g4_ParamLimits

0x6bf5,	// (0x00063162) popup_vtel_slider_window_g4

0x6c09,	// (0x00063176) popup_vtel_slider_window_t1_ParamLimits

0x6c09,	// (0x00063176) popup_vtel_slider_window_t1

0x102d,	// (0x0005d59a) main_cl_pane

0x42bf,	// (0x0006082c) popup_imed_adjust2_window_ParamLimits

0xc809,	// (0x00068d76) bg_tb_trans_pane_cp05_ParamLimits

0xd124,	// (0x00069691) popup_imed_adjust2_window_g1_ParamLimits

0xd133,	// (0x000696a0) popup_imed_adjust2_window_g2_ParamLimits

0xd133,	// (0x000696a0) popup_imed_adjust2_window_g2

0xd13f,	// (0x000696ac) popup_imed_adjust2_window_g3_ParamLimits

0xd13f,	// (0x000696ac) popup_imed_adjust2_window_g3

0x0002,

0x0510,	// (0x0005ca7d) popup_imed_adjust2_window_g_ParamLimits

0x0510,	// (0x0005ca7d) popup_imed_adjust2_window_g

0xd14b,	// (0x000696b8) popup_imed_adjust2_window_t1_ParamLimits

0xd163,	// (0x000696d0) slider_imed_adjust_pane_ParamLimits

0xd177,	// (0x000696e4) slider_imed_adjust_pane_g1_ParamLimits

0xd187,	// (0x000696f4) slider_imed_adjust_pane_g2_ParamLimits

0xd197,	// (0x00069704) slider_imed_adjust_pane_g3_ParamLimits

0xd1a8,	// (0x00069715) slider_imed_adjust_pane_g4_ParamLimits

0x0517,	// (0x0005ca84) slider_imed_adjust_pane_g_ParamLimits

0x60ee,	// (0x0006265b) aid_touch_area_cam4_ParamLimits

0x60ee,	// (0x0006265b) aid_touch_area_cam4

0x60fe,	// (0x0006266b) battery_pane_cp01

0x6185,	// (0x000626f2) main_camera4_pane_g6_ParamLimits

0x6185,	// (0x000626f2) main_camera4_pane_g6

0x61a3,	// (0x00062710) main_camera4_pane_t2_ParamLimits

0x61a3,	// (0x00062710) main_camera4_pane_t2

0x0001,

0xf75c,	// (0x0006bcc9) main_camera4_pane_t_ParamLimits

0xf75c,	// (0x0006bcc9) main_camera4_pane_t

0x6238,	// (0x000627a5) aid_touch_area_vid4_ParamLimits

0x6238,	// (0x000627a5) aid_touch_area_vid4

0x6278,	// (0x000627e5) main_video4_pane_g5_ParamLimits

0x6278,	// (0x000627e5) main_video4_pane_g5

0x629c,	// (0x00062809) vid4_progress_pane_ParamLimits

0x629c,	// (0x00062809) vid4_progress_pane

0xd7af,	// (0x00069d1c) main_cset_slider_pane_g18_ParamLimits

0xd7af,	// (0x00069d1c) main_cset_slider_pane_g18

0xd971,	// (0x00069ede) cell_cam4_burst_pane_g2_ParamLimits

0xd971,	// (0x00069ede) cell_cam4_burst_pane_g2

0x0001,

0xf885,	// (0x0006bdf2) cell_cam4_burst_pane_g_ParamLimits

0xf885,	// (0x0006bdf2) cell_cam4_burst_pane_g

0x7230,	// (0x0006379d) bg_cl_pane_ParamLimits

0x7230,	// (0x0006379d) bg_cl_pane

0x723c,	// (0x000637a9) cl_header_pane_ParamLimits

0x723c,	// (0x000637a9) cl_header_pane

0x7248,	// (0x000637b5) cl_listscroll_pane_ParamLimits

0x7248,	// (0x000637b5) cl_listscroll_pane

0xdad1,	// (0x0006a03e) bg_cl_pane_g1

0xdad9,	// (0x0006a046) bg_cl_pane_g2

0xdae1,	// (0x0006a04e) bg_cl_pane_g3

0xdae9,	// (0x0006a056) bg_cl_pane_g4

0xdaf1,	// (0x0006a05e) bg_cl_pane_g5

0xdaf9,	// (0x0006a066) bg_cl_pane_g6

0xdb01,	// (0x0006a06e) bg_cl_pane_g7

0xdb09,	// (0x0006a076) bg_cl_pane_g8

0xdb11,	// (0x0006a07e) bg_cl_pane_g9

0x0008,

0xf8c0,	// (0x0006be2d) bg_cl_pane_g

0x7254,	// (0x000637c1) aid_height_cl_leading_ParamLimits

0x7254,	// (0x000637c1) aid_height_cl_leading

0x7260,	// (0x000637cd) aid_height_cl_text_ParamLimits

0x7260,	// (0x000637cd) aid_height_cl_text

0xeab3,	// (0x0006b020) bg_cl_header_pane_ParamLimits

0xeab3,	// (0x0006b020) bg_cl_header_pane

0x7278,	// (0x000637e5) cl_header_pane_g1_ParamLimits

0x7278,	// (0x000637e5) cl_header_pane_g1

0x7285,	// (0x000637f2) cl_header_pane_t1_ParamLimits

0x7285,	// (0x000637f2) cl_header_pane_t1

0xdb19,	// (0x0006a086) cl_list_pane

0xd782,	// (0x00069cef) hc_scroll_pane_cp01

0xaba1,	// (0x0006710e) bg_cl_header_pane_g1

0xd668,	// (0x00069bd5) bg_cl_header_pane_g2

0xabc1,	// (0x0006712e) bg_cl_header_pane_g3

0xd678,	// (0x00069be5) bg_cl_header_pane_g4

0xd670,	// (0x00069bdd) bg_cl_header_pane_g5

0xd88c,	// (0x00069df9) bg_cl_header_pane_g6

0xd690,	// (0x00069bfd) bg_cl_header_pane_g7

0xd698,	// (0x00069c05) bg_cl_header_pane_g8

0xd688,	// (0x00069bf5) bg_cl_header_pane_g9

0x0008,

0xf8d3,	// (0x0006be40) bg_cl_header_pane_g

0x7297,	// (0x00063804) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7297,	// (0x00063804) hc_cl_list_double_graphic_heading_pane

0x72ab,	// (0x00063818) hc_cl_list_single_graphic_pane_ParamLimits

0x72ab,	// (0x00063818) hc_cl_list_single_graphic_pane

0x72c5,	// (0x00063832) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x72c5,	// (0x00063832) hc_cl_list_single_graphic_pane_g1

0x72d1,	// (0x0006383e) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x72d1,	// (0x0006383e) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf8e6,	// (0x0006be53) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf8e6,	// (0x0006be53) hc_cl_list_single_graphic_pane_g

0x72e5,	// (0x00063852) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x72e5,	// (0x00063852) hc_cl_list_single_graphic_pane_t1

0x72c5,	// (0x00063832) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x72c5,	// (0x00063832) hc_cl_list_double_graphic_heading_pane_g1

0x72fa,	// (0x00063867) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x72fa,	// (0x00063867) hc_cl_list_double_graphic_heading_pane_g2

0x730e,	// (0x0006387b) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x730e,	// (0x0006387b) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf8eb,	// (0x0006be58) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf8eb,	// (0x0006be58) hc_cl_list_double_graphic_heading_pane_g

0x7322,	// (0x0006388f) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7322,	// (0x0006388f) hc_cl_list_double_graphic_heading_pane_t1

0x7337,	// (0x000638a4) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7337,	// (0x000638a4) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf8f2,	// (0x0006be5f) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf8f2,	// (0x0006be5f) hc_cl_list_double_graphic_heading_pane_t

0x7354,	// (0x000638c1) vid4_progress_pane_g1

0x7366,	// (0x000638d3) vid4_progress_pane_g2

0xae8a,	// (0x000673f7) vid4_progress_pane_g3

0x7376,	// (0x000638e3) vid4_progress_pane_g4

0x0004,

0xf8f7,	// (0x0006be64) vid4_progress_pane_g

0x7394,	// (0x00063901) vid4_progress_pane_t1

0x73a9,	// (0x00063916) vid4_progress_pane_t2

0x0002,

0xf902,	// (0x0006be6f) vid4_progress_pane_t

0x73d5,	// (0x00063942) wait_bar_pane_cp07

0xca04,	// (0x00068f71) blid_firmament_pane_ParamLimits

0xca47,	// (0x00068fb4) popup_blid_sat_info2_window_g1

0xca6b,	// (0x00068fd8) popup_blid_sat_info2_window_t3

0xca79,	// (0x00068fe6) popup_blid_sat_info2_window_t4

0xca87,	// (0x00068ff4) popup_blid_sat_info2_window_t5

0xca95,	// (0x00069002) popup_blid_sat_info2_window_t6

0xcaa5,	// (0x00069012) popup_blid_sat_info2_window_t7

0xcab3,	// (0x00069020) popup_blid_sat_info2_window_t8

0xcac1,	// (0x0006902e) popup_blid_sat_info2_window_t9

0xcacf,	// (0x0006903c) popup_blid_sat_info2_window_t10

0xcb93,	// (0x00069100) aid_firma_cardinal_ParamLimits

0xcba7,	// (0x00069114) blid_firmament_pane_t1_ParamLimits

0xcbbe,	// (0x0006912b) blid_firmament_pane_t2_ParamLimits

0xcbd5,	// (0x00069142) blid_firmament_pane_t3_ParamLimits

0xcbec,	// (0x00069159) blid_firmament_pane_t4_ParamLimits

0x0409,	// (0x0005c976) blid_firmament_pane_t_ParamLimits

0xcc03,	// (0x00069170) blid_sat_info_pane_ParamLimits

0x4225,	// (0x00060792) main_cam_set_pane_ParamLimits

0x5728,	// (0x00061c95) aid_size_cell_colour_35_ParamLimits

0x5742,	// (0x00061caf) aid_size_cell_colour_112_ParamLimits

0x5759,	// (0x00061cc6) aid_size_cell_effect_ParamLimits

0xa54e,	// (0x00066abb) bg_tb_trans_pane_cp02_ParamLimits

0xb4c8,	// (0x00067a35) heading_imed_pane_ParamLimits

0x5773,	// (0x00061ce0) listscroll_imed_pane_ParamLimits

0xbe2f,	// (0x0006839c) popup_call2_audio_first_window_g5_ParamLimits

0xbe2f,	// (0x0006839c) popup_call2_audio_first_window_g5

0x5e9d,	// (0x0006240a) aid_size_touch_image3_arrow_left_ParamLimits

0x5e9d,	// (0x0006240a) aid_size_touch_image3_arrow_left

0x5eb3,	// (0x00062420) aid_size_touch_image3_arrow_right_ParamLimits

0x5eb3,	// (0x00062420) aid_size_touch_image3_arrow_right

0x73bf,	// (0x0006392c) vid4_progress_pane_t3

0x5a27,	// (0x00061f94) main_hwr_training_symbol_option_pane_ParamLimits

0x5a27,	// (0x00061f94) main_hwr_training_symbol_option_pane

0xd41a,	// (0x00069987) popup_hwr_training_preview_window_ParamLimits

0xd41a,	// (0x00069987) popup_hwr_training_preview_window

0x5a88,	// (0x00061ff5) hwr_training_navi_pane_g5_ParamLimits

0x5a88,	// (0x00061ff5) hwr_training_navi_pane_g5

0xd656,	// (0x00069bc3) popup_char_count_window

0x1013,	// (0x0005d580) bg_popup_sub_pane_cp20_ParamLimits

0x6d04,	// (0x00063271) list_vitu2_match_list_pane_ParamLimits

0x6d10,	// (0x0006327d) vitu2_page_scroll_pane_ParamLimits

0x6d10,	// (0x0006327d) vitu2_page_scroll_pane

0xdb22,	// (0x0006a08f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdb22,	// (0x0006a08f) list_single_hwr_training_symbol_option_pane

0xdb35,	// (0x0006a0a2) list_single_hwr_training_symbol_option_pane_g1

0xdb3d,	// (0x0006a0aa) list_single_hwr_training_symbol_option_pane_t1

0xdb4b,	// (0x0006a0b8) bg_button_pane_cp023

0xdb54,	// (0x0006a0c1) bg_button_pane_cp024

0x7414,	// (0x00063981) vitu2_page_scroll_pane_g1

0x741c,	// (0x00063989) vitu2_page_scroll_pane_g2

0x0001,

0xf909,	// (0x0006be76) vitu2_page_scroll_pane_g

0x7424,	// (0x00063991) vitu2_page_scroll_pane_t1

0xd1d4,	// (0x00069741) popup_char_count_window_g1

0xdb87,	// (0x0006a0f4) popup_char_count_window_g2

0xdb90,	// (0x0006a0fd) popup_char_count_window_g3

0x0002,

0xf90e,	// (0x0006be7b) popup_char_count_window_g

0xdb99,	// (0x0006a106) popup_char_count_window_t1

0x102d,	// (0x0005d59a) main_vded2_pane

0xd110,	// (0x0006967d) aid_size_cell_imed_line

0xd11a,	// (0x00069687) grid_imed_line_width_pane

0x6308,	// (0x00062875) vid4_indicators_pane_g4

0xdba7,	// (0x0006a114) cell_imed_line_width_pane_ParamLimits

0xdba7,	// (0x0006a114) cell_imed_line_width_pane

0xdbbb,	// (0x0006a128) cell_imed_line_width_pane_g1

0xda63,	// (0x00069fd0) cell_imed_line_width_pane_g2

0x0001,

0xf915,	// (0x0006be82) cell_imed_line_width_pane_g

0x7433,	// (0x000639a0) main_vded2_pane_g1_ParamLimits

0x7433,	// (0x000639a0) main_vded2_pane_g1

0x7440,	// (0x000639ad) main_vded2_pane_g2_ParamLimits

0x7440,	// (0x000639ad) main_vded2_pane_g2

0x0001,

0xf91a,	// (0x0006be87) main_vded2_pane_g_ParamLimits

0xf91a,	// (0x0006be87) main_vded2_pane_g

0x744e,	// (0x000639bb) vded2_slider_pane_ParamLimits

0x744e,	// (0x000639bb) vded2_slider_pane

0x745b,	// (0x000639c8) aid_size_touch_vded2_end

0x7465,	// (0x000639d2) aid_size_touch_vded2_playhead

0xdbc4,	// (0x0006a131) aid_size_touch_vded2_start

0xdbcc,	// (0x0006a139) vded2_slider_bg_pane

0xdbd5,	// (0x0006a142) vded2_slider_pane_g1

0xdbde,	// (0x0006a14b) vded2_slider_pane_g2

0x746d,	// (0x000639da) vded2_slider_pane_g3

0x0002,

0xf91f,	// (0x0006be8c) vded2_slider_pane_g

0xdbe6,	// (0x0006a153) vded2_slider_bg_pane_g1

0xdbef,	// (0x0006a15c) vded2_slider_bg_pane_g2

0xdbf8,	// (0x0006a165) vded2_slider_bg_pane_g3

0x0002,

0xf926,	// (0x0006be93) vded2_slider_bg_pane_g

0x3b00,	// (0x0006006d) aid_postcard_touch_down_pane_ParamLimits

0x3b00,	// (0x0006006d) aid_postcard_touch_down_pane

0x3b10,	// (0x0006007d) aid_postcard_touch_up_pane_ParamLimits

0x3b10,	// (0x0006007d) aid_postcard_touch_up_pane

0x102d,	// (0x0005d59a) main_blid2_pane

0x424e,	// (0x000607bb) popup_blid2_search_window

0x9880,	// (0x00065ded) blid2_gps_pane

0x9880,	// (0x00065ded) blid2_navig_pane

0x9880,	// (0x00065ded) blid2_search_pane

0x9880,	// (0x00065ded) blid2_tripm_pane

0x7476,	// (0x000639e3) blid2_search_pane_g1_ParamLimits

0x7476,	// (0x000639e3) blid2_search_pane_g1

0x7486,	// (0x000639f3) blid2_search_pane_t1_ParamLimits

0x7486,	// (0x000639f3) blid2_search_pane_t1

0x7498,	// (0x00063a05) aid_size_cell_blid2_gps_ParamLimits

0x7498,	// (0x00063a05) aid_size_cell_blid2_gps

0x74a8,	// (0x00063a15) blid2_gps_pane_g1_ParamLimits

0x74a8,	// (0x00063a15) blid2_gps_pane_g1

0x74b4,	// (0x00063a21) grid_blid2_satellite_pane_ParamLimits

0x74b4,	// (0x00063a21) grid_blid2_satellite_pane

0x74c4,	// (0x00063a31) blid2_navig_pane_g1_ParamLimits

0x74c4,	// (0x00063a31) blid2_navig_pane_g1

0x74d0,	// (0x00063a3d) blid2_navig_pane_t1_ParamLimits

0x74d0,	// (0x00063a3d) blid2_navig_pane_t1

0x74e2,	// (0x00063a4f) blid2_navig_pane_t2_ParamLimits

0x74e2,	// (0x00063a4f) blid2_navig_pane_t2

0x0001,

0xf92d,	// (0x0006be9a) blid2_navig_pane_t_ParamLimits

0xf92d,	// (0x0006be9a) blid2_navig_pane_t

0x74f4,	// (0x00063a61) blid2_navig_ring_pane_ParamLimits

0x74f4,	// (0x00063a61) blid2_navig_ring_pane

0x7504,	// (0x00063a71) blid2_speed_pane_ParamLimits

0x7504,	// (0x00063a71) blid2_speed_pane

0x7510,	// (0x00063a7d) blid2_tripm_pane_g1_ParamLimits

0x7510,	// (0x00063a7d) blid2_tripm_pane_g1

0x7520,	// (0x00063a8d) blid2_tripm_pane_g2_ParamLimits

0x7520,	// (0x00063a8d) blid2_tripm_pane_g2

0x752c,	// (0x00063a99) blid2_tripm_pane_g3_ParamLimits

0x752c,	// (0x00063a99) blid2_tripm_pane_g3

0x7538,	// (0x00063aa5) blid2_tripm_pane_g4_ParamLimits

0x7538,	// (0x00063aa5) blid2_tripm_pane_g4

0x7544,	// (0x00063ab1) blid2_tripm_pane_g5_ParamLimits

0x7544,	// (0x00063ab1) blid2_tripm_pane_g5

0x0005,

0xf932,	// (0x0006be9f) blid2_tripm_pane_g_ParamLimits

0xf932,	// (0x0006be9f) blid2_tripm_pane_g

0x7560,	// (0x00063acd) blid2_tripm_pane_t1_ParamLimits

0x7560,	// (0x00063acd) blid2_tripm_pane_t1

0x7574,	// (0x00063ae1) blid2_tripm_pane_t2_ParamLimits

0x7574,	// (0x00063ae1) blid2_tripm_pane_t2

0x7586,	// (0x00063af3) blid2_tripm_pane_t3_ParamLimits

0x7586,	// (0x00063af3) blid2_tripm_pane_t3

0x0003,

0xf93f,	// (0x0006beac) blid2_tripm_pane_t_ParamLimits

0xf93f,	// (0x0006beac) blid2_tripm_pane_t

0x75b8,	// (0x00063b25) cell_blid2_satellite_pane_ParamLimits

0x75b8,	// (0x00063b25) cell_blid2_satellite_pane

0x75d2,	// (0x00063b3f) cell_blid2_satellite_pane_g1

0xdc01,	// (0x0006a16e) cell_blid2_satellite_pane_t1

0xcc13,	// (0x00069180) blid2_speed_pane_g1

0xdc0f,	// (0x0006a17c) blid2_speed_pane_t1

0xdc1d,	// (0x0006a18a) blid2_speed_pane_t2

0x0001,

0xf948,	// (0x0006beb5) blid2_speed_pane_t

0xcc13,	// (0x00069180) blid2_navig_ring_pane_g1

0x75db,	// (0x00063b48) blid2_navig_ring_pane_g2

0x75e3,	// (0x00063b50) blid2_navig_ring_pane_g3

0x75eb,	// (0x00063b58) blid2_navig_ring_pane_g4

0x75f3,	// (0x00063b60) blid2_navig_ring_pane_g5

0x0004,

0xf94d,	// (0x0006beba) blid2_navig_ring_pane_g

0x9880,	// (0x00065ded) bg_popup_window_pane_cp011

0xdc2b,	// (0x0006a198) popup_blid2_search_window_g1

0xdc33,	// (0x0006a1a0) popup_blid2_search_window_t1

0xdc41,	// (0x0006a1ae) popup_blid2_search_window_t2

0x0001,

0xf958,	// (0x0006bec5) popup_blid2_search_window_t

0xaab0,	// (0x0006701d) main_browser_pane_g1

0xa7a1,	// (0x00066d0e) main_browser_pane_ParamLimits

0x4225,	// (0x00060792) bg_button_pane_cp011_ParamLimits

0x65b5,	// (0x00062b22) cell_vitu2_function_pane_g1_ParamLimits

0xc809,	// (0x00068d76) bg_popup_sub_pane_cp22_ParamLimits

0x6ee1,	// (0x0006344e) input_focus_pane_cp08_ParamLimits

0x6ef8,	// (0x00063465) popup_vitu2_query_button_pane_ParamLimits

0x6ef8,	// (0x00063465) popup_vitu2_query_button_pane

0x6f09,	// (0x00063476) popup_vitu2_query_input_button_pane

0xd8c7,	// (0x00069e34) popup_vitu2_query_window_g1_ParamLimits

0x6f13,	// (0x00063480) popup_vitu2_query_window_g2_ParamLimits

0xf868,	// (0x0006bdd5) popup_vitu2_query_window_g_ParamLimits

0x9880,	// (0x00065ded) bg_button_pane_cp026

0x75fb,	// (0x00063b68) popup_vitu2_query_input_button_pane_g1

0x9880,	// (0x00065ded) bg_button_pane_cp025

0xdc4f,	// (0x0006a1bc) popup_vitu2_query_button_pane_t1

0x4ca7,	// (0x00061214) main_mp3_pane_t6

0x4cb7,	// (0x00061224) popup_slider_window_cp01

0x61e7,	// (0x00062754) cam4_battery_pane

0x62c7,	// (0x00062834) cam4_battery_pane_cp02

0x734c,	// (0x000638b9) cam4_battery_pane_cp01

0x734c,	// (0x000638b9) cam4_battery_pane_cp03

0xda6b,	// (0x00069fd8) cam4_battery_pane_g1

0xcc13,	// (0x00069180) cam4_battery_pane_g2

0x0001,

0xf95d,	// (0x0006beca) cam4_battery_pane_g

0xcadd,	// (0x0006904a) popup_blid_sat_info2_window_t11

0xb21f,	// (0x0006778c) aid_size_touch_mv_arrow_left_ParamLimits

0xb24a,	// (0x000677b7) aid_size_touch_mv_arrow_right_ParamLimits

0xb2a8,	// (0x00067815) navi_pane_g1_ParamLimits

0xb2b4,	// (0x00067821) navi_pane_g2_ParamLimits

0xb2f0,	// (0x0006785d) navi_pane_g3_ParamLimits

0xf3ea,	// (0x0006b957) navi_pane_g_ParamLimits

0x3528,	// (0x0005fa95) navi_pane_mv_t1_ParamLimits

0x577f,	// (0x00061cec) grid_imed_effect_pane_ParamLimits

0x1eea,	// (0x0005e457) aid_placing_vt_slider_lsc

0xa9ff,	// (0x00066f6c) aid_placing_vt_slider_prt

0xa54e,	// (0x00066abb) bg_tb_trans_pane_cp01_ParamLimits

0xcd93,	// (0x00069300) popup_image_details_window_g1_ParamLimits

0xcda6,	// (0x00069313) popup_image_details_window_g2_ParamLimits

0xcdbb,	// (0x00069328) popup_image_details_window_g3_ParamLimits

0xcdbb,	// (0x00069328) popup_image_details_window_g3

0x044e,	// (0x0005c9bb) popup_image_details_window_g_ParamLimits

0xcdcf,	// (0x0006933c) popup_image_details_window_t1_ParamLimits

0xcde1,	// (0x0006934e) popup_image_details_window_t2_ParamLimits

0xcdfa,	// (0x00069367) popup_image_details_window_t3_ParamLimits

0xce0e,	// (0x0006937b) popup_image_details_window_t4_ParamLimits

0xce29,	// (0x00069396) popup_image_details_window_t5_ParamLimits

0x0455,	// (0x0005c9c2) popup_image_details_window_t_ParamLimits

0x726c,	// (0x000637d9) cl_header_name_pane_ParamLimits

0x726c,	// (0x000637d9) cl_header_name_pane

0x7603,	// (0x00063b70) cl_header_name_pane_t1_ParamLimits

0x7603,	// (0x00063b70) cl_header_name_pane_t1

0x761a,	// (0x00063b87) cl_header_name_pane_t2_ParamLimits

0x761a,	// (0x00063b87) cl_header_name_pane_t2

0x7644,	// (0x00063bb1) cl_header_name_pane_t3_ParamLimits

0x7644,	// (0x00063bb1) cl_header_name_pane_t3

0x0002,

0xf962,	// (0x0006becf) cl_header_name_pane_t_ParamLimits

0xf962,	// (0x0006becf) cl_header_name_pane_t

0xb37f,	// (0x000678ec) navi_pane_mv_g2_ParamLimits

0xd630,	// (0x00069b9d) field_vitu2_entry_pane_g1_ParamLimits

0xd63c,	// (0x00069ba9) field_vitu2_entry_pane_g2_ParamLimits

0xd648,	// (0x00069bb5) field_vitu2_entry_pane_g3_ParamLimits

0xd648,	// (0x00069bb5) field_vitu2_entry_pane_g3

0x064c,	// (0x0005cbb9) field_vitu2_entry_pane_g_ParamLimits

0x6540,	// (0x00062aad) cell_vitu2_itu_pane_g1_ParamLimits

0x6550,	// (0x00062abd) cell_vitu2_itu_pane_g2_ParamLimits

0x6550,	// (0x00062abd) cell_vitu2_itu_pane_g2

0x0001,

0xf793,	// (0x0006bd00) cell_vitu2_itu_pane_g_ParamLimits

0xf793,	// (0x0006bd00) cell_vitu2_itu_pane_g

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp05_ParamLimits

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp05

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp03

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp04

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp10_ParamLimits

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp10

0x720e,	// (0x0006377b) bg_vkb2_func_pane_cp08

0x71f4,	// (0x00063761) bg_vkb2_func_pane_cp06

0x7202,	// (0x0006376f) bg_vkb2_func_pane_cp07

0xdb5d,	// (0x0006a0ca) bg_vkb2_func_pane_cp11_ParamLimits

0xdb5d,	// (0x0006a0ca) bg_vkb2_func_pane_cp11

0xdb72,	// (0x0006a0df) bg_vkb2_func_pane_cp12_ParamLimits

0xdb72,	// (0x0006a0df) bg_vkb2_func_pane_cp12

0x9880,	// (0x00065ded) bg_vkb2_func_pane_cp09

0xd668,	// (0x00069bd5) bg_vkb2_func_pane_g1

0xabc1,	// (0x0006712e) bg_vkb2_func_pane_g2

0xd670,	// (0x00069bdd) bg_vkb2_func_pane_g3

0xd678,	// (0x00069be5) bg_vkb2_func_pane_g4

0xd88c,	// (0x00069df9) bg_vkb2_func_pane_g5

0xd690,	// (0x00069bfd) bg_vkb2_func_pane_g6

0xd698,	// (0x00069c05) bg_vkb2_func_pane_g7

0xd688,	// (0x00069bf5) bg_vkb2_func_pane_g8

0xaba1,	// (0x0006710e) bg_vkb2_func_pane_g9

0x0008,

0xf969,	// (0x0006bed6) bg_vkb2_func_pane_g

0x7552,	// (0x00063abf) blid2_tripm_pane_g6_ParamLimits

0x7552,	// (0x00063abf) blid2_tripm_pane_g6

0xd4d2,	// (0x00069a3f) mp4_progress_pane_g1

0x75ac,	// (0x00063b19) blid2_tripm_values_pane_ParamLimits

0x75ac,	// (0x00063b19) blid2_tripm_values_pane

0x7669,	// (0x00063bd6) blid2_tripm_values_pane_t1

0x7677,	// (0x00063be4) blid2_tripm_values_pane_t2

0x7685,	// (0x00063bf2) blid2_tripm_values_pane_t3

0x7693,	// (0x00063c00) blid2_tripm_values_pane_t4

0x76a1,	// (0x00063c0e) blid2_tripm_values_pane_t5

0x76af,	// (0x00063c1c) blid2_tripm_values_pane_t6

0x76bd,	// (0x00063c2a) blid2_tripm_values_pane_t7

0x76cb,	// (0x00063c38) blid2_tripm_values_pane_t8

0x76d9,	// (0x00063c46) blid2_tripm_values_pane_t9

0x0008,

0xf97c,	// (0x0006bee9) blid2_tripm_values_pane_t

0x1f2a,	// (0x0005e497) call_video_pane_t1_ParamLimits

0x1f4b,	// (0x0005e4b8) call_video_pane_t2_ParamLimits

0xf273,	// (0x0006b7e0) call_video_pane_t_ParamLimits

0x3a48,	// (0x0005ffb5) msg_header_pane_g1_ParamLimits

0xb579,	// (0x00067ae6) msg_header_pane_g2_ParamLimits

0xb579,	// (0x00067ae6) msg_header_pane_g2

0x0001,

0xf48d,	// (0x0006b9fa) msg_header_pane_g_ParamLimits

0xf48d,	// (0x0006b9fa) msg_header_pane_g

0xa7a1,	// (0x00066d0e) main_clock2_pane_ParamLimits

0x5510,	// (0x00061a7d) grid_clock2_toolbar_pane_ParamLimits

0x5510,	// (0x00061a7d) grid_clock2_toolbar_pane

0x5510,	// (0x00061a7d) listscroll_clock2_pane_ParamLimits

0x5510,	// (0x00061a7d) listscroll_clock2_pane

0x55ba,	// (0x00061b27) main_clock2_pane_t3_ParamLimits

0x55ba,	// (0x00061b27) main_clock2_pane_t3

0x55cc,	// (0x00061b39) main_clock2_pane_t4_ParamLimits

0x55cc,	// (0x00061b39) main_clock2_pane_t4

0xdc5d,	// (0x0006a1ca) cell_clock2_toolbar_pane

0xdc73,	// (0x0006a1e0) cell_clock2_toolbar_pane_cp01

0xdc73,	// (0x0006a1e0) cell_clock2_toolbar_pane_cp02

0xdc7b,	// (0x0006a1e8) cell_clock2_toolbar_pane_cp03

0xdc83,	// (0x0006a1f0) list_clock2_pane

0xb195,	// (0x00067702) scroll_pane_cp10

0xdc8b,	// (0x0006a1f8) list_single_clock2_pane_ParamLimits

0xdc8b,	// (0x0006a1f8) list_single_clock2_pane

0xb3e6,	// (0x00067953) list_highlight_pane_cp08

0xdc98,	// (0x0006a205) list_single_clock2_pane_t1

0xdca6,	// (0x0006a213) list_single_clock2_pane_t2

0x0001,

0xf98f,	// (0x0006befc) list_single_clock2_pane_t

0x9880,	// (0x00065ded) bg_button_pane_cp10

0xdcb4,	// (0x0006a221) cell_clock2_toolbar_pane_g1

0x3a6e,	// (0x0005ffdb) aid_main_viewer_pane_g1_ParamLimits

0x3a6e,	// (0x0005ffdb) aid_main_viewer_pane_g1

0x3a7a,	// (0x0005ffe7) aid_main_viewer_pane_g2_ParamLimits

0x3a7a,	// (0x0005ffe7) aid_main_viewer_pane_g2

0x3a86,	// (0x0005fff3) aid_main_viewer_pane_g3_ParamLimits

0x3a86,	// (0x0005fff3) aid_main_viewer_pane_g3

0x3a97,	// (0x00060004) aid_main_viewer_pane_g4_ParamLimits

0x3a97,	// (0x00060004) aid_main_viewer_pane_g4

0x0003,

0xf49e,	// (0x0006ba0b) aid_main_viewer_pane_g_ParamLimits

0xf49e,	// (0x0006ba0b) aid_main_viewer_pane_g

0x4218,	// (0x00060785) main_calc_pane_ParamLimits

0x4233,	// (0x000607a0) main_dialer2_pane_ParamLimits

0x102d,	// (0x0005d59a) main_cam6_pane

0x102d,	// (0x0005d59a) main_vid6_pane

0x551c,	// (0x00061a89) listscroll_gen_pane_cp06_ParamLimits

0x551c,	// (0x00061a89) listscroll_gen_pane_cp06

0x55de,	// (0x00061b4b) main_clock2_pane_t5_ParamLimits

0x55de,	// (0x00061b4b) main_clock2_pane_t5

0x5629,	// (0x00061b96) aid_call2_pane_cp10_ParamLimits

0x563b,	// (0x00061ba8) aid_call_pane_cp10_ParamLimits

0xb213,	// (0x00067780) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb213,	// (0x00067780) popup_clock_analogue_window_cp10_g2_ParamLimits

0x564d,	// (0x00061bba) popup_clock_analogue_window_cp10_g3_ParamLimits

0x564d,	// (0x00061bba) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb213,	// (0x00067780) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf6a3,	// (0x0006bc10) popup_clock_analogue_window_cp10_g_ParamLimits

0x565f,	// (0x00061bcc) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e4a,	// (0x000623b7) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e4a,	// (0x000623b7) cell_dialer2_keypad_pane_g2

0x0001,

0xf72d,	// (0x0006bc9a) cell_dialer2_keypad_pane_g_ParamLimits

0xf72d,	// (0x0006bc9a) cell_dialer2_keypad_pane_g

0x5e66,	// (0x000623d3) cell_dialer2_keypad_pane_t1

0x6882,	// (0x00062def) main_cset_text2_pane_ParamLimits

0x6882,	// (0x00062def) main_cset_text2_pane

0xdac5,	// (0x0006a032) area_vitu2_query_pane_g1_ParamLimits

0x7193,	// (0x00063700) area_vitu2_query_pane_g2_ParamLimits

0xf8ac,	// (0x0006be19) area_vitu2_query_pane_g_ParamLimits

0x9f7c,	// (0x000664e9) area_vitu2_query_pane_t7_ParamLimits

0x9f7c,	// (0x000664e9) area_vitu2_query_pane_t7

0x71f4,	// (0x00063761) bg_button_pane_cp018_ParamLimits

0x7202,	// (0x0006376f) bg_button_pane_cp021_ParamLimits

0x720e,	// (0x0006377b) bg_button_pane_cp022_ParamLimits

0x720e,	// (0x0006377b) bg_vkb2_func_pane_cp08_ParamLimits

0x71f4,	// (0x00063761) bg_vkb2_func_pane_cp06_ParamLimits

0x7202,	// (0x0006376f) bg_vkb2_func_pane_cp07_ParamLimits

0x721f,	// (0x0006378c) input_focus_pane_cp09_ParamLimits

0x76e7,	// (0x00063c54) cam6_autofocus_pane_ParamLimits

0x76e7,	// (0x00063c54) cam6_autofocus_pane

0x7709,	// (0x00063c76) cam6_image_uncrop_pane_ParamLimits

0x7709,	// (0x00063c76) cam6_image_uncrop_pane

0x7736,	// (0x00063ca3) cam6_indi_pane_ParamLimits

0x7736,	// (0x00063ca3) cam6_indi_pane

0x7750,	// (0x00063cbd) cam6_mode_pane_ParamLimits

0x7750,	// (0x00063cbd) cam6_mode_pane

0x7764,	// (0x00063cd1) cam6_timer_pane_ParamLimits

0x7764,	// (0x00063cd1) cam6_timer_pane

0x7770,	// (0x00063cdd) cam6_zoom_pane_ParamLimits

0x7770,	// (0x00063cdd) cam6_zoom_pane

0x7788,	// (0x00063cf5) cam6_mode_pane_g1_ParamLimits

0x7788,	// (0x00063cf5) cam6_mode_pane_g1

0x7794,	// (0x00063d01) cam6_mode_pane_g2_ParamLimits

0x7794,	// (0x00063d01) cam6_mode_pane_g2

0x77a0,	// (0x00063d0d) cam6_mode_pane_g3_ParamLimits

0x77a0,	// (0x00063d0d) cam6_mode_pane_g3

0x77ac,	// (0x00063d19) cam6_mode_pane_g4_ParamLimits

0x77ac,	// (0x00063d19) cam6_mode_pane_g4

0x0003,

0xf994,	// (0x0006bf01) cam6_mode_pane_g_ParamLimits

0xf994,	// (0x0006bf01) cam6_mode_pane_g

0xdc65,	// (0x0006a1d2) bg_tb_trans_pane_cp08_ParamLimits

0xdc65,	// (0x0006a1d2) bg_tb_trans_pane_cp08

0xdcbc,	// (0x0006a229) cam6_battery_pane_ParamLimits

0xdcbc,	// (0x0006a229) cam6_battery_pane

0xdcd2,	// (0x0006a23f) cam6_indi_pane_g1_ParamLimits

0xdcd2,	// (0x0006a23f) cam6_indi_pane_g1

0xdce4,	// (0x0006a251) cam6_indi_pane_g2_ParamLimits

0xdce4,	// (0x0006a251) cam6_indi_pane_g2

0xdcf6,	// (0x0006a263) cam6_indi_pane_g3_ParamLimits

0xdcf6,	// (0x0006a263) cam6_indi_pane_g3

0x0002,

0x0891,	// (0x0005cdfe) cam6_indi_pane_g_ParamLimits

0x0891,	// (0x0005cdfe) cam6_indi_pane_g

0xdd08,	// (0x0006a275) cam6_indi_pane_t1_ParamLimits

0xdd08,	// (0x0006a275) cam6_indi_pane_t1

0x6343,	// (0x000628b0) cam6_autofocus_pane_g1

0x633b,	// (0x000628a8) cam6_autofocus_pane_g2

0x6353,	// (0x000628c0) cam6_autofocus_pane_g3

0x634b,	// (0x000628b8) cam6_autofocus_pane_g4

0x0003,

0xf99d,	// (0x0006bf0a) cam6_autofocus_pane_g

0xdd2e,	// (0x0006a29b) cam6_timer_pane_g1

0xdd36,	// (0x0006a2a3) cam6_timer_pane_t1

0xdd44,	// (0x0006a2b1) cam6_zoom_cont_pane

0xdd4c,	// (0x0006a2b9) cam6_zoom_pane_g1

0xdd54,	// (0x0006a2c1) cam6_zoom_pane_g2

0x77b8,	// (0x00063d25) cam6_zoom_pane_g3

0x0002,

0xf9a6,	// (0x0006bf13) cam6_zoom_pane_g

0xcc13,	// (0x00069180) cam6_battery_pane_g1

0xcc13,	// (0x00069180) cam6_battery_pane_g2

0x0001,

0x0412,	// (0x0005c97f) cam6_battery_pane_g

0xdd5c,	// (0x0006a2c9) cam6_zoom_cont_pane_g1

0xdd65,	// (0x0006a2d2) cam6_zoom_cont_pane_g2

0xdd6e,	// (0x0006a2db) cam6_zoom_cont_pane_g3

0x0002,

0x08a8,	// (0x0005ce15) cam6_zoom_cont_pane_g

0x77d5,	// (0x00063d42) cam6_mode_pane_cp_ParamLimits

0x77d5,	// (0x00063d42) cam6_mode_pane_cp

0x77e9,	// (0x00063d56) cam6_zoom_pane_cp_ParamLimits

0x77e9,	// (0x00063d56) cam6_zoom_pane_cp

0x7801,	// (0x00063d6e) vid6_image_uncrop_cif_pane_ParamLimits

0x7801,	// (0x00063d6e) vid6_image_uncrop_cif_pane

0x782d,	// (0x00063d9a) vid6_image_uncrop_nhd_pane_ParamLimits

0x782d,	// (0x00063d9a) vid6_image_uncrop_nhd_pane

0x784a,	// (0x00063db7) vid6_image_uncrop_vga_pane_ParamLimits

0x784a,	// (0x00063db7) vid6_image_uncrop_vga_pane

0x7869,	// (0x00063dd6) vid6_image_uncrop_wvga_pane_ParamLimits

0x7869,	// (0x00063dd6) vid6_image_uncrop_wvga_pane

0x7886,	// (0x00063df3) vid6_indi_pane_ParamLimits

0x7886,	// (0x00063df3) vid6_indi_pane

0xdc65,	// (0x0006a1d2) bg_tb_trans_pane_cp09_ParamLimits

0xdc65,	// (0x0006a1d2) bg_tb_trans_pane_cp09

0xdd86,	// (0x0006a2f3) cam6_battery_pane_cp_ParamLimits

0xdd86,	// (0x0006a2f3) cam6_battery_pane_cp

0xdd92,	// (0x0006a2ff) vid6_indi_pane_g1_ParamLimits

0xdd92,	// (0x0006a2ff) vid6_indi_pane_g1

0xdda4,	// (0x0006a311) vid6_indi_pane_g2_ParamLimits

0xdda4,	// (0x0006a311) vid6_indi_pane_g2

0xddb6,	// (0x0006a323) vid6_indi_pane_g3_ParamLimits

0xddb6,	// (0x0006a323) vid6_indi_pane_g3

0xddcb,	// (0x0006a338) vid6_indi_pane_g4_ParamLimits

0xddcb,	// (0x0006a338) vid6_indi_pane_g4

0xdde0,	// (0x0006a34d) vid6_indi_pane_g5_ParamLimits

0xdde0,	// (0x0006a34d) vid6_indi_pane_g5

0x0004,

0xf9ad,	// (0x0006bf1a) vid6_indi_pane_g_ParamLimits

0xf9ad,	// (0x0006bf1a) vid6_indi_pane_g

0xddfa,	// (0x0006a367) vid6_indi_pane_t1_ParamLimits

0xddfa,	// (0x0006a367) vid6_indi_pane_t1

0xde10,	// (0x0006a37d) vid6_indi_pane_t2_ParamLimits

0xde10,	// (0x0006a37d) vid6_indi_pane_t2

0xde38,	// (0x0006a3a5) vid6_indi_pane_t3_ParamLimits

0xde38,	// (0x0006a3a5) vid6_indi_pane_t3

0xde8d,	// (0x0006a3fa) vid6_indi_pane_t4_ParamLimits

0xde8d,	// (0x0006a3fa) vid6_indi_pane_t4

0x0003,

0xf9b8,	// (0x0006bf25) vid6_indi_pane_t_ParamLimits

0xf9b8,	// (0x0006bf25) vid6_indi_pane_t

0xdeb1,	// (0x0006a41e) wait_bar_pane_cp08

0x78a9,	// (0x00063e16) main_cset_text2_pane_t1_ParamLimits

0x78a9,	// (0x00063e16) main_cset_text2_pane_t1

0x77c0,	// (0x00063d2d) listscroll_gen_pane_cp06_t1_ParamLimits

0x77c0,	// (0x00063d2d) listscroll_gen_pane_cp06_t1

0x102d,	// (0x0005d59a) main_cam6_set_pane

0x61d9,	// (0x00062746) bg_tb_trans_pane_cp06_ParamLimits

0x61ef,	// (0x0006275c) cam4_indicators_pane_g1_ParamLimits

0x6200,	// (0x0006276d) cam4_indicators_pane_g2_ParamLimits

0xf76a,	// (0x0006bcd7) cam4_indicators_pane_g_ParamLimits

0x621e,	// (0x0006278b) cam4_indicators_pane_t1_ParamLimits

0x4225,	// (0x00060792) bg_tb_trans_pane_cp07_ParamLimits

0x62cf,	// (0x0006283c) vid4_indicators_pane_g1_ParamLimits

0x62e3,	// (0x00062850) vid4_indicators_pane_g2_ParamLimits

0x62f7,	// (0x00062864) vid4_indicators_pane_g3_ParamLimits

0x6308,	// (0x00062875) vid4_indicators_pane_g4_ParamLimits

0xf77c,	// (0x0006bce9) vid4_indicators_pane_g_ParamLimits

0x6324,	// (0x00062891) vid4_indicators_pane_t1_ParamLimits

0x7354,	// (0x000638c1) vid4_progress_pane_g1_ParamLimits

0x7366,	// (0x000638d3) vid4_progress_pane_g2_ParamLimits

0xae8a,	// (0x000673f7) vid4_progress_pane_g3_ParamLimits

0x7376,	// (0x000638e3) vid4_progress_pane_g4_ParamLimits

0xf8f7,	// (0x0006be64) vid4_progress_pane_g_ParamLimits

0x7394,	// (0x00063901) vid4_progress_pane_t1_ParamLimits

0x73a9,	// (0x00063916) vid4_progress_pane_t2_ParamLimits

0x73bf,	// (0x0006392c) vid4_progress_pane_t3_ParamLimits

0xf902,	// (0x0006be6f) vid4_progress_pane_t_ParamLimits

0x73d5,	// (0x00063942) wait_bar_pane_cp07_ParamLimits

0x78e3,	// (0x00063e50) main_cam6_set_pane_g2_ParamLimits

0x78e3,	// (0x00063e50) main_cam6_set_pane_g2

0x78ef,	// (0x00063e5c) main_cset6_listscroll_pane_ParamLimits

0x78ef,	// (0x00063e5c) main_cset6_listscroll_pane

0x791a,	// (0x00063e87) main_cset6_slider_pane_ParamLimits

0x791a,	// (0x00063e87) main_cset6_slider_pane

0x7926,	// (0x00063e93) main_cset6_text2_pane_ParamLimits

0x7926,	// (0x00063e93) main_cset6_text2_pane

0xdec0,	// (0x0006a42d) main_cset6_text_pane

0xdec8,	// (0x0006a435) main_cset_list_pane_copy1_ParamLimits

0xdec8,	// (0x0006a435) main_cset_list_pane_copy1

0xded8,	// (0x0006a445) scroll_pane_cp028_copy1

0x7939,	// (0x00063ea6) cset_list_set_pane_copy1

0x7952,	// (0x00063ebf) aid_position_infowindow_above_copy1

0x795a,	// (0x00063ec7) aid_position_infowindow_below_copy1

0x7962,	// (0x00063ecf) cset_list_set_pane_g1_copy1

0x6b77,	// (0x000630e4) cset_list_set_pane_g3_copy1_ParamLimits

0x6b77,	// (0x000630e4) cset_list_set_pane_g3_copy1

0x9ec9,	// (0x00066436) cset_list_set_pane_t1_copy1_ParamLimits

0x9ec9,	// (0x00066436) cset_list_set_pane_t1_copy1

0xa54e,	// (0x00066abb) list_highlight_pane_cp021_copy1_ParamLimits

0xa54e,	// (0x00066abb) list_highlight_pane_cp021_copy1

0xdee1,	// (0x0006a44e) cset6_slider_pane_ParamLimits

0xdee1,	// (0x0006a44e) cset6_slider_pane

0xdf0d,	// (0x0006a47a) main_cset6_slider_pane_g1_ParamLimits

0xdf0d,	// (0x0006a47a) main_cset6_slider_pane_g1

0x796a,	// (0x00063ed7) main_cset6_slider_pane_g2_ParamLimits

0x796a,	// (0x00063ed7) main_cset6_slider_pane_g2

0xdf35,	// (0x0006a4a2) main_cset6_slider_pane_g3_ParamLimits

0xdf35,	// (0x0006a4a2) main_cset6_slider_pane_g3

0x7992,	// (0x00063eff) main_cset6_slider_pane_g4_ParamLimits

0x7992,	// (0x00063eff) main_cset6_slider_pane_g4

0x799e,	// (0x00063f0b) main_cset6_slider_pane_g5_ParamLimits

0x799e,	// (0x00063f0b) main_cset6_slider_pane_g5

0xd797,	// (0x00069d04) main_cset6_slider_pane_g7_ParamLimits

0xd797,	// (0x00069d04) main_cset6_slider_pane_g7

0xd7a3,	// (0x00069d10) main_cset6_slider_pane_g8_ParamLimits

0xd7a3,	// (0x00069d10) main_cset6_slider_pane_g8

0x79ac,	// (0x00063f19) main_cset6_slider_pane_g9_ParamLimits

0x79ac,	// (0x00063f19) main_cset6_slider_pane_g9

0x79b8,	// (0x00063f25) main_cset6_slider_pane_g10_ParamLimits

0x79b8,	// (0x00063f25) main_cset6_slider_pane_g10

0x79c4,	// (0x00063f31) main_cset6_slider_pane_g11_ParamLimits

0x79c4,	// (0x00063f31) main_cset6_slider_pane_g11

0x79d0,	// (0x00063f3d) main_cset6_slider_pane_g12_ParamLimits

0x79d0,	// (0x00063f3d) main_cset6_slider_pane_g12

0x79dc,	// (0x00063f49) main_cset6_slider_pane_g13_ParamLimits

0x79dc,	// (0x00063f49) main_cset6_slider_pane_g13

0x79e8,	// (0x00063f55) main_cset6_slider_pane_g14_ParamLimits

0x79e8,	// (0x00063f55) main_cset6_slider_pane_g14

0x79f4,	// (0x00063f61) main_cset6_slider_pane_g15_ParamLimits

0x79f4,	// (0x00063f61) main_cset6_slider_pane_g15

0x7a0c,	// (0x00063f79) main_cset6_slider_pane_g16_ParamLimits

0x7a0c,	// (0x00063f79) main_cset6_slider_pane_g16

0x7a1a,	// (0x00063f87) main_cset6_slider_pane_g17_ParamLimits

0x7a1a,	// (0x00063f87) main_cset6_slider_pane_g17

0x0011,

0xf9c1,	// (0x0006bf2e) main_cset6_slider_pane_g_ParamLimits

0xf9c1,	// (0x0006bf2e) main_cset6_slider_pane_g

0xdf41,	// (0x0006a4ae) main_cset6_slider_pane_t1_ParamLimits

0xdf41,	// (0x0006a4ae) main_cset6_slider_pane_t1

0x7a40,	// (0x00063fad) main_cset6_slider_pane_t2_ParamLimits

0x7a40,	// (0x00063fad) main_cset6_slider_pane_t2

0x7a6b,	// (0x00063fd8) main_cset6_slider_pane_t3_ParamLimits

0x7a6b,	// (0x00063fd8) main_cset6_slider_pane_t3

0x7a96,	// (0x00064003) main_cset6_slider_pane_t4_ParamLimits

0x7a96,	// (0x00064003) main_cset6_slider_pane_t4

0x7ac1,	// (0x0006402e) main_cset6_slider_pane_t5_ParamLimits

0x7ac1,	// (0x0006402e) main_cset6_slider_pane_t5

0xdf82,	// (0x0006a4ef) main_cset6_slider_pane_t7_ParamLimits

0xdf82,	// (0x0006a4ef) main_cset6_slider_pane_t7

0x7aee,	// (0x0006405b) main_cset6_slider_pane_t8_ParamLimits

0x7aee,	// (0x0006405b) main_cset6_slider_pane_t8

0x7b12,	// (0x0006407f) main_cset6_slider_pane_t9_ParamLimits

0x7b12,	// (0x0006407f) main_cset6_slider_pane_t9

0x7b36,	// (0x000640a3) main_cset6_slider_pane_t10_ParamLimits

0x7b36,	// (0x000640a3) main_cset6_slider_pane_t10

0x7b5a,	// (0x000640c7) main_cset6_slider_pane_t11_ParamLimits

0x7b5a,	// (0x000640c7) main_cset6_slider_pane_t11

0xdfb8,	// (0x0006a525) main_cset6_slider_pane_t14_ParamLimits

0xdfb8,	// (0x0006a525) main_cset6_slider_pane_t14

0xdff1,	// (0x0006a55e) main_cset6_slider_pane_t15_ParamLimits

0xdff1,	// (0x0006a55e) main_cset6_slider_pane_t15

0x000b,

0xf9e6,	// (0x0006bf53) main_cset6_slider_pane_t_ParamLimits

0xf9e6,	// (0x0006bf53) main_cset6_slider_pane_t

0xde60,	// (0x0006a3cd) cset_slider_pane_g1_copy1

0xde69,	// (0x0006a3d6) cset_slider_pane_g2_copy1

0xde72,	// (0x0006a3df) cset_slider_pane_g3_copy1

0x9880,	// (0x00065ded) bg_popup_sub_pane_cp011_copy1

0xe02a,	// (0x0006a597) main_cset_text_pane_g1_copy1

0xd8db,	// (0x00069e48) main_cset_text_pane_t1_copy1

0xd8e9,	// (0x00069e56) main_cset_text_pane_t2_copy1

0xd8f7,	// (0x00069e64) main_cset_text_pane_t3_copy1

0xd905,	// (0x00069e72) main_cset_text_pane_t4_copy1

0xd913,	// (0x00069e80) main_cset_text_pane_t5_copy1

0xe032,	// (0x0006a59f) main_cset_text_pane_t6_copy1

0xe040,	// (0x0006a5ad) main_cset_text_pane_t7_copy1

0x7bf5,	// (0x00064162) main_cset_text2_pane_t1_copy1

0x4225,	// (0x00060792) main_ncimui_pane

0x4284,	// (0x000607f1) popup_query_ncimui_window_ParamLimits

0x4284,	// (0x000607f1) popup_query_ncimui_window

0x9e68,	// (0x000663d5) field_cale_ev2_pane_g4_ParamLimits

0x9e68,	// (0x000663d5) field_cale_ev2_pane_g4

0x5b6a,	// (0x000620d7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5b6a,	// (0x000620d7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf70d,	// (0x0006bc7a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf70d,	// (0x0006bc7a) cell_video_dialer_keypad_pane_g

0x5b82,	// (0x000620ef) cell_video_dialer_keypad_pane_t1

0x9880,	// (0x00065ded) bg_popup_window_pane_cp012

0xb056,	// (0x000675c3) heading_pane_cp06

0xe06c,	// (0x0006a5d9) ncim_query_content_pane

0x9880,	// (0x00065ded) bg_popup_heading_pane_cp01

0xe074,	// (0x0006a5e1) ncim_heading_pane_t1

0xe082,	// (0x0006a5ef) ncim_indicator_popup_pane

0xe094,	// (0x0006a601) ncim_query_button_pane

0xe0a8,	// (0x0006a615) ncim_query_content_pane_t1

0xe0ba,	// (0x0006a627) ncim_query_content_pane_t2

0x0005,

0xfa2a,	// (0x0006bf97) ncim_query_content_pane_t

0xe0f4,	// (0x0006a661) ncim_query_list_pane

0xe106,	// (0x0006a673) ncim_query_popup_pane

0xe082,	// (0x0006a5ef) ncim_indicator_popup_pane_ParamLimits

0x7d4f,	// (0x000642bc) ncim_query_content_pane_g1_ParamLimits

0x7d4f,	// (0x000642bc) ncim_query_content_pane_g1

0xe0a8,	// (0x0006a615) ncim_query_content_pane_t1_ParamLimits

0xe0ba,	// (0x0006a627) ncim_query_content_pane_t2_ParamLimits

0x7d5b,	// (0x000642c8) ncim_query_content_pane_t3_ParamLimits

0x7d5b,	// (0x000642c8) ncim_query_content_pane_t3

0x7d78,	// (0x000642e5) ncim_query_content_pane_t4_ParamLimits

0x7d78,	// (0x000642e5) ncim_query_content_pane_t4

0x7d95,	// (0x00064302) ncim_query_content_pane_t5_ParamLimits

0x7d95,	// (0x00064302) ncim_query_content_pane_t5

0xe0cc,	// (0x0006a639) ncim_query_content_pane_t6_ParamLimits

0xe0cc,	// (0x0006a639) ncim_query_content_pane_t6

0xfa2a,	// (0x0006bf97) ncim_query_content_pane_t_ParamLimits

0xe0f4,	// (0x0006a661) ncim_query_list_pane_ParamLimits

0xe106,	// (0x0006a673) ncim_query_popup_pane_ParamLimits

0xe11a,	// (0x0006a687) wait_bar_pane_cp04

0x9880,	// (0x00065ded) input_focus_pane_cp011

0xe122,	// (0x0006a68f) ncim_query_popup_pane_t1

0xe130,	// (0x0006a69d) ncim_list_query_list_pane_ParamLimits

0xe130,	// (0x0006a69d) ncim_list_query_list_pane

0x9880,	// (0x00065ded) bg_button_pane_cp027

0xe143,	// (0x0006a6b0) ncim_query_button_pane_g1

0x9880,	// (0x00065ded) list_highlight_pane_cp012

0xe14d,	// (0x0006a6ba) ncim_list_query_list_pane_g1

0xe155,	// (0x0006a6c2) ncim_list_query_list_pane_t1

0x620f,	// (0x0006277c) cam4_indicators_pane_g3_ParamLimits

0x620f,	// (0x0006277c) cam4_indicators_pane_g3

0x6314,	// (0x00062881) vid4_indicators_pane_g5_ParamLimits

0x6314,	// (0x00062881) vid4_indicators_pane_g5

0x7385,	// (0x000638f2) vid4_progress_pane_g5_ParamLimits

0x7385,	// (0x000638f2) vid4_progress_pane_g5

0x7c3b,	// (0x000641a8) main_ncimui_pane_g1

0x7ca3,	// (0x00064210) ncimui_group_query_pane_ParamLimits

0x7ca3,	// (0x00064210) ncimui_group_query_pane

0x7ceb,	// (0x00064258) ncimui_list_pane_ParamLimits

0x7ceb,	// (0x00064258) ncimui_list_pane

0x7d12,	// (0x0006427f) ncimui_text_pane_ParamLimits

0x7d12,	// (0x0006427f) ncimui_text_pane

0x7db2,	// (0x0006431f) ncimui_text_pane_t1_ParamLimits

0x7db2,	// (0x0006431f) ncimui_text_pane_t1

0xe163,	// (0x0006a6d0) ncimui_list_single_graphic_pane_ParamLimits

0xe163,	// (0x0006a6d0) ncimui_list_single_graphic_pane

0x7dd1,	// (0x0006433e) ncimui_query_pane_ParamLimits

0x7dd1,	// (0x0006433e) ncimui_query_pane

0x9880,	// (0x00065ded) list_highlight_pane_cp013

0xe173,	// (0x0006a6e0) ncim_list_query_list_pane_t1_copy1

0xe14d,	// (0x0006a6ba) ncim_list_single_graphic_pane_g1

0xe181,	// (0x0006a6ee) ncim_query_button_pane_cp01

0xe18d,	// (0x0006a6fa) ncim_query_entry_pane_ParamLimits

0xe18d,	// (0x0006a6fa) ncim_query_entry_pane

0xe1a0,	// (0x0006a70d) ncimui_query_pane_g1

0xe1ac,	// (0x0006a719) ncimui_query_pane_t1_ParamLimits

0xe1ac,	// (0x0006a719) ncimui_query_pane_t1

0xa54e,	// (0x00066abb) input_focus_pane_cp012

0xe1c5,	// (0x0006a732) ncim_query_entry_pane_t1

0xa7a1,	// (0x00066d0e) main_im_pane_ParamLimits

0x4225,	// (0x00060792) main_mobtv_pane_ParamLimits

0x4225,	// (0x00060792) main_mobtv_pane

0x7a28,	// (0x00063f95) main_cset6_slider_pane_g18_ParamLimits

0x7a28,	// (0x00063f95) main_cset6_slider_pane_g18

0x7a34,	// (0x00063fa1) main_cset6_slider_pane_g19_ParamLimits

0x7a34,	// (0x00063fa1) main_cset6_slider_pane_g19

0xd648,	// (0x00069bb5) bg_main_mobtv_pane_ParamLimits

0xd648,	// (0x00069bb5) bg_main_mobtv_pane

0x7de4,	// (0x00064351) main_mobtv_info_pane

0x7def,	// (0x0006435c) main_mobtv_loading_pane_ParamLimits

0x7def,	// (0x0006435c) main_mobtv_loading_pane

0xe1d7,	// (0x0006a744) main_mobtv_pg_channel_list_pane

0xe1e1,	// (0x0006a74e) main_mobtv_pg_hdr_pane

0x7dfc,	// (0x00064369) main_mobtv_programe_curr_pane_ParamLimits

0x7dfc,	// (0x00064369) main_mobtv_programe_curr_pane

0x7e09,	// (0x00064376) main_mobtv_programe_next_pane_ParamLimits

0x7e09,	// (0x00064376) main_mobtv_programe_next_pane

0xe1ea,	// (0x0006a757) popup_mobtv_noti_window

0xcc13,	// (0x00069180) main_tv_pg_hdr_pane_g1

0xe1f2,	// (0x0006a75f) main_tv_pg_hdr_pane_g2

0xe1fa,	// (0x0006a767) main_tv_pg_hdr_pane_g3

0xe202,	// (0x0006a76f) main_tv_pg_hdr_pane_g4

0xe20a,	// (0x0006a777) main_tv_pg_hdr_pane_g5

0xe214,	// (0x0006a781) main_tv_pg_hdr_pane_g6

0xe21e,	// (0x0006a78b) main_tv_pg_hdr_pane_g7

0xe228,	// (0x0006a795) main_tv_pg_hdr_pane_g8

0xe232,	// (0x0006a79f) main_tv_pg_hdr_pane_g9

0xe23c,	// (0x0006a7a9) main_tv_pg_hdr_pane_g10

0xe246,	// (0x0006a7b3) main_tv_pg_hdr_pane_g11

0x000a,

0x0939,	// (0x0005cea6) main_tv_pg_hdr_pane_g

0xe250,	// (0x0006a7bd) main_tv_pg_hdr_pane_t1

0xe25e,	// (0x0006a7cb) main_tv_pg_hdr_pane_t2

0xe26c,	// (0x0006a7d9) main_tv_pg_hdr_pane_t3

0xe27c,	// (0x0006a7e9) main_tv_pg_hdr_pane_t4

0xe28c,	// (0x0006a7f9) main_tv_pg_hdr_pane_t5

0x0004,

0x0950,	// (0x0005cebd) main_tv_pg_hdr_pane_t

0xe29c,	// (0x0006a809) single_mobtv_pg_channel_pane_ParamLimits

0xe29c,	// (0x0006a809) single_mobtv_pg_channel_pane

0xe2ae,	// (0x0006a81b) single_mobtv_pg_channel_table_pane

0xe2b7,	// (0x0006a824) single_mobtv_pg_channel_thumb_pane

0xe2c0,	// (0x0006a82d) single_tv_pg_channel_pane_g1

0xe2c9,	// (0x0006a836) single_tv_pg_channel_pane_g2

0x0001,

0x095b,	// (0x0005cec8) single_tv_pg_channel_pane_g

0xce73,	// (0x000693e0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce73,	// (0x000693e0) bg_single_mobtv_pg_channel_thumb_pane

0xe2d2,	// (0x0006a83f) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe2d2,	// (0x0006a83f) single_mobtv_pg_channel_thumb_pane_g1

0xe2e0,	// (0x0006a84d) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe2e0,	// (0x0006a84d) single_mobtv_pg_channel_thumb_pane_g2

0xe2ec,	// (0x0006a859) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe2ec,	// (0x0006a859) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0x0960,	// (0x0005cecd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0x0960,	// (0x0005cecd) single_mobtv_pg_channel_thumb_pane_g

0xe2f8,	// (0x0006a865) single_mobtv_pg_channel_thumb_pane_t1

0xe306,	// (0x0006a873) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0x0967,	// (0x0005ced4) single_mobtv_pg_channel_thumb_pane_t

0xcc13,	// (0x00069180) bg_single_mobtv_pg_channel_table_pane_g1

0xcc13,	// (0x00069180) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0412,	// (0x0005c97f) bg_single_mobtv_pg_channel_table_pane_g

0xe314,	// (0x0006a881) single_mobtv_pg_channel_table_pane_t1

0xe322,	// (0x0006a88f) single_mobtv_pg_channel_table_pane_t2

0x0001,

0x096c,	// (0x0005ced9) single_mobtv_pg_channel_table_pane_t

0x7e1e,	// (0x0006438b) main_mobtv_info_pane_g1_ParamLimits

0x7e1e,	// (0x0006438b) main_mobtv_info_pane_g1

0x7e3a,	// (0x000643a7) main_mobtv_info_pane_t1_ParamLimits

0x7e3a,	// (0x000643a7) main_mobtv_info_pane_t1

0x7eb2,	// (0x0006441f) main_mobtv_info_pane_t2_ParamLimits

0x7eb2,	// (0x0006441f) main_mobtv_info_pane_t2

0x0002,

0xfa3c,	// (0x0006bfa9) main_mobtv_info_pane_t_ParamLimits

0xfa3c,	// (0x0006bfa9) main_mobtv_info_pane_t

0x7f41,	// (0x000644ae) wait_bar_pane_cp05

0x7f53,	// (0x000644c0) main_mobtv_loading_pane_g1_ParamLimits

0x7f53,	// (0x000644c0) main_mobtv_loading_pane_g1

0x7f61,	// (0x000644ce) main_mobtv_loading_pane_g2_ParamLimits

0x7f61,	// (0x000644ce) main_mobtv_loading_pane_g2

0x7f6d,	// (0x000644da) main_mobtv_loading_pane_g3_ParamLimits

0x7f6d,	// (0x000644da) main_mobtv_loading_pane_g3

0x0002,

0xfa43,	// (0x0006bfb0) main_mobtv_loading_pane_g_ParamLimits

0xfa43,	// (0x0006bfb0) main_mobtv_loading_pane_g

0xe330,	// (0x0006a89d) main_mobtv_loading_pane_t1_ParamLimits

0xe330,	// (0x0006a89d) main_mobtv_loading_pane_t1

0xe348,	// (0x0006a8b5) main_mobtv_loading_pane_t2_ParamLimits

0xe348,	// (0x0006a8b5) main_mobtv_loading_pane_t2

0x0001,

0x0984,	// (0x0005cef1) main_mobtv_loading_pane_t_ParamLimits

0x0984,	// (0x0005cef1) main_mobtv_loading_pane_t

0x7f7b,	// (0x000644e8) wait_bar_pane_cp06_ParamLimits

0x7f7b,	// (0x000644e8) wait_bar_pane_cp06

0xe36c,	// (0x0006a8d9) main_mobtv_programe_curr_pane_t1

0xe37a,	// (0x0006a8e7) main_mobtv_programe_curr_pane_t2

0x0001,

0x0989,	// (0x0005cef6) main_mobtv_programe_curr_pane_t

0xe388,	// (0x0006a8f5) main_mobtv_programe_next_pane_t1

0xe396,	// (0x0006a903) main_mobtv_programe_next_pane_t2

0xe3a4,	// (0x0006a911) main_mobtv_programe_next_pane_t3

0x0002,

0x098e,	// (0x0005cefb) main_mobtv_programe_next_pane_t

0x9880,	// (0x00065ded) bg_popup_mobtv_noti_window_pane

0xe3b2,	// (0x0006a91f) popup_mobtv_noti_window_g1

0xe3ba,	// (0x0006a927) popup_mobtv_noti_window_t1

0xe3c8,	// (0x0006a935) popup_mobtv_noti_window_t2

0x0001,

0x0995,	// (0x0005cf02) popup_mobtv_noti_window_t

0xcc13,	// (0x00069180) bg_popup_mobtv_noti_window_pane_g1

0x102d,	// (0x0005d59a) sc_clock_pane

0x102d,	// (0x0005d59a) main_fs_bigclock_pane

0x759a,	// (0x00063b07) blid2_tripm_pane_t4_ParamLimits

0x759a,	// (0x00063b07) blid2_tripm_pane_t4

0x7f87,	// (0x000644f4) sc_clock_pane_g1_ParamLimits

0x7f87,	// (0x000644f4) sc_clock_pane_g1

0x7f95,	// (0x00064502) sc_clock_pane_t1_ParamLimits

0x7f95,	// (0x00064502) sc_clock_pane_t1

0x7fa8,	// (0x00064515) sc_clock_pane_t2_ParamLimits

0x7fa8,	// (0x00064515) sc_clock_pane_t2

0x7fba,	// (0x00064527) sc_clock_pane_t3_ParamLimits

0x7fba,	// (0x00064527) sc_clock_pane_t3

0x0004,

0xfa4a,	// (0x0006bfb7) sc_clock_pane_t_ParamLimits

0xfa4a,	// (0x0006bfb7) sc_clock_pane_t

0x8e1a,	// (0x00065387) main_fs_bigclock_indicator_pane_ParamLimits

0x8e1a,	// (0x00065387) main_fs_bigclock_indicator_pane

0x8055,	// (0x000645c2) main_fs_bigclock_pane_g1_ParamLimits

0x8055,	// (0x000645c2) main_fs_bigclock_pane_g1

0x8e26,	// (0x00065393) main_fs_bigclock_pane_t1_ParamLimits

0x8e26,	// (0x00065393) main_fs_bigclock_pane_t1

0x8e38,	// (0x000653a5) main_fs_bigclock_pane_t2_ParamLimits

0x8e38,	// (0x000653a5) main_fs_bigclock_pane_t2

0x8e4a,	// (0x000653b7) main_fs_bigclock_pane_t3_ParamLimits

0x8e4a,	// (0x000653b7) main_fs_bigclock_pane_t3

0x0002,

0xfbaa,	// (0x0006c117) main_fs_bigclock_pane_t_ParamLimits

0xfbaa,	// (0x0006c117) main_fs_bigclock_pane_t

0xec73,	// (0x0006b1e0) main_fs_bigclock_indicator_pane_g1

0xe09c,	// (0x0006a609) ncim_query_content_pane_g2_ParamLimits

0xe09c,	// (0x0006a609) ncim_query_content_pane_g2

0x0001,

0xfa25,	// (0x0006bf92) ncim_query_content_pane_g_ParamLimits

0xfa25,	// (0x0006bf92) ncim_query_content_pane_g

0x7fce,	// (0x0006453b) sc_clock_pane_t4_ParamLimits

0x7fce,	// (0x0006453b) sc_clock_pane_t4

0x4225,	// (0x00060792) main_radioblah_pane

0xd5b9,	// (0x00069b26) cell_call4_button_pane_t1_copy1_ParamLimits

0xd5b9,	// (0x00069b26) cell_call4_button_pane_t1_copy1

0x7c55,	// (0x000641c2) main_ncimui_pane_t1_ParamLimits

0x7c55,	// (0x000641c2) main_ncimui_pane_t1

0x7c6f,	// (0x000641dc) main_ncimui_pane_t2_ParamLimits

0x7c6f,	// (0x000641dc) main_ncimui_pane_t2

0x0002,

0xfa1e,	// (0x0006bf8b) main_ncimui_pane_t_ParamLimits

0xfa1e,	// (0x0006bf8b) main_ncimui_pane_t

0xe503,	// (0x0006aa70) main_radioblah_anim_pane_ParamLimits

0xe503,	// (0x0006aa70) main_radioblah_anim_pane

0xe514,	// (0x0006aa81) main_radioblah_info_pane_ParamLimits

0xe514,	// (0x0006aa81) main_radioblah_info_pane

0xe528,	// (0x0006aa95) main_radioblah_pane_t1_ParamLimits

0xe528,	// (0x0006aa95) main_radioblah_pane_t1

0xe544,	// (0x0006aab1) main_radioblah_pane_t2_ParamLimits

0xe544,	// (0x0006aab1) main_radioblah_pane_t2

0x0003,

0x09bb,	// (0x0005cf28) main_radioblah_pane_t_ParamLimits

0x09bb,	// (0x0005cf28) main_radioblah_pane_t

0x80a7,	// (0x00064614) main_radioblah_rocker_ctrl_pane_ParamLimits

0x80a7,	// (0x00064614) main_radioblah_rocker_ctrl_pane

0xe58c,	// (0x0006aaf9) main_radioblah_info_pane_t1_ParamLimits

0xe58c,	// (0x0006aaf9) main_radioblah_info_pane_t1

0x80ec,	// (0x00064659) main_radioblah_info_pane_t2_ParamLimits

0x80ec,	// (0x00064659) main_radioblah_info_pane_t2

0x0003,

0xfa55,	// (0x0006bfc2) main_radioblah_info_pane_t_ParamLimits

0xfa55,	// (0x0006bfc2) main_radioblah_info_pane_t

0xcc13,	// (0x00069180) main_radioblah_rocker_ctrl_pane_g1

0x819c,	// (0x00064709) main_radioblah_rocker_ctrl_pane_g2

0x81a4,	// (0x00064711) main_radioblah_rocker_ctrl_pane_g3

0x81ac,	// (0x00064719) main_radioblah_rocker_ctrl_pane_g4

0x81b4,	// (0x00064721) main_radioblah_rocker_ctrl_pane_g5

0x81bc,	// (0x00064729) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfa5e,	// (0x0006bfcb) main_radioblah_rocker_ctrl_pane_g

0x7bf5,	// (0x00064162) main_cset_text2_pane_t1_copy1_ParamLimits

0x612f,	// (0x0006269c) cam4_image_uncrop_qvga_pane

0x6284,	// (0x000627f1) vid4_image_uncrop_qcif_pane

0x7728,	// (0x00063c95) cam6_image_uncrop_qvga_pane_ParamLimits

0x7728,	// (0x00063c95) cam6_image_uncrop_qvga_pane

0xdd76,	// (0x0006a2e3) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd76,	// (0x0006a2e3) vid6_image_uncrop_qcif_pane

0x9880,	// (0x00065ded) bg_popup_preview_window_pane_cp03

0xe04e,	// (0x0006a5bb) list_cset_text2_pane

0xe056,	// (0x0006a5c3) main_cset6_text2_pane_g1

0xe05e,	// (0x0006a5cb) main_cset6_text2_pane_t1

0x81c4,	// (0x00064731) list_cset_text2_pane_t1_ParamLimits

0x81c4,	// (0x00064731) list_cset_text2_pane_t1

0x4225,	// (0x00060792) main_radioblah_pane_ParamLimits

0x7f2d,	// (0x0006449a) main_mobtv_info_pane_t3_ParamLimits

0x7f2d,	// (0x0006449a) main_mobtv_info_pane_t3

0x8095,	// (0x00064602) main_radioblah_pane_g1

0x80c0,	// (0x0006462d) main_radioblah_info_pane_g1

0x8141,	// (0x000646ae) main_radioblah_info_pane_t3_ParamLimits

0x8141,	// (0x000646ae) main_radioblah_info_pane_t3

0x2fe8,	// (0x0005f555) highlight_cell_cale_month_pane_ParamLimits

0x2fe8,	// (0x0005f555) highlight_cell_cale_month_pane

0x102d,	// (0x0005d59a) main_phob_fisheye_pane

0xcf4f,	// (0x000694bc) scroll_pane_cp0031_ParamLimits

0xcf4f,	// (0x000694bc) scroll_pane_cp0031

0xdeb1,	// (0x0006a41e) wait_bar_pane_cp08_ParamLimits

0x7939,	// (0x00063ea6) cset_list_set_pane_copy1_ParamLimits

0xe5c6,	// (0x0006ab33) highlight_cell_cale_month_pane_g1

0x81eb,	// (0x00064758) highlight_cell_cale_month_pane_t1

0xdb19,	// (0x0006a086) list_gen_pane_cp01

0xd782,	// (0x00069cef) scroll_pane_01

0xb4d4,	// (0x00067a41) list_single_double_fisheye_pane

0xa01c,	// (0x00066589) list_double_fisheye_pane_g1_ParamLimits

0xa01c,	// (0x00066589) list_double_fisheye_pane_g1

0xa028,	// (0x00066595) list_double_fisheye_pane_g2_ParamLimits

0xa028,	// (0x00066595) list_double_fisheye_pane_g2

0xb4dd,	// (0x00067a4a) list_double_fisheye_pane_g3_ParamLimits

0xb4dd,	// (0x00067a4a) list_double_fisheye_pane_g3

0x0004,

0xfa6b,	// (0x0006bfd8) list_double_fisheye_pane_g_ParamLimits

0xfa6b,	// (0x0006bfd8) list_double_fisheye_pane_g

0xa059,	// (0x000665c6) list_double_fisheye_pane_t1_ParamLimits

0xa059,	// (0x000665c6) list_double_fisheye_pane_t1

0xa074,	// (0x000665e1) list_double_fisheye_pane_t2_ParamLimits

0xa074,	// (0x000665e1) list_double_fisheye_pane_t2

0x0001,

0xfa76,	// (0x0006bfe3) list_double_fisheye_pane_t_ParamLimits

0xfa76,	// (0x0006bfe3) list_double_fisheye_pane_t

0x102d,	// (0x0005d59a) main_call5_pane

0x7ff4,	// (0x00064561) sc_swipe_pane_ParamLimits

0x7ff4,	// (0x00064561) sc_swipe_pane

0x8205,	// (0x00064772) call5_image_pane_ParamLimits

0x8205,	// (0x00064772) call5_image_pane

0x8215,	// (0x00064782) call5_swipe_1_pane_ParamLimits

0x8215,	// (0x00064782) call5_swipe_1_pane

0x8221,	// (0x0006478e) call5_swipe_2_pane_ParamLimits

0x8221,	// (0x0006478e) call5_swipe_2_pane

0x823b,	// (0x000647a8) popup_call5_audio_first_window_ParamLimits

0x823b,	// (0x000647a8) popup_call5_audio_first_window

0xce73,	// (0x000693e0) call5_swipe_1_pane_g1_ParamLimits

0xce73,	// (0x000693e0) call5_swipe_1_pane_g1

0xe5ce,	// (0x0006ab3b) call5_swipe_1_pane_g2_ParamLimits

0xe5ce,	// (0x0006ab3b) call5_swipe_1_pane_g2

0x0001,

0x09ea,	// (0x0005cf57) call5_swipe_1_pane_g_ParamLimits

0x09ea,	// (0x0005cf57) call5_swipe_1_pane_g

0xe5da,	// (0x0006ab47) call5_swipe_1_pane_t1_ParamLimits

0xe5da,	// (0x0006ab47) call5_swipe_1_pane_t1

0xce73,	// (0x000693e0) call5_swipe_2_pane_g1_ParamLimits

0xce73,	// (0x000693e0) call5_swipe_2_pane_g1

0xe5ef,	// (0x0006ab5c) call5_swipe_2_pane_g2_ParamLimits

0xe5ef,	// (0x0006ab5c) call5_swipe_2_pane_g2

0x0001,

0x09ef,	// (0x0005cf5c) call5_swipe_2_pane_g_ParamLimits

0x09ef,	// (0x0005cf5c) call5_swipe_2_pane_g

0xe5fb,	// (0x0006ab68) call5_swipe_2_pane_t1_ParamLimits

0xe5fb,	// (0x0006ab68) call5_swipe_2_pane_t1

0xe610,	// (0x0006ab7d) sc_swipe_pane_g1_ParamLimits

0xe610,	// (0x0006ab7d) sc_swipe_pane_g1

0xe61d,	// (0x0006ab8a) sc_swipe_pane_g2_ParamLimits

0xe61d,	// (0x0006ab8a) sc_swipe_pane_g2

0x0001,

0x09f4,	// (0x0005cf61) sc_swipe_pane_g_ParamLimits

0x09f4,	// (0x0005cf61) sc_swipe_pane_g

0xe629,	// (0x0006ab96) sc_swipe_pane_t1_ParamLimits

0xe629,	// (0x0006ab96) sc_swipe_pane_t1

0x102d,	// (0x0005d59a) main_cmail_launcher_pane

0x8249,	// (0x000647b6) aid_size_cell_cmail_l_ParamLimits

0x8249,	// (0x000647b6) aid_size_cell_cmail_l

0x8259,	// (0x000647c6) grid_cmail_l_pane_ParamLimits

0x8259,	// (0x000647c6) grid_cmail_l_pane

0x8269,	// (0x000647d6) cell_cmail_l_pane_ParamLimits

0x8269,	// (0x000647d6) cell_cmail_l_pane

0x827d,	// (0x000647ea) cell_cmail_l_pane_g1_ParamLimits

0x827d,	// (0x000647ea) cell_cmail_l_pane_g1

0x828e,	// (0x000647fb) cell_cmail_l_pane_t1_ParamLimits

0x828e,	// (0x000647fb) cell_cmail_l_pane_t1

0xe63e,	// (0x0006abab) cell_cmail_l_pane_t2_ParamLimits

0xe63e,	// (0x0006abab) cell_cmail_l_pane_t2

0x0001,

0xfa7b,	// (0x0006bfe8) cell_cmail_l_pane_t_ParamLimits

0xfa7b,	// (0x0006bfe8) cell_cmail_l_pane_t

0xa54e,	// (0x00066abb) grid_highlight_pane_cp018_ParamLimits

0xa54e,	// (0x00066abb) grid_highlight_pane_cp018

0x0e83,	// (0x0005d3f0) main2_pane_ParamLimits

0x0e83,	// (0x0005d3f0) main2_pane

0xa84c,	// (0x00066db9) popup_sp_fs_action_menu_bg_pane_g1

0xa854,	// (0x00066dc1) popup_sp_fs_action_menu_bg_pane_g2

0xa85c,	// (0x00066dc9) popup_sp_fs_action_menu_bg_pane_g3

0xa864,	// (0x00066dd1) popup_sp_fs_action_menu_bg_pane_g4

0xa86c,	// (0x00066dd9) popup_sp_fs_action_menu_bg_pane_g5

0xa874,	// (0x00066de1) popup_sp_fs_action_menu_bg_pane_g6

0xa87c,	// (0x00066de9) popup_sp_fs_action_menu_bg_pane_g7

0xa884,	// (0x00066df1) popup_sp_fs_action_menu_bg_pane_g8

0xa88c,	// (0x00066df9) popup_sp_fs_action_menu_bg_pane_g9

0xa894,	// (0x00066e01) popup_sp_fs_action_menu_bg_pane_g10

0xa894,	// (0x00066e01) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18d,	// (0x0006b6fa) popup_sp_fs_action_menu_bg_pane_g

0x9c7c,	// (0x000661e9) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t3_g3_g1

0x1e0a,	// (0x0005e377) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x2_t3_g3_g2

0x9c88,	// (0x000661f5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf23d,	// (0x0006b7aa) list_medium_line_x2_t3_g3_g_ParamLimits

0xf23d,	// (0x0006b7aa) list_medium_line_x2_t3_g3_g

0x9c94,	// (0x00066201) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9c94,	// (0x00066201) list_medium_line_x2_t3_g3_t1

0x1e16,	// (0x0005e383) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e16,	// (0x0005e383) list_medium_line_x2_t3_g3_t2

0x9ca9,	// (0x00066216) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_x2_t3_g3_t3

0x0002,

0xf244,	// (0x0006b7b1) list_medium_line_x2_t3_g3_t_ParamLimits

0xf244,	// (0x0006b7b1) list_medium_line_x2_t3_g3_t

0x9c7c,	// (0x000661e9) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t3_g2_g1

0x9c88,	// (0x000661f5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf24b,	// (0x0006b7b8) list_medium_line_x2_t3_g2_g_ParamLimits

0xf24b,	// (0x0006b7b8) list_medium_line_x2_t3_g2_g

0x9cbe,	// (0x0006622b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9cbe,	// (0x0006622b) list_medium_line_x2_t3_g2_t1

0x9cd4,	// (0x00066241) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9cd4,	// (0x00066241) list_medium_line_x2_t3_g2_t2

0x9ce6,	// (0x00066253) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9ce6,	// (0x00066253) list_medium_line_x2_t3_g2_t3

0x0002,

0xf250,	// (0x0006b7bd) list_medium_line_x2_t3_g2_t_ParamLimits

0xf250,	// (0x0006b7bd) list_medium_line_x2_t3_g2_t

0x9c7c,	// (0x000661e9) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t4_g4_g1

0x1e2a,	// (0x0005e397) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1e2a,	// (0x0005e397) list_medium_line_x2_t4_g4_g2

0x1e0a,	// (0x0005e377) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x2_t4_g4_g3

0x9d04,	// (0x00066271) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9d04,	// (0x00066271) list_medium_line_x2_t4_g4_g4

0x0003,

0xf257,	// (0x0006b7c4) list_medium_line_x2_t4_g4_g_ParamLimits

0xf257,	// (0x0006b7c4) list_medium_line_x2_t4_g4_g

0x1e36,	// (0x0005e3a3) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1e36,	// (0x0005e3a3) list_medium_line_x2_t4_g4_t1

0x1e4d,	// (0x0005e3ba) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1e4d,	// (0x0005e3ba) list_medium_line_x2_t4_g4_t2

0x1e62,	// (0x0005e3cf) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1e62,	// (0x0005e3cf) list_medium_line_x2_t4_g4_t3

0x9d10,	// (0x0006627d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9d10,	// (0x0006627d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf260,	// (0x0006b7cd) list_medium_line_x2_t4_g4_t_ParamLimits

0xf260,	// (0x0006b7cd) list_medium_line_x2_t4_g4_t

0x9c7c,	// (0x000661e9) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t2_g4_g1

0x1e2a,	// (0x0005e397) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1e2a,	// (0x0005e397) list_medium_line_x2_t2_g4_g2

0x1e0a,	// (0x0005e377) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x2_t2_g4_g3

0x9c88,	// (0x000661f5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c7,	// (0x0006b834) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c7,	// (0x0006b834) list_medium_line_x2_t2_g4_g

0x9d22,	// (0x0006628f) list_medium_line_x2_t2_g4_t1_ParamLimits

0x9d22,	// (0x0006628f) list_medium_line_x2_t2_g4_t1

0x9ca9,	// (0x00066216) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2d0,	// (0x0006b83d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2d0,	// (0x0006b83d) list_medium_line_x2_t2_g4_t

0x9c7c,	// (0x000661e9) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t2_g3_g1

0x1e0a,	// (0x0005e377) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x2_t2_g3_g2

0x9c88,	// (0x000661f5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf23d,	// (0x0006b7aa) list_medium_line_x2_t2_g3_g_ParamLimits

0xf23d,	// (0x0006b7aa) list_medium_line_x2_t2_g3_g

0x9d37,	// (0x000662a4) list_medium_line_x2_t2_g3_t1_ParamLimits

0x9d37,	// (0x000662a4) list_medium_line_x2_t2_g3_t1

0x9ca9,	// (0x00066216) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d5,	// (0x0006b842) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d5,	// (0x0006b842) list_medium_line_x2_t2_g3_t

0x31d9,	// (0x0005f746) main_sp_fs_list_pane_ParamLimits

0x31d9,	// (0x0005f746) main_sp_fs_list_pane

0x31e5,	// (0x0005f752) sp_fs_scroll_pane_ParamLimits

0x31e5,	// (0x0005f752) sp_fs_scroll_pane

0x31f1,	// (0x0005f75e) list_medium_line_x2_t3_t1

0x3201,	// (0x0005f76e) list_medium_line_x2_t3_t2

0x9d4c,	// (0x000662b9) list_medium_line_x2_t3_t3

0x0002,

0xf320,	// (0x0006b88d) list_medium_line_x2_t3_t

0x320f,	// (0x0005f77c) list_medium_line_x3_t4_t1

0x321f,	// (0x0005f78c) list_medium_line_x3_t4_t2

0x9d5a,	// (0x000662c7) list_medium_line_x3_t4_t3

0x9d4c,	// (0x000662b9) list_medium_line_x3_t4_t4

0x0003,

0xf327,	// (0x0006b894) list_medium_line_x3_t4_t

0x322d,	// (0x0005f79a) list_medium_line_x4_t5_t1

0x323d,	// (0x0005f7aa) list_medium_line_x4_t5_t2

0x9d5a,	// (0x000662c7) list_medium_line_x4_t5_t3

0x324b,	// (0x0005f7b8) list_medium_line_x4_t5_t4

0x9d4c,	// (0x000662b9) list_medium_line_x4_t5_t5

0x0004,

0xf330,	// (0x0006b89d) list_medium_line_x4_t5_t

0x9c7c,	// (0x000661e9) list_medium_line_t4_g4_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_t4_g4_g1

0x9d04,	// (0x00066271) list_medium_line_t4_g4_g2_ParamLimits

0x9d04,	// (0x00066271) list_medium_line_t4_g4_g2

0x3259,	// (0x0005f7c6) list_medium_line_t4_g4_g3_ParamLimits

0x3259,	// (0x0005f7c6) list_medium_line_t4_g4_g3

0x9c88,	// (0x000661f5) list_medium_line_t4_g4_g4_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_t4_g4_g4

0x0003,

0xf33b,	// (0x0006b8a8) list_medium_line_t4_g4_g_ParamLimits

0xf33b,	// (0x0006b8a8) list_medium_line_t4_g4_g

0x9d68,	// (0x000662d5) list_medium_line_t4_g4_t1_ParamLimits

0x9d68,	// (0x000662d5) list_medium_line_t4_g4_t1

0x9d7d,	// (0x000662ea) list_medium_line_t4_g4_t2_ParamLimits

0x9d7d,	// (0x000662ea) list_medium_line_t4_g4_t2

0x3265,	// (0x0005f7d2) list_medium_line_t4_g4_t3_ParamLimits

0x3265,	// (0x0005f7d2) list_medium_line_t4_g4_t3

0x9ca9,	// (0x00066216) list_medium_line_t4_g4_t4_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_t4_g4_t4

0x0003,

0xf344,	// (0x0006b8b1) list_medium_line_t4_g4_t_ParamLimits

0xf344,	// (0x0006b8b1) list_medium_line_t4_g4_t

0x3366,	// (0x0005f8d3) chi_dic_find_pane_g1

0x4241,	// (0x000607ae) main_tport_pane

0x9ede,	// (0x0006644b) list_medium_line_plain_t1

0x9eec,	// (0x00066459) list_medium_line_t2_g2_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_t2_g2_g1

0x9ef8,	// (0x00066465) list_medium_line_t2_g2_g2_ParamLimits

0x9ef8,	// (0x00066465) list_medium_line_t2_g2_g2

0x0001,

0xf853,	// (0x0006bdc0) list_medium_line_t2_g2_g_ParamLimits

0xf853,	// (0x0006bdc0) list_medium_line_t2_g2_g

0x6d3c,	// (0x000632a9) list_medium_line_t2_g2_t1_ParamLimits

0x6d3c,	// (0x000632a9) list_medium_line_t2_g2_t1

0x6d56,	// (0x000632c3) list_medium_line_t2_g2_t2_ParamLimits

0x6d56,	// (0x000632c3) list_medium_line_t2_g2_t2

0x0001,

0xf858,	// (0x0006bdc5) list_medium_line_t2_g2_t_ParamLimits

0xf858,	// (0x0006bdc5) list_medium_line_t2_g2_t

0x9fa0,	// (0x0006650d) aid_sp_fs_list_icon_a_sm

0x9fa8,	// (0x00066515) aid_sp_fs_list_icon_d

0x9fb0,	// (0x0006651d) aid_sp_fs_text_primary

0x9fb9,	// (0x00066526) aid_sp_fs_text_secondary

0xeac1,	// (0x0006b02e) list_medium_line

0xeac1,	// (0x0006b02e) list_medium_line_g2

0xeac1,	// (0x0006b02e) list_medium_line_g3

0xeac1,	// (0x0006b02e) list_medium_line_plain

0xeac1,	// (0x0006b02e) list_medium_line_plain_t2

0xeac1,	// (0x0006b02e) list_medium_line_plain_t3

0xeac1,	// (0x0006b02e) list_medium_line_right_icon

0xeac1,	// (0x0006b02e) list_medium_line_right_iconx2

0xeac1,	// (0x0006b02e) list_medium_line_t2

0xeac1,	// (0x0006b02e) list_medium_line_t2_g2

0xeac1,	// (0x0006b02e) list_medium_line_t2_g3

0xeac1,	// (0x0006b02e) list_medium_line_t2_right_icon

0xeac1,	// (0x0006b02e) list_medium_line_t2_right_iconx2

0xeac1,	// (0x0006b02e) list_medium_line_t3

0xeac1,	// (0x0006b02e) list_medium_line_t3_g2

0xeac1,	// (0x0006b02e) list_medium_line_t3_g3

0xeac1,	// (0x0006b02e) list_medium_line_t3_right_iconx2

0x73e5,	// (0x00063952) list_medium_line_t4_g4

0x73ee,	// (0x0006395b) list_medium_line_x2

0x73ee,	// (0x0006395b) list_medium_line_x2_t2_g2

0x73ee,	// (0x0006395b) list_medium_line_x2_t2_g3

0x73ee,	// (0x0006395b) list_medium_line_x2_t2_g4

0x73ee,	// (0x0006395b) list_medium_line_x2_t3

0x73ee,	// (0x0006395b) list_medium_line_x2_t3_g2

0x73ee,	// (0x0006395b) list_medium_line_x2_t3_g3

0x73ee,	// (0x0006395b) list_medium_line_x2_t3_g4

0x73ee,	// (0x0006395b) list_medium_line_x2_t4_g2

0x73ee,	// (0x0006395b) list_medium_line_x2_t4_g4

0x73f7,	// (0x00063964) list_medium_line_x3

0x73f7,	// (0x00063964) list_medium_line_x3_t4

0x73f7,	// (0x00063964) list_medium_line_x3_t4_g4

0x73e5,	// (0x00063952) list_medium_line_x4_t4

0x73e5,	// (0x00063952) list_medium_line_x4_t4_g7

0x73e5,	// (0x00063952) list_medium_line_x4_t5

0x7400,	// (0x0006396d) list_single_fs_dyc_pane_ParamLimits

0x7400,	// (0x0006396d) list_single_fs_dyc_pane

0x9c7c,	// (0x000661e9) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x4_t4_g7_g1

0x9fc2,	// (0x0006652f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x9fc2,	// (0x0006652f) list_medium_line_x4_t4_g7_g2

0x7b80,	// (0x000640ed) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7b80,	// (0x000640ed) list_medium_line_x4_t4_g7_g3

0x7b8f,	// (0x000640fc) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7b8f,	// (0x000640fc) list_medium_line_x4_t4_g7_g4

0x7b9b,	// (0x00064108) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7b9b,	// (0x00064108) list_medium_line_x4_t4_g7_g5

0x7baa,	// (0x00064117) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7baa,	// (0x00064117) list_medium_line_x4_t4_g7_g6

0x9fce,	// (0x0006653b) list_medium_line_x4_t4_g7_g7_ParamLimits

0x9fce,	// (0x0006653b) list_medium_line_x4_t4_g7_g7

0x0006,

0xf9ff,	// (0x0006bf6c) list_medium_line_x4_t4_g7_g_ParamLimits

0xf9ff,	// (0x0006bf6c) list_medium_line_x4_t4_g7_g

0x9fda,	// (0x00066547) list_medium_line_x4_t4_g7_t1_ParamLimits

0x9fda,	// (0x00066547) list_medium_line_x4_t4_g7_t1

0x7bb9,	// (0x00064126) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7bb9,	// (0x00064126) list_medium_line_x4_t4_g7_t2

0x7bce,	// (0x0006413b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7bce,	// (0x0006413b) list_medium_line_x4_t4_g7_t3

0x7be3,	// (0x00064150) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7be3,	// (0x00064150) list_medium_line_x4_t4_g7_t4

0x9fef,	// (0x0006655c) list_medium_line_x4_t4_g7_t5_ParamLimits

0x9fef,	// (0x0006655c) list_medium_line_x4_t4_g7_t5

0x0004,

0xfa0e,	// (0x0006bf7b) list_medium_line_x4_t4_g7_t_ParamLimits

0xfa0e,	// (0x0006bf7b) list_medium_line_x4_t4_g7_t

0xa001,	// (0x0006656e) list_single_dyc_row_pane_ParamLimits

0xa001,	// (0x0006656e) list_single_dyc_row_pane

0x81f9,	// (0x00064766) call5_gesture_pane_ParamLimits

0x81f9,	// (0x00064766) call5_gesture_pane

0x822d,	// (0x0006479a) call5_windows_pane_ParamLimits

0x822d,	// (0x0006479a) call5_windows_pane

0x82a4,	// (0x00064811) call5_swipe_1_pane_cp_ParamLimits

0x82a4,	// (0x00064811) call5_swipe_1_pane_cp

0x82b0,	// (0x0006481d) call5_swipe_2_pane_cp_ParamLimits

0x82b0,	// (0x0006481d) call5_swipe_2_pane_cp

0xb3e6,	// (0x00067953) call5_image_pane_cp

0x82bc,	// (0x00064829) popup_call5_audio_first_window_cp_ParamLimits

0x82bc,	// (0x00064829) popup_call5_audio_first_window_cp

0xe610,	// (0x0006ab7d) call5_swipe_1_pane_g1_cp_ParamLimits

0xe610,	// (0x0006ab7d) call5_swipe_1_pane_g1_cp

0xe650,	// (0x0006abbd) call5_swipe_1_pane_g2_cp

0xe629,	// (0x0006ab96) call5_swipe_1_pane_t1_cp_ParamLimits

0xe629,	// (0x0006ab96) call5_swipe_1_pane_t1_cp

0xe610,	// (0x0006ab7d) call5_swipe_2_pane_g1_cp_ParamLimits

0xe610,	// (0x0006ab7d) call5_swipe_2_pane_g1_cp

0xe658,	// (0x0006abc5) call5_swipe_2_pane_g2_cp

0xe660,	// (0x0006abcd) call5_swipe_2_pane_t1_cp_ParamLimits

0xe660,	// (0x0006abcd) call5_swipe_2_pane_t1_cp

0xa54e,	// (0x00066abb) main_sp_fs_email_pane

0xe675,	// (0x0006abe2) main_sp_fs_listscroll_pane_te

0x82ca,	// (0x00064837) popup_sp_fs_action_menu_pane_ParamLimits

0x82ca,	// (0x00064837) popup_sp_fs_action_menu_pane

0xcc13,	// (0x00069180) bg_sp_fs_ctrlbar_pane_g1

0xe67e,	// (0x0006abeb) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe687,	// (0x0006abf4) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe690,	// (0x0006abfd) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcc13,	// (0x00069180) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x09fe,	// (0x0005cf6b) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9f6,	// (0x00068f63) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9f6,	// (0x00068f63) bg_sp_fs_ctrlbar_ddmenu_pane

0xe699,	// (0x0006ac06) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe699,	// (0x0006ac06) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe6a5,	// (0x0006ac12) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe6a5,	// (0x0006ac12) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0a07,	// (0x0005cf74) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0a07,	// (0x0005cf74) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe6b1,	// (0x0006ac1e) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe6b1,	// (0x0006ac1e) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa096,	// (0x00066603) list_medium_line_t2_right_icon_g1

0x830c,	// (0x00064879) list_medium_line_t2_right_icon_t1

0x831c,	// (0x00064889) list_medium_line_t2_right_icon_t2

0x0001,

0xfa80,	// (0x0006bfed) list_medium_line_t2_right_icon_t

0xc809,	// (0x00068d76) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc809,	// (0x00068d76) bg_sp_fs_ctrlbar_pane

0x8381,	// (0x000648ee) main_sp_fs_ctrlbar_button_pane_cp01

0x8389,	// (0x000648f6) main_sp_fs_ctrlbar_ddmenu_pane

0xe703,	// (0x0006ac70) main_sp_fs_ctrlbar_pane_g1

0xe70f,	// (0x0006ac7c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0a11,	// (0x0005cf7e) main_sp_fs_ctrlbar_pane_g

0xe71b,	// (0x0006ac88) main_sp_fs_ctrlbar_pane_t1

0x8393,	// (0x00064900) main_sp_fs_ctrlbar_pane

0x83a9,	// (0x00064916) main_sp_fs_listscroll_pane_te_cp01

0x83ba,	// (0x00064927) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x83ba,	// (0x00064927) popup_sp_fs_action_menu_pane_cp01

0xa54e,	// (0x00066abb) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa54e,	// (0x00066abb) bg_sp_fs_highlight_list_pane_cp01

0xa09e,	// (0x0006660b) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xa09e,	// (0x0006660b) sp_fs_action_menu_list_gene_pane_g1

0xe74b,	// (0x0006acb8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe74b,	// (0x0006acb8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfa85,	// (0x0006bff2) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfa85,	// (0x0006bff2) sp_fs_action_menu_list_gene_pane_g

0xa0ad,	// (0x0006661a) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xa0ad,	// (0x0006661a) sp_fs_action_menu_list_gene_pane_t1

0xa0c5,	// (0x00066632) sp_fs_action_menu_list_gene_pane_ParamLimits

0xa0c5,	// (0x00066632) sp_fs_action_menu_list_gene_pane

0xe758,	// (0x0006acc5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe758,	// (0x0006acc5) popup_sp_fs_action_menu_bg_pane

0xa0e2,	// (0x0006664f) sp_fs_action_menu_list_pane_ParamLimits

0xa0e2,	// (0x0006664f) sp_fs_action_menu_list_pane

0x83e4,	// (0x00064951) sp_fs_scroll_pane_cp01_ParamLimits

0x83e4,	// (0x00064951) sp_fs_scroll_pane_cp01

0x840a,	// (0x00064977) list_medium_line_plain_t2_t1

0x841a,	// (0x00064987) list_medium_line_plain_t2_t2

0x0001,

0xfa8a,	// (0x0006bff7) list_medium_line_plain_t2_t

0x8428,	// (0x00064995) list_medium_line_plain_t3_t1

0x8438,	// (0x000649a5) list_medium_line_plain_t3_t2

0x8446,	// (0x000649b3) list_medium_line_plain_t3_t3

0x0002,

0xfa8f,	// (0x0006bffc) list_medium_line_plain_t3_t

0x9c7c,	// (0x000661e9) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t2_g2_g1

0x9c88,	// (0x000661f5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf24b,	// (0x0006b7b8) list_medium_line_x2_t2_g2_g_ParamLimits

0xf24b,	// (0x0006b7b8) list_medium_line_x2_t2_g2_g

0x9d68,	// (0x000662d5) list_medium_line_x2_t2_g2_t1_ParamLimits

0x9d68,	// (0x000662d5) list_medium_line_x2_t2_g2_t1

0x9ca9,	// (0x00066216) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa96,	// (0x0006c003) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa96,	// (0x0006c003) list_medium_line_x2_t2_g2_t

0x9c7c,	// (0x000661e9) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t4_g2_g1

0x8454,	// (0x000649c1) list_medium_line_x2_t4_g2_g2_ParamLimits

0x8454,	// (0x000649c1) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa9b,	// (0x0006c008) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa9b,	// (0x0006c008) list_medium_line_x2_t4_g2_g

0x8466,	// (0x000649d3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8466,	// (0x000649d3) list_medium_line_x2_t4_g2_t1

0x8480,	// (0x000649ed) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8480,	// (0x000649ed) list_medium_line_x2_t4_g2_t2

0x8495,	// (0x00064a02) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8495,	// (0x00064a02) list_medium_line_x2_t4_g2_t3

0x9ca9,	// (0x00066216) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_x2_t4_g2_t4

0x0003,

0xfaa0,	// (0x0006c00d) list_medium_line_x2_t4_g2_t_ParamLimits

0xfaa0,	// (0x0006c00d) list_medium_line_x2_t4_g2_t

0xa100,	// (0x0006666d) list_medium_line_t3_right_iconx2_g1

0xa096,	// (0x00066603) list_medium_line_t3_right_iconx2_g2

0x84aa,	// (0x00064a17) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfaa9,	// (0x0006c016) list_medium_line_t3_right_iconx2_g

0x84b2,	// (0x00064a1f) list_medium_line_t3_right_iconx2_t1

0x84c2,	// (0x00064a2f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfab0,	// (0x0006c01d) list_medium_line_t3_right_iconx2_t

0x9c7c,	// (0x000661e9) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x3_t4_g4_g1

0x1e0a,	// (0x0005e377) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x3_t4_g4_g2

0x9d04,	// (0x00066271) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9d04,	// (0x00066271) list_medium_line_x3_t4_g4_g3

0x84d0,	// (0x00064a3d) list_medium_line_x3_t4_g4_g4_ParamLimits

0x84d0,	// (0x00064a3d) list_medium_line_x3_t4_g4_g4

0x0003,

0xfab5,	// (0x0006c022) list_medium_line_x3_t4_g4_g_ParamLimits

0xfab5,	// (0x0006c022) list_medium_line_x3_t4_g4_g

0x84dc,	// (0x00064a49) list_medium_line_x3_t4_g4_t1_ParamLimits

0x84dc,	// (0x00064a49) list_medium_line_x3_t4_g4_t1

0x84f3,	// (0x00064a60) list_medium_line_x3_t4_g4_t2_ParamLimits

0x84f3,	// (0x00064a60) list_medium_line_x3_t4_g4_t2

0xa108,	// (0x00066675) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa108,	// (0x00066675) list_medium_line_x3_t4_g4_t3

0x8508,	// (0x00064a75) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8508,	// (0x00064a75) list_medium_line_x3_t4_g4_t4

0x0003,

0xfabe,	// (0x0006c02b) list_medium_line_x3_t4_g4_t_ParamLimits

0xfabe,	// (0x0006c02b) list_medium_line_x3_t4_g4_t

0x8525,	// (0x00064a92) list_single_dyc_row_text_pane_t1_ParamLimits

0x8525,	// (0x00064a92) list_single_dyc_row_text_pane_t1

0x855c,	// (0x00064ac9) list_single_dyc_row_text_pane_t2_ParamLimits

0x855c,	// (0x00064ac9) list_single_dyc_row_text_pane_t2

0xa11d,	// (0x0006668a) list_single_dyc_row_text_pane_t3_ParamLimits

0xa11d,	// (0x0006668a) list_single_dyc_row_text_pane_t3

0x0005,

0xfac7,	// (0x0006c034) list_single_dyc_row_text_pane_t_ParamLimits

0xfac7,	// (0x0006c034) list_single_dyc_row_text_pane_t

0xa141,	// (0x000666ae) list_single_dyc_row_pane_g1_ParamLimits

0xa141,	// (0x000666ae) list_single_dyc_row_pane_g1

0xa14d,	// (0x000666ba) list_single_dyc_row_pane_g2_ParamLimits

0xa14d,	// (0x000666ba) list_single_dyc_row_pane_g2

0xa159,	// (0x000666c6) list_single_dyc_row_pane_g3_ParamLimits

0xa159,	// (0x000666c6) list_single_dyc_row_pane_g3

0xa165,	// (0x000666d2) list_single_dyc_row_pane_g4_ParamLimits

0xa165,	// (0x000666d2) list_single_dyc_row_pane_g4

0x0003,

0xfad4,	// (0x0006c041) list_single_dyc_row_pane_g_ParamLimits

0xfad4,	// (0x0006c041) list_single_dyc_row_pane_g

0xa171,	// (0x000666de) list_single_dyc_row_text_pane_ParamLimits

0xa171,	// (0x000666de) list_single_dyc_row_text_pane

0x9880,	// (0x00065ded) bg_sp_fs_scroll_pane

0xe766,	// (0x0006acd3) thumb_sp_fs_scroll_pane

0x9eec,	// (0x00066459) list_medium_line_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_g1

0xa190,	// (0x000666fd) list_medium_line_t1_ParamLimits

0xa190,	// (0x000666fd) list_medium_line_t1

0x9c7c,	// (0x000661e9) list_medium_line_x2_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_g1

0x1e0a,	// (0x0005e377) list_medium_line_x2_g2_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x2_g2

0x0001,

0xfadd,	// (0x0006c04a) list_medium_line_x2_g_ParamLimits

0xfadd,	// (0x0006c04a) list_medium_line_x2_g

0xa1a5,	// (0x00066712) list_medium_line_x2_t1_ParamLimits

0xa1a5,	// (0x00066712) list_medium_line_x2_t1

0x9c7c,	// (0x000661e9) list_medium_line_x3_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x3_g1

0x1e0a,	// (0x0005e377) list_medium_line_x3_g2_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x3_g2

0x0001,

0xfadd,	// (0x0006c04a) list_medium_line_x3_g_ParamLimits

0xfadd,	// (0x0006c04a) list_medium_line_x3_g

0xa1a5,	// (0x00066712) list_medium_line_x3_t1_ParamLimits

0xa1a5,	// (0x00066712) list_medium_line_x3_t1

0xe76f,	// (0x0006acdc) thumb_sp_fs_scroll_pane_g1

0xe778,	// (0x0006ace5) thumb_sp_fs_scroll_pane_g2

0xe781,	// (0x0006acee) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0a78,	// (0x0005cfe5) thumb_sp_fs_scroll_pane_g

0xe76f,	// (0x0006acdc) bg_sp_fs_scroll_pane_g1

0xe778,	// (0x0006ace5) bg_sp_fs_scroll_pane_g2

0xe781,	// (0x0006acee) bg_sp_fs_scroll_pane_g3

0x0002,

0x0a78,	// (0x0005cfe5) bg_sp_fs_scroll_pane_g

0x9c7c,	// (0x000661e9) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9c7c,	// (0x000661e9) list_medium_line_x2_t3_g4_g1

0x1e2a,	// (0x0005e397) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1e2a,	// (0x0005e397) list_medium_line_x2_t3_g4_g2

0x1e0a,	// (0x0005e377) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e0a,	// (0x0005e377) list_medium_line_x2_t3_g4_g3

0x9c88,	// (0x000661f5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9c88,	// (0x000661f5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c7,	// (0x0006b834) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c7,	// (0x0006b834) list_medium_line_x2_t3_g4_g

0x867f,	// (0x00064bec) list_medium_line_x2_t3_g4_t1_ParamLimits

0x867f,	// (0x00064bec) list_medium_line_x2_t3_g4_t1

0x8695,	// (0x00064c02) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8695,	// (0x00064c02) list_medium_line_x2_t3_g4_t2

0x9ca9,	// (0x00066216) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9ca9,	// (0x00066216) list_medium_line_x2_t3_g4_t3

0x0002,

0xfae2,	// (0x0006c04f) list_medium_line_x2_t3_g4_t_ParamLimits

0xfae2,	// (0x0006c04f) list_medium_line_x2_t3_g4_t

0x9eec,	// (0x00066459) list_medium_line_g2_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_g2_g1

0x9ef8,	// (0x00066465) list_medium_line_g2_g2_ParamLimits

0x9ef8,	// (0x00066465) list_medium_line_g2_g2

0x0001,

0xf853,	// (0x0006bdc0) list_medium_line_g2_g_ParamLimits

0xf853,	// (0x0006bdc0) list_medium_line_g2_g

0xa1bb,	// (0x00066728) list_medium_line_g2_t1_ParamLimits

0xa1bb,	// (0x00066728) list_medium_line_g2_t1

0x9eec,	// (0x00066459) list_medium_line_t3_g2_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_t3_g2_g1

0x9ef8,	// (0x00066465) list_medium_line_t3_g2_g2_ParamLimits

0x9ef8,	// (0x00066465) list_medium_line_t3_g2_g2

0x0001,

0xf853,	// (0x0006bdc0) list_medium_line_t3_g2_g_ParamLimits

0xf853,	// (0x0006bdc0) list_medium_line_t3_g2_g

0x86ae,	// (0x00064c1b) list_medium_line_t3_g2_t1_ParamLimits

0x86ae,	// (0x00064c1b) list_medium_line_t3_g2_t1

0x86c5,	// (0x00064c32) list_medium_line_t3_g2_t2_ParamLimits

0x86c5,	// (0x00064c32) list_medium_line_t3_g2_t2

0x86da,	// (0x00064c47) list_medium_line_t3_g2_t3_ParamLimits

0x86da,	// (0x00064c47) list_medium_line_t3_g2_t3

0x0002,

0xfae9,	// (0x0006c056) list_medium_line_t3_g2_t_ParamLimits

0xfae9,	// (0x0006c056) list_medium_line_t3_g2_t

0xa096,	// (0x00066603) list_medium_line_right_icon_g1

0xa1d0,	// (0x0006673d) list_medium_line_right_icon_t1

0x9eec,	// (0x00066459) list_medium_line_t2_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_t2_g1

0x86ef,	// (0x00064c5c) list_medium_line_t2_t1_ParamLimits

0x86ef,	// (0x00064c5c) list_medium_line_t2_t1

0x8709,	// (0x00064c76) list_medium_line_t2_t2_ParamLimits

0x8709,	// (0x00064c76) list_medium_line_t2_t2

0x0001,

0xfaf0,	// (0x0006c05d) list_medium_line_t2_t_ParamLimits

0xfaf0,	// (0x0006c05d) list_medium_line_t2_t

0x9eec,	// (0x00066459) list_medium_line_t3_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_t3_g1

0x871e,	// (0x00064c8b) list_medium_line_t3_t1_ParamLimits

0x871e,	// (0x00064c8b) list_medium_line_t3_t1

0x8738,	// (0x00064ca5) list_medium_line_t3_t2_ParamLimits

0x8738,	// (0x00064ca5) list_medium_line_t3_t2

0x874d,	// (0x00064cba) list_medium_line_t3_t3_ParamLimits

0x874d,	// (0x00064cba) list_medium_line_t3_t3

0x0002,

0xfaf5,	// (0x0006c062) list_medium_line_t3_t_ParamLimits

0xfaf5,	// (0x0006c062) list_medium_line_t3_t

0x9eec,	// (0x00066459) list_medium_line_g3_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_g3_g1

0xa2a5,	// (0x00066812) list_medium_line_g3_g2_ParamLimits

0xa2a5,	// (0x00066812) list_medium_line_g3_g2

0x9ef8,	// (0x00066465) list_medium_line_g3_g3_ParamLimits

0x9ef8,	// (0x00066465) list_medium_line_g3_g3

0x0002,

0xfafc,	// (0x0006c069) list_medium_line_g3_g_ParamLimits

0xfafc,	// (0x0006c069) list_medium_line_g3_g

0xa2b1,	// (0x0006681e) list_medium_line_g3_t1_ParamLimits

0xa2b1,	// (0x0006681e) list_medium_line_g3_t1

0x9eec,	// (0x00066459) list_medium_line_t2_g3_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_t2_g3_g1

0xa2a5,	// (0x00066812) list_medium_line_t2_g3_g2_ParamLimits

0xa2a5,	// (0x00066812) list_medium_line_t2_g3_g2

0x9ef8,	// (0x00066465) list_medium_line_t2_g3_g3_ParamLimits

0x9ef8,	// (0x00066465) list_medium_line_t2_g3_g3

0x0002,

0xfafc,	// (0x0006c069) list_medium_line_t2_g3_g_ParamLimits

0xfafc,	// (0x0006c069) list_medium_line_t2_g3_g

0x8762,	// (0x00064ccf) list_medium_line_t2_g3_t1_ParamLimits

0x8762,	// (0x00064ccf) list_medium_line_t2_g3_t1

0x877c,	// (0x00064ce9) list_medium_line_t2_g3_t2_ParamLimits

0x877c,	// (0x00064ce9) list_medium_line_t2_g3_t2

0x0001,

0xfb03,	// (0x0006c070) list_medium_line_t2_g3_t_ParamLimits

0xfb03,	// (0x0006c070) list_medium_line_t2_g3_t

0x9eec,	// (0x00066459) list_medium_line_t3_g3_g1_ParamLimits

0x9eec,	// (0x00066459) list_medium_line_t3_g3_g1

0xa2a5,	// (0x00066812) list_medium_line_t3_g3_g2_ParamLimits

0xa2a5,	// (0x00066812) list_medium_line_t3_g3_g2

0x9ef8,	// (0x00066465) list_medium_line_t3_g3_g3_ParamLimits

0x9ef8,	// (0x00066465) list_medium_line_t3_g3_g3

0x0002,

0xfafc,	// (0x0006c069) list_medium_line_t3_g3_g_ParamLimits

0xfafc,	// (0x0006c069) list_medium_line_t3_g3_g

0x8791,	// (0x00064cfe) list_medium_line_t3_g3_t1_ParamLimits

0x8791,	// (0x00064cfe) list_medium_line_t3_g3_t1

0x87a5,	// (0x00064d12) list_medium_line_t3_g3_t2_ParamLimits

0x87a5,	// (0x00064d12) list_medium_line_t3_g3_t2

0x87b7,	// (0x00064d24) list_medium_line_t3_g3_t3_ParamLimits

0x87b7,	// (0x00064d24) list_medium_line_t3_g3_t3

0x0002,

0xfb08,	// (0x0006c075) list_medium_line_t3_g3_t_ParamLimits

0xfb08,	// (0x0006c075) list_medium_line_t3_g3_t

0xa100,	// (0x0006666d) list_medium_line_right_iconx2_g1

0xa096,	// (0x00066603) list_medium_line_right_iconx2_g2

0x0001,

0xfb0f,	// (0x0006c07c) list_medium_line_right_iconx2_g

0xa2c6,	// (0x00066833) list_medium_line_right_iconx2_t1

0xa100,	// (0x0006666d) list_medium_line_t2_right_iconx2_g1

0xa096,	// (0x00066603) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfb0f,	// (0x0006c07c) list_medium_line_t2_right_iconx2_g

0x87c9,	// (0x00064d36) list_medium_line_t2_right_iconx2_t1

0x87d9,	// (0x00064d46) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfb14,	// (0x0006c081) list_medium_line_t2_right_iconx2_t

0xa2d4,	// (0x00066841) list_medium_line_x4_t4_t1

0x87e7,	// (0x00064d54) list_medium_line_x4_t4_t2

0x87f7,	// (0x00064d64) list_medium_line_x4_t4_t3

0x8807,	// (0x00064d74) list_medium_line_x4_t4_t4

0x0003,

0xfb19,	// (0x0006c086) list_medium_line_x4_t4_t

0x8841,	// (0x00064dae) tport_appsw_pane_ParamLimits

0x8841,	// (0x00064dae) tport_appsw_pane

0x884f,	// (0x00064dbc) tport_contact_pane_ParamLimits

0x884f,	// (0x00064dbc) tport_contact_pane

0x885f,	// (0x00064dcc) tport_listscroll_pane_ParamLimits

0x885f,	// (0x00064dcc) tport_listscroll_pane

0x886f,	// (0x00064ddc) cell_tport_appsw_pane_ParamLimits

0x886f,	// (0x00064ddc) cell_tport_appsw_pane

0xced8,	// (0x00069445) tport_appsw_pane_g1_ParamLimits

0xced8,	// (0x00069445) tport_appsw_pane_g1

0xe78a,	// (0x0006acf7) tport_contact_pane_g1

0xe122,	// (0x0006a68f) tport_contact_pane_t1

0xe793,	// (0x0006ad00) tport_contact_pane_t2

0x0001,

0x0abf,	// (0x0005d02c) tport_contact_pane_t

0xe7a1,	// (0x0006ad0e) list_tport_pane

0xe7aa,	// (0x0006ad17) scroll_pane_cp_030

0x88a2,	// (0x00064e0f) cell_tport_appsw_pane_g1

0x88b2,	// (0x00064e1f) cell_tport_appsw_pane_t1

0x88c0,	// (0x00064e2d) grid_highlight_pane_cp019

0x88c8,	// (0x00064e35) list_tport_double_graphic_pane_ParamLimits

0x88c8,	// (0x00064e35) list_tport_double_graphic_pane

0xa54e,	// (0x00066abb) list_highlight_pane_cp023_ParamLimits

0xa54e,	// (0x00066abb) list_highlight_pane_cp023

0x88da,	// (0x00064e47) list_tport_double_graphic_pane_g1_ParamLimits

0x88da,	// (0x00064e47) list_tport_double_graphic_pane_g1

0x88e7,	// (0x00064e54) list_tport_double_graphic_pane_t1_ParamLimits

0x88e7,	// (0x00064e54) list_tport_double_graphic_pane_t1

0x88fc,	// (0x00064e69) list_tport_double_graphic_pane_t2_ParamLimits

0x88fc,	// (0x00064e69) list_tport_double_graphic_pane_t2

0x0001,

0xfb29,	// (0x0006c096) list_tport_double_graphic_pane_t_ParamLimits

0xfb29,	// (0x0006c096) list_tport_double_graphic_pane_t

0x9880,	// (0x00065ded) main_cale_note_pane

0x64e5,	// (0x00062a52) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x64e5,	// (0x00062a52) cell_vitu2_function_top_wide_pane_cp01

0x7f41,	// (0x000644ae) wait_bar_pane_cp05_ParamLimits

0xa54e,	// (0x00066abb) listscroll_cmail_pane

0xe7b3,	// (0x0006ad20) list_cmail_pane

0x890e,	// (0x00064e7b) list_cmail_body_pane

0x8935,	// (0x00064ea2) list_single_cmail_header_caption_pane

0x8969,	// (0x00064ed6) list_single_cmail_header_detail_pane_ParamLimits

0x8969,	// (0x00064ed6) list_single_cmail_header_detail_pane

0xe7c3,	// (0x0006ad30) list_single_cmail_header_caption_pane_t1

0x89ad,	// (0x00064f1a) list_single_cmail_header_detail_pane_g1_ParamLimits

0x89ad,	// (0x00064f1a) list_single_cmail_header_detail_pane_g1

0xa2e2,	// (0x0006684f) list_single_cmail_header_detail_pane_g2_ParamLimits

0xa2e2,	// (0x0006684f) list_single_cmail_header_detail_pane_g2

0x0002,

0xfb2e,	// (0x0006c09b) list_single_cmail_header_detail_pane_g_ParamLimits

0xfb2e,	// (0x0006c09b) list_single_cmail_header_detail_pane_g

0x89c3,	// (0x00064f30) list_single_cmail_header_detail_pane_t1_ParamLimits

0x89c3,	// (0x00064f30) list_single_cmail_header_detail_pane_t1

0x89ff,	// (0x00064f6c) list_single_cmail_header_editor_pane_bg_ParamLimits

0x89ff,	// (0x00064f6c) list_single_cmail_header_editor_pane_bg

0xe7de,	// (0x0006ad4b) list_cmail_body_pane_g1

0xe7e7,	// (0x0006ad54) list_cmail_body_pane_t1

0xd668,	// (0x00069bd5) list_single_cmail_header_editor_pane_bg_g1

0xabc1,	// (0x0006712e) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd678,	// (0x00069be5) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd670,	// (0x00069bdd) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd88c,	// (0x00069df9) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd698,	// (0x00069c05) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd688,	// (0x00069bf5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd690,	// (0x00069bfd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaba1,	// (0x0006710e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8a16,	// (0x00064f83) calenote_gesture_pane_ParamLimits

0x8a16,	// (0x00064f83) calenote_gesture_pane

0x8a30,	// (0x00064f9d) calenote_window_pane_ParamLimits

0x8a30,	// (0x00064f9d) calenote_window_pane

0xe7f5,	// (0x0006ad62) popup_note_window_cp01

0x8a48,	// (0x00064fb5) calenote_swipe_1_pane_ParamLimits

0x8a48,	// (0x00064fb5) calenote_swipe_1_pane

0x82b0,	// (0x0006481d) calenote_swipe_2_pane_ParamLimits

0x82b0,	// (0x0006481d) calenote_swipe_2_pane

0xe610,	// (0x0006ab7d) calenote_swipe_1_pane_g1_ParamLimits

0xe610,	// (0x0006ab7d) calenote_swipe_1_pane_g1

0xe61d,	// (0x0006ab8a) calenote_swipe_1_pane_g2_ParamLimits

0xe61d,	// (0x0006ab8a) calenote_swipe_1_pane_g2

0x0001,

0x09f4,	// (0x0005cf61) calenote_swipe_1_pane_g_ParamLimits

0x09f4,	// (0x0005cf61) calenote_swipe_1_pane_g

0xe807,	// (0x0006ad74) calenote_swipe_1_pane_t1_ParamLimits

0xe807,	// (0x0006ad74) calenote_swipe_1_pane_t1

0xe610,	// (0x0006ab7d) calenote_swipe_2_pane_g1_ParamLimits

0xe610,	// (0x0006ab7d) calenote_swipe_2_pane_g1

0xe826,	// (0x0006ad93) calenote_swipe_2_pane_g2_ParamLimits

0xe826,	// (0x0006ad93) calenote_swipe_2_pane_g2

0x0001,

0x0adc,	// (0x0005d049) calenote_swipe_2_pane_g_ParamLimits

0x0adc,	// (0x0005d049) calenote_swipe_2_pane_g

0xe832,	// (0x0006ad9f) calenote_swipe_2_pane_t1_ParamLimits

0xe832,	// (0x0006ad9f) calenote_swipe_2_pane_t1

0x9880,	// (0x00065ded) main_mup_navstr_pane

0x521f,	// (0x0006178c) main_mup3_pane_t7_ParamLimits

0x521f,	// (0x0006178c) main_mup3_pane_t7

0x5c49,	// (0x000621b6) main_mp4_pane_g6_ParamLimits

0x5c49,	// (0x000621b6) main_mp4_pane_g6

0x5fc9,	// (0x00062536) main_image3_pane_t4_ParamLimits

0x5fc9,	// (0x00062536) main_image3_pane_t4

0x8a5b,	// (0x00064fc8) popup_navstr_preview_pane_ParamLimits

0x8a5b,	// (0x00064fc8) popup_navstr_preview_pane

0x8a67,	// (0x00064fd4) scroll_navstr_pane_ParamLimits

0x8a67,	// (0x00064fd4) scroll_navstr_pane

0x9880,	// (0x00065ded) bg_popup_preview_window_pane_cp04

0xe859,	// (0x0006adc6) popup_navstr_preview_pane_t1

0x8a73,	// (0x00064fe0) scroll_navstr_pane_g1_ParamLimits

0x8a73,	// (0x00064fe0) scroll_navstr_pane_g1

0x8a80,	// (0x00064fed) scroll_navstr_pane_t1_ParamLimits

0x8a80,	// (0x00064fed) scroll_navstr_pane_t1

0xe7fe,	// (0x0006ad6b) bg_button_pane_cp014

0xe7fe,	// (0x0006ad6b) bg_button_pane_cp030

0xa03c,	// (0x000665a9) list_double_fisheye_pane_g4_ParamLimits

0xa03c,	// (0x000665a9) list_double_fisheye_pane_g4

0xa048,	// (0x000665b5) list_double_fisheye_pane_g5_ParamLimits

0xa048,	// (0x000665b5) list_double_fisheye_pane_g5

0xd01f,	// (0x0006958c) sp_fs_scroll_pane_cp03

0xe703,	// (0x0006ac70) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe70f,	// (0x0006ac7c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0a11,	// (0x0005cf7e) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe71b,	// (0x0006ac88) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe7bb,	// (0x0006ad28) sp_fs_scroll_pane_cp02

0xa8b7,	// (0x00066e24) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa8b7,	// (0x00066e24) popup_sp_fs_calendar_preview_list_single_pane

0x9880,	// (0x00065ded) main_cam6_pano_pane

0x4225,	// (0x00060792) main_mup3_pane_ParamLimits

0x9880,	// (0x00065ded) main_phacti_pane

0x7e16,	// (0x00064383) bg_button_pane_cp11

0x7e2e,	// (0x0006439b) main_mobtv_info_pane_g2_ParamLimits

0x7e2e,	// (0x0006439b) main_mobtv_info_pane_g2

0x0001,

0xfa37,	// (0x0006bfa4) main_mobtv_info_pane_g_ParamLimits

0xfa37,	// (0x0006bfa4) main_mobtv_info_pane_g

0x7fe0,	// (0x0006454d) sc_clock_pane_t5_ParamLimits

0x7fe0,	// (0x0006454d) sc_clock_pane_t5

0x8095,	// (0x00064602) main_radioblah_pane_g1_ParamLimits

0xe55c,	// (0x0006aac9) main_radioblah_pane_t3_ParamLimits

0xe55c,	// (0x0006aac9) main_radioblah_pane_t3

0xe574,	// (0x0006aae1) main_radioblah_pane_t4_ParamLimits

0xe574,	// (0x0006aae1) main_radioblah_pane_t4

0x80b3,	// (0x00064620) main_radioblah_text_pane_ParamLimits

0x80b3,	// (0x00064620) main_radioblah_text_pane

0x80c0,	// (0x0006462d) main_radioblah_info_pane_g1_ParamLimits

0x8155,	// (0x000646c2) main_radioblah_info_pane_t4_ParamLimits

0x8155,	// (0x000646c2) main_radioblah_info_pane_t4

0xa54e,	// (0x00066abb) main_sp_fs_calendar_pane

0x8a92,	// (0x00064fff) main_phacti_pane_g1

0x8a9a,	// (0x00065007) phacti_note_pane_ParamLimits

0x8a9a,	// (0x00065007) phacti_note_pane

0xe870,	// (0x0006addd) phacti_term_pane_ParamLimits

0xe870,	// (0x0006addd) phacti_term_pane

0xe885,	// (0x0006adf2) phacti_note_pane_t1_ParamLimits

0xe885,	// (0x0006adf2) phacti_note_pane_t1

0xa312,	// (0x0006687f) phacti_term_pane_g1

0xa31a,	// (0x00066887) phacti_term_pane_t1_ParamLimits

0xa31a,	// (0x00066887) phacti_term_pane_t1

0xe89c,	// (0x0006ae09) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe8a4,	// (0x0006ae11) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0ae6,	// (0x0005d053) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8ac,	// (0x0006ae19) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8ac,	// (0x0006ae19) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8c2,	// (0x0006ae2f) aid_popup_sp_fs_bg_corner_pane

0xcc13,	// (0x00069180) popup_sp_fs_calendar_preview_bg_pane_g1

0x9880,	// (0x00065ded) popup_sp_fs_calendar_preview_bg_pane

0xa1de,	// (0x0006674b) popup_sp_fs_calendar_preview_list_pane

0xc809,	// (0x00068d76) bg_main_sp_fs_cale_pane_ParamLimits

0xc809,	// (0x00068d76) bg_main_sp_fs_cale_pane

0xa344,	// (0x000668b1) listscroll_cale_mrui_pane_ParamLimits

0xa344,	// (0x000668b1) listscroll_cale_mrui_pane

0xa359,	// (0x000668c6) listscroll_sp_fs_schedule_track_pane

0xa362,	// (0x000668cf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa362,	// (0x000668cf) main_sp_fs_ctrlbar_pane_cp01

0xe8d3,	// (0x0006ae40) main_sp_fs_ribbon_pane

0xa375,	// (0x000668e2) popup_sp_fs_cale_preview_window

0x8afd,	// (0x0006506a) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8afd,	// (0x0006506a) list_single_sp_fs_schedule_track_pane

0xeab3,	// (0x0006b020) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xeab3,	// (0x0006b020) bg_sp_fs_highlight_list_pane_cp03

0x8b2b,	// (0x00065098) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8b2b,	// (0x00065098) list_single_sp_fs_schedule_track_pane_g1

0x8b37,	// (0x000650a4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8b37,	// (0x000650a4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfb3f,	// (0x0006c0ac) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfb3f,	// (0x0006c0ac) list_single_sp_fs_schedule_track_pane_g

0x8b43,	// (0x000650b0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8b43,	// (0x000650b0) list_single_sp_fs_schedule_track_pane_t1

0x8b5b,	// (0x000650c8) sp_fs_schedule_track_pane_ParamLimits

0x8b5b,	// (0x000650c8) sp_fs_schedule_track_pane

0xe8db,	// (0x0006ae48) sp_fs_schedule_track_pane_g1

0xe8e3,	// (0x0006ae50) sp_fs_schedule_track_pane_g2

0xe8eb,	// (0x0006ae58) sp_fs_schedule_track_pane_g3

0xe8f3,	// (0x0006ae60) sp_fs_schedule_track_pane_g4

0xe8fb,	// (0x0006ae68) sp_fs_schedule_track_pane_g5

0x0004,

0x0af0,	// (0x0005d05d) sp_fs_schedule_track_pane_g

0xd668,	// (0x00069bd5) bg_sp_fs_schedule_viewer_highlight_g1

0xabc1,	// (0x0006712e) bg_sp_fs_schedule_viewer_highlight_g2

0xd670,	// (0x00069bdd) bg_sp_fs_schedule_viewer_highlight_g3

0xd678,	// (0x00069be5) bg_sp_fs_schedule_viewer_highlight_g4

0xd88c,	// (0x00069df9) bg_sp_fs_schedule_viewer_highlight_g5

0xd688,	// (0x00069bf5) bg_sp_fs_schedule_viewer_highlight_g6

0xd690,	// (0x00069bfd) bg_sp_fs_schedule_viewer_highlight_g7

0xd698,	// (0x00069c05) bg_sp_fs_schedule_viewer_highlight_g8

0xaba1,	// (0x0006710e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfb44,	// (0x0006c0b1) bg_sp_fs_schedule_viewer_highlight_g

0x9880,	// (0x00065ded) bg_main_sp_fs_ribbon_pane

0x8b6b,	// (0x000650d8) main_sp_fs_ribbon_pane_g1

0xe903,	// (0x0006ae70) main_sp_fs_ribbon_pane_t1

0x8b74,	// (0x000650e1) main_sp_fs_ribbon_pane_t2

0xe912,	// (0x0006ae7f) main_sp_fs_ribbon_pane_t3

0x0002,

0xfb57,	// (0x0006c0c4) main_sp_fs_ribbon_pane_t

0xe921,	// (0x0006ae8e) main_sp_fs_ribbon_scheduler_pane

0xe929,	// (0x0006ae96) bg_main_sp_fs_ribbon_pane_g1

0xe932,	// (0x0006ae9f) bg_main_sp_fs_ribbon_pane_g2

0xe93b,	// (0x0006aea8) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0b15,	// (0x0005d082) bg_main_sp_fs_ribbon_pane_g

0xe943,	// (0x0006aeb0) main_sp_fs_ribbon_scheduler_pane_g1

0xe94c,	// (0x0006aeb9) main_sp_fs_ribbon_scheduler_pane_g2

0xe955,	// (0x0006aec2) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0b1c,	// (0x0005d089) main_sp_fs_ribbon_scheduler_pane_g

0xe95e,	// (0x0006aecb) list_cale_mrui_pane

0x8b85,	// (0x000650f2) sp_fs_scroll_pane_cp07_ParamLimits

0x8b85,	// (0x000650f2) sp_fs_scroll_pane_cp07

0x8ba1,	// (0x0006510e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8ba1,	// (0x0006510e) bg_sp_fs_schedule_viewer_highlight

0xe96b,	// (0x0006aed8) list_single_sp_fs_schedule_track_pane_cp01

0xe973,	// (0x0006aee0) list_sp_fs_schedule_track_pane

0xe97b,	// (0x0006aee8) sp_fs_scroll_pane_cp06_ParamLimits

0xe97b,	// (0x0006aee8) sp_fs_scroll_pane_cp06

0xcc13,	// (0x00069180) bgmain_sp_fs_calendar_pane_g1

0x8bae,	// (0x0006511b) list_single_cale_mrui_pane_ParamLimits

0x8bae,	// (0x0006511b) list_single_cale_mrui_pane

0xa387,	// (0x000668f4) list_single_cale_mrui_row_pane_ParamLimits

0xa387,	// (0x000668f4) list_single_cale_mrui_row_pane

0xa394,	// (0x00066901) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa394,	// (0x00066901) list_single_cale_mrui_row_pane_g1

0xa3cc,	// (0x00066939) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa3cc,	// (0x00066939) list_single_cale_mrui_row_pane_t1

0x8be0,	// (0x0006514d) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8be0,	// (0x0006514d) list_single_cale_mrui_row_pane_t2

0xa3de,	// (0x0006694b) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa3de,	// (0x0006694b) list_single_cale_mrui_row_pane_t3

0xa55c,	// (0x00066ac9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa55c,	// (0x00066ac9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfb65,	// (0x0006c0d2) list_single_cale_mrui_row_pane_t_ParamLimits

0xfb65,	// (0x0006c0d2) list_single_cale_mrui_row_pane_t

0x8c46,	// (0x000651b3) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8c46,	// (0x000651b3) list_single_cmail_header_editor_pane_bg_cp01

0x8c68,	// (0x000651d5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8c68,	// (0x000651d5) list_single_cmail_header_editor_pane_bg_cp02

0x8c84,	// (0x000651f1) main_radioblah_text_pane_t1_ParamLimits

0x8c84,	// (0x000651f1) main_radioblah_text_pane_t1

0xe99a,	// (0x0006af07) cam6_indi_pane_cp01

0xe9a2,	// (0x0006af0f) cam6_mode_pane_cp01

0xe9aa,	// (0x0006af17) cam6_pano_pane

0xe9b3,	// (0x0006af20) cam6_zoom_pane_cp01

0xe9bb,	// (0x0006af28) cam6_pano_image_pane

0xe9c6,	// (0x0006af33) cam6_pano_pane_g1

0xe2c9,	// (0x0006a836) cam6_pano_pane_g2

0xe9cf,	// (0x0006af3c) cam6_pano_pane_g3

0xe9d8,	// (0x0006af45) cam6_pano_pane_g4

0xd1c1,	// (0x0006972e) cam6_pano_pane_g5

0xe9e1,	// (0x0006af4e) cam6_pano_pane_g6

0xe9eb,	// (0x0006af58) cam6_pano_pane_g7

0xe9f3,	// (0x0006af60) cam6_pano_pane_g8

0xe9fc,	// (0x0006af69) cam6_pano_pane_g9

0x0008,

0x0b33,	// (0x0005d0a0) cam6_pano_pane_g

0x9880,	// (0x00065ded) main_browser_tag_pane

0xe851,	// (0x0006adbe) grid_navstr_albumart_pane

0xea07,	// (0x0006af74) cell_navstr_albumart_pane_ParamLimits

0xea07,	// (0x0006af74) cell_navstr_albumart_pane

0xb568,	// (0x00067ad5) cell_navstr_albumart_pane_g1

0xc61a,	// (0x00068b87) cell_navstr_albumart_pane_g2

0xc62a,	// (0x00068b97) cell_navstr_albumart_pane_g3

0xc622,	// (0x00068b8f) cell_navstr_albumart_pane_g4

0x0003,

0x0b46,	// (0x0005d0b3) cell_navstr_albumart_pane_g

0x8c9f,	// (0x0006520c) bt_list_pane_ParamLimits

0x8c9f,	// (0x0006520c) bt_list_pane

0xea29,	// (0x0006af96) bt_list_pane_t1

0xea38,	// (0x0006afa5) bt_list_pane_t2

0x0001,

0x0b4f,	// (0x0005d0bc) bt_list_pane_t

0x9880,	// (0x00065ded) main_cale_prevew_pane

0x8cc3,	// (0x00065230) popup_cale_preview_window_ParamLimits

0x8cc3,	// (0x00065230) popup_cale_preview_window

0xa54e,	// (0x00066abb) bg_popup_preview_window_pane_cp05_ParamLimits

0xa54e,	// (0x00066abb) bg_popup_preview_window_pane_cp05

0xea47,	// (0x0006afb4) list_cale_preview_pane_ParamLimits

0xea47,	// (0x0006afb4) list_cale_preview_pane

0xea53,	// (0x0006afc0) list_double_cale_preview_pane_ParamLimits

0xea53,	// (0x0006afc0) list_double_cale_preview_pane

0xea65,	// (0x0006afd2) list_single_cale_preview_pane_ParamLimits

0xea65,	// (0x0006afd2) list_single_cale_preview_pane

0xea79,	// (0x0006afe6) list_single_cale_preview_pane_g1

0xea81,	// (0x0006afee) list_single_cale_preview_pane_t1_ParamLimits

0xea81,	// (0x0006afee) list_single_cale_preview_pane_t1

0xea96,	// (0x0006b003) list_double_cale_preview_pane_g1

0xea9e,	// (0x0006b00b) list_double_cale_preview_pane_t1_ParamLimits

0xea9e,	// (0x0006b00b) list_double_cale_preview_pane_t1

0xeaca,	// (0x0006b037) list_double_cale_preview_pane_t2_ParamLimits

0xeaca,	// (0x0006b037) list_double_cale_preview_pane_t2

0x0001,

0xfb6e,	// (0x0006c0db) list_double_cale_preview_pane_t_ParamLimits

0xfb6e,	// (0x0006c0db) list_double_cale_preview_pane_t

0x9880,	// (0x00065ded) main_ezdial_pane

0xa54e,	// (0x00066abb) main_sp_fs_email_pane_ParamLimits

0x832a,	// (0x00064897) cmail_ddmenu_btn01_pane_ParamLimits

0x832a,	// (0x00064897) cmail_ddmenu_btn01_pane

0x8347,	// (0x000648b4) cmail_ddmenu_btn02_pane_ParamLimits

0x8347,	// (0x000648b4) cmail_ddmenu_btn02_pane

0x8365,	// (0x000648d2) cmail_ddmenu_btn03_pane_ParamLimits

0x8365,	// (0x000648d2) cmail_ddmenu_btn03_pane

0x8393,	// (0x00064900) main_sp_fs_ctrlbar_pane_ParamLimits

0x83a9,	// (0x00064916) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x890e,	// (0x00064e7b) list_cmail_body_pane_ParamLimits

0x89a4,	// (0x00064f11) bg_button_pane_cp12

0xe7d1,	// (0x0006ad3e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d1,	// (0x0006ad3e) list_single_cmail_header_detail_pane_g3

0xa2ee,	// (0x0006685b) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa2ee,	// (0x0006685b) list_single_cmail_header_detail_pane_t2

0x0001,

0xfb35,	// (0x0006c0a2) list_single_cmail_header_detail_pane_t_ParamLimits

0xfb35,	// (0x0006c0a2) list_single_cmail_header_detail_pane_t

0xa32f,	// (0x0006689c) phacti_term_pane_t2_ParamLimits

0xa32f,	// (0x0006689c) phacti_term_pane_t2

0x0001,

0xfb3a,	// (0x0006c0a7) phacti_term_pane_t_ParamLimits

0xfb3a,	// (0x0006c0a7) phacti_term_pane_t

0xeae2,	// (0x0006b04f) aid_size_list_single_double

0x8cda,	// (0x00065247) popup_ezdial_listscroll_window

0x8cfd,	// (0x0006526a) popup_number_entry_window_cp01

0xb3e6,	// (0x00067953) bg_popup_call_pane_cp09

0xeaee,	// (0x0006b05b) ezdial_list_pane

0xeaf6,	// (0x0006b063) scroll_pane_cp23

0xc9f6,	// (0x00068f63) bg_button_pane_cp028_ParamLimits

0xc9f6,	// (0x00068f63) bg_button_pane_cp028

0x8d0b,	// (0x00065278) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8d0b,	// (0x00065278) cmail_ddmenu_btn01_pane_g1

0x8d1d,	// (0x0006528a) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8d1d,	// (0x0006528a) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfb73,	// (0x0006c0e0) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfb73,	// (0x0006c0e0) cmail_ddmenu_btn01_pane_g

0xeafe,	// (0x0006b06b) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeafe,	// (0x0006b06b) cmail_ddmenu_btn01_pane_t1

0xc809,	// (0x00068d76) bg_button_pane_cp029_ParamLimits

0xc809,	// (0x00068d76) bg_button_pane_cp029

0x8d29,	// (0x00065296) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8d29,	// (0x00065296) cmail_ddmenu_btn02_pane_g1

0x8d41,	// (0x000652ae) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8d41,	// (0x000652ae) cmail_ddmenu_btn02_pane_t1

0xeab3,	// (0x0006b020) bg_button_pane_cp031_ParamLimits

0xeab3,	// (0x0006b020) bg_button_pane_cp031

0x8d29,	// (0x00065296) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8d29,	// (0x00065296) cmail_ddmenu_btn03_pane_g1

0x8d41,	// (0x000652ae) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8d41,	// (0x000652ae) cmail_ddmenu_btn03_pane_t1

0x5e66,	// (0x000623d3) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e80,	// (0x000623ed) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e80,	// (0x000623ed) cell_dialer2_keypad_pane_t1_copy1

0x7c9b,	// (0x00064208) ncimui_group_button_pane

0xa54e,	// (0x00066abb) main_sp_fs_calendar_pane_ParamLimits

0x8935,	// (0x00064ea2) list_single_cmail_header_caption_pane_ParamLimits

0xe8ca,	// (0x0006ae37) aid_recal_txt_sm_pane

0x9880,	// (0x00065ded) mian_recal_day_pane

0xa375,	// (0x000668e2) popup_sp_fs_cale_preview_window_ParamLimits

0xeb13,	// (0x0006b080) list_recal_day_pane

0xa5a6,	// (0x00066b13) list_single_recal_day_pane_ParamLimits

0xa5a6,	// (0x00066b13) list_single_recal_day_pane

0xeb3a,	// (0x0006b0a7) list_single_recal_day_pane_g1_ParamLimits

0xeb3a,	// (0x0006b0a7) list_single_recal_day_pane_g1

0xa5b8,	// (0x00066b25) list_single_recal_day_pane_g2_ParamLimits

0xa5b8,	// (0x00066b25) list_single_recal_day_pane_g2

0xa5c8,	// (0x00066b35) list_single_recal_day_pane_g3_ParamLimits

0xa5c8,	// (0x00066b35) list_single_recal_day_pane_g3

0x8d65,	// (0x000652d2) list_single_recal_day_pane_g4_ParamLimits

0x8d65,	// (0x000652d2) list_single_recal_day_pane_g4

0xa5d4,	// (0x00066b41) list_single_recal_day_pane_g5_ParamLimits

0xa5d4,	// (0x00066b41) list_single_recal_day_pane_g5

0xa5e4,	// (0x00066b51) list_single_recal_day_pane_g6_ParamLimits

0xa5e4,	// (0x00066b51) list_single_recal_day_pane_g6

0x0004,

0xfb82,	// (0x0006c0ef) list_single_recal_day_pane_g_ParamLimits

0xfb82,	// (0x0006c0ef) list_single_recal_day_pane_g

0xa5f8,	// (0x00066b65) list_single_recal_day_pane_t1

0xa60a,	// (0x00066b77) list_single_recal_day_pane_t2

0x0001,

0xfb8d,	// (0x0006c0fa) list_single_recal_day_pane_t

0x8d85,	// (0x000652f2) ncimui_query_button_pane_ParamLimits

0x8d85,	// (0x000652f2) ncimui_query_button_pane

0x8d95,	// (0x00065302) ncimui_query_button_pane_t1_ParamLimits

0x8d95,	// (0x00065302) ncimui_query_button_pane_t1

0xeb46,	// (0x0006b0b3) ncimui_query_button_pane_t2_ParamLimits

0xeb46,	// (0x0006b0b3) ncimui_query_button_pane_t2

0x0001,

0xfb92,	// (0x0006c0ff) ncimui_query_button_pane_t_ParamLimits

0xfb92,	// (0x0006c0ff) ncimui_query_button_pane_t

0x8da8,	// (0x00065315) query_button_pane_ParamLimits

0x8da8,	// (0x00065315) query_button_pane

0x9880,	// (0x00065ded) bg_button_pane_cp0028

0xeb59,	// (0x0006b0c6) query_button_pane_t1

0x4241,	// (0x000607ae) main_tport_pane_ParamLimits

0x8817,	// (0x00064d84) bg_popup_window_pane_cp01_ParamLimits

0x8817,	// (0x00064d84) bg_popup_window_pane_cp01

0x8825,	// (0x00064d92) heading_pane_cp08_ParamLimits

0x8825,	// (0x00064d92) heading_pane_cp08

0x8833,	// (0x00064da0) heading_pane_cp07_ParamLimits

0x8833,	// (0x00064da0) heading_pane_cp07

0x88a2,	// (0x00064e0f) cell_tport_appsw_pane_g2

0x0002,

0xfb22,	// (0x0006c08f) cell_tport_appsw_pane_g

0x9dab,	// (0x00066318) input_candi_list_open_g1

0xad8c,	// (0x000672f9) list_cale_time_pane_g6_ParamLimits

0xad8c,	// (0x000672f9) list_cale_time_pane_g6

0x4cc1,	// (0x0006122e) aid_size_touch_calib_1_ParamLimits

0x4cc1,	// (0x0006122e) aid_size_touch_calib_1

0x4ccd,	// (0x0006123a) aid_size_touch_calib_2_ParamLimits

0x4ccd,	// (0x0006123a) aid_size_touch_calib_2

0x4cdb,	// (0x00061248) aid_size_touch_calib_3_ParamLimits

0x4cdb,	// (0x00061248) aid_size_touch_calib_3

0x4ceb,	// (0x00061258) aid_size_touch_calib_4_ParamLimits

0x4ceb,	// (0x00061258) aid_size_touch_calib_4

0x4cf9,	// (0x00061266) main_touch_calib_button_group_pane_ParamLimits

0x4cf9,	// (0x00061266) main_touch_calib_button_group_pane

0x4d07,	// (0x00061274) main_touch_calib_pane_g1_ParamLimits

0x4d13,	// (0x00061280) main_touch_calib_pane_g2_ParamLimits

0x4d1f,	// (0x0006128c) main_touch_calib_pane_g3_ParamLimits

0x4d2b,	// (0x00061298) main_touch_calib_pane_g4_ParamLimits

0xf62c,	// (0x0006bb99) main_touch_calib_pane_g_ParamLimits

0x4d37,	// (0x000612a4) main_touch_calib_pane_t1_ParamLimits

0x4d50,	// (0x000612bd) main_touch_calib_pane_t2_ParamLimits

0x4d69,	// (0x000612d6) main_touch_calib_pane_t3_ParamLimits

0x4d7f,	// (0x000612ec) main_touch_calib_pane_t4_ParamLimits

0x4d95,	// (0x00061302) main_touch_calib_pane_t5_ParamLimits

0xf635,	// (0x0006bba2) main_touch_calib_pane_t_ParamLimits

0xcf73,	// (0x000694e0) list_single_fp_cale_pane_g3_ParamLimits

0xcf73,	// (0x000694e0) list_single_fp_cale_pane_g3

0x4225,	// (0x00060792) bg_button_pane_cp012_ParamLimits

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp03_ParamLimits

0x6cbc,	// (0x00063229) cell_vitu2_function_top_pane_g1_ParamLimits

0x4225,	// (0x00060792) bg_vkb2_func_pane_cp04_ParamLimits

0x7c23,	// (0x00064190) main_ncimui_button_group_pane_ParamLimits

0x7c23,	// (0x00064190) main_ncimui_button_group_pane

0x7c89,	// (0x000641f6) main_ncimui_pane_t3_ParamLimits

0x7c89,	// (0x000641f6) main_ncimui_pane_t3

0xe867,	// (0x0006add4) phacti_button_group_pane

0xeae2,	// (0x0006b04f) aid_size_list_single_double_ParamLimits

0x8cda,	// (0x00065247) popup_ezdial_listscroll_window_ParamLimits

0x8cfd,	// (0x0006526a) popup_number_entry_window_cp01_ParamLimits

0x8db5,	// (0x00065322) phacti_button_pane_ParamLimits

0x8db5,	// (0x00065322) phacti_button_pane

0x9880,	// (0x00065ded) bg_button_pane_cp14

0xeb67,	// (0x0006b0d4) phacti_button_pane_t1

0x8dc6,	// (0x00065333) main_touch_calib_button_pane_ParamLimits

0x8dc6,	// (0x00065333) main_touch_calib_button_pane

0xa7a1,	// (0x00066d0e) bg_button_pane_cp18_ParamLimits

0xa7a1,	// (0x00066d0e) bg_button_pane_cp18

0xeb75,	// (0x0006b0e2) main_touch_calib_button_pane_t1_ParamLimits

0xeb75,	// (0x0006b0e2) main_touch_calib_button_pane_t1

0xeb8b,	// (0x0006b0f8) main_touch_calib_button_pane_t2_ParamLimits

0xeb8b,	// (0x0006b0f8) main_touch_calib_button_pane_t2

0x0001,

0xfb97,	// (0x0006c104) main_touch_calib_button_pane_t_ParamLimits

0xfb97,	// (0x0006c104) main_touch_calib_button_pane_t

0x9880,	// (0x00065ded) cell_ncimui_button_pane

0x9880,	// (0x00065ded) bg_button_pane_cp032

0xeba9,	// (0x0006b116) cell_ncimui_button_pane_t1

0x5edc,	// (0x00062449) image3_infobar_pane_ParamLimits

0x5edc,	// (0x00062449) image3_infobar_pane

0x8002,	// (0x0006456f) fs_bigclock_status_pane_ParamLimits

0x8002,	// (0x0006456f) fs_bigclock_status_pane

0x800f,	// (0x0006457c) main_fs_bigclock_clock_pane_ParamLimits

0x800f,	// (0x0006457c) main_fs_bigclock_clock_pane

0x8033,	// (0x000645a0) main_fs_bigclock_indi_pane_ParamLimits

0x8033,	// (0x000645a0) main_fs_bigclock_indi_pane

0x8063,	// (0x000645d0) main_fs_bigclock_swipe_pane_ParamLimits

0x8063,	// (0x000645d0) main_fs_bigclock_swipe_pane

0x9880,	// (0x00065ded) main_fs_clock_dumped_data

0xe3d6,	// (0x0006a943) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe3d6,	// (0x0006a943) list_single_fs_bigclock_indicator_pane_g1

0xe3f1,	// (0x0006a95e) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3f1,	// (0x0006a95e) list_single_fs_bigclock_indicator_pane_g2

0xe40b,	// (0x0006a978) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe40b,	// (0x0006a978) list_single_fs_bigclock_indicator_pane_g3

0xe425,	// (0x0006a992) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe425,	// (0x0006a992) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x09a5,	// (0x0005cf12) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x09a5,	// (0x0005cf12) list_single_fs_bigclock_indicator_pane_g

0xe44e,	// (0x0006a9bb) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe44e,	// (0x0006a9bb) list_single_fs_bigclock_indicator_pane_t1

0xe476,	// (0x0006a9e3) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe476,	// (0x0006a9e3) list_single_fs_bigclock_indicator_pane_t2

0xe49e,	// (0x0006aa0b) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe49e,	// (0x0006aa0b) list_single_fs_bigclock_indicator_pane_t3

0xe4c6,	// (0x0006aa33) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe4c6,	// (0x0006aa33) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x09b0,	// (0x0005cf1d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x09b0,	// (0x0005cf1d) list_single_fs_bigclock_indicator_pane_t

0xebb7,	// (0x0006b124) image3_infobar_fav_pane_ParamLimits

0xebb7,	// (0x0006b124) image3_infobar_fav_pane

0xebc7,	// (0x0006b134) image3_infobar_loc_pane_ParamLimits

0xebc7,	// (0x0006b134) image3_infobar_loc_pane

0xebdb,	// (0x0006b148) image3_infobar_time_pane_ParamLimits

0xebdb,	// (0x0006b148) image3_infobar_time_pane

0xcc13,	// (0x00069180) image3_infobar_time_pane_g1

0xebeb,	// (0x0006b158) image3_infobar_time_pane_t1

0xcc13,	// (0x00069180) image3_infobar_loc_pane_g1

0xebf9,	// (0x0006b166) image3_infobar_loc_pane_g2

0x0001,

0x0b82,	// (0x0005d0ef) image3_infobar_loc_pane_g

0xec01,	// (0x0006b16e) image3_infobar_loc_pane_t1

0xcc13,	// (0x00069180) image3_infobar_fav_pane_g1

0xec0f,	// (0x0006b17c) image3_infobar_fav_pane_g2

0x0001,

0x0b87,	// (0x0005d0f4) image3_infobar_fav_pane_g

0xec17,	// (0x0006b184) fs_bigclock_status_battery_pane

0xec20,	// (0x0006b18d) fs_bigclock_status_signal_pane

0xec29,	// (0x0006b196) fs_bigclock_status_title_pane

0xec32,	// (0x0006b19f) fs_bigclock_status_signal_pane_g1

0xec3b,	// (0x0006b1a8) fs_bigclock_status_signal_pane_g2

0x0001,

0x0b8c,	// (0x0005d0f9) fs_bigclock_status_signal_pane_g

0xec43,	// (0x0006b1b0) fs_bigclock_status_battery_pane_g1

0xec4c,	// (0x0006b1b9) fs_bigclock_status_battery_pane_g2

0x0001,

0x0b91,	// (0x0005d0fe) fs_bigclock_status_battery_pane_g

0xec54,	// (0x0006b1c1) fs_bigclock_status_title_pane_t1

0xcc13,	// (0x00069180) main_fs_bigclock_clock_pane_g1

0x8dd6,	// (0x00065343) main_fs_bigclock_clock_pane_g2

0x8dd6,	// (0x00065343) main_fs_bigclock_clock_pane_g3

0x8dd6,	// (0x00065343) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb9c,	// (0x0006c109) main_fs_bigclock_clock_pane_g

0x8dde,	// (0x0006534b) main_fs_bigclock_clock_pane_t1

0x8dec,	// (0x00065359) main_fs_bigclock_clock_pane_t2

0x0001,

0xfba5,	// (0x0006c112) main_fs_bigclock_clock_pane_t

0xec62,	// (0x0006b1cf) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec62,	// (0x0006b1cf) list_single_fs_bigclock_indicator_pane

0x8dfb,	// (0x00065368) list_single_fs_bigclock_pane_ParamLimits

0x8dfb,	// (0x00065368) list_single_fs_bigclock_pane

0xec7c,	// (0x0006b1e9) main_fs_bigclock_indicator_pane_t1

0xec8b,	// (0x0006b1f8) list_single_fs_bigclock_pane_g1

0xec93,	// (0x0006b200) list_single_fs_bigclock_pane_t1

0xcc13,	// (0x00069180) main_fs_bigclock_swipe_pane_g1

0xecd6,	// (0x0006b243) main_fs_bigclock_swipe_pane_g2

0x0001,

0x0bb0,	// (0x0005d11d) main_fs_bigclock_swipe_pane_g

0xecde,	// (0x0006b24b) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecde,	// (0x0006b24b) main_fs_bigclock_swipe_pane_t1

0x327b,	// (0x0005f7e8) call_type_pane_ParamLimits

0x9880,	// (0x00065ded) main_btmg_pane

0xa3c0,	// (0x0006692d) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa3c0,	// (0x0006692d) list_single_cale_mrui_row_pane_g2

0x0002,

0xfb5e,	// (0x0006c0cb) list_single_cale_mrui_row_pane_g_ParamLimits

0xfb5e,	// (0x0006c0cb) list_single_cale_mrui_row_pane_g

0xa595,	// (0x00066b02) list_recal_vselct_arw_lo_pane

0xeb32,	// (0x0006b09f) list_recal_vselct_arw_up_pane

0xa59d,	// (0x00066b0a) list_recal_vselct_pane

0x8e5c,	// (0x000653c9) btmg_button_pane

0x8e68,	// (0x000653d5) main_btmg_pane_g1

0x9880,	// (0x00065ded) bg_button_pane_cp044

0xecfb,	// (0x0006b268) btmg_button_pane_t1

0xc7f5,	// (0x00068d62) aid_listscroll_gen

0xa54e,	// (0x00066abb) main_cntbar_detail_pane

0xe7b3,	// (0x0006ad20) list_cmail_folder_pane

0xd01f,	// (0x0006958c) sp_fs_scroll_pane_cp03_ParamLimits

0x8e70,	// (0x000653dd) list_single_fs_dyc_pane_cp01_ParamLimits

0x8e70,	// (0x000653dd) list_single_fs_dyc_pane_cp01

0xed09,	// (0x0006b276) aid_size_cmail_indent

0xa61c,	// (0x00066b89) list_single_dyc_row_pane_cp01

0x8ec7,	// (0x00065434) cntbar_detail_list_pane_ParamLimits

0x8ec7,	// (0x00065434) cntbar_detail_list_pane

0x8f01,	// (0x0006546e) main_cntbar_detail_cont_pane_ParamLimits

0x8f01,	// (0x0006546e) main_cntbar_detail_cont_pane

0x31e5,	// (0x0005f752) scroll_pane_cp032_ParamLimits

0x31e5,	// (0x0005f752) scroll_pane_cp032

0x8f0d,	// (0x0006547a) cntbar_detail_list_event_pane_ParamLimits

0x8f0d,	// (0x0006547a) cntbar_detail_list_event_pane

0x8ed3,	// (0x00065440) cntbar_detail_list_shct_pane

0xac0f,	// (0x0006717c) aid_list_gen

0xed12,	// (0x0006b27f) aid_scroll

0xed1b,	// (0x0006b288) aid_size_touch_scroll_bar

0x73ee,	// (0x0006395b) aid_list_double

0x8f21,	// (0x0006548e) aid_list_single

0xeac1,	// (0x0006b02e) aid_list_single_lg

0x8f2a,	// (0x00065497) aid_list_z_g_a_sm

0x8f32,	// (0x0006549f) aid_list_z_g_d

0x8f3a,	// (0x000654a7) aid_txt_z_prm

0x8f48,	// (0x000654b5) aid_txt_z_prm_cp01

0x8f56,	// (0x000654c3) aid_txt_z_sec

0x8f64,	// (0x000654d1) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8f64,	// (0x000654d1) main_cntbar_detail_cont_pane_g1

0x8f71,	// (0x000654de) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8f71,	// (0x000654de) main_cntbar_detail_cont_pane_g2

0x0001,

0xfbb1,	// (0x0006c11e) main_cntbar_detail_cont_pane_g_ParamLimits

0xfbb1,	// (0x0006c11e) main_cntbar_detail_cont_pane_g

0xed24,	// (0x0006b291) main_cntbar_detail_cont_pane_t1

0xed32,	// (0x0006b29f) main_cntbar_detail_cont_pane_t2

0xed40,	// (0x0006b2ad) main_cntbar_detail_cont_pane_t3

0x0002,

0x0bba,	// (0x0005d127) main_cntbar_detail_cont_pane_t

0x8f7d,	// (0x000654ea) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8f7d,	// (0x000654ea) cell_cntbar_detail_list_shct_pane

0xed4e,	// (0x0006b2bb) cntbar_detail_list_shct_pane_g1

0xed57,	// (0x0006b2c4) cntbar_detail_list_shct_pane_g2

0x0001,

0x0bc1,	// (0x0005d12e) cntbar_detail_list_shct_pane_g

0x8f91,	// (0x000654fe) cntbar_detail_list_event_pane_g1_ParamLimits

0x8f91,	// (0x000654fe) cntbar_detail_list_event_pane_g1

0x8f9d,	// (0x0006550a) cntbar_detail_list_event_pane_g2_ParamLimits

0x8f9d,	// (0x0006550a) cntbar_detail_list_event_pane_g2

0x0005,

0xfbb6,	// (0x0006c123) cntbar_detail_list_event_pane_g_ParamLimits

0xfbb6,	// (0x0006c123) cntbar_detail_list_event_pane_g

0x9009,	// (0x00065576) cntbar_detail_list_event_pane_t1_ParamLimits

0x9009,	// (0x00065576) cntbar_detail_list_event_pane_t1

0x901e,	// (0x0006558b) cntbar_detail_list_event_pane_t2_ParamLimits

0x901e,	// (0x0006558b) cntbar_detail_list_event_pane_t2

0x0002,

0xfbc3,	// (0x0006c130) cntbar_detail_list_event_pane_t_ParamLimits

0xfbc3,	// (0x0006c130) cntbar_detail_list_event_pane_t

0xcc13,	// (0x00069180) cell_cntbar_detail_list_shct_pane_g1

0xb39e,	// (0x0006790b) navi_pane_mv_g3

0xa54e,	// (0x00066abb) main_cntbar_detail_pane_ParamLimits

0x9880,	// (0x00065ded) main_notif_wgt_pane

0x5b90,	// (0x000620fd) aid_tch_main_mp4_pane_g4

0x5dc5,	// (0x00062332) popup_slider_window_cp02

0xa58b,	// (0x00066af8) list_recal_day_event_pane

0x8ea7,	// (0x00065414) cntbar_detail_btn_pane_ParamLimits

0x8ea7,	// (0x00065414) cntbar_detail_btn_pane

0x8eb7,	// (0x00065424) cntbar_detail_btn_pane_cp01_ParamLimits

0x8eb7,	// (0x00065424) cntbar_detail_btn_pane_cp01

0x8ed3,	// (0x00065440) cntbar_detail_list_shct_pane_ParamLimits

0x8edf,	// (0x0006544c) cntbar_detail_pane_g1_ParamLimits

0x8edf,	// (0x0006544c) cntbar_detail_pane_g1

0x8eeb,	// (0x00065458) cntbar_detail_pane_t1_ParamLimits

0x8eeb,	// (0x00065458) cntbar_detail_pane_t1

0x8fa9,	// (0x00065516) cntbar_detail_list_event_pane_g3_ParamLimits

0x8fa9,	// (0x00065516) cntbar_detail_list_event_pane_g3

0x8fc1,	// (0x0006552e) cntbar_detail_list_event_pane_g4_ParamLimits

0x8fc1,	// (0x0006552e) cntbar_detail_list_event_pane_g4

0x8fd9,	// (0x00065546) cntbar_detail_list_event_pane_g5_ParamLimits

0x8fd9,	// (0x00065546) cntbar_detail_list_event_pane_g5

0x8ff1,	// (0x0006555e) cntbar_detail_list_event_pane_g6_ParamLimits

0x8ff1,	// (0x0006555e) cntbar_detail_list_event_pane_g6

0x9033,	// (0x000655a0) cntbar_detail_list_event_pane_t3_ParamLimits

0x9033,	// (0x000655a0) cntbar_detail_list_event_pane_t3

0x9045,	// (0x000655b2) popup_notif_wgt_window_ParamLimits

0x9045,	// (0x000655b2) popup_notif_wgt_window

0x9055,	// (0x000655c2) popup_submenu_window_cp01_ParamLimits

0x9055,	// (0x000655c2) popup_submenu_window_cp01

0xb3e6,	// (0x00067953) bg_popup_window_pane_cp10

0xed60,	// (0x0006b2cd) listscroll_notif_wgt_pane

0xed71,	// (0x0006b2de) list_notif_wgt_window

0xed7a,	// (0x0006b2e7) scroll_pane_cp033

0x9063,	// (0x000655d0) list_notif_wgt_row_pane_ParamLimits

0x9063,	// (0x000655d0) list_notif_wgt_row_pane

0xed83,	// (0x0006b2f0) aid_size_list_notif_wgt_del

0xed90,	// (0x0006b2fd) list_notif_wgt_row_pane_g1

0xed9c,	// (0x0006b309) list_notif_wgt_row_pane_g2

0xeda8,	// (0x0006b315) list_notif_wgt_row_pane_g3

0x0002,

0x0bda,	// (0x0005d147) list_notif_wgt_row_pane_g

0xedb5,	// (0x0006b322) list_notif_wgt_row_pane_t1

0xedca,	// (0x0006b337) list_notif_wgt_row_pane_t2

0xeddc,	// (0x0006b349) list_notif_wgt_row_pane_t3

0x0002,

0x0be1,	// (0x0005d14e) list_notif_wgt_row_pane_t

0xd8a6,	// (0x00069e13) list_recal_day_event_pane_g1

0xedee,	// (0x0006b35b) list_recal_day_event_pane_t1

0x9880,	// (0x00065ded) bg_button_pane_cp045

0xedfd,	// (0x0006b36a) cntbar_detail_btn_pane_t1

0xc809,	// (0x00068d76) main_callh_pane_ParamLimits

0xc809,	// (0x00068d76) main_callh_pane

0x9880,	// (0x00065ded) main_coverflow0_pane

0x9880,	// (0x00065ded) main_wgtman_pane

0x807b,	// (0x000645e8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x807b,	// (0x000645e8) main_fs_bigclock_unlock_btn_pane

0x889a,	// (0x00064e07) bg_button_pane_cp16

0x88aa,	// (0x00064e17) cell_tport_appsw_pane_g3

0x9075,	// (0x000655e2) cf0_flow_pane_ParamLimits

0x9075,	// (0x000655e2) cf0_flow_pane

0xee0b,	// (0x0006b378) listscroll_cf0_pane

0xee16,	// (0x0006b383) main_cf0_pane_g1

0x9084,	// (0x000655f1) main_cf0_pane_t1_ParamLimits

0x9084,	// (0x000655f1) main_cf0_pane_t1

0x9098,	// (0x00065605) main_cf0_pane_t2_ParamLimits

0x9098,	// (0x00065605) main_cf0_pane_t2

0x0001,

0xfbca,	// (0x0006c137) main_cf0_pane_t_ParamLimits

0xfbca,	// (0x0006c137) main_cf0_pane_t

0xee28,	// (0x0006b395) scroll_pane_cp11

0x90ac,	// (0x00065619) cf0_flow_pane_g1

0x90b4,	// (0x00065621) cf0_flow_pane_g2

0x0001,

0xfbcf,	// (0x0006c13c) cf0_flow_pane_g

0x90bc,	// (0x00065629) cf0_flow_pane_t1

0x9880,	// (0x00065ded) main_call6_pane

0x9880,	// (0x00065ded) main_calllock_pane

0x90ca,	// (0x00065637) call6_btn_grp_pane_ParamLimits

0x90ca,	// (0x00065637) call6_btn_grp_pane

0x90d9,	// (0x00065646) call6_pane_g1_ParamLimits

0x90d9,	// (0x00065646) call6_pane_g1

0x90e8,	// (0x00065655) popup_call6_1st_window_ParamLimits

0x90e8,	// (0x00065655) popup_call6_1st_window

0x90f6,	// (0x00065663) popup_call6_2nd_window_ParamLimits

0x90f6,	// (0x00065663) popup_call6_2nd_window

0x9104,	// (0x00065671) cell_call6_btn_pane_ParamLimits

0x9104,	// (0x00065671) cell_call6_btn_pane

0xb3e6,	// (0x00067953) bg_popup_call2_in_pane_cp03

0xee33,	// (0x0006b3a0) popup_call6_1st_window_g1

0xee3b,	// (0x0006b3a8) popup_call6_1st_window_g2

0xee43,	// (0x0006b3b0) popup_call6_1st_window_g3

0x0002,

0xfbd4,	// (0x0006c141) popup_call6_1st_window_g

0xee4b,	// (0x0006b3b8) popup_call6_1st_window_t1

0xee5a,	// (0x0006b3c7) popup_call6_1st_window_t2

0xee6a,	// (0x0006b3d7) popup_call6_1st_window_t3

0x0002,

0xfbdb,	// (0x0006c148) popup_call6_1st_window_t

0xb3e6,	// (0x00067953) bg_popup_call2_in_pane_cp04

0xee33,	// (0x0006b3a0) popup_call6_2nd_window_g1

0xee3b,	// (0x0006b3a8) popup_call6_2nd_window_g2

0xee43,	// (0x0006b3b0) popup_call6_2nd_window_g3

0x0002,

0xfbd4,	// (0x0006c141) popup_call6_2nd_window_g

0xee4b,	// (0x0006b3b8) popup_call6_2nd_window_t1

0x9880,	// (0x00065ded) bg_button_pane_cp15

0xee7a,	// (0x0006b3e7) cell_call6_btn_pane_g1

0xee83,	// (0x0006b3f0) cell_call6_btn_pane_t1

0x9113,	// (0x00065680) listscroll_wgtman_pane_ParamLimits

0x9113,	// (0x00065680) listscroll_wgtman_pane

0x912f,	// (0x0006569c) wgtman_btn_pane_ParamLimits

0x912f,	// (0x0006569c) wgtman_btn_pane

0xb195,	// (0x00067702) aid_scroll_copy1

0xee92,	// (0x0006b3ff) list_wgtman_pane

0x9164,	// (0x000656d1) wgtman_btn_pane_g1_ParamLimits

0x9164,	// (0x000656d1) wgtman_btn_pane_g1

0x918c,	// (0x000656f9) wgtman_btn_pane_t1_ParamLimits

0x918c,	// (0x000656f9) wgtman_btn_pane_t1

0xee9c,	// (0x0006b409) wgtman_btn_pane_t2_ParamLimits

0xee9c,	// (0x0006b409) wgtman_btn_pane_t2

0x0001,

0xfbe2,	// (0x0006c14f) wgtman_btn_pane_t_ParamLimits

0xfbe2,	// (0x0006c14f) wgtman_btn_pane_t

0x91c3,	// (0x00065730) listrow_wgtman_pane_ParamLimits

0x91c3,	// (0x00065730) listrow_wgtman_pane

0x91df,	// (0x0006574c) listrow_wgtman_pane_g1

0x91ec,	// (0x00065759) listrow_wgtman_pane_g2

0x0001,

0xfbe7,	// (0x0006c154) listrow_wgtman_pane_g

0x920a,	// (0x00065777) listrow_wgtman_pane_t1

0x9222,	// (0x0006578f) listrow_wgtman_pane_t2

0x0001,

0xfbec,	// (0x0006c159) listrow_wgtman_pane_t

0x9248,	// (0x000657b5) wait_bar_pane_cp09

0xeeb3,	// (0x0006b420) main_calllock_btn_pane

0xeebd,	// (0x0006b42a) main_calllock_pane_g1

0x9880,	// (0x00065ded) bg_button_pane_cp17

0xeec8,	// (0x0006b435) main_calllock_btn_pane_g1

0xeed1,	// (0x0006b43e) main_calllock_btn_pane_t1

0x9880,	// (0x00065ded) main_dialer3_pane

0x9880,	// (0x00065ded) main_fmrd2_pane

0xcc13,	// (0x00069180) main_fs_bigclock_unlock_btn_pane_g1

0xeee8,	// (0x0006b455) main_fs_bigclock_unlock_btn_pane_t1

0x925a,	// (0x000657c7) area_fmrd2_info_pane_ParamLimits

0x925a,	// (0x000657c7) area_fmrd2_info_pane

0x9268,	// (0x000657d5) area_fmrd2_visual_pane_ParamLimits

0x9268,	// (0x000657d5) area_fmrd2_visual_pane

0x9276,	// (0x000657e3) fmrd2_indi_pane_ParamLimits

0x9276,	// (0x000657e3) fmrd2_indi_pane

0x9283,	// (0x000657f0) area_fmrd2_visual_pane_g1

0x928b,	// (0x000657f8) area_fmrd2_visual_pane_t1

0x929b,	// (0x00065808) area_fmrd2_visual_pane_t2

0x92ab,	// (0x00065818) area_fmrd2_visual_pane_t3

0x0002,

0xfbf6,	// (0x0006c163) area_fmrd2_visual_pane_t

0x92bb,	// (0x00065828) area_fmrd2_info_pane_g1

0x92c3,	// (0x00065830) area_fmrd2_info_pane_t1

0x92d3,	// (0x00065840) area_fmrd2_info_pane_t2

0x92e3,	// (0x00065850) area_fmrd2_info_pane_t3

0x92f3,	// (0x00065860) area_fmrd2_info_pane_t4

0x0003,

0xfbfd,	// (0x0006c16a) area_fmrd2_info_pane_t

0x9301,	// (0x0006586e) fmrd2_indi_pane_t1

0x9311,	// (0x0006587e) fmrd2_indi_pane_t2

0x9321,	// (0x0006588e) fmrd2_indi_pane_t3

0x0002,

0xfc06,	// (0x0006c173) fmrd2_indi_pane_t

0xe434,	// (0x0006a9a1) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe434,	// (0x0006a9a1) list_single_fs_bigclock_indicator_pane_g5

0xe4db,	// (0x0006aa48) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4db,	// (0x0006aa48) list_single_fs_bigclock_indicator_pane_t5

0x8ab0,	// (0x0006501d) aid_cell_bcale_month_pane_ParamLimits

0x8ab0,	// (0x0006501d) aid_cell_bcale_month_pane

0x8ace,	// (0x0006503b) bcale_month_pane_ParamLimits

0x8ace,	// (0x0006503b) bcale_month_pane

0x8aec,	// (0x00065059) bcale_preview_pane_ParamLimits

0x8aec,	// (0x00065059) bcale_preview_pane

0xec93,	// (0x0006b200) list_single_fs_bigclock_pane_t1_ParamLimits

0xecb2,	// (0x0006b21f) list_single_fs_bigclock_pane_t2_ParamLimits

0xecb2,	// (0x0006b21f) list_single_fs_bigclock_pane_t2

0x0001,

0x0bab,	// (0x0005d118) list_single_fs_bigclock_pane_t_ParamLimits

0x0bab,	// (0x0005d118) list_single_fs_bigclock_pane_t

0xeee0,	// (0x0006b44d) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbf1,	// (0x0006c15e) main_fs_bigclock_unlock_btn_pane_g

0x932f,	// (0x0006589c) aid_dia3_key_size_ParamLimits

0x932f,	// (0x0006589c) aid_dia3_key_size

0x933b,	// (0x000658a8) aid_dia3_listrow_size_ParamLimits

0x933b,	// (0x000658a8) aid_dia3_listrow_size

0x934b,	// (0x000658b8) dia3_keypad_fun_pane_ParamLimits

0x934b,	// (0x000658b8) dia3_keypad_fun_pane

0x935d,	// (0x000658ca) dia3_keypad_num_pane_ParamLimits

0x935d,	// (0x000658ca) dia3_keypad_num_pane

0x936f,	// (0x000658dc) dia3_listscroll_pane_ParamLimits

0x936f,	// (0x000658dc) dia3_listscroll_pane

0x937d,	// (0x000658ea) dia3_numentry_pane_ParamLimits

0x937d,	// (0x000658ea) dia3_numentry_pane

0xeef6,	// (0x0006b463) dia3_list_pane

0xef01,	// (0x0006b46e) scroll_pane_cp12

0x9880,	// (0x00065ded) bg_dia3_numentry_pane

0x938b,	// (0x000658f8) dia3_numentry_pane_t1

0x939a,	// (0x00065907) cell_dia3_key_num_pane

0x93a2,	// (0x0006590f) cell_dia3_key0_fun_pane_ParamLimits

0x93a2,	// (0x0006590f) cell_dia3_key0_fun_pane

0x93af,	// (0x0006591c) cell_dia3_key1_fun_pane_ParamLimits

0x93af,	// (0x0006591c) cell_dia3_key1_fun_pane

0x93bc,	// (0x00065929) dia3_listrow_pane

0xe143,	// (0x0006a6b0) bg_dia3_numentry_pane_g1

0x9880,	// (0x00065ded) bg_button_pane_cp21

0xef0c,	// (0x0006b479) cell_dia3_key_num_pane_t1

0xef1a,	// (0x0006b487) cell_dia3_key_num_pane_t2

0xef29,	// (0x0006b496) cell_dia3_key_num_pane_t3

0xef38,	// (0x0006b4a5) cell_dia3_key_num_pane_t4

0x0003,

0xfc0d,	// (0x0006c17a) cell_dia3_key_num_pane_t

0x9880,	// (0x00065ded) bg_button_pane_cp19

0x93c9,	// (0x00065936) cell_dia3_key0_fun_pane_g1

0x9880,	// (0x00065ded) bg_button_pane_cp20

0x93d1,	// (0x0006593e) cell_dia3_key1_fun_pane_g1

0x93d9,	// (0x00065946) area_left_week_number_pane

0x93ec,	// (0x00065959) area_top_day_name_pane

0x93fa,	// (0x00065967) frame_month_view_pane

0xef47,	// (0x0006b4b4) grid_month_view_pane

0x940f,	// (0x0006597c) cell_top_day_name_pane_ParamLimits

0x940f,	// (0x0006597c) cell_top_day_name_pane

0x9429,	// (0x00065996) cell_area_left_week_number_pane_ParamLimits

0x9429,	// (0x00065996) cell_area_left_week_number_pane

0x944c,	// (0x000659b9) cell_month_view_pane_ParamLimits

0x944c,	// (0x000659b9) cell_month_view_pane

0xef55,	// (0x0006b4c2) frm_month_g1

0x9478,	// (0x000659e5) frm_month_g2

0x9489,	// (0x000659f6) frm_month_g3

0x949a,	// (0x00065a07) frm_month_g4

0x94ab,	// (0x00065a18) frm_month_g5

0x94be,	// (0x00065a2b) frm_month_g6

0x94d1,	// (0x00065a3e) frm_month_g7

0xef62,	// (0x0006b4cf) frm_month_g8

0x94e4,	// (0x00065a51) frm_month_g9

0x94f1,	// (0x00065a5e) frm_month_g10

0x94fe,	// (0x00065a6b) frm_month_g11

0x950b,	// (0x00065a78) frm_month_g12

0x9518,	// (0x00065a85) frm_month_g13

0x9525,	// (0x00065a92) frm_month_g14

0x9534,	// (0x00065aa1) frm_month_g15

0x9543,	// (0x00065ab0) frm_month_g16

0x000f,

0xfc16,	// (0x0006c183) frm_month_g

0xef6f,	// (0x0006b4dc) cell_top_day_name_pane_t1

0x9552,	// (0x00065abf) cell_area_left_week_number_pane_g1

0x9561,	// (0x00065ace) cell_area_left_week_number_pane_t1

0xce73,	// (0x000693e0) cell_month_view_pane_g1

0x9577,	// (0x00065ae4) cell_month_view_pane_t1

0x9880,	// (0x00065ded) main_fps_pane

0xe6cb,	// (0x0006ac38) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe6cb,	// (0x0006ac38) cmail_ddmenu_btn02_pane_cp1

0xe6e7,	// (0x0006ac54) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe6e7,	// (0x0006ac54) cmail_ddmenu_btn02_pane_cp2

0x8d35,	// (0x000652a2) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8d35,	// (0x000652a2) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfb78,	// (0x0006c0e5) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfb78,	// (0x0006c0e5) cmail_ddmenu_btn02_pane_g

0x8d53,	// (0x000652c0) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8d53,	// (0x000652c0) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfb7d,	// (0x0006c0ea) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfb7d,	// (0x0006c0ea) cmail_ddmenu_btn02_pane_t

0x958d,	// (0x00065afa) fps_text_pane_ParamLimits

0x958d,	// (0x00065afa) fps_text_pane

0x959a,	// (0x00065b07) main_fps_pane_g1_ParamLimits

0x959a,	// (0x00065b07) main_fps_pane_g1

0x95a8,	// (0x00065b15) wait_bar_pane_cp010_ParamLimits

0x95a8,	// (0x00065b15) wait_bar_pane_cp010

0x95b4,	// (0x00065b21) fps_text_pane_t1_ParamLimits

0x95b4,	// (0x00065b21) fps_text_pane_t1

0x61b5,	// (0x00062722) cam4_image_uncrop_pane_g1

0x61be,	// (0x0006272b) cam4_image_uncrop_pane_g2

0x61c7,	// (0x00062734) cam4_image_uncrop_pane_g3

0x61d0,	// (0x0006273d) cam4_image_uncrop_pane_g4

0x0003,

0xf761,	// (0x0006bcce) cam4_image_uncrop_pane_g

0x93bc,	// (0x00065929) dia3_listrow_pane_ParamLimits

0x9880,	// (0x00065ded) main_phob2_pane

0x887c,	// (0x00064de9) cell_tport_appsw_pane_cp02_ParamLimits

0x887c,	// (0x00064de9) cell_tport_appsw_pane_cp02

0x888b,	// (0x00064df8) cell_tport_appsw_pane_cp03_ParamLimits

0x888b,	// (0x00064df8) cell_tport_appsw_pane_cp03

0x9880,	// (0x00065ded) phob2_contact_card_pane

0x9880,	// (0x00065ded) phob2_listscroll_pane

0xef82,	// (0x0006b4ef) phob2_list_pane

0xef8a,	// (0x0006b4f7) scroll_pane_cp034

0x95cd,	// (0x00065b3a) phob2_cc_data_pane_ParamLimits

0x95cd,	// (0x00065b3a) phob2_cc_data_pane

0x95e7,	// (0x00065b54) phob2_cc_listscroll_pane_ParamLimits

0x95e7,	// (0x00065b54) phob2_cc_listscroll_pane

0x9601,	// (0x00065b6e) list_double_large_graphic_phob2_pane_ParamLimits

0x9601,	// (0x00065b6e) list_double_large_graphic_phob2_pane

0x9623,	// (0x00065b90) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9623,	// (0x00065b90) list_double_large_graphic_phob2_pane_g1

0x9639,	// (0x00065ba6) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9639,	// (0x00065ba6) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfc37,	// (0x0006c1a4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfc37,	// (0x0006c1a4) list_double_large_graphic_phob2_pane_g

0x9645,	// (0x00065bb2) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9645,	// (0x00065bb2) list_double_large_graphic_phob2_pane_t1

0x965b,	// (0x00065bc8) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x965b,	// (0x00065bc8) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfc3c,	// (0x0006c1a9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfc3c,	// (0x0006c1a9) list_double_large_graphic_phob2_pane_t

0x9880,	// (0x00065ded) list_highlight_pane_cp024

0x9670,	// (0x00065bdd) phob2_cc_button_pane

0x9678,	// (0x00065be5) phob2_cc_data_pane_g1_ParamLimits

0x9678,	// (0x00065be5) phob2_cc_data_pane_g1

0x9684,	// (0x00065bf1) phob2_cc_data_pane_g2_ParamLimits

0x9684,	// (0x00065bf1) phob2_cc_data_pane_g2

0x0001,

0xfc41,	// (0x0006c1ae) phob2_cc_data_pane_g_ParamLimits

0xfc41,	// (0x0006c1ae) phob2_cc_data_pane_g

0x9690,	// (0x00065bfd) phob2_cc_data_pane_t1_ParamLimits

0x9690,	// (0x00065bfd) phob2_cc_data_pane_t1

0x96a2,	// (0x00065c0f) phob2_cc_data_pane_t2_ParamLimits

0x96a2,	// (0x00065c0f) phob2_cc_data_pane_t2

0x96b4,	// (0x00065c21) phob2_cc_data_pane_t3_ParamLimits

0x96b4,	// (0x00065c21) phob2_cc_data_pane_t3

0x0002,

0xfc46,	// (0x0006c1b3) phob2_cc_data_pane_t_ParamLimits

0xfc46,	// (0x0006c1b3) phob2_cc_data_pane_t

0xef92,	// (0x0006b4ff) phob2_cc_list_pane_ParamLimits

0xef92,	// (0x0006b4ff) phob2_cc_list_pane

0xda57,	// (0x00069fc4) scroll_pane_cp035_ParamLimits

0xda57,	// (0x00069fc4) scroll_pane_cp035

0xa54e,	// (0x00066abb) bg_button_pane_cp033

0xef9e,	// (0x0006b50b) phob2_cc_button_pane_g1

0xefaa,	// (0x0006b517) phob2_cc_button_pane_t1

0xefbf,	// (0x0006b52c) phob2_cc_button_pane_t2

0x0001,

0xfc4d,	// (0x0006c1ba) phob2_cc_button_pane_t

0x96c6,	// (0x00065c33) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x96c6,	// (0x00065c33) list_double_large_graphic_phob2_cc_pane

0x96f5,	// (0x00065c62) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x96f5,	// (0x00065c62) list_double_large_graphic_phob2_cc_pane_g1

0x9706,	// (0x00065c73) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9706,	// (0x00065c73) list_double_large_graphic_phob2_cc_pane_g2

0x9715,	// (0x00065c82) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9715,	// (0x00065c82) list_double_large_graphic_phob2_cc_pane_g3

0x9724,	// (0x00065c91) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9724,	// (0x00065c91) list_double_large_graphic_phob2_cc_pane_g4

0x9735,	// (0x00065ca2) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9735,	// (0x00065ca2) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc52,	// (0x0006c1bf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc52,	// (0x0006c1bf) list_double_large_graphic_phob2_cc_pane_g

0x9744,	// (0x00065cb1) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9744,	// (0x00065cb1) list_double_large_graphic_phob2_cc_pane_t1

0x976d,	// (0x00065cda) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x976d,	// (0x00065cda) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc5d,	// (0x0006c1ca) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc5d,	// (0x0006c1ca) list_double_large_graphic_phob2_cc_pane_t

0xefd1,	// (0x0006b53e) list_highlight_pane_cp025_ParamLimits

0xefd1,	// (0x0006b53e) list_highlight_pane_cp025

0xa54e,	// (0x00066abb) bg_button_pane_cp033_ParamLimits

0xef9e,	// (0x0006b50b) phob2_cc_button_pane_g1_ParamLimits

0xefaa,	// (0x0006b517) phob2_cc_button_pane_t1_ParamLimits

0xefbf,	// (0x0006b52c) phob2_cc_button_pane_t2_ParamLimits

0xfc4d,	// (0x0006c1ba) phob2_cc_button_pane_t_ParamLimits

0x1021,	// (0x0005d58e) popup_wgtman_window

0xd782,	// (0x00069cef) scroll_pane_cp038

0x914c,	// (0x000656b9) wgtman_btn_pane_cp_01_ParamLimits

0x914c,	// (0x000656b9) wgtman_btn_pane_cp_01

0xefdf,	// (0x0006b54c) wgtman_content_pane

0xefe8,	// (0x0006b555) wgtman_heading_pane

0x9880,	// (0x00065ded) bg_heading_pane_cp02

0xeff1,	// (0x0006b55e) wgtman_heading_pane_g1

0xeff9,	// (0x0006b566) wgtman_heading_pane_t1

0xf007,	// (0x0006b574) scroll_pane_cp036

0xf00f,	// (0x0006b57c) wgtman_list_pane

0xf017,	// (0x0006b584) wgtman_list_pane_t1_ParamLimits

0xf017,	// (0x0006b584) wgtman_list_pane_t1

0x6114,	// (0x00062681) cam4_grid_pane

0x6ea9,	// (0x00063416) bg_button_pane_cp015_ParamLimits

0x6ebb,	// (0x00063428) bg_button_pane_cp016_ParamLimits

0x6ece,	// (0x0006343b) bg_button_pane_cp017_ParamLimits

0x6f24,	// (0x00063491) popup_vitu2_query_window_g3_ParamLimits

0x6f24,	// (0x00063491) popup_vitu2_query_window_g3

0x6fdf,	// (0x0006354c) popup_vitu2_query_window_t6_ParamLimits

0x6fdf,	// (0x0006354c) popup_vitu2_query_window_t6

0x700a,	// (0x00063577) popup_vitu2_query_window_t7_ParamLimits

0x700a,	// (0x00063577) popup_vitu2_query_window_t7

0xde7b,	// (0x0006a3e8) cam4_grid_pane_g1

0xde84,	// (0x0006a3f1) cam4_grid_pane_g2

0xf033,	// (0x0006b5a0) cam4_grid_pane_g3

0xf03c,	// (0x0006b5a9) cam4_grid_pane_g4

0x0003,

0xfc62,	// (0x0006c1cf) cam4_grid_pane_g

0x1eea,	// (0x0005e457) aid_placing_vt_slider_lsc_ParamLimits

0x222a,	// (0x0005e797) vidtel_button_pane_ParamLimits

0x222a,	// (0x0005e797) vidtel_button_pane

0xf047,	// (0x0006b5b4) bg_button_pane_cp034

0x9796,	// (0x00065d03) vidtel_button_pane_g1

0xf051,	// (0x0006b5be) vidtel_button_pane_t1

0xd884,	// (0x00069df1) aid_size_vtel_slider_touch

0xda57,	// (0x00069fc4) scroll_pane_cp039

0xe181,	// (0x0006a6ee) ncim_query_button_pane_cp01_ParamLimits

0xe1a0,	// (0x0006a70d) ncimui_query_pane_g1_ParamLimits

0xa54e,	// (0x00066abb) input_focus_pane_cp012_ParamLimits

0xe1c5,	// (0x0006a732) ncim_query_entry_pane_t1_ParamLimits

0xda57,	// (0x00069fc4) scroll_pane_cp039_ParamLimits

0xb27b,	// (0x000677e8) navi_pane_bcale_mc_g1

0xb283,	// (0x000677f0) navi_pane_bcale_mc_t1

0xe730,	// (0x0006ac9d) main_sp_fs_email_pane_g1

0xe73c,	// (0x0006aca9) main_sp_fs_email_pane_g2

0x0001,

0x0a16,	// (0x0005cf83) main_sp_fs_email_pane_g

0xe98d,	// (0x0006aefa) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe98d,	// (0x0006aefa) list_single_cale_mrui_row_pane_g3

0x8d7b,	// (0x000652e8) list_single_recal_day_pane_g5_event_pane

0xa5f0,	// (0x00066b5d) list_single_recal_day_pane_g7

0xf05f,	// (0x0006b5cc) list_recal_day_event_pane_cp01

0xf068,	// (0x0006b5d5) list_recal_vselct_arw_lo_pane_cp01

0xf070,	// (0x0006b5dd) list_recal_vselct_arw_up_pane_cp01

0xf078,	// (0x0006b5e5) list_recal_vselct_pane_cp01

0xd8a6,	// (0x00069e13) list_recal_day_event_pane_cp01_g1

0xa625,	// (0x00066b92) list_recal_day_event_pane_cp01_t1

0xa5f8,	// (0x00066b65) list_single_recal_day_pane_t1_ParamLimits

0xa60a,	// (0x00066b77) list_single_recal_day_pane_t2_ParamLimits

0xfb8d,	// (0x0006c0fa) list_single_recal_day_pane_t_ParamLimits

0xa6bd,	// (0x00066c2a) bg_notes_pane_ParamLimits

0xa77f,	// (0x00066cec) list_notes_pane_ParamLimits

0x1376,	// (0x0005d8e3) scroll_pane_cp06_ParamLimits

0xa7a1,	// (0x00066d0e) main_notes_pane_ParamLimits

0x9880,	// (0x00065ded) main_welc_pane

0x979e,	// (0x00065d0b) main_welc_body_pane_ParamLimits

0x979e,	// (0x00065d0b) main_welc_body_pane

0x97b7,	// (0x00065d24) main_welc_opti_pane_ParamLimits

0x97b7,	// (0x00065d24) main_welc_opti_pane

0x97ec,	// (0x00065d59) main_welc_pane_t1_ParamLimits

0x97ec,	// (0x00065d59) main_welc_pane_t1

0x980a,	// (0x00065d77) main_welc_body_row_pane_ParamLimits

0x980a,	// (0x00065d77) main_welc_body_row_pane

0xeab3,	// (0x0006b020) main_welc_opti_row_pane_ParamLimits

0xeab3,	// (0x0006b020) main_welc_opti_row_pane

0xf082,	// (0x0006b5ef) main_welc_opti_row_pane_g1

0xf08a,	// (0x0006b5f7) main_welc_opti_row_pane_t1

0xf09a,	// (0x0006b607) main_welc_body_row_pane_t1

0xed69,	// (0x0006b2d6) popup_notif_wgt_heading_pane

0xed83,	// (0x0006b2f0) aid_size_list_notif_wgt_del_ParamLimits

0xed90,	// (0x0006b2fd) list_notif_wgt_row_pane_g1_ParamLimits

0xed9c,	// (0x0006b309) list_notif_wgt_row_pane_g2_ParamLimits

0xeda8,	// (0x0006b315) list_notif_wgt_row_pane_g3_ParamLimits

0x0bda,	// (0x0005d147) list_notif_wgt_row_pane_g_ParamLimits

0xedb5,	// (0x0006b322) list_notif_wgt_row_pane_t1_ParamLimits

0xedca,	// (0x0006b337) list_notif_wgt_row_pane_t2_ParamLimits

0xeddc,	// (0x0006b349) list_notif_wgt_row_pane_t3_ParamLimits

0x0be1,	// (0x0005d14e) list_notif_wgt_row_pane_t_ParamLimits

0x91df,	// (0x0006574c) listrow_wgtman_pane_g1_ParamLimits

0x91ec,	// (0x00065759) listrow_wgtman_pane_g2_ParamLimits

0xfbe7,	// (0x0006c154) listrow_wgtman_pane_g_ParamLimits

0x920a,	// (0x00065777) listrow_wgtman_pane_t1_ParamLimits

0x9222,	// (0x0006578f) listrow_wgtman_pane_t2_ParamLimits

0xfbec,	// (0x0006c159) listrow_wgtman_pane_t_ParamLimits

0x9248,	// (0x000657b5) wait_bar_pane_cp09_ParamLimits

0x9880,	// (0x00065ded) bg_popup_heading_pane_cp02

0xf0a9,	// (0x0006b616) popup_notif_wgt_heading_pane_g1

0xf0b1,	// (0x0006b61e) popup_notif_wgt_heading_pane_t1

0x9880,	// (0x00065ded) main_vids_pane

0x9880,	// (0x00065ded) vids_listscroll_pane

0x9836,	// (0x00065da3) scroll_pane_cp040

0x9880,	// (0x00065ded) vids_list_pane

0x9841,	// (0x00065dae) vids_list_double_pane_ParamLimits

0x9841,	// (0x00065dae) vids_list_double_pane

0x9859,	// (0x00065dc6) vids_list_double_pane_g1

0x9862,	// (0x00065dcf) vids_list_double_pane_t1

0x9872,	// (0x00065ddf) vids_list_double_pane_t2

0x0001,

0xfc70,	// (0x0006c1dd) vids_list_double_pane_t

0x4225,	// (0x00060792) main_ncimui_pane_ParamLimits

0x7c3b,	// (0x000641a8) main_ncimui_pane_g1_ParamLimits

0x7c47,	// (0x000641b4) main_ncimui_pane_g2_ParamLimits

0x7c47,	// (0x000641b4) main_ncimui_pane_g2

0x0001,

0xfa19,	// (0x0006bf86) main_ncimui_pane_g_ParamLimits

0xfa19,	// (0x0006bf86) main_ncimui_pane_g

0x97d2,	// (0x00065d3f) main_welc_pane_g1_ParamLimits

0x97d2,	// (0x00065d3f) main_welc_pane_g1

0x97de,	// (0x00065d4b) main_welc_pane_g2_ParamLimits

0x97de,	// (0x00065d4b) main_welc_pane_g2

0x0001,

0xfc6b,	// (0x0006c1d8) main_welc_pane_g_ParamLimits

0xfc6b,	// (0x0006c1d8) main_welc_pane_g

0xa6bd,	// (0x00066c2a) listscroll_mce_pane_ParamLimits

0xb3de,	// (0x0006794b) wait_bar_pane_cp10

0xc7fd,	// (0x00068d6a) main_cale_day_pane_ParamLimits

0xc7fd,	// (0x00068d6a) main_cale_week_pane_ParamLimits

0xa6bd,	// (0x00066c2a) main_messa_pane_ParamLimits

0x553a,	// (0x00061aa7) main_clock2_btn_pane_ParamLimits

0x553a,	// (0x00061aa7) main_clock2_btn_pane

0xcffb,	// (0x00069568) main_clock2_btn_pane_cp01_ParamLimits

0xcffb,	// (0x00069568) main_clock2_btn_pane_cp01

0xe95e,	// (0x0006aecb) list_cale_mrui_pane_ParamLimits

0xee20,	// (0x0006b38d) main_cf0_pane_g2

0x0001,

0x0be8,	// (0x0005d155) main_cf0_pane_g

0x93d9,	// (0x00065946) area_left_week_number_pane_ParamLimits

0x93ec,	// (0x00065959) area_top_day_name_pane_ParamLimits

0x93fa,	// (0x00065967) frame_month_view_pane_ParamLimits

0xef47,	// (0x0006b4b4) grid_month_view_pane_ParamLimits

0xef55,	// (0x0006b4c2) frm_month_g1_ParamLimits

0x9478,	// (0x000659e5) frm_month_g2_ParamLimits

0x9489,	// (0x000659f6) frm_month_g3_ParamLimits

0x949a,	// (0x00065a07) frm_month_g4_ParamLimits

0x94ab,	// (0x00065a18) frm_month_g5_ParamLimits

0x94be,	// (0x00065a2b) frm_month_g6_ParamLimits

0x94d1,	// (0x00065a3e) frm_month_g7_ParamLimits

0xef62,	// (0x0006b4cf) frm_month_g8_ParamLimits

0x94e4,	// (0x00065a51) frm_month_g9_ParamLimits

0x94f1,	// (0x00065a5e) frm_month_g10_ParamLimits

0x94fe,	// (0x00065a6b) frm_month_g11_ParamLimits

0x950b,	// (0x00065a78) frm_month_g12_ParamLimits

0x9518,	// (0x00065a85) frm_month_g13_ParamLimits

0x9525,	// (0x00065a92) frm_month_g14_ParamLimits

0x9534,	// (0x00065aa1) frm_month_g15_ParamLimits

0x9543,	// (0x00065ab0) frm_month_g16_ParamLimits

0xfc16,	// (0x0006c183) frm_month_g_ParamLimits

0xef6f,	// (0x0006b4dc) cell_top_day_name_pane_t1_ParamLimits

0x9552,	// (0x00065abf) cell_area_left_week_number_pane_g1_ParamLimits

0x9561,	// (0x00065ace) cell_area_left_week_number_pane_t1_ParamLimits

0xce73,	// (0x000693e0) cell_month_view_pane_g1_ParamLimits

0x9577,	// (0x00065ae4) cell_month_view_pane_t1_ParamLimits

0xa6b5,	// (0x00066c22) main_clock2_btn_pane_g1

0xf0bf,	// (0x0006b62c) main_clock2_btn_pane_t1

0xa54e,	// (0x00066abb) listscroll_cmail_pane_ParamLimits

0xe730,	// (0x0006ac9d) main_sp_fs_email_pane_g1_ParamLimits

0xe73c,	// (0x0006aca9) main_sp_fs_email_pane_g2_ParamLimits

0x0a16,	// (0x0005cf83) main_sp_fs_email_pane_g_ParamLimits

0xeb13,	// (0x0006b080) list_recal_day_pane_ParamLimits

0xeb24,	// (0x0006b091) mian_recal_day_pane_t1

0x85d2,	// (0x00064b3f) list_single_dyc_row_text_pane_t4_ParamLimits

0x85d2,	// (0x00064b3f) list_single_dyc_row_text_pane_t4

0x8609,	// (0x00064b76) list_single_dyc_row_text_pane_t5_ParamLimits

0x8609,	// (0x00064b76) list_single_dyc_row_text_pane_t5

0xa12f,	// (0x0006669c) list_single_dyc_row_text_pane_t6_ParamLimits

0xa12f,	// (0x0006669c) list_single_dyc_row_text_pane_t6

0xad6b,	// (0x000672d8) aid_mgn_list_cale_time_pane

0x4225,	// (0x00060792) main_gallery2_pane_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small

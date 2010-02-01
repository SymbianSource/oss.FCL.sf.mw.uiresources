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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0004a885 };

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
0x55f2,	// (0x0004fe77) Screen

0x55fe,	// (0x0004fe83) application_window

0x563e,	// (0x0004fec3) area_bottom_pane_ParamLimits

0x563e,	// (0x0004fec3) area_bottom_pane

0x5673,	// (0x0004fef8) area_top_pane_ParamLimits

0x5673,	// (0x0004fef8) area_top_pane

0x2d6f,	// (0x0004d5f4) call_video_uplink_pane_ParamLimits

0x2d6f,	// (0x0004d5f4) call_video_uplink_pane

0x5700,	// (0x0004ff85) main_pane_ParamLimits

0x5700,	// (0x0004ff85) main_pane

0xe5ce,	// (0x00058e53) context_pane

0x87c4,	// (0x00053049) navi_pane

0x87e4,	// (0x00053069) popup_cale_events_window_ParamLimits

0x87e4,	// (0x00053069) popup_cale_events_window

0xe5e1,	// (0x00058e66) popup_mup_playback_window

0x87fc,	// (0x00053081) signal_pane

0x35d4,	// (0x0004de59) main_browser_pane

0x40b3,	// (0x0004e938) main_burst_pane

0x868e,	// (0x00052f13) main_calc_pane

0x40b3,	// (0x0004e938) main_cale_day_pane

0x35d4,	// (0x0004de59) main_cale_month_pane

0x40b3,	// (0x0004e938) main_cale_week_pane

0x40b3,	// (0x0004e938) main_call_pane

0x32a2,	// (0x0004db27) main_call_poc_pane

0x40b3,	// (0x0004e938) main_camera_pane

0x40b3,	// (0x0004e938) main_chi_dic_pane

0x3f38,	// (0x0004e7bd) main_clock_pane

0x32a2,	// (0x0004db27) main_fmradio_pane

0x40b3,	// (0x0004e938) main_graph_messa_pane

0x32a2,	// (0x0004db27) main_help_pane

0x35d4,	// (0x0004de59) main_im_pane

0x34fd,	// (0x0004dd82) main_image_pane_ParamLimits

0x34fd,	// (0x0004dd82) main_image_pane

0x32a2,	// (0x0004db27) main_location2_pane

0x40b3,	// (0x0004e938) main_location_pane

0x32a2,	// (0x0004db27) main_messa_pane

0x32a2,	// (0x0004db27) main_mp2_pane

0x40b3,	// (0x0004e938) main_mp_pane

0x32a2,	// (0x0004db27) main_msg_pane

0x32a2,	// (0x0004db27) main_mup_eq_pane

0x32a2,	// (0x0004db27) main_mup_pane

0x40b3,	// (0x0004e938) main_notes_pane

0x32a2,	// (0x0004db27) main_pec_pane

0x32a2,	// (0x0004db27) main_phob_pane

0x32a2,	// (0x0004db27) main_pinb_pane

0x32a2,	// (0x0004db27) main_postcard_pane

0x32a2,	// (0x0004db27) main_qdial_pane

0x40b3,	// (0x0004e938) main_skin_pane

0x32a2,	// (0x0004db27) main_smil2_pane

0x40b3,	// (0x0004e938) main_smil_pane

0x40b3,	// (0x0004e938) main_video_pane

0x40b3,	// (0x0004e938) main_video_tele_pane

0x34fd,	// (0x0004dd82) main_viewer_pane_ParamLimits

0x34fd,	// (0x0004dd82) main_viewer_pane

0x40b3,	// (0x0004e938) main_vorec_pane

0x86c4,	// (0x00052f49) popup_blid_sat_info_window_ParamLimits

0x86c4,	// (0x00052f49) popup_blid_sat_info_window

0x86da,	// (0x00052f5f) popup_dyc_status_message_window_ParamLimits

0x86da,	// (0x00052f5f) popup_dyc_status_message_window

0x86ea,	// (0x00052f6f) popup_grid_large_graphic_window_ParamLimits

0x86ea,	// (0x00052f6f) popup_grid_large_graphic_window

0x8760,	// (0x00052fe5) popup_loc_request_window_ParamLimits

0x8760,	// (0x00052fe5) popup_loc_request_window

0x879c,	// (0x00053021) popup_wml_address_window_ParamLimits

0x879c,	// (0x00053021) popup_wml_address_window

0x8566,	// (0x00052deb) call_muted_g1

0x8228,	// (0x00052aad) popup_call_audio_conf_window_ParamLimits

0x8228,	// (0x00052aad) popup_call_audio_conf_window

0x8576,	// (0x00052dfb) popup_call_audio_first_window_ParamLimits

0x8576,	// (0x00052dfb) popup_call_audio_first_window

0x85b6,	// (0x00052e3b) popup_call_audio_in_window_ParamLimits

0x85b6,	// (0x00052e3b) popup_call_audio_in_window

0x85da,	// (0x00052e5f) popup_call_audio_out_window_ParamLimits

0x85da,	// (0x00052e5f) popup_call_audio_out_window

0x85fc,	// (0x00052e81) popup_call_audio_second_window_ParamLimits

0x85fc,	// (0x00052e81) popup_call_audio_second_window

0x862c,	// (0x00052eb1) popup_call_audio_wait_window_ParamLimits

0x862c,	// (0x00052eb1) popup_call_audio_wait_window

0x864d,	// (0x00052ed2) popup_number_entry_window_ParamLimits

0x864d,	// (0x00052ed2) popup_number_entry_window

0x2d8d,	// (0x0004d612) bg_popup_call_pane_cp05_ParamLimits

0x2d8d,	// (0x0004d612) bg_popup_call_pane_cp05

0x2eaf,	// (0x0004d734) popup_number_entry_window_t1

0x2ec2,	// (0x0004d747) popup_number_entry_window_t2

0x2ed4,	// (0x0004d759) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x00059971) popup_number_entry_window_t

0x2ee6,	// (0x0004d76b) text_title_cp2

0x2ef9,	// (0x0004d77e) bg_popup_call_pane_cp_ParamLimits

0x2ef9,	// (0x0004d77e) bg_popup_call_pane_cp

0x2f07,	// (0x0004d78c) call_thumbnail_pane

0x2f0f,	// (0x0004d794) popup_call_audio_in_window_g1_ParamLimits

0x2f0f,	// (0x0004d794) popup_call_audio_in_window_g1

0x2f1b,	// (0x0004d7a0) popup_call_audio_in_window_g2_ParamLimits

0x2f1b,	// (0x0004d7a0) popup_call_audio_in_window_g2

0x2f27,	// (0x0004d7ac) popup_call_audio_in_window_g3_ParamLimits

0x2f27,	// (0x0004d7ac) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0005997a) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0005997a) popup_call_audio_in_window_g

0x2f33,	// (0x0004d7b8) popup_call_audio_in_window_t1_ParamLimits

0x2f33,	// (0x0004d7b8) popup_call_audio_in_window_t1

0x2f4f,	// (0x0004d7d4) popup_call_audio_in_window_t2_ParamLimits

0x2f4f,	// (0x0004d7d4) popup_call_audio_in_window_t2

0x2f6b,	// (0x0004d7f0) popup_call_audio_in_window_t3_ParamLimits

0x2f6b,	// (0x0004d7f0) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x00059981) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x00059981) popup_call_audio_in_window_t

0x2ef9,	// (0x0004d77e) bg_popup_call_pane_cp01_ParamLimits

0x2ef9,	// (0x0004d77e) bg_popup_call_pane_cp01

0x2f07,	// (0x0004d78c) call_thumbnail_pane_cp02

0x2f7e,	// (0x0004d803) call_type_pane_cp022

0x2f86,	// (0x0004d80b) popup_call_audio_out_window_g1_ParamLimits

0x2f86,	// (0x0004d80b) popup_call_audio_out_window_g1

0x2f98,	// (0x0004d81d) popup_call_audio_out_window_g2_ParamLimits

0x2f98,	// (0x0004d81d) popup_call_audio_out_window_g2

0x2fa4,	// (0x0004d829) popup_call_audio_out_window_g3_ParamLimits

0x2fa4,	// (0x0004d829) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x00059988) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x00059988) popup_call_audio_out_window_g

0x2fb6,	// (0x0004d83b) popup_call_audio_out_window_t1_ParamLimits

0x2fb6,	// (0x0004d83b) popup_call_audio_out_window_t1

0x2fce,	// (0x0004d853) popup_call_audio_out_window_t2_ParamLimits

0x2fce,	// (0x0004d853) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0005998f) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0005998f) popup_call_audio_out_window_t

0x2fe3,	// (0x0004d868) bg_popup_call_pane_ParamLimits

0x2fe3,	// (0x0004d868) bg_popup_call_pane

0x58e1,	// (0x00050166) call_thumbnail_pane_cp_ParamLimits

0x58e1,	// (0x00050166) call_thumbnail_pane_cp

0x3067,	// (0x0004d8ec) call_type_pane_cp01_ParamLimits

0x3067,	// (0x0004d8ec) call_type_pane_cp01

0x30ab,	// (0x0004d930) popup_call_audio_first_window_g1_ParamLimits

0x30ab,	// (0x0004d930) popup_call_audio_first_window_g1

0x30f7,	// (0x0004d97c) popup_call_audio_first_window_g2_ParamLimits

0x30f7,	// (0x0004d97c) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x00059994) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x00059994) popup_call_audio_first_window_g

0x313b,	// (0x0004d9c0) popup_call_audio_first_window_t1_ParamLimits

0x313b,	// (0x0004d9c0) popup_call_audio_first_window_t1

0x31e7,	// (0x0004da6c) popup_call_audio_first_window_t4_ParamLimits

0x31e7,	// (0x0004da6c) popup_call_audio_first_window_t4

0x3273,	// (0x0004daf8) popup_call_audio_first_window_t5_ParamLimits

0x3273,	// (0x0004daf8) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x00059999) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x00059999) popup_call_audio_first_window_t

0x32a2,	// (0x0004db27) bg_popup_call_pane_cp02

0x32ac,	// (0x0004db31) call_type_pane_cp023

0x32b4,	// (0x0004db39) popup_call_audio_wait_window_g1

0x32bc,	// (0x0004db41) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000599a0) popup_call_audio_wait_window_g

0x32c4,	// (0x0004db49) popup_call_audio_wait_window_t3

0x32d2,	// (0x0004db57) bg_popup_call_pane_cp03_ParamLimits

0x32d2,	// (0x0004db57) bg_popup_call_pane_cp03

0x3332,	// (0x0004dbb7) call_thumbnail_pane_cp011_ParamLimits

0x3332,	// (0x0004dbb7) call_thumbnail_pane_cp011

0x333e,	// (0x0004dbc3) call_type_pane_cp034_ParamLimits

0x333e,	// (0x0004dbc3) call_type_pane_cp034

0x337a,	// (0x0004dbff) popup_call_audio_second_window_g1_ParamLimits

0x337a,	// (0x0004dbff) popup_call_audio_second_window_g1

0x33b6,	// (0x0004dc3b) popup_call_audio_second_window_g2_ParamLimits

0x33b6,	// (0x0004dc3b) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x000599a5) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x000599a5) popup_call_audio_second_window_g

0x33f2,	// (0x0004dc77) popup_call_audio_second_window_t1_ParamLimits

0x33f2,	// (0x0004dc77) popup_call_audio_second_window_t1

0x3473,	// (0x0004dcf8) popup_call_audio_second_window_t2_ParamLimits

0x3473,	// (0x0004dcf8) popup_call_audio_second_window_t2

0x34a9,	// (0x0004dd2e) popup_call_audio_second_window_t3_ParamLimits

0x34a9,	// (0x0004dd2e) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x000599aa) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x000599aa) popup_call_audio_second_window_t

0x32a2,	// (0x0004db27) bg_popup_call_pane_cp04

0x34df,	// (0x0004dd64) list_conf_pane

0x34e7,	// (0x0004dd6c) popup_call_audio_conf_window_t1

0x34f5,	// (0x0004dd7a) call_thumbnail_pane_g1

0x34fd,	// (0x0004dd82) bg_pinb_pane_ParamLimits

0x34fd,	// (0x0004dd82) bg_pinb_pane

0x350b,	// (0x0004dd90) find_pinb_pane

0x3514,	// (0x0004dd99) listscroll_pinb_pane_ParamLimits

0x3514,	// (0x0004dd99) listscroll_pinb_pane

0x3523,	// (0x0004dda8) pinb_bg_pane_g1

0x5905,	// (0x0005018a) pinb_bg_pane_g2

0x5911,	// (0x00050196) pinb_bg_pane_g3

0x591d,	// (0x000501a2) pinb_bg_pane_g4

0x5929,	// (0x000501ae) pinb_bg_pane_g5

0x5935,	// (0x000501ba) pinb_bg_pane_g6

0x5940,	// (0x000501c5) pinb_bg_pane_g7

0x594b,	// (0x000501d0) pinb_bg_pane_g8

0x5956,	// (0x000501db) pinb_bg_pane_g9

0x5960,	// (0x000501e5) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x000599b1) pinb_bg_pane_g

0x597d,	// (0x00050202) grid_pinb_pane

0x5988,	// (0x0005020d) list_pinb_pane

0x5993,	// (0x00050218) scroll_pane_cp01_ParamLimits

0x5993,	// (0x00050218) scroll_pane_cp01

0x352d,	// (0x0004ddb2) find_pinb_pane_g1_ParamLimits

0x352d,	// (0x0004ddb2) find_pinb_pane_g1

0x3545,	// (0x0004ddca) find_pinb_pane_t1

0x3557,	// (0x0004dddc) find_pinb_pane_t2

0x0001,

0xf146,	// (0x000599cb) find_pinb_pane_t

0x356c,	// (0x0004ddf1) input_focus_pane_cp01_ParamLimits

0x356c,	// (0x0004ddf1) input_focus_pane_cp01

0x59a5,	// (0x0005022a) cell_pinb_pane_ParamLimits

0x59a5,	// (0x0005022a) cell_pinb_pane

0x59ca,	// (0x0005024f) cell_pinb_pane_g1_ParamLimits

0x59ca,	// (0x0005024f) cell_pinb_pane_g1

0x59df,	// (0x00050264) cell_pinb_pane_g2_ParamLimits

0x59df,	// (0x00050264) cell_pinb_pane_g2

0x3578,	// (0x0004ddfd) cell_pinb_pane_g3_ParamLimits

0x3578,	// (0x0004ddfd) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x000599d0) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x000599d0) cell_pinb_pane_g

0x32a2,	// (0x0004db27) grid_highlight_pane_cp01

0x59eb,	// (0x00050270) list_pinb_item_pane_ParamLimits

0x59eb,	// (0x00050270) list_pinb_item_pane

0x32a2,	// (0x0004db27) list_highlight_pane_cp02

0x5a0b,	// (0x00050290) list_pinb_item_pane_g1_ParamLimits

0x5a0b,	// (0x00050290) list_pinb_item_pane_g1

0x3584,	// (0x0004de09) list_pinb_item_pane_g2_ParamLimits

0x3584,	// (0x0004de09) list_pinb_item_pane_g2

0x5a18,	// (0x0005029d) list_pinb_item_pane_g3_ParamLimits

0x5a18,	// (0x0005029d) list_pinb_item_pane_g3

0x5a29,	// (0x000502ae) list_pinb_item_pane_g4_ParamLimits

0x5a29,	// (0x000502ae) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x000599d7) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x000599d7) list_pinb_item_pane_g

0x5a35,	// (0x000502ba) list_pinb_item_pane_t1_ParamLimits

0x5a35,	// (0x000502ba) list_pinb_item_pane_t1

0x5a66,	// (0x000502eb) calc_display_pane

0x5a84,	// (0x00050309) calc_paper_pane

0x5aa0,	// (0x00050325) grid_calc_pane

0x32a2,	// (0x0004db27) bg_list_pane_cp01

0x5aca,	// (0x0005034f) clock_g1

0x5ad2,	// (0x00050357) clock_g2

0x0001,

0xf15b,	// (0x000599e0) clock_g

0x5adc,	// (0x00050361) clock_t1_ParamLimits

0x5adc,	// (0x00050361) clock_t1

0x5af1,	// (0x00050376) clock_t2_ParamLimits

0x5af1,	// (0x00050376) clock_t2

0x5b03,	// (0x00050388) clock_t3_ParamLimits

0x5b03,	// (0x00050388) clock_t3

0x5b15,	// (0x0005039a) clock_t4_ParamLimits

0x5b15,	// (0x0005039a) clock_t4

0x5b27,	// (0x000503ac) clock_t5_ParamLimits

0x5b27,	// (0x000503ac) clock_t5

0x5b3c,	// (0x000503c1) clock_t6_ParamLimits

0x5b3c,	// (0x000503c1) clock_t6

0x5b4e,	// (0x000503d3) clock_t7_ParamLimits

0x5b4e,	// (0x000503d3) clock_t7

0x5b60,	// (0x000503e5) clock_t8_ParamLimits

0x5b60,	// (0x000503e5) clock_t8

0x5b76,	// (0x000503fb) clock_t9_ParamLimits

0x5b76,	// (0x000503fb) clock_t9

0x0008,

0xf160,	// (0x000599e5) clock_t_ParamLimits

0xf160,	// (0x000599e5) clock_t

0x3590,	// (0x0004de15) popup_clock_analogue_window_cp02

0x3590,	// (0x0004de15) popup_clock_digital_window_cp01

0x3598,	// (0x0004de1d) listscroll_help_pane

0x32a2,	// (0x0004db27) phob_pre_status_pane

0x35a2,	// (0x0004de27) grid_qdial_pane

0x32a2,	// (0x0004db27) listscroll_mce_pane

0x35ac,	// (0x0004de31) bg_notes_pane

0x35b6,	// (0x0004de3b) list_notes_pane

0x5b8c,	// (0x00050411) scroll_pane_cp06

0x35c0,	// (0x0004de45) bg_calc_paper_pane

0x5ba1,	// (0x00050426) list_calc_pane

0x35d4,	// (0x0004de59) bg_calc_display_pane

0x5bbb,	// (0x00050440) calc_display_pane_t1

0x5bd0,	// (0x00050455) calc_display_pane_t2

0x5be5,	// (0x0005046a) calc_display_pane_t3

0x0002,

0xf173,	// (0x000599f8) calc_display_pane_t

0x5bf7,	// (0x0005047c) cell_calc_pane_ParamLimits

0x5bf7,	// (0x0005047c) cell_calc_pane

0x35e0,	// (0x0004de65) bg_calc_paper_pane_g1

0x35f8,	// (0x0004de7d) bg_calc_paper_pane_g2

0x35ec,	// (0x0004de71) bg_calc_paper_pane_g3

0x3610,	// (0x0004de95) bg_calc_paper_pane_g4

0x3604,	// (0x0004de89) bg_calc_paper_pane_g5

0x5c24,	// (0x000504a9) bg_calc_paper_pane_g6

0x5c35,	// (0x000504ba) bg_calc_paper_pane_g7

0x5c46,	// (0x000504cb) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x000599ff) bg_calc_paper_pane_g

0x5c57,	// (0x000504dc) calc_bg_paper_pane_g9

0x5c68,	// (0x000504ed) list_calc_item_pane_ParamLimits

0x5c68,	// (0x000504ed) list_calc_item_pane

0x361c,	// (0x0004dea1) list_calc_item_pane_g1

0x5c97,	// (0x0005051c) list_calc_item_pane_t1_ParamLimits

0x5c97,	// (0x0005051c) list_calc_item_pane_t1

0x5ca9,	// (0x0005052e) list_calc_item_pane_t2_ParamLimits

0x5ca9,	// (0x0005052e) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x00059a10) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x00059a10) list_calc_item_pane_t

0x3629,	// (0x0004deae) cell_calc_pane_g1

0x3633,	// (0x0004deb8) grid_highlight_pane_cp02

0x5cd9,	// (0x0005055e) bg_calc_display_pane_g1

0x5ce2,	// (0x00050567) bg_calc_display_pane_g2

0xd85a,	// (0x000580df) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x00059a1a) bg_calc_display_pane_g

0x5cec,	// (0x00050571) cell_qdial_pane_ParamLimits

0x5cec,	// (0x00050571) cell_qdial_pane

0x5d00,	// (0x00050585) cell_qdial_pane_g1_ParamLimits

0x5d00,	// (0x00050585) cell_qdial_pane_g1

0x5d0d,	// (0x00050592) cell_qdial_pane_g2_ParamLimits

0x5d0d,	// (0x00050592) cell_qdial_pane_g2

0x3655,	// (0x0004deda) cell_qdial_pane_g3_ParamLimits

0x3655,	// (0x0004deda) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x00059a21) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x00059a21) cell_qdial_pane_g

0x5d2b,	// (0x000505b0) cell_qdial_pane_t1_ParamLimits

0x5d2b,	// (0x000505b0) cell_qdial_pane_t1

0x5d43,	// (0x000505c8) cell_qdial_pane_t2_ParamLimits

0x5d43,	// (0x000505c8) cell_qdial_pane_t2

0x5d56,	// (0x000505db) cell_qdial_pane_t3_ParamLimits

0x5d56,	// (0x000505db) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x00059a2a) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x00059a2a) cell_qdial_pane_t

0x32a2,	// (0x0004db27) grid_highlight_pane_cp04

0x3661,	// (0x0004dee6) thumbnail_qdial_pane_ParamLimits

0x3661,	// (0x0004dee6) thumbnail_qdial_pane

0x36bd,	// (0x0004df42) list_help_pane

0x36c6,	// (0x0004df4b) scroll_pane_cp02

0x5d69,	// (0x000505ee) help_list_pane_t1_ParamLimits

0x5d69,	// (0x000505ee) help_list_pane_t1

0x5d9c,	// (0x00050621) bg_notes_pane_g2

0x5da4,	// (0x00050629) bg_notes_pane_g3

0x5dac,	// (0x00050631) notes_bg_pane_g1

0x5db4,	// (0x00050639) notes_bg_pane_g4

0x5dbc,	// (0x00050641) notes_bg_pane_g5

0x5dc4,	// (0x00050649) notes_bg_pane_g6

0x5dcc,	// (0x00050651) notes_bg_pane_g7

0x5dd4,	// (0x00050659) notes_bg_pane_g8

0x5ddc,	// (0x00050661) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x00059a48) notes_bg_pane_g

0x5de4,	// (0x00050669) list_notes_text_pane_ParamLimits

0x5de4,	// (0x00050669) list_notes_text_pane

0x36cf,	// (0x0004df54) list_notes_text_pane_g1

0x5e09,	// (0x0005068e) list_notes_text_pane_t1

0x35d4,	// (0x0004de59) listscroll_cale_week_pane

0x5e34,	// (0x000506b9) bg_cale_heading_pane

0x36e9,	// (0x0004df6e) bg_cale_pane_cp01

0x5e50,	// (0x000506d5) cale_week_corner_pane

0x5e66,	// (0x000506eb) cale_week_day_heading_pane

0x5e82,	// (0x00050707) cale_week_scroll_pane_g1

0x5e9b,	// (0x00050720) cale_week_scroll_pane_g2

0x5eac,	// (0x00050731) cale_week_scroll_pane_g3

0x5ebd,	// (0x00050742) cale_week_scroll_pane_g4

0x5ece,	// (0x00050753) cale_week_scroll_pane_g5

0x5edf,	// (0x00050764) cale_week_scroll_pane_g6

0x5ef0,	// (0x00050775) cale_week_scroll_pane_g7

0x5f03,	// (0x00050788) cale_week_scroll_pane_g8

0x5f16,	// (0x0005079b) cale_week_scroll_pane_g9

0x5f27,	// (0x000507ac) cale_week_scroll_pane_g10

0x5f38,	// (0x000507bd) cale_week_scroll_pane_g11

0x5f49,	// (0x000507ce) cale_week_scroll_pane_g12

0x5f5a,	// (0x000507df) cale_week_scroll_pane_g13

0x5f73,	// (0x000507f8) cale_week_scroll_pane_g14

0x5f8c,	// (0x00050811) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x00059a57) cale_week_scroll_pane_g

0x5fa5,	// (0x0005082a) cale_week_time_pane

0x5fb8,	// (0x0005083d) grid_cale_week_pane

0x5fd5,	// (0x0005085a) scroll_pane_cp08

0x5fef,	// (0x00050874) cell_cale_week_pane_ParamLimits

0x5fef,	// (0x00050874) cell_cale_week_pane

0x603b,	// (0x000508c0) cale_week_day_heading_pane_t1

0x6054,	// (0x000508d9) cale_week_day_heading_pane_t2

0x606d,	// (0x000508f2) cale_week_day_heading_pane_t3

0x6086,	// (0x0005090b) cale_week_day_heading_pane_t4

0x609f,	// (0x00050924) cale_week_day_heading_pane_t5

0x60b8,	// (0x0005093d) cale_week_day_heading_pane_t6

0x60d1,	// (0x00050956) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x00059a76) cale_week_day_heading_pane_t

0x3714,	// (0x0004df99) bg_cale_side_pane

0x60ea,	// (0x0005096f) cale_week_time_pane_t1

0x6102,	// (0x00050987) cale_week_time_pane_t2

0x611a,	// (0x0005099f) cale_week_time_pane_t3

0x6132,	// (0x000509b7) cale_week_time_pane_t4

0x614a,	// (0x000509cf) cale_week_time_pane_t5

0x6162,	// (0x000509e7) cale_week_time_pane_t6

0x617a,	// (0x000509ff) cale_week_time_pane_t7

0x619a,	// (0x00050a1f) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x00059a85) cale_week_time_pane_t

0x61ba,	// (0x00050a3f) cell_cale_week_pane_g2

0x61cb,	// (0x00050a50) cell_cale_week_pane_g3_ParamLimits

0x61cb,	// (0x00050a50) cell_cale_week_pane_g3

0x3722,	// (0x0004dfa7) grid_highlight_pane_cp07

0x372a,	// (0x0004dfaf) listscroll_gms_pane

0x3734,	// (0x0004dfb9) grid_gms_pane

0x373d,	// (0x0004dfc2) listscroll_gms_pane_g1

0x3745,	// (0x0004dfca) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x00059a96) listscroll_gms_pane_g

0x61e3,	// (0x00050a68) scroll_pane_cp010

0x61ee,	// (0x00050a73) cell_gms_pane_ParamLimits

0x61ee,	// (0x00050a73) cell_gms_pane

0x6201,	// (0x00050a86) cell_gms_pane_g1

0x374d,	// (0x0004dfd2) cell_gms_pane_g2

0x3755,	// (0x0004dfda) cell_gms_pane_g3

0x375e,	// (0x0004dfe3) cell_gms_pane_g4

0x0003,

0xf216,	// (0x00059a9b) cell_gms_pane_g

0x3767,	// (0x0004dfec) grid_highlight_pane_cp09

0x850e,	// (0x00052d93) phob_pre_status_pane_g1

0x8516,	// (0x00052d9b) phob_pre_status_pane_g2

0x851e,	// (0x00052da3) phob_pre_status_pane_g3

0x8526,	// (0x00052dab) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x00059e8a) phob_pre_status_pane_g

0x8536,	// (0x00052dbb) phob_pre_status_pane_t1

0x8546,	// (0x00052dcb) phob_pre_status_pane_t2

0x8556,	// (0x00052ddb) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x00059e95) phob_pre_status_pane_t

0x32a2,	// (0x0004db27) bg_list_pane_cp05

0x6211,	// (0x00050a96) grid_vorec_pane

0x621b,	// (0x00050aa0) vorec_t1

0x6229,	// (0x00050aae) vorec_t2

0x6237,	// (0x00050abc) vorec_t3

0x6245,	// (0x00050aca) vorec_t4

0x6253,	// (0x00050ad8) vorec_t5

0x6261,	// (0x00050ae6) vorec_t6

0x0006,

0xf21f,	// (0x00059aa4) vorec_t

0x627d,	// (0x00050b02) wait_bar_pane_cp01

0x6285,	// (0x00050b0a) cell_vorec_pane_ParamLimits

0x6285,	// (0x00050b0a) cell_vorec_pane

0x376f,	// (0x0004dff4) cell_vorec_pane_g1

0x32a2,	// (0x0004db27) grid_highlight_pane_cp05

0x62a8,	// (0x00050b2d) cams_zoom_pane

0x62b4,	// (0x00050b39) image_vga_pane

0x62c3,	// (0x00050b48) main_camera_pane_g1

0x62d1,	// (0x00050b56) main_camera_pane_g2

0x62dd,	// (0x00050b62) main_camera_pane_g3

0x62e9,	// (0x00050b6e) main_camera_pane_g4

0x62f5,	// (0x00050b7a) main_camera_pane_g5

0x6301,	// (0x00050b86) main_camera_pane_g6

0x630d,	// (0x00050b92) main_camera_pane_g7

0x0007,

0xf22e,	// (0x00059ab3) main_camera_pane_g

0x6319,	// (0x00050b9e) main_camera_pane_t1

0x632b,	// (0x00050bb0) main_camera_pane_t2

0x0001,

0xf23f,	// (0x00059ac4) main_camera_pane_t

0x634c,	// (0x00050bd1) cams_zoom_pane_cp_ParamLimits

0x634c,	// (0x00050bd1) cams_zoom_pane_cp

0x6370,	// (0x00050bf5) image_cif_pane_ParamLimits

0x6370,	// (0x00050bf5) image_cif_pane

0x638e,	// (0x00050c13) image_subqcif_pane

0x6396,	// (0x00050c1b) main_video_pane_g1_ParamLimits

0x6396,	// (0x00050c1b) main_video_pane_g1

0x63b6,	// (0x00050c3b) main_video_pane_g2_ParamLimits

0x63b6,	// (0x00050c3b) main_video_pane_g2

0x63e6,	// (0x00050c6b) main_video_pane_g3_ParamLimits

0x63e6,	// (0x00050c6b) main_video_pane_g3

0x640f,	// (0x00050c94) main_video_pane_g4_ParamLimits

0x640f,	// (0x00050c94) main_video_pane_g4

0x6438,	// (0x00050cbd) main_video_pane_g5_ParamLimits

0x6438,	// (0x00050cbd) main_video_pane_g5

0x3785,	// (0x0004e00a) main_video_pane_g6_ParamLimits

0x3785,	// (0x0004e00a) main_video_pane_g6

0x0006,

0xf244,	// (0x00059ac9) main_video_pane_g_ParamLimits

0xf244,	// (0x00059ac9) main_video_pane_g

0x645c,	// (0x00050ce1) main_video_pane_t1_ParamLimits

0x645c,	// (0x00050ce1) main_video_pane_t1

0x379f,	// (0x0004e024) cams_zoom_pane_g1

0x37a8,	// (0x0004e02d) cams_zoom_pane_g2

0x37b1,	// (0x0004e036) cams_zoom_pane_g3

0x37ba,	// (0x0004e03f) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x00059ad8) cams_zoom_pane_g

0x64a6,	// (0x00050d2b) grid_cams_pane

0x64b4,	// (0x00050d39) linegrid_cams_pane

0x64c2,	// (0x00050d47) cell_cams_pane_ParamLimits

0x64c2,	// (0x00050d47) cell_cams_pane

0x37c3,	// (0x0004e048) cams_burst_image_pane

0x37cb,	// (0x0004e050) cell_cams_pane_g1

0x32a2,	// (0x0004db27) grid_highlight_pane_cp03

0x3629,	// (0x0004deae) mp_bg_pane_g1

0x32a2,	// (0x0004db27) bg_list_pane_cp03

0xe4a6,	// (0x00058d2b) bg_mp_pane

0xe4ae,	// (0x00058d33) grid_mp_pane

0xe4b6,	// (0x00058d3b) media_player_g1

0xe4be,	// (0x00058d43) media_player_t1

0xe4cc,	// (0x00058d51) media_player_t2

0xe4da,	// (0x00058d5f) media_player_t3

0xe4e8,	// (0x00058d6d) media_player_t4

0xe4f6,	// (0x00058d7b) media_player_t5

0xe504,	// (0x00058d89) media_player_t6

0xe512,	// (0x00058d97) media_player_t7

0x0006,

0xf5ef,	// (0x00059e74) media_player_t

0xe520,	// (0x00058da5) wait_bar_pane_cp02

0xf5d4,	// (0x00059e59) main_usb_pane_t

0x8505,	// (0x00052d8a) cell_mp_pane

0x3629,	// (0x0004deae) cell_mp_pane_g1

0x32a2,	// (0x0004db27) grid_highlight_pane_cp06

0x37d3,	// (0x0004e058) grid_skin_colour_pane

0x37db,	// (0x0004e060) list_highlight_pane_cp03

0x652c,	// (0x00050db1) skin_g1

0x37e3,	// (0x0004e068) skin_t1

0x37f2,	// (0x0004e077) skin_t2

0x0001,

0xf288,	// (0x00059b0d) skin_t

0x6536,	// (0x00050dbb) cell_skin_colour_pane_ParamLimits

0x6536,	// (0x00050dbb) cell_skin_colour_pane

0x3800,	// (0x0004e085) cell_skin_colour_pane_g1

0x65b8,	// (0x00050e3d) call_video_g1_ParamLimits

0x65b8,	// (0x00050e3d) call_video_g1

0x65c8,	// (0x00050e4d) call_video_g2_ParamLimits

0x65c8,	// (0x00050e4d) call_video_g2

0x0001,

0xf28d,	// (0x00059b12) call_video_g_ParamLimits

0xf28d,	// (0x00059b12) call_video_g

0x6622,	// (0x00050ea7) call_video_uplink_pane_cp1_ParamLimits

0x6622,	// (0x00050ea7) call_video_uplink_pane_cp1

0x3812,	// (0x0004e097) call_video_uplink_pane_cp2

0x66ee,	// (0x00050f73) video_down_crop_pane_ParamLimits

0x66ee,	// (0x00050f73) video_down_crop_pane

0x67ec,	// (0x00051071) video_down_pane_ParamLimits

0x67ec,	// (0x00051071) video_down_pane

0x381a,	// (0x0004e09f) video_down_subqcif_pane_ParamLimits

0x381a,	// (0x0004e09f) video_down_subqcif_pane

0x3832,	// (0x0004e0b7) video_down_subqcif_pane_cp_ParamLimits

0x3832,	// (0x0004e0b7) video_down_subqcif_pane_cp

0x3856,	// (0x0004e0db) im_reading_pane_ParamLimits

0x3856,	// (0x0004e0db) im_reading_pane

0x690e,	// (0x00051193) im_writing_pane_ParamLimits

0x690e,	// (0x00051193) im_writing_pane

0x692c,	// (0x000511b1) im_reading_pane_t1

0x3870,	// (0x0004e0f5) list_im_pane

0x3881,	// (0x0004e106) scroll_pane_cp07

0x6980,	// (0x00051205) im_writing_pane_t1_ParamLimits

0x6980,	// (0x00051205) im_writing_pane_t1

0x389a,	// (0x0004e11f) im_writing_pane_t2_ParamLimits

0x389a,	// (0x0004e11f) im_writing_pane_t2

0x0001,

0xf297,	// (0x00059b1c) im_writing_pane_t_ParamLimits

0xf297,	// (0x00059b1c) im_writing_pane_t

0x32a2,	// (0x0004db27) input_focus_pane_cp04

0x32a2,	// (0x0004db27) input_focus_pane_cp05

0x6995,	// (0x0005121a) list_im_single_pane_ParamLimits

0x6995,	// (0x0005121a) list_im_single_pane

0x69b9,	// (0x0005123e) list_single_im_pane_t1

0x84c9,	// (0x00052d4e) blid_accuracy_pane

0x84d1,	// (0x00052d56) blid_compass_pane

0x84db,	// (0x00052d60) main_location_t1

0x84e9,	// (0x00052d6e) main_location_t2

0x84f7,	// (0x00052d7c) main_location_t3

0x0002,

0xf5fe,	// (0x00059e83) main_location_t

0x32a2,	// (0x0004db27) aid_levels_location

0x3629,	// (0x0004deae) blid_accuracy_pane_g1

0x3629,	// (0x0004deae) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x00059b7e) blid_accuracy_pane_g

0x38e2,	// (0x0004e167) wml_content_pane

0x3920,	// (0x0004e1a5) wml_button_pane_ParamLimits

0x3920,	// (0x0004e1a5) wml_button_pane

0x69c8,	// (0x0005124d) wml_list_single_large_pane_ParamLimits

0x69c8,	// (0x0005124d) wml_list_single_large_pane

0x69f2,	// (0x00051277) wml_list_single_medium_pane_ParamLimits

0x69f2,	// (0x00051277) wml_list_single_medium_pane

0x6a23,	// (0x000512a8) wml_list_single_small_pane_ParamLimits

0x6a23,	// (0x000512a8) wml_list_single_small_pane

0x3934,	// (0x0004e1b9) wml_selection_box_pane_ParamLimits

0x3934,	// (0x0004e1b9) wml_selection_box_pane

0x3947,	// (0x0004e1cc) wml_list_single_pane_t1

0x3956,	// (0x0004e1db) wml_list_single_medium_pane_t1

0x3965,	// (0x0004e1ea) wml_list_single_large_pane_t1

0x3974,	// (0x0004e1f9) input_focus_pane_cp02_ParamLimits

0x3974,	// (0x0004e1f9) input_focus_pane_cp02

0x3987,	// (0x0004e20c) wml_selection_box_pane_g1

0x3990,	// (0x0004e215) wml_selection_box_pane_t1_ParamLimits

0x3990,	// (0x0004e215) wml_selection_box_pane_t1

0x34fd,	// (0x0004dd82) bg_wml_button_pane_ParamLimits

0x34fd,	// (0x0004dd82) bg_wml_button_pane

0x39a8,	// (0x0004e22d) wml_button_pane_g1

0x39b0,	// (0x0004e235) wml_button_pane_t1

0x39a8,	// (0x0004e22d) wml_button_bg_pane_g1

0x39c0,	// (0x0004e245) wml_button_bg_pane_g2

0x39c8,	// (0x0004e24d) wml_button_bg_pane_g3

0x39d0,	// (0x0004e255) wml_button_bg_pane_g4

0x39d8,	// (0x0004e25d) wml_button_bg_pane_g5

0x39e0,	// (0x0004e265) wml_button_bg_pane_g6

0x39e8,	// (0x0004e26d) wml_button_bg_pane_g7

0x39f0,	// (0x0004e275) wml_button_bg_pane_g8

0x39f8,	// (0x0004e27d) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x00059b21) wml_button_bg_pane_g

0x6a5d,	// (0x000512e2) bg_list_pane_cp02

0x3a00,	// (0x0004e285) mce_header_pane_ParamLimits

0x3a00,	// (0x0004e285) mce_header_pane

0x3a16,	// (0x0004e29b) mce_icon_pane

0x3a16,	// (0x0004e29b) mce_image_pane

0x3a1f,	// (0x0004e2a4) mce_text_pane_ParamLimits

0x3a1f,	// (0x0004e2a4) mce_text_pane

0x6a67,	// (0x000512ec) scroll_pane_cp03

0x3918,	// (0x0004e19d) scroll_pane_cp04

0x3a32,	// (0x0004e2b7) scroll_pane_cp05_ParamLimits

0x3a32,	// (0x0004e2b7) scroll_pane_cp05

0x6a71,	// (0x000512f6) mce_header_field_pane_ParamLimits

0x6a71,	// (0x000512f6) mce_header_field_pane

0x6a91,	// (0x00051316) mce_header_field_pane_2_ParamLimits

0x6a91,	// (0x00051316) mce_header_field_pane_2

0x6aa7,	// (0x0005132c) mce_header_field_pane_3

0x6aaf,	// (0x00051334) list_single_mce_message_pane_ParamLimits

0x6aaf,	// (0x00051334) list_single_mce_message_pane

0x6ad4,	// (0x00051359) list_single_mce_smart_pane_ParamLimits

0x6ad4,	// (0x00051359) list_single_mce_smart_pane

0x3a3e,	// (0x0004e2c3) input_focus_pane_cp03

0x3a47,	// (0x0004e2cc) list_header_data_pane

0x6b04,	// (0x00051389) mce_header_field_pane_t1

0x6b12,	// (0x00051397) list_single_mce_header_pane_ParamLimits

0x6b12,	// (0x00051397) list_single_mce_header_pane

0x3a4f,	// (0x0004e2d4) list_single_mce_header_pane_t1

0x3a5e,	// (0x0004e2e3) list_single_mce_message_pane_g1

0x3a66,	// (0x0004e2eb) list_single_mce_message_pane_t1

0x6b56,	// (0x000513db) bg_cale_heading_pane_cp01_ParamLimits

0x6b56,	// (0x000513db) bg_cale_heading_pane_cp01

0x3a74,	// (0x0004e2f9) bg_cale_pane_cp02_ParamLimits

0x3a74,	// (0x0004e2f9) bg_cale_pane_cp02

0x6b89,	// (0x0005140e) cale_month_corner_pane

0x6b9f,	// (0x00051424) cale_month_day_heading_pane_ParamLimits

0x6b9f,	// (0x00051424) cale_month_day_heading_pane

0x6be2,	// (0x00051467) cale_month_pane_g1_ParamLimits

0x6be2,	// (0x00051467) cale_month_pane_g1

0x6c0e,	// (0x00051493) cale_month_pane_g2_ParamLimits

0x6c0e,	// (0x00051493) cale_month_pane_g2

0x6c31,	// (0x000514b6) cale_month_pane_g3_ParamLimits

0x6c31,	// (0x000514b6) cale_month_pane_g3

0x6c6d,	// (0x000514f2) cale_month_pane_g4_ParamLimits

0x6c6d,	// (0x000514f2) cale_month_pane_g4

0x6ca9,	// (0x0005152e) cale_month_pane_g5_ParamLimits

0x6ca9,	// (0x0005152e) cale_month_pane_g5

0x6ce5,	// (0x0005156a) cale_month_pane_g6_ParamLimits

0x6ce5,	// (0x0005156a) cale_month_pane_g6

0x6d21,	// (0x000515a6) cale_month_pane_g7_ParamLimits

0x6d21,	// (0x000515a6) cale_month_pane_g7

0x6d6d,	// (0x000515f2) cale_month_pane_g8_ParamLimits

0x6d6d,	// (0x000515f2) cale_month_pane_g8

0x6db9,	// (0x0005163e) cale_month_pane_g9_ParamLimits

0x6db9,	// (0x0005163e) cale_month_pane_g9

0x6dff,	// (0x00051684) cale_month_pane_g10_ParamLimits

0x6dff,	// (0x00051684) cale_month_pane_g10

0x6e39,	// (0x000516be) cale_month_pane_g11_ParamLimits

0x6e39,	// (0x000516be) cale_month_pane_g11

0x6e77,	// (0x000516fc) cale_month_pane_g12_ParamLimits

0x6e77,	// (0x000516fc) cale_month_pane_g12

0x6eb5,	// (0x0005173a) cale_month_pane_g13_ParamLimits

0x6eb5,	// (0x0005173a) cale_month_pane_g13

0x000c,

0xf2af,	// (0x00059b34) cale_month_pane_g_ParamLimits

0xf2af,	// (0x00059b34) cale_month_pane_g

0x6ef3,	// (0x00051778) cale_month_week_pane

0x6f06,	// (0x0005178b) grid_cale_month_pane_ParamLimits

0x6f06,	// (0x0005178b) grid_cale_month_pane

0x6f44,	// (0x000517c9) cale_month_day_heading_pane_t1

0x6fa2,	// (0x00051827) cale_month_day_heading_pane_t2

0x7007,	// (0x0005188c) cale_month_day_heading_pane_t3

0x706c,	// (0x000518f1) cale_month_day_heading_pane_t4

0x70d1,	// (0x00051956) cale_month_day_heading_pane_t5

0x7136,	// (0x000519bb) cale_month_day_heading_pane_t6

0x719b,	// (0x00051a20) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x00059b4f) cale_month_day_heading_pane_t

0x3714,	// (0x0004df99) bg_cale_side_pane_cp01

0x7210,	// (0x00051a95) cale_month_week_pane_t1

0x7227,	// (0x00051aac) cale_month_week_pane_t2

0x723e,	// (0x00051ac3) cale_month_week_pane_t3

0x7255,	// (0x00051ada) cale_month_week_pane_t4

0x726c,	// (0x00051af1) cale_month_week_pane_t5

0x7287,	// (0x00051b0c) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x00059b5e) cale_month_week_pane_t

0x72a6,	// (0x00051b2b) cell_cale_month_pane_ParamLimits

0x72a6,	// (0x00051b2b) cell_cale_month_pane

0x736c,	// (0x00051bf1) cell_cale_month_pane_g1

0x7378,	// (0x00051bfd) cell_cale_month_pane_t1_ParamLimits

0x7378,	// (0x00051bfd) cell_cale_month_pane_t1

0x3722,	// (0x0004dfa7) grid_highlight_pane_cp08

0x3629,	// (0x0004deae) main_smil_g1

0x7394,	// (0x00051c19) smil_status_pane

0x3aa9,	// (0x0004e32e) smil_text_pane

0xe3c6,	// (0x00058c4b) bg_popup_call3_rect_pane_g8

0xe3ce,	// (0x00058c53) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x00059e17) bg_popup_call3_rect_pane_g

0xe648,	// (0x00058ecd) smil_status_volume_pane_g1

0x3ab3,	// (0x0004e338) smil_status_pane_t1

0x88af,	// (0x00053134) volume_smil_pane

0x3aca,	// (0x0004e34f) list_smil_text_pane

0x73a7,	// (0x00051c2c) scroll_pane_cp011

0x73b2,	// (0x00051c37) smil_text_list_pane_t1_ParamLimits

0x73b2,	// (0x00051c37) smil_text_list_pane_t1

0x742a,	// (0x00051caf) aid_volume_smil_ParamLimits

0x742a,	// (0x00051caf) aid_volume_smil

0x3629,	// (0x0004deae) smil_volume_pane_g1

0x3629,	// (0x0004deae) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x00059b7e) smil_volume_pane_g

0x35d4,	// (0x0004de59) listscroll_cale_day_pane

0x3ad4,	// (0x0004e359) bg_cale_pane

0x3aec,	// (0x0004e371) list_cale_pane

0x3afd,	// (0x0004e382) scroll_pane_cp09

0x3b0e,	// (0x0004e393) cale_bg_pane_g1

0x3b16,	// (0x0004e39b) cale_bg_pane_g2

0x3b1e,	// (0x0004e3a3) cale_bg_pane_g3

0x3b26,	// (0x0004e3ab) cale_bg_pane_g4

0x3b2e,	// (0x0004e3b3) cale_bg_pane_g5

0x3b36,	// (0x0004e3bb) cale_bg_pane_g6

0x3b3e,	// (0x0004e3c3) cale_bg_pane_g7

0x3b46,	// (0x0004e3cb) cale_bg_pane_g8

0x3b4e,	// (0x0004e3d3) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x00059b83) cale_bg_pane_g

0x744c,	// (0x00051cd1) list_cale_time_pane_ParamLimits

0x744c,	// (0x00051cd1) list_cale_time_pane

0x3b56,	// (0x0004e3db) list_cale_time_pane_g1_ParamLimits

0x3b56,	// (0x0004e3db) list_cale_time_pane_g1

0x3b62,	// (0x0004e3e7) list_cale_time_pane_g2_ParamLimits

0x3b62,	// (0x0004e3e7) list_cale_time_pane_g2

0x7468,	// (0x00051ced) list_cale_time_pane_g3_ParamLimits

0x7468,	// (0x00051ced) list_cale_time_pane_g3

0x7476,	// (0x00051cfb) list_cale_time_pane_g4_ParamLimits

0x7476,	// (0x00051cfb) list_cale_time_pane_g4

0x7484,	// (0x00051d09) list_cale_time_pane_g5_ParamLimits

0x7484,	// (0x00051d09) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x00059b96) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x00059b96) list_cale_time_pane_g

0x3b7c,	// (0x0004e401) list_cale_time_pane_t1_ParamLimits

0x3b7c,	// (0x0004e401) list_cale_time_pane_t1

0x3ba4,	// (0x0004e429) list_cale_time_pane_t2_ParamLimits

0x3ba4,	// (0x0004e429) list_cale_time_pane_t2

0x77b5,	// (0x0005203a) aid_blid_cardinal_pane

0x77f7,	// (0x0005207c) compass_pane_t4

0x3bcc,	// (0x0004e451) list_cale_time_pane_t4_ParamLimits

0x3bcc,	// (0x0004e451) list_cale_time_pane_t4

0x7805,	// (0x0005208a) compass_pane_t5

0x7815,	// (0x0005209a) compass_pane_t6

0x7823,	// (0x000520a8) compass_pane_t7

0x4005,	// (0x0004e88a) navi_pane_cc_t1

0x415a,	// (0x0004e9df) aid_phob_thumbnail_center_pane

0x7fcf,	// (0x00052854) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x00059ba3) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x00059ba3) list_cale_time_pane_t

0x2ef9,	// (0x0004d77e) bg_popup_window_pane_cp02_ParamLimits

0x2ef9,	// (0x0004d77e) bg_popup_window_pane_cp02

0x3bf4,	// (0x0004e479) heading_pane_cp01_ParamLimits

0x3bf4,	// (0x0004e479) heading_pane_cp01

0x3c00,	// (0x0004e485) loc_req_pane_ParamLimits

0x3c00,	// (0x0004e485) loc_req_pane

0x3c10,	// (0x0004e495) loc_type_pane_ParamLimits

0x3c10,	// (0x0004e495) loc_type_pane

0x3c22,	// (0x0004e4a7) loc_type_pane_t1_ParamLimits

0x3c22,	// (0x0004e4a7) loc_type_pane_t1

0x3c34,	// (0x0004e4b9) loc_type_pane_t2_ParamLimits

0x3c34,	// (0x0004e4b9) loc_type_pane_t2

0x3c46,	// (0x0004e4cb) loc_type_pane_t3_ParamLimits

0x3c46,	// (0x0004e4cb) loc_type_pane_t3

0x0002,

0xf325,	// (0x00059baa) loc_type_pane_t_ParamLimits

0xf325,	// (0x00059baa) loc_type_pane_t

0x3c58,	// (0x0004e4dd) list_loc_req_pane

0x3c62,	// (0x0004e4e7) scroll_pane_cp012

0x7492,	// (0x00051d17) list_single_loc_request_popup_menu_pane_ParamLimits

0x7492,	// (0x00051d17) list_single_loc_request_popup_menu_pane

0x3c6d,	// (0x0004e4f2) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3c6d,	// (0x0004e4f2) list_single_loc_request_popup_menu_pane_g1

0x3c79,	// (0x0004e4fe) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x3c79,	// (0x0004e4fe) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x00059bb1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x00059bb1) list_single_loc_request_popup_menu_pane_g

0x3c85,	// (0x0004e50a) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3c85,	// (0x0004e50a) list_single_loc_request_popup_menu_pane_t1

0x74a4,	// (0x00051d29) bg_popup_window_pane_cp03_ParamLimits

0x74a4,	// (0x00051d29) bg_popup_window_pane_cp03

0x74b2,	// (0x00051d37) heading_loc_req_pane_ParamLimits

0x74b2,	// (0x00051d37) heading_loc_req_pane

0x74be,	// (0x00051d43) popup_dyc_status_message_window_g1_ParamLimits

0x74be,	// (0x00051d43) popup_dyc_status_message_window_g1

0x74ca,	// (0x00051d4f) popup_dyc_status_message_window_t1_ParamLimits

0x74ca,	// (0x00051d4f) popup_dyc_status_message_window_t1

0x74dc,	// (0x00051d61) popup_dyc_status_message_window_t2_ParamLimits

0x74dc,	// (0x00051d61) popup_dyc_status_message_window_t2

0x74ee,	// (0x00051d73) popup_dyc_status_message_window_t3_ParamLimits

0x74ee,	// (0x00051d73) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x00059bb6) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x00059bb6) popup_dyc_status_message_window_t

0x32a2,	// (0x0004db27) bg_heading_pane_cp01

0x3c9b,	// (0x0004e520) heading_loc_req_pane_g1

0x3ca3,	// (0x0004e528) heading_loc_req_pane_g2

0x3cab,	// (0x0004e530) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x00059bbd) heading_loc_req_pane_g

0x3cb3,	// (0x0004e538) heading_loc_req_pane_t1

0x3cc2,	// (0x0004e547) bg_popup_sub_pane_cp01_ParamLimits

0x3cc2,	// (0x0004e547) bg_popup_sub_pane_cp01

0x3cd0,	// (0x0004e555) popup_cale_events_window_g1_ParamLimits

0x3cd0,	// (0x0004e555) popup_cale_events_window_g1

0x3cf0,	// (0x0004e575) popup_cale_events_window_g2_ParamLimits

0x3cf0,	// (0x0004e575) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x00059bf1) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x00059bf1) popup_cale_events_window_g

0x3d10,	// (0x0004e595) popup_cale_events_window_t1_ParamLimits

0x3d10,	// (0x0004e595) popup_cale_events_window_t1

0x3d22,	// (0x0004e5a7) popup_cale_events_window_t2_ParamLimits

0x3d22,	// (0x0004e5a7) popup_cale_events_window_t2

0x3d60,	// (0x0004e5e5) popup_cale_events_window_t3_ParamLimits

0x3d60,	// (0x0004e5e5) popup_cale_events_window_t3

0x3d9a,	// (0x0004e61f) popup_cale_events_window_t4_ParamLimits

0x3d9a,	// (0x0004e61f) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x00059bf6) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x00059bf6) popup_cale_events_window_t

0x7572,	// (0x00051df7) call_type_pane

0x3e41,	// (0x0004e6c6) popup_call_status_window_g1

0x757e,	// (0x00051e03) popup_call_status_window_g2

0x758a,	// (0x00051e0f) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x00059bff) popup_call_status_window_g

0x3dd0,	// (0x0004e655) call_type_pane_g1

0x3dd9,	// (0x0004e65e) call_type_pane_g2

0x0001,

0xf381,	// (0x00059c06) call_type_pane_g

0x32a2,	// (0x0004db27) bg_popup_sub_pane_cp02

0x3de2,	// (0x0004e667) listscroll_popup_wml_pane

0x3dea,	// (0x0004e66f) list_wml_pane

0x3df4,	// (0x0004e679) scroll_pane_cp013

0x3dff,	// (0x0004e684) list_single_graphic_popup_wml_pane_ParamLimits

0x3dff,	// (0x0004e684) list_single_graphic_popup_wml_pane

0x3629,	// (0x0004deae) list_single_graphic_popup_wml_pane_g1

0x3e13,	// (0x0004e698) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x00059c0b) list_single_graphic_popup_wml_pane_g

0x3e1b,	// (0x0004e6a0) list_single_graphic_popup_wml_pane_t1

0x3e29,	// (0x0004e6ae) aid_call_pane

0x34f5,	// (0x0004dd7a) popup_clock_analogue_window_g1

0x34f5,	// (0x0004dd7a) popup_clock_analogue_window_g2

0x7596,	// (0x00051e1b) popup_clock_analogue_window_g3

0x7596,	// (0x00051e1b) popup_clock_analogue_window_g4

0x3629,	// (0x0004deae) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x00059c10) popup_clock_analogue_window_g

0x759e,	// (0x00051e23) popup_clock_analogue_window_t1

0x75ac,	// (0x00051e31) clock_digital_number_pane_ParamLimits

0x75ac,	// (0x00051e31) clock_digital_number_pane

0x75b8,	// (0x00051e3d) clock_digital_number_pane_cp02_ParamLimits

0x75b8,	// (0x00051e3d) clock_digital_number_pane_cp02

0x75c4,	// (0x00051e49) clock_digital_number_pane_cp03_ParamLimits

0x75c4,	// (0x00051e49) clock_digital_number_pane_cp03

0x75d0,	// (0x00051e55) clock_digital_number_pane_cp04_ParamLimits

0x75d0,	// (0x00051e55) clock_digital_number_pane_cp04

0x75e0,	// (0x00051e65) clock_digital_separator_pane_ParamLimits

0x75e0,	// (0x00051e65) clock_digital_separator_pane

0x75ec,	// (0x00051e71) popup_clock_digital_window_t1

0x3629,	// (0x0004deae) clock_digital_number_pane_g1

0x3629,	// (0x0004deae) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x00059b7e) clock_digital_number_pane_g

0x3629,	// (0x0004deae) clock_digital_separator_pane_g1

0x3629,	// (0x0004deae) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x00059b7e) clock_digital_separator_pane_g

0x32a2,	// (0x0004db27) bg_popup_window_pane_cp04

0x3e39,	// (0x0004e6be) heading_pane_cp03

0x3e4f,	// (0x0004e6d4) listscroll_popup_gms_pane

0x3e57,	// (0x0004e6dc) grid_large_graphic_popup_pane

0x3e61,	// (0x0004e6e6) listscroll_popup_gms_pane_g1

0x3e69,	// (0x0004e6ee) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x00059c1b) listscroll_popup_gms_pane_g

0x3918,	// (0x0004e19d) scroll_pane_cp014

0x7609,	// (0x00051e8e) cell_large_graphic_popup_pane_ParamLimits

0x7609,	// (0x00051e8e) cell_large_graphic_popup_pane

0x7621,	// (0x00051ea6) cell_large_graphic_popup_pane_g1_ParamLimits

0x7621,	// (0x00051ea6) cell_large_graphic_popup_pane_g1

0x3e71,	// (0x0004e6f6) cell_large_graphic_popup_pane_g2_ParamLimits

0x3e71,	// (0x0004e6f6) cell_large_graphic_popup_pane_g2

0x3e7d,	// (0x0004e702) cell_large_graphic_popup_pane_g3_ParamLimits

0x3e7d,	// (0x0004e702) cell_large_graphic_popup_pane_g3

0x3e8a,	// (0x0004e70f) cell_large_graphic_popup_pane_g4_ParamLimits

0x3e8a,	// (0x0004e70f) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x00059c20) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x00059c20) cell_large_graphic_popup_pane_g

0x3e9a,	// (0x0004e71f) grid_highlight_pane_cp010

0x3629,	// (0x0004deae) bg_popup_call_pane_g1

0x3ea4,	// (0x0004e729) list_single_graphic_popup_conf_pane_ParamLimits

0x3ea4,	// (0x0004e729) list_single_graphic_popup_conf_pane

0x3eb7,	// (0x0004e73c) list_highlight_pane_cp01

0x3ec0,	// (0x0004e745) list_single_graphic_popup_conf_pane_g1

0x3ec8,	// (0x0004e74d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x00059c29) list_single_graphic_popup_conf_pane_g

0x3ed0,	// (0x0004e755) list_single_graphic_popup_conf_pane_t1

0x3ede,	// (0x0004e763) linegrid_cams_pane_g1

0x762d,	// (0x00051eb2) linegrid_cams_pane_g2

0x3755,	// (0x0004dfda) linegrid_cams_pane_g3

0x3ee7,	// (0x0004e76c) linegrid_cams_pane_g4

0x7636,	// (0x00051ebb) linegrid_cams_pane_g5

0x763f,	// (0x00051ec4) linegrid_cams_pane_g6

0x375e,	// (0x0004dfe3) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x00059c2e) linegrid_cams_pane_g

0x3ef0,	// (0x0004e775) popup_clock_analogue_window

0x3ef0,	// (0x0004e775) popup_clock_digital_window

0x32a2,	// (0x0004db27) popup_phob_thumbnail_window

0x3629,	// (0x0004deae) call_video_uplink_pane_g1

0x3ef9,	// (0x0004e77e) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x00059c3d) call_video_uplink_pane_g

0x3f01,	// (0x0004e786) video_uplink_pane

0x3f09,	// (0x0004e78e) mce_image_pane_g1

0x7648,	// (0x00051ecd) mce_image_pane_g2

0x7652,	// (0x00051ed7) mce_image_pane_g3

0x765a,	// (0x00051edf) mce_image_pane_g4

0x7662,	// (0x00051ee7) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x00059c42) mce_image_pane_g

0x3f13,	// (0x0004e798) control_top_pane_stacon_cp01_ParamLimits

0x3f13,	// (0x0004e798) control_top_pane_stacon_cp01

0x3f27,	// (0x0004e7ac) uni_indicator_pane_stacon_cp01_ParamLimits

0x3f27,	// (0x0004e7ac) uni_indicator_pane_stacon_cp01

0x3f38,	// (0x0004e7bd) bg_popup_sub_pane_cp03

0x766a,	// (0x00051eef) chi_dic_find_pane

0x7672,	// (0x00051ef7) listscroll_chi_dic_pane

0x767b,	// (0x00051f00) main_pane_chidic_g1

0x3f42,	// (0x0004e7c7) chi_dic_find_pane_t1

0x3f50,	// (0x0004e7d5) find_chidic_pane

0x3f59,	// (0x0004e7de) chi_dic_list_pane_ParamLimits

0x3f59,	// (0x0004e7de) chi_dic_list_pane

0x3f6a,	// (0x0004e7ef) scroll_pane_cp020

0x3f72,	// (0x0004e7f7) find_chidic_pane_t1

0x32a2,	// (0x0004db27) input_focus_pane_cp06

0x768e,	// (0x00051f13) list_chi_dic_pane_ParamLimits

0x768e,	// (0x00051f13) list_chi_dic_pane

0x76a8,	// (0x00051f2d) list_chi_dic_pane_t1_ParamLimits

0x76a8,	// (0x00051f2d) list_chi_dic_pane_t1

0x32a2,	// (0x0004db27) list_highlight_pane_cp020

0x3f81,	// (0x0004e806) bg_cale_heading_pane_g1

0x76bb,	// (0x00051f40) bg_cale_heading_pane_g2

0x76c3,	// (0x00051f48) bg_cale_heading_pane_g3

0x76cb,	// (0x00051f50) bg_cale_heading_pane_g4

0x76d5,	// (0x00051f5a) bg_cale_heading_pane_g5

0x76df,	// (0x00051f64) bg_cale_heading_pane_g6

0x76e7,	// (0x00051f6c) bg_cale_heading_pane_g7

0x76ef,	// (0x00051f74) bg_cale_heading_pane_g8

0x76f9,	// (0x00051f7e) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x00059c4d) bg_cale_heading_pane_g

0x3f81,	// (0x0004e806) bg_cale_side_pane_g1

0x7703,	// (0x00051f88) bg_cale_side_pane_g2

0x770d,	// (0x00051f92) bg_cale_side_pane_g3

0x7717,	// (0x00051f9c) bg_cale_side_pane_g4

0x7721,	// (0x00051fa6) bg_cale_side_pane_g5

0x772b,	// (0x00051fb0) bg_cale_side_pane_g6

0x7735,	// (0x00051fba) bg_cale_side_pane_g7

0x773f,	// (0x00051fc4) bg_cale_side_pane_g8

0x7747,	// (0x00051fcc) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x00059c60) bg_cale_side_pane_g

0x774f,	// (0x00051fd4) popup_call_status_window_ParamLimits

0x774f,	// (0x00051fd4) popup_call_status_window

0x3f89,	// (0x0004e80e) stacon_top_pane

0x3f91,	// (0x0004e816) status_pane_ParamLimits

0x3f91,	// (0x0004e816) status_pane

0x3fa6,	// (0x0004e82b) status_small_pane

0x3fae,	// (0x0004e833) control_pane

0x32a2,	// (0x0004db27) stacon_bottom_pane

0x3fb6,	// (0x0004e83b) list_single_mce_smart_pane_t1_ParamLimits

0x3fb6,	// (0x0004e83b) list_single_mce_smart_pane_t1

0x3fc9,	// (0x0004e84e) list_single_mce_smart_pane_t2_ParamLimits

0x3fc9,	// (0x0004e84e) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x00059c73) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x00059c73) list_single_mce_smart_pane_t

0x775b,	// (0x00051fe0) compass_pane

0x7767,	// (0x00051fec) main_location2_pane_t1

0x777b,	// (0x00052000) main_location2_pane_t2

0x778f,	// (0x00052014) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x00059c78) main_location2_pane_t

0x3fe8,	// (0x0004e86d) compass_pane_g1_ParamLimits

0x3fe8,	// (0x0004e86d) compass_pane_g1

0x77d9,	// (0x0005205e) compass_pane_t1

0x77e8,	// (0x0005206d) compass_pane_t2

0x0005,

0xf3fc,	// (0x00059c81) compass_pane_t

0x7833,	// (0x000520b8) text_secondary_cp61

0x3ffc,	// (0x0004e881) navi_pane_cams_g5

0x401f,	// (0x0004e8a4) navi_pane_im_t1

0x402d,	// (0x0004e8b2) navi_pane_mp_g1_ParamLimits

0x402d,	// (0x0004e8b2) navi_pane_mp_g1

0x4041,	// (0x0004e8c6) navi_pane_mp_g2_ParamLimits

0x4041,	// (0x0004e8c6) navi_pane_mp_g2

0x404d,	// (0x0004e8d2) navi_pane_mp_g3_ParamLimits

0x404d,	// (0x0004e8d2) navi_pane_mp_g3

0x0002,

0xf410,	// (0x00059c95) navi_pane_mp_g_ParamLimits

0xf410,	// (0x00059c95) navi_pane_mp_g

0x4059,	// (0x0004e8de) navi_pane_mp_t1

0x4067,	// (0x0004e8ec) navi_pane_mp_t2

0x0002,

0xf417,	// (0x00059c9c) navi_pane_mp_t

0x40a3,	// (0x0004e928) navi_pane_vt_g1

0x4059,	// (0x0004e8de) navi_pane_vt_t1

0x40ab,	// (0x0004e930) navi_slider_pane

0x40b3,	// (0x0004e938) zooming_pane

0x40bb,	// (0x0004e940) navi_slider_pane_g1

0x7948,	// (0x000521cd) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x00059ca3) navi_slider_pane_g

0x40df,	// (0x0004e964) aid_levels_zoom

0x40e7,	// (0x0004e96c) zooming_pane_g1

0x40ef,	// (0x0004e974) zooming_pane_g2

0x40ef,	// (0x0004e974) zooming_pane_g3

0x0002,

0xf42d,	// (0x00059cb2) zooming_pane_g

0x40f7,	// (0x0004e97c) level_10_zoom

0x4100,	// (0x0004e985) level_11_zoom

0x4109,	// (0x0004e98e) level_1_zoom

0x4112,	// (0x0004e997) level_2_zoom

0x411b,	// (0x0004e9a0) level_3_zoom

0x4124,	// (0x0004e9a9) level_4_zoom

0x412d,	// (0x0004e9b2) level_5_zoom

0x4136,	// (0x0004e9bb) level_6_zoom

0x413f,	// (0x0004e9c4) level_7_zoom

0x4148,	// (0x0004e9cd) level_8_zoom

0x4151,	// (0x0004e9d6) level_9_zoom

0x4162,	// (0x0004e9e7) popup_phob_thumbnail_window_g1

0x416a,	// (0x0004e9ef) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x00059cb9) popup_phob_thumbnail_window_g

0xe528,	// (0x00058dad) level_1_location

0xe530,	// (0x00058db5) level_2_location

0xe538,	// (0x00058dbd) level_3_location

0xe540,	// (0x00058dc5) level_4_location

0x40b3,	// (0x0004e938) level_5_location

0x795a,	// (0x000521df) mce_icon_pane_g1

0x7962,	// (0x000521e7) mce_icon_pane_g2

0x0001,

0xf439,	// (0x00059cbe) mce_icon_pane_g

0x796a,	// (0x000521ef) main_mup_pane_g1_ParamLimits

0x796a,	// (0x000521ef) main_mup_pane_g1

0x7982,	// (0x00052207) main_mup_pane_g2_ParamLimits

0x7982,	// (0x00052207) main_mup_pane_g2

0x799e,	// (0x00052223) main_mup_pane_g3_ParamLimits

0x799e,	// (0x00052223) main_mup_pane_g3

0x79ba,	// (0x0005223f) main_mup_pane_g4_ParamLimits

0x79ba,	// (0x0005223f) main_mup_pane_g4

0x79d6,	// (0x0005225b) main_mup_pane_g5_ParamLimits

0x79d6,	// (0x0005225b) main_mup_pane_g5

0x79f7,	// (0x0005227c) main_mup_pane_g6_ParamLimits

0x79f7,	// (0x0005227c) main_mup_pane_g6

0x7a13,	// (0x00052298) main_mup_pane_g7_ParamLimits

0x7a13,	// (0x00052298) main_mup_pane_g7

0x7a2f,	// (0x000522b4) main_mup_pane_g8_ParamLimits

0x7a2f,	// (0x000522b4) main_mup_pane_g8

0x7a4f,	// (0x000522d4) main_mup_pane_g9_ParamLimits

0x7a4f,	// (0x000522d4) main_mup_pane_g9

0x7a6e,	// (0x000522f3) main_mup_pane_g10_ParamLimits

0x7a6e,	// (0x000522f3) main_mup_pane_g10

0x7a8d,	// (0x00052312) main_mup_pane_g11_ParamLimits

0x7a8d,	// (0x00052312) main_mup_pane_g11

0x7aa5,	// (0x0005232a) main_mup_pane_g12_ParamLimits

0x7aa5,	// (0x0005232a) main_mup_pane_g12

0x7ab3,	// (0x00052338) main_mup_pane_g13_ParamLimits

0x7ab3,	// (0x00052338) main_mup_pane_g13

0x000c,

0xf43e,	// (0x00059cc3) main_mup_pane_g_ParamLimits

0xf43e,	// (0x00059cc3) main_mup_pane_g

0x7ac9,	// (0x0005234e) main_mup_pane_t1_ParamLimits

0x7ac9,	// (0x0005234e) main_mup_pane_t1

0x7ae6,	// (0x0005236b) main_mup_pane_t2_ParamLimits

0x7ae6,	// (0x0005236b) main_mup_pane_t2

0x7b00,	// (0x00052385) main_mup_pane_t3_ParamLimits

0x7b00,	// (0x00052385) main_mup_pane_t3

0x7b1a,	// (0x0005239f) main_mup_pane_t4_ParamLimits

0x7b1a,	// (0x0005239f) main_mup_pane_t4

0x7b2c,	// (0x000523b1) main_mup_pane_t5_ParamLimits

0x7b2c,	// (0x000523b1) main_mup_pane_t5

0x7b3e,	// (0x000523c3) main_mup_pane_t6_ParamLimits

0x7b3e,	// (0x000523c3) main_mup_pane_t6

0x0005,

0xf459,	// (0x00059cde) main_mup_pane_t_ParamLimits

0xf459,	// (0x00059cde) main_mup_pane_t

0x7b54,	// (0x000523d9) mup_progress_pane_ParamLimits

0x7b54,	// (0x000523d9) mup_progress_pane

0x7b60,	// (0x000523e5) mup_visualizer_pane_ParamLimits

0x7b60,	// (0x000523e5) mup_visualizer_pane

0x7b9a,	// (0x0005241f) mup_volume_pane_ParamLimits

0x7b9a,	// (0x0005241f) mup_volume_pane

0x3e41,	// (0x0004e6c6) mup_visualizer_pane_g1_ParamLimits

0x3e41,	// (0x0004e6c6) mup_visualizer_pane_g1

0x3e41,	// (0x0004e6c6) mup_visualizer_pane_g2_ParamLimits

0x3e41,	// (0x0004e6c6) mup_visualizer_pane_g2

0x3fe8,	// (0x0004e86d) mup_visualizer_pane_g3_ParamLimits

0x3fe8,	// (0x0004e86d) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x00059ceb) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x00059ceb) mup_visualizer_pane_g

0x3629,	// (0x0004deae) mup_volume_pane_g1

0x417a,	// (0x0004e9ff) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x00059cf2) mup_volume_pane_g

0x3629,	// (0x0004deae) mup_progress_pane_g1

0x4183,	// (0x0004ea08) mup_progress_pane_g2

0x418c,	// (0x0004ea11) mup_progress_pane_g3

0x0002,

0xf472,	// (0x00059cf7) mup_progress_pane_g

0x32a2,	// (0x0004db27) bg_popup_window_pane_cp05

0x4195,	// (0x0004ea1a) heading_pane_cp02_ParamLimits

0x4195,	// (0x0004ea1a) heading_pane_cp02

0x41af,	// (0x0004ea34) list_popup_blid_pane

0x41b7,	// (0x0004ea3c) list_blid_sat_info_pane_ParamLimits

0x41b7,	// (0x0004ea3c) list_blid_sat_info_pane

0x41ca,	// (0x0004ea4f) list_blid_sat_info_pane_g1

0x41d2,	// (0x0004ea57) list_blid_sat_info_pane_t1

0x7ca7,	// (0x0005252c) mup_equalizer_pane_ParamLimits

0x7ca7,	// (0x0005252c) mup_equalizer_pane

0x7cc8,	// (0x0005254d) mup_equalizer_pane_cp1_ParamLimits

0x7cc8,	// (0x0005254d) mup_equalizer_pane_cp1

0x7ce9,	// (0x0005256e) mup_equalizer_pane_cp2_ParamLimits

0x7ce9,	// (0x0005256e) mup_equalizer_pane_cp2

0x7d0a,	// (0x0005258f) mup_equalizer_pane_cp3_ParamLimits

0x7d0a,	// (0x0005258f) mup_equalizer_pane_cp3

0x7d2b,	// (0x000525b0) mup_equalizer_pane_cp4_ParamLimits

0x7d2b,	// (0x000525b0) mup_equalizer_pane_cp4

0x7d4c,	// (0x000525d1) mup_equalizer_pane_cp5

0x7d62,	// (0x000525e7) mup_equalizer_pane_cp6

0x7d7a,	// (0x000525ff) mup_equalizer_pane_cp7

0xe446,	// (0x00058ccb) bg_popup_call_poc_act_pane_g9

0xe44e,	// (0x00058cd3) bg_popup_call_poc_act_pane_g10

0xe456,	// (0x00058cdb) bg_popup_call_poc_act_pane_g11

0x000a,

0x34fd,	// (0x0004dd82) mup_scale_pane

0x3629,	// (0x0004deae) mup_scale_pane_g1

0x41e0,	// (0x0004ea65) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x00059d13) mup_scale_pane_g

0x4204,	// (0x0004ea89) msg_data_pane

0x420c,	// (0x0004ea91) scroll_pane_cp017

0x7da4,	// (0x00052629) bg_list_pane_cp04_ParamLimits

0x7da4,	// (0x00052629) bg_list_pane_cp04

0x4214,	// (0x0004ea99) msg_data_pane_g1

0x7dc8,	// (0x0005264d) msg_data_pane_g2

0x7dd2,	// (0x00052657) msg_data_pane_g3

0x7dda,	// (0x0005265f) msg_data_pane_g4

0x7de2,	// (0x00052667) msg_data_pane_g5

0x7dea,	// (0x0005266f) msg_data_pane_g6

0x7df2,	// (0x00052677) msg_data_pane_g7

0x0006,

0xf49d,	// (0x00059d22) msg_data_pane_g

0x7dfa,	// (0x0005267f) msg_text_pane_ParamLimits

0x7dfa,	// (0x0005267f) msg_text_pane

0x7e3a,	// (0x000526bf) qrid_highlight_pane_cp011_ParamLimits

0x7e3a,	// (0x000526bf) qrid_highlight_pane_cp011

0x32a2,	// (0x0004db27) msg_body_pane

0x32a2,	// (0x0004db27) msg_header_pane

0x4225,	// (0x0004eaaa) input_focus_pane_cp07

0x7e60,	// (0x000526e5) msg_header_pane_t1_ParamLimits

0x7e60,	// (0x000526e5) msg_header_pane_t1

0x7e72,	// (0x000526f7) msg_header_pane_t2_ParamLimits

0x7e72,	// (0x000526f7) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x00059d36) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x00059d36) msg_header_pane_t

0x423a,	// (0x0004eabf) msg_body_pane_g1

0x7e84,	// (0x00052709) msg_body_pane_t1_ParamLimits

0x7e84,	// (0x00052709) msg_body_pane_t1

0x7eb5,	// (0x0005273a) msg_body_pane_t2_ParamLimits

0x7eb5,	// (0x0005273a) msg_body_pane_t2

0x7ec7,	// (0x0005274c) msg_body_pane_t3_ParamLimits

0x7ec7,	// (0x0005274c) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x00059d3b) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x00059d3b) msg_body_pane_t

0x7f2b,	// (0x000527b0) main_viewer_pane_g1_ParamLimits

0x7f2b,	// (0x000527b0) main_viewer_pane_g1

0x7f37,	// (0x000527bc) main_viewer_pane_g2_ParamLimits

0x7f37,	// (0x000527bc) main_viewer_pane_g2

0x7f43,	// (0x000527c8) main_viewer_pane_g3_ParamLimits

0x7f43,	// (0x000527c8) main_viewer_pane_g3

0x7f54,	// (0x000527d9) main_viewer_pane_g4_ParamLimits

0x7f54,	// (0x000527d9) main_viewer_pane_g4

0x7f65,	// (0x000527ea) main_viewer_pane_g5_ParamLimits

0x7f65,	// (0x000527ea) main_viewer_pane_g5

0x7f65,	// (0x000527ea) main_viewer_pane_g7_ParamLimits

0x7f65,	// (0x000527ea) main_viewer_pane_g7

0x3c6d,	// (0x0004e4f2) main_viewer_pane_g8_ParamLimits

0x3c6d,	// (0x0004e4f2) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x00059d4b) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x00059d4b) main_viewer_pane_g

0x4242,	// (0x0004eac7) viewer_content_pane_ParamLimits

0x4242,	// (0x0004eac7) viewer_content_pane

0x7fa3,	// (0x00052828) main_postcard_pane_g1_ParamLimits

0x7fa3,	// (0x00052828) main_postcard_pane_g1

0x7fb1,	// (0x00052836) main_postcard_pane_g2_ParamLimits

0x7fb1,	// (0x00052836) main_postcard_pane_g2

0x7fbf,	// (0x00052844) main_postcard_pane_g3_ParamLimits

0x7fbf,	// (0x00052844) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x00059d5c) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x00059d5c) main_postcard_pane_g

0x7fcf,	// (0x00052854) main_postcard_pane_g4

0xe65b,	// (0x00058ee0) smil_status_volume_pane_g2

0x7ffb,	// (0x00052880) postcard_pane_ParamLimits

0x7ffb,	// (0x00052880) postcard_pane

0x3e41,	// (0x0004e6c6) postcard_pane_g1_ParamLimits

0x3e41,	// (0x0004e6c6) postcard_pane_g1

0x802d,	// (0x000528b2) postcard_pane_g2_ParamLimits

0x802d,	// (0x000528b2) postcard_pane_g2

0x8039,	// (0x000528be) postcard_pane_g3_ParamLimits

0x8039,	// (0x000528be) postcard_pane_g3

0x425e,	// (0x0004eae3) postcard_pane_g4_ParamLimits

0x425e,	// (0x0004eae3) postcard_pane_g4

0x8045,	// (0x000528ca) postcard_pane_g5_ParamLimits

0x8045,	// (0x000528ca) postcard_pane_g5

0x8051,	// (0x000528d6) postcard_pane_g6_ParamLimits

0x8051,	// (0x000528d6) postcard_pane_g6

0x4250,	// (0x0004ead5) postcard_pane_g7_ParamLimits

0x4250,	// (0x0004ead5) postcard_pane_g7

0x0006,

0xf4e4,	// (0x00059d69) postcard_pane_g_ParamLimits

0xf4e4,	// (0x00059d69) postcard_pane_g

0x805d,	// (0x000528e2) main_mp2_pane_g1_ParamLimits

0x805d,	// (0x000528e2) main_mp2_pane_g1

0x8069,	// (0x000528ee) main_mp2_pane_g2_ParamLimits

0x8069,	// (0x000528ee) main_mp2_pane_g2

0x8075,	// (0x000528fa) main_mp2_pane_g3_ParamLimits

0x8075,	// (0x000528fa) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x00059d78) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x00059d78) main_mp2_pane_g

0x8081,	// (0x00052906) main_mp2_pane_t1_ParamLimits

0x8081,	// (0x00052906) main_mp2_pane_t1

0x8098,	// (0x0005291d) main_mp2_pane_t2_ParamLimits

0x8098,	// (0x0005291d) main_mp2_pane_t2

0x80ac,	// (0x00052931) main_mp2_pane_t3_ParamLimits

0x80ac,	// (0x00052931) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x00059d7f) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x00059d7f) main_mp2_pane_t

0x426c,	// (0x0004eaf1) pec_content_pane_ParamLimits

0x426c,	// (0x0004eaf1) pec_content_pane

0x3918,	// (0x0004e19d) scroll_pane_cp015

0x427e,	// (0x0004eb03) pec_attribute_pane_ParamLimits

0x427e,	// (0x0004eb03) pec_attribute_pane

0x80be,	// (0x00052943) pec_content_pane_g1_ParamLimits

0x80be,	// (0x00052943) pec_content_pane_g1

0x428e,	// (0x0004eb13) pec_content_pane_t1_ParamLimits

0x428e,	// (0x0004eb13) pec_content_pane_t1

0x42a0,	// (0x0004eb25) pec_content_pane_t2_ParamLimits

0x42a0,	// (0x0004eb25) pec_content_pane_t2

0x0001,

0xf501,	// (0x00059d86) pec_content_pane_t_ParamLimits

0xf501,	// (0x00059d86) pec_content_pane_t

0x80ca,	// (0x0005294f) list_single_graphic_pane_cp01_ParamLimits

0x80ca,	// (0x0005294f) list_single_graphic_pane_cp01

0x34fd,	// (0x0004dd82) bg_popup_sub_pane_cp04

0x42b2,	// (0x0004eb37) popup_mup_playback_window_g1

0x42be,	// (0x0004eb43) popup_mup_playback_window_t1

0x42d3,	// (0x0004eb58) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x00059d8b) popup_mup_playback_window_t

0x430a,	// (0x0004eb8f) main_image_pane_g1_ParamLimits

0x430a,	// (0x0004eb8f) main_image_pane_g1

0x434d,	// (0x0004ebd2) scroll_pane_cp018_ParamLimits

0x434d,	// (0x0004ebd2) scroll_pane_cp018

0x4365,	// (0x0004ebea) scroll_pane_cp016_ParamLimits

0x4365,	// (0x0004ebea) scroll_pane_cp016

0x8163,	// (0x000529e8) smil2_image_pane_ParamLimits

0x8163,	// (0x000529e8) smil2_image_pane

0x8193,	// (0x00052a18) smil2_root_pane_ParamLimits

0x8193,	// (0x00052a18) smil2_root_pane

0x81bf,	// (0x00052a44) smil2_text_pane_ParamLimits

0x81bf,	// (0x00052a44) smil2_text_pane

0x32a2,	// (0x0004db27) bg_list_pane_cp06

0x43a1,	// (0x0004ec26) grid_radio_pane

0x32a2,	// (0x0004db27) bg_popup_window_pane_cp06

0x43a9,	// (0x0004ec2e) main_fmradio_pane_t1

0x3e39,	// (0x0004e6be) heading_pane_cp04

0x43b7,	// (0x0004ec3c) main_fmradio_pane_t2

0xe45e,	// (0x00058ce3) popup_cale_lunar_info_window_g1

0x43c5,	// (0x0004ec4a) main_fmradio_pane_t3

0xe466,	// (0x00058ceb) popup_cale_lunar_info_window_g2

0x43d3,	// (0x0004ec58) main_fmradio_pane_t4

0x0001,

0x43e1,	// (0x0004ec66) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x00059e66) popup_cale_lunar_info_window_g

0xf51b,	// (0x00059da0) main_fmradio_pane_t

0x43ef,	// (0x0004ec74) wait_bar_pane_cp03

0x43f7,	// (0x0004ec7c) cell_fmradio_pane_ParamLimits

0x43f7,	// (0x0004ec7c) cell_fmradio_pane

0x4250,	// (0x0004ead5) cell_fmradio_pane_g1_ParamLimits

0x4250,	// (0x0004ead5) cell_fmradio_pane_g1

0x32a2,	// (0x0004db27) grid_highlight_pane_cp011

0x440a,	// (0x0004ec8f) poc_content_pane_ParamLimits

0x440a,	// (0x0004ec8f) poc_content_pane

0x441c,	// (0x0004eca1) scroll_pane_cp019

0x81ff,	// (0x00052a84) popup_call_poc_act_window_ParamLimits

0x81ff,	// (0x00052a84) popup_call_poc_act_window

0x820c,	// (0x00052a91) popup_call_poc_inact_window_ParamLimits

0x820c,	// (0x00052a91) popup_call_poc_inact_window

0xf5b8,	// (0x00059e3d) bg_popup_call_poc_act_pane_g

0xe3d6,	// (0x00058c5b) bg_popup_call_poc_inact_pane_g1

0xe3de,	// (0x00058c63) bg_popup_call_poc_inact_pane_g2

0x4424,	// (0x0004eca9) popup_call_poc_act_window_g2

0xe3e6,	// (0x00058c6b) bg_popup_call_poc_inact_pane_g3

0xe3ee,	// (0x00058c73) bg_popup_call_poc_inact_pane_g4

0xe3f6,	// (0x00058c7b) bg_popup_call_poc_inact_pane_g5

0x442c,	// (0x0004ecb1) popup_call_poc_act_window_t1_ParamLimits

0x442c,	// (0x0004ecb1) popup_call_poc_act_window_t1

0x4454,	// (0x0004ecd9) popup_call_poc_act_window_t2_ParamLimits

0x4454,	// (0x0004ecd9) popup_call_poc_act_window_t2

0x447c,	// (0x0004ed01) popup_call_poc_act_window_t3_ParamLimits

0x447c,	// (0x0004ed01) popup_call_poc_act_window_t3

0x44a4,	// (0x0004ed29) popup_call_poc_act_window_t4_ParamLimits

0x44a4,	// (0x0004ed29) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x00059dab) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x00059dab) popup_call_poc_act_window_t

0xe3fe,	// (0x00058c83) bg_popup_call_poc_inact_pane_g6

0xe406,	// (0x00058c8b) bg_popup_call_poc_inact_pane_g7

0xe40e,	// (0x00058c93) bg_popup_call_poc_inact_pane_g8

0x44b6,	// (0x0004ed3b) popup_call_poc_inact_window_g2

0xe416,	// (0x00058c9b) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x00059e2a) bg_popup_call_poc_inact_pane_g

0x44be,	// (0x0004ed43) popup_call_poc_inact_window_t1_ParamLimits

0x44be,	// (0x0004ed43) popup_call_poc_inact_window_t1

0x44d3,	// (0x0004ed58) popup_call_poc_inact_window_t2_ParamLimits

0x44d3,	// (0x0004ed58) popup_call_poc_inact_window_t2

0x44e8,	// (0x0004ed6d) popup_call_poc_inact_window_t3_ParamLimits

0x44e8,	// (0x0004ed6d) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x00059db4) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x00059db4) popup_call_poc_inact_window_t

0xe5ce,	// (0x00058e53) context_pane_ParamLimits

0x87fc,	// (0x00053081) signal_pane_ParamLimits

0x40b3,	// (0x0004e938) main_call2_pane

0xe5bc,	// (0x00058e41) popup_phob_thumbnail2_window_ParamLimits

0xe5bc,	// (0x00058e41) popup_phob_thumbnail2_window

0x7ed9,	// (0x0005275e) aid_hotspot_pointer_arrow_pane

0x7ee1,	// (0x00052766) aid_hotspot_pointer_hand_pane

0x852e,	// (0x00052db3) phob_pre_status_pane_g5

0x62a8,	// (0x00050b2d) cams_zoom_pane_ParamLimits

0x62b4,	// (0x00050b39) image_vga_pane_ParamLimits

0x62c3,	// (0x00050b48) main_camera_pane_g1_ParamLimits

0x62d1,	// (0x00050b56) main_camera_pane_g2_ParamLimits

0x62dd,	// (0x00050b62) main_camera_pane_g3_ParamLimits

0x62e9,	// (0x00050b6e) main_camera_pane_g4_ParamLimits

0x62f5,	// (0x00050b7a) main_camera_pane_g5_ParamLimits

0x6301,	// (0x00050b86) main_camera_pane_g6_ParamLimits

0x630d,	// (0x00050b92) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x00059ab3) main_camera_pane_g_ParamLimits

0x6319,	// (0x00050b9e) main_camera_pane_t1_ParamLimits

0x632b,	// (0x00050bb0) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x00059ac4) main_camera_pane_t_ParamLimits

0x34fd,	// (0x0004dd82) bg_popup_preview_window_pane_cp01_ParamLimits

0x34fd,	// (0x0004dd82) bg_popup_preview_window_pane_cp01

0x44fd,	// (0x0004ed82) popup_phob_thumbnail2_window_g1_ParamLimits

0x44fd,	// (0x0004ed82) popup_phob_thumbnail2_window_g1

0x32a2,	// (0x0004db27) call2_cli_visual_pane

0x8228,	// (0x00052aad) popup_call2_audio_conf_window_ParamLimits

0x8228,	// (0x00052aad) popup_call2_audio_conf_window

0x823d,	// (0x00052ac2) popup_call2_audio_first_window_ParamLimits

0x823d,	// (0x00052ac2) popup_call2_audio_first_window

0x82db,	// (0x00052b60) popup_call2_audio_in_window_ParamLimits

0x82db,	// (0x00052b60) popup_call2_audio_in_window

0x831d,	// (0x00052ba2) popup_call2_audio_out_window_ParamLimits

0x831d,	// (0x00052ba2) popup_call2_audio_out_window

0x837f,	// (0x00052c04) popup_call2_audio_second_window_ParamLimits

0x837f,	// (0x00052c04) popup_call2_audio_second_window

0x83dd,	// (0x00052c62) popup_call2_audio_wait_window_ParamLimits

0x83dd,	// (0x00052c62) popup_call2_audio_wait_window

0x32a2,	// (0x0004db27) bg_popup_call2_act_pane_cp03

0x34df,	// (0x0004dd64) list_conf_pane_cp

0x4509,	// (0x0004ed8e) popup_call2_audio_conf_window_t1

0x3ea4,	// (0x0004e729) list_single_graphic_popup_conf2_pane_ParamLimits

0x3ea4,	// (0x0004e729) list_single_graphic_popup_conf2_pane

0x3eb7,	// (0x0004e73c) list_highlight_pane_cp04

0x4517,	// (0x0004ed9c) list_single_graphic_popup_conf2_pane_g1

0x3ec8,	// (0x0004e74d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x00059dbb) list_single_graphic_popup_conf2_pane_g

0x4521,	// (0x0004eda6) list_single_graphic_popup_conf2_pane_t1

0x452f,	// (0x0004edb4) bg_popup_call2_act_pane_cp01_ParamLimits

0x452f,	// (0x0004edb4) bg_popup_call2_act_pane_cp01

0x45b9,	// (0x0004ee3e) call_type_pane_cp05_ParamLimits

0x45b9,	// (0x0004ee3e) call_type_pane_cp05

0x460d,	// (0x0004ee92) popup_call2_audio_second_window_g1_ParamLimits

0x460d,	// (0x0004ee92) popup_call2_audio_second_window_g1

0x4661,	// (0x0004eee6) popup_call2_audio_second_window_g2_ParamLimits

0x4661,	// (0x0004eee6) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x00059dc0) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x00059dc0) popup_call2_audio_second_window_g

0x46c6,	// (0x0004ef4b) popup_call2_audio_second_window_t1_ParamLimits

0x46c6,	// (0x0004ef4b) popup_call2_audio_second_window_t1

0xd863,	// (0x000580e8) popup_call2_audio_second_window_t2_ParamLimits

0xd863,	// (0x000580e8) popup_call2_audio_second_window_t2

0xd8b6,	// (0x0005813b) popup_call2_audio_second_window_t3_ParamLimits

0xd8b6,	// (0x0005813b) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x00059dc7) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x00059dc7) popup_call2_audio_second_window_t

0x32a2,	// (0x0004db27) bg_popup_call2_in_pane_cp02

0x32ac,	// (0x0004db31) call_type_pane_cp04

0x32b4,	// (0x0004db39) popup_call2_audio_wait_window_g1

0x32bc,	// (0x0004db41) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x000599a0) popup_call2_audio_wait_window_g

0x32c4,	// (0x0004db49) popup_call2_audio_wait_window_t3

0xd9a9,	// (0x0005822e) bg_popup_call2_act_pane_ParamLimits

0xd9a9,	// (0x0005822e) bg_popup_call2_act_pane

0xda69,	// (0x000582ee) call_type_pane_cp03_ParamLimits

0xda69,	// (0x000582ee) call_type_pane_cp03

0xdacd,	// (0x00058352) popup_call2_audio_first_window_g1_ParamLimits

0xdacd,	// (0x00058352) popup_call2_audio_first_window_g1

0xdb3d,	// (0x000583c2) popup_call2_audio_first_window_g2_ParamLimits

0xdb3d,	// (0x000583c2) popup_call2_audio_first_window_g2

0x3e41,	// (0x0004e6c6) popup_call2_audio_first_window_g3_ParamLimits

0x3e41,	// (0x0004e6c6) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x00059dd0) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x00059dd0) popup_call2_audio_first_window_g

0xdc1b,	// (0x000584a0) popup_call2_audio_first_window_t1_ParamLimits

0xdc1b,	// (0x000584a0) popup_call2_audio_first_window_t1

0xdd1e,	// (0x000585a3) popup_call2_audio_first_window_t4_ParamLimits

0xdd1e,	// (0x000585a3) popup_call2_audio_first_window_t4

0xde01,	// (0x00058686) popup_call2_audio_first_window_t5_ParamLimits

0xde01,	// (0x00058686) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x00059ddb) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x00059ddb) popup_call2_audio_first_window_t

0x34f5,	// (0x0004dd7a) bg_popup_call2_act_pane_g1

0xe46e,	// (0x00058cf3) popup_cale_lunar_info_window_t1

0xe47c,	// (0x00058d01) popup_cale_lunar_info_window_t2

0xe48a,	// (0x00058d0f) popup_cale_lunar_info_window_t3

0x32a2,	// (0x0004db27) bg_popup_call2_bubble_pane

0xdf02,	// (0x00058787) bg_popup_call2_in_pane_cp01_ParamLimits

0xdf02,	// (0x00058787) bg_popup_call2_in_pane_cp01

0x2f7e,	// (0x0004d803) call_type_pane_cp02

0xdf4a,	// (0x000587cf) popup_call2_audio_out_window_g1_ParamLimits

0xdf4a,	// (0x000587cf) popup_call2_audio_out_window_g1

0xdf76,	// (0x000587fb) popup_call2_audio_out_window_g2_ParamLimits

0xdf76,	// (0x000587fb) popup_call2_audio_out_window_g2

0xdf9e,	// (0x00058823) popup_call2_audio_out_window_g3_ParamLimits

0xdf9e,	// (0x00058823) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x00059de4) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x00059de4) popup_call2_audio_out_window_g

0xdfd9,	// (0x0005885e) popup_call2_audio_out_window_t1_ParamLimits

0xdfd9,	// (0x0005885e) popup_call2_audio_out_window_t1

0xe038,	// (0x000588bd) popup_call2_audio_out_window_t2_ParamLimits

0xe038,	// (0x000588bd) popup_call2_audio_out_window_t2

0xe08c,	// (0x00058911) popup_call2_audio_out_window_t3_ParamLimits

0xe08c,	// (0x00058911) popup_call2_audio_out_window_t3

0xe0a2,	// (0x00058927) popup_call2_audio_out_window_t4_ParamLimits

0xe0a2,	// (0x00058927) popup_call2_audio_out_window_t4

0xe0b8,	// (0x0005893d) popup_call2_audio_out_window_t5_ParamLimits

0xe0b8,	// (0x0005893d) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x00059ded) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x00059ded) popup_call2_audio_out_window_t

0xe11c,	// (0x000589a1) bg_popup_call2_in_pane_ParamLimits

0xe11c,	// (0x000589a1) bg_popup_call2_in_pane

0xe178,	// (0x000589fd) popup_call2_audio_in_window_g1_ParamLimits

0xe178,	// (0x000589fd) popup_call2_audio_in_window_g1

0xe1b0,	// (0x00058a35) popup_call2_audio_in_window_g2_ParamLimits

0xe1b0,	// (0x00058a35) popup_call2_audio_in_window_g2

0xe1e8,	// (0x00058a6d) popup_call2_audio_in_window_g3_ParamLimits

0xe1e8,	// (0x00058a6d) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x00059dfa) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x00059dfa) popup_call2_audio_in_window_g

0xe240,	// (0x00058ac5) popup_call2_audio_in_window_t1_ParamLimits

0xe240,	// (0x00058ac5) popup_call2_audio_in_window_t1

0xe2c0,	// (0x00058b45) popup_call2_audio_in_window_t2_ParamLimits

0xe2c0,	// (0x00058b45) popup_call2_audio_in_window_t2

0xe340,	// (0x00058bc5) popup_call2_audio_in_window_t3_ParamLimits

0xe340,	// (0x00058bc5) popup_call2_audio_in_window_t3

0xe35a,	// (0x00058bdf) popup_call2_audio_in_window_t4_ParamLimits

0xe35a,	// (0x00058bdf) popup_call2_audio_in_window_t4

0xe36c,	// (0x00058bf1) popup_call2_audio_in_window_t5_ParamLimits

0xe36c,	// (0x00058bf1) popup_call2_audio_in_window_t5

0xe381,	// (0x00058c06) popup_call2_audio_in_window_t6_ParamLimits

0xe381,	// (0x00058c06) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x00059e03) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x00059e03) popup_call2_audio_in_window_t

0x34f5,	// (0x0004dd7a) bg_popup_call2_in_pane_g1

0xe498,	// (0x00058d1d) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x00059e6b) popup_cale_lunar_info_window_t

0x34fd,	// (0x0004dd82) bg_popup_call2_rect_pane_ParamLimits

0x34fd,	// (0x0004dd82) bg_popup_call2_rect_pane

0x32a2,	// (0x0004db27) call2_cli_visual_graphic_pane

0x32a2,	// (0x0004db27) call2_cli_visual_text_pane

0x88a2,	// (0x00053127) smil_status_volume_pane_g3

0x0002,

0x3629,	// (0x0004deae) call2_cli_visual_graphic_pane_g1

0x3629,	// (0x0004deae) call2_cli_visual_graphic_pane_g2

0x3629,	// (0x0004deae) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x00059e10) call2_cli_visual_graphic_pane_g

0xe396,	// (0x00058c1b) bg_popup_call2_rect_pane_g1

0x36b5,	// (0x0004df3a) bg_popup_call2_rect_pane_g2

0xe39e,	// (0x00058c23) bg_popup_call2_rect_pane_g3

0xe3a6,	// (0x00058c2b) bg_popup_call2_rect_pane_g4

0xe3ae,	// (0x00058c33) bg_popup_call2_rect_pane_g5

0xe3b6,	// (0x00058c3b) bg_popup_call2_rect_pane_g6

0xe3be,	// (0x00058c43) bg_popup_call2_rect_pane_g7

0xe3c6,	// (0x00058c4b) bg_popup_call2_rect_pane_g8

0xe3ce,	// (0x00058c53) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x00059e17) bg_popup_call2_rect_pane_g

0xe3d6,	// (0x00058c5b) bg_popup_call2_bubble_pane_g1

0xe3de,	// (0x00058c63) bg_popup_call2_bubble_pane_g2

0xe3e6,	// (0x00058c6b) bg_popup_call2_bubble_pane_g3

0xe3ee,	// (0x00058c73) bg_popup_call2_bubble_pane_g4

0xe3f6,	// (0x00058c7b) bg_popup_call2_bubble_pane_g5

0xe3fe,	// (0x00058c83) bg_popup_call2_bubble_pane_g6

0xe406,	// (0x00058c8b) bg_popup_call2_bubble_pane_g7

0xe40e,	// (0x00058c93) bg_popup_call2_bubble_pane_g8

0xe416,	// (0x00058c9b) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x00059e2a) bg_popup_call2_bubble_pane_g

0x5e21,	// (0x000506a6) aid_cale_week_size_cell_pane

0x633d,	// (0x00050bc2) aid_cams_cif_uncrop_pane_ParamLimits

0x633d,	// (0x00050bc2) aid_cams_cif_uncrop_pane

0x649a,	// (0x00050d1f) aid_cams_size_cell_ParamLimits

0x649a,	// (0x00050d1f) aid_cams_size_cell

0x64a6,	// (0x00050d2b) grid_cams_pane_ParamLimits

0x64b4,	// (0x00050d39) linegrid_cams_pane_ParamLimits

0x65e0,	// (0x00050e65) call_video_pane_t1

0x6601,	// (0x00050e86) call_video_pane_t2

0x0001,

0xf292,	// (0x00059b17) call_video_pane_t

0x6b38,	// (0x000513bd) aid_cale_month_size_cell_pane_ParamLimits

0x6b38,	// (0x000513bd) aid_cale_month_size_cell_pane

0xf62f,	// (0x00059eb4) smil_status_volume_pane_g

0x88af,	// (0x00053134) volume_smil_pane_ParamLimits

0x0474,	// (0x0004acf9) aid_popup2_width_pane

0x5d1e,	// (0x000505a3) cell_qdial_pane_g4_ParamLimits

0x5d1e,	// (0x000505a3) cell_qdial_pane_g4

0x77b5,	// (0x0005203a) aid_blid_cardinal_pane_ParamLimits

0x77c5,	// (0x0005204a) aid_blid_destination_pane_ParamLimits

0x77c5,	// (0x0005204a) aid_blid_destination_pane

0x34fd,	// (0x0004dd82) bg_popup_call_poc_act_pane_ParamLimits

0x34fd,	// (0x0004dd82) bg_popup_call_poc_act_pane

0x34fd,	// (0x0004dd82) bg_popup_call_poc_inact_pane_ParamLimits

0x34fd,	// (0x0004dd82) bg_popup_call_poc_inact_pane

0xe41e,	// (0x00058ca3) bg_popup_call_poc_act_pane_g1

0xe426,	// (0x00058cab) bg_popup_call_poc_act_pane_g2

0xe42e,	// (0x00058cb3) bg_popup_call_poc_act_pane_g3

0xe3ee,	// (0x00058c73) bg_popup_call_poc_act_pane_g4

0xe3f6,	// (0x00058c7b) bg_popup_call_poc_act_pane_g5

0xe436,	// (0x00058cbb) bg_popup_call_poc_act_pane_g6

0xe406,	// (0x00058c8b) bg_popup_call_poc_act_pane_g7

0xe43e,	// (0x00058cc3) bg_popup_call_poc_act_pane_g8

0x32a2,	// (0x0004db27) main_usb_pane

0xe597,	// (0x00058e1c) popup_cale_lunar_info_window

0x692c,	// (0x000511b1) im_reading_pane_t1_ParamLimits

0x3870,	// (0x0004e0f5) list_im_pane_ParamLimits

0x3881,	// (0x0004e106) scroll_pane_cp07_ParamLimits

0x32a2,	// (0x0004db27) grid_highlight_pane_cp012

0x34fd,	// (0x0004dd82) mup_scale_pane_ParamLimits

0x3e41,	// (0x0004e6c6) main_usb_pane_g1_ParamLimits

0x3e41,	// (0x0004e6c6) main_usb_pane_g1

0x8451,	// (0x00052cd6) main_usb_pane_g2_ParamLimits

0x8451,	// (0x00052cd6) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x00059e54) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x00059e54) main_usb_pane_g

0x845d,	// (0x00052ce2) main_usb_pane_t1_ParamLimits

0x845d,	// (0x00052ce2) main_usb_pane_t1

0x846f,	// (0x00052cf4) main_usb_pane_t2_ParamLimits

0x846f,	// (0x00052cf4) main_usb_pane_t2

0x8481,	// (0x00052d06) main_usb_pane_t3_ParamLimits

0x8481,	// (0x00052d06) main_usb_pane_t3

0x8493,	// (0x00052d18) main_usb_pane_t4_ParamLimits

0x8493,	// (0x00052d18) main_usb_pane_t4

0x84a5,	// (0x00052d2a) main_usb_pane_t5_ParamLimits

0x84a5,	// (0x00052d2a) main_usb_pane_t5

0x84b7,	// (0x00052d3c) main_usb_pane_t6_ParamLimits

0x84b7,	// (0x00052d3c) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x00059e59) main_usb_pane_t_ParamLimits

0x775b,	// (0x00051fe0) aid_text_placing

0x7767,	// (0x00051fec) main_location2_pane_t1_ParamLimits

0x777b,	// (0x00052000) main_location2_pane_t2_ParamLimits

0x778f,	// (0x00052014) main_location2_pane_t3_ParamLimits

0x77a3,	// (0x00052028) main_location2_pane_t4_ParamLimits

0x77a3,	// (0x00052028) main_location2_pane_t4

0xf3f3,	// (0x00059c78) main_location2_pane_t_ParamLimits

0x3539,	// (0x0004ddbe) find_pinb_pane_g2_ParamLimits

0x3539,	// (0x0004ddbe) find_pinb_pane_g2

0x0001,

0xf141,	// (0x000599c6) find_pinb_pane_g_ParamLimits

0xf141,	// (0x000599c6) find_pinb_pane_g

0x3545,	// (0x0004ddca) find_pinb_pane_t1_ParamLimits

0x3557,	// (0x0004dddc) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x000599cb) find_pinb_pane_t_ParamLimits

0x32a2,	// (0x0004db27) main_call3_pane

0x6f44,	// (0x000517c9) cale_month_day_heading_pane_t1_ParamLimits

0x6fa2,	// (0x00051827) cale_month_day_heading_pane_t2_ParamLimits

0x7007,	// (0x0005188c) cale_month_day_heading_pane_t3_ParamLimits

0x706c,	// (0x000518f1) cale_month_day_heading_pane_t4_ParamLimits

0x70d1,	// (0x00051956) cale_month_day_heading_pane_t5_ParamLimits

0x7136,	// (0x000519bb) cale_month_day_heading_pane_t6_ParamLimits

0x719b,	// (0x00051a20) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x00059b4f) cale_month_day_heading_pane_t_ParamLimits

0x3ac1,	// (0x0004e346) smil_status_volume_pane

0x8015,	// (0x0005289a) postcard_address_pane_ParamLimits

0x8015,	// (0x0005289a) postcard_address_pane

0x8021,	// (0x000528a6) postcard_message_pane_ParamLimits

0x8021,	// (0x000528a6) postcard_message_pane

0x841c,	// (0x00052ca1) call2_cli_visual_pane_t1_ParamLimits

0x841c,	// (0x00052ca1) call2_cli_visual_pane_t1

0x8a06,	// (0x0005328b) postcard_message_pane_t1_ParamLimits

0x8a06,	// (0x0005328b) postcard_message_pane_t1

0x89ef,	// (0x00053274) postcard_address_pane_t1_ParamLimits

0x89ef,	// (0x00053274) postcard_address_pane_t1

0x89e0,	// (0x00053265) popup_call3_audio_in_window_ParamLimits

0x89e0,	// (0x00053265) popup_call3_audio_in_window

0x88c4,	// (0x00053149) bg_popup_call3_in_pane_ParamLimits

0x88c4,	// (0x00053149) bg_popup_call3_in_pane

0x8926,	// (0x000531ab) popup_call3_audio_in_window_g1_ParamLimits

0x8926,	// (0x000531ab) popup_call3_audio_in_window_g1

0x893e,	// (0x000531c3) popup_call3_audio_in_window_g2_ParamLimits

0x893e,	// (0x000531c3) popup_call3_audio_in_window_g2

0x8956,	// (0x000531db) popup_call3_audio_in_window_g3_ParamLimits

0x8956,	// (0x000531db) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x00059ebb) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x00059ebb) popup_call3_audio_in_window_g

0x897e,	// (0x00053203) popup_call3_audio_in_window_t1_ParamLimits

0x897e,	// (0x00053203) popup_call3_audio_in_window_t1

0x89a6,	// (0x0005322b) popup_call3_audio_in_window_t2_ParamLimits

0x89a6,	// (0x0005322b) popup_call3_audio_in_window_t2

0x89ce,	// (0x00053253) popup_call3_audio_in_window_t3_ParamLimits

0x89ce,	// (0x00053253) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x00059ec4) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x00059ec4) popup_call3_audio_in_window_t

0x40b3,	// (0x0004e938) bg_popup_call3_rect_pane

0xe396,	// (0x00058c1b) bg_popup_call3_rect_pane_g1

0x36b5,	// (0x0004df3a) bg_popup_call3_rect_pane_g2

0xe39e,	// (0x00058c23) bg_popup_call3_rect_pane_g3

0xe3a6,	// (0x00058c2b) bg_popup_call3_rect_pane_g4

0xe3ae,	// (0x00058c33) bg_popup_call3_rect_pane_g5

0xe3b6,	// (0x00058c3b) bg_popup_call3_rect_pane_g6

0xe3be,	// (0x00058c43) bg_popup_call3_rect_pane_g7

0x7bb5,	// (0x0005243a) mup_visualizer_osc_pane

0x4172,	// (0x0004e9f7) mup_visualizer_spec_pane

0x88e4,	// (0x00053169) call3_video_qcif_pane_ParamLimits

0x88e4,	// (0x00053169) call3_video_qcif_pane

0x88f6,	// (0x0005317b) call3_video_qcif_uncrop_pane_ParamLimits

0x88f6,	// (0x0005317b) call3_video_qcif_uncrop_pane

0x8904,	// (0x00053189) call3_video_subqcif_pane_ParamLimits

0x8904,	// (0x00053189) call3_video_subqcif_pane

0x8916,	// (0x0005319b) call3_video_subqcif_uncrop_pane_ParamLimits

0x8916,	// (0x0005319b) call3_video_subqcif_uncrop_pane

0x896e,	// (0x000531f3) popup_call3_audio_in_window_g4_ParamLimits

0x896e,	// (0x000531f3) popup_call3_audio_in_window_g4

0x8891,	// (0x00053116) mup_spec_half_pane

0x889a,	// (0x0005311f) mup_spec_half_pane_cp

0xe62e,	// (0x00058eb3) mup_osc_middle_pane

0xe637,	// (0x00058ebc) mup_visualizer_osc_pane_g1

0x8872,	// (0x000530f7) mup_spec_bar_pane_ParamLimits

0x8872,	// (0x000530f7) mup_spec_bar_pane

0xe61b,	// (0x00058ea0) mup_spec_bar_pane_g1

0xe625,	// (0x00058eaa) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00059eaf) mup_spec_bar_pane_g

0x5e21,	// (0x000506a6) aid_cale_week_size_cell_pane_ParamLimits

0x5e34,	// (0x000506b9) bg_cale_heading_pane_ParamLimits

0x36e9,	// (0x0004df6e) bg_cale_pane_cp01_ParamLimits

0x5e50,	// (0x000506d5) cale_week_corner_pane_ParamLimits

0x5e66,	// (0x000506eb) cale_week_day_heading_pane_ParamLimits

0x5e82,	// (0x00050707) cale_week_scroll_pane_g1_ParamLimits

0x5e9b,	// (0x00050720) cale_week_scroll_pane_g2_ParamLimits

0x5eac,	// (0x00050731) cale_week_scroll_pane_g3_ParamLimits

0x5ebd,	// (0x00050742) cale_week_scroll_pane_g4_ParamLimits

0x5ece,	// (0x00050753) cale_week_scroll_pane_g5_ParamLimits

0x5edf,	// (0x00050764) cale_week_scroll_pane_g6_ParamLimits

0x5ef0,	// (0x00050775) cale_week_scroll_pane_g7_ParamLimits

0x5f03,	// (0x00050788) cale_week_scroll_pane_g8_ParamLimits

0x5f16,	// (0x0005079b) cale_week_scroll_pane_g9_ParamLimits

0x5f27,	// (0x000507ac) cale_week_scroll_pane_g10_ParamLimits

0x5f38,	// (0x000507bd) cale_week_scroll_pane_g11_ParamLimits

0x5f49,	// (0x000507ce) cale_week_scroll_pane_g12_ParamLimits

0x5f5a,	// (0x000507df) cale_week_scroll_pane_g13_ParamLimits

0x5f73,	// (0x000507f8) cale_week_scroll_pane_g14_ParamLimits

0x5f8c,	// (0x00050811) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x00059a57) cale_week_scroll_pane_g_ParamLimits

0x5fa5,	// (0x0005082a) cale_week_time_pane_ParamLimits

0x5fb8,	// (0x0005083d) grid_cale_week_pane_ParamLimits

0x3702,	// (0x0004df87) listscroll_cale_week_pane_t1

0x5fd5,	// (0x0005085a) scroll_pane_cp08_ParamLimits

0x6b89,	// (0x0005140e) cale_month_corner_pane_ParamLimits

0x3a97,	// (0x0004e31c) cale_month_pane_t1

0x6ef3,	// (0x00051778) cale_month_week_pane_ParamLimits

0x3e41,	// (0x0004e6c6) popup_call_status_window_g1_ParamLimits

0x757e,	// (0x00051e03) popup_call_status_window_g2_ParamLimits

0x758a,	// (0x00051e0f) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x00059bff) popup_call_status_window_g_ParamLimits

0x3e31,	// (0x0004e6b6) aid_call2_pane

0x7e54,	// (0x000526d9) msg_header_pane_g1

0x8015,	// (0x0005289a) postcard_address2_pane_ParamLimits

0x8015,	// (0x0005289a) postcard_address2_pane

0x8021,	// (0x000528a6) postcard_message2_pane_ParamLimits

0x8021,	// (0x000528a6) postcard_message2_pane

0x880a,	// (0x0005308f) message2_row_pane_ParamLimits

0x880a,	// (0x0005308f) message2_row_pane

0x8825,	// (0x000530aa) address2_row_pane_ParamLimits

0x8825,	// (0x000530aa) address2_row_pane

0xe5e9,	// (0x00058e6e) postcard_message2_row_pane_g1

0xe5f1,	// (0x00058e76) postcard_message2_row_pane_t1

0xe5e9,	// (0x00058e6e) address2_row_pane_g1

0xe5f1,	// (0x00058e76) address2_row_pane_t1

0x6209,	// (0x00050a8e) aid_size_cell_vorec

0x32a2,	// (0x0004db27) main_rss_pane

0x8838,	// (0x000530bd) rss_list_single_pane_ParamLimits

0x8838,	// (0x000530bd) rss_list_single_pane

0xe5ff,	// (0x00058e84) rss_list_single_pane_t1

0xe60d,	// (0x00058e92) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x00059eaa) rss_list_single_pane_t

0x32a2,	// (0x0004db27) main_camera2_pane

0x32a2,	// (0x0004db27) main_video2_pane

0x8a6a,	// (0x000532ef) cams_zoom_pane_cp2_ParamLimits

0x8a6a,	// (0x000532ef) cams_zoom_pane_cp2

0x8a76,	// (0x000532fb) image2_vga_pane_ParamLimits

0x8a76,	// (0x000532fb) image2_vga_pane

0x8a85,	// (0x0005330a) main_camera2_pane_g1_ParamLimits

0x8a85,	// (0x0005330a) main_camera2_pane_g1

0x8a91,	// (0x00053316) main_camera2_pane_g2_ParamLimits

0x8a91,	// (0x00053316) main_camera2_pane_g2

0x8a9d,	// (0x00053322) main_camera2_pane_g3_ParamLimits

0x8a9d,	// (0x00053322) main_camera2_pane_g3

0x8aa9,	// (0x0005332e) main_camera2_pane_g4_ParamLimits

0x8aa9,	// (0x0005332e) main_camera2_pane_g4

0x8ab5,	// (0x0005333a) main_camera2_pane_g5_ParamLimits

0x8ab5,	// (0x0005333a) main_camera2_pane_g5

0x8ac1,	// (0x00053346) main_camera2_pane_g6_ParamLimits

0x8ac1,	// (0x00053346) main_camera2_pane_g6

0x8acd,	// (0x00053352) main_camera2_pane_g7_ParamLimits

0x8acd,	// (0x00053352) main_camera2_pane_g7

0x8ad9,	// (0x0005335e) main_camera2_pane_g8_ParamLimits

0x8ad9,	// (0x0005335e) main_camera2_pane_g8

0x0008,

0xf646,	// (0x00059ecb) main_camera2_pane_g_ParamLimits

0xf646,	// (0x00059ecb) main_camera2_pane_g

0x8af1,	// (0x00053376) main_camera2_pane_t1_ParamLimits

0x8af1,	// (0x00053376) main_camera2_pane_t1

0x8b03,	// (0x00053388) main_camera2_pane_t2_ParamLimits

0x8b03,	// (0x00053388) main_camera2_pane_t2

0x8b15,	// (0x0005339a) main_camera2_pane_t3_ParamLimits

0x8b15,	// (0x0005339a) main_camera2_pane_t3

0x8b27,	// (0x000533ac) main_camera2_pane_t4_ParamLimits

0x8b27,	// (0x000533ac) main_camera2_pane_t4

0x0006,

0xf659,	// (0x00059ede) main_camera2_pane_t_ParamLimits

0xf659,	// (0x00059ede) main_camera2_pane_t

0x8b89,	// (0x0005340e) cams_zoom_pane_cp4_ParamLimits

0x8b89,	// (0x0005340e) cams_zoom_pane_cp4

0x8b99,	// (0x0005341e) image2_cif_pane_ParamLimits

0x8b99,	// (0x0005341e) image2_cif_pane

0x8bae,	// (0x00053433) image2_subqcif_pane_ParamLimits

0x8bae,	// (0x00053433) image2_subqcif_pane

0x8bbd,	// (0x00053442) main_video2_pane_g1_ParamLimits

0x8bbd,	// (0x00053442) main_video2_pane_g1

0x8bcf,	// (0x00053454) main_video2_pane_g2_ParamLimits

0x8bcf,	// (0x00053454) main_video2_pane_g2

0x8bdf,	// (0x00053464) main_video2_pane_g3_ParamLimits

0x8bdf,	// (0x00053464) main_video2_pane_g3

0x8bef,	// (0x00053474) main_video2_pane_g4_ParamLimits

0x8bef,	// (0x00053474) main_video2_pane_g4

0x8bff,	// (0x00053484) main_video2_pane_g5_ParamLimits

0x8bff,	// (0x00053484) main_video2_pane_g5

0x8c0f,	// (0x00053494) main_video2_pane_g6_ParamLimits

0x8c0f,	// (0x00053494) main_video2_pane_g6

0x0005,

0xf668,	// (0x00059eed) main_video2_pane_g_ParamLimits

0xf668,	// (0x00059eed) main_video2_pane_g

0x8c21,	// (0x000534a6) main_video2_pane_t1_ParamLimits

0x8c21,	// (0x000534a6) main_video2_pane_t1

0x8c3b,	// (0x000534c0) main_video2_pane_t2_ParamLimits

0x8c3b,	// (0x000534c0) main_video2_pane_t2

0x8c61,	// (0x000534e6) main_video2_pane_t3_ParamLimits

0x8c61,	// (0x000534e6) main_video2_pane_t3

0x0002,

0xf675,	// (0x00059efa) main_video2_pane_t_ParamLimits

0xf675,	// (0x00059efa) main_video2_pane_t

0x856e,	// (0x00052df3) call_muted_g2

0x0001,

0xf617,	// (0x00059e9c) call_muted_g

0x32a2,	// (0x0004db27) main_mup2_pane

0xe66e,	// (0x00058ef3) main_mup2_pane_g1_ParamLimits

0xe66e,	// (0x00058ef3) main_mup2_pane_g1

0x8c87,	// (0x0005350c) main_mup2_pane_g2_ParamLimits

0x8c87,	// (0x0005350c) main_mup2_pane_g2

0x8f09,	// (0x0005378e) main_mup_pane_g13_cp1

0x8f11,	// (0x00053796) mup_volume_pane_cp1

0x8ca7,	// (0x0005352c) main_mup2_pane_g4_ParamLimits

0x8ca7,	// (0x0005352c) main_mup2_pane_g4

0x8cbc,	// (0x00053541) main_mup2_pane_g5_ParamLimits

0x8cbc,	// (0x00053541) main_mup2_pane_g5

0x8cd1,	// (0x00053556) main_mup2_pane_g6_ParamLimits

0x8cd1,	// (0x00053556) main_mup2_pane_g6

0x8ce6,	// (0x0005356b) main_mup2_pane_g7_ParamLimits

0x8ce6,	// (0x0005356b) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x00059f01) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x00059f01) main_mup2_pane_g

0x8d02,	// (0x00053587) main_mup2_pane_t1_ParamLimits

0x8d02,	// (0x00053587) main_mup2_pane_t1

0x8d19,	// (0x0005359e) main_mup2_pane_t2_ParamLimits

0x8d19,	// (0x0005359e) main_mup2_pane_t2

0x8d30,	// (0x000535b5) main_mup2_pane_t3_ParamLimits

0x8d30,	// (0x000535b5) main_mup2_pane_t3

0x8d47,	// (0x000535cc) main_mup2_pane_t4_ParamLimits

0x8d47,	// (0x000535cc) main_mup2_pane_t4

0x8d61,	// (0x000535e6) main_mup2_pane_t5_ParamLimits

0x8d61,	// (0x000535e6) main_mup2_pane_t5

0x8d7b,	// (0x00053600) main_mup2_pane_t6_ParamLimits

0x8d7b,	// (0x00053600) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x00059f10) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x00059f10) main_mup2_pane_t

0x8db3,	// (0x00053638) mup2_visualizer_pane_ParamLimits

0x8db3,	// (0x00053638) mup2_visualizer_pane

0x8de9,	// (0x0005366e) mup_progress_pane_cp_ParamLimits

0x8de9,	// (0x0005366e) mup_progress_pane_cp

0x8ef4,	// (0x00053779) mup_volume_pane_cp_ParamLimits

0x8ef4,	// (0x00053779) mup_volume_pane_cp

0x8e00,	// (0x00053685) mup2_visualizer_pane_g1_ParamLimits

0x8e00,	// (0x00053685) mup2_visualizer_pane_g1

0xe67a,	// (0x00058eff) mup2_visualizer_pane_g2_ParamLimits

0xe67a,	// (0x00058eff) mup2_visualizer_pane_g2

0x8e15,	// (0x0005369a) mup2_visualizer_pane_g3_ParamLimits

0x8e15,	// (0x0005369a) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x00059f1d) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x00059f1d) mup2_visualizer_pane_g

0x4399,	// (0x0004ec1e) aid_size_cell_fmradio

0x8684,	// (0x00052f09) aid_height_parent_landcape

0x38ff,	// (0x0004e184) wml_content_pane_cp

0x3907,	// (0x0004e18c) wml_tabs_pane

0x3910,	// (0x0004e195) popup_wml_miniature_window

0x3918,	// (0x0004e19d) scroll_pane_cp021

0x392c,	// (0x0004e1b1) wml_content_pane_comp8

0x32a2,	// (0x0004db27) bg_popup_sub_pane_cp05

0xe698,	// (0x00058f1d) popup_wml_miniature_window_g1

0xe6a0,	// (0x00058f25) wml_miniature_view_pane

0x8e23,	// (0x000536a8) aid_size_wml_view

0x8e2b,	// (0x000536b0) wml_miniature_view_pane_g1

0x8e34,	// (0x000536b9) wml_miniature_view_pane_g2

0x8e3d,	// (0x000536c2) wml_miniature_view_pane_g3

0x8e45,	// (0x000536ca) wml_miniature_view_pane_g4

0x8e4d,	// (0x000536d2) wml_miniature_view_pane_g5

0x8e55,	// (0x000536da) wml_miniature_view_pane_g6

0x8e5d,	// (0x000536e2) wml_miniature_view_pane_g7

0x8e65,	// (0x000536ea) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x00059f24) wml_miniature_view_pane_g

0xe66e,	// (0x00058ef3) background_graphic_ParamLimits

0xe66e,	// (0x00058ef3) background_graphic

0xe6a8,	// (0x00058f2d) wml_tabs_2_pane

0xe6b1,	// (0x00058f36) wml_tabs_3_pane_ParamLimits

0xe6b1,	// (0x00058f36) wml_tabs_3_pane

0xe6c3,	// (0x00058f48) wml_tabs_4_pane_ParamLimits

0xe6c3,	// (0x00058f48) wml_tabs_4_pane

0xe6d9,	// (0x00058f5e) wml_tabs_5_pane_ParamLimits

0xe6d9,	// (0x00058f5e) wml_tabs_5_pane

0xe6f3,	// (0x00058f78) wml_tabs_pane_g2_ParamLimits

0xe6f3,	// (0x00058f78) wml_tabs_pane_g2

0xe707,	// (0x00058f8c) wml_tabs_pane_g3_ParamLimits

0xe707,	// (0x00058f8c) wml_tabs_pane_g3

0x8e6d,	// (0x000536f2) wml_tabs_2_active_pane_ParamLimits

0x8e6d,	// (0x000536f2) wml_tabs_2_active_pane

0x8e7d,	// (0x00053702) wml_tabs_2_passive_pane_ParamLimits

0x8e7d,	// (0x00053702) wml_tabs_2_passive_pane

0x8e8d,	// (0x00053712) wml_tabs_3_active_pane_cp_ParamLimits

0x8e8d,	// (0x00053712) wml_tabs_3_active_pane_cp

0x8e9e,	// (0x00053723) wml_tabs_3_passive_pane_ParamLimits

0x8e9e,	// (0x00053723) wml_tabs_3_passive_pane

0x8eaf,	// (0x00053734) wml_tabs_3_passive_pane_cp_ParamLimits

0x8eaf,	// (0x00053734) wml_tabs_3_passive_pane_cp

0x8ec0,	// (0x00053745) tabs_4_active_pane

0x8ec8,	// (0x0005374d) tabs_4_passive_pane

0x8ed0,	// (0x00053755) tabs_4_passive_pane_cp

0x8ed8,	// (0x0005375d) tabs_4_passive_pane_cp2

0x8449,	// (0x00052cce) aid_height_text

0x7b82,	// (0x00052407) mup_volume_cont_pane_ParamLimits

0x7b82,	// (0x00052407) mup_volume_cont_pane

0x596b,	// (0x000501f0) aid_size_cell_pinb

0x5975,	// (0x000501fa) aid_size_list_pinb

0x8dd2,	// (0x00053657) mup2_volume_cont_pane_ParamLimits

0x8dd2,	// (0x00053657) mup2_volume_cont_pane

0x8ee0,	// (0x00053765) mup2_volume_cont_pane_g1_ParamLimits

0x8ee0,	// (0x00053765) mup2_volume_cont_pane_g1

0x560a,	// (0x0004fe8f) aid_size_cell_touch_ParamLimits

0x560a,	// (0x0004fe8f) aid_size_cell_touch

0x5851,	// (0x000500d6) touch_pane_ParamLimits

0x5851,	// (0x000500d6) touch_pane

0x0462,	// (0x0004ace7) main_rss2_pane

0xe724,	// (0x00058fa9) listscroll_rss2_pane

0xe72d,	// (0x00058fb2) rss2_navigation_pane

0xe735,	// (0x00058fba) list_rss2_pane

0x3f6a,	// (0x0004e7ef) scroll_pane_cp22

0xe73d,	// (0x00058fc2) rss2_navigation_pane_g1

0xe746,	// (0x00058fcb) rss2_navigation_pane_g2

0xe74e,	// (0x00058fd3) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x00059f35) rss2_navigation_pane_g

0xe756,	// (0x00058fdb) rss2_navigation_pane_t1

0x8f19,	// (0x0005379e) rss2_list_single_pane_ParamLimits

0x8f19,	// (0x0005379e) rss2_list_single_pane

0xe764,	// (0x00058fe9) rss2_list_single_pane_t2

0xe772,	// (0x00058ff7) rss2_list_single_pane_t3_ParamLimits

0xe772,	// (0x00058ff7) rss2_list_single_pane_t3

0xe78f,	// (0x00059014) rss2_list_single_pane_t4

0x739f,	// (0x00051c24) smil_status_pane_g1

0x4781,	// (0x0004f006) main_image2_pane_ParamLimits

0x4781,	// (0x0004f006) main_image2_pane

0x8ae5,	// (0x0005336a) main_camera2_pane_g9_ParamLimits

0x8ae5,	// (0x0005336a) main_camera2_pane_g9

0x8b39,	// (0x000533be) main_camera2_pane_t5_ParamLimits

0x8b39,	// (0x000533be) main_camera2_pane_t5

0x8b4b,	// (0x000533d0) main_camera2_pane_t6_ParamLimits

0x8b4b,	// (0x000533d0) main_camera2_pane_t6

0x8f4a,	// (0x000537cf) main_image2_pane_g1_ParamLimits

0x8f4a,	// (0x000537cf) main_image2_pane_g1

0x81e9,	// (0x00052a6e) smil2_video_pane_ParamLimits

0x81e9,	// (0x00052a6e) smil2_video_pane

0x0490,	// (0x0004ad15) aid_zoom_text_primary_cp

0x2d83,	// (0x0004d608) popup_preview_fixed_window

0x3868,	// (0x0004e0ed) im_reading_pane_g1

0x8a2f,	// (0x000532b4) cams2_bc_adjust_pane_cp_ParamLimits

0x8a2f,	// (0x000532b4) cams2_bc_adjust_pane_cp

0x8b7b,	// (0x00053400) cams2_bc_adjust_pane_ParamLimits

0x8b7b,	// (0x00053400) cams2_bc_adjust_pane

0xf0e4,	// (0x00059969) cams2_bc_adjust_pane_g1

0x8f56,	// (0x000537db) cams2_slider_pane

0x8f5f,	// (0x000537e4) cams2_slider_pane_g1

0x8f68,	// (0x000537ed) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x00059f3c) cams2_slider_pane_g

0x5a66,	// (0x000502eb) calc_display_pane_ParamLimits

0x5a84,	// (0x00050309) calc_paper_pane_ParamLimits

0x5aa0,	// (0x00050325) grid_calc_pane_ParamLimits

0x75ec,	// (0x00051e71) popup_clock_digital_window_t1_ParamLimits

0x4336,	// (0x0004ebbb) main_image_pane_t1

0x5a4c,	// (0x000502d1) aid_size_cell_calc_ParamLimits

0x5a4c,	// (0x000502d1) aid_size_cell_calc

0x86b6,	// (0x00052f3b) popup_blid_sat_info2_window_ParamLimits

0x86b6,	// (0x00052f3b) popup_blid_sat_info2_window

0xe7a5,	// (0x0005902a) aid_size_cell_blid

0xe7ad,	// (0x00059032) bg_popup_window_pane_cp07

0xe7d0,	// (0x00059055) grid_popup_blid_pane

0xe7da,	// (0x0005905f) heading_pane_cp05_ParamLimits

0xe7da,	// (0x0005905f) heading_pane_cp05

0xe8a4,	// (0x00059129) cell_popup_blid_pane_ParamLimits

0xe8a4,	// (0x00059129) cell_popup_blid_pane

0xe8c8,	// (0x0005914d) cell_popup_blid_pane_g1

0xe8d0,	// (0x00059155) cell_popup_blid_pane_t1

0x8d98,	// (0x0005361d) mup2_indicator_pane_ParamLimits

0x8d98,	// (0x0005361d) mup2_indicator_pane

0x40b3,	// (0x0004e938) mup2_visualizer_osc_pane

0xe686,	// (0x00058f0b) mup2_visualizer_spec_pane_ParamLimits

0xe686,	// (0x00058f0b) mup2_visualizer_spec_pane

0x8f82,	// (0x00053807) mup2_spec_half_pane

0x8f8b,	// (0x00053810) mup2_spec_half_pane_cp

0x8f95,	// (0x0005381a) mup2_spec_bar_pane_ParamLimits

0x8f95,	// (0x0005381a) mup2_spec_bar_pane

0xe61b,	// (0x00058ea0) mup2_spec_bar_pane_g1

0xe625,	// (0x00058eaa) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x00059eaf) mup2_spec_bar_pane_g

0x8fb4,	// (0x00053839) mup2_osc_middle_pane

0xe637,	// (0x00058ebc) mup2_visualizer_osc_pane_g1

0x2eaf,	// (0x0004d734) popup_number_entry_window_t1_ParamLimits

0x2ec2,	// (0x0004d747) popup_number_entry_window_t2_ParamLimits

0x2ed4,	// (0x0004d759) popup_number_entry_window_t3_ParamLimits

0x58a8,	// (0x0005012d) popup_number_entry_window_t5_ParamLimits

0x58a8,	// (0x0005012d) popup_number_entry_window_t5

0xf0ec,	// (0x00059971) popup_number_entry_window_t_ParamLimits

0x2ee6,	// (0x0004d76b) text_title_cp2_ParamLimits

0x7ee9,	// (0x0005276e) aid_hotspot_pointer_text2_pane

0x7f77,	// (0x000527fc) main_viewer_pane_g9_ParamLimits

0x7f77,	// (0x000527fc) main_viewer_pane_g9

0x3a97,	// (0x0004e31c) cale_month_pane_t1_ParamLimits

0x3ad4,	// (0x0004e359) bg_cale_pane_ParamLimits

0x3aec,	// (0x0004e371) list_cale_pane_ParamLimits

0x3702,	// (0x0004df87) listscroll_cale_day_pane_t1

0x3afd,	// (0x0004e382) scroll_pane_cp09_ParamLimits

0x7bbd,	// (0x00052442) main_mup_eq_pane_t1_ParamLimits

0x7bbd,	// (0x00052442) main_mup_eq_pane_t1

0x7bd7,	// (0x0005245c) main_mup_eq_pane_t2_ParamLimits

0x7bd7,	// (0x0005245c) main_mup_eq_pane_t2

0x7bf1,	// (0x00052476) main_mup_eq_pane_t3_ParamLimits

0x7bf1,	// (0x00052476) main_mup_eq_pane_t3

0x7c09,	// (0x0005248e) main_mup_eq_pane_t4_ParamLimits

0x7c09,	// (0x0005248e) main_mup_eq_pane_t4

0x7c21,	// (0x000524a6) main_mup_eq_pane_t5_ParamLimits

0x7c21,	// (0x000524a6) main_mup_eq_pane_t5

0x7c39,	// (0x000524be) main_mup_eq_pane_t6_ParamLimits

0x7c39,	// (0x000524be) main_mup_eq_pane_t6

0x7c4d,	// (0x000524d2) main_mup_eq_pane_t7_ParamLimits

0x7c4d,	// (0x000524d2) main_mup_eq_pane_t7

0x7c61,	// (0x000524e6) main_mup_eq_pane_t8_ParamLimits

0x7c61,	// (0x000524e6) main_mup_eq_pane_t8

0x7c77,	// (0x000524fc) main_mup_eq_pane_t9_ParamLimits

0x7c77,	// (0x000524fc) main_mup_eq_pane_t9

0x7c8f,	// (0x00052514) main_mup_eq_pane_t10_ParamLimits

0x7c8f,	// (0x00052514) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x00059cfe) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x00059cfe) main_mup_eq_pane_t

0x7d4c,	// (0x000525d1) mup_equalizer_pane_cp5_ParamLimits

0x7d62,	// (0x000525e7) mup_equalizer_pane_cp6_ParamLimits

0x7d7a,	// (0x000525ff) mup_equalizer_pane_cp7_ParamLimits

0x0462,	// (0x0004ace7) main_gallery_pane

0xe640,	// (0x00058ec5) smil2_volume_pane

0xe648,	// (0x00058ecd) smil_status_volume_pane_g1_ParamLimits

0xe65b,	// (0x00058ee0) smil_status_volume_pane_g2_ParamLimits

0x88a2,	// (0x00053127) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x00059eb4) smil_status_volume_pane_g_ParamLimits

0xe7ad,	// (0x00059032) bg_popup_window_pane_cp07_ParamLimits

0xe7bb,	// (0x00059040) blid_firmament_pane

0x8fbd,	// (0x00053842) aid_size_cell_gallery_ParamLimits

0x8fbd,	// (0x00053842) aid_size_cell_gallery

0x8fcb,	// (0x00053850) grid_gallery_pane_ParamLimits

0x8fcb,	// (0x00053850) grid_gallery_pane

0x8fdb,	// (0x00053860) cell_gallery_pane_ParamLimits

0x8fdb,	// (0x00053860) cell_gallery_pane

0xe8de,	// (0x00059163) bg_cell_gallery_focus_pane_ParamLimits

0xe8de,	// (0x00059163) bg_cell_gallery_focus_pane

0xe8f0,	// (0x00059175) cell_gallery_pane_g1_ParamLimits

0xe8f0,	// (0x00059175) cell_gallery_pane_g1

0x9029,	// (0x000538ae) cell_gallery_pane_g2_ParamLimits

0x9029,	// (0x000538ae) cell_gallery_pane_g2

0x9036,	// (0x000538bb) cell_gallery_pane_g3_ParamLimits

0x9036,	// (0x000538bb) cell_gallery_pane_g3

0xe8fc,	// (0x00059181) cell_gallery_pane_g4_ParamLimits

0xe8fc,	// (0x00059181) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x00059f62) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x00059f62) cell_gallery_pane_g

0xe908,	// (0x0005918d) bg_cell_gallery_focus_pane_g1

0xe910,	// (0x00059195) bg_cell_gallery_focus_pane_g2

0xe918,	// (0x0005919d) bg_cell_gallery_focus_pane_g3

0xe920,	// (0x000591a5) bg_cell_gallery_focus_pane_g4

0xe928,	// (0x000591ad) bg_cell_gallery_focus_pane_g5

0xe930,	// (0x000591b5) bg_cell_gallery_focus_pane_g6

0xe938,	// (0x000591bd) bg_cell_gallery_focus_pane_g7

0xe940,	// (0x000591c5) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x00059f6b) bg_cell_gallery_focus_pane_g

0xe948,	// (0x000591cd) aid_firma_cardinal

0xe95c,	// (0x000591e1) blid_firmament_pane_t1

0xe973,	// (0x000591f8) blid_firmament_pane_t2

0xe98a,	// (0x0005920f) blid_firmament_pane_t3

0xe9a1,	// (0x00059226) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x00059f7c) blid_firmament_pane_t

0xe9b8,	// (0x0005923d) blid_sat_info_pane

0xe9c8,	// (0x0005924d) blid_sat_info_pane_g1

0xe9c8,	// (0x0005924d) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x00059f85) blid_sat_info_pane_g

0xe9d2,	// (0x00059257) blid_sat_info_pane_t1

0xe9e0,	// (0x00059265) smil2_volume_content_pane

0xe9e9,	// (0x0005926e) smil2_volume_pane_g1

0xd85a,	// (0x000580df) smil2_volume_content_pane_g1

0xe9f1,	// (0x00059276) smil2_volume_content_pane_g2

0xe9fa,	// (0x0005927f) smil2_volume_content_pane_g3

0xea03,	// (0x00059288) smil2_volume_content_pane_g4

0xea0c,	// (0x00059291) smil2_volume_content_pane_g5

0xea15,	// (0x0005929a) smil2_volume_content_pane_g6

0xea1e,	// (0x000592a3) smil2_volume_content_pane_g7

0xea27,	// (0x000592ac) smil2_volume_content_pane_g8

0xea30,	// (0x000592b5) smil2_volume_content_pane_g9

0xea39,	// (0x000592be) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x00059f8a) smil2_volume_content_pane_g

0x603b,	// (0x000508c0) cale_week_day_heading_pane_t1_ParamLimits

0x6054,	// (0x000508d9) cale_week_day_heading_pane_t2_ParamLimits

0x606d,	// (0x000508f2) cale_week_day_heading_pane_t3_ParamLimits

0x6086,	// (0x0005090b) cale_week_day_heading_pane_t4_ParamLimits

0x609f,	// (0x00050924) cale_week_day_heading_pane_t5_ParamLimits

0x60b8,	// (0x0005093d) cale_week_day_heading_pane_t6_ParamLimits

0x60d1,	// (0x00050956) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x00059a76) cale_week_day_heading_pane_t_ParamLimits

0x3714,	// (0x0004df99) bg_cale_side_pane_ParamLimits

0x60ea,	// (0x0005096f) cale_week_time_pane_t1_ParamLimits

0x6102,	// (0x00050987) cale_week_time_pane_t2_ParamLimits

0x611a,	// (0x0005099f) cale_week_time_pane_t3_ParamLimits

0x6132,	// (0x000509b7) cale_week_time_pane_t4_ParamLimits

0x614a,	// (0x000509cf) cale_week_time_pane_t5_ParamLimits

0x6162,	// (0x000509e7) cale_week_time_pane_t6_ParamLimits

0x617a,	// (0x000509ff) cale_week_time_pane_t7_ParamLimits

0x619a,	// (0x00050a1f) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x00059a85) cale_week_time_pane_t_ParamLimits

0x61ba,	// (0x00050a3f) cell_cale_week_pane_g2_ParamLimits

0x3714,	// (0x0004df99) bg_cale_side_pane_cp01_ParamLimits

0x7210,	// (0x00051a95) cale_month_week_pane_t1_ParamLimits

0x7227,	// (0x00051aac) cale_month_week_pane_t2_ParamLimits

0x723e,	// (0x00051ac3) cale_month_week_pane_t3_ParamLimits

0x7255,	// (0x00051ada) cale_month_week_pane_t4_ParamLimits

0x726c,	// (0x00051af1) cale_month_week_pane_t5_ParamLimits

0x7287,	// (0x00051b0c) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x00059b5e) cale_month_week_pane_t_ParamLimits

0x736c,	// (0x00051bf1) cell_cale_month_pane_g1_ParamLimits

0x0462,	// (0x0004ace7) main_cale_event_viewer_pane

0x0462,	// (0x0004ace7) listscroll_cale_event_viewer_pane

0xea42,	// (0x000592c7) list_cale_ev_pane

0xea4a,	// (0x000592cf) scroll_pane_cp023

0xea56,	// (0x000592db) field_cale_ev_pane_ParamLimits

0xea56,	// (0x000592db) field_cale_ev_pane

0xea74,	// (0x000592f9) field_cale_ev_content_pane_ParamLimits

0xea74,	// (0x000592f9) field_cale_ev_content_pane

0xea80,	// (0x00059305) field_cale_ev_pane_g1_ParamLimits

0xea80,	// (0x00059305) field_cale_ev_pane_g1

0xea8c,	// (0x00059311) field_cale_ev_pane_g2_ParamLimits

0xea8c,	// (0x00059311) field_cale_ev_pane_g2

0xeaa4,	// (0x00059329) field_cale_ev_pane_g3_ParamLimits

0xeaa4,	// (0x00059329) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x00059f9f) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x00059f9f) field_cale_ev_pane_g

0xeabc,	// (0x00059341) field_cale_ev_pane_t1_ParamLimits

0xeabc,	// (0x00059341) field_cale_ev_pane_t1

0xead3,	// (0x00059358) field_cale_ev_content_pane_t1_ParamLimits

0xead3,	// (0x00059358) field_cale_ev_content_pane_t1

0x421c,	// (0x0004eaa1) bg_button_pane_cp01

0x35d4,	// (0x0004de59) listscroll_cale_week_pane_ParamLimits

0x5e17,	// (0x0005069c) popup_toolbar_window_cp01

0x3702,	// (0x0004df87) listscroll_cale_week_pane_t1_ParamLimits

0x35d4,	// (0x0004de59) listscroll_cale_day_pane_ParamLimits

0x5e17,	// (0x0005069c) popup_toolbar_window_cp02

0x3702,	// (0x0004df87) listscroll_cale_day_pane_t1_ParamLimits

0x35d4,	// (0x0004de59) main_cale_month_pane_ParamLimits

0x8786,	// (0x0005300b) popup_toolbar_window_cp03_ParamLimits

0x8786,	// (0x0005300b) popup_toolbar_window_cp03

0x80ff,	// (0x00052984) main_image_pane_g2_ParamLimits

0x80ff,	// (0x00052984) main_image_pane_g2

0x810b,	// (0x00052990) main_image_pane_g3_ParamLimits

0x810b,	// (0x00052990) main_image_pane_g3

0x0002,

0xf50b,	// (0x00059d90) main_image_pane_g_ParamLimits

0xf50b,	// (0x00059d90) main_image_pane_g

0x4336,	// (0x0004ebbb) main_image_pane_t1_ParamLimits

0x8117,	// (0x0005299c) main_image_pane_t2_ParamLimits

0x8117,	// (0x0005299c) main_image_pane_t2

0x8129,	// (0x000529ae) main_image_pane_t3_ParamLimits

0x8129,	// (0x000529ae) main_image_pane_t3

0x813b,	// (0x000529c0) main_image_pane_t4_ParamLimits

0x813b,	// (0x000529c0) main_image_pane_t4

0x0003,

0xf512,	// (0x00059d97) main_image_pane_t_ParamLimits

0xf512,	// (0x00059d97) main_image_pane_t

0x814d,	// (0x000529d2) popup_image_details_window_cp01

0x8157,	// (0x000529dc) popup_toobar_trans_pane_cp01_ParamLimits

0x8157,	// (0x000529dc) popup_toobar_trans_pane_cp01

0x8703,	// (0x00052f88) popup_image_details_window_ParamLimits

0x8703,	// (0x00052f88) popup_image_details_window

0xe5a1,	// (0x00058e26) popup_image_focus_window

0x8a21,	// (0x000532a6) camera2_autofocus_pane_ParamLimits

0x8a21,	// (0x000532a6) camera2_autofocus_pane

0x0462,	// (0x0004ace7) bg_popup_sub_pane_cp06

0xeaf1,	// (0x00059376) popup_image_focus_window_g1

0xeaf9,	// (0x0005937e) popup_image_focus_window_g2

0xeb01,	// (0x00059386) popup_image_focus_window_g3

0xeb09,	// (0x0005938e) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x00059fa6) popup_image_focus_window_g

0xeb11,	// (0x00059396) popup_image_focus_window_t1

0xeb1f,	// (0x000593a4) popup_image_focus_window_t2

0xeb2f,	// (0x000593b4) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x00059faf) popup_image_focus_window_t

0xeb3d,	// (0x000593c2) camera2_autofocus_pane_g1

0x4781,	// (0x0004f006) bg_tb_trans_pane_cp01

0xeb4b,	// (0x000593d0) popup_image_details_window_g1

0xeb5e,	// (0x000593e3) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x00059fc1) popup_image_details_window_g

0xeb87,	// (0x0005940c) popup_image_details_window_t1

0xeb99,	// (0x0005941e) popup_image_details_window_t2

0xebb2,	// (0x00059437) popup_image_details_window_t3

0xebc6,	// (0x0005944b) popup_image_details_window_t4

0xebe1,	// (0x00059466) popup_image_details_window_t5

0x0004,

0xf743,	// (0x00059fc8) popup_image_details_window_t

0x35c0,	// (0x0004de45) bg_calc_paper_pane_ParamLimits

0x5b97,	// (0x0005041c) grid_highlight_pane_cp013

0x5ba1,	// (0x00050426) list_calc_pane_ParamLimits

0x5bb3,	// (0x00050438) scroll_pane_cp024

0x35d4,	// (0x0004de59) bg_calc_display_pane_ParamLimits

0x5bbb,	// (0x00050440) calc_display_pane_t1_ParamLimits

0x5bd0,	// (0x00050455) calc_display_pane_t2_ParamLimits

0x5be5,	// (0x0005046a) calc_display_pane_t3_ParamLimits

0xf173,	// (0x000599f8) calc_display_pane_t_ParamLimits

0x5cc1,	// (0x00050546) cell_calc_pane_g2

0x0001,

0xf190,	// (0x00059a15) cell_calc_pane_g

0x5cca,	// (0x0005054f) cell_calc_pane_t1

0x3633,	// (0x0004deb8) grid_highlight_pane_cp02_ParamLimits

0x3649,	// (0x0004dece) toolbar_button_pane_cp01_ParamLimits

0x3649,	// (0x0004dece) toolbar_button_pane_cp01

0x437b,	// (0x0004ec00) temp_image_control_pane_ParamLimits

0x437b,	// (0x0004ec00) temp_image_control_pane

0x4781,	// (0x0004f006) main_mp3_pane

0xebfb,	// (0x00059480) temp_image_control_pane_g1_ParamLimits

0xebfb,	// (0x00059480) temp_image_control_pane_g1

0xec09,	// (0x0005948e) temp_image_control_pane_g2_ParamLimits

0xec09,	// (0x0005948e) temp_image_control_pane_g2

0xec1b,	// (0x000594a0) temp_image_control_pane_g3_ParamLimits

0xec1b,	// (0x000594a0) temp_image_control_pane_g3

0x9073,	// (0x000538f8) temp_image_control_pane_g4_ParamLimits

0x9073,	// (0x000538f8) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x00059fd3) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x00059fd3) temp_image_control_pane_g

0xebfb,	// (0x00059480) main_mp3_pane_g1

0x9084,	// (0x00053909) main_mp3_pane_g2

0x0007,

0xf757,	// (0x00059fdc) main_mp3_pane_g

0xec5e,	// (0x000594e3) main_mp3_pane_t1

0x3779,	// (0x0004dffe) main_camera_pane_g8_ParamLimits

0x3779,	// (0x0004dffe) main_camera_pane_g8

0x6450,	// (0x00050cd5) main_video_pane_g7_ParamLimits

0x6450,	// (0x00050cd5) main_video_pane_g7

0x8b69,	// (0x000533ee) main_camera2_pane_t7_ParamLimits

0x8b69,	// (0x000533ee) main_camera2_pane_t7

0x38bf,	// (0x0004e144) scroll_pane_cp025_ParamLimits

0x38bf,	// (0x0004e144) scroll_pane_cp025

0x38d3,	// (0x0004e158) scroll_pane_cp026_ParamLimits

0x38d3,	// (0x0004e158) scroll_pane_cp026

0x38e2,	// (0x0004e167) wml_content_pane_ParamLimits

0x0462,	// (0x0004ace7) main_touch_calib_pane

0x9128,	// (0x000539ad) main_touch_calib_pane_g1

0x9134,	// (0x000539b9) main_touch_calib_pane_g2

0x9140,	// (0x000539c5) main_touch_calib_pane_g3

0x914c,	// (0x000539d1) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x00059ffa) main_touch_calib_pane_g

0x9158,	// (0x000539dd) main_touch_calib_pane_t1

0x916f,	// (0x000539f4) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0005a003) main_touch_calib_pane_t

0x3ff4,	// (0x0004e879) mup_progress_pane_cp02

0x4013,	// (0x0004e898) navi_pane_g1

0x4075,	// (0x0004e8fa) navi_pane_mp_t3

0x4781,	// (0x0004f006) main_mp3_pane_ParamLimits

0x87c4,	// (0x00053049) navi_pane_ParamLimits

0xebfb,	// (0x00059480) main_mp3_pane_g1_ParamLimits

0x9084,	// (0x00053909) main_mp3_pane_g2_ParamLimits

0x9090,	// (0x00053915) main_mp3_pane_g3_ParamLimits

0x9090,	// (0x00053915) main_mp3_pane_g3

0x909c,	// (0x00053921) main_mp3_pane_g4_ParamLimits

0x909c,	// (0x00053921) main_mp3_pane_g4

0xec2b,	// (0x000594b0) main_mp3_pane_g5_ParamLimits

0xec2b,	// (0x000594b0) main_mp3_pane_g5

0xec39,	// (0x000594be) main_mp3_pane_g6_ParamLimits

0xec39,	// (0x000594be) main_mp3_pane_g6

0xec46,	// (0x000594cb) main_mp3_pane_g7_ParamLimits

0xec46,	// (0x000594cb) main_mp3_pane_g7

0xec52,	// (0x000594d7) main_mp3_pane_g8_ParamLimits

0xec52,	// (0x000594d7) main_mp3_pane_g8

0xf757,	// (0x00059fdc) main_mp3_pane_g_ParamLimits

0x90a8,	// (0x0005392d) main_mp3_pane_t2

0x90b8,	// (0x0005393d) main_mp3_pane_t3

0xec6c,	// (0x000594f1) main_mp3_pane_t4

0xec7a,	// (0x000594ff) main_mp3_pane_t5

0x0005,

0xf768,	// (0x00059fed) main_mp3_pane_t

0xec88,	// (0x0005950d) mup_progress_pane_cp01

0x0490,	// (0x0004ad15) aid_zoom_text_secondary2

0xea42,	// (0x000592c7) list_cale_ev2_pane

0xea4a,	// (0x000592cf) scroll_pane_cp023_ParamLimits

0x91c4,	// (0x00053a49) field_cale_ev2_pane_ParamLimits

0x91c4,	// (0x00053a49) field_cale_ev2_pane

0x08a7,	// (0x0004b12c) field_cale_ev2_pane_g1_ParamLimits

0x08a7,	// (0x0004b12c) field_cale_ev2_pane_g1

0x08b3,	// (0x0004b138) field_cale_ev2_pane_g2_ParamLimits

0x08b3,	// (0x0004b138) field_cale_ev2_pane_g2

0x08cb,	// (0x0004b150) field_cale_ev2_pane_g3_ParamLimits

0x08cb,	// (0x0004b150) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0005a00e) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0005a00e) field_cale_ev2_pane_g

0x91ed,	// (0x00053a72) field_cale_ev2_pane_t1_ParamLimits

0x91ed,	// (0x00053a72) field_cale_ev2_pane_t1

0x9204,	// (0x00053a89) field_cale_ev2_pane_t2_ParamLimits

0x9204,	// (0x00053a89) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0005a017) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0005a017) field_cale_ev2_pane_t

0x7fdf,	// (0x00052864) main_postcard_pane_g5_ParamLimits

0x7fdf,	// (0x00052864) main_postcard_pane_g5

0x7fed,	// (0x00052872) main_postcard_pane_g6_ParamLimits

0x7fed,	// (0x00052872) main_postcard_pane_g6

0x6298,	// (0x00050b1d) camera2_autofocus_pane_cp_ParamLimits

0x6298,	// (0x00050b1d) camera2_autofocus_pane_cp

0x4781,	// (0x0004f006) main_mup3_pane

0x9239,	// (0x00053abe) main_mup3_pane_g1_ParamLimits

0x9239,	// (0x00053abe) main_mup3_pane_g1

0x925a,	// (0x00053adf) main_mup3_pane_g2_ParamLimits

0x925a,	// (0x00053adf) main_mup3_pane_g2

0x92d2,	// (0x00053b57) main_mup3_pane_g3_ParamLimits

0x92d2,	// (0x00053b57) main_mup3_pane_g3

0x9311,	// (0x00053b96) main_mup3_pane_g4_ParamLimits

0x9311,	// (0x00053b96) main_mup3_pane_g4

0x9350,	// (0x00053bd5) main_mup3_pane_g5_ParamLimits

0x9350,	// (0x00053bd5) main_mup3_pane_g5

0x938f,	// (0x00053c14) main_mup3_pane_g6_ParamLimits

0x938f,	// (0x00053c14) main_mup3_pane_g6

0xec90,	// (0x00059515) main_mup3_pane_g7_ParamLimits

0xec90,	// (0x00059515) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0005a027) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0005a027) main_mup3_pane_g

0x9401,	// (0x00053c86) main_mup3_pane_t1_ParamLimits

0x9401,	// (0x00053c86) main_mup3_pane_t1

0x946c,	// (0x00053cf1) main_mup3_pane_t2_ParamLimits

0x946c,	// (0x00053cf1) main_mup3_pane_t2

0x9531,	// (0x00053db6) main_mup3_pane_t4_ParamLimits

0x9531,	// (0x00053db6) main_mup3_pane_t4

0x957f,	// (0x00053e04) main_mup3_pane_t5_ParamLimits

0x957f,	// (0x00053e04) main_mup3_pane_t5

0x9627,	// (0x00053eac) main_mup3_pane_t6_ParamLimits

0x9627,	// (0x00053eac) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0005a038) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0005a038) main_mup3_pane_t

0x96cf,	// (0x00053f54) mup3_progress_pane_ParamLimits

0x96cf,	// (0x00053f54) mup3_progress_pane

0x973a,	// (0x00053fbf) popup_mup3_control_window_ParamLimits

0x973a,	// (0x00053fbf) popup_mup3_control_window

0xec9e,	// (0x00059523) popup_mup3_text_window

0x9753,	// (0x00053fd8) mup3_progress_pane_t1

0x976a,	// (0x00053fef) mup3_progress_pane_t2

0xeca6,	// (0x0005952b) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0005a045) mup3_progress_pane_t

0xecbd,	// (0x00059542) mup_progress_pane_cp03

0x0462,	// (0x0004ace7) bg_tb_trans_pane_cp04

0x9781,	// (0x00054006) mup3_volume_pane

0x9789,	// (0x0005400e) popup_mup3_control_window_g1

0x9792,	// (0x00054017) mup3_volume_pane_g1

0x979b,	// (0x00054020) mup3_volume_pane_g2

0x97a4,	// (0x00054029) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0005a04c) mup3_volume_pane_g

0x0462,	// (0x0004ace7) bg_tb_trans_pane_cp03

0xeccd,	// (0x00059552) popup_mup3_text_window_g1

0xecd5,	// (0x0005955a) popup_mup3_text_window_t1

0x361c,	// (0x0004dea1) list_calc_item_pane_g1_ParamLimits

0xe71b,	// (0x00058fa0) mup_volume_pane_cp_g1

0x9186,	// (0x00053a0b) main_touch_calib_pane_t3

0x919a,	// (0x00053a1f) main_touch_calib_pane_t4

0x91ae,	// (0x00053a33) main_touch_calib_pane_t5

0x046c,	// (0x0004acf1) aid_cell_size_toolbar2

0x0474,	// (0x0004acf9) aid_popup3_width_pane

0x0480,	// (0x0004ad05) aid_zoom_text_msg_primary

0x626f,	// (0x00050af4) vorec_t7

0x35e0,	// (0x0004de65) bg_calc_paper_pane_g1_ParamLimits

0x35f8,	// (0x0004de7d) bg_calc_paper_pane_g2_ParamLimits

0x35ec,	// (0x0004de71) bg_calc_paper_pane_g3_ParamLimits

0x3610,	// (0x0004de95) bg_calc_paper_pane_g4_ParamLimits

0x3604,	// (0x0004de89) bg_calc_paper_pane_g5_ParamLimits

0x5c24,	// (0x000504a9) bg_calc_paper_pane_g6_ParamLimits

0x5c35,	// (0x000504ba) bg_calc_paper_pane_g7_ParamLimits

0x5c46,	// (0x000504cb) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x000599ff) bg_calc_paper_pane_g_ParamLimits

0x5c57,	// (0x000504dc) calc_bg_paper_pane_g9_ParamLimits

0x637f,	// (0x00050c04) image_qvga_pane_ParamLimits

0x637f,	// (0x00050c04) image_qvga_pane

0x34fd,	// (0x0004dd82) bg_popup_sub_pane_cp04_ParamLimits

0x42b2,	// (0x0004eb37) popup_mup_playback_window_g1_ParamLimits

0x42be,	// (0x0004eb43) popup_mup_playback_window_t1_ParamLimits

0x42d3,	// (0x0004eb58) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x00059d8b) popup_mup_playback_window_t_ParamLimits

0x8c98,	// (0x0005351d) main_mup2_pane_g3_ParamLimits

0x8c98,	// (0x0005351d) main_mup2_pane_g3

0x668e,	// (0x00050f13) popup_toolbar_window_cp04

0x46b5,	// (0x0004ef3a) popup_call2_audio_second_window_g3_ParamLimits

0x46b5,	// (0x0004ef3a) popup_call2_audio_second_window_g3

0xdba1,	// (0x00058426) popup_call2_audio_first_window_g4_ParamLimits

0xdba1,	// (0x00058426) popup_call2_audio_first_window_g4

0xe220,	// (0x00058aa5) popup_call2_audio_in_window_g4_ParamLimits

0xe220,	// (0x00058aa5) popup_call2_audio_in_window_g4

0x80f2,	// (0x00052977) aid_area_sk_bg_cut_ParamLimits

0x80f2,	// (0x00052977) aid_area_sk_bg_cut

0x42e8,	// (0x0004eb6d) aid_area_sk_bg_cut_2_ParamLimits

0x42e8,	// (0x0004eb6d) aid_area_sk_bg_cut_2

0x9019,	// (0x0005389e) aid_placing_details_win

0x9021,	// (0x000538a6) aid_placing_details_win_2

0xeb3d,	// (0x000593c2) camera2_autofocus_pane_g1_ParamLimits

0x580b,	// (0x00050090) popup_fixed_preview_cale_window_ParamLimits

0x580b,	// (0x00050090) popup_fixed_preview_cale_window

0x40d6,	// (0x0004e95b) navi_slider_pane_g3

0x40cd,	// (0x0004e952) navi_slider_pane_g4

0x40c4,	// (0x0004e949) navi_slider_pane_g5

0x40d6,	// (0x0004e95b) navi_slider_pane_g6

0x7951,	// (0x000521d6) navi_slider_pane_g7

0x41e9,	// (0x0004ea6e) mup_scale_pane_g3

0x41f2,	// (0x0004ea77) mup_scale_pane_g4

0x41fb,	// (0x0004ea80) mup_scale_pane_g5

0x7d92,	// (0x00052617) mup_scale_pane_g6

0x7d9b,	// (0x00052620) mup_scale_pane_g7

0x40d6,	// (0x0004e95b) cams2_slider_pane_g3

0xe79d,	// (0x00059022) cams2_slider_pane_g4

0x8f71,	// (0x000537f6) cams2_slider_pane_g5

0x40d6,	// (0x0004e95b) cams2_slider_pane_g6

0x8f79,	// (0x000537fe) cams2_slider_pane_g7

0xe9c8,	// (0x0005924d) camera2_autofocus_pane_cp_g1

0xece3,	// (0x00059568) bg_popup_preview_window_pane_cp02_ParamLimits

0xece3,	// (0x00059568) bg_popup_preview_window_pane_cp02

0xecef,	// (0x00059574) list_fp_cale_pane_ParamLimits

0xecef,	// (0x00059574) list_fp_cale_pane

0xecfb,	// (0x00059580) popup_fixed_preview_cale_window_t1_ParamLimits

0xecfb,	// (0x00059580) popup_fixed_preview_cale_window_t1

0x97ad,	// (0x00054032) popup_fixed_preview_cale_window_t2_ParamLimits

0x97ad,	// (0x00054032) popup_fixed_preview_cale_window_t2

0x97c2,	// (0x00054047) popup_fixed_preview_cale_window_t3_ParamLimits

0x97c2,	// (0x00054047) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0005a053) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0005a053) popup_fixed_preview_cale_window_t

0x97d7,	// (0x0005405c) list_single_fp_cale_pane_ParamLimits

0x97d7,	// (0x0005405c) list_single_fp_cale_pane

0xed19,	// (0x0005959e) list_single_fp_cale_pane_g1_ParamLimits

0xed19,	// (0x0005959e) list_single_fp_cale_pane_g1

0xed25,	// (0x000595aa) list_single_fp_cale_pane_g2_ParamLimits

0xed25,	// (0x000595aa) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0005a05a) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0005a05a) list_single_fp_cale_pane_g

0xed3e,	// (0x000595c3) list_single_fp_cale_pane_t1_ParamLimits

0xed3e,	// (0x000595c3) list_single_fp_cale_pane_t1

0xed50,	// (0x000595d5) list_single_fp_cale_pane_t2_ParamLimits

0xed50,	// (0x000595d5) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0005a061) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0005a061) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0462,	// (0x0004ace7) main_dialer_pane

0x97e9,	// (0x0005406e) aid_cell_size_keypad

0x97f3,	// (0x00054078) dialer_ne_pane

0x97fd,	// (0x00054082) grid_dialer_command_1_pane

0x9805,	// (0x0005408a) grid_dialer_command_2_pane

0x980d,	// (0x00054092) grid_dialer_keypad_pane

0x981f,	// (0x000540a4) bg_popup_call_pane_cp06_ParamLimits

0x981f,	// (0x000540a4) bg_popup_call_pane_cp06

0x982b,	// (0x000540b0) dialer_ne_clear_pane_ParamLimits

0x982b,	// (0x000540b0) dialer_ne_clear_pane

0xed83,	// (0x00059608) dialer_ne_pane_g1

0xed8b,	// (0x00059610) dialer_ne_pane_t1_ParamLimits

0xed8b,	// (0x00059610) dialer_ne_pane_t1

0x9837,	// (0x000540bc) dialer_ne_pane_t2_ParamLimits

0x9837,	// (0x000540bc) dialer_ne_pane_t2

0x9854,	// (0x000540d9) dialer_ne_pane_t3_ParamLimits

0x9854,	// (0x000540d9) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0005a066) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0005a066) dialer_ne_pane_t

0x9878,	// (0x000540fd) dialer_ne_pane_t3_copy1_ParamLimits

0x9878,	// (0x000540fd) dialer_ne_pane_t3_copy1

0x989c,	// (0x00054121) cell_dialer_keypad_pane_ParamLimits

0x989c,	// (0x00054121) cell_dialer_keypad_pane

0x98b3,	// (0x00054138) cell_dialer_command_1_pane_ParamLimits

0x98b3,	// (0x00054138) cell_dialer_command_1_pane

0x98c9,	// (0x0005414e) cell_dialer_command_2_pane_ParamLimits

0x98c9,	// (0x0005414e) cell_dialer_command_2_pane

0xed9d,	// (0x00059622) bg_button_pane_cp02_ParamLimits

0xed9d,	// (0x00059622) bg_button_pane_cp02

0x98d8,	// (0x0005415d) cell_dialer_keypad_pane_g1_ParamLimits

0x98d8,	// (0x0005415d) cell_dialer_keypad_pane_g1

0xed9d,	// (0x00059622) bg_button_pane_cp03_ParamLimits

0xed9d,	// (0x00059622) bg_button_pane_cp03

0x98ed,	// (0x00054172) cell_dialer_command_1_pane_g1_ParamLimits

0x98ed,	// (0x00054172) cell_dialer_command_1_pane_g1

0xeda9,	// (0x0005962e) bg_button_pane_cp04

0x9901,	// (0x00054186) cell_dialer_command_2_pane_g1

0x40b3,	// (0x0004e938) bg_button_pane_cp06

0xedb1,	// (0x00059636) dialer_ne_clear_pane_g1

0x7894,	// (0x00052119) navi_pane_g2

0x78c2,	// (0x00052147) navi_pane_g3

0x0002,

0xf409,	// (0x00059c8e) navi_pane_g

0x78ed,	// (0x00052172) navi_pane_mv_g2

0x7914,	// (0x00052199) navi_pane_mv_g5

0x791c,	// (0x000521a1) navi_pane_mv_t1

0x35d4,	// (0x0004de59) main_clock2_pane

0x9930,	// (0x000541b5) main_clock2_list_pane_ParamLimits

0x9930,	// (0x000541b5) main_clock2_list_pane

0x9958,	// (0x000541dd) main_clock2_pane_t1_ParamLimits

0x9958,	// (0x000541dd) main_clock2_pane_t1

0x9986,	// (0x0005420b) main_clock2_pane_t2_ParamLimits

0x9986,	// (0x0005420b) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0005a06d) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0005a06d) main_clock2_pane_t

0x99ed,	// (0x00054272) popup_clock_analogue_window_cp03_ParamLimits

0x99ed,	// (0x00054272) popup_clock_analogue_window_cp03

0x9a0b,	// (0x00054290) popup_clock_digital_window_cp02_ParamLimits

0x9a0b,	// (0x00054290) popup_clock_digital_window_cp02

0x9a78,	// (0x000542fd) main_clock2_list_single_pane_ParamLimits

0x9a78,	// (0x000542fd) main_clock2_list_single_pane

0x40b3,	// (0x0004e938) list_highlight_pane_cp05

0xedb9,	// (0x0005963e) main_clock2_list_single_pane_t1

0x668e,	// (0x00050f13) popup_toolbar_window_cp04_ParamLimits

0x9043,	// (0x000538c8) camera2_autofocus_pane_g2_ParamLimits

0x9043,	// (0x000538c8) camera2_autofocus_pane_g2

0x904f,	// (0x000538d4) camera2_autofocus_pane_g3_ParamLimits

0x904f,	// (0x000538d4) camera2_autofocus_pane_g3

0x905b,	// (0x000538e0) camera2_autofocus_pane_g4_ParamLimits

0x905b,	// (0x000538e0) camera2_autofocus_pane_g4

0x9067,	// (0x000538ec) camera2_autofocus_pane_g5_ParamLimits

0x9067,	// (0x000538ec) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x00059fb6) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x00059fb6) camera2_autofocus_pane_g

0x9219,	// (0x00053a9e) camera2_autofocus_pane_cp_g2

0x9221,	// (0x00053aa6) camera2_autofocus_pane_cp_g3

0x9229,	// (0x00053aae) camera2_autofocus_pane_cp_g4

0x9231,	// (0x00053ab6) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0005a01c) camera2_autofocus_pane_cp_g

0x9817,	// (0x0005409c) popup_dialer_spcha_window

0x0462,	// (0x0004ace7) bg_popup_sub_pane_cp07

0xedc7,	// (0x0005964c) list_spcha_pane

0xedcf,	// (0x00059654) list_single_spcha_pane_ParamLimits

0xedcf,	// (0x00059654) list_single_spcha_pane

0x0462,	// (0x0004ace7) list_highlight_pane_cp06

0xede0,	// (0x00059665) list_single_spcha_pane_t1

0xdfca,	// (0x0005884f) popup_call2_audio_out_window_g4_ParamLimits

0xdfca,	// (0x0005884f) popup_call2_audio_out_window_g4

0x0462,	// (0x0004ace7) main_imed2_pane

0xe5a9,	// (0x00058e2e) popup_imed_adjust2_window

0x8711,	// (0x00052f96) popup_imed_trans_window_ParamLimits

0x8711,	// (0x00052f96) popup_imed_trans_window

0xe806,	// (0x0005908b) popup_blid_sat_info2_window_t1

0xe814,	// (0x00059099) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x00059f4b) popup_blid_sat_info2_window_t

0x9b22,	// (0x000543a7) aid_size_cell_colour_35

0x9b3c,	// (0x000543c1) aid_size_cell_colour_112

0x9b53,	// (0x000543d8) aid_size_cell_effect

0x4781,	// (0x0004f006) bg_tb_trans_pane_cp02

0x478f,	// (0x0004f014) heading_imed_pane

0x9b6d,	// (0x000543f2) listscroll_imed_pane

0xedee,	// (0x00059673) heading_imed_pane_g1

0xedf6,	// (0x0005967b) heading_imed_pane_t1

0xee04,	// (0x00059689) grid_imed_colour_35_pane_ParamLimits

0xee04,	// (0x00059689) grid_imed_colour_35_pane

0x9b79,	// (0x000543fe) grid_imed_effect_pane

0xee1b,	// (0x000596a0) list_imed_aspect_pane

0x9b89,	// (0x0005440e) scroll_pane_cp027_ParamLimits

0x9b89,	// (0x0005440e) scroll_pane_cp027

0x9b95,	// (0x0005441a) cell_imed_effect_pane_ParamLimits

0x9b95,	// (0x0005441a) cell_imed_effect_pane

0xee23,	// (0x000596a8) cell_imed_colour_pane_ParamLimits

0xee23,	// (0x000596a8) cell_imed_colour_pane

0xee65,	// (0x000596ea) cell_imed_colour_pane_g1_ParamLimits

0xee65,	// (0x000596ea) cell_imed_colour_pane_g1

0xee76,	// (0x000596fb) hgihlgiht_grid_pane_cp016_ParamLimits

0xee76,	// (0x000596fb) hgihlgiht_grid_pane_cp016

0x9bad,	// (0x00054432) cell_imed_effect_pane_g1

0x9bb5,	// (0x0005443a) grid_highlight_pane_cp017

0xee87,	// (0x0005970c) list_imed_single_pane_ParamLimits

0xee87,	// (0x0005970c) list_imed_single_pane

0x0462,	// (0x0004ace7) list_highlight_pane_cp07

0xee9c,	// (0x00059721) list_imed_aspect_pane_comp1_t1

0xe581,	// (0x00058e06) bg_tb_trans_pane_cp05

0xeebe,	// (0x00059743) popup_imed_adjust2_window_g1

0xeee5,	// (0x0005976a) popup_imed_adjust2_window_t1

0xeefd,	// (0x00059782) slider_imed_adjust_pane

0xef11,	// (0x00059796) slider_imed_adjust_pane_g1

0xef21,	// (0x000597a6) slider_imed_adjust_pane_g2

0xef31,	// (0x000597b6) slider_imed_adjust_pane_g3

0xef42,	// (0x000597c7) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0005a08a) slider_imed_adjust_pane_g

0x9bbe,	// (0x00054443) aid_size_cell_clipart2

0x9bca,	// (0x0005444f) grid_imed_clipart_pane

0xef53,	// (0x000597d8) scroll_pane_cp031

0x9bd4,	// (0x00054459) cell_imed_clipart_pane_ParamLimits

0x9bd4,	// (0x00054459) cell_imed_clipart_pane

0x9bf6,	// (0x0005447b) cell_imed_clipart_pane_g1

0x0462,	// (0x0004ace7) grid_highlight_pane_cp014

0x993c,	// (0x000541c1) main_clock2_pane_g1_ParamLimits

0x993c,	// (0x000541c1) main_clock2_pane_g1

0x9a23,	// (0x000542a8) aid_call2_pane_cp10

0x9a35,	// (0x000542ba) aid_call_pane_cp10

0x3fe8,	// (0x0004e86d) popup_clock_analogue_window_cp10_g1

0x3fe8,	// (0x0004e86d) popup_clock_analogue_window_cp10_g2

0x9a47,	// (0x000542cc) popup_clock_analogue_window_cp10_g3

0x9a47,	// (0x000542cc) popup_clock_analogue_window_cp10_g4

0x3fe8,	// (0x0004e86d) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0005a078) popup_clock_analogue_window_cp10_g

0x9a59,	// (0x000542de) popup_clock_analogue_window_cp10_t1

0x9a8a,	// (0x0005430f) clock_digital_number_pane_cp10_ParamLimits

0x9a8a,	// (0x0005430f) clock_digital_number_pane_cp10

0x9aa2,	// (0x00054327) clock_digital_number_pane_cp11_ParamLimits

0x9aa2,	// (0x00054327) clock_digital_number_pane_cp11

0x9aba,	// (0x0005433f) clock_digital_number_pane_cp12_ParamLimits

0x9aba,	// (0x0005433f) clock_digital_number_pane_cp12

0x9ad2,	// (0x00054357) clock_digital_number_pane_cp13_ParamLimits

0x9ad2,	// (0x00054357) clock_digital_number_pane_cp13

0x9aea,	// (0x0005436f) clock_digital_separator_pane_cp10_ParamLimits

0x9aea,	// (0x0005436f) clock_digital_separator_pane_cp10

0x9b02,	// (0x00054387) popup_clock_digital_window_cp02_t1_ParamLimits

0x9b02,	// (0x00054387) popup_clock_digital_window_cp02_t1

0x34f5,	// (0x0004dd7a) clock_digital_number_pane_cp10_g1

0x34f5,	// (0x0004dd7a) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0005a093) clock_digital_number_pane_cp10_g

0x34f5,	// (0x0004dd7a) clock_digital_separator_pane_cp10_g1

0x34f5,	// (0x0004dd7a) clock_digital_separator_pane_g2_cp10

0x4083,	// (0x0004e908) navi_pane_vded_g4

0x408c,	// (0x0004e911) navi_pane_vded_g5

0x4095,	// (0x0004e91a) navi_pane_vded_t1

0x0462,	// (0x0004ace7) main_vded_pane

0x9bff,	// (0x00054484) main_vded_pane_g1

0x9c0b,	// (0x00054490) main_vded_pane_g2

0x9c15,	// (0x0005449a) main_vded_pane_g3

0x0002,

0xf813,	// (0x0005a098) main_vded_pane_g

0x9c1f,	// (0x000544a4) main_vded_pane_t1

0x9c2d,	// (0x000544b2) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0005a09f) main_vded_pane_t

0x9c3b,	// (0x000544c0) vded_slider_pane

0x9c45,	// (0x000544ca) vded_video_pane

0xef5b,	// (0x000597e0) vded_video_pane_g1

0x9c4f,	// (0x000544d4) vded_video_pane_g2

0xe9c8,	// (0x0005924d) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0005a0a4) vded_video_pane_g

0xef65,	// (0x000597ea) vded_slider_pane_g1

0xe71b,	// (0x00058fa0) vded_slider_pane_g2

0xef6e,	// (0x000597f3) vded_slider_pane_g3

0xef77,	// (0x000597fc) vded_slider_pane_g4

0xef80,	// (0x00059805) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0005a0ab) vded_slider_pane_g

0x972c,	// (0x00053fb1) mup3_rocker_pane_ParamLimits

0x972c,	// (0x00053fb1) mup3_rocker_pane

0x9c58,	// (0x000544dd) mup3_control_keys_pane_g1

0x9c60,	// (0x000544e5) mup3_control_keys_pane_g2

0x9c68,	// (0x000544ed) mup3_control_keys_pane_g3

0x9c70,	// (0x000544f5) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0005a0b6) mup3_control_keys_pane_g

0x5829,	// (0x000500ae) popup_toolbar2_fixed_window_cp01_ParamLimits

0x5829,	// (0x000500ae) popup_toolbar2_fixed_window_cp01

0x9746,	// (0x00053fcb) popup_toolbar2_fixed_window_cp02_ParamLimits

0x9746,	// (0x00053fcb) popup_toolbar2_fixed_window_cp02

0xd909,	// (0x0005818e) popup_call2_audio_second_window_t4_ParamLimits

0xd909,	// (0x0005818e) popup_call2_audio_second_window_t4

0xde37,	// (0x000586bc) popup_call2_audio_first_window_t6_ParamLimits

0xde37,	// (0x000586bc) popup_call2_audio_first_window_t6

0xe0cd,	// (0x00058952) popup_call2_audio_out_window_t6_ParamLimits

0xe0cd,	// (0x00058952) popup_call2_audio_out_window_t6

0x0462,	// (0x0004ace7) main_vitu_pane

0x9c80,	// (0x00054505) aid_size_cell_itu_ParamLimits

0x9c80,	// (0x00054505) aid_size_cell_itu

0x0edb,	// (0x0004b760) bg_popup_window_pane_cp08_ParamLimits

0x0edb,	// (0x0004b760) bg_popup_window_pane_cp08

0x9c8e,	// (0x00054513) field_vitu_entry_pane_ParamLimits

0x9c8e,	// (0x00054513) field_vitu_entry_pane

0x9c9d,	// (0x00054522) grid_vitu_function_pane_ParamLimits

0x9c9d,	// (0x00054522) grid_vitu_function_pane

0x9cad,	// (0x00054532) grid_vitu_itu_pane_ParamLimits

0x9cad,	// (0x00054532) grid_vitu_itu_pane

0x9cbd,	// (0x00054542) cell_vitu_itu_pane_ParamLimits

0x9cbd,	// (0x00054542) cell_vitu_itu_pane

0x9cd2,	// (0x00054557) cell_vitu_function_pane_ParamLimits

0x9cd2,	// (0x00054557) cell_vitu_function_pane

0x4781,	// (0x0004f006) bg_popup_sub_pane_cp08_ParamLimits

0x4781,	// (0x0004f006) bg_popup_sub_pane_cp08

0x9ce4,	// (0x00054569) field_vitu_entry_pane_t1_ParamLimits

0x9ce4,	// (0x00054569) field_vitu_entry_pane_t1

0xefa1,	// (0x00059826) field_vitu_entry_pane_t2_ParamLimits

0xefa1,	// (0x00059826) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0005a0c4) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0005a0c4) field_vitu_entry_pane_t

0xefbe,	// (0x00059843) bg_button_pane_cp05_ParamLimits

0xefbe,	// (0x00059843) bg_button_pane_cp05

0x9cff,	// (0x00054584) cell_vitu_itu_pane_g1

0x9d17,	// (0x0005459c) cell_vitu_itu_pane_t1_ParamLimits

0x9d17,	// (0x0005459c) cell_vitu_itu_pane_t1

0x9d29,	// (0x000545ae) cell_vitu_itu_pane_t2_ParamLimits

0x9d29,	// (0x000545ae) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0005a0c9) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0005a0c9) cell_vitu_itu_pane_t

0xefcc,	// (0x00059851) bg_button_pane_cp07

0x9d5e,	// (0x000545e3) cell_vitu_function_pane_g1

0x5ac2,	// (0x00050347) main_calc_pane_g1

0x5632,	// (0x0004feb7) aid_visual_content_pane

0x0462,	// (0x0004ace7) main_vradio_pane

0x9d67,	// (0x000545ec) main_vradio_pane_g1_ParamLimits

0x9d67,	// (0x000545ec) main_vradio_pane_g1

0xefd6,	// (0x0005985b) main_vradio_pane_g2_ParamLimits

0xefd6,	// (0x0005985b) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0005a0d0) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0005a0d0) main_vradio_pane_g

0x9d77,	// (0x000545fc) main_vradio_pane_t1_ParamLimits

0x9d77,	// (0x000545fc) main_vradio_pane_t1

0x9d89,	// (0x0005460e) main_vradio_pane_t2_ParamLimits

0x9d89,	// (0x0005460e) main_vradio_pane_t2

0xefe3,	// (0x00059868) main_vradio_pane_t3_ParamLimits

0xefe3,	// (0x00059868) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0005a0d5) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0005a0d5) main_vradio_pane_t

0x9d9b,	// (0x00054620) vradio_rocker_control_pane_ParamLimits

0x9d9b,	// (0x00054620) vradio_rocker_control_pane

0x9da7,	// (0x0005462c) vradio_station_info_pane_ParamLimits

0x9da7,	// (0x0005462c) vradio_station_info_pane

0xeff7,	// (0x0005987c) vradio_frequency_info_pane_ParamLimits

0xeff7,	// (0x0005987c) vradio_frequency_info_pane

0xe9c8,	// (0x0005924d) vradio_station_info_pane_g1

0xf006,	// (0x0005988b) vradio_station_info_pane_t1_ParamLimits

0xf006,	// (0x0005988b) vradio_station_info_pane_t1

0xf028,	// (0x000598ad) vradio_station_info_pane_t2_ParamLimits

0xf028,	// (0x000598ad) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0005a0dc) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0005a0dc) vradio_station_info_pane_t

0xf03a,	// (0x000598bf) vradio_tuning_pane

0xf042,	// (0x000598c7) vradio_rocker_control_pane_g1

0xf04a,	// (0x000598cf) vradio_rocker_control_pane_g2

0xf052,	// (0x000598d7) vradio_rocker_control_pane_g3

0xf05a,	// (0x000598df) vradio_rocker_control_pane_g4

0xf062,	// (0x000598e7) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0005a0e1) vradio_rocker_control_pane_g

0x9db6,	// (0x0005463b) vradio_frequency_info_pane_g1

0xf06a,	// (0x000598ef) vradio_frequency_info_pane_t1_ParamLimits

0xf06a,	// (0x000598ef) vradio_frequency_info_pane_t1

0x9dc0,	// (0x00054645) vradio_tuning_pane_g1

0x9dc9,	// (0x0005464e) vradio_tuning_pane_t1

0x0498,	// (0x0004ad1d) area_side_right_pane_ParamLimits

0x0498,	// (0x0004ad1d) area_side_right_pane

0xe548,	// (0x00058dcd) status_small_pane_g1

0xe550,	// (0x00058dd5) status_small_pane_g2

0xe559,	// (0x00058dde) status_small_pane_g3

0xe562,	// (0x00058de7) status_small_pane_g4

0x0003,

0xf61c,	// (0x00059ea1) status_small_pane_g

0xe56b,	// (0x00058df0) status_small_pane_t1

0x0462,	// (0x0004ace7) main_video3_pane

0xf07e,	// (0x00059903) cams_zoom_vslider_pane

0xf086,	// (0x0005990b) image3_wide_pane_ParamLimits

0xf086,	// (0x0005990b) image3_wide_pane

0xf0a0,	// (0x00059925) image3_wide_small_pane

0xf0ac,	// (0x00059931) main_video3_pane_g1_ParamLimits

0xf0ac,	// (0x00059931) main_video3_pane_g1

0xf0c8,	// (0x0005994d) main_video3_pane_g2_ParamLimits

0xf0c8,	// (0x0005994d) main_video3_pane_g2

0x0001,

0xf867,	// (0x0005a0ec) main_video3_pane_g_ParamLimits

0xf867,	// (0x0005a0ec) main_video3_pane_g

0x08ef,	// (0x0004b174) main_video3_pane_t1_ParamLimits

0x08ef,	// (0x0004b174) main_video3_pane_t1

0x091a,	// (0x0004b19f) main_video3_pane_t2_ParamLimits

0x091a,	// (0x0004b19f) main_video3_pane_t2

0x0945,	// (0x0004b1ca) main_video3_pane_t3_ParamLimits

0x0945,	// (0x0004b1ca) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0005a0f1) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0005a0f1) main_video3_pane_t

0x0972,	// (0x0004b1f7) cams_zoom_vslider_pane_g1

0x097b,	// (0x0004b200) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0005a0f8) cams_zoom_vslider_pane_g

0x0983,	// (0x0004b208) small_slider_vertical_pane

0xe9c8,	// (0x0005924d) small_slider_vertical_pane_g1

0xe9c8,	// (0x0005924d) small_slider_vertical_pane_g2

0x098b,	// (0x0004b210) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0005a0fd) small_slider_vertical_pane_g

0x0462,	// (0x0004ace7) main_hwr_training_pane

0x0994,	// (0x0004b219) hwr_training_instruct_pane_ParamLimits

0x0994,	// (0x0004b219) hwr_training_instruct_pane

0x9dd8,	// (0x0005465d) hwr_training_navi_pane_ParamLimits

0x9dd8,	// (0x0005465d) hwr_training_navi_pane

0x9df2,	// (0x00054677) hwr_training_write_pane_ParamLimits

0x9df2,	// (0x00054677) hwr_training_write_pane

0x0462,	// (0x0004ace7) bg_frame_shadow_pane

0x09cb,	// (0x0004b250) hwr_training_write_pane_g1

0x09d3,	// (0x0004b258) hwr_training_write_pane_g2

0x09db,	// (0x0004b260) hwr_training_write_pane_g3

0x09e3,	// (0x0004b268) hwr_training_write_pane_g4

0x09eb,	// (0x0004b270) hwr_training_write_pane_g5

0x09f3,	// (0x0004b278) hwr_training_write_pane_g6

0x09fb,	// (0x0004b280) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0005a104) hwr_training_write_pane_g

0x9e2a,	// (0x000546af) hwr_training_navi_pane_g1_ParamLimits

0x9e2a,	// (0x000546af) hwr_training_navi_pane_g1

0x9e3c,	// (0x000546c1) hwr_training_navi_pane_g2_ParamLimits

0x9e3c,	// (0x000546c1) hwr_training_navi_pane_g2

0x9e4e,	// (0x000546d3) hwr_training_navi_pane_g3_ParamLimits

0x9e4e,	// (0x000546d3) hwr_training_navi_pane_g3

0x9e5e,	// (0x000546e3) hwr_training_navi_pane_g4_ParamLimits

0x9e5e,	// (0x000546e3) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0005a113) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0005a113) hwr_training_navi_pane_g

0x9e78,	// (0x000546fd) hwr_training_navi_pane_t1

0x9e86,	// (0x0005470b) list_single_hwr_training_instruct_pane_ParamLimits

0x9e86,	// (0x0005470b) list_single_hwr_training_instruct_pane

0x0a52,	// (0x0004b2d7) list_single_hwr_training_instruct_pane_t1

0xe908,	// (0x0005918d) bg_frame_shadow_pane_g1

0x0a61,	// (0x0004b2e6) bg_frame_shadow_pane_g2

0x0a69,	// (0x0004b2ee) bg_frame_shadow_pane_g3

0x0a71,	// (0x0004b2f6) bg_frame_shadow_pane_g4

0x0a79,	// (0x0004b2fe) bg_frame_shadow_pane_g5

0x0a81,	// (0x0004b306) bg_frame_shadow_pane_g6

0x0a89,	// (0x0004b30e) bg_frame_shadow_pane_g7

0x368d,	// (0x0004df12) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0005a11e) bg_frame_shadow_pane_g

0x0462,	// (0x0004ace7) main_video_tele_dialer_pane

0x9eab,	// (0x00054730) aid_size_cell_video_keypad_ParamLimits

0x9eab,	// (0x00054730) aid_size_cell_video_keypad

0x9ebb,	// (0x00054740) grid_video_dialer_keypad_pane_ParamLimits

0x9ebb,	// (0x00054740) grid_video_dialer_keypad_pane

0x9eed,	// (0x00054772) video_down_pane_cp_ParamLimits

0x9eed,	// (0x00054772) video_down_pane_cp

0x9ef9,	// (0x0005477e) cell_video_dialer_keypad_pane_ParamLimits

0x9ef9,	// (0x0005477e) cell_video_dialer_keypad_pane

0x0aad,	// (0x0004b332) bg_button_pane_cp08_ParamLimits

0x0aad,	// (0x0004b332) bg_button_pane_cp08

0x9f0e,	// (0x00054793) cell_video_dialer_keypad_pane_g1_ParamLimits

0x9f0e,	// (0x00054793) cell_video_dialer_keypad_pane_g1

0x9720,	// (0x00053fa5) mup3_rocker2_pane_ParamLimits

0x9720,	// (0x00053fa5) mup3_rocker2_pane

0xe9c8,	// (0x0005924d) mup3_rocker2_pane_g1

0x869b,	// (0x00052f20) main_dialer2_pane

0x0462,	// (0x0004ace7) main_mp4_pane

0x9f50,	// (0x000547d5) main_mp4_pane_g1_ParamLimits

0x9f50,	// (0x000547d5) main_mp4_pane_g1

0x9f5e,	// (0x000547e3) main_mp4_pane_g2_ParamLimits

0x9f5e,	// (0x000547e3) main_mp4_pane_g2

0x9f6c,	// (0x000547f1) main_mp4_pane_g3_ParamLimits

0x9f6c,	// (0x000547f1) main_mp4_pane_g3

0x9fb1,	// (0x00054836) main_mp4_pane_g4_ParamLimits

0x9fb1,	// (0x00054836) main_mp4_pane_g4

0x9fd9,	// (0x0005485e) main_mp4_pane_g5_ParamLimits

0x9fd9,	// (0x0005485e) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0005a13e) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0005a13e) main_mp4_pane_g

0xa029,	// (0x000548ae) main_mp4_pane_t1_ParamLimits

0xa029,	// (0x000548ae) main_mp4_pane_t1

0xa085,	// (0x0005490a) main_mp4_pane_t2_ParamLimits

0xa085,	// (0x0005490a) main_mp4_pane_t2

0x0bf5,	// (0x0004b47a) main_mp4_pane_t3_ParamLimits

0x0bf5,	// (0x0004b47a) main_mp4_pane_t3

0xa0d7,	// (0x0005495c) main_mp4_pane_t4_ParamLimits

0xa0d7,	// (0x0005495c) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0005a14b) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0005a14b) main_mp4_pane_t

0xa11b,	// (0x000549a0) mp4_progress_pane_ParamLimits

0xa11b,	// (0x000549a0) mp4_progress_pane

0xa165,	// (0x000549ea) mp4_rocker_pane_ParamLimits

0xa165,	// (0x000549ea) mp4_rocker_pane

0x0ccb,	// (0x0004b550) mp4_progress_pane_t1

0x0ce4,	// (0x0004b569) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0005a154) mp4_progress_pane_t

0x0cfd,	// (0x0004b582) mup_progress_pane_cp04

0x16a1,	// (0x0004bf26) mp4_rocker_pane_g1

0xa185,	// (0x00054a0a) aid_cell_size_keypad2_ParamLimits

0xa185,	// (0x00054a0a) aid_cell_size_keypad2

0xa195,	// (0x00054a1a) dialer2_ne_pane_ParamLimits

0xa195,	// (0x00054a1a) dialer2_ne_pane

0xa1a3,	// (0x00054a28) grid_dialer2_keypad_pane_ParamLimits

0xa1a3,	// (0x00054a28) grid_dialer2_keypad_pane

0x16fc,	// (0x0004bf81) bg_popup_call_pane_cp07_ParamLimits

0x16fc,	// (0x0004bf81) bg_popup_call_pane_cp07

0xa1b3,	// (0x00054a38) dialer2_ne_pane_t1_ParamLimits

0xa1b3,	// (0x00054a38) dialer2_ne_pane_t1

0xa1d8,	// (0x00054a5d) cell_dialer2_keypad_pane_ParamLimits

0xa1d8,	// (0x00054a5d) cell_dialer2_keypad_pane

0x0d1b,	// (0x0004b5a0) bg_button_pane_pane_cp04_ParamLimits

0x0d1b,	// (0x0004b5a0) bg_button_pane_pane_cp04

0xa1ed,	// (0x00054a72) cell_dialer2_keypad_pane_g1_ParamLimits

0xa1ed,	// (0x00054a72) cell_dialer2_keypad_pane_g1

0x6552,	// (0x00050dd7) aid_placing_vt_set_content_ParamLimits

0x6552,	// (0x00050dd7) aid_placing_vt_set_content

0x657c,	// (0x00050e01) aid_placing_vt_set_title_ParamLimits

0x657c,	// (0x00050e01) aid_placing_vt_set_title

0x0462,	// (0x0004ace7) main_image3_pane

0xa287,	// (0x00054b0c) area_side_right_pane_cp01_ParamLimits

0xa287,	// (0x00054b0c) area_side_right_pane_cp01

0xa2b4,	// (0x00054b39) main_image3_pane_g1_ParamLimits

0xa2b4,	// (0x00054b39) main_image3_pane_g1

0xa2c2,	// (0x00054b47) main_image3_pane_g2_ParamLimits

0xa2c2,	// (0x00054b47) main_image3_pane_g2

0xa2db,	// (0x00054b60) main_image3_pane_g3_ParamLimits

0xa2db,	// (0x00054b60) main_image3_pane_g3

0xa2f4,	// (0x00054b79) main_image3_pane_g4_ParamLimits

0xa2f4,	// (0x00054b79) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0005a163) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0005a163) main_image3_pane_g

0xa30d,	// (0x00054b92) main_image3_pane_t1_ParamLimits

0xa30d,	// (0x00054b92) main_image3_pane_t1

0xa332,	// (0x00054bb7) main_image3_pane_t2_ParamLimits

0xa332,	// (0x00054bb7) main_image3_pane_t2

0xa351,	// (0x00054bd6) main_image3_pane_t3_ParamLimits

0xa351,	// (0x00054bd6) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0005a16c) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0005a16c) main_image3_pane_t

0x0edb,	// (0x0004b760) grid_sctrl_middle_pane_cp01_ParamLimits

0x0edb,	// (0x0004b760) grid_sctrl_middle_pane_cp01

0xa3b2,	// (0x00054c37) cell_sctrl_middle_pane_cp01_ParamLimits

0xa3b2,	// (0x00054c37) cell_sctrl_middle_pane_cp01

0xa3c3,	// (0x00054c48) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xa3c3,	// (0x00054c48) cell_sctrl_middle_pane_cp01_g1

0x0462,	// (0x0004ace7) main_call4_pane

0xa3d0,	// (0x00054c55) aid_size_button_call4_ParamLimits

0xa3d0,	// (0x00054c55) aid_size_button_call4

0xa400,	// (0x00054c85) call4_windows_pane_ParamLimits

0xa400,	// (0x00054c85) call4_windows_pane

0xa41a,	// (0x00054c9f) grid_call4_button_pane_ParamLimits

0xa41a,	// (0x00054c9f) grid_call4_button_pane

0x0d59,	// (0x0004b5de) call4_windows_conf_pane

0x0d70,	// (0x0004b5f5) popup_call4_audio_first_window_ParamLimits

0x0d70,	// (0x0004b5f5) popup_call4_audio_first_window

0x0dbc,	// (0x0004b641) popup_call4_audio_second_window_ParamLimits

0x0dbc,	// (0x0004b641) popup_call4_audio_second_window

0x0dd0,	// (0x0004b655) popup_call4_audio_wait_window_ParamLimits

0x0dd0,	// (0x0004b655) popup_call4_audio_wait_window

0xa43e,	// (0x00054cc3) cell_call4_button_pane_ParamLimits

0xa43e,	// (0x00054cc3) cell_call4_button_pane

0xa463,	// (0x00054ce8) bg_button_pane_cp09_ParamLimits

0xa463,	// (0x00054ce8) bg_button_pane_cp09

0xa46f,	// (0x00054cf4) cell_call4_button_pane_g1_ParamLimits

0xa46f,	// (0x00054cf4) cell_call4_button_pane_g1

0xa47c,	// (0x00054d01) cell_call4_button_pane_t1_ParamLimits

0xa47c,	// (0x00054d01) cell_call4_button_pane_t1

0x0e18,	// (0x0004b69d) popup_call4_audio_conf_window_ParamLimits

0x0e18,	// (0x0004b69d) popup_call4_audio_conf_window

0x9753,	// (0x00053fd8) mup3_progress_pane_t1_ParamLimits

0x976a,	// (0x00053fef) mup3_progress_pane_t2_ParamLimits

0xeca6,	// (0x0005952b) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0005a045) mup3_progress_pane_t_ParamLimits

0xecbd,	// (0x00059542) mup_progress_pane_cp03_ParamLimits

0x9c78,	// (0x000544fd) mup3_control_keys_pane_g4_copy1

0xa149,	// (0x000549ce) mp4_rocker2_pane_ParamLimits

0xa149,	// (0x000549ce) mp4_rocker2_pane

0x0e34,	// (0x0004b6b9) mp4_rocker2_pane_g1

0x0e2c,	// (0x0004b6b1) mp4_rocker2_pane_g2

0xa48e,	// (0x00054d13) mp4_rocker2_pane_g3

0xa496,	// (0x00054d1b) mp4_rocker2_pane_g4

0xa49e,	// (0x00054d23) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0005a175) mp4_rocker2_pane_g

0x0462,	// (0x0004ace7) main_camera4_pane

0x0462,	// (0x0004ace7) main_video4_pane

0x9ec9,	// (0x0005474e) main_video_tele_dialer_pane_t1_ParamLimits

0x9ec9,	// (0x0005474e) main_video_tele_dialer_pane_t1

0x9edb,	// (0x00054760) main_video_tele_dialer_pane_t2_ParamLimits

0x9edb,	// (0x00054760) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0005a12f) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0005a12f) main_video_tele_dialer_pane_t

0xa4be,	// (0x00054d43) cam4_autofocus_pane_ParamLimits

0xa4be,	// (0x00054d43) cam4_autofocus_pane

0xa4d8,	// (0x00054d5d) cam4_image_uncrop_pane_ParamLimits

0xa4d8,	// (0x00054d5d) cam4_image_uncrop_pane

0xa4ef,	// (0x00054d74) cam4_indicators_pane_ParamLimits

0xa4ef,	// (0x00054d74) cam4_indicators_pane

0xa50b,	// (0x00054d90) main_camera4_pane_g1_ParamLimits

0xa50b,	// (0x00054d90) main_camera4_pane_g1

0xa517,	// (0x00054d9c) main_camera4_pane_g2_ParamLimits

0xa517,	// (0x00054d9c) main_camera4_pane_g2

0xa517,	// (0x00054d9c) main_camera4_pane_g3_ParamLimits

0xa517,	// (0x00054d9c) main_camera4_pane_g3

0xa523,	// (0x00054da8) main_camera4_pane_g4_ParamLimits

0xa523,	// (0x00054da8) main_camera4_pane_g4

0xa52f,	// (0x00054db4) main_camera4_pane_g5_ParamLimits

0xa52f,	// (0x00054db4) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0005a180) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0005a180) main_camera4_pane_g

0xa549,	// (0x00054dce) main_camera4_pane_t1_ParamLimits

0xa549,	// (0x00054dce) main_camera4_pane_t1

0xa591,	// (0x00054e16) bg_tb_trans_pane_cp06

0xa5a7,	// (0x00054e2c) cam4_indicators_pane_g1

0xa5b8,	// (0x00054e3d) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0005a19b) cam4_indicators_pane_g

0xa5d6,	// (0x00054e5b) cam4_indicators_pane_t1

0xa600,	// (0x00054e85) main_video4_pane_g1_ParamLimits

0xa600,	// (0x00054e85) main_video4_pane_g1

0xa60c,	// (0x00054e91) main_video4_pane_g2_ParamLimits

0xa60c,	// (0x00054e91) main_video4_pane_g2

0xa618,	// (0x00054e9d) main_video4_pane_g3_ParamLimits

0xa618,	// (0x00054e9d) main_video4_pane_g3

0xa624,	// (0x00054ea9) main_video4_pane_g4_ParamLimits

0xa624,	// (0x00054ea9) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0005a1a2) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0005a1a2) main_video4_pane_g

0xa644,	// (0x00054ec9) vid4_indicators_pane_ParamLimits

0xa644,	// (0x00054ec9) vid4_indicators_pane

0xa662,	// (0x00054ee7) video4_image_uncrop_cif_pane_ParamLimits

0xa662,	// (0x00054ee7) video4_image_uncrop_cif_pane

0xa671,	// (0x00054ef6) video4_image_uncrop_nhd_pane_ParamLimits

0xa671,	// (0x00054ef6) video4_image_uncrop_nhd_pane

0xa4d8,	// (0x00054d5d) video4_image_uncrop_vga_pane_ParamLimits

0xa4d8,	// (0x00054d5d) video4_image_uncrop_vga_pane

0xa67e,	// (0x00054f03) bg_tb_trans_pane_cp07

0xa696,	// (0x00054f1b) vid4_indicators_pane_g1

0xa6a7,	// (0x00054f2c) vid4_indicators_pane_g2

0xa6b8,	// (0x00054f3d) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0005a1ad) vid4_indicators_pane_g

0xa6e5,	// (0x00054f6a) vid4_indicators_pane_t1

0xa6fe,	// (0x00054f83) cam4_autofocus_pane_g1

0xa706,	// (0x00054f8b) cam4_autofocus_pane_g2

0xa70e,	// (0x00054f93) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0005a1b8) cam4_autofocus_pane_g

0xa716,	// (0x00054f9b) cam4_autofocus_pane_g3_copy1

0x0a91,	// (0x0004b316) video_down_pane_cp_t1

0x0a9f,	// (0x0004b324) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0005a134) video_down_pane_cp_t

0x0edb,	// (0x0004b760) popup_vitu2_window_ParamLimits

0x0edb,	// (0x0004b760) popup_vitu2_window

0xa71e,	// (0x00054fa3) aid_size_cell2_itu2_ParamLimits

0xa71e,	// (0x00054fa3) aid_size_cell2_itu2

0xa740,	// (0x00054fc5) aid_size_cell_itu2_ParamLimits

0xa740,	// (0x00054fc5) aid_size_cell_itu2

0xa784,	// (0x00055009) bg_popup_window_pane_cp09_ParamLimits

0xa784,	// (0x00055009) bg_popup_window_pane_cp09

0xa792,	// (0x00055017) field_vitu2_entry_pane_ParamLimits

0xa792,	// (0x00055017) field_vitu2_entry_pane

0xa7b2,	// (0x00055037) grid_vitu2_function_pane_ParamLimits

0xa7b2,	// (0x00055037) grid_vitu2_function_pane

0xa7f6,	// (0x0005507b) grid_vitu2_itu_pane_ParamLimits

0xa7f6,	// (0x0005507b) grid_vitu2_itu_pane

0xa86e,	// (0x000550f3) cell_vitu2_itu_pane_ParamLimits

0xa86e,	// (0x000550f3) cell_vitu2_itu_pane

0xa883,	// (0x00055108) cell_vitu2_function_pane_ParamLimits

0xa883,	// (0x00055108) cell_vitu2_function_pane

0x0ef3,	// (0x0004b778) bg_popup_call_pane_cp08_ParamLimits

0x0ef3,	// (0x0004b778) bg_popup_call_pane_cp08

0x0f0c,	// (0x0004b791) field_vitu2_entry_pane_g1

0x0f18,	// (0x0004b79d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0005a1bf) field_vitu2_entry_pane_g

0xa8c2,	// (0x00055147) field_vitu2_entry_pane_t1_ParamLimits

0xa8c2,	// (0x00055147) field_vitu2_entry_pane_t1

0x0f32,	// (0x0004b7b7) field_vitu2_entry_pane_t2_ParamLimits

0x0f32,	// (0x0004b7b7) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0005a1c6) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0005a1c6) field_vitu2_entry_pane_t

0xa8f2,	// (0x00055177) bg_button_pane_cp010_ParamLimits

0xa8f2,	// (0x00055177) bg_button_pane_cp010

0xa900,	// (0x00055185) cell_vitu2_itu_pane_g1

0xa91e,	// (0x000551a3) cell_vitu2_itu_pane_t1_ParamLimits

0xa91e,	// (0x000551a3) cell_vitu2_itu_pane_t1

0x5537,	// (0x0004fdbc) cell_vitu2_itu_pane_t2_ParamLimits

0x5537,	// (0x0004fdbc) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0005a1d0) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0005a1d0) cell_vitu2_itu_pane_t

0xa67e,	// (0x00054f03) bg_button_pane_cp011

0xa970,	// (0x000551f5) cell_vitu2_function_pane_g1

0x0462,	// (0x0004ace7) main_myfav_hc_pane

0xa393,	// (0x00054c18) popup_image3_note_pane_ParamLimits

0xa393,	// (0x00054c18) popup_image3_note_pane

0xa3a1,	// (0x00054c26) popup_image3_tool_bar_pane_ParamLimits

0xa3a1,	// (0x00054c26) popup_image3_tool_bar_pane

0x55a5,	// (0x0004fe2a) cell_vitu2_itu_pane_t3_ParamLimits

0x55a5,	// (0x0004fe2a) cell_vitu2_itu_pane_t3

0x0462,	// (0x0004ace7) bg_popup_trans_pane

0x0f57,	// (0x0004b7dc) grid_image3_tool_bar_pane

0x0f61,	// (0x0004b7e6) bg_popup_trans_pane_g1

0x39c8,	// (0x0004e24d) bg_popup_trans_pane_g2

0x0f69,	// (0x0004b7ee) bg_popup_trans_pane_g3

0x0f71,	// (0x0004b7f6) bg_popup_trans_pane_g4

0x0f79,	// (0x0004b7fe) bg_popup_trans_pane_g5

0x0f81,	// (0x0004b806) bg_popup_trans_pane_g6

0x0f89,	// (0x0004b80e) bg_popup_trans_pane_g7

0x0f91,	// (0x0004b816) bg_popup_trans_pane_g8

0x39a8,	// (0x0004e22d) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0005a1d7) bg_popup_trans_pane_g

0x0f99,	// (0x0004b81e) cell_image3_tool_bar_pane_ParamLimits

0x0f99,	// (0x0004b81e) cell_image3_tool_bar_pane

0xe9c8,	// (0x0005924d) cell_image3_tool_bar_pane_g1

0x0462,	// (0x0004ace7) bg_popup_trans_pane_cp1

0x0fad,	// (0x0004b832) popup_image3_note_pane_t1

0x0fbb,	// (0x0004b840) popup_image3_note_pane_t2

0x0fc9,	// (0x0004b84e) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0005a1ea) popup_image3_note_pane_t

0x0fd7,	// (0x0004b85c) popup_image3_note_pane_t3_copy1

0xa984,	// (0x00055209) bg_myfav_hc_instruction_pane_ParamLimits

0xa984,	// (0x00055209) bg_myfav_hc_instruction_pane

0xa99c,	// (0x00055221) cell_myfav_contact_pane_ParamLimits

0xa99c,	// (0x00055221) cell_myfav_contact_pane

0xa9b6,	// (0x0005523b) cell_myfav_contact_pane_cp1_ParamLimits

0xa9b6,	// (0x0005523b) cell_myfav_contact_pane_cp1

0xa9ce,	// (0x00055253) cell_myfav_contact_pane_cp2_ParamLimits

0xa9ce,	// (0x00055253) cell_myfav_contact_pane_cp2

0xa9e6,	// (0x0005526b) cell_myfav_contact_pane_cp3_ParamLimits

0xa9e6,	// (0x0005526b) cell_myfav_contact_pane_cp3

0xa9fd,	// (0x00055282) cell_myfav_contact_pane_cp4_ParamLimits

0xa9fd,	// (0x00055282) cell_myfav_contact_pane_cp4

0xaa13,	// (0x00055298) cell_myfav_contact_pane_cp5_ParamLimits

0xaa13,	// (0x00055298) cell_myfav_contact_pane_cp5

0xaa27,	// (0x000552ac) cell_myfav_contact_pane_cp6_ParamLimits

0xaa27,	// (0x000552ac) cell_myfav_contact_pane_cp6

0xaa3b,	// (0x000552c0) cell_myfav_contact_pane_cp7_ParamLimits

0xaa3b,	// (0x000552c0) cell_myfav_contact_pane_cp7

0x0fe5,	// (0x0004b86a) listscroll_gen_pane_cp05

0xaa53,	// (0x000552d8) main_myfav_hc_pane_g1_ParamLimits

0xaa53,	// (0x000552d8) main_myfav_hc_pane_g1

0xaa69,	// (0x000552ee) main_myfav_hc_pane_g2_ParamLimits

0xaa69,	// (0x000552ee) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0005a1f1) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0005a1f1) main_myfav_hc_pane_g

0xaa97,	// (0x0005531c) main_myfav_hc_pane_t1_ParamLimits

0xaa97,	// (0x0005531c) main_myfav_hc_pane_t1

0x0fee,	// (0x0004b873) main_myfav_hc_pane_t2_ParamLimits

0x0fee,	// (0x0004b873) main_myfav_hc_pane_t2

0x1000,	// (0x0004b885) main_myfav_hc_pane_t3_ParamLimits

0x1000,	// (0x0004b885) main_myfav_hc_pane_t3

0xaaae,	// (0x00055333) main_myfav_hc_pane_t4_ParamLimits

0xaaae,	// (0x00055333) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0005a1f8) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0005a1f8) main_myfav_hc_pane_t

0xe9c8,	// (0x0005924d) bg_myfav_hc_instruction_pane_g1

0x1012,	// (0x0004b897) cell_myfav_contact_pane_g1_ParamLimits

0x1012,	// (0x0004b897) cell_myfav_contact_pane_g1

0x1012,	// (0x0004b897) cell_myfav_contact_pane_g2_ParamLimits

0x1012,	// (0x0004b897) cell_myfav_contact_pane_g2

0x101e,	// (0x0004b8a3) cell_myfav_contact_pane_g3_ParamLimits

0x101e,	// (0x0004b8a3) cell_myfav_contact_pane_g3

0xec90,	// (0x00059515) cell_myfav_contact_pane_g4_ParamLimits

0xec90,	// (0x00059515) cell_myfav_contact_pane_g4

0x102b,	// (0x0004b8b0) cell_myfav_contact_pane_g5_ParamLimits

0x102b,	// (0x0004b8b0) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0005a203) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0005a203) cell_myfav_contact_pane_g

0xaa7f,	// (0x00055304) main_myfav_hc_pane_g3_ParamLimits

0xaa7f,	// (0x00055304) main_myfav_hc_pane_g3

0x576e,	// (0x0004fff3) popup_adpt_find_window

0xaad8,	// (0x0005535d) afind_page_pane_ParamLimits

0xaad8,	// (0x0005535d) afind_page_pane

0xaae5,	// (0x0005536a) aid_size_cell_afind_ParamLimits

0xaae5,	// (0x0005536a) aid_size_cell_afind

0xaaff,	// (0x00055384) bg_popup_sub_pane_cp09_ParamLimits

0xaaff,	// (0x00055384) bg_popup_sub_pane_cp09

0xab0c,	// (0x00055391) find_pane_cp01_ParamLimits

0xab0c,	// (0x00055391) find_pane_cp01

0x1037,	// (0x0004b8bc) grid_afind_control_pane_ParamLimits

0x1037,	// (0x0004b8bc) grid_afind_control_pane

0xab19,	// (0x0005539e) grid_afind_pane_ParamLimits

0xab19,	// (0x0005539e) grid_afind_pane

0xab35,	// (0x000553ba) cell_afind_pane_ParamLimits

0xab35,	// (0x000553ba) cell_afind_pane

0xe9c8,	// (0x0005924d) afind_page_pane_g1

0xab7d,	// (0x00055402) afind_page_pane_g2

0xab86,	// (0x0005540b) afind_page_pane_g3

0x0002,

0xf989,	// (0x0005a20e) afind_page_pane_g

0xab8f,	// (0x00055414) afind_page_pane_t1

0x104b,	// (0x0004b8d0) cell_afind_grid_control_pane_ParamLimits

0x104b,	// (0x0004b8d0) cell_afind_grid_control_pane

0x0d1b,	// (0x0004b5a0) bg_button_pane_cp69_ParamLimits

0x0d1b,	// (0x0004b5a0) bg_button_pane_cp69

0xabaf,	// (0x00055434) cell_afind_pane_g1_ParamLimits

0xabaf,	// (0x00055434) cell_afind_pane_g1

0xabbc,	// (0x00055441) cell_afind_pane_t1_ParamLimits

0xabbc,	// (0x00055441) cell_afind_pane_t1

0x37c3,	// (0x0004e048) bg_button_pane_cp72

0x105a,	// (0x0004b8df) cell_afind_grid_control_pane_g1

0x8219,	// (0x00052a9e) aid_image_placing_area_ParamLimits

0x8219,	// (0x00052a9e) aid_image_placing_area

0xef89,	// (0x0005980e) field_vitu_entry_pane_g1_ParamLimits

0xef89,	// (0x0005980e) field_vitu_entry_pane_g1

0xef95,	// (0x0005981a) field_vitu_entry_pane_g2_ParamLimits

0xef95,	// (0x0005981a) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0005a0bf) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0005a0bf) field_vitu_entry_pane_g

0x9cff,	// (0x00054584) cell_vitu_itu_pane_g1_ParamLimits

0x9d41,	// (0x000545c6) cell_vitu_itu_pane_t3_ParamLimits

0x9d41,	// (0x000545c6) cell_vitu_itu_pane_t3

0x0ccb,	// (0x0004b550) mp4_progress_pane_t1_ParamLimits

0x0ce4,	// (0x0004b569) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0005a154) mp4_progress_pane_t_ParamLimits

0x0cfd,	// (0x0004b582) mup_progress_pane_cp04_ParamLimits

0xaac2,	// (0x00055347) main_myfav_hc_pane_t5_ParamLimits

0xaac2,	// (0x00055347) main_myfav_hc_pane_t5

0x0488,	// (0x0004ad0d) aid_zoom_text_primary

0x576e,	// (0x0004fff3) popup_adpt_find_window_ParamLimits

0x4781,	// (0x0004f006) main_cam_set_pane

0xa4fd,	// (0x00054d82) cam4_zoom_pane_ParamLimits

0xa4fd,	// (0x00054d82) cam4_zoom_pane

0xabce,	// (0x00055453) main_cam_set_pane_g1_ParamLimits

0xabce,	// (0x00055453) main_cam_set_pane_g1

0xabdc,	// (0x00055461) main_cam_set_pane_g2_ParamLimits

0xabdc,	// (0x00055461) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0005a215) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0005a215) main_cam_set_pane_g

0xabe8,	// (0x0005546d) main_cam_set_pane_t1_ParamLimits

0xabe8,	// (0x0005546d) main_cam_set_pane_t1

0xac04,	// (0x00055489) main_cset_listscroll_pane_ParamLimits

0xac04,	// (0x00055489) main_cset_listscroll_pane

0xac2f,	// (0x000554b4) main_cset_slider_pane_ParamLimits

0xac2f,	// (0x000554b4) main_cset_slider_pane

0x106b,	// (0x0004b8f0) main_cset_list_pane_ParamLimits

0x106b,	// (0x0004b8f0) main_cset_list_pane

0x107b,	// (0x0004b900) scroll_pane_cp028

0xac4e,	// (0x000554d3) aid_area_touch_slider

0xac6a,	// (0x000554ef) cset_slider_pane

0xac94,	// (0x00055519) main_cset_slider_pane_g1

0xaca9,	// (0x0005552e) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0005a21a) main_cset_slider_pane_g

0x10b4,	// (0x0004b939) main_cset_slider_pane_t1

0xad6b,	// (0x000555f0) main_cset_slider_pane_t2

0xad85,	// (0x0005560a) main_cset_slider_pane_t3

0xad9f,	// (0x00055624) main_cset_slider_pane_t4

0xadb9,	// (0x0005563e) main_cset_slider_pane_t5

0xadd7,	// (0x0005565c) main_cset_slider_pane_t6

0xadee,	// (0x00055673) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0005a23f) main_cset_slider_pane_t

0xaefa,	// (0x0005577f) cset_list_set_pane_ParamLimits

0xaefa,	// (0x0005577f) cset_list_set_pane

0xaf10,	// (0x00055795) aid_position_infowindow_above

0xaf18,	// (0x0005579d) aid_position_infowindow_below

0x1154,	// (0x0004b9d9) cset_list_set_pane_g1_ParamLimits

0x1154,	// (0x0004b9d9) cset_list_set_pane_g1

0x1160,	// (0x0004b9e5) cset_list_set_pane_g3_ParamLimits

0x1160,	// (0x0004b9e5) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0005a25e) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0005a25e) cset_list_set_pane_g

0xaf20,	// (0x000557a5) cset_list_set_pane_t1_ParamLimits

0xaf20,	// (0x000557a5) cset_list_set_pane_t1

0x4781,	// (0x0004f006) list_highlight_pane_cp021_ParamLimits

0x4781,	// (0x0004f006) list_highlight_pane_cp021

0x41e9,	// (0x0004ea6e) cset_slider_pane_g1

0x41fb,	// (0x0004ea80) cset_slider_pane_g2

0x41f2,	// (0x0004ea77) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0005a263) cset_slider_pane_g

0xaf35,	// (0x000557ba) aid_area_touch_cam4_zoom

0xaf3d,	// (0x000557c2) cam4_zoom_cont_pane

0xaf45,	// (0x000557ca) cam4_zoom_pane_g1

0xaf4d,	// (0x000557d2) cam4_zoom_pane_g2

0xaf55,	// (0x000557da) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0005a26a) cam4_zoom_pane_g

0xaf5d,	// (0x000557e2) cam4_zoom_cont_pane_g1

0xaf66,	// (0x000557eb) cam4_zoom_cont_pane_g2

0xaf6f,	// (0x000557f4) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0005a271) cam4_zoom_cont_pane_g

0xa3ea,	// (0x00054c6f) call4_image_pane_ParamLimits

0xa3ea,	// (0x00054c6f) call4_image_pane

0x0d59,	// (0x0004b5de) call4_windows_conf_pane_ParamLimits

0x0d9a,	// (0x0004b61f) popup_call4_audio_in_window_ParamLimits

0x0d9a,	// (0x0004b61f) popup_call4_audio_in_window

0x0462,	// (0x0004ace7) bg_popup_call2_act_pane_cp02

0x0e10,	// (0x0004b695) call4_list_conf_pane

0xe9c8,	// (0x0005924d) call4_image_pane_g1

0xe9c8,	// (0x0005924d) call4_image_pane_g2

0x0001,

0xf700,	// (0x00059f85) call4_image_pane_g

0x118a,	// (0x0004ba0f) list_single_graphic_popup_conf4_pane_ParamLimits

0x118a,	// (0x0004ba0f) list_single_graphic_popup_conf4_pane

0x0462,	// (0x0004ace7) list_highlight_pane_cp022

0x119d,	// (0x0004ba22) list_single_graphic_popup_conf4_pane_g1

0x3ec8,	// (0x0004e74d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0005a278) list_single_graphic_popup_conf4_pane_g

0x11a5,	// (0x0004ba2a) list_single_graphic_popup_conf4_pane_t1

0x66e0,	// (0x00050f65) popup_vtel_slider_window_ParamLimits

0x66e0,	// (0x00050f65) popup_vtel_slider_window

0x0d09,	// (0x0004b58e) dialer2_ne_pane_t2_ParamLimits

0x0d09,	// (0x0004b58e) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0005a159) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0005a159) dialer2_ne_pane_t

0x4781,	// (0x0004f006) bg_popup_sub_pane_cp010_ParamLimits

0x4781,	// (0x0004f006) bg_popup_sub_pane_cp010

0xaf78,	// (0x000557fd) popup_vtel_slider_window_g1_ParamLimits

0xaf78,	// (0x000557fd) popup_vtel_slider_window_g1

0xaf84,	// (0x00055809) popup_vtel_slider_window_g2_ParamLimits

0xaf84,	// (0x00055809) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0005a27d) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0005a27d) popup_vtel_slider_window_g

0xafcc,	// (0x00055851) vtel_slider_pane_ParamLimits

0xafcc,	// (0x00055851) vtel_slider_pane

0xafdb,	// (0x00055860) vtel_slider_pane_g1_ParamLimits

0xafdb,	// (0x00055860) vtel_slider_pane_g1

0xafe8,	// (0x0005586d) vtel_slider_pane_g2_ParamLimits

0xafe8,	// (0x0005586d) vtel_slider_pane_g2

0xaff5,	// (0x0005587a) vtel_slider_pane_g3_ParamLimits

0xaff5,	// (0x0005587a) vtel_slider_pane_g3

0xafdb,	// (0x00055860) vtel_slider_pane_g4_ParamLimits

0xafdb,	// (0x00055860) vtel_slider_pane_g4

0xb002,	// (0x00055887) vtel_slider_pane_g5_ParamLimits

0xb002,	// (0x00055887) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0005a286) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0005a286) vtel_slider_pane_g

0x0462,	// (0x0004ace7) main_gallery2_pane

0xa766,	// (0x00054feb) aid_size_row_itut2_dropdow_list_ParamLimits

0xa766,	// (0x00054feb) aid_size_row_itut2_dropdow_list

0xa7d4,	// (0x00055059) grid_vitu2_function_top_pane_ParamLimits

0xa7d4,	// (0x00055059) grid_vitu2_function_top_pane

0xa82a,	// (0x000550af) popup_vitu2_dropdown_list_window_ParamLimits

0xa82a,	// (0x000550af) popup_vitu2_dropdown_list_window

0xa84a,	// (0x000550cf) popup_vitu2_match_list_window

0xb00f,	// (0x00055894) cell_vitu2_function_top_pane_ParamLimits

0xb00f,	// (0x00055894) cell_vitu2_function_top_pane

0xb02f,	// (0x000558b4) cell_vitu2_function_top_pane_cp01_ParamLimits

0xb02f,	// (0x000558b4) cell_vitu2_function_top_pane_cp01

0xb04d,	// (0x000558d2) cell_vitu2_function_top_wide_pane_ParamLimits

0xb04d,	// (0x000558d2) cell_vitu2_function_top_wide_pane

0xa67e,	// (0x00054f03) bg_button_pane_cp012

0xb06b,	// (0x000558f0) cell_vitu2_function_top_pane_g1

0xb07a,	// (0x000558ff) bg_button_pane_cp013_ParamLimits

0xb07a,	// (0x000558ff) bg_button_pane_cp013

0xb096,	// (0x0005591b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xb096,	// (0x0005591b) cell_vitu2_function_top_wide_pane_g1

0xb0ae,	// (0x00055933) bg_popup_sub_pane_cp20

0xb0bc,	// (0x00055941) list_vitu2_match_list_pane

0x0f61,	// (0x0004b7e6) bg_popup_sub_pane_cp20_g1

0x0f69,	// (0x0004b7ee) bg_popup_sub_pane_cp20_g2

0x39c8,	// (0x0004e24d) bg_popup_sub_pane_cp20_g3

0x0f71,	// (0x0004b7f6) bg_popup_sub_pane_cp20_g4

0x39a8,	// (0x0004e22d) bg_popup_sub_pane_cp20_g5

0x11c9,	// (0x0004ba4e) bg_popup_sub_pane_cp20_g6

0x0f81,	// (0x0004b806) bg_popup_sub_pane_cp20_g7

0x0f89,	// (0x0004b80e) bg_popup_sub_pane_cp20_g8

0x0f91,	// (0x0004b816) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0005a291) bg_popup_sub_pane_cp20_g

0xb0d4,	// (0x00055959) list_vitu2_match_list_item_pane_ParamLimits

0xb0d4,	// (0x00055959) list_vitu2_match_list_item_pane

0xb0e6,	// (0x0005596b) list_vitu2_match_list_item_pane_t1

0x5b97,	// (0x0005041c) bg_popup_sub_pane_cp21

0xb123,	// (0x000559a8) grid_vitu2_dropdown_list_pane

0xb12b,	// (0x000559b0) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xb12b,	// (0x000559b0) cell_vitu2_dropdown_list_char_pane

0xb14c,	// (0x000559d1) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xb14c,	// (0x000559d1) cell_vitu2_dropdown_list_ctrl_pane

0x11fb,	// (0x0004ba80) cell_vitu2_dropdown_list_char_pane_g1

0x11f2,	// (0x0004ba77) cell_vitu2_dropdown_list_char_pane_g2

0x11e9,	// (0x0004ba6e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0005a2ae) cell_vitu2_dropdown_list_char_pane_g

0xb178,	// (0x000559fd) cell_vitu2_dropdown_list_char_pane_t1

0xb186,	// (0x00055a0b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xb186,	// (0x00055a0b) cell_vitu2_dropdown_list_ctrl_pane_g1

0xb196,	// (0x00055a1b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xb196,	// (0x00055a1b) cell_vitu2_dropdown_list_ctrl_pane_g2

0xb1a7,	// (0x00055a2c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xb1a7,	// (0x00055a2c) cell_vitu2_dropdown_list_ctrl_pane_g3

0xb1b7,	// (0x00055a3c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xb1b7,	// (0x00055a3c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xa591,	// (0x00054e16) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xa591,	// (0x00054e16) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0005a2b5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0005a2b5) cell_vitu2_dropdown_list_ctrl_pane_g

0xb1d3,	// (0x00055a58) aid_size_cell_gallery2_ParamLimits

0xb1d3,	// (0x00055a58) aid_size_cell_gallery2

0xb1e1,	// (0x00055a66) grid_gallery2_pane_ParamLimits

0xb1e1,	// (0x00055a66) grid_gallery2_pane

0xb1f0,	// (0x00055a75) scroll_pane_cp029_ParamLimits

0xb1f0,	// (0x00055a75) scroll_pane_cp029

0xb1fc,	// (0x00055a81) cell_gallery2_pane_ParamLimits

0xb1fc,	// (0x00055a81) cell_gallery2_pane

0x1204,	// (0x0004ba89) cell_gallery2_pane_g2

0x2711,	// (0x0004cf96) cell_gallery2_pane_g3

0x120e,	// (0x0004ba93) cell_gallery2_pane_g4

0x1216,	// (0x0004ba9b) cell_gallery2_pane_g5

0x40b3,	// (0x0004e938) grid_highlight_pane_cp10

0xa84a,	// (0x000550cf) popup_vitu2_match_list_window_ParamLimits

0xa85e,	// (0x000550e3) popup_vitu2_query_window_ParamLimits

0xa85e,	// (0x000550e3) popup_vitu2_query_window

0x5b97,	// (0x0005041c) bg_vitu2_candi_button_pane

0x11fb,	// (0x0004ba80) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x11f2,	// (0x0004ba77) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x11e9,	// (0x0004ba6e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xb22a,	// (0x00055aaf) bg_button_pane_cp015

0xb23c,	// (0x00055ac1) bg_button_pane_cp016

0xb24f,	// (0x00055ad4) bg_button_pane_cp017

0xe581,	// (0x00058e06) bg_popup_sub_pane_cp22

0x121e,	// (0x0004baa3) popup_vitu2_query_window_g1

0xb294,	// (0x00055b19) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0005a2c0) popup_vitu2_query_window_g

0xb2b1,	// (0x00055b36) popup_vitu2_query_window_t1_ParamLimits

0xb2b1,	// (0x00055b36) popup_vitu2_query_window_t1

0xb2e4,	// (0x00055b69) popup_vitu2_query_window_t2_ParamLimits

0xb2e4,	// (0x00055b69) popup_vitu2_query_window_t2

0xb2f6,	// (0x00055b7b) popup_vitu2_query_window_t3_ParamLimits

0xb2f6,	// (0x00055b7b) popup_vitu2_query_window_t3

0xb31e,	// (0x00055ba3) popup_vitu2_query_window_t4_ParamLimits

0xb31e,	// (0x00055ba3) popup_vitu2_query_window_t4

0xb33f,	// (0x00055bc4) popup_vitu2_query_window_t5_ParamLimits

0xb33f,	// (0x00055bc4) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0005a2c7) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0005a2c7) popup_vitu2_query_window_t

0x1063,	// (0x0004b8e8) main_cset_text_pane

0xac4e,	// (0x000554d3) aid_area_touch_slider_ParamLimits

0xac6a,	// (0x000554ef) cset_slider_pane_ParamLimits

0xac94,	// (0x00055519) main_cset_slider_pane_g1_ParamLimits

0xaca9,	// (0x0005552e) main_cset_slider_pane_g2_ParamLimits

0x1084,	// (0x0004b909) main_cset_slider_pane_g3_ParamLimits

0x1084,	// (0x0004b909) main_cset_slider_pane_g3

0xacbe,	// (0x00055543) main_cset_slider_pane_g4_ParamLimits

0xacbe,	// (0x00055543) main_cset_slider_pane_g4

0xaccd,	// (0x00055552) main_cset_slider_pane_g5_ParamLimits

0xaccd,	// (0x00055552) main_cset_slider_pane_g5

0xacdb,	// (0x00055560) main_cset_slider_pane_g6_ParamLimits

0xacdb,	// (0x00055560) main_cset_slider_pane_g6

0xf995,	// (0x0005a21a) main_cset_slider_pane_g_ParamLimits

0x10b4,	// (0x0004b939) main_cset_slider_pane_t1_ParamLimits

0xad6b,	// (0x000555f0) main_cset_slider_pane_t2_ParamLimits

0xad85,	// (0x0005560a) main_cset_slider_pane_t3_ParamLimits

0xad9f,	// (0x00055624) main_cset_slider_pane_t4_ParamLimits

0xadb9,	// (0x0005563e) main_cset_slider_pane_t5_ParamLimits

0xadd7,	// (0x0005565c) main_cset_slider_pane_t6_ParamLimits

0xadee,	// (0x00055673) main_cset_slider_pane_t7_ParamLimits

0xae1c,	// (0x000556a1) main_cset_slider_pane_t8_ParamLimits

0xae1c,	// (0x000556a1) main_cset_slider_pane_t8

0xae44,	// (0x000556c9) main_cset_slider_pane_t9_ParamLimits

0xae44,	// (0x000556c9) main_cset_slider_pane_t9

0xae6c,	// (0x000556f1) main_cset_slider_pane_t10_ParamLimits

0xae6c,	// (0x000556f1) main_cset_slider_pane_t10

0xae94,	// (0x00055719) main_cset_slider_pane_t11_ParamLimits

0xae94,	// (0x00055719) main_cset_slider_pane_t11

0xaebe,	// (0x00055743) main_cset_slider_pane_t12_ParamLimits

0xaebe,	// (0x00055743) main_cset_slider_pane_t12

0xaedb,	// (0x00055760) main_cset_slider_pane_t13_ParamLimits

0xaedb,	// (0x00055760) main_cset_slider_pane_t13

0xf9ba,	// (0x0005a23f) main_cset_slider_pane_t_ParamLimits

0x0462,	// (0x0004ace7) bg_popup_sub_pane_cp011

0x122a,	// (0x0004baaf) main_cset_text_pane_g1

0x1232,	// (0x0004bab7) main_cset_text_pane_t1

0x1240,	// (0x0004bac5) main_cset_text_pane_t2

0x124e,	// (0x0004bad3) main_cset_text_pane_t3

0x125c,	// (0x0004bae1) main_cset_text_pane_t4

0x126a,	// (0x0004baef) main_cset_text_pane_t5

0x1278,	// (0x0004bafd) main_cset_text_pane_t6

0x1286,	// (0x0004bb0b) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0005a2d6) main_cset_text_pane_t

0x0462,	// (0x0004ace7) main_cam4_burst_pane

0x0462,	// (0x0004ace7) main_cam5_pane

0xab9d,	// (0x00055422) bg_button_pane_cp019

0xaba6,	// (0x0005542b) bg_button_pane_cp020

0x1090,	// (0x0004b915) main_cset_slider_pane_g7_ParamLimits

0x1090,	// (0x0004b915) main_cset_slider_pane_g7

0x109c,	// (0x0004b921) main_cset_slider_pane_g8_ParamLimits

0x109c,	// (0x0004b921) main_cset_slider_pane_g8

0xacef,	// (0x00055574) main_cset_slider_pane_g9_ParamLimits

0xacef,	// (0x00055574) main_cset_slider_pane_g9

0xacfb,	// (0x00055580) main_cset_slider_pane_g10_ParamLimits

0xacfb,	// (0x00055580) main_cset_slider_pane_g10

0xad07,	// (0x0005558c) main_cset_slider_pane_g11_ParamLimits

0xad07,	// (0x0005558c) main_cset_slider_pane_g11

0xad13,	// (0x00055598) main_cset_slider_pane_g12_ParamLimits

0xad13,	// (0x00055598) main_cset_slider_pane_g12

0xad1f,	// (0x000555a4) main_cset_slider_pane_g13_ParamLimits

0xad1f,	// (0x000555a4) main_cset_slider_pane_g13

0xad2b,	// (0x000555b0) main_cset_slider_pane_g14_ParamLimits

0xad2b,	// (0x000555b0) main_cset_slider_pane_g14

0xad37,	// (0x000555bc) main_cset_slider_pane_g15_ParamLimits

0xad37,	// (0x000555bc) main_cset_slider_pane_g15

0x10e2,	// (0x0004b967) main_cset_slider_pane_t14_ParamLimits

0x10e2,	// (0x0004b967) main_cset_slider_pane_t14

0x111b,	// (0x0004b9a0) main_cset_slider_pane_t15_ParamLimits

0x111b,	// (0x0004b9a0) main_cset_slider_pane_t15

0xb3b6,	// (0x00055c3b) aid_cam4_burst_size_cell_ParamLimits

0xb3b6,	// (0x00055c3b) aid_cam4_burst_size_cell

0xb3d2,	// (0x00055c57) grid_cam4_burst_pane_ParamLimits

0xb3d2,	// (0x00055c57) grid_cam4_burst_pane

0xb402,	// (0x00055c87) linegrid_cam4_burst_pane_ParamLimits

0xb402,	// (0x00055c87) linegrid_cam4_burst_pane

0xb422,	// (0x00055ca7) scroll_pane_cp30_ParamLimits

0xb422,	// (0x00055ca7) scroll_pane_cp30

0xb42e,	// (0x00055cb3) cell_cam4_burst_pane_ParamLimits

0xb42e,	// (0x00055cb3) cell_cam4_burst_pane

0x12a0,	// (0x0004bb25) linegrid_cam4_burst_pane_g1_ParamLimits

0x12a0,	// (0x0004bb25) linegrid_cam4_burst_pane_g1

0xb46a,	// (0x00055cef) linegrid_cam4_burst_pane_g2_ParamLimits

0xb46a,	// (0x00055cef) linegrid_cam4_burst_pane_g2

0x12ad,	// (0x0004bb32) linegrid_cam4_burst_pane_g3_ParamLimits

0x12ad,	// (0x0004bb32) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0005a2e5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0005a2e5) linegrid_cam4_burst_pane_g

0xb47b,	// (0x00055d00) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xb47b,	// (0x00055d00) linegrid_cam4_burst_pane_g3_copy1

0x12ba,	// (0x0004bb3f) linegrid_cam4_burst_pane_g4_ParamLimits

0x12ba,	// (0x0004bb3f) linegrid_cam4_burst_pane_g4

0xb495,	// (0x00055d1a) linegrid_cam4_burst_pane_g5_ParamLimits

0xb495,	// (0x00055d1a) linegrid_cam4_burst_pane_g5

0xb4a6,	// (0x00055d2b) linegrid_cam4_burst_pane_g6_ParamLimits

0xb4a6,	// (0x00055d2b) linegrid_cam4_burst_pane_g6

0x12c7,	// (0x0004bb4c) linegrid_cam4_burst_pane_g7_ParamLimits

0x12c7,	// (0x0004bb4c) linegrid_cam4_burst_pane_g7

0xb4b7,	// (0x00055d3c) cell_cam4_burst_pane_g1

0x12e0,	// (0x0004bb65) main_cam5_pane_t1_ParamLimits

0x12e0,	// (0x0004bb65) main_cam5_pane_t1

0x12f2,	// (0x0004bb77) main_cam5_pane_t2_ParamLimits

0x12f2,	// (0x0004bb77) main_cam5_pane_t2

0x1304,	// (0x0004bb89) main_cam5_pane_t3_ParamLimits

0x1304,	// (0x0004bb89) main_cam5_pane_t3

0x1316,	// (0x0004bb9b) main_cam5_pane_t4_ParamLimits

0x1316,	// (0x0004bb9b) main_cam5_pane_t4

0x132e,	// (0x0004bbb3) main_cam5_pane_t5_ParamLimits

0x132e,	// (0x0004bbb3) main_cam5_pane_t5

0x1342,	// (0x0004bbc7) main_cam5_pane_t6_ParamLimits

0x1342,	// (0x0004bbc7) main_cam5_pane_t6

0x1356,	// (0x0004bbdb) main_cam5_pane_t7_ParamLimits

0x1356,	// (0x0004bbdb) main_cam5_pane_t7

0x1368,	// (0x0004bbed) main_cam5_pane_t8_ParamLimits

0x1368,	// (0x0004bbed) main_cam5_pane_t8

0x1384,	// (0x0004bc09) main_cam5_pane_t9_ParamLimits

0x1384,	// (0x0004bc09) main_cam5_pane_t9

0x1396,	// (0x0004bc1b) main_cam5_pane_t10_ParamLimits

0x1396,	// (0x0004bc1b) main_cam5_pane_t10

0x13a8,	// (0x0004bc2d) main_cam5_pane_t11_ParamLimits

0x13a8,	// (0x0004bc2d) main_cam5_pane_t11

0x13ba,	// (0x0004bc3f) main_cam5_pane_t12_ParamLimits

0x13ba,	// (0x0004bc3f) main_cam5_pane_t12

0x13cf,	// (0x0004bc54) main_cam5_pane_t13_ParamLimits

0x13cf,	// (0x0004bc54) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0005a2f1) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0005a2f1) main_cam5_pane_t

0x581a,	// (0x0005009f) popup_scut_keymap_window_ParamLimits

0x581a,	// (0x0005009f) popup_scut_keymap_window

0xb4ca,	// (0x00055d4f) aid_size_cell_brow_shortcut

0x40b3,	// (0x0004e938) bg_popup_window_pane_cp010

0xb4d6,	// (0x00055d5b) grid_scut_pane

0xb4e2,	// (0x00055d67) cell_scut_pane_ParamLimits

0xb4e2,	// (0x00055d67) cell_scut_pane

0xb4f9,	// (0x00055d7e) cell_scut_pane_g1

0x13ec,	// (0x0004bc71) cell_scut_pane_t1

0x13fb,	// (0x0004bc80) cell_scut_pane_t2

0xb502,	// (0x00055d87) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0005a30c) cell_scut_pane_t

0x939d,	// (0x00053c22) main_mup3_pane_g8_ParamLimits

0x939d,	// (0x00053c22) main_mup3_pane_g8

0xa774,	// (0x00054ff9) area_vitu2_query_pane_ParamLimits

0xa774,	// (0x00054ff9) area_vitu2_query_pane

0xb262,	// (0x00055ae7) input_focus_pane_cp08

0x140a,	// (0x0004bc8f) area_vitu2_query_pane_g1

0xb510,	// (0x00055d95) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0005a313) area_vitu2_query_pane_g

0xb521,	// (0x00055da6) area_vitu2_query_pane_t1_ParamLimits

0xb521,	// (0x00055da6) area_vitu2_query_pane_t1

0xb535,	// (0x00055dba) area_vitu2_query_pane_t2_ParamLimits

0xb535,	// (0x00055dba) area_vitu2_query_pane_t2

0xb549,	// (0x00055dce) area_vitu2_query_pane_t3_ParamLimits

0xb549,	// (0x00055dce) area_vitu2_query_pane_t3

0x1416,	// (0x0004bc9b) area_vitu2_query_pane_t4_ParamLimits

0x1416,	// (0x0004bc9b) area_vitu2_query_pane_t4

0x143e,	// (0x0004bcc3) area_vitu2_query_pane_t5_ParamLimits

0x143e,	// (0x0004bcc3) area_vitu2_query_pane_t5

0x1466,	// (0x0004bceb) area_vitu2_query_pane_t6_ParamLimits

0x1466,	// (0x0004bceb) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0005a318) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0005a318) area_vitu2_query_pane_t

0xb571,	// (0x00055df6) bg_button_pane_cp018

0xb57f,	// (0x00055e04) bg_button_pane_cp021

0xb58b,	// (0x00055e10) bg_button_pane_cp022

0xb59c,	// (0x00055e21) input_focus_pane_cp09

0x7842,	// (0x000520c7) aid_size_touch_mv_arrow_left

0x786b,	// (0x000520f0) aid_size_touch_mv_arrow_right

0xad4f,	// (0x000555d4) main_cset_slider_pane_g16_ParamLimits

0xad4f,	// (0x000555d4) main_cset_slider_pane_g16

0xad5d,	// (0x000555e2) main_cset_slider_pane_g17_ParamLimits

0xad5d,	// (0x000555e2) main_cset_slider_pane_g17

0xb4b7,	// (0x00055d3c) cell_cam4_burst_pane_g1_ParamLimits

0x0462,	// (0x0004ace7) compa_mode_pane

0xaf90,	// (0x00055815) popup_vtel_slider_window_g3_ParamLimits

0xaf90,	// (0x00055815) popup_vtel_slider_window_g3

0xafa4,	// (0x00055829) popup_vtel_slider_window_g4_ParamLimits

0xafa4,	// (0x00055829) popup_vtel_slider_window_g4

0xafb8,	// (0x0005583d) popup_vtel_slider_window_t1_ParamLimits

0xafb8,	// (0x0005583d) popup_vtel_slider_window_t1

0x0462,	// (0x0004ace7) main_cl_pane

0xe5a9,	// (0x00058e2e) popup_imed_adjust2_window_ParamLimits

0xe581,	// (0x00058e06) bg_tb_trans_pane_cp05_ParamLimits

0xeebe,	// (0x00059743) popup_imed_adjust2_window_g1_ParamLimits

0xeecd,	// (0x00059752) popup_imed_adjust2_window_g2_ParamLimits

0xeecd,	// (0x00059752) popup_imed_adjust2_window_g2

0xeed9,	// (0x0005975e) popup_imed_adjust2_window_g3_ParamLimits

0xeed9,	// (0x0005975e) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0005a083) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0005a083) popup_imed_adjust2_window_g

0xeee5,	// (0x0005976a) popup_imed_adjust2_window_t1_ParamLimits

0xeefd,	// (0x00059782) slider_imed_adjust_pane_ParamLimits

0xef11,	// (0x00059796) slider_imed_adjust_pane_g1_ParamLimits

0xef21,	// (0x000597a6) slider_imed_adjust_pane_g2_ParamLimits

0xef31,	// (0x000597b6) slider_imed_adjust_pane_g3_ParamLimits

0xef42,	// (0x000597c7) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0005a08a) slider_imed_adjust_pane_g_ParamLimits

0xa4a6,	// (0x00054d2b) aid_touch_area_cam4_ParamLimits

0xa4a6,	// (0x00054d2b) aid_touch_area_cam4

0xa4b6,	// (0x00054d3b) battery_pane_cp01

0xa53d,	// (0x00054dc2) main_camera4_pane_g6_ParamLimits

0xa53d,	// (0x00054dc2) main_camera4_pane_g6

0xa55b,	// (0x00054de0) main_camera4_pane_t2_ParamLimits

0xa55b,	// (0x00054de0) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0005a18d) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0005a18d) main_camera4_pane_t

0xa5f0,	// (0x00054e75) aid_touch_area_vid4_ParamLimits

0xa5f0,	// (0x00054e75) aid_touch_area_vid4

0xa630,	// (0x00054eb5) main_video4_pane_g5_ParamLimits

0xa630,	// (0x00054eb5) main_video4_pane_g5

0xa652,	// (0x00054ed7) vid4_progress_pane_ParamLimits

0xa652,	// (0x00054ed7) vid4_progress_pane

0x10a8,	// (0x0004b92d) main_cset_slider_pane_g18_ParamLimits

0x10a8,	// (0x0004b92d) main_cset_slider_pane_g18

0x12d4,	// (0x0004bb59) cell_cam4_burst_pane_g2_ParamLimits

0x12d4,	// (0x0004bb59) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0005a2ec) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0005a2ec) cell_cam4_burst_pane_g

0xb5ad,	// (0x00055e32) bg_cl_pane_ParamLimits

0xb5ad,	// (0x00055e32) bg_cl_pane

0xb5b9,	// (0x00055e3e) cl_header_pane_ParamLimits

0xb5b9,	// (0x00055e3e) cl_header_pane

0xb5c5,	// (0x00055e4a) cl_listscroll_pane_ParamLimits

0xb5c5,	// (0x00055e4a) cl_listscroll_pane

0x14b2,	// (0x0004bd37) bg_cl_pane_g1

0x14ba,	// (0x0004bd3f) bg_cl_pane_g2

0x14c2,	// (0x0004bd47) bg_cl_pane_g3

0x14ca,	// (0x0004bd4f) bg_cl_pane_g4

0x14d2,	// (0x0004bd57) bg_cl_pane_g5

0x14da,	// (0x0004bd5f) bg_cl_pane_g6

0x14e2,	// (0x0004bd67) bg_cl_pane_g7

0x14ea,	// (0x0004bd6f) bg_cl_pane_g8

0x14f2,	// (0x0004bd77) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0005a327) bg_cl_pane_g

0xb5d1,	// (0x00055e56) aid_height_cl_leading_ParamLimits

0xb5d1,	// (0x00055e56) aid_height_cl_leading

0xb5dd,	// (0x00055e62) aid_height_cl_text_ParamLimits

0xb5dd,	// (0x00055e62) aid_height_cl_text

0x0edb,	// (0x0004b760) bg_cl_header_pane_ParamLimits

0x0edb,	// (0x0004b760) bg_cl_header_pane

0xb5f5,	// (0x00055e7a) cl_header_pane_g1_ParamLimits

0xb5f5,	// (0x00055e7a) cl_header_pane_g1

0xb602,	// (0x00055e87) cl_header_pane_t1_ParamLimits

0xb602,	// (0x00055e87) cl_header_pane_t1

0x14fa,	// (0x0004bd7f) cl_list_pane

0x107b,	// (0x0004b900) hc_scroll_pane_cp01

0x39a8,	// (0x0004e22d) bg_cl_header_pane_g1

0x0f61,	// (0x0004b7e6) bg_cl_header_pane_g2

0x39c8,	// (0x0004e24d) bg_cl_header_pane_g3

0x0f71,	// (0x0004b7f6) bg_cl_header_pane_g4

0x0f69,	// (0x0004b7ee) bg_cl_header_pane_g5

0x11c9,	// (0x0004ba4e) bg_cl_header_pane_g6

0x0f89,	// (0x0004b80e) bg_cl_header_pane_g7

0x0f91,	// (0x0004b816) bg_cl_header_pane_g8

0x0f81,	// (0x0004b806) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0005a33a) bg_cl_header_pane_g

0xb614,	// (0x00055e99) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xb614,	// (0x00055e99) hc_cl_list_double_graphic_heading_pane

0xb625,	// (0x00055eaa) hc_cl_list_single_graphic_pane_ParamLimits

0xb625,	// (0x00055eaa) hc_cl_list_single_graphic_pane

0xb63e,	// (0x00055ec3) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xb63e,	// (0x00055ec3) hc_cl_list_single_graphic_pane_g1

0xb64a,	// (0x00055ecf) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xb64a,	// (0x00055ecf) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0005a34d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0005a34d) hc_cl_list_single_graphic_pane_g

0xb65e,	// (0x00055ee3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xb65e,	// (0x00055ee3) hc_cl_list_single_graphic_pane_t1

0xb63e,	// (0x00055ec3) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xb63e,	// (0x00055ec3) hc_cl_list_double_graphic_heading_pane_g1

0xb673,	// (0x00055ef8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xb673,	// (0x00055ef8) hc_cl_list_double_graphic_heading_pane_g2

0xb687,	// (0x00055f0c) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xb687,	// (0x00055f0c) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0005a352) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0005a352) hc_cl_list_double_graphic_heading_pane_g

0xb69b,	// (0x00055f20) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xb69b,	// (0x00055f20) hc_cl_list_double_graphic_heading_pane_t1

0xb6b0,	// (0x00055f35) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xb6b0,	// (0x00055f35) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0005a359) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0005a359) hc_cl_list_double_graphic_heading_pane_t

0xb6cd,	// (0x00055f52) vid4_progress_pane_g1

0xb6dd,	// (0x00055f62) vid4_progress_pane_g2

0x3c6d,	// (0x0004e4f2) vid4_progress_pane_g3

0xb6ed,	// (0x00055f72) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0005a35e) vid4_progress_pane_g

0xb70b,	// (0x00055f90) vid4_progress_pane_t1

0xb720,	// (0x00055fa5) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0005a369) vid4_progress_pane_t

0xb74b,	// (0x00055fd0) wait_bar_pane_cp07

0xe7bb,	// (0x00059040) blid_firmament_pane_ParamLimits

0xe7fe,	// (0x00059083) popup_blid_sat_info2_window_g1

0xe822,	// (0x000590a7) popup_blid_sat_info2_window_t3

0xe830,	// (0x000590b5) popup_blid_sat_info2_window_t4

0xe83e,	// (0x000590c3) popup_blid_sat_info2_window_t5

0xe84c,	// (0x000590d1) popup_blid_sat_info2_window_t6

0xe85c,	// (0x000590e1) popup_blid_sat_info2_window_t7

0xe86a,	// (0x000590ef) popup_blid_sat_info2_window_t8

0xe878,	// (0x000590fd) popup_blid_sat_info2_window_t9

0xe886,	// (0x0005910b) popup_blid_sat_info2_window_t10

0xe948,	// (0x000591cd) aid_firma_cardinal_ParamLimits

0xe95c,	// (0x000591e1) blid_firmament_pane_t1_ParamLimits

0xe973,	// (0x000591f8) blid_firmament_pane_t2_ParamLimits

0xe98a,	// (0x0005920f) blid_firmament_pane_t3_ParamLimits

0xe9a1,	// (0x00059226) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x00059f7c) blid_firmament_pane_t_ParamLimits

0xe9b8,	// (0x0005923d) blid_sat_info_pane_ParamLimits

0x4781,	// (0x0004f006) main_cam_set_pane_ParamLimits

0x9b22,	// (0x000543a7) aid_size_cell_colour_35_ParamLimits

0x9b3c,	// (0x000543c1) aid_size_cell_colour_112_ParamLimits

0x9b53,	// (0x000543d8) aid_size_cell_effect_ParamLimits

0x4781,	// (0x0004f006) bg_tb_trans_pane_cp02_ParamLimits

0x478f,	// (0x0004f014) heading_imed_pane_ParamLimits

0x9b6d,	// (0x000543f2) listscroll_imed_pane_ParamLimits

0xdbb3,	// (0x00058438) popup_call2_audio_first_window_g5_ParamLimits

0xdbb3,	// (0x00058438) popup_call2_audio_first_window_g5

0xa255,	// (0x00054ada) aid_size_touch_image3_arrow_left_ParamLimits

0xa255,	// (0x00054ada) aid_size_touch_image3_arrow_left

0xa26b,	// (0x00054af0) aid_size_touch_image3_arrow_right_ParamLimits

0xa26b,	// (0x00054af0) aid_size_touch_image3_arrow_right

0xb736,	// (0x00055fbb) vid4_progress_pane_t3

0x9e0a,	// (0x0005468f) main_hwr_training_symbol_option_pane_ParamLimits

0x9e0a,	// (0x0005468f) main_hwr_training_symbol_option_pane

0x09b6,	// (0x0004b23b) popup_hwr_training_preview_window_ParamLimits

0x09b6,	// (0x0004b23b) popup_hwr_training_preview_window

0x9e6b,	// (0x000546f0) hwr_training_navi_pane_g5_ParamLimits

0x9e6b,	// (0x000546f0) hwr_training_navi_pane_g5

0x0f4f,	// (0x0004b7d4) popup_char_count_window

0xb0ae,	// (0x00055933) bg_popup_sub_pane_cp20_ParamLimits

0xb0bc,	// (0x00055941) list_vitu2_match_list_pane_ParamLimits

0xb0c8,	// (0x0005594d) vitu2_page_scroll_pane_ParamLimits

0xb0c8,	// (0x0005594d) vitu2_page_scroll_pane

0x155d,	// (0x0004bde2) list_single_hwr_training_symbol_option_pane_ParamLimits

0x155d,	// (0x0004bde2) list_single_hwr_training_symbol_option_pane

0x1570,	// (0x0004bdf5) list_single_hwr_training_symbol_option_pane_g1

0x1578,	// (0x0004bdfd) list_single_hwr_training_symbol_option_pane_t1

0x1586,	// (0x0004be0b) bg_button_pane_cp023

0x158f,	// (0x0004be14) bg_button_pane_cp024

0xb75d,	// (0x00055fe2) vitu2_page_scroll_pane_g1

0xb765,	// (0x00055fea) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0005a370) vitu2_page_scroll_pane_g

0xb76d,	// (0x00055ff2) vitu2_page_scroll_pane_t1

0x15c2,	// (0x0004be47) popup_char_count_window_g1

0x15cb,	// (0x0004be50) popup_char_count_window_g2

0x15d4,	// (0x0004be59) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0005a375) popup_char_count_window_g

0x15dd,	// (0x0004be62) popup_char_count_window_t1

0x0462,	// (0x0004ace7) main_vded2_pane

0xeeaa,	// (0x0005972f) aid_size_cell_imed_line

0xeeb4,	// (0x00059739) grid_imed_line_width_pane

0xa6c9,	// (0x00054f4e) vid4_indicators_pane_g4

0x15eb,	// (0x0004be70) cell_imed_line_width_pane_ParamLimits

0x15eb,	// (0x0004be70) cell_imed_line_width_pane

0x15ff,	// (0x0004be84) cell_imed_line_width_pane_g1

0xf0e4,	// (0x00059969) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0005a37c) cell_imed_line_width_pane_g

0xb77c,	// (0x00056001) main_vded2_pane_g1_ParamLimits

0xb77c,	// (0x00056001) main_vded2_pane_g1

0xb789,	// (0x0005600e) main_vded2_pane_g2_ParamLimits

0xb789,	// (0x0005600e) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0005a381) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0005a381) main_vded2_pane_g

0xb797,	// (0x0005601c) vded2_slider_pane_ParamLimits

0xb797,	// (0x0005601c) vded2_slider_pane

0xb7a4,	// (0x00056029) aid_size_touch_vded2_end

0xb7ae,	// (0x00056033) aid_size_touch_vded2_playhead

0x1608,	// (0x0004be8d) aid_size_touch_vded2_start

0x1610,	// (0x0004be95) vded2_slider_bg_pane

0x1619,	// (0x0004be9e) vded2_slider_pane_g1

0x1622,	// (0x0004bea7) vded2_slider_pane_g2

0xb7b6,	// (0x0005603b) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0005a386) vded2_slider_pane_g

0x162a,	// (0x0004beaf) vded2_slider_bg_pane_g1

0x1633,	// (0x0004beb8) vded2_slider_bg_pane_g2

0x163c,	// (0x0004bec1) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0005a38d) vded2_slider_bg_pane_g

0x7f83,	// (0x00052808) aid_postcard_touch_down_pane_ParamLimits

0x7f83,	// (0x00052808) aid_postcard_touch_down_pane

0x7f93,	// (0x00052818) aid_postcard_touch_up_pane_ParamLimits

0x7f93,	// (0x00052818) aid_postcard_touch_up_pane

0x0462,	// (0x0004ace7) main_blid2_pane

0xe58f,	// (0x00058e14) popup_blid2_search_window

0x0462,	// (0x0004ace7) blid2_gps_pane

0x0462,	// (0x0004ace7) blid2_navig_pane

0x0462,	// (0x0004ace7) blid2_search_pane

0x0462,	// (0x0004ace7) blid2_tripm_pane

0xb7bf,	// (0x00056044) blid2_search_pane_g1_ParamLimits

0xb7bf,	// (0x00056044) blid2_search_pane_g1

0xb7cf,	// (0x00056054) blid2_search_pane_t1_ParamLimits

0xb7cf,	// (0x00056054) blid2_search_pane_t1

0xb7e1,	// (0x00056066) aid_size_cell_blid2_gps_ParamLimits

0xb7e1,	// (0x00056066) aid_size_cell_blid2_gps

0xb7f1,	// (0x00056076) blid2_gps_pane_g1_ParamLimits

0xb7f1,	// (0x00056076) blid2_gps_pane_g1

0xb7fd,	// (0x00056082) grid_blid2_satellite_pane_ParamLimits

0xb7fd,	// (0x00056082) grid_blid2_satellite_pane

0xb80d,	// (0x00056092) blid2_navig_pane_g1_ParamLimits

0xb80d,	// (0x00056092) blid2_navig_pane_g1

0xb819,	// (0x0005609e) blid2_navig_pane_t1_ParamLimits

0xb819,	// (0x0005609e) blid2_navig_pane_t1

0xb82b,	// (0x000560b0) blid2_navig_pane_t2_ParamLimits

0xb82b,	// (0x000560b0) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0005a394) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0005a394) blid2_navig_pane_t

0xb83d,	// (0x000560c2) blid2_navig_ring_pane_ParamLimits

0xb83d,	// (0x000560c2) blid2_navig_ring_pane

0xb84d,	// (0x000560d2) blid2_speed_pane_ParamLimits

0xb84d,	// (0x000560d2) blid2_speed_pane

0xb859,	// (0x000560de) blid2_tripm_pane_g1_ParamLimits

0xb859,	// (0x000560de) blid2_tripm_pane_g1

0xb869,	// (0x000560ee) blid2_tripm_pane_g2_ParamLimits

0xb869,	// (0x000560ee) blid2_tripm_pane_g2

0xb875,	// (0x000560fa) blid2_tripm_pane_g3_ParamLimits

0xb875,	// (0x000560fa) blid2_tripm_pane_g3

0xb881,	// (0x00056106) blid2_tripm_pane_g4_ParamLimits

0xb881,	// (0x00056106) blid2_tripm_pane_g4

0xb88d,	// (0x00056112) blid2_tripm_pane_g5_ParamLimits

0xb88d,	// (0x00056112) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0005a399) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0005a399) blid2_tripm_pane_g

0xb8a9,	// (0x0005612e) blid2_tripm_pane_t1_ParamLimits

0xb8a9,	// (0x0005612e) blid2_tripm_pane_t1

0xb8bd,	// (0x00056142) blid2_tripm_pane_t2_ParamLimits

0xb8bd,	// (0x00056142) blid2_tripm_pane_t2

0xb8cf,	// (0x00056154) blid2_tripm_pane_t3_ParamLimits

0xb8cf,	// (0x00056154) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0005a3a6) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0005a3a6) blid2_tripm_pane_t

0xb901,	// (0x00056186) cell_blid2_satellite_pane_ParamLimits

0xb901,	// (0x00056186) cell_blid2_satellite_pane

0xb91b,	// (0x000561a0) cell_blid2_satellite_pane_g1

0x1645,	// (0x0004beca) cell_blid2_satellite_pane_t1

0xe9c8,	// (0x0005924d) blid2_speed_pane_g1

0x1653,	// (0x0004bed8) blid2_speed_pane_t1

0x1661,	// (0x0004bee6) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0005a3af) blid2_speed_pane_t

0xe9c8,	// (0x0005924d) blid2_navig_ring_pane_g1

0xb924,	// (0x000561a9) blid2_navig_ring_pane_g2

0xb92c,	// (0x000561b1) blid2_navig_ring_pane_g3

0xb934,	// (0x000561b9) blid2_navig_ring_pane_g4

0xb93c,	// (0x000561c1) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0005a3b4) blid2_navig_ring_pane_g

0x0462,	// (0x0004ace7) bg_popup_window_pane_cp011

0x166f,	// (0x0004bef4) popup_blid2_search_window_g1

0x1677,	// (0x0004befc) popup_blid2_search_window_t1

0x1685,	// (0x0004bf0a) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0005a3bf) popup_blid2_search_window_t

0x38b7,	// (0x0004e13c) main_browser_pane_g1

0x35d4,	// (0x0004de59) main_browser_pane_ParamLimits

0xa67e,	// (0x00054f03) bg_button_pane_cp011_ParamLimits

0xa970,	// (0x000551f5) cell_vitu2_function_pane_g1_ParamLimits

0xe581,	// (0x00058e06) bg_popup_sub_pane_cp22_ParamLimits

0xb262,	// (0x00055ae7) input_focus_pane_cp08_ParamLimits

0xb279,	// (0x00055afe) popup_vitu2_query_button_pane_ParamLimits

0xb279,	// (0x00055afe) popup_vitu2_query_button_pane

0xb28a,	// (0x00055b0f) popup_vitu2_query_input_button_pane

0x121e,	// (0x0004baa3) popup_vitu2_query_window_g1_ParamLimits

0xb294,	// (0x00055b19) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0005a2c0) popup_vitu2_query_window_g_ParamLimits

0x0462,	// (0x0004ace7) bg_button_pane_cp026

0xb944,	// (0x000561c9) popup_vitu2_query_input_button_pane_g1

0x0462,	// (0x0004ace7) bg_button_pane_cp025

0x1693,	// (0x0004bf18) popup_vitu2_query_button_pane_t1

0x90c8,	// (0x0005394d) main_mp3_pane_t6

0x90d8,	// (0x0005395d) popup_slider_window_cp01

0xa59f,	// (0x00054e24) cam4_battery_pane

0xa68c,	// (0x00054f11) cam4_battery_pane_cp02

0xb6c5,	// (0x00055f4a) cam4_battery_pane_cp01

0xb6c5,	// (0x00055f4a) cam4_battery_pane_cp03

0x16a1,	// (0x0004bf26) cam4_battery_pane_g1

0xe9c8,	// (0x0005924d) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0005a3c4) cam4_battery_pane_g

0xe894,	// (0x00059119) popup_blid_sat_info2_window_t11

0x7842,	// (0x000520c7) aid_size_touch_mv_arrow_left_ParamLimits

0x786b,	// (0x000520f0) aid_size_touch_mv_arrow_right_ParamLimits

0x4013,	// (0x0004e898) navi_pane_g1_ParamLimits

0x7894,	// (0x00052119) navi_pane_g2_ParamLimits

0x78c2,	// (0x00052147) navi_pane_g3_ParamLimits

0xf409,	// (0x00059c8e) navi_pane_g_ParamLimits

0x791c,	// (0x000521a1) navi_pane_mv_t1_ParamLimits

0x9b79,	// (0x000543fe) grid_imed_effect_pane_ParamLimits

0x65a0,	// (0x00050e25) aid_placing_vt_slider_lsc

0x3808,	// (0x0004e08d) aid_placing_vt_slider_prt

0x4781,	// (0x0004f006) bg_tb_trans_pane_cp01_ParamLimits

0xeb4b,	// (0x000593d0) popup_image_details_window_g1_ParamLimits

0xeb5e,	// (0x000593e3) popup_image_details_window_g2_ParamLimits

0xeb73,	// (0x000593f8) popup_image_details_window_g3_ParamLimits

0xeb73,	// (0x000593f8) popup_image_details_window_g3

0xf73c,	// (0x00059fc1) popup_image_details_window_g_ParamLimits

0xeb87,	// (0x0005940c) popup_image_details_window_t1_ParamLimits

0xeb99,	// (0x0005941e) popup_image_details_window_t2_ParamLimits

0xebb2,	// (0x00059437) popup_image_details_window_t3_ParamLimits

0xebc6,	// (0x0005944b) popup_image_details_window_t4_ParamLimits

0xebe1,	// (0x00059466) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x00059fc8) popup_image_details_window_t_ParamLimits

0xb5e9,	// (0x00055e6e) cl_header_name_pane_ParamLimits

0xb5e9,	// (0x00055e6e) cl_header_name_pane

0xb94c,	// (0x000561d1) cl_header_name_pane_t1_ParamLimits

0xb94c,	// (0x000561d1) cl_header_name_pane_t1

0xb963,	// (0x000561e8) cl_header_name_pane_t2_ParamLimits

0xb963,	// (0x000561e8) cl_header_name_pane_t2

0xb98d,	// (0x00056212) cl_header_name_pane_t3_ParamLimits

0xb98d,	// (0x00056212) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0005a3c9) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0005a3c9) cl_header_name_pane_t

0x78ed,	// (0x00052172) navi_pane_mv_g2_ParamLimits

0x0f0c,	// (0x0004b791) field_vitu2_entry_pane_g1_ParamLimits

0x0f18,	// (0x0004b79d) field_vitu2_entry_pane_g2_ParamLimits

0x0f24,	// (0x0004b7a9) field_vitu2_entry_pane_g3_ParamLimits

0x0f24,	// (0x0004b7a9) field_vitu2_entry_pane_g3

0xf93a,	// (0x0005a1bf) field_vitu2_entry_pane_g_ParamLimits

0xa900,	// (0x00055185) cell_vitu2_itu_pane_g1_ParamLimits

0xa910,	// (0x00055195) cell_vitu2_itu_pane_g2_ParamLimits

0xa910,	// (0x00055195) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0005a1cb) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0005a1cb) cell_vitu2_itu_pane_g

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp05_ParamLimits

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp05

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp03

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp04

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp10_ParamLimits

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp10

0xb58b,	// (0x00055e10) bg_vkb2_func_pane_cp08

0xb571,	// (0x00055df6) bg_vkb2_func_pane_cp06

0xb57f,	// (0x00055e04) bg_vkb2_func_pane_cp07

0x1598,	// (0x0004be1d) bg_vkb2_func_pane_cp11_ParamLimits

0x1598,	// (0x0004be1d) bg_vkb2_func_pane_cp11

0x15ad,	// (0x0004be32) bg_vkb2_func_pane_cp12_ParamLimits

0x15ad,	// (0x0004be32) bg_vkb2_func_pane_cp12

0x0462,	// (0x0004ace7) bg_vkb2_func_pane_cp09

0x0f61,	// (0x0004b7e6) bg_vkb2_func_pane_g1

0x39c8,	// (0x0004e24d) bg_vkb2_func_pane_g2

0x0f69,	// (0x0004b7ee) bg_vkb2_func_pane_g3

0x0f71,	// (0x0004b7f6) bg_vkb2_func_pane_g4

0x11c9,	// (0x0004ba4e) bg_vkb2_func_pane_g5

0x0f89,	// (0x0004b80e) bg_vkb2_func_pane_g6

0x0f91,	// (0x0004b816) bg_vkb2_func_pane_g7

0x0f81,	// (0x0004b806) bg_vkb2_func_pane_g8

0x39a8,	// (0x0004e22d) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0005a3d0) bg_vkb2_func_pane_g

0xb89b,	// (0x00056120) blid2_tripm_pane_g6_ParamLimits

0xb89b,	// (0x00056120) blid2_tripm_pane_g6

0x0cc3,	// (0x0004b548) mp4_progress_pane_g1

0xb8f5,	// (0x0005617a) blid2_tripm_values_pane_ParamLimits

0xb8f5,	// (0x0005617a) blid2_tripm_values_pane

0xb9b2,	// (0x00056237) blid2_tripm_values_pane_t1

0xb9c0,	// (0x00056245) blid2_tripm_values_pane_t2

0xb9ce,	// (0x00056253) blid2_tripm_values_pane_t3

0xb9dc,	// (0x00056261) blid2_tripm_values_pane_t4

0xb9ea,	// (0x0005626f) blid2_tripm_values_pane_t5

0xb9f8,	// (0x0005627d) blid2_tripm_values_pane_t6

0xba06,	// (0x0005628b) blid2_tripm_values_pane_t7

0xba14,	// (0x00056299) blid2_tripm_values_pane_t8

0xba22,	// (0x000562a7) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0005a3e3) blid2_tripm_values_pane_t

0x65e0,	// (0x00050e65) call_video_pane_t1_ParamLimits

0x6601,	// (0x00050e86) call_video_pane_t2_ParamLimits

0xf292,	// (0x00059b17) call_video_pane_t_ParamLimits

0x7e54,	// (0x000526d9) msg_header_pane_g1_ParamLimits

0x422e,	// (0x0004eab3) msg_header_pane_g2_ParamLimits

0x422e,	// (0x0004eab3) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x00059d31) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x00059d31) msg_header_pane_g

0x35d4,	// (0x0004de59) main_clock2_pane_ParamLimits

0x9909,	// (0x0005418e) grid_clock2_toolbar_pane_ParamLimits

0x9909,	// (0x0005418e) grid_clock2_toolbar_pane

0x9909,	// (0x0005418e) listscroll_clock2_pane_ParamLimits

0x9909,	// (0x0005418e) listscroll_clock2_pane

0x99b6,	// (0x0005423b) main_clock2_pane_t3_ParamLimits

0x99b6,	// (0x0005423b) main_clock2_pane_t3

0x99c8,	// (0x0005424d) main_clock2_pane_t4_ParamLimits

0x99c8,	// (0x0005424d) main_clock2_pane_t4

0x16ab,	// (0x0004bf30) cell_clock2_toolbar_pane

0x16b3,	// (0x0004bf38) cell_clock2_toolbar_pane_cp01

0x16b3,	// (0x0004bf38) cell_clock2_toolbar_pane_cp02

0x16bb,	// (0x0004bf40) cell_clock2_toolbar_pane_cp03

0x16c3,	// (0x0004bf48) list_clock2_pane

0x3f6a,	// (0x0004e7ef) scroll_pane_cp10

0x16cb,	// (0x0004bf50) list_single_clock2_pane_ParamLimits

0x16cb,	// (0x0004bf50) list_single_clock2_pane

0x40b3,	// (0x0004e938) list_highlight_pane_cp08

0x16d8,	// (0x0004bf5d) list_single_clock2_pane_t1

0x16e6,	// (0x0004bf6b) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0005a3f6) list_single_clock2_pane_t

0x0462,	// (0x0004ace7) bg_button_pane_cp10

0x16f4,	// (0x0004bf79) cell_clock2_toolbar_pane_g1

0x7ef1,	// (0x00052776) aid_main_viewer_pane_g1_ParamLimits

0x7ef1,	// (0x00052776) aid_main_viewer_pane_g1

0x7efd,	// (0x00052782) aid_main_viewer_pane_g2_ParamLimits

0x7efd,	// (0x00052782) aid_main_viewer_pane_g2

0x7f09,	// (0x0005278e) aid_main_viewer_pane_g3_ParamLimits

0x7f09,	// (0x0005278e) aid_main_viewer_pane_g3

0x7f1a,	// (0x0005279f) aid_main_viewer_pane_g4_ParamLimits

0x7f1a,	// (0x0005279f) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x00059d42) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x00059d42) aid_main_viewer_pane_g

0x868e,	// (0x00052f13) main_calc_pane_ParamLimits

0x869b,	// (0x00052f20) main_dialer2_pane_ParamLimits

0x0462,	// (0x0004ace7) main_cam6_pane

0x0462,	// (0x0004ace7) main_vid6_pane

0x9915,	// (0x0005419a) listscroll_gen_pane_cp06_ParamLimits

0x9915,	// (0x0005419a) listscroll_gen_pane_cp06

0x99da,	// (0x0005425f) main_clock2_pane_t5_ParamLimits

0x99da,	// (0x0005425f) main_clock2_pane_t5

0x9a23,	// (0x000542a8) aid_call2_pane_cp10_ParamLimits

0x9a35,	// (0x000542ba) aid_call_pane_cp10_ParamLimits

0x3fe8,	// (0x0004e86d) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3fe8,	// (0x0004e86d) popup_clock_analogue_window_cp10_g2_ParamLimits

0x9a47,	// (0x000542cc) popup_clock_analogue_window_cp10_g3_ParamLimits

0x9a47,	// (0x000542cc) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3fe8,	// (0x0004e86d) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0005a078) popup_clock_analogue_window_cp10_g_ParamLimits

0x9a59,	// (0x000542de) popup_clock_analogue_window_cp10_t1_ParamLimits

0xa202,	// (0x00054a87) cell_dialer2_keypad_pane_g2_ParamLimits

0xa202,	// (0x00054a87) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0005a15e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0005a15e) cell_dialer2_keypad_pane_g

0xa21e,	// (0x00054aa3) cell_dialer2_keypad_pane_t1

0xac3b,	// (0x000554c0) main_cset_text2_pane_ParamLimits

0xac3b,	// (0x000554c0) main_cset_text2_pane

0x140a,	// (0x0004bc8f) area_vitu2_query_pane_g1_ParamLimits

0xb510,	// (0x00055d95) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0005a313) area_vitu2_query_pane_g_ParamLimits

0x148e,	// (0x0004bd13) area_vitu2_query_pane_t7_ParamLimits

0x148e,	// (0x0004bd13) area_vitu2_query_pane_t7

0xb571,	// (0x00055df6) bg_button_pane_cp018_ParamLimits

0xb57f,	// (0x00055e04) bg_button_pane_cp021_ParamLimits

0xb58b,	// (0x00055e10) bg_button_pane_cp022_ParamLimits

0xb58b,	// (0x00055e10) bg_vkb2_func_pane_cp08_ParamLimits

0xb571,	// (0x00055df6) bg_vkb2_func_pane_cp06_ParamLimits

0xb57f,	// (0x00055e04) bg_vkb2_func_pane_cp07_ParamLimits

0xb59c,	// (0x00055e21) input_focus_pane_cp09_ParamLimits

0xba30,	// (0x000562b5) cam6_autofocus_pane_ParamLimits

0xba30,	// (0x000562b5) cam6_autofocus_pane

0xba52,	// (0x000562d7) cam6_image_uncrop_pane_ParamLimits

0xba52,	// (0x000562d7) cam6_image_uncrop_pane

0xba7f,	// (0x00056304) cam6_indi_pane_ParamLimits

0xba7f,	// (0x00056304) cam6_indi_pane

0xba99,	// (0x0005631e) cam6_mode_pane_ParamLimits

0xba99,	// (0x0005631e) cam6_mode_pane

0xbaad,	// (0x00056332) cam6_timer_pane_ParamLimits

0xbaad,	// (0x00056332) cam6_timer_pane

0xbab9,	// (0x0005633e) cam6_zoom_pane_ParamLimits

0xbab9,	// (0x0005633e) cam6_zoom_pane

0xbad1,	// (0x00056356) cam6_mode_pane_g1_ParamLimits

0xbad1,	// (0x00056356) cam6_mode_pane_g1

0xbadd,	// (0x00056362) cam6_mode_pane_g2_ParamLimits

0xbadd,	// (0x00056362) cam6_mode_pane_g2

0xbae9,	// (0x0005636e) cam6_mode_pane_g3_ParamLimits

0xbae9,	// (0x0005636e) cam6_mode_pane_g3

0xbaf5,	// (0x0005637a) cam6_mode_pane_g4_ParamLimits

0xbaf5,	// (0x0005637a) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0005a3fb) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0005a3fb) cam6_mode_pane_g

0x16fc,	// (0x0004bf81) bg_tb_trans_pane_cp08_ParamLimits

0x16fc,	// (0x0004bf81) bg_tb_trans_pane_cp08

0x170a,	// (0x0004bf8f) cam6_battery_pane_ParamLimits

0x170a,	// (0x0004bf8f) cam6_battery_pane

0x1720,	// (0x0004bfa5) cam6_indi_pane_g1_ParamLimits

0x1720,	// (0x0004bfa5) cam6_indi_pane_g1

0x1732,	// (0x0004bfb7) cam6_indi_pane_g2_ParamLimits

0x1732,	// (0x0004bfb7) cam6_indi_pane_g2

0x1744,	// (0x0004bfc9) cam6_indi_pane_g3_ParamLimits

0x1744,	// (0x0004bfc9) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0005a404) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0005a404) cam6_indi_pane_g

0x1756,	// (0x0004bfdb) cam6_indi_pane_t1_ParamLimits

0x1756,	// (0x0004bfdb) cam6_indi_pane_t1

0xa706,	// (0x00054f8b) cam6_autofocus_pane_g1

0xa6fe,	// (0x00054f83) cam6_autofocus_pane_g2

0xa716,	// (0x00054f9b) cam6_autofocus_pane_g3

0xa70e,	// (0x00054f93) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0005a40b) cam6_autofocus_pane_g

0x177c,	// (0x0004c001) cam6_timer_pane_g1

0x1784,	// (0x0004c009) cam6_timer_pane_t1

0x1792,	// (0x0004c017) cam6_zoom_cont_pane

0x179a,	// (0x0004c01f) cam6_zoom_pane_g1

0x17a2,	// (0x0004c027) cam6_zoom_pane_g2

0xbb01,	// (0x00056386) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0005a414) cam6_zoom_pane_g

0xe9c8,	// (0x0005924d) cam6_battery_pane_g1

0xe9c8,	// (0x0005924d) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x00059f85) cam6_battery_pane_g

0x17aa,	// (0x0004c02f) cam6_zoom_cont_pane_g1

0x17b3,	// (0x0004c038) cam6_zoom_cont_pane_g2

0x17bc,	// (0x0004c041) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0005a41b) cam6_zoom_cont_pane_g

0xbb1e,	// (0x000563a3) cam6_mode_pane_cp_ParamLimits

0xbb1e,	// (0x000563a3) cam6_mode_pane_cp

0xbb32,	// (0x000563b7) cam6_zoom_pane_cp_ParamLimits

0xbb32,	// (0x000563b7) cam6_zoom_pane_cp

0xbb4a,	// (0x000563cf) vid6_image_uncrop_cif_pane_ParamLimits

0xbb4a,	// (0x000563cf) vid6_image_uncrop_cif_pane

0xbb76,	// (0x000563fb) vid6_image_uncrop_nhd_pane_ParamLimits

0xbb76,	// (0x000563fb) vid6_image_uncrop_nhd_pane

0xbb93,	// (0x00056418) vid6_image_uncrop_vga_pane_ParamLimits

0xbb93,	// (0x00056418) vid6_image_uncrop_vga_pane

0xbbb2,	// (0x00056437) vid6_image_uncrop_wvga_pane_ParamLimits

0xbbb2,	// (0x00056437) vid6_image_uncrop_wvga_pane

0xbbcf,	// (0x00056454) vid6_indi_pane_ParamLimits

0xbbcf,	// (0x00056454) vid6_indi_pane

0x16fc,	// (0x0004bf81) bg_tb_trans_pane_cp09_ParamLimits

0x16fc,	// (0x0004bf81) bg_tb_trans_pane_cp09

0x17d4,	// (0x0004c059) cam6_battery_pane_cp_ParamLimits

0x17d4,	// (0x0004c059) cam6_battery_pane_cp

0x17e0,	// (0x0004c065) vid6_indi_pane_g1_ParamLimits

0x17e0,	// (0x0004c065) vid6_indi_pane_g1

0x17f2,	// (0x0004c077) vid6_indi_pane_g2_ParamLimits

0x17f2,	// (0x0004c077) vid6_indi_pane_g2

0x1804,	// (0x0004c089) vid6_indi_pane_g3_ParamLimits

0x1804,	// (0x0004c089) vid6_indi_pane_g3

0x1819,	// (0x0004c09e) vid6_indi_pane_g4_ParamLimits

0x1819,	// (0x0004c09e) vid6_indi_pane_g4

0x182e,	// (0x0004c0b3) vid6_indi_pane_g5_ParamLimits

0x182e,	// (0x0004c0b3) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0005a422) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0005a422) vid6_indi_pane_g

0x1848,	// (0x0004c0cd) vid6_indi_pane_t1_ParamLimits

0x1848,	// (0x0004c0cd) vid6_indi_pane_t1

0x185e,	// (0x0004c0e3) vid6_indi_pane_t2_ParamLimits

0x185e,	// (0x0004c0e3) vid6_indi_pane_t2

0x1886,	// (0x0004c10b) vid6_indi_pane_t3_ParamLimits

0x1886,	// (0x0004c10b) vid6_indi_pane_t3

0x18ae,	// (0x0004c133) vid6_indi_pane_t4_ParamLimits

0x18ae,	// (0x0004c133) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0005a42d) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0005a42d) vid6_indi_pane_t

0x18d2,	// (0x0004c157) wait_bar_pane_cp08

0xbbf4,	// (0x00056479) main_cset_text2_pane_t1_ParamLimits

0xbbf4,	// (0x00056479) main_cset_text2_pane_t1

0xbb09,	// (0x0005638e) listscroll_gen_pane_cp06_t1_ParamLimits

0xbb09,	// (0x0005638e) listscroll_gen_pane_cp06_t1

0x0462,	// (0x0004ace7) main_cam6_set_pane

0xa591,	// (0x00054e16) bg_tb_trans_pane_cp06_ParamLimits

0xa5a7,	// (0x00054e2c) cam4_indicators_pane_g1_ParamLimits

0xa5b8,	// (0x00054e3d) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0005a19b) cam4_indicators_pane_g_ParamLimits

0xa5d6,	// (0x00054e5b) cam4_indicators_pane_t1_ParamLimits

0xa67e,	// (0x00054f03) bg_tb_trans_pane_cp07_ParamLimits

0xa696,	// (0x00054f1b) vid4_indicators_pane_g1_ParamLimits

0xa6a7,	// (0x00054f2c) vid4_indicators_pane_g2_ParamLimits

0xa6b8,	// (0x00054f3d) vid4_indicators_pane_g3_ParamLimits

0xa6c9,	// (0x00054f4e) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0005a1ad) vid4_indicators_pane_g_ParamLimits

0xa6e5,	// (0x00054f6a) vid4_indicators_pane_t1_ParamLimits

0xb6cd,	// (0x00055f52) vid4_progress_pane_g1_ParamLimits

0xb6dd,	// (0x00055f62) vid4_progress_pane_g2_ParamLimits

0x3c6d,	// (0x0004e4f2) vid4_progress_pane_g3_ParamLimits

0xb6ed,	// (0x00055f72) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0005a35e) vid4_progress_pane_g_ParamLimits

0xb70b,	// (0x00055f90) vid4_progress_pane_t1_ParamLimits

0xb720,	// (0x00055fa5) vid4_progress_pane_t2_ParamLimits

0xb736,	// (0x00055fbb) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0005a369) vid4_progress_pane_t_ParamLimits

0xb74b,	// (0x00055fd0) wait_bar_pane_cp07_ParamLimits

0xbc27,	// (0x000564ac) main_cam6_set_pane_g2_ParamLimits

0xbc27,	// (0x000564ac) main_cam6_set_pane_g2

0xbc33,	// (0x000564b8) main_cset6_listscroll_pane_ParamLimits

0xbc33,	// (0x000564b8) main_cset6_listscroll_pane

0xbc5e,	// (0x000564e3) main_cset6_slider_pane_ParamLimits

0xbc5e,	// (0x000564e3) main_cset6_slider_pane

0xbc6a,	// (0x000564ef) main_cset6_text2_pane_ParamLimits

0xbc6a,	// (0x000564ef) main_cset6_text2_pane

0x18e1,	// (0x0004c166) main_cset6_text_pane

0x18e9,	// (0x0004c16e) main_cset_list_pane_copy1_ParamLimits

0x18e9,	// (0x0004c16e) main_cset_list_pane_copy1

0x18f9,	// (0x0004c17e) scroll_pane_cp028_copy1

0xbc7d,	// (0x00056502) cset_list_set_pane_copy1

0xbc90,	// (0x00056515) aid_position_infowindow_above_copy1

0xbc98,	// (0x0005651d) aid_position_infowindow_below_copy1

0xbca0,	// (0x00056525) cset_list_set_pane_g1_copy1

0x1160,	// (0x0004b9e5) cset_list_set_pane_g3_copy1_ParamLimits

0x1160,	// (0x0004b9e5) cset_list_set_pane_g3_copy1

0xaf20,	// (0x000557a5) cset_list_set_pane_t1_copy1_ParamLimits

0xaf20,	// (0x000557a5) cset_list_set_pane_t1_copy1

0x4781,	// (0x0004f006) list_highlight_pane_cp021_copy1_ParamLimits

0x4781,	// (0x0004f006) list_highlight_pane_cp021_copy1

0x1902,	// (0x0004c187) cset6_slider_pane_ParamLimits

0x1902,	// (0x0004c187) cset6_slider_pane

0x192e,	// (0x0004c1b3) main_cset6_slider_pane_g1_ParamLimits

0x192e,	// (0x0004c1b3) main_cset6_slider_pane_g1

0xbca8,	// (0x0005652d) main_cset6_slider_pane_g2_ParamLimits

0xbca8,	// (0x0005652d) main_cset6_slider_pane_g2

0x1956,	// (0x0004c1db) main_cset6_slider_pane_g3_ParamLimits

0x1956,	// (0x0004c1db) main_cset6_slider_pane_g3

0xbcd0,	// (0x00056555) main_cset6_slider_pane_g4_ParamLimits

0xbcd0,	// (0x00056555) main_cset6_slider_pane_g4

0xbcdc,	// (0x00056561) main_cset6_slider_pane_g5_ParamLimits

0xbcdc,	// (0x00056561) main_cset6_slider_pane_g5

0x1090,	// (0x0004b915) main_cset6_slider_pane_g7_ParamLimits

0x1090,	// (0x0004b915) main_cset6_slider_pane_g7

0x109c,	// (0x0004b921) main_cset6_slider_pane_g8_ParamLimits

0x109c,	// (0x0004b921) main_cset6_slider_pane_g8

0xbcea,	// (0x0005656f) main_cset6_slider_pane_g9_ParamLimits

0xbcea,	// (0x0005656f) main_cset6_slider_pane_g9

0xbcf6,	// (0x0005657b) main_cset6_slider_pane_g10_ParamLimits

0xbcf6,	// (0x0005657b) main_cset6_slider_pane_g10

0xbd02,	// (0x00056587) main_cset6_slider_pane_g11_ParamLimits

0xbd02,	// (0x00056587) main_cset6_slider_pane_g11

0xbd0e,	// (0x00056593) main_cset6_slider_pane_g12_ParamLimits

0xbd0e,	// (0x00056593) main_cset6_slider_pane_g12

0xbd1a,	// (0x0005659f) main_cset6_slider_pane_g13_ParamLimits

0xbd1a,	// (0x0005659f) main_cset6_slider_pane_g13

0xbd26,	// (0x000565ab) main_cset6_slider_pane_g14_ParamLimits

0xbd26,	// (0x000565ab) main_cset6_slider_pane_g14

0xbd32,	// (0x000565b7) main_cset6_slider_pane_g15_ParamLimits

0xbd32,	// (0x000565b7) main_cset6_slider_pane_g15

0xbd4a,	// (0x000565cf) main_cset6_slider_pane_g16_ParamLimits

0xbd4a,	// (0x000565cf) main_cset6_slider_pane_g16

0xbd58,	// (0x000565dd) main_cset6_slider_pane_g17_ParamLimits

0xbd58,	// (0x000565dd) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0005a436) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0005a436) main_cset6_slider_pane_g

0x1962,	// (0x0004c1e7) main_cset6_slider_pane_t1_ParamLimits

0x1962,	// (0x0004c1e7) main_cset6_slider_pane_t1

0xbd7e,	// (0x00056603) main_cset6_slider_pane_t2_ParamLimits

0xbd7e,	// (0x00056603) main_cset6_slider_pane_t2

0xbda9,	// (0x0005662e) main_cset6_slider_pane_t3_ParamLimits

0xbda9,	// (0x0005662e) main_cset6_slider_pane_t3

0xbdd4,	// (0x00056659) main_cset6_slider_pane_t4_ParamLimits

0xbdd4,	// (0x00056659) main_cset6_slider_pane_t4

0xbdff,	// (0x00056684) main_cset6_slider_pane_t5_ParamLimits

0xbdff,	// (0x00056684) main_cset6_slider_pane_t5

0x19a3,	// (0x0004c228) main_cset6_slider_pane_t7_ParamLimits

0x19a3,	// (0x0004c228) main_cset6_slider_pane_t7

0xbe2c,	// (0x000566b1) main_cset6_slider_pane_t8_ParamLimits

0xbe2c,	// (0x000566b1) main_cset6_slider_pane_t8

0xbe50,	// (0x000566d5) main_cset6_slider_pane_t9_ParamLimits

0xbe50,	// (0x000566d5) main_cset6_slider_pane_t9

0xbe74,	// (0x000566f9) main_cset6_slider_pane_t10_ParamLimits

0xbe74,	// (0x000566f9) main_cset6_slider_pane_t10

0xbe98,	// (0x0005671d) main_cset6_slider_pane_t11_ParamLimits

0xbe98,	// (0x0005671d) main_cset6_slider_pane_t11

0x19d9,	// (0x0004c25e) main_cset6_slider_pane_t14_ParamLimits

0x19d9,	// (0x0004c25e) main_cset6_slider_pane_t14

0x1a12,	// (0x0004c297) main_cset6_slider_pane_t15_ParamLimits

0x1a12,	// (0x0004c297) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0005a45b) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0005a45b) main_cset6_slider_pane_t

0x116f,	// (0x0004b9f4) cset_slider_pane_g1_copy1

0x1178,	// (0x0004b9fd) cset_slider_pane_g2_copy1

0x1181,	// (0x0004ba06) cset_slider_pane_g3_copy1

0x0462,	// (0x0004ace7) bg_popup_sub_pane_cp011_copy1

0x122a,	// (0x0004baaf) main_cset_text_pane_g1_copy1

0x1232,	// (0x0004bab7) main_cset_text_pane_t1_copy1

0x1240,	// (0x0004bac5) main_cset_text_pane_t2_copy1

0x124e,	// (0x0004bad3) main_cset_text_pane_t3_copy1

0x125c,	// (0x0004bae1) main_cset_text_pane_t4_copy1

0x126a,	// (0x0004baef) main_cset_text_pane_t5_copy1

0x1278,	// (0x0004bafd) main_cset_text_pane_t6_copy1

0x1286,	// (0x0004bb0b) main_cset_text_pane_t7_copy1

0xbebc,	// (0x00056741) main_cset_text2_pane_t1_copy1

0x0462,	// (0x0004ace7) main_ncimui_pane

0x86da,	// (0x00052f5f) popup_query_ncimui_window_ParamLimits

0x86da,	// (0x00052f5f) popup_query_ncimui_window

0x08e3,	// (0x0004b168) field_cale_ev2_pane_g4_ParamLimits

0x08e3,	// (0x0004b168) field_cale_ev2_pane_g4

0x9f22,	// (0x000547a7) cell_video_dialer_keypad_pane_g2_ParamLimits

0x9f22,	// (0x000547a7) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0005a139) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0005a139) cell_video_dialer_keypad_pane_g

0x9f3a,	// (0x000547bf) cell_video_dialer_keypad_pane_t1

0x0462,	// (0x0004ace7) bg_popup_window_pane_cp012

0x3e39,	// (0x0004e6be) heading_pane_cp06

0x1b3a,	// (0x0004c3bf) ncim_query_content_pane

0x0462,	// (0x0004ace7) bg_popup_heading_pane_cp01

0x1b42,	// (0x0004c3c7) ncim_heading_pane_t1

0x1b50,	// (0x0004c3d5) ncim_indicator_popup_pane

0x1b62,	// (0x0004c3e7) ncim_query_button_pane

0x1b76,	// (0x0004c3fb) ncim_query_content_pane_t1

0x1b88,	// (0x0004c40d) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0005a49a) ncim_query_content_pane_t

0x1bc2,	// (0x0004c447) ncim_query_list_pane

0x1bd4,	// (0x0004c459) ncim_query_popup_pane

0x1b50,	// (0x0004c3d5) ncim_indicator_popup_pane_ParamLimits

0xbfde,	// (0x00056863) ncim_query_content_pane_g1_ParamLimits

0xbfde,	// (0x00056863) ncim_query_content_pane_g1

0x1b76,	// (0x0004c3fb) ncim_query_content_pane_t1_ParamLimits

0x1b88,	// (0x0004c40d) ncim_query_content_pane_t2_ParamLimits

0xbfea,	// (0x0005686f) ncim_query_content_pane_t3_ParamLimits

0xbfea,	// (0x0005686f) ncim_query_content_pane_t3

0xc007,	// (0x0005688c) ncim_query_content_pane_t4_ParamLimits

0xc007,	// (0x0005688c) ncim_query_content_pane_t4

0xc024,	// (0x000568a9) ncim_query_content_pane_t5_ParamLimits

0xc024,	// (0x000568a9) ncim_query_content_pane_t5

0x1b9a,	// (0x0004c41f) ncim_query_content_pane_t6_ParamLimits

0x1b9a,	// (0x0004c41f) ncim_query_content_pane_t6

0xfc15,	// (0x0005a49a) ncim_query_content_pane_t_ParamLimits

0x1bc2,	// (0x0004c447) ncim_query_list_pane_ParamLimits

0x1bd4,	// (0x0004c459) ncim_query_popup_pane_ParamLimits

0x1be8,	// (0x0004c46d) wait_bar_pane_cp04

0x0462,	// (0x0004ace7) input_focus_pane_cp011

0x1bf0,	// (0x0004c475) ncim_query_popup_pane_t1

0x1bfe,	// (0x0004c483) ncim_list_query_list_pane_ParamLimits

0x1bfe,	// (0x0004c483) ncim_list_query_list_pane

0x0462,	// (0x0004ace7) bg_button_pane_cp027

0x1c0b,	// (0x0004c490) ncim_query_button_pane_g1

0x0462,	// (0x0004ace7) list_highlight_pane_cp012

0x1c15,	// (0x0004c49a) ncim_list_query_list_pane_g1

0x1c1d,	// (0x0004c4a2) ncim_list_query_list_pane_t1

0xa5c7,	// (0x00054e4c) cam4_indicators_pane_g3_ParamLimits

0xa5c7,	// (0x00054e4c) cam4_indicators_pane_g3

0xa6d5,	// (0x00054f5a) vid4_indicators_pane_g5_ParamLimits

0xa6d5,	// (0x00054f5a) vid4_indicators_pane_g5

0xb6fc,	// (0x00055f81) vid4_progress_pane_g5_ParamLimits

0xb6fc,	// (0x00055f81) vid4_progress_pane_g5

0xbef7,	// (0x0005677c) main_ncimui_pane_g1

0xbf4d,	// (0x000567d2) ncimui_group_query_pane_ParamLimits

0xbf4d,	// (0x000567d2) ncimui_group_query_pane

0xbf89,	// (0x0005680e) ncimui_list_pane_ParamLimits

0xbf89,	// (0x0005680e) ncimui_list_pane

0xbfaa,	// (0x0005682f) ncimui_text_pane_ParamLimits

0xbfaa,	// (0x0005682f) ncimui_text_pane

0xc041,	// (0x000568c6) ncimui_text_pane_t1_ParamLimits

0xc041,	// (0x000568c6) ncimui_text_pane_t1

0x1c2b,	// (0x0004c4b0) ncimui_list_single_graphic_pane_ParamLimits

0x1c2b,	// (0x0004c4b0) ncimui_list_single_graphic_pane

0xc060,	// (0x000568e5) ncimui_query_pane_ParamLimits

0xc060,	// (0x000568e5) ncimui_query_pane

0x0462,	// (0x0004ace7) list_highlight_pane_cp013

0x1c3b,	// (0x0004c4c0) ncim_list_query_list_pane_t1_copy1

0x1c15,	// (0x0004c49a) ncim_list_single_graphic_pane_g1

0x1c49,	// (0x0004c4ce) ncim_query_button_pane_cp01

0x1c55,	// (0x0004c4da) ncim_query_entry_pane_ParamLimits

0x1c55,	// (0x0004c4da) ncim_query_entry_pane

0x1c68,	// (0x0004c4ed) ncimui_query_pane_g1

0x1c74,	// (0x0004c4f9) ncimui_query_pane_t1_ParamLimits

0x1c74,	// (0x0004c4f9) ncimui_query_pane_t1

0x4781,	// (0x0004f006) input_focus_pane_cp012

0x1c8d,	// (0x0004c512) ncim_query_entry_pane_t1

0x35d4,	// (0x0004de59) main_im_pane_ParamLimits

0x4781,	// (0x0004f006) main_mobtv_pane_ParamLimits

0x4781,	// (0x0004f006) main_mobtv_pane

0xbd66,	// (0x000565eb) main_cset6_slider_pane_g18_ParamLimits

0xbd66,	// (0x000565eb) main_cset6_slider_pane_g18

0xbd72,	// (0x000565f7) main_cset6_slider_pane_g19_ParamLimits

0xbd72,	// (0x000565f7) main_cset6_slider_pane_g19

0x0f24,	// (0x0004b7a9) bg_main_mobtv_pane_ParamLimits

0x0f24,	// (0x0004b7a9) bg_main_mobtv_pane

0xc073,	// (0x000568f8) main_mobtv_info_pane

0xc07e,	// (0x00056903) main_mobtv_loading_pane_ParamLimits

0xc07e,	// (0x00056903) main_mobtv_loading_pane

0x1cad,	// (0x0004c532) main_mobtv_pg_channel_list_pane

0x1cb7,	// (0x0004c53c) main_mobtv_pg_hdr_pane

0xc08b,	// (0x00056910) main_mobtv_programe_curr_pane_ParamLimits

0xc08b,	// (0x00056910) main_mobtv_programe_curr_pane

0xc098,	// (0x0005691d) main_mobtv_programe_next_pane_ParamLimits

0xc098,	// (0x0005691d) main_mobtv_programe_next_pane

0x1cc0,	// (0x0004c545) popup_mobtv_noti_window

0xe9c8,	// (0x0005924d) main_tv_pg_hdr_pane_g1

0x1cc8,	// (0x0004c54d) main_tv_pg_hdr_pane_g2

0x1cd0,	// (0x0004c555) main_tv_pg_hdr_pane_g3

0x1cd8,	// (0x0004c55d) main_tv_pg_hdr_pane_g4

0x1ce0,	// (0x0004c565) main_tv_pg_hdr_pane_g5

0x1cea,	// (0x0004c56f) main_tv_pg_hdr_pane_g6

0x1cf4,	// (0x0004c579) main_tv_pg_hdr_pane_g7

0x1cfe,	// (0x0004c583) main_tv_pg_hdr_pane_g8

0x1d08,	// (0x0004c58d) main_tv_pg_hdr_pane_g9

0x1d12,	// (0x0004c597) main_tv_pg_hdr_pane_g10

0x1d1c,	// (0x0004c5a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0005a4a7) main_tv_pg_hdr_pane_g

0x1d26,	// (0x0004c5ab) main_tv_pg_hdr_pane_t1

0x1d34,	// (0x0004c5b9) main_tv_pg_hdr_pane_t2

0x1d42,	// (0x0004c5c7) main_tv_pg_hdr_pane_t3

0x1d52,	// (0x0004c5d7) main_tv_pg_hdr_pane_t4

0x1d62,	// (0x0004c5e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0005a4be) main_tv_pg_hdr_pane_t

0x1d72,	// (0x0004c5f7) single_mobtv_pg_channel_pane_ParamLimits

0x1d72,	// (0x0004c5f7) single_mobtv_pg_channel_pane

0x1d84,	// (0x0004c609) single_mobtv_pg_channel_table_pane

0x1d8d,	// (0x0004c612) single_mobtv_pg_channel_thumb_pane

0x1d96,	// (0x0004c61b) single_tv_pg_channel_pane_g1

0x1d9f,	// (0x0004c624) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0005a4c9) single_tv_pg_channel_pane_g

0xec2b,	// (0x000594b0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xec2b,	// (0x000594b0) bg_single_mobtv_pg_channel_thumb_pane

0x1da8,	// (0x0004c62d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x1da8,	// (0x0004c62d) single_mobtv_pg_channel_thumb_pane_g1

0x1db6,	// (0x0004c63b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x1db6,	// (0x0004c63b) single_mobtv_pg_channel_thumb_pane_g2

0x1dc2,	// (0x0004c647) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x1dc2,	// (0x0004c647) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0005a4ce) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0005a4ce) single_mobtv_pg_channel_thumb_pane_g

0x1dce,	// (0x0004c653) single_mobtv_pg_channel_thumb_pane_t1

0x1ddc,	// (0x0004c661) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0005a4d5) single_mobtv_pg_channel_thumb_pane_t

0xe9c8,	// (0x0005924d) bg_single_mobtv_pg_channel_table_pane_g1

0xe9c8,	// (0x0005924d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x00059f85) bg_single_mobtv_pg_channel_table_pane_g

0x1dea,	// (0x0004c66f) single_mobtv_pg_channel_table_pane_t1

0x1df8,	// (0x0004c67d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0005a4da) single_mobtv_pg_channel_table_pane_t

0xc0ad,	// (0x00056932) main_mobtv_info_pane_g1_ParamLimits

0xc0ad,	// (0x00056932) main_mobtv_info_pane_g1

0xc0c9,	// (0x0005694e) main_mobtv_info_pane_t1_ParamLimits

0xc0c9,	// (0x0005694e) main_mobtv_info_pane_t1

0xc141,	// (0x000569c6) main_mobtv_info_pane_t2_ParamLimits

0xc141,	// (0x000569c6) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0005a4e4) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0005a4e4) main_mobtv_info_pane_t

0xc1d0,	// (0x00056a55) wait_bar_pane_cp05

0xc1e2,	// (0x00056a67) main_mobtv_loading_pane_g1_ParamLimits

0xc1e2,	// (0x00056a67) main_mobtv_loading_pane_g1

0xc1f0,	// (0x00056a75) main_mobtv_loading_pane_g2_ParamLimits

0xc1f0,	// (0x00056a75) main_mobtv_loading_pane_g2

0xc1fc,	// (0x00056a81) main_mobtv_loading_pane_g3_ParamLimits

0xc1fc,	// (0x00056a81) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0005a4eb) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0005a4eb) main_mobtv_loading_pane_g

0x1e06,	// (0x0004c68b) main_mobtv_loading_pane_t1_ParamLimits

0x1e06,	// (0x0004c68b) main_mobtv_loading_pane_t1

0x1e1e,	// (0x0004c6a3) main_mobtv_loading_pane_t2_ParamLimits

0x1e1e,	// (0x0004c6a3) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0005a4f2) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0005a4f2) main_mobtv_loading_pane_t

0xc20a,	// (0x00056a8f) wait_bar_pane_cp06_ParamLimits

0xc20a,	// (0x00056a8f) wait_bar_pane_cp06

0x1e42,	// (0x0004c6c7) main_mobtv_programe_curr_pane_t1

0x1e50,	// (0x0004c6d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0005a4f7) main_mobtv_programe_curr_pane_t

0x1e5e,	// (0x0004c6e3) main_mobtv_programe_next_pane_t1

0x1e6c,	// (0x0004c6f1) main_mobtv_programe_next_pane_t2

0x1e7a,	// (0x0004c6ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0005a4fc) main_mobtv_programe_next_pane_t

0x0462,	// (0x0004ace7) bg_popup_mobtv_noti_window_pane

0x1e88,	// (0x0004c70d) popup_mobtv_noti_window_g1

0x1e90,	// (0x0004c715) popup_mobtv_noti_window_t1

0x1e9e,	// (0x0004c723) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0005a503) popup_mobtv_noti_window_t

0xe9c8,	// (0x0005924d) bg_popup_mobtv_noti_window_pane_g1

0x0462,	// (0x0004ace7) sc_clock_pane

0x0462,	// (0x0004ace7) main_fs_bigclock_pane

0xb8e3,	// (0x00056168) blid2_tripm_pane_t4_ParamLimits

0xb8e3,	// (0x00056168) blid2_tripm_pane_t4

0xc216,	// (0x00056a9b) sc_clock_pane_g1_ParamLimits

0xc216,	// (0x00056a9b) sc_clock_pane_g1

0xc224,	// (0x00056aa9) sc_clock_pane_t1_ParamLimits

0xc224,	// (0x00056aa9) sc_clock_pane_t1

0xc237,	// (0x00056abc) sc_clock_pane_t2_ParamLimits

0xc237,	// (0x00056abc) sc_clock_pane_t2

0xc249,	// (0x00056ace) sc_clock_pane_t3_ParamLimits

0xc249,	// (0x00056ace) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0005a508) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0005a508) sc_clock_pane_t

0xd05a,	// (0x000578df) main_fs_bigclock_indicator_pane_ParamLimits

0xd05a,	// (0x000578df) main_fs_bigclock_indicator_pane

0xc2e7,	// (0x00056b6c) main_fs_bigclock_pane_g1_ParamLimits

0xc2e7,	// (0x00056b6c) main_fs_bigclock_pane_g1

0xd066,	// (0x000578eb) main_fs_bigclock_pane_t1_ParamLimits

0xd066,	// (0x000578eb) main_fs_bigclock_pane_t1

0xd078,	// (0x000578fd) main_fs_bigclock_pane_t2_ParamLimits

0xd078,	// (0x000578fd) main_fs_bigclock_pane_t2

0xd08c,	// (0x00057911) main_fs_bigclock_pane_t3_ParamLimits

0xd08c,	// (0x00057911) main_fs_bigclock_pane_t3

0x0002,

0xfe82,	// (0x0005a707) main_fs_bigclock_pane_t_ParamLimits

0xfe82,	// (0x0005a707) main_fs_bigclock_pane_t

0x2953,	// (0x0004d1d8) main_fs_bigclock_indicator_pane_g1

0x1b6a,	// (0x0004c3ef) ncim_query_content_pane_g2_ParamLimits

0x1b6a,	// (0x0004c3ef) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0005a495) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0005a495) ncim_query_content_pane_g

0xc25d,	// (0x00056ae2) sc_clock_pane_t4_ParamLimits

0xc25d,	// (0x00056ae2) sc_clock_pane_t4

0x4781,	// (0x0004f006) main_radioblah_pane

0x0dde,	// (0x0004b663) cell_call4_button_pane_t1_copy1_ParamLimits

0x0dde,	// (0x0004b663) cell_call4_button_pane_t1_copy1

0xbeff,	// (0x00056784) main_ncimui_pane_t1_ParamLimits

0xbeff,	// (0x00056784) main_ncimui_pane_t1

0xbf19,	// (0x0005679e) main_ncimui_pane_t2_ParamLimits

0xbf19,	// (0x0005679e) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0005a48e) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0005a48e) main_ncimui_pane_t

0x1eac,	// (0x0004c731) main_radioblah_anim_pane_ParamLimits

0x1eac,	// (0x0004c731) main_radioblah_anim_pane

0x1ebd,	// (0x0004c742) main_radioblah_info_pane_ParamLimits

0x1ebd,	// (0x0004c742) main_radioblah_info_pane

0x1ed1,	// (0x0004c756) main_radioblah_pane_t1_ParamLimits

0x1ed1,	// (0x0004c756) main_radioblah_pane_t1

0x1eed,	// (0x0004c772) main_radioblah_pane_t2_ParamLimits

0x1eed,	// (0x0004c772) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0005a529) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0005a529) main_radioblah_pane_t

0xc460,	// (0x00056ce5) main_radioblah_rocker_ctrl_pane_ParamLimits

0xc460,	// (0x00056ce5) main_radioblah_rocker_ctrl_pane

0x1f35,	// (0x0004c7ba) main_radioblah_info_pane_t1_ParamLimits

0x1f35,	// (0x0004c7ba) main_radioblah_info_pane_t1

0xc4a5,	// (0x00056d2a) main_radioblah_info_pane_t2_ParamLimits

0xc4a5,	// (0x00056d2a) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0005a532) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0005a532) main_radioblah_info_pane_t

0xe9c8,	// (0x0005924d) main_radioblah_rocker_ctrl_pane_g1

0xc555,	// (0x00056dda) main_radioblah_rocker_ctrl_pane_g2

0xc55d,	// (0x00056de2) main_radioblah_rocker_ctrl_pane_g3

0xc565,	// (0x00056dea) main_radioblah_rocker_ctrl_pane_g4

0xc56d,	// (0x00056df2) main_radioblah_rocker_ctrl_pane_g5

0xc575,	// (0x00056dfa) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0005a53b) main_radioblah_rocker_ctrl_pane_g

0xbebc,	// (0x00056741) main_cset_text2_pane_t1_copy1_ParamLimits

0xa4e7,	// (0x00054d6c) cam4_image_uncrop_qvga_pane

0xa63c,	// (0x00054ec1) vid4_image_uncrop_qcif_pane

0xba71,	// (0x000562f6) cam6_image_uncrop_qvga_pane_ParamLimits

0xba71,	// (0x000562f6) cam6_image_uncrop_qvga_pane

0x17c4,	// (0x0004c049) vid6_image_uncrop_qcif_pane_ParamLimits

0x17c4,	// (0x0004c049) vid6_image_uncrop_qcif_pane

0x0462,	// (0x0004ace7) bg_popup_preview_window_pane_cp03

0x1b1c,	// (0x0004c3a1) list_cset_text2_pane

0x1b24,	// (0x0004c3a9) main_cset6_text2_pane_g1

0x1b2c,	// (0x0004c3b1) main_cset6_text2_pane_t1

0x2d30,	// (0x0004d5b5) list_cset_text2_pane_t1_ParamLimits

0x2d30,	// (0x0004d5b5) list_cset_text2_pane_t1

0x4781,	// (0x0004f006) main_radioblah_pane_ParamLimits

0xc1bc,	// (0x00056a41) main_mobtv_info_pane_t3_ParamLimits

0xc1bc,	// (0x00056a41) main_mobtv_info_pane_t3

0xc44e,	// (0x00056cd3) main_radioblah_pane_g1

0xc479,	// (0x00056cfe) main_radioblah_info_pane_g1

0xc4fa,	// (0x00056d7f) main_radioblah_info_pane_t3_ParamLimits

0xc4fa,	// (0x00056d7f) main_radioblah_info_pane_t3

0x734e,	// (0x00051bd3) highlight_cell_cale_month_pane_ParamLimits

0x734e,	// (0x00051bd3) highlight_cell_cale_month_pane

0x0462,	// (0x0004ace7) main_phob_fisheye_pane

0xed0d,	// (0x00059592) scroll_pane_cp0031_ParamLimits

0xed0d,	// (0x00059592) scroll_pane_cp0031

0x18d2,	// (0x0004c157) wait_bar_pane_cp08_ParamLimits

0xbc7d,	// (0x00056502) cset_list_set_pane_copy1_ParamLimits

0x1f6f,	// (0x0004c7f4) highlight_cell_cale_month_pane_g1

0xc57d,	// (0x00056e02) highlight_cell_cale_month_pane_t1

0x14fa,	// (0x0004bd7f) list_gen_pane_cp01

0x107b,	// (0x0004b900) scroll_pane_01

0xc58b,	// (0x00056e10) list_single_double_fisheye_pane

0xc594,	// (0x00056e19) list_double_fisheye_pane_g1_ParamLimits

0xc594,	// (0x00056e19) list_double_fisheye_pane_g1

0xc5a0,	// (0x00056e25) list_double_fisheye_pane_g2_ParamLimits

0xc5a0,	// (0x00056e25) list_double_fisheye_pane_g2

0xc5b4,	// (0x00056e39) list_double_fisheye_pane_g3_ParamLimits

0xc5b4,	// (0x00056e39) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0005a548) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0005a548) list_double_fisheye_pane_g

0xc5dd,	// (0x00056e62) list_double_fisheye_pane_t1_ParamLimits

0xc5dd,	// (0x00056e62) list_double_fisheye_pane_t1

0xc5f8,	// (0x00056e7d) list_double_fisheye_pane_t2_ParamLimits

0xc5f8,	// (0x00056e7d) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0005a553) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0005a553) list_double_fisheye_pane_t

0x0462,	// (0x0004ace7) main_call5_pane

0xc283,	// (0x00056b08) sc_swipe_pane_ParamLimits

0xc283,	// (0x00056b08) sc_swipe_pane

0xc626,	// (0x00056eab) call5_image_pane_ParamLimits

0xc626,	// (0x00056eab) call5_image_pane

0xc636,	// (0x00056ebb) call5_swipe_1_pane_ParamLimits

0xc636,	// (0x00056ebb) call5_swipe_1_pane

0xc642,	// (0x00056ec7) call5_swipe_2_pane_ParamLimits

0xc642,	// (0x00056ec7) call5_swipe_2_pane

0xc65c,	// (0x00056ee1) popup_call5_audio_first_window_ParamLimits

0xc65c,	// (0x00056ee1) popup_call5_audio_first_window

0xec2b,	// (0x000594b0) call5_swipe_1_pane_g1_ParamLimits

0xec2b,	// (0x000594b0) call5_swipe_1_pane_g1

0x1f80,	// (0x0004c805) call5_swipe_1_pane_g2_ParamLimits

0x1f80,	// (0x0004c805) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0005a558) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0005a558) call5_swipe_1_pane_g

0x1f8c,	// (0x0004c811) call5_swipe_1_pane_t1_ParamLimits

0x1f8c,	// (0x0004c811) call5_swipe_1_pane_t1

0xec2b,	// (0x000594b0) call5_swipe_2_pane_g1_ParamLimits

0xec2b,	// (0x000594b0) call5_swipe_2_pane_g1

0x1fa1,	// (0x0004c826) call5_swipe_2_pane_g2_ParamLimits

0x1fa1,	// (0x0004c826) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0005a55d) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0005a55d) call5_swipe_2_pane_g

0x1fad,	// (0x0004c832) call5_swipe_2_pane_t1_ParamLimits

0x1fad,	// (0x0004c832) call5_swipe_2_pane_t1

0x1fc2,	// (0x0004c847) sc_swipe_pane_g1_ParamLimits

0x1fc2,	// (0x0004c847) sc_swipe_pane_g1

0x1fcf,	// (0x0004c854) sc_swipe_pane_g2_ParamLimits

0x1fcf,	// (0x0004c854) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0005a562) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0005a562) sc_swipe_pane_g

0x1fdb,	// (0x0004c860) sc_swipe_pane_t1_ParamLimits

0x1fdb,	// (0x0004c860) sc_swipe_pane_t1

0x0462,	// (0x0004ace7) main_cmail_launcher_pane

0xc66a,	// (0x00056eef) aid_size_cell_cmail_l_ParamLimits

0xc66a,	// (0x00056eef) aid_size_cell_cmail_l

0xc67a,	// (0x00056eff) grid_cmail_l_pane_ParamLimits

0xc67a,	// (0x00056eff) grid_cmail_l_pane

0xc68a,	// (0x00056f0f) cell_cmail_l_pane_ParamLimits

0xc68a,	// (0x00056f0f) cell_cmail_l_pane

0xc69e,	// (0x00056f23) cell_cmail_l_pane_g1_ParamLimits

0xc69e,	// (0x00056f23) cell_cmail_l_pane_g1

0xc6aa,	// (0x00056f2f) cell_cmail_l_pane_t1_ParamLimits

0xc6aa,	// (0x00056f2f) cell_cmail_l_pane_t1

0x1ff0,	// (0x0004c875) cell_cmail_l_pane_t2_ParamLimits

0x1ff0,	// (0x0004c875) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0005a567) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0005a567) cell_cmail_l_pane_t

0x4781,	// (0x0004f006) grid_highlight_pane_cp018_ParamLimits

0x4781,	// (0x0004f006) grid_highlight_pane_cp018

0x56d7,	// (0x0004ff5c) main2_pane_ParamLimits

0x56d7,	// (0x0004ff5c) main2_pane

0x366d,	// (0x0004def2) popup_sp_fs_action_menu_bg_pane_g1

0x3675,	// (0x0004defa) popup_sp_fs_action_menu_bg_pane_g2

0x367d,	// (0x0004df02) popup_sp_fs_action_menu_bg_pane_g3

0x3685,	// (0x0004df0a) popup_sp_fs_action_menu_bg_pane_g4

0x368d,	// (0x0004df12) popup_sp_fs_action_menu_bg_pane_g5

0x3695,	// (0x0004df1a) popup_sp_fs_action_menu_bg_pane_g6

0x369d,	// (0x0004df22) popup_sp_fs_action_menu_bg_pane_g7

0x36a5,	// (0x0004df2a) popup_sp_fs_action_menu_bg_pane_g8

0x36ad,	// (0x0004df32) popup_sp_fs_action_menu_bg_pane_g9

0x36b5,	// (0x0004df3a) popup_sp_fs_action_menu_bg_pane_g10

0x36b5,	// (0x0004df3a) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x00059a31) popup_sp_fs_action_menu_bg_pane_g

0x05b4,	// (0x0004ae39) list_medium_line_x2_t3_g3_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t3_g3_g1

0x05c0,	// (0x0004ae45) list_medium_line_x2_t3_g3_g2_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x2_t3_g3_g2

0x05cc,	// (0x0004ae51) list_medium_line_x2_t3_g3_g3_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x00059ae1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x00059ae1) list_medium_line_x2_t3_g3_g

0x05d8,	// (0x0004ae5d) list_medium_line_x2_t3_g3_t1_ParamLimits

0x05d8,	// (0x0004ae5d) list_medium_line_x2_t3_g3_t1

0x64d5,	// (0x00050d5a) list_medium_line_x2_t3_g3_t2_ParamLimits

0x64d5,	// (0x00050d5a) list_medium_line_x2_t3_g3_t2

0x05ed,	// (0x0004ae72) list_medium_line_x2_t3_g3_t3_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x00059ae8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x00059ae8) list_medium_line_x2_t3_g3_t

0x05b4,	// (0x0004ae39) list_medium_line_x2_t3_g2_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t3_g2_g1

0x05cc,	// (0x0004ae51) list_medium_line_x2_t3_g2_g2_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x00059aef) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x00059aef) list_medium_line_x2_t3_g2_g

0x0602,	// (0x0004ae87) list_medium_line_x2_t3_g2_t1_ParamLimits

0x0602,	// (0x0004ae87) list_medium_line_x2_t3_g2_t1

0x0618,	// (0x0004ae9d) list_medium_line_x2_t3_g2_t2_ParamLimits

0x0618,	// (0x0004ae9d) list_medium_line_x2_t3_g2_t2

0x05ed,	// (0x0004ae72) list_medium_line_x2_t3_g2_t3_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x00059af4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x00059af4) list_medium_line_x2_t3_g2_t

0x05b4,	// (0x0004ae39) list_medium_line_x2_t4_g4_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t4_g4_g1

0x062a,	// (0x0004aeaf) list_medium_line_x2_t4_g4_g2_ParamLimits

0x062a,	// (0x0004aeaf) list_medium_line_x2_t4_g4_g2

0x05c0,	// (0x0004ae45) list_medium_line_x2_t4_g4_g3_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x2_t4_g4_g3

0x0636,	// (0x0004aebb) list_medium_line_x2_t4_g4_g4_ParamLimits

0x0636,	// (0x0004aebb) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x00059afb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x00059afb) list_medium_line_x2_t4_g4_g

0x64e7,	// (0x00050d6c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x64e7,	// (0x00050d6c) list_medium_line_x2_t4_g4_t1

0x6501,	// (0x00050d86) list_medium_line_x2_t4_g4_t2_ParamLimits

0x6501,	// (0x00050d86) list_medium_line_x2_t4_g4_t2

0x6517,	// (0x00050d9c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x6517,	// (0x00050d9c) list_medium_line_x2_t4_g4_t3

0x0642,	// (0x0004aec7) list_medium_line_x2_t4_g4_t4_ParamLimits

0x0642,	// (0x0004aec7) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x00059b04) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x00059b04) list_medium_line_x2_t4_g4_t

0x05b4,	// (0x0004ae39) list_medium_line_x2_t2_g4_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t2_g4_g1

0x062a,	// (0x0004aeaf) list_medium_line_x2_t2_g4_g2_ParamLimits

0x062a,	// (0x0004aeaf) list_medium_line_x2_t2_g4_g2

0x05c0,	// (0x0004ae45) list_medium_line_x2_t2_g4_g3_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x2_t2_g4_g3

0x05cc,	// (0x0004ae51) list_medium_line_x2_t2_g4_g4_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x00059b6b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x00059b6b) list_medium_line_x2_t2_g4_g

0x0654,	// (0x0004aed9) list_medium_line_x2_t2_g4_t1_ParamLimits

0x0654,	// (0x0004aed9) list_medium_line_x2_t2_g4_t1

0x05ed,	// (0x0004ae72) list_medium_line_x2_t2_g4_t2_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x00059b74) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x00059b74) list_medium_line_x2_t2_g4_t

0x05b4,	// (0x0004ae39) list_medium_line_x2_t2_g3_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t2_g3_g1

0x05c0,	// (0x0004ae45) list_medium_line_x2_t2_g3_g2_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x2_t2_g3_g2

0x05cc,	// (0x0004ae51) list_medium_line_x2_t2_g3_g3_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x00059ae1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x00059ae1) list_medium_line_x2_t2_g3_g

0x0669,	// (0x0004aeee) list_medium_line_x2_t2_g3_t1_ParamLimits

0x0669,	// (0x0004aeee) list_medium_line_x2_t2_g3_t1

0x05ed,	// (0x0004ae72) list_medium_line_x2_t2_g3_t2_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x00059b79) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x00059b79) list_medium_line_x2_t2_g3_t

0x7500,	// (0x00051d85) main_sp_fs_list_pane_ParamLimits

0x7500,	// (0x00051d85) main_sp_fs_list_pane

0x750c,	// (0x00051d91) sp_fs_scroll_pane_ParamLimits

0x750c,	// (0x00051d91) sp_fs_scroll_pane

0x7518,	// (0x00051d9d) list_medium_line_x2_t3_t1

0x7528,	// (0x00051dad) list_medium_line_x2_t3_t2

0x06ac,	// (0x0004af31) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x00059bc4) list_medium_line_x2_t3_t

0x7536,	// (0x00051dbb) list_medium_line_x3_t4_t1

0x7546,	// (0x00051dcb) list_medium_line_x3_t4_t2

0x06ba,	// (0x0004af3f) list_medium_line_x3_t4_t3

0x06ac,	// (0x0004af31) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x00059bcb) list_medium_line_x3_t4_t

0x7554,	// (0x00051dd9) list_medium_line_x4_t5_t1

0x7564,	// (0x00051de9) list_medium_line_x4_t5_t2

0x06ba,	// (0x0004af3f) list_medium_line_x4_t5_t3

0x06c8,	// (0x0004af4d) list_medium_line_x4_t5_t4

0x06ac,	// (0x0004af31) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x00059bd4) list_medium_line_x4_t5_t

0x05b4,	// (0x0004ae39) list_medium_line_t4_g4_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_t4_g4_g1

0x0636,	// (0x0004aebb) list_medium_line_t4_g4_g2_ParamLimits

0x0636,	// (0x0004aebb) list_medium_line_t4_g4_g2

0x06d6,	// (0x0004af5b) list_medium_line_t4_g4_g3_ParamLimits

0x06d6,	// (0x0004af5b) list_medium_line_t4_g4_g3

0x05cc,	// (0x0004ae51) list_medium_line_t4_g4_g4_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x00059bdf) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x00059bdf) list_medium_line_t4_g4_g

0x06e2,	// (0x0004af67) list_medium_line_t4_g4_t1_ParamLimits

0x06e2,	// (0x0004af67) list_medium_line_t4_g4_t1

0x06f7,	// (0x0004af7c) list_medium_line_t4_g4_t2_ParamLimits

0x06f7,	// (0x0004af7c) list_medium_line_t4_g4_t2

0x070c,	// (0x0004af91) list_medium_line_t4_g4_t3_ParamLimits

0x070c,	// (0x0004af91) list_medium_line_t4_g4_t3

0x05ed,	// (0x0004ae72) list_medium_line_t4_g4_t4_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x00059be8) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x00059be8) list_medium_line_t4_g4_t

0x7683,	// (0x00051f08) chi_dic_find_pane_g1

0x86a9,	// (0x00052f2e) main_tport_pane

0x11bb,	// (0x0004ba40) list_medium_line_plain_t1

0x11d1,	// (0x0004ba56) list_medium_line_t2_g2_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_t2_g2_g1

0x11dd,	// (0x0004ba62) list_medium_line_t2_g2_g2_ParamLimits

0x11dd,	// (0x0004ba62) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0005a2a4) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0005a2a4) list_medium_line_t2_g2_g

0xb0f4,	// (0x00055979) list_medium_line_t2_g2_t1_ParamLimits

0xb0f4,	// (0x00055979) list_medium_line_t2_g2_t1

0xb10e,	// (0x00055993) list_medium_line_t2_g2_t2_ParamLimits

0xb10e,	// (0x00055993) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0005a2a9) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0005a2a9) list_medium_line_t2_g2_t

0x1503,	// (0x0004bd88) aid_sp_fs_list_icon_a_sm

0x150b,	// (0x0004bd90) aid_sp_fs_list_icon_d

0x1513,	// (0x0004bd98) aid_sp_fs_text_primary

0x151c,	// (0x0004bda1) aid_sp_fs_text_secondary

0x1525,	// (0x0004bdaa) list_medium_line

0x1525,	// (0x0004bdaa) list_medium_line_g2

0x1525,	// (0x0004bdaa) list_medium_line_g3

0x1525,	// (0x0004bdaa) list_medium_line_plain

0x1525,	// (0x0004bdaa) list_medium_line_plain_t2

0x1525,	// (0x0004bdaa) list_medium_line_plain_t3

0x1525,	// (0x0004bdaa) list_medium_line_right_icon

0x1525,	// (0x0004bdaa) list_medium_line_right_iconx2

0x1525,	// (0x0004bdaa) list_medium_line_t2

0x1525,	// (0x0004bdaa) list_medium_line_t2_g2

0x1525,	// (0x0004bdaa) list_medium_line_t2_g3

0x1525,	// (0x0004bdaa) list_medium_line_t2_right_icon

0x1525,	// (0x0004bdaa) list_medium_line_t2_right_iconx2

0x1525,	// (0x0004bdaa) list_medium_line_t3

0x1525,	// (0x0004bdaa) list_medium_line_t3_g2

0x1525,	// (0x0004bdaa) list_medium_line_t3_g3

0x1525,	// (0x0004bdaa) list_medium_line_t3_right_iconx2

0x152e,	// (0x0004bdb3) list_medium_line_t4_g4

0x1537,	// (0x0004bdbc) list_medium_line_x2

0x1537,	// (0x0004bdbc) list_medium_line_x2_t2_g2

0x1537,	// (0x0004bdbc) list_medium_line_x2_t2_g3

0x1537,	// (0x0004bdbc) list_medium_line_x2_t2_g4

0x1537,	// (0x0004bdbc) list_medium_line_x2_t3

0x1537,	// (0x0004bdbc) list_medium_line_x2_t3_g2

0x1537,	// (0x0004bdbc) list_medium_line_x2_t3_g3

0x1537,	// (0x0004bdbc) list_medium_line_x2_t3_g4

0x1537,	// (0x0004bdbc) list_medium_line_x2_t4_g2

0x1537,	// (0x0004bdbc) list_medium_line_x2_t4_g4

0x1540,	// (0x0004bdc5) list_medium_line_x3

0x1540,	// (0x0004bdc5) list_medium_line_x3_t4

0x1540,	// (0x0004bdc5) list_medium_line_x3_t4_g4

0x152e,	// (0x0004bdb3) list_medium_line_x4_t4

0x152e,	// (0x0004bdb3) list_medium_line_x4_t4_g7

0x152e,	// (0x0004bdb3) list_medium_line_x4_t5

0x1549,	// (0x0004bdce) list_single_fs_dyc_pane_ParamLimits

0x1549,	// (0x0004bdce) list_single_fs_dyc_pane

0x05b4,	// (0x0004ae39) list_medium_line_x4_t4_g7_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x4_t4_g7_g1

0x1a4b,	// (0x0004c2d0) list_medium_line_x4_t4_g7_g2_ParamLimits

0x1a4b,	// (0x0004c2d0) list_medium_line_x4_t4_g7_g2

0x1a57,	// (0x0004c2dc) list_medium_line_x4_t4_g7_g3_ParamLimits

0x1a57,	// (0x0004c2dc) list_medium_line_x4_t4_g7_g3

0x1a66,	// (0x0004c2eb) list_medium_line_x4_t4_g7_g4_ParamLimits

0x1a66,	// (0x0004c2eb) list_medium_line_x4_t4_g7_g4

0x1a72,	// (0x0004c2f7) list_medium_line_x4_t4_g7_g5_ParamLimits

0x1a72,	// (0x0004c2f7) list_medium_line_x4_t4_g7_g5

0x1a81,	// (0x0004c306) list_medium_line_x4_t4_g7_g6_ParamLimits

0x1a81,	// (0x0004c306) list_medium_line_x4_t4_g7_g6

0x1a90,	// (0x0004c315) list_medium_line_x4_t4_g7_g7_ParamLimits

0x1a90,	// (0x0004c315) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0005a474) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0005a474) list_medium_line_x4_t4_g7_g

0x1a9c,	// (0x0004c321) list_medium_line_x4_t4_g7_t1_ParamLimits

0x1a9c,	// (0x0004c321) list_medium_line_x4_t4_g7_t1

0x1ab1,	// (0x0004c336) list_medium_line_x4_t4_g7_t2_ParamLimits

0x1ab1,	// (0x0004c336) list_medium_line_x4_t4_g7_t2

0x1ac6,	// (0x0004c34b) list_medium_line_x4_t4_g7_t3_ParamLimits

0x1ac6,	// (0x0004c34b) list_medium_line_x4_t4_g7_t3

0x1adb,	// (0x0004c360) list_medium_line_x4_t4_g7_t4_ParamLimits

0x1adb,	// (0x0004c360) list_medium_line_x4_t4_g7_t4

0x1aed,	// (0x0004c372) list_medium_line_x4_t4_g7_t5_ParamLimits

0x1aed,	// (0x0004c372) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0005a483) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0005a483) list_medium_line_x4_t4_g7_t

0x1aff,	// (0x0004c384) list_single_dyc_row_pane_ParamLimits

0x1aff,	// (0x0004c384) list_single_dyc_row_pane

0xc61a,	// (0x00056e9f) call5_gesture_pane_ParamLimits

0xc61a,	// (0x00056e9f) call5_gesture_pane

0xc64e,	// (0x00056ed3) call5_windows_pane_ParamLimits

0xc64e,	// (0x00056ed3) call5_windows_pane

0xc6c0,	// (0x00056f45) call5_swipe_1_pane_cp_ParamLimits

0xc6c0,	// (0x00056f45) call5_swipe_1_pane_cp

0xc6cc,	// (0x00056f51) call5_swipe_2_pane_cp_ParamLimits

0xc6cc,	// (0x00056f51) call5_swipe_2_pane_cp

0x40b3,	// (0x0004e938) call5_image_pane_cp

0xc6d8,	// (0x00056f5d) popup_call5_audio_first_window_cp_ParamLimits

0xc6d8,	// (0x00056f5d) popup_call5_audio_first_window_cp

0x1fc2,	// (0x0004c847) call5_swipe_1_pane_g1_cp_ParamLimits

0x1fc2,	// (0x0004c847) call5_swipe_1_pane_g1_cp

0x2002,	// (0x0004c887) call5_swipe_1_pane_g2_cp

0x1fdb,	// (0x0004c860) call5_swipe_1_pane_t1_cp_ParamLimits

0x1fdb,	// (0x0004c860) call5_swipe_1_pane_t1_cp

0x1fc2,	// (0x0004c847) call5_swipe_2_pane_g1_cp_ParamLimits

0x1fc2,	// (0x0004c847) call5_swipe_2_pane_g1_cp

0x200a,	// (0x0004c88f) call5_swipe_2_pane_g2_cp

0x2012,	// (0x0004c897) call5_swipe_2_pane_t1_cp_ParamLimits

0x2012,	// (0x0004c897) call5_swipe_2_pane_t1_cp

0x4781,	// (0x0004f006) main_sp_fs_email_pane

0x2027,	// (0x0004c8ac) main_sp_fs_listscroll_pane_te

0x2030,	// (0x0004c8b5) popup_sp_fs_action_menu_pane_ParamLimits

0x2030,	// (0x0004c8b5) popup_sp_fs_action_menu_pane

0xe9c8,	// (0x0005924d) bg_sp_fs_ctrlbar_pane_g1

0x2074,	// (0x0004c8f9) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x207d,	// (0x0004c902) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x2086,	// (0x0004c90b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe9c8,	// (0x0005924d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0005a56c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe7ad,	// (0x00059032) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe7ad,	// (0x00059032) bg_sp_fs_ctrlbar_ddmenu_pane

0x208f,	// (0x0004c914) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x208f,	// (0x0004c914) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x209b,	// (0x0004c920) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x209b,	// (0x0004c920) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0005a575) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0005a575) main_sp_fs_ctrlbar_ddmenu_pane_g

0x20a7,	// (0x0004c92c) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x20a7,	// (0x0004c92c) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x20c1,	// (0x0004c946) list_medium_line_t2_right_icon_g1

0xc6e6,	// (0x00056f6b) list_medium_line_t2_right_icon_t1

0xc6f6,	// (0x00056f7b) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0005a57a) list_medium_line_t2_right_icon_t

0xe581,	// (0x00058e06) bg_sp_fs_ctrlbar_pane_ParamLimits

0xe581,	// (0x00058e06) bg_sp_fs_ctrlbar_pane

0xc75b,	// (0x00056fe0) main_sp_fs_ctrlbar_button_pane_cp01

0xc763,	// (0x00056fe8) main_sp_fs_ctrlbar_ddmenu_pane

0x2101,	// (0x0004c986) main_sp_fs_ctrlbar_pane_g1

0x210d,	// (0x0004c992) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0005a57f) main_sp_fs_ctrlbar_pane_g

0x2119,	// (0x0004c99e) main_sp_fs_ctrlbar_pane_t1

0xc76d,	// (0x00056ff2) main_sp_fs_ctrlbar_pane

0xc789,	// (0x0005700e) main_sp_fs_listscroll_pane_te_cp01

0xc79a,	// (0x0005701f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xc79a,	// (0x0005701f) popup_sp_fs_action_menu_pane_cp01

0x4781,	// (0x0004f006) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x4781,	// (0x0004f006) bg_sp_fs_highlight_list_pane_cp01

0x212e,	// (0x0004c9b3) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x212e,	// (0x0004c9b3) sp_fs_action_menu_list_gene_pane_g1

0x213d,	// (0x0004c9c2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x213d,	// (0x0004c9c2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0005a584) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0005a584) sp_fs_action_menu_list_gene_pane_g

0x214a,	// (0x0004c9cf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x214a,	// (0x0004c9cf) sp_fs_action_menu_list_gene_pane_t1

0x2162,	// (0x0004c9e7) sp_fs_action_menu_list_gene_pane_ParamLimits

0x2162,	// (0x0004c9e7) sp_fs_action_menu_list_gene_pane

0x2181,	// (0x0004ca06) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x2181,	// (0x0004ca06) popup_sp_fs_action_menu_bg_pane

0x218f,	// (0x0004ca14) sp_fs_action_menu_list_pane_ParamLimits

0x218f,	// (0x0004ca14) sp_fs_action_menu_list_pane

0x21af,	// (0x0004ca34) sp_fs_scroll_pane_cp01_ParamLimits

0x21af,	// (0x0004ca34) sp_fs_scroll_pane_cp01

0xc7b2,	// (0x00057037) list_medium_line_plain_t2_t1

0xc7c2,	// (0x00057047) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0005a589) list_medium_line_plain_t2_t

0xc7d0,	// (0x00057055) list_medium_line_plain_t3_t1

0xc7e0,	// (0x00057065) list_medium_line_plain_t3_t2

0xc7ee,	// (0x00057073) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0005a58e) list_medium_line_plain_t3_t

0x05b4,	// (0x0004ae39) list_medium_line_x2_t2_g2_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t2_g2_g1

0x05cc,	// (0x0004ae51) list_medium_line_x2_t2_g2_g2_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x00059aef) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x00059aef) list_medium_line_x2_t2_g2_g

0x06e2,	// (0x0004af67) list_medium_line_x2_t2_g2_t1_ParamLimits

0x06e2,	// (0x0004af67) list_medium_line_x2_t2_g2_t1

0x05ed,	// (0x0004ae72) list_medium_line_x2_t2_g2_t2_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0005a595) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0005a595) list_medium_line_x2_t2_g2_t

0x05b4,	// (0x0004ae39) list_medium_line_x2_t4_g2_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t4_g2_g1

0x21d5,	// (0x0004ca5a) list_medium_line_x2_t4_g2_g2_ParamLimits

0x21d5,	// (0x0004ca5a) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd15,	// (0x0005a59a) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd15,	// (0x0005a59a) list_medium_line_x2_t4_g2_g

0xc7fc,	// (0x00057081) list_medium_line_x2_t4_g2_t1_ParamLimits

0xc7fc,	// (0x00057081) list_medium_line_x2_t4_g2_t1

0xc816,	// (0x0005709b) list_medium_line_x2_t4_g2_t2_ParamLimits

0xc816,	// (0x0005709b) list_medium_line_x2_t4_g2_t2

0xc82b,	// (0x000570b0) list_medium_line_x2_t4_g2_t3_ParamLimits

0xc82b,	// (0x000570b0) list_medium_line_x2_t4_g2_t3

0x05ed,	// (0x0004ae72) list_medium_line_x2_t4_g2_t4_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd1a,	// (0x0005a59f) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd1a,	// (0x0005a59f) list_medium_line_x2_t4_g2_t

0x21e7,	// (0x0004ca6c) list_medium_line_t3_right_iconx2_g1

0x20c1,	// (0x0004c946) list_medium_line_t3_right_iconx2_g2

0xc840,	// (0x000570c5) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd23,	// (0x0005a5a8) list_medium_line_t3_right_iconx2_g

0xc848,	// (0x000570cd) list_medium_line_t3_right_iconx2_t1

0xc858,	// (0x000570dd) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd2a,	// (0x0005a5af) list_medium_line_t3_right_iconx2_t

0x05b4,	// (0x0004ae39) list_medium_line_x3_t4_g4_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x3_t4_g4_g1

0x05c0,	// (0x0004ae45) list_medium_line_x3_t4_g4_g2_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x3_t4_g4_g2

0x0636,	// (0x0004aebb) list_medium_line_x3_t4_g4_g3_ParamLimits

0x0636,	// (0x0004aebb) list_medium_line_x3_t4_g4_g3

0x21ef,	// (0x0004ca74) list_medium_line_x3_t4_g4_g4_ParamLimits

0x21ef,	// (0x0004ca74) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2f,	// (0x0005a5b4) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2f,	// (0x0005a5b4) list_medium_line_x3_t4_g4_g

0xc866,	// (0x000570eb) list_medium_line_x3_t4_g4_t1_ParamLimits

0xc866,	// (0x000570eb) list_medium_line_x3_t4_g4_t1

0xc87d,	// (0x00057102) list_medium_line_x3_t4_g4_t2_ParamLimits

0xc87d,	// (0x00057102) list_medium_line_x3_t4_g4_t2

0x06f7,	// (0x0004af7c) list_medium_line_x3_t4_g4_t3_ParamLimits

0x06f7,	// (0x0004af7c) list_medium_line_x3_t4_g4_t3

0x21fb,	// (0x0004ca80) list_medium_line_x3_t4_g4_t4_ParamLimits

0x21fb,	// (0x0004ca80) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd38,	// (0x0005a5bd) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd38,	// (0x0005a5bd) list_medium_line_x3_t4_g4_t

0xc892,	// (0x00057117) list_single_dyc_row_text_pane_t1_ParamLimits

0xc892,	// (0x00057117) list_single_dyc_row_text_pane_t1

0xc8c9,	// (0x0005714e) list_single_dyc_row_text_pane_t2_ParamLimits

0xc8c9,	// (0x0005714e) list_single_dyc_row_text_pane_t2

0x2218,	// (0x0004ca9d) list_single_dyc_row_text_pane_t3_ParamLimits

0x2218,	// (0x0004ca9d) list_single_dyc_row_text_pane_t3

0x0002,

0xfd41,	// (0x0005a5c6) list_single_dyc_row_text_pane_t_ParamLimits

0xfd41,	// (0x0005a5c6) list_single_dyc_row_text_pane_t

0x222a,	// (0x0004caaf) list_single_dyc_row_pane_g1_ParamLimits

0x222a,	// (0x0004caaf) list_single_dyc_row_pane_g1

0x2236,	// (0x0004cabb) list_single_dyc_row_pane_g2_ParamLimits

0x2236,	// (0x0004cabb) list_single_dyc_row_pane_g2

0x2242,	// (0x0004cac7) list_single_dyc_row_pane_g3_ParamLimits

0x2242,	// (0x0004cac7) list_single_dyc_row_pane_g3

0x224e,	// (0x0004cad3) list_single_dyc_row_pane_g4_ParamLimits

0x224e,	// (0x0004cad3) list_single_dyc_row_pane_g4

0x0003,

0xfd48,	// (0x0005a5cd) list_single_dyc_row_pane_g_ParamLimits

0xfd48,	// (0x0005a5cd) list_single_dyc_row_pane_g

0x225a,	// (0x0004cadf) list_single_dyc_row_text_pane_ParamLimits

0x225a,	// (0x0004cadf) list_single_dyc_row_text_pane

0x0462,	// (0x0004ace7) bg_sp_fs_scroll_pane

0x2279,	// (0x0004cafe) thumb_sp_fs_scroll_pane

0x11d1,	// (0x0004ba56) list_medium_line_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_g1

0x2282,	// (0x0004cb07) list_medium_line_t1_ParamLimits

0x2282,	// (0x0004cb07) list_medium_line_t1

0x05b4,	// (0x0004ae39) list_medium_line_x2_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_g1

0x05c0,	// (0x0004ae45) list_medium_line_x2_g2_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x2_g2

0x0001,

0xfd51,	// (0x0005a5d6) list_medium_line_x2_g_ParamLimits

0xfd51,	// (0x0005a5d6) list_medium_line_x2_g

0x2297,	// (0x0004cb1c) list_medium_line_x2_t1_ParamLimits

0x2297,	// (0x0004cb1c) list_medium_line_x2_t1

0x05b4,	// (0x0004ae39) list_medium_line_x3_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x3_g1

0x05c0,	// (0x0004ae45) list_medium_line_x3_g2_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x3_g2

0x0001,

0xfd51,	// (0x0005a5d6) list_medium_line_x3_g_ParamLimits

0xfd51,	// (0x0005a5d6) list_medium_line_x3_g

0x2297,	// (0x0004cb1c) list_medium_line_x3_t1_ParamLimits

0x2297,	// (0x0004cb1c) list_medium_line_x3_t1

0x22ad,	// (0x0004cb32) thumb_sp_fs_scroll_pane_g1

0x22b6,	// (0x0004cb3b) thumb_sp_fs_scroll_pane_g2

0x22bf,	// (0x0004cb44) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005a5db) thumb_sp_fs_scroll_pane_g

0x22ad,	// (0x0004cb32) bg_sp_fs_scroll_pane_g1

0x22b6,	// (0x0004cb3b) bg_sp_fs_scroll_pane_g2

0x22bf,	// (0x0004cb44) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd56,	// (0x0005a5db) bg_sp_fs_scroll_pane_g

0x05b4,	// (0x0004ae39) list_medium_line_x2_t3_g4_g1_ParamLimits

0x05b4,	// (0x0004ae39) list_medium_line_x2_t3_g4_g1

0x062a,	// (0x0004aeaf) list_medium_line_x2_t3_g4_g2_ParamLimits

0x062a,	// (0x0004aeaf) list_medium_line_x2_t3_g4_g2

0x05c0,	// (0x0004ae45) list_medium_line_x2_t3_g4_g3_ParamLimits

0x05c0,	// (0x0004ae45) list_medium_line_x2_t3_g4_g3

0x05cc,	// (0x0004ae51) list_medium_line_x2_t3_g4_g4_ParamLimits

0x05cc,	// (0x0004ae51) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x00059b6b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x00059b6b) list_medium_line_x2_t3_g4_g

0xc923,	// (0x000571a8) list_medium_line_x2_t3_g4_t1_ParamLimits

0xc923,	// (0x000571a8) list_medium_line_x2_t3_g4_t1

0xc939,	// (0x000571be) list_medium_line_x2_t3_g4_t2_ParamLimits

0xc939,	// (0x000571be) list_medium_line_x2_t3_g4_t2

0x05ed,	// (0x0004ae72) list_medium_line_x2_t3_g4_t3_ParamLimits

0x05ed,	// (0x0004ae72) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd5d,	// (0x0005a5e2) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd5d,	// (0x0005a5e2) list_medium_line_x2_t3_g4_t

0x11d1,	// (0x0004ba56) list_medium_line_g2_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_g2_g1

0x11dd,	// (0x0004ba62) list_medium_line_g2_g2_ParamLimits

0x11dd,	// (0x0004ba62) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0005a2a4) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0005a2a4) list_medium_line_g2_g

0x22c8,	// (0x0004cb4d) list_medium_line_g2_t1_ParamLimits

0x22c8,	// (0x0004cb4d) list_medium_line_g2_t1

0x11d1,	// (0x0004ba56) list_medium_line_t3_g2_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_t3_g2_g1

0x11dd,	// (0x0004ba62) list_medium_line_t3_g2_g2_ParamLimits

0x11dd,	// (0x0004ba62) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0005a2a4) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0005a2a4) list_medium_line_t3_g2_g

0xc953,	// (0x000571d8) list_medium_line_t3_g2_t1_ParamLimits

0xc953,	// (0x000571d8) list_medium_line_t3_g2_t1

0xc96a,	// (0x000571ef) list_medium_line_t3_g2_t2_ParamLimits

0xc96a,	// (0x000571ef) list_medium_line_t3_g2_t2

0xc97f,	// (0x00057204) list_medium_line_t3_g2_t3_ParamLimits

0xc97f,	// (0x00057204) list_medium_line_t3_g2_t3

0x0002,

0xfd64,	// (0x0005a5e9) list_medium_line_t3_g2_t_ParamLimits

0xfd64,	// (0x0005a5e9) list_medium_line_t3_g2_t

0x20c1,	// (0x0004c946) list_medium_line_right_icon_g1

0x22dd,	// (0x0004cb62) list_medium_line_right_icon_t1

0x11d1,	// (0x0004ba56) list_medium_line_t2_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_t2_g1

0xc994,	// (0x00057219) list_medium_line_t2_t1_ParamLimits

0xc994,	// (0x00057219) list_medium_line_t2_t1

0xc9ae,	// (0x00057233) list_medium_line_t2_t2_ParamLimits

0xc9ae,	// (0x00057233) list_medium_line_t2_t2

0x0001,

0xfd6b,	// (0x0005a5f0) list_medium_line_t2_t_ParamLimits

0xfd6b,	// (0x0005a5f0) list_medium_line_t2_t

0x11d1,	// (0x0004ba56) list_medium_line_t3_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_t3_g1

0xc9c3,	// (0x00057248) list_medium_line_t3_t1_ParamLimits

0xc9c3,	// (0x00057248) list_medium_line_t3_t1

0xc9da,	// (0x0005725f) list_medium_line_t3_t2_ParamLimits

0xc9da,	// (0x0005725f) list_medium_line_t3_t2

0xc9ef,	// (0x00057274) list_medium_line_t3_t3_ParamLimits

0xc9ef,	// (0x00057274) list_medium_line_t3_t3

0x0002,

0xfd70,	// (0x0005a5f5) list_medium_line_t3_t_ParamLimits

0xfd70,	// (0x0005a5f5) list_medium_line_t3_t

0x11d1,	// (0x0004ba56) list_medium_line_g3_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_g3_g1

0x22eb,	// (0x0004cb70) list_medium_line_g3_g2_ParamLimits

0x22eb,	// (0x0004cb70) list_medium_line_g3_g2

0x11dd,	// (0x0004ba62) list_medium_line_g3_g3_ParamLimits

0x11dd,	// (0x0004ba62) list_medium_line_g3_g3

0x0002,

0xfd77,	// (0x0005a5fc) list_medium_line_g3_g_ParamLimits

0xfd77,	// (0x0005a5fc) list_medium_line_g3_g

0x22f7,	// (0x0004cb7c) list_medium_line_g3_t1_ParamLimits

0x22f7,	// (0x0004cb7c) list_medium_line_g3_t1

0x11d1,	// (0x0004ba56) list_medium_line_t2_g3_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_t2_g3_g1

0x22eb,	// (0x0004cb70) list_medium_line_t2_g3_g2_ParamLimits

0x22eb,	// (0x0004cb70) list_medium_line_t2_g3_g2

0x11dd,	// (0x0004ba62) list_medium_line_t2_g3_g3_ParamLimits

0x11dd,	// (0x0004ba62) list_medium_line_t2_g3_g3

0x0002,

0xfd77,	// (0x0005a5fc) list_medium_line_t2_g3_g_ParamLimits

0xfd77,	// (0x0005a5fc) list_medium_line_t2_g3_g

0xca01,	// (0x00057286) list_medium_line_t2_g3_t1_ParamLimits

0xca01,	// (0x00057286) list_medium_line_t2_g3_t1

0xca1b,	// (0x000572a0) list_medium_line_t2_g3_t2_ParamLimits

0xca1b,	// (0x000572a0) list_medium_line_t2_g3_t2

0x0001,

0xfd7e,	// (0x0005a603) list_medium_line_t2_g3_t_ParamLimits

0xfd7e,	// (0x0005a603) list_medium_line_t2_g3_t

0x11d1,	// (0x0004ba56) list_medium_line_t3_g3_g1_ParamLimits

0x11d1,	// (0x0004ba56) list_medium_line_t3_g3_g1

0x22eb,	// (0x0004cb70) list_medium_line_t3_g3_g2_ParamLimits

0x22eb,	// (0x0004cb70) list_medium_line_t3_g3_g2

0x11dd,	// (0x0004ba62) list_medium_line_t3_g3_g3_ParamLimits

0x11dd,	// (0x0004ba62) list_medium_line_t3_g3_g3

0x0002,

0xfd77,	// (0x0005a5fc) list_medium_line_t3_g3_g_ParamLimits

0xfd77,	// (0x0005a5fc) list_medium_line_t3_g3_g

0xca30,	// (0x000572b5) list_medium_line_t3_g3_t1_ParamLimits

0xca30,	// (0x000572b5) list_medium_line_t3_g3_t1

0xca44,	// (0x000572c9) list_medium_line_t3_g3_t2_ParamLimits

0xca44,	// (0x000572c9) list_medium_line_t3_g3_t2

0xca56,	// (0x000572db) list_medium_line_t3_g3_t3_ParamLimits

0xca56,	// (0x000572db) list_medium_line_t3_g3_t3

0x0002,

0xfd83,	// (0x0005a608) list_medium_line_t3_g3_t_ParamLimits

0xfd83,	// (0x0005a608) list_medium_line_t3_g3_t

0x21e7,	// (0x0004ca6c) list_medium_line_right_iconx2_g1

0x20c1,	// (0x0004c946) list_medium_line_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005a60f) list_medium_line_right_iconx2_g

0x230c,	// (0x0004cb91) list_medium_line_right_iconx2_t1

0x21e7,	// (0x0004ca6c) list_medium_line_t2_right_iconx2_g1

0x20c1,	// (0x0004c946) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd8a,	// (0x0005a60f) list_medium_line_t2_right_iconx2_g

0xca68,	// (0x000572ed) list_medium_line_t2_right_iconx2_t1

0xca78,	// (0x000572fd) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8f,	// (0x0005a614) list_medium_line_t2_right_iconx2_t

0x231a,	// (0x0004cb9f) list_medium_line_x4_t4_t1

0xca86,	// (0x0005730b) list_medium_line_x4_t4_t2

0xca96,	// (0x0005731b) list_medium_line_x4_t4_t3

0xcaa6,	// (0x0005732b) list_medium_line_x4_t4_t4

0x0003,

0xfd94,	// (0x0005a619) list_medium_line_x4_t4_t

0xcadf,	// (0x00057364) tport_appsw_pane_ParamLimits

0xcadf,	// (0x00057364) tport_appsw_pane

0xcaeb,	// (0x00057370) tport_contact_pane_ParamLimits

0xcaeb,	// (0x00057370) tport_contact_pane

0xcafb,	// (0x00057380) tport_listscroll_pane_ParamLimits

0xcafb,	// (0x00057380) tport_listscroll_pane

0xcb0b,	// (0x00057390) cell_tport_appsw_pane_ParamLimits

0xcb0b,	// (0x00057390) cell_tport_appsw_pane

0xec90,	// (0x00059515) tport_appsw_pane_g1_ParamLimits

0xec90,	// (0x00059515) tport_appsw_pane_g1

0x2328,	// (0x0004cbad) tport_contact_pane_g1

0x1bf0,	// (0x0004c475) tport_contact_pane_t1

0x2331,	// (0x0004cbb6) tport_contact_pane_t2

0x0001,

0xfd9d,	// (0x0005a622) tport_contact_pane_t

0x233f,	// (0x0004cbc4) list_tport_pane

0x2348,	// (0x0004cbcd) scroll_pane_cp_030

0x2359,	// (0x0004cbde) cell_tport_appsw_pane_g1

0x2369,	// (0x0004cbee) cell_tport_appsw_pane_t1

0x0462,	// (0x0004ace7) grid_highlight_pane_cp019

0xcb36,	// (0x000573bb) list_tport_double_graphic_pane_ParamLimits

0xcb36,	// (0x000573bb) list_tport_double_graphic_pane

0x4781,	// (0x0004f006) list_highlight_pane_cp023_ParamLimits

0x4781,	// (0x0004f006) list_highlight_pane_cp023

0xcb48,	// (0x000573cd) list_tport_double_graphic_pane_g1_ParamLimits

0xcb48,	// (0x000573cd) list_tport_double_graphic_pane_g1

0xcb55,	// (0x000573da) list_tport_double_graphic_pane_t1_ParamLimits

0xcb55,	// (0x000573da) list_tport_double_graphic_pane_t1

0xcb6a,	// (0x000573ef) list_tport_double_graphic_pane_t2_ParamLimits

0xcb6a,	// (0x000573ef) list_tport_double_graphic_pane_t2

0x0001,

0xfda9,	// (0x0005a62e) list_tport_double_graphic_pane_t_ParamLimits

0xfda9,	// (0x0005a62e) list_tport_double_graphic_pane_t

0x0462,	// (0x0004ace7) main_cale_note_pane

0xa8a8,	// (0x0005512d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xa8a8,	// (0x0005512d) cell_vitu2_function_top_wide_pane_cp01

0xc1d0,	// (0x00056a55) wait_bar_pane_cp05_ParamLimits

0x0462,	// (0x0004ace7) listscroll_cmail_pane

0x237f,	// (0x0004cc04) list_cmail_pane

0xcb86,	// (0x0005740b) list_cmail_body_pane

0xcba3,	// (0x00057428) list_single_cmail_header_caption_pane

0xcbc8,	// (0x0005744d) list_single_cmail_header_detail_pane_ParamLimits

0xcbc8,	// (0x0005744d) list_single_cmail_header_detail_pane

0xcbfb,	// (0x00057480) list_single_cmail_header_caption_pane_t1

0xcc09,	// (0x0005748e) list_single_cmail_header_detail_pane_g1_ParamLimits

0xcc09,	// (0x0005748e) list_single_cmail_header_detail_pane_g1

0x23a0,	// (0x0004cc25) list_single_cmail_header_detail_pane_g2_ParamLimits

0x23a0,	// (0x0004cc25) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdae,	// (0x0005a633) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdae,	// (0x0005a633) list_single_cmail_header_detail_pane_g

0x23b9,	// (0x0004cc3e) list_single_cmail_header_detail_pane_t1_ParamLimits

0x23b9,	// (0x0004cc3e) list_single_cmail_header_detail_pane_t1

0x23ef,	// (0x0004cc74) list_single_cmail_header_editor_pane_bg_ParamLimits

0x23ef,	// (0x0004cc74) list_single_cmail_header_editor_pane_bg

0x1d9f,	// (0x0004c624) list_cmail_body_pane_g1

0x2401,	// (0x0004cc86) list_cmail_body_pane_t1

0x0f61,	// (0x0004b7e6) list_single_cmail_header_editor_pane_bg_g1

0x39c8,	// (0x0004e24d) list_single_cmail_header_editor_pane_bg_g1_copy1

0x0f71,	// (0x0004b7f6) list_single_cmail_header_editor_pane_bg_g1_copy2

0x0f69,	// (0x0004b7ee) list_single_cmail_header_editor_pane_bg_g1_copy3

0x11c9,	// (0x0004ba4e) list_single_cmail_header_editor_pane_bg_g1_copy4

0x0f91,	// (0x0004b816) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x0f81,	// (0x0004b806) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x0f89,	// (0x0004b80e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x39a8,	// (0x0004e22d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xcc43,	// (0x000574c8) calenote_gesture_pane_ParamLimits

0xcc43,	// (0x000574c8) calenote_gesture_pane

0xcc5d,	// (0x000574e2) calenote_window_pane_ParamLimits

0xcc5d,	// (0x000574e2) calenote_window_pane

0x240f,	// (0x0004cc94) popup_note_window_cp01

0xcc75,	// (0x000574fa) calenote_swipe_1_pane_ParamLimits

0xcc75,	// (0x000574fa) calenote_swipe_1_pane

0xc6cc,	// (0x00056f51) calenote_swipe_2_pane_ParamLimits

0xc6cc,	// (0x00056f51) calenote_swipe_2_pane

0x1fc2,	// (0x0004c847) calenote_swipe_1_pane_g1_ParamLimits

0x1fc2,	// (0x0004c847) calenote_swipe_1_pane_g1

0x1fcf,	// (0x0004c854) calenote_swipe_1_pane_g2_ParamLimits

0x1fcf,	// (0x0004c854) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0005a562) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0005a562) calenote_swipe_1_pane_g

0x2421,	// (0x0004cca6) calenote_swipe_1_pane_t1_ParamLimits

0x2421,	// (0x0004cca6) calenote_swipe_1_pane_t1

0x1fc2,	// (0x0004c847) calenote_swipe_2_pane_g1_ParamLimits

0x1fc2,	// (0x0004c847) calenote_swipe_2_pane_g1

0x2440,	// (0x0004ccc5) calenote_swipe_2_pane_g2_ParamLimits

0x2440,	// (0x0004ccc5) calenote_swipe_2_pane_g2

0x0001,

0xfdba,	// (0x0005a63f) calenote_swipe_2_pane_g_ParamLimits

0xfdba,	// (0x0005a63f) calenote_swipe_2_pane_g

0x244c,	// (0x0004ccd1) calenote_swipe_2_pane_t1_ParamLimits

0x244c,	// (0x0004ccd1) calenote_swipe_2_pane_t1

0x0462,	// (0x0004ace7) main_mup_navstr_pane

0x9639,	// (0x00053ebe) main_mup3_pane_t7_ParamLimits

0x9639,	// (0x00053ebe) main_mup3_pane_t7

0xa001,	// (0x00054886) main_mp4_pane_g6_ParamLimits

0xa001,	// (0x00054886) main_mp4_pane_g6

0xa381,	// (0x00054c06) main_image3_pane_t4_ParamLimits

0xa381,	// (0x00054c06) main_image3_pane_t4

0xcc88,	// (0x0005750d) popup_navstr_preview_pane_ParamLimits

0xcc88,	// (0x0005750d) popup_navstr_preview_pane

0xcc94,	// (0x00057519) scroll_navstr_pane_ParamLimits

0xcc94,	// (0x00057519) scroll_navstr_pane

0x0462,	// (0x0004ace7) bg_popup_preview_window_pane_cp04

0x2473,	// (0x0004ccf8) popup_navstr_preview_pane_t1

0xcca0,	// (0x00057525) scroll_navstr_pane_g1_ParamLimits

0xcca0,	// (0x00057525) scroll_navstr_pane_g1

0xccad,	// (0x00057532) scroll_navstr_pane_t1_ParamLimits

0xccad,	// (0x00057532) scroll_navstr_pane_t1

0x2418,	// (0x0004cc9d) bg_button_pane_cp014

0x2418,	// (0x0004cc9d) bg_button_pane_cp030

0xc5c0,	// (0x00056e45) list_double_fisheye_pane_g4_ParamLimits

0xc5c0,	// (0x00056e45) list_double_fisheye_pane_g4

0xc5cc,	// (0x00056e51) list_double_fisheye_pane_g5_ParamLimits

0xc5cc,	// (0x00056e51) list_double_fisheye_pane_g5

0x2387,	// (0x0004cc0c) sp_fs_scroll_pane_cp03

0x2101,	// (0x0004c986) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x210d,	// (0x0004c992) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0005a57f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x2119,	// (0x0004c99e) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xcb7c,	// (0x00057401) sp_fs_scroll_pane_cp02

0x36d8,	// (0x0004df5d) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x36d8,	// (0x0004df5d) popup_sp_fs_calendar_preview_list_single_pane

0x0462,	// (0x0004ace7) main_cam6_pano_pane

0x4781,	// (0x0004f006) main_mup3_pane_ParamLimits

0x0462,	// (0x0004ace7) main_phacti_pane

0xc0a5,	// (0x0005692a) bg_button_pane_cp11

0xc0bd,	// (0x00056942) main_mobtv_info_pane_g2_ParamLimits

0xc0bd,	// (0x00056942) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0005a4df) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0005a4df) main_mobtv_info_pane_g

0xc26f,	// (0x00056af4) sc_clock_pane_t5_ParamLimits

0xc26f,	// (0x00056af4) sc_clock_pane_t5

0xc44e,	// (0x00056cd3) main_radioblah_pane_g1_ParamLimits

0x1f05,	// (0x0004c78a) main_radioblah_pane_t3_ParamLimits

0x1f05,	// (0x0004c78a) main_radioblah_pane_t3

0x1f1d,	// (0x0004c7a2) main_radioblah_pane_t4_ParamLimits

0x1f1d,	// (0x0004c7a2) main_radioblah_pane_t4

0xc46c,	// (0x00056cf1) main_radioblah_text_pane_ParamLimits

0xc46c,	// (0x00056cf1) main_radioblah_text_pane

0xc479,	// (0x00056cfe) main_radioblah_info_pane_g1_ParamLimits

0xc50e,	// (0x00056d93) main_radioblah_info_pane_t4_ParamLimits

0xc50e,	// (0x00056d93) main_radioblah_info_pane_t4

0x4781,	// (0x0004f006) main_sp_fs_calendar_pane

0xccbf,	// (0x00057544) main_phacti_pane_g1

0xccc7,	// (0x0005754c) phacti_note_pane_ParamLimits

0xccc7,	// (0x0005754c) phacti_note_pane

0x248a,	// (0x0004cd0f) phacti_term_pane_ParamLimits

0x248a,	// (0x0004cd0f) phacti_term_pane

0x249f,	// (0x0004cd24) phacti_note_pane_t1_ParamLimits

0x249f,	// (0x0004cd24) phacti_note_pane_t1

0x24b6,	// (0x0004cd3b) phacti_term_pane_g1

0x24be,	// (0x0004cd43) phacti_term_pane_t1_ParamLimits

0x24be,	// (0x0004cd43) phacti_term_pane_t1

0x24e8,	// (0x0004cd6d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x37cb,	// (0x0004e050) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdc4,	// (0x0005a649) popup_sp_fs_calendar_preview_list_single_pane_g

0x24f0,	// (0x0004cd75) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x24f0,	// (0x0004cd75) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2505,	// (0x0004cd8a) aid_popup_sp_fs_bg_corner_pane

0xe9c8,	// (0x0005924d) popup_sp_fs_calendar_preview_bg_pane_g1

0x0462,	// (0x0004ace7) popup_sp_fs_calendar_preview_bg_pane

0x250d,	// (0x0004cd92) popup_sp_fs_calendar_preview_list_pane

0x4781,	// (0x0004f006) bg_main_sp_fs_cale_pane_ParamLimits

0x4781,	// (0x0004f006) bg_main_sp_fs_cale_pane

0x2515,	// (0x0004cd9a) listscroll_cale_mrui_pane_ParamLimits

0x2515,	// (0x0004cd9a) listscroll_cale_mrui_pane

0x2529,	// (0x0004cdae) listscroll_sp_fs_schedule_track_pane

0x2532,	// (0x0004cdb7) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x2532,	// (0x0004cdb7) main_sp_fs_ctrlbar_pane_cp01

0x2543,	// (0x0004cdc8) main_sp_fs_ribbon_pane

0x254b,	// (0x0004cdd0) popup_sp_fs_cale_preview_window

0xcd06,	// (0x0005758b) list_single_sp_fs_schedule_track_pane_ParamLimits

0xcd06,	// (0x0005758b) list_single_sp_fs_schedule_track_pane

0x0edb,	// (0x0004b760) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0edb,	// (0x0004b760) bg_sp_fs_highlight_list_pane_cp03

0xcd1f,	// (0x000575a4) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xcd1f,	// (0x000575a4) list_single_sp_fs_schedule_track_pane_g1

0xcd2b,	// (0x000575b0) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xcd2b,	// (0x000575b0) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc9,	// (0x0005a64e) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc9,	// (0x0005a64e) list_single_sp_fs_schedule_track_pane_g

0xcd37,	// (0x000575bc) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xcd37,	// (0x000575bc) list_single_sp_fs_schedule_track_pane_t1

0xcd4f,	// (0x000575d4) sp_fs_schedule_track_pane_ParamLimits

0xcd4f,	// (0x000575d4) sp_fs_schedule_track_pane

0x255d,	// (0x0004cde2) sp_fs_schedule_track_pane_g1

0x2565,	// (0x0004cdea) sp_fs_schedule_track_pane_g2

0x256d,	// (0x0004cdf2) sp_fs_schedule_track_pane_g3

0x2575,	// (0x0004cdfa) sp_fs_schedule_track_pane_g4

0x257d,	// (0x0004ce02) sp_fs_schedule_track_pane_g5

0x0004,

0xfdce,	// (0x0005a653) sp_fs_schedule_track_pane_g

0x0f61,	// (0x0004b7e6) bg_sp_fs_schedule_viewer_highlight_g1

0x39c8,	// (0x0004e24d) bg_sp_fs_schedule_viewer_highlight_g2

0x0f69,	// (0x0004b7ee) bg_sp_fs_schedule_viewer_highlight_g3

0x0f71,	// (0x0004b7f6) bg_sp_fs_schedule_viewer_highlight_g4

0x11c9,	// (0x0004ba4e) bg_sp_fs_schedule_viewer_highlight_g5

0x0f81,	// (0x0004b806) bg_sp_fs_schedule_viewer_highlight_g6

0x0f89,	// (0x0004b80e) bg_sp_fs_schedule_viewer_highlight_g7

0x0f91,	// (0x0004b816) bg_sp_fs_schedule_viewer_highlight_g8

0x39a8,	// (0x0004e22d) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd9,	// (0x0005a65e) bg_sp_fs_schedule_viewer_highlight_g

0x0462,	// (0x0004ace7) bg_main_sp_fs_ribbon_pane

0xcd5f,	// (0x000575e4) main_sp_fs_ribbon_pane_g1

0x2585,	// (0x0004ce0a) main_sp_fs_ribbon_pane_t1

0xcd68,	// (0x000575ed) main_sp_fs_ribbon_pane_t2

0x2594,	// (0x0004ce19) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdec,	// (0x0005a671) main_sp_fs_ribbon_pane_t

0x25a3,	// (0x0004ce28) main_sp_fs_ribbon_scheduler_pane

0x25ab,	// (0x0004ce30) bg_main_sp_fs_ribbon_pane_g1

0x25b4,	// (0x0004ce39) bg_main_sp_fs_ribbon_pane_g2

0x25bd,	// (0x0004ce42) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdf3,	// (0x0005a678) bg_main_sp_fs_ribbon_pane_g

0x25c5,	// (0x0004ce4a) main_sp_fs_ribbon_scheduler_pane_g1

0x25ce,	// (0x0004ce53) main_sp_fs_ribbon_scheduler_pane_g2

0x25d7,	// (0x0004ce5c) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdfa,	// (0x0005a67f) main_sp_fs_ribbon_scheduler_pane_g

0x25e0,	// (0x0004ce65) list_cale_mrui_pane

0xcd77,	// (0x000575fc) sp_fs_scroll_pane_cp07_ParamLimits

0xcd77,	// (0x000575fc) sp_fs_scroll_pane_cp07

0xcd8d,	// (0x00057612) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xcd8d,	// (0x00057612) bg_sp_fs_schedule_viewer_highlight

0x25e9,	// (0x0004ce6e) list_single_sp_fs_schedule_track_pane_cp01

0x25f1,	// (0x0004ce76) list_sp_fs_schedule_track_pane

0x25f9,	// (0x0004ce7e) sp_fs_scroll_pane_cp06_ParamLimits

0x25f9,	// (0x0004ce7e) sp_fs_scroll_pane_cp06

0xe9c8,	// (0x0005924d) bgmain_sp_fs_calendar_pane_g1

0xcd9a,	// (0x0005761f) list_single_cale_mrui_pane_ParamLimits

0xcd9a,	// (0x0005761f) list_single_cale_mrui_pane

0x260b,	// (0x0004ce90) list_single_cale_mrui_row_pane_ParamLimits

0x260b,	// (0x0004ce90) list_single_cale_mrui_row_pane

0x2618,	// (0x0004ce9d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x2618,	// (0x0004ce9d) list_single_cale_mrui_row_pane_g1

0x2650,	// (0x0004ced5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x2650,	// (0x0004ced5) list_single_cale_mrui_row_pane_t1

0xcdc2,	// (0x00057647) list_single_cale_mrui_row_pane_t2_ParamLimits

0xcdc2,	// (0x00057647) list_single_cale_mrui_row_pane_t2

0x2662,	// (0x0004cee7) list_single_cale_mrui_row_pane_t3_ParamLimits

0x2662,	// (0x0004cee7) list_single_cale_mrui_row_pane_t3

0x2691,	// (0x0004cf16) list_single_cale_mrui_row_pane_t4_ParamLimits

0x2691,	// (0x0004cf16) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe06,	// (0x0005a68b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe06,	// (0x0005a68b) list_single_cale_mrui_row_pane_t

0xce28,	// (0x000576ad) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xce28,	// (0x000576ad) list_single_cmail_header_editor_pane_bg_cp01

0xce48,	// (0x000576cd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xce48,	// (0x000576cd) list_single_cmail_header_editor_pane_bg_cp02

0xce64,	// (0x000576e9) main_radioblah_text_pane_t1_ParamLimits

0xce64,	// (0x000576e9) main_radioblah_text_pane_t1

0x26c0,	// (0x0004cf45) cam6_indi_pane_cp01

0x26c8,	// (0x0004cf4d) cam6_mode_pane_cp01

0x26d0,	// (0x0004cf55) cam6_pano_pane

0x26d9,	// (0x0004cf5e) cam6_zoom_pane_cp01

0x26e1,	// (0x0004cf66) cam6_pano_image_pane

0x26ec,	// (0x0004cf71) cam6_pano_pane_g1

0x1d9f,	// (0x0004c624) cam6_pano_pane_g2

0x26f5,	// (0x0004cf7a) cam6_pano_pane_g3

0x26fe,	// (0x0004cf83) cam6_pano_pane_g4

0xef5b,	// (0x000597e0) cam6_pano_pane_g5

0x2707,	// (0x0004cf8c) cam6_pano_pane_g6

0x2711,	// (0x0004cf96) cam6_pano_pane_g7

0x2719,	// (0x0004cf9e) cam6_pano_pane_g8

0x2722,	// (0x0004cfa7) cam6_pano_pane_g9

0x0008,

0xfe0f,	// (0x0005a694) cam6_pano_pane_g

0x0462,	// (0x0004ace7) main_browser_tag_pane

0x246b,	// (0x0004ccf0) grid_navstr_albumart_pane

0x272d,	// (0x0004cfb2) cell_navstr_albumart_pane_ParamLimits

0x272d,	// (0x0004cfb2) cell_navstr_albumart_pane

0x2750,	// (0x0004cfd5) cell_navstr_albumart_pane_g1

0xe39e,	// (0x00058c23) cell_navstr_albumart_pane_g2

0xe3ae,	// (0x00058c33) cell_navstr_albumart_pane_g3

0xe3a6,	// (0x00058c2b) cell_navstr_albumart_pane_g4

0x0003,

0xfe22,	// (0x0005a6a7) cell_navstr_albumart_pane_g

0xce7f,	// (0x00057704) bt_list_pane_ParamLimits

0xce7f,	// (0x00057704) bt_list_pane

0xce9f,	// (0x00057724) bt_list_pane_t1

0xceae,	// (0x00057733) bt_list_pane_t2

0x0001,

0xfe2b,	// (0x0005a6b0) bt_list_pane_t

0x0462,	// (0x0004ace7) main_cale_prevew_pane

0xcebd,	// (0x00057742) popup_cale_preview_window_ParamLimits

0xcebd,	// (0x00057742) popup_cale_preview_window

0x4781,	// (0x0004f006) bg_popup_preview_window_pane_cp05_ParamLimits

0x4781,	// (0x0004f006) bg_popup_preview_window_pane_cp05

0x2758,	// (0x0004cfdd) list_cale_preview_pane_ParamLimits

0x2758,	// (0x0004cfdd) list_cale_preview_pane

0x2a93,	// (0x0004d318) list_double_cale_preview_pane_ParamLimits

0x2a93,	// (0x0004d318) list_double_cale_preview_pane

0xced6,	// (0x0005775b) list_single_cale_preview_pane_ParamLimits

0xced6,	// (0x0005775b) list_single_cale_preview_pane

0xceec,	// (0x00057771) list_single_cale_preview_pane_g1

0xcef4,	// (0x00057779) list_single_cale_preview_pane_t1_ParamLimits

0xcef4,	// (0x00057779) list_single_cale_preview_pane_t1

0xcf09,	// (0x0005778e) list_double_cale_preview_pane_g1

0xcf11,	// (0x00057796) list_double_cale_preview_pane_t1_ParamLimits

0xcf11,	// (0x00057796) list_double_cale_preview_pane_t1

0xcf26,	// (0x000577ab) list_double_cale_preview_pane_t2_ParamLimits

0xcf26,	// (0x000577ab) list_double_cale_preview_pane_t2

0x0001,

0xfe30,	// (0x0005a6b5) list_double_cale_preview_pane_t_ParamLimits

0xfe30,	// (0x0005a6b5) list_double_cale_preview_pane_t

0x0462,	// (0x0004ace7) main_ezdial_pane

0x4781,	// (0x0004f006) main_sp_fs_email_pane_ParamLimits

0xc704,	// (0x00056f89) cmail_ddmenu_btn01_pane_ParamLimits

0xc704,	// (0x00056f89) cmail_ddmenu_btn01_pane

0xc721,	// (0x00056fa6) cmail_ddmenu_btn02_pane_ParamLimits

0xc721,	// (0x00056fa6) cmail_ddmenu_btn02_pane

0xc73f,	// (0x00056fc4) cmail_ddmenu_btn03_pane_ParamLimits

0xc73f,	// (0x00056fc4) cmail_ddmenu_btn03_pane

0xc76d,	// (0x00056ff2) main_sp_fs_ctrlbar_pane_ParamLimits

0xc789,	// (0x0005700e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xcb86,	// (0x0005740b) list_cmail_body_pane_ParamLimits

0x2397,	// (0x0004cc1c) bg_button_pane_cp12

0x23ac,	// (0x0004cc31) list_single_cmail_header_detail_pane_g3_ParamLimits

0x23ac,	// (0x0004cc31) list_single_cmail_header_detail_pane_g3

0xcc1f,	// (0x000574a4) list_single_cmail_header_detail_pane_t2_ParamLimits

0xcc1f,	// (0x000574a4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb5,	// (0x0005a63a) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb5,	// (0x0005a63a) list_single_cmail_header_detail_pane_t

0x24d3,	// (0x0004cd58) phacti_term_pane_t2_ParamLimits

0x24d3,	// (0x0004cd58) phacti_term_pane_t2

0x0001,

0xfdbf,	// (0x0005a644) phacti_term_pane_t_ParamLimits

0xfdbf,	// (0x0005a644) phacti_term_pane_t

0x2764,	// (0x0004cfe9) aid_size_list_single_double

0xcf3e,	// (0x000577c3) popup_ezdial_listscroll_window

0xcf5e,	// (0x000577e3) popup_number_entry_window_cp01

0x40b3,	// (0x0004e938) bg_popup_call_pane_cp09

0x2770,	// (0x0004cff5) ezdial_list_pane

0x2778,	// (0x0004cffd) scroll_pane_cp23

0xe7ad,	// (0x00059032) bg_button_pane_cp028_ParamLimits

0xe7ad,	// (0x00059032) bg_button_pane_cp028

0xcf6c,	// (0x000577f1) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xcf6c,	// (0x000577f1) cmail_ddmenu_btn01_pane_g1

0xcf7c,	// (0x00057801) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xcf7c,	// (0x00057801) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe35,	// (0x0005a6ba) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe35,	// (0x0005a6ba) cmail_ddmenu_btn01_pane_g

0x2780,	// (0x0004d005) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2780,	// (0x0004d005) cmail_ddmenu_btn01_pane_t1

0xe581,	// (0x00058e06) bg_button_pane_cp029_ParamLimits

0xe581,	// (0x00058e06) bg_button_pane_cp029

0xcf7c,	// (0x00057801) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xcf7c,	// (0x00057801) cmail_ddmenu_btn02_pane_g1

0xcf94,	// (0x00057819) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xcf94,	// (0x00057819) cmail_ddmenu_btn02_pane_t1

0x0edb,	// (0x0004b760) bg_button_pane_cp031_ParamLimits

0x0edb,	// (0x0004b760) bg_button_pane_cp031

0xcf7c,	// (0x00057801) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xcf7c,	// (0x00057801) cmail_ddmenu_btn03_pane_g1

0xcf94,	// (0x00057819) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xcf94,	// (0x00057819) cmail_ddmenu_btn03_pane_t1

0xa21e,	// (0x00054aa3) cell_dialer2_keypad_pane_t1_ParamLimits

0xa238,	// (0x00054abd) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xa238,	// (0x00054abd) cell_dialer2_keypad_pane_t1_copy1

0xbf45,	// (0x000567ca) ncimui_group_button_pane

0x4781,	// (0x0004f006) main_sp_fs_calendar_pane_ParamLimits

0xcba3,	// (0x00057428) list_single_cmail_header_caption_pane_ParamLimits

0x151c,	// (0x0004bda1) aid_recal_txt_sm_pane

0x0462,	// (0x0004ace7) mian_recal_day_pane

0x254b,	// (0x0004cdd0) popup_sp_fs_cale_preview_window_ParamLimits

0x0462,	// (0x0004ace7) list_recal_day_pane

0x27ae,	// (0x0004d033) list_single_recal_day_pane_ParamLimits

0x27ae,	// (0x0004d033) list_single_recal_day_pane

0x27c0,	// (0x0004d045) list_single_recal_day_pane_g1_ParamLimits

0x27c0,	// (0x0004d045) list_single_recal_day_pane_g1

0x27cc,	// (0x0004d051) list_single_recal_day_pane_g2_ParamLimits

0x27cc,	// (0x0004d051) list_single_recal_day_pane_g2

0x27db,	// (0x0004d060) list_single_recal_day_pane_g3_ParamLimits

0x27db,	// (0x0004d060) list_single_recal_day_pane_g3

0xcfb8,	// (0x0005783d) list_single_recal_day_pane_g4_ParamLimits

0xcfb8,	// (0x0005783d) list_single_recal_day_pane_g4

0x27e7,	// (0x0004d06c) list_single_recal_day_pane_g5_ParamLimits

0x27e7,	// (0x0004d06c) list_single_recal_day_pane_g5

0x27f6,	// (0x0004d07b) list_single_recal_day_pane_g6_ParamLimits

0x27f6,	// (0x0004d07b) list_single_recal_day_pane_g6

0x0005,

0xfe44,	// (0x0005a6c9) list_single_recal_day_pane_g_ParamLimits

0xfe44,	// (0x0005a6c9) list_single_recal_day_pane_g

0x2802,	// (0x0004d087) list_single_recal_day_pane_t1

0x2810,	// (0x0004d095) list_single_recal_day_pane_t2

0x0001,

0xfe51,	// (0x0005a6d6) list_single_recal_day_pane_t

0xcfcb,	// (0x00057850) ncimui_query_button_pane_ParamLimits

0xcfcb,	// (0x00057850) ncimui_query_button_pane

0xcfdb,	// (0x00057860) ncimui_query_button_pane_t1_ParamLimits

0xcfdb,	// (0x00057860) ncimui_query_button_pane_t1

0x281e,	// (0x0004d0a3) ncimui_query_button_pane_t2_ParamLimits

0x281e,	// (0x0004d0a3) ncimui_query_button_pane_t2

0x0001,

0xfe56,	// (0x0005a6db) ncimui_query_button_pane_t_ParamLimits

0xfe56,	// (0x0005a6db) ncimui_query_button_pane_t

0xcfee,	// (0x00057873) query_button_pane_ParamLimits

0xcfee,	// (0x00057873) query_button_pane

0x0462,	// (0x0004ace7) bg_button_pane_cp0028

0x2831,	// (0x0004d0b6) query_button_pane_t1

0x86a9,	// (0x00052f2e) main_tport_pane_ParamLimits

0xcab6,	// (0x0005733b) bg_popup_window_pane_cp01_ParamLimits

0xcab6,	// (0x0005733b) bg_popup_window_pane_cp01

0xcac3,	// (0x00057348) heading_pane_cp08_ParamLimits

0xcac3,	// (0x00057348) heading_pane_cp08

0xcad1,	// (0x00057356) heading_pane_cp07_ParamLimits

0xcad1,	// (0x00057356) heading_pane_cp07

0x2359,	// (0x0004cbde) cell_tport_appsw_pane_g2

0x0002,

0xfda2,	// (0x0005a627) cell_tport_appsw_pane_g

0x7dc0,	// (0x00052645) input_candi_list_open_g1

0x3b6f,	// (0x0004e3f4) list_cale_time_pane_g6_ParamLimits

0x3b6f,	// (0x0004e3f4) list_cale_time_pane_g6

0x90e2,	// (0x00053967) aid_size_touch_calib_1_ParamLimits

0x90e2,	// (0x00053967) aid_size_touch_calib_1

0x90ee,	// (0x00053973) aid_size_touch_calib_2_ParamLimits

0x90ee,	// (0x00053973) aid_size_touch_calib_2

0x90fc,	// (0x00053981) aid_size_touch_calib_3_ParamLimits

0x90fc,	// (0x00053981) aid_size_touch_calib_3

0x910c,	// (0x00053991) aid_size_touch_calib_4_ParamLimits

0x910c,	// (0x00053991) aid_size_touch_calib_4

0x911a,	// (0x0005399f) main_touch_calib_button_group_pane_ParamLimits

0x911a,	// (0x0005399f) main_touch_calib_button_group_pane

0x9128,	// (0x000539ad) main_touch_calib_pane_g1_ParamLimits

0x9134,	// (0x000539b9) main_touch_calib_pane_g2_ParamLimits

0x9140,	// (0x000539c5) main_touch_calib_pane_g3_ParamLimits

0x914c,	// (0x000539d1) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x00059ffa) main_touch_calib_pane_g_ParamLimits

0x9158,	// (0x000539dd) main_touch_calib_pane_t1_ParamLimits

0x916f,	// (0x000539f4) main_touch_calib_pane_t2_ParamLimits

0x9186,	// (0x00053a0b) main_touch_calib_pane_t3_ParamLimits

0x919a,	// (0x00053a1f) main_touch_calib_pane_t4_ParamLimits

0x91ae,	// (0x00053a33) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0005a003) main_touch_calib_pane_t_ParamLimits

0xed31,	// (0x000595b6) list_single_fp_cale_pane_g3_ParamLimits

0xed31,	// (0x000595b6) list_single_fp_cale_pane_g3

0xa67e,	// (0x00054f03) bg_button_pane_cp012_ParamLimits

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp03_ParamLimits

0xb06b,	// (0x000558f0) cell_vitu2_function_top_pane_g1_ParamLimits

0xa67e,	// (0x00054f03) bg_vkb2_func_pane_cp04_ParamLimits

0xbee3,	// (0x00056768) main_ncimui_button_group_pane_ParamLimits

0xbee3,	// (0x00056768) main_ncimui_button_group_pane

0xbf33,	// (0x000567b8) main_ncimui_pane_t3_ParamLimits

0xbf33,	// (0x000567b8) main_ncimui_pane_t3

0x2481,	// (0x0004cd06) phacti_button_group_pane

0x2764,	// (0x0004cfe9) aid_size_list_single_double_ParamLimits

0xcf3e,	// (0x000577c3) popup_ezdial_listscroll_window_ParamLimits

0xcf5e,	// (0x000577e3) popup_number_entry_window_cp01_ParamLimits

0xcffb,	// (0x00057880) phacti_button_pane_ParamLimits

0xcffb,	// (0x00057880) phacti_button_pane

0x0462,	// (0x0004ace7) bg_button_pane_cp14

0x283f,	// (0x0004d0c4) phacti_button_pane_t1

0xd00c,	// (0x00057891) main_touch_calib_button_pane_ParamLimits

0xd00c,	// (0x00057891) main_touch_calib_button_pane

0x35d4,	// (0x0004de59) bg_button_pane_cp18_ParamLimits

0x35d4,	// (0x0004de59) bg_button_pane_cp18

0x284d,	// (0x0004d0d2) main_touch_calib_button_pane_t1_ParamLimits

0x284d,	// (0x0004d0d2) main_touch_calib_button_pane_t1

0x2863,	// (0x0004d0e8) main_touch_calib_button_pane_t2_ParamLimits

0x2863,	// (0x0004d0e8) main_touch_calib_button_pane_t2

0x0001,

0xfe5b,	// (0x0005a6e0) main_touch_calib_button_pane_t_ParamLimits

0xfe5b,	// (0x0005a6e0) main_touch_calib_button_pane_t

0x0462,	// (0x0004ace7) cell_ncimui_button_pane

0x0462,	// (0x0004ace7) bg_button_pane_cp032

0x2881,	// (0x0004d106) cell_ncimui_button_pane_t1

0xa294,	// (0x00054b19) image3_infobar_pane_ParamLimits

0xa294,	// (0x00054b19) image3_infobar_pane

0xc291,	// (0x00056b16) fs_bigclock_status_pane_ParamLimits

0xc291,	// (0x00056b16) fs_bigclock_status_pane

0xc29e,	// (0x00056b23) main_fs_bigclock_clock_pane_ParamLimits

0xc29e,	// (0x00056b23) main_fs_bigclock_clock_pane

0xc2c2,	// (0x00056b47) main_fs_bigclock_indi_pane_ParamLimits

0xc2c2,	// (0x00056b47) main_fs_bigclock_indi_pane

0xc2f5,	// (0x00056b7a) main_fs_bigclock_swipe_pane_ParamLimits

0xc2f5,	// (0x00056b7a) main_fs_bigclock_swipe_pane

0x0462,	// (0x0004ace7) main_fs_clock_dumped_data

0xc327,	// (0x00056bac) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc327,	// (0x00056bac) list_single_fs_bigclock_indicator_pane_g1

0xc348,	// (0x00056bcd) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc348,	// (0x00056bcd) list_single_fs_bigclock_indicator_pane_g2

0xc362,	// (0x00056be7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc362,	// (0x00056be7) list_single_fs_bigclock_indicator_pane_g3

0xc37c,	// (0x00056c01) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc37c,	// (0x00056c01) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0005a513) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0005a513) list_single_fs_bigclock_indicator_pane_g

0xc3a2,	// (0x00056c27) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc3a2,	// (0x00056c27) list_single_fs_bigclock_indicator_pane_t1

0xc3ca,	// (0x00056c4f) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc3ca,	// (0x00056c4f) list_single_fs_bigclock_indicator_pane_t2

0xc3f2,	// (0x00056c77) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc3f2,	// (0x00056c77) list_single_fs_bigclock_indicator_pane_t3

0xc41a,	// (0x00056c9f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc41a,	// (0x00056c9f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0005a51e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0005a51e) list_single_fs_bigclock_indicator_pane_t

0x288f,	// (0x0004d114) image3_infobar_fav_pane_ParamLimits

0x288f,	// (0x0004d114) image3_infobar_fav_pane

0x289f,	// (0x0004d124) image3_infobar_loc_pane_ParamLimits

0x289f,	// (0x0004d124) image3_infobar_loc_pane

0x28b3,	// (0x0004d138) image3_infobar_time_pane_ParamLimits

0x28b3,	// (0x0004d138) image3_infobar_time_pane

0xe9c8,	// (0x0005924d) image3_infobar_time_pane_g1

0x28c3,	// (0x0004d148) image3_infobar_time_pane_t1

0xe9c8,	// (0x0005924d) image3_infobar_loc_pane_g1

0x28d1,	// (0x0004d156) image3_infobar_loc_pane_g2

0x0001,

0xfe60,	// (0x0005a6e5) image3_infobar_loc_pane_g

0x28d9,	// (0x0004d15e) image3_infobar_loc_pane_t1

0xe9c8,	// (0x0005924d) image3_infobar_fav_pane_g1

0x28e7,	// (0x0004d16c) image3_infobar_fav_pane_g2

0x0001,

0xfe65,	// (0x0005a6ea) image3_infobar_fav_pane_g

0x28ef,	// (0x0004d174) fs_bigclock_status_battery_pane

0x28f8,	// (0x0004d17d) fs_bigclock_status_signal_pane

0x2901,	// (0x0004d186) fs_bigclock_status_title_pane

0x290a,	// (0x0004d18f) fs_bigclock_status_signal_pane_g1

0x2913,	// (0x0004d198) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe6a,	// (0x0005a6ef) fs_bigclock_status_signal_pane_g

0x291b,	// (0x0004d1a0) fs_bigclock_status_battery_pane_g1

0x2924,	// (0x0004d1a9) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6f,	// (0x0005a6f4) fs_bigclock_status_battery_pane_g

0x292c,	// (0x0004d1b1) fs_bigclock_status_title_pane_t1

0xe9c8,	// (0x0005924d) main_fs_bigclock_clock_pane_g1

0x293a,	// (0x0004d1bf) main_fs_bigclock_clock_pane_g2

0x293a,	// (0x0004d1bf) main_fs_bigclock_clock_pane_g3

0x293a,	// (0x0004d1bf) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe74,	// (0x0005a6f9) main_fs_bigclock_clock_pane_g

0xd01e,	// (0x000578a3) main_fs_bigclock_clock_pane_t1

0xd02c,	// (0x000578b1) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe7d,	// (0x0005a702) main_fs_bigclock_clock_pane_t

0x2942,	// (0x0004d1c7) list_single_fs_bigclock_indicator_pane_ParamLimits

0x2942,	// (0x0004d1c7) list_single_fs_bigclock_indicator_pane

0xd03b,	// (0x000578c0) list_single_fs_bigclock_pane_ParamLimits

0xd03b,	// (0x000578c0) list_single_fs_bigclock_pane

0x295c,	// (0x0004d1e1) main_fs_bigclock_indicator_pane_t1

0x296b,	// (0x0004d1f0) list_single_fs_bigclock_pane_g1

0x2973,	// (0x0004d1f8) list_single_fs_bigclock_pane_t1

0xe9c8,	// (0x0005924d) main_fs_bigclock_swipe_pane_g1

0x29b3,	// (0x0004d238) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe8e,	// (0x0005a713) main_fs_bigclock_swipe_pane_g

0x29bb,	// (0x0004d240) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x29bb,	// (0x0004d240) main_fs_bigclock_swipe_pane_t1

0x7572,	// (0x00051df7) call_type_pane_ParamLimits

0x0462,	// (0x0004ace7) main_btmg_pane

0x2644,	// (0x0004cec9) list_single_cale_mrui_row_pane_g2_ParamLimits

0x2644,	// (0x0004cec9) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe01,	// (0x0005a686) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe01,	// (0x0005a686) list_single_cale_mrui_row_pane_g

0x279e,	// (0x0004d023) list_recal_vselct_arw_lo_pane

0x27a6,	// (0x0004d02b) list_recal_vselct_arw_up_pane

0x1513,	// (0x0004bd98) list_recal_vselct_pane

0x29d8,	// (0x0004d25d) btmg_button_pane

0xd09e,	// (0x00057923) main_btmg_pane_g1

0x0462,	// (0x0004ace7) bg_button_pane_cp044

0x29e2,	// (0x0004d267) btmg_button_pane_t1

0xe579,	// (0x00058dfe) aid_listscroll_gen

0x4781,	// (0x0004f006) main_cntbar_detail_pane

0x2377,	// (0x0004cbfc) list_cmail_folder_pane

0x2387,	// (0x0004cc0c) sp_fs_scroll_pane_cp03_ParamLimits

0xd0a6,	// (0x0005792b) list_single_fs_dyc_pane_cp01_ParamLimits

0xd0a6,	// (0x0005792b) list_single_fs_dyc_pane_cp01

0x29f0,	// (0x0004d275) aid_size_cmail_indent

0x29f9,	// (0x0004d27e) list_single_dyc_row_pane_cp01

0xd0ec,	// (0x00057971) cntbar_detail_list_pane_ParamLimits

0xd0ec,	// (0x00057971) cntbar_detail_list_pane

0xd126,	// (0x000579ab) main_cntbar_detail_cont_pane_ParamLimits

0xd126,	// (0x000579ab) main_cntbar_detail_cont_pane

0x750c,	// (0x00051d91) scroll_pane_cp032_ParamLimits

0x750c,	// (0x00051d91) scroll_pane_cp032

0xd132,	// (0x000579b7) cntbar_detail_list_event_pane_ParamLimits

0xd132,	// (0x000579b7) cntbar_detail_list_event_pane

0xd0f8,	// (0x0005797d) cntbar_detail_list_shct_pane

0x3a16,	// (0x0004e29b) aid_list_gen

0x2a02,	// (0x0004d287) aid_scroll

0x2a0b,	// (0x0004d290) aid_size_touch_scroll_bar

0x1f77,	// (0x0004c7fc) aid_list_double

0x2a14,	// (0x0004d299) aid_list_single

0xd146,	// (0x000579cb) aid_list_single_lg

0x2a1d,	// (0x0004d2a2) aid_list_z_g_a_sm

0x2a25,	// (0x0004d2aa) aid_list_z_g_d

0x2a2d,	// (0x0004d2b2) aid_txt_z_prm

0xd14f,	// (0x000579d4) aid_txt_z_prm_cp01

0xd15d,	// (0x000579e2) aid_txt_z_sec

0xd16b,	// (0x000579f0) main_cntbar_detail_cont_pane_g1_ParamLimits

0xd16b,	// (0x000579f0) main_cntbar_detail_cont_pane_g1

0xd178,	// (0x000579fd) main_cntbar_detail_cont_pane_g2_ParamLimits

0xd178,	// (0x000579fd) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe93,	// (0x0005a718) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe93,	// (0x0005a718) main_cntbar_detail_cont_pane_g

0x2a3b,	// (0x0004d2c0) main_cntbar_detail_cont_pane_t1

0x2a49,	// (0x0004d2ce) main_cntbar_detail_cont_pane_t2

0x2a57,	// (0x0004d2dc) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe98,	// (0x0005a71d) main_cntbar_detail_cont_pane_t

0xd184,	// (0x00057a09) cell_cntbar_detail_list_shct_pane_ParamLimits

0xd184,	// (0x00057a09) cell_cntbar_detail_list_shct_pane

0x2a65,	// (0x0004d2ea) cntbar_detail_list_shct_pane_g1

0x2a6e,	// (0x0004d2f3) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9f,	// (0x0005a724) cntbar_detail_list_shct_pane_g

0xd198,	// (0x00057a1d) cntbar_detail_list_event_pane_g1_ParamLimits

0xd198,	// (0x00057a1d) cntbar_detail_list_event_pane_g1

0xd1a4,	// (0x00057a29) cntbar_detail_list_event_pane_g2_ParamLimits

0xd1a4,	// (0x00057a29) cntbar_detail_list_event_pane_g2

0x0005,

0xfea4,	// (0x0005a729) cntbar_detail_list_event_pane_g_ParamLimits

0xfea4,	// (0x0005a729) cntbar_detail_list_event_pane_g

0xd210,	// (0x00057a95) cntbar_detail_list_event_pane_t1_ParamLimits

0xd210,	// (0x00057a95) cntbar_detail_list_event_pane_t1

0xd225,	// (0x00057aaa) cntbar_detail_list_event_pane_t2_ParamLimits

0xd225,	// (0x00057aaa) cntbar_detail_list_event_pane_t2

0x0002,

0xfeb1,	// (0x0005a736) cntbar_detail_list_event_pane_t_ParamLimits

0xfeb1,	// (0x0005a736) cntbar_detail_list_event_pane_t

0xe9c8,	// (0x0005924d) cell_cntbar_detail_list_shct_pane_g1

0x790c,	// (0x00052191) navi_pane_mv_g3

0x4781,	// (0x0004f006) main_cntbar_detail_pane_ParamLimits

0x0462,	// (0x0004ace7) main_notif_wgt_pane

0x9f48,	// (0x000547cd) aid_tch_main_mp4_pane_g4

0xa17d,	// (0x00054a02) popup_slider_window_cp02

0x2795,	// (0x0004d01a) list_recal_day_event_pane

0xd0cc,	// (0x00057951) cntbar_detail_btn_pane_ParamLimits

0xd0cc,	// (0x00057951) cntbar_detail_btn_pane

0xd0dc,	// (0x00057961) cntbar_detail_btn_pane_cp01_ParamLimits

0xd0dc,	// (0x00057961) cntbar_detail_btn_pane_cp01

0xd0f8,	// (0x0005797d) cntbar_detail_list_shct_pane_ParamLimits

0xd104,	// (0x00057989) cntbar_detail_pane_g1_ParamLimits

0xd104,	// (0x00057989) cntbar_detail_pane_g1

0xd110,	// (0x00057995) cntbar_detail_pane_t1_ParamLimits

0xd110,	// (0x00057995) cntbar_detail_pane_t1

0xd1b0,	// (0x00057a35) cntbar_detail_list_event_pane_g3_ParamLimits

0xd1b0,	// (0x00057a35) cntbar_detail_list_event_pane_g3

0xd1c8,	// (0x00057a4d) cntbar_detail_list_event_pane_g4_ParamLimits

0xd1c8,	// (0x00057a4d) cntbar_detail_list_event_pane_g4

0xd1e0,	// (0x00057a65) cntbar_detail_list_event_pane_g5_ParamLimits

0xd1e0,	// (0x00057a65) cntbar_detail_list_event_pane_g5

0xd1f8,	// (0x00057a7d) cntbar_detail_list_event_pane_g6_ParamLimits

0xd1f8,	// (0x00057a7d) cntbar_detail_list_event_pane_g6

0xd23a,	// (0x00057abf) cntbar_detail_list_event_pane_t3_ParamLimits

0xd23a,	// (0x00057abf) cntbar_detail_list_event_pane_t3

0xd24c,	// (0x00057ad1) popup_notif_wgt_window_ParamLimits

0xd24c,	// (0x00057ad1) popup_notif_wgt_window

0xd25c,	// (0x00057ae1) popup_submenu_window_cp01_ParamLimits

0xd25c,	// (0x00057ae1) popup_submenu_window_cp01

0x40b3,	// (0x0004e938) bg_popup_window_pane_cp10

0x2a77,	// (0x0004d2fc) listscroll_notif_wgt_pane

0x2a81,	// (0x0004d306) list_notif_wgt_window

0x2a8a,	// (0x0004d30f) scroll_pane_cp033

0x2a93,	// (0x0004d318) list_notif_wgt_row_pane_ParamLimits

0x2a93,	// (0x0004d318) list_notif_wgt_row_pane

0x2aa5,	// (0x0004d32a) aid_size_list_notif_wgt_del

0x2aae,	// (0x0004d333) list_notif_wgt_row_pane_g1

0x2ab6,	// (0x0004d33b) list_notif_wgt_row_pane_g2

0x2abe,	// (0x0004d343) list_notif_wgt_row_pane_g3

0x0002,

0xfeb8,	// (0x0005a73d) list_notif_wgt_row_pane_g

0x2ac7,	// (0x0004d34c) list_notif_wgt_row_pane_t1

0x2ad5,	// (0x0004d35a) list_notif_wgt_row_pane_t2

0x2ae3,	// (0x0004d368) list_notif_wgt_row_pane_t3

0x0002,

0xfebf,	// (0x0005a744) list_notif_wgt_row_pane_t

0x11e9,	// (0x0004ba6e) list_recal_day_event_pane_g1

0x2af1,	// (0x0004d376) list_recal_day_event_pane_t1

0x0462,	// (0x0004ace7) bg_button_pane_cp045

0x2b00,	// (0x0004d385) cntbar_detail_btn_pane_t1

0xe581,	// (0x00058e06) main_callh_pane_ParamLimits

0xe581,	// (0x00058e06) main_callh_pane

0x0462,	// (0x0004ace7) main_coverflow0_pane

0x0462,	// (0x0004ace7) main_wgtman_pane

0xc30d,	// (0x00056b92) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xc30d,	// (0x00056b92) main_fs_bigclock_unlock_btn_pane

0x2351,	// (0x0004cbd6) bg_button_pane_cp16

0x2361,	// (0x0004cbe6) cell_tport_appsw_pane_g3

0xd26a,	// (0x00057aef) cf0_flow_pane_ParamLimits

0xd26a,	// (0x00057aef) cf0_flow_pane

0x2b0e,	// (0x0004d393) listscroll_cf0_pane

0x2b17,	// (0x0004d39c) main_cf0_pane_g1

0xd279,	// (0x00057afe) main_cf0_pane_t1_ParamLimits

0xd279,	// (0x00057afe) main_cf0_pane_t1

0xd28d,	// (0x00057b12) main_cf0_pane_t2_ParamLimits

0xd28d,	// (0x00057b12) main_cf0_pane_t2

0x0001,

0xfec6,	// (0x0005a74b) main_cf0_pane_t_ParamLimits

0xfec6,	// (0x0005a74b) main_cf0_pane_t

0x2b21,	// (0x0004d3a6) scroll_pane_cp11

0xd2a1,	// (0x00057b26) cf0_flow_pane_g1

0xd2a9,	// (0x00057b2e) cf0_flow_pane_g2

0x0001,

0xfecb,	// (0x0005a750) cf0_flow_pane_g

0xd2b1,	// (0x00057b36) cf0_flow_pane_t1

0x0462,	// (0x0004ace7) main_call6_pane

0x0462,	// (0x0004ace7) main_calllock_pane

0xd2bf,	// (0x00057b44) call6_btn_grp_pane_ParamLimits

0xd2bf,	// (0x00057b44) call6_btn_grp_pane

0xd2ce,	// (0x00057b53) call6_pane_g1_ParamLimits

0xd2ce,	// (0x00057b53) call6_pane_g1

0xd2dd,	// (0x00057b62) popup_call6_1st_window_ParamLimits

0xd2dd,	// (0x00057b62) popup_call6_1st_window

0xd2eb,	// (0x00057b70) popup_call6_2nd_window_ParamLimits

0xd2eb,	// (0x00057b70) popup_call6_2nd_window

0xd2f9,	// (0x00057b7e) cell_call6_btn_pane_ParamLimits

0xd2f9,	// (0x00057b7e) cell_call6_btn_pane

0x40b3,	// (0x0004e938) bg_popup_call2_in_pane_cp03

0x2b2c,	// (0x0004d3b1) popup_call6_1st_window_g1

0x2b34,	// (0x0004d3b9) popup_call6_1st_window_g2

0x2b3c,	// (0x0004d3c1) popup_call6_1st_window_g3

0x0002,

0xfed0,	// (0x0005a755) popup_call6_1st_window_g

0x2b44,	// (0x0004d3c9) popup_call6_1st_window_t1

0x2b53,	// (0x0004d3d8) popup_call6_1st_window_t2

0x2b63,	// (0x0004d3e8) popup_call6_1st_window_t3

0x0002,

0xfed7,	// (0x0005a75c) popup_call6_1st_window_t

0x40b3,	// (0x0004e938) bg_popup_call2_in_pane_cp04

0x2b2c,	// (0x0004d3b1) popup_call6_2nd_window_g1

0x2b34,	// (0x0004d3b9) popup_call6_2nd_window_g2

0x2b3c,	// (0x0004d3c1) popup_call6_2nd_window_g3

0x0002,

0xfed0,	// (0x0005a755) popup_call6_2nd_window_g

0x2b44,	// (0x0004d3c9) popup_call6_2nd_window_t1

0x0462,	// (0x0004ace7) bg_button_pane_cp15

0x2b73,	// (0x0004d3f8) cell_call6_btn_pane_g1

0x2b7c,	// (0x0004d401) cell_call6_btn_pane_t1

0xd308,	// (0x00057b8d) listscroll_wgtman_pane_ParamLimits

0xd308,	// (0x00057b8d) listscroll_wgtman_pane

0xd326,	// (0x00057bab) wgtman_btn_pane_ParamLimits

0xd326,	// (0x00057bab) wgtman_btn_pane

0x3f6a,	// (0x0004e7ef) aid_scroll_copy1

0x2b8b,	// (0x0004d410) list_wgtman_pane

0xd35b,	// (0x00057be0) wgtman_btn_pane_g1_ParamLimits

0xd35b,	// (0x00057be0) wgtman_btn_pane_g1

0xd383,	// (0x00057c08) wgtman_btn_pane_t1_ParamLimits

0xd383,	// (0x00057c08) wgtman_btn_pane_t1

0x2b95,	// (0x0004d41a) wgtman_btn_pane_t2_ParamLimits

0x2b95,	// (0x0004d41a) wgtman_btn_pane_t2

0x0001,

0xfede,	// (0x0005a763) wgtman_btn_pane_t_ParamLimits

0xfede,	// (0x0005a763) wgtman_btn_pane_t

0xd3ba,	// (0x00057c3f) listrow_wgtman_pane_ParamLimits

0xd3ba,	// (0x00057c3f) listrow_wgtman_pane

0xd3d5,	// (0x00057c5a) listrow_wgtman_pane_g1

0xd3de,	// (0x00057c63) listrow_wgtman_pane_g2

0x0001,

0xfee3,	// (0x0005a768) listrow_wgtman_pane_g

0xd3e8,	// (0x00057c6d) listrow_wgtman_pane_t1

0xd3f6,	// (0x00057c7b) listrow_wgtman_pane_t2

0x0001,

0xfee8,	// (0x0005a76d) listrow_wgtman_pane_t

0xd404,	// (0x00057c89) wait_bar_pane_cp09

0x2bac,	// (0x0004d431) main_calllock_btn_pane

0x2bb6,	// (0x0004d43b) main_calllock_pane_g1

0x0462,	// (0x0004ace7) bg_button_pane_cp17

0x2bc2,	// (0x0004d447) main_calllock_btn_pane_g1

0x2bcb,	// (0x0004d450) main_calllock_btn_pane_t1

0x0462,	// (0x0004ace7) main_dialer3_pane

0x0462,	// (0x0004ace7) main_fmrd2_pane

0xe9c8,	// (0x0005924d) main_fs_bigclock_unlock_btn_pane_g1

0x2be2,	// (0x0004d467) main_fs_bigclock_unlock_btn_pane_t1

0xd40c,	// (0x00057c91) area_fmrd2_info_pane_ParamLimits

0xd40c,	// (0x00057c91) area_fmrd2_info_pane

0xd41a,	// (0x00057c9f) area_fmrd2_visual_pane_ParamLimits

0xd41a,	// (0x00057c9f) area_fmrd2_visual_pane

0xd428,	// (0x00057cad) fmrd2_indi_pane_ParamLimits

0xd428,	// (0x00057cad) fmrd2_indi_pane

0xd435,	// (0x00057cba) area_fmrd2_visual_pane_g1

0xd43d,	// (0x00057cc2) area_fmrd2_visual_pane_t1

0xd44d,	// (0x00057cd2) area_fmrd2_visual_pane_t2

0xd45d,	// (0x00057ce2) area_fmrd2_visual_pane_t3

0x0002,

0xfef2,	// (0x0005a777) area_fmrd2_visual_pane_t

0xd46d,	// (0x00057cf2) area_fmrd2_info_pane_g1

0xd475,	// (0x00057cfa) area_fmrd2_info_pane_t1

0xd485,	// (0x00057d0a) area_fmrd2_info_pane_t2

0xd495,	// (0x00057d1a) area_fmrd2_info_pane_t3

0xd4a5,	// (0x00057d2a) area_fmrd2_info_pane_t4

0x0003,

0xfef9,	// (0x0005a77e) area_fmrd2_info_pane_t

0xd4b3,	// (0x00057d38) fmrd2_indi_pane_t1

0xd4c3,	// (0x00057d48) fmrd2_indi_pane_t2

0xd4d3,	// (0x00057d58) fmrd2_indi_pane_t3

0x0002,

0xff02,	// (0x0005a787) fmrd2_indi_pane_t

0xc38b,	// (0x00056c10) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc38b,	// (0x00056c10) list_single_fs_bigclock_indicator_pane_g5

0xc42f,	// (0x00056cb4) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc42f,	// (0x00056cb4) list_single_fs_bigclock_indicator_pane_t5

0xccdd,	// (0x00057562) aid_cell_bcale_month_pane_ParamLimits

0xccdd,	// (0x00057562) aid_cell_bcale_month_pane

0xcce9,	// (0x0005756e) bcale_month_pane_ParamLimits

0xcce9,	// (0x0005756e) bcale_month_pane

0xccf7,	// (0x0005757c) bcale_preview_pane_ParamLimits

0xccf7,	// (0x0005757c) bcale_preview_pane

0x2973,	// (0x0004d1f8) list_single_fs_bigclock_pane_t1_ParamLimits

0x298f,	// (0x0004d214) list_single_fs_bigclock_pane_t2_ParamLimits

0x298f,	// (0x0004d214) list_single_fs_bigclock_pane_t2

0x0001,

0xfe89,	// (0x0005a70e) list_single_fs_bigclock_pane_t_ParamLimits

0xfe89,	// (0x0005a70e) list_single_fs_bigclock_pane_t

0x2bda,	// (0x0004d45f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeed,	// (0x0005a772) main_fs_bigclock_unlock_btn_pane_g

0xd4e1,	// (0x00057d66) aid_dia3_key_size_ParamLimits

0xd4e1,	// (0x00057d66) aid_dia3_key_size

0xd4ed,	// (0x00057d72) aid_dia3_listrow_size_ParamLimits

0xd4ed,	// (0x00057d72) aid_dia3_listrow_size

0xd4fd,	// (0x00057d82) dia3_keypad_fun_pane_ParamLimits

0xd4fd,	// (0x00057d82) dia3_keypad_fun_pane

0xd50f,	// (0x00057d94) dia3_keypad_num_pane_ParamLimits

0xd50f,	// (0x00057d94) dia3_keypad_num_pane

0xd521,	// (0x00057da6) dia3_listscroll_pane_ParamLimits

0xd521,	// (0x00057da6) dia3_listscroll_pane

0xd52f,	// (0x00057db4) dia3_numentry_pane_ParamLimits

0xd52f,	// (0x00057db4) dia3_numentry_pane

0x2bf0,	// (0x0004d475) dia3_list_pane

0x2bfb,	// (0x0004d480) scroll_pane_cp12

0x0462,	// (0x0004ace7) bg_dia3_numentry_pane

0xd53d,	// (0x00057dc2) dia3_numentry_pane_t1

0xd54c,	// (0x00057dd1) cell_dia3_key_num_pane

0xd554,	// (0x00057dd9) cell_dia3_key0_fun_pane_ParamLimits

0xd554,	// (0x00057dd9) cell_dia3_key0_fun_pane

0xd561,	// (0x00057de6) cell_dia3_key1_fun_pane_ParamLimits

0xd561,	// (0x00057de6) cell_dia3_key1_fun_pane

0xd56e,	// (0x00057df3) dia3_listrow_pane

0x1c0b,	// (0x0004c490) bg_dia3_numentry_pane_g1

0x0462,	// (0x0004ace7) bg_button_pane_cp21

0x2c06,	// (0x0004d48b) cell_dia3_key_num_pane_t1

0x2c14,	// (0x0004d499) cell_dia3_key_num_pane_t2

0x2c23,	// (0x0004d4a8) cell_dia3_key_num_pane_t3

0x2c32,	// (0x0004d4b7) cell_dia3_key_num_pane_t4

0x0003,

0xff09,	// (0x0005a78e) cell_dia3_key_num_pane_t

0x0462,	// (0x0004ace7) bg_button_pane_cp19

0xd57b,	// (0x00057e00) cell_dia3_key0_fun_pane_g1

0x0462,	// (0x0004ace7) bg_button_pane_cp20

0xd583,	// (0x00057e08) cell_dia3_key1_fun_pane_g1

0xd58b,	// (0x00057e10) area_left_week_number_pane

0xd594,	// (0x00057e19) area_top_day_name_pane

0xd59d,	// (0x00057e22) frame_month_view_pane

0xd5a7,	// (0x00057e2c) grid_month_view_pane

0xd5b1,	// (0x00057e36) cell_top_day_name_pane_ParamLimits

0xd5b1,	// (0x00057e36) cell_top_day_name_pane

0xd5cb,	// (0x00057e50) cell_area_left_week_number_pane_ParamLimits

0xd5cb,	// (0x00057e50) cell_area_left_week_number_pane

0xd5df,	// (0x00057e64) cell_month_view_pane_ParamLimits

0xd5df,	// (0x00057e64) cell_month_view_pane

0x2c41,	// (0x0004d4c6) frm_month_g1

0xd5fc,	// (0x00057e81) frm_month_g2

0xd606,	// (0x00057e8b) frm_month_g3

0xd610,	// (0x00057e95) frm_month_g4

0xd61a,	// (0x00057e9f) frm_month_g5

0xd624,	// (0x00057ea9) frm_month_g6

0xd62e,	// (0x00057eb3) frm_month_g7

0x2c4a,	// (0x0004d4cf) frm_month_g8

0xd638,	// (0x00057ebd) frm_month_g9

0xd641,	// (0x00057ec6) frm_month_g10

0xd64a,	// (0x00057ecf) frm_month_g11

0xd653,	// (0x00057ed8) frm_month_g12

0xd65c,	// (0x00057ee1) frm_month_g13

0xd665,	// (0x00057eea) frm_month_g14

0xd66e,	// (0x00057ef3) frm_month_g15

0xd679,	// (0x00057efe) frm_month_g16

0x000f,

0xff12,	// (0x0005a797) frm_month_g

0xd684,	// (0x00057f09) cell_top_day_name_pane_t1

0xd693,	// (0x00057f18) cell_area_left_week_number_pane_g1

0xd684,	// (0x00057f09) cell_area_left_week_number_pane_t1

0xe9c8,	// (0x0005924d) cell_month_view_pane_g1

0xd69b,	// (0x00057f20) cell_month_view_pane_t1

0x0462,	// (0x0004ace7) main_fps_pane

0x20c9,	// (0x0004c94e) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x20c9,	// (0x0004c94e) cmail_ddmenu_btn02_pane_cp1

0x20e5,	// (0x0004c96a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x20e5,	// (0x0004c96a) cmail_ddmenu_btn02_pane_cp2

0xcf88,	// (0x0005780d) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xcf88,	// (0x0005780d) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe3a,	// (0x0005a6bf) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe3a,	// (0x0005a6bf) cmail_ddmenu_btn02_pane_g

0xcfa6,	// (0x0005782b) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xcfa6,	// (0x0005782b) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3f,	// (0x0005a6c4) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3f,	// (0x0005a6c4) cmail_ddmenu_btn02_pane_t

0xd6aa,	// (0x00057f2f) fps_text_pane_ParamLimits

0xd6aa,	// (0x00057f2f) fps_text_pane

0xd6b7,	// (0x00057f3c) main_fps_pane_g1_ParamLimits

0xd6b7,	// (0x00057f3c) main_fps_pane_g1

0xd6c5,	// (0x00057f4a) wait_bar_pane_cp010_ParamLimits

0xd6c5,	// (0x00057f4a) wait_bar_pane_cp010

0xd6d1,	// (0x00057f56) fps_text_pane_t1_ParamLimits

0xd6d1,	// (0x00057f56) fps_text_pane_t1

0xa56d,	// (0x00054df2) cam4_image_uncrop_pane_g1

0xa576,	// (0x00054dfb) cam4_image_uncrop_pane_g2

0xa57f,	// (0x00054e04) cam4_image_uncrop_pane_g3

0xa588,	// (0x00054e0d) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0005a192) cam4_image_uncrop_pane_g

0xd56e,	// (0x00057df3) dia3_listrow_pane_ParamLimits

0x0462,	// (0x0004ace7) main_phob2_pane

0xcb18,	// (0x0005739d) cell_tport_appsw_pane_cp02_ParamLimits

0xcb18,	// (0x0005739d) cell_tport_appsw_pane_cp02

0xcb27,	// (0x000573ac) cell_tport_appsw_pane_cp03_ParamLimits

0xcb27,	// (0x000573ac) cell_tport_appsw_pane_cp03

0x0462,	// (0x0004ace7) phob2_contact_card_pane

0x0462,	// (0x0004ace7) phob2_listscroll_pane

0x2c53,	// (0x0004d4d8) phob2_list_pane

0x2c5b,	// (0x0004d4e0) scroll_pane_cp034

0xd6ea,	// (0x00057f6f) phob2_cc_data_pane_ParamLimits

0xd6ea,	// (0x00057f6f) phob2_cc_data_pane

0xd704,	// (0x00057f89) phob2_cc_listscroll_pane_ParamLimits

0xd704,	// (0x00057f89) phob2_cc_listscroll_pane

0xd71e,	// (0x00057fa3) list_double_large_graphic_phob2_pane_ParamLimits

0xd71e,	// (0x00057fa3) list_double_large_graphic_phob2_pane

0x2c63,	// (0x0004d4e8) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x2c63,	// (0x0004d4e8) list_double_large_graphic_phob2_pane_g1

0x2c70,	// (0x0004d4f5) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x2c70,	// (0x0004d4f5) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff33,	// (0x0005a7b8) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff33,	// (0x0005a7b8) list_double_large_graphic_phob2_pane_g

0x2c7c,	// (0x0004d501) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x2c7c,	// (0x0004d501) list_double_large_graphic_phob2_pane_t1

0x2c91,	// (0x0004d516) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x2c91,	// (0x0004d516) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff38,	// (0x0005a7bd) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff38,	// (0x0005a7bd) list_double_large_graphic_phob2_pane_t

0x0462,	// (0x0004ace7) list_highlight_pane_cp024

0x2ca3,	// (0x0004d528) phob2_cc_button_pane

0xd73c,	// (0x00057fc1) phob2_cc_data_pane_g1_ParamLimits

0xd73c,	// (0x00057fc1) phob2_cc_data_pane_g1

0xd748,	// (0x00057fcd) phob2_cc_data_pane_g2_ParamLimits

0xd748,	// (0x00057fcd) phob2_cc_data_pane_g2

0x0001,

0xff3d,	// (0x0005a7c2) phob2_cc_data_pane_g_ParamLimits

0xff3d,	// (0x0005a7c2) phob2_cc_data_pane_g

0xd754,	// (0x00057fd9) phob2_cc_data_pane_t1_ParamLimits

0xd754,	// (0x00057fd9) phob2_cc_data_pane_t1

0xd766,	// (0x00057feb) phob2_cc_data_pane_t2_ParamLimits

0xd766,	// (0x00057feb) phob2_cc_data_pane_t2

0xd778,	// (0x00057ffd) phob2_cc_data_pane_t3_ParamLimits

0xd778,	// (0x00057ffd) phob2_cc_data_pane_t3

0x0002,

0xff42,	// (0x0005a7c7) phob2_cc_data_pane_t_ParamLimits

0xff42,	// (0x0005a7c7) phob2_cc_data_pane_t

0x2cab,	// (0x0004d530) phob2_cc_list_pane_ParamLimits

0x2cab,	// (0x0004d530) phob2_cc_list_pane

0x1294,	// (0x0004bb19) scroll_pane_cp035_ParamLimits

0x1294,	// (0x0004bb19) scroll_pane_cp035

0x4781,	// (0x0004f006) bg_button_pane_cp033

0x2cb7,	// (0x0004d53c) phob2_cc_button_pane_g1

0x2cc3,	// (0x0004d548) phob2_cc_button_pane_t1

0x2cd8,	// (0x0004d55d) phob2_cc_button_pane_t2

0x0001,

0xff49,	// (0x0005a7ce) phob2_cc_button_pane_t

0xd78a,	// (0x0005800f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xd78a,	// (0x0005800f) list_double_large_graphic_phob2_cc_pane

0xd7b1,	// (0x00058036) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xd7b1,	// (0x00058036) list_double_large_graphic_phob2_cc_pane_g1

0xd7c2,	// (0x00058047) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xd7c2,	// (0x00058047) list_double_large_graphic_phob2_cc_pane_g2

0xd7d1,	// (0x00058056) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xd7d1,	// (0x00058056) list_double_large_graphic_phob2_cc_pane_g3

0xd7e0,	// (0x00058065) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xd7e0,	// (0x00058065) list_double_large_graphic_phob2_cc_pane_g4

0xd7f1,	// (0x00058076) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xd7f1,	// (0x00058076) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4e,	// (0x0005a7d3) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4e,	// (0x0005a7d3) list_double_large_graphic_phob2_cc_pane_g

0xd800,	// (0x00058085) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xd800,	// (0x00058085) list_double_large_graphic_phob2_cc_pane_t1

0xd829,	// (0x000580ae) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xd829,	// (0x000580ae) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff59,	// (0x0005a7de) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff59,	// (0x0005a7de) list_double_large_graphic_phob2_cc_pane_t

0x2cea,	// (0x0004d56f) list_highlight_pane_cp025_ParamLimits

0x2cea,	// (0x0004d56f) list_highlight_pane_cp025

0x4781,	// (0x0004f006) bg_button_pane_cp033_ParamLimits

0x2cb7,	// (0x0004d53c) phob2_cc_button_pane_g1_ParamLimits

0x2cc3,	// (0x0004d548) phob2_cc_button_pane_t1_ParamLimits

0x2cd8,	// (0x0004d55d) phob2_cc_button_pane_t2_ParamLimits

0xff49,	// (0x0005a7ce) phob2_cc_button_pane_t_ParamLimits

0x5632,	// (0x0004feb7) popup_wgtman_window

0x107b,	// (0x0004b900) scroll_pane_cp038

0xd343,	// (0x00057bc8) wgtman_btn_pane_cp_01_ParamLimits

0xd343,	// (0x00057bc8) wgtman_btn_pane_cp_01

0x2cf8,	// (0x0004d57d) wgtman_content_pane

0x2d01,	// (0x0004d586) wgtman_heading_pane

0x0462,	// (0x0004ace7) bg_heading_pane_cp02

0x2d0a,	// (0x0004d58f) wgtman_heading_pane_g1

0x2d12,	// (0x0004d597) wgtman_heading_pane_t1

0x2d20,	// (0x0004d5a5) scroll_pane_cp036

0x2d28,	// (0x0004d5ad) wgtman_list_pane

0x2d30,	// (0x0004d5b5) wgtman_list_pane_t1_ParamLimits

0x2d30,	// (0x0004d5b5) wgtman_list_pane_t1

0xa4cc,	// (0x00054d51) cam4_grid_pane

0xb22a,	// (0x00055aaf) bg_button_pane_cp015_ParamLimits

0xb23c,	// (0x00055ac1) bg_button_pane_cp016_ParamLimits

0xb24f,	// (0x00055ad4) bg_button_pane_cp017_ParamLimits

0xb2a5,	// (0x00055b2a) popup_vitu2_query_window_g3_ParamLimits

0xb2a5,	// (0x00055b2a) popup_vitu2_query_window_g3

0xb360,	// (0x00055be5) popup_vitu2_query_window_t6_ParamLimits

0xb360,	// (0x00055be5) popup_vitu2_query_window_t6

0xb38b,	// (0x00055c10) popup_vitu2_query_window_t7_ParamLimits

0xb38b,	// (0x00055c10) popup_vitu2_query_window_t7

0x0e70,	// (0x0004b6f5) cam4_grid_pane_g1

0x0e79,	// (0x0004b6fe) cam4_grid_pane_g2

0x2d4d,	// (0x0004d5d2) cam4_grid_pane_g3

0x2d56,	// (0x0004d5db) cam4_grid_pane_g4

0x0003,

0xff5e,	// (0x0005a7e3) cam4_grid_pane_g

0x65a0,	// (0x00050e25) aid_placing_vt_slider_lsc_ParamLimits

0x68ec,	// (0x00051171) vidtel_button_pane_ParamLimits

0x68ec,	// (0x00051171) vidtel_button_pane

0x0462,	// (0x0004ace7) bg_button_pane_cp034

0xd852,	// (0x000580d7) vidtel_button_pane_g1

0x2d61,	// (0x0004d5e6) vidtel_button_pane_t1

0x11b3,	// (0x0004ba38) aid_size_vtel_slider_touch

0x1294,	// (0x0004bb19) scroll_pane_cp039

0x1c49,	// (0x0004c4ce) ncim_query_button_pane_cp01_ParamLimits

0x1c68,	// (0x0004c4ed) ncimui_query_pane_g1_ParamLimits

0x4781,	// (0x0004f006) input_focus_pane_cp012_ParamLimits

0x1c8d,	// (0x0004c512) ncim_query_entry_pane_t1_ParamLimits

0x1294,	// (0x0004bb19) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Small

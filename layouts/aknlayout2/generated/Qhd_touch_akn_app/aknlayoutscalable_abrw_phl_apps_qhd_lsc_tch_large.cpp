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

#include "aknlayoutscalable_abrw_phl_apps_qhd_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0008c21e };

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
0x0da2,	// (0x0008cfc0) Screen

0x0dae,	// (0x0008cfcc) application_window

0x0e20,	// (0x0008d03e) area_bottom_pane_ParamLimits

0x0e20,	// (0x0008d03e) area_bottom_pane

0x0e7d,	// (0x0008d09b) area_top_pane_ParamLimits

0x0e7d,	// (0x0008d09b) area_top_pane

0xda70,	// (0x00099c8e) call_video_uplink_pane_ParamLimits

0xda70,	// (0x00099c8e) call_video_uplink_pane

0x0ef2,	// (0x0008d110) main_pane_ParamLimits

0x0ef2,	// (0x0008d110) main_pane

0xa718,	// (0x00096936) context_pane

0x4959,	// (0x00090b77) navi_pane

0x4981,	// (0x00090b9f) popup_cale_events_window_ParamLimits

0x4981,	// (0x00090b9f) popup_cale_events_window

0xa72b,	// (0x00096949) popup_mup_playback_window

0x4999,	// (0x00090bb7) signal_pane

0xe1d3,	// (0x0009a3f1) main_browser_pane

0xecb2,	// (0x0009aed0) main_burst_pane

0x46ab,	// (0x000908c9) main_calc_pane

0xecb2,	// (0x0009aed0) main_cale_day_pane

0xe1d3,	// (0x0009a3f1) main_cale_month_pane

0xecb2,	// (0x0009aed0) main_cale_week_pane

0xecb2,	// (0x0009aed0) main_call_pane

0xdea1,	// (0x0009a0bf) main_call_poc_pane

0xecb2,	// (0x0009aed0) main_camera_pane

0xecb2,	// (0x0009aed0) main_chi_dic_pane

0xeb37,	// (0x0009ad55) main_clock_pane

0xdea1,	// (0x0009a0bf) main_fmradio_pane

0xecb2,	// (0x0009aed0) main_graph_messa_pane

0xdea1,	// (0x0009a0bf) main_help_pane

0xe1d3,	// (0x0009a3f1) main_im_pane

0xe0fc,	// (0x0009a31a) main_image_pane_ParamLimits

0xe0fc,	// (0x0009a31a) main_image_pane

0xdea1,	// (0x0009a0bf) main_location2_pane

0xecb2,	// (0x0009aed0) main_location_pane

0xdea1,	// (0x0009a0bf) main_messa_pane

0xdea1,	// (0x0009a0bf) main_mp2_pane

0xecb2,	// (0x0009aed0) main_mp_pane

0xdea1,	// (0x0009a0bf) main_msg_pane

0xdea1,	// (0x0009a0bf) main_mup_eq_pane

0xdea1,	// (0x0009a0bf) main_mup_pane

0xecb2,	// (0x0009aed0) main_notes_pane

0xdea1,	// (0x0009a0bf) main_pec_pane

0xdea1,	// (0x0009a0bf) main_phob_pane

0xdea1,	// (0x0009a0bf) main_pinb_pane

0xdea1,	// (0x0009a0bf) main_postcard_pane

0xdea1,	// (0x0009a0bf) main_qdial_pane

0xecb2,	// (0x0009aed0) main_skin_pane

0xdea1,	// (0x0009a0bf) main_smil2_pane

0xecb2,	// (0x0009aed0) main_smil_pane

0xecb2,	// (0x0009aed0) main_video_pane

0xecb2,	// (0x0009aed0) main_video_tele_pane

0xe0fc,	// (0x0009a31a) main_viewer_pane_ParamLimits

0xe0fc,	// (0x0009a31a) main_viewer_pane

0xecb2,	// (0x0009aed0) main_vorec_pane

0x46ff,	// (0x0009091d) popup_blid_sat_info_window_ParamLimits

0x46ff,	// (0x0009091d) popup_blid_sat_info_window

0x4757,	// (0x00090975) popup_dyc_status_message_window_ParamLimits

0x4757,	// (0x00090975) popup_dyc_status_message_window

0x4771,	// (0x0009098f) popup_grid_large_graphic_window_ParamLimits

0x4771,	// (0x0009098f) popup_grid_large_graphic_window

0x482d,	// (0x00090a4b) popup_loc_request_window_ParamLimits

0x482d,	// (0x00090a4b) popup_loc_request_window

0x4931,	// (0x00090b4f) popup_wml_address_window_ParamLimits

0x4931,	// (0x00090b4f) popup_wml_address_window

0x44e5,	// (0x00090703) call_muted_g1

0x3984,	// (0x0008fba2) popup_call_audio_conf_window_ParamLimits

0x3984,	// (0x0008fba2) popup_call_audio_conf_window

0x44f9,	// (0x00090717) popup_call_audio_first_window_ParamLimits

0x44f9,	// (0x00090717) popup_call_audio_first_window

0x456f,	// (0x0009078d) popup_call_audio_in_window_ParamLimits

0x456f,	// (0x0009078d) popup_call_audio_in_window

0x45ab,	// (0x000907c9) popup_call_audio_out_window_ParamLimits

0x45ab,	// (0x000907c9) popup_call_audio_out_window

0x45e5,	// (0x00090803) popup_call_audio_second_window_ParamLimits

0x45e5,	// (0x00090803) popup_call_audio_second_window

0x463b,	// (0x00090859) popup_call_audio_wait_window_ParamLimits

0x463b,	// (0x00090859) popup_call_audio_wait_window

0x4670,	// (0x0009088e) popup_number_entry_window_ParamLimits

0x4670,	// (0x0009088e) popup_number_entry_window

0xda8e,	// (0x00099cac) bg_popup_call_pane_cp05_ParamLimits

0xda8e,	// (0x00099cac) bg_popup_call_pane_cp05

0xdaae,	// (0x00099ccc) popup_number_entry_window_t1

0xdac1,	// (0x00099cdf) popup_number_entry_window_t2

0xdad3,	// (0x00099cf1) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0009b30a) popup_number_entry_window_t

0xdae5,	// (0x00099d03) text_title_cp2

0xdaf8,	// (0x00099d16) bg_popup_call_pane_cp_ParamLimits

0xdaf8,	// (0x00099d16) bg_popup_call_pane_cp

0xdb06,	// (0x00099d24) call_thumbnail_pane

0xdb0e,	// (0x00099d2c) popup_call_audio_in_window_g1_ParamLimits

0xdb0e,	// (0x00099d2c) popup_call_audio_in_window_g1

0xdb1a,	// (0x00099d38) popup_call_audio_in_window_g2_ParamLimits

0xdb1a,	// (0x00099d38) popup_call_audio_in_window_g2

0xdb26,	// (0x00099d44) popup_call_audio_in_window_g3_ParamLimits

0xdb26,	// (0x00099d44) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0009b313) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0009b313) popup_call_audio_in_window_g

0xdb32,	// (0x00099d50) popup_call_audio_in_window_t1_ParamLimits

0xdb32,	// (0x00099d50) popup_call_audio_in_window_t1

0xdb4e,	// (0x00099d6c) popup_call_audio_in_window_t2_ParamLimits

0xdb4e,	// (0x00099d6c) popup_call_audio_in_window_t2

0xdb6a,	// (0x00099d88) popup_call_audio_in_window_t3_ParamLimits

0xdb6a,	// (0x00099d88) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0009b31a) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0009b31a) popup_call_audio_in_window_t

0xdaf8,	// (0x00099d16) bg_popup_call_pane_cp01_ParamLimits

0xdaf8,	// (0x00099d16) bg_popup_call_pane_cp01

0xdb06,	// (0x00099d24) call_thumbnail_pane_cp02

0xdb7d,	// (0x00099d9b) call_type_pane_cp022

0xdb85,	// (0x00099da3) popup_call_audio_out_window_g1_ParamLimits

0xdb85,	// (0x00099da3) popup_call_audio_out_window_g1

0xdb97,	// (0x00099db5) popup_call_audio_out_window_g2_ParamLimits

0xdb97,	// (0x00099db5) popup_call_audio_out_window_g2

0xdba3,	// (0x00099dc1) popup_call_audio_out_window_g3_ParamLimits

0xdba3,	// (0x00099dc1) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0009b321) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0009b321) popup_call_audio_out_window_g

0xdbb5,	// (0x00099dd3) popup_call_audio_out_window_t1_ParamLimits

0xdbb5,	// (0x00099dd3) popup_call_audio_out_window_t1

0xdbcd,	// (0x00099deb) popup_call_audio_out_window_t2_ParamLimits

0xdbcd,	// (0x00099deb) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0009b328) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0009b328) popup_call_audio_out_window_t

0xdbe2,	// (0x00099e00) bg_popup_call_pane_ParamLimits

0xdbe2,	// (0x00099e00) bg_popup_call_pane

0x10a8,	// (0x0008d2c6) call_thumbnail_pane_cp_ParamLimits

0x10a8,	// (0x0008d2c6) call_thumbnail_pane_cp

0xdc66,	// (0x00099e84) call_type_pane_cp01_ParamLimits

0xdc66,	// (0x00099e84) call_type_pane_cp01

0xdcaa,	// (0x00099ec8) popup_call_audio_first_window_g1_ParamLimits

0xdcaa,	// (0x00099ec8) popup_call_audio_first_window_g1

0xdcf6,	// (0x00099f14) popup_call_audio_first_window_g2_ParamLimits

0xdcf6,	// (0x00099f14) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0009b32d) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0009b32d) popup_call_audio_first_window_g

0xdd3a,	// (0x00099f58) popup_call_audio_first_window_t1_ParamLimits

0xdd3a,	// (0x00099f58) popup_call_audio_first_window_t1

0xdde6,	// (0x0009a004) popup_call_audio_first_window_t4_ParamLimits

0xdde6,	// (0x0009a004) popup_call_audio_first_window_t4

0xde72,	// (0x0009a090) popup_call_audio_first_window_t5_ParamLimits

0xde72,	// (0x0009a090) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0009b332) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0009b332) popup_call_audio_first_window_t

0xdea1,	// (0x0009a0bf) bg_popup_call_pane_cp02

0xdeab,	// (0x0009a0c9) call_type_pane_cp023

0xdeb3,	// (0x0009a0d1) popup_call_audio_wait_window_g1

0xdebb,	// (0x0009a0d9) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009b339) popup_call_audio_wait_window_g

0xdec3,	// (0x0009a0e1) popup_call_audio_wait_window_t3

0xded1,	// (0x0009a0ef) bg_popup_call_pane_cp03_ParamLimits

0xded1,	// (0x0009a0ef) bg_popup_call_pane_cp03

0xdf31,	// (0x0009a14f) call_thumbnail_pane_cp011_ParamLimits

0xdf31,	// (0x0009a14f) call_thumbnail_pane_cp011

0xdf3d,	// (0x0009a15b) call_type_pane_cp034_ParamLimits

0xdf3d,	// (0x0009a15b) call_type_pane_cp034

0xdf79,	// (0x0009a197) popup_call_audio_second_window_g1_ParamLimits

0xdf79,	// (0x0009a197) popup_call_audio_second_window_g1

0xdfb5,	// (0x0009a1d3) popup_call_audio_second_window_g2_ParamLimits

0xdfb5,	// (0x0009a1d3) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0009b33e) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0009b33e) popup_call_audio_second_window_g

0xdff1,	// (0x0009a20f) popup_call_audio_second_window_t1_ParamLimits

0xdff1,	// (0x0009a20f) popup_call_audio_second_window_t1

0xe072,	// (0x0009a290) popup_call_audio_second_window_t2_ParamLimits

0xe072,	// (0x0009a290) popup_call_audio_second_window_t2

0xe0a8,	// (0x0009a2c6) popup_call_audio_second_window_t3_ParamLimits

0xe0a8,	// (0x0009a2c6) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0009b343) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0009b343) popup_call_audio_second_window_t

0xdea1,	// (0x0009a0bf) bg_popup_call_pane_cp04

0xe0de,	// (0x0009a2fc) list_conf_pane

0xe0e6,	// (0x0009a304) popup_call_audio_conf_window_t1

0xe0f4,	// (0x0009a312) call_thumbnail_pane_g1

0xe0fc,	// (0x0009a31a) bg_pinb_pane_ParamLimits

0xe0fc,	// (0x0009a31a) bg_pinb_pane

0xe10a,	// (0x0009a328) find_pinb_pane

0xe113,	// (0x0009a331) listscroll_pinb_pane_ParamLimits

0xe113,	// (0x0009a331) listscroll_pinb_pane

0xe122,	// (0x0009a340) pinb_bg_pane_g1

0x10cc,	// (0x0008d2ea) pinb_bg_pane_g2

0x10d8,	// (0x0008d2f6) pinb_bg_pane_g3

0x10e4,	// (0x0008d302) pinb_bg_pane_g4

0x10f0,	// (0x0008d30e) pinb_bg_pane_g5

0x10fc,	// (0x0008d31a) pinb_bg_pane_g6

0x1107,	// (0x0008d325) pinb_bg_pane_g7

0x1112,	// (0x0008d330) pinb_bg_pane_g8

0x111d,	// (0x0008d33b) pinb_bg_pane_g9

0x1127,	// (0x0008d345) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0009b34a) pinb_bg_pane_g

0x1144,	// (0x0008d362) grid_pinb_pane

0x114d,	// (0x0008d36b) list_pinb_pane

0x1156,	// (0x0008d374) scroll_pane_cp01_ParamLimits

0x1156,	// (0x0008d374) scroll_pane_cp01

0xe12c,	// (0x0009a34a) find_pinb_pane_g1_ParamLimits

0xe12c,	// (0x0009a34a) find_pinb_pane_g1

0xe144,	// (0x0009a362) find_pinb_pane_t1

0xe156,	// (0x0009a374) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0009b364) find_pinb_pane_t

0xe16b,	// (0x0009a389) input_focus_pane_cp01_ParamLimits

0xe16b,	// (0x0009a389) input_focus_pane_cp01

0x1168,	// (0x0008d386) cell_pinb_pane_ParamLimits

0x1168,	// (0x0008d386) cell_pinb_pane

0x1191,	// (0x0008d3af) cell_pinb_pane_g1_ParamLimits

0x1191,	// (0x0008d3af) cell_pinb_pane_g1

0x11a1,	// (0x0008d3bf) cell_pinb_pane_g2_ParamLimits

0x11a1,	// (0x0008d3bf) cell_pinb_pane_g2

0xe177,	// (0x0009a395) cell_pinb_pane_g3_ParamLimits

0xe177,	// (0x0009a395) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0009b369) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0009b369) cell_pinb_pane_g

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp01

0x11ad,	// (0x0008d3cb) list_pinb_item_pane_ParamLimits

0x11ad,	// (0x0008d3cb) list_pinb_item_pane

0xdea1,	// (0x0009a0bf) list_highlight_pane_cp02

0x11bf,	// (0x0008d3dd) list_pinb_item_pane_g1_ParamLimits

0x11bf,	// (0x0008d3dd) list_pinb_item_pane_g1

0xe183,	// (0x0009a3a1) list_pinb_item_pane_g2_ParamLimits

0xe183,	// (0x0009a3a1) list_pinb_item_pane_g2

0x11cc,	// (0x0008d3ea) list_pinb_item_pane_g3_ParamLimits

0x11cc,	// (0x0008d3ea) list_pinb_item_pane_g3

0x11dd,	// (0x0008d3fb) list_pinb_item_pane_g4_ParamLimits

0x11dd,	// (0x0008d3fb) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0009b370) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0009b370) list_pinb_item_pane_g

0x11e9,	// (0x0008d407) list_pinb_item_pane_t1_ParamLimits

0x11e9,	// (0x0008d407) list_pinb_item_pane_t1

0x121e,	// (0x0008d43c) calc_display_pane

0x1246,	// (0x0008d464) calc_paper_pane

0x1269,	// (0x0008d487) grid_calc_pane

0xdea1,	// (0x0009a0bf) bg_list_pane_cp01

0x1293,	// (0x0008d4b1) clock_g1

0x129b,	// (0x0008d4b9) clock_g2

0x0001,

0xf15b,	// (0x0009b379) clock_g

0x12a3,	// (0x0008d4c1) clock_t1_ParamLimits

0x12a3,	// (0x0008d4c1) clock_t1

0x12b8,	// (0x0008d4d6) clock_t2_ParamLimits

0x12b8,	// (0x0008d4d6) clock_t2

0x12ca,	// (0x0008d4e8) clock_t3_ParamLimits

0x12ca,	// (0x0008d4e8) clock_t3

0x12dc,	// (0x0008d4fa) clock_t4_ParamLimits

0x12dc,	// (0x0008d4fa) clock_t4

0x12ee,	// (0x0008d50c) clock_t5_ParamLimits

0x12ee,	// (0x0008d50c) clock_t5

0x1303,	// (0x0008d521) clock_t6_ParamLimits

0x1303,	// (0x0008d521) clock_t6

0x1315,	// (0x0008d533) clock_t7_ParamLimits

0x1315,	// (0x0008d533) clock_t7

0x1327,	// (0x0008d545) clock_t8_ParamLimits

0x1327,	// (0x0008d545) clock_t8

0x133b,	// (0x0008d559) clock_t9_ParamLimits

0x133b,	// (0x0008d559) clock_t9

0x0008,

0xf160,	// (0x0009b37e) clock_t_ParamLimits

0xf160,	// (0x0009b37e) clock_t

0xe18f,	// (0x0009a3ad) popup_clock_analogue_window_cp02

0xe18f,	// (0x0009a3ad) popup_clock_digital_window_cp01

0xe197,	// (0x0009a3b5) listscroll_help_pane

0xdea1,	// (0x0009a0bf) phob_pre_status_pane

0xe1a1,	// (0x0009a3bf) grid_qdial_pane

0xdea1,	// (0x0009a0bf) listscroll_mce_pane

0xe1ab,	// (0x0009a3c9) bg_notes_pane

0xe1b5,	// (0x0009a3d3) list_notes_pane

0x134f,	// (0x0008d56d) scroll_pane_cp06

0xe1bf,	// (0x0009a3dd) bg_calc_paper_pane

0x9d72,	// (0x00095f90) list_calc_pane

0xe1d3,	// (0x0009a3f1) bg_calc_display_pane

0x135a,	// (0x0008d578) calc_display_pane_t1

0x136c,	// (0x0008d58a) calc_display_pane_t2

0x9d8c,	// (0x00095faa) calc_display_pane_t3

0x0002,

0xf173,	// (0x0009b391) calc_display_pane_t

0x137e,	// (0x0008d59c) cell_calc_pane_ParamLimits

0x137e,	// (0x0008d59c) cell_calc_pane

0xe1df,	// (0x0009a3fd) bg_calc_paper_pane_g1

0xe1eb,	// (0x0009a409) bg_calc_paper_pane_g2

0xe1f7,	// (0x0009a415) bg_calc_paper_pane_g3

0xe203,	// (0x0009a421) bg_calc_paper_pane_g4

0xe20f,	// (0x0009a42d) bg_calc_paper_pane_g5

0x13b3,	// (0x0008d5d1) bg_calc_paper_pane_g6

0x13c2,	// (0x0008d5e0) bg_calc_paper_pane_g7

0x13d1,	// (0x0008d5ef) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0009b398) bg_calc_paper_pane_g

0x13e4,	// (0x0008d602) calc_bg_paper_pane_g9

0x13f7,	// (0x0008d615) list_calc_item_pane_ParamLimits

0x13f7,	// (0x0008d615) list_calc_item_pane

0xe21b,	// (0x0009a439) list_calc_item_pane_g1

0x9d9e,	// (0x00095fbc) list_calc_item_pane_t1_ParamLimits

0x9d9e,	// (0x00095fbc) list_calc_item_pane_t1

0x140a,	// (0x0008d628) list_calc_item_pane_t2_ParamLimits

0x140a,	// (0x0008d628) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0009b3a9) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0009b3a9) list_calc_item_pane_t

0xe228,	// (0x0009a446) cell_calc_pane_g1

0xe232,	// (0x0009a450) grid_highlight_pane_cp02

0x143c,	// (0x0008d65a) bg_calc_display_pane_g1

0x1445,	// (0x0008d663) bg_calc_display_pane_g2

0x144f,	// (0x0008d66d) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0009b3b3) bg_calc_display_pane_g

0x1458,	// (0x0008d676) cell_qdial_pane_ParamLimits

0x1458,	// (0x0008d676) cell_qdial_pane

0x146c,	// (0x0008d68a) cell_qdial_pane_g1_ParamLimits

0x146c,	// (0x0008d68a) cell_qdial_pane_g1

0x1482,	// (0x0008d6a0) cell_qdial_pane_g2_ParamLimits

0x1482,	// (0x0008d6a0) cell_qdial_pane_g2

0xe254,	// (0x0009a472) cell_qdial_pane_g3_ParamLimits

0xe254,	// (0x0009a472) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0009b3ba) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0009b3ba) cell_qdial_pane_g

0x14a9,	// (0x0008d6c7) cell_qdial_pane_t1_ParamLimits

0x14a9,	// (0x0008d6c7) cell_qdial_pane_t1

0x14c1,	// (0x0008d6df) cell_qdial_pane_t2_ParamLimits

0x14c1,	// (0x0008d6df) cell_qdial_pane_t2

0x14d4,	// (0x0008d6f2) cell_qdial_pane_t3_ParamLimits

0x14d4,	// (0x0008d6f2) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0009b3c3) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0009b3c3) cell_qdial_pane_t

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp04

0xe260,	// (0x0009a47e) thumbnail_qdial_pane_ParamLimits

0xe260,	// (0x0009a47e) thumbnail_qdial_pane

0xe2bc,	// (0x0009a4da) list_help_pane

0xe2c5,	// (0x0009a4e3) scroll_pane_cp02

0x14e7,	// (0x0008d705) help_list_pane_t1_ParamLimits

0x14e7,	// (0x0008d705) help_list_pane_t1

0x9db0,	// (0x00095fce) bg_notes_pane_g2

0x9db8,	// (0x00095fd6) bg_notes_pane_g3

0x9dc0,	// (0x00095fde) notes_bg_pane_g1

0x9dc8,	// (0x00095fe6) notes_bg_pane_g4

0x9dd0,	// (0x00095fee) notes_bg_pane_g5

0x9dd8,	// (0x00095ff6) notes_bg_pane_g6

0x9de0,	// (0x00095ffe) notes_bg_pane_g7

0x9de8,	// (0x00096006) notes_bg_pane_g8

0x9df0,	// (0x0009600e) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0009b3e1) notes_bg_pane_g

0x1504,	// (0x0008d722) list_notes_text_pane_ParamLimits

0x1504,	// (0x0008d722) list_notes_text_pane

0xe2ce,	// (0x0009a4ec) list_notes_text_pane_g1

0x1519,	// (0x0008d737) list_notes_text_pane_t1

0xe1d3,	// (0x0009a3f1) listscroll_cale_week_pane

0x1544,	// (0x0008d762) bg_cale_heading_pane

0xe2e8,	// (0x0009a506) bg_cale_pane_cp01

0x1558,	// (0x0008d776) cale_week_corner_pane

0x156e,	// (0x0008d78c) cale_week_day_heading_pane

0x1582,	// (0x0008d7a0) cale_week_scroll_pane_g1

0x1593,	// (0x0008d7b1) cale_week_scroll_pane_g2

0x15a4,	// (0x0008d7c2) cale_week_scroll_pane_g3

0x15b5,	// (0x0008d7d3) cale_week_scroll_pane_g4

0x15c6,	// (0x0008d7e4) cale_week_scroll_pane_g5

0x15d9,	// (0x0008d7f7) cale_week_scroll_pane_g6

0x15ec,	// (0x0008d80a) cale_week_scroll_pane_g7

0x15ff,	// (0x0008d81d) cale_week_scroll_pane_g8

0x1612,	// (0x0008d830) cale_week_scroll_pane_g9

0x1623,	// (0x0008d841) cale_week_scroll_pane_g10

0x1634,	// (0x0008d852) cale_week_scroll_pane_g11

0x1645,	// (0x0008d863) cale_week_scroll_pane_g12

0x1656,	// (0x0008d874) cale_week_scroll_pane_g13

0x1667,	// (0x0008d885) cale_week_scroll_pane_g14

0x1678,	// (0x0008d896) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0009b3f0) cale_week_scroll_pane_g

0x1689,	// (0x0008d8a7) cale_week_time_pane

0x169c,	// (0x0008d8ba) grid_cale_week_pane

0x16b1,	// (0x0008d8cf) scroll_pane_cp08

0x16cb,	// (0x0008d8e9) cell_cale_week_pane_ParamLimits

0x16cb,	// (0x0008d8e9) cell_cale_week_pane

0x170b,	// (0x0008d929) cale_week_day_heading_pane_t1

0x1738,	// (0x0008d956) cale_week_day_heading_pane_t2

0x1765,	// (0x0008d983) cale_week_day_heading_pane_t3

0x1792,	// (0x0008d9b0) cale_week_day_heading_pane_t4

0x17bf,	// (0x0008d9dd) cale_week_day_heading_pane_t5

0x17ec,	// (0x0008da0a) cale_week_day_heading_pane_t6

0x181b,	// (0x0008da39) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0009b40f) cale_week_day_heading_pane_t

0xe313,	// (0x0009a531) bg_cale_side_pane

0x1848,	// (0x0008da66) cale_week_time_pane_t1

0x1860,	// (0x0008da7e) cale_week_time_pane_t2

0x1878,	// (0x0008da96) cale_week_time_pane_t3

0x1890,	// (0x0008daae) cale_week_time_pane_t4

0x18a8,	// (0x0008dac6) cale_week_time_pane_t5

0x18c0,	// (0x0008dade) cale_week_time_pane_t6

0x18d8,	// (0x0008daf6) cale_week_time_pane_t7

0x18f0,	// (0x0008db0e) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0009b41e) cale_week_time_pane_t

0x1908,	// (0x0008db26) cell_cale_week_pane_g2

0x1921,	// (0x0008db3f) cell_cale_week_pane_g3_ParamLimits

0x1921,	// (0x0008db3f) cell_cale_week_pane_g3

0xe321,	// (0x0009a53f) grid_highlight_pane_cp07

0xe329,	// (0x0009a547) listscroll_gms_pane

0xe333,	// (0x0009a551) grid_gms_pane

0xe33c,	// (0x0009a55a) listscroll_gms_pane_g1

0xe344,	// (0x0009a562) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0009b42f) listscroll_gms_pane_g

0x1939,	// (0x0008db57) scroll_pane_cp010

0x1944,	// (0x0008db62) cell_gms_pane_ParamLimits

0x1944,	// (0x0008db62) cell_gms_pane

0x1957,	// (0x0008db75) cell_gms_pane_g1

0xe34c,	// (0x0009a56a) cell_gms_pane_g2

0xe354,	// (0x0009a572) cell_gms_pane_g3

0xe35d,	// (0x0009a57b) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0009b434) cell_gms_pane_g

0xe366,	// (0x0009a584) grid_highlight_pane_cp09

0x448f,	// (0x000906ad) phob_pre_status_pane_g1

0x4497,	// (0x000906b5) phob_pre_status_pane_g2

0x449f,	// (0x000906bd) phob_pre_status_pane_g3

0x44a7,	// (0x000906c5) phob_pre_status_pane_g4

0x0004,

0xf579,	// (0x0009b797) phob_pre_status_pane_g

0x44b7,	// (0x000906d5) phob_pre_status_pane_t1

0x44c5,	// (0x000906e3) phob_pre_status_pane_t2

0x44d5,	// (0x000906f3) phob_pre_status_pane_t3

0x0002,

0xf584,	// (0x0009b7a2) phob_pre_status_pane_t

0xdea1,	// (0x0009a0bf) bg_list_pane_cp05

0x1967,	// (0x0008db85) grid_vorec_pane

0x9df8,	// (0x00096016) vorec_t1

0x9e06,	// (0x00096024) vorec_t2

0x9e14,	// (0x00096032) vorec_t3

0x9e22,	// (0x00096040) vorec_t4

0x9e30,	// (0x0009604e) vorec_t5

0x9e3e,	// (0x0009605c) vorec_t6

0x0006,

0xf21f,	// (0x0009b43d) vorec_t

0x9e5a,	// (0x00096078) wait_bar_pane_cp01

0x196f,	// (0x0008db8d) cell_vorec_pane_ParamLimits

0x196f,	// (0x0008db8d) cell_vorec_pane

0xe36e,	// (0x0009a58c) cell_vorec_pane_g1

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp05

0x199a,	// (0x0008dbb8) cams_zoom_pane

0x19a9,	// (0x0008dbc7) image_vga_pane

0x19c3,	// (0x0008dbe1) main_camera_pane_g1

0x19d5,	// (0x0008dbf3) main_camera_pane_g2

0x19e5,	// (0x0008dc03) main_camera_pane_g3

0x19f5,	// (0x0008dc13) main_camera_pane_g4

0x1a05,	// (0x0008dc23) main_camera_pane_g5

0x1a15,	// (0x0008dc33) main_camera_pane_g6

0x1a27,	// (0x0008dc45) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0009b44c) main_camera_pane_g

0x1a37,	// (0x0008dc55) main_camera_pane_t1

0x1a4d,	// (0x0008dc6b) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0009b45d) main_camera_pane_t

0x1a87,	// (0x0008dca5) cams_zoom_pane_cp_ParamLimits

0x1a87,	// (0x0008dca5) cams_zoom_pane_cp

0x1aaf,	// (0x0008dccd) image_cif_pane_ParamLimits

0x1aaf,	// (0x0008dccd) image_cif_pane

0x1aea,	// (0x0008dd08) image_subqcif_pane

0x1af2,	// (0x0008dd10) main_video_pane_g1_ParamLimits

0x1af2,	// (0x0008dd10) main_video_pane_g1

0x1b16,	// (0x0008dd34) main_video_pane_g2_ParamLimits

0x1b16,	// (0x0008dd34) main_video_pane_g2

0x1b4a,	// (0x0008dd68) main_video_pane_g3_ParamLimits

0x1b4a,	// (0x0008dd68) main_video_pane_g3

0x1b78,	// (0x0008dd96) main_video_pane_g4_ParamLimits

0x1b78,	// (0x0008dd96) main_video_pane_g4

0x1ba6,	// (0x0008ddc4) main_video_pane_g5_ParamLimits

0x1ba6,	// (0x0008ddc4) main_video_pane_g5

0xe384,	// (0x0009a5a2) main_video_pane_g6_ParamLimits

0xe384,	// (0x0009a5a2) main_video_pane_g6

0x0006,

0xf244,	// (0x0009b462) main_video_pane_g_ParamLimits

0xf244,	// (0x0009b462) main_video_pane_g

0x1bd3,	// (0x0008ddf1) main_video_pane_t1_ParamLimits

0x1bd3,	// (0x0008ddf1) main_video_pane_t1

0xe39e,	// (0x0009a5bc) cams_zoom_pane_g1

0xe3a7,	// (0x0009a5c5) cams_zoom_pane_g2

0xe3b0,	// (0x0009a5ce) cams_zoom_pane_g3

0xe3b9,	// (0x0009a5d7) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0009b471) cams_zoom_pane_g

0x1c30,	// (0x0008de4e) grid_cams_pane

0x1c4a,	// (0x0008de68) linegrid_cams_pane

0x1c5e,	// (0x0008de7c) cell_cams_pane_ParamLimits

0x1c5e,	// (0x0008de7c) cell_cams_pane

0xe3c2,	// (0x0009a5e0) cams_burst_image_pane

0xe3ca,	// (0x0009a5e8) cell_cams_pane_g1

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp03

0xe228,	// (0x0009a446) mp_bg_pane_g1

0xdea1,	// (0x0009a0bf) bg_list_pane_cp03

0xa5f0,	// (0x0009680e) bg_mp_pane

0xa5f8,	// (0x00096816) grid_mp_pane

0xa600,	// (0x0009681e) media_player_g1

0xa608,	// (0x00096826) media_player_t1

0xa616,	// (0x00096834) media_player_t2

0xa624,	// (0x00096842) media_player_t3

0xa632,	// (0x00096850) media_player_t4

0xa640,	// (0x0009685e) media_player_t5

0xa64e,	// (0x0009686c) media_player_t6

0xa65c,	// (0x0009687a) media_player_t7

0x0006,

0xf563,	// (0x0009b781) media_player_t

0xa66a,	// (0x00096888) wait_bar_pane_cp02

0xf548,	// (0x0009b766) main_usb_pane_t

0x4486,	// (0x000906a4) cell_mp_pane

0xe228,	// (0x0009a446) cell_mp_pane_g1

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp06

0xe3d2,	// (0x0009a5f0) grid_skin_colour_pane

0xe3da,	// (0x0009a5f8) list_highlight_pane_cp03

0x1d94,	// (0x0008dfb2) skin_g1

0xe3e2,	// (0x0009a600) skin_t1

0xe3f1,	// (0x0009a60f) skin_t2

0x0001,

0xf288,	// (0x0009b4a6) skin_t

0x1d9c,	// (0x0008dfba) cell_skin_colour_pane_ParamLimits

0x1d9c,	// (0x0008dfba) cell_skin_colour_pane

0xe3ff,	// (0x0009a61d) cell_skin_colour_pane_g1

0x1e13,	// (0x0008e031) call_video_g1_ParamLimits

0x1e13,	// (0x0008e031) call_video_g1

0x1e2f,	// (0x0008e04d) call_video_g2_ParamLimits

0x1e2f,	// (0x0008e04d) call_video_g2

0x0001,

0xf28d,	// (0x0009b4ab) call_video_g_ParamLimits

0xf28d,	// (0x0009b4ab) call_video_g

0x1e81,	// (0x0008e09f) call_video_uplink_pane_cp1_ParamLimits

0x1e81,	// (0x0008e09f) call_video_uplink_pane_cp1

0xe411,	// (0x0009a62f) call_video_uplink_pane_cp2

0x1f20,	// (0x0008e13e) video_down_crop_pane_ParamLimits

0x1f20,	// (0x0008e13e) video_down_crop_pane

0x2017,	// (0x0008e235) video_down_pane_ParamLimits

0x2017,	// (0x0008e235) video_down_pane

0xe419,	// (0x0009a637) video_down_subqcif_pane_ParamLimits

0xe419,	// (0x0009a637) video_down_subqcif_pane

0xe431,	// (0x0009a64f) video_down_subqcif_pane_cp_ParamLimits

0xe431,	// (0x0009a64f) video_down_subqcif_pane_cp

0xe455,	// (0x0009a673) im_reading_pane_ParamLimits

0xe455,	// (0x0009a673) im_reading_pane

0x2125,	// (0x0008e343) im_writing_pane_ParamLimits

0x2125,	// (0x0008e343) im_writing_pane

0x213b,	// (0x0008e359) im_reading_pane_t1

0xe46f,	// (0x0009a68d) list_im_pane

0xe480,	// (0x0009a69e) scroll_pane_cp07

0x2174,	// (0x0008e392) im_writing_pane_t1_ParamLimits

0x2174,	// (0x0008e392) im_writing_pane_t1

0xe499,	// (0x0009a6b7) im_writing_pane_t2_ParamLimits

0xe499,	// (0x0009a6b7) im_writing_pane_t2

0x0001,

0xf297,	// (0x0009b4b5) im_writing_pane_t_ParamLimits

0xf297,	// (0x0009b4b5) im_writing_pane_t

0xdea1,	// (0x0009a0bf) input_focus_pane_cp04

0xdea1,	// (0x0009a0bf) input_focus_pane_cp05

0x2189,	// (0x0008e3a7) list_im_single_pane_ParamLimits

0x2189,	// (0x0008e3a7) list_im_single_pane

0x219d,	// (0x0008e3bb) list_single_im_pane_t1

0x4446,	// (0x00090664) blid_accuracy_pane

0x444e,	// (0x0009066c) blid_compass_pane

0x4458,	// (0x00090676) main_location_t1

0x4468,	// (0x00090686) main_location_t2

0x4478,	// (0x00090696) main_location_t3

0x0002,

0xf572,	// (0x0009b790) main_location_t

0xdea1,	// (0x0009a0bf) aid_levels_location

0xe228,	// (0x0009a446) blid_accuracy_pane_g1

0xe228,	// (0x0009a446) blid_accuracy_pane_g2

0x0001,

0x0058,	// (0x0008c276) blid_accuracy_pane_g

0xe4e1,	// (0x0009a6ff) wml_content_pane

0xe51f,	// (0x0009a73d) wml_button_pane_ParamLimits

0xe51f,	// (0x0009a73d) wml_button_pane

0x21ac,	// (0x0008e3ca) wml_list_single_large_pane_ParamLimits

0x21ac,	// (0x0008e3ca) wml_list_single_large_pane

0x21c1,	// (0x0008e3df) wml_list_single_medium_pane_ParamLimits

0x21c1,	// (0x0008e3df) wml_list_single_medium_pane

0x21d7,	// (0x0008e3f5) wml_list_single_small_pane_ParamLimits

0x21d7,	// (0x0008e3f5) wml_list_single_small_pane

0xe533,	// (0x0009a751) wml_selection_box_pane_ParamLimits

0xe533,	// (0x0009a751) wml_selection_box_pane

0xe546,	// (0x0009a764) wml_list_single_pane_t1

0xe555,	// (0x0009a773) wml_list_single_medium_pane_t1

0xe564,	// (0x0009a782) wml_list_single_large_pane_t1

0xe573,	// (0x0009a791) input_focus_pane_cp02_ParamLimits

0xe573,	// (0x0009a791) input_focus_pane_cp02

0xe586,	// (0x0009a7a4) wml_selection_box_pane_g1

0xe58f,	// (0x0009a7ad) wml_selection_box_pane_t1_ParamLimits

0xe58f,	// (0x0009a7ad) wml_selection_box_pane_t1

0xe0fc,	// (0x0009a31a) bg_wml_button_pane_ParamLimits

0xe0fc,	// (0x0009a31a) bg_wml_button_pane

0xe5a7,	// (0x0009a7c5) wml_button_pane_g1

0xe5af,	// (0x0009a7cd) wml_button_pane_t1

0xe5a7,	// (0x0009a7c5) wml_button_bg_pane_g1

0xe5bf,	// (0x0009a7dd) wml_button_bg_pane_g2

0xe5c7,	// (0x0009a7e5) wml_button_bg_pane_g3

0xe5cf,	// (0x0009a7ed) wml_button_bg_pane_g4

0xe5d7,	// (0x0009a7f5) wml_button_bg_pane_g5

0xe5df,	// (0x0009a7fd) wml_button_bg_pane_g6

0xe5e7,	// (0x0009a805) wml_button_bg_pane_g7

0xe5ef,	// (0x0009a80d) wml_button_bg_pane_g8

0xe5f7,	// (0x0009a815) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0009b4ba) wml_button_bg_pane_g

0x21ef,	// (0x0008e40d) bg_list_pane_cp02

0xe5ff,	// (0x0009a81d) mce_header_pane_ParamLimits

0xe5ff,	// (0x0009a81d) mce_header_pane

0xe615,	// (0x0009a833) mce_icon_pane

0xe615,	// (0x0009a833) mce_image_pane

0xe61e,	// (0x0009a83c) mce_text_pane_ParamLimits

0xe61e,	// (0x0009a83c) mce_text_pane

0x21f7,	// (0x0008e415) scroll_pane_cp03

0xe517,	// (0x0009a735) scroll_pane_cp04

0xe631,	// (0x0009a84f) scroll_pane_cp05_ParamLimits

0xe631,	// (0x0009a84f) scroll_pane_cp05

0x2201,	// (0x0008e41f) mce_header_field_pane_ParamLimits

0x2201,	// (0x0008e41f) mce_header_field_pane

0x2218,	// (0x0008e436) mce_header_field_pane_2_ParamLimits

0x2218,	// (0x0008e436) mce_header_field_pane_2

0x222e,	// (0x0008e44c) mce_header_field_pane_3

0x2236,	// (0x0008e454) list_single_mce_message_pane_ParamLimits

0x2236,	// (0x0008e454) list_single_mce_message_pane

0x224b,	// (0x0008e469) list_single_mce_smart_pane_ParamLimits

0x224b,	// (0x0008e469) list_single_mce_smart_pane

0xe63d,	// (0x0009a85b) input_focus_pane_cp03

0xe646,	// (0x0009a864) list_header_data_pane

0x226b,	// (0x0008e489) mce_header_field_pane_t1

0x227b,	// (0x0008e499) list_single_mce_header_pane_ParamLimits

0x227b,	// (0x0008e499) list_single_mce_header_pane

0xe64e,	// (0x0009a86c) list_single_mce_header_pane_t1

0xe65d,	// (0x0009a87b) list_single_mce_message_pane_g1

0xe665,	// (0x0009a883) list_single_mce_message_pane_t1

0x22ad,	// (0x0008e4cb) bg_cale_heading_pane_cp01_ParamLimits

0x22ad,	// (0x0008e4cb) bg_cale_heading_pane_cp01

0xe673,	// (0x0009a891) bg_cale_pane_cp02_ParamLimits

0xe673,	// (0x0009a891) bg_cale_pane_cp02

0x22d0,	// (0x0008e4ee) cale_month_corner_pane

0x22e6,	// (0x0008e504) cale_month_day_heading_pane_ParamLimits

0x22e6,	// (0x0008e504) cale_month_day_heading_pane

0x2319,	// (0x0008e537) cale_month_pane_g1_ParamLimits

0x2319,	// (0x0008e537) cale_month_pane_g1

0x2335,	// (0x0008e553) cale_month_pane_g2_ParamLimits

0x2335,	// (0x0008e553) cale_month_pane_g2

0x2350,	// (0x0008e56e) cale_month_pane_g3_ParamLimits

0x2350,	// (0x0008e56e) cale_month_pane_g3

0x237c,	// (0x0008e59a) cale_month_pane_g4_ParamLimits

0x237c,	// (0x0008e59a) cale_month_pane_g4

0x23a8,	// (0x0008e5c6) cale_month_pane_g5_ParamLimits

0x23a8,	// (0x0008e5c6) cale_month_pane_g5

0x23dc,	// (0x0008e5fa) cale_month_pane_g6_ParamLimits

0x23dc,	// (0x0008e5fa) cale_month_pane_g6

0x2418,	// (0x0008e636) cale_month_pane_g7_ParamLimits

0x2418,	// (0x0008e636) cale_month_pane_g7

0x2454,	// (0x0008e672) cale_month_pane_g8_ParamLimits

0x2454,	// (0x0008e672) cale_month_pane_g8

0x2490,	// (0x0008e6ae) cale_month_pane_g9_ParamLimits

0x2490,	// (0x0008e6ae) cale_month_pane_g9

0x24ca,	// (0x0008e6e8) cale_month_pane_g10_ParamLimits

0x24ca,	// (0x0008e6e8) cale_month_pane_g10

0x2504,	// (0x0008e722) cale_month_pane_g11_ParamLimits

0x2504,	// (0x0008e722) cale_month_pane_g11

0x253e,	// (0x0008e75c) cale_month_pane_g12_ParamLimits

0x253e,	// (0x0008e75c) cale_month_pane_g12

0x2578,	// (0x0008e796) cale_month_pane_g13_ParamLimits

0x2578,	// (0x0008e796) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0009b4cd) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0009b4cd) cale_month_pane_g

0x25b2,	// (0x0008e7d0) cale_month_week_pane

0x25c5,	// (0x0008e7e3) grid_cale_month_pane_ParamLimits

0x25c5,	// (0x0008e7e3) grid_cale_month_pane

0x25f3,	// (0x0008e811) cale_month_day_heading_pane_t1

0x2651,	// (0x0008e86f) cale_month_day_heading_pane_t2

0x26b6,	// (0x0008e8d4) cale_month_day_heading_pane_t3

0x271b,	// (0x0008e939) cale_month_day_heading_pane_t4

0x2780,	// (0x0008e99e) cale_month_day_heading_pane_t5

0x27f5,	// (0x0008ea13) cale_month_day_heading_pane_t6

0x286a,	// (0x0008ea88) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0009b4e8) cale_month_day_heading_pane_t

0xe313,	// (0x0009a531) bg_cale_side_pane_cp01

0x28df,	// (0x0008eafd) cale_month_week_pane_t1

0x28f6,	// (0x0008eb14) cale_month_week_pane_t2

0x290d,	// (0x0008eb2b) cale_month_week_pane_t3

0x2924,	// (0x0008eb42) cale_month_week_pane_t4

0x293b,	// (0x0008eb59) cale_month_week_pane_t5

0x2952,	// (0x0008eb70) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0009b4f7) cale_month_week_pane_t

0x2969,	// (0x0008eb87) cell_cale_month_pane_ParamLimits

0x2969,	// (0x0008eb87) cell_cale_month_pane

0x9e62,	// (0x00096080) cell_cale_month_pane_g1

0x2a69,	// (0x0008ec87) cell_cale_month_pane_t1_ParamLimits

0x2a69,	// (0x0008ec87) cell_cale_month_pane_t1

0xe321,	// (0x0009a53f) grid_highlight_pane_cp08

0xe228,	// (0x0009a446) main_smil_g1

0x2a85,	// (0x0008eca3) smil_status_pane

0xe6a8,	// (0x0009a8c6) smil_text_pane

0xa510,	// (0x0009672e) bg_popup_call3_rect_pane_g8

0xa518,	// (0x00096736) bg_popup_call3_rect_pane_g9

0x0008,

0xf506,	// (0x0009b724) bg_popup_call3_rect_pane_g

0xa792,	// (0x000969b0) smil_status_volume_pane_g1

0xe6b2,	// (0x0009a8d0) smil_status_pane_t1

0xa7c5,	// (0x000969e3) volume_smil_pane

0xe6c9,	// (0x0009a8e7) list_smil_text_pane

0x2a98,	// (0x0008ecb6) scroll_pane_cp011

0x2aa3,	// (0x0008ecc1) smil_text_list_pane_t1_ParamLimits

0x2aa3,	// (0x0008ecc1) smil_text_list_pane_t1

0x9e6e,	// (0x0009608c) aid_volume_smil_ParamLimits

0x9e6e,	// (0x0009608c) aid_volume_smil

0xe228,	// (0x0009a446) smil_volume_pane_g1

0xe228,	// (0x0009a446) smil_volume_pane_g2

0x0001,

0x0058,	// (0x0008c276) smil_volume_pane_g

0xe1d3,	// (0x0009a3f1) listscroll_cale_day_pane

0xe6d3,	// (0x0009a8f1) bg_cale_pane

0xe6eb,	// (0x0009a909) list_cale_pane

0xe6fc,	// (0x0009a91a) scroll_pane_cp09

0xe70d,	// (0x0009a92b) cale_bg_pane_g1

0xe715,	// (0x0009a933) cale_bg_pane_g2

0xe71d,	// (0x0009a93b) cale_bg_pane_g3

0xe725,	// (0x0009a943) cale_bg_pane_g4

0xe72d,	// (0x0009a94b) cale_bg_pane_g5

0xe735,	// (0x0009a953) cale_bg_pane_g6

0xe73d,	// (0x0009a95b) cale_bg_pane_g7

0xe745,	// (0x0009a963) cale_bg_pane_g8

0xe74d,	// (0x0009a96b) cale_bg_pane_g9

0x0008,

0x005d,	// (0x0008c27b) cale_bg_pane_g

0x196f,	// (0x0008db8d) list_cale_time_pane_ParamLimits

0x196f,	// (0x0008db8d) list_cale_time_pane

0xe755,	// (0x0009a973) list_cale_time_pane_g1_ParamLimits

0xe755,	// (0x0009a973) list_cale_time_pane_g1

0xe761,	// (0x0009a97f) list_cale_time_pane_g2_ParamLimits

0xe761,	// (0x0009a97f) list_cale_time_pane_g2

0x2ae9,	// (0x0008ed07) list_cale_time_pane_g3_ParamLimits

0x2ae9,	// (0x0008ed07) list_cale_time_pane_g3

0x2af7,	// (0x0008ed15) list_cale_time_pane_g4_ParamLimits

0x2af7,	// (0x0008ed15) list_cale_time_pane_g4

0x2b05,	// (0x0008ed23) list_cale_time_pane_g5_ParamLimits

0x2b05,	// (0x0008ed23) list_cale_time_pane_g5

0x0005,

0xf2f9,	// (0x0009b517) list_cale_time_pane_g_ParamLimits

0xf2f9,	// (0x0009b517) list_cale_time_pane_g

0xe77b,	// (0x0009a999) list_cale_time_pane_t1_ParamLimits

0xe77b,	// (0x0009a999) list_cale_time_pane_t1

0xe7a3,	// (0x0009a9c1) list_cale_time_pane_t2_ParamLimits

0xe7a3,	// (0x0009a9c1) list_cale_time_pane_t2

0x2e76,	// (0x0008f094) aid_blid_cardinal_pane

0x2eb4,	// (0x0008f0d2) compass_pane_t4

0xe7cb,	// (0x0009a9e9) list_cale_time_pane_t4_ParamLimits

0xe7cb,	// (0x0009a9e9) list_cale_time_pane_t4

0x2ec2,	// (0x0008f0e0) compass_pane_t5

0x2ed0,	// (0x0008f0ee) compass_pane_t6

0x2ede,	// (0x0008f0fc) compass_pane_t7

0xec04,	// (0x0009ae22) navi_pane_cc_t1

0xed59,	// (0x0009af77) aid_phob_thumbnail_center_pane

0x3612,	// (0x0008f830) main_postcard_pane_g4_ParamLimits

0x0002,

0x007d,	// (0x0008c29b) list_cale_time_pane_t_ParamLimits

0x007d,	// (0x0008c29b) list_cale_time_pane_t

0xdaf8,	// (0x00099d16) bg_popup_window_pane_cp02_ParamLimits

0xdaf8,	// (0x00099d16) bg_popup_window_pane_cp02

0xe7f3,	// (0x0009aa11) heading_pane_cp01_ParamLimits

0xe7f3,	// (0x0009aa11) heading_pane_cp01

0xe7ff,	// (0x0009aa1d) loc_req_pane_ParamLimits

0xe7ff,	// (0x0009aa1d) loc_req_pane

0xe80f,	// (0x0009aa2d) loc_type_pane_ParamLimits

0xe80f,	// (0x0009aa2d) loc_type_pane

0xe821,	// (0x0009aa3f) loc_type_pane_t1_ParamLimits

0xe821,	// (0x0009aa3f) loc_type_pane_t1

0xe833,	// (0x0009aa51) loc_type_pane_t2_ParamLimits

0xe833,	// (0x0009aa51) loc_type_pane_t2

0xe845,	// (0x0009aa63) loc_type_pane_t3_ParamLimits

0xe845,	// (0x0009aa63) loc_type_pane_t3

0x0002,

0x0084,	// (0x0008c2a2) loc_type_pane_t_ParamLimits

0x0084,	// (0x0008c2a2) loc_type_pane_t

0xe857,	// (0x0009aa75) list_loc_req_pane

0xe861,	// (0x0009aa7f) scroll_pane_cp012

0x2b13,	// (0x0008ed31) list_single_loc_request_popup_menu_pane_ParamLimits

0x2b13,	// (0x0008ed31) list_single_loc_request_popup_menu_pane

0xe86c,	// (0x0009aa8a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xe86c,	// (0x0009aa8a) list_single_loc_request_popup_menu_pane_g1

0xe878,	// (0x0009aa96) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xe878,	// (0x0009aa96) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x008b,	// (0x0008c2a9) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x008b,	// (0x0008c2a9) list_single_loc_request_popup_menu_pane_g

0xe884,	// (0x0009aaa2) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xe884,	// (0x0009aaa2) list_single_loc_request_popup_menu_pane_t1

0xe0fc,	// (0x0009a31a) bg_popup_window_pane_cp03_ParamLimits

0xe0fc,	// (0x0009a31a) bg_popup_window_pane_cp03

0xf017,	// (0x0009b235) heading_loc_req_pane_ParamLimits

0xf017,	// (0x0009b235) heading_loc_req_pane

0x2b20,	// (0x0008ed3e) popup_dyc_status_message_window_g1_ParamLimits

0x2b20,	// (0x0008ed3e) popup_dyc_status_message_window_g1

0x2b34,	// (0x0008ed52) popup_dyc_status_message_window_t1_ParamLimits

0x2b34,	// (0x0008ed52) popup_dyc_status_message_window_t1

0x2b49,	// (0x0008ed67) popup_dyc_status_message_window_t2_ParamLimits

0x2b49,	// (0x0008ed67) popup_dyc_status_message_window_t2

0x2b5e,	// (0x0008ed7c) popup_dyc_status_message_window_t3_ParamLimits

0x2b5e,	// (0x0008ed7c) popup_dyc_status_message_window_t3

0x0002,

0xf306,	// (0x0009b524) popup_dyc_status_message_window_t_ParamLimits

0xf306,	// (0x0009b524) popup_dyc_status_message_window_t

0xdea1,	// (0x0009a0bf) bg_heading_pane_cp01

0xe89a,	// (0x0009aab8) heading_loc_req_pane_g1

0xe8a2,	// (0x0009aac0) heading_loc_req_pane_g2

0xe8aa,	// (0x0009aac8) heading_loc_req_pane_g3

0x0002,

0x0097,	// (0x0008c2b5) heading_loc_req_pane_g

0xe8b2,	// (0x0009aad0) heading_loc_req_pane_t1

0xe8c1,	// (0x0009aadf) bg_popup_sub_pane_cp01_ParamLimits

0xe8c1,	// (0x0009aadf) bg_popup_sub_pane_cp01

0xe8cf,	// (0x0009aaed) popup_cale_events_window_g1_ParamLimits

0xe8cf,	// (0x0009aaed) popup_cale_events_window_g1

0xe8ef,	// (0x0009ab0d) popup_cale_events_window_g2_ParamLimits

0xe8ef,	// (0x0009ab0d) popup_cale_events_window_g2

0x0001,

0x00cb,	// (0x0008c2e9) popup_cale_events_window_g_ParamLimits

0x00cb,	// (0x0008c2e9) popup_cale_events_window_g

0xe90f,	// (0x0009ab2d) popup_cale_events_window_t1_ParamLimits

0xe90f,	// (0x0009ab2d) popup_cale_events_window_t1

0xe921,	// (0x0009ab3f) popup_cale_events_window_t2_ParamLimits

0xe921,	// (0x0009ab3f) popup_cale_events_window_t2

0xe95f,	// (0x0009ab7d) popup_cale_events_window_t3_ParamLimits

0xe95f,	// (0x0009ab7d) popup_cale_events_window_t3

0xe999,	// (0x0009abb7) popup_cale_events_window_t4_ParamLimits

0xe999,	// (0x0009abb7) popup_cale_events_window_t4

0x0003,

0x00d0,	// (0x0008c2ee) popup_cale_events_window_t_ParamLimits

0x00d0,	// (0x0008c2ee) popup_cale_events_window_t

0x2c61,	// (0x0008ee7f) call_type_pane

0x2c71,	// (0x0008ee8f) popup_call_status_window_g1

0x2c85,	// (0x0008eea3) popup_call_status_window_g2

0x2c99,	// (0x0008eeb7) popup_call_status_window_g3

0x0002,

0xf33a,	// (0x0009b558) popup_call_status_window_g

0xe9cf,	// (0x0009abed) call_type_pane_g1

0xe9d8,	// (0x0009abf6) call_type_pane_g2

0x0001,

0xf341,	// (0x0009b55f) call_type_pane_g

0xdea1,	// (0x0009a0bf) bg_popup_sub_pane_cp02

0xe9e1,	// (0x0009abff) listscroll_popup_wml_pane

0xe9e9,	// (0x0009ac07) list_wml_pane

0xe9f3,	// (0x0009ac11) scroll_pane_cp013

0xe9fe,	// (0x0009ac1c) list_single_graphic_popup_wml_pane_ParamLimits

0xe9fe,	// (0x0009ac1c) list_single_graphic_popup_wml_pane

0xe228,	// (0x0009a446) list_single_graphic_popup_wml_pane_g1

0xea12,	// (0x0009ac30) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf346,	// (0x0009b564) list_single_graphic_popup_wml_pane_g

0xea1a,	// (0x0009ac38) list_single_graphic_popup_wml_pane_t1

0xea30,	// (0x0009ac4e) aid_call_pane

0xe0f4,	// (0x0009a312) popup_clock_analogue_window_g1

0xe0f4,	// (0x0009a312) popup_clock_analogue_window_g2

0x9e90,	// (0x000960ae) popup_clock_analogue_window_g3

0x9e90,	// (0x000960ae) popup_clock_analogue_window_g4

0xe228,	// (0x0009a446) popup_clock_analogue_window_g5

0x0004,

0xf34b,	// (0x0009b569) popup_clock_analogue_window_g

0x9e98,	// (0x000960b6) popup_clock_analogue_window_t1

0x9ea6,	// (0x000960c4) clock_digital_number_pane_ParamLimits

0x9ea6,	// (0x000960c4) clock_digital_number_pane

0x9eb2,	// (0x000960d0) clock_digital_number_pane_cp02_ParamLimits

0x9eb2,	// (0x000960d0) clock_digital_number_pane_cp02

0x9ebe,	// (0x000960dc) clock_digital_number_pane_cp03_ParamLimits

0x9ebe,	// (0x000960dc) clock_digital_number_pane_cp03

0x9eca,	// (0x000960e8) clock_digital_number_pane_cp04_ParamLimits

0x9eca,	// (0x000960e8) clock_digital_number_pane_cp04

0x9eda,	// (0x000960f8) clock_digital_separator_pane_ParamLimits

0x9eda,	// (0x000960f8) clock_digital_separator_pane

0x9ee6,	// (0x00096104) popup_clock_digital_window_t1

0xe228,	// (0x0009a446) clock_digital_number_pane_g1

0xe228,	// (0x0009a446) clock_digital_number_pane_g2

0x0001,

0x0058,	// (0x0008c276) clock_digital_number_pane_g

0xe228,	// (0x0009a446) clock_digital_separator_pane_g1

0xe228,	// (0x0009a446) clock_digital_separator_pane_g2

0x0001,

0x0058,	// (0x0008c276) clock_digital_separator_pane_g

0xdea1,	// (0x0009a0bf) bg_popup_window_pane_cp04

0xea38,	// (0x0009ac56) heading_pane_cp03

0xea40,	// (0x0009ac5e) listscroll_popup_gms_pane

0xea48,	// (0x0009ac66) grid_large_graphic_popup_pane

0xea52,	// (0x0009ac70) listscroll_popup_gms_pane_g1

0xea5a,	// (0x0009ac78) listscroll_popup_gms_pane_g2

0x0001,

0xf356,	// (0x0009b574) listscroll_popup_gms_pane_g

0xe517,	// (0x0009a735) scroll_pane_cp014

0x2ca8,	// (0x0008eec6) cell_large_graphic_popup_pane_ParamLimits

0x2ca8,	// (0x0008eec6) cell_large_graphic_popup_pane

0x2cc0,	// (0x0008eede) cell_large_graphic_popup_pane_g1_ParamLimits

0x2cc0,	// (0x0008eede) cell_large_graphic_popup_pane_g1

0xea62,	// (0x0009ac80) cell_large_graphic_popup_pane_g2_ParamLimits

0xea62,	// (0x0009ac80) cell_large_graphic_popup_pane_g2

0xea6e,	// (0x0009ac8c) cell_large_graphic_popup_pane_g3_ParamLimits

0xea6e,	// (0x0009ac8c) cell_large_graphic_popup_pane_g3

0xea7b,	// (0x0009ac99) cell_large_graphic_popup_pane_g4_ParamLimits

0xea7b,	// (0x0009ac99) cell_large_graphic_popup_pane_g4

0x0003,

0xf35b,	// (0x0009b579) cell_large_graphic_popup_pane_g_ParamLimits

0xf35b,	// (0x0009b579) cell_large_graphic_popup_pane_g

0xea8b,	// (0x0009aca9) grid_highlight_pane_cp010

0xe228,	// (0x0009a446) bg_popup_call_pane_g1

0xea95,	// (0x0009acb3) list_single_graphic_popup_conf_pane_ParamLimits

0xea95,	// (0x0009acb3) list_single_graphic_popup_conf_pane

0xeaa8,	// (0x0009acc6) list_highlight_pane_cp01

0xeab1,	// (0x0009accf) list_single_graphic_popup_conf_pane_g1

0xeab9,	// (0x0009acd7) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf364,	// (0x0009b582) list_single_graphic_popup_conf_pane_g

0xeac1,	// (0x0009acdf) list_single_graphic_popup_conf_pane_t1

0xeadd,	// (0x0009acfb) linegrid_cams_pane_g1

0x2ccc,	// (0x0008eeea) linegrid_cams_pane_g2

0xe354,	// (0x0009a572) linegrid_cams_pane_g3

0xeae6,	// (0x0009ad04) linegrid_cams_pane_g4

0x2cd5,	// (0x0008eef3) linegrid_cams_pane_g5

0x2cde,	// (0x0008eefc) linegrid_cams_pane_g6

0xe35d,	// (0x0009a57b) linegrid_cams_pane_g7

0x0006,

0xf369,	// (0x0009b587) linegrid_cams_pane_g

0xeaef,	// (0x0009ad0d) popup_clock_analogue_window

0xeaef,	// (0x0009ad0d) popup_clock_digital_window

0xdea1,	// (0x0009a0bf) popup_phob_thumbnail_window

0xe228,	// (0x0009a446) call_video_uplink_pane_g1

0xeaf8,	// (0x0009ad16) call_video_uplink_pane_g2

0x0001,

0x0117,	// (0x0008c335) call_video_uplink_pane_g

0xeb00,	// (0x0009ad1e) video_uplink_pane

0xeb08,	// (0x0009ad26) mce_image_pane_g1

0x2ce9,	// (0x0008ef07) mce_image_pane_g2

0x2cf3,	// (0x0008ef11) mce_image_pane_g3

0x2cfb,	// (0x0008ef19) mce_image_pane_g4

0x2d03,	// (0x0008ef21) mce_image_pane_g5

0x0004,

0xf378,	// (0x0009b596) mce_image_pane_g

0xeb12,	// (0x0009ad30) control_top_pane_stacon_cp01_ParamLimits

0xeb12,	// (0x0009ad30) control_top_pane_stacon_cp01

0xeb26,	// (0x0009ad44) uni_indicator_pane_stacon_cp01_ParamLimits

0xeb26,	// (0x0009ad44) uni_indicator_pane_stacon_cp01

0xeb37,	// (0x0009ad55) bg_popup_sub_pane_cp03

0x2d0b,	// (0x0008ef29) chi_dic_find_pane

0x2d13,	// (0x0008ef31) listscroll_chi_dic_pane

0x2d1c,	// (0x0008ef3a) main_pane_chidic_g1

0xeb41,	// (0x0009ad5f) chi_dic_find_pane_t1

0xeb4f,	// (0x0009ad6d) find_chidic_pane

0xeb58,	// (0x0009ad76) chi_dic_list_pane_ParamLimits

0xeb58,	// (0x0009ad76) chi_dic_list_pane

0xeb69,	// (0x0009ad87) scroll_pane_cp020

0xeb71,	// (0x0009ad8f) find_chidic_pane_t1

0xdea1,	// (0x0009a0bf) input_focus_pane_cp06

0x2d2f,	// (0x0008ef4d) list_chi_dic_pane_ParamLimits

0x2d2f,	// (0x0008ef4d) list_chi_dic_pane

0x2d41,	// (0x0008ef5f) list_chi_dic_pane_t1_ParamLimits

0x2d41,	// (0x0008ef5f) list_chi_dic_pane_t1

0xdea1,	// (0x0009a0bf) list_highlight_pane_cp020

0xeb80,	// (0x0009ad9e) bg_cale_heading_pane_g1

0x2d54,	// (0x0008ef72) bg_cale_heading_pane_g2

0x2d5c,	// (0x0008ef7a) bg_cale_heading_pane_g3

0x2d64,	// (0x0008ef82) bg_cale_heading_pane_g4

0x2d6e,	// (0x0008ef8c) bg_cale_heading_pane_g5

0x2d78,	// (0x0008ef96) bg_cale_heading_pane_g6

0x2d80,	// (0x0008ef9e) bg_cale_heading_pane_g7

0x2d88,	// (0x0008efa6) bg_cale_heading_pane_g8

0x2d92,	// (0x0008efb0) bg_cale_heading_pane_g9

0x0008,

0xf383,	// (0x0009b5a1) bg_cale_heading_pane_g

0xeb80,	// (0x0009ad9e) bg_cale_side_pane_g1

0x2d9c,	// (0x0008efba) bg_cale_side_pane_g2

0x2da4,	// (0x0008efc2) bg_cale_side_pane_g3

0x2dac,	// (0x0008efca) bg_cale_side_pane_g4

0x2db4,	// (0x0008efd2) bg_cale_side_pane_g5

0x2dbc,	// (0x0008efda) bg_cale_side_pane_g6

0x2dc4,	// (0x0008efe2) bg_cale_side_pane_g7

0x2dcc,	// (0x0008efea) bg_cale_side_pane_g8

0x2dd4,	// (0x0008eff2) bg_cale_side_pane_g9

0x0008,

0xf396,	// (0x0009b5b4) bg_cale_side_pane_g

0x2ddc,	// (0x0008effa) popup_call_status_window_ParamLimits

0x2ddc,	// (0x0008effa) popup_call_status_window

0xeb88,	// (0x0009ada6) stacon_top_pane

0xeb90,	// (0x0009adae) status_pane_ParamLimits

0xeb90,	// (0x0009adae) status_pane

0xeba5,	// (0x0009adc3) status_small_pane

0xebad,	// (0x0009adcb) control_pane

0xdea1,	// (0x0009a0bf) stacon_bottom_pane

0xebb5,	// (0x0009add3) list_single_mce_smart_pane_t1_ParamLimits

0xebb5,	// (0x0009add3) list_single_mce_smart_pane_t1

0xebc8,	// (0x0009ade6) list_single_mce_smart_pane_t2_ParamLimits

0xebc8,	// (0x0009ade6) list_single_mce_smart_pane_t2

0x0001,

0x014d,	// (0x0008c36b) list_single_mce_smart_pane_t_ParamLimits

0x014d,	// (0x0008c36b) list_single_mce_smart_pane_t

0x2e25,	// (0x0008f043) compass_pane

0x2e2e,	// (0x0008f04c) main_location2_pane_t1

0x2e40,	// (0x0008f05e) main_location2_pane_t2

0x2e52,	// (0x0008f070) main_location2_pane_t3

0x0003,

0xf3a9,	// (0x0009b5c7) main_location2_pane_t

0xebe7,	// (0x0009ae05) compass_pane_g1_ParamLimits

0xebe7,	// (0x0009ae05) compass_pane_g1

0x2e96,	// (0x0008f0b4) compass_pane_t1

0x2ea5,	// (0x0008f0c3) compass_pane_t2

0x0005,

0xf3b2,	// (0x0009b5d0) compass_pane_t

0x2eec,	// (0x0008f10a) text_secondary_cp61

0xebfb,	// (0x0009ae19) navi_pane_cams_g5

0xec1e,	// (0x0009ae3c) navi_pane_im_t1

0xec2c,	// (0x0009ae4a) navi_pane_mp_g1_ParamLimits

0xec2c,	// (0x0009ae4a) navi_pane_mp_g1

0xec40,	// (0x0009ae5e) navi_pane_mp_g2_ParamLimits

0xec40,	// (0x0009ae5e) navi_pane_mp_g2

0xec4c,	// (0x0009ae6a) navi_pane_mp_g3_ParamLimits

0xec4c,	// (0x0009ae6a) navi_pane_mp_g3

0x0002,

0x016f,	// (0x0008c38d) navi_pane_mp_g_ParamLimits

0x016f,	// (0x0008c38d) navi_pane_mp_g

0xec58,	// (0x0009ae76) navi_pane_mp_t1

0xec66,	// (0x0009ae84) navi_pane_mp_t2

0x0002,

0x0176,	// (0x0008c394) navi_pane_mp_t

0xeca2,	// (0x0009aec0) navi_pane_vt_g1

0xec58,	// (0x0009ae76) navi_pane_vt_t1

0xecaa,	// (0x0009aec8) navi_slider_pane

0xecb2,	// (0x0009aed0) zooming_pane

0xecba,	// (0x0009aed8) navi_slider_pane_g1

0x9f03,	// (0x00096121) navi_slider_pane_g2

0x0006,

0xf3c6,	// (0x0009b5e4) navi_slider_pane_g

0xecde,	// (0x0009aefc) aid_levels_zoom

0xece6,	// (0x0009af04) zooming_pane_g1

0xecee,	// (0x0009af0c) zooming_pane_g2

0xecee,	// (0x0009af0c) zooming_pane_g3

0x0002,

0x018c,	// (0x0008c3aa) zooming_pane_g

0xecf6,	// (0x0009af14) level_10_zoom

0xecff,	// (0x0009af1d) level_11_zoom

0xed08,	// (0x0009af26) level_1_zoom

0xed11,	// (0x0009af2f) level_2_zoom

0xed1a,	// (0x0009af38) level_3_zoom

0xed23,	// (0x0009af41) level_4_zoom

0xed2c,	// (0x0009af4a) level_5_zoom

0xed35,	// (0x0009af53) level_6_zoom

0xed3e,	// (0x0009af5c) level_7_zoom

0xed47,	// (0x0009af65) level_8_zoom

0xed50,	// (0x0009af6e) level_9_zoom

0xed61,	// (0x0009af7f) popup_phob_thumbnail_window_g1

0xed69,	// (0x0009af87) popup_phob_thumbnail_window_g2

0x0001,

0x0193,	// (0x0008c3b1) popup_phob_thumbnail_window_g

0xa672,	// (0x00096890) level_1_location

0xa67a,	// (0x00096898) level_2_location

0xa682,	// (0x000968a0) level_3_location

0xa68a,	// (0x000968a8) level_4_location

0xecb2,	// (0x0009aed0) level_5_location

0x3011,	// (0x0008f22f) mce_icon_pane_g1

0x3019,	// (0x0008f237) mce_icon_pane_g2

0x0001,

0xf3d5,	// (0x0009b5f3) mce_icon_pane_g

0x3021,	// (0x0008f23f) main_mup_pane_g1_ParamLimits

0x3021,	// (0x0008f23f) main_mup_pane_g1

0x3037,	// (0x0008f255) main_mup_pane_g2_ParamLimits

0x3037,	// (0x0008f255) main_mup_pane_g2

0x304f,	// (0x0008f26d) main_mup_pane_g3_ParamLimits

0x304f,	// (0x0008f26d) main_mup_pane_g3

0x3067,	// (0x0008f285) main_mup_pane_g4_ParamLimits

0x3067,	// (0x0008f285) main_mup_pane_g4

0x307f,	// (0x0008f29d) main_mup_pane_g5_ParamLimits

0x307f,	// (0x0008f29d) main_mup_pane_g5

0x309b,	// (0x0008f2b9) main_mup_pane_g6_ParamLimits

0x309b,	// (0x0008f2b9) main_mup_pane_g6

0x30b3,	// (0x0008f2d1) main_mup_pane_g7_ParamLimits

0x30b3,	// (0x0008f2d1) main_mup_pane_g7

0x30cb,	// (0x0008f2e9) main_mup_pane_g8_ParamLimits

0x30cb,	// (0x0008f2e9) main_mup_pane_g8

0x30e5,	// (0x0008f303) main_mup_pane_g9_ParamLimits

0x30e5,	// (0x0008f303) main_mup_pane_g9

0x30ff,	// (0x0008f31d) main_mup_pane_g10_ParamLimits

0x30ff,	// (0x0008f31d) main_mup_pane_g10

0x3119,	// (0x0008f337) main_mup_pane_g11_ParamLimits

0x3119,	// (0x0008f337) main_mup_pane_g11

0x312d,	// (0x0008f34b) main_mup_pane_g12_ParamLimits

0x312d,	// (0x0008f34b) main_mup_pane_g12

0x3143,	// (0x0008f361) main_mup_pane_g13_ParamLimits

0x3143,	// (0x0008f361) main_mup_pane_g13

0x000c,

0xf3da,	// (0x0009b5f8) main_mup_pane_g_ParamLimits

0xf3da,	// (0x0009b5f8) main_mup_pane_g

0x3157,	// (0x0008f375) main_mup_pane_t1_ParamLimits

0x3157,	// (0x0008f375) main_mup_pane_t1

0x3171,	// (0x0008f38f) main_mup_pane_t2_ParamLimits

0x3171,	// (0x0008f38f) main_mup_pane_t2

0x3189,	// (0x0008f3a7) main_mup_pane_t3_ParamLimits

0x3189,	// (0x0008f3a7) main_mup_pane_t3

0x31a1,	// (0x0008f3bf) main_mup_pane_t4_ParamLimits

0x31a1,	// (0x0008f3bf) main_mup_pane_t4

0x31bf,	// (0x0008f3dd) main_mup_pane_t5_ParamLimits

0x31bf,	// (0x0008f3dd) main_mup_pane_t5

0x31d4,	// (0x0008f3f2) main_mup_pane_t6_ParamLimits

0x31d4,	// (0x0008f3f2) main_mup_pane_t6

0x0005,

0xf3f5,	// (0x0009b613) main_mup_pane_t_ParamLimits

0xf3f5,	// (0x0009b613) main_mup_pane_t

0x31e6,	// (0x0008f404) mup_progress_pane_ParamLimits

0x31e6,	// (0x0008f404) mup_progress_pane

0x31f2,	// (0x0008f410) mup_visualizer_pane_ParamLimits

0x31f2,	// (0x0008f410) mup_visualizer_pane

0x3222,	// (0x0008f440) mup_volume_pane_ParamLimits

0x3222,	// (0x0008f440) mup_volume_pane

0xeacf,	// (0x0009aced) mup_visualizer_pane_g1_ParamLimits

0xeacf,	// (0x0009aced) mup_visualizer_pane_g1

0xeacf,	// (0x0009aced) mup_visualizer_pane_g2_ParamLimits

0xeacf,	// (0x0009aced) mup_visualizer_pane_g2

0xebe7,	// (0x0009ae05) mup_visualizer_pane_g3_ParamLimits

0xebe7,	// (0x0009ae05) mup_visualizer_pane_g3

0x0002,

0xf402,	// (0x0009b620) mup_visualizer_pane_g_ParamLimits

0xf402,	// (0x0009b620) mup_visualizer_pane_g

0xe228,	// (0x0009a446) mup_volume_pane_g1

0xed79,	// (0x0009af97) mup_volume_pane_g2

0x0001,

0x01cc,	// (0x0008c3ea) mup_volume_pane_g

0xe228,	// (0x0009a446) mup_progress_pane_g1

0xed82,	// (0x0009afa0) mup_progress_pane_g2

0xed8b,	// (0x0009afa9) mup_progress_pane_g3

0x0002,

0x01d1,	// (0x0008c3ef) mup_progress_pane_g

0xdea1,	// (0x0009a0bf) bg_popup_window_pane_cp05

0xed94,	// (0x0009afb2) heading_pane_cp02_ParamLimits

0xed94,	// (0x0009afb2) heading_pane_cp02

0xedae,	// (0x0009afcc) list_popup_blid_pane

0xedb6,	// (0x0009afd4) list_blid_sat_info_pane_ParamLimits

0xedb6,	// (0x0009afd4) list_blid_sat_info_pane

0xedc9,	// (0x0009afe7) list_blid_sat_info_pane_g1

0xedd1,	// (0x0009afef) list_blid_sat_info_pane_t1

0x3338,	// (0x0008f556) mup_equalizer_pane_ParamLimits

0x3338,	// (0x0008f556) mup_equalizer_pane

0x3351,	// (0x0008f56f) mup_equalizer_pane_cp1_ParamLimits

0x3351,	// (0x0008f56f) mup_equalizer_pane_cp1

0x336e,	// (0x0008f58c) mup_equalizer_pane_cp2_ParamLimits

0x336e,	// (0x0008f58c) mup_equalizer_pane_cp2

0x338b,	// (0x0008f5a9) mup_equalizer_pane_cp3_ParamLimits

0x338b,	// (0x0008f5a9) mup_equalizer_pane_cp3

0x33ac,	// (0x0008f5ca) mup_equalizer_pane_cp4_ParamLimits

0x33ac,	// (0x0008f5ca) mup_equalizer_pane_cp4

0x33cd,	// (0x0008f5eb) mup_equalizer_pane_cp5

0x33e1,	// (0x0008f5ff) mup_equalizer_pane_cp6

0x33f5,	// (0x0008f613) mup_equalizer_pane_cp7

0xa590,	// (0x000967ae) bg_popup_call_poc_act_pane_g9

0xa598,	// (0x000967b6) bg_popup_call_poc_act_pane_g10

0xa5a0,	// (0x000967be) bg_popup_call_poc_act_pane_g11

0x000a,

0xe0fc,	// (0x0009a31a) mup_scale_pane

0xe228,	// (0x0009a446) mup_scale_pane_g1

0xeddf,	// (0x0009affd) mup_scale_pane_g2

0x0006,

0xf41e,	// (0x0009b63c) mup_scale_pane_g

0xee03,	// (0x0009b021) msg_data_pane

0xee0b,	// (0x0009b029) scroll_pane_cp017

0x341b,	// (0x0008f639) bg_list_pane_cp04_ParamLimits

0x341b,	// (0x0008f639) bg_list_pane_cp04

0xee13,	// (0x0009b031) msg_data_pane_g1

0x343b,	// (0x0008f659) msg_data_pane_g2

0x3445,	// (0x0008f663) msg_data_pane_g3

0x344d,	// (0x0008f66b) msg_data_pane_g4

0x3455,	// (0x0008f673) msg_data_pane_g5

0x345d,	// (0x0008f67b) msg_data_pane_g6

0x3465,	// (0x0008f683) msg_data_pane_g7

0x0006,

0xf42d,	// (0x0009b64b) msg_data_pane_g

0x346d,	// (0x0008f68b) msg_text_pane_ParamLimits

0x346d,	// (0x0008f68b) msg_text_pane

0x348f,	// (0x0008f6ad) qrid_highlight_pane_cp011_ParamLimits

0x348f,	// (0x0008f6ad) qrid_highlight_pane_cp011

0xdea1,	// (0x0009a0bf) msg_body_pane

0xdea1,	// (0x0009a0bf) msg_header_pane

0xee24,	// (0x0009b042) input_focus_pane_cp07

0x34b3,	// (0x0008f6d1) msg_header_pane_t1_ParamLimits

0x34b3,	// (0x0008f6d1) msg_header_pane_t1

0x34c7,	// (0x0008f6e5) msg_header_pane_t2_ParamLimits

0x34c7,	// (0x0008f6e5) msg_header_pane_t2

0x0001,

0xf441,	// (0x0009b65f) msg_header_pane_t_ParamLimits

0xf441,	// (0x0009b65f) msg_header_pane_t

0xee39,	// (0x0009b057) msg_body_pane_g1

0x34d9,	// (0x0008f6f7) msg_body_pane_t1_ParamLimits

0x34d9,	// (0x0008f6f7) msg_body_pane_t1

0x350a,	// (0x0008f728) msg_body_pane_t2_ParamLimits

0x350a,	// (0x0008f728) msg_body_pane_t2

0x351c,	// (0x0008f73a) msg_body_pane_t3_ParamLimits

0x351c,	// (0x0008f73a) msg_body_pane_t3

0x0002,

0xf446,	// (0x0009b664) msg_body_pane_t_ParamLimits

0xf446,	// (0x0009b664) msg_body_pane_t

0x3568,	// (0x0008f786) main_viewer_pane_g1_ParamLimits

0x3568,	// (0x0008f786) main_viewer_pane_g1

0x3576,	// (0x0008f794) main_viewer_pane_g2_ParamLimits

0x3576,	// (0x0008f794) main_viewer_pane_g2

0x3584,	// (0x0008f7a2) main_viewer_pane_g3_ParamLimits

0x3584,	// (0x0008f7a2) main_viewer_pane_g3

0x3593,	// (0x0008f7b1) main_viewer_pane_g4_ParamLimits

0x3593,	// (0x0008f7b1) main_viewer_pane_g4

0x9f2d,	// (0x0009614b) main_viewer_pane_g5_ParamLimits

0x9f2d,	// (0x0009614b) main_viewer_pane_g5

0x9f2d,	// (0x0009614b) main_viewer_pane_g7_ParamLimits

0x9f2d,	// (0x0009614b) main_viewer_pane_g7

0xe86c,	// (0x0009aa8a) main_viewer_pane_g8_ParamLimits

0xe86c,	// (0x0009aa8a) main_viewer_pane_g8

0x0007,

0xf456,	// (0x0009b674) main_viewer_pane_g_ParamLimits

0xf456,	// (0x0009b674) main_viewer_pane_g

0xee41,	// (0x0009b05f) viewer_content_pane_ParamLimits

0xee41,	// (0x0009b05f) viewer_content_pane

0x35cf,	// (0x0008f7ed) main_postcard_pane_g1_ParamLimits

0x35cf,	// (0x0008f7ed) main_postcard_pane_g1

0x35e5,	// (0x0008f803) main_postcard_pane_g2_ParamLimits

0x35e5,	// (0x0008f803) main_postcard_pane_g2

0x35fb,	// (0x0008f819) main_postcard_pane_g3_ParamLimits

0x35fb,	// (0x0008f819) main_postcard_pane_g3

0x0005,

0xf467,	// (0x0009b685) main_postcard_pane_g_ParamLimits

0xf467,	// (0x0009b685) main_postcard_pane_g

0x3612,	// (0x0008f830) main_postcard_pane_g4

0xa7a5,	// (0x000969c3) smil_status_volume_pane_g2

0x3655,	// (0x0008f873) postcard_pane_ParamLimits

0x3655,	// (0x0008f873) postcard_pane

0xee4f,	// (0x0009b06d) postcard_pane_g1_ParamLimits

0xee4f,	// (0x0009b06d) postcard_pane_g1

0x3697,	// (0x0008f8b5) postcard_pane_g2_ParamLimits

0x3697,	// (0x0008f8b5) postcard_pane_g2

0x36a3,	// (0x0008f8c1) postcard_pane_g3_ParamLimits

0x36a3,	// (0x0008f8c1) postcard_pane_g3

0xee5d,	// (0x0009b07b) postcard_pane_g4_ParamLimits

0xee5d,	// (0x0009b07b) postcard_pane_g4

0x36af,	// (0x0008f8cd) postcard_pane_g5_ParamLimits

0x36af,	// (0x0008f8cd) postcard_pane_g5

0x36c4,	// (0x0008f8e2) postcard_pane_g6_ParamLimits

0x36c4,	// (0x0008f8e2) postcard_pane_g6

0xee4f,	// (0x0009b06d) postcard_pane_g7_ParamLimits

0xee4f,	// (0x0009b06d) postcard_pane_g7

0x0006,

0xf474,	// (0x0009b692) postcard_pane_g_ParamLimits

0xf474,	// (0x0009b692) postcard_pane_g

0x36d8,	// (0x0008f8f6) main_mp2_pane_g1_ParamLimits

0x36d8,	// (0x0008f8f6) main_mp2_pane_g1

0x36e4,	// (0x0008f902) main_mp2_pane_g2_ParamLimits

0x36e4,	// (0x0008f902) main_mp2_pane_g2

0x36f0,	// (0x0008f90e) main_mp2_pane_g3_ParamLimits

0x36f0,	// (0x0008f90e) main_mp2_pane_g3

0x0002,

0xf483,	// (0x0009b6a1) main_mp2_pane_g_ParamLimits

0xf483,	// (0x0009b6a1) main_mp2_pane_g

0x36fc,	// (0x0008f91a) main_mp2_pane_t1_ParamLimits

0x36fc,	// (0x0008f91a) main_mp2_pane_t1

0x3711,	// (0x0008f92f) main_mp2_pane_t2_ParamLimits

0x3711,	// (0x0008f92f) main_mp2_pane_t2

0x3723,	// (0x0008f941) main_mp2_pane_t3_ParamLimits

0x3723,	// (0x0008f941) main_mp2_pane_t3

0x0002,

0xf48a,	// (0x0009b6a8) main_mp2_pane_t_ParamLimits

0xf48a,	// (0x0009b6a8) main_mp2_pane_t

0xee6b,	// (0x0009b089) pec_content_pane_ParamLimits

0xee6b,	// (0x0009b089) pec_content_pane

0xe517,	// (0x0009a735) scroll_pane_cp015

0xee7d,	// (0x0009b09b) pec_attribute_pane_ParamLimits

0xee7d,	// (0x0009b09b) pec_attribute_pane

0x3735,	// (0x0008f953) pec_content_pane_g1_ParamLimits

0x3735,	// (0x0008f953) pec_content_pane_g1

0xee8d,	// (0x0009b0ab) pec_content_pane_t1_ParamLimits

0xee8d,	// (0x0009b0ab) pec_content_pane_t1

0xee9f,	// (0x0009b0bd) pec_content_pane_t2_ParamLimits

0xee9f,	// (0x0009b0bd) pec_content_pane_t2

0x0001,

0x0260,	// (0x0008c47e) pec_content_pane_t_ParamLimits

0x0260,	// (0x0008c47e) pec_content_pane_t

0x3741,	// (0x0008f95f) list_single_graphic_pane_cp01_ParamLimits

0x3741,	// (0x0008f95f) list_single_graphic_pane_cp01

0xe0fc,	// (0x0009a31a) bg_popup_sub_pane_cp04

0xeeb1,	// (0x0009b0cf) popup_mup_playback_window_g1

0xeebd,	// (0x0009b0db) popup_mup_playback_window_t1

0xeed2,	// (0x0009b0f0) popup_mup_playback_window_t2

0x0001,

0x0265,	// (0x0008c483) popup_mup_playback_window_t

0xef09,	// (0x0009b127) main_image_pane_g1_ParamLimits

0xef09,	// (0x0009b127) main_image_pane_g1

0xef4c,	// (0x0009b16a) scroll_pane_cp018_ParamLimits

0xef4c,	// (0x0009b16a) scroll_pane_cp018

0xef64,	// (0x0009b182) scroll_pane_cp016_ParamLimits

0xef64,	// (0x0009b182) scroll_pane_cp016

0x380e,	// (0x0008fa2c) smil2_image_pane_ParamLimits

0x380e,	// (0x0008fa2c) smil2_image_pane

0x383e,	// (0x0008fa5c) smil2_root_pane_ParamLimits

0x383e,	// (0x0008fa5c) smil2_root_pane

0x3876,	// (0x0008fa94) smil2_text_pane_ParamLimits

0x3876,	// (0x0008fa94) smil2_text_pane

0xdea1,	// (0x0009a0bf) bg_list_pane_cp06

0xefa0,	// (0x0009b1be) grid_radio_pane

0xdea1,	// (0x0009a0bf) bg_popup_window_pane_cp06

0xefa8,	// (0x0009b1c6) main_fmradio_pane_t1

0xea38,	// (0x0009ac56) heading_pane_cp04

0xefb6,	// (0x0009b1d4) main_fmradio_pane_t2

0xa5a8,	// (0x000967c6) popup_cale_lunar_info_window_g1

0xefc4,	// (0x0009b1e2) main_fmradio_pane_t3

0xa5b0,	// (0x000967ce) popup_cale_lunar_info_window_g2

0xefd2,	// (0x0009b1f0) main_fmradio_pane_t4

0x0001,

0xefe0,	// (0x0009b1fe) main_fmradio_pane_t5

0x0004,

0xf555,	// (0x0009b773) popup_cale_lunar_info_window_g

0x027a,	// (0x0008c498) main_fmradio_pane_t

0xefee,	// (0x0009b20c) wait_bar_pane_cp03

0xeff6,	// (0x0009b214) cell_fmradio_pane_ParamLimits

0xeff6,	// (0x0009b214) cell_fmradio_pane

0xee4f,	// (0x0009b06d) cell_fmradio_pane_g1_ParamLimits

0xee4f,	// (0x0009b06d) cell_fmradio_pane_g1

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp011

0xf023,	// (0x0009b241) poc_content_pane_ParamLimits

0xf023,	// (0x0009b241) poc_content_pane

0xf035,	// (0x0009b253) scroll_pane_cp019

0x38f6,	// (0x0008fb14) popup_call_poc_act_window_ParamLimits

0x38f6,	// (0x0008fb14) popup_call_poc_act_window

0x391a,	// (0x0008fb38) popup_call_poc_inact_window_ParamLimits

0x391a,	// (0x0008fb38) popup_call_poc_inact_window

0xf52c,	// (0x0009b74a) bg_popup_call_poc_act_pane_g

0xa520,	// (0x0009673e) bg_popup_call_poc_inact_pane_g1

0xa528,	// (0x00096746) bg_popup_call_poc_inact_pane_g2

0xf03d,	// (0x0009b25b) popup_call_poc_act_window_g2

0xa530,	// (0x0009674e) bg_popup_call_poc_inact_pane_g3

0xa538,	// (0x00096756) bg_popup_call_poc_inact_pane_g4

0xa540,	// (0x0009675e) bg_popup_call_poc_inact_pane_g5

0xf045,	// (0x0009b263) popup_call_poc_act_window_t1_ParamLimits

0xf045,	// (0x0009b263) popup_call_poc_act_window_t1

0xf06d,	// (0x0009b28b) popup_call_poc_act_window_t2_ParamLimits

0xf06d,	// (0x0009b28b) popup_call_poc_act_window_t2

0xf095,	// (0x0009b2b3) popup_call_poc_act_window_t3_ParamLimits

0xf095,	// (0x0009b2b3) popup_call_poc_act_window_t3

0xf0bd,	// (0x0009b2db) popup_call_poc_act_window_t4_ParamLimits

0xf0bd,	// (0x0009b2db) popup_call_poc_act_window_t4

0x0003,

0xf4a1,	// (0x0009b6bf) popup_call_poc_act_window_t_ParamLimits

0xf4a1,	// (0x0009b6bf) popup_call_poc_act_window_t

0xa548,	// (0x00096766) bg_popup_call_poc_inact_pane_g6

0xa550,	// (0x0009676e) bg_popup_call_poc_inact_pane_g7

0xa558,	// (0x00096776) bg_popup_call_poc_inact_pane_g8

0xf0cf,	// (0x0009b2ed) popup_call_poc_inact_window_g2

0xa560,	// (0x0009677e) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf519,	// (0x0009b737) bg_popup_call_poc_inact_pane_g

0xf0d7,	// (0x0009b2f5) popup_call_poc_inact_window_t1_ParamLimits

0xf0d7,	// (0x0009b2f5) popup_call_poc_inact_window_t1

0x3933,	// (0x0008fb51) popup_call_poc_inact_window_t2_ParamLimits

0x3933,	// (0x0008fb51) popup_call_poc_inact_window_t2

0x3948,	// (0x0008fb66) popup_call_poc_inact_window_t3_ParamLimits

0x3948,	// (0x0008fb66) popup_call_poc_inact_window_t3

0x0002,

0xf4aa,	// (0x0009b6c8) popup_call_poc_inact_window_t_ParamLimits

0xf4aa,	// (0x0009b6c8) popup_call_poc_inact_window_t

0xa718,	// (0x00096936) context_pane_ParamLimits

0x4999,	// (0x00090bb7) signal_pane_ParamLimits

0xecb2,	// (0x0009aed0) main_call2_pane

0xa706,	// (0x00096924) popup_phob_thumbnail2_window_ParamLimits

0xa706,	// (0x00096924) popup_phob_thumbnail2_window

0x9f15,	// (0x00096133) aid_hotspot_pointer_arrow_pane

0x9f1d,	// (0x0009613b) aid_hotspot_pointer_hand_pane

0x44af,	// (0x000906cd) phob_pre_status_pane_g5

0x199a,	// (0x0008dbb8) cams_zoom_pane_ParamLimits

0x19a9,	// (0x0008dbc7) image_vga_pane_ParamLimits

0x19c3,	// (0x0008dbe1) main_camera_pane_g1_ParamLimits

0x19d5,	// (0x0008dbf3) main_camera_pane_g2_ParamLimits

0x19e5,	// (0x0008dc03) main_camera_pane_g3_ParamLimits

0x19f5,	// (0x0008dc13) main_camera_pane_g4_ParamLimits

0x1a05,	// (0x0008dc23) main_camera_pane_g5_ParamLimits

0x1a15,	// (0x0008dc33) main_camera_pane_g6_ParamLimits

0x1a27,	// (0x0008dc45) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0009b44c) main_camera_pane_g_ParamLimits

0x1a37,	// (0x0008dc55) main_camera_pane_t1_ParamLimits

0x1a4d,	// (0x0008dc6b) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0009b45d) main_camera_pane_t_ParamLimits

0xe0fc,	// (0x0009a31a) bg_popup_preview_window_pane_cp01_ParamLimits

0xe0fc,	// (0x0009a31a) bg_popup_preview_window_pane_cp01

0x395d,	// (0x0008fb7b) popup_phob_thumbnail2_window_g1_ParamLimits

0x395d,	// (0x0008fb7b) popup_phob_thumbnail2_window_g1

0xdea1,	// (0x0009a0bf) call2_cli_visual_pane

0x3984,	// (0x0008fba2) popup_call2_audio_conf_window_ParamLimits

0x3984,	// (0x0008fba2) popup_call2_audio_conf_window

0x39a4,	// (0x0008fbc2) popup_call2_audio_first_window_ParamLimits

0x39a4,	// (0x0008fbc2) popup_call2_audio_first_window

0x3a3a,	// (0x0008fc58) popup_call2_audio_in_window_ParamLimits

0x3a3a,	// (0x0008fc58) popup_call2_audio_in_window

0x3a82,	// (0x0008fca0) popup_call2_audio_out_window_ParamLimits

0x3a82,	// (0x0008fca0) popup_call2_audio_out_window

0x3aec,	// (0x0008fd0a) popup_call2_audio_second_window_ParamLimits

0x3aec,	// (0x0008fd0a) popup_call2_audio_second_window

0x3b52,	// (0x0008fd70) popup_call2_audio_wait_window_ParamLimits

0x3b52,	// (0x0008fd70) popup_call2_audio_wait_window

0xdea1,	// (0x0009a0bf) bg_popup_call2_act_pane_cp03

0xe0de,	// (0x0009a2fc) list_conf_pane_cp

0x3b8c,	// (0x0008fdaa) popup_call2_audio_conf_window_t1

0xea95,	// (0x0009acb3) list_single_graphic_popup_conf2_pane_ParamLimits

0xea95,	// (0x0009acb3) list_single_graphic_popup_conf2_pane

0xeaa8,	// (0x0009acc6) list_highlight_pane_cp04

0x3b9a,	// (0x0008fdb8) list_single_graphic_popup_conf2_pane_g1

0xeab9,	// (0x0009acd7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf4b1,	// (0x0009b6cf) list_single_graphic_popup_conf2_pane_g

0x3ba4,	// (0x0008fdc2) list_single_graphic_popup_conf2_pane_t1

0x3bb2,	// (0x0008fdd0) bg_popup_call2_act_pane_cp01_ParamLimits

0x3bb2,	// (0x0008fdd0) bg_popup_call2_act_pane_cp01

0x3c3c,	// (0x0008fe5a) call_type_pane_cp05_ParamLimits

0x3c3c,	// (0x0008fe5a) call_type_pane_cp05

0x3c90,	// (0x0008feae) popup_call2_audio_second_window_g1_ParamLimits

0x3c90,	// (0x0008feae) popup_call2_audio_second_window_g1

0x3ce4,	// (0x0008ff02) popup_call2_audio_second_window_g2_ParamLimits

0x3ce4,	// (0x0008ff02) popup_call2_audio_second_window_g2

0x0002,

0xf4b6,	// (0x0009b6d4) popup_call2_audio_second_window_g_ParamLimits

0xf4b6,	// (0x0009b6d4) popup_call2_audio_second_window_g

0x3d49,	// (0x0008ff67) popup_call2_audio_second_window_t1_ParamLimits

0x3d49,	// (0x0008ff67) popup_call2_audio_second_window_t1

0x3e04,	// (0x00090022) popup_call2_audio_second_window_t2_ParamLimits

0x3e04,	// (0x00090022) popup_call2_audio_second_window_t2

0x3e57,	// (0x00090075) popup_call2_audio_second_window_t3_ParamLimits

0x3e57,	// (0x00090075) popup_call2_audio_second_window_t3

0x0003,

0xf4bd,	// (0x0009b6db) popup_call2_audio_second_window_t_ParamLimits

0xf4bd,	// (0x0009b6db) popup_call2_audio_second_window_t

0xdea1,	// (0x0009a0bf) bg_popup_call2_in_pane_cp02

0xdeab,	// (0x0009a0c9) call_type_pane_cp04

0xdeb3,	// (0x0009a0d1) popup_call2_audio_wait_window_g1

0xdebb,	// (0x0009a0d9) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0009b339) popup_call2_audio_wait_window_g

0xdec3,	// (0x0009a0e1) popup_call2_audio_wait_window_t3

0x3f4a,	// (0x00090168) bg_popup_call2_act_pane_ParamLimits

0x3f4a,	// (0x00090168) bg_popup_call2_act_pane

0x400a,	// (0x00090228) call_type_pane_cp03_ParamLimits

0x400a,	// (0x00090228) call_type_pane_cp03

0x406e,	// (0x0009028c) popup_call2_audio_first_window_g1_ParamLimits

0x406e,	// (0x0009028c) popup_call2_audio_first_window_g1

0x40de,	// (0x000902fc) popup_call2_audio_first_window_g2_ParamLimits

0x40de,	// (0x000902fc) popup_call2_audio_first_window_g2

0xeacf,	// (0x0009aced) popup_call2_audio_first_window_g3_ParamLimits

0xeacf,	// (0x0009aced) popup_call2_audio_first_window_g3

0x0004,

0xf4c6,	// (0x0009b6e4) popup_call2_audio_first_window_g_ParamLimits

0xf4c6,	// (0x0009b6e4) popup_call2_audio_first_window_g

0x41bc,	// (0x000903da) popup_call2_audio_first_window_t1_ParamLimits

0x41bc,	// (0x000903da) popup_call2_audio_first_window_t1

0x42bf,	// (0x000904dd) popup_call2_audio_first_window_t4_ParamLimits

0x42bf,	// (0x000904dd) popup_call2_audio_first_window_t4

0x9f4b,	// (0x00096169) popup_call2_audio_first_window_t5_ParamLimits

0x9f4b,	// (0x00096169) popup_call2_audio_first_window_t5

0x0003,

0xf4d1,	// (0x0009b6ef) popup_call2_audio_first_window_t_ParamLimits

0xf4d1,	// (0x0009b6ef) popup_call2_audio_first_window_t

0xe0f4,	// (0x0009a312) bg_popup_call2_act_pane_g1

0xa5b8,	// (0x000967d6) popup_cale_lunar_info_window_t1

0xa5c6,	// (0x000967e4) popup_cale_lunar_info_window_t2

0xa5d4,	// (0x000967f2) popup_cale_lunar_info_window_t3

0xdea1,	// (0x0009a0bf) bg_popup_call2_bubble_pane

0xa04c,	// (0x0009626a) bg_popup_call2_in_pane_cp01_ParamLimits

0xa04c,	// (0x0009626a) bg_popup_call2_in_pane_cp01

0xdb7d,	// (0x00099d9b) call_type_pane_cp02

0xa094,	// (0x000962b2) popup_call2_audio_out_window_g1_ParamLimits

0xa094,	// (0x000962b2) popup_call2_audio_out_window_g1

0xa0c0,	// (0x000962de) popup_call2_audio_out_window_g2_ParamLimits

0xa0c0,	// (0x000962de) popup_call2_audio_out_window_g2

0xa0e8,	// (0x00096306) popup_call2_audio_out_window_g3_ParamLimits

0xa0e8,	// (0x00096306) popup_call2_audio_out_window_g3

0x0003,

0xf4da,	// (0x0009b6f8) popup_call2_audio_out_window_g_ParamLimits

0xf4da,	// (0x0009b6f8) popup_call2_audio_out_window_g

0xa123,	// (0x00096341) popup_call2_audio_out_window_t1_ParamLimits

0xa123,	// (0x00096341) popup_call2_audio_out_window_t1

0xa182,	// (0x000963a0) popup_call2_audio_out_window_t2_ParamLimits

0xa182,	// (0x000963a0) popup_call2_audio_out_window_t2

0xa1d6,	// (0x000963f4) popup_call2_audio_out_window_t3_ParamLimits

0xa1d6,	// (0x000963f4) popup_call2_audio_out_window_t3

0xa1ec,	// (0x0009640a) popup_call2_audio_out_window_t4_ParamLimits

0xa1ec,	// (0x0009640a) popup_call2_audio_out_window_t4

0xa202,	// (0x00096420) popup_call2_audio_out_window_t5_ParamLimits

0xa202,	// (0x00096420) popup_call2_audio_out_window_t5

0x0005,

0xf4e3,	// (0x0009b701) popup_call2_audio_out_window_t_ParamLimits

0xf4e3,	// (0x0009b701) popup_call2_audio_out_window_t

0xa266,	// (0x00096484) bg_popup_call2_in_pane_ParamLimits

0xa266,	// (0x00096484) bg_popup_call2_in_pane

0xa2c2,	// (0x000964e0) popup_call2_audio_in_window_g1_ParamLimits

0xa2c2,	// (0x000964e0) popup_call2_audio_in_window_g1

0xa2fa,	// (0x00096518) popup_call2_audio_in_window_g2_ParamLimits

0xa2fa,	// (0x00096518) popup_call2_audio_in_window_g2

0xa332,	// (0x00096550) popup_call2_audio_in_window_g3_ParamLimits

0xa332,	// (0x00096550) popup_call2_audio_in_window_g3

0x0003,

0xf4f0,	// (0x0009b70e) popup_call2_audio_in_window_g_ParamLimits

0xf4f0,	// (0x0009b70e) popup_call2_audio_in_window_g

0xa38a,	// (0x000965a8) popup_call2_audio_in_window_t1_ParamLimits

0xa38a,	// (0x000965a8) popup_call2_audio_in_window_t1

0xa40a,	// (0x00096628) popup_call2_audio_in_window_t2_ParamLimits

0xa40a,	// (0x00096628) popup_call2_audio_in_window_t2

0xa48a,	// (0x000966a8) popup_call2_audio_in_window_t3_ParamLimits

0xa48a,	// (0x000966a8) popup_call2_audio_in_window_t3

0xa4a4,	// (0x000966c2) popup_call2_audio_in_window_t4_ParamLimits

0xa4a4,	// (0x000966c2) popup_call2_audio_in_window_t4

0xa4b6,	// (0x000966d4) popup_call2_audio_in_window_t5_ParamLimits

0xa4b6,	// (0x000966d4) popup_call2_audio_in_window_t5

0xa4cb,	// (0x000966e9) popup_call2_audio_in_window_t6_ParamLimits

0xa4cb,	// (0x000966e9) popup_call2_audio_in_window_t6

0x0005,

0xf4f9,	// (0x0009b717) popup_call2_audio_in_window_t_ParamLimits

0xf4f9,	// (0x0009b717) popup_call2_audio_in_window_t

0xe0f4,	// (0x0009a312) bg_popup_call2_in_pane_g1

0xa5e2,	// (0x00096800) popup_cale_lunar_info_window_t4

0x0003,

0xf55a,	// (0x0009b778) popup_cale_lunar_info_window_t

0xe0fc,	// (0x0009a31a) bg_popup_call2_rect_pane_ParamLimits

0xe0fc,	// (0x0009a31a) bg_popup_call2_rect_pane

0xdea1,	// (0x0009a0bf) call2_cli_visual_graphic_pane

0xdea1,	// (0x0009a0bf) call2_cli_visual_text_pane

0xa7b8,	// (0x000969d6) smil_status_volume_pane_g3

0x0002,

0xe228,	// (0x0009a446) call2_cli_visual_graphic_pane_g1

0xe228,	// (0x0009a446) call2_cli_visual_graphic_pane_g2

0xe228,	// (0x0009a446) call2_cli_visual_graphic_pane_g3

0x0002,

0x02ea,	// (0x0008c508) call2_cli_visual_graphic_pane_g

0xa4e0,	// (0x000966fe) bg_popup_call2_rect_pane_g1

0xe2b4,	// (0x0009a4d2) bg_popup_call2_rect_pane_g2

0xa4e8,	// (0x00096706) bg_popup_call2_rect_pane_g3

0xa4f0,	// (0x0009670e) bg_popup_call2_rect_pane_g4

0xa4f8,	// (0x00096716) bg_popup_call2_rect_pane_g5

0xa500,	// (0x0009671e) bg_popup_call2_rect_pane_g6

0xa508,	// (0x00096726) bg_popup_call2_rect_pane_g7

0xa510,	// (0x0009672e) bg_popup_call2_rect_pane_g8

0xa518,	// (0x00096736) bg_popup_call2_rect_pane_g9

0x0008,

0xf506,	// (0x0009b724) bg_popup_call2_rect_pane_g

0xa520,	// (0x0009673e) bg_popup_call2_bubble_pane_g1

0xa528,	// (0x00096746) bg_popup_call2_bubble_pane_g2

0xa530,	// (0x0009674e) bg_popup_call2_bubble_pane_g3

0xa538,	// (0x00096756) bg_popup_call2_bubble_pane_g4

0xa540,	// (0x0009675e) bg_popup_call2_bubble_pane_g5

0xa548,	// (0x00096766) bg_popup_call2_bubble_pane_g6

0xa550,	// (0x0009676e) bg_popup_call2_bubble_pane_g7

0xa558,	// (0x00096776) bg_popup_call2_bubble_pane_g8

0xa560,	// (0x0009677e) bg_popup_call2_bubble_pane_g9

0x0008,

0xf519,	// (0x0009b737) bg_popup_call2_bubble_pane_g

0x1531,	// (0x0008d74f) aid_cale_week_size_cell_pane

0x1a63,	// (0x0008dc81) aid_cams_cif_uncrop_pane_ParamLimits

0x1a63,	// (0x0008dc81) aid_cams_cif_uncrop_pane

0x1c1c,	// (0x0008de3a) aid_cams_size_cell_ParamLimits

0x1c1c,	// (0x0008de3a) aid_cams_size_cell

0x1c30,	// (0x0008de4e) grid_cams_pane_ParamLimits

0x1c4a,	// (0x0008de68) linegrid_cams_pane_ParamLimits

0x1e45,	// (0x0008e063) call_video_pane_t1

0x1e63,	// (0x0008e081) call_video_pane_t2

0x0001,

0xf292,	// (0x0009b4b0) call_video_pane_t

0x228f,	// (0x0008e4ad) aid_cale_month_size_cell_pane_ParamLimits

0x228f,	// (0x0008e4ad) aid_cale_month_size_cell_pane

0xf5a3,	// (0x0009b7c1) smil_status_volume_pane_g

0xa7c5,	// (0x000969e3) volume_smil_pane_ParamLimits

0x0dcc,	// (0x0008cfea) aid_popup2_width_pane

0x1493,	// (0x0008d6b1) cell_qdial_pane_g4_ParamLimits

0x1493,	// (0x0008d6b1) cell_qdial_pane_g4

0x2e76,	// (0x0008f094) aid_blid_cardinal_pane_ParamLimits

0x2e82,	// (0x0008f0a0) aid_blid_destination_pane_ParamLimits

0x2e82,	// (0x0008f0a0) aid_blid_destination_pane

0xe0fc,	// (0x0009a31a) bg_popup_call_poc_act_pane_ParamLimits

0xe0fc,	// (0x0009a31a) bg_popup_call_poc_act_pane

0xe0fc,	// (0x0009a31a) bg_popup_call_poc_inact_pane_ParamLimits

0xe0fc,	// (0x0009a31a) bg_popup_call_poc_inact_pane

0xa568,	// (0x00096786) bg_popup_call_poc_act_pane_g1

0xa570,	// (0x0009678e) bg_popup_call_poc_act_pane_g2

0xa578,	// (0x00096796) bg_popup_call_poc_act_pane_g3

0xa538,	// (0x00096756) bg_popup_call_poc_act_pane_g4

0xa540,	// (0x0009675e) bg_popup_call_poc_act_pane_g5

0xa580,	// (0x0009679e) bg_popup_call_poc_act_pane_g6

0xa550,	// (0x0009676e) bg_popup_call_poc_act_pane_g7

0xa588,	// (0x000967a6) bg_popup_call_poc_act_pane_g8

0xdea1,	// (0x0009a0bf) main_usb_pane

0xa6e1,	// (0x000968ff) popup_cale_lunar_info_window

0x213b,	// (0x0008e359) im_reading_pane_t1_ParamLimits

0xe46f,	// (0x0009a68d) list_im_pane_ParamLimits

0xe480,	// (0x0009a69e) scroll_pane_cp07_ParamLimits

0xdea1,	// (0x0009a0bf) grid_highlight_pane_cp012

0xe0fc,	// (0x0009a31a) mup_scale_pane_ParamLimits

0xee4f,	// (0x0009b06d) main_usb_pane_g1_ParamLimits

0xee4f,	// (0x0009b06d) main_usb_pane_g1

0x43c4,	// (0x000905e2) main_usb_pane_g2_ParamLimits

0x43c4,	// (0x000905e2) main_usb_pane_g2

0x0001,

0xf543,	// (0x0009b761) main_usb_pane_g_ParamLimits

0xf543,	// (0x0009b761) main_usb_pane_g

0x43da,	// (0x000905f8) main_usb_pane_t1_ParamLimits

0x43da,	// (0x000905f8) main_usb_pane_t1

0x43ec,	// (0x0009060a) main_usb_pane_t2_ParamLimits

0x43ec,	// (0x0009060a) main_usb_pane_t2

0x43fe,	// (0x0009061c) main_usb_pane_t3_ParamLimits

0x43fe,	// (0x0009061c) main_usb_pane_t3

0x4410,	// (0x0009062e) main_usb_pane_t4_ParamLimits

0x4410,	// (0x0009062e) main_usb_pane_t4

0x4422,	// (0x00090640) main_usb_pane_t5_ParamLimits

0x4422,	// (0x00090640) main_usb_pane_t5

0x4434,	// (0x00090652) main_usb_pane_t6_ParamLimits

0x4434,	// (0x00090652) main_usb_pane_t6

0x0005,

0xf548,	// (0x0009b766) main_usb_pane_t_ParamLimits

0x2e25,	// (0x0008f043) aid_text_placing

0x2e2e,	// (0x0008f04c) main_location2_pane_t1_ParamLimits

0x2e40,	// (0x0008f05e) main_location2_pane_t2_ParamLimits

0x2e52,	// (0x0008f070) main_location2_pane_t3_ParamLimits

0x2e64,	// (0x0008f082) main_location2_pane_t4_ParamLimits

0x2e64,	// (0x0008f082) main_location2_pane_t4

0xf3a9,	// (0x0009b5c7) main_location2_pane_t_ParamLimits

0xe138,	// (0x0009a356) find_pinb_pane_g2_ParamLimits

0xe138,	// (0x0009a356) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0009b35f) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0009b35f) find_pinb_pane_g

0xe144,	// (0x0009a362) find_pinb_pane_t1_ParamLimits

0xe156,	// (0x0009a374) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0009b364) find_pinb_pane_t_ParamLimits

0xdea1,	// (0x0009a0bf) main_call3_pane

0x25f3,	// (0x0008e811) cale_month_day_heading_pane_t1_ParamLimits

0x2651,	// (0x0008e86f) cale_month_day_heading_pane_t2_ParamLimits

0x26b6,	// (0x0008e8d4) cale_month_day_heading_pane_t3_ParamLimits

0x271b,	// (0x0008e939) cale_month_day_heading_pane_t4_ParamLimits

0x2780,	// (0x0008e99e) cale_month_day_heading_pane_t5_ParamLimits

0x27f5,	// (0x0008ea13) cale_month_day_heading_pane_t6_ParamLimits

0x286a,	// (0x0008ea88) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0009b4e8) cale_month_day_heading_pane_t_ParamLimits

0xe6c0,	// (0x0009a8de) smil_status_volume_pane

0x3673,	// (0x0008f891) postcard_address_pane_ParamLimits

0x3673,	// (0x0008f891) postcard_address_pane

0x3685,	// (0x0008f8a3) postcard_message_pane_ParamLimits

0x3685,	// (0x0008f8a3) postcard_message_pane

0x43a2,	// (0x000905c0) call2_cli_visual_pane_t1_ParamLimits

0x43a2,	// (0x000905c0) call2_cli_visual_pane_t1

0x4bc6,	// (0x00090de4) postcard_message_pane_t1_ParamLimits

0x4bc6,	// (0x00090de4) postcard_message_pane_t1

0x4baf,	// (0x00090dcd) postcard_address_pane_t1_ParamLimits

0x4baf,	// (0x00090dcd) postcard_address_pane_t1

0x4b9b,	// (0x00090db9) popup_call3_audio_in_window_ParamLimits

0x4b9b,	// (0x00090db9) popup_call3_audio_in_window

0x4a26,	// (0x00090c44) bg_popup_call3_in_pane_ParamLimits

0x4a26,	// (0x00090c44) bg_popup_call3_in_pane

0x4a9c,	// (0x00090cba) popup_call3_audio_in_window_g1_ParamLimits

0x4a9c,	// (0x00090cba) popup_call3_audio_in_window_g1

0x4abc,	// (0x00090cda) popup_call3_audio_in_window_g2_ParamLimits

0x4abc,	// (0x00090cda) popup_call3_audio_in_window_g2

0x4adc,	// (0x00090cfa) popup_call3_audio_in_window_g3_ParamLimits

0x4adc,	// (0x00090cfa) popup_call3_audio_in_window_g3

0x0003,

0xf5aa,	// (0x0009b7c8) popup_call3_audio_in_window_g_ParamLimits

0xf5aa,	// (0x0009b7c8) popup_call3_audio_in_window_g

0x4b0d,	// (0x00090d2b) popup_call3_audio_in_window_t1_ParamLimits

0x4b0d,	// (0x00090d2b) popup_call3_audio_in_window_t1

0x4b4b,	// (0x00090d69) popup_call3_audio_in_window_t2_ParamLimits

0x4b4b,	// (0x00090d69) popup_call3_audio_in_window_t2

0x4b89,	// (0x00090da7) popup_call3_audio_in_window_t3_ParamLimits

0x4b89,	// (0x00090da7) popup_call3_audio_in_window_t3

0x0002,

0xf5b3,	// (0x0009b7d1) popup_call3_audio_in_window_t_ParamLimits

0xf5b3,	// (0x0009b7d1) popup_call3_audio_in_window_t

0xecb2,	// (0x0009aed0) bg_popup_call3_rect_pane

0xa4e0,	// (0x000966fe) bg_popup_call3_rect_pane_g1

0xe2b4,	// (0x0009a4d2) bg_popup_call3_rect_pane_g2

0xa4e8,	// (0x00096706) bg_popup_call3_rect_pane_g3

0xa4f0,	// (0x0009670e) bg_popup_call3_rect_pane_g4

0xa4f8,	// (0x00096716) bg_popup_call3_rect_pane_g5

0xa500,	// (0x0009671e) bg_popup_call3_rect_pane_g6

0xa508,	// (0x00096726) bg_popup_call3_rect_pane_g7

0x3238,	// (0x0008f456) mup_visualizer_osc_pane

0xed71,	// (0x0009af8f) mup_visualizer_spec_pane

0x4a56,	// (0x00090c74) call3_video_qcif_pane_ParamLimits

0x4a56,	// (0x00090c74) call3_video_qcif_pane

0x4a69,	// (0x00090c87) call3_video_qcif_uncrop_pane_ParamLimits

0x4a69,	// (0x00090c87) call3_video_qcif_uncrop_pane

0x4a77,	// (0x00090c95) call3_video_subqcif_pane_ParamLimits

0x4a77,	// (0x00090c95) call3_video_subqcif_pane

0x4a8b,	// (0x00090ca9) call3_video_subqcif_uncrop_pane_ParamLimits

0x4a8b,	// (0x00090ca9) call3_video_subqcif_uncrop_pane

0x4afc,	// (0x00090d1a) popup_call3_audio_in_window_g4_ParamLimits

0x4afc,	// (0x00090d1a) popup_call3_audio_in_window_g4

0x4a15,	// (0x00090c33) mup_spec_half_pane

0x4a1e,	// (0x00090c3c) mup_spec_half_pane_cp

0xa778,	// (0x00096996) mup_osc_middle_pane

0xa781,	// (0x0009699f) mup_visualizer_osc_pane_g1

0x49f5,	// (0x00090c13) mup_spec_bar_pane_ParamLimits

0x49f5,	// (0x00090c13) mup_spec_bar_pane

0xa765,	// (0x00096983) mup_spec_bar_pane_g1

0xa76f,	// (0x0009698d) mup_spec_bar_pane_g2

0x0001,

0xf59e,	// (0x0009b7bc) mup_spec_bar_pane_g

0x1531,	// (0x0008d74f) aid_cale_week_size_cell_pane_ParamLimits

0x1544,	// (0x0008d762) bg_cale_heading_pane_ParamLimits

0xe2e8,	// (0x0009a506) bg_cale_pane_cp01_ParamLimits

0x1558,	// (0x0008d776) cale_week_corner_pane_ParamLimits

0x156e,	// (0x0008d78c) cale_week_day_heading_pane_ParamLimits

0x1582,	// (0x0008d7a0) cale_week_scroll_pane_g1_ParamLimits

0x1593,	// (0x0008d7b1) cale_week_scroll_pane_g2_ParamLimits

0x15a4,	// (0x0008d7c2) cale_week_scroll_pane_g3_ParamLimits

0x15b5,	// (0x0008d7d3) cale_week_scroll_pane_g4_ParamLimits

0x15c6,	// (0x0008d7e4) cale_week_scroll_pane_g5_ParamLimits

0x15d9,	// (0x0008d7f7) cale_week_scroll_pane_g6_ParamLimits

0x15ec,	// (0x0008d80a) cale_week_scroll_pane_g7_ParamLimits

0x15ff,	// (0x0008d81d) cale_week_scroll_pane_g8_ParamLimits

0x1612,	// (0x0008d830) cale_week_scroll_pane_g9_ParamLimits

0x1623,	// (0x0008d841) cale_week_scroll_pane_g10_ParamLimits

0x1634,	// (0x0008d852) cale_week_scroll_pane_g11_ParamLimits

0x1645,	// (0x0008d863) cale_week_scroll_pane_g12_ParamLimits

0x1656,	// (0x0008d874) cale_week_scroll_pane_g13_ParamLimits

0x1667,	// (0x0008d885) cale_week_scroll_pane_g14_ParamLimits

0x1678,	// (0x0008d896) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0009b3f0) cale_week_scroll_pane_g_ParamLimits

0x1689,	// (0x0008d8a7) cale_week_time_pane_ParamLimits

0x169c,	// (0x0008d8ba) grid_cale_week_pane_ParamLimits

0xe301,	// (0x0009a51f) listscroll_cale_week_pane_t1

0x16b1,	// (0x0008d8cf) scroll_pane_cp08_ParamLimits

0x22d0,	// (0x0008e4ee) cale_month_corner_pane_ParamLimits

0xe696,	// (0x0009a8b4) cale_month_pane_t1

0x25b2,	// (0x0008e7d0) cale_month_week_pane_ParamLimits

0x2c71,	// (0x0008ee8f) popup_call_status_window_g1_ParamLimits

0x2c85,	// (0x0008eea3) popup_call_status_window_g2_ParamLimits

0x2c99,	// (0x0008eeb7) popup_call_status_window_g3_ParamLimits

0xf33a,	// (0x0009b558) popup_call_status_window_g_ParamLimits

0xea28,	// (0x0009ac46) aid_call2_pane

0x34a5,	// (0x0008f6c3) msg_header_pane_g1

0x3673,	// (0x0008f891) postcard_address2_pane_ParamLimits

0x3673,	// (0x0008f891) postcard_address2_pane

0x3685,	// (0x0008f8a3) postcard_message2_pane_ParamLimits

0x3685,	// (0x0008f8a3) postcard_message2_pane

0x49a7,	// (0x00090bc5) message2_row_pane_ParamLimits

0x49a7,	// (0x00090bc5) message2_row_pane

0x49c3,	// (0x00090be1) address2_row_pane_ParamLimits

0x49c3,	// (0x00090be1) address2_row_pane

0xa733,	// (0x00096951) postcard_message2_row_pane_g1

0xa73b,	// (0x00096959) postcard_message2_row_pane_t1

0xa733,	// (0x00096951) address2_row_pane_g1

0xa73b,	// (0x00096959) address2_row_pane_t1

0x195f,	// (0x0008db7d) aid_size_cell_vorec

0xdea1,	// (0x0009a0bf) main_rss_pane

0x49d6,	// (0x00090bf4) rss_list_single_pane_ParamLimits

0x49d6,	// (0x00090bf4) rss_list_single_pane

0xa749,	// (0x00096967) rss_list_single_pane_t1

0xa757,	// (0x00096975) rss_list_single_pane_t2

0x0001,

0xf599,	// (0x0009b7b7) rss_list_single_pane_t

0xdea1,	// (0x0009a0bf) main_camera2_pane

0xdea1,	// (0x0009a0bf) main_video2_pane

0x4c3f,	// (0x00090e5d) cams_zoom_pane_cp2_ParamLimits

0x4c3f,	// (0x00090e5d) cams_zoom_pane_cp2

0x4c5f,	// (0x00090e7d) image2_vga_pane_ParamLimits

0x4c5f,	// (0x00090e7d) image2_vga_pane

0x4cb0,	// (0x00090ece) main_camera2_pane_g1_ParamLimits

0x4cb0,	// (0x00090ece) main_camera2_pane_g1

0x4cd0,	// (0x00090eee) main_camera2_pane_g2_ParamLimits

0x4cd0,	// (0x00090eee) main_camera2_pane_g2

0x4cf0,	// (0x00090f0e) main_camera2_pane_g3_ParamLimits

0x4cf0,	// (0x00090f0e) main_camera2_pane_g3

0x4d10,	// (0x00090f2e) main_camera2_pane_g4_ParamLimits

0x4d10,	// (0x00090f2e) main_camera2_pane_g4

0x4d30,	// (0x00090f4e) main_camera2_pane_g5_ParamLimits

0x4d30,	// (0x00090f4e) main_camera2_pane_g5

0x4d50,	// (0x00090f6e) main_camera2_pane_g6_ParamLimits

0x4d50,	// (0x00090f6e) main_camera2_pane_g6

0x4d70,	// (0x00090f8e) main_camera2_pane_g7_ParamLimits

0x4d70,	// (0x00090f8e) main_camera2_pane_g7

0x4d90,	// (0x00090fae) main_camera2_pane_g8_ParamLimits

0x4d90,	// (0x00090fae) main_camera2_pane_g8

0x0008,

0xf5ba,	// (0x0009b7d8) main_camera2_pane_g_ParamLimits

0xf5ba,	// (0x0009b7d8) main_camera2_pane_g

0x4dd0,	// (0x00090fee) main_camera2_pane_t1_ParamLimits

0x4dd0,	// (0x00090fee) main_camera2_pane_t1

0x4e05,	// (0x00091023) main_camera2_pane_t2_ParamLimits

0x4e05,	// (0x00091023) main_camera2_pane_t2

0x4e2b,	// (0x00091049) main_camera2_pane_t3_ParamLimits

0x4e2b,	// (0x00091049) main_camera2_pane_t3

0x4e89,	// (0x000910a7) main_camera2_pane_t4_ParamLimits

0x4e89,	// (0x000910a7) main_camera2_pane_t4

0x0006,

0xf5cd,	// (0x0009b7eb) main_camera2_pane_t_ParamLimits

0xf5cd,	// (0x0009b7eb) main_camera2_pane_t

0x4f1b,	// (0x00091139) cams_zoom_pane_cp4_ParamLimits

0x4f1b,	// (0x00091139) cams_zoom_pane_cp4

0x4f31,	// (0x0009114f) image2_cif_pane_ParamLimits

0x4f31,	// (0x0009114f) image2_cif_pane

0x4f5c,	// (0x0009117a) image2_subqcif_pane_ParamLimits

0x4f5c,	// (0x0009117a) image2_subqcif_pane

0x4f76,	// (0x00091194) main_video2_pane_g1_ParamLimits

0x4f76,	// (0x00091194) main_video2_pane_g1

0x4f90,	// (0x000911ae) main_video2_pane_g2_ParamLimits

0x4f90,	// (0x000911ae) main_video2_pane_g2

0x4fa6,	// (0x000911c4) main_video2_pane_g3_ParamLimits

0x4fa6,	// (0x000911c4) main_video2_pane_g3

0x4fbc,	// (0x000911da) main_video2_pane_g4_ParamLimits

0x4fbc,	// (0x000911da) main_video2_pane_g4

0x4fd2,	// (0x000911f0) main_video2_pane_g5_ParamLimits

0x4fd2,	// (0x000911f0) main_video2_pane_g5

0x4fe8,	// (0x00091206) main_video2_pane_g6_ParamLimits

0x4fe8,	// (0x00091206) main_video2_pane_g6

0x0005,

0xf5dc,	// (0x0009b7fa) main_video2_pane_g_ParamLimits

0xf5dc,	// (0x0009b7fa) main_video2_pane_g

0x5002,	// (0x00091220) main_video2_pane_t1_ParamLimits

0x5002,	// (0x00091220) main_video2_pane_t1

0x5026,	// (0x00091244) main_video2_pane_t2_ParamLimits

0x5026,	// (0x00091244) main_video2_pane_t2

0x5074,	// (0x00091292) main_video2_pane_t3_ParamLimits

0x5074,	// (0x00091292) main_video2_pane_t3

0x0002,

0xf5e9,	// (0x0009b807) main_video2_pane_t_ParamLimits

0xf5e9,	// (0x0009b807) main_video2_pane_t

0x44ef,	// (0x0009070d) call_muted_g2

0x0001,

0xf58b,	// (0x0009b7a9) call_muted_g

0xdea1,	// (0x0009a0bf) main_mup2_pane

0x50b8,	// (0x000912d6) main_mup2_pane_g1_ParamLimits

0x50b8,	// (0x000912d6) main_mup2_pane_g1

0x50c4,	// (0x000912e2) main_mup2_pane_g2_ParamLimits

0x50c4,	// (0x000912e2) main_mup2_pane_g2

0xa8e9,	// (0x00096b07) main_mup_pane_g13_cp1

0xa8f1,	// (0x00096b0f) mup_volume_pane_cp1

0x50e0,	// (0x000912fe) main_mup2_pane_g4_ParamLimits

0x50e0,	// (0x000912fe) main_mup2_pane_g4

0x50f2,	// (0x00091310) main_mup2_pane_g5_ParamLimits

0x50f2,	// (0x00091310) main_mup2_pane_g5

0x5104,	// (0x00091322) main_mup2_pane_g6_ParamLimits

0x5104,	// (0x00091322) main_mup2_pane_g6

0x5116,	// (0x00091334) main_mup2_pane_g7_ParamLimits

0x5116,	// (0x00091334) main_mup2_pane_g7

0x0006,

0xf5f0,	// (0x0009b80e) main_mup2_pane_g_ParamLimits

0xf5f0,	// (0x0009b80e) main_mup2_pane_g

0x512e,	// (0x0009134c) main_mup2_pane_t1_ParamLimits

0x512e,	// (0x0009134c) main_mup2_pane_t1

0x5144,	// (0x00091362) main_mup2_pane_t2_ParamLimits

0x5144,	// (0x00091362) main_mup2_pane_t2

0x515a,	// (0x00091378) main_mup2_pane_t3_ParamLimits

0x515a,	// (0x00091378) main_mup2_pane_t3

0x5170,	// (0x0009138e) main_mup2_pane_t4_ParamLimits

0x5170,	// (0x0009138e) main_mup2_pane_t4

0x5188,	// (0x000913a6) main_mup2_pane_t5_ParamLimits

0x5188,	// (0x000913a6) main_mup2_pane_t5

0x51a0,	// (0x000913be) main_mup2_pane_t6_ParamLimits

0x51a0,	// (0x000913be) main_mup2_pane_t6

0x0005,

0xf5ff,	// (0x0009b81d) main_mup2_pane_t_ParamLimits

0xf5ff,	// (0x0009b81d) main_mup2_pane_t

0x51d0,	// (0x000913ee) mup2_visualizer_pane_ParamLimits

0x51d0,	// (0x000913ee) mup2_visualizer_pane

0x51fe,	// (0x0009141c) mup_progress_pane_cp_ParamLimits

0x51fe,	// (0x0009141c) mup_progress_pane_cp

0xa8cb,	// (0x00096ae9) mup_volume_pane_cp_ParamLimits

0xa8cb,	// (0x00096ae9) mup_volume_pane_cp

0x5212,	// (0x00091430) mup2_visualizer_pane_g1_ParamLimits

0x5212,	// (0x00091430) mup2_visualizer_pane_g1

0xa80a,	// (0x00096a28) mup2_visualizer_pane_g2_ParamLimits

0xa80a,	// (0x00096a28) mup2_visualizer_pane_g2

0x5229,	// (0x00091447) mup2_visualizer_pane_g3_ParamLimits

0x5229,	// (0x00091447) mup2_visualizer_pane_g3

0x0002,

0xf60c,	// (0x0009b82a) mup2_visualizer_pane_g_ParamLimits

0xf60c,	// (0x0009b82a) mup2_visualizer_pane_g

0xef98,	// (0x0009b1b6) aid_size_cell_fmradio

0x46a1,	// (0x000908bf) aid_height_parent_landcape

0xe4fe,	// (0x0009a71c) wml_content_pane_cp

0xe506,	// (0x0009a724) wml_tabs_pane

0xe50f,	// (0x0009a72d) popup_wml_miniature_window

0xe517,	// (0x0009a735) scroll_pane_cp021

0xe52b,	// (0x0009a749) wml_content_pane_comp8

0xdea1,	// (0x0009a0bf) bg_popup_sub_pane_cp05

0xa828,	// (0x00096a46) popup_wml_miniature_window_g1

0xa830,	// (0x00096a4e) wml_miniature_view_pane

0x5235,	// (0x00091453) aid_size_wml_view

0x523d,	// (0x0009145b) wml_miniature_view_pane_g1

0x5246,	// (0x00091464) wml_miniature_view_pane_g2

0x524f,	// (0x0009146d) wml_miniature_view_pane_g3

0x5257,	// (0x00091475) wml_miniature_view_pane_g4

0x525f,	// (0x0009147d) wml_miniature_view_pane_g5

0x5267,	// (0x00091485) wml_miniature_view_pane_g6

0x526f,	// (0x0009148d) wml_miniature_view_pane_g7

0x5277,	// (0x00091495) wml_miniature_view_pane_g8

0x0007,

0xf613,	// (0x0009b831) wml_miniature_view_pane_g

0xa838,	// (0x00096a56) background_graphic_ParamLimits

0xa838,	// (0x00096a56) background_graphic

0xa844,	// (0x00096a62) wml_tabs_2_pane

0xa84d,	// (0x00096a6b) wml_tabs_3_pane_ParamLimits

0xa84d,	// (0x00096a6b) wml_tabs_3_pane

0xa85f,	// (0x00096a7d) wml_tabs_4_pane_ParamLimits

0xa85f,	// (0x00096a7d) wml_tabs_4_pane

0xa875,	// (0x00096a93) wml_tabs_5_pane_ParamLimits

0xa875,	// (0x00096a93) wml_tabs_5_pane

0xa88f,	// (0x00096aad) wml_tabs_pane_g2_ParamLimits

0xa88f,	// (0x00096aad) wml_tabs_pane_g2

0xa8a3,	// (0x00096ac1) wml_tabs_pane_g3_ParamLimits

0xa8a3,	// (0x00096ac1) wml_tabs_pane_g3

0x527f,	// (0x0009149d) wml_tabs_2_active_pane_ParamLimits

0x527f,	// (0x0009149d) wml_tabs_2_active_pane

0x5293,	// (0x000914b1) wml_tabs_2_passive_pane_ParamLimits

0x5293,	// (0x000914b1) wml_tabs_2_passive_pane

0x52a7,	// (0x000914c5) wml_tabs_3_active_pane_cp_ParamLimits

0x52a7,	// (0x000914c5) wml_tabs_3_active_pane_cp

0x52bc,	// (0x000914da) wml_tabs_3_passive_pane_ParamLimits

0x52bc,	// (0x000914da) wml_tabs_3_passive_pane

0x52cf,	// (0x000914ed) wml_tabs_3_passive_pane_cp_ParamLimits

0x52cf,	// (0x000914ed) wml_tabs_3_passive_pane_cp

0x52e6,	// (0x00091504) tabs_4_active_pane

0x52ee,	// (0x0009150c) tabs_4_passive_pane

0x52f8,	// (0x00091516) tabs_4_passive_pane_cp

0x5300,	// (0x0009151e) tabs_4_passive_pane_cp2

0x43bc,	// (0x000905da) aid_height_text

0x320e,	// (0x0008f42c) mup_volume_cont_pane_ParamLimits

0x320e,	// (0x0008f42c) mup_volume_cont_pane

0x1132,	// (0x0008d350) aid_size_cell_pinb

0x113c,	// (0x0008d35a) aid_size_list_pinb

0x51ea,	// (0x00091408) mup2_volume_cont_pane_ParamLimits

0x51ea,	// (0x00091408) mup2_volume_cont_pane

0xa8b7,	// (0x00096ad5) mup2_volume_cont_pane_g1_ParamLimits

0xa8b7,	// (0x00096ad5) mup2_volume_cont_pane_g1

0x0dd8,	// (0x0008cff6) aid_size_cell_touch_ParamLimits

0x0dd8,	// (0x0008cff6) aid_size_cell_touch

0x1022,	// (0x0008d240) touch_pane_ParamLimits

0x1022,	// (0x0008d240) touch_pane

0x0dba,	// (0x0008cfd8) main_rss2_pane

0xa8f9,	// (0x00096b17) listscroll_rss2_pane

0xa902,	// (0x00096b20) rss2_navigation_pane

0xa90a,	// (0x00096b28) list_rss2_pane

0xeb69,	// (0x0009ad87) scroll_pane_cp22

0xa912,	// (0x00096b30) rss2_navigation_pane_g1

0xa91b,	// (0x00096b39) rss2_navigation_pane_g2

0xa923,	// (0x00096b41) rss2_navigation_pane_g3

0x0002,

0xf624,	// (0x0009b842) rss2_navigation_pane_g

0xa92b,	// (0x00096b49) rss2_navigation_pane_t1

0x530a,	// (0x00091528) rss2_list_single_pane_ParamLimits

0x530a,	// (0x00091528) rss2_list_single_pane

0xa939,	// (0x00096b57) rss2_list_single_pane_t2

0xa947,	// (0x00096b65) rss2_list_single_pane_t3_ParamLimits

0xa947,	// (0x00096b65) rss2_list_single_pane_t3

0xa964,	// (0x00096b82) rss2_list_single_pane_t4

0x2a8e,	// (0x0008ecac) smil_status_pane_g1

0xf009,	// (0x0009b227) main_image2_pane_ParamLimits

0xf009,	// (0x0009b227) main_image2_pane

0x4db0,	// (0x00090fce) main_camera2_pane_g9_ParamLimits

0x4db0,	// (0x00090fce) main_camera2_pane_g9

0x4ede,	// (0x000910fc) main_camera2_pane_t5_ParamLimits

0x4ede,	// (0x000910fc) main_camera2_pane_t5

0xa7da,	// (0x000969f8) main_camera2_pane_t6_ParamLimits

0xa7da,	// (0x000969f8) main_camera2_pane_t6

0x531f,	// (0x0009153d) main_image2_pane_g1_ParamLimits

0x531f,	// (0x0009153d) main_image2_pane_g1

0x38ac,	// (0x0008faca) smil2_video_pane_ParamLimits

0x38ac,	// (0x0008faca) smil2_video_pane

0x0e18,	// (0x0008d036) aid_zoom_text_primary_cp

0xda84,	// (0x00099ca2) popup_preview_fixed_window

0xe467,	// (0x0009a685) im_reading_pane_g1

0x4c27,	// (0x00090e45) cams2_bc_adjust_pane_cp_ParamLimits

0x4c27,	// (0x00090e45) cams2_bc_adjust_pane_cp

0x4f0d,	// (0x0009112b) cams2_bc_adjust_pane_ParamLimits

0x4f0d,	// (0x0009112b) cams2_bc_adjust_pane

0xa972,	// (0x00096b90) cams2_bc_adjust_pane_g1

0xa97a,	// (0x00096b98) cams2_slider_pane

0xa983,	// (0x00096ba1) cams2_slider_pane_g1

0xa98c,	// (0x00096baa) cams2_slider_pane_g2

0x0006,

0xf62b,	// (0x0009b849) cams2_slider_pane_g

0x121e,	// (0x0008d43c) calc_display_pane_ParamLimits

0x1246,	// (0x0008d464) calc_paper_pane_ParamLimits

0x1269,	// (0x0008d487) grid_calc_pane_ParamLimits

0x9ee6,	// (0x00096104) popup_clock_digital_window_t1_ParamLimits

0xef35,	// (0x0009b153) main_image_pane_t1

0x1200,	// (0x0008d41e) aid_size_cell_calc_ParamLimits

0x1200,	// (0x0008d41e) aid_size_cell_calc

0x46e7,	// (0x00090905) popup_blid_sat_info2_window_ParamLimits

0x46e7,	// (0x00090905) popup_blid_sat_info2_window

0xa9ae,	// (0x00096bcc) aid_size_cell_blid

0xa9b6,	// (0x00096bd4) bg_popup_window_pane_cp07

0xa9d9,	// (0x00096bf7) grid_popup_blid_pane

0xa9e3,	// (0x00096c01) heading_pane_cp05_ParamLimits

0xa9e3,	// (0x00096c01) heading_pane_cp05

0xaaad,	// (0x00096ccb) cell_popup_blid_pane_ParamLimits

0xaaad,	// (0x00096ccb) cell_popup_blid_pane

0xaad1,	// (0x00096cef) cell_popup_blid_pane_g1

0xaad9,	// (0x00096cf7) cell_popup_blid_pane_t1

0x51ba,	// (0x000913d8) mup2_indicator_pane_ParamLimits

0x51ba,	// (0x000913d8) mup2_indicator_pane

0xecb2,	// (0x0009aed0) mup2_visualizer_osc_pane

0xa816,	// (0x00096a34) mup2_visualizer_spec_pane_ParamLimits

0xa816,	// (0x00096a34) mup2_visualizer_spec_pane

0x5335,	// (0x00091553) mup2_spec_half_pane

0x533e,	// (0x0009155c) mup2_spec_half_pane_cp

0x5346,	// (0x00091564) mup2_spec_bar_pane_ParamLimits

0x5346,	// (0x00091564) mup2_spec_bar_pane

0xa765,	// (0x00096983) mup2_spec_bar_pane_g1

0xa76f,	// (0x0009698d) mup2_spec_bar_pane_g2

0x0001,

0xf59e,	// (0x0009b7bc) mup2_spec_bar_pane_g

0x5366,	// (0x00091584) mup2_osc_middle_pane

0xa781,	// (0x0009699f) mup2_visualizer_osc_pane_g1

0xdaae,	// (0x00099ccc) popup_number_entry_window_t1_ParamLimits

0xdac1,	// (0x00099cdf) popup_number_entry_window_t2_ParamLimits

0xdad3,	// (0x00099cf1) popup_number_entry_window_t3_ParamLimits

0x1074,	// (0x0008d292) popup_number_entry_window_t5_ParamLimits

0x1074,	// (0x0008d292) popup_number_entry_window_t5

0xf0ec,	// (0x0009b30a) popup_number_entry_window_t_ParamLimits

0xdae5,	// (0x00099d03) text_title_cp2_ParamLimits

0x9f25,	// (0x00096143) aid_hotspot_pointer_text2_pane

0x9f3f,	// (0x0009615d) main_viewer_pane_g9_ParamLimits

0x9f3f,	// (0x0009615d) main_viewer_pane_g9

0xe696,	// (0x0009a8b4) cale_month_pane_t1_ParamLimits

0xe6d3,	// (0x0009a8f1) bg_cale_pane_ParamLimits

0xe6eb,	// (0x0009a909) list_cale_pane_ParamLimits

0xe301,	// (0x0009a51f) listscroll_cale_day_pane_t1

0xe6fc,	// (0x0009a91a) scroll_pane_cp09_ParamLimits

0x3240,	// (0x0008f45e) main_mup_eq_pane_t1_ParamLimits

0x3240,	// (0x0008f45e) main_mup_eq_pane_t1

0x325a,	// (0x0008f478) main_mup_eq_pane_t2_ParamLimits

0x325a,	// (0x0008f478) main_mup_eq_pane_t2

0x3274,	// (0x0008f492) main_mup_eq_pane_t3_ParamLimits

0x3274,	// (0x0008f492) main_mup_eq_pane_t3

0x3290,	// (0x0008f4ae) main_mup_eq_pane_t4_ParamLimits

0x3290,	// (0x0008f4ae) main_mup_eq_pane_t4

0x32ac,	// (0x0008f4ca) main_mup_eq_pane_t5_ParamLimits

0x32ac,	// (0x0008f4ca) main_mup_eq_pane_t5

0x32c8,	// (0x0008f4e6) main_mup_eq_pane_t6_ParamLimits

0x32c8,	// (0x0008f4e6) main_mup_eq_pane_t6

0x32dc,	// (0x0008f4fa) main_mup_eq_pane_t7_ParamLimits

0x32dc,	// (0x0008f4fa) main_mup_eq_pane_t7

0x32f0,	// (0x0008f50e) main_mup_eq_pane_t8_ParamLimits

0x32f0,	// (0x0008f50e) main_mup_eq_pane_t8

0x3304,	// (0x0008f522) main_mup_eq_pane_t9_ParamLimits

0x3304,	// (0x0008f522) main_mup_eq_pane_t9

0x331e,	// (0x0008f53c) main_mup_eq_pane_t10_ParamLimits

0x331e,	// (0x0008f53c) main_mup_eq_pane_t10

0x0009,

0xf409,	// (0x0009b627) main_mup_eq_pane_t_ParamLimits

0xf409,	// (0x0009b627) main_mup_eq_pane_t

0x33cd,	// (0x0008f5eb) mup_equalizer_pane_cp5_ParamLimits

0x33e1,	// (0x0008f5ff) mup_equalizer_pane_cp6_ParamLimits

0x33f5,	// (0x0008f613) mup_equalizer_pane_cp7_ParamLimits

0x0dba,	// (0x0008cfd8) main_gallery_pane

0xa78a,	// (0x000969a8) smil2_volume_pane

0xa792,	// (0x000969b0) smil_status_volume_pane_g1_ParamLimits

0xa7a5,	// (0x000969c3) smil_status_volume_pane_g2_ParamLimits

0xa7b8,	// (0x000969d6) smil_status_volume_pane_g3_ParamLimits

0xf5a3,	// (0x0009b7c1) smil_status_volume_pane_g_ParamLimits

0xa9b6,	// (0x00096bd4) bg_popup_window_pane_cp07_ParamLimits

0xa9c4,	// (0x00096be2) blid_firmament_pane

0x536f,	// (0x0009158d) aid_size_cell_gallery_ParamLimits

0x536f,	// (0x0009158d) aid_size_cell_gallery

0x5385,	// (0x000915a3) grid_gallery_pane_ParamLimits

0x5385,	// (0x000915a3) grid_gallery_pane

0x539e,	// (0x000915bc) cell_gallery_pane_ParamLimits

0x539e,	// (0x000915bc) cell_gallery_pane

0xaae7,	// (0x00096d05) bg_cell_gallery_focus_pane_ParamLimits

0xaae7,	// (0x00096d05) bg_cell_gallery_focus_pane

0xaaf9,	// (0x00096d17) cell_gallery_pane_g1_ParamLimits

0xaaf9,	// (0x00096d17) cell_gallery_pane_g1

0x53e7,	// (0x00091605) cell_gallery_pane_g2_ParamLimits

0x53e7,	// (0x00091605) cell_gallery_pane_g2

0x53f4,	// (0x00091612) cell_gallery_pane_g3_ParamLimits

0x53f4,	// (0x00091612) cell_gallery_pane_g3

0xab05,	// (0x00096d23) cell_gallery_pane_g4_ParamLimits

0xab05,	// (0x00096d23) cell_gallery_pane_g4

0x0003,

0xf651,	// (0x0009b86f) cell_gallery_pane_g_ParamLimits

0xf651,	// (0x0009b86f) cell_gallery_pane_g

0xab11,	// (0x00096d2f) bg_cell_gallery_focus_pane_g1

0xab19,	// (0x00096d37) bg_cell_gallery_focus_pane_g2

0xab21,	// (0x00096d3f) bg_cell_gallery_focus_pane_g3

0xab29,	// (0x00096d47) bg_cell_gallery_focus_pane_g4

0xab31,	// (0x00096d4f) bg_cell_gallery_focus_pane_g5

0xab39,	// (0x00096d57) bg_cell_gallery_focus_pane_g6

0xab41,	// (0x00096d5f) bg_cell_gallery_focus_pane_g7

0xab49,	// (0x00096d67) bg_cell_gallery_focus_pane_g8

0x0007,

0xf65a,	// (0x0009b878) bg_cell_gallery_focus_pane_g

0xab51,	// (0x00096d6f) aid_firma_cardinal

0xab65,	// (0x00096d83) blid_firmament_pane_t1

0xab7c,	// (0x00096d9a) blid_firmament_pane_t2

0xab93,	// (0x00096db1) blid_firmament_pane_t3

0xabaa,	// (0x00096dc8) blid_firmament_pane_t4

0x0003,

0xf66b,	// (0x0009b889) blid_firmament_pane_t

0xabc1,	// (0x00096ddf) blid_sat_info_pane

0xabd1,	// (0x00096def) blid_sat_info_pane_g1

0xabd1,	// (0x00096def) blid_sat_info_pane_g2

0x0001,

0xf674,	// (0x0009b892) blid_sat_info_pane_g

0xabdb,	// (0x00096df9) blid_sat_info_pane_t1

0xabe9,	// (0x00096e07) smil2_volume_content_pane

0xabf2,	// (0x00096e10) smil2_volume_pane_g1

0xabfa,	// (0x00096e18) smil2_volume_content_pane_g1

0xac03,	// (0x00096e21) smil2_volume_content_pane_g2

0xac0c,	// (0x00096e2a) smil2_volume_content_pane_g3

0xac15,	// (0x00096e33) smil2_volume_content_pane_g4

0xac1e,	// (0x00096e3c) smil2_volume_content_pane_g5

0xac27,	// (0x00096e45) smil2_volume_content_pane_g6

0xac30,	// (0x00096e4e) smil2_volume_content_pane_g7

0xac39,	// (0x00096e57) smil2_volume_content_pane_g8

0xac42,	// (0x00096e60) smil2_volume_content_pane_g9

0xac4b,	// (0x00096e69) smil2_volume_content_pane_g10

0x0009,

0xf679,	// (0x0009b897) smil2_volume_content_pane_g

0x170b,	// (0x0008d929) cale_week_day_heading_pane_t1_ParamLimits

0x1738,	// (0x0008d956) cale_week_day_heading_pane_t2_ParamLimits

0x1765,	// (0x0008d983) cale_week_day_heading_pane_t3_ParamLimits

0x1792,	// (0x0008d9b0) cale_week_day_heading_pane_t4_ParamLimits

0x17bf,	// (0x0008d9dd) cale_week_day_heading_pane_t5_ParamLimits

0x17ec,	// (0x0008da0a) cale_week_day_heading_pane_t6_ParamLimits

0x181b,	// (0x0008da39) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0009b40f) cale_week_day_heading_pane_t_ParamLimits

0xe313,	// (0x0009a531) bg_cale_side_pane_ParamLimits

0x1848,	// (0x0008da66) cale_week_time_pane_t1_ParamLimits

0x1860,	// (0x0008da7e) cale_week_time_pane_t2_ParamLimits

0x1878,	// (0x0008da96) cale_week_time_pane_t3_ParamLimits

0x1890,	// (0x0008daae) cale_week_time_pane_t4_ParamLimits

0x18a8,	// (0x0008dac6) cale_week_time_pane_t5_ParamLimits

0x18c0,	// (0x0008dade) cale_week_time_pane_t6_ParamLimits

0x18d8,	// (0x0008daf6) cale_week_time_pane_t7_ParamLimits

0x18f0,	// (0x0008db0e) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0009b41e) cale_week_time_pane_t_ParamLimits

0x1908,	// (0x0008db26) cell_cale_week_pane_g2_ParamLimits

0xe313,	// (0x0009a531) bg_cale_side_pane_cp01_ParamLimits

0x28df,	// (0x0008eafd) cale_month_week_pane_t1_ParamLimits

0x28f6,	// (0x0008eb14) cale_month_week_pane_t2_ParamLimits

0x290d,	// (0x0008eb2b) cale_month_week_pane_t3_ParamLimits

0x2924,	// (0x0008eb42) cale_month_week_pane_t4_ParamLimits

0x293b,	// (0x0008eb59) cale_month_week_pane_t5_ParamLimits

0x2952,	// (0x0008eb70) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0009b4f7) cale_month_week_pane_t_ParamLimits

0x9e62,	// (0x00096080) cell_cale_month_pane_g1_ParamLimits

0x0dba,	// (0x0008cfd8) main_cale_event_viewer_pane

0x0dba,	// (0x0008cfd8) listscroll_cale_event_viewer_pane

0xac54,	// (0x00096e72) list_cale_ev_pane

0xac5c,	// (0x00096e7a) scroll_pane_cp023

0xac68,	// (0x00096e86) field_cale_ev_pane_ParamLimits

0xac68,	// (0x00096e86) field_cale_ev_pane

0xac86,	// (0x00096ea4) field_cale_ev_content_pane_ParamLimits

0xac86,	// (0x00096ea4) field_cale_ev_content_pane

0xac92,	// (0x00096eb0) field_cale_ev_pane_g1_ParamLimits

0xac92,	// (0x00096eb0) field_cale_ev_pane_g1

0xac9e,	// (0x00096ebc) field_cale_ev_pane_g2_ParamLimits

0xac9e,	// (0x00096ebc) field_cale_ev_pane_g2

0xacb6,	// (0x00096ed4) field_cale_ev_pane_g3_ParamLimits

0xacb6,	// (0x00096ed4) field_cale_ev_pane_g3

0x0002,

0xf68e,	// (0x0009b8ac) field_cale_ev_pane_g_ParamLimits

0xf68e,	// (0x0009b8ac) field_cale_ev_pane_g

0xacce,	// (0x00096eec) field_cale_ev_pane_t1_ParamLimits

0xacce,	// (0x00096eec) field_cale_ev_pane_t1

0xace5,	// (0x00096f03) field_cale_ev_content_pane_t1_ParamLimits

0xace5,	// (0x00096f03) field_cale_ev_content_pane_t1

0xee1b,	// (0x0009b039) bg_button_pane_cp01

0xe1d3,	// (0x0009a3f1) listscroll_cale_week_pane_ParamLimits

0x1527,	// (0x0008d745) popup_toolbar_window_cp01

0xe301,	// (0x0009a51f) listscroll_cale_week_pane_t1_ParamLimits

0xe1d3,	// (0x0009a3f1) listscroll_cale_day_pane_ParamLimits

0x2adf,	// (0x0008ecfd) popup_toolbar_window_cp02

0xe301,	// (0x0009a51f) listscroll_cale_day_pane_t1_ParamLimits

0xe1d3,	// (0x0009a3f1) main_cale_month_pane_ParamLimits

0x491b,	// (0x00090b39) popup_toolbar_window_cp03_ParamLimits

0x491b,	// (0x00090b39) popup_toolbar_window_cp03

0x3774,	// (0x0008f992) main_image_pane_g2_ParamLimits

0x3774,	// (0x0008f992) main_image_pane_g2

0x3785,	// (0x0008f9a3) main_image_pane_g3_ParamLimits

0x3785,	// (0x0008f9a3) main_image_pane_g3

0x0002,

0xf491,	// (0x0009b6af) main_image_pane_g_ParamLimits

0xf491,	// (0x0009b6af) main_image_pane_g

0xef35,	// (0x0009b153) main_image_pane_t1_ParamLimits

0x3796,	// (0x0008f9b4) main_image_pane_t2_ParamLimits

0x3796,	// (0x0008f9b4) main_image_pane_t2

0x37a8,	// (0x0008f9c6) main_image_pane_t3_ParamLimits

0x37a8,	// (0x0008f9c6) main_image_pane_t3

0x37d0,	// (0x0008f9ee) main_image_pane_t4_ParamLimits

0x37d0,	// (0x0008f9ee) main_image_pane_t4

0x0003,

0xf498,	// (0x0009b6b6) main_image_pane_t_ParamLimits

0xf498,	// (0x0009b6b6) main_image_pane_t

0x37f0,	// (0x0008fa0e) popup_image_details_window_cp01

0x37fa,	// (0x0008fa18) popup_toobar_trans_pane_cp01_ParamLimits

0x37fa,	// (0x0008fa18) popup_toobar_trans_pane_cp01

0x47c6,	// (0x000909e4) popup_image_details_window_ParamLimits

0x47c6,	// (0x000909e4) popup_image_details_window

0xa6eb,	// (0x00096909) popup_image_focus_window

0x4be1,	// (0x00090dff) camera2_autofocus_pane_ParamLimits

0x4be1,	// (0x00090dff) camera2_autofocus_pane

0x0dba,	// (0x0008cfd8) bg_popup_sub_pane_cp06

0xad03,	// (0x00096f21) popup_image_focus_window_g1

0xad0b,	// (0x00096f29) popup_image_focus_window_g2

0xad13,	// (0x00096f31) popup_image_focus_window_g3

0xad1b,	// (0x00096f39) popup_image_focus_window_g4

0x0003,

0xf695,	// (0x0009b8b3) popup_image_focus_window_g

0xad23,	// (0x00096f41) popup_image_focus_window_t1

0xad31,	// (0x00096f4f) popup_image_focus_window_t2

0xad41,	// (0x00096f5f) popup_image_focus_window_t3

0x0002,

0xf69e,	// (0x0009b8bc) popup_image_focus_window_t

0xad4f,	// (0x00096f6d) camera2_autofocus_pane_g1

0xf009,	// (0x0009b227) bg_tb_trans_pane_cp01

0xad5d,	// (0x00096f7b) popup_image_details_window_g1

0xad70,	// (0x00096f8e) popup_image_details_window_g2

0x0002,

0xf6b0,	// (0x0009b8ce) popup_image_details_window_g

0xad99,	// (0x00096fb7) popup_image_details_window_t1

0xadab,	// (0x00096fc9) popup_image_details_window_t2

0xadc4,	// (0x00096fe2) popup_image_details_window_t3

0xadd8,	// (0x00096ff6) popup_image_details_window_t4

0xadf3,	// (0x00097011) popup_image_details_window_t5

0x0004,

0xf6b7,	// (0x0009b8d5) popup_image_details_window_t

0xe1bf,	// (0x0009a3dd) bg_calc_paper_pane_ParamLimits

0x9d68,	// (0x00095f86) grid_highlight_pane_cp013

0x9d72,	// (0x00095f90) list_calc_pane_ParamLimits

0x9d84,	// (0x00095fa2) scroll_pane_cp024

0xe1d3,	// (0x0009a3f1) bg_calc_display_pane_ParamLimits

0x135a,	// (0x0008d578) calc_display_pane_t1_ParamLimits

0x136c,	// (0x0008d58a) calc_display_pane_t2_ParamLimits

0x9d8c,	// (0x00095faa) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0009b391) calc_display_pane_t_ParamLimits

0x1424,	// (0x0008d642) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0009b3ae) cell_calc_pane_g

0x142d,	// (0x0008d64b) cell_calc_pane_t1

0xe232,	// (0x0009a450) grid_highlight_pane_cp02_ParamLimits

0xe248,	// (0x0009a466) toolbar_button_pane_cp01_ParamLimits

0xe248,	// (0x0009a466) toolbar_button_pane_cp01

0xef7a,	// (0x0009b198) temp_image_control_pane_ParamLimits

0xef7a,	// (0x0009b198) temp_image_control_pane

0xf009,	// (0x0009b227) main_mp3_pane

0xae0d,	// (0x0009702b) temp_image_control_pane_g1_ParamLimits

0xae0d,	// (0x0009702b) temp_image_control_pane_g1

0xae1b,	// (0x00097039) temp_image_control_pane_g2_ParamLimits

0xae1b,	// (0x00097039) temp_image_control_pane_g2

0xae2d,	// (0x0009704b) temp_image_control_pane_g3_ParamLimits

0xae2d,	// (0x0009704b) temp_image_control_pane_g3

0x5431,	// (0x0009164f) temp_image_control_pane_g4_ParamLimits

0x5431,	// (0x0009164f) temp_image_control_pane_g4

0x0003,

0xf6c2,	// (0x0009b8e0) temp_image_control_pane_g_ParamLimits

0xf6c2,	// (0x0009b8e0) temp_image_control_pane_g

0xae0d,	// (0x0009702b) main_mp3_pane_g1

0x5444,	// (0x00091662) main_mp3_pane_g2

0x0007,

0xf6cb,	// (0x0009b8e9) main_mp3_pane_g

0xae70,	// (0x0009708e) main_mp3_pane_t1

0xe378,	// (0x0009a596) main_camera_pane_g8_ParamLimits

0xe378,	// (0x0009a596) main_camera_pane_g8

0x1bc2,	// (0x0008dde0) main_video_pane_g7_ParamLimits

0x1bc2,	// (0x0008dde0) main_video_pane_g7

0xa7f8,	// (0x00096a16) main_camera2_pane_t7_ParamLimits

0xa7f8,	// (0x00096a16) main_camera2_pane_t7

0xe4be,	// (0x0009a6dc) scroll_pane_cp025_ParamLimits

0xe4be,	// (0x0009a6dc) scroll_pane_cp025

0xe4d2,	// (0x0009a6f0) scroll_pane_cp026_ParamLimits

0xe4d2,	// (0x0009a6f0) scroll_pane_cp026

0xe4e1,	// (0x0009a6ff) wml_content_pane_ParamLimits

0x0dba,	// (0x0008cfd8) main_touch_calib_pane

0x550e,	// (0x0009172c) main_touch_calib_pane_g1

0x551a,	// (0x00091738) main_touch_calib_pane_g2

0x5526,	// (0x00091744) main_touch_calib_pane_g3

0x5532,	// (0x00091750) main_touch_calib_pane_g4

0x0003,

0xf6e9,	// (0x0009b907) main_touch_calib_pane_g

0x553e,	// (0x0009175c) main_touch_calib_pane_t1

0x5558,	// (0x00091776) main_touch_calib_pane_t2

0x0004,

0xf6f2,	// (0x0009b910) main_touch_calib_pane_t

0xebf3,	// (0x0009ae11) mup_progress_pane_cp02

0xec12,	// (0x0009ae30) navi_pane_g1

0xec74,	// (0x0009ae92) navi_pane_mp_t3

0xf009,	// (0x0009b227) main_mp3_pane_ParamLimits

0x4959,	// (0x00090b77) navi_pane_ParamLimits

0xae0d,	// (0x0009702b) main_mp3_pane_g1_ParamLimits

0x5444,	// (0x00091662) main_mp3_pane_g2_ParamLimits

0x5452,	// (0x00091670) main_mp3_pane_g3_ParamLimits

0x5452,	// (0x00091670) main_mp3_pane_g3

0x5460,	// (0x0009167e) main_mp3_pane_g4_ParamLimits

0x5460,	// (0x0009167e) main_mp3_pane_g4

0xae3d,	// (0x0009705b) main_mp3_pane_g5_ParamLimits

0xae3d,	// (0x0009705b) main_mp3_pane_g5

0xae4b,	// (0x00097069) main_mp3_pane_g6_ParamLimits

0xae4b,	// (0x00097069) main_mp3_pane_g6

0xae58,	// (0x00097076) main_mp3_pane_g7_ParamLimits

0xae58,	// (0x00097076) main_mp3_pane_g7

0xae64,	// (0x00097082) main_mp3_pane_g8_ParamLimits

0xae64,	// (0x00097082) main_mp3_pane_g8

0xf6cb,	// (0x0009b8e9) main_mp3_pane_g_ParamLimits

0x546c,	// (0x0009168a) main_mp3_pane_t2

0x547a,	// (0x00091698) main_mp3_pane_t3

0xae7e,	// (0x0009709c) main_mp3_pane_t4

0xae8c,	// (0x000970aa) main_mp3_pane_t5

0x0005,

0xf6dc,	// (0x0009b8fa) main_mp3_pane_t

0xae9a,	// (0x000970b8) mup_progress_pane_cp01

0x0e18,	// (0x0008d036) aid_zoom_text_secondary2

0xac54,	// (0x00096e72) list_cale_ev2_pane

0xac5c,	// (0x00096e7a) scroll_pane_cp023_ParamLimits

0x55ae,	// (0x000917cc) field_cale_ev2_pane_ParamLimits

0x55ae,	// (0x000917cc) field_cale_ev2_pane

0x55ce,	// (0x000917ec) field_cale_ev2_pane_g1_ParamLimits

0x55ce,	// (0x000917ec) field_cale_ev2_pane_g1

0x55da,	// (0x000917f8) field_cale_ev2_pane_g2_ParamLimits

0x55da,	// (0x000917f8) field_cale_ev2_pane_g2

0x55f2,	// (0x00091810) field_cale_ev2_pane_g3_ParamLimits

0x55f2,	// (0x00091810) field_cale_ev2_pane_g3

0x0003,

0xf6fd,	// (0x0009b91b) field_cale_ev2_pane_g_ParamLimits

0xf6fd,	// (0x0009b91b) field_cale_ev2_pane_g

0xaeae,	// (0x000970cc) field_cale_ev2_pane_t1_ParamLimits

0xaeae,	// (0x000970cc) field_cale_ev2_pane_t1

0xaec5,	// (0x000970e3) field_cale_ev2_pane_t2_ParamLimits

0xaec5,	// (0x000970e3) field_cale_ev2_pane_t2

0x0001,

0xf706,	// (0x0009b924) field_cale_ev2_pane_t_ParamLimits

0xf706,	// (0x0009b924) field_cale_ev2_pane_t

0x3629,	// (0x0008f847) main_postcard_pane_g5_ParamLimits

0x3629,	// (0x0008f847) main_postcard_pane_g5

0x363f,	// (0x0008f85d) main_postcard_pane_g6_ParamLimits

0x363f,	// (0x0008f85d) main_postcard_pane_g6

0x1982,	// (0x0008dba0) camera2_autofocus_pane_cp_ParamLimits

0x1982,	// (0x0008dba0) camera2_autofocus_pane_cp

0xf009,	// (0x0009b227) main_mup3_pane

0x562a,	// (0x00091848) main_mup3_pane_g1_ParamLimits

0x562a,	// (0x00091848) main_mup3_pane_g1

0x564c,	// (0x0009186a) main_mup3_pane_g2_ParamLimits

0x564c,	// (0x0009186a) main_mup3_pane_g2

0x56ca,	// (0x000918e8) main_mup3_pane_g3_ParamLimits

0x56ca,	// (0x000918e8) main_mup3_pane_g3

0x570c,	// (0x0009192a) main_mup3_pane_g4_ParamLimits

0x570c,	// (0x0009192a) main_mup3_pane_g4

0x574e,	// (0x0009196c) main_mup3_pane_g5_ParamLimits

0x574e,	// (0x0009196c) main_mup3_pane_g5

0x5790,	// (0x000919ae) main_mup3_pane_g6_ParamLimits

0x5790,	// (0x000919ae) main_mup3_pane_g6

0xaeda,	// (0x000970f8) main_mup3_pane_g7_ParamLimits

0xaeda,	// (0x000970f8) main_mup3_pane_g7

0x0007,

0xf716,	// (0x0009b934) main_mup3_pane_g_ParamLimits

0xf716,	// (0x0009b934) main_mup3_pane_g

0x580a,	// (0x00091a28) main_mup3_pane_t1_ParamLimits

0x580a,	// (0x00091a28) main_mup3_pane_t1

0x587a,	// (0x00091a98) main_mup3_pane_t2_ParamLimits

0x587a,	// (0x00091a98) main_mup3_pane_t2

0x594a,	// (0x00091b68) main_mup3_pane_t4_ParamLimits

0x594a,	// (0x00091b68) main_mup3_pane_t4

0x59a0,	// (0x00091bbe) main_mup3_pane_t5_ParamLimits

0x59a0,	// (0x00091bbe) main_mup3_pane_t5

0x5a54,	// (0x00091c72) main_mup3_pane_t6_ParamLimits

0x5a54,	// (0x00091c72) main_mup3_pane_t6

0x0005,

0xf727,	// (0x0009b945) main_mup3_pane_t_ParamLimits

0xf727,	// (0x0009b945) main_mup3_pane_t

0x5b08,	// (0x00091d26) mup3_progress_pane_ParamLimits

0x5b08,	// (0x00091d26) mup3_progress_pane

0x5b8a,	// (0x00091da8) popup_mup3_control_window_ParamLimits

0x5b8a,	// (0x00091da8) popup_mup3_control_window

0xaee8,	// (0x00097106) popup_mup3_text_window

0x5bbc,	// (0x00091dda) mup3_progress_pane_t1

0x5bd3,	// (0x00091df1) mup3_progress_pane_t2

0xaef0,	// (0x0009710e) mup3_progress_pane_t3

0x0002,

0xf734,	// (0x0009b952) mup3_progress_pane_t

0xaf07,	// (0x00097125) mup_progress_pane_cp03

0x0dba,	// (0x0008cfd8) bg_tb_trans_pane_cp04

0x5bea,	// (0x00091e08) mup3_volume_pane

0x5bf2,	// (0x00091e10) popup_mup3_control_window_g1

0x5bfb,	// (0x00091e19) mup3_volume_pane_g1

0x5c04,	// (0x00091e22) mup3_volume_pane_g2

0x5c0d,	// (0x00091e2b) mup3_volume_pane_g3

0x0002,

0xf73b,	// (0x0009b959) mup3_volume_pane_g

0x0dba,	// (0x0008cfd8) bg_tb_trans_pane_cp03

0xaf17,	// (0x00097135) popup_mup3_text_window_g1

0xaf1f,	// (0x0009713d) popup_mup3_text_window_t1

0xe21b,	// (0x0009a439) list_calc_item_pane_g1_ParamLimits

0xa8e0,	// (0x00096afe) mup_volume_pane_cp_g1

0x5572,	// (0x00091790) main_touch_calib_pane_t3

0x5586,	// (0x000917a4) main_touch_calib_pane_t4

0x559a,	// (0x000917b8) main_touch_calib_pane_t5

0x0dc4,	// (0x0008cfe2) aid_cell_size_toolbar2

0x0dcc,	// (0x0008cfea) aid_popup3_width_pane

0x0e08,	// (0x0008d026) aid_zoom_text_msg_primary

0x9e4c,	// (0x0009606a) vorec_t7

0xe1df,	// (0x0009a3fd) bg_calc_paper_pane_g1_ParamLimits

0xe1eb,	// (0x0009a409) bg_calc_paper_pane_g2_ParamLimits

0xe1f7,	// (0x0009a415) bg_calc_paper_pane_g3_ParamLimits

0xe203,	// (0x0009a421) bg_calc_paper_pane_g4_ParamLimits

0xe20f,	// (0x0009a42d) bg_calc_paper_pane_g5_ParamLimits

0x13b3,	// (0x0008d5d1) bg_calc_paper_pane_g6_ParamLimits

0x13c2,	// (0x0008d5e0) bg_calc_paper_pane_g7_ParamLimits

0x13d1,	// (0x0008d5ef) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0009b398) bg_calc_paper_pane_g_ParamLimits

0x13e4,	// (0x0008d602) calc_bg_paper_pane_g9_ParamLimits

0x1ad0,	// (0x0008dcee) image_qvga_pane_ParamLimits

0x1ad0,	// (0x0008dcee) image_qvga_pane

0xe0fc,	// (0x0009a31a) bg_popup_sub_pane_cp04_ParamLimits

0xeeb1,	// (0x0009b0cf) popup_mup_playback_window_g1_ParamLimits

0xeebd,	// (0x0009b0db) popup_mup_playback_window_t1_ParamLimits

0xeed2,	// (0x0009b0f0) popup_mup_playback_window_t2_ParamLimits

0x0265,	// (0x0008c483) popup_mup_playback_window_t_ParamLimits

0x50d4,	// (0x000912f2) main_mup2_pane_g3_ParamLimits

0x50d4,	// (0x000912f2) main_mup2_pane_g3

0x1ee6,	// (0x0008e104) popup_toolbar_window_cp04

0x3d38,	// (0x0008ff56) popup_call2_audio_second_window_g3_ParamLimits

0x3d38,	// (0x0008ff56) popup_call2_audio_second_window_g3

0x4142,	// (0x00090360) popup_call2_audio_first_window_g4_ParamLimits

0x4142,	// (0x00090360) popup_call2_audio_first_window_g4

0xa36a,	// (0x00096588) popup_call2_audio_in_window_g4_ParamLimits

0xa36a,	// (0x00096588) popup_call2_audio_in_window_g4

0x3756,	// (0x0008f974) aid_area_sk_bg_cut_ParamLimits

0x3756,	// (0x0008f974) aid_area_sk_bg_cut

0xeee7,	// (0x0009b105) aid_area_sk_bg_cut_2_ParamLimits

0xeee7,	// (0x0009b105) aid_area_sk_bg_cut_2

0x53d7,	// (0x000915f5) aid_placing_details_win

0x53df,	// (0x000915fd) aid_placing_details_win_2

0xad4f,	// (0x00096f6d) camera2_autofocus_pane_g1_ParamLimits

0x0fc1,	// (0x0008d1df) popup_fixed_preview_cale_window_ParamLimits

0x0fc1,	// (0x0008d1df) popup_fixed_preview_cale_window

0xecc3,	// (0x0009aee1) navi_slider_pane_g3

0xeccc,	// (0x0009aeea) navi_slider_pane_g4

0xecd5,	// (0x0009aef3) navi_slider_pane_g5

0xecc3,	// (0x0009aee1) navi_slider_pane_g6

0x9f0c,	// (0x0009612a) navi_slider_pane_g7

0xede8,	// (0x0009b006) mup_scale_pane_g3

0xedf1,	// (0x0009b00f) mup_scale_pane_g4

0xedfa,	// (0x0009b018) mup_scale_pane_g5

0x3409,	// (0x0008f627) mup_scale_pane_g6

0x3412,	// (0x0008f630) mup_scale_pane_g7

0xecc3,	// (0x0009aee1) cams2_slider_pane_g3

0xa995,	// (0x00096bb3) cams2_slider_pane_g4

0xa99d,	// (0x00096bbb) cams2_slider_pane_g5

0xecc3,	// (0x0009aee1) cams2_slider_pane_g6

0xa9a5,	// (0x00096bc3) cams2_slider_pane_g7

0xabd1,	// (0x00096def) camera2_autofocus_pane_cp_g1

0xaf2d,	// (0x0009714b) bg_popup_preview_window_pane_cp02_ParamLimits

0xaf2d,	// (0x0009714b) bg_popup_preview_window_pane_cp02

0xaf39,	// (0x00097157) list_fp_cale_pane_ParamLimits

0xaf39,	// (0x00097157) list_fp_cale_pane

0xaf45,	// (0x00097163) popup_fixed_preview_cale_window_t1_ParamLimits

0xaf45,	// (0x00097163) popup_fixed_preview_cale_window_t1

0x5c16,	// (0x00091e34) popup_fixed_preview_cale_window_t2_ParamLimits

0x5c16,	// (0x00091e34) popup_fixed_preview_cale_window_t2

0x5c2b,	// (0x00091e49) popup_fixed_preview_cale_window_t3_ParamLimits

0x5c2b,	// (0x00091e49) popup_fixed_preview_cale_window_t3

0x0002,

0xf742,	// (0x0009b960) popup_fixed_preview_cale_window_t_ParamLimits

0xf742,	// (0x0009b960) popup_fixed_preview_cale_window_t

0x5c40,	// (0x00091e5e) list_single_fp_cale_pane_ParamLimits

0x5c40,	// (0x00091e5e) list_single_fp_cale_pane

0xaf63,	// (0x00097181) list_single_fp_cale_pane_g1_ParamLimits

0xaf63,	// (0x00097181) list_single_fp_cale_pane_g1

0xaf6f,	// (0x0009718d) list_single_fp_cale_pane_g2_ParamLimits

0xaf6f,	// (0x0009718d) list_single_fp_cale_pane_g2

0x0002,

0xf749,	// (0x0009b967) list_single_fp_cale_pane_g_ParamLimits

0xf749,	// (0x0009b967) list_single_fp_cale_pane_g

0xaf88,	// (0x000971a6) list_single_fp_cale_pane_t1_ParamLimits

0xaf88,	// (0x000971a6) list_single_fp_cale_pane_t1

0xaf9a,	// (0x000971b8) list_single_fp_cale_pane_t2_ParamLimits

0xaf9a,	// (0x000971b8) list_single_fp_cale_pane_t2

0x0001,

0xf750,	// (0x0009b96e) list_single_fp_cale_pane_t_ParamLimits

0xf750,	// (0x0009b96e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0dba,	// (0x0008cfd8) main_dialer_pane

0x5c55,	// (0x00091e73) aid_cell_size_keypad

0x5c5f,	// (0x00091e7d) dialer_ne_pane

0x5c67,	// (0x00091e85) grid_dialer_command_1_pane

0x5c6f,	// (0x00091e8d) grid_dialer_command_2_pane

0x5c77,	// (0x00091e95) grid_dialer_keypad_pane

0x5c89,	// (0x00091ea7) bg_popup_call_pane_cp06_ParamLimits

0x5c89,	// (0x00091ea7) bg_popup_call_pane_cp06

0x5c95,	// (0x00091eb3) dialer_ne_clear_pane_ParamLimits

0x5c95,	// (0x00091eb3) dialer_ne_clear_pane

0xafcd,	// (0x000971eb) dialer_ne_pane_g1

0xafd5,	// (0x000971f3) dialer_ne_pane_t1_ParamLimits

0xafd5,	// (0x000971f3) dialer_ne_pane_t1

0x5ca1,	// (0x00091ebf) dialer_ne_pane_t2_ParamLimits

0x5ca1,	// (0x00091ebf) dialer_ne_pane_t2

0x5ccb,	// (0x00091ee9) dialer_ne_pane_t3_ParamLimits

0x5ccb,	// (0x00091ee9) dialer_ne_pane_t3

0x0002,

0xf755,	// (0x0009b973) dialer_ne_pane_t_ParamLimits

0xf755,	// (0x0009b973) dialer_ne_pane_t

0x5cfb,	// (0x00091f19) dialer_ne_pane_t3_copy1_ParamLimits

0x5cfb,	// (0x00091f19) dialer_ne_pane_t3_copy1

0x5d2a,	// (0x00091f48) cell_dialer_keypad_pane_ParamLimits

0x5d2a,	// (0x00091f48) cell_dialer_keypad_pane

0x5d41,	// (0x00091f5f) cell_dialer_command_1_pane_ParamLimits

0x5d41,	// (0x00091f5f) cell_dialer_command_1_pane

0x5d57,	// (0x00091f75) cell_dialer_command_2_pane_ParamLimits

0x5d57,	// (0x00091f75) cell_dialer_command_2_pane

0xafe7,	// (0x00097205) bg_button_pane_cp02_ParamLimits

0xafe7,	// (0x00097205) bg_button_pane_cp02

0x5d66,	// (0x00091f84) cell_dialer_keypad_pane_g1_ParamLimits

0x5d66,	// (0x00091f84) cell_dialer_keypad_pane_g1

0xafe7,	// (0x00097205) bg_button_pane_cp03_ParamLimits

0xafe7,	// (0x00097205) bg_button_pane_cp03

0x5d7a,	// (0x00091f98) cell_dialer_command_1_pane_g1_ParamLimits

0x5d7a,	// (0x00091f98) cell_dialer_command_1_pane_g1

0xaff3,	// (0x00097211) bg_button_pane_cp04

0x5d8e,	// (0x00091fac) cell_dialer_command_2_pane_g1

0xecb2,	// (0x0009aed0) bg_button_pane_cp06

0xaffb,	// (0x00097219) dialer_ne_clear_pane_g1

0x2f4d,	// (0x0008f16b) navi_pane_g2

0x2f7b,	// (0x0008f199) navi_pane_g3

0x0002,

0xf3bf,	// (0x0009b5dd) navi_pane_g

0x2fa4,	// (0x0008f1c2) navi_pane_mv_g2

0x2fcb,	// (0x0008f1e9) navi_pane_mv_g5

0x2fd3,	// (0x0008f1f1) navi_pane_mv_t1

0xe1d3,	// (0x0009a3f1) main_clock2_pane

0x5dc2,	// (0x00091fe0) main_clock2_list_pane_ParamLimits

0x5dc2,	// (0x00091fe0) main_clock2_list_pane

0x5df8,	// (0x00092016) main_clock2_pane_t1_ParamLimits

0x5df8,	// (0x00092016) main_clock2_pane_t1

0x5e34,	// (0x00092052) main_clock2_pane_t2_ParamLimits

0x5e34,	// (0x00092052) main_clock2_pane_t2

0x0004,

0xf75c,	// (0x0009b97a) main_clock2_pane_t_ParamLimits

0xf75c,	// (0x0009b97a) main_clock2_pane_t

0x5ebe,	// (0x000920dc) popup_clock_analogue_window_cp03_ParamLimits

0x5ebe,	// (0x000920dc) popup_clock_analogue_window_cp03

0x5ee3,	// (0x00092101) popup_clock_digital_window_cp02_ParamLimits

0x5ee3,	// (0x00092101) popup_clock_digital_window_cp02

0x5f54,	// (0x00092172) main_clock2_list_single_pane_ParamLimits

0x5f54,	// (0x00092172) main_clock2_list_single_pane

0xecb2,	// (0x0009aed0) list_highlight_pane_cp05

0xb003,	// (0x00097221) main_clock2_list_single_pane_t1

0x1ee6,	// (0x0008e104) popup_toolbar_window_cp04_ParamLimits

0x5401,	// (0x0009161f) camera2_autofocus_pane_g2_ParamLimits

0x5401,	// (0x0009161f) camera2_autofocus_pane_g2

0x540d,	// (0x0009162b) camera2_autofocus_pane_g3_ParamLimits

0x540d,	// (0x0009162b) camera2_autofocus_pane_g3

0x5419,	// (0x00091637) camera2_autofocus_pane_g4_ParamLimits

0x5419,	// (0x00091637) camera2_autofocus_pane_g4

0x5425,	// (0x00091643) camera2_autofocus_pane_g5_ParamLimits

0x5425,	// (0x00091643) camera2_autofocus_pane_g5

0x0004,

0xf6a5,	// (0x0009b8c3) camera2_autofocus_pane_g_ParamLimits

0xf6a5,	// (0x0009b8c3) camera2_autofocus_pane_g

0x560a,	// (0x00091828) camera2_autofocus_pane_cp_g2

0x5612,	// (0x00091830) camera2_autofocus_pane_cp_g3

0x561a,	// (0x00091838) camera2_autofocus_pane_cp_g4

0x5622,	// (0x00091840) camera2_autofocus_pane_cp_g5

0x0004,

0xf70b,	// (0x0009b929) camera2_autofocus_pane_cp_g

0x5c81,	// (0x00091e9f) popup_dialer_spcha_window

0x0dba,	// (0x0008cfd8) bg_popup_sub_pane_cp07

0xb011,	// (0x0009722f) list_spcha_pane

0xb019,	// (0x00097237) list_single_spcha_pane_ParamLimits

0xb019,	// (0x00097237) list_single_spcha_pane

0x0dba,	// (0x0008cfd8) list_highlight_pane_cp06

0xb02a,	// (0x00097248) list_single_spcha_pane_t1

0xa114,	// (0x00096332) popup_call2_audio_out_window_g4_ParamLimits

0xa114,	// (0x00096332) popup_call2_audio_out_window_g4

0x0dba,	// (0x0008cfd8) main_imed2_pane

0xa6f3,	// (0x00096911) popup_imed_adjust2_window

0x47de,	// (0x000909fc) popup_imed_trans_window_ParamLimits

0x47de,	// (0x000909fc) popup_imed_trans_window

0xaa0f,	// (0x00096c2d) popup_blid_sat_info2_window_t1

0xaa1d,	// (0x00096c3b) popup_blid_sat_info2_window_t2

0x000a,

0xf63a,	// (0x0009b858) popup_blid_sat_info2_window_t

0x5ffe,	// (0x0009221c) aid_size_cell_colour_35

0x601e,	// (0x0009223c) aid_size_cell_colour_112

0x603e,	// (0x0009225c) aid_size_cell_effect

0xa6cb,	// (0x000968e9) bg_tb_trans_pane_cp02

0xe7f3,	// (0x0009aa11) heading_imed_pane

0x605e,	// (0x0009227c) listscroll_imed_pane

0xb038,	// (0x00097256) heading_imed_pane_g1

0xb040,	// (0x0009725e) heading_imed_pane_t1

0xb04e,	// (0x0009726c) grid_imed_colour_35_pane_ParamLimits

0xb04e,	// (0x0009726c) grid_imed_colour_35_pane

0x606a,	// (0x00092288) grid_imed_effect_pane

0xb065,	// (0x00097283) list_imed_aspect_pane

0x6080,	// (0x0009229e) scroll_pane_cp027_ParamLimits

0x6080,	// (0x0009229e) scroll_pane_cp027

0x6091,	// (0x000922af) cell_imed_effect_pane_ParamLimits

0x6091,	// (0x000922af) cell_imed_effect_pane

0xb06d,	// (0x0009728b) cell_imed_colour_pane_ParamLimits

0xb06d,	// (0x0009728b) cell_imed_colour_pane

0xb0af,	// (0x000972cd) cell_imed_colour_pane_g1_ParamLimits

0xb0af,	// (0x000972cd) cell_imed_colour_pane_g1

0xb0c0,	// (0x000972de) hgihlgiht_grid_pane_cp016_ParamLimits

0xb0c0,	// (0x000972de) hgihlgiht_grid_pane_cp016

0x60b8,	// (0x000922d6) cell_imed_effect_pane_g1

0x60c0,	// (0x000922de) grid_highlight_pane_cp017

0xb0d1,	// (0x000972ef) list_imed_single_pane_ParamLimits

0xb0d1,	// (0x000972ef) list_imed_single_pane

0x0dba,	// (0x0008cfd8) list_highlight_pane_cp07

0xb0e6,	// (0x00097304) list_imed_aspect_pane_comp1_t1

0xa6cb,	// (0x000968e9) bg_tb_trans_pane_cp05

0xb108,	// (0x00097326) popup_imed_adjust2_window_g1

0xb12f,	// (0x0009734d) popup_imed_adjust2_window_t1

0xb147,	// (0x00097365) slider_imed_adjust_pane

0xb15b,	// (0x00097379) slider_imed_adjust_pane_g1

0xb16b,	// (0x00097389) slider_imed_adjust_pane_g2

0xb17b,	// (0x00097399) slider_imed_adjust_pane_g3

0xb18c,	// (0x000973aa) slider_imed_adjust_pane_g4

0x0003,

0xf779,	// (0x0009b997) slider_imed_adjust_pane_g

0x60c9,	// (0x000922e7) aid_size_cell_clipart2

0x60d5,	// (0x000922f3) grid_imed_clipart_pane

0xb19d,	// (0x000973bb) scroll_pane_cp031

0x60df,	// (0x000922fd) cell_imed_clipart_pane_ParamLimits

0x60df,	// (0x000922fd) cell_imed_clipart_pane

0x6101,	// (0x0009231f) cell_imed_clipart_pane_g1

0x0dba,	// (0x0008cfd8) grid_highlight_pane_cp014

0x5dd7,	// (0x00091ff5) main_clock2_pane_g1_ParamLimits

0x5dd7,	// (0x00091ff5) main_clock2_pane_g1

0x5eff,	// (0x0009211d) aid_call2_pane_cp10

0x5f11,	// (0x0009212f) aid_call_pane_cp10

0xebe7,	// (0x0009ae05) popup_clock_analogue_window_cp10_g1

0xebe7,	// (0x0009ae05) popup_clock_analogue_window_cp10_g2

0x5f23,	// (0x00092141) popup_clock_analogue_window_cp10_g3

0x5f23,	// (0x00092141) popup_clock_analogue_window_cp10_g4

0xebe7,	// (0x0009ae05) popup_clock_analogue_window_cp10_g5

0x0004,

0xf767,	// (0x0009b985) popup_clock_analogue_window_cp10_g

0x5f35,	// (0x00092153) popup_clock_analogue_window_cp10_t1

0x5f66,	// (0x00092184) clock_digital_number_pane_cp10_ParamLimits

0x5f66,	// (0x00092184) clock_digital_number_pane_cp10

0x5f7e,	// (0x0009219c) clock_digital_number_pane_cp11_ParamLimits

0x5f7e,	// (0x0009219c) clock_digital_number_pane_cp11

0x5f96,	// (0x000921b4) clock_digital_number_pane_cp12_ParamLimits

0x5f96,	// (0x000921b4) clock_digital_number_pane_cp12

0x5fae,	// (0x000921cc) clock_digital_number_pane_cp13_ParamLimits

0x5fae,	// (0x000921cc) clock_digital_number_pane_cp13

0x5fc6,	// (0x000921e4) clock_digital_separator_pane_cp10_ParamLimits

0x5fc6,	// (0x000921e4) clock_digital_separator_pane_cp10

0x5fde,	// (0x000921fc) popup_clock_digital_window_cp02_t1_ParamLimits

0x5fde,	// (0x000921fc) popup_clock_digital_window_cp02_t1

0xe0f4,	// (0x0009a312) clock_digital_number_pane_cp10_g1

0xe0f4,	// (0x0009a312) clock_digital_number_pane_cp10_g2

0x0001,

0x056d,	// (0x0008c78b) clock_digital_number_pane_cp10_g

0xe0f4,	// (0x0009a312) clock_digital_separator_pane_cp10_g1

0xe0f4,	// (0x0009a312) clock_digital_separator_pane_g2_cp10

0xec82,	// (0x0009aea0) navi_pane_vded_g4

0xec8b,	// (0x0009aea9) navi_pane_vded_g5

0xec94,	// (0x0009aeb2) navi_pane_vded_t1

0x0dba,	// (0x0008cfd8) main_vded_pane

0x610a,	// (0x00092328) main_vded_pane_g1

0x6114,	// (0x00092332) main_vded_pane_g2

0x611e,	// (0x0009233c) main_vded_pane_g3

0x0002,

0xf782,	// (0x0009b9a0) main_vded_pane_g

0x6128,	// (0x00092346) main_vded_pane_t1

0x6136,	// (0x00092354) main_vded_pane_t2

0x0001,

0xf789,	// (0x0009b9a7) main_vded_pane_t

0x6144,	// (0x00092362) vded_slider_pane

0x614c,	// (0x0009236a) vded_video_pane

0xb1a5,	// (0x000973c3) vded_video_pane_g1

0x6154,	// (0x00092372) vded_video_pane_g2

0xabd1,	// (0x00096def) vded_video_pane_g3

0x0002,

0xf78e,	// (0x0009b9ac) vded_video_pane_g

0xb1af,	// (0x000973cd) vded_slider_pane_g1

0xa8e0,	// (0x00096afe) vded_slider_pane_g2

0xb1b8,	// (0x000973d6) vded_slider_pane_g3

0xb1c1,	// (0x000973df) vded_slider_pane_g4

0xb1ca,	// (0x000973e8) vded_slider_pane_g5

0x0004,

0xf795,	// (0x0009b9b3) vded_slider_pane_g

0x5b72,	// (0x00091d90) mup3_rocker_pane_ParamLimits

0x5b72,	// (0x00091d90) mup3_rocker_pane

0x615d,	// (0x0009237b) mup3_control_keys_pane_g1

0x6165,	// (0x00092383) mup3_control_keys_pane_g2

0x616d,	// (0x0009238b) mup3_control_keys_pane_g3

0x6175,	// (0x00092393) mup3_control_keys_pane_g4

0x0003,

0xf7a0,	// (0x0009b9be) mup3_control_keys_pane_g

0x0ff8,	// (0x0008d216) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ff8,	// (0x0008d216) popup_toolbar2_fixed_window_cp01

0x5ba6,	// (0x00091dc4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5ba6,	// (0x00091dc4) popup_toolbar2_fixed_window_cp02

0x3eaa,	// (0x000900c8) popup_call2_audio_second_window_t4_ParamLimits

0x3eaa,	// (0x000900c8) popup_call2_audio_second_window_t4

0x9f81,	// (0x0009619f) popup_call2_audio_first_window_t6_ParamLimits

0x9f81,	// (0x0009619f) popup_call2_audio_first_window_t6

0xa217,	// (0x00096435) popup_call2_audio_out_window_t6_ParamLimits

0xa217,	// (0x00096435) popup_call2_audio_out_window_t6

0x0dba,	// (0x0008cfd8) main_vitu_pane

0x6185,	// (0x000923a3) aid_size_cell_itu_ParamLimits

0x6185,	// (0x000923a3) aid_size_cell_itu

0xf009,	// (0x0009b227) bg_popup_window_pane_cp08_ParamLimits

0xf009,	// (0x0009b227) bg_popup_window_pane_cp08

0x619b,	// (0x000923b9) field_vitu_entry_pane_ParamLimits

0x619b,	// (0x000923b9) field_vitu_entry_pane

0x61b2,	// (0x000923d0) grid_vitu_function_pane_ParamLimits

0x61b2,	// (0x000923d0) grid_vitu_function_pane

0x61cd,	// (0x000923eb) grid_vitu_itu_pane_ParamLimits

0x61cd,	// (0x000923eb) grid_vitu_itu_pane

0x61eb,	// (0x00092409) cell_vitu_itu_pane_ParamLimits

0x61eb,	// (0x00092409) cell_vitu_itu_pane

0x620d,	// (0x0009242b) cell_vitu_function_pane_ParamLimits

0x620d,	// (0x0009242b) cell_vitu_function_pane

0xf009,	// (0x0009b227) bg_popup_sub_pane_cp08_ParamLimits

0xf009,	// (0x0009b227) bg_popup_sub_pane_cp08

0x6226,	// (0x00092444) field_vitu_entry_pane_t1_ParamLimits

0x6226,	// (0x00092444) field_vitu_entry_pane_t1

0xb1eb,	// (0x00097409) field_vitu_entry_pane_t2_ParamLimits

0xb1eb,	// (0x00097409) field_vitu_entry_pane_t2

0x0001,

0xf7ae,	// (0x0009b9cc) field_vitu_entry_pane_t_ParamLimits

0xf7ae,	// (0x0009b9cc) field_vitu_entry_pane_t

0xb208,	// (0x00097426) bg_button_pane_cp05_ParamLimits

0xb208,	// (0x00097426) bg_button_pane_cp05

0x6244,	// (0x00092462) cell_vitu_itu_pane_g1

0x625c,	// (0x0009247a) cell_vitu_itu_pane_t1_ParamLimits

0x625c,	// (0x0009247a) cell_vitu_itu_pane_t1

0x626e,	// (0x0009248c) cell_vitu_itu_pane_t2_ParamLimits

0x626e,	// (0x0009248c) cell_vitu_itu_pane_t2

0x0002,

0xf7b3,	// (0x0009b9d1) cell_vitu_itu_pane_t_ParamLimits

0xf7b3,	// (0x0009b9d1) cell_vitu_itu_pane_t

0xb216,	// (0x00097434) bg_button_pane_cp07

0x62a3,	// (0x000924c1) cell_vitu_function_pane_g1

0x9d60,	// (0x00095f7e) main_calc_pane_g1

0x0dfc,	// (0x0008d01a) aid_visual_content_pane

0x0dba,	// (0x0008cfd8) main_vradio_pane

0x62ac,	// (0x000924ca) main_vradio_pane_g1_ParamLimits

0x62ac,	// (0x000924ca) main_vradio_pane_g1

0xb220,	// (0x0009743e) main_vradio_pane_g2_ParamLimits

0xb220,	// (0x0009743e) main_vradio_pane_g2

0x0001,

0xf7ba,	// (0x0009b9d8) main_vradio_pane_g_ParamLimits

0xf7ba,	// (0x0009b9d8) main_vradio_pane_g

0x62c5,	// (0x000924e3) main_vradio_pane_t1_ParamLimits

0x62c5,	// (0x000924e3) main_vradio_pane_t1

0x62da,	// (0x000924f8) main_vradio_pane_t2_ParamLimits

0x62da,	// (0x000924f8) main_vradio_pane_t2

0xb22d,	// (0x0009744b) main_vradio_pane_t3_ParamLimits

0xb22d,	// (0x0009744b) main_vradio_pane_t3

0x0002,

0xf7bf,	// (0x0009b9dd) main_vradio_pane_t_ParamLimits

0xf7bf,	// (0x0009b9dd) main_vradio_pane_t

0x62ef,	// (0x0009250d) vradio_rocker_control_pane_ParamLimits

0x62ef,	// (0x0009250d) vradio_rocker_control_pane

0x6301,	// (0x0009251f) vradio_station_info_pane_ParamLimits

0x6301,	// (0x0009251f) vradio_station_info_pane

0xb241,	// (0x0009745f) vradio_frequency_info_pane_ParamLimits

0xb241,	// (0x0009745f) vradio_frequency_info_pane

0xabd1,	// (0x00096def) vradio_station_info_pane_g1

0xb250,	// (0x0009746e) vradio_station_info_pane_t1_ParamLimits

0xb250,	// (0x0009746e) vradio_station_info_pane_t1

0xb272,	// (0x00097490) vradio_station_info_pane_t2_ParamLimits

0xb272,	// (0x00097490) vradio_station_info_pane_t2

0x0001,

0xf7c6,	// (0x0009b9e4) vradio_station_info_pane_t_ParamLimits

0xf7c6,	// (0x0009b9e4) vradio_station_info_pane_t

0xb284,	// (0x000974a2) vradio_tuning_pane

0xb28c,	// (0x000974aa) vradio_rocker_control_pane_g1

0xb294,	// (0x000974b2) vradio_rocker_control_pane_g2

0xb29c,	// (0x000974ba) vradio_rocker_control_pane_g3

0xb2a4,	// (0x000974c2) vradio_rocker_control_pane_g4

0xb2ac,	// (0x000974ca) vradio_rocker_control_pane_g5

0x0004,

0xf7cb,	// (0x0009b9e9) vradio_rocker_control_pane_g

0x6313,	// (0x00092531) vradio_frequency_info_pane_g1

0xb2b4,	// (0x000974d2) vradio_frequency_info_pane_t1_ParamLimits

0xb2b4,	// (0x000974d2) vradio_frequency_info_pane_t1

0x631d,	// (0x0009253b) vradio_tuning_pane_g1

0x6328,	// (0x00092546) vradio_tuning_pane_t1

0x0e59,	// (0x0008d077) area_side_right_pane_ParamLimits

0x0e59,	// (0x0008d077) area_side_right_pane

0xa692,	// (0x000968b0) status_small_pane_g1

0xa69a,	// (0x000968b8) status_small_pane_g2

0xa6a3,	// (0x000968c1) status_small_pane_g3

0xa6ac,	// (0x000968ca) status_small_pane_g4

0x0003,

0xf590,	// (0x0009b7ae) status_small_pane_g

0xa6b5,	// (0x000968d3) status_small_pane_t1

0x0dba,	// (0x0008cfd8) main_video3_pane

0xb2c8,	// (0x000974e6) cams_zoom_vslider_pane

0xb2d0,	// (0x000974ee) image3_wide_pane_ParamLimits

0xb2d0,	// (0x000974ee) image3_wide_pane

0xb2ea,	// (0x00097508) image3_wide_small_pane

0xb2f6,	// (0x00097514) main_video3_pane_g1_ParamLimits

0xb2f6,	// (0x00097514) main_video3_pane_g1

0xb312,	// (0x00097530) main_video3_pane_g2_ParamLimits

0xb312,	// (0x00097530) main_video3_pane_g2

0x0001,

0xf7d6,	// (0x0009b9f4) main_video3_pane_g_ParamLimits

0xf7d6,	// (0x0009b9f4) main_video3_pane_g

0xb32e,	// (0x0009754c) main_video3_pane_t1_ParamLimits

0xb32e,	// (0x0009754c) main_video3_pane_t1

0xb359,	// (0x00097577) main_video3_pane_t2_ParamLimits

0xb359,	// (0x00097577) main_video3_pane_t2

0xb384,	// (0x000975a2) main_video3_pane_t3_ParamLimits

0xb384,	// (0x000975a2) main_video3_pane_t3

0x0002,

0xf7db,	// (0x0009b9f9) main_video3_pane_t_ParamLimits

0xf7db,	// (0x0009b9f9) main_video3_pane_t

0xb3b1,	// (0x000975cf) cams_zoom_vslider_pane_g1

0xb3ba,	// (0x000975d8) cams_zoom_vslider_pane_g2

0x0001,

0xf7e2,	// (0x0009ba00) cams_zoom_vslider_pane_g

0xb3c2,	// (0x000975e0) small_slider_vertical_pane

0xabd1,	// (0x00096def) small_slider_vertical_pane_g1

0xabd1,	// (0x00096def) small_slider_vertical_pane_g2

0xb3ca,	// (0x000975e8) small_slider_vertical_pane_g3

0x0002,

0xf7e7,	// (0x0009ba05) small_slider_vertical_pane_g

0x0dba,	// (0x0008cfd8) main_hwr_training_pane

0xb3d3,	// (0x000975f1) hwr_training_instruct_pane_ParamLimits

0xb3d3,	// (0x000975f1) hwr_training_instruct_pane

0x6337,	// (0x00092555) hwr_training_navi_pane_ParamLimits

0x6337,	// (0x00092555) hwr_training_navi_pane

0x6356,	// (0x00092574) hwr_training_write_pane_ParamLimits

0x6356,	// (0x00092574) hwr_training_write_pane

0x0dba,	// (0x0008cfd8) bg_frame_shadow_pane

0xb40a,	// (0x00097628) hwr_training_write_pane_g1

0xb412,	// (0x00097630) hwr_training_write_pane_g2

0xb41a,	// (0x00097638) hwr_training_write_pane_g3

0xb422,	// (0x00097640) hwr_training_write_pane_g4

0xb42a,	// (0x00097648) hwr_training_write_pane_g5

0xb432,	// (0x00097650) hwr_training_write_pane_g6

0xb43a,	// (0x00097658) hwr_training_write_pane_g7

0x0006,

0xf7ee,	// (0x0009ba0c) hwr_training_write_pane_g

0xd61f,	// (0x0009983d) hwr_training_navi_pane_g1_ParamLimits

0xd61f,	// (0x0009983d) hwr_training_navi_pane_g1

0xd631,	// (0x0009984f) hwr_training_navi_pane_g2_ParamLimits

0xd631,	// (0x0009984f) hwr_training_navi_pane_g2

0xd643,	// (0x00099861) hwr_training_navi_pane_g3_ParamLimits

0xd643,	// (0x00099861) hwr_training_navi_pane_g3

0xd653,	// (0x00099871) hwr_training_navi_pane_g4_ParamLimits

0xd653,	// (0x00099871) hwr_training_navi_pane_g4

0x0004,

0xf7fd,	// (0x0009ba1b) hwr_training_navi_pane_g_ParamLimits

0xf7fd,	// (0x0009ba1b) hwr_training_navi_pane_g

0xd660,	// (0x0009987e) hwr_training_navi_pane_t1

0x639e,	// (0x000925bc) list_single_hwr_training_instruct_pane_ParamLimits

0x639e,	// (0x000925bc) list_single_hwr_training_instruct_pane

0xb442,	// (0x00097660) list_single_hwr_training_instruct_pane_t1

0xab11,	// (0x00096d2f) bg_frame_shadow_pane_g1

0xb451,	// (0x0009766f) bg_frame_shadow_pane_g2

0xb459,	// (0x00097677) bg_frame_shadow_pane_g3

0xb461,	// (0x0009767f) bg_frame_shadow_pane_g4

0xb469,	// (0x00097687) bg_frame_shadow_pane_g5

0xb471,	// (0x0009768f) bg_frame_shadow_pane_g6

0xb479,	// (0x00097697) bg_frame_shadow_pane_g7

0xe28c,	// (0x0009a4aa) bg_frame_shadow_pane_g8

0x0007,

0xf808,	// (0x0009ba26) bg_frame_shadow_pane_g

0x0dba,	// (0x0008cfd8) main_video_tele_dialer_pane

0x63b3,	// (0x000925d1) aid_size_cell_video_keypad_ParamLimits

0x63b3,	// (0x000925d1) aid_size_cell_video_keypad

0x63cd,	// (0x000925eb) grid_video_dialer_keypad_pane_ParamLimits

0x63cd,	// (0x000925eb) grid_video_dialer_keypad_pane

0x6417,	// (0x00092635) video_down_pane_cp_ParamLimits

0x6417,	// (0x00092635) video_down_pane_cp

0x6427,	// (0x00092645) cell_video_dialer_keypad_pane_ParamLimits

0x6427,	// (0x00092645) cell_video_dialer_keypad_pane

0xb49d,	// (0x000976bb) bg_button_pane_cp08_ParamLimits

0xb49d,	// (0x000976bb) bg_button_pane_cp08

0x6449,	// (0x00092667) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6449,	// (0x00092667) cell_video_dialer_keypad_pane_g1

0x5b5c,	// (0x00091d7a) mup3_rocker2_pane_ParamLimits

0x5b5c,	// (0x00091d7a) mup3_rocker2_pane

0xabd1,	// (0x00096def) mup3_rocker2_pane_g1

0x46bf,	// (0x000908dd) main_dialer2_pane

0x0dba,	// (0x0008cfd8) main_mp4_pane

0xd676,	// (0x00099894) main_mp4_pane_g1_ParamLimits

0xd676,	// (0x00099894) main_mp4_pane_g1

0xd676,	// (0x00099894) main_mp4_pane_g2_ParamLimits

0xd676,	// (0x00099894) main_mp4_pane_g2

0x6483,	// (0x000926a1) main_mp4_pane_g3_ParamLimits

0x6483,	// (0x000926a1) main_mp4_pane_g3

0xd684,	// (0x000998a2) main_mp4_pane_g4_ParamLimits

0xd684,	// (0x000998a2) main_mp4_pane_g4

0xd6ac,	// (0x000998ca) main_mp4_pane_g5_ParamLimits

0xd6ac,	// (0x000998ca) main_mp4_pane_g5

0x0005,

0xf828,	// (0x0009ba46) main_mp4_pane_g_ParamLimits

0xf828,	// (0x0009ba46) main_mp4_pane_g

0xd6fc,	// (0x0009991a) main_mp4_pane_t1_ParamLimits

0xd6fc,	// (0x0009991a) main_mp4_pane_t1

0xd758,	// (0x00099976) main_mp4_pane_t2_ParamLimits

0xd758,	// (0x00099976) main_mp4_pane_t2

0xb4a9,	// (0x000976c7) main_mp4_pane_t3_ParamLimits

0xb4a9,	// (0x000976c7) main_mp4_pane_t3

0xd7aa,	// (0x000999c8) main_mp4_pane_t4_ParamLimits

0xd7aa,	// (0x000999c8) main_mp4_pane_t4

0x0003,

0xf835,	// (0x0009ba53) main_mp4_pane_t_ParamLimits

0xf835,	// (0x0009ba53) main_mp4_pane_t

0xd7ee,	// (0x00099a0c) mp4_progress_pane_ParamLimits

0xd7ee,	// (0x00099a0c) mp4_progress_pane

0xd838,	// (0x00099a56) mp4_rocker_pane_ParamLimits

0xd838,	// (0x00099a56) mp4_rocker_pane

0xb4d1,	// (0x000976ef) mp4_progress_pane_t1

0xb4ea,	// (0x00097708) mp4_progress_pane_t2

0x0001,

0xf83e,	// (0x0009ba5c) mp4_progress_pane_t

0xb503,	// (0x00097721) mup_progress_pane_cp04

0xb50f,	// (0x0009772d) mp4_rocker_pane_g1

0x64bf,	// (0x000926dd) aid_cell_size_keypad2_ParamLimits

0x64bf,	// (0x000926dd) aid_cell_size_keypad2

0x64d5,	// (0x000926f3) dialer2_ne_pane_ParamLimits

0x64d5,	// (0x000926f3) dialer2_ne_pane

0x64ef,	// (0x0009270d) grid_dialer2_keypad_pane_ParamLimits

0x64ef,	// (0x0009270d) grid_dialer2_keypad_pane

0xa9b6,	// (0x00096bd4) bg_popup_call_pane_cp07_ParamLimits

0xa9b6,	// (0x00096bd4) bg_popup_call_pane_cp07

0x650b,	// (0x00092729) dialer2_ne_pane_t1_ParamLimits

0x650b,	// (0x00092729) dialer2_ne_pane_t1

0x6546,	// (0x00092764) cell_dialer2_keypad_pane_ParamLimits

0x6546,	// (0x00092764) cell_dialer2_keypad_pane

0xb52b,	// (0x00097749) bg_button_pane_pane_cp04_ParamLimits

0xb52b,	// (0x00097749) bg_button_pane_pane_cp04

0x6568,	// (0x00092786) cell_dialer2_keypad_pane_g1_ParamLimits

0x6568,	// (0x00092786) cell_dialer2_keypad_pane_g1

0x1dbc,	// (0x0008dfda) aid_placing_vt_set_content_ParamLimits

0x1dbc,	// (0x0008dfda) aid_placing_vt_set_content

0x1de2,	// (0x0008e000) aid_placing_vt_set_title_ParamLimits

0x1de2,	// (0x0008e000) aid_placing_vt_set_title

0x0dba,	// (0x0008cfd8) main_image3_pane

0x662e,	// (0x0009284c) area_side_right_pane_cp01_ParamLimits

0x662e,	// (0x0009284c) area_side_right_pane_cp01

0xd676,	// (0x00099894) main_image3_pane_g1_ParamLimits

0xd676,	// (0x00099894) main_image3_pane_g1

0x6645,	// (0x00092863) main_image3_pane_g2_ParamLimits

0x6645,	// (0x00092863) main_image3_pane_g2

0x666d,	// (0x0009288b) main_image3_pane_g3_ParamLimits

0x666d,	// (0x0009288b) main_image3_pane_g3

0x6697,	// (0x000928b5) main_image3_pane_g4_ParamLimits

0x6697,	// (0x000928b5) main_image3_pane_g4

0x0003,

0xf84d,	// (0x0009ba6b) main_image3_pane_g_ParamLimits

0xf84d,	// (0x0009ba6b) main_image3_pane_g

0x66c1,	// (0x000928df) main_image3_pane_t1_ParamLimits

0x66c1,	// (0x000928df) main_image3_pane_t1

0x6719,	// (0x00092937) main_image3_pane_t2_ParamLimits

0x6719,	// (0x00092937) main_image3_pane_t2

0x676b,	// (0x00092989) main_image3_pane_t3_ParamLimits

0x676b,	// (0x00092989) main_image3_pane_t3

0x0003,

0xf856,	// (0x0009ba74) main_image3_pane_t_ParamLimits

0xf856,	// (0x0009ba74) main_image3_pane_t

0xf009,	// (0x0009b227) grid_sctrl_middle_pane_cp01_ParamLimits

0xf009,	// (0x0009b227) grid_sctrl_middle_pane_cp01

0x67f3,	// (0x00092a11) cell_sctrl_middle_pane_cp01_ParamLimits

0x67f3,	// (0x00092a11) cell_sctrl_middle_pane_cp01

0x6810,	// (0x00092a2e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6810,	// (0x00092a2e) cell_sctrl_middle_pane_cp01_g1

0x0dba,	// (0x0008cfd8) main_call4_pane

0x6826,	// (0x00092a44) aid_size_button_call4_ParamLimits

0x6826,	// (0x00092a44) aid_size_button_call4

0x6857,	// (0x00092a75) call4_windows_pane_ParamLimits

0x6857,	// (0x00092a75) call4_windows_pane

0x6877,	// (0x00092a95) grid_call4_button_pane_ParamLimits

0x6877,	// (0x00092a95) grid_call4_button_pane

0xb537,	// (0x00097755) call4_windows_conf_pane

0xb54e,	// (0x0009776c) popup_call4_audio_first_window_ParamLimits

0xb54e,	// (0x0009776c) popup_call4_audio_first_window

0xb59a,	// (0x000977b8) popup_call4_audio_second_window_ParamLimits

0xb59a,	// (0x000977b8) popup_call4_audio_second_window

0xb5ae,	// (0x000977cc) popup_call4_audio_wait_window_ParamLimits

0xb5ae,	// (0x000977cc) popup_call4_audio_wait_window

0x68a4,	// (0x00092ac2) cell_call4_button_pane_ParamLimits

0x68a4,	// (0x00092ac2) cell_call4_button_pane

0x68cd,	// (0x00092aeb) bg_button_pane_cp09_ParamLimits

0x68cd,	// (0x00092aeb) bg_button_pane_cp09

0x68d9,	// (0x00092af7) cell_call4_button_pane_g1_ParamLimits

0x68d9,	// (0x00092af7) cell_call4_button_pane_g1

0x68ff,	// (0x00092b1d) cell_call4_button_pane_t1_ParamLimits

0x68ff,	// (0x00092b1d) cell_call4_button_pane_t1

0xb5f6,	// (0x00097814) popup_call4_audio_conf_window_ParamLimits

0xb5f6,	// (0x00097814) popup_call4_audio_conf_window

0x5bbc,	// (0x00091dda) mup3_progress_pane_t1_ParamLimits

0x5bd3,	// (0x00091df1) mup3_progress_pane_t2_ParamLimits

0xaef0,	// (0x0009710e) mup3_progress_pane_t3_ParamLimits

0xf734,	// (0x0009b952) mup3_progress_pane_t_ParamLimits

0xaf07,	// (0x00097125) mup_progress_pane_cp03_ParamLimits

0x617d,	// (0x0009239b) mup3_control_keys_pane_g4_copy1

0xd81c,	// (0x00099a3a) mp4_rocker2_pane_ParamLimits

0xd81c,	// (0x00099a3a) mp4_rocker2_pane

0xb60a,	// (0x00097828) mp4_rocker2_pane_g1

0xb612,	// (0x00097830) mp4_rocker2_pane_g2

0xd88a,	// (0x00099aa8) mp4_rocker2_pane_g3

0xd892,	// (0x00099ab0) mp4_rocker2_pane_g4

0xd89a,	// (0x00099ab8) mp4_rocker2_pane_g5

0x0004,

0xf85f,	// (0x0009ba7d) mp4_rocker2_pane_g

0x0dba,	// (0x0008cfd8) main_camera4_pane

0x0dba,	// (0x0008cfd8) main_video4_pane

0x63e5,	// (0x00092603) main_video_tele_dialer_pane_t1_ParamLimits

0x63e5,	// (0x00092603) main_video_tele_dialer_pane_t1

0x63fe,	// (0x0009261c) main_video_tele_dialer_pane_t2_ParamLimits

0x63fe,	// (0x0009261c) main_video_tele_dialer_pane_t2

0x0001,

0xf819,	// (0x0009ba37) main_video_tele_dialer_pane_t_ParamLimits

0xf819,	// (0x0009ba37) main_video_tele_dialer_pane_t

0x693d,	// (0x00092b5b) cam4_autofocus_pane_ParamLimits

0x693d,	// (0x00092b5b) cam4_autofocus_pane

0x6953,	// (0x00092b71) cam4_image_uncrop_pane_ParamLimits

0x6953,	// (0x00092b71) cam4_image_uncrop_pane

0x696d,	// (0x00092b8b) cam4_indicators_pane_ParamLimits

0x696d,	// (0x00092b8b) cam4_indicators_pane

0x6998,	// (0x00092bb6) main_camera4_pane_g1_ParamLimits

0x6998,	// (0x00092bb6) main_camera4_pane_g1

0x69ab,	// (0x00092bc9) main_camera4_pane_g2_ParamLimits

0x69ab,	// (0x00092bc9) main_camera4_pane_g2

0x69be,	// (0x00092bdc) main_camera4_pane_g3_ParamLimits

0x69be,	// (0x00092bdc) main_camera4_pane_g3

0x69d1,	// (0x00092bef) main_camera4_pane_g4_ParamLimits

0x69d1,	// (0x00092bef) main_camera4_pane_g4

0x69e4,	// (0x00092c02) main_camera4_pane_g5_ParamLimits

0x69e4,	// (0x00092c02) main_camera4_pane_g5

0x0005,

0xf86a,	// (0x0009ba88) main_camera4_pane_g_ParamLimits

0xf86a,	// (0x0009ba88) main_camera4_pane_g

0x6a08,	// (0x00092c26) main_camera4_pane_t1_ParamLimits

0x6a08,	// (0x00092c26) main_camera4_pane_t1

0xd8be,	// (0x00099adc) bg_tb_trans_pane_cp06

0xd8d4,	// (0x00099af2) cam4_indicators_pane_g1

0xd8e5,	// (0x00099b03) cam4_indicators_pane_g2

0x0002,

0xf885,	// (0x0009baa3) cam4_indicators_pane_g

0xd903,	// (0x00099b21) cam4_indicators_pane_t1

0x6a6c,	// (0x00092c8a) main_video4_pane_g1_ParamLimits

0x6a6c,	// (0x00092c8a) main_video4_pane_g1

0x6a7f,	// (0x00092c9d) main_video4_pane_g2_ParamLimits

0x6a7f,	// (0x00092c9d) main_video4_pane_g2

0x6a93,	// (0x00092cb1) main_video4_pane_g3_ParamLimits

0x6a93,	// (0x00092cb1) main_video4_pane_g3

0x6aa7,	// (0x00092cc5) main_video4_pane_g4_ParamLimits

0x6aa7,	// (0x00092cc5) main_video4_pane_g4

0x0004,

0xf88c,	// (0x0009baaa) main_video4_pane_g_ParamLimits

0xf88c,	// (0x0009baaa) main_video4_pane_g

0x6acf,	// (0x00092ced) vid4_indicators_pane_ParamLimits

0x6acf,	// (0x00092ced) vid4_indicators_pane

0x6aff,	// (0x00092d1d) video4_image_uncrop_cif_pane_ParamLimits

0x6aff,	// (0x00092d1d) video4_image_uncrop_cif_pane

0x6b19,	// (0x00092d37) video4_image_uncrop_nhd_pane_ParamLimits

0x6b19,	// (0x00092d37) video4_image_uncrop_nhd_pane

0x6953,	// (0x00092b71) video4_image_uncrop_vga_pane_ParamLimits

0x6953,	// (0x00092b71) video4_image_uncrop_vga_pane

0xd925,	// (0x00099b43) bg_tb_trans_pane_cp07

0x6b2d,	// (0x00092d4b) vid4_indicators_pane_g1

0x6b3a,	// (0x00092d58) vid4_indicators_pane_g2

0x6b47,	// (0x00092d65) vid4_indicators_pane_g3

0x0004,

0xf897,	// (0x0009bab5) vid4_indicators_pane_g

0x6b6c,	// (0x00092d8a) vid4_indicators_pane_t1

0x6b7e,	// (0x00092d9c) cam4_autofocus_pane_g1

0x6b86,	// (0x00092da4) cam4_autofocus_pane_g2

0x6b8e,	// (0x00092dac) cam4_autofocus_pane_g3

0x0002,

0xf8a2,	// (0x0009bac0) cam4_autofocus_pane_g

0x6b96,	// (0x00092db4) cam4_autofocus_pane_g3_copy1

0xb481,	// (0x0009769f) video_down_pane_cp_t1

0xb48f,	// (0x000976ad) video_down_pane_cp_t2

0x0001,

0xf81e,	// (0x0009ba3c) video_down_pane_cp_t

0xf009,	// (0x0009b227) popup_vitu2_window_ParamLimits

0xf009,	// (0x0009b227) popup_vitu2_window

0x6b9e,	// (0x00092dbc) aid_size_cell2_itu2_ParamLimits

0x6b9e,	// (0x00092dbc) aid_size_cell2_itu2

0x6bc4,	// (0x00092de2) aid_size_cell_itu2_ParamLimits

0x6bc4,	// (0x00092de2) aid_size_cell_itu2

0x6c20,	// (0x00092e3e) bg_popup_window_pane_cp09_ParamLimits

0x6c20,	// (0x00092e3e) bg_popup_window_pane_cp09

0x6c2e,	// (0x00092e4c) field_vitu2_entry_pane_ParamLimits

0x6c2e,	// (0x00092e4c) field_vitu2_entry_pane

0x6c54,	// (0x00092e72) grid_vitu2_function_pane_ParamLimits

0x6c54,	// (0x00092e72) grid_vitu2_function_pane

0x6ca5,	// (0x00092ec3) grid_vitu2_itu_pane_ParamLimits

0x6ca5,	// (0x00092ec3) grid_vitu2_itu_pane

0x6d38,	// (0x00092f56) cell_vitu2_itu_pane_ParamLimits

0x6d38,	// (0x00092f56) cell_vitu2_itu_pane

0x6d5c,	// (0x00092f7a) cell_vitu2_function_pane_ParamLimits

0x6d5c,	// (0x00092f7a) cell_vitu2_function_pane

0xb62c,	// (0x0009784a) bg_popup_call_pane_cp08_ParamLimits

0xb62c,	// (0x0009784a) bg_popup_call_pane_cp08

0xb645,	// (0x00097863) field_vitu2_entry_pane_g1

0xb651,	// (0x0009786f) field_vitu2_entry_pane_g2

0x0002,

0xf8a9,	// (0x0009bac7) field_vitu2_entry_pane_g

0xb66b,	// (0x00097889) field_vitu2_entry_pane_t1_ParamLimits

0xb66b,	// (0x00097889) field_vitu2_entry_pane_t1

0xb69a,	// (0x000978b8) field_vitu2_entry_pane_t2_ParamLimits

0xb69a,	// (0x000978b8) field_vitu2_entry_pane_t2

0x0001,

0xf8b0,	// (0x0009bace) field_vitu2_entry_pane_t_ParamLimits

0xf8b0,	// (0x0009bace) field_vitu2_entry_pane_t

0x6d9b,	// (0x00092fb9) bg_button_pane_cp010_ParamLimits

0x6d9b,	// (0x00092fb9) bg_button_pane_cp010

0x6da9,	// (0x00092fc7) cell_vitu2_itu_pane_g1

0x6dc7,	// (0x00092fe5) cell_vitu2_itu_pane_t1_ParamLimits

0x6dc7,	// (0x00092fe5) cell_vitu2_itu_pane_t1

0x0cc6,	// (0x0008cee4) cell_vitu2_itu_pane_t2_ParamLimits

0x0cc6,	// (0x0008cee4) cell_vitu2_itu_pane_t2

0x0002,

0xf8ba,	// (0x0009bad8) cell_vitu2_itu_pane_t_ParamLimits

0xf8ba,	// (0x0009bad8) cell_vitu2_itu_pane_t

0xd93d,	// (0x00099b5b) bg_button_pane_cp011

0x6e2d,	// (0x0009304b) cell_vitu2_function_pane_g1

0x0dba,	// (0x0008cfd8) main_myfav_hc_pane

0x67bb,	// (0x000929d9) popup_image3_note_pane_ParamLimits

0x67bb,	// (0x000929d9) popup_image3_note_pane

0x67d7,	// (0x000929f5) popup_image3_tool_bar_pane_ParamLimits

0x67d7,	// (0x000929f5) popup_image3_tool_bar_pane

0x0d4a,	// (0x0008cf68) cell_vitu2_itu_pane_t3_ParamLimits

0x0d4a,	// (0x0008cf68) cell_vitu2_itu_pane_t3

0x0dba,	// (0x0008cfd8) bg_popup_trans_pane

0xb6bf,	// (0x000978dd) grid_image3_tool_bar_pane

0xb6c9,	// (0x000978e7) bg_popup_trans_pane_g1

0xe5c7,	// (0x0009a7e5) bg_popup_trans_pane_g2

0xb6d1,	// (0x000978ef) bg_popup_trans_pane_g3

0xb6d9,	// (0x000978f7) bg_popup_trans_pane_g4

0xb6e1,	// (0x000978ff) bg_popup_trans_pane_g5

0xb6e9,	// (0x00097907) bg_popup_trans_pane_g6

0xb6f1,	// (0x0009790f) bg_popup_trans_pane_g7

0xb6f9,	// (0x00097917) bg_popup_trans_pane_g8

0xe5a7,	// (0x0009a7c5) bg_popup_trans_pane_g9

0x0008,

0xf8c1,	// (0x0009badf) bg_popup_trans_pane_g

0xb701,	// (0x0009791f) cell_image3_tool_bar_pane_ParamLimits

0xb701,	// (0x0009791f) cell_image3_tool_bar_pane

0xabd1,	// (0x00096def) cell_image3_tool_bar_pane_g1

0x0dba,	// (0x0008cfd8) bg_popup_trans_pane_cp1

0xb715,	// (0x00097933) popup_image3_note_pane_t1

0xb723,	// (0x00097941) popup_image3_note_pane_t2

0xb731,	// (0x0009794f) popup_image3_note_pane_t3

0x0002,

0xf8d4,	// (0x0009baf2) popup_image3_note_pane_t

0xb73f,	// (0x0009795d) popup_image3_note_pane_t3_copy1

0x6e41,	// (0x0009305f) bg_myfav_hc_instruction_pane_ParamLimits

0x6e41,	// (0x0009305f) bg_myfav_hc_instruction_pane

0x6e55,	// (0x00093073) cell_myfav_contact_pane_ParamLimits

0x6e55,	// (0x00093073) cell_myfav_contact_pane

0x6e73,	// (0x00093091) cell_myfav_contact_pane_cp1_ParamLimits

0x6e73,	// (0x00093091) cell_myfav_contact_pane_cp1

0x6e8b,	// (0x000930a9) cell_myfav_contact_pane_cp2_ParamLimits

0x6e8b,	// (0x000930a9) cell_myfav_contact_pane_cp2

0x6ea3,	// (0x000930c1) cell_myfav_contact_pane_cp3_ParamLimits

0x6ea3,	// (0x000930c1) cell_myfav_contact_pane_cp3

0x6eba,	// (0x000930d8) cell_myfav_contact_pane_cp4_ParamLimits

0x6eba,	// (0x000930d8) cell_myfav_contact_pane_cp4

0x6ed2,	// (0x000930f0) cell_myfav_contact_pane_cp5_ParamLimits

0x6ed2,	// (0x000930f0) cell_myfav_contact_pane_cp5

0x6ee6,	// (0x00093104) cell_myfav_contact_pane_cp6_ParamLimits

0x6ee6,	// (0x00093104) cell_myfav_contact_pane_cp6

0x6efc,	// (0x0009311a) cell_myfav_contact_pane_cp7_ParamLimits

0x6efc,	// (0x0009311a) cell_myfav_contact_pane_cp7

0xb74d,	// (0x0009796b) listscroll_gen_pane_cp05

0x6f16,	// (0x00093134) main_myfav_hc_pane_g1_ParamLimits

0x6f16,	// (0x00093134) main_myfav_hc_pane_g1

0x6f30,	// (0x0009314e) main_myfav_hc_pane_g2_ParamLimits

0x6f30,	// (0x0009314e) main_myfav_hc_pane_g2

0x0002,

0xf8db,	// (0x0009baf9) main_myfav_hc_pane_g_ParamLimits

0xf8db,	// (0x0009baf9) main_myfav_hc_pane_g

0x6f62,	// (0x00093180) main_myfav_hc_pane_t1_ParamLimits

0x6f62,	// (0x00093180) main_myfav_hc_pane_t1

0xb756,	// (0x00097974) main_myfav_hc_pane_t2_ParamLimits

0xb756,	// (0x00097974) main_myfav_hc_pane_t2

0xb768,	// (0x00097986) main_myfav_hc_pane_t3_ParamLimits

0xb768,	// (0x00097986) main_myfav_hc_pane_t3

0x6f79,	// (0x00093197) main_myfav_hc_pane_t4_ParamLimits

0x6f79,	// (0x00093197) main_myfav_hc_pane_t4

0x0004,

0xf8e2,	// (0x0009bb00) main_myfav_hc_pane_t_ParamLimits

0xf8e2,	// (0x0009bb00) main_myfav_hc_pane_t

0xabd1,	// (0x00096def) bg_myfav_hc_instruction_pane_g1

0xb77a,	// (0x00097998) cell_myfav_contact_pane_g1_ParamLimits

0xb77a,	// (0x00097998) cell_myfav_contact_pane_g1

0xb77a,	// (0x00097998) cell_myfav_contact_pane_g2_ParamLimits

0xb77a,	// (0x00097998) cell_myfav_contact_pane_g2

0xb786,	// (0x000979a4) cell_myfav_contact_pane_g3_ParamLimits

0xb786,	// (0x000979a4) cell_myfav_contact_pane_g3

0xaeda,	// (0x000970f8) cell_myfav_contact_pane_g4_ParamLimits

0xaeda,	// (0x000970f8) cell_myfav_contact_pane_g4

0xb793,	// (0x000979b1) cell_myfav_contact_pane_g5_ParamLimits

0xb793,	// (0x000979b1) cell_myfav_contact_pane_g5

0x0004,

0xf8ed,	// (0x0009bb0b) cell_myfav_contact_pane_g_ParamLimits

0xf8ed,	// (0x0009bb0b) cell_myfav_contact_pane_g

0x6f4a,	// (0x00093168) main_myfav_hc_pane_g3_ParamLimits

0x6f4a,	// (0x00093168) main_myfav_hc_pane_g3

0x0f5a,	// (0x0008d178) popup_adpt_find_window

0x6fa1,	// (0x000931bf) afind_page_pane_ParamLimits

0x6fa1,	// (0x000931bf) afind_page_pane

0x6fb6,	// (0x000931d4) aid_size_cell_afind_ParamLimits

0x6fb6,	// (0x000931d4) aid_size_cell_afind

0x6fd4,	// (0x000931f2) bg_popup_sub_pane_cp09_ParamLimits

0x6fd4,	// (0x000931f2) bg_popup_sub_pane_cp09

0x6fe1,	// (0x000931ff) find_pane_cp01_ParamLimits

0x6fe1,	// (0x000931ff) find_pane_cp01

0xb79f,	// (0x000979bd) grid_afind_control_pane_ParamLimits

0xb79f,	// (0x000979bd) grid_afind_control_pane

0x6fee,	// (0x0009320c) grid_afind_pane_ParamLimits

0x6fee,	// (0x0009320c) grid_afind_pane

0x7010,	// (0x0009322e) cell_afind_pane_ParamLimits

0x7010,	// (0x0009322e) cell_afind_pane

0xabd1,	// (0x00096def) afind_page_pane_g1

0x7071,	// (0x0009328f) afind_page_pane_g2

0x707a,	// (0x00093298) afind_page_pane_g3

0x0002,

0xf8f8,	// (0x0009bb16) afind_page_pane_g

0x7083,	// (0x000932a1) afind_page_pane_t1

0xb7b3,	// (0x000979d1) cell_afind_grid_control_pane_ParamLimits

0xb7b3,	// (0x000979d1) cell_afind_grid_control_pane

0xb52b,	// (0x00097749) bg_button_pane_cp69_ParamLimits

0xb52b,	// (0x00097749) bg_button_pane_cp69

0x70a3,	// (0x000932c1) cell_afind_pane_g1_ParamLimits

0x70a3,	// (0x000932c1) cell_afind_pane_g1

0x70b0,	// (0x000932ce) cell_afind_pane_t1_ParamLimits

0x70b0,	// (0x000932ce) cell_afind_pane_t1

0xe3c2,	// (0x0009a5e0) bg_button_pane_cp72

0xb7c2,	// (0x000979e0) cell_afind_grid_control_pane_g1

0x3969,	// (0x0008fb87) aid_image_placing_area_ParamLimits

0x3969,	// (0x0008fb87) aid_image_placing_area

0xb1d3,	// (0x000973f1) field_vitu_entry_pane_g1_ParamLimits

0xb1d3,	// (0x000973f1) field_vitu_entry_pane_g1

0xb1df,	// (0x000973fd) field_vitu_entry_pane_g2_ParamLimits

0xb1df,	// (0x000973fd) field_vitu_entry_pane_g2

0x0001,

0xf7a9,	// (0x0009b9c7) field_vitu_entry_pane_g_ParamLimits

0xf7a9,	// (0x0009b9c7) field_vitu_entry_pane_g

0x6244,	// (0x00092462) cell_vitu_itu_pane_g1_ParamLimits

0x6286,	// (0x000924a4) cell_vitu_itu_pane_t3_ParamLimits

0x6286,	// (0x000924a4) cell_vitu_itu_pane_t3

0xb4d1,	// (0x000976ef) mp4_progress_pane_t1_ParamLimits

0xb4ea,	// (0x00097708) mp4_progress_pane_t2_ParamLimits

0xf83e,	// (0x0009ba5c) mp4_progress_pane_t_ParamLimits

0xb503,	// (0x00097721) mup_progress_pane_cp04_ParamLimits

0x6f8d,	// (0x000931ab) main_myfav_hc_pane_t5_ParamLimits

0x6f8d,	// (0x000931ab) main_myfav_hc_pane_t5

0x0e10,	// (0x0008d02e) aid_zoom_text_primary

0x0f5a,	// (0x0008d178) popup_adpt_find_window_ParamLimits

0xf009,	// (0x0009b227) main_cam_set_pane

0x6984,	// (0x00092ba2) cam4_zoom_pane_ParamLimits

0x6984,	// (0x00092ba2) cam4_zoom_pane

0x70c2,	// (0x000932e0) main_cam_set_pane_g1_ParamLimits

0x70c2,	// (0x000932e0) main_cam_set_pane_g1

0x70d0,	// (0x000932ee) main_cam_set_pane_g2_ParamLimits

0x70d0,	// (0x000932ee) main_cam_set_pane_g2

0x0001,

0xf8ff,	// (0x0009bb1d) main_cam_set_pane_g_ParamLimits

0xf8ff,	// (0x0009bb1d) main_cam_set_pane_g

0x70f1,	// (0x0009330f) main_cam_set_pane_t1_ParamLimits

0x70f1,	// (0x0009330f) main_cam_set_pane_t1

0x710c,	// (0x0009332a) main_cset_listscroll_pane_ParamLimits

0x710c,	// (0x0009332a) main_cset_listscroll_pane

0x712c,	// (0x0009334a) main_cset_slider_pane_ParamLimits

0x712c,	// (0x0009334a) main_cset_slider_pane

0xb7d3,	// (0x000979f1) main_cset_list_pane_ParamLimits

0xb7d3,	// (0x000979f1) main_cset_list_pane

0xb7e3,	// (0x00097a01) scroll_pane_cp028

0x7152,	// (0x00093370) aid_area_touch_slider

0x716e,	// (0x0009338c) cset_slider_pane

0x7198,	// (0x000933b6) main_cset_slider_pane_g1

0x71ad,	// (0x000933cb) main_cset_slider_pane_g2

0x0011,

0xf904,	// (0x0009bb22) main_cset_slider_pane_g

0xb81c,	// (0x00097a3a) main_cset_slider_pane_t1

0x7269,	// (0x00093487) main_cset_slider_pane_t2

0x7283,	// (0x000934a1) main_cset_slider_pane_t3

0x729d,	// (0x000934bb) main_cset_slider_pane_t4

0x72b7,	// (0x000934d5) main_cset_slider_pane_t5

0x72d1,	// (0x000934ef) main_cset_slider_pane_t6

0x72e6,	// (0x00093504) main_cset_slider_pane_t7

0x000e,

0xf929,	// (0x0009bb47) main_cset_slider_pane_t

0x73ea,	// (0x00093608) cset_list_set_pane_ParamLimits

0x73ea,	// (0x00093608) cset_list_set_pane

0x73fc,	// (0x0009361a) aid_position_infowindow_above

0x7404,	// (0x00093622) aid_position_infowindow_below

0x740c,	// (0x0009362a) cset_list_set_pane_g1_ParamLimits

0x740c,	// (0x0009362a) cset_list_set_pane_g1

0xb8bc,	// (0x00097ada) cset_list_set_pane_g3_ParamLimits

0xb8bc,	// (0x00097ada) cset_list_set_pane_g3

0x0001,

0xf948,	// (0x0009bb66) cset_list_set_pane_g_ParamLimits

0xf948,	// (0x0009bb66) cset_list_set_pane_g

0xb8cb,	// (0x00097ae9) cset_list_set_pane_t1_ParamLimits

0xb8cb,	// (0x00097ae9) cset_list_set_pane_t1

0xf009,	// (0x0009b227) list_highlight_pane_cp021_ParamLimits

0xf009,	// (0x0009b227) list_highlight_pane_cp021

0xede8,	// (0x0009b006) cset_slider_pane_g1

0xedfa,	// (0x0009b018) cset_slider_pane_g2

0xedf1,	// (0x0009b00f) cset_slider_pane_g3

0x0002,

0x073d,	// (0x0008c95b) cset_slider_pane_g

0xd94b,	// (0x00099b69) aid_area_touch_cam4_zoom

0xd953,	// (0x00099b71) cam4_zoom_cont_pane

0xd95b,	// (0x00099b79) cam4_zoom_pane_g1

0xd963,	// (0x00099b81) cam4_zoom_pane_g2

0x7418,	// (0x00093636) cam4_zoom_pane_g3

0x0002,

0xf94d,	// (0x0009bb6b) cam4_zoom_pane_g

0xd96b,	// (0x00099b89) cam4_zoom_cont_pane_g1

0xd974,	// (0x00099b92) cam4_zoom_cont_pane_g2

0xd97d,	// (0x00099b9b) cam4_zoom_cont_pane_g3

0x0002,

0xf954,	// (0x0009bb72) cam4_zoom_cont_pane_g

0x6844,	// (0x00092a62) call4_image_pane_ParamLimits

0x6844,	// (0x00092a62) call4_image_pane

0xb537,	// (0x00097755) call4_windows_conf_pane_ParamLimits

0xb578,	// (0x00097796) popup_call4_audio_in_window_ParamLimits

0xb578,	// (0x00097796) popup_call4_audio_in_window

0x0dba,	// (0x0008cfd8) bg_popup_call2_act_pane_cp02

0xb5ee,	// (0x0009780c) call4_list_conf_pane

0xabd1,	// (0x00096def) call4_image_pane_g1

0xabd1,	// (0x00096def) call4_image_pane_g2

0x0001,

0xf674,	// (0x0009b892) call4_image_pane_g

0xb8e0,	// (0x00097afe) list_single_graphic_popup_conf4_pane_ParamLimits

0xb8e0,	// (0x00097afe) list_single_graphic_popup_conf4_pane

0x0dba,	// (0x0008cfd8) list_highlight_pane_cp022

0xb8f3,	// (0x00097b11) list_single_graphic_popup_conf4_pane_g1

0xeab9,	// (0x0009acd7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf95b,	// (0x0009bb79) list_single_graphic_popup_conf4_pane_g

0xb8fb,	// (0x00097b19) list_single_graphic_popup_conf4_pane_t1

0x1f06,	// (0x0008e124) popup_vtel_slider_window_ParamLimits

0x1f06,	// (0x0008e124) popup_vtel_slider_window

0xb519,	// (0x00097737) dialer2_ne_pane_t2_ParamLimits

0xb519,	// (0x00097737) dialer2_ne_pane_t2

0x0001,

0xf843,	// (0x0009ba61) dialer2_ne_pane_t_ParamLimits

0xf843,	// (0x0009ba61) dialer2_ne_pane_t

0xa9b6,	// (0x00096bd4) bg_popup_sub_pane_cp010_ParamLimits

0xa9b6,	// (0x00096bd4) bg_popup_sub_pane_cp010

0x7420,	// (0x0009363e) popup_vtel_slider_window_g1_ParamLimits

0x7420,	// (0x0009363e) popup_vtel_slider_window_g1

0x7433,	// (0x00093651) popup_vtel_slider_window_g2_ParamLimits

0x7433,	// (0x00093651) popup_vtel_slider_window_g2

0x0003,

0xf960,	// (0x0009bb7e) popup_vtel_slider_window_g_ParamLimits

0xf960,	// (0x0009bb7e) popup_vtel_slider_window_g

0x7489,	// (0x000936a7) vtel_slider_pane_ParamLimits

0x7489,	// (0x000936a7) vtel_slider_pane

0x74ab,	// (0x000936c9) vtel_slider_pane_g1_ParamLimits

0x74ab,	// (0x000936c9) vtel_slider_pane_g1

0x74bf,	// (0x000936dd) vtel_slider_pane_g2_ParamLimits

0x74bf,	// (0x000936dd) vtel_slider_pane_g2

0x74d7,	// (0x000936f5) vtel_slider_pane_g3_ParamLimits

0x74d7,	// (0x000936f5) vtel_slider_pane_g3

0x74ab,	// (0x000936c9) vtel_slider_pane_g4_ParamLimits

0x74ab,	// (0x000936c9) vtel_slider_pane_g4

0x74ed,	// (0x0009370b) vtel_slider_pane_g5_ParamLimits

0x74ed,	// (0x0009370b) vtel_slider_pane_g5

0x0004,

0xf969,	// (0x0009bb87) vtel_slider_pane_g_ParamLimits

0xf969,	// (0x0009bb87) vtel_slider_pane_g

0x0dba,	// (0x0008cfd8) main_gallery2_pane

0x6bf0,	// (0x00092e0e) aid_size_row_itut2_dropdow_list_ParamLimits

0x6bf0,	// (0x00092e0e) aid_size_row_itut2_dropdow_list

0x6c7c,	// (0x00092e9a) grid_vitu2_function_top_pane_ParamLimits

0x6c7c,	// (0x00092e9a) grid_vitu2_function_top_pane

0x6ce1,	// (0x00092eff) popup_vitu2_dropdown_list_window_ParamLimits

0x6ce1,	// (0x00092eff) popup_vitu2_dropdown_list_window

0x6d0a,	// (0x00092f28) popup_vitu2_match_list_window

0x7503,	// (0x00093721) cell_vitu2_function_top_pane_ParamLimits

0x7503,	// (0x00093721) cell_vitu2_function_top_pane

0x7521,	// (0x0009373f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7521,	// (0x0009373f) cell_vitu2_function_top_pane_cp01

0x753f,	// (0x0009375d) cell_vitu2_function_top_wide_pane_ParamLimits

0x753f,	// (0x0009375d) cell_vitu2_function_top_wide_pane

0xd93d,	// (0x00099b5b) bg_button_pane_cp012

0x755d,	// (0x0009377b) cell_vitu2_function_top_pane_g1

0xd986,	// (0x00099ba4) bg_button_pane_cp013_ParamLimits

0xd986,	// (0x00099ba4) bg_button_pane_cp013

0x7571,	// (0x0009378f) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7571,	// (0x0009378f) cell_vitu2_function_top_wide_pane_g1

0xd93d,	// (0x00099b5b) bg_popup_sub_pane_cp20

0x7589,	// (0x000937a7) list_vitu2_match_list_pane

0xb6c9,	// (0x000978e7) bg_popup_sub_pane_cp20_g1

0xb6d1,	// (0x000978ef) bg_popup_sub_pane_cp20_g2

0xe5c7,	// (0x0009a7e5) bg_popup_sub_pane_cp20_g3

0xb6d9,	// (0x000978f7) bg_popup_sub_pane_cp20_g4

0xe5a7,	// (0x0009a7c5) bg_popup_sub_pane_cp20_g5

0xb91f,	// (0x00097b3d) bg_popup_sub_pane_cp20_g6

0xb6e9,	// (0x00097907) bg_popup_sub_pane_cp20_g7

0xb6f1,	// (0x0009790f) bg_popup_sub_pane_cp20_g8

0xb6f9,	// (0x00097917) bg_popup_sub_pane_cp20_g9

0x0008,

0xf974,	// (0x0009bb92) bg_popup_sub_pane_cp20_g

0xd9a2,	// (0x00099bc0) list_vitu2_match_list_item_pane_ParamLimits

0xd9a2,	// (0x00099bc0) list_vitu2_match_list_item_pane

0xd9b4,	// (0x00099bd2) list_vitu2_match_list_item_pane_t1

0x9d68,	// (0x00095f86) bg_popup_sub_pane_cp21

0xd9c2,	// (0x00099be0) grid_vitu2_dropdown_list_pane

0x75dc,	// (0x000937fa) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x75dc,	// (0x000937fa) cell_vitu2_dropdown_list_char_pane

0x75fd,	// (0x0009381b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x75fd,	// (0x0009381b) cell_vitu2_dropdown_list_ctrl_pane

0xb93f,	// (0x00097b5d) cell_vitu2_dropdown_list_char_pane_g1

0xb948,	// (0x00097b66) cell_vitu2_dropdown_list_char_pane_g2

0xb951,	// (0x00097b6f) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf991,	// (0x0009bbaf) cell_vitu2_dropdown_list_char_pane_g

0x7629,	// (0x00093847) cell_vitu2_dropdown_list_char_pane_t1

0x7637,	// (0x00093855) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7637,	// (0x00093855) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7644,	// (0x00093862) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7644,	// (0x00093862) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7651,	// (0x0009386f) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7651,	// (0x0009386f) cell_vitu2_dropdown_list_ctrl_pane_g3

0x765e,	// (0x0009387c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x765e,	// (0x0009387c) cell_vitu2_dropdown_list_ctrl_pane_g4

0xd8be,	// (0x00099adc) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xd8be,	// (0x00099adc) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf998,	// (0x0009bbb6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf998,	// (0x0009bbb6) cell_vitu2_dropdown_list_ctrl_pane_g

0x767a,	// (0x00093898) aid_size_cell_gallery2_ParamLimits

0x767a,	// (0x00093898) aid_size_cell_gallery2

0x7690,	// (0x000938ae) grid_gallery2_pane_ParamLimits

0x7690,	// (0x000938ae) grid_gallery2_pane

0x76a4,	// (0x000938c2) scroll_pane_cp029_ParamLimits

0x76a4,	// (0x000938c2) scroll_pane_cp029

0x76b0,	// (0x000938ce) cell_gallery2_pane_ParamLimits

0x76b0,	// (0x000938ce) cell_gallery2_pane

0xb95a,	// (0x00097b78) cell_gallery2_pane_g2

0x76e6,	// (0x00093904) cell_gallery2_pane_g3

0xb964,	// (0x00097b82) cell_gallery2_pane_g4

0xb96c,	// (0x00097b8a) cell_gallery2_pane_g5

0xecb2,	// (0x0009aed0) grid_highlight_pane_cp10

0x6d0a,	// (0x00092f28) popup_vitu2_match_list_window_ParamLimits

0x6d21,	// (0x00092f3f) popup_vitu2_query_window_ParamLimits

0x6d21,	// (0x00092f3f) popup_vitu2_query_window

0x9d68,	// (0x00095f86) bg_vitu2_candi_button_pane

0xb93f,	// (0x00097b5d) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xb948,	// (0x00097b66) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xb951,	// (0x00097b6f) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x76ee,	// (0x0009390c) bg_button_pane_cp015

0x7700,	// (0x0009391e) bg_button_pane_cp016

0x7713,	// (0x00093931) bg_button_pane_cp017

0xa6cb,	// (0x000968e9) bg_popup_sub_pane_cp22

0xb974,	// (0x00097b92) popup_vitu2_query_window_g1

0x7758,	// (0x00093976) popup_vitu2_query_window_g2

0x0002,

0xf9a3,	// (0x0009bbc1) popup_vitu2_query_window_g

0x7777,	// (0x00093995) popup_vitu2_query_window_t1_ParamLimits

0x7777,	// (0x00093995) popup_vitu2_query_window_t1

0x77ac,	// (0x000939ca) popup_vitu2_query_window_t2_ParamLimits

0x77ac,	// (0x000939ca) popup_vitu2_query_window_t2

0x77be,	// (0x000939dc) popup_vitu2_query_window_t3_ParamLimits

0x77be,	// (0x000939dc) popup_vitu2_query_window_t3

0x77e6,	// (0x00093a04) popup_vitu2_query_window_t4_ParamLimits

0x77e6,	// (0x00093a04) popup_vitu2_query_window_t4

0x7807,	// (0x00093a25) popup_vitu2_query_window_t5_ParamLimits

0x7807,	// (0x00093a25) popup_vitu2_query_window_t5

0x0006,

0xf9aa,	// (0x0009bbc8) popup_vitu2_query_window_t_ParamLimits

0xf9aa,	// (0x0009bbc8) popup_vitu2_query_window_t

0xb7cb,	// (0x000979e9) main_cset_text_pane

0x7152,	// (0x00093370) aid_area_touch_slider_ParamLimits

0x716e,	// (0x0009338c) cset_slider_pane_ParamLimits

0x7198,	// (0x000933b6) main_cset_slider_pane_g1_ParamLimits

0x71ad,	// (0x000933cb) main_cset_slider_pane_g2_ParamLimits

0xb7ec,	// (0x00097a0a) main_cset_slider_pane_g3_ParamLimits

0xb7ec,	// (0x00097a0a) main_cset_slider_pane_g3

0x71c2,	// (0x000933e0) main_cset_slider_pane_g4_ParamLimits

0x71c2,	// (0x000933e0) main_cset_slider_pane_g4

0x71d1,	// (0x000933ef) main_cset_slider_pane_g5_ParamLimits

0x71d1,	// (0x000933ef) main_cset_slider_pane_g5

0x71dd,	// (0x000933fb) main_cset_slider_pane_g6_ParamLimits

0x71dd,	// (0x000933fb) main_cset_slider_pane_g6

0xf904,	// (0x0009bb22) main_cset_slider_pane_g_ParamLimits

0xb81c,	// (0x00097a3a) main_cset_slider_pane_t1_ParamLimits

0x7269,	// (0x00093487) main_cset_slider_pane_t2_ParamLimits

0x7283,	// (0x000934a1) main_cset_slider_pane_t3_ParamLimits

0x729d,	// (0x000934bb) main_cset_slider_pane_t4_ParamLimits

0x72b7,	// (0x000934d5) main_cset_slider_pane_t5_ParamLimits

0x72d1,	// (0x000934ef) main_cset_slider_pane_t6_ParamLimits

0x72e6,	// (0x00093504) main_cset_slider_pane_t7_ParamLimits

0x7310,	// (0x0009352e) main_cset_slider_pane_t8_ParamLimits

0x7310,	// (0x0009352e) main_cset_slider_pane_t8

0x7338,	// (0x00093556) main_cset_slider_pane_t9_ParamLimits

0x7338,	// (0x00093556) main_cset_slider_pane_t9

0x7360,	// (0x0009357e) main_cset_slider_pane_t10_ParamLimits

0x7360,	// (0x0009357e) main_cset_slider_pane_t10

0x7388,	// (0x000935a6) main_cset_slider_pane_t11_ParamLimits

0x7388,	// (0x000935a6) main_cset_slider_pane_t11

0x73b0,	// (0x000935ce) main_cset_slider_pane_t12_ParamLimits

0x73b0,	// (0x000935ce) main_cset_slider_pane_t12

0x73cd,	// (0x000935eb) main_cset_slider_pane_t13_ParamLimits

0x73cd,	// (0x000935eb) main_cset_slider_pane_t13

0xf929,	// (0x0009bb47) main_cset_slider_pane_t_ParamLimits

0x0dba,	// (0x0008cfd8) bg_popup_sub_pane_cp011

0xb980,	// (0x00097b9e) main_cset_text_pane_g1

0xb988,	// (0x00097ba6) main_cset_text_pane_t1

0xb996,	// (0x00097bb4) main_cset_text_pane_t2

0xb9a4,	// (0x00097bc2) main_cset_text_pane_t3

0xb9b2,	// (0x00097bd0) main_cset_text_pane_t4

0xb9c0,	// (0x00097bde) main_cset_text_pane_t5

0xb9ce,	// (0x00097bec) main_cset_text_pane_t6

0xb9dc,	// (0x00097bfa) main_cset_text_pane_t7

0x0006,

0xf9b9,	// (0x0009bbd7) main_cset_text_pane_t

0x0dba,	// (0x0008cfd8) main_cam4_burst_pane

0x0dba,	// (0x0008cfd8) main_cam5_pane

0x7091,	// (0x000932af) bg_button_pane_cp019

0x709a,	// (0x000932b8) bg_button_pane_cp020

0xb7f8,	// (0x00097a16) main_cset_slider_pane_g7_ParamLimits

0xb7f8,	// (0x00097a16) main_cset_slider_pane_g7

0xb804,	// (0x00097a22) main_cset_slider_pane_g8_ParamLimits

0xb804,	// (0x00097a22) main_cset_slider_pane_g8

0x71f1,	// (0x0009340f) main_cset_slider_pane_g9_ParamLimits

0x71f1,	// (0x0009340f) main_cset_slider_pane_g9

0x71fd,	// (0x0009341b) main_cset_slider_pane_g10_ParamLimits

0x71fd,	// (0x0009341b) main_cset_slider_pane_g10

0x7209,	// (0x00093427) main_cset_slider_pane_g11_ParamLimits

0x7209,	// (0x00093427) main_cset_slider_pane_g11

0x7215,	// (0x00093433) main_cset_slider_pane_g12_ParamLimits

0x7215,	// (0x00093433) main_cset_slider_pane_g12

0x7221,	// (0x0009343f) main_cset_slider_pane_g13_ParamLimits

0x7221,	// (0x0009343f) main_cset_slider_pane_g13

0x722d,	// (0x0009344b) main_cset_slider_pane_g14_ParamLimits

0x722d,	// (0x0009344b) main_cset_slider_pane_g14

0x7239,	// (0x00093457) main_cset_slider_pane_g15_ParamLimits

0x7239,	// (0x00093457) main_cset_slider_pane_g15

0xb84a,	// (0x00097a68) main_cset_slider_pane_t14_ParamLimits

0xb84a,	// (0x00097a68) main_cset_slider_pane_t14

0xb883,	// (0x00097aa1) main_cset_slider_pane_t15_ParamLimits

0xb883,	// (0x00097aa1) main_cset_slider_pane_t15

0x787e,	// (0x00093a9c) aid_cam4_burst_size_cell_ParamLimits

0x787e,	// (0x00093a9c) aid_cam4_burst_size_cell

0x789e,	// (0x00093abc) grid_cam4_burst_pane_ParamLimits

0x789e,	// (0x00093abc) grid_cam4_burst_pane

0x78d6,	// (0x00093af4) linegrid_cam4_burst_pane_ParamLimits

0x78d6,	// (0x00093af4) linegrid_cam4_burst_pane

0xb9ea,	// (0x00097c08) scroll_pane_cp30_ParamLimits

0xb9ea,	// (0x00097c08) scroll_pane_cp30

0x78fa,	// (0x00093b18) cell_cam4_burst_pane_ParamLimits

0x78fa,	// (0x00093b18) cell_cam4_burst_pane

0xb9f6,	// (0x00097c14) linegrid_cam4_burst_pane_g1_ParamLimits

0xb9f6,	// (0x00097c14) linegrid_cam4_burst_pane_g1

0x7947,	// (0x00093b65) linegrid_cam4_burst_pane_g2_ParamLimits

0x7947,	// (0x00093b65) linegrid_cam4_burst_pane_g2

0xba03,	// (0x00097c21) linegrid_cam4_burst_pane_g3_ParamLimits

0xba03,	// (0x00097c21) linegrid_cam4_burst_pane_g3

0x0002,

0xf9c8,	// (0x0009bbe6) linegrid_cam4_burst_pane_g_ParamLimits

0xf9c8,	// (0x0009bbe6) linegrid_cam4_burst_pane_g

0x7958,	// (0x00093b76) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7958,	// (0x00093b76) linegrid_cam4_burst_pane_g3_copy1

0xba10,	// (0x00097c2e) linegrid_cam4_burst_pane_g4_ParamLimits

0xba10,	// (0x00097c2e) linegrid_cam4_burst_pane_g4

0x7972,	// (0x00093b90) linegrid_cam4_burst_pane_g5_ParamLimits

0x7972,	// (0x00093b90) linegrid_cam4_burst_pane_g5

0x7983,	// (0x00093ba1) linegrid_cam4_burst_pane_g6_ParamLimits

0x7983,	// (0x00093ba1) linegrid_cam4_burst_pane_g6

0xba1d,	// (0x00097c3b) linegrid_cam4_burst_pane_g7_ParamLimits

0xba1d,	// (0x00097c3b) linegrid_cam4_burst_pane_g7

0x799a,	// (0x00093bb8) cell_cam4_burst_pane_g1

0xba36,	// (0x00097c54) main_cam5_pane_t1_ParamLimits

0xba36,	// (0x00097c54) main_cam5_pane_t1

0xba48,	// (0x00097c66) main_cam5_pane_t2_ParamLimits

0xba48,	// (0x00097c66) main_cam5_pane_t2

0xba5a,	// (0x00097c78) main_cam5_pane_t3_ParamLimits

0xba5a,	// (0x00097c78) main_cam5_pane_t3

0xba6c,	// (0x00097c8a) main_cam5_pane_t4_ParamLimits

0xba6c,	// (0x00097c8a) main_cam5_pane_t4

0xba84,	// (0x00097ca2) main_cam5_pane_t5_ParamLimits

0xba84,	// (0x00097ca2) main_cam5_pane_t5

0xba98,	// (0x00097cb6) main_cam5_pane_t6_ParamLimits

0xba98,	// (0x00097cb6) main_cam5_pane_t6

0xbaac,	// (0x00097cca) main_cam5_pane_t7_ParamLimits

0xbaac,	// (0x00097cca) main_cam5_pane_t7

0xbabe,	// (0x00097cdc) main_cam5_pane_t8_ParamLimits

0xbabe,	// (0x00097cdc) main_cam5_pane_t8

0xbada,	// (0x00097cf8) main_cam5_pane_t9_ParamLimits

0xbada,	// (0x00097cf8) main_cam5_pane_t9

0xbaec,	// (0x00097d0a) main_cam5_pane_t10_ParamLimits

0xbaec,	// (0x00097d0a) main_cam5_pane_t10

0xbafe,	// (0x00097d1c) main_cam5_pane_t11_ParamLimits

0xbafe,	// (0x00097d1c) main_cam5_pane_t11

0xbb10,	// (0x00097d2e) main_cam5_pane_t12_ParamLimits

0xbb10,	// (0x00097d2e) main_cam5_pane_t12

0xbb25,	// (0x00097d43) main_cam5_pane_t13_ParamLimits

0xbb25,	// (0x00097d43) main_cam5_pane_t13

0x000c,

0xf9d4,	// (0x0009bbf2) main_cam5_pane_t_ParamLimits

0xf9d4,	// (0x0009bbf2) main_cam5_pane_t

0x0fdc,	// (0x0008d1fa) popup_scut_keymap_window_ParamLimits

0x0fdc,	// (0x0008d1fa) popup_scut_keymap_window

0x79ad,	// (0x00093bcb) aid_size_cell_brow_shortcut

0xecb2,	// (0x0009aed0) bg_popup_window_pane_cp010

0x79b9,	// (0x00093bd7) grid_scut_pane

0x79c5,	// (0x00093be3) cell_scut_pane_ParamLimits

0x79c5,	// (0x00093be3) cell_scut_pane

0x79dc,	// (0x00093bfa) cell_scut_pane_g1

0xbb42,	// (0x00097d60) cell_scut_pane_t1

0xbb51,	// (0x00097d6f) cell_scut_pane_t2

0x79e5,	// (0x00093c03) cell_scut_pane_t3

0x0002,

0xf9ef,	// (0x0009bc0d) cell_scut_pane_t

0x57a1,	// (0x000919bf) main_mup3_pane_g8_ParamLimits

0x57a1,	// (0x000919bf) main_mup3_pane_g8

0x6c08,	// (0x00092e26) area_vitu2_query_pane_ParamLimits

0x6c08,	// (0x00092e26) area_vitu2_query_pane

0x7726,	// (0x00093944) input_focus_pane_cp08

0xbb60,	// (0x00097d7e) area_vitu2_query_pane_g1

0x79f3,	// (0x00093c11) area_vitu2_query_pane_g2

0x0001,

0xf9f6,	// (0x0009bc14) area_vitu2_query_pane_g

0x7a04,	// (0x00093c22) area_vitu2_query_pane_t1_ParamLimits

0x7a04,	// (0x00093c22) area_vitu2_query_pane_t1

0x7a18,	// (0x00093c36) area_vitu2_query_pane_t2_ParamLimits

0x7a18,	// (0x00093c36) area_vitu2_query_pane_t2

0x7a2c,	// (0x00093c4a) area_vitu2_query_pane_t3_ParamLimits

0x7a2c,	// (0x00093c4a) area_vitu2_query_pane_t3

0xbb6c,	// (0x00097d8a) area_vitu2_query_pane_t4_ParamLimits

0xbb6c,	// (0x00097d8a) area_vitu2_query_pane_t4

0xbb94,	// (0x00097db2) area_vitu2_query_pane_t5_ParamLimits

0xbb94,	// (0x00097db2) area_vitu2_query_pane_t5

0xbbbc,	// (0x00097dda) area_vitu2_query_pane_t6_ParamLimits

0xbbbc,	// (0x00097dda) area_vitu2_query_pane_t6

0x0006,

0xf9fb,	// (0x0009bc19) area_vitu2_query_pane_t_ParamLimits

0xf9fb,	// (0x0009bc19) area_vitu2_query_pane_t

0x7a54,	// (0x00093c72) bg_button_pane_cp018

0x7a62,	// (0x00093c80) bg_button_pane_cp021

0x7a6e,	// (0x00093c8c) bg_button_pane_cp022

0x7a7d,	// (0x00093c9b) input_focus_pane_cp09

0x2efb,	// (0x0008f119) aid_size_touch_mv_arrow_left

0x2f24,	// (0x0008f142) aid_size_touch_mv_arrow_right

0x7251,	// (0x0009346f) main_cset_slider_pane_g16_ParamLimits

0x7251,	// (0x0009346f) main_cset_slider_pane_g16

0x725d,	// (0x0009347b) main_cset_slider_pane_g17_ParamLimits

0x725d,	// (0x0009347b) main_cset_slider_pane_g17

0x799a,	// (0x00093bb8) cell_cam4_burst_pane_g1_ParamLimits

0x0dba,	// (0x0008cfd8) compa_mode_pane

0x7443,	// (0x00093661) popup_vtel_slider_window_g3_ParamLimits

0x7443,	// (0x00093661) popup_vtel_slider_window_g3

0x745a,	// (0x00093678) popup_vtel_slider_window_g4_ParamLimits

0x745a,	// (0x00093678) popup_vtel_slider_window_g4

0x7471,	// (0x0009368f) popup_vtel_slider_window_t1_ParamLimits

0x7471,	// (0x0009368f) popup_vtel_slider_window_t1

0x0dba,	// (0x0008cfd8) main_cl_pane

0xa6f3,	// (0x00096911) popup_imed_adjust2_window_ParamLimits

0xa6cb,	// (0x000968e9) bg_tb_trans_pane_cp05_ParamLimits

0xb108,	// (0x00097326) popup_imed_adjust2_window_g1_ParamLimits

0xb117,	// (0x00097335) popup_imed_adjust2_window_g2_ParamLimits

0xb117,	// (0x00097335) popup_imed_adjust2_window_g2

0xb123,	// (0x00097341) popup_imed_adjust2_window_g3_ParamLimits

0xb123,	// (0x00097341) popup_imed_adjust2_window_g3

0x0002,

0xf772,	// (0x0009b990) popup_imed_adjust2_window_g_ParamLimits

0xf772,	// (0x0009b990) popup_imed_adjust2_window_g

0xb12f,	// (0x0009734d) popup_imed_adjust2_window_t1_ParamLimits

0xb147,	// (0x00097365) slider_imed_adjust_pane_ParamLimits

0xb15b,	// (0x00097379) slider_imed_adjust_pane_g1_ParamLimits

0xb16b,	// (0x00097389) slider_imed_adjust_pane_g2_ParamLimits

0xb17b,	// (0x00097399) slider_imed_adjust_pane_g3_ParamLimits

0xb18c,	// (0x000973aa) slider_imed_adjust_pane_g4_ParamLimits

0xf779,	// (0x0009b997) slider_imed_adjust_pane_g_ParamLimits

0x6925,	// (0x00092b43) aid_touch_area_cam4_ParamLimits

0x6925,	// (0x00092b43) aid_touch_area_cam4

0xd8a2,	// (0x00099ac0) battery_pane_cp01

0x69f5,	// (0x00092c13) main_camera4_pane_g6_ParamLimits

0x69f5,	// (0x00092c13) main_camera4_pane_g6

0x6a1f,	// (0x00092c3d) main_camera4_pane_t2_ParamLimits

0x6a1f,	// (0x00092c3d) main_camera4_pane_t2

0x0001,

0xf877,	// (0x0009ba95) main_camera4_pane_t_ParamLimits

0xf877,	// (0x0009ba95) main_camera4_pane_t

0x6a54,	// (0x00092c72) aid_touch_area_vid4_ParamLimits

0x6a54,	// (0x00092c72) aid_touch_area_vid4

0x6abb,	// (0x00092cd9) main_video4_pane_g5_ParamLimits

0x6abb,	// (0x00092cd9) main_video4_pane_g5

0x6ae6,	// (0x00092d04) vid4_progress_pane_ParamLimits

0x6ae6,	// (0x00092d04) vid4_progress_pane

0xb810,	// (0x00097a2e) main_cset_slider_pane_g18_ParamLimits

0xb810,	// (0x00097a2e) main_cset_slider_pane_g18

0xba2a,	// (0x00097c48) cell_cam4_burst_pane_g2_ParamLimits

0xba2a,	// (0x00097c48) cell_cam4_burst_pane_g2

0x0001,

0xf9cf,	// (0x0009bbed) cell_cam4_burst_pane_g_ParamLimits

0xf9cf,	// (0x0009bbed) cell_cam4_burst_pane_g

0xe1d3,	// (0x0009a3f1) bg_cl_pane_ParamLimits

0xe1d3,	// (0x0009a3f1) bg_cl_pane

0x7a8c,	// (0x00093caa) cl_header_pane_ParamLimits

0x7a8c,	// (0x00093caa) cl_header_pane

0x7aa0,	// (0x00093cbe) cl_listscroll_pane_ParamLimits

0x7aa0,	// (0x00093cbe) cl_listscroll_pane

0xbc08,	// (0x00097e26) bg_cl_pane_g1

0xbc10,	// (0x00097e2e) bg_cl_pane_g2

0xbc18,	// (0x00097e36) bg_cl_pane_g3

0xbc20,	// (0x00097e3e) bg_cl_pane_g4

0xbc28,	// (0x00097e46) bg_cl_pane_g5

0xbc30,	// (0x00097e4e) bg_cl_pane_g6

0xbc38,	// (0x00097e56) bg_cl_pane_g7

0xbc40,	// (0x00097e5e) bg_cl_pane_g8

0xbc48,	// (0x00097e66) bg_cl_pane_g9

0x0008,

0xfa0a,	// (0x0009bc28) bg_cl_pane_g

0x7ab0,	// (0x00093cce) aid_height_cl_leading_ParamLimits

0x7ab0,	// (0x00093cce) aid_height_cl_leading

0x7abc,	// (0x00093cda) aid_height_cl_text_ParamLimits

0x7abc,	// (0x00093cda) aid_height_cl_text

0xf009,	// (0x0009b227) bg_cl_header_pane_ParamLimits

0xf009,	// (0x0009b227) bg_cl_header_pane

0x7adb,	// (0x00093cf9) cl_header_pane_g1_ParamLimits

0x7adb,	// (0x00093cf9) cl_header_pane_g1

0x7af1,	// (0x00093d0f) cl_header_pane_t1_ParamLimits

0x7af1,	// (0x00093d0f) cl_header_pane_t1

0xbc50,	// (0x00097e6e) cl_list_pane

0xb7e3,	// (0x00097a01) hc_scroll_pane_cp01

0xe5a7,	// (0x0009a7c5) bg_cl_header_pane_g1

0xb6c9,	// (0x000978e7) bg_cl_header_pane_g2

0xe5c7,	// (0x0009a7e5) bg_cl_header_pane_g3

0xb6d9,	// (0x000978f7) bg_cl_header_pane_g4

0xb6d1,	// (0x000978ef) bg_cl_header_pane_g5

0xb91f,	// (0x00097b3d) bg_cl_header_pane_g6

0xb6f1,	// (0x0009790f) bg_cl_header_pane_g7

0xb6f9,	// (0x00097917) bg_cl_header_pane_g8

0xb6e9,	// (0x00097907) bg_cl_header_pane_g9

0x0008,

0xfa1d,	// (0x0009bc3b) bg_cl_header_pane_g

0x7b0a,	// (0x00093d28) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7b0a,	// (0x00093d28) hc_cl_list_double_graphic_heading_pane

0x7b1b,	// (0x00093d39) hc_cl_list_single_graphic_pane_ParamLimits

0x7b1b,	// (0x00093d39) hc_cl_list_single_graphic_pane

0x7b31,	// (0x00093d4f) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7b31,	// (0x00093d4f) hc_cl_list_single_graphic_pane_g1

0x7b3d,	// (0x00093d5b) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7b3d,	// (0x00093d5b) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa30,	// (0x0009bc4e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa30,	// (0x0009bc4e) hc_cl_list_single_graphic_pane_g

0x7b51,	// (0x00093d6f) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7b51,	// (0x00093d6f) hc_cl_list_single_graphic_pane_t1

0x7b31,	// (0x00093d4f) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7b31,	// (0x00093d4f) hc_cl_list_double_graphic_heading_pane_g1

0x7b66,	// (0x00093d84) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7b66,	// (0x00093d84) hc_cl_list_double_graphic_heading_pane_g2

0x7b7a,	// (0x00093d98) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7b7a,	// (0x00093d98) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa35,	// (0x0009bc53) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa35,	// (0x0009bc53) hc_cl_list_double_graphic_heading_pane_g

0x7b8e,	// (0x00093dac) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7b8e,	// (0x00093dac) hc_cl_list_double_graphic_heading_pane_t1

0x7ba3,	// (0x00093dc1) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7ba3,	// (0x00093dc1) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa3c,	// (0x0009bc5a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa3c,	// (0x0009bc5a) hc_cl_list_double_graphic_heading_pane_t

0xd9d2,	// (0x00099bf0) vid4_progress_pane_g1

0xd9e2,	// (0x00099c00) vid4_progress_pane_g2

0xe86c,	// (0x0009aa8a) vid4_progress_pane_g3

0xd9f2,	// (0x00099c10) vid4_progress_pane_g4

0x0004,

0xfa41,	// (0x0009bc5f) vid4_progress_pane_g

0xda10,	// (0x00099c2e) vid4_progress_pane_t1

0xda25,	// (0x00099c43) vid4_progress_pane_t2

0x0002,

0xfa4c,	// (0x0009bc6a) vid4_progress_pane_t

0xda50,	// (0x00099c6e) wait_bar_pane_cp07

0xa9c4,	// (0x00096be2) blid_firmament_pane_ParamLimits

0xaa07,	// (0x00096c25) popup_blid_sat_info2_window_g1

0xaa2b,	// (0x00096c49) popup_blid_sat_info2_window_t3

0xaa39,	// (0x00096c57) popup_blid_sat_info2_window_t4

0xaa47,	// (0x00096c65) popup_blid_sat_info2_window_t5

0xaa55,	// (0x00096c73) popup_blid_sat_info2_window_t6

0xaa65,	// (0x00096c83) popup_blid_sat_info2_window_t7

0xaa73,	// (0x00096c91) popup_blid_sat_info2_window_t8

0xaa81,	// (0x00096c9f) popup_blid_sat_info2_window_t9

0xaa8f,	// (0x00096cad) popup_blid_sat_info2_window_t10

0xab51,	// (0x00096d6f) aid_firma_cardinal_ParamLimits

0xab65,	// (0x00096d83) blid_firmament_pane_t1_ParamLimits

0xab7c,	// (0x00096d9a) blid_firmament_pane_t2_ParamLimits

0xab93,	// (0x00096db1) blid_firmament_pane_t3_ParamLimits

0xabaa,	// (0x00096dc8) blid_firmament_pane_t4_ParamLimits

0xf66b,	// (0x0009b889) blid_firmament_pane_t_ParamLimits

0xabc1,	// (0x00096ddf) blid_sat_info_pane_ParamLimits

0xf009,	// (0x0009b227) main_cam_set_pane_ParamLimits

0x5ffe,	// (0x0009221c) aid_size_cell_colour_35_ParamLimits

0x601e,	// (0x0009223c) aid_size_cell_colour_112_ParamLimits

0x603e,	// (0x0009225c) aid_size_cell_effect_ParamLimits

0xa6cb,	// (0x000968e9) bg_tb_trans_pane_cp02_ParamLimits

0xe7f3,	// (0x0009aa11) heading_imed_pane_ParamLimits

0x605e,	// (0x0009227c) listscroll_imed_pane_ParamLimits

0x4154,	// (0x00090372) popup_call2_audio_first_window_g5_ParamLimits

0x4154,	// (0x00090372) popup_call2_audio_first_window_g5

0x65d0,	// (0x000927ee) aid_size_touch_image3_arrow_left_ParamLimits

0x65d0,	// (0x000927ee) aid_size_touch_image3_arrow_left

0x65fc,	// (0x0009281a) aid_size_touch_image3_arrow_right_ParamLimits

0x65fc,	// (0x0009281a) aid_size_touch_image3_arrow_right

0xda3b,	// (0x00099c59) vid4_progress_pane_t3

0x6371,	// (0x0009258f) main_hwr_training_symbol_option_pane_ParamLimits

0x6371,	// (0x0009258f) main_hwr_training_symbol_option_pane

0xb3f5,	// (0x00097613) popup_hwr_training_preview_window_ParamLimits

0xb3f5,	// (0x00097613) popup_hwr_training_preview_window

0x6391,	// (0x000925af) hwr_training_navi_pane_g5_ParamLimits

0x6391,	// (0x000925af) hwr_training_navi_pane_g5

0xb6b7,	// (0x000978d5) popup_char_count_window

0xd93d,	// (0x00099b5b) bg_popup_sub_pane_cp20_ParamLimits

0x7589,	// (0x000937a7) list_vitu2_match_list_pane_ParamLimits

0x7598,	// (0x000937b6) vitu2_page_scroll_pane_ParamLimits

0x7598,	// (0x000937b6) vitu2_page_scroll_pane

0xbcb3,	// (0x00097ed1) list_single_hwr_training_symbol_option_pane_ParamLimits

0xbcb3,	// (0x00097ed1) list_single_hwr_training_symbol_option_pane

0xbcc6,	// (0x00097ee4) list_single_hwr_training_symbol_option_pane_g1

0xbcce,	// (0x00097eec) list_single_hwr_training_symbol_option_pane_t1

0xbcdc,	// (0x00097efa) bg_button_pane_cp023

0xbce5,	// (0x00097f03) bg_button_pane_cp024

0x7bb8,	// (0x00093dd6) vitu2_page_scroll_pane_g1

0x7bc0,	// (0x00093dde) vitu2_page_scroll_pane_g2

0x0001,

0xfa53,	// (0x0009bc71) vitu2_page_scroll_pane_g

0x7bc8,	// (0x00093de6) vitu2_page_scroll_pane_t1

0xbd18,	// (0x00097f36) popup_char_count_window_g1

0xbd21,	// (0x00097f3f) popup_char_count_window_g2

0xbd2a,	// (0x00097f48) popup_char_count_window_g3

0x0002,

0xfa58,	// (0x0009bc76) popup_char_count_window_g

0xbd33,	// (0x00097f51) popup_char_count_window_t1

0x0dba,	// (0x0008cfd8) main_vded2_pane

0xb0f4,	// (0x00097312) aid_size_cell_imed_line

0xb0fe,	// (0x0009731c) grid_imed_line_width_pane

0x6b54,	// (0x00092d72) vid4_indicators_pane_g4

0xbd41,	// (0x00097f5f) cell_imed_line_width_pane_ParamLimits

0xbd41,	// (0x00097f5f) cell_imed_line_width_pane

0xbd55,	// (0x00097f73) cell_imed_line_width_pane_g1

0xa972,	// (0x00096b90) cell_imed_line_width_pane_g2

0x0001,

0xfa5f,	// (0x0009bc7d) cell_imed_line_width_pane_g

0x7bd7,	// (0x00093df5) main_vded2_pane_g1_ParamLimits

0x7bd7,	// (0x00093df5) main_vded2_pane_g1

0x7bed,	// (0x00093e0b) main_vded2_pane_g2_ParamLimits

0x7bed,	// (0x00093e0b) main_vded2_pane_g2

0x0001,

0xfa64,	// (0x0009bc82) main_vded2_pane_g_ParamLimits

0xfa64,	// (0x0009bc82) main_vded2_pane_g

0x7bff,	// (0x00093e1d) vded2_slider_pane_ParamLimits

0x7bff,	// (0x00093e1d) vded2_slider_pane

0x7c0f,	// (0x00093e2d) aid_size_touch_vded2_end

0x7c19,	// (0x00093e37) aid_size_touch_vded2_playhead

0xbd5e,	// (0x00097f7c) aid_size_touch_vded2_start

0xbd66,	// (0x00097f84) vded2_slider_bg_pane

0xbd6f,	// (0x00097f8d) vded2_slider_pane_g1

0xbd78,	// (0x00097f96) vded2_slider_pane_g2

0x7c23,	// (0x00093e41) vded2_slider_pane_g3

0x0002,

0xfa69,	// (0x0009bc87) vded2_slider_pane_g

0xbd80,	// (0x00097f9e) vded2_slider_bg_pane_g1

0xbd89,	// (0x00097fa7) vded2_slider_bg_pane_g2

0xbd92,	// (0x00097fb0) vded2_slider_bg_pane_g3

0x0002,

0xfa70,	// (0x0009bc8e) vded2_slider_bg_pane_g

0x35a2,	// (0x0008f7c0) aid_postcard_touch_down_pane_ParamLimits

0x35a2,	// (0x0008f7c0) aid_postcard_touch_down_pane

0x35b8,	// (0x0008f7d6) aid_postcard_touch_up_pane_ParamLimits

0x35b8,	// (0x0008f7d6) aid_postcard_touch_up_pane

0x0dba,	// (0x0008cfd8) main_blid2_pane

0xa6d9,	// (0x000968f7) popup_blid2_search_window

0x0dba,	// (0x0008cfd8) blid2_gps_pane

0x0dba,	// (0x0008cfd8) blid2_navig_pane

0x0dba,	// (0x0008cfd8) blid2_search_pane

0x0dba,	// (0x0008cfd8) blid2_tripm_pane

0x7c2e,	// (0x00093e4c) blid2_search_pane_g1_ParamLimits

0x7c2e,	// (0x00093e4c) blid2_search_pane_g1

0x7c48,	// (0x00093e66) blid2_search_pane_t1_ParamLimits

0x7c48,	// (0x00093e66) blid2_search_pane_t1

0x7c5a,	// (0x00093e78) aid_size_cell_blid2_gps_ParamLimits

0x7c5a,	// (0x00093e78) aid_size_cell_blid2_gps

0x7c72,	// (0x00093e90) blid2_gps_pane_g1_ParamLimits

0x7c72,	// (0x00093e90) blid2_gps_pane_g1

0x7c86,	// (0x00093ea4) grid_blid2_satellite_pane_ParamLimits

0x7c86,	// (0x00093ea4) grid_blid2_satellite_pane

0x7ca0,	// (0x00093ebe) blid2_navig_pane_g1_ParamLimits

0x7ca0,	// (0x00093ebe) blid2_navig_pane_g1

0x7cac,	// (0x00093eca) blid2_navig_pane_t1_ParamLimits

0x7cac,	// (0x00093eca) blid2_navig_pane_t1

0x7cc7,	// (0x00093ee5) blid2_navig_pane_t2_ParamLimits

0x7cc7,	// (0x00093ee5) blid2_navig_pane_t2

0x0001,

0xfa77,	// (0x0009bc95) blid2_navig_pane_t_ParamLimits

0xfa77,	// (0x0009bc95) blid2_navig_pane_t

0x7ce2,	// (0x00093f00) blid2_navig_ring_pane_ParamLimits

0x7ce2,	// (0x00093f00) blid2_navig_ring_pane

0x7cfb,	// (0x00093f19) blid2_speed_pane_ParamLimits

0x7cfb,	// (0x00093f19) blid2_speed_pane

0x7d07,	// (0x00093f25) blid2_tripm_pane_g1_ParamLimits

0x7d07,	// (0x00093f25) blid2_tripm_pane_g1

0x7d20,	// (0x00093f3e) blid2_tripm_pane_g2_ParamLimits

0x7d20,	// (0x00093f3e) blid2_tripm_pane_g2

0x7d34,	// (0x00093f52) blid2_tripm_pane_g3_ParamLimits

0x7d34,	// (0x00093f52) blid2_tripm_pane_g3

0x7d48,	// (0x00093f66) blid2_tripm_pane_g4_ParamLimits

0x7d48,	// (0x00093f66) blid2_tripm_pane_g4

0x7d5c,	// (0x00093f7a) blid2_tripm_pane_g5_ParamLimits

0x7d5c,	// (0x00093f7a) blid2_tripm_pane_g5

0x0005,

0xfa7c,	// (0x0009bc9a) blid2_tripm_pane_g_ParamLimits

0xfa7c,	// (0x0009bc9a) blid2_tripm_pane_g

0x7d82,	// (0x00093fa0) blid2_tripm_pane_t1_ParamLimits

0x7d82,	// (0x00093fa0) blid2_tripm_pane_t1

0x7d9d,	// (0x00093fbb) blid2_tripm_pane_t2_ParamLimits

0x7d9d,	// (0x00093fbb) blid2_tripm_pane_t2

0x7db6,	// (0x00093fd4) blid2_tripm_pane_t3_ParamLimits

0x7db6,	// (0x00093fd4) blid2_tripm_pane_t3

0x0003,

0xfa89,	// (0x0009bca7) blid2_tripm_pane_t_ParamLimits

0xfa89,	// (0x0009bca7) blid2_tripm_pane_t

0x7dfd,	// (0x0009401b) cell_blid2_satellite_pane_ParamLimits

0x7dfd,	// (0x0009401b) cell_blid2_satellite_pane

0x7e1b,	// (0x00094039) cell_blid2_satellite_pane_g1

0xbd9b,	// (0x00097fb9) cell_blid2_satellite_pane_t1

0xabd1,	// (0x00096def) blid2_speed_pane_g1

0xbda9,	// (0x00097fc7) blid2_speed_pane_t1

0xbdb7,	// (0x00097fd5) blid2_speed_pane_t2

0x0001,

0xfa92,	// (0x0009bcb0) blid2_speed_pane_t

0xabd1,	// (0x00096def) blid2_navig_ring_pane_g1

0x7e24,	// (0x00094042) blid2_navig_ring_pane_g2

0x7e2c,	// (0x0009404a) blid2_navig_ring_pane_g3

0x7e34,	// (0x00094052) blid2_navig_ring_pane_g4

0x7e3c,	// (0x0009405a) blid2_navig_ring_pane_g5

0x0004,

0xfa97,	// (0x0009bcb5) blid2_navig_ring_pane_g

0x0dba,	// (0x0008cfd8) bg_popup_window_pane_cp011

0xbdc5,	// (0x00097fe3) popup_blid2_search_window_g1

0xbdcd,	// (0x00097feb) popup_blid2_search_window_t1

0xbddb,	// (0x00097ff9) popup_blid2_search_window_t2

0x0001,

0xfaa2,	// (0x0009bcc0) popup_blid2_search_window_t

0xe4b6,	// (0x0009a6d4) main_browser_pane_g1

0xe1d3,	// (0x0009a3f1) main_browser_pane_ParamLimits

0xd93d,	// (0x00099b5b) bg_button_pane_cp011_ParamLimits

0x6e2d,	// (0x0009304b) cell_vitu2_function_pane_g1_ParamLimits

0xa6cb,	// (0x000968e9) bg_popup_sub_pane_cp22_ParamLimits

0x7726,	// (0x00093944) input_focus_pane_cp08_ParamLimits

0x773d,	// (0x0009395b) popup_vitu2_query_button_pane_ParamLimits

0x773d,	// (0x0009395b) popup_vitu2_query_button_pane

0x774e,	// (0x0009396c) popup_vitu2_query_input_button_pane

0xb974,	// (0x00097b92) popup_vitu2_query_window_g1_ParamLimits

0x7758,	// (0x00093976) popup_vitu2_query_window_g2_ParamLimits

0xf9a3,	// (0x0009bbc1) popup_vitu2_query_window_g_ParamLimits

0x0dba,	// (0x0008cfd8) bg_button_pane_cp026

0x7e44,	// (0x00094062) popup_vitu2_query_input_button_pane_g1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp025

0xbde9,	// (0x00098007) popup_vitu2_query_button_pane_t1

0x5488,	// (0x000916a6) main_mp3_pane_t6

0x5496,	// (0x000916b4) popup_slider_window_cp01

0xd8cc,	// (0x00099aea) cam4_battery_pane

0xd933,	// (0x00099b51) cam4_battery_pane_cp02

0xd9ca,	// (0x00099be8) cam4_battery_pane_cp01

0xd9ca,	// (0x00099be8) cam4_battery_pane_cp03

0xb50f,	// (0x0009772d) cam4_battery_pane_g1

0xabd1,	// (0x00096def) cam4_battery_pane_g2

0x0001,

0xfaa7,	// (0x0009bcc5) cam4_battery_pane_g

0xaa9d,	// (0x00096cbb) popup_blid_sat_info2_window_t11

0x2efb,	// (0x0008f119) aid_size_touch_mv_arrow_left_ParamLimits

0x2f24,	// (0x0008f142) aid_size_touch_mv_arrow_right_ParamLimits

0xec12,	// (0x0009ae30) navi_pane_g1_ParamLimits

0x2f4d,	// (0x0008f16b) navi_pane_g2_ParamLimits

0x2f7b,	// (0x0008f199) navi_pane_g3_ParamLimits

0xf3bf,	// (0x0009b5dd) navi_pane_g_ParamLimits

0x2fd3,	// (0x0008f1f1) navi_pane_mv_t1_ParamLimits

0x606a,	// (0x00092288) grid_imed_effect_pane_ParamLimits

0x1e03,	// (0x0008e021) aid_placing_vt_slider_lsc

0xe407,	// (0x0009a625) aid_placing_vt_slider_prt

0xf009,	// (0x0009b227) bg_tb_trans_pane_cp01_ParamLimits

0xad5d,	// (0x00096f7b) popup_image_details_window_g1_ParamLimits

0xad70,	// (0x00096f8e) popup_image_details_window_g2_ParamLimits

0xad85,	// (0x00096fa3) popup_image_details_window_g3_ParamLimits

0xad85,	// (0x00096fa3) popup_image_details_window_g3

0xf6b0,	// (0x0009b8ce) popup_image_details_window_g_ParamLimits

0xad99,	// (0x00096fb7) popup_image_details_window_t1_ParamLimits

0xadab,	// (0x00096fc9) popup_image_details_window_t2_ParamLimits

0xadc4,	// (0x00096fe2) popup_image_details_window_t3_ParamLimits

0xadd8,	// (0x00096ff6) popup_image_details_window_t4_ParamLimits

0xadf3,	// (0x00097011) popup_image_details_window_t5_ParamLimits

0xf6b7,	// (0x0009b8d5) popup_image_details_window_t_ParamLimits

0x7ac8,	// (0x00093ce6) cl_header_name_pane_ParamLimits

0x7ac8,	// (0x00093ce6) cl_header_name_pane

0x7e4c,	// (0x0009406a) cl_header_name_pane_t1_ParamLimits

0x7e4c,	// (0x0009406a) cl_header_name_pane_t1

0x7e6d,	// (0x0009408b) cl_header_name_pane_t2_ParamLimits

0x7e6d,	// (0x0009408b) cl_header_name_pane_t2

0x7eaf,	// (0x000940cd) cl_header_name_pane_t3_ParamLimits

0x7eaf,	// (0x000940cd) cl_header_name_pane_t3

0x0002,

0xfaac,	// (0x0009bcca) cl_header_name_pane_t_ParamLimits

0xfaac,	// (0x0009bcca) cl_header_name_pane_t

0x2fa4,	// (0x0008f1c2) navi_pane_mv_g2_ParamLimits

0xb645,	// (0x00097863) field_vitu2_entry_pane_g1_ParamLimits

0xb651,	// (0x0009786f) field_vitu2_entry_pane_g2_ParamLimits

0xb65d,	// (0x0009787b) field_vitu2_entry_pane_g3_ParamLimits

0xb65d,	// (0x0009787b) field_vitu2_entry_pane_g3

0xf8a9,	// (0x0009bac7) field_vitu2_entry_pane_g_ParamLimits

0x6da9,	// (0x00092fc7) cell_vitu2_itu_pane_g1_ParamLimits

0x6db9,	// (0x00092fd7) cell_vitu2_itu_pane_g2_ParamLimits

0x6db9,	// (0x00092fd7) cell_vitu2_itu_pane_g2

0x0001,

0xf8b5,	// (0x0009bad3) cell_vitu2_itu_pane_g_ParamLimits

0xf8b5,	// (0x0009bad3) cell_vitu2_itu_pane_g

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp05_ParamLimits

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp05

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp03

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp04

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp10_ParamLimits

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp10

0x7a6e,	// (0x00093c8c) bg_vkb2_func_pane_cp08

0x7a54,	// (0x00093c72) bg_vkb2_func_pane_cp06

0x7a62,	// (0x00093c80) bg_vkb2_func_pane_cp07

0xbcee,	// (0x00097f0c) bg_vkb2_func_pane_cp11_ParamLimits

0xbcee,	// (0x00097f0c) bg_vkb2_func_pane_cp11

0xbd03,	// (0x00097f21) bg_vkb2_func_pane_cp12_ParamLimits

0xbd03,	// (0x00097f21) bg_vkb2_func_pane_cp12

0x0dba,	// (0x0008cfd8) bg_vkb2_func_pane_cp09

0xb6c9,	// (0x000978e7) bg_vkb2_func_pane_g1

0xe5c7,	// (0x0009a7e5) bg_vkb2_func_pane_g2

0xb6d1,	// (0x000978ef) bg_vkb2_func_pane_g3

0xb6d9,	// (0x000978f7) bg_vkb2_func_pane_g4

0xb91f,	// (0x00097b3d) bg_vkb2_func_pane_g5

0xb6f1,	// (0x0009790f) bg_vkb2_func_pane_g6

0xb6f9,	// (0x00097917) bg_vkb2_func_pane_g7

0xb6e9,	// (0x00097907) bg_vkb2_func_pane_g8

0xe5a7,	// (0x0009a7c5) bg_vkb2_func_pane_g9

0x0008,

0xfab3,	// (0x0009bcd1) bg_vkb2_func_pane_g

0x7d70,	// (0x00093f8e) blid2_tripm_pane_g6_ParamLimits

0x7d70,	// (0x00093f8e) blid2_tripm_pane_g6

0xb4c9,	// (0x000976e7) mp4_progress_pane_g1

0x7de9,	// (0x00094007) blid2_tripm_values_pane_ParamLimits

0x7de9,	// (0x00094007) blid2_tripm_values_pane

0x7ee0,	// (0x000940fe) blid2_tripm_values_pane_t1

0x7eee,	// (0x0009410c) blid2_tripm_values_pane_t2

0x7efc,	// (0x0009411a) blid2_tripm_values_pane_t3

0x7f0a,	// (0x00094128) blid2_tripm_values_pane_t4

0x7f18,	// (0x00094136) blid2_tripm_values_pane_t5

0x7f26,	// (0x00094144) blid2_tripm_values_pane_t6

0x7f34,	// (0x00094152) blid2_tripm_values_pane_t7

0x7f42,	// (0x00094160) blid2_tripm_values_pane_t8

0x7f50,	// (0x0009416e) blid2_tripm_values_pane_t9

0x0008,

0xfac6,	// (0x0009bce4) blid2_tripm_values_pane_t

0x1e45,	// (0x0008e063) call_video_pane_t1_ParamLimits

0x1e63,	// (0x0008e081) call_video_pane_t2_ParamLimits

0xf292,	// (0x0009b4b0) call_video_pane_t_ParamLimits

0x34a5,	// (0x0008f6c3) msg_header_pane_g1_ParamLimits

0xee2d,	// (0x0009b04b) msg_header_pane_g2_ParamLimits

0xee2d,	// (0x0009b04b) msg_header_pane_g2

0x0001,

0xf43c,	// (0x0009b65a) msg_header_pane_g_ParamLimits

0xf43c,	// (0x0009b65a) msg_header_pane_g

0xe1d3,	// (0x0009a3f1) main_clock2_pane_ParamLimits

0x5d96,	// (0x00091fb4) grid_clock2_toolbar_pane_ParamLimits

0x5d96,	// (0x00091fb4) grid_clock2_toolbar_pane

0x5d96,	// (0x00091fb4) listscroll_clock2_pane_ParamLimits

0x5d96,	// (0x00091fb4) listscroll_clock2_pane

0x5e72,	// (0x00092090) main_clock2_pane_t3_ParamLimits

0x5e72,	// (0x00092090) main_clock2_pane_t3

0x5e8d,	// (0x000920ab) main_clock2_pane_t4_ParamLimits

0x5e8d,	// (0x000920ab) main_clock2_pane_t4

0xbdf7,	// (0x00098015) cell_clock2_toolbar_pane

0xbdff,	// (0x0009801d) cell_clock2_toolbar_pane_cp01

0xbdff,	// (0x0009801d) cell_clock2_toolbar_pane_cp02

0xbe07,	// (0x00098025) cell_clock2_toolbar_pane_cp03

0xbe0f,	// (0x0009802d) list_clock2_pane

0xeb69,	// (0x0009ad87) scroll_pane_cp10

0xbe17,	// (0x00098035) list_single_clock2_pane_ParamLimits

0xbe17,	// (0x00098035) list_single_clock2_pane

0xecb2,	// (0x0009aed0) list_highlight_pane_cp08

0xbe24,	// (0x00098042) list_single_clock2_pane_t1

0xbe32,	// (0x00098050) list_single_clock2_pane_t2

0x0001,

0xfad9,	// (0x0009bcf7) list_single_clock2_pane_t

0x0dba,	// (0x0008cfd8) bg_button_pane_cp10

0xbe40,	// (0x0009805e) cell_clock2_toolbar_pane_g1

0x352e,	// (0x0008f74c) aid_main_viewer_pane_g1_ParamLimits

0x352e,	// (0x0008f74c) aid_main_viewer_pane_g1

0x353c,	// (0x0008f75a) aid_main_viewer_pane_g2_ParamLimits

0x353c,	// (0x0008f75a) aid_main_viewer_pane_g2

0x354a,	// (0x0008f768) aid_main_viewer_pane_g3_ParamLimits

0x354a,	// (0x0008f768) aid_main_viewer_pane_g3

0x3559,	// (0x0008f777) aid_main_viewer_pane_g4_ParamLimits

0x3559,	// (0x0008f777) aid_main_viewer_pane_g4

0x0003,

0xf44d,	// (0x0009b66b) aid_main_viewer_pane_g_ParamLimits

0xf44d,	// (0x0009b66b) aid_main_viewer_pane_g

0x46ab,	// (0x000908c9) main_calc_pane_ParamLimits

0x46bf,	// (0x000908dd) main_dialer2_pane_ParamLimits

0x0dba,	// (0x0008cfd8) main_cam6_pane

0x0dba,	// (0x0008cfd8) main_vid6_pane

0x5da2,	// (0x00091fc0) listscroll_gen_pane_cp06_ParamLimits

0x5da2,	// (0x00091fc0) listscroll_gen_pane_cp06

0x5ea8,	// (0x000920c6) main_clock2_pane_t5_ParamLimits

0x5ea8,	// (0x000920c6) main_clock2_pane_t5

0x5eff,	// (0x0009211d) aid_call2_pane_cp10_ParamLimits

0x5f11,	// (0x0009212f) aid_call_pane_cp10_ParamLimits

0xebe7,	// (0x0009ae05) popup_clock_analogue_window_cp10_g1_ParamLimits

0xebe7,	// (0x0009ae05) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5f23,	// (0x00092141) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5f23,	// (0x00092141) popup_clock_analogue_window_cp10_g4_ParamLimits

0xebe7,	// (0x0009ae05) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf767,	// (0x0009b985) popup_clock_analogue_window_cp10_g_ParamLimits

0x5f35,	// (0x00092153) popup_clock_analogue_window_cp10_t1_ParamLimits

0x657d,	// (0x0009279b) cell_dialer2_keypad_pane_g2_ParamLimits

0x657d,	// (0x0009279b) cell_dialer2_keypad_pane_g2

0x0001,

0xf848,	// (0x0009ba66) cell_dialer2_keypad_pane_g_ParamLimits

0xf848,	// (0x0009ba66) cell_dialer2_keypad_pane_g

0x6599,	// (0x000927b7) cell_dialer2_keypad_pane_t1

0x7144,	// (0x00093362) main_cset_text2_pane_ParamLimits

0x7144,	// (0x00093362) main_cset_text2_pane

0xbb60,	// (0x00097d7e) area_vitu2_query_pane_g1_ParamLimits

0x79f3,	// (0x00093c11) area_vitu2_query_pane_g2_ParamLimits

0xf9f6,	// (0x0009bc14) area_vitu2_query_pane_g_ParamLimits

0xbbe4,	// (0x00097e02) area_vitu2_query_pane_t7_ParamLimits

0xbbe4,	// (0x00097e02) area_vitu2_query_pane_t7

0x7a54,	// (0x00093c72) bg_button_pane_cp018_ParamLimits

0x7a62,	// (0x00093c80) bg_button_pane_cp021_ParamLimits

0x7a6e,	// (0x00093c8c) bg_button_pane_cp022_ParamLimits

0x7a6e,	// (0x00093c8c) bg_vkb2_func_pane_cp08_ParamLimits

0x7a54,	// (0x00093c72) bg_vkb2_func_pane_cp06_ParamLimits

0x7a62,	// (0x00093c80) bg_vkb2_func_pane_cp07_ParamLimits

0x7a7d,	// (0x00093c9b) input_focus_pane_cp09_ParamLimits

0xda62,	// (0x00099c80) cam6_autofocus_pane_ParamLimits

0xda62,	// (0x00099c80) cam6_autofocus_pane

0x7f5e,	// (0x0009417c) cam6_image_uncrop_pane_ParamLimits

0x7f5e,	// (0x0009417c) cam6_image_uncrop_pane

0x7f6d,	// (0x0009418b) cam6_indi_pane_ParamLimits

0x7f6d,	// (0x0009418b) cam6_indi_pane

0x7f83,	// (0x000941a1) cam6_mode_pane_ParamLimits

0x7f83,	// (0x000941a1) cam6_mode_pane

0x7f95,	// (0x000941b3) cam6_timer_pane_ParamLimits

0x7f95,	// (0x000941b3) cam6_timer_pane

0x7fa1,	// (0x000941bf) cam6_zoom_pane_ParamLimits

0x7fa1,	// (0x000941bf) cam6_zoom_pane

0x7fad,	// (0x000941cb) cam6_mode_pane_g1_ParamLimits

0x7fad,	// (0x000941cb) cam6_mode_pane_g1

0x7fbd,	// (0x000941db) cam6_mode_pane_g2_ParamLimits

0x7fbd,	// (0x000941db) cam6_mode_pane_g2

0x7fcd,	// (0x000941eb) cam6_mode_pane_g3_ParamLimits

0x7fcd,	// (0x000941eb) cam6_mode_pane_g3

0x7fdd,	// (0x000941fb) cam6_mode_pane_g4_ParamLimits

0x7fdd,	// (0x000941fb) cam6_mode_pane_g4

0x0003,

0xfade,	// (0x0009bcfc) cam6_mode_pane_g_ParamLimits

0xfade,	// (0x0009bcfc) cam6_mode_pane_g

0xbe48,	// (0x00098066) bg_tb_trans_pane_cp08_ParamLimits

0xbe48,	// (0x00098066) bg_tb_trans_pane_cp08

0xbe56,	// (0x00098074) cam6_battery_pane_ParamLimits

0xbe56,	// (0x00098074) cam6_battery_pane

0xbe6c,	// (0x0009808a) cam6_indi_pane_g1_ParamLimits

0xbe6c,	// (0x0009808a) cam6_indi_pane_g1

0xbe7e,	// (0x0009809c) cam6_indi_pane_g2_ParamLimits

0xbe7e,	// (0x0009809c) cam6_indi_pane_g2

0xbe90,	// (0x000980ae) cam6_indi_pane_g3_ParamLimits

0xbe90,	// (0x000980ae) cam6_indi_pane_g3

0x0002,

0xfae7,	// (0x0009bd05) cam6_indi_pane_g_ParamLimits

0xfae7,	// (0x0009bd05) cam6_indi_pane_g

0xbea2,	// (0x000980c0) cam6_indi_pane_t1_ParamLimits

0xbea2,	// (0x000980c0) cam6_indi_pane_t1

0x7fed,	// (0x0009420b) cam6_autofocus_pane_g1

0x7ff5,	// (0x00094213) cam6_autofocus_pane_g2

0x7ffd,	// (0x0009421b) cam6_autofocus_pane_g3

0x8005,	// (0x00094223) cam6_autofocus_pane_g4

0x0003,

0xfaee,	// (0x0009bd0c) cam6_autofocus_pane_g

0xbec8,	// (0x000980e6) cam6_timer_pane_g1

0xbed0,	// (0x000980ee) cam6_timer_pane_t1

0xbede,	// (0x000980fc) cam6_zoom_cont_pane

0xbee6,	// (0x00098104) cam6_zoom_pane_g1

0xbeee,	// (0x0009810c) cam6_zoom_pane_g2

0x800d,	// (0x0009422b) cam6_zoom_pane_g3

0x0002,

0xfaf7,	// (0x0009bd15) cam6_zoom_pane_g

0xabd1,	// (0x00096def) cam6_battery_pane_g1

0xabd1,	// (0x00096def) cam6_battery_pane_g2

0x0001,

0xf674,	// (0x0009b892) cam6_battery_pane_g

0xbef6,	// (0x00098114) cam6_zoom_cont_pane_g1

0xbeff,	// (0x0009811d) cam6_zoom_cont_pane_g2

0xbf08,	// (0x00098126) cam6_zoom_cont_pane_g3

0x0002,

0xfafe,	// (0x0009bd1c) cam6_zoom_cont_pane_g

0x802a,	// (0x00094248) cam6_mode_pane_cp_ParamLimits

0x802a,	// (0x00094248) cam6_mode_pane_cp

0x803c,	// (0x0009425a) cam6_zoom_pane_cp_ParamLimits

0x803c,	// (0x0009425a) cam6_zoom_pane_cp

0x8048,	// (0x00094266) vid6_image_uncrop_cif_pane_ParamLimits

0x8048,	// (0x00094266) vid6_image_uncrop_cif_pane

0x8058,	// (0x00094276) vid6_image_uncrop_nhd_pane_ParamLimits

0x8058,	// (0x00094276) vid6_image_uncrop_nhd_pane

0x8067,	// (0x00094285) vid6_image_uncrop_vga_pane_ParamLimits

0x8067,	// (0x00094285) vid6_image_uncrop_vga_pane

0x8076,	// (0x00094294) vid6_image_uncrop_wvga_pane_ParamLimits

0x8076,	// (0x00094294) vid6_image_uncrop_wvga_pane

0x8085,	// (0x000942a3) vid6_indi_pane_ParamLimits

0x8085,	// (0x000942a3) vid6_indi_pane

0xbe48,	// (0x00098066) bg_tb_trans_pane_cp09_ParamLimits

0xbe48,	// (0x00098066) bg_tb_trans_pane_cp09

0xbf20,	// (0x0009813e) cam6_battery_pane_cp_ParamLimits

0xbf20,	// (0x0009813e) cam6_battery_pane_cp

0xbf2c,	// (0x0009814a) vid6_indi_pane_g1_ParamLimits

0xbf2c,	// (0x0009814a) vid6_indi_pane_g1

0xbf3e,	// (0x0009815c) vid6_indi_pane_g2_ParamLimits

0xbf3e,	// (0x0009815c) vid6_indi_pane_g2

0xbf50,	// (0x0009816e) vid6_indi_pane_g3_ParamLimits

0xbf50,	// (0x0009816e) vid6_indi_pane_g3

0xbf65,	// (0x00098183) vid6_indi_pane_g4_ParamLimits

0xbf65,	// (0x00098183) vid6_indi_pane_g4

0xbf7a,	// (0x00098198) vid6_indi_pane_g5_ParamLimits

0xbf7a,	// (0x00098198) vid6_indi_pane_g5

0x0004,

0xfb05,	// (0x0009bd23) vid6_indi_pane_g_ParamLimits

0xfb05,	// (0x0009bd23) vid6_indi_pane_g

0xbf94,	// (0x000981b2) vid6_indi_pane_t1_ParamLimits

0xbf94,	// (0x000981b2) vid6_indi_pane_t1

0xbfaa,	// (0x000981c8) vid6_indi_pane_t2_ParamLimits

0xbfaa,	// (0x000981c8) vid6_indi_pane_t2

0xbfd2,	// (0x000981f0) vid6_indi_pane_t3_ParamLimits

0xbfd2,	// (0x000981f0) vid6_indi_pane_t3

0xbffa,	// (0x00098218) vid6_indi_pane_t4_ParamLimits

0xbffa,	// (0x00098218) vid6_indi_pane_t4

0x0003,

0xfb10,	// (0x0009bd2e) vid6_indi_pane_t_ParamLimits

0xfb10,	// (0x0009bd2e) vid6_indi_pane_t

0xc01e,	// (0x0009823c) wait_bar_pane_cp08

0x809d,	// (0x000942bb) main_cset_text2_pane_t1_ParamLimits

0x809d,	// (0x000942bb) main_cset_text2_pane_t1

0x8015,	// (0x00094233) listscroll_gen_pane_cp06_t1_ParamLimits

0x8015,	// (0x00094233) listscroll_gen_pane_cp06_t1

0x0dba,	// (0x0008cfd8) main_cam6_set_pane

0xd8be,	// (0x00099adc) bg_tb_trans_pane_cp06_ParamLimits

0xd8d4,	// (0x00099af2) cam4_indicators_pane_g1_ParamLimits

0xd8e5,	// (0x00099b03) cam4_indicators_pane_g2_ParamLimits

0xf885,	// (0x0009baa3) cam4_indicators_pane_g_ParamLimits

0xd903,	// (0x00099b21) cam4_indicators_pane_t1_ParamLimits

0xd925,	// (0x00099b43) bg_tb_trans_pane_cp07_ParamLimits

0x6b2d,	// (0x00092d4b) vid4_indicators_pane_g1_ParamLimits

0x6b3a,	// (0x00092d58) vid4_indicators_pane_g2_ParamLimits

0x6b47,	// (0x00092d65) vid4_indicators_pane_g3_ParamLimits

0x6b54,	// (0x00092d72) vid4_indicators_pane_g4_ParamLimits

0xf897,	// (0x0009bab5) vid4_indicators_pane_g_ParamLimits

0x6b6c,	// (0x00092d8a) vid4_indicators_pane_t1_ParamLimits

0xd9d2,	// (0x00099bf0) vid4_progress_pane_g1_ParamLimits

0xd9e2,	// (0x00099c00) vid4_progress_pane_g2_ParamLimits

0xe86c,	// (0x0009aa8a) vid4_progress_pane_g3_ParamLimits

0xd9f2,	// (0x00099c10) vid4_progress_pane_g4_ParamLimits

0xfa41,	// (0x0009bc5f) vid4_progress_pane_g_ParamLimits

0xda10,	// (0x00099c2e) vid4_progress_pane_t1_ParamLimits

0xda25,	// (0x00099c43) vid4_progress_pane_t2_ParamLimits

0xda3b,	// (0x00099c59) vid4_progress_pane_t3_ParamLimits

0xfa4c,	// (0x0009bc6a) vid4_progress_pane_t_ParamLimits

0xda50,	// (0x00099c6e) wait_bar_pane_cp07_ParamLimits

0x80ba,	// (0x000942d8) main_cam6_set_pane_g2_ParamLimits

0x80ba,	// (0x000942d8) main_cam6_set_pane_g2

0x80de,	// (0x000942fc) main_cset6_listscroll_pane_ParamLimits

0x80de,	// (0x000942fc) main_cset6_listscroll_pane

0x80fe,	// (0x0009431c) main_cset6_slider_pane_ParamLimits

0x80fe,	// (0x0009431c) main_cset6_slider_pane

0x8114,	// (0x00094332) main_cset6_text2_pane_ParamLimits

0x8114,	// (0x00094332) main_cset6_text2_pane

0xc02d,	// (0x0009824b) main_cset6_text_pane

0xc035,	// (0x00098253) main_cset_list_pane_copy1_ParamLimits

0xc035,	// (0x00098253) main_cset_list_pane_copy1

0xc045,	// (0x00098263) scroll_pane_cp028_copy1

0x8122,	// (0x00094340) cset_list_set_pane_copy1

0x8133,	// (0x00094351) aid_position_infowindow_above_copy1

0x813b,	// (0x00094359) aid_position_infowindow_below_copy1

0x8143,	// (0x00094361) cset_list_set_pane_g1_copy1

0x814b,	// (0x00094369) cset_list_set_pane_g3_copy1_ParamLimits

0x814b,	// (0x00094369) cset_list_set_pane_g3_copy1

0x815a,	// (0x00094378) cset_list_set_pane_t1_copy1_ParamLimits

0x815a,	// (0x00094378) cset_list_set_pane_t1_copy1

0xf009,	// (0x0009b227) list_highlight_pane_cp021_copy1_ParamLimits

0xf009,	// (0x0009b227) list_highlight_pane_cp021_copy1

0xc04e,	// (0x0009826c) cset6_slider_pane_ParamLimits

0xc04e,	// (0x0009826c) cset6_slider_pane

0xc07a,	// (0x00098298) main_cset6_slider_pane_g1_ParamLimits

0xc07a,	// (0x00098298) main_cset6_slider_pane_g1

0x816f,	// (0x0009438d) main_cset6_slider_pane_g2_ParamLimits

0x816f,	// (0x0009438d) main_cset6_slider_pane_g2

0xc0a2,	// (0x000982c0) main_cset6_slider_pane_g3_ParamLimits

0xc0a2,	// (0x000982c0) main_cset6_slider_pane_g3

0x8197,	// (0x000943b5) main_cset6_slider_pane_g4_ParamLimits

0x8197,	// (0x000943b5) main_cset6_slider_pane_g4

0x81a3,	// (0x000943c1) main_cset6_slider_pane_g5_ParamLimits

0x81a3,	// (0x000943c1) main_cset6_slider_pane_g5

0xb7f8,	// (0x00097a16) main_cset6_slider_pane_g7_ParamLimits

0xb7f8,	// (0x00097a16) main_cset6_slider_pane_g7

0xb804,	// (0x00097a22) main_cset6_slider_pane_g8_ParamLimits

0xb804,	// (0x00097a22) main_cset6_slider_pane_g8

0x71f1,	// (0x0009340f) main_cset6_slider_pane_g9_ParamLimits

0x71f1,	// (0x0009340f) main_cset6_slider_pane_g9

0x71fd,	// (0x0009341b) main_cset6_slider_pane_g10_ParamLimits

0x71fd,	// (0x0009341b) main_cset6_slider_pane_g10

0x7209,	// (0x00093427) main_cset6_slider_pane_g11_ParamLimits

0x7209,	// (0x00093427) main_cset6_slider_pane_g11

0x7215,	// (0x00093433) main_cset6_slider_pane_g12_ParamLimits

0x7215,	// (0x00093433) main_cset6_slider_pane_g12

0x7221,	// (0x0009343f) main_cset6_slider_pane_g13_ParamLimits

0x7221,	// (0x0009343f) main_cset6_slider_pane_g13

0x722d,	// (0x0009344b) main_cset6_slider_pane_g14_ParamLimits

0x722d,	// (0x0009344b) main_cset6_slider_pane_g14

0x81af,	// (0x000943cd) main_cset6_slider_pane_g15_ParamLimits

0x81af,	// (0x000943cd) main_cset6_slider_pane_g15

0x7251,	// (0x0009346f) main_cset6_slider_pane_g16_ParamLimits

0x7251,	// (0x0009346f) main_cset6_slider_pane_g16

0x725d,	// (0x0009347b) main_cset6_slider_pane_g17_ParamLimits

0x725d,	// (0x0009347b) main_cset6_slider_pane_g17

0x0011,

0xfb19,	// (0x0009bd37) main_cset6_slider_pane_g_ParamLimits

0xfb19,	// (0x0009bd37) main_cset6_slider_pane_g

0xc0ae,	// (0x000982cc) main_cset6_slider_pane_t1_ParamLimits

0xc0ae,	// (0x000982cc) main_cset6_slider_pane_t1

0x81df,	// (0x000943fd) main_cset6_slider_pane_t2_ParamLimits

0x81df,	// (0x000943fd) main_cset6_slider_pane_t2

0x820a,	// (0x00094428) main_cset6_slider_pane_t3_ParamLimits

0x820a,	// (0x00094428) main_cset6_slider_pane_t3

0x8235,	// (0x00094453) main_cset6_slider_pane_t4_ParamLimits

0x8235,	// (0x00094453) main_cset6_slider_pane_t4

0x8260,	// (0x0009447e) main_cset6_slider_pane_t5_ParamLimits

0x8260,	// (0x0009447e) main_cset6_slider_pane_t5

0xc0ef,	// (0x0009830d) main_cset6_slider_pane_t7_ParamLimits

0xc0ef,	// (0x0009830d) main_cset6_slider_pane_t7

0x828b,	// (0x000944a9) main_cset6_slider_pane_t8_ParamLimits

0x828b,	// (0x000944a9) main_cset6_slider_pane_t8

0x82af,	// (0x000944cd) main_cset6_slider_pane_t9_ParamLimits

0x82af,	// (0x000944cd) main_cset6_slider_pane_t9

0x82d3,	// (0x000944f1) main_cset6_slider_pane_t10_ParamLimits

0x82d3,	// (0x000944f1) main_cset6_slider_pane_t10

0x82f7,	// (0x00094515) main_cset6_slider_pane_t11_ParamLimits

0x82f7,	// (0x00094515) main_cset6_slider_pane_t11

0xc125,	// (0x00098343) main_cset6_slider_pane_t14_ParamLimits

0xc125,	// (0x00098343) main_cset6_slider_pane_t14

0xc15e,	// (0x0009837c) main_cset6_slider_pane_t15_ParamLimits

0xc15e,	// (0x0009837c) main_cset6_slider_pane_t15

0x000b,

0xfb3e,	// (0x0009bd5c) main_cset6_slider_pane_t_ParamLimits

0xfb3e,	// (0x0009bd5c) main_cset6_slider_pane_t

0xc197,	// (0x000983b5) cset_slider_pane_g1_copy1

0xc1a0,	// (0x000983be) cset_slider_pane_g2_copy1

0xc1a9,	// (0x000983c7) cset_slider_pane_g3_copy1

0x0dba,	// (0x0008cfd8) bg_popup_sub_pane_cp011_copy1

0xb980,	// (0x00097b9e) main_cset_text_pane_g1_copy1

0xb988,	// (0x00097ba6) main_cset_text_pane_t1_copy1

0xb996,	// (0x00097bb4) main_cset_text_pane_t2_copy1

0xb9a4,	// (0x00097bc2) main_cset_text_pane_t3_copy1

0xb9b2,	// (0x00097bd0) main_cset_text_pane_t4_copy1

0xb9c0,	// (0x00097bde) main_cset_text_pane_t5_copy1

0xb9ce,	// (0x00097bec) main_cset_text_pane_t6_copy1

0xb9dc,	// (0x00097bfa) main_cset_text_pane_t7_copy1

0x831b,	// (0x00094539) main_cset_text2_pane_t1_copy1

0x0dba,	// (0x0008cfd8) main_ncimui_pane

0x4901,	// (0x00090b1f) popup_query_ncimui_window_ParamLimits

0x4901,	// (0x00090b1f) popup_query_ncimui_window

0xaea2,	// (0x000970c0) field_cale_ev2_pane_g4_ParamLimits

0xaea2,	// (0x000970c0) field_cale_ev2_pane_g4

0x645d,	// (0x0009267b) cell_video_dialer_keypad_pane_g2_ParamLimits

0x645d,	// (0x0009267b) cell_video_dialer_keypad_pane_g2

0x0001,

0xf823,	// (0x0009ba41) cell_video_dialer_keypad_pane_g_ParamLimits

0xf823,	// (0x0009ba41) cell_video_dialer_keypad_pane_g

0x6475,	// (0x00092693) cell_video_dialer_keypad_pane_t1

0x0dba,	// (0x0008cfd8) bg_popup_window_pane_cp012

0xea38,	// (0x0009ac56) heading_pane_cp06

0xc2a1,	// (0x000984bf) ncim_query_content_pane

0x0dba,	// (0x0008cfd8) bg_popup_heading_pane_cp01

0xc2a9,	// (0x000984c7) ncim_heading_pane_t1

0xc2b7,	// (0x000984d5) ncim_indicator_popup_pane

0xc2c9,	// (0x000984e7) ncim_query_button_pane

0xc2dd,	// (0x000984fb) ncim_query_content_pane_t1

0xc2ef,	// (0x0009850d) ncim_query_content_pane_t2

0x0005,

0xfb7d,	// (0x0009bd9b) ncim_query_content_pane_t

0xc329,	// (0x00098547) ncim_query_list_pane

0xc33b,	// (0x00098559) ncim_query_popup_pane

0xc2b7,	// (0x000984d5) ncim_indicator_popup_pane_ParamLimits

0x8430,	// (0x0009464e) ncim_query_content_pane_g1_ParamLimits

0x8430,	// (0x0009464e) ncim_query_content_pane_g1

0xc2dd,	// (0x000984fb) ncim_query_content_pane_t1_ParamLimits

0xc2ef,	// (0x0009850d) ncim_query_content_pane_t2_ParamLimits

0x843c,	// (0x0009465a) ncim_query_content_pane_t3_ParamLimits

0x843c,	// (0x0009465a) ncim_query_content_pane_t3

0x8464,	// (0x00094682) ncim_query_content_pane_t4_ParamLimits

0x8464,	// (0x00094682) ncim_query_content_pane_t4

0x848c,	// (0x000946aa) ncim_query_content_pane_t5_ParamLimits

0x848c,	// (0x000946aa) ncim_query_content_pane_t5

0xc301,	// (0x0009851f) ncim_query_content_pane_t6_ParamLimits

0xc301,	// (0x0009851f) ncim_query_content_pane_t6

0xfb7d,	// (0x0009bd9b) ncim_query_content_pane_t_ParamLimits

0xc329,	// (0x00098547) ncim_query_list_pane_ParamLimits

0xc33b,	// (0x00098559) ncim_query_popup_pane_ParamLimits

0xc34f,	// (0x0009856d) wait_bar_pane_cp04

0x0dba,	// (0x0008cfd8) input_focus_pane_cp011

0xc357,	// (0x00098575) ncim_query_popup_pane_t1

0xc365,	// (0x00098583) ncim_list_query_list_pane_ParamLimits

0xc365,	// (0x00098583) ncim_list_query_list_pane

0x0dba,	// (0x0008cfd8) bg_button_pane_cp027

0xc372,	// (0x00098590) ncim_query_button_pane_g1

0x0dba,	// (0x0008cfd8) list_highlight_pane_cp012

0xc37c,	// (0x0009859a) ncim_list_query_list_pane_g1

0xc384,	// (0x000985a2) ncim_list_query_list_pane_t1

0xd8f4,	// (0x00099b12) cam4_indicators_pane_g3_ParamLimits

0xd8f4,	// (0x00099b12) cam4_indicators_pane_g3

0x6b60,	// (0x00092d7e) vid4_indicators_pane_g5_ParamLimits

0x6b60,	// (0x00092d7e) vid4_indicators_pane_g5

0xda01,	// (0x00099c1f) vid4_progress_pane_g5_ParamLimits

0xda01,	// (0x00099c1f) vid4_progress_pane_g5

0x8349,	// (0x00094567) main_ncimui_pane_g1

0x839f,	// (0x000945bd) ncimui_group_query_pane_ParamLimits

0x839f,	// (0x000945bd) ncimui_group_query_pane

0x83db,	// (0x000945f9) ncimui_list_pane_ParamLimits

0x83db,	// (0x000945f9) ncimui_list_pane

0x83fc,	// (0x0009461a) ncimui_text_pane_ParamLimits

0x83fc,	// (0x0009461a) ncimui_text_pane

0x84b4,	// (0x000946d2) ncimui_text_pane_t1_ParamLimits

0x84b4,	// (0x000946d2) ncimui_text_pane_t1

0xc392,	// (0x000985b0) ncimui_list_single_graphic_pane_ParamLimits

0xc392,	// (0x000985b0) ncimui_list_single_graphic_pane

0x84d2,	// (0x000946f0) ncimui_query_pane_ParamLimits

0x84d2,	// (0x000946f0) ncimui_query_pane

0x0dba,	// (0x0008cfd8) list_highlight_pane_cp013

0xc3a2,	// (0x000985c0) ncim_list_query_list_pane_t1_copy1

0xc37c,	// (0x0009859a) ncim_list_single_graphic_pane_g1

0xc3b0,	// (0x000985ce) ncim_query_button_pane_cp01

0xc3bc,	// (0x000985da) ncim_query_entry_pane_ParamLimits

0xc3bc,	// (0x000985da) ncim_query_entry_pane

0xc3cf,	// (0x000985ed) ncimui_query_pane_g1

0xc3db,	// (0x000985f9) ncimui_query_pane_t1_ParamLimits

0xc3db,	// (0x000985f9) ncimui_query_pane_t1

0xf009,	// (0x0009b227) input_focus_pane_cp012

0xc3f4,	// (0x00098612) ncim_query_entry_pane_t1

0xe1d3,	// (0x0009a3f1) main_im_pane_ParamLimits

0xf009,	// (0x0009b227) main_mobtv_pane_ParamLimits

0xf009,	// (0x0009b227) main_mobtv_pane

0x81c7,	// (0x000943e5) main_cset6_slider_pane_g18_ParamLimits

0x81c7,	// (0x000943e5) main_cset6_slider_pane_g18

0x81d3,	// (0x000943f1) main_cset6_slider_pane_g19_ParamLimits

0x81d3,	// (0x000943f1) main_cset6_slider_pane_g19

0xc406,	// (0x00098624) bg_main_mobtv_pane_ParamLimits

0xc406,	// (0x00098624) bg_main_mobtv_pane

0x84e5,	// (0x00094703) main_mobtv_info_pane

0x84ee,	// (0x0009470c) main_mobtv_loading_pane_ParamLimits

0x84ee,	// (0x0009470c) main_mobtv_loading_pane

0xc414,	// (0x00098632) main_mobtv_pg_channel_list_pane

0xc41e,	// (0x0009863c) main_mobtv_pg_hdr_pane

0x84fb,	// (0x00094719) main_mobtv_programe_curr_pane_ParamLimits

0x84fb,	// (0x00094719) main_mobtv_programe_curr_pane

0x8508,	// (0x00094726) main_mobtv_programe_next_pane_ParamLimits

0x8508,	// (0x00094726) main_mobtv_programe_next_pane

0xc427,	// (0x00098645) popup_mobtv_noti_window

0xabd1,	// (0x00096def) main_tv_pg_hdr_pane_g1

0xc42f,	// (0x0009864d) main_tv_pg_hdr_pane_g2

0xc437,	// (0x00098655) main_tv_pg_hdr_pane_g3

0xc43f,	// (0x0009865d) main_tv_pg_hdr_pane_g4

0xc447,	// (0x00098665) main_tv_pg_hdr_pane_g5

0xc451,	// (0x0009866f) main_tv_pg_hdr_pane_g6

0xc45b,	// (0x00098679) main_tv_pg_hdr_pane_g7

0xc465,	// (0x00098683) main_tv_pg_hdr_pane_g8

0xc46f,	// (0x0009868d) main_tv_pg_hdr_pane_g9

0xc479,	// (0x00098697) main_tv_pg_hdr_pane_g10

0xc483,	// (0x000986a1) main_tv_pg_hdr_pane_g11

0x000a,

0xfb8a,	// (0x0009bda8) main_tv_pg_hdr_pane_g

0xc48d,	// (0x000986ab) main_tv_pg_hdr_pane_t1

0xc49b,	// (0x000986b9) main_tv_pg_hdr_pane_t2

0xc4a9,	// (0x000986c7) main_tv_pg_hdr_pane_t3

0xc4b9,	// (0x000986d7) main_tv_pg_hdr_pane_t4

0xc4c9,	// (0x000986e7) main_tv_pg_hdr_pane_t5

0x0004,

0xfba1,	// (0x0009bdbf) main_tv_pg_hdr_pane_t

0xc4d9,	// (0x000986f7) single_mobtv_pg_channel_pane_ParamLimits

0xc4d9,	// (0x000986f7) single_mobtv_pg_channel_pane

0xc4eb,	// (0x00098709) single_mobtv_pg_channel_table_pane

0xc4f4,	// (0x00098712) single_mobtv_pg_channel_thumb_pane

0xc4fd,	// (0x0009871b) single_tv_pg_channel_pane_g1

0xc506,	// (0x00098724) single_tv_pg_channel_pane_g2

0x0001,

0xfbac,	// (0x0009bdca) single_tv_pg_channel_pane_g

0xae3d,	// (0x0009705b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xae3d,	// (0x0009705b) bg_single_mobtv_pg_channel_thumb_pane

0xc50f,	// (0x0009872d) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xc50f,	// (0x0009872d) single_mobtv_pg_channel_thumb_pane_g1

0xc51d,	// (0x0009873b) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xc51d,	// (0x0009873b) single_mobtv_pg_channel_thumb_pane_g2

0xc529,	// (0x00098747) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xc529,	// (0x00098747) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbb1,	// (0x0009bdcf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbb1,	// (0x0009bdcf) single_mobtv_pg_channel_thumb_pane_g

0xc535,	// (0x00098753) single_mobtv_pg_channel_thumb_pane_t1

0xc543,	// (0x00098761) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfbb8,	// (0x0009bdd6) single_mobtv_pg_channel_thumb_pane_t

0xabd1,	// (0x00096def) bg_single_mobtv_pg_channel_table_pane_g1

0xabd1,	// (0x00096def) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf674,	// (0x0009b892) bg_single_mobtv_pg_channel_table_pane_g

0xc551,	// (0x0009876f) single_mobtv_pg_channel_table_pane_t1

0xc55f,	// (0x0009877d) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfbbd,	// (0x0009bddb) single_mobtv_pg_channel_table_pane_t

0x851d,	// (0x0009473b) main_mobtv_info_pane_g1_ParamLimits

0x851d,	// (0x0009473b) main_mobtv_info_pane_g1

0x853b,	// (0x00094759) main_mobtv_info_pane_t1_ParamLimits

0x853b,	// (0x00094759) main_mobtv_info_pane_t1

0x85b3,	// (0x000947d1) main_mobtv_info_pane_t2_ParamLimits

0x85b3,	// (0x000947d1) main_mobtv_info_pane_t2

0x0002,

0xfbc7,	// (0x0009bde5) main_mobtv_info_pane_t_ParamLimits

0xfbc7,	// (0x0009bde5) main_mobtv_info_pane_t

0x8642,	// (0x00094860) wait_bar_pane_cp05

0x8654,	// (0x00094872) main_mobtv_loading_pane_g1_ParamLimits

0x8654,	// (0x00094872) main_mobtv_loading_pane_g1

0x8667,	// (0x00094885) main_mobtv_loading_pane_g2_ParamLimits

0x8667,	// (0x00094885) main_mobtv_loading_pane_g2

0x8673,	// (0x00094891) main_mobtv_loading_pane_g3_ParamLimits

0x8673,	// (0x00094891) main_mobtv_loading_pane_g3

0x0002,

0xfbce,	// (0x0009bdec) main_mobtv_loading_pane_g_ParamLimits

0xfbce,	// (0x0009bdec) main_mobtv_loading_pane_g

0xc56d,	// (0x0009878b) main_mobtv_loading_pane_t1_ParamLimits

0xc56d,	// (0x0009878b) main_mobtv_loading_pane_t1

0xc585,	// (0x000987a3) main_mobtv_loading_pane_t2_ParamLimits

0xc585,	// (0x000987a3) main_mobtv_loading_pane_t2

0x0001,

0xfbd5,	// (0x0009bdf3) main_mobtv_loading_pane_t_ParamLimits

0xfbd5,	// (0x0009bdf3) main_mobtv_loading_pane_t

0x8686,	// (0x000948a4) wait_bar_pane_cp06_ParamLimits

0x8686,	// (0x000948a4) wait_bar_pane_cp06

0xc5a9,	// (0x000987c7) main_mobtv_programe_curr_pane_t1

0xc5b7,	// (0x000987d5) main_mobtv_programe_curr_pane_t2

0x0001,

0xfbda,	// (0x0009bdf8) main_mobtv_programe_curr_pane_t

0xc5c5,	// (0x000987e3) main_mobtv_programe_next_pane_t1

0xc5d3,	// (0x000987f1) main_mobtv_programe_next_pane_t2

0xc5e1,	// (0x000987ff) main_mobtv_programe_next_pane_t3

0x0002,

0xfbdf,	// (0x0009bdfd) main_mobtv_programe_next_pane_t

0x0dba,	// (0x0008cfd8) bg_popup_mobtv_noti_window_pane

0xc5ef,	// (0x0009880d) popup_mobtv_noti_window_g1

0xc5f7,	// (0x00098815) popup_mobtv_noti_window_t1

0xc605,	// (0x00098823) popup_mobtv_noti_window_t2

0x0001,

0xfbe6,	// (0x0009be04) popup_mobtv_noti_window_t

0xabd1,	// (0x00096def) bg_popup_mobtv_noti_window_pane_g1

0x0dba,	// (0x0008cfd8) sc_clock_pane

0x0dba,	// (0x0008cfd8) main_fs_bigclock_pane

0x7dd3,	// (0x00093ff1) blid2_tripm_pane_t4_ParamLimits

0x7dd3,	// (0x00093ff1) blid2_tripm_pane_t4

0x8695,	// (0x000948b3) sc_clock_pane_g1_ParamLimits

0x8695,	// (0x000948b3) sc_clock_pane_g1

0x86a7,	// (0x000948c5) sc_clock_pane_t1_ParamLimits

0x86a7,	// (0x000948c5) sc_clock_pane_t1

0x86c9,	// (0x000948e7) sc_clock_pane_t2_ParamLimits

0x86c9,	// (0x000948e7) sc_clock_pane_t2

0x86e1,	// (0x000948ff) sc_clock_pane_t3_ParamLimits

0x86e1,	// (0x000948ff) sc_clock_pane_t3

0x0004,

0xfbeb,	// (0x0009be09) sc_clock_pane_t_ParamLimits

0xfbeb,	// (0x0009be09) sc_clock_pane_t

0x94b6,	// (0x000956d4) main_fs_bigclock_indicator_pane_ParamLimits

0x94b6,	// (0x000956d4) main_fs_bigclock_indicator_pane

0xae0d,	// (0x0009702b) main_fs_bigclock_pane_g1_ParamLimits

0xae0d,	// (0x0009702b) main_fs_bigclock_pane_g1

0x94c2,	// (0x000956e0) main_fs_bigclock_pane_t1_ParamLimits

0x94c2,	// (0x000956e0) main_fs_bigclock_pane_t1

0x94d4,	// (0x000956f2) main_fs_bigclock_pane_t2_ParamLimits

0x94d4,	// (0x000956f2) main_fs_bigclock_pane_t2

0x94e8,	// (0x00095706) main_fs_bigclock_pane_t3_ParamLimits

0x94e8,	// (0x00095706) main_fs_bigclock_pane_t3

0x0002,

0xfdea,	// (0x0009c008) main_fs_bigclock_pane_t_ParamLimits

0xfdea,	// (0x0009c008) main_fs_bigclock_pane_t

0xd208,	// (0x00099426) main_fs_bigclock_indicator_pane_g1

0xc2d1,	// (0x000984ef) ncim_query_content_pane_g2_ParamLimits

0xc2d1,	// (0x000984ef) ncim_query_content_pane_g2

0x0001,

0xfb78,	// (0x0009bd96) ncim_query_content_pane_g_ParamLimits

0xfb78,	// (0x0009bd96) ncim_query_content_pane_g

0x86f8,	// (0x00094916) sc_clock_pane_t4_ParamLimits

0x86f8,	// (0x00094916) sc_clock_pane_t4

0xf009,	// (0x0009b227) main_radioblah_pane

0xb5bc,	// (0x000977da) cell_call4_button_pane_t1_copy1_ParamLimits

0xb5bc,	// (0x000977da) cell_call4_button_pane_t1_copy1

0x8351,	// (0x0009456f) main_ncimui_pane_t1_ParamLimits

0x8351,	// (0x0009456f) main_ncimui_pane_t1

0x836b,	// (0x00094589) main_ncimui_pane_t2_ParamLimits

0x836b,	// (0x00094589) main_ncimui_pane_t2

0x0002,

0xfb71,	// (0x0009bd8f) main_ncimui_pane_t_ParamLimits

0xfb71,	// (0x0009bd8f) main_ncimui_pane_t

0xc733,	// (0x00098951) main_radioblah_anim_pane_ParamLimits

0xc733,	// (0x00098951) main_radioblah_anim_pane

0xc744,	// (0x00098962) main_radioblah_info_pane_ParamLimits

0xc744,	// (0x00098962) main_radioblah_info_pane

0xc758,	// (0x00098976) main_radioblah_pane_t1_ParamLimits

0xc758,	// (0x00098976) main_radioblah_pane_t1

0xc774,	// (0x00098992) main_radioblah_pane_t2_ParamLimits

0xc774,	// (0x00098992) main_radioblah_pane_t2

0x0003,

0xfc0c,	// (0x0009be2a) main_radioblah_pane_t_ParamLimits

0xfc0c,	// (0x0009be2a) main_radioblah_pane_t

0x87a1,	// (0x000949bf) main_radioblah_rocker_ctrl_pane_ParamLimits

0x87a1,	// (0x000949bf) main_radioblah_rocker_ctrl_pane

0xc7bc,	// (0x000989da) main_radioblah_info_pane_t1_ParamLimits

0xc7bc,	// (0x000989da) main_radioblah_info_pane_t1

0x87f9,	// (0x00094a17) main_radioblah_info_pane_t2_ParamLimits

0x87f9,	// (0x00094a17) main_radioblah_info_pane_t2

0x0003,

0xfc15,	// (0x0009be33) main_radioblah_info_pane_t_ParamLimits

0xfc15,	// (0x0009be33) main_radioblah_info_pane_t

0xabd1,	// (0x00096def) main_radioblah_rocker_ctrl_pane_g1

0x88a9,	// (0x00094ac7) main_radioblah_rocker_ctrl_pane_g2

0x88b1,	// (0x00094acf) main_radioblah_rocker_ctrl_pane_g3

0x88b9,	// (0x00094ad7) main_radioblah_rocker_ctrl_pane_g4

0x88c1,	// (0x00094adf) main_radioblah_rocker_ctrl_pane_g5

0x88c9,	// (0x00094ae7) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc1e,	// (0x0009be3c) main_radioblah_rocker_ctrl_pane_g

0x831b,	// (0x00094539) main_cset_text2_pane_t1_copy1_ParamLimits

0xd8b6,	// (0x00099ad4) cam4_image_uncrop_qvga_pane

0xd91d,	// (0x00099b3b) vid4_image_uncrop_qcif_pane

0xda62,	// (0x00099c80) cam6_image_uncrop_qvga_pane_ParamLimits

0xda62,	// (0x00099c80) cam6_image_uncrop_qvga_pane

0xbf10,	// (0x0009812e) vid6_image_uncrop_qcif_pane_ParamLimits

0xbf10,	// (0x0009812e) vid6_image_uncrop_qcif_pane

0x0dba,	// (0x0008cfd8) bg_popup_preview_window_pane_cp03

0xc283,	// (0x000984a1) list_cset_text2_pane

0xc28b,	// (0x000984a9) main_cset6_text2_pane_g1

0xc293,	// (0x000984b1) main_cset6_text2_pane_t1

0x88d1,	// (0x00094aef) list_cset_text2_pane_t1_ParamLimits

0x88d1,	// (0x00094aef) list_cset_text2_pane_t1

0xf009,	// (0x0009b227) main_radioblah_pane_ParamLimits

0x862e,	// (0x0009484c) main_mobtv_info_pane_t3_ParamLimits

0x862e,	// (0x0009484c) main_mobtv_info_pane_t3

0x878f,	// (0x000949ad) main_radioblah_pane_g1

0x87c9,	// (0x000949e7) main_radioblah_info_pane_g1

0x884e,	// (0x00094a6c) main_radioblah_info_pane_t3_ParamLimits

0x884e,	// (0x00094a6c) main_radioblah_info_pane_t3

0x2a21,	// (0x0008ec3f) highlight_cell_cale_month_pane_ParamLimits

0x2a21,	// (0x0008ec3f) highlight_cell_cale_month_pane

0x0dba,	// (0x0008cfd8) main_phob_fisheye_pane

0xaf57,	// (0x00097175) scroll_pane_cp0031_ParamLimits

0xaf57,	// (0x00097175) scroll_pane_cp0031

0xc01e,	// (0x0009823c) wait_bar_pane_cp08_ParamLimits

0x8122,	// (0x00094340) cset_list_set_pane_copy1_ParamLimits

0xc7f6,	// (0x00098a14) highlight_cell_cale_month_pane_g1

0x88ea,	// (0x00094b08) highlight_cell_cale_month_pane_t1

0xbc50,	// (0x00097e6e) list_gen_pane_cp01

0xb7e3,	// (0x00097a01) scroll_pane_01

0x88f8,	// (0x00094b16) list_single_double_fisheye_pane

0x8901,	// (0x00094b1f) list_double_fisheye_pane_g1_ParamLimits

0x8901,	// (0x00094b1f) list_double_fisheye_pane_g1

0x890d,	// (0x00094b2b) list_double_fisheye_pane_g2_ParamLimits

0x890d,	// (0x00094b2b) list_double_fisheye_pane_g2

0x8921,	// (0x00094b3f) list_double_fisheye_pane_g3_ParamLimits

0x8921,	// (0x00094b3f) list_double_fisheye_pane_g3

0x0004,

0xfc2b,	// (0x0009be49) list_double_fisheye_pane_g_ParamLimits

0xfc2b,	// (0x0009be49) list_double_fisheye_pane_g

0x894a,	// (0x00094b68) list_double_fisheye_pane_t1_ParamLimits

0x894a,	// (0x00094b68) list_double_fisheye_pane_t1

0x8965,	// (0x00094b83) list_double_fisheye_pane_t2_ParamLimits

0x8965,	// (0x00094b83) list_double_fisheye_pane_t2

0x0001,

0xfc36,	// (0x0009be54) list_double_fisheye_pane_t_ParamLimits

0xfc36,	// (0x0009be54) list_double_fisheye_pane_t

0x0dba,	// (0x0008cfd8) main_call5_pane

0x8723,	// (0x00094941) sc_swipe_pane_ParamLimits

0x8723,	// (0x00094941) sc_swipe_pane

0x899a,	// (0x00094bb8) call5_image_pane_ParamLimits

0x899a,	// (0x00094bb8) call5_image_pane

0x89b7,	// (0x00094bd5) call5_swipe_1_pane_ParamLimits

0x89b7,	// (0x00094bd5) call5_swipe_1_pane

0x89ca,	// (0x00094be8) call5_swipe_2_pane_ParamLimits

0x89ca,	// (0x00094be8) call5_swipe_2_pane

0x89f5,	// (0x00094c13) popup_call5_audio_first_window_ParamLimits

0x89f5,	// (0x00094c13) popup_call5_audio_first_window

0xae3d,	// (0x0009705b) call5_swipe_1_pane_g1_ParamLimits

0xae3d,	// (0x0009705b) call5_swipe_1_pane_g1

0xc7fe,	// (0x00098a1c) call5_swipe_1_pane_g2_ParamLimits

0xc7fe,	// (0x00098a1c) call5_swipe_1_pane_g2

0x0001,

0xfc3b,	// (0x0009be59) call5_swipe_1_pane_g_ParamLimits

0xfc3b,	// (0x0009be59) call5_swipe_1_pane_g

0xc80a,	// (0x00098a28) call5_swipe_1_pane_t1_ParamLimits

0xc80a,	// (0x00098a28) call5_swipe_1_pane_t1

0xae3d,	// (0x0009705b) call5_swipe_2_pane_g1_ParamLimits

0xae3d,	// (0x0009705b) call5_swipe_2_pane_g1

0xc81f,	// (0x00098a3d) call5_swipe_2_pane_g2_ParamLimits

0xc81f,	// (0x00098a3d) call5_swipe_2_pane_g2

0x0001,

0xfc40,	// (0x0009be5e) call5_swipe_2_pane_g_ParamLimits

0xfc40,	// (0x0009be5e) call5_swipe_2_pane_g

0xc82b,	// (0x00098a49) call5_swipe_2_pane_t1_ParamLimits

0xc82b,	// (0x00098a49) call5_swipe_2_pane_t1

0xc840,	// (0x00098a5e) sc_swipe_pane_g1_ParamLimits

0xc840,	// (0x00098a5e) sc_swipe_pane_g1

0xc84d,	// (0x00098a6b) sc_swipe_pane_g2_ParamLimits

0xc84d,	// (0x00098a6b) sc_swipe_pane_g2

0x0001,

0xfc45,	// (0x0009be63) sc_swipe_pane_g_ParamLimits

0xfc45,	// (0x0009be63) sc_swipe_pane_g

0xc859,	// (0x00098a77) sc_swipe_pane_t1_ParamLimits

0xc859,	// (0x00098a77) sc_swipe_pane_t1

0x0dba,	// (0x0008cfd8) main_cmail_launcher_pane

0x8a06,	// (0x00094c24) aid_size_cell_cmail_l_ParamLimits

0x8a06,	// (0x00094c24) aid_size_cell_cmail_l

0x8a20,	// (0x00094c3e) grid_cmail_l_pane_ParamLimits

0x8a20,	// (0x00094c3e) grid_cmail_l_pane

0x8a3b,	// (0x00094c59) cell_cmail_l_pane_ParamLimits

0x8a3b,	// (0x00094c59) cell_cmail_l_pane

0x8a61,	// (0x00094c7f) cell_cmail_l_pane_g1_ParamLimits

0x8a61,	// (0x00094c7f) cell_cmail_l_pane_g1

0x8a6d,	// (0x00094c8b) cell_cmail_l_pane_t1_ParamLimits

0x8a6d,	// (0x00094c8b) cell_cmail_l_pane_t1

0xc86e,	// (0x00098a8c) cell_cmail_l_pane_t2_ParamLimits

0xc86e,	// (0x00098a8c) cell_cmail_l_pane_t2

0x0001,

0xfc4a,	// (0x0009be68) cell_cmail_l_pane_t_ParamLimits

0xfc4a,	// (0x0009be68) cell_cmail_l_pane_t

0xf009,	// (0x0009b227) grid_highlight_pane_cp018_ParamLimits

0xf009,	// (0x0009b227) grid_highlight_pane_cp018

0x0eda,	// (0x0008d0f8) main2_pane_ParamLimits

0x0eda,	// (0x0008d0f8) main2_pane

0xe26c,	// (0x0009a48a) popup_sp_fs_action_menu_bg_pane_g1

0xe274,	// (0x0009a492) popup_sp_fs_action_menu_bg_pane_g2

0xe27c,	// (0x0009a49a) popup_sp_fs_action_menu_bg_pane_g3

0xe284,	// (0x0009a4a2) popup_sp_fs_action_menu_bg_pane_g4

0xe28c,	// (0x0009a4aa) popup_sp_fs_action_menu_bg_pane_g5

0xe294,	// (0x0009a4b2) popup_sp_fs_action_menu_bg_pane_g6

0xe29c,	// (0x0009a4ba) popup_sp_fs_action_menu_bg_pane_g7

0xe2a4,	// (0x0009a4c2) popup_sp_fs_action_menu_bg_pane_g8

0xe2ac,	// (0x0009a4ca) popup_sp_fs_action_menu_bg_pane_g9

0xe2b4,	// (0x0009a4d2) popup_sp_fs_action_menu_bg_pane_g10

0xe2b4,	// (0x0009a4d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0009b3ca) popup_sp_fs_action_menu_bg_pane_g

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t3_g3_g1

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t3_g3_g2

0x1c96,	// (0x0008deb4) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0009b47a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0009b47a) list_medium_line_x2_t3_g3_g

0x1ca2,	// (0x0008dec0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ca2,	// (0x0008dec0) list_medium_line_x2_t3_g3_t1

0x1cb7,	// (0x0008ded5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1cb7,	// (0x0008ded5) list_medium_line_x2_t3_g3_t2

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0009b481) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0009b481) list_medium_line_x2_t3_g3_t

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t3_g2_g1

0x1c96,	// (0x0008deb4) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0009b488) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0009b488) list_medium_line_x2_t3_g2_g

0x1ce0,	// (0x0008defe) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1ce0,	// (0x0008defe) list_medium_line_x2_t3_g2_t1

0x1cf6,	// (0x0008df14) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1cf6,	// (0x0008df14) list_medium_line_x2_t3_g2_t2

0x1d08,	// (0x0008df26) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1d08,	// (0x0008df26) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0009b48d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0009b48d) list_medium_line_x2_t3_g2_t

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t4_g4_g1

0x1d25,	// (0x0008df43) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1d25,	// (0x0008df43) list_medium_line_x2_t4_g4_g2

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t4_g4_g3

0x1d31,	// (0x0008df4f) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1d31,	// (0x0008df4f) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0009b494) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0009b494) list_medium_line_x2_t4_g4_g

0x1d3d,	// (0x0008df5b) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1d3d,	// (0x0008df5b) list_medium_line_x2_t4_g4_t1

0x1d57,	// (0x0008df75) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1d57,	// (0x0008df75) list_medium_line_x2_t4_g4_t2

0x1d6d,	// (0x0008df8b) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1d6d,	// (0x0008df8b) list_medium_line_x2_t4_g4_t3

0x1d82,	// (0x0008dfa0) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1d82,	// (0x0008dfa0) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0009b49d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0009b49d) list_medium_line_x2_t4_g4_t

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t2_g4_g1

0x1d25,	// (0x0008df43) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1d25,	// (0x0008df43) list_medium_line_x2_t2_g4_g2

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t2_g4_g3

0x1c96,	// (0x0008deb4) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0009b504) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0009b504) list_medium_line_x2_t2_g4_g

0x2a3f,	// (0x0008ec5d) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2a3f,	// (0x0008ec5d) list_medium_line_x2_t2_g4_t1

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0009b50d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0009b50d) list_medium_line_x2_t2_g4_t

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t2_g3_g1

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t2_g3_g2

0x1c96,	// (0x0008deb4) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0009b47a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0009b47a) list_medium_line_x2_t2_g3_g

0x2a54,	// (0x0008ec72) list_medium_line_x2_t2_g3_t1_ParamLimits

0x2a54,	// (0x0008ec72) list_medium_line_x2_t2_g3_t1

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0009b512) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0009b512) list_medium_line_x2_t2_g3_t

0x2b7a,	// (0x0008ed98) main_sp_fs_list_pane_ParamLimits

0x2b7a,	// (0x0008ed98) main_sp_fs_list_pane

0x2b86,	// (0x0008eda4) sp_fs_scroll_pane_ParamLimits

0x2b86,	// (0x0008eda4) sp_fs_scroll_pane

0x2b92,	// (0x0008edb0) list_medium_line_x2_t3_t1

0x2ba2,	// (0x0008edc0) list_medium_line_x2_t3_t2

0x2bb0,	// (0x0008edce) list_medium_line_x2_t3_t3

0x0002,

0xf30d,	// (0x0009b52b) list_medium_line_x2_t3_t

0x2bbe,	// (0x0008eddc) list_medium_line_x3_t4_t1

0x2bce,	// (0x0008edec) list_medium_line_x3_t4_t2

0x2bdc,	// (0x0008edfa) list_medium_line_x3_t4_t3

0x2bb0,	// (0x0008edce) list_medium_line_x3_t4_t4

0x0003,

0xf314,	// (0x0009b532) list_medium_line_x3_t4_t

0x2bea,	// (0x0008ee08) list_medium_line_x4_t5_t1

0x2bfa,	// (0x0008ee18) list_medium_line_x4_t5_t2

0x2bdc,	// (0x0008edfa) list_medium_line_x4_t5_t3

0x2c08,	// (0x0008ee26) list_medium_line_x4_t5_t4

0x2bb0,	// (0x0008edce) list_medium_line_x4_t5_t5

0x0004,

0xf31d,	// (0x0009b53b) list_medium_line_x4_t5_t

0x1c7e,	// (0x0008de9c) list_medium_line_t4_g4_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_t4_g4_g1

0x1d31,	// (0x0008df4f) list_medium_line_t4_g4_g2_ParamLimits

0x1d31,	// (0x0008df4f) list_medium_line_t4_g4_g2

0x2c16,	// (0x0008ee34) list_medium_line_t4_g4_g3_ParamLimits

0x2c16,	// (0x0008ee34) list_medium_line_t4_g4_g3

0x1c96,	// (0x0008deb4) list_medium_line_t4_g4_g4_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_t4_g4_g4

0x0003,

0xf328,	// (0x0009b546) list_medium_line_t4_g4_g_ParamLimits

0xf328,	// (0x0009b546) list_medium_line_t4_g4_g

0x2c22,	// (0x0008ee40) list_medium_line_t4_g4_t1_ParamLimits

0x2c22,	// (0x0008ee40) list_medium_line_t4_g4_t1

0x2c37,	// (0x0008ee55) list_medium_line_t4_g4_t2_ParamLimits

0x2c37,	// (0x0008ee55) list_medium_line_t4_g4_t2

0x2c4c,	// (0x0008ee6a) list_medium_line_t4_g4_t3_ParamLimits

0x2c4c,	// (0x0008ee6a) list_medium_line_t4_g4_t3

0x1ccb,	// (0x0008dee9) list_medium_line_t4_g4_t4_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_t4_g4_t4

0x0003,

0xf331,	// (0x0009b54f) list_medium_line_t4_g4_t_ParamLimits

0xf331,	// (0x0009b54f) list_medium_line_t4_g4_t

0x2d24,	// (0x0008ef42) chi_dic_find_pane_g1

0x46d3,	// (0x000908f1) main_tport_pane

0xb911,	// (0x00097b2f) list_medium_line_plain_t1

0xb927,	// (0x00097b45) list_medium_line_t2_g2_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_t2_g2_g1

0xb933,	// (0x00097b51) list_medium_line_t2_g2_g2_ParamLimits

0xb933,	// (0x00097b51) list_medium_line_t2_g2_g2

0x0001,

0xf987,	// (0x0009bba5) list_medium_line_t2_g2_g_ParamLimits

0xf987,	// (0x0009bba5) list_medium_line_t2_g2_g

0x75a7,	// (0x000937c5) list_medium_line_t2_g2_t1_ParamLimits

0x75a7,	// (0x000937c5) list_medium_line_t2_g2_t1

0x75c1,	// (0x000937df) list_medium_line_t2_g2_t2_ParamLimits

0x75c1,	// (0x000937df) list_medium_line_t2_g2_t2

0x0001,

0xf98c,	// (0x0009bbaa) list_medium_line_t2_g2_t_ParamLimits

0xf98c,	// (0x0009bbaa) list_medium_line_t2_g2_t

0xbc59,	// (0x00097e77) aid_sp_fs_list_icon_a_sm

0xbc61,	// (0x00097e7f) aid_sp_fs_list_icon_d

0xbc69,	// (0x00097e87) aid_sp_fs_text_primary

0xbc72,	// (0x00097e90) aid_sp_fs_text_secondary

0xbc7b,	// (0x00097e99) list_medium_line

0xbc7b,	// (0x00097e99) list_medium_line_g2

0xbc7b,	// (0x00097e99) list_medium_line_g3

0xbc7b,	// (0x00097e99) list_medium_line_plain

0xbc7b,	// (0x00097e99) list_medium_line_plain_t2

0xbc7b,	// (0x00097e99) list_medium_line_plain_t3

0xbc7b,	// (0x00097e99) list_medium_line_right_icon

0xbc7b,	// (0x00097e99) list_medium_line_right_iconx2

0xbc7b,	// (0x00097e99) list_medium_line_t2

0xbc7b,	// (0x00097e99) list_medium_line_t2_g2

0xbc7b,	// (0x00097e99) list_medium_line_t2_g3

0xbc7b,	// (0x00097e99) list_medium_line_t2_right_icon

0xbc7b,	// (0x00097e99) list_medium_line_t2_right_iconx2

0xbc7b,	// (0x00097e99) list_medium_line_t3

0xbc7b,	// (0x00097e99) list_medium_line_t3_g2

0xbc7b,	// (0x00097e99) list_medium_line_t3_g3

0xbc7b,	// (0x00097e99) list_medium_line_t3_right_iconx2

0xbc84,	// (0x00097ea2) list_medium_line_t4_g4

0xbc8d,	// (0x00097eab) list_medium_line_x2

0xbc8d,	// (0x00097eab) list_medium_line_x2_t2_g2

0xbc8d,	// (0x00097eab) list_medium_line_x2_t2_g3

0xbc8d,	// (0x00097eab) list_medium_line_x2_t2_g4

0xbc8d,	// (0x00097eab) list_medium_line_x2_t3

0xbc8d,	// (0x00097eab) list_medium_line_x2_t3_g2

0xbc8d,	// (0x00097eab) list_medium_line_x2_t3_g3

0xbc8d,	// (0x00097eab) list_medium_line_x2_t3_g4

0xbc8d,	// (0x00097eab) list_medium_line_x2_t4_g2

0xbc8d,	// (0x00097eab) list_medium_line_x2_t4_g4

0xbc96,	// (0x00097eb4) list_medium_line_x3

0xbc96,	// (0x00097eb4) list_medium_line_x3_t4

0xbc96,	// (0x00097eb4) list_medium_line_x3_t4_g4

0xbc84,	// (0x00097ea2) list_medium_line_x4_t4

0xbc84,	// (0x00097ea2) list_medium_line_x4_t4_g7

0xbc84,	// (0x00097ea2) list_medium_line_x4_t5

0xbc9f,	// (0x00097ebd) list_single_fs_dyc_pane_ParamLimits

0xbc9f,	// (0x00097ebd) list_single_fs_dyc_pane

0x1c7e,	// (0x0008de9c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x4_t4_g7_g1

0xc1b2,	// (0x000983d0) list_medium_line_x4_t4_g7_g2_ParamLimits

0xc1b2,	// (0x000983d0) list_medium_line_x4_t4_g7_g2

0xc1be,	// (0x000983dc) list_medium_line_x4_t4_g7_g3_ParamLimits

0xc1be,	// (0x000983dc) list_medium_line_x4_t4_g7_g3

0xc1cd,	// (0x000983eb) list_medium_line_x4_t4_g7_g4_ParamLimits

0xc1cd,	// (0x000983eb) list_medium_line_x4_t4_g7_g4

0xc1d9,	// (0x000983f7) list_medium_line_x4_t4_g7_g5_ParamLimits

0xc1d9,	// (0x000983f7) list_medium_line_x4_t4_g7_g5

0xc1e8,	// (0x00098406) list_medium_line_x4_t4_g7_g6_ParamLimits

0xc1e8,	// (0x00098406) list_medium_line_x4_t4_g7_g6

0xc1f7,	// (0x00098415) list_medium_line_x4_t4_g7_g7_ParamLimits

0xc1f7,	// (0x00098415) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb57,	// (0x0009bd75) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb57,	// (0x0009bd75) list_medium_line_x4_t4_g7_g

0xc203,	// (0x00098421) list_medium_line_x4_t4_g7_t1_ParamLimits

0xc203,	// (0x00098421) list_medium_line_x4_t4_g7_t1

0xc218,	// (0x00098436) list_medium_line_x4_t4_g7_t2_ParamLimits

0xc218,	// (0x00098436) list_medium_line_x4_t4_g7_t2

0xc22d,	// (0x0009844b) list_medium_line_x4_t4_g7_t3_ParamLimits

0xc22d,	// (0x0009844b) list_medium_line_x4_t4_g7_t3

0xc242,	// (0x00098460) list_medium_line_x4_t4_g7_t4_ParamLimits

0xc242,	// (0x00098460) list_medium_line_x4_t4_g7_t4

0xc254,	// (0x00098472) list_medium_line_x4_t4_g7_t5_ParamLimits

0xc254,	// (0x00098472) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb66,	// (0x0009bd84) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb66,	// (0x0009bd84) list_medium_line_x4_t4_g7_t

0xc266,	// (0x00098484) list_single_dyc_row_pane_ParamLimits

0xc266,	// (0x00098484) list_single_dyc_row_pane

0x8987,	// (0x00094ba5) call5_gesture_pane_ParamLimits

0x8987,	// (0x00094ba5) call5_gesture_pane

0x89dd,	// (0x00094bfb) call5_windows_pane_ParamLimits

0x89dd,	// (0x00094bfb) call5_windows_pane

0x8a83,	// (0x00094ca1) call5_swipe_1_pane_cp_ParamLimits

0x8a83,	// (0x00094ca1) call5_swipe_1_pane_cp

0x8a8f,	// (0x00094cad) call5_swipe_2_pane_cp_ParamLimits

0x8a8f,	// (0x00094cad) call5_swipe_2_pane_cp

0xecb2,	// (0x0009aed0) call5_image_pane_cp

0x8a9b,	// (0x00094cb9) popup_call5_audio_first_window_cp_ParamLimits

0x8a9b,	// (0x00094cb9) popup_call5_audio_first_window_cp

0xc840,	// (0x00098a5e) call5_swipe_1_pane_g1_cp_ParamLimits

0xc840,	// (0x00098a5e) call5_swipe_1_pane_g1_cp

0xc880,	// (0x00098a9e) call5_swipe_1_pane_g2_cp

0xc859,	// (0x00098a77) call5_swipe_1_pane_t1_cp_ParamLimits

0xc859,	// (0x00098a77) call5_swipe_1_pane_t1_cp

0xc840,	// (0x00098a5e) call5_swipe_2_pane_g1_cp_ParamLimits

0xc840,	// (0x00098a5e) call5_swipe_2_pane_g1_cp

0xc888,	// (0x00098aa6) call5_swipe_2_pane_g2_cp

0xc890,	// (0x00098aae) call5_swipe_2_pane_t1_cp_ParamLimits

0xc890,	// (0x00098aae) call5_swipe_2_pane_t1_cp

0xf009,	// (0x0009b227) main_sp_fs_email_pane

0xc8a5,	// (0x00098ac3) main_sp_fs_listscroll_pane_te

0xc8ae,	// (0x00098acc) popup_sp_fs_action_menu_pane_ParamLimits

0xc8ae,	// (0x00098acc) popup_sp_fs_action_menu_pane

0xabd1,	// (0x00096def) bg_sp_fs_ctrlbar_pane_g1

0xc8f2,	// (0x00098b10) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc8fb,	// (0x00098b19) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc904,	// (0x00098b22) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xabd1,	// (0x00096def) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc4f,	// (0x0009be6d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xa9b6,	// (0x00096bd4) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xa9b6,	// (0x00096bd4) bg_sp_fs_ctrlbar_ddmenu_pane

0xc90d,	// (0x00098b2b) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xc90d,	// (0x00098b2b) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xc919,	// (0x00098b37) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xc919,	// (0x00098b37) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc58,	// (0x0009be76) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc58,	// (0x0009be76) main_sp_fs_ctrlbar_ddmenu_pane_g

0xc925,	// (0x00098b43) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xc925,	// (0x00098b43) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xc93f,	// (0x00098b5d) list_medium_line_t2_right_icon_g1

0x8aa9,	// (0x00094cc7) list_medium_line_t2_right_icon_t1

0x8ab9,	// (0x00094cd7) list_medium_line_t2_right_icon_t2

0x0001,

0xfc5d,	// (0x0009be7b) list_medium_line_t2_right_icon_t

0xa6cb,	// (0x000968e9) bg_sp_fs_ctrlbar_pane_ParamLimits

0xa6cb,	// (0x000968e9) bg_sp_fs_ctrlbar_pane

0x8b13,	// (0x00094d31) main_sp_fs_ctrlbar_button_pane_cp01

0x8b1d,	// (0x00094d3b) main_sp_fs_ctrlbar_ddmenu_pane

0xc97f,	// (0x00098b9d) main_sp_fs_ctrlbar_pane_g1

0xc98b,	// (0x00098ba9) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc62,	// (0x0009be80) main_sp_fs_ctrlbar_pane_g

0xc997,	// (0x00098bb5) main_sp_fs_ctrlbar_pane_t1

0x8b27,	// (0x00094d45) main_sp_fs_ctrlbar_pane

0x8b4b,	// (0x00094d69) main_sp_fs_listscroll_pane_te_cp01

0x8b6b,	// (0x00094d89) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8b6b,	// (0x00094d89) popup_sp_fs_action_menu_pane_cp01

0xf009,	// (0x0009b227) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xf009,	// (0x0009b227) bg_sp_fs_highlight_list_pane_cp01

0xc9ac,	// (0x00098bca) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xc9ac,	// (0x00098bca) sp_fs_action_menu_list_gene_pane_g1

0xc9bb,	// (0x00098bd9) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xc9bb,	// (0x00098bd9) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc67,	// (0x0009be85) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc67,	// (0x0009be85) sp_fs_action_menu_list_gene_pane_g

0xc9c8,	// (0x00098be6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xc9c8,	// (0x00098be6) sp_fs_action_menu_list_gene_pane_t1

0xc9e0,	// (0x00098bfe) sp_fs_action_menu_list_gene_pane_ParamLimits

0xc9e0,	// (0x00098bfe) sp_fs_action_menu_list_gene_pane

0xca01,	// (0x00098c1f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xca01,	// (0x00098c1f) popup_sp_fs_action_menu_bg_pane

0xca0f,	// (0x00098c2d) sp_fs_action_menu_list_pane_ParamLimits

0xca0f,	// (0x00098c2d) sp_fs_action_menu_list_pane

0xca31,	// (0x00098c4f) sp_fs_scroll_pane_cp01_ParamLimits

0xca31,	// (0x00098c4f) sp_fs_scroll_pane_cp01

0x8b87,	// (0x00094da5) list_medium_line_plain_t2_t1

0x8b97,	// (0x00094db5) list_medium_line_plain_t2_t2

0x0001,

0xfc6c,	// (0x0009be8a) list_medium_line_plain_t2_t

0x8ba7,	// (0x00094dc5) list_medium_line_plain_t3_t1

0x8bb7,	// (0x00094dd5) list_medium_line_plain_t3_t2

0x8bc5,	// (0x00094de3) list_medium_line_plain_t3_t3

0x0002,

0xfc71,	// (0x0009be8f) list_medium_line_plain_t3_t

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t2_g2_g1

0x1c96,	// (0x0008deb4) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0009b488) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0009b488) list_medium_line_x2_t2_g2_g

0x2c22,	// (0x0008ee40) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2c22,	// (0x0008ee40) list_medium_line_x2_t2_g2_t1

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc78,	// (0x0009be96) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc78,	// (0x0009be96) list_medium_line_x2_t2_g2_t

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t4_g2_g1

0xca57,	// (0x00098c75) list_medium_line_x2_t4_g2_g2_ParamLimits

0xca57,	// (0x00098c75) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc7d,	// (0x0009be9b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc7d,	// (0x0009be9b) list_medium_line_x2_t4_g2_g

0x8bd3,	// (0x00094df1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8bd3,	// (0x00094df1) list_medium_line_x2_t4_g2_t1

0x8bed,	// (0x00094e0b) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8bed,	// (0x00094e0b) list_medium_line_x2_t4_g2_t2

0x8c02,	// (0x00094e20) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8c02,	// (0x00094e20) list_medium_line_x2_t4_g2_t3

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc82,	// (0x0009bea0) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc82,	// (0x0009bea0) list_medium_line_x2_t4_g2_t

0xca69,	// (0x00098c87) list_medium_line_t3_right_iconx2_g1

0xc93f,	// (0x00098b5d) list_medium_line_t3_right_iconx2_g2

0x8c17,	// (0x00094e35) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc8b,	// (0x0009bea9) list_medium_line_t3_right_iconx2_g

0x8c21,	// (0x00094e3f) list_medium_line_t3_right_iconx2_t1

0x8c31,	// (0x00094e4f) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc92,	// (0x0009beb0) list_medium_line_t3_right_iconx2_t

0x1c7e,	// (0x0008de9c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x3_t4_g4_g1

0x1c8a,	// (0x0008dea8) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x3_t4_g4_g2

0x1d31,	// (0x0008df4f) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1d31,	// (0x0008df4f) list_medium_line_x3_t4_g4_g3

0xca71,	// (0x00098c8f) list_medium_line_x3_t4_g4_g4_ParamLimits

0xca71,	// (0x00098c8f) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc97,	// (0x0009beb5) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc97,	// (0x0009beb5) list_medium_line_x3_t4_g4_g

0x8c3f,	// (0x00094e5d) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8c3f,	// (0x00094e5d) list_medium_line_x3_t4_g4_t1

0x8c56,	// (0x00094e74) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8c56,	// (0x00094e74) list_medium_line_x3_t4_g4_t2

0x2c37,	// (0x0008ee55) list_medium_line_x3_t4_g4_t3_ParamLimits

0x2c37,	// (0x0008ee55) list_medium_line_x3_t4_g4_t3

0xca7d,	// (0x00098c9b) list_medium_line_x3_t4_g4_t4_ParamLimits

0xca7d,	// (0x00098c9b) list_medium_line_x3_t4_g4_t4

0x0003,

0xfca0,	// (0x0009bebe) list_medium_line_x3_t4_g4_t_ParamLimits

0xfca0,	// (0x0009bebe) list_medium_line_x3_t4_g4_t

0x8c71,	// (0x00094e8f) list_single_dyc_row_text_pane_t1_ParamLimits

0x8c71,	// (0x00094e8f) list_single_dyc_row_text_pane_t1

0x8cba,	// (0x00094ed8) list_single_dyc_row_text_pane_t2_ParamLimits

0x8cba,	// (0x00094ed8) list_single_dyc_row_text_pane_t2

0xca9a,	// (0x00098cb8) list_single_dyc_row_text_pane_t3_ParamLimits

0xca9a,	// (0x00098cb8) list_single_dyc_row_text_pane_t3

0x0002,

0xfca9,	// (0x0009bec7) list_single_dyc_row_text_pane_t_ParamLimits

0xfca9,	// (0x0009bec7) list_single_dyc_row_text_pane_t

0xcaac,	// (0x00098cca) list_single_dyc_row_pane_g1_ParamLimits

0xcaac,	// (0x00098cca) list_single_dyc_row_pane_g1

0xcab8,	// (0x00098cd6) list_single_dyc_row_pane_g2_ParamLimits

0xcab8,	// (0x00098cd6) list_single_dyc_row_pane_g2

0xcac4,	// (0x00098ce2) list_single_dyc_row_pane_g3_ParamLimits

0xcac4,	// (0x00098ce2) list_single_dyc_row_pane_g3

0xcad0,	// (0x00098cee) list_single_dyc_row_pane_g4_ParamLimits

0xcad0,	// (0x00098cee) list_single_dyc_row_pane_g4

0x0003,

0xfcb0,	// (0x0009bece) list_single_dyc_row_pane_g_ParamLimits

0xfcb0,	// (0x0009bece) list_single_dyc_row_pane_g

0xcadc,	// (0x00098cfa) list_single_dyc_row_text_pane_ParamLimits

0xcadc,	// (0x00098cfa) list_single_dyc_row_text_pane

0x0dba,	// (0x0008cfd8) bg_sp_fs_scroll_pane

0xcafb,	// (0x00098d19) thumb_sp_fs_scroll_pane

0xb927,	// (0x00097b45) list_medium_line_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_g1

0xcb04,	// (0x00098d22) list_medium_line_t1_ParamLimits

0xcb04,	// (0x00098d22) list_medium_line_t1

0x1c7e,	// (0x0008de9c) list_medium_line_x2_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_g1

0x1c8a,	// (0x0008dea8) list_medium_line_x2_g2_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x2_g2

0x0001,

0xfcb9,	// (0x0009bed7) list_medium_line_x2_g_ParamLimits

0xfcb9,	// (0x0009bed7) list_medium_line_x2_g

0xcb19,	// (0x00098d37) list_medium_line_x2_t1_ParamLimits

0xcb19,	// (0x00098d37) list_medium_line_x2_t1

0x1c7e,	// (0x0008de9c) list_medium_line_x3_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x3_g1

0x1c8a,	// (0x0008dea8) list_medium_line_x3_g2_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x3_g2

0x0001,

0xfcb9,	// (0x0009bed7) list_medium_line_x3_g_ParamLimits

0xfcb9,	// (0x0009bed7) list_medium_line_x3_g

0xcb19,	// (0x00098d37) list_medium_line_x3_t1_ParamLimits

0xcb19,	// (0x00098d37) list_medium_line_x3_t1

0xcb2f,	// (0x00098d4d) thumb_sp_fs_scroll_pane_g1

0xcb38,	// (0x00098d56) thumb_sp_fs_scroll_pane_g2

0xcb41,	// (0x00098d5f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x0009bedc) thumb_sp_fs_scroll_pane_g

0xcb2f,	// (0x00098d4d) bg_sp_fs_scroll_pane_g1

0xcb38,	// (0x00098d56) bg_sp_fs_scroll_pane_g2

0xcb41,	// (0x00098d5f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcbe,	// (0x0009bedc) bg_sp_fs_scroll_pane_g

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1c7e,	// (0x0008de9c) list_medium_line_x2_t3_g4_g1

0x1d25,	// (0x0008df43) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1d25,	// (0x0008df43) list_medium_line_x2_t3_g4_g2

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1c8a,	// (0x0008dea8) list_medium_line_x2_t3_g4_g3

0x1c96,	// (0x0008deb4) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1c96,	// (0x0008deb4) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0009b504) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0009b504) list_medium_line_x2_t3_g4_g

0x8d14,	// (0x00094f32) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8d14,	// (0x00094f32) list_medium_line_x2_t3_g4_t1

0x8d2e,	// (0x00094f4c) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8d2e,	// (0x00094f4c) list_medium_line_x2_t3_g4_t2

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1ccb,	// (0x0008dee9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcc5,	// (0x0009bee3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcc5,	// (0x0009bee3) list_medium_line_x2_t3_g4_t

0xb927,	// (0x00097b45) list_medium_line_g2_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_g2_g1

0xb933,	// (0x00097b51) list_medium_line_g2_g2_ParamLimits

0xb933,	// (0x00097b51) list_medium_line_g2_g2

0x0001,

0xf987,	// (0x0009bba5) list_medium_line_g2_g_ParamLimits

0xf987,	// (0x0009bba5) list_medium_line_g2_g

0xcb4a,	// (0x00098d68) list_medium_line_g2_t1_ParamLimits

0xcb4a,	// (0x00098d68) list_medium_line_g2_t1

0xb927,	// (0x00097b45) list_medium_line_t3_g2_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_t3_g2_g1

0xb933,	// (0x00097b51) list_medium_line_t3_g2_g2_ParamLimits

0xb933,	// (0x00097b51) list_medium_line_t3_g2_g2

0x0001,

0xf987,	// (0x0009bba5) list_medium_line_t3_g2_g_ParamLimits

0xf987,	// (0x0009bba5) list_medium_line_t3_g2_g

0x8d48,	// (0x00094f66) list_medium_line_t3_g2_t1_ParamLimits

0x8d48,	// (0x00094f66) list_medium_line_t3_g2_t1

0x8d5f,	// (0x00094f7d) list_medium_line_t3_g2_t2_ParamLimits

0x8d5f,	// (0x00094f7d) list_medium_line_t3_g2_t2

0x8d74,	// (0x00094f92) list_medium_line_t3_g2_t3_ParamLimits

0x8d74,	// (0x00094f92) list_medium_line_t3_g2_t3

0x0002,

0xfccc,	// (0x0009beea) list_medium_line_t3_g2_t_ParamLimits

0xfccc,	// (0x0009beea) list_medium_line_t3_g2_t

0xc93f,	// (0x00098b5d) list_medium_line_right_icon_g1

0xcb5f,	// (0x00098d7d) list_medium_line_right_icon_t1

0xb927,	// (0x00097b45) list_medium_line_t2_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_t2_g1

0x8d8d,	// (0x00094fab) list_medium_line_t2_t1_ParamLimits

0x8d8d,	// (0x00094fab) list_medium_line_t2_t1

0x8da7,	// (0x00094fc5) list_medium_line_t2_t2_ParamLimits

0x8da7,	// (0x00094fc5) list_medium_line_t2_t2

0x0001,

0xfcd3,	// (0x0009bef1) list_medium_line_t2_t_ParamLimits

0xfcd3,	// (0x0009bef1) list_medium_line_t2_t

0xb927,	// (0x00097b45) list_medium_line_t3_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_t3_g1

0x8dc0,	// (0x00094fde) list_medium_line_t3_t1_ParamLimits

0x8dc0,	// (0x00094fde) list_medium_line_t3_t1

0x8dda,	// (0x00094ff8) list_medium_line_t3_t2_ParamLimits

0x8dda,	// (0x00094ff8) list_medium_line_t3_t2

0x8def,	// (0x0009500d) list_medium_line_t3_t3_ParamLimits

0x8def,	// (0x0009500d) list_medium_line_t3_t3

0x0002,

0xfcd8,	// (0x0009bef6) list_medium_line_t3_t_ParamLimits

0xfcd8,	// (0x0009bef6) list_medium_line_t3_t

0xb927,	// (0x00097b45) list_medium_line_g3_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_g3_g1

0xcb6d,	// (0x00098d8b) list_medium_line_g3_g2_ParamLimits

0xcb6d,	// (0x00098d8b) list_medium_line_g3_g2

0xb933,	// (0x00097b51) list_medium_line_g3_g3_ParamLimits

0xb933,	// (0x00097b51) list_medium_line_g3_g3

0x0002,

0xfcdf,	// (0x0009befd) list_medium_line_g3_g_ParamLimits

0xfcdf,	// (0x0009befd) list_medium_line_g3_g

0xcb79,	// (0x00098d97) list_medium_line_g3_t1_ParamLimits

0xcb79,	// (0x00098d97) list_medium_line_g3_t1

0xb927,	// (0x00097b45) list_medium_line_t2_g3_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_t2_g3_g1

0xcb6d,	// (0x00098d8b) list_medium_line_t2_g3_g2_ParamLimits

0xcb6d,	// (0x00098d8b) list_medium_line_t2_g3_g2

0xb933,	// (0x00097b51) list_medium_line_t2_g3_g3_ParamLimits

0xb933,	// (0x00097b51) list_medium_line_t2_g3_g3

0x0002,

0xfcdf,	// (0x0009befd) list_medium_line_t2_g3_g_ParamLimits

0xfcdf,	// (0x0009befd) list_medium_line_t2_g3_g

0x8e04,	// (0x00095022) list_medium_line_t2_g3_t1_ParamLimits

0x8e04,	// (0x00095022) list_medium_line_t2_g3_t1

0x8e1e,	// (0x0009503c) list_medium_line_t2_g3_t2_ParamLimits

0x8e1e,	// (0x0009503c) list_medium_line_t2_g3_t2

0x0001,

0xfce6,	// (0x0009bf04) list_medium_line_t2_g3_t_ParamLimits

0xfce6,	// (0x0009bf04) list_medium_line_t2_g3_t

0xb927,	// (0x00097b45) list_medium_line_t3_g3_g1_ParamLimits

0xb927,	// (0x00097b45) list_medium_line_t3_g3_g1

0xcb6d,	// (0x00098d8b) list_medium_line_t3_g3_g2_ParamLimits

0xcb6d,	// (0x00098d8b) list_medium_line_t3_g3_g2

0xb933,	// (0x00097b51) list_medium_line_t3_g3_g3_ParamLimits

0xb933,	// (0x00097b51) list_medium_line_t3_g3_g3

0x0002,

0xfcdf,	// (0x0009befd) list_medium_line_t3_g3_g_ParamLimits

0xfcdf,	// (0x0009befd) list_medium_line_t3_g3_g

0x8e39,	// (0x00095057) list_medium_line_t3_g3_t1_ParamLimits

0x8e39,	// (0x00095057) list_medium_line_t3_g3_t1

0x8e4d,	// (0x0009506b) list_medium_line_t3_g3_t2_ParamLimits

0x8e4d,	// (0x0009506b) list_medium_line_t3_g3_t2

0x8e5f,	// (0x0009507d) list_medium_line_t3_g3_t3_ParamLimits

0x8e5f,	// (0x0009507d) list_medium_line_t3_g3_t3

0x0002,

0xfceb,	// (0x0009bf09) list_medium_line_t3_g3_t_ParamLimits

0xfceb,	// (0x0009bf09) list_medium_line_t3_g3_t

0xca69,	// (0x00098c87) list_medium_line_right_iconx2_g1

0xc93f,	// (0x00098b5d) list_medium_line_right_iconx2_g2

0x0001,

0xfcf2,	// (0x0009bf10) list_medium_line_right_iconx2_g

0xcb8e,	// (0x00098dac) list_medium_line_right_iconx2_t1

0xca69,	// (0x00098c87) list_medium_line_t2_right_iconx2_g1

0xc93f,	// (0x00098b5d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcf2,	// (0x0009bf10) list_medium_line_t2_right_iconx2_g

0x8e73,	// (0x00095091) list_medium_line_t2_right_iconx2_t1

0x8e83,	// (0x000950a1) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcf7,	// (0x0009bf15) list_medium_line_t2_right_iconx2_t

0xcb9c,	// (0x00098dba) list_medium_line_x4_t4_t1

0x8e95,	// (0x000950b3) list_medium_line_x4_t4_t2

0x8ea5,	// (0x000950c3) list_medium_line_x4_t4_t3

0x8eb5,	// (0x000950d3) list_medium_line_x4_t4_t4

0x0003,

0xfcfc,	// (0x0009bf1a) list_medium_line_x4_t4_t

0x8f08,	// (0x00095126) tport_appsw_pane_ParamLimits

0x8f08,	// (0x00095126) tport_appsw_pane

0x8f19,	// (0x00095137) tport_contact_pane_ParamLimits

0x8f19,	// (0x00095137) tport_contact_pane

0x8f32,	// (0x00095150) tport_listscroll_pane_ParamLimits

0x8f32,	// (0x00095150) tport_listscroll_pane

0x8f4d,	// (0x0009516b) cell_tport_appsw_pane_ParamLimits

0x8f4d,	// (0x0009516b) cell_tport_appsw_pane

0xb65d,	// (0x0009787b) tport_appsw_pane_g1_ParamLimits

0xb65d,	// (0x0009787b) tport_appsw_pane_g1

0xcbaa,	// (0x00098dc8) tport_contact_pane_g1

0xc357,	// (0x00098575) tport_contact_pane_t1

0xcbb3,	// (0x00098dd1) tport_contact_pane_t2

0x0001,

0xfd05,	// (0x0009bf23) tport_contact_pane_t

0xcbc1,	// (0x00098ddf) list_tport_pane

0xcbca,	// (0x00098de8) scroll_pane_cp_030

0xcbdb,	// (0x00098df9) cell_tport_appsw_pane_g1

0xcbeb,	// (0x00098e09) cell_tport_appsw_pane_t1

0x0dba,	// (0x0008cfd8) grid_highlight_pane_cp019

0x8f8d,	// (0x000951ab) list_tport_double_graphic_pane_ParamLimits

0x8f8d,	// (0x000951ab) list_tport_double_graphic_pane

0xf009,	// (0x0009b227) list_highlight_pane_cp023_ParamLimits

0xf009,	// (0x0009b227) list_highlight_pane_cp023

0x8f9a,	// (0x000951b8) list_tport_double_graphic_pane_g1_ParamLimits

0x8f9a,	// (0x000951b8) list_tport_double_graphic_pane_g1

0x8fa7,	// (0x000951c5) list_tport_double_graphic_pane_t1_ParamLimits

0x8fa7,	// (0x000951c5) list_tport_double_graphic_pane_t1

0x8fbc,	// (0x000951da) list_tport_double_graphic_pane_t2_ParamLimits

0x8fbc,	// (0x000951da) list_tport_double_graphic_pane_t2

0x0001,

0xfd11,	// (0x0009bf2f) list_tport_double_graphic_pane_t_ParamLimits

0xfd11,	// (0x0009bf2f) list_tport_double_graphic_pane_t

0x0dba,	// (0x0008cfd8) main_cale_note_pane

0x6d81,	// (0x00092f9f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d81,	// (0x00092f9f) cell_vitu2_function_top_wide_pane_cp01

0x8642,	// (0x00094860) wait_bar_pane_cp05_ParamLimits

0x0dba,	// (0x0008cfd8) listscroll_cmail_pane

0xcc01,	// (0x00098e1f) list_cmail_pane

0xb8e0,	// (0x00097afe) list_cmail_body_pane

0x8fd8,	// (0x000951f6) list_single_cmail_header_caption_pane

0x8fee,	// (0x0009520c) list_single_cmail_header_detail_pane_ParamLimits

0x8fee,	// (0x0009520c) list_single_cmail_header_detail_pane

0x9017,	// (0x00095235) list_single_cmail_header_caption_pane_t1

0x9027,	// (0x00095245) list_single_cmail_header_detail_pane_g1_ParamLimits

0x9027,	// (0x00095245) list_single_cmail_header_detail_pane_g1

0xcc22,	// (0x00098e40) list_single_cmail_header_detail_pane_g2_ParamLimits

0xcc22,	// (0x00098e40) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd16,	// (0x0009bf34) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd16,	// (0x0009bf34) list_single_cmail_header_detail_pane_g

0xcc3b,	// (0x00098e59) list_single_cmail_header_detail_pane_t1_ParamLimits

0xcc3b,	// (0x00098e59) list_single_cmail_header_detail_pane_t1

0xcc75,	// (0x00098e93) list_single_cmail_header_editor_pane_bg_ParamLimits

0xcc75,	// (0x00098e93) list_single_cmail_header_editor_pane_bg

0xc506,	// (0x00098724) list_cmail_body_pane_g1

0xcc87,	// (0x00098ea5) list_cmail_body_pane_t1

0xb6c9,	// (0x000978e7) list_single_cmail_header_editor_pane_bg_g1

0xe5c7,	// (0x0009a7e5) list_single_cmail_header_editor_pane_bg_g1_copy1

0xb6d9,	// (0x000978f7) list_single_cmail_header_editor_pane_bg_g1_copy2

0xb6d1,	// (0x000978ef) list_single_cmail_header_editor_pane_bg_g1_copy3

0xb91f,	// (0x00097b3d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xb6f9,	// (0x00097917) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xb6e9,	// (0x00097907) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xb6f1,	// (0x0009790f) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xe5a7,	// (0x0009a7c5) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9065,	// (0x00095283) calenote_gesture_pane_ParamLimits

0x9065,	// (0x00095283) calenote_gesture_pane

0x9085,	// (0x000952a3) calenote_window_pane_ParamLimits

0x9085,	// (0x000952a3) calenote_window_pane

0xcc95,	// (0x00098eb3) popup_note_window_cp01

0x90a1,	// (0x000952bf) calenote_swipe_1_pane_ParamLimits

0x90a1,	// (0x000952bf) calenote_swipe_1_pane

0x8a8f,	// (0x00094cad) calenote_swipe_2_pane_ParamLimits

0x8a8f,	// (0x00094cad) calenote_swipe_2_pane

0xc840,	// (0x00098a5e) calenote_swipe_1_pane_g1_ParamLimits

0xc840,	// (0x00098a5e) calenote_swipe_1_pane_g1

0xc84d,	// (0x00098a6b) calenote_swipe_1_pane_g2_ParamLimits

0xc84d,	// (0x00098a6b) calenote_swipe_1_pane_g2

0x0001,

0xfc45,	// (0x0009be63) calenote_swipe_1_pane_g_ParamLimits

0xfc45,	// (0x0009be63) calenote_swipe_1_pane_g

0xcca7,	// (0x00098ec5) calenote_swipe_1_pane_t1_ParamLimits

0xcca7,	// (0x00098ec5) calenote_swipe_1_pane_t1

0xc840,	// (0x00098a5e) calenote_swipe_2_pane_g1_ParamLimits

0xc840,	// (0x00098a5e) calenote_swipe_2_pane_g1

0xccc6,	// (0x00098ee4) calenote_swipe_2_pane_g2_ParamLimits

0xccc6,	// (0x00098ee4) calenote_swipe_2_pane_g2

0x0001,

0xfd22,	// (0x0009bf40) calenote_swipe_2_pane_g_ParamLimits

0xfd22,	// (0x0009bf40) calenote_swipe_2_pane_g

0xccd2,	// (0x00098ef0) calenote_swipe_2_pane_t1_ParamLimits

0xccd2,	// (0x00098ef0) calenote_swipe_2_pane_t1

0x0dba,	// (0x0008cfd8) main_mup_navstr_pane

0x5a66,	// (0x00091c84) main_mup3_pane_t7_ParamLimits

0x5a66,	// (0x00091c84) main_mup3_pane_t7

0xd6d4,	// (0x000998f2) main_mp4_pane_g6_ParamLimits

0xd6d4,	// (0x000998f2) main_mp4_pane_g6

0xd878,	// (0x00099a96) main_image3_pane_t4_ParamLimits

0xd878,	// (0x00099a96) main_image3_pane_t4

0x90b6,	// (0x000952d4) popup_navstr_preview_pane_ParamLimits

0x90b6,	// (0x000952d4) popup_navstr_preview_pane

0x90ca,	// (0x000952e8) scroll_navstr_pane_ParamLimits

0x90ca,	// (0x000952e8) scroll_navstr_pane

0x0dba,	// (0x0008cfd8) bg_popup_preview_window_pane_cp04

0xccf9,	// (0x00098f17) popup_navstr_preview_pane_t1

0x90de,	// (0x000952fc) scroll_navstr_pane_g1_ParamLimits

0x90de,	// (0x000952fc) scroll_navstr_pane_g1

0x90f2,	// (0x00095310) scroll_navstr_pane_t1_ParamLimits

0x90f2,	// (0x00095310) scroll_navstr_pane_t1

0xcc9e,	// (0x00098ebc) bg_button_pane_cp014

0xcc9e,	// (0x00098ebc) bg_button_pane_cp030

0x892d,	// (0x00094b4b) list_double_fisheye_pane_g4_ParamLimits

0x892d,	// (0x00094b4b) list_double_fisheye_pane_g4

0x8939,	// (0x00094b57) list_double_fisheye_pane_g5_ParamLimits

0x8939,	// (0x00094b57) list_double_fisheye_pane_g5

0xcc09,	// (0x00098e27) sp_fs_scroll_pane_cp03

0xc97f,	// (0x00098b9d) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xc98b,	// (0x00098ba9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc62,	// (0x0009be80) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xc997,	// (0x00098bb5) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8fce,	// (0x000951ec) sp_fs_scroll_pane_cp02

0xe2d7,	// (0x0009a4f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe2d7,	// (0x0009a4f5) popup_sp_fs_calendar_preview_list_single_pane

0x0dba,	// (0x0008cfd8) main_cam6_pano_pane

0xf009,	// (0x0009b227) main_mup3_pane_ParamLimits

0x0dba,	// (0x0008cfd8) main_phacti_pane

0x8515,	// (0x00094733) bg_button_pane_cp11

0x852f,	// (0x0009474d) main_mobtv_info_pane_g2_ParamLimits

0x852f,	// (0x0009474d) main_mobtv_info_pane_g2

0x0001,

0xfbc2,	// (0x0009bde0) main_mobtv_info_pane_g_ParamLimits

0xfbc2,	// (0x0009bde0) main_mobtv_info_pane_g

0x870a,	// (0x00094928) sc_clock_pane_t5_ParamLimits

0x870a,	// (0x00094928) sc_clock_pane_t5

0x878f,	// (0x000949ad) main_radioblah_pane_g1_ParamLimits

0xc78c,	// (0x000989aa) main_radioblah_pane_t3_ParamLimits

0xc78c,	// (0x000989aa) main_radioblah_pane_t3

0xc7a4,	// (0x000989c2) main_radioblah_pane_t4_ParamLimits

0xc7a4,	// (0x000989c2) main_radioblah_pane_t4

0x87b7,	// (0x000949d5) main_radioblah_text_pane_ParamLimits

0x87b7,	// (0x000949d5) main_radioblah_text_pane

0x87c9,	// (0x000949e7) main_radioblah_info_pane_g1_ParamLimits

0x8862,	// (0x00094a80) main_radioblah_info_pane_t4_ParamLimits

0x8862,	// (0x00094a80) main_radioblah_info_pane_t4

0xf009,	// (0x0009b227) main_sp_fs_calendar_pane

0x9109,	// (0x00095327) main_phacti_pane_g1

0x9111,	// (0x0009532f) phacti_note_pane_ParamLimits

0x9111,	// (0x0009532f) phacti_note_pane

0xcd10,	// (0x00098f2e) phacti_term_pane_ParamLimits

0xcd10,	// (0x00098f2e) phacti_term_pane

0xcd25,	// (0x00098f43) phacti_note_pane_t1_ParamLimits

0xcd25,	// (0x00098f43) phacti_note_pane_t1

0xcd3c,	// (0x00098f5a) phacti_term_pane_g1

0xcd44,	// (0x00098f62) phacti_term_pane_t1_ParamLimits

0xcd44,	// (0x00098f62) phacti_term_pane_t1

0xcd6e,	// (0x00098f8c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe3ca,	// (0x0009a5e8) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd2c,	// (0x0009bf4a) popup_sp_fs_calendar_preview_list_single_pane_g

0xcd76,	// (0x00098f94) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xcd76,	// (0x00098f94) popup_sp_fs_calendar_preview_list_single_pane_t1

0xcd8b,	// (0x00098fa9) aid_popup_sp_fs_bg_corner_pane

0xabd1,	// (0x00096def) popup_sp_fs_calendar_preview_bg_pane_g1

0x0dba,	// (0x0008cfd8) popup_sp_fs_calendar_preview_bg_pane

0xcd93,	// (0x00098fb1) popup_sp_fs_calendar_preview_list_pane

0xf009,	// (0x0009b227) bg_main_sp_fs_cale_pane_ParamLimits

0xf009,	// (0x0009b227) bg_main_sp_fs_cale_pane

0xcda4,	// (0x00098fc2) listscroll_cale_mrui_pane_ParamLimits

0xcda4,	// (0x00098fc2) listscroll_cale_mrui_pane

0xcdb8,	// (0x00098fd6) listscroll_sp_fs_schedule_track_pane

0xcdc1,	// (0x00098fdf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xcdc1,	// (0x00098fdf) main_sp_fs_ctrlbar_pane_cp01

0xcdd2,	// (0x00098ff0) main_sp_fs_ribbon_pane

0xcdda,	// (0x00098ff8) popup_sp_fs_cale_preview_window

0x9168,	// (0x00095386) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9168,	// (0x00095386) list_single_sp_fs_schedule_track_pane

0xf009,	// (0x0009b227) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xf009,	// (0x0009b227) bg_sp_fs_highlight_list_pane_cp03

0x917a,	// (0x00095398) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x917a,	// (0x00095398) list_single_sp_fs_schedule_track_pane_g1

0x9186,	// (0x000953a4) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9186,	// (0x000953a4) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd31,	// (0x0009bf4f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd31,	// (0x0009bf4f) list_single_sp_fs_schedule_track_pane_g

0x9192,	// (0x000953b0) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9192,	// (0x000953b0) list_single_sp_fs_schedule_track_pane_t1

0x91ac,	// (0x000953ca) sp_fs_schedule_track_pane_ParamLimits

0x91ac,	// (0x000953ca) sp_fs_schedule_track_pane

0xcdec,	// (0x0009900a) sp_fs_schedule_track_pane_g1

0xcdf4,	// (0x00099012) sp_fs_schedule_track_pane_g2

0xcdfc,	// (0x0009901a) sp_fs_schedule_track_pane_g3

0xce04,	// (0x00099022) sp_fs_schedule_track_pane_g4

0xce0c,	// (0x0009902a) sp_fs_schedule_track_pane_g5

0x0004,

0xfd36,	// (0x0009bf54) sp_fs_schedule_track_pane_g

0xb6c9,	// (0x000978e7) bg_sp_fs_schedule_viewer_highlight_g1

0xe5c7,	// (0x0009a7e5) bg_sp_fs_schedule_viewer_highlight_g2

0xb6d1,	// (0x000978ef) bg_sp_fs_schedule_viewer_highlight_g3

0xb6d9,	// (0x000978f7) bg_sp_fs_schedule_viewer_highlight_g4

0xb91f,	// (0x00097b3d) bg_sp_fs_schedule_viewer_highlight_g5

0xb6e9,	// (0x00097907) bg_sp_fs_schedule_viewer_highlight_g6

0xb6f1,	// (0x0009790f) bg_sp_fs_schedule_viewer_highlight_g7

0xb6f9,	// (0x00097917) bg_sp_fs_schedule_viewer_highlight_g8

0xe5a7,	// (0x0009a7c5) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd41,	// (0x0009bf5f) bg_sp_fs_schedule_viewer_highlight_g

0x0dba,	// (0x0008cfd8) bg_main_sp_fs_ribbon_pane

0x91bd,	// (0x000953db) main_sp_fs_ribbon_pane_g1

0xce14,	// (0x00099032) main_sp_fs_ribbon_pane_t1

0x91c6,	// (0x000953e4) main_sp_fs_ribbon_pane_t2

0xce23,	// (0x00099041) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd54,	// (0x0009bf72) main_sp_fs_ribbon_pane_t

0xce32,	// (0x00099050) main_sp_fs_ribbon_scheduler_pane

0xce3a,	// (0x00099058) bg_main_sp_fs_ribbon_pane_g1

0xce43,	// (0x00099061) bg_main_sp_fs_ribbon_pane_g2

0xce4c,	// (0x0009906a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd5b,	// (0x0009bf79) bg_main_sp_fs_ribbon_pane_g

0xce54,	// (0x00099072) main_sp_fs_ribbon_scheduler_pane_g1

0xce5d,	// (0x0009907b) main_sp_fs_ribbon_scheduler_pane_g2

0xce66,	// (0x00099084) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd62,	// (0x0009bf80) main_sp_fs_ribbon_scheduler_pane_g

0xce6f,	// (0x0009908d) list_cale_mrui_pane

0x91d5,	// (0x000953f3) sp_fs_scroll_pane_cp07_ParamLimits

0x91d5,	// (0x000953f3) sp_fs_scroll_pane_cp07

0x91e9,	// (0x00095407) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x91e9,	// (0x00095407) bg_sp_fs_schedule_viewer_highlight

0xce78,	// (0x00099096) list_single_sp_fs_schedule_track_pane_cp01

0xce80,	// (0x0009909e) list_sp_fs_schedule_track_pane

0xce88,	// (0x000990a6) sp_fs_scroll_pane_cp06_ParamLimits

0xce88,	// (0x000990a6) sp_fs_scroll_pane_cp06

0xabd1,	// (0x00096def) bgmain_sp_fs_calendar_pane_g1

0x91f9,	// (0x00095417) list_single_cale_mrui_pane_ParamLimits

0x91f9,	// (0x00095417) list_single_cale_mrui_pane

0xce9a,	// (0x000990b8) list_single_cale_mrui_row_pane_ParamLimits

0xce9a,	// (0x000990b8) list_single_cale_mrui_row_pane

0xcea7,	// (0x000990c5) list_single_cale_mrui_row_pane_g1_ParamLimits

0xcea7,	// (0x000990c5) list_single_cale_mrui_row_pane_g1

0xcedf,	// (0x000990fd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xcedf,	// (0x000990fd) list_single_cale_mrui_row_pane_t1

0x9219,	// (0x00095437) list_single_cale_mrui_row_pane_t2_ParamLimits

0x9219,	// (0x00095437) list_single_cale_mrui_row_pane_t2

0xcef1,	// (0x0009910f) list_single_cale_mrui_row_pane_t3_ParamLimits

0xcef1,	// (0x0009910f) list_single_cale_mrui_row_pane_t3

0xcf20,	// (0x0009913e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xcf20,	// (0x0009913e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd6e,	// (0x0009bf8c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd6e,	// (0x0009bf8c) list_single_cale_mrui_row_pane_t

0x9281,	// (0x0009549f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9281,	// (0x0009549f) list_single_cmail_header_editor_pane_bg_cp01

0x92a7,	// (0x000954c5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x92a7,	// (0x000954c5) list_single_cmail_header_editor_pane_bg_cp02

0x92c7,	// (0x000954e5) main_radioblah_text_pane_t1_ParamLimits

0x92c7,	// (0x000954e5) main_radioblah_text_pane_t1

0xcf4f,	// (0x0009916d) cam6_indi_pane_cp01

0xcf57,	// (0x00099175) cam6_mode_pane_cp01

0xcf5f,	// (0x0009917d) cam6_pano_pane

0xcf68,	// (0x00099186) cam6_zoom_pane_cp01

0xcf70,	// (0x0009918e) cam6_pano_image_pane

0xcf7b,	// (0x00099199) cam6_pano_pane_g1

0xc506,	// (0x00098724) cam6_pano_pane_g2

0xcf84,	// (0x000991a2) cam6_pano_pane_g3

0xcf8d,	// (0x000991ab) cam6_pano_pane_g4

0xb1a5,	// (0x000973c3) cam6_pano_pane_g5

0xcf96,	// (0x000991b4) cam6_pano_pane_g6

0xcfa0,	// (0x000991be) cam6_pano_pane_g7

0xcfa8,	// (0x000991c6) cam6_pano_pane_g8

0xcfb1,	// (0x000991cf) cam6_pano_pane_g9

0x0008,

0xfd77,	// (0x0009bf95) cam6_pano_pane_g

0x0dba,	// (0x0008cfd8) main_browser_tag_pane

0xccf1,	// (0x00098f0f) grid_navstr_albumart_pane

0xcfbc,	// (0x000991da) cell_navstr_albumart_pane_ParamLimits

0xcfbc,	// (0x000991da) cell_navstr_albumart_pane

0xcfdf,	// (0x000991fd) cell_navstr_albumart_pane_g1

0xa4e8,	// (0x00096706) cell_navstr_albumart_pane_g2

0xa4f8,	// (0x00096716) cell_navstr_albumart_pane_g3

0xa4f0,	// (0x0009670e) cell_navstr_albumart_pane_g4

0x0003,

0xfd8a,	// (0x0009bfa8) cell_navstr_albumart_pane_g

0x92e1,	// (0x000954ff) bt_list_pane_ParamLimits

0x92e1,	// (0x000954ff) bt_list_pane

0x92f5,	// (0x00095513) bt_list_pane_t1

0x9304,	// (0x00095522) bt_list_pane_t2

0x0001,

0xfd93,	// (0x0009bfb1) bt_list_pane_t

0x0dba,	// (0x0008cfd8) main_cale_prevew_pane

0x9313,	// (0x00095531) popup_cale_preview_window_ParamLimits

0x9313,	// (0x00095531) popup_cale_preview_window

0xf009,	// (0x0009b227) bg_popup_preview_window_pane_cp05_ParamLimits

0xf009,	// (0x0009b227) bg_popup_preview_window_pane_cp05

0xcfe7,	// (0x00099205) list_cale_preview_pane_ParamLimits

0xcfe7,	// (0x00099205) list_cale_preview_pane

0x932e,	// (0x0009554c) list_double_cale_preview_pane_ParamLimits

0x932e,	// (0x0009554c) list_double_cale_preview_pane

0x9340,	// (0x0009555e) list_single_cale_preview_pane_ParamLimits

0x9340,	// (0x0009555e) list_single_cale_preview_pane

0x9356,	// (0x00095574) list_single_cale_preview_pane_g1

0x935e,	// (0x0009557c) list_single_cale_preview_pane_t1_ParamLimits

0x935e,	// (0x0009557c) list_single_cale_preview_pane_t1

0x9373,	// (0x00095591) list_double_cale_preview_pane_g1

0x937b,	// (0x00095599) list_double_cale_preview_pane_t1_ParamLimits

0x937b,	// (0x00095599) list_double_cale_preview_pane_t1

0x9390,	// (0x000955ae) list_double_cale_preview_pane_t2_ParamLimits

0x9390,	// (0x000955ae) list_double_cale_preview_pane_t2

0x0001,

0xfd98,	// (0x0009bfb6) list_double_cale_preview_pane_t_ParamLimits

0xfd98,	// (0x0009bfb6) list_double_cale_preview_pane_t

0x0dba,	// (0x0008cfd8) main_ezdial_pane

0xf009,	// (0x0009b227) main_sp_fs_email_pane_ParamLimits

0x8acb,	// (0x00094ce9) cmail_ddmenu_btn01_pane_ParamLimits

0x8acb,	// (0x00094ce9) cmail_ddmenu_btn01_pane

0x8ade,	// (0x00094cfc) cmail_ddmenu_btn02_pane_ParamLimits

0x8ade,	// (0x00094cfc) cmail_ddmenu_btn02_pane

0x8b01,	// (0x00094d1f) cmail_ddmenu_btn03_pane_ParamLimits

0x8b01,	// (0x00094d1f) cmail_ddmenu_btn03_pane

0x8b27,	// (0x00094d45) main_sp_fs_ctrlbar_pane_ParamLimits

0x8b4b,	// (0x00094d69) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xb8e0,	// (0x00097afe) list_cmail_body_pane_ParamLimits

0xcc19,	// (0x00098e37) bg_button_pane_cp12

0xcc2e,	// (0x00098e4c) list_single_cmail_header_detail_pane_g3_ParamLimits

0xcc2e,	// (0x00098e4c) list_single_cmail_header_detail_pane_g3

0x903f,	// (0x0009525d) list_single_cmail_header_detail_pane_t2_ParamLimits

0x903f,	// (0x0009525d) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd1d,	// (0x0009bf3b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd1d,	// (0x0009bf3b) list_single_cmail_header_detail_pane_t

0xcd59,	// (0x00098f77) phacti_term_pane_t2_ParamLimits

0xcd59,	// (0x00098f77) phacti_term_pane_t2

0x0001,

0xfd27,	// (0x0009bf45) phacti_term_pane_t_ParamLimits

0xfd27,	// (0x0009bf45) phacti_term_pane_t

0xcff3,	// (0x00099211) aid_size_list_single_double

0x93a8,	// (0x000955c6) popup_ezdial_listscroll_window

0x93c4,	// (0x000955e2) popup_number_entry_window_cp01

0xecb2,	// (0x0009aed0) bg_popup_call_pane_cp09

0xcfff,	// (0x0009921d) ezdial_list_pane

0xd007,	// (0x00099225) scroll_pane_cp23

0xa6cb,	// (0x000968e9) bg_button_pane_cp028_ParamLimits

0xa6cb,	// (0x000968e9) bg_button_pane_cp028

0x93d2,	// (0x000955f0) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x93d2,	// (0x000955f0) cmail_ddmenu_btn01_pane_g1

0x93de,	// (0x000955fc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x93de,	// (0x000955fc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd9d,	// (0x0009bfbb) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd9d,	// (0x0009bfbb) cmail_ddmenu_btn01_pane_g

0xd00f,	// (0x0009922d) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd00f,	// (0x0009922d) cmail_ddmenu_btn01_pane_t1

0xa6cb,	// (0x000968e9) bg_button_pane_cp029_ParamLimits

0xa6cb,	// (0x000968e9) bg_button_pane_cp029

0x93ea,	// (0x00095608) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x93ea,	// (0x00095608) cmail_ddmenu_btn02_pane_g1

0x9402,	// (0x00095620) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9402,	// (0x00095620) cmail_ddmenu_btn02_pane_t1

0xf009,	// (0x0009b227) bg_button_pane_cp031_ParamLimits

0xf009,	// (0x0009b227) bg_button_pane_cp031

0x93ea,	// (0x00095608) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x93ea,	// (0x00095608) cmail_ddmenu_btn03_pane_g1

0x9402,	// (0x00095620) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9402,	// (0x00095620) cmail_ddmenu_btn03_pane_t1

0x6599,	// (0x000927b7) cell_dialer2_keypad_pane_t1_ParamLimits

0x65b3,	// (0x000927d1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x65b3,	// (0x000927d1) cell_dialer2_keypad_pane_t1_copy1

0x8397,	// (0x000945b5) ncimui_group_button_pane

0xf009,	// (0x0009b227) main_sp_fs_calendar_pane_ParamLimits

0x8fd8,	// (0x000951f6) list_single_cmail_header_caption_pane_ParamLimits

0xcd9b,	// (0x00098fb9) aid_recal_txt_sm_pane

0x0dba,	// (0x0008cfd8) mian_recal_day_pane

0xcdda,	// (0x00098ff8) popup_sp_fs_cale_preview_window_ParamLimits

0x0dba,	// (0x0008cfd8) list_recal_day_pane

0xd046,	// (0x00099264) list_single_recal_day_pane_ParamLimits

0xd046,	// (0x00099264) list_single_recal_day_pane

0xd058,	// (0x00099276) list_single_recal_day_pane_g1_ParamLimits

0xd058,	// (0x00099276) list_single_recal_day_pane_g1

0xd064,	// (0x00099282) list_single_recal_day_pane_g2_ParamLimits

0xd064,	// (0x00099282) list_single_recal_day_pane_g2

0xd073,	// (0x00099291) list_single_recal_day_pane_g3_ParamLimits

0xd073,	// (0x00099291) list_single_recal_day_pane_g3

0x9426,	// (0x00095644) list_single_recal_day_pane_g4_ParamLimits

0x9426,	// (0x00095644) list_single_recal_day_pane_g4

0xd07f,	// (0x0009929d) list_single_recal_day_pane_g5_ParamLimits

0xd07f,	// (0x0009929d) list_single_recal_day_pane_g5

0xd08e,	// (0x000992ac) list_single_recal_day_pane_g6_ParamLimits

0xd08e,	// (0x000992ac) list_single_recal_day_pane_g6

0x0005,

0xfdac,	// (0x0009bfca) list_single_recal_day_pane_g_ParamLimits

0xfdac,	// (0x0009bfca) list_single_recal_day_pane_g

0xd09a,	// (0x000992b8) list_single_recal_day_pane_t1

0xd0a8,	// (0x000992c6) list_single_recal_day_pane_t2

0x0001,

0xfdb9,	// (0x0009bfd7) list_single_recal_day_pane_t

0x9439,	// (0x00095657) ncimui_query_button_pane_ParamLimits

0x9439,	// (0x00095657) ncimui_query_button_pane

0x9449,	// (0x00095667) ncimui_query_button_pane_t1_ParamLimits

0x9449,	// (0x00095667) ncimui_query_button_pane_t1

0xd0b6,	// (0x000992d4) ncimui_query_button_pane_t2_ParamLimits

0xd0b6,	// (0x000992d4) ncimui_query_button_pane_t2

0x0001,

0xfdbe,	// (0x0009bfdc) ncimui_query_button_pane_t_ParamLimits

0xfdbe,	// (0x0009bfdc) ncimui_query_button_pane_t

0x945c,	// (0x0009567a) query_button_pane_ParamLimits

0x945c,	// (0x0009567a) query_button_pane

0x0dba,	// (0x0008cfd8) bg_button_pane_cp0028

0xd0c9,	// (0x000992e7) query_button_pane_t1

0x46d3,	// (0x000908f1) main_tport_pane_ParamLimits

0x8ec5,	// (0x000950e3) bg_popup_window_pane_cp01_ParamLimits

0x8ec5,	// (0x000950e3) bg_popup_window_pane_cp01

0x8edf,	// (0x000950fd) heading_pane_cp08_ParamLimits

0x8edf,	// (0x000950fd) heading_pane_cp08

0x8ef3,	// (0x00095111) heading_pane_cp07_ParamLimits

0x8ef3,	// (0x00095111) heading_pane_cp07

0xcbdb,	// (0x00098df9) cell_tport_appsw_pane_g2

0x0002,

0xfd0a,	// (0x0009bf28) cell_tport_appsw_pane_g

0x3433,	// (0x0008f651) input_candi_list_open_g1

0xe76e,	// (0x0009a98c) list_cale_time_pane_g6_ParamLimits

0xe76e,	// (0x0009a98c) list_cale_time_pane_g6

0x54a0,	// (0x000916be) aid_size_touch_calib_1_ParamLimits

0x54a0,	// (0x000916be) aid_size_touch_calib_1

0x54ac,	// (0x000916ca) aid_size_touch_calib_2_ParamLimits

0x54ac,	// (0x000916ca) aid_size_touch_calib_2

0x54c2,	// (0x000916e0) aid_size_touch_calib_3_ParamLimits

0x54c2,	// (0x000916e0) aid_size_touch_calib_3

0x54e0,	// (0x000916fe) aid_size_touch_calib_4_ParamLimits

0x54e0,	// (0x000916fe) aid_size_touch_calib_4

0x54f6,	// (0x00091714) main_touch_calib_button_group_pane_ParamLimits

0x54f6,	// (0x00091714) main_touch_calib_button_group_pane

0x550e,	// (0x0009172c) main_touch_calib_pane_g1_ParamLimits

0x551a,	// (0x00091738) main_touch_calib_pane_g2_ParamLimits

0x5526,	// (0x00091744) main_touch_calib_pane_g3_ParamLimits

0x5532,	// (0x00091750) main_touch_calib_pane_g4_ParamLimits

0xf6e9,	// (0x0009b907) main_touch_calib_pane_g_ParamLimits

0x553e,	// (0x0009175c) main_touch_calib_pane_t1_ParamLimits

0x5558,	// (0x00091776) main_touch_calib_pane_t2_ParamLimits

0x5572,	// (0x00091790) main_touch_calib_pane_t3_ParamLimits

0x5586,	// (0x000917a4) main_touch_calib_pane_t4_ParamLimits

0x559a,	// (0x000917b8) main_touch_calib_pane_t5_ParamLimits

0xf6f2,	// (0x0009b910) main_touch_calib_pane_t_ParamLimits

0xaf7b,	// (0x00097199) list_single_fp_cale_pane_g3_ParamLimits

0xaf7b,	// (0x00097199) list_single_fp_cale_pane_g3

0xd93d,	// (0x00099b5b) bg_button_pane_cp012_ParamLimits

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp03_ParamLimits

0x755d,	// (0x0009377b) cell_vitu2_function_top_pane_g1_ParamLimits

0xd93d,	// (0x00099b5b) bg_vkb2_func_pane_cp04_ParamLimits

0x8337,	// (0x00094555) main_ncimui_button_group_pane_ParamLimits

0x8337,	// (0x00094555) main_ncimui_button_group_pane

0x8385,	// (0x000945a3) main_ncimui_pane_t3_ParamLimits

0x8385,	// (0x000945a3) main_ncimui_pane_t3

0xcd07,	// (0x00098f25) phacti_button_group_pane

0xcff3,	// (0x00099211) aid_size_list_single_double_ParamLimits

0x93a8,	// (0x000955c6) popup_ezdial_listscroll_window_ParamLimits

0x93c4,	// (0x000955e2) popup_number_entry_window_cp01_ParamLimits

0x946f,	// (0x0009568d) phacti_button_pane_ParamLimits

0x946f,	// (0x0009568d) phacti_button_pane

0x0dba,	// (0x0008cfd8) bg_button_pane_cp14

0xd0d7,	// (0x000992f5) phacti_button_pane_t1

0x9480,	// (0x0009569e) main_touch_calib_button_pane_ParamLimits

0x9480,	// (0x0009569e) main_touch_calib_button_pane

0xe1d3,	// (0x0009a3f1) bg_button_pane_cp18_ParamLimits

0xe1d3,	// (0x0009a3f1) bg_button_pane_cp18

0xd0e5,	// (0x00099303) main_touch_calib_button_pane_t1_ParamLimits

0xd0e5,	// (0x00099303) main_touch_calib_button_pane_t1

0xd0fb,	// (0x00099319) main_touch_calib_button_pane_t2_ParamLimits

0xd0fb,	// (0x00099319) main_touch_calib_button_pane_t2

0x0001,

0xfdc3,	// (0x0009bfe1) main_touch_calib_button_pane_t_ParamLimits

0xfdc3,	// (0x0009bfe1) main_touch_calib_button_pane_t

0x0dba,	// (0x0008cfd8) cell_ncimui_button_pane

0x0dba,	// (0x0008cfd8) bg_button_pane_cp032

0xd119,	// (0x00099337) cell_ncimui_button_pane_t1

0xd858,	// (0x00099a76) image3_infobar_pane_ParamLimits

0xd858,	// (0x00099a76) image3_infobar_pane

0x8736,	// (0x00094954) fs_bigclock_status_pane_ParamLimits

0x8736,	// (0x00094954) fs_bigclock_status_pane

0x8743,	// (0x00094961) main_fs_bigclock_clock_pane_ParamLimits

0x8743,	// (0x00094961) main_fs_bigclock_clock_pane

0x8756,	// (0x00094974) main_fs_bigclock_indi_pane_ParamLimits

0x8756,	// (0x00094974) main_fs_bigclock_indi_pane

0x876e,	// (0x0009498c) main_fs_bigclock_swipe_pane_ParamLimits

0x876e,	// (0x0009498c) main_fs_bigclock_swipe_pane

0x0dba,	// (0x0008cfd8) main_fs_clock_dumped_data

0xc613,	// (0x00098831) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xc613,	// (0x00098831) list_single_fs_bigclock_indicator_pane_g1

0xc62f,	// (0x0009884d) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xc62f,	// (0x0009884d) list_single_fs_bigclock_indicator_pane_g2

0xc649,	// (0x00098867) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xc649,	// (0x00098867) list_single_fs_bigclock_indicator_pane_g3

0xc663,	// (0x00098881) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xc663,	// (0x00098881) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbf6,	// (0x0009be14) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbf6,	// (0x0009be14) list_single_fs_bigclock_indicator_pane_g

0xc689,	// (0x000988a7) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xc689,	// (0x000988a7) list_single_fs_bigclock_indicator_pane_t1

0xc6b1,	// (0x000988cf) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xc6b1,	// (0x000988cf) list_single_fs_bigclock_indicator_pane_t2

0xc6d9,	// (0x000988f7) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xc6d9,	// (0x000988f7) list_single_fs_bigclock_indicator_pane_t3

0xc701,	// (0x0009891f) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xc701,	// (0x0009891f) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc01,	// (0x0009be1f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc01,	// (0x0009be1f) list_single_fs_bigclock_indicator_pane_t

0xd127,	// (0x00099345) image3_infobar_fav_pane_ParamLimits

0xd127,	// (0x00099345) image3_infobar_fav_pane

0xd137,	// (0x00099355) image3_infobar_loc_pane_ParamLimits

0xd137,	// (0x00099355) image3_infobar_loc_pane

0xd14b,	// (0x00099369) image3_infobar_time_pane_ParamLimits

0xd14b,	// (0x00099369) image3_infobar_time_pane

0xabd1,	// (0x00096def) image3_infobar_time_pane_g1

0xd15b,	// (0x00099379) image3_infobar_time_pane_t1

0xabd1,	// (0x00096def) image3_infobar_loc_pane_g1

0xd169,	// (0x00099387) image3_infobar_loc_pane_g2

0x0001,

0xfdc8,	// (0x0009bfe6) image3_infobar_loc_pane_g

0xd171,	// (0x0009938f) image3_infobar_loc_pane_t1

0xabd1,	// (0x00096def) image3_infobar_fav_pane_g1

0xd17f,	// (0x0009939d) image3_infobar_fav_pane_g2

0x0001,

0xfdcd,	// (0x0009bfeb) image3_infobar_fav_pane_g

0xd187,	// (0x000993a5) fs_bigclock_status_battery_pane

0xd190,	// (0x000993ae) fs_bigclock_status_signal_pane

0xd199,	// (0x000993b7) fs_bigclock_status_title_pane

0xd1a2,	// (0x000993c0) fs_bigclock_status_signal_pane_g1

0xd1ab,	// (0x000993c9) fs_bigclock_status_signal_pane_g2

0x0001,

0xfdd2,	// (0x0009bff0) fs_bigclock_status_signal_pane_g

0xd1b3,	// (0x000993d1) fs_bigclock_status_battery_pane_g1

0xd1bc,	// (0x000993da) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdd7,	// (0x0009bff5) fs_bigclock_status_battery_pane_g

0xd1c4,	// (0x000993e2) fs_bigclock_status_title_pane_t1

0xabd1,	// (0x00096def) main_fs_bigclock_clock_pane_g1

0xd1d2,	// (0x000993f0) main_fs_bigclock_clock_pane_g2

0xd1d2,	// (0x000993f0) main_fs_bigclock_clock_pane_g3

0xd1d2,	// (0x000993f0) main_fs_bigclock_clock_pane_g4

0x0003,

0xfddc,	// (0x0009bffa) main_fs_bigclock_clock_pane_g

0xd1da,	// (0x000993f8) main_fs_bigclock_clock_pane_t1

0xd1e8,	// (0x00099406) main_fs_bigclock_clock_pane_t2

0x0001,

0xfde5,	// (0x0009c003) main_fs_bigclock_clock_pane_t

0xd1f7,	// (0x00099415) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd1f7,	// (0x00099415) list_single_fs_bigclock_indicator_pane

0x9495,	// (0x000956b3) list_single_fs_bigclock_pane_ParamLimits

0x9495,	// (0x000956b3) list_single_fs_bigclock_pane

0xd211,	// (0x0009942f) main_fs_bigclock_indicator_pane_t1

0xd220,	// (0x0009943e) list_single_fs_bigclock_pane_g1

0xd228,	// (0x00099446) list_single_fs_bigclock_pane_t1

0xabd1,	// (0x00096def) main_fs_bigclock_swipe_pane_g1

0xd266,	// (0x00099484) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdf6,	// (0x0009c014) main_fs_bigclock_swipe_pane_g

0xd26e,	// (0x0009948c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd26e,	// (0x0009948c) main_fs_bigclock_swipe_pane_t1

0x2c61,	// (0x0008ee7f) call_type_pane_ParamLimits

0x0dba,	// (0x0008cfd8) main_btmg_pane

0xced3,	// (0x000990f1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xced3,	// (0x000990f1) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd69,	// (0x0009bf87) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd69,	// (0x0009bf87) list_single_cale_mrui_row_pane_g

0xd02d,	// (0x0009924b) list_recal_vselct_arw_lo_pane

0xd035,	// (0x00099253) list_recal_vselct_arw_up_pane

0xd03d,	// (0x0009925b) list_recal_vselct_pane

0xd28b,	// (0x000994a9) btmg_button_pane

0x94fa,	// (0x00095718) main_btmg_pane_g1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp044

0xd295,	// (0x000994b3) btmg_button_pane_t1

0xa6c3,	// (0x000968e1) aid_listscroll_gen

0xf009,	// (0x0009b227) main_cntbar_detail_pane

0xcbf9,	// (0x00098e17) list_cmail_folder_pane

0xcc09,	// (0x00098e27) sp_fs_scroll_pane_cp03_ParamLimits

0x9504,	// (0x00095722) list_single_fs_dyc_pane_cp01_ParamLimits

0x9504,	// (0x00095722) list_single_fs_dyc_pane_cp01

0xd2a3,	// (0x000994c1) aid_size_cmail_indent

0xd2ac,	// (0x000994ca) list_single_dyc_row_pane_cp01

0x9545,	// (0x00095763) cntbar_detail_list_pane_ParamLimits

0x9545,	// (0x00095763) cntbar_detail_list_pane

0x9591,	// (0x000957af) main_cntbar_detail_cont_pane_ParamLimits

0x9591,	// (0x000957af) main_cntbar_detail_cont_pane

0x2b86,	// (0x0008eda4) scroll_pane_cp032_ParamLimits

0x2b86,	// (0x0008eda4) scroll_pane_cp032

0x95a5,	// (0x000957c3) cntbar_detail_list_event_pane_ParamLimits

0x95a5,	// (0x000957c3) cntbar_detail_list_event_pane

0x9555,	// (0x00095773) cntbar_detail_list_shct_pane

0xe615,	// (0x0009a833) aid_list_gen

0xd2b5,	// (0x000994d3) aid_scroll

0xd2be,	// (0x000994dc) aid_size_touch_scroll_bar

0x95b5,	// (0x000957d3) aid_list_double

0xd2c7,	// (0x000994e5) aid_list_single

0x95be,	// (0x000957dc) aid_list_single_lg

0xd2d0,	// (0x000994ee) aid_list_z_g_a_sm

0xd2d8,	// (0x000994f6) aid_list_z_g_d

0xd2e0,	// (0x000994fe) aid_txt_z_prm

0x95c7,	// (0x000957e5) aid_txt_z_prm_cp01

0x95d5,	// (0x000957f3) aid_txt_z_sec

0x95e3,	// (0x00095801) main_cntbar_detail_cont_pane_g1_ParamLimits

0x95e3,	// (0x00095801) main_cntbar_detail_cont_pane_g1

0x95f7,	// (0x00095815) main_cntbar_detail_cont_pane_g2_ParamLimits

0x95f7,	// (0x00095815) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdfb,	// (0x0009c019) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdfb,	// (0x0009c019) main_cntbar_detail_cont_pane_g

0xd2ee,	// (0x0009950c) main_cntbar_detail_cont_pane_t1

0xd2fc,	// (0x0009951a) main_cntbar_detail_cont_pane_t2

0xd30a,	// (0x00099528) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe00,	// (0x0009c01e) main_cntbar_detail_cont_pane_t

0x9607,	// (0x00095825) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9607,	// (0x00095825) cell_cntbar_detail_list_shct_pane

0xd318,	// (0x00099536) cntbar_detail_list_shct_pane_g1

0xd321,	// (0x0009953f) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe07,	// (0x0009c025) cntbar_detail_list_shct_pane_g

0x961b,	// (0x00095839) cntbar_detail_list_event_pane_g1_ParamLimits

0x961b,	// (0x00095839) cntbar_detail_list_event_pane_g1

0x9627,	// (0x00095845) cntbar_detail_list_event_pane_g2_ParamLimits

0x9627,	// (0x00095845) cntbar_detail_list_event_pane_g2

0x0005,

0xfe0c,	// (0x0009c02a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe0c,	// (0x0009c02a) cntbar_detail_list_event_pane_g

0x9693,	// (0x000958b1) cntbar_detail_list_event_pane_t1_ParamLimits

0x9693,	// (0x000958b1) cntbar_detail_list_event_pane_t1

0x96a8,	// (0x000958c6) cntbar_detail_list_event_pane_t2_ParamLimits

0x96a8,	// (0x000958c6) cntbar_detail_list_event_pane_t2

0x0002,

0xfe19,	// (0x0009c037) cntbar_detail_list_event_pane_t_ParamLimits

0xfe19,	// (0x0009c037) cntbar_detail_list_event_pane_t

0xabd1,	// (0x00096def) cell_cntbar_detail_list_shct_pane_g1

0x2fc3,	// (0x0008f1e1) navi_pane_mv_g3

0xf009,	// (0x0009b227) main_cntbar_detail_pane_ParamLimits

0x0dba,	// (0x0008cfd8) main_notif_wgt_pane

0xd66e,	// (0x0009988c) aid_tch_main_mp4_pane_g4

0xd850,	// (0x00099a6e) popup_slider_window_cp02

0xd024,	// (0x00099242) list_recal_day_event_pane

0x9519,	// (0x00095737) cntbar_detail_btn_pane_ParamLimits

0x9519,	// (0x00095737) cntbar_detail_btn_pane

0x952f,	// (0x0009574d) cntbar_detail_btn_pane_cp01_ParamLimits

0x952f,	// (0x0009574d) cntbar_detail_btn_pane_cp01

0x9555,	// (0x00095773) cntbar_detail_list_shct_pane_ParamLimits

0x9565,	// (0x00095783) cntbar_detail_pane_g1_ParamLimits

0x9565,	// (0x00095783) cntbar_detail_pane_g1

0x9575,	// (0x00095793) cntbar_detail_pane_t1_ParamLimits

0x9575,	// (0x00095793) cntbar_detail_pane_t1

0x9633,	// (0x00095851) cntbar_detail_list_event_pane_g3_ParamLimits

0x9633,	// (0x00095851) cntbar_detail_list_event_pane_g3

0x964b,	// (0x00095869) cntbar_detail_list_event_pane_g4_ParamLimits

0x964b,	// (0x00095869) cntbar_detail_list_event_pane_g4

0x9663,	// (0x00095881) cntbar_detail_list_event_pane_g5_ParamLimits

0x9663,	// (0x00095881) cntbar_detail_list_event_pane_g5

0x967b,	// (0x00095899) cntbar_detail_list_event_pane_g6_ParamLimits

0x967b,	// (0x00095899) cntbar_detail_list_event_pane_g6

0x96bd,	// (0x000958db) cntbar_detail_list_event_pane_t3_ParamLimits

0x96bd,	// (0x000958db) cntbar_detail_list_event_pane_t3

0x96cf,	// (0x000958ed) popup_notif_wgt_window_ParamLimits

0x96cf,	// (0x000958ed) popup_notif_wgt_window

0x96e8,	// (0x00095906) popup_submenu_window_cp01_ParamLimits

0x96e8,	// (0x00095906) popup_submenu_window_cp01

0xecb2,	// (0x0009aed0) bg_popup_window_pane_cp10

0xd32a,	// (0x00099548) listscroll_notif_wgt_pane

0xd334,	// (0x00099552) list_notif_wgt_window

0xd33d,	// (0x0009955b) scroll_pane_cp033

0xd346,	// (0x00099564) list_notif_wgt_row_pane_ParamLimits

0xd346,	// (0x00099564) list_notif_wgt_row_pane

0xd358,	// (0x00099576) aid_size_list_notif_wgt_del

0xd361,	// (0x0009957f) list_notif_wgt_row_pane_g1

0xd369,	// (0x00099587) list_notif_wgt_row_pane_g2

0xd371,	// (0x0009958f) list_notif_wgt_row_pane_g3

0x0002,

0xfe20,	// (0x0009c03e) list_notif_wgt_row_pane_g

0xd37a,	// (0x00099598) list_notif_wgt_row_pane_t1

0xd388,	// (0x000995a6) list_notif_wgt_row_pane_t2

0xd396,	// (0x000995b4) list_notif_wgt_row_pane_t3

0x0002,

0xfe27,	// (0x0009c045) list_notif_wgt_row_pane_t

0xb951,	// (0x00097b6f) list_recal_day_event_pane_g1

0xd3a4,	// (0x000995c2) list_recal_day_event_pane_t1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp045

0xd3b3,	// (0x000995d1) cntbar_detail_btn_pane_t1

0xa6cb,	// (0x000968e9) main_callh_pane_ParamLimits

0xa6cb,	// (0x000968e9) main_callh_pane

0x0dba,	// (0x0008cfd8) main_coverflow0_pane

0x0dba,	// (0x0008cfd8) main_wgtman_pane

0x877c,	// (0x0009499a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x877c,	// (0x0009499a) main_fs_bigclock_unlock_btn_pane

0xcbd3,	// (0x00098df1) bg_button_pane_cp16

0xcbe3,	// (0x00098e01) cell_tport_appsw_pane_g3

0x96fa,	// (0x00095918) cf0_flow_pane_ParamLimits

0x96fa,	// (0x00095918) cf0_flow_pane

0xd3c1,	// (0x000995df) listscroll_cf0_pane

0xd3ca,	// (0x000995e8) main_cf0_pane_g1

0x970f,	// (0x0009592d) main_cf0_pane_t1_ParamLimits

0x970f,	// (0x0009592d) main_cf0_pane_t1

0x9726,	// (0x00095944) main_cf0_pane_t2_ParamLimits

0x9726,	// (0x00095944) main_cf0_pane_t2

0x0001,

0xfe2e,	// (0x0009c04c) main_cf0_pane_t_ParamLimits

0xfe2e,	// (0x0009c04c) main_cf0_pane_t

0xd3d4,	// (0x000995f2) scroll_pane_cp11

0x973d,	// (0x0009595b) cf0_flow_pane_g1

0x9745,	// (0x00095963) cf0_flow_pane_g2

0x0001,

0xfe33,	// (0x0009c051) cf0_flow_pane_g

0x974d,	// (0x0009596b) cf0_flow_pane_t1

0x0dba,	// (0x0008cfd8) main_call6_pane

0x0dba,	// (0x0008cfd8) main_calllock_pane

0x975b,	// (0x00095979) call6_btn_grp_pane_ParamLimits

0x975b,	// (0x00095979) call6_btn_grp_pane

0x9775,	// (0x00095993) call6_pane_g1_ParamLimits

0x9775,	// (0x00095993) call6_pane_g1

0x978a,	// (0x000959a8) popup_call6_1st_window_ParamLimits

0x978a,	// (0x000959a8) popup_call6_1st_window

0x979b,	// (0x000959b9) popup_call6_2nd_window_ParamLimits

0x979b,	// (0x000959b9) popup_call6_2nd_window

0x97ac,	// (0x000959ca) cell_call6_btn_pane_ParamLimits

0x97ac,	// (0x000959ca) cell_call6_btn_pane

0xecb2,	// (0x0009aed0) bg_popup_call2_in_pane_cp03

0xd3df,	// (0x000995fd) popup_call6_1st_window_g1

0xd3e7,	// (0x00099605) popup_call6_1st_window_g2

0xd3ef,	// (0x0009960d) popup_call6_1st_window_g3

0x0002,

0xfe38,	// (0x0009c056) popup_call6_1st_window_g

0xd3f7,	// (0x00099615) popup_call6_1st_window_t1

0xd406,	// (0x00099624) popup_call6_1st_window_t2

0xd416,	// (0x00099634) popup_call6_1st_window_t3

0x0002,

0xfe3f,	// (0x0009c05d) popup_call6_1st_window_t

0xecb2,	// (0x0009aed0) bg_popup_call2_in_pane_cp04

0xd3df,	// (0x000995fd) popup_call6_2nd_window_g1

0xd3e7,	// (0x00099605) popup_call6_2nd_window_g2

0xd3ef,	// (0x0009960d) popup_call6_2nd_window_g3

0x0002,

0xfe38,	// (0x0009c056) popup_call6_2nd_window_g

0xd3f7,	// (0x00099615) popup_call6_2nd_window_t1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp15

0xd426,	// (0x00099644) cell_call6_btn_pane_g1

0xd42f,	// (0x0009964d) cell_call6_btn_pane_t1

0x97c0,	// (0x000959de) listscroll_wgtman_pane_ParamLimits

0x97c0,	// (0x000959de) listscroll_wgtman_pane

0x97e3,	// (0x00095a01) wgtman_btn_pane_ParamLimits

0x97e3,	// (0x00095a01) wgtman_btn_pane

0xeb69,	// (0x0009ad87) aid_scroll_copy1

0xd43e,	// (0x0009965c) list_wgtman_pane

0x9826,	// (0x00095a44) wgtman_btn_pane_g1_ParamLimits

0x9826,	// (0x00095a44) wgtman_btn_pane_g1

0x9852,	// (0x00095a70) wgtman_btn_pane_t1_ParamLimits

0x9852,	// (0x00095a70) wgtman_btn_pane_t1

0xd448,	// (0x00099666) wgtman_btn_pane_t2_ParamLimits

0xd448,	// (0x00099666) wgtman_btn_pane_t2

0x0001,

0xfe46,	// (0x0009c064) wgtman_btn_pane_t_ParamLimits

0xfe46,	// (0x0009c064) wgtman_btn_pane_t

0x988f,	// (0x00095aad) listrow_wgtman_pane_ParamLimits

0x988f,	// (0x00095aad) listrow_wgtman_pane

0x98a1,	// (0x00095abf) listrow_wgtman_pane_g1

0x98aa,	// (0x00095ac8) listrow_wgtman_pane_g2

0x0001,

0xfe4b,	// (0x0009c069) listrow_wgtman_pane_g

0x98b4,	// (0x00095ad2) listrow_wgtman_pane_t1

0x98c2,	// (0x00095ae0) listrow_wgtman_pane_t2

0x0001,

0xfe50,	// (0x0009c06e) listrow_wgtman_pane_t

0x98d0,	// (0x00095aee) wait_bar_pane_cp09

0xd45f,	// (0x0009967d) main_calllock_btn_pane

0xd469,	// (0x00099687) main_calllock_pane_g1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp17

0xd475,	// (0x00099693) main_calllock_btn_pane_g1

0xd47e,	// (0x0009969c) main_calllock_btn_pane_t1

0x0dba,	// (0x0008cfd8) main_dialer3_pane

0x0dba,	// (0x0008cfd8) main_fmrd2_pane

0xabd1,	// (0x00096def) main_fs_bigclock_unlock_btn_pane_g1

0xd495,	// (0x000996b3) main_fs_bigclock_unlock_btn_pane_t1

0x98d8,	// (0x00095af6) area_fmrd2_info_pane_ParamLimits

0x98d8,	// (0x00095af6) area_fmrd2_info_pane

0x98e9,	// (0x00095b07) area_fmrd2_visual_pane_ParamLimits

0x98e9,	// (0x00095b07) area_fmrd2_visual_pane

0x98f7,	// (0x00095b15) fmrd2_indi_pane_ParamLimits

0x98f7,	// (0x00095b15) fmrd2_indi_pane

0x9904,	// (0x00095b22) area_fmrd2_visual_pane_g1

0x990c,	// (0x00095b2a) area_fmrd2_visual_pane_t1

0x991c,	// (0x00095b3a) area_fmrd2_visual_pane_t2

0x992c,	// (0x00095b4a) area_fmrd2_visual_pane_t3

0x0002,

0xfe5a,	// (0x0009c078) area_fmrd2_visual_pane_t

0x993c,	// (0x00095b5a) area_fmrd2_info_pane_g1

0x9944,	// (0x00095b62) area_fmrd2_info_pane_t1

0x9954,	// (0x00095b72) area_fmrd2_info_pane_t2

0x9964,	// (0x00095b82) area_fmrd2_info_pane_t3

0x9974,	// (0x00095b92) area_fmrd2_info_pane_t4

0x0003,

0xfe61,	// (0x0009c07f) area_fmrd2_info_pane_t

0x9982,	// (0x00095ba0) fmrd2_indi_pane_t1

0x9992,	// (0x00095bb0) fmrd2_indi_pane_t2

0x99a2,	// (0x00095bc0) fmrd2_indi_pane_t3

0x0002,

0xfe6a,	// (0x0009c088) fmrd2_indi_pane_t

0xc672,	// (0x00098890) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xc672,	// (0x00098890) list_single_fs_bigclock_indicator_pane_g5

0xc716,	// (0x00098934) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xc716,	// (0x00098934) list_single_fs_bigclock_indicator_pane_t5

0x9125,	// (0x00095343) aid_cell_bcale_month_pane_ParamLimits

0x9125,	// (0x00095343) aid_cell_bcale_month_pane

0x9137,	// (0x00095355) bcale_month_pane_ParamLimits

0x9137,	// (0x00095355) bcale_month_pane

0x914f,	// (0x0009536d) bcale_preview_pane_ParamLimits

0x914f,	// (0x0009536d) bcale_preview_pane

0xd228,	// (0x00099446) list_single_fs_bigclock_pane_t1_ParamLimits

0xd242,	// (0x00099460) list_single_fs_bigclock_pane_t2_ParamLimits

0xd242,	// (0x00099460) list_single_fs_bigclock_pane_t2

0x0001,

0xfdf1,	// (0x0009c00f) list_single_fs_bigclock_pane_t_ParamLimits

0xfdf1,	// (0x0009c00f) list_single_fs_bigclock_pane_t

0xd48d,	// (0x000996ab) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe55,	// (0x0009c073) main_fs_bigclock_unlock_btn_pane_g

0x99b2,	// (0x00095bd0) aid_dia3_key_size_ParamLimits

0x99b2,	// (0x00095bd0) aid_dia3_key_size

0x99c1,	// (0x00095bdf) aid_dia3_listrow_size_ParamLimits

0x99c1,	// (0x00095bdf) aid_dia3_listrow_size

0x99d6,	// (0x00095bf4) dia3_keypad_fun_pane_ParamLimits

0x99d6,	// (0x00095bf4) dia3_keypad_fun_pane

0x99f2,	// (0x00095c10) dia3_keypad_num_pane_ParamLimits

0x99f2,	// (0x00095c10) dia3_keypad_num_pane

0x9a0d,	// (0x00095c2b) dia3_listscroll_pane_ParamLimits

0x9a0d,	// (0x00095c2b) dia3_listscroll_pane

0x9a20,	// (0x00095c3e) dia3_numentry_pane_ParamLimits

0x9a20,	// (0x00095c3e) dia3_numentry_pane

0xd4a3,	// (0x000996c1) dia3_list_pane

0xd4ae,	// (0x000996cc) scroll_pane_cp12

0x0dba,	// (0x0008cfd8) bg_dia3_numentry_pane

0x9a34,	// (0x00095c52) dia3_numentry_pane_t1

0x9a43,	// (0x00095c61) cell_dia3_key_num_pane

0x9a4b,	// (0x00095c69) cell_dia3_key0_fun_pane_ParamLimits

0x9a4b,	// (0x00095c69) cell_dia3_key0_fun_pane

0x9a5f,	// (0x00095c7d) cell_dia3_key1_fun_pane_ParamLimits

0x9a5f,	// (0x00095c7d) cell_dia3_key1_fun_pane

0x9a77,	// (0x00095c95) dia3_listrow_pane

0xc372,	// (0x00098590) bg_dia3_numentry_pane_g1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp21

0xd4b9,	// (0x000996d7) cell_dia3_key_num_pane_t1

0xd4c7,	// (0x000996e5) cell_dia3_key_num_pane_t2

0xd4d6,	// (0x000996f4) cell_dia3_key_num_pane_t3

0xd4e5,	// (0x00099703) cell_dia3_key_num_pane_t4

0x0003,

0xfe71,	// (0x0009c08f) cell_dia3_key_num_pane_t

0x0dba,	// (0x0008cfd8) bg_button_pane_cp19

0x9a89,	// (0x00095ca7) cell_dia3_key0_fun_pane_g1

0x0dba,	// (0x0008cfd8) bg_button_pane_cp20

0x9a91,	// (0x00095caf) cell_dia3_key1_fun_pane_g1

0x9a99,	// (0x00095cb7) area_left_week_number_pane

0x9aa2,	// (0x00095cc0) area_top_day_name_pane

0x9aab,	// (0x00095cc9) frame_month_view_pane

0x9ab3,	// (0x00095cd1) grid_month_view_pane

0x9abd,	// (0x00095cdb) cell_top_day_name_pane_ParamLimits

0x9abd,	// (0x00095cdb) cell_top_day_name_pane

0x9ad3,	// (0x00095cf1) cell_area_left_week_number_pane_ParamLimits

0x9ad3,	// (0x00095cf1) cell_area_left_week_number_pane

0x9ae7,	// (0x00095d05) cell_month_view_pane_ParamLimits

0x9ae7,	// (0x00095d05) cell_month_view_pane

0xd4f4,	// (0x00099712) frm_month_g1

0x9b02,	// (0x00095d20) frm_month_g2

0x9b0a,	// (0x00095d28) frm_month_g3

0x9b12,	// (0x00095d30) frm_month_g4

0x9b1a,	// (0x00095d38) frm_month_g5

0x9b22,	// (0x00095d40) frm_month_g6

0x9b2a,	// (0x00095d48) frm_month_g7

0xd4fd,	// (0x0009971b) frm_month_g8

0x9b32,	// (0x00095d50) frm_month_g9

0x9b3b,	// (0x00095d59) frm_month_g10

0x9b44,	// (0x00095d62) frm_month_g11

0x9b4d,	// (0x00095d6b) frm_month_g12

0x9b56,	// (0x00095d74) frm_month_g13

0x9b5f,	// (0x00095d7d) frm_month_g14

0x9b68,	// (0x00095d86) frm_month_g15

0x9b71,	// (0x00095d8f) frm_month_g16

0x000f,

0xfe7a,	// (0x0009c098) frm_month_g

0x9b7a,	// (0x00095d98) cell_top_day_name_pane_t1

0x9b89,	// (0x00095da7) cell_area_left_week_number_pane_g1

0x9b7a,	// (0x00095d98) cell_area_left_week_number_pane_t1

0xabd1,	// (0x00096def) cell_month_view_pane_g1

0x9b91,	// (0x00095daf) cell_month_view_pane_t1

0x0dba,	// (0x0008cfd8) main_fps_pane

0xc947,	// (0x00098b65) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xc947,	// (0x00098b65) cmail_ddmenu_btn02_pane_cp1

0xc963,	// (0x00098b81) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xc963,	// (0x00098b81) cmail_ddmenu_btn02_pane_cp2

0x93f6,	// (0x00095614) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x93f6,	// (0x00095614) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfda2,	// (0x0009bfc0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfda2,	// (0x0009bfc0) cmail_ddmenu_btn02_pane_g

0x9414,	// (0x00095632) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9414,	// (0x00095632) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfda7,	// (0x0009bfc5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfda7,	// (0x0009bfc5) cmail_ddmenu_btn02_pane_t

0x9ba0,	// (0x00095dbe) fps_text_pane_ParamLimits

0x9ba0,	// (0x00095dbe) fps_text_pane

0x9bb7,	// (0x00095dd5) main_fps_pane_g1_ParamLimits

0x9bb7,	// (0x00095dd5) main_fps_pane_g1

0x9bd1,	// (0x00095def) wait_bar_pane_cp010_ParamLimits

0x9bd1,	// (0x00095def) wait_bar_pane_cp010

0x9be2,	// (0x00095e00) fps_text_pane_t1_ParamLimits

0x9be2,	// (0x00095e00) fps_text_pane_t1

0xb61a,	// (0x00097838) cam4_image_uncrop_pane_g1

0xb623,	// (0x00097841) cam4_image_uncrop_pane_g2

0x6a40,	// (0x00092c5e) cam4_image_uncrop_pane_g3

0x6a49,	// (0x00092c67) cam4_image_uncrop_pane_g4

0x0003,

0xf87c,	// (0x0009ba9a) cam4_image_uncrop_pane_g

0x9a77,	// (0x00095c95) dia3_listrow_pane_ParamLimits

0x0dba,	// (0x0008cfd8) main_phob2_pane

0x8f5e,	// (0x0009517c) cell_tport_appsw_pane_cp02_ParamLimits

0x8f5e,	// (0x0009517c) cell_tport_appsw_pane_cp02

0x8f72,	// (0x00095190) cell_tport_appsw_pane_cp03_ParamLimits

0x8f72,	// (0x00095190) cell_tport_appsw_pane_cp03

0x0dba,	// (0x0008cfd8) phob2_contact_card_pane

0x0dba,	// (0x0008cfd8) phob2_listscroll_pane

0xd506,	// (0x00099724) phob2_list_pane

0xd50e,	// (0x0009972c) scroll_pane_cp034

0x9bfa,	// (0x00095e18) phob2_cc_data_pane_ParamLimits

0x9bfa,	// (0x00095e18) phob2_cc_data_pane

0x9c19,	// (0x00095e37) phob2_cc_listscroll_pane_ParamLimits

0x9c19,	// (0x00095e37) phob2_cc_listscroll_pane

0x9c37,	// (0x00095e55) list_double_large_graphic_phob2_pane_ParamLimits

0x9c37,	// (0x00095e55) list_double_large_graphic_phob2_pane

0xd516,	// (0x00099734) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xd516,	// (0x00099734) list_double_large_graphic_phob2_pane_g1

0xd523,	// (0x00099741) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xd523,	// (0x00099741) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe9b,	// (0x0009c0b9) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe9b,	// (0x0009c0b9) list_double_large_graphic_phob2_pane_g

0xd52f,	// (0x0009974d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xd52f,	// (0x0009974d) list_double_large_graphic_phob2_pane_t1

0xd544,	// (0x00099762) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xd544,	// (0x00099762) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfea0,	// (0x0009c0be) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfea0,	// (0x0009c0be) list_double_large_graphic_phob2_pane_t

0x0dba,	// (0x0008cfd8) list_highlight_pane_cp024

0xd556,	// (0x00099774) phob2_cc_button_pane

0x9c49,	// (0x00095e67) phob2_cc_data_pane_g1_ParamLimits

0x9c49,	// (0x00095e67) phob2_cc_data_pane_g1

0x9c5e,	// (0x00095e7c) phob2_cc_data_pane_g2_ParamLimits

0x9c5e,	// (0x00095e7c) phob2_cc_data_pane_g2

0x0001,

0xfea5,	// (0x0009c0c3) phob2_cc_data_pane_g_ParamLimits

0xfea5,	// (0x0009c0c3) phob2_cc_data_pane_g

0x9c70,	// (0x00095e8e) phob2_cc_data_pane_t1_ParamLimits

0x9c70,	// (0x00095e8e) phob2_cc_data_pane_t1

0x9c88,	// (0x00095ea6) phob2_cc_data_pane_t2_ParamLimits

0x9c88,	// (0x00095ea6) phob2_cc_data_pane_t2

0x9ca0,	// (0x00095ebe) phob2_cc_data_pane_t3_ParamLimits

0x9ca0,	// (0x00095ebe) phob2_cc_data_pane_t3

0x0002,

0xfeaa,	// (0x0009c0c8) phob2_cc_data_pane_t_ParamLimits

0xfeaa,	// (0x0009c0c8) phob2_cc_data_pane_t

0xd55e,	// (0x0009977c) phob2_cc_list_pane_ParamLimits

0xd55e,	// (0x0009977c) phob2_cc_list_pane

0xb9ea,	// (0x00097c08) scroll_pane_cp035_ParamLimits

0xb9ea,	// (0x00097c08) scroll_pane_cp035

0xf009,	// (0x0009b227) bg_button_pane_cp033

0xd56a,	// (0x00099788) phob2_cc_button_pane_g1

0xd576,	// (0x00099794) phob2_cc_button_pane_t1

0xd58b,	// (0x000997a9) phob2_cc_button_pane_t2

0x0001,

0xfeb1,	// (0x0009c0cf) phob2_cc_button_pane_t

0x9cb8,	// (0x00095ed6) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9cb8,	// (0x00095ed6) list_double_large_graphic_phob2_cc_pane

0x9cca,	// (0x00095ee8) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9cca,	// (0x00095ee8) list_double_large_graphic_phob2_cc_pane_g1

0x9cd6,	// (0x00095ef4) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9cd6,	// (0x00095ef4) list_double_large_graphic_phob2_cc_pane_g2

0x9ce2,	// (0x00095f00) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9ce2,	// (0x00095f00) list_double_large_graphic_phob2_cc_pane_g3

0x9cee,	// (0x00095f0c) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9cee,	// (0x00095f0c) list_double_large_graphic_phob2_cc_pane_g4

0x9cfa,	// (0x00095f18) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9cfa,	// (0x00095f18) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfeb6,	// (0x0009c0d4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfeb6,	// (0x0009c0d4) list_double_large_graphic_phob2_cc_pane_g

0x9d06,	// (0x00095f24) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9d06,	// (0x00095f24) list_double_large_graphic_phob2_cc_pane_t1

0x9d2f,	// (0x00095f4d) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9d2f,	// (0x00095f4d) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfec1,	// (0x0009c0df) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfec1,	// (0x0009c0df) list_double_large_graphic_phob2_cc_pane_t

0xd59d,	// (0x000997bb) list_highlight_pane_cp025_ParamLimits

0xd59d,	// (0x000997bb) list_highlight_pane_cp025

0xf009,	// (0x0009b227) bg_button_pane_cp033_ParamLimits

0xd56a,	// (0x00099788) phob2_cc_button_pane_g1_ParamLimits

0xd576,	// (0x00099794) phob2_cc_button_pane_t1_ParamLimits

0xd58b,	// (0x000997a9) phob2_cc_button_pane_t2_ParamLimits

0xfeb1,	// (0x0009c0cf) phob2_cc_button_pane_t_ParamLimits

0x1016,	// (0x0008d234) popup_wgtman_window

0xb7e3,	// (0x00097a01) scroll_pane_cp038

0x9808,	// (0x00095a26) wgtman_btn_pane_cp_01_ParamLimits

0x9808,	// (0x00095a26) wgtman_btn_pane_cp_01

0xd5ab,	// (0x000997c9) wgtman_content_pane

0xd5b4,	// (0x000997d2) wgtman_heading_pane

0x0dba,	// (0x0008cfd8) bg_heading_pane_cp02

0xd5bd,	// (0x000997db) wgtman_heading_pane_g1

0xd5c5,	// (0x000997e3) wgtman_heading_pane_t1

0xd5d3,	// (0x000997f1) scroll_pane_cp036

0xd5db,	// (0x000997f9) wgtman_list_pane

0xd5e3,	// (0x00099801) wgtman_list_pane_t1_ParamLimits

0xd5e3,	// (0x00099801) wgtman_list_pane_t1

0xd8aa,	// (0x00099ac8) cam4_grid_pane

0x76ee,	// (0x0009390c) bg_button_pane_cp015_ParamLimits

0x7700,	// (0x0009391e) bg_button_pane_cp016_ParamLimits

0x7713,	// (0x00093931) bg_button_pane_cp017_ParamLimits

0x776b,	// (0x00093989) popup_vitu2_query_window_g3_ParamLimits

0x776b,	// (0x00093989) popup_vitu2_query_window_g3

0x7828,	// (0x00093a46) popup_vitu2_query_window_t6_ParamLimits

0x7828,	// (0x00093a46) popup_vitu2_query_window_t6

0x7853,	// (0x00093a71) popup_vitu2_query_window_t7_ParamLimits

0x7853,	// (0x00093a71) popup_vitu2_query_window_t7

0xb61a,	// (0x00097838) cam4_grid_pane_g1

0xb623,	// (0x00097841) cam4_grid_pane_g2

0xd5fd,	// (0x0009981b) cam4_grid_pane_g3

0xd606,	// (0x00099824) cam4_grid_pane_g4

0x0003,

0xfec6,	// (0x0009c0e4) cam4_grid_pane_g

0x1e03,	// (0x0008e021) aid_placing_vt_slider_lsc_ParamLimits

0x210e,	// (0x0008e32c) vidtel_button_pane_ParamLimits

0x210e,	// (0x0008e32c) vidtel_button_pane

0x0dba,	// (0x0008cfd8) bg_button_pane_cp034

0x9d58,	// (0x00095f76) vidtel_button_pane_g1

0xd611,	// (0x0009982f) vidtel_button_pane_t1

0xb909,	// (0x00097b27) aid_size_vtel_slider_touch

0xb9ea,	// (0x00097c08) scroll_pane_cp039

0xc3b0,	// (0x000985ce) ncim_query_button_pane_cp01_ParamLimits

0xc3cf,	// (0x000985ed) ncimui_query_pane_g1_ParamLimits

0xf009,	// (0x0009b227) input_focus_pane_cp012_ParamLimits

0xc3f4,	// (0x00098612) ncim_query_entry_pane_t1_ParamLimits

0xb9ea,	// (0x00097c08) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_phl_apps_qhd_lsc_tch_Large

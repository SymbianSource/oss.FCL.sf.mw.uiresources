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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x0009511e };

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
0x0ec8,	// (0x00095fe6) Screen

0x0ed4,	// (0x00095ff2) application_window

0x0f30,	// (0x0009604e) area_bottom_pane_ParamLimits

0x0f30,	// (0x0009604e) area_bottom_pane

0x0f89,	// (0x000960a7) area_top_pane_ParamLimits

0x0f89,	// (0x000960a7) area_top_pane

0x0fed,	// (0x0009610b) call_video_uplink_pane_ParamLimits

0x0fed,	// (0x0009610b) call_video_uplink_pane

0x102c,	// (0x0009614a) main_pane_ParamLimits

0x102c,	// (0x0009614a) main_pane

0xbaf0,	// (0x000a0c0e) context_pane

0x467a,	// (0x00099798) navi_pane

0x46a0,	// (0x000997be) popup_cale_events_window_ParamLimits

0x46a0,	// (0x000997be) popup_cale_events_window

0xbb03,	// (0x000a0c21) popup_mup_playback_window

0x46b8,	// (0x000997d6) signal_pane

0xeea8,	// (0x000a3fc6) main_browser_pane

0xa6de,	// (0x0009f7fc) main_burst_pane

0x44f8,	// (0x00099616) main_calc_pane

0xbad6,	// (0x000a0bf4) main_cale_day_pane

0x178f,	// (0x000968ad) main_cale_month_pane

0xbad6,	// (0x000a0bf4) main_cale_week_pane

0xa6de,	// (0x0009f7fc) main_call_pane

0xeb88,	// (0x000a3ca6) main_call_poc_pane

0xa6de,	// (0x0009f7fc) main_camera_pane

0xa6de,	// (0x0009f7fc) main_chi_dic_pane

0xa45b,	// (0x0009f579) main_clock_pane

0xeb88,	// (0x000a3ca6) main_fmradio_pane

0xa6de,	// (0x0009f7fc) main_graph_messa_pane

0xeb88,	// (0x000a3ca6) main_help_pane

0xeea8,	// (0x000a3fc6) main_im_pane

0xede3,	// (0x000a3f01) main_image_pane_ParamLimits

0xede3,	// (0x000a3f01) main_image_pane

0xeb88,	// (0x000a3ca6) main_location2_pane

0xa6de,	// (0x0009f7fc) main_location_pane

0xede3,	// (0x000a3f01) main_messa_pane

0xeb88,	// (0x000a3ca6) main_mp2_pane

0xa6de,	// (0x0009f7fc) main_mp_pane

0xeb88,	// (0x000a3ca6) main_msg_pane

0xeb88,	// (0x000a3ca6) main_mup_eq_pane

0xeb88,	// (0x000a3ca6) main_mup_pane

0xeea8,	// (0x000a3fc6) main_notes_pane

0xeb88,	// (0x000a3ca6) main_pec_pane

0xeb88,	// (0x000a3ca6) main_phob_pane

0xeb88,	// (0x000a3ca6) main_pinb_pane

0xeb88,	// (0x000a3ca6) main_postcard_pane

0xeb88,	// (0x000a3ca6) main_qdial_pane

0xa6de,	// (0x0009f7fc) main_skin_pane

0xeb88,	// (0x000a3ca6) main_smil2_pane

0xa6de,	// (0x0009f7fc) main_smil_pane

0xa6de,	// (0x0009f7fc) main_video_pane

0xa6de,	// (0x0009f7fc) main_video_tele_pane

0xede3,	// (0x000a3f01) main_viewer_pane_ParamLimits

0xede3,	// (0x000a3f01) main_viewer_pane

0xa6de,	// (0x0009f7fc) main_vorec_pane

0x4544,	// (0x00099662) popup_blid_sat_info_window_ParamLimits

0x4544,	// (0x00099662) popup_blid_sat_info_window

0x4564,	// (0x00099682) popup_dyc_status_message_window_ParamLimits

0x4564,	// (0x00099682) popup_dyc_status_message_window

0x4574,	// (0x00099692) popup_grid_large_graphic_window_ParamLimits

0x4574,	// (0x00099692) popup_grid_large_graphic_window

0x4605,	// (0x00099723) popup_loc_request_window_ParamLimits

0x4605,	// (0x00099723) popup_loc_request_window

0x4652,	// (0x00099770) popup_wml_address_window_ParamLimits

0x4652,	// (0x00099770) popup_wml_address_window

0x43d0,	// (0x000994ee) call_muted_g1

0x4092,	// (0x000991b0) popup_call_audio_conf_window_ParamLimits

0x4092,	// (0x000991b0) popup_call_audio_conf_window

0x43e0,	// (0x000994fe) popup_call_audio_first_window_ParamLimits

0x43e0,	// (0x000994fe) popup_call_audio_first_window

0x4420,	// (0x0009953e) popup_call_audio_in_window_ParamLimits

0x4420,	// (0x0009953e) popup_call_audio_in_window

0x4444,	// (0x00099562) popup_call_audio_out_window_ParamLimits

0x4444,	// (0x00099562) popup_call_audio_out_window

0x4466,	// (0x00099584) popup_call_audio_second_window_ParamLimits

0x4466,	// (0x00099584) popup_call_audio_second_window

0x4496,	// (0x000995b4) popup_call_audio_wait_window_ParamLimits

0x4496,	// (0x000995b4) popup_call_audio_wait_window

0x44b7,	// (0x000995d5) popup_number_entry_window_ParamLimits

0x44b7,	// (0x000995d5) popup_number_entry_window

0xe734,	// (0x000a3852) bg_popup_call_pane_cp05_ParamLimits

0xe734,	// (0x000a3852) bg_popup_call_pane_cp05

0xe754,	// (0x000a3872) popup_number_entry_window_t1

0xe767,	// (0x000a3885) popup_number_entry_window_t2

0xe779,	// (0x000a3897) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x000a41e4) popup_number_entry_window_t

0xe78b,	// (0x000a38a9) text_title_cp2

0xe79e,	// (0x000a38bc) bg_popup_call_pane_cp_ParamLimits

0xe79e,	// (0x000a38bc) bg_popup_call_pane_cp

0xe7ac,	// (0x000a38ca) call_thumbnail_pane

0xe7b4,	// (0x000a38d2) popup_call_audio_in_window_g1_ParamLimits

0xe7b4,	// (0x000a38d2) popup_call_audio_in_window_g1

0xe7c0,	// (0x000a38de) popup_call_audio_in_window_g2_ParamLimits

0xe7c0,	// (0x000a38de) popup_call_audio_in_window_g2

0xe7cc,	// (0x000a38ea) popup_call_audio_in_window_g3_ParamLimits

0xe7cc,	// (0x000a38ea) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x000a41ed) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x000a41ed) popup_call_audio_in_window_g

0xe7d8,	// (0x000a38f6) popup_call_audio_in_window_t1_ParamLimits

0xe7d8,	// (0x000a38f6) popup_call_audio_in_window_t1

0xe7f4,	// (0x000a3912) popup_call_audio_in_window_t2_ParamLimits

0xe7f4,	// (0x000a3912) popup_call_audio_in_window_t2

0xe810,	// (0x000a392e) popup_call_audio_in_window_t3_ParamLimits

0xe810,	// (0x000a392e) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x000a41f4) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x000a41f4) popup_call_audio_in_window_t

0xe79e,	// (0x000a38bc) bg_popup_call_pane_cp01_ParamLimits

0xe79e,	// (0x000a38bc) bg_popup_call_pane_cp01

0xe7ac,	// (0x000a38ca) call_thumbnail_pane_cp02

0xe823,	// (0x000a3941) call_type_pane_cp022

0xe82b,	// (0x000a3949) popup_call_audio_out_window_g1_ParamLimits

0xe82b,	// (0x000a3949) popup_call_audio_out_window_g1

0xe83d,	// (0x000a395b) popup_call_audio_out_window_g2_ParamLimits

0xe83d,	// (0x000a395b) popup_call_audio_out_window_g2

0xe849,	// (0x000a3967) popup_call_audio_out_window_g3_ParamLimits

0xe849,	// (0x000a3967) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x000a41fb) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x000a41fb) popup_call_audio_out_window_g

0xe85b,	// (0x000a3979) popup_call_audio_out_window_t1_ParamLimits

0xe85b,	// (0x000a3979) popup_call_audio_out_window_t1

0xe8b4,	// (0x000a39d2) popup_call_audio_out_window_t2_ParamLimits

0xe8b4,	// (0x000a39d2) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x000a4202) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x000a4202) popup_call_audio_out_window_t

0xe8c9,	// (0x000a39e7) bg_popup_call_pane_ParamLimits

0xe8c9,	// (0x000a39e7) bg_popup_call_pane

0x1245,	// (0x00096363) call_thumbnail_pane_cp_ParamLimits

0x1245,	// (0x00096363) call_thumbnail_pane_cp

0xe94d,	// (0x000a3a6b) call_type_pane_cp01_ParamLimits

0xe94d,	// (0x000a3a6b) call_type_pane_cp01

0xe991,	// (0x000a3aaf) popup_call_audio_first_window_g1_ParamLimits

0xe991,	// (0x000a3aaf) popup_call_audio_first_window_g1

0xe9dd,	// (0x000a3afb) popup_call_audio_first_window_g2_ParamLimits

0xe9dd,	// (0x000a3afb) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x000a4207) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x000a4207) popup_call_audio_first_window_g

0xea21,	// (0x000a3b3f) popup_call_audio_first_window_t1_ParamLimits

0xea21,	// (0x000a3b3f) popup_call_audio_first_window_t1

0xeacd,	// (0x000a3beb) popup_call_audio_first_window_t4_ParamLimits

0xeacd,	// (0x000a3beb) popup_call_audio_first_window_t4

0xeb59,	// (0x000a3c77) popup_call_audio_first_window_t5_ParamLimits

0xeb59,	// (0x000a3c77) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x000a420c) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x000a420c) popup_call_audio_first_window_t

0xeb88,	// (0x000a3ca6) bg_popup_call_pane_cp02

0xeb92,	// (0x000a3cb0) call_type_pane_cp023

0xeb9a,	// (0x000a3cb8) popup_call_audio_wait_window_g1

0xeba2,	// (0x000a3cc0) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a4213) popup_call_audio_wait_window_g

0xebaa,	// (0x000a3cc8) popup_call_audio_wait_window_t3

0xebb8,	// (0x000a3cd6) bg_popup_call_pane_cp03_ParamLimits

0xebb8,	// (0x000a3cd6) bg_popup_call_pane_cp03

0xec18,	// (0x000a3d36) call_thumbnail_pane_cp011_ParamLimits

0xec18,	// (0x000a3d36) call_thumbnail_pane_cp011

0xec24,	// (0x000a3d42) call_type_pane_cp034_ParamLimits

0xec24,	// (0x000a3d42) call_type_pane_cp034

0xec60,	// (0x000a3d7e) popup_call_audio_second_window_g1_ParamLimits

0xec60,	// (0x000a3d7e) popup_call_audio_second_window_g1

0xec9c,	// (0x000a3dba) popup_call_audio_second_window_g2_ParamLimits

0xec9c,	// (0x000a3dba) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x000a4218) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x000a4218) popup_call_audio_second_window_g

0xecd8,	// (0x000a3df6) popup_call_audio_second_window_t1_ParamLimits

0xecd8,	// (0x000a3df6) popup_call_audio_second_window_t1

0xed59,	// (0x000a3e77) popup_call_audio_second_window_t2_ParamLimits

0xed59,	// (0x000a3e77) popup_call_audio_second_window_t2

0xed8f,	// (0x000a3ead) popup_call_audio_second_window_t3_ParamLimits

0xed8f,	// (0x000a3ead) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x000a421d) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x000a421d) popup_call_audio_second_window_t

0xeb88,	// (0x000a3ca6) bg_popup_call_pane_cp04

0xedc5,	// (0x000a3ee3) list_conf_pane

0xedcd,	// (0x000a3eeb) popup_call_audio_conf_window_t1

0xeddb,	// (0x000a3ef9) call_thumbnail_pane_g1

0xede3,	// (0x000a3f01) bg_pinb_pane_ParamLimits

0xede3,	// (0x000a3f01) bg_pinb_pane

0xedf1,	// (0x000a3f0f) find_pinb_pane

0xedfa,	// (0x000a3f18) listscroll_pinb_pane_ParamLimits

0xedfa,	// (0x000a3f18) listscroll_pinb_pane

0xee09,	// (0x000a3f27) pinb_bg_pane_g1

0x1269,	// (0x00096387) pinb_bg_pane_g2

0x1275,	// (0x00096393) pinb_bg_pane_g3

0x1281,	// (0x0009639f) pinb_bg_pane_g4

0x128d,	// (0x000963ab) pinb_bg_pane_g5

0x1299,	// (0x000963b7) pinb_bg_pane_g6

0x12a4,	// (0x000963c2) pinb_bg_pane_g7

0x12af,	// (0x000963cd) pinb_bg_pane_g8

0x12ba,	// (0x000963d8) pinb_bg_pane_g9

0x12c4,	// (0x000963e2) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x000a4224) pinb_bg_pane_g

0x12e1,	// (0x000963ff) grid_pinb_pane

0x12ec,	// (0x0009640a) list_pinb_pane

0x12f7,	// (0x00096415) scroll_pane_cp01_ParamLimits

0x12f7,	// (0x00096415) scroll_pane_cp01

0xee13,	// (0x000a3f31) find_pinb_pane_g1_ParamLimits

0xee13,	// (0x000a3f31) find_pinb_pane_g1

0xee2b,	// (0x000a3f49) find_pinb_pane_t1

0xee3d,	// (0x000a3f5b) find_pinb_pane_t2

0x0001,

0xf120,	// (0x000a423e) find_pinb_pane_t

0xee52,	// (0x000a3f70) input_focus_pane_cp01_ParamLimits

0xee52,	// (0x000a3f70) input_focus_pane_cp01

0x1309,	// (0x00096427) cell_pinb_pane_ParamLimits

0x1309,	// (0x00096427) cell_pinb_pane

0x1331,	// (0x0009644f) cell_pinb_pane_g1_ParamLimits

0x1331,	// (0x0009644f) cell_pinb_pane_g1

0x1346,	// (0x00096464) cell_pinb_pane_g2_ParamLimits

0x1346,	// (0x00096464) cell_pinb_pane_g2

0xee5e,	// (0x000a3f7c) cell_pinb_pane_g3_ParamLimits

0xee5e,	// (0x000a3f7c) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x000a4243) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x000a4243) cell_pinb_pane_g

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp01

0x1352,	// (0x00096470) list_pinb_item_pane_ParamLimits

0x1352,	// (0x00096470) list_pinb_item_pane

0xeb88,	// (0x000a3ca6) list_highlight_pane_cp02

0x1378,	// (0x00096496) list_pinb_item_pane_g1_ParamLimits

0x1378,	// (0x00096496) list_pinb_item_pane_g1

0x1385,	// (0x000964a3) list_pinb_item_pane_g2_ParamLimits

0x1385,	// (0x000964a3) list_pinb_item_pane_g2

0x1391,	// (0x000964af) list_pinb_item_pane_g3_ParamLimits

0x1391,	// (0x000964af) list_pinb_item_pane_g3

0x13a2,	// (0x000964c0) list_pinb_item_pane_g4_ParamLimits

0x13a2,	// (0x000964c0) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x000a424a) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x000a424a) list_pinb_item_pane_g

0x13ae,	// (0x000964cc) list_pinb_item_pane_t1_ParamLimits

0x13ae,	// (0x000964cc) list_pinb_item_pane_t1

0x13df,	// (0x000964fd) calc_display_pane

0x13fd,	// (0x0009651b) calc_paper_pane

0x1419,	// (0x00096537) grid_calc_pane

0xeb88,	// (0x000a3ca6) bg_list_pane_cp01

0x1445,	// (0x00096563) clock_g1

0x144d,	// (0x0009656b) clock_g2

0x0001,

0xf135,	// (0x000a4253) clock_g

0x1457,	// (0x00096575) clock_t1_ParamLimits

0x1457,	// (0x00096575) clock_t1

0x146c,	// (0x0009658a) clock_t2_ParamLimits

0x146c,	// (0x0009658a) clock_t2

0x147e,	// (0x0009659c) clock_t3_ParamLimits

0x147e,	// (0x0009659c) clock_t3

0x1490,	// (0x000965ae) clock_t4_ParamLimits

0x1490,	// (0x000965ae) clock_t4

0x14a2,	// (0x000965c0) clock_t5_ParamLimits

0x14a2,	// (0x000965c0) clock_t5

0x14b7,	// (0x000965d5) clock_t6_ParamLimits

0x14b7,	// (0x000965d5) clock_t6

0x14c9,	// (0x000965e7) clock_t7_ParamLimits

0x14c9,	// (0x000965e7) clock_t7

0x14db,	// (0x000965f9) clock_t8_ParamLimits

0x14db,	// (0x000965f9) clock_t8

0x14f1,	// (0x0009660f) clock_t9_ParamLimits

0x14f1,	// (0x0009660f) clock_t9

0x0008,

0xf13a,	// (0x000a4258) clock_t_ParamLimits

0xf13a,	// (0x000a4258) clock_t

0xee6a,	// (0x000a3f88) popup_clock_analogue_window_cp02

0xee6a,	// (0x000a3f88) popup_clock_digital_window_cp01

0xee72,	// (0x000a3f90) listscroll_help_pane

0xeb88,	// (0x000a3ca6) phob_pre_status_pane

0xee7c,	// (0x000a3f9a) grid_qdial_pane

0xede3,	// (0x000a3f01) listscroll_mce_pane

0xede3,	// (0x000a3f01) bg_notes_pane

0xee86,	// (0x000a3fa4) list_notes_pane

0x1507,	// (0x00096625) scroll_pane_cp06

0xee94,	// (0x000a3fb2) bg_calc_paper_pane

0x1516,	// (0x00096634) list_calc_pane

0xeea8,	// (0x000a3fc6) bg_calc_display_pane

0x1530,	// (0x0009664e) calc_display_pane_t1

0x1545,	// (0x00096663) calc_display_pane_t2

0x155a,	// (0x00096678) calc_display_pane_t3

0x0002,

0xf14d,	// (0x000a426b) calc_display_pane_t

0x156c,	// (0x0009668a) cell_calc_pane_ParamLimits

0x156c,	// (0x0009668a) cell_calc_pane

0xeeb4,	// (0x000a3fd2) bg_calc_paper_pane_g1

0xeec0,	// (0x000a3fde) bg_calc_paper_pane_g2

0xeecc,	// (0x000a3fea) bg_calc_paper_pane_g3

0xeed8,	// (0x000a3ff6) bg_calc_paper_pane_g4

0xeee4,	// (0x000a4002) bg_calc_paper_pane_g5

0x1599,	// (0x000966b7) bg_calc_paper_pane_g6

0x15aa,	// (0x000966c8) bg_calc_paper_pane_g7

0x15bb,	// (0x000966d9) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x000a4272) bg_calc_paper_pane_g

0x15cc,	// (0x000966ea) calc_bg_paper_pane_g9

0x15dd,	// (0x000966fb) list_calc_item_pane_ParamLimits

0x15dd,	// (0x000966fb) list_calc_item_pane

0xeef0,	// (0x000a400e) list_calc_item_pane_g1

0x160c,	// (0x0009672a) list_calc_item_pane_t1_ParamLimits

0x160c,	// (0x0009672a) list_calc_item_pane_t1

0x161e,	// (0x0009673c) list_calc_item_pane_t2_ParamLimits

0x161e,	// (0x0009673c) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x000a4283) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x000a4283) list_calc_item_pane_t

0xeefd,	// (0x000a401b) cell_calc_pane_g1

0xef07,	// (0x000a4025) grid_highlight_pane_cp02

0x164e,	// (0x0009676c) bg_calc_display_pane_g1

0x1657,	// (0x00096775) bg_calc_display_pane_g2

0xbee6,	// (0x000a1004) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x000a428d) bg_calc_display_pane_g

0x1661,	// (0x0009677f) cell_qdial_pane_ParamLimits

0x1661,	// (0x0009677f) cell_qdial_pane

0x1675,	// (0x00096793) cell_qdial_pane_g1_ParamLimits

0x1675,	// (0x00096793) cell_qdial_pane_g1

0x1682,	// (0x000967a0) cell_qdial_pane_g2_ParamLimits

0x1682,	// (0x000967a0) cell_qdial_pane_g2

0xef29,	// (0x000a4047) cell_qdial_pane_g3_ParamLimits

0xef29,	// (0x000a4047) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x000a4294) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x000a4294) cell_qdial_pane_g

0x16a0,	// (0x000967be) cell_qdial_pane_t1_ParamLimits

0x16a0,	// (0x000967be) cell_qdial_pane_t1

0x16b8,	// (0x000967d6) cell_qdial_pane_t2_ParamLimits

0x16b8,	// (0x000967d6) cell_qdial_pane_t2

0x16cb,	// (0x000967e9) cell_qdial_pane_t3_ParamLimits

0x16cb,	// (0x000967e9) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x000a429d) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x000a429d) cell_qdial_pane_t

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp04

0xef35,	// (0x000a4053) thumbnail_qdial_pane_ParamLimits

0xef35,	// (0x000a4053) thumbnail_qdial_pane

0xef91,	// (0x000a40af) list_help_pane

0xef9a,	// (0x000a40b8) scroll_pane_cp02

0x16de,	// (0x000967fc) help_list_pane_t1_ParamLimits

0x16de,	// (0x000967fc) help_list_pane_t1

0x1711,	// (0x0009682f) bg_notes_pane_g2

0x1719,	// (0x00096837) bg_notes_pane_g3

0x1721,	// (0x0009683f) notes_bg_pane_g1

0x1729,	// (0x00096847) notes_bg_pane_g4

0x1731,	// (0x0009684f) notes_bg_pane_g5

0x1739,	// (0x00096857) notes_bg_pane_g6

0x1741,	// (0x0009685f) notes_bg_pane_g7

0x1749,	// (0x00096867) notes_bg_pane_g8

0x1751,	// (0x0009686f) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x000a42bb) notes_bg_pane_g

0x1759,	// (0x00096877) list_notes_text_pane_ParamLimits

0x1759,	// (0x00096877) list_notes_text_pane

0xefa3,	// (0x000a40c1) list_notes_text_pane_g1

0x1781,	// (0x0009689f) list_notes_text_pane_t1

0x178f,	// (0x000968ad) listscroll_cale_week_pane

0x17b4,	// (0x000968d2) bg_cale_heading_pane

0xefc6,	// (0x000a40e4) bg_cale_pane_cp01

0x17d6,	// (0x000968f4) cale_week_corner_pane

0x17f0,	// (0x0009690e) cale_week_day_heading_pane

0x1812,	// (0x00096930) cale_week_scroll_pane_g1

0x182f,	// (0x0009694d) cale_week_scroll_pane_g2

0x1842,	// (0x00096960) cale_week_scroll_pane_g3

0x1855,	// (0x00096973) cale_week_scroll_pane_g4

0x1868,	// (0x00096986) cale_week_scroll_pane_g5

0x187b,	// (0x00096999) cale_week_scroll_pane_g6

0x188e,	// (0x000969ac) cale_week_scroll_pane_g7

0x18a1,	// (0x000969bf) cale_week_scroll_pane_g8

0x18b6,	// (0x000969d4) cale_week_scroll_pane_g9

0x18c9,	// (0x000969e7) cale_week_scroll_pane_g10

0x18dc,	// (0x000969fa) cale_week_scroll_pane_g11

0x18ef,	// (0x00096a0d) cale_week_scroll_pane_g12

0x1906,	// (0x00096a24) cale_week_scroll_pane_g13

0x1921,	// (0x00096a3f) cale_week_scroll_pane_g14

0x193c,	// (0x00096a5a) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x000a42ca) cale_week_scroll_pane_g

0x196c,	// (0x00096a8a) cale_week_time_pane

0x1981,	// (0x00096a9f) grid_cale_week_pane

0xeff6,	// (0x000a4114) scroll_pane_cp08

0x19a0,	// (0x00096abe) cell_cale_week_pane_ParamLimits

0x19a0,	// (0x00096abe) cell_cale_week_pane

0x1a02,	// (0x00096b20) cale_week_day_heading_pane_t1

0x1a3d,	// (0x00096b5b) cale_week_day_heading_pane_t2

0x1a78,	// (0x00096b96) cale_week_day_heading_pane_t3

0x1ab3,	// (0x00096bd1) cale_week_day_heading_pane_t4

0x1aee,	// (0x00096c0c) cale_week_day_heading_pane_t5

0x1b29,	// (0x00096c47) cale_week_day_heading_pane_t6

0x1b64,	// (0x00096c82) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x000a42eb) cale_week_day_heading_pane_t

0xf013,	// (0x000a4131) bg_cale_side_pane

0x1b9f,	// (0x00096cbd) cale_week_time_pane_t1

0x1bb9,	// (0x00096cd7) cale_week_time_pane_t2

0x1bd3,	// (0x00096cf1) cale_week_time_pane_t3

0x1bed,	// (0x00096d0b) cale_week_time_pane_t4

0x1c07,	// (0x00096d25) cale_week_time_pane_t5

0x1c21,	// (0x00096d3f) cale_week_time_pane_t6

0x1c41,	// (0x00096d5f) cale_week_time_pane_t7

0x1c63,	// (0x00096d81) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x000a42fa) cale_week_time_pane_t

0x1c87,	// (0x00096da5) cell_cale_week_pane_g2

0x1cab,	// (0x00096dc9) cell_cale_week_pane_g3_ParamLimits

0x1cab,	// (0x00096dc9) cell_cale_week_pane_g3

0xf021,	// (0x000a413f) grid_highlight_pane_cp07

0xf029,	// (0x000a4147) listscroll_gms_pane

0xf033,	// (0x000a4151) grid_gms_pane

0xf03c,	// (0x000a415a) listscroll_gms_pane_g1

0xf044,	// (0x000a4162) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x000a430b) listscroll_gms_pane_g

0x1cc3,	// (0x00096de1) scroll_pane_cp010

0x1cce,	// (0x00096dec) cell_gms_pane_ParamLimits

0x1cce,	// (0x00096dec) cell_gms_pane

0x1ce1,	// (0x00096dff) cell_gms_pane_g1

0xf04c,	// (0x000a416a) cell_gms_pane_g2

0xf054,	// (0x000a4172) cell_gms_pane_g3

0xf05d,	// (0x000a417b) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x000a4310) cell_gms_pane_g

0xf066,	// (0x000a4184) grid_highlight_pane_cp09

0x4378,	// (0x00099496) phob_pre_status_pane_g1

0x4380,	// (0x0009949e) phob_pre_status_pane_g2

0x4388,	// (0x000994a6) phob_pre_status_pane_g3

0x4390,	// (0x000994ae) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000a46ff) phob_pre_status_pane_g

0x43a0,	// (0x000994be) phob_pre_status_pane_t1

0x43b0,	// (0x000994ce) phob_pre_status_pane_t2

0x43c0,	// (0x000994de) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000a470a) phob_pre_status_pane_t

0xeb88,	// (0x000a3ca6) bg_list_pane_cp05

0x1cf1,	// (0x00096e0f) grid_vorec_pane

0x1cfb,	// (0x00096e19) vorec_t1

0x1d09,	// (0x00096e27) vorec_t2

0x1d17,	// (0x00096e35) vorec_t3

0x1d25,	// (0x00096e43) vorec_t4

0x1d33,	// (0x00096e51) vorec_t5

0x1d41,	// (0x00096e5f) vorec_t6

0x0006,

0xf1fb,	// (0x000a4319) vorec_t

0x1d5d,	// (0x00096e7b) wait_bar_pane_cp01

0x1d65,	// (0x00096e83) cell_vorec_pane_ParamLimits

0x1d65,	// (0x00096e83) cell_vorec_pane

0x1d78,	// (0x00096e96) cell_vorec_pane_g1

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp05

0x1d92,	// (0x00096eb0) cams_zoom_pane

0x1d9e,	// (0x00096ebc) image_vga_pane

0x1dad,	// (0x00096ecb) main_camera_pane_g1

0x1dbb,	// (0x00096ed9) main_camera_pane_g2

0x1dc7,	// (0x00096ee5) main_camera_pane_g3

0x1dd3,	// (0x00096ef1) main_camera_pane_g4

0x1ddf,	// (0x00096efd) main_camera_pane_g5

0x1deb,	// (0x00096f09) main_camera_pane_g6

0x1df7,	// (0x00096f15) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a4328) main_camera_pane_g

0x1e03,	// (0x00096f21) main_camera_pane_t1

0x1e15,	// (0x00096f33) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a4339) main_camera_pane_t

0x1e36,	// (0x00096f54) cams_zoom_pane_cp_ParamLimits

0x1e36,	// (0x00096f54) cams_zoom_pane_cp

0x1e5a,	// (0x00096f78) image_cif_pane_ParamLimits

0x1e5a,	// (0x00096f78) image_cif_pane

0x1e78,	// (0x00096f96) image_subqcif_pane

0x1e80,	// (0x00096f9e) main_video_pane_g1_ParamLimits

0x1e80,	// (0x00096f9e) main_video_pane_g1

0x1ea0,	// (0x00096fbe) main_video_pane_g2_ParamLimits

0x1ea0,	// (0x00096fbe) main_video_pane_g2

0x1ed0,	// (0x00096fee) main_video_pane_g3_ParamLimits

0x1ed0,	// (0x00096fee) main_video_pane_g3

0x1ef9,	// (0x00097017) main_video_pane_g4_ParamLimits

0x1ef9,	// (0x00097017) main_video_pane_g4

0x1f22,	// (0x00097040) main_video_pane_g5_ParamLimits

0x1f22,	// (0x00097040) main_video_pane_g5

0xf07a,	// (0x000a4198) main_video_pane_g6_ParamLimits

0xf07a,	// (0x000a4198) main_video_pane_g6

0x0006,

0xf220,	// (0x000a433e) main_video_pane_g_ParamLimits

0xf220,	// (0x000a433e) main_video_pane_g

0x1f44,	// (0x00097062) main_video_pane_t1_ParamLimits

0x1f44,	// (0x00097062) main_video_pane_t1

0x9ca4,	// (0x0009edc2) cams_zoom_pane_g1

0x9cad,	// (0x0009edcb) cams_zoom_pane_g2

0x9cb6,	// (0x0009edd4) cams_zoom_pane_g3

0x9cbf,	// (0x0009eddd) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a434d) cams_zoom_pane_g

0x1f8e,	// (0x000970ac) grid_cams_pane

0x1f9c,	// (0x000970ba) linegrid_cams_pane

0x1faa,	// (0x000970c8) cell_cams_pane_ParamLimits

0x1faa,	// (0x000970c8) cell_cams_pane

0x9cc8,	// (0x0009ede6) cams_burst_image_pane

0x9cd0,	// (0x0009edee) cell_cams_pane_g1

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp03

0xeefd,	// (0x000a401b) mp_bg_pane_g1

0xeb88,	// (0x000a3ca6) bg_list_pane_cp03

0xb9fb,	// (0x000a0b19) bg_mp_pane

0xba03,	// (0x000a0b21) grid_mp_pane

0xba0b,	// (0x000a0b29) media_player_g1

0xba13,	// (0x000a0b31) media_player_t1

0xba21,	// (0x000a0b3f) media_player_t2

0xba2f,	// (0x000a0b4d) media_player_t3

0xba3d,	// (0x000a0b5b) media_player_t4

0xba4b,	// (0x000a0b69) media_player_t5

0xba59,	// (0x000a0b77) media_player_t6

0xba67,	// (0x000a0b85) media_player_t7

0x0006,

0xf5cb,	// (0x000a46e9) media_player_t

0xba75,	// (0x000a0b93) wait_bar_pane_cp02

0xf5b0,	// (0x000a46ce) main_usb_pane_t

0x436f,	// (0x0009948d) cell_mp_pane

0xeefd,	// (0x000a401b) cell_mp_pane_g1

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp06

0x9cd8,	// (0x0009edf6) grid_skin_colour_pane

0x9ce0,	// (0x0009edfe) list_highlight_pane_cp03

0x20ca,	// (0x000971e8) skin_g1

0x9ce8,	// (0x0009ee06) skin_t1

0x9cf7,	// (0x0009ee15) skin_t2

0x0001,

0xf264,	// (0x000a4382) skin_t

0x20d4,	// (0x000971f2) cell_skin_colour_pane_ParamLimits

0x20d4,	// (0x000971f2) cell_skin_colour_pane

0x9d05,	// (0x0009ee23) cell_skin_colour_pane_g1

0x2158,	// (0x00097276) call_video_g1_ParamLimits

0x2158,	// (0x00097276) call_video_g1

0x2168,	// (0x00097286) call_video_g2_ParamLimits

0x2168,	// (0x00097286) call_video_g2

0x0001,

0xf269,	// (0x000a4387) call_video_g_ParamLimits

0xf269,	// (0x000a4387) call_video_g

0x21c2,	// (0x000972e0) call_video_uplink_pane_cp1_ParamLimits

0x21c2,	// (0x000972e0) call_video_uplink_pane_cp1

0x9d17,	// (0x0009ee35) call_video_uplink_pane_cp2

0x228e,	// (0x000973ac) video_down_crop_pane_ParamLimits

0x228e,	// (0x000973ac) video_down_crop_pane

0x238c,	// (0x000974aa) video_down_pane_ParamLimits

0x238c,	// (0x000974aa) video_down_pane

0x9d1f,	// (0x0009ee3d) video_down_subqcif_pane_ParamLimits

0x9d1f,	// (0x0009ee3d) video_down_subqcif_pane

0x9d37,	// (0x0009ee55) video_down_subqcif_pane_cp_ParamLimits

0x9d37,	// (0x0009ee55) video_down_subqcif_pane_cp

0x9d5d,	// (0x0009ee7b) im_reading_pane_ParamLimits

0x9d5d,	// (0x0009ee7b) im_reading_pane

0x24ae,	// (0x000975cc) im_writing_pane_ParamLimits

0x24ae,	// (0x000975cc) im_writing_pane

0x24cc,	// (0x000975ea) im_reading_pane_t1

0x9d77,	// (0x0009ee95) list_im_pane

0x9d88,	// (0x0009eea6) scroll_pane_cp07

0x2520,	// (0x0009763e) im_writing_pane_t1_ParamLimits

0x2520,	// (0x0009763e) im_writing_pane_t1

0x9da1,	// (0x0009eebf) im_writing_pane_t2_ParamLimits

0x9da1,	// (0x0009eebf) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a4391) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a4391) im_writing_pane_t

0xeb88,	// (0x000a3ca6) input_focus_pane_cp04

0xeb88,	// (0x000a3ca6) input_focus_pane_cp05

0x2535,	// (0x00097653) list_im_single_pane_ParamLimits

0x2535,	// (0x00097653) list_im_single_pane

0x2559,	// (0x00097677) list_single_im_pane_t1

0x4333,	// (0x00099451) blid_accuracy_pane

0x433b,	// (0x00099459) blid_compass_pane

0x4345,	// (0x00099463) main_location_t1

0x4353,	// (0x00099471) main_location_t2

0x4361,	// (0x0009947f) main_location_t3

0x0002,

0xf5da,	// (0x000a46f8) main_location_t

0xeb88,	// (0x000a3ca6) aid_levels_location

0xeefd,	// (0x000a401b) blid_accuracy_pane_g1

0xeefd,	// (0x000a401b) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a43f3) blid_accuracy_pane_g

0x9de9,	// (0x0009ef07) wml_content_pane

0x9e27,	// (0x0009ef45) wml_button_pane_ParamLimits

0x9e27,	// (0x0009ef45) wml_button_pane

0x2568,	// (0x00097686) wml_list_single_large_pane_ParamLimits

0x2568,	// (0x00097686) wml_list_single_large_pane

0x2592,	// (0x000976b0) wml_list_single_medium_pane_ParamLimits

0x2592,	// (0x000976b0) wml_list_single_medium_pane

0x25c3,	// (0x000976e1) wml_list_single_small_pane_ParamLimits

0x25c3,	// (0x000976e1) wml_list_single_small_pane

0x9e3b,	// (0x0009ef59) wml_selection_box_pane_ParamLimits

0x9e3b,	// (0x0009ef59) wml_selection_box_pane

0x9e4e,	// (0x0009ef6c) wml_list_single_pane_t1

0x9e5d,	// (0x0009ef7b) wml_list_single_medium_pane_t1

0x9e6c,	// (0x0009ef8a) wml_list_single_large_pane_t1

0x9e7b,	// (0x0009ef99) input_focus_pane_cp02_ParamLimits

0x9e7b,	// (0x0009ef99) input_focus_pane_cp02

0x9e8e,	// (0x0009efac) wml_selection_box_pane_g1

0x9e97,	// (0x0009efb5) wml_selection_box_pane_t1_ParamLimits

0x9e97,	// (0x0009efb5) wml_selection_box_pane_t1

0xede3,	// (0x000a3f01) bg_wml_button_pane_ParamLimits

0xede3,	// (0x000a3f01) bg_wml_button_pane

0x9eaf,	// (0x0009efcd) wml_button_pane_g1

0x9eb7,	// (0x0009efd5) wml_button_pane_t1

0x9eaf,	// (0x0009efcd) wml_button_bg_pane_g1

0x9ec7,	// (0x0009efe5) wml_button_bg_pane_g2

0x9ecf,	// (0x0009efed) wml_button_bg_pane_g3

0x9ed7,	// (0x0009eff5) wml_button_bg_pane_g4

0x9edf,	// (0x0009effd) wml_button_bg_pane_g5

0x9ee7,	// (0x0009f005) wml_button_bg_pane_g6

0x9eef,	// (0x0009f00d) wml_button_bg_pane_g7

0x9ef7,	// (0x0009f015) wml_button_bg_pane_g8

0x9eff,	// (0x0009f01d) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a4396) wml_button_bg_pane_g

0x25fd,	// (0x0009771b) bg_list_pane_cp02

0x9f07,	// (0x0009f025) mce_header_pane_ParamLimits

0x9f07,	// (0x0009f025) mce_header_pane

0x9f1d,	// (0x0009f03b) mce_icon_pane

0x9f1d,	// (0x0009f03b) mce_image_pane

0x9f26,	// (0x0009f044) mce_text_pane_ParamLimits

0x9f26,	// (0x0009f044) mce_text_pane

0x2607,	// (0x00097725) scroll_pane_cp03

0x9e1f,	// (0x0009ef3d) scroll_pane_cp04

0x9f39,	// (0x0009f057) scroll_pane_cp05_ParamLimits

0x9f39,	// (0x0009f057) scroll_pane_cp05

0x2611,	// (0x0009772f) mce_header_field_pane_ParamLimits

0x2611,	// (0x0009772f) mce_header_field_pane

0x2631,	// (0x0009774f) mce_header_field_pane_2_ParamLimits

0x2631,	// (0x0009774f) mce_header_field_pane_2

0x2647,	// (0x00097765) mce_header_field_pane_3

0x264f,	// (0x0009776d) list_single_mce_message_pane_ParamLimits

0x264f,	// (0x0009776d) list_single_mce_message_pane

0x267a,	// (0x00097798) list_single_mce_smart_pane_ParamLimits

0x267a,	// (0x00097798) list_single_mce_smart_pane

0x9f45,	// (0x0009f063) input_focus_pane_cp03

0x9f4e,	// (0x0009f06c) list_header_data_pane

0x26b0,	// (0x000977ce) mce_header_field_pane_t1

0x26be,	// (0x000977dc) list_single_mce_header_pane_ParamLimits

0x26be,	// (0x000977dc) list_single_mce_header_pane

0x9f56,	// (0x0009f074) list_single_mce_header_pane_t1

0x9f65,	// (0x0009f083) list_single_mce_message_pane_g1

0x9f6d,	// (0x0009f08b) list_single_mce_message_pane_t1

0x2710,	// (0x0009782e) bg_cale_heading_pane_cp01_ParamLimits

0x2710,	// (0x0009782e) bg_cale_heading_pane_cp01

0x9f7b,	// (0x0009f099) bg_cale_pane_cp02_ParamLimits

0x9f7b,	// (0x0009f099) bg_cale_pane_cp02

0x2753,	// (0x00097871) cale_month_corner_pane

0x276d,	// (0x0009788b) cale_month_day_heading_pane_ParamLimits

0x276d,	// (0x0009788b) cale_month_day_heading_pane

0x27c8,	// (0x000978e6) cale_month_pane_g1_ParamLimits

0x27c8,	// (0x000978e6) cale_month_pane_g1

0x2800,	// (0x0009791e) cale_month_pane_g2_ParamLimits

0x2800,	// (0x0009791e) cale_month_pane_g2

0x2829,	// (0x00097947) cale_month_pane_g3_ParamLimits

0x2829,	// (0x00097947) cale_month_pane_g3

0x2875,	// (0x00097993) cale_month_pane_g4_ParamLimits

0x2875,	// (0x00097993) cale_month_pane_g4

0x28c1,	// (0x000979df) cale_month_pane_g5_ParamLimits

0x28c1,	// (0x000979df) cale_month_pane_g5

0x290d,	// (0x00097a2b) cale_month_pane_g6_ParamLimits

0x290d,	// (0x00097a2b) cale_month_pane_g6

0x2959,	// (0x00097a77) cale_month_pane_g7_ParamLimits

0x2959,	// (0x00097a77) cale_month_pane_g7

0x29bd,	// (0x00097adb) cale_month_pane_g8_ParamLimits

0x29bd,	// (0x00097adb) cale_month_pane_g8

0x2a21,	// (0x00097b3f) cale_month_pane_g9_ParamLimits

0x2a21,	// (0x00097b3f) cale_month_pane_g9

0x2a7f,	// (0x00097b9d) cale_month_pane_g10_ParamLimits

0x2a7f,	// (0x00097b9d) cale_month_pane_g10

0x2adb,	// (0x00097bf9) cale_month_pane_g11_ParamLimits

0x2adb,	// (0x00097bf9) cale_month_pane_g11

0x2b2f,	// (0x00097c4d) cale_month_pane_g12_ParamLimits

0x2b2f,	// (0x00097c4d) cale_month_pane_g12

0x2b85,	// (0x00097ca3) cale_month_pane_g13_ParamLimits

0x2b85,	// (0x00097ca3) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a43a9) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a43a9) cale_month_pane_g

0x2bdb,	// (0x00097cf9) cale_month_week_pane

0x2bf0,	// (0x00097d0e) grid_cale_month_pane_ParamLimits

0x2bf0,	// (0x00097d0e) grid_cale_month_pane

0x2c3e,	// (0x00097d5c) cale_month_day_heading_pane_t1

0x2cc4,	// (0x00097de2) cale_month_day_heading_pane_t2

0x2d55,	// (0x00097e73) cale_month_day_heading_pane_t3

0x2de6,	// (0x00097f04) cale_month_day_heading_pane_t4

0x2e77,	// (0x00097f95) cale_month_day_heading_pane_t5

0x2f08,	// (0x00098026) cale_month_day_heading_pane_t6

0x2f99,	// (0x000980b7) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a43c4) cale_month_day_heading_pane_t

0xf013,	// (0x000a4131) bg_cale_side_pane_cp01

0x3042,	// (0x00098160) cale_month_week_pane_t1

0x305b,	// (0x00098179) cale_month_week_pane_t2

0x3074,	// (0x00098192) cale_month_week_pane_t3

0x308d,	// (0x000981ab) cale_month_week_pane_t4

0x30a6,	// (0x000981c4) cale_month_week_pane_t5

0x30c7,	// (0x000981e5) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a43d3) cale_month_week_pane_t

0x30e8,	// (0x00098206) cell_cale_month_pane_ParamLimits

0x30e8,	// (0x00098206) cell_cale_month_pane

0x3234,	// (0x00098352) cell_cale_month_pane_g1

0x3240,	// (0x0009835e) cell_cale_month_pane_t1_ParamLimits

0x3240,	// (0x0009835e) cell_cale_month_pane_t1

0xf021,	// (0x000a413f) grid_highlight_pane_cp08

0xeefd,	// (0x000a401b) main_smil_g1

0x3260,	// (0x0009837e) smil_status_pane

0x9fba,	// (0x0009f0d8) smil_text_pane

0xb90f,	// (0x000a0a2d) bg_popup_call3_rect_pane_g8

0xb917,	// (0x000a0a35) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000a468c) bg_popup_call3_rect_pane_g

0xbb6a,	// (0x000a0c88) smil_status_volume_pane_g1

0x9fc4,	// (0x0009f0e2) smil_status_pane_t1

0x476b,	// (0x00099889) volume_smil_pane

0x9fdb,	// (0x0009f0f9) list_smil_text_pane

0x3273,	// (0x00098391) scroll_pane_cp011

0x327e,	// (0x0009839c) smil_text_list_pane_t1_ParamLimits

0x327e,	// (0x0009839c) smil_text_list_pane_t1

0x32f6,	// (0x00098414) aid_volume_smil_ParamLimits

0x32f6,	// (0x00098414) aid_volume_smil

0xeefd,	// (0x000a401b) smil_volume_pane_g1

0xeefd,	// (0x000a401b) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a43f3) smil_volume_pane_g

0x178f,	// (0x000968ad) listscroll_cale_day_pane

0x9fe5,	// (0x0009f103) bg_cale_pane

0x9ffd,	// (0x0009f11b) list_cale_pane

0xa020,	// (0x0009f13e) scroll_pane_cp09

0xa031,	// (0x0009f14f) cale_bg_pane_g1

0xa039,	// (0x0009f157) cale_bg_pane_g2

0xa041,	// (0x0009f15f) cale_bg_pane_g3

0xa049,	// (0x0009f167) cale_bg_pane_g4

0xa051,	// (0x0009f16f) cale_bg_pane_g5

0xa059,	// (0x0009f177) cale_bg_pane_g6

0xa061,	// (0x0009f17f) cale_bg_pane_g7

0xa069,	// (0x0009f187) cale_bg_pane_g8

0xa071,	// (0x0009f18f) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a43f8) cale_bg_pane_g

0x3320,	// (0x0009843e) list_cale_time_pane_ParamLimits

0x3320,	// (0x0009843e) list_cale_time_pane

0xa079,	// (0x0009f197) list_cale_time_pane_g1_ParamLimits

0xa079,	// (0x0009f197) list_cale_time_pane_g1

0xa085,	// (0x0009f1a3) list_cale_time_pane_g2_ParamLimits

0xa085,	// (0x0009f1a3) list_cale_time_pane_g2

0x3342,	// (0x00098460) list_cale_time_pane_g3_ParamLimits

0x3342,	// (0x00098460) list_cale_time_pane_g3

0x3350,	// (0x0009846e) list_cale_time_pane_g4_ParamLimits

0x3350,	// (0x0009846e) list_cale_time_pane_g4

0x335e,	// (0x0009847c) list_cale_time_pane_g5_ParamLimits

0x335e,	// (0x0009847c) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a440b) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a440b) list_cale_time_pane_g

0xa09f,	// (0x0009f1bd) list_cale_time_pane_t1_ParamLimits

0xa09f,	// (0x0009f1bd) list_cale_time_pane_t1

0xa0c7,	// (0x0009f1e5) list_cale_time_pane_t2_ParamLimits

0xa0c7,	// (0x0009f1e5) list_cale_time_pane_t2

0x3700,	// (0x0009881e) aid_blid_cardinal_pane

0x3742,	// (0x00098860) compass_pane_t4

0xa0ef,	// (0x0009f20d) list_cale_time_pane_t4_ParamLimits

0xa0ef,	// (0x0009f20d) list_cale_time_pane_t4

0x3750,	// (0x0009886e) compass_pane_t5

0x3760,	// (0x0009887e) compass_pane_t6

0x376e,	// (0x0009888c) compass_pane_t7

0xa5a0,	// (0x0009f6be) navi_pane_cc_t1

0xa785,	// (0x0009f8a3) aid_phob_thumbnail_center_pane

0x3e39,	// (0x00098f57) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a4418) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a4418) list_cale_time_pane_t

0xe79e,	// (0x000a38bc) bg_popup_window_pane_cp02_ParamLimits

0xe79e,	// (0x000a38bc) bg_popup_window_pane_cp02

0xa117,	// (0x0009f235) heading_pane_cp01_ParamLimits

0xa117,	// (0x0009f235) heading_pane_cp01

0xa123,	// (0x0009f241) loc_req_pane_ParamLimits

0xa123,	// (0x0009f241) loc_req_pane

0xa133,	// (0x0009f251) loc_type_pane_ParamLimits

0xa133,	// (0x0009f251) loc_type_pane

0xa145,	// (0x0009f263) loc_type_pane_t1_ParamLimits

0xa145,	// (0x0009f263) loc_type_pane_t1

0xa157,	// (0x0009f275) loc_type_pane_t2_ParamLimits

0xa157,	// (0x0009f275) loc_type_pane_t2

0xa169,	// (0x0009f287) loc_type_pane_t3_ParamLimits

0xa169,	// (0x0009f287) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a441f) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a441f) loc_type_pane_t

0xa17b,	// (0x0009f299) list_loc_req_pane

0xa185,	// (0x0009f2a3) scroll_pane_cp012

0x336c,	// (0x0009848a) list_single_loc_request_popup_menu_pane_ParamLimits

0x336c,	// (0x0009848a) list_single_loc_request_popup_menu_pane

0xa190,	// (0x0009f2ae) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa190,	// (0x0009f2ae) list_single_loc_request_popup_menu_pane_g1

0xa19c,	// (0x0009f2ba) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa19c,	// (0x0009f2ba) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a4426) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a4426) list_single_loc_request_popup_menu_pane_g

0xa1a8,	// (0x0009f2c6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa1a8,	// (0x0009f2c6) list_single_loc_request_popup_menu_pane_t1

0x337e,	// (0x0009849c) bg_popup_window_pane_cp03_ParamLimits

0x337e,	// (0x0009849c) bg_popup_window_pane_cp03

0x338c,	// (0x000984aa) heading_loc_req_pane_ParamLimits

0x338c,	// (0x000984aa) heading_loc_req_pane

0x3398,	// (0x000984b6) popup_dyc_status_message_window_g1_ParamLimits

0x3398,	// (0x000984b6) popup_dyc_status_message_window_g1

0x33a4,	// (0x000984c2) popup_dyc_status_message_window_t1_ParamLimits

0x33a4,	// (0x000984c2) popup_dyc_status_message_window_t1

0x33b6,	// (0x000984d4) popup_dyc_status_message_window_t2_ParamLimits

0x33b6,	// (0x000984d4) popup_dyc_status_message_window_t2

0x33c8,	// (0x000984e6) popup_dyc_status_message_window_t3_ParamLimits

0x33c8,	// (0x000984e6) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a442b) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a442b) popup_dyc_status_message_window_t

0xeb88,	// (0x000a3ca6) bg_heading_pane_cp01

0xa1be,	// (0x0009f2dc) heading_loc_req_pane_g1

0xa1c6,	// (0x0009f2e4) heading_loc_req_pane_g2

0xa1ce,	// (0x0009f2ec) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a4432) heading_loc_req_pane_g

0xa1d6,	// (0x0009f2f4) heading_loc_req_pane_t1

0xa1e5,	// (0x0009f303) bg_popup_sub_pane_cp01_ParamLimits

0xa1e5,	// (0x0009f303) bg_popup_sub_pane_cp01

0xa1f3,	// (0x0009f311) popup_cale_events_window_g1_ParamLimits

0xa1f3,	// (0x0009f311) popup_cale_events_window_g1

0xa213,	// (0x0009f331) popup_cale_events_window_g2_ParamLimits

0xa213,	// (0x0009f331) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a4466) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a4466) popup_cale_events_window_g

0xa233,	// (0x0009f351) popup_cale_events_window_t1_ParamLimits

0xa233,	// (0x0009f351) popup_cale_events_window_t1

0xa245,	// (0x0009f363) popup_cale_events_window_t2_ParamLimits

0xa245,	// (0x0009f363) popup_cale_events_window_t2

0xa283,	// (0x0009f3a1) popup_cale_events_window_t3_ParamLimits

0xa283,	// (0x0009f3a1) popup_cale_events_window_t3

0xa2bd,	// (0x0009f3db) popup_cale_events_window_t4_ParamLimits

0xa2bd,	// (0x0009f3db) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a446b) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a446b) popup_cale_events_window_t

0x34cd,	// (0x000985eb) call_type_pane

0xa2f3,	// (0x0009f411) popup_call_status_window_g1

0x34d9,	// (0x000985f7) popup_call_status_window_g2

0x34e5,	// (0x00098603) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a4474) popup_call_status_window_g

0xa301,	// (0x0009f41f) call_type_pane_g1

0xa30a,	// (0x0009f428) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a447b) call_type_pane_g

0xeb88,	// (0x000a3ca6) bg_popup_sub_pane_cp02

0xa313,	// (0x0009f431) listscroll_popup_wml_pane

0xa31b,	// (0x0009f439) list_wml_pane

0xa325,	// (0x0009f443) scroll_pane_cp013

0xa330,	// (0x0009f44e) list_single_graphic_popup_wml_pane_ParamLimits

0xa330,	// (0x0009f44e) list_single_graphic_popup_wml_pane

0xeefd,	// (0x000a401b) list_single_graphic_popup_wml_pane_g1

0xa344,	// (0x0009f462) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a4480) list_single_graphic_popup_wml_pane_g

0xa34c,	// (0x0009f46a) list_single_graphic_popup_wml_pane_t1

0xa362,	// (0x0009f480) aid_call_pane

0xeddb,	// (0x000a3ef9) popup_clock_analogue_window_g1

0xeddb,	// (0x000a3ef9) popup_clock_analogue_window_g2

0x34f1,	// (0x0009860f) popup_clock_analogue_window_g3

0x34f1,	// (0x0009860f) popup_clock_analogue_window_g4

0xeefd,	// (0x000a401b) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a4485) popup_clock_analogue_window_g

0x34f9,	// (0x00098617) popup_clock_analogue_window_t1

0x3507,	// (0x00098625) clock_digital_number_pane_ParamLimits

0x3507,	// (0x00098625) clock_digital_number_pane

0x3513,	// (0x00098631) clock_digital_number_pane_cp02_ParamLimits

0x3513,	// (0x00098631) clock_digital_number_pane_cp02

0x351f,	// (0x0009863d) clock_digital_number_pane_cp03_ParamLimits

0x351f,	// (0x0009863d) clock_digital_number_pane_cp03

0x352b,	// (0x00098649) clock_digital_number_pane_cp04_ParamLimits

0x352b,	// (0x00098649) clock_digital_number_pane_cp04

0x353b,	// (0x00098659) clock_digital_separator_pane_ParamLimits

0x353b,	// (0x00098659) clock_digital_separator_pane

0x3547,	// (0x00098665) popup_clock_digital_window_t1

0xeefd,	// (0x000a401b) clock_digital_number_pane_g1

0xeefd,	// (0x000a401b) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a43f3) clock_digital_number_pane_g

0xeefd,	// (0x000a401b) clock_digital_separator_pane_g1

0xeefd,	// (0x000a401b) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a43f3) clock_digital_separator_pane_g

0xeb88,	// (0x000a3ca6) bg_popup_window_pane_cp04

0xa36a,	// (0x0009f488) heading_pane_cp03

0xa372,	// (0x0009f490) listscroll_popup_gms_pane

0xa37a,	// (0x0009f498) grid_large_graphic_popup_pane

0xa384,	// (0x0009f4a2) listscroll_popup_gms_pane_g1

0xa38c,	// (0x0009f4aa) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a4490) listscroll_popup_gms_pane_g

0x9e1f,	// (0x0009ef3d) scroll_pane_cp014

0x3564,	// (0x00098682) cell_large_graphic_popup_pane_ParamLimits

0x3564,	// (0x00098682) cell_large_graphic_popup_pane

0x357c,	// (0x0009869a) cell_large_graphic_popup_pane_g1_ParamLimits

0x357c,	// (0x0009869a) cell_large_graphic_popup_pane_g1

0xa394,	// (0x0009f4b2) cell_large_graphic_popup_pane_g2_ParamLimits

0xa394,	// (0x0009f4b2) cell_large_graphic_popup_pane_g2

0xa3a0,	// (0x0009f4be) cell_large_graphic_popup_pane_g3_ParamLimits

0xa3a0,	// (0x0009f4be) cell_large_graphic_popup_pane_g3

0xa3ad,	// (0x0009f4cb) cell_large_graphic_popup_pane_g4_ParamLimits

0xa3ad,	// (0x0009f4cb) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a4495) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a4495) cell_large_graphic_popup_pane_g

0xa3bd,	// (0x0009f4db) grid_highlight_pane_cp010

0xeefd,	// (0x000a401b) bg_popup_call_pane_g1

0xa3c7,	// (0x0009f4e5) list_single_graphic_popup_conf_pane_ParamLimits

0xa3c7,	// (0x0009f4e5) list_single_graphic_popup_conf_pane

0xa3da,	// (0x0009f4f8) list_highlight_pane_cp01

0xa3e3,	// (0x0009f501) list_single_graphic_popup_conf_pane_g1

0xa3eb,	// (0x0009f509) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a449e) list_single_graphic_popup_conf_pane_g

0xa3f3,	// (0x0009f511) list_single_graphic_popup_conf_pane_t1

0xa401,	// (0x0009f51f) linegrid_cams_pane_g1

0x3588,	// (0x000986a6) linegrid_cams_pane_g2

0xf054,	// (0x000a4172) linegrid_cams_pane_g3

0xa40a,	// (0x0009f528) linegrid_cams_pane_g4

0x3591,	// (0x000986af) linegrid_cams_pane_g5

0x359a,	// (0x000986b8) linegrid_cams_pane_g6

0xf05d,	// (0x000a417b) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a44a3) linegrid_cams_pane_g

0xa413,	// (0x0009f531) popup_clock_analogue_window

0xa413,	// (0x0009f531) popup_clock_digital_window

0xeb88,	// (0x000a3ca6) popup_phob_thumbnail_window

0xeefd,	// (0x000a401b) call_video_uplink_pane_g1

0xa41c,	// (0x0009f53a) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a44b2) call_video_uplink_pane_g

0xa424,	// (0x0009f542) video_uplink_pane

0xa42c,	// (0x0009f54a) mce_image_pane_g1

0x35a3,	// (0x000986c1) mce_image_pane_g2

0x35ad,	// (0x000986cb) mce_image_pane_g3

0x35b5,	// (0x000986d3) mce_image_pane_g4

0x35bd,	// (0x000986db) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a44b7) mce_image_pane_g

0xa436,	// (0x0009f554) control_top_pane_stacon_cp01_ParamLimits

0xa436,	// (0x0009f554) control_top_pane_stacon_cp01

0xa44a,	// (0x0009f568) uni_indicator_pane_stacon_cp01_ParamLimits

0xa44a,	// (0x0009f568) uni_indicator_pane_stacon_cp01

0xa45b,	// (0x0009f579) bg_popup_sub_pane_cp03

0xa465,	// (0x0009f583) chi_dic_find_pane

0x35c5,	// (0x000986e3) listscroll_chi_dic_pane

0xa46d,	// (0x0009f58b) main_pane_chidic_g1

0xa475,	// (0x0009f593) chi_dic_find_pane_t1

0xa483,	// (0x0009f5a1) find_chidic_pane

0xa48c,	// (0x0009f5aa) chi_dic_list_pane_ParamLimits

0xa48c,	// (0x0009f5aa) chi_dic_list_pane

0xa49d,	// (0x0009f5bb) scroll_pane_cp020

0xa4a5,	// (0x0009f5c3) find_chidic_pane_t1

0xeb88,	// (0x000a3ca6) input_focus_pane_cp06

0x35d9,	// (0x000986f7) list_chi_dic_pane_ParamLimits

0x35d9,	// (0x000986f7) list_chi_dic_pane

0x35f3,	// (0x00098711) list_chi_dic_pane_t1_ParamLimits

0x35f3,	// (0x00098711) list_chi_dic_pane_t1

0xeb88,	// (0x000a3ca6) list_highlight_pane_cp020

0xa4b4,	// (0x0009f5d2) bg_cale_heading_pane_g1

0x3606,	// (0x00098724) bg_cale_heading_pane_g2

0x360e,	// (0x0009872c) bg_cale_heading_pane_g3

0x3616,	// (0x00098734) bg_cale_heading_pane_g4

0x3620,	// (0x0009873e) bg_cale_heading_pane_g5

0x362a,	// (0x00098748) bg_cale_heading_pane_g6

0x3632,	// (0x00098750) bg_cale_heading_pane_g7

0x363a,	// (0x00098758) bg_cale_heading_pane_g8

0x3644,	// (0x00098762) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a44c2) bg_cale_heading_pane_g

0xa4b4,	// (0x0009f5d2) bg_cale_side_pane_g1

0x364e,	// (0x0009876c) bg_cale_side_pane_g2

0x3658,	// (0x00098776) bg_cale_side_pane_g3

0x3662,	// (0x00098780) bg_cale_side_pane_g4

0x366c,	// (0x0009878a) bg_cale_side_pane_g5

0x3676,	// (0x00098794) bg_cale_side_pane_g6

0x3680,	// (0x0009879e) bg_cale_side_pane_g7

0x368a,	// (0x000987a8) bg_cale_side_pane_g8

0x3692,	// (0x000987b0) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a44d5) bg_cale_side_pane_g

0x369a,	// (0x000987b8) popup_call_status_window_ParamLimits

0x369a,	// (0x000987b8) popup_call_status_window

0xa4bc,	// (0x0009f5da) stacon_top_pane

0xa4c4,	// (0x0009f5e2) status_pane_ParamLimits

0xa4c4,	// (0x0009f5e2) status_pane

0xa4d9,	// (0x0009f5f7) status_small_pane

0xa4e1,	// (0x0009f5ff) control_pane

0xeb88,	// (0x000a3ca6) stacon_bottom_pane

0xa4e9,	// (0x0009f607) list_single_mce_smart_pane_t1_ParamLimits

0xa4e9,	// (0x0009f607) list_single_mce_smart_pane_t1

0xa4fc,	// (0x0009f61a) list_single_mce_smart_pane_t2_ParamLimits

0xa4fc,	// (0x0009f61a) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a44e8) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a44e8) list_single_mce_smart_pane_t

0x36a6,	// (0x000987c4) compass_pane

0x36b2,	// (0x000987d0) main_location2_pane_t1

0x36c6,	// (0x000987e4) main_location2_pane_t2

0x36da,	// (0x000987f8) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a44ed) main_location2_pane_t

0xa51b,	// (0x0009f639) compass_pane_g1_ParamLimits

0xa51b,	// (0x0009f639) compass_pane_g1

0x3724,	// (0x00098842) compass_pane_t1

0x3733,	// (0x00098851) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a44f6) compass_pane_t

0x377e,	// (0x0009889c) text_secondary_cp61

0xa597,	// (0x0009f6b5) navi_pane_cams_g5

0xa613,	// (0x0009f731) navi_pane_im_t1

0xa621,	// (0x0009f73f) navi_pane_mp_g1_ParamLimits

0xa621,	// (0x0009f73f) navi_pane_mp_g1

0xa635,	// (0x0009f753) navi_pane_mp_g2_ParamLimits

0xa635,	// (0x0009f753) navi_pane_mp_g2

0xa641,	// (0x0009f75f) navi_pane_mp_g3_ParamLimits

0xa641,	// (0x0009f75f) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a450a) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a450a) navi_pane_mp_g

0xa64d,	// (0x0009f76b) navi_pane_mp_t1

0xa65b,	// (0x0009f779) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a4511) navi_pane_mp_t

0xa6c6,	// (0x0009f7e4) navi_pane_vt_g1

0xa64d,	// (0x0009f76b) navi_pane_vt_t1

0xa6ce,	// (0x0009f7ec) navi_slider_pane

0xa6de,	// (0x0009f7fc) zooming_pane

0xa6e6,	// (0x0009f804) navi_slider_pane_g1

0x37b9,	// (0x000988d7) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a4518) navi_slider_pane_g

0xa70a,	// (0x0009f828) aid_levels_zoom

0xa712,	// (0x0009f830) zooming_pane_g1

0xa71a,	// (0x0009f838) zooming_pane_g2

0xa71a,	// (0x0009f838) zooming_pane_g3

0x0002,

0xf409,	// (0x000a4527) zooming_pane_g

0xa722,	// (0x0009f840) level_10_zoom

0xa72b,	// (0x0009f849) level_11_zoom

0xa734,	// (0x0009f852) level_1_zoom

0xa73d,	// (0x0009f85b) level_2_zoom

0xa746,	// (0x0009f864) level_3_zoom

0xa74f,	// (0x0009f86d) level_4_zoom

0xa758,	// (0x0009f876) level_5_zoom

0xa761,	// (0x0009f87f) level_6_zoom

0xa76a,	// (0x0009f888) level_7_zoom

0xa773,	// (0x0009f891) level_8_zoom

0xa77c,	// (0x0009f89a) level_9_zoom

0xa78d,	// (0x0009f8ab) popup_phob_thumbnail_window_g1

0xa795,	// (0x0009f8b3) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a452e) popup_phob_thumbnail_window_g

0xba7d,	// (0x000a0b9b) level_1_location

0xba85,	// (0x000a0ba3) level_2_location

0xba8d,	// (0x000a0bab) level_3_location

0xba95,	// (0x000a0bb3) level_4_location

0xa6de,	// (0x0009f7fc) level_5_location

0x37cb,	// (0x000988e9) mce_icon_pane_g1

0x37d3,	// (0x000988f1) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a4533) mce_icon_pane_g

0x37db,	// (0x000988f9) main_mup_pane_g1_ParamLimits

0x37db,	// (0x000988f9) main_mup_pane_g1

0x37f3,	// (0x00098911) main_mup_pane_g2_ParamLimits

0x37f3,	// (0x00098911) main_mup_pane_g2

0x380f,	// (0x0009892d) main_mup_pane_g3_ParamLimits

0x380f,	// (0x0009892d) main_mup_pane_g3

0x382b,	// (0x00098949) main_mup_pane_g4_ParamLimits

0x382b,	// (0x00098949) main_mup_pane_g4

0x3847,	// (0x00098965) main_mup_pane_g5_ParamLimits

0x3847,	// (0x00098965) main_mup_pane_g5

0x3868,	// (0x00098986) main_mup_pane_g6_ParamLimits

0x3868,	// (0x00098986) main_mup_pane_g6

0x3884,	// (0x000989a2) main_mup_pane_g7_ParamLimits

0x3884,	// (0x000989a2) main_mup_pane_g7

0x38a0,	// (0x000989be) main_mup_pane_g8_ParamLimits

0x38a0,	// (0x000989be) main_mup_pane_g8

0x38c0,	// (0x000989de) main_mup_pane_g9_ParamLimits

0x38c0,	// (0x000989de) main_mup_pane_g9

0x38df,	// (0x000989fd) main_mup_pane_g10_ParamLimits

0x38df,	// (0x000989fd) main_mup_pane_g10

0x38fe,	// (0x00098a1c) main_mup_pane_g11_ParamLimits

0x38fe,	// (0x00098a1c) main_mup_pane_g11

0x3916,	// (0x00098a34) main_mup_pane_g12_ParamLimits

0x3916,	// (0x00098a34) main_mup_pane_g12

0x3924,	// (0x00098a42) main_mup_pane_g13_ParamLimits

0x3924,	// (0x00098a42) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a4538) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a4538) main_mup_pane_g

0x393a,	// (0x00098a58) main_mup_pane_t1_ParamLimits

0x393a,	// (0x00098a58) main_mup_pane_t1

0x3957,	// (0x00098a75) main_mup_pane_t2_ParamLimits

0x3957,	// (0x00098a75) main_mup_pane_t2

0x3971,	// (0x00098a8f) main_mup_pane_t3_ParamLimits

0x3971,	// (0x00098a8f) main_mup_pane_t3

0x398b,	// (0x00098aa9) main_mup_pane_t4_ParamLimits

0x398b,	// (0x00098aa9) main_mup_pane_t4

0x399d,	// (0x00098abb) main_mup_pane_t5_ParamLimits

0x399d,	// (0x00098abb) main_mup_pane_t5

0x39af,	// (0x00098acd) main_mup_pane_t6_ParamLimits

0x39af,	// (0x00098acd) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a4553) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a4553) main_mup_pane_t

0x39c5,	// (0x00098ae3) mup_progress_pane_ParamLimits

0x39c5,	// (0x00098ae3) mup_progress_pane

0x39d1,	// (0x00098aef) mup_visualizer_pane_ParamLimits

0x39d1,	// (0x00098aef) mup_visualizer_pane

0x3a0b,	// (0x00098b29) mup_volume_pane_ParamLimits

0x3a0b,	// (0x00098b29) mup_volume_pane

0xa2f3,	// (0x0009f411) mup_visualizer_pane_g1_ParamLimits

0xa2f3,	// (0x0009f411) mup_visualizer_pane_g1

0xa2f3,	// (0x0009f411) mup_visualizer_pane_g2_ParamLimits

0xa2f3,	// (0x0009f411) mup_visualizer_pane_g2

0xa51b,	// (0x0009f639) mup_visualizer_pane_g3_ParamLimits

0xa51b,	// (0x0009f639) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a4560) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a4560) mup_visualizer_pane_g

0xeefd,	// (0x000a401b) mup_volume_pane_g1

0xa7a5,	// (0x0009f8c3) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a4567) mup_volume_pane_g

0xeefd,	// (0x000a401b) mup_progress_pane_g1

0xa7ae,	// (0x0009f8cc) mup_progress_pane_g2

0xa7b7,	// (0x0009f8d5) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a456c) mup_progress_pane_g

0xeb88,	// (0x000a3ca6) bg_popup_window_pane_cp05

0xa7c0,	// (0x0009f8de) heading_pane_cp02_ParamLimits

0xa7c0,	// (0x0009f8de) heading_pane_cp02

0xa7da,	// (0x0009f8f8) list_popup_blid_pane

0xa7e2,	// (0x0009f900) list_blid_sat_info_pane_ParamLimits

0xa7e2,	// (0x0009f900) list_blid_sat_info_pane

0xa7f5,	// (0x0009f913) list_blid_sat_info_pane_g1

0xa7fd,	// (0x0009f91b) list_blid_sat_info_pane_t1

0x3b18,	// (0x00098c36) mup_equalizer_pane_ParamLimits

0x3b18,	// (0x00098c36) mup_equalizer_pane

0x3b39,	// (0x00098c57) mup_equalizer_pane_cp1_ParamLimits

0x3b39,	// (0x00098c57) mup_equalizer_pane_cp1

0x3b5a,	// (0x00098c78) mup_equalizer_pane_cp2_ParamLimits

0x3b5a,	// (0x00098c78) mup_equalizer_pane_cp2

0x3b7b,	// (0x00098c99) mup_equalizer_pane_cp3_ParamLimits

0x3b7b,	// (0x00098c99) mup_equalizer_pane_cp3

0x3b9c,	// (0x00098cba) mup_equalizer_pane_cp4_ParamLimits

0x3b9c,	// (0x00098cba) mup_equalizer_pane_cp4

0x3bbd,	// (0x00098cdb) mup_equalizer_pane_cp5

0x3bd3,	// (0x00098cf1) mup_equalizer_pane_cp6

0x3beb,	// (0x00098d09) mup_equalizer_pane_cp7

0xb98f,	// (0x000a0aad) bg_popup_call_poc_act_pane_g9

0xb997,	// (0x000a0ab5) bg_popup_call_poc_act_pane_g10

0xb99f,	// (0x000a0abd) bg_popup_call_poc_act_pane_g11

0x000a,

0xede3,	// (0x000a3f01) mup_scale_pane

0xeefd,	// (0x000a401b) mup_scale_pane_g1

0xa80b,	// (0x0009f929) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a4588) mup_scale_pane_g

0xa82f,	// (0x0009f94d) msg_data_pane

0xa837,	// (0x0009f955) scroll_pane_cp017

0x3c15,	// (0x00098d33) bg_list_pane_cp04_ParamLimits

0x3c15,	// (0x00098d33) bg_list_pane_cp04

0xa83f,	// (0x0009f95d) msg_data_pane_g1

0x3c3b,	// (0x00098d59) msg_data_pane_g2

0x3c45,	// (0x00098d63) msg_data_pane_g3

0x3c4d,	// (0x00098d6b) msg_data_pane_g4

0x3c55,	// (0x00098d73) msg_data_pane_g5

0x3c5d,	// (0x00098d7b) msg_data_pane_g6

0x3c65,	// (0x00098d83) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a4597) msg_data_pane_g

0x3c6d,	// (0x00098d8b) msg_text_pane_ParamLimits

0x3c6d,	// (0x00098d8b) msg_text_pane

0x3ca4,	// (0x00098dc2) qrid_highlight_pane_cp011_ParamLimits

0x3ca4,	// (0x00098dc2) qrid_highlight_pane_cp011

0xeb88,	// (0x000a3ca6) msg_body_pane

0xeb88,	// (0x000a3ca6) msg_header_pane

0xa850,	// (0x0009f96e) input_focus_pane_cp07

0x3cca,	// (0x00098de8) msg_header_pane_t1_ParamLimits

0x3cca,	// (0x00098de8) msg_header_pane_t1

0x3cdc,	// (0x00098dfa) msg_header_pane_t2_ParamLimits

0x3cdc,	// (0x00098dfa) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a45ab) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a45ab) msg_header_pane_t

0xa865,	// (0x0009f983) msg_body_pane_g1

0x3cee,	// (0x00098e0c) msg_body_pane_t1_ParamLimits

0x3cee,	// (0x00098e0c) msg_body_pane_t1

0x3d1f,	// (0x00098e3d) msg_body_pane_t2_ParamLimits

0x3d1f,	// (0x00098e3d) msg_body_pane_t2

0x3d31,	// (0x00098e4f) msg_body_pane_t3_ParamLimits

0x3d31,	// (0x00098e4f) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a45b0) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a45b0) msg_body_pane_t

0x3d95,	// (0x00098eb3) main_viewer_pane_g1_ParamLimits

0x3d95,	// (0x00098eb3) main_viewer_pane_g1

0x3da1,	// (0x00098ebf) main_viewer_pane_g2_ParamLimits

0x3da1,	// (0x00098ebf) main_viewer_pane_g2

0x3dad,	// (0x00098ecb) main_viewer_pane_g3_ParamLimits

0x3dad,	// (0x00098ecb) main_viewer_pane_g3

0x3dbe,	// (0x00098edc) main_viewer_pane_g4_ParamLimits

0x3dbe,	// (0x00098edc) main_viewer_pane_g4

0x3dcf,	// (0x00098eed) main_viewer_pane_g5_ParamLimits

0x3dcf,	// (0x00098eed) main_viewer_pane_g5

0x3dcf,	// (0x00098eed) main_viewer_pane_g7_ParamLimits

0x3dcf,	// (0x00098eed) main_viewer_pane_g7

0xa190,	// (0x0009f2ae) main_viewer_pane_g8_ParamLimits

0xa190,	// (0x0009f2ae) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a45c0) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a45c0) main_viewer_pane_g

0xa86d,	// (0x0009f98b) viewer_content_pane_ParamLimits

0xa86d,	// (0x0009f98b) viewer_content_pane

0x3e0d,	// (0x00098f2b) main_postcard_pane_g1_ParamLimits

0x3e0d,	// (0x00098f2b) main_postcard_pane_g1

0x3e1b,	// (0x00098f39) main_postcard_pane_g2_ParamLimits

0x3e1b,	// (0x00098f39) main_postcard_pane_g2

0x3e29,	// (0x00098f47) main_postcard_pane_g3_ParamLimits

0x3e29,	// (0x00098f47) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a45d1) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a45d1) main_postcard_pane_g

0x3e39,	// (0x00098f57) main_postcard_pane_g4

0xbb7d,	// (0x000a0c9b) smil_status_volume_pane_g2

0x3e65,	// (0x00098f83) postcard_pane_ParamLimits

0x3e65,	// (0x00098f83) postcard_pane

0xa2f3,	// (0x0009f411) postcard_pane_g1_ParamLimits

0xa2f3,	// (0x0009f411) postcard_pane_g1

0x3e97,	// (0x00098fb5) postcard_pane_g2_ParamLimits

0x3e97,	// (0x00098fb5) postcard_pane_g2

0x3ea3,	// (0x00098fc1) postcard_pane_g3_ParamLimits

0x3ea3,	// (0x00098fc1) postcard_pane_g3

0xa87b,	// (0x0009f999) postcard_pane_g4_ParamLimits

0xa87b,	// (0x0009f999) postcard_pane_g4

0x3eaf,	// (0x00098fcd) postcard_pane_g5_ParamLimits

0x3eaf,	// (0x00098fcd) postcard_pane_g5

0x3ebb,	// (0x00098fd9) postcard_pane_g6_ParamLimits

0x3ebb,	// (0x00098fd9) postcard_pane_g6

0xa889,	// (0x0009f9a7) postcard_pane_g7_ParamLimits

0xa889,	// (0x0009f9a7) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a45de) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a45de) postcard_pane_g

0x3ec7,	// (0x00098fe5) main_mp2_pane_g1_ParamLimits

0x3ec7,	// (0x00098fe5) main_mp2_pane_g1

0x3ed3,	// (0x00098ff1) main_mp2_pane_g2_ParamLimits

0x3ed3,	// (0x00098ff1) main_mp2_pane_g2

0x3edf,	// (0x00098ffd) main_mp2_pane_g3_ParamLimits

0x3edf,	// (0x00098ffd) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a45ed) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a45ed) main_mp2_pane_g

0x3eeb,	// (0x00099009) main_mp2_pane_t1_ParamLimits

0x3eeb,	// (0x00099009) main_mp2_pane_t1

0x3f02,	// (0x00099020) main_mp2_pane_t2_ParamLimits

0x3f02,	// (0x00099020) main_mp2_pane_t2

0x3f16,	// (0x00099034) main_mp2_pane_t3_ParamLimits

0x3f16,	// (0x00099034) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a45f4) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a45f4) main_mp2_pane_t

0xa897,	// (0x0009f9b5) pec_content_pane_ParamLimits

0xa897,	// (0x0009f9b5) pec_content_pane

0x9e1f,	// (0x0009ef3d) scroll_pane_cp015

0xa8a9,	// (0x0009f9c7) pec_attribute_pane_ParamLimits

0xa8a9,	// (0x0009f9c7) pec_attribute_pane

0x3f28,	// (0x00099046) pec_content_pane_g1_ParamLimits

0x3f28,	// (0x00099046) pec_content_pane_g1

0xa8b9,	// (0x0009f9d7) pec_content_pane_t1_ParamLimits

0xa8b9,	// (0x0009f9d7) pec_content_pane_t1

0xa8cb,	// (0x0009f9e9) pec_content_pane_t2_ParamLimits

0xa8cb,	// (0x0009f9e9) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000a45fb) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000a45fb) pec_content_pane_t

0x3f34,	// (0x00099052) list_single_graphic_pane_cp01_ParamLimits

0x3f34,	// (0x00099052) list_single_graphic_pane_cp01

0xede3,	// (0x000a3f01) bg_popup_sub_pane_cp04

0xa8dd,	// (0x0009f9fb) popup_mup_playback_window_g1

0xa8e9,	// (0x0009fa07) popup_mup_playback_window_t1

0xa8fe,	// (0x0009fa1c) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000a4600) popup_mup_playback_window_t

0xa935,	// (0x0009fa53) main_image_pane_g1_ParamLimits

0xa935,	// (0x0009fa53) main_image_pane_g1

0xa978,	// (0x0009fa96) scroll_pane_cp018_ParamLimits

0xa978,	// (0x0009fa96) scroll_pane_cp018

0xa990,	// (0x0009faae) scroll_pane_cp016_ParamLimits

0xa990,	// (0x0009faae) scroll_pane_cp016

0x3fcd,	// (0x000990eb) smil2_image_pane_ParamLimits

0x3fcd,	// (0x000990eb) smil2_image_pane

0x3ffd,	// (0x0009911b) smil2_root_pane_ParamLimits

0x3ffd,	// (0x0009911b) smil2_root_pane

0x4029,	// (0x00099147) smil2_text_pane_ParamLimits

0x4029,	// (0x00099147) smil2_text_pane

0xeb88,	// (0x000a3ca6) bg_list_pane_cp06

0xa9cc,	// (0x0009faea) grid_radio_pane

0xeb88,	// (0x000a3ca6) bg_popup_window_pane_cp06

0xa9d4,	// (0x0009faf2) main_fmradio_pane_t1

0xa36a,	// (0x0009f488) heading_pane_cp04

0xa9e2,	// (0x0009fb00) main_fmradio_pane_t2

0xb9a7,	// (0x000a0ac5) popup_cale_lunar_info_window_g1

0xa9f0,	// (0x0009fb0e) main_fmradio_pane_t3

0xb9af,	// (0x000a0acd) popup_cale_lunar_info_window_g2

0xa9fe,	// (0x0009fb1c) main_fmradio_pane_t4

0x0001,

0xaa0c,	// (0x0009fb2a) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000a46db) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000a4615) main_fmradio_pane_t

0xaa1a,	// (0x0009fb38) wait_bar_pane_cp03

0xaa22,	// (0x0009fb40) cell_fmradio_pane_ParamLimits

0xaa22,	// (0x0009fb40) cell_fmradio_pane

0xa889,	// (0x0009f9a7) cell_fmradio_pane_g1_ParamLimits

0xa889,	// (0x0009f9a7) cell_fmradio_pane_g1

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp011

0xaa35,	// (0x0009fb53) poc_content_pane_ParamLimits

0xaa35,	// (0x0009fb53) poc_content_pane

0xaa47,	// (0x0009fb65) scroll_pane_cp019

0x4069,	// (0x00099187) popup_call_poc_act_window_ParamLimits

0x4069,	// (0x00099187) popup_call_poc_act_window

0x4076,	// (0x00099194) popup_call_poc_inact_window_ParamLimits

0x4076,	// (0x00099194) popup_call_poc_inact_window

0xf594,	// (0x000a46b2) bg_popup_call_poc_act_pane_g

0xb91f,	// (0x000a0a3d) bg_popup_call_poc_inact_pane_g1

0xb927,	// (0x000a0a45) bg_popup_call_poc_inact_pane_g2

0xaa4f,	// (0x0009fb6d) popup_call_poc_act_window_g2

0xb92f,	// (0x000a0a4d) bg_popup_call_poc_inact_pane_g3

0xb937,	// (0x000a0a55) bg_popup_call_poc_inact_pane_g4

0xb93f,	// (0x000a0a5d) bg_popup_call_poc_inact_pane_g5

0xaa57,	// (0x0009fb75) popup_call_poc_act_window_t1_ParamLimits

0xaa57,	// (0x0009fb75) popup_call_poc_act_window_t1

0xaa7f,	// (0x0009fb9d) popup_call_poc_act_window_t2_ParamLimits

0xaa7f,	// (0x0009fb9d) popup_call_poc_act_window_t2

0xaaa7,	// (0x0009fbc5) popup_call_poc_act_window_t3_ParamLimits

0xaaa7,	// (0x0009fbc5) popup_call_poc_act_window_t3

0xaacf,	// (0x0009fbed) popup_call_poc_act_window_t4_ParamLimits

0xaacf,	// (0x0009fbed) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000a4620) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000a4620) popup_call_poc_act_window_t

0xb947,	// (0x000a0a65) bg_popup_call_poc_inact_pane_g6

0xb94f,	// (0x000a0a6d) bg_popup_call_poc_inact_pane_g7

0xb957,	// (0x000a0a75) bg_popup_call_poc_inact_pane_g8

0xaae1,	// (0x0009fbff) popup_call_poc_inact_window_g2

0xb95f,	// (0x000a0a7d) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000a469f) bg_popup_call_poc_inact_pane_g

0xaae9,	// (0x0009fc07) popup_call_poc_inact_window_t1_ParamLimits

0xaae9,	// (0x0009fc07) popup_call_poc_inact_window_t1

0xaafe,	// (0x0009fc1c) popup_call_poc_inact_window_t2_ParamLimits

0xaafe,	// (0x0009fc1c) popup_call_poc_inact_window_t2

0xab13,	// (0x0009fc31) popup_call_poc_inact_window_t3_ParamLimits

0xab13,	// (0x0009fc31) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000a4629) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000a4629) popup_call_poc_inact_window_t

0xbaf0,	// (0x000a0c0e) context_pane_ParamLimits

0x46b8,	// (0x000997d6) signal_pane_ParamLimits

0xa6de,	// (0x0009f7fc) main_call2_pane

0x462b,	// (0x00099749) popup_phob_thumbnail2_window_ParamLimits

0x462b,	// (0x00099749) popup_phob_thumbnail2_window

0x3d43,	// (0x00098e61) aid_hotspot_pointer_arrow_pane

0x3d4b,	// (0x00098e69) aid_hotspot_pointer_hand_pane

0x4398,	// (0x000994b6) phob_pre_status_pane_g5

0x1d92,	// (0x00096eb0) cams_zoom_pane_ParamLimits

0x1d9e,	// (0x00096ebc) image_vga_pane_ParamLimits

0x1dad,	// (0x00096ecb) main_camera_pane_g1_ParamLimits

0x1dbb,	// (0x00096ed9) main_camera_pane_g2_ParamLimits

0x1dc7,	// (0x00096ee5) main_camera_pane_g3_ParamLimits

0x1dd3,	// (0x00096ef1) main_camera_pane_g4_ParamLimits

0x1ddf,	// (0x00096efd) main_camera_pane_g5_ParamLimits

0x1deb,	// (0x00096f09) main_camera_pane_g6_ParamLimits

0x1df7,	// (0x00096f15) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a4328) main_camera_pane_g_ParamLimits

0x1e03,	// (0x00096f21) main_camera_pane_t1_ParamLimits

0x1e15,	// (0x00096f33) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a4339) main_camera_pane_t_ParamLimits

0xede3,	// (0x000a3f01) bg_popup_preview_window_pane_cp01_ParamLimits

0xede3,	// (0x000a3f01) bg_popup_preview_window_pane_cp01

0xab28,	// (0x0009fc46) popup_phob_thumbnail2_window_g1_ParamLimits

0xab28,	// (0x0009fc46) popup_phob_thumbnail2_window_g1

0xeb88,	// (0x000a3ca6) call2_cli_visual_pane

0x4092,	// (0x000991b0) popup_call2_audio_conf_window_ParamLimits

0x4092,	// (0x000991b0) popup_call2_audio_conf_window

0x40a7,	// (0x000991c5) popup_call2_audio_first_window_ParamLimits

0x40a7,	// (0x000991c5) popup_call2_audio_first_window

0x4145,	// (0x00099263) popup_call2_audio_in_window_ParamLimits

0x4145,	// (0x00099263) popup_call2_audio_in_window

0x4187,	// (0x000992a5) popup_call2_audio_out_window_ParamLimits

0x4187,	// (0x000992a5) popup_call2_audio_out_window

0x41e9,	// (0x00099307) popup_call2_audio_second_window_ParamLimits

0x41e9,	// (0x00099307) popup_call2_audio_second_window

0x4247,	// (0x00099365) popup_call2_audio_wait_window_ParamLimits

0x4247,	// (0x00099365) popup_call2_audio_wait_window

0xeb88,	// (0x000a3ca6) bg_popup_call2_act_pane_cp03

0xedc5,	// (0x000a3ee3) list_conf_pane_cp

0xab34,	// (0x0009fc52) popup_call2_audio_conf_window_t1

0xa3c7,	// (0x0009f4e5) list_single_graphic_popup_conf2_pane_ParamLimits

0xa3c7,	// (0x0009f4e5) list_single_graphic_popup_conf2_pane

0xa3da,	// (0x0009f4f8) list_highlight_pane_cp04

0xab42,	// (0x0009fc60) list_single_graphic_popup_conf2_pane_g1

0xa3eb,	// (0x0009f509) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000a4630) list_single_graphic_popup_conf2_pane_g

0xab4c,	// (0x0009fc6a) list_single_graphic_popup_conf2_pane_t1

0xab5a,	// (0x0009fc78) bg_popup_call2_act_pane_cp01_ParamLimits

0xab5a,	// (0x0009fc78) bg_popup_call2_act_pane_cp01

0xabe4,	// (0x0009fd02) call_type_pane_cp05_ParamLimits

0xabe4,	// (0x0009fd02) call_type_pane_cp05

0xac38,	// (0x0009fd56) popup_call2_audio_second_window_g1_ParamLimits

0xac38,	// (0x0009fd56) popup_call2_audio_second_window_g1

0xac8c,	// (0x0009fdaa) popup_call2_audio_second_window_g2_ParamLimits

0xac8c,	// (0x0009fdaa) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000a4635) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000a4635) popup_call2_audio_second_window_g

0xacf1,	// (0x0009fe0f) popup_call2_audio_second_window_t1_ParamLimits

0xacf1,	// (0x0009fe0f) popup_call2_audio_second_window_t1

0xadac,	// (0x0009feca) popup_call2_audio_second_window_t2_ParamLimits

0xadac,	// (0x0009feca) popup_call2_audio_second_window_t2

0xadff,	// (0x0009ff1d) popup_call2_audio_second_window_t3_ParamLimits

0xadff,	// (0x0009ff1d) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000a463c) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000a463c) popup_call2_audio_second_window_t

0xeb88,	// (0x000a3ca6) bg_popup_call2_in_pane_cp02

0xeb92,	// (0x000a3cb0) call_type_pane_cp04

0xeb9a,	// (0x000a3cb8) popup_call2_audio_wait_window_g1

0xeba2,	// (0x000a3cc0) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x000a4213) popup_call2_audio_wait_window_g

0xebaa,	// (0x000a3cc8) popup_call2_audio_wait_window_t3

0xaef2,	// (0x000a0010) bg_popup_call2_act_pane_ParamLimits

0xaef2,	// (0x000a0010) bg_popup_call2_act_pane

0xafb2,	// (0x000a00d0) call_type_pane_cp03_ParamLimits

0xafb2,	// (0x000a00d0) call_type_pane_cp03

0xb016,	// (0x000a0134) popup_call2_audio_first_window_g1_ParamLimits

0xb016,	// (0x000a0134) popup_call2_audio_first_window_g1

0xb086,	// (0x000a01a4) popup_call2_audio_first_window_g2_ParamLimits

0xb086,	// (0x000a01a4) popup_call2_audio_first_window_g2

0xa2f3,	// (0x0009f411) popup_call2_audio_first_window_g3_ParamLimits

0xa2f3,	// (0x0009f411) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000a4645) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000a4645) popup_call2_audio_first_window_g

0xb164,	// (0x000a0282) popup_call2_audio_first_window_t1_ParamLimits

0xb164,	// (0x000a0282) popup_call2_audio_first_window_t1

0xb267,	// (0x000a0385) popup_call2_audio_first_window_t4_ParamLimits

0xb267,	// (0x000a0385) popup_call2_audio_first_window_t4

0xb34a,	// (0x000a0468) popup_call2_audio_first_window_t5_ParamLimits

0xb34a,	// (0x000a0468) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000a4650) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000a4650) popup_call2_audio_first_window_t

0xeddb,	// (0x000a3ef9) bg_popup_call2_act_pane_g1

0xb9b7,	// (0x000a0ad5) popup_cale_lunar_info_window_t1

0xb9c5,	// (0x000a0ae3) popup_cale_lunar_info_window_t2

0xb9d3,	// (0x000a0af1) popup_cale_lunar_info_window_t3

0xeb88,	// (0x000a3ca6) bg_popup_call2_bubble_pane

0xb44b,	// (0x000a0569) bg_popup_call2_in_pane_cp01_ParamLimits

0xb44b,	// (0x000a0569) bg_popup_call2_in_pane_cp01

0xe823,	// (0x000a3941) call_type_pane_cp02

0xb493,	// (0x000a05b1) popup_call2_audio_out_window_g1_ParamLimits

0xb493,	// (0x000a05b1) popup_call2_audio_out_window_g1

0xb4bf,	// (0x000a05dd) popup_call2_audio_out_window_g2_ParamLimits

0xb4bf,	// (0x000a05dd) popup_call2_audio_out_window_g2

0xb4e7,	// (0x000a0605) popup_call2_audio_out_window_g3_ParamLimits

0xb4e7,	// (0x000a0605) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000a4659) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000a4659) popup_call2_audio_out_window_g

0xb522,	// (0x000a0640) popup_call2_audio_out_window_t1_ParamLimits

0xb522,	// (0x000a0640) popup_call2_audio_out_window_t1

0xb581,	// (0x000a069f) popup_call2_audio_out_window_t2_ParamLimits

0xb581,	// (0x000a069f) popup_call2_audio_out_window_t2

0xb5d5,	// (0x000a06f3) popup_call2_audio_out_window_t3_ParamLimits

0xb5d5,	// (0x000a06f3) popup_call2_audio_out_window_t3

0xb5eb,	// (0x000a0709) popup_call2_audio_out_window_t4_ParamLimits

0xb5eb,	// (0x000a0709) popup_call2_audio_out_window_t4

0xb601,	// (0x000a071f) popup_call2_audio_out_window_t5_ParamLimits

0xb601,	// (0x000a071f) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000a4662) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000a4662) popup_call2_audio_out_window_t

0xb665,	// (0x000a0783) bg_popup_call2_in_pane_ParamLimits

0xb665,	// (0x000a0783) bg_popup_call2_in_pane

0xb6c1,	// (0x000a07df) popup_call2_audio_in_window_g1_ParamLimits

0xb6c1,	// (0x000a07df) popup_call2_audio_in_window_g1

0xb6f9,	// (0x000a0817) popup_call2_audio_in_window_g2_ParamLimits

0xb6f9,	// (0x000a0817) popup_call2_audio_in_window_g2

0xb731,	// (0x000a084f) popup_call2_audio_in_window_g3_ParamLimits

0xb731,	// (0x000a084f) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000a466f) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000a466f) popup_call2_audio_in_window_g

0xb789,	// (0x000a08a7) popup_call2_audio_in_window_t1_ParamLimits

0xb789,	// (0x000a08a7) popup_call2_audio_in_window_t1

0xb809,	// (0x000a0927) popup_call2_audio_in_window_t2_ParamLimits

0xb809,	// (0x000a0927) popup_call2_audio_in_window_t2

0xb889,	// (0x000a09a7) popup_call2_audio_in_window_t3_ParamLimits

0xb889,	// (0x000a09a7) popup_call2_audio_in_window_t3

0xb8a3,	// (0x000a09c1) popup_call2_audio_in_window_t4_ParamLimits

0xb8a3,	// (0x000a09c1) popup_call2_audio_in_window_t4

0xb8b5,	// (0x000a09d3) popup_call2_audio_in_window_t5_ParamLimits

0xb8b5,	// (0x000a09d3) popup_call2_audio_in_window_t5

0xb8ca,	// (0x000a09e8) popup_call2_audio_in_window_t6_ParamLimits

0xb8ca,	// (0x000a09e8) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000a4678) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000a4678) popup_call2_audio_in_window_t

0xeddb,	// (0x000a3ef9) bg_popup_call2_in_pane_g1

0xb9ed,	// (0x000a0b0b) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000a46e0) popup_cale_lunar_info_window_t

0xede3,	// (0x000a3f01) bg_popup_call2_rect_pane_ParamLimits

0xede3,	// (0x000a3f01) bg_popup_call2_rect_pane

0xeb88,	// (0x000a3ca6) call2_cli_visual_graphic_pane

0xeb88,	// (0x000a3ca6) call2_cli_visual_text_pane

0x475e,	// (0x0009987c) smil_status_volume_pane_g3

0x0002,

0xeefd,	// (0x000a401b) call2_cli_visual_graphic_pane_g1

0xeefd,	// (0x000a401b) call2_cli_visual_graphic_pane_g2

0xeefd,	// (0x000a401b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000a4685) call2_cli_visual_graphic_pane_g

0xb8df,	// (0x000a09fd) bg_popup_call2_rect_pane_g1

0xef89,	// (0x000a40a7) bg_popup_call2_rect_pane_g2

0xb8e7,	// (0x000a0a05) bg_popup_call2_rect_pane_g3

0xb8ef,	// (0x000a0a0d) bg_popup_call2_rect_pane_g4

0xb8f7,	// (0x000a0a15) bg_popup_call2_rect_pane_g5

0xb8ff,	// (0x000a0a1d) bg_popup_call2_rect_pane_g6

0xb907,	// (0x000a0a25) bg_popup_call2_rect_pane_g7

0xb90f,	// (0x000a0a2d) bg_popup_call2_rect_pane_g8

0xb917,	// (0x000a0a35) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000a468c) bg_popup_call2_rect_pane_g

0xb91f,	// (0x000a0a3d) bg_popup_call2_bubble_pane_g1

0xb927,	// (0x000a0a45) bg_popup_call2_bubble_pane_g2

0xb92f,	// (0x000a0a4d) bg_popup_call2_bubble_pane_g3

0xb937,	// (0x000a0a55) bg_popup_call2_bubble_pane_g4

0xb93f,	// (0x000a0a5d) bg_popup_call2_bubble_pane_g5

0xb947,	// (0x000a0a65) bg_popup_call2_bubble_pane_g6

0xb94f,	// (0x000a0a6d) bg_popup_call2_bubble_pane_g7

0xb957,	// (0x000a0a75) bg_popup_call2_bubble_pane_g8

0xb95f,	// (0x000a0a7d) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000a469f) bg_popup_call2_bubble_pane_g

0x179f,	// (0x000968bd) aid_cale_week_size_cell_pane

0x1e27,	// (0x00096f45) aid_cams_cif_uncrop_pane_ParamLimits

0x1e27,	// (0x00096f45) aid_cams_cif_uncrop_pane

0x1f82,	// (0x000970a0) aid_cams_size_cell_ParamLimits

0x1f82,	// (0x000970a0) aid_cams_size_cell

0x1f8e,	// (0x000970ac) grid_cams_pane_ParamLimits

0x1f9c,	// (0x000970ba) linegrid_cams_pane_ParamLimits

0x2180,	// (0x0009729e) call_video_pane_t1

0x21a1,	// (0x000972bf) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a438c) call_video_pane_t

0x26ea,	// (0x00097808) aid_cale_month_size_cell_pane_ParamLimits

0x26ea,	// (0x00097808) aid_cale_month_size_cell_pane

0xf60b,	// (0x000a4729) smil_status_volume_pane_g

0x476b,	// (0x00099889) volume_smil_pane_ParamLimits

0x0ee8,	// (0x00096006) aid_popup2_width_pane

0x1693,	// (0x000967b1) cell_qdial_pane_g4_ParamLimits

0x1693,	// (0x000967b1) cell_qdial_pane_g4

0x3700,	// (0x0009881e) aid_blid_cardinal_pane_ParamLimits

0x3710,	// (0x0009882e) aid_blid_destination_pane_ParamLimits

0x3710,	// (0x0009882e) aid_blid_destination_pane

0xede3,	// (0x000a3f01) bg_popup_call_poc_act_pane_ParamLimits

0xede3,	// (0x000a3f01) bg_popup_call_poc_act_pane

0xede3,	// (0x000a3f01) bg_popup_call_poc_inact_pane_ParamLimits

0xede3,	// (0x000a3f01) bg_popup_call_poc_inact_pane

0xb967,	// (0x000a0a85) bg_popup_call_poc_act_pane_g1

0xb96f,	// (0x000a0a8d) bg_popup_call_poc_act_pane_g2

0xb977,	// (0x000a0a95) bg_popup_call_poc_act_pane_g3

0xb937,	// (0x000a0a55) bg_popup_call_poc_act_pane_g4

0xb93f,	// (0x000a0a5d) bg_popup_call_poc_act_pane_g5

0xb97f,	// (0x000a0a9d) bg_popup_call_poc_act_pane_g6

0xb94f,	// (0x000a0a6d) bg_popup_call_poc_act_pane_g7

0xb987,	// (0x000a0aa5) bg_popup_call_poc_act_pane_g8

0xeb88,	// (0x000a3ca6) main_usb_pane

0x455a,	// (0x00099678) popup_cale_lunar_info_window

0x24cc,	// (0x000975ea) im_reading_pane_t1_ParamLimits

0x9d77,	// (0x0009ee95) list_im_pane_ParamLimits

0x9d88,	// (0x0009eea6) scroll_pane_cp07_ParamLimits

0xeb88,	// (0x000a3ca6) grid_highlight_pane_cp012

0xede3,	// (0x000a3f01) mup_scale_pane_ParamLimits

0xa2f3,	// (0x0009f411) main_usb_pane_g1_ParamLimits

0xa2f3,	// (0x0009f411) main_usb_pane_g1

0x42bb,	// (0x000993d9) main_usb_pane_g2_ParamLimits

0x42bb,	// (0x000993d9) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000a46c9) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000a46c9) main_usb_pane_g

0x42c7,	// (0x000993e5) main_usb_pane_t1_ParamLimits

0x42c7,	// (0x000993e5) main_usb_pane_t1

0x42d9,	// (0x000993f7) main_usb_pane_t2_ParamLimits

0x42d9,	// (0x000993f7) main_usb_pane_t2

0x42eb,	// (0x00099409) main_usb_pane_t3_ParamLimits

0x42eb,	// (0x00099409) main_usb_pane_t3

0x42fd,	// (0x0009941b) main_usb_pane_t4_ParamLimits

0x42fd,	// (0x0009941b) main_usb_pane_t4

0x430f,	// (0x0009942d) main_usb_pane_t5_ParamLimits

0x430f,	// (0x0009942d) main_usb_pane_t5

0x4321,	// (0x0009943f) main_usb_pane_t6_ParamLimits

0x4321,	// (0x0009943f) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000a46ce) main_usb_pane_t_ParamLimits

0x36a6,	// (0x000987c4) aid_text_placing

0x36b2,	// (0x000987d0) main_location2_pane_t1_ParamLimits

0x36c6,	// (0x000987e4) main_location2_pane_t2_ParamLimits

0x36da,	// (0x000987f8) main_location2_pane_t3_ParamLimits

0x36ee,	// (0x0009880c) main_location2_pane_t4_ParamLimits

0x36ee,	// (0x0009880c) main_location2_pane_t4

0xf3cf,	// (0x000a44ed) main_location2_pane_t_ParamLimits

0xee1f,	// (0x000a3f3d) find_pinb_pane_g2_ParamLimits

0xee1f,	// (0x000a3f3d) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x000a4239) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x000a4239) find_pinb_pane_g

0xee2b,	// (0x000a3f49) find_pinb_pane_t1_ParamLimits

0xee3d,	// (0x000a3f5b) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x000a423e) find_pinb_pane_t_ParamLimits

0xeb88,	// (0x000a3ca6) main_call3_pane

0x2c3e,	// (0x00097d5c) cale_month_day_heading_pane_t1_ParamLimits

0x2cc4,	// (0x00097de2) cale_month_day_heading_pane_t2_ParamLimits

0x2d55,	// (0x00097e73) cale_month_day_heading_pane_t3_ParamLimits

0x2de6,	// (0x00097f04) cale_month_day_heading_pane_t4_ParamLimits

0x2e77,	// (0x00097f95) cale_month_day_heading_pane_t5_ParamLimits

0x2f08,	// (0x00098026) cale_month_day_heading_pane_t6_ParamLimits

0x2f99,	// (0x000980b7) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a43c4) cale_month_day_heading_pane_t_ParamLimits

0x9fd2,	// (0x0009f0f0) smil_status_volume_pane

0x3e7f,	// (0x00098f9d) postcard_address_pane_ParamLimits

0x3e7f,	// (0x00098f9d) postcard_address_pane

0x3e8b,	// (0x00098fa9) postcard_message_pane_ParamLimits

0x3e8b,	// (0x00098fa9) postcard_message_pane

0x4286,	// (0x000993a4) call2_cli_visual_pane_t1_ParamLimits

0x4286,	// (0x000993a4) call2_cli_visual_pane_t1

0x48c2,	// (0x000999e0) postcard_message_pane_t1_ParamLimits

0x48c2,	// (0x000999e0) postcard_message_pane_t1

0x48ab,	// (0x000999c9) postcard_address_pane_t1_ParamLimits

0x48ab,	// (0x000999c9) postcard_address_pane_t1

0x489c,	// (0x000999ba) popup_call3_audio_in_window_ParamLimits

0x489c,	// (0x000999ba) popup_call3_audio_in_window

0x4780,	// (0x0009989e) bg_popup_call3_in_pane_ParamLimits

0x4780,	// (0x0009989e) bg_popup_call3_in_pane

0x47e2,	// (0x00099900) popup_call3_audio_in_window_g1_ParamLimits

0x47e2,	// (0x00099900) popup_call3_audio_in_window_g1

0x47fa,	// (0x00099918) popup_call3_audio_in_window_g2_ParamLimits

0x47fa,	// (0x00099918) popup_call3_audio_in_window_g2

0x4812,	// (0x00099930) popup_call3_audio_in_window_g3_ParamLimits

0x4812,	// (0x00099930) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000a4730) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000a4730) popup_call3_audio_in_window_g

0x483a,	// (0x00099958) popup_call3_audio_in_window_t1_ParamLimits

0x483a,	// (0x00099958) popup_call3_audio_in_window_t1

0x4862,	// (0x00099980) popup_call3_audio_in_window_t2_ParamLimits

0x4862,	// (0x00099980) popup_call3_audio_in_window_t2

0x488a,	// (0x000999a8) popup_call3_audio_in_window_t3_ParamLimits

0x488a,	// (0x000999a8) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000a4739) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000a4739) popup_call3_audio_in_window_t

0xa6de,	// (0x0009f7fc) bg_popup_call3_rect_pane

0xb8df,	// (0x000a09fd) bg_popup_call3_rect_pane_g1

0xef89,	// (0x000a40a7) bg_popup_call3_rect_pane_g2

0xb8e7,	// (0x000a0a05) bg_popup_call3_rect_pane_g3

0xb8ef,	// (0x000a0a0d) bg_popup_call3_rect_pane_g4

0xb8f7,	// (0x000a0a15) bg_popup_call3_rect_pane_g5

0xb8ff,	// (0x000a0a1d) bg_popup_call3_rect_pane_g6

0xb907,	// (0x000a0a25) bg_popup_call3_rect_pane_g7

0x3a26,	// (0x00098b44) mup_visualizer_osc_pane

0xa79d,	// (0x0009f8bb) mup_visualizer_spec_pane

0x47a0,	// (0x000998be) call3_video_qcif_pane_ParamLimits

0x47a0,	// (0x000998be) call3_video_qcif_pane

0x47b2,	// (0x000998d0) call3_video_qcif_uncrop_pane_ParamLimits

0x47b2,	// (0x000998d0) call3_video_qcif_uncrop_pane

0x47c0,	// (0x000998de) call3_video_subqcif_pane_ParamLimits

0x47c0,	// (0x000998de) call3_video_subqcif_pane

0x47d2,	// (0x000998f0) call3_video_subqcif_uncrop_pane_ParamLimits

0x47d2,	// (0x000998f0) call3_video_subqcif_uncrop_pane

0x482a,	// (0x00099948) popup_call3_audio_in_window_g4_ParamLimits

0x482a,	// (0x00099948) popup_call3_audio_in_window_g4

0x474d,	// (0x0009986b) mup_spec_half_pane

0x4756,	// (0x00099874) mup_spec_half_pane_cp

0xbb50,	// (0x000a0c6e) mup_osc_middle_pane

0xbb59,	// (0x000a0c77) mup_visualizer_osc_pane_g1

0x472e,	// (0x0009984c) mup_spec_bar_pane_ParamLimits

0x472e,	// (0x0009984c) mup_spec_bar_pane

0xbb3d,	// (0x000a0c5b) mup_spec_bar_pane_g1

0xbb47,	// (0x000a0c65) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a4724) mup_spec_bar_pane_g

0x179f,	// (0x000968bd) aid_cale_week_size_cell_pane_ParamLimits

0x17b4,	// (0x000968d2) bg_cale_heading_pane_ParamLimits

0xefc6,	// (0x000a40e4) bg_cale_pane_cp01_ParamLimits

0x17d6,	// (0x000968f4) cale_week_corner_pane_ParamLimits

0x17f0,	// (0x0009690e) cale_week_day_heading_pane_ParamLimits

0x1812,	// (0x00096930) cale_week_scroll_pane_g1_ParamLimits

0x182f,	// (0x0009694d) cale_week_scroll_pane_g2_ParamLimits

0x1842,	// (0x00096960) cale_week_scroll_pane_g3_ParamLimits

0x1855,	// (0x00096973) cale_week_scroll_pane_g4_ParamLimits

0x1868,	// (0x00096986) cale_week_scroll_pane_g5_ParamLimits

0x187b,	// (0x00096999) cale_week_scroll_pane_g6_ParamLimits

0x188e,	// (0x000969ac) cale_week_scroll_pane_g7_ParamLimits

0x18a1,	// (0x000969bf) cale_week_scroll_pane_g8_ParamLimits

0x18b6,	// (0x000969d4) cale_week_scroll_pane_g9_ParamLimits

0x18c9,	// (0x000969e7) cale_week_scroll_pane_g10_ParamLimits

0x18dc,	// (0x000969fa) cale_week_scroll_pane_g11_ParamLimits

0x18ef,	// (0x00096a0d) cale_week_scroll_pane_g12_ParamLimits

0x1906,	// (0x00096a24) cale_week_scroll_pane_g13_ParamLimits

0x1921,	// (0x00096a3f) cale_week_scroll_pane_g14_ParamLimits

0x193c,	// (0x00096a5a) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x000a42ca) cale_week_scroll_pane_g_ParamLimits

0x196c,	// (0x00096a8a) cale_week_time_pane_ParamLimits

0x1981,	// (0x00096a9f) grid_cale_week_pane_ParamLimits

0xefe4,	// (0x000a4102) listscroll_cale_week_pane_t1

0xeff6,	// (0x000a4114) scroll_pane_cp08_ParamLimits

0x2753,	// (0x00097871) cale_month_corner_pane_ParamLimits

0x9fa8,	// (0x0009f0c6) cale_month_pane_t1

0x2bdb,	// (0x00097cf9) cale_month_week_pane_ParamLimits

0xa2f3,	// (0x0009f411) popup_call_status_window_g1_ParamLimits

0x34d9,	// (0x000985f7) popup_call_status_window_g2_ParamLimits

0x34e5,	// (0x00098603) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a4474) popup_call_status_window_g_ParamLimits

0xa35a,	// (0x0009f478) aid_call2_pane

0x3cbe,	// (0x00098ddc) msg_header_pane_g1

0x3e7f,	// (0x00098f9d) postcard_address2_pane_ParamLimits

0x3e7f,	// (0x00098f9d) postcard_address2_pane

0x3e8b,	// (0x00098fa9) postcard_message2_pane_ParamLimits

0x3e8b,	// (0x00098fa9) postcard_message2_pane

0x46c6,	// (0x000997e4) message2_row_pane_ParamLimits

0x46c6,	// (0x000997e4) message2_row_pane

0x46e1,	// (0x000997ff) address2_row_pane_ParamLimits

0x46e1,	// (0x000997ff) address2_row_pane

0xbb0b,	// (0x000a0c29) postcard_message2_row_pane_g1

0xbb13,	// (0x000a0c31) postcard_message2_row_pane_t1

0xbb0b,	// (0x000a0c29) address2_row_pane_g1

0xbb13,	// (0x000a0c31) address2_row_pane_t1

0x1ce9,	// (0x00096e07) aid_size_cell_vorec

0xeb88,	// (0x000a3ca6) main_rss_pane

0x46f4,	// (0x00099812) rss_list_single_pane_ParamLimits

0x46f4,	// (0x00099812) rss_list_single_pane

0xbb21,	// (0x000a0c3f) rss_list_single_pane_t1

0xbb2f,	// (0x000a0c4d) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000a471f) rss_list_single_pane_t

0xeb88,	// (0x000a3ca6) main_camera2_pane

0xeb88,	// (0x000a3ca6) main_video2_pane

0x4926,	// (0x00099a44) cams_zoom_pane_cp2_ParamLimits

0x4926,	// (0x00099a44) cams_zoom_pane_cp2

0x4932,	// (0x00099a50) image2_vga_pane_ParamLimits

0x4932,	// (0x00099a50) image2_vga_pane

0x4941,	// (0x00099a5f) main_camera2_pane_g1_ParamLimits

0x4941,	// (0x00099a5f) main_camera2_pane_g1

0x494d,	// (0x00099a6b) main_camera2_pane_g2_ParamLimits

0x494d,	// (0x00099a6b) main_camera2_pane_g2

0x4959,	// (0x00099a77) main_camera2_pane_g3_ParamLimits

0x4959,	// (0x00099a77) main_camera2_pane_g3

0x4965,	// (0x00099a83) main_camera2_pane_g4_ParamLimits

0x4965,	// (0x00099a83) main_camera2_pane_g4

0x4971,	// (0x00099a8f) main_camera2_pane_g5_ParamLimits

0x4971,	// (0x00099a8f) main_camera2_pane_g5

0x497d,	// (0x00099a9b) main_camera2_pane_g6_ParamLimits

0x497d,	// (0x00099a9b) main_camera2_pane_g6

0x4989,	// (0x00099aa7) main_camera2_pane_g7_ParamLimits

0x4989,	// (0x00099aa7) main_camera2_pane_g7

0x4995,	// (0x00099ab3) main_camera2_pane_g8_ParamLimits

0x4995,	// (0x00099ab3) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000a4740) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000a4740) main_camera2_pane_g

0x49ad,	// (0x00099acb) main_camera2_pane_t1_ParamLimits

0x49ad,	// (0x00099acb) main_camera2_pane_t1

0x49bf,	// (0x00099add) main_camera2_pane_t2_ParamLimits

0x49bf,	// (0x00099add) main_camera2_pane_t2

0x49d1,	// (0x00099aef) main_camera2_pane_t3_ParamLimits

0x49d1,	// (0x00099aef) main_camera2_pane_t3

0x49e3,	// (0x00099b01) main_camera2_pane_t4_ParamLimits

0x49e3,	// (0x00099b01) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000a4753) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000a4753) main_camera2_pane_t

0x4a45,	// (0x00099b63) cams_zoom_pane_cp4_ParamLimits

0x4a45,	// (0x00099b63) cams_zoom_pane_cp4

0x4a55,	// (0x00099b73) image2_cif_pane_ParamLimits

0x4a55,	// (0x00099b73) image2_cif_pane

0x4a6a,	// (0x00099b88) image2_subqcif_pane_ParamLimits

0x4a6a,	// (0x00099b88) image2_subqcif_pane

0x4a79,	// (0x00099b97) main_video2_pane_g1_ParamLimits

0x4a79,	// (0x00099b97) main_video2_pane_g1

0x4a8b,	// (0x00099ba9) main_video2_pane_g2_ParamLimits

0x4a8b,	// (0x00099ba9) main_video2_pane_g2

0x4a9b,	// (0x00099bb9) main_video2_pane_g3_ParamLimits

0x4a9b,	// (0x00099bb9) main_video2_pane_g3

0x4aab,	// (0x00099bc9) main_video2_pane_g4_ParamLimits

0x4aab,	// (0x00099bc9) main_video2_pane_g4

0x4abb,	// (0x00099bd9) main_video2_pane_g5_ParamLimits

0x4abb,	// (0x00099bd9) main_video2_pane_g5

0x4acb,	// (0x00099be9) main_video2_pane_g6_ParamLimits

0x4acb,	// (0x00099be9) main_video2_pane_g6

0x0005,

0xf644,	// (0x000a4762) main_video2_pane_g_ParamLimits

0xf644,	// (0x000a4762) main_video2_pane_g

0x4add,	// (0x00099bfb) main_video2_pane_t1_ParamLimits

0x4add,	// (0x00099bfb) main_video2_pane_t1

0x4af7,	// (0x00099c15) main_video2_pane_t2_ParamLimits

0x4af7,	// (0x00099c15) main_video2_pane_t2

0x4b1d,	// (0x00099c3b) main_video2_pane_t3_ParamLimits

0x4b1d,	// (0x00099c3b) main_video2_pane_t3

0x0002,

0xf651,	// (0x000a476f) main_video2_pane_t_ParamLimits

0xf651,	// (0x000a476f) main_video2_pane_t

0x43d8,	// (0x000994f6) call_muted_g2

0x0001,

0xf5f3,	// (0x000a4711) call_muted_g

0xeb88,	// (0x000a3ca6) main_mup2_pane

0xbb90,	// (0x000a0cae) main_mup2_pane_g1_ParamLimits

0xbb90,	// (0x000a0cae) main_mup2_pane_g1

0x4b43,	// (0x00099c61) main_mup2_pane_g2_ParamLimits

0x4b43,	// (0x00099c61) main_mup2_pane_g2

0x4dc5,	// (0x00099ee3) main_mup_pane_g13_cp1

0x4dcd,	// (0x00099eeb) mup_volume_pane_cp1

0x4b63,	// (0x00099c81) main_mup2_pane_g4_ParamLimits

0x4b63,	// (0x00099c81) main_mup2_pane_g4

0x4b78,	// (0x00099c96) main_mup2_pane_g5_ParamLimits

0x4b78,	// (0x00099c96) main_mup2_pane_g5

0x4b8d,	// (0x00099cab) main_mup2_pane_g6_ParamLimits

0x4b8d,	// (0x00099cab) main_mup2_pane_g6

0x4ba2,	// (0x00099cc0) main_mup2_pane_g7_ParamLimits

0x4ba2,	// (0x00099cc0) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000a4776) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000a4776) main_mup2_pane_g

0x4bbe,	// (0x00099cdc) main_mup2_pane_t1_ParamLimits

0x4bbe,	// (0x00099cdc) main_mup2_pane_t1

0x4bd5,	// (0x00099cf3) main_mup2_pane_t2_ParamLimits

0x4bd5,	// (0x00099cf3) main_mup2_pane_t2

0x4bec,	// (0x00099d0a) main_mup2_pane_t3_ParamLimits

0x4bec,	// (0x00099d0a) main_mup2_pane_t3

0x4c03,	// (0x00099d21) main_mup2_pane_t4_ParamLimits

0x4c03,	// (0x00099d21) main_mup2_pane_t4

0x4c1d,	// (0x00099d3b) main_mup2_pane_t5_ParamLimits

0x4c1d,	// (0x00099d3b) main_mup2_pane_t5

0x4c37,	// (0x00099d55) main_mup2_pane_t6_ParamLimits

0x4c37,	// (0x00099d55) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000a4785) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000a4785) main_mup2_pane_t

0x4c6f,	// (0x00099d8d) mup2_visualizer_pane_ParamLimits

0x4c6f,	// (0x00099d8d) mup2_visualizer_pane

0x4ca5,	// (0x00099dc3) mup_progress_pane_cp_ParamLimits

0x4ca5,	// (0x00099dc3) mup_progress_pane_cp

0x4db0,	// (0x00099ece) mup_volume_pane_cp_ParamLimits

0x4db0,	// (0x00099ece) mup_volume_pane_cp

0x4cbc,	// (0x00099dda) mup2_visualizer_pane_g1_ParamLimits

0x4cbc,	// (0x00099dda) mup2_visualizer_pane_g1

0xbb9c,	// (0x000a0cba) mup2_visualizer_pane_g2_ParamLimits

0xbb9c,	// (0x000a0cba) mup2_visualizer_pane_g2

0x4cd1,	// (0x00099def) mup2_visualizer_pane_g3_ParamLimits

0x4cd1,	// (0x00099def) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000a4792) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000a4792) mup2_visualizer_pane_g

0xa9c4,	// (0x0009fae2) aid_size_cell_fmradio

0x44ee,	// (0x0009960c) aid_height_parent_landcape

0x9e06,	// (0x0009ef24) wml_content_pane_cp

0x9e0e,	// (0x0009ef2c) wml_tabs_pane

0x9e17,	// (0x0009ef35) popup_wml_miniature_window

0x9e1f,	// (0x0009ef3d) scroll_pane_cp021

0x9e33,	// (0x0009ef51) wml_content_pane_comp8

0xeb88,	// (0x000a3ca6) bg_popup_sub_pane_cp05

0xbbba,	// (0x000a0cd8) popup_wml_miniature_window_g1

0xbbc2,	// (0x000a0ce0) wml_miniature_view_pane

0x4cdf,	// (0x00099dfd) aid_size_wml_view

0x4ce7,	// (0x00099e05) wml_miniature_view_pane_g1

0x4cf0,	// (0x00099e0e) wml_miniature_view_pane_g2

0x4cf9,	// (0x00099e17) wml_miniature_view_pane_g3

0x4d01,	// (0x00099e1f) wml_miniature_view_pane_g4

0x4d09,	// (0x00099e27) wml_miniature_view_pane_g5

0x4d11,	// (0x00099e2f) wml_miniature_view_pane_g6

0x4d19,	// (0x00099e37) wml_miniature_view_pane_g7

0x4d21,	// (0x00099e3f) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000a4799) wml_miniature_view_pane_g

0xbb90,	// (0x000a0cae) background_graphic_ParamLimits

0xbb90,	// (0x000a0cae) background_graphic

0xbbca,	// (0x000a0ce8) wml_tabs_2_pane

0xbbd3,	// (0x000a0cf1) wml_tabs_3_pane_ParamLimits

0xbbd3,	// (0x000a0cf1) wml_tabs_3_pane

0xbbe5,	// (0x000a0d03) wml_tabs_4_pane_ParamLimits

0xbbe5,	// (0x000a0d03) wml_tabs_4_pane

0xbbfb,	// (0x000a0d19) wml_tabs_5_pane_ParamLimits

0xbbfb,	// (0x000a0d19) wml_tabs_5_pane

0xbc15,	// (0x000a0d33) wml_tabs_pane_g2_ParamLimits

0xbc15,	// (0x000a0d33) wml_tabs_pane_g2

0xbc29,	// (0x000a0d47) wml_tabs_pane_g3_ParamLimits

0xbc29,	// (0x000a0d47) wml_tabs_pane_g3

0x4d29,	// (0x00099e47) wml_tabs_2_active_pane_ParamLimits

0x4d29,	// (0x00099e47) wml_tabs_2_active_pane

0x4d39,	// (0x00099e57) wml_tabs_2_passive_pane_ParamLimits

0x4d39,	// (0x00099e57) wml_tabs_2_passive_pane

0x4d49,	// (0x00099e67) wml_tabs_3_active_pane_cp_ParamLimits

0x4d49,	// (0x00099e67) wml_tabs_3_active_pane_cp

0x4d5a,	// (0x00099e78) wml_tabs_3_passive_pane_ParamLimits

0x4d5a,	// (0x00099e78) wml_tabs_3_passive_pane

0x4d6b,	// (0x00099e89) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d6b,	// (0x00099e89) wml_tabs_3_passive_pane_cp

0x4d7c,	// (0x00099e9a) tabs_4_active_pane

0x4d84,	// (0x00099ea2) tabs_4_passive_pane

0x4d8c,	// (0x00099eaa) tabs_4_passive_pane_cp

0x4d94,	// (0x00099eb2) tabs_4_passive_pane_cp2

0x42b3,	// (0x000993d1) aid_height_text

0x39f3,	// (0x00098b11) mup_volume_cont_pane_ParamLimits

0x39f3,	// (0x00098b11) mup_volume_cont_pane

0x12cf,	// (0x000963ed) aid_size_cell_pinb

0x12d9,	// (0x000963f7) aid_size_list_pinb

0x4c8e,	// (0x00099dac) mup2_volume_cont_pane_ParamLimits

0x4c8e,	// (0x00099dac) mup2_volume_cont_pane

0x4d9c,	// (0x00099eba) mup2_volume_cont_pane_g1_ParamLimits

0x4d9c,	// (0x00099eba) mup2_volume_cont_pane_g1

0x0ef4,	// (0x00096012) aid_size_cell_touch_ParamLimits

0x0ef4,	// (0x00096012) aid_size_cell_touch

0x11b5,	// (0x000962d3) touch_pane_ParamLimits

0x11b5,	// (0x000962d3) touch_pane

0x11ab,	// (0x000962c9) main_rss2_pane

0xbc46,	// (0x000a0d64) listscroll_rss2_pane

0xbc4f,	// (0x000a0d6d) rss2_navigation_pane

0xbc57,	// (0x000a0d75) list_rss2_pane

0xa49d,	// (0x0009f5bb) scroll_pane_cp22

0xbc5f,	// (0x000a0d7d) rss2_navigation_pane_g1

0xbc68,	// (0x000a0d86) rss2_navigation_pane_g2

0xbc70,	// (0x000a0d8e) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000a47aa) rss2_navigation_pane_g

0xbc78,	// (0x000a0d96) rss2_navigation_pane_t1

0x4dd5,	// (0x00099ef3) rss2_list_single_pane_ParamLimits

0x4dd5,	// (0x00099ef3) rss2_list_single_pane

0xbc86,	// (0x000a0da4) rss2_list_single_pane_t2

0xbc94,	// (0x000a0db2) rss2_list_single_pane_t3_ParamLimits

0xbc94,	// (0x000a0db2) rss2_list_single_pane_t3

0xbcb1,	// (0x000a0dcf) rss2_list_single_pane_t4

0x326b,	// (0x00098389) smil_status_pane_g1

0x4505,	// (0x00099623) main_image2_pane_ParamLimits

0x4505,	// (0x00099623) main_image2_pane

0x49a1,	// (0x00099abf) main_camera2_pane_g9_ParamLimits

0x49a1,	// (0x00099abf) main_camera2_pane_g9

0x49f5,	// (0x00099b13) main_camera2_pane_t5_ParamLimits

0x49f5,	// (0x00099b13) main_camera2_pane_t5

0x4a07,	// (0x00099b25) main_camera2_pane_t6_ParamLimits

0x4a07,	// (0x00099b25) main_camera2_pane_t6

0x4e06,	// (0x00099f24) main_image2_pane_g1_ParamLimits

0x4e06,	// (0x00099f24) main_image2_pane_g1

0x4053,	// (0x00099171) smil2_video_pane_ParamLimits

0x4053,	// (0x00099171) smil2_video_pane

0x0f28,	// (0x00096046) aid_zoom_text_primary_cp

0x1146,	// (0x00096264) popup_preview_fixed_window

0x9d6f,	// (0x0009ee8d) im_reading_pane_g1

0x48eb,	// (0x00099a09) cams2_bc_adjust_pane_cp_ParamLimits

0x48eb,	// (0x00099a09) cams2_bc_adjust_pane_cp

0x4a37,	// (0x00099b55) cams2_bc_adjust_pane_ParamLimits

0x4a37,	// (0x00099b55) cams2_bc_adjust_pane

0xcfe9,	// (0x000a2107) cams2_bc_adjust_pane_g1

0x4e12,	// (0x00099f30) cams2_slider_pane

0x4e1b,	// (0x00099f39) cams2_slider_pane_g1

0x4e24,	// (0x00099f42) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000a47b1) cams2_slider_pane_g

0x13df,	// (0x000964fd) calc_display_pane_ParamLimits

0x13fd,	// (0x0009651b) calc_paper_pane_ParamLimits

0x1419,	// (0x00096537) grid_calc_pane_ParamLimits

0x3547,	// (0x00098665) popup_clock_digital_window_t1_ParamLimits

0xa961,	// (0x0009fa7f) main_image_pane_t1

0x13c5,	// (0x000964e3) aid_size_cell_calc_ParamLimits

0x13c5,	// (0x000964e3) aid_size_cell_calc

0x4536,	// (0x00099654) popup_blid_sat_info2_window_ParamLimits

0x4536,	// (0x00099654) popup_blid_sat_info2_window

0xbcc7,	// (0x000a0de5) aid_size_cell_blid

0xbccf,	// (0x000a0ded) bg_popup_window_pane_cp07

0xbcf2,	// (0x000a0e10) grid_popup_blid_pane

0xbcfc,	// (0x000a0e1a) heading_pane_cp05_ParamLimits

0xbcfc,	// (0x000a0e1a) heading_pane_cp05

0xbdc6,	// (0x000a0ee4) cell_popup_blid_pane_ParamLimits

0xbdc6,	// (0x000a0ee4) cell_popup_blid_pane

0xbdea,	// (0x000a0f08) cell_popup_blid_pane_g1

0xbdf2,	// (0x000a0f10) cell_popup_blid_pane_t1

0x4c54,	// (0x00099d72) mup2_indicator_pane_ParamLimits

0x4c54,	// (0x00099d72) mup2_indicator_pane

0xa6de,	// (0x0009f7fc) mup2_visualizer_osc_pane

0xbba8,	// (0x000a0cc6) mup2_visualizer_spec_pane_ParamLimits

0xbba8,	// (0x000a0cc6) mup2_visualizer_spec_pane

0x4e3e,	// (0x00099f5c) mup2_spec_half_pane

0x4e47,	// (0x00099f65) mup2_spec_half_pane_cp

0x4e51,	// (0x00099f6f) mup2_spec_bar_pane_ParamLimits

0x4e51,	// (0x00099f6f) mup2_spec_bar_pane

0xbb3d,	// (0x000a0c5b) mup2_spec_bar_pane_g1

0xbb47,	// (0x000a0c65) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a4724) mup2_spec_bar_pane_g

0x4e70,	// (0x00099f8e) mup2_osc_middle_pane

0xbb59,	// (0x000a0c77) mup2_visualizer_osc_pane_g1

0xe754,	// (0x000a3872) popup_number_entry_window_t1_ParamLimits

0xe767,	// (0x000a3885) popup_number_entry_window_t2_ParamLimits

0xe779,	// (0x000a3897) popup_number_entry_window_t3_ParamLimits

0x120c,	// (0x0009632a) popup_number_entry_window_t5_ParamLimits

0x120c,	// (0x0009632a) popup_number_entry_window_t5

0xf0c6,	// (0x000a41e4) popup_number_entry_window_t_ParamLimits

0xe78b,	// (0x000a38a9) text_title_cp2_ParamLimits

0x3d53,	// (0x00098e71) aid_hotspot_pointer_text2_pane

0x3de1,	// (0x00098eff) main_viewer_pane_g9_ParamLimits

0x3de1,	// (0x00098eff) main_viewer_pane_g9

0x9fa8,	// (0x0009f0c6) cale_month_pane_t1_ParamLimits

0x9fe5,	// (0x0009f103) bg_cale_pane_ParamLimits

0x9ffd,	// (0x0009f11b) list_cale_pane_ParamLimits

0xa00e,	// (0x0009f12c) listscroll_cale_day_pane_t1

0xa020,	// (0x0009f13e) scroll_pane_cp09_ParamLimits

0x3a2e,	// (0x00098b4c) main_mup_eq_pane_t1_ParamLimits

0x3a2e,	// (0x00098b4c) main_mup_eq_pane_t1

0x3a48,	// (0x00098b66) main_mup_eq_pane_t2_ParamLimits

0x3a48,	// (0x00098b66) main_mup_eq_pane_t2

0x3a62,	// (0x00098b80) main_mup_eq_pane_t3_ParamLimits

0x3a62,	// (0x00098b80) main_mup_eq_pane_t3

0x3a7a,	// (0x00098b98) main_mup_eq_pane_t4_ParamLimits

0x3a7a,	// (0x00098b98) main_mup_eq_pane_t4

0x3a92,	// (0x00098bb0) main_mup_eq_pane_t5_ParamLimits

0x3a92,	// (0x00098bb0) main_mup_eq_pane_t5

0x3aaa,	// (0x00098bc8) main_mup_eq_pane_t6_ParamLimits

0x3aaa,	// (0x00098bc8) main_mup_eq_pane_t6

0x3abe,	// (0x00098bdc) main_mup_eq_pane_t7_ParamLimits

0x3abe,	// (0x00098bdc) main_mup_eq_pane_t7

0x3ad2,	// (0x00098bf0) main_mup_eq_pane_t8_ParamLimits

0x3ad2,	// (0x00098bf0) main_mup_eq_pane_t8

0x3ae8,	// (0x00098c06) main_mup_eq_pane_t9_ParamLimits

0x3ae8,	// (0x00098c06) main_mup_eq_pane_t9

0x3b00,	// (0x00098c1e) main_mup_eq_pane_t10_ParamLimits

0x3b00,	// (0x00098c1e) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a4573) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a4573) main_mup_eq_pane_t

0x3bbd,	// (0x00098cdb) mup_equalizer_pane_cp5_ParamLimits

0x3bd3,	// (0x00098cf1) mup_equalizer_pane_cp6_ParamLimits

0x3beb,	// (0x00098d09) mup_equalizer_pane_cp7_ParamLimits

0x11ab,	// (0x000962c9) main_gallery_pane

0xbb62,	// (0x000a0c80) smil2_volume_pane

0xbb6a,	// (0x000a0c88) smil_status_volume_pane_g1_ParamLimits

0xbb7d,	// (0x000a0c9b) smil_status_volume_pane_g2_ParamLimits

0x475e,	// (0x0009987c) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000a4729) smil_status_volume_pane_g_ParamLimits

0xbccf,	// (0x000a0ded) bg_popup_window_pane_cp07_ParamLimits

0xbcdd,	// (0x000a0dfb) blid_firmament_pane

0x4e79,	// (0x00099f97) aid_size_cell_gallery_ParamLimits

0x4e79,	// (0x00099f97) aid_size_cell_gallery

0x4e87,	// (0x00099fa5) grid_gallery_pane_ParamLimits

0x4e87,	// (0x00099fa5) grid_gallery_pane

0x4e97,	// (0x00099fb5) cell_gallery_pane_ParamLimits

0x4e97,	// (0x00099fb5) cell_gallery_pane

0xbe00,	// (0x000a0f1e) bg_cell_gallery_focus_pane_ParamLimits

0xbe00,	// (0x000a0f1e) bg_cell_gallery_focus_pane

0xbe12,	// (0x000a0f30) cell_gallery_pane_g1_ParamLimits

0xbe12,	// (0x000a0f30) cell_gallery_pane_g1

0x4ee5,	// (0x0009a003) cell_gallery_pane_g2_ParamLimits

0x4ee5,	// (0x0009a003) cell_gallery_pane_g2

0x4ef2,	// (0x0009a010) cell_gallery_pane_g3_ParamLimits

0x4ef2,	// (0x0009a010) cell_gallery_pane_g3

0xbe1e,	// (0x000a0f3c) cell_gallery_pane_g4_ParamLimits

0xbe1e,	// (0x000a0f3c) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000a47d7) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000a47d7) cell_gallery_pane_g

0xbe2a,	// (0x000a0f48) bg_cell_gallery_focus_pane_g1

0xbe32,	// (0x000a0f50) bg_cell_gallery_focus_pane_g2

0xbe3a,	// (0x000a0f58) bg_cell_gallery_focus_pane_g3

0xbe42,	// (0x000a0f60) bg_cell_gallery_focus_pane_g4

0xbe4a,	// (0x000a0f68) bg_cell_gallery_focus_pane_g5

0xbe52,	// (0x000a0f70) bg_cell_gallery_focus_pane_g6

0xbe5a,	// (0x000a0f78) bg_cell_gallery_focus_pane_g7

0xbe62,	// (0x000a0f80) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000a47e0) bg_cell_gallery_focus_pane_g

0xbe6a,	// (0x000a0f88) aid_firma_cardinal

0xbe7e,	// (0x000a0f9c) blid_firmament_pane_t1

0xbe95,	// (0x000a0fb3) blid_firmament_pane_t2

0xbeac,	// (0x000a0fca) blid_firmament_pane_t3

0xbec3,	// (0x000a0fe1) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000a47f1) blid_firmament_pane_t

0xbeef,	// (0x000a100d) blid_sat_info_pane

0xbeff,	// (0x000a101d) blid_sat_info_pane_g1

0xbeff,	// (0x000a101d) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000a47fa) blid_sat_info_pane_g

0xbf09,	// (0x000a1027) blid_sat_info_pane_t1

0xbf17,	// (0x000a1035) smil2_volume_content_pane

0xbf20,	// (0x000a103e) smil2_volume_pane_g1

0xbee6,	// (0x000a1004) smil2_volume_content_pane_g1

0xbf28,	// (0x000a1046) smil2_volume_content_pane_g2

0xbf31,	// (0x000a104f) smil2_volume_content_pane_g3

0xbf3a,	// (0x000a1058) smil2_volume_content_pane_g4

0xbf43,	// (0x000a1061) smil2_volume_content_pane_g5

0xbf4c,	// (0x000a106a) smil2_volume_content_pane_g6

0xbf55,	// (0x000a1073) smil2_volume_content_pane_g7

0xbf5e,	// (0x000a107c) smil2_volume_content_pane_g8

0xbf67,	// (0x000a1085) smil2_volume_content_pane_g9

0xbf70,	// (0x000a108e) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000a47ff) smil2_volume_content_pane_g

0x1a02,	// (0x00096b20) cale_week_day_heading_pane_t1_ParamLimits

0x1a3d,	// (0x00096b5b) cale_week_day_heading_pane_t2_ParamLimits

0x1a78,	// (0x00096b96) cale_week_day_heading_pane_t3_ParamLimits

0x1ab3,	// (0x00096bd1) cale_week_day_heading_pane_t4_ParamLimits

0x1aee,	// (0x00096c0c) cale_week_day_heading_pane_t5_ParamLimits

0x1b29,	// (0x00096c47) cale_week_day_heading_pane_t6_ParamLimits

0x1b64,	// (0x00096c82) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x000a42eb) cale_week_day_heading_pane_t_ParamLimits

0xf013,	// (0x000a4131) bg_cale_side_pane_ParamLimits

0x1b9f,	// (0x00096cbd) cale_week_time_pane_t1_ParamLimits

0x1bb9,	// (0x00096cd7) cale_week_time_pane_t2_ParamLimits

0x1bd3,	// (0x00096cf1) cale_week_time_pane_t3_ParamLimits

0x1bed,	// (0x00096d0b) cale_week_time_pane_t4_ParamLimits

0x1c07,	// (0x00096d25) cale_week_time_pane_t5_ParamLimits

0x1c21,	// (0x00096d3f) cale_week_time_pane_t6_ParamLimits

0x1c41,	// (0x00096d5f) cale_week_time_pane_t7_ParamLimits

0x1c63,	// (0x00096d81) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x000a42fa) cale_week_time_pane_t_ParamLimits

0x1c87,	// (0x00096da5) cell_cale_week_pane_g2_ParamLimits

0xf013,	// (0x000a4131) bg_cale_side_pane_cp01_ParamLimits

0x3042,	// (0x00098160) cale_month_week_pane_t1_ParamLimits

0x305b,	// (0x00098179) cale_month_week_pane_t2_ParamLimits

0x3074,	// (0x00098192) cale_month_week_pane_t3_ParamLimits

0x308d,	// (0x000981ab) cale_month_week_pane_t4_ParamLimits

0x30a6,	// (0x000981c4) cale_month_week_pane_t5_ParamLimits

0x30c7,	// (0x000981e5) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a43d3) cale_month_week_pane_t_ParamLimits

0x3234,	// (0x00098352) cell_cale_month_pane_g1_ParamLimits

0x11ab,	// (0x000962c9) main_cale_event_viewer_pane

0xe72a,	// (0x000a3848) listscroll_cale_event_viewer_pane

0xbf79,	// (0x000a1097) list_cale_ev_pane

0xbf81,	// (0x000a109f) scroll_pane_cp023

0xbf8d,	// (0x000a10ab) field_cale_ev_pane_ParamLimits

0xbf8d,	// (0x000a10ab) field_cale_ev_pane

0xbfab,	// (0x000a10c9) field_cale_ev_content_pane_ParamLimits

0xbfab,	// (0x000a10c9) field_cale_ev_content_pane

0xbfb7,	// (0x000a10d5) field_cale_ev_pane_g1_ParamLimits

0xbfb7,	// (0x000a10d5) field_cale_ev_pane_g1

0xbfc3,	// (0x000a10e1) field_cale_ev_pane_g2_ParamLimits

0xbfc3,	// (0x000a10e1) field_cale_ev_pane_g2

0xbfdb,	// (0x000a10f9) field_cale_ev_pane_g3_ParamLimits

0xbfdb,	// (0x000a10f9) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000a4814) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000a4814) field_cale_ev_pane_g

0xbff3,	// (0x000a1111) field_cale_ev_pane_t1_ParamLimits

0xbff3,	// (0x000a1111) field_cale_ev_pane_t1

0xc00a,	// (0x000a1128) field_cale_ev_content_pane_t1_ParamLimits

0xc00a,	// (0x000a1128) field_cale_ev_content_pane_t1

0xa847,	// (0x0009f965) bg_button_pane_cp01

0x178f,	// (0x000968ad) listscroll_cale_week_pane_ParamLimits

0xefbd,	// (0x000a40db) popup_toolbar_window_cp01

0xefe4,	// (0x000a4102) listscroll_cale_week_pane_t1_ParamLimits

0x178f,	// (0x000968ad) listscroll_cale_day_pane_ParamLimits

0xefbd,	// (0x000a40db) popup_toolbar_window_cp02

0xa00e,	// (0x0009f12c) listscroll_cale_day_pane_t1_ParamLimits

0x178f,	// (0x000968ad) main_cale_month_pane_ParamLimits

0x463d,	// (0x0009975b) popup_toolbar_window_cp03_ParamLimits

0x463d,	// (0x0009975b) popup_toolbar_window_cp03

0x3f69,	// (0x00099087) main_image_pane_g2_ParamLimits

0x3f69,	// (0x00099087) main_image_pane_g2

0x3f75,	// (0x00099093) main_image_pane_g3_ParamLimits

0x3f75,	// (0x00099093) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000a4605) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000a4605) main_image_pane_g

0xa961,	// (0x0009fa7f) main_image_pane_t1_ParamLimits

0x3f81,	// (0x0009909f) main_image_pane_t2_ParamLimits

0x3f81,	// (0x0009909f) main_image_pane_t2

0x3f93,	// (0x000990b1) main_image_pane_t3_ParamLimits

0x3f93,	// (0x000990b1) main_image_pane_t3

0x3fa5,	// (0x000990c3) main_image_pane_t4_ParamLimits

0x3fa5,	// (0x000990c3) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000a460c) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000a460c) main_image_pane_t

0x3fb7,	// (0x000990d5) popup_image_details_window_cp01

0x3fc1,	// (0x000990df) popup_toobar_trans_pane_cp01_ParamLimits

0x3fc1,	// (0x000990df) popup_toobar_trans_pane_cp01

0x458d,	// (0x000996ab) popup_image_details_window_ParamLimits

0x458d,	// (0x000996ab) popup_image_details_window

0x459b,	// (0x000996b9) popup_image_focus_window

0x48dd,	// (0x000999fb) camera2_autofocus_pane_ParamLimits

0x48dd,	// (0x000999fb) camera2_autofocus_pane

0xe72a,	// (0x000a3848) bg_popup_sub_pane_cp06

0xc028,	// (0x000a1146) popup_image_focus_window_g1

0xc030,	// (0x000a114e) popup_image_focus_window_g2

0xc038,	// (0x000a1156) popup_image_focus_window_g3

0xc040,	// (0x000a115e) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000a481b) popup_image_focus_window_g

0xc048,	// (0x000a1166) popup_image_focus_window_t1

0xc056,	// (0x000a1174) popup_image_focus_window_t2

0xc066,	// (0x000a1184) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000a4824) popup_image_focus_window_t

0xc074,	// (0x000a1192) camera2_autofocus_pane_g1

0xe873,	// (0x000a3991) bg_tb_trans_pane_cp01

0xc082,	// (0x000a11a0) popup_image_details_window_g1

0xc095,	// (0x000a11b3) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000a4836) popup_image_details_window_g

0xc0be,	// (0x000a11dc) popup_image_details_window_t1

0xc0d0,	// (0x000a11ee) popup_image_details_window_t2

0xc0e9,	// (0x000a1207) popup_image_details_window_t3

0xc0fd,	// (0x000a121b) popup_image_details_window_t4

0xc118,	// (0x000a1236) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000a483d) popup_image_details_window_t

0xee94,	// (0x000a3fb2) bg_calc_paper_pane_ParamLimits

0x11ab,	// (0x000962c9) grid_highlight_pane_cp013

0x1516,	// (0x00096634) list_calc_pane_ParamLimits

0x1528,	// (0x00096646) scroll_pane_cp024

0xeea8,	// (0x000a3fc6) bg_calc_display_pane_ParamLimits

0x1530,	// (0x0009664e) calc_display_pane_t1_ParamLimits

0x1545,	// (0x00096663) calc_display_pane_t2_ParamLimits

0x155a,	// (0x00096678) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x000a426b) calc_display_pane_t_ParamLimits

0x1636,	// (0x00096754) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x000a4288) cell_calc_pane_g

0x163f,	// (0x0009675d) cell_calc_pane_t1

0xef07,	// (0x000a4025) grid_highlight_pane_cp02_ParamLimits

0xef1d,	// (0x000a403b) toolbar_button_pane_cp01_ParamLimits

0xef1d,	// (0x000a403b) toolbar_button_pane_cp01

0xa9a6,	// (0x0009fac4) temp_image_control_pane_ParamLimits

0xa9a6,	// (0x0009fac4) temp_image_control_pane

0x4505,	// (0x00099623) main_mp3_pane

0xc132,	// (0x000a1250) temp_image_control_pane_g1_ParamLimits

0xc132,	// (0x000a1250) temp_image_control_pane_g1

0xc140,	// (0x000a125e) temp_image_control_pane_g2_ParamLimits

0xc140,	// (0x000a125e) temp_image_control_pane_g2

0xc152,	// (0x000a1270) temp_image_control_pane_g3_ParamLimits

0xc152,	// (0x000a1270) temp_image_control_pane_g3

0x4f2f,	// (0x0009a04d) temp_image_control_pane_g4_ParamLimits

0x4f2f,	// (0x0009a04d) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000a4848) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000a4848) temp_image_control_pane_g

0xc132,	// (0x000a1250) main_mp3_pane_g1

0x4f40,	// (0x0009a05e) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000a4851) main_mp3_pane_g

0xc195,	// (0x000a12b3) main_mp3_pane_t1

0xf06e,	// (0x000a418c) main_camera_pane_g8_ParamLimits

0xf06e,	// (0x000a418c) main_camera_pane_g8

0x1f38,	// (0x00097056) main_video_pane_g7_ParamLimits

0x1f38,	// (0x00097056) main_video_pane_g7

0x4a25,	// (0x00099b43) main_camera2_pane_t7_ParamLimits

0x4a25,	// (0x00099b43) main_camera2_pane_t7

0x9dc6,	// (0x0009eee4) scroll_pane_cp025_ParamLimits

0x9dc6,	// (0x0009eee4) scroll_pane_cp025

0x9dda,	// (0x0009eef8) scroll_pane_cp026_ParamLimits

0x9dda,	// (0x0009eef8) scroll_pane_cp026

0x9de9,	// (0x0009ef07) wml_content_pane_ParamLimits

0x11ab,	// (0x000962c9) main_touch_calib_pane

0x4fe4,	// (0x0009a102) main_touch_calib_pane_g1

0x4ff0,	// (0x0009a10e) main_touch_calib_pane_g2

0x4ffc,	// (0x0009a11a) main_touch_calib_pane_g3

0x5008,	// (0x0009a126) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000a486f) main_touch_calib_pane_g

0x5014,	// (0x0009a132) main_touch_calib_pane_t1

0x502d,	// (0x0009a14b) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000a4878) main_touch_calib_pane_t

0xa579,	// (0x0009f697) mup_progress_pane_cp02

0xa5ae,	// (0x0009f6cc) navi_pane_g1

0xa669,	// (0x0009f787) navi_pane_mp_t3

0x4505,	// (0x00099623) main_mp3_pane_ParamLimits

0x467a,	// (0x00099798) navi_pane_ParamLimits

0xc132,	// (0x000a1250) main_mp3_pane_g1_ParamLimits

0x4f40,	// (0x0009a05e) main_mp3_pane_g2_ParamLimits

0x4f4c,	// (0x0009a06a) main_mp3_pane_g3_ParamLimits

0x4f4c,	// (0x0009a06a) main_mp3_pane_g3

0x4f58,	// (0x0009a076) main_mp3_pane_g4_ParamLimits

0x4f58,	// (0x0009a076) main_mp3_pane_g4

0xc162,	// (0x000a1280) main_mp3_pane_g5_ParamLimits

0xc162,	// (0x000a1280) main_mp3_pane_g5

0xc170,	// (0x000a128e) main_mp3_pane_g6_ParamLimits

0xc170,	// (0x000a128e) main_mp3_pane_g6

0xc17d,	// (0x000a129b) main_mp3_pane_g7_ParamLimits

0xc17d,	// (0x000a129b) main_mp3_pane_g7

0xc189,	// (0x000a12a7) main_mp3_pane_g8_ParamLimits

0xc189,	// (0x000a12a7) main_mp3_pane_g8

0xf733,	// (0x000a4851) main_mp3_pane_g_ParamLimits

0x4f64,	// (0x0009a082) main_mp3_pane_t2

0x4f74,	// (0x0009a092) main_mp3_pane_t3

0xc1a3,	// (0x000a12c1) main_mp3_pane_t4

0xc1b1,	// (0x000a12cf) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000a4862) main_mp3_pane_t

0xc1bf,	// (0x000a12dd) mup_progress_pane_cp01

0x0f28,	// (0x00096046) aid_zoom_text_secondary2

0xbf79,	// (0x000a1097) list_cale_ev2_pane

0xbf81,	// (0x000a109f) scroll_pane_cp023_ParamLimits

0x5088,	// (0x0009a1a6) field_cale_ev2_pane_ParamLimits

0x5088,	// (0x0009a1a6) field_cale_ev2_pane

0x50b1,	// (0x0009a1cf) field_cale_ev2_pane_g1_ParamLimits

0x50b1,	// (0x0009a1cf) field_cale_ev2_pane_g1

0x50bd,	// (0x0009a1db) field_cale_ev2_pane_g2_ParamLimits

0x50bd,	// (0x0009a1db) field_cale_ev2_pane_g2

0x50d5,	// (0x0009a1f3) field_cale_ev2_pane_g3_ParamLimits

0x50d5,	// (0x0009a1f3) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000a4883) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000a4883) field_cale_ev2_pane_g

0xc1d3,	// (0x000a12f1) field_cale_ev2_pane_t1_ParamLimits

0xc1d3,	// (0x000a12f1) field_cale_ev2_pane_t1

0xc1ea,	// (0x000a1308) field_cale_ev2_pane_t2_ParamLimits

0xc1ea,	// (0x000a1308) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000a488c) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000a488c) field_cale_ev2_pane_t

0x3e49,	// (0x00098f67) main_postcard_pane_g5_ParamLimits

0x3e49,	// (0x00098f67) main_postcard_pane_g5

0x3e57,	// (0x00098f75) main_postcard_pane_g6_ParamLimits

0x3e57,	// (0x00098f75) main_postcard_pane_g6

0x1d82,	// (0x00096ea0) camera2_autofocus_pane_cp_ParamLimits

0x1d82,	// (0x00096ea0) camera2_autofocus_pane_cp

0x4505,	// (0x00099623) main_mup3_pane

0x50ed,	// (0x0009a20b) main_mup3_pane_g1_ParamLimits

0x50ed,	// (0x0009a20b) main_mup3_pane_g1

0x510e,	// (0x0009a22c) main_mup3_pane_g2_ParamLimits

0x510e,	// (0x0009a22c) main_mup3_pane_g2

0x5186,	// (0x0009a2a4) main_mup3_pane_g3_ParamLimits

0x5186,	// (0x0009a2a4) main_mup3_pane_g3

0x51c9,	// (0x0009a2e7) main_mup3_pane_g4_ParamLimits

0x51c9,	// (0x0009a2e7) main_mup3_pane_g4

0x520c,	// (0x0009a32a) main_mup3_pane_g5_ParamLimits

0x520c,	// (0x0009a32a) main_mup3_pane_g5

0x524f,	// (0x0009a36d) main_mup3_pane_g6_ParamLimits

0x524f,	// (0x0009a36d) main_mup3_pane_g6

0xc21f,	// (0x000a133d) main_mup3_pane_g7_ParamLimits

0xc21f,	// (0x000a133d) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000a489c) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000a489c) main_mup3_pane_g

0x52c5,	// (0x0009a3e3) main_mup3_pane_t1_ParamLimits

0x52c5,	// (0x0009a3e3) main_mup3_pane_t1

0x5334,	// (0x0009a452) main_mup3_pane_t2_ParamLimits

0x5334,	// (0x0009a452) main_mup3_pane_t2

0x53fd,	// (0x0009a51b) main_mup3_pane_t4_ParamLimits

0x53fd,	// (0x0009a51b) main_mup3_pane_t4

0x544b,	// (0x0009a569) main_mup3_pane_t5_ParamLimits

0x544b,	// (0x0009a569) main_mup3_pane_t5

0x54fb,	// (0x0009a619) main_mup3_pane_t6_ParamLimits

0x54fb,	// (0x0009a619) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000a48ad) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000a48ad) main_mup3_pane_t

0x55a7,	// (0x0009a6c5) mup3_progress_pane_ParamLimits

0x55a7,	// (0x0009a6c5) mup3_progress_pane

0x5625,	// (0x0009a743) popup_mup3_control_window_ParamLimits

0x5625,	// (0x0009a743) popup_mup3_control_window

0xc22d,	// (0x000a134b) popup_mup3_text_window

0x563e,	// (0x0009a75c) mup3_progress_pane_t1

0x565d,	// (0x0009a77b) mup3_progress_pane_t2

0xc235,	// (0x000a1353) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000a48ba) mup3_progress_pane_t

0xc252,	// (0x000a1370) mup_progress_pane_cp03

0xe72a,	// (0x000a3848) bg_tb_trans_pane_cp04

0x567c,	// (0x0009a79a) mup3_volume_pane

0x5684,	// (0x0009a7a2) popup_mup3_control_window_g1

0x568d,	// (0x0009a7ab) mup3_volume_pane_g1

0x5696,	// (0x0009a7b4) mup3_volume_pane_g2

0x569f,	// (0x0009a7bd) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000a48c1) mup3_volume_pane_g

0xe72a,	// (0x000a3848) bg_tb_trans_pane_cp03

0xc262,	// (0x000a1380) popup_mup3_text_window_g1

0xc26a,	// (0x000a1388) popup_mup3_text_window_t1

0xeef0,	// (0x000a400e) list_calc_item_pane_g1_ParamLimits

0xbc3d,	// (0x000a0d5b) mup_volume_pane_cp_g1

0x5046,	// (0x0009a164) main_touch_calib_pane_t3

0x505c,	// (0x0009a17a) main_touch_calib_pane_t4

0x5072,	// (0x0009a190) main_touch_calib_pane_t5

0x0ee0,	// (0x00095ffe) aid_cell_size_toolbar2

0x0ee8,	// (0x00096006) aid_popup3_width_pane

0x0dfd,	// (0x00095f1b) aid_zoom_text_msg_primary

0x1d4f,	// (0x00096e6d) vorec_t7

0xeeb4,	// (0x000a3fd2) bg_calc_paper_pane_g1_ParamLimits

0xeec0,	// (0x000a3fde) bg_calc_paper_pane_g2_ParamLimits

0xeecc,	// (0x000a3fea) bg_calc_paper_pane_g3_ParamLimits

0xeed8,	// (0x000a3ff6) bg_calc_paper_pane_g4_ParamLimits

0xeee4,	// (0x000a4002) bg_calc_paper_pane_g5_ParamLimits

0x1599,	// (0x000966b7) bg_calc_paper_pane_g6_ParamLimits

0x15aa,	// (0x000966c8) bg_calc_paper_pane_g7_ParamLimits

0x15bb,	// (0x000966d9) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x000a4272) bg_calc_paper_pane_g_ParamLimits

0x15cc,	// (0x000966ea) calc_bg_paper_pane_g9_ParamLimits

0x1e69,	// (0x00096f87) image_qvga_pane_ParamLimits

0x1e69,	// (0x00096f87) image_qvga_pane

0xede3,	// (0x000a3f01) bg_popup_sub_pane_cp04_ParamLimits

0xa8dd,	// (0x0009f9fb) popup_mup_playback_window_g1_ParamLimits

0xa8e9,	// (0x0009fa07) popup_mup_playback_window_t1_ParamLimits

0xa8fe,	// (0x0009fa1c) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000a4600) popup_mup_playback_window_t_ParamLimits

0x4b54,	// (0x00099c72) main_mup2_pane_g3_ParamLimits

0x4b54,	// (0x00099c72) main_mup2_pane_g3

0x222e,	// (0x0009734c) popup_toolbar_window_cp04

0xace0,	// (0x0009fdfe) popup_call2_audio_second_window_g3_ParamLimits

0xace0,	// (0x0009fdfe) popup_call2_audio_second_window_g3

0xb0ea,	// (0x000a0208) popup_call2_audio_first_window_g4_ParamLimits

0xb0ea,	// (0x000a0208) popup_call2_audio_first_window_g4

0xb769,	// (0x000a0887) popup_call2_audio_in_window_g4_ParamLimits

0xb769,	// (0x000a0887) popup_call2_audio_in_window_g4

0x3f5c,	// (0x0009907a) aid_area_sk_bg_cut_ParamLimits

0x3f5c,	// (0x0009907a) aid_area_sk_bg_cut

0xa913,	// (0x0009fa31) aid_area_sk_bg_cut_2_ParamLimits

0xa913,	// (0x0009fa31) aid_area_sk_bg_cut_2

0x4ed5,	// (0x00099ff3) aid_placing_details_win

0x4edd,	// (0x00099ffb) aid_placing_details_win_2

0xc074,	// (0x000a1192) camera2_autofocus_pane_g1_ParamLimits

0x1137,	// (0x00096255) popup_fixed_preview_cale_window_ParamLimits

0x1137,	// (0x00096255) popup_fixed_preview_cale_window

0xa6ef,	// (0x0009f80d) navi_slider_pane_g3

0xa6f8,	// (0x0009f816) navi_slider_pane_g4

0xa701,	// (0x0009f81f) navi_slider_pane_g5

0xa6ef,	// (0x0009f80d) navi_slider_pane_g6

0x37c2,	// (0x000988e0) navi_slider_pane_g7

0xa814,	// (0x0009f932) mup_scale_pane_g3

0xa81d,	// (0x0009f93b) mup_scale_pane_g4

0xa826,	// (0x0009f944) mup_scale_pane_g5

0x3c03,	// (0x00098d21) mup_scale_pane_g6

0x3c0c,	// (0x00098d2a) mup_scale_pane_g7

0xa6ef,	// (0x0009f80d) cams2_slider_pane_g3

0xbcbf,	// (0x000a0ddd) cams2_slider_pane_g4

0x4e2d,	// (0x00099f4b) cams2_slider_pane_g5

0xa6ef,	// (0x0009f80d) cams2_slider_pane_g6

0x4e35,	// (0x00099f53) cams2_slider_pane_g7

0xbeff,	// (0x000a101d) camera2_autofocus_pane_cp_g1

0xbad6,	// (0x000a0bf4) bg_popup_preview_window_pane_cp02_ParamLimits

0xbad6,	// (0x000a0bf4) bg_popup_preview_window_pane_cp02

0xc278,	// (0x000a1396) list_fp_cale_pane_ParamLimits

0xc278,	// (0x000a1396) list_fp_cale_pane

0xc284,	// (0x000a13a2) popup_fixed_preview_cale_window_t1_ParamLimits

0xc284,	// (0x000a13a2) popup_fixed_preview_cale_window_t1

0x56a8,	// (0x0009a7c6) popup_fixed_preview_cale_window_t2_ParamLimits

0x56a8,	// (0x0009a7c6) popup_fixed_preview_cale_window_t2

0x56bd,	// (0x0009a7db) popup_fixed_preview_cale_window_t3_ParamLimits

0x56bd,	// (0x0009a7db) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000a48c8) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000a48c8) popup_fixed_preview_cale_window_t

0x56d2,	// (0x0009a7f0) list_single_fp_cale_pane_ParamLimits

0x56d2,	// (0x0009a7f0) list_single_fp_cale_pane

0xc2a2,	// (0x000a13c0) list_single_fp_cale_pane_g1_ParamLimits

0xc2a2,	// (0x000a13c0) list_single_fp_cale_pane_g1

0xc2ae,	// (0x000a13cc) list_single_fp_cale_pane_g2_ParamLimits

0xc2ae,	// (0x000a13cc) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000a48cf) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000a48cf) list_single_fp_cale_pane_g

0xc2c7,	// (0x000a13e5) list_single_fp_cale_pane_t1_ParamLimits

0xc2c7,	// (0x000a13e5) list_single_fp_cale_pane_t1

0xc2d9,	// (0x000a13f7) list_single_fp_cale_pane_t2_ParamLimits

0xc2d9,	// (0x000a13f7) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000a48d6) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000a48d6) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11ab,	// (0x000962c9) main_dialer_pane

0x56e5,	// (0x0009a803) aid_cell_size_keypad

0x56ef,	// (0x0009a80d) dialer_ne_pane

0x56f9,	// (0x0009a817) grid_dialer_command_1_pane

0x5701,	// (0x0009a81f) grid_dialer_command_2_pane

0x5709,	// (0x0009a827) grid_dialer_keypad_pane

0x571b,	// (0x0009a839) bg_popup_call_pane_cp06_ParamLimits

0x571b,	// (0x0009a839) bg_popup_call_pane_cp06

0x5727,	// (0x0009a845) dialer_ne_clear_pane_ParamLimits

0x5727,	// (0x0009a845) dialer_ne_clear_pane

0xc30c,	// (0x000a142a) dialer_ne_pane_g1

0xc314,	// (0x000a1432) dialer_ne_pane_t1_ParamLimits

0xc314,	// (0x000a1432) dialer_ne_pane_t1

0x5733,	// (0x0009a851) dialer_ne_pane_t2_ParamLimits

0x5733,	// (0x0009a851) dialer_ne_pane_t2

0x5750,	// (0x0009a86e) dialer_ne_pane_t3_ParamLimits

0x5750,	// (0x0009a86e) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000a48db) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000a48db) dialer_ne_pane_t

0x5774,	// (0x0009a892) dialer_ne_pane_t3_copy1_ParamLimits

0x5774,	// (0x0009a892) dialer_ne_pane_t3_copy1

0x5798,	// (0x0009a8b6) cell_dialer_keypad_pane_ParamLimits

0x5798,	// (0x0009a8b6) cell_dialer_keypad_pane

0x57af,	// (0x0009a8cd) cell_dialer_command_1_pane_ParamLimits

0x57af,	// (0x0009a8cd) cell_dialer_command_1_pane

0x57c5,	// (0x0009a8e3) cell_dialer_command_2_pane_ParamLimits

0x57c5,	// (0x0009a8e3) cell_dialer_command_2_pane

0xc326,	// (0x000a1444) bg_button_pane_cp02_ParamLimits

0xc326,	// (0x000a1444) bg_button_pane_cp02

0x57d4,	// (0x0009a8f2) cell_dialer_keypad_pane_g1_ParamLimits

0x57d4,	// (0x0009a8f2) cell_dialer_keypad_pane_g1

0xc326,	// (0x000a1444) bg_button_pane_cp03_ParamLimits

0xc326,	// (0x000a1444) bg_button_pane_cp03

0x57e9,	// (0x0009a907) cell_dialer_command_1_pane_g1_ParamLimits

0x57e9,	// (0x0009a907) cell_dialer_command_1_pane_g1

0xc332,	// (0x000a1450) bg_button_pane_cp04

0x57fd,	// (0x0009a91b) cell_dialer_command_2_pane_g1

0xa6de,	// (0x0009f7fc) bg_button_pane_cp06

0xc33a,	// (0x000a1458) dialer_ne_clear_pane_g1

0xa5ba,	// (0x0009f6d8) navi_pane_g2

0xa5e8,	// (0x0009f706) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a4503) navi_pane_g

0xa677,	// (0x0009f795) navi_pane_mv_g2

0xa69e,	// (0x0009f7bc) navi_pane_mv_g5

0x378d,	// (0x000988ab) navi_pane_mv_t1

0xeea8,	// (0x000a3fc6) main_clock2_pane

0x583b,	// (0x0009a959) main_clock2_list_pane_ParamLimits

0x583b,	// (0x0009a959) main_clock2_list_pane

0x5863,	// (0x0009a981) main_clock2_pane_t1_ParamLimits

0x5863,	// (0x0009a981) main_clock2_pane_t1

0x5885,	// (0x0009a9a3) main_clock2_pane_t2_ParamLimits

0x5885,	// (0x0009a9a3) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000a48e7) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000a48e7) main_clock2_pane_t

0x58e0,	// (0x0009a9fe) popup_clock_analogue_window_cp03_ParamLimits

0x58e0,	// (0x0009a9fe) popup_clock_analogue_window_cp03

0x58fe,	// (0x0009aa1c) popup_clock_digital_window_cp02_ParamLimits

0x58fe,	// (0x0009aa1c) popup_clock_digital_window_cp02

0x596b,	// (0x0009aa89) main_clock2_list_single_pane_ParamLimits

0x596b,	// (0x0009aa89) main_clock2_list_single_pane

0xa6de,	// (0x0009f7fc) list_highlight_pane_cp05

0xc378,	// (0x000a1496) main_clock2_list_single_pane_t1

0x222e,	// (0x0009734c) popup_toolbar_window_cp04_ParamLimits

0x4eff,	// (0x0009a01d) camera2_autofocus_pane_g2_ParamLimits

0x4eff,	// (0x0009a01d) camera2_autofocus_pane_g2

0x4f0b,	// (0x0009a029) camera2_autofocus_pane_g3_ParamLimits

0x4f0b,	// (0x0009a029) camera2_autofocus_pane_g3

0x4f17,	// (0x0009a035) camera2_autofocus_pane_g4_ParamLimits

0x4f17,	// (0x0009a035) camera2_autofocus_pane_g4

0x4f23,	// (0x0009a041) camera2_autofocus_pane_g5_ParamLimits

0x4f23,	// (0x0009a041) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000a482b) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000a482b) camera2_autofocus_pane_g

0xc1ff,	// (0x000a131d) camera2_autofocus_pane_cp_g2

0xc207,	// (0x000a1325) camera2_autofocus_pane_cp_g3

0xc20f,	// (0x000a132d) camera2_autofocus_pane_cp_g4

0xc217,	// (0x000a1335) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000a4891) camera2_autofocus_pane_cp_g

0x5713,	// (0x0009a831) popup_dialer_spcha_window

0xe72a,	// (0x000a3848) bg_popup_sub_pane_cp07

0xc386,	// (0x000a14a4) list_spcha_pane

0xc38e,	// (0x000a14ac) list_single_spcha_pane_ParamLimits

0xc38e,	// (0x000a14ac) list_single_spcha_pane

0xe72a,	// (0x000a3848) list_highlight_pane_cp06

0xc39f,	// (0x000a14bd) list_single_spcha_pane_t1

0xb513,	// (0x000a0631) popup_call2_audio_out_window_g4_ParamLimits

0xb513,	// (0x000a0631) popup_call2_audio_out_window_g4

0x11ab,	// (0x000962c9) main_imed2_pane

0x45a3,	// (0x000996c1) popup_imed_adjust2_window

0x45b6,	// (0x000996d4) popup_imed_trans_window_ParamLimits

0x45b6,	// (0x000996d4) popup_imed_trans_window

0xbd28,	// (0x000a0e46) popup_blid_sat_info2_window_t1

0xbd36,	// (0x000a0e54) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000a47c0) popup_blid_sat_info2_window_t

0x5a15,	// (0x0009ab33) aid_size_cell_colour_35

0x5a2f,	// (0x0009ab4d) aid_size_cell_colour_112

0x5a46,	// (0x0009ab64) aid_size_cell_effect

0xe873,	// (0x000a3991) bg_tb_trans_pane_cp02

0xb9e1,	// (0x000a0aff) heading_imed_pane

0x5a60,	// (0x0009ab7e) listscroll_imed_pane

0xc3ad,	// (0x000a14cb) heading_imed_pane_g1

0xc3b5,	// (0x000a14d3) heading_imed_pane_t1

0xc3c3,	// (0x000a14e1) grid_imed_colour_35_pane_ParamLimits

0xc3c3,	// (0x000a14e1) grid_imed_colour_35_pane

0x5a6c,	// (0x0009ab8a) grid_imed_effect_pane

0xc3da,	// (0x000a14f8) list_imed_aspect_pane

0x5a7c,	// (0x0009ab9a) scroll_pane_cp027_ParamLimits

0x5a7c,	// (0x0009ab9a) scroll_pane_cp027

0x5a88,	// (0x0009aba6) cell_imed_effect_pane_ParamLimits

0x5a88,	// (0x0009aba6) cell_imed_effect_pane

0xc3e2,	// (0x000a1500) cell_imed_colour_pane_ParamLimits

0xc3e2,	// (0x000a1500) cell_imed_colour_pane

0xc424,	// (0x000a1542) cell_imed_colour_pane_g1_ParamLimits

0xc424,	// (0x000a1542) cell_imed_colour_pane_g1

0xc435,	// (0x000a1553) hgihlgiht_grid_pane_cp016_ParamLimits

0xc435,	// (0x000a1553) hgihlgiht_grid_pane_cp016

0x5aa0,	// (0x0009abbe) cell_imed_effect_pane_g1

0x5aa8,	// (0x0009abc6) grid_highlight_pane_cp017

0xc446,	// (0x000a1564) list_imed_single_pane_ParamLimits

0xc446,	// (0x000a1564) list_imed_single_pane

0xe72a,	// (0x000a3848) list_highlight_pane_cp07

0xc45b,	// (0x000a1579) list_imed_aspect_pane_comp1_t1

0xbae2,	// (0x000a0c00) bg_tb_trans_pane_cp05

0xc47d,	// (0x000a159b) popup_imed_adjust2_window_g1

0xc4a4,	// (0x000a15c2) popup_imed_adjust2_window_t1

0xc4bc,	// (0x000a15da) slider_imed_adjust_pane

0xc4d0,	// (0x000a15ee) slider_imed_adjust_pane_g1

0xc4e0,	// (0x000a15fe) slider_imed_adjust_pane_g2

0xc4f0,	// (0x000a160e) slider_imed_adjust_pane_g3

0xc501,	// (0x000a161f) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000a4904) slider_imed_adjust_pane_g

0x5ab1,	// (0x0009abcf) aid_size_cell_clipart2

0x5abd,	// (0x0009abdb) grid_imed_clipart_pane

0xc512,	// (0x000a1630) scroll_pane_cp031

0x5ac7,	// (0x0009abe5) cell_imed_clipart_pane_ParamLimits

0x5ac7,	// (0x0009abe5) cell_imed_clipart_pane

0x5ae9,	// (0x0009ac07) cell_imed_clipart_pane_g1

0xe72a,	// (0x000a3848) grid_highlight_pane_cp014

0x5847,	// (0x0009a965) main_clock2_pane_g1_ParamLimits

0x5847,	// (0x0009a965) main_clock2_pane_g1

0x5916,	// (0x0009aa34) aid_call2_pane_cp10

0x5928,	// (0x0009aa46) aid_call_pane_cp10

0xa51b,	// (0x0009f639) popup_clock_analogue_window_cp10_g1

0xa51b,	// (0x0009f639) popup_clock_analogue_window_cp10_g2

0x593a,	// (0x0009aa58) popup_clock_analogue_window_cp10_g3

0x593a,	// (0x0009aa58) popup_clock_analogue_window_cp10_g4

0xa51b,	// (0x0009f639) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000a48f2) popup_clock_analogue_window_cp10_g

0x594c,	// (0x0009aa6a) popup_clock_analogue_window_cp10_t1

0x597d,	// (0x0009aa9b) clock_digital_number_pane_cp10_ParamLimits

0x597d,	// (0x0009aa9b) clock_digital_number_pane_cp10

0x5995,	// (0x0009aab3) clock_digital_number_pane_cp11_ParamLimits

0x5995,	// (0x0009aab3) clock_digital_number_pane_cp11

0x59ad,	// (0x0009aacb) clock_digital_number_pane_cp12_ParamLimits

0x59ad,	// (0x0009aacb) clock_digital_number_pane_cp12

0x59c5,	// (0x0009aae3) clock_digital_number_pane_cp13_ParamLimits

0x59c5,	// (0x0009aae3) clock_digital_number_pane_cp13

0x59dd,	// (0x0009aafb) clock_digital_separator_pane_cp10_ParamLimits

0x59dd,	// (0x0009aafb) clock_digital_separator_pane_cp10

0x59f5,	// (0x0009ab13) popup_clock_digital_window_cp02_t1_ParamLimits

0x59f5,	// (0x0009ab13) popup_clock_digital_window_cp02_t1

0xeddb,	// (0x000a3ef9) clock_digital_number_pane_cp10_g1

0xeddb,	// (0x000a3ef9) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000a490d) clock_digital_number_pane_cp10_g

0xeddb,	// (0x000a3ef9) clock_digital_separator_pane_cp10_g1

0xeddb,	// (0x000a3ef9) clock_digital_separator_pane_g2_cp10

0xa6a6,	// (0x0009f7c4) navi_pane_vded_g4

0xa6af,	// (0x0009f7cd) navi_pane_vded_g5

0xa6b8,	// (0x0009f7d6) navi_pane_vded_t1

0x11ab,	// (0x000962c9) main_vded_pane

0x5af2,	// (0x0009ac10) main_vded_pane_g1

0x5afe,	// (0x0009ac1c) main_vded_pane_g2

0x5b08,	// (0x0009ac26) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000a4912) main_vded_pane_g

0x5b12,	// (0x0009ac30) main_vded_pane_t1

0x5b20,	// (0x0009ac3e) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000a4919) main_vded_pane_t

0x5b2e,	// (0x0009ac4c) vded_slider_pane

0x5b38,	// (0x0009ac56) vded_video_pane

0xc51a,	// (0x000a1638) vded_video_pane_g1

0x5b42,	// (0x0009ac60) vded_video_pane_g2

0xbeff,	// (0x000a101d) vded_video_pane_g3

0x0002,

0xf800,	// (0x000a491e) vded_video_pane_g

0xc524,	// (0x000a1642) vded_slider_pane_g1

0xbc3d,	// (0x000a0d5b) vded_slider_pane_g2

0xc52d,	// (0x000a164b) vded_slider_pane_g3

0xc536,	// (0x000a1654) vded_slider_pane_g4

0xc53f,	// (0x000a165d) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000a4925) vded_slider_pane_g

0x5617,	// (0x0009a735) mup3_rocker_pane_ParamLimits

0x5617,	// (0x0009a735) mup3_rocker_pane

0x5b4b,	// (0x0009ac69) mup3_control_keys_pane_g1

0x5b53,	// (0x0009ac71) mup3_control_keys_pane_g2

0x5b5b,	// (0x0009ac79) mup3_control_keys_pane_g3

0x5b63,	// (0x0009ac81) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000a4930) mup3_control_keys_pane_g

0x115f,	// (0x0009627d) popup_toolbar2_fixed_window_cp01_ParamLimits

0x115f,	// (0x0009627d) popup_toolbar2_fixed_window_cp01

0x5631,	// (0x0009a74f) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5631,	// (0x0009a74f) popup_toolbar2_fixed_window_cp02

0xae52,	// (0x0009ff70) popup_call2_audio_second_window_t4_ParamLimits

0xae52,	// (0x0009ff70) popup_call2_audio_second_window_t4

0xb380,	// (0x000a049e) popup_call2_audio_first_window_t6_ParamLimits

0xb380,	// (0x000a049e) popup_call2_audio_first_window_t6

0xb616,	// (0x000a0734) popup_call2_audio_out_window_t6_ParamLimits

0xb616,	// (0x000a0734) popup_call2_audio_out_window_t6

0x11ab,	// (0x000962c9) main_vitu_pane

0x5b73,	// (0x0009ac91) aid_size_cell_itu_ParamLimits

0x5b73,	// (0x0009ac91) aid_size_cell_itu

0xe5a0,	// (0x000a36be) bg_popup_window_pane_cp08_ParamLimits

0xe5a0,	// (0x000a36be) bg_popup_window_pane_cp08

0x5b81,	// (0x0009ac9f) field_vitu_entry_pane_ParamLimits

0x5b81,	// (0x0009ac9f) field_vitu_entry_pane

0x5b90,	// (0x0009acae) grid_vitu_function_pane_ParamLimits

0x5b90,	// (0x0009acae) grid_vitu_function_pane

0x5ba0,	// (0x0009acbe) grid_vitu_itu_pane_ParamLimits

0x5ba0,	// (0x0009acbe) grid_vitu_itu_pane

0x5bb0,	// (0x0009acce) cell_vitu_itu_pane_ParamLimits

0x5bb0,	// (0x0009acce) cell_vitu_itu_pane

0x5bc5,	// (0x0009ace3) cell_vitu_function_pane_ParamLimits

0x5bc5,	// (0x0009ace3) cell_vitu_function_pane

0xe873,	// (0x000a3991) bg_popup_sub_pane_cp08_ParamLimits

0xe873,	// (0x000a3991) bg_popup_sub_pane_cp08

0x5bd7,	// (0x0009acf5) field_vitu_entry_pane_t1_ParamLimits

0x5bd7,	// (0x0009acf5) field_vitu_entry_pane_t1

0xc560,	// (0x000a167e) field_vitu_entry_pane_t2_ParamLimits

0xc560,	// (0x000a167e) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000a493e) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000a493e) field_vitu_entry_pane_t

0xc57d,	// (0x000a169b) bg_button_pane_cp05_ParamLimits

0xc57d,	// (0x000a169b) bg_button_pane_cp05

0x5bf3,	// (0x0009ad11) cell_vitu_itu_pane_g1

0x5c0b,	// (0x0009ad29) cell_vitu_itu_pane_t1_ParamLimits

0x5c0b,	// (0x0009ad29) cell_vitu_itu_pane_t1

0x5c1d,	// (0x0009ad3b) cell_vitu_itu_pane_t2_ParamLimits

0x5c1d,	// (0x0009ad3b) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000a4943) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000a4943) cell_vitu_itu_pane_t

0xc58b,	// (0x000a16a9) bg_button_pane_cp07

0x5c52,	// (0x0009ad70) cell_vitu_function_pane_g1

0x143d,	// (0x0009655b) main_calc_pane_g1

0x0f1c,	// (0x0009603a) aid_visual_content_pane

0x11ab,	// (0x000962c9) main_vradio_pane

0x5c5b,	// (0x0009ad79) main_vradio_pane_g1_ParamLimits

0x5c5b,	// (0x0009ad79) main_vradio_pane_g1

0xc595,	// (0x000a16b3) main_vradio_pane_g2_ParamLimits

0xc595,	// (0x000a16b3) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000a494a) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000a494a) main_vradio_pane_g

0x5c6b,	// (0x0009ad89) main_vradio_pane_t1_ParamLimits

0x5c6b,	// (0x0009ad89) main_vradio_pane_t1

0x5c7d,	// (0x0009ad9b) main_vradio_pane_t2_ParamLimits

0x5c7d,	// (0x0009ad9b) main_vradio_pane_t2

0xc5a2,	// (0x000a16c0) main_vradio_pane_t3_ParamLimits

0xc5a2,	// (0x000a16c0) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000a494f) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000a494f) main_vradio_pane_t

0x5c8f,	// (0x0009adad) vradio_rocker_control_pane_ParamLimits

0x5c8f,	// (0x0009adad) vradio_rocker_control_pane

0x5c9b,	// (0x0009adb9) vradio_station_info_pane_ParamLimits

0x5c9b,	// (0x0009adb9) vradio_station_info_pane

0xc5b6,	// (0x000a16d4) vradio_frequency_info_pane_ParamLimits

0xc5b6,	// (0x000a16d4) vradio_frequency_info_pane

0xbeff,	// (0x000a101d) vradio_station_info_pane_g1

0xc5c5,	// (0x000a16e3) vradio_station_info_pane_t1_ParamLimits

0xc5c5,	// (0x000a16e3) vradio_station_info_pane_t1

0xc5e7,	// (0x000a1705) vradio_station_info_pane_t2_ParamLimits

0xc5e7,	// (0x000a1705) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000a4956) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000a4956) vradio_station_info_pane_t

0xc5f9,	// (0x000a1717) vradio_tuning_pane

0xc601,	// (0x000a171f) vradio_rocker_control_pane_g1

0xc609,	// (0x000a1727) vradio_rocker_control_pane_g2

0xc611,	// (0x000a172f) vradio_rocker_control_pane_g3

0xc619,	// (0x000a1737) vradio_rocker_control_pane_g4

0xc621,	// (0x000a173f) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000a495b) vradio_rocker_control_pane_g

0x5caa,	// (0x0009adc8) vradio_frequency_info_pane_g1

0xc629,	// (0x000a1747) vradio_frequency_info_pane_t1_ParamLimits

0xc629,	// (0x000a1747) vradio_frequency_info_pane_t1

0x5cb4,	// (0x0009add2) vradio_tuning_pane_g1

0x5cbd,	// (0x0009addb) vradio_tuning_pane_t1

0x0f65,	// (0x00096083) area_side_right_pane_ParamLimits

0x0f65,	// (0x00096083) area_side_right_pane

0xba9d,	// (0x000a0bbb) status_small_pane_g1

0xbaa5,	// (0x000a0bc3) status_small_pane_g2

0xbaae,	// (0x000a0bcc) status_small_pane_g3

0xbab7,	// (0x000a0bd5) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000a4716) status_small_pane_g

0xbac0,	// (0x000a0bde) status_small_pane_t1

0x11ab,	// (0x000962c9) main_video3_pane

0xc63d,	// (0x000a175b) cams_zoom_vslider_pane

0xc645,	// (0x000a1763) image3_wide_pane_ParamLimits

0xc645,	// (0x000a1763) image3_wide_pane

0xc65f,	// (0x000a177d) image3_wide_small_pane

0xc66b,	// (0x000a1789) main_video3_pane_g1_ParamLimits

0xc66b,	// (0x000a1789) main_video3_pane_g1

0xc687,	// (0x000a17a5) main_video3_pane_g2_ParamLimits

0xc687,	// (0x000a17a5) main_video3_pane_g2

0x0001,

0xf848,	// (0x000a4966) main_video3_pane_g_ParamLimits

0xf848,	// (0x000a4966) main_video3_pane_g

0xc6a3,	// (0x000a17c1) main_video3_pane_t1_ParamLimits

0xc6a3,	// (0x000a17c1) main_video3_pane_t1

0xc6ce,	// (0x000a17ec) main_video3_pane_t2_ParamLimits

0xc6ce,	// (0x000a17ec) main_video3_pane_t2

0xc6f9,	// (0x000a1817) main_video3_pane_t3_ParamLimits

0xc6f9,	// (0x000a1817) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000a496b) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000a496b) main_video3_pane_t

0xc726,	// (0x000a1844) cams_zoom_vslider_pane_g1

0xc72f,	// (0x000a184d) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000a4972) cams_zoom_vslider_pane_g

0xc737,	// (0x000a1855) small_slider_vertical_pane

0xbeff,	// (0x000a101d) small_slider_vertical_pane_g1

0xbeff,	// (0x000a101d) small_slider_vertical_pane_g2

0xc73f,	// (0x000a185d) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000a4977) small_slider_vertical_pane_g

0x11ab,	// (0x000962c9) main_hwr_training_pane

0xc748,	// (0x000a1866) hwr_training_instruct_pane_ParamLimits

0xc748,	// (0x000a1866) hwr_training_instruct_pane

0x5ccc,	// (0x0009adea) hwr_training_navi_pane_ParamLimits

0x5ccc,	// (0x0009adea) hwr_training_navi_pane

0x5ce6,	// (0x0009ae04) hwr_training_write_pane_ParamLimits

0x5ce6,	// (0x0009ae04) hwr_training_write_pane

0xe72a,	// (0x000a3848) bg_frame_shadow_pane

0xc77f,	// (0x000a189d) hwr_training_write_pane_g1

0xc787,	// (0x000a18a5) hwr_training_write_pane_g2

0xc78f,	// (0x000a18ad) hwr_training_write_pane_g3

0xc797,	// (0x000a18b5) hwr_training_write_pane_g4

0xc79f,	// (0x000a18bd) hwr_training_write_pane_g5

0xc7a7,	// (0x000a18c5) hwr_training_write_pane_g6

0xc7af,	// (0x000a18cd) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000a497e) hwr_training_write_pane_g

0x5d1e,	// (0x0009ae3c) hwr_training_navi_pane_g1_ParamLimits

0x5d1e,	// (0x0009ae3c) hwr_training_navi_pane_g1

0x5d30,	// (0x0009ae4e) hwr_training_navi_pane_g2_ParamLimits

0x5d30,	// (0x0009ae4e) hwr_training_navi_pane_g2

0x5d42,	// (0x0009ae60) hwr_training_navi_pane_g3_ParamLimits

0x5d42,	// (0x0009ae60) hwr_training_navi_pane_g3

0x5d52,	// (0x0009ae70) hwr_training_navi_pane_g4_ParamLimits

0x5d52,	// (0x0009ae70) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000a498d) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000a498d) hwr_training_navi_pane_g

0x5d6c,	// (0x0009ae8a) hwr_training_navi_pane_t1

0x5d7a,	// (0x0009ae98) list_single_hwr_training_instruct_pane_ParamLimits

0x5d7a,	// (0x0009ae98) list_single_hwr_training_instruct_pane

0xc7b7,	// (0x000a18d5) list_single_hwr_training_instruct_pane_t1

0xbe2a,	// (0x000a0f48) bg_frame_shadow_pane_g1

0xc7c6,	// (0x000a18e4) bg_frame_shadow_pane_g2

0xc7ce,	// (0x000a18ec) bg_frame_shadow_pane_g3

0xc7d6,	// (0x000a18f4) bg_frame_shadow_pane_g4

0xc7de,	// (0x000a18fc) bg_frame_shadow_pane_g5

0xc7e6,	// (0x000a1904) bg_frame_shadow_pane_g6

0xc7ee,	// (0x000a190c) bg_frame_shadow_pane_g7

0xef61,	// (0x000a407f) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000a4998) bg_frame_shadow_pane_g

0x11ab,	// (0x000962c9) main_video_tele_dialer_pane

0x5d9f,	// (0x0009aebd) aid_size_cell_video_keypad_ParamLimits

0x5d9f,	// (0x0009aebd) aid_size_cell_video_keypad

0x5daf,	// (0x0009aecd) grid_video_dialer_keypad_pane_ParamLimits

0x5daf,	// (0x0009aecd) grid_video_dialer_keypad_pane

0x5de3,	// (0x0009af01) video_down_pane_cp_ParamLimits

0x5de3,	// (0x0009af01) video_down_pane_cp

0x5e0d,	// (0x0009af2b) cell_video_dialer_keypad_pane_ParamLimits

0x5e0d,	// (0x0009af2b) cell_video_dialer_keypad_pane

0xc7f6,	// (0x000a1914) bg_button_pane_cp08_ParamLimits

0xc7f6,	// (0x000a1914) bg_button_pane_cp08

0x5e22,	// (0x0009af40) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e22,	// (0x0009af40) cell_video_dialer_keypad_pane_g1

0x560b,	// (0x0009a729) mup3_rocker2_pane_ParamLimits

0x560b,	// (0x0009a729) mup3_rocker2_pane

0xbeff,	// (0x000a101d) mup3_rocker2_pane_g1

0x4513,	// (0x00099631) main_dialer2_pane

0x11ab,	// (0x000962c9) main_mp4_pane

0x5e61,	// (0x0009af7f) main_mp4_pane_g1_ParamLimits

0x5e61,	// (0x0009af7f) main_mp4_pane_g1

0x5e6f,	// (0x0009af8d) main_mp4_pane_g2_ParamLimits

0x5e6f,	// (0x0009af8d) main_mp4_pane_g2

0x5e7d,	// (0x0009af9b) main_mp4_pane_g3_ParamLimits

0x5e7d,	// (0x0009af9b) main_mp4_pane_g3

0x5ec2,	// (0x0009afe0) main_mp4_pane_g4_ParamLimits

0x5ec2,	// (0x0009afe0) main_mp4_pane_g4

0x5eea,	// (0x0009b008) main_mp4_pane_g5_ParamLimits

0x5eea,	// (0x0009b008) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000a49b8) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000a49b8) main_mp4_pane_g

0x5f3a,	// (0x0009b058) main_mp4_pane_t1_ParamLimits

0x5f3a,	// (0x0009b058) main_mp4_pane_t1

0x5f96,	// (0x0009b0b4) main_mp4_pane_t2_ParamLimits

0x5f96,	// (0x0009b0b4) main_mp4_pane_t2

0xc802,	// (0x000a1920) main_mp4_pane_t3_ParamLimits

0xc802,	// (0x000a1920) main_mp4_pane_t3

0x5fe8,	// (0x0009b106) main_mp4_pane_t4_ParamLimits

0x5fe8,	// (0x0009b106) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000a49c5) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000a49c5) main_mp4_pane_t

0x602c,	// (0x0009b14a) mp4_progress_pane_ParamLimits

0x602c,	// (0x0009b14a) mp4_progress_pane

0x6076,	// (0x0009b194) mp4_rocker_pane_ParamLimits

0x6076,	// (0x0009b194) mp4_rocker_pane

0xc82a,	// (0x000a1948) mp4_progress_pane_t1

0xc843,	// (0x000a1961) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000a49ce) mp4_progress_pane_t

0xc85c,	// (0x000a197a) mup_progress_pane_cp04

0xcff1,	// (0x000a210f) mp4_rocker_pane_g1

0x6096,	// (0x0009b1b4) aid_cell_size_keypad2_ParamLimits

0x6096,	// (0x0009b1b4) aid_cell_size_keypad2

0x60a6,	// (0x0009b1c4) dialer2_ne_pane_ParamLimits

0x60a6,	// (0x0009b1c4) dialer2_ne_pane

0x60b4,	// (0x0009b1d2) grid_dialer2_keypad_pane_ParamLimits

0x60b4,	// (0x0009b1d2) grid_dialer2_keypad_pane

0xcffb,	// (0x000a2119) bg_popup_call_pane_cp07_ParamLimits

0xcffb,	// (0x000a2119) bg_popup_call_pane_cp07

0x60c4,	// (0x0009b1e2) dialer2_ne_pane_t1_ParamLimits

0x60c4,	// (0x0009b1e2) dialer2_ne_pane_t1

0x60e9,	// (0x0009b207) cell_dialer2_keypad_pane_ParamLimits

0x60e9,	// (0x0009b207) cell_dialer2_keypad_pane

0xc87a,	// (0x000a1998) bg_button_pane_pane_cp04_ParamLimits

0xc87a,	// (0x000a1998) bg_button_pane_pane_cp04

0x60fe,	// (0x0009b21c) cell_dialer2_keypad_pane_g1_ParamLimits

0x60fe,	// (0x0009b21c) cell_dialer2_keypad_pane_g1

0x20f0,	// (0x0009720e) aid_placing_vt_set_content_ParamLimits

0x20f0,	// (0x0009720e) aid_placing_vt_set_content

0x211c,	// (0x0009723a) aid_placing_vt_set_title_ParamLimits

0x211c,	// (0x0009723a) aid_placing_vt_set_title

0x11ab,	// (0x000962c9) main_image3_pane

0x6198,	// (0x0009b2b6) area_side_right_pane_cp01_ParamLimits

0x6198,	// (0x0009b2b6) area_side_right_pane_cp01

0x61c5,	// (0x0009b2e3) main_image3_pane_g1_ParamLimits

0x61c5,	// (0x0009b2e3) main_image3_pane_g1

0x61d3,	// (0x0009b2f1) main_image3_pane_g2_ParamLimits

0x61d3,	// (0x0009b2f1) main_image3_pane_g2

0x61ec,	// (0x0009b30a) main_image3_pane_g3_ParamLimits

0x61ec,	// (0x0009b30a) main_image3_pane_g3

0x6205,	// (0x0009b323) main_image3_pane_g4_ParamLimits

0x6205,	// (0x0009b323) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000a49dd) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000a49dd) main_image3_pane_g

0x621e,	// (0x0009b33c) main_image3_pane_t1_ParamLimits

0x621e,	// (0x0009b33c) main_image3_pane_t1

0x6243,	// (0x0009b361) main_image3_pane_t2_ParamLimits

0x6243,	// (0x0009b361) main_image3_pane_t2

0x6262,	// (0x0009b380) main_image3_pane_t3_ParamLimits

0x6262,	// (0x0009b380) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000a49e6) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000a49e6) main_image3_pane_t

0xe5a0,	// (0x000a36be) grid_sctrl_middle_pane_cp01_ParamLimits

0xe5a0,	// (0x000a36be) grid_sctrl_middle_pane_cp01

0x62c3,	// (0x0009b3e1) cell_sctrl_middle_pane_cp01_ParamLimits

0x62c3,	// (0x0009b3e1) cell_sctrl_middle_pane_cp01

0x62d4,	// (0x0009b3f2) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62d4,	// (0x0009b3f2) cell_sctrl_middle_pane_cp01_g1

0x11ab,	// (0x000962c9) main_call4_pane

0x62e1,	// (0x0009b3ff) aid_size_button_call4_ParamLimits

0x62e1,	// (0x0009b3ff) aid_size_button_call4

0x6311,	// (0x0009b42f) call4_windows_pane_ParamLimits

0x6311,	// (0x0009b42f) call4_windows_pane

0x632b,	// (0x0009b449) grid_call4_button_pane_ParamLimits

0x632b,	// (0x0009b449) grid_call4_button_pane

0xc886,	// (0x000a19a4) call4_windows_conf_pane

0xc89d,	// (0x000a19bb) popup_call4_audio_first_window_ParamLimits

0xc89d,	// (0x000a19bb) popup_call4_audio_first_window

0xc8e9,	// (0x000a1a07) popup_call4_audio_second_window_ParamLimits

0xc8e9,	// (0x000a1a07) popup_call4_audio_second_window

0xc8fd,	// (0x000a1a1b) popup_call4_audio_wait_window_ParamLimits

0xc8fd,	// (0x000a1a1b) popup_call4_audio_wait_window

0x634f,	// (0x0009b46d) cell_call4_button_pane_ParamLimits

0x634f,	// (0x0009b46d) cell_call4_button_pane

0x6374,	// (0x0009b492) bg_button_pane_cp09_ParamLimits

0x6374,	// (0x0009b492) bg_button_pane_cp09

0x6380,	// (0x0009b49e) cell_call4_button_pane_g1_ParamLimits

0x6380,	// (0x0009b49e) cell_call4_button_pane_g1

0x638d,	// (0x0009b4ab) cell_call4_button_pane_t1_ParamLimits

0x638d,	// (0x0009b4ab) cell_call4_button_pane_t1

0xc945,	// (0x000a1a63) popup_call4_audio_conf_window_ParamLimits

0xc945,	// (0x000a1a63) popup_call4_audio_conf_window

0x563e,	// (0x0009a75c) mup3_progress_pane_t1_ParamLimits

0x565d,	// (0x0009a77b) mup3_progress_pane_t2_ParamLimits

0xc235,	// (0x000a1353) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000a48ba) mup3_progress_pane_t_ParamLimits

0xc252,	// (0x000a1370) mup_progress_pane_cp03_ParamLimits

0x5b6b,	// (0x0009ac89) mup3_control_keys_pane_g4_copy1

0x605a,	// (0x0009b178) mp4_rocker2_pane_ParamLimits

0x605a,	// (0x0009b178) mp4_rocker2_pane

0xc959,	// (0x000a1a77) mp4_rocker2_pane_g1

0xc961,	// (0x000a1a7f) mp4_rocker2_pane_g2

0x639f,	// (0x0009b4bd) mp4_rocker2_pane_g3

0x63a7,	// (0x0009b4c5) mp4_rocker2_pane_g4

0x63af,	// (0x0009b4cd) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000a49ef) mp4_rocker2_pane_g

0x11ab,	// (0x000962c9) main_camera4_pane

0x11ab,	// (0x000962c9) main_video4_pane

0x5dbf,	// (0x0009aedd) main_video_tele_dialer_pane_t1_ParamLimits

0x5dbf,	// (0x0009aedd) main_video_tele_dialer_pane_t1

0x5dd1,	// (0x0009aeef) main_video_tele_dialer_pane_t2_ParamLimits

0x5dd1,	// (0x0009aeef) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000a49a9) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000a49a9) main_video_tele_dialer_pane_t

0x63cf,	// (0x0009b4ed) cam4_autofocus_pane_ParamLimits

0x63cf,	// (0x0009b4ed) cam4_autofocus_pane

0x63e9,	// (0x0009b507) cam4_image_uncrop_pane_ParamLimits

0x63e9,	// (0x0009b507) cam4_image_uncrop_pane

0x6400,	// (0x0009b51e) cam4_indicators_pane_ParamLimits

0x6400,	// (0x0009b51e) cam4_indicators_pane

0x641c,	// (0x0009b53a) main_camera4_pane_g1_ParamLimits

0x641c,	// (0x0009b53a) main_camera4_pane_g1

0x6428,	// (0x0009b546) main_camera4_pane_g2_ParamLimits

0x6428,	// (0x0009b546) main_camera4_pane_g2

0x6428,	// (0x0009b546) main_camera4_pane_g3_ParamLimits

0x6428,	// (0x0009b546) main_camera4_pane_g3

0x6434,	// (0x0009b552) main_camera4_pane_g4_ParamLimits

0x6434,	// (0x0009b552) main_camera4_pane_g4

0x6440,	// (0x0009b55e) main_camera4_pane_g5_ParamLimits

0x6440,	// (0x0009b55e) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000a49fa) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000a49fa) main_camera4_pane_g

0x645a,	// (0x0009b578) main_camera4_pane_t1_ParamLimits

0x645a,	// (0x0009b578) main_camera4_pane_t1

0x64a2,	// (0x0009b5c0) bg_tb_trans_pane_cp06

0x64b8,	// (0x0009b5d6) cam4_indicators_pane_g1

0x64c9,	// (0x0009b5e7) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000a4a15) cam4_indicators_pane_g

0x64e7,	// (0x0009b605) cam4_indicators_pane_t1

0x6511,	// (0x0009b62f) main_video4_pane_g1_ParamLimits

0x6511,	// (0x0009b62f) main_video4_pane_g1

0x651d,	// (0x0009b63b) main_video4_pane_g2_ParamLimits

0x651d,	// (0x0009b63b) main_video4_pane_g2

0x6529,	// (0x0009b647) main_video4_pane_g3_ParamLimits

0x6529,	// (0x0009b647) main_video4_pane_g3

0x6535,	// (0x0009b653) main_video4_pane_g4_ParamLimits

0x6535,	// (0x0009b653) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000a4a1c) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000a4a1c) main_video4_pane_g

0x6555,	// (0x0009b673) vid4_indicators_pane_ParamLimits

0x6555,	// (0x0009b673) vid4_indicators_pane

0x6574,	// (0x0009b692) video4_image_uncrop_cif_pane_ParamLimits

0x6574,	// (0x0009b692) video4_image_uncrop_cif_pane

0x6583,	// (0x0009b6a1) video4_image_uncrop_nhd_pane_ParamLimits

0x6583,	// (0x0009b6a1) video4_image_uncrop_nhd_pane

0x63e9,	// (0x0009b507) video4_image_uncrop_vga_pane_ParamLimits

0x63e9,	// (0x0009b507) video4_image_uncrop_vga_pane

0x4505,	// (0x00099623) bg_tb_trans_pane_cp07

0x659a,	// (0x0009b6b8) vid4_indicators_pane_g1

0x65ae,	// (0x0009b6cc) vid4_indicators_pane_g2

0x65c2,	// (0x0009b6e0) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000a4a27) vid4_indicators_pane_g

0x65f1,	// (0x0009b70f) vid4_indicators_pane_t1

0x6608,	// (0x0009b726) cam4_autofocus_pane_g1

0x6610,	// (0x0009b72e) cam4_autofocus_pane_g2

0x6618,	// (0x0009b736) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000a4a32) cam4_autofocus_pane_g

0x6620,	// (0x0009b73e) cam4_autofocus_pane_g3_copy1

0x5df1,	// (0x0009af0f) video_down_pane_cp_t1

0x5dff,	// (0x0009af1d) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000a49ae) video_down_pane_cp_t

0x1191,	// (0x000962af) popup_vitu2_window_ParamLimits

0x1191,	// (0x000962af) popup_vitu2_window

0x6628,	// (0x0009b746) aid_size_cell2_itu2_ParamLimits

0x6628,	// (0x0009b746) aid_size_cell2_itu2

0x664a,	// (0x0009b768) aid_size_cell_itu2_ParamLimits

0x664a,	// (0x0009b768) aid_size_cell_itu2

0x668e,	// (0x0009b7ac) bg_popup_window_pane_cp09_ParamLimits

0x668e,	// (0x0009b7ac) bg_popup_window_pane_cp09

0x669c,	// (0x0009b7ba) field_vitu2_entry_pane_ParamLimits

0x669c,	// (0x0009b7ba) field_vitu2_entry_pane

0x66bc,	// (0x0009b7da) grid_vitu2_function_pane_ParamLimits

0x66bc,	// (0x0009b7da) grid_vitu2_function_pane

0x6700,	// (0x0009b81e) grid_vitu2_itu_pane_ParamLimits

0x6700,	// (0x0009b81e) grid_vitu2_itu_pane

0x6778,	// (0x0009b896) cell_vitu2_itu_pane_ParamLimits

0x6778,	// (0x0009b896) cell_vitu2_itu_pane

0x678d,	// (0x0009b8ab) cell_vitu2_function_pane_ParamLimits

0x678d,	// (0x0009b8ab) cell_vitu2_function_pane

0xc969,	// (0x000a1a87) bg_popup_call_pane_cp08_ParamLimits

0xc969,	// (0x000a1a87) bg_popup_call_pane_cp08

0xc992,	// (0x000a1ab0) field_vitu2_entry_pane_g1

0xc99e,	// (0x000a1abc) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000a4a39) field_vitu2_entry_pane_g

0x67cc,	// (0x0009b8ea) field_vitu2_entry_pane_t1_ParamLimits

0x67cc,	// (0x0009b8ea) field_vitu2_entry_pane_t1

0xc9b8,	// (0x000a1ad6) field_vitu2_entry_pane_t2_ParamLimits

0xc9b8,	// (0x000a1ad6) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000a4a40) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000a4a40) field_vitu2_entry_pane_t

0x67f8,	// (0x0009b916) bg_button_pane_cp010_ParamLimits

0x67f8,	// (0x0009b916) bg_button_pane_cp010

0x6806,	// (0x0009b924) cell_vitu2_itu_pane_g1

0x682f,	// (0x0009b94d) cell_vitu2_itu_pane_t1_ParamLimits

0x682f,	// (0x0009b94d) cell_vitu2_itu_pane_t1

0x0e0d,	// (0x00095f2b) cell_vitu2_itu_pane_t2_ParamLimits

0x0e0d,	// (0x00095f2b) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000a4a4a) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000a4a4a) cell_vitu2_itu_pane_t

0x4505,	// (0x00099623) bg_button_pane_cp011

0x687b,	// (0x0009b999) cell_vitu2_function_pane_g1

0x11ab,	// (0x000962c9) main_myfav_hc_pane

0x62a4,	// (0x0009b3c2) popup_image3_note_pane_ParamLimits

0x62a4,	// (0x0009b3c2) popup_image3_note_pane

0x62b2,	// (0x0009b3d0) popup_image3_tool_bar_pane_ParamLimits

0x62b2,	// (0x0009b3d0) popup_image3_tool_bar_pane

0x0e7b,	// (0x00095f99) cell_vitu2_itu_pane_t3_ParamLimits

0x0e7b,	// (0x00095f99) cell_vitu2_itu_pane_t3

0xe72a,	// (0x000a3848) bg_popup_trans_pane

0xc9dd,	// (0x000a1afb) grid_image3_tool_bar_pane

0xc9e7,	// (0x000a1b05) bg_popup_trans_pane_g1

0x9ecf,	// (0x0009efed) bg_popup_trans_pane_g2

0xc9ef,	// (0x000a1b0d) bg_popup_trans_pane_g3

0xc9f7,	// (0x000a1b15) bg_popup_trans_pane_g4

0xc9ff,	// (0x000a1b1d) bg_popup_trans_pane_g5

0xca07,	// (0x000a1b25) bg_popup_trans_pane_g6

0xca0f,	// (0x000a1b2d) bg_popup_trans_pane_g7

0xca17,	// (0x000a1b35) bg_popup_trans_pane_g8

0x9eaf,	// (0x0009efcd) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000a4a51) bg_popup_trans_pane_g

0xca1f,	// (0x000a1b3d) cell_image3_tool_bar_pane_ParamLimits

0xca1f,	// (0x000a1b3d) cell_image3_tool_bar_pane

0xbeff,	// (0x000a101d) cell_image3_tool_bar_pane_g1

0xe72a,	// (0x000a3848) bg_popup_trans_pane_cp1

0xca33,	// (0x000a1b51) popup_image3_note_pane_t1

0xca41,	// (0x000a1b5f) popup_image3_note_pane_t2

0xca4f,	// (0x000a1b6d) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000a4a64) popup_image3_note_pane_t

0xca5d,	// (0x000a1b7b) popup_image3_note_pane_t3_copy1

0x688f,	// (0x0009b9ad) bg_myfav_hc_instruction_pane_ParamLimits

0x688f,	// (0x0009b9ad) bg_myfav_hc_instruction_pane

0x68a7,	// (0x0009b9c5) cell_myfav_contact_pane_ParamLimits

0x68a7,	// (0x0009b9c5) cell_myfav_contact_pane

0x68c1,	// (0x0009b9df) cell_myfav_contact_pane_cp1_ParamLimits

0x68c1,	// (0x0009b9df) cell_myfav_contact_pane_cp1

0x68d9,	// (0x0009b9f7) cell_myfav_contact_pane_cp2_ParamLimits

0x68d9,	// (0x0009b9f7) cell_myfav_contact_pane_cp2

0x68f1,	// (0x0009ba0f) cell_myfav_contact_pane_cp3_ParamLimits

0x68f1,	// (0x0009ba0f) cell_myfav_contact_pane_cp3

0x6908,	// (0x0009ba26) cell_myfav_contact_pane_cp4_ParamLimits

0x6908,	// (0x0009ba26) cell_myfav_contact_pane_cp4

0x691e,	// (0x0009ba3c) cell_myfav_contact_pane_cp5_ParamLimits

0x691e,	// (0x0009ba3c) cell_myfav_contact_pane_cp5

0x6932,	// (0x0009ba50) cell_myfav_contact_pane_cp6_ParamLimits

0x6932,	// (0x0009ba50) cell_myfav_contact_pane_cp6

0x6946,	// (0x0009ba64) cell_myfav_contact_pane_cp7_ParamLimits

0x6946,	// (0x0009ba64) cell_myfav_contact_pane_cp7

0xca6b,	// (0x000a1b89) listscroll_gen_pane_cp05

0x695e,	// (0x0009ba7c) main_myfav_hc_pane_g1_ParamLimits

0x695e,	// (0x0009ba7c) main_myfav_hc_pane_g1

0x6974,	// (0x0009ba92) main_myfav_hc_pane_g2_ParamLimits

0x6974,	// (0x0009ba92) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000a4a6b) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000a4a6b) main_myfav_hc_pane_g

0x69a2,	// (0x0009bac0) main_myfav_hc_pane_t1_ParamLimits

0x69a2,	// (0x0009bac0) main_myfav_hc_pane_t1

0xca74,	// (0x000a1b92) main_myfav_hc_pane_t2_ParamLimits

0xca74,	// (0x000a1b92) main_myfav_hc_pane_t2

0xca86,	// (0x000a1ba4) main_myfav_hc_pane_t3_ParamLimits

0xca86,	// (0x000a1ba4) main_myfav_hc_pane_t3

0x69b9,	// (0x0009bad7) main_myfav_hc_pane_t4_ParamLimits

0x69b9,	// (0x0009bad7) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000a4a72) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000a4a72) main_myfav_hc_pane_t

0xbeff,	// (0x000a101d) bg_myfav_hc_instruction_pane_g1

0xca98,	// (0x000a1bb6) cell_myfav_contact_pane_g1_ParamLimits

0xca98,	// (0x000a1bb6) cell_myfav_contact_pane_g1

0xca98,	// (0x000a1bb6) cell_myfav_contact_pane_g2_ParamLimits

0xca98,	// (0x000a1bb6) cell_myfav_contact_pane_g2

0xcaa4,	// (0x000a1bc2) cell_myfav_contact_pane_g3_ParamLimits

0xcaa4,	// (0x000a1bc2) cell_myfav_contact_pane_g3

0xc21f,	// (0x000a133d) cell_myfav_contact_pane_g4_ParamLimits

0xc21f,	// (0x000a133d) cell_myfav_contact_pane_g4

0xcab1,	// (0x000a1bcf) cell_myfav_contact_pane_g5_ParamLimits

0xcab1,	// (0x000a1bcf) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000a4a7d) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000a4a7d) cell_myfav_contact_pane_g

0x698a,	// (0x0009baa8) main_myfav_hc_pane_g3_ParamLimits

0x698a,	// (0x0009baa8) main_myfav_hc_pane_g3

0x109a,	// (0x000961b8) popup_adpt_find_window

0x69e3,	// (0x0009bb01) afind_page_pane_ParamLimits

0x69e3,	// (0x0009bb01) afind_page_pane

0x69f0,	// (0x0009bb0e) aid_size_cell_afind_ParamLimits

0x69f0,	// (0x0009bb0e) aid_size_cell_afind

0x6a0a,	// (0x0009bb28) bg_popup_sub_pane_cp09_ParamLimits

0x6a0a,	// (0x0009bb28) bg_popup_sub_pane_cp09

0x6a17,	// (0x0009bb35) find_pane_cp01_ParamLimits

0x6a17,	// (0x0009bb35) find_pane_cp01

0xcabd,	// (0x000a1bdb) grid_afind_control_pane_ParamLimits

0xcabd,	// (0x000a1bdb) grid_afind_control_pane

0x6a24,	// (0x0009bb42) grid_afind_pane_ParamLimits

0x6a24,	// (0x0009bb42) grid_afind_pane

0x6a40,	// (0x0009bb5e) cell_afind_pane_ParamLimits

0x6a40,	// (0x0009bb5e) cell_afind_pane

0xbeff,	// (0x000a101d) afind_page_pane_g1

0x6a88,	// (0x0009bba6) afind_page_pane_g2

0x6a91,	// (0x0009bbaf) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000a4a88) afind_page_pane_g

0x6a9a,	// (0x0009bbb8) afind_page_pane_t1

0xcad1,	// (0x000a1bef) cell_afind_grid_control_pane_ParamLimits

0xcad1,	// (0x000a1bef) cell_afind_grid_control_pane

0xc87a,	// (0x000a1998) bg_button_pane_cp69_ParamLimits

0xc87a,	// (0x000a1998) bg_button_pane_cp69

0x6aba,	// (0x0009bbd8) cell_afind_pane_g1_ParamLimits

0x6aba,	// (0x0009bbd8) cell_afind_pane_g1

0x6ac7,	// (0x0009bbe5) cell_afind_pane_t1_ParamLimits

0x6ac7,	// (0x0009bbe5) cell_afind_pane_t1

0x9cc8,	// (0x0009ede6) bg_button_pane_cp72

0xcae0,	// (0x000a1bfe) cell_afind_grid_control_pane_g1

0x4083,	// (0x000991a1) aid_image_placing_area_ParamLimits

0x4083,	// (0x000991a1) aid_image_placing_area

0xc548,	// (0x000a1666) field_vitu_entry_pane_g1_ParamLimits

0xc548,	// (0x000a1666) field_vitu_entry_pane_g1

0xc554,	// (0x000a1672) field_vitu_entry_pane_g2_ParamLimits

0xc554,	// (0x000a1672) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000a4939) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000a4939) field_vitu_entry_pane_g

0x5bf3,	// (0x0009ad11) cell_vitu_itu_pane_g1_ParamLimits

0x5c35,	// (0x0009ad53) cell_vitu_itu_pane_t3_ParamLimits

0x5c35,	// (0x0009ad53) cell_vitu_itu_pane_t3

0xc82a,	// (0x000a1948) mp4_progress_pane_t1_ParamLimits

0xc843,	// (0x000a1961) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000a49ce) mp4_progress_pane_t_ParamLimits

0xc85c,	// (0x000a197a) mup_progress_pane_cp04_ParamLimits

0x69cd,	// (0x0009baeb) main_myfav_hc_pane_t5_ParamLimits

0x69cd,	// (0x0009baeb) main_myfav_hc_pane_t5

0x0e05,	// (0x00095f23) aid_zoom_text_primary

0x109a,	// (0x000961b8) popup_adpt_find_window_ParamLimits

0x4505,	// (0x00099623) main_cam_set_pane

0x640e,	// (0x0009b52c) cam4_zoom_pane_ParamLimits

0x640e,	// (0x0009b52c) cam4_zoom_pane

0x6ad9,	// (0x0009bbf7) main_cam_set_pane_g1_ParamLimits

0x6ad9,	// (0x0009bbf7) main_cam_set_pane_g1

0x6ae7,	// (0x0009bc05) main_cam_set_pane_g2_ParamLimits

0x6ae7,	// (0x0009bc05) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000a4a8f) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000a4a8f) main_cam_set_pane_g

0x6af3,	// (0x0009bc11) main_cam_set_pane_t1_ParamLimits

0x6af3,	// (0x0009bc11) main_cam_set_pane_t1

0x6b0f,	// (0x0009bc2d) main_cset_listscroll_pane_ParamLimits

0x6b0f,	// (0x0009bc2d) main_cset_listscroll_pane

0x6b3a,	// (0x0009bc58) main_cset_slider_pane_ParamLimits

0x6b3a,	// (0x0009bc58) main_cset_slider_pane

0xcaf1,	// (0x000a1c0f) main_cset_list_pane_ParamLimits

0xcaf1,	// (0x000a1c0f) main_cset_list_pane

0xcb01,	// (0x000a1c1f) scroll_pane_cp028

0x6b59,	// (0x0009bc77) aid_area_touch_slider

0x6b75,	// (0x0009bc93) cset_slider_pane

0x6b9f,	// (0x0009bcbd) main_cset_slider_pane_g1

0x6bb4,	// (0x0009bcd2) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000a4a94) main_cset_slider_pane_g

0xcb3a,	// (0x000a1c58) main_cset_slider_pane_t1

0x6c76,	// (0x0009bd94) main_cset_slider_pane_t2

0x6c90,	// (0x0009bdae) main_cset_slider_pane_t3

0x6caa,	// (0x0009bdc8) main_cset_slider_pane_t4

0x6cc4,	// (0x0009bde2) main_cset_slider_pane_t5

0x6ce2,	// (0x0009be00) main_cset_slider_pane_t6

0x6cf9,	// (0x0009be17) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000a4ab9) main_cset_slider_pane_t

0x6e05,	// (0x0009bf23) cset_list_set_pane_ParamLimits

0x6e05,	// (0x0009bf23) cset_list_set_pane

0x6e1b,	// (0x0009bf39) aid_position_infowindow_above

0x6e23,	// (0x0009bf41) aid_position_infowindow_below

0xf094,	// (0x000a41b2) cset_list_set_pane_g1_ParamLimits

0xf094,	// (0x000a41b2) cset_list_set_pane_g1

0xcbda,	// (0x000a1cf8) cset_list_set_pane_g3_ParamLimits

0xcbda,	// (0x000a1cf8) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000a4ad8) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000a4ad8) cset_list_set_pane_g

0xcbe9,	// (0x000a1d07) cset_list_set_pane_t1_ParamLimits

0xcbe9,	// (0x000a1d07) cset_list_set_pane_t1

0xe873,	// (0x000a3991) list_highlight_pane_cp021_ParamLimits

0xe873,	// (0x000a3991) list_highlight_pane_cp021

0xa814,	// (0x0009f932) cset_slider_pane_g1

0xa826,	// (0x0009f944) cset_slider_pane_g2

0xa81d,	// (0x0009f93b) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000a4add) cset_slider_pane_g

0x6e2b,	// (0x0009bf49) aid_area_touch_cam4_zoom

0x6e33,	// (0x0009bf51) cam4_zoom_cont_pane

0x6e3b,	// (0x0009bf59) cam4_zoom_pane_g1

0x6e43,	// (0x0009bf61) cam4_zoom_pane_g2

0x6e4b,	// (0x0009bf69) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000a4ae4) cam4_zoom_pane_g

0x6e53,	// (0x0009bf71) cam4_zoom_cont_pane_g1

0x6e5c,	// (0x0009bf7a) cam4_zoom_cont_pane_g2

0x6e65,	// (0x0009bf83) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000a4aeb) cam4_zoom_cont_pane_g

0x62fb,	// (0x0009b419) call4_image_pane_ParamLimits

0x62fb,	// (0x0009b419) call4_image_pane

0xc886,	// (0x000a19a4) call4_windows_conf_pane_ParamLimits

0xc8c7,	// (0x000a19e5) popup_call4_audio_in_window_ParamLimits

0xc8c7,	// (0x000a19e5) popup_call4_audio_in_window

0xe72a,	// (0x000a3848) bg_popup_call2_act_pane_cp02

0xc93d,	// (0x000a1a5b) call4_list_conf_pane

0xbeff,	// (0x000a101d) call4_image_pane_g1

0xbeff,	// (0x000a101d) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000a47fa) call4_image_pane_g

0xcbfe,	// (0x000a1d1c) list_single_graphic_popup_conf4_pane_ParamLimits

0xcbfe,	// (0x000a1d1c) list_single_graphic_popup_conf4_pane

0xe72a,	// (0x000a3848) list_highlight_pane_cp022

0xcc11,	// (0x000a1d2f) list_single_graphic_popup_conf4_pane_g1

0xa3eb,	// (0x0009f509) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000a4af2) list_single_graphic_popup_conf4_pane_g

0xcc19,	// (0x000a1d37) list_single_graphic_popup_conf4_pane_t1

0x2280,	// (0x0009739e) popup_vtel_slider_window_ParamLimits

0x2280,	// (0x0009739e) popup_vtel_slider_window

0xc868,	// (0x000a1986) dialer2_ne_pane_t2_ParamLimits

0xc868,	// (0x000a1986) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000a49d3) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000a49d3) dialer2_ne_pane_t

0xe873,	// (0x000a3991) bg_popup_sub_pane_cp010_ParamLimits

0xe873,	// (0x000a3991) bg_popup_sub_pane_cp010

0x6e6e,	// (0x0009bf8c) popup_vtel_slider_window_g1_ParamLimits

0x6e6e,	// (0x0009bf8c) popup_vtel_slider_window_g1

0x6e7a,	// (0x0009bf98) popup_vtel_slider_window_g2_ParamLimits

0x6e7a,	// (0x0009bf98) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000a4af7) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000a4af7) popup_vtel_slider_window_g

0x6ec2,	// (0x0009bfe0) vtel_slider_pane_ParamLimits

0x6ec2,	// (0x0009bfe0) vtel_slider_pane

0x6ed1,	// (0x0009bfef) vtel_slider_pane_g1_ParamLimits

0x6ed1,	// (0x0009bfef) vtel_slider_pane_g1

0x6ede,	// (0x0009bffc) vtel_slider_pane_g2_ParamLimits

0x6ede,	// (0x0009bffc) vtel_slider_pane_g2

0x6eeb,	// (0x0009c009) vtel_slider_pane_g3_ParamLimits

0x6eeb,	// (0x0009c009) vtel_slider_pane_g3

0x6ed1,	// (0x0009bfef) vtel_slider_pane_g4_ParamLimits

0x6ed1,	// (0x0009bfef) vtel_slider_pane_g4

0x6ef8,	// (0x0009c016) vtel_slider_pane_g5_ParamLimits

0x6ef8,	// (0x0009c016) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000a4b00) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000a4b00) vtel_slider_pane_g

0x4505,	// (0x00099623) main_gallery2_pane

0x6670,	// (0x0009b78e) aid_size_row_itut2_dropdow_list_ParamLimits

0x6670,	// (0x0009b78e) aid_size_row_itut2_dropdow_list

0x66de,	// (0x0009b7fc) grid_vitu2_function_top_pane_ParamLimits

0x66de,	// (0x0009b7fc) grid_vitu2_function_top_pane

0x6734,	// (0x0009b852) popup_vitu2_dropdown_list_window_ParamLimits

0x6734,	// (0x0009b852) popup_vitu2_dropdown_list_window

0x6754,	// (0x0009b872) popup_vitu2_match_list_window

0x6f13,	// (0x0009c031) cell_vitu2_function_top_pane_ParamLimits

0x6f13,	// (0x0009c031) cell_vitu2_function_top_pane

0x6f33,	// (0x0009c051) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f33,	// (0x0009c051) cell_vitu2_function_top_pane_cp01

0x6f51,	// (0x0009c06f) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f51,	// (0x0009c06f) cell_vitu2_function_top_wide_pane

0x4505,	// (0x00099623) bg_button_pane_cp012

0x6f6f,	// (0x0009c08d) cell_vitu2_function_top_pane_g1

0x6f83,	// (0x0009c0a1) bg_button_pane_cp013_ParamLimits

0x6f83,	// (0x0009c0a1) bg_button_pane_cp013

0x6f9f,	// (0x0009c0bd) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6f9f,	// (0x0009c0bd) cell_vitu2_function_top_wide_pane_g1

0x1191,	// (0x000962af) bg_popup_sub_pane_cp20

0x6fb7,	// (0x0009c0d5) list_vitu2_match_list_pane

0xc9e7,	// (0x000a1b05) bg_popup_sub_pane_cp20_g1

0xc9ef,	// (0x000a1b0d) bg_popup_sub_pane_cp20_g2

0x9ecf,	// (0x0009efed) bg_popup_sub_pane_cp20_g3

0xc9f7,	// (0x000a1b15) bg_popup_sub_pane_cp20_g4

0x9eaf,	// (0x0009efcd) bg_popup_sub_pane_cp20_g5

0xcc2f,	// (0x000a1d4d) bg_popup_sub_pane_cp20_g6

0xca07,	// (0x000a1b25) bg_popup_sub_pane_cp20_g7

0xca0f,	// (0x000a1b2d) bg_popup_sub_pane_cp20_g8

0xca17,	// (0x000a1b35) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000a4b0b) bg_popup_sub_pane_cp20_g

0x6fcf,	// (0x0009c0ed) list_vitu2_match_list_item_pane_ParamLimits

0x6fcf,	// (0x0009c0ed) list_vitu2_match_list_item_pane

0x6fe1,	// (0x0009c0ff) list_vitu2_match_list_item_pane_t1

0x11ab,	// (0x000962c9) bg_popup_sub_pane_cp21

0x7033,	// (0x0009c151) grid_vitu2_dropdown_list_pane

0x703b,	// (0x0009c159) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x703b,	// (0x0009c159) cell_vitu2_dropdown_list_char_pane

0x705c,	// (0x0009c17a) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x705c,	// (0x0009c17a) cell_vitu2_dropdown_list_ctrl_pane

0xcc37,	// (0x000a1d55) cell_vitu2_dropdown_list_char_pane_g1

0xcc40,	// (0x000a1d5e) cell_vitu2_dropdown_list_char_pane_g2

0xcc49,	// (0x000a1d67) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000a4b28) cell_vitu2_dropdown_list_char_pane_g

0x7088,	// (0x0009c1a6) cell_vitu2_dropdown_list_char_pane_t1

0x7096,	// (0x0009c1b4) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7096,	// (0x0009c1b4) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70a6,	// (0x0009c1c4) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70a6,	// (0x0009c1c4) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70b7,	// (0x0009c1d5) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70b7,	// (0x0009c1d5) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70c7,	// (0x0009c1e5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70c7,	// (0x0009c1e5) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64a2,	// (0x0009b5c0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64a2,	// (0x0009b5c0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000a4b2f) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000a4b2f) cell_vitu2_dropdown_list_ctrl_pane_g

0x70e3,	// (0x0009c201) aid_size_cell_gallery2_ParamLimits

0x70e3,	// (0x0009c201) aid_size_cell_gallery2

0x70fd,	// (0x0009c21b) grid_gallery2_pane_ParamLimits

0x70fd,	// (0x0009c21b) grid_gallery2_pane

0x5a7c,	// (0x0009ab9a) scroll_pane_cp029_ParamLimits

0x5a7c,	// (0x0009ab9a) scroll_pane_cp029

0x7114,	// (0x0009c232) cell_gallery2_pane_ParamLimits

0x7114,	// (0x0009c232) cell_gallery2_pane

0xcc52,	// (0x000a1d70) cell_gallery2_pane_g2

0xdf82,	// (0x000a30a0) cell_gallery2_pane_g3

0xcc5a,	// (0x000a1d78) cell_gallery2_pane_g4

0xcc62,	// (0x000a1d80) cell_gallery2_pane_g5

0xa6de,	// (0x0009f7fc) grid_highlight_pane_cp10

0x6754,	// (0x0009b872) popup_vitu2_match_list_window_ParamLimits

0x6768,	// (0x0009b886) popup_vitu2_query_window_ParamLimits

0x6768,	// (0x0009b886) popup_vitu2_query_window

0x11ab,	// (0x000962c9) bg_vitu2_candi_button_pane

0xcc37,	// (0x000a1d55) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcc40,	// (0x000a1d5e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcc49,	// (0x000a1d67) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7168,	// (0x0009c286) bg_button_pane_cp015

0x717a,	// (0x0009c298) bg_button_pane_cp016

0x718d,	// (0x0009c2ab) bg_button_pane_cp017

0xbae2,	// (0x000a0c00) bg_popup_sub_pane_cp22

0xcc6a,	// (0x000a1d88) popup_vitu2_query_window_g1

0x71d2,	// (0x0009c2f0) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000a4b3a) popup_vitu2_query_window_g

0x71ef,	// (0x0009c30d) popup_vitu2_query_window_t1_ParamLimits

0x71ef,	// (0x0009c30d) popup_vitu2_query_window_t1

0x7222,	// (0x0009c340) popup_vitu2_query_window_t2_ParamLimits

0x7222,	// (0x0009c340) popup_vitu2_query_window_t2

0x7234,	// (0x0009c352) popup_vitu2_query_window_t3_ParamLimits

0x7234,	// (0x0009c352) popup_vitu2_query_window_t3

0x725c,	// (0x0009c37a) popup_vitu2_query_window_t4_ParamLimits

0x725c,	// (0x0009c37a) popup_vitu2_query_window_t4

0x727d,	// (0x0009c39b) popup_vitu2_query_window_t5_ParamLimits

0x727d,	// (0x0009c39b) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000a4b41) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000a4b41) popup_vitu2_query_window_t

0xcae9,	// (0x000a1c07) main_cset_text_pane

0x6b59,	// (0x0009bc77) aid_area_touch_slider_ParamLimits

0x6b75,	// (0x0009bc93) cset_slider_pane_ParamLimits

0x6b9f,	// (0x0009bcbd) main_cset_slider_pane_g1_ParamLimits

0x6bb4,	// (0x0009bcd2) main_cset_slider_pane_g2_ParamLimits

0xcb0a,	// (0x000a1c28) main_cset_slider_pane_g3_ParamLimits

0xcb0a,	// (0x000a1c28) main_cset_slider_pane_g3

0x6bc9,	// (0x0009bce7) main_cset_slider_pane_g4_ParamLimits

0x6bc9,	// (0x0009bce7) main_cset_slider_pane_g4

0x6bd8,	// (0x0009bcf6) main_cset_slider_pane_g5_ParamLimits

0x6bd8,	// (0x0009bcf6) main_cset_slider_pane_g5

0x6be6,	// (0x0009bd04) main_cset_slider_pane_g6_ParamLimits

0x6be6,	// (0x0009bd04) main_cset_slider_pane_g6

0xf976,	// (0x000a4a94) main_cset_slider_pane_g_ParamLimits

0xcb3a,	// (0x000a1c58) main_cset_slider_pane_t1_ParamLimits

0x6c76,	// (0x0009bd94) main_cset_slider_pane_t2_ParamLimits

0x6c90,	// (0x0009bdae) main_cset_slider_pane_t3_ParamLimits

0x6caa,	// (0x0009bdc8) main_cset_slider_pane_t4_ParamLimits

0x6cc4,	// (0x0009bde2) main_cset_slider_pane_t5_ParamLimits

0x6ce2,	// (0x0009be00) main_cset_slider_pane_t6_ParamLimits

0x6cf9,	// (0x0009be17) main_cset_slider_pane_t7_ParamLimits

0x6d27,	// (0x0009be45) main_cset_slider_pane_t8_ParamLimits

0x6d27,	// (0x0009be45) main_cset_slider_pane_t8

0x6d4f,	// (0x0009be6d) main_cset_slider_pane_t9_ParamLimits

0x6d4f,	// (0x0009be6d) main_cset_slider_pane_t9

0x6d77,	// (0x0009be95) main_cset_slider_pane_t10_ParamLimits

0x6d77,	// (0x0009be95) main_cset_slider_pane_t10

0x6d9f,	// (0x0009bebd) main_cset_slider_pane_t11_ParamLimits

0x6d9f,	// (0x0009bebd) main_cset_slider_pane_t11

0x6dc9,	// (0x0009bee7) main_cset_slider_pane_t12_ParamLimits

0x6dc9,	// (0x0009bee7) main_cset_slider_pane_t12

0x6de6,	// (0x0009bf04) main_cset_slider_pane_t13_ParamLimits

0x6de6,	// (0x0009bf04) main_cset_slider_pane_t13

0xf99b,	// (0x000a4ab9) main_cset_slider_pane_t_ParamLimits

0xe72a,	// (0x000a3848) bg_popup_sub_pane_cp011

0xcc76,	// (0x000a1d94) main_cset_text_pane_g1

0xcc7e,	// (0x000a1d9c) main_cset_text_pane_t1

0xcc8c,	// (0x000a1daa) main_cset_text_pane_t2

0xccb5,	// (0x000a1dd3) main_cset_text_pane_t3

0xccc3,	// (0x000a1de1) main_cset_text_pane_t4

0xccd1,	// (0x000a1def) main_cset_text_pane_t5

0xccdf,	// (0x000a1dfd) main_cset_text_pane_t6

0xcced,	// (0x000a1e0b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000a4b50) main_cset_text_pane_t

0x11ab,	// (0x000962c9) main_cam4_burst_pane

0x11ab,	// (0x000962c9) main_cam5_pane

0x6aa8,	// (0x0009bbc6) bg_button_pane_cp019

0x6ab1,	// (0x0009bbcf) bg_button_pane_cp020

0xcb16,	// (0x000a1c34) main_cset_slider_pane_g7_ParamLimits

0xcb16,	// (0x000a1c34) main_cset_slider_pane_g7

0xcb22,	// (0x000a1c40) main_cset_slider_pane_g8_ParamLimits

0xcb22,	// (0x000a1c40) main_cset_slider_pane_g8

0x6bfa,	// (0x0009bd18) main_cset_slider_pane_g9_ParamLimits

0x6bfa,	// (0x0009bd18) main_cset_slider_pane_g9

0x6c06,	// (0x0009bd24) main_cset_slider_pane_g10_ParamLimits

0x6c06,	// (0x0009bd24) main_cset_slider_pane_g10

0x6c12,	// (0x0009bd30) main_cset_slider_pane_g11_ParamLimits

0x6c12,	// (0x0009bd30) main_cset_slider_pane_g11

0x6c1e,	// (0x0009bd3c) main_cset_slider_pane_g12_ParamLimits

0x6c1e,	// (0x0009bd3c) main_cset_slider_pane_g12

0x6c2a,	// (0x0009bd48) main_cset_slider_pane_g13_ParamLimits

0x6c2a,	// (0x0009bd48) main_cset_slider_pane_g13

0x6c36,	// (0x0009bd54) main_cset_slider_pane_g14_ParamLimits

0x6c36,	// (0x0009bd54) main_cset_slider_pane_g14

0x6c42,	// (0x0009bd60) main_cset_slider_pane_g15_ParamLimits

0x6c42,	// (0x0009bd60) main_cset_slider_pane_g15

0xcb68,	// (0x000a1c86) main_cset_slider_pane_t14_ParamLimits

0xcb68,	// (0x000a1c86) main_cset_slider_pane_t14

0xcba1,	// (0x000a1cbf) main_cset_slider_pane_t15_ParamLimits

0xcba1,	// (0x000a1cbf) main_cset_slider_pane_t15

0x72f4,	// (0x0009c412) aid_cam4_burst_size_cell_ParamLimits

0x72f4,	// (0x0009c412) aid_cam4_burst_size_cell

0x7310,	// (0x0009c42e) grid_cam4_burst_pane_ParamLimits

0x7310,	// (0x0009c42e) grid_cam4_burst_pane

0x7340,	// (0x0009c45e) linegrid_cam4_burst_pane_ParamLimits

0x7340,	// (0x0009c45e) linegrid_cam4_burst_pane

0x7360,	// (0x0009c47e) scroll_pane_cp30_ParamLimits

0x7360,	// (0x0009c47e) scroll_pane_cp30

0x736c,	// (0x0009c48a) cell_cam4_burst_pane_ParamLimits

0x736c,	// (0x0009c48a) cell_cam4_burst_pane

0xccfb,	// (0x000a1e19) linegrid_cam4_burst_pane_g1_ParamLimits

0xccfb,	// (0x000a1e19) linegrid_cam4_burst_pane_g1

0x73a8,	// (0x0009c4c6) linegrid_cam4_burst_pane_g2_ParamLimits

0x73a8,	// (0x0009c4c6) linegrid_cam4_burst_pane_g2

0xcd08,	// (0x000a1e26) linegrid_cam4_burst_pane_g3_ParamLimits

0xcd08,	// (0x000a1e26) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000a4b5f) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000a4b5f) linegrid_cam4_burst_pane_g

0x73b9,	// (0x0009c4d7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73b9,	// (0x0009c4d7) linegrid_cam4_burst_pane_g3_copy1

0xcd15,	// (0x000a1e33) linegrid_cam4_burst_pane_g4_ParamLimits

0xcd15,	// (0x000a1e33) linegrid_cam4_burst_pane_g4

0x73d3,	// (0x0009c4f1) linegrid_cam4_burst_pane_g5_ParamLimits

0x73d3,	// (0x0009c4f1) linegrid_cam4_burst_pane_g5

0x73e4,	// (0x0009c502) linegrid_cam4_burst_pane_g6_ParamLimits

0x73e4,	// (0x0009c502) linegrid_cam4_burst_pane_g6

0xcd22,	// (0x000a1e40) linegrid_cam4_burst_pane_g7_ParamLimits

0xcd22,	// (0x000a1e40) linegrid_cam4_burst_pane_g7

0x73f5,	// (0x0009c513) cell_cam4_burst_pane_g1

0xcd3b,	// (0x000a1e59) main_cam5_pane_t1_ParamLimits

0xcd3b,	// (0x000a1e59) main_cam5_pane_t1

0xcd4d,	// (0x000a1e6b) main_cam5_pane_t2_ParamLimits

0xcd4d,	// (0x000a1e6b) main_cam5_pane_t2

0xcd5f,	// (0x000a1e7d) main_cam5_pane_t3_ParamLimits

0xcd5f,	// (0x000a1e7d) main_cam5_pane_t3

0xcd71,	// (0x000a1e8f) main_cam5_pane_t4_ParamLimits

0xcd71,	// (0x000a1e8f) main_cam5_pane_t4

0xcd89,	// (0x000a1ea7) main_cam5_pane_t5_ParamLimits

0xcd89,	// (0x000a1ea7) main_cam5_pane_t5

0xcd9d,	// (0x000a1ebb) main_cam5_pane_t6_ParamLimits

0xcd9d,	// (0x000a1ebb) main_cam5_pane_t6

0xcdb1,	// (0x000a1ecf) main_cam5_pane_t7_ParamLimits

0xcdb1,	// (0x000a1ecf) main_cam5_pane_t7

0xcdc3,	// (0x000a1ee1) main_cam5_pane_t8_ParamLimits

0xcdc3,	// (0x000a1ee1) main_cam5_pane_t8

0xcddf,	// (0x000a1efd) main_cam5_pane_t9_ParamLimits

0xcddf,	// (0x000a1efd) main_cam5_pane_t9

0xcdf1,	// (0x000a1f0f) main_cam5_pane_t10_ParamLimits

0xcdf1,	// (0x000a1f0f) main_cam5_pane_t10

0xce03,	// (0x000a1f21) main_cam5_pane_t11_ParamLimits

0xce03,	// (0x000a1f21) main_cam5_pane_t11

0xce15,	// (0x000a1f33) main_cam5_pane_t12_ParamLimits

0xce15,	// (0x000a1f33) main_cam5_pane_t12

0xce2a,	// (0x000a1f48) main_cam5_pane_t13_ParamLimits

0xce2a,	// (0x000a1f48) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000a4b6b) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000a4b6b) main_cam5_pane_t

0x1150,	// (0x0009626e) popup_scut_keymap_window_ParamLimits

0x1150,	// (0x0009626e) popup_scut_keymap_window

0x7408,	// (0x0009c526) aid_size_cell_brow_shortcut

0xa6de,	// (0x0009f7fc) bg_popup_window_pane_cp010

0x7414,	// (0x0009c532) grid_scut_pane

0x7420,	// (0x0009c53e) cell_scut_pane_ParamLimits

0x7420,	// (0x0009c53e) cell_scut_pane

0x7437,	// (0x0009c555) cell_scut_pane_g1

0xce53,	// (0x000a1f71) cell_scut_pane_t1

0xce62,	// (0x000a1f80) cell_scut_pane_t2

0x7440,	// (0x0009c55e) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000a4b86) cell_scut_pane_t

0x525d,	// (0x0009a37b) main_mup3_pane_g8_ParamLimits

0x525d,	// (0x0009a37b) main_mup3_pane_g8

0x667e,	// (0x0009b79c) area_vitu2_query_pane_ParamLimits

0x667e,	// (0x0009b79c) area_vitu2_query_pane

0x71a0,	// (0x0009c2be) input_focus_pane_cp08

0xce71,	// (0x000a1f8f) area_vitu2_query_pane_g1

0x744e,	// (0x0009c56c) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000a4b8d) area_vitu2_query_pane_g

0x745f,	// (0x0009c57d) area_vitu2_query_pane_t1_ParamLimits

0x745f,	// (0x0009c57d) area_vitu2_query_pane_t1

0x7473,	// (0x0009c591) area_vitu2_query_pane_t2_ParamLimits

0x7473,	// (0x0009c591) area_vitu2_query_pane_t2

0x7487,	// (0x0009c5a5) area_vitu2_query_pane_t3_ParamLimits

0x7487,	// (0x0009c5a5) area_vitu2_query_pane_t3

0xce7d,	// (0x000a1f9b) area_vitu2_query_pane_t4_ParamLimits

0xce7d,	// (0x000a1f9b) area_vitu2_query_pane_t4

0xcea5,	// (0x000a1fc3) area_vitu2_query_pane_t5_ParamLimits

0xcea5,	// (0x000a1fc3) area_vitu2_query_pane_t5

0xcecd,	// (0x000a1feb) area_vitu2_query_pane_t6_ParamLimits

0xcecd,	// (0x000a1feb) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000a4b92) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000a4b92) area_vitu2_query_pane_t

0x74af,	// (0x0009c5cd) bg_button_pane_cp018

0x74bd,	// (0x0009c5db) bg_button_pane_cp021

0x74c9,	// (0x0009c5e7) bg_button_pane_cp022

0x74da,	// (0x0009c5f8) input_focus_pane_cp09

0xa527,	// (0x0009f645) aid_size_touch_mv_arrow_left

0xa550,	// (0x0009f66e) aid_size_touch_mv_arrow_right

0x6c5a,	// (0x0009bd78) main_cset_slider_pane_g16_ParamLimits

0x6c5a,	// (0x0009bd78) main_cset_slider_pane_g16

0x6c68,	// (0x0009bd86) main_cset_slider_pane_g17_ParamLimits

0x6c68,	// (0x0009bd86) main_cset_slider_pane_g17

0x73f5,	// (0x0009c513) cell_cam4_burst_pane_g1_ParamLimits

0xe72a,	// (0x000a3848) compa_mode_pane

0x6e86,	// (0x0009bfa4) popup_vtel_slider_window_g3_ParamLimits

0x6e86,	// (0x0009bfa4) popup_vtel_slider_window_g3

0x6e9a,	// (0x0009bfb8) popup_vtel_slider_window_g4_ParamLimits

0x6e9a,	// (0x0009bfb8) popup_vtel_slider_window_g4

0x6eae,	// (0x0009bfcc) popup_vtel_slider_window_t1_ParamLimits

0x6eae,	// (0x0009bfcc) popup_vtel_slider_window_t1

0x11ab,	// (0x000962c9) main_cl_pane

0x45a3,	// (0x000996c1) popup_imed_adjust2_window_ParamLimits

0xbae2,	// (0x000a0c00) bg_tb_trans_pane_cp05_ParamLimits

0xc47d,	// (0x000a159b) popup_imed_adjust2_window_g1_ParamLimits

0xc48c,	// (0x000a15aa) popup_imed_adjust2_window_g2_ParamLimits

0xc48c,	// (0x000a15aa) popup_imed_adjust2_window_g2

0xc498,	// (0x000a15b6) popup_imed_adjust2_window_g3_ParamLimits

0xc498,	// (0x000a15b6) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000a48fd) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000a48fd) popup_imed_adjust2_window_g

0xc4a4,	// (0x000a15c2) popup_imed_adjust2_window_t1_ParamLimits

0xc4bc,	// (0x000a15da) slider_imed_adjust_pane_ParamLimits

0xc4d0,	// (0x000a15ee) slider_imed_adjust_pane_g1_ParamLimits

0xc4e0,	// (0x000a15fe) slider_imed_adjust_pane_g2_ParamLimits

0xc4f0,	// (0x000a160e) slider_imed_adjust_pane_g3_ParamLimits

0xc501,	// (0x000a161f) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000a4904) slider_imed_adjust_pane_g_ParamLimits

0x63b7,	// (0x0009b4d5) aid_touch_area_cam4_ParamLimits

0x63b7,	// (0x0009b4d5) aid_touch_area_cam4

0x63c7,	// (0x0009b4e5) battery_pane_cp01

0x644e,	// (0x0009b56c) main_camera4_pane_g6_ParamLimits

0x644e,	// (0x0009b56c) main_camera4_pane_g6

0x646c,	// (0x0009b58a) main_camera4_pane_t2_ParamLimits

0x646c,	// (0x0009b58a) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000a4a07) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000a4a07) main_camera4_pane_t

0x6501,	// (0x0009b61f) aid_touch_area_vid4_ParamLimits

0x6501,	// (0x0009b61f) aid_touch_area_vid4

0x6541,	// (0x0009b65f) main_video4_pane_g5_ParamLimits

0x6541,	// (0x0009b65f) main_video4_pane_g5

0x6565,	// (0x0009b683) vid4_progress_pane_ParamLimits

0x6565,	// (0x0009b683) vid4_progress_pane

0xcb2e,	// (0x000a1c4c) main_cset_slider_pane_g18_ParamLimits

0xcb2e,	// (0x000a1c4c) main_cset_slider_pane_g18

0xcd2f,	// (0x000a1e4d) cell_cam4_burst_pane_g2_ParamLimits

0xcd2f,	// (0x000a1e4d) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000a4b66) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000a4b66) cell_cam4_burst_pane_g

0x74eb,	// (0x0009c609) bg_cl_pane_ParamLimits

0x74eb,	// (0x0009c609) bg_cl_pane

0x74f7,	// (0x0009c615) cl_header_pane_ParamLimits

0x74f7,	// (0x0009c615) cl_header_pane

0x7503,	// (0x0009c621) cl_listscroll_pane_ParamLimits

0x7503,	// (0x0009c621) cl_listscroll_pane

0xcf19,	// (0x000a2037) bg_cl_pane_g1

0xcf21,	// (0x000a203f) bg_cl_pane_g2

0xcf29,	// (0x000a2047) bg_cl_pane_g3

0xcf31,	// (0x000a204f) bg_cl_pane_g4

0xcf39,	// (0x000a2057) bg_cl_pane_g5

0xcf41,	// (0x000a205f) bg_cl_pane_g6

0xcf49,	// (0x000a2067) bg_cl_pane_g7

0xcf51,	// (0x000a206f) bg_cl_pane_g8

0xcf59,	// (0x000a2077) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000a4ba1) bg_cl_pane_g

0x750f,	// (0x0009c62d) aid_height_cl_leading_ParamLimits

0x750f,	// (0x0009c62d) aid_height_cl_leading

0x751b,	// (0x0009c639) aid_height_cl_text_ParamLimits

0x751b,	// (0x0009c639) aid_height_cl_text

0xe5a0,	// (0x000a36be) bg_cl_header_pane_ParamLimits

0xe5a0,	// (0x000a36be) bg_cl_header_pane

0x7533,	// (0x0009c651) cl_header_pane_g1_ParamLimits

0x7533,	// (0x0009c651) cl_header_pane_g1

0x7540,	// (0x0009c65e) cl_header_pane_t1_ParamLimits

0x7540,	// (0x0009c65e) cl_header_pane_t1

0xcf61,	// (0x000a207f) cl_list_pane

0xcb01,	// (0x000a1c1f) hc_scroll_pane_cp01

0x9eaf,	// (0x0009efcd) bg_cl_header_pane_g1

0xc9e7,	// (0x000a1b05) bg_cl_header_pane_g2

0x9ecf,	// (0x0009efed) bg_cl_header_pane_g3

0xc9f7,	// (0x000a1b15) bg_cl_header_pane_g4

0xc9ef,	// (0x000a1b0d) bg_cl_header_pane_g5

0xcc2f,	// (0x000a1d4d) bg_cl_header_pane_g6

0xca0f,	// (0x000a1b2d) bg_cl_header_pane_g7

0xca17,	// (0x000a1b35) bg_cl_header_pane_g8

0xca07,	// (0x000a1b25) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000a4bb4) bg_cl_header_pane_g

0x7552,	// (0x0009c670) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7552,	// (0x0009c670) hc_cl_list_double_graphic_heading_pane

0x7563,	// (0x0009c681) hc_cl_list_single_graphic_pane_ParamLimits

0x7563,	// (0x0009c681) hc_cl_list_single_graphic_pane

0x757c,	// (0x0009c69a) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x757c,	// (0x0009c69a) hc_cl_list_single_graphic_pane_g1

0x7588,	// (0x0009c6a6) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7588,	// (0x0009c6a6) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000a4bc7) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000a4bc7) hc_cl_list_single_graphic_pane_g

0x759c,	// (0x0009c6ba) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x759c,	// (0x0009c6ba) hc_cl_list_single_graphic_pane_t1

0x757c,	// (0x0009c69a) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x757c,	// (0x0009c69a) hc_cl_list_double_graphic_heading_pane_g1

0x75b1,	// (0x0009c6cf) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75b1,	// (0x0009c6cf) hc_cl_list_double_graphic_heading_pane_g2

0x75c5,	// (0x0009c6e3) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75c5,	// (0x0009c6e3) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000a4bcc) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000a4bcc) hc_cl_list_double_graphic_heading_pane_g

0x75d9,	// (0x0009c6f7) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75d9,	// (0x0009c6f7) hc_cl_list_double_graphic_heading_pane_t1

0x75ee,	// (0x0009c70c) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75ee,	// (0x0009c70c) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000a4bd3) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000a4bd3) hc_cl_list_double_graphic_heading_pane_t

0x760b,	// (0x0009c729) vid4_progress_pane_g1

0x761b,	// (0x0009c739) vid4_progress_pane_g2

0x762b,	// (0x0009c749) vid4_progress_pane_g3

0x763d,	// (0x0009c75b) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000a4bd8) vid4_progress_pane_g

0x7655,	// (0x0009c773) vid4_progress_pane_t1

0x766b,	// (0x0009c789) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000a4be3) vid4_progress_pane_t

0x7695,	// (0x0009c7b3) wait_bar_pane_cp07

0xbcdd,	// (0x000a0dfb) blid_firmament_pane_ParamLimits

0xbd20,	// (0x000a0e3e) popup_blid_sat_info2_window_g1

0xbd44,	// (0x000a0e62) popup_blid_sat_info2_window_t3

0xbd52,	// (0x000a0e70) popup_blid_sat_info2_window_t4

0xbd60,	// (0x000a0e7e) popup_blid_sat_info2_window_t5

0xbd6e,	// (0x000a0e8c) popup_blid_sat_info2_window_t6

0xbd7e,	// (0x000a0e9c) popup_blid_sat_info2_window_t7

0xbd8c,	// (0x000a0eaa) popup_blid_sat_info2_window_t8

0xbd9a,	// (0x000a0eb8) popup_blid_sat_info2_window_t9

0xbda8,	// (0x000a0ec6) popup_blid_sat_info2_window_t10

0xbe6a,	// (0x000a0f88) aid_firma_cardinal_ParamLimits

0xbe7e,	// (0x000a0f9c) blid_firmament_pane_t1_ParamLimits

0xbe95,	// (0x000a0fb3) blid_firmament_pane_t2_ParamLimits

0xbeac,	// (0x000a0fca) blid_firmament_pane_t3_ParamLimits

0xbec3,	// (0x000a0fe1) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000a47f1) blid_firmament_pane_t_ParamLimits

0xbeef,	// (0x000a100d) blid_sat_info_pane_ParamLimits

0x4505,	// (0x00099623) main_cam_set_pane_ParamLimits

0x5a15,	// (0x0009ab33) aid_size_cell_colour_35_ParamLimits

0x5a2f,	// (0x0009ab4d) aid_size_cell_colour_112_ParamLimits

0x5a46,	// (0x0009ab64) aid_size_cell_effect_ParamLimits

0xe873,	// (0x000a3991) bg_tb_trans_pane_cp02_ParamLimits

0xb9e1,	// (0x000a0aff) heading_imed_pane_ParamLimits

0x5a60,	// (0x0009ab7e) listscroll_imed_pane_ParamLimits

0xb0fc,	// (0x000a021a) popup_call2_audio_first_window_g5_ParamLimits

0xb0fc,	// (0x000a021a) popup_call2_audio_first_window_g5

0x6166,	// (0x0009b284) aid_size_touch_image3_arrow_left_ParamLimits

0x6166,	// (0x0009b284) aid_size_touch_image3_arrow_left

0x617c,	// (0x0009b29a) aid_size_touch_image3_arrow_right_ParamLimits

0x617c,	// (0x0009b29a) aid_size_touch_image3_arrow_right

0x7680,	// (0x0009c79e) vid4_progress_pane_t3

0x5cfe,	// (0x0009ae1c) main_hwr_training_symbol_option_pane_ParamLimits

0x5cfe,	// (0x0009ae1c) main_hwr_training_symbol_option_pane

0xc76a,	// (0x000a1888) popup_hwr_training_preview_window_ParamLimits

0xc76a,	// (0x000a1888) popup_hwr_training_preview_window

0x5d5f,	// (0x0009ae7d) hwr_training_navi_pane_g5_ParamLimits

0x5d5f,	// (0x0009ae7d) hwr_training_navi_pane_g5

0xc9d5,	// (0x000a1af3) popup_char_count_window

0x1191,	// (0x000962af) bg_popup_sub_pane_cp20_ParamLimits

0x6fb7,	// (0x0009c0d5) list_vitu2_match_list_pane_ParamLimits

0x6fc3,	// (0x0009c0e1) vitu2_page_scroll_pane_ParamLimits

0x6fc3,	// (0x0009c0e1) vitu2_page_scroll_pane

0xcf84,	// (0x000a20a2) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcf84,	// (0x000a20a2) list_single_hwr_training_symbol_option_pane

0xcf97,	// (0x000a20b5) list_single_hwr_training_symbol_option_pane_g1

0xcf9f,	// (0x000a20bd) list_single_hwr_training_symbol_option_pane_t1

0xcfad,	// (0x000a20cb) bg_button_pane_cp023

0xcfb6,	// (0x000a20d4) bg_button_pane_cp024

0x76d7,	// (0x0009c7f5) vitu2_page_scroll_pane_g1

0x76df,	// (0x0009c7fd) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000a4bea) vitu2_page_scroll_pane_g

0x76e7,	// (0x0009c805) vitu2_page_scroll_pane_t1

0xd009,	// (0x000a2127) popup_char_count_window_g1

0xd012,	// (0x000a2130) popup_char_count_window_g2

0xd01b,	// (0x000a2139) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000a4bef) popup_char_count_window_g

0xd024,	// (0x000a2142) popup_char_count_window_t1

0x11ab,	// (0x000962c9) main_vded2_pane

0xc469,	// (0x000a1587) aid_size_cell_imed_line

0xc473,	// (0x000a1591) grid_imed_line_width_pane

0x65d3,	// (0x0009b6f1) vid4_indicators_pane_g4

0xd032,	// (0x000a2150) cell_imed_line_width_pane_ParamLimits

0xd032,	// (0x000a2150) cell_imed_line_width_pane

0xd046,	// (0x000a2164) cell_imed_line_width_pane_g1

0xcfe9,	// (0x000a2107) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000a4bf6) cell_imed_line_width_pane_g

0x76f6,	// (0x0009c814) main_vded2_pane_g1_ParamLimits

0x76f6,	// (0x0009c814) main_vded2_pane_g1

0x7703,	// (0x0009c821) main_vded2_pane_g2_ParamLimits

0x7703,	// (0x0009c821) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000a4bfb) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000a4bfb) main_vded2_pane_g

0x7711,	// (0x0009c82f) vded2_slider_pane_ParamLimits

0x7711,	// (0x0009c82f) vded2_slider_pane

0x771e,	// (0x0009c83c) aid_size_touch_vded2_end

0x7728,	// (0x0009c846) aid_size_touch_vded2_playhead

0xd04f,	// (0x000a216d) aid_size_touch_vded2_start

0xd057,	// (0x000a2175) vded2_slider_bg_pane

0xd060,	// (0x000a217e) vded2_slider_pane_g1

0xd069,	// (0x000a2187) vded2_slider_pane_g2

0x7730,	// (0x0009c84e) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000a4c00) vded2_slider_pane_g

0xd071,	// (0x000a218f) vded2_slider_bg_pane_g1

0xd07a,	// (0x000a2198) vded2_slider_bg_pane_g2

0xd083,	// (0x000a21a1) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000a4c07) vded2_slider_bg_pane_g

0x3ded,	// (0x00098f0b) aid_postcard_touch_down_pane_ParamLimits

0x3ded,	// (0x00098f0b) aid_postcard_touch_down_pane

0x3dfd,	// (0x00098f1b) aid_postcard_touch_up_pane_ParamLimits

0x3dfd,	// (0x00098f1b) aid_postcard_touch_up_pane

0x11ab,	// (0x000962c9) main_blid2_pane

0x452e,	// (0x0009964c) popup_blid2_search_window

0xe72a,	// (0x000a3848) blid2_gps_pane

0xe72a,	// (0x000a3848) blid2_navig_pane

0xe72a,	// (0x000a3848) blid2_search_pane

0xe72a,	// (0x000a3848) blid2_tripm_pane

0x7739,	// (0x0009c857) blid2_search_pane_g1_ParamLimits

0x7739,	// (0x0009c857) blid2_search_pane_g1

0x7749,	// (0x0009c867) blid2_search_pane_t1_ParamLimits

0x7749,	// (0x0009c867) blid2_search_pane_t1

0x775b,	// (0x0009c879) aid_size_cell_blid2_gps_ParamLimits

0x775b,	// (0x0009c879) aid_size_cell_blid2_gps

0x776b,	// (0x0009c889) blid2_gps_pane_g1_ParamLimits

0x776b,	// (0x0009c889) blid2_gps_pane_g1

0x7777,	// (0x0009c895) grid_blid2_satellite_pane_ParamLimits

0x7777,	// (0x0009c895) grid_blid2_satellite_pane

0x7787,	// (0x0009c8a5) blid2_navig_pane_g1_ParamLimits

0x7787,	// (0x0009c8a5) blid2_navig_pane_g1

0x7793,	// (0x0009c8b1) blid2_navig_pane_t1_ParamLimits

0x7793,	// (0x0009c8b1) blid2_navig_pane_t1

0x77a5,	// (0x0009c8c3) blid2_navig_pane_t2_ParamLimits

0x77a5,	// (0x0009c8c3) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000a4c0e) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000a4c0e) blid2_navig_pane_t

0x77b7,	// (0x0009c8d5) blid2_navig_ring_pane_ParamLimits

0x77b7,	// (0x0009c8d5) blid2_navig_ring_pane

0x77c7,	// (0x0009c8e5) blid2_speed_pane_ParamLimits

0x77c7,	// (0x0009c8e5) blid2_speed_pane

0x77d3,	// (0x0009c8f1) blid2_tripm_pane_g1_ParamLimits

0x77d3,	// (0x0009c8f1) blid2_tripm_pane_g1

0x77e3,	// (0x0009c901) blid2_tripm_pane_g2_ParamLimits

0x77e3,	// (0x0009c901) blid2_tripm_pane_g2

0x77ef,	// (0x0009c90d) blid2_tripm_pane_g3_ParamLimits

0x77ef,	// (0x0009c90d) blid2_tripm_pane_g3

0x77fb,	// (0x0009c919) blid2_tripm_pane_g4_ParamLimits

0x77fb,	// (0x0009c919) blid2_tripm_pane_g4

0x7807,	// (0x0009c925) blid2_tripm_pane_g5_ParamLimits

0x7807,	// (0x0009c925) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000a4c13) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000a4c13) blid2_tripm_pane_g

0x7823,	// (0x0009c941) blid2_tripm_pane_t1_ParamLimits

0x7823,	// (0x0009c941) blid2_tripm_pane_t1

0x7837,	// (0x0009c955) blid2_tripm_pane_t2_ParamLimits

0x7837,	// (0x0009c955) blid2_tripm_pane_t2

0x7849,	// (0x0009c967) blid2_tripm_pane_t3_ParamLimits

0x7849,	// (0x0009c967) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000a4c20) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000a4c20) blid2_tripm_pane_t

0x787b,	// (0x0009c999) cell_blid2_satellite_pane_ParamLimits

0x787b,	// (0x0009c999) cell_blid2_satellite_pane

0x7895,	// (0x0009c9b3) cell_blid2_satellite_pane_g1

0xd08c,	// (0x000a21aa) cell_blid2_satellite_pane_t1

0xbeff,	// (0x000a101d) blid2_speed_pane_g1

0xd09a,	// (0x000a21b8) blid2_speed_pane_t1

0xd0a8,	// (0x000a21c6) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000a4c29) blid2_speed_pane_t

0xbeff,	// (0x000a101d) blid2_navig_ring_pane_g1

0x789e,	// (0x0009c9bc) blid2_navig_ring_pane_g2

0x78a6,	// (0x0009c9c4) blid2_navig_ring_pane_g3

0x78ae,	// (0x0009c9cc) blid2_navig_ring_pane_g4

0x78b6,	// (0x0009c9d4) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000a4c2e) blid2_navig_ring_pane_g

0xe72a,	// (0x000a3848) bg_popup_window_pane_cp011

0xd0b6,	// (0x000a21d4) popup_blid2_search_window_g1

0xd0be,	// (0x000a21dc) popup_blid2_search_window_t1

0xd0cc,	// (0x000a21ea) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000a4c39) popup_blid2_search_window_t

0x9dbe,	// (0x0009eedc) main_browser_pane_g1

0xeea8,	// (0x000a3fc6) main_browser_pane_ParamLimits

0x4505,	// (0x00099623) bg_button_pane_cp011_ParamLimits

0x687b,	// (0x0009b999) cell_vitu2_function_pane_g1_ParamLimits

0xbae2,	// (0x000a0c00) bg_popup_sub_pane_cp22_ParamLimits

0x71a0,	// (0x0009c2be) input_focus_pane_cp08_ParamLimits

0x71b7,	// (0x0009c2d5) popup_vitu2_query_button_pane_ParamLimits

0x71b7,	// (0x0009c2d5) popup_vitu2_query_button_pane

0x71c8,	// (0x0009c2e6) popup_vitu2_query_input_button_pane

0xcc6a,	// (0x000a1d88) popup_vitu2_query_window_g1_ParamLimits

0x71d2,	// (0x0009c2f0) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000a4b3a) popup_vitu2_query_window_g_ParamLimits

0xe72a,	// (0x000a3848) bg_button_pane_cp026

0x78be,	// (0x0009c9dc) popup_vitu2_query_input_button_pane_g1

0xe72a,	// (0x000a3848) bg_button_pane_cp025

0xd0da,	// (0x000a21f8) popup_vitu2_query_button_pane_t1

0x4f84,	// (0x0009a0a2) main_mp3_pane_t6

0x4f94,	// (0x0009a0b2) popup_slider_window_cp01

0x64b0,	// (0x0009b5ce) cam4_battery_pane

0x6590,	// (0x0009b6ae) cam4_battery_pane_cp02

0x7603,	// (0x0009c721) cam4_battery_pane_cp01

0x7603,	// (0x0009c721) cam4_battery_pane_cp03

0xcff1,	// (0x000a210f) cam4_battery_pane_g1

0xbeff,	// (0x000a101d) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000a4c3e) cam4_battery_pane_g

0xbdb6,	// (0x000a0ed4) popup_blid_sat_info2_window_t11

0xa527,	// (0x0009f645) aid_size_touch_mv_arrow_left_ParamLimits

0xa550,	// (0x0009f66e) aid_size_touch_mv_arrow_right_ParamLimits

0xa5ae,	// (0x0009f6cc) navi_pane_g1_ParamLimits

0xa5ba,	// (0x0009f6d8) navi_pane_g2_ParamLimits

0xa5e8,	// (0x0009f706) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a4503) navi_pane_g_ParamLimits

0x378d,	// (0x000988ab) navi_pane_mv_t1_ParamLimits

0x5a6c,	// (0x0009ab8a) grid_imed_effect_pane_ParamLimits

0x2140,	// (0x0009725e) aid_placing_vt_slider_lsc

0x9d0d,	// (0x0009ee2b) aid_placing_vt_slider_prt

0xe873,	// (0x000a3991) bg_tb_trans_pane_cp01_ParamLimits

0xc082,	// (0x000a11a0) popup_image_details_window_g1_ParamLimits

0xc095,	// (0x000a11b3) popup_image_details_window_g2_ParamLimits

0xc0aa,	// (0x000a11c8) popup_image_details_window_g3_ParamLimits

0xc0aa,	// (0x000a11c8) popup_image_details_window_g3

0xf718,	// (0x000a4836) popup_image_details_window_g_ParamLimits

0xc0be,	// (0x000a11dc) popup_image_details_window_t1_ParamLimits

0xc0d0,	// (0x000a11ee) popup_image_details_window_t2_ParamLimits

0xc0e9,	// (0x000a1207) popup_image_details_window_t3_ParamLimits

0xc0fd,	// (0x000a121b) popup_image_details_window_t4_ParamLimits

0xc118,	// (0x000a1236) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000a483d) popup_image_details_window_t_ParamLimits

0x7527,	// (0x0009c645) cl_header_name_pane_ParamLimits

0x7527,	// (0x0009c645) cl_header_name_pane

0x78c6,	// (0x0009c9e4) cl_header_name_pane_t1_ParamLimits

0x78c6,	// (0x0009c9e4) cl_header_name_pane_t1

0x78dd,	// (0x0009c9fb) cl_header_name_pane_t2_ParamLimits

0x78dd,	// (0x0009c9fb) cl_header_name_pane_t2

0x7907,	// (0x0009ca25) cl_header_name_pane_t3_ParamLimits

0x7907,	// (0x0009ca25) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000a4c43) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000a4c43) cl_header_name_pane_t

0xa677,	// (0x0009f795) navi_pane_mv_g2_ParamLimits

0xc992,	// (0x000a1ab0) field_vitu2_entry_pane_g1_ParamLimits

0xc99e,	// (0x000a1abc) field_vitu2_entry_pane_g2_ParamLimits

0xc9aa,	// (0x000a1ac8) field_vitu2_entry_pane_g3_ParamLimits

0xc9aa,	// (0x000a1ac8) field_vitu2_entry_pane_g3

0xf91b,	// (0x000a4a39) field_vitu2_entry_pane_g_ParamLimits

0x6806,	// (0x0009b924) cell_vitu2_itu_pane_g1_ParamLimits

0x6816,	// (0x0009b934) cell_vitu2_itu_pane_g2_ParamLimits

0x6816,	// (0x0009b934) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000a4a45) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000a4a45) cell_vitu2_itu_pane_g

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp05_ParamLimits

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp05

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp03

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp04

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp10_ParamLimits

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp10

0x74c9,	// (0x0009c5e7) bg_vkb2_func_pane_cp08

0x74af,	// (0x0009c5cd) bg_vkb2_func_pane_cp06

0x74bd,	// (0x0009c5db) bg_vkb2_func_pane_cp07

0xcfbf,	// (0x000a20dd) bg_vkb2_func_pane_cp11_ParamLimits

0xcfbf,	// (0x000a20dd) bg_vkb2_func_pane_cp11

0xcfd4,	// (0x000a20f2) bg_vkb2_func_pane_cp12_ParamLimits

0xcfd4,	// (0x000a20f2) bg_vkb2_func_pane_cp12

0xe72a,	// (0x000a3848) bg_vkb2_func_pane_cp09

0xc9e7,	// (0x000a1b05) bg_vkb2_func_pane_g1

0x9ecf,	// (0x0009efed) bg_vkb2_func_pane_g2

0xc9ef,	// (0x000a1b0d) bg_vkb2_func_pane_g3

0xc9f7,	// (0x000a1b15) bg_vkb2_func_pane_g4

0xcc2f,	// (0x000a1d4d) bg_vkb2_func_pane_g5

0xca0f,	// (0x000a1b2d) bg_vkb2_func_pane_g6

0xca17,	// (0x000a1b35) bg_vkb2_func_pane_g7

0xca07,	// (0x000a1b25) bg_vkb2_func_pane_g8

0x9eaf,	// (0x0009efcd) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000a4c4a) bg_vkb2_func_pane_g

0x7815,	// (0x0009c933) blid2_tripm_pane_g6_ParamLimits

0x7815,	// (0x0009c933) blid2_tripm_pane_g6

0xc822,	// (0x000a1940) mp4_progress_pane_g1

0x786f,	// (0x0009c98d) blid2_tripm_values_pane_ParamLimits

0x786f,	// (0x0009c98d) blid2_tripm_values_pane

0x792c,	// (0x0009ca4a) blid2_tripm_values_pane_t1

0x793a,	// (0x0009ca58) blid2_tripm_values_pane_t2

0x7948,	// (0x0009ca66) blid2_tripm_values_pane_t3

0x7956,	// (0x0009ca74) blid2_tripm_values_pane_t4

0x7964,	// (0x0009ca82) blid2_tripm_values_pane_t5

0x7972,	// (0x0009ca90) blid2_tripm_values_pane_t6

0x7980,	// (0x0009ca9e) blid2_tripm_values_pane_t7

0x798e,	// (0x0009caac) blid2_tripm_values_pane_t8

0x799c,	// (0x0009caba) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000a4c5d) blid2_tripm_values_pane_t

0x2180,	// (0x0009729e) call_video_pane_t1_ParamLimits

0x21a1,	// (0x000972bf) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a438c) call_video_pane_t_ParamLimits

0x3cbe,	// (0x00098ddc) msg_header_pane_g1_ParamLimits

0xa859,	// (0x0009f977) msg_header_pane_g2_ParamLimits

0xa859,	// (0x0009f977) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a45a6) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a45a6) msg_header_pane_g

0xeea8,	// (0x000a3fc6) main_clock2_pane_ParamLimits

0x5805,	// (0x0009a923) grid_clock2_toolbar_pane_ParamLimits

0x5805,	// (0x0009a923) grid_clock2_toolbar_pane

0x5805,	// (0x0009a923) listscroll_clock2_pane_ParamLimits

0x5805,	// (0x0009a923) listscroll_clock2_pane

0x58a9,	// (0x0009a9c7) main_clock2_pane_t3_ParamLimits

0x58a9,	// (0x0009a9c7) main_clock2_pane_t3

0x58bb,	// (0x0009a9d9) main_clock2_pane_t4_ParamLimits

0x58bb,	// (0x0009a9d9) main_clock2_pane_t4

0xd0e8,	// (0x000a2206) cell_clock2_toolbar_pane

0xd0f0,	// (0x000a220e) cell_clock2_toolbar_pane_cp01

0xd0f0,	// (0x000a220e) cell_clock2_toolbar_pane_cp02

0xd0f8,	// (0x000a2216) cell_clock2_toolbar_pane_cp03

0xd100,	// (0x000a221e) list_clock2_pane

0xa49d,	// (0x0009f5bb) scroll_pane_cp10

0xd108,	// (0x000a2226) list_single_clock2_pane_ParamLimits

0xd108,	// (0x000a2226) list_single_clock2_pane

0xa6de,	// (0x0009f7fc) list_highlight_pane_cp08

0xd115,	// (0x000a2233) list_single_clock2_pane_t1

0xd123,	// (0x000a2241) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000a4c70) list_single_clock2_pane_t

0xe72a,	// (0x000a3848) bg_button_pane_cp10

0xd131,	// (0x000a224f) cell_clock2_toolbar_pane_g1

0x3d5b,	// (0x00098e79) aid_main_viewer_pane_g1_ParamLimits

0x3d5b,	// (0x00098e79) aid_main_viewer_pane_g1

0x3d67,	// (0x00098e85) aid_main_viewer_pane_g2_ParamLimits

0x3d67,	// (0x00098e85) aid_main_viewer_pane_g2

0x3d73,	// (0x00098e91) aid_main_viewer_pane_g3_ParamLimits

0x3d73,	// (0x00098e91) aid_main_viewer_pane_g3

0x3d84,	// (0x00098ea2) aid_main_viewer_pane_g4_ParamLimits

0x3d84,	// (0x00098ea2) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a45b7) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a45b7) aid_main_viewer_pane_g

0x44f8,	// (0x00099616) main_calc_pane_ParamLimits

0x4513,	// (0x00099631) main_dialer2_pane_ParamLimits

0x11ab,	// (0x000962c9) main_cam6_pane

0x11ab,	// (0x000962c9) main_vid6_pane

0x5811,	// (0x0009a92f) listscroll_gen_pane_cp06_ParamLimits

0x5811,	// (0x0009a92f) listscroll_gen_pane_cp06

0x58cd,	// (0x0009a9eb) main_clock2_pane_t5_ParamLimits

0x58cd,	// (0x0009a9eb) main_clock2_pane_t5

0x5916,	// (0x0009aa34) aid_call2_pane_cp10_ParamLimits

0x5928,	// (0x0009aa46) aid_call_pane_cp10_ParamLimits

0xa51b,	// (0x0009f639) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa51b,	// (0x0009f639) popup_clock_analogue_window_cp10_g2_ParamLimits

0x593a,	// (0x0009aa58) popup_clock_analogue_window_cp10_g3_ParamLimits

0x593a,	// (0x0009aa58) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa51b,	// (0x0009f639) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000a48f2) popup_clock_analogue_window_cp10_g_ParamLimits

0x594c,	// (0x0009aa6a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6113,	// (0x0009b231) cell_dialer2_keypad_pane_g2_ParamLimits

0x6113,	// (0x0009b231) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000a49d8) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000a49d8) cell_dialer2_keypad_pane_g

0x612f,	// (0x0009b24d) cell_dialer2_keypad_pane_t1

0x6b46,	// (0x0009bc64) main_cset_text2_pane_ParamLimits

0x6b46,	// (0x0009bc64) main_cset_text2_pane

0xce71,	// (0x000a1f8f) area_vitu2_query_pane_g1_ParamLimits

0x744e,	// (0x0009c56c) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000a4b8d) area_vitu2_query_pane_g_ParamLimits

0xcef5,	// (0x000a2013) area_vitu2_query_pane_t7_ParamLimits

0xcef5,	// (0x000a2013) area_vitu2_query_pane_t7

0x74af,	// (0x0009c5cd) bg_button_pane_cp018_ParamLimits

0x74bd,	// (0x0009c5db) bg_button_pane_cp021_ParamLimits

0x74c9,	// (0x0009c5e7) bg_button_pane_cp022_ParamLimits

0x74c9,	// (0x0009c5e7) bg_vkb2_func_pane_cp08_ParamLimits

0x74af,	// (0x0009c5cd) bg_vkb2_func_pane_cp06_ParamLimits

0x74bd,	// (0x0009c5db) bg_vkb2_func_pane_cp07_ParamLimits

0x74da,	// (0x0009c5f8) input_focus_pane_cp09_ParamLimits

0x79aa,	// (0x0009cac8) cam6_autofocus_pane_ParamLimits

0x79aa,	// (0x0009cac8) cam6_autofocus_pane

0x79cc,	// (0x0009caea) cam6_image_uncrop_pane_ParamLimits

0x79cc,	// (0x0009caea) cam6_image_uncrop_pane

0x79f9,	// (0x0009cb17) cam6_indi_pane_ParamLimits

0x79f9,	// (0x0009cb17) cam6_indi_pane

0x7a13,	// (0x0009cb31) cam6_mode_pane_ParamLimits

0x7a13,	// (0x0009cb31) cam6_mode_pane

0x7a27,	// (0x0009cb45) cam6_timer_pane_ParamLimits

0x7a27,	// (0x0009cb45) cam6_timer_pane

0x7a33,	// (0x0009cb51) cam6_zoom_pane_ParamLimits

0x7a33,	// (0x0009cb51) cam6_zoom_pane

0x7a4b,	// (0x0009cb69) cam6_mode_pane_g1_ParamLimits

0x7a4b,	// (0x0009cb69) cam6_mode_pane_g1

0x7a57,	// (0x0009cb75) cam6_mode_pane_g2_ParamLimits

0x7a57,	// (0x0009cb75) cam6_mode_pane_g2

0x7a63,	// (0x0009cb81) cam6_mode_pane_g3_ParamLimits

0x7a63,	// (0x0009cb81) cam6_mode_pane_g3

0x7a6f,	// (0x0009cb8d) cam6_mode_pane_g4_ParamLimits

0x7a6f,	// (0x0009cb8d) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000a4c75) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000a4c75) cam6_mode_pane_g

0xcffb,	// (0x000a2119) bg_tb_trans_pane_cp08_ParamLimits

0xcffb,	// (0x000a2119) bg_tb_trans_pane_cp08

0xd139,	// (0x000a2257) cam6_battery_pane_ParamLimits

0xd139,	// (0x000a2257) cam6_battery_pane

0xd14f,	// (0x000a226d) cam6_indi_pane_g1_ParamLimits

0xd14f,	// (0x000a226d) cam6_indi_pane_g1

0xd161,	// (0x000a227f) cam6_indi_pane_g2_ParamLimits

0xd161,	// (0x000a227f) cam6_indi_pane_g2

0xd173,	// (0x000a2291) cam6_indi_pane_g3_ParamLimits

0xd173,	// (0x000a2291) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000a4c7e) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000a4c7e) cam6_indi_pane_g

0xd185,	// (0x000a22a3) cam6_indi_pane_t1_ParamLimits

0xd185,	// (0x000a22a3) cam6_indi_pane_t1

0x6610,	// (0x0009b72e) cam6_autofocus_pane_g1

0x6608,	// (0x0009b726) cam6_autofocus_pane_g2

0x6620,	// (0x0009b73e) cam6_autofocus_pane_g3

0x6618,	// (0x0009b736) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000a4c85) cam6_autofocus_pane_g

0xd1ab,	// (0x000a22c9) cam6_timer_pane_g1

0xd1b3,	// (0x000a22d1) cam6_timer_pane_t1

0xd1c1,	// (0x000a22df) cam6_zoom_cont_pane

0xd1c9,	// (0x000a22e7) cam6_zoom_pane_g1

0xd1d1,	// (0x000a22ef) cam6_zoom_pane_g2

0x7a7b,	// (0x0009cb99) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000a4c8e) cam6_zoom_pane_g

0xbeff,	// (0x000a101d) cam6_battery_pane_g1

0xbeff,	// (0x000a101d) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000a47fa) cam6_battery_pane_g

0xd1d9,	// (0x000a22f7) cam6_zoom_cont_pane_g1

0xd1e2,	// (0x000a2300) cam6_zoom_cont_pane_g2

0xd1eb,	// (0x000a2309) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000a4c95) cam6_zoom_cont_pane_g

0x7a98,	// (0x0009cbb6) cam6_mode_pane_cp_ParamLimits

0x7a98,	// (0x0009cbb6) cam6_mode_pane_cp

0x7aac,	// (0x0009cbca) cam6_zoom_pane_cp_ParamLimits

0x7aac,	// (0x0009cbca) cam6_zoom_pane_cp

0x7ac4,	// (0x0009cbe2) vid6_image_uncrop_cif_pane_ParamLimits

0x7ac4,	// (0x0009cbe2) vid6_image_uncrop_cif_pane

0x7af0,	// (0x0009cc0e) vid6_image_uncrop_nhd_pane_ParamLimits

0x7af0,	// (0x0009cc0e) vid6_image_uncrop_nhd_pane

0x7b0d,	// (0x0009cc2b) vid6_image_uncrop_vga_pane_ParamLimits

0x7b0d,	// (0x0009cc2b) vid6_image_uncrop_vga_pane

0x7b2c,	// (0x0009cc4a) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b2c,	// (0x0009cc4a) vid6_image_uncrop_wvga_pane

0x7b49,	// (0x0009cc67) vid6_indi_pane_ParamLimits

0x7b49,	// (0x0009cc67) vid6_indi_pane

0xcffb,	// (0x000a2119) bg_tb_trans_pane_cp09_ParamLimits

0xcffb,	// (0x000a2119) bg_tb_trans_pane_cp09

0xd203,	// (0x000a2321) cam6_battery_pane_cp_ParamLimits

0xd203,	// (0x000a2321) cam6_battery_pane_cp

0xd20f,	// (0x000a232d) vid6_indi_pane_g1_ParamLimits

0xd20f,	// (0x000a232d) vid6_indi_pane_g1

0xd221,	// (0x000a233f) vid6_indi_pane_g2_ParamLimits

0xd221,	// (0x000a233f) vid6_indi_pane_g2

0xd233,	// (0x000a2351) vid6_indi_pane_g3_ParamLimits

0xd233,	// (0x000a2351) vid6_indi_pane_g3

0xd248,	// (0x000a2366) vid6_indi_pane_g4_ParamLimits

0xd248,	// (0x000a2366) vid6_indi_pane_g4

0xd25d,	// (0x000a237b) vid6_indi_pane_g5_ParamLimits

0xd25d,	// (0x000a237b) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000a4c9c) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000a4c9c) vid6_indi_pane_g

0xd277,	// (0x000a2395) vid6_indi_pane_t1_ParamLimits

0xd277,	// (0x000a2395) vid6_indi_pane_t1

0xd28d,	// (0x000a23ab) vid6_indi_pane_t2_ParamLimits

0xd28d,	// (0x000a23ab) vid6_indi_pane_t2

0xd2b5,	// (0x000a23d3) vid6_indi_pane_t3_ParamLimits

0xd2b5,	// (0x000a23d3) vid6_indi_pane_t3

0xd2dd,	// (0x000a23fb) vid6_indi_pane_t4_ParamLimits

0xd2dd,	// (0x000a23fb) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000a4ca7) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000a4ca7) vid6_indi_pane_t

0xd301,	// (0x000a241f) wait_bar_pane_cp08

0x7b6e,	// (0x0009cc8c) main_cset_text2_pane_t1_ParamLimits

0x7b6e,	// (0x0009cc8c) main_cset_text2_pane_t1

0x7a83,	// (0x0009cba1) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a83,	// (0x0009cba1) listscroll_gen_pane_cp06_t1

0x11ab,	// (0x000962c9) main_cam6_set_pane

0x64a2,	// (0x0009b5c0) bg_tb_trans_pane_cp06_ParamLimits

0x64b8,	// (0x0009b5d6) cam4_indicators_pane_g1_ParamLimits

0x64c9,	// (0x0009b5e7) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000a4a15) cam4_indicators_pane_g_ParamLimits

0x64e7,	// (0x0009b605) cam4_indicators_pane_t1_ParamLimits

0x4505,	// (0x00099623) bg_tb_trans_pane_cp07_ParamLimits

0x659a,	// (0x0009b6b8) vid4_indicators_pane_g1_ParamLimits

0x65ae,	// (0x0009b6cc) vid4_indicators_pane_g2_ParamLimits

0x65c2,	// (0x0009b6e0) vid4_indicators_pane_g3_ParamLimits

0x65d3,	// (0x0009b6f1) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000a4a27) vid4_indicators_pane_g_ParamLimits

0x65f1,	// (0x0009b70f) vid4_indicators_pane_t1_ParamLimits

0x760b,	// (0x0009c729) vid4_progress_pane_g1_ParamLimits

0x761b,	// (0x0009c739) vid4_progress_pane_g2_ParamLimits

0x762b,	// (0x0009c749) vid4_progress_pane_g3_ParamLimits

0x763d,	// (0x0009c75b) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000a4bd8) vid4_progress_pane_g_ParamLimits

0x7655,	// (0x0009c773) vid4_progress_pane_t1_ParamLimits

0x766b,	// (0x0009c789) vid4_progress_pane_t2_ParamLimits

0x7680,	// (0x0009c79e) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000a4be3) vid4_progress_pane_t_ParamLimits

0x7695,	// (0x0009c7b3) wait_bar_pane_cp07_ParamLimits

0x7ba1,	// (0x0009ccbf) main_cam6_set_pane_g2_ParamLimits

0x7ba1,	// (0x0009ccbf) main_cam6_set_pane_g2

0x7bad,	// (0x0009cccb) main_cset6_listscroll_pane_ParamLimits

0x7bad,	// (0x0009cccb) main_cset6_listscroll_pane

0x7bd8,	// (0x0009ccf6) main_cset6_slider_pane_ParamLimits

0x7bd8,	// (0x0009ccf6) main_cset6_slider_pane

0x7be4,	// (0x0009cd02) main_cset6_text2_pane_ParamLimits

0x7be4,	// (0x0009cd02) main_cset6_text2_pane

0xd310,	// (0x000a242e) main_cset6_text_pane

0xd318,	// (0x000a2436) main_cset_list_pane_copy1_ParamLimits

0xd318,	// (0x000a2436) main_cset_list_pane_copy1

0xd328,	// (0x000a2446) scroll_pane_cp028_copy1

0x7bf7,	// (0x0009cd15) cset_list_set_pane_copy1

0x7c0a,	// (0x0009cd28) aid_position_infowindow_above_copy1

0x7c12,	// (0x0009cd30) aid_position_infowindow_below_copy1

0x7c1a,	// (0x0009cd38) cset_list_set_pane_g1_copy1

0xcbda,	// (0x000a1cf8) cset_list_set_pane_g3_copy1_ParamLimits

0xcbda,	// (0x000a1cf8) cset_list_set_pane_g3_copy1

0xcbe9,	// (0x000a1d07) cset_list_set_pane_t1_copy1_ParamLimits

0xcbe9,	// (0x000a1d07) cset_list_set_pane_t1_copy1

0xe873,	// (0x000a3991) list_highlight_pane_cp021_copy1_ParamLimits

0xe873,	// (0x000a3991) list_highlight_pane_cp021_copy1

0xd331,	// (0x000a244f) cset6_slider_pane_ParamLimits

0xd331,	// (0x000a244f) cset6_slider_pane

0xd35d,	// (0x000a247b) main_cset6_slider_pane_g1_ParamLimits

0xd35d,	// (0x000a247b) main_cset6_slider_pane_g1

0x7c22,	// (0x0009cd40) main_cset6_slider_pane_g2_ParamLimits

0x7c22,	// (0x0009cd40) main_cset6_slider_pane_g2

0xd385,	// (0x000a24a3) main_cset6_slider_pane_g3_ParamLimits

0xd385,	// (0x000a24a3) main_cset6_slider_pane_g3

0x7c4a,	// (0x0009cd68) main_cset6_slider_pane_g4_ParamLimits

0x7c4a,	// (0x0009cd68) main_cset6_slider_pane_g4

0x7c56,	// (0x0009cd74) main_cset6_slider_pane_g5_ParamLimits

0x7c56,	// (0x0009cd74) main_cset6_slider_pane_g5

0xcb16,	// (0x000a1c34) main_cset6_slider_pane_g7_ParamLimits

0xcb16,	// (0x000a1c34) main_cset6_slider_pane_g7

0xcb22,	// (0x000a1c40) main_cset6_slider_pane_g8_ParamLimits

0xcb22,	// (0x000a1c40) main_cset6_slider_pane_g8

0x7c64,	// (0x0009cd82) main_cset6_slider_pane_g9_ParamLimits

0x7c64,	// (0x0009cd82) main_cset6_slider_pane_g9

0x7c70,	// (0x0009cd8e) main_cset6_slider_pane_g10_ParamLimits

0x7c70,	// (0x0009cd8e) main_cset6_slider_pane_g10

0x7c7c,	// (0x0009cd9a) main_cset6_slider_pane_g11_ParamLimits

0x7c7c,	// (0x0009cd9a) main_cset6_slider_pane_g11

0x7c88,	// (0x0009cda6) main_cset6_slider_pane_g12_ParamLimits

0x7c88,	// (0x0009cda6) main_cset6_slider_pane_g12

0x7c94,	// (0x0009cdb2) main_cset6_slider_pane_g13_ParamLimits

0x7c94,	// (0x0009cdb2) main_cset6_slider_pane_g13

0x7ca0,	// (0x0009cdbe) main_cset6_slider_pane_g14_ParamLimits

0x7ca0,	// (0x0009cdbe) main_cset6_slider_pane_g14

0x7cac,	// (0x0009cdca) main_cset6_slider_pane_g15_ParamLimits

0x7cac,	// (0x0009cdca) main_cset6_slider_pane_g15

0x7cc4,	// (0x0009cde2) main_cset6_slider_pane_g16_ParamLimits

0x7cc4,	// (0x0009cde2) main_cset6_slider_pane_g16

0x7cd2,	// (0x0009cdf0) main_cset6_slider_pane_g17_ParamLimits

0x7cd2,	// (0x0009cdf0) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000a4cb0) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000a4cb0) main_cset6_slider_pane_g

0xd391,	// (0x000a24af) main_cset6_slider_pane_t1_ParamLimits

0xd391,	// (0x000a24af) main_cset6_slider_pane_t1

0x7cf8,	// (0x0009ce16) main_cset6_slider_pane_t2_ParamLimits

0x7cf8,	// (0x0009ce16) main_cset6_slider_pane_t2

0x7d23,	// (0x0009ce41) main_cset6_slider_pane_t3_ParamLimits

0x7d23,	// (0x0009ce41) main_cset6_slider_pane_t3

0x7d4e,	// (0x0009ce6c) main_cset6_slider_pane_t4_ParamLimits

0x7d4e,	// (0x0009ce6c) main_cset6_slider_pane_t4

0x7d79,	// (0x0009ce97) main_cset6_slider_pane_t5_ParamLimits

0x7d79,	// (0x0009ce97) main_cset6_slider_pane_t5

0xd3d2,	// (0x000a24f0) main_cset6_slider_pane_t7_ParamLimits

0xd3d2,	// (0x000a24f0) main_cset6_slider_pane_t7

0x7da6,	// (0x0009cec4) main_cset6_slider_pane_t8_ParamLimits

0x7da6,	// (0x0009cec4) main_cset6_slider_pane_t8

0x7dca,	// (0x0009cee8) main_cset6_slider_pane_t9_ParamLimits

0x7dca,	// (0x0009cee8) main_cset6_slider_pane_t9

0x7dee,	// (0x0009cf0c) main_cset6_slider_pane_t10_ParamLimits

0x7dee,	// (0x0009cf0c) main_cset6_slider_pane_t10

0x7e12,	// (0x0009cf30) main_cset6_slider_pane_t11_ParamLimits

0x7e12,	// (0x0009cf30) main_cset6_slider_pane_t11

0xd408,	// (0x000a2526) main_cset6_slider_pane_t14_ParamLimits

0xd408,	// (0x000a2526) main_cset6_slider_pane_t14

0xd441,	// (0x000a255f) main_cset6_slider_pane_t15_ParamLimits

0xd441,	// (0x000a255f) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000a4cd5) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000a4cd5) main_cset6_slider_pane_t

0xcc9a,	// (0x000a1db8) cset_slider_pane_g1_copy1

0xcca3,	// (0x000a1dc1) cset_slider_pane_g2_copy1

0xccac,	// (0x000a1dca) cset_slider_pane_g3_copy1

0xe72a,	// (0x000a3848) bg_popup_sub_pane_cp011_copy1

0xd47a,	// (0x000a2598) main_cset_text_pane_g1_copy1

0xcc7e,	// (0x000a1d9c) main_cset_text_pane_t1_copy1

0xcc8c,	// (0x000a1daa) main_cset_text_pane_t2_copy1

0xccb5,	// (0x000a1dd3) main_cset_text_pane_t3_copy1

0xccc3,	// (0x000a1de1) main_cset_text_pane_t4_copy1

0xccd1,	// (0x000a1def) main_cset_text_pane_t5_copy1

0xd482,	// (0x000a25a0) main_cset_text_pane_t6_copy1

0xcced,	// (0x000a1e0b) main_cset_text_pane_t7_copy1

0x7f07,	// (0x0009d025) main_cset_text2_pane_t1_copy1

0x4505,	// (0x00099623) main_ncimui_pane

0x4564,	// (0x00099682) popup_query_ncimui_window_ParamLimits

0x4564,	// (0x00099682) popup_query_ncimui_window

0xc1c7,	// (0x000a12e5) field_cale_ev2_pane_g4_ParamLimits

0xc1c7,	// (0x000a12e5) field_cale_ev2_pane_g4

0x5e33,	// (0x0009af51) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e33,	// (0x0009af51) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000a49b3) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000a49b3) cell_video_dialer_keypad_pane_g

0x5e4b,	// (0x0009af69) cell_video_dialer_keypad_pane_t1

0xe72a,	// (0x000a3848) bg_popup_window_pane_cp012

0xa36a,	// (0x0009f488) heading_pane_cp06

0xd4ae,	// (0x000a25cc) ncim_query_content_pane

0xe72a,	// (0x000a3848) bg_popup_heading_pane_cp01

0xd4b6,	// (0x000a25d4) ncim_heading_pane_t1

0xd4c4,	// (0x000a25e2) ncim_indicator_popup_pane

0xd4d6,	// (0x000a25f4) ncim_query_button_pane

0xd4ea,	// (0x000a2608) ncim_query_content_pane_t1

0xd4fc,	// (0x000a261a) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000a4d19) ncim_query_content_pane_t

0xd536,	// (0x000a2654) ncim_query_list_pane

0xd548,	// (0x000a2666) ncim_query_popup_pane

0xd4c4,	// (0x000a25e2) ncim_indicator_popup_pane_ParamLimits

0x805a,	// (0x0009d178) ncim_query_content_pane_g1_ParamLimits

0x805a,	// (0x0009d178) ncim_query_content_pane_g1

0xd4ea,	// (0x000a2608) ncim_query_content_pane_t1_ParamLimits

0xd4fc,	// (0x000a261a) ncim_query_content_pane_t2_ParamLimits

0x8066,	// (0x0009d184) ncim_query_content_pane_t3_ParamLimits

0x8066,	// (0x0009d184) ncim_query_content_pane_t3

0x8083,	// (0x0009d1a1) ncim_query_content_pane_t4_ParamLimits

0x8083,	// (0x0009d1a1) ncim_query_content_pane_t4

0x80a0,	// (0x0009d1be) ncim_query_content_pane_t5_ParamLimits

0x80a0,	// (0x0009d1be) ncim_query_content_pane_t5

0xd50e,	// (0x000a262c) ncim_query_content_pane_t6_ParamLimits

0xd50e,	// (0x000a262c) ncim_query_content_pane_t6

0xfbfb,	// (0x000a4d19) ncim_query_content_pane_t_ParamLimits

0xd536,	// (0x000a2654) ncim_query_list_pane_ParamLimits

0xd548,	// (0x000a2666) ncim_query_popup_pane_ParamLimits

0xd55c,	// (0x000a267a) wait_bar_pane_cp04

0xe72a,	// (0x000a3848) input_focus_pane_cp011

0xd564,	// (0x000a2682) ncim_query_popup_pane_t1

0xd572,	// (0x000a2690) ncim_list_query_list_pane_ParamLimits

0xd572,	// (0x000a2690) ncim_list_query_list_pane

0xe72a,	// (0x000a3848) bg_button_pane_cp027

0xd57f,	// (0x000a269d) ncim_query_button_pane_g1

0xe72a,	// (0x000a3848) list_highlight_pane_cp012

0xd589,	// (0x000a26a7) ncim_list_query_list_pane_g1

0xd591,	// (0x000a26af) ncim_list_query_list_pane_t1

0x64d8,	// (0x0009b5f6) cam4_indicators_pane_g3_ParamLimits

0x64d8,	// (0x0009b5f6) cam4_indicators_pane_g3

0x65df,	// (0x0009b6fd) vid4_indicators_pane_g5_ParamLimits

0x65df,	// (0x0009b6fd) vid4_indicators_pane_g5

0x7649,	// (0x0009c767) vid4_progress_pane_g5_ParamLimits

0x7649,	// (0x0009c767) vid4_progress_pane_g5

0x7f46,	// (0x0009d064) main_ncimui_pane_g1

0x7fae,	// (0x0009d0cc) ncimui_group_query_pane_ParamLimits

0x7fae,	// (0x0009d0cc) ncimui_group_query_pane

0x7ff6,	// (0x0009d114) ncimui_list_pane_ParamLimits

0x7ff6,	// (0x0009d114) ncimui_list_pane

0x801d,	// (0x0009d13b) ncimui_text_pane_ParamLimits

0x801d,	// (0x0009d13b) ncimui_text_pane

0x80bd,	// (0x0009d1db) ncimui_text_pane_t1_ParamLimits

0x80bd,	// (0x0009d1db) ncimui_text_pane_t1

0xd59f,	// (0x000a26bd) ncimui_list_single_graphic_pane_ParamLimits

0xd59f,	// (0x000a26bd) ncimui_list_single_graphic_pane

0x80dc,	// (0x0009d1fa) ncimui_query_pane_ParamLimits

0x80dc,	// (0x0009d1fa) ncimui_query_pane

0xe72a,	// (0x000a3848) list_highlight_pane_cp013

0xd5af,	// (0x000a26cd) ncim_list_query_list_pane_t1_copy1

0xd589,	// (0x000a26a7) ncim_list_single_graphic_pane_g1

0xd5bd,	// (0x000a26db) ncim_query_button_pane_cp01

0xd5c9,	// (0x000a26e7) ncim_query_entry_pane_ParamLimits

0xd5c9,	// (0x000a26e7) ncim_query_entry_pane

0xd5dc,	// (0x000a26fa) ncimui_query_pane_g1

0xd5e8,	// (0x000a2706) ncimui_query_pane_t1_ParamLimits

0xd5e8,	// (0x000a2706) ncimui_query_pane_t1

0xe873,	// (0x000a3991) input_focus_pane_cp012

0xd601,	// (0x000a271f) ncim_query_entry_pane_t1

0xeea8,	// (0x000a3fc6) main_im_pane_ParamLimits

0x4505,	// (0x00099623) main_mobtv_pane_ParamLimits

0x4505,	// (0x00099623) main_mobtv_pane

0x7ce0,	// (0x0009cdfe) main_cset6_slider_pane_g18_ParamLimits

0x7ce0,	// (0x0009cdfe) main_cset6_slider_pane_g18

0x7cec,	// (0x0009ce0a) main_cset6_slider_pane_g19_ParamLimits

0x7cec,	// (0x0009ce0a) main_cset6_slider_pane_g19

0xc9aa,	// (0x000a1ac8) bg_main_mobtv_pane_ParamLimits

0xc9aa,	// (0x000a1ac8) bg_main_mobtv_pane

0x80ef,	// (0x0009d20d) main_mobtv_info_pane

0x80fa,	// (0x0009d218) main_mobtv_loading_pane_ParamLimits

0x80fa,	// (0x0009d218) main_mobtv_loading_pane

0xd613,	// (0x000a2731) main_mobtv_pg_channel_list_pane

0xd61d,	// (0x000a273b) main_mobtv_pg_hdr_pane

0x8107,	// (0x0009d225) main_mobtv_programe_curr_pane_ParamLimits

0x8107,	// (0x0009d225) main_mobtv_programe_curr_pane

0x8114,	// (0x0009d232) main_mobtv_programe_next_pane_ParamLimits

0x8114,	// (0x0009d232) main_mobtv_programe_next_pane

0xd626,	// (0x000a2744) popup_mobtv_noti_window

0xbeff,	// (0x000a101d) main_tv_pg_hdr_pane_g1

0xd62e,	// (0x000a274c) main_tv_pg_hdr_pane_g2

0xd636,	// (0x000a2754) main_tv_pg_hdr_pane_g3

0xd63e,	// (0x000a275c) main_tv_pg_hdr_pane_g4

0xd646,	// (0x000a2764) main_tv_pg_hdr_pane_g5

0xd650,	// (0x000a276e) main_tv_pg_hdr_pane_g6

0xd65a,	// (0x000a2778) main_tv_pg_hdr_pane_g7

0xd664,	// (0x000a2782) main_tv_pg_hdr_pane_g8

0xd66e,	// (0x000a278c) main_tv_pg_hdr_pane_g9

0xd678,	// (0x000a2796) main_tv_pg_hdr_pane_g10

0xd682,	// (0x000a27a0) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000a4d26) main_tv_pg_hdr_pane_g

0xd68c,	// (0x000a27aa) main_tv_pg_hdr_pane_t1

0xd69a,	// (0x000a27b8) main_tv_pg_hdr_pane_t2

0xd6a8,	// (0x000a27c6) main_tv_pg_hdr_pane_t3

0xd6b8,	// (0x000a27d6) main_tv_pg_hdr_pane_t4

0xd6c8,	// (0x000a27e6) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000a4d3d) main_tv_pg_hdr_pane_t

0xd6d8,	// (0x000a27f6) single_mobtv_pg_channel_pane_ParamLimits

0xd6d8,	// (0x000a27f6) single_mobtv_pg_channel_pane

0xd6ea,	// (0x000a2808) single_mobtv_pg_channel_table_pane

0xd6f3,	// (0x000a2811) single_mobtv_pg_channel_thumb_pane

0xd6fc,	// (0x000a281a) single_tv_pg_channel_pane_g1

0xd705,	// (0x000a2823) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000a4d48) single_tv_pg_channel_pane_g

0xc162,	// (0x000a1280) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc162,	// (0x000a1280) bg_single_mobtv_pg_channel_thumb_pane

0xd70e,	// (0x000a282c) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd70e,	// (0x000a282c) single_mobtv_pg_channel_thumb_pane_g1

0xd71c,	// (0x000a283a) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd71c,	// (0x000a283a) single_mobtv_pg_channel_thumb_pane_g2

0xd728,	// (0x000a2846) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd728,	// (0x000a2846) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000a4d4d) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000a4d4d) single_mobtv_pg_channel_thumb_pane_g

0xd734,	// (0x000a2852) single_mobtv_pg_channel_thumb_pane_t1

0xd742,	// (0x000a2860) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000a4d54) single_mobtv_pg_channel_thumb_pane_t

0xbeff,	// (0x000a101d) bg_single_mobtv_pg_channel_table_pane_g1

0xbeff,	// (0x000a101d) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000a47fa) bg_single_mobtv_pg_channel_table_pane_g

0xd750,	// (0x000a286e) single_mobtv_pg_channel_table_pane_t1

0xd75e,	// (0x000a287c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000a4d59) single_mobtv_pg_channel_table_pane_t

0x8129,	// (0x0009d247) main_mobtv_info_pane_g1_ParamLimits

0x8129,	// (0x0009d247) main_mobtv_info_pane_g1

0x8145,	// (0x0009d263) main_mobtv_info_pane_t1_ParamLimits

0x8145,	// (0x0009d263) main_mobtv_info_pane_t1

0x81bd,	// (0x0009d2db) main_mobtv_info_pane_t2_ParamLimits

0x81bd,	// (0x0009d2db) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000a4d63) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000a4d63) main_mobtv_info_pane_t

0x824c,	// (0x0009d36a) wait_bar_pane_cp05

0x825e,	// (0x0009d37c) main_mobtv_loading_pane_g1_ParamLimits

0x825e,	// (0x0009d37c) main_mobtv_loading_pane_g1

0x826c,	// (0x0009d38a) main_mobtv_loading_pane_g2_ParamLimits

0x826c,	// (0x0009d38a) main_mobtv_loading_pane_g2

0x8278,	// (0x0009d396) main_mobtv_loading_pane_g3_ParamLimits

0x8278,	// (0x0009d396) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000a4d6a) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000a4d6a) main_mobtv_loading_pane_g

0xd76c,	// (0x000a288a) main_mobtv_loading_pane_t1_ParamLimits

0xd76c,	// (0x000a288a) main_mobtv_loading_pane_t1

0xd784,	// (0x000a28a2) main_mobtv_loading_pane_t2_ParamLimits

0xd784,	// (0x000a28a2) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000a4d71) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000a4d71) main_mobtv_loading_pane_t

0x8286,	// (0x0009d3a4) wait_bar_pane_cp06_ParamLimits

0x8286,	// (0x0009d3a4) wait_bar_pane_cp06

0xd7a8,	// (0x000a28c6) main_mobtv_programe_curr_pane_t1

0xd7b6,	// (0x000a28d4) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000a4d76) main_mobtv_programe_curr_pane_t

0xd7c4,	// (0x000a28e2) main_mobtv_programe_next_pane_t1

0xd7d2,	// (0x000a28f0) main_mobtv_programe_next_pane_t2

0xd7e0,	// (0x000a28fe) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000a4d7b) main_mobtv_programe_next_pane_t

0xe72a,	// (0x000a3848) bg_popup_mobtv_noti_window_pane

0xd7ee,	// (0x000a290c) popup_mobtv_noti_window_g1

0xd7f6,	// (0x000a2914) popup_mobtv_noti_window_t1

0xd804,	// (0x000a2922) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000a4d82) popup_mobtv_noti_window_t

0xbeff,	// (0x000a101d) bg_popup_mobtv_noti_window_pane_g1

0x11ab,	// (0x000962c9) sc_clock_pane

0x11ab,	// (0x000962c9) main_fs_bigclock_pane

0x785d,	// (0x0009c97b) blid2_tripm_pane_t4_ParamLimits

0x785d,	// (0x0009c97b) blid2_tripm_pane_t4

0x8292,	// (0x0009d3b0) sc_clock_pane_g1_ParamLimits

0x8292,	// (0x0009d3b0) sc_clock_pane_g1

0x82a0,	// (0x0009d3be) sc_clock_pane_t1_ParamLimits

0x82a0,	// (0x0009d3be) sc_clock_pane_t1

0x82b3,	// (0x0009d3d1) sc_clock_pane_t2_ParamLimits

0x82b3,	// (0x0009d3d1) sc_clock_pane_t2

0x82c5,	// (0x0009d3e3) sc_clock_pane_t3_ParamLimits

0x82c5,	// (0x0009d3e3) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000a4d87) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000a4d87) sc_clock_pane_t

0x9250,	// (0x0009e36e) main_fs_bigclock_indicator_pane_ParamLimits

0x9250,	// (0x0009e36e) main_fs_bigclock_indicator_pane

0x834e,	// (0x0009d46c) main_fs_bigclock_pane_g1_ParamLimits

0x834e,	// (0x0009d46c) main_fs_bigclock_pane_g1

0x925c,	// (0x0009e37a) main_fs_bigclock_pane_t1_ParamLimits

0x925c,	// (0x0009e37a) main_fs_bigclock_pane_t1

0x926e,	// (0x0009e38c) main_fs_bigclock_pane_t2_ParamLimits

0x926e,	// (0x0009e38c) main_fs_bigclock_pane_t2

0x9282,	// (0x0009e3a0) main_fs_bigclock_pane_t3_ParamLimits

0x9282,	// (0x0009e3a0) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000a4f91) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000a4f91) main_fs_bigclock_pane_t

0xe2f3,	// (0x000a3411) main_fs_bigclock_indicator_pane_g1

0xd4de,	// (0x000a25fc) ncim_query_content_pane_g2_ParamLimits

0xd4de,	// (0x000a25fc) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000a4d14) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000a4d14) ncim_query_content_pane_g

0x82d9,	// (0x0009d3f7) sc_clock_pane_t4_ParamLimits

0x82d9,	// (0x0009d3f7) sc_clock_pane_t4

0x4505,	// (0x00099623) main_radioblah_pane

0xc90b,	// (0x000a1a29) cell_call4_button_pane_t1_copy1_ParamLimits

0xc90b,	// (0x000a1a29) cell_call4_button_pane_t1_copy1

0x7f60,	// (0x0009d07e) main_ncimui_pane_t1_ParamLimits

0x7f60,	// (0x0009d07e) main_ncimui_pane_t1

0x7f7a,	// (0x0009d098) main_ncimui_pane_t2_ParamLimits

0x7f7a,	// (0x0009d098) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000a4d0d) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000a4d0d) main_ncimui_pane_t

0xd948,	// (0x000a2a66) main_radioblah_anim_pane_ParamLimits

0xd948,	// (0x000a2a66) main_radioblah_anim_pane

0xd959,	// (0x000a2a77) main_radioblah_info_pane_ParamLimits

0xd959,	// (0x000a2a77) main_radioblah_info_pane

0xd96d,	// (0x000a2a8b) main_radioblah_pane_t1_ParamLimits

0xd96d,	// (0x000a2a8b) main_radioblah_pane_t1

0xd989,	// (0x000a2aa7) main_radioblah_pane_t2_ParamLimits

0xd989,	// (0x000a2aa7) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000a4da8) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000a4da8) main_radioblah_pane_t

0x83a0,	// (0x0009d4be) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83a0,	// (0x0009d4be) main_radioblah_rocker_ctrl_pane

0xd9d1,	// (0x000a2aef) main_radioblah_info_pane_t1_ParamLimits

0xd9d1,	// (0x000a2aef) main_radioblah_info_pane_t1

0x83e5,	// (0x0009d503) main_radioblah_info_pane_t2_ParamLimits

0x83e5,	// (0x0009d503) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000a4db1) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000a4db1) main_radioblah_info_pane_t

0xbeff,	// (0x000a101d) main_radioblah_rocker_ctrl_pane_g1

0x8495,	// (0x0009d5b3) main_radioblah_rocker_ctrl_pane_g2

0x849d,	// (0x0009d5bb) main_radioblah_rocker_ctrl_pane_g3

0x84a5,	// (0x0009d5c3) main_radioblah_rocker_ctrl_pane_g4

0x84ad,	// (0x0009d5cb) main_radioblah_rocker_ctrl_pane_g5

0x84b5,	// (0x0009d5d3) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000a4dba) main_radioblah_rocker_ctrl_pane_g

0x7f07,	// (0x0009d025) main_cset_text2_pane_t1_copy1_ParamLimits

0x63f8,	// (0x0009b516) cam4_image_uncrop_qvga_pane

0x654d,	// (0x0009b66b) vid4_image_uncrop_qcif_pane

0x79eb,	// (0x0009cb09) cam6_image_uncrop_qvga_pane_ParamLimits

0x79eb,	// (0x0009cb09) cam6_image_uncrop_qvga_pane

0xd1f3,	// (0x000a2311) vid6_image_uncrop_qcif_pane_ParamLimits

0xd1f3,	// (0x000a2311) vid6_image_uncrop_qcif_pane

0xe72a,	// (0x000a3848) bg_popup_preview_window_pane_cp03

0xd490,	// (0x000a25ae) list_cset_text2_pane

0xd498,	// (0x000a25b6) main_cset6_text2_pane_g1

0xd4a0,	// (0x000a25be) main_cset6_text2_pane_t1

0x84bd,	// (0x0009d5db) list_cset_text2_pane_t1_ParamLimits

0x84bd,	// (0x0009d5db) list_cset_text2_pane_t1

0x4505,	// (0x00099623) main_radioblah_pane_ParamLimits

0x8238,	// (0x0009d356) main_mobtv_info_pane_t3_ParamLimits

0x8238,	// (0x0009d356) main_mobtv_info_pane_t3

0x838e,	// (0x0009d4ac) main_radioblah_pane_g1

0x83b9,	// (0x0009d4d7) main_radioblah_info_pane_g1

0x843a,	// (0x0009d558) main_radioblah_info_pane_t3_ParamLimits

0x843a,	// (0x0009d558) main_radioblah_info_pane_t3

0x31e4,	// (0x00098302) highlight_cell_cale_month_pane_ParamLimits

0x31e4,	// (0x00098302) highlight_cell_cale_month_pane

0x11ab,	// (0x000962c9) main_phob_fisheye_pane

0xc296,	// (0x000a13b4) scroll_pane_cp0031_ParamLimits

0xc296,	// (0x000a13b4) scroll_pane_cp0031

0xd301,	// (0x000a241f) wait_bar_pane_cp08_ParamLimits

0x7bf7,	// (0x0009cd15) cset_list_set_pane_copy1_ParamLimits

0xda0b,	// (0x000a2b29) highlight_cell_cale_month_pane_g1

0x84da,	// (0x0009d5f8) highlight_cell_cale_month_pane_t1

0xcf61,	// (0x000a207f) list_gen_pane_cp01

0xcb01,	// (0x000a1c1f) scroll_pane_01

0x84e8,	// (0x0009d606) list_single_double_fisheye_pane

0x84f1,	// (0x0009d60f) list_double_fisheye_pane_g1_ParamLimits

0x84f1,	// (0x0009d60f) list_double_fisheye_pane_g1

0x84fd,	// (0x0009d61b) list_double_fisheye_pane_g2_ParamLimits

0x84fd,	// (0x0009d61b) list_double_fisheye_pane_g2

0x8511,	// (0x0009d62f) list_double_fisheye_pane_g3_ParamLimits

0x8511,	// (0x0009d62f) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000a4dc7) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000a4dc7) list_double_fisheye_pane_g

0x853a,	// (0x0009d658) list_double_fisheye_pane_t1_ParamLimits

0x853a,	// (0x0009d658) list_double_fisheye_pane_t1

0x8555,	// (0x0009d673) list_double_fisheye_pane_t2_ParamLimits

0x8555,	// (0x0009d673) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000a4dd2) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000a4dd2) list_double_fisheye_pane_t

0x11ab,	// (0x000962c9) main_call5_pane

0x82ff,	// (0x0009d41d) sc_swipe_pane_ParamLimits

0x82ff,	// (0x0009d41d) sc_swipe_pane

0x8583,	// (0x0009d6a1) call5_image_pane_ParamLimits

0x8583,	// (0x0009d6a1) call5_image_pane

0x8593,	// (0x0009d6b1) call5_swipe_1_pane_ParamLimits

0x8593,	// (0x0009d6b1) call5_swipe_1_pane

0x859f,	// (0x0009d6bd) call5_swipe_2_pane_ParamLimits

0x859f,	// (0x0009d6bd) call5_swipe_2_pane

0x85b9,	// (0x0009d6d7) popup_call5_audio_first_window_ParamLimits

0x85b9,	// (0x0009d6d7) popup_call5_audio_first_window

0xc162,	// (0x000a1280) call5_swipe_1_pane_g1_ParamLimits

0xc162,	// (0x000a1280) call5_swipe_1_pane_g1

0xda13,	// (0x000a2b31) call5_swipe_1_pane_g2_ParamLimits

0xda13,	// (0x000a2b31) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000a4dd7) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000a4dd7) call5_swipe_1_pane_g

0xda1f,	// (0x000a2b3d) call5_swipe_1_pane_t1_ParamLimits

0xda1f,	// (0x000a2b3d) call5_swipe_1_pane_t1

0xc162,	// (0x000a1280) call5_swipe_2_pane_g1_ParamLimits

0xc162,	// (0x000a1280) call5_swipe_2_pane_g1

0xda34,	// (0x000a2b52) call5_swipe_2_pane_g2_ParamLimits

0xda34,	// (0x000a2b52) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000a4ddc) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000a4ddc) call5_swipe_2_pane_g

0xda40,	// (0x000a2b5e) call5_swipe_2_pane_t1_ParamLimits

0xda40,	// (0x000a2b5e) call5_swipe_2_pane_t1

0xda55,	// (0x000a2b73) sc_swipe_pane_g1_ParamLimits

0xda55,	// (0x000a2b73) sc_swipe_pane_g1

0xda62,	// (0x000a2b80) sc_swipe_pane_g2_ParamLimits

0xda62,	// (0x000a2b80) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000a4de1) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000a4de1) sc_swipe_pane_g

0xda6e,	// (0x000a2b8c) sc_swipe_pane_t1_ParamLimits

0xda6e,	// (0x000a2b8c) sc_swipe_pane_t1

0x11ab,	// (0x000962c9) main_cmail_launcher_pane

0x85c7,	// (0x0009d6e5) aid_size_cell_cmail_l_ParamLimits

0x85c7,	// (0x0009d6e5) aid_size_cell_cmail_l

0x85d7,	// (0x0009d6f5) grid_cmail_l_pane_ParamLimits

0x85d7,	// (0x0009d6f5) grid_cmail_l_pane

0x85e7,	// (0x0009d705) cell_cmail_l_pane_ParamLimits

0x85e7,	// (0x0009d705) cell_cmail_l_pane

0x85fb,	// (0x0009d719) cell_cmail_l_pane_g1_ParamLimits

0x85fb,	// (0x0009d719) cell_cmail_l_pane_g1

0x8607,	// (0x0009d725) cell_cmail_l_pane_t1_ParamLimits

0x8607,	// (0x0009d725) cell_cmail_l_pane_t1

0xda83,	// (0x000a2ba1) cell_cmail_l_pane_t2_ParamLimits

0xda83,	// (0x000a2ba1) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000a4de6) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000a4de6) cell_cmail_l_pane_t

0xe873,	// (0x000a3991) grid_highlight_pane_cp018_ParamLimits

0xe873,	// (0x000a3991) grid_highlight_pane_cp018

0x1001,	// (0x0009611f) main2_pane_ParamLimits

0x1001,	// (0x0009611f) main2_pane

0xef41,	// (0x000a405f) popup_sp_fs_action_menu_bg_pane_g1

0xef49,	// (0x000a4067) popup_sp_fs_action_menu_bg_pane_g2

0xef51,	// (0x000a406f) popup_sp_fs_action_menu_bg_pane_g3

0xef59,	// (0x000a4077) popup_sp_fs_action_menu_bg_pane_g4

0xef61,	// (0x000a407f) popup_sp_fs_action_menu_bg_pane_g5

0xef69,	// (0x000a4087) popup_sp_fs_action_menu_bg_pane_g6

0xef71,	// (0x000a408f) popup_sp_fs_action_menu_bg_pane_g7

0xef79,	// (0x000a4097) popup_sp_fs_action_menu_bg_pane_g8

0xef81,	// (0x000a409f) popup_sp_fs_action_menu_bg_pane_g9

0xef89,	// (0x000a40a7) popup_sp_fs_action_menu_bg_pane_g10

0xef89,	// (0x000a40a7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x000a42a4) popup_sp_fs_action_menu_bg_pane_g

0x1fbd,	// (0x000970db) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t3_g3_g1

0x1fc9,	// (0x000970e7) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x2_t3_g3_g2

0x1fd5,	// (0x000970f3) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a4356) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a4356) list_medium_line_x2_t3_g3_g

0x1fe1,	// (0x000970ff) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1fe1,	// (0x000970ff) list_medium_line_x2_t3_g3_t1

0x1ff6,	// (0x00097114) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1ff6,	// (0x00097114) list_medium_line_x2_t3_g3_t2

0x2008,	// (0x00097126) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2008,	// (0x00097126) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a435d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a435d) list_medium_line_x2_t3_g3_t

0x1fbd,	// (0x000970db) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t3_g2_g1

0x1fd5,	// (0x000970f3) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a4364) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a4364) list_medium_line_x2_t3_g2_g

0x201d,	// (0x0009713b) list_medium_line_x2_t3_g2_t1_ParamLimits

0x201d,	// (0x0009713b) list_medium_line_x2_t3_g2_t1

0x2033,	// (0x00097151) list_medium_line_x2_t3_g2_t2_ParamLimits

0x2033,	// (0x00097151) list_medium_line_x2_t3_g2_t2

0x2045,	// (0x00097163) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2045,	// (0x00097163) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a4369) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a4369) list_medium_line_x2_t3_g2_t

0x1fbd,	// (0x000970db) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t4_g4_g1

0x2062,	// (0x00097180) list_medium_line_x2_t4_g4_g2_ParamLimits

0x2062,	// (0x00097180) list_medium_line_x2_t4_g4_g2

0x1fc9,	// (0x000970e7) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x2_t4_g4_g3

0x206e,	// (0x0009718c) list_medium_line_x2_t4_g4_g4_ParamLimits

0x206e,	// (0x0009718c) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a4370) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a4370) list_medium_line_x2_t4_g4_g

0x207a,	// (0x00097198) list_medium_line_x2_t4_g4_t1_ParamLimits

0x207a,	// (0x00097198) list_medium_line_x2_t4_g4_t1

0x2091,	// (0x000971af) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2091,	// (0x000971af) list_medium_line_x2_t4_g4_t2

0x20a6,	// (0x000971c4) list_medium_line_x2_t4_g4_t3_ParamLimits

0x20a6,	// (0x000971c4) list_medium_line_x2_t4_g4_t3

0x20b8,	// (0x000971d6) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20b8,	// (0x000971d6) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a4379) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a4379) list_medium_line_x2_t4_g4_t

0x1fbd,	// (0x000970db) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t2_g4_g1

0x2062,	// (0x00097180) list_medium_line_x2_t2_g4_g2_ParamLimits

0x2062,	// (0x00097180) list_medium_line_x2_t2_g4_g2

0x1fc9,	// (0x000970e7) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x2_t2_g4_g3

0x1fd5,	// (0x000970f3) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a43e0) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a43e0) list_medium_line_x2_t2_g4_g

0x320a,	// (0x00098328) list_medium_line_x2_t2_g4_t1_ParamLimits

0x320a,	// (0x00098328) list_medium_line_x2_t2_g4_t1

0x2008,	// (0x00097126) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2008,	// (0x00097126) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a43e9) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a43e9) list_medium_line_x2_t2_g4_t

0x1fbd,	// (0x000970db) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t2_g3_g1

0x1fc9,	// (0x000970e7) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x2_t2_g3_g2

0x1fd5,	// (0x000970f3) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a4356) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a4356) list_medium_line_x2_t2_g3_g

0x321f,	// (0x0009833d) list_medium_line_x2_t2_g3_t1_ParamLimits

0x321f,	// (0x0009833d) list_medium_line_x2_t2_g3_t1

0x2008,	// (0x00097126) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2008,	// (0x00097126) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a43ee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a43ee) list_medium_line_x2_t2_g3_t

0x33da,	// (0x000984f8) main_sp_fs_list_pane_ParamLimits

0x33da,	// (0x000984f8) main_sp_fs_list_pane

0x33e6,	// (0x00098504) sp_fs_scroll_pane_ParamLimits

0x33e6,	// (0x00098504) sp_fs_scroll_pane

0x33f2,	// (0x00098510) list_medium_line_x2_t3_t1

0x3402,	// (0x00098520) list_medium_line_x2_t3_t2

0x3410,	// (0x0009852e) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a4439) list_medium_line_x2_t3_t

0x341e,	// (0x0009853c) list_medium_line_x3_t4_t1

0x342e,	// (0x0009854c) list_medium_line_x3_t4_t2

0x343c,	// (0x0009855a) list_medium_line_x3_t4_t3

0x3410,	// (0x0009852e) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a4440) list_medium_line_x3_t4_t

0x344a,	// (0x00098568) list_medium_line_x4_t5_t1

0x345a,	// (0x00098578) list_medium_line_x4_t5_t2

0x343c,	// (0x0009855a) list_medium_line_x4_t5_t3

0x3468,	// (0x00098586) list_medium_line_x4_t5_t4

0x3410,	// (0x0009852e) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a4449) list_medium_line_x4_t5_t

0x1fbd,	// (0x000970db) list_medium_line_t4_g4_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_t4_g4_g1

0x3476,	// (0x00098594) list_medium_line_t4_g4_g2_ParamLimits

0x3476,	// (0x00098594) list_medium_line_t4_g4_g2

0x3482,	// (0x000985a0) list_medium_line_t4_g4_g3_ParamLimits

0x3482,	// (0x000985a0) list_medium_line_t4_g4_g3

0x1fd5,	// (0x000970f3) list_medium_line_t4_g4_g4_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a4454) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a4454) list_medium_line_t4_g4_g

0x348e,	// (0x000985ac) list_medium_line_t4_g4_t1_ParamLimits

0x348e,	// (0x000985ac) list_medium_line_t4_g4_t1

0x34a3,	// (0x000985c1) list_medium_line_t4_g4_t2_ParamLimits

0x34a3,	// (0x000985c1) list_medium_line_t4_g4_t2

0x34b8,	// (0x000985d6) list_medium_line_t4_g4_t3_ParamLimits

0x34b8,	// (0x000985d6) list_medium_line_t4_g4_t3

0x2008,	// (0x00097126) list_medium_line_t4_g4_t4_ParamLimits

0x2008,	// (0x00097126) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a445d) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a445d) list_medium_line_t4_g4_t

0x35ce,	// (0x000986ec) chi_dic_find_pane_g1

0x4521,	// (0x0009963f) main_tport_pane

0x6f05,	// (0x0009c023) list_medium_line_plain_t1

0x6fef,	// (0x0009c10d) list_medium_line_t2_g2_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_t2_g2_g1

0x6ffb,	// (0x0009c119) list_medium_line_t2_g2_g2_ParamLimits

0x6ffb,	// (0x0009c119) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000a4b1e) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000a4b1e) list_medium_line_t2_g2_g

0x7007,	// (0x0009c125) list_medium_line_t2_g2_t1_ParamLimits

0x7007,	// (0x0009c125) list_medium_line_t2_g2_t1

0x701e,	// (0x0009c13c) list_medium_line_t2_g2_t2_ParamLimits

0x701e,	// (0x0009c13c) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000a4b23) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000a4b23) list_medium_line_t2_g2_t

0xcf6a,	// (0x000a2088) aid_sp_fs_list_icon_a_sm

0xf0a0,	// (0x000a41be) aid_sp_fs_list_icon_d

0xcf72,	// (0x000a2090) aid_sp_fs_text_primary

0xcf7b,	// (0x000a2099) aid_sp_fs_text_secondary

0x76a8,	// (0x0009c7c6) list_medium_line

0x76a8,	// (0x0009c7c6) list_medium_line_g2

0x76a8,	// (0x0009c7c6) list_medium_line_g3

0x76a8,	// (0x0009c7c6) list_medium_line_plain

0x76a8,	// (0x0009c7c6) list_medium_line_plain_t2

0x76a8,	// (0x0009c7c6) list_medium_line_plain_t3

0x76a8,	// (0x0009c7c6) list_medium_line_right_icon

0x76a8,	// (0x0009c7c6) list_medium_line_right_iconx2

0x76a8,	// (0x0009c7c6) list_medium_line_t2

0x76a8,	// (0x0009c7c6) list_medium_line_t2_g2

0x76a8,	// (0x0009c7c6) list_medium_line_t2_g3

0x76a8,	// (0x0009c7c6) list_medium_line_t2_right_icon

0x76a8,	// (0x0009c7c6) list_medium_line_t2_right_iconx2

0x76a8,	// (0x0009c7c6) list_medium_line_t3

0x76a8,	// (0x0009c7c6) list_medium_line_t3_g2

0x76a8,	// (0x0009c7c6) list_medium_line_t3_g3

0x76a8,	// (0x0009c7c6) list_medium_line_t3_right_iconx2

0x76b1,	// (0x0009c7cf) list_medium_line_t4_g4

0xf0a8,	// (0x000a41c6) list_medium_line_x2

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t2_g2

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t2_g3

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t2_g4

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t3

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t3_g2

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t3_g3

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t3_g4

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t4_g2

0xf0a8,	// (0x000a41c6) list_medium_line_x2_t4_g4

0x76ba,	// (0x0009c7d8) list_medium_line_x3

0x76ba,	// (0x0009c7d8) list_medium_line_x3_t4

0x76ba,	// (0x0009c7d8) list_medium_line_x3_t4_g4

0x76b1,	// (0x0009c7cf) list_medium_line_x4_t4

0x76b1,	// (0x0009c7cf) list_medium_line_x4_t4_g7

0x76b1,	// (0x0009c7cf) list_medium_line_x4_t5

0x76c3,	// (0x0009c7e1) list_single_fs_dyc_pane_ParamLimits

0x76c3,	// (0x0009c7e1) list_single_fs_dyc_pane

0x1fbd,	// (0x000970db) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x4_t4_g7_g1

0x7e36,	// (0x0009cf54) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e36,	// (0x0009cf54) list_medium_line_x4_t4_g7_g2

0x7e42,	// (0x0009cf60) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e42,	// (0x0009cf60) list_medium_line_x4_t4_g7_g3

0x7e51,	// (0x0009cf6f) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e51,	// (0x0009cf6f) list_medium_line_x4_t4_g7_g4

0x7e5d,	// (0x0009cf7b) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e5d,	// (0x0009cf7b) list_medium_line_x4_t4_g7_g5

0x7e6c,	// (0x0009cf8a) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e6c,	// (0x0009cf8a) list_medium_line_x4_t4_g7_g6

0x7e7b,	// (0x0009cf99) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e7b,	// (0x0009cf99) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000a4cee) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000a4cee) list_medium_line_x4_t4_g7_g

0x7e87,	// (0x0009cfa5) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e87,	// (0x0009cfa5) list_medium_line_x4_t4_g7_t1

0x7e9c,	// (0x0009cfba) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7e9c,	// (0x0009cfba) list_medium_line_x4_t4_g7_t2

0x7eb1,	// (0x0009cfcf) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7eb1,	// (0x0009cfcf) list_medium_line_x4_t4_g7_t3

0x7ec6,	// (0x0009cfe4) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ec6,	// (0x0009cfe4) list_medium_line_x4_t4_g7_t4

0x7ed8,	// (0x0009cff6) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ed8,	// (0x0009cff6) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000a4cfd) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000a4cfd) list_medium_line_x4_t4_g7_t

0x7eea,	// (0x0009d008) list_single_dyc_row_pane_ParamLimits

0x7eea,	// (0x0009d008) list_single_dyc_row_pane

0x8577,	// (0x0009d695) call5_gesture_pane_ParamLimits

0x8577,	// (0x0009d695) call5_gesture_pane

0x85ab,	// (0x0009d6c9) call5_windows_pane_ParamLimits

0x85ab,	// (0x0009d6c9) call5_windows_pane

0x861d,	// (0x0009d73b) call5_swipe_1_pane_cp_ParamLimits

0x861d,	// (0x0009d73b) call5_swipe_1_pane_cp

0x8629,	// (0x0009d747) call5_swipe_2_pane_cp_ParamLimits

0x8629,	// (0x0009d747) call5_swipe_2_pane_cp

0xa6de,	// (0x0009f7fc) call5_image_pane_cp

0x8635,	// (0x0009d753) popup_call5_audio_first_window_cp_ParamLimits

0x8635,	// (0x0009d753) popup_call5_audio_first_window_cp

0xda55,	// (0x000a2b73) call5_swipe_1_pane_g1_cp_ParamLimits

0xda55,	// (0x000a2b73) call5_swipe_1_pane_g1_cp

0xda95,	// (0x000a2bb3) call5_swipe_1_pane_g2_cp

0xda6e,	// (0x000a2b8c) call5_swipe_1_pane_t1_cp_ParamLimits

0xda6e,	// (0x000a2b8c) call5_swipe_1_pane_t1_cp

0xda55,	// (0x000a2b73) call5_swipe_2_pane_g1_cp_ParamLimits

0xda55,	// (0x000a2b73) call5_swipe_2_pane_g1_cp

0xda9d,	// (0x000a2bbb) call5_swipe_2_pane_g2_cp

0xdaa5,	// (0x000a2bc3) call5_swipe_2_pane_t1_cp_ParamLimits

0xdaa5,	// (0x000a2bc3) call5_swipe_2_pane_t1_cp

0xe873,	// (0x000a3991) main_sp_fs_email_pane

0xdaba,	// (0x000a2bd8) main_sp_fs_listscroll_pane_te

0x8643,	// (0x0009d761) popup_sp_fs_action_menu_pane_ParamLimits

0x8643,	// (0x0009d761) popup_sp_fs_action_menu_pane

0xbeff,	// (0x000a101d) bg_sp_fs_ctrlbar_pane_g1

0xc52d,	// (0x000a164b) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xc53f,	// (0x000a165d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xc536,	// (0x000a1654) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbeff,	// (0x000a101d) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000a4deb) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbccf,	// (0x000a0ded) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbccf,	// (0x000a0ded) bg_sp_fs_ctrlbar_ddmenu_pane

0xdac3,	// (0x000a2be1) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdac3,	// (0x000a2be1) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdacf,	// (0x000a2bed) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdacf,	// (0x000a2bed) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000a4df4) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000a4df4) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdadb,	// (0x000a2bf9) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdadb,	// (0x000a2bf9) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8687,	// (0x0009d7a5) list_medium_line_t2_right_icon_g1

0x868f,	// (0x0009d7ad) list_medium_line_t2_right_icon_t1

0x869f,	// (0x0009d7bd) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000a4df9) list_medium_line_t2_right_icon_t

0xbae2,	// (0x000a0c00) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbae2,	// (0x000a0c00) bg_sp_fs_ctrlbar_pane

0x8704,	// (0x0009d822) main_sp_fs_ctrlbar_button_pane_cp01

0x870c,	// (0x0009d82a) main_sp_fs_ctrlbar_ddmenu_pane

0xdb2d,	// (0x000a2c4b) main_sp_fs_ctrlbar_pane_g1

0xdb39,	// (0x000a2c57) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000a4dfe) main_sp_fs_ctrlbar_pane_g

0xdb45,	// (0x000a2c63) main_sp_fs_ctrlbar_pane_t1

0x8716,	// (0x0009d834) main_sp_fs_ctrlbar_pane

0x872c,	// (0x0009d84a) main_sp_fs_listscroll_pane_te_cp01

0x873d,	// (0x0009d85b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x873d,	// (0x0009d85b) popup_sp_fs_action_menu_pane_cp01

0xe873,	// (0x000a3991) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe873,	// (0x000a3991) bg_sp_fs_highlight_list_pane_cp01

0xdb75,	// (0x000a2c93) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdb75,	// (0x000a2c93) sp_fs_action_menu_list_gene_pane_g1

0xdb84,	// (0x000a2ca2) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdb84,	// (0x000a2ca2) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000a4e08) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000a4e08) sp_fs_action_menu_list_gene_pane_g

0xdb91,	// (0x000a2caf) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdb91,	// (0x000a2caf) sp_fs_action_menu_list_gene_pane_t1

0xdba9,	// (0x000a2cc7) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdba9,	// (0x000a2cc7) sp_fs_action_menu_list_gene_pane

0xdbca,	// (0x000a2ce8) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdbca,	// (0x000a2ce8) popup_sp_fs_action_menu_bg_pane

0xdbd8,	// (0x000a2cf6) sp_fs_action_menu_list_pane_ParamLimits

0xdbd8,	// (0x000a2cf6) sp_fs_action_menu_list_pane

0x8767,	// (0x0009d885) sp_fs_scroll_pane_cp01_ParamLimits

0x8767,	// (0x0009d885) sp_fs_scroll_pane_cp01

0x878d,	// (0x0009d8ab) list_medium_line_plain_t2_t1

0x879d,	// (0x0009d8bb) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000a4e0d) list_medium_line_plain_t2_t

0x87ab,	// (0x0009d8c9) list_medium_line_plain_t3_t1

0x87bb,	// (0x0009d8d9) list_medium_line_plain_t3_t2

0x87c9,	// (0x0009d8e7) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000a4e12) list_medium_line_plain_t3_t

0x1fbd,	// (0x000970db) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t2_g2_g1

0x1fd5,	// (0x000970f3) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a4364) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a4364) list_medium_line_x2_t2_g2_g

0x348e,	// (0x000985ac) list_medium_line_x2_t2_g2_t1_ParamLimits

0x348e,	// (0x000985ac) list_medium_line_x2_t2_g2_t1

0x2008,	// (0x00097126) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2008,	// (0x00097126) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000a4e19) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000a4e19) list_medium_line_x2_t2_g2_t

0x1fbd,	// (0x000970db) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t4_g2_g1

0x87d7,	// (0x0009d8f5) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87d7,	// (0x0009d8f5) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000a4e1e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000a4e1e) list_medium_line_x2_t4_g2_g

0x87e9,	// (0x0009d907) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87e9,	// (0x0009d907) list_medium_line_x2_t4_g2_t1

0x8803,	// (0x0009d921) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8803,	// (0x0009d921) list_medium_line_x2_t4_g2_t2

0x8818,	// (0x0009d936) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8818,	// (0x0009d936) list_medium_line_x2_t4_g2_t3

0x2008,	// (0x00097126) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2008,	// (0x00097126) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000a4e23) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000a4e23) list_medium_line_x2_t4_g2_t

0x882d,	// (0x0009d94b) list_medium_line_t3_right_iconx2_g1

0x8687,	// (0x0009d7a5) list_medium_line_t3_right_iconx2_g2

0x8835,	// (0x0009d953) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000a4e2c) list_medium_line_t3_right_iconx2_g

0x883d,	// (0x0009d95b) list_medium_line_t3_right_iconx2_t1

0x884d,	// (0x0009d96b) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000a4e33) list_medium_line_t3_right_iconx2_t

0x1fbd,	// (0x000970db) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x3_t4_g4_g1

0x1fc9,	// (0x000970e7) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x3_t4_g4_g2

0x3476,	// (0x00098594) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3476,	// (0x00098594) list_medium_line_x3_t4_g4_g3

0x885b,	// (0x0009d979) list_medium_line_x3_t4_g4_g4_ParamLimits

0x885b,	// (0x0009d979) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000a4e38) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000a4e38) list_medium_line_x3_t4_g4_g

0x8867,	// (0x0009d985) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8867,	// (0x0009d985) list_medium_line_x3_t4_g4_t1

0x887e,	// (0x0009d99c) list_medium_line_x3_t4_g4_t2_ParamLimits

0x887e,	// (0x0009d99c) list_medium_line_x3_t4_g4_t2

0x34a3,	// (0x000985c1) list_medium_line_x3_t4_g4_t3_ParamLimits

0x34a3,	// (0x000985c1) list_medium_line_x3_t4_g4_t3

0x8893,	// (0x0009d9b1) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8893,	// (0x0009d9b1) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000a4e41) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000a4e41) list_medium_line_x3_t4_g4_t

0x88b0,	// (0x0009d9ce) list_single_dyc_row_text_pane_t1_ParamLimits

0x88b0,	// (0x0009d9ce) list_single_dyc_row_text_pane_t1

0x88e7,	// (0x0009da05) list_single_dyc_row_text_pane_t2_ParamLimits

0x88e7,	// (0x0009da05) list_single_dyc_row_text_pane_t2

0xdbfa,	// (0x000a2d18) list_single_dyc_row_text_pane_t3_ParamLimits

0xdbfa,	// (0x000a2d18) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000a4e4a) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000a4e4a) list_single_dyc_row_text_pane_t

0xdc1e,	// (0x000a2d3c) list_single_dyc_row_pane_g1_ParamLimits

0xdc1e,	// (0x000a2d3c) list_single_dyc_row_pane_g1

0xdc2a,	// (0x000a2d48) list_single_dyc_row_pane_g2_ParamLimits

0xdc2a,	// (0x000a2d48) list_single_dyc_row_pane_g2

0xdc36,	// (0x000a2d54) list_single_dyc_row_pane_g3_ParamLimits

0xdc36,	// (0x000a2d54) list_single_dyc_row_pane_g3

0xdc42,	// (0x000a2d60) list_single_dyc_row_pane_g4_ParamLimits

0xdc42,	// (0x000a2d60) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a4e57) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a4e57) list_single_dyc_row_pane_g

0xdc4e,	// (0x000a2d6c) list_single_dyc_row_text_pane_ParamLimits

0xdc4e,	// (0x000a2d6c) list_single_dyc_row_text_pane

0xe72a,	// (0x000a3848) bg_sp_fs_scroll_pane

0xdc6d,	// (0x000a2d8b) thumb_sp_fs_scroll_pane

0x6fef,	// (0x0009c10d) list_medium_line_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_g1

0x8a0a,	// (0x0009db28) list_medium_line_t1_ParamLimits

0x8a0a,	// (0x0009db28) list_medium_line_t1

0x1fbd,	// (0x000970db) list_medium_line_x2_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_g1

0x1fc9,	// (0x000970e7) list_medium_line_x2_g2_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000a4e60) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000a4e60) list_medium_line_x2_g

0xdc76,	// (0x000a2d94) list_medium_line_x2_t1_ParamLimits

0xdc76,	// (0x000a2d94) list_medium_line_x2_t1

0x1fbd,	// (0x000970db) list_medium_line_x3_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x3_g1

0x1fc9,	// (0x000970e7) list_medium_line_x3_g2_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000a4e60) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000a4e60) list_medium_line_x3_g

0xdc76,	// (0x000a2d94) list_medium_line_x3_t1_ParamLimits

0xdc76,	// (0x000a2d94) list_medium_line_x3_t1

0xdc8c,	// (0x000a2daa) thumb_sp_fs_scroll_pane_g1

0xdc95,	// (0x000a2db3) thumb_sp_fs_scroll_pane_g2

0xdc9e,	// (0x000a2dbc) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a4e65) thumb_sp_fs_scroll_pane_g

0xdc8c,	// (0x000a2daa) bg_sp_fs_scroll_pane_g1

0xdc95,	// (0x000a2db3) bg_sp_fs_scroll_pane_g2

0xdc9e,	// (0x000a2dbc) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a4e65) bg_sp_fs_scroll_pane_g

0x1fbd,	// (0x000970db) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fbd,	// (0x000970db) list_medium_line_x2_t3_g4_g1

0x2062,	// (0x00097180) list_medium_line_x2_t3_g4_g2_ParamLimits

0x2062,	// (0x00097180) list_medium_line_x2_t3_g4_g2

0x1fc9,	// (0x000970e7) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fc9,	// (0x000970e7) list_medium_line_x2_t3_g4_g3

0x1fd5,	// (0x000970f3) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fd5,	// (0x000970f3) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a43e0) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a43e0) list_medium_line_x2_t3_g4_g

0x8a1f,	// (0x0009db3d) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a1f,	// (0x0009db3d) list_medium_line_x2_t3_g4_t1

0x8a35,	// (0x0009db53) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a35,	// (0x0009db53) list_medium_line_x2_t3_g4_t2

0x2008,	// (0x00097126) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2008,	// (0x00097126) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000a4e6c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000a4e6c) list_medium_line_x2_t3_g4_t

0x6fef,	// (0x0009c10d) list_medium_line_g2_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_g2_g1

0x6ffb,	// (0x0009c119) list_medium_line_g2_g2_ParamLimits

0x6ffb,	// (0x0009c119) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000a4b1e) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000a4b1e) list_medium_line_g2_g

0x8a4f,	// (0x0009db6d) list_medium_line_g2_t1_ParamLimits

0x8a4f,	// (0x0009db6d) list_medium_line_g2_t1

0x6fef,	// (0x0009c10d) list_medium_line_t3_g2_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_t3_g2_g1

0x6ffb,	// (0x0009c119) list_medium_line_t3_g2_g2_ParamLimits

0x6ffb,	// (0x0009c119) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000a4b1e) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000a4b1e) list_medium_line_t3_g2_g

0x8a64,	// (0x0009db82) list_medium_line_t3_g2_t1_ParamLimits

0x8a64,	// (0x0009db82) list_medium_line_t3_g2_t1

0x8a7b,	// (0x0009db99) list_medium_line_t3_g2_t2_ParamLimits

0x8a7b,	// (0x0009db99) list_medium_line_t3_g2_t2

0x8a90,	// (0x0009dbae) list_medium_line_t3_g2_t3_ParamLimits

0x8a90,	// (0x0009dbae) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000a4e73) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000a4e73) list_medium_line_t3_g2_t

0x8687,	// (0x0009d7a5) list_medium_line_right_icon_g1

0x8aa5,	// (0x0009dbc3) list_medium_line_right_icon_t1

0x6fef,	// (0x0009c10d) list_medium_line_t2_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_t2_g1

0x8ab3,	// (0x0009dbd1) list_medium_line_t2_t1_ParamLimits

0x8ab3,	// (0x0009dbd1) list_medium_line_t2_t1

0x8acd,	// (0x0009dbeb) list_medium_line_t2_t2_ParamLimits

0x8acd,	// (0x0009dbeb) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000a4e7a) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000a4e7a) list_medium_line_t2_t

0x6fef,	// (0x0009c10d) list_medium_line_t3_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_t3_g1

0x8ae2,	// (0x0009dc00) list_medium_line_t3_t1_ParamLimits

0x8ae2,	// (0x0009dc00) list_medium_line_t3_t1

0x8afc,	// (0x0009dc1a) list_medium_line_t3_t2_ParamLimits

0x8afc,	// (0x0009dc1a) list_medium_line_t3_t2

0x8b11,	// (0x0009dc2f) list_medium_line_t3_t3_ParamLimits

0x8b11,	// (0x0009dc2f) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000a4e7f) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000a4e7f) list_medium_line_t3_t

0x6fef,	// (0x0009c10d) list_medium_line_g3_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_g3_g1

0x8b26,	// (0x0009dc44) list_medium_line_g3_g2_ParamLimits

0x8b26,	// (0x0009dc44) list_medium_line_g3_g2

0x6ffb,	// (0x0009c119) list_medium_line_g3_g3_ParamLimits

0x6ffb,	// (0x0009c119) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000a4e86) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000a4e86) list_medium_line_g3_g

0x8b32,	// (0x0009dc50) list_medium_line_g3_t1_ParamLimits

0x8b32,	// (0x0009dc50) list_medium_line_g3_t1

0x6fef,	// (0x0009c10d) list_medium_line_t2_g3_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_t2_g3_g1

0x8b26,	// (0x0009dc44) list_medium_line_t2_g3_g2_ParamLimits

0x8b26,	// (0x0009dc44) list_medium_line_t2_g3_g2

0x6ffb,	// (0x0009c119) list_medium_line_t2_g3_g3_ParamLimits

0x6ffb,	// (0x0009c119) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000a4e86) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000a4e86) list_medium_line_t2_g3_g

0x8b47,	// (0x0009dc65) list_medium_line_t2_g3_t1_ParamLimits

0x8b47,	// (0x0009dc65) list_medium_line_t2_g3_t1

0x8b5e,	// (0x0009dc7c) list_medium_line_t2_g3_t2_ParamLimits

0x8b5e,	// (0x0009dc7c) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000a4e8d) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000a4e8d) list_medium_line_t2_g3_t

0x6fef,	// (0x0009c10d) list_medium_line_t3_g3_g1_ParamLimits

0x6fef,	// (0x0009c10d) list_medium_line_t3_g3_g1

0x8b26,	// (0x0009dc44) list_medium_line_t3_g3_g2_ParamLimits

0x8b26,	// (0x0009dc44) list_medium_line_t3_g3_g2

0x6ffb,	// (0x0009c119) list_medium_line_t3_g3_g3_ParamLimits

0x6ffb,	// (0x0009c119) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000a4e86) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000a4e86) list_medium_line_t3_g3_g

0x8b73,	// (0x0009dc91) list_medium_line_t3_g3_t1_ParamLimits

0x8b73,	// (0x0009dc91) list_medium_line_t3_g3_t1

0x8b8c,	// (0x0009dcaa) list_medium_line_t3_g3_t2_ParamLimits

0x8b8c,	// (0x0009dcaa) list_medium_line_t3_g3_t2

0x8ba2,	// (0x0009dcc0) list_medium_line_t3_g3_t3_ParamLimits

0x8ba2,	// (0x0009dcc0) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000a4e92) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000a4e92) list_medium_line_t3_g3_t

0x882d,	// (0x0009d94b) list_medium_line_right_iconx2_g1

0x8687,	// (0x0009d7a5) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a4e99) list_medium_line_right_iconx2_g

0x8bb8,	// (0x0009dcd6) list_medium_line_right_iconx2_t1

0x882d,	// (0x0009d94b) list_medium_line_t2_right_iconx2_g1

0x8687,	// (0x0009d7a5) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a4e99) list_medium_line_t2_right_iconx2_g

0x8bc6,	// (0x0009dce4) list_medium_line_t2_right_iconx2_t1

0x8bd6,	// (0x0009dcf4) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000a4e9e) list_medium_line_t2_right_iconx2_t

0x8be4,	// (0x0009dd02) list_medium_line_x4_t4_t1

0x8bf2,	// (0x0009dd10) list_medium_line_x4_t4_t2

0x8c02,	// (0x0009dd20) list_medium_line_x4_t4_t3

0x8c12,	// (0x0009dd30) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000a4ea3) list_medium_line_x4_t4_t

0x8c4c,	// (0x0009dd6a) tport_appsw_pane_ParamLimits

0x8c4c,	// (0x0009dd6a) tport_appsw_pane

0x8c5a,	// (0x0009dd78) tport_contact_pane_ParamLimits

0x8c5a,	// (0x0009dd78) tport_contact_pane

0x8c6a,	// (0x0009dd88) tport_listscroll_pane_ParamLimits

0x8c6a,	// (0x0009dd88) tport_listscroll_pane

0x8c7a,	// (0x0009dd98) cell_tport_appsw_pane_ParamLimits

0x8c7a,	// (0x0009dd98) cell_tport_appsw_pane

0xc21f,	// (0x000a133d) tport_appsw_pane_g1_ParamLimits

0xc21f,	// (0x000a133d) tport_appsw_pane_g1

0xdca7,	// (0x000a2dc5) tport_contact_pane_g1

0xd564,	// (0x000a2682) tport_contact_pane_t1

0xdcb0,	// (0x000a2dce) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000a4eac) tport_contact_pane_t

0xdcbe,	// (0x000a2ddc) list_tport_pane

0xdcc7,	// (0x000a2de5) scroll_pane_cp_030

0x8cad,	// (0x0009ddcb) cell_tport_appsw_pane_g1

0x8cbd,	// (0x0009dddb) cell_tport_appsw_pane_t1

0x8ccb,	// (0x0009dde9) grid_highlight_pane_cp019

0x8cd3,	// (0x0009ddf1) list_tport_double_graphic_pane_ParamLimits

0x8cd3,	// (0x0009ddf1) list_tport_double_graphic_pane

0xe873,	// (0x000a3991) list_highlight_pane_cp023_ParamLimits

0xe873,	// (0x000a3991) list_highlight_pane_cp023

0x8ce4,	// (0x0009de02) list_tport_double_graphic_pane_g1_ParamLimits

0x8ce4,	// (0x0009de02) list_tport_double_graphic_pane_g1

0x8cf1,	// (0x0009de0f) list_tport_double_graphic_pane_t1_ParamLimits

0x8cf1,	// (0x0009de0f) list_tport_double_graphic_pane_t1

0x8d06,	// (0x0009de24) list_tport_double_graphic_pane_t2_ParamLimits

0x8d06,	// (0x0009de24) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000a4eb8) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000a4eb8) list_tport_double_graphic_pane_t

0xe72a,	// (0x000a3848) main_cale_note_pane

0x67b2,	// (0x0009b8d0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67b2,	// (0x0009b8d0) cell_vitu2_function_top_wide_pane_cp01

0x824c,	// (0x0009d36a) wait_bar_pane_cp05_ParamLimits

0xe873,	// (0x000a3991) listscroll_cmail_pane

0xdcd0,	// (0x000a2dee) list_cmail_pane

0x8d18,	// (0x0009de36) list_cmail_body_pane

0x8d38,	// (0x0009de56) list_single_cmail_header_caption_pane

0x8d64,	// (0x0009de82) list_single_cmail_header_detail_pane_ParamLimits

0x8d64,	// (0x0009de82) list_single_cmail_header_detail_pane

0xdce0,	// (0x000a2dfe) list_single_cmail_header_caption_pane_t1

0x8d9a,	// (0x0009deb8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d9a,	// (0x0009deb8) list_single_cmail_header_detail_pane_g1

0xf0b1,	// (0x000a41cf) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b1,	// (0x000a41cf) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000a4ebd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000a4ebd) list_single_cmail_header_detail_pane_g

0x8db0,	// (0x0009dece) list_single_cmail_header_detail_pane_t1_ParamLimits

0x8db0,	// (0x0009dece) list_single_cmail_header_detail_pane_t1

0x8dec,	// (0x0009df0a) list_single_cmail_header_editor_pane_bg_ParamLimits

0x8dec,	// (0x0009df0a) list_single_cmail_header_editor_pane_bg

0xd705,	// (0x000a2823) list_cmail_body_pane_g1

0xdd28,	// (0x000a2e46) list_cmail_body_pane_t1

0xc9e7,	// (0x000a1b05) list_single_cmail_header_editor_pane_bg_g1

0x9ecf,	// (0x0009efed) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc9f7,	// (0x000a1b15) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc9ef,	// (0x000a1b0d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcc2f,	// (0x000a1d4d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xca17,	// (0x000a1b35) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xca07,	// (0x000a1b25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xca0f,	// (0x000a1b2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9eaf,	// (0x0009efcd) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8e03,	// (0x0009df21) calenote_gesture_pane_ParamLimits

0x8e03,	// (0x0009df21) calenote_gesture_pane

0x8e1d,	// (0x0009df3b) calenote_window_pane_ParamLimits

0x8e1d,	// (0x0009df3b) calenote_window_pane

0xdd36,	// (0x000a2e54) popup_note_window_cp01

0x8e35,	// (0x0009df53) calenote_swipe_1_pane_ParamLimits

0x8e35,	// (0x0009df53) calenote_swipe_1_pane

0x8629,	// (0x0009d747) calenote_swipe_2_pane_ParamLimits

0x8629,	// (0x0009d747) calenote_swipe_2_pane

0xda55,	// (0x000a2b73) calenote_swipe_1_pane_g1_ParamLimits

0xda55,	// (0x000a2b73) calenote_swipe_1_pane_g1

0xda62,	// (0x000a2b80) calenote_swipe_1_pane_g2_ParamLimits

0xda62,	// (0x000a2b80) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000a4de1) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000a4de1) calenote_swipe_1_pane_g

0xdd48,	// (0x000a2e66) calenote_swipe_1_pane_t1_ParamLimits

0xdd48,	// (0x000a2e66) calenote_swipe_1_pane_t1

0xda55,	// (0x000a2b73) calenote_swipe_2_pane_g1_ParamLimits

0xda55,	// (0x000a2b73) calenote_swipe_2_pane_g1

0xdd67,	// (0x000a2e85) calenote_swipe_2_pane_g2_ParamLimits

0xdd67,	// (0x000a2e85) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000a4ec9) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000a4ec9) calenote_swipe_2_pane_g

0xdd73,	// (0x000a2e91) calenote_swipe_2_pane_t1_ParamLimits

0xdd73,	// (0x000a2e91) calenote_swipe_2_pane_t1

0xe72a,	// (0x000a3848) main_mup_navstr_pane

0x550d,	// (0x0009a62b) main_mup3_pane_t7_ParamLimits

0x550d,	// (0x0009a62b) main_mup3_pane_t7

0x5f12,	// (0x0009b030) main_mp4_pane_g6_ParamLimits

0x5f12,	// (0x0009b030) main_mp4_pane_g6

0x6292,	// (0x0009b3b0) main_image3_pane_t4_ParamLimits

0x6292,	// (0x0009b3b0) main_image3_pane_t4

0x8e48,	// (0x0009df66) popup_navstr_preview_pane_ParamLimits

0x8e48,	// (0x0009df66) popup_navstr_preview_pane

0x8e54,	// (0x0009df72) scroll_navstr_pane_ParamLimits

0x8e54,	// (0x0009df72) scroll_navstr_pane

0xe72a,	// (0x000a3848) bg_popup_preview_window_pane_cp04

0xdd9a,	// (0x000a2eb8) popup_navstr_preview_pane_t1

0x8e60,	// (0x0009df7e) scroll_navstr_pane_g1_ParamLimits

0x8e60,	// (0x0009df7e) scroll_navstr_pane_g1

0x8e6d,	// (0x0009df8b) scroll_navstr_pane_t1_ParamLimits

0x8e6d,	// (0x0009df8b) scroll_navstr_pane_t1

0xdd3f,	// (0x000a2e5d) bg_button_pane_cp014

0xdd3f,	// (0x000a2e5d) bg_button_pane_cp030

0x851d,	// (0x0009d63b) list_double_fisheye_pane_g4_ParamLimits

0x851d,	// (0x0009d63b) list_double_fisheye_pane_g4

0x8529,	// (0x0009d647) list_double_fisheye_pane_g5_ParamLimits

0x8529,	// (0x0009d647) list_double_fisheye_pane_g5

0xbeda,	// (0x000a0ff8) sp_fs_scroll_pane_cp03

0xdb2d,	// (0x000a2c4b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdb39,	// (0x000a2c57) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000a4dfe) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdb45,	// (0x000a2c63) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdcd8,	// (0x000a2df6) sp_fs_scroll_pane_cp02

0xefac,	// (0x000a40ca) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xefac,	// (0x000a40ca) popup_sp_fs_calendar_preview_list_single_pane

0xe72a,	// (0x000a3848) main_cam6_pano_pane

0x4505,	// (0x00099623) main_mup3_pane_ParamLimits

0xe72a,	// (0x000a3848) main_phacti_pane

0x8121,	// (0x0009d23f) bg_button_pane_cp11

0x8139,	// (0x0009d257) main_mobtv_info_pane_g2_ParamLimits

0x8139,	// (0x0009d257) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000a4d5e) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000a4d5e) main_mobtv_info_pane_g

0x82eb,	// (0x0009d409) sc_clock_pane_t5_ParamLimits

0x82eb,	// (0x0009d409) sc_clock_pane_t5

0x838e,	// (0x0009d4ac) main_radioblah_pane_g1_ParamLimits

0xd9a1,	// (0x000a2abf) main_radioblah_pane_t3_ParamLimits

0xd9a1,	// (0x000a2abf) main_radioblah_pane_t3

0xd9b9,	// (0x000a2ad7) main_radioblah_pane_t4_ParamLimits

0xd9b9,	// (0x000a2ad7) main_radioblah_pane_t4

0x83ac,	// (0x0009d4ca) main_radioblah_text_pane_ParamLimits

0x83ac,	// (0x0009d4ca) main_radioblah_text_pane

0x83b9,	// (0x0009d4d7) main_radioblah_info_pane_g1_ParamLimits

0x844e,	// (0x0009d56c) main_radioblah_info_pane_t4_ParamLimits

0x844e,	// (0x0009d56c) main_radioblah_info_pane_t4

0xe873,	// (0x000a3991) main_sp_fs_calendar_pane

0x8e7f,	// (0x0009df9d) main_phacti_pane_g1

0x8e87,	// (0x0009dfa5) phacti_note_pane_ParamLimits

0x8e87,	// (0x0009dfa5) phacti_note_pane

0xddb1,	// (0x000a2ecf) phacti_term_pane_ParamLimits

0xddb1,	// (0x000a2ecf) phacti_term_pane

0xddc6,	// (0x000a2ee4) phacti_note_pane_t1_ParamLimits

0xddc6,	// (0x000a2ee4) phacti_note_pane_t1

0xdddd,	// (0x000a2efb) phacti_term_pane_g1

0xdde5,	// (0x000a2f03) phacti_term_pane_t1_ParamLimits

0xdde5,	// (0x000a2f03) phacti_term_pane_t1

0xde0f,	// (0x000a2f2d) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9cd0,	// (0x0009edee) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000a4ed3) popup_sp_fs_calendar_preview_list_single_pane_g

0xde17,	// (0x000a2f35) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xde17,	// (0x000a2f35) popup_sp_fs_calendar_preview_list_single_pane_t1

0xde2c,	// (0x000a2f4a) aid_popup_sp_fs_bg_corner_pane

0xbeff,	// (0x000a101d) popup_sp_fs_calendar_preview_bg_pane_g1

0xe72a,	// (0x000a3848) popup_sp_fs_calendar_preview_bg_pane

0xde34,	// (0x000a2f52) popup_sp_fs_calendar_preview_list_pane

0xbae2,	// (0x000a0c00) bg_main_sp_fs_cale_pane_ParamLimits

0xbae2,	// (0x000a0c00) bg_main_sp_fs_cale_pane

0xde3c,	// (0x000a2f5a) listscroll_cale_mrui_pane_ParamLimits

0xde3c,	// (0x000a2f5a) listscroll_cale_mrui_pane

0xca6b,	// (0x000a1b89) listscroll_sp_fs_schedule_track_pane

0xde51,	// (0x000a2f6f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde51,	// (0x000a2f6f) main_sp_fs_ctrlbar_pane_cp01

0xde64,	// (0x000a2f82) main_sp_fs_ribbon_pane

0xde6c,	// (0x000a2f8a) popup_sp_fs_cale_preview_window

0x8eea,	// (0x0009e008) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8eea,	// (0x0009e008) list_single_sp_fs_schedule_track_pane

0xe5a0,	// (0x000a36be) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe5a0,	// (0x000a36be) bg_sp_fs_highlight_list_pane_cp03

0x8f0d,	// (0x0009e02b) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8f0d,	// (0x0009e02b) list_single_sp_fs_schedule_track_pane_g1

0x8f19,	// (0x0009e037) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8f19,	// (0x0009e037) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000a4ed8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000a4ed8) list_single_sp_fs_schedule_track_pane_g

0x8f25,	// (0x0009e043) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8f25,	// (0x0009e043) list_single_sp_fs_schedule_track_pane_t1

0x8f3d,	// (0x0009e05b) sp_fs_schedule_track_pane_ParamLimits

0x8f3d,	// (0x0009e05b) sp_fs_schedule_track_pane

0xde7e,	// (0x000a2f9c) sp_fs_schedule_track_pane_g1

0xde86,	// (0x000a2fa4) sp_fs_schedule_track_pane_g2

0xde8e,	// (0x000a2fac) sp_fs_schedule_track_pane_g3

0xde96,	// (0x000a2fb4) sp_fs_schedule_track_pane_g4

0xde9e,	// (0x000a2fbc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000a4edd) sp_fs_schedule_track_pane_g

0xc9e7,	// (0x000a1b05) bg_sp_fs_schedule_viewer_highlight_g1

0x9ecf,	// (0x0009efed) bg_sp_fs_schedule_viewer_highlight_g2

0xc9ef,	// (0x000a1b0d) bg_sp_fs_schedule_viewer_highlight_g3

0xc9f7,	// (0x000a1b15) bg_sp_fs_schedule_viewer_highlight_g4

0xcc2f,	// (0x000a1d4d) bg_sp_fs_schedule_viewer_highlight_g5

0xca07,	// (0x000a1b25) bg_sp_fs_schedule_viewer_highlight_g6

0xca0f,	// (0x000a1b2d) bg_sp_fs_schedule_viewer_highlight_g7

0xca17,	// (0x000a1b35) bg_sp_fs_schedule_viewer_highlight_g8

0x9eaf,	// (0x0009efcd) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000a4ee8) bg_sp_fs_schedule_viewer_highlight_g

0xe72a,	// (0x000a3848) bg_main_sp_fs_ribbon_pane

0x8f4d,	// (0x0009e06b) main_sp_fs_ribbon_pane_g1

0xdea6,	// (0x000a2fc4) main_sp_fs_ribbon_pane_t1

0x8f56,	// (0x0009e074) main_sp_fs_ribbon_pane_t2

0xdeb5,	// (0x000a2fd3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000a4efb) main_sp_fs_ribbon_pane_t

0xdec4,	// (0x000a2fe2) main_sp_fs_ribbon_scheduler_pane

0xdecc,	// (0x000a2fea) bg_main_sp_fs_ribbon_pane_g1

0xded5,	// (0x000a2ff3) bg_main_sp_fs_ribbon_pane_g2

0xdede,	// (0x000a2ffc) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000a4f02) bg_main_sp_fs_ribbon_pane_g

0xdee6,	// (0x000a3004) main_sp_fs_ribbon_scheduler_pane_g1

0xdeef,	// (0x000a300d) main_sp_fs_ribbon_scheduler_pane_g2

0xdef8,	// (0x000a3016) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000a4f09) main_sp_fs_ribbon_scheduler_pane_g

0xdf01,	// (0x000a301f) list_cale_mrui_pane

0x8f65,	// (0x0009e083) sp_fs_scroll_pane_cp07_ParamLimits

0x8f65,	// (0x0009e083) sp_fs_scroll_pane_cp07

0x8f81,	// (0x0009e09f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f81,	// (0x0009e09f) bg_sp_fs_schedule_viewer_highlight

0xdf0e,	// (0x000a302c) list_single_sp_fs_schedule_track_pane_cp01

0xdf16,	// (0x000a3034) list_sp_fs_schedule_track_pane

0xdf1e,	// (0x000a303c) sp_fs_scroll_pane_cp06_ParamLimits

0xdf1e,	// (0x000a303c) sp_fs_scroll_pane_cp06

0xbeff,	// (0x000a101d) bgmain_sp_fs_calendar_pane_g1

0x8f8e,	// (0x0009e0ac) list_single_cale_mrui_pane_ParamLimits

0x8f8e,	// (0x0009e0ac) list_single_cale_mrui_pane

0xdf30,	// (0x000a304e) list_single_cale_mrui_row_pane_ParamLimits

0xdf30,	// (0x000a304e) list_single_cale_mrui_row_pane

0xdf3d,	// (0x000a305b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf3d,	// (0x000a305b) list_single_cale_mrui_row_pane_g1

0xdf8a,	// (0x000a30a8) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdf8a,	// (0x000a30a8) list_single_cale_mrui_row_pane_t1

0x8fbb,	// (0x0009e0d9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8fbb,	// (0x0009e0d9) list_single_cale_mrui_row_pane_t2

0xdf9c,	// (0x000a30ba) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdf9c,	// (0x000a30ba) list_single_cale_mrui_row_pane_t3

0xdfcb,	// (0x000a30e9) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdfcb,	// (0x000a30e9) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000a4f17) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000a4f17) list_single_cale_mrui_row_pane_t

0x9021,	// (0x0009e13f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x9021,	// (0x0009e13f) list_single_cmail_header_editor_pane_bg_cp01

0x9041,	// (0x0009e15f) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x9041,	// (0x0009e15f) list_single_cmail_header_editor_pane_bg_cp02

0x905d,	// (0x0009e17b) main_radioblah_text_pane_t1_ParamLimits

0x905d,	// (0x0009e17b) main_radioblah_text_pane_t1

0xdffa,	// (0x000a3118) cam6_indi_pane_cp01

0xe002,	// (0x000a3120) cam6_mode_pane_cp01

0xe00a,	// (0x000a3128) cam6_pano_pane

0xe013,	// (0x000a3131) cam6_zoom_pane_cp01

0xe01b,	// (0x000a3139) cam6_pano_image_pane

0xe026,	// (0x000a3144) cam6_pano_pane_g1

0xd705,	// (0x000a2823) cam6_pano_pane_g2

0xe02f,	// (0x000a314d) cam6_pano_pane_g3

0xe038,	// (0x000a3156) cam6_pano_pane_g4

0xc51a,	// (0x000a1638) cam6_pano_pane_g5

0xe041,	// (0x000a315f) cam6_pano_pane_g6

0xdf82,	// (0x000a30a0) cam6_pano_pane_g7

0xe04b,	// (0x000a3169) cam6_pano_pane_g8

0xe054,	// (0x000a3172) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000a4f20) cam6_pano_pane_g

0xe72a,	// (0x000a3848) main_browser_tag_pane

0xdd92,	// (0x000a2eb0) grid_navstr_albumart_pane

0xe05f,	// (0x000a317d) cell_navstr_albumart_pane_ParamLimits

0xe05f,	// (0x000a317d) cell_navstr_albumart_pane

0xe07f,	// (0x000a319d) cell_navstr_albumart_pane_g1

0xb8e7,	// (0x000a0a05) cell_navstr_albumart_pane_g2

0xb8f7,	// (0x000a0a15) cell_navstr_albumart_pane_g3

0xb8ef,	// (0x000a0a0d) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000a4f33) cell_navstr_albumart_pane_g

0x9078,	// (0x0009e196) bt_list_pane_ParamLimits

0x9078,	// (0x0009e196) bt_list_pane

0x9098,	// (0x0009e1b6) bt_list_pane_t1

0x90a7,	// (0x0009e1c5) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000a4f3c) bt_list_pane_t

0xe72a,	// (0x000a3848) main_cale_prevew_pane

0x90b6,	// (0x0009e1d4) popup_cale_preview_window_ParamLimits

0x90b6,	// (0x0009e1d4) popup_cale_preview_window

0xe873,	// (0x000a3991) bg_popup_preview_window_pane_cp05_ParamLimits

0xe873,	// (0x000a3991) bg_popup_preview_window_pane_cp05

0xe087,	// (0x000a31a5) list_cale_preview_pane_ParamLimits

0xe087,	// (0x000a31a5) list_cale_preview_pane

0x90cf,	// (0x0009e1ed) list_double_cale_preview_pane_ParamLimits

0x90cf,	// (0x0009e1ed) list_double_cale_preview_pane

0x90e1,	// (0x0009e1ff) list_single_cale_preview_pane_ParamLimits

0x90e1,	// (0x0009e1ff) list_single_cale_preview_pane

0x90f7,	// (0x0009e215) list_single_cale_preview_pane_g1

0x90ff,	// (0x0009e21d) list_single_cale_preview_pane_t1_ParamLimits

0x90ff,	// (0x0009e21d) list_single_cale_preview_pane_t1

0x9114,	// (0x0009e232) list_double_cale_preview_pane_g1

0x911c,	// (0x0009e23a) list_double_cale_preview_pane_t1_ParamLimits

0x911c,	// (0x0009e23a) list_double_cale_preview_pane_t1

0x9131,	// (0x0009e24f) list_double_cale_preview_pane_t2_ParamLimits

0x9131,	// (0x0009e24f) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000a4f41) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000a4f41) list_double_cale_preview_pane_t

0xe72a,	// (0x000a3848) main_ezdial_pane

0xe873,	// (0x000a3991) main_sp_fs_email_pane_ParamLimits

0x86ad,	// (0x0009d7cb) cmail_ddmenu_btn01_pane_ParamLimits

0x86ad,	// (0x0009d7cb) cmail_ddmenu_btn01_pane

0x86ca,	// (0x0009d7e8) cmail_ddmenu_btn02_pane_ParamLimits

0x86ca,	// (0x0009d7e8) cmail_ddmenu_btn02_pane

0x86e8,	// (0x0009d806) cmail_ddmenu_btn03_pane_ParamLimits

0x86e8,	// (0x0009d806) cmail_ddmenu_btn03_pane

0x8716,	// (0x0009d834) main_sp_fs_ctrlbar_pane_ParamLimits

0x872c,	// (0x0009d84a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d18,	// (0x0009de36) list_cmail_body_pane_ParamLimits

0xdcee,	// (0x000a2e0c) bg_button_pane_cp12

0xdcf7,	// (0x000a2e15) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdcf7,	// (0x000a2e15) list_single_cmail_header_detail_pane_g3

0xdd04,	// (0x000a2e22) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdd04,	// (0x000a2e22) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000a4ec4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000a4ec4) list_single_cmail_header_detail_pane_t

0xddfa,	// (0x000a2f18) phacti_term_pane_t2_ParamLimits

0xddfa,	// (0x000a2f18) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000a4ece) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000a4ece) phacti_term_pane_t

0xe093,	// (0x000a31b1) aid_size_list_single_double

0x9149,	// (0x0009e267) popup_ezdial_listscroll_window

0x916a,	// (0x0009e288) popup_number_entry_window_cp01

0xa6de,	// (0x0009f7fc) bg_popup_call_pane_cp09

0xe09f,	// (0x000a31bd) ezdial_list_pane

0xe0a7,	// (0x000a31c5) scroll_pane_cp23

0xbccf,	// (0x000a0ded) bg_button_pane_cp028_ParamLimits

0xbccf,	// (0x000a0ded) bg_button_pane_cp028

0x9178,	// (0x0009e296) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9178,	// (0x0009e296) cmail_ddmenu_btn01_pane_g1

0x9188,	// (0x0009e2a6) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9188,	// (0x0009e2a6) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000a4f46) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000a4f46) cmail_ddmenu_btn01_pane_g

0xe0af,	// (0x000a31cd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe0af,	// (0x000a31cd) cmail_ddmenu_btn01_pane_t1

0xbae2,	// (0x000a0c00) bg_button_pane_cp029_ParamLimits

0xbae2,	// (0x000a0c00) bg_button_pane_cp029

0x9194,	// (0x0009e2b2) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9194,	// (0x0009e2b2) cmail_ddmenu_btn02_pane_g1

0x91ac,	// (0x0009e2ca) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x91ac,	// (0x0009e2ca) cmail_ddmenu_btn02_pane_t1

0xe5a0,	// (0x000a36be) bg_button_pane_cp031_ParamLimits

0xe5a0,	// (0x000a36be) bg_button_pane_cp031

0x9194,	// (0x0009e2b2) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9194,	// (0x0009e2b2) cmail_ddmenu_btn03_pane_g1

0x91ac,	// (0x0009e2ca) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x91ac,	// (0x0009e2ca) cmail_ddmenu_btn03_pane_t1

0x612f,	// (0x0009b24d) cell_dialer2_keypad_pane_t1_ParamLimits

0x6149,	// (0x0009b267) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6149,	// (0x0009b267) cell_dialer2_keypad_pane_t1_copy1

0x7fa6,	// (0x0009d0c4) ncimui_group_button_pane

0xe873,	// (0x000a3991) main_sp_fs_calendar_pane_ParamLimits

0x8d38,	// (0x0009de56) list_single_cmail_header_caption_pane_ParamLimits

0xf0bd,	// (0x000a41db) aid_recal_txt_sm_pane

0xe72a,	// (0x000a3848) mian_recal_day_pane

0xde6c,	// (0x000a2f8a) popup_sp_fs_cale_preview_window_ParamLimits

0xe0c5,	// (0x000a31e3) list_recal_day_pane

0xe108,	// (0x000a3226) list_single_recal_day_pane_ParamLimits

0xe108,	// (0x000a3226) list_single_recal_day_pane

0xe11a,	// (0x000a3238) list_single_recal_day_pane_g1_ParamLimits

0xe11a,	// (0x000a3238) list_single_recal_day_pane_g1

0xe126,	// (0x000a3244) list_single_recal_day_pane_g2_ParamLimits

0xe126,	// (0x000a3244) list_single_recal_day_pane_g2

0xe136,	// (0x000a3254) list_single_recal_day_pane_g3_ParamLimits

0xe136,	// (0x000a3254) list_single_recal_day_pane_g3

0x91d0,	// (0x0009e2ee) list_single_recal_day_pane_g4_ParamLimits

0x91d0,	// (0x0009e2ee) list_single_recal_day_pane_g4

0xe142,	// (0x000a3260) list_single_recal_day_pane_g5_ParamLimits

0xe142,	// (0x000a3260) list_single_recal_day_pane_g5

0xe152,	// (0x000a3270) list_single_recal_day_pane_g6_ParamLimits

0xe152,	// (0x000a3270) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000a4f55) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000a4f55) list_single_recal_day_pane_g

0xe166,	// (0x000a3284) list_single_recal_day_pane_t1

0xe178,	// (0x000a3296) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000a4f60) list_single_recal_day_pane_t

0x91f0,	// (0x0009e30e) ncimui_query_button_pane_ParamLimits

0x91f0,	// (0x0009e30e) ncimui_query_button_pane

0x9200,	// (0x0009e31e) ncimui_query_button_pane_t1_ParamLimits

0x9200,	// (0x0009e31e) ncimui_query_button_pane_t1

0xe18a,	// (0x000a32a8) ncimui_query_button_pane_t2_ParamLimits

0xe18a,	// (0x000a32a8) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000a4f65) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000a4f65) ncimui_query_button_pane_t

0x9213,	// (0x0009e331) query_button_pane_ParamLimits

0x9213,	// (0x0009e331) query_button_pane

0xe72a,	// (0x000a3848) bg_button_pane_cp0028

0xe19d,	// (0x000a32bb) query_button_pane_t1

0x4521,	// (0x0009963f) main_tport_pane_ParamLimits

0x8c22,	// (0x0009dd40) bg_popup_window_pane_cp01_ParamLimits

0x8c22,	// (0x0009dd40) bg_popup_window_pane_cp01

0x8c30,	// (0x0009dd4e) heading_pane_cp08_ParamLimits

0x8c30,	// (0x0009dd4e) heading_pane_cp08

0x8c3e,	// (0x0009dd5c) heading_pane_cp07_ParamLimits

0x8c3e,	// (0x0009dd5c) heading_pane_cp07

0x8cad,	// (0x0009ddcb) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000a4eb1) cell_tport_appsw_pane_g

0x3c33,	// (0x00098d51) input_candi_list_open_g1

0xa092,	// (0x0009f1b0) list_cale_time_pane_g6_ParamLimits

0xa092,	// (0x0009f1b0) list_cale_time_pane_g6

0x4f9e,	// (0x0009a0bc) aid_size_touch_calib_1_ParamLimits

0x4f9e,	// (0x0009a0bc) aid_size_touch_calib_1

0x4faa,	// (0x0009a0c8) aid_size_touch_calib_2_ParamLimits

0x4faa,	// (0x0009a0c8) aid_size_touch_calib_2

0x4fb8,	// (0x0009a0d6) aid_size_touch_calib_3_ParamLimits

0x4fb8,	// (0x0009a0d6) aid_size_touch_calib_3

0x4fc8,	// (0x0009a0e6) aid_size_touch_calib_4_ParamLimits

0x4fc8,	// (0x0009a0e6) aid_size_touch_calib_4

0x4fd6,	// (0x0009a0f4) main_touch_calib_button_group_pane_ParamLimits

0x4fd6,	// (0x0009a0f4) main_touch_calib_button_group_pane

0x4fe4,	// (0x0009a102) main_touch_calib_pane_g1_ParamLimits

0x4ff0,	// (0x0009a10e) main_touch_calib_pane_g2_ParamLimits

0x4ffc,	// (0x0009a11a) main_touch_calib_pane_g3_ParamLimits

0x5008,	// (0x0009a126) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000a486f) main_touch_calib_pane_g_ParamLimits

0x5014,	// (0x0009a132) main_touch_calib_pane_t1_ParamLimits

0x502d,	// (0x0009a14b) main_touch_calib_pane_t2_ParamLimits

0x5046,	// (0x0009a164) main_touch_calib_pane_t3_ParamLimits

0x505c,	// (0x0009a17a) main_touch_calib_pane_t4_ParamLimits

0x5072,	// (0x0009a190) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000a4878) main_touch_calib_pane_t_ParamLimits

0xc2ba,	// (0x000a13d8) list_single_fp_cale_pane_g3_ParamLimits

0xc2ba,	// (0x000a13d8) list_single_fp_cale_pane_g3

0x4505,	// (0x00099623) bg_button_pane_cp012_ParamLimits

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp03_ParamLimits

0x6f6f,	// (0x0009c08d) cell_vitu2_function_top_pane_g1_ParamLimits

0x4505,	// (0x00099623) bg_vkb2_func_pane_cp04_ParamLimits

0x7f2e,	// (0x0009d04c) main_ncimui_button_group_pane_ParamLimits

0x7f2e,	// (0x0009d04c) main_ncimui_button_group_pane

0x7f94,	// (0x0009d0b2) main_ncimui_pane_t3_ParamLimits

0x7f94,	// (0x0009d0b2) main_ncimui_pane_t3

0xdda8,	// (0x000a2ec6) phacti_button_group_pane

0xe093,	// (0x000a31b1) aid_size_list_single_double_ParamLimits

0x9149,	// (0x0009e267) popup_ezdial_listscroll_window_ParamLimits

0x916a,	// (0x0009e288) popup_number_entry_window_cp01_ParamLimits

0x9220,	// (0x0009e33e) phacti_button_pane_ParamLimits

0x9220,	// (0x0009e33e) phacti_button_pane

0xe72a,	// (0x000a3848) bg_button_pane_cp14

0xe1ab,	// (0x000a32c9) phacti_button_pane_t1

0x9231,	// (0x0009e34f) main_touch_calib_button_pane_ParamLimits

0x9231,	// (0x0009e34f) main_touch_calib_button_pane

0xeea8,	// (0x000a3fc6) bg_button_pane_cp18_ParamLimits

0xeea8,	// (0x000a3fc6) bg_button_pane_cp18

0xe1b9,	// (0x000a32d7) main_touch_calib_button_pane_t1_ParamLimits

0xe1b9,	// (0x000a32d7) main_touch_calib_button_pane_t1

0xe1cf,	// (0x000a32ed) main_touch_calib_button_pane_t2_ParamLimits

0xe1cf,	// (0x000a32ed) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000a4f6a) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000a4f6a) main_touch_calib_button_pane_t

0xe72a,	// (0x000a3848) cell_ncimui_button_pane

0xe72a,	// (0x000a3848) bg_button_pane_cp032

0xe1ed,	// (0x000a330b) cell_ncimui_button_pane_t1

0x61a5,	// (0x0009b2c3) image3_infobar_pane_ParamLimits

0x61a5,	// (0x0009b2c3) image3_infobar_pane

0x830d,	// (0x0009d42b) fs_bigclock_status_pane_ParamLimits

0x830d,	// (0x0009d42b) fs_bigclock_status_pane

0x831a,	// (0x0009d438) main_fs_bigclock_clock_pane_ParamLimits

0x831a,	// (0x0009d438) main_fs_bigclock_clock_pane

0x8334,	// (0x0009d452) main_fs_bigclock_indi_pane_ParamLimits

0x8334,	// (0x0009d452) main_fs_bigclock_indi_pane

0x835c,	// (0x0009d47a) main_fs_bigclock_swipe_pane_ParamLimits

0x835c,	// (0x0009d47a) main_fs_bigclock_swipe_pane

0xe72a,	// (0x000a3848) main_fs_clock_dumped_data

0xd812,	// (0x000a2930) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd812,	// (0x000a2930) list_single_fs_bigclock_indicator_pane_g1

0xd82d,	// (0x000a294b) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd82d,	// (0x000a294b) list_single_fs_bigclock_indicator_pane_g2

0xd847,	// (0x000a2965) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd847,	// (0x000a2965) list_single_fs_bigclock_indicator_pane_g3

0xd861,	// (0x000a297f) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd861,	// (0x000a297f) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000a4d92) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000a4d92) list_single_fs_bigclock_indicator_pane_g

0xd88c,	// (0x000a29aa) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd88c,	// (0x000a29aa) list_single_fs_bigclock_indicator_pane_t1

0xd8b4,	// (0x000a29d2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd8b4,	// (0x000a29d2) list_single_fs_bigclock_indicator_pane_t2

0xd8dc,	// (0x000a29fa) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd8dc,	// (0x000a29fa) list_single_fs_bigclock_indicator_pane_t3

0xd904,	// (0x000a2a22) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd904,	// (0x000a2a22) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000a4d9d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000a4d9d) list_single_fs_bigclock_indicator_pane_t

0xe1fb,	// (0x000a3319) image3_infobar_fav_pane_ParamLimits

0xe1fb,	// (0x000a3319) image3_infobar_fav_pane

0xe20b,	// (0x000a3329) image3_infobar_loc_pane_ParamLimits

0xe20b,	// (0x000a3329) image3_infobar_loc_pane

0xe21f,	// (0x000a333d) image3_infobar_time_pane_ParamLimits

0xe21f,	// (0x000a333d) image3_infobar_time_pane

0xbeff,	// (0x000a101d) image3_infobar_time_pane_g1

0xe22f,	// (0x000a334d) image3_infobar_time_pane_t1

0xbeff,	// (0x000a101d) image3_infobar_loc_pane_g1

0xe23d,	// (0x000a335b) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000a4f6f) image3_infobar_loc_pane_g

0xe245,	// (0x000a3363) image3_infobar_loc_pane_t1

0xbeff,	// (0x000a101d) image3_infobar_fav_pane_g1

0xe253,	// (0x000a3371) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000a4f74) image3_infobar_fav_pane_g

0xe25b,	// (0x000a3379) fs_bigclock_status_battery_pane

0xe264,	// (0x000a3382) fs_bigclock_status_signal_pane

0xe26d,	// (0x000a338b) fs_bigclock_status_title_pane

0xe276,	// (0x000a3394) fs_bigclock_status_signal_pane_g1

0xe27f,	// (0x000a339d) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000a4f79) fs_bigclock_status_signal_pane_g

0xe287,	// (0x000a33a5) fs_bigclock_status_battery_pane_g1

0xe290,	// (0x000a33ae) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000a4f7e) fs_bigclock_status_battery_pane_g

0xe298,	// (0x000a33b6) fs_bigclock_status_title_pane_t1

0xbeff,	// (0x000a101d) main_fs_bigclock_clock_pane_g1

0xe2a6,	// (0x000a33c4) main_fs_bigclock_clock_pane_g2

0xe2af,	// (0x000a33cd) main_fs_bigclock_clock_pane_g3

0xe2af,	// (0x000a33cd) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000a4f83) main_fs_bigclock_clock_pane_g

0xe2b7,	// (0x000a33d5) main_fs_bigclock_clock_pane_t1

0x9241,	// (0x0009e35f) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000a4f8c) main_fs_bigclock_clock_pane_t

0xe2c5,	// (0x000a33e3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe2c5,	// (0x000a33e3) list_single_fs_bigclock_indicator_pane

0xe2d6,	// (0x000a33f4) list_single_fs_bigclock_pane_ParamLimits

0xe2d6,	// (0x000a33f4) list_single_fs_bigclock_pane

0xe2fc,	// (0x000a341a) main_fs_bigclock_indicator_pane_t1

0xe30b,	// (0x000a3429) list_single_fs_bigclock_pane_g1

0xe313,	// (0x000a3431) list_single_fs_bigclock_pane_t1

0xbeff,	// (0x000a101d) main_fs_bigclock_swipe_pane_g1

0xe356,	// (0x000a3474) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000a4f9d) main_fs_bigclock_swipe_pane_g

0xe35e,	// (0x000a347c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe35e,	// (0x000a347c) main_fs_bigclock_swipe_pane_t1

0x34cd,	// (0x000985eb) call_type_pane_ParamLimits

0xe72a,	// (0x000a3848) main_btmg_pane

0xdf69,	// (0x000a3087) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdf69,	// (0x000a3087) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000a4f10) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000a4f10) list_single_cale_mrui_row_pane_g

0xe0ee,	// (0x000a320c) list_recal_vselct_arw_lo_pane

0xe0f6,	// (0x000a3214) list_recal_vselct_arw_up_pane

0xe0fe,	// (0x000a321c) list_recal_vselct_pane

0x9294,	// (0x0009e3b2) btmg_button_pane

0x92a0,	// (0x0009e3be) main_btmg_pane_g1

0xe72a,	// (0x000a3848) bg_button_pane_cp044

0xe37b,	// (0x000a3499) btmg_button_pane_t1

0xbace,	// (0x000a0bec) aid_listscroll_gen

0xe873,	// (0x000a3991) main_cntbar_detail_pane

0xdcd0,	// (0x000a2dee) list_cmail_folder_pane

0xbeda,	// (0x000a0ff8) sp_fs_scroll_pane_cp03_ParamLimits

0x92a8,	// (0x0009e3c6) list_single_fs_dyc_pane_cp01_ParamLimits

0x92a8,	// (0x0009e3c6) list_single_fs_dyc_pane_cp01

0xe389,	// (0x000a34a7) aid_size_cmail_indent

0xe392,	// (0x000a34b0) list_single_dyc_row_pane_cp01

0x92f3,	// (0x0009e411) cntbar_detail_list_pane_ParamLimits

0x92f3,	// (0x0009e411) cntbar_detail_list_pane

0x932d,	// (0x0009e44b) main_cntbar_detail_cont_pane_ParamLimits

0x932d,	// (0x0009e44b) main_cntbar_detail_cont_pane

0x33e6,	// (0x00098504) scroll_pane_cp032_ParamLimits

0x33e6,	// (0x00098504) scroll_pane_cp032

0x9339,	// (0x0009e457) cntbar_detail_list_event_pane_ParamLimits

0x9339,	// (0x0009e457) cntbar_detail_list_event_pane

0x92ff,	// (0x0009e41d) cntbar_detail_list_shct_pane

0x9f1d,	// (0x0009f03b) aid_list_gen

0xe39b,	// (0x000a34b9) aid_scroll

0xe3a4,	// (0x000a34c2) aid_size_touch_scroll_bar

0xf0a8,	// (0x000a41c6) aid_list_double

0x934d,	// (0x0009e46b) aid_list_single

0x76a8,	// (0x0009c7c6) aid_list_single_lg

0x9356,	// (0x0009e474) aid_list_z_g_a_sm

0x935e,	// (0x0009e47c) aid_list_z_g_d

0x9366,	// (0x0009e484) aid_txt_z_prm

0x9374,	// (0x0009e492) aid_txt_z_prm_cp01

0x9382,	// (0x0009e4a0) aid_txt_z_sec

0x9390,	// (0x0009e4ae) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9390,	// (0x0009e4ae) main_cntbar_detail_cont_pane_g1

0x939d,	// (0x0009e4bb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x939d,	// (0x0009e4bb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000a4fa2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000a4fa2) main_cntbar_detail_cont_pane_g

0xe3ad,	// (0x000a34cb) main_cntbar_detail_cont_pane_t1

0xe3bb,	// (0x000a34d9) main_cntbar_detail_cont_pane_t2

0xe3c9,	// (0x000a34e7) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000a4fa7) main_cntbar_detail_cont_pane_t

0x93a9,	// (0x0009e4c7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x93a9,	// (0x0009e4c7) cell_cntbar_detail_list_shct_pane

0xe3d7,	// (0x000a34f5) cntbar_detail_list_shct_pane_g1

0xe3e0,	// (0x000a34fe) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000a4fae) cntbar_detail_list_shct_pane_g

0x93bd,	// (0x0009e4db) cntbar_detail_list_event_pane_g1_ParamLimits

0x93bd,	// (0x0009e4db) cntbar_detail_list_event_pane_g1

0x93c9,	// (0x0009e4e7) cntbar_detail_list_event_pane_g2_ParamLimits

0x93c9,	// (0x0009e4e7) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000a4fb3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000a4fb3) cntbar_detail_list_event_pane_g

0x9435,	// (0x0009e553) cntbar_detail_list_event_pane_t1_ParamLimits

0x9435,	// (0x0009e553) cntbar_detail_list_event_pane_t1

0x944a,	// (0x0009e568) cntbar_detail_list_event_pane_t2_ParamLimits

0x944a,	// (0x0009e568) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000a4fc0) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000a4fc0) cntbar_detail_list_event_pane_t

0xbeff,	// (0x000a101d) cell_cntbar_detail_list_shct_pane_g1

0xa696,	// (0x0009f7b4) navi_pane_mv_g3

0xe873,	// (0x000a3991) main_cntbar_detail_pane_ParamLimits

0xe72a,	// (0x000a3848) main_notif_wgt_pane

0x5e59,	// (0x0009af77) aid_tch_main_mp4_pane_g4

0x608e,	// (0x0009b1ac) popup_slider_window_cp02

0xe0e4,	// (0x000a3202) list_recal_day_event_pane

0x92d3,	// (0x0009e3f1) cntbar_detail_btn_pane_ParamLimits

0x92d3,	// (0x0009e3f1) cntbar_detail_btn_pane

0x92e3,	// (0x0009e401) cntbar_detail_btn_pane_cp01_ParamLimits

0x92e3,	// (0x0009e401) cntbar_detail_btn_pane_cp01

0x92ff,	// (0x0009e41d) cntbar_detail_list_shct_pane_ParamLimits

0x930b,	// (0x0009e429) cntbar_detail_pane_g1_ParamLimits

0x930b,	// (0x0009e429) cntbar_detail_pane_g1

0x9317,	// (0x0009e435) cntbar_detail_pane_t1_ParamLimits

0x9317,	// (0x0009e435) cntbar_detail_pane_t1

0x93d5,	// (0x0009e4f3) cntbar_detail_list_event_pane_g3_ParamLimits

0x93d5,	// (0x0009e4f3) cntbar_detail_list_event_pane_g3

0x93ed,	// (0x0009e50b) cntbar_detail_list_event_pane_g4_ParamLimits

0x93ed,	// (0x0009e50b) cntbar_detail_list_event_pane_g4

0x9405,	// (0x0009e523) cntbar_detail_list_event_pane_g5_ParamLimits

0x9405,	// (0x0009e523) cntbar_detail_list_event_pane_g5

0x941d,	// (0x0009e53b) cntbar_detail_list_event_pane_g6_ParamLimits

0x941d,	// (0x0009e53b) cntbar_detail_list_event_pane_g6

0x945f,	// (0x0009e57d) cntbar_detail_list_event_pane_t3_ParamLimits

0x945f,	// (0x0009e57d) cntbar_detail_list_event_pane_t3

0x9471,	// (0x0009e58f) popup_notif_wgt_window_ParamLimits

0x9471,	// (0x0009e58f) popup_notif_wgt_window

0x9481,	// (0x0009e59f) popup_submenu_window_cp01_ParamLimits

0x9481,	// (0x0009e59f) popup_submenu_window_cp01

0xa6de,	// (0x0009f7fc) bg_popup_window_pane_cp10

0xe3e9,	// (0x000a3507) listscroll_notif_wgt_pane

0xe3fb,	// (0x000a3519) list_notif_wgt_window

0xe404,	// (0x000a3522) scroll_pane_cp033

0x9493,	// (0x0009e5b1) list_notif_wgt_row_pane_ParamLimits

0x9493,	// (0x0009e5b1) list_notif_wgt_row_pane

0xe40d,	// (0x000a352b) aid_size_list_notif_wgt_del

0xe41a,	// (0x000a3538) list_notif_wgt_row_pane_g1

0xe426,	// (0x000a3544) list_notif_wgt_row_pane_g2

0xe43a,	// (0x000a3558) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000a4fc7) list_notif_wgt_row_pane_g

0xe447,	// (0x000a3565) list_notif_wgt_row_pane_t1

0xe45d,	// (0x000a357b) list_notif_wgt_row_pane_t2

0xe46f,	// (0x000a358d) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000a4fce) list_notif_wgt_row_pane_t

0xcc49,	// (0x000a1d67) list_recal_day_event_pane_g1

0xe481,	// (0x000a359f) list_recal_day_event_pane_t1

0xe72a,	// (0x000a3848) bg_button_pane_cp045

0x94a5,	// (0x0009e5c3) cntbar_detail_btn_pane_t1

0xbae2,	// (0x000a0c00) main_callh_pane_ParamLimits

0xbae2,	// (0x000a0c00) main_callh_pane

0xe72a,	// (0x000a3848) main_coverflow0_pane

0xe72a,	// (0x000a3848) main_wgtman_pane

0x8374,	// (0x0009d492) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8374,	// (0x0009d492) main_fs_bigclock_unlock_btn_pane

0x8ca5,	// (0x0009ddc3) bg_button_pane_cp16

0x8cb5,	// (0x0009ddd3) cell_tport_appsw_pane_g3

0x94b3,	// (0x0009e5d1) cf0_flow_pane_ParamLimits

0x94b3,	// (0x0009e5d1) cf0_flow_pane

0xe490,	// (0x000a35ae) listscroll_cf0_pane

0xe49b,	// (0x000a35b9) main_cf0_pane_g1

0x94c2,	// (0x0009e5e0) main_cf0_pane_t1_ParamLimits

0x94c2,	// (0x0009e5e0) main_cf0_pane_t1

0x94d6,	// (0x0009e5f4) main_cf0_pane_t2_ParamLimits

0x94d6,	// (0x0009e5f4) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000a4fda) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000a4fda) main_cf0_pane_t

0xe4ad,	// (0x000a35cb) scroll_pane_cp11

0x94ea,	// (0x0009e608) cf0_flow_pane_g1

0x94f2,	// (0x0009e610) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000a4fdf) cf0_flow_pane_g

0x94fa,	// (0x0009e618) cf0_flow_pane_t1

0xe72a,	// (0x000a3848) main_call6_pane

0xe72a,	// (0x000a3848) main_calllock_pane

0x9508,	// (0x0009e626) call6_btn_grp_pane_ParamLimits

0x9508,	// (0x0009e626) call6_btn_grp_pane

0x9517,	// (0x0009e635) call6_pane_g1_ParamLimits

0x9517,	// (0x0009e635) call6_pane_g1

0x9526,	// (0x0009e644) popup_call6_1st_window_ParamLimits

0x9526,	// (0x0009e644) popup_call6_1st_window

0x9534,	// (0x0009e652) popup_call6_2nd_window_ParamLimits

0x9534,	// (0x0009e652) popup_call6_2nd_window

0x9542,	// (0x0009e660) cell_call6_btn_pane_ParamLimits

0x9542,	// (0x0009e660) cell_call6_btn_pane

0xa6de,	// (0x0009f7fc) bg_popup_call2_in_pane_cp03

0xe4b8,	// (0x000a35d6) popup_call6_1st_window_g1

0xe4c0,	// (0x000a35de) popup_call6_1st_window_g2

0xe4c8,	// (0x000a35e6) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000a4fe4) popup_call6_1st_window_g

0xe4d0,	// (0x000a35ee) popup_call6_1st_window_t1

0xe4df,	// (0x000a35fd) popup_call6_1st_window_t2

0xe4ef,	// (0x000a360d) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000a4feb) popup_call6_1st_window_t

0xa6de,	// (0x0009f7fc) bg_popup_call2_in_pane_cp04

0xe4b8,	// (0x000a35d6) popup_call6_2nd_window_g1

0xe4c0,	// (0x000a35de) popup_call6_2nd_window_g2

0xe4c8,	// (0x000a35e6) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000a4fe4) popup_call6_2nd_window_g

0xe4d0,	// (0x000a35ee) popup_call6_2nd_window_t1

0xe72a,	// (0x000a3848) bg_button_pane_cp15

0xe4ff,	// (0x000a361d) cell_call6_btn_pane_g1

0xe508,	// (0x000a3626) cell_call6_btn_pane_t1

0x9551,	// (0x0009e66f) listscroll_wgtman_pane_ParamLimits

0x9551,	// (0x0009e66f) listscroll_wgtman_pane

0x956d,	// (0x0009e68b) wgtman_btn_pane_ParamLimits

0x956d,	// (0x0009e68b) wgtman_btn_pane

0xa49d,	// (0x0009f5bb) aid_scroll_copy1

0xe517,	// (0x000a3635) list_wgtman_pane

0x95a2,	// (0x0009e6c0) wgtman_btn_pane_g1_ParamLimits

0x95a2,	// (0x0009e6c0) wgtman_btn_pane_g1

0x95ca,	// (0x0009e6e8) wgtman_btn_pane_t1_ParamLimits

0x95ca,	// (0x0009e6e8) wgtman_btn_pane_t1

0xe521,	// (0x000a363f) wgtman_btn_pane_t2_ParamLimits

0xe521,	// (0x000a363f) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000a4ff2) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000a4ff2) wgtman_btn_pane_t

0x9601,	// (0x0009e71f) listrow_wgtman_pane_ParamLimits

0x9601,	// (0x0009e71f) listrow_wgtman_pane

0x961c,	// (0x0009e73a) listrow_wgtman_pane_g1

0x9629,	// (0x0009e747) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000a4ff7) listrow_wgtman_pane_g

0x9647,	// (0x0009e765) listrow_wgtman_pane_t1

0x965f,	// (0x0009e77d) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000a4ffc) listrow_wgtman_pane_t

0x9685,	// (0x0009e7a3) wait_bar_pane_cp09

0xe538,	// (0x000a3656) main_calllock_btn_pane

0xe542,	// (0x000a3660) main_calllock_pane_g1

0xe72a,	// (0x000a3848) bg_button_pane_cp17

0xe54e,	// (0x000a366c) main_calllock_btn_pane_g1

0xe557,	// (0x000a3675) main_calllock_btn_pane_t1

0xe72a,	// (0x000a3848) main_dialer3_pane

0xe72a,	// (0x000a3848) main_fmrd2_pane

0xbeff,	// (0x000a101d) main_fs_bigclock_unlock_btn_pane_g1

0xe56e,	// (0x000a368c) main_fs_bigclock_unlock_btn_pane_t1

0x9697,	// (0x0009e7b5) area_fmrd2_info_pane_ParamLimits

0x9697,	// (0x0009e7b5) area_fmrd2_info_pane

0x96a5,	// (0x0009e7c3) area_fmrd2_visual_pane_ParamLimits

0x96a5,	// (0x0009e7c3) area_fmrd2_visual_pane

0x96b3,	// (0x0009e7d1) fmrd2_indi_pane_ParamLimits

0x96b3,	// (0x0009e7d1) fmrd2_indi_pane

0x96c0,	// (0x0009e7de) area_fmrd2_visual_pane_g1

0x96c8,	// (0x0009e7e6) area_fmrd2_visual_pane_t1

0x96d8,	// (0x0009e7f6) area_fmrd2_visual_pane_t2

0x96e8,	// (0x0009e806) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000a5006) area_fmrd2_visual_pane_t

0x96f8,	// (0x0009e816) area_fmrd2_info_pane_g1

0x9700,	// (0x0009e81e) area_fmrd2_info_pane_t1

0x9710,	// (0x0009e82e) area_fmrd2_info_pane_t2

0x9720,	// (0x0009e83e) area_fmrd2_info_pane_t3

0x9730,	// (0x0009e84e) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000a500d) area_fmrd2_info_pane_t

0x973e,	// (0x0009e85c) fmrd2_indi_pane_t1

0x974e,	// (0x0009e86c) fmrd2_indi_pane_t2

0x975e,	// (0x0009e87c) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000a5016) fmrd2_indi_pane_t

0xd870,	// (0x000a298e) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd870,	// (0x000a298e) list_single_fs_bigclock_indicator_pane_g5

0xd920,	// (0x000a2a3e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd920,	// (0x000a2a3e) list_single_fs_bigclock_indicator_pane_t5

0x8e9d,	// (0x0009dfbb) aid_cell_bcale_month_pane_ParamLimits

0x8e9d,	// (0x0009dfbb) aid_cell_bcale_month_pane

0x8ebb,	// (0x0009dfd9) bcale_month_pane_ParamLimits

0x8ebb,	// (0x0009dfd9) bcale_month_pane

0x8ed9,	// (0x0009dff7) bcale_preview_pane_ParamLimits

0x8ed9,	// (0x0009dff7) bcale_preview_pane

0xe313,	// (0x000a3431) list_single_fs_bigclock_pane_t1_ParamLimits

0xe332,	// (0x000a3450) list_single_fs_bigclock_pane_t2_ParamLimits

0xe332,	// (0x000a3450) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000a4f98) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000a4f98) list_single_fs_bigclock_pane_t

0xe566,	// (0x000a3684) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000a5001) main_fs_bigclock_unlock_btn_pane_g

0x976c,	// (0x0009e88a) aid_dia3_key_size_ParamLimits

0x976c,	// (0x0009e88a) aid_dia3_key_size

0x9778,	// (0x0009e896) aid_dia3_listrow_size_ParamLimits

0x9778,	// (0x0009e896) aid_dia3_listrow_size

0x9788,	// (0x0009e8a6) dia3_keypad_fun_pane_ParamLimits

0x9788,	// (0x0009e8a6) dia3_keypad_fun_pane

0x979a,	// (0x0009e8b8) dia3_keypad_num_pane_ParamLimits

0x979a,	// (0x0009e8b8) dia3_keypad_num_pane

0x97ac,	// (0x0009e8ca) dia3_listscroll_pane_ParamLimits

0x97ac,	// (0x0009e8ca) dia3_listscroll_pane

0x97ba,	// (0x0009e8d8) dia3_numentry_pane_ParamLimits

0x97ba,	// (0x0009e8d8) dia3_numentry_pane

0xe57c,	// (0x000a369a) dia3_list_pane

0xe587,	// (0x000a36a5) scroll_pane_cp12

0xe72a,	// (0x000a3848) bg_dia3_numentry_pane

0x97c8,	// (0x0009e8e6) dia3_numentry_pane_t1

0x97d7,	// (0x0009e8f5) cell_dia3_key_num_pane

0x97df,	// (0x0009e8fd) cell_dia3_key0_fun_pane_ParamLimits

0x97df,	// (0x0009e8fd) cell_dia3_key0_fun_pane

0x97ec,	// (0x0009e90a) cell_dia3_key1_fun_pane_ParamLimits

0x97ec,	// (0x0009e90a) cell_dia3_key1_fun_pane

0x97f9,	// (0x0009e917) dia3_listrow_pane

0xd57f,	// (0x000a269d) bg_dia3_numentry_pane_g1

0xe72a,	// (0x000a3848) bg_button_pane_cp21

0xe592,	// (0x000a36b0) cell_dia3_key_num_pane_t1

0xe5ae,	// (0x000a36cc) cell_dia3_key_num_pane_t2

0xe5bd,	// (0x000a36db) cell_dia3_key_num_pane_t3

0xe5cc,	// (0x000a36ea) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000a501d) cell_dia3_key_num_pane_t

0xe72a,	// (0x000a3848) bg_button_pane_cp19

0x9806,	// (0x0009e924) cell_dia3_key0_fun_pane_g1

0xe72a,	// (0x000a3848) bg_button_pane_cp20

0x980e,	// (0x0009e92c) cell_dia3_key1_fun_pane_g1

0x9816,	// (0x0009e934) area_left_week_number_pane

0x9829,	// (0x0009e947) area_top_day_name_pane

0x9837,	// (0x0009e955) frame_month_view_pane

0xe5db,	// (0x000a36f9) grid_month_view_pane

0x984c,	// (0x0009e96a) cell_top_day_name_pane_ParamLimits

0x984c,	// (0x0009e96a) cell_top_day_name_pane

0x9866,	// (0x0009e984) cell_area_left_week_number_pane_ParamLimits

0x9866,	// (0x0009e984) cell_area_left_week_number_pane

0x9889,	// (0x0009e9a7) cell_month_view_pane_ParamLimits

0x9889,	// (0x0009e9a7) cell_month_view_pane

0xe5e9,	// (0x000a3707) frm_month_g1

0x98b5,	// (0x0009e9d3) frm_month_g2

0x98c6,	// (0x0009e9e4) frm_month_g3

0x98d7,	// (0x0009e9f5) frm_month_g4

0x98e8,	// (0x0009ea06) frm_month_g5

0x98fb,	// (0x0009ea19) frm_month_g6

0x990e,	// (0x0009ea2c) frm_month_g7

0xe5f6,	// (0x000a3714) frm_month_g8

0x9921,	// (0x0009ea3f) frm_month_g9

0x992e,	// (0x0009ea4c) frm_month_g10

0x993b,	// (0x0009ea59) frm_month_g11

0x9948,	// (0x0009ea66) frm_month_g12

0x9955,	// (0x0009ea73) frm_month_g13

0x9962,	// (0x0009ea80) frm_month_g14

0x9971,	// (0x0009ea8f) frm_month_g15

0x9980,	// (0x0009ea9e) frm_month_g16

0x000f,

0xff08,	// (0x000a5026) frm_month_g

0xe603,	// (0x000a3721) cell_top_day_name_pane_t1

0x998f,	// (0x0009eaad) cell_area_left_week_number_pane_g1

0x999e,	// (0x0009eabc) cell_area_left_week_number_pane_t1

0xc162,	// (0x000a1280) cell_month_view_pane_g1

0x99b4,	// (0x0009ead2) cell_month_view_pane_t1

0xe72a,	// (0x000a3848) main_fps_pane

0xdaf5,	// (0x000a2c13) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdaf5,	// (0x000a2c13) cmail_ddmenu_btn02_pane_cp1

0xdb11,	// (0x000a2c2f) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdb11,	// (0x000a2c2f) cmail_ddmenu_btn02_pane_cp2

0x91a0,	// (0x0009e2be) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x91a0,	// (0x0009e2be) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000a4f4b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000a4f4b) cmail_ddmenu_btn02_pane_g

0x91be,	// (0x0009e2dc) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x91be,	// (0x0009e2dc) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000a4f50) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000a4f50) cmail_ddmenu_btn02_pane_t

0x99ca,	// (0x0009eae8) fps_text_pane_ParamLimits

0x99ca,	// (0x0009eae8) fps_text_pane

0x99d7,	// (0x0009eaf5) main_fps_pane_g1_ParamLimits

0x99d7,	// (0x0009eaf5) main_fps_pane_g1

0x99e5,	// (0x0009eb03) wait_bar_pane_cp010_ParamLimits

0x99e5,	// (0x0009eb03) wait_bar_pane_cp010

0x99f1,	// (0x0009eb0f) fps_text_pane_t1_ParamLimits

0x99f1,	// (0x0009eb0f) fps_text_pane_t1

0x647e,	// (0x0009b59c) cam4_image_uncrop_pane_g1

0x6487,	// (0x0009b5a5) cam4_image_uncrop_pane_g2

0x6490,	// (0x0009b5ae) cam4_image_uncrop_pane_g3

0x6499,	// (0x0009b5b7) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000a4a0c) cam4_image_uncrop_pane_g

0x97f9,	// (0x0009e917) dia3_listrow_pane_ParamLimits

0xe72a,	// (0x000a3848) main_phob2_pane

0x8c87,	// (0x0009dda5) cell_tport_appsw_pane_cp02_ParamLimits

0x8c87,	// (0x0009dda5) cell_tport_appsw_pane_cp02

0x8c96,	// (0x0009ddb4) cell_tport_appsw_pane_cp03_ParamLimits

0x8c96,	// (0x0009ddb4) cell_tport_appsw_pane_cp03

0xe72a,	// (0x000a3848) phob2_contact_card_pane

0xe72a,	// (0x000a3848) phob2_listscroll_pane

0xe616,	// (0x000a3734) phob2_list_pane

0xe61e,	// (0x000a373c) scroll_pane_cp034

0x9a0a,	// (0x0009eb28) phob2_cc_data_pane_ParamLimits

0x9a0a,	// (0x0009eb28) phob2_cc_data_pane

0x9a24,	// (0x0009eb42) phob2_cc_listscroll_pane_ParamLimits

0x9a24,	// (0x0009eb42) phob2_cc_listscroll_pane

0x9a3e,	// (0x0009eb5c) list_double_large_graphic_phob2_pane_ParamLimits

0x9a3e,	// (0x0009eb5c) list_double_large_graphic_phob2_pane

0x9a5c,	// (0x0009eb7a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9a5c,	// (0x0009eb7a) list_double_large_graphic_phob2_pane_g1

0x9a72,	// (0x0009eb90) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9a72,	// (0x0009eb90) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000a5047) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000a5047) list_double_large_graphic_phob2_pane_g

0x9a7e,	// (0x0009eb9c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9a7e,	// (0x0009eb9c) list_double_large_graphic_phob2_pane_t1

0x9a93,	// (0x0009ebb1) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9a93,	// (0x0009ebb1) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000a504c) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000a504c) list_double_large_graphic_phob2_pane_t

0xe72a,	// (0x000a3848) list_highlight_pane_cp024

0x9aa5,	// (0x0009ebc3) phob2_cc_button_pane

0x9aad,	// (0x0009ebcb) phob2_cc_data_pane_g1_ParamLimits

0x9aad,	// (0x0009ebcb) phob2_cc_data_pane_g1

0x9ab9,	// (0x0009ebd7) phob2_cc_data_pane_g2_ParamLimits

0x9ab9,	// (0x0009ebd7) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000a5051) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000a5051) phob2_cc_data_pane_g

0x9ac5,	// (0x0009ebe3) phob2_cc_data_pane_t1_ParamLimits

0x9ac5,	// (0x0009ebe3) phob2_cc_data_pane_t1

0x9ad7,	// (0x0009ebf5) phob2_cc_data_pane_t2_ParamLimits

0x9ad7,	// (0x0009ebf5) phob2_cc_data_pane_t2

0x9ae9,	// (0x0009ec07) phob2_cc_data_pane_t3_ParamLimits

0x9ae9,	// (0x0009ec07) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000a5056) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000a5056) phob2_cc_data_pane_t

0xe626,	// (0x000a3744) phob2_cc_list_pane_ParamLimits

0xe626,	// (0x000a3744) phob2_cc_list_pane

0xce47,	// (0x000a1f65) scroll_pane_cp035_ParamLimits

0xce47,	// (0x000a1f65) scroll_pane_cp035

0xe873,	// (0x000a3991) bg_button_pane_cp033

0xe632,	// (0x000a3750) phob2_cc_button_pane_g1

0xe63e,	// (0x000a375c) phob2_cc_button_pane_t1

0xe653,	// (0x000a3771) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000a505d) phob2_cc_button_pane_t

0x9afb,	// (0x0009ec19) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9afb,	// (0x0009ec19) list_double_large_graphic_phob2_cc_pane

0x9b22,	// (0x0009ec40) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9b22,	// (0x0009ec40) list_double_large_graphic_phob2_cc_pane_g1

0x9b33,	// (0x0009ec51) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9b33,	// (0x0009ec51) list_double_large_graphic_phob2_cc_pane_g2

0x9b3f,	// (0x0009ec5d) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9b3f,	// (0x0009ec5d) list_double_large_graphic_phob2_cc_pane_g3

0x9b4b,	// (0x0009ec69) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9b4b,	// (0x0009ec69) list_double_large_graphic_phob2_cc_pane_g4

0x9b57,	// (0x0009ec75) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9b57,	// (0x0009ec75) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000a5062) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000a5062) list_double_large_graphic_phob2_cc_pane_g

0x9b63,	// (0x0009ec81) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9b63,	// (0x0009ec81) list_double_large_graphic_phob2_cc_pane_t1

0x9b8c,	// (0x0009ecaa) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9b8c,	// (0x0009ecaa) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000a506d) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000a506d) list_double_large_graphic_phob2_cc_pane_t

0xe665,	// (0x000a3783) list_highlight_pane_cp025_ParamLimits

0xe665,	// (0x000a3783) list_highlight_pane_cp025

0xe873,	// (0x000a3991) bg_button_pane_cp033_ParamLimits

0xe632,	// (0x000a3750) phob2_cc_button_pane_g1_ParamLimits

0xe63e,	// (0x000a375c) phob2_cc_button_pane_t1_ParamLimits

0xe653,	// (0x000a3771) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000a505d) phob2_cc_button_pane_t_ParamLimits

0x119f,	// (0x000962bd) popup_wgtman_window

0xcb01,	// (0x000a1c1f) scroll_pane_cp038

0x958a,	// (0x0009e6a8) wgtman_btn_pane_cp_01_ParamLimits

0x958a,	// (0x0009e6a8) wgtman_btn_pane_cp_01

0xe673,	// (0x000a3791) wgtman_content_pane

0xe67c,	// (0x000a379a) wgtman_heading_pane

0xe72a,	// (0x000a3848) bg_heading_pane_cp02

0xe685,	// (0x000a37a3) wgtman_heading_pane_g1

0xe68d,	// (0x000a37ab) wgtman_heading_pane_t1

0xe69b,	// (0x000a37b9) scroll_pane_cp036

0xe6a3,	// (0x000a37c1) wgtman_list_pane

0xe6ab,	// (0x000a37c9) wgtman_list_pane_t1_ParamLimits

0xe6ab,	// (0x000a37c9) wgtman_list_pane_t1

0x63dd,	// (0x0009b4fb) cam4_grid_pane

0x7168,	// (0x0009c286) bg_button_pane_cp015_ParamLimits

0x717a,	// (0x0009c298) bg_button_pane_cp016_ParamLimits

0x718d,	// (0x0009c2ab) bg_button_pane_cp017_ParamLimits

0x71e3,	// (0x0009c301) popup_vitu2_query_window_g3_ParamLimits

0x71e3,	// (0x0009c301) popup_vitu2_query_window_g3

0x729e,	// (0x0009c3bc) popup_vitu2_query_window_t6_ParamLimits

0x729e,	// (0x0009c3bc) popup_vitu2_query_window_t6

0x72c9,	// (0x0009c3e7) popup_vitu2_query_window_t7_ParamLimits

0x72c9,	// (0x0009c3e7) popup_vitu2_query_window_t7

0xc980,	// (0x000a1a9e) cam4_grid_pane_g1

0xc989,	// (0x000a1aa7) cam4_grid_pane_g2

0xe6c5,	// (0x000a37e3) cam4_grid_pane_g3

0xe6ce,	// (0x000a37ec) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000a5072) cam4_grid_pane_g

0x2140,	// (0x0009725e) aid_placing_vt_slider_lsc_ParamLimits

0x248c,	// (0x000975aa) vidtel_button_pane_ParamLimits

0x248c,	// (0x000975aa) vidtel_button_pane

0xe6d9,	// (0x000a37f7) bg_button_pane_cp034

0x9bb5,	// (0x0009ecd3) vidtel_button_pane_g1

0xe6e3,	// (0x000a3801) vidtel_button_pane_t1

0xcc27,	// (0x000a1d45) aid_size_vtel_slider_touch

0xce47,	// (0x000a1f65) scroll_pane_cp039

0xd5bd,	// (0x000a26db) ncim_query_button_pane_cp01_ParamLimits

0xd5dc,	// (0x000a26fa) ncimui_query_pane_g1_ParamLimits

0xe873,	// (0x000a3991) input_focus_pane_cp012_ParamLimits

0xd601,	// (0x000a271f) ncim_query_entry_pane_t1_ParamLimits

0xce47,	// (0x000a1f65) scroll_pane_cp039_ParamLimits

0xa581,	// (0x0009f69f) navi_pane_bcale_mc_g1

0xa589,	// (0x0009f6a7) navi_pane_bcale_mc_t1

0xdb5a,	// (0x000a2c78) main_sp_fs_email_pane_g1

0xdb66,	// (0x000a2c84) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000a4e03) main_sp_fs_email_pane_g

0xdf75,	// (0x000a3093) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdf75,	// (0x000a3093) list_single_cale_mrui_row_pane_g3

0x91e6,	// (0x0009e304) list_single_recal_day_pane_g5_event_pane

0xe15e,	// (0x000a327c) list_single_recal_day_pane_g7

0xe6f1,	// (0x000a380f) list_recal_day_event_pane_cp01

0xe6fa,	// (0x000a3818) list_recal_vselct_arw_lo_pane_cp01

0xe702,	// (0x000a3820) list_recal_vselct_arw_up_pane_cp01

0xe70a,	// (0x000a3828) list_recal_vselct_pane_cp01

0xcc49,	// (0x000a1d67) list_recal_day_event_pane_cp01_g1

0xe714,	// (0x000a3832) list_recal_day_event_pane_cp01_t1

0xe166,	// (0x000a3284) list_single_recal_day_pane_t1_ParamLimits

0xe178,	// (0x000a3296) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000a4f60) list_single_recal_day_pane_t_ParamLimits

0xede3,	// (0x000a3f01) bg_notes_pane_ParamLimits

0xee86,	// (0x000a3fa4) list_notes_pane_ParamLimits

0x1507,	// (0x00096625) scroll_pane_cp06_ParamLimits

0xeea8,	// (0x000a3fc6) main_notes_pane_ParamLimits

0xe72a,	// (0x000a3848) main_welc_pane

0x9bbd,	// (0x0009ecdb) main_welc_body_pane_ParamLimits

0x9bbd,	// (0x0009ecdb) main_welc_body_pane

0x9bd7,	// (0x0009ecf5) main_welc_opti_pane_ParamLimits

0x9bd7,	// (0x0009ecf5) main_welc_opti_pane

0x9c0a,	// (0x0009ed28) main_welc_pane_t1_ParamLimits

0x9c0a,	// (0x0009ed28) main_welc_pane_t1

0x9c24,	// (0x0009ed42) main_welc_body_row_pane_ParamLimits

0x9c24,	// (0x0009ed42) main_welc_body_row_pane

0xe5a0,	// (0x000a36be) main_welc_opti_row_pane_ParamLimits

0xe5a0,	// (0x000a36be) main_welc_opti_row_pane

0xe722,	// (0x000a3840) main_welc_opti_row_pane_g1

0x9c49,	// (0x0009ed67) main_welc_opti_row_pane_t1

0xe881,	// (0x000a399f) main_welc_body_row_pane_t1

0xe3f3,	// (0x000a3511) popup_notif_wgt_heading_pane

0xe40d,	// (0x000a352b) aid_size_list_notif_wgt_del_ParamLimits

0xe41a,	// (0x000a3538) list_notif_wgt_row_pane_g1_ParamLimits

0xe426,	// (0x000a3544) list_notif_wgt_row_pane_g2_ParamLimits

0xe43a,	// (0x000a3558) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000a4fc7) list_notif_wgt_row_pane_g_ParamLimits

0xe447,	// (0x000a3565) list_notif_wgt_row_pane_t1_ParamLimits

0xe45d,	// (0x000a357b) list_notif_wgt_row_pane_t2_ParamLimits

0xe46f,	// (0x000a358d) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000a4fce) list_notif_wgt_row_pane_t_ParamLimits

0x961c,	// (0x0009e73a) listrow_wgtman_pane_g1_ParamLimits

0x9629,	// (0x0009e747) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000a4ff7) listrow_wgtman_pane_g_ParamLimits

0x9647,	// (0x0009e765) listrow_wgtman_pane_t1_ParamLimits

0x965f,	// (0x0009e77d) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000a4ffc) listrow_wgtman_pane_t_ParamLimits

0x9685,	// (0x0009e7a3) wait_bar_pane_cp09_ParamLimits

0xe72a,	// (0x000a3848) bg_popup_heading_pane_cp02

0xe890,	// (0x000a39ae) popup_notif_wgt_heading_pane_g1

0xe898,	// (0x000a39b6) popup_notif_wgt_heading_pane_t1

0xe72a,	// (0x000a3848) main_vids_pane

0xe72a,	// (0x000a3848) vids_listscroll_pane

0x9c58,	// (0x0009ed76) scroll_pane_cp040

0xe72a,	// (0x000a3848) vids_list_pane

0x9c63,	// (0x0009ed81) vids_list_double_pane_ParamLimits

0x9c63,	// (0x0009ed81) vids_list_double_pane

0x9c7d,	// (0x0009ed9b) vids_list_double_pane_g1

0x9c86,	// (0x0009eda4) vids_list_double_pane_t1

0x9c96,	// (0x0009edb4) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000a5080) vids_list_double_pane_t

0x4505,	// (0x00099623) main_ncimui_pane_ParamLimits

0x7f46,	// (0x0009d064) main_ncimui_pane_g1_ParamLimits

0x7f52,	// (0x0009d070) main_ncimui_pane_g2_ParamLimits

0x7f52,	// (0x0009d070) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000a4d08) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000a4d08) main_ncimui_pane_g

0x9bf0,	// (0x0009ed0e) main_welc_pane_g1_ParamLimits

0x9bf0,	// (0x0009ed0e) main_welc_pane_g1

0x9bfc,	// (0x0009ed1a) main_welc_pane_g2_ParamLimits

0x9bfc,	// (0x0009ed1a) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000a507b) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000a507b) main_welc_pane_g

0xede3,	// (0x000a3f01) listscroll_mce_pane_ParamLimits

0xa6d6,	// (0x0009f7f4) wait_bar_pane_cp10

0xbad6,	// (0x000a0bf4) main_cale_day_pane_ParamLimits

0xbad6,	// (0x000a0bf4) main_cale_week_pane_ParamLimits

0xede3,	// (0x000a3f01) main_messa_pane_ParamLimits

0x582f,	// (0x0009a94d) main_clock2_btn_pane_ParamLimits

0x582f,	// (0x0009a94d) main_clock2_btn_pane

0xc342,	// (0x000a1460) main_clock2_btn_pane_cp01_ParamLimits

0xc342,	// (0x000a1460) main_clock2_btn_pane_cp01

0xdf01,	// (0x000a301f) list_cale_mrui_pane_ParamLimits

0xe4a5,	// (0x000a35c3) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000a4fd5) main_cf0_pane_g

0x9816,	// (0x0009e934) area_left_week_number_pane_ParamLimits

0x9829,	// (0x0009e947) area_top_day_name_pane_ParamLimits

0x9837,	// (0x0009e955) frame_month_view_pane_ParamLimits

0xe5db,	// (0x000a36f9) grid_month_view_pane_ParamLimits

0xe5e9,	// (0x000a3707) frm_month_g1_ParamLimits

0x98b5,	// (0x0009e9d3) frm_month_g2_ParamLimits

0x98c6,	// (0x0009e9e4) frm_month_g3_ParamLimits

0x98d7,	// (0x0009e9f5) frm_month_g4_ParamLimits

0x98e8,	// (0x0009ea06) frm_month_g5_ParamLimits

0x98fb,	// (0x0009ea19) frm_month_g6_ParamLimits

0x990e,	// (0x0009ea2c) frm_month_g7_ParamLimits

0xe5f6,	// (0x000a3714) frm_month_g8_ParamLimits

0x9921,	// (0x0009ea3f) frm_month_g9_ParamLimits

0x992e,	// (0x0009ea4c) frm_month_g10_ParamLimits

0x993b,	// (0x0009ea59) frm_month_g11_ParamLimits

0x9948,	// (0x0009ea66) frm_month_g12_ParamLimits

0x9955,	// (0x0009ea73) frm_month_g13_ParamLimits

0x9962,	// (0x0009ea80) frm_month_g14_ParamLimits

0x9971,	// (0x0009ea8f) frm_month_g15_ParamLimits

0x9980,	// (0x0009ea9e) frm_month_g16_ParamLimits

0xff08,	// (0x000a5026) frm_month_g_ParamLimits

0xe603,	// (0x000a3721) cell_top_day_name_pane_t1_ParamLimits

0x998f,	// (0x0009eaad) cell_area_left_week_number_pane_g1_ParamLimits

0x999e,	// (0x0009eabc) cell_area_left_week_number_pane_t1_ParamLimits

0xc162,	// (0x000a1280) cell_month_view_pane_g1_ParamLimits

0x99b4,	// (0x0009ead2) cell_month_view_pane_t1_ParamLimits

0xeddb,	// (0x000a3ef9) main_clock2_btn_pane_g1

0xe8a6,	// (0x000a39c4) main_clock2_btn_pane_t1

0xe873,	// (0x000a3991) listscroll_cmail_pane_ParamLimits

0xdb5a,	// (0x000a2c78) main_sp_fs_email_pane_g1_ParamLimits

0xdb66,	// (0x000a2c84) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000a4e03) main_sp_fs_email_pane_g_ParamLimits

0xe0c5,	// (0x000a31e3) list_recal_day_pane_ParamLimits

0xe0d6,	// (0x000a31f4) mian_recal_day_pane_t1

0x895d,	// (0x0009da7b) list_single_dyc_row_text_pane_t4_ParamLimits

0x895d,	// (0x0009da7b) list_single_dyc_row_text_pane_t4

0x8994,	// (0x0009dab2) list_single_dyc_row_text_pane_t5_ParamLimits

0x8994,	// (0x0009dab2) list_single_dyc_row_text_pane_t5

0xdc0c,	// (0x000a2d2a) list_single_dyc_row_text_pane_t6_ParamLimits

0xdc0c,	// (0x000a2d2a) list_single_dyc_row_text_pane_t6

0x3318,	// (0x00098436) aid_mgn_list_cale_time_pane

0x4505,	// (0x00099623) main_gallery2_pane_ParamLimits

0xc358,	// (0x000a1476) main_clock2_pane_cp01_t1

0xc368,	// (0x000a1486) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000a48e2) main_clock2_pane_cp01_t

0x1957,	// (0x00096a75) cale_week_scroll_pane_g16_ParamLimits

0x1957,	// (0x00096a75) cale_week_scroll_pane_g16
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

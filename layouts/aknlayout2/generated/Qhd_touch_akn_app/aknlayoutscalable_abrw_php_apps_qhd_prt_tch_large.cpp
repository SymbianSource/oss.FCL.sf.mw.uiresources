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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x00095166 };

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
0x0f05,	// (0x0009606b) Screen

0x0f11,	// (0x00096077) application_window

0x0f6d,	// (0x000960d3) area_bottom_pane_ParamLimits

0x0f6d,	// (0x000960d3) area_bottom_pane

0x0fc6,	// (0x0009612c) area_top_pane_ParamLimits

0x0fc6,	// (0x0009612c) area_top_pane

0x102a,	// (0x00096190) call_video_uplink_pane_ParamLimits

0x102a,	// (0x00096190) call_video_uplink_pane

0x1069,	// (0x000961cf) main_pane_ParamLimits

0x1069,	// (0x000961cf) main_pane

0xba44,	// (0x000a0baa) context_pane

0x4687,	// (0x000997ed) navi_pane

0x46ad,	// (0x00099813) popup_cale_events_window_ParamLimits

0x46ad,	// (0x00099813) popup_cale_events_window

0xba57,	// (0x000a0bbd) popup_mup_playback_window

0x46c5,	// (0x0009982b) signal_pane

0xee64,	// (0x000a3fca) main_browser_pane

0xf029,	// (0x000a418f) main_burst_pane

0x4505,	// (0x0009966b) main_calc_pane

0xba2a,	// (0x000a0b90) main_cale_day_pane

0x17cc,	// (0x00096932) main_cale_month_pane

0xba2a,	// (0x000a0b90) main_cale_week_pane

0xf029,	// (0x000a418f) main_call_pane

0xeb44,	// (0x000a3caa) main_call_poc_pane

0xf029,	// (0x000a418f) main_camera_pane

0xf029,	// (0x000a418f) main_chi_dic_pane

0xa3ae,	// (0x0009f514) main_clock_pane

0xeb44,	// (0x000a3caa) main_fmradio_pane

0xf029,	// (0x000a418f) main_graph_messa_pane

0xeb44,	// (0x000a3caa) main_help_pane

0xee64,	// (0x000a3fca) main_im_pane

0xed9f,	// (0x000a3f05) main_image_pane_ParamLimits

0xed9f,	// (0x000a3f05) main_image_pane

0xeb44,	// (0x000a3caa) main_location2_pane

0xf029,	// (0x000a418f) main_location_pane

0xed9f,	// (0x000a3f05) main_messa_pane

0xeb44,	// (0x000a3caa) main_mp2_pane

0xf029,	// (0x000a418f) main_mp_pane

0xeb44,	// (0x000a3caa) main_msg_pane

0xeb44,	// (0x000a3caa) main_mup_eq_pane

0xeb44,	// (0x000a3caa) main_mup_pane

0xee64,	// (0x000a3fca) main_notes_pane

0xeb44,	// (0x000a3caa) main_pec_pane

0xeb44,	// (0x000a3caa) main_phob_pane

0xeb44,	// (0x000a3caa) main_pinb_pane

0xeb44,	// (0x000a3caa) main_postcard_pane

0xeb44,	// (0x000a3caa) main_qdial_pane

0xf029,	// (0x000a418f) main_skin_pane

0xeb44,	// (0x000a3caa) main_smil2_pane

0xf029,	// (0x000a418f) main_smil_pane

0xf029,	// (0x000a418f) main_video_pane

0xf029,	// (0x000a418f) main_video_tele_pane

0xed9f,	// (0x000a3f05) main_viewer_pane_ParamLimits

0xed9f,	// (0x000a3f05) main_viewer_pane

0xf029,	// (0x000a418f) main_vorec_pane

0x4551,	// (0x000996b7) popup_blid_sat_info_window_ParamLimits

0x4551,	// (0x000996b7) popup_blid_sat_info_window

0x4571,	// (0x000996d7) popup_dyc_status_message_window_ParamLimits

0x4571,	// (0x000996d7) popup_dyc_status_message_window

0x4581,	// (0x000996e7) popup_grid_large_graphic_window_ParamLimits

0x4581,	// (0x000996e7) popup_grid_large_graphic_window

0x4612,	// (0x00099778) popup_loc_request_window_ParamLimits

0x4612,	// (0x00099778) popup_loc_request_window

0x465f,	// (0x000997c5) popup_wml_address_window_ParamLimits

0x465f,	// (0x000997c5) popup_wml_address_window

0x43dd,	// (0x00099543) call_muted_g1

0x409f,	// (0x00099205) popup_call_audio_conf_window_ParamLimits

0x409f,	// (0x00099205) popup_call_audio_conf_window

0x43ed,	// (0x00099553) popup_call_audio_first_window_ParamLimits

0x43ed,	// (0x00099553) popup_call_audio_first_window

0x442d,	// (0x00099593) popup_call_audio_in_window_ParamLimits

0x442d,	// (0x00099593) popup_call_audio_in_window

0x4451,	// (0x000995b7) popup_call_audio_out_window_ParamLimits

0x4451,	// (0x000995b7) popup_call_audio_out_window

0x4473,	// (0x000995d9) popup_call_audio_second_window_ParamLimits

0x4473,	// (0x000995d9) popup_call_audio_second_window

0x44a3,	// (0x00099609) popup_call_audio_wait_window_ParamLimits

0x44a3,	// (0x00099609) popup_call_audio_wait_window

0x44c4,	// (0x0009962a) popup_number_entry_window_ParamLimits

0x44c4,	// (0x0009962a) popup_number_entry_window

0xe6ba,	// (0x000a3820) bg_popup_call_pane_cp05_ParamLimits

0xe6ba,	// (0x000a3820) bg_popup_call_pane_cp05

0xe6da,	// (0x000a3840) popup_number_entry_window_t1

0xe6ed,	// (0x000a3853) popup_number_entry_window_t2

0xe6ff,	// (0x000a3865) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x000a4230) popup_number_entry_window_t

0xe711,	// (0x000a3877) text_title_cp2

0xe724,	// (0x000a388a) bg_popup_call_pane_cp_ParamLimits

0xe724,	// (0x000a388a) bg_popup_call_pane_cp

0xe732,	// (0x000a3898) call_thumbnail_pane

0xe73a,	// (0x000a38a0) popup_call_audio_in_window_g1_ParamLimits

0xe73a,	// (0x000a38a0) popup_call_audio_in_window_g1

0xe746,	// (0x000a38ac) popup_call_audio_in_window_g2_ParamLimits

0xe746,	// (0x000a38ac) popup_call_audio_in_window_g2

0xe752,	// (0x000a38b8) popup_call_audio_in_window_g3_ParamLimits

0xe752,	// (0x000a38b8) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x000a4239) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x000a4239) popup_call_audio_in_window_g

0xe75e,	// (0x000a38c4) popup_call_audio_in_window_t1_ParamLimits

0xe75e,	// (0x000a38c4) popup_call_audio_in_window_t1

0xe77a,	// (0x000a38e0) popup_call_audio_in_window_t2_ParamLimits

0xe77a,	// (0x000a38e0) popup_call_audio_in_window_t2

0xe80d,	// (0x000a3973) popup_call_audio_in_window_t3_ParamLimits

0xe80d,	// (0x000a3973) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x000a4240) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x000a4240) popup_call_audio_in_window_t

0xe724,	// (0x000a388a) bg_popup_call_pane_cp01_ParamLimits

0xe724,	// (0x000a388a) bg_popup_call_pane_cp01

0xe732,	// (0x000a3898) call_thumbnail_pane_cp02

0xe820,	// (0x000a3986) call_type_pane_cp022

0xe828,	// (0x000a398e) popup_call_audio_out_window_g1_ParamLimits

0xe828,	// (0x000a398e) popup_call_audio_out_window_g1

0xe83a,	// (0x000a39a0) popup_call_audio_out_window_g2_ParamLimits

0xe83a,	// (0x000a39a0) popup_call_audio_out_window_g2

0xe846,	// (0x000a39ac) popup_call_audio_out_window_g3_ParamLimits

0xe846,	// (0x000a39ac) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x000a4247) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x000a4247) popup_call_audio_out_window_g

0xe858,	// (0x000a39be) popup_call_audio_out_window_t1_ParamLimits

0xe858,	// (0x000a39be) popup_call_audio_out_window_t1

0xe870,	// (0x000a39d6) popup_call_audio_out_window_t2_ParamLimits

0xe870,	// (0x000a39d6) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x000a424e) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x000a424e) popup_call_audio_out_window_t

0xe885,	// (0x000a39eb) bg_popup_call_pane_ParamLimits

0xe885,	// (0x000a39eb) bg_popup_call_pane

0x1282,	// (0x000963e8) call_thumbnail_pane_cp_ParamLimits

0x1282,	// (0x000963e8) call_thumbnail_pane_cp

0xe909,	// (0x000a3a6f) call_type_pane_cp01_ParamLimits

0xe909,	// (0x000a3a6f) call_type_pane_cp01

0xe94d,	// (0x000a3ab3) popup_call_audio_first_window_g1_ParamLimits

0xe94d,	// (0x000a3ab3) popup_call_audio_first_window_g1

0xe999,	// (0x000a3aff) popup_call_audio_first_window_g2_ParamLimits

0xe999,	// (0x000a3aff) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x000a4253) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x000a4253) popup_call_audio_first_window_g

0xe9dd,	// (0x000a3b43) popup_call_audio_first_window_t1_ParamLimits

0xe9dd,	// (0x000a3b43) popup_call_audio_first_window_t1

0xea89,	// (0x000a3bef) popup_call_audio_first_window_t4_ParamLimits

0xea89,	// (0x000a3bef) popup_call_audio_first_window_t4

0xeb15,	// (0x000a3c7b) popup_call_audio_first_window_t5_ParamLimits

0xeb15,	// (0x000a3c7b) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x000a4258) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x000a4258) popup_call_audio_first_window_t

0xeb44,	// (0x000a3caa) bg_popup_call_pane_cp02

0xeb4e,	// (0x000a3cb4) call_type_pane_cp023

0xeb56,	// (0x000a3cbc) popup_call_audio_wait_window_g1

0xeb5e,	// (0x000a3cc4) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a425f) popup_call_audio_wait_window_g

0xeb66,	// (0x000a3ccc) popup_call_audio_wait_window_t3

0xeb74,	// (0x000a3cda) bg_popup_call_pane_cp03_ParamLimits

0xeb74,	// (0x000a3cda) bg_popup_call_pane_cp03

0xebd4,	// (0x000a3d3a) call_thumbnail_pane_cp011_ParamLimits

0xebd4,	// (0x000a3d3a) call_thumbnail_pane_cp011

0xebe0,	// (0x000a3d46) call_type_pane_cp034_ParamLimits

0xebe0,	// (0x000a3d46) call_type_pane_cp034

0xec1c,	// (0x000a3d82) popup_call_audio_second_window_g1_ParamLimits

0xec1c,	// (0x000a3d82) popup_call_audio_second_window_g1

0xec58,	// (0x000a3dbe) popup_call_audio_second_window_g2_ParamLimits

0xec58,	// (0x000a3dbe) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x000a4264) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x000a4264) popup_call_audio_second_window_g

0xec94,	// (0x000a3dfa) popup_call_audio_second_window_t1_ParamLimits

0xec94,	// (0x000a3dfa) popup_call_audio_second_window_t1

0xed15,	// (0x000a3e7b) popup_call_audio_second_window_t2_ParamLimits

0xed15,	// (0x000a3e7b) popup_call_audio_second_window_t2

0xed4b,	// (0x000a3eb1) popup_call_audio_second_window_t3_ParamLimits

0xed4b,	// (0x000a3eb1) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x000a4269) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x000a4269) popup_call_audio_second_window_t

0xeb44,	// (0x000a3caa) bg_popup_call_pane_cp04

0xed81,	// (0x000a3ee7) list_conf_pane

0xed89,	// (0x000a3eef) popup_call_audio_conf_window_t1

0xed97,	// (0x000a3efd) call_thumbnail_pane_g1

0xed9f,	// (0x000a3f05) bg_pinb_pane_ParamLimits

0xed9f,	// (0x000a3f05) bg_pinb_pane

0xedad,	// (0x000a3f13) find_pinb_pane

0xedb6,	// (0x000a3f1c) listscroll_pinb_pane_ParamLimits

0xedb6,	// (0x000a3f1c) listscroll_pinb_pane

0xedc5,	// (0x000a3f2b) pinb_bg_pane_g1

0x12a6,	// (0x0009640c) pinb_bg_pane_g2

0x12b2,	// (0x00096418) pinb_bg_pane_g3

0x12be,	// (0x00096424) pinb_bg_pane_g4

0x12ca,	// (0x00096430) pinb_bg_pane_g5

0x12d6,	// (0x0009643c) pinb_bg_pane_g6

0x12e1,	// (0x00096447) pinb_bg_pane_g7

0x12ec,	// (0x00096452) pinb_bg_pane_g8

0x12f7,	// (0x0009645d) pinb_bg_pane_g9

0x1301,	// (0x00096467) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x000a4270) pinb_bg_pane_g

0x131e,	// (0x00096484) grid_pinb_pane

0x1329,	// (0x0009648f) list_pinb_pane

0x1334,	// (0x0009649a) scroll_pane_cp01_ParamLimits

0x1334,	// (0x0009649a) scroll_pane_cp01

0xedcf,	// (0x000a3f35) find_pinb_pane_g1_ParamLimits

0xedcf,	// (0x000a3f35) find_pinb_pane_g1

0xede7,	// (0x000a3f4d) find_pinb_pane_t1

0xedf9,	// (0x000a3f5f) find_pinb_pane_t2

0x0001,

0xf124,	// (0x000a428a) find_pinb_pane_t

0xee0e,	// (0x000a3f74) input_focus_pane_cp01_ParamLimits

0xee0e,	// (0x000a3f74) input_focus_pane_cp01

0x1346,	// (0x000964ac) cell_pinb_pane_ParamLimits

0x1346,	// (0x000964ac) cell_pinb_pane

0x136e,	// (0x000964d4) cell_pinb_pane_g1_ParamLimits

0x136e,	// (0x000964d4) cell_pinb_pane_g1

0x1383,	// (0x000964e9) cell_pinb_pane_g2_ParamLimits

0x1383,	// (0x000964e9) cell_pinb_pane_g2

0xee1a,	// (0x000a3f80) cell_pinb_pane_g3_ParamLimits

0xee1a,	// (0x000a3f80) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x000a428f) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x000a428f) cell_pinb_pane_g

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp01

0x138f,	// (0x000964f5) list_pinb_item_pane_ParamLimits

0x138f,	// (0x000964f5) list_pinb_item_pane

0xeb44,	// (0x000a3caa) list_highlight_pane_cp02

0x13b5,	// (0x0009651b) list_pinb_item_pane_g1_ParamLimits

0x13b5,	// (0x0009651b) list_pinb_item_pane_g1

0x13c2,	// (0x00096528) list_pinb_item_pane_g2_ParamLimits

0x13c2,	// (0x00096528) list_pinb_item_pane_g2

0x13ce,	// (0x00096534) list_pinb_item_pane_g3_ParamLimits

0x13ce,	// (0x00096534) list_pinb_item_pane_g3

0x13df,	// (0x00096545) list_pinb_item_pane_g4_ParamLimits

0x13df,	// (0x00096545) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x000a4296) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x000a4296) list_pinb_item_pane_g

0x13eb,	// (0x00096551) list_pinb_item_pane_t1_ParamLimits

0x13eb,	// (0x00096551) list_pinb_item_pane_t1

0x141c,	// (0x00096582) calc_display_pane

0x143a,	// (0x000965a0) calc_paper_pane

0x1456,	// (0x000965bc) grid_calc_pane

0xeb44,	// (0x000a3caa) bg_list_pane_cp01

0x1482,	// (0x000965e8) clock_g1

0x148a,	// (0x000965f0) clock_g2

0x0001,

0xf139,	// (0x000a429f) clock_g

0x1494,	// (0x000965fa) clock_t1_ParamLimits

0x1494,	// (0x000965fa) clock_t1

0x14a9,	// (0x0009660f) clock_t2_ParamLimits

0x14a9,	// (0x0009660f) clock_t2

0x14bb,	// (0x00096621) clock_t3_ParamLimits

0x14bb,	// (0x00096621) clock_t3

0x14cd,	// (0x00096633) clock_t4_ParamLimits

0x14cd,	// (0x00096633) clock_t4

0x14df,	// (0x00096645) clock_t5_ParamLimits

0x14df,	// (0x00096645) clock_t5

0x14f4,	// (0x0009665a) clock_t6_ParamLimits

0x14f4,	// (0x0009665a) clock_t6

0x1506,	// (0x0009666c) clock_t7_ParamLimits

0x1506,	// (0x0009666c) clock_t7

0x1518,	// (0x0009667e) clock_t8_ParamLimits

0x1518,	// (0x0009667e) clock_t8

0x152e,	// (0x00096694) clock_t9_ParamLimits

0x152e,	// (0x00096694) clock_t9

0x0008,

0xf13e,	// (0x000a42a4) clock_t_ParamLimits

0xf13e,	// (0x000a42a4) clock_t

0xee26,	// (0x000a3f8c) popup_clock_analogue_window_cp02

0xee26,	// (0x000a3f8c) popup_clock_digital_window_cp01

0xee2e,	// (0x000a3f94) listscroll_help_pane

0xeb44,	// (0x000a3caa) phob_pre_status_pane

0xee38,	// (0x000a3f9e) grid_qdial_pane

0xed9f,	// (0x000a3f05) listscroll_mce_pane

0xed9f,	// (0x000a3f05) bg_notes_pane

0xee42,	// (0x000a3fa8) list_notes_pane

0x1544,	// (0x000966aa) scroll_pane_cp06

0xee50,	// (0x000a3fb6) bg_calc_paper_pane

0x1553,	// (0x000966b9) list_calc_pane

0xee64,	// (0x000a3fca) bg_calc_display_pane

0x156d,	// (0x000966d3) calc_display_pane_t1

0x1582,	// (0x000966e8) calc_display_pane_t2

0x1597,	// (0x000966fd) calc_display_pane_t3

0x0002,

0xf151,	// (0x000a42b7) calc_display_pane_t

0x15a9,	// (0x0009670f) cell_calc_pane_ParamLimits

0x15a9,	// (0x0009670f) cell_calc_pane

0xee70,	// (0x000a3fd6) bg_calc_paper_pane_g1

0xee7c,	// (0x000a3fe2) bg_calc_paper_pane_g2

0xee88,	// (0x000a3fee) bg_calc_paper_pane_g3

0xee94,	// (0x000a3ffa) bg_calc_paper_pane_g4

0xeea0,	// (0x000a4006) bg_calc_paper_pane_g5

0x15d6,	// (0x0009673c) bg_calc_paper_pane_g6

0x15e7,	// (0x0009674d) bg_calc_paper_pane_g7

0x15f8,	// (0x0009675e) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x000a42be) bg_calc_paper_pane_g

0x1609,	// (0x0009676f) calc_bg_paper_pane_g9

0x161a,	// (0x00096780) list_calc_item_pane_ParamLimits

0x161a,	// (0x00096780) list_calc_item_pane

0xeeac,	// (0x000a4012) list_calc_item_pane_g1

0x1649,	// (0x000967af) list_calc_item_pane_t1_ParamLimits

0x1649,	// (0x000967af) list_calc_item_pane_t1

0x165b,	// (0x000967c1) list_calc_item_pane_t2_ParamLimits

0x165b,	// (0x000967c1) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x000a42cf) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x000a42cf) list_calc_item_pane_t

0xeeb9,	// (0x000a401f) cell_calc_pane_g1

0xeec3,	// (0x000a4029) grid_highlight_pane_cp02

0x168b,	// (0x000967f1) bg_calc_display_pane_g1

0x1694,	// (0x000967fa) bg_calc_display_pane_g2

0xbdb2,	// (0x000a0f18) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x000a42d9) bg_calc_display_pane_g

0x169e,	// (0x00096804) cell_qdial_pane_ParamLimits

0x169e,	// (0x00096804) cell_qdial_pane

0x16b2,	// (0x00096818) cell_qdial_pane_g1_ParamLimits

0x16b2,	// (0x00096818) cell_qdial_pane_g1

0x16bf,	// (0x00096825) cell_qdial_pane_g2_ParamLimits

0x16bf,	// (0x00096825) cell_qdial_pane_g2

0xeee5,	// (0x000a404b) cell_qdial_pane_g3_ParamLimits

0xeee5,	// (0x000a404b) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x000a42e0) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x000a42e0) cell_qdial_pane_g

0x16dd,	// (0x00096843) cell_qdial_pane_t1_ParamLimits

0x16dd,	// (0x00096843) cell_qdial_pane_t1

0x16f5,	// (0x0009685b) cell_qdial_pane_t2_ParamLimits

0x16f5,	// (0x0009685b) cell_qdial_pane_t2

0x1708,	// (0x0009686e) cell_qdial_pane_t3_ParamLimits

0x1708,	// (0x0009686e) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x000a42e9) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x000a42e9) cell_qdial_pane_t

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp04

0xeef1,	// (0x000a4057) thumbnail_qdial_pane_ParamLimits

0xeef1,	// (0x000a4057) thumbnail_qdial_pane

0xef4d,	// (0x000a40b3) list_help_pane

0xef56,	// (0x000a40bc) scroll_pane_cp02

0x171b,	// (0x00096881) help_list_pane_t1_ParamLimits

0x171b,	// (0x00096881) help_list_pane_t1

0x174e,	// (0x000968b4) bg_notes_pane_g2

0x1756,	// (0x000968bc) bg_notes_pane_g3

0x175e,	// (0x000968c4) notes_bg_pane_g1

0x1766,	// (0x000968cc) notes_bg_pane_g4

0x176e,	// (0x000968d4) notes_bg_pane_g5

0x1776,	// (0x000968dc) notes_bg_pane_g6

0x177e,	// (0x000968e4) notes_bg_pane_g7

0x1786,	// (0x000968ec) notes_bg_pane_g8

0x178e,	// (0x000968f4) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x000a4307) notes_bg_pane_g

0x1796,	// (0x000968fc) list_notes_text_pane_ParamLimits

0x1796,	// (0x000968fc) list_notes_text_pane

0xef5f,	// (0x000a40c5) list_notes_text_pane_g1

0x17be,	// (0x00096924) list_notes_text_pane_t1

0x17cc,	// (0x00096932) listscroll_cale_week_pane

0x17f1,	// (0x00096957) bg_cale_heading_pane

0xef82,	// (0x000a40e8) bg_cale_pane_cp01

0x1813,	// (0x00096979) cale_week_corner_pane

0x182d,	// (0x00096993) cale_week_day_heading_pane

0x184f,	// (0x000969b5) cale_week_scroll_pane_g1

0x186c,	// (0x000969d2) cale_week_scroll_pane_g2

0x187f,	// (0x000969e5) cale_week_scroll_pane_g3

0x1892,	// (0x000969f8) cale_week_scroll_pane_g4

0x18a5,	// (0x00096a0b) cale_week_scroll_pane_g5

0x18b8,	// (0x00096a1e) cale_week_scroll_pane_g6

0x18cb,	// (0x00096a31) cale_week_scroll_pane_g7

0x18de,	// (0x00096a44) cale_week_scroll_pane_g8

0x18f3,	// (0x00096a59) cale_week_scroll_pane_g9

0x1906,	// (0x00096a6c) cale_week_scroll_pane_g10

0x1919,	// (0x00096a7f) cale_week_scroll_pane_g11

0x192c,	// (0x00096a92) cale_week_scroll_pane_g12

0x1943,	// (0x00096aa9) cale_week_scroll_pane_g13

0x195e,	// (0x00096ac4) cale_week_scroll_pane_g14

0x1979,	// (0x00096adf) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x000a4316) cale_week_scroll_pane_g

0x19a9,	// (0x00096b0f) cale_week_time_pane

0x19be,	// (0x00096b24) grid_cale_week_pane

0xefb1,	// (0x000a4117) scroll_pane_cp08

0x19dd,	// (0x00096b43) cell_cale_week_pane_ParamLimits

0x19dd,	// (0x00096b43) cell_cale_week_pane

0x1a3f,	// (0x00096ba5) cale_week_day_heading_pane_t1

0x1a7a,	// (0x00096be0) cale_week_day_heading_pane_t2

0x1ab5,	// (0x00096c1b) cale_week_day_heading_pane_t3

0x1af0,	// (0x00096c56) cale_week_day_heading_pane_t4

0x1b2b,	// (0x00096c91) cale_week_day_heading_pane_t5

0x1b66,	// (0x00096ccc) cale_week_day_heading_pane_t6

0x1ba1,	// (0x00096d07) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x000a4337) cale_week_day_heading_pane_t

0xefce,	// (0x000a4134) bg_cale_side_pane

0x1bdc,	// (0x00096d42) cale_week_time_pane_t1

0x1bf6,	// (0x00096d5c) cale_week_time_pane_t2

0x1c10,	// (0x00096d76) cale_week_time_pane_t3

0x1c2a,	// (0x00096d90) cale_week_time_pane_t4

0x1c44,	// (0x00096daa) cale_week_time_pane_t5

0x1c5e,	// (0x00096dc4) cale_week_time_pane_t6

0x1c7e,	// (0x00096de4) cale_week_time_pane_t7

0x1ca0,	// (0x00096e06) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x000a4346) cale_week_time_pane_t

0x1cc4,	// (0x00096e2a) cell_cale_week_pane_g2

0x1ce8,	// (0x00096e4e) cell_cale_week_pane_g3_ParamLimits

0x1ce8,	// (0x00096e4e) cell_cale_week_pane_g3

0xefdc,	// (0x000a4142) grid_highlight_pane_cp07

0xefe4,	// (0x000a414a) listscroll_gms_pane

0xefee,	// (0x000a4154) grid_gms_pane

0xeff7,	// (0x000a415d) listscroll_gms_pane_g1

0xefff,	// (0x000a4165) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x000a4357) listscroll_gms_pane_g

0x1d00,	// (0x00096e66) scroll_pane_cp010

0x1d0b,	// (0x00096e71) cell_gms_pane_ParamLimits

0x1d0b,	// (0x00096e71) cell_gms_pane

0x1d1e,	// (0x00096e84) cell_gms_pane_g1

0xf007,	// (0x000a416d) cell_gms_pane_g2

0xf00f,	// (0x000a4175) cell_gms_pane_g3

0xf018,	// (0x000a417e) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x000a435c) cell_gms_pane_g

0xf021,	// (0x000a4187) grid_highlight_pane_cp09

0x4385,	// (0x000994eb) phob_pre_status_pane_g1

0x438d,	// (0x000994f3) phob_pre_status_pane_g2

0x4395,	// (0x000994fb) phob_pre_status_pane_g3

0x439d,	// (0x00099503) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x000a4747) phob_pre_status_pane_g

0x43ad,	// (0x00099513) phob_pre_status_pane_t1

0x43bd,	// (0x00099523) phob_pre_status_pane_t2

0x43cd,	// (0x00099533) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x000a4752) phob_pre_status_pane_t

0xf029,	// (0x000a418f) bg_list_pane_cp05

0x1d2e,	// (0x00096e94) grid_vorec_pane

0x1d38,	// (0x00096e9e) vorec_t1

0x1d46,	// (0x00096eac) vorec_t2

0x1d54,	// (0x00096eba) vorec_t3

0x1d62,	// (0x00096ec8) vorec_t4

0x9bec,	// (0x0009ed52) vorec_t5

0x9bfa,	// (0x0009ed60) vorec_t6

0x0004,

0xf1ff,	// (0x000a4365) vorec_t

0x9c08,	// (0x0009ed6e) wait_bar_pane_cp01

0x1d7e,	// (0x00096ee4) cell_vorec_pane_ParamLimits

0x1d7e,	// (0x00096ee4) cell_vorec_pane

0x1d91,	// (0x00096ef7) cell_vorec_pane_g1

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp05

0x1dab,	// (0x00096f11) cams_zoom_pane

0x1db7,	// (0x00096f1d) image_vga_pane

0x1dc6,	// (0x00096f2c) main_camera_pane_g1

0x1dd4,	// (0x00096f3a) main_camera_pane_g2

0x1de0,	// (0x00096f46) main_camera_pane_g3

0x1dec,	// (0x00096f52) main_camera_pane_g4

0x1df8,	// (0x00096f5e) main_camera_pane_g5

0x1e04,	// (0x00096f6a) main_camera_pane_g6

0x1e10,	// (0x00096f76) main_camera_pane_g7

0x0007,

0xf20a,	// (0x000a4370) main_camera_pane_g

0x1e1c,	// (0x00096f82) main_camera_pane_t1

0x1e2e,	// (0x00096f94) main_camera_pane_t2

0x0001,

0xf21b,	// (0x000a4381) main_camera_pane_t

0x1e4f,	// (0x00096fb5) cams_zoom_pane_cp_ParamLimits

0x1e4f,	// (0x00096fb5) cams_zoom_pane_cp

0x1e73,	// (0x00096fd9) image_cif_pane_ParamLimits

0x1e73,	// (0x00096fd9) image_cif_pane

0x1e91,	// (0x00096ff7) image_subqcif_pane

0x1e99,	// (0x00096fff) main_video_pane_g1_ParamLimits

0x1e99,	// (0x00096fff) main_video_pane_g1

0x1eb9,	// (0x0009701f) main_video_pane_g2_ParamLimits

0x1eb9,	// (0x0009701f) main_video_pane_g2

0x1ee9,	// (0x0009704f) main_video_pane_g3_ParamLimits

0x1ee9,	// (0x0009704f) main_video_pane_g3

0x1f12,	// (0x00097078) main_video_pane_g4_ParamLimits

0x1f12,	// (0x00097078) main_video_pane_g4

0x1f3b,	// (0x000970a1) main_video_pane_g5_ParamLimits

0x1f3b,	// (0x000970a1) main_video_pane_g5

0xf03d,	// (0x000a41a3) main_video_pane_g6_ParamLimits

0xf03d,	// (0x000a41a3) main_video_pane_g6

0x0006,

0xf220,	// (0x000a4386) main_video_pane_g_ParamLimits

0xf220,	// (0x000a4386) main_video_pane_g

0x1f5d,	// (0x000970c3) main_video_pane_t1_ParamLimits

0x1f5d,	// (0x000970c3) main_video_pane_t1

0xf057,	// (0x000a41bd) cams_zoom_pane_g1

0xf060,	// (0x000a41c6) cams_zoom_pane_g2

0xf069,	// (0x000a41cf) cams_zoom_pane_g3

0x9c12,	// (0x0009ed78) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x000a4395) cams_zoom_pane_g

0x1fa7,	// (0x0009710d) grid_cams_pane

0x1fb5,	// (0x0009711b) linegrid_cams_pane

0x1fc3,	// (0x00097129) cell_cams_pane_ParamLimits

0x1fc3,	// (0x00097129) cell_cams_pane

0x9c1b,	// (0x0009ed81) cams_burst_image_pane

0x9c23,	// (0x0009ed89) cell_cams_pane_g1

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp03

0xeeb9,	// (0x000a401f) mp_bg_pane_g1

0xeb44,	// (0x000a3caa) bg_list_pane_cp03

0xb94f,	// (0x000a0ab5) bg_mp_pane

0xb957,	// (0x000a0abd) grid_mp_pane

0xb95f,	// (0x000a0ac5) media_player_g1

0xb967,	// (0x000a0acd) media_player_t1

0xb975,	// (0x000a0adb) media_player_t2

0xb983,	// (0x000a0ae9) media_player_t3

0xb991,	// (0x000a0af7) media_player_t4

0xb99f,	// (0x000a0b05) media_player_t5

0xb9ad,	// (0x000a0b13) media_player_t6

0xb9bb,	// (0x000a0b21) media_player_t7

0x0006,

0xf5cb,	// (0x000a4731) media_player_t

0xb9c9,	// (0x000a0b2f) wait_bar_pane_cp02

0xf5b0,	// (0x000a4716) main_usb_pane_t

0x437c,	// (0x000994e2) cell_mp_pane

0xeeb9,	// (0x000a401f) cell_mp_pane_g1

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp06

0x9c2b,	// (0x0009ed91) grid_skin_colour_pane

0x9c33,	// (0x0009ed99) list_highlight_pane_cp03

0x20cd,	// (0x00097233) skin_g1

0x9c3b,	// (0x0009eda1) skin_t1

0x9c4a,	// (0x0009edb0) skin_t2

0x0001,

0xf264,	// (0x000a43ca) skin_t

0x20d7,	// (0x0009723d) cell_skin_colour_pane_ParamLimits

0x20d7,	// (0x0009723d) cell_skin_colour_pane

0x9c58,	// (0x0009edbe) cell_skin_colour_pane_g1

0x215b,	// (0x000972c1) call_video_g1_ParamLimits

0x215b,	// (0x000972c1) call_video_g1

0x216b,	// (0x000972d1) call_video_g2_ParamLimits

0x216b,	// (0x000972d1) call_video_g2

0x0001,

0xf269,	// (0x000a43cf) call_video_g_ParamLimits

0xf269,	// (0x000a43cf) call_video_g

0x21c5,	// (0x0009732b) call_video_uplink_pane_cp1_ParamLimits

0x21c5,	// (0x0009732b) call_video_uplink_pane_cp1

0x9c6a,	// (0x0009edd0) call_video_uplink_pane_cp2

0x2291,	// (0x000973f7) video_down_crop_pane_ParamLimits

0x2291,	// (0x000973f7) video_down_crop_pane

0x238f,	// (0x000974f5) video_down_pane_ParamLimits

0x238f,	// (0x000974f5) video_down_pane

0x9c72,	// (0x0009edd8) video_down_subqcif_pane_ParamLimits

0x9c72,	// (0x0009edd8) video_down_subqcif_pane

0x9c8a,	// (0x0009edf0) video_down_subqcif_pane_cp_ParamLimits

0x9c8a,	// (0x0009edf0) video_down_subqcif_pane_cp

0x9cb0,	// (0x0009ee16) im_reading_pane_ParamLimits

0x9cb0,	// (0x0009ee16) im_reading_pane

0x24af,	// (0x00097615) im_writing_pane_ParamLimits

0x24af,	// (0x00097615) im_writing_pane

0x24cd,	// (0x00097633) im_reading_pane_t1

0x9cca,	// (0x0009ee30) list_im_pane

0x9cdb,	// (0x0009ee41) scroll_pane_cp07

0x2521,	// (0x00097687) im_writing_pane_t1_ParamLimits

0x2521,	// (0x00097687) im_writing_pane_t1

0x9cf4,	// (0x0009ee5a) im_writing_pane_t2_ParamLimits

0x9cf4,	// (0x0009ee5a) im_writing_pane_t2

0x0001,

0xf273,	// (0x000a43d9) im_writing_pane_t_ParamLimits

0xf273,	// (0x000a43d9) im_writing_pane_t

0xeb44,	// (0x000a3caa) input_focus_pane_cp04

0xeb44,	// (0x000a3caa) input_focus_pane_cp05

0x2536,	// (0x0009769c) list_im_single_pane_ParamLimits

0x2536,	// (0x0009769c) list_im_single_pane

0x255a,	// (0x000976c0) list_single_im_pane_t1

0x4340,	// (0x000994a6) blid_accuracy_pane

0x4348,	// (0x000994ae) blid_compass_pane

0x4352,	// (0x000994b8) main_location_t1

0x4360,	// (0x000994c6) main_location_t2

0x436e,	// (0x000994d4) main_location_t3

0x0002,

0xf5da,	// (0x000a4740) main_location_t

0xeb44,	// (0x000a3caa) aid_levels_location

0xeeb9,	// (0x000a401f) blid_accuracy_pane_g1

0xeeb9,	// (0x000a401f) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x000a443b) blid_accuracy_pane_g

0x9d3c,	// (0x0009eea2) wml_content_pane

0x9d7a,	// (0x0009eee0) wml_button_pane_ParamLimits

0x9d7a,	// (0x0009eee0) wml_button_pane

0x2569,	// (0x000976cf) wml_list_single_large_pane_ParamLimits

0x2569,	// (0x000976cf) wml_list_single_large_pane

0x2593,	// (0x000976f9) wml_list_single_medium_pane_ParamLimits

0x2593,	// (0x000976f9) wml_list_single_medium_pane

0x25c4,	// (0x0009772a) wml_list_single_small_pane_ParamLimits

0x25c4,	// (0x0009772a) wml_list_single_small_pane

0x9d8e,	// (0x0009eef4) wml_selection_box_pane_ParamLimits

0x9d8e,	// (0x0009eef4) wml_selection_box_pane

0x9da1,	// (0x0009ef07) wml_list_single_pane_t1

0x9db0,	// (0x0009ef16) wml_list_single_medium_pane_t1

0x9dbf,	// (0x0009ef25) wml_list_single_large_pane_t1

0x9dce,	// (0x0009ef34) input_focus_pane_cp02_ParamLimits

0x9dce,	// (0x0009ef34) input_focus_pane_cp02

0x9de1,	// (0x0009ef47) wml_selection_box_pane_g1

0x9dea,	// (0x0009ef50) wml_selection_box_pane_t1_ParamLimits

0x9dea,	// (0x0009ef50) wml_selection_box_pane_t1

0xed9f,	// (0x000a3f05) bg_wml_button_pane_ParamLimits

0xed9f,	// (0x000a3f05) bg_wml_button_pane

0x9e02,	// (0x0009ef68) wml_button_pane_g1

0x9e0a,	// (0x0009ef70) wml_button_pane_t1

0x9e02,	// (0x0009ef68) wml_button_bg_pane_g1

0x9e1a,	// (0x0009ef80) wml_button_bg_pane_g2

0x9e22,	// (0x0009ef88) wml_button_bg_pane_g3

0x9e2a,	// (0x0009ef90) wml_button_bg_pane_g4

0x9e32,	// (0x0009ef98) wml_button_bg_pane_g5

0x9e3a,	// (0x0009efa0) wml_button_bg_pane_g6

0x9e42,	// (0x0009efa8) wml_button_bg_pane_g7

0x9e4a,	// (0x0009efb0) wml_button_bg_pane_g8

0x9e52,	// (0x0009efb8) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x000a43de) wml_button_bg_pane_g

0x25fe,	// (0x00097764) bg_list_pane_cp02

0x9e5a,	// (0x0009efc0) mce_header_pane_ParamLimits

0x9e5a,	// (0x0009efc0) mce_header_pane

0x9e70,	// (0x0009efd6) mce_icon_pane

0x9e70,	// (0x0009efd6) mce_image_pane

0x9e79,	// (0x0009efdf) mce_text_pane_ParamLimits

0x9e79,	// (0x0009efdf) mce_text_pane

0x2608,	// (0x0009776e) scroll_pane_cp03

0x9d72,	// (0x0009eed8) scroll_pane_cp04

0x9e8c,	// (0x0009eff2) scroll_pane_cp05_ParamLimits

0x9e8c,	// (0x0009eff2) scroll_pane_cp05

0x2612,	// (0x00097778) mce_header_field_pane_ParamLimits

0x2612,	// (0x00097778) mce_header_field_pane

0x2632,	// (0x00097798) mce_header_field_pane_2_ParamLimits

0x2632,	// (0x00097798) mce_header_field_pane_2

0x2648,	// (0x000977ae) mce_header_field_pane_3

0x2650,	// (0x000977b6) list_single_mce_message_pane_ParamLimits

0x2650,	// (0x000977b6) list_single_mce_message_pane

0x267b,	// (0x000977e1) list_single_mce_smart_pane_ParamLimits

0x267b,	// (0x000977e1) list_single_mce_smart_pane

0x9e98,	// (0x0009effe) input_focus_pane_cp03

0x9ea1,	// (0x0009f007) list_header_data_pane

0x26b1,	// (0x00097817) mce_header_field_pane_t1

0x26bf,	// (0x00097825) list_single_mce_header_pane_ParamLimits

0x26bf,	// (0x00097825) list_single_mce_header_pane

0x9ea9,	// (0x0009f00f) list_single_mce_header_pane_t1

0x9eb8,	// (0x0009f01e) list_single_mce_message_pane_g1

0x9ec0,	// (0x0009f026) list_single_mce_message_pane_t1

0x2711,	// (0x00097877) bg_cale_heading_pane_cp01_ParamLimits

0x2711,	// (0x00097877) bg_cale_heading_pane_cp01

0x9ece,	// (0x0009f034) bg_cale_pane_cp02_ParamLimits

0x9ece,	// (0x0009f034) bg_cale_pane_cp02

0x2754,	// (0x000978ba) cale_month_corner_pane

0x276e,	// (0x000978d4) cale_month_day_heading_pane_ParamLimits

0x276e,	// (0x000978d4) cale_month_day_heading_pane

0x27c9,	// (0x0009792f) cale_month_pane_g1_ParamLimits

0x27c9,	// (0x0009792f) cale_month_pane_g1

0x2801,	// (0x00097967) cale_month_pane_g2_ParamLimits

0x2801,	// (0x00097967) cale_month_pane_g2

0x282a,	// (0x00097990) cale_month_pane_g3_ParamLimits

0x282a,	// (0x00097990) cale_month_pane_g3

0x2876,	// (0x000979dc) cale_month_pane_g4_ParamLimits

0x2876,	// (0x000979dc) cale_month_pane_g4

0x28c2,	// (0x00097a28) cale_month_pane_g5_ParamLimits

0x28c2,	// (0x00097a28) cale_month_pane_g5

0x290e,	// (0x00097a74) cale_month_pane_g6_ParamLimits

0x290e,	// (0x00097a74) cale_month_pane_g6

0x295a,	// (0x00097ac0) cale_month_pane_g7_ParamLimits

0x295a,	// (0x00097ac0) cale_month_pane_g7

0x29be,	// (0x00097b24) cale_month_pane_g8_ParamLimits

0x29be,	// (0x00097b24) cale_month_pane_g8

0x2a22,	// (0x00097b88) cale_month_pane_g9_ParamLimits

0x2a22,	// (0x00097b88) cale_month_pane_g9

0x2a80,	// (0x00097be6) cale_month_pane_g10_ParamLimits

0x2a80,	// (0x00097be6) cale_month_pane_g10

0x2adc,	// (0x00097c42) cale_month_pane_g11_ParamLimits

0x2adc,	// (0x00097c42) cale_month_pane_g11

0x2b30,	// (0x00097c96) cale_month_pane_g12_ParamLimits

0x2b30,	// (0x00097c96) cale_month_pane_g12

0x2b86,	// (0x00097cec) cale_month_pane_g13_ParamLimits

0x2b86,	// (0x00097cec) cale_month_pane_g13

0x000c,

0xf28b,	// (0x000a43f1) cale_month_pane_g_ParamLimits

0xf28b,	// (0x000a43f1) cale_month_pane_g

0x2bdc,	// (0x00097d42) cale_month_week_pane

0x2bf1,	// (0x00097d57) grid_cale_month_pane_ParamLimits

0x2bf1,	// (0x00097d57) grid_cale_month_pane

0x2c3f,	// (0x00097da5) cale_month_day_heading_pane_t1

0x2cc5,	// (0x00097e2b) cale_month_day_heading_pane_t2

0x2d56,	// (0x00097ebc) cale_month_day_heading_pane_t3

0x2de7,	// (0x00097f4d) cale_month_day_heading_pane_t4

0x2e78,	// (0x00097fde) cale_month_day_heading_pane_t5

0x2f09,	// (0x0009806f) cale_month_day_heading_pane_t6

0x2f9a,	// (0x00098100) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x000a440c) cale_month_day_heading_pane_t

0xefce,	// (0x000a4134) bg_cale_side_pane_cp01

0x3043,	// (0x000981a9) cale_month_week_pane_t1

0x305c,	// (0x000981c2) cale_month_week_pane_t2

0x3075,	// (0x000981db) cale_month_week_pane_t3

0x308e,	// (0x000981f4) cale_month_week_pane_t4

0x30a7,	// (0x0009820d) cale_month_week_pane_t5

0x30c8,	// (0x0009822e) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x000a441b) cale_month_week_pane_t

0x30e9,	// (0x0009824f) cell_cale_month_pane_ParamLimits

0x30e9,	// (0x0009824f) cell_cale_month_pane

0x3235,	// (0x0009839b) cell_cale_month_pane_g1

0x3241,	// (0x000983a7) cell_cale_month_pane_t1_ParamLimits

0x3241,	// (0x000983a7) cell_cale_month_pane_t1

0xefdc,	// (0x000a4142) grid_highlight_pane_cp08

0xeeb9,	// (0x000a401f) main_smil_g1

0x326d,	// (0x000983d3) smil_status_pane

0x9f0d,	// (0x0009f073) smil_text_pane

0xb85a,	// (0x000a09c0) bg_popup_call3_rect_pane_g8

0xb862,	// (0x000a09c8) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x000a46d4) bg_popup_call3_rect_pane_g

0xbabe,	// (0x000a0c24) smil_status_volume_pane_g1

0x9f17,	// (0x0009f07d) smil_status_pane_t1

0x4778,	// (0x000998de) volume_smil_pane

0x9f2e,	// (0x0009f094) list_smil_text_pane

0x3280,	// (0x000983e6) scroll_pane_cp011

0x328b,	// (0x000983f1) smil_text_list_pane_t1_ParamLimits

0x328b,	// (0x000983f1) smil_text_list_pane_t1

0x3303,	// (0x00098469) aid_volume_smil_ParamLimits

0x3303,	// (0x00098469) aid_volume_smil

0xeeb9,	// (0x000a401f) smil_volume_pane_g1

0xeeb9,	// (0x000a401f) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x000a443b) smil_volume_pane_g

0x17cc,	// (0x00096932) listscroll_cale_day_pane

0x9f38,	// (0x0009f09e) bg_cale_pane

0x9f50,	// (0x0009f0b6) list_cale_pane

0x9f73,	// (0x0009f0d9) scroll_pane_cp09

0x9f84,	// (0x0009f0ea) cale_bg_pane_g1

0x9f8c,	// (0x0009f0f2) cale_bg_pane_g2

0x9f94,	// (0x0009f0fa) cale_bg_pane_g3

0x9f9c,	// (0x0009f102) cale_bg_pane_g4

0x9fa4,	// (0x0009f10a) cale_bg_pane_g5

0x9fac,	// (0x0009f112) cale_bg_pane_g6

0x9fb4,	// (0x0009f11a) cale_bg_pane_g7

0x9fbc,	// (0x0009f122) cale_bg_pane_g8

0x9fc4,	// (0x0009f12a) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x000a4440) cale_bg_pane_g

0x332d,	// (0x00098493) list_cale_time_pane_ParamLimits

0x332d,	// (0x00098493) list_cale_time_pane

0x9fcc,	// (0x0009f132) list_cale_time_pane_g1_ParamLimits

0x9fcc,	// (0x0009f132) list_cale_time_pane_g1

0x9fd8,	// (0x0009f13e) list_cale_time_pane_g2_ParamLimits

0x9fd8,	// (0x0009f13e) list_cale_time_pane_g2

0x334f,	// (0x000984b5) list_cale_time_pane_g3_ParamLimits

0x334f,	// (0x000984b5) list_cale_time_pane_g3

0x335d,	// (0x000984c3) list_cale_time_pane_g4_ParamLimits

0x335d,	// (0x000984c3) list_cale_time_pane_g4

0x336b,	// (0x000984d1) list_cale_time_pane_g5_ParamLimits

0x336b,	// (0x000984d1) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x000a4453) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x000a4453) list_cale_time_pane_g

0x9ff2,	// (0x0009f158) list_cale_time_pane_t1_ParamLimits

0x9ff2,	// (0x0009f158) list_cale_time_pane_t1

0xa01a,	// (0x0009f180) list_cale_time_pane_t2_ParamLimits

0xa01a,	// (0x0009f180) list_cale_time_pane_t2

0x370d,	// (0x00098873) aid_blid_cardinal_pane

0x374f,	// (0x000988b5) compass_pane_t4

0xa042,	// (0x0009f1a8) list_cale_time_pane_t4_ParamLimits

0xa042,	// (0x0009f1a8) list_cale_time_pane_t4

0x375d,	// (0x000988c3) compass_pane_t5

0x376d,	// (0x000988d3) compass_pane_t6

0x377b,	// (0x000988e1) compass_pane_t7

0xa4f3,	// (0x0009f659) navi_pane_cc_t1

0xa6d0,	// (0x0009f836) aid_phob_thumbnail_center_pane

0x3e46,	// (0x00098fac) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x000a4460) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x000a4460) list_cale_time_pane_t

0xe724,	// (0x000a388a) bg_popup_window_pane_cp02_ParamLimits

0xe724,	// (0x000a388a) bg_popup_window_pane_cp02

0xa06a,	// (0x0009f1d0) heading_pane_cp01_ParamLimits

0xa06a,	// (0x0009f1d0) heading_pane_cp01

0xa076,	// (0x0009f1dc) loc_req_pane_ParamLimits

0xa076,	// (0x0009f1dc) loc_req_pane

0xa086,	// (0x0009f1ec) loc_type_pane_ParamLimits

0xa086,	// (0x0009f1ec) loc_type_pane

0xa098,	// (0x0009f1fe) loc_type_pane_t1_ParamLimits

0xa098,	// (0x0009f1fe) loc_type_pane_t1

0xa0aa,	// (0x0009f210) loc_type_pane_t2_ParamLimits

0xa0aa,	// (0x0009f210) loc_type_pane_t2

0xa0bc,	// (0x0009f222) loc_type_pane_t3_ParamLimits

0xa0bc,	// (0x0009f222) loc_type_pane_t3

0x0002,

0xf301,	// (0x000a4467) loc_type_pane_t_ParamLimits

0xf301,	// (0x000a4467) loc_type_pane_t

0xa0ce,	// (0x0009f234) list_loc_req_pane

0xa0d8,	// (0x0009f23e) scroll_pane_cp012

0x3379,	// (0x000984df) list_single_loc_request_popup_menu_pane_ParamLimits

0x3379,	// (0x000984df) list_single_loc_request_popup_menu_pane

0xa0e3,	// (0x0009f249) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa0e3,	// (0x0009f249) list_single_loc_request_popup_menu_pane_g1

0xa0ef,	// (0x0009f255) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa0ef,	// (0x0009f255) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x000a446e) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x000a446e) list_single_loc_request_popup_menu_pane_g

0xa0fb,	// (0x0009f261) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa0fb,	// (0x0009f261) list_single_loc_request_popup_menu_pane_t1

0x338b,	// (0x000984f1) bg_popup_window_pane_cp03_ParamLimits

0x338b,	// (0x000984f1) bg_popup_window_pane_cp03

0x3399,	// (0x000984ff) heading_loc_req_pane_ParamLimits

0x3399,	// (0x000984ff) heading_loc_req_pane

0x33a5,	// (0x0009850b) popup_dyc_status_message_window_g1_ParamLimits

0x33a5,	// (0x0009850b) popup_dyc_status_message_window_g1

0x33b1,	// (0x00098517) popup_dyc_status_message_window_t1_ParamLimits

0x33b1,	// (0x00098517) popup_dyc_status_message_window_t1

0x33c3,	// (0x00098529) popup_dyc_status_message_window_t2_ParamLimits

0x33c3,	// (0x00098529) popup_dyc_status_message_window_t2

0x33d5,	// (0x0009853b) popup_dyc_status_message_window_t3_ParamLimits

0x33d5,	// (0x0009853b) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x000a4473) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x000a4473) popup_dyc_status_message_window_t

0xeb44,	// (0x000a3caa) bg_heading_pane_cp01

0xa111,	// (0x0009f277) heading_loc_req_pane_g1

0xa119,	// (0x0009f27f) heading_loc_req_pane_g2

0xa121,	// (0x0009f287) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x000a447a) heading_loc_req_pane_g

0xa129,	// (0x0009f28f) heading_loc_req_pane_t1

0xa138,	// (0x0009f29e) bg_popup_sub_pane_cp01_ParamLimits

0xa138,	// (0x0009f29e) bg_popup_sub_pane_cp01

0xa146,	// (0x0009f2ac) popup_cale_events_window_g1_ParamLimits

0xa146,	// (0x0009f2ac) popup_cale_events_window_g1

0xa166,	// (0x0009f2cc) popup_cale_events_window_g2_ParamLimits

0xa166,	// (0x0009f2cc) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x000a44ae) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x000a44ae) popup_cale_events_window_g

0xa186,	// (0x0009f2ec) popup_cale_events_window_t1_ParamLimits

0xa186,	// (0x0009f2ec) popup_cale_events_window_t1

0xa198,	// (0x0009f2fe) popup_cale_events_window_t2_ParamLimits

0xa198,	// (0x0009f2fe) popup_cale_events_window_t2

0xa1d6,	// (0x0009f33c) popup_cale_events_window_t3_ParamLimits

0xa1d6,	// (0x0009f33c) popup_cale_events_window_t3

0xa210,	// (0x0009f376) popup_cale_events_window_t4_ParamLimits

0xa210,	// (0x0009f376) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x000a44b3) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x000a44b3) popup_cale_events_window_t

0x34da,	// (0x00098640) call_type_pane

0xa246,	// (0x0009f3ac) popup_call_status_window_g1

0x34e6,	// (0x0009864c) popup_call_status_window_g2

0x34f2,	// (0x00098658) popup_call_status_window_g3

0x0002,

0xf356,	// (0x000a44bc) popup_call_status_window_g

0xa254,	// (0x0009f3ba) call_type_pane_g1

0xa25d,	// (0x0009f3c3) call_type_pane_g2

0x0001,

0xf35d,	// (0x000a44c3) call_type_pane_g

0xeb44,	// (0x000a3caa) bg_popup_sub_pane_cp02

0xa266,	// (0x0009f3cc) listscroll_popup_wml_pane

0xa26e,	// (0x0009f3d4) list_wml_pane

0xa278,	// (0x0009f3de) scroll_pane_cp013

0xa283,	// (0x0009f3e9) list_single_graphic_popup_wml_pane_ParamLimits

0xa283,	// (0x0009f3e9) list_single_graphic_popup_wml_pane

0xeeb9,	// (0x000a401f) list_single_graphic_popup_wml_pane_g1

0xa297,	// (0x0009f3fd) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x000a44c8) list_single_graphic_popup_wml_pane_g

0xa29f,	// (0x0009f405) list_single_graphic_popup_wml_pane_t1

0xa2b5,	// (0x0009f41b) aid_call_pane

0xed97,	// (0x000a3efd) popup_clock_analogue_window_g1

0xed97,	// (0x000a3efd) popup_clock_analogue_window_g2

0x34fe,	// (0x00098664) popup_clock_analogue_window_g3

0x34fe,	// (0x00098664) popup_clock_analogue_window_g4

0xeeb9,	// (0x000a401f) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x000a44cd) popup_clock_analogue_window_g

0x3506,	// (0x0009866c) popup_clock_analogue_window_t1

0x3514,	// (0x0009867a) clock_digital_number_pane_ParamLimits

0x3514,	// (0x0009867a) clock_digital_number_pane

0x3520,	// (0x00098686) clock_digital_number_pane_cp02_ParamLimits

0x3520,	// (0x00098686) clock_digital_number_pane_cp02

0x352c,	// (0x00098692) clock_digital_number_pane_cp03_ParamLimits

0x352c,	// (0x00098692) clock_digital_number_pane_cp03

0x3538,	// (0x0009869e) clock_digital_number_pane_cp04_ParamLimits

0x3538,	// (0x0009869e) clock_digital_number_pane_cp04

0x3548,	// (0x000986ae) clock_digital_separator_pane_ParamLimits

0x3548,	// (0x000986ae) clock_digital_separator_pane

0x3554,	// (0x000986ba) popup_clock_digital_window_t1

0xeeb9,	// (0x000a401f) clock_digital_number_pane_g1

0xeeb9,	// (0x000a401f) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x000a443b) clock_digital_number_pane_g

0xeeb9,	// (0x000a401f) clock_digital_separator_pane_g1

0xeeb9,	// (0x000a401f) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x000a443b) clock_digital_separator_pane_g

0xeb44,	// (0x000a3caa) bg_popup_window_pane_cp04

0xa2bd,	// (0x0009f423) heading_pane_cp03

0xa2c5,	// (0x0009f42b) listscroll_popup_gms_pane

0xa2cd,	// (0x0009f433) grid_large_graphic_popup_pane

0xa2d7,	// (0x0009f43d) listscroll_popup_gms_pane_g1

0xa2df,	// (0x0009f445) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x000a44d8) listscroll_popup_gms_pane_g

0x9d72,	// (0x0009eed8) scroll_pane_cp014

0x3571,	// (0x000986d7) cell_large_graphic_popup_pane_ParamLimits

0x3571,	// (0x000986d7) cell_large_graphic_popup_pane

0x3589,	// (0x000986ef) cell_large_graphic_popup_pane_g1_ParamLimits

0x3589,	// (0x000986ef) cell_large_graphic_popup_pane_g1

0xa2e7,	// (0x0009f44d) cell_large_graphic_popup_pane_g2_ParamLimits

0xa2e7,	// (0x0009f44d) cell_large_graphic_popup_pane_g2

0xa2f3,	// (0x0009f459) cell_large_graphic_popup_pane_g3_ParamLimits

0xa2f3,	// (0x0009f459) cell_large_graphic_popup_pane_g3

0xa300,	// (0x0009f466) cell_large_graphic_popup_pane_g4_ParamLimits

0xa300,	// (0x0009f466) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x000a44dd) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x000a44dd) cell_large_graphic_popup_pane_g

0xa310,	// (0x0009f476) grid_highlight_pane_cp010

0xeeb9,	// (0x000a401f) bg_popup_call_pane_g1

0xa31a,	// (0x0009f480) list_single_graphic_popup_conf_pane_ParamLimits

0xa31a,	// (0x0009f480) list_single_graphic_popup_conf_pane

0xa32d,	// (0x0009f493) list_highlight_pane_cp01

0xa336,	// (0x0009f49c) list_single_graphic_popup_conf_pane_g1

0xa33e,	// (0x0009f4a4) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x000a44e6) list_single_graphic_popup_conf_pane_g

0xa346,	// (0x0009f4ac) list_single_graphic_popup_conf_pane_t1

0xa354,	// (0x0009f4ba) linegrid_cams_pane_g1

0x3595,	// (0x000986fb) linegrid_cams_pane_g2

0xf00f,	// (0x000a4175) linegrid_cams_pane_g3

0xa35d,	// (0x0009f4c3) linegrid_cams_pane_g4

0x359e,	// (0x00098704) linegrid_cams_pane_g5

0x35a7,	// (0x0009870d) linegrid_cams_pane_g6

0xf018,	// (0x000a417e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x000a44eb) linegrid_cams_pane_g

0xa366,	// (0x0009f4cc) popup_clock_analogue_window

0xa366,	// (0x0009f4cc) popup_clock_digital_window

0xeb44,	// (0x000a3caa) popup_phob_thumbnail_window

0xeeb9,	// (0x000a401f) call_video_uplink_pane_g1

0xa36f,	// (0x0009f4d5) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x000a44fa) call_video_uplink_pane_g

0xa377,	// (0x0009f4dd) video_uplink_pane

0xa37f,	// (0x0009f4e5) mce_image_pane_g1

0x35b0,	// (0x00098716) mce_image_pane_g2

0x35ba,	// (0x00098720) mce_image_pane_g3

0x35c2,	// (0x00098728) mce_image_pane_g4

0x35ca,	// (0x00098730) mce_image_pane_g5

0x0004,

0xf399,	// (0x000a44ff) mce_image_pane_g

0xa389,	// (0x0009f4ef) control_top_pane_stacon_cp01_ParamLimits

0xa389,	// (0x0009f4ef) control_top_pane_stacon_cp01

0xa39d,	// (0x0009f503) uni_indicator_pane_stacon_cp01_ParamLimits

0xa39d,	// (0x0009f503) uni_indicator_pane_stacon_cp01

0xa3ae,	// (0x0009f514) bg_popup_sub_pane_cp03

0xa3b8,	// (0x0009f51e) chi_dic_find_pane

0x35d2,	// (0x00098738) listscroll_chi_dic_pane

0xa3c0,	// (0x0009f526) main_pane_chidic_g1

0xa3c8,	// (0x0009f52e) chi_dic_find_pane_t1

0xa3d6,	// (0x0009f53c) find_chidic_pane

0xa3df,	// (0x0009f545) chi_dic_list_pane_ParamLimits

0xa3df,	// (0x0009f545) chi_dic_list_pane

0xa3f0,	// (0x0009f556) scroll_pane_cp020

0xa3f8,	// (0x0009f55e) find_chidic_pane_t1

0xeb44,	// (0x000a3caa) input_focus_pane_cp06

0x35e6,	// (0x0009874c) list_chi_dic_pane_ParamLimits

0x35e6,	// (0x0009874c) list_chi_dic_pane

0x3600,	// (0x00098766) list_chi_dic_pane_t1_ParamLimits

0x3600,	// (0x00098766) list_chi_dic_pane_t1

0xeb44,	// (0x000a3caa) list_highlight_pane_cp020

0xa407,	// (0x0009f56d) bg_cale_heading_pane_g1

0x3613,	// (0x00098779) bg_cale_heading_pane_g2

0x361b,	// (0x00098781) bg_cale_heading_pane_g3

0x3623,	// (0x00098789) bg_cale_heading_pane_g4

0x362d,	// (0x00098793) bg_cale_heading_pane_g5

0x3637,	// (0x0009879d) bg_cale_heading_pane_g6

0x363f,	// (0x000987a5) bg_cale_heading_pane_g7

0x3647,	// (0x000987ad) bg_cale_heading_pane_g8

0x3651,	// (0x000987b7) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x000a450a) bg_cale_heading_pane_g

0xa407,	// (0x0009f56d) bg_cale_side_pane_g1

0x365b,	// (0x000987c1) bg_cale_side_pane_g2

0x3665,	// (0x000987cb) bg_cale_side_pane_g3

0x366f,	// (0x000987d5) bg_cale_side_pane_g4

0x3679,	// (0x000987df) bg_cale_side_pane_g5

0x3683,	// (0x000987e9) bg_cale_side_pane_g6

0x368d,	// (0x000987f3) bg_cale_side_pane_g7

0x3697,	// (0x000987fd) bg_cale_side_pane_g8

0x369f,	// (0x00098805) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x000a451d) bg_cale_side_pane_g

0x36a7,	// (0x0009880d) popup_call_status_window_ParamLimits

0x36a7,	// (0x0009880d) popup_call_status_window

0xa40f,	// (0x0009f575) stacon_top_pane

0xa417,	// (0x0009f57d) status_pane_ParamLimits

0xa417,	// (0x0009f57d) status_pane

0xa42c,	// (0x0009f592) status_small_pane

0xa434,	// (0x0009f59a) control_pane

0xeb44,	// (0x000a3caa) stacon_bottom_pane

0xa43c,	// (0x0009f5a2) list_single_mce_smart_pane_t1_ParamLimits

0xa43c,	// (0x0009f5a2) list_single_mce_smart_pane_t1

0xa44f,	// (0x0009f5b5) list_single_mce_smart_pane_t2_ParamLimits

0xa44f,	// (0x0009f5b5) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x000a4530) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x000a4530) list_single_mce_smart_pane_t

0x36b3,	// (0x00098819) compass_pane

0x36bf,	// (0x00098825) main_location2_pane_t1

0x36d3,	// (0x00098839) main_location2_pane_t2

0x36e7,	// (0x0009884d) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x000a4535) main_location2_pane_t

0xa46e,	// (0x0009f5d4) compass_pane_g1_ParamLimits

0xa46e,	// (0x0009f5d4) compass_pane_g1

0x3731,	// (0x00098897) compass_pane_t1

0x3740,	// (0x000988a6) compass_pane_t2

0x0005,

0xf3d8,	// (0x000a453e) compass_pane_t

0x378b,	// (0x000988f1) text_secondary_cp61

0xa4ea,	// (0x0009f650) navi_pane_cams_g5

0xa566,	// (0x0009f6cc) navi_pane_im_t1

0xa574,	// (0x0009f6da) navi_pane_mp_g1_ParamLimits

0xa574,	// (0x0009f6da) navi_pane_mp_g1

0xa588,	// (0x0009f6ee) navi_pane_mp_g2_ParamLimits

0xa588,	// (0x0009f6ee) navi_pane_mp_g2

0xa594,	// (0x0009f6fa) navi_pane_mp_g3_ParamLimits

0xa594,	// (0x0009f6fa) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x000a4552) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x000a4552) navi_pane_mp_g

0xa5a0,	// (0x0009f706) navi_pane_mp_t1

0xa5ae,	// (0x0009f714) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x000a4559) navi_pane_mp_t

0xa619,	// (0x0009f77f) navi_pane_vt_g1

0xa5a0,	// (0x0009f706) navi_pane_vt_t1

0xa621,	// (0x0009f787) navi_slider_pane

0xf029,	// (0x000a418f) zooming_pane

0xa631,	// (0x0009f797) navi_slider_pane_g1

0x37c6,	// (0x0009892c) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x000a4560) navi_slider_pane_g

0xa655,	// (0x0009f7bb) aid_levels_zoom

0xa65d,	// (0x0009f7c3) zooming_pane_g1

0xa665,	// (0x0009f7cb) zooming_pane_g2

0xa665,	// (0x0009f7cb) zooming_pane_g3

0x0002,

0xf409,	// (0x000a456f) zooming_pane_g

0xa66d,	// (0x0009f7d3) level_10_zoom

0xa676,	// (0x0009f7dc) level_11_zoom

0xa67f,	// (0x0009f7e5) level_1_zoom

0xa688,	// (0x0009f7ee) level_2_zoom

0xa691,	// (0x0009f7f7) level_3_zoom

0xa69a,	// (0x0009f800) level_4_zoom

0xa6a3,	// (0x0009f809) level_5_zoom

0xa6ac,	// (0x0009f812) level_6_zoom

0xa6b5,	// (0x0009f81b) level_7_zoom

0xa6be,	// (0x0009f824) level_8_zoom

0xa6c7,	// (0x0009f82d) level_9_zoom

0xa6d8,	// (0x0009f83e) popup_phob_thumbnail_window_g1

0xa6e0,	// (0x0009f846) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x000a4576) popup_phob_thumbnail_window_g

0xb9d1,	// (0x000a0b37) level_1_location

0xb9d9,	// (0x000a0b3f) level_2_location

0xb9e1,	// (0x000a0b47) level_3_location

0xb9e9,	// (0x000a0b4f) level_4_location

0xf029,	// (0x000a418f) level_5_location

0x37d8,	// (0x0009893e) mce_icon_pane_g1

0x37e0,	// (0x00098946) mce_icon_pane_g2

0x0001,

0xf415,	// (0x000a457b) mce_icon_pane_g

0x37e8,	// (0x0009894e) main_mup_pane_g1_ParamLimits

0x37e8,	// (0x0009894e) main_mup_pane_g1

0x3800,	// (0x00098966) main_mup_pane_g2_ParamLimits

0x3800,	// (0x00098966) main_mup_pane_g2

0x381c,	// (0x00098982) main_mup_pane_g3_ParamLimits

0x381c,	// (0x00098982) main_mup_pane_g3

0x3838,	// (0x0009899e) main_mup_pane_g4_ParamLimits

0x3838,	// (0x0009899e) main_mup_pane_g4

0x3854,	// (0x000989ba) main_mup_pane_g5_ParamLimits

0x3854,	// (0x000989ba) main_mup_pane_g5

0x3875,	// (0x000989db) main_mup_pane_g6_ParamLimits

0x3875,	// (0x000989db) main_mup_pane_g6

0x3891,	// (0x000989f7) main_mup_pane_g7_ParamLimits

0x3891,	// (0x000989f7) main_mup_pane_g7

0x38ad,	// (0x00098a13) main_mup_pane_g8_ParamLimits

0x38ad,	// (0x00098a13) main_mup_pane_g8

0x38cd,	// (0x00098a33) main_mup_pane_g9_ParamLimits

0x38cd,	// (0x00098a33) main_mup_pane_g9

0x38ec,	// (0x00098a52) main_mup_pane_g10_ParamLimits

0x38ec,	// (0x00098a52) main_mup_pane_g10

0x390b,	// (0x00098a71) main_mup_pane_g11_ParamLimits

0x390b,	// (0x00098a71) main_mup_pane_g11

0x3923,	// (0x00098a89) main_mup_pane_g12_ParamLimits

0x3923,	// (0x00098a89) main_mup_pane_g12

0x3931,	// (0x00098a97) main_mup_pane_g13_ParamLimits

0x3931,	// (0x00098a97) main_mup_pane_g13

0x000c,

0xf41a,	// (0x000a4580) main_mup_pane_g_ParamLimits

0xf41a,	// (0x000a4580) main_mup_pane_g

0x3947,	// (0x00098aad) main_mup_pane_t1_ParamLimits

0x3947,	// (0x00098aad) main_mup_pane_t1

0x3964,	// (0x00098aca) main_mup_pane_t2_ParamLimits

0x3964,	// (0x00098aca) main_mup_pane_t2

0x397e,	// (0x00098ae4) main_mup_pane_t3_ParamLimits

0x397e,	// (0x00098ae4) main_mup_pane_t3

0x3998,	// (0x00098afe) main_mup_pane_t4_ParamLimits

0x3998,	// (0x00098afe) main_mup_pane_t4

0x39aa,	// (0x00098b10) main_mup_pane_t5_ParamLimits

0x39aa,	// (0x00098b10) main_mup_pane_t5

0x39bc,	// (0x00098b22) main_mup_pane_t6_ParamLimits

0x39bc,	// (0x00098b22) main_mup_pane_t6

0x0005,

0xf435,	// (0x000a459b) main_mup_pane_t_ParamLimits

0xf435,	// (0x000a459b) main_mup_pane_t

0x39d2,	// (0x00098b38) mup_progress_pane_ParamLimits

0x39d2,	// (0x00098b38) mup_progress_pane

0x39de,	// (0x00098b44) mup_visualizer_pane_ParamLimits

0x39de,	// (0x00098b44) mup_visualizer_pane

0x3a18,	// (0x00098b7e) mup_volume_pane_ParamLimits

0x3a18,	// (0x00098b7e) mup_volume_pane

0xa246,	// (0x0009f3ac) mup_visualizer_pane_g1_ParamLimits

0xa246,	// (0x0009f3ac) mup_visualizer_pane_g1

0xa246,	// (0x0009f3ac) mup_visualizer_pane_g2_ParamLimits

0xa246,	// (0x0009f3ac) mup_visualizer_pane_g2

0xa46e,	// (0x0009f5d4) mup_visualizer_pane_g3_ParamLimits

0xa46e,	// (0x0009f5d4) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x000a45a8) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x000a45a8) mup_visualizer_pane_g

0xeeb9,	// (0x000a401f) mup_volume_pane_g1

0xa6f0,	// (0x0009f856) mup_volume_pane_g2

0x0001,

0xf449,	// (0x000a45af) mup_volume_pane_g

0xeeb9,	// (0x000a401f) mup_progress_pane_g1

0xa6f9,	// (0x0009f85f) mup_progress_pane_g2

0xa702,	// (0x0009f868) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x000a45b4) mup_progress_pane_g

0xeb44,	// (0x000a3caa) bg_popup_window_pane_cp05

0xa70b,	// (0x0009f871) heading_pane_cp02_ParamLimits

0xa70b,	// (0x0009f871) heading_pane_cp02

0xa725,	// (0x0009f88b) list_popup_blid_pane

0xa72d,	// (0x0009f893) list_blid_sat_info_pane_ParamLimits

0xa72d,	// (0x0009f893) list_blid_sat_info_pane

0xa740,	// (0x0009f8a6) list_blid_sat_info_pane_g1

0xa748,	// (0x0009f8ae) list_blid_sat_info_pane_t1

0x3b25,	// (0x00098c8b) mup_equalizer_pane_ParamLimits

0x3b25,	// (0x00098c8b) mup_equalizer_pane

0x3b46,	// (0x00098cac) mup_equalizer_pane_cp1_ParamLimits

0x3b46,	// (0x00098cac) mup_equalizer_pane_cp1

0x3b67,	// (0x00098ccd) mup_equalizer_pane_cp2_ParamLimits

0x3b67,	// (0x00098ccd) mup_equalizer_pane_cp2

0x3b88,	// (0x00098cee) mup_equalizer_pane_cp3_ParamLimits

0x3b88,	// (0x00098cee) mup_equalizer_pane_cp3

0x3ba9,	// (0x00098d0f) mup_equalizer_pane_cp4_ParamLimits

0x3ba9,	// (0x00098d0f) mup_equalizer_pane_cp4

0x3bca,	// (0x00098d30) mup_equalizer_pane_cp5

0x3be0,	// (0x00098d46) mup_equalizer_pane_cp6

0x3bf8,	// (0x00098d5e) mup_equalizer_pane_cp7

0xb8ef,	// (0x000a0a55) bg_popup_call_poc_act_pane_g9

0xb8f7,	// (0x000a0a5d) bg_popup_call_poc_act_pane_g10

0xb8ff,	// (0x000a0a65) bg_popup_call_poc_act_pane_g11

0x000a,

0xed9f,	// (0x000a3f05) mup_scale_pane

0xeeb9,	// (0x000a401f) mup_scale_pane_g1

0xa756,	// (0x0009f8bc) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x000a45d0) mup_scale_pane_g

0xa77a,	// (0x0009f8e0) msg_data_pane

0xa782,	// (0x0009f8e8) scroll_pane_cp017

0x3c22,	// (0x00098d88) bg_list_pane_cp04_ParamLimits

0x3c22,	// (0x00098d88) bg_list_pane_cp04

0xa78a,	// (0x0009f8f0) msg_data_pane_g1

0x3c48,	// (0x00098dae) msg_data_pane_g2

0x3c52,	// (0x00098db8) msg_data_pane_g3

0x3c5a,	// (0x00098dc0) msg_data_pane_g4

0x3c62,	// (0x00098dc8) msg_data_pane_g5

0x3c6a,	// (0x00098dd0) msg_data_pane_g6

0x3c72,	// (0x00098dd8) msg_data_pane_g7

0x0006,

0xf479,	// (0x000a45df) msg_data_pane_g

0x3c7a,	// (0x00098de0) msg_text_pane_ParamLimits

0x3c7a,	// (0x00098de0) msg_text_pane

0x3cb1,	// (0x00098e17) qrid_highlight_pane_cp011_ParamLimits

0x3cb1,	// (0x00098e17) qrid_highlight_pane_cp011

0xeb44,	// (0x000a3caa) msg_body_pane

0xeb44,	// (0x000a3caa) msg_header_pane

0xa79b,	// (0x0009f901) input_focus_pane_cp07

0x3cd7,	// (0x00098e3d) msg_header_pane_t1_ParamLimits

0x3cd7,	// (0x00098e3d) msg_header_pane_t1

0x3ce9,	// (0x00098e4f) msg_header_pane_t2_ParamLimits

0x3ce9,	// (0x00098e4f) msg_header_pane_t2

0x0001,

0xf48d,	// (0x000a45f3) msg_header_pane_t_ParamLimits

0xf48d,	// (0x000a45f3) msg_header_pane_t

0xa7b0,	// (0x0009f916) msg_body_pane_g1

0x3cfb,	// (0x00098e61) msg_body_pane_t1_ParamLimits

0x3cfb,	// (0x00098e61) msg_body_pane_t1

0x3d2c,	// (0x00098e92) msg_body_pane_t2_ParamLimits

0x3d2c,	// (0x00098e92) msg_body_pane_t2

0x3d3e,	// (0x00098ea4) msg_body_pane_t3_ParamLimits

0x3d3e,	// (0x00098ea4) msg_body_pane_t3

0x0002,

0xf492,	// (0x000a45f8) msg_body_pane_t_ParamLimits

0xf492,	// (0x000a45f8) msg_body_pane_t

0x3da2,	// (0x00098f08) main_viewer_pane_g1_ParamLimits

0x3da2,	// (0x00098f08) main_viewer_pane_g1

0x3dae,	// (0x00098f14) main_viewer_pane_g2_ParamLimits

0x3dae,	// (0x00098f14) main_viewer_pane_g2

0x3dba,	// (0x00098f20) main_viewer_pane_g3_ParamLimits

0x3dba,	// (0x00098f20) main_viewer_pane_g3

0x3dcb,	// (0x00098f31) main_viewer_pane_g4_ParamLimits

0x3dcb,	// (0x00098f31) main_viewer_pane_g4

0x3ddc,	// (0x00098f42) main_viewer_pane_g5_ParamLimits

0x3ddc,	// (0x00098f42) main_viewer_pane_g5

0x3ddc,	// (0x00098f42) main_viewer_pane_g7_ParamLimits

0x3ddc,	// (0x00098f42) main_viewer_pane_g7

0xa0e3,	// (0x0009f249) main_viewer_pane_g8_ParamLimits

0xa0e3,	// (0x0009f249) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x000a4608) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x000a4608) main_viewer_pane_g

0xa7b8,	// (0x0009f91e) viewer_content_pane_ParamLimits

0xa7b8,	// (0x0009f91e) viewer_content_pane

0x3e1a,	// (0x00098f80) main_postcard_pane_g1_ParamLimits

0x3e1a,	// (0x00098f80) main_postcard_pane_g1

0x3e28,	// (0x00098f8e) main_postcard_pane_g2_ParamLimits

0x3e28,	// (0x00098f8e) main_postcard_pane_g2

0x3e36,	// (0x00098f9c) main_postcard_pane_g3_ParamLimits

0x3e36,	// (0x00098f9c) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x000a4619) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x000a4619) main_postcard_pane_g

0x3e46,	// (0x00098fac) main_postcard_pane_g4

0xbad1,	// (0x000a0c37) smil_status_volume_pane_g2

0x3e72,	// (0x00098fd8) postcard_pane_ParamLimits

0x3e72,	// (0x00098fd8) postcard_pane

0xa246,	// (0x0009f3ac) postcard_pane_g1_ParamLimits

0xa246,	// (0x0009f3ac) postcard_pane_g1

0x3ea4,	// (0x0009900a) postcard_pane_g2_ParamLimits

0x3ea4,	// (0x0009900a) postcard_pane_g2

0x3eb0,	// (0x00099016) postcard_pane_g3_ParamLimits

0x3eb0,	// (0x00099016) postcard_pane_g3

0xa7c6,	// (0x0009f92c) postcard_pane_g4_ParamLimits

0xa7c6,	// (0x0009f92c) postcard_pane_g4

0x3ebc,	// (0x00099022) postcard_pane_g5_ParamLimits

0x3ebc,	// (0x00099022) postcard_pane_g5

0x3ec8,	// (0x0009902e) postcard_pane_g6_ParamLimits

0x3ec8,	// (0x0009902e) postcard_pane_g6

0xa7d4,	// (0x0009f93a) postcard_pane_g7_ParamLimits

0xa7d4,	// (0x0009f93a) postcard_pane_g7

0x0006,

0xf4c0,	// (0x000a4626) postcard_pane_g_ParamLimits

0xf4c0,	// (0x000a4626) postcard_pane_g

0x3ed4,	// (0x0009903a) main_mp2_pane_g1_ParamLimits

0x3ed4,	// (0x0009903a) main_mp2_pane_g1

0x3ee0,	// (0x00099046) main_mp2_pane_g2_ParamLimits

0x3ee0,	// (0x00099046) main_mp2_pane_g2

0x3eec,	// (0x00099052) main_mp2_pane_g3_ParamLimits

0x3eec,	// (0x00099052) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x000a4635) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x000a4635) main_mp2_pane_g

0x3ef8,	// (0x0009905e) main_mp2_pane_t1_ParamLimits

0x3ef8,	// (0x0009905e) main_mp2_pane_t1

0x3f0f,	// (0x00099075) main_mp2_pane_t2_ParamLimits

0x3f0f,	// (0x00099075) main_mp2_pane_t2

0x3f23,	// (0x00099089) main_mp2_pane_t3_ParamLimits

0x3f23,	// (0x00099089) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x000a463c) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x000a463c) main_mp2_pane_t

0xa7e2,	// (0x0009f948) pec_content_pane_ParamLimits

0xa7e2,	// (0x0009f948) pec_content_pane

0x9d72,	// (0x0009eed8) scroll_pane_cp015

0xa7f4,	// (0x0009f95a) pec_attribute_pane_ParamLimits

0xa7f4,	// (0x0009f95a) pec_attribute_pane

0x3f35,	// (0x0009909b) pec_content_pane_g1_ParamLimits

0x3f35,	// (0x0009909b) pec_content_pane_g1

0xa804,	// (0x0009f96a) pec_content_pane_t1_ParamLimits

0xa804,	// (0x0009f96a) pec_content_pane_t1

0xa816,	// (0x0009f97c) pec_content_pane_t2_ParamLimits

0xa816,	// (0x0009f97c) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x000a4643) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x000a4643) pec_content_pane_t

0x3f41,	// (0x000990a7) list_single_graphic_pane_cp01_ParamLimits

0x3f41,	// (0x000990a7) list_single_graphic_pane_cp01

0xed9f,	// (0x000a3f05) bg_popup_sub_pane_cp04

0xa828,	// (0x0009f98e) popup_mup_playback_window_g1

0xa834,	// (0x0009f99a) popup_mup_playback_window_t1

0xa849,	// (0x0009f9af) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x000a4648) popup_mup_playback_window_t

0xa880,	// (0x0009f9e6) main_image_pane_g1_ParamLimits

0xa880,	// (0x0009f9e6) main_image_pane_g1

0xa8c3,	// (0x0009fa29) scroll_pane_cp018_ParamLimits

0xa8c3,	// (0x0009fa29) scroll_pane_cp018

0xa8db,	// (0x0009fa41) scroll_pane_cp016_ParamLimits

0xa8db,	// (0x0009fa41) scroll_pane_cp016

0x3fda,	// (0x00099140) smil2_image_pane_ParamLimits

0x3fda,	// (0x00099140) smil2_image_pane

0x400a,	// (0x00099170) smil2_root_pane_ParamLimits

0x400a,	// (0x00099170) smil2_root_pane

0x4036,	// (0x0009919c) smil2_text_pane_ParamLimits

0x4036,	// (0x0009919c) smil2_text_pane

0xeb44,	// (0x000a3caa) bg_list_pane_cp06

0xa917,	// (0x0009fa7d) grid_radio_pane

0xeb44,	// (0x000a3caa) bg_popup_window_pane_cp06

0xa91f,	// (0x0009fa85) main_fmradio_pane_t1

0xa2bd,	// (0x0009f423) heading_pane_cp04

0xa92d,	// (0x0009fa93) main_fmradio_pane_t2

0xb907,	// (0x000a0a6d) popup_cale_lunar_info_window_g1

0xa93b,	// (0x0009faa1) main_fmradio_pane_t3

0xb90f,	// (0x000a0a75) popup_cale_lunar_info_window_g2

0xa949,	// (0x0009faaf) main_fmradio_pane_t4

0x0001,

0xa957,	// (0x0009fabd) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x000a4723) popup_cale_lunar_info_window_g

0xf4f7,	// (0x000a465d) main_fmradio_pane_t

0xa965,	// (0x0009facb) wait_bar_pane_cp03

0xa96d,	// (0x0009fad3) cell_fmradio_pane_ParamLimits

0xa96d,	// (0x0009fad3) cell_fmradio_pane

0xa7d4,	// (0x0009f93a) cell_fmradio_pane_g1_ParamLimits

0xa7d4,	// (0x0009f93a) cell_fmradio_pane_g1

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp011

0xa980,	// (0x0009fae6) poc_content_pane_ParamLimits

0xa980,	// (0x0009fae6) poc_content_pane

0xa992,	// (0x0009faf8) scroll_pane_cp019

0x4076,	// (0x000991dc) popup_call_poc_act_window_ParamLimits

0x4076,	// (0x000991dc) popup_call_poc_act_window

0x4083,	// (0x000991e9) popup_call_poc_inact_window_ParamLimits

0x4083,	// (0x000991e9) popup_call_poc_inact_window

0xf594,	// (0x000a46fa) bg_popup_call_poc_act_pane_g

0xb86a,	// (0x000a09d0) bg_popup_call_poc_inact_pane_g1

0xb872,	// (0x000a09d8) bg_popup_call_poc_inact_pane_g2

0xa99a,	// (0x0009fb00) popup_call_poc_act_window_g2

0xb87a,	// (0x000a09e0) bg_popup_call_poc_inact_pane_g3

0xb882,	// (0x000a09e8) bg_popup_call_poc_inact_pane_g4

0xb88a,	// (0x000a09f0) bg_popup_call_poc_inact_pane_g5

0xa9a2,	// (0x0009fb08) popup_call_poc_act_window_t1_ParamLimits

0xa9a2,	// (0x0009fb08) popup_call_poc_act_window_t1

0xa9ca,	// (0x0009fb30) popup_call_poc_act_window_t2_ParamLimits

0xa9ca,	// (0x0009fb30) popup_call_poc_act_window_t2

0xa9f2,	// (0x0009fb58) popup_call_poc_act_window_t3_ParamLimits

0xa9f2,	// (0x0009fb58) popup_call_poc_act_window_t3

0xaa1a,	// (0x0009fb80) popup_call_poc_act_window_t4_ParamLimits

0xaa1a,	// (0x0009fb80) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x000a4668) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x000a4668) popup_call_poc_act_window_t

0xb892,	// (0x000a09f8) bg_popup_call_poc_inact_pane_g6

0xb89a,	// (0x000a0a00) bg_popup_call_poc_inact_pane_g7

0xb8a2,	// (0x000a0a08) bg_popup_call_poc_inact_pane_g8

0xaa2c,	// (0x0009fb92) popup_call_poc_inact_window_g2

0xb8aa,	// (0x000a0a10) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x000a46e7) bg_popup_call_poc_inact_pane_g

0xaa34,	// (0x0009fb9a) popup_call_poc_inact_window_t1_ParamLimits

0xaa34,	// (0x0009fb9a) popup_call_poc_inact_window_t1

0xaa49,	// (0x0009fbaf) popup_call_poc_inact_window_t2_ParamLimits

0xaa49,	// (0x0009fbaf) popup_call_poc_inact_window_t2

0xaa5e,	// (0x0009fbc4) popup_call_poc_inact_window_t3_ParamLimits

0xaa5e,	// (0x0009fbc4) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x000a4671) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x000a4671) popup_call_poc_inact_window_t

0xba44,	// (0x000a0baa) context_pane_ParamLimits

0x46c5,	// (0x0009982b) signal_pane_ParamLimits

0xf029,	// (0x000a418f) main_call2_pane

0x4638,	// (0x0009979e) popup_phob_thumbnail2_window_ParamLimits

0x4638,	// (0x0009979e) popup_phob_thumbnail2_window

0x3d50,	// (0x00098eb6) aid_hotspot_pointer_arrow_pane

0x3d58,	// (0x00098ebe) aid_hotspot_pointer_hand_pane

0x43a5,	// (0x0009950b) phob_pre_status_pane_g5

0x1dab,	// (0x00096f11) cams_zoom_pane_ParamLimits

0x1db7,	// (0x00096f1d) image_vga_pane_ParamLimits

0x1dc6,	// (0x00096f2c) main_camera_pane_g1_ParamLimits

0x1dd4,	// (0x00096f3a) main_camera_pane_g2_ParamLimits

0x1de0,	// (0x00096f46) main_camera_pane_g3_ParamLimits

0x1dec,	// (0x00096f52) main_camera_pane_g4_ParamLimits

0x1df8,	// (0x00096f5e) main_camera_pane_g5_ParamLimits

0x1e04,	// (0x00096f6a) main_camera_pane_g6_ParamLimits

0x1e10,	// (0x00096f76) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x000a4370) main_camera_pane_g_ParamLimits

0x1e1c,	// (0x00096f82) main_camera_pane_t1_ParamLimits

0x1e2e,	// (0x00096f94) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x000a4381) main_camera_pane_t_ParamLimits

0xed9f,	// (0x000a3f05) bg_popup_preview_window_pane_cp01_ParamLimits

0xed9f,	// (0x000a3f05) bg_popup_preview_window_pane_cp01

0xaa73,	// (0x0009fbd9) popup_phob_thumbnail2_window_g1_ParamLimits

0xaa73,	// (0x0009fbd9) popup_phob_thumbnail2_window_g1

0xeb44,	// (0x000a3caa) call2_cli_visual_pane

0x409f,	// (0x00099205) popup_call2_audio_conf_window_ParamLimits

0x409f,	// (0x00099205) popup_call2_audio_conf_window

0x40b4,	// (0x0009921a) popup_call2_audio_first_window_ParamLimits

0x40b4,	// (0x0009921a) popup_call2_audio_first_window

0x4152,	// (0x000992b8) popup_call2_audio_in_window_ParamLimits

0x4152,	// (0x000992b8) popup_call2_audio_in_window

0x4194,	// (0x000992fa) popup_call2_audio_out_window_ParamLimits

0x4194,	// (0x000992fa) popup_call2_audio_out_window

0x41f6,	// (0x0009935c) popup_call2_audio_second_window_ParamLimits

0x41f6,	// (0x0009935c) popup_call2_audio_second_window

0x4254,	// (0x000993ba) popup_call2_audio_wait_window_ParamLimits

0x4254,	// (0x000993ba) popup_call2_audio_wait_window

0xeb44,	// (0x000a3caa) bg_popup_call2_act_pane_cp03

0xed81,	// (0x000a3ee7) list_conf_pane_cp

0xaa7f,	// (0x0009fbe5) popup_call2_audio_conf_window_t1

0xa31a,	// (0x0009f480) list_single_graphic_popup_conf2_pane_ParamLimits

0xa31a,	// (0x0009f480) list_single_graphic_popup_conf2_pane

0xa32d,	// (0x0009f493) list_highlight_pane_cp04

0xaa8d,	// (0x0009fbf3) list_single_graphic_popup_conf2_pane_g1

0xa33e,	// (0x0009f4a4) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x000a4678) list_single_graphic_popup_conf2_pane_g

0xaa97,	// (0x0009fbfd) list_single_graphic_popup_conf2_pane_t1

0xaaa5,	// (0x0009fc0b) bg_popup_call2_act_pane_cp01_ParamLimits

0xaaa5,	// (0x0009fc0b) bg_popup_call2_act_pane_cp01

0xab2f,	// (0x0009fc95) call_type_pane_cp05_ParamLimits

0xab2f,	// (0x0009fc95) call_type_pane_cp05

0xab83,	// (0x0009fce9) popup_call2_audio_second_window_g1_ParamLimits

0xab83,	// (0x0009fce9) popup_call2_audio_second_window_g1

0xabd7,	// (0x0009fd3d) popup_call2_audio_second_window_g2_ParamLimits

0xabd7,	// (0x0009fd3d) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x000a467d) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x000a467d) popup_call2_audio_second_window_g

0xac3c,	// (0x0009fda2) popup_call2_audio_second_window_t1_ParamLimits

0xac3c,	// (0x0009fda2) popup_call2_audio_second_window_t1

0xacf7,	// (0x0009fe5d) popup_call2_audio_second_window_t2_ParamLimits

0xacf7,	// (0x0009fe5d) popup_call2_audio_second_window_t2

0xad4a,	// (0x0009feb0) popup_call2_audio_second_window_t3_ParamLimits

0xad4a,	// (0x0009feb0) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x000a4684) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x000a4684) popup_call2_audio_second_window_t

0xeb44,	// (0x000a3caa) bg_popup_call2_in_pane_cp02

0xeb4e,	// (0x000a3cb4) call_type_pane_cp04

0xeb56,	// (0x000a3cbc) popup_call2_audio_wait_window_g1

0xeb5e,	// (0x000a3cc4) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x000a425f) popup_call2_audio_wait_window_g

0xeb66,	// (0x000a3ccc) popup_call2_audio_wait_window_t3

0xae3d,	// (0x0009ffa3) bg_popup_call2_act_pane_ParamLimits

0xae3d,	// (0x0009ffa3) bg_popup_call2_act_pane

0xaefd,	// (0x000a0063) call_type_pane_cp03_ParamLimits

0xaefd,	// (0x000a0063) call_type_pane_cp03

0xaf61,	// (0x000a00c7) popup_call2_audio_first_window_g1_ParamLimits

0xaf61,	// (0x000a00c7) popup_call2_audio_first_window_g1

0xafd1,	// (0x000a0137) popup_call2_audio_first_window_g2_ParamLimits

0xafd1,	// (0x000a0137) popup_call2_audio_first_window_g2

0xa246,	// (0x0009f3ac) popup_call2_audio_first_window_g3_ParamLimits

0xa246,	// (0x0009f3ac) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x000a468d) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x000a468d) popup_call2_audio_first_window_g

0xb0af,	// (0x000a0215) popup_call2_audio_first_window_t1_ParamLimits

0xb0af,	// (0x000a0215) popup_call2_audio_first_window_t1

0xb1b2,	// (0x000a0318) popup_call2_audio_first_window_t4_ParamLimits

0xb1b2,	// (0x000a0318) popup_call2_audio_first_window_t4

0xb295,	// (0x000a03fb) popup_call2_audio_first_window_t5_ParamLimits

0xb295,	// (0x000a03fb) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x000a4698) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x000a4698) popup_call2_audio_first_window_t

0xed97,	// (0x000a3efd) bg_popup_call2_act_pane_g1

0xb917,	// (0x000a0a7d) popup_cale_lunar_info_window_t1

0xb925,	// (0x000a0a8b) popup_cale_lunar_info_window_t2

0xb933,	// (0x000a0a99) popup_cale_lunar_info_window_t3

0xeb44,	// (0x000a3caa) bg_popup_call2_bubble_pane

0xb396,	// (0x000a04fc) bg_popup_call2_in_pane_cp01_ParamLimits

0xb396,	// (0x000a04fc) bg_popup_call2_in_pane_cp01

0xe820,	// (0x000a3986) call_type_pane_cp02

0xb3de,	// (0x000a0544) popup_call2_audio_out_window_g1_ParamLimits

0xb3de,	// (0x000a0544) popup_call2_audio_out_window_g1

0xb40a,	// (0x000a0570) popup_call2_audio_out_window_g2_ParamLimits

0xb40a,	// (0x000a0570) popup_call2_audio_out_window_g2

0xb432,	// (0x000a0598) popup_call2_audio_out_window_g3_ParamLimits

0xb432,	// (0x000a0598) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x000a46a1) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x000a46a1) popup_call2_audio_out_window_g

0xb46d,	// (0x000a05d3) popup_call2_audio_out_window_t1_ParamLimits

0xb46d,	// (0x000a05d3) popup_call2_audio_out_window_t1

0xb4cc,	// (0x000a0632) popup_call2_audio_out_window_t2_ParamLimits

0xb4cc,	// (0x000a0632) popup_call2_audio_out_window_t2

0xb520,	// (0x000a0686) popup_call2_audio_out_window_t3_ParamLimits

0xb520,	// (0x000a0686) popup_call2_audio_out_window_t3

0xb536,	// (0x000a069c) popup_call2_audio_out_window_t4_ParamLimits

0xb536,	// (0x000a069c) popup_call2_audio_out_window_t4

0xb54c,	// (0x000a06b2) popup_call2_audio_out_window_t5_ParamLimits

0xb54c,	// (0x000a06b2) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x000a46aa) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x000a46aa) popup_call2_audio_out_window_t

0xb5b0,	// (0x000a0716) bg_popup_call2_in_pane_ParamLimits

0xb5b0,	// (0x000a0716) bg_popup_call2_in_pane

0xb60c,	// (0x000a0772) popup_call2_audio_in_window_g1_ParamLimits

0xb60c,	// (0x000a0772) popup_call2_audio_in_window_g1

0xb644,	// (0x000a07aa) popup_call2_audio_in_window_g2_ParamLimits

0xb644,	// (0x000a07aa) popup_call2_audio_in_window_g2

0xb67c,	// (0x000a07e2) popup_call2_audio_in_window_g3_ParamLimits

0xb67c,	// (0x000a07e2) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x000a46b7) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x000a46b7) popup_call2_audio_in_window_g

0xb6d4,	// (0x000a083a) popup_call2_audio_in_window_t1_ParamLimits

0xb6d4,	// (0x000a083a) popup_call2_audio_in_window_t1

0xb754,	// (0x000a08ba) popup_call2_audio_in_window_t2_ParamLimits

0xb754,	// (0x000a08ba) popup_call2_audio_in_window_t2

0xb7d4,	// (0x000a093a) popup_call2_audio_in_window_t3_ParamLimits

0xb7d4,	// (0x000a093a) popup_call2_audio_in_window_t3

0xb7ee,	// (0x000a0954) popup_call2_audio_in_window_t4_ParamLimits

0xb7ee,	// (0x000a0954) popup_call2_audio_in_window_t4

0xb800,	// (0x000a0966) popup_call2_audio_in_window_t5_ParamLimits

0xb800,	// (0x000a0966) popup_call2_audio_in_window_t5

0xb815,	// (0x000a097b) popup_call2_audio_in_window_t6_ParamLimits

0xb815,	// (0x000a097b) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x000a46c0) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x000a46c0) popup_call2_audio_in_window_t

0xed97,	// (0x000a3efd) bg_popup_call2_in_pane_g1

0xb941,	// (0x000a0aa7) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x000a4728) popup_cale_lunar_info_window_t

0xed9f,	// (0x000a3f05) bg_popup_call2_rect_pane_ParamLimits

0xed9f,	// (0x000a3f05) bg_popup_call2_rect_pane

0xeb44,	// (0x000a3caa) call2_cli_visual_graphic_pane

0xeb44,	// (0x000a3caa) call2_cli_visual_text_pane

0x476b,	// (0x000998d1) smil_status_volume_pane_g3

0x0002,

0xeeb9,	// (0x000a401f) call2_cli_visual_graphic_pane_g1

0xeeb9,	// (0x000a401f) call2_cli_visual_graphic_pane_g2

0xeeb9,	// (0x000a401f) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x000a46cd) call2_cli_visual_graphic_pane_g

0xb82a,	// (0x000a0990) bg_popup_call2_rect_pane_g1

0xef45,	// (0x000a40ab) bg_popup_call2_rect_pane_g2

0xb832,	// (0x000a0998) bg_popup_call2_rect_pane_g3

0xb83a,	// (0x000a09a0) bg_popup_call2_rect_pane_g4

0xb842,	// (0x000a09a8) bg_popup_call2_rect_pane_g5

0xb84a,	// (0x000a09b0) bg_popup_call2_rect_pane_g6

0xb852,	// (0x000a09b8) bg_popup_call2_rect_pane_g7

0xb85a,	// (0x000a09c0) bg_popup_call2_rect_pane_g8

0xb862,	// (0x000a09c8) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x000a46d4) bg_popup_call2_rect_pane_g

0xb86a,	// (0x000a09d0) bg_popup_call2_bubble_pane_g1

0xb872,	// (0x000a09d8) bg_popup_call2_bubble_pane_g2

0xb87a,	// (0x000a09e0) bg_popup_call2_bubble_pane_g3

0xb882,	// (0x000a09e8) bg_popup_call2_bubble_pane_g4

0xb88a,	// (0x000a09f0) bg_popup_call2_bubble_pane_g5

0xb892,	// (0x000a09f8) bg_popup_call2_bubble_pane_g6

0xb89a,	// (0x000a0a00) bg_popup_call2_bubble_pane_g7

0xb8a2,	// (0x000a0a08) bg_popup_call2_bubble_pane_g8

0xb8aa,	// (0x000a0a10) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x000a46e7) bg_popup_call2_bubble_pane_g

0x17dc,	// (0x00096942) aid_cale_week_size_cell_pane

0x1e40,	// (0x00096fa6) aid_cams_cif_uncrop_pane_ParamLimits

0x1e40,	// (0x00096fa6) aid_cams_cif_uncrop_pane

0x1f9b,	// (0x00097101) aid_cams_size_cell_ParamLimits

0x1f9b,	// (0x00097101) aid_cams_size_cell

0x1fa7,	// (0x0009710d) grid_cams_pane_ParamLimits

0x1fb5,	// (0x0009711b) linegrid_cams_pane_ParamLimits

0x2183,	// (0x000972e9) call_video_pane_t1

0x21a4,	// (0x0009730a) call_video_pane_t2

0x0001,

0xf26e,	// (0x000a43d4) call_video_pane_t

0x26eb,	// (0x00097851) aid_cale_month_size_cell_pane_ParamLimits

0x26eb,	// (0x00097851) aid_cale_month_size_cell_pane

0xf60b,	// (0x000a4771) smil_status_volume_pane_g

0x4778,	// (0x000998de) volume_smil_pane_ParamLimits

0x0f25,	// (0x0009608b) aid_popup2_width_pane

0x16d0,	// (0x00096836) cell_qdial_pane_g4_ParamLimits

0x16d0,	// (0x00096836) cell_qdial_pane_g4

0x370d,	// (0x00098873) aid_blid_cardinal_pane_ParamLimits

0x371d,	// (0x00098883) aid_blid_destination_pane_ParamLimits

0x371d,	// (0x00098883) aid_blid_destination_pane

0xed9f,	// (0x000a3f05) bg_popup_call_poc_act_pane_ParamLimits

0xed9f,	// (0x000a3f05) bg_popup_call_poc_act_pane

0xed9f,	// (0x000a3f05) bg_popup_call_poc_inact_pane_ParamLimits

0xed9f,	// (0x000a3f05) bg_popup_call_poc_inact_pane

0xb8b2,	// (0x000a0a18) bg_popup_call_poc_act_pane_g1

0xb8ba,	// (0x000a0a20) bg_popup_call_poc_act_pane_g2

0xb8d7,	// (0x000a0a3d) bg_popup_call_poc_act_pane_g3

0xb882,	// (0x000a09e8) bg_popup_call_poc_act_pane_g4

0xb88a,	// (0x000a09f0) bg_popup_call_poc_act_pane_g5

0xb8df,	// (0x000a0a45) bg_popup_call_poc_act_pane_g6

0xb89a,	// (0x000a0a00) bg_popup_call_poc_act_pane_g7

0xb8e7,	// (0x000a0a4d) bg_popup_call_poc_act_pane_g8

0xeb44,	// (0x000a3caa) main_usb_pane

0x4567,	// (0x000996cd) popup_cale_lunar_info_window

0x24cd,	// (0x00097633) im_reading_pane_t1_ParamLimits

0x9cca,	// (0x0009ee30) list_im_pane_ParamLimits

0x9cdb,	// (0x0009ee41) scroll_pane_cp07_ParamLimits

0xeb44,	// (0x000a3caa) grid_highlight_pane_cp012

0xed9f,	// (0x000a3f05) mup_scale_pane_ParamLimits

0xa246,	// (0x0009f3ac) main_usb_pane_g1_ParamLimits

0xa246,	// (0x0009f3ac) main_usb_pane_g1

0x42c8,	// (0x0009942e) main_usb_pane_g2_ParamLimits

0x42c8,	// (0x0009942e) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x000a4711) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x000a4711) main_usb_pane_g

0x42d4,	// (0x0009943a) main_usb_pane_t1_ParamLimits

0x42d4,	// (0x0009943a) main_usb_pane_t1

0x42e6,	// (0x0009944c) main_usb_pane_t2_ParamLimits

0x42e6,	// (0x0009944c) main_usb_pane_t2

0x42f8,	// (0x0009945e) main_usb_pane_t3_ParamLimits

0x42f8,	// (0x0009945e) main_usb_pane_t3

0x430a,	// (0x00099470) main_usb_pane_t4_ParamLimits

0x430a,	// (0x00099470) main_usb_pane_t4

0x431c,	// (0x00099482) main_usb_pane_t5_ParamLimits

0x431c,	// (0x00099482) main_usb_pane_t5

0x432e,	// (0x00099494) main_usb_pane_t6_ParamLimits

0x432e,	// (0x00099494) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x000a4716) main_usb_pane_t_ParamLimits

0x36b3,	// (0x00098819) aid_text_placing

0x36bf,	// (0x00098825) main_location2_pane_t1_ParamLimits

0x36d3,	// (0x00098839) main_location2_pane_t2_ParamLimits

0x36e7,	// (0x0009884d) main_location2_pane_t3_ParamLimits

0x36fb,	// (0x00098861) main_location2_pane_t4_ParamLimits

0x36fb,	// (0x00098861) main_location2_pane_t4

0xf3cf,	// (0x000a4535) main_location2_pane_t_ParamLimits

0xeddb,	// (0x000a3f41) find_pinb_pane_g2_ParamLimits

0xeddb,	// (0x000a3f41) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x000a4285) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x000a4285) find_pinb_pane_g

0xede7,	// (0x000a3f4d) find_pinb_pane_t1_ParamLimits

0xedf9,	// (0x000a3f5f) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x000a428a) find_pinb_pane_t_ParamLimits

0xeb44,	// (0x000a3caa) main_call3_pane

0x2c3f,	// (0x00097da5) cale_month_day_heading_pane_t1_ParamLimits

0x2cc5,	// (0x00097e2b) cale_month_day_heading_pane_t2_ParamLimits

0x2d56,	// (0x00097ebc) cale_month_day_heading_pane_t3_ParamLimits

0x2de7,	// (0x00097f4d) cale_month_day_heading_pane_t4_ParamLimits

0x2e78,	// (0x00097fde) cale_month_day_heading_pane_t5_ParamLimits

0x2f09,	// (0x0009806f) cale_month_day_heading_pane_t6_ParamLimits

0x2f9a,	// (0x00098100) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x000a440c) cale_month_day_heading_pane_t_ParamLimits

0x9f25,	// (0x0009f08b) smil_status_volume_pane

0x3e8c,	// (0x00098ff2) postcard_address_pane_ParamLimits

0x3e8c,	// (0x00098ff2) postcard_address_pane

0x3e98,	// (0x00098ffe) postcard_message_pane_ParamLimits

0x3e98,	// (0x00098ffe) postcard_message_pane

0x4293,	// (0x000993f9) call2_cli_visual_pane_t1_ParamLimits

0x4293,	// (0x000993f9) call2_cli_visual_pane_t1

0x48cf,	// (0x00099a35) postcard_message_pane_t1_ParamLimits

0x48cf,	// (0x00099a35) postcard_message_pane_t1

0x48b8,	// (0x00099a1e) postcard_address_pane_t1_ParamLimits

0x48b8,	// (0x00099a1e) postcard_address_pane_t1

0x48a9,	// (0x00099a0f) popup_call3_audio_in_window_ParamLimits

0x48a9,	// (0x00099a0f) popup_call3_audio_in_window

0x478d,	// (0x000998f3) bg_popup_call3_in_pane_ParamLimits

0x478d,	// (0x000998f3) bg_popup_call3_in_pane

0x47ef,	// (0x00099955) popup_call3_audio_in_window_g1_ParamLimits

0x47ef,	// (0x00099955) popup_call3_audio_in_window_g1

0x4807,	// (0x0009996d) popup_call3_audio_in_window_g2_ParamLimits

0x4807,	// (0x0009996d) popup_call3_audio_in_window_g2

0x481f,	// (0x00099985) popup_call3_audio_in_window_g3_ParamLimits

0x481f,	// (0x00099985) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x000a4778) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x000a4778) popup_call3_audio_in_window_g

0x4847,	// (0x000999ad) popup_call3_audio_in_window_t1_ParamLimits

0x4847,	// (0x000999ad) popup_call3_audio_in_window_t1

0x486f,	// (0x000999d5) popup_call3_audio_in_window_t2_ParamLimits

0x486f,	// (0x000999d5) popup_call3_audio_in_window_t2

0x4897,	// (0x000999fd) popup_call3_audio_in_window_t3_ParamLimits

0x4897,	// (0x000999fd) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x000a4781) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x000a4781) popup_call3_audio_in_window_t

0xf029,	// (0x000a418f) bg_popup_call3_rect_pane

0xb82a,	// (0x000a0990) bg_popup_call3_rect_pane_g1

0xef45,	// (0x000a40ab) bg_popup_call3_rect_pane_g2

0xb832,	// (0x000a0998) bg_popup_call3_rect_pane_g3

0xb83a,	// (0x000a09a0) bg_popup_call3_rect_pane_g4

0xb842,	// (0x000a09a8) bg_popup_call3_rect_pane_g5

0xb84a,	// (0x000a09b0) bg_popup_call3_rect_pane_g6

0xb852,	// (0x000a09b8) bg_popup_call3_rect_pane_g7

0x3a33,	// (0x00098b99) mup_visualizer_osc_pane

0xa6e8,	// (0x0009f84e) mup_visualizer_spec_pane

0x47ad,	// (0x00099913) call3_video_qcif_pane_ParamLimits

0x47ad,	// (0x00099913) call3_video_qcif_pane

0x47bf,	// (0x00099925) call3_video_qcif_uncrop_pane_ParamLimits

0x47bf,	// (0x00099925) call3_video_qcif_uncrop_pane

0x47cd,	// (0x00099933) call3_video_subqcif_pane_ParamLimits

0x47cd,	// (0x00099933) call3_video_subqcif_pane

0x47df,	// (0x00099945) call3_video_subqcif_uncrop_pane_ParamLimits

0x47df,	// (0x00099945) call3_video_subqcif_uncrop_pane

0x4837,	// (0x0009999d) popup_call3_audio_in_window_g4_ParamLimits

0x4837,	// (0x0009999d) popup_call3_audio_in_window_g4

0x475a,	// (0x000998c0) mup_spec_half_pane

0x4763,	// (0x000998c9) mup_spec_half_pane_cp

0xbaa4,	// (0x000a0c0a) mup_osc_middle_pane

0xbaad,	// (0x000a0c13) mup_visualizer_osc_pane_g1

0x473b,	// (0x000998a1) mup_spec_bar_pane_ParamLimits

0x473b,	// (0x000998a1) mup_spec_bar_pane

0xba91,	// (0x000a0bf7) mup_spec_bar_pane_g1

0xba9b,	// (0x000a0c01) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a476c) mup_spec_bar_pane_g

0x17dc,	// (0x00096942) aid_cale_week_size_cell_pane_ParamLimits

0x17f1,	// (0x00096957) bg_cale_heading_pane_ParamLimits

0xef82,	// (0x000a40e8) bg_cale_pane_cp01_ParamLimits

0x1813,	// (0x00096979) cale_week_corner_pane_ParamLimits

0x182d,	// (0x00096993) cale_week_day_heading_pane_ParamLimits

0x184f,	// (0x000969b5) cale_week_scroll_pane_g1_ParamLimits

0x186c,	// (0x000969d2) cale_week_scroll_pane_g2_ParamLimits

0x187f,	// (0x000969e5) cale_week_scroll_pane_g3_ParamLimits

0x1892,	// (0x000969f8) cale_week_scroll_pane_g4_ParamLimits

0x18a5,	// (0x00096a0b) cale_week_scroll_pane_g5_ParamLimits

0x18b8,	// (0x00096a1e) cale_week_scroll_pane_g6_ParamLimits

0x18cb,	// (0x00096a31) cale_week_scroll_pane_g7_ParamLimits

0x18de,	// (0x00096a44) cale_week_scroll_pane_g8_ParamLimits

0x18f3,	// (0x00096a59) cale_week_scroll_pane_g9_ParamLimits

0x1906,	// (0x00096a6c) cale_week_scroll_pane_g10_ParamLimits

0x1919,	// (0x00096a7f) cale_week_scroll_pane_g11_ParamLimits

0x192c,	// (0x00096a92) cale_week_scroll_pane_g12_ParamLimits

0x1943,	// (0x00096aa9) cale_week_scroll_pane_g13_ParamLimits

0x195e,	// (0x00096ac4) cale_week_scroll_pane_g14_ParamLimits

0x1979,	// (0x00096adf) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x000a4316) cale_week_scroll_pane_g_ParamLimits

0x19a9,	// (0x00096b0f) cale_week_time_pane_ParamLimits

0x19be,	// (0x00096b24) grid_cale_week_pane_ParamLimits

0xef9f,	// (0x000a4105) listscroll_cale_week_pane_t1

0xefb1,	// (0x000a4117) scroll_pane_cp08_ParamLimits

0x2754,	// (0x000978ba) cale_month_corner_pane_ParamLimits

0x9efb,	// (0x0009f061) cale_month_pane_t1

0x2bdc,	// (0x00097d42) cale_month_week_pane_ParamLimits

0xa246,	// (0x0009f3ac) popup_call_status_window_g1_ParamLimits

0x34e6,	// (0x0009864c) popup_call_status_window_g2_ParamLimits

0x34f2,	// (0x00098658) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x000a44bc) popup_call_status_window_g_ParamLimits

0xa2ad,	// (0x0009f413) aid_call2_pane

0x3ccb,	// (0x00098e31) msg_header_pane_g1

0x3e8c,	// (0x00098ff2) postcard_address2_pane_ParamLimits

0x3e8c,	// (0x00098ff2) postcard_address2_pane

0x3e98,	// (0x00098ffe) postcard_message2_pane_ParamLimits

0x3e98,	// (0x00098ffe) postcard_message2_pane

0x46d3,	// (0x00099839) message2_row_pane_ParamLimits

0x46d3,	// (0x00099839) message2_row_pane

0x46ee,	// (0x00099854) address2_row_pane_ParamLimits

0x46ee,	// (0x00099854) address2_row_pane

0xba5f,	// (0x000a0bc5) postcard_message2_row_pane_g1

0xba67,	// (0x000a0bcd) postcard_message2_row_pane_t1

0xba5f,	// (0x000a0bc5) address2_row_pane_g1

0xba67,	// (0x000a0bcd) address2_row_pane_t1

0x1d26,	// (0x00096e8c) aid_size_cell_vorec

0xeb44,	// (0x000a3caa) main_rss_pane

0x4701,	// (0x00099867) rss_list_single_pane_ParamLimits

0x4701,	// (0x00099867) rss_list_single_pane

0xba75,	// (0x000a0bdb) rss_list_single_pane_t1

0xba83,	// (0x000a0be9) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x000a4767) rss_list_single_pane_t

0xeb44,	// (0x000a3caa) main_camera2_pane

0xeb44,	// (0x000a3caa) main_video2_pane

0x4933,	// (0x00099a99) cams_zoom_pane_cp2_ParamLimits

0x4933,	// (0x00099a99) cams_zoom_pane_cp2

0x493f,	// (0x00099aa5) image2_vga_pane_ParamLimits

0x493f,	// (0x00099aa5) image2_vga_pane

0x494e,	// (0x00099ab4) main_camera2_pane_g1_ParamLimits

0x494e,	// (0x00099ab4) main_camera2_pane_g1

0x495a,	// (0x00099ac0) main_camera2_pane_g2_ParamLimits

0x495a,	// (0x00099ac0) main_camera2_pane_g2

0x4966,	// (0x00099acc) main_camera2_pane_g3_ParamLimits

0x4966,	// (0x00099acc) main_camera2_pane_g3

0x4972,	// (0x00099ad8) main_camera2_pane_g4_ParamLimits

0x4972,	// (0x00099ad8) main_camera2_pane_g4

0x497e,	// (0x00099ae4) main_camera2_pane_g5_ParamLimits

0x497e,	// (0x00099ae4) main_camera2_pane_g5

0x498a,	// (0x00099af0) main_camera2_pane_g6_ParamLimits

0x498a,	// (0x00099af0) main_camera2_pane_g6

0x4996,	// (0x00099afc) main_camera2_pane_g7_ParamLimits

0x4996,	// (0x00099afc) main_camera2_pane_g7

0x49a2,	// (0x00099b08) main_camera2_pane_g8_ParamLimits

0x49a2,	// (0x00099b08) main_camera2_pane_g8

0x0008,

0xf622,	// (0x000a4788) main_camera2_pane_g_ParamLimits

0xf622,	// (0x000a4788) main_camera2_pane_g

0x49ba,	// (0x00099b20) main_camera2_pane_t1_ParamLimits

0x49ba,	// (0x00099b20) main_camera2_pane_t1

0x49cc,	// (0x00099b32) main_camera2_pane_t2_ParamLimits

0x49cc,	// (0x00099b32) main_camera2_pane_t2

0x49de,	// (0x00099b44) main_camera2_pane_t3_ParamLimits

0x49de,	// (0x00099b44) main_camera2_pane_t3

0x49f0,	// (0x00099b56) main_camera2_pane_t4_ParamLimits

0x49f0,	// (0x00099b56) main_camera2_pane_t4

0x0006,

0xf635,	// (0x000a479b) main_camera2_pane_t_ParamLimits

0xf635,	// (0x000a479b) main_camera2_pane_t

0x4a52,	// (0x00099bb8) cams_zoom_pane_cp4_ParamLimits

0x4a52,	// (0x00099bb8) cams_zoom_pane_cp4

0x4a62,	// (0x00099bc8) image2_cif_pane_ParamLimits

0x4a62,	// (0x00099bc8) image2_cif_pane

0x4a77,	// (0x00099bdd) image2_subqcif_pane_ParamLimits

0x4a77,	// (0x00099bdd) image2_subqcif_pane

0x4a86,	// (0x00099bec) main_video2_pane_g1_ParamLimits

0x4a86,	// (0x00099bec) main_video2_pane_g1

0x4a98,	// (0x00099bfe) main_video2_pane_g2_ParamLimits

0x4a98,	// (0x00099bfe) main_video2_pane_g2

0x4aa8,	// (0x00099c0e) main_video2_pane_g3_ParamLimits

0x4aa8,	// (0x00099c0e) main_video2_pane_g3

0x4ab8,	// (0x00099c1e) main_video2_pane_g4_ParamLimits

0x4ab8,	// (0x00099c1e) main_video2_pane_g4

0x4ac8,	// (0x00099c2e) main_video2_pane_g5_ParamLimits

0x4ac8,	// (0x00099c2e) main_video2_pane_g5

0x4ad8,	// (0x00099c3e) main_video2_pane_g6_ParamLimits

0x4ad8,	// (0x00099c3e) main_video2_pane_g6

0x0005,

0xf644,	// (0x000a47aa) main_video2_pane_g_ParamLimits

0xf644,	// (0x000a47aa) main_video2_pane_g

0x4aea,	// (0x00099c50) main_video2_pane_t1_ParamLimits

0x4aea,	// (0x00099c50) main_video2_pane_t1

0x4b04,	// (0x00099c6a) main_video2_pane_t2_ParamLimits

0x4b04,	// (0x00099c6a) main_video2_pane_t2

0x4b2a,	// (0x00099c90) main_video2_pane_t3_ParamLimits

0x4b2a,	// (0x00099c90) main_video2_pane_t3

0x0002,

0xf651,	// (0x000a47b7) main_video2_pane_t_ParamLimits

0xf651,	// (0x000a47b7) main_video2_pane_t

0x43e5,	// (0x0009954b) call_muted_g2

0x0001,

0xf5f3,	// (0x000a4759) call_muted_g

0xeb44,	// (0x000a3caa) main_mup2_pane

0xbae4,	// (0x000a0c4a) main_mup2_pane_g1_ParamLimits

0xbae4,	// (0x000a0c4a) main_mup2_pane_g1

0x4b50,	// (0x00099cb6) main_mup2_pane_g2_ParamLimits

0x4b50,	// (0x00099cb6) main_mup2_pane_g2

0x4dd2,	// (0x00099f38) main_mup_pane_g13_cp1

0x4dda,	// (0x00099f40) mup_volume_pane_cp1

0x4b70,	// (0x00099cd6) main_mup2_pane_g4_ParamLimits

0x4b70,	// (0x00099cd6) main_mup2_pane_g4

0x4b85,	// (0x00099ceb) main_mup2_pane_g5_ParamLimits

0x4b85,	// (0x00099ceb) main_mup2_pane_g5

0x4b9a,	// (0x00099d00) main_mup2_pane_g6_ParamLimits

0x4b9a,	// (0x00099d00) main_mup2_pane_g6

0x4baf,	// (0x00099d15) main_mup2_pane_g7_ParamLimits

0x4baf,	// (0x00099d15) main_mup2_pane_g7

0x0006,

0xf658,	// (0x000a47be) main_mup2_pane_g_ParamLimits

0xf658,	// (0x000a47be) main_mup2_pane_g

0x4bcb,	// (0x00099d31) main_mup2_pane_t1_ParamLimits

0x4bcb,	// (0x00099d31) main_mup2_pane_t1

0x4be2,	// (0x00099d48) main_mup2_pane_t2_ParamLimits

0x4be2,	// (0x00099d48) main_mup2_pane_t2

0x4bf9,	// (0x00099d5f) main_mup2_pane_t3_ParamLimits

0x4bf9,	// (0x00099d5f) main_mup2_pane_t3

0x4c10,	// (0x00099d76) main_mup2_pane_t4_ParamLimits

0x4c10,	// (0x00099d76) main_mup2_pane_t4

0x4c2a,	// (0x00099d90) main_mup2_pane_t5_ParamLimits

0x4c2a,	// (0x00099d90) main_mup2_pane_t5

0x4c44,	// (0x00099daa) main_mup2_pane_t6_ParamLimits

0x4c44,	// (0x00099daa) main_mup2_pane_t6

0x0005,

0xf667,	// (0x000a47cd) main_mup2_pane_t_ParamLimits

0xf667,	// (0x000a47cd) main_mup2_pane_t

0x4c7c,	// (0x00099de2) mup2_visualizer_pane_ParamLimits

0x4c7c,	// (0x00099de2) mup2_visualizer_pane

0x4cb2,	// (0x00099e18) mup_progress_pane_cp_ParamLimits

0x4cb2,	// (0x00099e18) mup_progress_pane_cp

0x4dbd,	// (0x00099f23) mup_volume_pane_cp_ParamLimits

0x4dbd,	// (0x00099f23) mup_volume_pane_cp

0x4cc9,	// (0x00099e2f) mup2_visualizer_pane_g1_ParamLimits

0x4cc9,	// (0x00099e2f) mup2_visualizer_pane_g1

0xbaf0,	// (0x000a0c56) mup2_visualizer_pane_g2_ParamLimits

0xbaf0,	// (0x000a0c56) mup2_visualizer_pane_g2

0x4cde,	// (0x00099e44) mup2_visualizer_pane_g3_ParamLimits

0x4cde,	// (0x00099e44) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x000a47da) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x000a47da) mup2_visualizer_pane_g

0xa90f,	// (0x0009fa75) aid_size_cell_fmradio

0x44fb,	// (0x00099661) aid_height_parent_landcape

0x9d59,	// (0x0009eebf) wml_content_pane_cp

0x9d61,	// (0x0009eec7) wml_tabs_pane

0x9d6a,	// (0x0009eed0) popup_wml_miniature_window

0x9d72,	// (0x0009eed8) scroll_pane_cp021

0x9d86,	// (0x0009eeec) wml_content_pane_comp8

0xeb44,	// (0x000a3caa) bg_popup_sub_pane_cp05

0xbb0e,	// (0x000a0c74) popup_wml_miniature_window_g1

0xbb16,	// (0x000a0c7c) wml_miniature_view_pane

0x4cec,	// (0x00099e52) aid_size_wml_view

0x4cf4,	// (0x00099e5a) wml_miniature_view_pane_g1

0x4cfd,	// (0x00099e63) wml_miniature_view_pane_g2

0x4d06,	// (0x00099e6c) wml_miniature_view_pane_g3

0x4d0e,	// (0x00099e74) wml_miniature_view_pane_g4

0x4d16,	// (0x00099e7c) wml_miniature_view_pane_g5

0x4d1e,	// (0x00099e84) wml_miniature_view_pane_g6

0x4d26,	// (0x00099e8c) wml_miniature_view_pane_g7

0x4d2e,	// (0x00099e94) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x000a47e1) wml_miniature_view_pane_g

0xbae4,	// (0x000a0c4a) background_graphic_ParamLimits

0xbae4,	// (0x000a0c4a) background_graphic

0xbb1e,	// (0x000a0c84) wml_tabs_2_pane

0xbb27,	// (0x000a0c8d) wml_tabs_3_pane_ParamLimits

0xbb27,	// (0x000a0c8d) wml_tabs_3_pane

0xbb39,	// (0x000a0c9f) wml_tabs_4_pane_ParamLimits

0xbb39,	// (0x000a0c9f) wml_tabs_4_pane

0xbb4f,	// (0x000a0cb5) wml_tabs_5_pane_ParamLimits

0xbb4f,	// (0x000a0cb5) wml_tabs_5_pane

0xbb69,	// (0x000a0ccf) wml_tabs_pane_g2_ParamLimits

0xbb69,	// (0x000a0ccf) wml_tabs_pane_g2

0xbb7d,	// (0x000a0ce3) wml_tabs_pane_g3_ParamLimits

0xbb7d,	// (0x000a0ce3) wml_tabs_pane_g3

0x4d36,	// (0x00099e9c) wml_tabs_2_active_pane_ParamLimits

0x4d36,	// (0x00099e9c) wml_tabs_2_active_pane

0x4d46,	// (0x00099eac) wml_tabs_2_passive_pane_ParamLimits

0x4d46,	// (0x00099eac) wml_tabs_2_passive_pane

0x4d56,	// (0x00099ebc) wml_tabs_3_active_pane_cp_ParamLimits

0x4d56,	// (0x00099ebc) wml_tabs_3_active_pane_cp

0x4d67,	// (0x00099ecd) wml_tabs_3_passive_pane_ParamLimits

0x4d67,	// (0x00099ecd) wml_tabs_3_passive_pane

0x4d78,	// (0x00099ede) wml_tabs_3_passive_pane_cp_ParamLimits

0x4d78,	// (0x00099ede) wml_tabs_3_passive_pane_cp

0x4d89,	// (0x00099eef) tabs_4_active_pane

0x4d91,	// (0x00099ef7) tabs_4_passive_pane

0x4d99,	// (0x00099eff) tabs_4_passive_pane_cp

0x4da1,	// (0x00099f07) tabs_4_passive_pane_cp2

0x42c0,	// (0x00099426) aid_height_text

0x3a00,	// (0x00098b66) mup_volume_cont_pane_ParamLimits

0x3a00,	// (0x00098b66) mup_volume_cont_pane

0x130c,	// (0x00096472) aid_size_cell_pinb

0x1316,	// (0x0009647c) aid_size_list_pinb

0x4c9b,	// (0x00099e01) mup2_volume_cont_pane_ParamLimits

0x4c9b,	// (0x00099e01) mup2_volume_cont_pane

0x4da9,	// (0x00099f0f) mup2_volume_cont_pane_g1_ParamLimits

0x4da9,	// (0x00099f0f) mup2_volume_cont_pane_g1

0x0f31,	// (0x00096097) aid_size_cell_touch_ParamLimits

0x0f31,	// (0x00096097) aid_size_cell_touch

0x11f2,	// (0x00096358) touch_pane_ParamLimits

0x11f2,	// (0x00096358) touch_pane

0x11e8,	// (0x0009634e) main_rss2_pane

0xbb9a,	// (0x000a0d00) listscroll_rss2_pane

0xbba3,	// (0x000a0d09) rss2_navigation_pane

0xbbab,	// (0x000a0d11) list_rss2_pane

0xa3f0,	// (0x0009f556) scroll_pane_cp22

0xbbb3,	// (0x000a0d19) rss2_navigation_pane_g1

0xbbbc,	// (0x000a0d22) rss2_navigation_pane_g2

0xbbc4,	// (0x000a0d2a) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x000a47f2) rss2_navigation_pane_g

0xbbcc,	// (0x000a0d32) rss2_navigation_pane_t1

0x4de2,	// (0x00099f48) rss2_list_single_pane_ParamLimits

0x4de2,	// (0x00099f48) rss2_list_single_pane

0xbbda,	// (0x000a0d40) rss2_list_single_pane_t2

0xbbe8,	// (0x000a0d4e) rss2_list_single_pane_t3_ParamLimits

0xbbe8,	// (0x000a0d4e) rss2_list_single_pane_t3

0xbc05,	// (0x000a0d6b) rss2_list_single_pane_t4

0x3278,	// (0x000983de) smil_status_pane_g1

0x4512,	// (0x00099678) main_image2_pane_ParamLimits

0x4512,	// (0x00099678) main_image2_pane

0x49ae,	// (0x00099b14) main_camera2_pane_g9_ParamLimits

0x49ae,	// (0x00099b14) main_camera2_pane_g9

0x4a02,	// (0x00099b68) main_camera2_pane_t5_ParamLimits

0x4a02,	// (0x00099b68) main_camera2_pane_t5

0x4a14,	// (0x00099b7a) main_camera2_pane_t6_ParamLimits

0x4a14,	// (0x00099b7a) main_camera2_pane_t6

0x4e13,	// (0x00099f79) main_image2_pane_g1_ParamLimits

0x4e13,	// (0x00099f79) main_image2_pane_g1

0x4060,	// (0x000991c6) smil2_video_pane_ParamLimits

0x4060,	// (0x000991c6) smil2_video_pane

0x0f65,	// (0x000960cb) aid_zoom_text_primary_cp

0x1183,	// (0x000962e9) popup_preview_fixed_window

0x9cc2,	// (0x0009ee28) im_reading_pane_g1

0x48f8,	// (0x00099a5e) cams2_bc_adjust_pane_cp_ParamLimits

0x48f8,	// (0x00099a5e) cams2_bc_adjust_pane_cp

0x4a44,	// (0x00099baa) cams2_bc_adjust_pane_ParamLimits

0x4a44,	// (0x00099baa) cams2_bc_adjust_pane

0xce49,	// (0x000a1faf) cams2_bc_adjust_pane_g1

0x4e1f,	// (0x00099f85) cams2_slider_pane

0x4e28,	// (0x00099f8e) cams2_slider_pane_g1

0x4e31,	// (0x00099f97) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x000a47f9) cams2_slider_pane_g

0x141c,	// (0x00096582) calc_display_pane_ParamLimits

0x143a,	// (0x000965a0) calc_paper_pane_ParamLimits

0x1456,	// (0x000965bc) grid_calc_pane_ParamLimits

0x3554,	// (0x000986ba) popup_clock_digital_window_t1_ParamLimits

0xa8ac,	// (0x0009fa12) main_image_pane_t1

0x1402,	// (0x00096568) aid_size_cell_calc_ParamLimits

0x1402,	// (0x00096568) aid_size_cell_calc

0x4543,	// (0x000996a9) popup_blid_sat_info2_window_ParamLimits

0x4543,	// (0x000996a9) popup_blid_sat_info2_window

0xbc1b,	// (0x000a0d81) aid_size_cell_blid

0xbc23,	// (0x000a0d89) bg_popup_window_pane_cp07

0xbc46,	// (0x000a0dac) grid_popup_blid_pane

0xbc50,	// (0x000a0db6) heading_pane_cp05_ParamLimits

0xbc50,	// (0x000a0db6) heading_pane_cp05

0xbd1a,	// (0x000a0e80) cell_popup_blid_pane_ParamLimits

0xbd1a,	// (0x000a0e80) cell_popup_blid_pane

0xbd3e,	// (0x000a0ea4) cell_popup_blid_pane_g1

0xbd46,	// (0x000a0eac) cell_popup_blid_pane_t1

0x4c61,	// (0x00099dc7) mup2_indicator_pane_ParamLimits

0x4c61,	// (0x00099dc7) mup2_indicator_pane

0xf029,	// (0x000a418f) mup2_visualizer_osc_pane

0xbafc,	// (0x000a0c62) mup2_visualizer_spec_pane_ParamLimits

0xbafc,	// (0x000a0c62) mup2_visualizer_spec_pane

0x4e4b,	// (0x00099fb1) mup2_spec_half_pane

0x4e54,	// (0x00099fba) mup2_spec_half_pane_cp

0x4e5e,	// (0x00099fc4) mup2_spec_bar_pane_ParamLimits

0x4e5e,	// (0x00099fc4) mup2_spec_bar_pane

0xba91,	// (0x000a0bf7) mup2_spec_bar_pane_g1

0xba9b,	// (0x000a0c01) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x000a476c) mup2_spec_bar_pane_g

0x4e7d,	// (0x00099fe3) mup2_osc_middle_pane

0xbaad,	// (0x000a0c13) mup2_visualizer_osc_pane_g1

0xe6da,	// (0x000a3840) popup_number_entry_window_t1_ParamLimits

0xe6ed,	// (0x000a3853) popup_number_entry_window_t2_ParamLimits

0xe6ff,	// (0x000a3865) popup_number_entry_window_t3_ParamLimits

0x1249,	// (0x000963af) popup_number_entry_window_t5_ParamLimits

0x1249,	// (0x000963af) popup_number_entry_window_t5

0xf0ca,	// (0x000a4230) popup_number_entry_window_t_ParamLimits

0xe711,	// (0x000a3877) text_title_cp2_ParamLimits

0x3d60,	// (0x00098ec6) aid_hotspot_pointer_text2_pane

0x3dee,	// (0x00098f54) main_viewer_pane_g9_ParamLimits

0x3dee,	// (0x00098f54) main_viewer_pane_g9

0x9efb,	// (0x0009f061) cale_month_pane_t1_ParamLimits

0x9f38,	// (0x0009f09e) bg_cale_pane_ParamLimits

0x9f50,	// (0x0009f0b6) list_cale_pane_ParamLimits

0x9f61,	// (0x0009f0c7) listscroll_cale_day_pane_t1

0x9f73,	// (0x0009f0d9) scroll_pane_cp09_ParamLimits

0x3a3b,	// (0x00098ba1) main_mup_eq_pane_t1_ParamLimits

0x3a3b,	// (0x00098ba1) main_mup_eq_pane_t1

0x3a55,	// (0x00098bbb) main_mup_eq_pane_t2_ParamLimits

0x3a55,	// (0x00098bbb) main_mup_eq_pane_t2

0x3a6f,	// (0x00098bd5) main_mup_eq_pane_t3_ParamLimits

0x3a6f,	// (0x00098bd5) main_mup_eq_pane_t3

0x3a87,	// (0x00098bed) main_mup_eq_pane_t4_ParamLimits

0x3a87,	// (0x00098bed) main_mup_eq_pane_t4

0x3a9f,	// (0x00098c05) main_mup_eq_pane_t5_ParamLimits

0x3a9f,	// (0x00098c05) main_mup_eq_pane_t5

0x3ab7,	// (0x00098c1d) main_mup_eq_pane_t6_ParamLimits

0x3ab7,	// (0x00098c1d) main_mup_eq_pane_t6

0x3acb,	// (0x00098c31) main_mup_eq_pane_t7_ParamLimits

0x3acb,	// (0x00098c31) main_mup_eq_pane_t7

0x3adf,	// (0x00098c45) main_mup_eq_pane_t8_ParamLimits

0x3adf,	// (0x00098c45) main_mup_eq_pane_t8

0x3af5,	// (0x00098c5b) main_mup_eq_pane_t9_ParamLimits

0x3af5,	// (0x00098c5b) main_mup_eq_pane_t9

0x3b0d,	// (0x00098c73) main_mup_eq_pane_t10_ParamLimits

0x3b0d,	// (0x00098c73) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x000a45bb) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x000a45bb) main_mup_eq_pane_t

0x3bca,	// (0x00098d30) mup_equalizer_pane_cp5_ParamLimits

0x3be0,	// (0x00098d46) mup_equalizer_pane_cp6_ParamLimits

0x3bf8,	// (0x00098d5e) mup_equalizer_pane_cp7_ParamLimits

0x11e8,	// (0x0009634e) main_gallery_pane

0xbab6,	// (0x000a0c1c) smil2_volume_pane

0xbabe,	// (0x000a0c24) smil_status_volume_pane_g1_ParamLimits

0xbad1,	// (0x000a0c37) smil_status_volume_pane_g2_ParamLimits

0x476b,	// (0x000998d1) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x000a4771) smil_status_volume_pane_g_ParamLimits

0xbc23,	// (0x000a0d89) bg_popup_window_pane_cp07_ParamLimits

0xbc31,	// (0x000a0d97) blid_firmament_pane

0x4e86,	// (0x00099fec) aid_size_cell_gallery_ParamLimits

0x4e86,	// (0x00099fec) aid_size_cell_gallery

0x4e94,	// (0x00099ffa) grid_gallery_pane_ParamLimits

0x4e94,	// (0x00099ffa) grid_gallery_pane

0x4ea4,	// (0x0009a00a) cell_gallery_pane_ParamLimits

0x4ea4,	// (0x0009a00a) cell_gallery_pane

0xbd54,	// (0x000a0eba) bg_cell_gallery_focus_pane_ParamLimits

0xbd54,	// (0x000a0eba) bg_cell_gallery_focus_pane

0xbd66,	// (0x000a0ecc) cell_gallery_pane_g1_ParamLimits

0xbd66,	// (0x000a0ecc) cell_gallery_pane_g1

0x4ef2,	// (0x0009a058) cell_gallery_pane_g2_ParamLimits

0x4ef2,	// (0x0009a058) cell_gallery_pane_g2

0x4eff,	// (0x0009a065) cell_gallery_pane_g3_ParamLimits

0x4eff,	// (0x0009a065) cell_gallery_pane_g3

0xbd72,	// (0x000a0ed8) cell_gallery_pane_g4_ParamLimits

0xbd72,	// (0x000a0ed8) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x000a481f) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x000a481f) cell_gallery_pane_g

0xbd7e,	// (0x000a0ee4) bg_cell_gallery_focus_pane_g1

0xbd86,	// (0x000a0eec) bg_cell_gallery_focus_pane_g2

0xbd8e,	// (0x000a0ef4) bg_cell_gallery_focus_pane_g3

0xbd96,	// (0x000a0efc) bg_cell_gallery_focus_pane_g4

0xbd9e,	// (0x000a0f04) bg_cell_gallery_focus_pane_g5

0xbdbb,	// (0x000a0f21) bg_cell_gallery_focus_pane_g6

0xbdc3,	// (0x000a0f29) bg_cell_gallery_focus_pane_g7

0xbdcb,	// (0x000a0f31) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x000a4828) bg_cell_gallery_focus_pane_g

0xbdd3,	// (0x000a0f39) aid_firma_cardinal

0xbde7,	// (0x000a0f4d) blid_firmament_pane_t1

0xbdfe,	// (0x000a0f64) blid_firmament_pane_t2

0xbe15,	// (0x000a0f7b) blid_firmament_pane_t3

0xbe2c,	// (0x000a0f92) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x000a4839) blid_firmament_pane_t

0xbe43,	// (0x000a0fa9) blid_sat_info_pane

0xbe53,	// (0x000a0fb9) blid_sat_info_pane_g1

0xbe53,	// (0x000a0fb9) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x000a4842) blid_sat_info_pane_g

0xbe5d,	// (0x000a0fc3) blid_sat_info_pane_t1

0xbe6b,	// (0x000a0fd1) smil2_volume_content_pane

0xbe74,	// (0x000a0fda) smil2_volume_pane_g1

0xbdb2,	// (0x000a0f18) smil2_volume_content_pane_g1

0xbe7c,	// (0x000a0fe2) smil2_volume_content_pane_g2

0xbe85,	// (0x000a0feb) smil2_volume_content_pane_g3

0xbe8e,	// (0x000a0ff4) smil2_volume_content_pane_g4

0xbe97,	// (0x000a0ffd) smil2_volume_content_pane_g5

0xbea0,	// (0x000a1006) smil2_volume_content_pane_g6

0xbea9,	// (0x000a100f) smil2_volume_content_pane_g7

0xbeb2,	// (0x000a1018) smil2_volume_content_pane_g8

0xbebb,	// (0x000a1021) smil2_volume_content_pane_g9

0xbec4,	// (0x000a102a) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x000a4847) smil2_volume_content_pane_g

0x1a3f,	// (0x00096ba5) cale_week_day_heading_pane_t1_ParamLimits

0x1a7a,	// (0x00096be0) cale_week_day_heading_pane_t2_ParamLimits

0x1ab5,	// (0x00096c1b) cale_week_day_heading_pane_t3_ParamLimits

0x1af0,	// (0x00096c56) cale_week_day_heading_pane_t4_ParamLimits

0x1b2b,	// (0x00096c91) cale_week_day_heading_pane_t5_ParamLimits

0x1b66,	// (0x00096ccc) cale_week_day_heading_pane_t6_ParamLimits

0x1ba1,	// (0x00096d07) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x000a4337) cale_week_day_heading_pane_t_ParamLimits

0xefce,	// (0x000a4134) bg_cale_side_pane_ParamLimits

0x1bdc,	// (0x00096d42) cale_week_time_pane_t1_ParamLimits

0x1bf6,	// (0x00096d5c) cale_week_time_pane_t2_ParamLimits

0x1c10,	// (0x00096d76) cale_week_time_pane_t3_ParamLimits

0x1c2a,	// (0x00096d90) cale_week_time_pane_t4_ParamLimits

0x1c44,	// (0x00096daa) cale_week_time_pane_t5_ParamLimits

0x1c5e,	// (0x00096dc4) cale_week_time_pane_t6_ParamLimits

0x1c7e,	// (0x00096de4) cale_week_time_pane_t7_ParamLimits

0x1ca0,	// (0x00096e06) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x000a4346) cale_week_time_pane_t_ParamLimits

0x1cc4,	// (0x00096e2a) cell_cale_week_pane_g2_ParamLimits

0xefce,	// (0x000a4134) bg_cale_side_pane_cp01_ParamLimits

0x3043,	// (0x000981a9) cale_month_week_pane_t1_ParamLimits

0x305c,	// (0x000981c2) cale_month_week_pane_t2_ParamLimits

0x3075,	// (0x000981db) cale_month_week_pane_t3_ParamLimits

0x308e,	// (0x000981f4) cale_month_week_pane_t4_ParamLimits

0x30a7,	// (0x0009820d) cale_month_week_pane_t5_ParamLimits

0x30c8,	// (0x0009822e) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x000a441b) cale_month_week_pane_t_ParamLimits

0x3235,	// (0x0009839b) cell_cale_month_pane_g1_ParamLimits

0x11e8,	// (0x0009634e) main_cale_event_viewer_pane

0xe6b0,	// (0x000a3816) listscroll_cale_event_viewer_pane

0xbecd,	// (0x000a1033) list_cale_ev_pane

0xbed5,	// (0x000a103b) scroll_pane_cp023

0xbee1,	// (0x000a1047) field_cale_ev_pane_ParamLimits

0xbee1,	// (0x000a1047) field_cale_ev_pane

0xbeff,	// (0x000a1065) field_cale_ev_content_pane_ParamLimits

0xbeff,	// (0x000a1065) field_cale_ev_content_pane

0xbf0b,	// (0x000a1071) field_cale_ev_pane_g1_ParamLimits

0xbf0b,	// (0x000a1071) field_cale_ev_pane_g1

0xbf17,	// (0x000a107d) field_cale_ev_pane_g2_ParamLimits

0xbf17,	// (0x000a107d) field_cale_ev_pane_g2

0xbf2f,	// (0x000a1095) field_cale_ev_pane_g3_ParamLimits

0xbf2f,	// (0x000a1095) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x000a485c) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x000a485c) field_cale_ev_pane_g

0xbf47,	// (0x000a10ad) field_cale_ev_pane_t1_ParamLimits

0xbf47,	// (0x000a10ad) field_cale_ev_pane_t1

0xbf5e,	// (0x000a10c4) field_cale_ev_content_pane_t1_ParamLimits

0xbf5e,	// (0x000a10c4) field_cale_ev_content_pane_t1

0xa792,	// (0x0009f8f8) bg_button_pane_cp01

0x17cc,	// (0x00096932) listscroll_cale_week_pane_ParamLimits

0xef79,	// (0x000a40df) popup_toolbar_window_cp01

0xef9f,	// (0x000a4105) listscroll_cale_week_pane_t1_ParamLimits

0x17cc,	// (0x00096932) listscroll_cale_day_pane_ParamLimits

0xef79,	// (0x000a40df) popup_toolbar_window_cp02

0x9f61,	// (0x0009f0c7) listscroll_cale_day_pane_t1_ParamLimits

0x17cc,	// (0x00096932) main_cale_month_pane_ParamLimits

0x464a,	// (0x000997b0) popup_toolbar_window_cp03_ParamLimits

0x464a,	// (0x000997b0) popup_toolbar_window_cp03

0x3f76,	// (0x000990dc) main_image_pane_g2_ParamLimits

0x3f76,	// (0x000990dc) main_image_pane_g2

0x3f82,	// (0x000990e8) main_image_pane_g3_ParamLimits

0x3f82,	// (0x000990e8) main_image_pane_g3

0x0002,

0xf4e7,	// (0x000a464d) main_image_pane_g_ParamLimits

0xf4e7,	// (0x000a464d) main_image_pane_g

0xa8ac,	// (0x0009fa12) main_image_pane_t1_ParamLimits

0x3f8e,	// (0x000990f4) main_image_pane_t2_ParamLimits

0x3f8e,	// (0x000990f4) main_image_pane_t2

0x3fa0,	// (0x00099106) main_image_pane_t3_ParamLimits

0x3fa0,	// (0x00099106) main_image_pane_t3

0x3fb2,	// (0x00099118) main_image_pane_t4_ParamLimits

0x3fb2,	// (0x00099118) main_image_pane_t4

0x0003,

0xf4ee,	// (0x000a4654) main_image_pane_t_ParamLimits

0xf4ee,	// (0x000a4654) main_image_pane_t

0x3fc4,	// (0x0009912a) popup_image_details_window_cp01

0x3fce,	// (0x00099134) popup_toobar_trans_pane_cp01_ParamLimits

0x3fce,	// (0x00099134) popup_toobar_trans_pane_cp01

0x459a,	// (0x00099700) popup_image_details_window_ParamLimits

0x459a,	// (0x00099700) popup_image_details_window

0x45a8,	// (0x0009970e) popup_image_focus_window

0x48ea,	// (0x00099a50) camera2_autofocus_pane_ParamLimits

0x48ea,	// (0x00099a50) camera2_autofocus_pane

0xe6b0,	// (0x000a3816) bg_popup_sub_pane_cp06

0xbf7c,	// (0x000a10e2) popup_image_focus_window_g1

0xbf84,	// (0x000a10ea) popup_image_focus_window_g2

0xbf8c,	// (0x000a10f2) popup_image_focus_window_g3

0xbf94,	// (0x000a10fa) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x000a4863) popup_image_focus_window_g

0xbf9c,	// (0x000a1102) popup_image_focus_window_t1

0xbfaa,	// (0x000a1110) popup_image_focus_window_t2

0xbfba,	// (0x000a1120) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x000a486c) popup_image_focus_window_t

0xbfc8,	// (0x000a112e) camera2_autofocus_pane_g1

0xe796,	// (0x000a38fc) bg_tb_trans_pane_cp01

0xbfd6,	// (0x000a113c) popup_image_details_window_g1

0xbfe9,	// (0x000a114f) popup_image_details_window_g2

0x0002,

0xf718,	// (0x000a487e) popup_image_details_window_g

0xc012,	// (0x000a1178) popup_image_details_window_t1

0xc024,	// (0x000a118a) popup_image_details_window_t2

0xc03d,	// (0x000a11a3) popup_image_details_window_t3

0xc051,	// (0x000a11b7) popup_image_details_window_t4

0xc06c,	// (0x000a11d2) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x000a4885) popup_image_details_window_t

0xee50,	// (0x000a3fb6) bg_calc_paper_pane_ParamLimits

0x11e8,	// (0x0009634e) grid_highlight_pane_cp013

0x1553,	// (0x000966b9) list_calc_pane_ParamLimits

0x1565,	// (0x000966cb) scroll_pane_cp024

0xee64,	// (0x000a3fca) bg_calc_display_pane_ParamLimits

0x156d,	// (0x000966d3) calc_display_pane_t1_ParamLimits

0x1582,	// (0x000966e8) calc_display_pane_t2_ParamLimits

0x1597,	// (0x000966fd) calc_display_pane_t3_ParamLimits

0xf151,	// (0x000a42b7) calc_display_pane_t_ParamLimits

0x1673,	// (0x000967d9) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x000a42d4) cell_calc_pane_g

0x167c,	// (0x000967e2) cell_calc_pane_t1

0xeec3,	// (0x000a4029) grid_highlight_pane_cp02_ParamLimits

0xeed9,	// (0x000a403f) toolbar_button_pane_cp01_ParamLimits

0xeed9,	// (0x000a403f) toolbar_button_pane_cp01

0xa8f1,	// (0x0009fa57) temp_image_control_pane_ParamLimits

0xa8f1,	// (0x0009fa57) temp_image_control_pane

0x4512,	// (0x00099678) main_mp3_pane

0xc086,	// (0x000a11ec) temp_image_control_pane_g1_ParamLimits

0xc086,	// (0x000a11ec) temp_image_control_pane_g1

0xc094,	// (0x000a11fa) temp_image_control_pane_g2_ParamLimits

0xc094,	// (0x000a11fa) temp_image_control_pane_g2

0xc0a6,	// (0x000a120c) temp_image_control_pane_g3_ParamLimits

0xc0a6,	// (0x000a120c) temp_image_control_pane_g3

0x4f3c,	// (0x0009a0a2) temp_image_control_pane_g4_ParamLimits

0x4f3c,	// (0x0009a0a2) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x000a4890) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x000a4890) temp_image_control_pane_g

0xc086,	// (0x000a11ec) main_mp3_pane_g1

0x4f4d,	// (0x0009a0b3) main_mp3_pane_g2

0x0007,

0xf733,	// (0x000a4899) main_mp3_pane_g

0xc0e9,	// (0x000a124f) main_mp3_pane_t1

0xf031,	// (0x000a4197) main_camera_pane_g8_ParamLimits

0xf031,	// (0x000a4197) main_camera_pane_g8

0x1f51,	// (0x000970b7) main_video_pane_g7_ParamLimits

0x1f51,	// (0x000970b7) main_video_pane_g7

0x4a32,	// (0x00099b98) main_camera2_pane_t7_ParamLimits

0x4a32,	// (0x00099b98) main_camera2_pane_t7

0x9d19,	// (0x0009ee7f) scroll_pane_cp025_ParamLimits

0x9d19,	// (0x0009ee7f) scroll_pane_cp025

0x9d2d,	// (0x0009ee93) scroll_pane_cp026_ParamLimits

0x9d2d,	// (0x0009ee93) scroll_pane_cp026

0x9d3c,	// (0x0009eea2) wml_content_pane_ParamLimits

0x11e8,	// (0x0009634e) main_touch_calib_pane

0x4ff1,	// (0x0009a157) main_touch_calib_pane_g1

0x4ffd,	// (0x0009a163) main_touch_calib_pane_g2

0x5009,	// (0x0009a16f) main_touch_calib_pane_g3

0x5015,	// (0x0009a17b) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x000a48b7) main_touch_calib_pane_g

0x5021,	// (0x0009a187) main_touch_calib_pane_t1

0x503a,	// (0x0009a1a0) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x000a48c0) main_touch_calib_pane_t

0xa4cc,	// (0x0009f632) mup_progress_pane_cp02

0xa501,	// (0x0009f667) navi_pane_g1

0xa5bc,	// (0x0009f722) navi_pane_mp_t3

0x4512,	// (0x00099678) main_mp3_pane_ParamLimits

0x4687,	// (0x000997ed) navi_pane_ParamLimits

0xc086,	// (0x000a11ec) main_mp3_pane_g1_ParamLimits

0x4f4d,	// (0x0009a0b3) main_mp3_pane_g2_ParamLimits

0x4f59,	// (0x0009a0bf) main_mp3_pane_g3_ParamLimits

0x4f59,	// (0x0009a0bf) main_mp3_pane_g3

0x4f65,	// (0x0009a0cb) main_mp3_pane_g4_ParamLimits

0x4f65,	// (0x0009a0cb) main_mp3_pane_g4

0xc0b6,	// (0x000a121c) main_mp3_pane_g5_ParamLimits

0xc0b6,	// (0x000a121c) main_mp3_pane_g5

0xc0c4,	// (0x000a122a) main_mp3_pane_g6_ParamLimits

0xc0c4,	// (0x000a122a) main_mp3_pane_g6

0xc0d1,	// (0x000a1237) main_mp3_pane_g7_ParamLimits

0xc0d1,	// (0x000a1237) main_mp3_pane_g7

0xc0dd,	// (0x000a1243) main_mp3_pane_g8_ParamLimits

0xc0dd,	// (0x000a1243) main_mp3_pane_g8

0xf733,	// (0x000a4899) main_mp3_pane_g_ParamLimits

0x4f71,	// (0x0009a0d7) main_mp3_pane_t2

0x4f81,	// (0x0009a0e7) main_mp3_pane_t3

0xc0f7,	// (0x000a125d) main_mp3_pane_t4

0xc105,	// (0x000a126b) main_mp3_pane_t5

0x0005,

0xf744,	// (0x000a48aa) main_mp3_pane_t

0xc113,	// (0x000a1279) mup_progress_pane_cp01

0x0f65,	// (0x000960cb) aid_zoom_text_secondary2

0xbecd,	// (0x000a1033) list_cale_ev2_pane

0xbed5,	// (0x000a103b) scroll_pane_cp023_ParamLimits

0x5095,	// (0x0009a1fb) field_cale_ev2_pane_ParamLimits

0x5095,	// (0x0009a1fb) field_cale_ev2_pane

0x50be,	// (0x0009a224) field_cale_ev2_pane_g1_ParamLimits

0x50be,	// (0x0009a224) field_cale_ev2_pane_g1

0x50ca,	// (0x0009a230) field_cale_ev2_pane_g2_ParamLimits

0x50ca,	// (0x0009a230) field_cale_ev2_pane_g2

0x50e2,	// (0x0009a248) field_cale_ev2_pane_g3_ParamLimits

0x50e2,	// (0x0009a248) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x000a48cb) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x000a48cb) field_cale_ev2_pane_g

0xc127,	// (0x000a128d) field_cale_ev2_pane_t1_ParamLimits

0xc127,	// (0x000a128d) field_cale_ev2_pane_t1

0xc13e,	// (0x000a12a4) field_cale_ev2_pane_t2_ParamLimits

0xc13e,	// (0x000a12a4) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x000a48d4) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x000a48d4) field_cale_ev2_pane_t

0x3e56,	// (0x00098fbc) main_postcard_pane_g5_ParamLimits

0x3e56,	// (0x00098fbc) main_postcard_pane_g5

0x3e64,	// (0x00098fca) main_postcard_pane_g6_ParamLimits

0x3e64,	// (0x00098fca) main_postcard_pane_g6

0x1d9b,	// (0x00096f01) camera2_autofocus_pane_cp_ParamLimits

0x1d9b,	// (0x00096f01) camera2_autofocus_pane_cp

0x4512,	// (0x00099678) main_mup3_pane

0x50fa,	// (0x0009a260) main_mup3_pane_g1_ParamLimits

0x50fa,	// (0x0009a260) main_mup3_pane_g1

0x511b,	// (0x0009a281) main_mup3_pane_g2_ParamLimits

0x511b,	// (0x0009a281) main_mup3_pane_g2

0x5193,	// (0x0009a2f9) main_mup3_pane_g3_ParamLimits

0x5193,	// (0x0009a2f9) main_mup3_pane_g3

0x51d6,	// (0x0009a33c) main_mup3_pane_g4_ParamLimits

0x51d6,	// (0x0009a33c) main_mup3_pane_g4

0x5219,	// (0x0009a37f) main_mup3_pane_g5_ParamLimits

0x5219,	// (0x0009a37f) main_mup3_pane_g5

0x525c,	// (0x0009a3c2) main_mup3_pane_g6_ParamLimits

0x525c,	// (0x0009a3c2) main_mup3_pane_g6

0xc173,	// (0x000a12d9) main_mup3_pane_g7_ParamLimits

0xc173,	// (0x000a12d9) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x000a48e4) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x000a48e4) main_mup3_pane_g

0x52d2,	// (0x0009a438) main_mup3_pane_t1_ParamLimits

0x52d2,	// (0x0009a438) main_mup3_pane_t1

0x5341,	// (0x0009a4a7) main_mup3_pane_t2_ParamLimits

0x5341,	// (0x0009a4a7) main_mup3_pane_t2

0x540a,	// (0x0009a570) main_mup3_pane_t4_ParamLimits

0x540a,	// (0x0009a570) main_mup3_pane_t4

0x5458,	// (0x0009a5be) main_mup3_pane_t5_ParamLimits

0x5458,	// (0x0009a5be) main_mup3_pane_t5

0x5508,	// (0x0009a66e) main_mup3_pane_t6_ParamLimits

0x5508,	// (0x0009a66e) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x000a48f5) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x000a48f5) main_mup3_pane_t

0x55b4,	// (0x0009a71a) mup3_progress_pane_ParamLimits

0x55b4,	// (0x0009a71a) mup3_progress_pane

0x5632,	// (0x0009a798) popup_mup3_control_window_ParamLimits

0x5632,	// (0x0009a798) popup_mup3_control_window

0xc181,	// (0x000a12e7) popup_mup3_text_window

0x564b,	// (0x0009a7b1) mup3_progress_pane_t1

0x566a,	// (0x0009a7d0) mup3_progress_pane_t2

0xc189,	// (0x000a12ef) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x000a4902) mup3_progress_pane_t

0xc1a6,	// (0x000a130c) mup_progress_pane_cp03

0xe6b0,	// (0x000a3816) bg_tb_trans_pane_cp04

0x5689,	// (0x0009a7ef) mup3_volume_pane

0x5691,	// (0x0009a7f7) popup_mup3_control_window_g1

0x569a,	// (0x0009a800) mup3_volume_pane_g1

0x56a3,	// (0x0009a809) mup3_volume_pane_g2

0x56ac,	// (0x0009a812) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x000a4909) mup3_volume_pane_g

0xe6b0,	// (0x000a3816) bg_tb_trans_pane_cp03

0xc1b6,	// (0x000a131c) popup_mup3_text_window_g1

0xc1be,	// (0x000a1324) popup_mup3_text_window_t1

0xeeac,	// (0x000a4012) list_calc_item_pane_g1_ParamLimits

0xbb91,	// (0x000a0cf7) mup_volume_pane_cp_g1

0x5053,	// (0x0009a1b9) main_touch_calib_pane_t3

0x5069,	// (0x0009a1cf) main_touch_calib_pane_t4

0x507f,	// (0x0009a1e5) main_touch_calib_pane_t5

0x0f1d,	// (0x00096083) aid_cell_size_toolbar2

0x0f25,	// (0x0009608b) aid_popup3_width_pane

0x0e2d,	// (0x00095f93) aid_zoom_text_msg_primary

0x1d70,	// (0x00096ed6) vorec_t7

0xee70,	// (0x000a3fd6) bg_calc_paper_pane_g1_ParamLimits

0xee7c,	// (0x000a3fe2) bg_calc_paper_pane_g2_ParamLimits

0xee88,	// (0x000a3fee) bg_calc_paper_pane_g3_ParamLimits

0xee94,	// (0x000a3ffa) bg_calc_paper_pane_g4_ParamLimits

0xeea0,	// (0x000a4006) bg_calc_paper_pane_g5_ParamLimits

0x15d6,	// (0x0009673c) bg_calc_paper_pane_g6_ParamLimits

0x15e7,	// (0x0009674d) bg_calc_paper_pane_g7_ParamLimits

0x15f8,	// (0x0009675e) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x000a42be) bg_calc_paper_pane_g_ParamLimits

0x1609,	// (0x0009676f) calc_bg_paper_pane_g9_ParamLimits

0x1e82,	// (0x00096fe8) image_qvga_pane_ParamLimits

0x1e82,	// (0x00096fe8) image_qvga_pane

0xed9f,	// (0x000a3f05) bg_popup_sub_pane_cp04_ParamLimits

0xa828,	// (0x0009f98e) popup_mup_playback_window_g1_ParamLimits

0xa834,	// (0x0009f99a) popup_mup_playback_window_t1_ParamLimits

0xa849,	// (0x0009f9af) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x000a4648) popup_mup_playback_window_t_ParamLimits

0x4b61,	// (0x00099cc7) main_mup2_pane_g3_ParamLimits

0x4b61,	// (0x00099cc7) main_mup2_pane_g3

0x2231,	// (0x00097397) popup_toolbar_window_cp04

0xac2b,	// (0x0009fd91) popup_call2_audio_second_window_g3_ParamLimits

0xac2b,	// (0x0009fd91) popup_call2_audio_second_window_g3

0xb035,	// (0x000a019b) popup_call2_audio_first_window_g4_ParamLimits

0xb035,	// (0x000a019b) popup_call2_audio_first_window_g4

0xb6b4,	// (0x000a081a) popup_call2_audio_in_window_g4_ParamLimits

0xb6b4,	// (0x000a081a) popup_call2_audio_in_window_g4

0x3f69,	// (0x000990cf) aid_area_sk_bg_cut_ParamLimits

0x3f69,	// (0x000990cf) aid_area_sk_bg_cut

0xa85e,	// (0x0009f9c4) aid_area_sk_bg_cut_2_ParamLimits

0xa85e,	// (0x0009f9c4) aid_area_sk_bg_cut_2

0x4ee2,	// (0x0009a048) aid_placing_details_win

0x4eea,	// (0x0009a050) aid_placing_details_win_2

0xbfc8,	// (0x000a112e) camera2_autofocus_pane_g1_ParamLimits

0x1174,	// (0x000962da) popup_fixed_preview_cale_window_ParamLimits

0x1174,	// (0x000962da) popup_fixed_preview_cale_window

0xa63a,	// (0x0009f7a0) navi_slider_pane_g3

0xa643,	// (0x0009f7a9) navi_slider_pane_g4

0xa64c,	// (0x0009f7b2) navi_slider_pane_g5

0xa63a,	// (0x0009f7a0) navi_slider_pane_g6

0x37cf,	// (0x00098935) navi_slider_pane_g7

0xa75f,	// (0x0009f8c5) mup_scale_pane_g3

0xa768,	// (0x0009f8ce) mup_scale_pane_g4

0xa771,	// (0x0009f8d7) mup_scale_pane_g5

0x3c10,	// (0x00098d76) mup_scale_pane_g6

0x3c19,	// (0x00098d7f) mup_scale_pane_g7

0xa63a,	// (0x0009f7a0) cams2_slider_pane_g3

0xbc13,	// (0x000a0d79) cams2_slider_pane_g4

0x4e3a,	// (0x00099fa0) cams2_slider_pane_g5

0xa63a,	// (0x0009f7a0) cams2_slider_pane_g6

0x4e42,	// (0x00099fa8) cams2_slider_pane_g7

0xbe53,	// (0x000a0fb9) camera2_autofocus_pane_cp_g1

0xba2a,	// (0x000a0b90) bg_popup_preview_window_pane_cp02_ParamLimits

0xba2a,	// (0x000a0b90) bg_popup_preview_window_pane_cp02

0xc1cc,	// (0x000a1332) list_fp_cale_pane_ParamLimits

0xc1cc,	// (0x000a1332) list_fp_cale_pane

0xc1d8,	// (0x000a133e) popup_fixed_preview_cale_window_t1_ParamLimits

0xc1d8,	// (0x000a133e) popup_fixed_preview_cale_window_t1

0x56b5,	// (0x0009a81b) popup_fixed_preview_cale_window_t2_ParamLimits

0x56b5,	// (0x0009a81b) popup_fixed_preview_cale_window_t2

0x56ca,	// (0x0009a830) popup_fixed_preview_cale_window_t3_ParamLimits

0x56ca,	// (0x0009a830) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x000a4910) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x000a4910) popup_fixed_preview_cale_window_t

0x56df,	// (0x0009a845) list_single_fp_cale_pane_ParamLimits

0x56df,	// (0x0009a845) list_single_fp_cale_pane

0xc1f6,	// (0x000a135c) list_single_fp_cale_pane_g1_ParamLimits

0xc1f6,	// (0x000a135c) list_single_fp_cale_pane_g1

0xc202,	// (0x000a1368) list_single_fp_cale_pane_g2_ParamLimits

0xc202,	// (0x000a1368) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x000a4917) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x000a4917) list_single_fp_cale_pane_g

0xc21b,	// (0x000a1381) list_single_fp_cale_pane_t1_ParamLimits

0xc21b,	// (0x000a1381) list_single_fp_cale_pane_t1

0xc22d,	// (0x000a1393) list_single_fp_cale_pane_t2_ParamLimits

0xc22d,	// (0x000a1393) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x000a491e) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x000a491e) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x11e8,	// (0x0009634e) main_dialer_pane

0x56f2,	// (0x0009a858) aid_cell_size_keypad

0x56fc,	// (0x0009a862) dialer_ne_pane

0x5706,	// (0x0009a86c) grid_dialer_command_1_pane

0x570e,	// (0x0009a874) grid_dialer_command_2_pane

0x5716,	// (0x0009a87c) grid_dialer_keypad_pane

0x5728,	// (0x0009a88e) bg_popup_call_pane_cp06_ParamLimits

0x5728,	// (0x0009a88e) bg_popup_call_pane_cp06

0x5734,	// (0x0009a89a) dialer_ne_clear_pane_ParamLimits

0x5734,	// (0x0009a89a) dialer_ne_clear_pane

0xc260,	// (0x000a13c6) dialer_ne_pane_g1

0xc268,	// (0x000a13ce) dialer_ne_pane_t1_ParamLimits

0xc268,	// (0x000a13ce) dialer_ne_pane_t1

0x5740,	// (0x0009a8a6) dialer_ne_pane_t2_ParamLimits

0x5740,	// (0x0009a8a6) dialer_ne_pane_t2

0x575d,	// (0x0009a8c3) dialer_ne_pane_t3_ParamLimits

0x575d,	// (0x0009a8c3) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x000a4923) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x000a4923) dialer_ne_pane_t

0x5781,	// (0x0009a8e7) dialer_ne_pane_t3_copy1_ParamLimits

0x5781,	// (0x0009a8e7) dialer_ne_pane_t3_copy1

0x57a5,	// (0x0009a90b) cell_dialer_keypad_pane_ParamLimits

0x57a5,	// (0x0009a90b) cell_dialer_keypad_pane

0x57bc,	// (0x0009a922) cell_dialer_command_1_pane_ParamLimits

0x57bc,	// (0x0009a922) cell_dialer_command_1_pane

0x57d2,	// (0x0009a938) cell_dialer_command_2_pane_ParamLimits

0x57d2,	// (0x0009a938) cell_dialer_command_2_pane

0xc27a,	// (0x000a13e0) bg_button_pane_cp02_ParamLimits

0xc27a,	// (0x000a13e0) bg_button_pane_cp02

0x57e1,	// (0x0009a947) cell_dialer_keypad_pane_g1_ParamLimits

0x57e1,	// (0x0009a947) cell_dialer_keypad_pane_g1

0xc27a,	// (0x000a13e0) bg_button_pane_cp03_ParamLimits

0xc27a,	// (0x000a13e0) bg_button_pane_cp03

0x57f6,	// (0x0009a95c) cell_dialer_command_1_pane_g1_ParamLimits

0x57f6,	// (0x0009a95c) cell_dialer_command_1_pane_g1

0xc286,	// (0x000a13ec) bg_button_pane_cp04

0x580a,	// (0x0009a970) cell_dialer_command_2_pane_g1

0xf029,	// (0x000a418f) bg_button_pane_cp06

0xc28e,	// (0x000a13f4) dialer_ne_clear_pane_g1

0xa50d,	// (0x0009f673) navi_pane_g2

0xa53b,	// (0x0009f6a1) navi_pane_g3

0x0002,

0xf3e5,	// (0x000a454b) navi_pane_g

0xa5ca,	// (0x0009f730) navi_pane_mv_g2

0xa5f1,	// (0x0009f757) navi_pane_mv_g5

0x379a,	// (0x00098900) navi_pane_mv_t1

0xee64,	// (0x000a3fca) main_clock2_pane

0x5848,	// (0x0009a9ae) main_clock2_list_pane_ParamLimits

0x5848,	// (0x0009a9ae) main_clock2_list_pane

0x5870,	// (0x0009a9d6) main_clock2_pane_t1_ParamLimits

0x5870,	// (0x0009a9d6) main_clock2_pane_t1

0x5892,	// (0x0009a9f8) main_clock2_pane_t2_ParamLimits

0x5892,	// (0x0009a9f8) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x000a492f) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x000a492f) main_clock2_pane_t

0x58ed,	// (0x0009aa53) popup_clock_analogue_window_cp03_ParamLimits

0x58ed,	// (0x0009aa53) popup_clock_analogue_window_cp03

0x590b,	// (0x0009aa71) popup_clock_digital_window_cp02_ParamLimits

0x590b,	// (0x0009aa71) popup_clock_digital_window_cp02

0x5978,	// (0x0009aade) main_clock2_list_single_pane_ParamLimits

0x5978,	// (0x0009aade) main_clock2_list_single_pane

0xf029,	// (0x000a418f) list_highlight_pane_cp05

0xc2cc,	// (0x000a1432) main_clock2_list_single_pane_t1

0x2231,	// (0x00097397) popup_toolbar_window_cp04_ParamLimits

0x4f0c,	// (0x0009a072) camera2_autofocus_pane_g2_ParamLimits

0x4f0c,	// (0x0009a072) camera2_autofocus_pane_g2

0x4f18,	// (0x0009a07e) camera2_autofocus_pane_g3_ParamLimits

0x4f18,	// (0x0009a07e) camera2_autofocus_pane_g3

0x4f24,	// (0x0009a08a) camera2_autofocus_pane_g4_ParamLimits

0x4f24,	// (0x0009a08a) camera2_autofocus_pane_g4

0x4f30,	// (0x0009a096) camera2_autofocus_pane_g5_ParamLimits

0x4f30,	// (0x0009a096) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x000a4873) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x000a4873) camera2_autofocus_pane_g

0xc153,	// (0x000a12b9) camera2_autofocus_pane_cp_g2

0xc15b,	// (0x000a12c1) camera2_autofocus_pane_cp_g3

0xc163,	// (0x000a12c9) camera2_autofocus_pane_cp_g4

0xc16b,	// (0x000a12d1) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x000a48d9) camera2_autofocus_pane_cp_g

0x5720,	// (0x0009a886) popup_dialer_spcha_window

0xe6b0,	// (0x000a3816) bg_popup_sub_pane_cp07

0xc2da,	// (0x000a1440) list_spcha_pane

0xc2e2,	// (0x000a1448) list_single_spcha_pane_ParamLimits

0xc2e2,	// (0x000a1448) list_single_spcha_pane

0xe6b0,	// (0x000a3816) list_highlight_pane_cp06

0xc2f3,	// (0x000a1459) list_single_spcha_pane_t1

0xb45e,	// (0x000a05c4) popup_call2_audio_out_window_g4_ParamLimits

0xb45e,	// (0x000a05c4) popup_call2_audio_out_window_g4

0x11e8,	// (0x0009634e) main_imed2_pane

0x45b0,	// (0x00099716) popup_imed_adjust2_window

0x45c3,	// (0x00099729) popup_imed_trans_window_ParamLimits

0x45c3,	// (0x00099729) popup_imed_trans_window

0xbc7c,	// (0x000a0de2) popup_blid_sat_info2_window_t1

0xbc8a,	// (0x000a0df0) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x000a4808) popup_blid_sat_info2_window_t

0x5a22,	// (0x0009ab88) aid_size_cell_colour_35

0x5a3c,	// (0x0009aba2) aid_size_cell_colour_112

0x5a53,	// (0x0009abb9) aid_size_cell_effect

0xe796,	// (0x000a38fc) bg_tb_trans_pane_cp02

0xb8c2,	// (0x000a0a28) heading_imed_pane

0x5a6d,	// (0x0009abd3) listscroll_imed_pane

0xc301,	// (0x000a1467) heading_imed_pane_g1

0xc309,	// (0x000a146f) heading_imed_pane_t1

0xc317,	// (0x000a147d) grid_imed_colour_35_pane_ParamLimits

0xc317,	// (0x000a147d) grid_imed_colour_35_pane

0x5a79,	// (0x0009abdf) grid_imed_effect_pane

0xc32e,	// (0x000a1494) list_imed_aspect_pane

0x5a89,	// (0x0009abef) scroll_pane_cp027_ParamLimits

0x5a89,	// (0x0009abef) scroll_pane_cp027

0x5a95,	// (0x0009abfb) cell_imed_effect_pane_ParamLimits

0x5a95,	// (0x0009abfb) cell_imed_effect_pane

0xc336,	// (0x000a149c) cell_imed_colour_pane_ParamLimits

0xc336,	// (0x000a149c) cell_imed_colour_pane

0xc378,	// (0x000a14de) cell_imed_colour_pane_g1_ParamLimits

0xc378,	// (0x000a14de) cell_imed_colour_pane_g1

0xc389,	// (0x000a14ef) hgihlgiht_grid_pane_cp016_ParamLimits

0xc389,	// (0x000a14ef) hgihlgiht_grid_pane_cp016

0x5aad,	// (0x0009ac13) cell_imed_effect_pane_g1

0x5ab5,	// (0x0009ac1b) grid_highlight_pane_cp017

0xc39a,	// (0x000a1500) list_imed_single_pane_ParamLimits

0xc39a,	// (0x000a1500) list_imed_single_pane

0xe6b0,	// (0x000a3816) list_highlight_pane_cp07

0xc3af,	// (0x000a1515) list_imed_aspect_pane_comp1_t1

0xba36,	// (0x000a0b9c) bg_tb_trans_pane_cp05

0xc3d1,	// (0x000a1537) popup_imed_adjust2_window_g1

0xc3f8,	// (0x000a155e) popup_imed_adjust2_window_t1

0xc410,	// (0x000a1576) slider_imed_adjust_pane

0xc424,	// (0x000a158a) slider_imed_adjust_pane_g1

0xc434,	// (0x000a159a) slider_imed_adjust_pane_g2

0xc444,	// (0x000a15aa) slider_imed_adjust_pane_g3

0xc455,	// (0x000a15bb) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x000a494c) slider_imed_adjust_pane_g

0x5abe,	// (0x0009ac24) aid_size_cell_clipart2

0x5aca,	// (0x0009ac30) grid_imed_clipart_pane

0xc466,	// (0x000a15cc) scroll_pane_cp031

0x5ad4,	// (0x0009ac3a) cell_imed_clipart_pane_ParamLimits

0x5ad4,	// (0x0009ac3a) cell_imed_clipart_pane

0x5af6,	// (0x0009ac5c) cell_imed_clipart_pane_g1

0xe6b0,	// (0x000a3816) grid_highlight_pane_cp014

0x5854,	// (0x0009a9ba) main_clock2_pane_g1_ParamLimits

0x5854,	// (0x0009a9ba) main_clock2_pane_g1

0x5923,	// (0x0009aa89) aid_call2_pane_cp10

0x5935,	// (0x0009aa9b) aid_call_pane_cp10

0xa46e,	// (0x0009f5d4) popup_clock_analogue_window_cp10_g1

0xa46e,	// (0x0009f5d4) popup_clock_analogue_window_cp10_g2

0x5947,	// (0x0009aaad) popup_clock_analogue_window_cp10_g3

0x5947,	// (0x0009aaad) popup_clock_analogue_window_cp10_g4

0xa46e,	// (0x0009f5d4) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x000a493a) popup_clock_analogue_window_cp10_g

0x5959,	// (0x0009aabf) popup_clock_analogue_window_cp10_t1

0x598a,	// (0x0009aaf0) clock_digital_number_pane_cp10_ParamLimits

0x598a,	// (0x0009aaf0) clock_digital_number_pane_cp10

0x59a2,	// (0x0009ab08) clock_digital_number_pane_cp11_ParamLimits

0x59a2,	// (0x0009ab08) clock_digital_number_pane_cp11

0x59ba,	// (0x0009ab20) clock_digital_number_pane_cp12_ParamLimits

0x59ba,	// (0x0009ab20) clock_digital_number_pane_cp12

0x59d2,	// (0x0009ab38) clock_digital_number_pane_cp13_ParamLimits

0x59d2,	// (0x0009ab38) clock_digital_number_pane_cp13

0x59ea,	// (0x0009ab50) clock_digital_separator_pane_cp10_ParamLimits

0x59ea,	// (0x0009ab50) clock_digital_separator_pane_cp10

0x5a02,	// (0x0009ab68) popup_clock_digital_window_cp02_t1_ParamLimits

0x5a02,	// (0x0009ab68) popup_clock_digital_window_cp02_t1

0xed97,	// (0x000a3efd) clock_digital_number_pane_cp10_g1

0xed97,	// (0x000a3efd) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x000a4955) clock_digital_number_pane_cp10_g

0xed97,	// (0x000a3efd) clock_digital_separator_pane_cp10_g1

0xed97,	// (0x000a3efd) clock_digital_separator_pane_g2_cp10

0xa5f9,	// (0x0009f75f) navi_pane_vded_g4

0xa602,	// (0x0009f768) navi_pane_vded_g5

0xa60b,	// (0x0009f771) navi_pane_vded_t1

0x11e8,	// (0x0009634e) main_vded_pane

0x5aff,	// (0x0009ac65) main_vded_pane_g1

0x5b0b,	// (0x0009ac71) main_vded_pane_g2

0x5b15,	// (0x0009ac7b) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x000a495a) main_vded_pane_g

0x5b1f,	// (0x0009ac85) main_vded_pane_t1

0x5b2d,	// (0x0009ac93) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x000a4961) main_vded_pane_t

0x5b3b,	// (0x0009aca1) vded_slider_pane

0x5b45,	// (0x0009acab) vded_video_pane

0xc46e,	// (0x000a15d4) vded_video_pane_g1

0x5b4f,	// (0x0009acb5) vded_video_pane_g2

0xbe53,	// (0x000a0fb9) vded_video_pane_g3

0x0002,

0xf800,	// (0x000a4966) vded_video_pane_g

0xc478,	// (0x000a15de) vded_slider_pane_g1

0xbb91,	// (0x000a0cf7) vded_slider_pane_g2

0xc481,	// (0x000a15e7) vded_slider_pane_g3

0xc48a,	// (0x000a15f0) vded_slider_pane_g4

0xc493,	// (0x000a15f9) vded_slider_pane_g5

0x0004,

0xf807,	// (0x000a496d) vded_slider_pane_g

0x5624,	// (0x0009a78a) mup3_rocker_pane_ParamLimits

0x5624,	// (0x0009a78a) mup3_rocker_pane

0x5b58,	// (0x0009acbe) mup3_control_keys_pane_g1

0x5b60,	// (0x0009acc6) mup3_control_keys_pane_g2

0x5b68,	// (0x0009acce) mup3_control_keys_pane_g3

0x5b70,	// (0x0009acd6) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x000a4978) mup3_control_keys_pane_g

0x119c,	// (0x00096302) popup_toolbar2_fixed_window_cp01_ParamLimits

0x119c,	// (0x00096302) popup_toolbar2_fixed_window_cp01

0x563e,	// (0x0009a7a4) popup_toolbar2_fixed_window_cp02_ParamLimits

0x563e,	// (0x0009a7a4) popup_toolbar2_fixed_window_cp02

0xad9d,	// (0x0009ff03) popup_call2_audio_second_window_t4_ParamLimits

0xad9d,	// (0x0009ff03) popup_call2_audio_second_window_t4

0xb2cb,	// (0x000a0431) popup_call2_audio_first_window_t6_ParamLimits

0xb2cb,	// (0x000a0431) popup_call2_audio_first_window_t6

0xb561,	// (0x000a06c7) popup_call2_audio_out_window_t6_ParamLimits

0xb561,	// (0x000a06c7) popup_call2_audio_out_window_t6

0x11e8,	// (0x0009634e) main_vitu_pane

0x5b80,	// (0x0009ace6) aid_size_cell_itu_ParamLimits

0x5b80,	// (0x0009ace6) aid_size_cell_itu

0xe7a4,	// (0x000a390a) bg_popup_window_pane_cp08_ParamLimits

0xe7a4,	// (0x000a390a) bg_popup_window_pane_cp08

0x5b8e,	// (0x0009acf4) field_vitu_entry_pane_ParamLimits

0x5b8e,	// (0x0009acf4) field_vitu_entry_pane

0x5b9d,	// (0x0009ad03) grid_vitu_function_pane_ParamLimits

0x5b9d,	// (0x0009ad03) grid_vitu_function_pane

0x5bad,	// (0x0009ad13) grid_vitu_itu_pane_ParamLimits

0x5bad,	// (0x0009ad13) grid_vitu_itu_pane

0x5bbd,	// (0x0009ad23) cell_vitu_itu_pane_ParamLimits

0x5bbd,	// (0x0009ad23) cell_vitu_itu_pane

0x5bd2,	// (0x0009ad38) cell_vitu_function_pane_ParamLimits

0x5bd2,	// (0x0009ad38) cell_vitu_function_pane

0xe796,	// (0x000a38fc) bg_popup_sub_pane_cp08_ParamLimits

0xe796,	// (0x000a38fc) bg_popup_sub_pane_cp08

0x5be4,	// (0x0009ad4a) field_vitu_entry_pane_t1_ParamLimits

0x5be4,	// (0x0009ad4a) field_vitu_entry_pane_t1

0xc4b4,	// (0x000a161a) field_vitu_entry_pane_t2_ParamLimits

0xc4b4,	// (0x000a161a) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x000a4986) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x000a4986) field_vitu_entry_pane_t

0xc4d1,	// (0x000a1637) bg_button_pane_cp05_ParamLimits

0xc4d1,	// (0x000a1637) bg_button_pane_cp05

0x5c00,	// (0x0009ad66) cell_vitu_itu_pane_g1

0x5c18,	// (0x0009ad7e) cell_vitu_itu_pane_t1_ParamLimits

0x5c18,	// (0x0009ad7e) cell_vitu_itu_pane_t1

0x5c2a,	// (0x0009ad90) cell_vitu_itu_pane_t2_ParamLimits

0x5c2a,	// (0x0009ad90) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x000a498b) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x000a498b) cell_vitu_itu_pane_t

0xc4df,	// (0x000a1645) bg_button_pane_cp07

0x5c5f,	// (0x0009adc5) cell_vitu_function_pane_g1

0x147a,	// (0x000965e0) main_calc_pane_g1

0x0f59,	// (0x000960bf) aid_visual_content_pane

0x11e8,	// (0x0009634e) main_vradio_pane

0x5c68,	// (0x0009adce) main_vradio_pane_g1_ParamLimits

0x5c68,	// (0x0009adce) main_vradio_pane_g1

0xc4e9,	// (0x000a164f) main_vradio_pane_g2_ParamLimits

0xc4e9,	// (0x000a164f) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x000a4992) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x000a4992) main_vradio_pane_g

0x5c78,	// (0x0009adde) main_vradio_pane_t1_ParamLimits

0x5c78,	// (0x0009adde) main_vradio_pane_t1

0x5c8a,	// (0x0009adf0) main_vradio_pane_t2_ParamLimits

0x5c8a,	// (0x0009adf0) main_vradio_pane_t2

0xc4f6,	// (0x000a165c) main_vradio_pane_t3_ParamLimits

0xc4f6,	// (0x000a165c) main_vradio_pane_t3

0x0002,

0xf831,	// (0x000a4997) main_vradio_pane_t_ParamLimits

0xf831,	// (0x000a4997) main_vradio_pane_t

0x5c9c,	// (0x0009ae02) vradio_rocker_control_pane_ParamLimits

0x5c9c,	// (0x0009ae02) vradio_rocker_control_pane

0x5ca8,	// (0x0009ae0e) vradio_station_info_pane_ParamLimits

0x5ca8,	// (0x0009ae0e) vradio_station_info_pane

0xc50a,	// (0x000a1670) vradio_frequency_info_pane_ParamLimits

0xc50a,	// (0x000a1670) vradio_frequency_info_pane

0xbe53,	// (0x000a0fb9) vradio_station_info_pane_g1

0xc519,	// (0x000a167f) vradio_station_info_pane_t1_ParamLimits

0xc519,	// (0x000a167f) vradio_station_info_pane_t1

0xc53b,	// (0x000a16a1) vradio_station_info_pane_t2_ParamLimits

0xc53b,	// (0x000a16a1) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x000a499e) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x000a499e) vradio_station_info_pane_t

0xc54d,	// (0x000a16b3) vradio_tuning_pane

0xc555,	// (0x000a16bb) vradio_rocker_control_pane_g1

0xc55d,	// (0x000a16c3) vradio_rocker_control_pane_g2

0xc565,	// (0x000a16cb) vradio_rocker_control_pane_g3

0xc56d,	// (0x000a16d3) vradio_rocker_control_pane_g4

0xc575,	// (0x000a16db) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x000a49a3) vradio_rocker_control_pane_g

0x5cb7,	// (0x0009ae1d) vradio_frequency_info_pane_g1

0xc57d,	// (0x000a16e3) vradio_frequency_info_pane_t1_ParamLimits

0xc57d,	// (0x000a16e3) vradio_frequency_info_pane_t1

0x5cc1,	// (0x0009ae27) vradio_tuning_pane_g1

0x5cca,	// (0x0009ae30) vradio_tuning_pane_t1

0x0fa2,	// (0x00096108) area_side_right_pane_ParamLimits

0x0fa2,	// (0x00096108) area_side_right_pane

0xb9f1,	// (0x000a0b57) status_small_pane_g1

0xb9f9,	// (0x000a0b5f) status_small_pane_g2

0xba02,	// (0x000a0b68) status_small_pane_g3

0xba0b,	// (0x000a0b71) status_small_pane_g4

0x0003,

0xf5f8,	// (0x000a475e) status_small_pane_g

0xba14,	// (0x000a0b7a) status_small_pane_t1

0x11e8,	// (0x0009634e) main_video3_pane

0xc591,	// (0x000a16f7) cams_zoom_vslider_pane

0xc599,	// (0x000a16ff) image3_wide_pane_ParamLimits

0xc599,	// (0x000a16ff) image3_wide_pane

0xc5b3,	// (0x000a1719) image3_wide_small_pane

0xc5bf,	// (0x000a1725) main_video3_pane_g1_ParamLimits

0xc5bf,	// (0x000a1725) main_video3_pane_g1

0xc5db,	// (0x000a1741) main_video3_pane_g2_ParamLimits

0xc5db,	// (0x000a1741) main_video3_pane_g2

0x0001,

0xf848,	// (0x000a49ae) main_video3_pane_g_ParamLimits

0xf848,	// (0x000a49ae) main_video3_pane_g

0xc5f7,	// (0x000a175d) main_video3_pane_t1_ParamLimits

0xc5f7,	// (0x000a175d) main_video3_pane_t1

0xc622,	// (0x000a1788) main_video3_pane_t2_ParamLimits

0xc622,	// (0x000a1788) main_video3_pane_t2

0xc64d,	// (0x000a17b3) main_video3_pane_t3_ParamLimits

0xc64d,	// (0x000a17b3) main_video3_pane_t3

0x0002,

0xf84d,	// (0x000a49b3) main_video3_pane_t_ParamLimits

0xf84d,	// (0x000a49b3) main_video3_pane_t

0xc67a,	// (0x000a17e0) cams_zoom_vslider_pane_g1

0xc683,	// (0x000a17e9) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x000a49ba) cams_zoom_vslider_pane_g

0xc68b,	// (0x000a17f1) small_slider_vertical_pane

0xbe53,	// (0x000a0fb9) small_slider_vertical_pane_g1

0xbe53,	// (0x000a0fb9) small_slider_vertical_pane_g2

0xc693,	// (0x000a17f9) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x000a49bf) small_slider_vertical_pane_g

0x11e8,	// (0x0009634e) main_hwr_training_pane

0xc69c,	// (0x000a1802) hwr_training_instruct_pane_ParamLimits

0xc69c,	// (0x000a1802) hwr_training_instruct_pane

0x5cd9,	// (0x0009ae3f) hwr_training_navi_pane_ParamLimits

0x5cd9,	// (0x0009ae3f) hwr_training_navi_pane

0x5cf3,	// (0x0009ae59) hwr_training_write_pane_ParamLimits

0x5cf3,	// (0x0009ae59) hwr_training_write_pane

0xe6b0,	// (0x000a3816) bg_frame_shadow_pane

0xc6d3,	// (0x000a1839) hwr_training_write_pane_g1

0xc6db,	// (0x000a1841) hwr_training_write_pane_g2

0xc6e3,	// (0x000a1849) hwr_training_write_pane_g3

0xc6eb,	// (0x000a1851) hwr_training_write_pane_g4

0xc6f3,	// (0x000a1859) hwr_training_write_pane_g5

0xc6fb,	// (0x000a1861) hwr_training_write_pane_g6

0xc703,	// (0x000a1869) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x000a49c6) hwr_training_write_pane_g

0x5d2b,	// (0x0009ae91) hwr_training_navi_pane_g1_ParamLimits

0x5d2b,	// (0x0009ae91) hwr_training_navi_pane_g1

0x5d3d,	// (0x0009aea3) hwr_training_navi_pane_g2_ParamLimits

0x5d3d,	// (0x0009aea3) hwr_training_navi_pane_g2

0x5d4f,	// (0x0009aeb5) hwr_training_navi_pane_g3_ParamLimits

0x5d4f,	// (0x0009aeb5) hwr_training_navi_pane_g3

0x5d5f,	// (0x0009aec5) hwr_training_navi_pane_g4_ParamLimits

0x5d5f,	// (0x0009aec5) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x000a49d5) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x000a49d5) hwr_training_navi_pane_g

0x5d79,	// (0x0009aedf) hwr_training_navi_pane_t1

0x5d87,	// (0x0009aeed) list_single_hwr_training_instruct_pane_ParamLimits

0x5d87,	// (0x0009aeed) list_single_hwr_training_instruct_pane

0xc70b,	// (0x000a1871) list_single_hwr_training_instruct_pane_t1

0xbd7e,	// (0x000a0ee4) bg_frame_shadow_pane_g1

0xc71a,	// (0x000a1880) bg_frame_shadow_pane_g2

0xc722,	// (0x000a1888) bg_frame_shadow_pane_g3

0xc72a,	// (0x000a1890) bg_frame_shadow_pane_g4

0xc732,	// (0x000a1898) bg_frame_shadow_pane_g5

0xc73a,	// (0x000a18a0) bg_frame_shadow_pane_g6

0xc742,	// (0x000a18a8) bg_frame_shadow_pane_g7

0xef1d,	// (0x000a4083) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x000a49e0) bg_frame_shadow_pane_g

0x11e8,	// (0x0009634e) main_video_tele_dialer_pane

0x5dac,	// (0x0009af12) aid_size_cell_video_keypad_ParamLimits

0x5dac,	// (0x0009af12) aid_size_cell_video_keypad

0x5dbc,	// (0x0009af22) grid_video_dialer_keypad_pane_ParamLimits

0x5dbc,	// (0x0009af22) grid_video_dialer_keypad_pane

0x5df0,	// (0x0009af56) video_down_pane_cp_ParamLimits

0x5df0,	// (0x0009af56) video_down_pane_cp

0x5e1a,	// (0x0009af80) cell_video_dialer_keypad_pane_ParamLimits

0x5e1a,	// (0x0009af80) cell_video_dialer_keypad_pane

0xc74a,	// (0x000a18b0) bg_button_pane_cp08_ParamLimits

0xc74a,	// (0x000a18b0) bg_button_pane_cp08

0x5e2f,	// (0x0009af95) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5e2f,	// (0x0009af95) cell_video_dialer_keypad_pane_g1

0x5618,	// (0x0009a77e) mup3_rocker2_pane_ParamLimits

0x5618,	// (0x0009a77e) mup3_rocker2_pane

0xbe53,	// (0x000a0fb9) mup3_rocker2_pane_g1

0x4520,	// (0x00099686) main_dialer2_pane

0x11e8,	// (0x0009634e) main_mp4_pane

0x5e6e,	// (0x0009afd4) main_mp4_pane_g1_ParamLimits

0x5e6e,	// (0x0009afd4) main_mp4_pane_g1

0x5e7c,	// (0x0009afe2) main_mp4_pane_g2_ParamLimits

0x5e7c,	// (0x0009afe2) main_mp4_pane_g2

0x5e8a,	// (0x0009aff0) main_mp4_pane_g3_ParamLimits

0x5e8a,	// (0x0009aff0) main_mp4_pane_g3

0x5ecf,	// (0x0009b035) main_mp4_pane_g4_ParamLimits

0x5ecf,	// (0x0009b035) main_mp4_pane_g4

0x5ef7,	// (0x0009b05d) main_mp4_pane_g5_ParamLimits

0x5ef7,	// (0x0009b05d) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x000a4a00) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x000a4a00) main_mp4_pane_g

0x5f47,	// (0x0009b0ad) main_mp4_pane_t1_ParamLimits

0x5f47,	// (0x0009b0ad) main_mp4_pane_t1

0x5fa3,	// (0x0009b109) main_mp4_pane_t2_ParamLimits

0x5fa3,	// (0x0009b109) main_mp4_pane_t2

0xc756,	// (0x000a18bc) main_mp4_pane_t3_ParamLimits

0xc756,	// (0x000a18bc) main_mp4_pane_t3

0x5ff5,	// (0x0009b15b) main_mp4_pane_t4_ParamLimits

0x5ff5,	// (0x0009b15b) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x000a4a0d) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x000a4a0d) main_mp4_pane_t

0x6039,	// (0x0009b19f) mp4_progress_pane_ParamLimits

0x6039,	// (0x0009b19f) mp4_progress_pane

0x6083,	// (0x0009b1e9) mp4_rocker_pane_ParamLimits

0x6083,	// (0x0009b1e9) mp4_rocker_pane

0xc77e,	// (0x000a18e4) mp4_progress_pane_t1

0xc797,	// (0x000a18fd) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x000a4a16) mp4_progress_pane_t

0xc7b0,	// (0x000a1916) mup_progress_pane_cp04

0xcf9b,	// (0x000a2101) mp4_rocker_pane_g1

0x60a3,	// (0x0009b209) aid_cell_size_keypad2_ParamLimits

0x60a3,	// (0x0009b209) aid_cell_size_keypad2

0x60b3,	// (0x0009b219) dialer2_ne_pane_ParamLimits

0x60b3,	// (0x0009b219) dialer2_ne_pane

0x60c1,	// (0x0009b227) grid_dialer2_keypad_pane_ParamLimits

0x60c1,	// (0x0009b227) grid_dialer2_keypad_pane

0xcfa5,	// (0x000a210b) bg_popup_call_pane_cp07_ParamLimits

0xcfa5,	// (0x000a210b) bg_popup_call_pane_cp07

0x60d1,	// (0x0009b237) dialer2_ne_pane_t1_ParamLimits

0x60d1,	// (0x0009b237) dialer2_ne_pane_t1

0x60f6,	// (0x0009b25c) cell_dialer2_keypad_pane_ParamLimits

0x60f6,	// (0x0009b25c) cell_dialer2_keypad_pane

0xc7ce,	// (0x000a1934) bg_button_pane_pane_cp04_ParamLimits

0xc7ce,	// (0x000a1934) bg_button_pane_pane_cp04

0x610b,	// (0x0009b271) cell_dialer2_keypad_pane_g1_ParamLimits

0x610b,	// (0x0009b271) cell_dialer2_keypad_pane_g1

0x20f3,	// (0x00097259) aid_placing_vt_set_content_ParamLimits

0x20f3,	// (0x00097259) aid_placing_vt_set_content

0x211f,	// (0x00097285) aid_placing_vt_set_title_ParamLimits

0x211f,	// (0x00097285) aid_placing_vt_set_title

0x11e8,	// (0x0009634e) main_image3_pane

0x61a5,	// (0x0009b30b) area_side_right_pane_cp01_ParamLimits

0x61a5,	// (0x0009b30b) area_side_right_pane_cp01

0x61d2,	// (0x0009b338) main_image3_pane_g1_ParamLimits

0x61d2,	// (0x0009b338) main_image3_pane_g1

0x61e0,	// (0x0009b346) main_image3_pane_g2_ParamLimits

0x61e0,	// (0x0009b346) main_image3_pane_g2

0x61f9,	// (0x0009b35f) main_image3_pane_g3_ParamLimits

0x61f9,	// (0x0009b35f) main_image3_pane_g3

0x6212,	// (0x0009b378) main_image3_pane_g4_ParamLimits

0x6212,	// (0x0009b378) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x000a4a25) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x000a4a25) main_image3_pane_g

0x622b,	// (0x0009b391) main_image3_pane_t1_ParamLimits

0x622b,	// (0x0009b391) main_image3_pane_t1

0x6250,	// (0x0009b3b6) main_image3_pane_t2_ParamLimits

0x6250,	// (0x0009b3b6) main_image3_pane_t2

0x626f,	// (0x0009b3d5) main_image3_pane_t3_ParamLimits

0x626f,	// (0x0009b3d5) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x000a4a2e) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x000a4a2e) main_image3_pane_t

0xe7a4,	// (0x000a390a) grid_sctrl_middle_pane_cp01_ParamLimits

0xe7a4,	// (0x000a390a) grid_sctrl_middle_pane_cp01

0x62d0,	// (0x0009b436) cell_sctrl_middle_pane_cp01_ParamLimits

0x62d0,	// (0x0009b436) cell_sctrl_middle_pane_cp01

0x62e1,	// (0x0009b447) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x62e1,	// (0x0009b447) cell_sctrl_middle_pane_cp01_g1

0x11e8,	// (0x0009634e) main_call4_pane

0x62ee,	// (0x0009b454) aid_size_button_call4_ParamLimits

0x62ee,	// (0x0009b454) aid_size_button_call4

0x631e,	// (0x0009b484) call4_windows_pane_ParamLimits

0x631e,	// (0x0009b484) call4_windows_pane

0x6338,	// (0x0009b49e) grid_call4_button_pane_ParamLimits

0x6338,	// (0x0009b49e) grid_call4_button_pane

0xc7da,	// (0x000a1940) call4_windows_conf_pane

0xc7f1,	// (0x000a1957) popup_call4_audio_first_window_ParamLimits

0xc7f1,	// (0x000a1957) popup_call4_audio_first_window

0xc83d,	// (0x000a19a3) popup_call4_audio_second_window_ParamLimits

0xc83d,	// (0x000a19a3) popup_call4_audio_second_window

0xc851,	// (0x000a19b7) popup_call4_audio_wait_window_ParamLimits

0xc851,	// (0x000a19b7) popup_call4_audio_wait_window

0x635c,	// (0x0009b4c2) cell_call4_button_pane_ParamLimits

0x635c,	// (0x0009b4c2) cell_call4_button_pane

0x6381,	// (0x0009b4e7) bg_button_pane_cp09_ParamLimits

0x6381,	// (0x0009b4e7) bg_button_pane_cp09

0x638d,	// (0x0009b4f3) cell_call4_button_pane_g1_ParamLimits

0x638d,	// (0x0009b4f3) cell_call4_button_pane_g1

0x639a,	// (0x0009b500) cell_call4_button_pane_t1_ParamLimits

0x639a,	// (0x0009b500) cell_call4_button_pane_t1

0xc899,	// (0x000a19ff) popup_call4_audio_conf_window_ParamLimits

0xc899,	// (0x000a19ff) popup_call4_audio_conf_window

0x564b,	// (0x0009a7b1) mup3_progress_pane_t1_ParamLimits

0x566a,	// (0x0009a7d0) mup3_progress_pane_t2_ParamLimits

0xc189,	// (0x000a12ef) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x000a4902) mup3_progress_pane_t_ParamLimits

0xc1a6,	// (0x000a130c) mup_progress_pane_cp03_ParamLimits

0x5b78,	// (0x0009acde) mup3_control_keys_pane_g4_copy1

0x6067,	// (0x0009b1cd) mp4_rocker2_pane_ParamLimits

0x6067,	// (0x0009b1cd) mp4_rocker2_pane

0xc8ad,	// (0x000a1a13) mp4_rocker2_pane_g1

0xc8b5,	// (0x000a1a1b) mp4_rocker2_pane_g2

0x63ac,	// (0x0009b512) mp4_rocker2_pane_g3

0x63b4,	// (0x0009b51a) mp4_rocker2_pane_g4

0x63bc,	// (0x0009b522) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x000a4a37) mp4_rocker2_pane_g

0x11e8,	// (0x0009634e) main_camera4_pane

0x11e8,	// (0x0009634e) main_video4_pane

0x5dcc,	// (0x0009af32) main_video_tele_dialer_pane_t1_ParamLimits

0x5dcc,	// (0x0009af32) main_video_tele_dialer_pane_t1

0x5dde,	// (0x0009af44) main_video_tele_dialer_pane_t2_ParamLimits

0x5dde,	// (0x0009af44) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x000a49f1) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x000a49f1) main_video_tele_dialer_pane_t

0x63dc,	// (0x0009b542) cam4_autofocus_pane_ParamLimits

0x63dc,	// (0x0009b542) cam4_autofocus_pane

0x63f6,	// (0x0009b55c) cam4_image_uncrop_pane_ParamLimits

0x63f6,	// (0x0009b55c) cam4_image_uncrop_pane

0x640d,	// (0x0009b573) cam4_indicators_pane_ParamLimits

0x640d,	// (0x0009b573) cam4_indicators_pane

0x6429,	// (0x0009b58f) main_camera4_pane_g1_ParamLimits

0x6429,	// (0x0009b58f) main_camera4_pane_g1

0x6435,	// (0x0009b59b) main_camera4_pane_g2_ParamLimits

0x6435,	// (0x0009b59b) main_camera4_pane_g2

0x6435,	// (0x0009b59b) main_camera4_pane_g3_ParamLimits

0x6435,	// (0x0009b59b) main_camera4_pane_g3

0x6441,	// (0x0009b5a7) main_camera4_pane_g4_ParamLimits

0x6441,	// (0x0009b5a7) main_camera4_pane_g4

0x644d,	// (0x0009b5b3) main_camera4_pane_g5_ParamLimits

0x644d,	// (0x0009b5b3) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x000a4a42) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x000a4a42) main_camera4_pane_g

0x6467,	// (0x0009b5cd) main_camera4_pane_t1_ParamLimits

0x6467,	// (0x0009b5cd) main_camera4_pane_t1

0x64af,	// (0x0009b615) bg_tb_trans_pane_cp06

0x64c5,	// (0x0009b62b) cam4_indicators_pane_g1

0x64d6,	// (0x0009b63c) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x000a4a5d) cam4_indicators_pane_g

0x64f4,	// (0x0009b65a) cam4_indicators_pane_t1

0x651e,	// (0x0009b684) main_video4_pane_g1_ParamLimits

0x651e,	// (0x0009b684) main_video4_pane_g1

0x652a,	// (0x0009b690) main_video4_pane_g2_ParamLimits

0x652a,	// (0x0009b690) main_video4_pane_g2

0x6536,	// (0x0009b69c) main_video4_pane_g3_ParamLimits

0x6536,	// (0x0009b69c) main_video4_pane_g3

0x6542,	// (0x0009b6a8) main_video4_pane_g4_ParamLimits

0x6542,	// (0x0009b6a8) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x000a4a64) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x000a4a64) main_video4_pane_g

0x6562,	// (0x0009b6c8) vid4_indicators_pane_ParamLimits

0x6562,	// (0x0009b6c8) vid4_indicators_pane

0x6581,	// (0x0009b6e7) video4_image_uncrop_cif_pane_ParamLimits

0x6581,	// (0x0009b6e7) video4_image_uncrop_cif_pane

0x6590,	// (0x0009b6f6) video4_image_uncrop_nhd_pane_ParamLimits

0x6590,	// (0x0009b6f6) video4_image_uncrop_nhd_pane

0x63f6,	// (0x0009b55c) video4_image_uncrop_vga_pane_ParamLimits

0x63f6,	// (0x0009b55c) video4_image_uncrop_vga_pane

0x4512,	// (0x00099678) bg_tb_trans_pane_cp07

0x65a7,	// (0x0009b70d) vid4_indicators_pane_g1

0x65bb,	// (0x0009b721) vid4_indicators_pane_g2

0x65cf,	// (0x0009b735) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x000a4a6f) vid4_indicators_pane_g

0x65fe,	// (0x0009b764) vid4_indicators_pane_t1

0x6615,	// (0x0009b77b) cam4_autofocus_pane_g1

0x661d,	// (0x0009b783) cam4_autofocus_pane_g2

0x6625,	// (0x0009b78b) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x000a4a7a) cam4_autofocus_pane_g

0x662d,	// (0x0009b793) cam4_autofocus_pane_g3_copy1

0x5dfe,	// (0x0009af64) video_down_pane_cp_t1

0x5e0c,	// (0x0009af72) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x000a49f6) video_down_pane_cp_t

0x11ce,	// (0x00096334) popup_vitu2_window_ParamLimits

0x11ce,	// (0x00096334) popup_vitu2_window

0x6635,	// (0x0009b79b) aid_size_cell2_itu2_ParamLimits

0x6635,	// (0x0009b79b) aid_size_cell2_itu2

0x6657,	// (0x0009b7bd) aid_size_cell_itu2_ParamLimits

0x6657,	// (0x0009b7bd) aid_size_cell_itu2

0x669b,	// (0x0009b801) bg_popup_window_pane_cp09_ParamLimits

0x669b,	// (0x0009b801) bg_popup_window_pane_cp09

0x66a9,	// (0x0009b80f) field_vitu2_entry_pane_ParamLimits

0x66a9,	// (0x0009b80f) field_vitu2_entry_pane

0x66c9,	// (0x0009b82f) grid_vitu2_function_pane_ParamLimits

0x66c9,	// (0x0009b82f) grid_vitu2_function_pane

0x670d,	// (0x0009b873) grid_vitu2_itu_pane_ParamLimits

0x670d,	// (0x0009b873) grid_vitu2_itu_pane

0x6789,	// (0x0009b8ef) cell_vitu2_itu_pane_ParamLimits

0x6789,	// (0x0009b8ef) cell_vitu2_itu_pane

0x67a2,	// (0x0009b908) cell_vitu2_function_pane_ParamLimits

0x67a2,	// (0x0009b908) cell_vitu2_function_pane

0xc8cf,	// (0x000a1a35) bg_popup_call_pane_cp08_ParamLimits

0xc8cf,	// (0x000a1a35) bg_popup_call_pane_cp08

0xc8e6,	// (0x000a1a4c) field_vitu2_entry_pane_g1

0xc8f2,	// (0x000a1a58) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x000a4a81) field_vitu2_entry_pane_g

0x67e3,	// (0x0009b949) field_vitu2_entry_pane_t1_ParamLimits

0x67e3,	// (0x0009b949) field_vitu2_entry_pane_t1

0xc90c,	// (0x000a1a72) field_vitu2_entry_pane_t2_ParamLimits

0xc90c,	// (0x000a1a72) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x000a4a88) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x000a4a88) field_vitu2_entry_pane_t

0x6813,	// (0x0009b979) bg_button_pane_cp010_ParamLimits

0x6813,	// (0x0009b979) bg_button_pane_cp010

0x6821,	// (0x0009b987) cell_vitu2_itu_pane_g1

0x6841,	// (0x0009b9a7) cell_vitu2_itu_pane_t1_ParamLimits

0x6841,	// (0x0009b9a7) cell_vitu2_itu_pane_t1

0x0e3d,	// (0x00095fa3) cell_vitu2_itu_pane_t2_ParamLimits

0x0e3d,	// (0x00095fa3) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x000a4a92) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x000a4a92) cell_vitu2_itu_pane_t

0x4512,	// (0x00099678) bg_button_pane_cp011

0x688d,	// (0x0009b9f3) cell_vitu2_function_pane_g1

0x11e8,	// (0x0009634e) main_myfav_hc_pane

0x62b1,	// (0x0009b417) popup_image3_note_pane_ParamLimits

0x62b1,	// (0x0009b417) popup_image3_note_pane

0x62bf,	// (0x0009b425) popup_image3_tool_bar_pane_ParamLimits

0x62bf,	// (0x0009b425) popup_image3_tool_bar_pane

0x0eb3,	// (0x00096019) cell_vitu2_itu_pane_t3_ParamLimits

0x0eb3,	// (0x00096019) cell_vitu2_itu_pane_t3

0xe6b0,	// (0x000a3816) bg_popup_trans_pane

0xc931,	// (0x000a1a97) grid_image3_tool_bar_pane

0xc93b,	// (0x000a1aa1) bg_popup_trans_pane_g1

0x9e22,	// (0x0009ef88) bg_popup_trans_pane_g2

0xc943,	// (0x000a1aa9) bg_popup_trans_pane_g3

0xc94b,	// (0x000a1ab1) bg_popup_trans_pane_g4

0xc953,	// (0x000a1ab9) bg_popup_trans_pane_g5

0xc95b,	// (0x000a1ac1) bg_popup_trans_pane_g6

0xc963,	// (0x000a1ac9) bg_popup_trans_pane_g7

0xc96b,	// (0x000a1ad1) bg_popup_trans_pane_g8

0x9e02,	// (0x0009ef68) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x000a4a99) bg_popup_trans_pane_g

0xc973,	// (0x000a1ad9) cell_image3_tool_bar_pane_ParamLimits

0xc973,	// (0x000a1ad9) cell_image3_tool_bar_pane

0xbe53,	// (0x000a0fb9) cell_image3_tool_bar_pane_g1

0xe6b0,	// (0x000a3816) bg_popup_trans_pane_cp1

0xc987,	// (0x000a1aed) popup_image3_note_pane_t1

0xc995,	// (0x000a1afb) popup_image3_note_pane_t2

0xc9a3,	// (0x000a1b09) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x000a4aac) popup_image3_note_pane_t

0xc9b1,	// (0x000a1b17) popup_image3_note_pane_t3_copy1

0x68a1,	// (0x0009ba07) bg_myfav_hc_instruction_pane_ParamLimits

0x68a1,	// (0x0009ba07) bg_myfav_hc_instruction_pane

0x68b9,	// (0x0009ba1f) cell_myfav_contact_pane_ParamLimits

0x68b9,	// (0x0009ba1f) cell_myfav_contact_pane

0x68d3,	// (0x0009ba39) cell_myfav_contact_pane_cp1_ParamLimits

0x68d3,	// (0x0009ba39) cell_myfav_contact_pane_cp1

0x68eb,	// (0x0009ba51) cell_myfav_contact_pane_cp2_ParamLimits

0x68eb,	// (0x0009ba51) cell_myfav_contact_pane_cp2

0x6903,	// (0x0009ba69) cell_myfav_contact_pane_cp3_ParamLimits

0x6903,	// (0x0009ba69) cell_myfav_contact_pane_cp3

0x691a,	// (0x0009ba80) cell_myfav_contact_pane_cp4_ParamLimits

0x691a,	// (0x0009ba80) cell_myfav_contact_pane_cp4

0x6930,	// (0x0009ba96) cell_myfav_contact_pane_cp5_ParamLimits

0x6930,	// (0x0009ba96) cell_myfav_contact_pane_cp5

0x6944,	// (0x0009baaa) cell_myfav_contact_pane_cp6_ParamLimits

0x6944,	// (0x0009baaa) cell_myfav_contact_pane_cp6

0x6958,	// (0x0009babe) cell_myfav_contact_pane_cp7_ParamLimits

0x6958,	// (0x0009babe) cell_myfav_contact_pane_cp7

0xc9bf,	// (0x000a1b25) listscroll_gen_pane_cp05

0x6970,	// (0x0009bad6) main_myfav_hc_pane_g1_ParamLimits

0x6970,	// (0x0009bad6) main_myfav_hc_pane_g1

0x6986,	// (0x0009baec) main_myfav_hc_pane_g2_ParamLimits

0x6986,	// (0x0009baec) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x000a4ab3) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x000a4ab3) main_myfav_hc_pane_g

0x69b4,	// (0x0009bb1a) main_myfav_hc_pane_t1_ParamLimits

0x69b4,	// (0x0009bb1a) main_myfav_hc_pane_t1

0xc9c8,	// (0x000a1b2e) main_myfav_hc_pane_t2_ParamLimits

0xc9c8,	// (0x000a1b2e) main_myfav_hc_pane_t2

0xc9da,	// (0x000a1b40) main_myfav_hc_pane_t3_ParamLimits

0xc9da,	// (0x000a1b40) main_myfav_hc_pane_t3

0x69cb,	// (0x0009bb31) main_myfav_hc_pane_t4_ParamLimits

0x69cb,	// (0x0009bb31) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x000a4aba) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x000a4aba) main_myfav_hc_pane_t

0xbe53,	// (0x000a0fb9) bg_myfav_hc_instruction_pane_g1

0xc9ec,	// (0x000a1b52) cell_myfav_contact_pane_g1_ParamLimits

0xc9ec,	// (0x000a1b52) cell_myfav_contact_pane_g1

0xc9ec,	// (0x000a1b52) cell_myfav_contact_pane_g2_ParamLimits

0xc9ec,	// (0x000a1b52) cell_myfav_contact_pane_g2

0xc9f8,	// (0x000a1b5e) cell_myfav_contact_pane_g3_ParamLimits

0xc9f8,	// (0x000a1b5e) cell_myfav_contact_pane_g3

0xc173,	// (0x000a12d9) cell_myfav_contact_pane_g4_ParamLimits

0xc173,	// (0x000a12d9) cell_myfav_contact_pane_g4

0xca05,	// (0x000a1b6b) cell_myfav_contact_pane_g5_ParamLimits

0xca05,	// (0x000a1b6b) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x000a4ac5) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x000a4ac5) cell_myfav_contact_pane_g

0x699c,	// (0x0009bb02) main_myfav_hc_pane_g3_ParamLimits

0x699c,	// (0x0009bb02) main_myfav_hc_pane_g3

0x10d7,	// (0x0009623d) popup_adpt_find_window

0x69f5,	// (0x0009bb5b) afind_page_pane_ParamLimits

0x69f5,	// (0x0009bb5b) afind_page_pane

0x6a02,	// (0x0009bb68) aid_size_cell_afind_ParamLimits

0x6a02,	// (0x0009bb68) aid_size_cell_afind

0x6a1c,	// (0x0009bb82) bg_popup_sub_pane_cp09_ParamLimits

0x6a1c,	// (0x0009bb82) bg_popup_sub_pane_cp09

0x6a29,	// (0x0009bb8f) find_pane_cp01_ParamLimits

0x6a29,	// (0x0009bb8f) find_pane_cp01

0xca11,	// (0x000a1b77) grid_afind_control_pane_ParamLimits

0xca11,	// (0x000a1b77) grid_afind_control_pane

0x6a36,	// (0x0009bb9c) grid_afind_pane_ParamLimits

0x6a36,	// (0x0009bb9c) grid_afind_pane

0x6a52,	// (0x0009bbb8) cell_afind_pane_ParamLimits

0x6a52,	// (0x0009bbb8) cell_afind_pane

0xbe53,	// (0x000a0fb9) afind_page_pane_g1

0x6a9a,	// (0x0009bc00) afind_page_pane_g2

0x6aa3,	// (0x0009bc09) afind_page_pane_g3

0x0002,

0xf96a,	// (0x000a4ad0) afind_page_pane_g

0x6aac,	// (0x0009bc12) afind_page_pane_t1

0xca25,	// (0x000a1b8b) cell_afind_grid_control_pane_ParamLimits

0xca25,	// (0x000a1b8b) cell_afind_grid_control_pane

0xc7ce,	// (0x000a1934) bg_button_pane_cp69_ParamLimits

0xc7ce,	// (0x000a1934) bg_button_pane_cp69

0x6acc,	// (0x0009bc32) cell_afind_pane_g1_ParamLimits

0x6acc,	// (0x0009bc32) cell_afind_pane_g1

0x6ad9,	// (0x0009bc3f) cell_afind_pane_t1_ParamLimits

0x6ad9,	// (0x0009bc3f) cell_afind_pane_t1

0x9c1b,	// (0x0009ed81) bg_button_pane_cp72

0xca34,	// (0x000a1b9a) cell_afind_grid_control_pane_g1

0x4090,	// (0x000991f6) aid_image_placing_area_ParamLimits

0x4090,	// (0x000991f6) aid_image_placing_area

0xc49c,	// (0x000a1602) field_vitu_entry_pane_g1_ParamLimits

0xc49c,	// (0x000a1602) field_vitu_entry_pane_g1

0xc4a8,	// (0x000a160e) field_vitu_entry_pane_g2_ParamLimits

0xc4a8,	// (0x000a160e) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x000a4981) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x000a4981) field_vitu_entry_pane_g

0x5c00,	// (0x0009ad66) cell_vitu_itu_pane_g1_ParamLimits

0x5c42,	// (0x0009ada8) cell_vitu_itu_pane_t3_ParamLimits

0x5c42,	// (0x0009ada8) cell_vitu_itu_pane_t3

0xc77e,	// (0x000a18e4) mp4_progress_pane_t1_ParamLimits

0xc797,	// (0x000a18fd) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x000a4a16) mp4_progress_pane_t_ParamLimits

0xc7b0,	// (0x000a1916) mup_progress_pane_cp04_ParamLimits

0x69df,	// (0x0009bb45) main_myfav_hc_pane_t5_ParamLimits

0x69df,	// (0x0009bb45) main_myfav_hc_pane_t5

0x0e35,	// (0x00095f9b) aid_zoom_text_primary

0x10d7,	// (0x0009623d) popup_adpt_find_window_ParamLimits

0x4512,	// (0x00099678) main_cam_set_pane

0x641b,	// (0x0009b581) cam4_zoom_pane_ParamLimits

0x641b,	// (0x0009b581) cam4_zoom_pane

0x6aeb,	// (0x0009bc51) main_cam_set_pane_g1_ParamLimits

0x6aeb,	// (0x0009bc51) main_cam_set_pane_g1

0x6af9,	// (0x0009bc5f) main_cam_set_pane_g2_ParamLimits

0x6af9,	// (0x0009bc5f) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x000a4ad7) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x000a4ad7) main_cam_set_pane_g

0x6b05,	// (0x0009bc6b) main_cam_set_pane_t1_ParamLimits

0x6b05,	// (0x0009bc6b) main_cam_set_pane_t1

0x6b21,	// (0x0009bc87) main_cset_listscroll_pane_ParamLimits

0x6b21,	// (0x0009bc87) main_cset_listscroll_pane

0x6b4c,	// (0x0009bcb2) main_cset_slider_pane_ParamLimits

0x6b4c,	// (0x0009bcb2) main_cset_slider_pane

0xca45,	// (0x000a1bab) main_cset_list_pane_ParamLimits

0xca45,	// (0x000a1bab) main_cset_list_pane

0xca55,	// (0x000a1bbb) scroll_pane_cp028

0x6b6b,	// (0x0009bcd1) aid_area_touch_slider

0x6b87,	// (0x0009bced) cset_slider_pane

0x6bb1,	// (0x0009bd17) main_cset_slider_pane_g1

0x6bc6,	// (0x0009bd2c) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x000a4adc) main_cset_slider_pane_g

0xca8e,	// (0x000a1bf4) main_cset_slider_pane_t1

0x6c88,	// (0x0009bdee) main_cset_slider_pane_t2

0x6ca2,	// (0x0009be08) main_cset_slider_pane_t3

0x6cbc,	// (0x0009be22) main_cset_slider_pane_t4

0x6cd6,	// (0x0009be3c) main_cset_slider_pane_t5

0x6cf4,	// (0x0009be5a) main_cset_slider_pane_t6

0x6d0b,	// (0x0009be71) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x000a4b01) main_cset_slider_pane_t

0x6e17,	// (0x0009bf7d) cset_list_set_pane_ParamLimits

0x6e17,	// (0x0009bf7d) cset_list_set_pane

0x6e2d,	// (0x0009bf93) aid_position_infowindow_above

0x6e35,	// (0x0009bf9b) aid_position_infowindow_below

0xf072,	// (0x000a41d8) cset_list_set_pane_g1_ParamLimits

0xf072,	// (0x000a41d8) cset_list_set_pane_g1

0xcb2e,	// (0x000a1c94) cset_list_set_pane_g3_ParamLimits

0xcb2e,	// (0x000a1c94) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x000a4b20) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x000a4b20) cset_list_set_pane_g

0xcb3d,	// (0x000a1ca3) cset_list_set_pane_t1_ParamLimits

0xcb3d,	// (0x000a1ca3) cset_list_set_pane_t1

0xe796,	// (0x000a38fc) list_highlight_pane_cp021_ParamLimits

0xe796,	// (0x000a38fc) list_highlight_pane_cp021

0xa75f,	// (0x0009f8c5) cset_slider_pane_g1

0xa771,	// (0x0009f8d7) cset_slider_pane_g2

0xa768,	// (0x0009f8ce) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x000a4b25) cset_slider_pane_g

0x6e3d,	// (0x0009bfa3) aid_area_touch_cam4_zoom

0x6e45,	// (0x0009bfab) cam4_zoom_cont_pane

0x6e4d,	// (0x0009bfb3) cam4_zoom_pane_g1

0x6e55,	// (0x0009bfbb) cam4_zoom_pane_g2

0x6e5d,	// (0x0009bfc3) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x000a4b2c) cam4_zoom_pane_g

0x6e65,	// (0x0009bfcb) cam4_zoom_cont_pane_g1

0x6e6e,	// (0x0009bfd4) cam4_zoom_cont_pane_g2

0x6e77,	// (0x0009bfdd) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x000a4b33) cam4_zoom_cont_pane_g

0x6308,	// (0x0009b46e) call4_image_pane_ParamLimits

0x6308,	// (0x0009b46e) call4_image_pane

0xc7da,	// (0x000a1940) call4_windows_conf_pane_ParamLimits

0xc81b,	// (0x000a1981) popup_call4_audio_in_window_ParamLimits

0xc81b,	// (0x000a1981) popup_call4_audio_in_window

0xe6b0,	// (0x000a3816) bg_popup_call2_act_pane_cp02

0xc891,	// (0x000a19f7) call4_list_conf_pane

0xbe53,	// (0x000a0fb9) call4_image_pane_g1

0xbe53,	// (0x000a0fb9) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x000a4842) call4_image_pane_g

0xcb52,	// (0x000a1cb8) list_single_graphic_popup_conf4_pane_ParamLimits

0xcb52,	// (0x000a1cb8) list_single_graphic_popup_conf4_pane

0xe6b0,	// (0x000a3816) list_highlight_pane_cp022

0xcb80,	// (0x000a1ce6) list_single_graphic_popup_conf4_pane_g1

0xa33e,	// (0x0009f4a4) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x000a4b3a) list_single_graphic_popup_conf4_pane_g

0xcb88,	// (0x000a1cee) list_single_graphic_popup_conf4_pane_t1

0x2283,	// (0x000973e9) popup_vtel_slider_window_ParamLimits

0x2283,	// (0x000973e9) popup_vtel_slider_window

0xc7bc,	// (0x000a1922) dialer2_ne_pane_t2_ParamLimits

0xc7bc,	// (0x000a1922) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x000a4a1b) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x000a4a1b) dialer2_ne_pane_t

0xe796,	// (0x000a38fc) bg_popup_sub_pane_cp010_ParamLimits

0xe796,	// (0x000a38fc) bg_popup_sub_pane_cp010

0x6e80,	// (0x0009bfe6) popup_vtel_slider_window_g1_ParamLimits

0x6e80,	// (0x0009bfe6) popup_vtel_slider_window_g1

0x6e8c,	// (0x0009bff2) popup_vtel_slider_window_g2_ParamLimits

0x6e8c,	// (0x0009bff2) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x000a4b3f) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x000a4b3f) popup_vtel_slider_window_g

0x6ed4,	// (0x0009c03a) vtel_slider_pane_ParamLimits

0x6ed4,	// (0x0009c03a) vtel_slider_pane

0x6ee3,	// (0x0009c049) vtel_slider_pane_g1_ParamLimits

0x6ee3,	// (0x0009c049) vtel_slider_pane_g1

0x6ef0,	// (0x0009c056) vtel_slider_pane_g2_ParamLimits

0x6ef0,	// (0x0009c056) vtel_slider_pane_g2

0x6efd,	// (0x0009c063) vtel_slider_pane_g3_ParamLimits

0x6efd,	// (0x0009c063) vtel_slider_pane_g3

0x6ee3,	// (0x0009c049) vtel_slider_pane_g4_ParamLimits

0x6ee3,	// (0x0009c049) vtel_slider_pane_g4

0x6f0a,	// (0x0009c070) vtel_slider_pane_g5_ParamLimits

0x6f0a,	// (0x0009c070) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x000a4b48) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x000a4b48) vtel_slider_pane_g

0x4512,	// (0x00099678) main_gallery2_pane

0x667d,	// (0x0009b7e3) aid_size_row_itut2_dropdow_list_ParamLimits

0x667d,	// (0x0009b7e3) aid_size_row_itut2_dropdow_list

0x66eb,	// (0x0009b851) grid_vitu2_function_top_pane_ParamLimits

0x66eb,	// (0x0009b851) grid_vitu2_function_top_pane

0x6745,	// (0x0009b8ab) popup_vitu2_dropdown_list_window_ParamLimits

0x6745,	// (0x0009b8ab) popup_vitu2_dropdown_list_window

0x6765,	// (0x0009b8cb) popup_vitu2_match_list_window

0x6f25,	// (0x0009c08b) cell_vitu2_function_top_pane_ParamLimits

0x6f25,	// (0x0009c08b) cell_vitu2_function_top_pane

0x6f3f,	// (0x0009c0a5) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6f3f,	// (0x0009c0a5) cell_vitu2_function_top_pane_cp01

0x6f5b,	// (0x0009c0c1) cell_vitu2_function_top_wide_pane_ParamLimits

0x6f5b,	// (0x0009c0c1) cell_vitu2_function_top_wide_pane

0x4512,	// (0x00099678) bg_button_pane_cp012

0x6f77,	// (0x0009c0dd) cell_vitu2_function_top_pane_g1

0x6f8b,	// (0x0009c0f1) bg_button_pane_cp013_ParamLimits

0x6f8b,	// (0x0009c0f1) bg_button_pane_cp013

0x6fa7,	// (0x0009c10d) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6fa7,	// (0x0009c10d) cell_vitu2_function_top_wide_pane_g1

0x11ce,	// (0x00096334) bg_popup_sub_pane_cp20

0x6fbf,	// (0x0009c125) list_vitu2_match_list_pane

0xc93b,	// (0x000a1aa1) bg_popup_sub_pane_cp20_g1

0xc943,	// (0x000a1aa9) bg_popup_sub_pane_cp20_g2

0x9e22,	// (0x0009ef88) bg_popup_sub_pane_cp20_g3

0xc94b,	// (0x000a1ab1) bg_popup_sub_pane_cp20_g4

0x9e02,	// (0x0009ef68) bg_popup_sub_pane_cp20_g5

0xcb9e,	// (0x000a1d04) bg_popup_sub_pane_cp20_g6

0xc95b,	// (0x000a1ac1) bg_popup_sub_pane_cp20_g7

0xc963,	// (0x000a1ac9) bg_popup_sub_pane_cp20_g8

0xc96b,	// (0x000a1ad1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x000a4b53) bg_popup_sub_pane_cp20_g

0x6fd7,	// (0x0009c13d) list_vitu2_match_list_item_pane_ParamLimits

0x6fd7,	// (0x0009c13d) list_vitu2_match_list_item_pane

0x6fe9,	// (0x0009c14f) list_vitu2_match_list_item_pane_t1

0x11e8,	// (0x0009634e) bg_popup_sub_pane_cp21

0x703f,	// (0x0009c1a5) grid_vitu2_dropdown_list_pane

0x7047,	// (0x0009c1ad) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7047,	// (0x0009c1ad) cell_vitu2_dropdown_list_char_pane

0x7068,	// (0x0009c1ce) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7068,	// (0x0009c1ce) cell_vitu2_dropdown_list_ctrl_pane

0xcba6,	// (0x000a1d0c) cell_vitu2_dropdown_list_char_pane_g1

0xcbaf,	// (0x000a1d15) cell_vitu2_dropdown_list_char_pane_g2

0xcbb8,	// (0x000a1d1e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x000a4b70) cell_vitu2_dropdown_list_char_pane_g

0x7094,	// (0x0009c1fa) cell_vitu2_dropdown_list_char_pane_t1

0x70a2,	// (0x0009c208) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x70a2,	// (0x0009c208) cell_vitu2_dropdown_list_ctrl_pane_g1

0x70b2,	// (0x0009c218) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x70b2,	// (0x0009c218) cell_vitu2_dropdown_list_ctrl_pane_g2

0x70c3,	// (0x0009c229) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x70c3,	// (0x0009c229) cell_vitu2_dropdown_list_ctrl_pane_g3

0x70d3,	// (0x0009c239) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x70d3,	// (0x0009c239) cell_vitu2_dropdown_list_ctrl_pane_g4

0x64af,	// (0x0009b615) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x64af,	// (0x0009b615) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x000a4b77) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x000a4b77) cell_vitu2_dropdown_list_ctrl_pane_g

0x70ef,	// (0x0009c255) aid_size_cell_gallery2_ParamLimits

0x70ef,	// (0x0009c255) aid_size_cell_gallery2

0x7109,	// (0x0009c26f) grid_gallery2_pane_ParamLimits

0x7109,	// (0x0009c26f) grid_gallery2_pane

0x5a89,	// (0x0009abef) scroll_pane_cp029_ParamLimits

0x5a89,	// (0x0009abef) scroll_pane_cp029

0x7120,	// (0x0009c286) cell_gallery2_pane_ParamLimits

0x7120,	// (0x0009c286) cell_gallery2_pane

0xcbc1,	// (0x000a1d27) cell_gallery2_pane_g2

0xdfe6,	// (0x000a314c) cell_gallery2_pane_g3

0xcbc9,	// (0x000a1d2f) cell_gallery2_pane_g4

0xcbd1,	// (0x000a1d37) cell_gallery2_pane_g5

0xf029,	// (0x000a418f) grid_highlight_pane_cp10

0x6765,	// (0x0009b8cb) popup_vitu2_match_list_window_ParamLimits

0x6779,	// (0x0009b8df) popup_vitu2_query_window_ParamLimits

0x6779,	// (0x0009b8df) popup_vitu2_query_window

0x11e8,	// (0x0009634e) bg_vitu2_candi_button_pane

0xcba6,	// (0x000a1d0c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xcbaf,	// (0x000a1d15) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xcbb8,	// (0x000a1d1e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7172,	// (0x0009c2d8) bg_button_pane_cp015

0x7184,	// (0x0009c2ea) bg_button_pane_cp016

0x7197,	// (0x0009c2fd) bg_button_pane_cp017

0xba36,	// (0x000a0b9c) bg_popup_sub_pane_cp22

0xcbd9,	// (0x000a1d3f) popup_vitu2_query_window_g1

0x71dc,	// (0x0009c342) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x000a4b82) popup_vitu2_query_window_g

0x71f9,	// (0x0009c35f) popup_vitu2_query_window_t1_ParamLimits

0x71f9,	// (0x0009c35f) popup_vitu2_query_window_t1

0x722c,	// (0x0009c392) popup_vitu2_query_window_t2_ParamLimits

0x722c,	// (0x0009c392) popup_vitu2_query_window_t2

0x723e,	// (0x0009c3a4) popup_vitu2_query_window_t3_ParamLimits

0x723e,	// (0x0009c3a4) popup_vitu2_query_window_t3

0x7266,	// (0x0009c3cc) popup_vitu2_query_window_t4_ParamLimits

0x7266,	// (0x0009c3cc) popup_vitu2_query_window_t4

0x7287,	// (0x0009c3ed) popup_vitu2_query_window_t5_ParamLimits

0x7287,	// (0x0009c3ed) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x000a4b89) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x000a4b89) popup_vitu2_query_window_t

0xca3d,	// (0x000a1ba3) main_cset_text_pane

0x6b6b,	// (0x0009bcd1) aid_area_touch_slider_ParamLimits

0x6b87,	// (0x0009bced) cset_slider_pane_ParamLimits

0x6bb1,	// (0x0009bd17) main_cset_slider_pane_g1_ParamLimits

0x6bc6,	// (0x0009bd2c) main_cset_slider_pane_g2_ParamLimits

0xca5e,	// (0x000a1bc4) main_cset_slider_pane_g3_ParamLimits

0xca5e,	// (0x000a1bc4) main_cset_slider_pane_g3

0x6bdb,	// (0x0009bd41) main_cset_slider_pane_g4_ParamLimits

0x6bdb,	// (0x0009bd41) main_cset_slider_pane_g4

0x6bea,	// (0x0009bd50) main_cset_slider_pane_g5_ParamLimits

0x6bea,	// (0x0009bd50) main_cset_slider_pane_g5

0x6bf8,	// (0x0009bd5e) main_cset_slider_pane_g6_ParamLimits

0x6bf8,	// (0x0009bd5e) main_cset_slider_pane_g6

0xf976,	// (0x000a4adc) main_cset_slider_pane_g_ParamLimits

0xca8e,	// (0x000a1bf4) main_cset_slider_pane_t1_ParamLimits

0x6c88,	// (0x0009bdee) main_cset_slider_pane_t2_ParamLimits

0x6ca2,	// (0x0009be08) main_cset_slider_pane_t3_ParamLimits

0x6cbc,	// (0x0009be22) main_cset_slider_pane_t4_ParamLimits

0x6cd6,	// (0x0009be3c) main_cset_slider_pane_t5_ParamLimits

0x6cf4,	// (0x0009be5a) main_cset_slider_pane_t6_ParamLimits

0x6d0b,	// (0x0009be71) main_cset_slider_pane_t7_ParamLimits

0x6d39,	// (0x0009be9f) main_cset_slider_pane_t8_ParamLimits

0x6d39,	// (0x0009be9f) main_cset_slider_pane_t8

0x6d61,	// (0x0009bec7) main_cset_slider_pane_t9_ParamLimits

0x6d61,	// (0x0009bec7) main_cset_slider_pane_t9

0x6d89,	// (0x0009beef) main_cset_slider_pane_t10_ParamLimits

0x6d89,	// (0x0009beef) main_cset_slider_pane_t10

0x6db1,	// (0x0009bf17) main_cset_slider_pane_t11_ParamLimits

0x6db1,	// (0x0009bf17) main_cset_slider_pane_t11

0x6ddb,	// (0x0009bf41) main_cset_slider_pane_t12_ParamLimits

0x6ddb,	// (0x0009bf41) main_cset_slider_pane_t12

0x6df8,	// (0x0009bf5e) main_cset_slider_pane_t13_ParamLimits

0x6df8,	// (0x0009bf5e) main_cset_slider_pane_t13

0xf99b,	// (0x000a4b01) main_cset_slider_pane_t_ParamLimits

0xe6b0,	// (0x000a3816) bg_popup_sub_pane_cp011

0xcbe5,	// (0x000a1d4b) main_cset_text_pane_g1

0xcbed,	// (0x000a1d53) main_cset_text_pane_t1

0xcbfb,	// (0x000a1d61) main_cset_text_pane_t2

0xcc09,	// (0x000a1d6f) main_cset_text_pane_t3

0xcc17,	// (0x000a1d7d) main_cset_text_pane_t4

0xcc25,	// (0x000a1d8b) main_cset_text_pane_t5

0xcc33,	// (0x000a1d99) main_cset_text_pane_t6

0xcc41,	// (0x000a1da7) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x000a4b98) main_cset_text_pane_t

0x11e8,	// (0x0009634e) main_cam4_burst_pane

0x11e8,	// (0x0009634e) main_cam5_pane

0x6aba,	// (0x0009bc20) bg_button_pane_cp019

0x6ac3,	// (0x0009bc29) bg_button_pane_cp020

0xca6a,	// (0x000a1bd0) main_cset_slider_pane_g7_ParamLimits

0xca6a,	// (0x000a1bd0) main_cset_slider_pane_g7

0xca76,	// (0x000a1bdc) main_cset_slider_pane_g8_ParamLimits

0xca76,	// (0x000a1bdc) main_cset_slider_pane_g8

0x6c0c,	// (0x0009bd72) main_cset_slider_pane_g9_ParamLimits

0x6c0c,	// (0x0009bd72) main_cset_slider_pane_g9

0x6c18,	// (0x0009bd7e) main_cset_slider_pane_g10_ParamLimits

0x6c18,	// (0x0009bd7e) main_cset_slider_pane_g10

0x6c24,	// (0x0009bd8a) main_cset_slider_pane_g11_ParamLimits

0x6c24,	// (0x0009bd8a) main_cset_slider_pane_g11

0x6c30,	// (0x0009bd96) main_cset_slider_pane_g12_ParamLimits

0x6c30,	// (0x0009bd96) main_cset_slider_pane_g12

0x6c3c,	// (0x0009bda2) main_cset_slider_pane_g13_ParamLimits

0x6c3c,	// (0x0009bda2) main_cset_slider_pane_g13

0x6c48,	// (0x0009bdae) main_cset_slider_pane_g14_ParamLimits

0x6c48,	// (0x0009bdae) main_cset_slider_pane_g14

0x6c54,	// (0x0009bdba) main_cset_slider_pane_g15_ParamLimits

0x6c54,	// (0x0009bdba) main_cset_slider_pane_g15

0xcabc,	// (0x000a1c22) main_cset_slider_pane_t14_ParamLimits

0xcabc,	// (0x000a1c22) main_cset_slider_pane_t14

0xcaf5,	// (0x000a1c5b) main_cset_slider_pane_t15_ParamLimits

0xcaf5,	// (0x000a1c5b) main_cset_slider_pane_t15

0x72fe,	// (0x0009c464) aid_cam4_burst_size_cell_ParamLimits

0x72fe,	// (0x0009c464) aid_cam4_burst_size_cell

0x731a,	// (0x0009c480) grid_cam4_burst_pane_ParamLimits

0x731a,	// (0x0009c480) grid_cam4_burst_pane

0x734a,	// (0x0009c4b0) linegrid_cam4_burst_pane_ParamLimits

0x734a,	// (0x0009c4b0) linegrid_cam4_burst_pane

0x736a,	// (0x0009c4d0) scroll_pane_cp30_ParamLimits

0x736a,	// (0x0009c4d0) scroll_pane_cp30

0x7376,	// (0x0009c4dc) cell_cam4_burst_pane_ParamLimits

0x7376,	// (0x0009c4dc) cell_cam4_burst_pane

0xcc4f,	// (0x000a1db5) linegrid_cam4_burst_pane_g1_ParamLimits

0xcc4f,	// (0x000a1db5) linegrid_cam4_burst_pane_g1

0x73b2,	// (0x0009c518) linegrid_cam4_burst_pane_g2_ParamLimits

0x73b2,	// (0x0009c518) linegrid_cam4_burst_pane_g2

0xcc5c,	// (0x000a1dc2) linegrid_cam4_burst_pane_g3_ParamLimits

0xcc5c,	// (0x000a1dc2) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x000a4ba7) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x000a4ba7) linegrid_cam4_burst_pane_g

0x73c3,	// (0x0009c529) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x73c3,	// (0x0009c529) linegrid_cam4_burst_pane_g3_copy1

0xcc69,	// (0x000a1dcf) linegrid_cam4_burst_pane_g4_ParamLimits

0xcc69,	// (0x000a1dcf) linegrid_cam4_burst_pane_g4

0x73dd,	// (0x0009c543) linegrid_cam4_burst_pane_g5_ParamLimits

0x73dd,	// (0x0009c543) linegrid_cam4_burst_pane_g5

0x73ee,	// (0x0009c554) linegrid_cam4_burst_pane_g6_ParamLimits

0x73ee,	// (0x0009c554) linegrid_cam4_burst_pane_g6

0xcc76,	// (0x000a1ddc) linegrid_cam4_burst_pane_g7_ParamLimits

0xcc76,	// (0x000a1ddc) linegrid_cam4_burst_pane_g7

0x73ff,	// (0x0009c565) cell_cam4_burst_pane_g1

0xcc8f,	// (0x000a1df5) main_cam5_pane_t1_ParamLimits

0xcc8f,	// (0x000a1df5) main_cam5_pane_t1

0xcca1,	// (0x000a1e07) main_cam5_pane_t2_ParamLimits

0xcca1,	// (0x000a1e07) main_cam5_pane_t2

0xccb3,	// (0x000a1e19) main_cam5_pane_t3_ParamLimits

0xccb3,	// (0x000a1e19) main_cam5_pane_t3

0xccc5,	// (0x000a1e2b) main_cam5_pane_t4_ParamLimits

0xccc5,	// (0x000a1e2b) main_cam5_pane_t4

0xcce9,	// (0x000a1e4f) main_cam5_pane_t5_ParamLimits

0xcce9,	// (0x000a1e4f) main_cam5_pane_t5

0xccfd,	// (0x000a1e63) main_cam5_pane_t6_ParamLimits

0xccfd,	// (0x000a1e63) main_cam5_pane_t6

0xcd11,	// (0x000a1e77) main_cam5_pane_t7_ParamLimits

0xcd11,	// (0x000a1e77) main_cam5_pane_t7

0xcd23,	// (0x000a1e89) main_cam5_pane_t8_ParamLimits

0xcd23,	// (0x000a1e89) main_cam5_pane_t8

0xcd3f,	// (0x000a1ea5) main_cam5_pane_t9_ParamLimits

0xcd3f,	// (0x000a1ea5) main_cam5_pane_t9

0xcd51,	// (0x000a1eb7) main_cam5_pane_t10_ParamLimits

0xcd51,	// (0x000a1eb7) main_cam5_pane_t10

0xcd63,	// (0x000a1ec9) main_cam5_pane_t11_ParamLimits

0xcd63,	// (0x000a1ec9) main_cam5_pane_t11

0xcd75,	// (0x000a1edb) main_cam5_pane_t12_ParamLimits

0xcd75,	// (0x000a1edb) main_cam5_pane_t12

0xcd8a,	// (0x000a1ef0) main_cam5_pane_t13_ParamLimits

0xcd8a,	// (0x000a1ef0) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x000a4bb3) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x000a4bb3) main_cam5_pane_t

0x118d,	// (0x000962f3) popup_scut_keymap_window_ParamLimits

0x118d,	// (0x000962f3) popup_scut_keymap_window

0x7412,	// (0x0009c578) aid_size_cell_brow_shortcut

0xf029,	// (0x000a418f) bg_popup_window_pane_cp010

0x741e,	// (0x0009c584) grid_scut_pane

0x742a,	// (0x0009c590) cell_scut_pane_ParamLimits

0x742a,	// (0x0009c590) cell_scut_pane

0x7441,	// (0x0009c5a7) cell_scut_pane_g1

0xcda7,	// (0x000a1f0d) cell_scut_pane_t1

0xcdb6,	// (0x000a1f1c) cell_scut_pane_t2

0x744a,	// (0x0009c5b0) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x000a4bce) cell_scut_pane_t

0x526a,	// (0x0009a3d0) main_mup3_pane_g8_ParamLimits

0x526a,	// (0x0009a3d0) main_mup3_pane_g8

0x668b,	// (0x0009b7f1) area_vitu2_query_pane_ParamLimits

0x668b,	// (0x0009b7f1) area_vitu2_query_pane

0x71aa,	// (0x0009c310) input_focus_pane_cp08

0xcdc5,	// (0x000a1f2b) area_vitu2_query_pane_g1

0x7458,	// (0x0009c5be) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x000a4bd5) area_vitu2_query_pane_g

0x7469,	// (0x0009c5cf) area_vitu2_query_pane_t1_ParamLimits

0x7469,	// (0x0009c5cf) area_vitu2_query_pane_t1

0x747d,	// (0x0009c5e3) area_vitu2_query_pane_t2_ParamLimits

0x747d,	// (0x0009c5e3) area_vitu2_query_pane_t2

0x7491,	// (0x0009c5f7) area_vitu2_query_pane_t3_ParamLimits

0x7491,	// (0x0009c5f7) area_vitu2_query_pane_t3

0xcdd1,	// (0x000a1f37) area_vitu2_query_pane_t4_ParamLimits

0xcdd1,	// (0x000a1f37) area_vitu2_query_pane_t4

0xcdf9,	// (0x000a1f5f) area_vitu2_query_pane_t5_ParamLimits

0xcdf9,	// (0x000a1f5f) area_vitu2_query_pane_t5

0xce21,	// (0x000a1f87) area_vitu2_query_pane_t6_ParamLimits

0xce21,	// (0x000a1f87) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x000a4bda) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x000a4bda) area_vitu2_query_pane_t

0x74b9,	// (0x0009c61f) bg_button_pane_cp018

0x74c7,	// (0x0009c62d) bg_button_pane_cp021

0x74d3,	// (0x0009c639) bg_button_pane_cp022

0x74e4,	// (0x0009c64a) input_focus_pane_cp09

0xa47a,	// (0x0009f5e0) aid_size_touch_mv_arrow_left

0xa4a3,	// (0x0009f609) aid_size_touch_mv_arrow_right

0x6c6c,	// (0x0009bdd2) main_cset_slider_pane_g16_ParamLimits

0x6c6c,	// (0x0009bdd2) main_cset_slider_pane_g16

0x6c7a,	// (0x0009bde0) main_cset_slider_pane_g17_ParamLimits

0x6c7a,	// (0x0009bde0) main_cset_slider_pane_g17

0x73ff,	// (0x0009c565) cell_cam4_burst_pane_g1_ParamLimits

0xe6b0,	// (0x000a3816) compa_mode_pane

0x6e98,	// (0x0009bffe) popup_vtel_slider_window_g3_ParamLimits

0x6e98,	// (0x0009bffe) popup_vtel_slider_window_g3

0x6eac,	// (0x0009c012) popup_vtel_slider_window_g4_ParamLimits

0x6eac,	// (0x0009c012) popup_vtel_slider_window_g4

0x6ec0,	// (0x0009c026) popup_vtel_slider_window_t1_ParamLimits

0x6ec0,	// (0x0009c026) popup_vtel_slider_window_t1

0x11e8,	// (0x0009634e) main_cl_pane

0x45b0,	// (0x00099716) popup_imed_adjust2_window_ParamLimits

0xba36,	// (0x000a0b9c) bg_tb_trans_pane_cp05_ParamLimits

0xc3d1,	// (0x000a1537) popup_imed_adjust2_window_g1_ParamLimits

0xc3e0,	// (0x000a1546) popup_imed_adjust2_window_g2_ParamLimits

0xc3e0,	// (0x000a1546) popup_imed_adjust2_window_g2

0xc3ec,	// (0x000a1552) popup_imed_adjust2_window_g3_ParamLimits

0xc3ec,	// (0x000a1552) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x000a4945) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x000a4945) popup_imed_adjust2_window_g

0xc3f8,	// (0x000a155e) popup_imed_adjust2_window_t1_ParamLimits

0xc410,	// (0x000a1576) slider_imed_adjust_pane_ParamLimits

0xc424,	// (0x000a158a) slider_imed_adjust_pane_g1_ParamLimits

0xc434,	// (0x000a159a) slider_imed_adjust_pane_g2_ParamLimits

0xc444,	// (0x000a15aa) slider_imed_adjust_pane_g3_ParamLimits

0xc455,	// (0x000a15bb) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x000a494c) slider_imed_adjust_pane_g_ParamLimits

0x63c4,	// (0x0009b52a) aid_touch_area_cam4_ParamLimits

0x63c4,	// (0x0009b52a) aid_touch_area_cam4

0x63d4,	// (0x0009b53a) battery_pane_cp01

0x645b,	// (0x0009b5c1) main_camera4_pane_g6_ParamLimits

0x645b,	// (0x0009b5c1) main_camera4_pane_g6

0x6479,	// (0x0009b5df) main_camera4_pane_t2_ParamLimits

0x6479,	// (0x0009b5df) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x000a4a4f) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x000a4a4f) main_camera4_pane_t

0x650e,	// (0x0009b674) aid_touch_area_vid4_ParamLimits

0x650e,	// (0x0009b674) aid_touch_area_vid4

0x654e,	// (0x0009b6b4) main_video4_pane_g5_ParamLimits

0x654e,	// (0x0009b6b4) main_video4_pane_g5

0x6572,	// (0x0009b6d8) vid4_progress_pane_ParamLimits

0x6572,	// (0x0009b6d8) vid4_progress_pane

0xca82,	// (0x000a1be8) main_cset_slider_pane_g18_ParamLimits

0xca82,	// (0x000a1be8) main_cset_slider_pane_g18

0xcc83,	// (0x000a1de9) cell_cam4_burst_pane_g2_ParamLimits

0xcc83,	// (0x000a1de9) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x000a4bae) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x000a4bae) cell_cam4_burst_pane_g

0x74f5,	// (0x0009c65b) bg_cl_pane_ParamLimits

0x74f5,	// (0x0009c65b) bg_cl_pane

0x7501,	// (0x0009c667) cl_header_pane_ParamLimits

0x7501,	// (0x0009c667) cl_header_pane

0x750d,	// (0x0009c673) cl_listscroll_pane_ParamLimits

0x750d,	// (0x0009c673) cl_listscroll_pane

0xce75,	// (0x000a1fdb) bg_cl_pane_g1

0xce7d,	// (0x000a1fe3) bg_cl_pane_g2

0xce85,	// (0x000a1feb) bg_cl_pane_g3

0xce8d,	// (0x000a1ff3) bg_cl_pane_g4

0xce95,	// (0x000a1ffb) bg_cl_pane_g5

0xce9d,	// (0x000a2003) bg_cl_pane_g6

0xcea5,	// (0x000a200b) bg_cl_pane_g7

0xcead,	// (0x000a2013) bg_cl_pane_g8

0xceb5,	// (0x000a201b) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x000a4be9) bg_cl_pane_g

0x7519,	// (0x0009c67f) aid_height_cl_leading_ParamLimits

0x7519,	// (0x0009c67f) aid_height_cl_leading

0x7525,	// (0x0009c68b) aid_height_cl_text_ParamLimits

0x7525,	// (0x0009c68b) aid_height_cl_text

0xe7a4,	// (0x000a390a) bg_cl_header_pane_ParamLimits

0xe7a4,	// (0x000a390a) bg_cl_header_pane

0x753d,	// (0x0009c6a3) cl_header_pane_g1_ParamLimits

0x753d,	// (0x0009c6a3) cl_header_pane_g1

0x754a,	// (0x0009c6b0) cl_header_pane_t1_ParamLimits

0x754a,	// (0x0009c6b0) cl_header_pane_t1

0xcebd,	// (0x000a2023) cl_list_pane

0xca55,	// (0x000a1bbb) hc_scroll_pane_cp01

0x9e02,	// (0x0009ef68) bg_cl_header_pane_g1

0xc93b,	// (0x000a1aa1) bg_cl_header_pane_g2

0x9e22,	// (0x0009ef88) bg_cl_header_pane_g3

0xc94b,	// (0x000a1ab1) bg_cl_header_pane_g4

0xc943,	// (0x000a1aa9) bg_cl_header_pane_g5

0xcb9e,	// (0x000a1d04) bg_cl_header_pane_g6

0xc963,	// (0x000a1ac9) bg_cl_header_pane_g7

0xc96b,	// (0x000a1ad1) bg_cl_header_pane_g8

0xc95b,	// (0x000a1ac1) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x000a4bfc) bg_cl_header_pane_g

0x755c,	// (0x0009c6c2) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x755c,	// (0x0009c6c2) hc_cl_list_double_graphic_heading_pane

0x756d,	// (0x0009c6d3) hc_cl_list_single_graphic_pane_ParamLimits

0x756d,	// (0x0009c6d3) hc_cl_list_single_graphic_pane

0x7586,	// (0x0009c6ec) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7586,	// (0x0009c6ec) hc_cl_list_single_graphic_pane_g1

0x7592,	// (0x0009c6f8) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7592,	// (0x0009c6f8) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x000a4c0f) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x000a4c0f) hc_cl_list_single_graphic_pane_g

0x75a6,	// (0x0009c70c) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x75a6,	// (0x0009c70c) hc_cl_list_single_graphic_pane_t1

0x7586,	// (0x0009c6ec) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7586,	// (0x0009c6ec) hc_cl_list_double_graphic_heading_pane_g1

0x75bb,	// (0x0009c721) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x75bb,	// (0x0009c721) hc_cl_list_double_graphic_heading_pane_g2

0x75cf,	// (0x0009c735) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x75cf,	// (0x0009c735) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x000a4c14) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x000a4c14) hc_cl_list_double_graphic_heading_pane_g

0x75e3,	// (0x0009c749) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x75e3,	// (0x0009c749) hc_cl_list_double_graphic_heading_pane_t1

0x75f8,	// (0x0009c75e) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x75f8,	// (0x0009c75e) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x000a4c1b) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x000a4c1b) hc_cl_list_double_graphic_heading_pane_t

0x7615,	// (0x0009c77b) vid4_progress_pane_g1

0x7625,	// (0x0009c78b) vid4_progress_pane_g2

0x7635,	// (0x0009c79b) vid4_progress_pane_g3

0x7647,	// (0x0009c7ad) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x000a4c20) vid4_progress_pane_g

0x765f,	// (0x0009c7c5) vid4_progress_pane_t1

0x7675,	// (0x0009c7db) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x000a4c2b) vid4_progress_pane_t

0x769f,	// (0x0009c805) wait_bar_pane_cp07

0xbc31,	// (0x000a0d97) blid_firmament_pane_ParamLimits

0xbc74,	// (0x000a0dda) popup_blid_sat_info2_window_g1

0xbc98,	// (0x000a0dfe) popup_blid_sat_info2_window_t3

0xbca6,	// (0x000a0e0c) popup_blid_sat_info2_window_t4

0xbcb4,	// (0x000a0e1a) popup_blid_sat_info2_window_t5

0xbcc2,	// (0x000a0e28) popup_blid_sat_info2_window_t6

0xbcd2,	// (0x000a0e38) popup_blid_sat_info2_window_t7

0xbce0,	// (0x000a0e46) popup_blid_sat_info2_window_t8

0xbcee,	// (0x000a0e54) popup_blid_sat_info2_window_t9

0xbcfc,	// (0x000a0e62) popup_blid_sat_info2_window_t10

0xbdd3,	// (0x000a0f39) aid_firma_cardinal_ParamLimits

0xbde7,	// (0x000a0f4d) blid_firmament_pane_t1_ParamLimits

0xbdfe,	// (0x000a0f64) blid_firmament_pane_t2_ParamLimits

0xbe15,	// (0x000a0f7b) blid_firmament_pane_t3_ParamLimits

0xbe2c,	// (0x000a0f92) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x000a4839) blid_firmament_pane_t_ParamLimits

0xbe43,	// (0x000a0fa9) blid_sat_info_pane_ParamLimits

0x4512,	// (0x00099678) main_cam_set_pane_ParamLimits

0x5a22,	// (0x0009ab88) aid_size_cell_colour_35_ParamLimits

0x5a3c,	// (0x0009aba2) aid_size_cell_colour_112_ParamLimits

0x5a53,	// (0x0009abb9) aid_size_cell_effect_ParamLimits

0xe796,	// (0x000a38fc) bg_tb_trans_pane_cp02_ParamLimits

0xb8c2,	// (0x000a0a28) heading_imed_pane_ParamLimits

0x5a6d,	// (0x0009abd3) listscroll_imed_pane_ParamLimits

0xb047,	// (0x000a01ad) popup_call2_audio_first_window_g5_ParamLimits

0xb047,	// (0x000a01ad) popup_call2_audio_first_window_g5

0x6173,	// (0x0009b2d9) aid_size_touch_image3_arrow_left_ParamLimits

0x6173,	// (0x0009b2d9) aid_size_touch_image3_arrow_left

0x6189,	// (0x0009b2ef) aid_size_touch_image3_arrow_right_ParamLimits

0x6189,	// (0x0009b2ef) aid_size_touch_image3_arrow_right

0x768a,	// (0x0009c7f0) vid4_progress_pane_t3

0x5d0b,	// (0x0009ae71) main_hwr_training_symbol_option_pane_ParamLimits

0x5d0b,	// (0x0009ae71) main_hwr_training_symbol_option_pane

0xc6be,	// (0x000a1824) popup_hwr_training_preview_window_ParamLimits

0xc6be,	// (0x000a1824) popup_hwr_training_preview_window

0x5d6c,	// (0x0009aed2) hwr_training_navi_pane_g5_ParamLimits

0x5d6c,	// (0x0009aed2) hwr_training_navi_pane_g5

0xc929,	// (0x000a1a8f) popup_char_count_window

0x11ce,	// (0x00096334) bg_popup_sub_pane_cp20_ParamLimits

0x6fbf,	// (0x0009c125) list_vitu2_match_list_pane_ParamLimits

0x6fcb,	// (0x0009c131) vitu2_page_scroll_pane_ParamLimits

0x6fcb,	// (0x0009c131) vitu2_page_scroll_pane

0xced7,	// (0x000a203d) list_single_hwr_training_symbol_option_pane_ParamLimits

0xced7,	// (0x000a203d) list_single_hwr_training_symbol_option_pane

0xceea,	// (0x000a2050) list_single_hwr_training_symbol_option_pane_g1

0xcef2,	// (0x000a2058) list_single_hwr_training_symbol_option_pane_t1

0xcf00,	// (0x000a2066) bg_button_pane_cp023

0xcf09,	// (0x000a206f) bg_button_pane_cp024

0x76e1,	// (0x0009c847) vitu2_page_scroll_pane_g1

0x76e9,	// (0x0009c84f) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x000a4c32) vitu2_page_scroll_pane_g

0x76f1,	// (0x0009c857) vitu2_page_scroll_pane_t1

0xbb91,	// (0x000a0cf7) popup_char_count_window_g1

0xcf3c,	// (0x000a20a2) popup_char_count_window_g2

0xcf45,	// (0x000a20ab) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x000a4c37) popup_char_count_window_g

0xcf4e,	// (0x000a20b4) popup_char_count_window_t1

0x11e8,	// (0x0009634e) main_vded2_pane

0xc3bd,	// (0x000a1523) aid_size_cell_imed_line

0xc3c7,	// (0x000a152d) grid_imed_line_width_pane

0x65e0,	// (0x0009b746) vid4_indicators_pane_g4

0xcf5c,	// (0x000a20c2) cell_imed_line_width_pane_ParamLimits

0xcf5c,	// (0x000a20c2) cell_imed_line_width_pane

0xcf70,	// (0x000a20d6) cell_imed_line_width_pane_g1

0xce49,	// (0x000a1faf) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x000a4c3e) cell_imed_line_width_pane_g

0x7700,	// (0x0009c866) main_vded2_pane_g1_ParamLimits

0x7700,	// (0x0009c866) main_vded2_pane_g1

0x770d,	// (0x0009c873) main_vded2_pane_g2_ParamLimits

0x770d,	// (0x0009c873) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x000a4c43) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x000a4c43) main_vded2_pane_g

0x771b,	// (0x0009c881) vded2_slider_pane_ParamLimits

0x771b,	// (0x0009c881) vded2_slider_pane

0x7728,	// (0x0009c88e) aid_size_touch_vded2_end

0x7732,	// (0x0009c898) aid_size_touch_vded2_playhead

0xcf79,	// (0x000a20df) aid_size_touch_vded2_start

0xcf81,	// (0x000a20e7) vded2_slider_bg_pane

0xcf8a,	// (0x000a20f0) vded2_slider_pane_g1

0xcf93,	// (0x000a20f9) vded2_slider_pane_g2

0x773a,	// (0x0009c8a0) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x000a4c48) vded2_slider_pane_g

0xcfb3,	// (0x000a2119) vded2_slider_bg_pane_g1

0xcfbc,	// (0x000a2122) vded2_slider_bg_pane_g2

0xcfc5,	// (0x000a212b) vded2_slider_bg_pane_g3

0x0002,

0xfae9,	// (0x000a4c4f) vded2_slider_bg_pane_g

0x3dfa,	// (0x00098f60) aid_postcard_touch_down_pane_ParamLimits

0x3dfa,	// (0x00098f60) aid_postcard_touch_down_pane

0x3e0a,	// (0x00098f70) aid_postcard_touch_up_pane_ParamLimits

0x3e0a,	// (0x00098f70) aid_postcard_touch_up_pane

0x11e8,	// (0x0009634e) main_blid2_pane

0x453b,	// (0x000996a1) popup_blid2_search_window

0xe6b0,	// (0x000a3816) blid2_gps_pane

0xe6b0,	// (0x000a3816) blid2_navig_pane

0xe6b0,	// (0x000a3816) blid2_search_pane

0xe6b0,	// (0x000a3816) blid2_tripm_pane

0x7743,	// (0x0009c8a9) blid2_search_pane_g1_ParamLimits

0x7743,	// (0x0009c8a9) blid2_search_pane_g1

0x7753,	// (0x0009c8b9) blid2_search_pane_t1_ParamLimits

0x7753,	// (0x0009c8b9) blid2_search_pane_t1

0x7765,	// (0x0009c8cb) aid_size_cell_blid2_gps_ParamLimits

0x7765,	// (0x0009c8cb) aid_size_cell_blid2_gps

0x7775,	// (0x0009c8db) blid2_gps_pane_g1_ParamLimits

0x7775,	// (0x0009c8db) blid2_gps_pane_g1

0x7781,	// (0x0009c8e7) grid_blid2_satellite_pane_ParamLimits

0x7781,	// (0x0009c8e7) grid_blid2_satellite_pane

0x7791,	// (0x0009c8f7) blid2_navig_pane_g1_ParamLimits

0x7791,	// (0x0009c8f7) blid2_navig_pane_g1

0x779d,	// (0x0009c903) blid2_navig_pane_t1_ParamLimits

0x779d,	// (0x0009c903) blid2_navig_pane_t1

0x77af,	// (0x0009c915) blid2_navig_pane_t2_ParamLimits

0x77af,	// (0x0009c915) blid2_navig_pane_t2

0x0001,

0xfaf0,	// (0x000a4c56) blid2_navig_pane_t_ParamLimits

0xfaf0,	// (0x000a4c56) blid2_navig_pane_t

0x77c1,	// (0x0009c927) blid2_navig_ring_pane_ParamLimits

0x77c1,	// (0x0009c927) blid2_navig_ring_pane

0x77d1,	// (0x0009c937) blid2_speed_pane_ParamLimits

0x77d1,	// (0x0009c937) blid2_speed_pane

0x77dd,	// (0x0009c943) blid2_tripm_pane_g1_ParamLimits

0x77dd,	// (0x0009c943) blid2_tripm_pane_g1

0x77ed,	// (0x0009c953) blid2_tripm_pane_g2_ParamLimits

0x77ed,	// (0x0009c953) blid2_tripm_pane_g2

0x77f9,	// (0x0009c95f) blid2_tripm_pane_g3_ParamLimits

0x77f9,	// (0x0009c95f) blid2_tripm_pane_g3

0x7805,	// (0x0009c96b) blid2_tripm_pane_g4_ParamLimits

0x7805,	// (0x0009c96b) blid2_tripm_pane_g4

0x7811,	// (0x0009c977) blid2_tripm_pane_g5_ParamLimits

0x7811,	// (0x0009c977) blid2_tripm_pane_g5

0x0005,

0xfaf5,	// (0x000a4c5b) blid2_tripm_pane_g_ParamLimits

0xfaf5,	// (0x000a4c5b) blid2_tripm_pane_g

0x782d,	// (0x0009c993) blid2_tripm_pane_t1_ParamLimits

0x782d,	// (0x0009c993) blid2_tripm_pane_t1

0x7841,	// (0x0009c9a7) blid2_tripm_pane_t2_ParamLimits

0x7841,	// (0x0009c9a7) blid2_tripm_pane_t2

0x7853,	// (0x0009c9b9) blid2_tripm_pane_t3_ParamLimits

0x7853,	// (0x0009c9b9) blid2_tripm_pane_t3

0x0003,

0xfb02,	// (0x000a4c68) blid2_tripm_pane_t_ParamLimits

0xfb02,	// (0x000a4c68) blid2_tripm_pane_t

0x7885,	// (0x0009c9eb) cell_blid2_satellite_pane_ParamLimits

0x7885,	// (0x0009c9eb) cell_blid2_satellite_pane

0x789f,	// (0x0009ca05) cell_blid2_satellite_pane_g1

0xcfce,	// (0x000a2134) cell_blid2_satellite_pane_t1

0xbe53,	// (0x000a0fb9) blid2_speed_pane_g1

0xcfdc,	// (0x000a2142) blid2_speed_pane_t1

0xcfea,	// (0x000a2150) blid2_speed_pane_t2

0x0001,

0xfb0b,	// (0x000a4c71) blid2_speed_pane_t

0xbe53,	// (0x000a0fb9) blid2_navig_ring_pane_g1

0x78a8,	// (0x0009ca0e) blid2_navig_ring_pane_g2

0x78b0,	// (0x0009ca16) blid2_navig_ring_pane_g3

0x78b8,	// (0x0009ca1e) blid2_navig_ring_pane_g4

0x78c0,	// (0x0009ca26) blid2_navig_ring_pane_g5

0x0004,

0xfb10,	// (0x000a4c76) blid2_navig_ring_pane_g

0xe6b0,	// (0x000a3816) bg_popup_window_pane_cp011

0xcff8,	// (0x000a215e) popup_blid2_search_window_g1

0xd000,	// (0x000a2166) popup_blid2_search_window_t1

0xd00e,	// (0x000a2174) popup_blid2_search_window_t2

0x0001,

0xfb1b,	// (0x000a4c81) popup_blid2_search_window_t

0x9d11,	// (0x0009ee77) main_browser_pane_g1

0xee64,	// (0x000a3fca) main_browser_pane_ParamLimits

0x4512,	// (0x00099678) bg_button_pane_cp011_ParamLimits

0x688d,	// (0x0009b9f3) cell_vitu2_function_pane_g1_ParamLimits

0xba36,	// (0x000a0b9c) bg_popup_sub_pane_cp22_ParamLimits

0x71aa,	// (0x0009c310) input_focus_pane_cp08_ParamLimits

0x71c1,	// (0x0009c327) popup_vitu2_query_button_pane_ParamLimits

0x71c1,	// (0x0009c327) popup_vitu2_query_button_pane

0x71d2,	// (0x0009c338) popup_vitu2_query_input_button_pane

0xcbd9,	// (0x000a1d3f) popup_vitu2_query_window_g1_ParamLimits

0x71dc,	// (0x0009c342) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x000a4b82) popup_vitu2_query_window_g_ParamLimits

0xe6b0,	// (0x000a3816) bg_button_pane_cp026

0x78c8,	// (0x0009ca2e) popup_vitu2_query_input_button_pane_g1

0xe6b0,	// (0x000a3816) bg_button_pane_cp025

0xd01c,	// (0x000a2182) popup_vitu2_query_button_pane_t1

0x4f91,	// (0x0009a0f7) main_mp3_pane_t6

0x4fa1,	// (0x0009a107) popup_slider_window_cp01

0x64bd,	// (0x0009b623) cam4_battery_pane

0x659d,	// (0x0009b703) cam4_battery_pane_cp02

0x760d,	// (0x0009c773) cam4_battery_pane_cp01

0x760d,	// (0x0009c773) cam4_battery_pane_cp03

0xcf9b,	// (0x000a2101) cam4_battery_pane_g1

0xbe53,	// (0x000a0fb9) cam4_battery_pane_g2

0x0001,

0xfb20,	// (0x000a4c86) cam4_battery_pane_g

0xbd0a,	// (0x000a0e70) popup_blid_sat_info2_window_t11

0xa47a,	// (0x0009f5e0) aid_size_touch_mv_arrow_left_ParamLimits

0xa4a3,	// (0x0009f609) aid_size_touch_mv_arrow_right_ParamLimits

0xa501,	// (0x0009f667) navi_pane_g1_ParamLimits

0xa50d,	// (0x0009f673) navi_pane_g2_ParamLimits

0xa53b,	// (0x0009f6a1) navi_pane_g3_ParamLimits

0xf3e5,	// (0x000a454b) navi_pane_g_ParamLimits

0x379a,	// (0x00098900) navi_pane_mv_t1_ParamLimits

0x5a79,	// (0x0009abdf) grid_imed_effect_pane_ParamLimits

0x2143,	// (0x000972a9) aid_placing_vt_slider_lsc

0x9c60,	// (0x0009edc6) aid_placing_vt_slider_prt

0xe796,	// (0x000a38fc) bg_tb_trans_pane_cp01_ParamLimits

0xbfd6,	// (0x000a113c) popup_image_details_window_g1_ParamLimits

0xbfe9,	// (0x000a114f) popup_image_details_window_g2_ParamLimits

0xbffe,	// (0x000a1164) popup_image_details_window_g3_ParamLimits

0xbffe,	// (0x000a1164) popup_image_details_window_g3

0xf718,	// (0x000a487e) popup_image_details_window_g_ParamLimits

0xc012,	// (0x000a1178) popup_image_details_window_t1_ParamLimits

0xc024,	// (0x000a118a) popup_image_details_window_t2_ParamLimits

0xc03d,	// (0x000a11a3) popup_image_details_window_t3_ParamLimits

0xc051,	// (0x000a11b7) popup_image_details_window_t4_ParamLimits

0xc06c,	// (0x000a11d2) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x000a4885) popup_image_details_window_t_ParamLimits

0x7531,	// (0x0009c697) cl_header_name_pane_ParamLimits

0x7531,	// (0x0009c697) cl_header_name_pane

0x78d0,	// (0x0009ca36) cl_header_name_pane_t1_ParamLimits

0x78d0,	// (0x0009ca36) cl_header_name_pane_t1

0x78e7,	// (0x0009ca4d) cl_header_name_pane_t2_ParamLimits

0x78e7,	// (0x0009ca4d) cl_header_name_pane_t2

0x7911,	// (0x0009ca77) cl_header_name_pane_t3_ParamLimits

0x7911,	// (0x0009ca77) cl_header_name_pane_t3

0x0002,

0xfb25,	// (0x000a4c8b) cl_header_name_pane_t_ParamLimits

0xfb25,	// (0x000a4c8b) cl_header_name_pane_t

0xa5ca,	// (0x0009f730) navi_pane_mv_g2_ParamLimits

0xc8e6,	// (0x000a1a4c) field_vitu2_entry_pane_g1_ParamLimits

0xc8f2,	// (0x000a1a58) field_vitu2_entry_pane_g2_ParamLimits

0xc8fe,	// (0x000a1a64) field_vitu2_entry_pane_g3_ParamLimits

0xc8fe,	// (0x000a1a64) field_vitu2_entry_pane_g3

0xf91b,	// (0x000a4a81) field_vitu2_entry_pane_g_ParamLimits

0x6821,	// (0x0009b987) cell_vitu2_itu_pane_g1_ParamLimits

0x6833,	// (0x0009b999) cell_vitu2_itu_pane_g2_ParamLimits

0x6833,	// (0x0009b999) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x000a4a8d) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x000a4a8d) cell_vitu2_itu_pane_g

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp05_ParamLimits

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp05

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp03

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp04

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp10_ParamLimits

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp10

0x74d3,	// (0x0009c639) bg_vkb2_func_pane_cp08

0x74b9,	// (0x0009c61f) bg_vkb2_func_pane_cp06

0x74c7,	// (0x0009c62d) bg_vkb2_func_pane_cp07

0xcf12,	// (0x000a2078) bg_vkb2_func_pane_cp11_ParamLimits

0xcf12,	// (0x000a2078) bg_vkb2_func_pane_cp11

0xcf27,	// (0x000a208d) bg_vkb2_func_pane_cp12_ParamLimits

0xcf27,	// (0x000a208d) bg_vkb2_func_pane_cp12

0xe6b0,	// (0x000a3816) bg_vkb2_func_pane_cp09

0xc93b,	// (0x000a1aa1) bg_vkb2_func_pane_g1

0x9e22,	// (0x0009ef88) bg_vkb2_func_pane_g2

0xc943,	// (0x000a1aa9) bg_vkb2_func_pane_g3

0xc94b,	// (0x000a1ab1) bg_vkb2_func_pane_g4

0xcb9e,	// (0x000a1d04) bg_vkb2_func_pane_g5

0xc963,	// (0x000a1ac9) bg_vkb2_func_pane_g6

0xc96b,	// (0x000a1ad1) bg_vkb2_func_pane_g7

0xc95b,	// (0x000a1ac1) bg_vkb2_func_pane_g8

0x9e02,	// (0x0009ef68) bg_vkb2_func_pane_g9

0x0008,

0xfb2c,	// (0x000a4c92) bg_vkb2_func_pane_g

0x781f,	// (0x0009c985) blid2_tripm_pane_g6_ParamLimits

0x781f,	// (0x0009c985) blid2_tripm_pane_g6

0xc776,	// (0x000a18dc) mp4_progress_pane_g1

0x7879,	// (0x0009c9df) blid2_tripm_values_pane_ParamLimits

0x7879,	// (0x0009c9df) blid2_tripm_values_pane

0x7936,	// (0x0009ca9c) blid2_tripm_values_pane_t1

0x7944,	// (0x0009caaa) blid2_tripm_values_pane_t2

0x7952,	// (0x0009cab8) blid2_tripm_values_pane_t3

0x7960,	// (0x0009cac6) blid2_tripm_values_pane_t4

0x796e,	// (0x0009cad4) blid2_tripm_values_pane_t5

0x797c,	// (0x0009cae2) blid2_tripm_values_pane_t6

0x798a,	// (0x0009caf0) blid2_tripm_values_pane_t7

0x7998,	// (0x0009cafe) blid2_tripm_values_pane_t8

0x79a6,	// (0x0009cb0c) blid2_tripm_values_pane_t9

0x0008,

0xfb3f,	// (0x000a4ca5) blid2_tripm_values_pane_t

0x2183,	// (0x000972e9) call_video_pane_t1_ParamLimits

0x21a4,	// (0x0009730a) call_video_pane_t2_ParamLimits

0xf26e,	// (0x000a43d4) call_video_pane_t_ParamLimits

0x3ccb,	// (0x00098e31) msg_header_pane_g1_ParamLimits

0xa7a4,	// (0x0009f90a) msg_header_pane_g2_ParamLimits

0xa7a4,	// (0x0009f90a) msg_header_pane_g2

0x0001,

0xf488,	// (0x000a45ee) msg_header_pane_g_ParamLimits

0xf488,	// (0x000a45ee) msg_header_pane_g

0xee64,	// (0x000a3fca) main_clock2_pane_ParamLimits

0x5812,	// (0x0009a978) grid_clock2_toolbar_pane_ParamLimits

0x5812,	// (0x0009a978) grid_clock2_toolbar_pane

0x5812,	// (0x0009a978) listscroll_clock2_pane_ParamLimits

0x5812,	// (0x0009a978) listscroll_clock2_pane

0x58b6,	// (0x0009aa1c) main_clock2_pane_t3_ParamLimits

0x58b6,	// (0x0009aa1c) main_clock2_pane_t3

0x58c8,	// (0x0009aa2e) main_clock2_pane_t4_ParamLimits

0x58c8,	// (0x0009aa2e) main_clock2_pane_t4

0xd02a,	// (0x000a2190) cell_clock2_toolbar_pane

0xd032,	// (0x000a2198) cell_clock2_toolbar_pane_cp01

0xd032,	// (0x000a2198) cell_clock2_toolbar_pane_cp02

0xd03a,	// (0x000a21a0) cell_clock2_toolbar_pane_cp03

0xd042,	// (0x000a21a8) list_clock2_pane

0xa3f0,	// (0x0009f556) scroll_pane_cp10

0xd04a,	// (0x000a21b0) list_single_clock2_pane_ParamLimits

0xd04a,	// (0x000a21b0) list_single_clock2_pane

0xf029,	// (0x000a418f) list_highlight_pane_cp08

0xd057,	// (0x000a21bd) list_single_clock2_pane_t1

0xd065,	// (0x000a21cb) list_single_clock2_pane_t2

0x0001,

0xfb52,	// (0x000a4cb8) list_single_clock2_pane_t

0xe6b0,	// (0x000a3816) bg_button_pane_cp10

0xd073,	// (0x000a21d9) cell_clock2_toolbar_pane_g1

0x3d68,	// (0x00098ece) aid_main_viewer_pane_g1_ParamLimits

0x3d68,	// (0x00098ece) aid_main_viewer_pane_g1

0x3d74,	// (0x00098eda) aid_main_viewer_pane_g2_ParamLimits

0x3d74,	// (0x00098eda) aid_main_viewer_pane_g2

0x3d80,	// (0x00098ee6) aid_main_viewer_pane_g3_ParamLimits

0x3d80,	// (0x00098ee6) aid_main_viewer_pane_g3

0x3d91,	// (0x00098ef7) aid_main_viewer_pane_g4_ParamLimits

0x3d91,	// (0x00098ef7) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x000a45ff) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x000a45ff) aid_main_viewer_pane_g

0x4505,	// (0x0009966b) main_calc_pane_ParamLimits

0x4520,	// (0x00099686) main_dialer2_pane_ParamLimits

0x11e8,	// (0x0009634e) main_cam6_pane

0x11e8,	// (0x0009634e) main_vid6_pane

0x581e,	// (0x0009a984) listscroll_gen_pane_cp06_ParamLimits

0x581e,	// (0x0009a984) listscroll_gen_pane_cp06

0x58da,	// (0x0009aa40) main_clock2_pane_t5_ParamLimits

0x58da,	// (0x0009aa40) main_clock2_pane_t5

0x5923,	// (0x0009aa89) aid_call2_pane_cp10_ParamLimits

0x5935,	// (0x0009aa9b) aid_call_pane_cp10_ParamLimits

0xa46e,	// (0x0009f5d4) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa46e,	// (0x0009f5d4) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5947,	// (0x0009aaad) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5947,	// (0x0009aaad) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa46e,	// (0x0009f5d4) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x000a493a) popup_clock_analogue_window_cp10_g_ParamLimits

0x5959,	// (0x0009aabf) popup_clock_analogue_window_cp10_t1_ParamLimits

0x6120,	// (0x0009b286) cell_dialer2_keypad_pane_g2_ParamLimits

0x6120,	// (0x0009b286) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x000a4a20) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x000a4a20) cell_dialer2_keypad_pane_g

0x613c,	// (0x0009b2a2) cell_dialer2_keypad_pane_t1

0x6b58,	// (0x0009bcbe) main_cset_text2_pane_ParamLimits

0x6b58,	// (0x0009bcbe) main_cset_text2_pane

0xcdc5,	// (0x000a1f2b) area_vitu2_query_pane_g1_ParamLimits

0x7458,	// (0x0009c5be) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x000a4bd5) area_vitu2_query_pane_g_ParamLimits

0xce51,	// (0x000a1fb7) area_vitu2_query_pane_t7_ParamLimits

0xce51,	// (0x000a1fb7) area_vitu2_query_pane_t7

0x74b9,	// (0x0009c61f) bg_button_pane_cp018_ParamLimits

0x74c7,	// (0x0009c62d) bg_button_pane_cp021_ParamLimits

0x74d3,	// (0x0009c639) bg_button_pane_cp022_ParamLimits

0x74d3,	// (0x0009c639) bg_vkb2_func_pane_cp08_ParamLimits

0x74b9,	// (0x0009c61f) bg_vkb2_func_pane_cp06_ParamLimits

0x74c7,	// (0x0009c62d) bg_vkb2_func_pane_cp07_ParamLimits

0x74e4,	// (0x0009c64a) input_focus_pane_cp09_ParamLimits

0x79b4,	// (0x0009cb1a) cam6_autofocus_pane_ParamLimits

0x79b4,	// (0x0009cb1a) cam6_autofocus_pane

0x79d6,	// (0x0009cb3c) cam6_image_uncrop_pane_ParamLimits

0x79d6,	// (0x0009cb3c) cam6_image_uncrop_pane

0x7a03,	// (0x0009cb69) cam6_indi_pane_ParamLimits

0x7a03,	// (0x0009cb69) cam6_indi_pane

0x7a1d,	// (0x0009cb83) cam6_mode_pane_ParamLimits

0x7a1d,	// (0x0009cb83) cam6_mode_pane

0x7a31,	// (0x0009cb97) cam6_timer_pane_ParamLimits

0x7a31,	// (0x0009cb97) cam6_timer_pane

0x7a3d,	// (0x0009cba3) cam6_zoom_pane_ParamLimits

0x7a3d,	// (0x0009cba3) cam6_zoom_pane

0x7a55,	// (0x0009cbbb) cam6_mode_pane_g1_ParamLimits

0x7a55,	// (0x0009cbbb) cam6_mode_pane_g1

0x7a61,	// (0x0009cbc7) cam6_mode_pane_g2_ParamLimits

0x7a61,	// (0x0009cbc7) cam6_mode_pane_g2

0x7a6d,	// (0x0009cbd3) cam6_mode_pane_g3_ParamLimits

0x7a6d,	// (0x0009cbd3) cam6_mode_pane_g3

0x7a79,	// (0x0009cbdf) cam6_mode_pane_g4_ParamLimits

0x7a79,	// (0x0009cbdf) cam6_mode_pane_g4

0x0003,

0xfb57,	// (0x000a4cbd) cam6_mode_pane_g_ParamLimits

0xfb57,	// (0x000a4cbd) cam6_mode_pane_g

0xcfa5,	// (0x000a210b) bg_tb_trans_pane_cp08_ParamLimits

0xcfa5,	// (0x000a210b) bg_tb_trans_pane_cp08

0xd07b,	// (0x000a21e1) cam6_battery_pane_ParamLimits

0xd07b,	// (0x000a21e1) cam6_battery_pane

0xd091,	// (0x000a21f7) cam6_indi_pane_g1_ParamLimits

0xd091,	// (0x000a21f7) cam6_indi_pane_g1

0xd0a3,	// (0x000a2209) cam6_indi_pane_g2_ParamLimits

0xd0a3,	// (0x000a2209) cam6_indi_pane_g2

0xd0b5,	// (0x000a221b) cam6_indi_pane_g3_ParamLimits

0xd0b5,	// (0x000a221b) cam6_indi_pane_g3

0x0002,

0xfb60,	// (0x000a4cc6) cam6_indi_pane_g_ParamLimits

0xfb60,	// (0x000a4cc6) cam6_indi_pane_g

0xd0c7,	// (0x000a222d) cam6_indi_pane_t1_ParamLimits

0xd0c7,	// (0x000a222d) cam6_indi_pane_t1

0x661d,	// (0x0009b783) cam6_autofocus_pane_g1

0x6615,	// (0x0009b77b) cam6_autofocus_pane_g2

0x662d,	// (0x0009b793) cam6_autofocus_pane_g3

0x6625,	// (0x0009b78b) cam6_autofocus_pane_g4

0x0003,

0xfb67,	// (0x000a4ccd) cam6_autofocus_pane_g

0xd0ed,	// (0x000a2253) cam6_timer_pane_g1

0xd0f5,	// (0x000a225b) cam6_timer_pane_t1

0xd103,	// (0x000a2269) cam6_zoom_cont_pane

0xd10b,	// (0x000a2271) cam6_zoom_pane_g1

0xd113,	// (0x000a2279) cam6_zoom_pane_g2

0x7a85,	// (0x0009cbeb) cam6_zoom_pane_g3

0x0002,

0xfb70,	// (0x000a4cd6) cam6_zoom_pane_g

0xbe53,	// (0x000a0fb9) cam6_battery_pane_g1

0xbe53,	// (0x000a0fb9) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x000a4842) cam6_battery_pane_g

0xd11b,	// (0x000a2281) cam6_zoom_cont_pane_g1

0xd124,	// (0x000a228a) cam6_zoom_cont_pane_g2

0xd12d,	// (0x000a2293) cam6_zoom_cont_pane_g3

0x0002,

0xfb77,	// (0x000a4cdd) cam6_zoom_cont_pane_g

0x7aa2,	// (0x0009cc08) cam6_mode_pane_cp_ParamLimits

0x7aa2,	// (0x0009cc08) cam6_mode_pane_cp

0x7ab6,	// (0x0009cc1c) cam6_zoom_pane_cp_ParamLimits

0x7ab6,	// (0x0009cc1c) cam6_zoom_pane_cp

0x7ace,	// (0x0009cc34) vid6_image_uncrop_cif_pane_ParamLimits

0x7ace,	// (0x0009cc34) vid6_image_uncrop_cif_pane

0x7afa,	// (0x0009cc60) vid6_image_uncrop_nhd_pane_ParamLimits

0x7afa,	// (0x0009cc60) vid6_image_uncrop_nhd_pane

0x7b17,	// (0x0009cc7d) vid6_image_uncrop_vga_pane_ParamLimits

0x7b17,	// (0x0009cc7d) vid6_image_uncrop_vga_pane

0x7b36,	// (0x0009cc9c) vid6_image_uncrop_wvga_pane_ParamLimits

0x7b36,	// (0x0009cc9c) vid6_image_uncrop_wvga_pane

0x7b53,	// (0x0009ccb9) vid6_indi_pane_ParamLimits

0x7b53,	// (0x0009ccb9) vid6_indi_pane

0xcfa5,	// (0x000a210b) bg_tb_trans_pane_cp09_ParamLimits

0xcfa5,	// (0x000a210b) bg_tb_trans_pane_cp09

0xd145,	// (0x000a22ab) cam6_battery_pane_cp_ParamLimits

0xd145,	// (0x000a22ab) cam6_battery_pane_cp

0xd151,	// (0x000a22b7) vid6_indi_pane_g1_ParamLimits

0xd151,	// (0x000a22b7) vid6_indi_pane_g1

0xd163,	// (0x000a22c9) vid6_indi_pane_g2_ParamLimits

0xd163,	// (0x000a22c9) vid6_indi_pane_g2

0xd175,	// (0x000a22db) vid6_indi_pane_g3_ParamLimits

0xd175,	// (0x000a22db) vid6_indi_pane_g3

0xd18a,	// (0x000a22f0) vid6_indi_pane_g4_ParamLimits

0xd18a,	// (0x000a22f0) vid6_indi_pane_g4

0xd19f,	// (0x000a2305) vid6_indi_pane_g5_ParamLimits

0xd19f,	// (0x000a2305) vid6_indi_pane_g5

0x0004,

0xfb7e,	// (0x000a4ce4) vid6_indi_pane_g_ParamLimits

0xfb7e,	// (0x000a4ce4) vid6_indi_pane_g

0xd1b9,	// (0x000a231f) vid6_indi_pane_t1_ParamLimits

0xd1b9,	// (0x000a231f) vid6_indi_pane_t1

0xd1cf,	// (0x000a2335) vid6_indi_pane_t2_ParamLimits

0xd1cf,	// (0x000a2335) vid6_indi_pane_t2

0xd1f7,	// (0x000a235d) vid6_indi_pane_t3_ParamLimits

0xd1f7,	// (0x000a235d) vid6_indi_pane_t3

0xd21f,	// (0x000a2385) vid6_indi_pane_t4_ParamLimits

0xd21f,	// (0x000a2385) vid6_indi_pane_t4

0x0003,

0xfb89,	// (0x000a4cef) vid6_indi_pane_t_ParamLimits

0xfb89,	// (0x000a4cef) vid6_indi_pane_t

0xd243,	// (0x000a23a9) wait_bar_pane_cp08

0x7b78,	// (0x0009ccde) main_cset_text2_pane_t1_ParamLimits

0x7b78,	// (0x0009ccde) main_cset_text2_pane_t1

0x7a8d,	// (0x0009cbf3) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a8d,	// (0x0009cbf3) listscroll_gen_pane_cp06_t1

0x11e8,	// (0x0009634e) main_cam6_set_pane

0x64af,	// (0x0009b615) bg_tb_trans_pane_cp06_ParamLimits

0x64c5,	// (0x0009b62b) cam4_indicators_pane_g1_ParamLimits

0x64d6,	// (0x0009b63c) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x000a4a5d) cam4_indicators_pane_g_ParamLimits

0x64f4,	// (0x0009b65a) cam4_indicators_pane_t1_ParamLimits

0x4512,	// (0x00099678) bg_tb_trans_pane_cp07_ParamLimits

0x65a7,	// (0x0009b70d) vid4_indicators_pane_g1_ParamLimits

0x65bb,	// (0x0009b721) vid4_indicators_pane_g2_ParamLimits

0x65cf,	// (0x0009b735) vid4_indicators_pane_g3_ParamLimits

0x65e0,	// (0x0009b746) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x000a4a6f) vid4_indicators_pane_g_ParamLimits

0x65fe,	// (0x0009b764) vid4_indicators_pane_t1_ParamLimits

0x7615,	// (0x0009c77b) vid4_progress_pane_g1_ParamLimits

0x7625,	// (0x0009c78b) vid4_progress_pane_g2_ParamLimits

0x7635,	// (0x0009c79b) vid4_progress_pane_g3_ParamLimits

0x7647,	// (0x0009c7ad) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x000a4c20) vid4_progress_pane_g_ParamLimits

0x765f,	// (0x0009c7c5) vid4_progress_pane_t1_ParamLimits

0x7675,	// (0x0009c7db) vid4_progress_pane_t2_ParamLimits

0x768a,	// (0x0009c7f0) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x000a4c2b) vid4_progress_pane_t_ParamLimits

0x769f,	// (0x0009c805) wait_bar_pane_cp07_ParamLimits

0x7bab,	// (0x0009cd11) main_cam6_set_pane_g2_ParamLimits

0x7bab,	// (0x0009cd11) main_cam6_set_pane_g2

0x7bb7,	// (0x0009cd1d) main_cset6_listscroll_pane_ParamLimits

0x7bb7,	// (0x0009cd1d) main_cset6_listscroll_pane

0x7be2,	// (0x0009cd48) main_cset6_slider_pane_ParamLimits

0x7be2,	// (0x0009cd48) main_cset6_slider_pane

0x7bee,	// (0x0009cd54) main_cset6_text2_pane_ParamLimits

0x7bee,	// (0x0009cd54) main_cset6_text2_pane

0xd252,	// (0x000a23b8) main_cset6_text_pane

0xd25a,	// (0x000a23c0) main_cset_list_pane_copy1_ParamLimits

0xd25a,	// (0x000a23c0) main_cset_list_pane_copy1

0xd26a,	// (0x000a23d0) scroll_pane_cp028_copy1

0x7c01,	// (0x0009cd67) cset_list_set_pane_copy1

0x7c14,	// (0x0009cd7a) aid_position_infowindow_above_copy1

0x7c1c,	// (0x0009cd82) aid_position_infowindow_below_copy1

0x7c24,	// (0x0009cd8a) cset_list_set_pane_g1_copy1

0xcb2e,	// (0x000a1c94) cset_list_set_pane_g3_copy1_ParamLimits

0xcb2e,	// (0x000a1c94) cset_list_set_pane_g3_copy1

0xcb3d,	// (0x000a1ca3) cset_list_set_pane_t1_copy1_ParamLimits

0xcb3d,	// (0x000a1ca3) cset_list_set_pane_t1_copy1

0xe796,	// (0x000a38fc) list_highlight_pane_cp021_copy1_ParamLimits

0xe796,	// (0x000a38fc) list_highlight_pane_cp021_copy1

0xd273,	// (0x000a23d9) cset6_slider_pane_ParamLimits

0xd273,	// (0x000a23d9) cset6_slider_pane

0xd29f,	// (0x000a2405) main_cset6_slider_pane_g1_ParamLimits

0xd29f,	// (0x000a2405) main_cset6_slider_pane_g1

0x7c2c,	// (0x0009cd92) main_cset6_slider_pane_g2_ParamLimits

0x7c2c,	// (0x0009cd92) main_cset6_slider_pane_g2

0xd2c7,	// (0x000a242d) main_cset6_slider_pane_g3_ParamLimits

0xd2c7,	// (0x000a242d) main_cset6_slider_pane_g3

0x7c54,	// (0x0009cdba) main_cset6_slider_pane_g4_ParamLimits

0x7c54,	// (0x0009cdba) main_cset6_slider_pane_g4

0x7c60,	// (0x0009cdc6) main_cset6_slider_pane_g5_ParamLimits

0x7c60,	// (0x0009cdc6) main_cset6_slider_pane_g5

0xca6a,	// (0x000a1bd0) main_cset6_slider_pane_g7_ParamLimits

0xca6a,	// (0x000a1bd0) main_cset6_slider_pane_g7

0xca76,	// (0x000a1bdc) main_cset6_slider_pane_g8_ParamLimits

0xca76,	// (0x000a1bdc) main_cset6_slider_pane_g8

0x7c6e,	// (0x0009cdd4) main_cset6_slider_pane_g9_ParamLimits

0x7c6e,	// (0x0009cdd4) main_cset6_slider_pane_g9

0x7c7a,	// (0x0009cde0) main_cset6_slider_pane_g10_ParamLimits

0x7c7a,	// (0x0009cde0) main_cset6_slider_pane_g10

0x7c86,	// (0x0009cdec) main_cset6_slider_pane_g11_ParamLimits

0x7c86,	// (0x0009cdec) main_cset6_slider_pane_g11

0x7c92,	// (0x0009cdf8) main_cset6_slider_pane_g12_ParamLimits

0x7c92,	// (0x0009cdf8) main_cset6_slider_pane_g12

0x7c9e,	// (0x0009ce04) main_cset6_slider_pane_g13_ParamLimits

0x7c9e,	// (0x0009ce04) main_cset6_slider_pane_g13

0x7caa,	// (0x0009ce10) main_cset6_slider_pane_g14_ParamLimits

0x7caa,	// (0x0009ce10) main_cset6_slider_pane_g14

0x7cb6,	// (0x0009ce1c) main_cset6_slider_pane_g15_ParamLimits

0x7cb6,	// (0x0009ce1c) main_cset6_slider_pane_g15

0x7cce,	// (0x0009ce34) main_cset6_slider_pane_g16_ParamLimits

0x7cce,	// (0x0009ce34) main_cset6_slider_pane_g16

0x7cdc,	// (0x0009ce42) main_cset6_slider_pane_g17_ParamLimits

0x7cdc,	// (0x0009ce42) main_cset6_slider_pane_g17

0x0011,

0xfb92,	// (0x000a4cf8) main_cset6_slider_pane_g_ParamLimits

0xfb92,	// (0x000a4cf8) main_cset6_slider_pane_g

0xd2d3,	// (0x000a2439) main_cset6_slider_pane_t1_ParamLimits

0xd2d3,	// (0x000a2439) main_cset6_slider_pane_t1

0x7d02,	// (0x0009ce68) main_cset6_slider_pane_t2_ParamLimits

0x7d02,	// (0x0009ce68) main_cset6_slider_pane_t2

0x7d2d,	// (0x0009ce93) main_cset6_slider_pane_t3_ParamLimits

0x7d2d,	// (0x0009ce93) main_cset6_slider_pane_t3

0x7d58,	// (0x0009cebe) main_cset6_slider_pane_t4_ParamLimits

0x7d58,	// (0x0009cebe) main_cset6_slider_pane_t4

0x7d83,	// (0x0009cee9) main_cset6_slider_pane_t5_ParamLimits

0x7d83,	// (0x0009cee9) main_cset6_slider_pane_t5

0xd314,	// (0x000a247a) main_cset6_slider_pane_t7_ParamLimits

0xd314,	// (0x000a247a) main_cset6_slider_pane_t7

0x7db0,	// (0x0009cf16) main_cset6_slider_pane_t8_ParamLimits

0x7db0,	// (0x0009cf16) main_cset6_slider_pane_t8

0x7dd4,	// (0x0009cf3a) main_cset6_slider_pane_t9_ParamLimits

0x7dd4,	// (0x0009cf3a) main_cset6_slider_pane_t9

0x7df8,	// (0x0009cf5e) main_cset6_slider_pane_t10_ParamLimits

0x7df8,	// (0x0009cf5e) main_cset6_slider_pane_t10

0x7e1c,	// (0x0009cf82) main_cset6_slider_pane_t11_ParamLimits

0x7e1c,	// (0x0009cf82) main_cset6_slider_pane_t11

0xd34a,	// (0x000a24b0) main_cset6_slider_pane_t14_ParamLimits

0xd34a,	// (0x000a24b0) main_cset6_slider_pane_t14

0xd383,	// (0x000a24e9) main_cset6_slider_pane_t15_ParamLimits

0xd383,	// (0x000a24e9) main_cset6_slider_pane_t15

0x000b,

0xfbb7,	// (0x000a4d1d) main_cset6_slider_pane_t_ParamLimits

0xfbb7,	// (0x000a4d1d) main_cset6_slider_pane_t

0xcb65,	// (0x000a1ccb) cset_slider_pane_g1_copy1

0xcb6e,	// (0x000a1cd4) cset_slider_pane_g2_copy1

0xcb77,	// (0x000a1cdd) cset_slider_pane_g3_copy1

0xe6b0,	// (0x000a3816) bg_popup_sub_pane_cp011_copy1

0xd3bc,	// (0x000a2522) main_cset_text_pane_g1_copy1

0xcbed,	// (0x000a1d53) main_cset_text_pane_t1_copy1

0xcbfb,	// (0x000a1d61) main_cset_text_pane_t2_copy1

0xcc09,	// (0x000a1d6f) main_cset_text_pane_t3_copy1

0xcc17,	// (0x000a1d7d) main_cset_text_pane_t4_copy1

0xcc25,	// (0x000a1d8b) main_cset_text_pane_t5_copy1

0xd3c4,	// (0x000a252a) main_cset_text_pane_t6_copy1

0xd3d2,	// (0x000a2538) main_cset_text_pane_t7_copy1

0x7f10,	// (0x0009d076) main_cset_text2_pane_t1_copy1

0x4512,	// (0x00099678) main_ncimui_pane

0x4571,	// (0x000996d7) popup_query_ncimui_window_ParamLimits

0x4571,	// (0x000996d7) popup_query_ncimui_window

0xc11b,	// (0x000a1281) field_cale_ev2_pane_g4_ParamLimits

0xc11b,	// (0x000a1281) field_cale_ev2_pane_g4

0x5e40,	// (0x0009afa6) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5e40,	// (0x0009afa6) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x000a49fb) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x000a49fb) cell_video_dialer_keypad_pane_g

0x5e58,	// (0x0009afbe) cell_video_dialer_keypad_pane_t1

0xe6b0,	// (0x000a3816) bg_popup_window_pane_cp012

0xa2bd,	// (0x0009f423) heading_pane_cp06

0xd3fe,	// (0x000a2564) ncim_query_content_pane

0xe6b0,	// (0x000a3816) bg_popup_heading_pane_cp01

0xd406,	// (0x000a256c) ncim_heading_pane_t1

0xd414,	// (0x000a257a) ncim_indicator_popup_pane

0xd426,	// (0x000a258c) ncim_query_button_pane

0xd43a,	// (0x000a25a0) ncim_query_content_pane_t1

0xd44c,	// (0x000a25b2) ncim_query_content_pane_t2

0x0005,

0xfbfb,	// (0x000a4d61) ncim_query_content_pane_t

0xd486,	// (0x000a25ec) ncim_query_list_pane

0xd498,	// (0x000a25fe) ncim_query_popup_pane

0xd414,	// (0x000a257a) ncim_indicator_popup_pane_ParamLimits

0x8063,	// (0x0009d1c9) ncim_query_content_pane_g1_ParamLimits

0x8063,	// (0x0009d1c9) ncim_query_content_pane_g1

0xd43a,	// (0x000a25a0) ncim_query_content_pane_t1_ParamLimits

0xd44c,	// (0x000a25b2) ncim_query_content_pane_t2_ParamLimits

0x806f,	// (0x0009d1d5) ncim_query_content_pane_t3_ParamLimits

0x806f,	// (0x0009d1d5) ncim_query_content_pane_t3

0x808c,	// (0x0009d1f2) ncim_query_content_pane_t4_ParamLimits

0x808c,	// (0x0009d1f2) ncim_query_content_pane_t4

0x80a9,	// (0x0009d20f) ncim_query_content_pane_t5_ParamLimits

0x80a9,	// (0x0009d20f) ncim_query_content_pane_t5

0xd45e,	// (0x000a25c4) ncim_query_content_pane_t6_ParamLimits

0xd45e,	// (0x000a25c4) ncim_query_content_pane_t6

0xfbfb,	// (0x000a4d61) ncim_query_content_pane_t_ParamLimits

0xd486,	// (0x000a25ec) ncim_query_list_pane_ParamLimits

0xd498,	// (0x000a25fe) ncim_query_popup_pane_ParamLimits

0xd4ac,	// (0x000a2612) wait_bar_pane_cp04

0xe6b0,	// (0x000a3816) input_focus_pane_cp011

0xd4b4,	// (0x000a261a) ncim_query_popup_pane_t1

0xd4c2,	// (0x000a2628) ncim_list_query_list_pane_ParamLimits

0xd4c2,	// (0x000a2628) ncim_list_query_list_pane

0xe6b0,	// (0x000a3816) bg_button_pane_cp027

0xd4cf,	// (0x000a2635) ncim_query_button_pane_g1

0xe6b0,	// (0x000a3816) list_highlight_pane_cp012

0xd4d9,	// (0x000a263f) ncim_list_query_list_pane_g1

0xd4e1,	// (0x000a2647) ncim_list_query_list_pane_t1

0x64e5,	// (0x0009b64b) cam4_indicators_pane_g3_ParamLimits

0x64e5,	// (0x0009b64b) cam4_indicators_pane_g3

0x65ec,	// (0x0009b752) vid4_indicators_pane_g5_ParamLimits

0x65ec,	// (0x0009b752) vid4_indicators_pane_g5

0x7653,	// (0x0009c7b9) vid4_progress_pane_g5_ParamLimits

0x7653,	// (0x0009c7b9) vid4_progress_pane_g5

0x7f4f,	// (0x0009d0b5) main_ncimui_pane_g1

0x7fb7,	// (0x0009d11d) ncimui_group_query_pane_ParamLimits

0x7fb7,	// (0x0009d11d) ncimui_group_query_pane

0x7fff,	// (0x0009d165) ncimui_list_pane_ParamLimits

0x7fff,	// (0x0009d165) ncimui_list_pane

0x8026,	// (0x0009d18c) ncimui_text_pane_ParamLimits

0x8026,	// (0x0009d18c) ncimui_text_pane

0x80c6,	// (0x0009d22c) ncimui_text_pane_t1_ParamLimits

0x80c6,	// (0x0009d22c) ncimui_text_pane_t1

0xd4ef,	// (0x000a2655) ncimui_list_single_graphic_pane_ParamLimits

0xd4ef,	// (0x000a2655) ncimui_list_single_graphic_pane

0x80e5,	// (0x0009d24b) ncimui_query_pane_ParamLimits

0x80e5,	// (0x0009d24b) ncimui_query_pane

0xe6b0,	// (0x000a3816) list_highlight_pane_cp013

0xd4ff,	// (0x000a2665) ncim_list_query_list_pane_t1_copy1

0xd4d9,	// (0x000a263f) ncim_list_single_graphic_pane_g1

0xd50d,	// (0x000a2673) ncim_query_button_pane_cp01

0xd519,	// (0x000a267f) ncim_query_entry_pane_ParamLimits

0xd519,	// (0x000a267f) ncim_query_entry_pane

0xd52c,	// (0x000a2692) ncimui_query_pane_g1

0xd538,	// (0x000a269e) ncimui_query_pane_t1_ParamLimits

0xd538,	// (0x000a269e) ncimui_query_pane_t1

0xe796,	// (0x000a38fc) input_focus_pane_cp012

0xd551,	// (0x000a26b7) ncim_query_entry_pane_t1

0xee64,	// (0x000a3fca) main_im_pane_ParamLimits

0x4512,	// (0x00099678) main_mobtv_pane_ParamLimits

0x4512,	// (0x00099678) main_mobtv_pane

0x7cea,	// (0x0009ce50) main_cset6_slider_pane_g18_ParamLimits

0x7cea,	// (0x0009ce50) main_cset6_slider_pane_g18

0x7cf6,	// (0x0009ce5c) main_cset6_slider_pane_g19_ParamLimits

0x7cf6,	// (0x0009ce5c) main_cset6_slider_pane_g19

0xc8fe,	// (0x000a1a64) bg_main_mobtv_pane_ParamLimits

0xc8fe,	// (0x000a1a64) bg_main_mobtv_pane

0x80f8,	// (0x0009d25e) main_mobtv_info_pane

0x8103,	// (0x0009d269) main_mobtv_loading_pane_ParamLimits

0x8103,	// (0x0009d269) main_mobtv_loading_pane

0xd563,	// (0x000a26c9) main_mobtv_pg_channel_list_pane

0xd56d,	// (0x000a26d3) main_mobtv_pg_hdr_pane

0x8110,	// (0x0009d276) main_mobtv_programe_curr_pane_ParamLimits

0x8110,	// (0x0009d276) main_mobtv_programe_curr_pane

0x811d,	// (0x0009d283) main_mobtv_programe_next_pane_ParamLimits

0x811d,	// (0x0009d283) main_mobtv_programe_next_pane

0xd576,	// (0x000a26dc) popup_mobtv_noti_window

0xbe53,	// (0x000a0fb9) main_tv_pg_hdr_pane_g1

0xd57e,	// (0x000a26e4) main_tv_pg_hdr_pane_g2

0xd586,	// (0x000a26ec) main_tv_pg_hdr_pane_g3

0xd58e,	// (0x000a26f4) main_tv_pg_hdr_pane_g4

0xd596,	// (0x000a26fc) main_tv_pg_hdr_pane_g5

0xd5a0,	// (0x000a2706) main_tv_pg_hdr_pane_g6

0xd5aa,	// (0x000a2710) main_tv_pg_hdr_pane_g7

0xd5b4,	// (0x000a271a) main_tv_pg_hdr_pane_g8

0xd5be,	// (0x000a2724) main_tv_pg_hdr_pane_g9

0xd5c8,	// (0x000a272e) main_tv_pg_hdr_pane_g10

0xd5d2,	// (0x000a2738) main_tv_pg_hdr_pane_g11

0x000a,

0xfc08,	// (0x000a4d6e) main_tv_pg_hdr_pane_g

0xd5dc,	// (0x000a2742) main_tv_pg_hdr_pane_t1

0xd5ea,	// (0x000a2750) main_tv_pg_hdr_pane_t2

0xd5f8,	// (0x000a275e) main_tv_pg_hdr_pane_t3

0xd608,	// (0x000a276e) main_tv_pg_hdr_pane_t4

0xd618,	// (0x000a277e) main_tv_pg_hdr_pane_t5

0x0004,

0xfc1f,	// (0x000a4d85) main_tv_pg_hdr_pane_t

0xd628,	// (0x000a278e) single_mobtv_pg_channel_pane_ParamLimits

0xd628,	// (0x000a278e) single_mobtv_pg_channel_pane

0xd63a,	// (0x000a27a0) single_mobtv_pg_channel_table_pane

0xd643,	// (0x000a27a9) single_mobtv_pg_channel_thumb_pane

0xd64c,	// (0x000a27b2) single_tv_pg_channel_pane_g1

0xd655,	// (0x000a27bb) single_tv_pg_channel_pane_g2

0x0001,

0xfc2a,	// (0x000a4d90) single_tv_pg_channel_pane_g

0xc0b6,	// (0x000a121c) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc0b6,	// (0x000a121c) bg_single_mobtv_pg_channel_thumb_pane

0xd65e,	// (0x000a27c4) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd65e,	// (0x000a27c4) single_mobtv_pg_channel_thumb_pane_g1

0xd66c,	// (0x000a27d2) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd66c,	// (0x000a27d2) single_mobtv_pg_channel_thumb_pane_g2

0xd678,	// (0x000a27de) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd678,	// (0x000a27de) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc2f,	// (0x000a4d95) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc2f,	// (0x000a4d95) single_mobtv_pg_channel_thumb_pane_g

0xd684,	// (0x000a27ea) single_mobtv_pg_channel_thumb_pane_t1

0xd692,	// (0x000a27f8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc36,	// (0x000a4d9c) single_mobtv_pg_channel_thumb_pane_t

0xbe53,	// (0x000a0fb9) bg_single_mobtv_pg_channel_table_pane_g1

0xbe53,	// (0x000a0fb9) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x000a4842) bg_single_mobtv_pg_channel_table_pane_g

0xd6a0,	// (0x000a2806) single_mobtv_pg_channel_table_pane_t1

0xd6ae,	// (0x000a2814) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc3b,	// (0x000a4da1) single_mobtv_pg_channel_table_pane_t

0x8132,	// (0x0009d298) main_mobtv_info_pane_g1_ParamLimits

0x8132,	// (0x0009d298) main_mobtv_info_pane_g1

0x814e,	// (0x0009d2b4) main_mobtv_info_pane_t1_ParamLimits

0x814e,	// (0x0009d2b4) main_mobtv_info_pane_t1

0x81c6,	// (0x0009d32c) main_mobtv_info_pane_t2_ParamLimits

0x81c6,	// (0x0009d32c) main_mobtv_info_pane_t2

0x0002,

0xfc45,	// (0x000a4dab) main_mobtv_info_pane_t_ParamLimits

0xfc45,	// (0x000a4dab) main_mobtv_info_pane_t

0x8255,	// (0x0009d3bb) wait_bar_pane_cp05

0x8267,	// (0x0009d3cd) main_mobtv_loading_pane_g1_ParamLimits

0x8267,	// (0x0009d3cd) main_mobtv_loading_pane_g1

0x8275,	// (0x0009d3db) main_mobtv_loading_pane_g2_ParamLimits

0x8275,	// (0x0009d3db) main_mobtv_loading_pane_g2

0x8281,	// (0x0009d3e7) main_mobtv_loading_pane_g3_ParamLimits

0x8281,	// (0x0009d3e7) main_mobtv_loading_pane_g3

0x0002,

0xfc4c,	// (0x000a4db2) main_mobtv_loading_pane_g_ParamLimits

0xfc4c,	// (0x000a4db2) main_mobtv_loading_pane_g

0xd6bc,	// (0x000a2822) main_mobtv_loading_pane_t1_ParamLimits

0xd6bc,	// (0x000a2822) main_mobtv_loading_pane_t1

0xd6d4,	// (0x000a283a) main_mobtv_loading_pane_t2_ParamLimits

0xd6d4,	// (0x000a283a) main_mobtv_loading_pane_t2

0x0001,

0xfc53,	// (0x000a4db9) main_mobtv_loading_pane_t_ParamLimits

0xfc53,	// (0x000a4db9) main_mobtv_loading_pane_t

0x828f,	// (0x0009d3f5) wait_bar_pane_cp06_ParamLimits

0x828f,	// (0x0009d3f5) wait_bar_pane_cp06

0xd6f8,	// (0x000a285e) main_mobtv_programe_curr_pane_t1

0xd706,	// (0x000a286c) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc58,	// (0x000a4dbe) main_mobtv_programe_curr_pane_t

0xd714,	// (0x000a287a) main_mobtv_programe_next_pane_t1

0xd722,	// (0x000a2888) main_mobtv_programe_next_pane_t2

0xd730,	// (0x000a2896) main_mobtv_programe_next_pane_t3

0x0002,

0xfc5d,	// (0x000a4dc3) main_mobtv_programe_next_pane_t

0xe6b0,	// (0x000a3816) bg_popup_mobtv_noti_window_pane

0xd73e,	// (0x000a28a4) popup_mobtv_noti_window_g1

0xd746,	// (0x000a28ac) popup_mobtv_noti_window_t1

0xd754,	// (0x000a28ba) popup_mobtv_noti_window_t2

0x0001,

0xfc64,	// (0x000a4dca) popup_mobtv_noti_window_t

0xbe53,	// (0x000a0fb9) bg_popup_mobtv_noti_window_pane_g1

0x11e8,	// (0x0009634e) sc_clock_pane

0x11e8,	// (0x0009634e) main_fs_bigclock_pane

0x7867,	// (0x0009c9cd) blid2_tripm_pane_t4_ParamLimits

0x7867,	// (0x0009c9cd) blid2_tripm_pane_t4

0x829b,	// (0x0009d401) sc_clock_pane_g1_ParamLimits

0x829b,	// (0x0009d401) sc_clock_pane_g1

0x82a9,	// (0x0009d40f) sc_clock_pane_t1_ParamLimits

0x82a9,	// (0x0009d40f) sc_clock_pane_t1

0x82bc,	// (0x0009d422) sc_clock_pane_t2_ParamLimits

0x82bc,	// (0x0009d422) sc_clock_pane_t2

0x82ce,	// (0x0009d434) sc_clock_pane_t3_ParamLimits

0x82ce,	// (0x0009d434) sc_clock_pane_t3

0x0004,

0xfc69,	// (0x000a4dcf) sc_clock_pane_t_ParamLimits

0xfc69,	// (0x000a4dcf) sc_clock_pane_t

0x91bc,	// (0x0009e322) main_fs_bigclock_indicator_pane_ParamLimits

0x91bc,	// (0x0009e322) main_fs_bigclock_indicator_pane

0x8357,	// (0x0009d4bd) main_fs_bigclock_pane_g1_ParamLimits

0x8357,	// (0x0009d4bd) main_fs_bigclock_pane_g1

0x91c8,	// (0x0009e32e) main_fs_bigclock_pane_t1_ParamLimits

0x91c8,	// (0x0009e32e) main_fs_bigclock_pane_t1

0x91da,	// (0x0009e340) main_fs_bigclock_pane_t2_ParamLimits

0x91da,	// (0x0009e340) main_fs_bigclock_pane_t2

0x91ee,	// (0x0009e354) main_fs_bigclock_pane_t3_ParamLimits

0x91ee,	// (0x0009e354) main_fs_bigclock_pane_t3

0x0002,

0xfe73,	// (0x000a4fd9) main_fs_bigclock_pane_t_ParamLimits

0xfe73,	// (0x000a4fd9) main_fs_bigclock_pane_t

0xe2b1,	// (0x000a3417) main_fs_bigclock_indicator_pane_g1

0xd42e,	// (0x000a2594) ncim_query_content_pane_g2_ParamLimits

0xd42e,	// (0x000a2594) ncim_query_content_pane_g2

0x0001,

0xfbf6,	// (0x000a4d5c) ncim_query_content_pane_g_ParamLimits

0xfbf6,	// (0x000a4d5c) ncim_query_content_pane_g

0x82e2,	// (0x0009d448) sc_clock_pane_t4_ParamLimits

0x82e2,	// (0x0009d448) sc_clock_pane_t4

0x4512,	// (0x00099678) main_radioblah_pane

0xc85f,	// (0x000a19c5) cell_call4_button_pane_t1_copy1_ParamLimits

0xc85f,	// (0x000a19c5) cell_call4_button_pane_t1_copy1

0x7f69,	// (0x0009d0cf) main_ncimui_pane_t1_ParamLimits

0x7f69,	// (0x0009d0cf) main_ncimui_pane_t1

0x7f83,	// (0x0009d0e9) main_ncimui_pane_t2_ParamLimits

0x7f83,	// (0x0009d0e9) main_ncimui_pane_t2

0x0002,

0xfbef,	// (0x000a4d55) main_ncimui_pane_t_ParamLimits

0xfbef,	// (0x000a4d55) main_ncimui_pane_t

0xd898,	// (0x000a29fe) main_radioblah_anim_pane_ParamLimits

0xd898,	// (0x000a29fe) main_radioblah_anim_pane

0xd8a9,	// (0x000a2a0f) main_radioblah_info_pane_ParamLimits

0xd8a9,	// (0x000a2a0f) main_radioblah_info_pane

0xd8bd,	// (0x000a2a23) main_radioblah_pane_t1_ParamLimits

0xd8bd,	// (0x000a2a23) main_radioblah_pane_t1

0xd8d9,	// (0x000a2a3f) main_radioblah_pane_t2_ParamLimits

0xd8d9,	// (0x000a2a3f) main_radioblah_pane_t2

0x0003,

0xfc8a,	// (0x000a4df0) main_radioblah_pane_t_ParamLimits

0xfc8a,	// (0x000a4df0) main_radioblah_pane_t

0x83a9,	// (0x0009d50f) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83a9,	// (0x0009d50f) main_radioblah_rocker_ctrl_pane

0xd921,	// (0x000a2a87) main_radioblah_info_pane_t1_ParamLimits

0xd921,	// (0x000a2a87) main_radioblah_info_pane_t1

0x83ee,	// (0x0009d554) main_radioblah_info_pane_t2_ParamLimits

0x83ee,	// (0x0009d554) main_radioblah_info_pane_t2

0x0003,

0xfc93,	// (0x000a4df9) main_radioblah_info_pane_t_ParamLimits

0xfc93,	// (0x000a4df9) main_radioblah_info_pane_t

0xbe53,	// (0x000a0fb9) main_radioblah_rocker_ctrl_pane_g1

0x849e,	// (0x0009d604) main_radioblah_rocker_ctrl_pane_g2

0x84a6,	// (0x0009d60c) main_radioblah_rocker_ctrl_pane_g3

0x84ae,	// (0x0009d614) main_radioblah_rocker_ctrl_pane_g4

0x84b6,	// (0x0009d61c) main_radioblah_rocker_ctrl_pane_g5

0x84be,	// (0x0009d624) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc9c,	// (0x000a4e02) main_radioblah_rocker_ctrl_pane_g

0x7f10,	// (0x0009d076) main_cset_text2_pane_t1_copy1_ParamLimits

0x6405,	// (0x0009b56b) cam4_image_uncrop_qvga_pane

0x655a,	// (0x0009b6c0) vid4_image_uncrop_qcif_pane

0x79f5,	// (0x0009cb5b) cam6_image_uncrop_qvga_pane_ParamLimits

0x79f5,	// (0x0009cb5b) cam6_image_uncrop_qvga_pane

0xd135,	// (0x000a229b) vid6_image_uncrop_qcif_pane_ParamLimits

0xd135,	// (0x000a229b) vid6_image_uncrop_qcif_pane

0xe6b0,	// (0x000a3816) bg_popup_preview_window_pane_cp03

0xd3e0,	// (0x000a2546) list_cset_text2_pane

0xd3e8,	// (0x000a254e) main_cset6_text2_pane_g1

0xd3f0,	// (0x000a2556) main_cset6_text2_pane_t1

0x84c6,	// (0x0009d62c) list_cset_text2_pane_t1_ParamLimits

0x84c6,	// (0x0009d62c) list_cset_text2_pane_t1

0x4512,	// (0x00099678) main_radioblah_pane_ParamLimits

0x8241,	// (0x0009d3a7) main_mobtv_info_pane_t3_ParamLimits

0x8241,	// (0x0009d3a7) main_mobtv_info_pane_t3

0x8397,	// (0x0009d4fd) main_radioblah_pane_g1

0x83c2,	// (0x0009d528) main_radioblah_info_pane_g1

0x8443,	// (0x0009d5a9) main_radioblah_info_pane_t3_ParamLimits

0x8443,	// (0x0009d5a9) main_radioblah_info_pane_t3

0x31e5,	// (0x0009834b) highlight_cell_cale_month_pane_ParamLimits

0x31e5,	// (0x0009834b) highlight_cell_cale_month_pane

0x11e8,	// (0x0009634e) main_phob_fisheye_pane

0xc1ea,	// (0x000a1350) scroll_pane_cp0031_ParamLimits

0xc1ea,	// (0x000a1350) scroll_pane_cp0031

0xd243,	// (0x000a23a9) wait_bar_pane_cp08_ParamLimits

0x7c01,	// (0x0009cd67) cset_list_set_pane_copy1_ParamLimits

0xd95b,	// (0x000a2ac1) highlight_cell_cale_month_pane_g1

0x84e3,	// (0x0009d649) highlight_cell_cale_month_pane_t1

0xcebd,	// (0x000a2023) list_gen_pane_cp01

0xca55,	// (0x000a1bbb) scroll_pane_01

0x84f1,	// (0x0009d657) list_single_double_fisheye_pane

0x84fa,	// (0x0009d660) list_double_fisheye_pane_g1_ParamLimits

0x84fa,	// (0x0009d660) list_double_fisheye_pane_g1

0x8506,	// (0x0009d66c) list_double_fisheye_pane_g2_ParamLimits

0x8506,	// (0x0009d66c) list_double_fisheye_pane_g2

0x851a,	// (0x0009d680) list_double_fisheye_pane_g3_ParamLimits

0x851a,	// (0x0009d680) list_double_fisheye_pane_g3

0x0004,

0xfca9,	// (0x000a4e0f) list_double_fisheye_pane_g_ParamLimits

0xfca9,	// (0x000a4e0f) list_double_fisheye_pane_g

0x8543,	// (0x0009d6a9) list_double_fisheye_pane_t1_ParamLimits

0x8543,	// (0x0009d6a9) list_double_fisheye_pane_t1

0x855e,	// (0x0009d6c4) list_double_fisheye_pane_t2_ParamLimits

0x855e,	// (0x0009d6c4) list_double_fisheye_pane_t2

0x0001,

0xfcb4,	// (0x000a4e1a) list_double_fisheye_pane_t_ParamLimits

0xfcb4,	// (0x000a4e1a) list_double_fisheye_pane_t

0x11e8,	// (0x0009634e) main_call5_pane

0x8308,	// (0x0009d46e) sc_swipe_pane_ParamLimits

0x8308,	// (0x0009d46e) sc_swipe_pane

0x858c,	// (0x0009d6f2) call5_image_pane_ParamLimits

0x858c,	// (0x0009d6f2) call5_image_pane

0x859c,	// (0x0009d702) call5_swipe_1_pane_ParamLimits

0x859c,	// (0x0009d702) call5_swipe_1_pane

0x85a8,	// (0x0009d70e) call5_swipe_2_pane_ParamLimits

0x85a8,	// (0x0009d70e) call5_swipe_2_pane

0x85c2,	// (0x0009d728) popup_call5_audio_first_window_ParamLimits

0x85c2,	// (0x0009d728) popup_call5_audio_first_window

0xc0b6,	// (0x000a121c) call5_swipe_1_pane_g1_ParamLimits

0xc0b6,	// (0x000a121c) call5_swipe_1_pane_g1

0xd963,	// (0x000a2ac9) call5_swipe_1_pane_g2_ParamLimits

0xd963,	// (0x000a2ac9) call5_swipe_1_pane_g2

0x0001,

0xfcb9,	// (0x000a4e1f) call5_swipe_1_pane_g_ParamLimits

0xfcb9,	// (0x000a4e1f) call5_swipe_1_pane_g

0xd96f,	// (0x000a2ad5) call5_swipe_1_pane_t1_ParamLimits

0xd96f,	// (0x000a2ad5) call5_swipe_1_pane_t1

0xc0b6,	// (0x000a121c) call5_swipe_2_pane_g1_ParamLimits

0xc0b6,	// (0x000a121c) call5_swipe_2_pane_g1

0xd984,	// (0x000a2aea) call5_swipe_2_pane_g2_ParamLimits

0xd984,	// (0x000a2aea) call5_swipe_2_pane_g2

0x0001,

0xfcbe,	// (0x000a4e24) call5_swipe_2_pane_g_ParamLimits

0xfcbe,	// (0x000a4e24) call5_swipe_2_pane_g

0xd990,	// (0x000a2af6) call5_swipe_2_pane_t1_ParamLimits

0xd990,	// (0x000a2af6) call5_swipe_2_pane_t1

0xd9a5,	// (0x000a2b0b) sc_swipe_pane_g1_ParamLimits

0xd9a5,	// (0x000a2b0b) sc_swipe_pane_g1

0xd9b2,	// (0x000a2b18) sc_swipe_pane_g2_ParamLimits

0xd9b2,	// (0x000a2b18) sc_swipe_pane_g2

0x0001,

0xfcc3,	// (0x000a4e29) sc_swipe_pane_g_ParamLimits

0xfcc3,	// (0x000a4e29) sc_swipe_pane_g

0xd9be,	// (0x000a2b24) sc_swipe_pane_t1_ParamLimits

0xd9be,	// (0x000a2b24) sc_swipe_pane_t1

0x11e8,	// (0x0009634e) main_cmail_launcher_pane

0x85d0,	// (0x0009d736) aid_size_cell_cmail_l_ParamLimits

0x85d0,	// (0x0009d736) aid_size_cell_cmail_l

0x85e0,	// (0x0009d746) grid_cmail_l_pane_ParamLimits

0x85e0,	// (0x0009d746) grid_cmail_l_pane

0x85f0,	// (0x0009d756) cell_cmail_l_pane_ParamLimits

0x85f0,	// (0x0009d756) cell_cmail_l_pane

0x8604,	// (0x0009d76a) cell_cmail_l_pane_g1_ParamLimits

0x8604,	// (0x0009d76a) cell_cmail_l_pane_g1

0x8610,	// (0x0009d776) cell_cmail_l_pane_t1_ParamLimits

0x8610,	// (0x0009d776) cell_cmail_l_pane_t1

0xd9d3,	// (0x000a2b39) cell_cmail_l_pane_t2_ParamLimits

0xd9d3,	// (0x000a2b39) cell_cmail_l_pane_t2

0x0001,

0xfcc8,	// (0x000a4e2e) cell_cmail_l_pane_t_ParamLimits

0xfcc8,	// (0x000a4e2e) cell_cmail_l_pane_t

0xe796,	// (0x000a38fc) grid_highlight_pane_cp018_ParamLimits

0xe796,	// (0x000a38fc) grid_highlight_pane_cp018

0x103e,	// (0x000961a4) main2_pane_ParamLimits

0x103e,	// (0x000961a4) main2_pane

0xeefd,	// (0x000a4063) popup_sp_fs_action_menu_bg_pane_g1

0xef05,	// (0x000a406b) popup_sp_fs_action_menu_bg_pane_g2

0xef0d,	// (0x000a4073) popup_sp_fs_action_menu_bg_pane_g3

0xef15,	// (0x000a407b) popup_sp_fs_action_menu_bg_pane_g4

0xef1d,	// (0x000a4083) popup_sp_fs_action_menu_bg_pane_g5

0xef25,	// (0x000a408b) popup_sp_fs_action_menu_bg_pane_g6

0xef2d,	// (0x000a4093) popup_sp_fs_action_menu_bg_pane_g7

0xef35,	// (0x000a409b) popup_sp_fs_action_menu_bg_pane_g8

0xef3d,	// (0x000a40a3) popup_sp_fs_action_menu_bg_pane_g9

0xef45,	// (0x000a40ab) popup_sp_fs_action_menu_bg_pane_g10

0xef45,	// (0x000a40ab) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x000a42f0) popup_sp_fs_action_menu_bg_pane_g

0x1fd6,	// (0x0009713c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t3_g3_g1

0x1fe2,	// (0x00097148) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x2_t3_g3_g2

0x1fee,	// (0x00097154) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x000a439e) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x000a439e) list_medium_line_x2_t3_g3_g

0x1ffa,	// (0x00097160) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1ffa,	// (0x00097160) list_medium_line_x2_t3_g3_t1

0x200f,	// (0x00097175) list_medium_line_x2_t3_g3_t2_ParamLimits

0x200f,	// (0x00097175) list_medium_line_x2_t3_g3_t2

0x2021,	// (0x00097187) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x000a43a5) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x000a43a5) list_medium_line_x2_t3_g3_t

0x1fd6,	// (0x0009713c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t3_g2_g1

0x1fee,	// (0x00097154) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x000a43ac) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x000a43ac) list_medium_line_x2_t3_g2_g

0x2036,	// (0x0009719c) list_medium_line_x2_t3_g2_t1_ParamLimits

0x2036,	// (0x0009719c) list_medium_line_x2_t3_g2_t1

0x204c,	// (0x000971b2) list_medium_line_x2_t3_g2_t2_ParamLimits

0x204c,	// (0x000971b2) list_medium_line_x2_t3_g2_t2

0x2021,	// (0x00097187) list_medium_line_x2_t3_g2_t3_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x000a43b1) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x000a43b1) list_medium_line_x2_t3_g2_t

0x1fd6,	// (0x0009713c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t4_g4_g1

0x205e,	// (0x000971c4) list_medium_line_x2_t4_g4_g2_ParamLimits

0x205e,	// (0x000971c4) list_medium_line_x2_t4_g4_g2

0x1fe2,	// (0x00097148) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x2_t4_g4_g3

0x206a,	// (0x000971d0) list_medium_line_x2_t4_g4_g4_ParamLimits

0x206a,	// (0x000971d0) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x000a43b8) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x000a43b8) list_medium_line_x2_t4_g4_g

0x2076,	// (0x000971dc) list_medium_line_x2_t4_g4_t1_ParamLimits

0x2076,	// (0x000971dc) list_medium_line_x2_t4_g4_t1

0x2090,	// (0x000971f6) list_medium_line_x2_t4_g4_t2_ParamLimits

0x2090,	// (0x000971f6) list_medium_line_x2_t4_g4_t2

0x20a6,	// (0x0009720c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x20a6,	// (0x0009720c) list_medium_line_x2_t4_g4_t3

0x20bb,	// (0x00097221) list_medium_line_x2_t4_g4_t4_ParamLimits

0x20bb,	// (0x00097221) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x000a43c1) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x000a43c1) list_medium_line_x2_t4_g4_t

0x1fd6,	// (0x0009713c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t2_g4_g1

0x205e,	// (0x000971c4) list_medium_line_x2_t2_g4_g2_ParamLimits

0x205e,	// (0x000971c4) list_medium_line_x2_t2_g4_g2

0x1fe2,	// (0x00097148) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x2_t2_g4_g3

0x1fee,	// (0x00097154) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x000a4428) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x000a4428) list_medium_line_x2_t2_g4_g

0x320b,	// (0x00098371) list_medium_line_x2_t2_g4_t1_ParamLimits

0x320b,	// (0x00098371) list_medium_line_x2_t2_g4_t1

0x2021,	// (0x00097187) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x000a4431) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x000a4431) list_medium_line_x2_t2_g4_t

0x1fd6,	// (0x0009713c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t2_g3_g1

0x1fe2,	// (0x00097148) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x2_t2_g3_g2

0x1fee,	// (0x00097154) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x000a439e) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x000a439e) list_medium_line_x2_t2_g3_g

0x3220,	// (0x00098386) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3220,	// (0x00098386) list_medium_line_x2_t2_g3_t1

0x2021,	// (0x00097187) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x000a4436) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x000a4436) list_medium_line_x2_t2_g3_t

0x33e7,	// (0x0009854d) main_sp_fs_list_pane_ParamLimits

0x33e7,	// (0x0009854d) main_sp_fs_list_pane

0x33f3,	// (0x00098559) sp_fs_scroll_pane_ParamLimits

0x33f3,	// (0x00098559) sp_fs_scroll_pane

0x33ff,	// (0x00098565) list_medium_line_x2_t3_t1

0x340f,	// (0x00098575) list_medium_line_x2_t3_t2

0x341d,	// (0x00098583) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x000a4481) list_medium_line_x2_t3_t

0x342b,	// (0x00098591) list_medium_line_x3_t4_t1

0x343b,	// (0x000985a1) list_medium_line_x3_t4_t2

0x3449,	// (0x000985af) list_medium_line_x3_t4_t3

0x341d,	// (0x00098583) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x000a4488) list_medium_line_x3_t4_t

0x3457,	// (0x000985bd) list_medium_line_x4_t5_t1

0x3467,	// (0x000985cd) list_medium_line_x4_t5_t2

0x3449,	// (0x000985af) list_medium_line_x4_t5_t3

0x3475,	// (0x000985db) list_medium_line_x4_t5_t4

0x341d,	// (0x00098583) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x000a4491) list_medium_line_x4_t5_t

0x1fd6,	// (0x0009713c) list_medium_line_t4_g4_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_t4_g4_g1

0x3483,	// (0x000985e9) list_medium_line_t4_g4_g2_ParamLimits

0x3483,	// (0x000985e9) list_medium_line_t4_g4_g2

0x348f,	// (0x000985f5) list_medium_line_t4_g4_g3_ParamLimits

0x348f,	// (0x000985f5) list_medium_line_t4_g4_g3

0x1fee,	// (0x00097154) list_medium_line_t4_g4_g4_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x000a449c) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x000a449c) list_medium_line_t4_g4_g

0x349b,	// (0x00098601) list_medium_line_t4_g4_t1_ParamLimits

0x349b,	// (0x00098601) list_medium_line_t4_g4_t1

0x34b0,	// (0x00098616) list_medium_line_t4_g4_t2_ParamLimits

0x34b0,	// (0x00098616) list_medium_line_t4_g4_t2

0x34c5,	// (0x0009862b) list_medium_line_t4_g4_t3_ParamLimits

0x34c5,	// (0x0009862b) list_medium_line_t4_g4_t3

0x2021,	// (0x00097187) list_medium_line_t4_g4_t4_ParamLimits

0x2021,	// (0x00097187) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x000a44a5) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x000a44a5) list_medium_line_t4_g4_t

0x35db,	// (0x00098741) chi_dic_find_pane_g1

0x452e,	// (0x00099694) main_tport_pane

0x6f17,	// (0x0009c07d) list_medium_line_plain_t1

0x6ff7,	// (0x0009c15d) list_medium_line_t2_g2_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_t2_g2_g1

0x7003,	// (0x0009c169) list_medium_line_t2_g2_g2_ParamLimits

0x7003,	// (0x0009c169) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x000a4b66) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x000a4b66) list_medium_line_t2_g2_g

0x700f,	// (0x0009c175) list_medium_line_t2_g2_t1_ParamLimits

0x700f,	// (0x0009c175) list_medium_line_t2_g2_t1

0x7029,	// (0x0009c18f) list_medium_line_t2_g2_t2_ParamLimits

0x7029,	// (0x0009c18f) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x000a4b6b) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x000a4b6b) list_medium_line_t2_g2_t

0xcec6,	// (0x000a202c) aid_sp_fs_list_icon_a_sm

0xf07e,	// (0x000a41e4) aid_sp_fs_list_icon_d

0xb8ce,	// (0x000a0a34) aid_sp_fs_text_primary

0xcece,	// (0x000a2034) aid_sp_fs_text_secondary

0x76b2,	// (0x0009c818) list_medium_line

0x76b2,	// (0x0009c818) list_medium_line_g2

0x76b2,	// (0x0009c818) list_medium_line_g3

0x76b2,	// (0x0009c818) list_medium_line_plain

0x76b2,	// (0x0009c818) list_medium_line_plain_t2

0x76b2,	// (0x0009c818) list_medium_line_plain_t3

0x76b2,	// (0x0009c818) list_medium_line_right_icon

0x76b2,	// (0x0009c818) list_medium_line_right_iconx2

0x76b2,	// (0x0009c818) list_medium_line_t2

0x76b2,	// (0x0009c818) list_medium_line_t2_g2

0x76b2,	// (0x0009c818) list_medium_line_t2_g3

0x76b2,	// (0x0009c818) list_medium_line_t2_right_icon

0x76b2,	// (0x0009c818) list_medium_line_t2_right_iconx2

0x76b2,	// (0x0009c818) list_medium_line_t3

0x76b2,	// (0x0009c818) list_medium_line_t3_g2

0x76b2,	// (0x0009c818) list_medium_line_t3_g3

0x76b2,	// (0x0009c818) list_medium_line_t3_right_iconx2

0x76bb,	// (0x0009c821) list_medium_line_t4_g4

0xf086,	// (0x000a41ec) list_medium_line_x2

0xf086,	// (0x000a41ec) list_medium_line_x2_t2_g2

0xf086,	// (0x000a41ec) list_medium_line_x2_t2_g3

0xf086,	// (0x000a41ec) list_medium_line_x2_t2_g4

0xf086,	// (0x000a41ec) list_medium_line_x2_t3

0xf086,	// (0x000a41ec) list_medium_line_x2_t3_g2

0xf086,	// (0x000a41ec) list_medium_line_x2_t3_g3

0xf086,	// (0x000a41ec) list_medium_line_x2_t3_g4

0xf086,	// (0x000a41ec) list_medium_line_x2_t4_g2

0xf086,	// (0x000a41ec) list_medium_line_x2_t4_g4

0x76c4,	// (0x0009c82a) list_medium_line_x3

0x76c4,	// (0x0009c82a) list_medium_line_x3_t4

0x76c4,	// (0x0009c82a) list_medium_line_x3_t4_g4

0x76bb,	// (0x0009c821) list_medium_line_x4_t4

0x76bb,	// (0x0009c821) list_medium_line_x4_t4_g7

0x76bb,	// (0x0009c821) list_medium_line_x4_t5

0x76cd,	// (0x0009c833) list_single_fs_dyc_pane_ParamLimits

0x76cd,	// (0x0009c833) list_single_fs_dyc_pane

0x1fd6,	// (0x0009713c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x4_t4_g7_g1

0x7e40,	// (0x0009cfa6) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7e40,	// (0x0009cfa6) list_medium_line_x4_t4_g7_g2

0x7e4c,	// (0x0009cfb2) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7e4c,	// (0x0009cfb2) list_medium_line_x4_t4_g7_g3

0x7e5b,	// (0x0009cfc1) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7e5b,	// (0x0009cfc1) list_medium_line_x4_t4_g7_g4

0x7e67,	// (0x0009cfcd) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7e67,	// (0x0009cfcd) list_medium_line_x4_t4_g7_g5

0x7e76,	// (0x0009cfdc) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7e76,	// (0x0009cfdc) list_medium_line_x4_t4_g7_g6

0x7e85,	// (0x0009cfeb) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7e85,	// (0x0009cfeb) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd0,	// (0x000a4d36) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd0,	// (0x000a4d36) list_medium_line_x4_t4_g7_g

0x7e91,	// (0x0009cff7) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7e91,	// (0x0009cff7) list_medium_line_x4_t4_g7_t1

0x7ea6,	// (0x0009d00c) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7ea6,	// (0x0009d00c) list_medium_line_x4_t4_g7_t2

0x7ebb,	// (0x0009d021) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7ebb,	// (0x0009d021) list_medium_line_x4_t4_g7_t3

0x7ed0,	// (0x0009d036) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7ed0,	// (0x0009d036) list_medium_line_x4_t4_g7_t4

0x7ee2,	// (0x0009d048) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7ee2,	// (0x0009d048) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbdf,	// (0x000a4d45) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbdf,	// (0x000a4d45) list_medium_line_x4_t4_g7_t

0x7ef4,	// (0x0009d05a) list_single_dyc_row_pane_ParamLimits

0x7ef4,	// (0x0009d05a) list_single_dyc_row_pane

0x8580,	// (0x0009d6e6) call5_gesture_pane_ParamLimits

0x8580,	// (0x0009d6e6) call5_gesture_pane

0x85b4,	// (0x0009d71a) call5_windows_pane_ParamLimits

0x85b4,	// (0x0009d71a) call5_windows_pane

0x8626,	// (0x0009d78c) call5_swipe_1_pane_cp_ParamLimits

0x8626,	// (0x0009d78c) call5_swipe_1_pane_cp

0x8632,	// (0x0009d798) call5_swipe_2_pane_cp_ParamLimits

0x8632,	// (0x0009d798) call5_swipe_2_pane_cp

0xf029,	// (0x000a418f) call5_image_pane_cp

0x863e,	// (0x0009d7a4) popup_call5_audio_first_window_cp_ParamLimits

0x863e,	// (0x0009d7a4) popup_call5_audio_first_window_cp

0xd9a5,	// (0x000a2b0b) call5_swipe_1_pane_g1_cp_ParamLimits

0xd9a5,	// (0x000a2b0b) call5_swipe_1_pane_g1_cp

0xd9e5,	// (0x000a2b4b) call5_swipe_1_pane_g2_cp

0xd9be,	// (0x000a2b24) call5_swipe_1_pane_t1_cp_ParamLimits

0xd9be,	// (0x000a2b24) call5_swipe_1_pane_t1_cp

0xd9a5,	// (0x000a2b0b) call5_swipe_2_pane_g1_cp_ParamLimits

0xd9a5,	// (0x000a2b0b) call5_swipe_2_pane_g1_cp

0xd9ed,	// (0x000a2b53) call5_swipe_2_pane_g2_cp

0xd9f5,	// (0x000a2b5b) call5_swipe_2_pane_t1_cp_ParamLimits

0xd9f5,	// (0x000a2b5b) call5_swipe_2_pane_t1_cp

0xe796,	// (0x000a38fc) main_sp_fs_email_pane

0xda0a,	// (0x000a2b70) main_sp_fs_listscroll_pane_te

0x864c,	// (0x0009d7b2) popup_sp_fs_action_menu_pane_ParamLimits

0x864c,	// (0x0009d7b2) popup_sp_fs_action_menu_pane

0xbe53,	// (0x000a0fb9) bg_sp_fs_ctrlbar_pane_g1

0xda13,	// (0x000a2b79) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xda1c,	// (0x000a2b82) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xda25,	// (0x000a2b8b) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbe53,	// (0x000a0fb9) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfccd,	// (0x000a4e33) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbc23,	// (0x000a0d89) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbc23,	// (0x000a0d89) bg_sp_fs_ctrlbar_ddmenu_pane

0xda2e,	// (0x000a2b94) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xda2e,	// (0x000a2b94) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xda3a,	// (0x000a2ba0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xda3a,	// (0x000a2ba0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcd6,	// (0x000a4e3c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcd6,	// (0x000a4e3c) main_sp_fs_ctrlbar_ddmenu_pane_g

0xda46,	// (0x000a2bac) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xda46,	// (0x000a2bac) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8690,	// (0x0009d7f6) list_medium_line_t2_right_icon_g1

0x8698,	// (0x0009d7fe) list_medium_line_t2_right_icon_t1

0x86a8,	// (0x0009d80e) list_medium_line_t2_right_icon_t2

0x0001,

0xfcdb,	// (0x000a4e41) list_medium_line_t2_right_icon_t

0xba36,	// (0x000a0b9c) bg_sp_fs_ctrlbar_pane_ParamLimits

0xba36,	// (0x000a0b9c) bg_sp_fs_ctrlbar_pane

0x870d,	// (0x0009d873) main_sp_fs_ctrlbar_button_pane_cp01

0x8715,	// (0x0009d87b) main_sp_fs_ctrlbar_ddmenu_pane

0xda98,	// (0x000a2bfe) main_sp_fs_ctrlbar_pane_g1

0xdaa4,	// (0x000a2c0a) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce0,	// (0x000a4e46) main_sp_fs_ctrlbar_pane_g

0xdab0,	// (0x000a2c16) main_sp_fs_ctrlbar_pane_t1

0x871f,	// (0x0009d885) main_sp_fs_ctrlbar_pane

0x8735,	// (0x0009d89b) main_sp_fs_listscroll_pane_te_cp01

0x8746,	// (0x0009d8ac) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8746,	// (0x0009d8ac) popup_sp_fs_action_menu_pane_cp01

0xe796,	// (0x000a38fc) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe796,	// (0x000a38fc) bg_sp_fs_highlight_list_pane_cp01

0xdae0,	// (0x000a2c46) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdae0,	// (0x000a2c46) sp_fs_action_menu_list_gene_pane_g1

0xdaef,	// (0x000a2c55) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdaef,	// (0x000a2c55) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcea,	// (0x000a4e50) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcea,	// (0x000a4e50) sp_fs_action_menu_list_gene_pane_g

0xdafc,	// (0x000a2c62) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdafc,	// (0x000a2c62) sp_fs_action_menu_list_gene_pane_t1

0xdb14,	// (0x000a2c7a) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdb14,	// (0x000a2c7a) sp_fs_action_menu_list_gene_pane

0xdb35,	// (0x000a2c9b) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xdb35,	// (0x000a2c9b) popup_sp_fs_action_menu_bg_pane

0xdb43,	// (0x000a2ca9) sp_fs_action_menu_list_pane_ParamLimits

0xdb43,	// (0x000a2ca9) sp_fs_action_menu_list_pane

0xf08f,	// (0x000a41f5) sp_fs_scroll_pane_cp01_ParamLimits

0xf08f,	// (0x000a41f5) sp_fs_scroll_pane_cp01

0x8770,	// (0x0009d8d6) list_medium_line_plain_t2_t1

0x8780,	// (0x0009d8e6) list_medium_line_plain_t2_t2

0x0001,

0xfcef,	// (0x000a4e55) list_medium_line_plain_t2_t

0x878e,	// (0x0009d8f4) list_medium_line_plain_t3_t1

0x879e,	// (0x0009d904) list_medium_line_plain_t3_t2

0x87ac,	// (0x0009d912) list_medium_line_plain_t3_t3

0x0002,

0xfcf4,	// (0x000a4e5a) list_medium_line_plain_t3_t

0x1fd6,	// (0x0009713c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t2_g2_g1

0x1fee,	// (0x00097154) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x000a43ac) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x000a43ac) list_medium_line_x2_t2_g2_g

0x349b,	// (0x00098601) list_medium_line_x2_t2_g2_t1_ParamLimits

0x349b,	// (0x00098601) list_medium_line_x2_t2_g2_t1

0x2021,	// (0x00097187) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcfb,	// (0x000a4e61) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcfb,	// (0x000a4e61) list_medium_line_x2_t2_g2_t

0x1fd6,	// (0x0009713c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t4_g2_g1

0x87ba,	// (0x0009d920) list_medium_line_x2_t4_g2_g2_ParamLimits

0x87ba,	// (0x0009d920) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd00,	// (0x000a4e66) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd00,	// (0x000a4e66) list_medium_line_x2_t4_g2_g

0x87cc,	// (0x0009d932) list_medium_line_x2_t4_g2_t1_ParamLimits

0x87cc,	// (0x0009d932) list_medium_line_x2_t4_g2_t1

0x87e3,	// (0x0009d949) list_medium_line_x2_t4_g2_t2_ParamLimits

0x87e3,	// (0x0009d949) list_medium_line_x2_t4_g2_t2

0x87f8,	// (0x0009d95e) list_medium_line_x2_t4_g2_t3_ParamLimits

0x87f8,	// (0x0009d95e) list_medium_line_x2_t4_g2_t3

0x2021,	// (0x00097187) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd05,	// (0x000a4e6b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd05,	// (0x000a4e6b) list_medium_line_x2_t4_g2_t

0x880a,	// (0x0009d970) list_medium_line_t3_right_iconx2_g1

0x8690,	// (0x0009d7f6) list_medium_line_t3_right_iconx2_g2

0x8812,	// (0x0009d978) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0e,	// (0x000a4e74) list_medium_line_t3_right_iconx2_g

0x881a,	// (0x0009d980) list_medium_line_t3_right_iconx2_t1

0x882a,	// (0x0009d990) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd15,	// (0x000a4e7b) list_medium_line_t3_right_iconx2_t

0x1fd6,	// (0x0009713c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x3_t4_g4_g1

0x1fe2,	// (0x00097148) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x3_t4_g4_g2

0x3483,	// (0x000985e9) list_medium_line_x3_t4_g4_g3_ParamLimits

0x3483,	// (0x000985e9) list_medium_line_x3_t4_g4_g3

0x8838,	// (0x0009d99e) list_medium_line_x3_t4_g4_g4_ParamLimits

0x8838,	// (0x0009d99e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1a,	// (0x000a4e80) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1a,	// (0x000a4e80) list_medium_line_x3_t4_g4_g

0x8844,	// (0x0009d9aa) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8844,	// (0x0009d9aa) list_medium_line_x3_t4_g4_t1

0x885b,	// (0x0009d9c1) list_medium_line_x3_t4_g4_t2_ParamLimits

0x885b,	// (0x0009d9c1) list_medium_line_x3_t4_g4_t2

0x34b0,	// (0x00098616) list_medium_line_x3_t4_g4_t3_ParamLimits

0x34b0,	// (0x00098616) list_medium_line_x3_t4_g4_t3

0x8870,	// (0x0009d9d6) list_medium_line_x3_t4_g4_t4_ParamLimits

0x8870,	// (0x0009d9d6) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd23,	// (0x000a4e89) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd23,	// (0x000a4e89) list_medium_line_x3_t4_g4_t

0x888d,	// (0x0009d9f3) list_single_dyc_row_text_pane_t1_ParamLimits

0x888d,	// (0x0009d9f3) list_single_dyc_row_text_pane_t1

0x88c4,	// (0x0009da2a) list_single_dyc_row_text_pane_t2_ParamLimits

0x88c4,	// (0x0009da2a) list_single_dyc_row_text_pane_t2

0xdb65,	// (0x000a2ccb) list_single_dyc_row_text_pane_t3_ParamLimits

0xdb65,	// (0x000a2ccb) list_single_dyc_row_text_pane_t3

0x0005,

0xfd2c,	// (0x000a4e92) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2c,	// (0x000a4e92) list_single_dyc_row_text_pane_t

0xdb89,	// (0x000a2cef) list_single_dyc_row_pane_g1_ParamLimits

0xdb89,	// (0x000a2cef) list_single_dyc_row_pane_g1

0xdb95,	// (0x000a2cfb) list_single_dyc_row_pane_g2_ParamLimits

0xdb95,	// (0x000a2cfb) list_single_dyc_row_pane_g2

0xdba1,	// (0x000a2d07) list_single_dyc_row_pane_g3_ParamLimits

0xdba1,	// (0x000a2d07) list_single_dyc_row_pane_g3

0xdbad,	// (0x000a2d13) list_single_dyc_row_pane_g4_ParamLimits

0xdbad,	// (0x000a2d13) list_single_dyc_row_pane_g4

0x0003,

0xfd39,	// (0x000a4e9f) list_single_dyc_row_pane_g_ParamLimits

0xfd39,	// (0x000a4e9f) list_single_dyc_row_pane_g

0xdbb9,	// (0x000a2d1f) list_single_dyc_row_text_pane_ParamLimits

0xdbb9,	// (0x000a2d1f) list_single_dyc_row_text_pane

0xe6b0,	// (0x000a3816) bg_sp_fs_scroll_pane

0xdbd8,	// (0x000a2d3e) thumb_sp_fs_scroll_pane

0x6ff7,	// (0x0009c15d) list_medium_line_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_g1

0x89e7,	// (0x0009db4d) list_medium_line_t1_ParamLimits

0x89e7,	// (0x0009db4d) list_medium_line_t1

0x1fd6,	// (0x0009713c) list_medium_line_x2_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_g1

0x1fe2,	// (0x00097148) list_medium_line_x2_g2_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x2_g2

0x0001,

0xfd42,	// (0x000a4ea8) list_medium_line_x2_g_ParamLimits

0xfd42,	// (0x000a4ea8) list_medium_line_x2_g

0xdbe1,	// (0x000a2d47) list_medium_line_x2_t1_ParamLimits

0xdbe1,	// (0x000a2d47) list_medium_line_x2_t1

0x1fd6,	// (0x0009713c) list_medium_line_x3_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x3_g1

0x1fe2,	// (0x00097148) list_medium_line_x3_g2_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x3_g2

0x0001,

0xfd42,	// (0x000a4ea8) list_medium_line_x3_g_ParamLimits

0xfd42,	// (0x000a4ea8) list_medium_line_x3_g

0xdbe1,	// (0x000a2d47) list_medium_line_x3_t1_ParamLimits

0xdbe1,	// (0x000a2d47) list_medium_line_x3_t1

0xdbf7,	// (0x000a2d5d) thumb_sp_fs_scroll_pane_g1

0xdc00,	// (0x000a2d66) thumb_sp_fs_scroll_pane_g2

0xdc09,	// (0x000a2d6f) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a4ead) thumb_sp_fs_scroll_pane_g

0xdbf7,	// (0x000a2d5d) bg_sp_fs_scroll_pane_g1

0xdc00,	// (0x000a2d66) bg_sp_fs_scroll_pane_g2

0xdc09,	// (0x000a2d6f) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd47,	// (0x000a4ead) bg_sp_fs_scroll_pane_g

0x1fd6,	// (0x0009713c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1fd6,	// (0x0009713c) list_medium_line_x2_t3_g4_g1

0x205e,	// (0x000971c4) list_medium_line_x2_t3_g4_g2_ParamLimits

0x205e,	// (0x000971c4) list_medium_line_x2_t3_g4_g2

0x1fe2,	// (0x00097148) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1fe2,	// (0x00097148) list_medium_line_x2_t3_g4_g3

0x1fee,	// (0x00097154) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1fee,	// (0x00097154) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x000a4428) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x000a4428) list_medium_line_x2_t3_g4_g

0x89fc,	// (0x0009db62) list_medium_line_x2_t3_g4_t1_ParamLimits

0x89fc,	// (0x0009db62) list_medium_line_x2_t3_g4_t1

0x8a12,	// (0x0009db78) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a12,	// (0x0009db78) list_medium_line_x2_t3_g4_t2

0x2021,	// (0x00097187) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2021,	// (0x00097187) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd4e,	// (0x000a4eb4) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd4e,	// (0x000a4eb4) list_medium_line_x2_t3_g4_t

0x6ff7,	// (0x0009c15d) list_medium_line_g2_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_g2_g1

0x7003,	// (0x0009c169) list_medium_line_g2_g2_ParamLimits

0x7003,	// (0x0009c169) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x000a4b66) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x000a4b66) list_medium_line_g2_g

0x8a2b,	// (0x0009db91) list_medium_line_g2_t1_ParamLimits

0x8a2b,	// (0x0009db91) list_medium_line_g2_t1

0x6ff7,	// (0x0009c15d) list_medium_line_t3_g2_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_t3_g2_g1

0x7003,	// (0x0009c169) list_medium_line_t3_g2_g2_ParamLimits

0x7003,	// (0x0009c169) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x000a4b66) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x000a4b66) list_medium_line_t3_g2_g

0x8a40,	// (0x0009dba6) list_medium_line_t3_g2_t1_ParamLimits

0x8a40,	// (0x0009dba6) list_medium_line_t3_g2_t1

0x8a57,	// (0x0009dbbd) list_medium_line_t3_g2_t2_ParamLimits

0x8a57,	// (0x0009dbbd) list_medium_line_t3_g2_t2

0x8a6c,	// (0x0009dbd2) list_medium_line_t3_g2_t3_ParamLimits

0x8a6c,	// (0x0009dbd2) list_medium_line_t3_g2_t3

0x0002,

0xfd55,	// (0x000a4ebb) list_medium_line_t3_g2_t_ParamLimits

0xfd55,	// (0x000a4ebb) list_medium_line_t3_g2_t

0x8690,	// (0x0009d7f6) list_medium_line_right_icon_g1

0x8a81,	// (0x0009dbe7) list_medium_line_right_icon_t1

0x6ff7,	// (0x0009c15d) list_medium_line_t2_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_t2_g1

0x8a8f,	// (0x0009dbf5) list_medium_line_t2_t1_ParamLimits

0x8a8f,	// (0x0009dbf5) list_medium_line_t2_t1

0x8aa9,	// (0x0009dc0f) list_medium_line_t2_t2_ParamLimits

0x8aa9,	// (0x0009dc0f) list_medium_line_t2_t2

0x0001,

0xfd5c,	// (0x000a4ec2) list_medium_line_t2_t_ParamLimits

0xfd5c,	// (0x000a4ec2) list_medium_line_t2_t

0x6ff7,	// (0x0009c15d) list_medium_line_t3_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_t3_g1

0x8abe,	// (0x0009dc24) list_medium_line_t3_t1_ParamLimits

0x8abe,	// (0x0009dc24) list_medium_line_t3_t1

0x8ad8,	// (0x0009dc3e) list_medium_line_t3_t2_ParamLimits

0x8ad8,	// (0x0009dc3e) list_medium_line_t3_t2

0x8aee,	// (0x0009dc54) list_medium_line_t3_t3_ParamLimits

0x8aee,	// (0x0009dc54) list_medium_line_t3_t3

0x0002,

0xfd61,	// (0x000a4ec7) list_medium_line_t3_t_ParamLimits

0xfd61,	// (0x000a4ec7) list_medium_line_t3_t

0x6ff7,	// (0x0009c15d) list_medium_line_g3_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_g3_g1

0x8b03,	// (0x0009dc69) list_medium_line_g3_g2_ParamLimits

0x8b03,	// (0x0009dc69) list_medium_line_g3_g2

0x7003,	// (0x0009c169) list_medium_line_g3_g3_ParamLimits

0x7003,	// (0x0009c169) list_medium_line_g3_g3

0x0002,

0xfd68,	// (0x000a4ece) list_medium_line_g3_g_ParamLimits

0xfd68,	// (0x000a4ece) list_medium_line_g3_g

0x8b0f,	// (0x0009dc75) list_medium_line_g3_t1_ParamLimits

0x8b0f,	// (0x0009dc75) list_medium_line_g3_t1

0x6ff7,	// (0x0009c15d) list_medium_line_t2_g3_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_t2_g3_g1

0x8b03,	// (0x0009dc69) list_medium_line_t2_g3_g2_ParamLimits

0x8b03,	// (0x0009dc69) list_medium_line_t2_g3_g2

0x7003,	// (0x0009c169) list_medium_line_t2_g3_g3_ParamLimits

0x7003,	// (0x0009c169) list_medium_line_t2_g3_g3

0x0002,

0xfd68,	// (0x000a4ece) list_medium_line_t2_g3_g_ParamLimits

0xfd68,	// (0x000a4ece) list_medium_line_t2_g3_g

0x8b24,	// (0x0009dc8a) list_medium_line_t2_g3_t1_ParamLimits

0x8b24,	// (0x0009dc8a) list_medium_line_t2_g3_t1

0x8b3e,	// (0x0009dca4) list_medium_line_t2_g3_t2_ParamLimits

0x8b3e,	// (0x0009dca4) list_medium_line_t2_g3_t2

0x0001,

0xfd6f,	// (0x000a4ed5) list_medium_line_t2_g3_t_ParamLimits

0xfd6f,	// (0x000a4ed5) list_medium_line_t2_g3_t

0x6ff7,	// (0x0009c15d) list_medium_line_t3_g3_g1_ParamLimits

0x6ff7,	// (0x0009c15d) list_medium_line_t3_g3_g1

0x8b03,	// (0x0009dc69) list_medium_line_t3_g3_g2_ParamLimits

0x8b03,	// (0x0009dc69) list_medium_line_t3_g3_g2

0x7003,	// (0x0009c169) list_medium_line_t3_g3_g3_ParamLimits

0x7003,	// (0x0009c169) list_medium_line_t3_g3_g3

0x0002,

0xfd68,	// (0x000a4ece) list_medium_line_t3_g3_g_ParamLimits

0xfd68,	// (0x000a4ece) list_medium_line_t3_g3_g

0x8b54,	// (0x0009dcba) list_medium_line_t3_g3_t1_ParamLimits

0x8b54,	// (0x0009dcba) list_medium_line_t3_g3_t1

0x8b68,	// (0x0009dcce) list_medium_line_t3_g3_t2_ParamLimits

0x8b68,	// (0x0009dcce) list_medium_line_t3_g3_t2

0x8b7a,	// (0x0009dce0) list_medium_line_t3_g3_t3_ParamLimits

0x8b7a,	// (0x0009dce0) list_medium_line_t3_g3_t3

0x0002,

0xfd74,	// (0x000a4eda) list_medium_line_t3_g3_t_ParamLimits

0xfd74,	// (0x000a4eda) list_medium_line_t3_g3_t

0x880a,	// (0x0009d970) list_medium_line_right_iconx2_g1

0x8690,	// (0x0009d7f6) list_medium_line_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a4ee1) list_medium_line_right_iconx2_g

0x8b8c,	// (0x0009dcf2) list_medium_line_right_iconx2_t1

0x880a,	// (0x0009d970) list_medium_line_t2_right_iconx2_g1

0x8690,	// (0x0009d7f6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd7b,	// (0x000a4ee1) list_medium_line_t2_right_iconx2_g

0x8b9a,	// (0x0009dd00) list_medium_line_t2_right_iconx2_t1

0x8baa,	// (0x0009dd10) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd80,	// (0x000a4ee6) list_medium_line_t2_right_iconx2_t

0x8bb8,	// (0x0009dd1e) list_medium_line_x4_t4_t1

0x8bc6,	// (0x0009dd2c) list_medium_line_x4_t4_t2

0x8bd6,	// (0x0009dd3c) list_medium_line_x4_t4_t3

0x8be6,	// (0x0009dd4c) list_medium_line_x4_t4_t4

0x0003,

0xfd85,	// (0x000a4eeb) list_medium_line_x4_t4_t

0x8c20,	// (0x0009dd86) tport_appsw_pane_ParamLimits

0x8c20,	// (0x0009dd86) tport_appsw_pane

0x8c2e,	// (0x0009dd94) tport_contact_pane_ParamLimits

0x8c2e,	// (0x0009dd94) tport_contact_pane

0x8c3e,	// (0x0009dda4) tport_listscroll_pane_ParamLimits

0x8c3e,	// (0x0009dda4) tport_listscroll_pane

0x8c4e,	// (0x0009ddb4) cell_tport_appsw_pane_ParamLimits

0x8c4e,	// (0x0009ddb4) cell_tport_appsw_pane

0xc173,	// (0x000a12d9) tport_appsw_pane_g1_ParamLimits

0xc173,	// (0x000a12d9) tport_appsw_pane_g1

0xdc12,	// (0x000a2d78) tport_contact_pane_g1

0xd4b4,	// (0x000a261a) tport_contact_pane_t1

0xdc1b,	// (0x000a2d81) tport_contact_pane_t2

0x0001,

0xfd8e,	// (0x000a4ef4) tport_contact_pane_t

0xdc29,	// (0x000a2d8f) list_tport_pane

0xdc32,	// (0x000a2d98) scroll_pane_cp_030

0x8c81,	// (0x0009dde7) cell_tport_appsw_pane_g1

0x8c91,	// (0x0009ddf7) cell_tport_appsw_pane_t1

0x8c9f,	// (0x0009de05) grid_highlight_pane_cp019

0x8ca7,	// (0x0009de0d) list_tport_double_graphic_pane_ParamLimits

0x8ca7,	// (0x0009de0d) list_tport_double_graphic_pane

0xe796,	// (0x000a38fc) list_highlight_pane_cp023_ParamLimits

0xe796,	// (0x000a38fc) list_highlight_pane_cp023

0x8cb8,	// (0x0009de1e) list_tport_double_graphic_pane_g1_ParamLimits

0x8cb8,	// (0x0009de1e) list_tport_double_graphic_pane_g1

0x8cc5,	// (0x0009de2b) list_tport_double_graphic_pane_t1_ParamLimits

0x8cc5,	// (0x0009de2b) list_tport_double_graphic_pane_t1

0x8cda,	// (0x0009de40) list_tport_double_graphic_pane_t2_ParamLimits

0x8cda,	// (0x0009de40) list_tport_double_graphic_pane_t2

0x0001,

0xfd9a,	// (0x000a4f00) list_tport_double_graphic_pane_t_ParamLimits

0xfd9a,	// (0x000a4f00) list_tport_double_graphic_pane_t

0xe6b0,	// (0x000a3816) main_cale_note_pane

0x67c9,	// (0x0009b92f) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x67c9,	// (0x0009b92f) cell_vitu2_function_top_wide_pane_cp01

0x8255,	// (0x0009d3bb) wait_bar_pane_cp05_ParamLimits

0xe796,	// (0x000a38fc) listscroll_cmail_pane

0xdc3b,	// (0x000a2da1) list_cmail_pane

0x8cec,	// (0x0009de52) list_cmail_body_pane

0x8d0c,	// (0x0009de72) list_single_cmail_header_caption_pane

0x8d37,	// (0x0009de9d) list_single_cmail_header_detail_pane_ParamLimits

0x8d37,	// (0x0009de9d) list_single_cmail_header_detail_pane

0xdc4b,	// (0x000a2db1) list_single_cmail_header_caption_pane_t1

0x8d6d,	// (0x0009ded3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d6d,	// (0x0009ded3) list_single_cmail_header_detail_pane_g1

0xf0b5,	// (0x000a421b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xf0b5,	// (0x000a421b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd9f,	// (0x000a4f05) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd9f,	// (0x000a4f05) list_single_cmail_header_detail_pane_g

0xdc6f,	// (0x000a2dd5) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdc6f,	// (0x000a2dd5) list_single_cmail_header_detail_pane_t1

0xdccf,	// (0x000a2e35) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdccf,	// (0x000a2e35) list_single_cmail_header_editor_pane_bg

0xd655,	// (0x000a27bb) list_cmail_body_pane_g1

0xdce6,	// (0x000a2e4c) list_cmail_body_pane_t1

0xc93b,	// (0x000a1aa1) list_single_cmail_header_editor_pane_bg_g1

0x9e22,	// (0x0009ef88) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc94b,	// (0x000a1ab1) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc943,	// (0x000a1aa9) list_single_cmail_header_editor_pane_bg_g1_copy3

0xcb9e,	// (0x000a1d04) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc96b,	// (0x000a1ad1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc95b,	// (0x000a1ac1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc963,	// (0x000a1ac9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x9e02,	// (0x0009ef68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d83,	// (0x0009dee9) calenote_gesture_pane_ParamLimits

0x8d83,	// (0x0009dee9) calenote_gesture_pane

0x8d9d,	// (0x0009df03) calenote_window_pane_ParamLimits

0x8d9d,	// (0x0009df03) calenote_window_pane

0xdcf4,	// (0x000a2e5a) popup_note_window_cp01

0x8db5,	// (0x0009df1b) calenote_swipe_1_pane_ParamLimits

0x8db5,	// (0x0009df1b) calenote_swipe_1_pane

0x8632,	// (0x0009d798) calenote_swipe_2_pane_ParamLimits

0x8632,	// (0x0009d798) calenote_swipe_2_pane

0xd9a5,	// (0x000a2b0b) calenote_swipe_1_pane_g1_ParamLimits

0xd9a5,	// (0x000a2b0b) calenote_swipe_1_pane_g1

0xd9b2,	// (0x000a2b18) calenote_swipe_1_pane_g2_ParamLimits

0xd9b2,	// (0x000a2b18) calenote_swipe_1_pane_g2

0x0001,

0xfcc3,	// (0x000a4e29) calenote_swipe_1_pane_g_ParamLimits

0xfcc3,	// (0x000a4e29) calenote_swipe_1_pane_g

0xdd06,	// (0x000a2e6c) calenote_swipe_1_pane_t1_ParamLimits

0xdd06,	// (0x000a2e6c) calenote_swipe_1_pane_t1

0xd9a5,	// (0x000a2b0b) calenote_swipe_2_pane_g1_ParamLimits

0xd9a5,	// (0x000a2b0b) calenote_swipe_2_pane_g1

0xdd25,	// (0x000a2e8b) calenote_swipe_2_pane_g2_ParamLimits

0xdd25,	// (0x000a2e8b) calenote_swipe_2_pane_g2

0x0001,

0xfdab,	// (0x000a4f11) calenote_swipe_2_pane_g_ParamLimits

0xfdab,	// (0x000a4f11) calenote_swipe_2_pane_g

0xdd31,	// (0x000a2e97) calenote_swipe_2_pane_t1_ParamLimits

0xdd31,	// (0x000a2e97) calenote_swipe_2_pane_t1

0xe6b0,	// (0x000a3816) main_mup_navstr_pane

0x551a,	// (0x0009a680) main_mup3_pane_t7_ParamLimits

0x551a,	// (0x0009a680) main_mup3_pane_t7

0x5f1f,	// (0x0009b085) main_mp4_pane_g6_ParamLimits

0x5f1f,	// (0x0009b085) main_mp4_pane_g6

0x629f,	// (0x0009b405) main_image3_pane_t4_ParamLimits

0x629f,	// (0x0009b405) main_image3_pane_t4

0x8dc8,	// (0x0009df2e) popup_navstr_preview_pane_ParamLimits

0x8dc8,	// (0x0009df2e) popup_navstr_preview_pane

0x8dd4,	// (0x0009df3a) scroll_navstr_pane_ParamLimits

0x8dd4,	// (0x0009df3a) scroll_navstr_pane

0xe6b0,	// (0x000a3816) bg_popup_preview_window_pane_cp04

0xdd58,	// (0x000a2ebe) popup_navstr_preview_pane_t1

0x8de0,	// (0x0009df46) scroll_navstr_pane_g1_ParamLimits

0x8de0,	// (0x0009df46) scroll_navstr_pane_g1

0x8ded,	// (0x0009df53) scroll_navstr_pane_t1_ParamLimits

0x8ded,	// (0x0009df53) scroll_navstr_pane_t1

0xdcfd,	// (0x000a2e63) bg_button_pane_cp014

0xdcfd,	// (0x000a2e63) bg_button_pane_cp030

0x8526,	// (0x0009d68c) list_double_fisheye_pane_g4_ParamLimits

0x8526,	// (0x0009d68c) list_double_fisheye_pane_g4

0x8532,	// (0x0009d698) list_double_fisheye_pane_g5_ParamLimits

0x8532,	// (0x0009d698) list_double_fisheye_pane_g5

0xbda6,	// (0x000a0f0c) sp_fs_scroll_pane_cp03

0xda98,	// (0x000a2bfe) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdaa4,	// (0x000a2c0a) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce0,	// (0x000a4e46) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xdab0,	// (0x000a2c16) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdc43,	// (0x000a2da9) sp_fs_scroll_pane_cp02

0xef68,	// (0x000a40ce) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xef68,	// (0x000a40ce) popup_sp_fs_calendar_preview_list_single_pane

0xe6b0,	// (0x000a3816) main_cam6_pano_pane

0x4512,	// (0x00099678) main_mup3_pane_ParamLimits

0xe6b0,	// (0x000a3816) main_phacti_pane

0x812a,	// (0x0009d290) bg_button_pane_cp11

0x8142,	// (0x0009d2a8) main_mobtv_info_pane_g2_ParamLimits

0x8142,	// (0x0009d2a8) main_mobtv_info_pane_g2

0x0001,

0xfc40,	// (0x000a4da6) main_mobtv_info_pane_g_ParamLimits

0xfc40,	// (0x000a4da6) main_mobtv_info_pane_g

0x82f4,	// (0x0009d45a) sc_clock_pane_t5_ParamLimits

0x82f4,	// (0x0009d45a) sc_clock_pane_t5

0x8397,	// (0x0009d4fd) main_radioblah_pane_g1_ParamLimits

0xd8f1,	// (0x000a2a57) main_radioblah_pane_t3_ParamLimits

0xd8f1,	// (0x000a2a57) main_radioblah_pane_t3

0xd909,	// (0x000a2a6f) main_radioblah_pane_t4_ParamLimits

0xd909,	// (0x000a2a6f) main_radioblah_pane_t4

0x83b5,	// (0x0009d51b) main_radioblah_text_pane_ParamLimits

0x83b5,	// (0x0009d51b) main_radioblah_text_pane

0x83c2,	// (0x0009d528) main_radioblah_info_pane_g1_ParamLimits

0x8457,	// (0x0009d5bd) main_radioblah_info_pane_t4_ParamLimits

0x8457,	// (0x0009d5bd) main_radioblah_info_pane_t4

0xe796,	// (0x000a38fc) main_sp_fs_calendar_pane

0x8dff,	// (0x0009df65) main_phacti_pane_g1

0x8e07,	// (0x0009df6d) phacti_note_pane_ParamLimits

0x8e07,	// (0x0009df6d) phacti_note_pane

0xdd6f,	// (0x000a2ed5) phacti_term_pane_ParamLimits

0xdd6f,	// (0x000a2ed5) phacti_term_pane

0xdd84,	// (0x000a2eea) phacti_note_pane_t1_ParamLimits

0xdd84,	// (0x000a2eea) phacti_note_pane_t1

0xdd9b,	// (0x000a2f01) phacti_term_pane_g1

0xdda3,	// (0x000a2f09) phacti_term_pane_t1_ParamLimits

0xdda3,	// (0x000a2f09) phacti_term_pane_t1

0xddcd,	// (0x000a2f33) popup_sp_fs_calendar_preview_list_single_pane_g1

0x9c23,	// (0x0009ed89) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdb5,	// (0x000a4f1b) popup_sp_fs_calendar_preview_list_single_pane_g

0xddd5,	// (0x000a2f3b) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xddd5,	// (0x000a2f3b) popup_sp_fs_calendar_preview_list_single_pane_t1

0xddeb,	// (0x000a2f51) aid_popup_sp_fs_bg_corner_pane

0xbe53,	// (0x000a0fb9) popup_sp_fs_calendar_preview_bg_pane_g1

0xe6b0,	// (0x000a3816) popup_sp_fs_calendar_preview_bg_pane

0xddf3,	// (0x000a2f59) popup_sp_fs_calendar_preview_list_pane

0xba36,	// (0x000a0b9c) bg_main_sp_fs_cale_pane_ParamLimits

0xba36,	// (0x000a0b9c) bg_main_sp_fs_cale_pane

0xddfb,	// (0x000a2f61) listscroll_cale_mrui_pane_ParamLimits

0xddfb,	// (0x000a2f61) listscroll_cale_mrui_pane

0xde10,	// (0x000a2f76) listscroll_sp_fs_schedule_track_pane

0xde19,	// (0x000a2f7f) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xde19,	// (0x000a2f7f) main_sp_fs_ctrlbar_pane_cp01

0xde2c,	// (0x000a2f92) main_sp_fs_ribbon_pane

0xde34,	// (0x000a2f9a) popup_sp_fs_cale_preview_window

0x8e6a,	// (0x0009dfd0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e6a,	// (0x0009dfd0) list_single_sp_fs_schedule_track_pane

0xe7a4,	// (0x000a390a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe7a4,	// (0x000a390a) bg_sp_fs_highlight_list_pane_cp03

0x8e8c,	// (0x0009dff2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e8c,	// (0x0009dff2) list_single_sp_fs_schedule_track_pane_g1

0x8e98,	// (0x0009dffe) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e98,	// (0x0009dffe) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdba,	// (0x000a4f20) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdba,	// (0x000a4f20) list_single_sp_fs_schedule_track_pane_g

0x8ea4,	// (0x0009e00a) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ea4,	// (0x0009e00a) list_single_sp_fs_schedule_track_pane_t1

0x8ebc,	// (0x0009e022) sp_fs_schedule_track_pane_ParamLimits

0x8ebc,	// (0x0009e022) sp_fs_schedule_track_pane

0xde46,	// (0x000a2fac) sp_fs_schedule_track_pane_g1

0xde4e,	// (0x000a2fb4) sp_fs_schedule_track_pane_g2

0xde56,	// (0x000a2fbc) sp_fs_schedule_track_pane_g3

0xde5e,	// (0x000a2fc4) sp_fs_schedule_track_pane_g4

0xde66,	// (0x000a2fcc) sp_fs_schedule_track_pane_g5

0x0004,

0xfdbf,	// (0x000a4f25) sp_fs_schedule_track_pane_g

0xc93b,	// (0x000a1aa1) bg_sp_fs_schedule_viewer_highlight_g1

0x9e22,	// (0x0009ef88) bg_sp_fs_schedule_viewer_highlight_g2

0xc943,	// (0x000a1aa9) bg_sp_fs_schedule_viewer_highlight_g3

0xc94b,	// (0x000a1ab1) bg_sp_fs_schedule_viewer_highlight_g4

0xcb9e,	// (0x000a1d04) bg_sp_fs_schedule_viewer_highlight_g5

0xc95b,	// (0x000a1ac1) bg_sp_fs_schedule_viewer_highlight_g6

0xc963,	// (0x000a1ac9) bg_sp_fs_schedule_viewer_highlight_g7

0xc96b,	// (0x000a1ad1) bg_sp_fs_schedule_viewer_highlight_g8

0x9e02,	// (0x0009ef68) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdca,	// (0x000a4f30) bg_sp_fs_schedule_viewer_highlight_g

0xe6b0,	// (0x000a3816) bg_main_sp_fs_ribbon_pane

0x8ecc,	// (0x0009e032) main_sp_fs_ribbon_pane_g1

0xde6e,	// (0x000a2fd4) main_sp_fs_ribbon_pane_t1

0x8ed5,	// (0x0009e03b) main_sp_fs_ribbon_pane_t2

0xde7d,	// (0x000a2fe3) main_sp_fs_ribbon_pane_t3

0x0002,

0xfddd,	// (0x000a4f43) main_sp_fs_ribbon_pane_t

0xde8c,	// (0x000a2ff2) main_sp_fs_ribbon_scheduler_pane

0xde94,	// (0x000a2ffa) bg_main_sp_fs_ribbon_pane_g1

0xde9d,	// (0x000a3003) bg_main_sp_fs_ribbon_pane_g2

0xdea6,	// (0x000a300c) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfde4,	// (0x000a4f4a) bg_main_sp_fs_ribbon_pane_g

0xdeae,	// (0x000a3014) main_sp_fs_ribbon_scheduler_pane_g1

0xdeb7,	// (0x000a301d) main_sp_fs_ribbon_scheduler_pane_g2

0xdec0,	// (0x000a3026) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdeb,	// (0x000a4f51) main_sp_fs_ribbon_scheduler_pane_g

0xdec9,	// (0x000a302f) list_cale_mrui_pane

0x8ee4,	// (0x0009e04a) sp_fs_scroll_pane_cp07_ParamLimits

0x8ee4,	// (0x0009e04a) sp_fs_scroll_pane_cp07

0x8f00,	// (0x0009e066) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f00,	// (0x0009e066) bg_sp_fs_schedule_viewer_highlight

0xded6,	// (0x000a303c) list_single_sp_fs_schedule_track_pane_cp01

0xdede,	// (0x000a3044) list_sp_fs_schedule_track_pane

0xdee6,	// (0x000a304c) sp_fs_scroll_pane_cp06_ParamLimits

0xdee6,	// (0x000a304c) sp_fs_scroll_pane_cp06

0xbe53,	// (0x000a0fb9) bgmain_sp_fs_calendar_pane_g1

0x8f0d,	// (0x0009e073) list_single_cale_mrui_pane_ParamLimits

0x8f0d,	// (0x0009e073) list_single_cale_mrui_pane

0xdef8,	// (0x000a305e) list_single_cale_mrui_row_pane_ParamLimits

0xdef8,	// (0x000a305e) list_single_cale_mrui_row_pane

0xdf05,	// (0x000a306b) list_single_cale_mrui_row_pane_g1_ParamLimits

0xdf05,	// (0x000a306b) list_single_cale_mrui_row_pane_g1

0xdf4a,	// (0x000a30b0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xdf4a,	// (0x000a30b0) list_single_cale_mrui_row_pane_t1

0x8f3a,	// (0x0009e0a0) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f3a,	// (0x0009e0a0) list_single_cale_mrui_row_pane_t2

0xdf5c,	// (0x000a30c2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xdf5c,	// (0x000a30c2) list_single_cale_mrui_row_pane_t3

0xdf8b,	// (0x000a30f1) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdf8b,	// (0x000a30f1) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdf9,	// (0x000a4f5f) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdf9,	// (0x000a4f5f) list_single_cale_mrui_row_pane_t

0x8fa0,	// (0x0009e106) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8fa0,	// (0x0009e106) list_single_cmail_header_editor_pane_bg_cp01

0x8fc0,	// (0x0009e126) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fc0,	// (0x0009e126) list_single_cmail_header_editor_pane_bg_cp02

0x8fdc,	// (0x0009e142) main_radioblah_text_pane_t1_ParamLimits

0x8fdc,	// (0x0009e142) main_radioblah_text_pane_t1

0xdfba,	// (0x000a3120) cam6_indi_pane_cp01

0xdfc2,	// (0x000a3128) cam6_mode_pane_cp01

0xdfca,	// (0x000a3130) cam6_pano_pane

0xdfd3,	// (0x000a3139) cam6_zoom_pane_cp01

0xdfdb,	// (0x000a3141) cam6_pano_image_pane

0xdfee,	// (0x000a3154) cam6_pano_pane_g1

0xd655,	// (0x000a27bb) cam6_pano_pane_g2

0xdff7,	// (0x000a315d) cam6_pano_pane_g3

0xe000,	// (0x000a3166) cam6_pano_pane_g4

0xc46e,	// (0x000a15d4) cam6_pano_pane_g5

0xe009,	// (0x000a316f) cam6_pano_pane_g6

0xdfe6,	// (0x000a314c) cam6_pano_pane_g7

0xe013,	// (0x000a3179) cam6_pano_pane_g8

0xe01c,	// (0x000a3182) cam6_pano_pane_g9

0x0008,

0xfe02,	// (0x000a4f68) cam6_pano_pane_g

0xe6b0,	// (0x000a3816) main_browser_tag_pane

0xdd50,	// (0x000a2eb6) grid_navstr_albumart_pane

0xe027,	// (0x000a318d) cell_navstr_albumart_pane_ParamLimits

0xe027,	// (0x000a318d) cell_navstr_albumart_pane

0xe047,	// (0x000a31ad) cell_navstr_albumart_pane_g1

0xb832,	// (0x000a0998) cell_navstr_albumart_pane_g2

0xb842,	// (0x000a09a8) cell_navstr_albumart_pane_g3

0xb83a,	// (0x000a09a0) cell_navstr_albumart_pane_g4

0x0003,

0xfe15,	// (0x000a4f7b) cell_navstr_albumart_pane_g

0x8ff7,	// (0x0009e15d) bt_list_pane_ParamLimits

0x8ff7,	// (0x0009e15d) bt_list_pane

0x9017,	// (0x0009e17d) bt_list_pane_t1

0x9026,	// (0x0009e18c) bt_list_pane_t2

0x0001,

0xfe1e,	// (0x000a4f84) bt_list_pane_t

0xe6b0,	// (0x000a3816) main_cale_prevew_pane

0x9035,	// (0x0009e19b) popup_cale_preview_window_ParamLimits

0x9035,	// (0x0009e19b) popup_cale_preview_window

0xe796,	// (0x000a38fc) bg_popup_preview_window_pane_cp05_ParamLimits

0xe796,	// (0x000a38fc) bg_popup_preview_window_pane_cp05

0xe04f,	// (0x000a31b5) list_cale_preview_pane_ParamLimits

0xe04f,	// (0x000a31b5) list_cale_preview_pane

0x904e,	// (0x0009e1b4) list_double_cale_preview_pane_ParamLimits

0x904e,	// (0x0009e1b4) list_double_cale_preview_pane

0x9060,	// (0x0009e1c6) list_single_cale_preview_pane_ParamLimits

0x9060,	// (0x0009e1c6) list_single_cale_preview_pane

0x9076,	// (0x0009e1dc) list_single_cale_preview_pane_g1

0x907e,	// (0x0009e1e4) list_single_cale_preview_pane_t1_ParamLimits

0x907e,	// (0x0009e1e4) list_single_cale_preview_pane_t1

0x9093,	// (0x0009e1f9) list_double_cale_preview_pane_g1

0x909b,	// (0x0009e201) list_double_cale_preview_pane_t1_ParamLimits

0x909b,	// (0x0009e201) list_double_cale_preview_pane_t1

0x90b0,	// (0x0009e216) list_double_cale_preview_pane_t2_ParamLimits

0x90b0,	// (0x0009e216) list_double_cale_preview_pane_t2

0x0001,

0xfe23,	// (0x000a4f89) list_double_cale_preview_pane_t_ParamLimits

0xfe23,	// (0x000a4f89) list_double_cale_preview_pane_t

0xe6b0,	// (0x000a3816) main_ezdial_pane

0xe796,	// (0x000a38fc) main_sp_fs_email_pane_ParamLimits

0x86b6,	// (0x0009d81c) cmail_ddmenu_btn01_pane_ParamLimits

0x86b6,	// (0x0009d81c) cmail_ddmenu_btn01_pane

0x86d3,	// (0x0009d839) cmail_ddmenu_btn02_pane_ParamLimits

0x86d3,	// (0x0009d839) cmail_ddmenu_btn02_pane

0x86f1,	// (0x0009d857) cmail_ddmenu_btn03_pane_ParamLimits

0x86f1,	// (0x0009d857) cmail_ddmenu_btn03_pane

0x871f,	// (0x0009d885) main_sp_fs_ctrlbar_pane_ParamLimits

0x8735,	// (0x0009d89b) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8cec,	// (0x0009de52) list_cmail_body_pane_ParamLimits

0xdc59,	// (0x000a2dbf) bg_button_pane_cp12

0xdc62,	// (0x000a2dc8) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdc62,	// (0x000a2dc8) list_single_cmail_header_detail_pane_g3

0xdcab,	// (0x000a2e11) list_single_cmail_header_detail_pane_t2_ParamLimits

0xdcab,	// (0x000a2e11) list_single_cmail_header_detail_pane_t2

0x0001,

0xfda6,	// (0x000a4f0c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfda6,	// (0x000a4f0c) list_single_cmail_header_detail_pane_t

0xddb8,	// (0x000a2f1e) phacti_term_pane_t2_ParamLimits

0xddb8,	// (0x000a2f1e) phacti_term_pane_t2

0x0001,

0xfdb0,	// (0x000a4f16) phacti_term_pane_t_ParamLimits

0xfdb0,	// (0x000a4f16) phacti_term_pane_t

0xe05b,	// (0x000a31c1) aid_size_list_single_double

0x90c8,	// (0x0009e22e) popup_ezdial_listscroll_window

0x90e9,	// (0x0009e24f) popup_number_entry_window_cp01

0xf029,	// (0x000a418f) bg_popup_call_pane_cp09

0xe067,	// (0x000a31cd) ezdial_list_pane

0xe06f,	// (0x000a31d5) scroll_pane_cp23

0xbc23,	// (0x000a0d89) bg_button_pane_cp028_ParamLimits

0xbc23,	// (0x000a0d89) bg_button_pane_cp028

0x90f7,	// (0x0009e25d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90f7,	// (0x0009e25d) cmail_ddmenu_btn01_pane_g1

0x9107,	// (0x0009e26d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9107,	// (0x0009e26d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe28,	// (0x000a4f8e) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe28,	// (0x000a4f8e) cmail_ddmenu_btn01_pane_g

0xe077,	// (0x000a31dd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe077,	// (0x000a31dd) cmail_ddmenu_btn01_pane_t1

0xba36,	// (0x000a0b9c) bg_button_pane_cp029_ParamLimits

0xba36,	// (0x000a0b9c) bg_button_pane_cp029

0x9107,	// (0x0009e26d) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9107,	// (0x0009e26d) cmail_ddmenu_btn02_pane_g1

0x9120,	// (0x0009e286) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9120,	// (0x0009e286) cmail_ddmenu_btn02_pane_t1

0xe7a4,	// (0x000a390a) bg_button_pane_cp031_ParamLimits

0xe7a4,	// (0x000a390a) bg_button_pane_cp031

0x9107,	// (0x0009e26d) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9107,	// (0x0009e26d) cmail_ddmenu_btn03_pane_g1

0x9120,	// (0x0009e286) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9120,	// (0x0009e286) cmail_ddmenu_btn03_pane_t1

0x613c,	// (0x0009b2a2) cell_dialer2_keypad_pane_t1_ParamLimits

0x6156,	// (0x0009b2bc) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x6156,	// (0x0009b2bc) cell_dialer2_keypad_pane_t1_copy1

0x7faf,	// (0x0009d115) ncimui_group_button_pane

0xe796,	// (0x000a38fc) main_sp_fs_calendar_pane_ParamLimits

0x8d0c,	// (0x0009de72) list_single_cmail_header_caption_pane_ParamLimits

0xf0c1,	// (0x000a4227) aid_recal_txt_sm_pane

0xe6b0,	// (0x000a3816) mian_recal_day_pane

0xde34,	// (0x000a2f9a) popup_sp_fs_cale_preview_window_ParamLimits

0xe08c,	// (0x000a31f2) list_recal_day_pane

0xe0ce,	// (0x000a3234) list_single_recal_day_pane_ParamLimits

0xe0ce,	// (0x000a3234) list_single_recal_day_pane

0xe0e0,	// (0x000a3246) list_single_recal_day_pane_g1_ParamLimits

0xe0e0,	// (0x000a3246) list_single_recal_day_pane_g1

0xe0ec,	// (0x000a3252) list_single_recal_day_pane_g2_ParamLimits

0xe0ec,	// (0x000a3252) list_single_recal_day_pane_g2

0xe0f8,	// (0x000a325e) list_single_recal_day_pane_g3_ParamLimits

0xe0f8,	// (0x000a325e) list_single_recal_day_pane_g3

0x9144,	// (0x0009e2aa) list_single_recal_day_pane_g4_ParamLimits

0x9144,	// (0x0009e2aa) list_single_recal_day_pane_g4

0xe104,	// (0x000a326a) list_single_recal_day_pane_g5_ParamLimits

0xe104,	// (0x000a326a) list_single_recal_day_pane_g5

0xe110,	// (0x000a3276) list_single_recal_day_pane_g6_ParamLimits

0xe110,	// (0x000a3276) list_single_recal_day_pane_g6

0x0004,

0xfe37,	// (0x000a4f9d) list_single_recal_day_pane_g_ParamLimits

0xfe37,	// (0x000a4f9d) list_single_recal_day_pane_g

0xe124,	// (0x000a328a) list_single_recal_day_pane_t1

0xe136,	// (0x000a329c) list_single_recal_day_pane_t2

0x0001,

0xfe42,	// (0x000a4fa8) list_single_recal_day_pane_t

0x915c,	// (0x0009e2c2) ncimui_query_button_pane_ParamLimits

0x915c,	// (0x0009e2c2) ncimui_query_button_pane

0x916c,	// (0x0009e2d2) ncimui_query_button_pane_t1_ParamLimits

0x916c,	// (0x0009e2d2) ncimui_query_button_pane_t1

0xe148,	// (0x000a32ae) ncimui_query_button_pane_t2_ParamLimits

0xe148,	// (0x000a32ae) ncimui_query_button_pane_t2

0x0001,

0xfe47,	// (0x000a4fad) ncimui_query_button_pane_t_ParamLimits

0xfe47,	// (0x000a4fad) ncimui_query_button_pane_t

0x917f,	// (0x0009e2e5) query_button_pane_ParamLimits

0x917f,	// (0x0009e2e5) query_button_pane

0xe6b0,	// (0x000a3816) bg_button_pane_cp0028

0xe15b,	// (0x000a32c1) query_button_pane_t1

0x452e,	// (0x00099694) main_tport_pane_ParamLimits

0x8bf6,	// (0x0009dd5c) bg_popup_window_pane_cp01_ParamLimits

0x8bf6,	// (0x0009dd5c) bg_popup_window_pane_cp01

0x8c04,	// (0x0009dd6a) heading_pane_cp08_ParamLimits

0x8c04,	// (0x0009dd6a) heading_pane_cp08

0x8c12,	// (0x0009dd78) heading_pane_cp07_ParamLimits

0x8c12,	// (0x0009dd78) heading_pane_cp07

0x8c81,	// (0x0009dde7) cell_tport_appsw_pane_g2

0x0002,

0xfd93,	// (0x000a4ef9) cell_tport_appsw_pane_g

0x3c40,	// (0x00098da6) input_candi_list_open_g1

0x9fe5,	// (0x0009f14b) list_cale_time_pane_g6_ParamLimits

0x9fe5,	// (0x0009f14b) list_cale_time_pane_g6

0x4fab,	// (0x0009a111) aid_size_touch_calib_1_ParamLimits

0x4fab,	// (0x0009a111) aid_size_touch_calib_1

0x4fb7,	// (0x0009a11d) aid_size_touch_calib_2_ParamLimits

0x4fb7,	// (0x0009a11d) aid_size_touch_calib_2

0x4fc5,	// (0x0009a12b) aid_size_touch_calib_3_ParamLimits

0x4fc5,	// (0x0009a12b) aid_size_touch_calib_3

0x4fd5,	// (0x0009a13b) aid_size_touch_calib_4_ParamLimits

0x4fd5,	// (0x0009a13b) aid_size_touch_calib_4

0x4fe3,	// (0x0009a149) main_touch_calib_button_group_pane_ParamLimits

0x4fe3,	// (0x0009a149) main_touch_calib_button_group_pane

0x4ff1,	// (0x0009a157) main_touch_calib_pane_g1_ParamLimits

0x4ffd,	// (0x0009a163) main_touch_calib_pane_g2_ParamLimits

0x5009,	// (0x0009a16f) main_touch_calib_pane_g3_ParamLimits

0x5015,	// (0x0009a17b) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x000a48b7) main_touch_calib_pane_g_ParamLimits

0x5021,	// (0x0009a187) main_touch_calib_pane_t1_ParamLimits

0x503a,	// (0x0009a1a0) main_touch_calib_pane_t2_ParamLimits

0x5053,	// (0x0009a1b9) main_touch_calib_pane_t3_ParamLimits

0x5069,	// (0x0009a1cf) main_touch_calib_pane_t4_ParamLimits

0x507f,	// (0x0009a1e5) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x000a48c0) main_touch_calib_pane_t_ParamLimits

0xc20e,	// (0x000a1374) list_single_fp_cale_pane_g3_ParamLimits

0xc20e,	// (0x000a1374) list_single_fp_cale_pane_g3

0x4512,	// (0x00099678) bg_button_pane_cp012_ParamLimits

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp03_ParamLimits

0x6f77,	// (0x0009c0dd) cell_vitu2_function_top_pane_g1_ParamLimits

0x4512,	// (0x00099678) bg_vkb2_func_pane_cp04_ParamLimits

0x7f37,	// (0x0009d09d) main_ncimui_button_group_pane_ParamLimits

0x7f37,	// (0x0009d09d) main_ncimui_button_group_pane

0x7f9d,	// (0x0009d103) main_ncimui_pane_t3_ParamLimits

0x7f9d,	// (0x0009d103) main_ncimui_pane_t3

0xdd66,	// (0x000a2ecc) phacti_button_group_pane

0xe05b,	// (0x000a31c1) aid_size_list_single_double_ParamLimits

0x90c8,	// (0x0009e22e) popup_ezdial_listscroll_window_ParamLimits

0x90e9,	// (0x0009e24f) popup_number_entry_window_cp01_ParamLimits

0x918c,	// (0x0009e2f2) phacti_button_pane_ParamLimits

0x918c,	// (0x0009e2f2) phacti_button_pane

0xe6b0,	// (0x000a3816) bg_button_pane_cp14

0xe169,	// (0x000a32cf) phacti_button_pane_t1

0x919d,	// (0x0009e303) main_touch_calib_button_pane_ParamLimits

0x919d,	// (0x0009e303) main_touch_calib_button_pane

0xee64,	// (0x000a3fca) bg_button_pane_cp18_ParamLimits

0xee64,	// (0x000a3fca) bg_button_pane_cp18

0xe177,	// (0x000a32dd) main_touch_calib_button_pane_t1_ParamLimits

0xe177,	// (0x000a32dd) main_touch_calib_button_pane_t1

0xe18d,	// (0x000a32f3) main_touch_calib_button_pane_t2_ParamLimits

0xe18d,	// (0x000a32f3) main_touch_calib_button_pane_t2

0x0001,

0xfe4c,	// (0x000a4fb2) main_touch_calib_button_pane_t_ParamLimits

0xfe4c,	// (0x000a4fb2) main_touch_calib_button_pane_t

0xe6b0,	// (0x000a3816) cell_ncimui_button_pane

0xe6b0,	// (0x000a3816) bg_button_pane_cp032

0xe1ab,	// (0x000a3311) cell_ncimui_button_pane_t1

0x61b2,	// (0x0009b318) image3_infobar_pane_ParamLimits

0x61b2,	// (0x0009b318) image3_infobar_pane

0x8316,	// (0x0009d47c) fs_bigclock_status_pane_ParamLimits

0x8316,	// (0x0009d47c) fs_bigclock_status_pane

0x8323,	// (0x0009d489) main_fs_bigclock_clock_pane_ParamLimits

0x8323,	// (0x0009d489) main_fs_bigclock_clock_pane

0x833d,	// (0x0009d4a3) main_fs_bigclock_indi_pane_ParamLimits

0x833d,	// (0x0009d4a3) main_fs_bigclock_indi_pane

0x8365,	// (0x0009d4cb) main_fs_bigclock_swipe_pane_ParamLimits

0x8365,	// (0x0009d4cb) main_fs_bigclock_swipe_pane

0xe6b0,	// (0x000a3816) main_fs_clock_dumped_data

0xd762,	// (0x000a28c8) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd762,	// (0x000a28c8) list_single_fs_bigclock_indicator_pane_g1

0xd77d,	// (0x000a28e3) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd77d,	// (0x000a28e3) list_single_fs_bigclock_indicator_pane_g2

0xd797,	// (0x000a28fd) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd797,	// (0x000a28fd) list_single_fs_bigclock_indicator_pane_g3

0xd7b1,	// (0x000a2917) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd7b1,	// (0x000a2917) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc74,	// (0x000a4dda) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc74,	// (0x000a4dda) list_single_fs_bigclock_indicator_pane_g

0xd7dc,	// (0x000a2942) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd7dc,	// (0x000a2942) list_single_fs_bigclock_indicator_pane_t1

0xd804,	// (0x000a296a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd804,	// (0x000a296a) list_single_fs_bigclock_indicator_pane_t2

0xd82c,	// (0x000a2992) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd82c,	// (0x000a2992) list_single_fs_bigclock_indicator_pane_t3

0xd854,	// (0x000a29ba) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd854,	// (0x000a29ba) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc7f,	// (0x000a4de5) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc7f,	// (0x000a4de5) list_single_fs_bigclock_indicator_pane_t

0xe1b9,	// (0x000a331f) image3_infobar_fav_pane_ParamLimits

0xe1b9,	// (0x000a331f) image3_infobar_fav_pane

0xe1c9,	// (0x000a332f) image3_infobar_loc_pane_ParamLimits

0xe1c9,	// (0x000a332f) image3_infobar_loc_pane

0xe1dd,	// (0x000a3343) image3_infobar_time_pane_ParamLimits

0xe1dd,	// (0x000a3343) image3_infobar_time_pane

0xbe53,	// (0x000a0fb9) image3_infobar_time_pane_g1

0xe1ed,	// (0x000a3353) image3_infobar_time_pane_t1

0xbe53,	// (0x000a0fb9) image3_infobar_loc_pane_g1

0xe1fb,	// (0x000a3361) image3_infobar_loc_pane_g2

0x0001,

0xfe51,	// (0x000a4fb7) image3_infobar_loc_pane_g

0xe203,	// (0x000a3369) image3_infobar_loc_pane_t1

0xbe53,	// (0x000a0fb9) image3_infobar_fav_pane_g1

0xe211,	// (0x000a3377) image3_infobar_fav_pane_g2

0x0001,

0xfe56,	// (0x000a4fbc) image3_infobar_fav_pane_g

0xe219,	// (0x000a337f) fs_bigclock_status_battery_pane

0xe222,	// (0x000a3388) fs_bigclock_status_signal_pane

0xe22b,	// (0x000a3391) fs_bigclock_status_title_pane

0xe234,	// (0x000a339a) fs_bigclock_status_signal_pane_g1

0xe23d,	// (0x000a33a3) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe5b,	// (0x000a4fc1) fs_bigclock_status_signal_pane_g

0xe245,	// (0x000a33ab) fs_bigclock_status_battery_pane_g1

0xe24e,	// (0x000a33b4) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe60,	// (0x000a4fc6) fs_bigclock_status_battery_pane_g

0xe256,	// (0x000a33bc) fs_bigclock_status_title_pane_t1

0xbe53,	// (0x000a0fb9) main_fs_bigclock_clock_pane_g1

0xe264,	// (0x000a33ca) main_fs_bigclock_clock_pane_g2

0xe26d,	// (0x000a33d3) main_fs_bigclock_clock_pane_g3

0xe26d,	// (0x000a33d3) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe65,	// (0x000a4fcb) main_fs_bigclock_clock_pane_g

0xe275,	// (0x000a33db) main_fs_bigclock_clock_pane_t1

0x91ad,	// (0x0009e313) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe6e,	// (0x000a4fd4) main_fs_bigclock_clock_pane_t

0xe283,	// (0x000a33e9) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe283,	// (0x000a33e9) list_single_fs_bigclock_indicator_pane

0xe294,	// (0x000a33fa) list_single_fs_bigclock_pane_ParamLimits

0xe294,	// (0x000a33fa) list_single_fs_bigclock_pane

0xe2ba,	// (0x000a3420) main_fs_bigclock_indicator_pane_t1

0xe2c9,	// (0x000a342f) list_single_fs_bigclock_pane_g1

0xe2d1,	// (0x000a3437) list_single_fs_bigclock_pane_t1

0xbe53,	// (0x000a0fb9) main_fs_bigclock_swipe_pane_g1

0xe314,	// (0x000a347a) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe7f,	// (0x000a4fe5) main_fs_bigclock_swipe_pane_g

0xe31c,	// (0x000a3482) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe31c,	// (0x000a3482) main_fs_bigclock_swipe_pane_t1

0x34da,	// (0x00098640) call_type_pane_ParamLimits

0xe6b0,	// (0x000a3816) main_btmg_pane

0xdf31,	// (0x000a3097) list_single_cale_mrui_row_pane_g2_ParamLimits

0xdf31,	// (0x000a3097) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf2,	// (0x000a4f58) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf2,	// (0x000a4f58) list_single_cale_mrui_row_pane_g

0xe0b5,	// (0x000a321b) list_recal_vselct_arw_lo_pane

0xe0bd,	// (0x000a3223) list_recal_vselct_arw_up_pane

0xe0c5,	// (0x000a322b) list_recal_vselct_pane

0x9200,	// (0x0009e366) btmg_button_pane

0x920c,	// (0x0009e372) main_btmg_pane_g1

0xe6b0,	// (0x000a3816) bg_button_pane_cp044

0xe339,	// (0x000a349f) btmg_button_pane_t1

0xba22,	// (0x000a0b88) aid_listscroll_gen

0xe796,	// (0x000a38fc) main_cntbar_detail_pane

0xdc3b,	// (0x000a2da1) list_cmail_folder_pane

0xbda6,	// (0x000a0f0c) sp_fs_scroll_pane_cp03_ParamLimits

0x9214,	// (0x0009e37a) list_single_fs_dyc_pane_cp01_ParamLimits

0x9214,	// (0x0009e37a) list_single_fs_dyc_pane_cp01

0xe347,	// (0x000a34ad) aid_size_cmail_indent

0xe350,	// (0x000a34b6) list_single_dyc_row_pane_cp01

0x9259,	// (0x0009e3bf) cntbar_detail_list_pane_ParamLimits

0x9259,	// (0x0009e3bf) cntbar_detail_list_pane

0x9293,	// (0x0009e3f9) main_cntbar_detail_cont_pane_ParamLimits

0x9293,	// (0x0009e3f9) main_cntbar_detail_cont_pane

0x33f3,	// (0x00098559) scroll_pane_cp032_ParamLimits

0x33f3,	// (0x00098559) scroll_pane_cp032

0x929f,	// (0x0009e405) cntbar_detail_list_event_pane_ParamLimits

0x929f,	// (0x0009e405) cntbar_detail_list_event_pane

0x9265,	// (0x0009e3cb) cntbar_detail_list_shct_pane

0x9e70,	// (0x0009efd6) aid_list_gen

0xe359,	// (0x000a34bf) aid_scroll

0xe362,	// (0x000a34c8) aid_size_touch_scroll_bar

0xf086,	// (0x000a41ec) aid_list_double

0x92b3,	// (0x0009e419) aid_list_single

0x76b2,	// (0x0009c818) aid_list_single_lg

0x92bc,	// (0x0009e422) aid_list_z_g_a_sm

0x92c4,	// (0x0009e42a) aid_list_z_g_d

0x92cc,	// (0x0009e432) aid_txt_z_prm

0x92da,	// (0x0009e440) aid_txt_z_prm_cp01

0x92e8,	// (0x0009e44e) aid_txt_z_sec

0x92f6,	// (0x0009e45c) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92f6,	// (0x0009e45c) main_cntbar_detail_cont_pane_g1

0x9303,	// (0x0009e469) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9303,	// (0x0009e469) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe84,	// (0x000a4fea) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe84,	// (0x000a4fea) main_cntbar_detail_cont_pane_g

0xe36b,	// (0x000a34d1) main_cntbar_detail_cont_pane_t1

0xe379,	// (0x000a34df) main_cntbar_detail_cont_pane_t2

0xe387,	// (0x000a34ed) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe89,	// (0x000a4fef) main_cntbar_detail_cont_pane_t

0x930f,	// (0x0009e475) cell_cntbar_detail_list_shct_pane_ParamLimits

0x930f,	// (0x0009e475) cell_cntbar_detail_list_shct_pane

0xe395,	// (0x000a34fb) cntbar_detail_list_shct_pane_g1

0xe39e,	// (0x000a3504) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe90,	// (0x000a4ff6) cntbar_detail_list_shct_pane_g

0x9323,	// (0x0009e489) cntbar_detail_list_event_pane_g1_ParamLimits

0x9323,	// (0x0009e489) cntbar_detail_list_event_pane_g1

0x932f,	// (0x0009e495) cntbar_detail_list_event_pane_g2_ParamLimits

0x932f,	// (0x0009e495) cntbar_detail_list_event_pane_g2

0x0005,

0xfe95,	// (0x000a4ffb) cntbar_detail_list_event_pane_g_ParamLimits

0xfe95,	// (0x000a4ffb) cntbar_detail_list_event_pane_g

0x939b,	// (0x0009e501) cntbar_detail_list_event_pane_t1_ParamLimits

0x939b,	// (0x0009e501) cntbar_detail_list_event_pane_t1

0x93b0,	// (0x0009e516) cntbar_detail_list_event_pane_t2_ParamLimits

0x93b0,	// (0x0009e516) cntbar_detail_list_event_pane_t2

0x0002,

0xfea2,	// (0x000a5008) cntbar_detail_list_event_pane_t_ParamLimits

0xfea2,	// (0x000a5008) cntbar_detail_list_event_pane_t

0xbe53,	// (0x000a0fb9) cell_cntbar_detail_list_shct_pane_g1

0xa5e9,	// (0x0009f74f) navi_pane_mv_g3

0xe796,	// (0x000a38fc) main_cntbar_detail_pane_ParamLimits

0xe6b0,	// (0x000a3816) main_notif_wgt_pane

0x5e66,	// (0x0009afcc) aid_tch_main_mp4_pane_g4

0x609b,	// (0x0009b201) popup_slider_window_cp02

0xe0ab,	// (0x000a3211) list_recal_day_event_pane

0x9239,	// (0x0009e39f) cntbar_detail_btn_pane_ParamLimits

0x9239,	// (0x0009e39f) cntbar_detail_btn_pane

0x9249,	// (0x0009e3af) cntbar_detail_btn_pane_cp01_ParamLimits

0x9249,	// (0x0009e3af) cntbar_detail_btn_pane_cp01

0x9265,	// (0x0009e3cb) cntbar_detail_list_shct_pane_ParamLimits

0x9271,	// (0x0009e3d7) cntbar_detail_pane_g1_ParamLimits

0x9271,	// (0x0009e3d7) cntbar_detail_pane_g1

0x927d,	// (0x0009e3e3) cntbar_detail_pane_t1_ParamLimits

0x927d,	// (0x0009e3e3) cntbar_detail_pane_t1

0x933b,	// (0x0009e4a1) cntbar_detail_list_event_pane_g3_ParamLimits

0x933b,	// (0x0009e4a1) cntbar_detail_list_event_pane_g3

0x9353,	// (0x0009e4b9) cntbar_detail_list_event_pane_g4_ParamLimits

0x9353,	// (0x0009e4b9) cntbar_detail_list_event_pane_g4

0x936b,	// (0x0009e4d1) cntbar_detail_list_event_pane_g5_ParamLimits

0x936b,	// (0x0009e4d1) cntbar_detail_list_event_pane_g5

0x9383,	// (0x0009e4e9) cntbar_detail_list_event_pane_g6_ParamLimits

0x9383,	// (0x0009e4e9) cntbar_detail_list_event_pane_g6

0x93c5,	// (0x0009e52b) cntbar_detail_list_event_pane_t3_ParamLimits

0x93c5,	// (0x0009e52b) cntbar_detail_list_event_pane_t3

0x93d7,	// (0x0009e53d) popup_notif_wgt_window_ParamLimits

0x93d7,	// (0x0009e53d) popup_notif_wgt_window

0x93e7,	// (0x0009e54d) popup_submenu_window_cp01_ParamLimits

0x93e7,	// (0x0009e54d) popup_submenu_window_cp01

0xf029,	// (0x000a418f) bg_popup_window_pane_cp10

0xe3a7,	// (0x000a350d) listscroll_notif_wgt_pane

0xe3b9,	// (0x000a351f) list_notif_wgt_window

0xe3c2,	// (0x000a3528) scroll_pane_cp033

0x93f9,	// (0x0009e55f) list_notif_wgt_row_pane_ParamLimits

0x93f9,	// (0x0009e55f) list_notif_wgt_row_pane

0xe3cb,	// (0x000a3531) aid_size_list_notif_wgt_del

0xe3d8,	// (0x000a353e) list_notif_wgt_row_pane_g1

0xe3e4,	// (0x000a354a) list_notif_wgt_row_pane_g2

0xe3f8,	// (0x000a355e) list_notif_wgt_row_pane_g3

0x0002,

0xfea9,	// (0x000a500f) list_notif_wgt_row_pane_g

0xe405,	// (0x000a356b) list_notif_wgt_row_pane_t1

0xe41b,	// (0x000a3581) list_notif_wgt_row_pane_t2

0xe42d,	// (0x000a3593) list_notif_wgt_row_pane_t3

0x0002,

0xfeb0,	// (0x000a5016) list_notif_wgt_row_pane_t

0xcbb8,	// (0x000a1d1e) list_recal_day_event_pane_g1

0xe43f,	// (0x000a35a5) list_recal_day_event_pane_t1

0xe6b0,	// (0x000a3816) bg_button_pane_cp045

0x940b,	// (0x0009e571) cntbar_detail_btn_pane_t1

0xba36,	// (0x000a0b9c) main_callh_pane_ParamLimits

0xba36,	// (0x000a0b9c) main_callh_pane

0xe6b0,	// (0x000a3816) main_coverflow0_pane

0xe6b0,	// (0x000a3816) main_wgtman_pane

0x837d,	// (0x0009d4e3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x837d,	// (0x0009d4e3) main_fs_bigclock_unlock_btn_pane

0x8c79,	// (0x0009dddf) bg_button_pane_cp16

0x8c89,	// (0x0009ddef) cell_tport_appsw_pane_g3

0x9419,	// (0x0009e57f) cf0_flow_pane_ParamLimits

0x9419,	// (0x0009e57f) cf0_flow_pane

0xe44e,	// (0x000a35b4) listscroll_cf0_pane

0xe459,	// (0x000a35bf) main_cf0_pane_g1

0x9428,	// (0x0009e58e) main_cf0_pane_t1_ParamLimits

0x9428,	// (0x0009e58e) main_cf0_pane_t1

0x943c,	// (0x0009e5a2) main_cf0_pane_t2_ParamLimits

0x943c,	// (0x0009e5a2) main_cf0_pane_t2

0x0001,

0xfebc,	// (0x000a5022) main_cf0_pane_t_ParamLimits

0xfebc,	// (0x000a5022) main_cf0_pane_t

0xe46b,	// (0x000a35d1) scroll_pane_cp11

0x9450,	// (0x0009e5b6) cf0_flow_pane_g1

0x9458,	// (0x0009e5be) cf0_flow_pane_g2

0x0001,

0xfec1,	// (0x000a5027) cf0_flow_pane_g

0x9460,	// (0x0009e5c6) cf0_flow_pane_t1

0xe6b0,	// (0x000a3816) main_call6_pane

0xe6b0,	// (0x000a3816) main_calllock_pane

0x946e,	// (0x0009e5d4) call6_btn_grp_pane_ParamLimits

0x946e,	// (0x0009e5d4) call6_btn_grp_pane

0x947d,	// (0x0009e5e3) call6_pane_g1_ParamLimits

0x947d,	// (0x0009e5e3) call6_pane_g1

0x948c,	// (0x0009e5f2) popup_call6_1st_window_ParamLimits

0x948c,	// (0x0009e5f2) popup_call6_1st_window

0x949a,	// (0x0009e600) popup_call6_2nd_window_ParamLimits

0x949a,	// (0x0009e600) popup_call6_2nd_window

0x94a8,	// (0x0009e60e) cell_call6_btn_pane_ParamLimits

0x94a8,	// (0x0009e60e) cell_call6_btn_pane

0xf029,	// (0x000a418f) bg_popup_call2_in_pane_cp03

0xe476,	// (0x000a35dc) popup_call6_1st_window_g1

0xe47e,	// (0x000a35e4) popup_call6_1st_window_g2

0xe486,	// (0x000a35ec) popup_call6_1st_window_g3

0x0002,

0xfec6,	// (0x000a502c) popup_call6_1st_window_g

0xe48e,	// (0x000a35f4) popup_call6_1st_window_t1

0xe49d,	// (0x000a3603) popup_call6_1st_window_t2

0xe4ad,	// (0x000a3613) popup_call6_1st_window_t3

0x0002,

0xfecd,	// (0x000a5033) popup_call6_1st_window_t

0xf029,	// (0x000a418f) bg_popup_call2_in_pane_cp04

0xe476,	// (0x000a35dc) popup_call6_2nd_window_g1

0xe47e,	// (0x000a35e4) popup_call6_2nd_window_g2

0xe486,	// (0x000a35ec) popup_call6_2nd_window_g3

0x0002,

0xfec6,	// (0x000a502c) popup_call6_2nd_window_g

0xe48e,	// (0x000a35f4) popup_call6_2nd_window_t1

0xe6b0,	// (0x000a3816) bg_button_pane_cp15

0xe4bd,	// (0x000a3623) cell_call6_btn_pane_g1

0xe4c6,	// (0x000a362c) cell_call6_btn_pane_t1

0x94b7,	// (0x0009e61d) listscroll_wgtman_pane_ParamLimits

0x94b7,	// (0x0009e61d) listscroll_wgtman_pane

0x94d3,	// (0x0009e639) wgtman_btn_pane_ParamLimits

0x94d3,	// (0x0009e639) wgtman_btn_pane

0xa3f0,	// (0x0009f556) aid_scroll_copy1

0xe4d5,	// (0x000a363b) list_wgtman_pane

0x9508,	// (0x0009e66e) wgtman_btn_pane_g1_ParamLimits

0x9508,	// (0x0009e66e) wgtman_btn_pane_g1

0x9530,	// (0x0009e696) wgtman_btn_pane_t1_ParamLimits

0x9530,	// (0x0009e696) wgtman_btn_pane_t1

0xe4df,	// (0x000a3645) wgtman_btn_pane_t2_ParamLimits

0xe4df,	// (0x000a3645) wgtman_btn_pane_t2

0x0001,

0xfed4,	// (0x000a503a) wgtman_btn_pane_t_ParamLimits

0xfed4,	// (0x000a503a) wgtman_btn_pane_t

0x9567,	// (0x0009e6cd) listrow_wgtman_pane_ParamLimits

0x9567,	// (0x0009e6cd) listrow_wgtman_pane

0x9582,	// (0x0009e6e8) listrow_wgtman_pane_g1

0x958f,	// (0x0009e6f5) listrow_wgtman_pane_g2

0x0001,

0xfed9,	// (0x000a503f) listrow_wgtman_pane_g

0x95ad,	// (0x0009e713) listrow_wgtman_pane_t1

0x95c5,	// (0x0009e72b) listrow_wgtman_pane_t2

0x0001,

0xfede,	// (0x000a5044) listrow_wgtman_pane_t

0x95eb,	// (0x0009e751) wait_bar_pane_cp09

0xe4f6,	// (0x000a365c) main_calllock_btn_pane

0xe500,	// (0x000a3666) main_calllock_pane_g1

0xe6b0,	// (0x000a3816) bg_button_pane_cp17

0xe50c,	// (0x000a3672) main_calllock_btn_pane_g1

0xe515,	// (0x000a367b) main_calllock_btn_pane_t1

0xe6b0,	// (0x000a3816) main_dialer3_pane

0xe6b0,	// (0x000a3816) main_fmrd2_pane

0xbe53,	// (0x000a0fb9) main_fs_bigclock_unlock_btn_pane_g1

0xe52c,	// (0x000a3692) main_fs_bigclock_unlock_btn_pane_t1

0x95fd,	// (0x0009e763) area_fmrd2_info_pane_ParamLimits

0x95fd,	// (0x0009e763) area_fmrd2_info_pane

0x960b,	// (0x0009e771) area_fmrd2_visual_pane_ParamLimits

0x960b,	// (0x0009e771) area_fmrd2_visual_pane

0x9619,	// (0x0009e77f) fmrd2_indi_pane_ParamLimits

0x9619,	// (0x0009e77f) fmrd2_indi_pane

0x9626,	// (0x0009e78c) area_fmrd2_visual_pane_g1

0x962e,	// (0x0009e794) area_fmrd2_visual_pane_t1

0x963e,	// (0x0009e7a4) area_fmrd2_visual_pane_t2

0x964e,	// (0x0009e7b4) area_fmrd2_visual_pane_t3

0x0002,

0xfee8,	// (0x000a504e) area_fmrd2_visual_pane_t

0x965e,	// (0x0009e7c4) area_fmrd2_info_pane_g1

0x9666,	// (0x0009e7cc) area_fmrd2_info_pane_t1

0x9676,	// (0x0009e7dc) area_fmrd2_info_pane_t2

0x9686,	// (0x0009e7ec) area_fmrd2_info_pane_t3

0x9696,	// (0x0009e7fc) area_fmrd2_info_pane_t4

0x0003,

0xfeef,	// (0x000a5055) area_fmrd2_info_pane_t

0x96a4,	// (0x0009e80a) fmrd2_indi_pane_t1

0x96b4,	// (0x0009e81a) fmrd2_indi_pane_t2

0x96c4,	// (0x0009e82a) fmrd2_indi_pane_t3

0x0002,

0xfef8,	// (0x000a505e) fmrd2_indi_pane_t

0xd7c0,	// (0x000a2926) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd7c0,	// (0x000a2926) list_single_fs_bigclock_indicator_pane_g5

0xd870,	// (0x000a29d6) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd870,	// (0x000a29d6) list_single_fs_bigclock_indicator_pane_t5

0x8e1d,	// (0x0009df83) aid_cell_bcale_month_pane_ParamLimits

0x8e1d,	// (0x0009df83) aid_cell_bcale_month_pane

0x8e3b,	// (0x0009dfa1) bcale_month_pane_ParamLimits

0x8e3b,	// (0x0009dfa1) bcale_month_pane

0x8e59,	// (0x0009dfbf) bcale_preview_pane_ParamLimits

0x8e59,	// (0x0009dfbf) bcale_preview_pane

0xe2d1,	// (0x000a3437) list_single_fs_bigclock_pane_t1_ParamLimits

0xe2f0,	// (0x000a3456) list_single_fs_bigclock_pane_t2_ParamLimits

0xe2f0,	// (0x000a3456) list_single_fs_bigclock_pane_t2

0x0001,

0xfe7a,	// (0x000a4fe0) list_single_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x000a4fe0) list_single_fs_bigclock_pane_t

0xe524,	// (0x000a368a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee3,	// (0x000a5049) main_fs_bigclock_unlock_btn_pane_g

0x96d2,	// (0x0009e838) aid_dia3_key_size_ParamLimits

0x96d2,	// (0x0009e838) aid_dia3_key_size

0x96de,	// (0x0009e844) aid_dia3_listrow_size_ParamLimits

0x96de,	// (0x0009e844) aid_dia3_listrow_size

0x96ee,	// (0x0009e854) dia3_keypad_fun_pane_ParamLimits

0x96ee,	// (0x0009e854) dia3_keypad_fun_pane

0x9700,	// (0x0009e866) dia3_keypad_num_pane_ParamLimits

0x9700,	// (0x0009e866) dia3_keypad_num_pane

0x9712,	// (0x0009e878) dia3_listscroll_pane_ParamLimits

0x9712,	// (0x0009e878) dia3_listscroll_pane

0x9720,	// (0x0009e886) dia3_numentry_pane_ParamLimits

0x9720,	// (0x0009e886) dia3_numentry_pane

0xe53a,	// (0x000a36a0) dia3_list_pane

0xe545,	// (0x000a36ab) scroll_pane_cp12

0xe6b0,	// (0x000a3816) bg_dia3_numentry_pane

0x972e,	// (0x0009e894) dia3_numentry_pane_t1

0x973d,	// (0x0009e8a3) cell_dia3_key_num_pane

0x9745,	// (0x0009e8ab) cell_dia3_key0_fun_pane_ParamLimits

0x9745,	// (0x0009e8ab) cell_dia3_key0_fun_pane

0x9752,	// (0x0009e8b8) cell_dia3_key1_fun_pane_ParamLimits

0x9752,	// (0x0009e8b8) cell_dia3_key1_fun_pane

0x975f,	// (0x0009e8c5) dia3_listrow_pane

0xd4cf,	// (0x000a2635) bg_dia3_numentry_pane_g1

0xe6b0,	// (0x000a3816) bg_button_pane_cp21

0xe550,	// (0x000a36b6) cell_dia3_key_num_pane_t1

0xe55e,	// (0x000a36c4) cell_dia3_key_num_pane_t2

0xe56d,	// (0x000a36d3) cell_dia3_key_num_pane_t3

0xe57c,	// (0x000a36e2) cell_dia3_key_num_pane_t4

0x0003,

0xfeff,	// (0x000a5065) cell_dia3_key_num_pane_t

0xe6b0,	// (0x000a3816) bg_button_pane_cp19

0x976c,	// (0x0009e8d2) cell_dia3_key0_fun_pane_g1

0xe6b0,	// (0x000a3816) bg_button_pane_cp20

0x9774,	// (0x0009e8da) cell_dia3_key1_fun_pane_g1

0x977c,	// (0x0009e8e2) area_left_week_number_pane

0x978f,	// (0x0009e8f5) area_top_day_name_pane

0x979d,	// (0x0009e903) frame_month_view_pane

0xe58b,	// (0x000a36f1) grid_month_view_pane

0x97b2,	// (0x0009e918) cell_top_day_name_pane_ParamLimits

0x97b2,	// (0x0009e918) cell_top_day_name_pane

0x97cc,	// (0x0009e932) cell_area_left_week_number_pane_ParamLimits

0x97cc,	// (0x0009e932) cell_area_left_week_number_pane

0x97ef,	// (0x0009e955) cell_month_view_pane_ParamLimits

0x97ef,	// (0x0009e955) cell_month_view_pane

0xe599,	// (0x000a36ff) frm_month_g1

0x981b,	// (0x0009e981) frm_month_g2

0x982c,	// (0x0009e992) frm_month_g3

0x983d,	// (0x0009e9a3) frm_month_g4

0x984e,	// (0x0009e9b4) frm_month_g5

0x9861,	// (0x0009e9c7) frm_month_g6

0x9874,	// (0x0009e9da) frm_month_g7

0xe5a6,	// (0x000a370c) frm_month_g8

0x9887,	// (0x0009e9ed) frm_month_g9

0x9894,	// (0x0009e9fa) frm_month_g10

0x98a1,	// (0x0009ea07) frm_month_g11

0x98ae,	// (0x0009ea14) frm_month_g12

0x98bb,	// (0x0009ea21) frm_month_g13

0x98c8,	// (0x0009ea2e) frm_month_g14

0x98d7,	// (0x0009ea3d) frm_month_g15

0x98e6,	// (0x0009ea4c) frm_month_g16

0x000f,

0xff08,	// (0x000a506e) frm_month_g

0xe5b3,	// (0x000a3719) cell_top_day_name_pane_t1

0x98f5,	// (0x0009ea5b) cell_area_left_week_number_pane_g1

0x9904,	// (0x0009ea6a) cell_area_left_week_number_pane_t1

0xc0b6,	// (0x000a121c) cell_month_view_pane_g1

0x991a,	// (0x0009ea80) cell_month_view_pane_t1

0xe6b0,	// (0x000a3816) main_fps_pane

0xda60,	// (0x000a2bc6) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xda60,	// (0x000a2bc6) cmail_ddmenu_btn02_pane_cp1

0xda7c,	// (0x000a2be2) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xda7c,	// (0x000a2be2) cmail_ddmenu_btn02_pane_cp2

0x9113,	// (0x0009e279) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9113,	// (0x0009e279) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe2d,	// (0x000a4f93) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe2d,	// (0x000a4f93) cmail_ddmenu_btn02_pane_g

0x9132,	// (0x0009e298) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9132,	// (0x0009e298) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe32,	// (0x000a4f98) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe32,	// (0x000a4f98) cmail_ddmenu_btn02_pane_t

0x9930,	// (0x0009ea96) fps_text_pane_ParamLimits

0x9930,	// (0x0009ea96) fps_text_pane

0x993d,	// (0x0009eaa3) main_fps_pane_g1_ParamLimits

0x993d,	// (0x0009eaa3) main_fps_pane_g1

0x994b,	// (0x0009eab1) wait_bar_pane_cp010_ParamLimits

0x994b,	// (0x0009eab1) wait_bar_pane_cp010

0x9957,	// (0x0009eabd) fps_text_pane_t1_ParamLimits

0x9957,	// (0x0009eabd) fps_text_pane_t1

0x648b,	// (0x0009b5f1) cam4_image_uncrop_pane_g1

0x6494,	// (0x0009b5fa) cam4_image_uncrop_pane_g2

0x649d,	// (0x0009b603) cam4_image_uncrop_pane_g3

0x64a6,	// (0x0009b60c) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x000a4a54) cam4_image_uncrop_pane_g

0x975f,	// (0x0009e8c5) dia3_listrow_pane_ParamLimits

0xe6b0,	// (0x000a3816) main_phob2_pane

0x8c5b,	// (0x0009ddc1) cell_tport_appsw_pane_cp02_ParamLimits

0x8c5b,	// (0x0009ddc1) cell_tport_appsw_pane_cp02

0x8c6a,	// (0x0009ddd0) cell_tport_appsw_pane_cp03_ParamLimits

0x8c6a,	// (0x0009ddd0) cell_tport_appsw_pane_cp03

0xe6b0,	// (0x000a3816) phob2_contact_card_pane

0xe6b0,	// (0x000a3816) phob2_listscroll_pane

0xe5c6,	// (0x000a372c) phob2_list_pane

0xe5ce,	// (0x000a3734) scroll_pane_cp034

0x9970,	// (0x0009ead6) phob2_cc_data_pane_ParamLimits

0x9970,	// (0x0009ead6) phob2_cc_data_pane

0x998a,	// (0x0009eaf0) phob2_cc_listscroll_pane_ParamLimits

0x998a,	// (0x0009eaf0) phob2_cc_listscroll_pane

0x9567,	// (0x0009e6cd) list_double_large_graphic_phob2_pane_ParamLimits

0x9567,	// (0x0009e6cd) list_double_large_graphic_phob2_pane

0x99a4,	// (0x0009eb0a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99a4,	// (0x0009eb0a) list_double_large_graphic_phob2_pane_g1

0x99ba,	// (0x0009eb20) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99ba,	// (0x0009eb20) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff29,	// (0x000a508f) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff29,	// (0x000a508f) list_double_large_graphic_phob2_pane_g

0x99c6,	// (0x0009eb2c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99c6,	// (0x0009eb2c) list_double_large_graphic_phob2_pane_t1

0x99db,	// (0x0009eb41) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99db,	// (0x0009eb41) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff2e,	// (0x000a5094) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff2e,	// (0x000a5094) list_double_large_graphic_phob2_pane_t

0xe6b0,	// (0x000a3816) list_highlight_pane_cp024

0x99ed,	// (0x0009eb53) phob2_cc_button_pane

0x99f5,	// (0x0009eb5b) phob2_cc_data_pane_g1_ParamLimits

0x99f5,	// (0x0009eb5b) phob2_cc_data_pane_g1

0x9a01,	// (0x0009eb67) phob2_cc_data_pane_g2_ParamLimits

0x9a01,	// (0x0009eb67) phob2_cc_data_pane_g2

0x0001,

0xff33,	// (0x000a5099) phob2_cc_data_pane_g_ParamLimits

0xff33,	// (0x000a5099) phob2_cc_data_pane_g

0x9a0d,	// (0x0009eb73) phob2_cc_data_pane_t1_ParamLimits

0x9a0d,	// (0x0009eb73) phob2_cc_data_pane_t1

0x9a1f,	// (0x0009eb85) phob2_cc_data_pane_t2_ParamLimits

0x9a1f,	// (0x0009eb85) phob2_cc_data_pane_t2

0x9a31,	// (0x0009eb97) phob2_cc_data_pane_t3_ParamLimits

0x9a31,	// (0x0009eb97) phob2_cc_data_pane_t3

0x0002,

0xff38,	// (0x000a509e) phob2_cc_data_pane_t_ParamLimits

0xff38,	// (0x000a509e) phob2_cc_data_pane_t

0xe5d6,	// (0x000a373c) phob2_cc_list_pane_ParamLimits

0xe5d6,	// (0x000a373c) phob2_cc_list_pane

0xccdd,	// (0x000a1e43) scroll_pane_cp035_ParamLimits

0xccdd,	// (0x000a1e43) scroll_pane_cp035

0xe796,	// (0x000a38fc) bg_button_pane_cp033

0xe5e2,	// (0x000a3748) phob2_cc_button_pane_g1

0xe5ee,	// (0x000a3754) phob2_cc_button_pane_t1

0xe603,	// (0x000a3769) phob2_cc_button_pane_t2

0x0001,

0xff3f,	// (0x000a50a5) phob2_cc_button_pane_t

0x9a43,	// (0x0009eba9) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a43,	// (0x0009eba9) list_double_large_graphic_phob2_cc_pane

0x9a6a,	// (0x0009ebd0) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a6a,	// (0x0009ebd0) list_double_large_graphic_phob2_cc_pane_g1

0x9a7b,	// (0x0009ebe1) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a7b,	// (0x0009ebe1) list_double_large_graphic_phob2_cc_pane_g2

0x9a87,	// (0x0009ebed) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a87,	// (0x0009ebed) list_double_large_graphic_phob2_cc_pane_g3

0x9a93,	// (0x0009ebf9) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a93,	// (0x0009ebf9) list_double_large_graphic_phob2_cc_pane_g4

0x9a9f,	// (0x0009ec05) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9a9f,	// (0x0009ec05) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff44,	// (0x000a50aa) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff44,	// (0x000a50aa) list_double_large_graphic_phob2_cc_pane_g

0x9aab,	// (0x0009ec11) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9aab,	// (0x0009ec11) list_double_large_graphic_phob2_cc_pane_t1

0x9ad4,	// (0x0009ec3a) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ad4,	// (0x0009ec3a) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff4f,	// (0x000a50b5) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff4f,	// (0x000a50b5) list_double_large_graphic_phob2_cc_pane_t

0xe615,	// (0x000a377b) list_highlight_pane_cp025_ParamLimits

0xe615,	// (0x000a377b) list_highlight_pane_cp025

0xe796,	// (0x000a38fc) bg_button_pane_cp033_ParamLimits

0xe5e2,	// (0x000a3748) phob2_cc_button_pane_g1_ParamLimits

0xe5ee,	// (0x000a3754) phob2_cc_button_pane_t1_ParamLimits

0xe603,	// (0x000a3769) phob2_cc_button_pane_t2_ParamLimits

0xff3f,	// (0x000a50a5) phob2_cc_button_pane_t_ParamLimits

0x11dc,	// (0x00096342) popup_wgtman_window

0xca55,	// (0x000a1bbb) scroll_pane_cp038

0x94f0,	// (0x0009e656) wgtman_btn_pane_cp_01_ParamLimits

0x94f0,	// (0x0009e656) wgtman_btn_pane_cp_01

0xe623,	// (0x000a3789) wgtman_content_pane

0xe62c,	// (0x000a3792) wgtman_heading_pane

0xe6b0,	// (0x000a3816) bg_heading_pane_cp02

0xe635,	// (0x000a379b) wgtman_heading_pane_g1

0xe63d,	// (0x000a37a3) wgtman_heading_pane_t1

0xe64b,	// (0x000a37b1) scroll_pane_cp036

0xe653,	// (0x000a37b9) wgtman_list_pane

0xe65b,	// (0x000a37c1) wgtman_list_pane_t1_ParamLimits

0xe65b,	// (0x000a37c1) wgtman_list_pane_t1

0x63ea,	// (0x0009b550) cam4_grid_pane

0x7172,	// (0x0009c2d8) bg_button_pane_cp015_ParamLimits

0x7184,	// (0x0009c2ea) bg_button_pane_cp016_ParamLimits

0x7197,	// (0x0009c2fd) bg_button_pane_cp017_ParamLimits

0x71ed,	// (0x0009c353) popup_vitu2_query_window_g3_ParamLimits

0x71ed,	// (0x0009c353) popup_vitu2_query_window_g3

0x72a8,	// (0x0009c40e) popup_vitu2_query_window_t6_ParamLimits

0x72a8,	// (0x0009c40e) popup_vitu2_query_window_t6

0x72d3,	// (0x0009c439) popup_vitu2_query_window_t7_ParamLimits

0x72d3,	// (0x0009c439) popup_vitu2_query_window_t7

0xc8bd,	// (0x000a1a23) cam4_grid_pane_g1

0xc8c6,	// (0x000a1a2c) cam4_grid_pane_g2

0xe675,	// (0x000a37db) cam4_grid_pane_g3

0xe67e,	// (0x000a37e4) cam4_grid_pane_g4

0x0003,

0xff54,	// (0x000a50ba) cam4_grid_pane_g

0x2143,	// (0x000972a9) aid_placing_vt_slider_lsc_ParamLimits

0x248f,	// (0x000975f5) vidtel_button_pane_ParamLimits

0x248f,	// (0x000975f5) vidtel_button_pane

0xe6b0,	// (0x000a3816) bg_button_pane_cp034

0x9afd,	// (0x0009ec63) vidtel_button_pane_g1

0xe689,	// (0x000a37ef) vidtel_button_pane_t1

0xcb96,	// (0x000a1cfc) aid_size_vtel_slider_touch

0xccdd,	// (0x000a1e43) scroll_pane_cp039

0xd50d,	// (0x000a2673) ncim_query_button_pane_cp01_ParamLimits

0xd52c,	// (0x000a2692) ncimui_query_pane_g1_ParamLimits

0xe796,	// (0x000a38fc) input_focus_pane_cp012_ParamLimits

0xd551,	// (0x000a26b7) ncim_query_entry_pane_t1_ParamLimits

0xccdd,	// (0x000a1e43) scroll_pane_cp039_ParamLimits

0xa4d4,	// (0x0009f63a) navi_pane_bcale_mc_g1

0xa4dc,	// (0x0009f642) navi_pane_bcale_mc_t1

0xdac5,	// (0x000a2c2b) main_sp_fs_email_pane_g1

0xdad1,	// (0x000a2c37) main_sp_fs_email_pane_g2

0x0001,

0xfce5,	// (0x000a4e4b) main_sp_fs_email_pane_g

0xdf3d,	// (0x000a30a3) list_single_cale_mrui_row_pane_g3_ParamLimits

0xdf3d,	// (0x000a30a3) list_single_cale_mrui_row_pane_g3

0x9152,	// (0x0009e2b8) list_single_recal_day_pane_g5_event_pane

0xe11c,	// (0x000a3282) list_single_recal_day_pane_g7

0xe69f,	// (0x000a3805) list_recal_day_event_pane_cp01

0xe6a8,	// (0x000a380e) list_recal_vselct_arw_lo_pane_cp01

0xe7b2,	// (0x000a3918) list_recal_vselct_arw_up_pane_cp01

0xe7ba,	// (0x000a3920) list_recal_vselct_pane_cp01

0xcbb8,	// (0x000a1d1e) list_recal_day_event_pane_cp01_g1

0xe7c4,	// (0x000a392a) list_recal_day_event_pane_cp01_t1

0xe124,	// (0x000a328a) list_single_recal_day_pane_t1_ParamLimits

0xe136,	// (0x000a329c) list_single_recal_day_pane_t2_ParamLimits

0xfe42,	// (0x000a4fa8) list_single_recal_day_pane_t_ParamLimits

0xed9f,	// (0x000a3f05) bg_notes_pane_ParamLimits

0xee42,	// (0x000a3fa8) list_notes_pane_ParamLimits

0x1544,	// (0x000966aa) scroll_pane_cp06_ParamLimits

0xee64,	// (0x000a3fca) main_notes_pane_ParamLimits

0xe6b0,	// (0x000a3816) main_welc_pane

0x9b05,	// (0x0009ec6b) main_welc_body_pane_ParamLimits

0x9b05,	// (0x0009ec6b) main_welc_body_pane

0x9b1f,	// (0x0009ec85) main_welc_opti_pane_ParamLimits

0x9b1f,	// (0x0009ec85) main_welc_opti_pane

0x9b52,	// (0x0009ecb8) main_welc_pane_t1_ParamLimits

0x9b52,	// (0x0009ecb8) main_welc_pane_t1

0x9b6c,	// (0x0009ecd2) main_welc_body_row_pane_ParamLimits

0x9b6c,	// (0x0009ecd2) main_welc_body_row_pane

0xe7a4,	// (0x000a390a) main_welc_opti_row_pane_ParamLimits

0xe7a4,	// (0x000a390a) main_welc_opti_row_pane

0xe7d2,	// (0x000a3938) main_welc_opti_row_pane_g1

0x9b91,	// (0x0009ecf7) main_welc_opti_row_pane_t1

0xe7da,	// (0x000a3940) main_welc_body_row_pane_t1

0xe3b1,	// (0x000a3517) popup_notif_wgt_heading_pane

0xe3cb,	// (0x000a3531) aid_size_list_notif_wgt_del_ParamLimits

0xe3d8,	// (0x000a353e) list_notif_wgt_row_pane_g1_ParamLimits

0xe3e4,	// (0x000a354a) list_notif_wgt_row_pane_g2_ParamLimits

0xe3f8,	// (0x000a355e) list_notif_wgt_row_pane_g3_ParamLimits

0xfea9,	// (0x000a500f) list_notif_wgt_row_pane_g_ParamLimits

0xe405,	// (0x000a356b) list_notif_wgt_row_pane_t1_ParamLimits

0xe41b,	// (0x000a3581) list_notif_wgt_row_pane_t2_ParamLimits

0xe42d,	// (0x000a3593) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb0,	// (0x000a5016) list_notif_wgt_row_pane_t_ParamLimits

0x9582,	// (0x0009e6e8) listrow_wgtman_pane_g1_ParamLimits

0x958f,	// (0x0009e6f5) listrow_wgtman_pane_g2_ParamLimits

0xfed9,	// (0x000a503f) listrow_wgtman_pane_g_ParamLimits

0x95ad,	// (0x0009e713) listrow_wgtman_pane_t1_ParamLimits

0x95c5,	// (0x0009e72b) listrow_wgtman_pane_t2_ParamLimits

0xfede,	// (0x000a5044) listrow_wgtman_pane_t_ParamLimits

0x95eb,	// (0x0009e751) wait_bar_pane_cp09_ParamLimits

0xe6b0,	// (0x000a3816) bg_popup_heading_pane_cp02

0xe7e9,	// (0x000a394f) popup_notif_wgt_heading_pane_g1

0xe7f1,	// (0x000a3957) popup_notif_wgt_heading_pane_t1

0xe6b0,	// (0x000a3816) main_vids_pane

0xe6b0,	// (0x000a3816) vids_listscroll_pane

0x9ba0,	// (0x0009ed06) scroll_pane_cp040

0xe6b0,	// (0x000a3816) vids_list_pane

0x9bab,	// (0x0009ed11) vids_list_double_pane_ParamLimits

0x9bab,	// (0x0009ed11) vids_list_double_pane

0x9bc5,	// (0x0009ed2b) vids_list_double_pane_g1

0x9bce,	// (0x0009ed34) vids_list_double_pane_t1

0x9bde,	// (0x0009ed44) vids_list_double_pane_t2

0x0001,

0xff62,	// (0x000a50c8) vids_list_double_pane_t

0x4512,	// (0x00099678) main_ncimui_pane_ParamLimits

0x7f4f,	// (0x0009d0b5) main_ncimui_pane_g1_ParamLimits

0x7f5b,	// (0x0009d0c1) main_ncimui_pane_g2_ParamLimits

0x7f5b,	// (0x0009d0c1) main_ncimui_pane_g2

0x0001,

0xfbea,	// (0x000a4d50) main_ncimui_pane_g_ParamLimits

0xfbea,	// (0x000a4d50) main_ncimui_pane_g

0x9b38,	// (0x0009ec9e) main_welc_pane_g1_ParamLimits

0x9b38,	// (0x0009ec9e) main_welc_pane_g1

0x9b44,	// (0x0009ecaa) main_welc_pane_g2_ParamLimits

0x9b44,	// (0x0009ecaa) main_welc_pane_g2

0x0001,

0xff5d,	// (0x000a50c3) main_welc_pane_g_ParamLimits

0xff5d,	// (0x000a50c3) main_welc_pane_g

0xed9f,	// (0x000a3f05) listscroll_mce_pane_ParamLimits

0xa629,	// (0x0009f78f) wait_bar_pane_cp10

0xba2a,	// (0x000a0b90) main_cale_day_pane_ParamLimits

0xba2a,	// (0x000a0b90) main_cale_week_pane_ParamLimits

0xed9f,	// (0x000a3f05) main_messa_pane_ParamLimits

0x583c,	// (0x0009a9a2) main_clock2_btn_pane_ParamLimits

0x583c,	// (0x0009a9a2) main_clock2_btn_pane

0xc296,	// (0x000a13fc) main_clock2_btn_pane_cp01_ParamLimits

0xc296,	// (0x000a13fc) main_clock2_btn_pane_cp01

0xdec9,	// (0x000a302f) list_cale_mrui_pane_ParamLimits

0xe463,	// (0x000a35c9) main_cf0_pane_g2

0x0001,

0xfeb7,	// (0x000a501d) main_cf0_pane_g

0x977c,	// (0x0009e8e2) area_left_week_number_pane_ParamLimits

0x978f,	// (0x0009e8f5) area_top_day_name_pane_ParamLimits

0x979d,	// (0x0009e903) frame_month_view_pane_ParamLimits

0xe58b,	// (0x000a36f1) grid_month_view_pane_ParamLimits

0xe599,	// (0x000a36ff) frm_month_g1_ParamLimits

0x981b,	// (0x0009e981) frm_month_g2_ParamLimits

0x982c,	// (0x0009e992) frm_month_g3_ParamLimits

0x983d,	// (0x0009e9a3) frm_month_g4_ParamLimits

0x984e,	// (0x0009e9b4) frm_month_g5_ParamLimits

0x9861,	// (0x0009e9c7) frm_month_g6_ParamLimits

0x9874,	// (0x0009e9da) frm_month_g7_ParamLimits

0xe5a6,	// (0x000a370c) frm_month_g8_ParamLimits

0x9887,	// (0x0009e9ed) frm_month_g9_ParamLimits

0x9894,	// (0x0009e9fa) frm_month_g10_ParamLimits

0x98a1,	// (0x0009ea07) frm_month_g11_ParamLimits

0x98ae,	// (0x0009ea14) frm_month_g12_ParamLimits

0x98bb,	// (0x0009ea21) frm_month_g13_ParamLimits

0x98c8,	// (0x0009ea2e) frm_month_g14_ParamLimits

0x98d7,	// (0x0009ea3d) frm_month_g15_ParamLimits

0x98e6,	// (0x0009ea4c) frm_month_g16_ParamLimits

0xff08,	// (0x000a506e) frm_month_g_ParamLimits

0xe5b3,	// (0x000a3719) cell_top_day_name_pane_t1_ParamLimits

0x98f5,	// (0x0009ea5b) cell_area_left_week_number_pane_g1_ParamLimits

0x9904,	// (0x0009ea6a) cell_area_left_week_number_pane_t1_ParamLimits

0xc0b6,	// (0x000a121c) cell_month_view_pane_g1_ParamLimits

0x991a,	// (0x0009ea80) cell_month_view_pane_t1_ParamLimits

0xed97,	// (0x000a3efd) main_clock2_btn_pane_g1

0xe7ff,	// (0x000a3965) main_clock2_btn_pane_t1

0xe796,	// (0x000a38fc) listscroll_cmail_pane_ParamLimits

0xdac5,	// (0x000a2c2b) main_sp_fs_email_pane_g1_ParamLimits

0xdad1,	// (0x000a2c37) main_sp_fs_email_pane_g2_ParamLimits

0xfce5,	// (0x000a4e4b) main_sp_fs_email_pane_g_ParamLimits

0xe08c,	// (0x000a31f2) list_recal_day_pane_ParamLimits

0xe09d,	// (0x000a3203) mian_recal_day_pane_t1

0x893a,	// (0x0009daa0) list_single_dyc_row_text_pane_t4_ParamLimits

0x893a,	// (0x0009daa0) list_single_dyc_row_text_pane_t4

0x8971,	// (0x0009dad7) list_single_dyc_row_text_pane_t5_ParamLimits

0x8971,	// (0x0009dad7) list_single_dyc_row_text_pane_t5

0xdb77,	// (0x000a2cdd) list_single_dyc_row_text_pane_t6_ParamLimits

0xdb77,	// (0x000a2cdd) list_single_dyc_row_text_pane_t6

0x3325,	// (0x0009848b) aid_mgn_list_cale_time_pane

0x4512,	// (0x00099678) main_gallery2_pane_ParamLimits

0xc2ac,	// (0x000a1412) main_clock2_pane_cp01_t1

0xc2bc,	// (0x000a1422) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x000a492a) main_clock2_pane_cp01_t

0x1994,	// (0x00096afa) cale_week_scroll_pane_g16_ParamLimits

0x1994,	// (0x00096afa) cale_week_scroll_pane_g16

0xf029,	// (0x000a418f) vorec_slider_pane

0xe689,	// (0x000a37ef) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_php_apps_qhd_prt_tch_Large

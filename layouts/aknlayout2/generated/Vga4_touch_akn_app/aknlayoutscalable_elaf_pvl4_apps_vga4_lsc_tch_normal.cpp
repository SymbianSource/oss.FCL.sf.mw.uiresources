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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000dc76 };

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
0x0ad9,	// (0x0000e74f) Screen

0x0ae5,	// (0x0000e75b) application_window

0x0b21,	// (0x0000e797) area_bottom_pane_ParamLimits

0x0b21,	// (0x0000e797) area_bottom_pane

0x0b5a,	// (0x0000e7d0) area_top_pane_ParamLimits

0x0b5a,	// (0x0000e7d0) area_top_pane

0x93b5,	// (0x0001702b) call_video_uplink_pane_ParamLimits

0x93b5,	// (0x0001702b) call_video_uplink_pane

0x0bcf,	// (0x0000e845) main_pane_ParamLimits

0x0bcf,	// (0x0000e845) main_pane

0xbd36,	// (0x000199ac) context_pane

0x3e0f,	// (0x00011a85) navi_pane

0x3e3f,	// (0x00011ab5) popup_cale_events_window_ParamLimits

0x3e3f,	// (0x00011ab5) popup_cale_events_window

0xbd49,	// (0x000199bf) popup_mup_playback_window

0x3e57,	// (0x00011acd) signal_pane

0x9b3c,	// (0x000177b2) main_browser_pane

0xa878,	// (0x000184ee) main_burst_pane

0x3b11,	// (0x00011787) main_calc_pane

0xa878,	// (0x000184ee) main_cale_day_pane

0x9b3c,	// (0x000177b2) main_cale_month_pane

0xa878,	// (0x000184ee) main_cale_week_pane

0xa878,	// (0x000184ee) main_call_pane

0x97f4,	// (0x0001746a) main_call_poc_pane

0xa878,	// (0x000184ee) main_camera_pane

0xa878,	// (0x000184ee) main_chi_dic_pane

0xa71a,	// (0x00018390) main_clock_pane

0x97f4,	// (0x0001746a) main_fmradio_pane

0xa878,	// (0x000184ee) main_graph_messa_pane

0x97f4,	// (0x0001746a) main_help_pane

0x9b3c,	// (0x000177b2) main_im_pane

0x9a4f,	// (0x000176c5) main_image_pane_ParamLimits

0x9a4f,	// (0x000176c5) main_image_pane

0x97f4,	// (0x0001746a) main_location2_pane

0xa878,	// (0x000184ee) main_location_pane

0x97f4,	// (0x0001746a) main_messa_pane

0x97f4,	// (0x0001746a) main_mp2_pane

0xa878,	// (0x000184ee) main_mp_pane

0x97f4,	// (0x0001746a) main_msg_pane

0x97f4,	// (0x0001746a) main_mup_eq_pane

0x97f4,	// (0x0001746a) main_mup_pane

0xa878,	// (0x000184ee) main_notes_pane

0x97f4,	// (0x0001746a) main_pec_pane

0x97f4,	// (0x0001746a) main_phob_pane

0x97f4,	// (0x0001746a) main_pinb_pane

0x97f4,	// (0x0001746a) main_postcard_pane

0x97f4,	// (0x0001746a) main_qdial_pane

0xa878,	// (0x000184ee) main_skin_pane

0x97f4,	// (0x0001746a) main_smil2_pane

0xa878,	// (0x000184ee) main_smil_pane

0xa878,	// (0x000184ee) main_video_pane

0xa878,	// (0x000184ee) main_video_tele_pane

0x9a4f,	// (0x000176c5) main_viewer_pane_ParamLimits

0x9a4f,	// (0x000176c5) main_viewer_pane

0xa878,	// (0x000184ee) main_vorec_pane

0x3b67,	// (0x000117dd) popup_blid_sat_info_window_ParamLimits

0x3b67,	// (0x000117dd) popup_blid_sat_info_window

0x3bcb,	// (0x00011841) popup_dyc_status_message_window_ParamLimits

0x3bcb,	// (0x00011841) popup_dyc_status_message_window

0x3be5,	// (0x0001185b) popup_grid_large_graphic_window_ParamLimits

0x3be5,	// (0x0001185b) popup_grid_large_graphic_window

0x3ca7,	// (0x0001191d) popup_loc_request_window_ParamLimits

0x3ca7,	// (0x0001191d) popup_loc_request_window

0x3de3,	// (0x00011a59) popup_wml_address_window_ParamLimits

0x3de3,	// (0x00011a59) popup_wml_address_window

0x394f,	// (0x000115c5) call_muted_g1

0x35e0,	// (0x00011256) popup_call_audio_conf_window_ParamLimits

0x35e0,	// (0x00011256) popup_call_audio_conf_window

0x395f,	// (0x000115d5) popup_call_audio_first_window_ParamLimits

0x395f,	// (0x000115d5) popup_call_audio_first_window

0x39d5,	// (0x0001164b) popup_call_audio_in_window_ParamLimits

0x39d5,	// (0x0001164b) popup_call_audio_in_window

0x3a11,	// (0x00011687) popup_call_audio_out_window_ParamLimits

0x3a11,	// (0x00011687) popup_call_audio_out_window

0x3a4b,	// (0x000116c1) popup_call_audio_second_window_ParamLimits

0x3a4b,	// (0x000116c1) popup_call_audio_second_window

0x3aa1,	// (0x00011717) popup_call_audio_wait_window_ParamLimits

0x3aa1,	// (0x00011717) popup_call_audio_wait_window

0x3ad6,	// (0x0001174c) popup_number_entry_window_ParamLimits

0x3ad6,	// (0x0001174c) popup_number_entry_window

0x93e1,	// (0x00017057) bg_popup_call_pane_cp05_ParamLimits

0x93e1,	// (0x00017057) bg_popup_call_pane_cp05

0x9401,	// (0x00017077) popup_number_entry_window_t1

0x9414,	// (0x0001708a) popup_number_entry_window_t2

0x9426,	// (0x0001709c) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001cd62) popup_number_entry_window_t

0x9438,	// (0x000170ae) text_title_cp2

0x944b,	// (0x000170c1) bg_popup_call_pane_cp_ParamLimits

0x944b,	// (0x000170c1) bg_popup_call_pane_cp

0x9459,	// (0x000170cf) call_thumbnail_pane

0x9461,	// (0x000170d7) popup_call_audio_in_window_g1_ParamLimits

0x9461,	// (0x000170d7) popup_call_audio_in_window_g1

0x946d,	// (0x000170e3) popup_call_audio_in_window_g2_ParamLimits

0x946d,	// (0x000170e3) popup_call_audio_in_window_g2

0x9479,	// (0x000170ef) popup_call_audio_in_window_g3_ParamLimits

0x9479,	// (0x000170ef) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001cd6b) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001cd6b) popup_call_audio_in_window_g

0x9485,	// (0x000170fb) popup_call_audio_in_window_t1_ParamLimits

0x9485,	// (0x000170fb) popup_call_audio_in_window_t1

0x94a1,	// (0x00017117) popup_call_audio_in_window_t2_ParamLimits

0x94a1,	// (0x00017117) popup_call_audio_in_window_t2

0x94bd,	// (0x00017133) popup_call_audio_in_window_t3_ParamLimits

0x94bd,	// (0x00017133) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001cd72) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001cd72) popup_call_audio_in_window_t

0x944b,	// (0x000170c1) bg_popup_call_pane_cp01_ParamLimits

0x944b,	// (0x000170c1) bg_popup_call_pane_cp01

0x9459,	// (0x000170cf) call_thumbnail_pane_cp02

0x94d0,	// (0x00017146) call_type_pane_cp022

0x94d8,	// (0x0001714e) popup_call_audio_out_window_g1_ParamLimits

0x94d8,	// (0x0001714e) popup_call_audio_out_window_g1

0x94ea,	// (0x00017160) popup_call_audio_out_window_g2_ParamLimits

0x94ea,	// (0x00017160) popup_call_audio_out_window_g2

0x94f6,	// (0x0001716c) popup_call_audio_out_window_g3_ParamLimits

0x94f6,	// (0x0001716c) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001cd79) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001cd79) popup_call_audio_out_window_g

0x9508,	// (0x0001717e) popup_call_audio_out_window_t1_ParamLimits

0x9508,	// (0x0001717e) popup_call_audio_out_window_t1

0x9520,	// (0x00017196) popup_call_audio_out_window_t2_ParamLimits

0x9520,	// (0x00017196) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001cd80) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001cd80) popup_call_audio_out_window_t

0x9535,	// (0x000171ab) bg_popup_call_pane_ParamLimits

0x9535,	// (0x000171ab) bg_popup_call_pane

0x0d8e,	// (0x0000ea04) call_thumbnail_pane_cp_ParamLimits

0x0d8e,	// (0x0000ea04) call_thumbnail_pane_cp

0x95b9,	// (0x0001722f) call_type_pane_cp01_ParamLimits

0x95b9,	// (0x0001722f) call_type_pane_cp01

0x95fd,	// (0x00017273) popup_call_audio_first_window_g1_ParamLimits

0x95fd,	// (0x00017273) popup_call_audio_first_window_g1

0x9649,	// (0x000172bf) popup_call_audio_first_window_g2_ParamLimits

0x9649,	// (0x000172bf) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001cd85) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001cd85) popup_call_audio_first_window_g

0x968d,	// (0x00017303) popup_call_audio_first_window_t1_ParamLimits

0x968d,	// (0x00017303) popup_call_audio_first_window_t1

0x9739,	// (0x000173af) popup_call_audio_first_window_t4_ParamLimits

0x9739,	// (0x000173af) popup_call_audio_first_window_t4

0x97c5,	// (0x0001743b) popup_call_audio_first_window_t5_ParamLimits

0x97c5,	// (0x0001743b) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001cd8a) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001cd8a) popup_call_audio_first_window_t

0x97f4,	// (0x0001746a) bg_popup_call_pane_cp02

0x97fe,	// (0x00017474) call_type_pane_cp023

0x9806,	// (0x0001747c) popup_call_audio_wait_window_g1

0x980e,	// (0x00017484) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001cd91) popup_call_audio_wait_window_g

0x9816,	// (0x0001748c) popup_call_audio_wait_window_t3

0x9824,	// (0x0001749a) bg_popup_call_pane_cp03_ParamLimits

0x9824,	// (0x0001749a) bg_popup_call_pane_cp03

0x9884,	// (0x000174fa) call_thumbnail_pane_cp011_ParamLimits

0x9884,	// (0x000174fa) call_thumbnail_pane_cp011

0x9890,	// (0x00017506) call_type_pane_cp034_ParamLimits

0x9890,	// (0x00017506) call_type_pane_cp034

0x98cc,	// (0x00017542) popup_call_audio_second_window_g1_ParamLimits

0x98cc,	// (0x00017542) popup_call_audio_second_window_g1

0x9908,	// (0x0001757e) popup_call_audio_second_window_g2_ParamLimits

0x9908,	// (0x0001757e) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001cd96) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001cd96) popup_call_audio_second_window_g

0x9944,	// (0x000175ba) popup_call_audio_second_window_t1_ParamLimits

0x9944,	// (0x000175ba) popup_call_audio_second_window_t1

0x99c5,	// (0x0001763b) popup_call_audio_second_window_t2_ParamLimits

0x99c5,	// (0x0001763b) popup_call_audio_second_window_t2

0x99fb,	// (0x00017671) popup_call_audio_second_window_t3_ParamLimits

0x99fb,	// (0x00017671) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001cd9b) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001cd9b) popup_call_audio_second_window_t

0x97f4,	// (0x0001746a) bg_popup_call_pane_cp04

0x9a31,	// (0x000176a7) list_conf_pane

0x9a39,	// (0x000176af) popup_call_audio_conf_window_t1

0x9a47,	// (0x000176bd) call_thumbnail_pane_g1

0x9a4f,	// (0x000176c5) bg_pinb_pane_ParamLimits

0x9a4f,	// (0x000176c5) bg_pinb_pane

0x9a5d,	// (0x000176d3) find_pinb_pane

0x9a66,	// (0x000176dc) listscroll_pinb_pane_ParamLimits

0x9a66,	// (0x000176dc) listscroll_pinb_pane

0x9a75,	// (0x000176eb) pinb_bg_pane_g1

0x0db2,	// (0x0000ea28) pinb_bg_pane_g2

0x0dbe,	// (0x0000ea34) pinb_bg_pane_g3

0x0dca,	// (0x0000ea40) pinb_bg_pane_g4

0x0dd6,	// (0x0000ea4c) pinb_bg_pane_g5

0x0de2,	// (0x0000ea58) pinb_bg_pane_g6

0x0ded,	// (0x0000ea63) pinb_bg_pane_g7

0x0df8,	// (0x0000ea6e) pinb_bg_pane_g8

0x0e03,	// (0x0000ea79) pinb_bg_pane_g9

0x0e0d,	// (0x0000ea83) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001cda2) pinb_bg_pane_g

0x0e2a,	// (0x0000eaa0) grid_pinb_pane

0x0e35,	// (0x0000eaab) list_pinb_pane

0x0e40,	// (0x0000eab6) scroll_pane_cp01_ParamLimits

0x0e40,	// (0x0000eab6) scroll_pane_cp01

0x9a7f,	// (0x000176f5) find_pinb_pane_g1_ParamLimits

0x9a7f,	// (0x000176f5) find_pinb_pane_g1

0x9a97,	// (0x0001770d) find_pinb_pane_t1

0x9aa9,	// (0x0001771f) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001cdbc) find_pinb_pane_t

0x9abe,	// (0x00017734) input_focus_pane_cp01_ParamLimits

0x9abe,	// (0x00017734) input_focus_pane_cp01

0x0e52,	// (0x0000eac8) cell_pinb_pane_ParamLimits

0x0e52,	// (0x0000eac8) cell_pinb_pane

0x0e74,	// (0x0000eaea) cell_pinb_pane_g1_ParamLimits

0x0e74,	// (0x0000eaea) cell_pinb_pane_g1

0x0e88,	// (0x0000eafe) cell_pinb_pane_g2_ParamLimits

0x0e88,	// (0x0000eafe) cell_pinb_pane_g2

0x9aca,	// (0x00017740) cell_pinb_pane_g3_ParamLimits

0x9aca,	// (0x00017740) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001cdc1) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001cdc1) cell_pinb_pane_g

0x97f4,	// (0x0001746a) grid_highlight_pane_cp01

0x0e94,	// (0x0000eb0a) list_pinb_item_pane_ParamLimits

0x0e94,	// (0x0000eb0a) list_pinb_item_pane

0x97f4,	// (0x0001746a) list_highlight_pane_cp02

0x0ea7,	// (0x0000eb1d) list_pinb_item_pane_g1_ParamLimits

0x0ea7,	// (0x0000eb1d) list_pinb_item_pane_g1

0x0eb4,	// (0x0000eb2a) list_pinb_item_pane_g2_ParamLimits

0x0eb4,	// (0x0000eb2a) list_pinb_item_pane_g2

0x0ec0,	// (0x0000eb36) list_pinb_item_pane_g3_ParamLimits

0x0ec0,	// (0x0000eb36) list_pinb_item_pane_g3

0x0ed1,	// (0x0000eb47) list_pinb_item_pane_g4_ParamLimits

0x0ed1,	// (0x0000eb47) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001cdc8) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001cdc8) list_pinb_item_pane_g

0x0edd,	// (0x0000eb53) list_pinb_item_pane_t1_ParamLimits

0x0edd,	// (0x0000eb53) list_pinb_item_pane_t1

0x0f12,	// (0x0000eb88) calc_display_pane

0x0f38,	// (0x0000ebae) calc_paper_pane

0x0f5b,	// (0x0000ebd1) grid_calc_pane

0x97f4,	// (0x0001746a) bg_list_pane_cp01

0x0f89,	// (0x0000ebff) clock_g1

0x0f91,	// (0x0000ec07) clock_g2

0x0001,

0xf15b,	// (0x0001cdd1) clock_g

0x0f99,	// (0x0000ec0f) clock_t1_ParamLimits

0x0f99,	// (0x0000ec0f) clock_t1

0x0fae,	// (0x0000ec24) clock_t2_ParamLimits

0x0fae,	// (0x0000ec24) clock_t2

0x0fc0,	// (0x0000ec36) clock_t3_ParamLimits

0x0fc0,	// (0x0000ec36) clock_t3

0x0fd2,	// (0x0000ec48) clock_t4_ParamLimits

0x0fd2,	// (0x0000ec48) clock_t4

0x0fe4,	// (0x0000ec5a) clock_t5_ParamLimits

0x0fe4,	// (0x0000ec5a) clock_t5

0x0ff9,	// (0x0000ec6f) clock_t6_ParamLimits

0x0ff9,	// (0x0000ec6f) clock_t6

0x100b,	// (0x0000ec81) clock_t7_ParamLimits

0x100b,	// (0x0000ec81) clock_t7

0x101d,	// (0x0000ec93) clock_t8_ParamLimits

0x101d,	// (0x0000ec93) clock_t8

0x1031,	// (0x0000eca7) clock_t9_ParamLimits

0x1031,	// (0x0000eca7) clock_t9

0x0008,

0xf160,	// (0x0001cdd6) clock_t_ParamLimits

0xf160,	// (0x0001cdd6) clock_t

0x9ade,	// (0x00017754) popup_clock_analogue_window_cp02

0x9ade,	// (0x00017754) popup_clock_digital_window_cp01

0x9ae6,	// (0x0001775c) listscroll_help_pane

0x97f4,	// (0x0001746a) phob_pre_status_pane

0x9af0,	// (0x00017766) grid_qdial_pane

0x97f4,	// (0x0001746a) listscroll_mce_pane

0x9afa,	// (0x00017770) bg_notes_pane

0x9b04,	// (0x0001777a) list_notes_pane

0x1047,	// (0x0000ecbd) scroll_pane_cp06

0x9b0e,	// (0x00017784) bg_calc_paper_pane

0x9b22,	// (0x00017798) list_calc_pane

0x9b3c,	// (0x000177b2) bg_calc_display_pane

0x1052,	// (0x0000ecc8) calc_display_pane_t1

0x1064,	// (0x0000ecda) calc_display_pane_t2

0x9b48,	// (0x000177be) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001cde9) calc_display_pane_t

0x1076,	// (0x0000ecec) cell_calc_pane_ParamLimits

0x1076,	// (0x0000ecec) cell_calc_pane

0x9b5a,	// (0x000177d0) bg_calc_paper_pane_g1

0x9b66,	// (0x000177dc) bg_calc_paper_pane_g2

0x9b72,	// (0x000177e8) bg_calc_paper_pane_g3

0x9b7e,	// (0x000177f4) bg_calc_paper_pane_g4

0x9b8a,	// (0x00017800) bg_calc_paper_pane_g5

0x10b1,	// (0x0000ed27) bg_calc_paper_pane_g6

0x10c4,	// (0x0000ed3a) bg_calc_paper_pane_g7

0x10d7,	// (0x0000ed4d) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001cdf0) bg_calc_paper_pane_g

0x10e8,	// (0x0000ed5e) calc_bg_paper_pane_g9

0x10f9,	// (0x0000ed6f) list_calc_item_pane_ParamLimits

0x10f9,	// (0x0000ed6f) list_calc_item_pane

0x9b96,	// (0x0001780c) list_calc_item_pane_g1

0x9ba3,	// (0x00017819) list_calc_item_pane_t1_ParamLimits

0x9ba3,	// (0x00017819) list_calc_item_pane_t1

0x110d,	// (0x0000ed83) list_calc_item_pane_t2_ParamLimits

0x110d,	// (0x0000ed83) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001ce01) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001ce01) list_calc_item_pane_t

0x9bb5,	// (0x0001782b) cell_calc_pane_g1

0x9bbf,	// (0x00017835) grid_highlight_pane_cp02

0x9be1,	// (0x00017857) bg_calc_display_pane_g1

0x9bea,	// (0x00017860) bg_calc_display_pane_g2

0x9bf4,	// (0x0001786a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001ce0b) bg_calc_display_pane_g

0x113f,	// (0x0000edb5) cell_qdial_pane_ParamLimits

0x113f,	// (0x0000edb5) cell_qdial_pane

0x1155,	// (0x0000edcb) cell_qdial_pane_g1_ParamLimits

0x1155,	// (0x0000edcb) cell_qdial_pane_g1

0x116b,	// (0x0000ede1) cell_qdial_pane_g2_ParamLimits

0x116b,	// (0x0000ede1) cell_qdial_pane_g2

0x9bfd,	// (0x00017873) cell_qdial_pane_g3_ParamLimits

0x9bfd,	// (0x00017873) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001ce12) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001ce12) cell_qdial_pane_g

0x1191,	// (0x0000ee07) cell_qdial_pane_t1_ParamLimits

0x1191,	// (0x0000ee07) cell_qdial_pane_t1

0x11a9,	// (0x0000ee1f) cell_qdial_pane_t2_ParamLimits

0x11a9,	// (0x0000ee1f) cell_qdial_pane_t2

0x11bc,	// (0x0000ee32) cell_qdial_pane_t3_ParamLimits

0x11bc,	// (0x0000ee32) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001ce1b) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001ce1b) cell_qdial_pane_t

0x97f4,	// (0x0001746a) grid_highlight_pane_cp04

0x9c09,	// (0x0001787f) thumbnail_qdial_pane_ParamLimits

0x9c09,	// (0x0001787f) thumbnail_qdial_pane

0x9c65,	// (0x000178db) list_help_pane

0x9c6e,	// (0x000178e4) scroll_pane_cp02

0x11cf,	// (0x0000ee45) help_list_pane_t1_ParamLimits

0x11cf,	// (0x0000ee45) help_list_pane_t1

0x9c77,	// (0x000178ed) bg_notes_pane_g2

0x9c7f,	// (0x000178f5) bg_notes_pane_g3

0x9c87,	// (0x000178fd) notes_bg_pane_g1

0x9c8f,	// (0x00017905) notes_bg_pane_g4

0x9c97,	// (0x0001790d) notes_bg_pane_g5

0x9c9f,	// (0x00017915) notes_bg_pane_g6

0x9ca7,	// (0x0001791d) notes_bg_pane_g7

0x9caf,	// (0x00017925) notes_bg_pane_g8

0x9cb7,	// (0x0001792d) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001ce39) notes_bg_pane_g

0x11f3,	// (0x0000ee69) list_notes_text_pane_ParamLimits

0x11f3,	// (0x0000ee69) list_notes_text_pane

0x9cbf,	// (0x00017935) list_notes_text_pane_g1

0x9cc8,	// (0x0001793e) list_notes_text_pane_t1

0x9b3c,	// (0x000177b2) listscroll_cale_week_pane

0x1227,	// (0x0000ee9d) bg_cale_heading_pane

0x9ce7,	// (0x0001795d) bg_cale_pane_cp01

0x1243,	// (0x0000eeb9) cale_week_corner_pane

0x1259,	// (0x0000eecf) cale_week_day_heading_pane

0x1275,	// (0x0000eeeb) cale_week_scroll_pane_g1

0x128e,	// (0x0000ef04) cale_week_scroll_pane_g2

0x129f,	// (0x0000ef15) cale_week_scroll_pane_g3

0x12b0,	// (0x0000ef26) cale_week_scroll_pane_g4

0x12c1,	// (0x0000ef37) cale_week_scroll_pane_g5

0x12d2,	// (0x0000ef48) cale_week_scroll_pane_g6

0x12e3,	// (0x0000ef59) cale_week_scroll_pane_g7

0x12f4,	// (0x0000ef6a) cale_week_scroll_pane_g8

0x1305,	// (0x0000ef7b) cale_week_scroll_pane_g9

0x1316,	// (0x0000ef8c) cale_week_scroll_pane_g10

0x1327,	// (0x0000ef9d) cale_week_scroll_pane_g11

0x1338,	// (0x0000efae) cale_week_scroll_pane_g12

0x1349,	// (0x0000efbf) cale_week_scroll_pane_g13

0x1362,	// (0x0000efd8) cale_week_scroll_pane_g14

0x137b,	// (0x0000eff1) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001ce48) cale_week_scroll_pane_g

0x1394,	// (0x0000f00a) cale_week_time_pane

0x13a5,	// (0x0000f01b) grid_cale_week_pane

0x13c0,	// (0x0000f036) scroll_pane_cp08

0x13d8,	// (0x0000f04e) cell_cale_week_pane_ParamLimits

0x13d8,	// (0x0000f04e) cell_cale_week_pane

0x1420,	// (0x0000f096) cale_week_day_heading_pane_t1

0x1434,	// (0x0000f0aa) cale_week_day_heading_pane_t2

0x1448,	// (0x0000f0be) cale_week_day_heading_pane_t3

0x145c,	// (0x0000f0d2) cale_week_day_heading_pane_t4

0x1470,	// (0x0000f0e6) cale_week_day_heading_pane_t5

0x1484,	// (0x0000f0fa) cale_week_day_heading_pane_t6

0x1498,	// (0x0000f10e) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001ce67) cale_week_day_heading_pane_t

0x9d12,	// (0x00017988) bg_cale_side_pane

0x14ac,	// (0x0000f122) cale_week_time_pane_t1

0x14c4,	// (0x0000f13a) cale_week_time_pane_t2

0x14dc,	// (0x0000f152) cale_week_time_pane_t3

0x14f4,	// (0x0000f16a) cale_week_time_pane_t4

0x150c,	// (0x0000f182) cale_week_time_pane_t5

0x1524,	// (0x0000f19a) cale_week_time_pane_t6

0x153c,	// (0x0000f1b2) cale_week_time_pane_t7

0x1558,	// (0x0000f1ce) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001ce76) cale_week_time_pane_t

0x1578,	// (0x0000f1ee) cell_cale_week_pane_g2

0x1589,	// (0x0000f1ff) cell_cale_week_pane_g3_ParamLimits

0x1589,	// (0x0000f1ff) cell_cale_week_pane_g3

0x9d20,	// (0x00017996) grid_highlight_pane_cp07

0x9d28,	// (0x0001799e) listscroll_gms_pane

0x9d32,	// (0x000179a8) grid_gms_pane

0x9d3b,	// (0x000179b1) listscroll_gms_pane_g1

0x9d43,	// (0x000179b9) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001ce87) listscroll_gms_pane_g

0x15a1,	// (0x0000f217) scroll_pane_cp010

0x15ac,	// (0x0000f222) cell_gms_pane_ParamLimits

0x15ac,	// (0x0000f222) cell_gms_pane

0x15c6,	// (0x0000f23c) cell_gms_pane_g1

0x9d4b,	// (0x000179c1) cell_gms_pane_g2

0x9d53,	// (0x000179c9) cell_gms_pane_g3

0x9d5c,	// (0x000179d2) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001ce8c) cell_gms_pane_g

0x9d65,	// (0x000179db) grid_highlight_pane_cp09

0x38f7,	// (0x0001156d) phob_pre_status_pane_g1

0x38ff,	// (0x00011575) phob_pre_status_pane_g2

0x3907,	// (0x0001157d) phob_pre_status_pane_g3

0x390f,	// (0x00011585) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0001d27b) phob_pre_status_pane_g

0x391f,	// (0x00011595) phob_pre_status_pane_t1

0x392f,	// (0x000115a5) phob_pre_status_pane_t2

0x393f,	// (0x000115b5) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0001d286) phob_pre_status_pane_t

0x97f4,	// (0x0001746a) bg_list_pane_cp05

0x15d6,	// (0x0000f24c) grid_vorec_pane

0x9d6d,	// (0x000179e3) vorec_t1

0x9d7b,	// (0x000179f1) vorec_t2

0x9d89,	// (0x000179ff) vorec_t3

0x9d97,	// (0x00017a0d) vorec_t4

0x9da5,	// (0x00017a1b) vorec_t5

0x9db3,	// (0x00017a29) vorec_t6

0x0006,

0xf21f,	// (0x0001ce95) vorec_t

0x9dcf,	// (0x00017a45) wait_bar_pane_cp01

0x15e0,	// (0x0000f256) cell_vorec_pane_ParamLimits

0x15e0,	// (0x0000f256) cell_vorec_pane

0x9dd7,	// (0x00017a4d) cell_vorec_pane_g1

0x97f4,	// (0x0001746a) grid_highlight_pane_cp05

0x160b,	// (0x0000f281) cams_zoom_pane

0x161a,	// (0x0000f290) image_vga_pane

0x1634,	// (0x0000f2aa) main_camera_pane_g1

0x1646,	// (0x0000f2bc) main_camera_pane_g2

0x1656,	// (0x0000f2cc) main_camera_pane_g3

0x166a,	// (0x0000f2e0) main_camera_pane_g4

0x167e,	// (0x0000f2f4) main_camera_pane_g5

0x1692,	// (0x0000f308) main_camera_pane_g6

0x16a6,	// (0x0000f31c) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001cea4) main_camera_pane_g

0x16ba,	// (0x0000f330) main_camera_pane_t1

0x16d0,	// (0x0000f346) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001ceb5) main_camera_pane_t

0x170e,	// (0x0000f384) cams_zoom_pane_cp_ParamLimits

0x170e,	// (0x0000f384) cams_zoom_pane_cp

0x1736,	// (0x0000f3ac) image_cif_pane_ParamLimits

0x1736,	// (0x0000f3ac) image_cif_pane

0x1771,	// (0x0000f3e7) image_subqcif_pane

0x177b,	// (0x0000f3f1) main_video_pane_g1_ParamLimits

0x177b,	// (0x0000f3f1) main_video_pane_g1

0x179f,	// (0x0000f415) main_video_pane_g2_ParamLimits

0x179f,	// (0x0000f415) main_video_pane_g2

0x17d5,	// (0x0000f44b) main_video_pane_g3_ParamLimits

0x17d5,	// (0x0000f44b) main_video_pane_g3

0x1803,	// (0x0000f479) main_video_pane_g4_ParamLimits

0x1803,	// (0x0000f479) main_video_pane_g4

0x1831,	// (0x0000f4a7) main_video_pane_g5_ParamLimits

0x1831,	// (0x0000f4a7) main_video_pane_g5

0x9ded,	// (0x00017a63) main_video_pane_g6_ParamLimits

0x9ded,	// (0x00017a63) main_video_pane_g6

0x0006,

0xf244,	// (0x0001ceba) main_video_pane_g_ParamLimits

0xf244,	// (0x0001ceba) main_video_pane_g

0x185a,	// (0x0000f4d0) main_video_pane_t1_ParamLimits

0x185a,	// (0x0000f4d0) main_video_pane_t1

0x9e07,	// (0x00017a7d) cams_zoom_pane_g1

0x9e10,	// (0x00017a86) cams_zoom_pane_g2

0x9e19,	// (0x00017a8f) cams_zoom_pane_g3

0x9e22,	// (0x00017a98) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001cec9) cams_zoom_pane_g

0x18b7,	// (0x0000f52d) grid_cams_pane

0x18d1,	// (0x0000f547) linegrid_cams_pane

0x18e5,	// (0x0000f55b) cell_cams_pane_ParamLimits

0x18e5,	// (0x0000f55b) cell_cams_pane

0x9e2b,	// (0x00017aa1) cams_burst_image_pane

0x9e33,	// (0x00017aa9) cell_cams_pane_g1

0x97f4,	// (0x0001746a) grid_highlight_pane_cp03

0x9bb5,	// (0x0001782b) mp_bg_pane_g1

0x97f4,	// (0x0001746a) bg_list_pane_cp03

0xbc08,	// (0x0001987e) bg_mp_pane

0xbc10,	// (0x00019886) grid_mp_pane

0xbc18,	// (0x0001988e) media_player_g1

0xbc22,	// (0x00019898) media_player_t1

0xbc30,	// (0x000198a6) media_player_t2

0xbc3e,	// (0x000198b4) media_player_t3

0xbc4c,	// (0x000198c2) media_player_t4

0xbc5a,	// (0x000198d0) media_player_t5

0xbc68,	// (0x000198de) media_player_t6

0xbc76,	// (0x000198ec) media_player_t7

0x0006,

0xf5ef,	// (0x0001d265) media_player_t

0xbc84,	// (0x000198fa) wait_bar_pane_cp02

0xf5d4,	// (0x0001d24a) main_usb_pane_t

0x38ee,	// (0x00011564) cell_mp_pane

0x9bb5,	// (0x0001782b) cell_mp_pane_g1

0x97f4,	// (0x0001746a) grid_highlight_pane_cp06

0x9ef9,	// (0x00017b6f) grid_skin_colour_pane

0x9f01,	// (0x00017b77) list_highlight_pane_cp03

0x1959,	// (0x0000f5cf) skin_g1

0x9f09,	// (0x00017b7f) skin_t1

0x9f18,	// (0x00017b8e) skin_t2

0x0001,

0xf288,	// (0x0001cefe) skin_t

0x1963,	// (0x0000f5d9) cell_skin_colour_pane_ParamLimits

0x1963,	// (0x0000f5d9) cell_skin_colour_pane

0x9f26,	// (0x00017b9c) cell_skin_colour_pane_g1

0x19d6,	// (0x0000f64c) call_video_g1_ParamLimits

0x19d6,	// (0x0000f64c) call_video_g1

0x19f2,	// (0x0000f668) call_video_g2_ParamLimits

0x19f2,	// (0x0000f668) call_video_g2

0x0001,

0xf28d,	// (0x0001cf03) call_video_g_ParamLimits

0xf28d,	// (0x0001cf03) call_video_g

0x1a3a,	// (0x0000f6b0) call_video_uplink_pane_cp1_ParamLimits

0x1a3a,	// (0x0000f6b0) call_video_uplink_pane_cp1

0x9f38,	// (0x00017bae) call_video_uplink_pane_cp2

0x1adb,	// (0x0000f751) video_down_crop_pane_ParamLimits

0x1adb,	// (0x0000f751) video_down_crop_pane

0x1bc4,	// (0x0000f83a) video_down_pane_ParamLimits

0x1bc4,	// (0x0000f83a) video_down_pane

0x9f40,	// (0x00017bb6) video_down_subqcif_pane_ParamLimits

0x9f40,	// (0x00017bb6) video_down_subqcif_pane

0x9f5a,	// (0x00017bd0) video_down_subqcif_pane_cp_ParamLimits

0x9f5a,	// (0x00017bd0) video_down_subqcif_pane_cp

0x9f80,	// (0x00017bf6) im_reading_pane_ParamLimits

0x9f80,	// (0x00017bf6) im_reading_pane

0x1ccd,	// (0x0000f943) im_writing_pane_ParamLimits

0x1ccd,	// (0x0000f943) im_writing_pane

0x1ceb,	// (0x0000f961) im_reading_pane_t1

0x9f9a,	// (0x00017c10) list_im_pane

0x9fab,	// (0x00017c21) scroll_pane_cp07

0x1d2a,	// (0x0000f9a0) im_writing_pane_t1_ParamLimits

0x1d2a,	// (0x0000f9a0) im_writing_pane_t1

0x9fc4,	// (0x00017c3a) im_writing_pane_t2_ParamLimits

0x9fc4,	// (0x00017c3a) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001cf0d) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001cf0d) im_writing_pane_t

0x97f4,	// (0x0001746a) input_focus_pane_cp04

0x97f4,	// (0x0001746a) input_focus_pane_cp05

0x1d3f,	// (0x0000f9b5) list_im_single_pane_ParamLimits

0x1d3f,	// (0x0000f9b5) list_im_single_pane

0x1d58,	// (0x0000f9ce) list_single_im_pane_t1

0x38ae,	// (0x00011524) blid_accuracy_pane

0x38b6,	// (0x0001152c) blid_compass_pane

0x38c0,	// (0x00011536) main_location_t1

0x38d0,	// (0x00011546) main_location_t2

0x38e0,	// (0x00011556) main_location_t3

0x0002,

0xf5fe,	// (0x0001d274) main_location_t

0x97f4,	// (0x0001746a) aid_levels_location

0x9bb5,	// (0x0001782b) blid_accuracy_pane_g1

0x9bb5,	// (0x0001782b) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001cf6f) blid_accuracy_pane_g

0xa00c,	// (0x00017c82) wml_content_pane

0xa04a,	// (0x00017cc0) wml_button_pane_ParamLimits

0xa04a,	// (0x00017cc0) wml_button_pane

0x1d67,	// (0x0000f9dd) wml_list_single_large_pane_ParamLimits

0x1d67,	// (0x0000f9dd) wml_list_single_large_pane

0x1d80,	// (0x0000f9f6) wml_list_single_medium_pane_ParamLimits

0x1d80,	// (0x0000f9f6) wml_list_single_medium_pane

0x1d9a,	// (0x0000fa10) wml_list_single_small_pane_ParamLimits

0x1d9a,	// (0x0000fa10) wml_list_single_small_pane

0xa05e,	// (0x00017cd4) wml_selection_box_pane_ParamLimits

0xa05e,	// (0x00017cd4) wml_selection_box_pane

0xa071,	// (0x00017ce7) wml_list_single_pane_t1

0xa080,	// (0x00017cf6) wml_list_single_medium_pane_t1

0xa08f,	// (0x00017d05) wml_list_single_large_pane_t1

0xa09e,	// (0x00017d14) input_focus_pane_cp02_ParamLimits

0xa09e,	// (0x00017d14) input_focus_pane_cp02

0xa0b1,	// (0x00017d27) wml_selection_box_pane_g1

0xa0ba,	// (0x00017d30) wml_selection_box_pane_t1_ParamLimits

0xa0ba,	// (0x00017d30) wml_selection_box_pane_t1

0x9a4f,	// (0x000176c5) bg_wml_button_pane_ParamLimits

0x9a4f,	// (0x000176c5) bg_wml_button_pane

0xa0d2,	// (0x00017d48) wml_button_pane_g1

0xa0da,	// (0x00017d50) wml_button_pane_t1

0xa0d2,	// (0x00017d48) wml_button_bg_pane_g1

0xa0ea,	// (0x00017d60) wml_button_bg_pane_g2

0xa0f2,	// (0x00017d68) wml_button_bg_pane_g3

0xa0fa,	// (0x00017d70) wml_button_bg_pane_g4

0xa102,	// (0x00017d78) wml_button_bg_pane_g5

0xa10a,	// (0x00017d80) wml_button_bg_pane_g6

0xa112,	// (0x00017d88) wml_button_bg_pane_g7

0xa11a,	// (0x00017d90) wml_button_bg_pane_g8

0xa122,	// (0x00017d98) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001cf12) wml_button_bg_pane_g

0x1db9,	// (0x0000fa2f) bg_list_pane_cp02

0xa12a,	// (0x00017da0) mce_header_pane_ParamLimits

0xa12a,	// (0x00017da0) mce_header_pane

0xa140,	// (0x00017db6) mce_icon_pane

0xa140,	// (0x00017db6) mce_image_pane

0xa149,	// (0x00017dbf) mce_text_pane_ParamLimits

0xa149,	// (0x00017dbf) mce_text_pane

0x1dc3,	// (0x0000fa39) scroll_pane_cp03

0xa042,	// (0x00017cb8) scroll_pane_cp04

0xa15c,	// (0x00017dd2) scroll_pane_cp05_ParamLimits

0xa15c,	// (0x00017dd2) scroll_pane_cp05

0x1dcd,	// (0x0000fa43) mce_header_field_pane_ParamLimits

0x1dcd,	// (0x0000fa43) mce_header_field_pane

0x1de6,	// (0x0000fa5c) mce_header_field_pane_2_ParamLimits

0x1de6,	// (0x0000fa5c) mce_header_field_pane_2

0x1dfc,	// (0x0000fa72) mce_header_field_pane_3

0x1e04,	// (0x0000fa7a) list_single_mce_message_pane_ParamLimits

0x1e04,	// (0x0000fa7a) list_single_mce_message_pane

0x1e20,	// (0x0000fa96) list_single_mce_smart_pane_ParamLimits

0x1e20,	// (0x0000fa96) list_single_mce_smart_pane

0xa168,	// (0x00017dde) input_focus_pane_cp03

0xa171,	// (0x00017de7) list_header_data_pane

0x1e47,	// (0x0000fabd) mce_header_field_pane_t1

0x1e57,	// (0x0000facd) list_single_mce_header_pane_ParamLimits

0x1e57,	// (0x0000facd) list_single_mce_header_pane

0xa179,	// (0x00017def) list_single_mce_header_pane_t1

0xa188,	// (0x00017dfe) list_single_mce_message_pane_g1

0xa190,	// (0x00017e06) list_single_mce_message_pane_t1

0x1e89,	// (0x0000faff) bg_cale_heading_pane_cp01_ParamLimits

0x1e89,	// (0x0000faff) bg_cale_heading_pane_cp01

0xa19e,	// (0x00017e14) bg_cale_pane_cp02_ParamLimits

0xa19e,	// (0x00017e14) bg_cale_pane_cp02

0x1ebc,	// (0x0000fb32) cale_month_corner_pane

0x1ed2,	// (0x0000fb48) cale_month_day_heading_pane_ParamLimits

0x1ed2,	// (0x0000fb48) cale_month_day_heading_pane

0x1f05,	// (0x0000fb7b) cale_month_pane_g1_ParamLimits

0x1f05,	// (0x0000fb7b) cale_month_pane_g1

0x1f31,	// (0x0000fba7) cale_month_pane_g2_ParamLimits

0x1f31,	// (0x0000fba7) cale_month_pane_g2

0x1f52,	// (0x0000fbc8) cale_month_pane_g3_ParamLimits

0x1f52,	// (0x0000fbc8) cale_month_pane_g3

0x1f8e,	// (0x0000fc04) cale_month_pane_g4_ParamLimits

0x1f8e,	// (0x0000fc04) cale_month_pane_g4

0x1fca,	// (0x0000fc40) cale_month_pane_g5_ParamLimits

0x1fca,	// (0x0000fc40) cale_month_pane_g5

0x2006,	// (0x0000fc7c) cale_month_pane_g6_ParamLimits

0x2006,	// (0x0000fc7c) cale_month_pane_g6

0x2042,	// (0x0000fcb8) cale_month_pane_g7_ParamLimits

0x2042,	// (0x0000fcb8) cale_month_pane_g7

0x207e,	// (0x0000fcf4) cale_month_pane_g8_ParamLimits

0x207e,	// (0x0000fcf4) cale_month_pane_g8

0x20ba,	// (0x0000fd30) cale_month_pane_g9_ParamLimits

0x20ba,	// (0x0000fd30) cale_month_pane_g9

0x20f0,	// (0x0000fd66) cale_month_pane_g10_ParamLimits

0x20f0,	// (0x0000fd66) cale_month_pane_g10

0x211a,	// (0x0000fd90) cale_month_pane_g11_ParamLimits

0x211a,	// (0x0000fd90) cale_month_pane_g11

0x2144,	// (0x0000fdba) cale_month_pane_g12_ParamLimits

0x2144,	// (0x0000fdba) cale_month_pane_g12

0x2172,	// (0x0000fde8) cale_month_pane_g13_ParamLimits

0x2172,	// (0x0000fde8) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001cf25) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001cf25) cale_month_pane_g

0x21a0,	// (0x0000fe16) cale_month_week_pane

0x21b1,	// (0x0000fe27) grid_cale_month_pane_ParamLimits

0x21b1,	// (0x0000fe27) grid_cale_month_pane

0x21df,	// (0x0000fe55) cale_month_day_heading_pane_t1

0x223d,	// (0x0000feb3) cale_month_day_heading_pane_t2

0x22a2,	// (0x0000ff18) cale_month_day_heading_pane_t3

0x2307,	// (0x0000ff7d) cale_month_day_heading_pane_t4

0x236c,	// (0x0000ffe2) cale_month_day_heading_pane_t5

0x23d1,	// (0x00010047) cale_month_day_heading_pane_t6

0x2436,	// (0x000100ac) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001cf40) cale_month_day_heading_pane_t

0x9d12,	// (0x00017988) bg_cale_side_pane_cp01

0x249b,	// (0x00010111) cale_month_week_pane_t1

0x24b2,	// (0x00010128) cale_month_week_pane_t2

0x24c9,	// (0x0001013f) cale_month_week_pane_t3

0x24e0,	// (0x00010156) cale_month_week_pane_t4

0x24f7,	// (0x0001016d) cale_month_week_pane_t5

0x250e,	// (0x00010184) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001cf4f) cale_month_week_pane_t

0x252d,	// (0x000101a3) cell_cale_month_pane_ParamLimits

0x252d,	// (0x000101a3) cell_cale_month_pane

0xa1fd,	// (0x00017e73) cell_cale_month_pane_g1

0x25db,	// (0x00010251) cell_cale_month_pane_t1_ParamLimits

0x25db,	// (0x00010251) cell_cale_month_pane_t1

0x9d20,	// (0x00017996) grid_highlight_pane_cp08

0x9bb5,	// (0x0001782b) main_smil_g1

0x25f7,	// (0x0001026d) smil_status_pane

0xa209,	// (0x00017e7f) smil_text_pane

0xbb26,	// (0x0001979c) bg_popup_call3_rect_pane_g8

0xbb2e,	// (0x000197a4) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001d208) bg_popup_call3_rect_pane_g

0xbdc3,	// (0x00019a39) smil_status_volume_pane_g1

0xa213,	// (0x00017e89) smil_status_pane_t1

0xbdf6,	// (0x00019a6c) volume_smil_pane

0xa22a,	// (0x00017ea0) list_smil_text_pane

0x260c,	// (0x00010282) scroll_pane_cp011

0x2617,	// (0x0001028d) smil_text_list_pane_t1_ParamLimits

0x2617,	// (0x0001028d) smil_text_list_pane_t1

0xa234,	// (0x00017eaa) aid_volume_smil_ParamLimits

0xa234,	// (0x00017eaa) aid_volume_smil

0x9bb5,	// (0x0001782b) smil_volume_pane_g1

0x9bb5,	// (0x0001782b) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001cf6f) smil_volume_pane_g

0x9b3c,	// (0x000177b2) listscroll_cale_day_pane

0xa256,	// (0x00017ecc) bg_cale_pane

0xa26e,	// (0x00017ee4) list_cale_pane

0xa27f,	// (0x00017ef5) scroll_pane_cp09

0xa290,	// (0x00017f06) cale_bg_pane_g1

0xa298,	// (0x00017f0e) cale_bg_pane_g2

0xa2a0,	// (0x00017f16) cale_bg_pane_g3

0xa2a8,	// (0x00017f1e) cale_bg_pane_g4

0xa2b0,	// (0x00017f26) cale_bg_pane_g5

0xa2b8,	// (0x00017f2e) cale_bg_pane_g6

0xa2c0,	// (0x00017f36) cale_bg_pane_g7

0xa2c8,	// (0x00017f3e) cale_bg_pane_g8

0xa2d0,	// (0x00017f46) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001cf74) cale_bg_pane_g

0x266c,	// (0x000102e2) list_cale_time_pane_ParamLimits

0x266c,	// (0x000102e2) list_cale_time_pane

0x2681,	// (0x000102f7) list_cale_time_pane_g1_ParamLimits

0x2681,	// (0x000102f7) list_cale_time_pane_g1

0xa2d8,	// (0x00017f4e) list_cale_time_pane_g2_ParamLimits

0xa2d8,	// (0x00017f4e) list_cale_time_pane_g2

0x268d,	// (0x00010303) list_cale_time_pane_g3_ParamLimits

0x268d,	// (0x00010303) list_cale_time_pane_g3

0x269b,	// (0x00010311) list_cale_time_pane_g4_ParamLimits

0x269b,	// (0x00010311) list_cale_time_pane_g4

0x26a9,	// (0x0001031f) list_cale_time_pane_g5_ParamLimits

0x26a9,	// (0x0001031f) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001cf87) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001cf87) list_cale_time_pane_g

0x26b7,	// (0x0001032d) list_cale_time_pane_t1_ParamLimits

0x26b7,	// (0x0001032d) list_cale_time_pane_t1

0x26df,	// (0x00010355) list_cale_time_pane_t2_ParamLimits

0x26df,	// (0x00010355) list_cale_time_pane_t2

0x2a55,	// (0x000106cb) aid_blid_cardinal_pane

0x2a97,	// (0x0001070d) compass_pane_t4

0x2707,	// (0x0001037d) list_cale_time_pane_t4_ParamLimits

0x2707,	// (0x0001037d) list_cale_time_pane_t4

0x2aa5,	// (0x0001071b) compass_pane_t5

0x2ab5,	// (0x0001072b) compass_pane_t6

0x2ac3,	// (0x00010739) compass_pane_t7

0xa7ca,	// (0x00018440) navi_pane_cc_t1

0xa931,	// (0x000185a7) aid_phob_thumbnail_center_pane

0x3274,	// (0x00010eea) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001cf94) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001cf94) list_cale_time_pane_t

0x944b,	// (0x000170c1) bg_popup_window_pane_cp02_ParamLimits

0x944b,	// (0x000170c1) bg_popup_window_pane_cp02

0xa2f2,	// (0x00017f68) heading_pane_cp01_ParamLimits

0xa2f2,	// (0x00017f68) heading_pane_cp01

0xa2fe,	// (0x00017f74) loc_req_pane_ParamLimits

0xa2fe,	// (0x00017f74) loc_req_pane

0xa30e,	// (0x00017f84) loc_type_pane_ParamLimits

0xa30e,	// (0x00017f84) loc_type_pane

0xa320,	// (0x00017f96) loc_type_pane_t1_ParamLimits

0xa320,	// (0x00017f96) loc_type_pane_t1

0xa332,	// (0x00017fa8) loc_type_pane_t2_ParamLimits

0xa332,	// (0x00017fa8) loc_type_pane_t2

0xa344,	// (0x00017fba) loc_type_pane_t3_ParamLimits

0xa344,	// (0x00017fba) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001cf9b) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001cf9b) loc_type_pane_t

0xa356,	// (0x00017fcc) list_loc_req_pane

0xa360,	// (0x00017fd6) scroll_pane_cp012

0x272f,	// (0x000103a5) list_single_loc_request_popup_menu_pane_ParamLimits

0x272f,	// (0x000103a5) list_single_loc_request_popup_menu_pane

0xa36b,	// (0x00017fe1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa36b,	// (0x00017fe1) list_single_loc_request_popup_menu_pane_g1

0xa377,	// (0x00017fed) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa377,	// (0x00017fed) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001cfa2) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001cfa2) list_single_loc_request_popup_menu_pane_g

0xa383,	// (0x00017ff9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa383,	// (0x00017ff9) list_single_loc_request_popup_menu_pane_t1

0x9a4f,	// (0x000176c5) bg_popup_window_pane_cp03_ParamLimits

0x9a4f,	// (0x000176c5) bg_popup_window_pane_cp03

0xa399,	// (0x0001800f) heading_loc_req_pane_ParamLimits

0xa399,	// (0x0001800f) heading_loc_req_pane

0x273c,	// (0x000103b2) popup_dyc_status_message_window_g1_ParamLimits

0x273c,	// (0x000103b2) popup_dyc_status_message_window_g1

0x2750,	// (0x000103c6) popup_dyc_status_message_window_t1_ParamLimits

0x2750,	// (0x000103c6) popup_dyc_status_message_window_t1

0x2765,	// (0x000103db) popup_dyc_status_message_window_t2_ParamLimits

0x2765,	// (0x000103db) popup_dyc_status_message_window_t2

0x277a,	// (0x000103f0) popup_dyc_status_message_window_t3_ParamLimits

0x277a,	// (0x000103f0) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001cfa7) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001cfa7) popup_dyc_status_message_window_t

0x97f4,	// (0x0001746a) bg_heading_pane_cp01

0xa3a5,	// (0x0001801b) heading_loc_req_pane_g1

0xa3ad,	// (0x00018023) heading_loc_req_pane_g2

0xa3b5,	// (0x0001802b) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001cfae) heading_loc_req_pane_g

0xa3bd,	// (0x00018033) heading_loc_req_pane_t1

0xa444,	// (0x000180ba) bg_popup_sub_pane_cp01_ParamLimits

0xa444,	// (0x000180ba) bg_popup_sub_pane_cp01

0xa452,	// (0x000180c8) popup_cale_events_window_g1_ParamLimits

0xa452,	// (0x000180c8) popup_cale_events_window_g1

0xa472,	// (0x000180e8) popup_cale_events_window_g2_ParamLimits

0xa472,	// (0x000180e8) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001cfe2) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001cfe2) popup_cale_events_window_g

0xa492,	// (0x00018108) popup_cale_events_window_t1_ParamLimits

0xa492,	// (0x00018108) popup_cale_events_window_t1

0xa4a4,	// (0x0001811a) popup_cale_events_window_t2_ParamLimits

0xa4a4,	// (0x0001811a) popup_cale_events_window_t2

0xa4e2,	// (0x00018158) popup_cale_events_window_t3_ParamLimits

0xa4e2,	// (0x00018158) popup_cale_events_window_t3

0xa51c,	// (0x00018192) popup_cale_events_window_t4_ParamLimits

0xa51c,	// (0x00018192) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001cfe7) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001cfe7) popup_cale_events_window_t

0x2808,	// (0x0001047e) call_type_pane

0x2818,	// (0x0001048e) popup_call_status_window_g1

0x282c,	// (0x000104a2) popup_call_status_window_g2

0x2840,	// (0x000104b6) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001cff0) popup_call_status_window_g

0xa552,	// (0x000181c8) call_type_pane_g1

0xa55b,	// (0x000181d1) call_type_pane_g2

0x0001,

0xf381,	// (0x0001cff7) call_type_pane_g

0x97f4,	// (0x0001746a) bg_popup_sub_pane_cp02

0xa564,	// (0x000181da) listscroll_popup_wml_pane

0xa56c,	// (0x000181e2) list_wml_pane

0xa576,	// (0x000181ec) scroll_pane_cp013

0xa581,	// (0x000181f7) list_single_graphic_popup_wml_pane_ParamLimits

0xa581,	// (0x000181f7) list_single_graphic_popup_wml_pane

0x9bb5,	// (0x0001782b) list_single_graphic_popup_wml_pane_g1

0xa595,	// (0x0001820b) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001cffc) list_single_graphic_popup_wml_pane_g

0xa59d,	// (0x00018213) list_single_graphic_popup_wml_pane_t1

0xa5b3,	// (0x00018229) aid_call_pane

0x9a47,	// (0x000176bd) popup_clock_analogue_window_g1

0x9a47,	// (0x000176bd) popup_clock_analogue_window_g2

0xa5bb,	// (0x00018231) popup_clock_analogue_window_g3

0xa5bb,	// (0x00018231) popup_clock_analogue_window_g4

0x9bb5,	// (0x0001782b) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001d001) popup_clock_analogue_window_g

0xa5c3,	// (0x00018239) popup_clock_analogue_window_t1

0xa5d1,	// (0x00018247) clock_digital_number_pane_ParamLimits

0xa5d1,	// (0x00018247) clock_digital_number_pane

0xa5dd,	// (0x00018253) clock_digital_number_pane_cp02_ParamLimits

0xa5dd,	// (0x00018253) clock_digital_number_pane_cp02

0xa5e9,	// (0x0001825f) clock_digital_number_pane_cp03_ParamLimits

0xa5e9,	// (0x0001825f) clock_digital_number_pane_cp03

0xa5f5,	// (0x0001826b) clock_digital_number_pane_cp04_ParamLimits

0xa5f5,	// (0x0001826b) clock_digital_number_pane_cp04

0xa601,	// (0x00018277) clock_digital_separator_pane_ParamLimits

0xa601,	// (0x00018277) clock_digital_separator_pane

0xa60d,	// (0x00018283) popup_clock_digital_window_t1

0x9bb5,	// (0x0001782b) clock_digital_number_pane_g1

0x9bb5,	// (0x0001782b) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001cf6f) clock_digital_number_pane_g

0x9bb5,	// (0x0001782b) clock_digital_separator_pane_g1

0x9bb5,	// (0x0001782b) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001cf6f) clock_digital_separator_pane_g

0x97f4,	// (0x0001746a) bg_popup_window_pane_cp04

0xa62a,	// (0x000182a0) heading_pane_cp03

0xa632,	// (0x000182a8) listscroll_popup_gms_pane

0xa63a,	// (0x000182b0) grid_large_graphic_popup_pane

0xa644,	// (0x000182ba) listscroll_popup_gms_pane_g1

0xa64c,	// (0x000182c2) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001d00c) listscroll_popup_gms_pane_g

0xa042,	// (0x00017cb8) scroll_pane_cp014

0x2850,	// (0x000104c6) cell_large_graphic_popup_pane_ParamLimits

0x2850,	// (0x000104c6) cell_large_graphic_popup_pane

0x2868,	// (0x000104de) cell_large_graphic_popup_pane_g1_ParamLimits

0x2868,	// (0x000104de) cell_large_graphic_popup_pane_g1

0xa654,	// (0x000182ca) cell_large_graphic_popup_pane_g2_ParamLimits

0xa654,	// (0x000182ca) cell_large_graphic_popup_pane_g2

0xa660,	// (0x000182d6) cell_large_graphic_popup_pane_g3_ParamLimits

0xa660,	// (0x000182d6) cell_large_graphic_popup_pane_g3

0xa66d,	// (0x000182e3) cell_large_graphic_popup_pane_g4_ParamLimits

0xa66d,	// (0x000182e3) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001d011) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001d011) cell_large_graphic_popup_pane_g

0xa67d,	// (0x000182f3) grid_highlight_pane_cp010

0x9bb5,	// (0x0001782b) bg_popup_call_pane_g1

0xa687,	// (0x000182fd) list_single_graphic_popup_conf_pane_ParamLimits

0xa687,	// (0x000182fd) list_single_graphic_popup_conf_pane

0xa699,	// (0x0001830f) list_highlight_pane_cp01

0xa6a2,	// (0x00018318) list_single_graphic_popup_conf_pane_g1

0xa6aa,	// (0x00018320) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001d01a) list_single_graphic_popup_conf_pane_g

0xa6b2,	// (0x00018328) list_single_graphic_popup_conf_pane_t1

0xa6c0,	// (0x00018336) linegrid_cams_pane_g1

0x2874,	// (0x000104ea) linegrid_cams_pane_g2

0x9d53,	// (0x000179c9) linegrid_cams_pane_g3

0xa6c9,	// (0x0001833f) linegrid_cams_pane_g4

0x287d,	// (0x000104f3) linegrid_cams_pane_g5

0x2886,	// (0x000104fc) linegrid_cams_pane_g6

0x9d5c,	// (0x000179d2) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001d01f) linegrid_cams_pane_g

0xa6d2,	// (0x00018348) popup_clock_analogue_window

0xa6d2,	// (0x00018348) popup_clock_digital_window

0x97f4,	// (0x0001746a) popup_phob_thumbnail_window

0x9bb5,	// (0x0001782b) call_video_uplink_pane_g1

0xa6db,	// (0x00018351) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001d02e) call_video_uplink_pane_g

0xa6e3,	// (0x00018359) video_uplink_pane

0xa6eb,	// (0x00018361) mce_image_pane_g1

0x2891,	// (0x00010507) mce_image_pane_g2

0x289b,	// (0x00010511) mce_image_pane_g3

0x28a5,	// (0x0001051b) mce_image_pane_g4

0x28ad,	// (0x00010523) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001d033) mce_image_pane_g

0xa6f5,	// (0x0001836b) control_top_pane_stacon_cp01_ParamLimits

0xa6f5,	// (0x0001836b) control_top_pane_stacon_cp01

0xa709,	// (0x0001837f) uni_indicator_pane_stacon_cp01_ParamLimits

0xa709,	// (0x0001837f) uni_indicator_pane_stacon_cp01

0xa71a,	// (0x00018390) bg_popup_sub_pane_cp03

0x28b5,	// (0x0001052b) chi_dic_find_pane

0x28bd,	// (0x00010533) listscroll_chi_dic_pane

0x28c6,	// (0x0001053c) main_pane_chidic_g1

0x28d9,	// (0x0001054f) chi_dic_find_pane_t1

0xa724,	// (0x0001839a) find_chidic_pane

0xa72d,	// (0x000183a3) chi_dic_list_pane_ParamLimits

0xa72d,	// (0x000183a3) chi_dic_list_pane

0xa73e,	// (0x000183b4) scroll_pane_cp020

0x28e7,	// (0x0001055d) find_chidic_pane_t1

0x97f4,	// (0x0001746a) input_focus_pane_cp06

0x28f6,	// (0x0001056c) list_chi_dic_pane_ParamLimits

0x28f6,	// (0x0001056c) list_chi_dic_pane

0x2908,	// (0x0001057e) list_chi_dic_pane_t1_ParamLimits

0x2908,	// (0x0001057e) list_chi_dic_pane_t1

0x97f4,	// (0x0001746a) list_highlight_pane_cp020

0xa746,	// (0x000183bc) bg_cale_heading_pane_g1

0x291b,	// (0x00010591) bg_cale_heading_pane_g2

0x2923,	// (0x00010599) bg_cale_heading_pane_g3

0x292b,	// (0x000105a1) bg_cale_heading_pane_g4

0x2933,	// (0x000105a9) bg_cale_heading_pane_g5

0x293b,	// (0x000105b1) bg_cale_heading_pane_g6

0x2943,	// (0x000105b9) bg_cale_heading_pane_g7

0x294b,	// (0x000105c1) bg_cale_heading_pane_g8

0x2953,	// (0x000105c9) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001d03e) bg_cale_heading_pane_g

0xa746,	// (0x000183bc) bg_cale_side_pane_g1

0x295b,	// (0x000105d1) bg_cale_side_pane_g2

0x2965,	// (0x000105db) bg_cale_side_pane_g3

0x296f,	// (0x000105e5) bg_cale_side_pane_g4

0x2979,	// (0x000105ef) bg_cale_side_pane_g5

0x2983,	// (0x000105f9) bg_cale_side_pane_g6

0x298d,	// (0x00010603) bg_cale_side_pane_g7

0x2997,	// (0x0001060d) bg_cale_side_pane_g8

0x299f,	// (0x00010615) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001d051) bg_cale_side_pane_g

0x29a7,	// (0x0001061d) popup_call_status_window_ParamLimits

0x29a7,	// (0x0001061d) popup_call_status_window

0xa74e,	// (0x000183c4) stacon_top_pane

0xa756,	// (0x000183cc) status_pane_ParamLimits

0xa756,	// (0x000183cc) status_pane

0xa76b,	// (0x000183e1) status_small_pane

0xa773,	// (0x000183e9) control_pane

0x97f4,	// (0x0001746a) stacon_bottom_pane

0xa77b,	// (0x000183f1) list_single_mce_smart_pane_t1_ParamLimits

0xa77b,	// (0x000183f1) list_single_mce_smart_pane_t1

0xa78e,	// (0x00018404) list_single_mce_smart_pane_t2_ParamLimits

0xa78e,	// (0x00018404) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001d064) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001d064) list_single_mce_smart_pane_t

0x29f4,	// (0x0001066a) compass_pane

0x29ff,	// (0x00010675) main_location2_pane_t1

0x2a15,	// (0x0001068b) main_location2_pane_t2

0x2a2b,	// (0x000106a1) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001d069) main_location2_pane_t

0xa7ad,	// (0x00018423) compass_pane_g1_ParamLimits

0xa7ad,	// (0x00018423) compass_pane_g1

0x2a79,	// (0x000106ef) compass_pane_t1

0x2a88,	// (0x000106fe) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001d072) compass_pane_t

0x2ad3,	// (0x00010749) text_secondary_cp61

0xa7c1,	// (0x00018437) navi_pane_cams_g5

0xa7e4,	// (0x0001845a) navi_pane_im_t1

0xa7f2,	// (0x00018468) navi_pane_mp_g1_ParamLimits

0xa7f2,	// (0x00018468) navi_pane_mp_g1

0xa806,	// (0x0001847c) navi_pane_mp_g2_ParamLimits

0xa806,	// (0x0001847c) navi_pane_mp_g2

0xa812,	// (0x00018488) navi_pane_mp_g3_ParamLimits

0xa812,	// (0x00018488) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001d086) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001d086) navi_pane_mp_g

0xa81e,	// (0x00018494) navi_pane_mp_t1

0xa82c,	// (0x000184a2) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001d08d) navi_pane_mp_t

0xa868,	// (0x000184de) navi_pane_vt_g1

0xa81e,	// (0x00018494) navi_pane_vt_t1

0xa870,	// (0x000184e6) navi_slider_pane

0xa878,	// (0x000184ee) zooming_pane

0xa880,	// (0x000184f6) navi_slider_pane_g1

0xa889,	// (0x000184ff) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001d094) navi_slider_pane_g

0xa8b6,	// (0x0001852c) aid_levels_zoom

0xa8be,	// (0x00018534) zooming_pane_g1

0xa8c6,	// (0x0001853c) zooming_pane_g2

0xa8c6,	// (0x0001853c) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001d0a3) zooming_pane_g

0xa8ce,	// (0x00018544) level_10_zoom

0xa8d7,	// (0x0001854d) level_11_zoom

0xa8e0,	// (0x00018556) level_1_zoom

0xa8e9,	// (0x0001855f) level_2_zoom

0xa8f2,	// (0x00018568) level_3_zoom

0xa8fb,	// (0x00018571) level_4_zoom

0xa904,	// (0x0001857a) level_5_zoom

0xa90d,	// (0x00018583) level_6_zoom

0xa916,	// (0x0001858c) level_7_zoom

0xa91f,	// (0x00018595) level_8_zoom

0xa928,	// (0x0001859e) level_9_zoom

0xa939,	// (0x000185af) popup_phob_thumbnail_window_g1

0xa941,	// (0x000185b7) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001d0aa) popup_phob_thumbnail_window_g

0xbc8c,	// (0x00019902) level_1_location

0xbc94,	// (0x0001990a) level_2_location

0xbc9c,	// (0x00019912) level_3_location

0xbca4,	// (0x0001991a) level_4_location

0xa878,	// (0x000184ee) level_5_location

0x2bfe,	// (0x00010874) mce_icon_pane_g1

0x2c06,	// (0x0001087c) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001d0af) mce_icon_pane_g

0x2c0e,	// (0x00010884) main_mup_pane_g1_ParamLimits

0x2c0e,	// (0x00010884) main_mup_pane_g1

0x2c24,	// (0x0001089a) main_mup_pane_g2_ParamLimits

0x2c24,	// (0x0001089a) main_mup_pane_g2

0x2c3c,	// (0x000108b2) main_mup_pane_g3_ParamLimits

0x2c3c,	// (0x000108b2) main_mup_pane_g3

0x2c54,	// (0x000108ca) main_mup_pane_g4_ParamLimits

0x2c54,	// (0x000108ca) main_mup_pane_g4

0x2c66,	// (0x000108dc) main_mup_pane_g5_ParamLimits

0x2c66,	// (0x000108dc) main_mup_pane_g5

0x2c82,	// (0x000108f8) main_mup_pane_g6_ParamLimits

0x2c82,	// (0x000108f8) main_mup_pane_g6

0x2c9c,	// (0x00010912) main_mup_pane_g7_ParamLimits

0x2c9c,	// (0x00010912) main_mup_pane_g7

0x2cba,	// (0x00010930) main_mup_pane_g8_ParamLimits

0x2cba,	// (0x00010930) main_mup_pane_g8

0x2cd8,	// (0x0001094e) main_mup_pane_g9_ParamLimits

0x2cd8,	// (0x0001094e) main_mup_pane_g9

0x2cf4,	// (0x0001096a) main_mup_pane_g10_ParamLimits

0x2cf4,	// (0x0001096a) main_mup_pane_g10

0x2d12,	// (0x00010988) main_mup_pane_g11_ParamLimits

0x2d12,	// (0x00010988) main_mup_pane_g11

0x2d2c,	// (0x000109a2) main_mup_pane_g12_ParamLimits

0x2d2c,	// (0x000109a2) main_mup_pane_g12

0x2d42,	// (0x000109b8) main_mup_pane_g13_ParamLimits

0x2d42,	// (0x000109b8) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001d0b4) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001d0b4) main_mup_pane_g

0x2d56,	// (0x000109cc) main_mup_pane_t1_ParamLimits

0x2d56,	// (0x000109cc) main_mup_pane_t1

0x2d72,	// (0x000109e8) main_mup_pane_t2_ParamLimits

0x2d72,	// (0x000109e8) main_mup_pane_t2

0x2d8a,	// (0x00010a00) main_mup_pane_t3_ParamLimits

0x2d8a,	// (0x00010a00) main_mup_pane_t3

0x2da2,	// (0x00010a18) main_mup_pane_t4_ParamLimits

0x2da2,	// (0x00010a18) main_mup_pane_t4

0x2dc0,	// (0x00010a36) main_mup_pane_t5_ParamLimits

0x2dc0,	// (0x00010a36) main_mup_pane_t5

0x2dd5,	// (0x00010a4b) main_mup_pane_t6_ParamLimits

0x2dd5,	// (0x00010a4b) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001d0cf) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001d0cf) main_mup_pane_t

0x2de7,	// (0x00010a5d) mup_progress_pane_ParamLimits

0x2de7,	// (0x00010a5d) mup_progress_pane

0x2df3,	// (0x00010a69) mup_visualizer_pane_ParamLimits

0x2df3,	// (0x00010a69) mup_visualizer_pane

0x2e27,	// (0x00010a9d) mup_volume_pane_ParamLimits

0x2e27,	// (0x00010a9d) mup_volume_pane

0xa949,	// (0x000185bf) mup_visualizer_pane_g1_ParamLimits

0xa949,	// (0x000185bf) mup_visualizer_pane_g1

0xa949,	// (0x000185bf) mup_visualizer_pane_g2_ParamLimits

0xa949,	// (0x000185bf) mup_visualizer_pane_g2

0xa7ad,	// (0x00018423) mup_visualizer_pane_g3_ParamLimits

0xa7ad,	// (0x00018423) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001d0dc) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001d0dc) mup_visualizer_pane_g

0x9bb5,	// (0x0001782b) mup_volume_pane_g1

0xa95f,	// (0x000185d5) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001d0e3) mup_volume_pane_g

0x9bb5,	// (0x0001782b) mup_progress_pane_g1

0xa968,	// (0x000185de) mup_progress_pane_g2

0xa971,	// (0x000185e7) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001d0e8) mup_progress_pane_g

0x97f4,	// (0x0001746a) bg_popup_window_pane_cp05

0xa97a,	// (0x000185f0) heading_pane_cp02_ParamLimits

0xa97a,	// (0x000185f0) heading_pane_cp02

0xa996,	// (0x0001860c) list_popup_blid_pane

0xa99e,	// (0x00018614) list_blid_sat_info_pane_ParamLimits

0xa99e,	// (0x00018614) list_blid_sat_info_pane

0xa9b1,	// (0x00018627) list_blid_sat_info_pane_g1

0xa9b9,	// (0x0001862f) list_blid_sat_info_pane_t1

0x2f51,	// (0x00010bc7) mup_equalizer_pane_ParamLimits

0x2f51,	// (0x00010bc7) mup_equalizer_pane

0x2f72,	// (0x00010be8) mup_equalizer_pane_cp1_ParamLimits

0x2f72,	// (0x00010be8) mup_equalizer_pane_cp1

0x2f93,	// (0x00010c09) mup_equalizer_pane_cp2_ParamLimits

0x2f93,	// (0x00010c09) mup_equalizer_pane_cp2

0x2fb8,	// (0x00010c2e) mup_equalizer_pane_cp3_ParamLimits

0x2fb8,	// (0x00010c2e) mup_equalizer_pane_cp3

0x2fe1,	// (0x00010c57) mup_equalizer_pane_cp4_ParamLimits

0x2fe1,	// (0x00010c57) mup_equalizer_pane_cp4

0x300a,	// (0x00010c80) mup_equalizer_pane_cp5

0x3022,	// (0x00010c98) mup_equalizer_pane_cp6

0x303a,	// (0x00010cb0) mup_equalizer_pane_cp7

0xbba6,	// (0x0001981c) bg_popup_call_poc_act_pane_g9

0xbbae,	// (0x00019824) bg_popup_call_poc_act_pane_g10

0xbbb6,	// (0x0001982c) bg_popup_call_poc_act_pane_g11

0x000a,

0x9a4f,	// (0x000176c5) mup_scale_pane

0x9bb5,	// (0x0001782b) mup_scale_pane_g1

0xa9c7,	// (0x0001863d) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001d104) mup_scale_pane_g

0xa9eb,	// (0x00018661) msg_data_pane

0xa9f3,	// (0x00018669) scroll_pane_cp017

0x3064,	// (0x00010cda) bg_list_pane_cp04_ParamLimits

0x3064,	// (0x00010cda) bg_list_pane_cp04

0xa9fb,	// (0x00018671) msg_data_pane_g1

0x308c,	// (0x00010d02) msg_data_pane_g2

0x3096,	// (0x00010d0c) msg_data_pane_g3

0x30a0,	// (0x00010d16) msg_data_pane_g4

0x30a8,	// (0x00010d1e) msg_data_pane_g5

0x30b0,	// (0x00010d26) msg_data_pane_g6

0x30b8,	// (0x00010d2e) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001d113) msg_data_pane_g

0x30c0,	// (0x00010d36) msg_text_pane_ParamLimits

0x30c0,	// (0x00010d36) msg_text_pane

0x30ef,	// (0x00010d65) qrid_highlight_pane_cp011_ParamLimits

0x30ef,	// (0x00010d65) qrid_highlight_pane_cp011

0x97f4,	// (0x0001746a) msg_body_pane

0x97f4,	// (0x0001746a) msg_header_pane

0xaa0c,	// (0x00018682) input_focus_pane_cp07

0x3113,	// (0x00010d89) msg_header_pane_t1_ParamLimits

0x3113,	// (0x00010d89) msg_header_pane_t1

0x3127,	// (0x00010d9d) msg_header_pane_t2_ParamLimits

0x3127,	// (0x00010d9d) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001d127) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001d127) msg_header_pane_t

0xaa21,	// (0x00018697) msg_body_pane_g1

0x3139,	// (0x00010daf) msg_body_pane_t1_ParamLimits

0x3139,	// (0x00010daf) msg_body_pane_t1

0x316a,	// (0x00010de0) msg_body_pane_t2_ParamLimits

0x316a,	// (0x00010de0) msg_body_pane_t2

0x317c,	// (0x00010df2) msg_body_pane_t3_ParamLimits

0x317c,	// (0x00010df2) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001d12c) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001d12c) msg_body_pane_t

0x31c8,	// (0x00010e3e) main_viewer_pane_g1_ParamLimits

0x31c8,	// (0x00010e3e) main_viewer_pane_g1

0x31d6,	// (0x00010e4c) main_viewer_pane_g2_ParamLimits

0x31d6,	// (0x00010e4c) main_viewer_pane_g2

0x31e4,	// (0x00010e5a) main_viewer_pane_g3_ParamLimits

0x31e4,	// (0x00010e5a) main_viewer_pane_g3

0x31f3,	// (0x00010e69) main_viewer_pane_g4_ParamLimits

0x31f3,	// (0x00010e69) main_viewer_pane_g4

0xaa41,	// (0x000186b7) main_viewer_pane_g5_ParamLimits

0xaa41,	// (0x000186b7) main_viewer_pane_g5

0xaa41,	// (0x000186b7) main_viewer_pane_g7_ParamLimits

0xaa41,	// (0x000186b7) main_viewer_pane_g7

0xaa53,	// (0x000186c9) main_viewer_pane_g8_ParamLimits

0xaa53,	// (0x000186c9) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001d13c) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001d13c) main_viewer_pane_g

0xaa6b,	// (0x000186e1) viewer_content_pane_ParamLimits

0xaa6b,	// (0x000186e1) viewer_content_pane

0x3231,	// (0x00010ea7) main_postcard_pane_g1_ParamLimits

0x3231,	// (0x00010ea7) main_postcard_pane_g1

0x3247,	// (0x00010ebd) main_postcard_pane_g2_ParamLimits

0x3247,	// (0x00010ebd) main_postcard_pane_g2

0x325d,	// (0x00010ed3) main_postcard_pane_g3_ParamLimits

0x325d,	// (0x00010ed3) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001d14d) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001d14d) main_postcard_pane_g

0x3274,	// (0x00010eea) main_postcard_pane_g4

0xbdd6,	// (0x00019a4c) smil_status_volume_pane_g2

0x32b7,	// (0x00010f2d) postcard_pane_ParamLimits

0x32b7,	// (0x00010f2d) postcard_pane

0xaa79,	// (0x000186ef) postcard_pane_g1_ParamLimits

0xaa79,	// (0x000186ef) postcard_pane_g1

0x3307,	// (0x00010f7d) postcard_pane_g2_ParamLimits

0x3307,	// (0x00010f7d) postcard_pane_g2

0x3313,	// (0x00010f89) postcard_pane_g3_ParamLimits

0x3313,	// (0x00010f89) postcard_pane_g3

0xaa87,	// (0x000186fd) postcard_pane_g4_ParamLimits

0xaa87,	// (0x000186fd) postcard_pane_g4

0x331f,	// (0x00010f95) postcard_pane_g5_ParamLimits

0x331f,	// (0x00010f95) postcard_pane_g5

0x3331,	// (0x00010fa7) postcard_pane_g6_ParamLimits

0x3331,	// (0x00010fa7) postcard_pane_g6

0xaa79,	// (0x000186ef) postcard_pane_g7_ParamLimits

0xaa79,	// (0x000186ef) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001d15a) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001d15a) postcard_pane_g

0x3349,	// (0x00010fbf) main_mp2_pane_g1_ParamLimits

0x3349,	// (0x00010fbf) main_mp2_pane_g1

0x3357,	// (0x00010fcd) main_mp2_pane_g2_ParamLimits

0x3357,	// (0x00010fcd) main_mp2_pane_g2

0x3363,	// (0x00010fd9) main_mp2_pane_g3_ParamLimits

0x3363,	// (0x00010fd9) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001d169) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001d169) main_mp2_pane_g

0x336f,	// (0x00010fe5) main_mp2_pane_t1_ParamLimits

0x336f,	// (0x00010fe5) main_mp2_pane_t1

0x3386,	// (0x00010ffc) main_mp2_pane_t2_ParamLimits

0x3386,	// (0x00010ffc) main_mp2_pane_t2

0x339a,	// (0x00011010) main_mp2_pane_t3_ParamLimits

0x339a,	// (0x00011010) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001d170) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001d170) main_mp2_pane_t

0xaa95,	// (0x0001870b) pec_content_pane_ParamLimits

0xaa95,	// (0x0001870b) pec_content_pane

0xa042,	// (0x00017cb8) scroll_pane_cp015

0xaaa7,	// (0x0001871d) pec_attribute_pane_ParamLimits

0xaaa7,	// (0x0001871d) pec_attribute_pane

0x33ac,	// (0x00011022) pec_content_pane_g1_ParamLimits

0x33ac,	// (0x00011022) pec_content_pane_g1

0xaab7,	// (0x0001872d) pec_content_pane_t1_ParamLimits

0xaab7,	// (0x0001872d) pec_content_pane_t1

0xaac9,	// (0x0001873f) pec_content_pane_t2_ParamLimits

0xaac9,	// (0x0001873f) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001d177) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001d177) pec_content_pane_t

0x33b8,	// (0x0001102e) list_single_graphic_pane_cp01_ParamLimits

0x33b8,	// (0x0001102e) list_single_graphic_pane_cp01

0x9a4f,	// (0x000176c5) bg_popup_sub_pane_cp04

0xaadb,	// (0x00018751) popup_mup_playback_window_g1

0xaae7,	// (0x0001875d) popup_mup_playback_window_t1

0xaafc,	// (0x00018772) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001d17c) popup_mup_playback_window_t

0xab33,	// (0x000187a9) main_image_pane_g1_ParamLimits

0xab33,	// (0x000187a9) main_image_pane_g1

0xab76,	// (0x000187ec) scroll_pane_cp018_ParamLimits

0xab76,	// (0x000187ec) scroll_pane_cp018

0xab8e,	// (0x00018804) scroll_pane_cp016_ParamLimits

0xab8e,	// (0x00018804) scroll_pane_cp016

0x348a,	// (0x00011100) smil2_image_pane_ParamLimits

0x348a,	// (0x00011100) smil2_image_pane

0x34c0,	// (0x00011136) smil2_root_pane_ParamLimits

0x34c0,	// (0x00011136) smil2_root_pane

0x34f8,	// (0x0001116e) smil2_text_pane_ParamLimits

0x34f8,	// (0x0001116e) smil2_text_pane

0x97f4,	// (0x0001746a) bg_list_pane_cp06

0xabca,	// (0x00018840) grid_radio_pane

0x97f4,	// (0x0001746a) bg_popup_window_pane_cp06

0xabd4,	// (0x0001884a) main_fmradio_pane_t1

0xa62a,	// (0x000182a0) heading_pane_cp04

0xabe2,	// (0x00018858) main_fmradio_pane_t2

0xbbbe,	// (0x00019834) popup_cale_lunar_info_window_g1

0xabf0,	// (0x00018866) main_fmradio_pane_t3

0xbbc6,	// (0x0001983c) popup_cale_lunar_info_window_g2

0xac00,	// (0x00018876) main_fmradio_pane_t4

0x0001,

0xac0e,	// (0x00018884) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0001d257) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001d191) main_fmradio_pane_t

0xac1c,	// (0x00018892) wait_bar_pane_cp03

0xac24,	// (0x0001889a) cell_fmradio_pane_ParamLimits

0xac24,	// (0x0001889a) cell_fmradio_pane

0xaa79,	// (0x000186ef) cell_fmradio_pane_g1_ParamLimits

0xaa79,	// (0x000186ef) cell_fmradio_pane_g1

0x97f4,	// (0x0001746a) grid_highlight_pane_cp011

0xac39,	// (0x000188af) poc_content_pane_ParamLimits

0xac39,	// (0x000188af) poc_content_pane

0xac4b,	// (0x000188c1) scroll_pane_cp019

0x3588,	// (0x000111fe) popup_call_poc_act_window_ParamLimits

0x3588,	// (0x000111fe) popup_call_poc_act_window

0x35ac,	// (0x00011222) popup_call_poc_inact_window_ParamLimits

0x35ac,	// (0x00011222) popup_call_poc_inact_window

0xf5b8,	// (0x0001d22e) bg_popup_call_poc_act_pane_g

0xbb36,	// (0x000197ac) bg_popup_call_poc_inact_pane_g1

0xbb3e,	// (0x000197b4) bg_popup_call_poc_inact_pane_g2

0xac53,	// (0x000188c9) popup_call_poc_act_window_g2

0xbb46,	// (0x000197bc) bg_popup_call_poc_inact_pane_g3

0xbb4e,	// (0x000197c4) bg_popup_call_poc_inact_pane_g4

0xbb56,	// (0x000197cc) bg_popup_call_poc_inact_pane_g5

0xac5b,	// (0x000188d1) popup_call_poc_act_window_t1_ParamLimits

0xac5b,	// (0x000188d1) popup_call_poc_act_window_t1

0xac83,	// (0x000188f9) popup_call_poc_act_window_t2_ParamLimits

0xac83,	// (0x000188f9) popup_call_poc_act_window_t2

0xacab,	// (0x00018921) popup_call_poc_act_window_t3_ParamLimits

0xacab,	// (0x00018921) popup_call_poc_act_window_t3

0xacd3,	// (0x00018949) popup_call_poc_act_window_t4_ParamLimits

0xacd3,	// (0x00018949) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001d19c) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001d19c) popup_call_poc_act_window_t

0xbb5e,	// (0x000197d4) bg_popup_call_poc_inact_pane_g6

0xbb66,	// (0x000197dc) bg_popup_call_poc_inact_pane_g7

0xbb6e,	// (0x000197e4) bg_popup_call_poc_inact_pane_g8

0xace5,	// (0x0001895b) popup_call_poc_inact_window_g2

0xbb76,	// (0x000197ec) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0001d21b) bg_popup_call_poc_inact_pane_g

0xaced,	// (0x00018963) popup_call_poc_inact_window_t1_ParamLimits

0xaced,	// (0x00018963) popup_call_poc_inact_window_t1

0xad02,	// (0x00018978) popup_call_poc_inact_window_t2_ParamLimits

0xad02,	// (0x00018978) popup_call_poc_inact_window_t2

0xad17,	// (0x0001898d) popup_call_poc_inact_window_t3_ParamLimits

0xad17,	// (0x0001898d) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001d1a5) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001d1a5) popup_call_poc_inact_window_t

0xbd36,	// (0x000199ac) context_pane_ParamLimits

0x3e57,	// (0x00011acd) signal_pane_ParamLimits

0xa878,	// (0x000184ee) main_call2_pane

0xbd24,	// (0x0001999a) popup_phob_thumbnail2_window_ParamLimits

0xbd24,	// (0x0001999a) popup_phob_thumbnail2_window

0xaa29,	// (0x0001869f) aid_hotspot_pointer_arrow_pane

0xaa31,	// (0x000186a7) aid_hotspot_pointer_hand_pane

0x3917,	// (0x0001158d) phob_pre_status_pane_g5

0x160b,	// (0x0000f281) cams_zoom_pane_ParamLimits

0x161a,	// (0x0000f290) image_vga_pane_ParamLimits

0x1634,	// (0x0000f2aa) main_camera_pane_g1_ParamLimits

0x1646,	// (0x0000f2bc) main_camera_pane_g2_ParamLimits

0x1656,	// (0x0000f2cc) main_camera_pane_g3_ParamLimits

0x166a,	// (0x0000f2e0) main_camera_pane_g4_ParamLimits

0x167e,	// (0x0000f2f4) main_camera_pane_g5_ParamLimits

0x1692,	// (0x0000f308) main_camera_pane_g6_ParamLimits

0x16a6,	// (0x0000f31c) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001cea4) main_camera_pane_g_ParamLimits

0x16ba,	// (0x0000f330) main_camera_pane_t1_ParamLimits

0x16d0,	// (0x0000f346) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001ceb5) main_camera_pane_t_ParamLimits

0x9a4f,	// (0x000176c5) bg_popup_preview_window_pane_cp01_ParamLimits

0x9a4f,	// (0x000176c5) bg_popup_preview_window_pane_cp01

0xad2c,	// (0x000189a2) popup_phob_thumbnail2_window_g1_ParamLimits

0xad2c,	// (0x000189a2) popup_phob_thumbnail2_window_g1

0x97f4,	// (0x0001746a) call2_cli_visual_pane

0x35e0,	// (0x00011256) popup_call2_audio_conf_window_ParamLimits

0x35e0,	// (0x00011256) popup_call2_audio_conf_window

0x3608,	// (0x0001127e) popup_call2_audio_first_window_ParamLimits

0x3608,	// (0x0001127e) popup_call2_audio_first_window

0x369e,	// (0x00011314) popup_call2_audio_in_window_ParamLimits

0x369e,	// (0x00011314) popup_call2_audio_in_window

0x36ea,	// (0x00011360) popup_call2_audio_out_window_ParamLimits

0x36ea,	// (0x00011360) popup_call2_audio_out_window

0x375c,	// (0x000113d2) popup_call2_audio_second_window_ParamLimits

0x375c,	// (0x000113d2) popup_call2_audio_second_window

0x37c2,	// (0x00011438) popup_call2_audio_wait_window_ParamLimits

0x37c2,	// (0x00011438) popup_call2_audio_wait_window

0x97f4,	// (0x0001746a) bg_popup_call2_act_pane_cp03

0x9a31,	// (0x000176a7) list_conf_pane_cp

0xad38,	// (0x000189ae) popup_call2_audio_conf_window_t1

0xad46,	// (0x000189bc) list_single_graphic_popup_conf2_pane_ParamLimits

0xad46,	// (0x000189bc) list_single_graphic_popup_conf2_pane

0xa699,	// (0x0001830f) list_highlight_pane_cp04

0xad59,	// (0x000189cf) list_single_graphic_popup_conf2_pane_g1

0xa6aa,	// (0x00018320) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001d1ac) list_single_graphic_popup_conf2_pane_g

0xad63,	// (0x000189d9) list_single_graphic_popup_conf2_pane_t1

0xad71,	// (0x000189e7) bg_popup_call2_act_pane_cp01_ParamLimits

0xad71,	// (0x000189e7) bg_popup_call2_act_pane_cp01

0xadfb,	// (0x00018a71) call_type_pane_cp05_ParamLimits

0xadfb,	// (0x00018a71) call_type_pane_cp05

0xae4f,	// (0x00018ac5) popup_call2_audio_second_window_g1_ParamLimits

0xae4f,	// (0x00018ac5) popup_call2_audio_second_window_g1

0xaea3,	// (0x00018b19) popup_call2_audio_second_window_g2_ParamLimits

0xaea3,	// (0x00018b19) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001d1b1) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001d1b1) popup_call2_audio_second_window_g

0xaf08,	// (0x00018b7e) popup_call2_audio_second_window_t1_ParamLimits

0xaf08,	// (0x00018b7e) popup_call2_audio_second_window_t1

0xafc3,	// (0x00018c39) popup_call2_audio_second_window_t2_ParamLimits

0xafc3,	// (0x00018c39) popup_call2_audio_second_window_t2

0xb016,	// (0x00018c8c) popup_call2_audio_second_window_t3_ParamLimits

0xb016,	// (0x00018c8c) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001d1b8) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001d1b8) popup_call2_audio_second_window_t

0x97f4,	// (0x0001746a) bg_popup_call2_in_pane_cp02

0x97fe,	// (0x00017474) call_type_pane_cp04

0x9806,	// (0x0001747c) popup_call2_audio_wait_window_g1

0x980e,	// (0x00017484) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001cd91) popup_call2_audio_wait_window_g

0x9816,	// (0x0001748c) popup_call2_audio_wait_window_t3

0xb109,	// (0x00018d7f) bg_popup_call2_act_pane_ParamLimits

0xb109,	// (0x00018d7f) bg_popup_call2_act_pane

0xb1c9,	// (0x00018e3f) call_type_pane_cp03_ParamLimits

0xb1c9,	// (0x00018e3f) call_type_pane_cp03

0xb22d,	// (0x00018ea3) popup_call2_audio_first_window_g1_ParamLimits

0xb22d,	// (0x00018ea3) popup_call2_audio_first_window_g1

0xb29d,	// (0x00018f13) popup_call2_audio_first_window_g2_ParamLimits

0xb29d,	// (0x00018f13) popup_call2_audio_first_window_g2

0xa949,	// (0x000185bf) popup_call2_audio_first_window_g3_ParamLimits

0xa949,	// (0x000185bf) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001d1c1) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001d1c1) popup_call2_audio_first_window_g

0xb37b,	// (0x00018ff1) popup_call2_audio_first_window_t1_ParamLimits

0xb37b,	// (0x00018ff1) popup_call2_audio_first_window_t1

0xb47e,	// (0x000190f4) popup_call2_audio_first_window_t4_ParamLimits

0xb47e,	// (0x000190f4) popup_call2_audio_first_window_t4

0xb561,	// (0x000191d7) popup_call2_audio_first_window_t5_ParamLimits

0xb561,	// (0x000191d7) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001d1cc) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001d1cc) popup_call2_audio_first_window_t

0x9a47,	// (0x000176bd) bg_popup_call2_act_pane_g1

0xbbd0,	// (0x00019846) popup_cale_lunar_info_window_t1

0xbbde,	// (0x00019854) popup_cale_lunar_info_window_t2

0xbbec,	// (0x00019862) popup_cale_lunar_info_window_t3

0x97f4,	// (0x0001746a) bg_popup_call2_bubble_pane

0xb662,	// (0x000192d8) bg_popup_call2_in_pane_cp01_ParamLimits

0xb662,	// (0x000192d8) bg_popup_call2_in_pane_cp01

0x94d0,	// (0x00017146) call_type_pane_cp02

0xb6aa,	// (0x00019320) popup_call2_audio_out_window_g1_ParamLimits

0xb6aa,	// (0x00019320) popup_call2_audio_out_window_g1

0xb6d6,	// (0x0001934c) popup_call2_audio_out_window_g2_ParamLimits

0xb6d6,	// (0x0001934c) popup_call2_audio_out_window_g2

0xb6fe,	// (0x00019374) popup_call2_audio_out_window_g3_ParamLimits

0xb6fe,	// (0x00019374) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001d1d5) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001d1d5) popup_call2_audio_out_window_g

0xb739,	// (0x000193af) popup_call2_audio_out_window_t1_ParamLimits

0xb739,	// (0x000193af) popup_call2_audio_out_window_t1

0xb798,	// (0x0001940e) popup_call2_audio_out_window_t2_ParamLimits

0xb798,	// (0x0001940e) popup_call2_audio_out_window_t2

0xb7ec,	// (0x00019462) popup_call2_audio_out_window_t3_ParamLimits

0xb7ec,	// (0x00019462) popup_call2_audio_out_window_t3

0xb802,	// (0x00019478) popup_call2_audio_out_window_t4_ParamLimits

0xb802,	// (0x00019478) popup_call2_audio_out_window_t4

0xb818,	// (0x0001948e) popup_call2_audio_out_window_t5_ParamLimits

0xb818,	// (0x0001948e) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001d1de) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001d1de) popup_call2_audio_out_window_t

0xb87c,	// (0x000194f2) bg_popup_call2_in_pane_ParamLimits

0xb87c,	// (0x000194f2) bg_popup_call2_in_pane

0xb8d8,	// (0x0001954e) popup_call2_audio_in_window_g1_ParamLimits

0xb8d8,	// (0x0001954e) popup_call2_audio_in_window_g1

0xb910,	// (0x00019586) popup_call2_audio_in_window_g2_ParamLimits

0xb910,	// (0x00019586) popup_call2_audio_in_window_g2

0xb948,	// (0x000195be) popup_call2_audio_in_window_g3_ParamLimits

0xb948,	// (0x000195be) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001d1eb) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001d1eb) popup_call2_audio_in_window_g

0xb9a0,	// (0x00019616) popup_call2_audio_in_window_t1_ParamLimits

0xb9a0,	// (0x00019616) popup_call2_audio_in_window_t1

0xba20,	// (0x00019696) popup_call2_audio_in_window_t2_ParamLimits

0xba20,	// (0x00019696) popup_call2_audio_in_window_t2

0xbaa0,	// (0x00019716) popup_call2_audio_in_window_t3_ParamLimits

0xbaa0,	// (0x00019716) popup_call2_audio_in_window_t3

0xbaba,	// (0x00019730) popup_call2_audio_in_window_t4_ParamLimits

0xbaba,	// (0x00019730) popup_call2_audio_in_window_t4

0xbacc,	// (0x00019742) popup_call2_audio_in_window_t5_ParamLimits

0xbacc,	// (0x00019742) popup_call2_audio_in_window_t5

0xbae1,	// (0x00019757) popup_call2_audio_in_window_t6_ParamLimits

0xbae1,	// (0x00019757) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001d1f4) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001d1f4) popup_call2_audio_in_window_t

0x9a47,	// (0x000176bd) bg_popup_call2_in_pane_g1

0xbbfa,	// (0x00019870) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0001d25c) popup_cale_lunar_info_window_t

0x9a4f,	// (0x000176c5) bg_popup_call2_rect_pane_ParamLimits

0x9a4f,	// (0x000176c5) bg_popup_call2_rect_pane

0x97f4,	// (0x0001746a) call2_cli_visual_graphic_pane

0x97f4,	// (0x0001746a) call2_cli_visual_text_pane

0xbde9,	// (0x00019a5f) smil_status_volume_pane_g3

0x0002,

0x9bb5,	// (0x0001782b) call2_cli_visual_graphic_pane_g1

0x9bb5,	// (0x0001782b) call2_cli_visual_graphic_pane_g2

0x9bb5,	// (0x0001782b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001d201) call2_cli_visual_graphic_pane_g

0xbaf6,	// (0x0001976c) bg_popup_call2_rect_pane_g1

0x9c5d,	// (0x000178d3) bg_popup_call2_rect_pane_g2

0xbafe,	// (0x00019774) bg_popup_call2_rect_pane_g3

0xbb06,	// (0x0001977c) bg_popup_call2_rect_pane_g4

0xbb0e,	// (0x00019784) bg_popup_call2_rect_pane_g5

0xbb16,	// (0x0001978c) bg_popup_call2_rect_pane_g6

0xbb1e,	// (0x00019794) bg_popup_call2_rect_pane_g7

0xbb26,	// (0x0001979c) bg_popup_call2_rect_pane_g8

0xbb2e,	// (0x000197a4) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001d208) bg_popup_call2_rect_pane_g

0xbb36,	// (0x000197ac) bg_popup_call2_bubble_pane_g1

0xbb3e,	// (0x000197b4) bg_popup_call2_bubble_pane_g2

0xbb46,	// (0x000197bc) bg_popup_call2_bubble_pane_g3

0xbb4e,	// (0x000197c4) bg_popup_call2_bubble_pane_g4

0xbb56,	// (0x000197cc) bg_popup_call2_bubble_pane_g5

0xbb5e,	// (0x000197d4) bg_popup_call2_bubble_pane_g6

0xbb66,	// (0x000197dc) bg_popup_call2_bubble_pane_g7

0xbb6e,	// (0x000197e4) bg_popup_call2_bubble_pane_g8

0xbb76,	// (0x000197ec) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001d21b) bg_popup_call2_bubble_pane_g

0x1214,	// (0x0000ee8a) aid_cale_week_size_cell_pane

0x16ea,	// (0x0000f360) aid_cams_cif_uncrop_pane_ParamLimits

0x16ea,	// (0x0000f360) aid_cams_cif_uncrop_pane

0x18a3,	// (0x0000f519) aid_cams_size_cell_ParamLimits

0x18a3,	// (0x0000f519) aid_cams_size_cell

0x18b7,	// (0x0000f52d) grid_cams_pane_ParamLimits

0x18d1,	// (0x0000f547) linegrid_cams_pane_ParamLimits

0x1a06,	// (0x0000f67c) call_video_pane_t1

0x1a20,	// (0x0000f696) call_video_pane_t2

0x0001,

0xf292,	// (0x0001cf08) call_video_pane_t

0x1e6b,	// (0x0000fae1) aid_cale_month_size_cell_pane_ParamLimits

0x1e6b,	// (0x0000fae1) aid_cale_month_size_cell_pane

0xf62f,	// (0x0001d2a5) smil_status_volume_pane_g

0xbdf6,	// (0x00019a6c) volume_smil_pane_ParamLimits

0x9374,	// (0x00016fea) aid_popup2_width_pane

0x117c,	// (0x0000edf2) cell_qdial_pane_g4_ParamLimits

0x117c,	// (0x0000edf2) cell_qdial_pane_g4

0x2a55,	// (0x000106cb) aid_blid_cardinal_pane_ParamLimits

0x2a65,	// (0x000106db) aid_blid_destination_pane_ParamLimits

0x2a65,	// (0x000106db) aid_blid_destination_pane

0x9a4f,	// (0x000176c5) bg_popup_call_poc_act_pane_ParamLimits

0x9a4f,	// (0x000176c5) bg_popup_call_poc_act_pane

0x9a4f,	// (0x000176c5) bg_popup_call_poc_inact_pane_ParamLimits

0x9a4f,	// (0x000176c5) bg_popup_call_poc_inact_pane

0xbb7e,	// (0x000197f4) bg_popup_call_poc_act_pane_g1

0xbb86,	// (0x000197fc) bg_popup_call_poc_act_pane_g2

0xbb8e,	// (0x00019804) bg_popup_call_poc_act_pane_g3

0xbb4e,	// (0x000197c4) bg_popup_call_poc_act_pane_g4

0xbb56,	// (0x000197cc) bg_popup_call_poc_act_pane_g5

0xbb96,	// (0x0001980c) bg_popup_call_poc_act_pane_g6

0xbb66,	// (0x000197dc) bg_popup_call_poc_act_pane_g7

0xbb9e,	// (0x00019814) bg_popup_call_poc_act_pane_g8

0x97f4,	// (0x0001746a) main_usb_pane

0xbcfb,	// (0x00019971) popup_cale_lunar_info_window

0x1ceb,	// (0x0000f961) im_reading_pane_t1_ParamLimits

0x9f9a,	// (0x00017c10) list_im_pane_ParamLimits

0x9fab,	// (0x00017c21) scroll_pane_cp07_ParamLimits

0x97f4,	// (0x0001746a) grid_highlight_pane_cp012

0x9a4f,	// (0x000176c5) mup_scale_pane_ParamLimits

0xaa79,	// (0x000186ef) main_usb_pane_g1_ParamLimits

0xaa79,	// (0x000186ef) main_usb_pane_g1

0x3823,	// (0x00011499) main_usb_pane_g2_ParamLimits

0x3823,	// (0x00011499) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0001d245) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0001d245) main_usb_pane_g

0x3839,	// (0x000114af) main_usb_pane_t1_ParamLimits

0x3839,	// (0x000114af) main_usb_pane_t1

0x384b,	// (0x000114c1) main_usb_pane_t2_ParamLimits

0x384b,	// (0x000114c1) main_usb_pane_t2

0x385d,	// (0x000114d3) main_usb_pane_t3_ParamLimits

0x385d,	// (0x000114d3) main_usb_pane_t3

0x386f,	// (0x000114e5) main_usb_pane_t4_ParamLimits

0x386f,	// (0x000114e5) main_usb_pane_t4

0x3884,	// (0x000114fa) main_usb_pane_t5_ParamLimits

0x3884,	// (0x000114fa) main_usb_pane_t5

0x3899,	// (0x0001150f) main_usb_pane_t6_ParamLimits

0x3899,	// (0x0001150f) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0001d24a) main_usb_pane_t_ParamLimits

0x29f4,	// (0x0001066a) aid_text_placing

0x29ff,	// (0x00010675) main_location2_pane_t1_ParamLimits

0x2a15,	// (0x0001068b) main_location2_pane_t2_ParamLimits

0x2a2b,	// (0x000106a1) main_location2_pane_t3_ParamLimits

0x2a41,	// (0x000106b7) main_location2_pane_t4_ParamLimits

0x2a41,	// (0x000106b7) main_location2_pane_t4

0xf3f3,	// (0x0001d069) main_location2_pane_t_ParamLimits

0x9a8b,	// (0x00017701) find_pinb_pane_g2_ParamLimits

0x9a8b,	// (0x00017701) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001cdb7) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001cdb7) find_pinb_pane_g

0x9a97,	// (0x0001770d) find_pinb_pane_t1_ParamLimits

0x9aa9,	// (0x0001771f) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001cdbc) find_pinb_pane_t_ParamLimits

0x97f4,	// (0x0001746a) main_call3_pane

0x21df,	// (0x0000fe55) cale_month_day_heading_pane_t1_ParamLimits

0x223d,	// (0x0000feb3) cale_month_day_heading_pane_t2_ParamLimits

0x22a2,	// (0x0000ff18) cale_month_day_heading_pane_t3_ParamLimits

0x2307,	// (0x0000ff7d) cale_month_day_heading_pane_t4_ParamLimits

0x236c,	// (0x0000ffe2) cale_month_day_heading_pane_t5_ParamLimits

0x23d1,	// (0x00010047) cale_month_day_heading_pane_t6_ParamLimits

0x2436,	// (0x000100ac) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001cf40) cale_month_day_heading_pane_t_ParamLimits

0xa221,	// (0x00017e97) smil_status_volume_pane

0x32db,	// (0x00010f51) postcard_address_pane_ParamLimits

0x32db,	// (0x00010f51) postcard_address_pane

0x32f1,	// (0x00010f67) postcard_message_pane_ParamLimits

0x32f1,	// (0x00010f67) postcard_message_pane

0x37fc,	// (0x00011472) call2_cli_visual_pane_t1_ParamLimits

0x37fc,	// (0x00011472) call2_cli_visual_pane_t1

0x4068,	// (0x00011cde) postcard_message_pane_t1_ParamLimits

0x4068,	// (0x00011cde) postcard_message_pane_t1

0xbe0b,	// (0x00019a81) postcard_address_pane_t1_ParamLimits

0xbe0b,	// (0x00019a81) postcard_address_pane_t1

0x4054,	// (0x00011cca) popup_call3_audio_in_window_ParamLimits

0x4054,	// (0x00011cca) popup_call3_audio_in_window

0x3ed9,	// (0x00011b4f) bg_popup_call3_in_pane_ParamLimits

0x3ed9,	// (0x00011b4f) bg_popup_call3_in_pane

0x3f55,	// (0x00011bcb) popup_call3_audio_in_window_g1_ParamLimits

0x3f55,	// (0x00011bcb) popup_call3_audio_in_window_g1

0x3f75,	// (0x00011beb) popup_call3_audio_in_window_g2_ParamLimits

0x3f75,	// (0x00011beb) popup_call3_audio_in_window_g2

0x3f95,	// (0x00011c0b) popup_call3_audio_in_window_g3_ParamLimits

0x3f95,	// (0x00011c0b) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0001d2ac) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0001d2ac) popup_call3_audio_in_window_g

0x3fc6,	// (0x00011c3c) popup_call3_audio_in_window_t1_ParamLimits

0x3fc6,	// (0x00011c3c) popup_call3_audio_in_window_t1

0x4004,	// (0x00011c7a) popup_call3_audio_in_window_t2_ParamLimits

0x4004,	// (0x00011c7a) popup_call3_audio_in_window_t2

0x4042,	// (0x00011cb8) popup_call3_audio_in_window_t3_ParamLimits

0x4042,	// (0x00011cb8) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0001d2b5) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0001d2b5) popup_call3_audio_in_window_t

0xa878,	// (0x000184ee) bg_popup_call3_rect_pane

0xbaf6,	// (0x0001976c) bg_popup_call3_rect_pane_g1

0x9c5d,	// (0x000178d3) bg_popup_call3_rect_pane_g2

0xbafe,	// (0x00019774) bg_popup_call3_rect_pane_g3

0xbb06,	// (0x0001977c) bg_popup_call3_rect_pane_g4

0xbb0e,	// (0x00019784) bg_popup_call3_rect_pane_g5

0xbb16,	// (0x0001978c) bg_popup_call3_rect_pane_g6

0xbb1e,	// (0x00019794) bg_popup_call3_rect_pane_g7

0x2e3d,	// (0x00010ab3) mup_visualizer_osc_pane

0xa957,	// (0x000185cd) mup_visualizer_spec_pane

0x3f09,	// (0x00011b7f) call3_video_qcif_pane_ParamLimits

0x3f09,	// (0x00011b7f) call3_video_qcif_pane

0x3f1c,	// (0x00011b92) call3_video_qcif_uncrop_pane_ParamLimits

0x3f1c,	// (0x00011b92) call3_video_qcif_uncrop_pane

0x3f2c,	// (0x00011ba2) call3_video_subqcif_pane_ParamLimits

0x3f2c,	// (0x00011ba2) call3_video_subqcif_pane

0x3f42,	// (0x00011bb8) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f42,	// (0x00011bb8) call3_video_subqcif_uncrop_pane

0x3fb5,	// (0x00011c2b) popup_call3_audio_in_window_g4_ParamLimits

0x3fb5,	// (0x00011c2b) popup_call3_audio_in_window_g4

0x3ec8,	// (0x00011b3e) mup_spec_half_pane

0x3ed1,	// (0x00011b47) mup_spec_half_pane_cp

0xbda9,	// (0x00019a1f) mup_osc_middle_pane

0xbdb2,	// (0x00019a28) mup_visualizer_osc_pane_g1

0x3ea8,	// (0x00011b1e) mup_spec_bar_pane_ParamLimits

0x3ea8,	// (0x00011b1e) mup_spec_bar_pane

0xbd96,	// (0x00019a0c) mup_spec_bar_pane_g1

0xbda0,	// (0x00019a16) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001d2a0) mup_spec_bar_pane_g

0x1214,	// (0x0000ee8a) aid_cale_week_size_cell_pane_ParamLimits

0x1227,	// (0x0000ee9d) bg_cale_heading_pane_ParamLimits

0x9ce7,	// (0x0001795d) bg_cale_pane_cp01_ParamLimits

0x1243,	// (0x0000eeb9) cale_week_corner_pane_ParamLimits

0x1259,	// (0x0000eecf) cale_week_day_heading_pane_ParamLimits

0x1275,	// (0x0000eeeb) cale_week_scroll_pane_g1_ParamLimits

0x128e,	// (0x0000ef04) cale_week_scroll_pane_g2_ParamLimits

0x129f,	// (0x0000ef15) cale_week_scroll_pane_g3_ParamLimits

0x12b0,	// (0x0000ef26) cale_week_scroll_pane_g4_ParamLimits

0x12c1,	// (0x0000ef37) cale_week_scroll_pane_g5_ParamLimits

0x12d2,	// (0x0000ef48) cale_week_scroll_pane_g6_ParamLimits

0x12e3,	// (0x0000ef59) cale_week_scroll_pane_g7_ParamLimits

0x12f4,	// (0x0000ef6a) cale_week_scroll_pane_g8_ParamLimits

0x1305,	// (0x0000ef7b) cale_week_scroll_pane_g9_ParamLimits

0x1316,	// (0x0000ef8c) cale_week_scroll_pane_g10_ParamLimits

0x1327,	// (0x0000ef9d) cale_week_scroll_pane_g11_ParamLimits

0x1338,	// (0x0000efae) cale_week_scroll_pane_g12_ParamLimits

0x1349,	// (0x0000efbf) cale_week_scroll_pane_g13_ParamLimits

0x1362,	// (0x0000efd8) cale_week_scroll_pane_g14_ParamLimits

0x137b,	// (0x0000eff1) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001ce48) cale_week_scroll_pane_g_ParamLimits

0x1394,	// (0x0000f00a) cale_week_time_pane_ParamLimits

0x13a5,	// (0x0000f01b) grid_cale_week_pane_ParamLimits

0x9d00,	// (0x00017976) listscroll_cale_week_pane_t1

0x13c0,	// (0x0000f036) scroll_pane_cp08_ParamLimits

0x1ebc,	// (0x0000fb32) cale_month_corner_pane_ParamLimits

0xa1c1,	// (0x00017e37) cale_month_pane_t1

0x21a0,	// (0x0000fe16) cale_month_week_pane_ParamLimits

0x2818,	// (0x0001048e) popup_call_status_window_g1_ParamLimits

0x282c,	// (0x000104a2) popup_call_status_window_g2_ParamLimits

0x2840,	// (0x000104b6) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001cff0) popup_call_status_window_g_ParamLimits

0xa5ab,	// (0x00018221) aid_call2_pane

0x3105,	// (0x00010d7b) msg_header_pane_g1

0x32db,	// (0x00010f51) postcard_address2_pane_ParamLimits

0x32db,	// (0x00010f51) postcard_address2_pane

0x32f1,	// (0x00010f67) postcard_message2_pane_ParamLimits

0x32f1,	// (0x00010f67) postcard_message2_pane

0x3e65,	// (0x00011adb) message2_row_pane_ParamLimits

0x3e65,	// (0x00011adb) message2_row_pane

0xbd51,	// (0x000199c7) address2_row_pane_ParamLimits

0xbd51,	// (0x000199c7) address2_row_pane

0xbd64,	// (0x000199da) postcard_message2_row_pane_g1

0xbd6c,	// (0x000199e2) postcard_message2_row_pane_t1

0xbd64,	// (0x000199da) address2_row_pane_g1

0xbd6c,	// (0x000199e2) address2_row_pane_t1

0x15ce,	// (0x0000f244) aid_size_cell_vorec

0x97f4,	// (0x0001746a) main_rss_pane

0x3e88,	// (0x00011afe) rss_list_single_pane_ParamLimits

0x3e88,	// (0x00011afe) rss_list_single_pane

0xbd7a,	// (0x000199f0) rss_list_single_pane_t1

0xbd88,	// (0x000199fe) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0001d29b) rss_list_single_pane_t

0x97f4,	// (0x0001746a) main_camera2_pane

0x97f4,	// (0x0001746a) main_video2_pane

0x40d7,	// (0x00011d4d) cams_zoom_pane_cp2_ParamLimits

0x40d7,	// (0x00011d4d) cams_zoom_pane_cp2

0x40ee,	// (0x00011d64) image2_vga_pane_ParamLimits

0x40ee,	// (0x00011d64) image2_vga_pane

0x4136,	// (0x00011dac) main_camera2_pane_g1_ParamLimits

0x4136,	// (0x00011dac) main_camera2_pane_g1

0x4156,	// (0x00011dcc) main_camera2_pane_g2_ParamLimits

0x4156,	// (0x00011dcc) main_camera2_pane_g2

0x416d,	// (0x00011de3) main_camera2_pane_g3_ParamLimits

0x416d,	// (0x00011de3) main_camera2_pane_g3

0x4184,	// (0x00011dfa) main_camera2_pane_g4_ParamLimits

0x4184,	// (0x00011dfa) main_camera2_pane_g4

0x419b,	// (0x00011e11) main_camera2_pane_g5_ParamLimits

0x419b,	// (0x00011e11) main_camera2_pane_g5

0x41b2,	// (0x00011e28) main_camera2_pane_g6_ParamLimits

0x41b2,	// (0x00011e28) main_camera2_pane_g6

0x41c9,	// (0x00011e3f) main_camera2_pane_g7_ParamLimits

0x41c9,	// (0x00011e3f) main_camera2_pane_g7

0x41e0,	// (0x00011e56) main_camera2_pane_g8_ParamLimits

0x41e0,	// (0x00011e56) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0001d2bc) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0001d2bc) main_camera2_pane_g

0x420e,	// (0x00011e84) main_camera2_pane_t1_ParamLimits

0x420e,	// (0x00011e84) main_camera2_pane_t1

0x4243,	// (0x00011eb9) main_camera2_pane_t2_ParamLimits

0x4243,	// (0x00011eb9) main_camera2_pane_t2

0x4260,	// (0x00011ed6) main_camera2_pane_t3_ParamLimits

0x4260,	// (0x00011ed6) main_camera2_pane_t3

0x42be,	// (0x00011f34) main_camera2_pane_t4_ParamLimits

0x42be,	// (0x00011f34) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0001d2cf) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0001d2cf) main_camera2_pane_t

0x4347,	// (0x00011fbd) cams_zoom_pane_cp4_ParamLimits

0x4347,	// (0x00011fbd) cams_zoom_pane_cp4

0x435d,	// (0x00011fd3) image2_cif_pane_ParamLimits

0x435d,	// (0x00011fd3) image2_cif_pane

0x4388,	// (0x00011ffe) image2_subqcif_pane_ParamLimits

0x4388,	// (0x00011ffe) image2_subqcif_pane

0x43a3,	// (0x00012019) main_video2_pane_g1_ParamLimits

0x43a3,	// (0x00012019) main_video2_pane_g1

0x43bd,	// (0x00012033) main_video2_pane_g2_ParamLimits

0x43bd,	// (0x00012033) main_video2_pane_g2

0x43d3,	// (0x00012049) main_video2_pane_g3_ParamLimits

0x43d3,	// (0x00012049) main_video2_pane_g3

0x43e9,	// (0x0001205f) main_video2_pane_g4_ParamLimits

0x43e9,	// (0x0001205f) main_video2_pane_g4

0x43ff,	// (0x00012075) main_video2_pane_g5_ParamLimits

0x43ff,	// (0x00012075) main_video2_pane_g5

0x4415,	// (0x0001208b) main_video2_pane_g6_ParamLimits

0x4415,	// (0x0001208b) main_video2_pane_g6

0x0005,

0xf668,	// (0x0001d2de) main_video2_pane_g_ParamLimits

0xf668,	// (0x0001d2de) main_video2_pane_g

0x442f,	// (0x000120a5) main_video2_pane_t1_ParamLimits

0x442f,	// (0x000120a5) main_video2_pane_t1

0x4453,	// (0x000120c9) main_video2_pane_t2_ParamLimits

0x4453,	// (0x000120c9) main_video2_pane_t2

0x44a3,	// (0x00012119) main_video2_pane_t3_ParamLimits

0x44a3,	// (0x00012119) main_video2_pane_t3

0x0002,

0xf675,	// (0x0001d2eb) main_video2_pane_t_ParamLimits

0xf675,	// (0x0001d2eb) main_video2_pane_t

0x3957,	// (0x000115cd) call_muted_g2

0x0001,

0xf617,	// (0x0001d28d) call_muted_g

0x97f4,	// (0x0001746a) main_mup2_pane

0x44eb,	// (0x00012161) main_mup2_pane_g1_ParamLimits

0x44eb,	// (0x00012161) main_mup2_pane_g1

0x44f7,	// (0x0001216d) main_mup2_pane_g2_ParamLimits

0x44f7,	// (0x0001216d) main_mup2_pane_g2

0xbf2c,	// (0x00019ba2) main_mup_pane_g13_cp1

0xbf34,	// (0x00019baa) mup_volume_pane_cp1

0x4515,	// (0x0001218b) main_mup2_pane_g4_ParamLimits

0x4515,	// (0x0001218b) main_mup2_pane_g4

0x4527,	// (0x0001219d) main_mup2_pane_g5_ParamLimits

0x4527,	// (0x0001219d) main_mup2_pane_g5

0x4539,	// (0x000121af) main_mup2_pane_g6_ParamLimits

0x4539,	// (0x000121af) main_mup2_pane_g6

0x454b,	// (0x000121c1) main_mup2_pane_g7_ParamLimits

0x454b,	// (0x000121c1) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0001d2f2) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0001d2f2) main_mup2_pane_g

0x4563,	// (0x000121d9) main_mup2_pane_t1_ParamLimits

0x4563,	// (0x000121d9) main_mup2_pane_t1

0x4579,	// (0x000121ef) main_mup2_pane_t2_ParamLimits

0x4579,	// (0x000121ef) main_mup2_pane_t2

0x458f,	// (0x00012205) main_mup2_pane_t3_ParamLimits

0x458f,	// (0x00012205) main_mup2_pane_t3

0x45a5,	// (0x0001221b) main_mup2_pane_t4_ParamLimits

0x45a5,	// (0x0001221b) main_mup2_pane_t4

0x45bd,	// (0x00012233) main_mup2_pane_t5_ParamLimits

0x45bd,	// (0x00012233) main_mup2_pane_t5

0x45d5,	// (0x0001224b) main_mup2_pane_t6_ParamLimits

0x45d5,	// (0x0001224b) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0001d301) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0001d301) main_mup2_pane_t

0x4605,	// (0x0001227b) mup2_visualizer_pane_ParamLimits

0x4605,	// (0x0001227b) mup2_visualizer_pane

0x4633,	// (0x000122a9) mup_progress_pane_cp_ParamLimits

0x4633,	// (0x000122a9) mup_progress_pane_cp

0xbf0e,	// (0x00019b84) mup_volume_pane_cp_ParamLimits

0xbf0e,	// (0x00019b84) mup_volume_pane_cp

0x4649,	// (0x000122bf) mup2_visualizer_pane_g1_ParamLimits

0x4649,	// (0x000122bf) mup2_visualizer_pane_g1

0xbe4d,	// (0x00019ac3) mup2_visualizer_pane_g2_ParamLimits

0xbe4d,	// (0x00019ac3) mup2_visualizer_pane_g2

0x465e,	// (0x000122d4) mup2_visualizer_pane_g3_ParamLimits

0x465e,	// (0x000122d4) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0001d30e) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0001d30e) mup2_visualizer_pane_g

0xabc2,	// (0x00018838) aid_size_cell_fmradio

0x3b07,	// (0x0001177d) aid_height_parent_landcape

0xa029,	// (0x00017c9f) wml_content_pane_cp

0xa031,	// (0x00017ca7) wml_tabs_pane

0xa03a,	// (0x00017cb0) popup_wml_miniature_window

0xa042,	// (0x00017cb8) scroll_pane_cp021

0xa056,	// (0x00017ccc) wml_content_pane_comp8

0x97f4,	// (0x0001746a) bg_popup_sub_pane_cp05

0xbe6b,	// (0x00019ae1) popup_wml_miniature_window_g1

0xbe73,	// (0x00019ae9) wml_miniature_view_pane

0x466a,	// (0x000122e0) aid_size_wml_view

0x4672,	// (0x000122e8) wml_miniature_view_pane_g1

0x467b,	// (0x000122f1) wml_miniature_view_pane_g2

0x4684,	// (0x000122fa) wml_miniature_view_pane_g3

0x468c,	// (0x00012302) wml_miniature_view_pane_g4

0x4694,	// (0x0001230a) wml_miniature_view_pane_g5

0x469c,	// (0x00012312) wml_miniature_view_pane_g6

0x46a4,	// (0x0001231a) wml_miniature_view_pane_g7

0x46ac,	// (0x00012322) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0001d315) wml_miniature_view_pane_g

0xbe7b,	// (0x00019af1) background_graphic_ParamLimits

0xbe7b,	// (0x00019af1) background_graphic

0xbe87,	// (0x00019afd) wml_tabs_2_pane

0xbe90,	// (0x00019b06) wml_tabs_3_pane_ParamLimits

0xbe90,	// (0x00019b06) wml_tabs_3_pane

0xbea2,	// (0x00019b18) wml_tabs_4_pane_ParamLimits

0xbea2,	// (0x00019b18) wml_tabs_4_pane

0xbeb8,	// (0x00019b2e) wml_tabs_5_pane_ParamLimits

0xbeb8,	// (0x00019b2e) wml_tabs_5_pane

0xbed2,	// (0x00019b48) wml_tabs_pane_g2_ParamLimits

0xbed2,	// (0x00019b48) wml_tabs_pane_g2

0xbee6,	// (0x00019b5c) wml_tabs_pane_g3_ParamLimits

0xbee6,	// (0x00019b5c) wml_tabs_pane_g3

0x46b4,	// (0x0001232a) wml_tabs_2_active_pane_ParamLimits

0x46b4,	// (0x0001232a) wml_tabs_2_active_pane

0x46c8,	// (0x0001233e) wml_tabs_2_passive_pane_ParamLimits

0x46c8,	// (0x0001233e) wml_tabs_2_passive_pane

0x46dc,	// (0x00012352) wml_tabs_3_active_pane_cp_ParamLimits

0x46dc,	// (0x00012352) wml_tabs_3_active_pane_cp

0x46f1,	// (0x00012367) wml_tabs_3_passive_pane_ParamLimits

0x46f1,	// (0x00012367) wml_tabs_3_passive_pane

0x4704,	// (0x0001237a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4704,	// (0x0001237a) wml_tabs_3_passive_pane_cp

0x471b,	// (0x00012391) tabs_4_active_pane

0x4723,	// (0x00012399) tabs_4_passive_pane

0x472d,	// (0x000123a3) tabs_4_passive_pane_cp

0x4735,	// (0x000123ab) tabs_4_passive_pane_cp2

0x381b,	// (0x00011491) aid_height_text

0x2e0f,	// (0x00010a85) mup_volume_cont_pane_ParamLimits

0x2e0f,	// (0x00010a85) mup_volume_cont_pane

0x0e18,	// (0x0000ea8e) aid_size_cell_pinb

0x0e22,	// (0x0000ea98) aid_size_list_pinb

0x461f,	// (0x00012295) mup2_volume_cont_pane_ParamLimits

0x461f,	// (0x00012295) mup2_volume_cont_pane

0xbefa,	// (0x00019b70) mup2_volume_cont_pane_g1_ParamLimits

0xbefa,	// (0x00019b70) mup2_volume_cont_pane_g1

0x0af1,	// (0x0000e767) aid_size_cell_touch_ParamLimits

0x0af1,	// (0x0000e767) aid_size_cell_touch

0x0d07,	// (0x0000e97d) touch_pane_ParamLimits

0x0d07,	// (0x0000e97d) touch_pane

0x9362,	// (0x00016fd8) main_rss2_pane

0xbf3c,	// (0x00019bb2) listscroll_rss2_pane

0xbf45,	// (0x00019bbb) rss2_navigation_pane

0xbf4d,	// (0x00019bc3) list_rss2_pane

0xa73e,	// (0x000183b4) scroll_pane_cp22

0xbf55,	// (0x00019bcb) rss2_navigation_pane_g1

0xbf5e,	// (0x00019bd4) rss2_navigation_pane_g2

0xbf66,	// (0x00019bdc) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0001d326) rss2_navigation_pane_g

0xbf6e,	// (0x00019be4) rss2_navigation_pane_t1

0x473f,	// (0x000123b5) rss2_list_single_pane_ParamLimits

0x473f,	// (0x000123b5) rss2_list_single_pane

0xbf7c,	// (0x00019bf2) rss2_list_single_pane_t2

0xbf8a,	// (0x00019c00) rss2_list_single_pane_t3_ParamLimits

0xbf8a,	// (0x00019c00) rss2_list_single_pane_t3

0xbfa7,	// (0x00019c1d) rss2_list_single_pane_t4

0x2602,	// (0x00010278) smil_status_pane_g1

0x93d3,	// (0x00017049) main_image2_pane_ParamLimits

0x93d3,	// (0x00017049) main_image2_pane

0x41f7,	// (0x00011e6d) main_camera2_pane_g9_ParamLimits

0x41f7,	// (0x00011e6d) main_camera2_pane_g9

0x4313,	// (0x00011f89) main_camera2_pane_t5_ParamLimits

0x4313,	// (0x00011f89) main_camera2_pane_t5

0xbe22,	// (0x00019a98) main_camera2_pane_t6_ParamLimits

0xbe22,	// (0x00019a98) main_camera2_pane_t6

0x4759,	// (0x000123cf) main_image2_pane_g1_ParamLimits

0x4759,	// (0x000123cf) main_image2_pane_g1

0x3532,	// (0x000111a8) smil2_video_pane_ParamLimits

0x3532,	// (0x000111a8) smil2_video_pane

0x9380,	// (0x00016ff6) aid_zoom_text_primary_cp

0x93c9,	// (0x0001703f) popup_preview_fixed_window

0x9f92,	// (0x00017c08) im_reading_pane_g1

0x40c9,	// (0x00011d3f) cams2_bc_adjust_pane_cp_ParamLimits

0x40c9,	// (0x00011d3f) cams2_bc_adjust_pane_cp

0x4339,	// (0x00011faf) cams2_bc_adjust_pane_ParamLimits

0x4339,	// (0x00011faf) cams2_bc_adjust_pane

0xbfb5,	// (0x00019c2b) cams2_bc_adjust_pane_g1

0xbfbd,	// (0x00019c33) cams2_slider_pane

0xbfc6,	// (0x00019c3c) cams2_slider_pane_g1

0xbfcf,	// (0x00019c45) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0001d32d) cams2_slider_pane_g

0x0f12,	// (0x0000eb88) calc_display_pane_ParamLimits

0x0f38,	// (0x0000ebae) calc_paper_pane_ParamLimits

0x0f5b,	// (0x0000ebd1) grid_calc_pane_ParamLimits

0xa60d,	// (0x00018283) popup_clock_digital_window_t1_ParamLimits

0xab5f,	// (0x000187d5) main_image_pane_t1

0x0ef4,	// (0x0000eb6a) aid_size_cell_calc_ParamLimits

0x0ef4,	// (0x0000eb6a) aid_size_cell_calc

0x3b4d,	// (0x000117c3) popup_blid_sat_info2_window_ParamLimits

0x3b4d,	// (0x000117c3) popup_blid_sat_info2_window

0xbff1,	// (0x00019c67) aid_size_cell_blid

0xbff9,	// (0x00019c6f) bg_popup_window_pane_cp07

0xc01c,	// (0x00019c92) grid_popup_blid_pane

0xc026,	// (0x00019c9c) heading_pane_cp05_ParamLimits

0xc026,	// (0x00019c9c) heading_pane_cp05

0xc0f0,	// (0x00019d66) cell_popup_blid_pane_ParamLimits

0xc0f0,	// (0x00019d66) cell_popup_blid_pane

0xc11a,	// (0x00019d90) cell_popup_blid_pane_g1

0xc122,	// (0x00019d98) cell_popup_blid_pane_t1

0x45ef,	// (0x00012265) mup2_indicator_pane_ParamLimits

0x45ef,	// (0x00012265) mup2_indicator_pane

0xa878,	// (0x000184ee) mup2_visualizer_osc_pane

0xbe59,	// (0x00019acf) mup2_visualizer_spec_pane_ParamLimits

0xbe59,	// (0x00019acf) mup2_visualizer_spec_pane

0x476f,	// (0x000123e5) mup2_spec_half_pane

0x4778,	// (0x000123ee) mup2_spec_half_pane_cp

0x4780,	// (0x000123f6) mup2_spec_bar_pane_ParamLimits

0x4780,	// (0x000123f6) mup2_spec_bar_pane

0xbd96,	// (0x00019a0c) mup2_spec_bar_pane_g1

0xbda0,	// (0x00019a16) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001d2a0) mup2_spec_bar_pane_g

0x47a0,	// (0x00012416) mup2_osc_middle_pane

0xbdb2,	// (0x00019a28) mup2_visualizer_osc_pane_g1

0x9401,	// (0x00017077) popup_number_entry_window_t1_ParamLimits

0x9414,	// (0x0001708a) popup_number_entry_window_t2_ParamLimits

0x9426,	// (0x0001709c) popup_number_entry_window_t3_ParamLimits

0x0d59,	// (0x0000e9cf) popup_number_entry_window_t5_ParamLimits

0x0d59,	// (0x0000e9cf) popup_number_entry_window_t5

0xf0ec,	// (0x0001cd62) popup_number_entry_window_t_ParamLimits

0x9438,	// (0x000170ae) text_title_cp2_ParamLimits

0xaa39,	// (0x000186af) aid_hotspot_pointer_text2_pane

0xaa5f,	// (0x000186d5) main_viewer_pane_g9_ParamLimits

0xaa5f,	// (0x000186d5) main_viewer_pane_g9

0xa1c1,	// (0x00017e37) cale_month_pane_t1_ParamLimits

0xa256,	// (0x00017ecc) bg_cale_pane_ParamLimits

0xa26e,	// (0x00017ee4) list_cale_pane_ParamLimits

0x9d00,	// (0x00017976) listscroll_cale_day_pane_t1

0xa27f,	// (0x00017ef5) scroll_pane_cp09_ParamLimits

0x2e45,	// (0x00010abb) main_mup_eq_pane_t1_ParamLimits

0x2e45,	// (0x00010abb) main_mup_eq_pane_t1

0x2e61,	// (0x00010ad7) main_mup_eq_pane_t2_ParamLimits

0x2e61,	// (0x00010ad7) main_mup_eq_pane_t2

0x2e7d,	// (0x00010af3) main_mup_eq_pane_t3_ParamLimits

0x2e7d,	// (0x00010af3) main_mup_eq_pane_t3

0x2e9b,	// (0x00010b11) main_mup_eq_pane_t4_ParamLimits

0x2e9b,	// (0x00010b11) main_mup_eq_pane_t4

0x2eb9,	// (0x00010b2f) main_mup_eq_pane_t5_ParamLimits

0x2eb9,	// (0x00010b2f) main_mup_eq_pane_t5

0x2ed7,	// (0x00010b4d) main_mup_eq_pane_t6_ParamLimits

0x2ed7,	// (0x00010b4d) main_mup_eq_pane_t6

0x2eed,	// (0x00010b63) main_mup_eq_pane_t7_ParamLimits

0x2eed,	// (0x00010b63) main_mup_eq_pane_t7

0x2f03,	// (0x00010b79) main_mup_eq_pane_t8_ParamLimits

0x2f03,	// (0x00010b79) main_mup_eq_pane_t8

0x2f19,	// (0x00010b8f) main_mup_eq_pane_t9_ParamLimits

0x2f19,	// (0x00010b8f) main_mup_eq_pane_t9

0x2f35,	// (0x00010bab) main_mup_eq_pane_t10_ParamLimits

0x2f35,	// (0x00010bab) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001d0ef) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001d0ef) main_mup_eq_pane_t

0x300a,	// (0x00010c80) mup_equalizer_pane_cp5_ParamLimits

0x3022,	// (0x00010c98) mup_equalizer_pane_cp6_ParamLimits

0x303a,	// (0x00010cb0) mup_equalizer_pane_cp7_ParamLimits

0x9362,	// (0x00016fd8) main_gallery_pane

0xbdbb,	// (0x00019a31) smil2_volume_pane

0xbdc3,	// (0x00019a39) smil_status_volume_pane_g1_ParamLimits

0xbdd6,	// (0x00019a4c) smil_status_volume_pane_g2_ParamLimits

0xbde9,	// (0x00019a5f) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0001d2a5) smil_status_volume_pane_g_ParamLimits

0xbff9,	// (0x00019c6f) bg_popup_window_pane_cp07_ParamLimits

0xc007,	// (0x00019c7d) blid_firmament_pane

0x47a9,	// (0x0001241f) aid_size_cell_gallery_ParamLimits

0x47a9,	// (0x0001241f) aid_size_cell_gallery

0x47bf,	// (0x00012435) grid_gallery_pane_ParamLimits

0x47bf,	// (0x00012435) grid_gallery_pane

0x47da,	// (0x00012450) cell_gallery_pane_ParamLimits

0x47da,	// (0x00012450) cell_gallery_pane

0xc130,	// (0x00019da6) bg_cell_gallery_focus_pane_ParamLimits

0xc130,	// (0x00019da6) bg_cell_gallery_focus_pane

0xc142,	// (0x00019db8) cell_gallery_pane_g1_ParamLimits

0xc142,	// (0x00019db8) cell_gallery_pane_g1

0x482b,	// (0x000124a1) cell_gallery_pane_g2_ParamLimits

0x482b,	// (0x000124a1) cell_gallery_pane_g2

0x4838,	// (0x000124ae) cell_gallery_pane_g3_ParamLimits

0x4838,	// (0x000124ae) cell_gallery_pane_g3

0xc14e,	// (0x00019dc4) cell_gallery_pane_g4_ParamLimits

0xc14e,	// (0x00019dc4) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0001d353) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0001d353) cell_gallery_pane_g

0xc15a,	// (0x00019dd0) bg_cell_gallery_focus_pane_g1

0xc162,	// (0x00019dd8) bg_cell_gallery_focus_pane_g2

0xc16a,	// (0x00019de0) bg_cell_gallery_focus_pane_g3

0xc172,	// (0x00019de8) bg_cell_gallery_focus_pane_g4

0xc17a,	// (0x00019df0) bg_cell_gallery_focus_pane_g5

0xc182,	// (0x00019df8) bg_cell_gallery_focus_pane_g6

0xc18a,	// (0x00019e00) bg_cell_gallery_focus_pane_g7

0xc192,	// (0x00019e08) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0001d35c) bg_cell_gallery_focus_pane_g

0xc19a,	// (0x00019e10) aid_firma_cardinal

0xc1ae,	// (0x00019e24) blid_firmament_pane_t1

0xc1c5,	// (0x00019e3b) blid_firmament_pane_t2

0xc1dc,	// (0x00019e52) blid_firmament_pane_t3

0xc1f3,	// (0x00019e69) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0001d36d) blid_firmament_pane_t

0xc20a,	// (0x00019e80) blid_sat_info_pane

0xc21a,	// (0x00019e90) blid_sat_info_pane_g1

0xc21a,	// (0x00019e90) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0001d376) blid_sat_info_pane_g

0xc224,	// (0x00019e9a) blid_sat_info_pane_t1

0xc232,	// (0x00019ea8) smil2_volume_content_pane

0xc23b,	// (0x00019eb1) smil2_volume_pane_g1

0xc243,	// (0x00019eb9) smil2_volume_content_pane_g1

0xc24c,	// (0x00019ec2) smil2_volume_content_pane_g2

0xc255,	// (0x00019ecb) smil2_volume_content_pane_g3

0xc25e,	// (0x00019ed4) smil2_volume_content_pane_g4

0xc267,	// (0x00019edd) smil2_volume_content_pane_g5

0xc270,	// (0x00019ee6) smil2_volume_content_pane_g6

0xc279,	// (0x00019eef) smil2_volume_content_pane_g7

0xc282,	// (0x00019ef8) smil2_volume_content_pane_g8

0xc28b,	// (0x00019f01) smil2_volume_content_pane_g9

0xc294,	// (0x00019f0a) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0001d37b) smil2_volume_content_pane_g

0x1420,	// (0x0000f096) cale_week_day_heading_pane_t1_ParamLimits

0x1434,	// (0x0000f0aa) cale_week_day_heading_pane_t2_ParamLimits

0x1448,	// (0x0000f0be) cale_week_day_heading_pane_t3_ParamLimits

0x145c,	// (0x0000f0d2) cale_week_day_heading_pane_t4_ParamLimits

0x1470,	// (0x0000f0e6) cale_week_day_heading_pane_t5_ParamLimits

0x1484,	// (0x0000f0fa) cale_week_day_heading_pane_t6_ParamLimits

0x1498,	// (0x0000f10e) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001ce67) cale_week_day_heading_pane_t_ParamLimits

0x9d12,	// (0x00017988) bg_cale_side_pane_ParamLimits

0x14ac,	// (0x0000f122) cale_week_time_pane_t1_ParamLimits

0x14c4,	// (0x0000f13a) cale_week_time_pane_t2_ParamLimits

0x14dc,	// (0x0000f152) cale_week_time_pane_t3_ParamLimits

0x14f4,	// (0x0000f16a) cale_week_time_pane_t4_ParamLimits

0x150c,	// (0x0000f182) cale_week_time_pane_t5_ParamLimits

0x1524,	// (0x0000f19a) cale_week_time_pane_t6_ParamLimits

0x153c,	// (0x0000f1b2) cale_week_time_pane_t7_ParamLimits

0x1558,	// (0x0000f1ce) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001ce76) cale_week_time_pane_t_ParamLimits

0x1578,	// (0x0000f1ee) cell_cale_week_pane_g2_ParamLimits

0x9d12,	// (0x00017988) bg_cale_side_pane_cp01_ParamLimits

0x249b,	// (0x00010111) cale_month_week_pane_t1_ParamLimits

0x24b2,	// (0x00010128) cale_month_week_pane_t2_ParamLimits

0x24c9,	// (0x0001013f) cale_month_week_pane_t3_ParamLimits

0x24e0,	// (0x00010156) cale_month_week_pane_t4_ParamLimits

0x24f7,	// (0x0001016d) cale_month_week_pane_t5_ParamLimits

0x250e,	// (0x00010184) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001cf4f) cale_month_week_pane_t_ParamLimits

0xa1fd,	// (0x00017e73) cell_cale_month_pane_g1_ParamLimits

0x9362,	// (0x00016fd8) main_cale_event_viewer_pane

0x9362,	// (0x00016fd8) listscroll_cale_event_viewer_pane

0xc29d,	// (0x00019f13) list_cale_ev_pane

0xc2a5,	// (0x00019f1b) scroll_pane_cp023

0x4845,	// (0x000124bb) field_cale_ev_pane_ParamLimits

0x4845,	// (0x000124bb) field_cale_ev_pane

0xc2b1,	// (0x00019f27) field_cale_ev_content_pane_ParamLimits

0xc2b1,	// (0x00019f27) field_cale_ev_content_pane

0xc2bd,	// (0x00019f33) field_cale_ev_pane_g1_ParamLimits

0xc2bd,	// (0x00019f33) field_cale_ev_pane_g1

0xc2c9,	// (0x00019f3f) field_cale_ev_pane_g2_ParamLimits

0xc2c9,	// (0x00019f3f) field_cale_ev_pane_g2

0xc2e1,	// (0x00019f57) field_cale_ev_pane_g3_ParamLimits

0xc2e1,	// (0x00019f57) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0001d390) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0001d390) field_cale_ev_pane_g

0xc2f9,	// (0x00019f6f) field_cale_ev_pane_t1_ParamLimits

0xc2f9,	// (0x00019f6f) field_cale_ev_pane_t1

0x4869,	// (0x000124df) field_cale_ev_content_pane_t1_ParamLimits

0x4869,	// (0x000124df) field_cale_ev_content_pane_t1

0xaa03,	// (0x00018679) bg_button_pane_cp01

0x9b3c,	// (0x000177b2) listscroll_cale_week_pane_ParamLimits

0x120a,	// (0x0000ee80) popup_toolbar_window_cp01

0x9d00,	// (0x00017976) listscroll_cale_week_pane_t1_ParamLimits

0x9b3c,	// (0x000177b2) listscroll_cale_day_pane_ParamLimits

0x2662,	// (0x000102d8) popup_toolbar_window_cp02

0x9d00,	// (0x00017976) listscroll_cale_day_pane_t1_ParamLimits

0x9b3c,	// (0x000177b2) main_cale_month_pane_ParamLimits

0x3dcd,	// (0x00011a43) popup_toolbar_window_cp03_ParamLimits

0x3dcd,	// (0x00011a43) popup_toolbar_window_cp03

0x33f0,	// (0x00011066) main_image_pane_g2_ParamLimits

0x33f0,	// (0x00011066) main_image_pane_g2

0x3401,	// (0x00011077) main_image_pane_g3_ParamLimits

0x3401,	// (0x00011077) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001d181) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001d181) main_image_pane_g

0xab5f,	// (0x000187d5) main_image_pane_t1_ParamLimits

0x3412,	// (0x00011088) main_image_pane_t2_ParamLimits

0x3412,	// (0x00011088) main_image_pane_t2

0x3424,	// (0x0001109a) main_image_pane_t3_ParamLimits

0x3424,	// (0x0001109a) main_image_pane_t3

0x344c,	// (0x000110c2) main_image_pane_t4_ParamLimits

0x344c,	// (0x000110c2) main_image_pane_t4

0x0003,

0xf512,	// (0x0001d188) main_image_pane_t_ParamLimits

0xf512,	// (0x0001d188) main_image_pane_t

0x346c,	// (0x000110e2) popup_image_details_window_cp01

0x3476,	// (0x000110ec) popup_toobar_trans_pane_cp01_ParamLimits

0x3476,	// (0x000110ec) popup_toobar_trans_pane_cp01

0x3c40,	// (0x000118b6) popup_image_details_window_ParamLimits

0x3c40,	// (0x000118b6) popup_image_details_window

0xbd07,	// (0x0001997d) popup_image_focus_window

0x4083,	// (0x00011cf9) camera2_autofocus_pane_ParamLimits

0x4083,	// (0x00011cf9) camera2_autofocus_pane

0x9362,	// (0x00016fd8) bg_popup_sub_pane_cp06

0xc310,	// (0x00019f86) popup_image_focus_window_g1

0xc318,	// (0x00019f8e) popup_image_focus_window_g2

0xc320,	// (0x00019f96) popup_image_focus_window_g3

0xc328,	// (0x00019f9e) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0001d397) popup_image_focus_window_g

0xc330,	// (0x00019fa6) popup_image_focus_window_t1

0xc33e,	// (0x00019fb4) popup_image_focus_window_t2

0xc34e,	// (0x00019fc4) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0001d3a0) popup_image_focus_window_t

0xc35c,	// (0x00019fd2) camera2_autofocus_pane_g1

0x93d3,	// (0x00017049) bg_tb_trans_pane_cp01

0xc36a,	// (0x00019fe0) popup_image_details_window_g1

0xc37d,	// (0x00019ff3) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0001d3b2) popup_image_details_window_g

0xc3a6,	// (0x0001a01c) popup_image_details_window_t1

0xc3b8,	// (0x0001a02e) popup_image_details_window_t2

0xc3d1,	// (0x0001a047) popup_image_details_window_t3

0xc3e5,	// (0x0001a05b) popup_image_details_window_t4

0xc400,	// (0x0001a076) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0001d3b9) popup_image_details_window_t

0x9b0e,	// (0x00017784) bg_calc_paper_pane_ParamLimits

0x9362,	// (0x00016fd8) grid_highlight_pane_cp013

0x9b22,	// (0x00017798) list_calc_pane_ParamLimits

0x9b34,	// (0x000177aa) scroll_pane_cp024

0x9b3c,	// (0x000177b2) bg_calc_display_pane_ParamLimits

0x1052,	// (0x0000ecc8) calc_display_pane_t1_ParamLimits

0x1064,	// (0x0000ecda) calc_display_pane_t2_ParamLimits

0x9b48,	// (0x000177be) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001cde9) calc_display_pane_t_ParamLimits

0x1127,	// (0x0000ed9d) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001ce06) cell_calc_pane_g

0x1130,	// (0x0000eda6) cell_calc_pane_t1

0x9bbf,	// (0x00017835) grid_highlight_pane_cp02_ParamLimits

0x9bd5,	// (0x0001784b) toolbar_button_pane_cp01_ParamLimits

0x9bd5,	// (0x0001784b) toolbar_button_pane_cp01

0xaba4,	// (0x0001881a) temp_image_control_pane_ParamLimits

0xaba4,	// (0x0001881a) temp_image_control_pane

0x93d3,	// (0x00017049) main_mp3_pane

0xc41a,	// (0x0001a090) temp_image_control_pane_g1_ParamLimits

0xc41a,	// (0x0001a090) temp_image_control_pane_g1

0xc428,	// (0x0001a09e) temp_image_control_pane_g2_ParamLimits

0xc428,	// (0x0001a09e) temp_image_control_pane_g2

0xc43a,	// (0x0001a0b0) temp_image_control_pane_g3_ParamLimits

0xc43a,	// (0x0001a0b0) temp_image_control_pane_g3

0x48ba,	// (0x00012530) temp_image_control_pane_g4_ParamLimits

0x48ba,	// (0x00012530) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0001d3c4) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0001d3c4) temp_image_control_pane_g

0xc41a,	// (0x0001a090) main_mp3_pane_g1

0x48cd,	// (0x00012543) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0001d3cd) main_mp3_pane_g

0xc47d,	// (0x0001a0f3) main_mp3_pane_t1

0x9de1,	// (0x00017a57) main_camera_pane_g8_ParamLimits

0x9de1,	// (0x00017a57) main_camera_pane_g8

0x1849,	// (0x0000f4bf) main_video_pane_g7_ParamLimits

0x1849,	// (0x0000f4bf) main_video_pane_g7

0xbe3b,	// (0x00019ab1) main_camera2_pane_t7_ParamLimits

0xbe3b,	// (0x00019ab1) main_camera2_pane_t7

0x9fe9,	// (0x00017c5f) scroll_pane_cp025_ParamLimits

0x9fe9,	// (0x00017c5f) scroll_pane_cp025

0x9ffd,	// (0x00017c73) scroll_pane_cp026_ParamLimits

0x9ffd,	// (0x00017c73) scroll_pane_cp026

0xa00c,	// (0x00017c82) wml_content_pane_ParamLimits

0x9362,	// (0x00016fd8) main_touch_calib_pane

0x4995,	// (0x0001260b) main_touch_calib_pane_g1

0x49a1,	// (0x00012617) main_touch_calib_pane_g2

0x49ad,	// (0x00012623) main_touch_calib_pane_g3

0x49b9,	// (0x0001262f) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0001d3eb) main_touch_calib_pane_g

0x49c5,	// (0x0001263b) main_touch_calib_pane_t1

0x49df,	// (0x00012655) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0001d3f4) main_touch_calib_pane_t

0xa7b9,	// (0x0001842f) mup_progress_pane_cp02

0xa7d8,	// (0x0001844e) navi_pane_g1

0xa83a,	// (0x000184b0) navi_pane_mp_t3

0x93d3,	// (0x00017049) main_mp3_pane_ParamLimits

0x3e0f,	// (0x00011a85) navi_pane_ParamLimits

0xc41a,	// (0x0001a090) main_mp3_pane_g1_ParamLimits

0x48cd,	// (0x00012543) main_mp3_pane_g2_ParamLimits

0x48d9,	// (0x0001254f) main_mp3_pane_g3_ParamLimits

0x48d9,	// (0x0001254f) main_mp3_pane_g3

0x48e7,	// (0x0001255d) main_mp3_pane_g4_ParamLimits

0x48e7,	// (0x0001255d) main_mp3_pane_g4

0xc44a,	// (0x0001a0c0) main_mp3_pane_g5_ParamLimits

0xc44a,	// (0x0001a0c0) main_mp3_pane_g5

0xc458,	// (0x0001a0ce) main_mp3_pane_g6_ParamLimits

0xc458,	// (0x0001a0ce) main_mp3_pane_g6

0xc465,	// (0x0001a0db) main_mp3_pane_g7_ParamLimits

0xc465,	// (0x0001a0db) main_mp3_pane_g7

0xc471,	// (0x0001a0e7) main_mp3_pane_g8_ParamLimits

0xc471,	// (0x0001a0e7) main_mp3_pane_g8

0xf757,	// (0x0001d3cd) main_mp3_pane_g_ParamLimits

0x48f3,	// (0x00012569) main_mp3_pane_t2

0x4901,	// (0x00012577) main_mp3_pane_t3

0xc48b,	// (0x0001a101) main_mp3_pane_t4

0xc499,	// (0x0001a10f) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0001d3de) main_mp3_pane_t

0xc4a7,	// (0x0001a11d) mup_progress_pane_cp01

0x9380,	// (0x00016ff6) aid_zoom_text_secondary2

0xc29d,	// (0x00019f13) list_cale_ev2_pane

0xc2a5,	// (0x00019f1b) scroll_pane_cp023_ParamLimits

0x4a37,	// (0x000126ad) field_cale_ev2_pane_ParamLimits

0x4a37,	// (0x000126ad) field_cale_ev2_pane

0xc4af,	// (0x0001a125) field_cale_ev2_pane_g1_ParamLimits

0xc4af,	// (0x0001a125) field_cale_ev2_pane_g1

0xc4bb,	// (0x0001a131) field_cale_ev2_pane_g2_ParamLimits

0xc4bb,	// (0x0001a131) field_cale_ev2_pane_g2

0xc4d3,	// (0x0001a149) field_cale_ev2_pane_g3_ParamLimits

0xc4d3,	// (0x0001a149) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0001d3ff) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0001d3ff) field_cale_ev2_pane_g

0xc4f7,	// (0x0001a16d) field_cale_ev2_pane_t1_ParamLimits

0xc4f7,	// (0x0001a16d) field_cale_ev2_pane_t1

0xc50e,	// (0x0001a184) field_cale_ev2_pane_t2_ParamLimits

0xc50e,	// (0x0001a184) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0001d408) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0001d408) field_cale_ev2_pane_t

0x328b,	// (0x00010f01) main_postcard_pane_g5_ParamLimits

0x328b,	// (0x00010f01) main_postcard_pane_g5

0x32a1,	// (0x00010f17) main_postcard_pane_g6_ParamLimits

0x32a1,	// (0x00010f17) main_postcard_pane_g6

0x15f5,	// (0x0000f26b) camera2_autofocus_pane_cp_ParamLimits

0x15f5,	// (0x0000f26b) camera2_autofocus_pane_cp

0x93d3,	// (0x00017049) main_mup3_pane

0x4a7b,	// (0x000126f1) main_mup3_pane_g1_ParamLimits

0x4a7b,	// (0x000126f1) main_mup3_pane_g1

0x4a9d,	// (0x00012713) main_mup3_pane_g2_ParamLimits

0x4a9d,	// (0x00012713) main_mup3_pane_g2

0x4b20,	// (0x00012796) main_mup3_pane_g3_ParamLimits

0x4b20,	// (0x00012796) main_mup3_pane_g3

0x4b64,	// (0x000127da) main_mup3_pane_g4_ParamLimits

0x4b64,	// (0x000127da) main_mup3_pane_g4

0x4ba8,	// (0x0001281e) main_mup3_pane_g5_ParamLimits

0x4ba8,	// (0x0001281e) main_mup3_pane_g5

0x4bec,	// (0x00012862) main_mup3_pane_g6_ParamLimits

0x4bec,	// (0x00012862) main_mup3_pane_g6

0xc523,	// (0x0001a199) main_mup3_pane_g7_ParamLimits

0xc523,	// (0x0001a199) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0001d418) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0001d418) main_mup3_pane_g

0x4c68,	// (0x000128de) main_mup3_pane_t1_ParamLimits

0x4c68,	// (0x000128de) main_mup3_pane_t1

0x4ce2,	// (0x00012958) main_mup3_pane_t2_ParamLimits

0x4ce2,	// (0x00012958) main_mup3_pane_t2

0x4dbc,	// (0x00012a32) main_mup3_pane_t4_ParamLimits

0x4dbc,	// (0x00012a32) main_mup3_pane_t4

0x4e1a,	// (0x00012a90) main_mup3_pane_t5_ParamLimits

0x4e1a,	// (0x00012a90) main_mup3_pane_t5

0x4ed2,	// (0x00012b48) main_mup3_pane_t6_ParamLimits

0x4ed2,	// (0x00012b48) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0001d429) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0001d429) main_mup3_pane_t

0x4f88,	// (0x00012bfe) mup3_progress_pane_ParamLimits

0x4f88,	// (0x00012bfe) mup3_progress_pane

0x500c,	// (0x00012c82) popup_mup3_control_window_ParamLimits

0x500c,	// (0x00012c82) popup_mup3_control_window

0xc531,	// (0x0001a1a7) popup_mup3_text_window

0x5042,	// (0x00012cb8) mup3_progress_pane_t1

0x5059,	// (0x00012ccf) mup3_progress_pane_t2

0xc539,	// (0x0001a1af) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0001d436) mup3_progress_pane_t

0xc550,	// (0x0001a1c6) mup_progress_pane_cp03

0x9362,	// (0x00016fd8) bg_tb_trans_pane_cp04

0x5070,	// (0x00012ce6) mup3_volume_pane

0x5078,	// (0x00012cee) popup_mup3_control_window_g1

0x5081,	// (0x00012cf7) mup3_volume_pane_g1

0x508a,	// (0x00012d00) mup3_volume_pane_g2

0x5093,	// (0x00012d09) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0001d43d) mup3_volume_pane_g

0x9362,	// (0x00016fd8) bg_tb_trans_pane_cp03

0xc560,	// (0x0001a1d6) popup_mup3_text_window_g1

0xc568,	// (0x0001a1de) popup_mup3_text_window_t1

0x9b96,	// (0x0001780c) list_calc_item_pane_g1_ParamLimits

0xbf23,	// (0x00019b99) mup_volume_pane_cp_g1

0x49f9,	// (0x0001266f) main_touch_calib_pane_t3

0x4a0d,	// (0x00012683) main_touch_calib_pane_t4

0x4a21,	// (0x00012697) main_touch_calib_pane_t5

0x936c,	// (0x00016fe2) aid_cell_size_toolbar2

0x9374,	// (0x00016fea) aid_popup3_width_pane

0x9380,	// (0x00016ff6) aid_zoom_text_msg_primary

0x9dc1,	// (0x00017a37) vorec_t7

0x9b5a,	// (0x000177d0) bg_calc_paper_pane_g1_ParamLimits

0x9b66,	// (0x000177dc) bg_calc_paper_pane_g2_ParamLimits

0x9b72,	// (0x000177e8) bg_calc_paper_pane_g3_ParamLimits

0x9b7e,	// (0x000177f4) bg_calc_paper_pane_g4_ParamLimits

0x9b8a,	// (0x00017800) bg_calc_paper_pane_g5_ParamLimits

0x10b1,	// (0x0000ed27) bg_calc_paper_pane_g6_ParamLimits

0x10c4,	// (0x0000ed3a) bg_calc_paper_pane_g7_ParamLimits

0x10d7,	// (0x0000ed4d) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001cdf0) bg_calc_paper_pane_g_ParamLimits

0x10e8,	// (0x0000ed5e) calc_bg_paper_pane_g9_ParamLimits

0x1757,	// (0x0000f3cd) image_qvga_pane_ParamLimits

0x1757,	// (0x0000f3cd) image_qvga_pane

0x9a4f,	// (0x000176c5) bg_popup_sub_pane_cp04_ParamLimits

0xaadb,	// (0x00018751) popup_mup_playback_window_g1_ParamLimits

0xaae7,	// (0x0001875d) popup_mup_playback_window_t1_ParamLimits

0xaafc,	// (0x00018772) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001d17c) popup_mup_playback_window_t_ParamLimits

0x4507,	// (0x0001217d) main_mup2_pane_g3_ParamLimits

0x4507,	// (0x0001217d) main_mup2_pane_g3

0x1a9f,	// (0x0000f715) popup_toolbar_window_cp04

0xaef7,	// (0x00018b6d) popup_call2_audio_second_window_g3_ParamLimits

0xaef7,	// (0x00018b6d) popup_call2_audio_second_window_g3

0xb301,	// (0x00018f77) popup_call2_audio_first_window_g4_ParamLimits

0xb301,	// (0x00018f77) popup_call2_audio_first_window_g4

0xb980,	// (0x000195f6) popup_call2_audio_in_window_g4_ParamLimits

0xb980,	// (0x000195f6) popup_call2_audio_in_window_g4

0x33d2,	// (0x00011048) aid_area_sk_bg_cut_ParamLimits

0x33d2,	// (0x00011048) aid_area_sk_bg_cut

0xab11,	// (0x00018787) aid_area_sk_bg_cut_2_ParamLimits

0xab11,	// (0x00018787) aid_area_sk_bg_cut_2

0x481b,	// (0x00012491) aid_placing_details_win

0x4823,	// (0x00012499) aid_placing_details_win_2

0xc35c,	// (0x00019fd2) camera2_autofocus_pane_g1_ParamLimits

0x0ca6,	// (0x0000e91c) popup_fixed_preview_cale_window_ParamLimits

0x0ca6,	// (0x0000e91c) popup_fixed_preview_cale_window

0xa892,	// (0x00018508) navi_slider_pane_g3

0xa89b,	// (0x00018511) navi_slider_pane_g4

0xa8a4,	// (0x0001851a) navi_slider_pane_g5

0xa892,	// (0x00018508) navi_slider_pane_g6

0xa8ad,	// (0x00018523) navi_slider_pane_g7

0xa9d0,	// (0x00018646) mup_scale_pane_g3

0xa9d9,	// (0x0001864f) mup_scale_pane_g4

0xa9e2,	// (0x00018658) mup_scale_pane_g5

0x3052,	// (0x00010cc8) mup_scale_pane_g6

0x305b,	// (0x00010cd1) mup_scale_pane_g7

0xa892,	// (0x00018508) cams2_slider_pane_g3

0xbfd8,	// (0x00019c4e) cams2_slider_pane_g4

0xbfe0,	// (0x00019c56) cams2_slider_pane_g5

0xa892,	// (0x00018508) cams2_slider_pane_g6

0xbfe8,	// (0x00019c5e) cams2_slider_pane_g7

0xc21a,	// (0x00019e90) camera2_autofocus_pane_cp_g1

0xc576,	// (0x0001a1ec) bg_popup_preview_window_pane_cp02_ParamLimits

0xc576,	// (0x0001a1ec) bg_popup_preview_window_pane_cp02

0xc582,	// (0x0001a1f8) list_fp_cale_pane_ParamLimits

0xc582,	// (0x0001a1f8) list_fp_cale_pane

0xc58e,	// (0x0001a204) popup_fixed_preview_cale_window_t1_ParamLimits

0xc58e,	// (0x0001a204) popup_fixed_preview_cale_window_t1

0x509c,	// (0x00012d12) popup_fixed_preview_cale_window_t2_ParamLimits

0x509c,	// (0x00012d12) popup_fixed_preview_cale_window_t2

0x50b1,	// (0x00012d27) popup_fixed_preview_cale_window_t3_ParamLimits

0x50b1,	// (0x00012d27) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0001d444) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0001d444) popup_fixed_preview_cale_window_t

0x50c8,	// (0x00012d3e) list_single_fp_cale_pane_ParamLimits

0x50c8,	// (0x00012d3e) list_single_fp_cale_pane

0xc5ac,	// (0x0001a222) list_single_fp_cale_pane_g1_ParamLimits

0xc5ac,	// (0x0001a222) list_single_fp_cale_pane_g1

0xc5b8,	// (0x0001a22e) list_single_fp_cale_pane_g2_ParamLimits

0xc5b8,	// (0x0001a22e) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0001d44b) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0001d44b) list_single_fp_cale_pane_g

0xc5d1,	// (0x0001a247) list_single_fp_cale_pane_t1_ParamLimits

0xc5d1,	// (0x0001a247) list_single_fp_cale_pane_t1

0xc5e3,	// (0x0001a259) list_single_fp_cale_pane_t2_ParamLimits

0xc5e3,	// (0x0001a259) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0001d452) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0001d452) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9362,	// (0x00016fd8) main_dialer_pane

0x50e0,	// (0x00012d56) aid_cell_size_keypad

0x50ea,	// (0x00012d60) dialer_ne_pane

0x50f4,	// (0x00012d6a) grid_dialer_command_1_pane

0x50fc,	// (0x00012d72) grid_dialer_command_2_pane

0x5104,	// (0x00012d7a) grid_dialer_keypad_pane

0x5118,	// (0x00012d8e) bg_popup_call_pane_cp06_ParamLimits

0x5118,	// (0x00012d8e) bg_popup_call_pane_cp06

0x5124,	// (0x00012d9a) dialer_ne_clear_pane_ParamLimits

0x5124,	// (0x00012d9a) dialer_ne_clear_pane

0xc616,	// (0x0001a28c) dialer_ne_pane_g1

0xc61e,	// (0x0001a294) dialer_ne_pane_t1_ParamLimits

0xc61e,	// (0x0001a294) dialer_ne_pane_t1

0x5130,	// (0x00012da6) dialer_ne_pane_t2_ParamLimits

0x5130,	// (0x00012da6) dialer_ne_pane_t2

0x515a,	// (0x00012dd0) dialer_ne_pane_t3_ParamLimits

0x515a,	// (0x00012dd0) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0001d457) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0001d457) dialer_ne_pane_t

0x518a,	// (0x00012e00) dialer_ne_pane_t3_copy1_ParamLimits

0x518a,	// (0x00012e00) dialer_ne_pane_t3_copy1

0x51b9,	// (0x00012e2f) cell_dialer_keypad_pane_ParamLimits

0x51b9,	// (0x00012e2f) cell_dialer_keypad_pane

0x51d0,	// (0x00012e46) cell_dialer_command_1_pane_ParamLimits

0x51d0,	// (0x00012e46) cell_dialer_command_1_pane

0x51e6,	// (0x00012e5c) cell_dialer_command_2_pane_ParamLimits

0x51e6,	// (0x00012e5c) cell_dialer_command_2_pane

0xc630,	// (0x0001a2a6) bg_button_pane_cp02_ParamLimits

0xc630,	// (0x0001a2a6) bg_button_pane_cp02

0x51f5,	// (0x00012e6b) cell_dialer_keypad_pane_g1_ParamLimits

0x51f5,	// (0x00012e6b) cell_dialer_keypad_pane_g1

0xc630,	// (0x0001a2a6) bg_button_pane_cp03_ParamLimits

0xc630,	// (0x0001a2a6) bg_button_pane_cp03

0x520a,	// (0x00012e80) cell_dialer_command_1_pane_g1_ParamLimits

0x520a,	// (0x00012e80) cell_dialer_command_1_pane_g1

0xc63c,	// (0x0001a2b2) bg_button_pane_cp04

0x521e,	// (0x00012e94) cell_dialer_command_2_pane_g1

0xa878,	// (0x000184ee) bg_button_pane_cp06

0xc644,	// (0x0001a2ba) dialer_ne_clear_pane_g1

0x2b34,	// (0x000107aa) navi_pane_g2

0x2b62,	// (0x000107d8) navi_pane_g3

0x0002,

0xf409,	// (0x0001d07f) navi_pane_g

0x2b8d,	// (0x00010803) navi_pane_mv_g2

0x2bb4,	// (0x0001082a) navi_pane_mv_g5

0x2bbc,	// (0x00010832) navi_pane_mv_t1

0x9b3c,	// (0x000177b2) main_clock2_pane

0x525b,	// (0x00012ed1) main_clock2_list_pane_ParamLimits

0x525b,	// (0x00012ed1) main_clock2_list_pane

0x5293,	// (0x00012f09) main_clock2_pane_t1_ParamLimits

0x5293,	// (0x00012f09) main_clock2_pane_t1

0x52cf,	// (0x00012f45) main_clock2_pane_t2_ParamLimits

0x52cf,	// (0x00012f45) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0001d45e) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0001d45e) main_clock2_pane_t

0x535b,	// (0x00012fd1) popup_clock_analogue_window_cp03_ParamLimits

0x535b,	// (0x00012fd1) popup_clock_analogue_window_cp03

0x5382,	// (0x00012ff8) popup_clock_digital_window_cp02_ParamLimits

0x5382,	// (0x00012ff8) popup_clock_digital_window_cp02

0x53fb,	// (0x00013071) main_clock2_list_single_pane_ParamLimits

0x53fb,	// (0x00013071) main_clock2_list_single_pane

0xa878,	// (0x000184ee) list_highlight_pane_cp05

0xc64c,	// (0x0001a2c2) main_clock2_list_single_pane_t1

0x1a9f,	// (0x0000f715) popup_toolbar_window_cp04_ParamLimits

0x488a,	// (0x00012500) camera2_autofocus_pane_g2_ParamLimits

0x488a,	// (0x00012500) camera2_autofocus_pane_g2

0x4896,	// (0x0001250c) camera2_autofocus_pane_g3_ParamLimits

0x4896,	// (0x0001250c) camera2_autofocus_pane_g3

0x48a2,	// (0x00012518) camera2_autofocus_pane_g4_ParamLimits

0x48a2,	// (0x00012518) camera2_autofocus_pane_g4

0x48ae,	// (0x00012524) camera2_autofocus_pane_g5_ParamLimits

0x48ae,	// (0x00012524) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0001d3a7) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0001d3a7) camera2_autofocus_pane_g

0x4a5b,	// (0x000126d1) camera2_autofocus_pane_cp_g2

0x4a63,	// (0x000126d9) camera2_autofocus_pane_cp_g3

0x4a6b,	// (0x000126e1) camera2_autofocus_pane_cp_g4

0x4a73,	// (0x000126e9) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0001d40d) camera2_autofocus_pane_cp_g

0x5110,	// (0x00012d86) popup_dialer_spcha_window

0x9362,	// (0x00016fd8) bg_popup_sub_pane_cp07

0xc65a,	// (0x0001a2d0) list_spcha_pane

0xc662,	// (0x0001a2d8) list_single_spcha_pane_ParamLimits

0xc662,	// (0x0001a2d8) list_single_spcha_pane

0x9362,	// (0x00016fd8) list_highlight_pane_cp06

0xc673,	// (0x0001a2e9) list_single_spcha_pane_t1

0xb72a,	// (0x000193a0) popup_call2_audio_out_window_g4_ParamLimits

0xb72a,	// (0x000193a0) popup_call2_audio_out_window_g4

0x9362,	// (0x00016fd8) main_imed2_pane

0xbd11,	// (0x00019987) popup_imed_adjust2_window

0x3c58,	// (0x000118ce) popup_imed_trans_window_ParamLimits

0x3c58,	// (0x000118ce) popup_imed_trans_window

0xc052,	// (0x00019cc8) popup_blid_sat_info2_window_t1

0xc060,	// (0x00019cd6) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0001d33c) popup_blid_sat_info2_window_t

0x54b1,	// (0x00013127) aid_size_cell_colour_35

0x54d1,	// (0x00013147) aid_size_cell_colour_112

0x54f1,	// (0x00013167) aid_size_cell_effect

0xbce5,	// (0x0001995b) bg_tb_trans_pane_cp02

0xa2f2,	// (0x00017f68) heading_imed_pane

0x5511,	// (0x00013187) listscroll_imed_pane

0xc681,	// (0x0001a2f7) heading_imed_pane_g1

0xc689,	// (0x0001a2ff) heading_imed_pane_t1

0xc697,	// (0x0001a30d) grid_imed_colour_35_pane_ParamLimits

0xc697,	// (0x0001a30d) grid_imed_colour_35_pane

0x551d,	// (0x00013193) grid_imed_effect_pane

0xc6b3,	// (0x0001a329) list_imed_aspect_pane

0x5534,	// (0x000131aa) scroll_pane_cp027_ParamLimits

0x5534,	// (0x000131aa) scroll_pane_cp027

0x5545,	// (0x000131bb) cell_imed_effect_pane_ParamLimits

0x5545,	// (0x000131bb) cell_imed_effect_pane

0xc6bb,	// (0x0001a331) cell_imed_colour_pane_ParamLimits

0xc6bb,	// (0x0001a331) cell_imed_colour_pane

0xc705,	// (0x0001a37b) cell_imed_colour_pane_g1_ParamLimits

0xc705,	// (0x0001a37b) cell_imed_colour_pane_g1

0xc716,	// (0x0001a38c) hgihlgiht_grid_pane_cp016_ParamLimits

0xc716,	// (0x0001a38c) hgihlgiht_grid_pane_cp016

0x556a,	// (0x000131e0) cell_imed_effect_pane_g1

0x5572,	// (0x000131e8) grid_highlight_pane_cp017

0xc727,	// (0x0001a39d) list_imed_single_pane_ParamLimits

0xc727,	// (0x0001a39d) list_imed_single_pane

0x9362,	// (0x00016fd8) list_highlight_pane_cp07

0xc73b,	// (0x0001a3b1) list_imed_aspect_pane_comp1_t1

0xbce5,	// (0x0001995b) bg_tb_trans_pane_cp05

0xc75d,	// (0x0001a3d3) popup_imed_adjust2_window_g1

0xc784,	// (0x0001a3fa) popup_imed_adjust2_window_t1

0xc79c,	// (0x0001a412) slider_imed_adjust_pane

0xc7b0,	// (0x0001a426) slider_imed_adjust_pane_g1

0xc7c0,	// (0x0001a436) slider_imed_adjust_pane_g2

0xc7d0,	// (0x0001a446) slider_imed_adjust_pane_g3

0xc7e1,	// (0x0001a457) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0001d47b) slider_imed_adjust_pane_g

0x557b,	// (0x000131f1) aid_size_cell_clipart2

0x5587,	// (0x000131fd) grid_imed_clipart_pane

0xc7f2,	// (0x0001a468) scroll_pane_cp031

0x5591,	// (0x00013207) cell_imed_clipart_pane_ParamLimits

0x5591,	// (0x00013207) cell_imed_clipart_pane

0x55ae,	// (0x00013224) cell_imed_clipart_pane_g1

0x9362,	// (0x00016fd8) grid_highlight_pane_cp014

0x5270,	// (0x00012ee6) main_clock2_pane_g1_ParamLimits

0x5270,	// (0x00012ee6) main_clock2_pane_g1

0x53a2,	// (0x00013018) aid_call2_pane_cp10

0x53b4,	// (0x0001302a) aid_call_pane_cp10

0xa7ad,	// (0x00018423) popup_clock_analogue_window_cp10_g1

0xa7ad,	// (0x00018423) popup_clock_analogue_window_cp10_g2

0x53c6,	// (0x0001303c) popup_clock_analogue_window_cp10_g3

0x53c6,	// (0x0001303c) popup_clock_analogue_window_cp10_g4

0xa7ad,	// (0x00018423) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0001d469) popup_clock_analogue_window_cp10_g

0x53dc,	// (0x00013052) popup_clock_analogue_window_cp10_t1

0x540d,	// (0x00013083) clock_digital_number_pane_cp10_ParamLimits

0x540d,	// (0x00013083) clock_digital_number_pane_cp10

0x5427,	// (0x0001309d) clock_digital_number_pane_cp11_ParamLimits

0x5427,	// (0x0001309d) clock_digital_number_pane_cp11

0x5441,	// (0x000130b7) clock_digital_number_pane_cp12_ParamLimits

0x5441,	// (0x000130b7) clock_digital_number_pane_cp12

0x545b,	// (0x000130d1) clock_digital_number_pane_cp13_ParamLimits

0x545b,	// (0x000130d1) clock_digital_number_pane_cp13

0x5475,	// (0x000130eb) clock_digital_separator_pane_cp10_ParamLimits

0x5475,	// (0x000130eb) clock_digital_separator_pane_cp10

0x548f,	// (0x00013105) popup_clock_digital_window_cp02_t1_ParamLimits

0x548f,	// (0x00013105) popup_clock_digital_window_cp02_t1

0x9a47,	// (0x000176bd) clock_digital_number_pane_cp10_g1

0x9a47,	// (0x000176bd) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0001d484) clock_digital_number_pane_cp10_g

0x9a47,	// (0x000176bd) clock_digital_separator_pane_cp10_g1

0x9a47,	// (0x000176bd) clock_digital_separator_pane_g2_cp10

0xa848,	// (0x000184be) navi_pane_vded_g4

0xa851,	// (0x000184c7) navi_pane_vded_g5

0xa85a,	// (0x000184d0) navi_pane_vded_t1

0x9362,	// (0x00016fd8) main_vded_pane

0x55b7,	// (0x0001322d) main_vded_pane_g1

0x55c3,	// (0x00013239) main_vded_pane_g2

0x55cf,	// (0x00013245) main_vded_pane_g3

0x0002,

0xf813,	// (0x0001d489) main_vded_pane_g

0x55db,	// (0x00013251) main_vded_pane_t1

0x55e9,	// (0x0001325f) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0001d490) main_vded_pane_t

0x55f7,	// (0x0001326d) vded_slider_pane

0x5601,	// (0x00013277) vded_video_pane

0xc7fa,	// (0x0001a470) vded_video_pane_g1

0x560d,	// (0x00013283) vded_video_pane_g2

0xc21a,	// (0x00019e90) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0001d495) vded_video_pane_g

0xc804,	// (0x0001a47a) vded_slider_pane_g1

0xbf23,	// (0x00019b99) vded_slider_pane_g2

0xc80d,	// (0x0001a483) vded_slider_pane_g3

0xc816,	// (0x0001a48c) vded_slider_pane_g4

0xc81f,	// (0x0001a495) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0001d49c) vded_slider_pane_g

0x4ff6,	// (0x00012c6c) mup3_rocker_pane_ParamLimits

0x4ff6,	// (0x00012c6c) mup3_rocker_pane

0x5616,	// (0x0001328c) mup3_control_keys_pane_g1

0x561e,	// (0x00013294) mup3_control_keys_pane_g2

0x5626,	// (0x0001329c) mup3_control_keys_pane_g3

0x562e,	// (0x000132a4) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0001d4a7) mup3_control_keys_pane_g

0x0cdd,	// (0x0000e953) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0cdd,	// (0x0000e953) popup_toolbar2_fixed_window_cp01

0x502c,	// (0x00012ca2) popup_toolbar2_fixed_window_cp02_ParamLimits

0x502c,	// (0x00012ca2) popup_toolbar2_fixed_window_cp02

0xb069,	// (0x00018cdf) popup_call2_audio_second_window_t4_ParamLimits

0xb069,	// (0x00018cdf) popup_call2_audio_second_window_t4

0xb597,	// (0x0001920d) popup_call2_audio_first_window_t6_ParamLimits

0xb597,	// (0x0001920d) popup_call2_audio_first_window_t6

0xb82d,	// (0x000194a3) popup_call2_audio_out_window_t6_ParamLimits

0xb82d,	// (0x000194a3) popup_call2_audio_out_window_t6

0x9362,	// (0x00016fd8) main_vitu_pane

0x563e,	// (0x000132b4) aid_size_cell_itu_ParamLimits

0x563e,	// (0x000132b4) aid_size_cell_itu

0x93d3,	// (0x00017049) bg_popup_window_pane_cp08_ParamLimits

0x93d3,	// (0x00017049) bg_popup_window_pane_cp08

0x5654,	// (0x000132ca) field_vitu_entry_pane_ParamLimits

0x5654,	// (0x000132ca) field_vitu_entry_pane

0x566b,	// (0x000132e1) grid_vitu_function_pane_ParamLimits

0x566b,	// (0x000132e1) grid_vitu_function_pane

0x5686,	// (0x000132fc) grid_vitu_itu_pane_ParamLimits

0x5686,	// (0x000132fc) grid_vitu_itu_pane

0x56a4,	// (0x0001331a) cell_vitu_itu_pane_ParamLimits

0x56a4,	// (0x0001331a) cell_vitu_itu_pane

0x56ca,	// (0x00013340) cell_vitu_function_pane_ParamLimits

0x56ca,	// (0x00013340) cell_vitu_function_pane

0x93d3,	// (0x00017049) bg_popup_sub_pane_cp08_ParamLimits

0x93d3,	// (0x00017049) bg_popup_sub_pane_cp08

0x56e5,	// (0x0001335b) field_vitu_entry_pane_t1_ParamLimits

0x56e5,	// (0x0001335b) field_vitu_entry_pane_t1

0xc840,	// (0x0001a4b6) field_vitu_entry_pane_t2_ParamLimits

0xc840,	// (0x0001a4b6) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0001d4b5) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0001d4b5) field_vitu_entry_pane_t

0xc85d,	// (0x0001a4d3) bg_button_pane_cp05_ParamLimits

0xc85d,	// (0x0001a4d3) bg_button_pane_cp05

0x5705,	// (0x0001337b) cell_vitu_itu_pane_g1

0x571d,	// (0x00013393) cell_vitu_itu_pane_t1_ParamLimits

0x571d,	// (0x00013393) cell_vitu_itu_pane_t1

0x572f,	// (0x000133a5) cell_vitu_itu_pane_t2_ParamLimits

0x572f,	// (0x000133a5) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0001d4ba) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0001d4ba) cell_vitu_itu_pane_t

0xc86b,	// (0x0001a4e1) bg_button_pane_cp07

0x5764,	// (0x000133da) cell_vitu_function_pane_g1

0x9ad6,	// (0x0001774c) main_calc_pane_g1

0x0b15,	// (0x0000e78b) aid_visual_content_pane

0x9362,	// (0x00016fd8) main_vradio_pane

0x576d,	// (0x000133e3) main_vradio_pane_g1_ParamLimits

0x576d,	// (0x000133e3) main_vradio_pane_g1

0xc875,	// (0x0001a4eb) main_vradio_pane_g2_ParamLimits

0xc875,	// (0x0001a4eb) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0001d4c1) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0001d4c1) main_vradio_pane_g

0x5784,	// (0x000133fa) main_vradio_pane_t1_ParamLimits

0x5784,	// (0x000133fa) main_vradio_pane_t1

0x5799,	// (0x0001340f) main_vradio_pane_t2_ParamLimits

0x5799,	// (0x0001340f) main_vradio_pane_t2

0xc882,	// (0x0001a4f8) main_vradio_pane_t3_ParamLimits

0xc882,	// (0x0001a4f8) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0001d4c6) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0001d4c6) main_vradio_pane_t

0x57ae,	// (0x00013424) vradio_rocker_control_pane_ParamLimits

0x57ae,	// (0x00013424) vradio_rocker_control_pane

0x57c0,	// (0x00013436) vradio_station_info_pane_ParamLimits

0x57c0,	// (0x00013436) vradio_station_info_pane

0xc896,	// (0x0001a50c) vradio_frequency_info_pane_ParamLimits

0xc896,	// (0x0001a50c) vradio_frequency_info_pane

0xc21a,	// (0x00019e90) vradio_station_info_pane_g1

0xc8a5,	// (0x0001a51b) vradio_station_info_pane_t1_ParamLimits

0xc8a5,	// (0x0001a51b) vradio_station_info_pane_t1

0xc8c7,	// (0x0001a53d) vradio_station_info_pane_t2_ParamLimits

0xc8c7,	// (0x0001a53d) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0001d4cd) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0001d4cd) vradio_station_info_pane_t

0xc8d9,	// (0x0001a54f) vradio_tuning_pane

0xc8e1,	// (0x0001a557) vradio_rocker_control_pane_g1

0xc8e9,	// (0x0001a55f) vradio_rocker_control_pane_g2

0xc8f1,	// (0x0001a567) vradio_rocker_control_pane_g3

0xc8f9,	// (0x0001a56f) vradio_rocker_control_pane_g4

0xc901,	// (0x0001a577) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0001d4d2) vradio_rocker_control_pane_g

0x57d0,	// (0x00013446) vradio_frequency_info_pane_g1

0xc909,	// (0x0001a57f) vradio_frequency_info_pane_t1_ParamLimits

0xc909,	// (0x0001a57f) vradio_frequency_info_pane_t1

0x57da,	// (0x00013450) vradio_tuning_pane_g1

0x57e5,	// (0x0001345b) vradio_tuning_pane_t1

0x9390,	// (0x00017006) area_side_right_pane_ParamLimits

0x9390,	// (0x00017006) area_side_right_pane

0xbcac,	// (0x00019922) status_small_pane_g1

0xbcb4,	// (0x0001992a) status_small_pane_g2

0xbcbd,	// (0x00019933) status_small_pane_g3

0xbcc6,	// (0x0001993c) status_small_pane_g4

0x0003,

0xf61c,	// (0x0001d292) status_small_pane_g

0xbccf,	// (0x00019945) status_small_pane_t1

0x9362,	// (0x00016fd8) main_video3_pane

0xc91d,	// (0x0001a593) cams_zoom_vslider_pane

0xc925,	// (0x0001a59b) image3_wide_pane_ParamLimits

0xc925,	// (0x0001a59b) image3_wide_pane

0xc93f,	// (0x0001a5b5) image3_wide_small_pane

0xc94b,	// (0x0001a5c1) main_video3_pane_g1_ParamLimits

0xc94b,	// (0x0001a5c1) main_video3_pane_g1

0xc967,	// (0x0001a5dd) main_video3_pane_g2_ParamLimits

0xc967,	// (0x0001a5dd) main_video3_pane_g2

0x0001,

0xf867,	// (0x0001d4dd) main_video3_pane_g_ParamLimits

0xf867,	// (0x0001d4dd) main_video3_pane_g

0xc983,	// (0x0001a5f9) main_video3_pane_t1_ParamLimits

0xc983,	// (0x0001a5f9) main_video3_pane_t1

0xc9ae,	// (0x0001a624) main_video3_pane_t2_ParamLimits

0xc9ae,	// (0x0001a624) main_video3_pane_t2

0xc9db,	// (0x0001a651) main_video3_pane_t3_ParamLimits

0xc9db,	// (0x0001a651) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0001d4e2) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0001d4e2) main_video3_pane_t

0xca08,	// (0x0001a67e) cams_zoom_vslider_pane_g1

0xca11,	// (0x0001a687) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0001d4e9) cams_zoom_vslider_pane_g

0xca19,	// (0x0001a68f) small_slider_vertical_pane

0xc21a,	// (0x00019e90) small_slider_vertical_pane_g1

0xc21a,	// (0x00019e90) small_slider_vertical_pane_g2

0xca21,	// (0x0001a697) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0001d4ee) small_slider_vertical_pane_g

0x9362,	// (0x00016fd8) main_hwr_training_pane

0xca2a,	// (0x0001a6a0) hwr_training_instruct_pane_ParamLimits

0xca2a,	// (0x0001a6a0) hwr_training_instruct_pane

0x57f4,	// (0x0001346a) hwr_training_navi_pane_ParamLimits

0x57f4,	// (0x0001346a) hwr_training_navi_pane

0x5813,	// (0x00013489) hwr_training_write_pane_ParamLimits

0x5813,	// (0x00013489) hwr_training_write_pane

0x9362,	// (0x00016fd8) bg_frame_shadow_pane

0xca61,	// (0x0001a6d7) hwr_training_write_pane_g1

0xca69,	// (0x0001a6df) hwr_training_write_pane_g2

0xca71,	// (0x0001a6e7) hwr_training_write_pane_g3

0xca79,	// (0x0001a6ef) hwr_training_write_pane_g4

0xca81,	// (0x0001a6f7) hwr_training_write_pane_g5

0xca89,	// (0x0001a6ff) hwr_training_write_pane_g6

0xca91,	// (0x0001a707) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0001d4f5) hwr_training_write_pane_g

0xca99,	// (0x0001a70f) hwr_training_navi_pane_g1_ParamLimits

0xca99,	// (0x0001a70f) hwr_training_navi_pane_g1

0xcaab,	// (0x0001a721) hwr_training_navi_pane_g2_ParamLimits

0xcaab,	// (0x0001a721) hwr_training_navi_pane_g2

0xcabd,	// (0x0001a733) hwr_training_navi_pane_g3_ParamLimits

0xcabd,	// (0x0001a733) hwr_training_navi_pane_g3

0xcacd,	// (0x0001a743) hwr_training_navi_pane_g4_ParamLimits

0xcacd,	// (0x0001a743) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0001d504) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0001d504) hwr_training_navi_pane_g

0xcada,	// (0x0001a750) hwr_training_navi_pane_t1

0x585b,	// (0x000134d1) list_single_hwr_training_instruct_pane_ParamLimits

0x585b,	// (0x000134d1) list_single_hwr_training_instruct_pane

0xcae8,	// (0x0001a75e) list_single_hwr_training_instruct_pane_t1

0xc15a,	// (0x00019dd0) bg_frame_shadow_pane_g1

0xcaf7,	// (0x0001a76d) bg_frame_shadow_pane_g2

0xcaff,	// (0x0001a775) bg_frame_shadow_pane_g3

0xcb07,	// (0x0001a77d) bg_frame_shadow_pane_g4

0xcb0f,	// (0x0001a785) bg_frame_shadow_pane_g5

0xcb17,	// (0x0001a78d) bg_frame_shadow_pane_g6

0xcb1f,	// (0x0001a795) bg_frame_shadow_pane_g7

0x9c35,	// (0x000178ab) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0001d50f) bg_frame_shadow_pane_g

0x9362,	// (0x00016fd8) main_video_tele_dialer_pane

0x5877,	// (0x000134ed) aid_size_cell_video_keypad_ParamLimits

0x5877,	// (0x000134ed) aid_size_cell_video_keypad

0x5891,	// (0x00013507) grid_video_dialer_keypad_pane_ParamLimits

0x5891,	// (0x00013507) grid_video_dialer_keypad_pane

0x58df,	// (0x00013555) video_down_pane_cp_ParamLimits

0x58df,	// (0x00013555) video_down_pane_cp

0x5913,	// (0x00013589) cell_video_dialer_keypad_pane_ParamLimits

0x5913,	// (0x00013589) cell_video_dialer_keypad_pane

0xcb50,	// (0x0001a7c6) bg_button_pane_cp08_ParamLimits

0xcb50,	// (0x0001a7c6) bg_button_pane_cp08

0x5939,	// (0x000135af) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5939,	// (0x000135af) cell_video_dialer_keypad_pane_g1

0x4fe0,	// (0x00012c56) mup3_rocker2_pane_ParamLimits

0x4fe0,	// (0x00012c56) mup3_rocker2_pane

0xc21a,	// (0x00019e90) mup3_rocker2_pane_g1

0x3b25,	// (0x0001179b) main_dialer2_pane

0x9362,	// (0x00016fd8) main_mp4_pane

0xcb64,	// (0x0001a7da) main_mp4_pane_g1_ParamLimits

0xcb64,	// (0x0001a7da) main_mp4_pane_g1

0xcb64,	// (0x0001a7da) main_mp4_pane_g2_ParamLimits

0xcb64,	// (0x0001a7da) main_mp4_pane_g2

0x5974,	// (0x000135ea) main_mp4_pane_g3_ParamLimits

0x5974,	// (0x000135ea) main_mp4_pane_g3

0xcb72,	// (0x0001a7e8) main_mp4_pane_g4_ParamLimits

0xcb72,	// (0x0001a7e8) main_mp4_pane_g4

0xcb8c,	// (0x0001a802) main_mp4_pane_g5_ParamLimits

0xcb8c,	// (0x0001a802) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0001d52f) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0001d52f) main_mp4_pane_g

0xcbc0,	// (0x0001a836) main_mp4_pane_t1_ParamLimits

0xcbc0,	// (0x0001a836) main_mp4_pane_t1

0xcc1c,	// (0x0001a892) main_mp4_pane_t2_ParamLimits

0xcc1c,	// (0x0001a892) main_mp4_pane_t2

0xcc6e,	// (0x0001a8e4) main_mp4_pane_t3_ParamLimits

0xcc6e,	// (0x0001a8e4) main_mp4_pane_t3

0xcc8e,	// (0x0001a904) main_mp4_pane_t4_ParamLimits

0xcc8e,	// (0x0001a904) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0001d53c) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0001d53c) main_mp4_pane_t

0xccce,	// (0x0001a944) mp4_progress_pane_ParamLimits

0xccce,	// (0x0001a944) mp4_progress_pane

0xcd18,	// (0x0001a98e) mp4_rocker_pane_ParamLimits

0xcd18,	// (0x0001a98e) mp4_rocker_pane

0xcd42,	// (0x0001a9b8) mp4_progress_pane_t1

0xcd5b,	// (0x0001a9d1) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0001d545) mp4_progress_pane_t

0xcd74,	// (0x0001a9ea) mup_progress_pane_cp04

0xc21a,	// (0x00019e90) mp4_rocker_pane_g1

0x59be,	// (0x00013634) aid_cell_size_keypad2_ParamLimits

0x59be,	// (0x00013634) aid_cell_size_keypad2

0x59d4,	// (0x0001364a) dialer2_ne_pane_ParamLimits

0x59d4,	// (0x0001364a) dialer2_ne_pane

0x59ec,	// (0x00013662) grid_dialer2_keypad_pane_ParamLimits

0x59ec,	// (0x00013662) grid_dialer2_keypad_pane

0xbff9,	// (0x00019c6f) bg_popup_call_pane_cp07_ParamLimits

0xbff9,	// (0x00019c6f) bg_popup_call_pane_cp07

0x5a08,	// (0x0001367e) dialer2_ne_pane_t1_ParamLimits

0x5a08,	// (0x0001367e) dialer2_ne_pane_t1

0x5a48,	// (0x000136be) cell_dialer2_keypad_pane_ParamLimits

0x5a48,	// (0x000136be) cell_dialer2_keypad_pane

0xcd92,	// (0x0001aa08) bg_button_pane_pane_cp04_ParamLimits

0xcd92,	// (0x0001aa08) bg_button_pane_pane_cp04

0x5a6e,	// (0x000136e4) cell_dialer2_keypad_pane_g1_ParamLimits

0x5a6e,	// (0x000136e4) cell_dialer2_keypad_pane_g1

0x1983,	// (0x0000f5f9) aid_placing_vt_set_content_ParamLimits

0x1983,	// (0x0000f5f9) aid_placing_vt_set_content

0x19a7,	// (0x0000f61d) aid_placing_vt_set_title_ParamLimits

0x19a7,	// (0x0000f61d) aid_placing_vt_set_title

0x9362,	// (0x00016fd8) main_image3_pane

0x5b34,	// (0x000137aa) area_side_right_pane_cp01_ParamLimits

0x5b34,	// (0x000137aa) area_side_right_pane_cp01

0xcb64,	// (0x0001a7da) main_image3_pane_g1_ParamLimits

0xcb64,	// (0x0001a7da) main_image3_pane_g1

0x5b4d,	// (0x000137c3) main_image3_pane_g2_ParamLimits

0x5b4d,	// (0x000137c3) main_image3_pane_g2

0x5b75,	// (0x000137eb) main_image3_pane_g3_ParamLimits

0x5b75,	// (0x000137eb) main_image3_pane_g3

0x5b9f,	// (0x00013815) main_image3_pane_g4_ParamLimits

0x5b9f,	// (0x00013815) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0001d554) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0001d554) main_image3_pane_g

0x5bc9,	// (0x0001383f) main_image3_pane_t1_ParamLimits

0x5bc9,	// (0x0001383f) main_image3_pane_t1

0x5c21,	// (0x00013897) main_image3_pane_t2_ParamLimits

0x5c21,	// (0x00013897) main_image3_pane_t2

0x5c73,	// (0x000138e9) main_image3_pane_t3_ParamLimits

0x5c73,	// (0x000138e9) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0001d55d) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0001d55d) main_image3_pane_t

0x93d3,	// (0x00017049) grid_sctrl_middle_pane_cp01_ParamLimits

0x93d3,	// (0x00017049) grid_sctrl_middle_pane_cp01

0x5cfb,	// (0x00013971) cell_sctrl_middle_pane_cp01_ParamLimits

0x5cfb,	// (0x00013971) cell_sctrl_middle_pane_cp01

0x5d18,	// (0x0001398e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d18,	// (0x0001398e) cell_sctrl_middle_pane_cp01_g1

0x9362,	// (0x00016fd8) main_call4_pane

0x5d2d,	// (0x000139a3) aid_size_button_call4_ParamLimits

0x5d2d,	// (0x000139a3) aid_size_button_call4

0x5d60,	// (0x000139d6) call4_windows_pane_ParamLimits

0x5d60,	// (0x000139d6) call4_windows_pane

0x5d82,	// (0x000139f8) grid_call4_button_pane_ParamLimits

0x5d82,	// (0x000139f8) grid_call4_button_pane

0xcdd2,	// (0x0001aa48) call4_windows_conf_pane

0xcded,	// (0x0001aa63) popup_call4_audio_first_window_ParamLimits

0xcded,	// (0x0001aa63) popup_call4_audio_first_window

0xce3b,	// (0x0001aab1) popup_call4_audio_second_window_ParamLimits

0xce3b,	// (0x0001aab1) popup_call4_audio_second_window

0xce51,	// (0x0001aac7) popup_call4_audio_wait_window_ParamLimits

0xce51,	// (0x0001aac7) popup_call4_audio_wait_window

0x5dad,	// (0x00013a23) cell_call4_button_pane_ParamLimits

0x5dad,	// (0x00013a23) cell_call4_button_pane

0x5dd4,	// (0x00013a4a) bg_button_pane_cp09_ParamLimits

0x5dd4,	// (0x00013a4a) bg_button_pane_cp09

0x5de0,	// (0x00013a56) cell_call4_button_pane_g1_ParamLimits

0x5de0,	// (0x00013a56) cell_call4_button_pane_g1

0x5e06,	// (0x00013a7c) cell_call4_button_pane_t1_ParamLimits

0x5e06,	// (0x00013a7c) cell_call4_button_pane_t1

0xce99,	// (0x0001ab0f) popup_call4_audio_conf_window_ParamLimits

0xce99,	// (0x0001ab0f) popup_call4_audio_conf_window

0x5042,	// (0x00012cb8) mup3_progress_pane_t1_ParamLimits

0x5059,	// (0x00012ccf) mup3_progress_pane_t2_ParamLimits

0xc539,	// (0x0001a1af) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0001d436) mup3_progress_pane_t_ParamLimits

0xc550,	// (0x0001a1c6) mup_progress_pane_cp03_ParamLimits

0x5636,	// (0x000132ac) mup3_control_keys_pane_g4_copy1

0xccfc,	// (0x0001a972) mp4_rocker2_pane_ParamLimits

0xccfc,	// (0x0001a972) mp4_rocker2_pane

0xceb3,	// (0x0001ab29) mp4_rocker2_pane_g1

0xcebb,	// (0x0001ab31) mp4_rocker2_pane_g2

0xcec3,	// (0x0001ab39) mp4_rocker2_pane_g3

0xcecb,	// (0x0001ab41) mp4_rocker2_pane_g4

0xced3,	// (0x0001ab49) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0001d566) mp4_rocker2_pane_g

0x9362,	// (0x00016fd8) main_camera4_pane

0x9362,	// (0x00016fd8) main_video4_pane

0x58ad,	// (0x00013523) main_video_tele_dialer_pane_t1_ParamLimits

0x58ad,	// (0x00013523) main_video_tele_dialer_pane_t1

0x58c6,	// (0x0001353c) main_video_tele_dialer_pane_t2_ParamLimits

0x58c6,	// (0x0001353c) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0001d520) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0001d520) main_video_tele_dialer_pane_t

0x5e44,	// (0x00013aba) cam4_autofocus_pane_ParamLimits

0x5e44,	// (0x00013aba) cam4_autofocus_pane

0x5e5a,	// (0x00013ad0) cam4_image_uncrop_pane_ParamLimits

0x5e5a,	// (0x00013ad0) cam4_image_uncrop_pane

0x5e73,	// (0x00013ae9) cam4_indicators_pane_ParamLimits

0x5e73,	// (0x00013ae9) cam4_indicators_pane

0x5ea2,	// (0x00013b18) main_camera4_pane_g1_ParamLimits

0x5ea2,	// (0x00013b18) main_camera4_pane_g1

0x5eae,	// (0x00013b24) main_camera4_pane_g2_ParamLimits

0x5eae,	// (0x00013b24) main_camera4_pane_g2

0x5eae,	// (0x00013b24) main_camera4_pane_g3_ParamLimits

0x5eae,	// (0x00013b24) main_camera4_pane_g3

0x5eba,	// (0x00013b30) main_camera4_pane_g4_ParamLimits

0x5eba,	// (0x00013b30) main_camera4_pane_g4

0x5ec6,	// (0x00013b3c) main_camera4_pane_g5_ParamLimits

0x5ec6,	// (0x00013b3c) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0001d571) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0001d571) main_camera4_pane_g

0x5ee3,	// (0x00013b59) main_camera4_pane_t1_ParamLimits

0x5ee3,	// (0x00013b59) main_camera4_pane_t1

0xc44a,	// (0x0001a0c0) bg_tb_trans_pane_cp06

0xcf01,	// (0x0001ab77) cam4_indicators_pane_g1

0xcf0e,	// (0x0001ab84) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0001d58c) cam4_indicators_pane_g

0xcf2e,	// (0x0001aba4) cam4_indicators_pane_t1

0x5f47,	// (0x00013bbd) main_video4_pane_g1_ParamLimits

0x5f47,	// (0x00013bbd) main_video4_pane_g1

0x5f59,	// (0x00013bcf) main_video4_pane_g2_ParamLimits

0x5f59,	// (0x00013bcf) main_video4_pane_g2

0x5f6d,	// (0x00013be3) main_video4_pane_g3_ParamLimits

0x5f6d,	// (0x00013be3) main_video4_pane_g3

0x5f7d,	// (0x00013bf3) main_video4_pane_g4_ParamLimits

0x5f7d,	// (0x00013bf3) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0001d593) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0001d593) main_video4_pane_g

0x5f9d,	// (0x00013c13) vid4_indicators_pane_ParamLimits

0x5f9d,	// (0x00013c13) vid4_indicators_pane

0x5fcd,	// (0x00013c43) video4_image_uncrop_cif_pane_ParamLimits

0x5fcd,	// (0x00013c43) video4_image_uncrop_cif_pane

0x5fe7,	// (0x00013c5d) video4_image_uncrop_nhd_pane_ParamLimits

0x5fe7,	// (0x00013c5d) video4_image_uncrop_nhd_pane

0x5e5a,	// (0x00013ad0) video4_image_uncrop_vga_pane_ParamLimits

0x5e5a,	// (0x00013ad0) video4_image_uncrop_vga_pane

0xcb27,	// (0x0001a79d) bg_tb_trans_pane_cp07

0x5ffd,	// (0x00013c73) vid4_indicators_pane_g1

0x600a,	// (0x00013c80) vid4_indicators_pane_g2

0x6017,	// (0x00013c8d) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0001d59e) vid4_indicators_pane_g

0x603c,	// (0x00013cb2) vid4_indicators_pane_t1

0x604e,	// (0x00013cc4) cam4_autofocus_pane_g1

0x6056,	// (0x00013ccc) cam4_autofocus_pane_g2

0x605e,	// (0x00013cd4) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0001d5a9) cam4_autofocus_pane_g

0x6066,	// (0x00013cdc) cam4_autofocus_pane_g3_copy1

0x58f7,	// (0x0001356d) video_down_pane_cp_t1

0x5905,	// (0x0001357b) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0001d525) video_down_pane_cp_t

0x93d3,	// (0x00017049) popup_vitu2_window_ParamLimits

0x93d3,	// (0x00017049) popup_vitu2_window

0x606e,	// (0x00013ce4) aid_size_cell2_itu2_ParamLimits

0x606e,	// (0x00013ce4) aid_size_cell2_itu2

0x6094,	// (0x00013d0a) aid_size_cell_itu2_ParamLimits

0x6094,	// (0x00013d0a) aid_size_cell_itu2

0x60f2,	// (0x00013d68) bg_popup_window_pane_cp09_ParamLimits

0x60f2,	// (0x00013d68) bg_popup_window_pane_cp09

0x6100,	// (0x00013d76) field_vitu2_entry_pane_ParamLimits

0x6100,	// (0x00013d76) field_vitu2_entry_pane

0x6128,	// (0x00013d9e) grid_vitu2_function_pane_ParamLimits

0x6128,	// (0x00013d9e) grid_vitu2_function_pane

0x6179,	// (0x00013def) grid_vitu2_itu_pane_ParamLimits

0x6179,	// (0x00013def) grid_vitu2_itu_pane

0x6204,	// (0x00013e7a) cell_vitu2_itu_pane_ParamLimits

0x6204,	// (0x00013e7a) cell_vitu2_itu_pane

0x622a,	// (0x00013ea0) cell_vitu2_function_pane_ParamLimits

0x622a,	// (0x00013ea0) cell_vitu2_function_pane

0xcf5c,	// (0x0001abd2) bg_popup_call_pane_cp08_ParamLimits

0xcf5c,	// (0x0001abd2) bg_popup_call_pane_cp08

0xcf75,	// (0x0001abeb) field_vitu2_entry_pane_g1

0xcf81,	// (0x0001abf7) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0001d5b0) field_vitu2_entry_pane_g

0x626e,	// (0x00013ee4) field_vitu2_entry_pane_t1_ParamLimits

0x626e,	// (0x00013ee4) field_vitu2_entry_pane_t1

0xcf9b,	// (0x0001ac11) field_vitu2_entry_pane_t2_ParamLimits

0xcf9b,	// (0x0001ac11) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0001d5b7) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0001d5b7) field_vitu2_entry_pane_t

0x628b,	// (0x00013f01) bg_button_pane_cp010_ParamLimits

0x628b,	// (0x00013f01) bg_button_pane_cp010

0x6299,	// (0x00013f0f) cell_vitu2_itu_pane_g1

0x62b7,	// (0x00013f2d) cell_vitu2_itu_pane_t1_ParamLimits

0x62b7,	// (0x00013f2d) cell_vitu2_itu_pane_t1

0x631d,	// (0x00013f93) cell_vitu2_itu_pane_t2_ParamLimits

0x631d,	// (0x00013f93) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0001d5c1) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0001d5c1) cell_vitu2_itu_pane_t

0x93d3,	// (0x00017049) bg_button_pane_cp011

0x63f9,	// (0x0001406f) cell_vitu2_function_pane_g1

0x9362,	// (0x00016fd8) main_myfav_hc_pane

0x5cc3,	// (0x00013939) popup_image3_note_pane_ParamLimits

0x5cc3,	// (0x00013939) popup_image3_note_pane

0x5cdf,	// (0x00013955) popup_image3_tool_bar_pane_ParamLimits

0x5cdf,	// (0x00013955) popup_image3_tool_bar_pane

0x63a1,	// (0x00014017) cell_vitu2_itu_pane_t3_ParamLimits

0x63a1,	// (0x00014017) cell_vitu2_itu_pane_t3

0x9362,	// (0x00016fd8) bg_popup_trans_pane

0xcfc0,	// (0x0001ac36) grid_image3_tool_bar_pane

0xcfca,	// (0x0001ac40) bg_popup_trans_pane_g1

0xa0f2,	// (0x00017d68) bg_popup_trans_pane_g2

0xcfd2,	// (0x0001ac48) bg_popup_trans_pane_g3

0xcfda,	// (0x0001ac50) bg_popup_trans_pane_g4

0xcfe2,	// (0x0001ac58) bg_popup_trans_pane_g5

0xcfea,	// (0x0001ac60) bg_popup_trans_pane_g6

0xcff2,	// (0x0001ac68) bg_popup_trans_pane_g7

0xcffa,	// (0x0001ac70) bg_popup_trans_pane_g8

0xa0d2,	// (0x00017d48) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0001d5c8) bg_popup_trans_pane_g

0xd002,	// (0x0001ac78) cell_image3_tool_bar_pane_ParamLimits

0xd002,	// (0x0001ac78) cell_image3_tool_bar_pane

0xc21a,	// (0x00019e90) cell_image3_tool_bar_pane_g1

0x9362,	// (0x00016fd8) bg_popup_trans_pane_cp1

0xd018,	// (0x0001ac8e) popup_image3_note_pane_t1

0xd026,	// (0x0001ac9c) popup_image3_note_pane_t2

0xd034,	// (0x0001acaa) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0001d5db) popup_image3_note_pane_t

0xd044,	// (0x0001acba) popup_image3_note_pane_t3_copy1

0x640d,	// (0x00014083) bg_myfav_hc_instruction_pane_ParamLimits

0x640d,	// (0x00014083) bg_myfav_hc_instruction_pane

0x6425,	// (0x0001409b) cell_myfav_contact_pane_ParamLimits

0x6425,	// (0x0001409b) cell_myfav_contact_pane

0x6441,	// (0x000140b7) cell_myfav_contact_pane_cp1_ParamLimits

0x6441,	// (0x000140b7) cell_myfav_contact_pane_cp1

0x6459,	// (0x000140cf) cell_myfav_contact_pane_cp2_ParamLimits

0x6459,	// (0x000140cf) cell_myfav_contact_pane_cp2

0x6471,	// (0x000140e7) cell_myfav_contact_pane_cp3_ParamLimits

0x6471,	// (0x000140e7) cell_myfav_contact_pane_cp3

0x6488,	// (0x000140fe) cell_myfav_contact_pane_cp4_ParamLimits

0x6488,	// (0x000140fe) cell_myfav_contact_pane_cp4

0x64a0,	// (0x00014116) cell_myfav_contact_pane_cp5_ParamLimits

0x64a0,	// (0x00014116) cell_myfav_contact_pane_cp5

0x64b4,	// (0x0001412a) cell_myfav_contact_pane_cp6_ParamLimits

0x64b4,	// (0x0001412a) cell_myfav_contact_pane_cp6

0x64ca,	// (0x00014140) cell_myfav_contact_pane_cp7_ParamLimits

0x64ca,	// (0x00014140) cell_myfav_contact_pane_cp7

0xd052,	// (0x0001acc8) listscroll_gen_pane_cp05

0x64e2,	// (0x00014158) main_myfav_hc_pane_g1_ParamLimits

0x64e2,	// (0x00014158) main_myfav_hc_pane_g1

0x64fc,	// (0x00014172) main_myfav_hc_pane_g2_ParamLimits

0x64fc,	// (0x00014172) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0001d5e2) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0001d5e2) main_myfav_hc_pane_g

0x6530,	// (0x000141a6) main_myfav_hc_pane_t1_ParamLimits

0x6530,	// (0x000141a6) main_myfav_hc_pane_t1

0xd05b,	// (0x0001acd1) main_myfav_hc_pane_t2_ParamLimits

0xd05b,	// (0x0001acd1) main_myfav_hc_pane_t2

0xd06d,	// (0x0001ace3) main_myfav_hc_pane_t3_ParamLimits

0xd06d,	// (0x0001ace3) main_myfav_hc_pane_t3

0x6547,	// (0x000141bd) main_myfav_hc_pane_t4_ParamLimits

0x6547,	// (0x000141bd) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0001d5e9) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0001d5e9) main_myfav_hc_pane_t

0xc21a,	// (0x00019e90) bg_myfav_hc_instruction_pane_g1

0xd07f,	// (0x0001acf5) cell_myfav_contact_pane_g1_ParamLimits

0xd07f,	// (0x0001acf5) cell_myfav_contact_pane_g1

0xd07f,	// (0x0001acf5) cell_myfav_contact_pane_g2_ParamLimits

0xd07f,	// (0x0001acf5) cell_myfav_contact_pane_g2

0xd08b,	// (0x0001ad01) cell_myfav_contact_pane_g3_ParamLimits

0xd08b,	// (0x0001ad01) cell_myfav_contact_pane_g3

0xc523,	// (0x0001a199) cell_myfav_contact_pane_g4_ParamLimits

0xc523,	// (0x0001a199) cell_myfav_contact_pane_g4

0xd098,	// (0x0001ad0e) cell_myfav_contact_pane_g5_ParamLimits

0xd098,	// (0x0001ad0e) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0001d5f4) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0001d5f4) cell_myfav_contact_pane_g

0x6516,	// (0x0001418c) main_myfav_hc_pane_g3_ParamLimits

0x6516,	// (0x0001418c) main_myfav_hc_pane_g3

0x0c3d,	// (0x0000e8b3) popup_adpt_find_window

0x6571,	// (0x000141e7) afind_page_pane_ParamLimits

0x6571,	// (0x000141e7) afind_page_pane

0x6586,	// (0x000141fc) aid_size_cell_afind_ParamLimits

0x6586,	// (0x000141fc) aid_size_cell_afind

0x65a4,	// (0x0001421a) bg_popup_sub_pane_cp09_ParamLimits

0x65a4,	// (0x0001421a) bg_popup_sub_pane_cp09

0x65b1,	// (0x00014227) find_pane_cp01_ParamLimits

0x65b1,	// (0x00014227) find_pane_cp01

0xd0a4,	// (0x0001ad1a) grid_afind_control_pane_ParamLimits

0xd0a4,	// (0x0001ad1a) grid_afind_control_pane

0x65be,	// (0x00014234) grid_afind_pane_ParamLimits

0x65be,	// (0x00014234) grid_afind_pane

0x65e0,	// (0x00014256) cell_afind_pane_ParamLimits

0x65e0,	// (0x00014256) cell_afind_pane

0xc21a,	// (0x00019e90) afind_page_pane_g1

0x6647,	// (0x000142bd) afind_page_pane_g2

0x6650,	// (0x000142c6) afind_page_pane_g3

0x0002,

0xf989,	// (0x0001d5ff) afind_page_pane_g

0x6659,	// (0x000142cf) afind_page_pane_t1

0xd0b8,	// (0x0001ad2e) cell_afind_grid_control_pane_ParamLimits

0xd0b8,	// (0x0001ad2e) cell_afind_grid_control_pane

0xcd92,	// (0x0001aa08) bg_button_pane_cp69_ParamLimits

0xcd92,	// (0x0001aa08) bg_button_pane_cp69

0x6679,	// (0x000142ef) cell_afind_pane_g1_ParamLimits

0x6679,	// (0x000142ef) cell_afind_pane_g1

0x6686,	// (0x000142fc) cell_afind_pane_t1_ParamLimits

0x6686,	// (0x000142fc) cell_afind_pane_t1

0x9e2b,	// (0x00017aa1) bg_button_pane_cp72

0xd0c7,	// (0x0001ad3d) cell_afind_grid_control_pane_g1

0x35c5,	// (0x0001123b) aid_image_placing_area_ParamLimits

0x35c5,	// (0x0001123b) aid_image_placing_area

0xc828,	// (0x0001a49e) field_vitu_entry_pane_g1_ParamLimits

0xc828,	// (0x0001a49e) field_vitu_entry_pane_g1

0xc834,	// (0x0001a4aa) field_vitu_entry_pane_g2_ParamLimits

0xc834,	// (0x0001a4aa) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0001d4b0) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0001d4b0) field_vitu_entry_pane_g

0x5705,	// (0x0001337b) cell_vitu_itu_pane_g1_ParamLimits

0x5747,	// (0x000133bd) cell_vitu_itu_pane_t3_ParamLimits

0x5747,	// (0x000133bd) cell_vitu_itu_pane_t3

0xcd42,	// (0x0001a9b8) mp4_progress_pane_t1_ParamLimits

0xcd5b,	// (0x0001a9d1) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0001d545) mp4_progress_pane_t_ParamLimits

0xcd74,	// (0x0001a9ea) mup_progress_pane_cp04_ParamLimits

0x655b,	// (0x000141d1) main_myfav_hc_pane_t5_ParamLimits

0x655b,	// (0x000141d1) main_myfav_hc_pane_t5

0x9388,	// (0x00016ffe) aid_zoom_text_primary

0x0c3d,	// (0x0000e8b3) popup_adpt_find_window_ParamLimits

0x93d3,	// (0x00017049) main_cam_set_pane

0x5e8c,	// (0x00013b02) cam4_zoom_pane_ParamLimits

0x5e8c,	// (0x00013b02) cam4_zoom_pane

0x6698,	// (0x0001430e) main_cam_set_pane_g1_ParamLimits

0x6698,	// (0x0001430e) main_cam_set_pane_g1

0x66a6,	// (0x0001431c) main_cam_set_pane_g2_ParamLimits

0x66a6,	// (0x0001431c) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0001d606) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0001d606) main_cam_set_pane_g

0x66c9,	// (0x0001433f) main_cam_set_pane_t1_ParamLimits

0x66c9,	// (0x0001433f) main_cam_set_pane_t1

0x66e4,	// (0x0001435a) main_cset_listscroll_pane_ParamLimits

0x66e4,	// (0x0001435a) main_cset_listscroll_pane

0x6708,	// (0x0001437e) main_cset_slider_pane_ParamLimits

0x6708,	// (0x0001437e) main_cset_slider_pane

0xd0d8,	// (0x0001ad4e) main_cset_list_pane_ParamLimits

0xd0d8,	// (0x0001ad4e) main_cset_list_pane

0xd0e8,	// (0x0001ad5e) scroll_pane_cp028

0x6732,	// (0x000143a8) aid_area_touch_slider

0x674e,	// (0x000143c4) cset_slider_pane

0x6778,	// (0x000143ee) main_cset_slider_pane_g1

0x678d,	// (0x00014403) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0001d60b) main_cset_slider_pane_g

0xd121,	// (0x0001ad97) main_cset_slider_pane_t1

0x684f,	// (0x000144c5) main_cset_slider_pane_t2

0x6869,	// (0x000144df) main_cset_slider_pane_t3

0x6883,	// (0x000144f9) main_cset_slider_pane_t4

0x689d,	// (0x00014513) main_cset_slider_pane_t5

0x68bb,	// (0x00014531) main_cset_slider_pane_t6

0x68d2,	// (0x00014548) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0001d630) main_cset_slider_pane_t

0x69de,	// (0x00014654) cset_list_set_pane_ParamLimits

0x69de,	// (0x00014654) cset_list_set_pane

0x69f2,	// (0x00014668) aid_position_infowindow_above

0x69fa,	// (0x00014670) aid_position_infowindow_below

0xd1c1,	// (0x0001ae37) cset_list_set_pane_g1_ParamLimits

0xd1c1,	// (0x0001ae37) cset_list_set_pane_g1

0x6a02,	// (0x00014678) cset_list_set_pane_g3_ParamLimits

0x6a02,	// (0x00014678) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0001d64f) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0001d64f) cset_list_set_pane_g

0x6a11,	// (0x00014687) cset_list_set_pane_t1_ParamLimits

0x6a11,	// (0x00014687) cset_list_set_pane_t1

0x93d3,	// (0x00017049) list_highlight_pane_cp021_ParamLimits

0x93d3,	// (0x00017049) list_highlight_pane_cp021

0xa9d0,	// (0x00018646) cset_slider_pane_g1

0xa9e2,	// (0x00018658) cset_slider_pane_g2

0xa9d9,	// (0x0001864f) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0001d654) cset_slider_pane_g

0xd1cd,	// (0x0001ae43) aid_area_touch_cam4_zoom

0xd1d5,	// (0x0001ae4b) cam4_zoom_cont_pane

0xd1dd,	// (0x0001ae53) cam4_zoom_pane_g1

0xd1e5,	// (0x0001ae5b) cam4_zoom_pane_g2

0x6a26,	// (0x0001469c) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0001d65b) cam4_zoom_pane_g

0xd1ed,	// (0x0001ae63) cam4_zoom_cont_pane_g1

0xd1f6,	// (0x0001ae6c) cam4_zoom_cont_pane_g2

0xd1ff,	// (0x0001ae75) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0001d662) cam4_zoom_cont_pane_g

0x5d4b,	// (0x000139c1) call4_image_pane_ParamLimits

0x5d4b,	// (0x000139c1) call4_image_pane

0xcdd2,	// (0x0001aa48) call4_windows_conf_pane_ParamLimits

0xce19,	// (0x0001aa8f) popup_call4_audio_in_window_ParamLimits

0xce19,	// (0x0001aa8f) popup_call4_audio_in_window

0x9362,	// (0x00016fd8) bg_popup_call2_act_pane_cp02

0xce91,	// (0x0001ab07) call4_list_conf_pane

0xc21a,	// (0x00019e90) call4_image_pane_g1

0xc21a,	// (0x00019e90) call4_image_pane_g2

0x0001,

0xf700,	// (0x0001d376) call4_image_pane_g

0xd208,	// (0x0001ae7e) list_single_graphic_popup_conf4_pane_ParamLimits

0xd208,	// (0x0001ae7e) list_single_graphic_popup_conf4_pane

0x9362,	// (0x00016fd8) list_highlight_pane_cp022

0xd21d,	// (0x0001ae93) list_single_graphic_popup_conf4_pane_g1

0xa6aa,	// (0x00018320) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0001d669) list_single_graphic_popup_conf4_pane_g

0xd225,	// (0x0001ae9b) list_single_graphic_popup_conf4_pane_t1

0x1ac1,	// (0x0000f737) popup_vtel_slider_window_ParamLimits

0x1ac1,	// (0x0000f737) popup_vtel_slider_window

0xcd80,	// (0x0001a9f6) dialer2_ne_pane_t2_ParamLimits

0xcd80,	// (0x0001a9f6) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0001d54a) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0001d54a) dialer2_ne_pane_t

0xbff9,	// (0x00019c6f) bg_popup_sub_pane_cp010_ParamLimits

0xbff9,	// (0x00019c6f) bg_popup_sub_pane_cp010

0x6a2e,	// (0x000146a4) popup_vtel_slider_window_g1_ParamLimits

0x6a2e,	// (0x000146a4) popup_vtel_slider_window_g1

0x6a41,	// (0x000146b7) popup_vtel_slider_window_g2_ParamLimits

0x6a41,	// (0x000146b7) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0001d66e) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0001d66e) popup_vtel_slider_window_g

0x6a97,	// (0x0001470d) vtel_slider_pane_ParamLimits

0x6a97,	// (0x0001470d) vtel_slider_pane

0x6ab9,	// (0x0001472f) vtel_slider_pane_g1_ParamLimits

0x6ab9,	// (0x0001472f) vtel_slider_pane_g1

0x6acd,	// (0x00014743) vtel_slider_pane_g2_ParamLimits

0x6acd,	// (0x00014743) vtel_slider_pane_g2

0x6ae5,	// (0x0001475b) vtel_slider_pane_g3_ParamLimits

0x6ae5,	// (0x0001475b) vtel_slider_pane_g3

0x6ab9,	// (0x0001472f) vtel_slider_pane_g4_ParamLimits

0x6ab9,	// (0x0001472f) vtel_slider_pane_g4

0x6afb,	// (0x00014771) vtel_slider_pane_g5_ParamLimits

0x6afb,	// (0x00014771) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0001d677) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0001d677) vtel_slider_pane_g

0x9362,	// (0x00016fd8) main_gallery2_pane

0x60c0,	// (0x00013d36) aid_size_row_itut2_dropdow_list_ParamLimits

0x60c0,	// (0x00013d36) aid_size_row_itut2_dropdow_list

0x6150,	// (0x00013dc6) grid_vitu2_function_top_pane_ParamLimits

0x6150,	// (0x00013dc6) grid_vitu2_function_top_pane

0x61af,	// (0x00013e25) popup_vitu2_dropdown_list_window_ParamLimits

0x61af,	// (0x00013e25) popup_vitu2_dropdown_list_window

0x61d8,	// (0x00013e4e) popup_vitu2_match_list_window

0x6b11,	// (0x00014787) cell_vitu2_function_top_pane_ParamLimits

0x6b11,	// (0x00014787) cell_vitu2_function_top_pane

0x6b31,	// (0x000147a7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6b31,	// (0x000147a7) cell_vitu2_function_top_pane_cp01

0x6b4f,	// (0x000147c5) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b4f,	// (0x000147c5) cell_vitu2_function_top_wide_pane

0x93d3,	// (0x00017049) bg_button_pane_cp012

0x6b6d,	// (0x000147e3) cell_vitu2_function_top_pane_g1

0xd249,	// (0x0001aebf) bg_button_pane_cp013_ParamLimits

0xd249,	// (0x0001aebf) bg_button_pane_cp013

0x6b81,	// (0x000147f7) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6b81,	// (0x000147f7) cell_vitu2_function_top_wide_pane_g1

0x93d3,	// (0x00017049) bg_popup_sub_pane_cp20

0x6b99,	// (0x0001480f) list_vitu2_match_list_pane

0xcfca,	// (0x0001ac40) bg_popup_sub_pane_cp20_g1

0xcfd2,	// (0x0001ac48) bg_popup_sub_pane_cp20_g2

0xa0f2,	// (0x00017d68) bg_popup_sub_pane_cp20_g3

0xcfda,	// (0x0001ac50) bg_popup_sub_pane_cp20_g4

0xa0d2,	// (0x00017d48) bg_popup_sub_pane_cp20_g5

0xd265,	// (0x0001aedb) bg_popup_sub_pane_cp20_g6

0xcfea,	// (0x0001ac60) bg_popup_sub_pane_cp20_g7

0xcff2,	// (0x0001ac68) bg_popup_sub_pane_cp20_g8

0xcffa,	// (0x0001ac70) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0001d682) bg_popup_sub_pane_cp20_g

0xd26d,	// (0x0001aee3) list_vitu2_match_list_item_pane_ParamLimits

0xd26d,	// (0x0001aee3) list_vitu2_match_list_item_pane

0xd27f,	// (0x0001aef5) list_vitu2_match_list_item_pane_t1

0x9362,	// (0x00016fd8) bg_popup_sub_pane_cp21

0xa564,	// (0x000181da) grid_vitu2_dropdown_list_pane

0x6be9,	// (0x0001485f) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6be9,	// (0x0001485f) cell_vitu2_dropdown_list_char_pane

0x6c0c,	// (0x00014882) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6c0c,	// (0x00014882) cell_vitu2_dropdown_list_ctrl_pane

0xd2a5,	// (0x0001af1b) cell_vitu2_dropdown_list_char_pane_g1

0xd2ae,	// (0x0001af24) cell_vitu2_dropdown_list_char_pane_g2

0xd2b7,	// (0x0001af2d) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0001d69f) cell_vitu2_dropdown_list_char_pane_g

0x6c3a,	// (0x000148b0) cell_vitu2_dropdown_list_char_pane_t1

0x6c48,	// (0x000148be) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6c48,	// (0x000148be) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6c58,	// (0x000148ce) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6c58,	// (0x000148ce) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6c69,	// (0x000148df) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6c69,	// (0x000148df) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6c79,	// (0x000148ef) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6c79,	// (0x000148ef) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc44a,	// (0x0001a0c0) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc44a,	// (0x0001a0c0) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0001d6a6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0001d6a6) cell_vitu2_dropdown_list_ctrl_pane_g

0x6c95,	// (0x0001490b) aid_size_cell_gallery2_ParamLimits

0x6c95,	// (0x0001490b) aid_size_cell_gallery2

0x6cab,	// (0x00014921) grid_gallery2_pane_ParamLimits

0x6cab,	// (0x00014921) grid_gallery2_pane

0x6cbf,	// (0x00014935) scroll_pane_cp029_ParamLimits

0x6cbf,	// (0x00014935) scroll_pane_cp029

0x6ccb,	// (0x00014941) cell_gallery2_pane_ParamLimits

0x6ccb,	// (0x00014941) cell_gallery2_pane

0xd2c0,	// (0x0001af36) cell_gallery2_pane_g2

0x6d05,	// (0x0001497b) cell_gallery2_pane_g3

0xd2ca,	// (0x0001af40) cell_gallery2_pane_g4

0xd2d2,	// (0x0001af48) cell_gallery2_pane_g5

0xa878,	// (0x000184ee) grid_highlight_pane_cp10

0x61d8,	// (0x00013e4e) popup_vitu2_match_list_window_ParamLimits

0x61ef,	// (0x00013e65) popup_vitu2_query_window_ParamLimits

0x61ef,	// (0x00013e65) popup_vitu2_query_window

0x9362,	// (0x00016fd8) bg_vitu2_candi_button_pane

0xd2a5,	// (0x0001af1b) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd2ae,	// (0x0001af24) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd2b7,	// (0x0001af2d) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6d0d,	// (0x00014983) bg_button_pane_cp015

0x6d21,	// (0x00014997) bg_button_pane_cp016

0x6d34,	// (0x000149aa) bg_button_pane_cp017

0xbce5,	// (0x0001995b) bg_popup_sub_pane_cp22

0xd2da,	// (0x0001af50) popup_vitu2_query_window_g1

0x6d79,	// (0x000149ef) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0001d6b1) popup_vitu2_query_window_g

0x6d98,	// (0x00014a0e) popup_vitu2_query_window_t1_ParamLimits

0x6d98,	// (0x00014a0e) popup_vitu2_query_window_t1

0x6dcd,	// (0x00014a43) popup_vitu2_query_window_t2_ParamLimits

0x6dcd,	// (0x00014a43) popup_vitu2_query_window_t2

0x6ddf,	// (0x00014a55) popup_vitu2_query_window_t3_ParamLimits

0x6ddf,	// (0x00014a55) popup_vitu2_query_window_t3

0x6e07,	// (0x00014a7d) popup_vitu2_query_window_t4_ParamLimits

0x6e07,	// (0x00014a7d) popup_vitu2_query_window_t4

0x6e28,	// (0x00014a9e) popup_vitu2_query_window_t5_ParamLimits

0x6e28,	// (0x00014a9e) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0001d6b8) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0001d6b8) popup_vitu2_query_window_t

0xd0d0,	// (0x0001ad46) main_cset_text_pane

0x6732,	// (0x000143a8) aid_area_touch_slider_ParamLimits

0x674e,	// (0x000143c4) cset_slider_pane_ParamLimits

0x6778,	// (0x000143ee) main_cset_slider_pane_g1_ParamLimits

0x678d,	// (0x00014403) main_cset_slider_pane_g2_ParamLimits

0xd0f1,	// (0x0001ad67) main_cset_slider_pane_g3_ParamLimits

0xd0f1,	// (0x0001ad67) main_cset_slider_pane_g3

0x67a2,	// (0x00014418) main_cset_slider_pane_g4_ParamLimits

0x67a2,	// (0x00014418) main_cset_slider_pane_g4

0x67b1,	// (0x00014427) main_cset_slider_pane_g5_ParamLimits

0x67b1,	// (0x00014427) main_cset_slider_pane_g5

0x67bf,	// (0x00014435) main_cset_slider_pane_g6_ParamLimits

0x67bf,	// (0x00014435) main_cset_slider_pane_g6

0xf995,	// (0x0001d60b) main_cset_slider_pane_g_ParamLimits

0xd121,	// (0x0001ad97) main_cset_slider_pane_t1_ParamLimits

0x684f,	// (0x000144c5) main_cset_slider_pane_t2_ParamLimits

0x6869,	// (0x000144df) main_cset_slider_pane_t3_ParamLimits

0x6883,	// (0x000144f9) main_cset_slider_pane_t4_ParamLimits

0x689d,	// (0x00014513) main_cset_slider_pane_t5_ParamLimits

0x68bb,	// (0x00014531) main_cset_slider_pane_t6_ParamLimits

0x68d2,	// (0x00014548) main_cset_slider_pane_t7_ParamLimits

0x6900,	// (0x00014576) main_cset_slider_pane_t8_ParamLimits

0x6900,	// (0x00014576) main_cset_slider_pane_t8

0x6928,	// (0x0001459e) main_cset_slider_pane_t9_ParamLimits

0x6928,	// (0x0001459e) main_cset_slider_pane_t9

0x6950,	// (0x000145c6) main_cset_slider_pane_t10_ParamLimits

0x6950,	// (0x000145c6) main_cset_slider_pane_t10

0x6978,	// (0x000145ee) main_cset_slider_pane_t11_ParamLimits

0x6978,	// (0x000145ee) main_cset_slider_pane_t11

0x69a2,	// (0x00014618) main_cset_slider_pane_t12_ParamLimits

0x69a2,	// (0x00014618) main_cset_slider_pane_t12

0x69bf,	// (0x00014635) main_cset_slider_pane_t13_ParamLimits

0x69bf,	// (0x00014635) main_cset_slider_pane_t13

0xf9ba,	// (0x0001d630) main_cset_slider_pane_t_ParamLimits

0x9362,	// (0x00016fd8) bg_popup_sub_pane_cp011

0xd2e6,	// (0x0001af5c) main_cset_text_pane_g1

0xd2ee,	// (0x0001af64) main_cset_text_pane_t1

0xd2fc,	// (0x0001af72) main_cset_text_pane_t2

0xd30a,	// (0x0001af80) main_cset_text_pane_t3

0xd318,	// (0x0001af8e) main_cset_text_pane_t4

0xd326,	// (0x0001af9c) main_cset_text_pane_t5

0xd334,	// (0x0001afaa) main_cset_text_pane_t6

0xd342,	// (0x0001afb8) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0001d6c7) main_cset_text_pane_t

0x9362,	// (0x00016fd8) main_cam4_burst_pane

0x9362,	// (0x00016fd8) main_cam5_pane

0x6667,	// (0x000142dd) bg_button_pane_cp019

0x6670,	// (0x000142e6) bg_button_pane_cp020

0xd0fd,	// (0x0001ad73) main_cset_slider_pane_g7_ParamLimits

0xd0fd,	// (0x0001ad73) main_cset_slider_pane_g7

0xd109,	// (0x0001ad7f) main_cset_slider_pane_g8_ParamLimits

0xd109,	// (0x0001ad7f) main_cset_slider_pane_g8

0x67d3,	// (0x00014449) main_cset_slider_pane_g9_ParamLimits

0x67d3,	// (0x00014449) main_cset_slider_pane_g9

0x67df,	// (0x00014455) main_cset_slider_pane_g10_ParamLimits

0x67df,	// (0x00014455) main_cset_slider_pane_g10

0x67eb,	// (0x00014461) main_cset_slider_pane_g11_ParamLimits

0x67eb,	// (0x00014461) main_cset_slider_pane_g11

0x67f7,	// (0x0001446d) main_cset_slider_pane_g12_ParamLimits

0x67f7,	// (0x0001446d) main_cset_slider_pane_g12

0x6803,	// (0x00014479) main_cset_slider_pane_g13_ParamLimits

0x6803,	// (0x00014479) main_cset_slider_pane_g13

0x680f,	// (0x00014485) main_cset_slider_pane_g14_ParamLimits

0x680f,	// (0x00014485) main_cset_slider_pane_g14

0x681b,	// (0x00014491) main_cset_slider_pane_g15_ParamLimits

0x681b,	// (0x00014491) main_cset_slider_pane_g15

0xd14f,	// (0x0001adc5) main_cset_slider_pane_t14_ParamLimits

0xd14f,	// (0x0001adc5) main_cset_slider_pane_t14

0xd188,	// (0x0001adfe) main_cset_slider_pane_t15_ParamLimits

0xd188,	// (0x0001adfe) main_cset_slider_pane_t15

0x6e9f,	// (0x00014b15) aid_cam4_burst_size_cell_ParamLimits

0x6e9f,	// (0x00014b15) aid_cam4_burst_size_cell

0x6ebf,	// (0x00014b35) grid_cam4_burst_pane_ParamLimits

0x6ebf,	// (0x00014b35) grid_cam4_burst_pane

0x6ef9,	// (0x00014b6f) linegrid_cam4_burst_pane_ParamLimits

0x6ef9,	// (0x00014b6f) linegrid_cam4_burst_pane

0xd350,	// (0x0001afc6) scroll_pane_cp30_ParamLimits

0xd350,	// (0x0001afc6) scroll_pane_cp30

0x6f1d,	// (0x00014b93) cell_cam4_burst_pane_ParamLimits

0x6f1d,	// (0x00014b93) cell_cam4_burst_pane

0xd35c,	// (0x0001afd2) linegrid_cam4_burst_pane_g1_ParamLimits

0xd35c,	// (0x0001afd2) linegrid_cam4_burst_pane_g1

0x6f72,	// (0x00014be8) linegrid_cam4_burst_pane_g2_ParamLimits

0x6f72,	// (0x00014be8) linegrid_cam4_burst_pane_g2

0xd369,	// (0x0001afdf) linegrid_cam4_burst_pane_g3_ParamLimits

0xd369,	// (0x0001afdf) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0001d6d6) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0001d6d6) linegrid_cam4_burst_pane_g

0x6f83,	// (0x00014bf9) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6f83,	// (0x00014bf9) linegrid_cam4_burst_pane_g3_copy1

0xd376,	// (0x0001afec) linegrid_cam4_burst_pane_g4_ParamLimits

0xd376,	// (0x0001afec) linegrid_cam4_burst_pane_g4

0x6fa1,	// (0x00014c17) linegrid_cam4_burst_pane_g5_ParamLimits

0x6fa1,	// (0x00014c17) linegrid_cam4_burst_pane_g5

0x6fb2,	// (0x00014c28) linegrid_cam4_burst_pane_g6_ParamLimits

0x6fb2,	// (0x00014c28) linegrid_cam4_burst_pane_g6

0xd383,	// (0x0001aff9) linegrid_cam4_burst_pane_g7_ParamLimits

0xd383,	// (0x0001aff9) linegrid_cam4_burst_pane_g7

0x6fc9,	// (0x00014c3f) cell_cam4_burst_pane_g1

0xd39c,	// (0x0001b012) main_cam5_pane_t1_ParamLimits

0xd39c,	// (0x0001b012) main_cam5_pane_t1

0xd3ae,	// (0x0001b024) main_cam5_pane_t2_ParamLimits

0xd3ae,	// (0x0001b024) main_cam5_pane_t2

0xd3c0,	// (0x0001b036) main_cam5_pane_t3_ParamLimits

0xd3c0,	// (0x0001b036) main_cam5_pane_t3

0xd3d2,	// (0x0001b048) main_cam5_pane_t4_ParamLimits

0xd3d2,	// (0x0001b048) main_cam5_pane_t4

0xd3ea,	// (0x0001b060) main_cam5_pane_t5_ParamLimits

0xd3ea,	// (0x0001b060) main_cam5_pane_t5

0xd3fe,	// (0x0001b074) main_cam5_pane_t6_ParamLimits

0xd3fe,	// (0x0001b074) main_cam5_pane_t6

0xd412,	// (0x0001b088) main_cam5_pane_t7_ParamLimits

0xd412,	// (0x0001b088) main_cam5_pane_t7

0xd424,	// (0x0001b09a) main_cam5_pane_t8_ParamLimits

0xd424,	// (0x0001b09a) main_cam5_pane_t8

0xd442,	// (0x0001b0b8) main_cam5_pane_t9_ParamLimits

0xd442,	// (0x0001b0b8) main_cam5_pane_t9

0xd454,	// (0x0001b0ca) main_cam5_pane_t10_ParamLimits

0xd454,	// (0x0001b0ca) main_cam5_pane_t10

0xd466,	// (0x0001b0dc) main_cam5_pane_t11_ParamLimits

0xd466,	// (0x0001b0dc) main_cam5_pane_t11

0xd47a,	// (0x0001b0f0) main_cam5_pane_t12_ParamLimits

0xd47a,	// (0x0001b0f0) main_cam5_pane_t12

0xd491,	// (0x0001b107) main_cam5_pane_t13_ParamLimits

0xd491,	// (0x0001b107) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0001d6e2) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0001d6e2) main_cam5_pane_t

0x0cc1,	// (0x0000e937) popup_scut_keymap_window_ParamLimits

0x0cc1,	// (0x0000e937) popup_scut_keymap_window

0x6fdc,	// (0x00014c52) aid_size_cell_brow_shortcut

0xa878,	// (0x000184ee) bg_popup_window_pane_cp010

0x6fe8,	// (0x00014c5e) grid_scut_pane

0x6ff4,	// (0x00014c6a) cell_scut_pane_ParamLimits

0x6ff4,	// (0x00014c6a) cell_scut_pane

0x700d,	// (0x00014c83) cell_scut_pane_g1

0xd4b4,	// (0x0001b12a) cell_scut_pane_t1

0xd4c3,	// (0x0001b139) cell_scut_pane_t2

0x7016,	// (0x00014c8c) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0001d6fd) cell_scut_pane_t

0x4bff,	// (0x00012875) main_mup3_pane_g8_ParamLimits

0x4bff,	// (0x00012875) main_mup3_pane_g8

0x60da,	// (0x00013d50) area_vitu2_query_pane_ParamLimits

0x60da,	// (0x00013d50) area_vitu2_query_pane

0x6d47,	// (0x000149bd) input_focus_pane_cp08

0xd4d2,	// (0x0001b148) area_vitu2_query_pane_g1

0x7024,	// (0x00014c9a) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0001d704) area_vitu2_query_pane_g

0x7035,	// (0x00014cab) area_vitu2_query_pane_t1_ParamLimits

0x7035,	// (0x00014cab) area_vitu2_query_pane_t1

0x7049,	// (0x00014cbf) area_vitu2_query_pane_t2_ParamLimits

0x7049,	// (0x00014cbf) area_vitu2_query_pane_t2

0x705d,	// (0x00014cd3) area_vitu2_query_pane_t3_ParamLimits

0x705d,	// (0x00014cd3) area_vitu2_query_pane_t3

0xd4de,	// (0x0001b154) area_vitu2_query_pane_t4_ParamLimits

0xd4de,	// (0x0001b154) area_vitu2_query_pane_t4

0xd506,	// (0x0001b17c) area_vitu2_query_pane_t5_ParamLimits

0xd506,	// (0x0001b17c) area_vitu2_query_pane_t5

0xd52e,	// (0x0001b1a4) area_vitu2_query_pane_t6_ParamLimits

0xd52e,	// (0x0001b1a4) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0001d709) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0001d709) area_vitu2_query_pane_t

0x7085,	// (0x00014cfb) bg_button_pane_cp018

0x7093,	// (0x00014d09) bg_button_pane_cp021

0x709f,	// (0x00014d15) bg_button_pane_cp022

0x70b0,	// (0x00014d26) input_focus_pane_cp09

0x2ae2,	// (0x00010758) aid_size_touch_mv_arrow_left

0x2b0b,	// (0x00010781) aid_size_touch_mv_arrow_right

0x6833,	// (0x000144a9) main_cset_slider_pane_g16_ParamLimits

0x6833,	// (0x000144a9) main_cset_slider_pane_g16

0x6841,	// (0x000144b7) main_cset_slider_pane_g17_ParamLimits

0x6841,	// (0x000144b7) main_cset_slider_pane_g17

0x6fc9,	// (0x00014c3f) cell_cam4_burst_pane_g1_ParamLimits

0x9362,	// (0x00016fd8) compa_mode_pane

0x6a51,	// (0x000146c7) popup_vtel_slider_window_g3_ParamLimits

0x6a51,	// (0x000146c7) popup_vtel_slider_window_g3

0x6a68,	// (0x000146de) popup_vtel_slider_window_g4_ParamLimits

0x6a68,	// (0x000146de) popup_vtel_slider_window_g4

0x6a7f,	// (0x000146f5) popup_vtel_slider_window_t1_ParamLimits

0x6a7f,	// (0x000146f5) popup_vtel_slider_window_t1

0x9362,	// (0x00016fd8) main_cl_pane

0xbd11,	// (0x00019987) popup_imed_adjust2_window_ParamLimits

0xbce5,	// (0x0001995b) bg_tb_trans_pane_cp05_ParamLimits

0xc75d,	// (0x0001a3d3) popup_imed_adjust2_window_g1_ParamLimits

0xc76c,	// (0x0001a3e2) popup_imed_adjust2_window_g2_ParamLimits

0xc76c,	// (0x0001a3e2) popup_imed_adjust2_window_g2

0xc778,	// (0x0001a3ee) popup_imed_adjust2_window_g3_ParamLimits

0xc778,	// (0x0001a3ee) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0001d474) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0001d474) popup_imed_adjust2_window_g

0xc784,	// (0x0001a3fa) popup_imed_adjust2_window_t1_ParamLimits

0xc79c,	// (0x0001a412) slider_imed_adjust_pane_ParamLimits

0xc7b0,	// (0x0001a426) slider_imed_adjust_pane_g1_ParamLimits

0xc7c0,	// (0x0001a436) slider_imed_adjust_pane_g2_ParamLimits

0xc7d0,	// (0x0001a446) slider_imed_adjust_pane_g3_ParamLimits

0xc7e1,	// (0x0001a457) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0001d47b) slider_imed_adjust_pane_g_ParamLimits

0x5e2c,	// (0x00013aa2) aid_touch_area_cam4_ParamLimits

0x5e2c,	// (0x00013aa2) aid_touch_area_cam4

0xcedb,	// (0x0001ab51) battery_pane_cp01

0x5ed7,	// (0x00013b4d) main_camera4_pane_g6_ParamLimits

0x5ed7,	// (0x00013b4d) main_camera4_pane_g6

0x5efa,	// (0x00013b70) main_camera4_pane_t2_ParamLimits

0x5efa,	// (0x00013b70) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0001d57e) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0001d57e) main_camera4_pane_t

0x5f2f,	// (0x00013ba5) aid_touch_area_vid4_ParamLimits

0x5f2f,	// (0x00013ba5) aid_touch_area_vid4

0x5f8d,	// (0x00013c03) main_video4_pane_g5_ParamLimits

0x5f8d,	// (0x00013c03) main_video4_pane_g5

0x5fb4,	// (0x00013c2a) vid4_progress_pane_ParamLimits

0x5fb4,	// (0x00013c2a) vid4_progress_pane

0xd115,	// (0x0001ad8b) main_cset_slider_pane_g18_ParamLimits

0xd115,	// (0x0001ad8b) main_cset_slider_pane_g18

0xd390,	// (0x0001b006) cell_cam4_burst_pane_g2_ParamLimits

0xd390,	// (0x0001b006) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0001d6dd) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0001d6dd) cell_cam4_burst_pane_g

0x9b3c,	// (0x000177b2) bg_cl_pane_ParamLimits

0x9b3c,	// (0x000177b2) bg_cl_pane

0x70c1,	// (0x00014d37) cl_header_pane_ParamLimits

0x70c1,	// (0x00014d37) cl_header_pane

0x70d5,	// (0x00014d4b) cl_listscroll_pane_ParamLimits

0x70d5,	// (0x00014d4b) cl_listscroll_pane

0xd57a,	// (0x0001b1f0) bg_cl_pane_g1

0xd582,	// (0x0001b1f8) bg_cl_pane_g2

0xd58a,	// (0x0001b200) bg_cl_pane_g3

0xd592,	// (0x0001b208) bg_cl_pane_g4

0xd59a,	// (0x0001b210) bg_cl_pane_g5

0xd5a2,	// (0x0001b218) bg_cl_pane_g6

0xd5aa,	// (0x0001b220) bg_cl_pane_g7

0xd5b2,	// (0x0001b228) bg_cl_pane_g8

0xd5ba,	// (0x0001b230) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0001d718) bg_cl_pane_g

0x70e5,	// (0x00014d5b) aid_height_cl_leading_ParamLimits

0x70e5,	// (0x00014d5b) aid_height_cl_leading

0x70f1,	// (0x00014d67) aid_height_cl_text_ParamLimits

0x70f1,	// (0x00014d67) aid_height_cl_text

0x93d3,	// (0x00017049) bg_cl_header_pane_ParamLimits

0x93d3,	// (0x00017049) bg_cl_header_pane

0x7110,	// (0x00014d86) cl_header_pane_g1_ParamLimits

0x7110,	// (0x00014d86) cl_header_pane_g1

0x7126,	// (0x00014d9c) cl_header_pane_t1_ParamLimits

0x7126,	// (0x00014d9c) cl_header_pane_t1

0xd5c2,	// (0x0001b238) cl_list_pane

0xd0e8,	// (0x0001ad5e) hc_scroll_pane_cp01

0xa0d2,	// (0x00017d48) bg_cl_header_pane_g1

0xcfca,	// (0x0001ac40) bg_cl_header_pane_g2

0xa0f2,	// (0x00017d68) bg_cl_header_pane_g3

0xcfda,	// (0x0001ac50) bg_cl_header_pane_g4

0xcfd2,	// (0x0001ac48) bg_cl_header_pane_g5

0xd265,	// (0x0001aedb) bg_cl_header_pane_g6

0xcff2,	// (0x0001ac68) bg_cl_header_pane_g7

0xcffa,	// (0x0001ac70) bg_cl_header_pane_g8

0xcfea,	// (0x0001ac60) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0001d72b) bg_cl_header_pane_g

0x713f,	// (0x00014db5) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x713f,	// (0x00014db5) hc_cl_list_double_graphic_heading_pane

0x7152,	// (0x00014dc8) hc_cl_list_single_graphic_pane_ParamLimits

0x7152,	// (0x00014dc8) hc_cl_list_single_graphic_pane

0x716a,	// (0x00014de0) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x716a,	// (0x00014de0) hc_cl_list_single_graphic_pane_g1

0x7176,	// (0x00014dec) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7176,	// (0x00014dec) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0001d73e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0001d73e) hc_cl_list_single_graphic_pane_g

0x718a,	// (0x00014e00) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x718a,	// (0x00014e00) hc_cl_list_single_graphic_pane_t1

0x716a,	// (0x00014de0) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x716a,	// (0x00014de0) hc_cl_list_double_graphic_heading_pane_g1

0x719f,	// (0x00014e15) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x719f,	// (0x00014e15) hc_cl_list_double_graphic_heading_pane_g2

0x71b3,	// (0x00014e29) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x71b3,	// (0x00014e29) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0001d743) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0001d743) hc_cl_list_double_graphic_heading_pane_g

0x71c7,	// (0x00014e3d) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x71c7,	// (0x00014e3d) hc_cl_list_double_graphic_heading_pane_t1

0x71dc,	// (0x00014e52) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x71dc,	// (0x00014e52) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0001d74a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0001d74a) hc_cl_list_double_graphic_heading_pane_t

0xd5d3,	// (0x0001b249) vid4_progress_pane_g1

0xd5df,	// (0x0001b255) vid4_progress_pane_g2

0xd5eb,	// (0x0001b261) vid4_progress_pane_g3

0xd5fa,	// (0x0001b270) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0001d74f) vid4_progress_pane_g

0xd618,	// (0x0001b28e) vid4_progress_pane_t1

0xd62e,	// (0x0001b2a4) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0001d75a) vid4_progress_pane_t

0xd659,	// (0x0001b2cf) wait_bar_pane_cp07

0xc007,	// (0x00019c7d) blid_firmament_pane_ParamLimits

0xc04a,	// (0x00019cc0) popup_blid_sat_info2_window_g1

0xc06e,	// (0x00019ce4) popup_blid_sat_info2_window_t3

0xc07c,	// (0x00019cf2) popup_blid_sat_info2_window_t4

0xc08a,	// (0x00019d00) popup_blid_sat_info2_window_t5

0xc098,	// (0x00019d0e) popup_blid_sat_info2_window_t6

0xc0a8,	// (0x00019d1e) popup_blid_sat_info2_window_t7

0xc0b6,	// (0x00019d2c) popup_blid_sat_info2_window_t8

0xc0c4,	// (0x00019d3a) popup_blid_sat_info2_window_t9

0xc0d2,	// (0x00019d48) popup_blid_sat_info2_window_t10

0xc19a,	// (0x00019e10) aid_firma_cardinal_ParamLimits

0xc1ae,	// (0x00019e24) blid_firmament_pane_t1_ParamLimits

0xc1c5,	// (0x00019e3b) blid_firmament_pane_t2_ParamLimits

0xc1dc,	// (0x00019e52) blid_firmament_pane_t3_ParamLimits

0xc1f3,	// (0x00019e69) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0001d36d) blid_firmament_pane_t_ParamLimits

0xc20a,	// (0x00019e80) blid_sat_info_pane_ParamLimits

0x93d3,	// (0x00017049) main_cam_set_pane_ParamLimits

0x54b1,	// (0x00013127) aid_size_cell_colour_35_ParamLimits

0x54d1,	// (0x00013147) aid_size_cell_colour_112_ParamLimits

0x54f1,	// (0x00013167) aid_size_cell_effect_ParamLimits

0xbce5,	// (0x0001995b) bg_tb_trans_pane_cp02_ParamLimits

0xa2f2,	// (0x00017f68) heading_imed_pane_ParamLimits

0x5511,	// (0x00013187) listscroll_imed_pane_ParamLimits

0xb313,	// (0x00018f89) popup_call2_audio_first_window_g5_ParamLimits

0xb313,	// (0x00018f89) popup_call2_audio_first_window_g5

0x5ad6,	// (0x0001374c) aid_size_touch_image3_arrow_left_ParamLimits

0x5ad6,	// (0x0001374c) aid_size_touch_image3_arrow_left

0x5b02,	// (0x00013778) aid_size_touch_image3_arrow_right_ParamLimits

0x5b02,	// (0x00013778) aid_size_touch_image3_arrow_right

0xd644,	// (0x0001b2ba) vid4_progress_pane_t3

0x582e,	// (0x000134a4) main_hwr_training_symbol_option_pane_ParamLimits

0x582e,	// (0x000134a4) main_hwr_training_symbol_option_pane

0xca4c,	// (0x0001a6c2) popup_hwr_training_preview_window_ParamLimits

0xca4c,	// (0x0001a6c2) popup_hwr_training_preview_window

0x584e,	// (0x000134c4) hwr_training_navi_pane_g5_ParamLimits

0x584e,	// (0x000134c4) hwr_training_navi_pane_g5

0xcfb8,	// (0x0001ac2e) popup_char_count_window

0x93d3,	// (0x00017049) bg_popup_sub_pane_cp20_ParamLimits

0x6b99,	// (0x0001480f) list_vitu2_match_list_pane_ParamLimits

0x6ba8,	// (0x0001481e) vitu2_page_scroll_pane_ParamLimits

0x6ba8,	// (0x0001481e) vitu2_page_scroll_pane

0xd6c5,	// (0x0001b33b) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd6c5,	// (0x0001b33b) list_single_hwr_training_symbol_option_pane

0xd6d8,	// (0x0001b34e) list_single_hwr_training_symbol_option_pane_g1

0xd6e0,	// (0x0001b356) list_single_hwr_training_symbol_option_pane_t1

0xd6ee,	// (0x0001b364) bg_button_pane_cp023

0xd6f7,	// (0x0001b36d) bg_button_pane_cp024

0x71fb,	// (0x00014e71) vitu2_page_scroll_pane_g1

0x7203,	// (0x00014e79) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0001d761) vitu2_page_scroll_pane_g

0x720d,	// (0x00014e83) vitu2_page_scroll_pane_t1

0xbf23,	// (0x00019b99) popup_char_count_window_g1

0xd72a,	// (0x0001b3a0) popup_char_count_window_g2

0xd733,	// (0x0001b3a9) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0001d766) popup_char_count_window_g

0xd73c,	// (0x0001b3b2) popup_char_count_window_t1

0x9362,	// (0x00016fd8) main_vded2_pane

0xc749,	// (0x0001a3bf) aid_size_cell_imed_line

0xc753,	// (0x0001a3c9) grid_imed_line_width_pane

0x6024,	// (0x00013c9a) vid4_indicators_pane_g4

0xd74a,	// (0x0001b3c0) cell_imed_line_width_pane_ParamLimits

0xd74a,	// (0x0001b3c0) cell_imed_line_width_pane

0xd760,	// (0x0001b3d6) cell_imed_line_width_pane_g1

0xd769,	// (0x0001b3df) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0001d76d) cell_imed_line_width_pane_g

0x721c,	// (0x00014e92) main_vded2_pane_g1_ParamLimits

0x721c,	// (0x00014e92) main_vded2_pane_g1

0x7237,	// (0x00014ead) main_vded2_pane_g2_ParamLimits

0x7237,	// (0x00014ead) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0001d772) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0001d772) main_vded2_pane_g

0x7249,	// (0x00014ebf) vded2_slider_pane_ParamLimits

0x7249,	// (0x00014ebf) vded2_slider_pane

0x7259,	// (0x00014ecf) aid_size_touch_vded2_end

0x7263,	// (0x00014ed9) aid_size_touch_vded2_playhead

0xd771,	// (0x0001b3e7) aid_size_touch_vded2_start

0xd779,	// (0x0001b3ef) vded2_slider_bg_pane

0xd782,	// (0x0001b3f8) vded2_slider_pane_g1

0xd78b,	// (0x0001b401) vded2_slider_pane_g2

0x726d,	// (0x00014ee3) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0001d777) vded2_slider_pane_g

0xcb35,	// (0x0001a7ab) vded2_slider_bg_pane_g1

0xcb3e,	// (0x0001a7b4) vded2_slider_bg_pane_g2

0xcb47,	// (0x0001a7bd) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0001d77e) vded2_slider_bg_pane_g

0x3202,	// (0x00010e78) aid_postcard_touch_down_pane_ParamLimits

0x3202,	// (0x00010e78) aid_postcard_touch_down_pane

0x321a,	// (0x00010e90) aid_postcard_touch_up_pane_ParamLimits

0x321a,	// (0x00010e90) aid_postcard_touch_up_pane

0x9362,	// (0x00016fd8) main_blid2_pane

0xbcf3,	// (0x00019969) popup_blid2_search_window

0x9362,	// (0x00016fd8) blid2_gps_pane

0x9362,	// (0x00016fd8) blid2_navig_pane

0x9362,	// (0x00016fd8) blid2_search_pane

0x9362,	// (0x00016fd8) blid2_tripm_pane

0x7278,	// (0x00014eee) blid2_search_pane_g1_ParamLimits

0x7278,	// (0x00014eee) blid2_search_pane_g1

0x7290,	// (0x00014f06) blid2_search_pane_t1_ParamLimits

0x7290,	// (0x00014f06) blid2_search_pane_t1

0x72a2,	// (0x00014f18) aid_size_cell_blid2_gps_ParamLimits

0x72a2,	// (0x00014f18) aid_size_cell_blid2_gps

0x72ba,	// (0x00014f30) blid2_gps_pane_g1_ParamLimits

0x72ba,	// (0x00014f30) blid2_gps_pane_g1

0x72ce,	// (0x00014f44) grid_blid2_satellite_pane_ParamLimits

0x72ce,	// (0x00014f44) grid_blid2_satellite_pane

0x72e6,	// (0x00014f5c) blid2_navig_pane_g1_ParamLimits

0x72e6,	// (0x00014f5c) blid2_navig_pane_g1

0x72f2,	// (0x00014f68) blid2_navig_pane_t1_ParamLimits

0x72f2,	// (0x00014f68) blid2_navig_pane_t1

0x730d,	// (0x00014f83) blid2_navig_pane_t2_ParamLimits

0x730d,	// (0x00014f83) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0001d785) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0001d785) blid2_navig_pane_t

0x7328,	// (0x00014f9e) blid2_navig_ring_pane_ParamLimits

0x7328,	// (0x00014f9e) blid2_navig_ring_pane

0x7343,	// (0x00014fb9) blid2_speed_pane_ParamLimits

0x7343,	// (0x00014fb9) blid2_speed_pane

0x734f,	// (0x00014fc5) blid2_tripm_pane_g1_ParamLimits

0x734f,	// (0x00014fc5) blid2_tripm_pane_g1

0x736a,	// (0x00014fe0) blid2_tripm_pane_g2_ParamLimits

0x736a,	// (0x00014fe0) blid2_tripm_pane_g2

0x737e,	// (0x00014ff4) blid2_tripm_pane_g3_ParamLimits

0x737e,	// (0x00014ff4) blid2_tripm_pane_g3

0x7392,	// (0x00015008) blid2_tripm_pane_g4_ParamLimits

0x7392,	// (0x00015008) blid2_tripm_pane_g4

0x73a6,	// (0x0001501c) blid2_tripm_pane_g5_ParamLimits

0x73a6,	// (0x0001501c) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0001d78a) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0001d78a) blid2_tripm_pane_g

0x73cc,	// (0x00015042) blid2_tripm_pane_t1_ParamLimits

0x73cc,	// (0x00015042) blid2_tripm_pane_t1

0x73e7,	// (0x0001505d) blid2_tripm_pane_t2_ParamLimits

0x73e7,	// (0x0001505d) blid2_tripm_pane_t2

0x7400,	// (0x00015076) blid2_tripm_pane_t3_ParamLimits

0x7400,	// (0x00015076) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0001d797) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0001d797) blid2_tripm_pane_t

0x7447,	// (0x000150bd) cell_blid2_satellite_pane_ParamLimits

0x7447,	// (0x000150bd) cell_blid2_satellite_pane

0x7463,	// (0x000150d9) cell_blid2_satellite_pane_g1

0xd793,	// (0x0001b409) cell_blid2_satellite_pane_t1

0xc21a,	// (0x00019e90) blid2_speed_pane_g1

0xd7a1,	// (0x0001b417) blid2_speed_pane_t1

0xd7af,	// (0x0001b425) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0001d7a0) blid2_speed_pane_t

0xc21a,	// (0x00019e90) blid2_navig_ring_pane_g1

0x746c,	// (0x000150e2) blid2_navig_ring_pane_g2

0x7474,	// (0x000150ea) blid2_navig_ring_pane_g3

0x747c,	// (0x000150f2) blid2_navig_ring_pane_g4

0x7484,	// (0x000150fa) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0001d7a5) blid2_navig_ring_pane_g

0x9362,	// (0x00016fd8) bg_popup_window_pane_cp011

0xd7bd,	// (0x0001b433) popup_blid2_search_window_g1

0xd7c5,	// (0x0001b43b) popup_blid2_search_window_t1

0xd7d3,	// (0x0001b449) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0001d7b0) popup_blid2_search_window_t

0x9fe1,	// (0x00017c57) main_browser_pane_g1

0x9b3c,	// (0x000177b2) main_browser_pane_ParamLimits

0x93d3,	// (0x00017049) bg_button_pane_cp011_ParamLimits

0x63f9,	// (0x0001406f) cell_vitu2_function_pane_g1_ParamLimits

0xbce5,	// (0x0001995b) bg_popup_sub_pane_cp22_ParamLimits

0x6d47,	// (0x000149bd) input_focus_pane_cp08_ParamLimits

0x6d5e,	// (0x000149d4) popup_vitu2_query_button_pane_ParamLimits

0x6d5e,	// (0x000149d4) popup_vitu2_query_button_pane

0x6d6f,	// (0x000149e5) popup_vitu2_query_input_button_pane

0xd2da,	// (0x0001af50) popup_vitu2_query_window_g1_ParamLimits

0x6d79,	// (0x000149ef) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0001d6b1) popup_vitu2_query_window_g_ParamLimits

0x9362,	// (0x00016fd8) bg_button_pane_cp026

0x748c,	// (0x00015102) popup_vitu2_query_input_button_pane_g1

0x9362,	// (0x00016fd8) bg_button_pane_cp025

0xd7e1,	// (0x0001b457) popup_vitu2_query_button_pane_t1

0x490f,	// (0x00012585) main_mp3_pane_t6

0x491d,	// (0x00012593) popup_slider_window_cp01

0xcef9,	// (0x0001ab6f) cam4_battery_pane

0xcf52,	// (0x0001abc8) cam4_battery_pane_cp02

0x71f1,	// (0x00014e67) cam4_battery_pane_cp01

0xd5cb,	// (0x0001b241) cam4_battery_pane_cp03

0xc21a,	// (0x00019e90) cam4_battery_pane_g1

0xd7ef,	// (0x0001b465) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0001d7b5) cam4_battery_pane_g

0xc0e0,	// (0x00019d56) popup_blid_sat_info2_window_t11

0x2ae2,	// (0x00010758) aid_size_touch_mv_arrow_left_ParamLimits

0x2b0b,	// (0x00010781) aid_size_touch_mv_arrow_right_ParamLimits

0xa7d8,	// (0x0001844e) navi_pane_g1_ParamLimits

0x2b34,	// (0x000107aa) navi_pane_g2_ParamLimits

0x2b62,	// (0x000107d8) navi_pane_g3_ParamLimits

0xf409,	// (0x0001d07f) navi_pane_g_ParamLimits

0x2bbc,	// (0x00010832) navi_pane_mv_t1_ParamLimits

0x551d,	// (0x00013193) grid_imed_effect_pane_ParamLimits

0x19c6,	// (0x0000f63c) aid_placing_vt_slider_lsc

0x9f2e,	// (0x00017ba4) aid_placing_vt_slider_prt

0x93d3,	// (0x00017049) bg_tb_trans_pane_cp01_ParamLimits

0xc36a,	// (0x00019fe0) popup_image_details_window_g1_ParamLimits

0xc37d,	// (0x00019ff3) popup_image_details_window_g2_ParamLimits

0xc392,	// (0x0001a008) popup_image_details_window_g3_ParamLimits

0xc392,	// (0x0001a008) popup_image_details_window_g3

0xf73c,	// (0x0001d3b2) popup_image_details_window_g_ParamLimits

0xc3a6,	// (0x0001a01c) popup_image_details_window_t1_ParamLimits

0xc3b8,	// (0x0001a02e) popup_image_details_window_t2_ParamLimits

0xc3d1,	// (0x0001a047) popup_image_details_window_t3_ParamLimits

0xc3e5,	// (0x0001a05b) popup_image_details_window_t4_ParamLimits

0xc400,	// (0x0001a076) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0001d3b9) popup_image_details_window_t_ParamLimits

0x70fd,	// (0x00014d73) cl_header_name_pane_ParamLimits

0x70fd,	// (0x00014d73) cl_header_name_pane

0x7494,	// (0x0001510a) cl_header_name_pane_t1_ParamLimits

0x7494,	// (0x0001510a) cl_header_name_pane_t1

0x74b5,	// (0x0001512b) cl_header_name_pane_t2_ParamLimits

0x74b5,	// (0x0001512b) cl_header_name_pane_t2

0x74f7,	// (0x0001516d) cl_header_name_pane_t3_ParamLimits

0x74f7,	// (0x0001516d) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0001d7ba) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0001d7ba) cl_header_name_pane_t

0x2b8d,	// (0x00010803) navi_pane_mv_g2_ParamLimits

0xcf75,	// (0x0001abeb) field_vitu2_entry_pane_g1_ParamLimits

0xcf81,	// (0x0001abf7) field_vitu2_entry_pane_g2_ParamLimits

0xcf8d,	// (0x0001ac03) field_vitu2_entry_pane_g3_ParamLimits

0xcf8d,	// (0x0001ac03) field_vitu2_entry_pane_g3

0xf93a,	// (0x0001d5b0) field_vitu2_entry_pane_g_ParamLimits

0x6299,	// (0x00013f0f) cell_vitu2_itu_pane_g1_ParamLimits

0x62a9,	// (0x00013f1f) cell_vitu2_itu_pane_g2_ParamLimits

0x62a9,	// (0x00013f1f) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0001d5bc) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0001d5bc) cell_vitu2_itu_pane_g

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp05_ParamLimits

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp05

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp03

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp04

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp10_ParamLimits

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp10

0x709f,	// (0x00014d15) bg_vkb2_func_pane_cp08

0x7085,	// (0x00014cfb) bg_vkb2_func_pane_cp06

0x7093,	// (0x00014d09) bg_vkb2_func_pane_cp07

0xd700,	// (0x0001b376) bg_vkb2_func_pane_cp11_ParamLimits

0xd700,	// (0x0001b376) bg_vkb2_func_pane_cp11

0xd715,	// (0x0001b38b) bg_vkb2_func_pane_cp12_ParamLimits

0xd715,	// (0x0001b38b) bg_vkb2_func_pane_cp12

0x9362,	// (0x00016fd8) bg_vkb2_func_pane_cp09

0xcfca,	// (0x0001ac40) bg_vkb2_func_pane_g1

0xa0f2,	// (0x00017d68) bg_vkb2_func_pane_g2

0xcfd2,	// (0x0001ac48) bg_vkb2_func_pane_g3

0xcfda,	// (0x0001ac50) bg_vkb2_func_pane_g4

0xd265,	// (0x0001aedb) bg_vkb2_func_pane_g5

0xcff2,	// (0x0001ac68) bg_vkb2_func_pane_g6

0xcffa,	// (0x0001ac70) bg_vkb2_func_pane_g7

0xcfea,	// (0x0001ac60) bg_vkb2_func_pane_g8

0xa0d2,	// (0x00017d48) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0001d7c1) bg_vkb2_func_pane_g

0x73ba,	// (0x00015030) blid2_tripm_pane_g6_ParamLimits

0x73ba,	// (0x00015030) blid2_tripm_pane_g6

0xcd3a,	// (0x0001a9b0) mp4_progress_pane_g1

0x7433,	// (0x000150a9) blid2_tripm_values_pane_ParamLimits

0x7433,	// (0x000150a9) blid2_tripm_values_pane

0x7528,	// (0x0001519e) blid2_tripm_values_pane_t1

0x7536,	// (0x000151ac) blid2_tripm_values_pane_t2

0x7544,	// (0x000151ba) blid2_tripm_values_pane_t3

0x7552,	// (0x000151c8) blid2_tripm_values_pane_t4

0x7560,	// (0x000151d6) blid2_tripm_values_pane_t5

0x756e,	// (0x000151e4) blid2_tripm_values_pane_t6

0x757c,	// (0x000151f2) blid2_tripm_values_pane_t7

0x758a,	// (0x00015200) blid2_tripm_values_pane_t8

0x7598,	// (0x0001520e) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0001d7d4) blid2_tripm_values_pane_t

0x1a06,	// (0x0000f67c) call_video_pane_t1_ParamLimits

0x1a20,	// (0x0000f696) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001cf08) call_video_pane_t_ParamLimits

0x3105,	// (0x00010d7b) msg_header_pane_g1_ParamLimits

0xaa15,	// (0x0001868b) msg_header_pane_g2_ParamLimits

0xaa15,	// (0x0001868b) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001d122) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001d122) msg_header_pane_g

0x9b3c,	// (0x000177b2) main_clock2_pane_ParamLimits

0x5226,	// (0x00012e9c) grid_clock2_toolbar_pane_ParamLimits

0x5226,	// (0x00012e9c) grid_clock2_toolbar_pane

0x5226,	// (0x00012e9c) listscroll_clock2_pane_ParamLimits

0x5226,	// (0x00012e9c) listscroll_clock2_pane

0x530f,	// (0x00012f85) main_clock2_pane_t3_ParamLimits

0x530f,	// (0x00012f85) main_clock2_pane_t3

0x532a,	// (0x00012fa0) main_clock2_pane_t4_ParamLimits

0x532a,	// (0x00012fa0) main_clock2_pane_t4

0xd7f9,	// (0x0001b46f) cell_clock2_toolbar_pane

0xd801,	// (0x0001b477) cell_clock2_toolbar_pane_cp01

0xd801,	// (0x0001b477) cell_clock2_toolbar_pane_cp02

0xd809,	// (0x0001b47f) cell_clock2_toolbar_pane_cp03

0xd811,	// (0x0001b487) list_clock2_pane

0xa73e,	// (0x000183b4) scroll_pane_cp10

0xd819,	// (0x0001b48f) list_single_clock2_pane_ParamLimits

0xd819,	// (0x0001b48f) list_single_clock2_pane

0xa878,	// (0x000184ee) list_highlight_pane_cp08

0xd826,	// (0x0001b49c) list_single_clock2_pane_t1

0xd834,	// (0x0001b4aa) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0001d7e7) list_single_clock2_pane_t

0x9362,	// (0x00016fd8) bg_button_pane_cp10

0xd842,	// (0x0001b4b8) cell_clock2_toolbar_pane_g1

0x318e,	// (0x00010e04) aid_main_viewer_pane_g1_ParamLimits

0x318e,	// (0x00010e04) aid_main_viewer_pane_g1

0x319c,	// (0x00010e12) aid_main_viewer_pane_g2_ParamLimits

0x319c,	// (0x00010e12) aid_main_viewer_pane_g2

0x31aa,	// (0x00010e20) aid_main_viewer_pane_g3_ParamLimits

0x31aa,	// (0x00010e20) aid_main_viewer_pane_g3

0x31b9,	// (0x00010e2f) aid_main_viewer_pane_g4_ParamLimits

0x31b9,	// (0x00010e2f) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001d133) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001d133) aid_main_viewer_pane_g

0x3b11,	// (0x00011787) main_calc_pane_ParamLimits

0x3b25,	// (0x0001179b) main_dialer2_pane_ParamLimits

0x9362,	// (0x00016fd8) main_cam6_pane

0x9362,	// (0x00016fd8) main_vid6_pane

0x5232,	// (0x00012ea8) listscroll_gen_pane_cp06_ParamLimits

0x5232,	// (0x00012ea8) listscroll_gen_pane_cp06

0x5345,	// (0x00012fbb) main_clock2_pane_t5_ParamLimits

0x5345,	// (0x00012fbb) main_clock2_pane_t5

0x53a2,	// (0x00013018) aid_call2_pane_cp10_ParamLimits

0x53b4,	// (0x0001302a) aid_call_pane_cp10_ParamLimits

0xa7ad,	// (0x00018423) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa7ad,	// (0x00018423) popup_clock_analogue_window_cp10_g2_ParamLimits

0x53c6,	// (0x0001303c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x53c6,	// (0x0001303c) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa7ad,	// (0x00018423) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0001d469) popup_clock_analogue_window_cp10_g_ParamLimits

0x53dc,	// (0x00013052) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5a83,	// (0x000136f9) cell_dialer2_keypad_pane_g2_ParamLimits

0x5a83,	// (0x000136f9) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0001d54f) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0001d54f) cell_dialer2_keypad_pane_g

0x5a9f,	// (0x00013715) cell_dialer2_keypad_pane_t1

0x6724,	// (0x0001439a) main_cset_text2_pane_ParamLimits

0x6724,	// (0x0001439a) main_cset_text2_pane

0xd4d2,	// (0x0001b148) area_vitu2_query_pane_g1_ParamLimits

0x7024,	// (0x00014c9a) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0001d704) area_vitu2_query_pane_g_ParamLimits

0xd556,	// (0x0001b1cc) area_vitu2_query_pane_t7_ParamLimits

0xd556,	// (0x0001b1cc) area_vitu2_query_pane_t7

0x7085,	// (0x00014cfb) bg_button_pane_cp018_ParamLimits

0x7093,	// (0x00014d09) bg_button_pane_cp021_ParamLimits

0x709f,	// (0x00014d15) bg_button_pane_cp022_ParamLimits

0x709f,	// (0x00014d15) bg_vkb2_func_pane_cp08_ParamLimits

0x7085,	// (0x00014cfb) bg_vkb2_func_pane_cp06_ParamLimits

0x7093,	// (0x00014d09) bg_vkb2_func_pane_cp07_ParamLimits

0x70b0,	// (0x00014d26) input_focus_pane_cp09_ParamLimits

0xd84a,	// (0x0001b4c0) cam6_autofocus_pane_ParamLimits

0xd84a,	// (0x0001b4c0) cam6_autofocus_pane

0x75a6,	// (0x0001521c) cam6_image_uncrop_pane_ParamLimits

0x75a6,	// (0x0001521c) cam6_image_uncrop_pane

0x75b5,	// (0x0001522b) cam6_indi_pane_ParamLimits

0x75b5,	// (0x0001522b) cam6_indi_pane

0x75cb,	// (0x00015241) cam6_mode_pane_ParamLimits

0x75cb,	// (0x00015241) cam6_mode_pane

0x75dd,	// (0x00015253) cam6_timer_pane_ParamLimits

0x75dd,	// (0x00015253) cam6_timer_pane

0x75e9,	// (0x0001525f) cam6_zoom_pane_ParamLimits

0x75e9,	// (0x0001525f) cam6_zoom_pane

0x75f7,	// (0x0001526d) cam6_mode_pane_g1_ParamLimits

0x75f7,	// (0x0001526d) cam6_mode_pane_g1

0x7607,	// (0x0001527d) cam6_mode_pane_g2_ParamLimits

0x7607,	// (0x0001527d) cam6_mode_pane_g2

0x7617,	// (0x0001528d) cam6_mode_pane_g3_ParamLimits

0x7617,	// (0x0001528d) cam6_mode_pane_g3

0x7627,	// (0x0001529d) cam6_mode_pane_g4_ParamLimits

0x7627,	// (0x0001529d) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0001d7ec) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0001d7ec) cam6_mode_pane_g

0xd858,	// (0x0001b4ce) bg_tb_trans_pane_cp08_ParamLimits

0xd858,	// (0x0001b4ce) bg_tb_trans_pane_cp08

0xd866,	// (0x0001b4dc) cam6_battery_pane_ParamLimits

0xd866,	// (0x0001b4dc) cam6_battery_pane

0xd87c,	// (0x0001b4f2) cam6_indi_pane_g1_ParamLimits

0xd87c,	// (0x0001b4f2) cam6_indi_pane_g1

0xd88e,	// (0x0001b504) cam6_indi_pane_g2_ParamLimits

0xd88e,	// (0x0001b504) cam6_indi_pane_g2

0xd8a0,	// (0x0001b516) cam6_indi_pane_g3_ParamLimits

0xd8a0,	// (0x0001b516) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0001d7f5) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0001d7f5) cam6_indi_pane_g

0xd8b2,	// (0x0001b528) cam6_indi_pane_t1_ParamLimits

0xd8b2,	// (0x0001b528) cam6_indi_pane_t1

0x604e,	// (0x00013cc4) cam6_autofocus_pane_g1

0x6056,	// (0x00013ccc) cam6_autofocus_pane_g2

0x605e,	// (0x00013cd4) cam6_autofocus_pane_g3

0x6066,	// (0x00013cdc) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0001d7fc) cam6_autofocus_pane_g

0xd8d8,	// (0x0001b54e) cam6_timer_pane_g1

0xd8e0,	// (0x0001b556) cam6_timer_pane_t1

0xd8ee,	// (0x0001b564) cam6_zoom_cont_pane

0xd8f6,	// (0x0001b56c) cam6_zoom_pane_g1

0xd8fe,	// (0x0001b574) cam6_zoom_pane_g2

0x7637,	// (0x000152ad) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0001d805) cam6_zoom_pane_g

0xc21a,	// (0x00019e90) cam6_battery_pane_g1

0xc21a,	// (0x00019e90) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0001d376) cam6_battery_pane_g

0xd906,	// (0x0001b57c) cam6_zoom_cont_pane_g1

0xd90f,	// (0x0001b585) cam6_zoom_cont_pane_g2

0xd918,	// (0x0001b58e) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0001d80c) cam6_zoom_cont_pane_g

0x7654,	// (0x000152ca) cam6_mode_pane_cp_ParamLimits

0x7654,	// (0x000152ca) cam6_mode_pane_cp

0x75e9,	// (0x0001525f) cam6_zoom_pane_cp_ParamLimits

0x75e9,	// (0x0001525f) cam6_zoom_pane_cp

0x7666,	// (0x000152dc) vid6_image_uncrop_cif_pane_ParamLimits

0x7666,	// (0x000152dc) vid6_image_uncrop_cif_pane

0x7676,	// (0x000152ec) vid6_image_uncrop_nhd_pane_ParamLimits

0x7676,	// (0x000152ec) vid6_image_uncrop_nhd_pane

0x75a6,	// (0x0001521c) vid6_image_uncrop_vga_pane_ParamLimits

0x75a6,	// (0x0001521c) vid6_image_uncrop_vga_pane

0x7685,	// (0x000152fb) vid6_image_uncrop_wvga_pane_ParamLimits

0x7685,	// (0x000152fb) vid6_image_uncrop_wvga_pane

0x7694,	// (0x0001530a) vid6_indi_pane_ParamLimits

0x7694,	// (0x0001530a) vid6_indi_pane

0xd858,	// (0x0001b4ce) bg_tb_trans_pane_cp09_ParamLimits

0xd858,	// (0x0001b4ce) bg_tb_trans_pane_cp09

0xd930,	// (0x0001b5a6) cam6_battery_pane_cp_ParamLimits

0xd930,	// (0x0001b5a6) cam6_battery_pane_cp

0xd93c,	// (0x0001b5b2) vid6_indi_pane_g1_ParamLimits

0xd93c,	// (0x0001b5b2) vid6_indi_pane_g1

0xd94e,	// (0x0001b5c4) vid6_indi_pane_g2_ParamLimits

0xd94e,	// (0x0001b5c4) vid6_indi_pane_g2

0xd960,	// (0x0001b5d6) vid6_indi_pane_g3_ParamLimits

0xd960,	// (0x0001b5d6) vid6_indi_pane_g3

0xd977,	// (0x0001b5ed) vid6_indi_pane_g4_ParamLimits

0xd977,	// (0x0001b5ed) vid6_indi_pane_g4

0xd98e,	// (0x0001b604) vid6_indi_pane_g5_ParamLimits

0xd98e,	// (0x0001b604) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0001d813) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0001d813) vid6_indi_pane_g

0xd9a8,	// (0x0001b61e) vid6_indi_pane_t1_ParamLimits

0xd9a8,	// (0x0001b61e) vid6_indi_pane_t1

0xd9be,	// (0x0001b634) vid6_indi_pane_t2_ParamLimits

0xd9be,	// (0x0001b634) vid6_indi_pane_t2

0xd9e6,	// (0x0001b65c) vid6_indi_pane_t3_ParamLimits

0xd9e6,	// (0x0001b65c) vid6_indi_pane_t3

0xda0e,	// (0x0001b684) vid6_indi_pane_t4_ParamLimits

0xda0e,	// (0x0001b684) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0001d81e) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0001d81e) vid6_indi_pane_t

0xda32,	// (0x0001b6a8) wait_bar_pane_cp08

0x76ac,	// (0x00015322) main_cset_text2_pane_t1_ParamLimits

0x76ac,	// (0x00015322) main_cset_text2_pane_t1

0x763f,	// (0x000152b5) listscroll_gen_pane_cp06_t1_ParamLimits

0x763f,	// (0x000152b5) listscroll_gen_pane_cp06_t1

0x9362,	// (0x00016fd8) main_cam6_set_pane

0xc44a,	// (0x0001a0c0) bg_tb_trans_pane_cp06_ParamLimits

0xcf01,	// (0x0001ab77) cam4_indicators_pane_g1_ParamLimits

0xcf0e,	// (0x0001ab84) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0001d58c) cam4_indicators_pane_g_ParamLimits

0xcf2e,	// (0x0001aba4) cam4_indicators_pane_t1_ParamLimits

0xcb27,	// (0x0001a79d) bg_tb_trans_pane_cp07_ParamLimits

0x5ffd,	// (0x00013c73) vid4_indicators_pane_g1_ParamLimits

0x600a,	// (0x00013c80) vid4_indicators_pane_g2_ParamLimits

0x6017,	// (0x00013c8d) vid4_indicators_pane_g3_ParamLimits

0x6024,	// (0x00013c9a) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0001d59e) vid4_indicators_pane_g_ParamLimits

0x603c,	// (0x00013cb2) vid4_indicators_pane_t1_ParamLimits

0xd5d3,	// (0x0001b249) vid4_progress_pane_g1_ParamLimits

0xd5df,	// (0x0001b255) vid4_progress_pane_g2_ParamLimits

0xd5eb,	// (0x0001b261) vid4_progress_pane_g3_ParamLimits

0xd5fa,	// (0x0001b270) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0001d74f) vid4_progress_pane_g_ParamLimits

0xd618,	// (0x0001b28e) vid4_progress_pane_t1_ParamLimits

0xd62e,	// (0x0001b2a4) vid4_progress_pane_t2_ParamLimits

0xd644,	// (0x0001b2ba) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0001d75a) vid4_progress_pane_t_ParamLimits

0xd659,	// (0x0001b2cf) wait_bar_pane_cp07_ParamLimits

0x76cd,	// (0x00015343) main_cam6_set_pane_g2_ParamLimits

0x76cd,	// (0x00015343) main_cam6_set_pane_g2

0x76f3,	// (0x00015369) main_cset6_listscroll_pane_ParamLimits

0x76f3,	// (0x00015369) main_cset6_listscroll_pane

0x7711,	// (0x00015387) main_cset6_slider_pane_ParamLimits

0x7711,	// (0x00015387) main_cset6_slider_pane

0x7727,	// (0x0001539d) main_cset6_text2_pane_ParamLimits

0x7727,	// (0x0001539d) main_cset6_text2_pane

0xda41,	// (0x0001b6b7) main_cset6_text_pane

0xda49,	// (0x0001b6bf) main_cset_list_pane_copy1_ParamLimits

0xda49,	// (0x0001b6bf) main_cset_list_pane_copy1

0xda59,	// (0x0001b6cf) scroll_pane_cp028_copy1

0x7735,	// (0x000153ab) cset_list_set_pane_copy1

0x7749,	// (0x000153bf) aid_position_infowindow_above_copy1

0x7751,	// (0x000153c7) aid_position_infowindow_below_copy1

0x7759,	// (0x000153cf) cset_list_set_pane_g1_copy1

0xda62,	// (0x0001b6d8) cset_list_set_pane_g3_copy1_ParamLimits

0xda62,	// (0x0001b6d8) cset_list_set_pane_g3_copy1

0xda71,	// (0x0001b6e7) cset_list_set_pane_t1_copy1_ParamLimits

0xda71,	// (0x0001b6e7) cset_list_set_pane_t1_copy1

0x93d3,	// (0x00017049) list_highlight_pane_cp021_copy1_ParamLimits

0x93d3,	// (0x00017049) list_highlight_pane_cp021_copy1

0xda86,	// (0x0001b6fc) cset6_slider_pane_ParamLimits

0xda86,	// (0x0001b6fc) cset6_slider_pane

0xdab2,	// (0x0001b728) main_cset6_slider_pane_g1_ParamLimits

0xdab2,	// (0x0001b728) main_cset6_slider_pane_g1

0x7761,	// (0x000153d7) main_cset6_slider_pane_g2_ParamLimits

0x7761,	// (0x000153d7) main_cset6_slider_pane_g2

0xdada,	// (0x0001b750) main_cset6_slider_pane_g3_ParamLimits

0xdada,	// (0x0001b750) main_cset6_slider_pane_g3

0x7789,	// (0x000153ff) main_cset6_slider_pane_g4_ParamLimits

0x7789,	// (0x000153ff) main_cset6_slider_pane_g4

0x7795,	// (0x0001540b) main_cset6_slider_pane_g5_ParamLimits

0x7795,	// (0x0001540b) main_cset6_slider_pane_g5

0xd0fd,	// (0x0001ad73) main_cset6_slider_pane_g7_ParamLimits

0xd0fd,	// (0x0001ad73) main_cset6_slider_pane_g7

0xd109,	// (0x0001ad7f) main_cset6_slider_pane_g8_ParamLimits

0xd109,	// (0x0001ad7f) main_cset6_slider_pane_g8

0x67d3,	// (0x00014449) main_cset6_slider_pane_g9_ParamLimits

0x67d3,	// (0x00014449) main_cset6_slider_pane_g9

0x67df,	// (0x00014455) main_cset6_slider_pane_g10_ParamLimits

0x67df,	// (0x00014455) main_cset6_slider_pane_g10

0x67eb,	// (0x00014461) main_cset6_slider_pane_g11_ParamLimits

0x67eb,	// (0x00014461) main_cset6_slider_pane_g11

0x67f7,	// (0x0001446d) main_cset6_slider_pane_g12_ParamLimits

0x67f7,	// (0x0001446d) main_cset6_slider_pane_g12

0x6803,	// (0x00014479) main_cset6_slider_pane_g13_ParamLimits

0x6803,	// (0x00014479) main_cset6_slider_pane_g13

0x680f,	// (0x00014485) main_cset6_slider_pane_g14_ParamLimits

0x680f,	// (0x00014485) main_cset6_slider_pane_g14

0x77a3,	// (0x00015419) main_cset6_slider_pane_g15_ParamLimits

0x77a3,	// (0x00015419) main_cset6_slider_pane_g15

0x6833,	// (0x000144a9) main_cset6_slider_pane_g16_ParamLimits

0x6833,	// (0x000144a9) main_cset6_slider_pane_g16

0x6841,	// (0x000144b7) main_cset6_slider_pane_g17_ParamLimits

0x6841,	// (0x000144b7) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0001d827) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0001d827) main_cset6_slider_pane_g

0xdae6,	// (0x0001b75c) main_cset6_slider_pane_t1_ParamLimits

0xdae6,	// (0x0001b75c) main_cset6_slider_pane_t1

0x77d3,	// (0x00015449) main_cset6_slider_pane_t2_ParamLimits

0x77d3,	// (0x00015449) main_cset6_slider_pane_t2

0x77fe,	// (0x00015474) main_cset6_slider_pane_t3_ParamLimits

0x77fe,	// (0x00015474) main_cset6_slider_pane_t3

0x7829,	// (0x0001549f) main_cset6_slider_pane_t4_ParamLimits

0x7829,	// (0x0001549f) main_cset6_slider_pane_t4

0x7856,	// (0x000154cc) main_cset6_slider_pane_t5_ParamLimits

0x7856,	// (0x000154cc) main_cset6_slider_pane_t5

0xdb27,	// (0x0001b79d) main_cset6_slider_pane_t7_ParamLimits

0xdb27,	// (0x0001b79d) main_cset6_slider_pane_t7

0x7883,	// (0x000154f9) main_cset6_slider_pane_t8_ParamLimits

0x7883,	// (0x000154f9) main_cset6_slider_pane_t8

0x78a7,	// (0x0001551d) main_cset6_slider_pane_t9_ParamLimits

0x78a7,	// (0x0001551d) main_cset6_slider_pane_t9

0x78cb,	// (0x00015541) main_cset6_slider_pane_t10_ParamLimits

0x78cb,	// (0x00015541) main_cset6_slider_pane_t10

0x78ef,	// (0x00015565) main_cset6_slider_pane_t11_ParamLimits

0x78ef,	// (0x00015565) main_cset6_slider_pane_t11

0xdb5d,	// (0x0001b7d3) main_cset6_slider_pane_t14_ParamLimits

0xdb5d,	// (0x0001b7d3) main_cset6_slider_pane_t14

0xdb96,	// (0x0001b80c) main_cset6_slider_pane_t15_ParamLimits

0xdb96,	// (0x0001b80c) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0001d84c) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0001d84c) main_cset6_slider_pane_t

0xd1ed,	// (0x0001ae63) cset_slider_pane_g1_copy1

0xd1f6,	// (0x0001ae6c) cset_slider_pane_g2_copy1

0xd1ff,	// (0x0001ae75) cset_slider_pane_g3_copy1

0x9362,	// (0x00016fd8) bg_popup_sub_pane_cp011_copy1

0xd2e6,	// (0x0001af5c) main_cset_text_pane_g1_copy1

0xd2ee,	// (0x0001af64) main_cset_text_pane_t1_copy1

0xd2fc,	// (0x0001af72) main_cset_text_pane_t2_copy1

0xd30a,	// (0x0001af80) main_cset_text_pane_t3_copy1

0xd318,	// (0x0001af8e) main_cset_text_pane_t4_copy1

0xd326,	// (0x0001af9c) main_cset_text_pane_t5_copy1

0xd334,	// (0x0001afaa) main_cset_text_pane_t6_copy1

0xd342,	// (0x0001afb8) main_cset_text_pane_t7_copy1

0x76ac,	// (0x00015322) main_cset_text2_pane_t1_copy1

0x9362,	// (0x00016fd8) main_ncimui_pane

0x3db3,	// (0x00011a29) popup_query_ncimui_window_ParamLimits

0x3db3,	// (0x00011a29) popup_query_ncimui_window

0xc4eb,	// (0x0001a161) field_cale_ev2_pane_g4_ParamLimits

0xc4eb,	// (0x0001a161) field_cale_ev2_pane_g4

0x594e,	// (0x000135c4) cell_video_dialer_keypad_pane_g2_ParamLimits

0x594e,	// (0x000135c4) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0001d52a) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0001d52a) cell_video_dialer_keypad_pane_g

0x5966,	// (0x000135dc) cell_video_dialer_keypad_pane_t1

0x9362,	// (0x00016fd8) bg_popup_window_pane_cp012

0xa62a,	// (0x000182a0) heading_pane_cp06

0xdcbe,	// (0x0001b934) ncim_query_content_pane

0x9362,	// (0x00016fd8) bg_popup_heading_pane_cp01

0xdcc6,	// (0x0001b93c) ncim_heading_pane_t1

0xdcd4,	// (0x0001b94a) ncim_indicator_popup_pane

0xdce6,	// (0x0001b95c) ncim_query_button_pane

0xdcfc,	// (0x0001b972) ncim_query_content_pane_t1

0xdd0e,	// (0x0001b984) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0001d88b) ncim_query_content_pane_t

0xdd48,	// (0x0001b9be) ncim_query_list_pane

0xdd5a,	// (0x0001b9d0) ncim_query_popup_pane

0xdcd4,	// (0x0001b94a) ncim_indicator_popup_pane_ParamLimits

0x7a0e,	// (0x00015684) ncim_query_content_pane_g1_ParamLimits

0x7a0e,	// (0x00015684) ncim_query_content_pane_g1

0xdcfc,	// (0x0001b972) ncim_query_content_pane_t1_ParamLimits

0xdd0e,	// (0x0001b984) ncim_query_content_pane_t2_ParamLimits

0x7a1a,	// (0x00015690) ncim_query_content_pane_t3_ParamLimits

0x7a1a,	// (0x00015690) ncim_query_content_pane_t3

0x7a42,	// (0x000156b8) ncim_query_content_pane_t4_ParamLimits

0x7a42,	// (0x000156b8) ncim_query_content_pane_t4

0x7a6a,	// (0x000156e0) ncim_query_content_pane_t5_ParamLimits

0x7a6a,	// (0x000156e0) ncim_query_content_pane_t5

0xdd20,	// (0x0001b996) ncim_query_content_pane_t6_ParamLimits

0xdd20,	// (0x0001b996) ncim_query_content_pane_t6

0xfc15,	// (0x0001d88b) ncim_query_content_pane_t_ParamLimits

0xdd48,	// (0x0001b9be) ncim_query_list_pane_ParamLimits

0xdd5a,	// (0x0001b9d0) ncim_query_popup_pane_ParamLimits

0xdd6e,	// (0x0001b9e4) wait_bar_pane_cp04

0x9362,	// (0x00016fd8) input_focus_pane_cp011

0xdd76,	// (0x0001b9ec) ncim_query_popup_pane_t1

0xdd84,	// (0x0001b9fa) ncim_list_query_list_pane_ParamLimits

0xdd84,	// (0x0001b9fa) ncim_list_query_list_pane

0x9362,	// (0x00016fd8) bg_button_pane_cp027

0xdd97,	// (0x0001ba0d) ncim_query_button_pane_g1

0x9362,	// (0x00016fd8) list_highlight_pane_cp012

0xdda1,	// (0x0001ba17) ncim_list_query_list_pane_g1

0xdda9,	// (0x0001ba1f) ncim_list_query_list_pane_t1

0xcf1e,	// (0x0001ab94) cam4_indicators_pane_g3_ParamLimits

0xcf1e,	// (0x0001ab94) cam4_indicators_pane_g3

0x6030,	// (0x00013ca6) vid4_indicators_pane_g5_ParamLimits

0x6030,	// (0x00013ca6) vid4_indicators_pane_g5

0xd609,	// (0x0001b27f) vid4_progress_pane_g5_ParamLimits

0xd609,	// (0x0001b27f) vid4_progress_pane_g5

0x7927,	// (0x0001559d) main_ncimui_pane_g1

0x797d,	// (0x000155f3) ncimui_group_query_pane_ParamLimits

0x797d,	// (0x000155f3) ncimui_group_query_pane

0x79b9,	// (0x0001562f) ncimui_list_pane_ParamLimits

0x79b9,	// (0x0001562f) ncimui_list_pane

0x79da,	// (0x00015650) ncimui_text_pane_ParamLimits

0x79da,	// (0x00015650) ncimui_text_pane

0x7a92,	// (0x00015708) ncimui_text_pane_t1_ParamLimits

0x7a92,	// (0x00015708) ncimui_text_pane_t1

0xddb7,	// (0x0001ba2d) ncimui_list_single_graphic_pane_ParamLimits

0xddb7,	// (0x0001ba2d) ncimui_list_single_graphic_pane

0x7ab0,	// (0x00015726) ncimui_query_pane_ParamLimits

0x7ab0,	// (0x00015726) ncimui_query_pane

0x9362,	// (0x00016fd8) list_highlight_pane_cp013

0xddc7,	// (0x0001ba3d) ncim_list_query_list_pane_t1_copy1

0xdda1,	// (0x0001ba17) ncim_list_single_graphic_pane_g1

0xddd5,	// (0x0001ba4b) ncim_query_button_pane_cp01

0xdde1,	// (0x0001ba57) ncim_query_entry_pane_ParamLimits

0xdde1,	// (0x0001ba57) ncim_query_entry_pane

0xddf4,	// (0x0001ba6a) ncimui_query_pane_g1

0xde00,	// (0x0001ba76) ncimui_query_pane_t1_ParamLimits

0xde00,	// (0x0001ba76) ncimui_query_pane_t1

0x93d3,	// (0x00017049) input_focus_pane_cp012

0xde19,	// (0x0001ba8f) ncim_query_entry_pane_t1

0x9b3c,	// (0x000177b2) main_im_pane_ParamLimits

0x93d3,	// (0x00017049) main_mobtv_pane_ParamLimits

0x93d3,	// (0x00017049) main_mobtv_pane

0x77bb,	// (0x00015431) main_cset6_slider_pane_g18_ParamLimits

0x77bb,	// (0x00015431) main_cset6_slider_pane_g18

0x77c7,	// (0x0001543d) main_cset6_slider_pane_g19_ParamLimits

0x77c7,	// (0x0001543d) main_cset6_slider_pane_g19

0xde2b,	// (0x0001baa1) bg_main_mobtv_pane_ParamLimits

0xde2b,	// (0x0001baa1) bg_main_mobtv_pane

0x7ac3,	// (0x00015739) main_mobtv_info_pane

0x7ace,	// (0x00015744) main_mobtv_loading_pane_ParamLimits

0x7ace,	// (0x00015744) main_mobtv_loading_pane

0xde39,	// (0x0001baaf) main_mobtv_pg_channel_list_pane

0xde43,	// (0x0001bab9) main_mobtv_pg_hdr_pane

0x7adb,	// (0x00015751) main_mobtv_programe_curr_pane_ParamLimits

0x7adb,	// (0x00015751) main_mobtv_programe_curr_pane

0x7ae8,	// (0x0001575e) main_mobtv_programe_next_pane_ParamLimits

0x7ae8,	// (0x0001575e) main_mobtv_programe_next_pane

0xde4c,	// (0x0001bac2) popup_mobtv_noti_window

0xc21a,	// (0x00019e90) main_tv_pg_hdr_pane_g1

0xde56,	// (0x0001bacc) main_tv_pg_hdr_pane_g2

0xde5e,	// (0x0001bad4) main_tv_pg_hdr_pane_g3

0xde66,	// (0x0001badc) main_tv_pg_hdr_pane_g4

0xde6e,	// (0x0001bae4) main_tv_pg_hdr_pane_g5

0xde78,	// (0x0001baee) main_tv_pg_hdr_pane_g6

0xde82,	// (0x0001baf8) main_tv_pg_hdr_pane_g7

0xde8c,	// (0x0001bb02) main_tv_pg_hdr_pane_g8

0xde96,	// (0x0001bb0c) main_tv_pg_hdr_pane_g9

0xdea0,	// (0x0001bb16) main_tv_pg_hdr_pane_g10

0xdeaa,	// (0x0001bb20) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0001d898) main_tv_pg_hdr_pane_g

0xdeb4,	// (0x0001bb2a) main_tv_pg_hdr_pane_t1

0xdec2,	// (0x0001bb38) main_tv_pg_hdr_pane_t2

0xded0,	// (0x0001bb46) main_tv_pg_hdr_pane_t3

0xdee0,	// (0x0001bb56) main_tv_pg_hdr_pane_t4

0xdef0,	// (0x0001bb66) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0001d8af) main_tv_pg_hdr_pane_t

0xdf00,	// (0x0001bb76) single_mobtv_pg_channel_pane_ParamLimits

0xdf00,	// (0x0001bb76) single_mobtv_pg_channel_pane

0xdf12,	// (0x0001bb88) single_mobtv_pg_channel_table_pane

0xdf1b,	// (0x0001bb91) single_mobtv_pg_channel_thumb_pane

0xdf24,	// (0x0001bb9a) single_tv_pg_channel_pane_g1

0xdf2d,	// (0x0001bba3) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0001d8ba) single_tv_pg_channel_pane_g

0xc44a,	// (0x0001a0c0) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc44a,	// (0x0001a0c0) bg_single_mobtv_pg_channel_thumb_pane

0xdf36,	// (0x0001bbac) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdf36,	// (0x0001bbac) single_mobtv_pg_channel_thumb_pane_g1

0xdf44,	// (0x0001bbba) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf44,	// (0x0001bbba) single_mobtv_pg_channel_thumb_pane_g2

0xdf50,	// (0x0001bbc6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf50,	// (0x0001bbc6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0001d8bf) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0001d8bf) single_mobtv_pg_channel_thumb_pane_g

0xdf5c,	// (0x0001bbd2) single_mobtv_pg_channel_thumb_pane_t1

0xdf6a,	// (0x0001bbe0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0001d8c6) single_mobtv_pg_channel_thumb_pane_t

0xc21a,	// (0x00019e90) bg_single_mobtv_pg_channel_table_pane_g1

0xc21a,	// (0x00019e90) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0001d376) bg_single_mobtv_pg_channel_table_pane_g

0xdf78,	// (0x0001bbee) single_mobtv_pg_channel_table_pane_t1

0xdf86,	// (0x0001bbfc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0001d8cb) single_mobtv_pg_channel_table_pane_t

0x7afd,	// (0x00015773) main_mobtv_info_pane_g1_ParamLimits

0x7afd,	// (0x00015773) main_mobtv_info_pane_g1

0x7b1b,	// (0x00015791) main_mobtv_info_pane_t1_ParamLimits

0x7b1b,	// (0x00015791) main_mobtv_info_pane_t1

0x7b93,	// (0x00015809) main_mobtv_info_pane_t2_ParamLimits

0x7b93,	// (0x00015809) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0001d8d5) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0001d8d5) main_mobtv_info_pane_t

0x7c24,	// (0x0001589a) wait_bar_pane_cp05

0x7c36,	// (0x000158ac) main_mobtv_loading_pane_g1_ParamLimits

0x7c36,	// (0x000158ac) main_mobtv_loading_pane_g1

0x7c47,	// (0x000158bd) main_mobtv_loading_pane_g2_ParamLimits

0x7c47,	// (0x000158bd) main_mobtv_loading_pane_g2

0x7c53,	// (0x000158c9) main_mobtv_loading_pane_g3_ParamLimits

0x7c53,	// (0x000158c9) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0001d8dc) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0001d8dc) main_mobtv_loading_pane_g

0xdf94,	// (0x0001bc0a) main_mobtv_loading_pane_t1_ParamLimits

0xdf94,	// (0x0001bc0a) main_mobtv_loading_pane_t1

0xdfac,	// (0x0001bc22) main_mobtv_loading_pane_t2_ParamLimits

0xdfac,	// (0x0001bc22) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0001d8e3) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0001d8e3) main_mobtv_loading_pane_t

0x7c66,	// (0x000158dc) wait_bar_pane_cp06_ParamLimits

0x7c66,	// (0x000158dc) wait_bar_pane_cp06

0xdfd0,	// (0x0001bc46) main_mobtv_programe_curr_pane_t1

0xdfde,	// (0x0001bc54) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0001d8e8) main_mobtv_programe_curr_pane_t

0xdfec,	// (0x0001bc62) main_mobtv_programe_next_pane_t1

0xdffa,	// (0x0001bc70) main_mobtv_programe_next_pane_t2

0xe008,	// (0x0001bc7e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0001d8ed) main_mobtv_programe_next_pane_t

0x9362,	// (0x00016fd8) bg_popup_mobtv_noti_window_pane

0xe016,	// (0x0001bc8c) popup_mobtv_noti_window_g1

0xe01e,	// (0x0001bc94) popup_mobtv_noti_window_t1

0xe02c,	// (0x0001bca2) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0001d8f4) popup_mobtv_noti_window_t

0xc21a,	// (0x00019e90) bg_popup_mobtv_noti_window_pane_g1

0x9362,	// (0x00016fd8) sc_clock_pane

0x9362,	// (0x00016fd8) main_fs_bigclock_pane

0x741d,	// (0x00015093) blid2_tripm_pane_t4_ParamLimits

0x741d,	// (0x00015093) blid2_tripm_pane_t4

0x7c75,	// (0x000158eb) sc_clock_pane_g1_ParamLimits

0x7c75,	// (0x000158eb) sc_clock_pane_g1

0x7c87,	// (0x000158fd) sc_clock_pane_t1_ParamLimits

0x7c87,	// (0x000158fd) sc_clock_pane_t1

0x7cab,	// (0x00015921) sc_clock_pane_t2_ParamLimits

0x7cab,	// (0x00015921) sc_clock_pane_t2

0x7cc3,	// (0x00015939) sc_clock_pane_t3_ParamLimits

0x7cc3,	// (0x00015939) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0001d8f9) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0001d8f9) sc_clock_pane_t

0x8a97,	// (0x0001670d) main_fs_bigclock_indicator_pane_ParamLimits

0x8a97,	// (0x0001670d) main_fs_bigclock_indicator_pane

0xc41a,	// (0x0001a090) main_fs_bigclock_pane_g1_ParamLimits

0xc41a,	// (0x0001a090) main_fs_bigclock_pane_g1

0x8aa3,	// (0x00016719) main_fs_bigclock_pane_t1_ParamLimits

0x8aa3,	// (0x00016719) main_fs_bigclock_pane_t1

0x8ab5,	// (0x0001672b) main_fs_bigclock_pane_t2_ParamLimits

0x8ab5,	// (0x0001672b) main_fs_bigclock_pane_t2

0x8ac9,	// (0x0001673f) main_fs_bigclock_pane_t3_ParamLimits

0x8ac9,	// (0x0001673f) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001daf3) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001daf3) main_fs_bigclock_pane_t

0xec8a,	// (0x0001c900) main_fs_bigclock_indicator_pane_g1

0xdcee,	// (0x0001b964) ncim_query_content_pane_g2_ParamLimits

0xdcee,	// (0x0001b964) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0001d886) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0001d886) ncim_query_content_pane_g

0x7cd8,	// (0x0001594e) sc_clock_pane_t4_ParamLimits

0x7cd8,	// (0x0001594e) sc_clock_pane_t4

0x93d3,	// (0x00017049) main_radioblah_pane

0xce5f,	// (0x0001aad5) cell_call4_button_pane_t1_copy1_ParamLimits

0xce5f,	// (0x0001aad5) cell_call4_button_pane_t1_copy1

0x792f,	// (0x000155a5) main_ncimui_pane_t1_ParamLimits

0x792f,	// (0x000155a5) main_ncimui_pane_t1

0x7949,	// (0x000155bf) main_ncimui_pane_t2_ParamLimits

0x7949,	// (0x000155bf) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0001d87f) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0001d87f) main_ncimui_pane_t

0xe164,	// (0x0001bdda) main_radioblah_anim_pane_ParamLimits

0xe164,	// (0x0001bdda) main_radioblah_anim_pane

0xe175,	// (0x0001bdeb) main_radioblah_info_pane_ParamLimits

0xe175,	// (0x0001bdeb) main_radioblah_info_pane

0xe189,	// (0x0001bdff) main_radioblah_pane_t1_ParamLimits

0xe189,	// (0x0001bdff) main_radioblah_pane_t1

0xe1a5,	// (0x0001be1b) main_radioblah_pane_t2_ParamLimits

0xe1a5,	// (0x0001be1b) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0001d91a) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0001d91a) main_radioblah_pane_t

0x7d86,	// (0x000159fc) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7d86,	// (0x000159fc) main_radioblah_rocker_ctrl_pane

0xe1ed,	// (0x0001be63) main_radioblah_info_pane_t1_ParamLimits

0xe1ed,	// (0x0001be63) main_radioblah_info_pane_t1

0x7dde,	// (0x00015a54) main_radioblah_info_pane_t2_ParamLimits

0x7dde,	// (0x00015a54) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0001d923) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0001d923) main_radioblah_info_pane_t

0xc21a,	// (0x00019e90) main_radioblah_rocker_ctrl_pane_g1

0x7e8e,	// (0x00015b04) main_radioblah_rocker_ctrl_pane_g2

0x7e96,	// (0x00015b0c) main_radioblah_rocker_ctrl_pane_g3

0x7e9e,	// (0x00015b14) main_radioblah_rocker_ctrl_pane_g4

0x7ea6,	// (0x00015b1c) main_radioblah_rocker_ctrl_pane_g5

0x7eae,	// (0x00015b24) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0001d92c) main_radioblah_rocker_ctrl_pane_g

0x76ac,	// (0x00015322) main_cset_text2_pane_t1_copy1_ParamLimits

0xceef,	// (0x0001ab65) cam4_image_uncrop_qvga_pane

0xcf48,	// (0x0001abbe) vid4_image_uncrop_qcif_pane

0xd84a,	// (0x0001b4c0) cam6_image_uncrop_qvga_pane_ParamLimits

0xd84a,	// (0x0001b4c0) cam6_image_uncrop_qvga_pane

0xd920,	// (0x0001b596) vid6_image_uncrop_qcif_pane_ParamLimits

0xd920,	// (0x0001b596) vid6_image_uncrop_qcif_pane

0x9362,	// (0x00016fd8) bg_popup_preview_window_pane_cp03

0xdca0,	// (0x0001b916) list_cset_text2_pane

0xdca8,	// (0x0001b91e) main_cset6_text2_pane_g1

0xdcb0,	// (0x0001b926) main_cset6_text2_pane_t1

0xed39,	// (0x0001c9af) list_cset_text2_pane_t1_ParamLimits

0xed39,	// (0x0001c9af) list_cset_text2_pane_t1

0x93d3,	// (0x00017049) main_radioblah_pane_ParamLimits

0x7c10,	// (0x00015886) main_mobtv_info_pane_t3_ParamLimits

0x7c10,	// (0x00015886) main_mobtv_info_pane_t3

0x7d74,	// (0x000159ea) main_radioblah_pane_g1

0x7dae,	// (0x00015a24) main_radioblah_info_pane_g1

0x7e33,	// (0x00015aa9) main_radioblah_info_pane_t3_ParamLimits

0x7e33,	// (0x00015aa9) main_radioblah_info_pane_t3

0x25bd,	// (0x00010233) highlight_cell_cale_month_pane_ParamLimits

0x25bd,	// (0x00010233) highlight_cell_cale_month_pane

0x9362,	// (0x00016fd8) main_phob_fisheye_pane

0xc5a0,	// (0x0001a216) scroll_pane_cp0031_ParamLimits

0xc5a0,	// (0x0001a216) scroll_pane_cp0031

0xda32,	// (0x0001b6a8) wait_bar_pane_cp08_ParamLimits

0x7735,	// (0x000153ab) cset_list_set_pane_copy1_ParamLimits

0xe227,	// (0x0001be9d) highlight_cell_cale_month_pane_g1

0x7eb6,	// (0x00015b2c) highlight_cell_cale_month_pane_t1

0xd5c2,	// (0x0001b238) list_gen_pane_cp01

0xd0e8,	// (0x0001ad5e) scroll_pane_01

0x7ec4,	// (0x00015b3a) list_single_double_fisheye_pane

0xe22f,	// (0x0001bea5) list_double_fisheye_pane_g1_ParamLimits

0xe22f,	// (0x0001bea5) list_double_fisheye_pane_g1

0xe23b,	// (0x0001beb1) list_double_fisheye_pane_g2_ParamLimits

0xe23b,	// (0x0001beb1) list_double_fisheye_pane_g2

0x7ecd,	// (0x00015b43) list_double_fisheye_pane_g3_ParamLimits

0x7ecd,	// (0x00015b43) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0001d939) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0001d939) list_double_fisheye_pane_g

0x7ed9,	// (0x00015b4f) list_double_fisheye_pane_t1_ParamLimits

0x7ed9,	// (0x00015b4f) list_double_fisheye_pane_t1

0x7ef4,	// (0x00015b6a) list_double_fisheye_pane_t2_ParamLimits

0x7ef4,	// (0x00015b6a) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0001d944) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0001d944) list_double_fisheye_pane_t

0x9362,	// (0x00016fd8) main_call5_pane

0x7d03,	// (0x00015979) sc_swipe_pane_ParamLimits

0x7d03,	// (0x00015979) sc_swipe_pane

0x7f29,	// (0x00015b9f) call5_image_pane_ParamLimits

0x7f29,	// (0x00015b9f) call5_image_pane

0x7f46,	// (0x00015bbc) call5_swipe_1_pane_ParamLimits

0x7f46,	// (0x00015bbc) call5_swipe_1_pane

0x7f59,	// (0x00015bcf) call5_swipe_2_pane_ParamLimits

0x7f59,	// (0x00015bcf) call5_swipe_2_pane

0x7f86,	// (0x00015bfc) popup_call5_audio_first_window_ParamLimits

0x7f86,	// (0x00015bfc) popup_call5_audio_first_window

0xc44a,	// (0x0001a0c0) call5_swipe_1_pane_g1_ParamLimits

0xc44a,	// (0x0001a0c0) call5_swipe_1_pane_g1

0xe26c,	// (0x0001bee2) call5_swipe_1_pane_g2_ParamLimits

0xe26c,	// (0x0001bee2) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0001d949) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0001d949) call5_swipe_1_pane_g

0xe278,	// (0x0001beee) call5_swipe_1_pane_t1_ParamLimits

0xe278,	// (0x0001beee) call5_swipe_1_pane_t1

0xc44a,	// (0x0001a0c0) call5_swipe_2_pane_g1_ParamLimits

0xc44a,	// (0x0001a0c0) call5_swipe_2_pane_g1

0xe28d,	// (0x0001bf03) call5_swipe_2_pane_g2_ParamLimits

0xe28d,	// (0x0001bf03) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0001d94e) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0001d94e) call5_swipe_2_pane_g

0xe299,	// (0x0001bf0f) call5_swipe_2_pane_t1_ParamLimits

0xe299,	// (0x0001bf0f) call5_swipe_2_pane_t1

0xe2ae,	// (0x0001bf24) sc_swipe_pane_g1_ParamLimits

0xe2ae,	// (0x0001bf24) sc_swipe_pane_g1

0xe2bb,	// (0x0001bf31) sc_swipe_pane_g2_ParamLimits

0xe2bb,	// (0x0001bf31) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0001d953) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0001d953) sc_swipe_pane_g

0xe2c7,	// (0x0001bf3d) sc_swipe_pane_t1_ParamLimits

0xe2c7,	// (0x0001bf3d) sc_swipe_pane_t1

0x9362,	// (0x00016fd8) main_cmail_launcher_pane

0x7f9b,	// (0x00015c11) aid_size_cell_cmail_l_ParamLimits

0x7f9b,	// (0x00015c11) aid_size_cell_cmail_l

0x7fb5,	// (0x00015c2b) grid_cmail_l_pane_ParamLimits

0x7fb5,	// (0x00015c2b) grid_cmail_l_pane

0x7fd1,	// (0x00015c47) cell_cmail_l_pane_ParamLimits

0x7fd1,	// (0x00015c47) cell_cmail_l_pane

0x7ff9,	// (0x00015c6f) cell_cmail_l_pane_g1_ParamLimits

0x7ff9,	// (0x00015c6f) cell_cmail_l_pane_g1

0x8005,	// (0x00015c7b) cell_cmail_l_pane_t1_ParamLimits

0x8005,	// (0x00015c7b) cell_cmail_l_pane_t1

0xe2dc,	// (0x0001bf52) cell_cmail_l_pane_t2_ParamLimits

0xe2dc,	// (0x0001bf52) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0001d958) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0001d958) cell_cmail_l_pane_t

0x93d3,	// (0x00017049) grid_highlight_pane_cp018_ParamLimits

0x93d3,	// (0x00017049) grid_highlight_pane_cp018

0x0bb7,	// (0x0000e82d) main2_pane_ParamLimits

0x0bb7,	// (0x0000e82d) main2_pane

0x9c15,	// (0x0001788b) popup_sp_fs_action_menu_bg_pane_g1

0x9c1d,	// (0x00017893) popup_sp_fs_action_menu_bg_pane_g2

0x9c25,	// (0x0001789b) popup_sp_fs_action_menu_bg_pane_g3

0x9c2d,	// (0x000178a3) popup_sp_fs_action_menu_bg_pane_g4

0x9c35,	// (0x000178ab) popup_sp_fs_action_menu_bg_pane_g5

0x9c3d,	// (0x000178b3) popup_sp_fs_action_menu_bg_pane_g6

0x9c45,	// (0x000178bb) popup_sp_fs_action_menu_bg_pane_g7

0x9c4d,	// (0x000178c3) popup_sp_fs_action_menu_bg_pane_g8

0x9c55,	// (0x000178cb) popup_sp_fs_action_menu_bg_pane_g9

0x9c5d,	// (0x000178d3) popup_sp_fs_action_menu_bg_pane_g10

0x9c5d,	// (0x000178d3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001ce22) popup_sp_fs_action_menu_bg_pane_g

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t3_g3_g1

0x9e47,	// (0x00017abd) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x2_t3_g3_g2

0x9e53,	// (0x00017ac9) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001ced2) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001ced2) list_medium_line_x2_t3_g3_g

0x9e5f,	// (0x00017ad5) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9e5f,	// (0x00017ad5) list_medium_line_x2_t3_g3_t1

0x1907,	// (0x0000f57d) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1907,	// (0x0000f57d) list_medium_line_x2_t3_g3_t2

0x9e74,	// (0x00017aea) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001ced9) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001ced9) list_medium_line_x2_t3_g3_t

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t3_g2_g1

0x9e53,	// (0x00017ac9) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001cee0) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001cee0) list_medium_line_x2_t3_g2_g

0x9e89,	// (0x00017aff) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9e89,	// (0x00017aff) list_medium_line_x2_t3_g2_t1

0x9e9f,	// (0x00017b15) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9e9f,	// (0x00017b15) list_medium_line_x2_t3_g2_t2

0x9eb1,	// (0x00017b27) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9eb1,	// (0x00017b27) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001cee5) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001cee5) list_medium_line_x2_t3_g2_t

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t4_g4_g1

0x9ecf,	// (0x00017b45) list_medium_line_x2_t4_g4_g2_ParamLimits

0x9ecf,	// (0x00017b45) list_medium_line_x2_t4_g4_g2

0x9e47,	// (0x00017abd) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x2_t4_g4_g3

0x9edb,	// (0x00017b51) list_medium_line_x2_t4_g4_g4_ParamLimits

0x9edb,	// (0x00017b51) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001ceec) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001ceec) list_medium_line_x2_t4_g4_g

0x191b,	// (0x0000f591) list_medium_line_x2_t4_g4_t1_ParamLimits

0x191b,	// (0x0000f591) list_medium_line_x2_t4_g4_t1

0x1932,	// (0x0000f5a8) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1932,	// (0x0000f5a8) list_medium_line_x2_t4_g4_t2

0x1947,	// (0x0000f5bd) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1947,	// (0x0000f5bd) list_medium_line_x2_t4_g4_t3

0x9ee7,	// (0x00017b5d) list_medium_line_x2_t4_g4_t4_ParamLimits

0x9ee7,	// (0x00017b5d) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001cef5) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001cef5) list_medium_line_x2_t4_g4_t

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t2_g4_g1

0x9ecf,	// (0x00017b45) list_medium_line_x2_t2_g4_g2_ParamLimits

0x9ecf,	// (0x00017b45) list_medium_line_x2_t2_g4_g2

0x9e47,	// (0x00017abd) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x2_t2_g4_g3

0x9e53,	// (0x00017ac9) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001cf5c) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001cf5c) list_medium_line_x2_t2_g4_g

0xa1d3,	// (0x00017e49) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa1d3,	// (0x00017e49) list_medium_line_x2_t2_g4_t1

0x9e74,	// (0x00017aea) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001cf65) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001cf65) list_medium_line_x2_t2_g4_t

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t2_g3_g1

0x9e47,	// (0x00017abd) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x2_t2_g3_g2

0x9e53,	// (0x00017ac9) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001ced2) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001ced2) list_medium_line_x2_t2_g3_g

0xa1e8,	// (0x00017e5e) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa1e8,	// (0x00017e5e) list_medium_line_x2_t2_g3_t1

0x9e74,	// (0x00017aea) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001cf6a) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001cf6a) list_medium_line_x2_t2_g3_t

0x2796,	// (0x0001040c) main_sp_fs_list_pane_ParamLimits

0x2796,	// (0x0001040c) main_sp_fs_list_pane

0x27a2,	// (0x00010418) sp_fs_scroll_pane_ParamLimits

0x27a2,	// (0x00010418) sp_fs_scroll_pane

0x27ae,	// (0x00010424) list_medium_line_x2_t3_t1

0x27be,	// (0x00010434) list_medium_line_x2_t3_t2

0xa3cd,	// (0x00018043) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001cfb5) list_medium_line_x2_t3_t

0x27cc,	// (0x00010442) list_medium_line_x3_t4_t1

0x27dc,	// (0x00010452) list_medium_line_x3_t4_t2

0xa3db,	// (0x00018051) list_medium_line_x3_t4_t3

0xa3cd,	// (0x00018043) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001cfbc) list_medium_line_x3_t4_t

0x27ea,	// (0x00010460) list_medium_line_x4_t5_t1

0x27fa,	// (0x00010470) list_medium_line_x4_t5_t2

0xa3db,	// (0x00018051) list_medium_line_x4_t5_t3

0xa3e9,	// (0x0001805f) list_medium_line_x4_t5_t4

0xa3cd,	// (0x00018043) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001cfc5) list_medium_line_x4_t5_t

0x9e3b,	// (0x00017ab1) list_medium_line_t4_g4_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_t4_g4_g1

0x9edb,	// (0x00017b51) list_medium_line_t4_g4_g2_ParamLimits

0x9edb,	// (0x00017b51) list_medium_line_t4_g4_g2

0xa3f7,	// (0x0001806d) list_medium_line_t4_g4_g3_ParamLimits

0xa3f7,	// (0x0001806d) list_medium_line_t4_g4_g3

0x9e53,	// (0x00017ac9) list_medium_line_t4_g4_g4_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001cfd0) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001cfd0) list_medium_line_t4_g4_g

0xa403,	// (0x00018079) list_medium_line_t4_g4_t1_ParamLimits

0xa403,	// (0x00018079) list_medium_line_t4_g4_t1

0xa418,	// (0x0001808e) list_medium_line_t4_g4_t2_ParamLimits

0xa418,	// (0x0001808e) list_medium_line_t4_g4_t2

0xa42e,	// (0x000180a4) list_medium_line_t4_g4_t3_ParamLimits

0xa42e,	// (0x000180a4) list_medium_line_t4_g4_t3

0x9e74,	// (0x00017aea) list_medium_line_t4_g4_t4_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001cfd9) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001cfd9) list_medium_line_t4_g4_t

0x28ce,	// (0x00010544) chi_dic_find_pane_g1

0x3b39,	// (0x000117af) main_tport_pane

0xd23b,	// (0x0001aeb1) list_medium_line_plain_t1

0xd28d,	// (0x0001af03) list_medium_line_t2_g2_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_t2_g2_g1

0xd299,	// (0x0001af0f) list_medium_line_t2_g2_g2_ParamLimits

0xd299,	// (0x0001af0f) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0001d695) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0001d695) list_medium_line_t2_g2_g

0x6bb7,	// (0x0001482d) list_medium_line_t2_g2_t1_ParamLimits

0x6bb7,	// (0x0001482d) list_medium_line_t2_g2_t1

0x6bce,	// (0x00014844) list_medium_line_t2_g2_t2_ParamLimits

0x6bce,	// (0x00014844) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0001d69a) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0001d69a) list_medium_line_t2_g2_t

0xd66b,	// (0x0001b2e1) aid_sp_fs_list_icon_a_sm

0xd673,	// (0x0001b2e9) aid_sp_fs_list_icon_d

0xd67b,	// (0x0001b2f1) aid_sp_fs_text_primary

0xd684,	// (0x0001b2fa) aid_sp_fs_text_secondary

0xd68d,	// (0x0001b303) list_medium_line

0xd68d,	// (0x0001b303) list_medium_line_g2

0xd68d,	// (0x0001b303) list_medium_line_g3

0xd68d,	// (0x0001b303) list_medium_line_plain

0xd68d,	// (0x0001b303) list_medium_line_plain_t2

0xd68d,	// (0x0001b303) list_medium_line_plain_t3

0xd68d,	// (0x0001b303) list_medium_line_right_icon

0xd68d,	// (0x0001b303) list_medium_line_right_iconx2

0xd68d,	// (0x0001b303) list_medium_line_t2

0xd68d,	// (0x0001b303) list_medium_line_t2_g2

0xd68d,	// (0x0001b303) list_medium_line_t2_g3

0xd68d,	// (0x0001b303) list_medium_line_t2_right_icon

0xd68d,	// (0x0001b303) list_medium_line_t2_right_iconx2

0xd68d,	// (0x0001b303) list_medium_line_t3

0xd68d,	// (0x0001b303) list_medium_line_t3_g2

0xd68d,	// (0x0001b303) list_medium_line_t3_g3

0xd68d,	// (0x0001b303) list_medium_line_t3_right_iconx2

0xd696,	// (0x0001b30c) list_medium_line_t4_g4

0xd69f,	// (0x0001b315) list_medium_line_x2

0xd69f,	// (0x0001b315) list_medium_line_x2_t2_g2

0xd69f,	// (0x0001b315) list_medium_line_x2_t2_g3

0xd69f,	// (0x0001b315) list_medium_line_x2_t2_g4

0xd69f,	// (0x0001b315) list_medium_line_x2_t3

0xd69f,	// (0x0001b315) list_medium_line_x2_t3_g2

0xd69f,	// (0x0001b315) list_medium_line_x2_t3_g3

0xd69f,	// (0x0001b315) list_medium_line_x2_t3_g4

0xd69f,	// (0x0001b315) list_medium_line_x2_t4_g2

0xd69f,	// (0x0001b315) list_medium_line_x2_t4_g4

0xd6a8,	// (0x0001b31e) list_medium_line_x3

0xd6a8,	// (0x0001b31e) list_medium_line_x3_t4

0xd6a8,	// (0x0001b31e) list_medium_line_x3_t4_g4

0xd696,	// (0x0001b30c) list_medium_line_x4_t4

0xd696,	// (0x0001b30c) list_medium_line_x4_t4_g7

0xd696,	// (0x0001b30c) list_medium_line_x4_t5

0xd6b1,	// (0x0001b327) list_single_fs_dyc_pane_ParamLimits

0xd6b1,	// (0x0001b327) list_single_fs_dyc_pane

0x9e3b,	// (0x00017ab1) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x4_t4_g7_g1

0xdbcf,	// (0x0001b845) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdbcf,	// (0x0001b845) list_medium_line_x4_t4_g7_g2

0xdbdb,	// (0x0001b851) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdbdb,	// (0x0001b851) list_medium_line_x4_t4_g7_g3

0xdbea,	// (0x0001b860) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdbea,	// (0x0001b860) list_medium_line_x4_t4_g7_g4

0xdbf6,	// (0x0001b86c) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdbf6,	// (0x0001b86c) list_medium_line_x4_t4_g7_g5

0xdc05,	// (0x0001b87b) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdc05,	// (0x0001b87b) list_medium_line_x4_t4_g7_g6

0xdc14,	// (0x0001b88a) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdc14,	// (0x0001b88a) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0001d865) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0001d865) list_medium_line_x4_t4_g7_g

0xdc20,	// (0x0001b896) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdc20,	// (0x0001b896) list_medium_line_x4_t4_g7_t1

0xdc35,	// (0x0001b8ab) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdc35,	// (0x0001b8ab) list_medium_line_x4_t4_g7_t2

0xdc4a,	// (0x0001b8c0) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdc4a,	// (0x0001b8c0) list_medium_line_x4_t4_g7_t3

0xdc5f,	// (0x0001b8d5) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdc5f,	// (0x0001b8d5) list_medium_line_x4_t4_g7_t4

0xdc71,	// (0x0001b8e7) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdc71,	// (0x0001b8e7) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0001d874) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0001d874) list_medium_line_x4_t4_g7_t

0xdc83,	// (0x0001b8f9) list_single_dyc_row_pane_ParamLimits

0xdc83,	// (0x0001b8f9) list_single_dyc_row_pane

0x7f16,	// (0x00015b8c) call5_gesture_pane_ParamLimits

0x7f16,	// (0x00015b8c) call5_gesture_pane

0x7f6c,	// (0x00015be2) call5_windows_pane_ParamLimits

0x7f6c,	// (0x00015be2) call5_windows_pane

0x801b,	// (0x00015c91) call5_swipe_1_pane_cp_ParamLimits

0x801b,	// (0x00015c91) call5_swipe_1_pane_cp

0x8027,	// (0x00015c9d) call5_swipe_2_pane_cp_ParamLimits

0x8027,	// (0x00015c9d) call5_swipe_2_pane_cp

0xa878,	// (0x000184ee) call5_image_pane_cp

0x8033,	// (0x00015ca9) popup_call5_audio_first_window_cp_ParamLimits

0x8033,	// (0x00015ca9) popup_call5_audio_first_window_cp

0xe2ae,	// (0x0001bf24) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2ae,	// (0x0001bf24) call5_swipe_1_pane_g1_cp

0xe2ee,	// (0x0001bf64) call5_swipe_1_pane_g2_cp

0xe2c7,	// (0x0001bf3d) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2c7,	// (0x0001bf3d) call5_swipe_1_pane_t1_cp

0xe2ae,	// (0x0001bf24) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2ae,	// (0x0001bf24) call5_swipe_2_pane_g1_cp

0xe2f6,	// (0x0001bf6c) call5_swipe_2_pane_g2_cp

0xe2fe,	// (0x0001bf74) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2fe,	// (0x0001bf74) call5_swipe_2_pane_t1_cp

0x93d3,	// (0x00017049) main_sp_fs_email_pane

0xe313,	// (0x0001bf89) main_sp_fs_listscroll_pane_te

0xe31c,	// (0x0001bf92) popup_sp_fs_action_menu_pane_ParamLimits

0xe31c,	// (0x0001bf92) popup_sp_fs_action_menu_pane

0xc21a,	// (0x00019e90) bg_sp_fs_ctrlbar_pane_g1

0xe362,	// (0x0001bfd8) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe36b,	// (0x0001bfe1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe374,	// (0x0001bfea) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc21a,	// (0x00019e90) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0001d95d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xbff9,	// (0x00019c6f) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xbff9,	// (0x00019c6f) bg_sp_fs_ctrlbar_ddmenu_pane

0xe37d,	// (0x0001bff3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe37d,	// (0x0001bff3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe389,	// (0x0001bfff) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe389,	// (0x0001bfff) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0001d966) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0001d966) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe395,	// (0x0001c00b) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe395,	// (0x0001c00b) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3af,	// (0x0001c025) list_medium_line_t2_right_icon_g1

0x8041,	// (0x00015cb7) list_medium_line_t2_right_icon_t1

0x8051,	// (0x00015cc7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0001d96b) list_medium_line_t2_right_icon_t

0xbce5,	// (0x0001995b) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbce5,	// (0x0001995b) bg_sp_fs_ctrlbar_pane

0x80ab,	// (0x00015d21) main_sp_fs_ctrlbar_button_pane_cp01

0x80b5,	// (0x00015d2b) main_sp_fs_ctrlbar_ddmenu_pane

0xe3f1,	// (0x0001c067) main_sp_fs_ctrlbar_pane_g1

0xe3fd,	// (0x0001c073) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0001d970) main_sp_fs_ctrlbar_pane_g

0xe409,	// (0x0001c07f) main_sp_fs_ctrlbar_pane_t1

0x80bf,	// (0x00015d35) main_sp_fs_ctrlbar_pane

0x80e3,	// (0x00015d59) main_sp_fs_listscroll_pane_te_cp01

0x8103,	// (0x00015d79) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8103,	// (0x00015d79) popup_sp_fs_action_menu_pane_cp01

0x93d3,	// (0x00017049) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x93d3,	// (0x00017049) bg_sp_fs_highlight_list_pane_cp01

0xe41e,	// (0x0001c094) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe41e,	// (0x0001c094) sp_fs_action_menu_list_gene_pane_g1

0xe42d,	// (0x0001c0a3) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe42d,	// (0x0001c0a3) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d975) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d975) sp_fs_action_menu_list_gene_pane_g

0xe43a,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe43a,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_t1

0xe452,	// (0x0001c0c8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe452,	// (0x0001c0c8) sp_fs_action_menu_list_gene_pane

0xe475,	// (0x0001c0eb) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe475,	// (0x0001c0eb) popup_sp_fs_action_menu_bg_pane

0xe483,	// (0x0001c0f9) sp_fs_action_menu_list_pane_ParamLimits

0xe483,	// (0x0001c0f9) sp_fs_action_menu_list_pane

0xe4a7,	// (0x0001c11d) sp_fs_scroll_pane_cp01_ParamLimits

0xe4a7,	// (0x0001c11d) sp_fs_scroll_pane_cp01

0x811f,	// (0x00015d95) list_medium_line_plain_t2_t1

0x812f,	// (0x00015da5) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d97a) list_medium_line_plain_t2_t

0x813f,	// (0x00015db5) list_medium_line_plain_t3_t1

0x814f,	// (0x00015dc5) list_medium_line_plain_t3_t2

0x815d,	// (0x00015dd3) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d97f) list_medium_line_plain_t3_t

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t2_g2_g1

0x9e53,	// (0x00017ac9) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001cee0) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001cee0) list_medium_line_x2_t2_g2_g

0xa403,	// (0x00018079) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa403,	// (0x00018079) list_medium_line_x2_t2_g2_t1

0x9e74,	// (0x00017aea) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d986) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d986) list_medium_line_x2_t2_g2_t

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t4_g2_g1

0x9e53,	// (0x00017ac9) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001cee0) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001cee0) list_medium_line_x2_t4_g2_g

0x816b,	// (0x00015de1) list_medium_line_x2_t4_g2_t1_ParamLimits

0x816b,	// (0x00015de1) list_medium_line_x2_t4_g2_t1

0x8185,	// (0x00015dfb) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8185,	// (0x00015dfb) list_medium_line_x2_t4_g2_t2

0x819b,	// (0x00015e11) list_medium_line_x2_t4_g2_t3_ParamLimits

0x819b,	// (0x00015e11) list_medium_line_x2_t4_g2_t3

0x9e74,	// (0x00017aea) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d98b) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d98b) list_medium_line_x2_t4_g2_t

0xe4cd,	// (0x0001c143) list_medium_line_t3_right_iconx2_g1

0xe3af,	// (0x0001c025) list_medium_line_t3_right_iconx2_g2

0x81b0,	// (0x00015e26) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d994) list_medium_line_t3_right_iconx2_g

0x81ba,	// (0x00015e30) list_medium_line_t3_right_iconx2_t1

0x81ca,	// (0x00015e40) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d99b) list_medium_line_t3_right_iconx2_t

0x9e3b,	// (0x00017ab1) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x3_t4_g4_g1

0x9e47,	// (0x00017abd) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x3_t4_g4_g2

0x9edb,	// (0x00017b51) list_medium_line_x3_t4_g4_g3_ParamLimits

0x9edb,	// (0x00017b51) list_medium_line_x3_t4_g4_g3

0xe4d5,	// (0x0001c14b) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4d5,	// (0x0001c14b) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d9a0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d9a0) list_medium_line_x3_t4_g4_g

0x81d8,	// (0x00015e4e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x81d8,	// (0x00015e4e) list_medium_line_x3_t4_g4_t1

0x81ef,	// (0x00015e65) list_medium_line_x3_t4_g4_t2_ParamLimits

0x81ef,	// (0x00015e65) list_medium_line_x3_t4_g4_t2

0xe4e1,	// (0x0001c157) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe4e1,	// (0x0001c157) list_medium_line_x3_t4_g4_t3

0xe4f6,	// (0x0001c16c) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe4f6,	// (0x0001c16c) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d9a9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d9a9) list_medium_line_x3_t4_g4_t

0x820a,	// (0x00015e80) list_single_dyc_row_text_pane_t1_ParamLimits

0x820a,	// (0x00015e80) list_single_dyc_row_text_pane_t1

0x8253,	// (0x00015ec9) list_single_dyc_row_text_pane_t2_ParamLimits

0x8253,	// (0x00015ec9) list_single_dyc_row_text_pane_t2

0xe513,	// (0x0001c189) list_single_dyc_row_text_pane_t3_ParamLimits

0xe513,	// (0x0001c189) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d9b2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d9b2) list_single_dyc_row_text_pane_t

0xe525,	// (0x0001c19b) list_single_dyc_row_pane_g1_ParamLimits

0xe525,	// (0x0001c19b) list_single_dyc_row_pane_g1

0xe531,	// (0x0001c1a7) list_single_dyc_row_pane_g2_ParamLimits

0xe531,	// (0x0001c1a7) list_single_dyc_row_pane_g2

0xe53d,	// (0x0001c1b3) list_single_dyc_row_pane_g3_ParamLimits

0xe53d,	// (0x0001c1b3) list_single_dyc_row_pane_g3

0xe549,	// (0x0001c1bf) list_single_dyc_row_pane_g4_ParamLimits

0xe549,	// (0x0001c1bf) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d9b9) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d9b9) list_single_dyc_row_pane_g

0xe555,	// (0x0001c1cb) list_single_dyc_row_text_pane_ParamLimits

0xe555,	// (0x0001c1cb) list_single_dyc_row_text_pane

0x9362,	// (0x00016fd8) bg_sp_fs_scroll_pane

0xe574,	// (0x0001c1ea) thumb_sp_fs_scroll_pane

0xd28d,	// (0x0001af03) list_medium_line_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_g1

0xe57d,	// (0x0001c1f3) list_medium_line_t1_ParamLimits

0xe57d,	// (0x0001c1f3) list_medium_line_t1

0x9e3b,	// (0x00017ab1) list_medium_line_x2_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_g1

0x9e47,	// (0x00017abd) list_medium_line_x2_g2_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d9c2) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d9c2) list_medium_line_x2_g

0xe592,	// (0x0001c208) list_medium_line_x2_t1_ParamLimits

0xe592,	// (0x0001c208) list_medium_line_x2_t1

0x9e3b,	// (0x00017ab1) list_medium_line_x3_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x3_g1

0x9e47,	// (0x00017abd) list_medium_line_x3_g2_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d9c2) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d9c2) list_medium_line_x3_g

0xe592,	// (0x0001c208) list_medium_line_x3_t1_ParamLimits

0xe592,	// (0x0001c208) list_medium_line_x3_t1

0xe5a8,	// (0x0001c21e) thumb_sp_fs_scroll_pane_g1

0xe5b1,	// (0x0001c227) thumb_sp_fs_scroll_pane_g2

0xe5ba,	// (0x0001c230) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d9c7) thumb_sp_fs_scroll_pane_g

0xe5a8,	// (0x0001c21e) bg_sp_fs_scroll_pane_g1

0xe5b1,	// (0x0001c227) bg_sp_fs_scroll_pane_g2

0xe5ba,	// (0x0001c230) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d9c7) bg_sp_fs_scroll_pane_g

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9e3b,	// (0x00017ab1) list_medium_line_x2_t3_g4_g1

0x9ecf,	// (0x00017b45) list_medium_line_x2_t3_g4_g2_ParamLimits

0x9ecf,	// (0x00017b45) list_medium_line_x2_t3_g4_g2

0x9e47,	// (0x00017abd) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9e47,	// (0x00017abd) list_medium_line_x2_t3_g4_g3

0x9e53,	// (0x00017ac9) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9e53,	// (0x00017ac9) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001cf5c) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001cf5c) list_medium_line_x2_t3_g4_g

0x82ad,	// (0x00015f23) list_medium_line_x2_t3_g4_t1_ParamLimits

0x82ad,	// (0x00015f23) list_medium_line_x2_t3_g4_t1

0x82c3,	// (0x00015f39) list_medium_line_x2_t3_g4_t2_ParamLimits

0x82c3,	// (0x00015f39) list_medium_line_x2_t3_g4_t2

0x9e74,	// (0x00017aea) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9e74,	// (0x00017aea) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d9ce) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d9ce) list_medium_line_x2_t3_g4_t

0xd28d,	// (0x0001af03) list_medium_line_g2_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_g2_g1

0xd299,	// (0x0001af0f) list_medium_line_g2_g2_ParamLimits

0xd299,	// (0x0001af0f) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0001d695) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0001d695) list_medium_line_g2_g

0xe5c3,	// (0x0001c239) list_medium_line_g2_t1_ParamLimits

0xe5c3,	// (0x0001c239) list_medium_line_g2_t1

0xd28d,	// (0x0001af03) list_medium_line_t3_g2_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_t3_g2_g1

0xd299,	// (0x0001af0f) list_medium_line_t3_g2_g2_ParamLimits

0xd299,	// (0x0001af0f) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0001d695) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0001d695) list_medium_line_t3_g2_g

0x82dc,	// (0x00015f52) list_medium_line_t3_g2_t1_ParamLimits

0x82dc,	// (0x00015f52) list_medium_line_t3_g2_t1

0x82f6,	// (0x00015f6c) list_medium_line_t3_g2_t2_ParamLimits

0x82f6,	// (0x00015f6c) list_medium_line_t3_g2_t2

0x830c,	// (0x00015f82) list_medium_line_t3_g2_t3_ParamLimits

0x830c,	// (0x00015f82) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d9d5) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d9d5) list_medium_line_t3_g2_t

0xe3af,	// (0x0001c025) list_medium_line_right_icon_g1

0xe5d8,	// (0x0001c24e) list_medium_line_right_icon_t1

0xd28d,	// (0x0001af03) list_medium_line_t2_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_t2_g1

0x8323,	// (0x00015f99) list_medium_line_t2_t1_ParamLimits

0x8323,	// (0x00015f99) list_medium_line_t2_t1

0x833d,	// (0x00015fb3) list_medium_line_t2_t2_ParamLimits

0x833d,	// (0x00015fb3) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d9dc) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d9dc) list_medium_line_t2_t

0xd28d,	// (0x0001af03) list_medium_line_t3_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_t3_g1

0x8356,	// (0x00015fcc) list_medium_line_t3_t1_ParamLimits

0x8356,	// (0x00015fcc) list_medium_line_t3_t1

0x8370,	// (0x00015fe6) list_medium_line_t3_t2_ParamLimits

0x8370,	// (0x00015fe6) list_medium_line_t3_t2

0x8386,	// (0x00015ffc) list_medium_line_t3_t3_ParamLimits

0x8386,	// (0x00015ffc) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d9e1) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d9e1) list_medium_line_t3_t

0xd28d,	// (0x0001af03) list_medium_line_g3_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_g3_g1

0xe5e6,	// (0x0001c25c) list_medium_line_g3_g2_ParamLimits

0xe5e6,	// (0x0001c25c) list_medium_line_g3_g2

0xd299,	// (0x0001af0f) list_medium_line_g3_g3_ParamLimits

0xd299,	// (0x0001af0f) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d9e8) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d9e8) list_medium_line_g3_g

0xe5f2,	// (0x0001c268) list_medium_line_g3_t1_ParamLimits

0xe5f2,	// (0x0001c268) list_medium_line_g3_t1

0xd28d,	// (0x0001af03) list_medium_line_t2_g3_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_t2_g3_g1

0xe5e6,	// (0x0001c25c) list_medium_line_t2_g3_g2_ParamLimits

0xe5e6,	// (0x0001c25c) list_medium_line_t2_g3_g2

0xd299,	// (0x0001af0f) list_medium_line_t2_g3_g3_ParamLimits

0xd299,	// (0x0001af0f) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d9e8) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d9e8) list_medium_line_t2_g3_g

0x839b,	// (0x00016011) list_medium_line_t2_g3_t1_ParamLimits

0x839b,	// (0x00016011) list_medium_line_t2_g3_t1

0x83b2,	// (0x00016028) list_medium_line_t2_g3_t2_ParamLimits

0x83b2,	// (0x00016028) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d9ef) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d9ef) list_medium_line_t2_g3_t

0xd28d,	// (0x0001af03) list_medium_line_t3_g3_g1_ParamLimits

0xd28d,	// (0x0001af03) list_medium_line_t3_g3_g1

0xe5e6,	// (0x0001c25c) list_medium_line_t3_g3_g2_ParamLimits

0xe5e6,	// (0x0001c25c) list_medium_line_t3_g3_g2

0xd299,	// (0x0001af0f) list_medium_line_t3_g3_g3_ParamLimits

0xd299,	// (0x0001af0f) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d9e8) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d9e8) list_medium_line_t3_g3_g

0x83cb,	// (0x00016041) list_medium_line_t3_g3_t1_ParamLimits

0x83cb,	// (0x00016041) list_medium_line_t3_g3_t1

0x83e4,	// (0x0001605a) list_medium_line_t3_g3_t2_ParamLimits

0x83e4,	// (0x0001605a) list_medium_line_t3_g3_t2

0x83fa,	// (0x00016070) list_medium_line_t3_g3_t3_ParamLimits

0x83fa,	// (0x00016070) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001d9f4) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001d9f4) list_medium_line_t3_g3_t

0xe4cd,	// (0x0001c143) list_medium_line_right_iconx2_g1

0xe3af,	// (0x0001c025) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d9fb) list_medium_line_right_iconx2_g

0xe607,	// (0x0001c27d) list_medium_line_right_iconx2_t1

0xe4cd,	// (0x0001c143) list_medium_line_t2_right_iconx2_g1

0xe3af,	// (0x0001c025) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001d9fb) list_medium_line_t2_right_iconx2_g

0x8414,	// (0x0001608a) list_medium_line_t2_right_iconx2_t1

0x8424,	// (0x0001609a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001da00) list_medium_line_t2_right_iconx2_t

0xe615,	// (0x0001c28b) list_medium_line_x4_t4_t1

0x8436,	// (0x000160ac) list_medium_line_x4_t4_t2

0x8446,	// (0x000160bc) list_medium_line_x4_t4_t3

0x8456,	// (0x000160cc) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001da05) list_medium_line_x4_t4_t

0x84a0,	// (0x00016116) tport_appsw_pane_ParamLimits

0x84a0,	// (0x00016116) tport_appsw_pane

0x84b3,	// (0x00016129) tport_contact_pane_ParamLimits

0x84b3,	// (0x00016129) tport_contact_pane

0x84c6,	// (0x0001613c) tport_listscroll_pane_ParamLimits

0x84c6,	// (0x0001613c) tport_listscroll_pane

0x84dc,	// (0x00016152) cell_tport_appsw_pane_ParamLimits

0x84dc,	// (0x00016152) cell_tport_appsw_pane

0xcf8d,	// (0x0001ac03) tport_appsw_pane_g1_ParamLimits

0xcf8d,	// (0x0001ac03) tport_appsw_pane_g1

0xe623,	// (0x0001c299) tport_contact_pane_g1

0xe62c,	// (0x0001c2a2) tport_contact_pane_t1

0xe63a,	// (0x0001c2b0) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001da0e) tport_contact_pane_t

0xe648,	// (0x0001c2be) list_tport_pane

0xe651,	// (0x0001c2c7) scroll_pane_cp_030

0x8522,	// (0x00016198) cell_tport_appsw_pane_g1

0xe66a,	// (0x0001c2e0) cell_tport_appsw_pane_t1

0x9362,	// (0x00016fd8) grid_highlight_pane_cp019

0x8532,	// (0x000161a8) list_tport_double_graphic_pane_ParamLimits

0x8532,	// (0x000161a8) list_tport_double_graphic_pane

0x93d3,	// (0x00017049) list_highlight_pane_cp023_ParamLimits

0x93d3,	// (0x00017049) list_highlight_pane_cp023

0x8542,	// (0x000161b8) list_tport_double_graphic_pane_g1_ParamLimits

0x8542,	// (0x000161b8) list_tport_double_graphic_pane_g1

0x854f,	// (0x000161c5) list_tport_double_graphic_pane_t1_ParamLimits

0x854f,	// (0x000161c5) list_tport_double_graphic_pane_t1

0x8564,	// (0x000161da) list_tport_double_graphic_pane_t2_ParamLimits

0x8564,	// (0x000161da) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001da1a) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001da1a) list_tport_double_graphic_pane_t

0x9362,	// (0x00016fd8) main_cale_note_pane

0x6253,	// (0x00013ec9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6253,	// (0x00013ec9) cell_vitu2_function_top_wide_pane_cp01

0x7c24,	// (0x0001589a) wait_bar_pane_cp05_ParamLimits

0x9362,	// (0x00016fd8) listscroll_cmail_pane

0xe680,	// (0x0001c2f6) list_cmail_pane

0x8580,	// (0x000161f6) list_cmail_body_pane

0x8598,	// (0x0001620e) list_single_cmail_header_caption_pane

0x85b5,	// (0x0001622b) list_single_cmail_header_detail_pane_ParamLimits

0x85b5,	// (0x0001622b) list_single_cmail_header_detail_pane

0x85e7,	// (0x0001625d) list_single_cmail_header_caption_pane_t1

0x85f7,	// (0x0001626d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x85f7,	// (0x0001626d) list_single_cmail_header_detail_pane_g1

0xe6a0,	// (0x0001c316) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6a0,	// (0x0001c316) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001da1f) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001da1f) list_single_cmail_header_detail_pane_g

0xe6b9,	// (0x0001c32f) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6b9,	// (0x0001c32f) list_single_cmail_header_detail_pane_t1

0xe6f7,	// (0x0001c36d) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe6f7,	// (0x0001c36d) list_single_cmail_header_editor_pane_bg

0xdf2d,	// (0x0001bba3) list_cmail_body_pane_g1

0xe709,	// (0x0001c37f) list_cmail_body_pane_t1

0xcfca,	// (0x0001ac40) list_single_cmail_header_editor_pane_bg_g1

0xa0f2,	// (0x00017d68) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcfda,	// (0x0001ac50) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcfd2,	// (0x0001ac48) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd265,	// (0x0001aedb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcffa,	// (0x0001ac70) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcfea,	// (0x0001ac60) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcff2,	// (0x0001ac68) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa0d2,	// (0x00017d48) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8635,	// (0x000162ab) calenote_gesture_pane_ParamLimits

0x8635,	// (0x000162ab) calenote_gesture_pane

0x8655,	// (0x000162cb) calenote_window_pane_ParamLimits

0x8655,	// (0x000162cb) calenote_window_pane

0xe717,	// (0x0001c38d) popup_note_window_cp01

0x8671,	// (0x000162e7) calenote_swipe_1_pane_ParamLimits

0x8671,	// (0x000162e7) calenote_swipe_1_pane

0x8027,	// (0x00015c9d) calenote_swipe_2_pane_ParamLimits

0x8027,	// (0x00015c9d) calenote_swipe_2_pane

0xe2ae,	// (0x0001bf24) calenote_swipe_1_pane_g1_ParamLimits

0xe2ae,	// (0x0001bf24) calenote_swipe_1_pane_g1

0xe2bb,	// (0x0001bf31) calenote_swipe_1_pane_g2_ParamLimits

0xe2bb,	// (0x0001bf31) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0001d953) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0001d953) calenote_swipe_1_pane_g

0xe729,	// (0x0001c39f) calenote_swipe_1_pane_t1_ParamLimits

0xe729,	// (0x0001c39f) calenote_swipe_1_pane_t1

0xe2ae,	// (0x0001bf24) calenote_swipe_2_pane_g1_ParamLimits

0xe2ae,	// (0x0001bf24) calenote_swipe_2_pane_g1

0xe748,	// (0x0001c3be) calenote_swipe_2_pane_g2_ParamLimits

0xe748,	// (0x0001c3be) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001da2b) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001da2b) calenote_swipe_2_pane_g

0xe754,	// (0x0001c3ca) calenote_swipe_2_pane_t1_ParamLimits

0xe754,	// (0x0001c3ca) calenote_swipe_2_pane_t1

0x9362,	// (0x00016fd8) main_mup_navstr_pane

0x4ee4,	// (0x00012b5a) main_mup3_pane_t7_ParamLimits

0x4ee4,	// (0x00012b5a) main_mup3_pane_t7

0xcba6,	// (0x0001a81c) main_mp4_pane_g6_ParamLimits

0xcba6,	// (0x0001a81c) main_mp4_pane_g6

0xcdc0,	// (0x0001aa36) main_image3_pane_t4_ParamLimits

0xcdc0,	// (0x0001aa36) main_image3_pane_t4

0x8686,	// (0x000162fc) popup_navstr_preview_pane_ParamLimits

0x8686,	// (0x000162fc) popup_navstr_preview_pane

0x8696,	// (0x0001630c) scroll_navstr_pane_ParamLimits

0x8696,	// (0x0001630c) scroll_navstr_pane

0x9362,	// (0x00016fd8) bg_popup_preview_window_pane_cp04

0xe77b,	// (0x0001c3f1) popup_navstr_preview_pane_t1

0x86aa,	// (0x00016320) scroll_navstr_pane_g1_ParamLimits

0x86aa,	// (0x00016320) scroll_navstr_pane_g1

0x86be,	// (0x00016334) scroll_navstr_pane_t1_ParamLimits

0x86be,	// (0x00016334) scroll_navstr_pane_t1

0xe720,	// (0x0001c396) bg_button_pane_cp014

0xe720,	// (0x0001c396) bg_button_pane_cp030

0xe24f,	// (0x0001bec5) list_double_fisheye_pane_g4_ParamLimits

0xe24f,	// (0x0001bec5) list_double_fisheye_pane_g4

0xe25b,	// (0x0001bed1) list_double_fisheye_pane_g5_ParamLimits

0xe25b,	// (0x0001bed1) list_double_fisheye_pane_g5

0xe688,	// (0x0001c2fe) sp_fs_scroll_pane_cp03

0xe3f1,	// (0x0001c067) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe3fd,	// (0x0001c073) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0001d970) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe409,	// (0x0001c07f) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8576,	// (0x000161ec) sp_fs_scroll_pane_cp02

0x9cd6,	// (0x0001794c) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9cd6,	// (0x0001794c) popup_sp_fs_calendar_preview_list_single_pane

0x9362,	// (0x00016fd8) main_cam6_pano_pane

0x93d3,	// (0x00017049) main_mup3_pane_ParamLimits

0x9362,	// (0x00016fd8) main_phacti_pane

0x7af5,	// (0x0001576b) bg_button_pane_cp11

0x7b0f,	// (0x00015785) main_mobtv_info_pane_g2_ParamLimits

0x7b0f,	// (0x00015785) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0001d8d0) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0001d8d0) main_mobtv_info_pane_g

0x7cea,	// (0x00015960) sc_clock_pane_t5_ParamLimits

0x7cea,	// (0x00015960) sc_clock_pane_t5

0x7d74,	// (0x000159ea) main_radioblah_pane_g1_ParamLimits

0xe1bd,	// (0x0001be33) main_radioblah_pane_t3_ParamLimits

0xe1bd,	// (0x0001be33) main_radioblah_pane_t3

0xe1d5,	// (0x0001be4b) main_radioblah_pane_t4_ParamLimits

0xe1d5,	// (0x0001be4b) main_radioblah_pane_t4

0x7d9c,	// (0x00015a12) main_radioblah_text_pane_ParamLimits

0x7d9c,	// (0x00015a12) main_radioblah_text_pane

0x7dae,	// (0x00015a24) main_radioblah_info_pane_g1_ParamLimits

0x7e47,	// (0x00015abd) main_radioblah_info_pane_t4_ParamLimits

0x7e47,	// (0x00015abd) main_radioblah_info_pane_t4

0x93d3,	// (0x00017049) main_sp_fs_calendar_pane

0x86d5,	// (0x0001634b) main_phacti_pane_g1

0x86dd,	// (0x00016353) phacti_note_pane_ParamLimits

0x86dd,	// (0x00016353) phacti_note_pane

0xe792,	// (0x0001c408) phacti_term_pane_ParamLimits

0xe792,	// (0x0001c408) phacti_term_pane

0xe7a7,	// (0x0001c41d) phacti_note_pane_t1_ParamLimits

0xe7a7,	// (0x0001c41d) phacti_note_pane_t1

0xe7be,	// (0x0001c434) phacti_term_pane_g1

0xe7c6,	// (0x0001c43c) phacti_term_pane_t1_ParamLimits

0xe7c6,	// (0x0001c43c) phacti_term_pane_t1

0xe7f0,	// (0x0001c466) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe7f8,	// (0x0001c46e) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001da35) popup_sp_fs_calendar_preview_list_single_pane_g

0xe800,	// (0x0001c476) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe800,	// (0x0001c476) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe816,	// (0x0001c48c) aid_popup_sp_fs_bg_corner_pane

0xc21a,	// (0x00019e90) popup_sp_fs_calendar_preview_bg_pane_g1

0x9362,	// (0x00016fd8) popup_sp_fs_calendar_preview_bg_pane

0xe81e,	// (0x0001c494) popup_sp_fs_calendar_preview_list_pane

0x93d3,	// (0x00017049) bg_main_sp_fs_cale_pane_ParamLimits

0x93d3,	// (0x00017049) bg_main_sp_fs_cale_pane

0xe82f,	// (0x0001c4a5) listscroll_cale_mrui_pane_ParamLimits

0xe82f,	// (0x0001c4a5) listscroll_cale_mrui_pane

0xe843,	// (0x0001c4b9) listscroll_sp_fs_schedule_track_pane

0xe84c,	// (0x0001c4c2) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe84c,	// (0x0001c4c2) main_sp_fs_ctrlbar_pane_cp01

0xe85d,	// (0x0001c4d3) main_sp_fs_ribbon_pane

0xe865,	// (0x0001c4db) popup_sp_fs_cale_preview_window

0x8734,	// (0x000163aa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8734,	// (0x000163aa) list_single_sp_fs_schedule_track_pane

0x93d3,	// (0x00017049) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x93d3,	// (0x00017049) bg_sp_fs_highlight_list_pane_cp03

0x8747,	// (0x000163bd) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8747,	// (0x000163bd) list_single_sp_fs_schedule_track_pane_g1

0x8753,	// (0x000163c9) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8753,	// (0x000163c9) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001da3a) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001da3a) list_single_sp_fs_schedule_track_pane_g

0x875f,	// (0x000163d5) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x875f,	// (0x000163d5) list_single_sp_fs_schedule_track_pane_t1

0x8781,	// (0x000163f7) sp_fs_schedule_track_pane_ParamLimits

0x8781,	// (0x000163f7) sp_fs_schedule_track_pane

0xe877,	// (0x0001c4ed) sp_fs_schedule_track_pane_g1

0xe87f,	// (0x0001c4f5) sp_fs_schedule_track_pane_g2

0xe887,	// (0x0001c4fd) sp_fs_schedule_track_pane_g3

0xe88f,	// (0x0001c505) sp_fs_schedule_track_pane_g4

0xe897,	// (0x0001c50d) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001da3f) sp_fs_schedule_track_pane_g

0xcfca,	// (0x0001ac40) bg_sp_fs_schedule_viewer_highlight_g1

0xa0f2,	// (0x00017d68) bg_sp_fs_schedule_viewer_highlight_g2

0xcfd2,	// (0x0001ac48) bg_sp_fs_schedule_viewer_highlight_g3

0xcfda,	// (0x0001ac50) bg_sp_fs_schedule_viewer_highlight_g4

0xd265,	// (0x0001aedb) bg_sp_fs_schedule_viewer_highlight_g5

0xcfea,	// (0x0001ac60) bg_sp_fs_schedule_viewer_highlight_g6

0xcff2,	// (0x0001ac68) bg_sp_fs_schedule_viewer_highlight_g7

0xcffa,	// (0x0001ac70) bg_sp_fs_schedule_viewer_highlight_g8

0xa0d2,	// (0x00017d48) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001da4a) bg_sp_fs_schedule_viewer_highlight_g

0x9362,	// (0x00016fd8) bg_main_sp_fs_ribbon_pane

0x8796,	// (0x0001640c) main_sp_fs_ribbon_pane_g1

0xe89f,	// (0x0001c515) main_sp_fs_ribbon_pane_t1

0x879f,	// (0x00016415) main_sp_fs_ribbon_pane_t2

0xe8ae,	// (0x0001c524) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001da5d) main_sp_fs_ribbon_pane_t

0xe8bd,	// (0x0001c533) main_sp_fs_ribbon_scheduler_pane

0xe8c5,	// (0x0001c53b) bg_main_sp_fs_ribbon_pane_g1

0xe8ce,	// (0x0001c544) bg_main_sp_fs_ribbon_pane_g2

0xe8d7,	// (0x0001c54d) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001da64) bg_main_sp_fs_ribbon_pane_g

0xe8df,	// (0x0001c555) main_sp_fs_ribbon_scheduler_pane_g1

0xe8e8,	// (0x0001c55e) main_sp_fs_ribbon_scheduler_pane_g2

0xe8f1,	// (0x0001c567) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001da6b) main_sp_fs_ribbon_scheduler_pane_g

0xe8fa,	// (0x0001c570) list_cale_mrui_pane

0x87ae,	// (0x00016424) sp_fs_scroll_pane_cp07_ParamLimits

0x87ae,	// (0x00016424) sp_fs_scroll_pane_cp07

0x87c4,	// (0x0001643a) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x87c4,	// (0x0001643a) bg_sp_fs_schedule_viewer_highlight

0xe903,	// (0x0001c579) list_single_sp_fs_schedule_track_pane_cp01

0xe90b,	// (0x0001c581) list_sp_fs_schedule_track_pane

0xe913,	// (0x0001c589) sp_fs_scroll_pane_cp06_ParamLimits

0xe913,	// (0x0001c589) sp_fs_scroll_pane_cp06

0xc21a,	// (0x00019e90) bgmain_sp_fs_calendar_pane_g1

0x87d6,	// (0x0001644c) list_single_cale_mrui_pane_ParamLimits

0x87d6,	// (0x0001644c) list_single_cale_mrui_pane

0xe925,	// (0x0001c59b) list_single_cale_mrui_row_pane_ParamLimits

0xe925,	// (0x0001c59b) list_single_cale_mrui_row_pane

0xe932,	// (0x0001c5a8) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe932,	// (0x0001c5a8) list_single_cale_mrui_row_pane_g1

0xe96a,	// (0x0001c5e0) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe96a,	// (0x0001c5e0) list_single_cale_mrui_row_pane_t1

0x87fd,	// (0x00016473) list_single_cale_mrui_row_pane_t2_ParamLimits

0x87fd,	// (0x00016473) list_single_cale_mrui_row_pane_t2

0xe97c,	// (0x0001c5f2) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe97c,	// (0x0001c5f2) list_single_cale_mrui_row_pane_t3

0xe9ab,	// (0x0001c621) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9ab,	// (0x0001c621) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0001da77) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0001da77) list_single_cale_mrui_row_pane_t

0x8863,	// (0x000164d9) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8863,	// (0x000164d9) list_single_cmail_header_editor_pane_bg_cp01

0x8887,	// (0x000164fd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8887,	// (0x000164fd) list_single_cmail_header_editor_pane_bg_cp02

0x88a5,	// (0x0001651b) main_radioblah_text_pane_t1_ParamLimits

0x88a5,	// (0x0001651b) main_radioblah_text_pane_t1

0xe9da,	// (0x0001c650) cam6_indi_pane_cp01

0xe9e2,	// (0x0001c658) cam6_mode_pane_cp01

0xe9ea,	// (0x0001c660) cam6_pano_pane

0xe9f3,	// (0x0001c669) cam6_zoom_pane_cp01

0xe9fd,	// (0x0001c673) cam6_pano_image_pane

0xea06,	// (0x0001c67c) cam6_pano_pane_g1

0xdf2d,	// (0x0001bba3) cam6_pano_pane_g2

0xea0f,	// (0x0001c685) cam6_pano_pane_g3

0xea18,	// (0x0001c68e) cam6_pano_pane_g4

0xc7fa,	// (0x0001a470) cam6_pano_pane_g5

0xea21,	// (0x0001c697) cam6_pano_pane_g6

0xea29,	// (0x0001c69f) cam6_pano_pane_g7

0xea31,	// (0x0001c6a7) cam6_pano_pane_g8

0xea3a,	// (0x0001c6b0) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0001da80) cam6_pano_pane_g

0x9362,	// (0x00016fd8) main_browser_tag_pane

0xe773,	// (0x0001c3e9) grid_navstr_albumart_pane

0xea45,	// (0x0001c6bb) cell_navstr_albumart_pane_ParamLimits

0xea45,	// (0x0001c6bb) cell_navstr_albumart_pane

0xea61,	// (0x0001c6d7) cell_navstr_albumart_pane_g1

0xbafe,	// (0x00019774) cell_navstr_albumart_pane_g2

0xbb0e,	// (0x00019784) cell_navstr_albumart_pane_g3

0xbb06,	// (0x0001977c) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0001da93) cell_navstr_albumart_pane_g

0x88c0,	// (0x00016536) bt_list_pane_ParamLimits

0x88c0,	// (0x00016536) bt_list_pane

0x88d6,	// (0x0001654c) bt_list_pane_t1

0x88e5,	// (0x0001655b) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0001da9c) bt_list_pane_t

0x9362,	// (0x00016fd8) main_cale_prevew_pane

0x88f4,	// (0x0001656a) popup_cale_preview_window_ParamLimits

0x88f4,	// (0x0001656a) popup_cale_preview_window

0x93d3,	// (0x00017049) bg_popup_preview_window_pane_cp05_ParamLimits

0x93d3,	// (0x00017049) bg_popup_preview_window_pane_cp05

0xea69,	// (0x0001c6df) list_cale_preview_pane_ParamLimits

0xea69,	// (0x0001c6df) list_cale_preview_pane

0x890f,	// (0x00016585) list_double_cale_preview_pane_ParamLimits

0x890f,	// (0x00016585) list_double_cale_preview_pane

0x8923,	// (0x00016599) list_single_cale_preview_pane_ParamLimits

0x8923,	// (0x00016599) list_single_cale_preview_pane

0x893b,	// (0x000165b1) list_single_cale_preview_pane_g1

0x8943,	// (0x000165b9) list_single_cale_preview_pane_t1_ParamLimits

0x8943,	// (0x000165b9) list_single_cale_preview_pane_t1

0x8958,	// (0x000165ce) list_double_cale_preview_pane_g1

0x8960,	// (0x000165d6) list_double_cale_preview_pane_t1_ParamLimits

0x8960,	// (0x000165d6) list_double_cale_preview_pane_t1

0x8975,	// (0x000165eb) list_double_cale_preview_pane_t2_ParamLimits

0x8975,	// (0x000165eb) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0001daa1) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0001daa1) list_double_cale_preview_pane_t

0x9362,	// (0x00016fd8) main_ezdial_pane

0x93d3,	// (0x00017049) main_sp_fs_email_pane_ParamLimits

0x8063,	// (0x00015cd9) cmail_ddmenu_btn01_pane_ParamLimits

0x8063,	// (0x00015cd9) cmail_ddmenu_btn01_pane

0x8076,	// (0x00015cec) cmail_ddmenu_btn02_pane_ParamLimits

0x8076,	// (0x00015cec) cmail_ddmenu_btn02_pane

0x8099,	// (0x00015d0f) cmail_ddmenu_btn03_pane_ParamLimits

0x8099,	// (0x00015d0f) cmail_ddmenu_btn03_pane

0x80bf,	// (0x00015d35) main_sp_fs_ctrlbar_pane_ParamLimits

0x80e3,	// (0x00015d59) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8580,	// (0x000161f6) list_cmail_body_pane_ParamLimits

0xe697,	// (0x0001c30d) bg_button_pane_cp12

0xe6ac,	// (0x0001c322) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6ac,	// (0x0001c322) list_single_cmail_header_detail_pane_g3

0x860f,	// (0x00016285) list_single_cmail_header_detail_pane_t2_ParamLimits

0x860f,	// (0x00016285) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001da26) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001da26) list_single_cmail_header_detail_pane_t

0xe7db,	// (0x0001c451) phacti_term_pane_t2_ParamLimits

0xe7db,	// (0x0001c451) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001da30) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001da30) phacti_term_pane_t

0xea75,	// (0x0001c6eb) aid_size_list_single_double

0x898d,	// (0x00016603) popup_ezdial_listscroll_window

0x89a9,	// (0x0001661f) popup_number_entry_window_cp01

0xa878,	// (0x000184ee) bg_popup_call_pane_cp09

0xea81,	// (0x0001c6f7) ezdial_list_pane

0xea89,	// (0x0001c6ff) scroll_pane_cp23

0xbce5,	// (0x0001995b) bg_button_pane_cp028_ParamLimits

0xbce5,	// (0x0001995b) bg_button_pane_cp028

0x89b7,	// (0x0001662d) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x89b7,	// (0x0001662d) cmail_ddmenu_btn01_pane_g1

0x89c3,	// (0x00016639) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x89c3,	// (0x00016639) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0001daa6) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0001daa6) cmail_ddmenu_btn01_pane_g

0xea91,	// (0x0001c707) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea91,	// (0x0001c707) cmail_ddmenu_btn01_pane_t1

0xbce5,	// (0x0001995b) bg_button_pane_cp029_ParamLimits

0xbce5,	// (0x0001995b) bg_button_pane_cp029

0x89cf,	// (0x00016645) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x89cf,	// (0x00016645) cmail_ddmenu_btn02_pane_g1

0x89e7,	// (0x0001665d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x89e7,	// (0x0001665d) cmail_ddmenu_btn02_pane_t1

0x93d3,	// (0x00017049) bg_button_pane_cp031_ParamLimits

0x93d3,	// (0x00017049) bg_button_pane_cp031

0x89cf,	// (0x00016645) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x89cf,	// (0x00016645) cmail_ddmenu_btn03_pane_g1

0x89e7,	// (0x0001665d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x89e7,	// (0x0001665d) cmail_ddmenu_btn03_pane_t1

0x5a9f,	// (0x00013715) cell_dialer2_keypad_pane_t1_ParamLimits

0x5ab9,	// (0x0001372f) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5ab9,	// (0x0001372f) cell_dialer2_keypad_pane_t1_copy1

0x7975,	// (0x000155eb) ncimui_group_button_pane

0x93d3,	// (0x00017049) main_sp_fs_calendar_pane_ParamLimits

0x8598,	// (0x0001620e) list_single_cmail_header_caption_pane_ParamLimits

0xe826,	// (0x0001c49c) aid_recal_txt_sm_pane

0x9362,	// (0x00016fd8) mian_recal_day_pane

0xe865,	// (0x0001c4db) popup_sp_fs_cale_preview_window_ParamLimits

0x9362,	// (0x00016fd8) list_recal_day_pane

0xeac8,	// (0x0001c73e) list_single_recal_day_pane_ParamLimits

0xeac8,	// (0x0001c73e) list_single_recal_day_pane

0xeada,	// (0x0001c750) list_single_recal_day_pane_g1_ParamLimits

0xeada,	// (0x0001c750) list_single_recal_day_pane_g1

0xeae6,	// (0x0001c75c) list_single_recal_day_pane_g2_ParamLimits

0xeae6,	// (0x0001c75c) list_single_recal_day_pane_g2

0xeaf2,	// (0x0001c768) list_single_recal_day_pane_g3_ParamLimits

0xeaf2,	// (0x0001c768) list_single_recal_day_pane_g3

0x8a0b,	// (0x00016681) list_single_recal_day_pane_g4_ParamLimits

0x8a0b,	// (0x00016681) list_single_recal_day_pane_g4

0xeafe,	// (0x0001c774) list_single_recal_day_pane_g5_ParamLimits

0xeafe,	// (0x0001c774) list_single_recal_day_pane_g5

0xeb0a,	// (0x0001c780) list_single_recal_day_pane_g6_ParamLimits

0xeb0a,	// (0x0001c780) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0001dab5) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0001dab5) list_single_recal_day_pane_g

0xeb16,	// (0x0001c78c) list_single_recal_day_pane_t1

0xeb24,	// (0x0001c79a) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001dac2) list_single_recal_day_pane_t

0x8a19,	// (0x0001668f) ncimui_query_button_pane_ParamLimits

0x8a19,	// (0x0001668f) ncimui_query_button_pane

0x8a29,	// (0x0001669f) ncimui_query_button_pane_t1_ParamLimits

0x8a29,	// (0x0001669f) ncimui_query_button_pane_t1

0xeb32,	// (0x0001c7a8) ncimui_query_button_pane_t2_ParamLimits

0xeb32,	// (0x0001c7a8) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001dac7) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001dac7) ncimui_query_button_pane_t

0x8a3c,	// (0x000166b2) query_button_pane_ParamLimits

0x8a3c,	// (0x000166b2) query_button_pane

0x9362,	// (0x00016fd8) bg_button_pane_cp0028

0xeb45,	// (0x0001c7bb) query_button_pane_t1

0x3b39,	// (0x000117af) main_tport_pane_ParamLimits

0x8466,	// (0x000160dc) bg_popup_window_pane_cp01_ParamLimits

0x8466,	// (0x000160dc) bg_popup_window_pane_cp01

0x847c,	// (0x000160f2) heading_pane_cp08_ParamLimits

0x847c,	// (0x000160f2) heading_pane_cp08

0x848d,	// (0x00016103) heading_pane_cp07_ParamLimits

0x848d,	// (0x00016103) heading_pane_cp07

0xe662,	// (0x0001c2d8) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001da13) cell_tport_appsw_pane_g

0x3084,	// (0x00010cfa) input_candi_list_open_g1

0xa2e5,	// (0x00017f5b) list_cale_time_pane_g6_ParamLimits

0xa2e5,	// (0x00017f5b) list_cale_time_pane_g6

0x4927,	// (0x0001259d) aid_size_touch_calib_1_ParamLimits

0x4927,	// (0x0001259d) aid_size_touch_calib_1

0x4933,	// (0x000125a9) aid_size_touch_calib_2_ParamLimits

0x4933,	// (0x000125a9) aid_size_touch_calib_2

0x4949,	// (0x000125bf) aid_size_touch_calib_3_ParamLimits

0x4949,	// (0x000125bf) aid_size_touch_calib_3

0x4967,	// (0x000125dd) aid_size_touch_calib_4_ParamLimits

0x4967,	// (0x000125dd) aid_size_touch_calib_4

0x497d,	// (0x000125f3) main_touch_calib_button_group_pane_ParamLimits

0x497d,	// (0x000125f3) main_touch_calib_button_group_pane

0x4995,	// (0x0001260b) main_touch_calib_pane_g1_ParamLimits

0x49a1,	// (0x00012617) main_touch_calib_pane_g2_ParamLimits

0x49ad,	// (0x00012623) main_touch_calib_pane_g3_ParamLimits

0x49b9,	// (0x0001262f) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0001d3eb) main_touch_calib_pane_g_ParamLimits

0x49c5,	// (0x0001263b) main_touch_calib_pane_t1_ParamLimits

0x49df,	// (0x00012655) main_touch_calib_pane_t2_ParamLimits

0x49f9,	// (0x0001266f) main_touch_calib_pane_t3_ParamLimits

0x4a0d,	// (0x00012683) main_touch_calib_pane_t4_ParamLimits

0x4a21,	// (0x00012697) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0001d3f4) main_touch_calib_pane_t_ParamLimits

0xc5c4,	// (0x0001a23a) list_single_fp_cale_pane_g3_ParamLimits

0xc5c4,	// (0x0001a23a) list_single_fp_cale_pane_g3

0x93d3,	// (0x00017049) bg_button_pane_cp012_ParamLimits

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp03_ParamLimits

0x6b6d,	// (0x000147e3) cell_vitu2_function_top_pane_g1_ParamLimits

0x93d3,	// (0x00017049) bg_vkb2_func_pane_cp04_ParamLimits

0x7915,	// (0x0001558b) main_ncimui_button_group_pane_ParamLimits

0x7915,	// (0x0001558b) main_ncimui_button_group_pane

0x7963,	// (0x000155d9) main_ncimui_pane_t3_ParamLimits

0x7963,	// (0x000155d9) main_ncimui_pane_t3

0xe789,	// (0x0001c3ff) phacti_button_group_pane

0xea75,	// (0x0001c6eb) aid_size_list_single_double_ParamLimits

0x898d,	// (0x00016603) popup_ezdial_listscroll_window_ParamLimits

0x89a9,	// (0x0001661f) popup_number_entry_window_cp01_ParamLimits

0x8a4f,	// (0x000166c5) phacti_button_pane_ParamLimits

0x8a4f,	// (0x000166c5) phacti_button_pane

0x9362,	// (0x00016fd8) bg_button_pane_cp14

0xeb53,	// (0x0001c7c9) phacti_button_pane_t1

0x8a60,	// (0x000166d6) main_touch_calib_button_pane_ParamLimits

0x8a60,	// (0x000166d6) main_touch_calib_button_pane

0x9b3c,	// (0x000177b2) bg_button_pane_cp18_ParamLimits

0x9b3c,	// (0x000177b2) bg_button_pane_cp18

0xeb61,	// (0x0001c7d7) main_touch_calib_button_pane_t1_ParamLimits

0xeb61,	// (0x0001c7d7) main_touch_calib_button_pane_t1

0xeb77,	// (0x0001c7ed) main_touch_calib_button_pane_t2_ParamLimits

0xeb77,	// (0x0001c7ed) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001dacc) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001dacc) main_touch_calib_button_pane_t

0x9362,	// (0x00016fd8) cell_ncimui_button_pane

0x9362,	// (0x00016fd8) bg_button_pane_cp032

0xeb95,	// (0x0001c80b) cell_ncimui_button_pane_t1

0xcd9e,	// (0x0001aa14) image3_infobar_pane_ParamLimits

0xcd9e,	// (0x0001aa14) image3_infobar_pane

0x7d16,	// (0x0001598c) fs_bigclock_status_pane_ParamLimits

0x7d16,	// (0x0001598c) fs_bigclock_status_pane

0x7d23,	// (0x00015999) main_fs_bigclock_clock_pane_ParamLimits

0x7d23,	// (0x00015999) main_fs_bigclock_clock_pane

0x7d36,	// (0x000159ac) main_fs_bigclock_indi_pane_ParamLimits

0x7d36,	// (0x000159ac) main_fs_bigclock_indi_pane

0x7d51,	// (0x000159c7) main_fs_bigclock_swipe_pane_ParamLimits

0x7d51,	// (0x000159c7) main_fs_bigclock_swipe_pane

0x9362,	// (0x00016fd8) main_fs_clock_dumped_data

0xe03a,	// (0x0001bcb0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe03a,	// (0x0001bcb0) list_single_fs_bigclock_indicator_pane_g1

0xe05a,	// (0x0001bcd0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe05a,	// (0x0001bcd0) list_single_fs_bigclock_indicator_pane_g2

0xe074,	// (0x0001bcea) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe074,	// (0x0001bcea) list_single_fs_bigclock_indicator_pane_g3

0xe090,	// (0x0001bd06) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe090,	// (0x0001bd06) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0001d904) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0001d904) list_single_fs_bigclock_indicator_pane_g

0xe0b6,	// (0x0001bd2c) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe0b6,	// (0x0001bd2c) list_single_fs_bigclock_indicator_pane_t1

0xe0de,	// (0x0001bd54) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0de,	// (0x0001bd54) list_single_fs_bigclock_indicator_pane_t2

0xe106,	// (0x0001bd7c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe106,	// (0x0001bd7c) list_single_fs_bigclock_indicator_pane_t3

0xe130,	// (0x0001bda6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe130,	// (0x0001bda6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0001d90f) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0001d90f) list_single_fs_bigclock_indicator_pane_t

0xeba3,	// (0x0001c819) image3_infobar_fav_pane_ParamLimits

0xeba3,	// (0x0001c819) image3_infobar_fav_pane

0xebb3,	// (0x0001c829) image3_infobar_loc_pane_ParamLimits

0xebb3,	// (0x0001c829) image3_infobar_loc_pane

0xebc9,	// (0x0001c83f) image3_infobar_time_pane_ParamLimits

0xebc9,	// (0x0001c83f) image3_infobar_time_pane

0xc21a,	// (0x00019e90) image3_infobar_time_pane_g1

0xebd9,	// (0x0001c84f) image3_infobar_time_pane_t1

0xc21a,	// (0x00019e90) image3_infobar_loc_pane_g1

0xebe7,	// (0x0001c85d) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001dad1) image3_infobar_loc_pane_g

0xebef,	// (0x0001c865) image3_infobar_loc_pane_t1

0xc21a,	// (0x00019e90) image3_infobar_fav_pane_g1

0xebfd,	// (0x0001c873) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001dad6) image3_infobar_fav_pane_g

0xec05,	// (0x0001c87b) fs_bigclock_status_battery_pane

0xec0e,	// (0x0001c884) fs_bigclock_status_signal_pane

0xec17,	// (0x0001c88d) fs_bigclock_status_title_pane

0xec20,	// (0x0001c896) fs_bigclock_status_signal_pane_g1

0xec29,	// (0x0001c89f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001dadb) fs_bigclock_status_signal_pane_g

0xec31,	// (0x0001c8a7) fs_bigclock_status_battery_pane_g1

0xec3a,	// (0x0001c8b0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001dae0) fs_bigclock_status_battery_pane_g

0xec42,	// (0x0001c8b8) fs_bigclock_status_title_pane_t1

0xc21a,	// (0x00019e90) main_fs_bigclock_clock_pane_g1

0xec50,	// (0x0001c8c6) main_fs_bigclock_clock_pane_g2

0xec50,	// (0x0001c8c6) main_fs_bigclock_clock_pane_g3

0xec50,	// (0x0001c8c6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001dae5) main_fs_bigclock_clock_pane_g

0xec5c,	// (0x0001c8d2) main_fs_bigclock_clock_pane_t1

0xec6a,	// (0x0001c8e0) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001daee) main_fs_bigclock_clock_pane_t

0xec79,	// (0x0001c8ef) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec79,	// (0x0001c8ef) list_single_fs_bigclock_indicator_pane

0x8a75,	// (0x000166eb) list_single_fs_bigclock_pane_ParamLimits

0x8a75,	// (0x000166eb) list_single_fs_bigclock_pane

0xec93,	// (0x0001c909) main_fs_bigclock_indicator_pane_t1

0xeca2,	// (0x0001c918) list_single_fs_bigclock_pane_g1

0xecaa,	// (0x0001c920) list_single_fs_bigclock_pane_t1

0xc21a,	// (0x00019e90) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x0001c95e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001daff) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x0001c966) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x0001c966) main_fs_bigclock_swipe_pane_t1

0x2808,	// (0x0001047e) call_type_pane_ParamLimits

0x9362,	// (0x00016fd8) main_btmg_pane

0xe95e,	// (0x0001c5d4) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe95e,	// (0x0001c5d4) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0001da72) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001da72) list_single_cale_mrui_row_pane_g

0xeaaf,	// (0x0001c725) list_recal_vselct_arw_lo_pane

0xeab7,	// (0x0001c72d) list_recal_vselct_arw_up_pane

0xeabf,	// (0x0001c735) list_recal_vselct_pane

0xed0d,	// (0x0001c983) btmg_button_pane

0x8adb,	// (0x00016751) main_btmg_pane_g1

0x9362,	// (0x00016fd8) bg_button_pane_cp044

0xed17,	// (0x0001c98d) btmg_button_pane_t1

0xbcdd,	// (0x00019953) aid_listscroll_gen

0x93d3,	// (0x00017049) main_cntbar_detail_pane

0xe678,	// (0x0001c2ee) list_cmail_folder_pane

0xe688,	// (0x0001c2fe) sp_fs_scroll_pane_cp03_ParamLimits

0x8ae5,	// (0x0001675b) list_single_fs_dyc_pane_cp01_ParamLimits

0x8ae5,	// (0x0001675b) list_single_fs_dyc_pane_cp01

0xed53,	// (0x0001c9c9) aid_size_cmail_indent

0xed5c,	// (0x0001c9d2) list_single_dyc_row_pane_cp01

0x8b32,	// (0x000167a8) cntbar_detail_list_pane_ParamLimits

0x8b32,	// (0x000167a8) cntbar_detail_list_pane

0x8b84,	// (0x000167fa) main_cntbar_detail_cont_pane_ParamLimits

0x8b84,	// (0x000167fa) main_cntbar_detail_cont_pane

0x27a2,	// (0x00010418) scroll_pane_cp032_ParamLimits

0x27a2,	// (0x00010418) scroll_pane_cp032

0x8b98,	// (0x0001680e) cntbar_detail_list_event_pane_ParamLimits

0x8b98,	// (0x0001680e) cntbar_detail_list_event_pane

0x8b44,	// (0x000167ba) cntbar_detail_list_shct_pane

0xa140,	// (0x00017db6) aid_list_gen

0xed65,	// (0x0001c9db) aid_scroll

0xed6e,	// (0x0001c9e4) aid_size_touch_scroll_bar

0xed77,	// (0x0001c9ed) aid_list_double

0xed80,	// (0x0001c9f6) aid_list_single

0x8ba8,	// (0x0001681e) aid_list_single_lg

0xed89,	// (0x0001c9ff) aid_list_z_g_a_sm

0xed91,	// (0x0001ca07) aid_list_z_g_d

0xed99,	// (0x0001ca0f) aid_txt_z_prm

0xeda7,	// (0x0001ca1d) aid_txt_z_prm_cp01

0xedb5,	// (0x0001ca2b) aid_txt_z_sec

0x8bb1,	// (0x00016827) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8bb1,	// (0x00016827) main_cntbar_detail_cont_pane_g1

0x8bc5,	// (0x0001683b) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8bc5,	// (0x0001683b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001db04) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001db04) main_cntbar_detail_cont_pane_g

0xedc3,	// (0x0001ca39) main_cntbar_detail_cont_pane_t1

0xedd1,	// (0x0001ca47) main_cntbar_detail_cont_pane_t2

0xeddf,	// (0x0001ca55) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001db09) main_cntbar_detail_cont_pane_t

0x8bd5,	// (0x0001684b) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8bd5,	// (0x0001684b) cell_cntbar_detail_list_shct_pane

0xeded,	// (0x0001ca63) cntbar_detail_list_shct_pane_g1

0xedf6,	// (0x0001ca6c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001db10) cntbar_detail_list_shct_pane_g

0x8be7,	// (0x0001685d) cntbar_detail_list_event_pane_g1_ParamLimits

0x8be7,	// (0x0001685d) cntbar_detail_list_event_pane_g1

0x8bf3,	// (0x00016869) cntbar_detail_list_event_pane_g2_ParamLimits

0x8bf3,	// (0x00016869) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001db15) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001db15) cntbar_detail_list_event_pane_g

0x8c61,	// (0x000168d7) cntbar_detail_list_event_pane_t1_ParamLimits

0x8c61,	// (0x000168d7) cntbar_detail_list_event_pane_t1

0x8c76,	// (0x000168ec) cntbar_detail_list_event_pane_t2_ParamLimits

0x8c76,	// (0x000168ec) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001db22) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001db22) cntbar_detail_list_event_pane_t

0xc21a,	// (0x00019e90) cell_cntbar_detail_list_shct_pane_g1

0x2bac,	// (0x00010822) navi_pane_mv_g3

0x93d3,	// (0x00017049) main_cntbar_detail_pane_ParamLimits

0x9362,	// (0x00016fd8) main_notif_wgt_pane

0xcb5c,	// (0x0001a7d2) aid_tch_main_mp4_pane_g4

0xcd30,	// (0x0001a9a6) popup_slider_window_cp02

0xeaa6,	// (0x0001c71c) list_recal_day_event_pane

0x8b02,	// (0x00016778) cntbar_detail_btn_pane_ParamLimits

0x8b02,	// (0x00016778) cntbar_detail_btn_pane

0x8b1a,	// (0x00016790) cntbar_detail_btn_pane_cp01_ParamLimits

0x8b1a,	// (0x00016790) cntbar_detail_btn_pane_cp01

0x8b44,	// (0x000167ba) cntbar_detail_list_shct_pane_ParamLimits

0x8b54,	// (0x000167ca) cntbar_detail_pane_g1_ParamLimits

0x8b54,	// (0x000167ca) cntbar_detail_pane_g1

0x8b68,	// (0x000167de) cntbar_detail_pane_t1_ParamLimits

0x8b68,	// (0x000167de) cntbar_detail_pane_t1

0x8bff,	// (0x00016875) cntbar_detail_list_event_pane_g3_ParamLimits

0x8bff,	// (0x00016875) cntbar_detail_list_event_pane_g3

0x8c17,	// (0x0001688d) cntbar_detail_list_event_pane_g4_ParamLimits

0x8c17,	// (0x0001688d) cntbar_detail_list_event_pane_g4

0x8c2f,	// (0x000168a5) cntbar_detail_list_event_pane_g5_ParamLimits

0x8c2f,	// (0x000168a5) cntbar_detail_list_event_pane_g5

0x8c47,	// (0x000168bd) cntbar_detail_list_event_pane_g6_ParamLimits

0x8c47,	// (0x000168bd) cntbar_detail_list_event_pane_g6

0x8c8b,	// (0x00016901) cntbar_detail_list_event_pane_t3_ParamLimits

0x8c8b,	// (0x00016901) cntbar_detail_list_event_pane_t3

0x8c9d,	// (0x00016913) popup_notif_wgt_window_ParamLimits

0x8c9d,	// (0x00016913) popup_notif_wgt_window

0x8cb6,	// (0x0001692c) popup_submenu_window_cp01_ParamLimits

0x8cb6,	// (0x0001692c) popup_submenu_window_cp01

0xa878,	// (0x000184ee) bg_popup_window_pane_cp10

0xedff,	// (0x0001ca75) listscroll_notif_wgt_pane

0xee09,	// (0x0001ca7f) list_notif_wgt_window

0xee12,	// (0x0001ca88) scroll_pane_cp033

0xee1b,	// (0x0001ca91) list_notif_wgt_row_pane_ParamLimits

0xee1b,	// (0x0001ca91) list_notif_wgt_row_pane

0xee2f,	// (0x0001caa5) aid_size_list_notif_wgt_del

0xee38,	// (0x0001caae) list_notif_wgt_row_pane_g1

0xee40,	// (0x0001cab6) list_notif_wgt_row_pane_g2

0xee48,	// (0x0001cabe) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001db29) list_notif_wgt_row_pane_g

0xee51,	// (0x0001cac7) list_notif_wgt_row_pane_t1

0xee5f,	// (0x0001cad5) list_notif_wgt_row_pane_t2

0xee6d,	// (0x0001cae3) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001db30) list_notif_wgt_row_pane_t

0xd2a5,	// (0x0001af1b) list_recal_day_event_pane_g1

0xee7b,	// (0x0001caf1) list_recal_day_event_pane_t1

0x9362,	// (0x00016fd8) bg_button_pane_cp045

0xee8a,	// (0x0001cb00) cntbar_detail_btn_pane_t1

0xbce5,	// (0x0001995b) main_callh_pane_ParamLimits

0xbce5,	// (0x0001995b) main_callh_pane

0x9362,	// (0x00016fd8) main_coverflow0_pane

0x9362,	// (0x00016fd8) main_wgtman_pane

0x7d5f,	// (0x000159d5) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7d5f,	// (0x000159d5) main_fs_bigclock_unlock_btn_pane

0xe65a,	// (0x0001c2d0) bg_button_pane_cp16

0x852a,	// (0x000161a0) cell_tport_appsw_pane_g3

0x8cc8,	// (0x0001693e) cf0_flow_pane_ParamLimits

0x8cc8,	// (0x0001693e) cf0_flow_pane

0xee98,	// (0x0001cb0e) listscroll_cf0_pane

0xeea1,	// (0x0001cb17) main_cf0_pane_g1

0x8cdd,	// (0x00016953) main_cf0_pane_t1_ParamLimits

0x8cdd,	// (0x00016953) main_cf0_pane_t1

0x8cf4,	// (0x0001696a) main_cf0_pane_t2_ParamLimits

0x8cf4,	// (0x0001696a) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001db37) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001db37) main_cf0_pane_t

0xeeab,	// (0x0001cb21) scroll_pane_cp11

0x8d0b,	// (0x00016981) cf0_flow_pane_g1

0x8d17,	// (0x0001698d) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001db3c) cf0_flow_pane_g

0x8d23,	// (0x00016999) cf0_flow_pane_t1

0x9362,	// (0x00016fd8) main_call6_pane

0x9362,	// (0x00016fd8) main_calllock_pane

0x8d35,	// (0x000169ab) call6_btn_grp_pane_ParamLimits

0x8d35,	// (0x000169ab) call6_btn_grp_pane

0x8d51,	// (0x000169c7) call6_pane_g1_ParamLimits

0x8d51,	// (0x000169c7) call6_pane_g1

0x8d67,	// (0x000169dd) popup_call6_1st_window_ParamLimits

0x8d67,	// (0x000169dd) popup_call6_1st_window

0x8d78,	// (0x000169ee) popup_call6_2nd_window_ParamLimits

0x8d78,	// (0x000169ee) popup_call6_2nd_window

0x8d89,	// (0x000169ff) cell_call6_btn_pane_ParamLimits

0x8d89,	// (0x000169ff) cell_call6_btn_pane

0xa878,	// (0x000184ee) bg_popup_call2_in_pane_cp03

0xeeb6,	// (0x0001cb2c) popup_call6_1st_window_g1

0xeebe,	// (0x0001cb34) popup_call6_1st_window_g2

0xeec6,	// (0x0001cb3c) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001db41) popup_call6_1st_window_g

0xeece,	// (0x0001cb44) popup_call6_1st_window_t1

0xeedd,	// (0x0001cb53) popup_call6_1st_window_t2

0xeeed,	// (0x0001cb63) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001db48) popup_call6_1st_window_t

0xa878,	// (0x000184ee) bg_popup_call2_in_pane_cp04

0xeeb6,	// (0x0001cb2c) popup_call6_2nd_window_g1

0xeebe,	// (0x0001cb34) popup_call6_2nd_window_g2

0xeec6,	// (0x0001cb3c) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001db41) popup_call6_2nd_window_g

0xeece,	// (0x0001cb44) popup_call6_2nd_window_t1

0x9362,	// (0x00016fd8) bg_button_pane_cp15

0xeefd,	// (0x0001cb73) cell_call6_btn_pane_g1

0xef06,	// (0x0001cb7c) cell_call6_btn_pane_t1

0x8d9d,	// (0x00016a13) listscroll_wgtman_pane_ParamLimits

0x8d9d,	// (0x00016a13) listscroll_wgtman_pane

0x8dc0,	// (0x00016a36) wgtman_btn_pane_ParamLimits

0x8dc0,	// (0x00016a36) wgtman_btn_pane

0xa73e,	// (0x000183b4) aid_scroll_copy1

0xef15,	// (0x0001cb8b) list_wgtman_pane

0x8e03,	// (0x00016a79) wgtman_btn_pane_g1_ParamLimits

0x8e03,	// (0x00016a79) wgtman_btn_pane_g1

0x8e2f,	// (0x00016aa5) wgtman_btn_pane_t1_ParamLimits

0x8e2f,	// (0x00016aa5) wgtman_btn_pane_t1

0xef1f,	// (0x0001cb95) wgtman_btn_pane_t2_ParamLimits

0xef1f,	// (0x0001cb95) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001db4f) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001db4f) wgtman_btn_pane_t

0xef36,	// (0x0001cbac) listrow_wgtman_pane_ParamLimits

0xef36,	// (0x0001cbac) listrow_wgtman_pane

0xef4a,	// (0x0001cbc0) listrow_wgtman_pane_g1

0x8e6c,	// (0x00016ae2) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001db54) listrow_wgtman_pane_g

0xef53,	// (0x0001cbc9) listrow_wgtman_pane_t1

0xef61,	// (0x0001cbd7) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001db59) listrow_wgtman_pane_t

0xef6f,	// (0x0001cbe5) wait_bar_pane_cp09

0xef77,	// (0x0001cbed) main_calllock_btn_pane

0xef81,	// (0x0001cbf7) main_calllock_pane_g1

0x9362,	// (0x00016fd8) bg_button_pane_cp17

0xef8d,	// (0x0001cc03) main_calllock_btn_pane_g1

0xef96,	// (0x0001cc0c) main_calllock_btn_pane_t1

0x9362,	// (0x00016fd8) main_dialer3_pane

0x9362,	// (0x00016fd8) main_fmrd2_pane

0xc21a,	// (0x00019e90) main_fs_bigclock_unlock_btn_pane_g1

0xefad,	// (0x0001cc23) main_fs_bigclock_unlock_btn_pane_t1

0x8e76,	// (0x00016aec) area_fmrd2_info_pane_ParamLimits

0x8e76,	// (0x00016aec) area_fmrd2_info_pane

0x8e89,	// (0x00016aff) area_fmrd2_visual_pane_ParamLimits

0x8e89,	// (0x00016aff) area_fmrd2_visual_pane

0x8e97,	// (0x00016b0d) fmrd2_indi_pane_ParamLimits

0x8e97,	// (0x00016b0d) fmrd2_indi_pane

0x8ea4,	// (0x00016b1a) area_fmrd2_visual_pane_g1

0x8eac,	// (0x00016b22) area_fmrd2_visual_pane_t1

0x8ebc,	// (0x00016b32) area_fmrd2_visual_pane_t2

0x8ecc,	// (0x00016b42) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001db63) area_fmrd2_visual_pane_t

0x8edc,	// (0x00016b52) area_fmrd2_info_pane_g1

0x8ee4,	// (0x00016b5a) area_fmrd2_info_pane_t1

0x8ef4,	// (0x00016b6a) area_fmrd2_info_pane_t2

0x8f04,	// (0x00016b7a) area_fmrd2_info_pane_t3

0x8f14,	// (0x00016b8a) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001db6a) area_fmrd2_info_pane_t

0x8f24,	// (0x00016b9a) fmrd2_indi_pane_t1

0x8f34,	// (0x00016baa) fmrd2_indi_pane_t2

0x8f44,	// (0x00016bba) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001db73) fmrd2_indi_pane_t

0xe09f,	// (0x0001bd15) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe09f,	// (0x0001bd15) list_single_fs_bigclock_indicator_pane_g5

0xe145,	// (0x0001bdbb) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe145,	// (0x0001bdbb) list_single_fs_bigclock_indicator_pane_t5

0x86f1,	// (0x00016367) aid_cell_bcale_month_pane_ParamLimits

0x86f1,	// (0x00016367) aid_cell_bcale_month_pane

0x8703,	// (0x00016379) bcale_month_pane_ParamLimits

0x8703,	// (0x00016379) bcale_month_pane

0x871b,	// (0x00016391) bcale_preview_pane_ParamLimits

0x871b,	// (0x00016391) bcale_preview_pane

0xecaa,	// (0x0001c920) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x0001c93a) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x0001c93a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001dafa) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001dafa) list_single_fs_bigclock_pane_t

0xefa5,	// (0x0001cc1b) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001db5e) main_fs_bigclock_unlock_btn_pane_g

0x8f54,	// (0x00016bca) aid_dia3_key_size_ParamLimits

0x8f54,	// (0x00016bca) aid_dia3_key_size

0x8f63,	// (0x00016bd9) aid_dia3_listrow_size_ParamLimits

0x8f63,	// (0x00016bd9) aid_dia3_listrow_size

0x8f71,	// (0x00016be7) dia3_keypad_fun_pane_ParamLimits

0x8f71,	// (0x00016be7) dia3_keypad_fun_pane

0x8f8d,	// (0x00016c03) dia3_keypad_num_pane_ParamLimits

0x8f8d,	// (0x00016c03) dia3_keypad_num_pane

0x8fa6,	// (0x00016c1c) dia3_listscroll_pane_ParamLimits

0x8fa6,	// (0x00016c1c) dia3_listscroll_pane

0x8fbb,	// (0x00016c31) dia3_numentry_pane_ParamLimits

0x8fbb,	// (0x00016c31) dia3_numentry_pane

0xefbb,	// (0x0001cc31) dia3_list_pane

0xefc6,	// (0x0001cc3c) scroll_pane_cp12

0x9362,	// (0x00016fd8) bg_dia3_numentry_pane

0xefd1,	// (0x0001cc47) dia3_numentry_pane_t1

0x8fce,	// (0x00016c44) cell_dia3_key_num_pane

0x8fd6,	// (0x00016c4c) cell_dia3_key0_fun_pane_ParamLimits

0x8fd6,	// (0x00016c4c) cell_dia3_key0_fun_pane

0x8fea,	// (0x00016c60) cell_dia3_key1_fun_pane_ParamLimits

0x8fea,	// (0x00016c60) cell_dia3_key1_fun_pane

0x9002,	// (0x00016c78) dia3_listrow_pane

0xdd97,	// (0x0001ba0d) bg_dia3_numentry_pane_g1

0x9362,	// (0x00016fd8) bg_button_pane_cp21

0xefe0,	// (0x0001cc56) cell_dia3_key_num_pane_t1

0xefee,	// (0x0001cc64) cell_dia3_key_num_pane_t2

0xeffd,	// (0x0001cc73) cell_dia3_key_num_pane_t3

0xf00c,	// (0x0001cc82) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001db7a) cell_dia3_key_num_pane_t

0x9362,	// (0x00016fd8) bg_button_pane_cp19

0x9014,	// (0x00016c8a) cell_dia3_key0_fun_pane_g1

0x9362,	// (0x00016fd8) bg_button_pane_cp20

0x901c,	// (0x00016c92) cell_dia3_key1_fun_pane_g1

0x9024,	// (0x00016c9a) area_left_week_number_pane

0x902d,	// (0x00016ca3) area_top_day_name_pane

0x9036,	// (0x00016cac) frame_month_view_pane

0x9042,	// (0x00016cb8) grid_month_view_pane

0x904c,	// (0x00016cc2) cell_top_day_name_pane_ParamLimits

0x904c,	// (0x00016cc2) cell_top_day_name_pane

0x9066,	// (0x00016cdc) cell_area_left_week_number_pane_ParamLimits

0x9066,	// (0x00016cdc) cell_area_left_week_number_pane

0x907c,	// (0x00016cf2) cell_month_view_pane_ParamLimits

0x907c,	// (0x00016cf2) cell_month_view_pane

0xf01b,	// (0x0001cc91) frm_month_g1

0x909b,	// (0x00016d11) frm_month_g2

0x90a5,	// (0x00016d1b) frm_month_g3

0x90af,	// (0x00016d25) frm_month_g4

0x90b9,	// (0x00016d2f) frm_month_g5

0x90c3,	// (0x00016d39) frm_month_g6

0x90cf,	// (0x00016d45) frm_month_g7

0xf024,	// (0x0001cc9a) frm_month_g8

0x90db,	// (0x00016d51) frm_month_g9

0x90e4,	// (0x00016d5a) frm_month_g10

0x90ed,	// (0x00016d63) frm_month_g11

0x90f6,	// (0x00016d6c) frm_month_g12

0x90ff,	// (0x00016d75) frm_month_g13

0x9108,	// (0x00016d7e) frm_month_g14

0x9111,	// (0x00016d87) frm_month_g15

0x911c,	// (0x00016d92) frm_month_g16

0x000f,

0xff0d,	// (0x0001db83) frm_month_g

0x9127,	// (0x00016d9d) cell_top_day_name_pane_t1

0x9136,	// (0x00016dac) cell_area_left_week_number_pane_g1

0x9127,	// (0x00016d9d) cell_area_left_week_number_pane_t1

0xc21a,	// (0x00019e90) cell_month_view_pane_g1

0x913e,	// (0x00016db4) cell_month_view_pane_t1

0x9362,	// (0x00016fd8) main_fps_pane

0xe3b7,	// (0x0001c02d) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3b7,	// (0x0001c02d) cmail_ddmenu_btn02_pane_cp1

0xe3d3,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3d3,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp2

0x89db,	// (0x00016651) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x89db,	// (0x00016651) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0001daab) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0001daab) cmail_ddmenu_btn02_pane_g

0x89f9,	// (0x0001666f) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x89f9,	// (0x0001666f) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0001dab0) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0001dab0) cmail_ddmenu_btn02_pane_t

0x914d,	// (0x00016dc3) fps_text_pane_ParamLimits

0x914d,	// (0x00016dc3) fps_text_pane

0x9164,	// (0x00016dda) main_fps_pane_g1_ParamLimits

0x9164,	// (0x00016dda) main_fps_pane_g1

0x917c,	// (0x00016df2) wait_bar_pane_cp010_ParamLimits

0x917c,	// (0x00016df2) wait_bar_pane_cp010

0x918f,	// (0x00016e05) fps_text_pane_t1_ParamLimits

0x918f,	// (0x00016e05) fps_text_pane_t1

0xed25,	// (0x0001c99b) cam4_image_uncrop_pane_g1

0xed2e,	// (0x0001c9a4) cam4_image_uncrop_pane_g2

0x5f1b,	// (0x00013b91) cam4_image_uncrop_pane_g3

0x5f24,	// (0x00013b9a) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0001d583) cam4_image_uncrop_pane_g

0x9002,	// (0x00016c78) dia3_listrow_pane_ParamLimits

0x9362,	// (0x00016fd8) main_phob2_pane

0x84f1,	// (0x00016167) cell_tport_appsw_pane_cp02_ParamLimits

0x84f1,	// (0x00016167) cell_tport_appsw_pane_cp02

0x8505,	// (0x0001617b) cell_tport_appsw_pane_cp03_ParamLimits

0x8505,	// (0x0001617b) cell_tport_appsw_pane_cp03

0x9362,	// (0x00016fd8) phob2_contact_card_pane

0x9362,	// (0x00016fd8) phob2_listscroll_pane

0xf02d,	// (0x0001cca3) phob2_list_pane

0xf035,	// (0x0001ccab) scroll_pane_cp034

0x91a7,	// (0x00016e1d) phob2_cc_data_pane_ParamLimits

0x91a7,	// (0x00016e1d) phob2_cc_data_pane

0x91c8,	// (0x00016e3e) phob2_cc_listscroll_pane_ParamLimits

0x91c8,	// (0x00016e3e) phob2_cc_listscroll_pane

0x91ea,	// (0x00016e60) list_double_large_graphic_phob2_pane_ParamLimits

0x91ea,	// (0x00016e60) list_double_large_graphic_phob2_pane

0x91ff,	// (0x00016e75) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x91ff,	// (0x00016e75) list_double_large_graphic_phob2_pane_g1

0x920c,	// (0x00016e82) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x920c,	// (0x00016e82) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001dba4) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001dba4) list_double_large_graphic_phob2_pane_g

0x9218,	// (0x00016e8e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x9218,	// (0x00016e8e) list_double_large_graphic_phob2_pane_t1

0x922d,	// (0x00016ea3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x922d,	// (0x00016ea3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001dba9) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001dba9) list_double_large_graphic_phob2_pane_t

0x9362,	// (0x00016fd8) list_highlight_pane_cp024

0xf03d,	// (0x0001ccb3) phob2_cc_button_pane

0x923f,	// (0x00016eb5) phob2_cc_data_pane_g1_ParamLimits

0x923f,	// (0x00016eb5) phob2_cc_data_pane_g1

0x9255,	// (0x00016ecb) phob2_cc_data_pane_g2_ParamLimits

0x9255,	// (0x00016ecb) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001dbae) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001dbae) phob2_cc_data_pane_g

0x9269,	// (0x00016edf) phob2_cc_data_pane_t1_ParamLimits

0x9269,	// (0x00016edf) phob2_cc_data_pane_t1

0x9283,	// (0x00016ef9) phob2_cc_data_pane_t2_ParamLimits

0x9283,	// (0x00016ef9) phob2_cc_data_pane_t2

0x929d,	// (0x00016f13) phob2_cc_data_pane_t3_ParamLimits

0x929d,	// (0x00016f13) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001dbb3) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001dbb3) phob2_cc_data_pane_t

0xf045,	// (0x0001ccbb) phob2_cc_list_pane_ParamLimits

0xf045,	// (0x0001ccbb) phob2_cc_list_pane

0xd350,	// (0x0001afc6) scroll_pane_cp035_ParamLimits

0xd350,	// (0x0001afc6) scroll_pane_cp035

0x93d3,	// (0x00017049) bg_button_pane_cp033

0xf051,	// (0x0001ccc7) phob2_cc_button_pane_g1

0xf05d,	// (0x0001ccd3) phob2_cc_button_pane_t1

0xf072,	// (0x0001cce8) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001dbba) phob2_cc_button_pane_t

0x92b7,	// (0x00016f2d) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x92b7,	// (0x00016f2d) list_double_large_graphic_phob2_cc_pane

0x92cc,	// (0x00016f42) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x92cc,	// (0x00016f42) list_double_large_graphic_phob2_cc_pane_g1

0x92d8,	// (0x00016f4e) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x92d8,	// (0x00016f4e) list_double_large_graphic_phob2_cc_pane_g2

0x92e4,	// (0x00016f5a) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x92e4,	// (0x00016f5a) list_double_large_graphic_phob2_cc_pane_g3

0x92f0,	// (0x00016f66) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x92f0,	// (0x00016f66) list_double_large_graphic_phob2_cc_pane_g4

0x92fc,	// (0x00016f72) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x92fc,	// (0x00016f72) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001dbbf) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001dbbf) list_double_large_graphic_phob2_cc_pane_g

0x9308,	// (0x00016f7e) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9308,	// (0x00016f7e) list_double_large_graphic_phob2_cc_pane_t1

0x9331,	// (0x00016fa7) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9331,	// (0x00016fa7) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001dbca) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001dbca) list_double_large_graphic_phob2_cc_pane_t

0xf084,	// (0x0001ccfa) list_highlight_pane_cp025_ParamLimits

0xf084,	// (0x0001ccfa) list_highlight_pane_cp025

0x93d3,	// (0x00017049) bg_button_pane_cp033_ParamLimits

0xf051,	// (0x0001ccc7) phob2_cc_button_pane_g1_ParamLimits

0xf05d,	// (0x0001ccd3) phob2_cc_button_pane_t1_ParamLimits

0xf072,	// (0x0001cce8) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001dbba) phob2_cc_button_pane_t_ParamLimits

0x0cfb,	// (0x0000e971) popup_wgtman_window

0xd0e8,	// (0x0001ad5e) scroll_pane_cp038

0x8de5,	// (0x00016a5b) wgtman_btn_pane_cp_01_ParamLimits

0x8de5,	// (0x00016a5b) wgtman_btn_pane_cp_01

0xf092,	// (0x0001cd08) wgtman_content_pane

0xf09b,	// (0x0001cd11) wgtman_heading_pane

0x9362,	// (0x00016fd8) bg_heading_pane_cp02

0xf0a4,	// (0x0001cd1a) wgtman_heading_pane_g1

0xf0ac,	// (0x0001cd22) wgtman_heading_pane_t1

0xf0ba,	// (0x0001cd30) scroll_pane_cp036

0xf0c2,	// (0x0001cd38) wgtman_list_pane

0xed39,	// (0x0001c9af) wgtman_list_pane_t1_ParamLimits

0xed39,	// (0x0001c9af) wgtman_list_pane_t1

0xcee3,	// (0x0001ab59) cam4_grid_pane

0x6d0d,	// (0x00014983) bg_button_pane_cp015_ParamLimits

0x6d21,	// (0x00014997) bg_button_pane_cp016_ParamLimits

0x6d34,	// (0x000149aa) bg_button_pane_cp017_ParamLimits

0x6d8c,	// (0x00014a02) popup_vitu2_query_window_g3_ParamLimits

0x6d8c,	// (0x00014a02) popup_vitu2_query_window_g3

0x6e49,	// (0x00014abf) popup_vitu2_query_window_t6_ParamLimits

0x6e49,	// (0x00014abf) popup_vitu2_query_window_t6

0x6e74,	// (0x00014aea) popup_vitu2_query_window_t7_ParamLimits

0x6e74,	// (0x00014aea) popup_vitu2_query_window_t7

0xed25,	// (0x0001c99b) cam4_grid_pane_g1

0xed2e,	// (0x0001c9a4) cam4_grid_pane_g2

0xf0ca,	// (0x0001cd40) cam4_grid_pane_g3

0xf0d3,	// (0x0001cd49) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001dbcf) cam4_grid_pane_g

0x19c6,	// (0x0000f63c) aid_placing_vt_slider_lsc_ParamLimits

0x1cb6,	// (0x0000f92c) vidtel_button_pane_ParamLimits

0x1cb6,	// (0x0000f92c) vidtel_button_pane

0x9362,	// (0x00016fd8) bg_button_pane_cp034

0x935a,	// (0x00016fd0) vidtel_button_pane_g1

0xf0de,	// (0x0001cd54) vidtel_button_pane_t1

0xd233,	// (0x0001aea9) aid_size_vtel_slider_touch

0xd350,	// (0x0001afc6) scroll_pane_cp039

0xddd5,	// (0x0001ba4b) ncim_query_button_pane_cp01_ParamLimits

0xddf4,	// (0x0001ba6a) ncimui_query_pane_g1_ParamLimits

0x93d3,	// (0x00017049) input_focus_pane_cp012_ParamLimits

0xde19,	// (0x0001ba8f) ncim_query_entry_pane_t1_ParamLimits

0xd350,	// (0x0001afc6) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Normal

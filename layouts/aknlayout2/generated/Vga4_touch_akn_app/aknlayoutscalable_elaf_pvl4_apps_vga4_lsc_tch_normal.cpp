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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0000dc85 };

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
0x0adf,	// (0x0000e764) Screen

0x0aeb,	// (0x0000e770) application_window

0x0b27,	// (0x0000e7ac) area_bottom_pane_ParamLimits

0x0b27,	// (0x0000e7ac) area_bottom_pane

0x0b60,	// (0x0000e7e5) area_top_pane_ParamLimits

0x0b60,	// (0x0000e7e5) area_top_pane

0x94ec,	// (0x00017171) call_video_uplink_pane_ParamLimits

0x94ec,	// (0x00017171) call_video_uplink_pane

0x0bd5,	// (0x0000e85a) main_pane_ParamLimits

0x0bd5,	// (0x0000e85a) main_pane

0xbe6d,	// (0x00019af2) context_pane

0x3e09,	// (0x00011a8e) navi_pane

0x3e39,	// (0x00011abe) popup_cale_events_window_ParamLimits

0x3e39,	// (0x00011abe) popup_cale_events_window

0xbe80,	// (0x00019b05) popup_mup_playback_window

0x3e51,	// (0x00011ad6) signal_pane

0x9c73,	// (0x000178f8) main_browser_pane

0xa9af,	// (0x00018634) main_burst_pane

0x3b0b,	// (0x00011790) main_calc_pane

0xa9af,	// (0x00018634) main_cale_day_pane

0x9c73,	// (0x000178f8) main_cale_month_pane

0xa9af,	// (0x00018634) main_cale_week_pane

0xa9af,	// (0x00018634) main_call_pane

0x992b,	// (0x000175b0) main_call_poc_pane

0xa9af,	// (0x00018634) main_camera_pane

0xa9af,	// (0x00018634) main_chi_dic_pane

0xa851,	// (0x000184d6) main_clock_pane

0x992b,	// (0x000175b0) main_fmradio_pane

0xa9af,	// (0x00018634) main_graph_messa_pane

0x992b,	// (0x000175b0) main_help_pane

0x9c73,	// (0x000178f8) main_im_pane

0x9b86,	// (0x0001780b) main_image_pane_ParamLimits

0x9b86,	// (0x0001780b) main_image_pane

0x992b,	// (0x000175b0) main_location2_pane

0xa9af,	// (0x00018634) main_location_pane

0x992b,	// (0x000175b0) main_messa_pane

0x992b,	// (0x000175b0) main_mp2_pane

0xa9af,	// (0x00018634) main_mp_pane

0x992b,	// (0x000175b0) main_msg_pane

0x992b,	// (0x000175b0) main_mup_eq_pane

0x992b,	// (0x000175b0) main_mup_pane

0xa9af,	// (0x00018634) main_notes_pane

0x992b,	// (0x000175b0) main_pec_pane

0x992b,	// (0x000175b0) main_phob_pane

0x992b,	// (0x000175b0) main_pinb_pane

0x992b,	// (0x000175b0) main_postcard_pane

0x992b,	// (0x000175b0) main_qdial_pane

0xa9af,	// (0x00018634) main_skin_pane

0x992b,	// (0x000175b0) main_smil2_pane

0xa9af,	// (0x00018634) main_smil_pane

0xa9af,	// (0x00018634) main_video_pane

0xa9af,	// (0x00018634) main_video_tele_pane

0x9b86,	// (0x0001780b) main_viewer_pane_ParamLimits

0x9b86,	// (0x0001780b) main_viewer_pane

0xa9af,	// (0x00018634) main_vorec_pane

0x3b61,	// (0x000117e6) popup_blid_sat_info_window_ParamLimits

0x3b61,	// (0x000117e6) popup_blid_sat_info_window

0x3bc5,	// (0x0001184a) popup_dyc_status_message_window_ParamLimits

0x3bc5,	// (0x0001184a) popup_dyc_status_message_window

0x3bdf,	// (0x00011864) popup_grid_large_graphic_window_ParamLimits

0x3bdf,	// (0x00011864) popup_grid_large_graphic_window

0x3ca1,	// (0x00011926) popup_loc_request_window_ParamLimits

0x3ca1,	// (0x00011926) popup_loc_request_window

0x3ddd,	// (0x00011a62) popup_wml_address_window_ParamLimits

0x3ddd,	// (0x00011a62) popup_wml_address_window

0x3949,	// (0x000115ce) call_muted_g1

0x35da,	// (0x0001125f) popup_call_audio_conf_window_ParamLimits

0x35da,	// (0x0001125f) popup_call_audio_conf_window

0x3959,	// (0x000115de) popup_call_audio_first_window_ParamLimits

0x3959,	// (0x000115de) popup_call_audio_first_window

0x39cf,	// (0x00011654) popup_call_audio_in_window_ParamLimits

0x39cf,	// (0x00011654) popup_call_audio_in_window

0x3a0b,	// (0x00011690) popup_call_audio_out_window_ParamLimits

0x3a0b,	// (0x00011690) popup_call_audio_out_window

0x3a45,	// (0x000116ca) popup_call_audio_second_window_ParamLimits

0x3a45,	// (0x000116ca) popup_call_audio_second_window

0x3a9b,	// (0x00011720) popup_call_audio_wait_window_ParamLimits

0x3a9b,	// (0x00011720) popup_call_audio_wait_window

0x3ad0,	// (0x00011755) popup_number_entry_window_ParamLimits

0x3ad0,	// (0x00011755) popup_number_entry_window

0x9518,	// (0x0001719d) bg_popup_call_pane_cp05_ParamLimits

0x9518,	// (0x0001719d) bg_popup_call_pane_cp05

0x9538,	// (0x000171bd) popup_number_entry_window_t1

0x954b,	// (0x000171d0) popup_number_entry_window_t2

0x955d,	// (0x000171e2) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0001cd71) popup_number_entry_window_t

0x956f,	// (0x000171f4) text_title_cp2

0x9582,	// (0x00017207) bg_popup_call_pane_cp_ParamLimits

0x9582,	// (0x00017207) bg_popup_call_pane_cp

0x9590,	// (0x00017215) call_thumbnail_pane

0x9598,	// (0x0001721d) popup_call_audio_in_window_g1_ParamLimits

0x9598,	// (0x0001721d) popup_call_audio_in_window_g1

0x95a4,	// (0x00017229) popup_call_audio_in_window_g2_ParamLimits

0x95a4,	// (0x00017229) popup_call_audio_in_window_g2

0x95b0,	// (0x00017235) popup_call_audio_in_window_g3_ParamLimits

0x95b0,	// (0x00017235) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0001cd7a) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0001cd7a) popup_call_audio_in_window_g

0x95bc,	// (0x00017241) popup_call_audio_in_window_t1_ParamLimits

0x95bc,	// (0x00017241) popup_call_audio_in_window_t1

0x95d8,	// (0x0001725d) popup_call_audio_in_window_t2_ParamLimits

0x95d8,	// (0x0001725d) popup_call_audio_in_window_t2

0x95f4,	// (0x00017279) popup_call_audio_in_window_t3_ParamLimits

0x95f4,	// (0x00017279) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0001cd81) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0001cd81) popup_call_audio_in_window_t

0x9582,	// (0x00017207) bg_popup_call_pane_cp01_ParamLimits

0x9582,	// (0x00017207) bg_popup_call_pane_cp01

0x9590,	// (0x00017215) call_thumbnail_pane_cp02

0x9607,	// (0x0001728c) call_type_pane_cp022

0x960f,	// (0x00017294) popup_call_audio_out_window_g1_ParamLimits

0x960f,	// (0x00017294) popup_call_audio_out_window_g1

0x9621,	// (0x000172a6) popup_call_audio_out_window_g2_ParamLimits

0x9621,	// (0x000172a6) popup_call_audio_out_window_g2

0x962d,	// (0x000172b2) popup_call_audio_out_window_g3_ParamLimits

0x962d,	// (0x000172b2) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0001cd88) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0001cd88) popup_call_audio_out_window_g

0x963f,	// (0x000172c4) popup_call_audio_out_window_t1_ParamLimits

0x963f,	// (0x000172c4) popup_call_audio_out_window_t1

0x9657,	// (0x000172dc) popup_call_audio_out_window_t2_ParamLimits

0x9657,	// (0x000172dc) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0001cd8f) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0001cd8f) popup_call_audio_out_window_t

0x966c,	// (0x000172f1) bg_popup_call_pane_ParamLimits

0x966c,	// (0x000172f1) bg_popup_call_pane

0x0d88,	// (0x0000ea0d) call_thumbnail_pane_cp_ParamLimits

0x0d88,	// (0x0000ea0d) call_thumbnail_pane_cp

0x96f0,	// (0x00017375) call_type_pane_cp01_ParamLimits

0x96f0,	// (0x00017375) call_type_pane_cp01

0x9734,	// (0x000173b9) popup_call_audio_first_window_g1_ParamLimits

0x9734,	// (0x000173b9) popup_call_audio_first_window_g1

0x9780,	// (0x00017405) popup_call_audio_first_window_g2_ParamLimits

0x9780,	// (0x00017405) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0001cd94) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0001cd94) popup_call_audio_first_window_g

0x97c4,	// (0x00017449) popup_call_audio_first_window_t1_ParamLimits

0x97c4,	// (0x00017449) popup_call_audio_first_window_t1

0x9870,	// (0x000174f5) popup_call_audio_first_window_t4_ParamLimits

0x9870,	// (0x000174f5) popup_call_audio_first_window_t4

0x98fc,	// (0x00017581) popup_call_audio_first_window_t5_ParamLimits

0x98fc,	// (0x00017581) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0001cd99) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0001cd99) popup_call_audio_first_window_t

0x992b,	// (0x000175b0) bg_popup_call_pane_cp02

0x9935,	// (0x000175ba) call_type_pane_cp023

0x993d,	// (0x000175c2) popup_call_audio_wait_window_g1

0x9945,	// (0x000175ca) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001cda0) popup_call_audio_wait_window_g

0x994d,	// (0x000175d2) popup_call_audio_wait_window_t3

0x995b,	// (0x000175e0) bg_popup_call_pane_cp03_ParamLimits

0x995b,	// (0x000175e0) bg_popup_call_pane_cp03

0x99bb,	// (0x00017640) call_thumbnail_pane_cp011_ParamLimits

0x99bb,	// (0x00017640) call_thumbnail_pane_cp011

0x99c7,	// (0x0001764c) call_type_pane_cp034_ParamLimits

0x99c7,	// (0x0001764c) call_type_pane_cp034

0x9a03,	// (0x00017688) popup_call_audio_second_window_g1_ParamLimits

0x9a03,	// (0x00017688) popup_call_audio_second_window_g1

0x9a3f,	// (0x000176c4) popup_call_audio_second_window_g2_ParamLimits

0x9a3f,	// (0x000176c4) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0001cda5) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0001cda5) popup_call_audio_second_window_g

0x9a7b,	// (0x00017700) popup_call_audio_second_window_t1_ParamLimits

0x9a7b,	// (0x00017700) popup_call_audio_second_window_t1

0x9afc,	// (0x00017781) popup_call_audio_second_window_t2_ParamLimits

0x9afc,	// (0x00017781) popup_call_audio_second_window_t2

0x9b32,	// (0x000177b7) popup_call_audio_second_window_t3_ParamLimits

0x9b32,	// (0x000177b7) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0001cdaa) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0001cdaa) popup_call_audio_second_window_t

0x992b,	// (0x000175b0) bg_popup_call_pane_cp04

0x9b68,	// (0x000177ed) list_conf_pane

0x9b70,	// (0x000177f5) popup_call_audio_conf_window_t1

0x9b7e,	// (0x00017803) call_thumbnail_pane_g1

0x9b86,	// (0x0001780b) bg_pinb_pane_ParamLimits

0x9b86,	// (0x0001780b) bg_pinb_pane

0x9b94,	// (0x00017819) find_pinb_pane

0x9b9d,	// (0x00017822) listscroll_pinb_pane_ParamLimits

0x9b9d,	// (0x00017822) listscroll_pinb_pane

0x9bac,	// (0x00017831) pinb_bg_pane_g1

0x0dac,	// (0x0000ea31) pinb_bg_pane_g2

0x0db8,	// (0x0000ea3d) pinb_bg_pane_g3

0x0dc4,	// (0x0000ea49) pinb_bg_pane_g4

0x0dd0,	// (0x0000ea55) pinb_bg_pane_g5

0x0ddc,	// (0x0000ea61) pinb_bg_pane_g6

0x0de7,	// (0x0000ea6c) pinb_bg_pane_g7

0x0df2,	// (0x0000ea77) pinb_bg_pane_g8

0x0dfd,	// (0x0000ea82) pinb_bg_pane_g9

0x0e07,	// (0x0000ea8c) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0001cdb1) pinb_bg_pane_g

0x0e24,	// (0x0000eaa9) grid_pinb_pane

0x0e2f,	// (0x0000eab4) list_pinb_pane

0x0e3a,	// (0x0000eabf) scroll_pane_cp01_ParamLimits

0x0e3a,	// (0x0000eabf) scroll_pane_cp01

0x9bb6,	// (0x0001783b) find_pinb_pane_g1_ParamLimits

0x9bb6,	// (0x0001783b) find_pinb_pane_g1

0x9bce,	// (0x00017853) find_pinb_pane_t1

0x9be0,	// (0x00017865) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0001cdcb) find_pinb_pane_t

0x9bf5,	// (0x0001787a) input_focus_pane_cp01_ParamLimits

0x9bf5,	// (0x0001787a) input_focus_pane_cp01

0x0e4c,	// (0x0000ead1) cell_pinb_pane_ParamLimits

0x0e4c,	// (0x0000ead1) cell_pinb_pane

0x0e6e,	// (0x0000eaf3) cell_pinb_pane_g1_ParamLimits

0x0e6e,	// (0x0000eaf3) cell_pinb_pane_g1

0x0e82,	// (0x0000eb07) cell_pinb_pane_g2_ParamLimits

0x0e82,	// (0x0000eb07) cell_pinb_pane_g2

0x9c01,	// (0x00017886) cell_pinb_pane_g3_ParamLimits

0x9c01,	// (0x00017886) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0001cdd0) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0001cdd0) cell_pinb_pane_g

0x992b,	// (0x000175b0) grid_highlight_pane_cp01

0x0e8e,	// (0x0000eb13) list_pinb_item_pane_ParamLimits

0x0e8e,	// (0x0000eb13) list_pinb_item_pane

0x992b,	// (0x000175b0) list_highlight_pane_cp02

0x0ea1,	// (0x0000eb26) list_pinb_item_pane_g1_ParamLimits

0x0ea1,	// (0x0000eb26) list_pinb_item_pane_g1

0x0eae,	// (0x0000eb33) list_pinb_item_pane_g2_ParamLimits

0x0eae,	// (0x0000eb33) list_pinb_item_pane_g2

0x0eba,	// (0x0000eb3f) list_pinb_item_pane_g3_ParamLimits

0x0eba,	// (0x0000eb3f) list_pinb_item_pane_g3

0x0ecb,	// (0x0000eb50) list_pinb_item_pane_g4_ParamLimits

0x0ecb,	// (0x0000eb50) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0001cdd7) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0001cdd7) list_pinb_item_pane_g

0x0ed7,	// (0x0000eb5c) list_pinb_item_pane_t1_ParamLimits

0x0ed7,	// (0x0000eb5c) list_pinb_item_pane_t1

0x0f0c,	// (0x0000eb91) calc_display_pane

0x0f32,	// (0x0000ebb7) calc_paper_pane

0x0f55,	// (0x0000ebda) grid_calc_pane

0x992b,	// (0x000175b0) bg_list_pane_cp01

0x0f83,	// (0x0000ec08) clock_g1

0x0f8b,	// (0x0000ec10) clock_g2

0x0001,

0xf15b,	// (0x0001cde0) clock_g

0x0f93,	// (0x0000ec18) clock_t1_ParamLimits

0x0f93,	// (0x0000ec18) clock_t1

0x0fa8,	// (0x0000ec2d) clock_t2_ParamLimits

0x0fa8,	// (0x0000ec2d) clock_t2

0x0fba,	// (0x0000ec3f) clock_t3_ParamLimits

0x0fba,	// (0x0000ec3f) clock_t3

0x0fcc,	// (0x0000ec51) clock_t4_ParamLimits

0x0fcc,	// (0x0000ec51) clock_t4

0x0fde,	// (0x0000ec63) clock_t5_ParamLimits

0x0fde,	// (0x0000ec63) clock_t5

0x0ff3,	// (0x0000ec78) clock_t6_ParamLimits

0x0ff3,	// (0x0000ec78) clock_t6

0x1005,	// (0x0000ec8a) clock_t7_ParamLimits

0x1005,	// (0x0000ec8a) clock_t7

0x1017,	// (0x0000ec9c) clock_t8_ParamLimits

0x1017,	// (0x0000ec9c) clock_t8

0x102b,	// (0x0000ecb0) clock_t9_ParamLimits

0x102b,	// (0x0000ecb0) clock_t9

0x0008,

0xf160,	// (0x0001cde5) clock_t_ParamLimits

0xf160,	// (0x0001cde5) clock_t

0x9c15,	// (0x0001789a) popup_clock_analogue_window_cp02

0x9c15,	// (0x0001789a) popup_clock_digital_window_cp01

0x9c1d,	// (0x000178a2) listscroll_help_pane

0x992b,	// (0x000175b0) phob_pre_status_pane

0x9c27,	// (0x000178ac) grid_qdial_pane

0x992b,	// (0x000175b0) listscroll_mce_pane

0x9c31,	// (0x000178b6) bg_notes_pane

0x9c3b,	// (0x000178c0) list_notes_pane

0x1041,	// (0x0000ecc6) scroll_pane_cp06

0x9c45,	// (0x000178ca) bg_calc_paper_pane

0x9c59,	// (0x000178de) list_calc_pane

0x9c73,	// (0x000178f8) bg_calc_display_pane

0x104c,	// (0x0000ecd1) calc_display_pane_t1

0x105e,	// (0x0000ece3) calc_display_pane_t2

0x9c7f,	// (0x00017904) calc_display_pane_t3

0x0002,

0xf173,	// (0x0001cdf8) calc_display_pane_t

0x1070,	// (0x0000ecf5) cell_calc_pane_ParamLimits

0x1070,	// (0x0000ecf5) cell_calc_pane

0x9c91,	// (0x00017916) bg_calc_paper_pane_g1

0x9c9d,	// (0x00017922) bg_calc_paper_pane_g2

0x9ca9,	// (0x0001792e) bg_calc_paper_pane_g3

0x9cb5,	// (0x0001793a) bg_calc_paper_pane_g4

0x9cc1,	// (0x00017946) bg_calc_paper_pane_g5

0x10ab,	// (0x0000ed30) bg_calc_paper_pane_g6

0x10be,	// (0x0000ed43) bg_calc_paper_pane_g7

0x10d1,	// (0x0000ed56) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0001cdff) bg_calc_paper_pane_g

0x10e2,	// (0x0000ed67) calc_bg_paper_pane_g9

0x10f3,	// (0x0000ed78) list_calc_item_pane_ParamLimits

0x10f3,	// (0x0000ed78) list_calc_item_pane

0x9ccd,	// (0x00017952) list_calc_item_pane_g1

0x9cda,	// (0x0001795f) list_calc_item_pane_t1_ParamLimits

0x9cda,	// (0x0001795f) list_calc_item_pane_t1

0x1107,	// (0x0000ed8c) list_calc_item_pane_t2_ParamLimits

0x1107,	// (0x0000ed8c) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0001ce10) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0001ce10) list_calc_item_pane_t

0x9cec,	// (0x00017971) cell_calc_pane_g1

0x9cf6,	// (0x0001797b) grid_highlight_pane_cp02

0x9d18,	// (0x0001799d) bg_calc_display_pane_g1

0x9d21,	// (0x000179a6) bg_calc_display_pane_g2

0x9d2b,	// (0x000179b0) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0001ce1a) bg_calc_display_pane_g

0x1139,	// (0x0000edbe) cell_qdial_pane_ParamLimits

0x1139,	// (0x0000edbe) cell_qdial_pane

0x114f,	// (0x0000edd4) cell_qdial_pane_g1_ParamLimits

0x114f,	// (0x0000edd4) cell_qdial_pane_g1

0x1165,	// (0x0000edea) cell_qdial_pane_g2_ParamLimits

0x1165,	// (0x0000edea) cell_qdial_pane_g2

0x9d34,	// (0x000179b9) cell_qdial_pane_g3_ParamLimits

0x9d34,	// (0x000179b9) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0001ce21) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0001ce21) cell_qdial_pane_g

0x118b,	// (0x0000ee10) cell_qdial_pane_t1_ParamLimits

0x118b,	// (0x0000ee10) cell_qdial_pane_t1

0x11a3,	// (0x0000ee28) cell_qdial_pane_t2_ParamLimits

0x11a3,	// (0x0000ee28) cell_qdial_pane_t2

0x11b6,	// (0x0000ee3b) cell_qdial_pane_t3_ParamLimits

0x11b6,	// (0x0000ee3b) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0001ce2a) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0001ce2a) cell_qdial_pane_t

0x992b,	// (0x000175b0) grid_highlight_pane_cp04

0x9d40,	// (0x000179c5) thumbnail_qdial_pane_ParamLimits

0x9d40,	// (0x000179c5) thumbnail_qdial_pane

0x9d9c,	// (0x00017a21) list_help_pane

0x9da5,	// (0x00017a2a) scroll_pane_cp02

0x11c9,	// (0x0000ee4e) help_list_pane_t1_ParamLimits

0x11c9,	// (0x0000ee4e) help_list_pane_t1

0x9dae,	// (0x00017a33) bg_notes_pane_g2

0x9db6,	// (0x00017a3b) bg_notes_pane_g3

0x9dbe,	// (0x00017a43) notes_bg_pane_g1

0x9dc6,	// (0x00017a4b) notes_bg_pane_g4

0x9dce,	// (0x00017a53) notes_bg_pane_g5

0x9dd6,	// (0x00017a5b) notes_bg_pane_g6

0x9dde,	// (0x00017a63) notes_bg_pane_g7

0x9de6,	// (0x00017a6b) notes_bg_pane_g8

0x9dee,	// (0x00017a73) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0001ce48) notes_bg_pane_g

0x11ed,	// (0x0000ee72) list_notes_text_pane_ParamLimits

0x11ed,	// (0x0000ee72) list_notes_text_pane

0x9df6,	// (0x00017a7b) list_notes_text_pane_g1

0x9dff,	// (0x00017a84) list_notes_text_pane_t1

0x9c73,	// (0x000178f8) listscroll_cale_week_pane

0x1221,	// (0x0000eea6) bg_cale_heading_pane

0x9e1e,	// (0x00017aa3) bg_cale_pane_cp01

0x123d,	// (0x0000eec2) cale_week_corner_pane

0x1253,	// (0x0000eed8) cale_week_day_heading_pane

0x126f,	// (0x0000eef4) cale_week_scroll_pane_g1

0x1288,	// (0x0000ef0d) cale_week_scroll_pane_g2

0x1299,	// (0x0000ef1e) cale_week_scroll_pane_g3

0x12aa,	// (0x0000ef2f) cale_week_scroll_pane_g4

0x12bb,	// (0x0000ef40) cale_week_scroll_pane_g5

0x12cc,	// (0x0000ef51) cale_week_scroll_pane_g6

0x12dd,	// (0x0000ef62) cale_week_scroll_pane_g7

0x12ee,	// (0x0000ef73) cale_week_scroll_pane_g8

0x12ff,	// (0x0000ef84) cale_week_scroll_pane_g9

0x1310,	// (0x0000ef95) cale_week_scroll_pane_g10

0x1321,	// (0x0000efa6) cale_week_scroll_pane_g11

0x1332,	// (0x0000efb7) cale_week_scroll_pane_g12

0x1343,	// (0x0000efc8) cale_week_scroll_pane_g13

0x135c,	// (0x0000efe1) cale_week_scroll_pane_g14

0x1375,	// (0x0000effa) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0001ce57) cale_week_scroll_pane_g

0x138e,	// (0x0000f013) cale_week_time_pane

0x139f,	// (0x0000f024) grid_cale_week_pane

0x13ba,	// (0x0000f03f) scroll_pane_cp08

0x13d2,	// (0x0000f057) cell_cale_week_pane_ParamLimits

0x13d2,	// (0x0000f057) cell_cale_week_pane

0x141a,	// (0x0000f09f) cale_week_day_heading_pane_t1

0x142e,	// (0x0000f0b3) cale_week_day_heading_pane_t2

0x1442,	// (0x0000f0c7) cale_week_day_heading_pane_t3

0x1456,	// (0x0000f0db) cale_week_day_heading_pane_t4

0x146a,	// (0x0000f0ef) cale_week_day_heading_pane_t5

0x147e,	// (0x0000f103) cale_week_day_heading_pane_t6

0x1492,	// (0x0000f117) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0001ce76) cale_week_day_heading_pane_t

0x9e49,	// (0x00017ace) bg_cale_side_pane

0x14a6,	// (0x0000f12b) cale_week_time_pane_t1

0x14be,	// (0x0000f143) cale_week_time_pane_t2

0x14d6,	// (0x0000f15b) cale_week_time_pane_t3

0x14ee,	// (0x0000f173) cale_week_time_pane_t4

0x1506,	// (0x0000f18b) cale_week_time_pane_t5

0x151e,	// (0x0000f1a3) cale_week_time_pane_t6

0x1536,	// (0x0000f1bb) cale_week_time_pane_t7

0x1552,	// (0x0000f1d7) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0001ce85) cale_week_time_pane_t

0x1572,	// (0x0000f1f7) cell_cale_week_pane_g2

0x1583,	// (0x0000f208) cell_cale_week_pane_g3_ParamLimits

0x1583,	// (0x0000f208) cell_cale_week_pane_g3

0x9e57,	// (0x00017adc) grid_highlight_pane_cp07

0x9e5f,	// (0x00017ae4) listscroll_gms_pane

0x9e69,	// (0x00017aee) grid_gms_pane

0x9e72,	// (0x00017af7) listscroll_gms_pane_g1

0x9e7a,	// (0x00017aff) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0001ce96) listscroll_gms_pane_g

0x159b,	// (0x0000f220) scroll_pane_cp010

0x15a6,	// (0x0000f22b) cell_gms_pane_ParamLimits

0x15a6,	// (0x0000f22b) cell_gms_pane

0x15c0,	// (0x0000f245) cell_gms_pane_g1

0x9e82,	// (0x00017b07) cell_gms_pane_g2

0x9e8a,	// (0x00017b0f) cell_gms_pane_g3

0x9e93,	// (0x00017b18) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0001ce9b) cell_gms_pane_g

0x9e9c,	// (0x00017b21) grid_highlight_pane_cp09

0x38f1,	// (0x00011576) phob_pre_status_pane_g1

0x38f9,	// (0x0001157e) phob_pre_status_pane_g2

0x3901,	// (0x00011586) phob_pre_status_pane_g3

0x3909,	// (0x0001158e) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0001d28a) phob_pre_status_pane_g

0x3919,	// (0x0001159e) phob_pre_status_pane_t1

0x3929,	// (0x000115ae) phob_pre_status_pane_t2

0x3939,	// (0x000115be) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0001d295) phob_pre_status_pane_t

0x992b,	// (0x000175b0) bg_list_pane_cp05

0x15d0,	// (0x0000f255) grid_vorec_pane

0x9ea4,	// (0x00017b29) vorec_t1

0x9eb2,	// (0x00017b37) vorec_t2

0x9ec0,	// (0x00017b45) vorec_t3

0x9ece,	// (0x00017b53) vorec_t4

0x9edc,	// (0x00017b61) vorec_t5

0x9eea,	// (0x00017b6f) vorec_t6

0x0006,

0xf21f,	// (0x0001cea4) vorec_t

0x9f06,	// (0x00017b8b) wait_bar_pane_cp01

0x15da,	// (0x0000f25f) cell_vorec_pane_ParamLimits

0x15da,	// (0x0000f25f) cell_vorec_pane

0x9f0e,	// (0x00017b93) cell_vorec_pane_g1

0x992b,	// (0x000175b0) grid_highlight_pane_cp05

0x1605,	// (0x0000f28a) cams_zoom_pane

0x1614,	// (0x0000f299) image_vga_pane

0x162e,	// (0x0000f2b3) main_camera_pane_g1

0x1640,	// (0x0000f2c5) main_camera_pane_g2

0x1650,	// (0x0000f2d5) main_camera_pane_g3

0x1664,	// (0x0000f2e9) main_camera_pane_g4

0x1678,	// (0x0000f2fd) main_camera_pane_g5

0x168c,	// (0x0000f311) main_camera_pane_g6

0x16a0,	// (0x0000f325) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0001ceb3) main_camera_pane_g

0x16b4,	// (0x0000f339) main_camera_pane_t1

0x16ca,	// (0x0000f34f) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0001cec4) main_camera_pane_t

0x1708,	// (0x0000f38d) cams_zoom_pane_cp_ParamLimits

0x1708,	// (0x0000f38d) cams_zoom_pane_cp

0x1730,	// (0x0000f3b5) image_cif_pane_ParamLimits

0x1730,	// (0x0000f3b5) image_cif_pane

0x176b,	// (0x0000f3f0) image_subqcif_pane

0x1775,	// (0x0000f3fa) main_video_pane_g1_ParamLimits

0x1775,	// (0x0000f3fa) main_video_pane_g1

0x1799,	// (0x0000f41e) main_video_pane_g2_ParamLimits

0x1799,	// (0x0000f41e) main_video_pane_g2

0x17cf,	// (0x0000f454) main_video_pane_g3_ParamLimits

0x17cf,	// (0x0000f454) main_video_pane_g3

0x17fd,	// (0x0000f482) main_video_pane_g4_ParamLimits

0x17fd,	// (0x0000f482) main_video_pane_g4

0x182b,	// (0x0000f4b0) main_video_pane_g5_ParamLimits

0x182b,	// (0x0000f4b0) main_video_pane_g5

0x9f24,	// (0x00017ba9) main_video_pane_g6_ParamLimits

0x9f24,	// (0x00017ba9) main_video_pane_g6

0x0006,

0xf244,	// (0x0001cec9) main_video_pane_g_ParamLimits

0xf244,	// (0x0001cec9) main_video_pane_g

0x1854,	// (0x0000f4d9) main_video_pane_t1_ParamLimits

0x1854,	// (0x0000f4d9) main_video_pane_t1

0x9f3e,	// (0x00017bc3) cams_zoom_pane_g1

0x9f47,	// (0x00017bcc) cams_zoom_pane_g2

0x9f50,	// (0x00017bd5) cams_zoom_pane_g3

0x9f59,	// (0x00017bde) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0001ced8) cams_zoom_pane_g

0x18b1,	// (0x0000f536) grid_cams_pane

0x18cb,	// (0x0000f550) linegrid_cams_pane

0x18df,	// (0x0000f564) cell_cams_pane_ParamLimits

0x18df,	// (0x0000f564) cell_cams_pane

0x9f62,	// (0x00017be7) cams_burst_image_pane

0x9f6a,	// (0x00017bef) cell_cams_pane_g1

0x992b,	// (0x000175b0) grid_highlight_pane_cp03

0x9cec,	// (0x00017971) mp_bg_pane_g1

0x992b,	// (0x000175b0) bg_list_pane_cp03

0xbd3f,	// (0x000199c4) bg_mp_pane

0xbd47,	// (0x000199cc) grid_mp_pane

0xbd4f,	// (0x000199d4) media_player_g1

0xbd59,	// (0x000199de) media_player_t1

0xbd67,	// (0x000199ec) media_player_t2

0xbd75,	// (0x000199fa) media_player_t3

0xbd83,	// (0x00019a08) media_player_t4

0xbd91,	// (0x00019a16) media_player_t5

0xbd9f,	// (0x00019a24) media_player_t6

0xbdad,	// (0x00019a32) media_player_t7

0x0006,

0xf5ef,	// (0x0001d274) media_player_t

0xbdbb,	// (0x00019a40) wait_bar_pane_cp02

0xf5d4,	// (0x0001d259) main_usb_pane_t

0x38e8,	// (0x0001156d) cell_mp_pane

0x9cec,	// (0x00017971) cell_mp_pane_g1

0x992b,	// (0x000175b0) grid_highlight_pane_cp06

0xa030,	// (0x00017cb5) grid_skin_colour_pane

0xa038,	// (0x00017cbd) list_highlight_pane_cp03

0x1953,	// (0x0000f5d8) skin_g1

0xa040,	// (0x00017cc5) skin_t1

0xa04f,	// (0x00017cd4) skin_t2

0x0001,

0xf288,	// (0x0001cf0d) skin_t

0x195d,	// (0x0000f5e2) cell_skin_colour_pane_ParamLimits

0x195d,	// (0x0000f5e2) cell_skin_colour_pane

0xa05d,	// (0x00017ce2) cell_skin_colour_pane_g1

0x19d0,	// (0x0000f655) call_video_g1_ParamLimits

0x19d0,	// (0x0000f655) call_video_g1

0x19ec,	// (0x0000f671) call_video_g2_ParamLimits

0x19ec,	// (0x0000f671) call_video_g2

0x0001,

0xf28d,	// (0x0001cf12) call_video_g_ParamLimits

0xf28d,	// (0x0001cf12) call_video_g

0x1a34,	// (0x0000f6b9) call_video_uplink_pane_cp1_ParamLimits

0x1a34,	// (0x0000f6b9) call_video_uplink_pane_cp1

0xa06f,	// (0x00017cf4) call_video_uplink_pane_cp2

0x1ad5,	// (0x0000f75a) video_down_crop_pane_ParamLimits

0x1ad5,	// (0x0000f75a) video_down_crop_pane

0x1bbe,	// (0x0000f843) video_down_pane_ParamLimits

0x1bbe,	// (0x0000f843) video_down_pane

0xa077,	// (0x00017cfc) video_down_subqcif_pane_ParamLimits

0xa077,	// (0x00017cfc) video_down_subqcif_pane

0xa091,	// (0x00017d16) video_down_subqcif_pane_cp_ParamLimits

0xa091,	// (0x00017d16) video_down_subqcif_pane_cp

0xa0b7,	// (0x00017d3c) im_reading_pane_ParamLimits

0xa0b7,	// (0x00017d3c) im_reading_pane

0x1cc7,	// (0x0000f94c) im_writing_pane_ParamLimits

0x1cc7,	// (0x0000f94c) im_writing_pane

0x1ce5,	// (0x0000f96a) im_reading_pane_t1

0xa0d1,	// (0x00017d56) list_im_pane

0xa0e2,	// (0x00017d67) scroll_pane_cp07

0x1d24,	// (0x0000f9a9) im_writing_pane_t1_ParamLimits

0x1d24,	// (0x0000f9a9) im_writing_pane_t1

0xa0fb,	// (0x00017d80) im_writing_pane_t2_ParamLimits

0xa0fb,	// (0x00017d80) im_writing_pane_t2

0x0001,

0xf297,	// (0x0001cf1c) im_writing_pane_t_ParamLimits

0xf297,	// (0x0001cf1c) im_writing_pane_t

0x992b,	// (0x000175b0) input_focus_pane_cp04

0x992b,	// (0x000175b0) input_focus_pane_cp05

0x1d39,	// (0x0000f9be) list_im_single_pane_ParamLimits

0x1d39,	// (0x0000f9be) list_im_single_pane

0x1d52,	// (0x0000f9d7) list_single_im_pane_t1

0x38a8,	// (0x0001152d) blid_accuracy_pane

0x38b0,	// (0x00011535) blid_compass_pane

0x38ba,	// (0x0001153f) main_location_t1

0x38ca,	// (0x0001154f) main_location_t2

0x38da,	// (0x0001155f) main_location_t3

0x0002,

0xf5fe,	// (0x0001d283) main_location_t

0x992b,	// (0x000175b0) aid_levels_location

0x9cec,	// (0x00017971) blid_accuracy_pane_g1

0x9cec,	// (0x00017971) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0001cf7e) blid_accuracy_pane_g

0xa143,	// (0x00017dc8) wml_content_pane

0xa181,	// (0x00017e06) wml_button_pane_ParamLimits

0xa181,	// (0x00017e06) wml_button_pane

0x1d61,	// (0x0000f9e6) wml_list_single_large_pane_ParamLimits

0x1d61,	// (0x0000f9e6) wml_list_single_large_pane

0x1d7a,	// (0x0000f9ff) wml_list_single_medium_pane_ParamLimits

0x1d7a,	// (0x0000f9ff) wml_list_single_medium_pane

0x1d94,	// (0x0000fa19) wml_list_single_small_pane_ParamLimits

0x1d94,	// (0x0000fa19) wml_list_single_small_pane

0xa195,	// (0x00017e1a) wml_selection_box_pane_ParamLimits

0xa195,	// (0x00017e1a) wml_selection_box_pane

0xa1a8,	// (0x00017e2d) wml_list_single_pane_t1

0xa1b7,	// (0x00017e3c) wml_list_single_medium_pane_t1

0xa1c6,	// (0x00017e4b) wml_list_single_large_pane_t1

0xa1d5,	// (0x00017e5a) input_focus_pane_cp02_ParamLimits

0xa1d5,	// (0x00017e5a) input_focus_pane_cp02

0xa1e8,	// (0x00017e6d) wml_selection_box_pane_g1

0xa1f1,	// (0x00017e76) wml_selection_box_pane_t1_ParamLimits

0xa1f1,	// (0x00017e76) wml_selection_box_pane_t1

0x9b86,	// (0x0001780b) bg_wml_button_pane_ParamLimits

0x9b86,	// (0x0001780b) bg_wml_button_pane

0xa209,	// (0x00017e8e) wml_button_pane_g1

0xa211,	// (0x00017e96) wml_button_pane_t1

0xa209,	// (0x00017e8e) wml_button_bg_pane_g1

0xa221,	// (0x00017ea6) wml_button_bg_pane_g2

0xa229,	// (0x00017eae) wml_button_bg_pane_g3

0xa231,	// (0x00017eb6) wml_button_bg_pane_g4

0xa239,	// (0x00017ebe) wml_button_bg_pane_g5

0xa241,	// (0x00017ec6) wml_button_bg_pane_g6

0xa249,	// (0x00017ece) wml_button_bg_pane_g7

0xa251,	// (0x00017ed6) wml_button_bg_pane_g8

0xa259,	// (0x00017ede) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0001cf21) wml_button_bg_pane_g

0x1db3,	// (0x0000fa38) bg_list_pane_cp02

0xa261,	// (0x00017ee6) mce_header_pane_ParamLimits

0xa261,	// (0x00017ee6) mce_header_pane

0xa277,	// (0x00017efc) mce_icon_pane

0xa277,	// (0x00017efc) mce_image_pane

0xa280,	// (0x00017f05) mce_text_pane_ParamLimits

0xa280,	// (0x00017f05) mce_text_pane

0x1dbd,	// (0x0000fa42) scroll_pane_cp03

0xa179,	// (0x00017dfe) scroll_pane_cp04

0xa293,	// (0x00017f18) scroll_pane_cp05_ParamLimits

0xa293,	// (0x00017f18) scroll_pane_cp05

0x1dc7,	// (0x0000fa4c) mce_header_field_pane_ParamLimits

0x1dc7,	// (0x0000fa4c) mce_header_field_pane

0x1de0,	// (0x0000fa65) mce_header_field_pane_2_ParamLimits

0x1de0,	// (0x0000fa65) mce_header_field_pane_2

0x1df6,	// (0x0000fa7b) mce_header_field_pane_3

0x1dfe,	// (0x0000fa83) list_single_mce_message_pane_ParamLimits

0x1dfe,	// (0x0000fa83) list_single_mce_message_pane

0x1e1a,	// (0x0000fa9f) list_single_mce_smart_pane_ParamLimits

0x1e1a,	// (0x0000fa9f) list_single_mce_smart_pane

0xa29f,	// (0x00017f24) input_focus_pane_cp03

0xa2a8,	// (0x00017f2d) list_header_data_pane

0x1e41,	// (0x0000fac6) mce_header_field_pane_t1

0x1e51,	// (0x0000fad6) list_single_mce_header_pane_ParamLimits

0x1e51,	// (0x0000fad6) list_single_mce_header_pane

0xa2b0,	// (0x00017f35) list_single_mce_header_pane_t1

0xa2bf,	// (0x00017f44) list_single_mce_message_pane_g1

0xa2c7,	// (0x00017f4c) list_single_mce_message_pane_t1

0x1e83,	// (0x0000fb08) bg_cale_heading_pane_cp01_ParamLimits

0x1e83,	// (0x0000fb08) bg_cale_heading_pane_cp01

0xa2d5,	// (0x00017f5a) bg_cale_pane_cp02_ParamLimits

0xa2d5,	// (0x00017f5a) bg_cale_pane_cp02

0x1eb6,	// (0x0000fb3b) cale_month_corner_pane

0x1ecc,	// (0x0000fb51) cale_month_day_heading_pane_ParamLimits

0x1ecc,	// (0x0000fb51) cale_month_day_heading_pane

0x1eff,	// (0x0000fb84) cale_month_pane_g1_ParamLimits

0x1eff,	// (0x0000fb84) cale_month_pane_g1

0x1f2b,	// (0x0000fbb0) cale_month_pane_g2_ParamLimits

0x1f2b,	// (0x0000fbb0) cale_month_pane_g2

0x1f4c,	// (0x0000fbd1) cale_month_pane_g3_ParamLimits

0x1f4c,	// (0x0000fbd1) cale_month_pane_g3

0x1f88,	// (0x0000fc0d) cale_month_pane_g4_ParamLimits

0x1f88,	// (0x0000fc0d) cale_month_pane_g4

0x1fc4,	// (0x0000fc49) cale_month_pane_g5_ParamLimits

0x1fc4,	// (0x0000fc49) cale_month_pane_g5

0x2000,	// (0x0000fc85) cale_month_pane_g6_ParamLimits

0x2000,	// (0x0000fc85) cale_month_pane_g6

0x203c,	// (0x0000fcc1) cale_month_pane_g7_ParamLimits

0x203c,	// (0x0000fcc1) cale_month_pane_g7

0x2078,	// (0x0000fcfd) cale_month_pane_g8_ParamLimits

0x2078,	// (0x0000fcfd) cale_month_pane_g8

0x20b4,	// (0x0000fd39) cale_month_pane_g9_ParamLimits

0x20b4,	// (0x0000fd39) cale_month_pane_g9

0x20ea,	// (0x0000fd6f) cale_month_pane_g10_ParamLimits

0x20ea,	// (0x0000fd6f) cale_month_pane_g10

0x2114,	// (0x0000fd99) cale_month_pane_g11_ParamLimits

0x2114,	// (0x0000fd99) cale_month_pane_g11

0x213e,	// (0x0000fdc3) cale_month_pane_g12_ParamLimits

0x213e,	// (0x0000fdc3) cale_month_pane_g12

0x216c,	// (0x0000fdf1) cale_month_pane_g13_ParamLimits

0x216c,	// (0x0000fdf1) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0001cf34) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0001cf34) cale_month_pane_g

0x219a,	// (0x0000fe1f) cale_month_week_pane

0x21ab,	// (0x0000fe30) grid_cale_month_pane_ParamLimits

0x21ab,	// (0x0000fe30) grid_cale_month_pane

0x21d9,	// (0x0000fe5e) cale_month_day_heading_pane_t1

0x2237,	// (0x0000febc) cale_month_day_heading_pane_t2

0x229c,	// (0x0000ff21) cale_month_day_heading_pane_t3

0x2301,	// (0x0000ff86) cale_month_day_heading_pane_t4

0x2366,	// (0x0000ffeb) cale_month_day_heading_pane_t5

0x23cb,	// (0x00010050) cale_month_day_heading_pane_t6

0x2430,	// (0x000100b5) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0001cf4f) cale_month_day_heading_pane_t

0x9e49,	// (0x00017ace) bg_cale_side_pane_cp01

0x2495,	// (0x0001011a) cale_month_week_pane_t1

0x24ac,	// (0x00010131) cale_month_week_pane_t2

0x24c3,	// (0x00010148) cale_month_week_pane_t3

0x24da,	// (0x0001015f) cale_month_week_pane_t4

0x24f1,	// (0x00010176) cale_month_week_pane_t5

0x2508,	// (0x0001018d) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0001cf5e) cale_month_week_pane_t

0x2527,	// (0x000101ac) cell_cale_month_pane_ParamLimits

0x2527,	// (0x000101ac) cell_cale_month_pane

0xa334,	// (0x00017fb9) cell_cale_month_pane_g1

0x25d5,	// (0x0001025a) cell_cale_month_pane_t1_ParamLimits

0x25d5,	// (0x0001025a) cell_cale_month_pane_t1

0x9e57,	// (0x00017adc) grid_highlight_pane_cp08

0x9cec,	// (0x00017971) main_smil_g1

0x25f1,	// (0x00010276) smil_status_pane

0xa340,	// (0x00017fc5) smil_text_pane

0xbc5d,	// (0x000198e2) bg_popup_call3_rect_pane_g8

0xbc65,	// (0x000198ea) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0001d217) bg_popup_call3_rect_pane_g

0xbefa,	// (0x00019b7f) smil_status_volume_pane_g1

0xa34a,	// (0x00017fcf) smil_status_pane_t1

0xbf2d,	// (0x00019bb2) volume_smil_pane

0xa361,	// (0x00017fe6) list_smil_text_pane

0x2606,	// (0x0001028b) scroll_pane_cp011

0x2611,	// (0x00010296) smil_text_list_pane_t1_ParamLimits

0x2611,	// (0x00010296) smil_text_list_pane_t1

0xa36b,	// (0x00017ff0) aid_volume_smil_ParamLimits

0xa36b,	// (0x00017ff0) aid_volume_smil

0x9cec,	// (0x00017971) smil_volume_pane_g1

0x9cec,	// (0x00017971) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0001cf7e) smil_volume_pane_g

0x9c73,	// (0x000178f8) listscroll_cale_day_pane

0xa38d,	// (0x00018012) bg_cale_pane

0xa3a5,	// (0x0001802a) list_cale_pane

0xa3b6,	// (0x0001803b) scroll_pane_cp09

0xa3c7,	// (0x0001804c) cale_bg_pane_g1

0xa3cf,	// (0x00018054) cale_bg_pane_g2

0xa3d7,	// (0x0001805c) cale_bg_pane_g3

0xa3df,	// (0x00018064) cale_bg_pane_g4

0xa3e7,	// (0x0001806c) cale_bg_pane_g5

0xa3ef,	// (0x00018074) cale_bg_pane_g6

0xa3f7,	// (0x0001807c) cale_bg_pane_g7

0xa3ff,	// (0x00018084) cale_bg_pane_g8

0xa407,	// (0x0001808c) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0001cf83) cale_bg_pane_g

0x2666,	// (0x000102eb) list_cale_time_pane_ParamLimits

0x2666,	// (0x000102eb) list_cale_time_pane

0x267b,	// (0x00010300) list_cale_time_pane_g1_ParamLimits

0x267b,	// (0x00010300) list_cale_time_pane_g1

0xa40f,	// (0x00018094) list_cale_time_pane_g2_ParamLimits

0xa40f,	// (0x00018094) list_cale_time_pane_g2

0x2687,	// (0x0001030c) list_cale_time_pane_g3_ParamLimits

0x2687,	// (0x0001030c) list_cale_time_pane_g3

0x2695,	// (0x0001031a) list_cale_time_pane_g4_ParamLimits

0x2695,	// (0x0001031a) list_cale_time_pane_g4

0x26a3,	// (0x00010328) list_cale_time_pane_g5_ParamLimits

0x26a3,	// (0x00010328) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0001cf96) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0001cf96) list_cale_time_pane_g

0x26b1,	// (0x00010336) list_cale_time_pane_t1_ParamLimits

0x26b1,	// (0x00010336) list_cale_time_pane_t1

0x26d9,	// (0x0001035e) list_cale_time_pane_t2_ParamLimits

0x26d9,	// (0x0001035e) list_cale_time_pane_t2

0x2a4f,	// (0x000106d4) aid_blid_cardinal_pane

0x2a91,	// (0x00010716) compass_pane_t4

0x2701,	// (0x00010386) list_cale_time_pane_t4_ParamLimits

0x2701,	// (0x00010386) list_cale_time_pane_t4

0x2a9f,	// (0x00010724) compass_pane_t5

0x2aaf,	// (0x00010734) compass_pane_t6

0x2abd,	// (0x00010742) compass_pane_t7

0xa901,	// (0x00018586) navi_pane_cc_t1

0xaa68,	// (0x000186ed) aid_phob_thumbnail_center_pane

0x326e,	// (0x00010ef3) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0001cfa3) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0001cfa3) list_cale_time_pane_t

0x9582,	// (0x00017207) bg_popup_window_pane_cp02_ParamLimits

0x9582,	// (0x00017207) bg_popup_window_pane_cp02

0xa429,	// (0x000180ae) heading_pane_cp01_ParamLimits

0xa429,	// (0x000180ae) heading_pane_cp01

0xa435,	// (0x000180ba) loc_req_pane_ParamLimits

0xa435,	// (0x000180ba) loc_req_pane

0xa445,	// (0x000180ca) loc_type_pane_ParamLimits

0xa445,	// (0x000180ca) loc_type_pane

0xa457,	// (0x000180dc) loc_type_pane_t1_ParamLimits

0xa457,	// (0x000180dc) loc_type_pane_t1

0xa469,	// (0x000180ee) loc_type_pane_t2_ParamLimits

0xa469,	// (0x000180ee) loc_type_pane_t2

0xa47b,	// (0x00018100) loc_type_pane_t3_ParamLimits

0xa47b,	// (0x00018100) loc_type_pane_t3

0x0002,

0xf325,	// (0x0001cfaa) loc_type_pane_t_ParamLimits

0xf325,	// (0x0001cfaa) loc_type_pane_t

0xa48d,	// (0x00018112) list_loc_req_pane

0xa497,	// (0x0001811c) scroll_pane_cp012

0x2729,	// (0x000103ae) list_single_loc_request_popup_menu_pane_ParamLimits

0x2729,	// (0x000103ae) list_single_loc_request_popup_menu_pane

0xa4a2,	// (0x00018127) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa4a2,	// (0x00018127) list_single_loc_request_popup_menu_pane_g1

0xa4ae,	// (0x00018133) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa4ae,	// (0x00018133) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0001cfb1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0001cfb1) list_single_loc_request_popup_menu_pane_g

0xa4ba,	// (0x0001813f) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa4ba,	// (0x0001813f) list_single_loc_request_popup_menu_pane_t1

0x9b86,	// (0x0001780b) bg_popup_window_pane_cp03_ParamLimits

0x9b86,	// (0x0001780b) bg_popup_window_pane_cp03

0xa4d0,	// (0x00018155) heading_loc_req_pane_ParamLimits

0xa4d0,	// (0x00018155) heading_loc_req_pane

0x2736,	// (0x000103bb) popup_dyc_status_message_window_g1_ParamLimits

0x2736,	// (0x000103bb) popup_dyc_status_message_window_g1

0x274a,	// (0x000103cf) popup_dyc_status_message_window_t1_ParamLimits

0x274a,	// (0x000103cf) popup_dyc_status_message_window_t1

0x275f,	// (0x000103e4) popup_dyc_status_message_window_t2_ParamLimits

0x275f,	// (0x000103e4) popup_dyc_status_message_window_t2

0x2774,	// (0x000103f9) popup_dyc_status_message_window_t3_ParamLimits

0x2774,	// (0x000103f9) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0001cfb6) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0001cfb6) popup_dyc_status_message_window_t

0x992b,	// (0x000175b0) bg_heading_pane_cp01

0xa4dc,	// (0x00018161) heading_loc_req_pane_g1

0xa4e4,	// (0x00018169) heading_loc_req_pane_g2

0xa4ec,	// (0x00018171) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0001cfbd) heading_loc_req_pane_g

0xa4f4,	// (0x00018179) heading_loc_req_pane_t1

0xa57b,	// (0x00018200) bg_popup_sub_pane_cp01_ParamLimits

0xa57b,	// (0x00018200) bg_popup_sub_pane_cp01

0xa589,	// (0x0001820e) popup_cale_events_window_g1_ParamLimits

0xa589,	// (0x0001820e) popup_cale_events_window_g1

0xa5a9,	// (0x0001822e) popup_cale_events_window_g2_ParamLimits

0xa5a9,	// (0x0001822e) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0001cff1) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0001cff1) popup_cale_events_window_g

0xa5c9,	// (0x0001824e) popup_cale_events_window_t1_ParamLimits

0xa5c9,	// (0x0001824e) popup_cale_events_window_t1

0xa5db,	// (0x00018260) popup_cale_events_window_t2_ParamLimits

0xa5db,	// (0x00018260) popup_cale_events_window_t2

0xa619,	// (0x0001829e) popup_cale_events_window_t3_ParamLimits

0xa619,	// (0x0001829e) popup_cale_events_window_t3

0xa653,	// (0x000182d8) popup_cale_events_window_t4_ParamLimits

0xa653,	// (0x000182d8) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0001cff6) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0001cff6) popup_cale_events_window_t

0x2802,	// (0x00010487) call_type_pane

0x2812,	// (0x00010497) popup_call_status_window_g1

0x2826,	// (0x000104ab) popup_call_status_window_g2

0x283a,	// (0x000104bf) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0001cfff) popup_call_status_window_g

0xa689,	// (0x0001830e) call_type_pane_g1

0xa692,	// (0x00018317) call_type_pane_g2

0x0001,

0xf381,	// (0x0001d006) call_type_pane_g

0x992b,	// (0x000175b0) bg_popup_sub_pane_cp02

0xa69b,	// (0x00018320) listscroll_popup_wml_pane

0xa6a3,	// (0x00018328) list_wml_pane

0xa6ad,	// (0x00018332) scroll_pane_cp013

0xa6b8,	// (0x0001833d) list_single_graphic_popup_wml_pane_ParamLimits

0xa6b8,	// (0x0001833d) list_single_graphic_popup_wml_pane

0x9cec,	// (0x00017971) list_single_graphic_popup_wml_pane_g1

0xa6cc,	// (0x00018351) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0001d00b) list_single_graphic_popup_wml_pane_g

0xa6d4,	// (0x00018359) list_single_graphic_popup_wml_pane_t1

0xa6ea,	// (0x0001836f) aid_call_pane

0x9b7e,	// (0x00017803) popup_clock_analogue_window_g1

0x9b7e,	// (0x00017803) popup_clock_analogue_window_g2

0xa6f2,	// (0x00018377) popup_clock_analogue_window_g3

0xa6f2,	// (0x00018377) popup_clock_analogue_window_g4

0x9cec,	// (0x00017971) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0001d010) popup_clock_analogue_window_g

0xa6fa,	// (0x0001837f) popup_clock_analogue_window_t1

0xa708,	// (0x0001838d) clock_digital_number_pane_ParamLimits

0xa708,	// (0x0001838d) clock_digital_number_pane

0xa714,	// (0x00018399) clock_digital_number_pane_cp02_ParamLimits

0xa714,	// (0x00018399) clock_digital_number_pane_cp02

0xa720,	// (0x000183a5) clock_digital_number_pane_cp03_ParamLimits

0xa720,	// (0x000183a5) clock_digital_number_pane_cp03

0xa72c,	// (0x000183b1) clock_digital_number_pane_cp04_ParamLimits

0xa72c,	// (0x000183b1) clock_digital_number_pane_cp04

0xa738,	// (0x000183bd) clock_digital_separator_pane_ParamLimits

0xa738,	// (0x000183bd) clock_digital_separator_pane

0xa744,	// (0x000183c9) popup_clock_digital_window_t1

0x9cec,	// (0x00017971) clock_digital_number_pane_g1

0x9cec,	// (0x00017971) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0001cf7e) clock_digital_number_pane_g

0x9cec,	// (0x00017971) clock_digital_separator_pane_g1

0x9cec,	// (0x00017971) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0001cf7e) clock_digital_separator_pane_g

0x992b,	// (0x000175b0) bg_popup_window_pane_cp04

0xa761,	// (0x000183e6) heading_pane_cp03

0xa769,	// (0x000183ee) listscroll_popup_gms_pane

0xa771,	// (0x000183f6) grid_large_graphic_popup_pane

0xa77b,	// (0x00018400) listscroll_popup_gms_pane_g1

0xa783,	// (0x00018408) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0001d01b) listscroll_popup_gms_pane_g

0xa179,	// (0x00017dfe) scroll_pane_cp014

0x284a,	// (0x000104cf) cell_large_graphic_popup_pane_ParamLimits

0x284a,	// (0x000104cf) cell_large_graphic_popup_pane

0x2862,	// (0x000104e7) cell_large_graphic_popup_pane_g1_ParamLimits

0x2862,	// (0x000104e7) cell_large_graphic_popup_pane_g1

0xa78b,	// (0x00018410) cell_large_graphic_popup_pane_g2_ParamLimits

0xa78b,	// (0x00018410) cell_large_graphic_popup_pane_g2

0xa797,	// (0x0001841c) cell_large_graphic_popup_pane_g3_ParamLimits

0xa797,	// (0x0001841c) cell_large_graphic_popup_pane_g3

0xa7a4,	// (0x00018429) cell_large_graphic_popup_pane_g4_ParamLimits

0xa7a4,	// (0x00018429) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0001d020) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0001d020) cell_large_graphic_popup_pane_g

0xa7b4,	// (0x00018439) grid_highlight_pane_cp010

0x9cec,	// (0x00017971) bg_popup_call_pane_g1

0xa7be,	// (0x00018443) list_single_graphic_popup_conf_pane_ParamLimits

0xa7be,	// (0x00018443) list_single_graphic_popup_conf_pane

0xa7d0,	// (0x00018455) list_highlight_pane_cp01

0xa7d9,	// (0x0001845e) list_single_graphic_popup_conf_pane_g1

0xa7e1,	// (0x00018466) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0001d029) list_single_graphic_popup_conf_pane_g

0xa7e9,	// (0x0001846e) list_single_graphic_popup_conf_pane_t1

0xa7f7,	// (0x0001847c) linegrid_cams_pane_g1

0x286e,	// (0x000104f3) linegrid_cams_pane_g2

0x9e8a,	// (0x00017b0f) linegrid_cams_pane_g3

0xa800,	// (0x00018485) linegrid_cams_pane_g4

0x2877,	// (0x000104fc) linegrid_cams_pane_g5

0x2880,	// (0x00010505) linegrid_cams_pane_g6

0x9e93,	// (0x00017b18) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0001d02e) linegrid_cams_pane_g

0xa809,	// (0x0001848e) popup_clock_analogue_window

0xa809,	// (0x0001848e) popup_clock_digital_window

0x992b,	// (0x000175b0) popup_phob_thumbnail_window

0x9cec,	// (0x00017971) call_video_uplink_pane_g1

0xa812,	// (0x00018497) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0001d03d) call_video_uplink_pane_g

0xa81a,	// (0x0001849f) video_uplink_pane

0xa822,	// (0x000184a7) mce_image_pane_g1

0x288b,	// (0x00010510) mce_image_pane_g2

0x2895,	// (0x0001051a) mce_image_pane_g3

0x289f,	// (0x00010524) mce_image_pane_g4

0x28a7,	// (0x0001052c) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0001d042) mce_image_pane_g

0xa82c,	// (0x000184b1) control_top_pane_stacon_cp01_ParamLimits

0xa82c,	// (0x000184b1) control_top_pane_stacon_cp01

0xa840,	// (0x000184c5) uni_indicator_pane_stacon_cp01_ParamLimits

0xa840,	// (0x000184c5) uni_indicator_pane_stacon_cp01

0xa851,	// (0x000184d6) bg_popup_sub_pane_cp03

0x28af,	// (0x00010534) chi_dic_find_pane

0x28b7,	// (0x0001053c) listscroll_chi_dic_pane

0x28c0,	// (0x00010545) main_pane_chidic_g1

0x28d3,	// (0x00010558) chi_dic_find_pane_t1

0xa85b,	// (0x000184e0) find_chidic_pane

0xa864,	// (0x000184e9) chi_dic_list_pane_ParamLimits

0xa864,	// (0x000184e9) chi_dic_list_pane

0xa875,	// (0x000184fa) scroll_pane_cp020

0x28e1,	// (0x00010566) find_chidic_pane_t1

0x992b,	// (0x000175b0) input_focus_pane_cp06

0x28f0,	// (0x00010575) list_chi_dic_pane_ParamLimits

0x28f0,	// (0x00010575) list_chi_dic_pane

0x2902,	// (0x00010587) list_chi_dic_pane_t1_ParamLimits

0x2902,	// (0x00010587) list_chi_dic_pane_t1

0x992b,	// (0x000175b0) list_highlight_pane_cp020

0xa87d,	// (0x00018502) bg_cale_heading_pane_g1

0x2915,	// (0x0001059a) bg_cale_heading_pane_g2

0x291d,	// (0x000105a2) bg_cale_heading_pane_g3

0x2925,	// (0x000105aa) bg_cale_heading_pane_g4

0x292d,	// (0x000105b2) bg_cale_heading_pane_g5

0x2935,	// (0x000105ba) bg_cale_heading_pane_g6

0x293d,	// (0x000105c2) bg_cale_heading_pane_g7

0x2945,	// (0x000105ca) bg_cale_heading_pane_g8

0x294d,	// (0x000105d2) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0001d04d) bg_cale_heading_pane_g

0xa87d,	// (0x00018502) bg_cale_side_pane_g1

0x2955,	// (0x000105da) bg_cale_side_pane_g2

0x295f,	// (0x000105e4) bg_cale_side_pane_g3

0x2969,	// (0x000105ee) bg_cale_side_pane_g4

0x2973,	// (0x000105f8) bg_cale_side_pane_g5

0x297d,	// (0x00010602) bg_cale_side_pane_g6

0x2987,	// (0x0001060c) bg_cale_side_pane_g7

0x2991,	// (0x00010616) bg_cale_side_pane_g8

0x2999,	// (0x0001061e) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0001d060) bg_cale_side_pane_g

0x29a1,	// (0x00010626) popup_call_status_window_ParamLimits

0x29a1,	// (0x00010626) popup_call_status_window

0xa885,	// (0x0001850a) stacon_top_pane

0xa88d,	// (0x00018512) status_pane_ParamLimits

0xa88d,	// (0x00018512) status_pane

0xa8a2,	// (0x00018527) status_small_pane

0xa8aa,	// (0x0001852f) control_pane

0x992b,	// (0x000175b0) stacon_bottom_pane

0xa8b2,	// (0x00018537) list_single_mce_smart_pane_t1_ParamLimits

0xa8b2,	// (0x00018537) list_single_mce_smart_pane_t1

0xa8c5,	// (0x0001854a) list_single_mce_smart_pane_t2_ParamLimits

0xa8c5,	// (0x0001854a) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0001d073) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0001d073) list_single_mce_smart_pane_t

0x29ee,	// (0x00010673) compass_pane

0x29f9,	// (0x0001067e) main_location2_pane_t1

0x2a0f,	// (0x00010694) main_location2_pane_t2

0x2a25,	// (0x000106aa) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0001d078) main_location2_pane_t

0xa8e4,	// (0x00018569) compass_pane_g1_ParamLimits

0xa8e4,	// (0x00018569) compass_pane_g1

0x2a73,	// (0x000106f8) compass_pane_t1

0x2a82,	// (0x00010707) compass_pane_t2

0x0005,

0xf3fc,	// (0x0001d081) compass_pane_t

0x2acd,	// (0x00010752) text_secondary_cp61

0xa8f8,	// (0x0001857d) navi_pane_cams_g5

0xa91b,	// (0x000185a0) navi_pane_im_t1

0xa929,	// (0x000185ae) navi_pane_mp_g1_ParamLimits

0xa929,	// (0x000185ae) navi_pane_mp_g1

0xa93d,	// (0x000185c2) navi_pane_mp_g2_ParamLimits

0xa93d,	// (0x000185c2) navi_pane_mp_g2

0xa949,	// (0x000185ce) navi_pane_mp_g3_ParamLimits

0xa949,	// (0x000185ce) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0001d095) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0001d095) navi_pane_mp_g

0xa955,	// (0x000185da) navi_pane_mp_t1

0xa963,	// (0x000185e8) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0001d09c) navi_pane_mp_t

0xa99f,	// (0x00018624) navi_pane_vt_g1

0xa955,	// (0x000185da) navi_pane_vt_t1

0xa9a7,	// (0x0001862c) navi_slider_pane

0xa9af,	// (0x00018634) zooming_pane

0xa9b7,	// (0x0001863c) navi_slider_pane_g1

0xa9c0,	// (0x00018645) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0001d0a3) navi_slider_pane_g

0xa9ed,	// (0x00018672) aid_levels_zoom

0xa9f5,	// (0x0001867a) zooming_pane_g1

0xa9fd,	// (0x00018682) zooming_pane_g2

0xa9fd,	// (0x00018682) zooming_pane_g3

0x0002,

0xf42d,	// (0x0001d0b2) zooming_pane_g

0xaa05,	// (0x0001868a) level_10_zoom

0xaa0e,	// (0x00018693) level_11_zoom

0xaa17,	// (0x0001869c) level_1_zoom

0xaa20,	// (0x000186a5) level_2_zoom

0xaa29,	// (0x000186ae) level_3_zoom

0xaa32,	// (0x000186b7) level_4_zoom

0xaa3b,	// (0x000186c0) level_5_zoom

0xaa44,	// (0x000186c9) level_6_zoom

0xaa4d,	// (0x000186d2) level_7_zoom

0xaa56,	// (0x000186db) level_8_zoom

0xaa5f,	// (0x000186e4) level_9_zoom

0xaa70,	// (0x000186f5) popup_phob_thumbnail_window_g1

0xaa78,	// (0x000186fd) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0001d0b9) popup_phob_thumbnail_window_g

0xbdc3,	// (0x00019a48) level_1_location

0xbdcb,	// (0x00019a50) level_2_location

0xbdd3,	// (0x00019a58) level_3_location

0xbddb,	// (0x00019a60) level_4_location

0xa9af,	// (0x00018634) level_5_location

0x2bf8,	// (0x0001087d) mce_icon_pane_g1

0x2c00,	// (0x00010885) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0001d0be) mce_icon_pane_g

0x2c08,	// (0x0001088d) main_mup_pane_g1_ParamLimits

0x2c08,	// (0x0001088d) main_mup_pane_g1

0x2c1e,	// (0x000108a3) main_mup_pane_g2_ParamLimits

0x2c1e,	// (0x000108a3) main_mup_pane_g2

0x2c36,	// (0x000108bb) main_mup_pane_g3_ParamLimits

0x2c36,	// (0x000108bb) main_mup_pane_g3

0x2c4e,	// (0x000108d3) main_mup_pane_g4_ParamLimits

0x2c4e,	// (0x000108d3) main_mup_pane_g4

0x2c60,	// (0x000108e5) main_mup_pane_g5_ParamLimits

0x2c60,	// (0x000108e5) main_mup_pane_g5

0x2c7c,	// (0x00010901) main_mup_pane_g6_ParamLimits

0x2c7c,	// (0x00010901) main_mup_pane_g6

0x2c96,	// (0x0001091b) main_mup_pane_g7_ParamLimits

0x2c96,	// (0x0001091b) main_mup_pane_g7

0x2cb4,	// (0x00010939) main_mup_pane_g8_ParamLimits

0x2cb4,	// (0x00010939) main_mup_pane_g8

0x2cd2,	// (0x00010957) main_mup_pane_g9_ParamLimits

0x2cd2,	// (0x00010957) main_mup_pane_g9

0x2cee,	// (0x00010973) main_mup_pane_g10_ParamLimits

0x2cee,	// (0x00010973) main_mup_pane_g10

0x2d0c,	// (0x00010991) main_mup_pane_g11_ParamLimits

0x2d0c,	// (0x00010991) main_mup_pane_g11

0x2d26,	// (0x000109ab) main_mup_pane_g12_ParamLimits

0x2d26,	// (0x000109ab) main_mup_pane_g12

0x2d3c,	// (0x000109c1) main_mup_pane_g13_ParamLimits

0x2d3c,	// (0x000109c1) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0001d0c3) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0001d0c3) main_mup_pane_g

0x2d50,	// (0x000109d5) main_mup_pane_t1_ParamLimits

0x2d50,	// (0x000109d5) main_mup_pane_t1

0x2d6c,	// (0x000109f1) main_mup_pane_t2_ParamLimits

0x2d6c,	// (0x000109f1) main_mup_pane_t2

0x2d84,	// (0x00010a09) main_mup_pane_t3_ParamLimits

0x2d84,	// (0x00010a09) main_mup_pane_t3

0x2d9c,	// (0x00010a21) main_mup_pane_t4_ParamLimits

0x2d9c,	// (0x00010a21) main_mup_pane_t4

0x2dba,	// (0x00010a3f) main_mup_pane_t5_ParamLimits

0x2dba,	// (0x00010a3f) main_mup_pane_t5

0x2dcf,	// (0x00010a54) main_mup_pane_t6_ParamLimits

0x2dcf,	// (0x00010a54) main_mup_pane_t6

0x0005,

0xf459,	// (0x0001d0de) main_mup_pane_t_ParamLimits

0xf459,	// (0x0001d0de) main_mup_pane_t

0x2de1,	// (0x00010a66) mup_progress_pane_ParamLimits

0x2de1,	// (0x00010a66) mup_progress_pane

0x2ded,	// (0x00010a72) mup_visualizer_pane_ParamLimits

0x2ded,	// (0x00010a72) mup_visualizer_pane

0x2e21,	// (0x00010aa6) mup_volume_pane_ParamLimits

0x2e21,	// (0x00010aa6) mup_volume_pane

0xaa80,	// (0x00018705) mup_visualizer_pane_g1_ParamLimits

0xaa80,	// (0x00018705) mup_visualizer_pane_g1

0xaa80,	// (0x00018705) mup_visualizer_pane_g2_ParamLimits

0xaa80,	// (0x00018705) mup_visualizer_pane_g2

0xa8e4,	// (0x00018569) mup_visualizer_pane_g3_ParamLimits

0xa8e4,	// (0x00018569) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0001d0eb) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0001d0eb) mup_visualizer_pane_g

0x9cec,	// (0x00017971) mup_volume_pane_g1

0xaa96,	// (0x0001871b) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0001d0f2) mup_volume_pane_g

0x9cec,	// (0x00017971) mup_progress_pane_g1

0xaa9f,	// (0x00018724) mup_progress_pane_g2

0xaaa8,	// (0x0001872d) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0001d0f7) mup_progress_pane_g

0x992b,	// (0x000175b0) bg_popup_window_pane_cp05

0xaab1,	// (0x00018736) heading_pane_cp02_ParamLimits

0xaab1,	// (0x00018736) heading_pane_cp02

0xaacd,	// (0x00018752) list_popup_blid_pane

0xaad5,	// (0x0001875a) list_blid_sat_info_pane_ParamLimits

0xaad5,	// (0x0001875a) list_blid_sat_info_pane

0xaae8,	// (0x0001876d) list_blid_sat_info_pane_g1

0xaaf0,	// (0x00018775) list_blid_sat_info_pane_t1

0x2f4b,	// (0x00010bd0) mup_equalizer_pane_ParamLimits

0x2f4b,	// (0x00010bd0) mup_equalizer_pane

0x2f6c,	// (0x00010bf1) mup_equalizer_pane_cp1_ParamLimits

0x2f6c,	// (0x00010bf1) mup_equalizer_pane_cp1

0x2f8d,	// (0x00010c12) mup_equalizer_pane_cp2_ParamLimits

0x2f8d,	// (0x00010c12) mup_equalizer_pane_cp2

0x2fb2,	// (0x00010c37) mup_equalizer_pane_cp3_ParamLimits

0x2fb2,	// (0x00010c37) mup_equalizer_pane_cp3

0x2fdb,	// (0x00010c60) mup_equalizer_pane_cp4_ParamLimits

0x2fdb,	// (0x00010c60) mup_equalizer_pane_cp4

0x3004,	// (0x00010c89) mup_equalizer_pane_cp5

0x301c,	// (0x00010ca1) mup_equalizer_pane_cp6

0x3034,	// (0x00010cb9) mup_equalizer_pane_cp7

0xbcdd,	// (0x00019962) bg_popup_call_poc_act_pane_g9

0xbce5,	// (0x0001996a) bg_popup_call_poc_act_pane_g10

0xbced,	// (0x00019972) bg_popup_call_poc_act_pane_g11

0x000a,

0x9b86,	// (0x0001780b) mup_scale_pane

0x9cec,	// (0x00017971) mup_scale_pane_g1

0xaafe,	// (0x00018783) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0001d113) mup_scale_pane_g

0xab22,	// (0x000187a7) msg_data_pane

0xab2a,	// (0x000187af) scroll_pane_cp017

0x305e,	// (0x00010ce3) bg_list_pane_cp04_ParamLimits

0x305e,	// (0x00010ce3) bg_list_pane_cp04

0xab32,	// (0x000187b7) msg_data_pane_g1

0x3086,	// (0x00010d0b) msg_data_pane_g2

0x3090,	// (0x00010d15) msg_data_pane_g3

0x309a,	// (0x00010d1f) msg_data_pane_g4

0x30a2,	// (0x00010d27) msg_data_pane_g5

0x30aa,	// (0x00010d2f) msg_data_pane_g6

0x30b2,	// (0x00010d37) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0001d122) msg_data_pane_g

0x30ba,	// (0x00010d3f) msg_text_pane_ParamLimits

0x30ba,	// (0x00010d3f) msg_text_pane

0x30e9,	// (0x00010d6e) qrid_highlight_pane_cp011_ParamLimits

0x30e9,	// (0x00010d6e) qrid_highlight_pane_cp011

0x992b,	// (0x000175b0) msg_body_pane

0x992b,	// (0x000175b0) msg_header_pane

0xab43,	// (0x000187c8) input_focus_pane_cp07

0x310d,	// (0x00010d92) msg_header_pane_t1_ParamLimits

0x310d,	// (0x00010d92) msg_header_pane_t1

0x3121,	// (0x00010da6) msg_header_pane_t2_ParamLimits

0x3121,	// (0x00010da6) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0001d136) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0001d136) msg_header_pane_t

0xab58,	// (0x000187dd) msg_body_pane_g1

0x3133,	// (0x00010db8) msg_body_pane_t1_ParamLimits

0x3133,	// (0x00010db8) msg_body_pane_t1

0x3164,	// (0x00010de9) msg_body_pane_t2_ParamLimits

0x3164,	// (0x00010de9) msg_body_pane_t2

0x3176,	// (0x00010dfb) msg_body_pane_t3_ParamLimits

0x3176,	// (0x00010dfb) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0001d13b) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0001d13b) msg_body_pane_t

0x31c2,	// (0x00010e47) main_viewer_pane_g1_ParamLimits

0x31c2,	// (0x00010e47) main_viewer_pane_g1

0x31d0,	// (0x00010e55) main_viewer_pane_g2_ParamLimits

0x31d0,	// (0x00010e55) main_viewer_pane_g2

0x31de,	// (0x00010e63) main_viewer_pane_g3_ParamLimits

0x31de,	// (0x00010e63) main_viewer_pane_g3

0x31ed,	// (0x00010e72) main_viewer_pane_g4_ParamLimits

0x31ed,	// (0x00010e72) main_viewer_pane_g4

0xab78,	// (0x000187fd) main_viewer_pane_g5_ParamLimits

0xab78,	// (0x000187fd) main_viewer_pane_g5

0xab78,	// (0x000187fd) main_viewer_pane_g7_ParamLimits

0xab78,	// (0x000187fd) main_viewer_pane_g7

0xab8a,	// (0x0001880f) main_viewer_pane_g8_ParamLimits

0xab8a,	// (0x0001880f) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0001d14b) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0001d14b) main_viewer_pane_g

0xaba2,	// (0x00018827) viewer_content_pane_ParamLimits

0xaba2,	// (0x00018827) viewer_content_pane

0x322b,	// (0x00010eb0) main_postcard_pane_g1_ParamLimits

0x322b,	// (0x00010eb0) main_postcard_pane_g1

0x3241,	// (0x00010ec6) main_postcard_pane_g2_ParamLimits

0x3241,	// (0x00010ec6) main_postcard_pane_g2

0x3257,	// (0x00010edc) main_postcard_pane_g3_ParamLimits

0x3257,	// (0x00010edc) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0001d15c) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0001d15c) main_postcard_pane_g

0x326e,	// (0x00010ef3) main_postcard_pane_g4

0xbf0d,	// (0x00019b92) smil_status_volume_pane_g2

0x32b1,	// (0x00010f36) postcard_pane_ParamLimits

0x32b1,	// (0x00010f36) postcard_pane

0xabb0,	// (0x00018835) postcard_pane_g1_ParamLimits

0xabb0,	// (0x00018835) postcard_pane_g1

0x3301,	// (0x00010f86) postcard_pane_g2_ParamLimits

0x3301,	// (0x00010f86) postcard_pane_g2

0x330d,	// (0x00010f92) postcard_pane_g3_ParamLimits

0x330d,	// (0x00010f92) postcard_pane_g3

0xabbe,	// (0x00018843) postcard_pane_g4_ParamLimits

0xabbe,	// (0x00018843) postcard_pane_g4

0x3319,	// (0x00010f9e) postcard_pane_g5_ParamLimits

0x3319,	// (0x00010f9e) postcard_pane_g5

0x332b,	// (0x00010fb0) postcard_pane_g6_ParamLimits

0x332b,	// (0x00010fb0) postcard_pane_g6

0xabb0,	// (0x00018835) postcard_pane_g7_ParamLimits

0xabb0,	// (0x00018835) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0001d169) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0001d169) postcard_pane_g

0x3343,	// (0x00010fc8) main_mp2_pane_g1_ParamLimits

0x3343,	// (0x00010fc8) main_mp2_pane_g1

0x3351,	// (0x00010fd6) main_mp2_pane_g2_ParamLimits

0x3351,	// (0x00010fd6) main_mp2_pane_g2

0x335d,	// (0x00010fe2) main_mp2_pane_g3_ParamLimits

0x335d,	// (0x00010fe2) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0001d178) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0001d178) main_mp2_pane_g

0x3369,	// (0x00010fee) main_mp2_pane_t1_ParamLimits

0x3369,	// (0x00010fee) main_mp2_pane_t1

0x3380,	// (0x00011005) main_mp2_pane_t2_ParamLimits

0x3380,	// (0x00011005) main_mp2_pane_t2

0x3394,	// (0x00011019) main_mp2_pane_t3_ParamLimits

0x3394,	// (0x00011019) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0001d17f) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0001d17f) main_mp2_pane_t

0xabcc,	// (0x00018851) pec_content_pane_ParamLimits

0xabcc,	// (0x00018851) pec_content_pane

0xa179,	// (0x00017dfe) scroll_pane_cp015

0xabde,	// (0x00018863) pec_attribute_pane_ParamLimits

0xabde,	// (0x00018863) pec_attribute_pane

0x33a6,	// (0x0001102b) pec_content_pane_g1_ParamLimits

0x33a6,	// (0x0001102b) pec_content_pane_g1

0xabee,	// (0x00018873) pec_content_pane_t1_ParamLimits

0xabee,	// (0x00018873) pec_content_pane_t1

0xac00,	// (0x00018885) pec_content_pane_t2_ParamLimits

0xac00,	// (0x00018885) pec_content_pane_t2

0x0001,

0xf501,	// (0x0001d186) pec_content_pane_t_ParamLimits

0xf501,	// (0x0001d186) pec_content_pane_t

0x33b2,	// (0x00011037) list_single_graphic_pane_cp01_ParamLimits

0x33b2,	// (0x00011037) list_single_graphic_pane_cp01

0x9b86,	// (0x0001780b) bg_popup_sub_pane_cp04

0xac12,	// (0x00018897) popup_mup_playback_window_g1

0xac1e,	// (0x000188a3) popup_mup_playback_window_t1

0xac33,	// (0x000188b8) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0001d18b) popup_mup_playback_window_t

0xac6a,	// (0x000188ef) main_image_pane_g1_ParamLimits

0xac6a,	// (0x000188ef) main_image_pane_g1

0xacad,	// (0x00018932) scroll_pane_cp018_ParamLimits

0xacad,	// (0x00018932) scroll_pane_cp018

0xacc5,	// (0x0001894a) scroll_pane_cp016_ParamLimits

0xacc5,	// (0x0001894a) scroll_pane_cp016

0x3484,	// (0x00011109) smil2_image_pane_ParamLimits

0x3484,	// (0x00011109) smil2_image_pane

0x34ba,	// (0x0001113f) smil2_root_pane_ParamLimits

0x34ba,	// (0x0001113f) smil2_root_pane

0x34f2,	// (0x00011177) smil2_text_pane_ParamLimits

0x34f2,	// (0x00011177) smil2_text_pane

0x992b,	// (0x000175b0) bg_list_pane_cp06

0xad01,	// (0x00018986) grid_radio_pane

0x992b,	// (0x000175b0) bg_popup_window_pane_cp06

0xad0b,	// (0x00018990) main_fmradio_pane_t1

0xa761,	// (0x000183e6) heading_pane_cp04

0xad19,	// (0x0001899e) main_fmradio_pane_t2

0xbcf5,	// (0x0001997a) popup_cale_lunar_info_window_g1

0xad27,	// (0x000189ac) main_fmradio_pane_t3

0xbcfd,	// (0x00019982) popup_cale_lunar_info_window_g2

0xad37,	// (0x000189bc) main_fmradio_pane_t4

0x0001,

0xad45,	// (0x000189ca) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0001d266) popup_cale_lunar_info_window_g

0xf51b,	// (0x0001d1a0) main_fmradio_pane_t

0xad53,	// (0x000189d8) wait_bar_pane_cp03

0xad5b,	// (0x000189e0) cell_fmradio_pane_ParamLimits

0xad5b,	// (0x000189e0) cell_fmradio_pane

0xabb0,	// (0x00018835) cell_fmradio_pane_g1_ParamLimits

0xabb0,	// (0x00018835) cell_fmradio_pane_g1

0x992b,	// (0x000175b0) grid_highlight_pane_cp011

0xad70,	// (0x000189f5) poc_content_pane_ParamLimits

0xad70,	// (0x000189f5) poc_content_pane

0xad82,	// (0x00018a07) scroll_pane_cp019

0x3582,	// (0x00011207) popup_call_poc_act_window_ParamLimits

0x3582,	// (0x00011207) popup_call_poc_act_window

0x35a6,	// (0x0001122b) popup_call_poc_inact_window_ParamLimits

0x35a6,	// (0x0001122b) popup_call_poc_inact_window

0xf5b8,	// (0x0001d23d) bg_popup_call_poc_act_pane_g

0xbc6d,	// (0x000198f2) bg_popup_call_poc_inact_pane_g1

0xbc75,	// (0x000198fa) bg_popup_call_poc_inact_pane_g2

0xad8a,	// (0x00018a0f) popup_call_poc_act_window_g2

0xbc7d,	// (0x00019902) bg_popup_call_poc_inact_pane_g3

0xbc85,	// (0x0001990a) bg_popup_call_poc_inact_pane_g4

0xbc8d,	// (0x00019912) bg_popup_call_poc_inact_pane_g5

0xad92,	// (0x00018a17) popup_call_poc_act_window_t1_ParamLimits

0xad92,	// (0x00018a17) popup_call_poc_act_window_t1

0xadba,	// (0x00018a3f) popup_call_poc_act_window_t2_ParamLimits

0xadba,	// (0x00018a3f) popup_call_poc_act_window_t2

0xade2,	// (0x00018a67) popup_call_poc_act_window_t3_ParamLimits

0xade2,	// (0x00018a67) popup_call_poc_act_window_t3

0xae0a,	// (0x00018a8f) popup_call_poc_act_window_t4_ParamLimits

0xae0a,	// (0x00018a8f) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0001d1ab) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0001d1ab) popup_call_poc_act_window_t

0xbc95,	// (0x0001991a) bg_popup_call_poc_inact_pane_g6

0xbc9d,	// (0x00019922) bg_popup_call_poc_inact_pane_g7

0xbca5,	// (0x0001992a) bg_popup_call_poc_inact_pane_g8

0xae1c,	// (0x00018aa1) popup_call_poc_inact_window_g2

0xbcad,	// (0x00019932) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0001d22a) bg_popup_call_poc_inact_pane_g

0xae24,	// (0x00018aa9) popup_call_poc_inact_window_t1_ParamLimits

0xae24,	// (0x00018aa9) popup_call_poc_inact_window_t1

0xae39,	// (0x00018abe) popup_call_poc_inact_window_t2_ParamLimits

0xae39,	// (0x00018abe) popup_call_poc_inact_window_t2

0xae4e,	// (0x00018ad3) popup_call_poc_inact_window_t3_ParamLimits

0xae4e,	// (0x00018ad3) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0001d1b4) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0001d1b4) popup_call_poc_inact_window_t

0xbe6d,	// (0x00019af2) context_pane_ParamLimits

0x3e51,	// (0x00011ad6) signal_pane_ParamLimits

0xa9af,	// (0x00018634) main_call2_pane

0xbe5b,	// (0x00019ae0) popup_phob_thumbnail2_window_ParamLimits

0xbe5b,	// (0x00019ae0) popup_phob_thumbnail2_window

0xab60,	// (0x000187e5) aid_hotspot_pointer_arrow_pane

0xab68,	// (0x000187ed) aid_hotspot_pointer_hand_pane

0x3911,	// (0x00011596) phob_pre_status_pane_g5

0x1605,	// (0x0000f28a) cams_zoom_pane_ParamLimits

0x1614,	// (0x0000f299) image_vga_pane_ParamLimits

0x162e,	// (0x0000f2b3) main_camera_pane_g1_ParamLimits

0x1640,	// (0x0000f2c5) main_camera_pane_g2_ParamLimits

0x1650,	// (0x0000f2d5) main_camera_pane_g3_ParamLimits

0x1664,	// (0x0000f2e9) main_camera_pane_g4_ParamLimits

0x1678,	// (0x0000f2fd) main_camera_pane_g5_ParamLimits

0x168c,	// (0x0000f311) main_camera_pane_g6_ParamLimits

0x16a0,	// (0x0000f325) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0001ceb3) main_camera_pane_g_ParamLimits

0x16b4,	// (0x0000f339) main_camera_pane_t1_ParamLimits

0x16ca,	// (0x0000f34f) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0001cec4) main_camera_pane_t_ParamLimits

0x9b86,	// (0x0001780b) bg_popup_preview_window_pane_cp01_ParamLimits

0x9b86,	// (0x0001780b) bg_popup_preview_window_pane_cp01

0xae63,	// (0x00018ae8) popup_phob_thumbnail2_window_g1_ParamLimits

0xae63,	// (0x00018ae8) popup_phob_thumbnail2_window_g1

0x992b,	// (0x000175b0) call2_cli_visual_pane

0x35da,	// (0x0001125f) popup_call2_audio_conf_window_ParamLimits

0x35da,	// (0x0001125f) popup_call2_audio_conf_window

0x3602,	// (0x00011287) popup_call2_audio_first_window_ParamLimits

0x3602,	// (0x00011287) popup_call2_audio_first_window

0x3698,	// (0x0001131d) popup_call2_audio_in_window_ParamLimits

0x3698,	// (0x0001131d) popup_call2_audio_in_window

0x36e4,	// (0x00011369) popup_call2_audio_out_window_ParamLimits

0x36e4,	// (0x00011369) popup_call2_audio_out_window

0x3756,	// (0x000113db) popup_call2_audio_second_window_ParamLimits

0x3756,	// (0x000113db) popup_call2_audio_second_window

0x37bc,	// (0x00011441) popup_call2_audio_wait_window_ParamLimits

0x37bc,	// (0x00011441) popup_call2_audio_wait_window

0x992b,	// (0x000175b0) bg_popup_call2_act_pane_cp03

0x9b68,	// (0x000177ed) list_conf_pane_cp

0xae6f,	// (0x00018af4) popup_call2_audio_conf_window_t1

0xae7d,	// (0x00018b02) list_single_graphic_popup_conf2_pane_ParamLimits

0xae7d,	// (0x00018b02) list_single_graphic_popup_conf2_pane

0xa7d0,	// (0x00018455) list_highlight_pane_cp04

0xae90,	// (0x00018b15) list_single_graphic_popup_conf2_pane_g1

0xa7e1,	// (0x00018466) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0001d1bb) list_single_graphic_popup_conf2_pane_g

0xae9a,	// (0x00018b1f) list_single_graphic_popup_conf2_pane_t1

0xaea8,	// (0x00018b2d) bg_popup_call2_act_pane_cp01_ParamLimits

0xaea8,	// (0x00018b2d) bg_popup_call2_act_pane_cp01

0xaf32,	// (0x00018bb7) call_type_pane_cp05_ParamLimits

0xaf32,	// (0x00018bb7) call_type_pane_cp05

0xaf86,	// (0x00018c0b) popup_call2_audio_second_window_g1_ParamLimits

0xaf86,	// (0x00018c0b) popup_call2_audio_second_window_g1

0xafda,	// (0x00018c5f) popup_call2_audio_second_window_g2_ParamLimits

0xafda,	// (0x00018c5f) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0001d1c0) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0001d1c0) popup_call2_audio_second_window_g

0xb03f,	// (0x00018cc4) popup_call2_audio_second_window_t1_ParamLimits

0xb03f,	// (0x00018cc4) popup_call2_audio_second_window_t1

0xb0fa,	// (0x00018d7f) popup_call2_audio_second_window_t2_ParamLimits

0xb0fa,	// (0x00018d7f) popup_call2_audio_second_window_t2

0xb14d,	// (0x00018dd2) popup_call2_audio_second_window_t3_ParamLimits

0xb14d,	// (0x00018dd2) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0001d1c7) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0001d1c7) popup_call2_audio_second_window_t

0x992b,	// (0x000175b0) bg_popup_call2_in_pane_cp02

0x9935,	// (0x000175ba) call_type_pane_cp04

0x993d,	// (0x000175c2) popup_call2_audio_wait_window_g1

0x9945,	// (0x000175ca) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0001cda0) popup_call2_audio_wait_window_g

0x994d,	// (0x000175d2) popup_call2_audio_wait_window_t3

0xb240,	// (0x00018ec5) bg_popup_call2_act_pane_ParamLimits

0xb240,	// (0x00018ec5) bg_popup_call2_act_pane

0xb300,	// (0x00018f85) call_type_pane_cp03_ParamLimits

0xb300,	// (0x00018f85) call_type_pane_cp03

0xb364,	// (0x00018fe9) popup_call2_audio_first_window_g1_ParamLimits

0xb364,	// (0x00018fe9) popup_call2_audio_first_window_g1

0xb3d4,	// (0x00019059) popup_call2_audio_first_window_g2_ParamLimits

0xb3d4,	// (0x00019059) popup_call2_audio_first_window_g2

0xaa80,	// (0x00018705) popup_call2_audio_first_window_g3_ParamLimits

0xaa80,	// (0x00018705) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0001d1d0) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0001d1d0) popup_call2_audio_first_window_g

0xb4b2,	// (0x00019137) popup_call2_audio_first_window_t1_ParamLimits

0xb4b2,	// (0x00019137) popup_call2_audio_first_window_t1

0xb5b5,	// (0x0001923a) popup_call2_audio_first_window_t4_ParamLimits

0xb5b5,	// (0x0001923a) popup_call2_audio_first_window_t4

0xb698,	// (0x0001931d) popup_call2_audio_first_window_t5_ParamLimits

0xb698,	// (0x0001931d) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0001d1db) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0001d1db) popup_call2_audio_first_window_t

0x9b7e,	// (0x00017803) bg_popup_call2_act_pane_g1

0xbd07,	// (0x0001998c) popup_cale_lunar_info_window_t1

0xbd15,	// (0x0001999a) popup_cale_lunar_info_window_t2

0xbd23,	// (0x000199a8) popup_cale_lunar_info_window_t3

0x992b,	// (0x000175b0) bg_popup_call2_bubble_pane

0xb799,	// (0x0001941e) bg_popup_call2_in_pane_cp01_ParamLimits

0xb799,	// (0x0001941e) bg_popup_call2_in_pane_cp01

0x9607,	// (0x0001728c) call_type_pane_cp02

0xb7e1,	// (0x00019466) popup_call2_audio_out_window_g1_ParamLimits

0xb7e1,	// (0x00019466) popup_call2_audio_out_window_g1

0xb80d,	// (0x00019492) popup_call2_audio_out_window_g2_ParamLimits

0xb80d,	// (0x00019492) popup_call2_audio_out_window_g2

0xb835,	// (0x000194ba) popup_call2_audio_out_window_g3_ParamLimits

0xb835,	// (0x000194ba) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0001d1e4) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0001d1e4) popup_call2_audio_out_window_g

0xb870,	// (0x000194f5) popup_call2_audio_out_window_t1_ParamLimits

0xb870,	// (0x000194f5) popup_call2_audio_out_window_t1

0xb8cf,	// (0x00019554) popup_call2_audio_out_window_t2_ParamLimits

0xb8cf,	// (0x00019554) popup_call2_audio_out_window_t2

0xb923,	// (0x000195a8) popup_call2_audio_out_window_t3_ParamLimits

0xb923,	// (0x000195a8) popup_call2_audio_out_window_t3

0xb939,	// (0x000195be) popup_call2_audio_out_window_t4_ParamLimits

0xb939,	// (0x000195be) popup_call2_audio_out_window_t4

0xb94f,	// (0x000195d4) popup_call2_audio_out_window_t5_ParamLimits

0xb94f,	// (0x000195d4) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0001d1ed) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0001d1ed) popup_call2_audio_out_window_t

0xb9b3,	// (0x00019638) bg_popup_call2_in_pane_ParamLimits

0xb9b3,	// (0x00019638) bg_popup_call2_in_pane

0xba0f,	// (0x00019694) popup_call2_audio_in_window_g1_ParamLimits

0xba0f,	// (0x00019694) popup_call2_audio_in_window_g1

0xba47,	// (0x000196cc) popup_call2_audio_in_window_g2_ParamLimits

0xba47,	// (0x000196cc) popup_call2_audio_in_window_g2

0xba7f,	// (0x00019704) popup_call2_audio_in_window_g3_ParamLimits

0xba7f,	// (0x00019704) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0001d1fa) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0001d1fa) popup_call2_audio_in_window_g

0xbad7,	// (0x0001975c) popup_call2_audio_in_window_t1_ParamLimits

0xbad7,	// (0x0001975c) popup_call2_audio_in_window_t1

0xbb57,	// (0x000197dc) popup_call2_audio_in_window_t2_ParamLimits

0xbb57,	// (0x000197dc) popup_call2_audio_in_window_t2

0xbbd7,	// (0x0001985c) popup_call2_audio_in_window_t3_ParamLimits

0xbbd7,	// (0x0001985c) popup_call2_audio_in_window_t3

0xbbf1,	// (0x00019876) popup_call2_audio_in_window_t4_ParamLimits

0xbbf1,	// (0x00019876) popup_call2_audio_in_window_t4

0xbc03,	// (0x00019888) popup_call2_audio_in_window_t5_ParamLimits

0xbc03,	// (0x00019888) popup_call2_audio_in_window_t5

0xbc18,	// (0x0001989d) popup_call2_audio_in_window_t6_ParamLimits

0xbc18,	// (0x0001989d) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0001d203) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0001d203) popup_call2_audio_in_window_t

0x9b7e,	// (0x00017803) bg_popup_call2_in_pane_g1

0xbd31,	// (0x000199b6) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0001d26b) popup_cale_lunar_info_window_t

0x9b86,	// (0x0001780b) bg_popup_call2_rect_pane_ParamLimits

0x9b86,	// (0x0001780b) bg_popup_call2_rect_pane

0x992b,	// (0x000175b0) call2_cli_visual_graphic_pane

0x992b,	// (0x000175b0) call2_cli_visual_text_pane

0xbf20,	// (0x00019ba5) smil_status_volume_pane_g3

0x0002,

0x9cec,	// (0x00017971) call2_cli_visual_graphic_pane_g1

0x9cec,	// (0x00017971) call2_cli_visual_graphic_pane_g2

0x9cec,	// (0x00017971) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0001d210) call2_cli_visual_graphic_pane_g

0xbc2d,	// (0x000198b2) bg_popup_call2_rect_pane_g1

0x9d94,	// (0x00017a19) bg_popup_call2_rect_pane_g2

0xbc35,	// (0x000198ba) bg_popup_call2_rect_pane_g3

0xbc3d,	// (0x000198c2) bg_popup_call2_rect_pane_g4

0xbc45,	// (0x000198ca) bg_popup_call2_rect_pane_g5

0xbc4d,	// (0x000198d2) bg_popup_call2_rect_pane_g6

0xbc55,	// (0x000198da) bg_popup_call2_rect_pane_g7

0xbc5d,	// (0x000198e2) bg_popup_call2_rect_pane_g8

0xbc65,	// (0x000198ea) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0001d217) bg_popup_call2_rect_pane_g

0xbc6d,	// (0x000198f2) bg_popup_call2_bubble_pane_g1

0xbc75,	// (0x000198fa) bg_popup_call2_bubble_pane_g2

0xbc7d,	// (0x00019902) bg_popup_call2_bubble_pane_g3

0xbc85,	// (0x0001990a) bg_popup_call2_bubble_pane_g4

0xbc8d,	// (0x00019912) bg_popup_call2_bubble_pane_g5

0xbc95,	// (0x0001991a) bg_popup_call2_bubble_pane_g6

0xbc9d,	// (0x00019922) bg_popup_call2_bubble_pane_g7

0xbca5,	// (0x0001992a) bg_popup_call2_bubble_pane_g8

0xbcad,	// (0x00019932) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0001d22a) bg_popup_call2_bubble_pane_g

0x120e,	// (0x0000ee93) aid_cale_week_size_cell_pane

0x16e4,	// (0x0000f369) aid_cams_cif_uncrop_pane_ParamLimits

0x16e4,	// (0x0000f369) aid_cams_cif_uncrop_pane

0x189d,	// (0x0000f522) aid_cams_size_cell_ParamLimits

0x189d,	// (0x0000f522) aid_cams_size_cell

0x18b1,	// (0x0000f536) grid_cams_pane_ParamLimits

0x18cb,	// (0x0000f550) linegrid_cams_pane_ParamLimits

0x1a00,	// (0x0000f685) call_video_pane_t1

0x1a1a,	// (0x0000f69f) call_video_pane_t2

0x0001,

0xf292,	// (0x0001cf17) call_video_pane_t

0x1e65,	// (0x0000faea) aid_cale_month_size_cell_pane_ParamLimits

0x1e65,	// (0x0000faea) aid_cale_month_size_cell_pane

0xf62f,	// (0x0001d2b4) smil_status_volume_pane_g

0xbf2d,	// (0x00019bb2) volume_smil_pane_ParamLimits

0x94ab,	// (0x00017130) aid_popup2_width_pane

0x1176,	// (0x0000edfb) cell_qdial_pane_g4_ParamLimits

0x1176,	// (0x0000edfb) cell_qdial_pane_g4

0x2a4f,	// (0x000106d4) aid_blid_cardinal_pane_ParamLimits

0x2a5f,	// (0x000106e4) aid_blid_destination_pane_ParamLimits

0x2a5f,	// (0x000106e4) aid_blid_destination_pane

0x9b86,	// (0x0001780b) bg_popup_call_poc_act_pane_ParamLimits

0x9b86,	// (0x0001780b) bg_popup_call_poc_act_pane

0x9b86,	// (0x0001780b) bg_popup_call_poc_inact_pane_ParamLimits

0x9b86,	// (0x0001780b) bg_popup_call_poc_inact_pane

0xbcb5,	// (0x0001993a) bg_popup_call_poc_act_pane_g1

0xbcbd,	// (0x00019942) bg_popup_call_poc_act_pane_g2

0xbcc5,	// (0x0001994a) bg_popup_call_poc_act_pane_g3

0xbc85,	// (0x0001990a) bg_popup_call_poc_act_pane_g4

0xbc8d,	// (0x00019912) bg_popup_call_poc_act_pane_g5

0xbccd,	// (0x00019952) bg_popup_call_poc_act_pane_g6

0xbc9d,	// (0x00019922) bg_popup_call_poc_act_pane_g7

0xbcd5,	// (0x0001995a) bg_popup_call_poc_act_pane_g8

0x992b,	// (0x000175b0) main_usb_pane

0xbe32,	// (0x00019ab7) popup_cale_lunar_info_window

0x1ce5,	// (0x0000f96a) im_reading_pane_t1_ParamLimits

0xa0d1,	// (0x00017d56) list_im_pane_ParamLimits

0xa0e2,	// (0x00017d67) scroll_pane_cp07_ParamLimits

0x992b,	// (0x000175b0) grid_highlight_pane_cp012

0x9b86,	// (0x0001780b) mup_scale_pane_ParamLimits

0xabb0,	// (0x00018835) main_usb_pane_g1_ParamLimits

0xabb0,	// (0x00018835) main_usb_pane_g1

0x381d,	// (0x000114a2) main_usb_pane_g2_ParamLimits

0x381d,	// (0x000114a2) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0001d254) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0001d254) main_usb_pane_g

0x3833,	// (0x000114b8) main_usb_pane_t1_ParamLimits

0x3833,	// (0x000114b8) main_usb_pane_t1

0x3845,	// (0x000114ca) main_usb_pane_t2_ParamLimits

0x3845,	// (0x000114ca) main_usb_pane_t2

0x3857,	// (0x000114dc) main_usb_pane_t3_ParamLimits

0x3857,	// (0x000114dc) main_usb_pane_t3

0x3869,	// (0x000114ee) main_usb_pane_t4_ParamLimits

0x3869,	// (0x000114ee) main_usb_pane_t4

0x387e,	// (0x00011503) main_usb_pane_t5_ParamLimits

0x387e,	// (0x00011503) main_usb_pane_t5

0x3893,	// (0x00011518) main_usb_pane_t6_ParamLimits

0x3893,	// (0x00011518) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0001d259) main_usb_pane_t_ParamLimits

0x29ee,	// (0x00010673) aid_text_placing

0x29f9,	// (0x0001067e) main_location2_pane_t1_ParamLimits

0x2a0f,	// (0x00010694) main_location2_pane_t2_ParamLimits

0x2a25,	// (0x000106aa) main_location2_pane_t3_ParamLimits

0x2a3b,	// (0x000106c0) main_location2_pane_t4_ParamLimits

0x2a3b,	// (0x000106c0) main_location2_pane_t4

0xf3f3,	// (0x0001d078) main_location2_pane_t_ParamLimits

0x9bc2,	// (0x00017847) find_pinb_pane_g2_ParamLimits

0x9bc2,	// (0x00017847) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0001cdc6) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0001cdc6) find_pinb_pane_g

0x9bce,	// (0x00017853) find_pinb_pane_t1_ParamLimits

0x9be0,	// (0x00017865) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0001cdcb) find_pinb_pane_t_ParamLimits

0x992b,	// (0x000175b0) main_call3_pane

0x21d9,	// (0x0000fe5e) cale_month_day_heading_pane_t1_ParamLimits

0x2237,	// (0x0000febc) cale_month_day_heading_pane_t2_ParamLimits

0x229c,	// (0x0000ff21) cale_month_day_heading_pane_t3_ParamLimits

0x2301,	// (0x0000ff86) cale_month_day_heading_pane_t4_ParamLimits

0x2366,	// (0x0000ffeb) cale_month_day_heading_pane_t5_ParamLimits

0x23cb,	// (0x00010050) cale_month_day_heading_pane_t6_ParamLimits

0x2430,	// (0x000100b5) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0001cf4f) cale_month_day_heading_pane_t_ParamLimits

0xa358,	// (0x00017fdd) smil_status_volume_pane

0x32d5,	// (0x00010f5a) postcard_address_pane_ParamLimits

0x32d5,	// (0x00010f5a) postcard_address_pane

0x32eb,	// (0x00010f70) postcard_message_pane_ParamLimits

0x32eb,	// (0x00010f70) postcard_message_pane

0x37f6,	// (0x0001147b) call2_cli_visual_pane_t1_ParamLimits

0x37f6,	// (0x0001147b) call2_cli_visual_pane_t1

0x4062,	// (0x00011ce7) postcard_message_pane_t1_ParamLimits

0x4062,	// (0x00011ce7) postcard_message_pane_t1

0xbf42,	// (0x00019bc7) postcard_address_pane_t1_ParamLimits

0xbf42,	// (0x00019bc7) postcard_address_pane_t1

0x404e,	// (0x00011cd3) popup_call3_audio_in_window_ParamLimits

0x404e,	// (0x00011cd3) popup_call3_audio_in_window

0x3ed3,	// (0x00011b58) bg_popup_call3_in_pane_ParamLimits

0x3ed3,	// (0x00011b58) bg_popup_call3_in_pane

0x3f4f,	// (0x00011bd4) popup_call3_audio_in_window_g1_ParamLimits

0x3f4f,	// (0x00011bd4) popup_call3_audio_in_window_g1

0x3f6f,	// (0x00011bf4) popup_call3_audio_in_window_g2_ParamLimits

0x3f6f,	// (0x00011bf4) popup_call3_audio_in_window_g2

0x3f8f,	// (0x00011c14) popup_call3_audio_in_window_g3_ParamLimits

0x3f8f,	// (0x00011c14) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0001d2bb) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0001d2bb) popup_call3_audio_in_window_g

0x3fc0,	// (0x00011c45) popup_call3_audio_in_window_t1_ParamLimits

0x3fc0,	// (0x00011c45) popup_call3_audio_in_window_t1

0x3ffe,	// (0x00011c83) popup_call3_audio_in_window_t2_ParamLimits

0x3ffe,	// (0x00011c83) popup_call3_audio_in_window_t2

0x403c,	// (0x00011cc1) popup_call3_audio_in_window_t3_ParamLimits

0x403c,	// (0x00011cc1) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0001d2c4) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0001d2c4) popup_call3_audio_in_window_t

0xa9af,	// (0x00018634) bg_popup_call3_rect_pane

0xbc2d,	// (0x000198b2) bg_popup_call3_rect_pane_g1

0x9d94,	// (0x00017a19) bg_popup_call3_rect_pane_g2

0xbc35,	// (0x000198ba) bg_popup_call3_rect_pane_g3

0xbc3d,	// (0x000198c2) bg_popup_call3_rect_pane_g4

0xbc45,	// (0x000198ca) bg_popup_call3_rect_pane_g5

0xbc4d,	// (0x000198d2) bg_popup_call3_rect_pane_g6

0xbc55,	// (0x000198da) bg_popup_call3_rect_pane_g7

0x2e37,	// (0x00010abc) mup_visualizer_osc_pane

0xaa8e,	// (0x00018713) mup_visualizer_spec_pane

0x3f03,	// (0x00011b88) call3_video_qcif_pane_ParamLimits

0x3f03,	// (0x00011b88) call3_video_qcif_pane

0x3f16,	// (0x00011b9b) call3_video_qcif_uncrop_pane_ParamLimits

0x3f16,	// (0x00011b9b) call3_video_qcif_uncrop_pane

0x3f26,	// (0x00011bab) call3_video_subqcif_pane_ParamLimits

0x3f26,	// (0x00011bab) call3_video_subqcif_pane

0x3f3c,	// (0x00011bc1) call3_video_subqcif_uncrop_pane_ParamLimits

0x3f3c,	// (0x00011bc1) call3_video_subqcif_uncrop_pane

0x3faf,	// (0x00011c34) popup_call3_audio_in_window_g4_ParamLimits

0x3faf,	// (0x00011c34) popup_call3_audio_in_window_g4

0x3ec2,	// (0x00011b47) mup_spec_half_pane

0x3ecb,	// (0x00011b50) mup_spec_half_pane_cp

0xbee0,	// (0x00019b65) mup_osc_middle_pane

0xbee9,	// (0x00019b6e) mup_visualizer_osc_pane_g1

0x3ea2,	// (0x00011b27) mup_spec_bar_pane_ParamLimits

0x3ea2,	// (0x00011b27) mup_spec_bar_pane

0xbecd,	// (0x00019b52) mup_spec_bar_pane_g1

0xbed7,	// (0x00019b5c) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001d2af) mup_spec_bar_pane_g

0x120e,	// (0x0000ee93) aid_cale_week_size_cell_pane_ParamLimits

0x1221,	// (0x0000eea6) bg_cale_heading_pane_ParamLimits

0x9e1e,	// (0x00017aa3) bg_cale_pane_cp01_ParamLimits

0x123d,	// (0x0000eec2) cale_week_corner_pane_ParamLimits

0x1253,	// (0x0000eed8) cale_week_day_heading_pane_ParamLimits

0x126f,	// (0x0000eef4) cale_week_scroll_pane_g1_ParamLimits

0x1288,	// (0x0000ef0d) cale_week_scroll_pane_g2_ParamLimits

0x1299,	// (0x0000ef1e) cale_week_scroll_pane_g3_ParamLimits

0x12aa,	// (0x0000ef2f) cale_week_scroll_pane_g4_ParamLimits

0x12bb,	// (0x0000ef40) cale_week_scroll_pane_g5_ParamLimits

0x12cc,	// (0x0000ef51) cale_week_scroll_pane_g6_ParamLimits

0x12dd,	// (0x0000ef62) cale_week_scroll_pane_g7_ParamLimits

0x12ee,	// (0x0000ef73) cale_week_scroll_pane_g8_ParamLimits

0x12ff,	// (0x0000ef84) cale_week_scroll_pane_g9_ParamLimits

0x1310,	// (0x0000ef95) cale_week_scroll_pane_g10_ParamLimits

0x1321,	// (0x0000efa6) cale_week_scroll_pane_g11_ParamLimits

0x1332,	// (0x0000efb7) cale_week_scroll_pane_g12_ParamLimits

0x1343,	// (0x0000efc8) cale_week_scroll_pane_g13_ParamLimits

0x135c,	// (0x0000efe1) cale_week_scroll_pane_g14_ParamLimits

0x1375,	// (0x0000effa) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0001ce57) cale_week_scroll_pane_g_ParamLimits

0x138e,	// (0x0000f013) cale_week_time_pane_ParamLimits

0x139f,	// (0x0000f024) grid_cale_week_pane_ParamLimits

0x9e37,	// (0x00017abc) listscroll_cale_week_pane_t1

0x13ba,	// (0x0000f03f) scroll_pane_cp08_ParamLimits

0x1eb6,	// (0x0000fb3b) cale_month_corner_pane_ParamLimits

0xa2f8,	// (0x00017f7d) cale_month_pane_t1

0x219a,	// (0x0000fe1f) cale_month_week_pane_ParamLimits

0x2812,	// (0x00010497) popup_call_status_window_g1_ParamLimits

0x2826,	// (0x000104ab) popup_call_status_window_g2_ParamLimits

0x283a,	// (0x000104bf) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0001cfff) popup_call_status_window_g_ParamLimits

0xa6e2,	// (0x00018367) aid_call2_pane

0x30ff,	// (0x00010d84) msg_header_pane_g1

0x32d5,	// (0x00010f5a) postcard_address2_pane_ParamLimits

0x32d5,	// (0x00010f5a) postcard_address2_pane

0x32eb,	// (0x00010f70) postcard_message2_pane_ParamLimits

0x32eb,	// (0x00010f70) postcard_message2_pane

0x3e5f,	// (0x00011ae4) message2_row_pane_ParamLimits

0x3e5f,	// (0x00011ae4) message2_row_pane

0xbe88,	// (0x00019b0d) address2_row_pane_ParamLimits

0xbe88,	// (0x00019b0d) address2_row_pane

0xbe9b,	// (0x00019b20) postcard_message2_row_pane_g1

0xbea3,	// (0x00019b28) postcard_message2_row_pane_t1

0xbe9b,	// (0x00019b20) address2_row_pane_g1

0xbea3,	// (0x00019b28) address2_row_pane_t1

0x15c8,	// (0x0000f24d) aid_size_cell_vorec

0x992b,	// (0x000175b0) main_rss_pane

0x3e82,	// (0x00011b07) rss_list_single_pane_ParamLimits

0x3e82,	// (0x00011b07) rss_list_single_pane

0xbeb1,	// (0x00019b36) rss_list_single_pane_t1

0xbebf,	// (0x00019b44) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0001d2aa) rss_list_single_pane_t

0x992b,	// (0x000175b0) main_camera2_pane

0x992b,	// (0x000175b0) main_video2_pane

0x40d1,	// (0x00011d56) cams_zoom_pane_cp2_ParamLimits

0x40d1,	// (0x00011d56) cams_zoom_pane_cp2

0x40e8,	// (0x00011d6d) image2_vga_pane_ParamLimits

0x40e8,	// (0x00011d6d) image2_vga_pane

0x4130,	// (0x00011db5) main_camera2_pane_g1_ParamLimits

0x4130,	// (0x00011db5) main_camera2_pane_g1

0x4150,	// (0x00011dd5) main_camera2_pane_g2_ParamLimits

0x4150,	// (0x00011dd5) main_camera2_pane_g2

0x4167,	// (0x00011dec) main_camera2_pane_g3_ParamLimits

0x4167,	// (0x00011dec) main_camera2_pane_g3

0x417e,	// (0x00011e03) main_camera2_pane_g4_ParamLimits

0x417e,	// (0x00011e03) main_camera2_pane_g4

0x4195,	// (0x00011e1a) main_camera2_pane_g5_ParamLimits

0x4195,	// (0x00011e1a) main_camera2_pane_g5

0x41ac,	// (0x00011e31) main_camera2_pane_g6_ParamLimits

0x41ac,	// (0x00011e31) main_camera2_pane_g6

0x41c3,	// (0x00011e48) main_camera2_pane_g7_ParamLimits

0x41c3,	// (0x00011e48) main_camera2_pane_g7

0x41da,	// (0x00011e5f) main_camera2_pane_g8_ParamLimits

0x41da,	// (0x00011e5f) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0001d2cb) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0001d2cb) main_camera2_pane_g

0x4208,	// (0x00011e8d) main_camera2_pane_t1_ParamLimits

0x4208,	// (0x00011e8d) main_camera2_pane_t1

0x423d,	// (0x00011ec2) main_camera2_pane_t2_ParamLimits

0x423d,	// (0x00011ec2) main_camera2_pane_t2

0x425a,	// (0x00011edf) main_camera2_pane_t3_ParamLimits

0x425a,	// (0x00011edf) main_camera2_pane_t3

0x42b8,	// (0x00011f3d) main_camera2_pane_t4_ParamLimits

0x42b8,	// (0x00011f3d) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0001d2de) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0001d2de) main_camera2_pane_t

0x4341,	// (0x00011fc6) cams_zoom_pane_cp4_ParamLimits

0x4341,	// (0x00011fc6) cams_zoom_pane_cp4

0x4357,	// (0x00011fdc) image2_cif_pane_ParamLimits

0x4357,	// (0x00011fdc) image2_cif_pane

0x4382,	// (0x00012007) image2_subqcif_pane_ParamLimits

0x4382,	// (0x00012007) image2_subqcif_pane

0x439d,	// (0x00012022) main_video2_pane_g1_ParamLimits

0x439d,	// (0x00012022) main_video2_pane_g1

0x43b7,	// (0x0001203c) main_video2_pane_g2_ParamLimits

0x43b7,	// (0x0001203c) main_video2_pane_g2

0x43cd,	// (0x00012052) main_video2_pane_g3_ParamLimits

0x43cd,	// (0x00012052) main_video2_pane_g3

0x43e3,	// (0x00012068) main_video2_pane_g4_ParamLimits

0x43e3,	// (0x00012068) main_video2_pane_g4

0x43f9,	// (0x0001207e) main_video2_pane_g5_ParamLimits

0x43f9,	// (0x0001207e) main_video2_pane_g5

0x440f,	// (0x00012094) main_video2_pane_g6_ParamLimits

0x440f,	// (0x00012094) main_video2_pane_g6

0x0005,

0xf668,	// (0x0001d2ed) main_video2_pane_g_ParamLimits

0xf668,	// (0x0001d2ed) main_video2_pane_g

0x4429,	// (0x000120ae) main_video2_pane_t1_ParamLimits

0x4429,	// (0x000120ae) main_video2_pane_t1

0x444d,	// (0x000120d2) main_video2_pane_t2_ParamLimits

0x444d,	// (0x000120d2) main_video2_pane_t2

0x449d,	// (0x00012122) main_video2_pane_t3_ParamLimits

0x449d,	// (0x00012122) main_video2_pane_t3

0x0002,

0xf675,	// (0x0001d2fa) main_video2_pane_t_ParamLimits

0xf675,	// (0x0001d2fa) main_video2_pane_t

0x3951,	// (0x000115d6) call_muted_g2

0x0001,

0xf617,	// (0x0001d29c) call_muted_g

0x992b,	// (0x000175b0) main_mup2_pane

0x44e5,	// (0x0001216a) main_mup2_pane_g1_ParamLimits

0x44e5,	// (0x0001216a) main_mup2_pane_g1

0x44f1,	// (0x00012176) main_mup2_pane_g2_ParamLimits

0x44f1,	// (0x00012176) main_mup2_pane_g2

0xc063,	// (0x00019ce8) main_mup_pane_g13_cp1

0xc06b,	// (0x00019cf0) mup_volume_pane_cp1

0x450f,	// (0x00012194) main_mup2_pane_g4_ParamLimits

0x450f,	// (0x00012194) main_mup2_pane_g4

0x4521,	// (0x000121a6) main_mup2_pane_g5_ParamLimits

0x4521,	// (0x000121a6) main_mup2_pane_g5

0x4533,	// (0x000121b8) main_mup2_pane_g6_ParamLimits

0x4533,	// (0x000121b8) main_mup2_pane_g6

0x4545,	// (0x000121ca) main_mup2_pane_g7_ParamLimits

0x4545,	// (0x000121ca) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0001d301) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0001d301) main_mup2_pane_g

0x455d,	// (0x000121e2) main_mup2_pane_t1_ParamLimits

0x455d,	// (0x000121e2) main_mup2_pane_t1

0x4573,	// (0x000121f8) main_mup2_pane_t2_ParamLimits

0x4573,	// (0x000121f8) main_mup2_pane_t2

0x4589,	// (0x0001220e) main_mup2_pane_t3_ParamLimits

0x4589,	// (0x0001220e) main_mup2_pane_t3

0x459f,	// (0x00012224) main_mup2_pane_t4_ParamLimits

0x459f,	// (0x00012224) main_mup2_pane_t4

0x45b7,	// (0x0001223c) main_mup2_pane_t5_ParamLimits

0x45b7,	// (0x0001223c) main_mup2_pane_t5

0x45cf,	// (0x00012254) main_mup2_pane_t6_ParamLimits

0x45cf,	// (0x00012254) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0001d310) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0001d310) main_mup2_pane_t

0x45ff,	// (0x00012284) mup2_visualizer_pane_ParamLimits

0x45ff,	// (0x00012284) mup2_visualizer_pane

0x462d,	// (0x000122b2) mup_progress_pane_cp_ParamLimits

0x462d,	// (0x000122b2) mup_progress_pane_cp

0xc045,	// (0x00019cca) mup_volume_pane_cp_ParamLimits

0xc045,	// (0x00019cca) mup_volume_pane_cp

0x4643,	// (0x000122c8) mup2_visualizer_pane_g1_ParamLimits

0x4643,	// (0x000122c8) mup2_visualizer_pane_g1

0xbf84,	// (0x00019c09) mup2_visualizer_pane_g2_ParamLimits

0xbf84,	// (0x00019c09) mup2_visualizer_pane_g2

0x4658,	// (0x000122dd) mup2_visualizer_pane_g3_ParamLimits

0x4658,	// (0x000122dd) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0001d31d) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0001d31d) mup2_visualizer_pane_g

0xacf9,	// (0x0001897e) aid_size_cell_fmradio

0x3b01,	// (0x00011786) aid_height_parent_landcape

0xa160,	// (0x00017de5) wml_content_pane_cp

0xa168,	// (0x00017ded) wml_tabs_pane

0xa171,	// (0x00017df6) popup_wml_miniature_window

0xa179,	// (0x00017dfe) scroll_pane_cp021

0xa18d,	// (0x00017e12) wml_content_pane_comp8

0x992b,	// (0x000175b0) bg_popup_sub_pane_cp05

0xbfa2,	// (0x00019c27) popup_wml_miniature_window_g1

0xbfaa,	// (0x00019c2f) wml_miniature_view_pane

0x4664,	// (0x000122e9) aid_size_wml_view

0x466c,	// (0x000122f1) wml_miniature_view_pane_g1

0x4675,	// (0x000122fa) wml_miniature_view_pane_g2

0x467e,	// (0x00012303) wml_miniature_view_pane_g3

0x4686,	// (0x0001230b) wml_miniature_view_pane_g4

0x468e,	// (0x00012313) wml_miniature_view_pane_g5

0x4696,	// (0x0001231b) wml_miniature_view_pane_g6

0x469e,	// (0x00012323) wml_miniature_view_pane_g7

0x46a6,	// (0x0001232b) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0001d324) wml_miniature_view_pane_g

0xbfb2,	// (0x00019c37) background_graphic_ParamLimits

0xbfb2,	// (0x00019c37) background_graphic

0xbfbe,	// (0x00019c43) wml_tabs_2_pane

0xbfc7,	// (0x00019c4c) wml_tabs_3_pane_ParamLimits

0xbfc7,	// (0x00019c4c) wml_tabs_3_pane

0xbfd9,	// (0x00019c5e) wml_tabs_4_pane_ParamLimits

0xbfd9,	// (0x00019c5e) wml_tabs_4_pane

0xbfef,	// (0x00019c74) wml_tabs_5_pane_ParamLimits

0xbfef,	// (0x00019c74) wml_tabs_5_pane

0xc009,	// (0x00019c8e) wml_tabs_pane_g2_ParamLimits

0xc009,	// (0x00019c8e) wml_tabs_pane_g2

0xc01d,	// (0x00019ca2) wml_tabs_pane_g3_ParamLimits

0xc01d,	// (0x00019ca2) wml_tabs_pane_g3

0x46ae,	// (0x00012333) wml_tabs_2_active_pane_ParamLimits

0x46ae,	// (0x00012333) wml_tabs_2_active_pane

0x46c2,	// (0x00012347) wml_tabs_2_passive_pane_ParamLimits

0x46c2,	// (0x00012347) wml_tabs_2_passive_pane

0x46d6,	// (0x0001235b) wml_tabs_3_active_pane_cp_ParamLimits

0x46d6,	// (0x0001235b) wml_tabs_3_active_pane_cp

0x46eb,	// (0x00012370) wml_tabs_3_passive_pane_ParamLimits

0x46eb,	// (0x00012370) wml_tabs_3_passive_pane

0x46fe,	// (0x00012383) wml_tabs_3_passive_pane_cp_ParamLimits

0x46fe,	// (0x00012383) wml_tabs_3_passive_pane_cp

0x4715,	// (0x0001239a) tabs_4_active_pane

0x471d,	// (0x000123a2) tabs_4_passive_pane

0x4727,	// (0x000123ac) tabs_4_passive_pane_cp

0x472f,	// (0x000123b4) tabs_4_passive_pane_cp2

0x3815,	// (0x0001149a) aid_height_text

0x2e09,	// (0x00010a8e) mup_volume_cont_pane_ParamLimits

0x2e09,	// (0x00010a8e) mup_volume_cont_pane

0x0e12,	// (0x0000ea97) aid_size_cell_pinb

0x0e1c,	// (0x0000eaa1) aid_size_list_pinb

0x4619,	// (0x0001229e) mup2_volume_cont_pane_ParamLimits

0x4619,	// (0x0001229e) mup2_volume_cont_pane

0xc031,	// (0x00019cb6) mup2_volume_cont_pane_g1_ParamLimits

0xc031,	// (0x00019cb6) mup2_volume_cont_pane_g1

0x0af7,	// (0x0000e77c) aid_size_cell_touch_ParamLimits

0x0af7,	// (0x0000e77c) aid_size_cell_touch

0x0d01,	// (0x0000e986) touch_pane_ParamLimits

0x0d01,	// (0x0000e986) touch_pane

0x9499,	// (0x0001711e) main_rss2_pane

0xc073,	// (0x00019cf8) listscroll_rss2_pane

0xc07c,	// (0x00019d01) rss2_navigation_pane

0xc084,	// (0x00019d09) list_rss2_pane

0xa875,	// (0x000184fa) scroll_pane_cp22

0xc08c,	// (0x00019d11) rss2_navigation_pane_g1

0xc095,	// (0x00019d1a) rss2_navigation_pane_g2

0xc09d,	// (0x00019d22) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0001d335) rss2_navigation_pane_g

0xc0a5,	// (0x00019d2a) rss2_navigation_pane_t1

0x4739,	// (0x000123be) rss2_list_single_pane_ParamLimits

0x4739,	// (0x000123be) rss2_list_single_pane

0xc0b3,	// (0x00019d38) rss2_list_single_pane_t2

0xc0c1,	// (0x00019d46) rss2_list_single_pane_t3_ParamLimits

0xc0c1,	// (0x00019d46) rss2_list_single_pane_t3

0xc0de,	// (0x00019d63) rss2_list_single_pane_t4

0x25fc,	// (0x00010281) smil_status_pane_g1

0x950a,	// (0x0001718f) main_image2_pane_ParamLimits

0x950a,	// (0x0001718f) main_image2_pane

0x41f1,	// (0x00011e76) main_camera2_pane_g9_ParamLimits

0x41f1,	// (0x00011e76) main_camera2_pane_g9

0x430d,	// (0x00011f92) main_camera2_pane_t5_ParamLimits

0x430d,	// (0x00011f92) main_camera2_pane_t5

0xbf59,	// (0x00019bde) main_camera2_pane_t6_ParamLimits

0xbf59,	// (0x00019bde) main_camera2_pane_t6

0x4753,	// (0x000123d8) main_image2_pane_g1_ParamLimits

0x4753,	// (0x000123d8) main_image2_pane_g1

0x352c,	// (0x000111b1) smil2_video_pane_ParamLimits

0x352c,	// (0x000111b1) smil2_video_pane

0x94b7,	// (0x0001713c) aid_zoom_text_primary_cp

0x9500,	// (0x00017185) popup_preview_fixed_window

0xa0c9,	// (0x00017d4e) im_reading_pane_g1

0x40c3,	// (0x00011d48) cams2_bc_adjust_pane_cp_ParamLimits

0x40c3,	// (0x00011d48) cams2_bc_adjust_pane_cp

0x4333,	// (0x00011fb8) cams2_bc_adjust_pane_ParamLimits

0x4333,	// (0x00011fb8) cams2_bc_adjust_pane

0xc0ec,	// (0x00019d71) cams2_bc_adjust_pane_g1

0xc0f4,	// (0x00019d79) cams2_slider_pane

0xc0fd,	// (0x00019d82) cams2_slider_pane_g1

0xc106,	// (0x00019d8b) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0001d33c) cams2_slider_pane_g

0x0f0c,	// (0x0000eb91) calc_display_pane_ParamLimits

0x0f32,	// (0x0000ebb7) calc_paper_pane_ParamLimits

0x0f55,	// (0x0000ebda) grid_calc_pane_ParamLimits

0xa744,	// (0x000183c9) popup_clock_digital_window_t1_ParamLimits

0xac96,	// (0x0001891b) main_image_pane_t1

0x0eee,	// (0x0000eb73) aid_size_cell_calc_ParamLimits

0x0eee,	// (0x0000eb73) aid_size_cell_calc

0x3b47,	// (0x000117cc) popup_blid_sat_info2_window_ParamLimits

0x3b47,	// (0x000117cc) popup_blid_sat_info2_window

0xc128,	// (0x00019dad) aid_size_cell_blid

0xc130,	// (0x00019db5) bg_popup_window_pane_cp07

0xc153,	// (0x00019dd8) grid_popup_blid_pane

0xc15d,	// (0x00019de2) heading_pane_cp05_ParamLimits

0xc15d,	// (0x00019de2) heading_pane_cp05

0xc227,	// (0x00019eac) cell_popup_blid_pane_ParamLimits

0xc227,	// (0x00019eac) cell_popup_blid_pane

0xc251,	// (0x00019ed6) cell_popup_blid_pane_g1

0xc259,	// (0x00019ede) cell_popup_blid_pane_t1

0x45e9,	// (0x0001226e) mup2_indicator_pane_ParamLimits

0x45e9,	// (0x0001226e) mup2_indicator_pane

0xa9af,	// (0x00018634) mup2_visualizer_osc_pane

0xbf90,	// (0x00019c15) mup2_visualizer_spec_pane_ParamLimits

0xbf90,	// (0x00019c15) mup2_visualizer_spec_pane

0x4769,	// (0x000123ee) mup2_spec_half_pane

0x4772,	// (0x000123f7) mup2_spec_half_pane_cp

0x477a,	// (0x000123ff) mup2_spec_bar_pane_ParamLimits

0x477a,	// (0x000123ff) mup2_spec_bar_pane

0xbecd,	// (0x00019b52) mup2_spec_bar_pane_g1

0xbed7,	// (0x00019b5c) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0001d2af) mup2_spec_bar_pane_g

0x479a,	// (0x0001241f) mup2_osc_middle_pane

0xbee9,	// (0x00019b6e) mup2_visualizer_osc_pane_g1

0x9538,	// (0x000171bd) popup_number_entry_window_t1_ParamLimits

0x954b,	// (0x000171d0) popup_number_entry_window_t2_ParamLimits

0x955d,	// (0x000171e2) popup_number_entry_window_t3_ParamLimits

0x0d53,	// (0x0000e9d8) popup_number_entry_window_t5_ParamLimits

0x0d53,	// (0x0000e9d8) popup_number_entry_window_t5

0xf0ec,	// (0x0001cd71) popup_number_entry_window_t_ParamLimits

0x956f,	// (0x000171f4) text_title_cp2_ParamLimits

0xab70,	// (0x000187f5) aid_hotspot_pointer_text2_pane

0xab96,	// (0x0001881b) main_viewer_pane_g9_ParamLimits

0xab96,	// (0x0001881b) main_viewer_pane_g9

0xa2f8,	// (0x00017f7d) cale_month_pane_t1_ParamLimits

0xa38d,	// (0x00018012) bg_cale_pane_ParamLimits

0xa3a5,	// (0x0001802a) list_cale_pane_ParamLimits

0x9e37,	// (0x00017abc) listscroll_cale_day_pane_t1

0xa3b6,	// (0x0001803b) scroll_pane_cp09_ParamLimits

0x2e3f,	// (0x00010ac4) main_mup_eq_pane_t1_ParamLimits

0x2e3f,	// (0x00010ac4) main_mup_eq_pane_t1

0x2e5b,	// (0x00010ae0) main_mup_eq_pane_t2_ParamLimits

0x2e5b,	// (0x00010ae0) main_mup_eq_pane_t2

0x2e77,	// (0x00010afc) main_mup_eq_pane_t3_ParamLimits

0x2e77,	// (0x00010afc) main_mup_eq_pane_t3

0x2e95,	// (0x00010b1a) main_mup_eq_pane_t4_ParamLimits

0x2e95,	// (0x00010b1a) main_mup_eq_pane_t4

0x2eb3,	// (0x00010b38) main_mup_eq_pane_t5_ParamLimits

0x2eb3,	// (0x00010b38) main_mup_eq_pane_t5

0x2ed1,	// (0x00010b56) main_mup_eq_pane_t6_ParamLimits

0x2ed1,	// (0x00010b56) main_mup_eq_pane_t6

0x2ee7,	// (0x00010b6c) main_mup_eq_pane_t7_ParamLimits

0x2ee7,	// (0x00010b6c) main_mup_eq_pane_t7

0x2efd,	// (0x00010b82) main_mup_eq_pane_t8_ParamLimits

0x2efd,	// (0x00010b82) main_mup_eq_pane_t8

0x2f13,	// (0x00010b98) main_mup_eq_pane_t9_ParamLimits

0x2f13,	// (0x00010b98) main_mup_eq_pane_t9

0x2f2f,	// (0x00010bb4) main_mup_eq_pane_t10_ParamLimits

0x2f2f,	// (0x00010bb4) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0001d0fe) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0001d0fe) main_mup_eq_pane_t

0x3004,	// (0x00010c89) mup_equalizer_pane_cp5_ParamLimits

0x301c,	// (0x00010ca1) mup_equalizer_pane_cp6_ParamLimits

0x3034,	// (0x00010cb9) mup_equalizer_pane_cp7_ParamLimits

0x9499,	// (0x0001711e) main_gallery_pane

0xbef2,	// (0x00019b77) smil2_volume_pane

0xbefa,	// (0x00019b7f) smil_status_volume_pane_g1_ParamLimits

0xbf0d,	// (0x00019b92) smil_status_volume_pane_g2_ParamLimits

0xbf20,	// (0x00019ba5) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0001d2b4) smil_status_volume_pane_g_ParamLimits

0xc130,	// (0x00019db5) bg_popup_window_pane_cp07_ParamLimits

0xc13e,	// (0x00019dc3) blid_firmament_pane

0x47a3,	// (0x00012428) aid_size_cell_gallery_ParamLimits

0x47a3,	// (0x00012428) aid_size_cell_gallery

0x47b9,	// (0x0001243e) grid_gallery_pane_ParamLimits

0x47b9,	// (0x0001243e) grid_gallery_pane

0x47d4,	// (0x00012459) cell_gallery_pane_ParamLimits

0x47d4,	// (0x00012459) cell_gallery_pane

0xc267,	// (0x00019eec) bg_cell_gallery_focus_pane_ParamLimits

0xc267,	// (0x00019eec) bg_cell_gallery_focus_pane

0xc279,	// (0x00019efe) cell_gallery_pane_g1_ParamLimits

0xc279,	// (0x00019efe) cell_gallery_pane_g1

0x4825,	// (0x000124aa) cell_gallery_pane_g2_ParamLimits

0x4825,	// (0x000124aa) cell_gallery_pane_g2

0x4832,	// (0x000124b7) cell_gallery_pane_g3_ParamLimits

0x4832,	// (0x000124b7) cell_gallery_pane_g3

0xc285,	// (0x00019f0a) cell_gallery_pane_g4_ParamLimits

0xc285,	// (0x00019f0a) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0001d362) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0001d362) cell_gallery_pane_g

0xc291,	// (0x00019f16) bg_cell_gallery_focus_pane_g1

0xc299,	// (0x00019f1e) bg_cell_gallery_focus_pane_g2

0xc2a1,	// (0x00019f26) bg_cell_gallery_focus_pane_g3

0xc2a9,	// (0x00019f2e) bg_cell_gallery_focus_pane_g4

0xc2b1,	// (0x00019f36) bg_cell_gallery_focus_pane_g5

0xc2b9,	// (0x00019f3e) bg_cell_gallery_focus_pane_g6

0xc2c1,	// (0x00019f46) bg_cell_gallery_focus_pane_g7

0xc2c9,	// (0x00019f4e) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0001d36b) bg_cell_gallery_focus_pane_g

0xc2d1,	// (0x00019f56) aid_firma_cardinal

0xc2e5,	// (0x00019f6a) blid_firmament_pane_t1

0xc2fc,	// (0x00019f81) blid_firmament_pane_t2

0xc313,	// (0x00019f98) blid_firmament_pane_t3

0xc32a,	// (0x00019faf) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0001d37c) blid_firmament_pane_t

0xc341,	// (0x00019fc6) blid_sat_info_pane

0xc351,	// (0x00019fd6) blid_sat_info_pane_g1

0xc351,	// (0x00019fd6) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0001d385) blid_sat_info_pane_g

0xc35b,	// (0x00019fe0) blid_sat_info_pane_t1

0xc369,	// (0x00019fee) smil2_volume_content_pane

0xc372,	// (0x00019ff7) smil2_volume_pane_g1

0xc37a,	// (0x00019fff) smil2_volume_content_pane_g1

0xc383,	// (0x0001a008) smil2_volume_content_pane_g2

0xc38c,	// (0x0001a011) smil2_volume_content_pane_g3

0xc395,	// (0x0001a01a) smil2_volume_content_pane_g4

0xc39e,	// (0x0001a023) smil2_volume_content_pane_g5

0xc3a7,	// (0x0001a02c) smil2_volume_content_pane_g6

0xc3b0,	// (0x0001a035) smil2_volume_content_pane_g7

0xc3b9,	// (0x0001a03e) smil2_volume_content_pane_g8

0xc3c2,	// (0x0001a047) smil2_volume_content_pane_g9

0xc3cb,	// (0x0001a050) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0001d38a) smil2_volume_content_pane_g

0x141a,	// (0x0000f09f) cale_week_day_heading_pane_t1_ParamLimits

0x142e,	// (0x0000f0b3) cale_week_day_heading_pane_t2_ParamLimits

0x1442,	// (0x0000f0c7) cale_week_day_heading_pane_t3_ParamLimits

0x1456,	// (0x0000f0db) cale_week_day_heading_pane_t4_ParamLimits

0x146a,	// (0x0000f0ef) cale_week_day_heading_pane_t5_ParamLimits

0x147e,	// (0x0000f103) cale_week_day_heading_pane_t6_ParamLimits

0x1492,	// (0x0000f117) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0001ce76) cale_week_day_heading_pane_t_ParamLimits

0x9e49,	// (0x00017ace) bg_cale_side_pane_ParamLimits

0x14a6,	// (0x0000f12b) cale_week_time_pane_t1_ParamLimits

0x14be,	// (0x0000f143) cale_week_time_pane_t2_ParamLimits

0x14d6,	// (0x0000f15b) cale_week_time_pane_t3_ParamLimits

0x14ee,	// (0x0000f173) cale_week_time_pane_t4_ParamLimits

0x1506,	// (0x0000f18b) cale_week_time_pane_t5_ParamLimits

0x151e,	// (0x0000f1a3) cale_week_time_pane_t6_ParamLimits

0x1536,	// (0x0000f1bb) cale_week_time_pane_t7_ParamLimits

0x1552,	// (0x0000f1d7) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0001ce85) cale_week_time_pane_t_ParamLimits

0x1572,	// (0x0000f1f7) cell_cale_week_pane_g2_ParamLimits

0x9e49,	// (0x00017ace) bg_cale_side_pane_cp01_ParamLimits

0x2495,	// (0x0001011a) cale_month_week_pane_t1_ParamLimits

0x24ac,	// (0x00010131) cale_month_week_pane_t2_ParamLimits

0x24c3,	// (0x00010148) cale_month_week_pane_t3_ParamLimits

0x24da,	// (0x0001015f) cale_month_week_pane_t4_ParamLimits

0x24f1,	// (0x00010176) cale_month_week_pane_t5_ParamLimits

0x2508,	// (0x0001018d) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0001cf5e) cale_month_week_pane_t_ParamLimits

0xa334,	// (0x00017fb9) cell_cale_month_pane_g1_ParamLimits

0x9499,	// (0x0001711e) main_cale_event_viewer_pane

0x9499,	// (0x0001711e) listscroll_cale_event_viewer_pane

0xc3d4,	// (0x0001a059) list_cale_ev_pane

0xc3dc,	// (0x0001a061) scroll_pane_cp023

0x483f,	// (0x000124c4) field_cale_ev_pane_ParamLimits

0x483f,	// (0x000124c4) field_cale_ev_pane

0xc3e8,	// (0x0001a06d) field_cale_ev_content_pane_ParamLimits

0xc3e8,	// (0x0001a06d) field_cale_ev_content_pane

0xc3f4,	// (0x0001a079) field_cale_ev_pane_g1_ParamLimits

0xc3f4,	// (0x0001a079) field_cale_ev_pane_g1

0xc400,	// (0x0001a085) field_cale_ev_pane_g2_ParamLimits

0xc400,	// (0x0001a085) field_cale_ev_pane_g2

0xc418,	// (0x0001a09d) field_cale_ev_pane_g3_ParamLimits

0xc418,	// (0x0001a09d) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0001d39f) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0001d39f) field_cale_ev_pane_g

0xc430,	// (0x0001a0b5) field_cale_ev_pane_t1_ParamLimits

0xc430,	// (0x0001a0b5) field_cale_ev_pane_t1

0x4863,	// (0x000124e8) field_cale_ev_content_pane_t1_ParamLimits

0x4863,	// (0x000124e8) field_cale_ev_content_pane_t1

0xab3a,	// (0x000187bf) bg_button_pane_cp01

0x9c73,	// (0x000178f8) listscroll_cale_week_pane_ParamLimits

0x1204,	// (0x0000ee89) popup_toolbar_window_cp01

0x9e37,	// (0x00017abc) listscroll_cale_week_pane_t1_ParamLimits

0x9c73,	// (0x000178f8) listscroll_cale_day_pane_ParamLimits

0x265c,	// (0x000102e1) popup_toolbar_window_cp02

0x9e37,	// (0x00017abc) listscroll_cale_day_pane_t1_ParamLimits

0x9c73,	// (0x000178f8) main_cale_month_pane_ParamLimits

0x3dc7,	// (0x00011a4c) popup_toolbar_window_cp03_ParamLimits

0x3dc7,	// (0x00011a4c) popup_toolbar_window_cp03

0x33ea,	// (0x0001106f) main_image_pane_g2_ParamLimits

0x33ea,	// (0x0001106f) main_image_pane_g2

0x33fb,	// (0x00011080) main_image_pane_g3_ParamLimits

0x33fb,	// (0x00011080) main_image_pane_g3

0x0002,

0xf50b,	// (0x0001d190) main_image_pane_g_ParamLimits

0xf50b,	// (0x0001d190) main_image_pane_g

0xac96,	// (0x0001891b) main_image_pane_t1_ParamLimits

0x340c,	// (0x00011091) main_image_pane_t2_ParamLimits

0x340c,	// (0x00011091) main_image_pane_t2

0x341e,	// (0x000110a3) main_image_pane_t3_ParamLimits

0x341e,	// (0x000110a3) main_image_pane_t3

0x3446,	// (0x000110cb) main_image_pane_t4_ParamLimits

0x3446,	// (0x000110cb) main_image_pane_t4

0x0003,

0xf512,	// (0x0001d197) main_image_pane_t_ParamLimits

0xf512,	// (0x0001d197) main_image_pane_t

0x3466,	// (0x000110eb) popup_image_details_window_cp01

0x3470,	// (0x000110f5) popup_toobar_trans_pane_cp01_ParamLimits

0x3470,	// (0x000110f5) popup_toobar_trans_pane_cp01

0x3c3a,	// (0x000118bf) popup_image_details_window_ParamLimits

0x3c3a,	// (0x000118bf) popup_image_details_window

0xbe3e,	// (0x00019ac3) popup_image_focus_window

0x407d,	// (0x00011d02) camera2_autofocus_pane_ParamLimits

0x407d,	// (0x00011d02) camera2_autofocus_pane

0x9499,	// (0x0001711e) bg_popup_sub_pane_cp06

0xc447,	// (0x0001a0cc) popup_image_focus_window_g1

0xc44f,	// (0x0001a0d4) popup_image_focus_window_g2

0xc457,	// (0x0001a0dc) popup_image_focus_window_g3

0xc45f,	// (0x0001a0e4) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0001d3a6) popup_image_focus_window_g

0xc467,	// (0x0001a0ec) popup_image_focus_window_t1

0xc475,	// (0x0001a0fa) popup_image_focus_window_t2

0xc485,	// (0x0001a10a) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0001d3af) popup_image_focus_window_t

0xc493,	// (0x0001a118) camera2_autofocus_pane_g1

0x950a,	// (0x0001718f) bg_tb_trans_pane_cp01

0xc4a1,	// (0x0001a126) popup_image_details_window_g1

0xc4b4,	// (0x0001a139) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0001d3c1) popup_image_details_window_g

0xc4dd,	// (0x0001a162) popup_image_details_window_t1

0xc4ef,	// (0x0001a174) popup_image_details_window_t2

0xc508,	// (0x0001a18d) popup_image_details_window_t3

0xc51c,	// (0x0001a1a1) popup_image_details_window_t4

0xc537,	// (0x0001a1bc) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0001d3c8) popup_image_details_window_t

0x9c45,	// (0x000178ca) bg_calc_paper_pane_ParamLimits

0x9499,	// (0x0001711e) grid_highlight_pane_cp013

0x9c59,	// (0x000178de) list_calc_pane_ParamLimits

0x9c6b,	// (0x000178f0) scroll_pane_cp024

0x9c73,	// (0x000178f8) bg_calc_display_pane_ParamLimits

0x104c,	// (0x0000ecd1) calc_display_pane_t1_ParamLimits

0x105e,	// (0x0000ece3) calc_display_pane_t2_ParamLimits

0x9c7f,	// (0x00017904) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0001cdf8) calc_display_pane_t_ParamLimits

0x1121,	// (0x0000eda6) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0001ce15) cell_calc_pane_g

0x112a,	// (0x0000edaf) cell_calc_pane_t1

0x9cf6,	// (0x0001797b) grid_highlight_pane_cp02_ParamLimits

0x9d0c,	// (0x00017991) toolbar_button_pane_cp01_ParamLimits

0x9d0c,	// (0x00017991) toolbar_button_pane_cp01

0xacdb,	// (0x00018960) temp_image_control_pane_ParamLimits

0xacdb,	// (0x00018960) temp_image_control_pane

0x950a,	// (0x0001718f) main_mp3_pane

0xc551,	// (0x0001a1d6) temp_image_control_pane_g1_ParamLimits

0xc551,	// (0x0001a1d6) temp_image_control_pane_g1

0xc55f,	// (0x0001a1e4) temp_image_control_pane_g2_ParamLimits

0xc55f,	// (0x0001a1e4) temp_image_control_pane_g2

0xc571,	// (0x0001a1f6) temp_image_control_pane_g3_ParamLimits

0xc571,	// (0x0001a1f6) temp_image_control_pane_g3

0x48b4,	// (0x00012539) temp_image_control_pane_g4_ParamLimits

0x48b4,	// (0x00012539) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0001d3d3) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0001d3d3) temp_image_control_pane_g

0xc551,	// (0x0001a1d6) main_mp3_pane_g1

0x48c7,	// (0x0001254c) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0001d3dc) main_mp3_pane_g

0xc5b4,	// (0x0001a239) main_mp3_pane_t1

0x9f18,	// (0x00017b9d) main_camera_pane_g8_ParamLimits

0x9f18,	// (0x00017b9d) main_camera_pane_g8

0x1843,	// (0x0000f4c8) main_video_pane_g7_ParamLimits

0x1843,	// (0x0000f4c8) main_video_pane_g7

0xbf72,	// (0x00019bf7) main_camera2_pane_t7_ParamLimits

0xbf72,	// (0x00019bf7) main_camera2_pane_t7

0xa120,	// (0x00017da5) scroll_pane_cp025_ParamLimits

0xa120,	// (0x00017da5) scroll_pane_cp025

0xa134,	// (0x00017db9) scroll_pane_cp026_ParamLimits

0xa134,	// (0x00017db9) scroll_pane_cp026

0xa143,	// (0x00017dc8) wml_content_pane_ParamLimits

0x9499,	// (0x0001711e) main_touch_calib_pane

0x498f,	// (0x00012614) main_touch_calib_pane_g1

0x499b,	// (0x00012620) main_touch_calib_pane_g2

0x49a7,	// (0x0001262c) main_touch_calib_pane_g3

0x49b3,	// (0x00012638) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0001d3fa) main_touch_calib_pane_g

0x49bf,	// (0x00012644) main_touch_calib_pane_t1

0x49d9,	// (0x0001265e) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0001d403) main_touch_calib_pane_t

0xa8f0,	// (0x00018575) mup_progress_pane_cp02

0xa90f,	// (0x00018594) navi_pane_g1

0xa971,	// (0x000185f6) navi_pane_mp_t3

0x950a,	// (0x0001718f) main_mp3_pane_ParamLimits

0x3e09,	// (0x00011a8e) navi_pane_ParamLimits

0xc551,	// (0x0001a1d6) main_mp3_pane_g1_ParamLimits

0x48c7,	// (0x0001254c) main_mp3_pane_g2_ParamLimits

0x48d3,	// (0x00012558) main_mp3_pane_g3_ParamLimits

0x48d3,	// (0x00012558) main_mp3_pane_g3

0x48e1,	// (0x00012566) main_mp3_pane_g4_ParamLimits

0x48e1,	// (0x00012566) main_mp3_pane_g4

0xc581,	// (0x0001a206) main_mp3_pane_g5_ParamLimits

0xc581,	// (0x0001a206) main_mp3_pane_g5

0xc58f,	// (0x0001a214) main_mp3_pane_g6_ParamLimits

0xc58f,	// (0x0001a214) main_mp3_pane_g6

0xc59c,	// (0x0001a221) main_mp3_pane_g7_ParamLimits

0xc59c,	// (0x0001a221) main_mp3_pane_g7

0xc5a8,	// (0x0001a22d) main_mp3_pane_g8_ParamLimits

0xc5a8,	// (0x0001a22d) main_mp3_pane_g8

0xf757,	// (0x0001d3dc) main_mp3_pane_g_ParamLimits

0x48ed,	// (0x00012572) main_mp3_pane_t2

0x48fb,	// (0x00012580) main_mp3_pane_t3

0xc5c2,	// (0x0001a247) main_mp3_pane_t4

0xc5d0,	// (0x0001a255) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0001d3ed) main_mp3_pane_t

0xc5de,	// (0x0001a263) mup_progress_pane_cp01

0x94b7,	// (0x0001713c) aid_zoom_text_secondary2

0xc3d4,	// (0x0001a059) list_cale_ev2_pane

0xc3dc,	// (0x0001a061) scroll_pane_cp023_ParamLimits

0x4a31,	// (0x000126b6) field_cale_ev2_pane_ParamLimits

0x4a31,	// (0x000126b6) field_cale_ev2_pane

0xc5e6,	// (0x0001a26b) field_cale_ev2_pane_g1_ParamLimits

0xc5e6,	// (0x0001a26b) field_cale_ev2_pane_g1

0xc5f2,	// (0x0001a277) field_cale_ev2_pane_g2_ParamLimits

0xc5f2,	// (0x0001a277) field_cale_ev2_pane_g2

0xc60a,	// (0x0001a28f) field_cale_ev2_pane_g3_ParamLimits

0xc60a,	// (0x0001a28f) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0001d40e) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0001d40e) field_cale_ev2_pane_g

0xc62e,	// (0x0001a2b3) field_cale_ev2_pane_t1_ParamLimits

0xc62e,	// (0x0001a2b3) field_cale_ev2_pane_t1

0xc645,	// (0x0001a2ca) field_cale_ev2_pane_t2_ParamLimits

0xc645,	// (0x0001a2ca) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0001d417) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0001d417) field_cale_ev2_pane_t

0x3285,	// (0x00010f0a) main_postcard_pane_g5_ParamLimits

0x3285,	// (0x00010f0a) main_postcard_pane_g5

0x329b,	// (0x00010f20) main_postcard_pane_g6_ParamLimits

0x329b,	// (0x00010f20) main_postcard_pane_g6

0x15ef,	// (0x0000f274) camera2_autofocus_pane_cp_ParamLimits

0x15ef,	// (0x0000f274) camera2_autofocus_pane_cp

0x950a,	// (0x0001718f) main_mup3_pane

0x4a75,	// (0x000126fa) main_mup3_pane_g1_ParamLimits

0x4a75,	// (0x000126fa) main_mup3_pane_g1

0x4a97,	// (0x0001271c) main_mup3_pane_g2_ParamLimits

0x4a97,	// (0x0001271c) main_mup3_pane_g2

0x4b1a,	// (0x0001279f) main_mup3_pane_g3_ParamLimits

0x4b1a,	// (0x0001279f) main_mup3_pane_g3

0x4b5e,	// (0x000127e3) main_mup3_pane_g4_ParamLimits

0x4b5e,	// (0x000127e3) main_mup3_pane_g4

0x4ba2,	// (0x00012827) main_mup3_pane_g5_ParamLimits

0x4ba2,	// (0x00012827) main_mup3_pane_g5

0x4be6,	// (0x0001286b) main_mup3_pane_g6_ParamLimits

0x4be6,	// (0x0001286b) main_mup3_pane_g6

0xc65a,	// (0x0001a2df) main_mup3_pane_g7_ParamLimits

0xc65a,	// (0x0001a2df) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0001d427) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0001d427) main_mup3_pane_g

0x4c62,	// (0x000128e7) main_mup3_pane_t1_ParamLimits

0x4c62,	// (0x000128e7) main_mup3_pane_t1

0x4cdc,	// (0x00012961) main_mup3_pane_t2_ParamLimits

0x4cdc,	// (0x00012961) main_mup3_pane_t2

0x4db6,	// (0x00012a3b) main_mup3_pane_t4_ParamLimits

0x4db6,	// (0x00012a3b) main_mup3_pane_t4

0x4e14,	// (0x00012a99) main_mup3_pane_t5_ParamLimits

0x4e14,	// (0x00012a99) main_mup3_pane_t5

0x4ecc,	// (0x00012b51) main_mup3_pane_t6_ParamLimits

0x4ecc,	// (0x00012b51) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0001d438) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0001d438) main_mup3_pane_t

0x4f82,	// (0x00012c07) mup3_progress_pane_ParamLimits

0x4f82,	// (0x00012c07) mup3_progress_pane

0x5006,	// (0x00012c8b) popup_mup3_control_window_ParamLimits

0x5006,	// (0x00012c8b) popup_mup3_control_window

0xc668,	// (0x0001a2ed) popup_mup3_text_window

0x503c,	// (0x00012cc1) mup3_progress_pane_t1

0x5053,	// (0x00012cd8) mup3_progress_pane_t2

0xc670,	// (0x0001a2f5) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0001d445) mup3_progress_pane_t

0xc687,	// (0x0001a30c) mup_progress_pane_cp03

0x9499,	// (0x0001711e) bg_tb_trans_pane_cp04

0x506a,	// (0x00012cef) mup3_volume_pane

0x5072,	// (0x00012cf7) popup_mup3_control_window_g1

0x507b,	// (0x00012d00) mup3_volume_pane_g1

0x5084,	// (0x00012d09) mup3_volume_pane_g2

0x508d,	// (0x00012d12) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0001d44c) mup3_volume_pane_g

0x9499,	// (0x0001711e) bg_tb_trans_pane_cp03

0xc697,	// (0x0001a31c) popup_mup3_text_window_g1

0xc69f,	// (0x0001a324) popup_mup3_text_window_t1

0x9ccd,	// (0x00017952) list_calc_item_pane_g1_ParamLimits

0xc05a,	// (0x00019cdf) mup_volume_pane_cp_g1

0x49f3,	// (0x00012678) main_touch_calib_pane_t3

0x4a07,	// (0x0001268c) main_touch_calib_pane_t4

0x4a1b,	// (0x000126a0) main_touch_calib_pane_t5

0x94a3,	// (0x00017128) aid_cell_size_toolbar2

0x94ab,	// (0x00017130) aid_popup3_width_pane

0x94b7,	// (0x0001713c) aid_zoom_text_msg_primary

0x9ef8,	// (0x00017b7d) vorec_t7

0x9c91,	// (0x00017916) bg_calc_paper_pane_g1_ParamLimits

0x9c9d,	// (0x00017922) bg_calc_paper_pane_g2_ParamLimits

0x9ca9,	// (0x0001792e) bg_calc_paper_pane_g3_ParamLimits

0x9cb5,	// (0x0001793a) bg_calc_paper_pane_g4_ParamLimits

0x9cc1,	// (0x00017946) bg_calc_paper_pane_g5_ParamLimits

0x10ab,	// (0x0000ed30) bg_calc_paper_pane_g6_ParamLimits

0x10be,	// (0x0000ed43) bg_calc_paper_pane_g7_ParamLimits

0x10d1,	// (0x0000ed56) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0001cdff) bg_calc_paper_pane_g_ParamLimits

0x10e2,	// (0x0000ed67) calc_bg_paper_pane_g9_ParamLimits

0x1751,	// (0x0000f3d6) image_qvga_pane_ParamLimits

0x1751,	// (0x0000f3d6) image_qvga_pane

0x9b86,	// (0x0001780b) bg_popup_sub_pane_cp04_ParamLimits

0xac12,	// (0x00018897) popup_mup_playback_window_g1_ParamLimits

0xac1e,	// (0x000188a3) popup_mup_playback_window_t1_ParamLimits

0xac33,	// (0x000188b8) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0001d18b) popup_mup_playback_window_t_ParamLimits

0x4501,	// (0x00012186) main_mup2_pane_g3_ParamLimits

0x4501,	// (0x00012186) main_mup2_pane_g3

0x1a99,	// (0x0000f71e) popup_toolbar_window_cp04

0xb02e,	// (0x00018cb3) popup_call2_audio_second_window_g3_ParamLimits

0xb02e,	// (0x00018cb3) popup_call2_audio_second_window_g3

0xb438,	// (0x000190bd) popup_call2_audio_first_window_g4_ParamLimits

0xb438,	// (0x000190bd) popup_call2_audio_first_window_g4

0xbab7,	// (0x0001973c) popup_call2_audio_in_window_g4_ParamLimits

0xbab7,	// (0x0001973c) popup_call2_audio_in_window_g4

0x33cc,	// (0x00011051) aid_area_sk_bg_cut_ParamLimits

0x33cc,	// (0x00011051) aid_area_sk_bg_cut

0xac48,	// (0x000188cd) aid_area_sk_bg_cut_2_ParamLimits

0xac48,	// (0x000188cd) aid_area_sk_bg_cut_2

0x4815,	// (0x0001249a) aid_placing_details_win

0x481d,	// (0x000124a2) aid_placing_details_win_2

0xc493,	// (0x0001a118) camera2_autofocus_pane_g1_ParamLimits

0x0cac,	// (0x0000e931) popup_fixed_preview_cale_window_ParamLimits

0x0cac,	// (0x0000e931) popup_fixed_preview_cale_window

0xa9c9,	// (0x0001864e) navi_slider_pane_g3

0xa9d2,	// (0x00018657) navi_slider_pane_g4

0xa9db,	// (0x00018660) navi_slider_pane_g5

0xa9c9,	// (0x0001864e) navi_slider_pane_g6

0xa9e4,	// (0x00018669) navi_slider_pane_g7

0xab07,	// (0x0001878c) mup_scale_pane_g3

0xab10,	// (0x00018795) mup_scale_pane_g4

0xab19,	// (0x0001879e) mup_scale_pane_g5

0x304c,	// (0x00010cd1) mup_scale_pane_g6

0x3055,	// (0x00010cda) mup_scale_pane_g7

0xa9c9,	// (0x0001864e) cams2_slider_pane_g3

0xc10f,	// (0x00019d94) cams2_slider_pane_g4

0xc117,	// (0x00019d9c) cams2_slider_pane_g5

0xa9c9,	// (0x0001864e) cams2_slider_pane_g6

0xc11f,	// (0x00019da4) cams2_slider_pane_g7

0xc351,	// (0x00019fd6) camera2_autofocus_pane_cp_g1

0xc6ad,	// (0x0001a332) bg_popup_preview_window_pane_cp02_ParamLimits

0xc6ad,	// (0x0001a332) bg_popup_preview_window_pane_cp02

0xc6b9,	// (0x0001a33e) list_fp_cale_pane_ParamLimits

0xc6b9,	// (0x0001a33e) list_fp_cale_pane

0xc6c5,	// (0x0001a34a) popup_fixed_preview_cale_window_t1_ParamLimits

0xc6c5,	// (0x0001a34a) popup_fixed_preview_cale_window_t1

0x5096,	// (0x00012d1b) popup_fixed_preview_cale_window_t2_ParamLimits

0x5096,	// (0x00012d1b) popup_fixed_preview_cale_window_t2

0x50ab,	// (0x00012d30) popup_fixed_preview_cale_window_t3_ParamLimits

0x50ab,	// (0x00012d30) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0001d453) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0001d453) popup_fixed_preview_cale_window_t

0x50c2,	// (0x00012d47) list_single_fp_cale_pane_ParamLimits

0x50c2,	// (0x00012d47) list_single_fp_cale_pane

0xc6e3,	// (0x0001a368) list_single_fp_cale_pane_g1_ParamLimits

0xc6e3,	// (0x0001a368) list_single_fp_cale_pane_g1

0xc6ef,	// (0x0001a374) list_single_fp_cale_pane_g2_ParamLimits

0xc6ef,	// (0x0001a374) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0001d45a) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0001d45a) list_single_fp_cale_pane_g

0xc708,	// (0x0001a38d) list_single_fp_cale_pane_t1_ParamLimits

0xc708,	// (0x0001a38d) list_single_fp_cale_pane_t1

0xc71a,	// (0x0001a39f) list_single_fp_cale_pane_t2_ParamLimits

0xc71a,	// (0x0001a39f) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0001d461) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0001d461) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9499,	// (0x0001711e) main_dialer_pane

0x50da,	// (0x00012d5f) aid_cell_size_keypad

0x50e4,	// (0x00012d69) dialer_ne_pane

0x50ee,	// (0x00012d73) grid_dialer_command_1_pane

0x50f6,	// (0x00012d7b) grid_dialer_command_2_pane

0x50fe,	// (0x00012d83) grid_dialer_keypad_pane

0x5112,	// (0x00012d97) bg_popup_call_pane_cp06_ParamLimits

0x5112,	// (0x00012d97) bg_popup_call_pane_cp06

0x511e,	// (0x00012da3) dialer_ne_clear_pane_ParamLimits

0x511e,	// (0x00012da3) dialer_ne_clear_pane

0xc74d,	// (0x0001a3d2) dialer_ne_pane_g1

0xc755,	// (0x0001a3da) dialer_ne_pane_t1_ParamLimits

0xc755,	// (0x0001a3da) dialer_ne_pane_t1

0x512a,	// (0x00012daf) dialer_ne_pane_t2_ParamLimits

0x512a,	// (0x00012daf) dialer_ne_pane_t2

0x5154,	// (0x00012dd9) dialer_ne_pane_t3_ParamLimits

0x5154,	// (0x00012dd9) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0001d466) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0001d466) dialer_ne_pane_t

0x5184,	// (0x00012e09) dialer_ne_pane_t3_copy1_ParamLimits

0x5184,	// (0x00012e09) dialer_ne_pane_t3_copy1

0x51b3,	// (0x00012e38) cell_dialer_keypad_pane_ParamLimits

0x51b3,	// (0x00012e38) cell_dialer_keypad_pane

0x51ca,	// (0x00012e4f) cell_dialer_command_1_pane_ParamLimits

0x51ca,	// (0x00012e4f) cell_dialer_command_1_pane

0x51e0,	// (0x00012e65) cell_dialer_command_2_pane_ParamLimits

0x51e0,	// (0x00012e65) cell_dialer_command_2_pane

0xc767,	// (0x0001a3ec) bg_button_pane_cp02_ParamLimits

0xc767,	// (0x0001a3ec) bg_button_pane_cp02

0x51ef,	// (0x00012e74) cell_dialer_keypad_pane_g1_ParamLimits

0x51ef,	// (0x00012e74) cell_dialer_keypad_pane_g1

0xc767,	// (0x0001a3ec) bg_button_pane_cp03_ParamLimits

0xc767,	// (0x0001a3ec) bg_button_pane_cp03

0x5204,	// (0x00012e89) cell_dialer_command_1_pane_g1_ParamLimits

0x5204,	// (0x00012e89) cell_dialer_command_1_pane_g1

0xc773,	// (0x0001a3f8) bg_button_pane_cp04

0x5218,	// (0x00012e9d) cell_dialer_command_2_pane_g1

0xa9af,	// (0x00018634) bg_button_pane_cp06

0xc77b,	// (0x0001a400) dialer_ne_clear_pane_g1

0x2b2e,	// (0x000107b3) navi_pane_g2

0x2b5c,	// (0x000107e1) navi_pane_g3

0x0002,

0xf409,	// (0x0001d08e) navi_pane_g

0x2b87,	// (0x0001080c) navi_pane_mv_g2

0x2bae,	// (0x00010833) navi_pane_mv_g5

0x2bb6,	// (0x0001083b) navi_pane_mv_t1

0x9c73,	// (0x000178f8) main_clock2_pane

0x5255,	// (0x00012eda) main_clock2_list_pane_ParamLimits

0x5255,	// (0x00012eda) main_clock2_list_pane

0x528d,	// (0x00012f12) main_clock2_pane_t1_ParamLimits

0x528d,	// (0x00012f12) main_clock2_pane_t1

0x52c9,	// (0x00012f4e) main_clock2_pane_t2_ParamLimits

0x52c9,	// (0x00012f4e) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0001d46d) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0001d46d) main_clock2_pane_t

0x5355,	// (0x00012fda) popup_clock_analogue_window_cp03_ParamLimits

0x5355,	// (0x00012fda) popup_clock_analogue_window_cp03

0x537c,	// (0x00013001) popup_clock_digital_window_cp02_ParamLimits

0x537c,	// (0x00013001) popup_clock_digital_window_cp02

0x53f5,	// (0x0001307a) main_clock2_list_single_pane_ParamLimits

0x53f5,	// (0x0001307a) main_clock2_list_single_pane

0xa9af,	// (0x00018634) list_highlight_pane_cp05

0xc783,	// (0x0001a408) main_clock2_list_single_pane_t1

0x1a99,	// (0x0000f71e) popup_toolbar_window_cp04_ParamLimits

0x4884,	// (0x00012509) camera2_autofocus_pane_g2_ParamLimits

0x4884,	// (0x00012509) camera2_autofocus_pane_g2

0x4890,	// (0x00012515) camera2_autofocus_pane_g3_ParamLimits

0x4890,	// (0x00012515) camera2_autofocus_pane_g3

0x489c,	// (0x00012521) camera2_autofocus_pane_g4_ParamLimits

0x489c,	// (0x00012521) camera2_autofocus_pane_g4

0x48a8,	// (0x0001252d) camera2_autofocus_pane_g5_ParamLimits

0x48a8,	// (0x0001252d) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0001d3b6) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0001d3b6) camera2_autofocus_pane_g

0x4a55,	// (0x000126da) camera2_autofocus_pane_cp_g2

0x4a5d,	// (0x000126e2) camera2_autofocus_pane_cp_g3

0x4a65,	// (0x000126ea) camera2_autofocus_pane_cp_g4

0x4a6d,	// (0x000126f2) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0001d41c) camera2_autofocus_pane_cp_g

0x510a,	// (0x00012d8f) popup_dialer_spcha_window

0x9499,	// (0x0001711e) bg_popup_sub_pane_cp07

0xc791,	// (0x0001a416) list_spcha_pane

0xc799,	// (0x0001a41e) list_single_spcha_pane_ParamLimits

0xc799,	// (0x0001a41e) list_single_spcha_pane

0x9499,	// (0x0001711e) list_highlight_pane_cp06

0xc7aa,	// (0x0001a42f) list_single_spcha_pane_t1

0xb861,	// (0x000194e6) popup_call2_audio_out_window_g4_ParamLimits

0xb861,	// (0x000194e6) popup_call2_audio_out_window_g4

0x9499,	// (0x0001711e) main_imed2_pane

0xbe48,	// (0x00019acd) popup_imed_adjust2_window

0x3c52,	// (0x000118d7) popup_imed_trans_window_ParamLimits

0x3c52,	// (0x000118d7) popup_imed_trans_window

0xc189,	// (0x00019e0e) popup_blid_sat_info2_window_t1

0xc197,	// (0x00019e1c) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0001d34b) popup_blid_sat_info2_window_t

0x54ab,	// (0x00013130) aid_size_cell_colour_35

0x54cb,	// (0x00013150) aid_size_cell_colour_112

0x54eb,	// (0x00013170) aid_size_cell_effect

0xbe1c,	// (0x00019aa1) bg_tb_trans_pane_cp02

0xa429,	// (0x000180ae) heading_imed_pane

0x550b,	// (0x00013190) listscroll_imed_pane

0xc7b8,	// (0x0001a43d) heading_imed_pane_g1

0xc7c0,	// (0x0001a445) heading_imed_pane_t1

0xc7ce,	// (0x0001a453) grid_imed_colour_35_pane_ParamLimits

0xc7ce,	// (0x0001a453) grid_imed_colour_35_pane

0x5517,	// (0x0001319c) grid_imed_effect_pane

0xc7ea,	// (0x0001a46f) list_imed_aspect_pane

0x552e,	// (0x000131b3) scroll_pane_cp027_ParamLimits

0x552e,	// (0x000131b3) scroll_pane_cp027

0x553f,	// (0x000131c4) cell_imed_effect_pane_ParamLimits

0x553f,	// (0x000131c4) cell_imed_effect_pane

0xc7f2,	// (0x0001a477) cell_imed_colour_pane_ParamLimits

0xc7f2,	// (0x0001a477) cell_imed_colour_pane

0xc83c,	// (0x0001a4c1) cell_imed_colour_pane_g1_ParamLimits

0xc83c,	// (0x0001a4c1) cell_imed_colour_pane_g1

0xc84d,	// (0x0001a4d2) hgihlgiht_grid_pane_cp016_ParamLimits

0xc84d,	// (0x0001a4d2) hgihlgiht_grid_pane_cp016

0x5564,	// (0x000131e9) cell_imed_effect_pane_g1

0x556c,	// (0x000131f1) grid_highlight_pane_cp017

0xc85e,	// (0x0001a4e3) list_imed_single_pane_ParamLimits

0xc85e,	// (0x0001a4e3) list_imed_single_pane

0x9499,	// (0x0001711e) list_highlight_pane_cp07

0xc872,	// (0x0001a4f7) list_imed_aspect_pane_comp1_t1

0xbe1c,	// (0x00019aa1) bg_tb_trans_pane_cp05

0xc894,	// (0x0001a519) popup_imed_adjust2_window_g1

0xc8bb,	// (0x0001a540) popup_imed_adjust2_window_t1

0xc8d3,	// (0x0001a558) slider_imed_adjust_pane

0xc8e7,	// (0x0001a56c) slider_imed_adjust_pane_g1

0xc8f7,	// (0x0001a57c) slider_imed_adjust_pane_g2

0xc907,	// (0x0001a58c) slider_imed_adjust_pane_g3

0xc918,	// (0x0001a59d) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0001d48a) slider_imed_adjust_pane_g

0x5575,	// (0x000131fa) aid_size_cell_clipart2

0x5581,	// (0x00013206) grid_imed_clipart_pane

0xc929,	// (0x0001a5ae) scroll_pane_cp031

0x558b,	// (0x00013210) cell_imed_clipart_pane_ParamLimits

0x558b,	// (0x00013210) cell_imed_clipart_pane

0x55a8,	// (0x0001322d) cell_imed_clipart_pane_g1

0x9499,	// (0x0001711e) grid_highlight_pane_cp014

0x526a,	// (0x00012eef) main_clock2_pane_g1_ParamLimits

0x526a,	// (0x00012eef) main_clock2_pane_g1

0x539c,	// (0x00013021) aid_call2_pane_cp10

0x53ae,	// (0x00013033) aid_call_pane_cp10

0xa8e4,	// (0x00018569) popup_clock_analogue_window_cp10_g1

0xa8e4,	// (0x00018569) popup_clock_analogue_window_cp10_g2

0x53c0,	// (0x00013045) popup_clock_analogue_window_cp10_g3

0x53c0,	// (0x00013045) popup_clock_analogue_window_cp10_g4

0xa8e4,	// (0x00018569) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0001d478) popup_clock_analogue_window_cp10_g

0x53d6,	// (0x0001305b) popup_clock_analogue_window_cp10_t1

0x5407,	// (0x0001308c) clock_digital_number_pane_cp10_ParamLimits

0x5407,	// (0x0001308c) clock_digital_number_pane_cp10

0x5421,	// (0x000130a6) clock_digital_number_pane_cp11_ParamLimits

0x5421,	// (0x000130a6) clock_digital_number_pane_cp11

0x543b,	// (0x000130c0) clock_digital_number_pane_cp12_ParamLimits

0x543b,	// (0x000130c0) clock_digital_number_pane_cp12

0x5455,	// (0x000130da) clock_digital_number_pane_cp13_ParamLimits

0x5455,	// (0x000130da) clock_digital_number_pane_cp13

0x546f,	// (0x000130f4) clock_digital_separator_pane_cp10_ParamLimits

0x546f,	// (0x000130f4) clock_digital_separator_pane_cp10

0x5489,	// (0x0001310e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5489,	// (0x0001310e) popup_clock_digital_window_cp02_t1

0x9b7e,	// (0x00017803) clock_digital_number_pane_cp10_g1

0x9b7e,	// (0x00017803) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0001d493) clock_digital_number_pane_cp10_g

0x9b7e,	// (0x00017803) clock_digital_separator_pane_cp10_g1

0x9b7e,	// (0x00017803) clock_digital_separator_pane_g2_cp10

0xa97f,	// (0x00018604) navi_pane_vded_g4

0xa988,	// (0x0001860d) navi_pane_vded_g5

0xa991,	// (0x00018616) navi_pane_vded_t1

0x9499,	// (0x0001711e) main_vded_pane

0x55b1,	// (0x00013236) main_vded_pane_g1

0x55bd,	// (0x00013242) main_vded_pane_g2

0x55c9,	// (0x0001324e) main_vded_pane_g3

0x0002,

0xf813,	// (0x0001d498) main_vded_pane_g

0x55d5,	// (0x0001325a) main_vded_pane_t1

0x55e3,	// (0x00013268) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0001d49f) main_vded_pane_t

0x55f1,	// (0x00013276) vded_slider_pane

0x55fb,	// (0x00013280) vded_video_pane

0xc931,	// (0x0001a5b6) vded_video_pane_g1

0x5607,	// (0x0001328c) vded_video_pane_g2

0xc351,	// (0x00019fd6) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0001d4a4) vded_video_pane_g

0xc93b,	// (0x0001a5c0) vded_slider_pane_g1

0xc05a,	// (0x00019cdf) vded_slider_pane_g2

0xc944,	// (0x0001a5c9) vded_slider_pane_g3

0xc94d,	// (0x0001a5d2) vded_slider_pane_g4

0xc956,	// (0x0001a5db) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0001d4ab) vded_slider_pane_g

0x4ff0,	// (0x00012c75) mup3_rocker_pane_ParamLimits

0x4ff0,	// (0x00012c75) mup3_rocker_pane

0x5610,	// (0x00013295) mup3_control_keys_pane_g1

0x5618,	// (0x0001329d) mup3_control_keys_pane_g2

0x5620,	// (0x000132a5) mup3_control_keys_pane_g3

0x5628,	// (0x000132ad) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0001d4b6) mup3_control_keys_pane_g

0x0ce3,	// (0x0000e968) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0ce3,	// (0x0000e968) popup_toolbar2_fixed_window_cp01

0x5026,	// (0x00012cab) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5026,	// (0x00012cab) popup_toolbar2_fixed_window_cp02

0xb1a0,	// (0x00018e25) popup_call2_audio_second_window_t4_ParamLimits

0xb1a0,	// (0x00018e25) popup_call2_audio_second_window_t4

0xb6ce,	// (0x00019353) popup_call2_audio_first_window_t6_ParamLimits

0xb6ce,	// (0x00019353) popup_call2_audio_first_window_t6

0xb964,	// (0x000195e9) popup_call2_audio_out_window_t6_ParamLimits

0xb964,	// (0x000195e9) popup_call2_audio_out_window_t6

0x9499,	// (0x0001711e) main_vitu_pane

0x5638,	// (0x000132bd) aid_size_cell_itu_ParamLimits

0x5638,	// (0x000132bd) aid_size_cell_itu

0x950a,	// (0x0001718f) bg_popup_window_pane_cp08_ParamLimits

0x950a,	// (0x0001718f) bg_popup_window_pane_cp08

0x564e,	// (0x000132d3) field_vitu_entry_pane_ParamLimits

0x564e,	// (0x000132d3) field_vitu_entry_pane

0x5665,	// (0x000132ea) grid_vitu_function_pane_ParamLimits

0x5665,	// (0x000132ea) grid_vitu_function_pane

0x5680,	// (0x00013305) grid_vitu_itu_pane_ParamLimits

0x5680,	// (0x00013305) grid_vitu_itu_pane

0x569e,	// (0x00013323) cell_vitu_itu_pane_ParamLimits

0x569e,	// (0x00013323) cell_vitu_itu_pane

0x56c4,	// (0x00013349) cell_vitu_function_pane_ParamLimits

0x56c4,	// (0x00013349) cell_vitu_function_pane

0x950a,	// (0x0001718f) bg_popup_sub_pane_cp08_ParamLimits

0x950a,	// (0x0001718f) bg_popup_sub_pane_cp08

0x56df,	// (0x00013364) field_vitu_entry_pane_t1_ParamLimits

0x56df,	// (0x00013364) field_vitu_entry_pane_t1

0xc977,	// (0x0001a5fc) field_vitu_entry_pane_t2_ParamLimits

0xc977,	// (0x0001a5fc) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0001d4c4) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0001d4c4) field_vitu_entry_pane_t

0xc994,	// (0x0001a619) bg_button_pane_cp05_ParamLimits

0xc994,	// (0x0001a619) bg_button_pane_cp05

0x56ff,	// (0x00013384) cell_vitu_itu_pane_g1

0x5717,	// (0x0001339c) cell_vitu_itu_pane_t1_ParamLimits

0x5717,	// (0x0001339c) cell_vitu_itu_pane_t1

0x5729,	// (0x000133ae) cell_vitu_itu_pane_t2_ParamLimits

0x5729,	// (0x000133ae) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0001d4c9) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0001d4c9) cell_vitu_itu_pane_t

0xc9a2,	// (0x0001a627) bg_button_pane_cp07

0x575e,	// (0x000133e3) cell_vitu_function_pane_g1

0x9c0d,	// (0x00017892) main_calc_pane_g1

0x0b1b,	// (0x0000e7a0) aid_visual_content_pane

0x9499,	// (0x0001711e) main_vradio_pane

0x5767,	// (0x000133ec) main_vradio_pane_g1_ParamLimits

0x5767,	// (0x000133ec) main_vradio_pane_g1

0xc9ac,	// (0x0001a631) main_vradio_pane_g2_ParamLimits

0xc9ac,	// (0x0001a631) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0001d4d0) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0001d4d0) main_vradio_pane_g

0x577e,	// (0x00013403) main_vradio_pane_t1_ParamLimits

0x577e,	// (0x00013403) main_vradio_pane_t1

0x5793,	// (0x00013418) main_vradio_pane_t2_ParamLimits

0x5793,	// (0x00013418) main_vradio_pane_t2

0xc9b9,	// (0x0001a63e) main_vradio_pane_t3_ParamLimits

0xc9b9,	// (0x0001a63e) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0001d4d5) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0001d4d5) main_vradio_pane_t

0x57a8,	// (0x0001342d) vradio_rocker_control_pane_ParamLimits

0x57a8,	// (0x0001342d) vradio_rocker_control_pane

0x57ba,	// (0x0001343f) vradio_station_info_pane_ParamLimits

0x57ba,	// (0x0001343f) vradio_station_info_pane

0xc9cd,	// (0x0001a652) vradio_frequency_info_pane_ParamLimits

0xc9cd,	// (0x0001a652) vradio_frequency_info_pane

0xc351,	// (0x00019fd6) vradio_station_info_pane_g1

0xc9dc,	// (0x0001a661) vradio_station_info_pane_t1_ParamLimits

0xc9dc,	// (0x0001a661) vradio_station_info_pane_t1

0xc9fe,	// (0x0001a683) vradio_station_info_pane_t2_ParamLimits

0xc9fe,	// (0x0001a683) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0001d4dc) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0001d4dc) vradio_station_info_pane_t

0xca10,	// (0x0001a695) vradio_tuning_pane

0xca18,	// (0x0001a69d) vradio_rocker_control_pane_g1

0xca20,	// (0x0001a6a5) vradio_rocker_control_pane_g2

0xca28,	// (0x0001a6ad) vradio_rocker_control_pane_g3

0xca30,	// (0x0001a6b5) vradio_rocker_control_pane_g4

0xca38,	// (0x0001a6bd) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0001d4e1) vradio_rocker_control_pane_g

0x57ca,	// (0x0001344f) vradio_frequency_info_pane_g1

0xca40,	// (0x0001a6c5) vradio_frequency_info_pane_t1_ParamLimits

0xca40,	// (0x0001a6c5) vradio_frequency_info_pane_t1

0x57d4,	// (0x00013459) vradio_tuning_pane_g1

0x57df,	// (0x00013464) vradio_tuning_pane_t1

0x94c7,	// (0x0001714c) area_side_right_pane_ParamLimits

0x94c7,	// (0x0001714c) area_side_right_pane

0xbde3,	// (0x00019a68) status_small_pane_g1

0xbdeb,	// (0x00019a70) status_small_pane_g2

0xbdf4,	// (0x00019a79) status_small_pane_g3

0xbdfd,	// (0x00019a82) status_small_pane_g4

0x0003,

0xf61c,	// (0x0001d2a1) status_small_pane_g

0xbe06,	// (0x00019a8b) status_small_pane_t1

0x9499,	// (0x0001711e) main_video3_pane

0xca54,	// (0x0001a6d9) cams_zoom_vslider_pane

0xca5c,	// (0x0001a6e1) image3_wide_pane_ParamLimits

0xca5c,	// (0x0001a6e1) image3_wide_pane

0xca76,	// (0x0001a6fb) image3_wide_small_pane

0xca82,	// (0x0001a707) main_video3_pane_g1_ParamLimits

0xca82,	// (0x0001a707) main_video3_pane_g1

0xca9e,	// (0x0001a723) main_video3_pane_g2_ParamLimits

0xca9e,	// (0x0001a723) main_video3_pane_g2

0x0001,

0xf867,	// (0x0001d4ec) main_video3_pane_g_ParamLimits

0xf867,	// (0x0001d4ec) main_video3_pane_g

0xcaba,	// (0x0001a73f) main_video3_pane_t1_ParamLimits

0xcaba,	// (0x0001a73f) main_video3_pane_t1

0xcae5,	// (0x0001a76a) main_video3_pane_t2_ParamLimits

0xcae5,	// (0x0001a76a) main_video3_pane_t2

0xcb12,	// (0x0001a797) main_video3_pane_t3_ParamLimits

0xcb12,	// (0x0001a797) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0001d4f1) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0001d4f1) main_video3_pane_t

0xcb3f,	// (0x0001a7c4) cams_zoom_vslider_pane_g1

0xcb48,	// (0x0001a7cd) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0001d4f8) cams_zoom_vslider_pane_g

0xcb50,	// (0x0001a7d5) small_slider_vertical_pane

0xc351,	// (0x00019fd6) small_slider_vertical_pane_g1

0xc351,	// (0x00019fd6) small_slider_vertical_pane_g2

0xcb58,	// (0x0001a7dd) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0001d4fd) small_slider_vertical_pane_g

0x9499,	// (0x0001711e) main_hwr_training_pane

0xcb61,	// (0x0001a7e6) hwr_training_instruct_pane_ParamLimits

0xcb61,	// (0x0001a7e6) hwr_training_instruct_pane

0x57ee,	// (0x00013473) hwr_training_navi_pane_ParamLimits

0x57ee,	// (0x00013473) hwr_training_navi_pane

0x580d,	// (0x00013492) hwr_training_write_pane_ParamLimits

0x580d,	// (0x00013492) hwr_training_write_pane

0x9499,	// (0x0001711e) bg_frame_shadow_pane

0xcb98,	// (0x0001a81d) hwr_training_write_pane_g1

0xcba0,	// (0x0001a825) hwr_training_write_pane_g2

0xcba8,	// (0x0001a82d) hwr_training_write_pane_g3

0xcbb0,	// (0x0001a835) hwr_training_write_pane_g4

0xcbb8,	// (0x0001a83d) hwr_training_write_pane_g5

0xcbc0,	// (0x0001a845) hwr_training_write_pane_g6

0xcbc8,	// (0x0001a84d) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0001d504) hwr_training_write_pane_g

0xcbd0,	// (0x0001a855) hwr_training_navi_pane_g1_ParamLimits

0xcbd0,	// (0x0001a855) hwr_training_navi_pane_g1

0xcbe2,	// (0x0001a867) hwr_training_navi_pane_g2_ParamLimits

0xcbe2,	// (0x0001a867) hwr_training_navi_pane_g2

0xcbf4,	// (0x0001a879) hwr_training_navi_pane_g3_ParamLimits

0xcbf4,	// (0x0001a879) hwr_training_navi_pane_g3

0xcc04,	// (0x0001a889) hwr_training_navi_pane_g4_ParamLimits

0xcc04,	// (0x0001a889) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0001d513) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0001d513) hwr_training_navi_pane_g

0xcc11,	// (0x0001a896) hwr_training_navi_pane_t1

0x5855,	// (0x000134da) list_single_hwr_training_instruct_pane_ParamLimits

0x5855,	// (0x000134da) list_single_hwr_training_instruct_pane

0xcc1f,	// (0x0001a8a4) list_single_hwr_training_instruct_pane_t1

0xc291,	// (0x00019f16) bg_frame_shadow_pane_g1

0xcc2e,	// (0x0001a8b3) bg_frame_shadow_pane_g2

0xcc36,	// (0x0001a8bb) bg_frame_shadow_pane_g3

0xcc3e,	// (0x0001a8c3) bg_frame_shadow_pane_g4

0xcc46,	// (0x0001a8cb) bg_frame_shadow_pane_g5

0xcc4e,	// (0x0001a8d3) bg_frame_shadow_pane_g6

0xcc56,	// (0x0001a8db) bg_frame_shadow_pane_g7

0x9d6c,	// (0x000179f1) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0001d51e) bg_frame_shadow_pane_g

0x9499,	// (0x0001711e) main_video_tele_dialer_pane

0x5871,	// (0x000134f6) aid_size_cell_video_keypad_ParamLimits

0x5871,	// (0x000134f6) aid_size_cell_video_keypad

0x588b,	// (0x00013510) grid_video_dialer_keypad_pane_ParamLimits

0x588b,	// (0x00013510) grid_video_dialer_keypad_pane

0x58d9,	// (0x0001355e) video_down_pane_cp_ParamLimits

0x58d9,	// (0x0001355e) video_down_pane_cp

0x590d,	// (0x00013592) cell_video_dialer_keypad_pane_ParamLimits

0x590d,	// (0x00013592) cell_video_dialer_keypad_pane

0xcc5e,	// (0x0001a8e3) bg_button_pane_cp08_ParamLimits

0xcc5e,	// (0x0001a8e3) bg_button_pane_cp08

0x5933,	// (0x000135b8) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5933,	// (0x000135b8) cell_video_dialer_keypad_pane_g1

0x4fda,	// (0x00012c5f) mup3_rocker2_pane_ParamLimits

0x4fda,	// (0x00012c5f) mup3_rocker2_pane

0xc351,	// (0x00019fd6) mup3_rocker2_pane_g1

0x3b1f,	// (0x000117a4) main_dialer2_pane

0x9499,	// (0x0001711e) main_mp4_pane

0xcc72,	// (0x0001a8f7) main_mp4_pane_g1_ParamLimits

0xcc72,	// (0x0001a8f7) main_mp4_pane_g1

0xcc72,	// (0x0001a8f7) main_mp4_pane_g2_ParamLimits

0xcc72,	// (0x0001a8f7) main_mp4_pane_g2

0x596e,	// (0x000135f3) main_mp4_pane_g3_ParamLimits

0x596e,	// (0x000135f3) main_mp4_pane_g3

0xcc80,	// (0x0001a905) main_mp4_pane_g4_ParamLimits

0xcc80,	// (0x0001a905) main_mp4_pane_g4

0xcc9a,	// (0x0001a91f) main_mp4_pane_g5_ParamLimits

0xcc9a,	// (0x0001a91f) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0001d53e) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0001d53e) main_mp4_pane_g

0xccf7,	// (0x0001a97c) main_mp4_pane_t1_ParamLimits

0xccf7,	// (0x0001a97c) main_mp4_pane_t1

0xcd53,	// (0x0001a9d8) main_mp4_pane_t2_ParamLimits

0xcd53,	// (0x0001a9d8) main_mp4_pane_t2

0xcda5,	// (0x0001aa2a) main_mp4_pane_t3_ParamLimits

0xcda5,	// (0x0001aa2a) main_mp4_pane_t3

0xcdc5,	// (0x0001aa4a) main_mp4_pane_t4_ParamLimits

0xcdc5,	// (0x0001aa4a) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0001d54b) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0001d54b) main_mp4_pane_t

0xce05,	// (0x0001aa8a) mp4_progress_pane_ParamLimits

0xce05,	// (0x0001aa8a) mp4_progress_pane

0xce4f,	// (0x0001aad4) mp4_rocker_pane_ParamLimits

0xce4f,	// (0x0001aad4) mp4_rocker_pane

0xce79,	// (0x0001aafe) mp4_progress_pane_t1

0xce92,	// (0x0001ab17) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0001d554) mp4_progress_pane_t

0xceab,	// (0x0001ab30) mup_progress_pane_cp04

0xc351,	// (0x00019fd6) mp4_rocker_pane_g1

0x59b8,	// (0x0001363d) aid_cell_size_keypad2_ParamLimits

0x59b8,	// (0x0001363d) aid_cell_size_keypad2

0x59ce,	// (0x00013653) dialer2_ne_pane_ParamLimits

0x59ce,	// (0x00013653) dialer2_ne_pane

0x59e6,	// (0x0001366b) grid_dialer2_keypad_pane_ParamLimits

0x59e6,	// (0x0001366b) grid_dialer2_keypad_pane

0xc130,	// (0x00019db5) bg_popup_call_pane_cp07_ParamLimits

0xc130,	// (0x00019db5) bg_popup_call_pane_cp07

0x5a02,	// (0x00013687) dialer2_ne_pane_t1_ParamLimits

0x5a02,	// (0x00013687) dialer2_ne_pane_t1

0x5a42,	// (0x000136c7) cell_dialer2_keypad_pane_ParamLimits

0x5a42,	// (0x000136c7) cell_dialer2_keypad_pane

0xcec9,	// (0x0001ab4e) bg_button_pane_pane_cp04_ParamLimits

0xcec9,	// (0x0001ab4e) bg_button_pane_pane_cp04

0x5a68,	// (0x000136ed) cell_dialer2_keypad_pane_g1_ParamLimits

0x5a68,	// (0x000136ed) cell_dialer2_keypad_pane_g1

0x197d,	// (0x0000f602) aid_placing_vt_set_content_ParamLimits

0x197d,	// (0x0000f602) aid_placing_vt_set_content

0x19a1,	// (0x0000f626) aid_placing_vt_set_title_ParamLimits

0x19a1,	// (0x0000f626) aid_placing_vt_set_title

0x9499,	// (0x0001711e) main_image3_pane

0x5b2e,	// (0x000137b3) area_side_right_pane_cp01_ParamLimits

0x5b2e,	// (0x000137b3) area_side_right_pane_cp01

0xcc72,	// (0x0001a8f7) main_image3_pane_g1_ParamLimits

0xcc72,	// (0x0001a8f7) main_image3_pane_g1

0x5b47,	// (0x000137cc) main_image3_pane_g2_ParamLimits

0x5b47,	// (0x000137cc) main_image3_pane_g2

0x5b6f,	// (0x000137f4) main_image3_pane_g3_ParamLimits

0x5b6f,	// (0x000137f4) main_image3_pane_g3

0x5b99,	// (0x0001381e) main_image3_pane_g4_ParamLimits

0x5b99,	// (0x0001381e) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0001d563) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0001d563) main_image3_pane_g

0x5bc3,	// (0x00013848) main_image3_pane_t1_ParamLimits

0x5bc3,	// (0x00013848) main_image3_pane_t1

0x5c1b,	// (0x000138a0) main_image3_pane_t2_ParamLimits

0x5c1b,	// (0x000138a0) main_image3_pane_t2

0x5c6d,	// (0x000138f2) main_image3_pane_t3_ParamLimits

0x5c6d,	// (0x000138f2) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0001d56c) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0001d56c) main_image3_pane_t

0x950a,	// (0x0001718f) grid_sctrl_middle_pane_cp01_ParamLimits

0x950a,	// (0x0001718f) grid_sctrl_middle_pane_cp01

0x5cf5,	// (0x0001397a) cell_sctrl_middle_pane_cp01_ParamLimits

0x5cf5,	// (0x0001397a) cell_sctrl_middle_pane_cp01

0x5d12,	// (0x00013997) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d12,	// (0x00013997) cell_sctrl_middle_pane_cp01_g1

0x9499,	// (0x0001711e) main_call4_pane

0x5d27,	// (0x000139ac) aid_size_button_call4_ParamLimits

0x5d27,	// (0x000139ac) aid_size_button_call4

0x5d5a,	// (0x000139df) call4_windows_pane_ParamLimits

0x5d5a,	// (0x000139df) call4_windows_pane

0x5d7c,	// (0x00013a01) grid_call4_button_pane_ParamLimits

0x5d7c,	// (0x00013a01) grid_call4_button_pane

0xcf09,	// (0x0001ab8e) call4_windows_conf_pane

0xcf24,	// (0x0001aba9) popup_call4_audio_first_window_ParamLimits

0xcf24,	// (0x0001aba9) popup_call4_audio_first_window

0xcf72,	// (0x0001abf7) popup_call4_audio_second_window_ParamLimits

0xcf72,	// (0x0001abf7) popup_call4_audio_second_window

0xcf88,	// (0x0001ac0d) popup_call4_audio_wait_window_ParamLimits

0xcf88,	// (0x0001ac0d) popup_call4_audio_wait_window

0x5da7,	// (0x00013a2c) cell_call4_button_pane_ParamLimits

0x5da7,	// (0x00013a2c) cell_call4_button_pane

0x5dce,	// (0x00013a53) bg_button_pane_cp09_ParamLimits

0x5dce,	// (0x00013a53) bg_button_pane_cp09

0x5dda,	// (0x00013a5f) cell_call4_button_pane_g1_ParamLimits

0x5dda,	// (0x00013a5f) cell_call4_button_pane_g1

0x5e00,	// (0x00013a85) cell_call4_button_pane_t1_ParamLimits

0x5e00,	// (0x00013a85) cell_call4_button_pane_t1

0xcfd0,	// (0x0001ac55) popup_call4_audio_conf_window_ParamLimits

0xcfd0,	// (0x0001ac55) popup_call4_audio_conf_window

0x503c,	// (0x00012cc1) mup3_progress_pane_t1_ParamLimits

0x5053,	// (0x00012cd8) mup3_progress_pane_t2_ParamLimits

0xc670,	// (0x0001a2f5) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0001d445) mup3_progress_pane_t_ParamLimits

0xc687,	// (0x0001a30c) mup_progress_pane_cp03_ParamLimits

0x5630,	// (0x000132b5) mup3_control_keys_pane_g4_copy1

0xce33,	// (0x0001aab8) mp4_rocker2_pane_ParamLimits

0xce33,	// (0x0001aab8) mp4_rocker2_pane

0xcfea,	// (0x0001ac6f) mp4_rocker2_pane_g1

0xcff2,	// (0x0001ac77) mp4_rocker2_pane_g2

0xcffa,	// (0x0001ac7f) mp4_rocker2_pane_g3

0xd002,	// (0x0001ac87) mp4_rocker2_pane_g4

0xd00a,	// (0x0001ac8f) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0001d575) mp4_rocker2_pane_g

0x9499,	// (0x0001711e) main_camera4_pane

0x9499,	// (0x0001711e) main_video4_pane

0x58a7,	// (0x0001352c) main_video_tele_dialer_pane_t1_ParamLimits

0x58a7,	// (0x0001352c) main_video_tele_dialer_pane_t1

0x58c0,	// (0x00013545) main_video_tele_dialer_pane_t2_ParamLimits

0x58c0,	// (0x00013545) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0001d52f) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0001d52f) main_video_tele_dialer_pane_t

0x5e3e,	// (0x00013ac3) cam4_autofocus_pane_ParamLimits

0x5e3e,	// (0x00013ac3) cam4_autofocus_pane

0x5e54,	// (0x00013ad9) cam4_image_uncrop_pane_ParamLimits

0x5e54,	// (0x00013ad9) cam4_image_uncrop_pane

0x5e6d,	// (0x00013af2) cam4_indicators_pane_ParamLimits

0x5e6d,	// (0x00013af2) cam4_indicators_pane

0x5e9c,	// (0x00013b21) main_camera4_pane_g1_ParamLimits

0x5e9c,	// (0x00013b21) main_camera4_pane_g1

0x5ea8,	// (0x00013b2d) main_camera4_pane_g2_ParamLimits

0x5ea8,	// (0x00013b2d) main_camera4_pane_g2

0x5ea8,	// (0x00013b2d) main_camera4_pane_g3_ParamLimits

0x5ea8,	// (0x00013b2d) main_camera4_pane_g3

0x5eb4,	// (0x00013b39) main_camera4_pane_g4_ParamLimits

0x5eb4,	// (0x00013b39) main_camera4_pane_g4

0x5ec0,	// (0x00013b45) main_camera4_pane_g5_ParamLimits

0x5ec0,	// (0x00013b45) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0001d580) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0001d580) main_camera4_pane_g

0x5edd,	// (0x00013b62) main_camera4_pane_t1_ParamLimits

0x5edd,	// (0x00013b62) main_camera4_pane_t1

0xc581,	// (0x0001a206) bg_tb_trans_pane_cp06

0xd038,	// (0x0001acbd) cam4_indicators_pane_g1

0xd045,	// (0x0001acca) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0001d59b) cam4_indicators_pane_g

0xd065,	// (0x0001acea) cam4_indicators_pane_t1

0x5f41,	// (0x00013bc6) main_video4_pane_g1_ParamLimits

0x5f41,	// (0x00013bc6) main_video4_pane_g1

0x5f53,	// (0x00013bd8) main_video4_pane_g2_ParamLimits

0x5f53,	// (0x00013bd8) main_video4_pane_g2

0x5f67,	// (0x00013bec) main_video4_pane_g3_ParamLimits

0x5f67,	// (0x00013bec) main_video4_pane_g3

0x5f77,	// (0x00013bfc) main_video4_pane_g4_ParamLimits

0x5f77,	// (0x00013bfc) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0001d5a2) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0001d5a2) main_video4_pane_g

0x5f97,	// (0x00013c1c) vid4_indicators_pane_ParamLimits

0x5f97,	// (0x00013c1c) vid4_indicators_pane

0x5fc7,	// (0x00013c4c) video4_image_uncrop_cif_pane_ParamLimits

0x5fc7,	// (0x00013c4c) video4_image_uncrop_cif_pane

0x5fe1,	// (0x00013c66) video4_image_uncrop_nhd_pane_ParamLimits

0x5fe1,	// (0x00013c66) video4_image_uncrop_nhd_pane

0x5e54,	// (0x00013ad9) video4_image_uncrop_vga_pane_ParamLimits

0x5e54,	// (0x00013ad9) video4_image_uncrop_vga_pane

0xccce,	// (0x0001a953) bg_tb_trans_pane_cp07

0x5ff7,	// (0x00013c7c) vid4_indicators_pane_g1

0x6004,	// (0x00013c89) vid4_indicators_pane_g2

0x6011,	// (0x00013c96) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0001d5ad) vid4_indicators_pane_g

0x6036,	// (0x00013cbb) vid4_indicators_pane_t1

0x6048,	// (0x00013ccd) cam4_autofocus_pane_g1

0x6050,	// (0x00013cd5) cam4_autofocus_pane_g2

0x6058,	// (0x00013cdd) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0001d5b8) cam4_autofocus_pane_g

0x6060,	// (0x00013ce5) cam4_autofocus_pane_g3_copy1

0x58f1,	// (0x00013576) video_down_pane_cp_t1

0x58ff,	// (0x00013584) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0001d534) video_down_pane_cp_t

0x950a,	// (0x0001718f) popup_vitu2_window_ParamLimits

0x950a,	// (0x0001718f) popup_vitu2_window

0x6068,	// (0x00013ced) aid_size_cell2_itu2_ParamLimits

0x6068,	// (0x00013ced) aid_size_cell2_itu2

0x608e,	// (0x00013d13) aid_size_cell_itu2_ParamLimits

0x608e,	// (0x00013d13) aid_size_cell_itu2

0x60ec,	// (0x00013d71) bg_popup_window_pane_cp09_ParamLimits

0x60ec,	// (0x00013d71) bg_popup_window_pane_cp09

0x60fa,	// (0x00013d7f) field_vitu2_entry_pane_ParamLimits

0x60fa,	// (0x00013d7f) field_vitu2_entry_pane

0x6122,	// (0x00013da7) grid_vitu2_function_pane_ParamLimits

0x6122,	// (0x00013da7) grid_vitu2_function_pane

0x6173,	// (0x00013df8) grid_vitu2_itu_pane_ParamLimits

0x6173,	// (0x00013df8) grid_vitu2_itu_pane

0x61fe,	// (0x00013e83) cell_vitu2_itu_pane_ParamLimits

0x61fe,	// (0x00013e83) cell_vitu2_itu_pane

0x6224,	// (0x00013ea9) cell_vitu2_function_pane_ParamLimits

0x6224,	// (0x00013ea9) cell_vitu2_function_pane

0xd093,	// (0x0001ad18) bg_popup_call_pane_cp08_ParamLimits

0xd093,	// (0x0001ad18) bg_popup_call_pane_cp08

0xd0ac,	// (0x0001ad31) field_vitu2_entry_pane_g1

0xd0b8,	// (0x0001ad3d) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0001d5bf) field_vitu2_entry_pane_g

0x6268,	// (0x00013eed) field_vitu2_entry_pane_t1_ParamLimits

0x6268,	// (0x00013eed) field_vitu2_entry_pane_t1

0xd0d2,	// (0x0001ad57) field_vitu2_entry_pane_t2_ParamLimits

0xd0d2,	// (0x0001ad57) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0001d5c6) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0001d5c6) field_vitu2_entry_pane_t

0x6285,	// (0x00013f0a) bg_button_pane_cp010_ParamLimits

0x6285,	// (0x00013f0a) bg_button_pane_cp010

0x6293,	// (0x00013f18) cell_vitu2_itu_pane_g1

0x62b1,	// (0x00013f36) cell_vitu2_itu_pane_t1_ParamLimits

0x62b1,	// (0x00013f36) cell_vitu2_itu_pane_t1

0x6317,	// (0x00013f9c) cell_vitu2_itu_pane_t2_ParamLimits

0x6317,	// (0x00013f9c) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0001d5d0) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0001d5d0) cell_vitu2_itu_pane_t

0x950a,	// (0x0001718f) bg_button_pane_cp011

0x63f3,	// (0x00014078) cell_vitu2_function_pane_g1

0x9499,	// (0x0001711e) main_myfav_hc_pane

0x5cbd,	// (0x00013942) popup_image3_note_pane_ParamLimits

0x5cbd,	// (0x00013942) popup_image3_note_pane

0x5cd9,	// (0x0001395e) popup_image3_tool_bar_pane_ParamLimits

0x5cd9,	// (0x0001395e) popup_image3_tool_bar_pane

0x639b,	// (0x00014020) cell_vitu2_itu_pane_t3_ParamLimits

0x639b,	// (0x00014020) cell_vitu2_itu_pane_t3

0x9499,	// (0x0001711e) bg_popup_trans_pane

0xd0f7,	// (0x0001ad7c) grid_image3_tool_bar_pane

0xd101,	// (0x0001ad86) bg_popup_trans_pane_g1

0xa229,	// (0x00017eae) bg_popup_trans_pane_g2

0xd109,	// (0x0001ad8e) bg_popup_trans_pane_g3

0xd111,	// (0x0001ad96) bg_popup_trans_pane_g4

0xd119,	// (0x0001ad9e) bg_popup_trans_pane_g5

0xd121,	// (0x0001ada6) bg_popup_trans_pane_g6

0xd129,	// (0x0001adae) bg_popup_trans_pane_g7

0xd131,	// (0x0001adb6) bg_popup_trans_pane_g8

0xa209,	// (0x00017e8e) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0001d5d7) bg_popup_trans_pane_g

0xd139,	// (0x0001adbe) cell_image3_tool_bar_pane_ParamLimits

0xd139,	// (0x0001adbe) cell_image3_tool_bar_pane

0xc351,	// (0x00019fd6) cell_image3_tool_bar_pane_g1

0x9499,	// (0x0001711e) bg_popup_trans_pane_cp1

0xd14f,	// (0x0001add4) popup_image3_note_pane_t1

0xd15d,	// (0x0001ade2) popup_image3_note_pane_t2

0xd16b,	// (0x0001adf0) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0001d5ea) popup_image3_note_pane_t

0xd17b,	// (0x0001ae00) popup_image3_note_pane_t3_copy1

0x6407,	// (0x0001408c) bg_myfav_hc_instruction_pane_ParamLimits

0x6407,	// (0x0001408c) bg_myfav_hc_instruction_pane

0x641f,	// (0x000140a4) cell_myfav_contact_pane_ParamLimits

0x641f,	// (0x000140a4) cell_myfav_contact_pane

0x643b,	// (0x000140c0) cell_myfav_contact_pane_cp1_ParamLimits

0x643b,	// (0x000140c0) cell_myfav_contact_pane_cp1

0x6453,	// (0x000140d8) cell_myfav_contact_pane_cp2_ParamLimits

0x6453,	// (0x000140d8) cell_myfav_contact_pane_cp2

0x646b,	// (0x000140f0) cell_myfav_contact_pane_cp3_ParamLimits

0x646b,	// (0x000140f0) cell_myfav_contact_pane_cp3

0x6482,	// (0x00014107) cell_myfav_contact_pane_cp4_ParamLimits

0x6482,	// (0x00014107) cell_myfav_contact_pane_cp4

0x649a,	// (0x0001411f) cell_myfav_contact_pane_cp5_ParamLimits

0x649a,	// (0x0001411f) cell_myfav_contact_pane_cp5

0x64ae,	// (0x00014133) cell_myfav_contact_pane_cp6_ParamLimits

0x64ae,	// (0x00014133) cell_myfav_contact_pane_cp6

0x64c4,	// (0x00014149) cell_myfav_contact_pane_cp7_ParamLimits

0x64c4,	// (0x00014149) cell_myfav_contact_pane_cp7

0xd189,	// (0x0001ae0e) listscroll_gen_pane_cp05

0x64dc,	// (0x00014161) main_myfav_hc_pane_g1_ParamLimits

0x64dc,	// (0x00014161) main_myfav_hc_pane_g1

0x64f6,	// (0x0001417b) main_myfav_hc_pane_g2_ParamLimits

0x64f6,	// (0x0001417b) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0001d5f1) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0001d5f1) main_myfav_hc_pane_g

0x652a,	// (0x000141af) main_myfav_hc_pane_t1_ParamLimits

0x652a,	// (0x000141af) main_myfav_hc_pane_t1

0xd192,	// (0x0001ae17) main_myfav_hc_pane_t2_ParamLimits

0xd192,	// (0x0001ae17) main_myfav_hc_pane_t2

0xd1a4,	// (0x0001ae29) main_myfav_hc_pane_t3_ParamLimits

0xd1a4,	// (0x0001ae29) main_myfav_hc_pane_t3

0x6541,	// (0x000141c6) main_myfav_hc_pane_t4_ParamLimits

0x6541,	// (0x000141c6) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0001d5f8) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0001d5f8) main_myfav_hc_pane_t

0xc351,	// (0x00019fd6) bg_myfav_hc_instruction_pane_g1

0xd1b6,	// (0x0001ae3b) cell_myfav_contact_pane_g1_ParamLimits

0xd1b6,	// (0x0001ae3b) cell_myfav_contact_pane_g1

0xd1b6,	// (0x0001ae3b) cell_myfav_contact_pane_g2_ParamLimits

0xd1b6,	// (0x0001ae3b) cell_myfav_contact_pane_g2

0xd1c2,	// (0x0001ae47) cell_myfav_contact_pane_g3_ParamLimits

0xd1c2,	// (0x0001ae47) cell_myfav_contact_pane_g3

0xc65a,	// (0x0001a2df) cell_myfav_contact_pane_g4_ParamLimits

0xc65a,	// (0x0001a2df) cell_myfav_contact_pane_g4

0xd1cf,	// (0x0001ae54) cell_myfav_contact_pane_g5_ParamLimits

0xd1cf,	// (0x0001ae54) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0001d603) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0001d603) cell_myfav_contact_pane_g

0x6510,	// (0x00014195) main_myfav_hc_pane_g3_ParamLimits

0x6510,	// (0x00014195) main_myfav_hc_pane_g3

0x0c43,	// (0x0000e8c8) popup_adpt_find_window

0x656b,	// (0x000141f0) afind_page_pane_ParamLimits

0x656b,	// (0x000141f0) afind_page_pane

0x6580,	// (0x00014205) aid_size_cell_afind_ParamLimits

0x6580,	// (0x00014205) aid_size_cell_afind

0x659e,	// (0x00014223) bg_popup_sub_pane_cp09_ParamLimits

0x659e,	// (0x00014223) bg_popup_sub_pane_cp09

0x65ab,	// (0x00014230) find_pane_cp01_ParamLimits

0x65ab,	// (0x00014230) find_pane_cp01

0xd1db,	// (0x0001ae60) grid_afind_control_pane_ParamLimits

0xd1db,	// (0x0001ae60) grid_afind_control_pane

0x65b8,	// (0x0001423d) grid_afind_pane_ParamLimits

0x65b8,	// (0x0001423d) grid_afind_pane

0x65da,	// (0x0001425f) cell_afind_pane_ParamLimits

0x65da,	// (0x0001425f) cell_afind_pane

0xc351,	// (0x00019fd6) afind_page_pane_g1

0x6641,	// (0x000142c6) afind_page_pane_g2

0x664a,	// (0x000142cf) afind_page_pane_g3

0x0002,

0xf989,	// (0x0001d60e) afind_page_pane_g

0x6653,	// (0x000142d8) afind_page_pane_t1

0xd1ef,	// (0x0001ae74) cell_afind_grid_control_pane_ParamLimits

0xd1ef,	// (0x0001ae74) cell_afind_grid_control_pane

0xcec9,	// (0x0001ab4e) bg_button_pane_cp69_ParamLimits

0xcec9,	// (0x0001ab4e) bg_button_pane_cp69

0x6673,	// (0x000142f8) cell_afind_pane_g1_ParamLimits

0x6673,	// (0x000142f8) cell_afind_pane_g1

0x6680,	// (0x00014305) cell_afind_pane_t1_ParamLimits

0x6680,	// (0x00014305) cell_afind_pane_t1

0x9f62,	// (0x00017be7) bg_button_pane_cp72

0xd1fe,	// (0x0001ae83) cell_afind_grid_control_pane_g1

0x35bf,	// (0x00011244) aid_image_placing_area_ParamLimits

0x35bf,	// (0x00011244) aid_image_placing_area

0xc95f,	// (0x0001a5e4) field_vitu_entry_pane_g1_ParamLimits

0xc95f,	// (0x0001a5e4) field_vitu_entry_pane_g1

0xc96b,	// (0x0001a5f0) field_vitu_entry_pane_g2_ParamLimits

0xc96b,	// (0x0001a5f0) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0001d4bf) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0001d4bf) field_vitu_entry_pane_g

0x56ff,	// (0x00013384) cell_vitu_itu_pane_g1_ParamLimits

0x5741,	// (0x000133c6) cell_vitu_itu_pane_t3_ParamLimits

0x5741,	// (0x000133c6) cell_vitu_itu_pane_t3

0xce79,	// (0x0001aafe) mp4_progress_pane_t1_ParamLimits

0xce92,	// (0x0001ab17) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0001d554) mp4_progress_pane_t_ParamLimits

0xceab,	// (0x0001ab30) mup_progress_pane_cp04_ParamLimits

0x6555,	// (0x000141da) main_myfav_hc_pane_t5_ParamLimits

0x6555,	// (0x000141da) main_myfav_hc_pane_t5

0x94bf,	// (0x00017144) aid_zoom_text_primary

0x0c43,	// (0x0000e8c8) popup_adpt_find_window_ParamLimits

0x950a,	// (0x0001718f) main_cam_set_pane

0x5e86,	// (0x00013b0b) cam4_zoom_pane_ParamLimits

0x5e86,	// (0x00013b0b) cam4_zoom_pane

0x6692,	// (0x00014317) main_cam_set_pane_g1_ParamLimits

0x6692,	// (0x00014317) main_cam_set_pane_g1

0x66a0,	// (0x00014325) main_cam_set_pane_g2_ParamLimits

0x66a0,	// (0x00014325) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0001d615) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0001d615) main_cam_set_pane_g

0x66c3,	// (0x00014348) main_cam_set_pane_t1_ParamLimits

0x66c3,	// (0x00014348) main_cam_set_pane_t1

0x66de,	// (0x00014363) main_cset_listscroll_pane_ParamLimits

0x66de,	// (0x00014363) main_cset_listscroll_pane

0x6702,	// (0x00014387) main_cset_slider_pane_ParamLimits

0x6702,	// (0x00014387) main_cset_slider_pane

0xd20f,	// (0x0001ae94) main_cset_list_pane_ParamLimits

0xd20f,	// (0x0001ae94) main_cset_list_pane

0xd21f,	// (0x0001aea4) scroll_pane_cp028

0x672c,	// (0x000143b1) aid_area_touch_slider

0x6748,	// (0x000143cd) cset_slider_pane

0x6772,	// (0x000143f7) main_cset_slider_pane_g1

0x6787,	// (0x0001440c) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0001d61a) main_cset_slider_pane_g

0xd258,	// (0x0001aedd) main_cset_slider_pane_t1

0x6849,	// (0x000144ce) main_cset_slider_pane_t2

0x6863,	// (0x000144e8) main_cset_slider_pane_t3

0x687d,	// (0x00014502) main_cset_slider_pane_t4

0x6897,	// (0x0001451c) main_cset_slider_pane_t5

0x68b5,	// (0x0001453a) main_cset_slider_pane_t6

0x68cc,	// (0x00014551) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0001d63f) main_cset_slider_pane_t

0x69d8,	// (0x0001465d) cset_list_set_pane_ParamLimits

0x69d8,	// (0x0001465d) cset_list_set_pane

0x69ec,	// (0x00014671) aid_position_infowindow_above

0x69f4,	// (0x00014679) aid_position_infowindow_below

0xd2f8,	// (0x0001af7d) cset_list_set_pane_g1_ParamLimits

0xd2f8,	// (0x0001af7d) cset_list_set_pane_g1

0x69fc,	// (0x00014681) cset_list_set_pane_g3_ParamLimits

0x69fc,	// (0x00014681) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0001d65e) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0001d65e) cset_list_set_pane_g

0x6a0b,	// (0x00014690) cset_list_set_pane_t1_ParamLimits

0x6a0b,	// (0x00014690) cset_list_set_pane_t1

0x950a,	// (0x0001718f) list_highlight_pane_cp021_ParamLimits

0x950a,	// (0x0001718f) list_highlight_pane_cp021

0xab07,	// (0x0001878c) cset_slider_pane_g1

0xab19,	// (0x0001879e) cset_slider_pane_g2

0xab10,	// (0x00018795) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0001d663) cset_slider_pane_g

0xd304,	// (0x0001af89) aid_area_touch_cam4_zoom

0xd30c,	// (0x0001af91) cam4_zoom_cont_pane

0xd314,	// (0x0001af99) cam4_zoom_pane_g1

0xd31c,	// (0x0001afa1) cam4_zoom_pane_g2

0x6a20,	// (0x000146a5) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0001d66a) cam4_zoom_pane_g

0xd324,	// (0x0001afa9) cam4_zoom_cont_pane_g1

0xd32d,	// (0x0001afb2) cam4_zoom_cont_pane_g2

0xd336,	// (0x0001afbb) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0001d671) cam4_zoom_cont_pane_g

0x5d45,	// (0x000139ca) call4_image_pane_ParamLimits

0x5d45,	// (0x000139ca) call4_image_pane

0xcf09,	// (0x0001ab8e) call4_windows_conf_pane_ParamLimits

0xcf50,	// (0x0001abd5) popup_call4_audio_in_window_ParamLimits

0xcf50,	// (0x0001abd5) popup_call4_audio_in_window

0x9499,	// (0x0001711e) bg_popup_call2_act_pane_cp02

0xcfc8,	// (0x0001ac4d) call4_list_conf_pane

0xc351,	// (0x00019fd6) call4_image_pane_g1

0xc351,	// (0x00019fd6) call4_image_pane_g2

0x0001,

0xf700,	// (0x0001d385) call4_image_pane_g

0xd33f,	// (0x0001afc4) list_single_graphic_popup_conf4_pane_ParamLimits

0xd33f,	// (0x0001afc4) list_single_graphic_popup_conf4_pane

0x9499,	// (0x0001711e) list_highlight_pane_cp022

0xd354,	// (0x0001afd9) list_single_graphic_popup_conf4_pane_g1

0xa7e1,	// (0x00018466) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0001d678) list_single_graphic_popup_conf4_pane_g

0xd35c,	// (0x0001afe1) list_single_graphic_popup_conf4_pane_t1

0x1abb,	// (0x0000f740) popup_vtel_slider_window_ParamLimits

0x1abb,	// (0x0000f740) popup_vtel_slider_window

0xceb7,	// (0x0001ab3c) dialer2_ne_pane_t2_ParamLimits

0xceb7,	// (0x0001ab3c) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0001d559) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0001d559) dialer2_ne_pane_t

0xc130,	// (0x00019db5) bg_popup_sub_pane_cp010_ParamLimits

0xc130,	// (0x00019db5) bg_popup_sub_pane_cp010

0x6a28,	// (0x000146ad) popup_vtel_slider_window_g1_ParamLimits

0x6a28,	// (0x000146ad) popup_vtel_slider_window_g1

0x6a3b,	// (0x000146c0) popup_vtel_slider_window_g2_ParamLimits

0x6a3b,	// (0x000146c0) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0001d67d) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0001d67d) popup_vtel_slider_window_g

0x6a91,	// (0x00014716) vtel_slider_pane_ParamLimits

0x6a91,	// (0x00014716) vtel_slider_pane

0x6ab3,	// (0x00014738) vtel_slider_pane_g1_ParamLimits

0x6ab3,	// (0x00014738) vtel_slider_pane_g1

0x6ac7,	// (0x0001474c) vtel_slider_pane_g2_ParamLimits

0x6ac7,	// (0x0001474c) vtel_slider_pane_g2

0x6adf,	// (0x00014764) vtel_slider_pane_g3_ParamLimits

0x6adf,	// (0x00014764) vtel_slider_pane_g3

0x6ab3,	// (0x00014738) vtel_slider_pane_g4_ParamLimits

0x6ab3,	// (0x00014738) vtel_slider_pane_g4

0x6af5,	// (0x0001477a) vtel_slider_pane_g5_ParamLimits

0x6af5,	// (0x0001477a) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0001d686) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0001d686) vtel_slider_pane_g

0x9499,	// (0x0001711e) main_gallery2_pane

0x60ba,	// (0x00013d3f) aid_size_row_itut2_dropdow_list_ParamLimits

0x60ba,	// (0x00013d3f) aid_size_row_itut2_dropdow_list

0x614a,	// (0x00013dcf) grid_vitu2_function_top_pane_ParamLimits

0x614a,	// (0x00013dcf) grid_vitu2_function_top_pane

0x61a9,	// (0x00013e2e) popup_vitu2_dropdown_list_window_ParamLimits

0x61a9,	// (0x00013e2e) popup_vitu2_dropdown_list_window

0x61d2,	// (0x00013e57) popup_vitu2_match_list_window

0x6b0b,	// (0x00014790) cell_vitu2_function_top_pane_ParamLimits

0x6b0b,	// (0x00014790) cell_vitu2_function_top_pane

0x6b2b,	// (0x000147b0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6b2b,	// (0x000147b0) cell_vitu2_function_top_pane_cp01

0x6b49,	// (0x000147ce) cell_vitu2_function_top_wide_pane_ParamLimits

0x6b49,	// (0x000147ce) cell_vitu2_function_top_wide_pane

0x950a,	// (0x0001718f) bg_button_pane_cp012

0x6b67,	// (0x000147ec) cell_vitu2_function_top_pane_g1

0xd380,	// (0x0001b005) bg_button_pane_cp013_ParamLimits

0xd380,	// (0x0001b005) bg_button_pane_cp013

0x6b7b,	// (0x00014800) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6b7b,	// (0x00014800) cell_vitu2_function_top_wide_pane_g1

0x950a,	// (0x0001718f) bg_popup_sub_pane_cp20

0x6b93,	// (0x00014818) list_vitu2_match_list_pane

0xd101,	// (0x0001ad86) bg_popup_sub_pane_cp20_g1

0xd109,	// (0x0001ad8e) bg_popup_sub_pane_cp20_g2

0xa229,	// (0x00017eae) bg_popup_sub_pane_cp20_g3

0xd111,	// (0x0001ad96) bg_popup_sub_pane_cp20_g4

0xa209,	// (0x00017e8e) bg_popup_sub_pane_cp20_g5

0xd39c,	// (0x0001b021) bg_popup_sub_pane_cp20_g6

0xd121,	// (0x0001ada6) bg_popup_sub_pane_cp20_g7

0xd129,	// (0x0001adae) bg_popup_sub_pane_cp20_g8

0xd131,	// (0x0001adb6) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0001d691) bg_popup_sub_pane_cp20_g

0xd3a4,	// (0x0001b029) list_vitu2_match_list_item_pane_ParamLimits

0xd3a4,	// (0x0001b029) list_vitu2_match_list_item_pane

0xd3b6,	// (0x0001b03b) list_vitu2_match_list_item_pane_t1

0x9499,	// (0x0001711e) bg_popup_sub_pane_cp21

0xa69b,	// (0x00018320) grid_vitu2_dropdown_list_pane

0x6be3,	// (0x00014868) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6be3,	// (0x00014868) cell_vitu2_dropdown_list_char_pane

0x6c06,	// (0x0001488b) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6c06,	// (0x0001488b) cell_vitu2_dropdown_list_ctrl_pane

0xd3dc,	// (0x0001b061) cell_vitu2_dropdown_list_char_pane_g1

0xd3e5,	// (0x0001b06a) cell_vitu2_dropdown_list_char_pane_g2

0xd3ee,	// (0x0001b073) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa29,	// (0x0001d6ae) cell_vitu2_dropdown_list_char_pane_g

0x6c34,	// (0x000148b9) cell_vitu2_dropdown_list_char_pane_t1

0x6c42,	// (0x000148c7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6c42,	// (0x000148c7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6c52,	// (0x000148d7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6c52,	// (0x000148d7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6c63,	// (0x000148e8) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6c63,	// (0x000148e8) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6c73,	// (0x000148f8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6c73,	// (0x000148f8) cell_vitu2_dropdown_list_ctrl_pane_g4

0xc581,	// (0x0001a206) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xc581,	// (0x0001a206) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa30,	// (0x0001d6b5) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa30,	// (0x0001d6b5) cell_vitu2_dropdown_list_ctrl_pane_g

0x6c8f,	// (0x00014914) aid_size_cell_gallery2_ParamLimits

0x6c8f,	// (0x00014914) aid_size_cell_gallery2

0x6ca5,	// (0x0001492a) grid_gallery2_pane_ParamLimits

0x6ca5,	// (0x0001492a) grid_gallery2_pane

0x6cb9,	// (0x0001493e) scroll_pane_cp029_ParamLimits

0x6cb9,	// (0x0001493e) scroll_pane_cp029

0x6cc5,	// (0x0001494a) cell_gallery2_pane_ParamLimits

0x6cc5,	// (0x0001494a) cell_gallery2_pane

0xd3f7,	// (0x0001b07c) cell_gallery2_pane_g2

0x6cff,	// (0x00014984) cell_gallery2_pane_g3

0xd401,	// (0x0001b086) cell_gallery2_pane_g4

0xd409,	// (0x0001b08e) cell_gallery2_pane_g5

0xa9af,	// (0x00018634) grid_highlight_pane_cp10

0x61d2,	// (0x00013e57) popup_vitu2_match_list_window_ParamLimits

0x61e9,	// (0x00013e6e) popup_vitu2_query_window_ParamLimits

0x61e9,	// (0x00013e6e) popup_vitu2_query_window

0x9499,	// (0x0001711e) bg_vitu2_candi_button_pane

0xd3dc,	// (0x0001b061) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd3e5,	// (0x0001b06a) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd3ee,	// (0x0001b073) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x6d07,	// (0x0001498c) bg_button_pane_cp015

0x6d1b,	// (0x000149a0) bg_button_pane_cp016

0x6d2e,	// (0x000149b3) bg_button_pane_cp017

0xbe1c,	// (0x00019aa1) bg_popup_sub_pane_cp22

0xd411,	// (0x0001b096) popup_vitu2_query_window_g1

0x6d73,	// (0x000149f8) popup_vitu2_query_window_g2

0x0002,

0xfa3b,	// (0x0001d6c0) popup_vitu2_query_window_g

0x6d92,	// (0x00014a17) popup_vitu2_query_window_t1_ParamLimits

0x6d92,	// (0x00014a17) popup_vitu2_query_window_t1

0x6dc7,	// (0x00014a4c) popup_vitu2_query_window_t2_ParamLimits

0x6dc7,	// (0x00014a4c) popup_vitu2_query_window_t2

0x6dd9,	// (0x00014a5e) popup_vitu2_query_window_t3_ParamLimits

0x6dd9,	// (0x00014a5e) popup_vitu2_query_window_t3

0x6e01,	// (0x00014a86) popup_vitu2_query_window_t4_ParamLimits

0x6e01,	// (0x00014a86) popup_vitu2_query_window_t4

0x6e22,	// (0x00014aa7) popup_vitu2_query_window_t5_ParamLimits

0x6e22,	// (0x00014aa7) popup_vitu2_query_window_t5

0x0006,

0xfa42,	// (0x0001d6c7) popup_vitu2_query_window_t_ParamLimits

0xfa42,	// (0x0001d6c7) popup_vitu2_query_window_t

0xd207,	// (0x0001ae8c) main_cset_text_pane

0x672c,	// (0x000143b1) aid_area_touch_slider_ParamLimits

0x6748,	// (0x000143cd) cset_slider_pane_ParamLimits

0x6772,	// (0x000143f7) main_cset_slider_pane_g1_ParamLimits

0x6787,	// (0x0001440c) main_cset_slider_pane_g2_ParamLimits

0xd228,	// (0x0001aead) main_cset_slider_pane_g3_ParamLimits

0xd228,	// (0x0001aead) main_cset_slider_pane_g3

0x679c,	// (0x00014421) main_cset_slider_pane_g4_ParamLimits

0x679c,	// (0x00014421) main_cset_slider_pane_g4

0x67ab,	// (0x00014430) main_cset_slider_pane_g5_ParamLimits

0x67ab,	// (0x00014430) main_cset_slider_pane_g5

0x67b9,	// (0x0001443e) main_cset_slider_pane_g6_ParamLimits

0x67b9,	// (0x0001443e) main_cset_slider_pane_g6

0xf995,	// (0x0001d61a) main_cset_slider_pane_g_ParamLimits

0xd258,	// (0x0001aedd) main_cset_slider_pane_t1_ParamLimits

0x6849,	// (0x000144ce) main_cset_slider_pane_t2_ParamLimits

0x6863,	// (0x000144e8) main_cset_slider_pane_t3_ParamLimits

0x687d,	// (0x00014502) main_cset_slider_pane_t4_ParamLimits

0x6897,	// (0x0001451c) main_cset_slider_pane_t5_ParamLimits

0x68b5,	// (0x0001453a) main_cset_slider_pane_t6_ParamLimits

0x68cc,	// (0x00014551) main_cset_slider_pane_t7_ParamLimits

0x68fa,	// (0x0001457f) main_cset_slider_pane_t8_ParamLimits

0x68fa,	// (0x0001457f) main_cset_slider_pane_t8

0x6922,	// (0x000145a7) main_cset_slider_pane_t9_ParamLimits

0x6922,	// (0x000145a7) main_cset_slider_pane_t9

0x694a,	// (0x000145cf) main_cset_slider_pane_t10_ParamLimits

0x694a,	// (0x000145cf) main_cset_slider_pane_t10

0x6972,	// (0x000145f7) main_cset_slider_pane_t11_ParamLimits

0x6972,	// (0x000145f7) main_cset_slider_pane_t11

0x699c,	// (0x00014621) main_cset_slider_pane_t12_ParamLimits

0x699c,	// (0x00014621) main_cset_slider_pane_t12

0x69b9,	// (0x0001463e) main_cset_slider_pane_t13_ParamLimits

0x69b9,	// (0x0001463e) main_cset_slider_pane_t13

0xf9ba,	// (0x0001d63f) main_cset_slider_pane_t_ParamLimits

0x9499,	// (0x0001711e) bg_popup_sub_pane_cp011

0xd41d,	// (0x0001b0a2) main_cset_text_pane_g1

0xd425,	// (0x0001b0aa) main_cset_text_pane_t1

0xd433,	// (0x0001b0b8) main_cset_text_pane_t2

0xd441,	// (0x0001b0c6) main_cset_text_pane_t3

0xd44f,	// (0x0001b0d4) main_cset_text_pane_t4

0xd45d,	// (0x0001b0e2) main_cset_text_pane_t5

0xd46b,	// (0x0001b0f0) main_cset_text_pane_t6

0xd479,	// (0x0001b0fe) main_cset_text_pane_t7

0x0006,

0xfa51,	// (0x0001d6d6) main_cset_text_pane_t

0x9499,	// (0x0001711e) main_cam4_burst_pane

0x9499,	// (0x0001711e) main_cam5_pane

0x6661,	// (0x000142e6) bg_button_pane_cp019

0x666a,	// (0x000142ef) bg_button_pane_cp020

0xd234,	// (0x0001aeb9) main_cset_slider_pane_g7_ParamLimits

0xd234,	// (0x0001aeb9) main_cset_slider_pane_g7

0xd240,	// (0x0001aec5) main_cset_slider_pane_g8_ParamLimits

0xd240,	// (0x0001aec5) main_cset_slider_pane_g8

0x67cd,	// (0x00014452) main_cset_slider_pane_g9_ParamLimits

0x67cd,	// (0x00014452) main_cset_slider_pane_g9

0x67d9,	// (0x0001445e) main_cset_slider_pane_g10_ParamLimits

0x67d9,	// (0x0001445e) main_cset_slider_pane_g10

0x67e5,	// (0x0001446a) main_cset_slider_pane_g11_ParamLimits

0x67e5,	// (0x0001446a) main_cset_slider_pane_g11

0x67f1,	// (0x00014476) main_cset_slider_pane_g12_ParamLimits

0x67f1,	// (0x00014476) main_cset_slider_pane_g12

0x67fd,	// (0x00014482) main_cset_slider_pane_g13_ParamLimits

0x67fd,	// (0x00014482) main_cset_slider_pane_g13

0x6809,	// (0x0001448e) main_cset_slider_pane_g14_ParamLimits

0x6809,	// (0x0001448e) main_cset_slider_pane_g14

0x6815,	// (0x0001449a) main_cset_slider_pane_g15_ParamLimits

0x6815,	// (0x0001449a) main_cset_slider_pane_g15

0xd286,	// (0x0001af0b) main_cset_slider_pane_t14_ParamLimits

0xd286,	// (0x0001af0b) main_cset_slider_pane_t14

0xd2bf,	// (0x0001af44) main_cset_slider_pane_t15_ParamLimits

0xd2bf,	// (0x0001af44) main_cset_slider_pane_t15

0x6e99,	// (0x00014b1e) aid_cam4_burst_size_cell_ParamLimits

0x6e99,	// (0x00014b1e) aid_cam4_burst_size_cell

0x6eb9,	// (0x00014b3e) grid_cam4_burst_pane_ParamLimits

0x6eb9,	// (0x00014b3e) grid_cam4_burst_pane

0x6ef3,	// (0x00014b78) linegrid_cam4_burst_pane_ParamLimits

0x6ef3,	// (0x00014b78) linegrid_cam4_burst_pane

0xd487,	// (0x0001b10c) scroll_pane_cp30_ParamLimits

0xd487,	// (0x0001b10c) scroll_pane_cp30

0x6f17,	// (0x00014b9c) cell_cam4_burst_pane_ParamLimits

0x6f17,	// (0x00014b9c) cell_cam4_burst_pane

0xd493,	// (0x0001b118) linegrid_cam4_burst_pane_g1_ParamLimits

0xd493,	// (0x0001b118) linegrid_cam4_burst_pane_g1

0x6f6c,	// (0x00014bf1) linegrid_cam4_burst_pane_g2_ParamLimits

0x6f6c,	// (0x00014bf1) linegrid_cam4_burst_pane_g2

0xd4a0,	// (0x0001b125) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4a0,	// (0x0001b125) linegrid_cam4_burst_pane_g3

0x0002,

0xfa60,	// (0x0001d6e5) linegrid_cam4_burst_pane_g_ParamLimits

0xfa60,	// (0x0001d6e5) linegrid_cam4_burst_pane_g

0x6f7d,	// (0x00014c02) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x6f7d,	// (0x00014c02) linegrid_cam4_burst_pane_g3_copy1

0xd4ad,	// (0x0001b132) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4ad,	// (0x0001b132) linegrid_cam4_burst_pane_g4

0x6f9b,	// (0x00014c20) linegrid_cam4_burst_pane_g5_ParamLimits

0x6f9b,	// (0x00014c20) linegrid_cam4_burst_pane_g5

0x6fac,	// (0x00014c31) linegrid_cam4_burst_pane_g6_ParamLimits

0x6fac,	// (0x00014c31) linegrid_cam4_burst_pane_g6

0xd4ba,	// (0x0001b13f) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4ba,	// (0x0001b13f) linegrid_cam4_burst_pane_g7

0x6fc3,	// (0x00014c48) cell_cam4_burst_pane_g1

0xd4d3,	// (0x0001b158) main_cam5_pane_t1_ParamLimits

0xd4d3,	// (0x0001b158) main_cam5_pane_t1

0xd4e5,	// (0x0001b16a) main_cam5_pane_t2_ParamLimits

0xd4e5,	// (0x0001b16a) main_cam5_pane_t2

0xd4f7,	// (0x0001b17c) main_cam5_pane_t3_ParamLimits

0xd4f7,	// (0x0001b17c) main_cam5_pane_t3

0xd509,	// (0x0001b18e) main_cam5_pane_t4_ParamLimits

0xd509,	// (0x0001b18e) main_cam5_pane_t4

0xd521,	// (0x0001b1a6) main_cam5_pane_t5_ParamLimits

0xd521,	// (0x0001b1a6) main_cam5_pane_t5

0xd535,	// (0x0001b1ba) main_cam5_pane_t6_ParamLimits

0xd535,	// (0x0001b1ba) main_cam5_pane_t6

0xd549,	// (0x0001b1ce) main_cam5_pane_t7_ParamLimits

0xd549,	// (0x0001b1ce) main_cam5_pane_t7

0xd55b,	// (0x0001b1e0) main_cam5_pane_t8_ParamLimits

0xd55b,	// (0x0001b1e0) main_cam5_pane_t8

0xd579,	// (0x0001b1fe) main_cam5_pane_t9_ParamLimits

0xd579,	// (0x0001b1fe) main_cam5_pane_t9

0xd58b,	// (0x0001b210) main_cam5_pane_t10_ParamLimits

0xd58b,	// (0x0001b210) main_cam5_pane_t10

0xd59d,	// (0x0001b222) main_cam5_pane_t11_ParamLimits

0xd59d,	// (0x0001b222) main_cam5_pane_t11

0xd5b1,	// (0x0001b236) main_cam5_pane_t12_ParamLimits

0xd5b1,	// (0x0001b236) main_cam5_pane_t12

0xd5c8,	// (0x0001b24d) main_cam5_pane_t13_ParamLimits

0xd5c8,	// (0x0001b24d) main_cam5_pane_t13

0x000c,

0xfa6c,	// (0x0001d6f1) main_cam5_pane_t_ParamLimits

0xfa6c,	// (0x0001d6f1) main_cam5_pane_t

0x0cc7,	// (0x0000e94c) popup_scut_keymap_window_ParamLimits

0x0cc7,	// (0x0000e94c) popup_scut_keymap_window

0x6fd6,	// (0x00014c5b) aid_size_cell_brow_shortcut

0xa9af,	// (0x00018634) bg_popup_window_pane_cp010

0x6fe2,	// (0x00014c67) grid_scut_pane

0x6fee,	// (0x00014c73) cell_scut_pane_ParamLimits

0x6fee,	// (0x00014c73) cell_scut_pane

0x7007,	// (0x00014c8c) cell_scut_pane_g1

0xd5eb,	// (0x0001b270) cell_scut_pane_t1

0xd5fa,	// (0x0001b27f) cell_scut_pane_t2

0x7010,	// (0x00014c95) cell_scut_pane_t3

0x0002,

0xfa87,	// (0x0001d70c) cell_scut_pane_t

0x4bf9,	// (0x0001287e) main_mup3_pane_g8_ParamLimits

0x4bf9,	// (0x0001287e) main_mup3_pane_g8

0x60d4,	// (0x00013d59) area_vitu2_query_pane_ParamLimits

0x60d4,	// (0x00013d59) area_vitu2_query_pane

0x6d41,	// (0x000149c6) input_focus_pane_cp08

0xd609,	// (0x0001b28e) area_vitu2_query_pane_g1

0x701e,	// (0x00014ca3) area_vitu2_query_pane_g2

0x0001,

0xfa8e,	// (0x0001d713) area_vitu2_query_pane_g

0x702f,	// (0x00014cb4) area_vitu2_query_pane_t1_ParamLimits

0x702f,	// (0x00014cb4) area_vitu2_query_pane_t1

0x7043,	// (0x00014cc8) area_vitu2_query_pane_t2_ParamLimits

0x7043,	// (0x00014cc8) area_vitu2_query_pane_t2

0x7057,	// (0x00014cdc) area_vitu2_query_pane_t3_ParamLimits

0x7057,	// (0x00014cdc) area_vitu2_query_pane_t3

0xd615,	// (0x0001b29a) area_vitu2_query_pane_t4_ParamLimits

0xd615,	// (0x0001b29a) area_vitu2_query_pane_t4

0xd63d,	// (0x0001b2c2) area_vitu2_query_pane_t5_ParamLimits

0xd63d,	// (0x0001b2c2) area_vitu2_query_pane_t5

0xd665,	// (0x0001b2ea) area_vitu2_query_pane_t6_ParamLimits

0xd665,	// (0x0001b2ea) area_vitu2_query_pane_t6

0x0006,

0xfa93,	// (0x0001d718) area_vitu2_query_pane_t_ParamLimits

0xfa93,	// (0x0001d718) area_vitu2_query_pane_t

0x707f,	// (0x00014d04) bg_button_pane_cp018

0x708d,	// (0x00014d12) bg_button_pane_cp021

0x7099,	// (0x00014d1e) bg_button_pane_cp022

0x70aa,	// (0x00014d2f) input_focus_pane_cp09

0x2adc,	// (0x00010761) aid_size_touch_mv_arrow_left

0x2b05,	// (0x0001078a) aid_size_touch_mv_arrow_right

0x682d,	// (0x000144b2) main_cset_slider_pane_g16_ParamLimits

0x682d,	// (0x000144b2) main_cset_slider_pane_g16

0x683b,	// (0x000144c0) main_cset_slider_pane_g17_ParamLimits

0x683b,	// (0x000144c0) main_cset_slider_pane_g17

0x6fc3,	// (0x00014c48) cell_cam4_burst_pane_g1_ParamLimits

0x9499,	// (0x0001711e) compa_mode_pane

0x6a4b,	// (0x000146d0) popup_vtel_slider_window_g3_ParamLimits

0x6a4b,	// (0x000146d0) popup_vtel_slider_window_g3

0x6a62,	// (0x000146e7) popup_vtel_slider_window_g4_ParamLimits

0x6a62,	// (0x000146e7) popup_vtel_slider_window_g4

0x6a79,	// (0x000146fe) popup_vtel_slider_window_t1_ParamLimits

0x6a79,	// (0x000146fe) popup_vtel_slider_window_t1

0x9499,	// (0x0001711e) main_cl_pane

0xbe48,	// (0x00019acd) popup_imed_adjust2_window_ParamLimits

0xbe1c,	// (0x00019aa1) bg_tb_trans_pane_cp05_ParamLimits

0xc894,	// (0x0001a519) popup_imed_adjust2_window_g1_ParamLimits

0xc8a3,	// (0x0001a528) popup_imed_adjust2_window_g2_ParamLimits

0xc8a3,	// (0x0001a528) popup_imed_adjust2_window_g2

0xc8af,	// (0x0001a534) popup_imed_adjust2_window_g3_ParamLimits

0xc8af,	// (0x0001a534) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0001d483) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0001d483) popup_imed_adjust2_window_g

0xc8bb,	// (0x0001a540) popup_imed_adjust2_window_t1_ParamLimits

0xc8d3,	// (0x0001a558) slider_imed_adjust_pane_ParamLimits

0xc8e7,	// (0x0001a56c) slider_imed_adjust_pane_g1_ParamLimits

0xc8f7,	// (0x0001a57c) slider_imed_adjust_pane_g2_ParamLimits

0xc907,	// (0x0001a58c) slider_imed_adjust_pane_g3_ParamLimits

0xc918,	// (0x0001a59d) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0001d48a) slider_imed_adjust_pane_g_ParamLimits

0x5e26,	// (0x00013aab) aid_touch_area_cam4_ParamLimits

0x5e26,	// (0x00013aab) aid_touch_area_cam4

0xd012,	// (0x0001ac97) battery_pane_cp01

0x5ed1,	// (0x00013b56) main_camera4_pane_g6_ParamLimits

0x5ed1,	// (0x00013b56) main_camera4_pane_g6

0x5ef4,	// (0x00013b79) main_camera4_pane_t2_ParamLimits

0x5ef4,	// (0x00013b79) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0001d58d) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0001d58d) main_camera4_pane_t

0x5f29,	// (0x00013bae) aid_touch_area_vid4_ParamLimits

0x5f29,	// (0x00013bae) aid_touch_area_vid4

0x5f87,	// (0x00013c0c) main_video4_pane_g5_ParamLimits

0x5f87,	// (0x00013c0c) main_video4_pane_g5

0x5fae,	// (0x00013c33) vid4_progress_pane_ParamLimits

0x5fae,	// (0x00013c33) vid4_progress_pane

0xd24c,	// (0x0001aed1) main_cset_slider_pane_g18_ParamLimits

0xd24c,	// (0x0001aed1) main_cset_slider_pane_g18

0xd4c7,	// (0x0001b14c) cell_cam4_burst_pane_g2_ParamLimits

0xd4c7,	// (0x0001b14c) cell_cam4_burst_pane_g2

0x0001,

0xfa67,	// (0x0001d6ec) cell_cam4_burst_pane_g_ParamLimits

0xfa67,	// (0x0001d6ec) cell_cam4_burst_pane_g

0x9c73,	// (0x000178f8) bg_cl_pane_ParamLimits

0x9c73,	// (0x000178f8) bg_cl_pane

0x70bb,	// (0x00014d40) cl_header_pane_ParamLimits

0x70bb,	// (0x00014d40) cl_header_pane

0x70cf,	// (0x00014d54) cl_listscroll_pane_ParamLimits

0x70cf,	// (0x00014d54) cl_listscroll_pane

0xd6b1,	// (0x0001b336) bg_cl_pane_g1

0xd6b9,	// (0x0001b33e) bg_cl_pane_g2

0xd6c1,	// (0x0001b346) bg_cl_pane_g3

0xd6c9,	// (0x0001b34e) bg_cl_pane_g4

0xd6d1,	// (0x0001b356) bg_cl_pane_g5

0xd6d9,	// (0x0001b35e) bg_cl_pane_g6

0xd6e1,	// (0x0001b366) bg_cl_pane_g7

0xd6e9,	// (0x0001b36e) bg_cl_pane_g8

0xd6f1,	// (0x0001b376) bg_cl_pane_g9

0x0008,

0xfaa2,	// (0x0001d727) bg_cl_pane_g

0x70df,	// (0x00014d64) aid_height_cl_leading_ParamLimits

0x70df,	// (0x00014d64) aid_height_cl_leading

0x70eb,	// (0x00014d70) aid_height_cl_text_ParamLimits

0x70eb,	// (0x00014d70) aid_height_cl_text

0x950a,	// (0x0001718f) bg_cl_header_pane_ParamLimits

0x950a,	// (0x0001718f) bg_cl_header_pane

0x710a,	// (0x00014d8f) cl_header_pane_g1_ParamLimits

0x710a,	// (0x00014d8f) cl_header_pane_g1

0x7120,	// (0x00014da5) cl_header_pane_t1_ParamLimits

0x7120,	// (0x00014da5) cl_header_pane_t1

0xd6f9,	// (0x0001b37e) cl_list_pane

0xd21f,	// (0x0001aea4) hc_scroll_pane_cp01

0xa209,	// (0x00017e8e) bg_cl_header_pane_g1

0xd101,	// (0x0001ad86) bg_cl_header_pane_g2

0xa229,	// (0x00017eae) bg_cl_header_pane_g3

0xd111,	// (0x0001ad96) bg_cl_header_pane_g4

0xd109,	// (0x0001ad8e) bg_cl_header_pane_g5

0xd39c,	// (0x0001b021) bg_cl_header_pane_g6

0xd129,	// (0x0001adae) bg_cl_header_pane_g7

0xd131,	// (0x0001adb6) bg_cl_header_pane_g8

0xd121,	// (0x0001ada6) bg_cl_header_pane_g9

0x0008,

0xfab5,	// (0x0001d73a) bg_cl_header_pane_g

0x7139,	// (0x00014dbe) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7139,	// (0x00014dbe) hc_cl_list_double_graphic_heading_pane

0x714c,	// (0x00014dd1) hc_cl_list_single_graphic_pane_ParamLimits

0x714c,	// (0x00014dd1) hc_cl_list_single_graphic_pane

0x7164,	// (0x00014de9) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7164,	// (0x00014de9) hc_cl_list_single_graphic_pane_g1

0x7170,	// (0x00014df5) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7170,	// (0x00014df5) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfac8,	// (0x0001d74d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfac8,	// (0x0001d74d) hc_cl_list_single_graphic_pane_g

0x7184,	// (0x00014e09) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7184,	// (0x00014e09) hc_cl_list_single_graphic_pane_t1

0x7164,	// (0x00014de9) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7164,	// (0x00014de9) hc_cl_list_double_graphic_heading_pane_g1

0x7199,	// (0x00014e1e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7199,	// (0x00014e1e) hc_cl_list_double_graphic_heading_pane_g2

0x71ad,	// (0x00014e32) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x71ad,	// (0x00014e32) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfacd,	// (0x0001d752) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfacd,	// (0x0001d752) hc_cl_list_double_graphic_heading_pane_g

0x71c1,	// (0x00014e46) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x71c1,	// (0x00014e46) hc_cl_list_double_graphic_heading_pane_t1

0x71d6,	// (0x00014e5b) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x71d6,	// (0x00014e5b) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfad4,	// (0x0001d759) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfad4,	// (0x0001d759) hc_cl_list_double_graphic_heading_pane_t

0xd70a,	// (0x0001b38f) vid4_progress_pane_g1

0xd716,	// (0x0001b39b) vid4_progress_pane_g2

0xd722,	// (0x0001b3a7) vid4_progress_pane_g3

0xd731,	// (0x0001b3b6) vid4_progress_pane_g4

0x0004,

0xfad9,	// (0x0001d75e) vid4_progress_pane_g

0xd74f,	// (0x0001b3d4) vid4_progress_pane_t1

0xd765,	// (0x0001b3ea) vid4_progress_pane_t2

0x0002,

0xfae4,	// (0x0001d769) vid4_progress_pane_t

0xd790,	// (0x0001b415) wait_bar_pane_cp07

0xc13e,	// (0x00019dc3) blid_firmament_pane_ParamLimits

0xc181,	// (0x00019e06) popup_blid_sat_info2_window_g1

0xc1a5,	// (0x00019e2a) popup_blid_sat_info2_window_t3

0xc1b3,	// (0x00019e38) popup_blid_sat_info2_window_t4

0xc1c1,	// (0x00019e46) popup_blid_sat_info2_window_t5

0xc1cf,	// (0x00019e54) popup_blid_sat_info2_window_t6

0xc1df,	// (0x00019e64) popup_blid_sat_info2_window_t7

0xc1ed,	// (0x00019e72) popup_blid_sat_info2_window_t8

0xc1fb,	// (0x00019e80) popup_blid_sat_info2_window_t9

0xc209,	// (0x00019e8e) popup_blid_sat_info2_window_t10

0xc2d1,	// (0x00019f56) aid_firma_cardinal_ParamLimits

0xc2e5,	// (0x00019f6a) blid_firmament_pane_t1_ParamLimits

0xc2fc,	// (0x00019f81) blid_firmament_pane_t2_ParamLimits

0xc313,	// (0x00019f98) blid_firmament_pane_t3_ParamLimits

0xc32a,	// (0x00019faf) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0001d37c) blid_firmament_pane_t_ParamLimits

0xc341,	// (0x00019fc6) blid_sat_info_pane_ParamLimits

0x950a,	// (0x0001718f) main_cam_set_pane_ParamLimits

0x54ab,	// (0x00013130) aid_size_cell_colour_35_ParamLimits

0x54cb,	// (0x00013150) aid_size_cell_colour_112_ParamLimits

0x54eb,	// (0x00013170) aid_size_cell_effect_ParamLimits

0xbe1c,	// (0x00019aa1) bg_tb_trans_pane_cp02_ParamLimits

0xa429,	// (0x000180ae) heading_imed_pane_ParamLimits

0x550b,	// (0x00013190) listscroll_imed_pane_ParamLimits

0xb44a,	// (0x000190cf) popup_call2_audio_first_window_g5_ParamLimits

0xb44a,	// (0x000190cf) popup_call2_audio_first_window_g5

0x5ad0,	// (0x00013755) aid_size_touch_image3_arrow_left_ParamLimits

0x5ad0,	// (0x00013755) aid_size_touch_image3_arrow_left

0x5afc,	// (0x00013781) aid_size_touch_image3_arrow_right_ParamLimits

0x5afc,	// (0x00013781) aid_size_touch_image3_arrow_right

0xd77b,	// (0x0001b400) vid4_progress_pane_t3

0x5828,	// (0x000134ad) main_hwr_training_symbol_option_pane_ParamLimits

0x5828,	// (0x000134ad) main_hwr_training_symbol_option_pane

0xcb83,	// (0x0001a808) popup_hwr_training_preview_window_ParamLimits

0xcb83,	// (0x0001a808) popup_hwr_training_preview_window

0x5848,	// (0x000134cd) hwr_training_navi_pane_g5_ParamLimits

0x5848,	// (0x000134cd) hwr_training_navi_pane_g5

0xd0ef,	// (0x0001ad74) popup_char_count_window

0x950a,	// (0x0001718f) bg_popup_sub_pane_cp20_ParamLimits

0x6b93,	// (0x00014818) list_vitu2_match_list_pane_ParamLimits

0x6ba2,	// (0x00014827) vitu2_page_scroll_pane_ParamLimits

0x6ba2,	// (0x00014827) vitu2_page_scroll_pane

0xd7fc,	// (0x0001b481) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd7fc,	// (0x0001b481) list_single_hwr_training_symbol_option_pane

0xd80f,	// (0x0001b494) list_single_hwr_training_symbol_option_pane_g1

0xd817,	// (0x0001b49c) list_single_hwr_training_symbol_option_pane_t1

0xd825,	// (0x0001b4aa) bg_button_pane_cp023

0xd82e,	// (0x0001b4b3) bg_button_pane_cp024

0x71f5,	// (0x00014e7a) vitu2_page_scroll_pane_g1

0x71fd,	// (0x00014e82) vitu2_page_scroll_pane_g2

0x0001,

0xfaeb,	// (0x0001d770) vitu2_page_scroll_pane_g

0x7207,	// (0x00014e8c) vitu2_page_scroll_pane_t1

0xc05a,	// (0x00019cdf) popup_char_count_window_g1

0xd861,	// (0x0001b4e6) popup_char_count_window_g2

0xd86a,	// (0x0001b4ef) popup_char_count_window_g3

0x0002,

0xfaf0,	// (0x0001d775) popup_char_count_window_g

0xd873,	// (0x0001b4f8) popup_char_count_window_t1

0x9499,	// (0x0001711e) main_vded2_pane

0xc880,	// (0x0001a505) aid_size_cell_imed_line

0xc88a,	// (0x0001a50f) grid_imed_line_width_pane

0x601e,	// (0x00013ca3) vid4_indicators_pane_g4

0xd881,	// (0x0001b506) cell_imed_line_width_pane_ParamLimits

0xd881,	// (0x0001b506) cell_imed_line_width_pane

0xd897,	// (0x0001b51c) cell_imed_line_width_pane_g1

0xd8a0,	// (0x0001b525) cell_imed_line_width_pane_g2

0x0001,

0xfaf7,	// (0x0001d77c) cell_imed_line_width_pane_g

0x7216,	// (0x00014e9b) main_vded2_pane_g1_ParamLimits

0x7216,	// (0x00014e9b) main_vded2_pane_g1

0x7231,	// (0x00014eb6) main_vded2_pane_g2_ParamLimits

0x7231,	// (0x00014eb6) main_vded2_pane_g2

0x0001,

0xfafc,	// (0x0001d781) main_vded2_pane_g_ParamLimits

0xfafc,	// (0x0001d781) main_vded2_pane_g

0x7243,	// (0x00014ec8) vded2_slider_pane_ParamLimits

0x7243,	// (0x00014ec8) vded2_slider_pane

0x7253,	// (0x00014ed8) aid_size_touch_vded2_end

0x725d,	// (0x00014ee2) aid_size_touch_vded2_playhead

0xd8a8,	// (0x0001b52d) aid_size_touch_vded2_start

0xd8b0,	// (0x0001b535) vded2_slider_bg_pane

0xd8b9,	// (0x0001b53e) vded2_slider_pane_g1

0xd8c2,	// (0x0001b547) vded2_slider_pane_g2

0x7267,	// (0x00014eec) vded2_slider_pane_g3

0x0002,

0xfb01,	// (0x0001d786) vded2_slider_pane_g

0xccdc,	// (0x0001a961) vded2_slider_bg_pane_g1

0xcce5,	// (0x0001a96a) vded2_slider_bg_pane_g2

0xccee,	// (0x0001a973) vded2_slider_bg_pane_g3

0x0002,

0xfb08,	// (0x0001d78d) vded2_slider_bg_pane_g

0x31fc,	// (0x00010e81) aid_postcard_touch_down_pane_ParamLimits

0x31fc,	// (0x00010e81) aid_postcard_touch_down_pane

0x3214,	// (0x00010e99) aid_postcard_touch_up_pane_ParamLimits

0x3214,	// (0x00010e99) aid_postcard_touch_up_pane

0x9499,	// (0x0001711e) main_blid2_pane

0xbe2a,	// (0x00019aaf) popup_blid2_search_window

0x9499,	// (0x0001711e) blid2_gps_pane

0x9499,	// (0x0001711e) blid2_navig_pane

0x9499,	// (0x0001711e) blid2_search_pane

0x9499,	// (0x0001711e) blid2_tripm_pane

0x7272,	// (0x00014ef7) blid2_search_pane_g1_ParamLimits

0x7272,	// (0x00014ef7) blid2_search_pane_g1

0x728a,	// (0x00014f0f) blid2_search_pane_t1_ParamLimits

0x728a,	// (0x00014f0f) blid2_search_pane_t1

0x729c,	// (0x00014f21) aid_size_cell_blid2_gps_ParamLimits

0x729c,	// (0x00014f21) aid_size_cell_blid2_gps

0x72b4,	// (0x00014f39) blid2_gps_pane_g1_ParamLimits

0x72b4,	// (0x00014f39) blid2_gps_pane_g1

0x72c8,	// (0x00014f4d) grid_blid2_satellite_pane_ParamLimits

0x72c8,	// (0x00014f4d) grid_blid2_satellite_pane

0x72e0,	// (0x00014f65) blid2_navig_pane_g1_ParamLimits

0x72e0,	// (0x00014f65) blid2_navig_pane_g1

0x72ec,	// (0x00014f71) blid2_navig_pane_t1_ParamLimits

0x72ec,	// (0x00014f71) blid2_navig_pane_t1

0x7307,	// (0x00014f8c) blid2_navig_pane_t2_ParamLimits

0x7307,	// (0x00014f8c) blid2_navig_pane_t2

0x0001,

0xfb0f,	// (0x0001d794) blid2_navig_pane_t_ParamLimits

0xfb0f,	// (0x0001d794) blid2_navig_pane_t

0x7322,	// (0x00014fa7) blid2_navig_ring_pane_ParamLimits

0x7322,	// (0x00014fa7) blid2_navig_ring_pane

0x733d,	// (0x00014fc2) blid2_speed_pane_ParamLimits

0x733d,	// (0x00014fc2) blid2_speed_pane

0x7349,	// (0x00014fce) blid2_tripm_pane_g1_ParamLimits

0x7349,	// (0x00014fce) blid2_tripm_pane_g1

0x7364,	// (0x00014fe9) blid2_tripm_pane_g2_ParamLimits

0x7364,	// (0x00014fe9) blid2_tripm_pane_g2

0x7378,	// (0x00014ffd) blid2_tripm_pane_g3_ParamLimits

0x7378,	// (0x00014ffd) blid2_tripm_pane_g3

0x738c,	// (0x00015011) blid2_tripm_pane_g4_ParamLimits

0x738c,	// (0x00015011) blid2_tripm_pane_g4

0x73a0,	// (0x00015025) blid2_tripm_pane_g5_ParamLimits

0x73a0,	// (0x00015025) blid2_tripm_pane_g5

0x0005,

0xfb14,	// (0x0001d799) blid2_tripm_pane_g_ParamLimits

0xfb14,	// (0x0001d799) blid2_tripm_pane_g

0x73c6,	// (0x0001504b) blid2_tripm_pane_t1_ParamLimits

0x73c6,	// (0x0001504b) blid2_tripm_pane_t1

0x73e1,	// (0x00015066) blid2_tripm_pane_t2_ParamLimits

0x73e1,	// (0x00015066) blid2_tripm_pane_t2

0x73fa,	// (0x0001507f) blid2_tripm_pane_t3_ParamLimits

0x73fa,	// (0x0001507f) blid2_tripm_pane_t3

0x0003,

0xfb21,	// (0x0001d7a6) blid2_tripm_pane_t_ParamLimits

0xfb21,	// (0x0001d7a6) blid2_tripm_pane_t

0x7441,	// (0x000150c6) cell_blid2_satellite_pane_ParamLimits

0x7441,	// (0x000150c6) cell_blid2_satellite_pane

0x745d,	// (0x000150e2) cell_blid2_satellite_pane_g1

0xd8ca,	// (0x0001b54f) cell_blid2_satellite_pane_t1

0xc351,	// (0x00019fd6) blid2_speed_pane_g1

0xd8d8,	// (0x0001b55d) blid2_speed_pane_t1

0xd8e6,	// (0x0001b56b) blid2_speed_pane_t2

0x0001,

0xfb2a,	// (0x0001d7af) blid2_speed_pane_t

0xc351,	// (0x00019fd6) blid2_navig_ring_pane_g1

0x7466,	// (0x000150eb) blid2_navig_ring_pane_g2

0x746e,	// (0x000150f3) blid2_navig_ring_pane_g3

0x7476,	// (0x000150fb) blid2_navig_ring_pane_g4

0x747e,	// (0x00015103) blid2_navig_ring_pane_g5

0x0004,

0xfb2f,	// (0x0001d7b4) blid2_navig_ring_pane_g

0x9499,	// (0x0001711e) bg_popup_window_pane_cp011

0xd8f4,	// (0x0001b579) popup_blid2_search_window_g1

0xd8fc,	// (0x0001b581) popup_blid2_search_window_t1

0xd90a,	// (0x0001b58f) popup_blid2_search_window_t2

0x0001,

0xfb3a,	// (0x0001d7bf) popup_blid2_search_window_t

0xa118,	// (0x00017d9d) main_browser_pane_g1

0x9c73,	// (0x000178f8) main_browser_pane_ParamLimits

0x950a,	// (0x0001718f) bg_button_pane_cp011_ParamLimits

0x63f3,	// (0x00014078) cell_vitu2_function_pane_g1_ParamLimits

0xbe1c,	// (0x00019aa1) bg_popup_sub_pane_cp22_ParamLimits

0x6d41,	// (0x000149c6) input_focus_pane_cp08_ParamLimits

0x6d58,	// (0x000149dd) popup_vitu2_query_button_pane_ParamLimits

0x6d58,	// (0x000149dd) popup_vitu2_query_button_pane

0x6d69,	// (0x000149ee) popup_vitu2_query_input_button_pane

0xd411,	// (0x0001b096) popup_vitu2_query_window_g1_ParamLimits

0x6d73,	// (0x000149f8) popup_vitu2_query_window_g2_ParamLimits

0xfa3b,	// (0x0001d6c0) popup_vitu2_query_window_g_ParamLimits

0x9499,	// (0x0001711e) bg_button_pane_cp026

0x7486,	// (0x0001510b) popup_vitu2_query_input_button_pane_g1

0x9499,	// (0x0001711e) bg_button_pane_cp025

0xd918,	// (0x0001b59d) popup_vitu2_query_button_pane_t1

0x4909,	// (0x0001258e) main_mp3_pane_t6

0x4917,	// (0x0001259c) popup_slider_window_cp01

0xd030,	// (0x0001acb5) cam4_battery_pane

0xd089,	// (0x0001ad0e) cam4_battery_pane_cp02

0x71eb,	// (0x00014e70) cam4_battery_pane_cp01

0xd702,	// (0x0001b387) cam4_battery_pane_cp03

0xc351,	// (0x00019fd6) cam4_battery_pane_g1

0xd926,	// (0x0001b5ab) cam4_battery_pane_g2

0x0001,

0xfb3f,	// (0x0001d7c4) cam4_battery_pane_g

0xc217,	// (0x00019e9c) popup_blid_sat_info2_window_t11

0x2adc,	// (0x00010761) aid_size_touch_mv_arrow_left_ParamLimits

0x2b05,	// (0x0001078a) aid_size_touch_mv_arrow_right_ParamLimits

0xa90f,	// (0x00018594) navi_pane_g1_ParamLimits

0x2b2e,	// (0x000107b3) navi_pane_g2_ParamLimits

0x2b5c,	// (0x000107e1) navi_pane_g3_ParamLimits

0xf409,	// (0x0001d08e) navi_pane_g_ParamLimits

0x2bb6,	// (0x0001083b) navi_pane_mv_t1_ParamLimits

0x5517,	// (0x0001319c) grid_imed_effect_pane_ParamLimits

0x19c0,	// (0x0000f645) aid_placing_vt_slider_lsc

0xa065,	// (0x00017cea) aid_placing_vt_slider_prt

0x950a,	// (0x0001718f) bg_tb_trans_pane_cp01_ParamLimits

0xc4a1,	// (0x0001a126) popup_image_details_window_g1_ParamLimits

0xc4b4,	// (0x0001a139) popup_image_details_window_g2_ParamLimits

0xc4c9,	// (0x0001a14e) popup_image_details_window_g3_ParamLimits

0xc4c9,	// (0x0001a14e) popup_image_details_window_g3

0xf73c,	// (0x0001d3c1) popup_image_details_window_g_ParamLimits

0xc4dd,	// (0x0001a162) popup_image_details_window_t1_ParamLimits

0xc4ef,	// (0x0001a174) popup_image_details_window_t2_ParamLimits

0xc508,	// (0x0001a18d) popup_image_details_window_t3_ParamLimits

0xc51c,	// (0x0001a1a1) popup_image_details_window_t4_ParamLimits

0xc537,	// (0x0001a1bc) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0001d3c8) popup_image_details_window_t_ParamLimits

0x70f7,	// (0x00014d7c) cl_header_name_pane_ParamLimits

0x70f7,	// (0x00014d7c) cl_header_name_pane

0x748e,	// (0x00015113) cl_header_name_pane_t1_ParamLimits

0x748e,	// (0x00015113) cl_header_name_pane_t1

0x74af,	// (0x00015134) cl_header_name_pane_t2_ParamLimits

0x74af,	// (0x00015134) cl_header_name_pane_t2

0x74f1,	// (0x00015176) cl_header_name_pane_t3_ParamLimits

0x74f1,	// (0x00015176) cl_header_name_pane_t3

0x0002,

0xfb44,	// (0x0001d7c9) cl_header_name_pane_t_ParamLimits

0xfb44,	// (0x0001d7c9) cl_header_name_pane_t

0x2b87,	// (0x0001080c) navi_pane_mv_g2_ParamLimits

0xd0ac,	// (0x0001ad31) field_vitu2_entry_pane_g1_ParamLimits

0xd0b8,	// (0x0001ad3d) field_vitu2_entry_pane_g2_ParamLimits

0xd0c4,	// (0x0001ad49) field_vitu2_entry_pane_g3_ParamLimits

0xd0c4,	// (0x0001ad49) field_vitu2_entry_pane_g3

0xf93a,	// (0x0001d5bf) field_vitu2_entry_pane_g_ParamLimits

0x6293,	// (0x00013f18) cell_vitu2_itu_pane_g1_ParamLimits

0x62a3,	// (0x00013f28) cell_vitu2_itu_pane_g2_ParamLimits

0x62a3,	// (0x00013f28) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0001d5cb) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0001d5cb) cell_vitu2_itu_pane_g

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp05_ParamLimits

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp05

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp03

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp04

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp10_ParamLimits

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp10

0x7099,	// (0x00014d1e) bg_vkb2_func_pane_cp08

0x707f,	// (0x00014d04) bg_vkb2_func_pane_cp06

0x708d,	// (0x00014d12) bg_vkb2_func_pane_cp07

0xd837,	// (0x0001b4bc) bg_vkb2_func_pane_cp11_ParamLimits

0xd837,	// (0x0001b4bc) bg_vkb2_func_pane_cp11

0xd84c,	// (0x0001b4d1) bg_vkb2_func_pane_cp12_ParamLimits

0xd84c,	// (0x0001b4d1) bg_vkb2_func_pane_cp12

0x9499,	// (0x0001711e) bg_vkb2_func_pane_cp09

0xd101,	// (0x0001ad86) bg_vkb2_func_pane_g1

0xa229,	// (0x00017eae) bg_vkb2_func_pane_g2

0xd109,	// (0x0001ad8e) bg_vkb2_func_pane_g3

0xd111,	// (0x0001ad96) bg_vkb2_func_pane_g4

0xd39c,	// (0x0001b021) bg_vkb2_func_pane_g5

0xd129,	// (0x0001adae) bg_vkb2_func_pane_g6

0xd131,	// (0x0001adb6) bg_vkb2_func_pane_g7

0xd121,	// (0x0001ada6) bg_vkb2_func_pane_g8

0xa209,	// (0x00017e8e) bg_vkb2_func_pane_g9

0x0008,

0xfb4b,	// (0x0001d7d0) bg_vkb2_func_pane_g

0x73b4,	// (0x00015039) blid2_tripm_pane_g6_ParamLimits

0x73b4,	// (0x00015039) blid2_tripm_pane_g6

0xce71,	// (0x0001aaf6) mp4_progress_pane_g1

0x742d,	// (0x000150b2) blid2_tripm_values_pane_ParamLimits

0x742d,	// (0x000150b2) blid2_tripm_values_pane

0x7522,	// (0x000151a7) blid2_tripm_values_pane_t1

0x7530,	// (0x000151b5) blid2_tripm_values_pane_t2

0x753e,	// (0x000151c3) blid2_tripm_values_pane_t3

0x754c,	// (0x000151d1) blid2_tripm_values_pane_t4

0x755a,	// (0x000151df) blid2_tripm_values_pane_t5

0x7568,	// (0x000151ed) blid2_tripm_values_pane_t6

0x7576,	// (0x000151fb) blid2_tripm_values_pane_t7

0x7584,	// (0x00015209) blid2_tripm_values_pane_t8

0x7592,	// (0x00015217) blid2_tripm_values_pane_t9

0x0008,

0xfb5e,	// (0x0001d7e3) blid2_tripm_values_pane_t

0x1a00,	// (0x0000f685) call_video_pane_t1_ParamLimits

0x1a1a,	// (0x0000f69f) call_video_pane_t2_ParamLimits

0xf292,	// (0x0001cf17) call_video_pane_t_ParamLimits

0x30ff,	// (0x00010d84) msg_header_pane_g1_ParamLimits

0xab4c,	// (0x000187d1) msg_header_pane_g2_ParamLimits

0xab4c,	// (0x000187d1) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0001d131) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0001d131) msg_header_pane_g

0x9c73,	// (0x000178f8) main_clock2_pane_ParamLimits

0x5220,	// (0x00012ea5) grid_clock2_toolbar_pane_ParamLimits

0x5220,	// (0x00012ea5) grid_clock2_toolbar_pane

0x5220,	// (0x00012ea5) listscroll_clock2_pane_ParamLimits

0x5220,	// (0x00012ea5) listscroll_clock2_pane

0x5309,	// (0x00012f8e) main_clock2_pane_t3_ParamLimits

0x5309,	// (0x00012f8e) main_clock2_pane_t3

0x5324,	// (0x00012fa9) main_clock2_pane_t4_ParamLimits

0x5324,	// (0x00012fa9) main_clock2_pane_t4

0xd930,	// (0x0001b5b5) cell_clock2_toolbar_pane

0xd938,	// (0x0001b5bd) cell_clock2_toolbar_pane_cp01

0xd938,	// (0x0001b5bd) cell_clock2_toolbar_pane_cp02

0xd940,	// (0x0001b5c5) cell_clock2_toolbar_pane_cp03

0xd948,	// (0x0001b5cd) list_clock2_pane

0xa875,	// (0x000184fa) scroll_pane_cp10

0xd950,	// (0x0001b5d5) list_single_clock2_pane_ParamLimits

0xd950,	// (0x0001b5d5) list_single_clock2_pane

0xa9af,	// (0x00018634) list_highlight_pane_cp08

0xd95d,	// (0x0001b5e2) list_single_clock2_pane_t1

0xd96b,	// (0x0001b5f0) list_single_clock2_pane_t2

0x0001,

0xfb71,	// (0x0001d7f6) list_single_clock2_pane_t

0x9499,	// (0x0001711e) bg_button_pane_cp10

0xd979,	// (0x0001b5fe) cell_clock2_toolbar_pane_g1

0x3188,	// (0x00010e0d) aid_main_viewer_pane_g1_ParamLimits

0x3188,	// (0x00010e0d) aid_main_viewer_pane_g1

0x3196,	// (0x00010e1b) aid_main_viewer_pane_g2_ParamLimits

0x3196,	// (0x00010e1b) aid_main_viewer_pane_g2

0x31a4,	// (0x00010e29) aid_main_viewer_pane_g3_ParamLimits

0x31a4,	// (0x00010e29) aid_main_viewer_pane_g3

0x31b3,	// (0x00010e38) aid_main_viewer_pane_g4_ParamLimits

0x31b3,	// (0x00010e38) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0001d142) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0001d142) aid_main_viewer_pane_g

0x3b0b,	// (0x00011790) main_calc_pane_ParamLimits

0x3b1f,	// (0x000117a4) main_dialer2_pane_ParamLimits

0x9499,	// (0x0001711e) main_cam6_pane

0x9499,	// (0x0001711e) main_vid6_pane

0x522c,	// (0x00012eb1) listscroll_gen_pane_cp06_ParamLimits

0x522c,	// (0x00012eb1) listscroll_gen_pane_cp06

0x533f,	// (0x00012fc4) main_clock2_pane_t5_ParamLimits

0x533f,	// (0x00012fc4) main_clock2_pane_t5

0x539c,	// (0x00013021) aid_call2_pane_cp10_ParamLimits

0x53ae,	// (0x00013033) aid_call_pane_cp10_ParamLimits

0xa8e4,	// (0x00018569) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa8e4,	// (0x00018569) popup_clock_analogue_window_cp10_g2_ParamLimits

0x53c0,	// (0x00013045) popup_clock_analogue_window_cp10_g3_ParamLimits

0x53c0,	// (0x00013045) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa8e4,	// (0x00018569) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0001d478) popup_clock_analogue_window_cp10_g_ParamLimits

0x53d6,	// (0x0001305b) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5a7d,	// (0x00013702) cell_dialer2_keypad_pane_g2_ParamLimits

0x5a7d,	// (0x00013702) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0001d55e) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0001d55e) cell_dialer2_keypad_pane_g

0x5a99,	// (0x0001371e) cell_dialer2_keypad_pane_t1

0x671e,	// (0x000143a3) main_cset_text2_pane_ParamLimits

0x671e,	// (0x000143a3) main_cset_text2_pane

0xd609,	// (0x0001b28e) area_vitu2_query_pane_g1_ParamLimits

0x701e,	// (0x00014ca3) area_vitu2_query_pane_g2_ParamLimits

0xfa8e,	// (0x0001d713) area_vitu2_query_pane_g_ParamLimits

0xd68d,	// (0x0001b312) area_vitu2_query_pane_t7_ParamLimits

0xd68d,	// (0x0001b312) area_vitu2_query_pane_t7

0x707f,	// (0x00014d04) bg_button_pane_cp018_ParamLimits

0x708d,	// (0x00014d12) bg_button_pane_cp021_ParamLimits

0x7099,	// (0x00014d1e) bg_button_pane_cp022_ParamLimits

0x7099,	// (0x00014d1e) bg_vkb2_func_pane_cp08_ParamLimits

0x707f,	// (0x00014d04) bg_vkb2_func_pane_cp06_ParamLimits

0x708d,	// (0x00014d12) bg_vkb2_func_pane_cp07_ParamLimits

0x70aa,	// (0x00014d2f) input_focus_pane_cp09_ParamLimits

0xd981,	// (0x0001b606) cam6_autofocus_pane_ParamLimits

0xd981,	// (0x0001b606) cam6_autofocus_pane

0x75a0,	// (0x00015225) cam6_image_uncrop_pane_ParamLimits

0x75a0,	// (0x00015225) cam6_image_uncrop_pane

0x75af,	// (0x00015234) cam6_indi_pane_ParamLimits

0x75af,	// (0x00015234) cam6_indi_pane

0x75c5,	// (0x0001524a) cam6_mode_pane_ParamLimits

0x75c5,	// (0x0001524a) cam6_mode_pane

0x75d7,	// (0x0001525c) cam6_timer_pane_ParamLimits

0x75d7,	// (0x0001525c) cam6_timer_pane

0x75e3,	// (0x00015268) cam6_zoom_pane_ParamLimits

0x75e3,	// (0x00015268) cam6_zoom_pane

0x75f1,	// (0x00015276) cam6_mode_pane_g1_ParamLimits

0x75f1,	// (0x00015276) cam6_mode_pane_g1

0x7601,	// (0x00015286) cam6_mode_pane_g2_ParamLimits

0x7601,	// (0x00015286) cam6_mode_pane_g2

0x7611,	// (0x00015296) cam6_mode_pane_g3_ParamLimits

0x7611,	// (0x00015296) cam6_mode_pane_g3

0x7621,	// (0x000152a6) cam6_mode_pane_g4_ParamLimits

0x7621,	// (0x000152a6) cam6_mode_pane_g4

0x0003,

0xfb76,	// (0x0001d7fb) cam6_mode_pane_g_ParamLimits

0xfb76,	// (0x0001d7fb) cam6_mode_pane_g

0xd98f,	// (0x0001b614) bg_tb_trans_pane_cp08_ParamLimits

0xd98f,	// (0x0001b614) bg_tb_trans_pane_cp08

0xd99d,	// (0x0001b622) cam6_battery_pane_ParamLimits

0xd99d,	// (0x0001b622) cam6_battery_pane

0xd9b3,	// (0x0001b638) cam6_indi_pane_g1_ParamLimits

0xd9b3,	// (0x0001b638) cam6_indi_pane_g1

0xd9c5,	// (0x0001b64a) cam6_indi_pane_g2_ParamLimits

0xd9c5,	// (0x0001b64a) cam6_indi_pane_g2

0xd9d7,	// (0x0001b65c) cam6_indi_pane_g3_ParamLimits

0xd9d7,	// (0x0001b65c) cam6_indi_pane_g3

0x0002,

0xfb7f,	// (0x0001d804) cam6_indi_pane_g_ParamLimits

0xfb7f,	// (0x0001d804) cam6_indi_pane_g

0xd9e9,	// (0x0001b66e) cam6_indi_pane_t1_ParamLimits

0xd9e9,	// (0x0001b66e) cam6_indi_pane_t1

0x6048,	// (0x00013ccd) cam6_autofocus_pane_g1

0x6050,	// (0x00013cd5) cam6_autofocus_pane_g2

0x6058,	// (0x00013cdd) cam6_autofocus_pane_g3

0x6060,	// (0x00013ce5) cam6_autofocus_pane_g4

0x0003,

0xfb86,	// (0x0001d80b) cam6_autofocus_pane_g

0xda0f,	// (0x0001b694) cam6_timer_pane_g1

0xda17,	// (0x0001b69c) cam6_timer_pane_t1

0xda25,	// (0x0001b6aa) cam6_zoom_cont_pane

0xda2d,	// (0x0001b6b2) cam6_zoom_pane_g1

0xda35,	// (0x0001b6ba) cam6_zoom_pane_g2

0x7631,	// (0x000152b6) cam6_zoom_pane_g3

0x0002,

0xfb8f,	// (0x0001d814) cam6_zoom_pane_g

0xc351,	// (0x00019fd6) cam6_battery_pane_g1

0xc351,	// (0x00019fd6) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0001d385) cam6_battery_pane_g

0xda3d,	// (0x0001b6c2) cam6_zoom_cont_pane_g1

0xda46,	// (0x0001b6cb) cam6_zoom_cont_pane_g2

0xda4f,	// (0x0001b6d4) cam6_zoom_cont_pane_g3

0x0002,

0xfb96,	// (0x0001d81b) cam6_zoom_cont_pane_g

0x764e,	// (0x000152d3) cam6_mode_pane_cp_ParamLimits

0x764e,	// (0x000152d3) cam6_mode_pane_cp

0x75e3,	// (0x00015268) cam6_zoom_pane_cp_ParamLimits

0x75e3,	// (0x00015268) cam6_zoom_pane_cp

0x7660,	// (0x000152e5) vid6_image_uncrop_cif_pane_ParamLimits

0x7660,	// (0x000152e5) vid6_image_uncrop_cif_pane

0x7670,	// (0x000152f5) vid6_image_uncrop_nhd_pane_ParamLimits

0x7670,	// (0x000152f5) vid6_image_uncrop_nhd_pane

0x75a0,	// (0x00015225) vid6_image_uncrop_vga_pane_ParamLimits

0x75a0,	// (0x00015225) vid6_image_uncrop_vga_pane

0x767f,	// (0x00015304) vid6_image_uncrop_wvga_pane_ParamLimits

0x767f,	// (0x00015304) vid6_image_uncrop_wvga_pane

0x768e,	// (0x00015313) vid6_indi_pane_ParamLimits

0x768e,	// (0x00015313) vid6_indi_pane

0xd98f,	// (0x0001b614) bg_tb_trans_pane_cp09_ParamLimits

0xd98f,	// (0x0001b614) bg_tb_trans_pane_cp09

0xda67,	// (0x0001b6ec) cam6_battery_pane_cp_ParamLimits

0xda67,	// (0x0001b6ec) cam6_battery_pane_cp

0xda73,	// (0x0001b6f8) vid6_indi_pane_g1_ParamLimits

0xda73,	// (0x0001b6f8) vid6_indi_pane_g1

0xda85,	// (0x0001b70a) vid6_indi_pane_g2_ParamLimits

0xda85,	// (0x0001b70a) vid6_indi_pane_g2

0xda97,	// (0x0001b71c) vid6_indi_pane_g3_ParamLimits

0xda97,	// (0x0001b71c) vid6_indi_pane_g3

0xdaae,	// (0x0001b733) vid6_indi_pane_g4_ParamLimits

0xdaae,	// (0x0001b733) vid6_indi_pane_g4

0xdac5,	// (0x0001b74a) vid6_indi_pane_g5_ParamLimits

0xdac5,	// (0x0001b74a) vid6_indi_pane_g5

0x0004,

0xfb9d,	// (0x0001d822) vid6_indi_pane_g_ParamLimits

0xfb9d,	// (0x0001d822) vid6_indi_pane_g

0xdadf,	// (0x0001b764) vid6_indi_pane_t1_ParamLimits

0xdadf,	// (0x0001b764) vid6_indi_pane_t1

0xdaf5,	// (0x0001b77a) vid6_indi_pane_t2_ParamLimits

0xdaf5,	// (0x0001b77a) vid6_indi_pane_t2

0xdb1d,	// (0x0001b7a2) vid6_indi_pane_t3_ParamLimits

0xdb1d,	// (0x0001b7a2) vid6_indi_pane_t3

0xdb45,	// (0x0001b7ca) vid6_indi_pane_t4_ParamLimits

0xdb45,	// (0x0001b7ca) vid6_indi_pane_t4

0x0003,

0xfba8,	// (0x0001d82d) vid6_indi_pane_t_ParamLimits

0xfba8,	// (0x0001d82d) vid6_indi_pane_t

0xdb69,	// (0x0001b7ee) wait_bar_pane_cp08

0x76a6,	// (0x0001532b) main_cset_text2_pane_t1_ParamLimits

0x76a6,	// (0x0001532b) main_cset_text2_pane_t1

0x7639,	// (0x000152be) listscroll_gen_pane_cp06_t1_ParamLimits

0x7639,	// (0x000152be) listscroll_gen_pane_cp06_t1

0x9499,	// (0x0001711e) main_cam6_set_pane

0xc581,	// (0x0001a206) bg_tb_trans_pane_cp06_ParamLimits

0xd038,	// (0x0001acbd) cam4_indicators_pane_g1_ParamLimits

0xd045,	// (0x0001acca) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0001d59b) cam4_indicators_pane_g_ParamLimits

0xd065,	// (0x0001acea) cam4_indicators_pane_t1_ParamLimits

0xccce,	// (0x0001a953) bg_tb_trans_pane_cp07_ParamLimits

0x5ff7,	// (0x00013c7c) vid4_indicators_pane_g1_ParamLimits

0x6004,	// (0x00013c89) vid4_indicators_pane_g2_ParamLimits

0x6011,	// (0x00013c96) vid4_indicators_pane_g3_ParamLimits

0x601e,	// (0x00013ca3) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0001d5ad) vid4_indicators_pane_g_ParamLimits

0x6036,	// (0x00013cbb) vid4_indicators_pane_t1_ParamLimits

0xd70a,	// (0x0001b38f) vid4_progress_pane_g1_ParamLimits

0xd716,	// (0x0001b39b) vid4_progress_pane_g2_ParamLimits

0xd722,	// (0x0001b3a7) vid4_progress_pane_g3_ParamLimits

0xd731,	// (0x0001b3b6) vid4_progress_pane_g4_ParamLimits

0xfad9,	// (0x0001d75e) vid4_progress_pane_g_ParamLimits

0xd74f,	// (0x0001b3d4) vid4_progress_pane_t1_ParamLimits

0xd765,	// (0x0001b3ea) vid4_progress_pane_t2_ParamLimits

0xd77b,	// (0x0001b400) vid4_progress_pane_t3_ParamLimits

0xfae4,	// (0x0001d769) vid4_progress_pane_t_ParamLimits

0xd790,	// (0x0001b415) wait_bar_pane_cp07_ParamLimits

0x76c7,	// (0x0001534c) main_cam6_set_pane_g2_ParamLimits

0x76c7,	// (0x0001534c) main_cam6_set_pane_g2

0x76ed,	// (0x00015372) main_cset6_listscroll_pane_ParamLimits

0x76ed,	// (0x00015372) main_cset6_listscroll_pane

0x770b,	// (0x00015390) main_cset6_slider_pane_ParamLimits

0x770b,	// (0x00015390) main_cset6_slider_pane

0x7721,	// (0x000153a6) main_cset6_text2_pane_ParamLimits

0x7721,	// (0x000153a6) main_cset6_text2_pane

0xdb78,	// (0x0001b7fd) main_cset6_text_pane

0xdb80,	// (0x0001b805) main_cset_list_pane_copy1_ParamLimits

0xdb80,	// (0x0001b805) main_cset_list_pane_copy1

0xdb90,	// (0x0001b815) scroll_pane_cp028_copy1

0x772f,	// (0x000153b4) cset_list_set_pane_copy1

0x7743,	// (0x000153c8) aid_position_infowindow_above_copy1

0x774b,	// (0x000153d0) aid_position_infowindow_below_copy1

0x7753,	// (0x000153d8) cset_list_set_pane_g1_copy1

0xdb99,	// (0x0001b81e) cset_list_set_pane_g3_copy1_ParamLimits

0xdb99,	// (0x0001b81e) cset_list_set_pane_g3_copy1

0xdba8,	// (0x0001b82d) cset_list_set_pane_t1_copy1_ParamLimits

0xdba8,	// (0x0001b82d) cset_list_set_pane_t1_copy1

0x950a,	// (0x0001718f) list_highlight_pane_cp021_copy1_ParamLimits

0x950a,	// (0x0001718f) list_highlight_pane_cp021_copy1

0xdbbd,	// (0x0001b842) cset6_slider_pane_ParamLimits

0xdbbd,	// (0x0001b842) cset6_slider_pane

0xdbe9,	// (0x0001b86e) main_cset6_slider_pane_g1_ParamLimits

0xdbe9,	// (0x0001b86e) main_cset6_slider_pane_g1

0x775b,	// (0x000153e0) main_cset6_slider_pane_g2_ParamLimits

0x775b,	// (0x000153e0) main_cset6_slider_pane_g2

0xdc11,	// (0x0001b896) main_cset6_slider_pane_g3_ParamLimits

0xdc11,	// (0x0001b896) main_cset6_slider_pane_g3

0x7783,	// (0x00015408) main_cset6_slider_pane_g4_ParamLimits

0x7783,	// (0x00015408) main_cset6_slider_pane_g4

0x778f,	// (0x00015414) main_cset6_slider_pane_g5_ParamLimits

0x778f,	// (0x00015414) main_cset6_slider_pane_g5

0xd234,	// (0x0001aeb9) main_cset6_slider_pane_g7_ParamLimits

0xd234,	// (0x0001aeb9) main_cset6_slider_pane_g7

0xd240,	// (0x0001aec5) main_cset6_slider_pane_g8_ParamLimits

0xd240,	// (0x0001aec5) main_cset6_slider_pane_g8

0x67cd,	// (0x00014452) main_cset6_slider_pane_g9_ParamLimits

0x67cd,	// (0x00014452) main_cset6_slider_pane_g9

0x67d9,	// (0x0001445e) main_cset6_slider_pane_g10_ParamLimits

0x67d9,	// (0x0001445e) main_cset6_slider_pane_g10

0x67e5,	// (0x0001446a) main_cset6_slider_pane_g11_ParamLimits

0x67e5,	// (0x0001446a) main_cset6_slider_pane_g11

0x67f1,	// (0x00014476) main_cset6_slider_pane_g12_ParamLimits

0x67f1,	// (0x00014476) main_cset6_slider_pane_g12

0x67fd,	// (0x00014482) main_cset6_slider_pane_g13_ParamLimits

0x67fd,	// (0x00014482) main_cset6_slider_pane_g13

0x6809,	// (0x0001448e) main_cset6_slider_pane_g14_ParamLimits

0x6809,	// (0x0001448e) main_cset6_slider_pane_g14

0x779d,	// (0x00015422) main_cset6_slider_pane_g15_ParamLimits

0x779d,	// (0x00015422) main_cset6_slider_pane_g15

0x682d,	// (0x000144b2) main_cset6_slider_pane_g16_ParamLimits

0x682d,	// (0x000144b2) main_cset6_slider_pane_g16

0x683b,	// (0x000144c0) main_cset6_slider_pane_g17_ParamLimits

0x683b,	// (0x000144c0) main_cset6_slider_pane_g17

0x0011,

0xfbb1,	// (0x0001d836) main_cset6_slider_pane_g_ParamLimits

0xfbb1,	// (0x0001d836) main_cset6_slider_pane_g

0xdc1d,	// (0x0001b8a2) main_cset6_slider_pane_t1_ParamLimits

0xdc1d,	// (0x0001b8a2) main_cset6_slider_pane_t1

0x77cd,	// (0x00015452) main_cset6_slider_pane_t2_ParamLimits

0x77cd,	// (0x00015452) main_cset6_slider_pane_t2

0x77f8,	// (0x0001547d) main_cset6_slider_pane_t3_ParamLimits

0x77f8,	// (0x0001547d) main_cset6_slider_pane_t3

0x7823,	// (0x000154a8) main_cset6_slider_pane_t4_ParamLimits

0x7823,	// (0x000154a8) main_cset6_slider_pane_t4

0x7850,	// (0x000154d5) main_cset6_slider_pane_t5_ParamLimits

0x7850,	// (0x000154d5) main_cset6_slider_pane_t5

0xdc5e,	// (0x0001b8e3) main_cset6_slider_pane_t7_ParamLimits

0xdc5e,	// (0x0001b8e3) main_cset6_slider_pane_t7

0x787d,	// (0x00015502) main_cset6_slider_pane_t8_ParamLimits

0x787d,	// (0x00015502) main_cset6_slider_pane_t8

0x78a1,	// (0x00015526) main_cset6_slider_pane_t9_ParamLimits

0x78a1,	// (0x00015526) main_cset6_slider_pane_t9

0x78c5,	// (0x0001554a) main_cset6_slider_pane_t10_ParamLimits

0x78c5,	// (0x0001554a) main_cset6_slider_pane_t10

0x78e9,	// (0x0001556e) main_cset6_slider_pane_t11_ParamLimits

0x78e9,	// (0x0001556e) main_cset6_slider_pane_t11

0xdc94,	// (0x0001b919) main_cset6_slider_pane_t14_ParamLimits

0xdc94,	// (0x0001b919) main_cset6_slider_pane_t14

0xdccd,	// (0x0001b952) main_cset6_slider_pane_t15_ParamLimits

0xdccd,	// (0x0001b952) main_cset6_slider_pane_t15

0x000b,

0xfbd6,	// (0x0001d85b) main_cset6_slider_pane_t_ParamLimits

0xfbd6,	// (0x0001d85b) main_cset6_slider_pane_t

0xd324,	// (0x0001afa9) cset_slider_pane_g1_copy1

0xd32d,	// (0x0001afb2) cset_slider_pane_g2_copy1

0xd336,	// (0x0001afbb) cset_slider_pane_g3_copy1

0x9499,	// (0x0001711e) bg_popup_sub_pane_cp011_copy1

0xd41d,	// (0x0001b0a2) main_cset_text_pane_g1_copy1

0xd425,	// (0x0001b0aa) main_cset_text_pane_t1_copy1

0xd433,	// (0x0001b0b8) main_cset_text_pane_t2_copy1

0xd441,	// (0x0001b0c6) main_cset_text_pane_t3_copy1

0xd44f,	// (0x0001b0d4) main_cset_text_pane_t4_copy1

0xd45d,	// (0x0001b0e2) main_cset_text_pane_t5_copy1

0xd46b,	// (0x0001b0f0) main_cset_text_pane_t6_copy1

0xd479,	// (0x0001b0fe) main_cset_text_pane_t7_copy1

0x76a6,	// (0x0001532b) main_cset_text2_pane_t1_copy1

0x9499,	// (0x0001711e) main_ncimui_pane

0x3dad,	// (0x00011a32) popup_query_ncimui_window_ParamLimits

0x3dad,	// (0x00011a32) popup_query_ncimui_window

0xc622,	// (0x0001a2a7) field_cale_ev2_pane_g4_ParamLimits

0xc622,	// (0x0001a2a7) field_cale_ev2_pane_g4

0x5948,	// (0x000135cd) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5948,	// (0x000135cd) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0001d539) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0001d539) cell_video_dialer_keypad_pane_g

0x5960,	// (0x000135e5) cell_video_dialer_keypad_pane_t1

0x9499,	// (0x0001711e) bg_popup_window_pane_cp012

0xa761,	// (0x000183e6) heading_pane_cp06

0xddf5,	// (0x0001ba7a) ncim_query_content_pane

0x9499,	// (0x0001711e) bg_popup_heading_pane_cp01

0xddfd,	// (0x0001ba82) ncim_heading_pane_t1

0xde0b,	// (0x0001ba90) ncim_indicator_popup_pane

0xde1d,	// (0x0001baa2) ncim_query_button_pane

0xde33,	// (0x0001bab8) ncim_query_content_pane_t1

0xde45,	// (0x0001baca) ncim_query_content_pane_t2

0x0005,

0xfc15,	// (0x0001d89a) ncim_query_content_pane_t

0xde7f,	// (0x0001bb04) ncim_query_list_pane

0xde91,	// (0x0001bb16) ncim_query_popup_pane

0xde0b,	// (0x0001ba90) ncim_indicator_popup_pane_ParamLimits

0x7a08,	// (0x0001568d) ncim_query_content_pane_g1_ParamLimits

0x7a08,	// (0x0001568d) ncim_query_content_pane_g1

0xde33,	// (0x0001bab8) ncim_query_content_pane_t1_ParamLimits

0xde45,	// (0x0001baca) ncim_query_content_pane_t2_ParamLimits

0x7a14,	// (0x00015699) ncim_query_content_pane_t3_ParamLimits

0x7a14,	// (0x00015699) ncim_query_content_pane_t3

0x7a3c,	// (0x000156c1) ncim_query_content_pane_t4_ParamLimits

0x7a3c,	// (0x000156c1) ncim_query_content_pane_t4

0x7a64,	// (0x000156e9) ncim_query_content_pane_t5_ParamLimits

0x7a64,	// (0x000156e9) ncim_query_content_pane_t5

0xde57,	// (0x0001badc) ncim_query_content_pane_t6_ParamLimits

0xde57,	// (0x0001badc) ncim_query_content_pane_t6

0xfc15,	// (0x0001d89a) ncim_query_content_pane_t_ParamLimits

0xde7f,	// (0x0001bb04) ncim_query_list_pane_ParamLimits

0xde91,	// (0x0001bb16) ncim_query_popup_pane_ParamLimits

0xdea5,	// (0x0001bb2a) wait_bar_pane_cp04

0x9499,	// (0x0001711e) input_focus_pane_cp011

0xdead,	// (0x0001bb32) ncim_query_popup_pane_t1

0xdebb,	// (0x0001bb40) ncim_list_query_list_pane_ParamLimits

0xdebb,	// (0x0001bb40) ncim_list_query_list_pane

0x9499,	// (0x0001711e) bg_button_pane_cp027

0xdece,	// (0x0001bb53) ncim_query_button_pane_g1

0x9499,	// (0x0001711e) list_highlight_pane_cp012

0xded8,	// (0x0001bb5d) ncim_list_query_list_pane_g1

0xdee0,	// (0x0001bb65) ncim_list_query_list_pane_t1

0xd055,	// (0x0001acda) cam4_indicators_pane_g3_ParamLimits

0xd055,	// (0x0001acda) cam4_indicators_pane_g3

0x602a,	// (0x00013caf) vid4_indicators_pane_g5_ParamLimits

0x602a,	// (0x00013caf) vid4_indicators_pane_g5

0xd740,	// (0x0001b3c5) vid4_progress_pane_g5_ParamLimits

0xd740,	// (0x0001b3c5) vid4_progress_pane_g5

0x7921,	// (0x000155a6) main_ncimui_pane_g1

0x7977,	// (0x000155fc) ncimui_group_query_pane_ParamLimits

0x7977,	// (0x000155fc) ncimui_group_query_pane

0x79b3,	// (0x00015638) ncimui_list_pane_ParamLimits

0x79b3,	// (0x00015638) ncimui_list_pane

0x79d4,	// (0x00015659) ncimui_text_pane_ParamLimits

0x79d4,	// (0x00015659) ncimui_text_pane

0x7a8c,	// (0x00015711) ncimui_text_pane_t1_ParamLimits

0x7a8c,	// (0x00015711) ncimui_text_pane_t1

0xdeee,	// (0x0001bb73) ncimui_list_single_graphic_pane_ParamLimits

0xdeee,	// (0x0001bb73) ncimui_list_single_graphic_pane

0x7aaa,	// (0x0001572f) ncimui_query_pane_ParamLimits

0x7aaa,	// (0x0001572f) ncimui_query_pane

0x9499,	// (0x0001711e) list_highlight_pane_cp013

0xdefe,	// (0x0001bb83) ncim_list_query_list_pane_t1_copy1

0xded8,	// (0x0001bb5d) ncim_list_single_graphic_pane_g1

0xdf0c,	// (0x0001bb91) ncim_query_button_pane_cp01

0xdf18,	// (0x0001bb9d) ncim_query_entry_pane_ParamLimits

0xdf18,	// (0x0001bb9d) ncim_query_entry_pane

0xdf2b,	// (0x0001bbb0) ncimui_query_pane_g1

0xdf37,	// (0x0001bbbc) ncimui_query_pane_t1_ParamLimits

0xdf37,	// (0x0001bbbc) ncimui_query_pane_t1

0x950a,	// (0x0001718f) input_focus_pane_cp012

0xdf50,	// (0x0001bbd5) ncim_query_entry_pane_t1

0x9c73,	// (0x000178f8) main_im_pane_ParamLimits

0x950a,	// (0x0001718f) main_mobtv_pane_ParamLimits

0x950a,	// (0x0001718f) main_mobtv_pane

0x77b5,	// (0x0001543a) main_cset6_slider_pane_g18_ParamLimits

0x77b5,	// (0x0001543a) main_cset6_slider_pane_g18

0x77c1,	// (0x00015446) main_cset6_slider_pane_g19_ParamLimits

0x77c1,	// (0x00015446) main_cset6_slider_pane_g19

0xdf62,	// (0x0001bbe7) bg_main_mobtv_pane_ParamLimits

0xdf62,	// (0x0001bbe7) bg_main_mobtv_pane

0x7abd,	// (0x00015742) main_mobtv_info_pane

0x7ac8,	// (0x0001574d) main_mobtv_loading_pane_ParamLimits

0x7ac8,	// (0x0001574d) main_mobtv_loading_pane

0xdf70,	// (0x0001bbf5) main_mobtv_pg_channel_list_pane

0xdf7a,	// (0x0001bbff) main_mobtv_pg_hdr_pane

0x7ad5,	// (0x0001575a) main_mobtv_programe_curr_pane_ParamLimits

0x7ad5,	// (0x0001575a) main_mobtv_programe_curr_pane

0x7ae2,	// (0x00015767) main_mobtv_programe_next_pane_ParamLimits

0x7ae2,	// (0x00015767) main_mobtv_programe_next_pane

0xdf83,	// (0x0001bc08) popup_mobtv_noti_window

0xc351,	// (0x00019fd6) main_tv_pg_hdr_pane_g1

0xdf8d,	// (0x0001bc12) main_tv_pg_hdr_pane_g2

0xdf95,	// (0x0001bc1a) main_tv_pg_hdr_pane_g3

0xdf9d,	// (0x0001bc22) main_tv_pg_hdr_pane_g4

0xdfa5,	// (0x0001bc2a) main_tv_pg_hdr_pane_g5

0xdfaf,	// (0x0001bc34) main_tv_pg_hdr_pane_g6

0xdfb9,	// (0x0001bc3e) main_tv_pg_hdr_pane_g7

0xdfc3,	// (0x0001bc48) main_tv_pg_hdr_pane_g8

0xdfcd,	// (0x0001bc52) main_tv_pg_hdr_pane_g9

0xdfd7,	// (0x0001bc5c) main_tv_pg_hdr_pane_g10

0xdfe1,	// (0x0001bc66) main_tv_pg_hdr_pane_g11

0x000a,

0xfc22,	// (0x0001d8a7) main_tv_pg_hdr_pane_g

0xdfeb,	// (0x0001bc70) main_tv_pg_hdr_pane_t1

0xdff9,	// (0x0001bc7e) main_tv_pg_hdr_pane_t2

0xe007,	// (0x0001bc8c) main_tv_pg_hdr_pane_t3

0xe017,	// (0x0001bc9c) main_tv_pg_hdr_pane_t4

0xe027,	// (0x0001bcac) main_tv_pg_hdr_pane_t5

0x0004,

0xfc39,	// (0x0001d8be) main_tv_pg_hdr_pane_t

0xe037,	// (0x0001bcbc) single_mobtv_pg_channel_pane_ParamLimits

0xe037,	// (0x0001bcbc) single_mobtv_pg_channel_pane

0xe049,	// (0x0001bcce) single_mobtv_pg_channel_table_pane

0xe052,	// (0x0001bcd7) single_mobtv_pg_channel_thumb_pane

0xe05b,	// (0x0001bce0) single_tv_pg_channel_pane_g1

0xe064,	// (0x0001bce9) single_tv_pg_channel_pane_g2

0x0001,

0xfc44,	// (0x0001d8c9) single_tv_pg_channel_pane_g

0xc581,	// (0x0001a206) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc581,	// (0x0001a206) bg_single_mobtv_pg_channel_thumb_pane

0xe06d,	// (0x0001bcf2) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe06d,	// (0x0001bcf2) single_mobtv_pg_channel_thumb_pane_g1

0xe07b,	// (0x0001bd00) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe07b,	// (0x0001bd00) single_mobtv_pg_channel_thumb_pane_g2

0xe087,	// (0x0001bd0c) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe087,	// (0x0001bd0c) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc49,	// (0x0001d8ce) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc49,	// (0x0001d8ce) single_mobtv_pg_channel_thumb_pane_g

0xe093,	// (0x0001bd18) single_mobtv_pg_channel_thumb_pane_t1

0xe0a1,	// (0x0001bd26) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc50,	// (0x0001d8d5) single_mobtv_pg_channel_thumb_pane_t

0xc351,	// (0x00019fd6) bg_single_mobtv_pg_channel_table_pane_g1

0xc351,	// (0x00019fd6) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0001d385) bg_single_mobtv_pg_channel_table_pane_g

0xe0af,	// (0x0001bd34) single_mobtv_pg_channel_table_pane_t1

0xe0bd,	// (0x0001bd42) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc55,	// (0x0001d8da) single_mobtv_pg_channel_table_pane_t

0x7af7,	// (0x0001577c) main_mobtv_info_pane_g1_ParamLimits

0x7af7,	// (0x0001577c) main_mobtv_info_pane_g1

0x7b15,	// (0x0001579a) main_mobtv_info_pane_t1_ParamLimits

0x7b15,	// (0x0001579a) main_mobtv_info_pane_t1

0x7b8d,	// (0x00015812) main_mobtv_info_pane_t2_ParamLimits

0x7b8d,	// (0x00015812) main_mobtv_info_pane_t2

0x0002,

0xfc5f,	// (0x0001d8e4) main_mobtv_info_pane_t_ParamLimits

0xfc5f,	// (0x0001d8e4) main_mobtv_info_pane_t

0x7c1e,	// (0x000158a3) wait_bar_pane_cp05

0x7c30,	// (0x000158b5) main_mobtv_loading_pane_g1_ParamLimits

0x7c30,	// (0x000158b5) main_mobtv_loading_pane_g1

0x7c41,	// (0x000158c6) main_mobtv_loading_pane_g2_ParamLimits

0x7c41,	// (0x000158c6) main_mobtv_loading_pane_g2

0x7c4d,	// (0x000158d2) main_mobtv_loading_pane_g3_ParamLimits

0x7c4d,	// (0x000158d2) main_mobtv_loading_pane_g3

0x0002,

0xfc66,	// (0x0001d8eb) main_mobtv_loading_pane_g_ParamLimits

0xfc66,	// (0x0001d8eb) main_mobtv_loading_pane_g

0xe0cb,	// (0x0001bd50) main_mobtv_loading_pane_t1_ParamLimits

0xe0cb,	// (0x0001bd50) main_mobtv_loading_pane_t1

0xe0e3,	// (0x0001bd68) main_mobtv_loading_pane_t2_ParamLimits

0xe0e3,	// (0x0001bd68) main_mobtv_loading_pane_t2

0x0001,

0xfc6d,	// (0x0001d8f2) main_mobtv_loading_pane_t_ParamLimits

0xfc6d,	// (0x0001d8f2) main_mobtv_loading_pane_t

0x7c60,	// (0x000158e5) wait_bar_pane_cp06_ParamLimits

0x7c60,	// (0x000158e5) wait_bar_pane_cp06

0xe107,	// (0x0001bd8c) main_mobtv_programe_curr_pane_t1

0xe115,	// (0x0001bd9a) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc72,	// (0x0001d8f7) main_mobtv_programe_curr_pane_t

0xe123,	// (0x0001bda8) main_mobtv_programe_next_pane_t1

0xe131,	// (0x0001bdb6) main_mobtv_programe_next_pane_t2

0xe13f,	// (0x0001bdc4) main_mobtv_programe_next_pane_t3

0x0002,

0xfc77,	// (0x0001d8fc) main_mobtv_programe_next_pane_t

0x9499,	// (0x0001711e) bg_popup_mobtv_noti_window_pane

0xe14d,	// (0x0001bdd2) popup_mobtv_noti_window_g1

0xe155,	// (0x0001bdda) popup_mobtv_noti_window_t1

0xe163,	// (0x0001bde8) popup_mobtv_noti_window_t2

0x0001,

0xfc7e,	// (0x0001d903) popup_mobtv_noti_window_t

0xc351,	// (0x00019fd6) bg_popup_mobtv_noti_window_pane_g1

0x9499,	// (0x0001711e) sc_clock_pane

0x9499,	// (0x0001711e) main_fs_bigclock_pane

0x7417,	// (0x0001509c) blid2_tripm_pane_t4_ParamLimits

0x7417,	// (0x0001509c) blid2_tripm_pane_t4

0x7c6f,	// (0x000158f4) sc_clock_pane_g1_ParamLimits

0x7c6f,	// (0x000158f4) sc_clock_pane_g1

0x7c81,	// (0x00015906) sc_clock_pane_t1_ParamLimits

0x7c81,	// (0x00015906) sc_clock_pane_t1

0x7ca5,	// (0x0001592a) sc_clock_pane_t2_ParamLimits

0x7ca5,	// (0x0001592a) sc_clock_pane_t2

0x7cbd,	// (0x00015942) sc_clock_pane_t3_ParamLimits

0x7cbd,	// (0x00015942) sc_clock_pane_t3

0x0004,

0xfc83,	// (0x0001d908) sc_clock_pane_t_ParamLimits

0xfc83,	// (0x0001d908) sc_clock_pane_t

0x8bce,	// (0x00016853) main_fs_bigclock_indicator_pane_ParamLimits

0x8bce,	// (0x00016853) main_fs_bigclock_indicator_pane

0xc551,	// (0x0001a1d6) main_fs_bigclock_pane_g1_ParamLimits

0xc551,	// (0x0001a1d6) main_fs_bigclock_pane_g1

0x8bda,	// (0x0001685f) main_fs_bigclock_pane_t1_ParamLimits

0x8bda,	// (0x0001685f) main_fs_bigclock_pane_t1

0x8bec,	// (0x00016871) main_fs_bigclock_pane_t2_ParamLimits

0x8bec,	// (0x00016871) main_fs_bigclock_pane_t2

0x8c00,	// (0x00016885) main_fs_bigclock_pane_t3_ParamLimits

0x8c00,	// (0x00016885) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x0001db02) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x0001db02) main_fs_bigclock_pane_t

0xec88,	// (0x0001c90d) main_fs_bigclock_indicator_pane_g1

0xde25,	// (0x0001baaa) ncim_query_content_pane_g2_ParamLimits

0xde25,	// (0x0001baaa) ncim_query_content_pane_g2

0x0001,

0xfc10,	// (0x0001d895) ncim_query_content_pane_g_ParamLimits

0xfc10,	// (0x0001d895) ncim_query_content_pane_g

0x7cd4,	// (0x00015959) sc_clock_pane_t4_ParamLimits

0x7cd4,	// (0x00015959) sc_clock_pane_t4

0x950a,	// (0x0001718f) main_radioblah_pane

0xcf96,	// (0x0001ac1b) cell_call4_button_pane_t1_copy1_ParamLimits

0xcf96,	// (0x0001ac1b) cell_call4_button_pane_t1_copy1

0x7929,	// (0x000155ae) main_ncimui_pane_t1_ParamLimits

0x7929,	// (0x000155ae) main_ncimui_pane_t1

0x7943,	// (0x000155c8) main_ncimui_pane_t2_ParamLimits

0x7943,	// (0x000155c8) main_ncimui_pane_t2

0x0002,

0xfc09,	// (0x0001d88e) main_ncimui_pane_t_ParamLimits

0xfc09,	// (0x0001d88e) main_ncimui_pane_t

0xe171,	// (0x0001bdf6) main_radioblah_anim_pane_ParamLimits

0xe171,	// (0x0001bdf6) main_radioblah_anim_pane

0xe182,	// (0x0001be07) main_radioblah_info_pane_ParamLimits

0xe182,	// (0x0001be07) main_radioblah_info_pane

0xe196,	// (0x0001be1b) main_radioblah_pane_t1_ParamLimits

0xe196,	// (0x0001be1b) main_radioblah_pane_t1

0xe1b2,	// (0x0001be37) main_radioblah_pane_t2_ParamLimits

0xe1b2,	// (0x0001be37) main_radioblah_pane_t2

0x0003,

0xfca4,	// (0x0001d929) main_radioblah_pane_t_ParamLimits

0xfca4,	// (0x0001d929) main_radioblah_pane_t

0x7ead,	// (0x00015b32) main_radioblah_rocker_ctrl_pane_ParamLimits

0x7ead,	// (0x00015b32) main_radioblah_rocker_ctrl_pane

0xe1fa,	// (0x0001be7f) main_radioblah_info_pane_t1_ParamLimits

0xe1fa,	// (0x0001be7f) main_radioblah_info_pane_t1

0x7f05,	// (0x00015b8a) main_radioblah_info_pane_t2_ParamLimits

0x7f05,	// (0x00015b8a) main_radioblah_info_pane_t2

0x0003,

0xfcad,	// (0x0001d932) main_radioblah_info_pane_t_ParamLimits

0xfcad,	// (0x0001d932) main_radioblah_info_pane_t

0xc351,	// (0x00019fd6) main_radioblah_rocker_ctrl_pane_g1

0x7fb5,	// (0x00015c3a) main_radioblah_rocker_ctrl_pane_g2

0x7fbd,	// (0x00015c42) main_radioblah_rocker_ctrl_pane_g3

0x7fc5,	// (0x00015c4a) main_radioblah_rocker_ctrl_pane_g4

0x7fcd,	// (0x00015c52) main_radioblah_rocker_ctrl_pane_g5

0x7fd5,	// (0x00015c5a) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcb6,	// (0x0001d93b) main_radioblah_rocker_ctrl_pane_g

0x76a6,	// (0x0001532b) main_cset_text2_pane_t1_copy1_ParamLimits

0xd026,	// (0x0001acab) cam4_image_uncrop_qvga_pane

0xd07f,	// (0x0001ad04) vid4_image_uncrop_qcif_pane

0xd981,	// (0x0001b606) cam6_image_uncrop_qvga_pane_ParamLimits

0xd981,	// (0x0001b606) cam6_image_uncrop_qvga_pane

0xda57,	// (0x0001b6dc) vid6_image_uncrop_qcif_pane_ParamLimits

0xda57,	// (0x0001b6dc) vid6_image_uncrop_qcif_pane

0x9499,	// (0x0001711e) bg_popup_preview_window_pane_cp03

0xddd7,	// (0x0001ba5c) list_cset_text2_pane

0xdddf,	// (0x0001ba64) main_cset6_text2_pane_g1

0xdde7,	// (0x0001ba6c) main_cset6_text2_pane_t1

0xed4b,	// (0x0001c9d0) list_cset_text2_pane_t1_ParamLimits

0xed4b,	// (0x0001c9d0) list_cset_text2_pane_t1

0x950a,	// (0x0001718f) main_radioblah_pane_ParamLimits

0x7c0a,	// (0x0001588f) main_mobtv_info_pane_t3_ParamLimits

0x7c0a,	// (0x0001588f) main_mobtv_info_pane_t3

0x7e9b,	// (0x00015b20) main_radioblah_pane_g1

0x7ed5,	// (0x00015b5a) main_radioblah_info_pane_g1

0x7f5a,	// (0x00015bdf) main_radioblah_info_pane_t3_ParamLimits

0x7f5a,	// (0x00015bdf) main_radioblah_info_pane_t3

0x25b7,	// (0x0001023c) highlight_cell_cale_month_pane_ParamLimits

0x25b7,	// (0x0001023c) highlight_cell_cale_month_pane

0x9499,	// (0x0001711e) main_phob_fisheye_pane

0xc6d7,	// (0x0001a35c) scroll_pane_cp0031_ParamLimits

0xc6d7,	// (0x0001a35c) scroll_pane_cp0031

0xdb69,	// (0x0001b7ee) wait_bar_pane_cp08_ParamLimits

0x772f,	// (0x000153b4) cset_list_set_pane_copy1_ParamLimits

0xe234,	// (0x0001beb9) highlight_cell_cale_month_pane_g1

0x7fdd,	// (0x00015c62) highlight_cell_cale_month_pane_t1

0xd6f9,	// (0x0001b37e) list_gen_pane_cp01

0xd21f,	// (0x0001aea4) scroll_pane_01

0x7feb,	// (0x00015c70) list_single_double_fisheye_pane

0xe23c,	// (0x0001bec1) list_double_fisheye_pane_g1_ParamLimits

0xe23c,	// (0x0001bec1) list_double_fisheye_pane_g1

0xe248,	// (0x0001becd) list_double_fisheye_pane_g2_ParamLimits

0xe248,	// (0x0001becd) list_double_fisheye_pane_g2

0x7ff4,	// (0x00015c79) list_double_fisheye_pane_g3_ParamLimits

0x7ff4,	// (0x00015c79) list_double_fisheye_pane_g3

0x0004,

0xfcc3,	// (0x0001d948) list_double_fisheye_pane_g_ParamLimits

0xfcc3,	// (0x0001d948) list_double_fisheye_pane_g

0x8000,	// (0x00015c85) list_double_fisheye_pane_t1_ParamLimits

0x8000,	// (0x00015c85) list_double_fisheye_pane_t1

0x801b,	// (0x00015ca0) list_double_fisheye_pane_t2_ParamLimits

0x801b,	// (0x00015ca0) list_double_fisheye_pane_t2

0x0001,

0xfcce,	// (0x0001d953) list_double_fisheye_pane_t_ParamLimits

0xfcce,	// (0x0001d953) list_double_fisheye_pane_t

0x9499,	// (0x0001711e) main_call5_pane

0x7cff,	// (0x00015984) sc_swipe_pane_ParamLimits

0x7cff,	// (0x00015984) sc_swipe_pane

0x8050,	// (0x00015cd5) call5_image_pane_ParamLimits

0x8050,	// (0x00015cd5) call5_image_pane

0x806d,	// (0x00015cf2) call5_swipe_1_pane_ParamLimits

0x806d,	// (0x00015cf2) call5_swipe_1_pane

0x8080,	// (0x00015d05) call5_swipe_2_pane_ParamLimits

0x8080,	// (0x00015d05) call5_swipe_2_pane

0x80ad,	// (0x00015d32) popup_call5_audio_first_window_ParamLimits

0x80ad,	// (0x00015d32) popup_call5_audio_first_window

0xc581,	// (0x0001a206) call5_swipe_1_pane_g1_ParamLimits

0xc581,	// (0x0001a206) call5_swipe_1_pane_g1

0xe279,	// (0x0001befe) call5_swipe_1_pane_g2_ParamLimits

0xe279,	// (0x0001befe) call5_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x0001d958) call5_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x0001d958) call5_swipe_1_pane_g

0xe285,	// (0x0001bf0a) call5_swipe_1_pane_t1_ParamLimits

0xe285,	// (0x0001bf0a) call5_swipe_1_pane_t1

0xc581,	// (0x0001a206) call5_swipe_2_pane_g1_ParamLimits

0xc581,	// (0x0001a206) call5_swipe_2_pane_g1

0xe29a,	// (0x0001bf1f) call5_swipe_2_pane_g2_ParamLimits

0xe29a,	// (0x0001bf1f) call5_swipe_2_pane_g2

0x0001,

0xfcd8,	// (0x0001d95d) call5_swipe_2_pane_g_ParamLimits

0xfcd8,	// (0x0001d95d) call5_swipe_2_pane_g

0xe2a6,	// (0x0001bf2b) call5_swipe_2_pane_t1_ParamLimits

0xe2a6,	// (0x0001bf2b) call5_swipe_2_pane_t1

0xe2bb,	// (0x0001bf40) sc_swipe_pane_g1_ParamLimits

0xe2bb,	// (0x0001bf40) sc_swipe_pane_g1

0xe2c8,	// (0x0001bf4d) sc_swipe_pane_g2_ParamLimits

0xe2c8,	// (0x0001bf4d) sc_swipe_pane_g2

0x0001,

0xfcdd,	// (0x0001d962) sc_swipe_pane_g_ParamLimits

0xfcdd,	// (0x0001d962) sc_swipe_pane_g

0xe2d4,	// (0x0001bf59) sc_swipe_pane_t1_ParamLimits

0xe2d4,	// (0x0001bf59) sc_swipe_pane_t1

0x9499,	// (0x0001711e) main_cmail_launcher_pane

0x80c2,	// (0x00015d47) aid_size_cell_cmail_l_ParamLimits

0x80c2,	// (0x00015d47) aid_size_cell_cmail_l

0x80dc,	// (0x00015d61) grid_cmail_l_pane_ParamLimits

0x80dc,	// (0x00015d61) grid_cmail_l_pane

0x80f8,	// (0x00015d7d) cell_cmail_l_pane_ParamLimits

0x80f8,	// (0x00015d7d) cell_cmail_l_pane

0x8120,	// (0x00015da5) cell_cmail_l_pane_g1_ParamLimits

0x8120,	// (0x00015da5) cell_cmail_l_pane_g1

0x812c,	// (0x00015db1) cell_cmail_l_pane_t1_ParamLimits

0x812c,	// (0x00015db1) cell_cmail_l_pane_t1

0xe2e9,	// (0x0001bf6e) cell_cmail_l_pane_t2_ParamLimits

0xe2e9,	// (0x0001bf6e) cell_cmail_l_pane_t2

0x0001,

0xfce2,	// (0x0001d967) cell_cmail_l_pane_t_ParamLimits

0xfce2,	// (0x0001d967) cell_cmail_l_pane_t

0x950a,	// (0x0001718f) grid_highlight_pane_cp018_ParamLimits

0x950a,	// (0x0001718f) grid_highlight_pane_cp018

0x0bbd,	// (0x0000e842) main2_pane_ParamLimits

0x0bbd,	// (0x0000e842) main2_pane

0x9d4c,	// (0x000179d1) popup_sp_fs_action_menu_bg_pane_g1

0x9d54,	// (0x000179d9) popup_sp_fs_action_menu_bg_pane_g2

0x9d5c,	// (0x000179e1) popup_sp_fs_action_menu_bg_pane_g3

0x9d64,	// (0x000179e9) popup_sp_fs_action_menu_bg_pane_g4

0x9d6c,	// (0x000179f1) popup_sp_fs_action_menu_bg_pane_g5

0x9d74,	// (0x000179f9) popup_sp_fs_action_menu_bg_pane_g6

0x9d7c,	// (0x00017a01) popup_sp_fs_action_menu_bg_pane_g7

0x9d84,	// (0x00017a09) popup_sp_fs_action_menu_bg_pane_g8

0x9d8c,	// (0x00017a11) popup_sp_fs_action_menu_bg_pane_g9

0x9d94,	// (0x00017a19) popup_sp_fs_action_menu_bg_pane_g10

0x9d94,	// (0x00017a19) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0001ce31) popup_sp_fs_action_menu_bg_pane_g

0x9f72,	// (0x00017bf7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t3_g3_g1

0x9f7e,	// (0x00017c03) list_medium_line_x2_t3_g3_g2_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x2_t3_g3_g2

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t3_g3_g3_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0001cee1) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0001cee1) list_medium_line_x2_t3_g3_g

0x9f96,	// (0x00017c1b) list_medium_line_x2_t3_g3_t1_ParamLimits

0x9f96,	// (0x00017c1b) list_medium_line_x2_t3_g3_t1

0x1901,	// (0x0000f586) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1901,	// (0x0000f586) list_medium_line_x2_t3_g3_t2

0x9fab,	// (0x00017c30) list_medium_line_x2_t3_g3_t3_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0001cee8) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0001cee8) list_medium_line_x2_t3_g3_t

0x9f72,	// (0x00017bf7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t3_g2_g1

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t3_g2_g2_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0001ceef) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0001ceef) list_medium_line_x2_t3_g2_g

0x9fc0,	// (0x00017c45) list_medium_line_x2_t3_g2_t1_ParamLimits

0x9fc0,	// (0x00017c45) list_medium_line_x2_t3_g2_t1

0x9fd6,	// (0x00017c5b) list_medium_line_x2_t3_g2_t2_ParamLimits

0x9fd6,	// (0x00017c5b) list_medium_line_x2_t3_g2_t2

0x9fe8,	// (0x00017c6d) list_medium_line_x2_t3_g2_t3_ParamLimits

0x9fe8,	// (0x00017c6d) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0001cef4) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0001cef4) list_medium_line_x2_t3_g2_t

0x9f72,	// (0x00017bf7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t4_g4_g1

0xa006,	// (0x00017c8b) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa006,	// (0x00017c8b) list_medium_line_x2_t4_g4_g2

0x9f7e,	// (0x00017c03) list_medium_line_x2_t4_g4_g3_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x2_t4_g4_g3

0xa012,	// (0x00017c97) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa012,	// (0x00017c97) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0001cefb) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0001cefb) list_medium_line_x2_t4_g4_g

0x1915,	// (0x0000f59a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1915,	// (0x0000f59a) list_medium_line_x2_t4_g4_t1

0x192c,	// (0x0000f5b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x192c,	// (0x0000f5b1) list_medium_line_x2_t4_g4_t2

0x1941,	// (0x0000f5c6) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1941,	// (0x0000f5c6) list_medium_line_x2_t4_g4_t3

0xa01e,	// (0x00017ca3) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa01e,	// (0x00017ca3) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0001cf04) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0001cf04) list_medium_line_x2_t4_g4_t

0x9f72,	// (0x00017bf7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t2_g4_g1

0xa006,	// (0x00017c8b) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa006,	// (0x00017c8b) list_medium_line_x2_t2_g4_g2

0x9f7e,	// (0x00017c03) list_medium_line_x2_t2_g4_g3_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x2_t2_g4_g3

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t2_g4_g4_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0001cf6b) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0001cf6b) list_medium_line_x2_t2_g4_g

0xa30a,	// (0x00017f8f) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa30a,	// (0x00017f8f) list_medium_line_x2_t2_g4_t1

0x9fab,	// (0x00017c30) list_medium_line_x2_t2_g4_t2_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0001cf74) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0001cf74) list_medium_line_x2_t2_g4_t

0x9f72,	// (0x00017bf7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t2_g3_g1

0x9f7e,	// (0x00017c03) list_medium_line_x2_t2_g3_g2_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x2_t2_g3_g2

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t2_g3_g3_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0001cee1) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0001cee1) list_medium_line_x2_t2_g3_g

0xa31f,	// (0x00017fa4) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa31f,	// (0x00017fa4) list_medium_line_x2_t2_g3_t1

0x9fab,	// (0x00017c30) list_medium_line_x2_t2_g3_t2_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0001cf79) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0001cf79) list_medium_line_x2_t2_g3_t

0x2790,	// (0x00010415) main_sp_fs_list_pane_ParamLimits

0x2790,	// (0x00010415) main_sp_fs_list_pane

0x279c,	// (0x00010421) sp_fs_scroll_pane_ParamLimits

0x279c,	// (0x00010421) sp_fs_scroll_pane

0x27a8,	// (0x0001042d) list_medium_line_x2_t3_t1

0x27b8,	// (0x0001043d) list_medium_line_x2_t3_t2

0xa504,	// (0x00018189) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0001cfc4) list_medium_line_x2_t3_t

0x27c6,	// (0x0001044b) list_medium_line_x3_t4_t1

0x27d6,	// (0x0001045b) list_medium_line_x3_t4_t2

0xa512,	// (0x00018197) list_medium_line_x3_t4_t3

0xa504,	// (0x00018189) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0001cfcb) list_medium_line_x3_t4_t

0x27e4,	// (0x00010469) list_medium_line_x4_t5_t1

0x27f4,	// (0x00010479) list_medium_line_x4_t5_t2

0xa512,	// (0x00018197) list_medium_line_x4_t5_t3

0xa520,	// (0x000181a5) list_medium_line_x4_t5_t4

0xa504,	// (0x00018189) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0001cfd4) list_medium_line_x4_t5_t

0x9f72,	// (0x00017bf7) list_medium_line_t4_g4_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_t4_g4_g1

0xa012,	// (0x00017c97) list_medium_line_t4_g4_g2_ParamLimits

0xa012,	// (0x00017c97) list_medium_line_t4_g4_g2

0xa52e,	// (0x000181b3) list_medium_line_t4_g4_g3_ParamLimits

0xa52e,	// (0x000181b3) list_medium_line_t4_g4_g3

0x9f8a,	// (0x00017c0f) list_medium_line_t4_g4_g4_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0001cfdf) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0001cfdf) list_medium_line_t4_g4_g

0xa53a,	// (0x000181bf) list_medium_line_t4_g4_t1_ParamLimits

0xa53a,	// (0x000181bf) list_medium_line_t4_g4_t1

0xa54f,	// (0x000181d4) list_medium_line_t4_g4_t2_ParamLimits

0xa54f,	// (0x000181d4) list_medium_line_t4_g4_t2

0xa565,	// (0x000181ea) list_medium_line_t4_g4_t3_ParamLimits

0xa565,	// (0x000181ea) list_medium_line_t4_g4_t3

0x9fab,	// (0x00017c30) list_medium_line_t4_g4_t4_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0001cfe8) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0001cfe8) list_medium_line_t4_g4_t

0x28c8,	// (0x0001054d) chi_dic_find_pane_g1

0x3b33,	// (0x000117b8) main_tport_pane

0xd372,	// (0x0001aff7) list_medium_line_plain_t1

0xd3c4,	// (0x0001b049) list_medium_line_t2_g2_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_t2_g2_g1

0xd3d0,	// (0x0001b055) list_medium_line_t2_g2_g2_ParamLimits

0xd3d0,	// (0x0001b055) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0001d6a4) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0001d6a4) list_medium_line_t2_g2_g

0x6bb1,	// (0x00014836) list_medium_line_t2_g2_t1_ParamLimits

0x6bb1,	// (0x00014836) list_medium_line_t2_g2_t1

0x6bc8,	// (0x0001484d) list_medium_line_t2_g2_t2_ParamLimits

0x6bc8,	// (0x0001484d) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0001d6a9) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0001d6a9) list_medium_line_t2_g2_t

0xd7a2,	// (0x0001b427) aid_sp_fs_list_icon_a_sm

0xd7aa,	// (0x0001b42f) aid_sp_fs_list_icon_d

0xd7b2,	// (0x0001b437) aid_sp_fs_text_primary

0xd7bb,	// (0x0001b440) aid_sp_fs_text_secondary

0xd7c4,	// (0x0001b449) list_medium_line

0xd7c4,	// (0x0001b449) list_medium_line_g2

0xd7c4,	// (0x0001b449) list_medium_line_g3

0xd7c4,	// (0x0001b449) list_medium_line_plain

0xd7c4,	// (0x0001b449) list_medium_line_plain_t2

0xd7c4,	// (0x0001b449) list_medium_line_plain_t3

0xd7c4,	// (0x0001b449) list_medium_line_right_icon

0xd7c4,	// (0x0001b449) list_medium_line_right_iconx2

0xd7c4,	// (0x0001b449) list_medium_line_t2

0xd7c4,	// (0x0001b449) list_medium_line_t2_g2

0xd7c4,	// (0x0001b449) list_medium_line_t2_g3

0xd7c4,	// (0x0001b449) list_medium_line_t2_right_icon

0xd7c4,	// (0x0001b449) list_medium_line_t2_right_iconx2

0xd7c4,	// (0x0001b449) list_medium_line_t3

0xd7c4,	// (0x0001b449) list_medium_line_t3_g2

0xd7c4,	// (0x0001b449) list_medium_line_t3_g3

0xd7c4,	// (0x0001b449) list_medium_line_t3_right_iconx2

0xd7cd,	// (0x0001b452) list_medium_line_t4_g4

0xd7d6,	// (0x0001b45b) list_medium_line_x2

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t2_g2

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t2_g3

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t2_g4

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t3

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t3_g2

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t3_g3

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t3_g4

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t4_g2

0xd7d6,	// (0x0001b45b) list_medium_line_x2_t4_g4

0xd7df,	// (0x0001b464) list_medium_line_x3

0xd7df,	// (0x0001b464) list_medium_line_x3_t4

0xd7df,	// (0x0001b464) list_medium_line_x3_t4_g4

0xd7cd,	// (0x0001b452) list_medium_line_x4_t4

0xd7cd,	// (0x0001b452) list_medium_line_x4_t4_g7

0xd7cd,	// (0x0001b452) list_medium_line_x4_t5

0xd7e8,	// (0x0001b46d) list_single_fs_dyc_pane_ParamLimits

0xd7e8,	// (0x0001b46d) list_single_fs_dyc_pane

0x9f72,	// (0x00017bf7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x4_t4_g7_g1

0xdd06,	// (0x0001b98b) list_medium_line_x4_t4_g7_g2_ParamLimits

0xdd06,	// (0x0001b98b) list_medium_line_x4_t4_g7_g2

0xdd12,	// (0x0001b997) list_medium_line_x4_t4_g7_g3_ParamLimits

0xdd12,	// (0x0001b997) list_medium_line_x4_t4_g7_g3

0xdd21,	// (0x0001b9a6) list_medium_line_x4_t4_g7_g4_ParamLimits

0xdd21,	// (0x0001b9a6) list_medium_line_x4_t4_g7_g4

0xdd2d,	// (0x0001b9b2) list_medium_line_x4_t4_g7_g5_ParamLimits

0xdd2d,	// (0x0001b9b2) list_medium_line_x4_t4_g7_g5

0xdd3c,	// (0x0001b9c1) list_medium_line_x4_t4_g7_g6_ParamLimits

0xdd3c,	// (0x0001b9c1) list_medium_line_x4_t4_g7_g6

0xdd4b,	// (0x0001b9d0) list_medium_line_x4_t4_g7_g7_ParamLimits

0xdd4b,	// (0x0001b9d0) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbef,	// (0x0001d874) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbef,	// (0x0001d874) list_medium_line_x4_t4_g7_g

0xdd57,	// (0x0001b9dc) list_medium_line_x4_t4_g7_t1_ParamLimits

0xdd57,	// (0x0001b9dc) list_medium_line_x4_t4_g7_t1

0xdd6c,	// (0x0001b9f1) list_medium_line_x4_t4_g7_t2_ParamLimits

0xdd6c,	// (0x0001b9f1) list_medium_line_x4_t4_g7_t2

0xdd81,	// (0x0001ba06) list_medium_line_x4_t4_g7_t3_ParamLimits

0xdd81,	// (0x0001ba06) list_medium_line_x4_t4_g7_t3

0xdd96,	// (0x0001ba1b) list_medium_line_x4_t4_g7_t4_ParamLimits

0xdd96,	// (0x0001ba1b) list_medium_line_x4_t4_g7_t4

0xdda8,	// (0x0001ba2d) list_medium_line_x4_t4_g7_t5_ParamLimits

0xdda8,	// (0x0001ba2d) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbfe,	// (0x0001d883) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbfe,	// (0x0001d883) list_medium_line_x4_t4_g7_t

0xddba,	// (0x0001ba3f) list_single_dyc_row_pane_ParamLimits

0xddba,	// (0x0001ba3f) list_single_dyc_row_pane

0x803d,	// (0x00015cc2) call5_gesture_pane_ParamLimits

0x803d,	// (0x00015cc2) call5_gesture_pane

0x8093,	// (0x00015d18) call5_windows_pane_ParamLimits

0x8093,	// (0x00015d18) call5_windows_pane

0x8142,	// (0x00015dc7) call5_swipe_1_pane_cp_ParamLimits

0x8142,	// (0x00015dc7) call5_swipe_1_pane_cp

0x814e,	// (0x00015dd3) call5_swipe_2_pane_cp_ParamLimits

0x814e,	// (0x00015dd3) call5_swipe_2_pane_cp

0xa9af,	// (0x00018634) call5_image_pane_cp

0x815a,	// (0x00015ddf) popup_call5_audio_first_window_cp_ParamLimits

0x815a,	// (0x00015ddf) popup_call5_audio_first_window_cp

0xe2bb,	// (0x0001bf40) call5_swipe_1_pane_g1_cp_ParamLimits

0xe2bb,	// (0x0001bf40) call5_swipe_1_pane_g1_cp

0xe2fb,	// (0x0001bf80) call5_swipe_1_pane_g2_cp

0xe2d4,	// (0x0001bf59) call5_swipe_1_pane_t1_cp_ParamLimits

0xe2d4,	// (0x0001bf59) call5_swipe_1_pane_t1_cp

0xe2bb,	// (0x0001bf40) call5_swipe_2_pane_g1_cp_ParamLimits

0xe2bb,	// (0x0001bf40) call5_swipe_2_pane_g1_cp

0xe303,	// (0x0001bf88) call5_swipe_2_pane_g2_cp

0xe30b,	// (0x0001bf90) call5_swipe_2_pane_t1_cp_ParamLimits

0xe30b,	// (0x0001bf90) call5_swipe_2_pane_t1_cp

0x950a,	// (0x0001718f) main_sp_fs_email_pane

0xe320,	// (0x0001bfa5) main_sp_fs_listscroll_pane_te

0xe329,	// (0x0001bfae) popup_sp_fs_action_menu_pane_ParamLimits

0xe329,	// (0x0001bfae) popup_sp_fs_action_menu_pane

0xc351,	// (0x00019fd6) bg_sp_fs_ctrlbar_pane_g1

0xe36f,	// (0x0001bff4) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe378,	// (0x0001bffd) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe381,	// (0x0001c006) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc351,	// (0x00019fd6) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfce7,	// (0x0001d96c) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc130,	// (0x00019db5) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc130,	// (0x00019db5) bg_sp_fs_ctrlbar_ddmenu_pane

0xe38a,	// (0x0001c00f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe38a,	// (0x0001c00f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe396,	// (0x0001c01b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe396,	// (0x0001c01b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf0,	// (0x0001d975) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf0,	// (0x0001d975) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe3a2,	// (0x0001c027) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe3a2,	// (0x0001c027) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe3bc,	// (0x0001c041) list_medium_line_t2_right_icon_g1

0x8168,	// (0x00015ded) list_medium_line_t2_right_icon_t1

0x8178,	// (0x00015dfd) list_medium_line_t2_right_icon_t2

0x0001,

0xfcf5,	// (0x0001d97a) list_medium_line_t2_right_icon_t

0xbe1c,	// (0x00019aa1) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbe1c,	// (0x00019aa1) bg_sp_fs_ctrlbar_pane

0x81d2,	// (0x00015e57) main_sp_fs_ctrlbar_button_pane_cp01

0x81dc,	// (0x00015e61) main_sp_fs_ctrlbar_ddmenu_pane

0xe3fe,	// (0x0001c083) main_sp_fs_ctrlbar_pane_g1

0xe40a,	// (0x0001c08f) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcfa,	// (0x0001d97f) main_sp_fs_ctrlbar_pane_g

0xe416,	// (0x0001c09b) main_sp_fs_ctrlbar_pane_t1

0x81e6,	// (0x00015e6b) main_sp_fs_ctrlbar_pane

0x820a,	// (0x00015e8f) main_sp_fs_listscroll_pane_te_cp01

0x822a,	// (0x00015eaf) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x822a,	// (0x00015eaf) popup_sp_fs_action_menu_pane_cp01

0x950a,	// (0x0001718f) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x950a,	// (0x0001718f) bg_sp_fs_highlight_list_pane_cp01

0xe42b,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe42b,	// (0x0001c0b0) sp_fs_action_menu_list_gene_pane_g1

0xe43a,	// (0x0001c0bf) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe43a,	// (0x0001c0bf) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcff,	// (0x0001d984) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcff,	// (0x0001d984) sp_fs_action_menu_list_gene_pane_g

0xe447,	// (0x0001c0cc) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe447,	// (0x0001c0cc) sp_fs_action_menu_list_gene_pane_t1

0xe45f,	// (0x0001c0e4) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe45f,	// (0x0001c0e4) sp_fs_action_menu_list_gene_pane

0xe482,	// (0x0001c107) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe482,	// (0x0001c107) popup_sp_fs_action_menu_bg_pane

0xe490,	// (0x0001c115) sp_fs_action_menu_list_pane_ParamLimits

0xe490,	// (0x0001c115) sp_fs_action_menu_list_pane

0xe4b4,	// (0x0001c139) sp_fs_scroll_pane_cp01_ParamLimits

0xe4b4,	// (0x0001c139) sp_fs_scroll_pane_cp01

0x8246,	// (0x00015ecb) list_medium_line_plain_t2_t1

0x8256,	// (0x00015edb) list_medium_line_plain_t2_t2

0x0001,

0xfd04,	// (0x0001d989) list_medium_line_plain_t2_t

0x8266,	// (0x00015eeb) list_medium_line_plain_t3_t1

0x8276,	// (0x00015efb) list_medium_line_plain_t3_t2

0x8284,	// (0x00015f09) list_medium_line_plain_t3_t3

0x0002,

0xfd09,	// (0x0001d98e) list_medium_line_plain_t3_t

0x9f72,	// (0x00017bf7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t2_g2_g1

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t2_g2_g2_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0001ceef) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0001ceef) list_medium_line_x2_t2_g2_g

0xa53a,	// (0x000181bf) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa53a,	// (0x000181bf) list_medium_line_x2_t2_g2_t1

0x9fab,	// (0x00017c30) list_medium_line_x2_t2_g2_t2_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd10,	// (0x0001d995) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd10,	// (0x0001d995) list_medium_line_x2_t2_g2_t

0x9f72,	// (0x00017bf7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t4_g2_g1

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t4_g2_g2_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t4_g2_g2

0x0001,

0xf26a,	// (0x0001ceef) list_medium_line_x2_t4_g2_g_ParamLimits

0xf26a,	// (0x0001ceef) list_medium_line_x2_t4_g2_g

0x8292,	// (0x00015f17) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8292,	// (0x00015f17) list_medium_line_x2_t4_g2_t1

0x82ac,	// (0x00015f31) list_medium_line_x2_t4_g2_t2_ParamLimits

0x82ac,	// (0x00015f31) list_medium_line_x2_t4_g2_t2

0x82c2,	// (0x00015f47) list_medium_line_x2_t4_g2_t3_ParamLimits

0x82c2,	// (0x00015f47) list_medium_line_x2_t4_g2_t3

0x9fab,	// (0x00017c30) list_medium_line_x2_t4_g2_t4_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x0001d99a) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x0001d99a) list_medium_line_x2_t4_g2_t

0xe4da,	// (0x0001c15f) list_medium_line_t3_right_iconx2_g1

0xe3bc,	// (0x0001c041) list_medium_line_t3_right_iconx2_g2

0x82d7,	// (0x00015f5c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x0001d9a3) list_medium_line_t3_right_iconx2_g

0x82e1,	// (0x00015f66) list_medium_line_t3_right_iconx2_t1

0x82f1,	// (0x00015f76) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x0001d9aa) list_medium_line_t3_right_iconx2_t

0x9f72,	// (0x00017bf7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x3_t4_g4_g1

0x9f7e,	// (0x00017c03) list_medium_line_x3_t4_g4_g2_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x3_t4_g4_g2

0xa012,	// (0x00017c97) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa012,	// (0x00017c97) list_medium_line_x3_t4_g4_g3

0xe4e2,	// (0x0001c167) list_medium_line_x3_t4_g4_g4_ParamLimits

0xe4e2,	// (0x0001c167) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x0001d9af) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x0001d9af) list_medium_line_x3_t4_g4_g

0x82ff,	// (0x00015f84) list_medium_line_x3_t4_g4_t1_ParamLimits

0x82ff,	// (0x00015f84) list_medium_line_x3_t4_g4_t1

0x8316,	// (0x00015f9b) list_medium_line_x3_t4_g4_t2_ParamLimits

0x8316,	// (0x00015f9b) list_medium_line_x3_t4_g4_t2

0xe4ee,	// (0x0001c173) list_medium_line_x3_t4_g4_t3_ParamLimits

0xe4ee,	// (0x0001c173) list_medium_line_x3_t4_g4_t3

0xe503,	// (0x0001c188) list_medium_line_x3_t4_g4_t4_ParamLimits

0xe503,	// (0x0001c188) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x0001d9b8) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x0001d9b8) list_medium_line_x3_t4_g4_t

0x8331,	// (0x00015fb6) list_single_dyc_row_text_pane_t1_ParamLimits

0x8331,	// (0x00015fb6) list_single_dyc_row_text_pane_t1

0x837a,	// (0x00015fff) list_single_dyc_row_text_pane_t2_ParamLimits

0x837a,	// (0x00015fff) list_single_dyc_row_text_pane_t2

0xe520,	// (0x0001c1a5) list_single_dyc_row_text_pane_t3_ParamLimits

0xe520,	// (0x0001c1a5) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x0001d9c1) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x0001d9c1) list_single_dyc_row_text_pane_t

0xe532,	// (0x0001c1b7) list_single_dyc_row_pane_g1_ParamLimits

0xe532,	// (0x0001c1b7) list_single_dyc_row_pane_g1

0xe53e,	// (0x0001c1c3) list_single_dyc_row_pane_g2_ParamLimits

0xe53e,	// (0x0001c1c3) list_single_dyc_row_pane_g2

0xe54a,	// (0x0001c1cf) list_single_dyc_row_pane_g3_ParamLimits

0xe54a,	// (0x0001c1cf) list_single_dyc_row_pane_g3

0xe556,	// (0x0001c1db) list_single_dyc_row_pane_g4_ParamLimits

0xe556,	// (0x0001c1db) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x0001d9c8) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x0001d9c8) list_single_dyc_row_pane_g

0xe562,	// (0x0001c1e7) list_single_dyc_row_text_pane_ParamLimits

0xe562,	// (0x0001c1e7) list_single_dyc_row_text_pane

0x9499,	// (0x0001711e) bg_sp_fs_scroll_pane

0xe581,	// (0x0001c206) thumb_sp_fs_scroll_pane

0xd3c4,	// (0x0001b049) list_medium_line_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_g1

0xe58a,	// (0x0001c20f) list_medium_line_t1_ParamLimits

0xe58a,	// (0x0001c20f) list_medium_line_t1

0x9f72,	// (0x00017bf7) list_medium_line_x2_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_g1

0x9f7e,	// (0x00017c03) list_medium_line_x2_g2_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x0001d9d1) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x0001d9d1) list_medium_line_x2_g

0xe59f,	// (0x0001c224) list_medium_line_x2_t1_ParamLimits

0xe59f,	// (0x0001c224) list_medium_line_x2_t1

0x9f72,	// (0x00017bf7) list_medium_line_x3_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x3_g1

0x9f7e,	// (0x00017c03) list_medium_line_x3_g2_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x0001d9d1) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x0001d9d1) list_medium_line_x3_g

0xe59f,	// (0x0001c224) list_medium_line_x3_t1_ParamLimits

0xe59f,	// (0x0001c224) list_medium_line_x3_t1

0xe5b5,	// (0x0001c23a) thumb_sp_fs_scroll_pane_g1

0xe5be,	// (0x0001c243) thumb_sp_fs_scroll_pane_g2

0xe5c7,	// (0x0001c24c) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d9d6) thumb_sp_fs_scroll_pane_g

0xe5b5,	// (0x0001c23a) bg_sp_fs_scroll_pane_g1

0xe5be,	// (0x0001c243) bg_sp_fs_scroll_pane_g2

0xe5c7,	// (0x0001c24c) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x0001d9d6) bg_sp_fs_scroll_pane_g

0x9f72,	// (0x00017bf7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x9f72,	// (0x00017bf7) list_medium_line_x2_t3_g4_g1

0xa006,	// (0x00017c8b) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa006,	// (0x00017c8b) list_medium_line_x2_t3_g4_g2

0x9f7e,	// (0x00017c03) list_medium_line_x2_t3_g4_g3_ParamLimits

0x9f7e,	// (0x00017c03) list_medium_line_x2_t3_g4_g3

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t3_g4_g4_ParamLimits

0x9f8a,	// (0x00017c0f) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0001cf6b) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0001cf6b) list_medium_line_x2_t3_g4_g

0x83d4,	// (0x00016059) list_medium_line_x2_t3_g4_t1_ParamLimits

0x83d4,	// (0x00016059) list_medium_line_x2_t3_g4_t1

0x83ea,	// (0x0001606f) list_medium_line_x2_t3_g4_t2_ParamLimits

0x83ea,	// (0x0001606f) list_medium_line_x2_t3_g4_t2

0x9fab,	// (0x00017c30) list_medium_line_x2_t3_g4_t3_ParamLimits

0x9fab,	// (0x00017c30) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x0001d9dd) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x0001d9dd) list_medium_line_x2_t3_g4_t

0xd3c4,	// (0x0001b049) list_medium_line_g2_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_g2_g1

0xd3d0,	// (0x0001b055) list_medium_line_g2_g2_ParamLimits

0xd3d0,	// (0x0001b055) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0001d6a4) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0001d6a4) list_medium_line_g2_g

0xe5d0,	// (0x0001c255) list_medium_line_g2_t1_ParamLimits

0xe5d0,	// (0x0001c255) list_medium_line_g2_t1

0xd3c4,	// (0x0001b049) list_medium_line_t3_g2_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_t3_g2_g1

0xd3d0,	// (0x0001b055) list_medium_line_t3_g2_g2_ParamLimits

0xd3d0,	// (0x0001b055) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0001d6a4) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0001d6a4) list_medium_line_t3_g2_g

0x8403,	// (0x00016088) list_medium_line_t3_g2_t1_ParamLimits

0x8403,	// (0x00016088) list_medium_line_t3_g2_t1

0x841d,	// (0x000160a2) list_medium_line_t3_g2_t2_ParamLimits

0x841d,	// (0x000160a2) list_medium_line_t3_g2_t2

0x8433,	// (0x000160b8) list_medium_line_t3_g2_t3_ParamLimits

0x8433,	// (0x000160b8) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x0001d9e4) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x0001d9e4) list_medium_line_t3_g2_t

0xe3bc,	// (0x0001c041) list_medium_line_right_icon_g1

0xe5e5,	// (0x0001c26a) list_medium_line_right_icon_t1

0xd3c4,	// (0x0001b049) list_medium_line_t2_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_t2_g1

0x844a,	// (0x000160cf) list_medium_line_t2_t1_ParamLimits

0x844a,	// (0x000160cf) list_medium_line_t2_t1

0x8464,	// (0x000160e9) list_medium_line_t2_t2_ParamLimits

0x8464,	// (0x000160e9) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x0001d9eb) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x0001d9eb) list_medium_line_t2_t

0xd3c4,	// (0x0001b049) list_medium_line_t3_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_t3_g1

0x847d,	// (0x00016102) list_medium_line_t3_t1_ParamLimits

0x847d,	// (0x00016102) list_medium_line_t3_t1

0x8497,	// (0x0001611c) list_medium_line_t3_t2_ParamLimits

0x8497,	// (0x0001611c) list_medium_line_t3_t2

0x84ad,	// (0x00016132) list_medium_line_t3_t3_ParamLimits

0x84ad,	// (0x00016132) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x0001d9f0) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x0001d9f0) list_medium_line_t3_t

0xd3c4,	// (0x0001b049) list_medium_line_g3_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_g3_g1

0xe5f3,	// (0x0001c278) list_medium_line_g3_g2_ParamLimits

0xe5f3,	// (0x0001c278) list_medium_line_g3_g2

0xd3d0,	// (0x0001b055) list_medium_line_g3_g3_ParamLimits

0xd3d0,	// (0x0001b055) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x0001d9f7) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x0001d9f7) list_medium_line_g3_g

0xe5ff,	// (0x0001c284) list_medium_line_g3_t1_ParamLimits

0xe5ff,	// (0x0001c284) list_medium_line_g3_t1

0xd3c4,	// (0x0001b049) list_medium_line_t2_g3_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_t2_g3_g1

0xe5f3,	// (0x0001c278) list_medium_line_t2_g3_g2_ParamLimits

0xe5f3,	// (0x0001c278) list_medium_line_t2_g3_g2

0xd3d0,	// (0x0001b055) list_medium_line_t2_g3_g3_ParamLimits

0xd3d0,	// (0x0001b055) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x0001d9f7) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x0001d9f7) list_medium_line_t2_g3_g

0x84c2,	// (0x00016147) list_medium_line_t2_g3_t1_ParamLimits

0x84c2,	// (0x00016147) list_medium_line_t2_g3_t1

0x84d9,	// (0x0001615e) list_medium_line_t2_g3_t2_ParamLimits

0x84d9,	// (0x0001615e) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x0001d9fe) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x0001d9fe) list_medium_line_t2_g3_t

0xd3c4,	// (0x0001b049) list_medium_line_t3_g3_g1_ParamLimits

0xd3c4,	// (0x0001b049) list_medium_line_t3_g3_g1

0xe5f3,	// (0x0001c278) list_medium_line_t3_g3_g2_ParamLimits

0xe5f3,	// (0x0001c278) list_medium_line_t3_g3_g2

0xd3d0,	// (0x0001b055) list_medium_line_t3_g3_g3_ParamLimits

0xd3d0,	// (0x0001b055) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x0001d9f7) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x0001d9f7) list_medium_line_t3_g3_g

0x84f2,	// (0x00016177) list_medium_line_t3_g3_t1_ParamLimits

0x84f2,	// (0x00016177) list_medium_line_t3_g3_t1

0x850b,	// (0x00016190) list_medium_line_t3_g3_t2_ParamLimits

0x850b,	// (0x00016190) list_medium_line_t3_g3_t2

0x8521,	// (0x000161a6) list_medium_line_t3_g3_t3_ParamLimits

0x8521,	// (0x000161a6) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x0001da03) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x0001da03) list_medium_line_t3_g3_t

0xe4da,	// (0x0001c15f) list_medium_line_right_iconx2_g1

0xe3bc,	// (0x0001c041) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001da0a) list_medium_line_right_iconx2_g

0xe614,	// (0x0001c299) list_medium_line_right_iconx2_t1

0xe4da,	// (0x0001c15f) list_medium_line_t2_right_iconx2_g1

0xe3bc,	// (0x0001c041) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x0001da0a) list_medium_line_t2_right_iconx2_g

0x853b,	// (0x000161c0) list_medium_line_t2_right_iconx2_t1

0x854b,	// (0x000161d0) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x0001da0f) list_medium_line_t2_right_iconx2_t

0xe622,	// (0x0001c2a7) list_medium_line_x4_t4_t1

0x855d,	// (0x000161e2) list_medium_line_x4_t4_t2

0x856d,	// (0x000161f2) list_medium_line_x4_t4_t3

0x857d,	// (0x00016202) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x0001da14) list_medium_line_x4_t4_t

0x85c7,	// (0x0001624c) tport_appsw_pane_ParamLimits

0x85c7,	// (0x0001624c) tport_appsw_pane

0x85da,	// (0x0001625f) tport_contact_pane_ParamLimits

0x85da,	// (0x0001625f) tport_contact_pane

0x85ed,	// (0x00016272) tport_listscroll_pane_ParamLimits

0x85ed,	// (0x00016272) tport_listscroll_pane

0x8603,	// (0x00016288) cell_tport_appsw_pane_ParamLimits

0x8603,	// (0x00016288) cell_tport_appsw_pane

0xd0c4,	// (0x0001ad49) tport_appsw_pane_g1_ParamLimits

0xd0c4,	// (0x0001ad49) tport_appsw_pane_g1

0xe630,	// (0x0001c2b5) tport_contact_pane_g1

0xe639,	// (0x0001c2be) tport_contact_pane_t1

0xe647,	// (0x0001c2cc) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x0001da1d) tport_contact_pane_t

0xe655,	// (0x0001c2da) list_tport_pane

0xe65e,	// (0x0001c2e3) scroll_pane_cp_030

0x8649,	// (0x000162ce) cell_tport_appsw_pane_g1

0xe677,	// (0x0001c2fc) cell_tport_appsw_pane_t1

0x9499,	// (0x0001711e) grid_highlight_pane_cp019

0x8659,	// (0x000162de) list_tport_double_graphic_pane_ParamLimits

0x8659,	// (0x000162de) list_tport_double_graphic_pane

0x950a,	// (0x0001718f) list_highlight_pane_cp023_ParamLimits

0x950a,	// (0x0001718f) list_highlight_pane_cp023

0x8669,	// (0x000162ee) list_tport_double_graphic_pane_g1_ParamLimits

0x8669,	// (0x000162ee) list_tport_double_graphic_pane_g1

0x8676,	// (0x000162fb) list_tport_double_graphic_pane_t1_ParamLimits

0x8676,	// (0x000162fb) list_tport_double_graphic_pane_t1

0x868b,	// (0x00016310) list_tport_double_graphic_pane_t2_ParamLimits

0x868b,	// (0x00016310) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x0001da29) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x0001da29) list_tport_double_graphic_pane_t

0x9499,	// (0x0001711e) main_cale_note_pane

0x624d,	// (0x00013ed2) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x624d,	// (0x00013ed2) cell_vitu2_function_top_wide_pane_cp01

0x7c1e,	// (0x000158a3) wait_bar_pane_cp05_ParamLimits

0x9499,	// (0x0001711e) listscroll_cmail_pane

0xe68d,	// (0x0001c312) list_cmail_pane

0x86a7,	// (0x0001632c) list_cmail_body_pane

0x86bf,	// (0x00016344) list_single_cmail_header_caption_pane

0x86dc,	// (0x00016361) list_single_cmail_header_detail_pane_ParamLimits

0x86dc,	// (0x00016361) list_single_cmail_header_detail_pane

0x870e,	// (0x00016393) list_single_cmail_header_caption_pane_t1

0x871e,	// (0x000163a3) list_single_cmail_header_detail_pane_g1_ParamLimits

0x871e,	// (0x000163a3) list_single_cmail_header_detail_pane_g1

0xe6ad,	// (0x0001c332) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe6ad,	// (0x0001c332) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x0001da2e) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x0001da2e) list_single_cmail_header_detail_pane_g

0xe6c6,	// (0x0001c34b) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe6c6,	// (0x0001c34b) list_single_cmail_header_detail_pane_t1

0xe704,	// (0x0001c389) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe704,	// (0x0001c389) list_single_cmail_header_editor_pane_bg

0xe064,	// (0x0001bce9) list_cmail_body_pane_g1

0xe716,	// (0x0001c39b) list_cmail_body_pane_t1

0xd101,	// (0x0001ad86) list_single_cmail_header_editor_pane_bg_g1

0xa229,	// (0x00017eae) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd111,	// (0x0001ad96) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd109,	// (0x0001ad8e) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd39c,	// (0x0001b021) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd131,	// (0x0001adb6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd121,	// (0x0001ada6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd129,	// (0x0001adae) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa209,	// (0x00017e8e) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x875c,	// (0x000163e1) calenote_gesture_pane_ParamLimits

0x875c,	// (0x000163e1) calenote_gesture_pane

0x877c,	// (0x00016401) calenote_window_pane_ParamLimits

0x877c,	// (0x00016401) calenote_window_pane

0xe724,	// (0x0001c3a9) popup_note_window_cp01

0x8798,	// (0x0001641d) calenote_swipe_1_pane_ParamLimits

0x8798,	// (0x0001641d) calenote_swipe_1_pane

0x814e,	// (0x00015dd3) calenote_swipe_2_pane_ParamLimits

0x814e,	// (0x00015dd3) calenote_swipe_2_pane

0xe2bb,	// (0x0001bf40) calenote_swipe_1_pane_g1_ParamLimits

0xe2bb,	// (0x0001bf40) calenote_swipe_1_pane_g1

0xe2c8,	// (0x0001bf4d) calenote_swipe_1_pane_g2_ParamLimits

0xe2c8,	// (0x0001bf4d) calenote_swipe_1_pane_g2

0x0001,

0xfcdd,	// (0x0001d962) calenote_swipe_1_pane_g_ParamLimits

0xfcdd,	// (0x0001d962) calenote_swipe_1_pane_g

0xe736,	// (0x0001c3bb) calenote_swipe_1_pane_t1_ParamLimits

0xe736,	// (0x0001c3bb) calenote_swipe_1_pane_t1

0xe2bb,	// (0x0001bf40) calenote_swipe_2_pane_g1_ParamLimits

0xe2bb,	// (0x0001bf40) calenote_swipe_2_pane_g1

0xe755,	// (0x0001c3da) calenote_swipe_2_pane_g2_ParamLimits

0xe755,	// (0x0001c3da) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x0001da3a) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x0001da3a) calenote_swipe_2_pane_g

0xe761,	// (0x0001c3e6) calenote_swipe_2_pane_t1_ParamLimits

0xe761,	// (0x0001c3e6) calenote_swipe_2_pane_t1

0x9499,	// (0x0001711e) main_mup_navstr_pane

0x4ede,	// (0x00012b63) main_mup3_pane_t7_ParamLimits

0x4ede,	// (0x00012b63) main_mup3_pane_t7

0xccb4,	// (0x0001a939) main_mp4_pane_g6_ParamLimits

0xccb4,	// (0x0001a939) main_mp4_pane_g6

0xcef7,	// (0x0001ab7c) main_image3_pane_t4_ParamLimits

0xcef7,	// (0x0001ab7c) main_image3_pane_t4

0x87ad,	// (0x00016432) popup_navstr_preview_pane_ParamLimits

0x87ad,	// (0x00016432) popup_navstr_preview_pane

0x87bd,	// (0x00016442) scroll_navstr_pane_ParamLimits

0x87bd,	// (0x00016442) scroll_navstr_pane

0x9499,	// (0x0001711e) bg_popup_preview_window_pane_cp04

0xe788,	// (0x0001c40d) popup_navstr_preview_pane_t1

0x87d1,	// (0x00016456) scroll_navstr_pane_g1_ParamLimits

0x87d1,	// (0x00016456) scroll_navstr_pane_g1

0x87e5,	// (0x0001646a) scroll_navstr_pane_t1_ParamLimits

0x87e5,	// (0x0001646a) scroll_navstr_pane_t1

0xe72d,	// (0x0001c3b2) bg_button_pane_cp014

0xe72d,	// (0x0001c3b2) bg_button_pane_cp030

0xe25c,	// (0x0001bee1) list_double_fisheye_pane_g4_ParamLimits

0xe25c,	// (0x0001bee1) list_double_fisheye_pane_g4

0xe268,	// (0x0001beed) list_double_fisheye_pane_g5_ParamLimits

0xe268,	// (0x0001beed) list_double_fisheye_pane_g5

0xe695,	// (0x0001c31a) sp_fs_scroll_pane_cp03

0xe3fe,	// (0x0001c083) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe40a,	// (0x0001c08f) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcfa,	// (0x0001d97f) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe416,	// (0x0001c09b) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x869d,	// (0x00016322) sp_fs_scroll_pane_cp02

0x9e0d,	// (0x00017a92) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x9e0d,	// (0x00017a92) popup_sp_fs_calendar_preview_list_single_pane

0x9499,	// (0x0001711e) main_cam6_pano_pane

0x950a,	// (0x0001718f) main_mup3_pane_ParamLimits

0x9499,	// (0x0001711e) main_phacti_pane

0x7aef,	// (0x00015774) bg_button_pane_cp11

0x7b09,	// (0x0001578e) main_mobtv_info_pane_g2_ParamLimits

0x7b09,	// (0x0001578e) main_mobtv_info_pane_g2

0x0001,

0xfc5a,	// (0x0001d8df) main_mobtv_info_pane_g_ParamLimits

0xfc5a,	// (0x0001d8df) main_mobtv_info_pane_g

0x7ce6,	// (0x0001596b) sc_clock_pane_t5_ParamLimits

0x7ce6,	// (0x0001596b) sc_clock_pane_t5

0x7e9b,	// (0x00015b20) main_radioblah_pane_g1_ParamLimits

0xe1ca,	// (0x0001be4f) main_radioblah_pane_t3_ParamLimits

0xe1ca,	// (0x0001be4f) main_radioblah_pane_t3

0xe1e2,	// (0x0001be67) main_radioblah_pane_t4_ParamLimits

0xe1e2,	// (0x0001be67) main_radioblah_pane_t4

0x7ec3,	// (0x00015b48) main_radioblah_text_pane_ParamLimits

0x7ec3,	// (0x00015b48) main_radioblah_text_pane

0x7ed5,	// (0x00015b5a) main_radioblah_info_pane_g1_ParamLimits

0x7f6e,	// (0x00015bf3) main_radioblah_info_pane_t4_ParamLimits

0x7f6e,	// (0x00015bf3) main_radioblah_info_pane_t4

0x950a,	// (0x0001718f) main_sp_fs_calendar_pane

0x87fc,	// (0x00016481) main_phacti_pane_g1

0x8804,	// (0x00016489) phacti_note_pane_ParamLimits

0x8804,	// (0x00016489) phacti_note_pane

0xe79f,	// (0x0001c424) phacti_term_pane_ParamLimits

0xe79f,	// (0x0001c424) phacti_term_pane

0xe7b4,	// (0x0001c439) phacti_note_pane_t1_ParamLimits

0xe7b4,	// (0x0001c439) phacti_note_pane_t1

0xe7cb,	// (0x0001c450) phacti_term_pane_g1

0xe7d3,	// (0x0001c458) phacti_term_pane_t1_ParamLimits

0xe7d3,	// (0x0001c458) phacti_term_pane_t1

0xe7fd,	// (0x0001c482) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe805,	// (0x0001c48a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x0001da44) popup_sp_fs_calendar_preview_list_single_pane_g

0xe80d,	// (0x0001c492) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe80d,	// (0x0001c492) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe823,	// (0x0001c4a8) aid_popup_sp_fs_bg_corner_pane

0xc351,	// (0x00019fd6) popup_sp_fs_calendar_preview_bg_pane_g1

0x9499,	// (0x0001711e) popup_sp_fs_calendar_preview_bg_pane

0xe82b,	// (0x0001c4b0) popup_sp_fs_calendar_preview_list_pane

0x950a,	// (0x0001718f) bg_main_sp_fs_cale_pane_ParamLimits

0x950a,	// (0x0001718f) bg_main_sp_fs_cale_pane

0xe83c,	// (0x0001c4c1) listscroll_cale_mrui_pane_ParamLimits

0xe83c,	// (0x0001c4c1) listscroll_cale_mrui_pane

0xe850,	// (0x0001c4d5) listscroll_sp_fs_schedule_track_pane

0xe859,	// (0x0001c4de) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe859,	// (0x0001c4de) main_sp_fs_ctrlbar_pane_cp01

0xe86a,	// (0x0001c4ef) main_sp_fs_ribbon_pane

0xe872,	// (0x0001c4f7) popup_sp_fs_cale_preview_window

0x885b,	// (0x000164e0) list_single_sp_fs_schedule_track_pane_ParamLimits

0x885b,	// (0x000164e0) list_single_sp_fs_schedule_track_pane

0x950a,	// (0x0001718f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x950a,	// (0x0001718f) bg_sp_fs_highlight_list_pane_cp03

0x886e,	// (0x000164f3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x886e,	// (0x000164f3) list_single_sp_fs_schedule_track_pane_g1

0x887a,	// (0x000164ff) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x887a,	// (0x000164ff) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x0001da49) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x0001da49) list_single_sp_fs_schedule_track_pane_g

0x8886,	// (0x0001650b) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8886,	// (0x0001650b) list_single_sp_fs_schedule_track_pane_t1

0x88a8,	// (0x0001652d) sp_fs_schedule_track_pane_ParamLimits

0x88a8,	// (0x0001652d) sp_fs_schedule_track_pane

0xe884,	// (0x0001c509) sp_fs_schedule_track_pane_g1

0xe88c,	// (0x0001c511) sp_fs_schedule_track_pane_g2

0xe894,	// (0x0001c519) sp_fs_schedule_track_pane_g3

0xe89c,	// (0x0001c521) sp_fs_schedule_track_pane_g4

0xe8a4,	// (0x0001c529) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x0001da4e) sp_fs_schedule_track_pane_g

0xd101,	// (0x0001ad86) bg_sp_fs_schedule_viewer_highlight_g1

0xa229,	// (0x00017eae) bg_sp_fs_schedule_viewer_highlight_g2

0xd109,	// (0x0001ad8e) bg_sp_fs_schedule_viewer_highlight_g3

0xd111,	// (0x0001ad96) bg_sp_fs_schedule_viewer_highlight_g4

0xd39c,	// (0x0001b021) bg_sp_fs_schedule_viewer_highlight_g5

0xd121,	// (0x0001ada6) bg_sp_fs_schedule_viewer_highlight_g6

0xd129,	// (0x0001adae) bg_sp_fs_schedule_viewer_highlight_g7

0xd131,	// (0x0001adb6) bg_sp_fs_schedule_viewer_highlight_g8

0xa209,	// (0x00017e8e) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x0001da59) bg_sp_fs_schedule_viewer_highlight_g

0x9499,	// (0x0001711e) bg_main_sp_fs_ribbon_pane

0x88bd,	// (0x00016542) main_sp_fs_ribbon_pane_g1

0xe8ac,	// (0x0001c531) main_sp_fs_ribbon_pane_t1

0x88c6,	// (0x0001654b) main_sp_fs_ribbon_pane_t2

0xe8bb,	// (0x0001c540) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x0001da6c) main_sp_fs_ribbon_pane_t

0xe8ca,	// (0x0001c54f) main_sp_fs_ribbon_scheduler_pane

0xe8d2,	// (0x0001c557) bg_main_sp_fs_ribbon_pane_g1

0xe8db,	// (0x0001c560) bg_main_sp_fs_ribbon_pane_g2

0xe8e4,	// (0x0001c569) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x0001da73) bg_main_sp_fs_ribbon_pane_g

0xe8ec,	// (0x0001c571) main_sp_fs_ribbon_scheduler_pane_g1

0xe8f5,	// (0x0001c57a) main_sp_fs_ribbon_scheduler_pane_g2

0xe8fe,	// (0x0001c583) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x0001da7a) main_sp_fs_ribbon_scheduler_pane_g

0xe907,	// (0x0001c58c) list_cale_mrui_pane

0x88d5,	// (0x0001655a) sp_fs_scroll_pane_cp07_ParamLimits

0x88d5,	// (0x0001655a) sp_fs_scroll_pane_cp07

0x88eb,	// (0x00016570) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x88eb,	// (0x00016570) bg_sp_fs_schedule_viewer_highlight

0xe910,	// (0x0001c595) list_single_sp_fs_schedule_track_pane_cp01

0xe918,	// (0x0001c59d) list_sp_fs_schedule_track_pane

0xe920,	// (0x0001c5a5) sp_fs_scroll_pane_cp06_ParamLimits

0xe920,	// (0x0001c5a5) sp_fs_scroll_pane_cp06

0xc351,	// (0x00019fd6) bgmain_sp_fs_calendar_pane_g1

0x88fd,	// (0x00016582) list_single_cale_mrui_pane_ParamLimits

0x88fd,	// (0x00016582) list_single_cale_mrui_pane

0xe932,	// (0x0001c5b7) list_single_cale_mrui_row_pane_ParamLimits

0xe932,	// (0x0001c5b7) list_single_cale_mrui_row_pane

0xe93f,	// (0x0001c5c4) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe93f,	// (0x0001c5c4) list_single_cale_mrui_row_pane_g1

0xe977,	// (0x0001c5fc) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe977,	// (0x0001c5fc) list_single_cale_mrui_row_pane_t1

0x8924,	// (0x000165a9) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8924,	// (0x000165a9) list_single_cale_mrui_row_pane_t2

0xe989,	// (0x0001c60e) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe989,	// (0x0001c60e) list_single_cale_mrui_row_pane_t3

0xe9b8,	// (0x0001c63d) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe9b8,	// (0x0001c63d) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe01,	// (0x0001da86) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe01,	// (0x0001da86) list_single_cale_mrui_row_pane_t

0x898a,	// (0x0001660f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x898a,	// (0x0001660f) list_single_cmail_header_editor_pane_bg_cp01

0x89ae,	// (0x00016633) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x89ae,	// (0x00016633) list_single_cmail_header_editor_pane_bg_cp02

0x89cc,	// (0x00016651) main_radioblah_text_pane_t1_ParamLimits

0x89cc,	// (0x00016651) main_radioblah_text_pane_t1

0xe9e7,	// (0x0001c66c) cam6_indi_pane_cp01

0xe9ef,	// (0x0001c674) cam6_mode_pane_cp01

0xe9f7,	// (0x0001c67c) cam6_pano_pane

0xea00,	// (0x0001c685) cam6_zoom_pane_cp01

0xea0a,	// (0x0001c68f) cam6_pano_image_pane

0xea13,	// (0x0001c698) cam6_pano_pane_g1

0xe064,	// (0x0001bce9) cam6_pano_pane_g2

0xea1c,	// (0x0001c6a1) cam6_pano_pane_g3

0xea25,	// (0x0001c6aa) cam6_pano_pane_g4

0xc931,	// (0x0001a5b6) cam6_pano_pane_g5

0xea2e,	// (0x0001c6b3) cam6_pano_pane_g6

0xea36,	// (0x0001c6bb) cam6_pano_pane_g7

0xea3e,	// (0x0001c6c3) cam6_pano_pane_g8

0xea47,	// (0x0001c6cc) cam6_pano_pane_g9

0x0008,

0xfe0a,	// (0x0001da8f) cam6_pano_pane_g

0x9499,	// (0x0001711e) main_browser_tag_pane

0xe780,	// (0x0001c405) grid_navstr_albumart_pane

0xea52,	// (0x0001c6d7) cell_navstr_albumart_pane_ParamLimits

0xea52,	// (0x0001c6d7) cell_navstr_albumart_pane

0xea6e,	// (0x0001c6f3) cell_navstr_albumart_pane_g1

0xbc35,	// (0x000198ba) cell_navstr_albumart_pane_g2

0xbc45,	// (0x000198ca) cell_navstr_albumart_pane_g3

0xbc3d,	// (0x000198c2) cell_navstr_albumart_pane_g4

0x0003,

0xfe1d,	// (0x0001daa2) cell_navstr_albumart_pane_g

0x89e7,	// (0x0001666c) bt_list_pane_ParamLimits

0x89e7,	// (0x0001666c) bt_list_pane

0x89fd,	// (0x00016682) bt_list_pane_t1

0x8a0c,	// (0x00016691) bt_list_pane_t2

0x0001,

0xfe26,	// (0x0001daab) bt_list_pane_t

0x9499,	// (0x0001711e) main_cale_prevew_pane

0x8a1b,	// (0x000166a0) popup_cale_preview_window_ParamLimits

0x8a1b,	// (0x000166a0) popup_cale_preview_window

0x950a,	// (0x0001718f) bg_popup_preview_window_pane_cp05_ParamLimits

0x950a,	// (0x0001718f) bg_popup_preview_window_pane_cp05

0xea76,	// (0x0001c6fb) list_cale_preview_pane_ParamLimits

0xea76,	// (0x0001c6fb) list_cale_preview_pane

0x8a36,	// (0x000166bb) list_double_cale_preview_pane_ParamLimits

0x8a36,	// (0x000166bb) list_double_cale_preview_pane

0x8a4a,	// (0x000166cf) list_single_cale_preview_pane_ParamLimits

0x8a4a,	// (0x000166cf) list_single_cale_preview_pane

0x8a62,	// (0x000166e7) list_single_cale_preview_pane_g1

0x8a6a,	// (0x000166ef) list_single_cale_preview_pane_t1_ParamLimits

0x8a6a,	// (0x000166ef) list_single_cale_preview_pane_t1

0x8a7f,	// (0x00016704) list_double_cale_preview_pane_g1

0x8a87,	// (0x0001670c) list_double_cale_preview_pane_t1_ParamLimits

0x8a87,	// (0x0001670c) list_double_cale_preview_pane_t1

0x8a9c,	// (0x00016721) list_double_cale_preview_pane_t2_ParamLimits

0x8a9c,	// (0x00016721) list_double_cale_preview_pane_t2

0x0001,

0xfe2b,	// (0x0001dab0) list_double_cale_preview_pane_t_ParamLimits

0xfe2b,	// (0x0001dab0) list_double_cale_preview_pane_t

0x9499,	// (0x0001711e) main_ezdial_pane

0x950a,	// (0x0001718f) main_sp_fs_email_pane_ParamLimits

0x818a,	// (0x00015e0f) cmail_ddmenu_btn01_pane_ParamLimits

0x818a,	// (0x00015e0f) cmail_ddmenu_btn01_pane

0x819d,	// (0x00015e22) cmail_ddmenu_btn02_pane_ParamLimits

0x819d,	// (0x00015e22) cmail_ddmenu_btn02_pane

0x81c0,	// (0x00015e45) cmail_ddmenu_btn03_pane_ParamLimits

0x81c0,	// (0x00015e45) cmail_ddmenu_btn03_pane

0x81e6,	// (0x00015e6b) main_sp_fs_ctrlbar_pane_ParamLimits

0x820a,	// (0x00015e8f) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x86a7,	// (0x0001632c) list_cmail_body_pane_ParamLimits

0xe6a4,	// (0x0001c329) bg_button_pane_cp12

0xe6b9,	// (0x0001c33e) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe6b9,	// (0x0001c33e) list_single_cmail_header_detail_pane_g3

0x8736,	// (0x000163bb) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8736,	// (0x000163bb) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x0001da35) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x0001da35) list_single_cmail_header_detail_pane_t

0xe7e8,	// (0x0001c46d) phacti_term_pane_t2_ParamLimits

0xe7e8,	// (0x0001c46d) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x0001da3f) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x0001da3f) phacti_term_pane_t

0xea82,	// (0x0001c707) aid_size_list_single_double

0x8ab4,	// (0x00016739) popup_ezdial_listscroll_window

0x8ad0,	// (0x00016755) popup_number_entry_window_cp01

0xa9af,	// (0x00018634) bg_popup_call_pane_cp09

0xea8e,	// (0x0001c713) ezdial_list_pane

0xea96,	// (0x0001c71b) scroll_pane_cp23

0xbe1c,	// (0x00019aa1) bg_button_pane_cp028_ParamLimits

0xbe1c,	// (0x00019aa1) bg_button_pane_cp028

0x8ade,	// (0x00016763) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8ade,	// (0x00016763) cmail_ddmenu_btn01_pane_g1

0x8aea,	// (0x0001676f) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8aea,	// (0x0001676f) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe30,	// (0x0001dab5) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe30,	// (0x0001dab5) cmail_ddmenu_btn01_pane_g

0xea9e,	// (0x0001c723) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea9e,	// (0x0001c723) cmail_ddmenu_btn01_pane_t1

0xbe1c,	// (0x00019aa1) bg_button_pane_cp029_ParamLimits

0xbe1c,	// (0x00019aa1) bg_button_pane_cp029

0x8af6,	// (0x0001677b) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8af6,	// (0x0001677b) cmail_ddmenu_btn02_pane_g1

0x8b0e,	// (0x00016793) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8b0e,	// (0x00016793) cmail_ddmenu_btn02_pane_t1

0x950a,	// (0x0001718f) bg_button_pane_cp031_ParamLimits

0x950a,	// (0x0001718f) bg_button_pane_cp031

0x8af6,	// (0x0001677b) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8af6,	// (0x0001677b) cmail_ddmenu_btn03_pane_g1

0x8b0e,	// (0x00016793) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8b0e,	// (0x00016793) cmail_ddmenu_btn03_pane_t1

0x5a99,	// (0x0001371e) cell_dialer2_keypad_pane_t1_ParamLimits

0x5ab3,	// (0x00013738) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5ab3,	// (0x00013738) cell_dialer2_keypad_pane_t1_copy1

0x796f,	// (0x000155f4) ncimui_group_button_pane

0x950a,	// (0x0001718f) main_sp_fs_calendar_pane_ParamLimits

0x86bf,	// (0x00016344) list_single_cmail_header_caption_pane_ParamLimits

0xe833,	// (0x0001c4b8) aid_recal_txt_sm_pane

0x9499,	// (0x0001711e) mian_recal_day_pane

0xe872,	// (0x0001c4f7) popup_sp_fs_cale_preview_window_ParamLimits

0x9499,	// (0x0001711e) list_recal_day_pane

0xead5,	// (0x0001c75a) list_single_recal_day_pane_ParamLimits

0xead5,	// (0x0001c75a) list_single_recal_day_pane

0xeae7,	// (0x0001c76c) list_single_recal_day_pane_g1_ParamLimits

0xeae7,	// (0x0001c76c) list_single_recal_day_pane_g1

0xeaf3,	// (0x0001c778) list_single_recal_day_pane_g2_ParamLimits

0xeaf3,	// (0x0001c778) list_single_recal_day_pane_g2

0xeaff,	// (0x0001c784) list_single_recal_day_pane_g3_ParamLimits

0xeaff,	// (0x0001c784) list_single_recal_day_pane_g3

0x8b32,	// (0x000167b7) list_single_recal_day_pane_g4_ParamLimits

0x8b32,	// (0x000167b7) list_single_recal_day_pane_g4

0xeb0b,	// (0x0001c790) list_single_recal_day_pane_g5_ParamLimits

0xeb0b,	// (0x0001c790) list_single_recal_day_pane_g5

0xeb17,	// (0x0001c79c) list_single_recal_day_pane_g6_ParamLimits

0xeb17,	// (0x0001c79c) list_single_recal_day_pane_g6

0x0005,

0xfe3f,	// (0x0001dac4) list_single_recal_day_pane_g_ParamLimits

0xfe3f,	// (0x0001dac4) list_single_recal_day_pane_g

0xeb23,	// (0x0001c7a8) list_single_recal_day_pane_t1

0xeb31,	// (0x0001c7b6) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x0001dad1) list_single_recal_day_pane_t

0x8b40,	// (0x000167c5) ncimui_query_button_pane_ParamLimits

0x8b40,	// (0x000167c5) ncimui_query_button_pane

0x8b50,	// (0x000167d5) ncimui_query_button_pane_t1_ParamLimits

0x8b50,	// (0x000167d5) ncimui_query_button_pane_t1

0xeb3f,	// (0x0001c7c4) ncimui_query_button_pane_t2_ParamLimits

0xeb3f,	// (0x0001c7c4) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x0001dad6) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x0001dad6) ncimui_query_button_pane_t

0x8b63,	// (0x000167e8) query_button_pane_ParamLimits

0x8b63,	// (0x000167e8) query_button_pane

0x9499,	// (0x0001711e) bg_button_pane_cp0028

0xeb52,	// (0x0001c7d7) query_button_pane_t1

0x3b33,	// (0x000117b8) main_tport_pane_ParamLimits

0x858d,	// (0x00016212) bg_popup_window_pane_cp01_ParamLimits

0x858d,	// (0x00016212) bg_popup_window_pane_cp01

0x85a3,	// (0x00016228) heading_pane_cp08_ParamLimits

0x85a3,	// (0x00016228) heading_pane_cp08

0x85b4,	// (0x00016239) heading_pane_cp07_ParamLimits

0x85b4,	// (0x00016239) heading_pane_cp07

0xe66f,	// (0x0001c2f4) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x0001da22) cell_tport_appsw_pane_g

0x307e,	// (0x00010d03) input_candi_list_open_g1

0xa41c,	// (0x000180a1) list_cale_time_pane_g6_ParamLimits

0xa41c,	// (0x000180a1) list_cale_time_pane_g6

0x4921,	// (0x000125a6) aid_size_touch_calib_1_ParamLimits

0x4921,	// (0x000125a6) aid_size_touch_calib_1

0x492d,	// (0x000125b2) aid_size_touch_calib_2_ParamLimits

0x492d,	// (0x000125b2) aid_size_touch_calib_2

0x4943,	// (0x000125c8) aid_size_touch_calib_3_ParamLimits

0x4943,	// (0x000125c8) aid_size_touch_calib_3

0x4961,	// (0x000125e6) aid_size_touch_calib_4_ParamLimits

0x4961,	// (0x000125e6) aid_size_touch_calib_4

0x4977,	// (0x000125fc) main_touch_calib_button_group_pane_ParamLimits

0x4977,	// (0x000125fc) main_touch_calib_button_group_pane

0x498f,	// (0x00012614) main_touch_calib_pane_g1_ParamLimits

0x499b,	// (0x00012620) main_touch_calib_pane_g2_ParamLimits

0x49a7,	// (0x0001262c) main_touch_calib_pane_g3_ParamLimits

0x49b3,	// (0x00012638) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0001d3fa) main_touch_calib_pane_g_ParamLimits

0x49bf,	// (0x00012644) main_touch_calib_pane_t1_ParamLimits

0x49d9,	// (0x0001265e) main_touch_calib_pane_t2_ParamLimits

0x49f3,	// (0x00012678) main_touch_calib_pane_t3_ParamLimits

0x4a07,	// (0x0001268c) main_touch_calib_pane_t4_ParamLimits

0x4a1b,	// (0x000126a0) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0001d403) main_touch_calib_pane_t_ParamLimits

0xc6fb,	// (0x0001a380) list_single_fp_cale_pane_g3_ParamLimits

0xc6fb,	// (0x0001a380) list_single_fp_cale_pane_g3

0x950a,	// (0x0001718f) bg_button_pane_cp012_ParamLimits

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp03_ParamLimits

0x6b67,	// (0x000147ec) cell_vitu2_function_top_pane_g1_ParamLimits

0x950a,	// (0x0001718f) bg_vkb2_func_pane_cp04_ParamLimits

0x790f,	// (0x00015594) main_ncimui_button_group_pane_ParamLimits

0x790f,	// (0x00015594) main_ncimui_button_group_pane

0x795d,	// (0x000155e2) main_ncimui_pane_t3_ParamLimits

0x795d,	// (0x000155e2) main_ncimui_pane_t3

0xe796,	// (0x0001c41b) phacti_button_group_pane

0xea82,	// (0x0001c707) aid_size_list_single_double_ParamLimits

0x8ab4,	// (0x00016739) popup_ezdial_listscroll_window_ParamLimits

0x8ad0,	// (0x00016755) popup_number_entry_window_cp01_ParamLimits

0x8b76,	// (0x000167fb) phacti_button_pane_ParamLimits

0x8b76,	// (0x000167fb) phacti_button_pane

0x9499,	// (0x0001711e) bg_button_pane_cp14

0xeb60,	// (0x0001c7e5) phacti_button_pane_t1

0x8b87,	// (0x0001680c) main_touch_calib_button_pane_ParamLimits

0x8b87,	// (0x0001680c) main_touch_calib_button_pane

0x9c73,	// (0x000178f8) bg_button_pane_cp18_ParamLimits

0x9c73,	// (0x000178f8) bg_button_pane_cp18

0xeb6e,	// (0x0001c7f3) main_touch_calib_button_pane_t1_ParamLimits

0xeb6e,	// (0x0001c7f3) main_touch_calib_button_pane_t1

0xeb84,	// (0x0001c809) main_touch_calib_button_pane_t2_ParamLimits

0xeb84,	// (0x0001c809) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x0001dadb) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x0001dadb) main_touch_calib_button_pane_t

0x9499,	// (0x0001711e) cell_ncimui_button_pane

0x9499,	// (0x0001711e) bg_button_pane_cp032

0xeba2,	// (0x0001c827) cell_ncimui_button_pane_t1

0xced5,	// (0x0001ab5a) image3_infobar_pane_ParamLimits

0xced5,	// (0x0001ab5a) image3_infobar_pane

0x7d12,	// (0x00015997) fs_bigclock_status_pane_ParamLimits

0x7d12,	// (0x00015997) fs_bigclock_status_pane

0x7d1f,	// (0x000159a4) main_fs_bigclock_clock_pane_ParamLimits

0x7d1f,	// (0x000159a4) main_fs_bigclock_clock_pane

0x7d32,	// (0x000159b7) main_fs_bigclock_indi_pane_ParamLimits

0x7d32,	// (0x000159b7) main_fs_bigclock_indi_pane

0x7d50,	// (0x000159d5) main_fs_bigclock_swipe_pane_ParamLimits

0x7d50,	// (0x000159d5) main_fs_bigclock_swipe_pane

0x9499,	// (0x0001711e) main_fs_clock_dumped_data

0x7d71,	// (0x000159f6) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7d71,	// (0x000159f6) list_single_fs_bigclock_indicator_pane_g1

0x7d91,	// (0x00015a16) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7d91,	// (0x00015a16) list_single_fs_bigclock_indicator_pane_g2

0x7dab,	// (0x00015a30) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7dab,	// (0x00015a30) list_single_fs_bigclock_indicator_pane_g3

0x7dc7,	// (0x00015a4c) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x7dc7,	// (0x00015a4c) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc8e,	// (0x0001d913) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc8e,	// (0x0001d913) list_single_fs_bigclock_indicator_pane_g

0x7ded,	// (0x00015a72) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7ded,	// (0x00015a72) list_single_fs_bigclock_indicator_pane_t1

0x7e15,	// (0x00015a9a) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x7e15,	// (0x00015a9a) list_single_fs_bigclock_indicator_pane_t2

0x7e3d,	// (0x00015ac2) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7e3d,	// (0x00015ac2) list_single_fs_bigclock_indicator_pane_t3

0x7e67,	// (0x00015aec) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7e67,	// (0x00015aec) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc99,	// (0x0001d91e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc99,	// (0x0001d91e) list_single_fs_bigclock_indicator_pane_t

0xebb0,	// (0x0001c835) image3_infobar_fav_pane_ParamLimits

0xebb0,	// (0x0001c835) image3_infobar_fav_pane

0xebc0,	// (0x0001c845) image3_infobar_loc_pane_ParamLimits

0xebc0,	// (0x0001c845) image3_infobar_loc_pane

0xebd6,	// (0x0001c85b) image3_infobar_time_pane_ParamLimits

0xebd6,	// (0x0001c85b) image3_infobar_time_pane

0xc351,	// (0x00019fd6) image3_infobar_time_pane_g1

0xebe6,	// (0x0001c86b) image3_infobar_time_pane_t1

0xc351,	// (0x00019fd6) image3_infobar_loc_pane_g1

0xebf4,	// (0x0001c879) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x0001dae0) image3_infobar_loc_pane_g

0xebfc,	// (0x0001c881) image3_infobar_loc_pane_t1

0xc351,	// (0x00019fd6) image3_infobar_fav_pane_g1

0xec0a,	// (0x0001c88f) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x0001dae5) image3_infobar_fav_pane_g

0xec12,	// (0x0001c897) fs_bigclock_status_battery_pane

0xec1b,	// (0x0001c8a0) fs_bigclock_status_signal_pane

0xec24,	// (0x0001c8a9) fs_bigclock_status_title_pane

0xec2d,	// (0x0001c8b2) fs_bigclock_status_signal_pane_g1

0xec36,	// (0x0001c8bb) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x0001daea) fs_bigclock_status_signal_pane_g

0xec3e,	// (0x0001c8c3) fs_bigclock_status_battery_pane_g1

0xec47,	// (0x0001c8cc) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x0001daef) fs_bigclock_status_battery_pane_g

0xec4f,	// (0x0001c8d4) fs_bigclock_status_title_pane_t1

0xc351,	// (0x00019fd6) main_fs_bigclock_clock_pane_g1

0xec5d,	// (0x0001c8e2) main_fs_bigclock_clock_pane_g2

0xec5d,	// (0x0001c8e2) main_fs_bigclock_clock_pane_g3

0xec5d,	// (0x0001c8e2) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x0001daf4) main_fs_bigclock_clock_pane_g

0xec69,	// (0x0001c8ee) main_fs_bigclock_clock_pane_t1

0x8b9c,	// (0x00016821) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x0001dafd) main_fs_bigclock_clock_pane_t

0xec77,	// (0x0001c8fc) list_single_fs_bigclock_indicator_pane_ParamLimits

0xec77,	// (0x0001c8fc) list_single_fs_bigclock_indicator_pane

0x8bab,	// (0x00016830) list_single_fs_bigclock_pane_ParamLimits

0x8bab,	// (0x00016830) list_single_fs_bigclock_pane

0xec91,	// (0x0001c916) main_fs_bigclock_indicator_pane_t1

0xeca0,	// (0x0001c925) list_single_fs_bigclock_pane_g1

0xeca8,	// (0x0001c92d) list_single_fs_bigclock_pane_t1

0xc351,	// (0x00019fd6) main_fs_bigclock_swipe_pane_g1

0xece8,	// (0x0001c96d) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x0001db0e) main_fs_bigclock_swipe_pane_g

0xecf0,	// (0x0001c975) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xecf0,	// (0x0001c975) main_fs_bigclock_swipe_pane_t1

0x2802,	// (0x00010487) call_type_pane_ParamLimits

0x9499,	// (0x0001711e) main_btmg_pane

0xe96b,	// (0x0001c5f0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe96b,	// (0x0001c5f0) list_single_cale_mrui_row_pane_g2

0x0001,

0xfdfc,	// (0x0001da81) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x0001da81) list_single_cale_mrui_row_pane_g

0xeabc,	// (0x0001c741) list_recal_vselct_arw_lo_pane

0xeac4,	// (0x0001c749) list_recal_vselct_arw_up_pane

0xeacc,	// (0x0001c751) list_recal_vselct_pane

0xed0d,	// (0x0001c992) btmg_button_pane

0x8c12,	// (0x00016897) main_btmg_pane_g1

0x9499,	// (0x0001711e) bg_button_pane_cp044

0xed17,	// (0x0001c99c) btmg_button_pane_t1

0xbe14,	// (0x00019a99) aid_listscroll_gen

0x950a,	// (0x0001718f) main_cntbar_detail_pane

0xe685,	// (0x0001c30a) list_cmail_folder_pane

0xe695,	// (0x0001c31a) sp_fs_scroll_pane_cp03_ParamLimits

0x8c1c,	// (0x000168a1) list_single_fs_dyc_pane_cp01_ParamLimits

0x8c1c,	// (0x000168a1) list_single_fs_dyc_pane_cp01

0xed25,	// (0x0001c9aa) aid_size_cmail_indent

0xed2e,	// (0x0001c9b3) list_single_dyc_row_pane_cp01

0x8c69,	// (0x000168ee) cntbar_detail_list_pane_ParamLimits

0x8c69,	// (0x000168ee) cntbar_detail_list_pane

0x8cbb,	// (0x00016940) main_cntbar_detail_cont_pane_ParamLimits

0x8cbb,	// (0x00016940) main_cntbar_detail_cont_pane

0x279c,	// (0x00010421) scroll_pane_cp032_ParamLimits

0x279c,	// (0x00010421) scroll_pane_cp032

0x8ccf,	// (0x00016954) cntbar_detail_list_event_pane_ParamLimits

0x8ccf,	// (0x00016954) cntbar_detail_list_event_pane

0x8c7b,	// (0x00016900) cntbar_detail_list_shct_pane

0xa277,	// (0x00017efc) aid_list_gen

0xed65,	// (0x0001c9ea) aid_scroll

0xed6e,	// (0x0001c9f3) aid_size_touch_scroll_bar

0xed77,	// (0x0001c9fc) aid_list_double

0xed80,	// (0x0001ca05) aid_list_single

0x8cdf,	// (0x00016964) aid_list_single_lg

0xed89,	// (0x0001ca0e) aid_list_z_g_a_sm

0xed91,	// (0x0001ca16) aid_list_z_g_d

0xed99,	// (0x0001ca1e) aid_txt_z_prm

0xeda7,	// (0x0001ca2c) aid_txt_z_prm_cp01

0xedb5,	// (0x0001ca3a) aid_txt_z_sec

0x8ce8,	// (0x0001696d) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8ce8,	// (0x0001696d) main_cntbar_detail_cont_pane_g1

0x8cfc,	// (0x00016981) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8cfc,	// (0x00016981) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x0001db13) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x0001db13) main_cntbar_detail_cont_pane_g

0xedc3,	// (0x0001ca48) main_cntbar_detail_cont_pane_t1

0xedd1,	// (0x0001ca56) main_cntbar_detail_cont_pane_t2

0xeddf,	// (0x0001ca64) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x0001db18) main_cntbar_detail_cont_pane_t

0x8d0c,	// (0x00016991) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8d0c,	// (0x00016991) cell_cntbar_detail_list_shct_pane

0xeded,	// (0x0001ca72) cntbar_detail_list_shct_pane_g1

0xedf6,	// (0x0001ca7b) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x0001db1f) cntbar_detail_list_shct_pane_g

0x8d1e,	// (0x000169a3) cntbar_detail_list_event_pane_g1_ParamLimits

0x8d1e,	// (0x000169a3) cntbar_detail_list_event_pane_g1

0x8d2a,	// (0x000169af) cntbar_detail_list_event_pane_g2_ParamLimits

0x8d2a,	// (0x000169af) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x0001db24) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x0001db24) cntbar_detail_list_event_pane_g

0x8d98,	// (0x00016a1d) cntbar_detail_list_event_pane_t1_ParamLimits

0x8d98,	// (0x00016a1d) cntbar_detail_list_event_pane_t1

0x8dad,	// (0x00016a32) cntbar_detail_list_event_pane_t2_ParamLimits

0x8dad,	// (0x00016a32) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x0001db31) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x0001db31) cntbar_detail_list_event_pane_t

0xc351,	// (0x00019fd6) cell_cntbar_detail_list_shct_pane_g1

0x2ba6,	// (0x0001082b) navi_pane_mv_g3

0x950a,	// (0x0001718f) main_cntbar_detail_pane_ParamLimits

0x9499,	// (0x0001711e) main_notif_wgt_pane

0xcc6a,	// (0x0001a8ef) aid_tch_main_mp4_pane_g4

0xce67,	// (0x0001aaec) popup_slider_window_cp02

0xeab3,	// (0x0001c738) list_recal_day_event_pane

0x8c39,	// (0x000168be) cntbar_detail_btn_pane_ParamLimits

0x8c39,	// (0x000168be) cntbar_detail_btn_pane

0x8c51,	// (0x000168d6) cntbar_detail_btn_pane_cp01_ParamLimits

0x8c51,	// (0x000168d6) cntbar_detail_btn_pane_cp01

0x8c7b,	// (0x00016900) cntbar_detail_list_shct_pane_ParamLimits

0x8c8b,	// (0x00016910) cntbar_detail_pane_g1_ParamLimits

0x8c8b,	// (0x00016910) cntbar_detail_pane_g1

0x8c9f,	// (0x00016924) cntbar_detail_pane_t1_ParamLimits

0x8c9f,	// (0x00016924) cntbar_detail_pane_t1

0x8d36,	// (0x000169bb) cntbar_detail_list_event_pane_g3_ParamLimits

0x8d36,	// (0x000169bb) cntbar_detail_list_event_pane_g3

0x8d4e,	// (0x000169d3) cntbar_detail_list_event_pane_g4_ParamLimits

0x8d4e,	// (0x000169d3) cntbar_detail_list_event_pane_g4

0x8d66,	// (0x000169eb) cntbar_detail_list_event_pane_g5_ParamLimits

0x8d66,	// (0x000169eb) cntbar_detail_list_event_pane_g5

0x8d7e,	// (0x00016a03) cntbar_detail_list_event_pane_g6_ParamLimits

0x8d7e,	// (0x00016a03) cntbar_detail_list_event_pane_g6

0x8dc2,	// (0x00016a47) cntbar_detail_list_event_pane_t3_ParamLimits

0x8dc2,	// (0x00016a47) cntbar_detail_list_event_pane_t3

0x8dd4,	// (0x00016a59) popup_notif_wgt_window_ParamLimits

0x8dd4,	// (0x00016a59) popup_notif_wgt_window

0x8ded,	// (0x00016a72) popup_submenu_window_cp01_ParamLimits

0x8ded,	// (0x00016a72) popup_submenu_window_cp01

0xa9af,	// (0x00018634) bg_popup_window_pane_cp10

0xedff,	// (0x0001ca84) listscroll_notif_wgt_pane

0xee09,	// (0x0001ca8e) list_notif_wgt_window

0xee12,	// (0x0001ca97) scroll_pane_cp033

0xee1b,	// (0x0001caa0) list_notif_wgt_row_pane_ParamLimits

0xee1b,	// (0x0001caa0) list_notif_wgt_row_pane

0xee2f,	// (0x0001cab4) aid_size_list_notif_wgt_del

0xee38,	// (0x0001cabd) list_notif_wgt_row_pane_g1

0xee40,	// (0x0001cac5) list_notif_wgt_row_pane_g2

0xee48,	// (0x0001cacd) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x0001db38) list_notif_wgt_row_pane_g

0xee51,	// (0x0001cad6) list_notif_wgt_row_pane_t1

0xee5f,	// (0x0001cae4) list_notif_wgt_row_pane_t2

0xee6d,	// (0x0001caf2) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x0001db3f) list_notif_wgt_row_pane_t

0xd3dc,	// (0x0001b061) list_recal_day_event_pane_g1

0xee7b,	// (0x0001cb00) list_recal_day_event_pane_t1

0x9499,	// (0x0001711e) bg_button_pane_cp045

0xee8a,	// (0x0001cb0f) cntbar_detail_btn_pane_t1

0xbe1c,	// (0x00019aa1) main_callh_pane_ParamLimits

0xbe1c,	// (0x00019aa1) main_callh_pane

0x9499,	// (0x0001711e) main_coverflow0_pane

0x9499,	// (0x0001711e) main_wgtman_pane

0x7d5e,	// (0x000159e3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7d5e,	// (0x000159e3) main_fs_bigclock_unlock_btn_pane

0xe667,	// (0x0001c2ec) bg_button_pane_cp16

0x8651,	// (0x000162d6) cell_tport_appsw_pane_g3

0x8dff,	// (0x00016a84) cf0_flow_pane_ParamLimits

0x8dff,	// (0x00016a84) cf0_flow_pane

0xee98,	// (0x0001cb1d) listscroll_cf0_pane

0xeea1,	// (0x0001cb26) main_cf0_pane_g1

0x8e14,	// (0x00016a99) main_cf0_pane_t1_ParamLimits

0x8e14,	// (0x00016a99) main_cf0_pane_t1

0x8e2b,	// (0x00016ab0) main_cf0_pane_t2_ParamLimits

0x8e2b,	// (0x00016ab0) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x0001db46) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x0001db46) main_cf0_pane_t

0xeeab,	// (0x0001cb30) scroll_pane_cp11

0x8e42,	// (0x00016ac7) cf0_flow_pane_g1

0x8e4e,	// (0x00016ad3) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x0001db4b) cf0_flow_pane_g

0x8e5a,	// (0x00016adf) cf0_flow_pane_t1

0x9499,	// (0x0001711e) main_call6_pane

0x9499,	// (0x0001711e) main_calllock_pane

0x8e6c,	// (0x00016af1) call6_btn_grp_pane_ParamLimits

0x8e6c,	// (0x00016af1) call6_btn_grp_pane

0x8e88,	// (0x00016b0d) call6_pane_g1_ParamLimits

0x8e88,	// (0x00016b0d) call6_pane_g1

0x8e9e,	// (0x00016b23) popup_call6_1st_window_ParamLimits

0x8e9e,	// (0x00016b23) popup_call6_1st_window

0x8eaf,	// (0x00016b34) popup_call6_2nd_window_ParamLimits

0x8eaf,	// (0x00016b34) popup_call6_2nd_window

0x8ec0,	// (0x00016b45) cell_call6_btn_pane_ParamLimits

0x8ec0,	// (0x00016b45) cell_call6_btn_pane

0xa9af,	// (0x00018634) bg_popup_call2_in_pane_cp03

0xeeb6,	// (0x0001cb3b) popup_call6_1st_window_g1

0xeebe,	// (0x0001cb43) popup_call6_1st_window_g2

0xeec6,	// (0x0001cb4b) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x0001db50) popup_call6_1st_window_g

0xeece,	// (0x0001cb53) popup_call6_1st_window_t1

0xeedd,	// (0x0001cb62) popup_call6_1st_window_t2

0xeeed,	// (0x0001cb72) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x0001db57) popup_call6_1st_window_t

0xa9af,	// (0x00018634) bg_popup_call2_in_pane_cp04

0xeeb6,	// (0x0001cb3b) popup_call6_2nd_window_g1

0xeebe,	// (0x0001cb43) popup_call6_2nd_window_g2

0xeec6,	// (0x0001cb4b) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x0001db50) popup_call6_2nd_window_g

0xeece,	// (0x0001cb53) popup_call6_2nd_window_t1

0x9499,	// (0x0001711e) bg_button_pane_cp15

0xeefd,	// (0x0001cb82) cell_call6_btn_pane_g1

0xef06,	// (0x0001cb8b) cell_call6_btn_pane_t1

0x8ed4,	// (0x00016b59) listscroll_wgtman_pane_ParamLimits

0x8ed4,	// (0x00016b59) listscroll_wgtman_pane

0x8ef7,	// (0x00016b7c) wgtman_btn_pane_ParamLimits

0x8ef7,	// (0x00016b7c) wgtman_btn_pane

0xa875,	// (0x000184fa) aid_scroll_copy1

0xef15,	// (0x0001cb9a) list_wgtman_pane

0x8f3a,	// (0x00016bbf) wgtman_btn_pane_g1_ParamLimits

0x8f3a,	// (0x00016bbf) wgtman_btn_pane_g1

0x8f66,	// (0x00016beb) wgtman_btn_pane_t1_ParamLimits

0x8f66,	// (0x00016beb) wgtman_btn_pane_t1

0xef1f,	// (0x0001cba4) wgtman_btn_pane_t2_ParamLimits

0xef1f,	// (0x0001cba4) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x0001db5e) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x0001db5e) wgtman_btn_pane_t

0xef36,	// (0x0001cbbb) listrow_wgtman_pane_ParamLimits

0xef36,	// (0x0001cbbb) listrow_wgtman_pane

0xef4a,	// (0x0001cbcf) listrow_wgtman_pane_g1

0x8fa3,	// (0x00016c28) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x0001db63) listrow_wgtman_pane_g

0xef53,	// (0x0001cbd8) listrow_wgtman_pane_t1

0xef61,	// (0x0001cbe6) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x0001db68) listrow_wgtman_pane_t

0xef6f,	// (0x0001cbf4) wait_bar_pane_cp09

0xef77,	// (0x0001cbfc) main_calllock_btn_pane

0xef81,	// (0x0001cc06) main_calllock_pane_g1

0x9499,	// (0x0001711e) bg_button_pane_cp17

0xef8d,	// (0x0001cc12) main_calllock_btn_pane_g1

0xef96,	// (0x0001cc1b) main_calllock_btn_pane_t1

0x9499,	// (0x0001711e) main_dialer3_pane

0x9499,	// (0x0001711e) main_fmrd2_pane

0xc351,	// (0x00019fd6) main_fs_bigclock_unlock_btn_pane_g1

0xefad,	// (0x0001cc32) main_fs_bigclock_unlock_btn_pane_t1

0x8fad,	// (0x00016c32) area_fmrd2_info_pane_ParamLimits

0x8fad,	// (0x00016c32) area_fmrd2_info_pane

0x8fc0,	// (0x00016c45) area_fmrd2_visual_pane_ParamLimits

0x8fc0,	// (0x00016c45) area_fmrd2_visual_pane

0x8fce,	// (0x00016c53) fmrd2_indi_pane_ParamLimits

0x8fce,	// (0x00016c53) fmrd2_indi_pane

0x8fdb,	// (0x00016c60) area_fmrd2_visual_pane_g1

0x8fe3,	// (0x00016c68) area_fmrd2_visual_pane_t1

0x8ff3,	// (0x00016c78) area_fmrd2_visual_pane_t2

0x9003,	// (0x00016c88) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x0001db72) area_fmrd2_visual_pane_t

0x9013,	// (0x00016c98) area_fmrd2_info_pane_g1

0x901b,	// (0x00016ca0) area_fmrd2_info_pane_t1

0x902b,	// (0x00016cb0) area_fmrd2_info_pane_t2

0x903b,	// (0x00016cc0) area_fmrd2_info_pane_t3

0x904b,	// (0x00016cd0) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x0001db79) area_fmrd2_info_pane_t

0x905b,	// (0x00016ce0) fmrd2_indi_pane_t1

0x906b,	// (0x00016cf0) fmrd2_indi_pane_t2

0x907b,	// (0x00016d00) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x0001db82) fmrd2_indi_pane_t

0x7dd6,	// (0x00015a5b) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7dd6,	// (0x00015a5b) list_single_fs_bigclock_indicator_pane_g5

0x7e7c,	// (0x00015b01) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7e7c,	// (0x00015b01) list_single_fs_bigclock_indicator_pane_t5

0x8818,	// (0x0001649d) aid_cell_bcale_month_pane_ParamLimits

0x8818,	// (0x0001649d) aid_cell_bcale_month_pane

0x882a,	// (0x000164af) bcale_month_pane_ParamLimits

0x882a,	// (0x000164af) bcale_month_pane

0x8842,	// (0x000164c7) bcale_preview_pane_ParamLimits

0x8842,	// (0x000164c7) bcale_preview_pane

0xeca8,	// (0x0001c92d) list_single_fs_bigclock_pane_t1_ParamLimits

0xecc4,	// (0x0001c949) list_single_fs_bigclock_pane_t2_ParamLimits

0xecc4,	// (0x0001c949) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x0001db09) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x0001db09) list_single_fs_bigclock_pane_t

0xefa5,	// (0x0001cc2a) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x0001db6d) main_fs_bigclock_unlock_btn_pane_g

0x908b,	// (0x00016d10) aid_dia3_key_size_ParamLimits

0x908b,	// (0x00016d10) aid_dia3_key_size

0x909a,	// (0x00016d1f) aid_dia3_listrow_size_ParamLimits

0x909a,	// (0x00016d1f) aid_dia3_listrow_size

0x90a8,	// (0x00016d2d) dia3_keypad_fun_pane_ParamLimits

0x90a8,	// (0x00016d2d) dia3_keypad_fun_pane

0x90c4,	// (0x00016d49) dia3_keypad_num_pane_ParamLimits

0x90c4,	// (0x00016d49) dia3_keypad_num_pane

0x90dd,	// (0x00016d62) dia3_listscroll_pane_ParamLimits

0x90dd,	// (0x00016d62) dia3_listscroll_pane

0x90f2,	// (0x00016d77) dia3_numentry_pane_ParamLimits

0x90f2,	// (0x00016d77) dia3_numentry_pane

0xefbb,	// (0x0001cc40) dia3_list_pane

0xefc6,	// (0x0001cc4b) scroll_pane_cp12

0x9499,	// (0x0001711e) bg_dia3_numentry_pane

0xefd1,	// (0x0001cc56) dia3_numentry_pane_t1

0x9105,	// (0x00016d8a) cell_dia3_key_num_pane

0x910d,	// (0x00016d92) cell_dia3_key0_fun_pane_ParamLimits

0x910d,	// (0x00016d92) cell_dia3_key0_fun_pane

0x9121,	// (0x00016da6) cell_dia3_key1_fun_pane_ParamLimits

0x9121,	// (0x00016da6) cell_dia3_key1_fun_pane

0x9139,	// (0x00016dbe) dia3_listrow_pane

0xdece,	// (0x0001bb53) bg_dia3_numentry_pane_g1

0x9499,	// (0x0001711e) bg_button_pane_cp21

0xefe0,	// (0x0001cc65) cell_dia3_key_num_pane_t1

0xefee,	// (0x0001cc73) cell_dia3_key_num_pane_t2

0xeffd,	// (0x0001cc82) cell_dia3_key_num_pane_t3

0xf00c,	// (0x0001cc91) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x0001db89) cell_dia3_key_num_pane_t

0x9499,	// (0x0001711e) bg_button_pane_cp19

0x914b,	// (0x00016dd0) cell_dia3_key0_fun_pane_g1

0x9499,	// (0x0001711e) bg_button_pane_cp20

0x9153,	// (0x00016dd8) cell_dia3_key1_fun_pane_g1

0x915b,	// (0x00016de0) area_left_week_number_pane

0x9164,	// (0x00016de9) area_top_day_name_pane

0x916d,	// (0x00016df2) frame_month_view_pane

0x9179,	// (0x00016dfe) grid_month_view_pane

0x9183,	// (0x00016e08) cell_top_day_name_pane_ParamLimits

0x9183,	// (0x00016e08) cell_top_day_name_pane

0x919d,	// (0x00016e22) cell_area_left_week_number_pane_ParamLimits

0x919d,	// (0x00016e22) cell_area_left_week_number_pane

0x91b3,	// (0x00016e38) cell_month_view_pane_ParamLimits

0x91b3,	// (0x00016e38) cell_month_view_pane

0xf01b,	// (0x0001cca0) frm_month_g1

0x91d2,	// (0x00016e57) frm_month_g2

0x91dc,	// (0x00016e61) frm_month_g3

0x91e6,	// (0x00016e6b) frm_month_g4

0x91f0,	// (0x00016e75) frm_month_g5

0x91fa,	// (0x00016e7f) frm_month_g6

0x9206,	// (0x00016e8b) frm_month_g7

0xf024,	// (0x0001cca9) frm_month_g8

0x9212,	// (0x00016e97) frm_month_g9

0x921b,	// (0x00016ea0) frm_month_g10

0x9224,	// (0x00016ea9) frm_month_g11

0x922d,	// (0x00016eb2) frm_month_g12

0x9236,	// (0x00016ebb) frm_month_g13

0x923f,	// (0x00016ec4) frm_month_g14

0x9248,	// (0x00016ecd) frm_month_g15

0x9253,	// (0x00016ed8) frm_month_g16

0x000f,

0xff0d,	// (0x0001db92) frm_month_g

0x925e,	// (0x00016ee3) cell_top_day_name_pane_t1

0x926d,	// (0x00016ef2) cell_area_left_week_number_pane_g1

0x925e,	// (0x00016ee3) cell_area_left_week_number_pane_t1

0xc351,	// (0x00019fd6) cell_month_view_pane_g1

0x9275,	// (0x00016efa) cell_month_view_pane_t1

0x9499,	// (0x0001711e) main_fps_pane

0xe3c4,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe3c4,	// (0x0001c049) cmail_ddmenu_btn02_pane_cp1

0xe3e0,	// (0x0001c065) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe3e0,	// (0x0001c065) cmail_ddmenu_btn02_pane_cp2

0x8b02,	// (0x00016787) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8b02,	// (0x00016787) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe35,	// (0x0001daba) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe35,	// (0x0001daba) cmail_ddmenu_btn02_pane_g

0x8b20,	// (0x000167a5) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8b20,	// (0x000167a5) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3a,	// (0x0001dabf) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3a,	// (0x0001dabf) cmail_ddmenu_btn02_pane_t

0x9284,	// (0x00016f09) fps_text_pane_ParamLimits

0x9284,	// (0x00016f09) fps_text_pane

0x929b,	// (0x00016f20) main_fps_pane_g1_ParamLimits

0x929b,	// (0x00016f20) main_fps_pane_g1

0x92b3,	// (0x00016f38) wait_bar_pane_cp010_ParamLimits

0x92b3,	// (0x00016f38) wait_bar_pane_cp010

0x92c6,	// (0x00016f4b) fps_text_pane_t1_ParamLimits

0x92c6,	// (0x00016f4b) fps_text_pane_t1

0xed37,	// (0x0001c9bc) cam4_image_uncrop_pane_g1

0xed40,	// (0x0001c9c5) cam4_image_uncrop_pane_g2

0x5f15,	// (0x00013b9a) cam4_image_uncrop_pane_g3

0x5f1e,	// (0x00013ba3) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0001d592) cam4_image_uncrop_pane_g

0x9139,	// (0x00016dbe) dia3_listrow_pane_ParamLimits

0x9499,	// (0x0001711e) main_phob2_pane

0x8618,	// (0x0001629d) cell_tport_appsw_pane_cp02_ParamLimits

0x8618,	// (0x0001629d) cell_tport_appsw_pane_cp02

0x862c,	// (0x000162b1) cell_tport_appsw_pane_cp03_ParamLimits

0x862c,	// (0x000162b1) cell_tport_appsw_pane_cp03

0x9499,	// (0x0001711e) phob2_contact_card_pane

0x9499,	// (0x0001711e) phob2_listscroll_pane

0xf02d,	// (0x0001ccb2) phob2_list_pane

0xf035,	// (0x0001ccba) scroll_pane_cp034

0x92de,	// (0x00016f63) phob2_cc_data_pane_ParamLimits

0x92de,	// (0x00016f63) phob2_cc_data_pane

0x92ff,	// (0x00016f84) phob2_cc_listscroll_pane_ParamLimits

0x92ff,	// (0x00016f84) phob2_cc_listscroll_pane

0x9321,	// (0x00016fa6) list_double_large_graphic_phob2_pane_ParamLimits

0x9321,	// (0x00016fa6) list_double_large_graphic_phob2_pane

0x9336,	// (0x00016fbb) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x9336,	// (0x00016fbb) list_double_large_graphic_phob2_pane_g1

0x9343,	// (0x00016fc8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x9343,	// (0x00016fc8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x0001dbb3) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x0001dbb3) list_double_large_graphic_phob2_pane_g

0x934f,	// (0x00016fd4) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x934f,	// (0x00016fd4) list_double_large_graphic_phob2_pane_t1

0x9364,	// (0x00016fe9) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x9364,	// (0x00016fe9) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x0001dbb8) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x0001dbb8) list_double_large_graphic_phob2_pane_t

0x9499,	// (0x0001711e) list_highlight_pane_cp024

0xf03d,	// (0x0001ccc2) phob2_cc_button_pane

0x9376,	// (0x00016ffb) phob2_cc_data_pane_g1_ParamLimits

0x9376,	// (0x00016ffb) phob2_cc_data_pane_g1

0x938c,	// (0x00017011) phob2_cc_data_pane_g2_ParamLimits

0x938c,	// (0x00017011) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x0001dbbd) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x0001dbbd) phob2_cc_data_pane_g

0x93a0,	// (0x00017025) phob2_cc_data_pane_t1_ParamLimits

0x93a0,	// (0x00017025) phob2_cc_data_pane_t1

0x93ba,	// (0x0001703f) phob2_cc_data_pane_t2_ParamLimits

0x93ba,	// (0x0001703f) phob2_cc_data_pane_t2

0x93d4,	// (0x00017059) phob2_cc_data_pane_t3_ParamLimits

0x93d4,	// (0x00017059) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x0001dbc2) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x0001dbc2) phob2_cc_data_pane_t

0xf045,	// (0x0001ccca) phob2_cc_list_pane_ParamLimits

0xf045,	// (0x0001ccca) phob2_cc_list_pane

0xd487,	// (0x0001b10c) scroll_pane_cp035_ParamLimits

0xd487,	// (0x0001b10c) scroll_pane_cp035

0x950a,	// (0x0001718f) bg_button_pane_cp033

0xf051,	// (0x0001ccd6) phob2_cc_button_pane_g1

0xf05d,	// (0x0001cce2) phob2_cc_button_pane_t1

0xf072,	// (0x0001ccf7) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x0001dbc9) phob2_cc_button_pane_t

0x93ee,	// (0x00017073) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x93ee,	// (0x00017073) list_double_large_graphic_phob2_cc_pane

0x9403,	// (0x00017088) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9403,	// (0x00017088) list_double_large_graphic_phob2_cc_pane_g1

0x940f,	// (0x00017094) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x940f,	// (0x00017094) list_double_large_graphic_phob2_cc_pane_g2

0x941b,	// (0x000170a0) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x941b,	// (0x000170a0) list_double_large_graphic_phob2_cc_pane_g3

0x9427,	// (0x000170ac) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9427,	// (0x000170ac) list_double_large_graphic_phob2_cc_pane_g4

0x9433,	// (0x000170b8) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9433,	// (0x000170b8) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x0001dbce) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x0001dbce) list_double_large_graphic_phob2_cc_pane_g

0x943f,	// (0x000170c4) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x943f,	// (0x000170c4) list_double_large_graphic_phob2_cc_pane_t1

0x9468,	// (0x000170ed) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9468,	// (0x000170ed) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x0001dbd9) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x0001dbd9) list_double_large_graphic_phob2_cc_pane_t

0xf084,	// (0x0001cd09) list_highlight_pane_cp025_ParamLimits

0xf084,	// (0x0001cd09) list_highlight_pane_cp025

0x950a,	// (0x0001718f) bg_button_pane_cp033_ParamLimits

0xf051,	// (0x0001ccd6) phob2_cc_button_pane_g1_ParamLimits

0xf05d,	// (0x0001cce2) phob2_cc_button_pane_t1_ParamLimits

0xf072,	// (0x0001ccf7) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x0001dbc9) phob2_cc_button_pane_t_ParamLimits

0x0b1b,	// (0x0000e7a0) popup_wgtman_window

0xd21f,	// (0x0001aea4) scroll_pane_cp038

0x8f1c,	// (0x00016ba1) wgtman_btn_pane_cp_01_ParamLimits

0x8f1c,	// (0x00016ba1) wgtman_btn_pane_cp_01

0xf092,	// (0x0001cd17) wgtman_content_pane

0xf09b,	// (0x0001cd20) wgtman_heading_pane

0x9499,	// (0x0001711e) bg_heading_pane_cp02

0xf0a4,	// (0x0001cd29) wgtman_heading_pane_g1

0xf0ac,	// (0x0001cd31) wgtman_heading_pane_t1

0xf0ba,	// (0x0001cd3f) scroll_pane_cp036

0xf0c2,	// (0x0001cd47) wgtman_list_pane

0xed4b,	// (0x0001c9d0) wgtman_list_pane_t1_ParamLimits

0xed4b,	// (0x0001c9d0) wgtman_list_pane_t1

0xd01a,	// (0x0001ac9f) cam4_grid_pane

0x6d07,	// (0x0001498c) bg_button_pane_cp015_ParamLimits

0x6d1b,	// (0x000149a0) bg_button_pane_cp016_ParamLimits

0x6d2e,	// (0x000149b3) bg_button_pane_cp017_ParamLimits

0x6d86,	// (0x00014a0b) popup_vitu2_query_window_g3_ParamLimits

0x6d86,	// (0x00014a0b) popup_vitu2_query_window_g3

0x6e43,	// (0x00014ac8) popup_vitu2_query_window_t6_ParamLimits

0x6e43,	// (0x00014ac8) popup_vitu2_query_window_t6

0x6e6e,	// (0x00014af3) popup_vitu2_query_window_t7_ParamLimits

0x6e6e,	// (0x00014af3) popup_vitu2_query_window_t7

0xed37,	// (0x0001c9bc) cam4_grid_pane_g1

0xed40,	// (0x0001c9c5) cam4_grid_pane_g2

0xf0ca,	// (0x0001cd4f) cam4_grid_pane_g3

0xf0d3,	// (0x0001cd58) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x0001dbde) cam4_grid_pane_g

0x19c0,	// (0x0000f645) aid_placing_vt_slider_lsc_ParamLimits

0x1cb0,	// (0x0000f935) vidtel_button_pane_ParamLimits

0x1cb0,	// (0x0000f935) vidtel_button_pane

0x9499,	// (0x0001711e) bg_button_pane_cp034

0x9491,	// (0x00017116) vidtel_button_pane_g1

0xf0de,	// (0x0001cd63) vidtel_button_pane_t1

0xd36a,	// (0x0001afef) aid_size_vtel_slider_touch

0xd487,	// (0x0001b10c) scroll_pane_cp039

0xdf0c,	// (0x0001bb91) ncim_query_button_pane_cp01_ParamLimits

0xdf2b,	// (0x0001bbb0) ncimui_query_pane_g1_ParamLimits

0x950a,	// (0x0001718f) input_focus_pane_cp012_ParamLimits

0xdf50,	// (0x0001bbd5) ncim_query_entry_pane_t1_ParamLimits

0xd487,	// (0x0001b10c) scroll_pane_cp039_ParamLimits
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

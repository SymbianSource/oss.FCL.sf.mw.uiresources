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

#include "aknlayoutscalable_elaf_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x00075e34 };

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
0x13a1,	// (0x000771d5) Screen

0x13ad,	// (0x000771e1) application_window

0x13e9,	// (0x0007721d) area_bottom_pane_ParamLimits

0x13e9,	// (0x0007721d) area_bottom_pane

0x1422,	// (0x00077256) area_top_pane_ParamLimits

0x1422,	// (0x00077256) area_top_pane

0xabe5,	// (0x00080a19) call_video_uplink_pane_ParamLimits

0xabe5,	// (0x00080a19) call_video_uplink_pane

0x1497,	// (0x000772cb) main_pane_ParamLimits

0x1497,	// (0x000772cb) main_pane

0xb713,	// (0x00081547) context_pane

0x5d0b,	// (0x0007bb3f) navi_pane

0x5d3b,	// (0x0007bb6f) popup_cale_events_window_ParamLimits

0x5d3b,	// (0x0007bb6f) popup_cale_events_window

0xb726,	// (0x0008155a) popup_mup_playback_window

0x5d53,	// (0x0007bb87) signal_pane

0xef3a,	// (0x00084d6e) main_browser_pane

0x3ca6,	// (0x00079ada) main_burst_pane

0x5a0d,	// (0x0007b841) main_calc_pane

0x3ca6,	// (0x00079ada) main_cale_day_pane

0xef3a,	// (0x00084d6e) main_cale_month_pane

0x3ca6,	// (0x00079ada) main_cale_week_pane

0x3ca6,	// (0x00079ada) main_call_pane

0xec0c,	// (0x00084a40) main_call_poc_pane

0x3ca6,	// (0x00079ada) main_camera_pane

0x3ca6,	// (0x00079ada) main_chi_dic_pane

0x37e9,	// (0x0007961d) main_clock_pane

0xec0c,	// (0x00084a40) main_fmradio_pane

0x3ca6,	// (0x00079ada) main_graph_messa_pane

0xec0c,	// (0x00084a40) main_help_pane

0xef3a,	// (0x00084d6e) main_im_pane

0xee67,	// (0x00084c9b) main_image_pane_ParamLimits

0xee67,	// (0x00084c9b) main_image_pane

0xec0c,	// (0x00084a40) main_location2_pane

0x3ca6,	// (0x00079ada) main_location_pane

0xec0c,	// (0x00084a40) main_messa_pane

0xec0c,	// (0x00084a40) main_mp2_pane

0x3ca6,	// (0x00079ada) main_mp_pane

0xec0c,	// (0x00084a40) main_msg_pane

0xec0c,	// (0x00084a40) main_mup_eq_pane

0xec0c,	// (0x00084a40) main_mup_pane

0xef3a,	// (0x00084d6e) main_notes_pane

0xec0c,	// (0x00084a40) main_pec_pane

0xec0c,	// (0x00084a40) main_phob_pane

0xec0c,	// (0x00084a40) main_pinb_pane

0xec0c,	// (0x00084a40) main_postcard_pane

0xec0c,	// (0x00084a40) main_qdial_pane

0x3ca6,	// (0x00079ada) main_skin_pane

0xec0c,	// (0x00084a40) main_smil2_pane

0x3ca6,	// (0x00079ada) main_smil_pane

0x3ca6,	// (0x00079ada) main_video_pane

0x3ca6,	// (0x00079ada) main_video_tele_pane

0xee67,	// (0x00084c9b) main_viewer_pane_ParamLimits

0xee67,	// (0x00084c9b) main_viewer_pane

0x3ca6,	// (0x00079ada) main_vorec_pane

0x5a63,	// (0x0007b897) popup_blid_sat_info_window_ParamLimits

0x5a63,	// (0x0007b897) popup_blid_sat_info_window

0x5ac7,	// (0x0007b8fb) popup_dyc_status_message_window_ParamLimits

0x5ac7,	// (0x0007b8fb) popup_dyc_status_message_window

0x5ae1,	// (0x0007b915) popup_grid_large_graphic_window_ParamLimits

0x5ae1,	// (0x0007b915) popup_grid_large_graphic_window

0x5ba3,	// (0x0007b9d7) popup_loc_request_window_ParamLimits

0x5ba3,	// (0x0007b9d7) popup_loc_request_window

0x5cdf,	// (0x0007bb13) popup_wml_address_window_ParamLimits

0x5cdf,	// (0x0007bb13) popup_wml_address_window

0x584b,	// (0x0007b67f) call_muted_g1

0x4a12,	// (0x0007a846) popup_call_audio_conf_window_ParamLimits

0x4a12,	// (0x0007a846) popup_call_audio_conf_window

0x585b,	// (0x0007b68f) popup_call_audio_first_window_ParamLimits

0x585b,	// (0x0007b68f) popup_call_audio_first_window

0x58d1,	// (0x0007b705) popup_call_audio_in_window_ParamLimits

0x58d1,	// (0x0007b705) popup_call_audio_in_window

0x590d,	// (0x0007b741) popup_call_audio_out_window_ParamLimits

0x590d,	// (0x0007b741) popup_call_audio_out_window

0x5947,	// (0x0007b77b) popup_call_audio_second_window_ParamLimits

0x5947,	// (0x0007b77b) popup_call_audio_second_window

0x599d,	// (0x0007b7d1) popup_call_audio_wait_window_ParamLimits

0x599d,	// (0x0007b7d1) popup_call_audio_wait_window

0x59d2,	// (0x0007b806) popup_number_entry_window_ParamLimits

0x59d2,	// (0x0007b806) popup_number_entry_window

0xac11,	// (0x00080a45) bg_popup_call_pane_cp05_ParamLimits

0xac11,	// (0x00080a45) bg_popup_call_pane_cp05

0xac31,	// (0x00080a65) popup_number_entry_window_t1

0xac44,	// (0x00080a78) popup_number_entry_window_t2

0xac56,	// (0x00080a8a) popup_number_entry_window_t3

0x0003,

0xf0e7,	// (0x00084f1b) popup_number_entry_window_t

0xac9d,	// (0x00080ad1) text_title_cp2

0xacb0,	// (0x00080ae4) bg_popup_call_pane_cp_ParamLimits

0xacb0,	// (0x00080ae4) bg_popup_call_pane_cp

0xacbe,	// (0x00080af2) call_thumbnail_pane

0xacc6,	// (0x00080afa) popup_call_audio_in_window_g1_ParamLimits

0xacc6,	// (0x00080afa) popup_call_audio_in_window_g1

0xacd2,	// (0x00080b06) popup_call_audio_in_window_g2_ParamLimits

0xacd2,	// (0x00080b06) popup_call_audio_in_window_g2

0xacde,	// (0x00080b12) popup_call_audio_in_window_g3_ParamLimits

0xacde,	// (0x00080b12) popup_call_audio_in_window_g3

0x0002,

0xf0f0,	// (0x00084f24) popup_call_audio_in_window_g_ParamLimits

0xf0f0,	// (0x00084f24) popup_call_audio_in_window_g

0xacea,	// (0x00080b1e) popup_call_audio_in_window_t1_ParamLimits

0xacea,	// (0x00080b1e) popup_call_audio_in_window_t1

0xad06,	// (0x00080b3a) popup_call_audio_in_window_t2_ParamLimits

0xad06,	// (0x00080b3a) popup_call_audio_in_window_t2

0xad22,	// (0x00080b56) popup_call_audio_in_window_t3_ParamLimits

0xad22,	// (0x00080b56) popup_call_audio_in_window_t3

0x0002,

0xf0f7,	// (0x00084f2b) popup_call_audio_in_window_t_ParamLimits

0xf0f7,	// (0x00084f2b) popup_call_audio_in_window_t

0xacb0,	// (0x00080ae4) bg_popup_call_pane_cp01_ParamLimits

0xacb0,	// (0x00080ae4) bg_popup_call_pane_cp01

0xacbe,	// (0x00080af2) call_thumbnail_pane_cp02

0xad35,	// (0x00080b69) call_type_pane_cp022

0xad3d,	// (0x00080b71) popup_call_audio_out_window_g1_ParamLimits

0xad3d,	// (0x00080b71) popup_call_audio_out_window_g1

0xad4f,	// (0x00080b83) popup_call_audio_out_window_g2_ParamLimits

0xad4f,	// (0x00080b83) popup_call_audio_out_window_g2

0xad5b,	// (0x00080b8f) popup_call_audio_out_window_g3_ParamLimits

0xad5b,	// (0x00080b8f) popup_call_audio_out_window_g3

0x0002,

0xf0fe,	// (0x00084f32) popup_call_audio_out_window_g_ParamLimits

0xf0fe,	// (0x00084f32) popup_call_audio_out_window_g

0xad6d,	// (0x00080ba1) popup_call_audio_out_window_t1_ParamLimits

0xad6d,	// (0x00080ba1) popup_call_audio_out_window_t1

0xad85,	// (0x00080bb9) popup_call_audio_out_window_t2_ParamLimits

0xad85,	// (0x00080bb9) popup_call_audio_out_window_t2

0x0001,

0xf105,	// (0x00084f39) popup_call_audio_out_window_t_ParamLimits

0xf105,	// (0x00084f39) popup_call_audio_out_window_t

0xad9a,	// (0x00080bce) bg_popup_call_pane_ParamLimits

0xad9a,	// (0x00080bce) bg_popup_call_pane

0x161e,	// (0x00077452) call_thumbnail_pane_cp_ParamLimits

0x161e,	// (0x00077452) call_thumbnail_pane_cp

0xe60d,	// (0x00084441) call_type_pane_cp01_ParamLimits

0xe60d,	// (0x00084441) call_type_pane_cp01

0xe651,	// (0x00084485) popup_call_audio_first_window_g1_ParamLimits

0xe651,	// (0x00084485) popup_call_audio_first_window_g1

0xe69d,	// (0x000844d1) popup_call_audio_first_window_g2_ParamLimits

0xe69d,	// (0x000844d1) popup_call_audio_first_window_g2

0x0001,

0xf10a,	// (0x00084f3e) popup_call_audio_first_window_g_ParamLimits

0xf10a,	// (0x00084f3e) popup_call_audio_first_window_g

0xe6e1,	// (0x00084515) popup_call_audio_first_window_t1_ParamLimits

0xe6e1,	// (0x00084515) popup_call_audio_first_window_t1

0xe78d,	// (0x000845c1) popup_call_audio_first_window_t4_ParamLimits

0xe78d,	// (0x000845c1) popup_call_audio_first_window_t4

0xebdd,	// (0x00084a11) popup_call_audio_first_window_t5_ParamLimits

0xebdd,	// (0x00084a11) popup_call_audio_first_window_t5

0x0002,

0xf10f,	// (0x00084f43) popup_call_audio_first_window_t_ParamLimits

0xf10f,	// (0x00084f43) popup_call_audio_first_window_t

0xec0c,	// (0x00084a40) bg_popup_call_pane_cp02

0xec16,	// (0x00084a4a) call_type_pane_cp023

0xec1e,	// (0x00084a52) popup_call_audio_wait_window_g1

0xec26,	// (0x00084a5a) popup_call_audio_wait_window_g2

0x0001,

0xf116,	// (0x00084f4a) popup_call_audio_wait_window_g

0xec2e,	// (0x00084a62) popup_call_audio_wait_window_t3

0xec3c,	// (0x00084a70) bg_popup_call_pane_cp03_ParamLimits

0xec3c,	// (0x00084a70) bg_popup_call_pane_cp03

0xec9c,	// (0x00084ad0) call_thumbnail_pane_cp011_ParamLimits

0xec9c,	// (0x00084ad0) call_thumbnail_pane_cp011

0xeca8,	// (0x00084adc) call_type_pane_cp034_ParamLimits

0xeca8,	// (0x00084adc) call_type_pane_cp034

0xece4,	// (0x00084b18) popup_call_audio_second_window_g1_ParamLimits

0xece4,	// (0x00084b18) popup_call_audio_second_window_g1

0xed20,	// (0x00084b54) popup_call_audio_second_window_g2_ParamLimits

0xed20,	// (0x00084b54) popup_call_audio_second_window_g2

0x0001,

0xf11b,	// (0x00084f4f) popup_call_audio_second_window_g_ParamLimits

0xf11b,	// (0x00084f4f) popup_call_audio_second_window_g

0xed5c,	// (0x00084b90) popup_call_audio_second_window_t1_ParamLimits

0xed5c,	// (0x00084b90) popup_call_audio_second_window_t1

0xeddd,	// (0x00084c11) popup_call_audio_second_window_t2_ParamLimits

0xeddd,	// (0x00084c11) popup_call_audio_second_window_t2

0xee13,	// (0x00084c47) popup_call_audio_second_window_t3_ParamLimits

0xee13,	// (0x00084c47) popup_call_audio_second_window_t3

0x0002,

0xf120,	// (0x00084f54) popup_call_audio_second_window_t_ParamLimits

0xf120,	// (0x00084f54) popup_call_audio_second_window_t

0xec0c,	// (0x00084a40) bg_popup_call_pane_cp04

0xee49,	// (0x00084c7d) list_conf_pane

0xee51,	// (0x00084c85) popup_call_audio_conf_window_t1

0xee5f,	// (0x00084c93) call_thumbnail_pane_g1

0xee67,	// (0x00084c9b) bg_pinb_pane_ParamLimits

0xee67,	// (0x00084c9b) bg_pinb_pane

0xee75,	// (0x00084ca9) find_pinb_pane

0xee7e,	// (0x00084cb2) listscroll_pinb_pane_ParamLimits

0xee7e,	// (0x00084cb2) listscroll_pinb_pane

0xee8d,	// (0x00084cc1) pinb_bg_pane_g1

0x1642,	// (0x00077476) pinb_bg_pane_g2

0x164e,	// (0x00077482) pinb_bg_pane_g3

0x165a,	// (0x0007748e) pinb_bg_pane_g4

0x1666,	// (0x0007749a) pinb_bg_pane_g5

0x1672,	// (0x000774a6) pinb_bg_pane_g6

0x167d,	// (0x000774b1) pinb_bg_pane_g7

0x1688,	// (0x000774bc) pinb_bg_pane_g8

0x1693,	// (0x000774c7) pinb_bg_pane_g9

0x169d,	// (0x000774d1) pinb_bg_pane_g10

0x0009,

0xf127,	// (0x00084f5b) pinb_bg_pane_g

0x16ba,	// (0x000774ee) grid_pinb_pane

0x16c5,	// (0x000774f9) list_pinb_pane

0x16d0,	// (0x00077504) scroll_pane_cp01_ParamLimits

0x16d0,	// (0x00077504) scroll_pane_cp01

0xee97,	// (0x00084ccb) find_pinb_pane_g1_ParamLimits

0xee97,	// (0x00084ccb) find_pinb_pane_g1

0xeeaf,	// (0x00084ce3) find_pinb_pane_t1

0xeec1,	// (0x00084cf5) find_pinb_pane_t2

0x0001,

0xf141,	// (0x00084f75) find_pinb_pane_t

0xeed6,	// (0x00084d0a) input_focus_pane_cp01_ParamLimits

0xeed6,	// (0x00084d0a) input_focus_pane_cp01

0x16e2,	// (0x00077516) cell_pinb_pane_ParamLimits

0x16e2,	// (0x00077516) cell_pinb_pane

0x1704,	// (0x00077538) cell_pinb_pane_g1_ParamLimits

0x1704,	// (0x00077538) cell_pinb_pane_g1

0x1718,	// (0x0007754c) cell_pinb_pane_g2_ParamLimits

0x1718,	// (0x0007754c) cell_pinb_pane_g2

0xeee2,	// (0x00084d16) cell_pinb_pane_g3_ParamLimits

0xeee2,	// (0x00084d16) cell_pinb_pane_g3

0x0002,

0xf146,	// (0x00084f7a) cell_pinb_pane_g_ParamLimits

0xf146,	// (0x00084f7a) cell_pinb_pane_g

0xec0c,	// (0x00084a40) grid_highlight_pane_cp01

0x1724,	// (0x00077558) list_pinb_item_pane_ParamLimits

0x1724,	// (0x00077558) list_pinb_item_pane

0xec0c,	// (0x00084a40) list_highlight_pane_cp02

0x1737,	// (0x0007756b) list_pinb_item_pane_g1_ParamLimits

0x1737,	// (0x0007756b) list_pinb_item_pane_g1

0x1744,	// (0x00077578) list_pinb_item_pane_g2_ParamLimits

0x1744,	// (0x00077578) list_pinb_item_pane_g2

0x1750,	// (0x00077584) list_pinb_item_pane_g3_ParamLimits

0x1750,	// (0x00077584) list_pinb_item_pane_g3

0x1761,	// (0x00077595) list_pinb_item_pane_g4_ParamLimits

0x1761,	// (0x00077595) list_pinb_item_pane_g4

0x0003,

0xf14d,	// (0x00084f81) list_pinb_item_pane_g_ParamLimits

0xf14d,	// (0x00084f81) list_pinb_item_pane_g

0x176d,	// (0x000775a1) list_pinb_item_pane_t1_ParamLimits

0x176d,	// (0x000775a1) list_pinb_item_pane_t1

0x17a2,	// (0x000775d6) calc_display_pane

0x17c8,	// (0x000775fc) calc_paper_pane

0x17eb,	// (0x0007761f) grid_calc_pane

0xec0c,	// (0x00084a40) bg_list_pane_cp01

0x1819,	// (0x0007764d) clock_g1

0x1821,	// (0x00077655) clock_g2

0x0001,

0xf156,	// (0x00084f8a) clock_g

0x1829,	// (0x0007765d) clock_t1_ParamLimits

0x1829,	// (0x0007765d) clock_t1

0x183e,	// (0x00077672) clock_t2_ParamLimits

0x183e,	// (0x00077672) clock_t2

0x1850,	// (0x00077684) clock_t3_ParamLimits

0x1850,	// (0x00077684) clock_t3

0x1862,	// (0x00077696) clock_t4_ParamLimits

0x1862,	// (0x00077696) clock_t4

0x1874,	// (0x000776a8) clock_t5_ParamLimits

0x1874,	// (0x000776a8) clock_t5

0x1889,	// (0x000776bd) clock_t6_ParamLimits

0x1889,	// (0x000776bd) clock_t6

0x189b,	// (0x000776cf) clock_t7_ParamLimits

0x189b,	// (0x000776cf) clock_t7

0x18ad,	// (0x000776e1) clock_t8_ParamLimits

0x18ad,	// (0x000776e1) clock_t8

0x18c1,	// (0x000776f5) clock_t9_ParamLimits

0x18c1,	// (0x000776f5) clock_t9

0x0008,

0xf15b,	// (0x00084f8f) clock_t_ParamLimits

0xf15b,	// (0x00084f8f) clock_t

0xeeee,	// (0x00084d22) popup_clock_analogue_window_cp02

0xeeee,	// (0x00084d22) popup_clock_digital_window_cp01

0xeef6,	// (0x00084d2a) listscroll_help_pane

0xec0c,	// (0x00084a40) phob_pre_status_pane

0xef00,	// (0x00084d34) grid_qdial_pane

0xec0c,	// (0x00084a40) listscroll_mce_pane

0xef0a,	// (0x00084d3e) bg_notes_pane

0xef18,	// (0x00084d4c) list_notes_pane

0x18d7,	// (0x0007770b) scroll_pane_cp06

0xef26,	// (0x00084d5a) bg_calc_paper_pane

0xae26,	// (0x00080c5a) list_calc_pane

0xef3a,	// (0x00084d6e) bg_calc_display_pane

0x18eb,	// (0x0007771f) calc_display_pane_t1

0x18fd,	// (0x00077731) calc_display_pane_t2

0xae40,	// (0x00080c74) calc_display_pane_t3

0x0002,

0xf16e,	// (0x00084fa2) calc_display_pane_t

0x190f,	// (0x00077743) cell_calc_pane_ParamLimits

0x190f,	// (0x00077743) cell_calc_pane

0xef46,	// (0x00084d7a) bg_calc_paper_pane_g1

0xef52,	// (0x00084d86) bg_calc_paper_pane_g2

0xef5e,	// (0x00084d92) bg_calc_paper_pane_g3

0xef6a,	// (0x00084d9e) bg_calc_paper_pane_g4

0xef76,	// (0x00084daa) bg_calc_paper_pane_g5

0x194a,	// (0x0007777e) bg_calc_paper_pane_g6

0x195d,	// (0x00077791) bg_calc_paper_pane_g7

0x1970,	// (0x000777a4) bg_calc_paper_pane_g8

0x0007,

0xf175,	// (0x00084fa9) bg_calc_paper_pane_g

0x1981,	// (0x000777b5) calc_bg_paper_pane_g9

0x1992,	// (0x000777c6) list_calc_item_pane_ParamLimits

0x1992,	// (0x000777c6) list_calc_item_pane

0xef82,	// (0x00084db6) list_calc_item_pane_g1

0xae52,	// (0x00080c86) list_calc_item_pane_t1_ParamLimits

0xae52,	// (0x00080c86) list_calc_item_pane_t1

0x19a6,	// (0x000777da) list_calc_item_pane_t2_ParamLimits

0x19a6,	// (0x000777da) list_calc_item_pane_t2

0x0001,

0xf186,	// (0x00084fba) list_calc_item_pane_t_ParamLimits

0xf186,	// (0x00084fba) list_calc_item_pane_t

0xef8f,	// (0x00084dc3) cell_calc_pane_g1

0xef99,	// (0x00084dcd) grid_highlight_pane_cp02

0xefbb,	// (0x00084def) bg_calc_display_pane_g1

0xae64,	// (0x00080c98) bg_calc_display_pane_g2

0xefc4,	// (0x00084df8) bg_calc_display_pane_g3

0x0002,

0xf190,	// (0x00084fc4) bg_calc_display_pane_g

0x19d8,	// (0x0007780c) cell_qdial_pane_ParamLimits

0x19d8,	// (0x0007780c) cell_qdial_pane

0x19ee,	// (0x00077822) cell_qdial_pane_g1_ParamLimits

0x19ee,	// (0x00077822) cell_qdial_pane_g1

0x1a04,	// (0x00077838) cell_qdial_pane_g2_ParamLimits

0x1a04,	// (0x00077838) cell_qdial_pane_g2

0xefcd,	// (0x00084e01) cell_qdial_pane_g3_ParamLimits

0xefcd,	// (0x00084e01) cell_qdial_pane_g3

0x0003,

0xf197,	// (0x00084fcb) cell_qdial_pane_g_ParamLimits

0xf197,	// (0x00084fcb) cell_qdial_pane_g

0x1a2a,	// (0x0007785e) cell_qdial_pane_t1_ParamLimits

0x1a2a,	// (0x0007785e) cell_qdial_pane_t1

0x1a42,	// (0x00077876) cell_qdial_pane_t2_ParamLimits

0x1a42,	// (0x00077876) cell_qdial_pane_t2

0x1a55,	// (0x00077889) cell_qdial_pane_t3_ParamLimits

0x1a55,	// (0x00077889) cell_qdial_pane_t3

0x0002,

0xf1a0,	// (0x00084fd4) cell_qdial_pane_t_ParamLimits

0xf1a0,	// (0x00084fd4) cell_qdial_pane_t

0xec0c,	// (0x00084a40) grid_highlight_pane_cp04

0xefd9,	// (0x00084e0d) thumbnail_qdial_pane_ParamLimits

0xefd9,	// (0x00084e0d) thumbnail_qdial_pane

0xf035,	// (0x00084e69) list_help_pane

0xf03e,	// (0x00084e72) scroll_pane_cp02

0x1a68,	// (0x0007789c) help_list_pane_t1_ParamLimits

0x1a68,	// (0x0007789c) help_list_pane_t1

0xae6e,	// (0x00080ca2) bg_notes_pane_g2

0xae76,	// (0x00080caa) bg_notes_pane_g3

0xae7e,	// (0x00080cb2) notes_bg_pane_g1

0xae86,	// (0x00080cba) notes_bg_pane_g4

0xae8e,	// (0x00080cc2) notes_bg_pane_g5

0xae96,	// (0x00080cca) notes_bg_pane_g6

0xae9e,	// (0x00080cd2) notes_bg_pane_g7

0xaea6,	// (0x00080cda) notes_bg_pane_g8

0xaeae,	// (0x00080ce2) notes_bg_pane_g9

0x0006,

0xf1be,	// (0x00084ff2) notes_bg_pane_g

0x1a8c,	// (0x000778c0) list_notes_text_pane_ParamLimits

0x1a8c,	// (0x000778c0) list_notes_text_pane

0xf047,	// (0x00084e7b) list_notes_text_pane_g1

0x08fc,	// (0x00076730) list_notes_text_pane_t1

0xef3a,	// (0x00084d6e) listscroll_cale_week_pane

0x1ac3,	// (0x000778f7) bg_cale_heading_pane

0xf061,	// (0x00084e95) bg_cale_pane_cp01

0x1adf,	// (0x00077913) cale_week_corner_pane

0x1af5,	// (0x00077929) cale_week_day_heading_pane

0x1b11,	// (0x00077945) cale_week_scroll_pane_g1

0x1b2a,	// (0x0007795e) cale_week_scroll_pane_g2

0x1b3b,	// (0x0007796f) cale_week_scroll_pane_g3

0x1b4c,	// (0x00077980) cale_week_scroll_pane_g4

0x1b5d,	// (0x00077991) cale_week_scroll_pane_g5

0x1b6e,	// (0x000779a2) cale_week_scroll_pane_g6

0x1b7f,	// (0x000779b3) cale_week_scroll_pane_g7

0x1b90,	// (0x000779c4) cale_week_scroll_pane_g8

0x1ba1,	// (0x000779d5) cale_week_scroll_pane_g9

0x1bb2,	// (0x000779e6) cale_week_scroll_pane_g10

0x1bc3,	// (0x000779f7) cale_week_scroll_pane_g11

0x1bd4,	// (0x00077a08) cale_week_scroll_pane_g12

0x1be5,	// (0x00077a19) cale_week_scroll_pane_g13

0x1bfe,	// (0x00077a32) cale_week_scroll_pane_g14

0x1c17,	// (0x00077a4b) cale_week_scroll_pane_g15

0x000e,

0xf1cd,	// (0x00085001) cale_week_scroll_pane_g

0x1c30,	// (0x00077a64) cale_week_time_pane

0x1c41,	// (0x00077a75) grid_cale_week_pane

0x1c5c,	// (0x00077a90) scroll_pane_cp08

0x1c74,	// (0x00077aa8) cell_cale_week_pane_ParamLimits

0x1c74,	// (0x00077aa8) cell_cale_week_pane

0x1cbc,	// (0x00077af0) cale_week_day_heading_pane_t1

0x1cd0,	// (0x00077b04) cale_week_day_heading_pane_t2

0x1ce4,	// (0x00077b18) cale_week_day_heading_pane_t3

0x1cf8,	// (0x00077b2c) cale_week_day_heading_pane_t4

0x1d0c,	// (0x00077b40) cale_week_day_heading_pane_t5

0x1d20,	// (0x00077b54) cale_week_day_heading_pane_t6

0x1d34,	// (0x00077b68) cale_week_day_heading_pane_t7

0x0006,

0xf1ec,	// (0x00085020) cale_week_day_heading_pane_t

0xf08c,	// (0x00084ec0) bg_cale_side_pane

0x1d48,	// (0x00077b7c) cale_week_time_pane_t1

0x1d60,	// (0x00077b94) cale_week_time_pane_t2

0x1d78,	// (0x00077bac) cale_week_time_pane_t3

0x1d90,	// (0x00077bc4) cale_week_time_pane_t4

0x1da8,	// (0x00077bdc) cale_week_time_pane_t5

0x1dc0,	// (0x00077bf4) cale_week_time_pane_t6

0x1dd8,	// (0x00077c0c) cale_week_time_pane_t7

0x1df4,	// (0x00077c28) cale_week_time_pane_t8

0x0007,

0xf1fb,	// (0x0008502f) cale_week_time_pane_t

0x1e14,	// (0x00077c48) cell_cale_week_pane_g2

0x1e25,	// (0x00077c59) cell_cale_week_pane_g3_ParamLimits

0x1e25,	// (0x00077c59) cell_cale_week_pane_g3

0xf09a,	// (0x00084ece) grid_highlight_pane_cp07

0xf0a2,	// (0x00084ed6) listscroll_gms_pane

0xf0ac,	// (0x00084ee0) grid_gms_pane

0xf0b5,	// (0x00084ee9) listscroll_gms_pane_g1

0xf0bd,	// (0x00084ef1) listscroll_gms_pane_g2

0x0001,

0xf20c,	// (0x00085040) listscroll_gms_pane_g

0x1e3d,	// (0x00077c71) scroll_pane_cp010

0x1e48,	// (0x00077c7c) cell_gms_pane_ParamLimits

0x1e48,	// (0x00077c7c) cell_gms_pane

0x1e62,	// (0x00077c96) cell_gms_pane_g1

0xf0c5,	// (0x00084ef9) cell_gms_pane_g2

0xf0cd,	// (0x00084f01) cell_gms_pane_g3

0xf0d6,	// (0x00084f0a) cell_gms_pane_g4

0x0003,

0xf211,	// (0x00085045) cell_gms_pane_g

0xf0df,	// (0x00084f13) grid_highlight_pane_cp09

0x57f3,	// (0x0007b627) phob_pre_status_pane_g1

0x57fb,	// (0x0007b62f) phob_pre_status_pane_g2

0x5803,	// (0x0007b637) phob_pre_status_pane_g3

0x580b,	// (0x0007b63f) phob_pre_status_pane_g4

0x0004,

0xf600,	// (0x00085434) phob_pre_status_pane_g

0x581b,	// (0x0007b64f) phob_pre_status_pane_t1

0x582b,	// (0x0007b65f) phob_pre_status_pane_t2

0x583b,	// (0x0007b66f) phob_pre_status_pane_t3

0x0002,

0xf60b,	// (0x0008543f) phob_pre_status_pane_t

0xec0c,	// (0x00084a40) bg_list_pane_cp05

0x1e72,	// (0x00077ca6) grid_vorec_pane

0xaeb6,	// (0x00080cea) vorec_t1

0xaec4,	// (0x00080cf8) vorec_t2

0xaed2,	// (0x00080d06) vorec_t3

0xaee0,	// (0x00080d14) vorec_t4

0xaeee,	// (0x00080d22) vorec_t5

0xaefc,	// (0x00080d30) vorec_t6

0x0006,

0xf21a,	// (0x0008504e) vorec_t

0xaf18,	// (0x00080d4c) wait_bar_pane_cp01

0x1e7c,	// (0x00077cb0) cell_vorec_pane_ParamLimits

0x1e7c,	// (0x00077cb0) cell_vorec_pane

0x1e91,	// (0x00077cc5) cell_vorec_pane_g1

0xec0c,	// (0x00084a40) grid_highlight_pane_cp05

0x1eb1,	// (0x00077ce5) cams_zoom_pane

0x1ec0,	// (0x00077cf4) image_vga_pane

0x1eda,	// (0x00077d0e) main_camera_pane_g1

0x1eec,	// (0x00077d20) main_camera_pane_g2

0x1efc,	// (0x00077d30) main_camera_pane_g3

0x1f10,	// (0x00077d44) main_camera_pane_g4

0x1f24,	// (0x00077d58) main_camera_pane_g5

0x1f38,	// (0x00077d6c) main_camera_pane_g6

0x1f4c,	// (0x00077d80) main_camera_pane_g7

0x0007,

0xf229,	// (0x0008505d) main_camera_pane_g

0x1f6c,	// (0x00077da0) main_camera_pane_t1

0x1f82,	// (0x00077db6) main_camera_pane_t2

0x0001,

0xf23a,	// (0x0008506e) main_camera_pane_t

0x1fc0,	// (0x00077df4) cams_zoom_pane_cp_ParamLimits

0x1fc0,	// (0x00077df4) cams_zoom_pane_cp

0x1fe8,	// (0x00077e1c) image_cif_pane_ParamLimits

0x1fe8,	// (0x00077e1c) image_cif_pane

0x2023,	// (0x00077e57) image_subqcif_pane

0x202d,	// (0x00077e61) main_video_pane_g1_ParamLimits

0x202d,	// (0x00077e61) main_video_pane_g1

0x2051,	// (0x00077e85) main_video_pane_g2_ParamLimits

0x2051,	// (0x00077e85) main_video_pane_g2

0x2087,	// (0x00077ebb) main_video_pane_g3_ParamLimits

0x2087,	// (0x00077ebb) main_video_pane_g3

0x20b5,	// (0x00077ee9) main_video_pane_g4_ParamLimits

0x20b5,	// (0x00077ee9) main_video_pane_g4

0x20e3,	// (0x00077f17) main_video_pane_g5_ParamLimits

0x20e3,	// (0x00077f17) main_video_pane_g5

0x20fb,	// (0x00077f2f) main_video_pane_g6_ParamLimits

0x20fb,	// (0x00077f2f) main_video_pane_g6

0x0006,

0xf23f,	// (0x00085073) main_video_pane_g_ParamLimits

0xf23f,	// (0x00085073) main_video_pane_g

0x2126,	// (0x00077f5a) main_video_pane_t1_ParamLimits

0x2126,	// (0x00077f5a) main_video_pane_t1

0x216f,	// (0x00077fa3) cams_zoom_pane_g1

0x2178,	// (0x00077fac) cams_zoom_pane_g2

0x2181,	// (0x00077fb5) cams_zoom_pane_g3

0x218a,	// (0x00077fbe) cams_zoom_pane_g4

0x0003,

0xf24e,	// (0x00085082) cams_zoom_pane_g

0x21a7,	// (0x00077fdb) grid_cams_pane

0x21c1,	// (0x00077ff5) linegrid_cams_pane

0x21d3,	// (0x00078007) cell_cams_pane_ParamLimits

0x21d3,	// (0x00078007) cell_cams_pane

0x21f5,	// (0x00078029) cams_burst_image_pane

0x21fd,	// (0x00078031) cell_cams_pane_g1

0xec0c,	// (0x00084a40) grid_highlight_pane_cp03

0xef8f,	// (0x00084dc3) mp_bg_pane_g1

0xec0c,	// (0x00084a40) bg_list_pane_cp03

0xb5e5,	// (0x00081419) bg_mp_pane

0xb5ed,	// (0x00081421) grid_mp_pane

0xb5f5,	// (0x00081429) media_player_g1

0xb5ff,	// (0x00081433) media_player_t1

0xb60d,	// (0x00081441) media_player_t2

0xb61b,	// (0x0008144f) media_player_t3

0xb629,	// (0x0008145d) media_player_t4

0xb637,	// (0x0008146b) media_player_t5

0xb645,	// (0x00081479) media_player_t6

0xb653,	// (0x00081487) media_player_t7

0x0006,

0xf5ea,	// (0x0008541e) media_player_t

0xb661,	// (0x00081495) wait_bar_pane_cp02

0xf5cf,	// (0x00085403) main_usb_pane_t

0x57ea,	// (0x0007b61e) cell_mp_pane

0xef8f,	// (0x00084dc3) cell_mp_pane_g1

0xec0c,	// (0x00084a40) grid_highlight_pane_cp06

0x2205,	// (0x00078039) grid_skin_colour_pane

0x220d,	// (0x00078041) list_highlight_pane_cp03

0x2215,	// (0x00078049) skin_g1

0x221f,	// (0x00078053) skin_t1

0x222e,	// (0x00078062) skin_t2

0x0001,

0xf283,	// (0x000850b7) skin_t

0x223c,	// (0x00078070) cell_skin_colour_pane_ParamLimits

0x223c,	// (0x00078070) cell_skin_colour_pane

0x225c,	// (0x00078090) cell_skin_colour_pane_g1

0x22c1,	// (0x000780f5) call_video_g1_ParamLimits

0x22c1,	// (0x000780f5) call_video_g1

0x22dd,	// (0x00078111) call_video_g2_ParamLimits

0x22dd,	// (0x00078111) call_video_g2

0x0001,

0xf288,	// (0x000850bc) call_video_g_ParamLimits

0xf288,	// (0x000850bc) call_video_g

0x2322,	// (0x00078156) call_video_uplink_pane_cp1_ParamLimits

0x2322,	// (0x00078156) call_video_uplink_pane_cp1

0x2387,	// (0x000781bb) call_video_uplink_pane_cp2

0x23cb,	// (0x000781ff) video_down_crop_pane_ParamLimits

0x23cb,	// (0x000781ff) video_down_crop_pane

0x24b4,	// (0x000782e8) video_down_pane_ParamLimits

0x24b4,	// (0x000782e8) video_down_pane

0x25a6,	// (0x000783da) video_down_subqcif_pane_ParamLimits

0x25a6,	// (0x000783da) video_down_subqcif_pane

0x25c0,	// (0x000783f4) video_down_subqcif_pane_cp_ParamLimits

0x25c0,	// (0x000783f4) video_down_subqcif_pane_cp

0x25ff,	// (0x00078433) im_reading_pane_ParamLimits

0x25ff,	// (0x00078433) im_reading_pane

0x2611,	// (0x00078445) im_writing_pane_ParamLimits

0x2611,	// (0x00078445) im_writing_pane

0x2637,	// (0x0007846b) im_reading_pane_t1

0x2676,	// (0x000784aa) list_im_pane

0x2687,	// (0x000784bb) scroll_pane_cp07

0x26a0,	// (0x000784d4) im_writing_pane_t1_ParamLimits

0x26a0,	// (0x000784d4) im_writing_pane_t1

0x26b5,	// (0x000784e9) im_writing_pane_t2_ParamLimits

0x26b5,	// (0x000784e9) im_writing_pane_t2

0x0001,

0xf292,	// (0x000850c6) im_writing_pane_t_ParamLimits

0xf292,	// (0x000850c6) im_writing_pane_t

0xec0c,	// (0x00084a40) input_focus_pane_cp04

0xec0c,	// (0x00084a40) input_focus_pane_cp05

0x26d2,	// (0x00078506) list_im_single_pane_ParamLimits

0x26d2,	// (0x00078506) list_im_single_pane

0x26eb,	// (0x0007851f) list_single_im_pane_t1

0x57aa,	// (0x0007b5de) blid_accuracy_pane

0x57b2,	// (0x0007b5e6) blid_compass_pane

0x57bc,	// (0x0007b5f0) main_location_t1

0x57cc,	// (0x0007b600) main_location_t2

0x57dc,	// (0x0007b610) main_location_t3

0x0002,

0xf5f9,	// (0x0008542d) main_location_t

0xec0c,	// (0x00084a40) aid_levels_location

0xef8f,	// (0x00084dc3) blid_accuracy_pane_g1

0xef8f,	// (0x00084dc3) blid_accuracy_pane_g2

0x0001,

0xf2f4,	// (0x00085128) blid_accuracy_pane_g

0x2725,	// (0x00078559) wml_content_pane

0x2763,	// (0x00078597) wml_button_pane_ParamLimits

0x2763,	// (0x00078597) wml_button_pane

0x2777,	// (0x000785ab) wml_list_single_large_pane_ParamLimits

0x2777,	// (0x000785ab) wml_list_single_large_pane

0x2790,	// (0x000785c4) wml_list_single_medium_pane_ParamLimits

0x2790,	// (0x000785c4) wml_list_single_medium_pane

0x27aa,	// (0x000785de) wml_list_single_small_pane_ParamLimits

0x27aa,	// (0x000785de) wml_list_single_small_pane

0x27c9,	// (0x000785fd) wml_selection_box_pane_ParamLimits

0x27c9,	// (0x000785fd) wml_selection_box_pane

0x27dc,	// (0x00078610) wml_list_single_pane_t1

0x27eb,	// (0x0007861f) wml_list_single_medium_pane_t1

0x27fa,	// (0x0007862e) wml_list_single_large_pane_t1

0x2809,	// (0x0007863d) input_focus_pane_cp02_ParamLimits

0x2809,	// (0x0007863d) input_focus_pane_cp02

0x281c,	// (0x00078650) wml_selection_box_pane_g1

0x2825,	// (0x00078659) wml_selection_box_pane_t1_ParamLimits

0x2825,	// (0x00078659) wml_selection_box_pane_t1

0xee67,	// (0x00084c9b) bg_wml_button_pane_ParamLimits

0xee67,	// (0x00084c9b) bg_wml_button_pane

0x283d,	// (0x00078671) wml_button_pane_g1

0x2845,	// (0x00078679) wml_button_pane_t1

0x283d,	// (0x00078671) wml_button_bg_pane_g1

0x2855,	// (0x00078689) wml_button_bg_pane_g2

0x285d,	// (0x00078691) wml_button_bg_pane_g3

0x2865,	// (0x00078699) wml_button_bg_pane_g4

0x286d,	// (0x000786a1) wml_button_bg_pane_g5

0x2875,	// (0x000786a9) wml_button_bg_pane_g6

0x287d,	// (0x000786b1) wml_button_bg_pane_g7

0x2885,	// (0x000786b9) wml_button_bg_pane_g8

0x288d,	// (0x000786c1) wml_button_bg_pane_g9

0x0008,

0xf297,	// (0x000850cb) wml_button_bg_pane_g

0x2895,	// (0x000786c9) bg_list_pane_cp02

0x289f,	// (0x000786d3) mce_header_pane_ParamLimits

0x289f,	// (0x000786d3) mce_header_pane

0x28b5,	// (0x000786e9) mce_icon_pane

0x28b5,	// (0x000786e9) mce_image_pane

0x28be,	// (0x000786f2) mce_text_pane_ParamLimits

0x28be,	// (0x000786f2) mce_text_pane

0x28d1,	// (0x00078705) scroll_pane_cp03

0x275b,	// (0x0007858f) scroll_pane_cp04

0x28db,	// (0x0007870f) scroll_pane_cp05_ParamLimits

0x28db,	// (0x0007870f) scroll_pane_cp05

0x28e7,	// (0x0007871b) mce_header_field_pane_ParamLimits

0x28e7,	// (0x0007871b) mce_header_field_pane

0x2900,	// (0x00078734) mce_header_field_pane_2_ParamLimits

0x2900,	// (0x00078734) mce_header_field_pane_2

0x2916,	// (0x0007874a) mce_header_field_pane_3

0x291e,	// (0x00078752) list_single_mce_message_pane_ParamLimits

0x291e,	// (0x00078752) list_single_mce_message_pane

0x293a,	// (0x0007876e) list_single_mce_smart_pane_ParamLimits

0x293a,	// (0x0007876e) list_single_mce_smart_pane

0x2961,	// (0x00078795) input_focus_pane_cp03

0x296a,	// (0x0007879e) list_header_data_pane

0x2972,	// (0x000787a6) mce_header_field_pane_t1

0x2982,	// (0x000787b6) list_single_mce_header_pane_ParamLimits

0x2982,	// (0x000787b6) list_single_mce_header_pane

0x2996,	// (0x000787ca) list_single_mce_header_pane_t1

0x29a5,	// (0x000787d9) list_single_mce_message_pane_g1

0x29ad,	// (0x000787e1) list_single_mce_message_pane_t1

0x29d9,	// (0x0007880d) bg_cale_heading_pane_cp01_ParamLimits

0x29d9,	// (0x0007880d) bg_cale_heading_pane_cp01

0x2a0c,	// (0x00078840) bg_cale_pane_cp02_ParamLimits

0x2a0c,	// (0x00078840) bg_cale_pane_cp02

0x2a2f,	// (0x00078863) cale_month_corner_pane

0x2a45,	// (0x00078879) cale_month_day_heading_pane_ParamLimits

0x2a45,	// (0x00078879) cale_month_day_heading_pane

0x2a78,	// (0x000788ac) cale_month_pane_g1_ParamLimits

0x2a78,	// (0x000788ac) cale_month_pane_g1

0x2aa4,	// (0x000788d8) cale_month_pane_g2_ParamLimits

0x2aa4,	// (0x000788d8) cale_month_pane_g2

0x2ac5,	// (0x000788f9) cale_month_pane_g3_ParamLimits

0x2ac5,	// (0x000788f9) cale_month_pane_g3

0x2b01,	// (0x00078935) cale_month_pane_g4_ParamLimits

0x2b01,	// (0x00078935) cale_month_pane_g4

0x2b3d,	// (0x00078971) cale_month_pane_g5_ParamLimits

0x2b3d,	// (0x00078971) cale_month_pane_g5

0x2b79,	// (0x000789ad) cale_month_pane_g6_ParamLimits

0x2b79,	// (0x000789ad) cale_month_pane_g6

0x2bb5,	// (0x000789e9) cale_month_pane_g7_ParamLimits

0x2bb5,	// (0x000789e9) cale_month_pane_g7

0x2bf1,	// (0x00078a25) cale_month_pane_g8_ParamLimits

0x2bf1,	// (0x00078a25) cale_month_pane_g8

0x2c2d,	// (0x00078a61) cale_month_pane_g9_ParamLimits

0x2c2d,	// (0x00078a61) cale_month_pane_g9

0x2c63,	// (0x00078a97) cale_month_pane_g10_ParamLimits

0x2c63,	// (0x00078a97) cale_month_pane_g10

0x2c8d,	// (0x00078ac1) cale_month_pane_g11_ParamLimits

0x2c8d,	// (0x00078ac1) cale_month_pane_g11

0x2cb7,	// (0x00078aeb) cale_month_pane_g12_ParamLimits

0x2cb7,	// (0x00078aeb) cale_month_pane_g12

0x2ce5,	// (0x00078b19) cale_month_pane_g13_ParamLimits

0x2ce5,	// (0x00078b19) cale_month_pane_g13

0x000c,

0xf2aa,	// (0x000850de) cale_month_pane_g_ParamLimits

0xf2aa,	// (0x000850de) cale_month_pane_g

0x2d25,	// (0x00078b59) cale_month_week_pane

0x2d36,	// (0x00078b6a) grid_cale_month_pane_ParamLimits

0x2d36,	// (0x00078b6a) grid_cale_month_pane

0x2d64,	// (0x00078b98) cale_month_day_heading_pane_t1

0x2dc2,	// (0x00078bf6) cale_month_day_heading_pane_t2

0x2e27,	// (0x00078c5b) cale_month_day_heading_pane_t3

0x2e8c,	// (0x00078cc0) cale_month_day_heading_pane_t4

0x2ef1,	// (0x00078d25) cale_month_day_heading_pane_t5

0x2f56,	// (0x00078d8a) cale_month_day_heading_pane_t6

0x2fbb,	// (0x00078def) cale_month_day_heading_pane_t7

0x0006,

0xf2c5,	// (0x000850f9) cale_month_day_heading_pane_t

0xf08c,	// (0x00084ec0) bg_cale_side_pane_cp01

0x3020,	// (0x00078e54) cale_month_week_pane_t1

0x3037,	// (0x00078e6b) cale_month_week_pane_t2

0x304e,	// (0x00078e82) cale_month_week_pane_t3

0x3065,	// (0x00078e99) cale_month_week_pane_t4

0x307c,	// (0x00078eb0) cale_month_week_pane_t5

0x3093,	// (0x00078ec7) cale_month_week_pane_t6

0x0005,

0xf2d4,	// (0x00085108) cale_month_week_pane_t

0x30b2,	// (0x00078ee6) cell_cale_month_pane_ParamLimits

0x30b2,	// (0x00078ee6) cell_cale_month_pane

0xb008,	// (0x00080e3c) cell_cale_month_pane_g1

0x3160,	// (0x00078f94) cell_cale_month_pane_t1_ParamLimits

0x3160,	// (0x00078f94) cell_cale_month_pane_t1

0xf09a,	// (0x00084ece) grid_highlight_pane_cp08

0xef8f,	// (0x00084dc3) main_smil_g1

0x317c,	// (0x00078fb0) smil_status_pane

0x3187,	// (0x00078fbb) smil_text_pane

0xb503,	// (0x00081337) bg_popup_call3_rect_pane_g8

0xb50b,	// (0x0008133f) bg_popup_call3_rect_pane_g9

0x0008,

0xf58d,	// (0x000853c1) bg_popup_call3_rect_pane_g

0xb7a0,	// (0x000815d4) smil_status_volume_pane_g1

0x319b,	// (0x00078fcf) smil_status_pane_t1

0xb7d3,	// (0x00081607) volume_smil_pane

0x31b2,	// (0x00078fe6) list_smil_text_pane

0x31bc,	// (0x00078ff0) scroll_pane_cp011

0x31c7,	// (0x00078ffb) smil_text_list_pane_t1_ParamLimits

0x31c7,	// (0x00078ffb) smil_text_list_pane_t1

0xb014,	// (0x00080e48) aid_volume_smil_ParamLimits

0xb014,	// (0x00080e48) aid_volume_smil

0xef8f,	// (0x00084dc3) smil_volume_pane_g1

0xef8f,	// (0x00084dc3) smil_volume_pane_g2

0x0001,

0xf2f4,	// (0x00085128) smil_volume_pane_g

0xef3a,	// (0x00084d6e) listscroll_cale_day_pane

0x321c,	// (0x00079050) bg_cale_pane

0x3234,	// (0x00079068) list_cale_pane

0x3245,	// (0x00079079) scroll_pane_cp09

0x3256,	// (0x0007908a) cale_bg_pane_g1

0x325e,	// (0x00079092) cale_bg_pane_g2

0x3266,	// (0x0007909a) cale_bg_pane_g3

0x326e,	// (0x000790a2) cale_bg_pane_g4

0x3276,	// (0x000790aa) cale_bg_pane_g5

0x327e,	// (0x000790b2) cale_bg_pane_g6

0x3286,	// (0x000790ba) cale_bg_pane_g7

0x328e,	// (0x000790c2) cale_bg_pane_g8

0x3296,	// (0x000790ca) cale_bg_pane_g9

0x0008,

0xf2f9,	// (0x0008512d) cale_bg_pane_g

0x329e,	// (0x000790d2) list_cale_time_pane_ParamLimits

0x329e,	// (0x000790d2) list_cale_time_pane

0x32b3,	// (0x000790e7) list_cale_time_pane_g1_ParamLimits

0x32b3,	// (0x000790e7) list_cale_time_pane_g1

0x32bf,	// (0x000790f3) list_cale_time_pane_g2_ParamLimits

0x32bf,	// (0x000790f3) list_cale_time_pane_g2

0x32cc,	// (0x00079100) list_cale_time_pane_g3_ParamLimits

0x32cc,	// (0x00079100) list_cale_time_pane_g3

0x32da,	// (0x0007910e) list_cale_time_pane_g4_ParamLimits

0x32da,	// (0x0007910e) list_cale_time_pane_g4

0x32e8,	// (0x0007911c) list_cale_time_pane_g5_ParamLimits

0x32e8,	// (0x0007911c) list_cale_time_pane_g5

0x0005,

0xf30c,	// (0x00085140) list_cale_time_pane_g_ParamLimits

0xf30c,	// (0x00085140) list_cale_time_pane_g

0x3303,	// (0x00079137) list_cale_time_pane_t1_ParamLimits

0x3303,	// (0x00079137) list_cale_time_pane_t1

0x332b,	// (0x0007915f) list_cale_time_pane_t2_ParamLimits

0x332b,	// (0x0007915f) list_cale_time_pane_t2

0x3a1c,	// (0x00079850) aid_blid_cardinal_pane

0x3a6a,	// (0x0007989e) compass_pane_t4

0x3353,	// (0x00079187) list_cale_time_pane_t4_ParamLimits

0x3353,	// (0x00079187) list_cale_time_pane_t4

0x3a78,	// (0x000798ac) compass_pane_t5

0x3a88,	// (0x000798bc) compass_pane_t6

0x3a96,	// (0x000798ca) compass_pane_t7

0x3b2e,	// (0x00079962) navi_pane_cc_t1

0x3d4d,	// (0x00079b81) aid_phob_thumbnail_center_pane

0x43e7,	// (0x0007a21b) main_postcard_pane_g4_ParamLimits

0x0002,

0xf319,	// (0x0008514d) list_cale_time_pane_t_ParamLimits

0xf319,	// (0x0008514d) list_cale_time_pane_t

0xacb0,	// (0x00080ae4) bg_popup_window_pane_cp02_ParamLimits

0xacb0,	// (0x00080ae4) bg_popup_window_pane_cp02

0x337b,	// (0x000791af) heading_pane_cp01_ParamLimits

0x337b,	// (0x000791af) heading_pane_cp01

0x3387,	// (0x000791bb) loc_req_pane_ParamLimits

0x3387,	// (0x000791bb) loc_req_pane

0x3397,	// (0x000791cb) loc_type_pane_ParamLimits

0x3397,	// (0x000791cb) loc_type_pane

0x33a9,	// (0x000791dd) loc_type_pane_t1_ParamLimits

0x33a9,	// (0x000791dd) loc_type_pane_t1

0x33bb,	// (0x000791ef) loc_type_pane_t2_ParamLimits

0x33bb,	// (0x000791ef) loc_type_pane_t2

0x33cd,	// (0x00079201) loc_type_pane_t3_ParamLimits

0x33cd,	// (0x00079201) loc_type_pane_t3

0x0002,

0xf320,	// (0x00085154) loc_type_pane_t_ParamLimits

0xf320,	// (0x00085154) loc_type_pane_t

0x33df,	// (0x00079213) list_loc_req_pane

0x33e9,	// (0x0007921d) scroll_pane_cp012

0x33f4,	// (0x00079228) list_single_loc_request_popup_menu_pane_ParamLimits

0x33f4,	// (0x00079228) list_single_loc_request_popup_menu_pane

0x3401,	// (0x00079235) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x3401,	// (0x00079235) list_single_loc_request_popup_menu_pane_g1

0x340d,	// (0x00079241) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x340d,	// (0x00079241) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf327,	// (0x0008515b) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf327,	// (0x0008515b) list_single_loc_request_popup_menu_pane_g

0x3419,	// (0x0007924d) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x3419,	// (0x0007924d) list_single_loc_request_popup_menu_pane_t1

0xee67,	// (0x00084c9b) bg_popup_window_pane_cp03_ParamLimits

0xee67,	// (0x00084c9b) bg_popup_window_pane_cp03

0x342f,	// (0x00079263) heading_loc_req_pane_ParamLimits

0x342f,	// (0x00079263) heading_loc_req_pane

0x343b,	// (0x0007926f) popup_dyc_status_message_window_g1_ParamLimits

0x343b,	// (0x0007926f) popup_dyc_status_message_window_g1

0x344f,	// (0x00079283) popup_dyc_status_message_window_t1_ParamLimits

0x344f,	// (0x00079283) popup_dyc_status_message_window_t1

0x3464,	// (0x00079298) popup_dyc_status_message_window_t2_ParamLimits

0x3464,	// (0x00079298) popup_dyc_status_message_window_t2

0x3479,	// (0x000792ad) popup_dyc_status_message_window_t3_ParamLimits

0x3479,	// (0x000792ad) popup_dyc_status_message_window_t3

0x0002,

0xf32c,	// (0x00085160) popup_dyc_status_message_window_t_ParamLimits

0xf32c,	// (0x00085160) popup_dyc_status_message_window_t

0xec0c,	// (0x00084a40) bg_heading_pane_cp01

0x3495,	// (0x000792c9) heading_loc_req_pane_g1

0x349d,	// (0x000792d1) heading_loc_req_pane_g2

0x34a5,	// (0x000792d9) heading_loc_req_pane_g3

0x0002,

0xf333,	// (0x00085167) heading_loc_req_pane_g

0x34ad,	// (0x000792e1) heading_loc_req_pane_t1

0x34d5,	// (0x00079309) bg_popup_sub_pane_cp01_ParamLimits

0x34d5,	// (0x00079309) bg_popup_sub_pane_cp01

0x34e3,	// (0x00079317) popup_cale_events_window_g1_ParamLimits

0x34e3,	// (0x00079317) popup_cale_events_window_g1

0x3503,	// (0x00079337) popup_cale_events_window_g2_ParamLimits

0x3503,	// (0x00079337) popup_cale_events_window_g2

0x0001,

0xf367,	// (0x0008519b) popup_cale_events_window_g_ParamLimits

0xf367,	// (0x0008519b) popup_cale_events_window_g

0x3523,	// (0x00079357) popup_cale_events_window_t1_ParamLimits

0x3523,	// (0x00079357) popup_cale_events_window_t1

0x3535,	// (0x00079369) popup_cale_events_window_t2_ParamLimits

0x3535,	// (0x00079369) popup_cale_events_window_t2

0x3573,	// (0x000793a7) popup_cale_events_window_t3_ParamLimits

0x3573,	// (0x000793a7) popup_cale_events_window_t3

0x35ad,	// (0x000793e1) popup_cale_events_window_t4_ParamLimits

0x35ad,	// (0x000793e1) popup_cale_events_window_t4

0x0003,

0xf36c,	// (0x000851a0) popup_cale_events_window_t_ParamLimits

0xf36c,	// (0x000851a0) popup_cale_events_window_t

0x35e3,	// (0x00079417) call_type_pane

0x35f3,	// (0x00079427) popup_call_status_window_g1

0x3607,	// (0x0007943b) popup_call_status_window_g2

0x361b,	// (0x0007944f) popup_call_status_window_g3

0x0002,

0xf375,	// (0x000851a9) popup_call_status_window_g

0x362b,	// (0x0007945f) call_type_pane_g1

0x3634,	// (0x00079468) call_type_pane_g2

0x0001,

0xf37c,	// (0x000851b0) call_type_pane_g

0xec0c,	// (0x00084a40) bg_popup_sub_pane_cp02

0x363d,	// (0x00079471) listscroll_popup_wml_pane

0x3645,	// (0x00079479) list_wml_pane

0x364f,	// (0x00079483) scroll_pane_cp013

0x365a,	// (0x0007948e) list_single_graphic_popup_wml_pane_ParamLimits

0x365a,	// (0x0007948e) list_single_graphic_popup_wml_pane

0xef8f,	// (0x00084dc3) list_single_graphic_popup_wml_pane_g1

0x366e,	// (0x000794a2) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf381,	// (0x000851b5) list_single_graphic_popup_wml_pane_g

0x3676,	// (0x000794aa) list_single_graphic_popup_wml_pane_t1

0x368c,	// (0x000794c0) aid_call_pane

0xee5f,	// (0x00084c93) popup_clock_analogue_window_g1

0xee5f,	// (0x00084c93) popup_clock_analogue_window_g2

0xb0ad,	// (0x00080ee1) popup_clock_analogue_window_g3

0xb0ad,	// (0x00080ee1) popup_clock_analogue_window_g4

0xef8f,	// (0x00084dc3) popup_clock_analogue_window_g5

0x0004,

0xf386,	// (0x000851ba) popup_clock_analogue_window_g

0xb0b5,	// (0x00080ee9) popup_clock_analogue_window_t1

0xb0c3,	// (0x00080ef7) clock_digital_number_pane_ParamLimits

0xb0c3,	// (0x00080ef7) clock_digital_number_pane

0xb0cf,	// (0x00080f03) clock_digital_number_pane_cp02_ParamLimits

0xb0cf,	// (0x00080f03) clock_digital_number_pane_cp02

0xb0db,	// (0x00080f0f) clock_digital_number_pane_cp03_ParamLimits

0xb0db,	// (0x00080f0f) clock_digital_number_pane_cp03

0xb0e7,	// (0x00080f1b) clock_digital_number_pane_cp04_ParamLimits

0xb0e7,	// (0x00080f1b) clock_digital_number_pane_cp04

0xb0f3,	// (0x00080f27) clock_digital_separator_pane_ParamLimits

0xb0f3,	// (0x00080f27) clock_digital_separator_pane

0xb0ff,	// (0x00080f33) popup_clock_digital_window_t1

0xef8f,	// (0x00084dc3) clock_digital_number_pane_g1

0xef8f,	// (0x00084dc3) clock_digital_number_pane_g2

0x0001,

0xf2f4,	// (0x00085128) clock_digital_number_pane_g

0xef8f,	// (0x00084dc3) clock_digital_separator_pane_g1

0xef8f,	// (0x00084dc3) clock_digital_separator_pane_g2

0x0001,

0xf2f4,	// (0x00085128) clock_digital_separator_pane_g

0xec0c,	// (0x00084a40) bg_popup_window_pane_cp04

0x3694,	// (0x000794c8) heading_pane_cp03

0x369c,	// (0x000794d0) listscroll_popup_gms_pane

0x36a4,	// (0x000794d8) grid_large_graphic_popup_pane

0x36ae,	// (0x000794e2) listscroll_popup_gms_pane_g1

0x36b6,	// (0x000794ea) listscroll_popup_gms_pane_g2

0x0001,

0xf391,	// (0x000851c5) listscroll_popup_gms_pane_g

0x275b,	// (0x0007858f) scroll_pane_cp014

0x36be,	// (0x000794f2) cell_large_graphic_popup_pane_ParamLimits

0x36be,	// (0x000794f2) cell_large_graphic_popup_pane

0x36d6,	// (0x0007950a) cell_large_graphic_popup_pane_g1_ParamLimits

0x36d6,	// (0x0007950a) cell_large_graphic_popup_pane_g1

0x36e2,	// (0x00079516) cell_large_graphic_popup_pane_g2_ParamLimits

0x36e2,	// (0x00079516) cell_large_graphic_popup_pane_g2

0x36ee,	// (0x00079522) cell_large_graphic_popup_pane_g3_ParamLimits

0x36ee,	// (0x00079522) cell_large_graphic_popup_pane_g3

0x36fb,	// (0x0007952f) cell_large_graphic_popup_pane_g4_ParamLimits

0x36fb,	// (0x0007952f) cell_large_graphic_popup_pane_g4

0x0003,

0xf396,	// (0x000851ca) cell_large_graphic_popup_pane_g_ParamLimits

0xf396,	// (0x000851ca) cell_large_graphic_popup_pane_g

0x370b,	// (0x0007953f) grid_highlight_pane_cp010

0xef8f,	// (0x00084dc3) bg_popup_call_pane_g1

0x3715,	// (0x00079549) list_single_graphic_popup_conf_pane_ParamLimits

0x3715,	// (0x00079549) list_single_graphic_popup_conf_pane

0x3727,	// (0x0007955b) list_highlight_pane_cp01

0x3730,	// (0x00079564) list_single_graphic_popup_conf_pane_g1

0x3738,	// (0x0007956c) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf39f,	// (0x000851d3) list_single_graphic_popup_conf_pane_g

0x3740,	// (0x00079574) list_single_graphic_popup_conf_pane_t1

0x374e,	// (0x00079582) linegrid_cams_pane_g1

0x3757,	// (0x0007958b) linegrid_cams_pane_g2

0xf0cd,	// (0x00084f01) linegrid_cams_pane_g3

0x3760,	// (0x00079594) linegrid_cams_pane_g4

0x3769,	// (0x0007959d) linegrid_cams_pane_g5

0x3772,	// (0x000795a6) linegrid_cams_pane_g6

0xf0d6,	// (0x00084f0a) linegrid_cams_pane_g7

0x0006,

0xf3a4,	// (0x000851d8) linegrid_cams_pane_g

0x377d,	// (0x000795b1) popup_clock_analogue_window

0x377d,	// (0x000795b1) popup_clock_digital_window

0xec0c,	// (0x00084a40) popup_phob_thumbnail_window

0xef8f,	// (0x00084dc3) call_video_uplink_pane_g1

0x3786,	// (0x000795ba) call_video_uplink_pane_g2

0x0001,

0xf3b3,	// (0x000851e7) call_video_uplink_pane_g

0x378e,	// (0x000795c2) video_uplink_pane

0x3796,	// (0x000795ca) mce_image_pane_g1

0x37a0,	// (0x000795d4) mce_image_pane_g2

0x37aa,	// (0x000795de) mce_image_pane_g3

0x37b4,	// (0x000795e8) mce_image_pane_g4

0x37bc,	// (0x000795f0) mce_image_pane_g5

0x0004,

0xf3b8,	// (0x000851ec) mce_image_pane_g

0x37c4,	// (0x000795f8) control_top_pane_stacon_cp01_ParamLimits

0x37c4,	// (0x000795f8) control_top_pane_stacon_cp01

0x37d8,	// (0x0007960c) uni_indicator_pane_stacon_cp01_ParamLimits

0x37d8,	// (0x0007960c) uni_indicator_pane_stacon_cp01

0x37e9,	// (0x0007961d) bg_popup_sub_pane_cp03

0x37f3,	// (0x00079627) chi_dic_find_pane

0x37fb,	// (0x0007962f) listscroll_chi_dic_pane

0x3804,	// (0x00079638) main_pane_chidic_g1

0x3817,	// (0x0007964b) chi_dic_find_pane_t1

0x3825,	// (0x00079659) find_chidic_pane

0x382e,	// (0x00079662) chi_dic_list_pane_ParamLimits

0x382e,	// (0x00079662) chi_dic_list_pane

0x383f,	// (0x00079673) scroll_pane_cp020

0x3847,	// (0x0007967b) find_chidic_pane_t1

0xec0c,	// (0x00084a40) input_focus_pane_cp06

0x3856,	// (0x0007968a) list_chi_dic_pane_ParamLimits

0x3856,	// (0x0007968a) list_chi_dic_pane

0x3868,	// (0x0007969c) list_chi_dic_pane_t1_ParamLimits

0x3868,	// (0x0007969c) list_chi_dic_pane_t1

0xec0c,	// (0x00084a40) list_highlight_pane_cp020

0x387b,	// (0x000796af) bg_cale_heading_pane_g1

0x3883,	// (0x000796b7) bg_cale_heading_pane_g2

0x388b,	// (0x000796bf) bg_cale_heading_pane_g3

0x3893,	// (0x000796c7) bg_cale_heading_pane_g4

0x389b,	// (0x000796cf) bg_cale_heading_pane_g5

0x38a3,	// (0x000796d7) bg_cale_heading_pane_g6

0x38ab,	// (0x000796df) bg_cale_heading_pane_g7

0x38b3,	// (0x000796e7) bg_cale_heading_pane_g8

0x38bb,	// (0x000796ef) bg_cale_heading_pane_g9

0x0008,

0xf3c3,	// (0x000851f7) bg_cale_heading_pane_g

0x387b,	// (0x000796af) bg_cale_side_pane_g1

0x38c3,	// (0x000796f7) bg_cale_side_pane_g2

0x38cd,	// (0x00079701) bg_cale_side_pane_g3

0x38d7,	// (0x0007970b) bg_cale_side_pane_g4

0x38e1,	// (0x00079715) bg_cale_side_pane_g5

0x38eb,	// (0x0007971f) bg_cale_side_pane_g6

0x38f5,	// (0x00079729) bg_cale_side_pane_g7

0x38ff,	// (0x00079733) bg_cale_side_pane_g8

0x3907,	// (0x0007973b) bg_cale_side_pane_g9

0x0008,

0xf3d6,	// (0x0008520a) bg_cale_side_pane_g

0x390f,	// (0x00079743) popup_call_status_window_ParamLimits

0x390f,	// (0x00079743) popup_call_status_window

0x395c,	// (0x00079790) stacon_top_pane

0x3964,	// (0x00079798) status_pane_ParamLimits

0x3964,	// (0x00079798) status_pane

0x3979,	// (0x000797ad) status_small_pane

0x3981,	// (0x000797b5) control_pane

0xec0c,	// (0x00084a40) stacon_bottom_pane

0x3989,	// (0x000797bd) list_single_mce_smart_pane_t1_ParamLimits

0x3989,	// (0x000797bd) list_single_mce_smart_pane_t1

0x399c,	// (0x000797d0) list_single_mce_smart_pane_t2_ParamLimits

0x399c,	// (0x000797d0) list_single_mce_smart_pane_t2

0x0001,

0xf3e9,	// (0x0008521d) list_single_mce_smart_pane_t_ParamLimits

0xf3e9,	// (0x0008521d) list_single_mce_smart_pane_t

0x39bb,	// (0x000797ef) compass_pane

0x39c6,	// (0x000797fa) main_location2_pane_t1

0x39dc,	// (0x00079810) main_location2_pane_t2

0x39f2,	// (0x00079826) main_location2_pane_t3

0x0003,

0xf3ee,	// (0x00085222) main_location2_pane_t

0x3a40,	// (0x00079874) compass_pane_g1_ParamLimits

0x3a40,	// (0x00079874) compass_pane_g1

0x3a4c,	// (0x00079880) compass_pane_t1

0x3a5b,	// (0x0007988f) compass_pane_t2

0x0005,

0xf3f7,	// (0x0008522b) compass_pane_t

0x3aa6,	// (0x000798da) text_secondary_cp61

0x3b25,	// (0x00079959) navi_pane_cams_g5

0x3ba1,	// (0x000799d5) navi_pane_im_t1

0x3baf,	// (0x000799e3) navi_pane_mp_g1_ParamLimits

0x3baf,	// (0x000799e3) navi_pane_mp_g1

0x3bc3,	// (0x000799f7) navi_pane_mp_g2_ParamLimits

0x3bc3,	// (0x000799f7) navi_pane_mp_g2

0x3bcf,	// (0x00079a03) navi_pane_mp_g3_ParamLimits

0x3bcf,	// (0x00079a03) navi_pane_mp_g3

0x0002,

0xf40b,	// (0x0008523f) navi_pane_mp_g_ParamLimits

0xf40b,	// (0x0008523f) navi_pane_mp_g

0x3bdb,	// (0x00079a0f) navi_pane_mp_t1

0x3be9,	// (0x00079a1d) navi_pane_mp_t2

0x0002,

0xf412,	// (0x00085246) navi_pane_mp_t

0x3c96,	// (0x00079aca) navi_pane_vt_g1

0x3bdb,	// (0x00079a0f) navi_pane_vt_t1

0x3c9e,	// (0x00079ad2) navi_slider_pane

0x3ca6,	// (0x00079ada) zooming_pane

0x3cae,	// (0x00079ae2) navi_slider_pane_g1

0xb11c,	// (0x00080f50) navi_slider_pane_g2

0x0006,

0xf419,	// (0x0008524d) navi_slider_pane_g

0x3cd2,	// (0x00079b06) aid_levels_zoom

0x3cda,	// (0x00079b0e) zooming_pane_g1

0x3ce2,	// (0x00079b16) zooming_pane_g2

0x3ce2,	// (0x00079b16) zooming_pane_g3

0x0002,

0xf428,	// (0x0008525c) zooming_pane_g

0x3cea,	// (0x00079b1e) level_10_zoom

0x3cf3,	// (0x00079b27) level_11_zoom

0x3cfc,	// (0x00079b30) level_1_zoom

0x3d05,	// (0x00079b39) level_2_zoom

0x3d0e,	// (0x00079b42) level_3_zoom

0x3d17,	// (0x00079b4b) level_4_zoom

0x3d20,	// (0x00079b54) level_5_zoom

0x3d29,	// (0x00079b5d) level_6_zoom

0x3d32,	// (0x00079b66) level_7_zoom

0x3d3b,	// (0x00079b6f) level_8_zoom

0x3d44,	// (0x00079b78) level_9_zoom

0x3d55,	// (0x00079b89) popup_phob_thumbnail_window_g1

0x3d5d,	// (0x00079b91) popup_phob_thumbnail_window_g2

0x0001,

0xf42f,	// (0x00085263) popup_phob_thumbnail_window_g

0xb669,	// (0x0008149d) level_1_location

0xb671,	// (0x000814a5) level_2_location

0xb679,	// (0x000814ad) level_3_location

0xb681,	// (0x000814b5) level_4_location

0x3ca6,	// (0x00079ada) level_5_location

0x3d65,	// (0x00079b99) mce_icon_pane_g1

0x3d6d,	// (0x00079ba1) mce_icon_pane_g2

0x0001,

0xf434,	// (0x00085268) mce_icon_pane_g

0x3d75,	// (0x00079ba9) main_mup_pane_g1_ParamLimits

0x3d75,	// (0x00079ba9) main_mup_pane_g1

0x3d8b,	// (0x00079bbf) main_mup_pane_g2_ParamLimits

0x3d8b,	// (0x00079bbf) main_mup_pane_g2

0x3da3,	// (0x00079bd7) main_mup_pane_g3_ParamLimits

0x3da3,	// (0x00079bd7) main_mup_pane_g3

0x3dbb,	// (0x00079bef) main_mup_pane_g4_ParamLimits

0x3dbb,	// (0x00079bef) main_mup_pane_g4

0x3dcd,	// (0x00079c01) main_mup_pane_g5_ParamLimits

0x3dcd,	// (0x00079c01) main_mup_pane_g5

0x3de9,	// (0x00079c1d) main_mup_pane_g6_ParamLimits

0x3de9,	// (0x00079c1d) main_mup_pane_g6

0x3e03,	// (0x00079c37) main_mup_pane_g7_ParamLimits

0x3e03,	// (0x00079c37) main_mup_pane_g7

0x3e21,	// (0x00079c55) main_mup_pane_g8_ParamLimits

0x3e21,	// (0x00079c55) main_mup_pane_g8

0x3e3f,	// (0x00079c73) main_mup_pane_g9_ParamLimits

0x3e3f,	// (0x00079c73) main_mup_pane_g9

0x3e5b,	// (0x00079c8f) main_mup_pane_g10_ParamLimits

0x3e5b,	// (0x00079c8f) main_mup_pane_g10

0x3e79,	// (0x00079cad) main_mup_pane_g11_ParamLimits

0x3e79,	// (0x00079cad) main_mup_pane_g11

0x3e93,	// (0x00079cc7) main_mup_pane_g12_ParamLimits

0x3e93,	// (0x00079cc7) main_mup_pane_g12

0x3ea9,	// (0x00079cdd) main_mup_pane_g13_ParamLimits

0x3ea9,	// (0x00079cdd) main_mup_pane_g13

0x000c,

0xf439,	// (0x0008526d) main_mup_pane_g_ParamLimits

0xf439,	// (0x0008526d) main_mup_pane_g

0x3ebd,	// (0x00079cf1) main_mup_pane_t1_ParamLimits

0x3ebd,	// (0x00079cf1) main_mup_pane_t1

0x3ed9,	// (0x00079d0d) main_mup_pane_t2_ParamLimits

0x3ed9,	// (0x00079d0d) main_mup_pane_t2

0x3ef1,	// (0x00079d25) main_mup_pane_t3_ParamLimits

0x3ef1,	// (0x00079d25) main_mup_pane_t3

0x3f09,	// (0x00079d3d) main_mup_pane_t4_ParamLimits

0x3f09,	// (0x00079d3d) main_mup_pane_t4

0x3f27,	// (0x00079d5b) main_mup_pane_t5_ParamLimits

0x3f27,	// (0x00079d5b) main_mup_pane_t5

0x3f3c,	// (0x00079d70) main_mup_pane_t6_ParamLimits

0x3f3c,	// (0x00079d70) main_mup_pane_t6

0x0005,

0xf454,	// (0x00085288) main_mup_pane_t_ParamLimits

0xf454,	// (0x00085288) main_mup_pane_t

0x3f4e,	// (0x00079d82) mup_progress_pane_ParamLimits

0x3f4e,	// (0x00079d82) mup_progress_pane

0x3f5a,	// (0x00079d8e) mup_visualizer_pane_ParamLimits

0x3f5a,	// (0x00079d8e) mup_visualizer_pane

0x3f8c,	// (0x00079dc0) mup_volume_pane_ParamLimits

0x3f8c,	// (0x00079dc0) mup_volume_pane

0x3faa,	// (0x00079dde) mup_visualizer_pane_g1_ParamLimits

0x3faa,	// (0x00079dde) mup_visualizer_pane_g1

0x3faa,	// (0x00079dde) mup_visualizer_pane_g2_ParamLimits

0x3faa,	// (0x00079dde) mup_visualizer_pane_g2

0x3a40,	// (0x00079874) mup_visualizer_pane_g3_ParamLimits

0x3a40,	// (0x00079874) mup_visualizer_pane_g3

0x0002,

0xf461,	// (0x00085295) mup_visualizer_pane_g_ParamLimits

0xf461,	// (0x00085295) mup_visualizer_pane_g

0xef8f,	// (0x00084dc3) mup_volume_pane_g1

0x3fc0,	// (0x00079df4) mup_volume_pane_g2

0x0001,

0xf468,	// (0x0008529c) mup_volume_pane_g

0xef8f,	// (0x00084dc3) mup_progress_pane_g1

0x3fc9,	// (0x00079dfd) mup_progress_pane_g2

0x3fd2,	// (0x00079e06) mup_progress_pane_g3

0x0002,

0xf46d,	// (0x000852a1) mup_progress_pane_g

0xec0c,	// (0x00084a40) bg_popup_window_pane_cp05

0x3fdb,	// (0x00079e0f) heading_pane_cp02_ParamLimits

0x3fdb,	// (0x00079e0f) heading_pane_cp02

0x3ff7,	// (0x00079e2b) list_popup_blid_pane

0x3fff,	// (0x00079e33) list_blid_sat_info_pane_ParamLimits

0x3fff,	// (0x00079e33) list_blid_sat_info_pane

0x4012,	// (0x00079e46) list_blid_sat_info_pane_g1

0x401a,	// (0x00079e4e) list_blid_sat_info_pane_t1

0x4134,	// (0x00079f68) mup_equalizer_pane_ParamLimits

0x4134,	// (0x00079f68) mup_equalizer_pane

0x4155,	// (0x00079f89) mup_equalizer_pane_cp1_ParamLimits

0x4155,	// (0x00079f89) mup_equalizer_pane_cp1

0x4176,	// (0x00079faa) mup_equalizer_pane_cp2_ParamLimits

0x4176,	// (0x00079faa) mup_equalizer_pane_cp2

0x419b,	// (0x00079fcf) mup_equalizer_pane_cp3_ParamLimits

0x419b,	// (0x00079fcf) mup_equalizer_pane_cp3

0x41c4,	// (0x00079ff8) mup_equalizer_pane_cp4_ParamLimits

0x41c4,	// (0x00079ff8) mup_equalizer_pane_cp4

0x41ed,	// (0x0007a021) mup_equalizer_pane_cp5

0x4205,	// (0x0007a039) mup_equalizer_pane_cp6

0x421d,	// (0x0007a051) mup_equalizer_pane_cp7

0xb583,	// (0x000813b7) bg_popup_call_poc_act_pane_g9

0xb58b,	// (0x000813bf) bg_popup_call_poc_act_pane_g10

0xb593,	// (0x000813c7) bg_popup_call_poc_act_pane_g11

0x000a,

0xee67,	// (0x00084c9b) mup_scale_pane

0xef8f,	// (0x00084dc3) mup_scale_pane_g1

0x4235,	// (0x0007a069) mup_scale_pane_g2

0x0006,

0xf489,	// (0x000852bd) mup_scale_pane_g

0x426b,	// (0x0007a09f) msg_data_pane

0x4273,	// (0x0007a0a7) scroll_pane_cp017

0x09bd,	// (0x000767f1) bg_list_pane_cp04_ParamLimits

0x09bd,	// (0x000767f1) bg_list_pane_cp04

0x427b,	// (0x0007a0af) msg_data_pane_g1

0x4283,	// (0x0007a0b7) msg_data_pane_g2

0x428d,	// (0x0007a0c1) msg_data_pane_g3

0x4297,	// (0x0007a0cb) msg_data_pane_g4

0x429f,	// (0x0007a0d3) msg_data_pane_g5

0x42a7,	// (0x0007a0db) msg_data_pane_g6

0x42af,	// (0x0007a0e3) msg_data_pane_g7

0x0006,

0xf498,	// (0x000852cc) msg_data_pane_g

0x09dd,	// (0x00076811) msg_text_pane_ParamLimits

0x09dd,	// (0x00076811) msg_text_pane

0x42b7,	// (0x0007a0eb) qrid_highlight_pane_cp011_ParamLimits

0x42b7,	// (0x0007a0eb) qrid_highlight_pane_cp011

0xec0c,	// (0x00084a40) msg_body_pane

0xec0c,	// (0x00084a40) msg_header_pane

0x42d6,	// (0x0007a10a) input_focus_pane_cp07

0x0a17,	// (0x0007684b) msg_header_pane_t1_ParamLimits

0x0a17,	// (0x0007684b) msg_header_pane_t1

0xb136,	// (0x00080f6a) msg_header_pane_t2_ParamLimits

0xb136,	// (0x00080f6a) msg_header_pane_t2

0x0001,

0xf4ac,	// (0x000852e0) msg_header_pane_t_ParamLimits

0xf4ac,	// (0x000852e0) msg_header_pane_t

0x42eb,	// (0x0007a11f) msg_body_pane_g1

0xb148,	// (0x00080f7c) msg_body_pane_t1_ParamLimits

0xb148,	// (0x00080f7c) msg_body_pane_t1

0xb179,	// (0x00080fad) msg_body_pane_t2_ParamLimits

0xb179,	// (0x00080fad) msg_body_pane_t2

0xb18b,	// (0x00080fbf) msg_body_pane_t3_ParamLimits

0xb18b,	// (0x00080fbf) msg_body_pane_t3

0x0002,

0xf4b1,	// (0x000852e5) msg_body_pane_t_ParamLimits

0xf4b1,	// (0x000852e5) msg_body_pane_t

0x432d,	// (0x0007a161) main_viewer_pane_g1_ParamLimits

0x432d,	// (0x0007a161) main_viewer_pane_g1

0x433b,	// (0x0007a16f) main_viewer_pane_g2_ParamLimits

0x433b,	// (0x0007a16f) main_viewer_pane_g2

0x4349,	// (0x0007a17d) main_viewer_pane_g3_ParamLimits

0x4349,	// (0x0007a17d) main_viewer_pane_g3

0x4358,	// (0x0007a18c) main_viewer_pane_g4_ParamLimits

0x4358,	// (0x0007a18c) main_viewer_pane_g4

0xb1b5,	// (0x00080fe9) main_viewer_pane_g5_ParamLimits

0xb1b5,	// (0x00080fe9) main_viewer_pane_g5

0xb1b5,	// (0x00080fe9) main_viewer_pane_g7_ParamLimits

0xb1b5,	// (0x00080fe9) main_viewer_pane_g7

0xb1c7,	// (0x00080ffb) main_viewer_pane_g8_ParamLimits

0xb1c7,	// (0x00080ffb) main_viewer_pane_g8

0x0007,

0xf4c1,	// (0x000852f5) main_viewer_pane_g_ParamLimits

0xf4c1,	// (0x000852f5) main_viewer_pane_g

0x4367,	// (0x0007a19b) viewer_content_pane_ParamLimits

0x4367,	// (0x0007a19b) viewer_content_pane

0x43a4,	// (0x0007a1d8) main_postcard_pane_g1_ParamLimits

0x43a4,	// (0x0007a1d8) main_postcard_pane_g1

0x43ba,	// (0x0007a1ee) main_postcard_pane_g2_ParamLimits

0x43ba,	// (0x0007a1ee) main_postcard_pane_g2

0x43d0,	// (0x0007a204) main_postcard_pane_g3_ParamLimits

0x43d0,	// (0x0007a204) main_postcard_pane_g3

0x0005,

0xf4d2,	// (0x00085306) main_postcard_pane_g_ParamLimits

0xf4d2,	// (0x00085306) main_postcard_pane_g

0x43e7,	// (0x0007a21b) main_postcard_pane_g4

0xb7b3,	// (0x000815e7) smil_status_volume_pane_g2

0x442a,	// (0x0007a25e) postcard_pane_ParamLimits

0x442a,	// (0x0007a25e) postcard_pane

0x447a,	// (0x0007a2ae) postcard_pane_g1_ParamLimits

0x447a,	// (0x0007a2ae) postcard_pane_g1

0x4488,	// (0x0007a2bc) postcard_pane_g2_ParamLimits

0x4488,	// (0x0007a2bc) postcard_pane_g2

0x4494,	// (0x0007a2c8) postcard_pane_g3_ParamLimits

0x4494,	// (0x0007a2c8) postcard_pane_g3

0x44a0,	// (0x0007a2d4) postcard_pane_g4_ParamLimits

0x44a0,	// (0x0007a2d4) postcard_pane_g4

0x44ae,	// (0x0007a2e2) postcard_pane_g5_ParamLimits

0x44ae,	// (0x0007a2e2) postcard_pane_g5

0x44c0,	// (0x0007a2f4) postcard_pane_g6_ParamLimits

0x44c0,	// (0x0007a2f4) postcard_pane_g6

0x447a,	// (0x0007a2ae) postcard_pane_g7_ParamLimits

0x447a,	// (0x0007a2ae) postcard_pane_g7

0x0006,

0xf4df,	// (0x00085313) postcard_pane_g_ParamLimits

0xf4df,	// (0x00085313) postcard_pane_g

0x44d8,	// (0x0007a30c) main_mp2_pane_g1_ParamLimits

0x44d8,	// (0x0007a30c) main_mp2_pane_g1

0x44e6,	// (0x0007a31a) main_mp2_pane_g2_ParamLimits

0x44e6,	// (0x0007a31a) main_mp2_pane_g2

0x44f2,	// (0x0007a326) main_mp2_pane_g3_ParamLimits

0x44f2,	// (0x0007a326) main_mp2_pane_g3

0x0002,

0xf4ee,	// (0x00085322) main_mp2_pane_g_ParamLimits

0xf4ee,	// (0x00085322) main_mp2_pane_g

0x44fe,	// (0x0007a332) main_mp2_pane_t1_ParamLimits

0x44fe,	// (0x0007a332) main_mp2_pane_t1

0x4515,	// (0x0007a349) main_mp2_pane_t2_ParamLimits

0x4515,	// (0x0007a349) main_mp2_pane_t2

0x4529,	// (0x0007a35d) main_mp2_pane_t3_ParamLimits

0x4529,	// (0x0007a35d) main_mp2_pane_t3

0x0002,

0xf4f5,	// (0x00085329) main_mp2_pane_t_ParamLimits

0xf4f5,	// (0x00085329) main_mp2_pane_t

0x453b,	// (0x0007a36f) pec_content_pane_ParamLimits

0x453b,	// (0x0007a36f) pec_content_pane

0x275b,	// (0x0007858f) scroll_pane_cp015

0x454d,	// (0x0007a381) pec_attribute_pane_ParamLimits

0x454d,	// (0x0007a381) pec_attribute_pane

0x455d,	// (0x0007a391) pec_content_pane_g1_ParamLimits

0x455d,	// (0x0007a391) pec_content_pane_g1

0x4569,	// (0x0007a39d) pec_content_pane_t1_ParamLimits

0x4569,	// (0x0007a39d) pec_content_pane_t1

0x457b,	// (0x0007a3af) pec_content_pane_t2_ParamLimits

0x457b,	// (0x0007a3af) pec_content_pane_t2

0x0001,

0xf4fc,	// (0x00085330) pec_content_pane_t_ParamLimits

0xf4fc,	// (0x00085330) pec_content_pane_t

0x458d,	// (0x0007a3c1) list_single_graphic_pane_cp01_ParamLimits

0x458d,	// (0x0007a3c1) list_single_graphic_pane_cp01

0xee67,	// (0x00084c9b) bg_popup_sub_pane_cp04

0x45a7,	// (0x0007a3db) popup_mup_playback_window_g1

0x45b3,	// (0x0007a3e7) popup_mup_playback_window_t1

0x45c8,	// (0x0007a3fc) popup_mup_playback_window_t2

0x0001,

0xf501,	// (0x00085335) popup_mup_playback_window_t

0x461d,	// (0x0007a451) main_image_pane_g1_ParamLimits

0x461d,	// (0x0007a451) main_image_pane_g1

0x46fa,	// (0x0007a52e) scroll_pane_cp018_ParamLimits

0x46fa,	// (0x0007a52e) scroll_pane_cp018

0x4712,	// (0x0007a546) scroll_pane_cp016_ParamLimits

0x4712,	// (0x0007a546) scroll_pane_cp016

0x4746,	// (0x0007a57a) smil2_image_pane_ParamLimits

0x4746,	// (0x0007a57a) smil2_image_pane

0x477c,	// (0x0007a5b0) smil2_root_pane_ParamLimits

0x477c,	// (0x0007a5b0) smil2_root_pane

0x47b4,	// (0x0007a5e8) smil2_text_pane_ParamLimits

0x47b4,	// (0x0007a5e8) smil2_text_pane

0xec0c,	// (0x00084a40) bg_list_pane_cp06

0x484c,	// (0x0007a680) grid_radio_pane

0xec0c,	// (0x00084a40) bg_popup_window_pane_cp06

0x4856,	// (0x0007a68a) main_fmradio_pane_t1

0x3694,	// (0x000794c8) heading_pane_cp04

0x4864,	// (0x0007a698) main_fmradio_pane_t2

0xb59b,	// (0x000813cf) popup_cale_lunar_info_window_g1

0x4872,	// (0x0007a6a6) main_fmradio_pane_t3

0xb5a3,	// (0x000813d7) popup_cale_lunar_info_window_g2

0x4882,	// (0x0007a6b6) main_fmradio_pane_t4

0x0001,

0x4890,	// (0x0007a6c4) main_fmradio_pane_t5

0x0004,

0xf5dc,	// (0x00085410) popup_cale_lunar_info_window_g

0xf516,	// (0x0008534a) main_fmradio_pane_t

0x489e,	// (0x0007a6d2) wait_bar_pane_cp03

0x48a6,	// (0x0007a6da) cell_fmradio_pane_ParamLimits

0x48a6,	// (0x0007a6da) cell_fmradio_pane

0x447a,	// (0x0007a2ae) cell_fmradio_pane_g1_ParamLimits

0x447a,	// (0x0007a2ae) cell_fmradio_pane_g1

0xec0c,	// (0x00084a40) grid_highlight_pane_cp011

0x48bb,	// (0x0007a6ef) poc_content_pane_ParamLimits

0x48bb,	// (0x0007a6ef) poc_content_pane

0x48cd,	// (0x0007a701) scroll_pane_cp019

0x48d5,	// (0x0007a709) popup_call_poc_act_window_ParamLimits

0x48d5,	// (0x0007a709) popup_call_poc_act_window

0x48f9,	// (0x0007a72d) popup_call_poc_inact_window_ParamLimits

0x48f9,	// (0x0007a72d) popup_call_poc_inact_window

0xf5b3,	// (0x000853e7) bg_popup_call_poc_act_pane_g

0xb513,	// (0x00081347) bg_popup_call_poc_inact_pane_g1

0xb51b,	// (0x0008134f) bg_popup_call_poc_inact_pane_g2

0x4912,	// (0x0007a746) popup_call_poc_act_window_g2

0xb523,	// (0x00081357) bg_popup_call_poc_inact_pane_g3

0xb52b,	// (0x0008135f) bg_popup_call_poc_inact_pane_g4

0xb533,	// (0x00081367) bg_popup_call_poc_inact_pane_g5

0x491a,	// (0x0007a74e) popup_call_poc_act_window_t1_ParamLimits

0x491a,	// (0x0007a74e) popup_call_poc_act_window_t1

0x4942,	// (0x0007a776) popup_call_poc_act_window_t2_ParamLimits

0x4942,	// (0x0007a776) popup_call_poc_act_window_t2

0x496a,	// (0x0007a79e) popup_call_poc_act_window_t3_ParamLimits

0x496a,	// (0x0007a79e) popup_call_poc_act_window_t3

0x4992,	// (0x0007a7c6) popup_call_poc_act_window_t4_ParamLimits

0x4992,	// (0x0007a7c6) popup_call_poc_act_window_t4

0x0003,

0xf521,	// (0x00085355) popup_call_poc_act_window_t_ParamLimits

0xf521,	// (0x00085355) popup_call_poc_act_window_t

0xb53b,	// (0x0008136f) bg_popup_call_poc_inact_pane_g6

0xb543,	// (0x00081377) bg_popup_call_poc_inact_pane_g7

0xb54b,	// (0x0008137f) bg_popup_call_poc_inact_pane_g8

0x49a4,	// (0x0007a7d8) popup_call_poc_inact_window_g2

0xb553,	// (0x00081387) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a0,	// (0x000853d4) bg_popup_call_poc_inact_pane_g

0x49ac,	// (0x0007a7e0) popup_call_poc_inact_window_t1_ParamLimits

0x49ac,	// (0x0007a7e0) popup_call_poc_inact_window_t1

0x49c1,	// (0x0007a7f5) popup_call_poc_inact_window_t2_ParamLimits

0x49c1,	// (0x0007a7f5) popup_call_poc_inact_window_t2

0x49d6,	// (0x0007a80a) popup_call_poc_inact_window_t3_ParamLimits

0x49d6,	// (0x0007a80a) popup_call_poc_inact_window_t3

0x0002,

0xf52a,	// (0x0008535e) popup_call_poc_inact_window_t_ParamLimits

0xf52a,	// (0x0008535e) popup_call_poc_inact_window_t

0xb713,	// (0x00081547) context_pane_ParamLimits

0x5d53,	// (0x0007bb87) signal_pane_ParamLimits

0x3ca6,	// (0x00079ada) main_call2_pane

0xb701,	// (0x00081535) popup_phob_thumbnail2_window_ParamLimits

0xb701,	// (0x00081535) popup_phob_thumbnail2_window

0xb19d,	// (0x00080fd1) aid_hotspot_pointer_arrow_pane

0xb1a5,	// (0x00080fd9) aid_hotspot_pointer_hand_pane

0x5813,	// (0x0007b647) phob_pre_status_pane_g5

0x1eb1,	// (0x00077ce5) cams_zoom_pane_ParamLimits

0x1ec0,	// (0x00077cf4) image_vga_pane_ParamLimits

0x1eda,	// (0x00077d0e) main_camera_pane_g1_ParamLimits

0x1eec,	// (0x00077d20) main_camera_pane_g2_ParamLimits

0x1efc,	// (0x00077d30) main_camera_pane_g3_ParamLimits

0x1f10,	// (0x00077d44) main_camera_pane_g4_ParamLimits

0x1f24,	// (0x00077d58) main_camera_pane_g5_ParamLimits

0x1f38,	// (0x00077d6c) main_camera_pane_g6_ParamLimits

0x1f4c,	// (0x00077d80) main_camera_pane_g7_ParamLimits

0xf229,	// (0x0008505d) main_camera_pane_g_ParamLimits

0x1f6c,	// (0x00077da0) main_camera_pane_t1_ParamLimits

0x1f82,	// (0x00077db6) main_camera_pane_t2_ParamLimits

0xf23a,	// (0x0008506e) main_camera_pane_t_ParamLimits

0xee67,	// (0x00084c9b) bg_popup_preview_window_pane_cp01_ParamLimits

0xee67,	// (0x00084c9b) bg_popup_preview_window_pane_cp01

0x49eb,	// (0x0007a81f) popup_phob_thumbnail2_window_g1_ParamLimits

0x49eb,	// (0x0007a81f) popup_phob_thumbnail2_window_g1

0xec0c,	// (0x00084a40) call2_cli_visual_pane

0x4a12,	// (0x0007a846) popup_call2_audio_conf_window_ParamLimits

0x4a12,	// (0x0007a846) popup_call2_audio_conf_window

0x4a3a,	// (0x0007a86e) popup_call2_audio_first_window_ParamLimits

0x4a3a,	// (0x0007a86e) popup_call2_audio_first_window

0x4ad0,	// (0x0007a904) popup_call2_audio_in_window_ParamLimits

0x4ad0,	// (0x0007a904) popup_call2_audio_in_window

0x4b1c,	// (0x0007a950) popup_call2_audio_out_window_ParamLimits

0x4b1c,	// (0x0007a950) popup_call2_audio_out_window

0x4b8e,	// (0x0007a9c2) popup_call2_audio_second_window_ParamLimits

0x4b8e,	// (0x0007a9c2) popup_call2_audio_second_window

0x4bf4,	// (0x0007aa28) popup_call2_audio_wait_window_ParamLimits

0x4bf4,	// (0x0007aa28) popup_call2_audio_wait_window

0xec0c,	// (0x00084a40) bg_popup_call2_act_pane_cp03

0xee49,	// (0x00084c7d) list_conf_pane_cp

0x4c2e,	// (0x0007aa62) popup_call2_audio_conf_window_t1

0x4c3c,	// (0x0007aa70) list_single_graphic_popup_conf2_pane_ParamLimits

0x4c3c,	// (0x0007aa70) list_single_graphic_popup_conf2_pane

0x3727,	// (0x0007955b) list_highlight_pane_cp04

0x4c4f,	// (0x0007aa83) list_single_graphic_popup_conf2_pane_g1

0x3738,	// (0x0007956c) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf531,	// (0x00085365) list_single_graphic_popup_conf2_pane_g

0x4c59,	// (0x0007aa8d) list_single_graphic_popup_conf2_pane_t1

0x4c67,	// (0x0007aa9b) bg_popup_call2_act_pane_cp01_ParamLimits

0x4c67,	// (0x0007aa9b) bg_popup_call2_act_pane_cp01

0x4cf1,	// (0x0007ab25) call_type_pane_cp05_ParamLimits

0x4cf1,	// (0x0007ab25) call_type_pane_cp05

0x4d45,	// (0x0007ab79) popup_call2_audio_second_window_g1_ParamLimits

0x4d45,	// (0x0007ab79) popup_call2_audio_second_window_g1

0x4d99,	// (0x0007abcd) popup_call2_audio_second_window_g2_ParamLimits

0x4d99,	// (0x0007abcd) popup_call2_audio_second_window_g2

0x0002,

0xf536,	// (0x0008536a) popup_call2_audio_second_window_g_ParamLimits

0xf536,	// (0x0008536a) popup_call2_audio_second_window_g

0x4dfe,	// (0x0007ac32) popup_call2_audio_second_window_t1_ParamLimits

0x4dfe,	// (0x0007ac32) popup_call2_audio_second_window_t1

0x4eb9,	// (0x0007aced) popup_call2_audio_second_window_t2_ParamLimits

0x4eb9,	// (0x0007aced) popup_call2_audio_second_window_t2

0x4f0c,	// (0x0007ad40) popup_call2_audio_second_window_t3_ParamLimits

0x4f0c,	// (0x0007ad40) popup_call2_audio_second_window_t3

0x0003,

0xf53d,	// (0x00085371) popup_call2_audio_second_window_t_ParamLimits

0xf53d,	// (0x00085371) popup_call2_audio_second_window_t

0xec0c,	// (0x00084a40) bg_popup_call2_in_pane_cp02

0xec16,	// (0x00084a4a) call_type_pane_cp04

0xec1e,	// (0x00084a52) popup_call2_audio_wait_window_g1

0xec26,	// (0x00084a5a) popup_call2_audio_wait_window_g2

0x0001,

0xf116,	// (0x00084f4a) popup_call2_audio_wait_window_g

0xec2e,	// (0x00084a62) popup_call2_audio_wait_window_t3

0x4fff,	// (0x0007ae33) bg_popup_call2_act_pane_ParamLimits

0x4fff,	// (0x0007ae33) bg_popup_call2_act_pane

0x50bf,	// (0x0007aef3) call_type_pane_cp03_ParamLimits

0x50bf,	// (0x0007aef3) call_type_pane_cp03

0x5123,	// (0x0007af57) popup_call2_audio_first_window_g1_ParamLimits

0x5123,	// (0x0007af57) popup_call2_audio_first_window_g1

0x5193,	// (0x0007afc7) popup_call2_audio_first_window_g2_ParamLimits

0x5193,	// (0x0007afc7) popup_call2_audio_first_window_g2

0x3faa,	// (0x00079dde) popup_call2_audio_first_window_g3_ParamLimits

0x3faa,	// (0x00079dde) popup_call2_audio_first_window_g3

0x0004,

0xf546,	// (0x0008537a) popup_call2_audio_first_window_g_ParamLimits

0xf546,	// (0x0008537a) popup_call2_audio_first_window_g

0x5271,	// (0x0007b0a5) popup_call2_audio_first_window_t1_ParamLimits

0x5271,	// (0x0007b0a5) popup_call2_audio_first_window_t1

0x5374,	// (0x0007b1a8) popup_call2_audio_first_window_t4_ParamLimits

0x5374,	// (0x0007b1a8) popup_call2_audio_first_window_t4

0x5457,	// (0x0007b28b) popup_call2_audio_first_window_t5_ParamLimits

0x5457,	// (0x0007b28b) popup_call2_audio_first_window_t5

0x0003,

0xf551,	// (0x00085385) popup_call2_audio_first_window_t_ParamLimits

0xf551,	// (0x00085385) popup_call2_audio_first_window_t

0xee5f,	// (0x00084c93) bg_popup_call2_act_pane_g1

0xb5ad,	// (0x000813e1) popup_cale_lunar_info_window_t1

0xb5bb,	// (0x000813ef) popup_cale_lunar_info_window_t2

0xb5c9,	// (0x000813fd) popup_cale_lunar_info_window_t3

0xec0c,	// (0x00084a40) bg_popup_call2_bubble_pane

0x5558,	// (0x0007b38c) bg_popup_call2_in_pane_cp01_ParamLimits

0x5558,	// (0x0007b38c) bg_popup_call2_in_pane_cp01

0xad35,	// (0x00080b69) call_type_pane_cp02

0x55a0,	// (0x0007b3d4) popup_call2_audio_out_window_g1_ParamLimits

0x55a0,	// (0x0007b3d4) popup_call2_audio_out_window_g1

0x55cc,	// (0x0007b400) popup_call2_audio_out_window_g2_ParamLimits

0x55cc,	// (0x0007b400) popup_call2_audio_out_window_g2

0x55f4,	// (0x0007b428) popup_call2_audio_out_window_g3_ParamLimits

0x55f4,	// (0x0007b428) popup_call2_audio_out_window_g3

0x0003,

0xf55a,	// (0x0008538e) popup_call2_audio_out_window_g_ParamLimits

0xf55a,	// (0x0008538e) popup_call2_audio_out_window_g

0x562f,	// (0x0007b463) popup_call2_audio_out_window_t1_ParamLimits

0x562f,	// (0x0007b463) popup_call2_audio_out_window_t1

0x568e,	// (0x0007b4c2) popup_call2_audio_out_window_t2_ParamLimits

0x568e,	// (0x0007b4c2) popup_call2_audio_out_window_t2

0x56e2,	// (0x0007b516) popup_call2_audio_out_window_t3_ParamLimits

0x56e2,	// (0x0007b516) popup_call2_audio_out_window_t3

0xb1df,	// (0x00081013) popup_call2_audio_out_window_t4_ParamLimits

0xb1df,	// (0x00081013) popup_call2_audio_out_window_t4

0xb1f5,	// (0x00081029) popup_call2_audio_out_window_t5_ParamLimits

0xb1f5,	// (0x00081029) popup_call2_audio_out_window_t5

0x0005,

0xf563,	// (0x00085397) popup_call2_audio_out_window_t_ParamLimits

0xf563,	// (0x00085397) popup_call2_audio_out_window_t

0xb259,	// (0x0008108d) bg_popup_call2_in_pane_ParamLimits

0xb259,	// (0x0008108d) bg_popup_call2_in_pane

0xb2b5,	// (0x000810e9) popup_call2_audio_in_window_g1_ParamLimits

0xb2b5,	// (0x000810e9) popup_call2_audio_in_window_g1

0xb2ed,	// (0x00081121) popup_call2_audio_in_window_g2_ParamLimits

0xb2ed,	// (0x00081121) popup_call2_audio_in_window_g2

0xb325,	// (0x00081159) popup_call2_audio_in_window_g3_ParamLimits

0xb325,	// (0x00081159) popup_call2_audio_in_window_g3

0x0003,

0xf570,	// (0x000853a4) popup_call2_audio_in_window_g_ParamLimits

0xf570,	// (0x000853a4) popup_call2_audio_in_window_g

0xb37d,	// (0x000811b1) popup_call2_audio_in_window_t1_ParamLimits

0xb37d,	// (0x000811b1) popup_call2_audio_in_window_t1

0xb3fd,	// (0x00081231) popup_call2_audio_in_window_t2_ParamLimits

0xb3fd,	// (0x00081231) popup_call2_audio_in_window_t2

0xb47d,	// (0x000812b1) popup_call2_audio_in_window_t3_ParamLimits

0xb47d,	// (0x000812b1) popup_call2_audio_in_window_t3

0xb497,	// (0x000812cb) popup_call2_audio_in_window_t4_ParamLimits

0xb497,	// (0x000812cb) popup_call2_audio_in_window_t4

0xb4a9,	// (0x000812dd) popup_call2_audio_in_window_t5_ParamLimits

0xb4a9,	// (0x000812dd) popup_call2_audio_in_window_t5

0xb4be,	// (0x000812f2) popup_call2_audio_in_window_t6_ParamLimits

0xb4be,	// (0x000812f2) popup_call2_audio_in_window_t6

0x0005,

0xf579,	// (0x000853ad) popup_call2_audio_in_window_t_ParamLimits

0xf579,	// (0x000853ad) popup_call2_audio_in_window_t

0xee5f,	// (0x00084c93) bg_popup_call2_in_pane_g1

0xb5d7,	// (0x0008140b) popup_cale_lunar_info_window_t4

0x0003,

0xf5e1,	// (0x00085415) popup_cale_lunar_info_window_t

0xee67,	// (0x00084c9b) bg_popup_call2_rect_pane_ParamLimits

0xee67,	// (0x00084c9b) bg_popup_call2_rect_pane

0xec0c,	// (0x00084a40) call2_cli_visual_graphic_pane

0xec0c,	// (0x00084a40) call2_cli_visual_text_pane

0xb7c6,	// (0x000815fa) smil_status_volume_pane_g3

0x0002,

0xef8f,	// (0x00084dc3) call2_cli_visual_graphic_pane_g1

0xef8f,	// (0x00084dc3) call2_cli_visual_graphic_pane_g2

0xef8f,	// (0x00084dc3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf586,	// (0x000853ba) call2_cli_visual_graphic_pane_g

0xb4d3,	// (0x00081307) bg_popup_call2_rect_pane_g1

0xf02d,	// (0x00084e61) bg_popup_call2_rect_pane_g2

0xb4db,	// (0x0008130f) bg_popup_call2_rect_pane_g3

0xb4e3,	// (0x00081317) bg_popup_call2_rect_pane_g4

0xb4eb,	// (0x0008131f) bg_popup_call2_rect_pane_g5

0xb4f3,	// (0x00081327) bg_popup_call2_rect_pane_g6

0xb4fb,	// (0x0008132f) bg_popup_call2_rect_pane_g7

0xb503,	// (0x00081337) bg_popup_call2_rect_pane_g8

0xb50b,	// (0x0008133f) bg_popup_call2_rect_pane_g9

0x0008,

0xf58d,	// (0x000853c1) bg_popup_call2_rect_pane_g

0xb513,	// (0x00081347) bg_popup_call2_bubble_pane_g1

0xb51b,	// (0x0008134f) bg_popup_call2_bubble_pane_g2

0xb523,	// (0x00081357) bg_popup_call2_bubble_pane_g3

0xb52b,	// (0x0008135f) bg_popup_call2_bubble_pane_g4

0xb533,	// (0x00081367) bg_popup_call2_bubble_pane_g5

0xb53b,	// (0x0008136f) bg_popup_call2_bubble_pane_g6

0xb543,	// (0x00081377) bg_popup_call2_bubble_pane_g7

0xb54b,	// (0x0008137f) bg_popup_call2_bubble_pane_g8

0xb553,	// (0x00081387) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a0,	// (0x000853d4) bg_popup_call2_bubble_pane_g

0x1ab0,	// (0x000778e4) aid_cale_week_size_cell_pane

0x1f9c,	// (0x00077dd0) aid_cams_cif_uncrop_pane_ParamLimits

0x1f9c,	// (0x00077dd0) aid_cams_cif_uncrop_pane

0x2193,	// (0x00077fc7) aid_cams_size_cell_ParamLimits

0x2193,	// (0x00077fc7) aid_cams_size_cell

0x21a7,	// (0x00077fdb) grid_cams_pane_ParamLimits

0x21c1,	// (0x00077ff5) linegrid_cams_pane_ParamLimits

0x22ee,	// (0x00078122) call_video_pane_t1

0x2308,	// (0x0007813c) call_video_pane_t2

0x0001,

0xf28d,	// (0x000850c1) call_video_pane_t

0x29bb,	// (0x000787ef) aid_cale_month_size_cell_pane_ParamLimits

0x29bb,	// (0x000787ef) aid_cale_month_size_cell_pane

0xf62a,	// (0x0008545e) smil_status_volume_pane_g

0xb7d3,	// (0x00081607) volume_smil_pane_ParamLimits

0xab9c,	// (0x000809d0) aid_popup2_width_pane

0x1a15,	// (0x00077849) cell_qdial_pane_g4_ParamLimits

0x1a15,	// (0x00077849) cell_qdial_pane_g4

0x3a1c,	// (0x00079850) aid_blid_cardinal_pane_ParamLimits

0x3a2c,	// (0x00079860) aid_blid_destination_pane_ParamLimits

0x3a2c,	// (0x00079860) aid_blid_destination_pane

0xee67,	// (0x00084c9b) bg_popup_call_poc_act_pane_ParamLimits

0xee67,	// (0x00084c9b) bg_popup_call_poc_act_pane

0xee67,	// (0x00084c9b) bg_popup_call_poc_inact_pane_ParamLimits

0xee67,	// (0x00084c9b) bg_popup_call_poc_inact_pane

0xb55b,	// (0x0008138f) bg_popup_call_poc_act_pane_g1

0xb563,	// (0x00081397) bg_popup_call_poc_act_pane_g2

0xb56b,	// (0x0008139f) bg_popup_call_poc_act_pane_g3

0xb52b,	// (0x0008135f) bg_popup_call_poc_act_pane_g4

0xb533,	// (0x00081367) bg_popup_call_poc_act_pane_g5

0xb573,	// (0x000813a7) bg_popup_call_poc_act_pane_g6

0xb543,	// (0x00081377) bg_popup_call_poc_act_pane_g7

0xb57b,	// (0x000813af) bg_popup_call_poc_act_pane_g8

0xec0c,	// (0x00084a40) main_usb_pane

0xb6d8,	// (0x0008150c) popup_cale_lunar_info_window

0x2637,	// (0x0007846b) im_reading_pane_t1_ParamLimits

0x2676,	// (0x000784aa) list_im_pane_ParamLimits

0x2687,	// (0x000784bb) scroll_pane_cp07_ParamLimits

0xec0c,	// (0x00084a40) grid_highlight_pane_cp012

0xee67,	// (0x00084c9b) mup_scale_pane_ParamLimits

0x447a,	// (0x0007a2ae) main_usb_pane_g1_ParamLimits

0x447a,	// (0x0007a2ae) main_usb_pane_g1

0x571f,	// (0x0007b553) main_usb_pane_g2_ParamLimits

0x571f,	// (0x0007b553) main_usb_pane_g2

0x0001,

0xf5ca,	// (0x000853fe) main_usb_pane_g_ParamLimits

0xf5ca,	// (0x000853fe) main_usb_pane_g

0x5735,	// (0x0007b569) main_usb_pane_t1_ParamLimits

0x5735,	// (0x0007b569) main_usb_pane_t1

0x5747,	// (0x0007b57b) main_usb_pane_t2_ParamLimits

0x5747,	// (0x0007b57b) main_usb_pane_t2

0x5759,	// (0x0007b58d) main_usb_pane_t3_ParamLimits

0x5759,	// (0x0007b58d) main_usb_pane_t3

0x576b,	// (0x0007b59f) main_usb_pane_t4_ParamLimits

0x576b,	// (0x0007b59f) main_usb_pane_t4

0x5780,	// (0x0007b5b4) main_usb_pane_t5_ParamLimits

0x5780,	// (0x0007b5b4) main_usb_pane_t5

0x5795,	// (0x0007b5c9) main_usb_pane_t6_ParamLimits

0x5795,	// (0x0007b5c9) main_usb_pane_t6

0x0005,

0xf5cf,	// (0x00085403) main_usb_pane_t_ParamLimits

0x39bb,	// (0x000797ef) aid_text_placing

0x39c6,	// (0x000797fa) main_location2_pane_t1_ParamLimits

0x39dc,	// (0x00079810) main_location2_pane_t2_ParamLimits

0x39f2,	// (0x00079826) main_location2_pane_t3_ParamLimits

0x3a08,	// (0x0007983c) main_location2_pane_t4_ParamLimits

0x3a08,	// (0x0007983c) main_location2_pane_t4

0xf3ee,	// (0x00085222) main_location2_pane_t_ParamLimits

0xeea3,	// (0x00084cd7) find_pinb_pane_g2_ParamLimits

0xeea3,	// (0x00084cd7) find_pinb_pane_g2

0x0001,

0xf13c,	// (0x00084f70) find_pinb_pane_g_ParamLimits

0xf13c,	// (0x00084f70) find_pinb_pane_g

0xeeaf,	// (0x00084ce3) find_pinb_pane_t1_ParamLimits

0xeec1,	// (0x00084cf5) find_pinb_pane_t2_ParamLimits

0xf141,	// (0x00084f75) find_pinb_pane_t_ParamLimits

0xec0c,	// (0x00084a40) main_call3_pane

0x2d64,	// (0x00078b98) cale_month_day_heading_pane_t1_ParamLimits

0x2dc2,	// (0x00078bf6) cale_month_day_heading_pane_t2_ParamLimits

0x2e27,	// (0x00078c5b) cale_month_day_heading_pane_t3_ParamLimits

0x2e8c,	// (0x00078cc0) cale_month_day_heading_pane_t4_ParamLimits

0x2ef1,	// (0x00078d25) cale_month_day_heading_pane_t5_ParamLimits

0x2f56,	// (0x00078d8a) cale_month_day_heading_pane_t6_ParamLimits

0x2fbb,	// (0x00078def) cale_month_day_heading_pane_t7_ParamLimits

0xf2c5,	// (0x000850f9) cale_month_day_heading_pane_t_ParamLimits

0x31a9,	// (0x00078fdd) smil_status_volume_pane

0x444e,	// (0x0007a282) postcard_address_pane_ParamLimits

0x444e,	// (0x0007a282) postcard_address_pane

0x4464,	// (0x0007a298) postcard_message_pane_ParamLimits

0x4464,	// (0x0007a298) postcard_message_pane

0x56f8,	// (0x0007b52c) call2_cli_visual_pane_t1_ParamLimits

0x56f8,	// (0x0007b52c) call2_cli_visual_pane_t1

0x5f64,	// (0x0007bd98) postcard_message_pane_t1_ParamLimits

0x5f64,	// (0x0007bd98) postcard_message_pane_t1

0xb7e8,	// (0x0008161c) postcard_address_pane_t1_ParamLimits

0xb7e8,	// (0x0008161c) postcard_address_pane_t1

0x5f50,	// (0x0007bd84) popup_call3_audio_in_window_ParamLimits

0x5f50,	// (0x0007bd84) popup_call3_audio_in_window

0x5dd5,	// (0x0007bc09) bg_popup_call3_in_pane_ParamLimits

0x5dd5,	// (0x0007bc09) bg_popup_call3_in_pane

0x5e51,	// (0x0007bc85) popup_call3_audio_in_window_g1_ParamLimits

0x5e51,	// (0x0007bc85) popup_call3_audio_in_window_g1

0x5e71,	// (0x0007bca5) popup_call3_audio_in_window_g2_ParamLimits

0x5e71,	// (0x0007bca5) popup_call3_audio_in_window_g2

0x5e91,	// (0x0007bcc5) popup_call3_audio_in_window_g3_ParamLimits

0x5e91,	// (0x0007bcc5) popup_call3_audio_in_window_g3

0x0003,

0xf631,	// (0x00085465) popup_call3_audio_in_window_g_ParamLimits

0xf631,	// (0x00085465) popup_call3_audio_in_window_g

0x5ec2,	// (0x0007bcf6) popup_call3_audio_in_window_t1_ParamLimits

0x5ec2,	// (0x0007bcf6) popup_call3_audio_in_window_t1

0x5f00,	// (0x0007bd34) popup_call3_audio_in_window_t2_ParamLimits

0x5f00,	// (0x0007bd34) popup_call3_audio_in_window_t2

0x5f3e,	// (0x0007bd72) popup_call3_audio_in_window_t3_ParamLimits

0x5f3e,	// (0x0007bd72) popup_call3_audio_in_window_t3

0x0002,

0xf63a,	// (0x0008546e) popup_call3_audio_in_window_t_ParamLimits

0xf63a,	// (0x0008546e) popup_call3_audio_in_window_t

0x3ca6,	// (0x00079ada) bg_popup_call3_rect_pane

0xb4d3,	// (0x00081307) bg_popup_call3_rect_pane_g1

0xf02d,	// (0x00084e61) bg_popup_call3_rect_pane_g2

0xb4db,	// (0x0008130f) bg_popup_call3_rect_pane_g3

0xb4e3,	// (0x00081317) bg_popup_call3_rect_pane_g4

0xb4eb,	// (0x0008131f) bg_popup_call3_rect_pane_g5

0xb4f3,	// (0x00081327) bg_popup_call3_rect_pane_g6

0xb4fb,	// (0x0008132f) bg_popup_call3_rect_pane_g7

0x3fa2,	// (0x00079dd6) mup_visualizer_osc_pane

0x3fb8,	// (0x00079dec) mup_visualizer_spec_pane

0x5e05,	// (0x0007bc39) call3_video_qcif_pane_ParamLimits

0x5e05,	// (0x0007bc39) call3_video_qcif_pane

0x5e18,	// (0x0007bc4c) call3_video_qcif_uncrop_pane_ParamLimits

0x5e18,	// (0x0007bc4c) call3_video_qcif_uncrop_pane

0x5e28,	// (0x0007bc5c) call3_video_subqcif_pane_ParamLimits

0x5e28,	// (0x0007bc5c) call3_video_subqcif_pane

0x5e3e,	// (0x0007bc72) call3_video_subqcif_uncrop_pane_ParamLimits

0x5e3e,	// (0x0007bc72) call3_video_subqcif_uncrop_pane

0x5eb1,	// (0x0007bce5) popup_call3_audio_in_window_g4_ParamLimits

0x5eb1,	// (0x0007bce5) popup_call3_audio_in_window_g4

0x5dc4,	// (0x0007bbf8) mup_spec_half_pane

0x5dcd,	// (0x0007bc01) mup_spec_half_pane_cp

0xb786,	// (0x000815ba) mup_osc_middle_pane

0xb78f,	// (0x000815c3) mup_visualizer_osc_pane_g1

0x5da4,	// (0x0007bbd8) mup_spec_bar_pane_ParamLimits

0x5da4,	// (0x0007bbd8) mup_spec_bar_pane

0xb773,	// (0x000815a7) mup_spec_bar_pane_g1

0xb77d,	// (0x000815b1) mup_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00085459) mup_spec_bar_pane_g

0x1ab0,	// (0x000778e4) aid_cale_week_size_cell_pane_ParamLimits

0x1ac3,	// (0x000778f7) bg_cale_heading_pane_ParamLimits

0xf061,	// (0x00084e95) bg_cale_pane_cp01_ParamLimits

0x1adf,	// (0x00077913) cale_week_corner_pane_ParamLimits

0x1af5,	// (0x00077929) cale_week_day_heading_pane_ParamLimits

0x1b11,	// (0x00077945) cale_week_scroll_pane_g1_ParamLimits

0x1b2a,	// (0x0007795e) cale_week_scroll_pane_g2_ParamLimits

0x1b3b,	// (0x0007796f) cale_week_scroll_pane_g3_ParamLimits

0x1b4c,	// (0x00077980) cale_week_scroll_pane_g4_ParamLimits

0x1b5d,	// (0x00077991) cale_week_scroll_pane_g5_ParamLimits

0x1b6e,	// (0x000779a2) cale_week_scroll_pane_g6_ParamLimits

0x1b7f,	// (0x000779b3) cale_week_scroll_pane_g7_ParamLimits

0x1b90,	// (0x000779c4) cale_week_scroll_pane_g8_ParamLimits

0x1ba1,	// (0x000779d5) cale_week_scroll_pane_g9_ParamLimits

0x1bb2,	// (0x000779e6) cale_week_scroll_pane_g10_ParamLimits

0x1bc3,	// (0x000779f7) cale_week_scroll_pane_g11_ParamLimits

0x1bd4,	// (0x00077a08) cale_week_scroll_pane_g12_ParamLimits

0x1be5,	// (0x00077a19) cale_week_scroll_pane_g13_ParamLimits

0x1bfe,	// (0x00077a32) cale_week_scroll_pane_g14_ParamLimits

0x1c17,	// (0x00077a4b) cale_week_scroll_pane_g15_ParamLimits

0xf1cd,	// (0x00085001) cale_week_scroll_pane_g_ParamLimits

0x1c30,	// (0x00077a64) cale_week_time_pane_ParamLimits

0x1c41,	// (0x00077a75) grid_cale_week_pane_ParamLimits

0xf07a,	// (0x00084eae) listscroll_cale_week_pane_t1

0x1c5c,	// (0x00077a90) scroll_pane_cp08_ParamLimits

0x2a2f,	// (0x00078863) cale_month_corner_pane_ParamLimits

0x2d13,	// (0x00078b47) cale_month_pane_t1

0x2d25,	// (0x00078b59) cale_month_week_pane_ParamLimits

0x35f3,	// (0x00079427) popup_call_status_window_g1_ParamLimits

0x3607,	// (0x0007943b) popup_call_status_window_g2_ParamLimits

0x361b,	// (0x0007944f) popup_call_status_window_g3_ParamLimits

0xf375,	// (0x000851a9) popup_call_status_window_g_ParamLimits

0x3684,	// (0x000794b8) aid_call2_pane

0x0a09,	// (0x0007683d) msg_header_pane_g1

0x444e,	// (0x0007a282) postcard_address2_pane_ParamLimits

0x444e,	// (0x0007a282) postcard_address2_pane

0x4464,	// (0x0007a298) postcard_message2_pane_ParamLimits

0x4464,	// (0x0007a298) postcard_message2_pane

0x5d61,	// (0x0007bb95) message2_row_pane_ParamLimits

0x5d61,	// (0x0007bb95) message2_row_pane

0xb72e,	// (0x00081562) address2_row_pane_ParamLimits

0xb72e,	// (0x00081562) address2_row_pane

0xb741,	// (0x00081575) postcard_message2_row_pane_g1

0xb749,	// (0x0008157d) postcard_message2_row_pane_t1

0xb741,	// (0x00081575) address2_row_pane_g1

0xb749,	// (0x0008157d) address2_row_pane_t1

0x1e6a,	// (0x00077c9e) aid_size_cell_vorec

0xec0c,	// (0x00084a40) main_rss_pane

0x5d84,	// (0x0007bbb8) rss_list_single_pane_ParamLimits

0x5d84,	// (0x0007bbb8) rss_list_single_pane

0xb757,	// (0x0008158b) rss_list_single_pane_t1

0xb765,	// (0x00081599) rss_list_single_pane_t2

0x0001,

0xf620,	// (0x00085454) rss_list_single_pane_t

0xec0c,	// (0x00084a40) main_camera2_pane

0xec0c,	// (0x00084a40) main_video2_pane

0x5fd3,	// (0x0007be07) cams_zoom_pane_cp2_ParamLimits

0x5fd3,	// (0x0007be07) cams_zoom_pane_cp2

0x5fea,	// (0x0007be1e) image2_vga_pane_ParamLimits

0x5fea,	// (0x0007be1e) image2_vga_pane

0x6032,	// (0x0007be66) main_camera2_pane_g1_ParamLimits

0x6032,	// (0x0007be66) main_camera2_pane_g1

0x6052,	// (0x0007be86) main_camera2_pane_g2_ParamLimits

0x6052,	// (0x0007be86) main_camera2_pane_g2

0x6069,	// (0x0007be9d) main_camera2_pane_g3_ParamLimits

0x6069,	// (0x0007be9d) main_camera2_pane_g3

0x6080,	// (0x0007beb4) main_camera2_pane_g4_ParamLimits

0x6080,	// (0x0007beb4) main_camera2_pane_g4

0x6097,	// (0x0007becb) main_camera2_pane_g5_ParamLimits

0x6097,	// (0x0007becb) main_camera2_pane_g5

0x60ae,	// (0x0007bee2) main_camera2_pane_g6_ParamLimits

0x60ae,	// (0x0007bee2) main_camera2_pane_g6

0x60c5,	// (0x0007bef9) main_camera2_pane_g7_ParamLimits

0x60c5,	// (0x0007bef9) main_camera2_pane_g7

0x60dc,	// (0x0007bf10) main_camera2_pane_g8_ParamLimits

0x60dc,	// (0x0007bf10) main_camera2_pane_g8

0x0008,

0xf641,	// (0x00085475) main_camera2_pane_g_ParamLimits

0xf641,	// (0x00085475) main_camera2_pane_g

0x610a,	// (0x0007bf3e) main_camera2_pane_t1_ParamLimits

0x610a,	// (0x0007bf3e) main_camera2_pane_t1

0x613f,	// (0x0007bf73) main_camera2_pane_t2_ParamLimits

0x613f,	// (0x0007bf73) main_camera2_pane_t2

0x615c,	// (0x0007bf90) main_camera2_pane_t3_ParamLimits

0x615c,	// (0x0007bf90) main_camera2_pane_t3

0x61ba,	// (0x0007bfee) main_camera2_pane_t4_ParamLimits

0x61ba,	// (0x0007bfee) main_camera2_pane_t4

0x0006,

0xf654,	// (0x00085488) main_camera2_pane_t_ParamLimits

0xf654,	// (0x00085488) main_camera2_pane_t

0x6243,	// (0x0007c077) cams_zoom_pane_cp4_ParamLimits

0x6243,	// (0x0007c077) cams_zoom_pane_cp4

0x6259,	// (0x0007c08d) image2_cif_pane_ParamLimits

0x6259,	// (0x0007c08d) image2_cif_pane

0x6284,	// (0x0007c0b8) image2_subqcif_pane_ParamLimits

0x6284,	// (0x0007c0b8) image2_subqcif_pane

0x629f,	// (0x0007c0d3) main_video2_pane_g1_ParamLimits

0x629f,	// (0x0007c0d3) main_video2_pane_g1

0x62b9,	// (0x0007c0ed) main_video2_pane_g2_ParamLimits

0x62b9,	// (0x0007c0ed) main_video2_pane_g2

0x62cf,	// (0x0007c103) main_video2_pane_g3_ParamLimits

0x62cf,	// (0x0007c103) main_video2_pane_g3

0x62e5,	// (0x0007c119) main_video2_pane_g4_ParamLimits

0x62e5,	// (0x0007c119) main_video2_pane_g4

0x62fb,	// (0x0007c12f) main_video2_pane_g5_ParamLimits

0x62fb,	// (0x0007c12f) main_video2_pane_g5

0x6311,	// (0x0007c145) main_video2_pane_g6_ParamLimits

0x6311,	// (0x0007c145) main_video2_pane_g6

0x0005,

0xf663,	// (0x00085497) main_video2_pane_g_ParamLimits

0xf663,	// (0x00085497) main_video2_pane_g

0x632b,	// (0x0007c15f) main_video2_pane_t1_ParamLimits

0x632b,	// (0x0007c15f) main_video2_pane_t1

0x634f,	// (0x0007c183) main_video2_pane_t2_ParamLimits

0x634f,	// (0x0007c183) main_video2_pane_t2

0x639f,	// (0x0007c1d3) main_video2_pane_t3_ParamLimits

0x639f,	// (0x0007c1d3) main_video2_pane_t3

0x0002,

0xf670,	// (0x000854a4) main_video2_pane_t_ParamLimits

0xf670,	// (0x000854a4) main_video2_pane_t

0x5853,	// (0x0007b687) call_muted_g2

0x0001,

0xf612,	// (0x00085446) call_muted_g

0xec0c,	// (0x00084a40) main_mup2_pane

0x63e7,	// (0x0007c21b) main_mup2_pane_g1_ParamLimits

0x63e7,	// (0x0007c21b) main_mup2_pane_g1

0x63f3,	// (0x0007c227) main_mup2_pane_g2_ParamLimits

0x63f3,	// (0x0007c227) main_mup2_pane_g2

0xb909,	// (0x0008173d) main_mup_pane_g13_cp1

0xb911,	// (0x00081745) mup_volume_pane_cp1

0x6411,	// (0x0007c245) main_mup2_pane_g4_ParamLimits

0x6411,	// (0x0007c245) main_mup2_pane_g4

0x6421,	// (0x0007c255) main_mup2_pane_g5_ParamLimits

0x6421,	// (0x0007c255) main_mup2_pane_g5

0x6431,	// (0x0007c265) main_mup2_pane_g6_ParamLimits

0x6431,	// (0x0007c265) main_mup2_pane_g6

0x6441,	// (0x0007c275) main_mup2_pane_g7_ParamLimits

0x6441,	// (0x0007c275) main_mup2_pane_g7

0x0006,

0xf677,	// (0x000854ab) main_mup2_pane_g_ParamLimits

0xf677,	// (0x000854ab) main_mup2_pane_g

0x6459,	// (0x0007c28d) main_mup2_pane_t1_ParamLimits

0x6459,	// (0x0007c28d) main_mup2_pane_t1

0x646f,	// (0x0007c2a3) main_mup2_pane_t2_ParamLimits

0x646f,	// (0x0007c2a3) main_mup2_pane_t2

0x6485,	// (0x0007c2b9) main_mup2_pane_t3_ParamLimits

0x6485,	// (0x0007c2b9) main_mup2_pane_t3

0x649b,	// (0x0007c2cf) main_mup2_pane_t4_ParamLimits

0x649b,	// (0x0007c2cf) main_mup2_pane_t4

0x64b3,	// (0x0007c2e7) main_mup2_pane_t5_ParamLimits

0x64b3,	// (0x0007c2e7) main_mup2_pane_t5

0x64cb,	// (0x0007c2ff) main_mup2_pane_t6_ParamLimits

0x64cb,	// (0x0007c2ff) main_mup2_pane_t6

0x0005,

0xf686,	// (0x000854ba) main_mup2_pane_t_ParamLimits

0xf686,	// (0x000854ba) main_mup2_pane_t

0x64fb,	// (0x0007c32f) mup2_visualizer_pane_ParamLimits

0x64fb,	// (0x0007c32f) mup2_visualizer_pane

0x6529,	// (0x0007c35d) mup_progress_pane_cp_ParamLimits

0x6529,	// (0x0007c35d) mup_progress_pane_cp

0xb8eb,	// (0x0008171f) mup_volume_pane_cp_ParamLimits

0xb8eb,	// (0x0008171f) mup_volume_pane_cp

0x653f,	// (0x0007c373) mup2_visualizer_pane_g1_ParamLimits

0x653f,	// (0x0007c373) mup2_visualizer_pane_g1

0xb82a,	// (0x0008165e) mup2_visualizer_pane_g2_ParamLimits

0xb82a,	// (0x0008165e) mup2_visualizer_pane_g2

0x6554,	// (0x0007c388) mup2_visualizer_pane_g3_ParamLimits

0x6554,	// (0x0007c388) mup2_visualizer_pane_g3

0x0002,

0xf693,	// (0x000854c7) mup2_visualizer_pane_g_ParamLimits

0xf693,	// (0x000854c7) mup2_visualizer_pane_g

0x4844,	// (0x0007a678) aid_size_cell_fmradio

0x5a03,	// (0x0007b837) aid_height_parent_landcape

0x2742,	// (0x00078576) wml_content_pane_cp

0x274a,	// (0x0007857e) wml_tabs_pane

0x2753,	// (0x00078587) popup_wml_miniature_window

0x275b,	// (0x0007858f) scroll_pane_cp021

0x276f,	// (0x000785a3) wml_content_pane_comp8

0xec0c,	// (0x00084a40) bg_popup_sub_pane_cp05

0xb848,	// (0x0008167c) popup_wml_miniature_window_g1

0xb850,	// (0x00081684) wml_miniature_view_pane

0x6560,	// (0x0007c394) aid_size_wml_view

0x6568,	// (0x0007c39c) wml_miniature_view_pane_g1

0x6571,	// (0x0007c3a5) wml_miniature_view_pane_g2

0x657a,	// (0x0007c3ae) wml_miniature_view_pane_g3

0x6582,	// (0x0007c3b6) wml_miniature_view_pane_g4

0x658a,	// (0x0007c3be) wml_miniature_view_pane_g5

0x6592,	// (0x0007c3c6) wml_miniature_view_pane_g6

0x659a,	// (0x0007c3ce) wml_miniature_view_pane_g7

0x65a2,	// (0x0007c3d6) wml_miniature_view_pane_g8

0x0007,

0xf69a,	// (0x000854ce) wml_miniature_view_pane_g

0xb858,	// (0x0008168c) background_graphic_ParamLimits

0xb858,	// (0x0008168c) background_graphic

0xb864,	// (0x00081698) wml_tabs_2_pane

0xb86d,	// (0x000816a1) wml_tabs_3_pane_ParamLimits

0xb86d,	// (0x000816a1) wml_tabs_3_pane

0xb87f,	// (0x000816b3) wml_tabs_4_pane_ParamLimits

0xb87f,	// (0x000816b3) wml_tabs_4_pane

0xb895,	// (0x000816c9) wml_tabs_5_pane_ParamLimits

0xb895,	// (0x000816c9) wml_tabs_5_pane

0xb8af,	// (0x000816e3) wml_tabs_pane_g2_ParamLimits

0xb8af,	// (0x000816e3) wml_tabs_pane_g2

0xb8c3,	// (0x000816f7) wml_tabs_pane_g3_ParamLimits

0xb8c3,	// (0x000816f7) wml_tabs_pane_g3

0x65aa,	// (0x0007c3de) wml_tabs_2_active_pane_ParamLimits

0x65aa,	// (0x0007c3de) wml_tabs_2_active_pane

0x65be,	// (0x0007c3f2) wml_tabs_2_passive_pane_ParamLimits

0x65be,	// (0x0007c3f2) wml_tabs_2_passive_pane

0x65d2,	// (0x0007c406) wml_tabs_3_active_pane_cp_ParamLimits

0x65d2,	// (0x0007c406) wml_tabs_3_active_pane_cp

0x65e7,	// (0x0007c41b) wml_tabs_3_passive_pane_ParamLimits

0x65e7,	// (0x0007c41b) wml_tabs_3_passive_pane

0x65fa,	// (0x0007c42e) wml_tabs_3_passive_pane_cp_ParamLimits

0x65fa,	// (0x0007c42e) wml_tabs_3_passive_pane_cp

0x6611,	// (0x0007c445) tabs_4_active_pane

0x6619,	// (0x0007c44d) tabs_4_passive_pane

0x6623,	// (0x0007c457) tabs_4_passive_pane_cp

0x662b,	// (0x0007c45f) tabs_4_passive_pane_cp2

0x5717,	// (0x0007b54b) aid_height_text

0x3f74,	// (0x00079da8) mup_volume_cont_pane_ParamLimits

0x3f74,	// (0x00079da8) mup_volume_cont_pane

0x16a8,	// (0x000774dc) aid_size_cell_pinb

0x16b2,	// (0x000774e6) aid_size_list_pinb

0x6515,	// (0x0007c349) mup2_volume_cont_pane_ParamLimits

0x6515,	// (0x0007c349) mup2_volume_cont_pane

0xb8d7,	// (0x0008170b) mup2_volume_cont_pane_g1_ParamLimits

0xb8d7,	// (0x0008170b) mup2_volume_cont_pane_g1

0x13b9,	// (0x000771ed) aid_size_cell_touch_ParamLimits

0x13b9,	// (0x000771ed) aid_size_cell_touch

0x15cc,	// (0x00077400) touch_pane_ParamLimits

0x15cc,	// (0x00077400) touch_pane

0xab8a,	// (0x000809be) main_rss2_pane

0xb919,	// (0x0008174d) listscroll_rss2_pane

0xb922,	// (0x00081756) rss2_navigation_pane

0xb92a,	// (0x0008175e) list_rss2_pane

0x383f,	// (0x00079673) scroll_pane_cp22

0xb932,	// (0x00081766) rss2_navigation_pane_g1

0xb93b,	// (0x0008176f) rss2_navigation_pane_g2

0xb943,	// (0x00081777) rss2_navigation_pane_g3

0x0002,

0xf6ab,	// (0x000854df) rss2_navigation_pane_g

0xb94b,	// (0x0008177f) rss2_navigation_pane_t1

0x6635,	// (0x0007c469) rss2_list_single_pane_ParamLimits

0x6635,	// (0x0007c469) rss2_list_single_pane

0xb959,	// (0x0008178d) rss2_list_single_pane_t2

0xb967,	// (0x0008179b) rss2_list_single_pane_t3_ParamLimits

0xb967,	// (0x0008179b) rss2_list_single_pane_t3

0xb984,	// (0x000817b8) rss2_list_single_pane_t4

0x3191,	// (0x00078fc5) smil_status_pane_g1

0xac03,	// (0x00080a37) main_image2_pane_ParamLimits

0xac03,	// (0x00080a37) main_image2_pane

0x60f3,	// (0x0007bf27) main_camera2_pane_g9_ParamLimits

0x60f3,	// (0x0007bf27) main_camera2_pane_g9

0x620f,	// (0x0007c043) main_camera2_pane_t5_ParamLimits

0x620f,	// (0x0007c043) main_camera2_pane_t5

0xb7ff,	// (0x00081633) main_camera2_pane_t6_ParamLimits

0xb7ff,	// (0x00081633) main_camera2_pane_t6

0x664f,	// (0x0007c483) main_image2_pane_g1_ParamLimits

0x664f,	// (0x0007c483) main_image2_pane_g1

0x47ee,	// (0x0007a622) smil2_video_pane_ParamLimits

0x47ee,	// (0x0007a622) smil2_video_pane

0xabb8,	// (0x000809ec) aid_zoom_text_primary_cp

0xabf9,	// (0x00080a2d) popup_preview_fixed_window

0x262f,	// (0x00078463) im_reading_pane_g1

0x5fc5,	// (0x0007bdf9) cams2_bc_adjust_pane_cp_ParamLimits

0x5fc5,	// (0x0007bdf9) cams2_bc_adjust_pane_cp

0x6235,	// (0x0007c069) cams2_bc_adjust_pane_ParamLimits

0x6235,	// (0x0007c069) cams2_bc_adjust_pane

0xb992,	// (0x000817c6) cams2_bc_adjust_pane_g1

0xb99a,	// (0x000817ce) cams2_slider_pane

0xb9a3,	// (0x000817d7) cams2_slider_pane_g1

0xb9ac,	// (0x000817e0) cams2_slider_pane_g2

0x0006,

0xf6b2,	// (0x000854e6) cams2_slider_pane_g

0x17a2,	// (0x000775d6) calc_display_pane_ParamLimits

0x17c8,	// (0x000775fc) calc_paper_pane_ParamLimits

0x17eb,	// (0x0007761f) grid_calc_pane_ParamLimits

0xb0ff,	// (0x00080f33) popup_clock_digital_window_t1_ParamLimits

0x466b,	// (0x0007a49f) main_image_pane_t1

0x1784,	// (0x000775b8) aid_size_cell_calc_ParamLimits

0x1784,	// (0x000775b8) aid_size_cell_calc

0x5a49,	// (0x0007b87d) popup_blid_sat_info2_window_ParamLimits

0x5a49,	// (0x0007b87d) popup_blid_sat_info2_window

0xb9ce,	// (0x00081802) aid_size_cell_blid

0xb9d6,	// (0x0008180a) bg_popup_window_pane_cp07

0xb9f9,	// (0x0008182d) grid_popup_blid_pane

0xba03,	// (0x00081837) heading_pane_cp05_ParamLimits

0xba03,	// (0x00081837) heading_pane_cp05

0xbacd,	// (0x00081901) cell_popup_blid_pane_ParamLimits

0xbacd,	// (0x00081901) cell_popup_blid_pane

0xbaf7,	// (0x0008192b) cell_popup_blid_pane_g1

0xbaff,	// (0x00081933) cell_popup_blid_pane_t1

0x64e5,	// (0x0007c319) mup2_indicator_pane_ParamLimits

0x64e5,	// (0x0007c319) mup2_indicator_pane

0x3ca6,	// (0x00079ada) mup2_visualizer_osc_pane

0xb836,	// (0x0008166a) mup2_visualizer_spec_pane_ParamLimits

0xb836,	// (0x0008166a) mup2_visualizer_spec_pane

0x6665,	// (0x0007c499) mup2_spec_half_pane

0x666e,	// (0x0007c4a2) mup2_spec_half_pane_cp

0x6676,	// (0x0007c4aa) mup2_spec_bar_pane_ParamLimits

0x6676,	// (0x0007c4aa) mup2_spec_bar_pane

0xb773,	// (0x000815a7) mup2_spec_bar_pane_g1

0xb77d,	// (0x000815b1) mup2_spec_bar_pane_g2

0x0001,

0xf625,	// (0x00085459) mup2_spec_bar_pane_g

0x6696,	// (0x0007c4ca) mup2_osc_middle_pane

0xb78f,	// (0x000815c3) mup2_visualizer_osc_pane_g1

0xac31,	// (0x00080a65) popup_number_entry_window_t1_ParamLimits

0xac44,	// (0x00080a78) popup_number_entry_window_t2_ParamLimits

0xac56,	// (0x00080a8a) popup_number_entry_window_t3_ParamLimits

0xac68,	// (0x00080a9c) popup_number_entry_window_t5_ParamLimits

0xac68,	// (0x00080a9c) popup_number_entry_window_t5

0xf0e7,	// (0x00084f1b) popup_number_entry_window_t_ParamLimits

0xac9d,	// (0x00080ad1) text_title_cp2_ParamLimits

0xb1ad,	// (0x00080fe1) aid_hotspot_pointer_text2_pane

0xb1d3,	// (0x00081007) main_viewer_pane_g9_ParamLimits

0xb1d3,	// (0x00081007) main_viewer_pane_g9

0x2d13,	// (0x00078b47) cale_month_pane_t1_ParamLimits

0x321c,	// (0x00079050) bg_cale_pane_ParamLimits

0x3234,	// (0x00079068) list_cale_pane_ParamLimits

0xf07a,	// (0x00084eae) listscroll_cale_day_pane_t1

0x3245,	// (0x00079079) scroll_pane_cp09_ParamLimits

0x4028,	// (0x00079e5c) main_mup_eq_pane_t1_ParamLimits

0x4028,	// (0x00079e5c) main_mup_eq_pane_t1

0x4044,	// (0x00079e78) main_mup_eq_pane_t2_ParamLimits

0x4044,	// (0x00079e78) main_mup_eq_pane_t2

0x4060,	// (0x00079e94) main_mup_eq_pane_t3_ParamLimits

0x4060,	// (0x00079e94) main_mup_eq_pane_t3

0x407e,	// (0x00079eb2) main_mup_eq_pane_t4_ParamLimits

0x407e,	// (0x00079eb2) main_mup_eq_pane_t4

0x409c,	// (0x00079ed0) main_mup_eq_pane_t5_ParamLimits

0x409c,	// (0x00079ed0) main_mup_eq_pane_t5

0x40ba,	// (0x00079eee) main_mup_eq_pane_t6_ParamLimits

0x40ba,	// (0x00079eee) main_mup_eq_pane_t6

0x40d0,	// (0x00079f04) main_mup_eq_pane_t7_ParamLimits

0x40d0,	// (0x00079f04) main_mup_eq_pane_t7

0x40e6,	// (0x00079f1a) main_mup_eq_pane_t8_ParamLimits

0x40e6,	// (0x00079f1a) main_mup_eq_pane_t8

0x40fc,	// (0x00079f30) main_mup_eq_pane_t9_ParamLimits

0x40fc,	// (0x00079f30) main_mup_eq_pane_t9

0x4118,	// (0x00079f4c) main_mup_eq_pane_t10_ParamLimits

0x4118,	// (0x00079f4c) main_mup_eq_pane_t10

0x0009,

0xf474,	// (0x000852a8) main_mup_eq_pane_t_ParamLimits

0xf474,	// (0x000852a8) main_mup_eq_pane_t

0x41ed,	// (0x0007a021) mup_equalizer_pane_cp5_ParamLimits

0x4205,	// (0x0007a039) mup_equalizer_pane_cp6_ParamLimits

0x421d,	// (0x0007a051) mup_equalizer_pane_cp7_ParamLimits

0xab8a,	// (0x000809be) main_gallery_pane

0xb798,	// (0x000815cc) smil2_volume_pane

0xb7a0,	// (0x000815d4) smil_status_volume_pane_g1_ParamLimits

0xb7b3,	// (0x000815e7) smil_status_volume_pane_g2_ParamLimits

0xb7c6,	// (0x000815fa) smil_status_volume_pane_g3_ParamLimits

0xf62a,	// (0x0008545e) smil_status_volume_pane_g_ParamLimits

0xb9d6,	// (0x0008180a) bg_popup_window_pane_cp07_ParamLimits

0xb9e4,	// (0x00081818) blid_firmament_pane

0x669f,	// (0x0007c4d3) aid_size_cell_gallery_ParamLimits

0x669f,	// (0x0007c4d3) aid_size_cell_gallery

0x66b5,	// (0x0007c4e9) grid_gallery_pane_ParamLimits

0x66b5,	// (0x0007c4e9) grid_gallery_pane

0x66d0,	// (0x0007c504) cell_gallery_pane_ParamLimits

0x66d0,	// (0x0007c504) cell_gallery_pane

0xbb0d,	// (0x00081941) bg_cell_gallery_focus_pane_ParamLimits

0xbb0d,	// (0x00081941) bg_cell_gallery_focus_pane

0xbb1f,	// (0x00081953) cell_gallery_pane_g1_ParamLimits

0xbb1f,	// (0x00081953) cell_gallery_pane_g1

0x6721,	// (0x0007c555) cell_gallery_pane_g2_ParamLimits

0x6721,	// (0x0007c555) cell_gallery_pane_g2

0x672e,	// (0x0007c562) cell_gallery_pane_g3_ParamLimits

0x672e,	// (0x0007c562) cell_gallery_pane_g3

0xbb2b,	// (0x0008195f) cell_gallery_pane_g4_ParamLimits

0xbb2b,	// (0x0008195f) cell_gallery_pane_g4

0x0003,

0xf6d8,	// (0x0008550c) cell_gallery_pane_g_ParamLimits

0xf6d8,	// (0x0008550c) cell_gallery_pane_g

0xbb37,	// (0x0008196b) bg_cell_gallery_focus_pane_g1

0xbb3f,	// (0x00081973) bg_cell_gallery_focus_pane_g2

0xbb47,	// (0x0008197b) bg_cell_gallery_focus_pane_g3

0xbb4f,	// (0x00081983) bg_cell_gallery_focus_pane_g4

0xbb57,	// (0x0008198b) bg_cell_gallery_focus_pane_g5

0xbb5f,	// (0x00081993) bg_cell_gallery_focus_pane_g6

0xbb67,	// (0x0008199b) bg_cell_gallery_focus_pane_g7

0xbb6f,	// (0x000819a3) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e1,	// (0x00085515) bg_cell_gallery_focus_pane_g

0xbb77,	// (0x000819ab) aid_firma_cardinal

0xbb8b,	// (0x000819bf) blid_firmament_pane_t1

0xbba2,	// (0x000819d6) blid_firmament_pane_t2

0xbbb9,	// (0x000819ed) blid_firmament_pane_t3

0xbbd0,	// (0x00081a04) blid_firmament_pane_t4

0x0003,

0xf6f2,	// (0x00085526) blid_firmament_pane_t

0xbbe7,	// (0x00081a1b) blid_sat_info_pane

0xbbf7,	// (0x00081a2b) blid_sat_info_pane_g1

0xbbf7,	// (0x00081a2b) blid_sat_info_pane_g2

0x0001,

0xf6fb,	// (0x0008552f) blid_sat_info_pane_g

0xbc01,	// (0x00081a35) blid_sat_info_pane_t1

0xbc0f,	// (0x00081a43) smil2_volume_content_pane

0xbc18,	// (0x00081a4c) smil2_volume_pane_g1

0xbc20,	// (0x00081a54) smil2_volume_content_pane_g1

0xbc29,	// (0x00081a5d) smil2_volume_content_pane_g2

0xbc32,	// (0x00081a66) smil2_volume_content_pane_g3

0xbc3b,	// (0x00081a6f) smil2_volume_content_pane_g4

0xbc44,	// (0x00081a78) smil2_volume_content_pane_g5

0xbc4d,	// (0x00081a81) smil2_volume_content_pane_g6

0xbc56,	// (0x00081a8a) smil2_volume_content_pane_g7

0xbc5f,	// (0x00081a93) smil2_volume_content_pane_g8

0xbc68,	// (0x00081a9c) smil2_volume_content_pane_g9

0xbc71,	// (0x00081aa5) smil2_volume_content_pane_g10

0x0009,

0xf700,	// (0x00085534) smil2_volume_content_pane_g

0x1cbc,	// (0x00077af0) cale_week_day_heading_pane_t1_ParamLimits

0x1cd0,	// (0x00077b04) cale_week_day_heading_pane_t2_ParamLimits

0x1ce4,	// (0x00077b18) cale_week_day_heading_pane_t3_ParamLimits

0x1cf8,	// (0x00077b2c) cale_week_day_heading_pane_t4_ParamLimits

0x1d0c,	// (0x00077b40) cale_week_day_heading_pane_t5_ParamLimits

0x1d20,	// (0x00077b54) cale_week_day_heading_pane_t6_ParamLimits

0x1d34,	// (0x00077b68) cale_week_day_heading_pane_t7_ParamLimits

0xf1ec,	// (0x00085020) cale_week_day_heading_pane_t_ParamLimits

0xf08c,	// (0x00084ec0) bg_cale_side_pane_ParamLimits

0x1d48,	// (0x00077b7c) cale_week_time_pane_t1_ParamLimits

0x1d60,	// (0x00077b94) cale_week_time_pane_t2_ParamLimits

0x1d78,	// (0x00077bac) cale_week_time_pane_t3_ParamLimits

0x1d90,	// (0x00077bc4) cale_week_time_pane_t4_ParamLimits

0x1da8,	// (0x00077bdc) cale_week_time_pane_t5_ParamLimits

0x1dc0,	// (0x00077bf4) cale_week_time_pane_t6_ParamLimits

0x1dd8,	// (0x00077c0c) cale_week_time_pane_t7_ParamLimits

0x1df4,	// (0x00077c28) cale_week_time_pane_t8_ParamLimits

0xf1fb,	// (0x0008502f) cale_week_time_pane_t_ParamLimits

0x1e14,	// (0x00077c48) cell_cale_week_pane_g2_ParamLimits

0xf08c,	// (0x00084ec0) bg_cale_side_pane_cp01_ParamLimits

0x3020,	// (0x00078e54) cale_month_week_pane_t1_ParamLimits

0x3037,	// (0x00078e6b) cale_month_week_pane_t2_ParamLimits

0x304e,	// (0x00078e82) cale_month_week_pane_t3_ParamLimits

0x3065,	// (0x00078e99) cale_month_week_pane_t4_ParamLimits

0x307c,	// (0x00078eb0) cale_month_week_pane_t5_ParamLimits

0x3093,	// (0x00078ec7) cale_month_week_pane_t6_ParamLimits

0xf2d4,	// (0x00085108) cale_month_week_pane_t_ParamLimits

0xb008,	// (0x00080e3c) cell_cale_month_pane_g1_ParamLimits

0xab8a,	// (0x000809be) main_cale_event_viewer_pane

0xab8a,	// (0x000809be) listscroll_cale_event_viewer_pane

0xbc7a,	// (0x00081aae) list_cale_ev_pane

0xbc82,	// (0x00081ab6) scroll_pane_cp023

0x673b,	// (0x0007c56f) field_cale_ev_pane_ParamLimits

0x673b,	// (0x0007c56f) field_cale_ev_pane

0xbc8e,	// (0x00081ac2) field_cale_ev_content_pane_ParamLimits

0xbc8e,	// (0x00081ac2) field_cale_ev_content_pane

0xbc9a,	// (0x00081ace) field_cale_ev_pane_g1_ParamLimits

0xbc9a,	// (0x00081ace) field_cale_ev_pane_g1

0xbca6,	// (0x00081ada) field_cale_ev_pane_g2_ParamLimits

0xbca6,	// (0x00081ada) field_cale_ev_pane_g2

0xbcbe,	// (0x00081af2) field_cale_ev_pane_g3_ParamLimits

0xbcbe,	// (0x00081af2) field_cale_ev_pane_g3

0x0002,

0xf715,	// (0x00085549) field_cale_ev_pane_g_ParamLimits

0xf715,	// (0x00085549) field_cale_ev_pane_g

0xbcd6,	// (0x00081b0a) field_cale_ev_pane_t1_ParamLimits

0xbcd6,	// (0x00081b0a) field_cale_ev_pane_t1

0x675f,	// (0x0007c593) field_cale_ev_content_pane_t1_ParamLimits

0x675f,	// (0x0007c593) field_cale_ev_content_pane_t1

0x42cd,	// (0x0007a101) bg_button_pane_cp01

0xef3a,	// (0x00084d6e) listscroll_cale_week_pane_ParamLimits

0x1aa6,	// (0x000778da) popup_toolbar_window_cp01

0xf07a,	// (0x00084eae) listscroll_cale_week_pane_t1_ParamLimits

0xef3a,	// (0x00084d6e) listscroll_cale_day_pane_ParamLimits

0x3212,	// (0x00079046) popup_toolbar_window_cp02

0xf07a,	// (0x00084eae) listscroll_cale_day_pane_t1_ParamLimits

0xef3a,	// (0x00084d6e) main_cale_month_pane_ParamLimits

0x5cc9,	// (0x0007bafd) popup_toolbar_window_cp03_ParamLimits

0x5cc9,	// (0x0007bafd) popup_toolbar_window_cp03

0x4649,	// (0x0007a47d) main_image_pane_g2_ParamLimits

0x4649,	// (0x0007a47d) main_image_pane_g2

0x465a,	// (0x0007a48e) main_image_pane_g3_ParamLimits

0x465a,	// (0x0007a48e) main_image_pane_g3

0x0002,

0xf506,	// (0x0008533a) main_image_pane_g_ParamLimits

0xf506,	// (0x0008533a) main_image_pane_g

0x466b,	// (0x0007a49f) main_image_pane_t1_ParamLimits

0x4682,	// (0x0007a4b6) main_image_pane_t2_ParamLimits

0x4682,	// (0x0007a4b6) main_image_pane_t2

0x4694,	// (0x0007a4c8) main_image_pane_t3_ParamLimits

0x4694,	// (0x0007a4c8) main_image_pane_t3

0x46bc,	// (0x0007a4f0) main_image_pane_t4_ParamLimits

0x46bc,	// (0x0007a4f0) main_image_pane_t4

0x0003,

0xf50d,	// (0x00085341) main_image_pane_t_ParamLimits

0xf50d,	// (0x00085341) main_image_pane_t

0x46dc,	// (0x0007a510) popup_image_details_window_cp01

0x46e6,	// (0x0007a51a) popup_toobar_trans_pane_cp01_ParamLimits

0x46e6,	// (0x0007a51a) popup_toobar_trans_pane_cp01

0x5b3c,	// (0x0007b970) popup_image_details_window_ParamLimits

0x5b3c,	// (0x0007b970) popup_image_details_window

0xb6e4,	// (0x00081518) popup_image_focus_window

0x5f7f,	// (0x0007bdb3) camera2_autofocus_pane_ParamLimits

0x5f7f,	// (0x0007bdb3) camera2_autofocus_pane

0xab8a,	// (0x000809be) bg_popup_sub_pane_cp06

0xbced,	// (0x00081b21) popup_image_focus_window_g1

0xbcf5,	// (0x00081b29) popup_image_focus_window_g2

0xbcfd,	// (0x00081b31) popup_image_focus_window_g3

0xbd05,	// (0x00081b39) popup_image_focus_window_g4

0x0003,

0xf71c,	// (0x00085550) popup_image_focus_window_g

0xbd0d,	// (0x00081b41) popup_image_focus_window_t1

0xbd1b,	// (0x00081b4f) popup_image_focus_window_t2

0xbd2b,	// (0x00081b5f) popup_image_focus_window_t3

0x0002,

0xf725,	// (0x00085559) popup_image_focus_window_t

0xbd39,	// (0x00081b6d) camera2_autofocus_pane_g1

0xac03,	// (0x00080a37) bg_tb_trans_pane_cp01

0xbd47,	// (0x00081b7b) popup_image_details_window_g1

0xbd5a,	// (0x00081b8e) popup_image_details_window_g2

0x0002,

0xf737,	// (0x0008556b) popup_image_details_window_g

0xbd83,	// (0x00081bb7) popup_image_details_window_t1

0xbd95,	// (0x00081bc9) popup_image_details_window_t2

0xbdae,	// (0x00081be2) popup_image_details_window_t3

0xbdc2,	// (0x00081bf6) popup_image_details_window_t4

0xbddd,	// (0x00081c11) popup_image_details_window_t5

0x0004,

0xf73e,	// (0x00085572) popup_image_details_window_t

0xef26,	// (0x00084d5a) bg_calc_paper_pane_ParamLimits

0xab8a,	// (0x000809be) grid_highlight_pane_cp013

0xae26,	// (0x00080c5a) list_calc_pane_ParamLimits

0xae38,	// (0x00080c6c) scroll_pane_cp024

0xef3a,	// (0x00084d6e) bg_calc_display_pane_ParamLimits

0x18eb,	// (0x0007771f) calc_display_pane_t1_ParamLimits

0x18fd,	// (0x00077731) calc_display_pane_t2_ParamLimits

0xae40,	// (0x00080c74) calc_display_pane_t3_ParamLimits

0xf16e,	// (0x00084fa2) calc_display_pane_t_ParamLimits

0x19c0,	// (0x000777f4) cell_calc_pane_g2

0x0001,

0xf18b,	// (0x00084fbf) cell_calc_pane_g

0x19c9,	// (0x000777fd) cell_calc_pane_t1

0xef99,	// (0x00084dcd) grid_highlight_pane_cp02_ParamLimits

0xefaf,	// (0x00084de3) toolbar_button_pane_cp01_ParamLimits

0xefaf,	// (0x00084de3) toolbar_button_pane_cp01

0x4728,	// (0x0007a55c) temp_image_control_pane_ParamLimits

0x4728,	// (0x0007a55c) temp_image_control_pane

0xac03,	// (0x00080a37) main_mp3_pane

0xbdf7,	// (0x00081c2b) temp_image_control_pane_g1_ParamLimits

0xbdf7,	// (0x00081c2b) temp_image_control_pane_g1

0xbe05,	// (0x00081c39) temp_image_control_pane_g2_ParamLimits

0xbe05,	// (0x00081c39) temp_image_control_pane_g2

0xbe17,	// (0x00081c4b) temp_image_control_pane_g3_ParamLimits

0xbe17,	// (0x00081c4b) temp_image_control_pane_g3

0x67b0,	// (0x0007c5e4) temp_image_control_pane_g4_ParamLimits

0x67b0,	// (0x0007c5e4) temp_image_control_pane_g4

0x0003,

0xf749,	// (0x0008557d) temp_image_control_pane_g_ParamLimits

0xf749,	// (0x0008557d) temp_image_control_pane_g

0xbdf7,	// (0x00081c2b) main_mp3_pane_g1

0x67c3,	// (0x0007c5f7) main_mp3_pane_g2

0x0007,

0xf752,	// (0x00085586) main_mp3_pane_g

0xbe5a,	// (0x00081c8e) main_mp3_pane_t1

0x1f60,	// (0x00077d94) main_camera_pane_g8_ParamLimits

0x1f60,	// (0x00077d94) main_camera_pane_g8

0x2115,	// (0x00077f49) main_video_pane_g7_ParamLimits

0x2115,	// (0x00077f49) main_video_pane_g7

0xb818,	// (0x0008164c) main_camera2_pane_t7_ParamLimits

0xb818,	// (0x0008164c) main_camera2_pane_t7

0x2702,	// (0x00078536) scroll_pane_cp025_ParamLimits

0x2702,	// (0x00078536) scroll_pane_cp025

0x2716,	// (0x0007854a) scroll_pane_cp026_ParamLimits

0x2716,	// (0x0007854a) scroll_pane_cp026

0x2725,	// (0x00078559) wml_content_pane_ParamLimits

0xab8a,	// (0x000809be) main_touch_calib_pane

0x688b,	// (0x0007c6bf) main_touch_calib_pane_g1

0x6897,	// (0x0007c6cb) main_touch_calib_pane_g2

0x68a3,	// (0x0007c6d7) main_touch_calib_pane_g3

0x68af,	// (0x0007c6e3) main_touch_calib_pane_g4

0x0003,

0xf770,	// (0x000855a4) main_touch_calib_pane_g

0x68bb,	// (0x0007c6ef) main_touch_calib_pane_t1

0x68d5,	// (0x0007c709) main_touch_calib_pane_t2

0x0004,

0xf779,	// (0x000855ad) main_touch_calib_pane_t

0x3b07,	// (0x0007993b) mup_progress_pane_cp02

0x3b3c,	// (0x00079970) navi_pane_g1

0x3bf7,	// (0x00079a2b) navi_pane_mp_t3

0xac03,	// (0x00080a37) main_mp3_pane_ParamLimits

0x5d0b,	// (0x0007bb3f) navi_pane_ParamLimits

0xbdf7,	// (0x00081c2b) main_mp3_pane_g1_ParamLimits

0x67c3,	// (0x0007c5f7) main_mp3_pane_g2_ParamLimits

0x67cf,	// (0x0007c603) main_mp3_pane_g3_ParamLimits

0x67cf,	// (0x0007c603) main_mp3_pane_g3

0x67dd,	// (0x0007c611) main_mp3_pane_g4_ParamLimits

0x67dd,	// (0x0007c611) main_mp3_pane_g4

0xbe27,	// (0x00081c5b) main_mp3_pane_g5_ParamLimits

0xbe27,	// (0x00081c5b) main_mp3_pane_g5

0xbe35,	// (0x00081c69) main_mp3_pane_g6_ParamLimits

0xbe35,	// (0x00081c69) main_mp3_pane_g6

0xbe42,	// (0x00081c76) main_mp3_pane_g7_ParamLimits

0xbe42,	// (0x00081c76) main_mp3_pane_g7

0xbe4e,	// (0x00081c82) main_mp3_pane_g8_ParamLimits

0xbe4e,	// (0x00081c82) main_mp3_pane_g8

0xf752,	// (0x00085586) main_mp3_pane_g_ParamLimits

0x67e9,	// (0x0007c61d) main_mp3_pane_t2

0x67f7,	// (0x0007c62b) main_mp3_pane_t3

0xbe68,	// (0x00081c9c) main_mp3_pane_t4

0xbe76,	// (0x00081caa) main_mp3_pane_t5

0x0005,

0xf763,	// (0x00085597) main_mp3_pane_t

0xbe84,	// (0x00081cb8) mup_progress_pane_cp01

0xabb8,	// (0x000809ec) aid_zoom_text_secondary2

0xbc7a,	// (0x00081aae) list_cale_ev2_pane

0xbc82,	// (0x00081ab6) scroll_pane_cp023_ParamLimits

0x692d,	// (0x0007c761) field_cale_ev2_pane_ParamLimits

0x692d,	// (0x0007c761) field_cale_ev2_pane

0x6951,	// (0x0007c785) field_cale_ev2_pane_g1_ParamLimits

0x6951,	// (0x0007c785) field_cale_ev2_pane_g1

0x695d,	// (0x0007c791) field_cale_ev2_pane_g2_ParamLimits

0x695d,	// (0x0007c791) field_cale_ev2_pane_g2

0x6975,	// (0x0007c7a9) field_cale_ev2_pane_g3_ParamLimits

0x6975,	// (0x0007c7a9) field_cale_ev2_pane_g3

0x0003,

0xf784,	// (0x000855b8) field_cale_ev2_pane_g_ParamLimits

0xf784,	// (0x000855b8) field_cale_ev2_pane_g

0x0a2b,	// (0x0007685f) field_cale_ev2_pane_t1_ParamLimits

0x0a2b,	// (0x0007685f) field_cale_ev2_pane_t1

0x0a42,	// (0x00076876) field_cale_ev2_pane_t2_ParamLimits

0x0a42,	// (0x00076876) field_cale_ev2_pane_t2

0x0001,

0xf78d,	// (0x000855c1) field_cale_ev2_pane_t_ParamLimits

0xf78d,	// (0x000855c1) field_cale_ev2_pane_t

0x43fe,	// (0x0007a232) main_postcard_pane_g5_ParamLimits

0x43fe,	// (0x0007a232) main_postcard_pane_g5

0x4414,	// (0x0007a248) main_postcard_pane_g6_ParamLimits

0x4414,	// (0x0007a248) main_postcard_pane_g6

0x1e9b,	// (0x00077ccf) camera2_autofocus_pane_cp_ParamLimits

0x1e9b,	// (0x00077ccf) camera2_autofocus_pane_cp

0xac03,	// (0x00080a37) main_mup3_pane

0x69ad,	// (0x0007c7e1) main_mup3_pane_g1_ParamLimits

0x69ad,	// (0x0007c7e1) main_mup3_pane_g1

0x69cf,	// (0x0007c803) main_mup3_pane_g2_ParamLimits

0x69cf,	// (0x0007c803) main_mup3_pane_g2

0x6a52,	// (0x0007c886) main_mup3_pane_g3_ParamLimits

0x6a52,	// (0x0007c886) main_mup3_pane_g3

0x6a9a,	// (0x0007c8ce) main_mup3_pane_g4_ParamLimits

0x6a9a,	// (0x0007c8ce) main_mup3_pane_g4

0x6ae2,	// (0x0007c916) main_mup3_pane_g5_ParamLimits

0x6ae2,	// (0x0007c916) main_mup3_pane_g5

0x6b2a,	// (0x0007c95e) main_mup3_pane_g6_ParamLimits

0x6b2a,	// (0x0007c95e) main_mup3_pane_g6

0xbe98,	// (0x00081ccc) main_mup3_pane_g7_ParamLimits

0xbe98,	// (0x00081ccc) main_mup3_pane_g7

0x0007,

0xf79d,	// (0x000855d1) main_mup3_pane_g_ParamLimits

0xf79d,	// (0x000855d1) main_mup3_pane_g

0x6baa,	// (0x0007c9de) main_mup3_pane_t1_ParamLimits

0x6baa,	// (0x0007c9de) main_mup3_pane_t1

0x6c1c,	// (0x0007ca50) main_mup3_pane_t2_ParamLimits

0x6c1c,	// (0x0007ca50) main_mup3_pane_t2

0x6cf2,	// (0x0007cb26) main_mup3_pane_t4_ParamLimits

0x6cf2,	// (0x0007cb26) main_mup3_pane_t4

0x6d50,	// (0x0007cb84) main_mup3_pane_t5_ParamLimits

0x6d50,	// (0x0007cb84) main_mup3_pane_t5

0x6e0c,	// (0x0007cc40) main_mup3_pane_t6_ParamLimits

0x6e0c,	// (0x0007cc40) main_mup3_pane_t6

0x0005,

0xf7ae,	// (0x000855e2) main_mup3_pane_t_ParamLimits

0xf7ae,	// (0x000855e2) main_mup3_pane_t

0x6ec2,	// (0x0007ccf6) mup3_progress_pane_ParamLimits

0x6ec2,	// (0x0007ccf6) mup3_progress_pane

0x6f56,	// (0x0007cd8a) popup_mup3_control_window_ParamLimits

0x6f56,	// (0x0007cd8a) popup_mup3_control_window

0xbea6,	// (0x00081cda) popup_mup3_text_window

0x6f8c,	// (0x0007cdc0) mup3_progress_pane_t1

0x6fa3,	// (0x0007cdd7) mup3_progress_pane_t2

0xbeae,	// (0x00081ce2) mup3_progress_pane_t3

0x0002,

0xf7bb,	// (0x000855ef) mup3_progress_pane_t

0xbec5,	// (0x00081cf9) mup_progress_pane_cp03

0xab8a,	// (0x000809be) bg_tb_trans_pane_cp04

0x6fba,	// (0x0007cdee) mup3_volume_pane

0x6fc2,	// (0x0007cdf6) popup_mup3_control_window_g1

0x6fcb,	// (0x0007cdff) mup3_volume_pane_g1

0x6fd4,	// (0x0007ce08) mup3_volume_pane_g2

0x6fdd,	// (0x0007ce11) mup3_volume_pane_g3

0x0002,

0xf7c2,	// (0x000855f6) mup3_volume_pane_g

0xab8a,	// (0x000809be) bg_tb_trans_pane_cp03

0xbed5,	// (0x00081d09) popup_mup3_text_window_g1

0xbedd,	// (0x00081d11) popup_mup3_text_window_t1

0xef82,	// (0x00084db6) list_calc_item_pane_g1_ParamLimits

0xb900,	// (0x00081734) mup_volume_pane_cp_g1

0x68ef,	// (0x0007c723) main_touch_calib_pane_t3

0x6903,	// (0x0007c737) main_touch_calib_pane_t4

0x6917,	// (0x0007c74b) main_touch_calib_pane_t5

0xab94,	// (0x000809c8) aid_cell_size_toolbar2

0xab9c,	// (0x000809d0) aid_popup3_width_pane

0xaba8,	// (0x000809dc) aid_zoom_text_msg_primary

0xaf0a,	// (0x00080d3e) vorec_t7

0xef46,	// (0x00084d7a) bg_calc_paper_pane_g1_ParamLimits

0xef52,	// (0x00084d86) bg_calc_paper_pane_g2_ParamLimits

0xef5e,	// (0x00084d92) bg_calc_paper_pane_g3_ParamLimits

0xef6a,	// (0x00084d9e) bg_calc_paper_pane_g4_ParamLimits

0xef76,	// (0x00084daa) bg_calc_paper_pane_g5_ParamLimits

0x194a,	// (0x0007777e) bg_calc_paper_pane_g6_ParamLimits

0x195d,	// (0x00077791) bg_calc_paper_pane_g7_ParamLimits

0x1970,	// (0x000777a4) bg_calc_paper_pane_g8_ParamLimits

0xf175,	// (0x00084fa9) bg_calc_paper_pane_g_ParamLimits

0x1981,	// (0x000777b5) calc_bg_paper_pane_g9_ParamLimits

0x2009,	// (0x00077e3d) image_qvga_pane_ParamLimits

0x2009,	// (0x00077e3d) image_qvga_pane

0xee67,	// (0x00084c9b) bg_popup_sub_pane_cp04_ParamLimits

0x45a7,	// (0x0007a3db) popup_mup_playback_window_g1_ParamLimits

0x45b3,	// (0x0007a3e7) popup_mup_playback_window_t1_ParamLimits

0x45c8,	// (0x0007a3fc) popup_mup_playback_window_t2_ParamLimits

0xf501,	// (0x00085335) popup_mup_playback_window_t_ParamLimits

0x6403,	// (0x0007c237) main_mup2_pane_g3_ParamLimits

0x6403,	// (0x0007c237) main_mup2_pane_g3

0x238f,	// (0x000781c3) popup_toolbar_window_cp04

0x4ded,	// (0x0007ac21) popup_call2_audio_second_window_g3_ParamLimits

0x4ded,	// (0x0007ac21) popup_call2_audio_second_window_g3

0x51f7,	// (0x0007b02b) popup_call2_audio_first_window_g4_ParamLimits

0x51f7,	// (0x0007b02b) popup_call2_audio_first_window_g4

0xb35d,	// (0x00081191) popup_call2_audio_in_window_g4_ParamLimits

0xb35d,	// (0x00081191) popup_call2_audio_in_window_g4

0x45dd,	// (0x0007a411) aid_area_sk_bg_cut_ParamLimits

0x45dd,	// (0x0007a411) aid_area_sk_bg_cut

0x45fb,	// (0x0007a42f) aid_area_sk_bg_cut_2_ParamLimits

0x45fb,	// (0x0007a42f) aid_area_sk_bg_cut_2

0x6711,	// (0x0007c545) aid_placing_details_win

0x6719,	// (0x0007c54d) aid_placing_details_win_2

0xbd39,	// (0x00081b6d) camera2_autofocus_pane_g1_ParamLimits

0x156b,	// (0x0007739f) popup_fixed_preview_cale_window_ParamLimits

0x156b,	// (0x0007739f) popup_fixed_preview_cale_window

0x3cb7,	// (0x00079aeb) navi_slider_pane_g3

0x3cc0,	// (0x00079af4) navi_slider_pane_g4

0x3cc9,	// (0x00079afd) navi_slider_pane_g5

0x3cb7,	// (0x00079aeb) navi_slider_pane_g6

0xb125,	// (0x00080f59) navi_slider_pane_g7

0x423e,	// (0x0007a072) mup_scale_pane_g3

0x4247,	// (0x0007a07b) mup_scale_pane_g4

0x4250,	// (0x0007a084) mup_scale_pane_g5

0x4259,	// (0x0007a08d) mup_scale_pane_g6

0x4262,	// (0x0007a096) mup_scale_pane_g7

0x3cb7,	// (0x00079aeb) cams2_slider_pane_g3

0xb9b5,	// (0x000817e9) cams2_slider_pane_g4

0xb9bd,	// (0x000817f1) cams2_slider_pane_g5

0x3cb7,	// (0x00079aeb) cams2_slider_pane_g6

0xb9c5,	// (0x000817f9) cams2_slider_pane_g7

0xbbf7,	// (0x00081a2b) camera2_autofocus_pane_cp_g1

0xbeeb,	// (0x00081d1f) bg_popup_preview_window_pane_cp02_ParamLimits

0xbeeb,	// (0x00081d1f) bg_popup_preview_window_pane_cp02

0xbef7,	// (0x00081d2b) list_fp_cale_pane_ParamLimits

0xbef7,	// (0x00081d2b) list_fp_cale_pane

0xbf03,	// (0x00081d37) popup_fixed_preview_cale_window_t1_ParamLimits

0xbf03,	// (0x00081d37) popup_fixed_preview_cale_window_t1

0x6fe6,	// (0x0007ce1a) popup_fixed_preview_cale_window_t2_ParamLimits

0x6fe6,	// (0x0007ce1a) popup_fixed_preview_cale_window_t2

0x6ffb,	// (0x0007ce2f) popup_fixed_preview_cale_window_t3_ParamLimits

0x6ffb,	// (0x0007ce2f) popup_fixed_preview_cale_window_t3

0x0002,

0xf7c9,	// (0x000855fd) popup_fixed_preview_cale_window_t_ParamLimits

0xf7c9,	// (0x000855fd) popup_fixed_preview_cale_window_t

0xbf21,	// (0x00081d55) list_single_fp_cale_pane_ParamLimits

0xbf21,	// (0x00081d55) list_single_fp_cale_pane

0xbf39,	// (0x00081d6d) list_single_fp_cale_pane_g1_ParamLimits

0xbf39,	// (0x00081d6d) list_single_fp_cale_pane_g1

0xbf45,	// (0x00081d79) list_single_fp_cale_pane_g2_ParamLimits

0xbf45,	// (0x00081d79) list_single_fp_cale_pane_g2

0x0002,

0xf7d0,	// (0x00085604) list_single_fp_cale_pane_g_ParamLimits

0xf7d0,	// (0x00085604) list_single_fp_cale_pane_g

0xbf5e,	// (0x00081d92) list_single_fp_cale_pane_t1_ParamLimits

0xbf5e,	// (0x00081d92) list_single_fp_cale_pane_t1

0xbf70,	// (0x00081da4) list_single_fp_cale_pane_t2_ParamLimits

0xbf70,	// (0x00081da4) list_single_fp_cale_pane_t2

0x0001,

0xf7d7,	// (0x0008560b) list_single_fp_cale_pane_t_ParamLimits

0xf7d7,	// (0x0008560b) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xab8a,	// (0x000809be) main_dialer_pane

0x7012,	// (0x0007ce46) aid_cell_size_keypad

0x701c,	// (0x0007ce50) dialer_ne_pane

0x7026,	// (0x0007ce5a) grid_dialer_command_1_pane

0x702e,	// (0x0007ce62) grid_dialer_command_2_pane

0x7036,	// (0x0007ce6a) grid_dialer_keypad_pane

0x704a,	// (0x0007ce7e) bg_popup_call_pane_cp06_ParamLimits

0x704a,	// (0x0007ce7e) bg_popup_call_pane_cp06

0x7056,	// (0x0007ce8a) dialer_ne_clear_pane_ParamLimits

0x7056,	// (0x0007ce8a) dialer_ne_clear_pane

0xbfa3,	// (0x00081dd7) dialer_ne_pane_g1

0xbfab,	// (0x00081ddf) dialer_ne_pane_t1_ParamLimits

0xbfab,	// (0x00081ddf) dialer_ne_pane_t1

0x7062,	// (0x0007ce96) dialer_ne_pane_t2_ParamLimits

0x7062,	// (0x0007ce96) dialer_ne_pane_t2

0x708c,	// (0x0007cec0) dialer_ne_pane_t3_ParamLimits

0x708c,	// (0x0007cec0) dialer_ne_pane_t3

0x0002,

0xf7dc,	// (0x00085610) dialer_ne_pane_t_ParamLimits

0xf7dc,	// (0x00085610) dialer_ne_pane_t

0x70bc,	// (0x0007cef0) dialer_ne_pane_t3_copy1_ParamLimits

0x70bc,	// (0x0007cef0) dialer_ne_pane_t3_copy1

0x70eb,	// (0x0007cf1f) cell_dialer_keypad_pane_ParamLimits

0x70eb,	// (0x0007cf1f) cell_dialer_keypad_pane

0x7102,	// (0x0007cf36) cell_dialer_command_1_pane_ParamLimits

0x7102,	// (0x0007cf36) cell_dialer_command_1_pane

0x7118,	// (0x0007cf4c) cell_dialer_command_2_pane_ParamLimits

0x7118,	// (0x0007cf4c) cell_dialer_command_2_pane

0xbfbd,	// (0x00081df1) bg_button_pane_cp02_ParamLimits

0xbfbd,	// (0x00081df1) bg_button_pane_cp02

0x7127,	// (0x0007cf5b) cell_dialer_keypad_pane_g1_ParamLimits

0x7127,	// (0x0007cf5b) cell_dialer_keypad_pane_g1

0xbfbd,	// (0x00081df1) bg_button_pane_cp03_ParamLimits

0xbfbd,	// (0x00081df1) bg_button_pane_cp03

0x713c,	// (0x0007cf70) cell_dialer_command_1_pane_g1_ParamLimits

0x713c,	// (0x0007cf70) cell_dialer_command_1_pane_g1

0xbfc9,	// (0x00081dfd) bg_button_pane_cp04

0x7150,	// (0x0007cf84) cell_dialer_command_2_pane_g1

0x3ca6,	// (0x00079ada) bg_button_pane_cp06

0xbfd1,	// (0x00081e05) dialer_ne_clear_pane_g1

0x3b48,	// (0x0007997c) navi_pane_g2

0x3b76,	// (0x000799aa) navi_pane_g3

0x0002,

0xf404,	// (0x00085238) navi_pane_g

0x3c05,	// (0x00079a39) navi_pane_mv_g2

0x3c2c,	// (0x00079a60) navi_pane_mv_g5

0x3c34,	// (0x00079a68) navi_pane_mv_t1

0xef3a,	// (0x00084d6e) main_clock2_pane

0x718a,	// (0x0007cfbe) main_clock2_list_pane_ParamLimits

0x718a,	// (0x0007cfbe) main_clock2_list_pane

0x71c4,	// (0x0007cff8) main_clock2_pane_t1_ParamLimits

0x71c4,	// (0x0007cff8) main_clock2_pane_t1

0x7200,	// (0x0007d034) main_clock2_pane_t2_ParamLimits

0x7200,	// (0x0007d034) main_clock2_pane_t2

0x0004,

0xf7e3,	// (0x00085617) main_clock2_pane_t_ParamLimits

0xf7e3,	// (0x00085617) main_clock2_pane_t

0x728f,	// (0x0007d0c3) popup_clock_analogue_window_cp03_ParamLimits

0x728f,	// (0x0007d0c3) popup_clock_analogue_window_cp03

0x72b6,	// (0x0007d0ea) popup_clock_digital_window_cp02_ParamLimits

0x72b6,	// (0x0007d0ea) popup_clock_digital_window_cp02

0x7331,	// (0x0007d165) main_clock2_list_single_pane_ParamLimits

0x7331,	// (0x0007d165) main_clock2_list_single_pane

0x3ca6,	// (0x00079ada) list_highlight_pane_cp05

0xbfd9,	// (0x00081e0d) main_clock2_list_single_pane_t1

0x238f,	// (0x000781c3) popup_toolbar_window_cp04_ParamLimits

0x6780,	// (0x0007c5b4) camera2_autofocus_pane_g2_ParamLimits

0x6780,	// (0x0007c5b4) camera2_autofocus_pane_g2

0x678c,	// (0x0007c5c0) camera2_autofocus_pane_g3_ParamLimits

0x678c,	// (0x0007c5c0) camera2_autofocus_pane_g3

0x6798,	// (0x0007c5cc) camera2_autofocus_pane_g4_ParamLimits

0x6798,	// (0x0007c5cc) camera2_autofocus_pane_g4

0x67a4,	// (0x0007c5d8) camera2_autofocus_pane_g5_ParamLimits

0x67a4,	// (0x0007c5d8) camera2_autofocus_pane_g5

0x0004,

0xf72c,	// (0x00085560) camera2_autofocus_pane_g_ParamLimits

0xf72c,	// (0x00085560) camera2_autofocus_pane_g

0x698d,	// (0x0007c7c1) camera2_autofocus_pane_cp_g2

0x6995,	// (0x0007c7c9) camera2_autofocus_pane_cp_g3

0x699d,	// (0x0007c7d1) camera2_autofocus_pane_cp_g4

0x69a5,	// (0x0007c7d9) camera2_autofocus_pane_cp_g5

0x0004,

0xf792,	// (0x000855c6) camera2_autofocus_pane_cp_g

0x7042,	// (0x0007ce76) popup_dialer_spcha_window

0xab8a,	// (0x000809be) bg_popup_sub_pane_cp07

0xbfe7,	// (0x00081e1b) list_spcha_pane

0xbfef,	// (0x00081e23) list_single_spcha_pane_ParamLimits

0xbfef,	// (0x00081e23) list_single_spcha_pane

0xab8a,	// (0x000809be) list_highlight_pane_cp06

0xc000,	// (0x00081e34) list_single_spcha_pane_t1

0x5620,	// (0x0007b454) popup_call2_audio_out_window_g4_ParamLimits

0x5620,	// (0x0007b454) popup_call2_audio_out_window_g4

0xab8a,	// (0x000809be) main_imed2_pane

0xb6ee,	// (0x00081522) popup_imed_adjust2_window

0x5b54,	// (0x0007b988) popup_imed_trans_window_ParamLimits

0x5b54,	// (0x0007b988) popup_imed_trans_window

0xba2f,	// (0x00081863) popup_blid_sat_info2_window_t1

0xba3d,	// (0x00081871) popup_blid_sat_info2_window_t2

0x000a,

0xf6c1,	// (0x000854f5) popup_blid_sat_info2_window_t

0x73e7,	// (0x0007d21b) aid_size_cell_colour_35

0x7407,	// (0x0007d23b) aid_size_cell_colour_112

0x7427,	// (0x0007d25b) aid_size_cell_effect

0xb6c2,	// (0x000814f6) bg_tb_trans_pane_cp02

0x337b,	// (0x000791af) heading_imed_pane

0x7447,	// (0x0007d27b) listscroll_imed_pane

0xc00e,	// (0x00081e42) heading_imed_pane_g1

0xc016,	// (0x00081e4a) heading_imed_pane_t1

0xc024,	// (0x00081e58) grid_imed_colour_35_pane_ParamLimits

0xc024,	// (0x00081e58) grid_imed_colour_35_pane

0x7453,	// (0x0007d287) grid_imed_effect_pane

0xc040,	// (0x00081e74) list_imed_aspect_pane

0x746a,	// (0x0007d29e) scroll_pane_cp027_ParamLimits

0x746a,	// (0x0007d29e) scroll_pane_cp027

0x747b,	// (0x0007d2af) cell_imed_effect_pane_ParamLimits

0x747b,	// (0x0007d2af) cell_imed_effect_pane

0xc048,	// (0x00081e7c) cell_imed_colour_pane_ParamLimits

0xc048,	// (0x00081e7c) cell_imed_colour_pane

0xc092,	// (0x00081ec6) cell_imed_colour_pane_g1_ParamLimits

0xc092,	// (0x00081ec6) cell_imed_colour_pane_g1

0xc0a3,	// (0x00081ed7) hgihlgiht_grid_pane_cp016_ParamLimits

0xc0a3,	// (0x00081ed7) hgihlgiht_grid_pane_cp016

0x74a0,	// (0x0007d2d4) cell_imed_effect_pane_g1

0x74a8,	// (0x0007d2dc) grid_highlight_pane_cp017

0xc0b4,	// (0x00081ee8) list_imed_single_pane_ParamLimits

0xc0b4,	// (0x00081ee8) list_imed_single_pane

0xab8a,	// (0x000809be) list_highlight_pane_cp07

0xc0c8,	// (0x00081efc) list_imed_aspect_pane_comp1_t1

0xb6c2,	// (0x000814f6) bg_tb_trans_pane_cp05

0xc0ea,	// (0x00081f1e) popup_imed_adjust2_window_g1

0xc111,	// (0x00081f45) popup_imed_adjust2_window_t1

0xc129,	// (0x00081f5d) slider_imed_adjust_pane

0xc13d,	// (0x00081f71) slider_imed_adjust_pane_g1

0xc14d,	// (0x00081f81) slider_imed_adjust_pane_g2

0xc15d,	// (0x00081f91) slider_imed_adjust_pane_g3

0xc16e,	// (0x00081fa2) slider_imed_adjust_pane_g4

0x0003,

0xf800,	// (0x00085634) slider_imed_adjust_pane_g

0x74b1,	// (0x0007d2e5) aid_size_cell_clipart2

0x74bd,	// (0x0007d2f1) grid_imed_clipart_pane

0xc17f,	// (0x00081fb3) scroll_pane_cp031

0x74c7,	// (0x0007d2fb) cell_imed_clipart_pane_ParamLimits

0x74c7,	// (0x0007d2fb) cell_imed_clipart_pane

0x74e4,	// (0x0007d318) cell_imed_clipart_pane_g1

0xab8a,	// (0x000809be) grid_highlight_pane_cp014

0x719f,	// (0x0007cfd3) main_clock2_pane_g1_ParamLimits

0x719f,	// (0x0007cfd3) main_clock2_pane_g1

0x72d8,	// (0x0007d10c) aid_call2_pane_cp10

0x72ea,	// (0x0007d11e) aid_call_pane_cp10

0x3a40,	// (0x00079874) popup_clock_analogue_window_cp10_g1

0x3a40,	// (0x00079874) popup_clock_analogue_window_cp10_g2

0x72fc,	// (0x0007d130) popup_clock_analogue_window_cp10_g3

0x72fc,	// (0x0007d130) popup_clock_analogue_window_cp10_g4

0x3a40,	// (0x00079874) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7ee,	// (0x00085622) popup_clock_analogue_window_cp10_g

0x7312,	// (0x0007d146) popup_clock_analogue_window_cp10_t1

0x7343,	// (0x0007d177) clock_digital_number_pane_cp10_ParamLimits

0x7343,	// (0x0007d177) clock_digital_number_pane_cp10

0x735d,	// (0x0007d191) clock_digital_number_pane_cp11_ParamLimits

0x735d,	// (0x0007d191) clock_digital_number_pane_cp11

0x7377,	// (0x0007d1ab) clock_digital_number_pane_cp12_ParamLimits

0x7377,	// (0x0007d1ab) clock_digital_number_pane_cp12

0x7391,	// (0x0007d1c5) clock_digital_number_pane_cp13_ParamLimits

0x7391,	// (0x0007d1c5) clock_digital_number_pane_cp13

0x73ab,	// (0x0007d1df) clock_digital_separator_pane_cp10_ParamLimits

0x73ab,	// (0x0007d1df) clock_digital_separator_pane_cp10

0x73c5,	// (0x0007d1f9) popup_clock_digital_window_cp02_t1_ParamLimits

0x73c5,	// (0x0007d1f9) popup_clock_digital_window_cp02_t1

0xee5f,	// (0x00084c93) clock_digital_number_pane_cp10_g1

0xee5f,	// (0x00084c93) clock_digital_number_pane_cp10_g2

0x0001,

0x01a5,	// (0x00075fd9) clock_digital_number_pane_cp10_g

0xee5f,	// (0x00084c93) clock_digital_separator_pane_cp10_g1

0xee5f,	// (0x00084c93) clock_digital_separator_pane_g2_cp10

0x3c76,	// (0x00079aaa) navi_pane_vded_g4

0x3c7f,	// (0x00079ab3) navi_pane_vded_g5

0x3c88,	// (0x00079abc) navi_pane_vded_t1

0xab8a,	// (0x000809be) main_vded_pane

0x74ed,	// (0x0007d321) main_vded_pane_g1

0x74f9,	// (0x0007d32d) main_vded_pane_g2

0x7505,	// (0x0007d339) main_vded_pane_g3

0x0002,

0xf809,	// (0x0008563d) main_vded_pane_g

0x7511,	// (0x0007d345) main_vded_pane_t1

0x751f,	// (0x0007d353) main_vded_pane_t2

0x0001,

0xf810,	// (0x00085644) main_vded_pane_t

0x752d,	// (0x0007d361) vded_slider_pane

0x7537,	// (0x0007d36b) vded_video_pane

0xc187,	// (0x00081fbb) vded_video_pane_g1

0x7543,	// (0x0007d377) vded_video_pane_g2

0xbbf7,	// (0x00081a2b) vded_video_pane_g3

0x0002,

0xf815,	// (0x00085649) vded_video_pane_g

0xc191,	// (0x00081fc5) vded_slider_pane_g1

0xb900,	// (0x00081734) vded_slider_pane_g2

0xc19a,	// (0x00081fce) vded_slider_pane_g3

0xc1a3,	// (0x00081fd7) vded_slider_pane_g4

0xc1ac,	// (0x00081fe0) vded_slider_pane_g5

0x0004,

0xf81c,	// (0x00085650) vded_slider_pane_g

0x6f40,	// (0x0007cd74) mup3_rocker_pane_ParamLimits

0x6f40,	// (0x0007cd74) mup3_rocker_pane

0x754c,	// (0x0007d380) mup3_control_keys_pane_g1

0x7554,	// (0x0007d388) mup3_control_keys_pane_g2

0x755c,	// (0x0007d390) mup3_control_keys_pane_g3

0x7564,	// (0x0007d398) mup3_control_keys_pane_g4

0x0003,

0xf827,	// (0x0008565b) mup3_control_keys_pane_g

0x15a2,	// (0x000773d6) popup_toolbar2_fixed_window_cp01_ParamLimits

0x15a2,	// (0x000773d6) popup_toolbar2_fixed_window_cp01

0x6f76,	// (0x0007cdaa) popup_toolbar2_fixed_window_cp02_ParamLimits

0x6f76,	// (0x0007cdaa) popup_toolbar2_fixed_window_cp02

0x4f5f,	// (0x0007ad93) popup_call2_audio_second_window_t4_ParamLimits

0x4f5f,	// (0x0007ad93) popup_call2_audio_second_window_t4

0x548d,	// (0x0007b2c1) popup_call2_audio_first_window_t6_ParamLimits

0x548d,	// (0x0007b2c1) popup_call2_audio_first_window_t6

0xb20a,	// (0x0008103e) popup_call2_audio_out_window_t6_ParamLimits

0xb20a,	// (0x0008103e) popup_call2_audio_out_window_t6

0xab8a,	// (0x000809be) main_vitu_pane

0x7574,	// (0x0007d3a8) aid_size_cell_itu_ParamLimits

0x7574,	// (0x0007d3a8) aid_size_cell_itu

0xac03,	// (0x00080a37) bg_popup_window_pane_cp08_ParamLimits

0xac03,	// (0x00080a37) bg_popup_window_pane_cp08

0x758a,	// (0x0007d3be) field_vitu_entry_pane_ParamLimits

0x758a,	// (0x0007d3be) field_vitu_entry_pane

0x75a1,	// (0x0007d3d5) grid_vitu_function_pane_ParamLimits

0x75a1,	// (0x0007d3d5) grid_vitu_function_pane

0x75bc,	// (0x0007d3f0) grid_vitu_itu_pane_ParamLimits

0x75bc,	// (0x0007d3f0) grid_vitu_itu_pane

0x75d8,	// (0x0007d40c) cell_vitu_itu_pane_ParamLimits

0x75d8,	// (0x0007d40c) cell_vitu_itu_pane

0x75fe,	// (0x0007d432) cell_vitu_function_pane_ParamLimits

0x75fe,	// (0x0007d432) cell_vitu_function_pane

0xac03,	// (0x00080a37) bg_popup_sub_pane_cp08_ParamLimits

0xac03,	// (0x00080a37) bg_popup_sub_pane_cp08

0x7619,	// (0x0007d44d) field_vitu_entry_pane_t1_ParamLimits

0x7619,	// (0x0007d44d) field_vitu_entry_pane_t1

0xc1cd,	// (0x00082001) field_vitu_entry_pane_t2_ParamLimits

0xc1cd,	// (0x00082001) field_vitu_entry_pane_t2

0x0001,

0xf835,	// (0x00085669) field_vitu_entry_pane_t_ParamLimits

0xf835,	// (0x00085669) field_vitu_entry_pane_t

0xc1ea,	// (0x0008201e) bg_button_pane_cp05_ParamLimits

0xc1ea,	// (0x0008201e) bg_button_pane_cp05

0x7639,	// (0x0007d46d) cell_vitu_itu_pane_g1

0x7651,	// (0x0007d485) cell_vitu_itu_pane_t1_ParamLimits

0x7651,	// (0x0007d485) cell_vitu_itu_pane_t1

0x7663,	// (0x0007d497) cell_vitu_itu_pane_t2_ParamLimits

0x7663,	// (0x0007d497) cell_vitu_itu_pane_t2

0x0002,

0xf83a,	// (0x0008566e) cell_vitu_itu_pane_t_ParamLimits

0xf83a,	// (0x0008566e) cell_vitu_itu_pane_t

0xc1f8,	// (0x0008202c) bg_button_pane_cp07

0x7698,	// (0x0007d4cc) cell_vitu_function_pane_g1

0xae1e,	// (0x00080c52) main_calc_pane_g1

0x13dd,	// (0x00077211) aid_visual_content_pane

0xab8a,	// (0x000809be) main_vradio_pane

0x76a1,	// (0x0007d4d5) main_vradio_pane_g1_ParamLimits

0x76a1,	// (0x0007d4d5) main_vradio_pane_g1

0xc202,	// (0x00082036) main_vradio_pane_g2_ParamLimits

0xc202,	// (0x00082036) main_vradio_pane_g2

0x0001,

0xf841,	// (0x00085675) main_vradio_pane_g_ParamLimits

0xf841,	// (0x00085675) main_vradio_pane_g

0x76b8,	// (0x0007d4ec) main_vradio_pane_t1_ParamLimits

0x76b8,	// (0x0007d4ec) main_vradio_pane_t1

0x76cd,	// (0x0007d501) main_vradio_pane_t2_ParamLimits

0x76cd,	// (0x0007d501) main_vradio_pane_t2

0xc20f,	// (0x00082043) main_vradio_pane_t3_ParamLimits

0xc20f,	// (0x00082043) main_vradio_pane_t3

0x0002,

0xf846,	// (0x0008567a) main_vradio_pane_t_ParamLimits

0xf846,	// (0x0008567a) main_vradio_pane_t

0x76e2,	// (0x0007d516) vradio_rocker_control_pane_ParamLimits

0x76e2,	// (0x0007d516) vradio_rocker_control_pane

0x76f4,	// (0x0007d528) vradio_station_info_pane_ParamLimits

0x76f4,	// (0x0007d528) vradio_station_info_pane

0xc223,	// (0x00082057) vradio_frequency_info_pane_ParamLimits

0xc223,	// (0x00082057) vradio_frequency_info_pane

0xbbf7,	// (0x00081a2b) vradio_station_info_pane_g1

0xc232,	// (0x00082066) vradio_station_info_pane_t1_ParamLimits

0xc232,	// (0x00082066) vradio_station_info_pane_t1

0xc254,	// (0x00082088) vradio_station_info_pane_t2_ParamLimits

0xc254,	// (0x00082088) vradio_station_info_pane_t2

0x0001,

0xf84d,	// (0x00085681) vradio_station_info_pane_t_ParamLimits

0xf84d,	// (0x00085681) vradio_station_info_pane_t

0xc266,	// (0x0008209a) vradio_tuning_pane

0xc26e,	// (0x000820a2) vradio_rocker_control_pane_g1

0xc276,	// (0x000820aa) vradio_rocker_control_pane_g2

0xc27e,	// (0x000820b2) vradio_rocker_control_pane_g3

0xc286,	// (0x000820ba) vradio_rocker_control_pane_g4

0xc28e,	// (0x000820c2) vradio_rocker_control_pane_g5

0x0004,

0xf852,	// (0x00085686) vradio_rocker_control_pane_g

0x7704,	// (0x0007d538) vradio_frequency_info_pane_g1

0xc296,	// (0x000820ca) vradio_frequency_info_pane_t1_ParamLimits

0xc296,	// (0x000820ca) vradio_frequency_info_pane_t1

0x770e,	// (0x0007d542) vradio_tuning_pane_g1

0x7719,	// (0x0007d54d) vradio_tuning_pane_t1

0xabc0,	// (0x000809f4) area_side_right_pane_ParamLimits

0xabc0,	// (0x000809f4) area_side_right_pane

0xb689,	// (0x000814bd) status_small_pane_g1

0xb691,	// (0x000814c5) status_small_pane_g2

0xb69a,	// (0x000814ce) status_small_pane_g3

0xb6a3,	// (0x000814d7) status_small_pane_g4

0x0003,

0xf617,	// (0x0008544b) status_small_pane_g

0xb6ac,	// (0x000814e0) status_small_pane_t1

0xab8a,	// (0x000809be) main_video3_pane

0xc2aa,	// (0x000820de) cams_zoom_vslider_pane

0xc2b2,	// (0x000820e6) image3_wide_pane_ParamLimits

0xc2b2,	// (0x000820e6) image3_wide_pane

0xc2cc,	// (0x00082100) image3_wide_small_pane

0xc2d8,	// (0x0008210c) main_video3_pane_g1_ParamLimits

0xc2d8,	// (0x0008210c) main_video3_pane_g1

0xc2f4,	// (0x00082128) main_video3_pane_g2_ParamLimits

0xc2f4,	// (0x00082128) main_video3_pane_g2

0x0001,

0xf85d,	// (0x00085691) main_video3_pane_g_ParamLimits

0xf85d,	// (0x00085691) main_video3_pane_g

0xc310,	// (0x00082144) main_video3_pane_t1_ParamLimits

0xc310,	// (0x00082144) main_video3_pane_t1

0xc33b,	// (0x0008216f) main_video3_pane_t2_ParamLimits

0xc33b,	// (0x0008216f) main_video3_pane_t2

0xc368,	// (0x0008219c) main_video3_pane_t3_ParamLimits

0xc368,	// (0x0008219c) main_video3_pane_t3

0x0002,

0xf862,	// (0x00085696) main_video3_pane_t_ParamLimits

0xf862,	// (0x00085696) main_video3_pane_t

0xc395,	// (0x000821c9) cams_zoom_vslider_pane_g1

0xc39e,	// (0x000821d2) cams_zoom_vslider_pane_g2

0x0001,

0xf869,	// (0x0008569d) cams_zoom_vslider_pane_g

0xc3a6,	// (0x000821da) small_slider_vertical_pane

0xbbf7,	// (0x00081a2b) small_slider_vertical_pane_g1

0xbbf7,	// (0x00081a2b) small_slider_vertical_pane_g2

0xc3ae,	// (0x000821e2) small_slider_vertical_pane_g3

0x0002,

0xf86e,	// (0x000856a2) small_slider_vertical_pane_g

0xab8a,	// (0x000809be) main_hwr_training_pane

0xc3b7,	// (0x000821eb) hwr_training_instruct_pane_ParamLimits

0xc3b7,	// (0x000821eb) hwr_training_instruct_pane

0x7728,	// (0x0007d55c) hwr_training_navi_pane_ParamLimits

0x7728,	// (0x0007d55c) hwr_training_navi_pane

0x7747,	// (0x0007d57b) hwr_training_write_pane_ParamLimits

0x7747,	// (0x0007d57b) hwr_training_write_pane

0xab8a,	// (0x000809be) bg_frame_shadow_pane

0xc3ee,	// (0x00082222) hwr_training_write_pane_g1

0xc3f6,	// (0x0008222a) hwr_training_write_pane_g2

0xc3fe,	// (0x00082232) hwr_training_write_pane_g3

0xc406,	// (0x0008223a) hwr_training_write_pane_g4

0xc40e,	// (0x00082242) hwr_training_write_pane_g5

0xc416,	// (0x0008224a) hwr_training_write_pane_g6

0xc41e,	// (0x00082252) hwr_training_write_pane_g7

0x0006,

0xf875,	// (0x000856a9) hwr_training_write_pane_g

0xe819,	// (0x0008464d) hwr_training_navi_pane_g1_ParamLimits

0xe819,	// (0x0008464d) hwr_training_navi_pane_g1

0xe82b,	// (0x0008465f) hwr_training_navi_pane_g2_ParamLimits

0xe82b,	// (0x0008465f) hwr_training_navi_pane_g2

0xe83d,	// (0x00084671) hwr_training_navi_pane_g3_ParamLimits

0xe83d,	// (0x00084671) hwr_training_navi_pane_g3

0xe84d,	// (0x00084681) hwr_training_navi_pane_g4_ParamLimits

0xe84d,	// (0x00084681) hwr_training_navi_pane_g4

0x0004,

0xf884,	// (0x000856b8) hwr_training_navi_pane_g_ParamLimits

0xf884,	// (0x000856b8) hwr_training_navi_pane_g

0xe85a,	// (0x0008468e) hwr_training_navi_pane_t1

0x778f,	// (0x0007d5c3) list_single_hwr_training_instruct_pane_ParamLimits

0x778f,	// (0x0007d5c3) list_single_hwr_training_instruct_pane

0xc426,	// (0x0008225a) list_single_hwr_training_instruct_pane_t1

0xbb37,	// (0x0008196b) bg_frame_shadow_pane_g1

0xc435,	// (0x00082269) bg_frame_shadow_pane_g2

0xc43d,	// (0x00082271) bg_frame_shadow_pane_g3

0xc445,	// (0x00082279) bg_frame_shadow_pane_g4

0xc44d,	// (0x00082281) bg_frame_shadow_pane_g5

0xc455,	// (0x00082289) bg_frame_shadow_pane_g6

0xc45d,	// (0x00082291) bg_frame_shadow_pane_g7

0xf005,	// (0x00084e39) bg_frame_shadow_pane_g8

0x0007,

0xf88f,	// (0x000856c3) bg_frame_shadow_pane_g

0xab8a,	// (0x000809be) main_video_tele_dialer_pane

0x77ab,	// (0x0007d5df) aid_size_cell_video_keypad_ParamLimits

0x77ab,	// (0x0007d5df) aid_size_cell_video_keypad

0x77c5,	// (0x0007d5f9) grid_video_dialer_keypad_pane_ParamLimits

0x77c5,	// (0x0007d5f9) grid_video_dialer_keypad_pane

0x7811,	// (0x0007d645) video_down_pane_cp_ParamLimits

0x7811,	// (0x0007d645) video_down_pane_cp

0x7841,	// (0x0007d675) cell_video_dialer_keypad_pane_ParamLimits

0x7841,	// (0x0007d675) cell_video_dialer_keypad_pane

0xc465,	// (0x00082299) bg_button_pane_cp08_ParamLimits

0xc465,	// (0x00082299) bg_button_pane_cp08

0x7867,	// (0x0007d69b) cell_video_dialer_keypad_pane_g1_ParamLimits

0x7867,	// (0x0007d69b) cell_video_dialer_keypad_pane_g1

0x6f2a,	// (0x0007cd5e) mup3_rocker2_pane_ParamLimits

0x6f2a,	// (0x0007cd5e) mup3_rocker2_pane

0xbbf7,	// (0x00081a2b) mup3_rocker2_pane_g1

0x5a21,	// (0x0007b855) main_dialer2_pane

0xab8a,	// (0x000809be) main_mp4_pane

0xe870,	// (0x000846a4) main_mp4_pane_g1_ParamLimits

0xe870,	// (0x000846a4) main_mp4_pane_g1

0xe870,	// (0x000846a4) main_mp4_pane_g2_ParamLimits

0xe870,	// (0x000846a4) main_mp4_pane_g2

0x78a2,	// (0x0007d6d6) main_mp4_pane_g3_ParamLimits

0x78a2,	// (0x0007d6d6) main_mp4_pane_g3

0xe87e,	// (0x000846b2) main_mp4_pane_g4_ParamLimits

0xe87e,	// (0x000846b2) main_mp4_pane_g4

0xe8a6,	// (0x000846da) main_mp4_pane_g5_ParamLimits

0xe8a6,	// (0x000846da) main_mp4_pane_g5

0x0005,

0xf8af,	// (0x000856e3) main_mp4_pane_g_ParamLimits

0xf8af,	// (0x000856e3) main_mp4_pane_g

0xe8f6,	// (0x0008472a) main_mp4_pane_t1_ParamLimits

0xe8f6,	// (0x0008472a) main_mp4_pane_t1

0xe952,	// (0x00084786) main_mp4_pane_t2_ParamLimits

0xe952,	// (0x00084786) main_mp4_pane_t2

0xc471,	// (0x000822a5) main_mp4_pane_t3_ParamLimits

0xc471,	// (0x000822a5) main_mp4_pane_t3

0xe9a4,	// (0x000847d8) main_mp4_pane_t4_ParamLimits

0xe9a4,	// (0x000847d8) main_mp4_pane_t4

0x0003,

0xf8bc,	// (0x000856f0) main_mp4_pane_t_ParamLimits

0xf8bc,	// (0x000856f0) main_mp4_pane_t

0xe9e4,	// (0x00084818) mp4_progress_pane_ParamLimits

0xe9e4,	// (0x00084818) mp4_progress_pane

0xea2e,	// (0x00084862) mp4_rocker_pane_ParamLimits

0xea2e,	// (0x00084862) mp4_rocker_pane

0xc499,	// (0x000822cd) mp4_progress_pane_t1

0xc4b2,	// (0x000822e6) mp4_progress_pane_t2

0x0001,

0xf8c5,	// (0x000856f9) mp4_progress_pane_t

0xc4cb,	// (0x000822ff) mup_progress_pane_cp04

0xbbf7,	// (0x00081a2b) mp4_rocker_pane_g1

0x78ec,	// (0x0007d720) aid_cell_size_keypad2_ParamLimits

0x78ec,	// (0x0007d720) aid_cell_size_keypad2

0x7902,	// (0x0007d736) dialer2_ne_pane_ParamLimits

0x7902,	// (0x0007d736) dialer2_ne_pane

0x791a,	// (0x0007d74e) grid_dialer2_keypad_pane_ParamLimits

0x791a,	// (0x0007d74e) grid_dialer2_keypad_pane

0xb9d6,	// (0x0008180a) bg_popup_call_pane_cp07_ParamLimits

0xb9d6,	// (0x0008180a) bg_popup_call_pane_cp07

0x7936,	// (0x0007d76a) dialer2_ne_pane_t1_ParamLimits

0x7936,	// (0x0007d76a) dialer2_ne_pane_t1

0x7976,	// (0x0007d7aa) cell_dialer2_keypad_pane_ParamLimits

0x7976,	// (0x0007d7aa) cell_dialer2_keypad_pane

0xc4e9,	// (0x0008231d) bg_button_pane_pane_cp04_ParamLimits

0xc4e9,	// (0x0008231d) bg_button_pane_pane_cp04

0x799c,	// (0x0007d7d0) cell_dialer2_keypad_pane_g1_ParamLimits

0x799c,	// (0x0007d7d0) cell_dialer2_keypad_pane_g1

0x2264,	// (0x00078098) aid_placing_vt_set_content_ParamLimits

0x2264,	// (0x00078098) aid_placing_vt_set_content

0x2288,	// (0x000780bc) aid_placing_vt_set_title_ParamLimits

0x2288,	// (0x000780bc) aid_placing_vt_set_title

0xab8a,	// (0x000809be) main_image3_pane

0x7a62,	// (0x0007d896) area_side_right_pane_cp01_ParamLimits

0x7a62,	// (0x0007d896) area_side_right_pane_cp01

0xe870,	// (0x000846a4) main_image3_pane_g1_ParamLimits

0xe870,	// (0x000846a4) main_image3_pane_g1

0x7a7b,	// (0x0007d8af) main_image3_pane_g2_ParamLimits

0x7a7b,	// (0x0007d8af) main_image3_pane_g2

0x7aa3,	// (0x0007d8d7) main_image3_pane_g3_ParamLimits

0x7aa3,	// (0x0007d8d7) main_image3_pane_g3

0x7acd,	// (0x0007d901) main_image3_pane_g4_ParamLimits

0x7acd,	// (0x0007d901) main_image3_pane_g4

0x0003,

0xf8d4,	// (0x00085708) main_image3_pane_g_ParamLimits

0xf8d4,	// (0x00085708) main_image3_pane_g

0x7af7,	// (0x0007d92b) main_image3_pane_t1_ParamLimits

0x7af7,	// (0x0007d92b) main_image3_pane_t1

0x7b4f,	// (0x0007d983) main_image3_pane_t2_ParamLimits

0x7b4f,	// (0x0007d983) main_image3_pane_t2

0x7ba1,	// (0x0007d9d5) main_image3_pane_t3_ParamLimits

0x7ba1,	// (0x0007d9d5) main_image3_pane_t3

0x0003,

0xf8dd,	// (0x00085711) main_image3_pane_t_ParamLimits

0xf8dd,	// (0x00085711) main_image3_pane_t

0xac03,	// (0x00080a37) grid_sctrl_middle_pane_cp01_ParamLimits

0xac03,	// (0x00080a37) grid_sctrl_middle_pane_cp01

0x7c29,	// (0x0007da5d) cell_sctrl_middle_pane_cp01_ParamLimits

0x7c29,	// (0x0007da5d) cell_sctrl_middle_pane_cp01

0x7c46,	// (0x0007da7a) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x7c46,	// (0x0007da7a) cell_sctrl_middle_pane_cp01_g1

0xab8a,	// (0x000809be) main_call4_pane

0x7c5b,	// (0x0007da8f) aid_size_button_call4_ParamLimits

0x7c5b,	// (0x0007da8f) aid_size_button_call4

0x7c8e,	// (0x0007dac2) call4_windows_pane_ParamLimits

0x7c8e,	// (0x0007dac2) call4_windows_pane

0x7cb0,	// (0x0007dae4) grid_call4_button_pane_ParamLimits

0x7cb0,	// (0x0007dae4) grid_call4_button_pane

0xc4f5,	// (0x00082329) call4_windows_conf_pane

0x7cdb,	// (0x0007db0f) popup_call4_audio_first_window_ParamLimits

0x7cdb,	// (0x0007db0f) popup_call4_audio_first_window

0x7d07,	// (0x0007db3b) popup_call4_audio_second_window_ParamLimits

0x7d07,	// (0x0007db3b) popup_call4_audio_second_window

0xc532,	// (0x00082366) popup_call4_audio_wait_window_ParamLimits

0xc532,	// (0x00082366) popup_call4_audio_wait_window

0x7d1d,	// (0x0007db51) cell_call4_button_pane_ParamLimits

0x7d1d,	// (0x0007db51) cell_call4_button_pane

0x7d44,	// (0x0007db78) bg_button_pane_cp09_ParamLimits

0x7d44,	// (0x0007db78) bg_button_pane_cp09

0x7d50,	// (0x0007db84) cell_call4_button_pane_g1_ParamLimits

0x7d50,	// (0x0007db84) cell_call4_button_pane_g1

0x7d76,	// (0x0007dbaa) cell_call4_button_pane_t1_ParamLimits

0x7d76,	// (0x0007dbaa) cell_call4_button_pane_t1

0xc57a,	// (0x000823ae) popup_call4_audio_conf_window_ParamLimits

0xc57a,	// (0x000823ae) popup_call4_audio_conf_window

0x6f8c,	// (0x0007cdc0) mup3_progress_pane_t1_ParamLimits

0x6fa3,	// (0x0007cdd7) mup3_progress_pane_t2_ParamLimits

0xbeae,	// (0x00081ce2) mup3_progress_pane_t3_ParamLimits

0xf7bb,	// (0x000855ef) mup3_progress_pane_t_ParamLimits

0xbec5,	// (0x00081cf9) mup_progress_pane_cp03_ParamLimits

0x756c,	// (0x0007d3a0) mup3_control_keys_pane_g4_copy1

0xea12,	// (0x00084846) mp4_rocker2_pane_ParamLimits

0xea12,	// (0x00084846) mp4_rocker2_pane

0xc594,	// (0x000823c8) mp4_rocker2_pane_g1

0xc59c,	// (0x000823d0) mp4_rocker2_pane_g2

0xea84,	// (0x000848b8) mp4_rocker2_pane_g3

0xea8c,	// (0x000848c0) mp4_rocker2_pane_g4

0xea94,	// (0x000848c8) mp4_rocker2_pane_g5

0x0004,

0xf8e6,	// (0x0008571a) mp4_rocker2_pane_g

0xab8a,	// (0x000809be) main_camera4_pane

0xab8a,	// (0x000809be) main_video4_pane

0x77df,	// (0x0007d613) main_video_tele_dialer_pane_t1_ParamLimits

0x77df,	// (0x0007d613) main_video_tele_dialer_pane_t1

0x77f8,	// (0x0007d62c) main_video_tele_dialer_pane_t2_ParamLimits

0x77f8,	// (0x0007d62c) main_video_tele_dialer_pane_t2

0x0001,

0xf8a0,	// (0x000856d4) main_video_tele_dialer_pane_t_ParamLimits

0xf8a0,	// (0x000856d4) main_video_tele_dialer_pane_t

0x7db4,	// (0x0007dbe8) cam4_autofocus_pane_ParamLimits

0x7db4,	// (0x0007dbe8) cam4_autofocus_pane

0x7dca,	// (0x0007dbfe) cam4_image_uncrop_pane_ParamLimits

0x7dca,	// (0x0007dbfe) cam4_image_uncrop_pane

0x7de3,	// (0x0007dc17) cam4_indicators_pane_ParamLimits

0x7de3,	// (0x0007dc17) cam4_indicators_pane

0x7e12,	// (0x0007dc46) main_camera4_pane_g1_ParamLimits

0x7e12,	// (0x0007dc46) main_camera4_pane_g1

0x7e25,	// (0x0007dc59) main_camera4_pane_g2_ParamLimits

0x7e25,	// (0x0007dc59) main_camera4_pane_g2

0x7e38,	// (0x0007dc6c) main_camera4_pane_g3_ParamLimits

0x7e38,	// (0x0007dc6c) main_camera4_pane_g3

0x7e4b,	// (0x0007dc7f) main_camera4_pane_g4_ParamLimits

0x7e4b,	// (0x0007dc7f) main_camera4_pane_g4

0x7e5e,	// (0x0007dc92) main_camera4_pane_g5_ParamLimits

0x7e5e,	// (0x0007dc92) main_camera4_pane_g5

0x0005,

0xf8f1,	// (0x00085725) main_camera4_pane_g_ParamLimits

0xf8f1,	// (0x00085725) main_camera4_pane_g

0x7e82,	// (0x0007dcb6) main_camera4_pane_t1_ParamLimits

0x7e82,	// (0x0007dcb6) main_camera4_pane_t1

0xbe27,	// (0x00081c5b) bg_tb_trans_pane_cp06

0xeac2,	// (0x000848f6) cam4_indicators_pane_g1

0xead2,	// (0x00084906) cam4_indicators_pane_g2

0x0002,

0xf90c,	// (0x00085740) cam4_indicators_pane_g

0xeaea,	// (0x0008491e) cam4_indicators_pane_t1

0x7ee6,	// (0x0007dd1a) main_video4_pane_g1_ParamLimits

0x7ee6,	// (0x0007dd1a) main_video4_pane_g1

0x7ef9,	// (0x0007dd2d) main_video4_pane_g2_ParamLimits

0x7ef9,	// (0x0007dd2d) main_video4_pane_g2

0x7f0d,	// (0x0007dd41) main_video4_pane_g3_ParamLimits

0x7f0d,	// (0x0007dd41) main_video4_pane_g3

0x7f21,	// (0x0007dd55) main_video4_pane_g4_ParamLimits

0x7f21,	// (0x0007dd55) main_video4_pane_g4

0x0004,

0xf913,	// (0x00085747) main_video4_pane_g_ParamLimits

0xf913,	// (0x00085747) main_video4_pane_g

0x7f49,	// (0x0007dd7d) vid4_indicators_pane_ParamLimits

0x7f49,	// (0x0007dd7d) vid4_indicators_pane

0x7f79,	// (0x0007ddad) video4_image_uncrop_cif_pane_ParamLimits

0x7f79,	// (0x0007ddad) video4_image_uncrop_cif_pane

0x7f93,	// (0x0007ddc7) video4_image_uncrop_nhd_pane_ParamLimits

0x7f93,	// (0x0007ddc7) video4_image_uncrop_nhd_pane

0x7dca,	// (0x0007dbfe) video4_image_uncrop_vga_pane_ParamLimits

0x7dca,	// (0x0007dbfe) video4_image_uncrop_vga_pane

0xc5b8,	// (0x000823ec) bg_tb_trans_pane_cp07

0x7fa9,	// (0x0007dddd) vid4_indicators_pane_g1

0x7fb8,	// (0x0007ddec) vid4_indicators_pane_g2

0x7fc7,	// (0x0007ddfb) vid4_indicators_pane_g3

0x0004,

0xf91e,	// (0x00085752) vid4_indicators_pane_g

0x7fec,	// (0x0007de20) vid4_indicators_pane_t1

0x8000,	// (0x0007de34) cam4_autofocus_pane_g1

0x8008,	// (0x0007de3c) cam4_autofocus_pane_g2

0x8010,	// (0x0007de44) cam4_autofocus_pane_g3

0x0002,

0xf929,	// (0x0008575d) cam4_autofocus_pane_g

0x8018,	// (0x0007de4c) cam4_autofocus_pane_g3_copy1

0x7825,	// (0x0007d659) video_down_pane_cp_t1

0x7833,	// (0x0007d667) video_down_pane_cp_t2

0x0001,

0xf8a5,	// (0x000856d9) video_down_pane_cp_t

0xac03,	// (0x00080a37) popup_vitu2_window_ParamLimits

0xac03,	// (0x00080a37) popup_vitu2_window

0x8020,	// (0x0007de54) aid_size_cell2_itu2_ParamLimits

0x8020,	// (0x0007de54) aid_size_cell2_itu2

0x8046,	// (0x0007de7a) aid_size_cell_itu2_ParamLimits

0x8046,	// (0x0007de7a) aid_size_cell_itu2

0x80a4,	// (0x0007ded8) bg_popup_window_pane_cp09_ParamLimits

0x80a4,	// (0x0007ded8) bg_popup_window_pane_cp09

0x80b2,	// (0x0007dee6) field_vitu2_entry_pane_ParamLimits

0x80b2,	// (0x0007dee6) field_vitu2_entry_pane

0x80da,	// (0x0007df0e) grid_vitu2_function_pane_ParamLimits

0x80da,	// (0x0007df0e) grid_vitu2_function_pane

0x812b,	// (0x0007df5f) grid_vitu2_itu_pane_ParamLimits

0x812b,	// (0x0007df5f) grid_vitu2_itu_pane

0x81b6,	// (0x0007dfea) cell_vitu2_itu_pane_ParamLimits

0x81b6,	// (0x0007dfea) cell_vitu2_itu_pane

0x81dc,	// (0x0007e010) cell_vitu2_function_pane_ParamLimits

0x81dc,	// (0x0007e010) cell_vitu2_function_pane

0xc5c6,	// (0x000823fa) bg_popup_call_pane_cp08_ParamLimits

0xc5c6,	// (0x000823fa) bg_popup_call_pane_cp08

0xc5df,	// (0x00082413) field_vitu2_entry_pane_g1

0xc5eb,	// (0x0008241f) field_vitu2_entry_pane_g2

0x0002,

0xf930,	// (0x00085764) field_vitu2_entry_pane_g

0x0a57,	// (0x0007688b) field_vitu2_entry_pane_t1_ParamLimits

0x0a57,	// (0x0007688b) field_vitu2_entry_pane_t1

0xc605,	// (0x00082439) field_vitu2_entry_pane_t2_ParamLimits

0xc605,	// (0x00082439) field_vitu2_entry_pane_t2

0x0001,

0xf937,	// (0x0008576b) field_vitu2_entry_pane_t_ParamLimits

0xf937,	// (0x0008576b) field_vitu2_entry_pane_t

0x8220,	// (0x0007e054) bg_button_pane_cp010_ParamLimits

0x8220,	// (0x0007e054) bg_button_pane_cp010

0x822e,	// (0x0007e062) cell_vitu2_itu_pane_g1

0x824c,	// (0x0007e080) cell_vitu2_itu_pane_t1_ParamLimits

0x824c,	// (0x0007e080) cell_vitu2_itu_pane_t1

0x0a85,	// (0x000768b9) cell_vitu2_itu_pane_t2_ParamLimits

0x0a85,	// (0x000768b9) cell_vitu2_itu_pane_t2

0x0002,

0xf941,	// (0x00085775) cell_vitu2_itu_pane_t_ParamLimits

0xf941,	// (0x00085775) cell_vitu2_itu_pane_t

0xac03,	// (0x00080a37) bg_button_pane_cp011

0x82b2,	// (0x0007e0e6) cell_vitu2_function_pane_g1

0xab8a,	// (0x000809be) main_myfav_hc_pane

0x7bf1,	// (0x0007da25) popup_image3_note_pane_ParamLimits

0x7bf1,	// (0x0007da25) popup_image3_note_pane

0x7c0d,	// (0x0007da41) popup_image3_tool_bar_pane_ParamLimits

0x7c0d,	// (0x0007da41) popup_image3_tool_bar_pane

0x0b09,	// (0x0007693d) cell_vitu2_itu_pane_t3_ParamLimits

0x0b09,	// (0x0007693d) cell_vitu2_itu_pane_t3

0xab8a,	// (0x000809be) bg_popup_trans_pane

0xc62a,	// (0x0008245e) grid_image3_tool_bar_pane

0xc634,	// (0x00082468) bg_popup_trans_pane_g1

0x285d,	// (0x00078691) bg_popup_trans_pane_g2

0xc63c,	// (0x00082470) bg_popup_trans_pane_g3

0xc644,	// (0x00082478) bg_popup_trans_pane_g4

0xc64c,	// (0x00082480) bg_popup_trans_pane_g5

0xc654,	// (0x00082488) bg_popup_trans_pane_g6

0xc65c,	// (0x00082490) bg_popup_trans_pane_g7

0xc664,	// (0x00082498) bg_popup_trans_pane_g8

0x283d,	// (0x00078671) bg_popup_trans_pane_g9

0x0008,

0xf948,	// (0x0008577c) bg_popup_trans_pane_g

0xc66c,	// (0x000824a0) cell_image3_tool_bar_pane_ParamLimits

0xc66c,	// (0x000824a0) cell_image3_tool_bar_pane

0xbbf7,	// (0x00081a2b) cell_image3_tool_bar_pane_g1

0xab8a,	// (0x000809be) bg_popup_trans_pane_cp1

0xc682,	// (0x000824b6) popup_image3_note_pane_t1

0xc690,	// (0x000824c4) popup_image3_note_pane_t2

0xc69e,	// (0x000824d2) popup_image3_note_pane_t3

0x0002,

0xf95b,	// (0x0008578f) popup_image3_note_pane_t

0xc6ae,	// (0x000824e2) popup_image3_note_pane_t3_copy1

0x82c6,	// (0x0007e0fa) bg_myfav_hc_instruction_pane_ParamLimits

0x82c6,	// (0x0007e0fa) bg_myfav_hc_instruction_pane

0x82de,	// (0x0007e112) cell_myfav_contact_pane_ParamLimits

0x82de,	// (0x0007e112) cell_myfav_contact_pane

0x82fa,	// (0x0007e12e) cell_myfav_contact_pane_cp1_ParamLimits

0x82fa,	// (0x0007e12e) cell_myfav_contact_pane_cp1

0x8312,	// (0x0007e146) cell_myfav_contact_pane_cp2_ParamLimits

0x8312,	// (0x0007e146) cell_myfav_contact_pane_cp2

0x832a,	// (0x0007e15e) cell_myfav_contact_pane_cp3_ParamLimits

0x832a,	// (0x0007e15e) cell_myfav_contact_pane_cp3

0x8341,	// (0x0007e175) cell_myfav_contact_pane_cp4_ParamLimits

0x8341,	// (0x0007e175) cell_myfav_contact_pane_cp4

0x8359,	// (0x0007e18d) cell_myfav_contact_pane_cp5_ParamLimits

0x8359,	// (0x0007e18d) cell_myfav_contact_pane_cp5

0x836d,	// (0x0007e1a1) cell_myfav_contact_pane_cp6_ParamLimits

0x836d,	// (0x0007e1a1) cell_myfav_contact_pane_cp6

0x8383,	// (0x0007e1b7) cell_myfav_contact_pane_cp7_ParamLimits

0x8383,	// (0x0007e1b7) cell_myfav_contact_pane_cp7

0xc6bc,	// (0x000824f0) listscroll_gen_pane_cp05

0x839b,	// (0x0007e1cf) main_myfav_hc_pane_g1_ParamLimits

0x839b,	// (0x0007e1cf) main_myfav_hc_pane_g1

0x83b5,	// (0x0007e1e9) main_myfav_hc_pane_g2_ParamLimits

0x83b5,	// (0x0007e1e9) main_myfav_hc_pane_g2

0x0002,

0xf962,	// (0x00085796) main_myfav_hc_pane_g_ParamLimits

0xf962,	// (0x00085796) main_myfav_hc_pane_g

0x83e9,	// (0x0007e21d) main_myfav_hc_pane_t1_ParamLimits

0x83e9,	// (0x0007e21d) main_myfav_hc_pane_t1

0xc6c5,	// (0x000824f9) main_myfav_hc_pane_t2_ParamLimits

0xc6c5,	// (0x000824f9) main_myfav_hc_pane_t2

0xc6d7,	// (0x0008250b) main_myfav_hc_pane_t3_ParamLimits

0xc6d7,	// (0x0008250b) main_myfav_hc_pane_t3

0x8400,	// (0x0007e234) main_myfav_hc_pane_t4_ParamLimits

0x8400,	// (0x0007e234) main_myfav_hc_pane_t4

0x0004,

0xf969,	// (0x0008579d) main_myfav_hc_pane_t_ParamLimits

0xf969,	// (0x0008579d) main_myfav_hc_pane_t

0xbbf7,	// (0x00081a2b) bg_myfav_hc_instruction_pane_g1

0xc6e9,	// (0x0008251d) cell_myfav_contact_pane_g1_ParamLimits

0xc6e9,	// (0x0008251d) cell_myfav_contact_pane_g1

0xc6e9,	// (0x0008251d) cell_myfav_contact_pane_g2_ParamLimits

0xc6e9,	// (0x0008251d) cell_myfav_contact_pane_g2

0xc6f5,	// (0x00082529) cell_myfav_contact_pane_g3_ParamLimits

0xc6f5,	// (0x00082529) cell_myfav_contact_pane_g3

0xbe98,	// (0x00081ccc) cell_myfav_contact_pane_g4_ParamLimits

0xbe98,	// (0x00081ccc) cell_myfav_contact_pane_g4

0xc702,	// (0x00082536) cell_myfav_contact_pane_g5_ParamLimits

0xc702,	// (0x00082536) cell_myfav_contact_pane_g5

0x0004,

0xf974,	// (0x000857a8) cell_myfav_contact_pane_g_ParamLimits

0xf974,	// (0x000857a8) cell_myfav_contact_pane_g

0x83cf,	// (0x0007e203) main_myfav_hc_pane_g3_ParamLimits

0x83cf,	// (0x0007e203) main_myfav_hc_pane_g3

0x1503,	// (0x00077337) popup_adpt_find_window

0x842a,	// (0x0007e25e) afind_page_pane_ParamLimits

0x842a,	// (0x0007e25e) afind_page_pane

0x843f,	// (0x0007e273) aid_size_cell_afind_ParamLimits

0x843f,	// (0x0007e273) aid_size_cell_afind

0x845d,	// (0x0007e291) bg_popup_sub_pane_cp09_ParamLimits

0x845d,	// (0x0007e291) bg_popup_sub_pane_cp09

0x846a,	// (0x0007e29e) find_pane_cp01_ParamLimits

0x846a,	// (0x0007e29e) find_pane_cp01

0xc70e,	// (0x00082542) grid_afind_control_pane_ParamLimits

0xc70e,	// (0x00082542) grid_afind_control_pane

0x8477,	// (0x0007e2ab) grid_afind_pane_ParamLimits

0x8477,	// (0x0007e2ab) grid_afind_pane

0x8499,	// (0x0007e2cd) cell_afind_pane_ParamLimits

0x8499,	// (0x0007e2cd) cell_afind_pane

0xbbf7,	// (0x00081a2b) afind_page_pane_g1

0x84fc,	// (0x0007e330) afind_page_pane_g2

0x8505,	// (0x0007e339) afind_page_pane_g3

0x0002,

0xf97f,	// (0x000857b3) afind_page_pane_g

0x850e,	// (0x0007e342) afind_page_pane_t1

0xc722,	// (0x00082556) cell_afind_grid_control_pane_ParamLimits

0xc722,	// (0x00082556) cell_afind_grid_control_pane

0xc4e9,	// (0x0008231d) bg_button_pane_cp69_ParamLimits

0xc4e9,	// (0x0008231d) bg_button_pane_cp69

0x852e,	// (0x0007e362) cell_afind_pane_g1_ParamLimits

0x852e,	// (0x0007e362) cell_afind_pane_g1

0x853b,	// (0x0007e36f) cell_afind_pane_t1_ParamLimits

0x853b,	// (0x0007e36f) cell_afind_pane_t1

0x21f5,	// (0x00078029) bg_button_pane_cp72

0xc731,	// (0x00082565) cell_afind_grid_control_pane_g1

0x49f7,	// (0x0007a82b) aid_image_placing_area_ParamLimits

0x49f7,	// (0x0007a82b) aid_image_placing_area

0xc1b5,	// (0x00081fe9) field_vitu_entry_pane_g1_ParamLimits

0xc1b5,	// (0x00081fe9) field_vitu_entry_pane_g1

0xc1c1,	// (0x00081ff5) field_vitu_entry_pane_g2_ParamLimits

0xc1c1,	// (0x00081ff5) field_vitu_entry_pane_g2

0x0001,

0xf830,	// (0x00085664) field_vitu_entry_pane_g_ParamLimits

0xf830,	// (0x00085664) field_vitu_entry_pane_g

0x7639,	// (0x0007d46d) cell_vitu_itu_pane_g1_ParamLimits

0x767b,	// (0x0007d4af) cell_vitu_itu_pane_t3_ParamLimits

0x767b,	// (0x0007d4af) cell_vitu_itu_pane_t3

0xc499,	// (0x000822cd) mp4_progress_pane_t1_ParamLimits

0xc4b2,	// (0x000822e6) mp4_progress_pane_t2_ParamLimits

0xf8c5,	// (0x000856f9) mp4_progress_pane_t_ParamLimits

0xc4cb,	// (0x000822ff) mup_progress_pane_cp04_ParamLimits

0x8414,	// (0x0007e248) main_myfav_hc_pane_t5_ParamLimits

0x8414,	// (0x0007e248) main_myfav_hc_pane_t5

0xabb0,	// (0x000809e4) aid_zoom_text_primary

0x1503,	// (0x00077337) popup_adpt_find_window_ParamLimits

0xac03,	// (0x00080a37) main_cam_set_pane

0x7dfc,	// (0x0007dc30) cam4_zoom_pane_ParamLimits

0x7dfc,	// (0x0007dc30) cam4_zoom_pane

0x854d,	// (0x0007e381) main_cam_set_pane_g1_ParamLimits

0x854d,	// (0x0007e381) main_cam_set_pane_g1

0x855b,	// (0x0007e38f) main_cam_set_pane_g2_ParamLimits

0x855b,	// (0x0007e38f) main_cam_set_pane_g2

0x0001,

0xf986,	// (0x000857ba) main_cam_set_pane_g_ParamLimits

0xf986,	// (0x000857ba) main_cam_set_pane_g

0x857e,	// (0x0007e3b2) main_cam_set_pane_t1_ParamLimits

0x857e,	// (0x0007e3b2) main_cam_set_pane_t1

0x8599,	// (0x0007e3cd) main_cset_listscroll_pane_ParamLimits

0x8599,	// (0x0007e3cd) main_cset_listscroll_pane

0x85bd,	// (0x0007e3f1) main_cset_slider_pane_ParamLimits

0x85bd,	// (0x0007e3f1) main_cset_slider_pane

0xc742,	// (0x00082576) main_cset_list_pane_ParamLimits

0xc742,	// (0x00082576) main_cset_list_pane

0xc752,	// (0x00082586) scroll_pane_cp028

0x85e7,	// (0x0007e41b) aid_area_touch_slider

0x8603,	// (0x0007e437) cset_slider_pane

0x862d,	// (0x0007e461) main_cset_slider_pane_g1

0x8642,	// (0x0007e476) main_cset_slider_pane_g2

0x0011,

0xf98b,	// (0x000857bf) main_cset_slider_pane_g

0xc78b,	// (0x000825bf) main_cset_slider_pane_t1

0x8704,	// (0x0007e538) main_cset_slider_pane_t2

0x871e,	// (0x0007e552) main_cset_slider_pane_t3

0x8738,	// (0x0007e56c) main_cset_slider_pane_t4

0x8752,	// (0x0007e586) main_cset_slider_pane_t5

0x8770,	// (0x0007e5a4) main_cset_slider_pane_t6

0x8787,	// (0x0007e5bb) main_cset_slider_pane_t7

0x000e,

0xf9b0,	// (0x000857e4) main_cset_slider_pane_t

0x8893,	// (0x0007e6c7) cset_list_set_pane_ParamLimits

0x8893,	// (0x0007e6c7) cset_list_set_pane

0x88a7,	// (0x0007e6db) aid_position_infowindow_above

0x88af,	// (0x0007e6e3) aid_position_infowindow_below

0x88b7,	// (0x0007e6eb) cset_list_set_pane_g1_ParamLimits

0x88b7,	// (0x0007e6eb) cset_list_set_pane_g1

0x0b61,	// (0x00076995) cset_list_set_pane_g3_ParamLimits

0x0b61,	// (0x00076995) cset_list_set_pane_g3

0x0001,

0xf9cf,	// (0x00085803) cset_list_set_pane_g_ParamLimits

0xf9cf,	// (0x00085803) cset_list_set_pane_g

0x0b70,	// (0x000769a4) cset_list_set_pane_t1_ParamLimits

0x0b70,	// (0x000769a4) cset_list_set_pane_t1

0xac03,	// (0x00080a37) list_highlight_pane_cp021_ParamLimits

0xac03,	// (0x00080a37) list_highlight_pane_cp021

0x423e,	// (0x0007a072) cset_slider_pane_g1

0x4250,	// (0x0007a084) cset_slider_pane_g2

0x4247,	// (0x0007a07b) cset_slider_pane_g3

0x0002,

0xf9d4,	// (0x00085808) cset_slider_pane_g

0xeb1a,	// (0x0008494e) aid_area_touch_cam4_zoom

0xeb22,	// (0x00084956) cam4_zoom_cont_pane

0xeb2a,	// (0x0008495e) cam4_zoom_pane_g1

0xeb32,	// (0x00084966) cam4_zoom_pane_g2

0x88c3,	// (0x0007e6f7) cam4_zoom_pane_g3

0x0002,

0xf9db,	// (0x0008580f) cam4_zoom_pane_g

0xc82b,	// (0x0008265f) cam4_zoom_cont_pane_g1

0xc834,	// (0x00082668) cam4_zoom_cont_pane_g2

0xc83d,	// (0x00082671) cam4_zoom_cont_pane_g3

0x0002,

0xf9e2,	// (0x00085816) cam4_zoom_cont_pane_g

0x7c79,	// (0x0007daad) call4_image_pane_ParamLimits

0x7c79,	// (0x0007daad) call4_image_pane

0xc4f5,	// (0x00082329) call4_windows_conf_pane_ParamLimits

0xc510,	// (0x00082344) popup_call4_audio_in_window_ParamLimits

0xc510,	// (0x00082344) popup_call4_audio_in_window

0xab8a,	// (0x000809be) bg_popup_call2_act_pane_cp02

0xc572,	// (0x000823a6) call4_list_conf_pane

0xbbf7,	// (0x00081a2b) call4_image_pane_g1

0xbbf7,	// (0x00081a2b) call4_image_pane_g2

0x0001,

0xf6fb,	// (0x0008552f) call4_image_pane_g

0xc846,	// (0x0008267a) list_single_graphic_popup_conf4_pane_ParamLimits

0xc846,	// (0x0008267a) list_single_graphic_popup_conf4_pane

0xab8a,	// (0x000809be) list_highlight_pane_cp022

0xc85b,	// (0x0008268f) list_single_graphic_popup_conf4_pane_g1

0x3738,	// (0x0007956c) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9e9,	// (0x0008581d) list_single_graphic_popup_conf4_pane_g

0xc863,	// (0x00082697) list_single_graphic_popup_conf4_pane_t1

0x23b1,	// (0x000781e5) popup_vtel_slider_window_ParamLimits

0x23b1,	// (0x000781e5) popup_vtel_slider_window

0xc4d7,	// (0x0008230b) dialer2_ne_pane_t2_ParamLimits

0xc4d7,	// (0x0008230b) dialer2_ne_pane_t2

0x0001,

0xf8ca,	// (0x000856fe) dialer2_ne_pane_t_ParamLimits

0xf8ca,	// (0x000856fe) dialer2_ne_pane_t

0xb9d6,	// (0x0008180a) bg_popup_sub_pane_cp010_ParamLimits

0xb9d6,	// (0x0008180a) bg_popup_sub_pane_cp010

0x88cb,	// (0x0007e6ff) popup_vtel_slider_window_g1_ParamLimits

0x88cb,	// (0x0007e6ff) popup_vtel_slider_window_g1

0x88de,	// (0x0007e712) popup_vtel_slider_window_g2_ParamLimits

0x88de,	// (0x0007e712) popup_vtel_slider_window_g2

0x0003,

0xf9ee,	// (0x00085822) popup_vtel_slider_window_g_ParamLimits

0xf9ee,	// (0x00085822) popup_vtel_slider_window_g

0x8934,	// (0x0007e768) vtel_slider_pane_ParamLimits

0x8934,	// (0x0007e768) vtel_slider_pane

0x8956,	// (0x0007e78a) vtel_slider_pane_g1_ParamLimits

0x8956,	// (0x0007e78a) vtel_slider_pane_g1

0x896a,	// (0x0007e79e) vtel_slider_pane_g2_ParamLimits

0x896a,	// (0x0007e79e) vtel_slider_pane_g2

0x8982,	// (0x0007e7b6) vtel_slider_pane_g3_ParamLimits

0x8982,	// (0x0007e7b6) vtel_slider_pane_g3

0x8956,	// (0x0007e78a) vtel_slider_pane_g4_ParamLimits

0x8956,	// (0x0007e78a) vtel_slider_pane_g4

0x8998,	// (0x0007e7cc) vtel_slider_pane_g5_ParamLimits

0x8998,	// (0x0007e7cc) vtel_slider_pane_g5

0x0004,

0xf9f7,	// (0x0008582b) vtel_slider_pane_g_ParamLimits

0xf9f7,	// (0x0008582b) vtel_slider_pane_g

0xab8a,	// (0x000809be) main_gallery2_pane

0x8072,	// (0x0007dea6) aid_size_row_itut2_dropdow_list_ParamLimits

0x8072,	// (0x0007dea6) aid_size_row_itut2_dropdow_list

0x8102,	// (0x0007df36) grid_vitu2_function_top_pane_ParamLimits

0x8102,	// (0x0007df36) grid_vitu2_function_top_pane

0x8161,	// (0x0007df95) popup_vitu2_dropdown_list_window_ParamLimits

0x8161,	// (0x0007df95) popup_vitu2_dropdown_list_window

0x818a,	// (0x0007dfbe) popup_vitu2_match_list_window

0x89ae,	// (0x0007e7e2) cell_vitu2_function_top_pane_ParamLimits

0x89ae,	// (0x0007e7e2) cell_vitu2_function_top_pane

0x89ce,	// (0x0007e802) cell_vitu2_function_top_pane_cp01_ParamLimits

0x89ce,	// (0x0007e802) cell_vitu2_function_top_pane_cp01

0x89ec,	// (0x0007e820) cell_vitu2_function_top_wide_pane_ParamLimits

0x89ec,	// (0x0007e820) cell_vitu2_function_top_wide_pane

0xac03,	// (0x00080a37) bg_button_pane_cp012

0x8a0a,	// (0x0007e83e) cell_vitu2_function_top_pane_g1

0xeb3a,	// (0x0008496e) bg_button_pane_cp013_ParamLimits

0xeb3a,	// (0x0008496e) bg_button_pane_cp013

0x8a1e,	// (0x0007e852) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8a1e,	// (0x0007e852) cell_vitu2_function_top_wide_pane_g1

0xac03,	// (0x00080a37) bg_popup_sub_pane_cp20

0x8a36,	// (0x0007e86a) list_vitu2_match_list_pane

0xc634,	// (0x00082468) bg_popup_sub_pane_cp20_g1

0xc63c,	// (0x00082470) bg_popup_sub_pane_cp20_g2

0x285d,	// (0x00078691) bg_popup_sub_pane_cp20_g3

0xc644,	// (0x00082478) bg_popup_sub_pane_cp20_g4

0x283d,	// (0x00078671) bg_popup_sub_pane_cp20_g5

0xc887,	// (0x000826bb) bg_popup_sub_pane_cp20_g6

0xc654,	// (0x00082488) bg_popup_sub_pane_cp20_g7

0xc65c,	// (0x00082490) bg_popup_sub_pane_cp20_g8

0xc664,	// (0x00082498) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa02,	// (0x00085836) bg_popup_sub_pane_cp20_g

0xeb56,	// (0x0008498a) list_vitu2_match_list_item_pane_ParamLimits

0xeb56,	// (0x0008498a) list_vitu2_match_list_item_pane

0xeb68,	// (0x0008499c) list_vitu2_match_list_item_pane_t1

0xab8a,	// (0x000809be) bg_popup_sub_pane_cp21

0x363d,	// (0x00079471) grid_vitu2_dropdown_list_pane

0x8a54,	// (0x0007e888) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x8a54,	// (0x0007e888) cell_vitu2_dropdown_list_char_pane

0x8a77,	// (0x0007e8ab) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x8a77,	// (0x0007e8ab) cell_vitu2_dropdown_list_ctrl_pane

0xc8a7,	// (0x000826db) cell_vitu2_dropdown_list_char_pane_g1

0xc8b0,	// (0x000826e4) cell_vitu2_dropdown_list_char_pane_g2

0xc8b9,	// (0x000826ed) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa1f,	// (0x00085853) cell_vitu2_dropdown_list_char_pane_g

0x8aa5,	// (0x0007e8d9) cell_vitu2_dropdown_list_char_pane_t1

0x8ab3,	// (0x0007e8e7) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8ab3,	// (0x0007e8e7) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8ac3,	// (0x0007e8f7) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8ac3,	// (0x0007e8f7) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8ad4,	// (0x0007e908) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8ad4,	// (0x0007e908) cell_vitu2_dropdown_list_ctrl_pane_g3

0x8ae4,	// (0x0007e918) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x8ae4,	// (0x0007e918) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbe27,	// (0x00081c5b) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbe27,	// (0x00081c5b) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa26,	// (0x0008585a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa26,	// (0x0008585a) cell_vitu2_dropdown_list_ctrl_pane_g

0x8b00,	// (0x0007e934) aid_size_cell_gallery2_ParamLimits

0x8b00,	// (0x0007e934) aid_size_cell_gallery2

0x8b16,	// (0x0007e94a) grid_gallery2_pane_ParamLimits

0x8b16,	// (0x0007e94a) grid_gallery2_pane

0x8b2a,	// (0x0007e95e) scroll_pane_cp029_ParamLimits

0x8b2a,	// (0x0007e95e) scroll_pane_cp029

0x8b36,	// (0x0007e96a) cell_gallery2_pane_ParamLimits

0x8b36,	// (0x0007e96a) cell_gallery2_pane

0xc8c2,	// (0x000826f6) cell_gallery2_pane_g2

0x8b70,	// (0x0007e9a4) cell_gallery2_pane_g3

0xc8cc,	// (0x00082700) cell_gallery2_pane_g4

0xc8d4,	// (0x00082708) cell_gallery2_pane_g5

0x3ca6,	// (0x00079ada) grid_highlight_pane_cp10

0x818a,	// (0x0007dfbe) popup_vitu2_match_list_window_ParamLimits

0x81a1,	// (0x0007dfd5) popup_vitu2_query_window_ParamLimits

0x81a1,	// (0x0007dfd5) popup_vitu2_query_window

0xab8a,	// (0x000809be) bg_vitu2_candi_button_pane

0xc8a7,	// (0x000826db) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc8b0,	// (0x000826e4) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc8b9,	// (0x000826ed) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0bb4,	// (0x000769e8) bg_button_pane_cp015

0x8b78,	// (0x0007e9ac) bg_button_pane_cp016

0x8b8b,	// (0x0007e9bf) bg_button_pane_cp017

0xb6c2,	// (0x000814f6) bg_popup_sub_pane_cp22

0xc8dc,	// (0x00082710) popup_vitu2_query_window_g1

0x0be9,	// (0x00076a1d) popup_vitu2_query_window_g2

0x0002,

0xfa31,	// (0x00085865) popup_vitu2_query_window_g

0x0c08,	// (0x00076a3c) popup_vitu2_query_window_t1_ParamLimits

0x0c08,	// (0x00076a3c) popup_vitu2_query_window_t1

0x0c3d,	// (0x00076a71) popup_vitu2_query_window_t2_ParamLimits

0x0c3d,	// (0x00076a71) popup_vitu2_query_window_t2

0x0c4f,	// (0x00076a83) popup_vitu2_query_window_t3_ParamLimits

0x0c4f,	// (0x00076a83) popup_vitu2_query_window_t3

0x8baf,	// (0x0007e9e3) popup_vitu2_query_window_t4_ParamLimits

0x8baf,	// (0x0007e9e3) popup_vitu2_query_window_t4

0x8bd0,	// (0x0007ea04) popup_vitu2_query_window_t5_ParamLimits

0x8bd0,	// (0x0007ea04) popup_vitu2_query_window_t5

0x0006,

0xfa38,	// (0x0008586c) popup_vitu2_query_window_t_ParamLimits

0xfa38,	// (0x0008586c) popup_vitu2_query_window_t

0xc73a,	// (0x0008256e) main_cset_text_pane

0x85e7,	// (0x0007e41b) aid_area_touch_slider_ParamLimits

0x8603,	// (0x0007e437) cset_slider_pane_ParamLimits

0x862d,	// (0x0007e461) main_cset_slider_pane_g1_ParamLimits

0x8642,	// (0x0007e476) main_cset_slider_pane_g2_ParamLimits

0xc75b,	// (0x0008258f) main_cset_slider_pane_g3_ParamLimits

0xc75b,	// (0x0008258f) main_cset_slider_pane_g3

0x8657,	// (0x0007e48b) main_cset_slider_pane_g4_ParamLimits

0x8657,	// (0x0007e48b) main_cset_slider_pane_g4

0x8666,	// (0x0007e49a) main_cset_slider_pane_g5_ParamLimits

0x8666,	// (0x0007e49a) main_cset_slider_pane_g5

0x8674,	// (0x0007e4a8) main_cset_slider_pane_g6_ParamLimits

0x8674,	// (0x0007e4a8) main_cset_slider_pane_g6

0xf98b,	// (0x000857bf) main_cset_slider_pane_g_ParamLimits

0xc78b,	// (0x000825bf) main_cset_slider_pane_t1_ParamLimits

0x8704,	// (0x0007e538) main_cset_slider_pane_t2_ParamLimits

0x871e,	// (0x0007e552) main_cset_slider_pane_t3_ParamLimits

0x8738,	// (0x0007e56c) main_cset_slider_pane_t4_ParamLimits

0x8752,	// (0x0007e586) main_cset_slider_pane_t5_ParamLimits

0x8770,	// (0x0007e5a4) main_cset_slider_pane_t6_ParamLimits

0x8787,	// (0x0007e5bb) main_cset_slider_pane_t7_ParamLimits

0x87b5,	// (0x0007e5e9) main_cset_slider_pane_t8_ParamLimits

0x87b5,	// (0x0007e5e9) main_cset_slider_pane_t8

0x87dd,	// (0x0007e611) main_cset_slider_pane_t9_ParamLimits

0x87dd,	// (0x0007e611) main_cset_slider_pane_t9

0x8805,	// (0x0007e639) main_cset_slider_pane_t10_ParamLimits

0x8805,	// (0x0007e639) main_cset_slider_pane_t10

0x882d,	// (0x0007e661) main_cset_slider_pane_t11_ParamLimits

0x882d,	// (0x0007e661) main_cset_slider_pane_t11

0x8857,	// (0x0007e68b) main_cset_slider_pane_t12_ParamLimits

0x8857,	// (0x0007e68b) main_cset_slider_pane_t12

0x8874,	// (0x0007e6a8) main_cset_slider_pane_t13_ParamLimits

0x8874,	// (0x0007e6a8) main_cset_slider_pane_t13

0xf9b0,	// (0x000857e4) main_cset_slider_pane_t_ParamLimits

0xab8a,	// (0x000809be) bg_popup_sub_pane_cp011

0xc8e8,	// (0x0008271c) main_cset_text_pane_g1

0xc8f0,	// (0x00082724) main_cset_text_pane_t1

0xc8fe,	// (0x00082732) main_cset_text_pane_t2

0xc90c,	// (0x00082740) main_cset_text_pane_t3

0xc91a,	// (0x0008274e) main_cset_text_pane_t4

0xc928,	// (0x0008275c) main_cset_text_pane_t5

0xc936,	// (0x0008276a) main_cset_text_pane_t6

0xc944,	// (0x00082778) main_cset_text_pane_t7

0x0006,

0xfa47,	// (0x0008587b) main_cset_text_pane_t

0xab8a,	// (0x000809be) main_cam4_burst_pane

0xab8a,	// (0x000809be) main_cam5_pane

0x851c,	// (0x0007e350) bg_button_pane_cp019

0x8525,	// (0x0007e359) bg_button_pane_cp020

0xc767,	// (0x0008259b) main_cset_slider_pane_g7_ParamLimits

0xc767,	// (0x0008259b) main_cset_slider_pane_g7

0xc773,	// (0x000825a7) main_cset_slider_pane_g8_ParamLimits

0xc773,	// (0x000825a7) main_cset_slider_pane_g8

0x8688,	// (0x0007e4bc) main_cset_slider_pane_g9_ParamLimits

0x8688,	// (0x0007e4bc) main_cset_slider_pane_g9

0x8694,	// (0x0007e4c8) main_cset_slider_pane_g10_ParamLimits

0x8694,	// (0x0007e4c8) main_cset_slider_pane_g10

0x86a0,	// (0x0007e4d4) main_cset_slider_pane_g11_ParamLimits

0x86a0,	// (0x0007e4d4) main_cset_slider_pane_g11

0x86ac,	// (0x0007e4e0) main_cset_slider_pane_g12_ParamLimits

0x86ac,	// (0x0007e4e0) main_cset_slider_pane_g12

0x86b8,	// (0x0007e4ec) main_cset_slider_pane_g13_ParamLimits

0x86b8,	// (0x0007e4ec) main_cset_slider_pane_g13

0x86c4,	// (0x0007e4f8) main_cset_slider_pane_g14_ParamLimits

0x86c4,	// (0x0007e4f8) main_cset_slider_pane_g14

0x86d0,	// (0x0007e504) main_cset_slider_pane_g15_ParamLimits

0x86d0,	// (0x0007e504) main_cset_slider_pane_g15

0xc7b9,	// (0x000825ed) main_cset_slider_pane_t14_ParamLimits

0xc7b9,	// (0x000825ed) main_cset_slider_pane_t14

0xc7f2,	// (0x00082626) main_cset_slider_pane_t15_ParamLimits

0xc7f2,	// (0x00082626) main_cset_slider_pane_t15

0x8bf1,	// (0x0007ea25) aid_cam4_burst_size_cell_ParamLimits

0x8bf1,	// (0x0007ea25) aid_cam4_burst_size_cell

0x8c11,	// (0x0007ea45) grid_cam4_burst_pane_ParamLimits

0x8c11,	// (0x0007ea45) grid_cam4_burst_pane

0x8c4b,	// (0x0007ea7f) linegrid_cam4_burst_pane_ParamLimits

0x8c4b,	// (0x0007ea7f) linegrid_cam4_burst_pane

0xc952,	// (0x00082786) scroll_pane_cp30_ParamLimits

0xc952,	// (0x00082786) scroll_pane_cp30

0x8c6d,	// (0x0007eaa1) cell_cam4_burst_pane_ParamLimits

0x8c6d,	// (0x0007eaa1) cell_cam4_burst_pane

0xc95e,	// (0x00082792) linegrid_cam4_burst_pane_g1_ParamLimits

0xc95e,	// (0x00082792) linegrid_cam4_burst_pane_g1

0x8cc2,	// (0x0007eaf6) linegrid_cam4_burst_pane_g2_ParamLimits

0x8cc2,	// (0x0007eaf6) linegrid_cam4_burst_pane_g2

0xc96b,	// (0x0008279f) linegrid_cam4_burst_pane_g3_ParamLimits

0xc96b,	// (0x0008279f) linegrid_cam4_burst_pane_g3

0x0002,

0xfa56,	// (0x0008588a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa56,	// (0x0008588a) linegrid_cam4_burst_pane_g

0x8cd3,	// (0x0007eb07) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x8cd3,	// (0x0007eb07) linegrid_cam4_burst_pane_g3_copy1

0xc978,	// (0x000827ac) linegrid_cam4_burst_pane_g4_ParamLimits

0xc978,	// (0x000827ac) linegrid_cam4_burst_pane_g4

0x8cf1,	// (0x0007eb25) linegrid_cam4_burst_pane_g5_ParamLimits

0x8cf1,	// (0x0007eb25) linegrid_cam4_burst_pane_g5

0x8d02,	// (0x0007eb36) linegrid_cam4_burst_pane_g6_ParamLimits

0x8d02,	// (0x0007eb36) linegrid_cam4_burst_pane_g6

0xc985,	// (0x000827b9) linegrid_cam4_burst_pane_g7_ParamLimits

0xc985,	// (0x000827b9) linegrid_cam4_burst_pane_g7

0x8d19,	// (0x0007eb4d) cell_cam4_burst_pane_g1

0xc99e,	// (0x000827d2) main_cam5_pane_t1_ParamLimits

0xc99e,	// (0x000827d2) main_cam5_pane_t1

0xc9b0,	// (0x000827e4) main_cam5_pane_t2_ParamLimits

0xc9b0,	// (0x000827e4) main_cam5_pane_t2

0xc9c2,	// (0x000827f6) main_cam5_pane_t3_ParamLimits

0xc9c2,	// (0x000827f6) main_cam5_pane_t3

0xc9d4,	// (0x00082808) main_cam5_pane_t4_ParamLimits

0xc9d4,	// (0x00082808) main_cam5_pane_t4

0xc9ec,	// (0x00082820) main_cam5_pane_t5_ParamLimits

0xc9ec,	// (0x00082820) main_cam5_pane_t5

0xca00,	// (0x00082834) main_cam5_pane_t6_ParamLimits

0xca00,	// (0x00082834) main_cam5_pane_t6

0xca14,	// (0x00082848) main_cam5_pane_t7_ParamLimits

0xca14,	// (0x00082848) main_cam5_pane_t7

0xca26,	// (0x0008285a) main_cam5_pane_t8_ParamLimits

0xca26,	// (0x0008285a) main_cam5_pane_t8

0xca44,	// (0x00082878) main_cam5_pane_t9_ParamLimits

0xca44,	// (0x00082878) main_cam5_pane_t9

0xca56,	// (0x0008288a) main_cam5_pane_t10_ParamLimits

0xca56,	// (0x0008288a) main_cam5_pane_t10

0xca68,	// (0x0008289c) main_cam5_pane_t11_ParamLimits

0xca68,	// (0x0008289c) main_cam5_pane_t11

0xca7c,	// (0x000828b0) main_cam5_pane_t12_ParamLimits

0xca7c,	// (0x000828b0) main_cam5_pane_t12

0xca93,	// (0x000828c7) main_cam5_pane_t13_ParamLimits

0xca93,	// (0x000828c7) main_cam5_pane_t13

0x000c,

0xfa62,	// (0x00085896) main_cam5_pane_t_ParamLimits

0xfa62,	// (0x00085896) main_cam5_pane_t

0x1586,	// (0x000773ba) popup_scut_keymap_window_ParamLimits

0x1586,	// (0x000773ba) popup_scut_keymap_window

0x8d2c,	// (0x0007eb60) aid_size_cell_brow_shortcut

0x3ca6,	// (0x00079ada) bg_popup_window_pane_cp010

0x8d38,	// (0x0007eb6c) grid_scut_pane

0x8d44,	// (0x0007eb78) cell_scut_pane_ParamLimits

0x8d44,	// (0x0007eb78) cell_scut_pane

0x8d5d,	// (0x0007eb91) cell_scut_pane_g1

0xcab6,	// (0x000828ea) cell_scut_pane_t1

0xcac5,	// (0x000828f9) cell_scut_pane_t2

0x8d66,	// (0x0007eb9a) cell_scut_pane_t3

0x0002,

0xfa7d,	// (0x000858b1) cell_scut_pane_t

0x6b3d,	// (0x0007c971) main_mup3_pane_g8_ParamLimits

0x6b3d,	// (0x0007c971) main_mup3_pane_g8

0x808c,	// (0x0007dec0) area_vitu2_query_pane_ParamLimits

0x808c,	// (0x0007dec0) area_vitu2_query_pane

0x0bc8,	// (0x000769fc) input_focus_pane_cp08

0xcad4,	// (0x00082908) area_vitu2_query_pane_g1

0x0ccd,	// (0x00076b01) area_vitu2_query_pane_g2

0x0001,

0xfa84,	// (0x000858b8) area_vitu2_query_pane_g

0x8d74,	// (0x0007eba8) area_vitu2_query_pane_t1_ParamLimits

0x8d74,	// (0x0007eba8) area_vitu2_query_pane_t1

0x8d88,	// (0x0007ebbc) area_vitu2_query_pane_t2_ParamLimits

0x8d88,	// (0x0007ebbc) area_vitu2_query_pane_t2

0x0ce0,	// (0x00076b14) area_vitu2_query_pane_t3_ParamLimits

0x0ce0,	// (0x00076b14) area_vitu2_query_pane_t3

0xcae0,	// (0x00082914) area_vitu2_query_pane_t4_ParamLimits

0xcae0,	// (0x00082914) area_vitu2_query_pane_t4

0xcb08,	// (0x0008293c) area_vitu2_query_pane_t5_ParamLimits

0xcb08,	// (0x0008293c) area_vitu2_query_pane_t5

0xcb30,	// (0x00082964) area_vitu2_query_pane_t6_ParamLimits

0xcb30,	// (0x00082964) area_vitu2_query_pane_t6

0x0006,

0xfa89,	// (0x000858bd) area_vitu2_query_pane_t_ParamLimits

0xfa89,	// (0x000858bd) area_vitu2_query_pane_t

0x8d9c,	// (0x0007ebd0) bg_button_pane_cp018

0x8daa,	// (0x0007ebde) bg_button_pane_cp021

0x0d08,	// (0x00076b3c) bg_button_pane_cp022

0x0d19,	// (0x00076b4d) input_focus_pane_cp09

0x3ab5,	// (0x000798e9) aid_size_touch_mv_arrow_left

0x3ade,	// (0x00079912) aid_size_touch_mv_arrow_right

0x86e8,	// (0x0007e51c) main_cset_slider_pane_g16_ParamLimits

0x86e8,	// (0x0007e51c) main_cset_slider_pane_g16

0x86f6,	// (0x0007e52a) main_cset_slider_pane_g17_ParamLimits

0x86f6,	// (0x0007e52a) main_cset_slider_pane_g17

0x8d19,	// (0x0007eb4d) cell_cam4_burst_pane_g1_ParamLimits

0xab8a,	// (0x000809be) compa_mode_pane

0x88ee,	// (0x0007e722) popup_vtel_slider_window_g3_ParamLimits

0x88ee,	// (0x0007e722) popup_vtel_slider_window_g3

0x8905,	// (0x0007e739) popup_vtel_slider_window_g4_ParamLimits

0x8905,	// (0x0007e739) popup_vtel_slider_window_g4

0x891c,	// (0x0007e750) popup_vtel_slider_window_t1_ParamLimits

0x891c,	// (0x0007e750) popup_vtel_slider_window_t1

0xab8a,	// (0x000809be) main_cl_pane

0xb6ee,	// (0x00081522) popup_imed_adjust2_window_ParamLimits

0xb6c2,	// (0x000814f6) bg_tb_trans_pane_cp05_ParamLimits

0xc0ea,	// (0x00081f1e) popup_imed_adjust2_window_g1_ParamLimits

0xc0f9,	// (0x00081f2d) popup_imed_adjust2_window_g2_ParamLimits

0xc0f9,	// (0x00081f2d) popup_imed_adjust2_window_g2

0xc105,	// (0x00081f39) popup_imed_adjust2_window_g3_ParamLimits

0xc105,	// (0x00081f39) popup_imed_adjust2_window_g3

0x0002,

0xf7f9,	// (0x0008562d) popup_imed_adjust2_window_g_ParamLimits

0xf7f9,	// (0x0008562d) popup_imed_adjust2_window_g

0xc111,	// (0x00081f45) popup_imed_adjust2_window_t1_ParamLimits

0xc129,	// (0x00081f5d) slider_imed_adjust_pane_ParamLimits

0xc13d,	// (0x00081f71) slider_imed_adjust_pane_g1_ParamLimits

0xc14d,	// (0x00081f81) slider_imed_adjust_pane_g2_ParamLimits

0xc15d,	// (0x00081f91) slider_imed_adjust_pane_g3_ParamLimits

0xc16e,	// (0x00081fa2) slider_imed_adjust_pane_g4_ParamLimits

0xf800,	// (0x00085634) slider_imed_adjust_pane_g_ParamLimits

0x7d9c,	// (0x0007dbd0) aid_touch_area_cam4_ParamLimits

0x7d9c,	// (0x0007dbd0) aid_touch_area_cam4

0xea9c,	// (0x000848d0) battery_pane_cp01

0x7e6f,	// (0x0007dca3) main_camera4_pane_g6_ParamLimits

0x7e6f,	// (0x0007dca3) main_camera4_pane_g6

0x7e99,	// (0x0007dccd) main_camera4_pane_t2_ParamLimits

0x7e99,	// (0x0007dccd) main_camera4_pane_t2

0x0001,

0xf8fe,	// (0x00085732) main_camera4_pane_t_ParamLimits

0xf8fe,	// (0x00085732) main_camera4_pane_t

0x7ece,	// (0x0007dd02) aid_touch_area_vid4_ParamLimits

0x7ece,	// (0x0007dd02) aid_touch_area_vid4

0x7f35,	// (0x0007dd69) main_video4_pane_g5_ParamLimits

0x7f35,	// (0x0007dd69) main_video4_pane_g5

0x7f60,	// (0x0007dd94) vid4_progress_pane_ParamLimits

0x7f60,	// (0x0007dd94) vid4_progress_pane

0xc77f,	// (0x000825b3) main_cset_slider_pane_g18_ParamLimits

0xc77f,	// (0x000825b3) main_cset_slider_pane_g18

0xc992,	// (0x000827c6) cell_cam4_burst_pane_g2_ParamLimits

0xc992,	// (0x000827c6) cell_cam4_burst_pane_g2

0x0001,

0xfa5d,	// (0x00085891) cell_cam4_burst_pane_g_ParamLimits

0xfa5d,	// (0x00085891) cell_cam4_burst_pane_g

0xef3a,	// (0x00084d6e) bg_cl_pane_ParamLimits

0xef3a,	// (0x00084d6e) bg_cl_pane

0x8db6,	// (0x0007ebea) cl_header_pane_ParamLimits

0x8db6,	// (0x0007ebea) cl_header_pane

0x8dca,	// (0x0007ebfe) cl_listscroll_pane_ParamLimits

0x8dca,	// (0x0007ebfe) cl_listscroll_pane

0xcb7c,	// (0x000829b0) bg_cl_pane_g1

0xcb84,	// (0x000829b8) bg_cl_pane_g2

0xcb8c,	// (0x000829c0) bg_cl_pane_g3

0xcb94,	// (0x000829c8) bg_cl_pane_g4

0xcb9c,	// (0x000829d0) bg_cl_pane_g5

0xcba4,	// (0x000829d8) bg_cl_pane_g6

0xcbac,	// (0x000829e0) bg_cl_pane_g7

0xcbb4,	// (0x000829e8) bg_cl_pane_g8

0xcbbc,	// (0x000829f0) bg_cl_pane_g9

0x0008,

0xfa98,	// (0x000858cc) bg_cl_pane_g

0x8dda,	// (0x0007ec0e) aid_height_cl_leading_ParamLimits

0x8dda,	// (0x0007ec0e) aid_height_cl_leading

0x8de6,	// (0x0007ec1a) aid_height_cl_text_ParamLimits

0x8de6,	// (0x0007ec1a) aid_height_cl_text

0xac03,	// (0x00080a37) bg_cl_header_pane_ParamLimits

0xac03,	// (0x00080a37) bg_cl_header_pane

0x8e05,	// (0x0007ec39) cl_header_pane_g1_ParamLimits

0x8e05,	// (0x0007ec39) cl_header_pane_g1

0x8e1b,	// (0x0007ec4f) cl_header_pane_t1_ParamLimits

0x8e1b,	// (0x0007ec4f) cl_header_pane_t1

0xcbc4,	// (0x000829f8) cl_list_pane

0xc752,	// (0x00082586) hc_scroll_pane_cp01

0x283d,	// (0x00078671) bg_cl_header_pane_g1

0xc634,	// (0x00082468) bg_cl_header_pane_g2

0x285d,	// (0x00078691) bg_cl_header_pane_g3

0xc644,	// (0x00082478) bg_cl_header_pane_g4

0xc63c,	// (0x00082470) bg_cl_header_pane_g5

0xc887,	// (0x000826bb) bg_cl_header_pane_g6

0xc65c,	// (0x00082490) bg_cl_header_pane_g7

0xc664,	// (0x00082498) bg_cl_header_pane_g8

0xc654,	// (0x00082488) bg_cl_header_pane_g9

0x0008,

0xfaab,	// (0x000858df) bg_cl_header_pane_g

0x8e34,	// (0x0007ec68) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x8e34,	// (0x0007ec68) hc_cl_list_double_graphic_heading_pane

0x8e47,	// (0x0007ec7b) hc_cl_list_single_graphic_pane_ParamLimits

0x8e47,	// (0x0007ec7b) hc_cl_list_single_graphic_pane

0x8e5f,	// (0x0007ec93) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x8e5f,	// (0x0007ec93) hc_cl_list_single_graphic_pane_g1

0x8e6b,	// (0x0007ec9f) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x8e6b,	// (0x0007ec9f) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfabe,	// (0x000858f2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfabe,	// (0x000858f2) hc_cl_list_single_graphic_pane_g

0x8e7f,	// (0x0007ecb3) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x8e7f,	// (0x0007ecb3) hc_cl_list_single_graphic_pane_t1

0x8e5f,	// (0x0007ec93) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x8e5f,	// (0x0007ec93) hc_cl_list_double_graphic_heading_pane_g1

0x8e94,	// (0x0007ecc8) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x8e94,	// (0x0007ecc8) hc_cl_list_double_graphic_heading_pane_g2

0x8ea8,	// (0x0007ecdc) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x8ea8,	// (0x0007ecdc) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfac3,	// (0x000858f7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfac3,	// (0x000858f7) hc_cl_list_double_graphic_heading_pane_g

0x8ebc,	// (0x0007ecf0) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x8ebc,	// (0x0007ecf0) hc_cl_list_double_graphic_heading_pane_t1

0x8ed1,	// (0x0007ed05) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x8ed1,	// (0x0007ed05) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfaca,	// (0x000858fe) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfaca,	// (0x000858fe) hc_cl_list_double_graphic_heading_pane_t

0x8ef0,	// (0x0007ed24) vid4_progress_pane_g1

0x8f01,	// (0x0007ed35) vid4_progress_pane_g2

0xb1c7,	// (0x00080ffb) vid4_progress_pane_g3

0xead2,	// (0x00084906) vid4_progress_pane_g4

0x0004,

0xfacf,	// (0x00085903) vid4_progress_pane_g

0xeb7e,	// (0x000849b2) vid4_progress_pane_t1

0x8f13,	// (0x0007ed47) vid4_progress_pane_t2

0x0002,

0xfada,	// (0x0008590e) vid4_progress_pane_t

0x8f42,	// (0x0007ed76) wait_bar_pane_cp07

0xb9e4,	// (0x00081818) blid_firmament_pane_ParamLimits

0xba27,	// (0x0008185b) popup_blid_sat_info2_window_g1

0xba4b,	// (0x0008187f) popup_blid_sat_info2_window_t3

0xba59,	// (0x0008188d) popup_blid_sat_info2_window_t4

0xba67,	// (0x0008189b) popup_blid_sat_info2_window_t5

0xba75,	// (0x000818a9) popup_blid_sat_info2_window_t6

0xba85,	// (0x000818b9) popup_blid_sat_info2_window_t7

0xba93,	// (0x000818c7) popup_blid_sat_info2_window_t8

0xbaa1,	// (0x000818d5) popup_blid_sat_info2_window_t9

0xbaaf,	// (0x000818e3) popup_blid_sat_info2_window_t10

0xbb77,	// (0x000819ab) aid_firma_cardinal_ParamLimits

0xbb8b,	// (0x000819bf) blid_firmament_pane_t1_ParamLimits

0xbba2,	// (0x000819d6) blid_firmament_pane_t2_ParamLimits

0xbbb9,	// (0x000819ed) blid_firmament_pane_t3_ParamLimits

0xbbd0,	// (0x00081a04) blid_firmament_pane_t4_ParamLimits

0xf6f2,	// (0x00085526) blid_firmament_pane_t_ParamLimits

0xbbe7,	// (0x00081a1b) blid_sat_info_pane_ParamLimits

0xac03,	// (0x00080a37) main_cam_set_pane_ParamLimits

0x73e7,	// (0x0007d21b) aid_size_cell_colour_35_ParamLimits

0x7407,	// (0x0007d23b) aid_size_cell_colour_112_ParamLimits

0x7427,	// (0x0007d25b) aid_size_cell_effect_ParamLimits

0xb6c2,	// (0x000814f6) bg_tb_trans_pane_cp02_ParamLimits

0x337b,	// (0x000791af) heading_imed_pane_ParamLimits

0x7447,	// (0x0007d27b) listscroll_imed_pane_ParamLimits

0x5209,	// (0x0007b03d) popup_call2_audio_first_window_g5_ParamLimits

0x5209,	// (0x0007b03d) popup_call2_audio_first_window_g5

0x7a04,	// (0x0007d838) aid_size_touch_image3_arrow_left_ParamLimits

0x7a04,	// (0x0007d838) aid_size_touch_image3_arrow_left

0x7a30,	// (0x0007d864) aid_size_touch_image3_arrow_right_ParamLimits

0x7a30,	// (0x0007d864) aid_size_touch_image3_arrow_right

0x8f2b,	// (0x0007ed5f) vid4_progress_pane_t3

0x7762,	// (0x0007d596) main_hwr_training_symbol_option_pane_ParamLimits

0x7762,	// (0x0007d596) main_hwr_training_symbol_option_pane

0xc3d9,	// (0x0008220d) popup_hwr_training_preview_window_ParamLimits

0xc3d9,	// (0x0008220d) popup_hwr_training_preview_window

0x7782,	// (0x0007d5b6) hwr_training_navi_pane_g5_ParamLimits

0x7782,	// (0x0007d5b6) hwr_training_navi_pane_g5

0xc622,	// (0x00082456) popup_char_count_window

0xac03,	// (0x00080a37) bg_popup_sub_pane_cp20_ParamLimits

0x8a36,	// (0x0007e86a) list_vitu2_match_list_pane_ParamLimits

0x8a45,	// (0x0007e879) vitu2_page_scroll_pane_ParamLimits

0x8a45,	// (0x0007e879) vitu2_page_scroll_pane

0xcc16,	// (0x00082a4a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xcc16,	// (0x00082a4a) list_single_hwr_training_symbol_option_pane

0xcc29,	// (0x00082a5d) list_single_hwr_training_symbol_option_pane_g1

0xcc31,	// (0x00082a65) list_single_hwr_training_symbol_option_pane_t1

0xcc3f,	// (0x00082a73) bg_button_pane_cp023

0xcc48,	// (0x00082a7c) bg_button_pane_cp024

0x8f54,	// (0x0007ed88) vitu2_page_scroll_pane_g1

0x8f5c,	// (0x0007ed90) vitu2_page_scroll_pane_g2

0x0001,

0xfae1,	// (0x00085915) vitu2_page_scroll_pane_g

0x8f66,	// (0x0007ed9a) vitu2_page_scroll_pane_t1

0xb900,	// (0x00081734) popup_char_count_window_g1

0xcc7b,	// (0x00082aaf) popup_char_count_window_g2

0xcc84,	// (0x00082ab8) popup_char_count_window_g3

0x0002,

0xfae6,	// (0x0008591a) popup_char_count_window_g

0xcc8d,	// (0x00082ac1) popup_char_count_window_t1

0xab8a,	// (0x000809be) main_vded2_pane

0xc0d6,	// (0x00081f0a) aid_size_cell_imed_line

0xc0e0,	// (0x00081f14) grid_imed_line_width_pane

0x7fd4,	// (0x0007de08) vid4_indicators_pane_g4

0xcc9b,	// (0x00082acf) cell_imed_line_width_pane_ParamLimits

0xcc9b,	// (0x00082acf) cell_imed_line_width_pane

0xccb1,	// (0x00082ae5) cell_imed_line_width_pane_g1

0xccba,	// (0x00082aee) cell_imed_line_width_pane_g2

0x0001,

0xfaed,	// (0x00085921) cell_imed_line_width_pane_g

0x8f75,	// (0x0007eda9) main_vded2_pane_g1_ParamLimits

0x8f75,	// (0x0007eda9) main_vded2_pane_g1

0x8f90,	// (0x0007edc4) main_vded2_pane_g2_ParamLimits

0x8f90,	// (0x0007edc4) main_vded2_pane_g2

0x0001,

0xfaf2,	// (0x00085926) main_vded2_pane_g_ParamLimits

0xfaf2,	// (0x00085926) main_vded2_pane_g

0x8fa2,	// (0x0007edd6) vded2_slider_pane_ParamLimits

0x8fa2,	// (0x0007edd6) vded2_slider_pane

0x8fb2,	// (0x0007ede6) aid_size_touch_vded2_end

0x8fbc,	// (0x0007edf0) aid_size_touch_vded2_playhead

0xccc2,	// (0x00082af6) aid_size_touch_vded2_start

0xccca,	// (0x00082afe) vded2_slider_bg_pane

0xccd3,	// (0x00082b07) vded2_slider_pane_g1

0xccdc,	// (0x00082b10) vded2_slider_pane_g2

0x8fc6,	// (0x0007edfa) vded2_slider_pane_g3

0x0002,

0xfaf7,	// (0x0008592b) vded2_slider_pane_g

0xcce4,	// (0x00082b18) vded2_slider_bg_pane_g1

0xcced,	// (0x00082b21) vded2_slider_bg_pane_g2

0xccf6,	// (0x00082b2a) vded2_slider_bg_pane_g3

0x0002,

0xfafe,	// (0x00085932) vded2_slider_bg_pane_g

0x4375,	// (0x0007a1a9) aid_postcard_touch_down_pane_ParamLimits

0x4375,	// (0x0007a1a9) aid_postcard_touch_down_pane

0x438d,	// (0x0007a1c1) aid_postcard_touch_up_pane_ParamLimits

0x438d,	// (0x0007a1c1) aid_postcard_touch_up_pane

0xab8a,	// (0x000809be) main_blid2_pane

0xb6d0,	// (0x00081504) popup_blid2_search_window

0xab8a,	// (0x000809be) blid2_gps_pane

0xab8a,	// (0x000809be) blid2_navig_pane

0xab8a,	// (0x000809be) blid2_search_pane

0xab8a,	// (0x000809be) blid2_tripm_pane

0x8fd1,	// (0x0007ee05) blid2_search_pane_g1_ParamLimits

0x8fd1,	// (0x0007ee05) blid2_search_pane_g1

0x8fe4,	// (0x0007ee18) blid2_search_pane_t1_ParamLimits

0x8fe4,	// (0x0007ee18) blid2_search_pane_t1

0x8ff6,	// (0x0007ee2a) aid_size_cell_blid2_gps_ParamLimits

0x8ff6,	// (0x0007ee2a) aid_size_cell_blid2_gps

0x900e,	// (0x0007ee42) blid2_gps_pane_g1_ParamLimits

0x900e,	// (0x0007ee42) blid2_gps_pane_g1

0x9022,	// (0x0007ee56) grid_blid2_satellite_pane_ParamLimits

0x9022,	// (0x0007ee56) grid_blid2_satellite_pane

0x903a,	// (0x0007ee6e) blid2_navig_pane_g1_ParamLimits

0x903a,	// (0x0007ee6e) blid2_navig_pane_g1

0x9046,	// (0x0007ee7a) blid2_navig_pane_t1_ParamLimits

0x9046,	// (0x0007ee7a) blid2_navig_pane_t1

0x9061,	// (0x0007ee95) blid2_navig_pane_t2_ParamLimits

0x9061,	// (0x0007ee95) blid2_navig_pane_t2

0x0001,

0xfb05,	// (0x00085939) blid2_navig_pane_t_ParamLimits

0xfb05,	// (0x00085939) blid2_navig_pane_t

0x907c,	// (0x0007eeb0) blid2_navig_ring_pane_ParamLimits

0x907c,	// (0x0007eeb0) blid2_navig_ring_pane

0x9097,	// (0x0007eecb) blid2_speed_pane_ParamLimits

0x9097,	// (0x0007eecb) blid2_speed_pane

0x90a3,	// (0x0007eed7) blid2_tripm_pane_g1_ParamLimits

0x90a3,	// (0x0007eed7) blid2_tripm_pane_g1

0x90be,	// (0x0007eef2) blid2_tripm_pane_g2_ParamLimits

0x90be,	// (0x0007eef2) blid2_tripm_pane_g2

0x90d2,	// (0x0007ef06) blid2_tripm_pane_g3_ParamLimits

0x90d2,	// (0x0007ef06) blid2_tripm_pane_g3

0x90e6,	// (0x0007ef1a) blid2_tripm_pane_g4_ParamLimits

0x90e6,	// (0x0007ef1a) blid2_tripm_pane_g4

0x90fa,	// (0x0007ef2e) blid2_tripm_pane_g5_ParamLimits

0x90fa,	// (0x0007ef2e) blid2_tripm_pane_g5

0x0005,

0xfb0a,	// (0x0008593e) blid2_tripm_pane_g_ParamLimits

0xfb0a,	// (0x0008593e) blid2_tripm_pane_g

0x9120,	// (0x0007ef54) blid2_tripm_pane_t1_ParamLimits

0x9120,	// (0x0007ef54) blid2_tripm_pane_t1

0x9139,	// (0x0007ef6d) blid2_tripm_pane_t2_ParamLimits

0x9139,	// (0x0007ef6d) blid2_tripm_pane_t2

0x9152,	// (0x0007ef86) blid2_tripm_pane_t3_ParamLimits

0x9152,	// (0x0007ef86) blid2_tripm_pane_t3

0x0003,

0xfb17,	// (0x0008594b) blid2_tripm_pane_t_ParamLimits

0xfb17,	// (0x0008594b) blid2_tripm_pane_t

0x9199,	// (0x0007efcd) cell_blid2_satellite_pane_ParamLimits

0x9199,	// (0x0007efcd) cell_blid2_satellite_pane

0x91b5,	// (0x0007efe9) cell_blid2_satellite_pane_g1

0xccff,	// (0x00082b33) cell_blid2_satellite_pane_t1

0xbbf7,	// (0x00081a2b) blid2_speed_pane_g1

0xcd0d,	// (0x00082b41) blid2_speed_pane_t1

0xcd1b,	// (0x00082b4f) blid2_speed_pane_t2

0x0001,

0xfb20,	// (0x00085954) blid2_speed_pane_t

0xbbf7,	// (0x00081a2b) blid2_navig_ring_pane_g1

0x91be,	// (0x0007eff2) blid2_navig_ring_pane_g2

0x91c6,	// (0x0007effa) blid2_navig_ring_pane_g3

0x91ce,	// (0x0007f002) blid2_navig_ring_pane_g4

0x91d6,	// (0x0007f00a) blid2_navig_ring_pane_g5

0x0004,

0xfb25,	// (0x00085959) blid2_navig_ring_pane_g

0xab8a,	// (0x000809be) bg_popup_window_pane_cp011

0xcd29,	// (0x00082b5d) popup_blid2_search_window_g1

0xcd31,	// (0x00082b65) popup_blid2_search_window_t1

0xcd3f,	// (0x00082b73) popup_blid2_search_window_t2

0x0001,

0xfb30,	// (0x00085964) popup_blid2_search_window_t

0x26fa,	// (0x0007852e) main_browser_pane_g1

0xef3a,	// (0x00084d6e) main_browser_pane_ParamLimits

0xac03,	// (0x00080a37) bg_button_pane_cp011_ParamLimits

0x82b2,	// (0x0007e0e6) cell_vitu2_function_pane_g1_ParamLimits

0xb6c2,	// (0x000814f6) bg_popup_sub_pane_cp22_ParamLimits

0x0bc8,	// (0x000769fc) input_focus_pane_cp08_ParamLimits

0x8b9e,	// (0x0007e9d2) popup_vitu2_query_button_pane_ParamLimits

0x8b9e,	// (0x0007e9d2) popup_vitu2_query_button_pane

0x0bdf,	// (0x00076a13) popup_vitu2_query_input_button_pane

0xc8dc,	// (0x00082710) popup_vitu2_query_window_g1_ParamLimits

0x0be9,	// (0x00076a1d) popup_vitu2_query_window_g2_ParamLimits

0xfa31,	// (0x00085865) popup_vitu2_query_window_g_ParamLimits

0xab8a,	// (0x000809be) bg_button_pane_cp026

0x91de,	// (0x0007f012) popup_vitu2_query_input_button_pane_g1

0xab8a,	// (0x000809be) bg_button_pane_cp025

0xcd4d,	// (0x00082b81) popup_vitu2_query_button_pane_t1

0x6805,	// (0x0007c639) main_mp3_pane_t6

0x6813,	// (0x0007c647) popup_slider_window_cp01

0xeaba,	// (0x000848ee) cam4_battery_pane

0xeb10,	// (0x00084944) cam4_battery_pane_cp02

0x8ee6,	// (0x0007ed1a) cam4_battery_pane_cp01

0xeb76,	// (0x000849aa) cam4_battery_pane_cp03

0xbbf7,	// (0x00081a2b) cam4_battery_pane_g1

0xcd5b,	// (0x00082b8f) cam4_battery_pane_g2

0x0001,

0xfb35,	// (0x00085969) cam4_battery_pane_g

0xbabd,	// (0x000818f1) popup_blid_sat_info2_window_t11

0x3ab5,	// (0x000798e9) aid_size_touch_mv_arrow_left_ParamLimits

0x3ade,	// (0x00079912) aid_size_touch_mv_arrow_right_ParamLimits

0x3b3c,	// (0x00079970) navi_pane_g1_ParamLimits

0x3b48,	// (0x0007997c) navi_pane_g2_ParamLimits

0x3b76,	// (0x000799aa) navi_pane_g3_ParamLimits

0xf404,	// (0x00085238) navi_pane_g_ParamLimits

0x3c34,	// (0x00079a68) navi_pane_mv_t1_ParamLimits

0x7453,	// (0x0007d287) grid_imed_effect_pane_ParamLimits

0x22a7,	// (0x000780db) aid_placing_vt_slider_lsc

0x22b7,	// (0x000780eb) aid_placing_vt_slider_prt

0xac03,	// (0x00080a37) bg_tb_trans_pane_cp01_ParamLimits

0xbd47,	// (0x00081b7b) popup_image_details_window_g1_ParamLimits

0xbd5a,	// (0x00081b8e) popup_image_details_window_g2_ParamLimits

0xbd6f,	// (0x00081ba3) popup_image_details_window_g3_ParamLimits

0xbd6f,	// (0x00081ba3) popup_image_details_window_g3

0xf737,	// (0x0008556b) popup_image_details_window_g_ParamLimits

0xbd83,	// (0x00081bb7) popup_image_details_window_t1_ParamLimits

0xbd95,	// (0x00081bc9) popup_image_details_window_t2_ParamLimits

0xbdae,	// (0x00081be2) popup_image_details_window_t3_ParamLimits

0xbdc2,	// (0x00081bf6) popup_image_details_window_t4_ParamLimits

0xbddd,	// (0x00081c11) popup_image_details_window_t5_ParamLimits

0xf73e,	// (0x00085572) popup_image_details_window_t_ParamLimits

0x8df2,	// (0x0007ec26) cl_header_name_pane_ParamLimits

0x8df2,	// (0x0007ec26) cl_header_name_pane

0x91e6,	// (0x0007f01a) cl_header_name_pane_t1_ParamLimits

0x91e6,	// (0x0007f01a) cl_header_name_pane_t1

0x9207,	// (0x0007f03b) cl_header_name_pane_t2_ParamLimits

0x9207,	// (0x0007f03b) cl_header_name_pane_t2

0x9249,	// (0x0007f07d) cl_header_name_pane_t3_ParamLimits

0x9249,	// (0x0007f07d) cl_header_name_pane_t3

0x0002,

0xfb3a,	// (0x0008596e) cl_header_name_pane_t_ParamLimits

0xfb3a,	// (0x0008596e) cl_header_name_pane_t

0x3c05,	// (0x00079a39) navi_pane_mv_g2_ParamLimits

0xc5df,	// (0x00082413) field_vitu2_entry_pane_g1_ParamLimits

0xc5eb,	// (0x0008241f) field_vitu2_entry_pane_g2_ParamLimits

0xc5f7,	// (0x0008242b) field_vitu2_entry_pane_g3_ParamLimits

0xc5f7,	// (0x0008242b) field_vitu2_entry_pane_g3

0xf930,	// (0x00085764) field_vitu2_entry_pane_g_ParamLimits

0x822e,	// (0x0007e062) cell_vitu2_itu_pane_g1_ParamLimits

0x823e,	// (0x0007e072) cell_vitu2_itu_pane_g2_ParamLimits

0x823e,	// (0x0007e072) cell_vitu2_itu_pane_g2

0x0001,

0xf93c,	// (0x00085770) cell_vitu2_itu_pane_g_ParamLimits

0xf93c,	// (0x00085770) cell_vitu2_itu_pane_g

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp05_ParamLimits

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp05

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp03

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp04

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp10_ParamLimits

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp10

0x0d08,	// (0x00076b3c) bg_vkb2_func_pane_cp08

0x8d9c,	// (0x0007ebd0) bg_vkb2_func_pane_cp06

0x8daa,	// (0x0007ebde) bg_vkb2_func_pane_cp07

0xcc51,	// (0x00082a85) bg_vkb2_func_pane_cp11_ParamLimits

0xcc51,	// (0x00082a85) bg_vkb2_func_pane_cp11

0xcc66,	// (0x00082a9a) bg_vkb2_func_pane_cp12_ParamLimits

0xcc66,	// (0x00082a9a) bg_vkb2_func_pane_cp12

0xab8a,	// (0x000809be) bg_vkb2_func_pane_cp09

0xc634,	// (0x00082468) bg_vkb2_func_pane_g1

0x285d,	// (0x00078691) bg_vkb2_func_pane_g2

0xc63c,	// (0x00082470) bg_vkb2_func_pane_g3

0xc644,	// (0x00082478) bg_vkb2_func_pane_g4

0xc887,	// (0x000826bb) bg_vkb2_func_pane_g5

0xc65c,	// (0x00082490) bg_vkb2_func_pane_g6

0xc664,	// (0x00082498) bg_vkb2_func_pane_g7

0xc654,	// (0x00082488) bg_vkb2_func_pane_g8

0x283d,	// (0x00078671) bg_vkb2_func_pane_g9

0x0008,

0xfb41,	// (0x00085975) bg_vkb2_func_pane_g

0x910e,	// (0x0007ef42) blid2_tripm_pane_g6_ParamLimits

0x910e,	// (0x0007ef42) blid2_tripm_pane_g6

0xc491,	// (0x000822c5) mp4_progress_pane_g1

0x9185,	// (0x0007efb9) blid2_tripm_values_pane_ParamLimits

0x9185,	// (0x0007efb9) blid2_tripm_values_pane

0x927a,	// (0x0007f0ae) blid2_tripm_values_pane_t1

0x9288,	// (0x0007f0bc) blid2_tripm_values_pane_t2

0x9296,	// (0x0007f0ca) blid2_tripm_values_pane_t3

0x92a4,	// (0x0007f0d8) blid2_tripm_values_pane_t4

0x92b2,	// (0x0007f0e6) blid2_tripm_values_pane_t5

0x92c0,	// (0x0007f0f4) blid2_tripm_values_pane_t6

0x92ce,	// (0x0007f102) blid2_tripm_values_pane_t7

0x92dc,	// (0x0007f110) blid2_tripm_values_pane_t8

0x92ea,	// (0x0007f11e) blid2_tripm_values_pane_t9

0x0008,

0xfb54,	// (0x00085988) blid2_tripm_values_pane_t

0x22ee,	// (0x00078122) call_video_pane_t1_ParamLimits

0x2308,	// (0x0007813c) call_video_pane_t2_ParamLimits

0xf28d,	// (0x000850c1) call_video_pane_t_ParamLimits

0x0a09,	// (0x0007683d) msg_header_pane_g1_ParamLimits

0x42df,	// (0x0007a113) msg_header_pane_g2_ParamLimits

0x42df,	// (0x0007a113) msg_header_pane_g2

0x0001,

0xf4a7,	// (0x000852db) msg_header_pane_g_ParamLimits

0xf4a7,	// (0x000852db) msg_header_pane_g

0xef3a,	// (0x00084d6e) main_clock2_pane_ParamLimits

0x7158,	// (0x0007cf8c) grid_clock2_toolbar_pane_ParamLimits

0x7158,	// (0x0007cf8c) grid_clock2_toolbar_pane

0x7158,	// (0x0007cf8c) listscroll_clock2_pane_ParamLimits

0x7158,	// (0x0007cf8c) listscroll_clock2_pane

0x7240,	// (0x0007d074) main_clock2_pane_t3_ParamLimits

0x7240,	// (0x0007d074) main_clock2_pane_t3

0x725b,	// (0x0007d08f) main_clock2_pane_t4_ParamLimits

0x725b,	// (0x0007d08f) main_clock2_pane_t4

0xcd65,	// (0x00082b99) cell_clock2_toolbar_pane

0xcd6d,	// (0x00082ba1) cell_clock2_toolbar_pane_cp01

0xcd6d,	// (0x00082ba1) cell_clock2_toolbar_pane_cp02

0xcd75,	// (0x00082ba9) cell_clock2_toolbar_pane_cp03

0xcd7d,	// (0x00082bb1) list_clock2_pane

0x383f,	// (0x00079673) scroll_pane_cp10

0xcd85,	// (0x00082bb9) list_single_clock2_pane_ParamLimits

0xcd85,	// (0x00082bb9) list_single_clock2_pane

0x3ca6,	// (0x00079ada) list_highlight_pane_cp08

0xcd92,	// (0x00082bc6) list_single_clock2_pane_t1

0xcda0,	// (0x00082bd4) list_single_clock2_pane_t2

0x0001,

0xfb67,	// (0x0008599b) list_single_clock2_pane_t

0xab8a,	// (0x000809be) bg_button_pane_cp10

0xcdae,	// (0x00082be2) cell_clock2_toolbar_pane_g1

0x42f3,	// (0x0007a127) aid_main_viewer_pane_g1_ParamLimits

0x42f3,	// (0x0007a127) aid_main_viewer_pane_g1

0x4301,	// (0x0007a135) aid_main_viewer_pane_g2_ParamLimits

0x4301,	// (0x0007a135) aid_main_viewer_pane_g2

0x430f,	// (0x0007a143) aid_main_viewer_pane_g3_ParamLimits

0x430f,	// (0x0007a143) aid_main_viewer_pane_g3

0x431e,	// (0x0007a152) aid_main_viewer_pane_g4_ParamLimits

0x431e,	// (0x0007a152) aid_main_viewer_pane_g4

0x0003,

0xf4b8,	// (0x000852ec) aid_main_viewer_pane_g_ParamLimits

0xf4b8,	// (0x000852ec) aid_main_viewer_pane_g

0x5a0d,	// (0x0007b841) main_calc_pane_ParamLimits

0x5a21,	// (0x0007b855) main_dialer2_pane_ParamLimits

0xab8a,	// (0x000809be) main_cam6_pane

0xab8a,	// (0x000809be) main_vid6_pane

0x7164,	// (0x0007cf98) listscroll_gen_pane_cp06_ParamLimits

0x7164,	// (0x0007cf98) listscroll_gen_pane_cp06

0x7276,	// (0x0007d0aa) main_clock2_pane_t5_ParamLimits

0x7276,	// (0x0007d0aa) main_clock2_pane_t5

0x72d8,	// (0x0007d10c) aid_call2_pane_cp10_ParamLimits

0x72ea,	// (0x0007d11e) aid_call_pane_cp10_ParamLimits

0x3a40,	// (0x00079874) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3a40,	// (0x00079874) popup_clock_analogue_window_cp10_g2_ParamLimits

0x72fc,	// (0x0007d130) popup_clock_analogue_window_cp10_g3_ParamLimits

0x72fc,	// (0x0007d130) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3a40,	// (0x00079874) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7ee,	// (0x00085622) popup_clock_analogue_window_cp10_g_ParamLimits

0x7312,	// (0x0007d146) popup_clock_analogue_window_cp10_t1_ParamLimits

0x79b1,	// (0x0007d7e5) cell_dialer2_keypad_pane_g2_ParamLimits

0x79b1,	// (0x0007d7e5) cell_dialer2_keypad_pane_g2

0x0001,

0xf8cf,	// (0x00085703) cell_dialer2_keypad_pane_g_ParamLimits

0xf8cf,	// (0x00085703) cell_dialer2_keypad_pane_g

0x79cd,	// (0x0007d801) cell_dialer2_keypad_pane_t1

0x85d9,	// (0x0007e40d) main_cset_text2_pane_ParamLimits

0x85d9,	// (0x0007e40d) main_cset_text2_pane

0xcad4,	// (0x00082908) area_vitu2_query_pane_g1_ParamLimits

0x0ccd,	// (0x00076b01) area_vitu2_query_pane_g2_ParamLimits

0xfa84,	// (0x000858b8) area_vitu2_query_pane_g_ParamLimits

0xcb58,	// (0x0008298c) area_vitu2_query_pane_t7_ParamLimits

0xcb58,	// (0x0008298c) area_vitu2_query_pane_t7

0x8d9c,	// (0x0007ebd0) bg_button_pane_cp018_ParamLimits

0x8daa,	// (0x0007ebde) bg_button_pane_cp021_ParamLimits

0x0d08,	// (0x00076b3c) bg_button_pane_cp022_ParamLimits

0x0d08,	// (0x00076b3c) bg_vkb2_func_pane_cp08_ParamLimits

0x8d9c,	// (0x0007ebd0) bg_vkb2_func_pane_cp06_ParamLimits

0x8daa,	// (0x0007ebde) bg_vkb2_func_pane_cp07_ParamLimits

0x0d19,	// (0x00076b4d) input_focus_pane_cp09_ParamLimits

0xeba4,	// (0x000849d8) cam6_autofocus_pane_ParamLimits

0xeba4,	// (0x000849d8) cam6_autofocus_pane

0x92f8,	// (0x0007f12c) cam6_image_uncrop_pane_ParamLimits

0x92f8,	// (0x0007f12c) cam6_image_uncrop_pane

0x9307,	// (0x0007f13b) cam6_indi_pane_ParamLimits

0x9307,	// (0x0007f13b) cam6_indi_pane

0x931d,	// (0x0007f151) cam6_mode_pane_ParamLimits

0x931d,	// (0x0007f151) cam6_mode_pane

0x932f,	// (0x0007f163) cam6_timer_pane_ParamLimits

0x932f,	// (0x0007f163) cam6_timer_pane

0x933b,	// (0x0007f16f) cam6_zoom_pane_ParamLimits

0x933b,	// (0x0007f16f) cam6_zoom_pane

0x9349,	// (0x0007f17d) cam6_mode_pane_g1_ParamLimits

0x9349,	// (0x0007f17d) cam6_mode_pane_g1

0x9359,	// (0x0007f18d) cam6_mode_pane_g2_ParamLimits

0x9359,	// (0x0007f18d) cam6_mode_pane_g2

0x9369,	// (0x0007f19d) cam6_mode_pane_g3_ParamLimits

0x9369,	// (0x0007f19d) cam6_mode_pane_g3

0x9379,	// (0x0007f1ad) cam6_mode_pane_g4_ParamLimits

0x9379,	// (0x0007f1ad) cam6_mode_pane_g4

0x0003,

0xfb6c,	// (0x000859a0) cam6_mode_pane_g_ParamLimits

0xfb6c,	// (0x000859a0) cam6_mode_pane_g

0xcdb6,	// (0x00082bea) bg_tb_trans_pane_cp08_ParamLimits

0xcdb6,	// (0x00082bea) bg_tb_trans_pane_cp08

0xcdc4,	// (0x00082bf8) cam6_battery_pane_ParamLimits

0xcdc4,	// (0x00082bf8) cam6_battery_pane

0xcdda,	// (0x00082c0e) cam6_indi_pane_g1_ParamLimits

0xcdda,	// (0x00082c0e) cam6_indi_pane_g1

0xcdec,	// (0x00082c20) cam6_indi_pane_g2_ParamLimits

0xcdec,	// (0x00082c20) cam6_indi_pane_g2

0xcdfe,	// (0x00082c32) cam6_indi_pane_g3_ParamLimits

0xcdfe,	// (0x00082c32) cam6_indi_pane_g3

0x0002,

0xfb75,	// (0x000859a9) cam6_indi_pane_g_ParamLimits

0xfb75,	// (0x000859a9) cam6_indi_pane_g

0xce10,	// (0x00082c44) cam6_indi_pane_t1_ParamLimits

0xce10,	// (0x00082c44) cam6_indi_pane_t1

0x8000,	// (0x0007de34) cam6_autofocus_pane_g1

0x8008,	// (0x0007de3c) cam6_autofocus_pane_g2

0x8010,	// (0x0007de44) cam6_autofocus_pane_g3

0x8018,	// (0x0007de4c) cam6_autofocus_pane_g4

0x0003,

0xfb7c,	// (0x000859b0) cam6_autofocus_pane_g

0xce36,	// (0x00082c6a) cam6_timer_pane_g1

0xce3e,	// (0x00082c72) cam6_timer_pane_t1

0xce4c,	// (0x00082c80) cam6_zoom_cont_pane

0xce54,	// (0x00082c88) cam6_zoom_pane_g1

0xce5c,	// (0x00082c90) cam6_zoom_pane_g2

0x9389,	// (0x0007f1bd) cam6_zoom_pane_g3

0x0002,

0xfb85,	// (0x000859b9) cam6_zoom_pane_g

0xbbf7,	// (0x00081a2b) cam6_battery_pane_g1

0xbbf7,	// (0x00081a2b) cam6_battery_pane_g2

0x0001,

0xf6fb,	// (0x0008552f) cam6_battery_pane_g

0xce64,	// (0x00082c98) cam6_zoom_cont_pane_g1

0xce6d,	// (0x00082ca1) cam6_zoom_cont_pane_g2

0xce76,	// (0x00082caa) cam6_zoom_cont_pane_g3

0x0002,

0xfb8c,	// (0x000859c0) cam6_zoom_cont_pane_g

0x93a6,	// (0x0007f1da) cam6_mode_pane_cp_ParamLimits

0x93a6,	// (0x0007f1da) cam6_mode_pane_cp

0x933b,	// (0x0007f16f) cam6_zoom_pane_cp_ParamLimits

0x933b,	// (0x0007f16f) cam6_zoom_pane_cp

0x93b8,	// (0x0007f1ec) vid6_image_uncrop_cif_pane_ParamLimits

0x93b8,	// (0x0007f1ec) vid6_image_uncrop_cif_pane

0x93c8,	// (0x0007f1fc) vid6_image_uncrop_nhd_pane_ParamLimits

0x93c8,	// (0x0007f1fc) vid6_image_uncrop_nhd_pane

0x92f8,	// (0x0007f12c) vid6_image_uncrop_vga_pane_ParamLimits

0x92f8,	// (0x0007f12c) vid6_image_uncrop_vga_pane

0x93d7,	// (0x0007f20b) vid6_image_uncrop_wvga_pane_ParamLimits

0x93d7,	// (0x0007f20b) vid6_image_uncrop_wvga_pane

0x93e6,	// (0x0007f21a) vid6_indi_pane_ParamLimits

0x93e6,	// (0x0007f21a) vid6_indi_pane

0xcdb6,	// (0x00082bea) bg_tb_trans_pane_cp09_ParamLimits

0xcdb6,	// (0x00082bea) bg_tb_trans_pane_cp09

0xce8e,	// (0x00082cc2) cam6_battery_pane_cp_ParamLimits

0xce8e,	// (0x00082cc2) cam6_battery_pane_cp

0xce9a,	// (0x00082cce) vid6_indi_pane_g1_ParamLimits

0xce9a,	// (0x00082cce) vid6_indi_pane_g1

0xceac,	// (0x00082ce0) vid6_indi_pane_g2_ParamLimits

0xceac,	// (0x00082ce0) vid6_indi_pane_g2

0xcebe,	// (0x00082cf2) vid6_indi_pane_g3_ParamLimits

0xcebe,	// (0x00082cf2) vid6_indi_pane_g3

0xced5,	// (0x00082d09) vid6_indi_pane_g4_ParamLimits

0xced5,	// (0x00082d09) vid6_indi_pane_g4

0xceec,	// (0x00082d20) vid6_indi_pane_g5_ParamLimits

0xceec,	// (0x00082d20) vid6_indi_pane_g5

0x0004,

0xfb93,	// (0x000859c7) vid6_indi_pane_g_ParamLimits

0xfb93,	// (0x000859c7) vid6_indi_pane_g

0xcf06,	// (0x00082d3a) vid6_indi_pane_t1_ParamLimits

0xcf06,	// (0x00082d3a) vid6_indi_pane_t1

0xcf1c,	// (0x00082d50) vid6_indi_pane_t2_ParamLimits

0xcf1c,	// (0x00082d50) vid6_indi_pane_t2

0xcf44,	// (0x00082d78) vid6_indi_pane_t3_ParamLimits

0xcf44,	// (0x00082d78) vid6_indi_pane_t3

0xcf6c,	// (0x00082da0) vid6_indi_pane_t4_ParamLimits

0xcf6c,	// (0x00082da0) vid6_indi_pane_t4

0x0003,

0xfb9e,	// (0x000859d2) vid6_indi_pane_t_ParamLimits

0xfb9e,	// (0x000859d2) vid6_indi_pane_t

0xcf90,	// (0x00082dc4) wait_bar_pane_cp08

0x93fe,	// (0x0007f232) main_cset_text2_pane_t1_ParamLimits

0x93fe,	// (0x0007f232) main_cset_text2_pane_t1

0x9391,	// (0x0007f1c5) listscroll_gen_pane_cp06_t1_ParamLimits

0x9391,	// (0x0007f1c5) listscroll_gen_pane_cp06_t1

0xab8a,	// (0x000809be) main_cam6_set_pane

0xbe27,	// (0x00081c5b) bg_tb_trans_pane_cp06_ParamLimits

0xeac2,	// (0x000848f6) cam4_indicators_pane_g1_ParamLimits

0xead2,	// (0x00084906) cam4_indicators_pane_g2_ParamLimits

0xf90c,	// (0x00085740) cam4_indicators_pane_g_ParamLimits

0xeaea,	// (0x0008491e) cam4_indicators_pane_t1_ParamLimits

0xc5b8,	// (0x000823ec) bg_tb_trans_pane_cp07_ParamLimits

0x7fa9,	// (0x0007dddd) vid4_indicators_pane_g1_ParamLimits

0x7fb8,	// (0x0007ddec) vid4_indicators_pane_g2_ParamLimits

0x7fc7,	// (0x0007ddfb) vid4_indicators_pane_g3_ParamLimits

0x7fd4,	// (0x0007de08) vid4_indicators_pane_g4_ParamLimits

0xf91e,	// (0x00085752) vid4_indicators_pane_g_ParamLimits

0x7fec,	// (0x0007de20) vid4_indicators_pane_t1_ParamLimits

0x8ef0,	// (0x0007ed24) vid4_progress_pane_g1_ParamLimits

0x8f01,	// (0x0007ed35) vid4_progress_pane_g2_ParamLimits

0xb1c7,	// (0x00080ffb) vid4_progress_pane_g3_ParamLimits

0xead2,	// (0x00084906) vid4_progress_pane_g4_ParamLimits

0xfacf,	// (0x00085903) vid4_progress_pane_g_ParamLimits

0xeb7e,	// (0x000849b2) vid4_progress_pane_t1_ParamLimits

0x8f13,	// (0x0007ed47) vid4_progress_pane_t2_ParamLimits

0x8f2b,	// (0x0007ed5f) vid4_progress_pane_t3_ParamLimits

0xfada,	// (0x0008590e) vid4_progress_pane_t_ParamLimits

0x8f42,	// (0x0007ed76) wait_bar_pane_cp07_ParamLimits

0x941f,	// (0x0007f253) main_cam6_set_pane_g2_ParamLimits

0x941f,	// (0x0007f253) main_cam6_set_pane_g2

0x9445,	// (0x0007f279) main_cset6_listscroll_pane_ParamLimits

0x9445,	// (0x0007f279) main_cset6_listscroll_pane

0x9463,	// (0x0007f297) main_cset6_slider_pane_ParamLimits

0x9463,	// (0x0007f297) main_cset6_slider_pane

0x9479,	// (0x0007f2ad) main_cset6_text2_pane_ParamLimits

0x9479,	// (0x0007f2ad) main_cset6_text2_pane

0xcf9f,	// (0x00082dd3) main_cset6_text_pane

0xcfa7,	// (0x00082ddb) main_cset_list_pane_copy1_ParamLimits

0xcfa7,	// (0x00082ddb) main_cset_list_pane_copy1

0xcfb7,	// (0x00082deb) scroll_pane_cp028_copy1

0x9487,	// (0x0007f2bb) cset_list_set_pane_copy1

0x949b,	// (0x0007f2cf) aid_position_infowindow_above_copy1

0x94a3,	// (0x0007f2d7) aid_position_infowindow_below_copy1

0x94ab,	// (0x0007f2df) cset_list_set_pane_g1_copy1

0x0d2a,	// (0x00076b5e) cset_list_set_pane_g3_copy1_ParamLimits

0x0d2a,	// (0x00076b5e) cset_list_set_pane_g3_copy1

0x0d39,	// (0x00076b6d) cset_list_set_pane_t1_copy1_ParamLimits

0x0d39,	// (0x00076b6d) cset_list_set_pane_t1_copy1

0xac03,	// (0x00080a37) list_highlight_pane_cp021_copy1_ParamLimits

0xac03,	// (0x00080a37) list_highlight_pane_cp021_copy1

0xcfc0,	// (0x00082df4) cset6_slider_pane_ParamLimits

0xcfc0,	// (0x00082df4) cset6_slider_pane

0xcfec,	// (0x00082e20) main_cset6_slider_pane_g1_ParamLimits

0xcfec,	// (0x00082e20) main_cset6_slider_pane_g1

0x94b3,	// (0x0007f2e7) main_cset6_slider_pane_g2_ParamLimits

0x94b3,	// (0x0007f2e7) main_cset6_slider_pane_g2

0xd014,	// (0x00082e48) main_cset6_slider_pane_g3_ParamLimits

0xd014,	// (0x00082e48) main_cset6_slider_pane_g3

0x94db,	// (0x0007f30f) main_cset6_slider_pane_g4_ParamLimits

0x94db,	// (0x0007f30f) main_cset6_slider_pane_g4

0x94e7,	// (0x0007f31b) main_cset6_slider_pane_g5_ParamLimits

0x94e7,	// (0x0007f31b) main_cset6_slider_pane_g5

0xc767,	// (0x0008259b) main_cset6_slider_pane_g7_ParamLimits

0xc767,	// (0x0008259b) main_cset6_slider_pane_g7

0xc773,	// (0x000825a7) main_cset6_slider_pane_g8_ParamLimits

0xc773,	// (0x000825a7) main_cset6_slider_pane_g8

0x8688,	// (0x0007e4bc) main_cset6_slider_pane_g9_ParamLimits

0x8688,	// (0x0007e4bc) main_cset6_slider_pane_g9

0x8694,	// (0x0007e4c8) main_cset6_slider_pane_g10_ParamLimits

0x8694,	// (0x0007e4c8) main_cset6_slider_pane_g10

0x86a0,	// (0x0007e4d4) main_cset6_slider_pane_g11_ParamLimits

0x86a0,	// (0x0007e4d4) main_cset6_slider_pane_g11

0x86ac,	// (0x0007e4e0) main_cset6_slider_pane_g12_ParamLimits

0x86ac,	// (0x0007e4e0) main_cset6_slider_pane_g12

0x86b8,	// (0x0007e4ec) main_cset6_slider_pane_g13_ParamLimits

0x86b8,	// (0x0007e4ec) main_cset6_slider_pane_g13

0x86c4,	// (0x0007e4f8) main_cset6_slider_pane_g14_ParamLimits

0x86c4,	// (0x0007e4f8) main_cset6_slider_pane_g14

0x94f5,	// (0x0007f329) main_cset6_slider_pane_g15_ParamLimits

0x94f5,	// (0x0007f329) main_cset6_slider_pane_g15

0x86e8,	// (0x0007e51c) main_cset6_slider_pane_g16_ParamLimits

0x86e8,	// (0x0007e51c) main_cset6_slider_pane_g16

0x86f6,	// (0x0007e52a) main_cset6_slider_pane_g17_ParamLimits

0x86f6,	// (0x0007e52a) main_cset6_slider_pane_g17

0x0011,

0xfba7,	// (0x000859db) main_cset6_slider_pane_g_ParamLimits

0xfba7,	// (0x000859db) main_cset6_slider_pane_g

0xd020,	// (0x00082e54) main_cset6_slider_pane_t1_ParamLimits

0xd020,	// (0x00082e54) main_cset6_slider_pane_t1

0x9525,	// (0x0007f359) main_cset6_slider_pane_t2_ParamLimits

0x9525,	// (0x0007f359) main_cset6_slider_pane_t2

0x9550,	// (0x0007f384) main_cset6_slider_pane_t3_ParamLimits

0x9550,	// (0x0007f384) main_cset6_slider_pane_t3

0x957b,	// (0x0007f3af) main_cset6_slider_pane_t4_ParamLimits

0x957b,	// (0x0007f3af) main_cset6_slider_pane_t4

0x95a8,	// (0x0007f3dc) main_cset6_slider_pane_t5_ParamLimits

0x95a8,	// (0x0007f3dc) main_cset6_slider_pane_t5

0xd061,	// (0x00082e95) main_cset6_slider_pane_t7_ParamLimits

0xd061,	// (0x00082e95) main_cset6_slider_pane_t7

0x95d5,	// (0x0007f409) main_cset6_slider_pane_t8_ParamLimits

0x95d5,	// (0x0007f409) main_cset6_slider_pane_t8

0x95f9,	// (0x0007f42d) main_cset6_slider_pane_t9_ParamLimits

0x95f9,	// (0x0007f42d) main_cset6_slider_pane_t9

0x961d,	// (0x0007f451) main_cset6_slider_pane_t10_ParamLimits

0x961d,	// (0x0007f451) main_cset6_slider_pane_t10

0x9641,	// (0x0007f475) main_cset6_slider_pane_t11_ParamLimits

0x9641,	// (0x0007f475) main_cset6_slider_pane_t11

0xd097,	// (0x00082ecb) main_cset6_slider_pane_t14_ParamLimits

0xd097,	// (0x00082ecb) main_cset6_slider_pane_t14

0xd0d0,	// (0x00082f04) main_cset6_slider_pane_t15_ParamLimits

0xd0d0,	// (0x00082f04) main_cset6_slider_pane_t15

0x000b,

0xfbcc,	// (0x00085a00) main_cset6_slider_pane_t_ParamLimits

0xfbcc,	// (0x00085a00) main_cset6_slider_pane_t

0xc82b,	// (0x0008265f) cset_slider_pane_g1_copy1

0xc834,	// (0x00082668) cset_slider_pane_g2_copy1

0xc83d,	// (0x00082671) cset_slider_pane_g3_copy1

0xab8a,	// (0x000809be) bg_popup_sub_pane_cp011_copy1

0xc8e8,	// (0x0008271c) main_cset_text_pane_g1_copy1

0xc8f0,	// (0x00082724) main_cset_text_pane_t1_copy1

0xc8fe,	// (0x00082732) main_cset_text_pane_t2_copy1

0xc90c,	// (0x00082740) main_cset_text_pane_t3_copy1

0xc91a,	// (0x0008274e) main_cset_text_pane_t4_copy1

0xc928,	// (0x0008275c) main_cset_text_pane_t5_copy1

0xc936,	// (0x0008276a) main_cset_text_pane_t6_copy1

0xc944,	// (0x00082778) main_cset_text_pane_t7_copy1

0x93fe,	// (0x0007f232) main_cset_text2_pane_t1_copy1

0xab8a,	// (0x000809be) main_ncimui_pane

0x5caf,	// (0x0007bae3) popup_query_ncimui_window_ParamLimits

0x5caf,	// (0x0007bae3) popup_query_ncimui_window

0xbe8c,	// (0x00081cc0) field_cale_ev2_pane_g4_ParamLimits

0xbe8c,	// (0x00081cc0) field_cale_ev2_pane_g4

0x787c,	// (0x0007d6b0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x787c,	// (0x0007d6b0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8aa,	// (0x000856de) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8aa,	// (0x000856de) cell_video_dialer_keypad_pane_g

0x7894,	// (0x0007d6c8) cell_video_dialer_keypad_pane_t1

0xab8a,	// (0x000809be) bg_popup_window_pane_cp012

0x3694,	// (0x000794c8) heading_pane_cp06

0xd1f8,	// (0x0008302c) ncim_query_content_pane

0xab8a,	// (0x000809be) bg_popup_heading_pane_cp01

0xd200,	// (0x00083034) ncim_heading_pane_t1

0xd20e,	// (0x00083042) ncim_indicator_popup_pane

0xd220,	// (0x00083054) ncim_query_button_pane

0xd236,	// (0x0008306a) ncim_query_content_pane_t1

0xd248,	// (0x0008307c) ncim_query_content_pane_t2

0x0005,

0xfc0b,	// (0x00085a3f) ncim_query_content_pane_t

0xd282,	// (0x000830b6) ncim_query_list_pane

0xd294,	// (0x000830c8) ncim_query_popup_pane

0xd20e,	// (0x00083042) ncim_indicator_popup_pane_ParamLimits

0x9760,	// (0x0007f594) ncim_query_content_pane_g1_ParamLimits

0x9760,	// (0x0007f594) ncim_query_content_pane_g1

0xd236,	// (0x0008306a) ncim_query_content_pane_t1_ParamLimits

0xd248,	// (0x0008307c) ncim_query_content_pane_t2_ParamLimits

0x976c,	// (0x0007f5a0) ncim_query_content_pane_t3_ParamLimits

0x976c,	// (0x0007f5a0) ncim_query_content_pane_t3

0x9794,	// (0x0007f5c8) ncim_query_content_pane_t4_ParamLimits

0x9794,	// (0x0007f5c8) ncim_query_content_pane_t4

0x97bc,	// (0x0007f5f0) ncim_query_content_pane_t5_ParamLimits

0x97bc,	// (0x0007f5f0) ncim_query_content_pane_t5

0xd25a,	// (0x0008308e) ncim_query_content_pane_t6_ParamLimits

0xd25a,	// (0x0008308e) ncim_query_content_pane_t6

0xfc0b,	// (0x00085a3f) ncim_query_content_pane_t_ParamLimits

0xd282,	// (0x000830b6) ncim_query_list_pane_ParamLimits

0xd294,	// (0x000830c8) ncim_query_popup_pane_ParamLimits

0xd2a8,	// (0x000830dc) wait_bar_pane_cp04

0xab8a,	// (0x000809be) input_focus_pane_cp011

0xd2b0,	// (0x000830e4) ncim_query_popup_pane_t1

0xd2be,	// (0x000830f2) ncim_list_query_list_pane_ParamLimits

0xd2be,	// (0x000830f2) ncim_list_query_list_pane

0xab8a,	// (0x000809be) bg_button_pane_cp027

0xd2d1,	// (0x00083105) ncim_query_button_pane_g1

0xab8a,	// (0x000809be) list_highlight_pane_cp012

0xd2db,	// (0x0008310f) ncim_list_query_list_pane_g1

0xd2e3,	// (0x00083117) ncim_list_query_list_pane_t1

0xeade,	// (0x00084912) cam4_indicators_pane_g3_ParamLimits

0xeade,	// (0x00084912) cam4_indicators_pane_g3

0x7fe0,	// (0x0007de14) vid4_indicators_pane_g5_ParamLimits

0x7fe0,	// (0x0007de14) vid4_indicators_pane_g5

0xeade,	// (0x00084912) vid4_progress_pane_g5_ParamLimits

0xeade,	// (0x00084912) vid4_progress_pane_g5

0x9679,	// (0x0007f4ad) main_ncimui_pane_g1

0x96cf,	// (0x0007f503) ncimui_group_query_pane_ParamLimits

0x96cf,	// (0x0007f503) ncimui_group_query_pane

0x970b,	// (0x0007f53f) ncimui_list_pane_ParamLimits

0x970b,	// (0x0007f53f) ncimui_list_pane

0x972c,	// (0x0007f560) ncimui_text_pane_ParamLimits

0x972c,	// (0x0007f560) ncimui_text_pane

0x97e4,	// (0x0007f618) ncimui_text_pane_t1_ParamLimits

0x97e4,	// (0x0007f618) ncimui_text_pane_t1

0xd2f1,	// (0x00083125) ncimui_list_single_graphic_pane_ParamLimits

0xd2f1,	// (0x00083125) ncimui_list_single_graphic_pane

0x9802,	// (0x0007f636) ncimui_query_pane_ParamLimits

0x9802,	// (0x0007f636) ncimui_query_pane

0xab8a,	// (0x000809be) list_highlight_pane_cp013

0xd301,	// (0x00083135) ncim_list_query_list_pane_t1_copy1

0xd2db,	// (0x0008310f) ncim_list_single_graphic_pane_g1

0xd30f,	// (0x00083143) ncim_query_button_pane_cp01

0xd31b,	// (0x0008314f) ncim_query_entry_pane_ParamLimits

0xd31b,	// (0x0008314f) ncim_query_entry_pane

0xd32e,	// (0x00083162) ncimui_query_pane_g1

0xd33a,	// (0x0008316e) ncimui_query_pane_t1_ParamLimits

0xd33a,	// (0x0008316e) ncimui_query_pane_t1

0xac03,	// (0x00080a37) input_focus_pane_cp012

0xd353,	// (0x00083187) ncim_query_entry_pane_t1

0xef3a,	// (0x00084d6e) main_im_pane_ParamLimits

0xac03,	// (0x00080a37) main_mobtv_pane_ParamLimits

0xac03,	// (0x00080a37) main_mobtv_pane

0x950d,	// (0x0007f341) main_cset6_slider_pane_g18_ParamLimits

0x950d,	// (0x0007f341) main_cset6_slider_pane_g18

0x9519,	// (0x0007f34d) main_cset6_slider_pane_g19_ParamLimits

0x9519,	// (0x0007f34d) main_cset6_slider_pane_g19

0xebb2,	// (0x000849e6) bg_main_mobtv_pane_ParamLimits

0xebb2,	// (0x000849e6) bg_main_mobtv_pane

0x9815,	// (0x0007f649) main_mobtv_info_pane

0x9820,	// (0x0007f654) main_mobtv_loading_pane_ParamLimits

0x9820,	// (0x0007f654) main_mobtv_loading_pane

0xd365,	// (0x00083199) main_mobtv_pg_channel_list_pane

0xd36f,	// (0x000831a3) main_mobtv_pg_hdr_pane

0x982d,	// (0x0007f661) main_mobtv_programe_curr_pane_ParamLimits

0x982d,	// (0x0007f661) main_mobtv_programe_curr_pane

0x983a,	// (0x0007f66e) main_mobtv_programe_next_pane_ParamLimits

0x983a,	// (0x0007f66e) main_mobtv_programe_next_pane

0xd378,	// (0x000831ac) popup_mobtv_noti_window

0xbbf7,	// (0x00081a2b) main_tv_pg_hdr_pane_g1

0xd382,	// (0x000831b6) main_tv_pg_hdr_pane_g2

0xd38a,	// (0x000831be) main_tv_pg_hdr_pane_g3

0xd392,	// (0x000831c6) main_tv_pg_hdr_pane_g4

0xd39a,	// (0x000831ce) main_tv_pg_hdr_pane_g5

0xd3a4,	// (0x000831d8) main_tv_pg_hdr_pane_g6

0xd3ae,	// (0x000831e2) main_tv_pg_hdr_pane_g7

0xd3b8,	// (0x000831ec) main_tv_pg_hdr_pane_g8

0xd3c2,	// (0x000831f6) main_tv_pg_hdr_pane_g9

0xd3cc,	// (0x00083200) main_tv_pg_hdr_pane_g10

0xd3d6,	// (0x0008320a) main_tv_pg_hdr_pane_g11

0x000a,

0xfc18,	// (0x00085a4c) main_tv_pg_hdr_pane_g

0xd3e0,	// (0x00083214) main_tv_pg_hdr_pane_t1

0xd3ee,	// (0x00083222) main_tv_pg_hdr_pane_t2

0xd3fc,	// (0x00083230) main_tv_pg_hdr_pane_t3

0xd40c,	// (0x00083240) main_tv_pg_hdr_pane_t4

0xd41c,	// (0x00083250) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2f,	// (0x00085a63) main_tv_pg_hdr_pane_t

0xd42c,	// (0x00083260) single_mobtv_pg_channel_pane_ParamLimits

0xd42c,	// (0x00083260) single_mobtv_pg_channel_pane

0xd43e,	// (0x00083272) single_mobtv_pg_channel_table_pane

0xd447,	// (0x0008327b) single_mobtv_pg_channel_thumb_pane

0xd450,	// (0x00083284) single_tv_pg_channel_pane_g1

0xd459,	// (0x0008328d) single_tv_pg_channel_pane_g2

0x0001,

0xfc3a,	// (0x00085a6e) single_tv_pg_channel_pane_g

0xbe27,	// (0x00081c5b) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xbe27,	// (0x00081c5b) bg_single_mobtv_pg_channel_thumb_pane

0xd462,	// (0x00083296) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xd462,	// (0x00083296) single_mobtv_pg_channel_thumb_pane_g1

0xd470,	// (0x000832a4) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xd470,	// (0x000832a4) single_mobtv_pg_channel_thumb_pane_g2

0xd47c,	// (0x000832b0) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xd47c,	// (0x000832b0) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3f,	// (0x00085a73) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3f,	// (0x00085a73) single_mobtv_pg_channel_thumb_pane_g

0xd488,	// (0x000832bc) single_mobtv_pg_channel_thumb_pane_t1

0xd496,	// (0x000832ca) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc46,	// (0x00085a7a) single_mobtv_pg_channel_thumb_pane_t

0xbbf7,	// (0x00081a2b) bg_single_mobtv_pg_channel_table_pane_g1

0xbbf7,	// (0x00081a2b) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6fb,	// (0x0008552f) bg_single_mobtv_pg_channel_table_pane_g

0xd4a4,	// (0x000832d8) single_mobtv_pg_channel_table_pane_t1

0xd4b2,	// (0x000832e6) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc4b,	// (0x00085a7f) single_mobtv_pg_channel_table_pane_t

0x984f,	// (0x0007f683) main_mobtv_info_pane_g1_ParamLimits

0x984f,	// (0x0007f683) main_mobtv_info_pane_g1

0x986d,	// (0x0007f6a1) main_mobtv_info_pane_t1_ParamLimits

0x986d,	// (0x0007f6a1) main_mobtv_info_pane_t1

0x98e5,	// (0x0007f719) main_mobtv_info_pane_t2_ParamLimits

0x98e5,	// (0x0007f719) main_mobtv_info_pane_t2

0x0002,

0xfc55,	// (0x00085a89) main_mobtv_info_pane_t_ParamLimits

0xfc55,	// (0x00085a89) main_mobtv_info_pane_t

0x9976,	// (0x0007f7aa) wait_bar_pane_cp05

0x9988,	// (0x0007f7bc) main_mobtv_loading_pane_g1_ParamLimits

0x9988,	// (0x0007f7bc) main_mobtv_loading_pane_g1

0x9999,	// (0x0007f7cd) main_mobtv_loading_pane_g2_ParamLimits

0x9999,	// (0x0007f7cd) main_mobtv_loading_pane_g2

0x99a5,	// (0x0007f7d9) main_mobtv_loading_pane_g3_ParamLimits

0x99a5,	// (0x0007f7d9) main_mobtv_loading_pane_g3

0x0002,

0xfc5c,	// (0x00085a90) main_mobtv_loading_pane_g_ParamLimits

0xfc5c,	// (0x00085a90) main_mobtv_loading_pane_g

0xd4c0,	// (0x000832f4) main_mobtv_loading_pane_t1_ParamLimits

0xd4c0,	// (0x000832f4) main_mobtv_loading_pane_t1

0xd4d8,	// (0x0008330c) main_mobtv_loading_pane_t2_ParamLimits

0xd4d8,	// (0x0008330c) main_mobtv_loading_pane_t2

0x0001,

0xfc63,	// (0x00085a97) main_mobtv_loading_pane_t_ParamLimits

0xfc63,	// (0x00085a97) main_mobtv_loading_pane_t

0x99b8,	// (0x0007f7ec) wait_bar_pane_cp06_ParamLimits

0x99b8,	// (0x0007f7ec) wait_bar_pane_cp06

0xd4fc,	// (0x00083330) main_mobtv_programe_curr_pane_t1

0xd50a,	// (0x0008333e) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc68,	// (0x00085a9c) main_mobtv_programe_curr_pane_t

0xd518,	// (0x0008334c) main_mobtv_programe_next_pane_t1

0xd526,	// (0x0008335a) main_mobtv_programe_next_pane_t2

0xd534,	// (0x00083368) main_mobtv_programe_next_pane_t3

0x0002,

0xfc6d,	// (0x00085aa1) main_mobtv_programe_next_pane_t

0xab8a,	// (0x000809be) bg_popup_mobtv_noti_window_pane

0xd542,	// (0x00083376) popup_mobtv_noti_window_g1

0xd54a,	// (0x0008337e) popup_mobtv_noti_window_t1

0xd558,	// (0x0008338c) popup_mobtv_noti_window_t2

0x0001,

0xfc74,	// (0x00085aa8) popup_mobtv_noti_window_t

0xbbf7,	// (0x00081a2b) bg_popup_mobtv_noti_window_pane_g1

0xab8a,	// (0x000809be) sc_clock_pane

0xab8a,	// (0x000809be) main_fs_bigclock_pane

0x916f,	// (0x0007efa3) blid2_tripm_pane_t4_ParamLimits

0x916f,	// (0x0007efa3) blid2_tripm_pane_t4

0x99c7,	// (0x0007f7fb) sc_clock_pane_g1_ParamLimits

0x99c7,	// (0x0007f7fb) sc_clock_pane_g1

0x99d9,	// (0x0007f80d) sc_clock_pane_t1_ParamLimits

0x99d9,	// (0x0007f80d) sc_clock_pane_t1

0x99fd,	// (0x0007f831) sc_clock_pane_t2_ParamLimits

0x99fd,	// (0x0007f831) sc_clock_pane_t2

0x9a15,	// (0x0007f849) sc_clock_pane_t3_ParamLimits

0x9a15,	// (0x0007f849) sc_clock_pane_t3

0x0004,

0xfc79,	// (0x00085aad) sc_clock_pane_t_ParamLimits

0xfc79,	// (0x00085aad) sc_clock_pane_t

0xa317,	// (0x0008014b) main_fs_bigclock_indicator_pane_ParamLimits

0xa317,	// (0x0008014b) main_fs_bigclock_indicator_pane

0xbdf7,	// (0x00081c2b) main_fs_bigclock_pane_g1_ParamLimits

0xbdf7,	// (0x00081c2b) main_fs_bigclock_pane_g1

0xa323,	// (0x00080157) main_fs_bigclock_pane_t1_ParamLimits

0xa323,	// (0x00080157) main_fs_bigclock_pane_t1

0xa335,	// (0x00080169) main_fs_bigclock_pane_t2_ParamLimits

0xa335,	// (0x00080169) main_fs_bigclock_pane_t2

0xa349,	// (0x0008017d) main_fs_bigclock_pane_t3_ParamLimits

0xa349,	// (0x0008017d) main_fs_bigclock_pane_t3

0x0002,

0xfe7d,	// (0x00085cb1) main_fs_bigclock_pane_t_ParamLimits

0xfe7d,	// (0x00085cb1) main_fs_bigclock_pane_t

0xe1a7,	// (0x00083fdb) main_fs_bigclock_indicator_pane_g1

0xd228,	// (0x0008305c) ncim_query_content_pane_g2_ParamLimits

0xd228,	// (0x0008305c) ncim_query_content_pane_g2

0x0001,

0xfc06,	// (0x00085a3a) ncim_query_content_pane_g_ParamLimits

0xfc06,	// (0x00085a3a) ncim_query_content_pane_g

0x9a2c,	// (0x0007f860) sc_clock_pane_t4_ParamLimits

0x9a2c,	// (0x0007f860) sc_clock_pane_t4

0xac03,	// (0x00080a37) main_radioblah_pane

0xc540,	// (0x00082374) cell_call4_button_pane_t1_copy1_ParamLimits

0xc540,	// (0x00082374) cell_call4_button_pane_t1_copy1

0x9681,	// (0x0007f4b5) main_ncimui_pane_t1_ParamLimits

0x9681,	// (0x0007f4b5) main_ncimui_pane_t1

0x969b,	// (0x0007f4cf) main_ncimui_pane_t2_ParamLimits

0x969b,	// (0x0007f4cf) main_ncimui_pane_t2

0x0002,

0xfbff,	// (0x00085a33) main_ncimui_pane_t_ParamLimits

0xfbff,	// (0x00085a33) main_ncimui_pane_t

0xd6a4,	// (0x000834d8) main_radioblah_anim_pane_ParamLimits

0xd6a4,	// (0x000834d8) main_radioblah_anim_pane

0xd6b5,	// (0x000834e9) main_radioblah_info_pane_ParamLimits

0xd6b5,	// (0x000834e9) main_radioblah_info_pane

0xd6c9,	// (0x000834fd) main_radioblah_pane_t1_ParamLimits

0xd6c9,	// (0x000834fd) main_radioblah_pane_t1

0xd6e5,	// (0x00083519) main_radioblah_pane_t2_ParamLimits

0xd6e5,	// (0x00083519) main_radioblah_pane_t2

0x0003,

0xfc9a,	// (0x00085ace) main_radioblah_pane_t_ParamLimits

0xfc9a,	// (0x00085ace) main_radioblah_pane_t

0x9adc,	// (0x0007f910) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9adc,	// (0x0007f910) main_radioblah_rocker_ctrl_pane

0xd72d,	// (0x00083561) main_radioblah_info_pane_t1_ParamLimits

0xd72d,	// (0x00083561) main_radioblah_info_pane_t1

0x9b34,	// (0x0007f968) main_radioblah_info_pane_t2_ParamLimits

0x9b34,	// (0x0007f968) main_radioblah_info_pane_t2

0x0003,

0xfca3,	// (0x00085ad7) main_radioblah_info_pane_t_ParamLimits

0xfca3,	// (0x00085ad7) main_radioblah_info_pane_t

0xbbf7,	// (0x00081a2b) main_radioblah_rocker_ctrl_pane_g1

0x9be4,	// (0x0007fa18) main_radioblah_rocker_ctrl_pane_g2

0x9bec,	// (0x0007fa20) main_radioblah_rocker_ctrl_pane_g3

0x9bf4,	// (0x0007fa28) main_radioblah_rocker_ctrl_pane_g4

0x9bfc,	// (0x0007fa30) main_radioblah_rocker_ctrl_pane_g5

0x9c04,	// (0x0007fa38) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcac,	// (0x00085ae0) main_radioblah_rocker_ctrl_pane_g

0x93fe,	// (0x0007f232) main_cset_text2_pane_t1_copy1_ParamLimits

0xeab0,	// (0x000848e4) cam4_image_uncrop_qvga_pane

0xeb06,	// (0x0008493a) vid4_image_uncrop_qcif_pane

0xeba4,	// (0x000849d8) cam6_image_uncrop_qvga_pane_ParamLimits

0xeba4,	// (0x000849d8) cam6_image_uncrop_qvga_pane

0xce7e,	// (0x00082cb2) vid6_image_uncrop_qcif_pane_ParamLimits

0xce7e,	// (0x00082cb2) vid6_image_uncrop_qcif_pane

0xab8a,	// (0x000809be) bg_popup_preview_window_pane_cp03

0xd1da,	// (0x0008300e) list_cset_text2_pane

0xd1e2,	// (0x00083016) main_cset6_text2_pane_g1

0xd1ea,	// (0x0008301e) main_cset6_text2_pane_t1

0x9c0c,	// (0x0007fa40) list_cset_text2_pane_t1_ParamLimits

0x9c0c,	// (0x0007fa40) list_cset_text2_pane_t1

0xac03,	// (0x00080a37) main_radioblah_pane_ParamLimits

0x9962,	// (0x0007f796) main_mobtv_info_pane_t3_ParamLimits

0x9962,	// (0x0007f796) main_mobtv_info_pane_t3

0x9aca,	// (0x0007f8fe) main_radioblah_pane_g1

0x9b04,	// (0x0007f938) main_radioblah_info_pane_g1

0x9b89,	// (0x0007f9bd) main_radioblah_info_pane_t3_ParamLimits

0x9b89,	// (0x0007f9bd) main_radioblah_info_pane_t3

0x3142,	// (0x00078f76) highlight_cell_cale_month_pane_ParamLimits

0x3142,	// (0x00078f76) highlight_cell_cale_month_pane

0xab8a,	// (0x000809be) main_phob_fisheye_pane

0xbf15,	// (0x00081d49) scroll_pane_cp0031_ParamLimits

0xbf15,	// (0x00081d49) scroll_pane_cp0031

0xcf90,	// (0x00082dc4) wait_bar_pane_cp08_ParamLimits

0x9487,	// (0x0007f2bb) cset_list_set_pane_copy1_ParamLimits

0xd767,	// (0x0008359b) highlight_cell_cale_month_pane_g1

0x9c26,	// (0x0007fa5a) highlight_cell_cale_month_pane_t1

0xcbc4,	// (0x000829f8) list_gen_pane_cp01

0xc752,	// (0x00082586) scroll_pane_01

0x9c34,	// (0x0007fa68) list_single_double_fisheye_pane

0x0d4e,	// (0x00076b82) list_double_fisheye_pane_g1_ParamLimits

0x0d4e,	// (0x00076b82) list_double_fisheye_pane_g1

0x0d5a,	// (0x00076b8e) list_double_fisheye_pane_g2_ParamLimits

0x0d5a,	// (0x00076b8e) list_double_fisheye_pane_g2

0x9c3d,	// (0x0007fa71) list_double_fisheye_pane_g3_ParamLimits

0x9c3d,	// (0x0007fa71) list_double_fisheye_pane_g3

0x0004,

0xfcb9,	// (0x00085aed) list_double_fisheye_pane_g_ParamLimits

0xfcb9,	// (0x00085aed) list_double_fisheye_pane_g

0x0d8b,	// (0x00076bbf) list_double_fisheye_pane_t1_ParamLimits

0x0d8b,	// (0x00076bbf) list_double_fisheye_pane_t1

0x0da6,	// (0x00076bda) list_double_fisheye_pane_t2_ParamLimits

0x0da6,	// (0x00076bda) list_double_fisheye_pane_t2

0x0001,

0xfcc4,	// (0x00085af8) list_double_fisheye_pane_t_ParamLimits

0xfcc4,	// (0x00085af8) list_double_fisheye_pane_t

0xab8a,	// (0x000809be) main_call5_pane

0x9a57,	// (0x0007f88b) sc_swipe_pane_ParamLimits

0x9a57,	// (0x0007f88b) sc_swipe_pane

0x9c5c,	// (0x0007fa90) call5_image_pane_ParamLimits

0x9c5c,	// (0x0007fa90) call5_image_pane

0x9c79,	// (0x0007faad) call5_swipe_1_pane_ParamLimits

0x9c79,	// (0x0007faad) call5_swipe_1_pane

0x9c8c,	// (0x0007fac0) call5_swipe_2_pane_ParamLimits

0x9c8c,	// (0x0007fac0) call5_swipe_2_pane

0x9cb9,	// (0x0007faed) popup_call5_audio_first_window_ParamLimits

0x9cb9,	// (0x0007faed) popup_call5_audio_first_window

0xbe27,	// (0x00081c5b) call5_swipe_1_pane_g1_ParamLimits

0xbe27,	// (0x00081c5b) call5_swipe_1_pane_g1

0xd76f,	// (0x000835a3) call5_swipe_1_pane_g2_ParamLimits

0xd76f,	// (0x000835a3) call5_swipe_1_pane_g2

0x0001,

0xfcc9,	// (0x00085afd) call5_swipe_1_pane_g_ParamLimits

0xfcc9,	// (0x00085afd) call5_swipe_1_pane_g

0xd77b,	// (0x000835af) call5_swipe_1_pane_t1_ParamLimits

0xd77b,	// (0x000835af) call5_swipe_1_pane_t1

0xbe27,	// (0x00081c5b) call5_swipe_2_pane_g1_ParamLimits

0xbe27,	// (0x00081c5b) call5_swipe_2_pane_g1

0xd790,	// (0x000835c4) call5_swipe_2_pane_g2_ParamLimits

0xd790,	// (0x000835c4) call5_swipe_2_pane_g2

0x0001,

0xfcce,	// (0x00085b02) call5_swipe_2_pane_g_ParamLimits

0xfcce,	// (0x00085b02) call5_swipe_2_pane_g

0xd79c,	// (0x000835d0) call5_swipe_2_pane_t1_ParamLimits

0xd79c,	// (0x000835d0) call5_swipe_2_pane_t1

0xd7b1,	// (0x000835e5) sc_swipe_pane_g1_ParamLimits

0xd7b1,	// (0x000835e5) sc_swipe_pane_g1

0xd7be,	// (0x000835f2) sc_swipe_pane_g2_ParamLimits

0xd7be,	// (0x000835f2) sc_swipe_pane_g2

0x0001,

0xfcd3,	// (0x00085b07) sc_swipe_pane_g_ParamLimits

0xfcd3,	// (0x00085b07) sc_swipe_pane_g

0xd7ca,	// (0x000835fe) sc_swipe_pane_t1_ParamLimits

0xd7ca,	// (0x000835fe) sc_swipe_pane_t1

0xab8a,	// (0x000809be) main_cmail_launcher_pane

0x9cce,	// (0x0007fb02) aid_size_cell_cmail_l_ParamLimits

0x9cce,	// (0x0007fb02) aid_size_cell_cmail_l

0x9ce8,	// (0x0007fb1c) grid_cmail_l_pane_ParamLimits

0x9ce8,	// (0x0007fb1c) grid_cmail_l_pane

0x9d03,	// (0x0007fb37) cell_cmail_l_pane_ParamLimits

0x9d03,	// (0x0007fb37) cell_cmail_l_pane

0x9d2b,	// (0x0007fb5f) cell_cmail_l_pane_g1_ParamLimits

0x9d2b,	// (0x0007fb5f) cell_cmail_l_pane_g1

0x9d37,	// (0x0007fb6b) cell_cmail_l_pane_t1_ParamLimits

0x9d37,	// (0x0007fb6b) cell_cmail_l_pane_t1

0xd7df,	// (0x00083613) cell_cmail_l_pane_t2_ParamLimits

0xd7df,	// (0x00083613) cell_cmail_l_pane_t2

0x0001,

0xfcd8,	// (0x00085b0c) cell_cmail_l_pane_t_ParamLimits

0xfcd8,	// (0x00085b0c) cell_cmail_l_pane_t

0xac03,	// (0x00080a37) grid_highlight_pane_cp018_ParamLimits

0xac03,	// (0x00080a37) grid_highlight_pane_cp018

0x147f,	// (0x000772b3) main2_pane_ParamLimits

0x147f,	// (0x000772b3) main2_pane

0xefe5,	// (0x00084e19) popup_sp_fs_action_menu_bg_pane_g1

0xefed,	// (0x00084e21) popup_sp_fs_action_menu_bg_pane_g2

0xeff5,	// (0x00084e29) popup_sp_fs_action_menu_bg_pane_g3

0xeffd,	// (0x00084e31) popup_sp_fs_action_menu_bg_pane_g4

0xf005,	// (0x00084e39) popup_sp_fs_action_menu_bg_pane_g5

0xf00d,	// (0x00084e41) popup_sp_fs_action_menu_bg_pane_g6

0xf015,	// (0x00084e49) popup_sp_fs_action_menu_bg_pane_g7

0xf01d,	// (0x00084e51) popup_sp_fs_action_menu_bg_pane_g8

0xf025,	// (0x00084e59) popup_sp_fs_action_menu_bg_pane_g9

0xf02d,	// (0x00084e61) popup_sp_fs_action_menu_bg_pane_g10

0xf02d,	// (0x00084e61) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1a7,	// (0x00084fdb) popup_sp_fs_action_menu_bg_pane_g

0xaf20,	// (0x00080d54) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t3_g3_g1

0xaf2c,	// (0x00080d60) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x2_t3_g3_g2

0xaf38,	// (0x00080d6c) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_x2_t3_g3_g3

0x0002,

0xf257,	// (0x0008508b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf257,	// (0x0008508b) list_medium_line_x2_t3_g3_g

0xaf44,	// (0x00080d78) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaf44,	// (0x00080d78) list_medium_line_x2_t3_g3_t1

0x090a,	// (0x0007673e) list_medium_line_x2_t3_g3_t2_ParamLimits

0x090a,	// (0x0007673e) list_medium_line_x2_t3_g3_t2

0xaf59,	// (0x00080d8d) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf25e,	// (0x00085092) list_medium_line_x2_t3_g3_t_ParamLimits

0xf25e,	// (0x00085092) list_medium_line_x2_t3_g3_t

0xaf20,	// (0x00080d54) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t3_g2_g1

0xaf38,	// (0x00080d6c) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_x2_t3_g2_g2

0x0001,

0xf265,	// (0x00085099) list_medium_line_x2_t3_g2_g_ParamLimits

0xf265,	// (0x00085099) list_medium_line_x2_t3_g2_g

0xaf6e,	// (0x00080da2) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaf6e,	// (0x00080da2) list_medium_line_x2_t3_g2_t1

0xaf84,	// (0x00080db8) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaf84,	// (0x00080db8) list_medium_line_x2_t3_g2_t2

0xaf96,	// (0x00080dca) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaf96,	// (0x00080dca) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26a,	// (0x0008509e) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26a,	// (0x0008509e) list_medium_line_x2_t3_g2_t

0xaf20,	// (0x00080d54) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t4_g4_g1

0xafb4,	// (0x00080de8) list_medium_line_x2_t4_g4_g2_ParamLimits

0xafb4,	// (0x00080de8) list_medium_line_x2_t4_g4_g2

0xaf2c,	// (0x00080d60) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x2_t4_g4_g3

0xafc0,	// (0x00080df4) list_medium_line_x2_t4_g4_g4_ParamLimits

0xafc0,	// (0x00080df4) list_medium_line_x2_t4_g4_g4

0x0003,

0xf271,	// (0x000850a5) list_medium_line_x2_t4_g4_g_ParamLimits

0xf271,	// (0x000850a5) list_medium_line_x2_t4_g4_g

0x091e,	// (0x00076752) list_medium_line_x2_t4_g4_t1_ParamLimits

0x091e,	// (0x00076752) list_medium_line_x2_t4_g4_t1

0x0938,	// (0x0007676c) list_medium_line_x2_t4_g4_t2_ParamLimits

0x0938,	// (0x0007676c) list_medium_line_x2_t4_g4_t2

0x094e,	// (0x00076782) list_medium_line_x2_t4_g4_t3_ParamLimits

0x094e,	// (0x00076782) list_medium_line_x2_t4_g4_t3

0xafcc,	// (0x00080e00) list_medium_line_x2_t4_g4_t4_ParamLimits

0xafcc,	// (0x00080e00) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27a,	// (0x000850ae) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27a,	// (0x000850ae) list_medium_line_x2_t4_g4_t

0xaf20,	// (0x00080d54) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t2_g4_g1

0xafb4,	// (0x00080de8) list_medium_line_x2_t2_g4_g2_ParamLimits

0xafb4,	// (0x00080de8) list_medium_line_x2_t2_g4_g2

0xaf2c,	// (0x00080d60) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x2_t2_g4_g3

0xaf38,	// (0x00080d6c) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e1,	// (0x00085115) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e1,	// (0x00085115) list_medium_line_x2_t2_g4_g

0xafde,	// (0x00080e12) list_medium_line_x2_t2_g4_t1_ParamLimits

0xafde,	// (0x00080e12) list_medium_line_x2_t2_g4_t1

0xaf59,	// (0x00080d8d) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ea,	// (0x0008511e) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ea,	// (0x0008511e) list_medium_line_x2_t2_g4_t

0xaf20,	// (0x00080d54) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t2_g3_g1

0xaf2c,	// (0x00080d60) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x2_t2_g3_g2

0xaf38,	// (0x00080d6c) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_x2_t2_g3_g3

0x0002,

0xf257,	// (0x0008508b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf257,	// (0x0008508b) list_medium_line_x2_t2_g3_g

0xaff3,	// (0x00080e27) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaff3,	// (0x00080e27) list_medium_line_x2_t2_g3_t1

0xaf59,	// (0x00080d8d) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2ef,	// (0x00085123) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2ef,	// (0x00085123) list_medium_line_x2_t2_g3_t

0x34bd,	// (0x000792f1) main_sp_fs_list_pane_ParamLimits

0x34bd,	// (0x000792f1) main_sp_fs_list_pane

0x34c9,	// (0x000792fd) sp_fs_scroll_pane_ParamLimits

0x34c9,	// (0x000792fd) sp_fs_scroll_pane

0x0963,	// (0x00076797) list_medium_line_x2_t3_t1

0x0973,	// (0x000767a7) list_medium_line_x2_t3_t2

0xb036,	// (0x00080e6a) list_medium_line_x2_t3_t3

0x0002,

0xf33a,	// (0x0008516e) list_medium_line_x2_t3_t

0x0981,	// (0x000767b5) list_medium_line_x3_t4_t1

0x0991,	// (0x000767c5) list_medium_line_x3_t4_t2

0xb044,	// (0x00080e78) list_medium_line_x3_t4_t3

0xb036,	// (0x00080e6a) list_medium_line_x3_t4_t4

0x0003,

0xf341,	// (0x00085175) list_medium_line_x3_t4_t

0x099f,	// (0x000767d3) list_medium_line_x4_t5_t1

0x09af,	// (0x000767e3) list_medium_line_x4_t5_t2

0xb044,	// (0x00080e78) list_medium_line_x4_t5_t3

0xb052,	// (0x00080e86) list_medium_line_x4_t5_t4

0xb036,	// (0x00080e6a) list_medium_line_x4_t5_t5

0x0004,

0xf34a,	// (0x0008517e) list_medium_line_x4_t5_t

0xaf20,	// (0x00080d54) list_medium_line_t4_g4_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_t4_g4_g1

0xafc0,	// (0x00080df4) list_medium_line_t4_g4_g2_ParamLimits

0xafc0,	// (0x00080df4) list_medium_line_t4_g4_g2

0xb060,	// (0x00080e94) list_medium_line_t4_g4_g3_ParamLimits

0xb060,	// (0x00080e94) list_medium_line_t4_g4_g3

0xaf38,	// (0x00080d6c) list_medium_line_t4_g4_g4_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_t4_g4_g4

0x0003,

0xf355,	// (0x00085189) list_medium_line_t4_g4_g_ParamLimits

0xf355,	// (0x00085189) list_medium_line_t4_g4_g

0xb06c,	// (0x00080ea0) list_medium_line_t4_g4_t1_ParamLimits

0xb06c,	// (0x00080ea0) list_medium_line_t4_g4_t1

0xb081,	// (0x00080eb5) list_medium_line_t4_g4_t2_ParamLimits

0xb081,	// (0x00080eb5) list_medium_line_t4_g4_t2

0xb097,	// (0x00080ecb) list_medium_line_t4_g4_t3_ParamLimits

0xb097,	// (0x00080ecb) list_medium_line_t4_g4_t3

0xaf59,	// (0x00080d8d) list_medium_line_t4_g4_t4_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_t4_g4_t4

0x0003,

0xf35e,	// (0x00085192) list_medium_line_t4_g4_t_ParamLimits

0xf35e,	// (0x00085192) list_medium_line_t4_g4_t

0x380c,	// (0x00079640) chi_dic_find_pane_g1

0x5a35,	// (0x0007b869) main_tport_pane

0xc879,	// (0x000826ad) list_medium_line_plain_t1

0xc88f,	// (0x000826c3) list_medium_line_t2_g2_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_t2_g2_g1

0xc89b,	// (0x000826cf) list_medium_line_t2_g2_g2_ParamLimits

0xc89b,	// (0x000826cf) list_medium_line_t2_g2_g2

0x0001,

0xfa15,	// (0x00085849) list_medium_line_t2_g2_g_ParamLimits

0xfa15,	// (0x00085849) list_medium_line_t2_g2_g

0x0b82,	// (0x000769b6) list_medium_line_t2_g2_t1_ParamLimits

0x0b82,	// (0x000769b6) list_medium_line_t2_g2_t1

0x0b99,	// (0x000769cd) list_medium_line_t2_g2_t2_ParamLimits

0x0b99,	// (0x000769cd) list_medium_line_t2_g2_t2

0x0001,

0xfa1a,	// (0x0008584e) list_medium_line_t2_g2_t_ParamLimits

0xfa1a,	// (0x0008584e) list_medium_line_t2_g2_t

0xcbcd,	// (0x00082a01) aid_sp_fs_list_icon_a_sm

0xeb93,	// (0x000849c7) aid_sp_fs_list_icon_d

0xcbd5,	// (0x00082a09) aid_sp_fs_text_primary

0xeb9b,	// (0x000849cf) aid_sp_fs_text_secondary

0xcbde,	// (0x00082a12) list_medium_line

0xcbde,	// (0x00082a12) list_medium_line_g2

0xcbde,	// (0x00082a12) list_medium_line_g3

0xcbde,	// (0x00082a12) list_medium_line_plain

0xcbde,	// (0x00082a12) list_medium_line_plain_t2

0xcbde,	// (0x00082a12) list_medium_line_plain_t3

0xcbde,	// (0x00082a12) list_medium_line_right_icon

0xcbde,	// (0x00082a12) list_medium_line_right_iconx2

0xcbde,	// (0x00082a12) list_medium_line_t2

0xcbde,	// (0x00082a12) list_medium_line_t2_g2

0xcbde,	// (0x00082a12) list_medium_line_t2_g3

0xcbde,	// (0x00082a12) list_medium_line_t2_right_icon

0xcbde,	// (0x00082a12) list_medium_line_t2_right_iconx2

0xcbde,	// (0x00082a12) list_medium_line_t3

0xcbde,	// (0x00082a12) list_medium_line_t3_g2

0xcbde,	// (0x00082a12) list_medium_line_t3_g3

0xcbde,	// (0x00082a12) list_medium_line_t3_right_iconx2

0xcbe7,	// (0x00082a1b) list_medium_line_t4_g4

0xcbf0,	// (0x00082a24) list_medium_line_x2

0xcbf0,	// (0x00082a24) list_medium_line_x2_t2_g2

0xcbf0,	// (0x00082a24) list_medium_line_x2_t2_g3

0xcbf0,	// (0x00082a24) list_medium_line_x2_t2_g4

0xcbf0,	// (0x00082a24) list_medium_line_x2_t3

0xcbf0,	// (0x00082a24) list_medium_line_x2_t3_g2

0xcbf0,	// (0x00082a24) list_medium_line_x2_t3_g3

0xcbf0,	// (0x00082a24) list_medium_line_x2_t3_g4

0xcbf0,	// (0x00082a24) list_medium_line_x2_t4_g2

0xcbf0,	// (0x00082a24) list_medium_line_x2_t4_g4

0xcbf9,	// (0x00082a2d) list_medium_line_x3

0xcbf9,	// (0x00082a2d) list_medium_line_x3_t4

0xcbf9,	// (0x00082a2d) list_medium_line_x3_t4_g4

0xcbe7,	// (0x00082a1b) list_medium_line_x4_t4

0xcbe7,	// (0x00082a1b) list_medium_line_x4_t4_g7

0xcbe7,	// (0x00082a1b) list_medium_line_x4_t5

0xcc02,	// (0x00082a36) list_single_fs_dyc_pane_ParamLimits

0xcc02,	// (0x00082a36) list_single_fs_dyc_pane

0xaf20,	// (0x00080d54) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x4_t4_g7_g1

0xd109,	// (0x00082f3d) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd109,	// (0x00082f3d) list_medium_line_x4_t4_g7_g2

0xd115,	// (0x00082f49) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd115,	// (0x00082f49) list_medium_line_x4_t4_g7_g3

0xd124,	// (0x00082f58) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd124,	// (0x00082f58) list_medium_line_x4_t4_g7_g4

0xd130,	// (0x00082f64) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd130,	// (0x00082f64) list_medium_line_x4_t4_g7_g5

0xd13f,	// (0x00082f73) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd13f,	// (0x00082f73) list_medium_line_x4_t4_g7_g6

0xd14e,	// (0x00082f82) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd14e,	// (0x00082f82) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbe5,	// (0x00085a19) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbe5,	// (0x00085a19) list_medium_line_x4_t4_g7_g

0xd15a,	// (0x00082f8e) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd15a,	// (0x00082f8e) list_medium_line_x4_t4_g7_t1

0xd16f,	// (0x00082fa3) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd16f,	// (0x00082fa3) list_medium_line_x4_t4_g7_t2

0xd184,	// (0x00082fb8) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd184,	// (0x00082fb8) list_medium_line_x4_t4_g7_t3

0xd199,	// (0x00082fcd) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd199,	// (0x00082fcd) list_medium_line_x4_t4_g7_t4

0xd1ab,	// (0x00082fdf) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd1ab,	// (0x00082fdf) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbf4,	// (0x00085a28) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbf4,	// (0x00085a28) list_medium_line_x4_t4_g7_t

0xd1bd,	// (0x00082ff1) list_single_dyc_row_pane_ParamLimits

0xd1bd,	// (0x00082ff1) list_single_dyc_row_pane

0x9c49,	// (0x0007fa7d) call5_gesture_pane_ParamLimits

0x9c49,	// (0x0007fa7d) call5_gesture_pane

0x9c9f,	// (0x0007fad3) call5_windows_pane_ParamLimits

0x9c9f,	// (0x0007fad3) call5_windows_pane

0x9d4d,	// (0x0007fb81) call5_swipe_1_pane_cp_ParamLimits

0x9d4d,	// (0x0007fb81) call5_swipe_1_pane_cp

0x9d59,	// (0x0007fb8d) call5_swipe_2_pane_cp_ParamLimits

0x9d59,	// (0x0007fb8d) call5_swipe_2_pane_cp

0x3ca6,	// (0x00079ada) call5_image_pane_cp

0x9d65,	// (0x0007fb99) popup_call5_audio_first_window_cp_ParamLimits

0x9d65,	// (0x0007fb99) popup_call5_audio_first_window_cp

0xd7b1,	// (0x000835e5) call5_swipe_1_pane_g1_cp_ParamLimits

0xd7b1,	// (0x000835e5) call5_swipe_1_pane_g1_cp

0xd7f1,	// (0x00083625) call5_swipe_1_pane_g2_cp

0xd7ca,	// (0x000835fe) call5_swipe_1_pane_t1_cp_ParamLimits

0xd7ca,	// (0x000835fe) call5_swipe_1_pane_t1_cp

0xd7b1,	// (0x000835e5) call5_swipe_2_pane_g1_cp_ParamLimits

0xd7b1,	// (0x000835e5) call5_swipe_2_pane_g1_cp

0xd7f9,	// (0x0008362d) call5_swipe_2_pane_g2_cp

0xd801,	// (0x00083635) call5_swipe_2_pane_t1_cp_ParamLimits

0xd801,	// (0x00083635) call5_swipe_2_pane_t1_cp

0xac03,	// (0x00080a37) main_sp_fs_email_pane

0xd816,	// (0x0008364a) main_sp_fs_listscroll_pane_te

0xd81f,	// (0x00083653) popup_sp_fs_action_menu_pane_ParamLimits

0xd81f,	// (0x00083653) popup_sp_fs_action_menu_pane

0xbbf7,	// (0x00081a2b) bg_sp_fs_ctrlbar_pane_g1

0xd865,	// (0x00083699) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd86e,	// (0x000836a2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd877,	// (0x000836ab) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xbbf7,	// (0x00081a2b) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcdd,	// (0x00085b11) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xb9d6,	// (0x0008180a) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xb9d6,	// (0x0008180a) bg_sp_fs_ctrlbar_ddmenu_pane

0xd880,	// (0x000836b4) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd880,	// (0x000836b4) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd88c,	// (0x000836c0) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd88c,	// (0x000836c0) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce6,	// (0x00085b1a) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce6,	// (0x00085b1a) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd898,	// (0x000836cc) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd898,	// (0x000836cc) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd8b2,	// (0x000836e6) list_medium_line_t2_right_icon_g1

0x0dc8,	// (0x00076bfc) list_medium_line_t2_right_icon_t1

0x0dd8,	// (0x00076c0c) list_medium_line_t2_right_icon_t2

0x0001,

0xfceb,	// (0x00085b1f) list_medium_line_t2_right_icon_t

0xb6c2,	// (0x000814f6) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb6c2,	// (0x000814f6) bg_sp_fs_ctrlbar_pane

0x9dbb,	// (0x0007fbef) main_sp_fs_ctrlbar_button_pane_cp01

0x9dc5,	// (0x0007fbf9) main_sp_fs_ctrlbar_ddmenu_pane

0xd8f4,	// (0x00083728) main_sp_fs_ctrlbar_pane_g1

0xd900,	// (0x00083734) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcf0,	// (0x00085b24) main_sp_fs_ctrlbar_pane_g

0xd90c,	// (0x00083740) main_sp_fs_ctrlbar_pane_t1

0x0dea,	// (0x00076c1e) main_sp_fs_ctrlbar_pane

0x0e0e,	// (0x00076c42) main_sp_fs_listscroll_pane_te_cp01

0x0e2e,	// (0x00076c62) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0e2e,	// (0x00076c62) popup_sp_fs_action_menu_pane_cp01

0xac03,	// (0x00080a37) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xac03,	// (0x00080a37) bg_sp_fs_highlight_list_pane_cp01

0xd931,	// (0x00083765) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd931,	// (0x00083765) sp_fs_action_menu_list_gene_pane_g1

0xd940,	// (0x00083774) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd940,	// (0x00083774) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcfa,	// (0x00085b2e) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcfa,	// (0x00085b2e) sp_fs_action_menu_list_gene_pane_g

0xd94d,	// (0x00083781) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd94d,	// (0x00083781) sp_fs_action_menu_list_gene_pane_t1

0xd965,	// (0x00083799) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd965,	// (0x00083799) sp_fs_action_menu_list_gene_pane

0xd988,	// (0x000837bc) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd988,	// (0x000837bc) popup_sp_fs_action_menu_bg_pane

0xd996,	// (0x000837ca) sp_fs_action_menu_list_pane_ParamLimits

0xd996,	// (0x000837ca) sp_fs_action_menu_list_pane

0xd9ba,	// (0x000837ee) sp_fs_scroll_pane_cp01_ParamLimits

0xd9ba,	// (0x000837ee) sp_fs_scroll_pane_cp01

0x0e4a,	// (0x00076c7e) list_medium_line_plain_t2_t1

0x0e5a,	// (0x00076c8e) list_medium_line_plain_t2_t2

0x0001,

0xfcff,	// (0x00085b33) list_medium_line_plain_t2_t

0x0e6a,	// (0x00076c9e) list_medium_line_plain_t3_t1

0x0e7a,	// (0x00076cae) list_medium_line_plain_t3_t2

0x0e88,	// (0x00076cbc) list_medium_line_plain_t3_t3

0x0002,

0xfd04,	// (0x00085b38) list_medium_line_plain_t3_t

0xaf20,	// (0x00080d54) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t2_g2_g1

0xaf38,	// (0x00080d6c) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_x2_t2_g2_g2

0x0001,

0xf265,	// (0x00085099) list_medium_line_x2_t2_g2_g_ParamLimits

0xf265,	// (0x00085099) list_medium_line_x2_t2_g2_g

0xb06c,	// (0x00080ea0) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb06c,	// (0x00080ea0) list_medium_line_x2_t2_g2_t1

0xaf59,	// (0x00080d8d) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd0b,	// (0x00085b3f) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd0b,	// (0x00085b3f) list_medium_line_x2_t2_g2_t

0xaf20,	// (0x00080d54) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t4_g2_g1

0xd9e0,	// (0x00083814) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd9e0,	// (0x00083814) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd10,	// (0x00085b44) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd10,	// (0x00085b44) list_medium_line_x2_t4_g2_g

0x0e96,	// (0x00076cca) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0e96,	// (0x00076cca) list_medium_line_x2_t4_g2_t1

0x0eb0,	// (0x00076ce4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0eb0,	// (0x00076ce4) list_medium_line_x2_t4_g2_t2

0x0ec6,	// (0x00076cfa) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0ec6,	// (0x00076cfa) list_medium_line_x2_t4_g2_t3

0xaf59,	// (0x00080d8d) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd15,	// (0x00085b49) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd15,	// (0x00085b49) list_medium_line_x2_t4_g2_t

0xd9f2,	// (0x00083826) list_medium_line_t3_right_iconx2_g1

0xd8b2,	// (0x000836e6) list_medium_line_t3_right_iconx2_g2

0x0edb,	// (0x00076d0f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd1e,	// (0x00085b52) list_medium_line_t3_right_iconx2_g

0x0ee5,	// (0x00076d19) list_medium_line_t3_right_iconx2_t1

0x0ef5,	// (0x00076d29) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd25,	// (0x00085b59) list_medium_line_t3_right_iconx2_t

0xaf20,	// (0x00080d54) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x3_t4_g4_g1

0xaf2c,	// (0x00080d60) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x3_t4_g4_g2

0xafc0,	// (0x00080df4) list_medium_line_x3_t4_g4_g3_ParamLimits

0xafc0,	// (0x00080df4) list_medium_line_x3_t4_g4_g3

0xd9fa,	// (0x0008382e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd9fa,	// (0x0008382e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd2a,	// (0x00085b5e) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd2a,	// (0x00085b5e) list_medium_line_x3_t4_g4_g

0x0f03,	// (0x00076d37) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0f03,	// (0x00076d37) list_medium_line_x3_t4_g4_t1

0x0f1a,	// (0x00076d4e) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0f1a,	// (0x00076d4e) list_medium_line_x3_t4_g4_t2

0xda06,	// (0x0008383a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xda06,	// (0x0008383a) list_medium_line_x3_t4_g4_t3

0xda1b,	// (0x0008384f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xda1b,	// (0x0008384f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd33,	// (0x00085b67) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd33,	// (0x00085b67) list_medium_line_x3_t4_g4_t

0x0f35,	// (0x00076d69) list_single_dyc_row_text_pane_t1_ParamLimits

0x0f35,	// (0x00076d69) list_single_dyc_row_text_pane_t1

0x0f7e,	// (0x00076db2) list_single_dyc_row_text_pane_t2_ParamLimits

0x0f7e,	// (0x00076db2) list_single_dyc_row_text_pane_t2

0xda38,	// (0x0008386c) list_single_dyc_row_text_pane_t3_ParamLimits

0xda38,	// (0x0008386c) list_single_dyc_row_text_pane_t3

0x0002,

0xfd3c,	// (0x00085b70) list_single_dyc_row_text_pane_t_ParamLimits

0xfd3c,	// (0x00085b70) list_single_dyc_row_text_pane_t

0xda4a,	// (0x0008387e) list_single_dyc_row_pane_g1_ParamLimits

0xda4a,	// (0x0008387e) list_single_dyc_row_pane_g1

0xda56,	// (0x0008388a) list_single_dyc_row_pane_g2_ParamLimits

0xda56,	// (0x0008388a) list_single_dyc_row_pane_g2

0xda62,	// (0x00083896) list_single_dyc_row_pane_g3_ParamLimits

0xda62,	// (0x00083896) list_single_dyc_row_pane_g3

0xda6e,	// (0x000838a2) list_single_dyc_row_pane_g4_ParamLimits

0xda6e,	// (0x000838a2) list_single_dyc_row_pane_g4

0x0003,

0xfd43,	// (0x00085b77) list_single_dyc_row_pane_g_ParamLimits

0xfd43,	// (0x00085b77) list_single_dyc_row_pane_g

0xda7a,	// (0x000838ae) list_single_dyc_row_text_pane_ParamLimits

0xda7a,	// (0x000838ae) list_single_dyc_row_text_pane

0xab8a,	// (0x000809be) bg_sp_fs_scroll_pane

0xda99,	// (0x000838cd) thumb_sp_fs_scroll_pane

0xc88f,	// (0x000826c3) list_medium_line_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_g1

0xdaa2,	// (0x000838d6) list_medium_line_t1_ParamLimits

0xdaa2,	// (0x000838d6) list_medium_line_t1

0xaf20,	// (0x00080d54) list_medium_line_x2_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_g1

0xaf2c,	// (0x00080d60) list_medium_line_x2_g2_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x2_g2

0x0001,

0xfd4c,	// (0x00085b80) list_medium_line_x2_g_ParamLimits

0xfd4c,	// (0x00085b80) list_medium_line_x2_g

0xdab7,	// (0x000838eb) list_medium_line_x2_t1_ParamLimits

0xdab7,	// (0x000838eb) list_medium_line_x2_t1

0xaf20,	// (0x00080d54) list_medium_line_x3_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x3_g1

0xaf2c,	// (0x00080d60) list_medium_line_x3_g2_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x3_g2

0x0001,

0xfd4c,	// (0x00085b80) list_medium_line_x3_g_ParamLimits

0xfd4c,	// (0x00085b80) list_medium_line_x3_g

0xdab7,	// (0x000838eb) list_medium_line_x3_t1_ParamLimits

0xdab7,	// (0x000838eb) list_medium_line_x3_t1

0xdacd,	// (0x00083901) thumb_sp_fs_scroll_pane_g1

0xdad6,	// (0x0008390a) thumb_sp_fs_scroll_pane_g2

0xdadf,	// (0x00083913) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00085b85) thumb_sp_fs_scroll_pane_g

0xdacd,	// (0x00083901) bg_sp_fs_scroll_pane_g1

0xdad6,	// (0x0008390a) bg_sp_fs_scroll_pane_g2

0xdadf,	// (0x00083913) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd51,	// (0x00085b85) bg_sp_fs_scroll_pane_g

0xaf20,	// (0x00080d54) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaf20,	// (0x00080d54) list_medium_line_x2_t3_g4_g1

0xafb4,	// (0x00080de8) list_medium_line_x2_t3_g4_g2_ParamLimits

0xafb4,	// (0x00080de8) list_medium_line_x2_t3_g4_g2

0xaf2c,	// (0x00080d60) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaf2c,	// (0x00080d60) list_medium_line_x2_t3_g4_g3

0xaf38,	// (0x00080d6c) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaf38,	// (0x00080d6c) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e1,	// (0x00085115) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e1,	// (0x00085115) list_medium_line_x2_t3_g4_g

0x0fd8,	// (0x00076e0c) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0fd8,	// (0x00076e0c) list_medium_line_x2_t3_g4_t1

0x0fee,	// (0x00076e22) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0fee,	// (0x00076e22) list_medium_line_x2_t3_g4_t2

0xaf59,	// (0x00080d8d) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaf59,	// (0x00080d8d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd58,	// (0x00085b8c) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd58,	// (0x00085b8c) list_medium_line_x2_t3_g4_t

0xc88f,	// (0x000826c3) list_medium_line_g2_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_g2_g1

0xc89b,	// (0x000826cf) list_medium_line_g2_g2_ParamLimits

0xc89b,	// (0x000826cf) list_medium_line_g2_g2

0x0001,

0xfa15,	// (0x00085849) list_medium_line_g2_g_ParamLimits

0xfa15,	// (0x00085849) list_medium_line_g2_g

0xdae8,	// (0x0008391c) list_medium_line_g2_t1_ParamLimits

0xdae8,	// (0x0008391c) list_medium_line_g2_t1

0xc88f,	// (0x000826c3) list_medium_line_t3_g2_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_t3_g2_g1

0xc89b,	// (0x000826cf) list_medium_line_t3_g2_g2_ParamLimits

0xc89b,	// (0x000826cf) list_medium_line_t3_g2_g2

0x0001,

0xfa15,	// (0x00085849) list_medium_line_t3_g2_g_ParamLimits

0xfa15,	// (0x00085849) list_medium_line_t3_g2_g

0x1007,	// (0x00076e3b) list_medium_line_t3_g2_t1_ParamLimits

0x1007,	// (0x00076e3b) list_medium_line_t3_g2_t1

0x101e,	// (0x00076e52) list_medium_line_t3_g2_t2_ParamLimits

0x101e,	// (0x00076e52) list_medium_line_t3_g2_t2

0x1033,	// (0x00076e67) list_medium_line_t3_g2_t3_ParamLimits

0x1033,	// (0x00076e67) list_medium_line_t3_g2_t3

0x0002,

0xfd5f,	// (0x00085b93) list_medium_line_t3_g2_t_ParamLimits

0xfd5f,	// (0x00085b93) list_medium_line_t3_g2_t

0xd8b2,	// (0x000836e6) list_medium_line_right_icon_g1

0xdafd,	// (0x00083931) list_medium_line_right_icon_t1

0xc88f,	// (0x000826c3) list_medium_line_t2_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_t2_g1

0x104c,	// (0x00076e80) list_medium_line_t2_t1_ParamLimits

0x104c,	// (0x00076e80) list_medium_line_t2_t1

0x1066,	// (0x00076e9a) list_medium_line_t2_t2_ParamLimits

0x1066,	// (0x00076e9a) list_medium_line_t2_t2

0x0001,

0xfd66,	// (0x00085b9a) list_medium_line_t2_t_ParamLimits

0xfd66,	// (0x00085b9a) list_medium_line_t2_t

0xc88f,	// (0x000826c3) list_medium_line_t3_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_t3_g1

0x107f,	// (0x00076eb3) list_medium_line_t3_t1_ParamLimits

0x107f,	// (0x00076eb3) list_medium_line_t3_t1

0x1096,	// (0x00076eca) list_medium_line_t3_t2_ParamLimits

0x1096,	// (0x00076eca) list_medium_line_t3_t2

0x10ab,	// (0x00076edf) list_medium_line_t3_t3_ParamLimits

0x10ab,	// (0x00076edf) list_medium_line_t3_t3

0x0002,

0xfd6b,	// (0x00085b9f) list_medium_line_t3_t_ParamLimits

0xfd6b,	// (0x00085b9f) list_medium_line_t3_t

0xc88f,	// (0x000826c3) list_medium_line_g3_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_g3_g1

0xdb0b,	// (0x0008393f) list_medium_line_g3_g2_ParamLimits

0xdb0b,	// (0x0008393f) list_medium_line_g3_g2

0xc89b,	// (0x000826cf) list_medium_line_g3_g3_ParamLimits

0xc89b,	// (0x000826cf) list_medium_line_g3_g3

0x0002,

0xfd72,	// (0x00085ba6) list_medium_line_g3_g_ParamLimits

0xfd72,	// (0x00085ba6) list_medium_line_g3_g

0xdb17,	// (0x0008394b) list_medium_line_g3_t1_ParamLimits

0xdb17,	// (0x0008394b) list_medium_line_g3_t1

0xc88f,	// (0x000826c3) list_medium_line_t2_g3_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_t2_g3_g1

0xdb0b,	// (0x0008393f) list_medium_line_t2_g3_g2_ParamLimits

0xdb0b,	// (0x0008393f) list_medium_line_t2_g3_g2

0xc89b,	// (0x000826cf) list_medium_line_t2_g3_g3_ParamLimits

0xc89b,	// (0x000826cf) list_medium_line_t2_g3_g3

0x0002,

0xfd72,	// (0x00085ba6) list_medium_line_t2_g3_g_ParamLimits

0xfd72,	// (0x00085ba6) list_medium_line_t2_g3_g

0x10bd,	// (0x00076ef1) list_medium_line_t2_g3_t1_ParamLimits

0x10bd,	// (0x00076ef1) list_medium_line_t2_g3_t1

0x10d4,	// (0x00076f08) list_medium_line_t2_g3_t2_ParamLimits

0x10d4,	// (0x00076f08) list_medium_line_t2_g3_t2

0x0001,

0xfd79,	// (0x00085bad) list_medium_line_t2_g3_t_ParamLimits

0xfd79,	// (0x00085bad) list_medium_line_t2_g3_t

0xc88f,	// (0x000826c3) list_medium_line_t3_g3_g1_ParamLimits

0xc88f,	// (0x000826c3) list_medium_line_t3_g3_g1

0xdb0b,	// (0x0008393f) list_medium_line_t3_g3_g2_ParamLimits

0xdb0b,	// (0x0008393f) list_medium_line_t3_g3_g2

0xc89b,	// (0x000826cf) list_medium_line_t3_g3_g3_ParamLimits

0xc89b,	// (0x000826cf) list_medium_line_t3_g3_g3

0x0002,

0xfd72,	// (0x00085ba6) list_medium_line_t3_g3_g_ParamLimits

0xfd72,	// (0x00085ba6) list_medium_line_t3_g3_g

0x10ed,	// (0x00076f21) list_medium_line_t3_g3_t1_ParamLimits

0x10ed,	// (0x00076f21) list_medium_line_t3_g3_t1

0x1106,	// (0x00076f3a) list_medium_line_t3_g3_t2_ParamLimits

0x1106,	// (0x00076f3a) list_medium_line_t3_g3_t2

0x111c,	// (0x00076f50) list_medium_line_t3_g3_t3_ParamLimits

0x111c,	// (0x00076f50) list_medium_line_t3_g3_t3

0x0002,

0xfd7e,	// (0x00085bb2) list_medium_line_t3_g3_t_ParamLimits

0xfd7e,	// (0x00085bb2) list_medium_line_t3_g3_t

0xd9f2,	// (0x00083826) list_medium_line_right_iconx2_g1

0xd8b2,	// (0x000836e6) list_medium_line_right_iconx2_g2

0x0001,

0xfd85,	// (0x00085bb9) list_medium_line_right_iconx2_g

0xdb2c,	// (0x00083960) list_medium_line_right_iconx2_t1

0xd9f2,	// (0x00083826) list_medium_line_t2_right_iconx2_g1

0xd8b2,	// (0x000836e6) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd85,	// (0x00085bb9) list_medium_line_t2_right_iconx2_g

0x1136,	// (0x00076f6a) list_medium_line_t2_right_iconx2_t1

0x1146,	// (0x00076f7a) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd8a,	// (0x00085bbe) list_medium_line_t2_right_iconx2_t

0xdb3a,	// (0x0008396e) list_medium_line_x4_t4_t1

0x1158,	// (0x00076f8c) list_medium_line_x4_t4_t2

0x1168,	// (0x00076f9c) list_medium_line_x4_t4_t3

0x1178,	// (0x00076fac) list_medium_line_x4_t4_t4

0x0003,

0xfd8f,	// (0x00085bc3) list_medium_line_x4_t4_t

0x9e09,	// (0x0007fc3d) tport_appsw_pane_ParamLimits

0x9e09,	// (0x0007fc3d) tport_appsw_pane

0x9e1c,	// (0x0007fc50) tport_contact_pane_ParamLimits

0x9e1c,	// (0x0007fc50) tport_contact_pane

0x9e2f,	// (0x0007fc63) tport_listscroll_pane_ParamLimits

0x9e2f,	// (0x0007fc63) tport_listscroll_pane

0x9e45,	// (0x0007fc79) cell_tport_appsw_pane_ParamLimits

0x9e45,	// (0x0007fc79) cell_tport_appsw_pane

0xc5f7,	// (0x0008242b) tport_appsw_pane_g1_ParamLimits

0xc5f7,	// (0x0008242b) tport_appsw_pane_g1

0xdb48,	// (0x0008397c) tport_contact_pane_g1

0xdb51,	// (0x00083985) tport_contact_pane_t1

0xdb5f,	// (0x00083993) tport_contact_pane_t2

0x0001,

0xfd98,	// (0x00085bcc) tport_contact_pane_t

0xdb6d,	// (0x000839a1) list_tport_pane

0xdb76,	// (0x000839aa) scroll_pane_cp_030

0x9e8b,	// (0x0007fcbf) cell_tport_appsw_pane_g1

0xdb8f,	// (0x000839c3) cell_tport_appsw_pane_t1

0xab8a,	// (0x000809be) grid_highlight_pane_cp019

0x9e9b,	// (0x0007fccf) list_tport_double_graphic_pane_ParamLimits

0x9e9b,	// (0x0007fccf) list_tport_double_graphic_pane

0xac03,	// (0x00080a37) list_highlight_pane_cp023_ParamLimits

0xac03,	// (0x00080a37) list_highlight_pane_cp023

0x9eab,	// (0x0007fcdf) list_tport_double_graphic_pane_g1_ParamLimits

0x9eab,	// (0x0007fcdf) list_tport_double_graphic_pane_g1

0x9eb8,	// (0x0007fcec) list_tport_double_graphic_pane_t1_ParamLimits

0x9eb8,	// (0x0007fcec) list_tport_double_graphic_pane_t1

0x9ecd,	// (0x0007fd01) list_tport_double_graphic_pane_t2_ParamLimits

0x9ecd,	// (0x0007fd01) list_tport_double_graphic_pane_t2

0x0001,

0xfda4,	// (0x00085bd8) list_tport_double_graphic_pane_t_ParamLimits

0xfda4,	// (0x00085bd8) list_tport_double_graphic_pane_t

0xab8a,	// (0x000809be) main_cale_note_pane

0x8205,	// (0x0007e039) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x8205,	// (0x0007e039) cell_vitu2_function_top_wide_pane_cp01

0x9976,	// (0x0007f7aa) wait_bar_pane_cp05_ParamLimits

0xab8a,	// (0x000809be) listscroll_cmail_pane

0xdba5,	// (0x000839d9) list_cmail_pane

0x9ee9,	// (0x0007fd1d) list_cmail_body_pane

0x9f01,	// (0x0007fd35) list_single_cmail_header_caption_pane

0x9f1e,	// (0x0007fd52) list_single_cmail_header_detail_pane_ParamLimits

0x9f1e,	// (0x0007fd52) list_single_cmail_header_detail_pane

0x9f50,	// (0x0007fd84) list_single_cmail_header_caption_pane_t1

0x1188,	// (0x00076fbc) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1188,	// (0x00076fbc) list_single_cmail_header_detail_pane_g1

0xebc0,	// (0x000849f4) list_single_cmail_header_detail_pane_g2_ParamLimits

0xebc0,	// (0x000849f4) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda9,	// (0x00085bdd) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda9,	// (0x00085bdd) list_single_cmail_header_detail_pane_g

0xdbd2,	// (0x00083a06) list_single_cmail_header_detail_pane_t1_ParamLimits

0xdbd2,	// (0x00083a06) list_single_cmail_header_detail_pane_t1

0xdc10,	// (0x00083a44) list_single_cmail_header_editor_pane_bg_ParamLimits

0xdc10,	// (0x00083a44) list_single_cmail_header_editor_pane_bg

0xd459,	// (0x0008328d) list_cmail_body_pane_g1

0xdc22,	// (0x00083a56) list_cmail_body_pane_t1

0xc634,	// (0x00082468) list_single_cmail_header_editor_pane_bg_g1

0x285d,	// (0x00078691) list_single_cmail_header_editor_pane_bg_g1_copy1

0xc644,	// (0x00082478) list_single_cmail_header_editor_pane_bg_g1_copy2

0xc63c,	// (0x00082470) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc887,	// (0x000826bb) list_single_cmail_header_editor_pane_bg_g1_copy4

0xc664,	// (0x00082498) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xc654,	// (0x00082488) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xc65c,	// (0x00082490) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x283d,	// (0x00078671) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x9f60,	// (0x0007fd94) calenote_gesture_pane_ParamLimits

0x9f60,	// (0x0007fd94) calenote_gesture_pane

0x9f80,	// (0x0007fdb4) calenote_window_pane_ParamLimits

0x9f80,	// (0x0007fdb4) calenote_window_pane

0xdc30,	// (0x00083a64) popup_note_window_cp01

0x9f9c,	// (0x0007fdd0) calenote_swipe_1_pane_ParamLimits

0x9f9c,	// (0x0007fdd0) calenote_swipe_1_pane

0x9d59,	// (0x0007fb8d) calenote_swipe_2_pane_ParamLimits

0x9d59,	// (0x0007fb8d) calenote_swipe_2_pane

0xd7b1,	// (0x000835e5) calenote_swipe_1_pane_g1_ParamLimits

0xd7b1,	// (0x000835e5) calenote_swipe_1_pane_g1

0xd7be,	// (0x000835f2) calenote_swipe_1_pane_g2_ParamLimits

0xd7be,	// (0x000835f2) calenote_swipe_1_pane_g2

0x0001,

0xfcd3,	// (0x00085b07) calenote_swipe_1_pane_g_ParamLimits

0xfcd3,	// (0x00085b07) calenote_swipe_1_pane_g

0xdc42,	// (0x00083a76) calenote_swipe_1_pane_t1_ParamLimits

0xdc42,	// (0x00083a76) calenote_swipe_1_pane_t1

0xd7b1,	// (0x000835e5) calenote_swipe_2_pane_g1_ParamLimits

0xd7b1,	// (0x000835e5) calenote_swipe_2_pane_g1

0xdc61,	// (0x00083a95) calenote_swipe_2_pane_g2_ParamLimits

0xdc61,	// (0x00083a95) calenote_swipe_2_pane_g2

0x0001,

0xfdb5,	// (0x00085be9) calenote_swipe_2_pane_g_ParamLimits

0xfdb5,	// (0x00085be9) calenote_swipe_2_pane_g

0xdc6d,	// (0x00083aa1) calenote_swipe_2_pane_t1_ParamLimits

0xdc6d,	// (0x00083aa1) calenote_swipe_2_pane_t1

0xab8a,	// (0x000809be) main_mup_navstr_pane

0x6e1e,	// (0x0007cc52) main_mup3_pane_t7_ParamLimits

0x6e1e,	// (0x0007cc52) main_mup3_pane_t7

0xe8ce,	// (0x00084702) main_mp4_pane_g6_ParamLimits

0xe8ce,	// (0x00084702) main_mp4_pane_g6

0xea72,	// (0x000848a6) main_image3_pane_t4_ParamLimits

0xea72,	// (0x000848a6) main_image3_pane_t4

0x9fb1,	// (0x0007fde5) popup_navstr_preview_pane_ParamLimits

0x9fb1,	// (0x0007fde5) popup_navstr_preview_pane

0x9fc1,	// (0x0007fdf5) scroll_navstr_pane_ParamLimits

0x9fc1,	// (0x0007fdf5) scroll_navstr_pane

0xab8a,	// (0x000809be) bg_popup_preview_window_pane_cp04

0xdc94,	// (0x00083ac8) popup_navstr_preview_pane_t1

0x9fd5,	// (0x0007fe09) scroll_navstr_pane_g1_ParamLimits

0x9fd5,	// (0x0007fe09) scroll_navstr_pane_g1

0x9fe9,	// (0x0007fe1d) scroll_navstr_pane_t1_ParamLimits

0x9fe9,	// (0x0007fe1d) scroll_navstr_pane_t1

0xdc39,	// (0x00083a6d) bg_button_pane_cp014

0xdc39,	// (0x00083a6d) bg_button_pane_cp030

0x0d6e,	// (0x00076ba2) list_double_fisheye_pane_g4_ParamLimits

0x0d6e,	// (0x00076ba2) list_double_fisheye_pane_g4

0x0d7a,	// (0x00076bae) list_double_fisheye_pane_g5_ParamLimits

0x0d7a,	// (0x00076bae) list_double_fisheye_pane_g5

0xdbad,	// (0x000839e1) sp_fs_scroll_pane_cp03

0xd8f4,	// (0x00083728) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd900,	// (0x00083734) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcf0,	// (0x00085b24) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd90c,	// (0x00083740) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9edf,	// (0x0007fd13) sp_fs_scroll_pane_cp02

0xf050,	// (0x00084e84) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xf050,	// (0x00084e84) popup_sp_fs_calendar_preview_list_single_pane

0xab8a,	// (0x000809be) main_cam6_pano_pane

0xac03,	// (0x00080a37) main_mup3_pane_ParamLimits

0xab8a,	// (0x000809be) main_phacti_pane

0x9847,	// (0x0007f67b) bg_button_pane_cp11

0x9861,	// (0x0007f695) main_mobtv_info_pane_g2_ParamLimits

0x9861,	// (0x0007f695) main_mobtv_info_pane_g2

0x0001,

0xfc50,	// (0x00085a84) main_mobtv_info_pane_g_ParamLimits

0xfc50,	// (0x00085a84) main_mobtv_info_pane_g

0x9a3e,	// (0x0007f872) sc_clock_pane_t5_ParamLimits

0x9a3e,	// (0x0007f872) sc_clock_pane_t5

0x9aca,	// (0x0007f8fe) main_radioblah_pane_g1_ParamLimits

0xd6fd,	// (0x00083531) main_radioblah_pane_t3_ParamLimits

0xd6fd,	// (0x00083531) main_radioblah_pane_t3

0xd715,	// (0x00083549) main_radioblah_pane_t4_ParamLimits

0xd715,	// (0x00083549) main_radioblah_pane_t4

0x9af2,	// (0x0007f926) main_radioblah_text_pane_ParamLimits

0x9af2,	// (0x0007f926) main_radioblah_text_pane

0x9b04,	// (0x0007f938) main_radioblah_info_pane_g1_ParamLimits

0x9b9d,	// (0x0007f9d1) main_radioblah_info_pane_t4_ParamLimits

0x9b9d,	// (0x0007f9d1) main_radioblah_info_pane_t4

0xac03,	// (0x00080a37) main_sp_fs_calendar_pane

0xa000,	// (0x0007fe34) main_phacti_pane_g1

0xa008,	// (0x0007fe3c) phacti_note_pane_ParamLimits

0xa008,	// (0x0007fe3c) phacti_note_pane

0xdcab,	// (0x00083adf) phacti_term_pane_ParamLimits

0xdcab,	// (0x00083adf) phacti_term_pane

0xdcc0,	// (0x00083af4) phacti_note_pane_t1_ParamLimits

0xdcc0,	// (0x00083af4) phacti_note_pane_t1

0xdcd7,	// (0x00083b0b) phacti_term_pane_g1

0xdcdf,	// (0x00083b13) phacti_term_pane_t1_ParamLimits

0xdcdf,	// (0x00083b13) phacti_term_pane_t1

0xdd09,	// (0x00083b3d) popup_sp_fs_calendar_preview_list_single_pane_g1

0xdd11,	// (0x00083b45) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbf,	// (0x00085bf3) popup_sp_fs_calendar_preview_list_single_pane_g

0xdd19,	// (0x00083b4d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xdd19,	// (0x00083b4d) popup_sp_fs_calendar_preview_list_single_pane_t1

0xdd2f,	// (0x00083b63) aid_popup_sp_fs_bg_corner_pane

0xbbf7,	// (0x00081a2b) popup_sp_fs_calendar_preview_bg_pane_g1

0xab8a,	// (0x000809be) popup_sp_fs_calendar_preview_bg_pane

0xdd37,	// (0x00083b6b) popup_sp_fs_calendar_preview_list_pane

0xac03,	// (0x00080a37) bg_main_sp_fs_cale_pane_ParamLimits

0xac03,	// (0x00080a37) bg_main_sp_fs_cale_pane

0xdd3f,	// (0x00083b73) listscroll_cale_mrui_pane_ParamLimits

0xdd3f,	// (0x00083b73) listscroll_cale_mrui_pane

0xdd53,	// (0x00083b87) listscroll_sp_fs_schedule_track_pane

0xdd5c,	// (0x00083b90) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xdd5c,	// (0x00083b90) main_sp_fs_ctrlbar_pane_cp01

0xdd6d,	// (0x00083ba1) main_sp_fs_ribbon_pane

0xdd75,	// (0x00083ba9) popup_sp_fs_cale_preview_window

0xa063,	// (0x0007fe97) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa063,	// (0x0007fe97) list_single_sp_fs_schedule_track_pane

0xac03,	// (0x00080a37) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xac03,	// (0x00080a37) bg_sp_fs_highlight_list_pane_cp03

0xa076,	// (0x0007feaa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa076,	// (0x0007feaa) list_single_sp_fs_schedule_track_pane_g1

0xa082,	// (0x0007feb6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa082,	// (0x0007feb6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc4,	// (0x00085bf8) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc4,	// (0x00085bf8) list_single_sp_fs_schedule_track_pane_g

0xa08e,	// (0x0007fec2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa08e,	// (0x0007fec2) list_single_sp_fs_schedule_track_pane_t1

0xa0b0,	// (0x0007fee4) sp_fs_schedule_track_pane_ParamLimits

0xa0b0,	// (0x0007fee4) sp_fs_schedule_track_pane

0xdd87,	// (0x00083bbb) sp_fs_schedule_track_pane_g1

0xdd8f,	// (0x00083bc3) sp_fs_schedule_track_pane_g2

0xdd97,	// (0x00083bcb) sp_fs_schedule_track_pane_g3

0xdd9f,	// (0x00083bd3) sp_fs_schedule_track_pane_g4

0xdda7,	// (0x00083bdb) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc9,	// (0x00085bfd) sp_fs_schedule_track_pane_g

0xc634,	// (0x00082468) bg_sp_fs_schedule_viewer_highlight_g1

0x285d,	// (0x00078691) bg_sp_fs_schedule_viewer_highlight_g2

0xc63c,	// (0x00082470) bg_sp_fs_schedule_viewer_highlight_g3

0xc644,	// (0x00082478) bg_sp_fs_schedule_viewer_highlight_g4

0xc887,	// (0x000826bb) bg_sp_fs_schedule_viewer_highlight_g5

0xc654,	// (0x00082488) bg_sp_fs_schedule_viewer_highlight_g6

0xc65c,	// (0x00082490) bg_sp_fs_schedule_viewer_highlight_g7

0xc664,	// (0x00082498) bg_sp_fs_schedule_viewer_highlight_g8

0x283d,	// (0x00078671) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd4,	// (0x00085c08) bg_sp_fs_schedule_viewer_highlight_g

0xab8a,	// (0x000809be) bg_main_sp_fs_ribbon_pane

0xa0c5,	// (0x0007fef9) main_sp_fs_ribbon_pane_g1

0xddaf,	// (0x00083be3) main_sp_fs_ribbon_pane_t1

0xa0ce,	// (0x0007ff02) main_sp_fs_ribbon_pane_t2

0xddbe,	// (0x00083bf2) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde7,	// (0x00085c1b) main_sp_fs_ribbon_pane_t

0xddcd,	// (0x00083c01) main_sp_fs_ribbon_scheduler_pane

0xddd5,	// (0x00083c09) bg_main_sp_fs_ribbon_pane_g1

0xddde,	// (0x00083c12) bg_main_sp_fs_ribbon_pane_g2

0xdde7,	// (0x00083c1b) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdee,	// (0x00085c22) bg_main_sp_fs_ribbon_pane_g

0xddef,	// (0x00083c23) main_sp_fs_ribbon_scheduler_pane_g1

0xddf8,	// (0x00083c2c) main_sp_fs_ribbon_scheduler_pane_g2

0xde01,	// (0x00083c35) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf5,	// (0x00085c29) main_sp_fs_ribbon_scheduler_pane_g

0xde0a,	// (0x00083c3e) list_cale_mrui_pane

0xa0dd,	// (0x0007ff11) sp_fs_scroll_pane_cp07_ParamLimits

0xa0dd,	// (0x0007ff11) sp_fs_scroll_pane_cp07

0xa0f3,	// (0x0007ff27) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa0f3,	// (0x0007ff27) bg_sp_fs_schedule_viewer_highlight

0xde13,	// (0x00083c47) list_single_sp_fs_schedule_track_pane_cp01

0xde1b,	// (0x00083c4f) list_sp_fs_schedule_track_pane

0xde23,	// (0x00083c57) sp_fs_scroll_pane_cp06_ParamLimits

0xde23,	// (0x00083c57) sp_fs_scroll_pane_cp06

0xbbf7,	// (0x00081a2b) bgmain_sp_fs_calendar_pane_g1

0x11c6,	// (0x00076ffa) list_single_cale_mrui_pane_ParamLimits

0x11c6,	// (0x00076ffa) list_single_cale_mrui_pane

0xde35,	// (0x00083c69) list_single_cale_mrui_row_pane_ParamLimits

0xde35,	// (0x00083c69) list_single_cale_mrui_row_pane

0xde42,	// (0x00083c76) list_single_cale_mrui_row_pane_g1_ParamLimits

0xde42,	// (0x00083c76) list_single_cale_mrui_row_pane_g1

0xde87,	// (0x00083cbb) list_single_cale_mrui_row_pane_t1_ParamLimits

0xde87,	// (0x00083cbb) list_single_cale_mrui_row_pane_t1

0x11ea,	// (0x0007701e) list_single_cale_mrui_row_pane_t2_ParamLimits

0x11ea,	// (0x0007701e) list_single_cale_mrui_row_pane_t2

0xde99,	// (0x00083ccd) list_single_cale_mrui_row_pane_t3_ParamLimits

0xde99,	// (0x00083ccd) list_single_cale_mrui_row_pane_t3

0xdec8,	// (0x00083cfc) list_single_cale_mrui_row_pane_t4_ParamLimits

0xdec8,	// (0x00083cfc) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe03,	// (0x00085c37) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe03,	// (0x00085c37) list_single_cale_mrui_row_pane_t

0x1250,	// (0x00077084) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x1250,	// (0x00077084) list_single_cmail_header_editor_pane_bg_cp01

0x1274,	// (0x000770a8) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1274,	// (0x000770a8) list_single_cmail_header_editor_pane_bg_cp02

0xa105,	// (0x0007ff39) main_radioblah_text_pane_t1_ParamLimits

0xa105,	// (0x0007ff39) main_radioblah_text_pane_t1

0xdef7,	// (0x00083d2b) cam6_indi_pane_cp01

0xdeff,	// (0x00083d33) cam6_mode_pane_cp01

0xdf07,	// (0x00083d3b) cam6_pano_pane

0xdf10,	// (0x00083d44) cam6_zoom_pane_cp01

0xdf1a,	// (0x00083d4e) cam6_pano_image_pane

0xdf23,	// (0x00083d57) cam6_pano_pane_g1

0xd459,	// (0x0008328d) cam6_pano_pane_g2

0xdf2c,	// (0x00083d60) cam6_pano_pane_g3

0xdf35,	// (0x00083d69) cam6_pano_pane_g4

0xc187,	// (0x00081fbb) cam6_pano_pane_g5

0xdf3e,	// (0x00083d72) cam6_pano_pane_g6

0xdf46,	// (0x00083d7a) cam6_pano_pane_g7

0xdf4e,	// (0x00083d82) cam6_pano_pane_g8

0xdf57,	// (0x00083d8b) cam6_pano_pane_g9

0x0008,

0xfe0c,	// (0x00085c40) cam6_pano_pane_g

0xab8a,	// (0x000809be) main_browser_tag_pane

0xdc8c,	// (0x00083ac0) grid_navstr_albumart_pane

0xdf62,	// (0x00083d96) cell_navstr_albumart_pane_ParamLimits

0xdf62,	// (0x00083d96) cell_navstr_albumart_pane

0xdf7e,	// (0x00083db2) cell_navstr_albumart_pane_g1

0xb4db,	// (0x0008130f) cell_navstr_albumart_pane_g2

0xb4eb,	// (0x0008131f) cell_navstr_albumart_pane_g3

0xb4e3,	// (0x00081317) cell_navstr_albumart_pane_g4

0x0003,

0xfe1f,	// (0x00085c53) cell_navstr_albumart_pane_g

0xa120,	// (0x0007ff54) bt_list_pane_ParamLimits

0xa120,	// (0x0007ff54) bt_list_pane

0xa136,	// (0x0007ff6a) bt_list_pane_t1

0xa145,	// (0x0007ff79) bt_list_pane_t2

0x0001,

0xfe28,	// (0x00085c5c) bt_list_pane_t

0xab8a,	// (0x000809be) main_cale_prevew_pane

0xa154,	// (0x0007ff88) popup_cale_preview_window_ParamLimits

0xa154,	// (0x0007ff88) popup_cale_preview_window

0xac03,	// (0x00080a37) bg_popup_preview_window_pane_cp05_ParamLimits

0xac03,	// (0x00080a37) bg_popup_preview_window_pane_cp05

0xdf86,	// (0x00083dba) list_cale_preview_pane_ParamLimits

0xdf86,	// (0x00083dba) list_cale_preview_pane

0xa16f,	// (0x0007ffa3) list_double_cale_preview_pane_ParamLimits

0xa16f,	// (0x0007ffa3) list_double_cale_preview_pane

0xa183,	// (0x0007ffb7) list_single_cale_preview_pane_ParamLimits

0xa183,	// (0x0007ffb7) list_single_cale_preview_pane

0xa19b,	// (0x0007ffcf) list_single_cale_preview_pane_g1

0xa1a3,	// (0x0007ffd7) list_single_cale_preview_pane_t1_ParamLimits

0xa1a3,	// (0x0007ffd7) list_single_cale_preview_pane_t1

0xa1b8,	// (0x0007ffec) list_double_cale_preview_pane_g1

0xa1c0,	// (0x0007fff4) list_double_cale_preview_pane_t1_ParamLimits

0xa1c0,	// (0x0007fff4) list_double_cale_preview_pane_t1

0xa1d5,	// (0x00080009) list_double_cale_preview_pane_t2_ParamLimits

0xa1d5,	// (0x00080009) list_double_cale_preview_pane_t2

0x0001,

0xfe2d,	// (0x00085c61) list_double_cale_preview_pane_t_ParamLimits

0xfe2d,	// (0x00085c61) list_double_cale_preview_pane_t

0xab8a,	// (0x000809be) main_ezdial_pane

0xac03,	// (0x00080a37) main_sp_fs_email_pane_ParamLimits

0x9d73,	// (0x0007fba7) cmail_ddmenu_btn01_pane_ParamLimits

0x9d73,	// (0x0007fba7) cmail_ddmenu_btn01_pane

0x9d86,	// (0x0007fbba) cmail_ddmenu_btn02_pane_ParamLimits

0x9d86,	// (0x0007fbba) cmail_ddmenu_btn02_pane

0x9da9,	// (0x0007fbdd) cmail_ddmenu_btn03_pane_ParamLimits

0x9da9,	// (0x0007fbdd) cmail_ddmenu_btn03_pane

0x0dea,	// (0x00076c1e) main_sp_fs_ctrlbar_pane_ParamLimits

0x0e0e,	// (0x00076c42) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x9ee9,	// (0x0007fd1d) list_cmail_body_pane_ParamLimits

0xdbbc,	// (0x000839f0) bg_button_pane_cp12

0xdbc5,	// (0x000839f9) list_single_cmail_header_detail_pane_g3_ParamLimits

0xdbc5,	// (0x000839f9) list_single_cmail_header_detail_pane_g3

0x11a0,	// (0x00076fd4) list_single_cmail_header_detail_pane_t2_ParamLimits

0x11a0,	// (0x00076fd4) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdb0,	// (0x00085be4) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdb0,	// (0x00085be4) list_single_cmail_header_detail_pane_t

0xdcf4,	// (0x00083b28) phacti_term_pane_t2_ParamLimits

0xdcf4,	// (0x00083b28) phacti_term_pane_t2

0x0001,

0xfdba,	// (0x00085bee) phacti_term_pane_t_ParamLimits

0xfdba,	// (0x00085bee) phacti_term_pane_t

0xdf92,	// (0x00083dc6) aid_size_list_single_double

0xa1ed,	// (0x00080021) popup_ezdial_listscroll_window

0xa209,	// (0x0008003d) popup_number_entry_window_cp01

0x3ca6,	// (0x00079ada) bg_popup_call_pane_cp09

0xdf9e,	// (0x00083dd2) ezdial_list_pane

0xdfa6,	// (0x00083dda) scroll_pane_cp23

0xb6c2,	// (0x000814f6) bg_button_pane_cp028_ParamLimits

0xb6c2,	// (0x000814f6) bg_button_pane_cp028

0xa217,	// (0x0008004b) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xa217,	// (0x0008004b) cmail_ddmenu_btn01_pane_g1

0xa223,	// (0x00080057) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xa223,	// (0x00080057) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe32,	// (0x00085c66) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe32,	// (0x00085c66) cmail_ddmenu_btn01_pane_g

0xdfae,	// (0x00083de2) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xdfae,	// (0x00083de2) cmail_ddmenu_btn01_pane_t1

0xb6c2,	// (0x000814f6) bg_button_pane_cp029_ParamLimits

0xb6c2,	// (0x000814f6) bg_button_pane_cp029

0xa22f,	// (0x00080063) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xa22f,	// (0x00080063) cmail_ddmenu_btn02_pane_g1

0xa247,	// (0x0008007b) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xa247,	// (0x0008007b) cmail_ddmenu_btn02_pane_t1

0xac03,	// (0x00080a37) bg_button_pane_cp031_ParamLimits

0xac03,	// (0x00080a37) bg_button_pane_cp031

0xa22f,	// (0x00080063) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xa22f,	// (0x00080063) cmail_ddmenu_btn03_pane_g1

0xa247,	// (0x0008007b) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xa247,	// (0x0008007b) cmail_ddmenu_btn03_pane_t1

0x79cd,	// (0x0007d801) cell_dialer2_keypad_pane_t1_ParamLimits

0x79e7,	// (0x0007d81b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x79e7,	// (0x0007d81b) cell_dialer2_keypad_pane_t1_copy1

0x96c7,	// (0x0007f4fb) ncimui_group_button_pane

0xac03,	// (0x00080a37) main_sp_fs_calendar_pane_ParamLimits

0x9f01,	// (0x0007fd35) list_single_cmail_header_caption_pane_ParamLimits

0xebcc,	// (0x00084a00) aid_recal_txt_sm_pane

0xab8a,	// (0x000809be) mian_recal_day_pane

0xdd75,	// (0x00083ba9) popup_sp_fs_cale_preview_window_ParamLimits

0xab8a,	// (0x000809be) list_recal_day_pane

0xdfdc,	// (0x00083e10) list_single_recal_day_pane_ParamLimits

0xdfdc,	// (0x00083e10) list_single_recal_day_pane

0xdfee,	// (0x00083e22) list_single_recal_day_pane_g1_ParamLimits

0xdfee,	// (0x00083e22) list_single_recal_day_pane_g1

0xdffa,	// (0x00083e2e) list_single_recal_day_pane_g2_ParamLimits

0xdffa,	// (0x00083e2e) list_single_recal_day_pane_g2

0xe00a,	// (0x00083e3e) list_single_recal_day_pane_g3_ParamLimits

0xe00a,	// (0x00083e3e) list_single_recal_day_pane_g3

0xa26b,	// (0x0008009f) list_single_recal_day_pane_g4_ParamLimits

0xa26b,	// (0x0008009f) list_single_recal_day_pane_g4

0xe016,	// (0x00083e4a) list_single_recal_day_pane_g5_ParamLimits

0xe016,	// (0x00083e4a) list_single_recal_day_pane_g5

0xe026,	// (0x00083e5a) list_single_recal_day_pane_g6_ParamLimits

0xe026,	// (0x00083e5a) list_single_recal_day_pane_g6

0x0004,

0xfe41,	// (0x00085c75) list_single_recal_day_pane_g_ParamLimits

0xfe41,	// (0x00085c75) list_single_recal_day_pane_g

0xe03d,	// (0x00083e71) list_single_recal_day_pane_t1

0xe04f,	// (0x00083e83) list_single_recal_day_pane_t2

0x0001,

0xfe4c,	// (0x00085c80) list_single_recal_day_pane_t

0xa28b,	// (0x000800bf) ncimui_query_button_pane_ParamLimits

0xa28b,	// (0x000800bf) ncimui_query_button_pane

0xa29b,	// (0x000800cf) ncimui_query_button_pane_t1_ParamLimits

0xa29b,	// (0x000800cf) ncimui_query_button_pane_t1

0xe064,	// (0x00083e98) ncimui_query_button_pane_t2_ParamLimits

0xe064,	// (0x00083e98) ncimui_query_button_pane_t2

0x0001,

0xfe51,	// (0x00085c85) ncimui_query_button_pane_t_ParamLimits

0xfe51,	// (0x00085c85) ncimui_query_button_pane_t

0xa2ae,	// (0x000800e2) query_button_pane_ParamLimits

0xa2ae,	// (0x000800e2) query_button_pane

0xab8a,	// (0x000809be) bg_button_pane_cp0028

0xe077,	// (0x00083eab) query_button_pane_t1

0x5a35,	// (0x0007b869) main_tport_pane_ParamLimits

0x9dcf,	// (0x0007fc03) bg_popup_window_pane_cp01_ParamLimits

0x9dcf,	// (0x0007fc03) bg_popup_window_pane_cp01

0x9de5,	// (0x0007fc19) heading_pane_cp08_ParamLimits

0x9de5,	// (0x0007fc19) heading_pane_cp08

0x9df6,	// (0x0007fc2a) heading_pane_cp07_ParamLimits

0x9df6,	// (0x0007fc2a) heading_pane_cp07

0xdb87,	// (0x000839bb) cell_tport_appsw_pane_g2

0x0002,

0xfd9d,	// (0x00085bd1) cell_tport_appsw_pane_g

0xb12e,	// (0x00080f62) input_candi_list_open_g1

0x32f6,	// (0x0007912a) list_cale_time_pane_g6_ParamLimits

0x32f6,	// (0x0007912a) list_cale_time_pane_g6

0x681d,	// (0x0007c651) aid_size_touch_calib_1_ParamLimits

0x681d,	// (0x0007c651) aid_size_touch_calib_1

0x6829,	// (0x0007c65d) aid_size_touch_calib_2_ParamLimits

0x6829,	// (0x0007c65d) aid_size_touch_calib_2

0x683f,	// (0x0007c673) aid_size_touch_calib_3_ParamLimits

0x683f,	// (0x0007c673) aid_size_touch_calib_3

0x685d,	// (0x0007c691) aid_size_touch_calib_4_ParamLimits

0x685d,	// (0x0007c691) aid_size_touch_calib_4

0x6873,	// (0x0007c6a7) main_touch_calib_button_group_pane_ParamLimits

0x6873,	// (0x0007c6a7) main_touch_calib_button_group_pane

0x688b,	// (0x0007c6bf) main_touch_calib_pane_g1_ParamLimits

0x6897,	// (0x0007c6cb) main_touch_calib_pane_g2_ParamLimits

0x68a3,	// (0x0007c6d7) main_touch_calib_pane_g3_ParamLimits

0x68af,	// (0x0007c6e3) main_touch_calib_pane_g4_ParamLimits

0xf770,	// (0x000855a4) main_touch_calib_pane_g_ParamLimits

0x68bb,	// (0x0007c6ef) main_touch_calib_pane_t1_ParamLimits

0x68d5,	// (0x0007c709) main_touch_calib_pane_t2_ParamLimits

0x68ef,	// (0x0007c723) main_touch_calib_pane_t3_ParamLimits

0x6903,	// (0x0007c737) main_touch_calib_pane_t4_ParamLimits

0x6917,	// (0x0007c74b) main_touch_calib_pane_t5_ParamLimits

0xf779,	// (0x000855ad) main_touch_calib_pane_t_ParamLimits

0xbf51,	// (0x00081d85) list_single_fp_cale_pane_g3_ParamLimits

0xbf51,	// (0x00081d85) list_single_fp_cale_pane_g3

0xac03,	// (0x00080a37) bg_button_pane_cp012_ParamLimits

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp03_ParamLimits

0x8a0a,	// (0x0007e83e) cell_vitu2_function_top_pane_g1_ParamLimits

0xac03,	// (0x00080a37) bg_vkb2_func_pane_cp04_ParamLimits

0x9667,	// (0x0007f49b) main_ncimui_button_group_pane_ParamLimits

0x9667,	// (0x0007f49b) main_ncimui_button_group_pane

0x96b5,	// (0x0007f4e9) main_ncimui_pane_t3_ParamLimits

0x96b5,	// (0x0007f4e9) main_ncimui_pane_t3

0xdca2,	// (0x00083ad6) phacti_button_group_pane

0xdf92,	// (0x00083dc6) aid_size_list_single_double_ParamLimits

0xa1ed,	// (0x00080021) popup_ezdial_listscroll_window_ParamLimits

0xa209,	// (0x0008003d) popup_number_entry_window_cp01_ParamLimits

0xa2c1,	// (0x000800f5) phacti_button_pane_ParamLimits

0xa2c1,	// (0x000800f5) phacti_button_pane

0xab8a,	// (0x000809be) bg_button_pane_cp14

0xe085,	// (0x00083eb9) phacti_button_pane_t1

0xa2d2,	// (0x00080106) main_touch_calib_button_pane_ParamLimits

0xa2d2,	// (0x00080106) main_touch_calib_button_pane

0xef3a,	// (0x00084d6e) bg_button_pane_cp18_ParamLimits

0xef3a,	// (0x00084d6e) bg_button_pane_cp18

0xe093,	// (0x00083ec7) main_touch_calib_button_pane_t1_ParamLimits

0xe093,	// (0x00083ec7) main_touch_calib_button_pane_t1

0xe0a9,	// (0x00083edd) main_touch_calib_button_pane_t2_ParamLimits

0xe0a9,	// (0x00083edd) main_touch_calib_button_pane_t2

0x0001,

0xfe56,	// (0x00085c8a) main_touch_calib_button_pane_t_ParamLimits

0xfe56,	// (0x00085c8a) main_touch_calib_button_pane_t

0xab8a,	// (0x000809be) cell_ncimui_button_pane

0xab8a,	// (0x000809be) bg_button_pane_cp032

0xe0c7,	// (0x00083efb) cell_ncimui_button_pane_t1

0xea50,	// (0x00084884) image3_infobar_pane_ParamLimits

0xea50,	// (0x00084884) image3_infobar_pane

0x9a6a,	// (0x0007f89e) fs_bigclock_status_pane_ParamLimits

0x9a6a,	// (0x0007f89e) fs_bigclock_status_pane

0x9a77,	// (0x0007f8ab) main_fs_bigclock_clock_pane_ParamLimits

0x9a77,	// (0x0007f8ab) main_fs_bigclock_clock_pane

0x9a8b,	// (0x0007f8bf) main_fs_bigclock_indi_pane_ParamLimits

0x9a8b,	// (0x0007f8bf) main_fs_bigclock_indi_pane

0x9aa6,	// (0x0007f8da) main_fs_bigclock_swipe_pane_ParamLimits

0x9aa6,	// (0x0007f8da) main_fs_bigclock_swipe_pane

0xab8a,	// (0x000809be) main_fs_clock_dumped_data

0xd566,	// (0x0008339a) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xd566,	// (0x0008339a) list_single_fs_bigclock_indicator_pane_g1

0xd590,	// (0x000833c4) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xd590,	// (0x000833c4) list_single_fs_bigclock_indicator_pane_g2

0xd5aa,	// (0x000833de) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xd5aa,	// (0x000833de) list_single_fs_bigclock_indicator_pane_g3

0xd5c4,	// (0x000833f8) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xd5c4,	// (0x000833f8) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc84,	// (0x00085ab8) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc84,	// (0x00085ab8) list_single_fs_bigclock_indicator_pane_g

0xd5ef,	// (0x00083423) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xd5ef,	// (0x00083423) list_single_fs_bigclock_indicator_pane_t1

0xd617,	// (0x0008344b) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xd617,	// (0x0008344b) list_single_fs_bigclock_indicator_pane_t2

0xd63f,	// (0x00083473) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xd63f,	// (0x00083473) list_single_fs_bigclock_indicator_pane_t3

0xd667,	// (0x0008349b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xd667,	// (0x0008349b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8f,	// (0x00085ac3) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8f,	// (0x00085ac3) list_single_fs_bigclock_indicator_pane_t

0xe0d5,	// (0x00083f09) image3_infobar_fav_pane_ParamLimits

0xe0d5,	// (0x00083f09) image3_infobar_fav_pane

0xe0e5,	// (0x00083f19) image3_infobar_loc_pane_ParamLimits

0xe0e5,	// (0x00083f19) image3_infobar_loc_pane

0xe0fb,	// (0x00083f2f) image3_infobar_time_pane_ParamLimits

0xe0fb,	// (0x00083f2f) image3_infobar_time_pane

0xbbf7,	// (0x00081a2b) image3_infobar_time_pane_g1

0xe10b,	// (0x00083f3f) image3_infobar_time_pane_t1

0xbbf7,	// (0x00081a2b) image3_infobar_loc_pane_g1

0xe119,	// (0x00083f4d) image3_infobar_loc_pane_g2

0x0001,

0xfe5b,	// (0x00085c8f) image3_infobar_loc_pane_g

0xe121,	// (0x00083f55) image3_infobar_loc_pane_t1

0xbbf7,	// (0x00081a2b) image3_infobar_fav_pane_g1

0xe12f,	// (0x00083f63) image3_infobar_fav_pane_g2

0x0001,

0xfe60,	// (0x00085c94) image3_infobar_fav_pane_g

0xe137,	// (0x00083f6b) fs_bigclock_status_battery_pane

0xe140,	// (0x00083f74) fs_bigclock_status_signal_pane

0xe149,	// (0x00083f7d) fs_bigclock_status_title_pane

0xe152,	// (0x00083f86) fs_bigclock_status_signal_pane_g1

0xe15b,	// (0x00083f8f) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe65,	// (0x00085c99) fs_bigclock_status_signal_pane_g

0xe163,	// (0x00083f97) fs_bigclock_status_battery_pane_g1

0xe16c,	// (0x00083fa0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe6a,	// (0x00085c9e) fs_bigclock_status_battery_pane_g

0xe174,	// (0x00083fa8) fs_bigclock_status_title_pane_t1

0xbbf7,	// (0x00081a2b) main_fs_bigclock_clock_pane_g1

0xe182,	// (0x00083fb6) main_fs_bigclock_clock_pane_g2

0xe182,	// (0x00083fb6) main_fs_bigclock_clock_pane_g3

0xe182,	// (0x00083fb6) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6f,	// (0x00085ca3) main_fs_bigclock_clock_pane_g

0xe18a,	// (0x00083fbe) main_fs_bigclock_clock_pane_t1

0xe198,	// (0x00083fcc) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe78,	// (0x00085cac) main_fs_bigclock_clock_pane_t

0xa2e7,	// (0x0008011b) list_single_fs_bigclock_indicator_pane_ParamLimits

0xa2e7,	// (0x0008011b) list_single_fs_bigclock_indicator_pane

0xa2f8,	// (0x0008012c) list_single_fs_bigclock_pane_ParamLimits

0xa2f8,	// (0x0008012c) list_single_fs_bigclock_pane

0xe1b0,	// (0x00083fe4) main_fs_bigclock_indicator_pane_t1

0xe1bf,	// (0x00083ff3) list_single_fs_bigclock_pane_g1

0xe1c7,	// (0x00083ffb) list_single_fs_bigclock_pane_t1

0xbbf7,	// (0x00081a2b) main_fs_bigclock_swipe_pane_g1

0xe20a,	// (0x0008403e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe89,	// (0x00085cbd) main_fs_bigclock_swipe_pane_g

0xe212,	// (0x00084046) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe212,	// (0x00084046) main_fs_bigclock_swipe_pane_t1

0x35e3,	// (0x00079417) call_type_pane_ParamLimits

0xab8a,	// (0x000809be) main_btmg_pane

0xde6e,	// (0x00083ca2) list_single_cale_mrui_row_pane_g2_ParamLimits

0xde6e,	// (0x00083ca2) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdfc,	// (0x00085c30) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdfc,	// (0x00085c30) list_single_cale_mrui_row_pane_g

0xdfcc,	// (0x00083e00) list_recal_vselct_arw_lo_pane

0xdfd4,	// (0x00083e08) list_recal_vselct_arw_up_pane

0xeb9b,	// (0x000849cf) list_recal_vselct_pane

0xe22f,	// (0x00084063) btmg_button_pane

0xa35b,	// (0x0008018f) main_btmg_pane_g1

0xab8a,	// (0x000809be) bg_button_pane_cp044

0xe239,	// (0x0008406d) btmg_button_pane_t1

0xb6ba,	// (0x000814ee) aid_listscroll_gen

0xac03,	// (0x00080a37) main_cntbar_detail_pane

0xdb9d,	// (0x000839d1) list_cmail_folder_pane

0xdbad,	// (0x000839e1) sp_fs_scroll_pane_cp03_ParamLimits

0x1292,	// (0x000770c6) list_single_fs_dyc_pane_cp01_ParamLimits

0x1292,	// (0x000770c6) list_single_fs_dyc_pane_cp01

0xe247,	// (0x0008407b) aid_size_cmail_indent

0xe250,	// (0x00084084) list_single_dyc_row_pane_cp01

0xa395,	// (0x000801c9) cntbar_detail_list_pane_ParamLimits

0xa395,	// (0x000801c9) cntbar_detail_list_pane

0xa3e7,	// (0x0008021b) main_cntbar_detail_cont_pane_ParamLimits

0xa3e7,	// (0x0008021b) main_cntbar_detail_cont_pane

0x34c9,	// (0x000792fd) scroll_pane_cp032_ParamLimits

0x34c9,	// (0x000792fd) scroll_pane_cp032

0xa3fb,	// (0x0008022f) cntbar_detail_list_event_pane_ParamLimits

0xa3fb,	// (0x0008022f) cntbar_detail_list_event_pane

0xa3a7,	// (0x000801db) cntbar_detail_list_shct_pane

0x28b5,	// (0x000786e9) aid_list_gen

0xe259,	// (0x0008408d) aid_scroll

0xe262,	// (0x00084096) aid_size_touch_scroll_bar

0xa40b,	// (0x0008023f) aid_list_double

0xe26b,	// (0x0008409f) aid_list_single

0xa414,	// (0x00080248) aid_list_single_lg

0xe274,	// (0x000840a8) aid_list_z_g_a_sm

0xebd5,	// (0x00084a09) aid_list_z_g_d

0xe27c,	// (0x000840b0) aid_txt_z_prm

0x12ac,	// (0x000770e0) aid_txt_z_prm_cp01

0x12ba,	// (0x000770ee) aid_txt_z_sec

0xa41d,	// (0x00080251) main_cntbar_detail_cont_pane_g1_ParamLimits

0xa41d,	// (0x00080251) main_cntbar_detail_cont_pane_g1

0xa431,	// (0x00080265) main_cntbar_detail_cont_pane_g2_ParamLimits

0xa431,	// (0x00080265) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8e,	// (0x00085cc2) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8e,	// (0x00085cc2) main_cntbar_detail_cont_pane_g

0xe28a,	// (0x000840be) main_cntbar_detail_cont_pane_t1

0xe298,	// (0x000840cc) main_cntbar_detail_cont_pane_t2

0xe2a6,	// (0x000840da) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe93,	// (0x00085cc7) main_cntbar_detail_cont_pane_t

0xa441,	// (0x00080275) cell_cntbar_detail_list_shct_pane_ParamLimits

0xa441,	// (0x00080275) cell_cntbar_detail_list_shct_pane

0xe2b4,	// (0x000840e8) cntbar_detail_list_shct_pane_g1

0xe2bd,	// (0x000840f1) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe9a,	// (0x00085cce) cntbar_detail_list_shct_pane_g

0xa453,	// (0x00080287) cntbar_detail_list_event_pane_g1_ParamLimits

0xa453,	// (0x00080287) cntbar_detail_list_event_pane_g1

0xa45f,	// (0x00080293) cntbar_detail_list_event_pane_g2_ParamLimits

0xa45f,	// (0x00080293) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9f,	// (0x00085cd3) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9f,	// (0x00085cd3) cntbar_detail_list_event_pane_g

0xa4cd,	// (0x00080301) cntbar_detail_list_event_pane_t1_ParamLimits

0xa4cd,	// (0x00080301) cntbar_detail_list_event_pane_t1

0xa4e2,	// (0x00080316) cntbar_detail_list_event_pane_t2_ParamLimits

0xa4e2,	// (0x00080316) cntbar_detail_list_event_pane_t2

0x0002,

0xfeac,	// (0x00085ce0) cntbar_detail_list_event_pane_t_ParamLimits

0xfeac,	// (0x00085ce0) cntbar_detail_list_event_pane_t

0xbbf7,	// (0x00081a2b) cell_cntbar_detail_list_shct_pane_g1

0x3c24,	// (0x00079a58) navi_pane_mv_g3

0xac03,	// (0x00080a37) main_cntbar_detail_pane_ParamLimits

0xab8a,	// (0x000809be) main_notif_wgt_pane

0xe868,	// (0x0008469c) aid_tch_main_mp4_pane_g4

0xea46,	// (0x0008487a) popup_slider_window_cp02

0xdfc3,	// (0x00083df7) list_recal_day_event_pane

0xa365,	// (0x00080199) cntbar_detail_btn_pane_ParamLimits

0xa365,	// (0x00080199) cntbar_detail_btn_pane

0xa37d,	// (0x000801b1) cntbar_detail_btn_pane_cp01_ParamLimits

0xa37d,	// (0x000801b1) cntbar_detail_btn_pane_cp01

0xa3a7,	// (0x000801db) cntbar_detail_list_shct_pane_ParamLimits

0xa3b7,	// (0x000801eb) cntbar_detail_pane_g1_ParamLimits

0xa3b7,	// (0x000801eb) cntbar_detail_pane_g1

0xa3cb,	// (0x000801ff) cntbar_detail_pane_t1_ParamLimits

0xa3cb,	// (0x000801ff) cntbar_detail_pane_t1

0xa46b,	// (0x0008029f) cntbar_detail_list_event_pane_g3_ParamLimits

0xa46b,	// (0x0008029f) cntbar_detail_list_event_pane_g3

0xa483,	// (0x000802b7) cntbar_detail_list_event_pane_g4_ParamLimits

0xa483,	// (0x000802b7) cntbar_detail_list_event_pane_g4

0xa49b,	// (0x000802cf) cntbar_detail_list_event_pane_g5_ParamLimits

0xa49b,	// (0x000802cf) cntbar_detail_list_event_pane_g5

0xa4b3,	// (0x000802e7) cntbar_detail_list_event_pane_g6_ParamLimits

0xa4b3,	// (0x000802e7) cntbar_detail_list_event_pane_g6

0xa4f7,	// (0x0008032b) cntbar_detail_list_event_pane_t3_ParamLimits

0xa4f7,	// (0x0008032b) cntbar_detail_list_event_pane_t3

0xa509,	// (0x0008033d) popup_notif_wgt_window_ParamLimits

0xa509,	// (0x0008033d) popup_notif_wgt_window

0xa522,	// (0x00080356) popup_submenu_window_cp01_ParamLimits

0xa522,	// (0x00080356) popup_submenu_window_cp01

0x3ca6,	// (0x00079ada) bg_popup_window_pane_cp10

0xe2c6,	// (0x000840fa) listscroll_notif_wgt_pane

0xe2d0,	// (0x00084104) list_notif_wgt_window

0xe2d9,	// (0x0008410d) scroll_pane_cp033

0xe2e2,	// (0x00084116) list_notif_wgt_row_pane_ParamLimits

0xe2e2,	// (0x00084116) list_notif_wgt_row_pane

0xe2f6,	// (0x0008412a) aid_size_list_notif_wgt_del

0xe2ff,	// (0x00084133) list_notif_wgt_row_pane_g1

0xe307,	// (0x0008413b) list_notif_wgt_row_pane_g2

0xe30f,	// (0x00084143) list_notif_wgt_row_pane_g3

0x0002,

0xfeb3,	// (0x00085ce7) list_notif_wgt_row_pane_g

0xe318,	// (0x0008414c) list_notif_wgt_row_pane_t1

0xe326,	// (0x0008415a) list_notif_wgt_row_pane_t2

0xe334,	// (0x00084168) list_notif_wgt_row_pane_t3

0x0002,

0xfeba,	// (0x00085cee) list_notif_wgt_row_pane_t

0xc8a7,	// (0x000826db) list_recal_day_event_pane_g1

0xe342,	// (0x00084176) list_recal_day_event_pane_t1

0xab8a,	// (0x000809be) bg_button_pane_cp045

0xe351,	// (0x00084185) cntbar_detail_btn_pane_t1

0xb6c2,	// (0x000814f6) main_callh_pane_ParamLimits

0xb6c2,	// (0x000814f6) main_callh_pane

0xab8a,	// (0x000809be) main_coverflow0_pane

0xab8a,	// (0x000809be) main_wgtman_pane

0x9ab4,	// (0x0007f8e8) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9ab4,	// (0x0007f8e8) main_fs_bigclock_unlock_btn_pane

0xdb7f,	// (0x000839b3) bg_button_pane_cp16

0x9e93,	// (0x0007fcc7) cell_tport_appsw_pane_g3

0xa536,	// (0x0008036a) cf0_flow_pane_ParamLimits

0xa536,	// (0x0008036a) cf0_flow_pane

0xe35f,	// (0x00084193) listscroll_cf0_pane

0xe368,	// (0x0008419c) main_cf0_pane_g1

0xa54b,	// (0x0008037f) main_cf0_pane_t1_ParamLimits

0xa54b,	// (0x0008037f) main_cf0_pane_t1

0xa562,	// (0x00080396) main_cf0_pane_t2_ParamLimits

0xa562,	// (0x00080396) main_cf0_pane_t2

0x0001,

0xfec1,	// (0x00085cf5) main_cf0_pane_t_ParamLimits

0xfec1,	// (0x00085cf5) main_cf0_pane_t

0xe372,	// (0x000841a6) scroll_pane_cp11

0xa579,	// (0x000803ad) cf0_flow_pane_g1

0xa585,	// (0x000803b9) cf0_flow_pane_g2

0x0001,

0xfec6,	// (0x00085cfa) cf0_flow_pane_g

0xa591,	// (0x000803c5) cf0_flow_pane_t1

0xab8a,	// (0x000809be) main_call6_pane

0xab8a,	// (0x000809be) main_calllock_pane

0xa5a3,	// (0x000803d7) call6_btn_grp_pane_ParamLimits

0xa5a3,	// (0x000803d7) call6_btn_grp_pane

0xa5bd,	// (0x000803f1) call6_pane_g1_ParamLimits

0xa5bd,	// (0x000803f1) call6_pane_g1

0xa5d3,	// (0x00080407) popup_call6_1st_window_ParamLimits

0xa5d3,	// (0x00080407) popup_call6_1st_window

0xa5e4,	// (0x00080418) popup_call6_2nd_window_ParamLimits

0xa5e4,	// (0x00080418) popup_call6_2nd_window

0xa5f5,	// (0x00080429) cell_call6_btn_pane_ParamLimits

0xa5f5,	// (0x00080429) cell_call6_btn_pane

0x3ca6,	// (0x00079ada) bg_popup_call2_in_pane_cp03

0xe37d,	// (0x000841b1) popup_call6_1st_window_g1

0xe385,	// (0x000841b9) popup_call6_1st_window_g2

0xe38d,	// (0x000841c1) popup_call6_1st_window_g3

0x0002,

0xfecb,	// (0x00085cff) popup_call6_1st_window_g

0xe395,	// (0x000841c9) popup_call6_1st_window_t1

0xe3a4,	// (0x000841d8) popup_call6_1st_window_t2

0xe3b4,	// (0x000841e8) popup_call6_1st_window_t3

0x0002,

0xfed2,	// (0x00085d06) popup_call6_1st_window_t

0x3ca6,	// (0x00079ada) bg_popup_call2_in_pane_cp04

0xe37d,	// (0x000841b1) popup_call6_2nd_window_g1

0xe385,	// (0x000841b9) popup_call6_2nd_window_g2

0xe38d,	// (0x000841c1) popup_call6_2nd_window_g3

0x0002,

0xfecb,	// (0x00085cff) popup_call6_2nd_window_g

0xe395,	// (0x000841c9) popup_call6_2nd_window_t1

0xab8a,	// (0x000809be) bg_button_pane_cp15

0xe3c4,	// (0x000841f8) cell_call6_btn_pane_g1

0xe3cd,	// (0x00084201) cell_call6_btn_pane_t1

0xa609,	// (0x0008043d) listscroll_wgtman_pane_ParamLimits

0xa609,	// (0x0008043d) listscroll_wgtman_pane

0xa62c,	// (0x00080460) wgtman_btn_pane_ParamLimits

0xa62c,	// (0x00080460) wgtman_btn_pane

0x383f,	// (0x00079673) aid_scroll_copy1

0xe3dc,	// (0x00084210) list_wgtman_pane

0xa66f,	// (0x000804a3) wgtman_btn_pane_g1_ParamLimits

0xa66f,	// (0x000804a3) wgtman_btn_pane_g1

0xa69b,	// (0x000804cf) wgtman_btn_pane_t1_ParamLimits

0xa69b,	// (0x000804cf) wgtman_btn_pane_t1

0xe3e6,	// (0x0008421a) wgtman_btn_pane_t2_ParamLimits

0xe3e6,	// (0x0008421a) wgtman_btn_pane_t2

0x0001,

0xfed9,	// (0x00085d0d) wgtman_btn_pane_t_ParamLimits

0xfed9,	// (0x00085d0d) wgtman_btn_pane_t

0xa6d8,	// (0x0008050c) listrow_wgtman_pane_ParamLimits

0xa6d8,	// (0x0008050c) listrow_wgtman_pane

0xa6ec,	// (0x00080520) listrow_wgtman_pane_g1

0xa6f5,	// (0x00080529) listrow_wgtman_pane_g2

0x0001,

0xfede,	// (0x00085d12) listrow_wgtman_pane_g

0x12c8,	// (0x000770fc) listrow_wgtman_pane_t1

0x12d6,	// (0x0007710a) listrow_wgtman_pane_t2

0x0001,

0xfee3,	// (0x00085d17) listrow_wgtman_pane_t

0x12e4,	// (0x00077118) wait_bar_pane_cp09

0xe3fd,	// (0x00084231) main_calllock_btn_pane

0xe407,	// (0x0008423b) main_calllock_pane_g1

0xab8a,	// (0x000809be) bg_button_pane_cp17

0xe413,	// (0x00084247) main_calllock_btn_pane_g1

0xe41c,	// (0x00084250) main_calllock_btn_pane_t1

0xab8a,	// (0x000809be) main_dialer3_pane

0xab8a,	// (0x000809be) main_fmrd2_pane

0xbbf7,	// (0x00081a2b) main_fs_bigclock_unlock_btn_pane_g1

0xe433,	// (0x00084267) main_fs_bigclock_unlock_btn_pane_t1

0xa6ff,	// (0x00080533) area_fmrd2_info_pane_ParamLimits

0xa6ff,	// (0x00080533) area_fmrd2_info_pane

0xa710,	// (0x00080544) area_fmrd2_visual_pane_ParamLimits

0xa710,	// (0x00080544) area_fmrd2_visual_pane

0xa71e,	// (0x00080552) fmrd2_indi_pane_ParamLimits

0xa71e,	// (0x00080552) fmrd2_indi_pane

0xa72b,	// (0x0008055f) area_fmrd2_visual_pane_g1

0xa733,	// (0x00080567) area_fmrd2_visual_pane_t1

0xa743,	// (0x00080577) area_fmrd2_visual_pane_t2

0xa753,	// (0x00080587) area_fmrd2_visual_pane_t3

0x0002,

0xfeed,	// (0x00085d21) area_fmrd2_visual_pane_t

0xa763,	// (0x00080597) area_fmrd2_info_pane_g1

0xa76b,	// (0x0008059f) area_fmrd2_info_pane_t1

0xa77b,	// (0x000805af) area_fmrd2_info_pane_t2

0xa78b,	// (0x000805bf) area_fmrd2_info_pane_t3

0xa79b,	// (0x000805cf) area_fmrd2_info_pane_t4

0x0003,

0xfef4,	// (0x00085d28) area_fmrd2_info_pane_t

0xa7ab,	// (0x000805df) fmrd2_indi_pane_t1

0xa7bb,	// (0x000805ef) fmrd2_indi_pane_t2

0xa7cb,	// (0x000805ff) fmrd2_indi_pane_t3

0x0002,

0xfefd,	// (0x00085d31) fmrd2_indi_pane_t

0xd5d3,	// (0x00083407) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xd5d3,	// (0x00083407) list_single_fs_bigclock_indicator_pane_g5

0xd67c,	// (0x000834b0) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xd67c,	// (0x000834b0) list_single_fs_bigclock_indicator_pane_t5

0xa01c,	// (0x0007fe50) aid_cell_bcale_month_pane_ParamLimits

0xa01c,	// (0x0007fe50) aid_cell_bcale_month_pane

0xa02e,	// (0x0007fe62) bcale_month_pane_ParamLimits

0xa02e,	// (0x0007fe62) bcale_month_pane

0xa048,	// (0x0007fe7c) bcale_preview_pane_ParamLimits

0xa048,	// (0x0007fe7c) bcale_preview_pane

0xe1c7,	// (0x00083ffb) list_single_fs_bigclock_pane_t1_ParamLimits

0xe1e6,	// (0x0008401a) list_single_fs_bigclock_pane_t2_ParamLimits

0xe1e6,	// (0x0008401a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe84,	// (0x00085cb8) list_single_fs_bigclock_pane_t_ParamLimits

0xfe84,	// (0x00085cb8) list_single_fs_bigclock_pane_t

0xe42b,	// (0x0008425f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfee8,	// (0x00085d1c) main_fs_bigclock_unlock_btn_pane_g

0xa7db,	// (0x0008060f) aid_dia3_key_size_ParamLimits

0xa7db,	// (0x0008060f) aid_dia3_key_size

0xa7ea,	// (0x0008061e) aid_dia3_listrow_size_ParamLimits

0xa7ea,	// (0x0008061e) aid_dia3_listrow_size

0xa7f8,	// (0x0008062c) dia3_keypad_fun_pane_ParamLimits

0xa7f8,	// (0x0008062c) dia3_keypad_fun_pane

0xa814,	// (0x00080648) dia3_keypad_num_pane_ParamLimits

0xa814,	// (0x00080648) dia3_keypad_num_pane

0xa82d,	// (0x00080661) dia3_listscroll_pane_ParamLimits

0xa82d,	// (0x00080661) dia3_listscroll_pane

0xa842,	// (0x00080676) dia3_numentry_pane_ParamLimits

0xa842,	// (0x00080676) dia3_numentry_pane

0xe441,	// (0x00084275) dia3_list_pane

0xe44c,	// (0x00084280) scroll_pane_cp12

0xab8a,	// (0x000809be) bg_dia3_numentry_pane

0xe457,	// (0x0008428b) dia3_numentry_pane_t1

0xa855,	// (0x00080689) cell_dia3_key_num_pane

0xa85d,	// (0x00080691) cell_dia3_key0_fun_pane_ParamLimits

0xa85d,	// (0x00080691) cell_dia3_key0_fun_pane

0xa871,	// (0x000806a5) cell_dia3_key1_fun_pane_ParamLimits

0xa871,	// (0x000806a5) cell_dia3_key1_fun_pane

0xa889,	// (0x000806bd) dia3_listrow_pane

0xd2d1,	// (0x00083105) bg_dia3_numentry_pane_g1

0xab8a,	// (0x000809be) bg_button_pane_cp21

0xe466,	// (0x0008429a) cell_dia3_key_num_pane_t1

0xe474,	// (0x000842a8) cell_dia3_key_num_pane_t2

0xe483,	// (0x000842b7) cell_dia3_key_num_pane_t3

0xe492,	// (0x000842c6) cell_dia3_key_num_pane_t4

0x0003,

0xff04,	// (0x00085d38) cell_dia3_key_num_pane_t

0xab8a,	// (0x000809be) bg_button_pane_cp19

0xa89b,	// (0x000806cf) cell_dia3_key0_fun_pane_g1

0xab8a,	// (0x000809be) bg_button_pane_cp20

0xa8a3,	// (0x000806d7) cell_dia3_key1_fun_pane_g1

0xa8ab,	// (0x000806df) area_left_week_number_pane

0xa8b4,	// (0x000806e8) area_top_day_name_pane

0xa8bd,	// (0x000806f1) frame_month_view_pane

0xa8c9,	// (0x000806fd) grid_month_view_pane

0xa8d3,	// (0x00080707) cell_top_day_name_pane_ParamLimits

0xa8d3,	// (0x00080707) cell_top_day_name_pane

0xa8ed,	// (0x00080721) cell_area_left_week_number_pane_ParamLimits

0xa8ed,	// (0x00080721) cell_area_left_week_number_pane

0xa903,	// (0x00080737) cell_month_view_pane_ParamLimits

0xa903,	// (0x00080737) cell_month_view_pane

0xe4a1,	// (0x000842d5) frm_month_g1

0xa922,	// (0x00080756) frm_month_g2

0xa92c,	// (0x00080760) frm_month_g3

0xa936,	// (0x0008076a) frm_month_g4

0xa940,	// (0x00080774) frm_month_g5

0xa94a,	// (0x0008077e) frm_month_g6

0xa956,	// (0x0008078a) frm_month_g7

0xe4aa,	// (0x000842de) frm_month_g8

0xa962,	// (0x00080796) frm_month_g9

0xa96b,	// (0x0008079f) frm_month_g10

0xa974,	// (0x000807a8) frm_month_g11

0xa97d,	// (0x000807b1) frm_month_g12

0xa986,	// (0x000807ba) frm_month_g13

0xa98f,	// (0x000807c3) frm_month_g14

0xa998,	// (0x000807cc) frm_month_g15

0xa9a3,	// (0x000807d7) frm_month_g16

0x000f,

0xff0d,	// (0x00085d41) frm_month_g

0xa9ae,	// (0x000807e2) cell_top_day_name_pane_t1

0xa9bd,	// (0x000807f1) cell_area_left_week_number_pane_g1

0xa9ae,	// (0x000807e2) cell_area_left_week_number_pane_t1

0xbbf7,	// (0x00081a2b) cell_month_view_pane_g1

0xa9c5,	// (0x000807f9) cell_month_view_pane_t1

0xab8a,	// (0x000809be) main_fps_pane

0xd8ba,	// (0x000836ee) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd8ba,	// (0x000836ee) cmail_ddmenu_btn02_pane_cp1

0xd8d6,	// (0x0008370a) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd8d6,	// (0x0008370a) cmail_ddmenu_btn02_pane_cp2

0xa23b,	// (0x0008006f) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xa23b,	// (0x0008006f) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe37,	// (0x00085c6b) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe37,	// (0x00085c6b) cmail_ddmenu_btn02_pane_g

0xa259,	// (0x0008008d) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xa259,	// (0x0008008d) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe3c,	// (0x00085c70) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe3c,	// (0x00085c70) cmail_ddmenu_btn02_pane_t

0xa9d4,	// (0x00080808) fps_text_pane_ParamLimits

0xa9d4,	// (0x00080808) fps_text_pane

0xa9eb,	// (0x0008081f) main_fps_pane_g1_ParamLimits

0xa9eb,	// (0x0008081f) main_fps_pane_g1

0xaa03,	// (0x00080837) wait_bar_pane_cp010_ParamLimits

0xaa03,	// (0x00080837) wait_bar_pane_cp010

0xaa16,	// (0x0008084a) fps_text_pane_t1_ParamLimits

0xaa16,	// (0x0008084a) fps_text_pane_t1

0xc5a4,	// (0x000823d8) cam4_image_uncrop_pane_g1

0xc5ad,	// (0x000823e1) cam4_image_uncrop_pane_g2

0x7eba,	// (0x0007dcee) cam4_image_uncrop_pane_g3

0x7ec3,	// (0x0007dcf7) cam4_image_uncrop_pane_g4

0x0003,

0xf903,	// (0x00085737) cam4_image_uncrop_pane_g

0xa889,	// (0x000806bd) dia3_listrow_pane_ParamLimits

0xab8a,	// (0x000809be) main_phob2_pane

0x9e5a,	// (0x0007fc8e) cell_tport_appsw_pane_cp02_ParamLimits

0x9e5a,	// (0x0007fc8e) cell_tport_appsw_pane_cp02

0x9e6e,	// (0x0007fca2) cell_tport_appsw_pane_cp03_ParamLimits

0x9e6e,	// (0x0007fca2) cell_tport_appsw_pane_cp03

0xab8a,	// (0x000809be) phob2_contact_card_pane

0xab8a,	// (0x000809be) phob2_listscroll_pane

0xe4b3,	// (0x000842e7) phob2_list_pane

0xe4bb,	// (0x000842ef) scroll_pane_cp034

0xaa2e,	// (0x00080862) phob2_cc_data_pane_ParamLimits

0xaa2e,	// (0x00080862) phob2_cc_data_pane

0xaa4f,	// (0x00080883) phob2_cc_listscroll_pane_ParamLimits

0xaa4f,	// (0x00080883) phob2_cc_listscroll_pane

0xaa71,	// (0x000808a5) list_double_large_graphic_phob2_pane_ParamLimits

0xaa71,	// (0x000808a5) list_double_large_graphic_phob2_pane

0xaa86,	// (0x000808ba) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xaa86,	// (0x000808ba) list_double_large_graphic_phob2_pane_g1

0x12ec,	// (0x00077120) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x12ec,	// (0x00077120) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff2e,	// (0x00085d62) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff2e,	// (0x00085d62) list_double_large_graphic_phob2_pane_g

0x12f8,	// (0x0007712c) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x12f8,	// (0x0007712c) list_double_large_graphic_phob2_pane_t1

0x130d,	// (0x00077141) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x130d,	// (0x00077141) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff33,	// (0x00085d67) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff33,	// (0x00085d67) list_double_large_graphic_phob2_pane_t

0xab8a,	// (0x000809be) list_highlight_pane_cp024

0xe4c3,	// (0x000842f7) phob2_cc_button_pane

0xaa93,	// (0x000808c7) phob2_cc_data_pane_g1_ParamLimits

0xaa93,	// (0x000808c7) phob2_cc_data_pane_g1

0xaaa9,	// (0x000808dd) phob2_cc_data_pane_g2_ParamLimits

0xaaa9,	// (0x000808dd) phob2_cc_data_pane_g2

0x0001,

0xff38,	// (0x00085d6c) phob2_cc_data_pane_g_ParamLimits

0xff38,	// (0x00085d6c) phob2_cc_data_pane_g

0xaabd,	// (0x000808f1) phob2_cc_data_pane_t1_ParamLimits

0xaabd,	// (0x000808f1) phob2_cc_data_pane_t1

0xaad7,	// (0x0008090b) phob2_cc_data_pane_t2_ParamLimits

0xaad7,	// (0x0008090b) phob2_cc_data_pane_t2

0xaaf1,	// (0x00080925) phob2_cc_data_pane_t3_ParamLimits

0xaaf1,	// (0x00080925) phob2_cc_data_pane_t3

0x0002,

0xff3d,	// (0x00085d71) phob2_cc_data_pane_t_ParamLimits

0xff3d,	// (0x00085d71) phob2_cc_data_pane_t

0xe4cb,	// (0x000842ff) phob2_cc_list_pane_ParamLimits

0xe4cb,	// (0x000842ff) phob2_cc_list_pane

0xc952,	// (0x00082786) scroll_pane_cp035_ParamLimits

0xc952,	// (0x00082786) scroll_pane_cp035

0xac03,	// (0x00080a37) bg_button_pane_cp033

0xe4d7,	// (0x0008430b) phob2_cc_button_pane_g1

0xe4e3,	// (0x00084317) phob2_cc_button_pane_t1

0xe4f8,	// (0x0008432c) phob2_cc_button_pane_t2

0x0001,

0xff44,	// (0x00085d78) phob2_cc_button_pane_t

0xab0b,	// (0x0008093f) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xab0b,	// (0x0008093f) list_double_large_graphic_phob2_cc_pane

0xab20,	// (0x00080954) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xab20,	// (0x00080954) list_double_large_graphic_phob2_cc_pane_g1

0x131f,	// (0x00077153) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x131f,	// (0x00077153) list_double_large_graphic_phob2_cc_pane_g2

0x132b,	// (0x0007715f) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x132b,	// (0x0007715f) list_double_large_graphic_phob2_cc_pane_g3

0x1337,	// (0x0007716b) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x1337,	// (0x0007716b) list_double_large_graphic_phob2_cc_pane_g4

0x1343,	// (0x00077177) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1343,	// (0x00077177) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff49,	// (0x00085d7d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff49,	// (0x00085d7d) list_double_large_graphic_phob2_cc_pane_g

0x134f,	// (0x00077183) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x134f,	// (0x00077183) list_double_large_graphic_phob2_cc_pane_t1

0x1378,	// (0x000771ac) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x1378,	// (0x000771ac) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff54,	// (0x00085d88) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff54,	// (0x00085d88) list_double_large_graphic_phob2_cc_pane_t

0xe50a,	// (0x0008433e) list_highlight_pane_cp025_ParamLimits

0xe50a,	// (0x0008433e) list_highlight_pane_cp025

0xac03,	// (0x00080a37) bg_button_pane_cp033_ParamLimits

0xe4d7,	// (0x0008430b) phob2_cc_button_pane_g1_ParamLimits

0xe4e3,	// (0x00084317) phob2_cc_button_pane_t1_ParamLimits

0xe4f8,	// (0x0008432c) phob2_cc_button_pane_t2_ParamLimits

0xff44,	// (0x00085d78) phob2_cc_button_pane_t_ParamLimits

0x15c0,	// (0x000773f4) popup_wgtman_window

0xc752,	// (0x00082586) scroll_pane_cp038

0xa651,	// (0x00080485) wgtman_btn_pane_cp_01_ParamLimits

0xa651,	// (0x00080485) wgtman_btn_pane_cp_01

0xe518,	// (0x0008434c) wgtman_content_pane

0xe521,	// (0x00084355) wgtman_heading_pane

0xab8a,	// (0x000809be) bg_heading_pane_cp02

0xe52a,	// (0x0008435e) wgtman_heading_pane_g1

0xe532,	// (0x00084366) wgtman_heading_pane_t1

0xe540,	// (0x00084374) scroll_pane_cp036

0xe548,	// (0x0008437c) wgtman_list_pane

0xe550,	// (0x00084384) wgtman_list_pane_t1_ParamLimits

0xe550,	// (0x00084384) wgtman_list_pane_t1

0xeaa4,	// (0x000848d8) cam4_grid_pane

0x0bb4,	// (0x000769e8) bg_button_pane_cp015_ParamLimits

0x8b78,	// (0x0007e9ac) bg_button_pane_cp016_ParamLimits

0x8b8b,	// (0x0007e9bf) bg_button_pane_cp017_ParamLimits

0x0bfc,	// (0x00076a30) popup_vitu2_query_window_g3_ParamLimits

0x0bfc,	// (0x00076a30) popup_vitu2_query_window_g3

0x0c77,	// (0x00076aab) popup_vitu2_query_window_t6_ParamLimits

0x0c77,	// (0x00076aab) popup_vitu2_query_window_t6

0x0ca2,	// (0x00076ad6) popup_vitu2_query_window_t7_ParamLimits

0x0ca2,	// (0x00076ad6) popup_vitu2_query_window_t7

0xc5a4,	// (0x000823d8) cam4_grid_pane_g1

0xc5ad,	// (0x000823e1) cam4_grid_pane_g2

0xe573,	// (0x000843a7) cam4_grid_pane_g3

0xe57c,	// (0x000843b0) cam4_grid_pane_g4

0x0003,

0xff59,	// (0x00085d8d) cam4_grid_pane_g

0x22a7,	// (0x000780db) aid_placing_vt_slider_lsc_ParamLimits

0x25e8,	// (0x0007841c) vidtel_button_pane_ParamLimits

0x25e8,	// (0x0007841c) vidtel_button_pane

0xe587,	// (0x000843bb) bg_button_pane_cp034

0xab2c,	// (0x00080960) vidtel_button_pane_g1

0xe591,	// (0x000843c5) vidtel_button_pane_t1

0xc871,	// (0x000826a5) aid_size_vtel_slider_touch

0xc952,	// (0x00082786) scroll_pane_cp039

0xd30f,	// (0x00083143) ncim_query_button_pane_cp01_ParamLimits

0xd32e,	// (0x00083162) ncimui_query_pane_g1_ParamLimits

0xac03,	// (0x00080a37) input_focus_pane_cp012_ParamLimits

0xd353,	// (0x00083187) ncim_query_entry_pane_t1_ParamLimits

0xc952,	// (0x00082786) scroll_pane_cp039_ParamLimits

0x3b0f,	// (0x00079943) navi_pane_bcale_mc_g1

0x3b17,	// (0x0007994b) navi_pane_bcale_mc_t1

0xd921,	// (0x00083755) main_sp_fs_email_pane_g1

0xd929,	// (0x0008375d) main_sp_fs_email_pane_g2

0x0001,

0xfcf5,	// (0x00085b29) main_sp_fs_email_pane_g

0xde7a,	// (0x00083cae) list_single_cale_mrui_row_pane_g3_ParamLimits

0xde7a,	// (0x00083cae) list_single_cale_mrui_row_pane_g3

0xa281,	// (0x000800b5) list_single_recal_day_pane_g5_event_pane

0xe035,	// (0x00083e69) list_single_recal_day_pane_g7

0xe59f,	// (0x000843d3) list_recal_day_event_pane_cp01

0xe5a8,	// (0x000843dc) list_recal_vselct_arw_lo_pane_cp01

0xe5b0,	// (0x000843e4) list_recal_vselct_arw_up_pane_cp01

0xe5b8,	// (0x000843ec) list_recal_vselct_pane_cp01

0xc8a7,	// (0x000826db) list_recal_day_event_pane_cp01_g1

0xe5c2,	// (0x000843f6) list_recal_day_event_pane_cp01_t1

0xe03d,	// (0x00083e71) list_single_recal_day_pane_t1_ParamLimits

0xe04f,	// (0x00083e83) list_single_recal_day_pane_t2_ParamLimits

0xfe4c,	// (0x00085c80) list_single_recal_day_pane_t_ParamLimits

0xef0a,	// (0x00084d3e) bg_notes_pane_ParamLimits

0xef18,	// (0x00084d4c) list_notes_pane_ParamLimits

0x18d7,	// (0x0007770b) scroll_pane_cp06_ParamLimits

0xef3a,	// (0x00084d6e) main_notes_pane_ParamLimits

0xab8a,	// (0x000809be) main_welc_pane

0xab34,	// (0x00080968) main_welc_body_pane_ParamLimits

0xab34,	// (0x00080968) main_welc_body_pane

0xab4a,	// (0x0008097e) main_welc_opti_pane_ParamLimits

0xab4a,	// (0x0008097e) main_welc_opti_pane

0xab61,	// (0x00080995) main_welc_pane_t1_ParamLimits

0xab61,	// (0x00080995) main_welc_pane_t1

0xe5d0,	// (0x00084404) main_welc_body_row_pane_ParamLimits

0xe5d0,	// (0x00084404) main_welc_body_row_pane

0xab7a,	// (0x000809ae) main_welc_opti_row_pane_ParamLimits

0xab7a,	// (0x000809ae) main_welc_opti_row_pane

0xe5e7,	// (0x0008441b) main_welc_opti_row_pane_g1

0xe5ef,	// (0x00084423) main_welc_opti_row_pane_t1

0xe5fe,	// (0x00084432) main_welc_body_row_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large

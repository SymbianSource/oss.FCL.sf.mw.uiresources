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

#include "aknlayoutscalable_elaf_php_apps_qhd_prt_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch[]; }

namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_php_apps_qhd_prt_tch + 0x000614bf };

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
0x5796,	// (0x00066c55) Screen

0x57a2,	// (0x00066c61) application_window

0x57ea,	// (0x00066ca9) area_bottom_pane_ParamLimits

0x57ea,	// (0x00066ca9) area_bottom_pane

0x581f,	// (0x00066cde) area_top_pane_ParamLimits

0x581f,	// (0x00066cde) area_top_pane

0x0164,	// (0x00061623) call_video_uplink_pane_ParamLimits

0x0164,	// (0x00061623) call_video_uplink_pane

0x58ad,	// (0x00066d6c) main_pane_ParamLimits

0x58ad,	// (0x00066d6c) main_pane

0xa0b5,	// (0x0006b574) context_pane

0xa0c8,	// (0x0006b587) navi_pane

0xa0e8,	// (0x0006b5a7) popup_cale_events_window_ParamLimits

0xa0e8,	// (0x0006b5a7) popup_cale_events_window

0xa100,	// (0x0006b5bf) popup_mup_playback_window

0xa108,	// (0x0006b5c7) signal_pane

0x08f3,	// (0x00061db2) main_browser_pane

0x7ecf,	// (0x0006938e) main_burst_pane

0x9f24,	// (0x0006b3e3) main_calc_pane

0x7ecf,	// (0x0006938e) main_cale_day_pane

0x08f3,	// (0x00061db2) main_cale_month_pane

0x7ecf,	// (0x0006938e) main_cale_week_pane

0x7ecf,	// (0x0006938e) main_call_pane

0x0595,	// (0x00061a54) main_call_poc_pane

0x7ecf,	// (0x0006938e) main_camera_pane

0x7ecf,	// (0x0006938e) main_chi_dic_pane

0x7a82,	// (0x00068f41) main_clock_pane

0x0595,	// (0x00061a54) main_fmradio_pane

0x7ecf,	// (0x0006938e) main_graph_messa_pane

0x0595,	// (0x00061a54) main_help_pane

0x08f3,	// (0x00061db2) main_im_pane

0x07f0,	// (0x00061caf) main_image_pane_ParamLimits

0x07f0,	// (0x00061caf) main_image_pane

0x0595,	// (0x00061a54) main_location2_pane

0x7ecf,	// (0x0006938e) main_location_pane

0x0595,	// (0x00061a54) main_messa_pane

0x0595,	// (0x00061a54) main_mp2_pane

0x7ecf,	// (0x0006938e) main_mp_pane

0x0595,	// (0x00061a54) main_msg_pane

0x0595,	// (0x00061a54) main_mup_eq_pane

0x0595,	// (0x00061a54) main_mup_pane

0x7ecf,	// (0x0006938e) main_notes_pane

0x0595,	// (0x00061a54) main_pec_pane

0x0595,	// (0x00061a54) main_phob_pane

0x0595,	// (0x00061a54) main_pinb_pane

0x0595,	// (0x00061a54) main_postcard_pane

0x0595,	// (0x00061a54) main_qdial_pane

0x7ecf,	// (0x0006938e) main_skin_pane

0x0595,	// (0x00061a54) main_smil2_pane

0x7ecf,	// (0x0006938e) main_smil_pane

0x7ecf,	// (0x0006938e) main_video_pane

0x7ecf,	// (0x0006938e) main_video_tele_pane

0x07f0,	// (0x00061caf) main_viewer_pane_ParamLimits

0x07f0,	// (0x00061caf) main_viewer_pane

0x7ecf,	// (0x0006938e) main_vorec_pane

0x9f7e,	// (0x0006b43d) popup_blid_sat_info_window_ParamLimits

0x9f7e,	// (0x0006b43d) popup_blid_sat_info_window

0x9f9e,	// (0x0006b45d) popup_dyc_status_message_window_ParamLimits

0x9f9e,	// (0x0006b45d) popup_dyc_status_message_window

0x9fae,	// (0x0006b46d) popup_grid_large_graphic_window_ParamLimits

0x9fae,	// (0x0006b46d) popup_grid_large_graphic_window

0xa03f,	// (0x0006b4fe) popup_loc_request_window_ParamLimits

0xa03f,	// (0x0006b4fe) popup_loc_request_window

0xa08d,	// (0x0006b54c) popup_wml_address_window_ParamLimits

0xa08d,	// (0x0006b54c) popup_wml_address_window

0x9dc3,	// (0x0006b282) call_muted_g1

0x8b28,	// (0x00069fe7) popup_call_audio_conf_window_ParamLimits

0x8b28,	// (0x00069fe7) popup_call_audio_conf_window

0x9dd3,	// (0x0006b292) popup_call_audio_first_window_ParamLimits

0x9dd3,	// (0x0006b292) popup_call_audio_first_window

0x9e13,	// (0x0006b2d2) popup_call_audio_in_window_ParamLimits

0x9e13,	// (0x0006b2d2) popup_call_audio_in_window

0x9e37,	// (0x0006b2f6) popup_call_audio_out_window_ParamLimits

0x9e37,	// (0x0006b2f6) popup_call_audio_out_window

0x9e59,	// (0x0006b318) popup_call_audio_second_window_ParamLimits

0x9e59,	// (0x0006b318) popup_call_audio_second_window

0x9e89,	// (0x0006b348) popup_call_audio_wait_window_ParamLimits

0x9e89,	// (0x0006b348) popup_call_audio_wait_window

0x9eaa,	// (0x0006b369) popup_number_entry_window_ParamLimits

0x9eaa,	// (0x0006b369) popup_number_entry_window

0x0182,	// (0x00061641) bg_popup_call_pane_cp05_ParamLimits

0x0182,	// (0x00061641) bg_popup_call_pane_cp05

0x01a2,	// (0x00061661) popup_number_entry_window_t1

0x01b5,	// (0x00061674) popup_number_entry_window_t2

0x01c7,	// (0x00061686) popup_number_entry_window_t3

0x0003,

0xf0fb,	// (0x000705ba) popup_number_entry_window_t

0x01d9,	// (0x00061698) text_title_cp2

0x01ec,	// (0x000616ab) bg_popup_call_pane_cp_ParamLimits

0x01ec,	// (0x000616ab) bg_popup_call_pane_cp

0x01fa,	// (0x000616b9) call_thumbnail_pane

0x0202,	// (0x000616c1) popup_call_audio_in_window_g1_ParamLimits

0x0202,	// (0x000616c1) popup_call_audio_in_window_g1

0x020e,	// (0x000616cd) popup_call_audio_in_window_g2_ParamLimits

0x020e,	// (0x000616cd) popup_call_audio_in_window_g2

0x021a,	// (0x000616d9) popup_call_audio_in_window_g3_ParamLimits

0x021a,	// (0x000616d9) popup_call_audio_in_window_g3

0x0002,

0xf104,	// (0x000705c3) popup_call_audio_in_window_g_ParamLimits

0xf104,	// (0x000705c3) popup_call_audio_in_window_g

0x0226,	// (0x000616e5) popup_call_audio_in_window_t1_ParamLimits

0x0226,	// (0x000616e5) popup_call_audio_in_window_t1

0x0242,	// (0x00061701) popup_call_audio_in_window_t2_ParamLimits

0x0242,	// (0x00061701) popup_call_audio_in_window_t2

0x025e,	// (0x0006171d) popup_call_audio_in_window_t3_ParamLimits

0x025e,	// (0x0006171d) popup_call_audio_in_window_t3

0x0002,

0xf10b,	// (0x000705ca) popup_call_audio_in_window_t_ParamLimits

0xf10b,	// (0x000705ca) popup_call_audio_in_window_t

0x01ec,	// (0x000616ab) bg_popup_call_pane_cp01_ParamLimits

0x01ec,	// (0x000616ab) bg_popup_call_pane_cp01

0x01fa,	// (0x000616b9) call_thumbnail_pane_cp02

0x0271,	// (0x00061730) call_type_pane_cp022

0x0279,	// (0x00061738) popup_call_audio_out_window_g1_ParamLimits

0x0279,	// (0x00061738) popup_call_audio_out_window_g1

0x028b,	// (0x0006174a) popup_call_audio_out_window_g2_ParamLimits

0x028b,	// (0x0006174a) popup_call_audio_out_window_g2

0x0297,	// (0x00061756) popup_call_audio_out_window_g3_ParamLimits

0x0297,	// (0x00061756) popup_call_audio_out_window_g3

0x0002,

0xf112,	// (0x000705d1) popup_call_audio_out_window_g_ParamLimits

0xf112,	// (0x000705d1) popup_call_audio_out_window_g

0x02a9,	// (0x00061768) popup_call_audio_out_window_t1_ParamLimits

0x02a9,	// (0x00061768) popup_call_audio_out_window_t1

0x02c1,	// (0x00061780) popup_call_audio_out_window_t2_ParamLimits

0x02c1,	// (0x00061780) popup_call_audio_out_window_t2

0x0001,

0xf119,	// (0x000705d8) popup_call_audio_out_window_t_ParamLimits

0xf119,	// (0x000705d8) popup_call_audio_out_window_t

0x02d6,	// (0x00061795) bg_popup_call_pane_ParamLimits

0x02d6,	// (0x00061795) bg_popup_call_pane

0x5aad,	// (0x00066f6c) call_thumbnail_pane_cp_ParamLimits

0x5aad,	// (0x00066f6c) call_thumbnail_pane_cp

0x035a,	// (0x00061819) call_type_pane_cp01_ParamLimits

0x035a,	// (0x00061819) call_type_pane_cp01

0x039e,	// (0x0006185d) popup_call_audio_first_window_g1_ParamLimits

0x039e,	// (0x0006185d) popup_call_audio_first_window_g1

0x03ea,	// (0x000618a9) popup_call_audio_first_window_g2_ParamLimits

0x03ea,	// (0x000618a9) popup_call_audio_first_window_g2

0x0001,

0xf11e,	// (0x000705dd) popup_call_audio_first_window_g_ParamLimits

0xf11e,	// (0x000705dd) popup_call_audio_first_window_g

0x042e,	// (0x000618ed) popup_call_audio_first_window_t1_ParamLimits

0x042e,	// (0x000618ed) popup_call_audio_first_window_t1

0x04da,	// (0x00061999) popup_call_audio_first_window_t4_ParamLimits

0x04da,	// (0x00061999) popup_call_audio_first_window_t4

0x0566,	// (0x00061a25) popup_call_audio_first_window_t5_ParamLimits

0x0566,	// (0x00061a25) popup_call_audio_first_window_t5

0x0002,

0xf123,	// (0x000705e2) popup_call_audio_first_window_t_ParamLimits

0xf123,	// (0x000705e2) popup_call_audio_first_window_t

0x0595,	// (0x00061a54) bg_popup_call_pane_cp02

0x059f,	// (0x00061a5e) call_type_pane_cp023

0x05a7,	// (0x00061a66) popup_call_audio_wait_window_g1

0x05af,	// (0x00061a6e) popup_call_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000705e9) popup_call_audio_wait_window_g

0x05b7,	// (0x00061a76) popup_call_audio_wait_window_t3

0x05c5,	// (0x00061a84) bg_popup_call_pane_cp03_ParamLimits

0x05c5,	// (0x00061a84) bg_popup_call_pane_cp03

0x0625,	// (0x00061ae4) call_thumbnail_pane_cp011_ParamLimits

0x0625,	// (0x00061ae4) call_thumbnail_pane_cp011

0x0631,	// (0x00061af0) call_type_pane_cp034_ParamLimits

0x0631,	// (0x00061af0) call_type_pane_cp034

0x066d,	// (0x00061b2c) popup_call_audio_second_window_g1_ParamLimits

0x066d,	// (0x00061b2c) popup_call_audio_second_window_g1

0x06a9,	// (0x00061b68) popup_call_audio_second_window_g2_ParamLimits

0x06a9,	// (0x00061b68) popup_call_audio_second_window_g2

0x0001,

0xf12f,	// (0x000705ee) popup_call_audio_second_window_g_ParamLimits

0xf12f,	// (0x000705ee) popup_call_audio_second_window_g

0x06e5,	// (0x00061ba4) popup_call_audio_second_window_t1_ParamLimits

0x06e5,	// (0x00061ba4) popup_call_audio_second_window_t1

0x0766,	// (0x00061c25) popup_call_audio_second_window_t2_ParamLimits

0x0766,	// (0x00061c25) popup_call_audio_second_window_t2

0x079c,	// (0x00061c5b) popup_call_audio_second_window_t3_ParamLimits

0x079c,	// (0x00061c5b) popup_call_audio_second_window_t3

0x0002,

0xf134,	// (0x000705f3) popup_call_audio_second_window_t_ParamLimits

0xf134,	// (0x000705f3) popup_call_audio_second_window_t

0x0595,	// (0x00061a54) bg_popup_call_pane_cp04

0x07d2,	// (0x00061c91) list_conf_pane

0x07da,	// (0x00061c99) popup_call_audio_conf_window_t1

0x07e8,	// (0x00061ca7) call_thumbnail_pane_g1

0x07f0,	// (0x00061caf) bg_pinb_pane_ParamLimits

0x07f0,	// (0x00061caf) bg_pinb_pane

0x07fe,	// (0x00061cbd) find_pinb_pane

0x0807,	// (0x00061cc6) listscroll_pinb_pane_ParamLimits

0x0807,	// (0x00061cc6) listscroll_pinb_pane

0x0816,	// (0x00061cd5) pinb_bg_pane_g1

0x5ad1,	// (0x00066f90) pinb_bg_pane_g2

0x5add,	// (0x00066f9c) pinb_bg_pane_g3

0x5ae9,	// (0x00066fa8) pinb_bg_pane_g4

0x5af5,	// (0x00066fb4) pinb_bg_pane_g5

0x5b01,	// (0x00066fc0) pinb_bg_pane_g6

0x5b0c,	// (0x00066fcb) pinb_bg_pane_g7

0x5b17,	// (0x00066fd6) pinb_bg_pane_g8

0x5b22,	// (0x00066fe1) pinb_bg_pane_g9

0x5b2c,	// (0x00066feb) pinb_bg_pane_g10

0x0009,

0xf13b,	// (0x000705fa) pinb_bg_pane_g

0x5b49,	// (0x00067008) grid_pinb_pane

0x5b54,	// (0x00067013) list_pinb_pane

0x5b5f,	// (0x0006701e) scroll_pane_cp01_ParamLimits

0x5b5f,	// (0x0006701e) scroll_pane_cp01

0x0820,	// (0x00061cdf) find_pinb_pane_g1_ParamLimits

0x0820,	// (0x00061cdf) find_pinb_pane_g1

0x0838,	// (0x00061cf7) find_pinb_pane_t1

0x084a,	// (0x00061d09) find_pinb_pane_t2

0x0001,

0xf155,	// (0x00070614) find_pinb_pane_t

0x085f,	// (0x00061d1e) input_focus_pane_cp01_ParamLimits

0x085f,	// (0x00061d1e) input_focus_pane_cp01

0x5b71,	// (0x00067030) cell_pinb_pane_ParamLimits

0x5b71,	// (0x00067030) cell_pinb_pane

0x5b96,	// (0x00067055) cell_pinb_pane_g1_ParamLimits

0x5b96,	// (0x00067055) cell_pinb_pane_g1

0x5bab,	// (0x0006706a) cell_pinb_pane_g2_ParamLimits

0x5bab,	// (0x0006706a) cell_pinb_pane_g2

0x086b,	// (0x00061d2a) cell_pinb_pane_g3_ParamLimits

0x086b,	// (0x00061d2a) cell_pinb_pane_g3

0x0002,

0xf15a,	// (0x00070619) cell_pinb_pane_g_ParamLimits

0xf15a,	// (0x00070619) cell_pinb_pane_g

0x0595,	// (0x00061a54) grid_highlight_pane_cp01

0x5bb7,	// (0x00067076) list_pinb_item_pane_ParamLimits

0x5bb7,	// (0x00067076) list_pinb_item_pane

0x0595,	// (0x00061a54) list_highlight_pane_cp02

0x5bd7,	// (0x00067096) list_pinb_item_pane_g1_ParamLimits

0x5bd7,	// (0x00067096) list_pinb_item_pane_g1

0x0877,	// (0x00061d36) list_pinb_item_pane_g2_ParamLimits

0x0877,	// (0x00061d36) list_pinb_item_pane_g2

0x5be4,	// (0x000670a3) list_pinb_item_pane_g3_ParamLimits

0x5be4,	// (0x000670a3) list_pinb_item_pane_g3

0x5bf5,	// (0x000670b4) list_pinb_item_pane_g4_ParamLimits

0x5bf5,	// (0x000670b4) list_pinb_item_pane_g4

0x0003,

0xf161,	// (0x00070620) list_pinb_item_pane_g_ParamLimits

0xf161,	// (0x00070620) list_pinb_item_pane_g

0x5c01,	// (0x000670c0) list_pinb_item_pane_t1_ParamLimits

0x5c01,	// (0x000670c0) list_pinb_item_pane_t1

0x5c32,	// (0x000670f1) calc_display_pane

0x5c50,	// (0x0006710f) calc_paper_pane

0x5c6c,	// (0x0006712b) grid_calc_pane

0x0595,	// (0x00061a54) bg_list_pane_cp01

0x5c96,	// (0x00067155) clock_g1

0x5c9e,	// (0x0006715d) clock_g2

0x0001,

0xf16a,	// (0x00070629) clock_g

0x5ca8,	// (0x00067167) clock_t1_ParamLimits

0x5ca8,	// (0x00067167) clock_t1

0x5cbd,	// (0x0006717c) clock_t2_ParamLimits

0x5cbd,	// (0x0006717c) clock_t2

0x5ccf,	// (0x0006718e) clock_t3_ParamLimits

0x5ccf,	// (0x0006718e) clock_t3

0x5ce1,	// (0x000671a0) clock_t4_ParamLimits

0x5ce1,	// (0x000671a0) clock_t4

0x5cf3,	// (0x000671b2) clock_t5_ParamLimits

0x5cf3,	// (0x000671b2) clock_t5

0x5d08,	// (0x000671c7) clock_t6_ParamLimits

0x5d08,	// (0x000671c7) clock_t6

0x5d1a,	// (0x000671d9) clock_t7_ParamLimits

0x5d1a,	// (0x000671d9) clock_t7

0x5d2c,	// (0x000671eb) clock_t8_ParamLimits

0x5d2c,	// (0x000671eb) clock_t8

0x5d42,	// (0x00067201) clock_t9_ParamLimits

0x5d42,	// (0x00067201) clock_t9

0x0008,

0xf16f,	// (0x0007062e) clock_t_ParamLimits

0xf16f,	// (0x0007062e) clock_t

0x088b,	// (0x00061d4a) popup_clock_analogue_window_cp02

0x088b,	// (0x00061d4a) popup_clock_digital_window_cp01

0x0893,	// (0x00061d52) listscroll_help_pane

0x0595,	// (0x00061a54) phob_pre_status_pane

0x089d,	// (0x00061d5c) grid_qdial_pane

0x0595,	// (0x00061a54) listscroll_mce_pane

0x08a7,	// (0x00061d66) bg_notes_pane

0x08b1,	// (0x00061d70) list_notes_pane

0x5d58,	// (0x00067217) scroll_pane_cp06

0x08bb,	// (0x00061d7a) bg_calc_paper_pane

0x5d63,	// (0x00067222) list_calc_pane

0x08f3,	// (0x00061db2) bg_calc_display_pane

0x5d7d,	// (0x0006723c) calc_display_pane_t1

0x5d92,	// (0x00067251) calc_display_pane_t2

0x5da7,	// (0x00067266) calc_display_pane_t3

0x0002,

0xf182,	// (0x00070641) calc_display_pane_t

0x5db9,	// (0x00067278) cell_calc_pane_ParamLimits

0x5db9,	// (0x00067278) cell_calc_pane

0x0911,	// (0x00061dd0) bg_calc_paper_pane_g1

0x0929,	// (0x00061de8) bg_calc_paper_pane_g2

0x091d,	// (0x00061ddc) bg_calc_paper_pane_g3

0x0941,	// (0x00061e00) bg_calc_paper_pane_g4

0x0935,	// (0x00061df4) bg_calc_paper_pane_g5

0x5de6,	// (0x000672a5) bg_calc_paper_pane_g6

0x5df7,	// (0x000672b6) bg_calc_paper_pane_g7

0x5e08,	// (0x000672c7) bg_calc_paper_pane_g8

0x0007,

0xf189,	// (0x00070648) bg_calc_paper_pane_g

0x5e19,	// (0x000672d8) calc_bg_paper_pane_g9

0x5e2a,	// (0x000672e9) list_calc_item_pane_ParamLimits

0x5e2a,	// (0x000672e9) list_calc_item_pane

0x094d,	// (0x00061e0c) list_calc_item_pane_g1

0x5e59,	// (0x00067318) list_calc_item_pane_t1_ParamLimits

0x5e59,	// (0x00067318) list_calc_item_pane_t1

0x5e6b,	// (0x0006732a) list_calc_item_pane_t2_ParamLimits

0x5e6b,	// (0x0006732a) list_calc_item_pane_t2

0x0001,

0xf19a,	// (0x00070659) list_calc_item_pane_t_ParamLimits

0xf19a,	// (0x00070659) list_calc_item_pane_t

0x096c,	// (0x00061e2b) cell_calc_pane_g1

0x0976,	// (0x00061e35) grid_highlight_pane_cp02

0x5e9b,	// (0x0006735a) bg_calc_display_pane_g1

0x5ea4,	// (0x00067363) bg_calc_display_pane_g2

0x5eae,	// (0x0006736d) bg_calc_display_pane_g3

0x0002,

0xf1a4,	// (0x00070663) bg_calc_display_pane_g

0x5eb7,	// (0x00067376) cell_qdial_pane_ParamLimits

0x5eb7,	// (0x00067376) cell_qdial_pane

0x5ecb,	// (0x0006738a) cell_qdial_pane_g1_ParamLimits

0x5ecb,	// (0x0006738a) cell_qdial_pane_g1

0x5ed8,	// (0x00067397) cell_qdial_pane_g2_ParamLimits

0x5ed8,	// (0x00067397) cell_qdial_pane_g2

0x0998,	// (0x00061e57) cell_qdial_pane_g3_ParamLimits

0x0998,	// (0x00061e57) cell_qdial_pane_g3

0x0003,

0xf1ab,	// (0x0007066a) cell_qdial_pane_g_ParamLimits

0xf1ab,	// (0x0007066a) cell_qdial_pane_g

0x5ef6,	// (0x000673b5) cell_qdial_pane_t1_ParamLimits

0x5ef6,	// (0x000673b5) cell_qdial_pane_t1

0x5f0e,	// (0x000673cd) cell_qdial_pane_t2_ParamLimits

0x5f0e,	// (0x000673cd) cell_qdial_pane_t2

0x5f21,	// (0x000673e0) cell_qdial_pane_t3_ParamLimits

0x5f21,	// (0x000673e0) cell_qdial_pane_t3

0x0002,

0xf1b4,	// (0x00070673) cell_qdial_pane_t_ParamLimits

0xf1b4,	// (0x00070673) cell_qdial_pane_t

0x0595,	// (0x00061a54) grid_highlight_pane_cp04

0x09a4,	// (0x00061e63) thumbnail_qdial_pane_ParamLimits

0x09a4,	// (0x00061e63) thumbnail_qdial_pane

0x0a00,	// (0x00061ebf) list_help_pane

0x0a09,	// (0x00061ec8) scroll_pane_cp02

0x5f34,	// (0x000673f3) help_list_pane_t1_ParamLimits

0x5f34,	// (0x000673f3) help_list_pane_t1

0x5f67,	// (0x00067426) bg_notes_pane_g2

0x5f6f,	// (0x0006742e) bg_notes_pane_g3

0x5f77,	// (0x00067436) notes_bg_pane_g1

0x5f7f,	// (0x0006743e) notes_bg_pane_g4

0x5f87,	// (0x00067446) notes_bg_pane_g5

0x5f8f,	// (0x0006744e) notes_bg_pane_g6

0x5f97,	// (0x00067456) notes_bg_pane_g7

0x5f9f,	// (0x0006745e) notes_bg_pane_g8

0x5fa7,	// (0x00067466) notes_bg_pane_g9

0x0006,

0xf1d2,	// (0x00070691) notes_bg_pane_g

0x5faf,	// (0x0006746e) list_notes_text_pane_ParamLimits

0x5faf,	// (0x0006746e) list_notes_text_pane

0x0a5a,	// (0x00061f19) list_notes_text_pane_g1

0x46e0,	// (0x00065b9f) list_notes_text_pane_t1

0x08f3,	// (0x00061db2) listscroll_cale_week_pane

0x5ff1,	// (0x000674b0) bg_cale_heading_pane

0x0a74,	// (0x00061f33) bg_cale_pane_cp01

0x6005,	// (0x000674c4) cale_week_corner_pane

0x601b,	// (0x000674da) cale_week_day_heading_pane

0x602f,	// (0x000674ee) cale_week_scroll_pane_g1

0x6040,	// (0x000674ff) cale_week_scroll_pane_g2

0x6051,	// (0x00067510) cale_week_scroll_pane_g3

0x6062,	// (0x00067521) cale_week_scroll_pane_g4

0x6073,	// (0x00067532) cale_week_scroll_pane_g5

0x6084,	// (0x00067543) cale_week_scroll_pane_g6

0x6095,	// (0x00067554) cale_week_scroll_pane_g7

0x60a8,	// (0x00067567) cale_week_scroll_pane_g8

0x60bb,	// (0x0006757a) cale_week_scroll_pane_g9

0x60cc,	// (0x0006758b) cale_week_scroll_pane_g10

0x60dd,	// (0x0006759c) cale_week_scroll_pane_g11

0x60ee,	// (0x000675ad) cale_week_scroll_pane_g12

0x60ff,	// (0x000675be) cale_week_scroll_pane_g13

0x6110,	// (0x000675cf) cale_week_scroll_pane_g14

0x6121,	// (0x000675e0) cale_week_scroll_pane_g15

0x000e,

0xf1e1,	// (0x000706a0) cale_week_scroll_pane_g

0x6132,	// (0x000675f1) cale_week_time_pane

0x6145,	// (0x00067604) grid_cale_week_pane

0x615a,	// (0x00067619) scroll_pane_cp08

0x6174,	// (0x00067633) cell_cale_week_pane_ParamLimits

0x6174,	// (0x00067633) cell_cale_week_pane

0x61b0,	// (0x0006766f) cale_week_day_heading_pane_t1

0x61dd,	// (0x0006769c) cale_week_day_heading_pane_t2

0x620a,	// (0x000676c9) cale_week_day_heading_pane_t3

0x6237,	// (0x000676f6) cale_week_day_heading_pane_t4

0x6264,	// (0x00067723) cale_week_day_heading_pane_t5

0x6291,	// (0x00067750) cale_week_day_heading_pane_t6

0x62be,	// (0x0006777d) cale_week_day_heading_pane_t7

0x0006,

0xf200,	// (0x000706bf) cale_week_day_heading_pane_t

0x0a9f,	// (0x00061f5e) bg_cale_side_pane

0x62eb,	// (0x000677aa) cale_week_time_pane_t1

0x6303,	// (0x000677c2) cale_week_time_pane_t2

0x631b,	// (0x000677da) cale_week_time_pane_t3

0x6333,	// (0x000677f2) cale_week_time_pane_t4

0x634b,	// (0x0006780a) cale_week_time_pane_t5

0x6363,	// (0x00067822) cale_week_time_pane_t6

0x637b,	// (0x0006783a) cale_week_time_pane_t7

0x6393,	// (0x00067852) cale_week_time_pane_t8

0x0007,

0xf20f,	// (0x000706ce) cale_week_time_pane_t

0x63ab,	// (0x0006786a) cell_cale_week_pane_g2

0x63c4,	// (0x00067883) cell_cale_week_pane_g3_ParamLimits

0x63c4,	// (0x00067883) cell_cale_week_pane_g3

0x0aad,	// (0x00061f6c) grid_highlight_pane_cp07

0x0ab5,	// (0x00061f74) listscroll_gms_pane

0x0abf,	// (0x00061f7e) grid_gms_pane

0x0ac8,	// (0x00061f87) listscroll_gms_pane_g1

0x0ad0,	// (0x00061f8f) listscroll_gms_pane_g2

0x0001,

0xf220,	// (0x000706df) listscroll_gms_pane_g

0x63dc,	// (0x0006789b) scroll_pane_cp010

0x63e7,	// (0x000678a6) cell_gms_pane_ParamLimits

0x63e7,	// (0x000678a6) cell_gms_pane

0x63fa,	// (0x000678b9) cell_gms_pane_g1

0x0ad8,	// (0x00061f97) cell_gms_pane_g2

0x0ae0,	// (0x00061f9f) cell_gms_pane_g3

0x0ae9,	// (0x00061fa8) cell_gms_pane_g4

0x0003,

0xf225,	// (0x000706e4) cell_gms_pane_g

0x0af2,	// (0x00061fb1) grid_highlight_pane_cp09

0x9d4b,	// (0x0006b20a) phob_pre_status_pane_g1

0x9d53,	// (0x0006b212) phob_pre_status_pane_g2

0x9d5b,	// (0x0006b21a) phob_pre_status_pane_g3

0x9d63,	// (0x0006b222) phob_pre_status_pane_g4

0x0004,

0xf614,	// (0x00070ad3) phob_pre_status_pane_g

0x9d73,	// (0x0006b232) phob_pre_status_pane_t1

0x9d83,	// (0x0006b242) phob_pre_status_pane_t2

0x9d93,	// (0x0006b252) phob_pre_status_pane_t3

0x0002,

0xf61f,	// (0x00070ade) phob_pre_status_pane_t

0x0595,	// (0x00061a54) bg_list_pane_cp05

0x640a,	// (0x000678c9) grid_vorec_pane

0x6414,	// (0x000678d3) vorec_t1

0x6422,	// (0x000678e1) vorec_t2

0x6430,	// (0x000678ef) vorec_t3

0x643e,	// (0x000678fd) vorec_t4

0x644c,	// (0x0006790b) vorec_t5

0x645a,	// (0x00067919) vorec_t6

0x0006,

0xf22e,	// (0x000706ed) vorec_t

0x6476,	// (0x00067935) wait_bar_pane_cp01

0x647e,	// (0x0006793d) cell_vorec_pane_ParamLimits

0x647e,	// (0x0006793d) cell_vorec_pane

0x0b64,	// (0x00062023) cell_vorec_pane_g1

0x0595,	// (0x00061a54) grid_highlight_pane_cp05

0x64a1,	// (0x00067960) cams_zoom_pane

0x64ad,	// (0x0006796c) image_vga_pane

0x64bc,	// (0x0006797b) main_camera_pane_g1

0x64ca,	// (0x00067989) main_camera_pane_g2

0x64d6,	// (0x00067995) main_camera_pane_g3

0x64e2,	// (0x000679a1) main_camera_pane_g4

0x64ee,	// (0x000679ad) main_camera_pane_g5

0x64fa,	// (0x000679b9) main_camera_pane_g6

0x6506,	// (0x000679c5) main_camera_pane_g7

0x0007,

0xf23d,	// (0x000706fc) main_camera_pane_g

0x6512,	// (0x000679d1) main_camera_pane_t1

0x6524,	// (0x000679e3) main_camera_pane_t2

0x0001,

0xf24e,	// (0x0007070d) main_camera_pane_t

0x6545,	// (0x00067a04) cams_zoom_pane_cp_ParamLimits

0x6545,	// (0x00067a04) cams_zoom_pane_cp

0x6569,	// (0x00067a28) image_cif_pane_ParamLimits

0x6569,	// (0x00067a28) image_cif_pane

0x6587,	// (0x00067a46) image_subqcif_pane

0x658f,	// (0x00067a4e) main_video_pane_g1_ParamLimits

0x658f,	// (0x00067a4e) main_video_pane_g1

0x65af,	// (0x00067a6e) main_video_pane_g2_ParamLimits

0x65af,	// (0x00067a6e) main_video_pane_g2

0x65df,	// (0x00067a9e) main_video_pane_g3_ParamLimits

0x65df,	// (0x00067a9e) main_video_pane_g3

0x6608,	// (0x00067ac7) main_video_pane_g4_ParamLimits

0x6608,	// (0x00067ac7) main_video_pane_g4

0x6631,	// (0x00067af0) main_video_pane_g5_ParamLimits

0x6631,	// (0x00067af0) main_video_pane_g5

0x0b7a,	// (0x00062039) main_video_pane_g6_ParamLimits

0x0b7a,	// (0x00062039) main_video_pane_g6

0x0006,

0xf253,	// (0x00070712) main_video_pane_g_ParamLimits

0xf253,	// (0x00070712) main_video_pane_g

0x6655,	// (0x00067b14) main_video_pane_t1_ParamLimits

0x6655,	// (0x00067b14) main_video_pane_t1

0x0b94,	// (0x00062053) cams_zoom_pane_g1

0x0b9d,	// (0x0006205c) cams_zoom_pane_g2

0x0ba6,	// (0x00062065) cams_zoom_pane_g3

0x0baf,	// (0x0006206e) cams_zoom_pane_g4

0x0003,

0xf262,	// (0x00070721) cams_zoom_pane_g

0x669f,	// (0x00067b5e) grid_cams_pane

0x66ad,	// (0x00067b6c) linegrid_cams_pane

0x66bb,	// (0x00067b7a) cell_cams_pane_ParamLimits

0x66bb,	// (0x00067b7a) cell_cams_pane

0x0bb8,	// (0x00062077) cams_burst_image_pane

0x0bc0,	// (0x0006207f) cell_cams_pane_g1

0x0595,	// (0x00061a54) grid_highlight_pane_cp03

0x096c,	// (0x00061e2b) mp_bg_pane_g1

0x0595,	// (0x00061a54) bg_list_pane_cp03

0x9c84,	// (0x0006b143) bg_mp_pane

0x9c8c,	// (0x0006b14b) grid_mp_pane

0x9c94,	// (0x0006b153) media_player_g1

0x9c9c,	// (0x0006b15b) media_player_t1

0x9caa,	// (0x0006b169) media_player_t2

0x9cb8,	// (0x0006b177) media_player_t3

0x9cc6,	// (0x0006b185) media_player_t4

0x9cd4,	// (0x0006b193) media_player_t5

0x9ce2,	// (0x0006b1a1) media_player_t6

0x9cf0,	// (0x0006b1af) media_player_t7

0x0006,

0xf5fe,	// (0x00070abd) media_player_t

0x9cfe,	// (0x0006b1bd) wait_bar_pane_cp02

0xf5e3,	// (0x00070aa2) main_usb_pane_t

0x9d42,	// (0x0006b201) cell_mp_pane

0x096c,	// (0x00061e2b) cell_mp_pane_g1

0x0595,	// (0x00061a54) grid_highlight_pane_cp06

0x0bc8,	// (0x00062087) grid_skin_colour_pane

0x0bd0,	// (0x0006208f) list_highlight_pane_cp03

0x66ce,	// (0x00067b8d) skin_g1

0x0bd8,	// (0x00062097) skin_t1

0x0be7,	// (0x000620a6) skin_t2

0x0001,

0xf297,	// (0x00070756) skin_t

0x66d8,	// (0x00067b97) cell_skin_colour_pane_ParamLimits

0x66d8,	// (0x00067b97) cell_skin_colour_pane

0x0bf5,	// (0x000620b4) cell_skin_colour_pane_g1

0x6725,	// (0x00067be4) call_video_g1_ParamLimits

0x6725,	// (0x00067be4) call_video_g1

0x6735,	// (0x00067bf4) call_video_g2_ParamLimits

0x6735,	// (0x00067bf4) call_video_g2

0x0001,

0xf29c,	// (0x0007075b) call_video_g_ParamLimits

0xf29c,	// (0x0007075b) call_video_g

0x6773,	// (0x00067c32) call_video_uplink_pane_cp1_ParamLimits

0x6773,	// (0x00067c32) call_video_uplink_pane_cp1

0x0c0f,	// (0x000620ce) call_video_uplink_pane_cp2

0x681f,	// (0x00067cde) video_down_crop_pane_ParamLimits

0x681f,	// (0x00067cde) video_down_crop_pane

0x6903,	// (0x00067dc2) video_down_pane_ParamLimits

0x6903,	// (0x00067dc2) video_down_pane

0x0c17,	// (0x000620d6) video_down_subqcif_pane_ParamLimits

0x0c17,	// (0x000620d6) video_down_subqcif_pane

0x0c2f,	// (0x000620ee) video_down_subqcif_pane_cp_ParamLimits

0x0c2f,	// (0x000620ee) video_down_subqcif_pane_cp

0x0c53,	// (0x00062112) im_reading_pane_ParamLimits

0x0c53,	// (0x00062112) im_reading_pane

0x69e5,	// (0x00067ea4) im_writing_pane_ParamLimits

0x69e5,	// (0x00067ea4) im_writing_pane

0x6a03,	// (0x00067ec2) im_reading_pane_t1

0x0c6d,	// (0x0006212c) list_im_pane

0x0c7e,	// (0x0006213d) scroll_pane_cp07

0x6a57,	// (0x00067f16) im_writing_pane_t1_ParamLimits

0x6a57,	// (0x00067f16) im_writing_pane_t1

0x0c97,	// (0x00062156) im_writing_pane_t2_ParamLimits

0x0c97,	// (0x00062156) im_writing_pane_t2

0x0001,

0xf2a6,	// (0x00070765) im_writing_pane_t_ParamLimits

0xf2a6,	// (0x00070765) im_writing_pane_t

0x0595,	// (0x00061a54) input_focus_pane_cp04

0x0595,	// (0x00061a54) input_focus_pane_cp05

0x6a6c,	// (0x00067f2b) list_im_single_pane_ParamLimits

0x6a6c,	// (0x00067f2b) list_im_single_pane

0x6a90,	// (0x00067f4f) list_single_im_pane_t1

0x9d06,	// (0x0006b1c5) blid_accuracy_pane

0x9d0e,	// (0x0006b1cd) blid_compass_pane

0x9d18,	// (0x0006b1d7) main_location_t1

0x9d26,	// (0x0006b1e5) main_location_t2

0x9d34,	// (0x0006b1f3) main_location_t3

0x0002,

0xf60d,	// (0x00070acc) main_location_t

0x0595,	// (0x00061a54) aid_levels_location

0x096c,	// (0x00061e2b) blid_accuracy_pane_g1

0x096c,	// (0x00061e2b) blid_accuracy_pane_g2

0x0001,

0xf308,	// (0x000707c7) blid_accuracy_pane_g

0x0cdf,	// (0x0006219e) wml_content_pane

0x0d1d,	// (0x000621dc) wml_button_pane_ParamLimits

0x0d1d,	// (0x000621dc) wml_button_pane

0x6a9f,	// (0x00067f5e) wml_list_single_large_pane_ParamLimits

0x6a9f,	// (0x00067f5e) wml_list_single_large_pane

0x6ac9,	// (0x00067f88) wml_list_single_medium_pane_ParamLimits

0x6ac9,	// (0x00067f88) wml_list_single_medium_pane

0x6afa,	// (0x00067fb9) wml_list_single_small_pane_ParamLimits

0x6afa,	// (0x00067fb9) wml_list_single_small_pane

0x0d31,	// (0x000621f0) wml_selection_box_pane_ParamLimits

0x0d31,	// (0x000621f0) wml_selection_box_pane

0x0d44,	// (0x00062203) wml_list_single_pane_t1

0x0d53,	// (0x00062212) wml_list_single_medium_pane_t1

0x0d62,	// (0x00062221) wml_list_single_large_pane_t1

0x0d71,	// (0x00062230) input_focus_pane_cp02_ParamLimits

0x0d71,	// (0x00062230) input_focus_pane_cp02

0x0d84,	// (0x00062243) wml_selection_box_pane_g1

0x0d8d,	// (0x0006224c) wml_selection_box_pane_t1_ParamLimits

0x0d8d,	// (0x0006224c) wml_selection_box_pane_t1

0x07f0,	// (0x00061caf) bg_wml_button_pane_ParamLimits

0x07f0,	// (0x00061caf) bg_wml_button_pane

0x0da5,	// (0x00062264) wml_button_pane_g1

0x0dad,	// (0x0006226c) wml_button_pane_t1

0x0da5,	// (0x00062264) wml_button_bg_pane_g1

0x0dbd,	// (0x0006227c) wml_button_bg_pane_g2

0x0dc5,	// (0x00062284) wml_button_bg_pane_g3

0x0dcd,	// (0x0006228c) wml_button_bg_pane_g4

0x0dd5,	// (0x00062294) wml_button_bg_pane_g5

0x0ddd,	// (0x0006229c) wml_button_bg_pane_g6

0x0de5,	// (0x000622a4) wml_button_bg_pane_g7

0x0ded,	// (0x000622ac) wml_button_bg_pane_g8

0x0df5,	// (0x000622b4) wml_button_bg_pane_g9

0x0008,

0xf2ab,	// (0x0007076a) wml_button_bg_pane_g

0x6b34,	// (0x00067ff3) bg_list_pane_cp02

0x0dfd,	// (0x000622bc) mce_header_pane_ParamLimits

0x0dfd,	// (0x000622bc) mce_header_pane

0x0e13,	// (0x000622d2) mce_icon_pane

0x0e13,	// (0x000622d2) mce_image_pane

0x0e1c,	// (0x000622db) mce_text_pane_ParamLimits

0x0e1c,	// (0x000622db) mce_text_pane

0x6b3e,	// (0x00067ffd) scroll_pane_cp03

0x0d15,	// (0x000621d4) scroll_pane_cp04

0x0e2f,	// (0x000622ee) scroll_pane_cp05_ParamLimits

0x0e2f,	// (0x000622ee) scroll_pane_cp05

0x6b48,	// (0x00068007) mce_header_field_pane_ParamLimits

0x6b48,	// (0x00068007) mce_header_field_pane

0x6b68,	// (0x00068027) mce_header_field_pane_2_ParamLimits

0x6b68,	// (0x00068027) mce_header_field_pane_2

0x6b7e,	// (0x0006803d) mce_header_field_pane_3

0x6b86,	// (0x00068045) list_single_mce_message_pane_ParamLimits

0x6b86,	// (0x00068045) list_single_mce_message_pane

0x6bab,	// (0x0006806a) list_single_mce_smart_pane_ParamLimits

0x6bab,	// (0x0006806a) list_single_mce_smart_pane

0x0e3b,	// (0x000622fa) input_focus_pane_cp03

0x0e44,	// (0x00062303) list_header_data_pane

0x6bdb,	// (0x0006809a) mce_header_field_pane_t1

0x6be9,	// (0x000680a8) list_single_mce_header_pane_ParamLimits

0x6be9,	// (0x000680a8) list_single_mce_header_pane

0x0e4c,	// (0x0006230b) list_single_mce_header_pane_t1

0x0e5b,	// (0x0006231a) list_single_mce_message_pane_g1

0x0e63,	// (0x00062322) list_single_mce_message_pane_t1

0x6c2d,	// (0x000680ec) bg_cale_heading_pane_cp01_ParamLimits

0x6c2d,	// (0x000680ec) bg_cale_heading_pane_cp01

0x0e71,	// (0x00062330) bg_cale_pane_cp02_ParamLimits

0x0e71,	// (0x00062330) bg_cale_pane_cp02

0x6c50,	// (0x0006810f) cale_month_corner_pane

0x6c66,	// (0x00068125) cale_month_day_heading_pane_ParamLimits

0x6c66,	// (0x00068125) cale_month_day_heading_pane

0x6c99,	// (0x00068158) cale_month_pane_g1_ParamLimits

0x6c99,	// (0x00068158) cale_month_pane_g1

0x6cb5,	// (0x00068174) cale_month_pane_g2_ParamLimits

0x6cb5,	// (0x00068174) cale_month_pane_g2

0x6cd0,	// (0x0006818f) cale_month_pane_g3_ParamLimits

0x6cd0,	// (0x0006818f) cale_month_pane_g3

0x6cfc,	// (0x000681bb) cale_month_pane_g4_ParamLimits

0x6cfc,	// (0x000681bb) cale_month_pane_g4

0x6d28,	// (0x000681e7) cale_month_pane_g5_ParamLimits

0x6d28,	// (0x000681e7) cale_month_pane_g5

0x6d54,	// (0x00068213) cale_month_pane_g6_ParamLimits

0x6d54,	// (0x00068213) cale_month_pane_g6

0x6d80,	// (0x0006823f) cale_month_pane_g7_ParamLimits

0x6d80,	// (0x0006823f) cale_month_pane_g7

0x6dbc,	// (0x0006827b) cale_month_pane_g8_ParamLimits

0x6dbc,	// (0x0006827b) cale_month_pane_g8

0x6df8,	// (0x000682b7) cale_month_pane_g9_ParamLimits

0x6df8,	// (0x000682b7) cale_month_pane_g9

0x6e32,	// (0x000682f1) cale_month_pane_g10_ParamLimits

0x6e32,	// (0x000682f1) cale_month_pane_g10

0x6e6c,	// (0x0006832b) cale_month_pane_g11_ParamLimits

0x6e6c,	// (0x0006832b) cale_month_pane_g11

0x6ea6,	// (0x00068365) cale_month_pane_g12_ParamLimits

0x6ea6,	// (0x00068365) cale_month_pane_g12

0x6ee0,	// (0x0006839f) cale_month_pane_g13_ParamLimits

0x6ee0,	// (0x0006839f) cale_month_pane_g13

0x000c,

0xf2be,	// (0x0007077d) cale_month_pane_g_ParamLimits

0xf2be,	// (0x0007077d) cale_month_pane_g

0x6f1a,	// (0x000683d9) cale_month_week_pane

0x6f2d,	// (0x000683ec) grid_cale_month_pane_ParamLimits

0x6f2d,	// (0x000683ec) grid_cale_month_pane

0x6f5b,	// (0x0006841a) cale_month_day_heading_pane_t1

0x6fb9,	// (0x00068478) cale_month_day_heading_pane_t2

0x701e,	// (0x000684dd) cale_month_day_heading_pane_t3

0x7083,	// (0x00068542) cale_month_day_heading_pane_t4

0x70e8,	// (0x000685a7) cale_month_day_heading_pane_t5

0x714d,	// (0x0006860c) cale_month_day_heading_pane_t6

0x71b2,	// (0x00068671) cale_month_day_heading_pane_t7

0x0006,

0xf2d9,	// (0x00070798) cale_month_day_heading_pane_t

0x0a9f,	// (0x00061f5e) bg_cale_side_pane_cp01

0x7227,	// (0x000686e6) cale_month_week_pane_t1

0x723e,	// (0x000686fd) cale_month_week_pane_t2

0x7255,	// (0x00068714) cale_month_week_pane_t3

0x726c,	// (0x0006872b) cale_month_week_pane_t4

0x7283,	// (0x00068742) cale_month_week_pane_t5

0x729a,	// (0x00068759) cale_month_week_pane_t6

0x0005,

0xf2e8,	// (0x000707a7) cale_month_week_pane_t

0x72b1,	// (0x00068770) cell_cale_month_pane_ParamLimits

0x72b1,	// (0x00068770) cell_cale_month_pane

0x7367,	// (0x00068826) cell_cale_month_pane_g1

0x7373,	// (0x00068832) cell_cale_month_pane_t1_ParamLimits

0x7373,	// (0x00068832) cell_cale_month_pane_t1

0x0aad,	// (0x00061f6c) grid_highlight_pane_cp08

0x096c,	// (0x00061e2b) main_smil_g1

0x738f,	// (0x0006884e) smil_status_pane

0x0eb2,	// (0x00062371) smil_text_pane

0x9b24,	// (0x0006afe3) bg_popup_call3_rect_pane_g8

0x9b2c,	// (0x0006afeb) bg_popup_call3_rect_pane_g9

0x0008,

0xf5a1,	// (0x00070a60) bg_popup_call3_rect_pane_g

0xa20d,	// (0x0006b6cc) smil_status_volume_pane_g1

0x0ebc,	// (0x0006237b) smil_status_pane_t1

0xa240,	// (0x0006b6ff) volume_smil_pane

0x73ab,	// (0x0006886a) list_smil_text_pane

0x73b5,	// (0x00068874) scroll_pane_cp011

0x73c0,	// (0x0006887f) smil_text_list_pane_t1_ParamLimits

0x73c0,	// (0x0006887f) smil_text_list_pane_t1

0x7438,	// (0x000688f7) aid_volume_smil_ParamLimits

0x7438,	// (0x000688f7) aid_volume_smil

0x096c,	// (0x00061e2b) smil_volume_pane_g1

0x096c,	// (0x00061e2b) smil_volume_pane_g2

0x0001,

0xf308,	// (0x000707c7) smil_volume_pane_g

0x08f3,	// (0x00061db2) listscroll_cale_day_pane

0x745a,	// (0x00068919) bg_cale_pane

0x7472,	// (0x00068931) list_cale_pane

0x7483,	// (0x00068942) scroll_pane_cp09

0x7494,	// (0x00068953) cale_bg_pane_g1

0x749c,	// (0x0006895b) cale_bg_pane_g2

0x74a4,	// (0x00068963) cale_bg_pane_g3

0x74ac,	// (0x0006896b) cale_bg_pane_g4

0x74b4,	// (0x00068973) cale_bg_pane_g5

0x74bc,	// (0x0006897b) cale_bg_pane_g6

0x74c4,	// (0x00068983) cale_bg_pane_g7

0x74cc,	// (0x0006898b) cale_bg_pane_g8

0x74d4,	// (0x00068993) cale_bg_pane_g9

0x0008,

0xf30d,	// (0x000707cc) cale_bg_pane_g

0x74dc,	// (0x0006899b) list_cale_time_pane_ParamLimits

0x74dc,	// (0x0006899b) list_cale_time_pane

0x74f8,	// (0x000689b7) list_cale_time_pane_g1_ParamLimits

0x74f8,	// (0x000689b7) list_cale_time_pane_g1

0x7504,	// (0x000689c3) list_cale_time_pane_g2_ParamLimits

0x7504,	// (0x000689c3) list_cale_time_pane_g2

0x7511,	// (0x000689d0) list_cale_time_pane_g3_ParamLimits

0x7511,	// (0x000689d0) list_cale_time_pane_g3

0x751f,	// (0x000689de) list_cale_time_pane_g4_ParamLimits

0x751f,	// (0x000689de) list_cale_time_pane_g4

0x752d,	// (0x000689ec) list_cale_time_pane_g5_ParamLimits

0x752d,	// (0x000689ec) list_cale_time_pane_g5

0x0005,

0xf320,	// (0x000707df) list_cale_time_pane_g_ParamLimits

0xf320,	// (0x000707df) list_cale_time_pane_g

0x7548,	// (0x00068a07) list_cale_time_pane_t1_ParamLimits

0x7548,	// (0x00068a07) list_cale_time_pane_t1

0x7570,	// (0x00068a2f) list_cale_time_pane_t2_ParamLimits

0x7570,	// (0x00068a2f) list_cale_time_pane_t2

0x7c71,	// (0x00069130) aid_blid_cardinal_pane

0x7cbf,	// (0x0006917e) compass_pane_t4

0x7598,	// (0x00068a57) list_cale_time_pane_t4_ParamLimits

0x7598,	// (0x00068a57) list_cale_time_pane_t4

0x7ccd,	// (0x0006918c) compass_pane_t5

0x7cdd,	// (0x0006919c) compass_pane_t6

0x7ceb,	// (0x000691aa) compass_pane_t7

0x7d6d,	// (0x0006922c) navi_pane_cc_t1

0x7f88,	// (0x00069447) aid_phob_thumbnail_center_pane

0x8616,	// (0x00069ad5) main_postcard_pane_g4_ParamLimits

0x0002,

0xf32d,	// (0x000707ec) list_cale_time_pane_t_ParamLimits

0xf32d,	// (0x000707ec) list_cale_time_pane_t

0x01ec,	// (0x000616ab) bg_popup_window_pane_cp02_ParamLimits

0x01ec,	// (0x000616ab) bg_popup_window_pane_cp02

0x75c0,	// (0x00068a7f) heading_pane_cp01_ParamLimits

0x75c0,	// (0x00068a7f) heading_pane_cp01

0x75cc,	// (0x00068a8b) loc_req_pane_ParamLimits

0x75cc,	// (0x00068a8b) loc_req_pane

0x75dc,	// (0x00068a9b) loc_type_pane_ParamLimits

0x75dc,	// (0x00068a9b) loc_type_pane

0x75ee,	// (0x00068aad) loc_type_pane_t1_ParamLimits

0x75ee,	// (0x00068aad) loc_type_pane_t1

0x7600,	// (0x00068abf) loc_type_pane_t2_ParamLimits

0x7600,	// (0x00068abf) loc_type_pane_t2

0x7612,	// (0x00068ad1) loc_type_pane_t3_ParamLimits

0x7612,	// (0x00068ad1) loc_type_pane_t3

0x0002,

0xf334,	// (0x000707f3) loc_type_pane_t_ParamLimits

0xf334,	// (0x000707f3) loc_type_pane_t

0x7624,	// (0x00068ae3) list_loc_req_pane

0x762e,	// (0x00068aed) scroll_pane_cp012

0x7639,	// (0x00068af8) list_single_loc_request_popup_menu_pane_ParamLimits

0x7639,	// (0x00068af8) list_single_loc_request_popup_menu_pane

0x764b,	// (0x00068b0a) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0x764b,	// (0x00068b0a) list_single_loc_request_popup_menu_pane_g1

0x7657,	// (0x00068b16) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0x7657,	// (0x00068b16) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf33b,	// (0x000707fa) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf33b,	// (0x000707fa) list_single_loc_request_popup_menu_pane_g

0x7663,	// (0x00068b22) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0x7663,	// (0x00068b22) list_single_loc_request_popup_menu_pane_t1

0x7679,	// (0x00068b38) bg_popup_window_pane_cp03_ParamLimits

0x7679,	// (0x00068b38) bg_popup_window_pane_cp03

0x7687,	// (0x00068b46) heading_loc_req_pane_ParamLimits

0x7687,	// (0x00068b46) heading_loc_req_pane

0x7693,	// (0x00068b52) popup_dyc_status_message_window_g1_ParamLimits

0x7693,	// (0x00068b52) popup_dyc_status_message_window_g1

0x769f,	// (0x00068b5e) popup_dyc_status_message_window_t1_ParamLimits

0x769f,	// (0x00068b5e) popup_dyc_status_message_window_t1

0x76b1,	// (0x00068b70) popup_dyc_status_message_window_t2_ParamLimits

0x76b1,	// (0x00068b70) popup_dyc_status_message_window_t2

0x76c3,	// (0x00068b82) popup_dyc_status_message_window_t3_ParamLimits

0x76c3,	// (0x00068b82) popup_dyc_status_message_window_t3

0x0002,

0xf340,	// (0x000707ff) popup_dyc_status_message_window_t_ParamLimits

0xf340,	// (0x000707ff) popup_dyc_status_message_window_t

0x0595,	// (0x00061a54) bg_heading_pane_cp01

0x76d5,	// (0x00068b94) heading_loc_req_pane_g1

0x76dd,	// (0x00068b9c) heading_loc_req_pane_g2

0x76e5,	// (0x00068ba4) heading_loc_req_pane_g3

0x0002,

0xf347,	// (0x00070806) heading_loc_req_pane_g

0x76ed,	// (0x00068bac) heading_loc_req_pane_t1

0x7714,	// (0x00068bd3) bg_popup_sub_pane_cp01_ParamLimits

0x7714,	// (0x00068bd3) bg_popup_sub_pane_cp01

0x7722,	// (0x00068be1) popup_cale_events_window_g1_ParamLimits

0x7722,	// (0x00068be1) popup_cale_events_window_g1

0x7742,	// (0x00068c01) popup_cale_events_window_g2_ParamLimits

0x7742,	// (0x00068c01) popup_cale_events_window_g2

0x0001,

0xf37b,	// (0x0007083a) popup_cale_events_window_g_ParamLimits

0xf37b,	// (0x0007083a) popup_cale_events_window_g

0x7762,	// (0x00068c21) popup_cale_events_window_t1_ParamLimits

0x7762,	// (0x00068c21) popup_cale_events_window_t1

0x7774,	// (0x00068c33) popup_cale_events_window_t2_ParamLimits

0x7774,	// (0x00068c33) popup_cale_events_window_t2

0x77b2,	// (0x00068c71) popup_cale_events_window_t3_ParamLimits

0x77b2,	// (0x00068c71) popup_cale_events_window_t3

0x77ec,	// (0x00068cab) popup_cale_events_window_t4_ParamLimits

0x77ec,	// (0x00068cab) popup_cale_events_window_t4

0x0003,

0xf380,	// (0x0007083f) popup_cale_events_window_t_ParamLimits

0xf380,	// (0x0007083f) popup_cale_events_window_t

0x7822,	// (0x00068ce1) call_type_pane

0x782e,	// (0x00068ced) popup_call_status_window_g1

0x783c,	// (0x00068cfb) popup_call_status_window_g2

0x7848,	// (0x00068d07) popup_call_status_window_g3

0x0002,

0xf389,	// (0x00070848) popup_call_status_window_g

0x7854,	// (0x00068d13) call_type_pane_g1

0x785d,	// (0x00068d1c) call_type_pane_g2

0x0001,

0xf390,	// (0x0007084f) call_type_pane_g

0x0595,	// (0x00061a54) bg_popup_sub_pane_cp02

0x7866,	// (0x00068d25) listscroll_popup_wml_pane

0x786e,	// (0x00068d2d) list_wml_pane

0x7878,	// (0x00068d37) scroll_pane_cp013

0x7883,	// (0x00068d42) list_single_graphic_popup_wml_pane_ParamLimits

0x7883,	// (0x00068d42) list_single_graphic_popup_wml_pane

0x096c,	// (0x00061e2b) list_single_graphic_popup_wml_pane_g1

0x7897,	// (0x00068d56) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf395,	// (0x00070854) list_single_graphic_popup_wml_pane_g

0x789f,	// (0x00068d5e) list_single_graphic_popup_wml_pane_t1

0x78b5,	// (0x00068d74) aid_call_pane

0x07e8,	// (0x00061ca7) popup_clock_analogue_window_g1

0x07e8,	// (0x00061ca7) popup_clock_analogue_window_g2

0x78bd,	// (0x00068d7c) popup_clock_analogue_window_g3

0x78bd,	// (0x00068d7c) popup_clock_analogue_window_g4

0x096c,	// (0x00061e2b) popup_clock_analogue_window_g5

0x0004,

0xf39a,	// (0x00070859) popup_clock_analogue_window_g

0x78c5,	// (0x00068d84) popup_clock_analogue_window_t1

0x78d3,	// (0x00068d92) clock_digital_number_pane_ParamLimits

0x78d3,	// (0x00068d92) clock_digital_number_pane

0x78df,	// (0x00068d9e) clock_digital_number_pane_cp02_ParamLimits

0x78df,	// (0x00068d9e) clock_digital_number_pane_cp02

0x78eb,	// (0x00068daa) clock_digital_number_pane_cp03_ParamLimits

0x78eb,	// (0x00068daa) clock_digital_number_pane_cp03

0x78f7,	// (0x00068db6) clock_digital_number_pane_cp04_ParamLimits

0x78f7,	// (0x00068db6) clock_digital_number_pane_cp04

0x7907,	// (0x00068dc6) clock_digital_separator_pane_ParamLimits

0x7907,	// (0x00068dc6) clock_digital_separator_pane

0x7913,	// (0x00068dd2) popup_clock_digital_window_t1

0x096c,	// (0x00061e2b) clock_digital_number_pane_g1

0x096c,	// (0x00061e2b) clock_digital_number_pane_g2

0x0001,

0xf308,	// (0x000707c7) clock_digital_number_pane_g

0x096c,	// (0x00061e2b) clock_digital_separator_pane_g1

0x096c,	// (0x00061e2b) clock_digital_separator_pane_g2

0x0001,

0xf308,	// (0x000707c7) clock_digital_separator_pane_g

0x0595,	// (0x00061a54) bg_popup_window_pane_cp04

0x7930,	// (0x00068def) heading_pane_cp03

0x7938,	// (0x00068df7) listscroll_popup_gms_pane

0x7940,	// (0x00068dff) grid_large_graphic_popup_pane

0x794a,	// (0x00068e09) listscroll_popup_gms_pane_g1

0x7952,	// (0x00068e11) listscroll_popup_gms_pane_g2

0x0001,

0xf3a5,	// (0x00070864) listscroll_popup_gms_pane_g

0x0d15,	// (0x000621d4) scroll_pane_cp014

0x795a,	// (0x00068e19) cell_large_graphic_popup_pane_ParamLimits

0x795a,	// (0x00068e19) cell_large_graphic_popup_pane

0x7972,	// (0x00068e31) cell_large_graphic_popup_pane_g1_ParamLimits

0x7972,	// (0x00068e31) cell_large_graphic_popup_pane_g1

0x797e,	// (0x00068e3d) cell_large_graphic_popup_pane_g2_ParamLimits

0x797e,	// (0x00068e3d) cell_large_graphic_popup_pane_g2

0x798a,	// (0x00068e49) cell_large_graphic_popup_pane_g3_ParamLimits

0x798a,	// (0x00068e49) cell_large_graphic_popup_pane_g3

0x7997,	// (0x00068e56) cell_large_graphic_popup_pane_g4_ParamLimits

0x7997,	// (0x00068e56) cell_large_graphic_popup_pane_g4

0x0003,

0xf3aa,	// (0x00070869) cell_large_graphic_popup_pane_g_ParamLimits

0xf3aa,	// (0x00070869) cell_large_graphic_popup_pane_g

0x79a7,	// (0x00068e66) grid_highlight_pane_cp010

0x096c,	// (0x00061e2b) bg_popup_call_pane_g1

0x79b1,	// (0x00068e70) list_single_graphic_popup_conf_pane_ParamLimits

0x79b1,	// (0x00068e70) list_single_graphic_popup_conf_pane

0x79c4,	// (0x00068e83) list_highlight_pane_cp01

0x79cd,	// (0x00068e8c) list_single_graphic_popup_conf_pane_g1

0x79d5,	// (0x00068e94) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3b3,	// (0x00070872) list_single_graphic_popup_conf_pane_g

0x79dd,	// (0x00068e9c) list_single_graphic_popup_conf_pane_t1

0x79eb,	// (0x00068eaa) linegrid_cams_pane_g1

0x79f4,	// (0x00068eb3) linegrid_cams_pane_g2

0x0ae0,	// (0x00061f9f) linegrid_cams_pane_g3

0x79fd,	// (0x00068ebc) linegrid_cams_pane_g4

0x7a06,	// (0x00068ec5) linegrid_cams_pane_g5

0x7a0f,	// (0x00068ece) linegrid_cams_pane_g6

0x0ae9,	// (0x00061fa8) linegrid_cams_pane_g7

0x0006,

0xf3b8,	// (0x00070877) linegrid_cams_pane_g

0x7a18,	// (0x00068ed7) popup_clock_analogue_window

0x7a18,	// (0x00068ed7) popup_clock_digital_window

0x0595,	// (0x00061a54) popup_phob_thumbnail_window

0x096c,	// (0x00061e2b) call_video_uplink_pane_g1

0x7a21,	// (0x00068ee0) call_video_uplink_pane_g2

0x0001,

0xf3c7,	// (0x00070886) call_video_uplink_pane_g

0x7a29,	// (0x00068ee8) video_uplink_pane

0x7a31,	// (0x00068ef0) mce_image_pane_g1

0x7a3b,	// (0x00068efa) mce_image_pane_g2

0x7a45,	// (0x00068f04) mce_image_pane_g3

0x7a4d,	// (0x00068f0c) mce_image_pane_g4

0x7a55,	// (0x00068f14) mce_image_pane_g5

0x0004,

0xf3cc,	// (0x0007088b) mce_image_pane_g

0x7a5d,	// (0x00068f1c) control_top_pane_stacon_cp01_ParamLimits

0x7a5d,	// (0x00068f1c) control_top_pane_stacon_cp01

0x7a71,	// (0x00068f30) uni_indicator_pane_stacon_cp01_ParamLimits

0x7a71,	// (0x00068f30) uni_indicator_pane_stacon_cp01

0x7a82,	// (0x00068f41) bg_popup_sub_pane_cp03

0x7a8c,	// (0x00068f4b) chi_dic_find_pane

0x7a94,	// (0x00068f53) listscroll_chi_dic_pane

0x7a9d,	// (0x00068f5c) main_pane_chidic_g1

0x7ab0,	// (0x00068f6f) chi_dic_find_pane_t1

0x7abe,	// (0x00068f7d) find_chidic_pane

0x7ac7,	// (0x00068f86) chi_dic_list_pane_ParamLimits

0x7ac7,	// (0x00068f86) chi_dic_list_pane

0x7ad8,	// (0x00068f97) scroll_pane_cp020

0x7ae0,	// (0x00068f9f) find_chidic_pane_t1

0x0595,	// (0x00061a54) input_focus_pane_cp06

0x7aef,	// (0x00068fae) list_chi_dic_pane_ParamLimits

0x7aef,	// (0x00068fae) list_chi_dic_pane

0x7b09,	// (0x00068fc8) list_chi_dic_pane_t1_ParamLimits

0x7b09,	// (0x00068fc8) list_chi_dic_pane_t1

0x0595,	// (0x00061a54) list_highlight_pane_cp020

0x7b1c,	// (0x00068fdb) bg_cale_heading_pane_g1

0x7b24,	// (0x00068fe3) bg_cale_heading_pane_g2

0x7b2c,	// (0x00068feb) bg_cale_heading_pane_g3

0x7b34,	// (0x00068ff3) bg_cale_heading_pane_g4

0x7b3e,	// (0x00068ffd) bg_cale_heading_pane_g5

0x7b48,	// (0x00069007) bg_cale_heading_pane_g6

0x7b50,	// (0x0006900f) bg_cale_heading_pane_g7

0x7b58,	// (0x00069017) bg_cale_heading_pane_g8

0x7b62,	// (0x00069021) bg_cale_heading_pane_g9

0x0008,

0xf3d7,	// (0x00070896) bg_cale_heading_pane_g

0x7b1c,	// (0x00068fdb) bg_cale_side_pane_g1

0x7b6c,	// (0x0006902b) bg_cale_side_pane_g2

0x7b74,	// (0x00069033) bg_cale_side_pane_g3

0x7b7c,	// (0x0006903b) bg_cale_side_pane_g4

0x7b84,	// (0x00069043) bg_cale_side_pane_g5

0x7b8c,	// (0x0006904b) bg_cale_side_pane_g6

0x7b94,	// (0x00069053) bg_cale_side_pane_g7

0x7b9c,	// (0x0006905b) bg_cale_side_pane_g8

0x7ba4,	// (0x00069063) bg_cale_side_pane_g9

0x0008,

0xf3ea,	// (0x000708a9) bg_cale_side_pane_g

0x7bac,	// (0x0006906b) popup_call_status_window_ParamLimits

0x7bac,	// (0x0006906b) popup_call_status_window

0x7bb8,	// (0x00069077) stacon_top_pane

0x7bc0,	// (0x0006907f) status_pane_ParamLimits

0x7bc0,	// (0x0006907f) status_pane

0x7bd5,	// (0x00069094) status_small_pane

0x7bdd,	// (0x0006909c) control_pane

0x0595,	// (0x00061a54) stacon_bottom_pane

0x7be5,	// (0x000690a4) list_single_mce_smart_pane_t1_ParamLimits

0x7be5,	// (0x000690a4) list_single_mce_smart_pane_t1

0x7bf8,	// (0x000690b7) list_single_mce_smart_pane_t2_ParamLimits

0x7bf8,	// (0x000690b7) list_single_mce_smart_pane_t2

0x0001,

0xf3fd,	// (0x000708bc) list_single_mce_smart_pane_t_ParamLimits

0xf3fd,	// (0x000708bc) list_single_mce_smart_pane_t

0x7c17,	// (0x000690d6) compass_pane

0x7c23,	// (0x000690e2) main_location2_pane_t1

0x7c37,	// (0x000690f6) main_location2_pane_t2

0x7c4b,	// (0x0006910a) main_location2_pane_t3

0x0003,

0xf402,	// (0x000708c1) main_location2_pane_t

0x7c95,	// (0x00069154) compass_pane_g1_ParamLimits

0x7c95,	// (0x00069154) compass_pane_g1

0x7ca1,	// (0x00069160) compass_pane_t1

0x7cb0,	// (0x0006916f) compass_pane_t2

0x0005,

0xf40b,	// (0x000708ca) compass_pane_t

0x7cfb,	// (0x000691ba) text_secondary_cp61

0x7d64,	// (0x00069223) navi_pane_cams_g5

0x7de0,	// (0x0006929f) navi_pane_im_t1

0x7dee,	// (0x000692ad) navi_pane_mp_g1_ParamLimits

0x7dee,	// (0x000692ad) navi_pane_mp_g1

0x7e02,	// (0x000692c1) navi_pane_mp_g2_ParamLimits

0x7e02,	// (0x000692c1) navi_pane_mp_g2

0x7e0e,	// (0x000692cd) navi_pane_mp_g3_ParamLimits

0x7e0e,	// (0x000692cd) navi_pane_mp_g3

0x0002,

0xf41f,	// (0x000708de) navi_pane_mp_g_ParamLimits

0xf41f,	// (0x000708de) navi_pane_mp_g

0x7e1a,	// (0x000692d9) navi_pane_mp_t1

0x7e28,	// (0x000692e7) navi_pane_mp_t2

0x0002,

0xf426,	// (0x000708e5) navi_pane_mp_t

0x7ebf,	// (0x0006937e) navi_pane_vt_g1

0x7e1a,	// (0x000692d9) navi_pane_vt_t1

0x7ec7,	// (0x00069386) navi_slider_pane

0x7ecf,	// (0x0006938e) zooming_pane

0x7ed7,	// (0x00069396) navi_slider_pane_g1

0x7ee0,	// (0x0006939f) navi_slider_pane_g2

0x0006,

0xf42d,	// (0x000708ec) navi_slider_pane_g

0x7f0d,	// (0x000693cc) aid_levels_zoom

0x7f15,	// (0x000693d4) zooming_pane_g1

0x7f1d,	// (0x000693dc) zooming_pane_g2

0x7f1d,	// (0x000693dc) zooming_pane_g3

0x0002,

0xf43c,	// (0x000708fb) zooming_pane_g

0x7f25,	// (0x000693e4) level_10_zoom

0x7f2e,	// (0x000693ed) level_11_zoom

0x7f37,	// (0x000693f6) level_1_zoom

0x7f40,	// (0x000693ff) level_2_zoom

0x7f49,	// (0x00069408) level_3_zoom

0x7f52,	// (0x00069411) level_4_zoom

0x7f5b,	// (0x0006941a) level_5_zoom

0x7f64,	// (0x00069423) level_6_zoom

0x7f6d,	// (0x0006942c) level_7_zoom

0x7f76,	// (0x00069435) level_8_zoom

0x7f7f,	// (0x0006943e) level_9_zoom

0x7f90,	// (0x0006944f) popup_phob_thumbnail_window_g1

0x7f98,	// (0x00069457) popup_phob_thumbnail_window_g2

0x0001,

0xf443,	// (0x00070902) popup_phob_thumbnail_window_g

0x9da3,	// (0x0006b262) level_1_location

0x9dab,	// (0x0006b26a) level_2_location

0x9db3,	// (0x0006b272) level_3_location

0x9dbb,	// (0x0006b27a) level_4_location

0x7ecf,	// (0x0006938e) level_5_location

0x7fa0,	// (0x0006945f) mce_icon_pane_g1

0x7fa8,	// (0x00069467) mce_icon_pane_g2

0x0001,

0xf448,	// (0x00070907) mce_icon_pane_g

0x7fb0,	// (0x0006946f) main_mup_pane_g1_ParamLimits

0x7fb0,	// (0x0006946f) main_mup_pane_g1

0x7fc8,	// (0x00069487) main_mup_pane_g2_ParamLimits

0x7fc8,	// (0x00069487) main_mup_pane_g2

0x7fe4,	// (0x000694a3) main_mup_pane_g3_ParamLimits

0x7fe4,	// (0x000694a3) main_mup_pane_g3

0x8000,	// (0x000694bf) main_mup_pane_g4_ParamLimits

0x8000,	// (0x000694bf) main_mup_pane_g4

0x801c,	// (0x000694db) main_mup_pane_g5_ParamLimits

0x801c,	// (0x000694db) main_mup_pane_g5

0x803d,	// (0x000694fc) main_mup_pane_g6_ParamLimits

0x803d,	// (0x000694fc) main_mup_pane_g6

0x8059,	// (0x00069518) main_mup_pane_g7_ParamLimits

0x8059,	// (0x00069518) main_mup_pane_g7

0x8075,	// (0x00069534) main_mup_pane_g8_ParamLimits

0x8075,	// (0x00069534) main_mup_pane_g8

0x8095,	// (0x00069554) main_mup_pane_g9_ParamLimits

0x8095,	// (0x00069554) main_mup_pane_g9

0x80b4,	// (0x00069573) main_mup_pane_g10_ParamLimits

0x80b4,	// (0x00069573) main_mup_pane_g10

0x80d3,	// (0x00069592) main_mup_pane_g11_ParamLimits

0x80d3,	// (0x00069592) main_mup_pane_g11

0x80eb,	// (0x000695aa) main_mup_pane_g12_ParamLimits

0x80eb,	// (0x000695aa) main_mup_pane_g12

0x80f9,	// (0x000695b8) main_mup_pane_g13_ParamLimits

0x80f9,	// (0x000695b8) main_mup_pane_g13

0x000c,

0xf44d,	// (0x0007090c) main_mup_pane_g_ParamLimits

0xf44d,	// (0x0007090c) main_mup_pane_g

0x810f,	// (0x000695ce) main_mup_pane_t1_ParamLimits

0x810f,	// (0x000695ce) main_mup_pane_t1

0x812c,	// (0x000695eb) main_mup_pane_t2_ParamLimits

0x812c,	// (0x000695eb) main_mup_pane_t2

0x8146,	// (0x00069605) main_mup_pane_t3_ParamLimits

0x8146,	// (0x00069605) main_mup_pane_t3

0x8160,	// (0x0006961f) main_mup_pane_t4_ParamLimits

0x8160,	// (0x0006961f) main_mup_pane_t4

0x8172,	// (0x00069631) main_mup_pane_t5_ParamLimits

0x8172,	// (0x00069631) main_mup_pane_t5

0x8184,	// (0x00069643) main_mup_pane_t6_ParamLimits

0x8184,	// (0x00069643) main_mup_pane_t6

0x0005,

0xf468,	// (0x00070927) main_mup_pane_t_ParamLimits

0xf468,	// (0x00070927) main_mup_pane_t

0x819a,	// (0x00069659) mup_progress_pane_ParamLimits

0x819a,	// (0x00069659) mup_progress_pane

0x81a6,	// (0x00069665) mup_visualizer_pane_ParamLimits

0x81a6,	// (0x00069665) mup_visualizer_pane

0x81e0,	// (0x0006969f) mup_volume_pane_ParamLimits

0x81e0,	// (0x0006969f) mup_volume_pane

0x782e,	// (0x00068ced) mup_visualizer_pane_g1_ParamLimits

0x782e,	// (0x00068ced) mup_visualizer_pane_g1

0x782e,	// (0x00068ced) mup_visualizer_pane_g2_ParamLimits

0x782e,	// (0x00068ced) mup_visualizer_pane_g2

0x7c95,	// (0x00069154) mup_visualizer_pane_g3_ParamLimits

0x7c95,	// (0x00069154) mup_visualizer_pane_g3

0x0002,

0xf475,	// (0x00070934) mup_visualizer_pane_g_ParamLimits

0xf475,	// (0x00070934) mup_visualizer_pane_g

0x096c,	// (0x00061e2b) mup_volume_pane_g1

0x820b,	// (0x000696ca) mup_volume_pane_g2

0x0001,

0xf47c,	// (0x0007093b) mup_volume_pane_g

0x096c,	// (0x00061e2b) mup_progress_pane_g1

0x8214,	// (0x000696d3) mup_progress_pane_g2

0x821d,	// (0x000696dc) mup_progress_pane_g3

0x0002,

0xf481,	// (0x00070940) mup_progress_pane_g

0x0595,	// (0x00061a54) bg_popup_window_pane_cp05

0x8226,	// (0x000696e5) heading_pane_cp02_ParamLimits

0x8226,	// (0x000696e5) heading_pane_cp02

0x8240,	// (0x000696ff) list_popup_blid_pane

0x8248,	// (0x00069707) list_blid_sat_info_pane_ParamLimits

0x8248,	// (0x00069707) list_blid_sat_info_pane

0x825b,	// (0x0006971a) list_blid_sat_info_pane_g1

0x8263,	// (0x00069722) list_blid_sat_info_pane_t1

0x835b,	// (0x0006981a) mup_equalizer_pane_ParamLimits

0x835b,	// (0x0006981a) mup_equalizer_pane

0x837c,	// (0x0006983b) mup_equalizer_pane_cp1_ParamLimits

0x837c,	// (0x0006983b) mup_equalizer_pane_cp1

0x839d,	// (0x0006985c) mup_equalizer_pane_cp2_ParamLimits

0x839d,	// (0x0006985c) mup_equalizer_pane_cp2

0x83be,	// (0x0006987d) mup_equalizer_pane_cp3_ParamLimits

0x83be,	// (0x0006987d) mup_equalizer_pane_cp3

0x83df,	// (0x0006989e) mup_equalizer_pane_cp4_ParamLimits

0x83df,	// (0x0006989e) mup_equalizer_pane_cp4

0x8400,	// (0x000698bf) mup_equalizer_pane_cp5

0x8416,	// (0x000698d5) mup_equalizer_pane_cp6

0x842e,	// (0x000698ed) mup_equalizer_pane_cp7

0x9bac,	// (0x0006b06b) bg_popup_call_poc_act_pane_g9

0x9bb4,	// (0x0006b073) bg_popup_call_poc_act_pane_g10

0x9bbc,	// (0x0006b07b) bg_popup_call_poc_act_pane_g11

0x000a,

0x07f0,	// (0x00061caf) mup_scale_pane

0x096c,	// (0x00061e2b) mup_scale_pane_g1

0x8446,	// (0x00069905) mup_scale_pane_g2

0x0006,

0xf49d,	// (0x0007095c) mup_scale_pane_g

0x847c,	// (0x0006993b) msg_data_pane

0x8484,	// (0x00069943) scroll_pane_cp017

0x48fb,	// (0x00065dba) bg_list_pane_cp04_ParamLimits

0x48fb,	// (0x00065dba) bg_list_pane_cp04

0x848c,	// (0x0006994b) msg_data_pane_g1

0x8494,	// (0x00069953) msg_data_pane_g2

0x849e,	// (0x0006995d) msg_data_pane_g3

0x84a6,	// (0x00069965) msg_data_pane_g4

0x84ae,	// (0x0006996d) msg_data_pane_g5

0x84b6,	// (0x00069975) msg_data_pane_g6

0x84be,	// (0x0006997d) msg_data_pane_g7

0x0006,

0xf4ac,	// (0x0007096b) msg_data_pane_g

0x4921,	// (0x00065de0) msg_text_pane_ParamLimits

0x4921,	// (0x00065de0) msg_text_pane

0x84c6,	// (0x00069985) qrid_highlight_pane_cp011_ParamLimits

0x84c6,	// (0x00069985) qrid_highlight_pane_cp011

0x0595,	// (0x00061a54) msg_body_pane

0x0595,	// (0x00061a54) msg_header_pane

0x84e9,	// (0x000699a8) input_focus_pane_cp07

0x4964,	// (0x00065e23) msg_header_pane_t1_ParamLimits

0x4964,	// (0x00065e23) msg_header_pane_t1

0x4976,	// (0x00065e35) msg_header_pane_t2_ParamLimits

0x4976,	// (0x00065e35) msg_header_pane_t2

0x0001,

0xf4c0,	// (0x0007097f) msg_header_pane_t_ParamLimits

0xf4c0,	// (0x0007097f) msg_header_pane_t

0x84fe,	// (0x000699bd) msg_body_pane_g1

0x4988,	// (0x00065e47) msg_body_pane_t1_ParamLimits

0x4988,	// (0x00065e47) msg_body_pane_t1

0x49b9,	// (0x00065e78) msg_body_pane_t2_ParamLimits

0x49b9,	// (0x00065e78) msg_body_pane_t2

0x49cb,	// (0x00065e8a) msg_body_pane_t3_ParamLimits

0x49cb,	// (0x00065e8a) msg_body_pane_t3

0x0002,

0xf4c5,	// (0x00070984) msg_body_pane_t_ParamLimits

0xf4c5,	// (0x00070984) msg_body_pane_t

0x8558,	// (0x00069a17) main_viewer_pane_g1_ParamLimits

0x8558,	// (0x00069a17) main_viewer_pane_g1

0x8564,	// (0x00069a23) main_viewer_pane_g2_ParamLimits

0x8564,	// (0x00069a23) main_viewer_pane_g2

0x8570,	// (0x00069a2f) main_viewer_pane_g3_ParamLimits

0x8570,	// (0x00069a2f) main_viewer_pane_g3

0x8581,	// (0x00069a40) main_viewer_pane_g4_ParamLimits

0x8581,	// (0x00069a40) main_viewer_pane_g4

0x8592,	// (0x00069a51) main_viewer_pane_g5_ParamLimits

0x8592,	// (0x00069a51) main_viewer_pane_g5

0x8592,	// (0x00069a51) main_viewer_pane_g7_ParamLimits

0x8592,	// (0x00069a51) main_viewer_pane_g7

0x85a4,	// (0x00069a63) main_viewer_pane_g8_ParamLimits

0x85a4,	// (0x00069a63) main_viewer_pane_g8

0x0007,

0xf4d5,	// (0x00070994) main_viewer_pane_g_ParamLimits

0xf4d5,	// (0x00070994) main_viewer_pane_g

0x85bc,	// (0x00069a7b) viewer_content_pane_ParamLimits

0x85bc,	// (0x00069a7b) viewer_content_pane

0x85ea,	// (0x00069aa9) main_postcard_pane_g1_ParamLimits

0x85ea,	// (0x00069aa9) main_postcard_pane_g1

0x85f8,	// (0x00069ab7) main_postcard_pane_g2_ParamLimits

0x85f8,	// (0x00069ab7) main_postcard_pane_g2

0x8606,	// (0x00069ac5) main_postcard_pane_g3_ParamLimits

0x8606,	// (0x00069ac5) main_postcard_pane_g3

0x0005,

0xf4e6,	// (0x000709a5) main_postcard_pane_g_ParamLimits

0xf4e6,	// (0x000709a5) main_postcard_pane_g

0x8616,	// (0x00069ad5) main_postcard_pane_g4

0xa220,	// (0x0006b6df) smil_status_volume_pane_g2

0x8642,	// (0x00069b01) postcard_pane_ParamLimits

0x8642,	// (0x00069b01) postcard_pane

0x782e,	// (0x00068ced) postcard_pane_g1_ParamLimits

0x782e,	// (0x00068ced) postcard_pane_g1

0x8674,	// (0x00069b33) postcard_pane_g2_ParamLimits

0x8674,	// (0x00069b33) postcard_pane_g2

0x8680,	// (0x00069b3f) postcard_pane_g3_ParamLimits

0x8680,	// (0x00069b3f) postcard_pane_g3

0x868c,	// (0x00069b4b) postcard_pane_g4_ParamLimits

0x868c,	// (0x00069b4b) postcard_pane_g4

0x869a,	// (0x00069b59) postcard_pane_g5_ParamLimits

0x869a,	// (0x00069b59) postcard_pane_g5

0x86a6,	// (0x00069b65) postcard_pane_g6_ParamLimits

0x86a6,	// (0x00069b65) postcard_pane_g6

0x86b2,	// (0x00069b71) postcard_pane_g7_ParamLimits

0x86b2,	// (0x00069b71) postcard_pane_g7

0x0006,

0xf4f3,	// (0x000709b2) postcard_pane_g_ParamLimits

0xf4f3,	// (0x000709b2) postcard_pane_g

0x86c0,	// (0x00069b7f) main_mp2_pane_g1_ParamLimits

0x86c0,	// (0x00069b7f) main_mp2_pane_g1

0x86cc,	// (0x00069b8b) main_mp2_pane_g2_ParamLimits

0x86cc,	// (0x00069b8b) main_mp2_pane_g2

0x86d8,	// (0x00069b97) main_mp2_pane_g3_ParamLimits

0x86d8,	// (0x00069b97) main_mp2_pane_g3

0x0002,

0xf502,	// (0x000709c1) main_mp2_pane_g_ParamLimits

0xf502,	// (0x000709c1) main_mp2_pane_g

0x86e4,	// (0x00069ba3) main_mp2_pane_t1_ParamLimits

0x86e4,	// (0x00069ba3) main_mp2_pane_t1

0x86fb,	// (0x00069bba) main_mp2_pane_t2_ParamLimits

0x86fb,	// (0x00069bba) main_mp2_pane_t2

0x870f,	// (0x00069bce) main_mp2_pane_t3_ParamLimits

0x870f,	// (0x00069bce) main_mp2_pane_t3

0x0002,

0xf509,	// (0x000709c8) main_mp2_pane_t_ParamLimits

0xf509,	// (0x000709c8) main_mp2_pane_t

0x8721,	// (0x00069be0) pec_content_pane_ParamLimits

0x8721,	// (0x00069be0) pec_content_pane

0x0d15,	// (0x000621d4) scroll_pane_cp015

0x8733,	// (0x00069bf2) pec_attribute_pane_ParamLimits

0x8733,	// (0x00069bf2) pec_attribute_pane

0x8743,	// (0x00069c02) pec_content_pane_g1_ParamLimits

0x8743,	// (0x00069c02) pec_content_pane_g1

0x874f,	// (0x00069c0e) pec_content_pane_t1_ParamLimits

0x874f,	// (0x00069c0e) pec_content_pane_t1

0x8761,	// (0x00069c20) pec_content_pane_t2_ParamLimits

0x8761,	// (0x00069c20) pec_content_pane_t2

0x0001,

0xf510,	// (0x000709cf) pec_content_pane_t_ParamLimits

0xf510,	// (0x000709cf) pec_content_pane_t

0x8773,	// (0x00069c32) list_single_graphic_pane_cp01_ParamLimits

0x8773,	// (0x00069c32) list_single_graphic_pane_cp01

0x07f0,	// (0x00061caf) bg_popup_sub_pane_cp04

0x879b,	// (0x00069c5a) popup_mup_playback_window_g1

0x87a7,	// (0x00069c66) popup_mup_playback_window_t1

0x87bc,	// (0x00069c7b) popup_mup_playback_window_t2

0x0001,

0xf515,	// (0x000709d4) popup_mup_playback_window_t

0x8800,	// (0x00069cbf) main_image_pane_g1_ParamLimits

0x8800,	// (0x00069cbf) main_image_pane_g1

0x88a7,	// (0x00069d66) scroll_pane_cp018_ParamLimits

0x88a7,	// (0x00069d66) scroll_pane_cp018

0x88bf,	// (0x00069d7e) scroll_pane_cp016_ParamLimits

0x88bf,	// (0x00069d7e) scroll_pane_cp016

0x88f3,	// (0x00069db2) smil2_image_pane_ParamLimits

0x88f3,	// (0x00069db2) smil2_image_pane

0x8923,	// (0x00069de2) smil2_root_pane_ParamLimits

0x8923,	// (0x00069de2) smil2_root_pane

0x894f,	// (0x00069e0e) smil2_text_pane_ParamLimits

0x894f,	// (0x00069e0e) smil2_text_pane

0x0595,	// (0x00061a54) bg_list_pane_cp06

0x8997,	// (0x00069e56) grid_radio_pane

0x0595,	// (0x00061a54) bg_popup_window_pane_cp06

0x899f,	// (0x00069e5e) main_fmradio_pane_t1

0x7930,	// (0x00068def) heading_pane_cp04

0x89ad,	// (0x00069e6c) main_fmradio_pane_t2

0x9c3c,	// (0x0006b0fb) popup_cale_lunar_info_window_g1

0x89bb,	// (0x00069e7a) main_fmradio_pane_t3

0x9c44,	// (0x0006b103) popup_cale_lunar_info_window_g2

0x89c9,	// (0x00069e88) main_fmradio_pane_t4

0x0001,

0x89d7,	// (0x00069e96) main_fmradio_pane_t5

0x0004,

0xf5f0,	// (0x00070aaf) popup_cale_lunar_info_window_g

0xf52a,	// (0x000709e9) main_fmradio_pane_t

0x89e5,	// (0x00069ea4) wait_bar_pane_cp03

0x89ed,	// (0x00069eac) cell_fmradio_pane_ParamLimits

0x89ed,	// (0x00069eac) cell_fmradio_pane

0x86b2,	// (0x00069b71) cell_fmradio_pane_g1_ParamLimits

0x86b2,	// (0x00069b71) cell_fmradio_pane_g1

0x0595,	// (0x00061a54) grid_highlight_pane_cp011

0x8a00,	// (0x00069ebf) poc_content_pane_ParamLimits

0x8a00,	// (0x00069ebf) poc_content_pane

0x8a12,	// (0x00069ed1) scroll_pane_cp019

0x8a1a,	// (0x00069ed9) popup_call_poc_act_window_ParamLimits

0x8a1a,	// (0x00069ed9) popup_call_poc_act_window

0x8a27,	// (0x00069ee6) popup_call_poc_inact_window_ParamLimits

0x8a27,	// (0x00069ee6) popup_call_poc_inact_window

0xf5c7,	// (0x00070a86) bg_popup_call_poc_act_pane_g

0x9b34,	// (0x0006aff3) bg_popup_call_poc_inact_pane_g1

0x9b3c,	// (0x0006affb) bg_popup_call_poc_inact_pane_g2

0x8a34,	// (0x00069ef3) popup_call_poc_act_window_g2

0x9b44,	// (0x0006b003) bg_popup_call_poc_inact_pane_g3

0x9b4c,	// (0x0006b00b) bg_popup_call_poc_inact_pane_g4

0x9b54,	// (0x0006b013) bg_popup_call_poc_inact_pane_g5

0x8a3c,	// (0x00069efb) popup_call_poc_act_window_t1_ParamLimits

0x8a3c,	// (0x00069efb) popup_call_poc_act_window_t1

0x8a64,	// (0x00069f23) popup_call_poc_act_window_t2_ParamLimits

0x8a64,	// (0x00069f23) popup_call_poc_act_window_t2

0x8a8c,	// (0x00069f4b) popup_call_poc_act_window_t3_ParamLimits

0x8a8c,	// (0x00069f4b) popup_call_poc_act_window_t3

0x8ab4,	// (0x00069f73) popup_call_poc_act_window_t4_ParamLimits

0x8ab4,	// (0x00069f73) popup_call_poc_act_window_t4

0x0003,

0xf535,	// (0x000709f4) popup_call_poc_act_window_t_ParamLimits

0xf535,	// (0x000709f4) popup_call_poc_act_window_t

0x9b5c,	// (0x0006b01b) bg_popup_call_poc_inact_pane_g6

0x9b64,	// (0x0006b023) bg_popup_call_poc_inact_pane_g7

0x9b6c,	// (0x0006b02b) bg_popup_call_poc_inact_pane_g8

0x8ac6,	// (0x00069f85) popup_call_poc_inact_window_g2

0x9b74,	// (0x0006b033) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5b4,	// (0x00070a73) bg_popup_call_poc_inact_pane_g

0x8ace,	// (0x00069f8d) popup_call_poc_inact_window_t1_ParamLimits

0x8ace,	// (0x00069f8d) popup_call_poc_inact_window_t1

0x8ae3,	// (0x00069fa2) popup_call_poc_inact_window_t2_ParamLimits

0x8ae3,	// (0x00069fa2) popup_call_poc_inact_window_t2

0x8af8,	// (0x00069fb7) popup_call_poc_inact_window_t3_ParamLimits

0x8af8,	// (0x00069fb7) popup_call_poc_inact_window_t3

0x0002,

0xf53e,	// (0x000709fd) popup_call_poc_inact_window_t_ParamLimits

0xf53e,	// (0x000709fd) popup_call_poc_inact_window_t

0xa0b5,	// (0x0006b574) context_pane_ParamLimits

0xa108,	// (0x0006b5c7) signal_pane_ParamLimits

0x7ecf,	// (0x0006938e) main_call2_pane

0xa065,	// (0x0006b524) popup_phob_thumbnail2_window_ParamLimits

0xa065,	// (0x0006b524) popup_phob_thumbnail2_window

0x8506,	// (0x000699c5) aid_hotspot_pointer_arrow_pane

0x850e,	// (0x000699cd) aid_hotspot_pointer_hand_pane

0x9d6b,	// (0x0006b22a) phob_pre_status_pane_g5

0x64a1,	// (0x00067960) cams_zoom_pane_ParamLimits

0x64ad,	// (0x0006796c) image_vga_pane_ParamLimits

0x64bc,	// (0x0006797b) main_camera_pane_g1_ParamLimits

0x64ca,	// (0x00067989) main_camera_pane_g2_ParamLimits

0x64d6,	// (0x00067995) main_camera_pane_g3_ParamLimits

0x64e2,	// (0x000679a1) main_camera_pane_g4_ParamLimits

0x64ee,	// (0x000679ad) main_camera_pane_g5_ParamLimits

0x64fa,	// (0x000679b9) main_camera_pane_g6_ParamLimits

0x6506,	// (0x000679c5) main_camera_pane_g7_ParamLimits

0xf23d,	// (0x000706fc) main_camera_pane_g_ParamLimits

0x6512,	// (0x000679d1) main_camera_pane_t1_ParamLimits

0x6524,	// (0x000679e3) main_camera_pane_t2_ParamLimits

0xf24e,	// (0x0007070d) main_camera_pane_t_ParamLimits

0x07f0,	// (0x00061caf) bg_popup_preview_window_pane_cp01_ParamLimits

0x07f0,	// (0x00061caf) bg_popup_preview_window_pane_cp01

0x8b0d,	// (0x00069fcc) popup_phob_thumbnail2_window_g1_ParamLimits

0x8b0d,	// (0x00069fcc) popup_phob_thumbnail2_window_g1

0x0595,	// (0x00061a54) call2_cli_visual_pane

0x8b28,	// (0x00069fe7) popup_call2_audio_conf_window_ParamLimits

0x8b28,	// (0x00069fe7) popup_call2_audio_conf_window

0x8b3d,	// (0x00069ffc) popup_call2_audio_first_window_ParamLimits

0x8b3d,	// (0x00069ffc) popup_call2_audio_first_window

0x8bdb,	// (0x0006a09a) popup_call2_audio_in_window_ParamLimits

0x8bdb,	// (0x0006a09a) popup_call2_audio_in_window

0x8c1d,	// (0x0006a0dc) popup_call2_audio_out_window_ParamLimits

0x8c1d,	// (0x0006a0dc) popup_call2_audio_out_window

0x8c7f,	// (0x0006a13e) popup_call2_audio_second_window_ParamLimits

0x8c7f,	// (0x0006a13e) popup_call2_audio_second_window

0x8cdd,	// (0x0006a19c) popup_call2_audio_wait_window_ParamLimits

0x8cdd,	// (0x0006a19c) popup_call2_audio_wait_window

0x0595,	// (0x00061a54) bg_popup_call2_act_pane_cp03

0x07d2,	// (0x00061c91) list_conf_pane_cp

0x8d1c,	// (0x0006a1db) popup_call2_audio_conf_window_t1

0x79b1,	// (0x00068e70) list_single_graphic_popup_conf2_pane_ParamLimits

0x79b1,	// (0x00068e70) list_single_graphic_popup_conf2_pane

0x79c4,	// (0x00068e83) list_highlight_pane_cp04

0x8d2a,	// (0x0006a1e9) list_single_graphic_popup_conf2_pane_g1

0x79d5,	// (0x00068e94) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf545,	// (0x00070a04) list_single_graphic_popup_conf2_pane_g

0x8d34,	// (0x0006a1f3) list_single_graphic_popup_conf2_pane_t1

0x8d42,	// (0x0006a201) bg_popup_call2_act_pane_cp01_ParamLimits

0x8d42,	// (0x0006a201) bg_popup_call2_act_pane_cp01

0x8dcc,	// (0x0006a28b) call_type_pane_cp05_ParamLimits

0x8dcc,	// (0x0006a28b) call_type_pane_cp05

0x8e20,	// (0x0006a2df) popup_call2_audio_second_window_g1_ParamLimits

0x8e20,	// (0x0006a2df) popup_call2_audio_second_window_g1

0x8e74,	// (0x0006a333) popup_call2_audio_second_window_g2_ParamLimits

0x8e74,	// (0x0006a333) popup_call2_audio_second_window_g2

0x0002,

0xf54a,	// (0x00070a09) popup_call2_audio_second_window_g_ParamLimits

0xf54a,	// (0x00070a09) popup_call2_audio_second_window_g

0x8ed9,	// (0x0006a398) popup_call2_audio_second_window_t1_ParamLimits

0x8ed9,	// (0x0006a398) popup_call2_audio_second_window_t1

0x8f94,	// (0x0006a453) popup_call2_audio_second_window_t2_ParamLimits

0x8f94,	// (0x0006a453) popup_call2_audio_second_window_t2

0x8fe7,	// (0x0006a4a6) popup_call2_audio_second_window_t3_ParamLimits

0x8fe7,	// (0x0006a4a6) popup_call2_audio_second_window_t3

0x0003,

0xf551,	// (0x00070a10) popup_call2_audio_second_window_t_ParamLimits

0xf551,	// (0x00070a10) popup_call2_audio_second_window_t

0x0595,	// (0x00061a54) bg_popup_call2_in_pane_cp02

0x059f,	// (0x00061a5e) call_type_pane_cp04

0x05a7,	// (0x00061a66) popup_call2_audio_wait_window_g1

0x05af,	// (0x00061a6e) popup_call2_audio_wait_window_g2

0x0001,

0xf12a,	// (0x000705e9) popup_call2_audio_wait_window_g

0x05b7,	// (0x00061a76) popup_call2_audio_wait_window_t3

0x90da,	// (0x0006a599) bg_popup_call2_act_pane_ParamLimits

0x90da,	// (0x0006a599) bg_popup_call2_act_pane

0x919a,	// (0x0006a659) call_type_pane_cp03_ParamLimits

0x919a,	// (0x0006a659) call_type_pane_cp03

0x91fe,	// (0x0006a6bd) popup_call2_audio_first_window_g1_ParamLimits

0x91fe,	// (0x0006a6bd) popup_call2_audio_first_window_g1

0x926e,	// (0x0006a72d) popup_call2_audio_first_window_g2_ParamLimits

0x926e,	// (0x0006a72d) popup_call2_audio_first_window_g2

0x782e,	// (0x00068ced) popup_call2_audio_first_window_g3_ParamLimits

0x782e,	// (0x00068ced) popup_call2_audio_first_window_g3

0x0004,

0xf55a,	// (0x00070a19) popup_call2_audio_first_window_g_ParamLimits

0xf55a,	// (0x00070a19) popup_call2_audio_first_window_g

0x934c,	// (0x0006a80b) popup_call2_audio_first_window_t1_ParamLimits

0x934c,	// (0x0006a80b) popup_call2_audio_first_window_t1

0x944f,	// (0x0006a90e) popup_call2_audio_first_window_t4_ParamLimits

0x944f,	// (0x0006a90e) popup_call2_audio_first_window_t4

0x9532,	// (0x0006a9f1) popup_call2_audio_first_window_t5_ParamLimits

0x9532,	// (0x0006a9f1) popup_call2_audio_first_window_t5

0x0003,

0xf565,	// (0x00070a24) popup_call2_audio_first_window_t_ParamLimits

0xf565,	// (0x00070a24) popup_call2_audio_first_window_t

0x07e8,	// (0x00061ca7) bg_popup_call2_act_pane_g1

0x9c4c,	// (0x0006b10b) popup_cale_lunar_info_window_t1

0x9c5a,	// (0x0006b119) popup_cale_lunar_info_window_t2

0x9c68,	// (0x0006b127) popup_cale_lunar_info_window_t3

0x0595,	// (0x00061a54) bg_popup_call2_bubble_pane

0x9633,	// (0x0006aaf2) bg_popup_call2_in_pane_cp01_ParamLimits

0x9633,	// (0x0006aaf2) bg_popup_call2_in_pane_cp01

0x0271,	// (0x00061730) call_type_pane_cp02

0x967b,	// (0x0006ab3a) popup_call2_audio_out_window_g1_ParamLimits

0x967b,	// (0x0006ab3a) popup_call2_audio_out_window_g1

0x96a7,	// (0x0006ab66) popup_call2_audio_out_window_g2_ParamLimits

0x96a7,	// (0x0006ab66) popup_call2_audio_out_window_g2

0x96cf,	// (0x0006ab8e) popup_call2_audio_out_window_g3_ParamLimits

0x96cf,	// (0x0006ab8e) popup_call2_audio_out_window_g3

0x0003,

0xf56e,	// (0x00070a2d) popup_call2_audio_out_window_g_ParamLimits

0xf56e,	// (0x00070a2d) popup_call2_audio_out_window_g

0x970a,	// (0x0006abc9) popup_call2_audio_out_window_t1_ParamLimits

0x970a,	// (0x0006abc9) popup_call2_audio_out_window_t1

0x9769,	// (0x0006ac28) popup_call2_audio_out_window_t2_ParamLimits

0x9769,	// (0x0006ac28) popup_call2_audio_out_window_t2

0x97bd,	// (0x0006ac7c) popup_call2_audio_out_window_t3_ParamLimits

0x97bd,	// (0x0006ac7c) popup_call2_audio_out_window_t3

0x97d3,	// (0x0006ac92) popup_call2_audio_out_window_t4_ParamLimits

0x97d3,	// (0x0006ac92) popup_call2_audio_out_window_t4

0x97e9,	// (0x0006aca8) popup_call2_audio_out_window_t5_ParamLimits

0x97e9,	// (0x0006aca8) popup_call2_audio_out_window_t5

0x0005,

0xf577,	// (0x00070a36) popup_call2_audio_out_window_t_ParamLimits

0xf577,	// (0x00070a36) popup_call2_audio_out_window_t

0x984d,	// (0x0006ad0c) bg_popup_call2_in_pane_ParamLimits

0x984d,	// (0x0006ad0c) bg_popup_call2_in_pane

0x98a9,	// (0x0006ad68) popup_call2_audio_in_window_g1_ParamLimits

0x98a9,	// (0x0006ad68) popup_call2_audio_in_window_g1

0x98e1,	// (0x0006ada0) popup_call2_audio_in_window_g2_ParamLimits

0x98e1,	// (0x0006ada0) popup_call2_audio_in_window_g2

0x9919,	// (0x0006add8) popup_call2_audio_in_window_g3_ParamLimits

0x9919,	// (0x0006add8) popup_call2_audio_in_window_g3

0x0003,

0xf584,	// (0x00070a43) popup_call2_audio_in_window_g_ParamLimits

0xf584,	// (0x00070a43) popup_call2_audio_in_window_g

0x9971,	// (0x0006ae30) popup_call2_audio_in_window_t1_ParamLimits

0x9971,	// (0x0006ae30) popup_call2_audio_in_window_t1

0x99f1,	// (0x0006aeb0) popup_call2_audio_in_window_t2_ParamLimits

0x99f1,	// (0x0006aeb0) popup_call2_audio_in_window_t2

0x9a71,	// (0x0006af30) popup_call2_audio_in_window_t3_ParamLimits

0x9a71,	// (0x0006af30) popup_call2_audio_in_window_t3

0x9a8b,	// (0x0006af4a) popup_call2_audio_in_window_t4_ParamLimits

0x9a8b,	// (0x0006af4a) popup_call2_audio_in_window_t4

0x9a9d,	// (0x0006af5c) popup_call2_audio_in_window_t5_ParamLimits

0x9a9d,	// (0x0006af5c) popup_call2_audio_in_window_t5

0x9ab2,	// (0x0006af71) popup_call2_audio_in_window_t6_ParamLimits

0x9ab2,	// (0x0006af71) popup_call2_audio_in_window_t6

0x0005,

0xf58d,	// (0x00070a4c) popup_call2_audio_in_window_t_ParamLimits

0xf58d,	// (0x00070a4c) popup_call2_audio_in_window_t

0x07e8,	// (0x00061ca7) bg_popup_call2_in_pane_g1

0x9c76,	// (0x0006b135) popup_cale_lunar_info_window_t4

0x0003,

0xf5f5,	// (0x00070ab4) popup_cale_lunar_info_window_t

0x07f0,	// (0x00061caf) bg_popup_call2_rect_pane_ParamLimits

0x07f0,	// (0x00061caf) bg_popup_call2_rect_pane

0x0595,	// (0x00061a54) call2_cli_visual_graphic_pane

0x0595,	// (0x00061a54) call2_cli_visual_text_pane

0xa233,	// (0x0006b6f2) smil_status_volume_pane_g3

0x0002,

0x096c,	// (0x00061e2b) call2_cli_visual_graphic_pane_g1

0x096c,	// (0x00061e2b) call2_cli_visual_graphic_pane_g2

0x096c,	// (0x00061e2b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf59a,	// (0x00070a59) call2_cli_visual_graphic_pane_g

0x9af4,	// (0x0006afb3) bg_popup_call2_rect_pane_g1

0x09f8,	// (0x00061eb7) bg_popup_call2_rect_pane_g2

0x9afc,	// (0x0006afbb) bg_popup_call2_rect_pane_g3

0x9b04,	// (0x0006afc3) bg_popup_call2_rect_pane_g4

0x9b0c,	// (0x0006afcb) bg_popup_call2_rect_pane_g5

0x9b14,	// (0x0006afd3) bg_popup_call2_rect_pane_g6

0x9b1c,	// (0x0006afdb) bg_popup_call2_rect_pane_g7

0x9b24,	// (0x0006afe3) bg_popup_call2_rect_pane_g8

0x9b2c,	// (0x0006afeb) bg_popup_call2_rect_pane_g9

0x0008,

0xf5a1,	// (0x00070a60) bg_popup_call2_rect_pane_g

0x9b34,	// (0x0006aff3) bg_popup_call2_bubble_pane_g1

0x9b3c,	// (0x0006affb) bg_popup_call2_bubble_pane_g2

0x9b44,	// (0x0006b003) bg_popup_call2_bubble_pane_g3

0x9b4c,	// (0x0006b00b) bg_popup_call2_bubble_pane_g4

0x9b54,	// (0x0006b013) bg_popup_call2_bubble_pane_g5

0x9b5c,	// (0x0006b01b) bg_popup_call2_bubble_pane_g6

0x9b64,	// (0x0006b023) bg_popup_call2_bubble_pane_g7

0x9b6c,	// (0x0006b02b) bg_popup_call2_bubble_pane_g8

0x9b74,	// (0x0006b033) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5b4,	// (0x00070a73) bg_popup_call2_bubble_pane_g

0x5fde,	// (0x0006749d) aid_cale_week_size_cell_pane

0x6536,	// (0x000679f5) aid_cams_cif_uncrop_pane_ParamLimits

0x6536,	// (0x000679f5) aid_cams_cif_uncrop_pane

0x6693,	// (0x00067b52) aid_cams_size_cell_ParamLimits

0x6693,	// (0x00067b52) aid_cams_size_cell

0x669f,	// (0x00067b5e) grid_cams_pane_ParamLimits

0x66ad,	// (0x00067b6c) linegrid_cams_pane_ParamLimits

0x6741,	// (0x00067c00) call_video_pane_t1

0x675a,	// (0x00067c19) call_video_pane_t2

0x0001,

0xf2a1,	// (0x00070760) call_video_pane_t

0x6c0f,	// (0x000680ce) aid_cale_month_size_cell_pane_ParamLimits

0x6c0f,	// (0x000680ce) aid_cale_month_size_cell_pane

0xf63e,	// (0x00070afd) smil_status_volume_pane_g

0xa240,	// (0x0006b6ff) volume_smil_pane_ParamLimits

0x012c,	// (0x000615eb) aid_popup2_width_pane

0x5ee9,	// (0x000673a8) cell_qdial_pane_g4_ParamLimits

0x5ee9,	// (0x000673a8) cell_qdial_pane_g4

0x7c71,	// (0x00069130) aid_blid_cardinal_pane_ParamLimits

0x7c81,	// (0x00069140) aid_blid_destination_pane_ParamLimits

0x7c81,	// (0x00069140) aid_blid_destination_pane

0x07f0,	// (0x00061caf) bg_popup_call_poc_act_pane_ParamLimits

0x07f0,	// (0x00061caf) bg_popup_call_poc_act_pane

0x07f0,	// (0x00061caf) bg_popup_call_poc_inact_pane_ParamLimits

0x07f0,	// (0x00061caf) bg_popup_call_poc_inact_pane

0x9b84,	// (0x0006b043) bg_popup_call_poc_act_pane_g1

0x9b8c,	// (0x0006b04b) bg_popup_call_poc_act_pane_g2

0x9b94,	// (0x0006b053) bg_popup_call_poc_act_pane_g3

0x9b4c,	// (0x0006b00b) bg_popup_call_poc_act_pane_g4

0x9b54,	// (0x0006b013) bg_popup_call_poc_act_pane_g5

0x9b9c,	// (0x0006b05b) bg_popup_call_poc_act_pane_g6

0x9b64,	// (0x0006b023) bg_popup_call_poc_act_pane_g7

0x9ba4,	// (0x0006b063) bg_popup_call_poc_act_pane_g8

0x0595,	// (0x00061a54) main_usb_pane

0x9f94,	// (0x0006b453) popup_cale_lunar_info_window

0x6a03,	// (0x00067ec2) im_reading_pane_t1_ParamLimits

0x0c6d,	// (0x0006212c) list_im_pane_ParamLimits

0x0c7e,	// (0x0006213d) scroll_pane_cp07_ParamLimits

0x0595,	// (0x00061a54) grid_highlight_pane_cp012

0x07f0,	// (0x00061caf) mup_scale_pane_ParamLimits

0x782e,	// (0x00068ced) main_usb_pane_g1_ParamLimits

0x782e,	// (0x00068ced) main_usb_pane_g1

0x9bc4,	// (0x0006b083) main_usb_pane_g2_ParamLimits

0x9bc4,	// (0x0006b083) main_usb_pane_g2

0x0001,

0xf5de,	// (0x00070a9d) main_usb_pane_g_ParamLimits

0xf5de,	// (0x00070a9d) main_usb_pane_g

0x9bd0,	// (0x0006b08f) main_usb_pane_t1_ParamLimits

0x9bd0,	// (0x0006b08f) main_usb_pane_t1

0x9be2,	// (0x0006b0a1) main_usb_pane_t2_ParamLimits

0x9be2,	// (0x0006b0a1) main_usb_pane_t2

0x9bf4,	// (0x0006b0b3) main_usb_pane_t3_ParamLimits

0x9bf4,	// (0x0006b0b3) main_usb_pane_t3

0x9c06,	// (0x0006b0c5) main_usb_pane_t4_ParamLimits

0x9c06,	// (0x0006b0c5) main_usb_pane_t4

0x9c18,	// (0x0006b0d7) main_usb_pane_t5_ParamLimits

0x9c18,	// (0x0006b0d7) main_usb_pane_t5

0x9c2a,	// (0x0006b0e9) main_usb_pane_t6_ParamLimits

0x9c2a,	// (0x0006b0e9) main_usb_pane_t6

0x0005,

0xf5e3,	// (0x00070aa2) main_usb_pane_t_ParamLimits

0x7c17,	// (0x000690d6) aid_text_placing

0x7c23,	// (0x000690e2) main_location2_pane_t1_ParamLimits

0x7c37,	// (0x000690f6) main_location2_pane_t2_ParamLimits

0x7c4b,	// (0x0006910a) main_location2_pane_t3_ParamLimits

0x7c5f,	// (0x0006911e) main_location2_pane_t4_ParamLimits

0x7c5f,	// (0x0006911e) main_location2_pane_t4

0xf402,	// (0x000708c1) main_location2_pane_t_ParamLimits

0x082c,	// (0x00061ceb) find_pinb_pane_g2_ParamLimits

0x082c,	// (0x00061ceb) find_pinb_pane_g2

0x0001,

0xf150,	// (0x0007060f) find_pinb_pane_g_ParamLimits

0xf150,	// (0x0007060f) find_pinb_pane_g

0x0838,	// (0x00061cf7) find_pinb_pane_t1_ParamLimits

0x084a,	// (0x00061d09) find_pinb_pane_t2_ParamLimits

0xf155,	// (0x00070614) find_pinb_pane_t_ParamLimits

0x0595,	// (0x00061a54) main_call3_pane

0x6f5b,	// (0x0006841a) cale_month_day_heading_pane_t1_ParamLimits

0x6fb9,	// (0x00068478) cale_month_day_heading_pane_t2_ParamLimits

0x701e,	// (0x000684dd) cale_month_day_heading_pane_t3_ParamLimits

0x7083,	// (0x00068542) cale_month_day_heading_pane_t4_ParamLimits

0x70e8,	// (0x000685a7) cale_month_day_heading_pane_t5_ParamLimits

0x714d,	// (0x0006860c) cale_month_day_heading_pane_t6_ParamLimits

0x71b2,	// (0x00068671) cale_month_day_heading_pane_t7_ParamLimits

0xf2d9,	// (0x00070798) cale_month_day_heading_pane_t_ParamLimits

0x73a2,	// (0x00068861) smil_status_volume_pane

0x865c,	// (0x00069b1b) postcard_address_pane_ParamLimits

0x865c,	// (0x00069b1b) postcard_address_pane

0x8668,	// (0x00069b27) postcard_message_pane_ParamLimits

0x8668,	// (0x00069b27) postcard_message_pane

0x9ac7,	// (0x0006af86) call2_cli_visual_pane_t1_ParamLimits

0x9ac7,	// (0x0006af86) call2_cli_visual_pane_t1

0xa397,	// (0x0006b856) postcard_message_pane_t1_ParamLimits

0xa397,	// (0x0006b856) postcard_message_pane_t1

0xa380,	// (0x0006b83f) postcard_address_pane_t1_ParamLimits

0xa380,	// (0x0006b83f) postcard_address_pane_t1

0xa371,	// (0x0006b830) popup_call3_audio_in_window_ParamLimits

0xa371,	// (0x0006b830) popup_call3_audio_in_window

0xa255,	// (0x0006b714) bg_popup_call3_in_pane_ParamLimits

0xa255,	// (0x0006b714) bg_popup_call3_in_pane

0xa2b7,	// (0x0006b776) popup_call3_audio_in_window_g1_ParamLimits

0xa2b7,	// (0x0006b776) popup_call3_audio_in_window_g1

0xa2cf,	// (0x0006b78e) popup_call3_audio_in_window_g2_ParamLimits

0xa2cf,	// (0x0006b78e) popup_call3_audio_in_window_g2

0xa2e7,	// (0x0006b7a6) popup_call3_audio_in_window_g3_ParamLimits

0xa2e7,	// (0x0006b7a6) popup_call3_audio_in_window_g3

0x0003,

0xf645,	// (0x00070b04) popup_call3_audio_in_window_g_ParamLimits

0xf645,	// (0x00070b04) popup_call3_audio_in_window_g

0xa30f,	// (0x0006b7ce) popup_call3_audio_in_window_t1_ParamLimits

0xa30f,	// (0x0006b7ce) popup_call3_audio_in_window_t1

0xa337,	// (0x0006b7f6) popup_call3_audio_in_window_t2_ParamLimits

0xa337,	// (0x0006b7f6) popup_call3_audio_in_window_t2

0xa35f,	// (0x0006b81e) popup_call3_audio_in_window_t3_ParamLimits

0xa35f,	// (0x0006b81e) popup_call3_audio_in_window_t3

0x0002,

0xf64e,	// (0x00070b0d) popup_call3_audio_in_window_t_ParamLimits

0xf64e,	// (0x00070b0d) popup_call3_audio_in_window_t

0x7ecf,	// (0x0006938e) bg_popup_call3_rect_pane

0x9af4,	// (0x0006afb3) bg_popup_call3_rect_pane_g1

0x09f8,	// (0x00061eb7) bg_popup_call3_rect_pane_g2

0x9afc,	// (0x0006afbb) bg_popup_call3_rect_pane_g3

0x9b04,	// (0x0006afc3) bg_popup_call3_rect_pane_g4

0x9b0c,	// (0x0006afcb) bg_popup_call3_rect_pane_g5

0x9b14,	// (0x0006afd3) bg_popup_call3_rect_pane_g6

0x9b1c,	// (0x0006afdb) bg_popup_call3_rect_pane_g7

0x81fb,	// (0x000696ba) mup_visualizer_osc_pane

0x8203,	// (0x000696c2) mup_visualizer_spec_pane

0xa275,	// (0x0006b734) call3_video_qcif_pane_ParamLimits

0xa275,	// (0x0006b734) call3_video_qcif_pane

0xa287,	// (0x0006b746) call3_video_qcif_uncrop_pane_ParamLimits

0xa287,	// (0x0006b746) call3_video_qcif_uncrop_pane

0xa295,	// (0x0006b754) call3_video_subqcif_pane_ParamLimits

0xa295,	// (0x0006b754) call3_video_subqcif_pane

0xa2a7,	// (0x0006b766) call3_video_subqcif_uncrop_pane_ParamLimits

0xa2a7,	// (0x0006b766) call3_video_subqcif_uncrop_pane

0xa2ff,	// (0x0006b7be) popup_call3_audio_in_window_g4_ParamLimits

0xa2ff,	// (0x0006b7be) popup_call3_audio_in_window_g4

0xa1f4,	// (0x0006b6b3) mup_spec_half_pane

0xa1fd,	// (0x0006b6bc) mup_spec_half_pane_cp

0xa1e2,	// (0x0006b6a1) mup_osc_middle_pane

0xa1eb,	// (0x0006b6aa) mup_visualizer_osc_pane_g1

0xa1c3,	// (0x0006b682) mup_spec_bar_pane_ParamLimits

0xa1c3,	// (0x0006b682) mup_spec_bar_pane

0xa1b0,	// (0x0006b66f) mup_spec_bar_pane_g1

0xa1ba,	// (0x0006b679) mup_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00070af8) mup_spec_bar_pane_g

0x5fde,	// (0x0006749d) aid_cale_week_size_cell_pane_ParamLimits

0x5ff1,	// (0x000674b0) bg_cale_heading_pane_ParamLimits

0x0a74,	// (0x00061f33) bg_cale_pane_cp01_ParamLimits

0x6005,	// (0x000674c4) cale_week_corner_pane_ParamLimits

0x601b,	// (0x000674da) cale_week_day_heading_pane_ParamLimits

0x602f,	// (0x000674ee) cale_week_scroll_pane_g1_ParamLimits

0x6040,	// (0x000674ff) cale_week_scroll_pane_g2_ParamLimits

0x6051,	// (0x00067510) cale_week_scroll_pane_g3_ParamLimits

0x6062,	// (0x00067521) cale_week_scroll_pane_g4_ParamLimits

0x6073,	// (0x00067532) cale_week_scroll_pane_g5_ParamLimits

0x6084,	// (0x00067543) cale_week_scroll_pane_g6_ParamLimits

0x6095,	// (0x00067554) cale_week_scroll_pane_g7_ParamLimits

0x60a8,	// (0x00067567) cale_week_scroll_pane_g8_ParamLimits

0x60bb,	// (0x0006757a) cale_week_scroll_pane_g9_ParamLimits

0x60cc,	// (0x0006758b) cale_week_scroll_pane_g10_ParamLimits

0x60dd,	// (0x0006759c) cale_week_scroll_pane_g11_ParamLimits

0x60ee,	// (0x000675ad) cale_week_scroll_pane_g12_ParamLimits

0x60ff,	// (0x000675be) cale_week_scroll_pane_g13_ParamLimits

0x6110,	// (0x000675cf) cale_week_scroll_pane_g14_ParamLimits

0x6121,	// (0x000675e0) cale_week_scroll_pane_g15_ParamLimits

0xf1e1,	// (0x000706a0) cale_week_scroll_pane_g_ParamLimits

0x6132,	// (0x000675f1) cale_week_time_pane_ParamLimits

0x6145,	// (0x00067604) grid_cale_week_pane_ParamLimits

0x0a8d,	// (0x00061f4c) listscroll_cale_week_pane_t1

0x615a,	// (0x00067619) scroll_pane_cp08_ParamLimits

0x6c50,	// (0x0006810f) cale_month_corner_pane_ParamLimits

0x0e94,	// (0x00062353) cale_month_pane_t1

0x6f1a,	// (0x000683d9) cale_month_week_pane_ParamLimits

0x782e,	// (0x00068ced) popup_call_status_window_g1_ParamLimits

0x783c,	// (0x00068cfb) popup_call_status_window_g2_ParamLimits

0x7848,	// (0x00068d07) popup_call_status_window_g3_ParamLimits

0xf389,	// (0x00070848) popup_call_status_window_g_ParamLimits

0x78ad,	// (0x00068d6c) aid_call2_pane

0x4958,	// (0x00065e17) msg_header_pane_g1

0x865c,	// (0x00069b1b) postcard_address2_pane_ParamLimits

0x865c,	// (0x00069b1b) postcard_address2_pane

0x8668,	// (0x00069b27) postcard_message2_pane_ParamLimits

0x8668,	// (0x00069b27) postcard_message2_pane

0xa116,	// (0x0006b5d5) message2_row_pane_ParamLimits

0xa116,	// (0x0006b5d5) message2_row_pane

0xa131,	// (0x0006b5f0) address2_row_pane_ParamLimits

0xa131,	// (0x0006b5f0) address2_row_pane

0xa144,	// (0x0006b603) postcard_message2_row_pane_g1

0xa14c,	// (0x0006b60b) postcard_message2_row_pane_t1

0xa144,	// (0x0006b603) address2_row_pane_g1

0xa14c,	// (0x0006b60b) address2_row_pane_t1

0x6402,	// (0x000678c1) aid_size_cell_vorec

0x0595,	// (0x00061a54) main_rss_pane

0xa15a,	// (0x0006b619) rss_list_single_pane_ParamLimits

0xa15a,	// (0x0006b619) rss_list_single_pane

0xa194,	// (0x0006b653) rss_list_single_pane_t1

0xa1a2,	// (0x0006b661) rss_list_single_pane_t2

0x0001,

0xf634,	// (0x00070af3) rss_list_single_pane_t

0x0595,	// (0x00061a54) main_camera2_pane

0x0595,	// (0x00061a54) main_video2_pane

0xa3fb,	// (0x0006b8ba) cams_zoom_pane_cp2_ParamLimits

0xa3fb,	// (0x0006b8ba) cams_zoom_pane_cp2

0xa407,	// (0x0006b8c6) image2_vga_pane_ParamLimits

0xa407,	// (0x0006b8c6) image2_vga_pane

0xa416,	// (0x0006b8d5) main_camera2_pane_g1_ParamLimits

0xa416,	// (0x0006b8d5) main_camera2_pane_g1

0xa422,	// (0x0006b8e1) main_camera2_pane_g2_ParamLimits

0xa422,	// (0x0006b8e1) main_camera2_pane_g2

0xa42e,	// (0x0006b8ed) main_camera2_pane_g3_ParamLimits

0xa42e,	// (0x0006b8ed) main_camera2_pane_g3

0xa43a,	// (0x0006b8f9) main_camera2_pane_g4_ParamLimits

0xa43a,	// (0x0006b8f9) main_camera2_pane_g4

0xa446,	// (0x0006b905) main_camera2_pane_g5_ParamLimits

0xa446,	// (0x0006b905) main_camera2_pane_g5

0xa452,	// (0x0006b911) main_camera2_pane_g6_ParamLimits

0xa452,	// (0x0006b911) main_camera2_pane_g6

0xa45e,	// (0x0006b91d) main_camera2_pane_g7_ParamLimits

0xa45e,	// (0x0006b91d) main_camera2_pane_g7

0xa46a,	// (0x0006b929) main_camera2_pane_g8_ParamLimits

0xa46a,	// (0x0006b929) main_camera2_pane_g8

0x0008,

0xf655,	// (0x00070b14) main_camera2_pane_g_ParamLimits

0xf655,	// (0x00070b14) main_camera2_pane_g

0xa482,	// (0x0006b941) main_camera2_pane_t1_ParamLimits

0xa482,	// (0x0006b941) main_camera2_pane_t1

0xa494,	// (0x0006b953) main_camera2_pane_t2_ParamLimits

0xa494,	// (0x0006b953) main_camera2_pane_t2

0xa4a6,	// (0x0006b965) main_camera2_pane_t3_ParamLimits

0xa4a6,	// (0x0006b965) main_camera2_pane_t3

0xa4b8,	// (0x0006b977) main_camera2_pane_t4_ParamLimits

0xa4b8,	// (0x0006b977) main_camera2_pane_t4

0x0006,

0xf668,	// (0x00070b27) main_camera2_pane_t_ParamLimits

0xf668,	// (0x00070b27) main_camera2_pane_t

0xa51a,	// (0x0006b9d9) cams_zoom_pane_cp4_ParamLimits

0xa51a,	// (0x0006b9d9) cams_zoom_pane_cp4

0xa52a,	// (0x0006b9e9) image2_cif_pane_ParamLimits

0xa52a,	// (0x0006b9e9) image2_cif_pane

0xa53f,	// (0x0006b9fe) image2_subqcif_pane_ParamLimits

0xa53f,	// (0x0006b9fe) image2_subqcif_pane

0xa54e,	// (0x0006ba0d) main_video2_pane_g1_ParamLimits

0xa54e,	// (0x0006ba0d) main_video2_pane_g1

0xa560,	// (0x0006ba1f) main_video2_pane_g2_ParamLimits

0xa560,	// (0x0006ba1f) main_video2_pane_g2

0xa570,	// (0x0006ba2f) main_video2_pane_g3_ParamLimits

0xa570,	// (0x0006ba2f) main_video2_pane_g3

0xa580,	// (0x0006ba3f) main_video2_pane_g4_ParamLimits

0xa580,	// (0x0006ba3f) main_video2_pane_g4

0xa590,	// (0x0006ba4f) main_video2_pane_g5_ParamLimits

0xa590,	// (0x0006ba4f) main_video2_pane_g5

0xa5a0,	// (0x0006ba5f) main_video2_pane_g6_ParamLimits

0xa5a0,	// (0x0006ba5f) main_video2_pane_g6

0x0005,

0xf677,	// (0x00070b36) main_video2_pane_g_ParamLimits

0xf677,	// (0x00070b36) main_video2_pane_g

0xa5b2,	// (0x0006ba71) main_video2_pane_t1_ParamLimits

0xa5b2,	// (0x0006ba71) main_video2_pane_t1

0xa5cc,	// (0x0006ba8b) main_video2_pane_t2_ParamLimits

0xa5cc,	// (0x0006ba8b) main_video2_pane_t2

0xa5f2,	// (0x0006bab1) main_video2_pane_t3_ParamLimits

0xa5f2,	// (0x0006bab1) main_video2_pane_t3

0x0002,

0xf684,	// (0x00070b43) main_video2_pane_t_ParamLimits

0xf684,	// (0x00070b43) main_video2_pane_t

0x9dcb,	// (0x0006b28a) call_muted_g2

0x0001,

0xf626,	// (0x00070ae5) call_muted_g

0x0595,	// (0x00061a54) main_mup2_pane

0xa618,	// (0x0006bad7) main_mup2_pane_g1_ParamLimits

0xa618,	// (0x0006bad7) main_mup2_pane_g1

0xa624,	// (0x0006bae3) main_mup2_pane_g2_ParamLimits

0xa624,	// (0x0006bae3) main_mup2_pane_g2

0xa950,	// (0x0006be0f) main_mup_pane_g13_cp1

0xa958,	// (0x0006be17) mup_volume_pane_cp1

0xa644,	// (0x0006bb03) main_mup2_pane_g4_ParamLimits

0xa644,	// (0x0006bb03) main_mup2_pane_g4

0xa659,	// (0x0006bb18) main_mup2_pane_g5_ParamLimits

0xa659,	// (0x0006bb18) main_mup2_pane_g5

0xa66e,	// (0x0006bb2d) main_mup2_pane_g6_ParamLimits

0xa66e,	// (0x0006bb2d) main_mup2_pane_g6

0xa683,	// (0x0006bb42) main_mup2_pane_g7_ParamLimits

0xa683,	// (0x0006bb42) main_mup2_pane_g7

0x0006,

0xf68b,	// (0x00070b4a) main_mup2_pane_g_ParamLimits

0xf68b,	// (0x00070b4a) main_mup2_pane_g

0xa69f,	// (0x0006bb5e) main_mup2_pane_t1_ParamLimits

0xa69f,	// (0x0006bb5e) main_mup2_pane_t1

0xa6b6,	// (0x0006bb75) main_mup2_pane_t2_ParamLimits

0xa6b6,	// (0x0006bb75) main_mup2_pane_t2

0xa6cd,	// (0x0006bb8c) main_mup2_pane_t3_ParamLimits

0xa6cd,	// (0x0006bb8c) main_mup2_pane_t3

0xa6e4,	// (0x0006bba3) main_mup2_pane_t4_ParamLimits

0xa6e4,	// (0x0006bba3) main_mup2_pane_t4

0xa6fe,	// (0x0006bbbd) main_mup2_pane_t5_ParamLimits

0xa6fe,	// (0x0006bbbd) main_mup2_pane_t5

0xa718,	// (0x0006bbd7) main_mup2_pane_t6_ParamLimits

0xa718,	// (0x0006bbd7) main_mup2_pane_t6

0x0005,

0xf69a,	// (0x00070b59) main_mup2_pane_t_ParamLimits

0xf69a,	// (0x00070b59) main_mup2_pane_t

0xa750,	// (0x0006bc0f) mup2_visualizer_pane_ParamLimits

0xa750,	// (0x0006bc0f) mup2_visualizer_pane

0xa786,	// (0x0006bc45) mup_progress_pane_cp_ParamLimits

0xa786,	// (0x0006bc45) mup_progress_pane_cp

0xa932,	// (0x0006bdf1) mup_volume_pane_cp_ParamLimits

0xa932,	// (0x0006bdf1) mup_volume_pane_cp

0xa79d,	// (0x0006bc5c) mup2_visualizer_pane_g1_ParamLimits

0xa79d,	// (0x0006bc5c) mup2_visualizer_pane_g1

0xa7b2,	// (0x0006bc71) mup2_visualizer_pane_g2_ParamLimits

0xa7b2,	// (0x0006bc71) mup2_visualizer_pane_g2

0xa7be,	// (0x0006bc7d) mup2_visualizer_pane_g3_ParamLimits

0xa7be,	// (0x0006bc7d) mup2_visualizer_pane_g3

0x0002,

0xf6a7,	// (0x00070b66) mup2_visualizer_pane_g_ParamLimits

0xf6a7,	// (0x00070b66) mup2_visualizer_pane_g

0x898f,	// (0x00069e4e) aid_size_cell_fmradio

0x9f12,	// (0x0006b3d1) aid_height_parent_landcape

0x0cfc,	// (0x000621bb) wml_content_pane_cp

0x0d04,	// (0x000621c3) wml_tabs_pane

0x0d0d,	// (0x000621cc) popup_wml_miniature_window

0x0d15,	// (0x000621d4) scroll_pane_cp021

0x0d29,	// (0x000621e8) wml_content_pane_comp8

0x0595,	// (0x00061a54) bg_popup_sub_pane_cp05

0xa7de,	// (0x0006bc9d) popup_wml_miniature_window_g1

0xa7e6,	// (0x0006bca5) wml_miniature_view_pane

0xa7ee,	// (0x0006bcad) aid_size_wml_view

0xa7f6,	// (0x0006bcb5) wml_miniature_view_pane_g1

0xa7ff,	// (0x0006bcbe) wml_miniature_view_pane_g2

0xa808,	// (0x0006bcc7) wml_miniature_view_pane_g3

0xa810,	// (0x0006bccf) wml_miniature_view_pane_g4

0xa818,	// (0x0006bcd7) wml_miniature_view_pane_g5

0xa820,	// (0x0006bcdf) wml_miniature_view_pane_g6

0xa828,	// (0x0006bce7) wml_miniature_view_pane_g7

0xa830,	// (0x0006bcef) wml_miniature_view_pane_g8

0x0007,

0xf6ae,	// (0x00070b6d) wml_miniature_view_pane_g

0xa618,	// (0x0006bad7) background_graphic_ParamLimits

0xa618,	// (0x0006bad7) background_graphic

0xa838,	// (0x0006bcf7) wml_tabs_2_pane

0xa841,	// (0x0006bd00) wml_tabs_3_pane_ParamLimits

0xa841,	// (0x0006bd00) wml_tabs_3_pane

0xa853,	// (0x0006bd12) wml_tabs_4_pane_ParamLimits

0xa853,	// (0x0006bd12) wml_tabs_4_pane

0xa869,	// (0x0006bd28) wml_tabs_5_pane_ParamLimits

0xa869,	// (0x0006bd28) wml_tabs_5_pane

0xa883,	// (0x0006bd42) wml_tabs_pane_g2_ParamLimits

0xa883,	// (0x0006bd42) wml_tabs_pane_g2

0xa897,	// (0x0006bd56) wml_tabs_pane_g3_ParamLimits

0xa897,	// (0x0006bd56) wml_tabs_pane_g3

0xa8ab,	// (0x0006bd6a) wml_tabs_2_active_pane_ParamLimits

0xa8ab,	// (0x0006bd6a) wml_tabs_2_active_pane

0xa8bb,	// (0x0006bd7a) wml_tabs_2_passive_pane_ParamLimits

0xa8bb,	// (0x0006bd7a) wml_tabs_2_passive_pane

0xa8cb,	// (0x0006bd8a) wml_tabs_3_active_pane_cp_ParamLimits

0xa8cb,	// (0x0006bd8a) wml_tabs_3_active_pane_cp

0xa8dc,	// (0x0006bd9b) wml_tabs_3_passive_pane_ParamLimits

0xa8dc,	// (0x0006bd9b) wml_tabs_3_passive_pane

0xa8ed,	// (0x0006bdac) wml_tabs_3_passive_pane_cp_ParamLimits

0xa8ed,	// (0x0006bdac) wml_tabs_3_passive_pane_cp

0xa8fe,	// (0x0006bdbd) tabs_4_active_pane

0xa906,	// (0x0006bdc5) tabs_4_passive_pane

0xa90e,	// (0x0006bdcd) tabs_4_passive_pane_cp

0xa916,	// (0x0006bdd5) tabs_4_passive_pane_cp2

0x9b7c,	// (0x0006b03b) aid_height_text

0x81c8,	// (0x00069687) mup_volume_cont_pane_ParamLimits

0x81c8,	// (0x00069687) mup_volume_cont_pane

0x5b37,	// (0x00066ff6) aid_size_cell_pinb

0x5b41,	// (0x00067000) aid_size_list_pinb

0xa76f,	// (0x0006bc2e) mup2_volume_cont_pane_ParamLimits

0xa76f,	// (0x0006bc2e) mup2_volume_cont_pane

0xa91e,	// (0x0006bddd) mup2_volume_cont_pane_g1_ParamLimits

0xa91e,	// (0x0006bddd) mup2_volume_cont_pane_g1

0x57ae,	// (0x00066c6d) aid_size_cell_touch_ParamLimits

0x57ae,	// (0x00066c6d) aid_size_cell_touch

0x5a1d,	// (0x00066edc) touch_pane_ParamLimits

0x5a1d,	// (0x00066edc) touch_pane

0x011a,	// (0x000615d9) main_rss2_pane

0xa960,	// (0x0006be1f) listscroll_rss2_pane

0xa969,	// (0x0006be28) rss2_navigation_pane

0xa971,	// (0x0006be30) list_rss2_pane

0x7ad8,	// (0x00068f97) scroll_pane_cp22

0xa979,	// (0x0006be38) rss2_navigation_pane_g1

0xa982,	// (0x0006be41) rss2_navigation_pane_g2

0xa98a,	// (0x0006be49) rss2_navigation_pane_g3

0x0002,

0xf6bf,	// (0x00070b7e) rss2_navigation_pane_g

0xa992,	// (0x0006be51) rss2_navigation_pane_t1

0xa9a0,	// (0x0006be5f) rss2_list_single_pane_ParamLimits

0xa9a0,	// (0x0006be5f) rss2_list_single_pane

0xa9d1,	// (0x0006be90) rss2_list_single_pane_t2

0xa9df,	// (0x0006be9e) rss2_list_single_pane_t3_ParamLimits

0xa9df,	// (0x0006be9e) rss2_list_single_pane_t3

0xa9fc,	// (0x0006bebb) rss2_list_single_pane_t4

0x739a,	// (0x00068859) smil_status_pane_g1

0x9f3f,	// (0x0006b3fe) main_image2_pane_ParamLimits

0x9f3f,	// (0x0006b3fe) main_image2_pane

0xa476,	// (0x0006b935) main_camera2_pane_g9_ParamLimits

0xa476,	// (0x0006b935) main_camera2_pane_g9

0xa4ca,	// (0x0006b989) main_camera2_pane_t5_ParamLimits

0xa4ca,	// (0x0006b989) main_camera2_pane_t5

0xa4dc,	// (0x0006b99b) main_camera2_pane_t6_ParamLimits

0xa4dc,	// (0x0006b99b) main_camera2_pane_t6

0xaa0a,	// (0x0006bec9) main_image2_pane_g1_ParamLimits

0xaa0a,	// (0x0006bec9) main_image2_pane_g1

0x8979,	// (0x00069e38) smil2_video_pane_ParamLimits

0x8979,	// (0x00069e38) smil2_video_pane

0x57e2,	// (0x00066ca1) aid_zoom_text_primary_cp

0x0178,	// (0x00061637) popup_preview_fixed_window

0x0c65,	// (0x00062124) im_reading_pane_g1

0xa3c0,	// (0x0006b87f) cams2_bc_adjust_pane_cp_ParamLimits

0xa3c0,	// (0x0006b87f) cams2_bc_adjust_pane_cp

0xa50c,	// (0x0006b9cb) cams2_bc_adjust_pane_ParamLimits

0xa50c,	// (0x0006b9cb) cams2_bc_adjust_pane

0xaa16,	// (0x0006bed5) cams2_bc_adjust_pane_g1

0xaa1e,	// (0x0006bedd) cams2_slider_pane

0xaa27,	// (0x0006bee6) cams2_slider_pane_g1

0xaa30,	// (0x0006beef) cams2_slider_pane_g2

0x0006,

0xf6c6,	// (0x00070b85) cams2_slider_pane_g

0x5c32,	// (0x000670f1) calc_display_pane_ParamLimits

0x5c50,	// (0x0006710f) calc_paper_pane_ParamLimits

0x5c6c,	// (0x0006712b) grid_calc_pane_ParamLimits

0x7913,	// (0x00068dd2) popup_clock_digital_window_t1_ParamLimits

0x8844,	// (0x00069d03) main_image_pane_t1

0x5c18,	// (0x000670d7) aid_size_cell_calc_ParamLimits

0x5c18,	// (0x000670d7) aid_size_cell_calc

0x9f70,	// (0x0006b42f) popup_blid_sat_info2_window_ParamLimits

0x9f70,	// (0x0006b42f) popup_blid_sat_info2_window

0xaa52,	// (0x0006bf11) aid_size_cell_blid

0xaa5a,	// (0x0006bf19) bg_popup_window_pane_cp07

0xaa7d,	// (0x0006bf3c) grid_popup_blid_pane

0xaa87,	// (0x0006bf46) heading_pane_cp05_ParamLimits

0xaa87,	// (0x0006bf46) heading_pane_cp05

0xeaef,	// (0x0006ffae) cell_popup_blid_pane_ParamLimits

0xeaef,	// (0x0006ffae) cell_popup_blid_pane

0xeb13,	// (0x0006ffd2) cell_popup_blid_pane_g1

0xeb1b,	// (0x0006ffda) cell_popup_blid_pane_t1

0xa735,	// (0x0006bbf4) mup2_indicator_pane_ParamLimits

0xa735,	// (0x0006bbf4) mup2_indicator_pane

0x7ecf,	// (0x0006938e) mup2_visualizer_osc_pane

0xa7cc,	// (0x0006bc8b) mup2_visualizer_spec_pane_ParamLimits

0xa7cc,	// (0x0006bc8b) mup2_visualizer_spec_pane

0xab33,	// (0x0006bff2) mup2_spec_half_pane

0xab3c,	// (0x0006bffb) mup2_spec_half_pane_cp

0xab46,	// (0x0006c005) mup2_spec_bar_pane_ParamLimits

0xab46,	// (0x0006c005) mup2_spec_bar_pane

0xa1b0,	// (0x0006b66f) mup2_spec_bar_pane_g1

0xa1ba,	// (0x0006b679) mup2_spec_bar_pane_g2

0x0001,

0xf639,	// (0x00070af8) mup2_spec_bar_pane_g

0xab65,	// (0x0006c024) mup2_osc_middle_pane

0xa1eb,	// (0x0006b6aa) mup2_visualizer_osc_pane_g1

0x01a2,	// (0x00061661) popup_number_entry_window_t1_ParamLimits

0x01b5,	// (0x00061674) popup_number_entry_window_t2_ParamLimits

0x01c7,	// (0x00061686) popup_number_entry_window_t3_ParamLimits

0x5a74,	// (0x00066f33) popup_number_entry_window_t5_ParamLimits

0x5a74,	// (0x00066f33) popup_number_entry_window_t5

0xf0fb,	// (0x000705ba) popup_number_entry_window_t_ParamLimits

0x01d9,	// (0x00061698) text_title_cp2_ParamLimits

0x8516,	// (0x000699d5) aid_hotspot_pointer_text2_pane

0x85b0,	// (0x00069a6f) main_viewer_pane_g9_ParamLimits

0x85b0,	// (0x00069a6f) main_viewer_pane_g9

0x0e94,	// (0x00062353) cale_month_pane_t1_ParamLimits

0x745a,	// (0x00068919) bg_cale_pane_ParamLimits

0x7472,	// (0x00068931) list_cale_pane_ParamLimits

0x0a8d,	// (0x00061f4c) listscroll_cale_day_pane_t1

0x7483,	// (0x00068942) scroll_pane_cp09_ParamLimits

0x8271,	// (0x00069730) main_mup_eq_pane_t1_ParamLimits

0x8271,	// (0x00069730) main_mup_eq_pane_t1

0x828b,	// (0x0006974a) main_mup_eq_pane_t2_ParamLimits

0x828b,	// (0x0006974a) main_mup_eq_pane_t2

0x82a5,	// (0x00069764) main_mup_eq_pane_t3_ParamLimits

0x82a5,	// (0x00069764) main_mup_eq_pane_t3

0x82bd,	// (0x0006977c) main_mup_eq_pane_t4_ParamLimits

0x82bd,	// (0x0006977c) main_mup_eq_pane_t4

0x82d5,	// (0x00069794) main_mup_eq_pane_t5_ParamLimits

0x82d5,	// (0x00069794) main_mup_eq_pane_t5

0x82ed,	// (0x000697ac) main_mup_eq_pane_t6_ParamLimits

0x82ed,	// (0x000697ac) main_mup_eq_pane_t6

0x8301,	// (0x000697c0) main_mup_eq_pane_t7_ParamLimits

0x8301,	// (0x000697c0) main_mup_eq_pane_t7

0x8315,	// (0x000697d4) main_mup_eq_pane_t8_ParamLimits

0x8315,	// (0x000697d4) main_mup_eq_pane_t8

0x832b,	// (0x000697ea) main_mup_eq_pane_t9_ParamLimits

0x832b,	// (0x000697ea) main_mup_eq_pane_t9

0x8343,	// (0x00069802) main_mup_eq_pane_t10_ParamLimits

0x8343,	// (0x00069802) main_mup_eq_pane_t10

0x0009,

0xf488,	// (0x00070947) main_mup_eq_pane_t_ParamLimits

0xf488,	// (0x00070947) main_mup_eq_pane_t

0x8400,	// (0x000698bf) mup_equalizer_pane_cp5_ParamLimits

0x8416,	// (0x000698d5) mup_equalizer_pane_cp6_ParamLimits

0x842e,	// (0x000698ed) mup_equalizer_pane_cp7_ParamLimits

0x011a,	// (0x000615d9) main_gallery_pane

0xa205,	// (0x0006b6c4) smil2_volume_pane

0xa20d,	// (0x0006b6cc) smil_status_volume_pane_g1_ParamLimits

0xa220,	// (0x0006b6df) smil_status_volume_pane_g2_ParamLimits

0xa233,	// (0x0006b6f2) smil_status_volume_pane_g3_ParamLimits

0xf63e,	// (0x00070afd) smil_status_volume_pane_g_ParamLimits

0xaa5a,	// (0x0006bf19) bg_popup_window_pane_cp07_ParamLimits

0xaa68,	// (0x0006bf27) blid_firmament_pane

0xab6e,	// (0x0006c02d) aid_size_cell_gallery_ParamLimits

0xab6e,	// (0x0006c02d) aid_size_cell_gallery

0xab7c,	// (0x0006c03b) grid_gallery_pane_ParamLimits

0xab7c,	// (0x0006c03b) grid_gallery_pane

0xab8c,	// (0x0006c04b) cell_gallery_pane_ParamLimits

0xab8c,	// (0x0006c04b) cell_gallery_pane

0xeb29,	// (0x0006ffe8) bg_cell_gallery_focus_pane_ParamLimits

0xeb29,	// (0x0006ffe8) bg_cell_gallery_focus_pane

0xeb3b,	// (0x0006fffa) cell_gallery_pane_g1_ParamLimits

0xeb3b,	// (0x0006fffa) cell_gallery_pane_g1

0xabda,	// (0x0006c099) cell_gallery_pane_g2_ParamLimits

0xabda,	// (0x0006c099) cell_gallery_pane_g2

0xabe7,	// (0x0006c0a6) cell_gallery_pane_g3_ParamLimits

0xabe7,	// (0x0006c0a6) cell_gallery_pane_g3

0xeb47,	// (0x00070006) cell_gallery_pane_g4_ParamLimits

0xeb47,	// (0x00070006) cell_gallery_pane_g4

0x0003,

0xf6ec,	// (0x00070bab) cell_gallery_pane_g_ParamLimits

0xf6ec,	// (0x00070bab) cell_gallery_pane_g

0xeb53,	// (0x00070012) bg_cell_gallery_focus_pane_g1

0xeb5b,	// (0x0007001a) bg_cell_gallery_focus_pane_g2

0xeb63,	// (0x00070022) bg_cell_gallery_focus_pane_g3

0xeb6b,	// (0x0007002a) bg_cell_gallery_focus_pane_g4

0xeb73,	// (0x00070032) bg_cell_gallery_focus_pane_g5

0xeb7b,	// (0x0007003a) bg_cell_gallery_focus_pane_g6

0xeb83,	// (0x00070042) bg_cell_gallery_focus_pane_g7

0xeb8b,	// (0x0007004a) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6f5,	// (0x00070bb4) bg_cell_gallery_focus_pane_g

0xeb93,	// (0x00070052) aid_firma_cardinal

0xeba7,	// (0x00070066) blid_firmament_pane_t1

0xebbe,	// (0x0007007d) blid_firmament_pane_t2

0xebd5,	// (0x00070094) blid_firmament_pane_t3

0xebec,	// (0x000700ab) blid_firmament_pane_t4

0x0003,

0xf706,	// (0x00070bc5) blid_firmament_pane_t

0xec03,	// (0x000700c2) blid_sat_info_pane

0xec13,	// (0x000700d2) blid_sat_info_pane_g1

0xec13,	// (0x000700d2) blid_sat_info_pane_g2

0x0001,

0xf70f,	// (0x00070bce) blid_sat_info_pane_g

0xec1d,	// (0x000700dc) blid_sat_info_pane_t1

0xec2b,	// (0x000700ea) smil2_volume_content_pane

0xec34,	// (0x000700f3) smil2_volume_pane_g1

0x5e9b,	// (0x0006735a) smil2_volume_content_pane_g1

0xec3c,	// (0x000700fb) smil2_volume_content_pane_g2

0xec45,	// (0x00070104) smil2_volume_content_pane_g3

0xec4e,	// (0x0007010d) smil2_volume_content_pane_g4

0xec57,	// (0x00070116) smil2_volume_content_pane_g5

0xec60,	// (0x0007011f) smil2_volume_content_pane_g6

0xec69,	// (0x00070128) smil2_volume_content_pane_g7

0xec72,	// (0x00070131) smil2_volume_content_pane_g8

0xec7b,	// (0x0007013a) smil2_volume_content_pane_g9

0xec84,	// (0x00070143) smil2_volume_content_pane_g10

0x0009,

0xf714,	// (0x00070bd3) smil2_volume_content_pane_g

0x61b0,	// (0x0006766f) cale_week_day_heading_pane_t1_ParamLimits

0x61dd,	// (0x0006769c) cale_week_day_heading_pane_t2_ParamLimits

0x620a,	// (0x000676c9) cale_week_day_heading_pane_t3_ParamLimits

0x6237,	// (0x000676f6) cale_week_day_heading_pane_t4_ParamLimits

0x6264,	// (0x00067723) cale_week_day_heading_pane_t5_ParamLimits

0x6291,	// (0x00067750) cale_week_day_heading_pane_t6_ParamLimits

0x62be,	// (0x0006777d) cale_week_day_heading_pane_t7_ParamLimits

0xf200,	// (0x000706bf) cale_week_day_heading_pane_t_ParamLimits

0x0a9f,	// (0x00061f5e) bg_cale_side_pane_ParamLimits

0x62eb,	// (0x000677aa) cale_week_time_pane_t1_ParamLimits

0x6303,	// (0x000677c2) cale_week_time_pane_t2_ParamLimits

0x631b,	// (0x000677da) cale_week_time_pane_t3_ParamLimits

0x6333,	// (0x000677f2) cale_week_time_pane_t4_ParamLimits

0x634b,	// (0x0006780a) cale_week_time_pane_t5_ParamLimits

0x6363,	// (0x00067822) cale_week_time_pane_t6_ParamLimits

0x637b,	// (0x0006783a) cale_week_time_pane_t7_ParamLimits

0x6393,	// (0x00067852) cale_week_time_pane_t8_ParamLimits

0xf20f,	// (0x000706ce) cale_week_time_pane_t_ParamLimits

0x63ab,	// (0x0006786a) cell_cale_week_pane_g2_ParamLimits

0x0a9f,	// (0x00061f5e) bg_cale_side_pane_cp01_ParamLimits

0x7227,	// (0x000686e6) cale_month_week_pane_t1_ParamLimits

0x723e,	// (0x000686fd) cale_month_week_pane_t2_ParamLimits

0x7255,	// (0x00068714) cale_month_week_pane_t3_ParamLimits

0x726c,	// (0x0006872b) cale_month_week_pane_t4_ParamLimits

0x7283,	// (0x00068742) cale_month_week_pane_t5_ParamLimits

0x729a,	// (0x00068759) cale_month_week_pane_t6_ParamLimits

0xf2e8,	// (0x000707a7) cale_month_week_pane_t_ParamLimits

0x7367,	// (0x00068826) cell_cale_month_pane_g1_ParamLimits

0x011a,	// (0x000615d9) main_cale_event_viewer_pane

0x011a,	// (0x000615d9) listscroll_cale_event_viewer_pane

0xec8d,	// (0x0007014c) list_cale_ev_pane

0xec95,	// (0x00070154) scroll_pane_cp023

0xeca1,	// (0x00070160) field_cale_ev_pane_ParamLimits

0xeca1,	// (0x00070160) field_cale_ev_pane

0xecbf,	// (0x0007017e) field_cale_ev_content_pane_ParamLimits

0xecbf,	// (0x0007017e) field_cale_ev_content_pane

0xeccb,	// (0x0007018a) field_cale_ev_pane_g1_ParamLimits

0xeccb,	// (0x0007018a) field_cale_ev_pane_g1

0xecd7,	// (0x00070196) field_cale_ev_pane_g2_ParamLimits

0xecd7,	// (0x00070196) field_cale_ev_pane_g2

0xecef,	// (0x000701ae) field_cale_ev_pane_g3_ParamLimits

0xecef,	// (0x000701ae) field_cale_ev_pane_g3

0x0002,

0xf729,	// (0x00070be8) field_cale_ev_pane_g_ParamLimits

0xf729,	// (0x00070be8) field_cale_ev_pane_g

0xed07,	// (0x000701c6) field_cale_ev_pane_t1_ParamLimits

0xed07,	// (0x000701c6) field_cale_ev_pane_t1

0xed1e,	// (0x000701dd) field_cale_ev_content_pane_t1_ParamLimits

0xed1e,	// (0x000701dd) field_cale_ev_content_pane_t1

0x84e0,	// (0x0006999f) bg_button_pane_cp01

0x08f3,	// (0x00061db2) listscroll_cale_week_pane_ParamLimits

0x5fd4,	// (0x00067493) popup_toolbar_window_cp01

0x0a8d,	// (0x00061f4c) listscroll_cale_week_pane_t1_ParamLimits

0x08f3,	// (0x00061db2) listscroll_cale_day_pane_ParamLimits

0x5fd4,	// (0x00067493) popup_toolbar_window_cp02

0x0a8d,	// (0x00061f4c) listscroll_cale_day_pane_t1_ParamLimits

0x08f3,	// (0x00061db2) main_cale_month_pane_ParamLimits

0xa077,	// (0x0006b536) popup_toolbar_window_cp03_ParamLimits

0xa077,	// (0x0006b536) popup_toolbar_window_cp03

0x882c,	// (0x00069ceb) main_image_pane_g2_ParamLimits

0x882c,	// (0x00069ceb) main_image_pane_g2

0x8838,	// (0x00069cf7) main_image_pane_g3_ParamLimits

0x8838,	// (0x00069cf7) main_image_pane_g3

0x0002,

0xf51a,	// (0x000709d9) main_image_pane_g_ParamLimits

0xf51a,	// (0x000709d9) main_image_pane_g

0x8844,	// (0x00069d03) main_image_pane_t1_ParamLimits

0x885b,	// (0x00069d1a) main_image_pane_t2_ParamLimits

0x885b,	// (0x00069d1a) main_image_pane_t2

0x886d,	// (0x00069d2c) main_image_pane_t3_ParamLimits

0x886d,	// (0x00069d2c) main_image_pane_t3

0x887f,	// (0x00069d3e) main_image_pane_t4_ParamLimits

0x887f,	// (0x00069d3e) main_image_pane_t4

0x0003,

0xf521,	// (0x000709e0) main_image_pane_t_ParamLimits

0xf521,	// (0x000709e0) main_image_pane_t

0x8891,	// (0x00069d50) popup_image_details_window_cp01

0x889b,	// (0x00069d5a) popup_toobar_trans_pane_cp01_ParamLimits

0x889b,	// (0x00069d5a) popup_toobar_trans_pane_cp01

0x9fc7,	// (0x0006b486) popup_image_details_window_ParamLimits

0x9fc7,	// (0x0006b486) popup_image_details_window

0x9fd5,	// (0x0006b494) popup_image_focus_window

0xa3b2,	// (0x0006b871) camera2_autofocus_pane_ParamLimits

0xa3b2,	// (0x0006b871) camera2_autofocus_pane

0x011a,	// (0x000615d9) bg_popup_sub_pane_cp06

0xed3c,	// (0x000701fb) popup_image_focus_window_g1

0xed44,	// (0x00070203) popup_image_focus_window_g2

0xed4c,	// (0x0007020b) popup_image_focus_window_g3

0xed54,	// (0x00070213) popup_image_focus_window_g4

0x0003,

0xf730,	// (0x00070bef) popup_image_focus_window_g

0xed5c,	// (0x0007021b) popup_image_focus_window_t1

0xed6a,	// (0x00070229) popup_image_focus_window_t2

0xed7a,	// (0x00070239) popup_image_focus_window_t3

0x0002,

0xf739,	// (0x00070bf8) popup_image_focus_window_t

0xed88,	// (0x00070247) camera2_autofocus_pane_g1

0x9f3f,	// (0x0006b3fe) bg_tb_trans_pane_cp01

0xed96,	// (0x00070255) popup_image_details_window_g1

0xeda9,	// (0x00070268) popup_image_details_window_g2

0x0002,

0xf74b,	// (0x00070c0a) popup_image_details_window_g

0xedd2,	// (0x00070291) popup_image_details_window_t1

0xede4,	// (0x000702a3) popup_image_details_window_t2

0xedfd,	// (0x000702bc) popup_image_details_window_t3

0xee11,	// (0x000702d0) popup_image_details_window_t4

0xee2c,	// (0x000702eb) popup_image_details_window_t5

0x0004,

0xf752,	// (0x00070c11) popup_image_details_window_t

0x08bb,	// (0x00061d7a) bg_calc_paper_pane_ParamLimits

0x011a,	// (0x000615d9) grid_highlight_pane_cp013

0x5d63,	// (0x00067222) list_calc_pane_ParamLimits

0x5d75,	// (0x00067234) scroll_pane_cp024

0x08f3,	// (0x00061db2) bg_calc_display_pane_ParamLimits

0x5d7d,	// (0x0006723c) calc_display_pane_t1_ParamLimits

0x5d92,	// (0x00067251) calc_display_pane_t2_ParamLimits

0x5da7,	// (0x00067266) calc_display_pane_t3_ParamLimits

0xf182,	// (0x00070641) calc_display_pane_t_ParamLimits

0x5e83,	// (0x00067342) cell_calc_pane_g2

0x0001,

0xf19f,	// (0x0007065e) cell_calc_pane_g

0x5e8c,	// (0x0006734b) cell_calc_pane_t1

0x0976,	// (0x00061e35) grid_highlight_pane_cp02_ParamLimits

0x098c,	// (0x00061e4b) toolbar_button_pane_cp01_ParamLimits

0x098c,	// (0x00061e4b) toolbar_button_pane_cp01

0x88d5,	// (0x00069d94) temp_image_control_pane_ParamLimits

0x88d5,	// (0x00069d94) temp_image_control_pane

0x9f3f,	// (0x0006b3fe) main_mp3_pane

0xee46,	// (0x00070305) temp_image_control_pane_g1_ParamLimits

0xee46,	// (0x00070305) temp_image_control_pane_g1

0xee54,	// (0x00070313) temp_image_control_pane_g2_ParamLimits

0xee54,	// (0x00070313) temp_image_control_pane_g2

0xee66,	// (0x00070325) temp_image_control_pane_g3_ParamLimits

0xee66,	// (0x00070325) temp_image_control_pane_g3

0xac24,	// (0x0006c0e3) temp_image_control_pane_g4_ParamLimits

0xac24,	// (0x0006c0e3) temp_image_control_pane_g4

0x0003,

0xf75d,	// (0x00070c1c) temp_image_control_pane_g_ParamLimits

0xf75d,	// (0x00070c1c) temp_image_control_pane_g

0xee46,	// (0x00070305) main_mp3_pane_g1

0xac35,	// (0x0006c0f4) main_mp3_pane_g2

0x0007,

0xf766,	// (0x00070c25) main_mp3_pane_g

0xeea9,	// (0x00070368) main_mp3_pane_t1

0x0b6e,	// (0x0006202d) main_camera_pane_g8_ParamLimits

0x0b6e,	// (0x0006202d) main_camera_pane_g8

0x6649,	// (0x00067b08) main_video_pane_g7_ParamLimits

0x6649,	// (0x00067b08) main_video_pane_g7

0xa4fa,	// (0x0006b9b9) main_camera2_pane_t7_ParamLimits

0xa4fa,	// (0x0006b9b9) main_camera2_pane_t7

0x0cbc,	// (0x0006217b) scroll_pane_cp025_ParamLimits

0x0cbc,	// (0x0006217b) scroll_pane_cp025

0x0cd0,	// (0x0006218f) scroll_pane_cp026_ParamLimits

0x0cd0,	// (0x0006218f) scroll_pane_cp026

0x0cdf,	// (0x0006219e) wml_content_pane_ParamLimits

0x011a,	// (0x000615d9) main_touch_calib_pane

0xacd9,	// (0x0006c198) main_touch_calib_pane_g1

0xace5,	// (0x0006c1a4) main_touch_calib_pane_g2

0xacf1,	// (0x0006c1b0) main_touch_calib_pane_g3

0xacfd,	// (0x0006c1bc) main_touch_calib_pane_g4

0x0003,

0xf784,	// (0x00070c43) main_touch_calib_pane_g

0xad09,	// (0x0006c1c8) main_touch_calib_pane_t1

0xad20,	// (0x0006c1df) main_touch_calib_pane_t2

0x0004,

0xf78d,	// (0x00070c4c) main_touch_calib_pane_t

0x7d5c,	// (0x0006921b) mup_progress_pane_cp02

0x7d7b,	// (0x0006923a) navi_pane_g1

0x7e36,	// (0x000692f5) navi_pane_mp_t3

0x9f3f,	// (0x0006b3fe) main_mp3_pane_ParamLimits

0xa0c8,	// (0x0006b587) navi_pane_ParamLimits

0xee46,	// (0x00070305) main_mp3_pane_g1_ParamLimits

0xac35,	// (0x0006c0f4) main_mp3_pane_g2_ParamLimits

0xac41,	// (0x0006c100) main_mp3_pane_g3_ParamLimits

0xac41,	// (0x0006c100) main_mp3_pane_g3

0xac4d,	// (0x0006c10c) main_mp3_pane_g4_ParamLimits

0xac4d,	// (0x0006c10c) main_mp3_pane_g4

0xee76,	// (0x00070335) main_mp3_pane_g5_ParamLimits

0xee76,	// (0x00070335) main_mp3_pane_g5

0xee84,	// (0x00070343) main_mp3_pane_g6_ParamLimits

0xee84,	// (0x00070343) main_mp3_pane_g6

0xee91,	// (0x00070350) main_mp3_pane_g7_ParamLimits

0xee91,	// (0x00070350) main_mp3_pane_g7

0xee9d,	// (0x0007035c) main_mp3_pane_g8_ParamLimits

0xee9d,	// (0x0007035c) main_mp3_pane_g8

0xf766,	// (0x00070c25) main_mp3_pane_g_ParamLimits

0xac59,	// (0x0006c118) main_mp3_pane_t2

0xac69,	// (0x0006c128) main_mp3_pane_t3

0xeeb7,	// (0x00070376) main_mp3_pane_t4

0xeec5,	// (0x00070384) main_mp3_pane_t5

0x0005,

0xf777,	// (0x00070c36) main_mp3_pane_t

0xeed3,	// (0x00070392) mup_progress_pane_cp01

0x57e2,	// (0x00066ca1) aid_zoom_text_secondary2

0xec8d,	// (0x0007014c) list_cale_ev2_pane

0xec95,	// (0x00070154) scroll_pane_cp023_ParamLimits

0xad75,	// (0x0006c234) field_cale_ev2_pane_ParamLimits

0xad75,	// (0x0006c234) field_cale_ev2_pane

0xad9e,	// (0x0006c25d) field_cale_ev2_pane_g1_ParamLimits

0xad9e,	// (0x0006c25d) field_cale_ev2_pane_g1

0xadaa,	// (0x0006c269) field_cale_ev2_pane_g2_ParamLimits

0xadaa,	// (0x0006c269) field_cale_ev2_pane_g2

0xadc2,	// (0x0006c281) field_cale_ev2_pane_g3_ParamLimits

0xadc2,	// (0x0006c281) field_cale_ev2_pane_g3

0x0003,

0xf798,	// (0x00070c57) field_cale_ev2_pane_g_ParamLimits

0xf798,	// (0x00070c57) field_cale_ev2_pane_g

0x49dd,	// (0x00065e9c) field_cale_ev2_pane_t1_ParamLimits

0x49dd,	// (0x00065e9c) field_cale_ev2_pane_t1

0x49f4,	// (0x00065eb3) field_cale_ev2_pane_t2_ParamLimits

0x49f4,	// (0x00065eb3) field_cale_ev2_pane_t2

0x0001,

0xf7a1,	// (0x00070c60) field_cale_ev2_pane_t_ParamLimits

0xf7a1,	// (0x00070c60) field_cale_ev2_pane_t

0x8626,	// (0x00069ae5) main_postcard_pane_g5_ParamLimits

0x8626,	// (0x00069ae5) main_postcard_pane_g5

0x8634,	// (0x00069af3) main_postcard_pane_g6_ParamLimits

0x8634,	// (0x00069af3) main_postcard_pane_g6

0x6491,	// (0x00067950) camera2_autofocus_pane_cp_ParamLimits

0x6491,	// (0x00067950) camera2_autofocus_pane_cp

0x9f3f,	// (0x0006b3fe) main_mup3_pane

0xae06,	// (0x0006c2c5) main_mup3_pane_g1_ParamLimits

0xae06,	// (0x0006c2c5) main_mup3_pane_g1

0xae27,	// (0x0006c2e6) main_mup3_pane_g2_ParamLimits

0xae27,	// (0x0006c2e6) main_mup3_pane_g2

0xae9f,	// (0x0006c35e) main_mup3_pane_g3_ParamLimits

0xae9f,	// (0x0006c35e) main_mup3_pane_g3

0xaede,	// (0x0006c39d) main_mup3_pane_g4_ParamLimits

0xaede,	// (0x0006c39d) main_mup3_pane_g4

0xaf1d,	// (0x0006c3dc) main_mup3_pane_g5_ParamLimits

0xaf1d,	// (0x0006c3dc) main_mup3_pane_g5

0xaf5c,	// (0x0006c41b) main_mup3_pane_g6_ParamLimits

0xaf5c,	// (0x0006c41b) main_mup3_pane_g6

0xeedb,	// (0x0007039a) main_mup3_pane_g7_ParamLimits

0xeedb,	// (0x0007039a) main_mup3_pane_g7

0x0007,

0xf7b1,	// (0x00070c70) main_mup3_pane_g_ParamLimits

0xf7b1,	// (0x00070c70) main_mup3_pane_g

0xafce,	// (0x0006c48d) main_mup3_pane_t1_ParamLimits

0xafce,	// (0x0006c48d) main_mup3_pane_t1

0xb039,	// (0x0006c4f8) main_mup3_pane_t2_ParamLimits

0xb039,	// (0x0006c4f8) main_mup3_pane_t2

0xb0fe,	// (0x0006c5bd) main_mup3_pane_t4_ParamLimits

0xb0fe,	// (0x0006c5bd) main_mup3_pane_t4

0xb14c,	// (0x0006c60b) main_mup3_pane_t5_ParamLimits

0xb14c,	// (0x0006c60b) main_mup3_pane_t5

0xb1f4,	// (0x0006c6b3) main_mup3_pane_t6_ParamLimits

0xb1f4,	// (0x0006c6b3) main_mup3_pane_t6

0x0005,

0xf7c2,	// (0x00070c81) main_mup3_pane_t_ParamLimits

0xf7c2,	// (0x00070c81) main_mup3_pane_t

0xb29c,	// (0x0006c75b) mup3_progress_pane_ParamLimits

0xb29c,	// (0x0006c75b) mup3_progress_pane

0xb307,	// (0x0006c7c6) popup_mup3_control_window_ParamLimits

0xb307,	// (0x0006c7c6) popup_mup3_control_window

0xeee9,	// (0x000703a8) popup_mup3_text_window

0xb320,	// (0x0006c7df) mup3_progress_pane_t1

0xb337,	// (0x0006c7f6) mup3_progress_pane_t2

0xeef1,	// (0x000703b0) mup3_progress_pane_t3

0x0002,

0xf7cf,	// (0x00070c8e) mup3_progress_pane_t

0xef08,	// (0x000703c7) mup_progress_pane_cp03

0x011a,	// (0x000615d9) bg_tb_trans_pane_cp04

0xb34e,	// (0x0006c80d) mup3_volume_pane

0xb356,	// (0x0006c815) popup_mup3_control_window_g1

0xb35f,	// (0x0006c81e) mup3_volume_pane_g1

0xb368,	// (0x0006c827) mup3_volume_pane_g2

0xb371,	// (0x0006c830) mup3_volume_pane_g3

0x0002,

0xf7d6,	// (0x00070c95) mup3_volume_pane_g

0x011a,	// (0x000615d9) bg_tb_trans_pane_cp03

0xef18,	// (0x000703d7) popup_mup3_text_window_g1

0xef20,	// (0x000703df) popup_mup3_text_window_t1

0x094d,	// (0x00061e0c) list_calc_item_pane_g1_ParamLimits

0xa947,	// (0x0006be06) mup_volume_pane_cp_g1

0xad37,	// (0x0006c1f6) main_touch_calib_pane_t3

0xad4b,	// (0x0006c20a) main_touch_calib_pane_t4

0xad5f,	// (0x0006c21e) main_touch_calib_pane_t5

0x0124,	// (0x000615e3) aid_cell_size_toolbar2

0x012c,	// (0x000615eb) aid_popup3_width_pane

0x46d0,	// (0x00065b8f) aid_zoom_text_msg_primary

0x6468,	// (0x00067927) vorec_t7

0x0911,	// (0x00061dd0) bg_calc_paper_pane_g1_ParamLimits

0x0929,	// (0x00061de8) bg_calc_paper_pane_g2_ParamLimits

0x091d,	// (0x00061ddc) bg_calc_paper_pane_g3_ParamLimits

0x0941,	// (0x00061e00) bg_calc_paper_pane_g4_ParamLimits

0x0935,	// (0x00061df4) bg_calc_paper_pane_g5_ParamLimits

0x5de6,	// (0x000672a5) bg_calc_paper_pane_g6_ParamLimits

0x5df7,	// (0x000672b6) bg_calc_paper_pane_g7_ParamLimits

0x5e08,	// (0x000672c7) bg_calc_paper_pane_g8_ParamLimits

0xf189,	// (0x00070648) bg_calc_paper_pane_g_ParamLimits

0x5e19,	// (0x000672d8) calc_bg_paper_pane_g9_ParamLimits

0x6578,	// (0x00067a37) image_qvga_pane_ParamLimits

0x6578,	// (0x00067a37) image_qvga_pane

0x07f0,	// (0x00061caf) bg_popup_sub_pane_cp04_ParamLimits

0x879b,	// (0x00069c5a) popup_mup_playback_window_g1_ParamLimits

0x87a7,	// (0x00069c66) popup_mup_playback_window_t1_ParamLimits

0x87bc,	// (0x00069c7b) popup_mup_playback_window_t2_ParamLimits

0xf515,	// (0x000709d4) popup_mup_playback_window_t_ParamLimits

0xa635,	// (0x0006baf4) main_mup2_pane_g3_ParamLimits

0xa635,	// (0x0006baf4) main_mup2_pane_g3

0x67bf,	// (0x00067c7e) popup_toolbar_window_cp04

0x8ec8,	// (0x0006a387) popup_call2_audio_second_window_g3_ParamLimits

0x8ec8,	// (0x0006a387) popup_call2_audio_second_window_g3

0x92d2,	// (0x0006a791) popup_call2_audio_first_window_g4_ParamLimits

0x92d2,	// (0x0006a791) popup_call2_audio_first_window_g4

0x9951,	// (0x0006ae10) popup_call2_audio_in_window_g4_ParamLimits

0x9951,	// (0x0006ae10) popup_call2_audio_in_window_g4

0x87d1,	// (0x00069c90) aid_area_sk_bg_cut_ParamLimits

0x87d1,	// (0x00069c90) aid_area_sk_bg_cut

0x87de,	// (0x00069c9d) aid_area_sk_bg_cut_2_ParamLimits

0x87de,	// (0x00069c9d) aid_area_sk_bg_cut_2

0xabca,	// (0x0006c089) aid_placing_details_win

0xabd2,	// (0x0006c091) aid_placing_details_win_2

0xed88,	// (0x00070247) camera2_autofocus_pane_g1_ParamLimits

0x59bd,	// (0x00066e7c) popup_fixed_preview_cale_window_ParamLimits

0x59bd,	// (0x00066e7c) popup_fixed_preview_cale_window

0x7ee9,	// (0x000693a8) navi_slider_pane_g3

0x7ef2,	// (0x000693b1) navi_slider_pane_g4

0x7efb,	// (0x000693ba) navi_slider_pane_g5

0x7ee9,	// (0x000693a8) navi_slider_pane_g6

0x7f04,	// (0x000693c3) navi_slider_pane_g7

0x844f,	// (0x0006990e) mup_scale_pane_g3

0x8458,	// (0x00069917) mup_scale_pane_g4

0x8461,	// (0x00069920) mup_scale_pane_g5

0x846a,	// (0x00069929) mup_scale_pane_g6

0x8473,	// (0x00069932) mup_scale_pane_g7

0x7ee9,	// (0x000693a8) cams2_slider_pane_g3

0xaa39,	// (0x0006bef8) cams2_slider_pane_g4

0xaa41,	// (0x0006bf00) cams2_slider_pane_g5

0x7ee9,	// (0x000693a8) cams2_slider_pane_g6

0xaa49,	// (0x0006bf08) cams2_slider_pane_g7

0xec13,	// (0x000700d2) camera2_autofocus_pane_cp_g1

0xef2e,	// (0x000703ed) bg_popup_preview_window_pane_cp02_ParamLimits

0xef2e,	// (0x000703ed) bg_popup_preview_window_pane_cp02

0xef3a,	// (0x000703f9) list_fp_cale_pane_ParamLimits

0xef3a,	// (0x000703f9) list_fp_cale_pane

0xef46,	// (0x00070405) popup_fixed_preview_cale_window_t1_ParamLimits

0xef46,	// (0x00070405) popup_fixed_preview_cale_window_t1

0xb37a,	// (0x0006c839) popup_fixed_preview_cale_window_t2_ParamLimits

0xb37a,	// (0x0006c839) popup_fixed_preview_cale_window_t2

0xb38f,	// (0x0006c84e) popup_fixed_preview_cale_window_t3_ParamLimits

0xb38f,	// (0x0006c84e) popup_fixed_preview_cale_window_t3

0x0002,

0xf7dd,	// (0x00070c9c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7dd,	// (0x00070c9c) popup_fixed_preview_cale_window_t

0xb3a4,	// (0x0006c863) list_single_fp_cale_pane_ParamLimits

0xb3a4,	// (0x0006c863) list_single_fp_cale_pane

0xef64,	// (0x00070423) list_single_fp_cale_pane_g1_ParamLimits

0xef64,	// (0x00070423) list_single_fp_cale_pane_g1

0xef70,	// (0x0007042f) list_single_fp_cale_pane_g2_ParamLimits

0xef70,	// (0x0007042f) list_single_fp_cale_pane_g2

0x0002,

0xf7e4,	// (0x00070ca3) list_single_fp_cale_pane_g_ParamLimits

0xf7e4,	// (0x00070ca3) list_single_fp_cale_pane_g

0xef89,	// (0x00070448) list_single_fp_cale_pane_t1_ParamLimits

0xef89,	// (0x00070448) list_single_fp_cale_pane_t1

0xef9b,	// (0x0007045a) list_single_fp_cale_pane_t2_ParamLimits

0xef9b,	// (0x0007045a) list_single_fp_cale_pane_t2

0x0001,

0xf7eb,	// (0x00070caa) list_single_fp_cale_pane_t_ParamLimits

0xf7eb,	// (0x00070caa) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x011a,	// (0x000615d9) main_dialer_pane

0xb3b6,	// (0x0006c875) aid_cell_size_keypad

0xb3c0,	// (0x0006c87f) dialer_ne_pane

0xb3ca,	// (0x0006c889) grid_dialer_command_1_pane

0xb3d2,	// (0x0006c891) grid_dialer_command_2_pane

0xb3da,	// (0x0006c899) grid_dialer_keypad_pane

0xb3ec,	// (0x0006c8ab) bg_popup_call_pane_cp06_ParamLimits

0xb3ec,	// (0x0006c8ab) bg_popup_call_pane_cp06

0xb3f8,	// (0x0006c8b7) dialer_ne_clear_pane_ParamLimits

0xb3f8,	// (0x0006c8b7) dialer_ne_clear_pane

0xefce,	// (0x0007048d) dialer_ne_pane_g1

0xefd6,	// (0x00070495) dialer_ne_pane_t1_ParamLimits

0xefd6,	// (0x00070495) dialer_ne_pane_t1

0xb404,	// (0x0006c8c3) dialer_ne_pane_t2_ParamLimits

0xb404,	// (0x0006c8c3) dialer_ne_pane_t2

0xb421,	// (0x0006c8e0) dialer_ne_pane_t3_ParamLimits

0xb421,	// (0x0006c8e0) dialer_ne_pane_t3

0x0002,

0xf7f0,	// (0x00070caf) dialer_ne_pane_t_ParamLimits

0xf7f0,	// (0x00070caf) dialer_ne_pane_t

0xb445,	// (0x0006c904) dialer_ne_pane_t3_copy1_ParamLimits

0xb445,	// (0x0006c904) dialer_ne_pane_t3_copy1

0xb469,	// (0x0006c928) cell_dialer_keypad_pane_ParamLimits

0xb469,	// (0x0006c928) cell_dialer_keypad_pane

0xb480,	// (0x0006c93f) cell_dialer_command_1_pane_ParamLimits

0xb480,	// (0x0006c93f) cell_dialer_command_1_pane

0xb496,	// (0x0006c955) cell_dialer_command_2_pane_ParamLimits

0xb496,	// (0x0006c955) cell_dialer_command_2_pane

0xefe8,	// (0x000704a7) bg_button_pane_cp02_ParamLimits

0xefe8,	// (0x000704a7) bg_button_pane_cp02

0xb4a5,	// (0x0006c964) cell_dialer_keypad_pane_g1_ParamLimits

0xb4a5,	// (0x0006c964) cell_dialer_keypad_pane_g1

0xefe8,	// (0x000704a7) bg_button_pane_cp03_ParamLimits

0xefe8,	// (0x000704a7) bg_button_pane_cp03

0xb4ba,	// (0x0006c979) cell_dialer_command_1_pane_g1_ParamLimits

0xb4ba,	// (0x0006c979) cell_dialer_command_1_pane_g1

0xeff4,	// (0x000704b3) bg_button_pane_cp04

0xb4ce,	// (0x0006c98d) cell_dialer_command_2_pane_g1

0x7ecf,	// (0x0006938e) bg_button_pane_cp06

0xeffc,	// (0x000704bb) dialer_ne_clear_pane_g1

0x7d87,	// (0x00069246) navi_pane_g2

0x7db5,	// (0x00069274) navi_pane_g3

0x0002,

0xf418,	// (0x000708d7) navi_pane_g

0x7e44,	// (0x00069303) navi_pane_mv_g2

0x7e6b,	// (0x0006932a) navi_pane_mv_g5

0x7e73,	// (0x00069332) navi_pane_mv_t1

0x08f3,	// (0x00061db2) main_clock2_pane

0xb4fd,	// (0x0006c9bc) main_clock2_list_pane_ParamLimits

0xb4fd,	// (0x0006c9bc) main_clock2_list_pane

0xb525,	// (0x0006c9e4) main_clock2_pane_t1_ParamLimits

0xb525,	// (0x0006c9e4) main_clock2_pane_t1

0xb553,	// (0x0006ca12) main_clock2_pane_t2_ParamLimits

0xb553,	// (0x0006ca12) main_clock2_pane_t2

0x0004,

0xf7f7,	// (0x00070cb6) main_clock2_pane_t_ParamLimits

0xf7f7,	// (0x00070cb6) main_clock2_pane_t

0xb5ba,	// (0x0006ca79) popup_clock_analogue_window_cp03_ParamLimits

0xb5ba,	// (0x0006ca79) popup_clock_analogue_window_cp03

0xb5d8,	// (0x0006ca97) popup_clock_digital_window_cp02_ParamLimits

0xb5d8,	// (0x0006ca97) popup_clock_digital_window_cp02

0xb645,	// (0x0006cb04) main_clock2_list_single_pane_ParamLimits

0xb645,	// (0x0006cb04) main_clock2_list_single_pane

0x7ecf,	// (0x0006938e) list_highlight_pane_cp05

0xf004,	// (0x000704c3) main_clock2_list_single_pane_t1

0x67bf,	// (0x00067c7e) popup_toolbar_window_cp04_ParamLimits

0xabf4,	// (0x0006c0b3) camera2_autofocus_pane_g2_ParamLimits

0xabf4,	// (0x0006c0b3) camera2_autofocus_pane_g2

0xac00,	// (0x0006c0bf) camera2_autofocus_pane_g3_ParamLimits

0xac00,	// (0x0006c0bf) camera2_autofocus_pane_g3

0xac0c,	// (0x0006c0cb) camera2_autofocus_pane_g4_ParamLimits

0xac0c,	// (0x0006c0cb) camera2_autofocus_pane_g4

0xac18,	// (0x0006c0d7) camera2_autofocus_pane_g5_ParamLimits

0xac18,	// (0x0006c0d7) camera2_autofocus_pane_g5

0x0004,

0xf740,	// (0x00070bff) camera2_autofocus_pane_g_ParamLimits

0xf740,	// (0x00070bff) camera2_autofocus_pane_g

0xade6,	// (0x0006c2a5) camera2_autofocus_pane_cp_g2

0xadee,	// (0x0006c2ad) camera2_autofocus_pane_cp_g3

0xadf6,	// (0x0006c2b5) camera2_autofocus_pane_cp_g4

0xadfe,	// (0x0006c2bd) camera2_autofocus_pane_cp_g5

0x0004,

0xf7a6,	// (0x00070c65) camera2_autofocus_pane_cp_g

0xb3e4,	// (0x0006c8a3) popup_dialer_spcha_window

0x011a,	// (0x000615d9) bg_popup_sub_pane_cp07

0xf012,	// (0x000704d1) list_spcha_pane

0xf01a,	// (0x000704d9) list_single_spcha_pane_ParamLimits

0xf01a,	// (0x000704d9) list_single_spcha_pane

0x011a,	// (0x000615d9) list_highlight_pane_cp06

0xf02b,	// (0x000704ea) list_single_spcha_pane_t1

0x96fb,	// (0x0006abba) popup_call2_audio_out_window_g4_ParamLimits

0x96fb,	// (0x0006abba) popup_call2_audio_out_window_g4

0x011a,	// (0x000615d9) main_imed2_pane

0x9fdd,	// (0x0006b49c) popup_imed_adjust2_window

0x9ff0,	// (0x0006b4af) popup_imed_trans_window_ParamLimits

0x9ff0,	// (0x0006b4af) popup_imed_trans_window

0xaab3,	// (0x0006bf72) popup_blid_sat_info2_window_t1

0xaac1,	// (0x0006bf80) popup_blid_sat_info2_window_t2

0x000a,

0xf6d5,	// (0x00070b94) popup_blid_sat_info2_window_t

0xb6ef,	// (0x0006cbae) aid_size_cell_colour_35

0xb709,	// (0x0006cbc8) aid_size_cell_colour_112

0xb720,	// (0x0006cbdf) aid_size_cell_effect

0x9f3f,	// (0x0006b3fe) bg_tb_trans_pane_cp02

0xf039,	// (0x000704f8) heading_imed_pane

0xb73a,	// (0x0006cbf9) listscroll_imed_pane

0xf045,	// (0x00070504) heading_imed_pane_g1

0xf04d,	// (0x0007050c) heading_imed_pane_t1

0xf05b,	// (0x0007051a) grid_imed_colour_35_pane_ParamLimits

0xf05b,	// (0x0007051a) grid_imed_colour_35_pane

0xb746,	// (0x0006cc05) grid_imed_effect_pane

0xf072,	// (0x00070531) list_imed_aspect_pane

0xb756,	// (0x0006cc15) scroll_pane_cp027_ParamLimits

0xb756,	// (0x0006cc15) scroll_pane_cp027

0xb762,	// (0x0006cc21) cell_imed_effect_pane_ParamLimits

0xb762,	// (0x0006cc21) cell_imed_effect_pane

0xf07a,	// (0x00070539) cell_imed_colour_pane_ParamLimits

0xf07a,	// (0x00070539) cell_imed_colour_pane

0xf0bc,	// (0x0007057b) cell_imed_colour_pane_g1_ParamLimits

0xf0bc,	// (0x0007057b) cell_imed_colour_pane_g1

0xf0cd,	// (0x0007058c) hgihlgiht_grid_pane_cp016_ParamLimits

0xf0cd,	// (0x0007058c) hgihlgiht_grid_pane_cp016

0xb77a,	// (0x0006cc39) cell_imed_effect_pane_g1

0xb782,	// (0x0006cc41) grid_highlight_pane_cp017

0xf0de,	// (0x0007059d) list_imed_single_pane_ParamLimits

0xf0de,	// (0x0007059d) list_imed_single_pane

0x011a,	// (0x000615d9) list_highlight_pane_cp07

0x105e,	// (0x0006251d) list_imed_aspect_pane_comp1_t1

0x9f31,	// (0x0006b3f0) bg_tb_trans_pane_cp05

0x1080,	// (0x0006253f) popup_imed_adjust2_window_g1

0x10a7,	// (0x00062566) popup_imed_adjust2_window_t1

0x10bf,	// (0x0006257e) slider_imed_adjust_pane

0x10d3,	// (0x00062592) slider_imed_adjust_pane_g1

0x10e3,	// (0x000625a2) slider_imed_adjust_pane_g2

0x10f3,	// (0x000625b2) slider_imed_adjust_pane_g3

0x1104,	// (0x000625c3) slider_imed_adjust_pane_g4

0x0003,

0xf814,	// (0x00070cd3) slider_imed_adjust_pane_g

0xb78b,	// (0x0006cc4a) aid_size_cell_clipart2

0xb797,	// (0x0006cc56) grid_imed_clipart_pane

0x1115,	// (0x000625d4) scroll_pane_cp031

0xb7a1,	// (0x0006cc60) cell_imed_clipart_pane_ParamLimits

0xb7a1,	// (0x0006cc60) cell_imed_clipart_pane

0xb7c3,	// (0x0006cc82) cell_imed_clipart_pane_g1

0x011a,	// (0x000615d9) grid_highlight_pane_cp014

0xb509,	// (0x0006c9c8) main_clock2_pane_g1_ParamLimits

0xb509,	// (0x0006c9c8) main_clock2_pane_g1

0xb5f0,	// (0x0006caaf) aid_call2_pane_cp10

0xb602,	// (0x0006cac1) aid_call_pane_cp10

0x7c95,	// (0x00069154) popup_clock_analogue_window_cp10_g1

0x7c95,	// (0x00069154) popup_clock_analogue_window_cp10_g2

0xb614,	// (0x0006cad3) popup_clock_analogue_window_cp10_g3

0xb614,	// (0x0006cad3) popup_clock_analogue_window_cp10_g4

0x7c95,	// (0x00069154) popup_clock_analogue_window_cp10_g5

0x0004,

0xf802,	// (0x00070cc1) popup_clock_analogue_window_cp10_g

0xb626,	// (0x0006cae5) popup_clock_analogue_window_cp10_t1

0xb657,	// (0x0006cb16) clock_digital_number_pane_cp10_ParamLimits

0xb657,	// (0x0006cb16) clock_digital_number_pane_cp10

0xb66f,	// (0x0006cb2e) clock_digital_number_pane_cp11_ParamLimits

0xb66f,	// (0x0006cb2e) clock_digital_number_pane_cp11

0xb687,	// (0x0006cb46) clock_digital_number_pane_cp12_ParamLimits

0xb687,	// (0x0006cb46) clock_digital_number_pane_cp12

0xb69f,	// (0x0006cb5e) clock_digital_number_pane_cp13_ParamLimits

0xb69f,	// (0x0006cb5e) clock_digital_number_pane_cp13

0xb6b7,	// (0x0006cb76) clock_digital_separator_pane_cp10_ParamLimits

0xb6b7,	// (0x0006cb76) clock_digital_separator_pane_cp10

0xb6cf,	// (0x0006cb8e) popup_clock_digital_window_cp02_t1_ParamLimits

0xb6cf,	// (0x0006cb8e) popup_clock_digital_window_cp02_t1

0x07e8,	// (0x00061ca7) clock_digital_number_pane_cp10_g1

0x07e8,	// (0x00061ca7) clock_digital_number_pane_cp10_g2

0x0001,

0xf81d,	// (0x00070cdc) clock_digital_number_pane_cp10_g

0x07e8,	// (0x00061ca7) clock_digital_separator_pane_cp10_g1

0x07e8,	// (0x00061ca7) clock_digital_separator_pane_g2_cp10

0x7e9f,	// (0x0006935e) navi_pane_vded_g4

0x7ea8,	// (0x00069367) navi_pane_vded_g5

0x7eb1,	// (0x00069370) navi_pane_vded_t1

0x011a,	// (0x000615d9) main_vded_pane

0xb7cc,	// (0x0006cc8b) main_vded_pane_g1

0xb7d8,	// (0x0006cc97) main_vded_pane_g2

0xb7e2,	// (0x0006cca1) main_vded_pane_g3

0x0002,

0xf822,	// (0x00070ce1) main_vded_pane_g

0xb7ec,	// (0x0006ccab) main_vded_pane_t1

0xb7fa,	// (0x0006ccb9) main_vded_pane_t2

0x0001,

0xf829,	// (0x00070ce8) main_vded_pane_t

0xb808,	// (0x0006ccc7) vded_slider_pane

0xb812,	// (0x0006ccd1) vded_video_pane

0x111d,	// (0x000625dc) vded_video_pane_g1

0xb81c,	// (0x0006ccdb) vded_video_pane_g2

0xec13,	// (0x000700d2) vded_video_pane_g3

0x0002,

0xf82e,	// (0x00070ced) vded_video_pane_g

0x1127,	// (0x000625e6) vded_slider_pane_g1

0xa947,	// (0x0006be06) vded_slider_pane_g2

0x1130,	// (0x000625ef) vded_slider_pane_g3

0x1139,	// (0x000625f8) vded_slider_pane_g4

0x1142,	// (0x00062601) vded_slider_pane_g5

0x0004,

0xf835,	// (0x00070cf4) vded_slider_pane_g

0xb2f9,	// (0x0006c7b8) mup3_rocker_pane_ParamLimits

0xb2f9,	// (0x0006c7b8) mup3_rocker_pane

0xb825,	// (0x0006cce4) mup3_control_keys_pane_g1

0xb82d,	// (0x0006ccec) mup3_control_keys_pane_g2

0xb835,	// (0x0006ccf4) mup3_control_keys_pane_g3

0xb83d,	// (0x0006ccfc) mup3_control_keys_pane_g4

0x0003,

0xf840,	// (0x00070cff) mup3_control_keys_pane_g

0x59db,	// (0x00066e9a) popup_toolbar2_fixed_window_cp01_ParamLimits

0x59db,	// (0x00066e9a) popup_toolbar2_fixed_window_cp01

0xb313,	// (0x0006c7d2) popup_toolbar2_fixed_window_cp02_ParamLimits

0xb313,	// (0x0006c7d2) popup_toolbar2_fixed_window_cp02

0x903a,	// (0x0006a4f9) popup_call2_audio_second_window_t4_ParamLimits

0x903a,	// (0x0006a4f9) popup_call2_audio_second_window_t4

0x9568,	// (0x0006aa27) popup_call2_audio_first_window_t6_ParamLimits

0x9568,	// (0x0006aa27) popup_call2_audio_first_window_t6

0x97fe,	// (0x0006acbd) popup_call2_audio_out_window_t6_ParamLimits

0x97fe,	// (0x0006acbd) popup_call2_audio_out_window_t6

0x011a,	// (0x000615d9) main_vitu_pane

0xb84d,	// (0x0006cd0c) aid_size_cell_itu_ParamLimits

0xb84d,	// (0x0006cd0c) aid_size_cell_itu

0x5a03,	// (0x00066ec2) bg_popup_window_pane_cp08_ParamLimits

0x5a03,	// (0x00066ec2) bg_popup_window_pane_cp08

0xb85b,	// (0x0006cd1a) field_vitu_entry_pane_ParamLimits

0xb85b,	// (0x0006cd1a) field_vitu_entry_pane

0xb86a,	// (0x0006cd29) grid_vitu_function_pane_ParamLimits

0xb86a,	// (0x0006cd29) grid_vitu_function_pane

0xb87a,	// (0x0006cd39) grid_vitu_itu_pane_ParamLimits

0xb87a,	// (0x0006cd39) grid_vitu_itu_pane

0xb88a,	// (0x0006cd49) cell_vitu_itu_pane_ParamLimits

0xb88a,	// (0x0006cd49) cell_vitu_itu_pane

0xb89f,	// (0x0006cd5e) cell_vitu_function_pane_ParamLimits

0xb89f,	// (0x0006cd5e) cell_vitu_function_pane

0x9f3f,	// (0x0006b3fe) bg_popup_sub_pane_cp08_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_popup_sub_pane_cp08

0xb8b1,	// (0x0006cd70) field_vitu_entry_pane_t1_ParamLimits

0xb8b1,	// (0x0006cd70) field_vitu_entry_pane_t1

0x1163,	// (0x00062622) field_vitu_entry_pane_t2_ParamLimits

0x1163,	// (0x00062622) field_vitu_entry_pane_t2

0x0001,

0xf84e,	// (0x00070d0d) field_vitu_entry_pane_t_ParamLimits

0xf84e,	// (0x00070d0d) field_vitu_entry_pane_t

0x1180,	// (0x0006263f) bg_button_pane_cp05_ParamLimits

0x1180,	// (0x0006263f) bg_button_pane_cp05

0xb8cc,	// (0x0006cd8b) cell_vitu_itu_pane_g1

0xb8e4,	// (0x0006cda3) cell_vitu_itu_pane_t1_ParamLimits

0xb8e4,	// (0x0006cda3) cell_vitu_itu_pane_t1

0xb8f6,	// (0x0006cdb5) cell_vitu_itu_pane_t2_ParamLimits

0xb8f6,	// (0x0006cdb5) cell_vitu_itu_pane_t2

0x0002,

0xf853,	// (0x00070d12) cell_vitu_itu_pane_t_ParamLimits

0xf853,	// (0x00070d12) cell_vitu_itu_pane_t

0x118e,	// (0x0006264d) bg_button_pane_cp07

0xb92b,	// (0x0006cdea) cell_vitu_function_pane_g1

0x5c8e,	// (0x0006714d) main_calc_pane_g1

0x57d6,	// (0x00066c95) aid_visual_content_pane

0x011a,	// (0x000615d9) main_vradio_pane

0xb934,	// (0x0006cdf3) main_vradio_pane_g1_ParamLimits

0xb934,	// (0x0006cdf3) main_vradio_pane_g1

0x1198,	// (0x00062657) main_vradio_pane_g2_ParamLimits

0x1198,	// (0x00062657) main_vradio_pane_g2

0x0001,

0xf85a,	// (0x00070d19) main_vradio_pane_g_ParamLimits

0xf85a,	// (0x00070d19) main_vradio_pane_g

0xb944,	// (0x0006ce03) main_vradio_pane_t1_ParamLimits

0xb944,	// (0x0006ce03) main_vradio_pane_t1

0xb956,	// (0x0006ce15) main_vradio_pane_t2_ParamLimits

0xb956,	// (0x0006ce15) main_vradio_pane_t2

0x11a5,	// (0x00062664) main_vradio_pane_t3_ParamLimits

0x11a5,	// (0x00062664) main_vradio_pane_t3

0x0002,

0xf85f,	// (0x00070d1e) main_vradio_pane_t_ParamLimits

0xf85f,	// (0x00070d1e) main_vradio_pane_t

0xb968,	// (0x0006ce27) vradio_rocker_control_pane_ParamLimits

0xb968,	// (0x0006ce27) vradio_rocker_control_pane

0xb974,	// (0x0006ce33) vradio_station_info_pane_ParamLimits

0xb974,	// (0x0006ce33) vradio_station_info_pane

0x11b9,	// (0x00062678) vradio_frequency_info_pane_ParamLimits

0x11b9,	// (0x00062678) vradio_frequency_info_pane

0xec13,	// (0x000700d2) vradio_station_info_pane_g1

0x11c8,	// (0x00062687) vradio_station_info_pane_t1_ParamLimits

0x11c8,	// (0x00062687) vradio_station_info_pane_t1

0x11ea,	// (0x000626a9) vradio_station_info_pane_t2_ParamLimits

0x11ea,	// (0x000626a9) vradio_station_info_pane_t2

0x0001,

0xf866,	// (0x00070d25) vradio_station_info_pane_t_ParamLimits

0xf866,	// (0x00070d25) vradio_station_info_pane_t

0x11fc,	// (0x000626bb) vradio_tuning_pane

0x1204,	// (0x000626c3) vradio_rocker_control_pane_g1

0x120c,	// (0x000626cb) vradio_rocker_control_pane_g2

0x1214,	// (0x000626d3) vradio_rocker_control_pane_g3

0x121c,	// (0x000626db) vradio_rocker_control_pane_g4

0x1224,	// (0x000626e3) vradio_rocker_control_pane_g5

0x0004,

0xf86b,	// (0x00070d2a) vradio_rocker_control_pane_g

0xb983,	// (0x0006ce42) vradio_frequency_info_pane_g1

0x122c,	// (0x000626eb) vradio_frequency_info_pane_t1_ParamLimits

0x122c,	// (0x000626eb) vradio_frequency_info_pane_t1

0xb98d,	// (0x0006ce4c) vradio_tuning_pane_g1

0xb996,	// (0x0006ce55) vradio_tuning_pane_t1

0x0140,	// (0x000615ff) area_side_right_pane_ParamLimits

0x0140,	// (0x000615ff) area_side_right_pane

0x9ee1,	// (0x0006b3a0) status_small_pane_g1

0x9ee9,	// (0x0006b3a8) status_small_pane_g2

0x9ef2,	// (0x0006b3b1) status_small_pane_g3

0x9efb,	// (0x0006b3ba) status_small_pane_g4

0x0003,

0xf62b,	// (0x00070aea) status_small_pane_g

0x9f04,	// (0x0006b3c3) status_small_pane_t1

0x011a,	// (0x000615d9) main_video3_pane

0x1240,	// (0x000626ff) cams_zoom_vslider_pane

0x1248,	// (0x00062707) image3_wide_pane_ParamLimits

0x1248,	// (0x00062707) image3_wide_pane

0x1262,	// (0x00062721) image3_wide_small_pane

0x126e,	// (0x0006272d) main_video3_pane_g1_ParamLimits

0x126e,	// (0x0006272d) main_video3_pane_g1

0x128a,	// (0x00062749) main_video3_pane_g2_ParamLimits

0x128a,	// (0x00062749) main_video3_pane_g2

0x0001,

0xf876,	// (0x00070d35) main_video3_pane_g_ParamLimits

0xf876,	// (0x00070d35) main_video3_pane_g

0x12a6,	// (0x00062765) main_video3_pane_t1_ParamLimits

0x12a6,	// (0x00062765) main_video3_pane_t1

0x12d1,	// (0x00062790) main_video3_pane_t2_ParamLimits

0x12d1,	// (0x00062790) main_video3_pane_t2

0x12fc,	// (0x000627bb) main_video3_pane_t3_ParamLimits

0x12fc,	// (0x000627bb) main_video3_pane_t3

0x0002,

0xf87b,	// (0x00070d3a) main_video3_pane_t_ParamLimits

0xf87b,	// (0x00070d3a) main_video3_pane_t

0x1329,	// (0x000627e8) cams_zoom_vslider_pane_g1

0x1332,	// (0x000627f1) cams_zoom_vslider_pane_g2

0x0001,

0xf882,	// (0x00070d41) cams_zoom_vslider_pane_g

0x133a,	// (0x000627f9) small_slider_vertical_pane

0xec13,	// (0x000700d2) small_slider_vertical_pane_g1

0xec13,	// (0x000700d2) small_slider_vertical_pane_g2

0x1342,	// (0x00062801) small_slider_vertical_pane_g3

0x0002,

0xf887,	// (0x00070d46) small_slider_vertical_pane_g

0x011a,	// (0x000615d9) main_hwr_training_pane

0x134b,	// (0x0006280a) hwr_training_instruct_pane_ParamLimits

0x134b,	// (0x0006280a) hwr_training_instruct_pane

0xb9a5,	// (0x0006ce64) hwr_training_navi_pane_ParamLimits

0xb9a5,	// (0x0006ce64) hwr_training_navi_pane

0xb9bf,	// (0x0006ce7e) hwr_training_write_pane_ParamLimits

0xb9bf,	// (0x0006ce7e) hwr_training_write_pane

0x011a,	// (0x000615d9) bg_frame_shadow_pane

0x1382,	// (0x00062841) hwr_training_write_pane_g1

0x138a,	// (0x00062849) hwr_training_write_pane_g2

0x1392,	// (0x00062851) hwr_training_write_pane_g3

0x139a,	// (0x00062859) hwr_training_write_pane_g4

0x13a2,	// (0x00062861) hwr_training_write_pane_g5

0x13aa,	// (0x00062869) hwr_training_write_pane_g6

0x13b2,	// (0x00062871) hwr_training_write_pane_g7

0x0006,

0xf88e,	// (0x00070d4d) hwr_training_write_pane_g

0xb9f7,	// (0x0006ceb6) hwr_training_navi_pane_g1_ParamLimits

0xb9f7,	// (0x0006ceb6) hwr_training_navi_pane_g1

0xba09,	// (0x0006cec8) hwr_training_navi_pane_g2_ParamLimits

0xba09,	// (0x0006cec8) hwr_training_navi_pane_g2

0xba1b,	// (0x0006ceda) hwr_training_navi_pane_g3_ParamLimits

0xba1b,	// (0x0006ceda) hwr_training_navi_pane_g3

0xba2b,	// (0x0006ceea) hwr_training_navi_pane_g4_ParamLimits

0xba2b,	// (0x0006ceea) hwr_training_navi_pane_g4

0x0004,

0xf89d,	// (0x00070d5c) hwr_training_navi_pane_g_ParamLimits

0xf89d,	// (0x00070d5c) hwr_training_navi_pane_g

0xba45,	// (0x0006cf04) hwr_training_navi_pane_t1

0xba53,	// (0x0006cf12) list_single_hwr_training_instruct_pane_ParamLimits

0xba53,	// (0x0006cf12) list_single_hwr_training_instruct_pane

0x13ba,	// (0x00062879) list_single_hwr_training_instruct_pane_t1

0xeb53,	// (0x00070012) bg_frame_shadow_pane_g1

0x13c9,	// (0x00062888) bg_frame_shadow_pane_g2

0x13d1,	// (0x00062890) bg_frame_shadow_pane_g3

0x13d9,	// (0x00062898) bg_frame_shadow_pane_g4

0x13e1,	// (0x000628a0) bg_frame_shadow_pane_g5

0x13e9,	// (0x000628a8) bg_frame_shadow_pane_g6

0x13f1,	// (0x000628b0) bg_frame_shadow_pane_g7

0x09d0,	// (0x00061e8f) bg_frame_shadow_pane_g8

0x0007,

0xf8a8,	// (0x00070d67) bg_frame_shadow_pane_g

0x011a,	// (0x000615d9) main_video_tele_dialer_pane

0xba78,	// (0x0006cf37) aid_size_cell_video_keypad_ParamLimits

0xba78,	// (0x0006cf37) aid_size_cell_video_keypad

0xba88,	// (0x0006cf47) grid_video_dialer_keypad_pane_ParamLimits

0xba88,	// (0x0006cf47) grid_video_dialer_keypad_pane

0xbabc,	// (0x0006cf7b) video_down_pane_cp_ParamLimits

0xbabc,	// (0x0006cf7b) video_down_pane_cp

0xbae6,	// (0x0006cfa5) cell_video_dialer_keypad_pane_ParamLimits

0xbae6,	// (0x0006cfa5) cell_video_dialer_keypad_pane

0x13f9,	// (0x000628b8) bg_button_pane_cp08_ParamLimits

0x13f9,	// (0x000628b8) bg_button_pane_cp08

0xbafb,	// (0x0006cfba) cell_video_dialer_keypad_pane_g1_ParamLimits

0xbafb,	// (0x0006cfba) cell_video_dialer_keypad_pane_g1

0xb2ed,	// (0x0006c7ac) mup3_rocker2_pane_ParamLimits

0xb2ed,	// (0x0006c7ac) mup3_rocker2_pane

0xec13,	// (0x000700d2) mup3_rocker2_pane_g1

0x9f4d,	// (0x0006b40c) main_dialer2_pane

0x011a,	// (0x000615d9) main_mp4_pane

0xbb3a,	// (0x0006cff9) main_mp4_pane_g1_ParamLimits

0xbb3a,	// (0x0006cff9) main_mp4_pane_g1

0xbb48,	// (0x0006d007) main_mp4_pane_g2_ParamLimits

0xbb48,	// (0x0006d007) main_mp4_pane_g2

0xbb56,	// (0x0006d015) main_mp4_pane_g3_ParamLimits

0xbb56,	// (0x0006d015) main_mp4_pane_g3

0xbb9b,	// (0x0006d05a) main_mp4_pane_g4_ParamLimits

0xbb9b,	// (0x0006d05a) main_mp4_pane_g4

0xbbc3,	// (0x0006d082) main_mp4_pane_g5_ParamLimits

0xbbc3,	// (0x0006d082) main_mp4_pane_g5

0x0005,

0xf8c8,	// (0x00070d87) main_mp4_pane_g_ParamLimits

0xf8c8,	// (0x00070d87) main_mp4_pane_g

0xbc13,	// (0x0006d0d2) main_mp4_pane_t1_ParamLimits

0xbc13,	// (0x0006d0d2) main_mp4_pane_t1

0xbc6f,	// (0x0006d12e) main_mp4_pane_t2_ParamLimits

0xbc6f,	// (0x0006d12e) main_mp4_pane_t2

0x1405,	// (0x000628c4) main_mp4_pane_t3_ParamLimits

0x1405,	// (0x000628c4) main_mp4_pane_t3

0xbcc1,	// (0x0006d180) main_mp4_pane_t4_ParamLimits

0xbcc1,	// (0x0006d180) main_mp4_pane_t4

0x0003,

0xf8d5,	// (0x00070d94) main_mp4_pane_t_ParamLimits

0xf8d5,	// (0x00070d94) main_mp4_pane_t

0xbd05,	// (0x0006d1c4) mp4_progress_pane_ParamLimits

0xbd05,	// (0x0006d1c4) mp4_progress_pane

0xbd4f,	// (0x0006d20e) mp4_rocker_pane_ParamLimits

0xbd4f,	// (0x0006d20e) mp4_rocker_pane

0x142d,	// (0x000628ec) mp4_progress_pane_t1

0x1446,	// (0x00062905) mp4_progress_pane_t2

0x0001,

0xf8de,	// (0x00070d9d) mp4_progress_pane_t

0x145f,	// (0x0006291e) mup_progress_pane_cp04

0xec13,	// (0x000700d2) mp4_rocker_pane_g1

0xbd6f,	// (0x0006d22e) aid_cell_size_keypad2_ParamLimits

0xbd6f,	// (0x0006d22e) aid_cell_size_keypad2

0xbd7f,	// (0x0006d23e) dialer2_ne_pane_ParamLimits

0xbd7f,	// (0x0006d23e) dialer2_ne_pane

0xbd8d,	// (0x0006d24c) grid_dialer2_keypad_pane_ParamLimits

0xbd8d,	// (0x0006d24c) grid_dialer2_keypad_pane

0x1d46,	// (0x00063205) bg_popup_call_pane_cp07_ParamLimits

0x1d46,	// (0x00063205) bg_popup_call_pane_cp07

0xbd9d,	// (0x0006d25c) dialer2_ne_pane_t1_ParamLimits

0xbd9d,	// (0x0006d25c) dialer2_ne_pane_t1

0xbdc2,	// (0x0006d281) cell_dialer2_keypad_pane_ParamLimits

0xbdc2,	// (0x0006d281) cell_dialer2_keypad_pane

0x1487,	// (0x00062946) bg_button_pane_pane_cp04_ParamLimits

0x1487,	// (0x00062946) bg_button_pane_pane_cp04

0xbdd7,	// (0x0006d296) cell_dialer2_keypad_pane_g1_ParamLimits

0xbdd7,	// (0x0006d296) cell_dialer2_keypad_pane_g1

0x66f4,	// (0x00067bb3) aid_placing_vt_set_content_ParamLimits

0x66f4,	// (0x00067bb3) aid_placing_vt_set_content

0x670e,	// (0x00067bcd) aid_placing_vt_set_title_ParamLimits

0x670e,	// (0x00067bcd) aid_placing_vt_set_title

0x011a,	// (0x000615d9) main_image3_pane

0xbe71,	// (0x0006d330) area_side_right_pane_cp01_ParamLimits

0xbe71,	// (0x0006d330) area_side_right_pane_cp01

0x22e4,	// (0x000637a3) main_image3_pane_g1_ParamLimits

0x22e4,	// (0x000637a3) main_image3_pane_g1

0xbe9e,	// (0x0006d35d) main_image3_pane_g2_ParamLimits

0xbe9e,	// (0x0006d35d) main_image3_pane_g2

0xbeb7,	// (0x0006d376) main_image3_pane_g3_ParamLimits

0xbeb7,	// (0x0006d376) main_image3_pane_g3

0xbed0,	// (0x0006d38f) main_image3_pane_g4_ParamLimits

0xbed0,	// (0x0006d38f) main_image3_pane_g4

0x0003,

0xf8ed,	// (0x00070dac) main_image3_pane_g_ParamLimits

0xf8ed,	// (0x00070dac) main_image3_pane_g

0xbee9,	// (0x0006d3a8) main_image3_pane_t1_ParamLimits

0xbee9,	// (0x0006d3a8) main_image3_pane_t1

0xbf0e,	// (0x0006d3cd) main_image3_pane_t2_ParamLimits

0xbf0e,	// (0x0006d3cd) main_image3_pane_t2

0xbf2d,	// (0x0006d3ec) main_image3_pane_t3_ParamLimits

0xbf2d,	// (0x0006d3ec) main_image3_pane_t3

0x0003,

0xf8f6,	// (0x00070db5) main_image3_pane_t_ParamLimits

0xf8f6,	// (0x00070db5) main_image3_pane_t

0x5a03,	// (0x00066ec2) grid_sctrl_middle_pane_cp01_ParamLimits

0x5a03,	// (0x00066ec2) grid_sctrl_middle_pane_cp01

0xbf8e,	// (0x0006d44d) cell_sctrl_middle_pane_cp01_ParamLimits

0xbf8e,	// (0x0006d44d) cell_sctrl_middle_pane_cp01

0xbf9f,	// (0x0006d45e) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0xbf9f,	// (0x0006d45e) cell_sctrl_middle_pane_cp01_g1

0x011a,	// (0x000615d9) main_call4_pane

0xbfac,	// (0x0006d46b) aid_size_button_call4_ParamLimits

0xbfac,	// (0x0006d46b) aid_size_button_call4

0xbfdc,	// (0x0006d49b) call4_windows_pane_ParamLimits

0xbfdc,	// (0x0006d49b) call4_windows_pane

0xbff6,	// (0x0006d4b5) grid_call4_button_pane_ParamLimits

0xbff6,	// (0x0006d4b5) grid_call4_button_pane

0x1493,	// (0x00062952) call4_windows_conf_pane

0x14aa,	// (0x00062969) popup_call4_audio_first_window_ParamLimits

0x14aa,	// (0x00062969) popup_call4_audio_first_window

0x14f6,	// (0x000629b5) popup_call4_audio_second_window_ParamLimits

0x14f6,	// (0x000629b5) popup_call4_audio_second_window

0x150a,	// (0x000629c9) popup_call4_audio_wait_window_ParamLimits

0x150a,	// (0x000629c9) popup_call4_audio_wait_window

0xc01a,	// (0x0006d4d9) cell_call4_button_pane_ParamLimits

0xc01a,	// (0x0006d4d9) cell_call4_button_pane

0xc03f,	// (0x0006d4fe) bg_button_pane_cp09_ParamLimits

0xc03f,	// (0x0006d4fe) bg_button_pane_cp09

0xc04b,	// (0x0006d50a) cell_call4_button_pane_g1_ParamLimits

0xc04b,	// (0x0006d50a) cell_call4_button_pane_g1

0xc058,	// (0x0006d517) cell_call4_button_pane_t1_ParamLimits

0xc058,	// (0x0006d517) cell_call4_button_pane_t1

0x1552,	// (0x00062a11) popup_call4_audio_conf_window_ParamLimits

0x1552,	// (0x00062a11) popup_call4_audio_conf_window

0xb320,	// (0x0006c7df) mup3_progress_pane_t1_ParamLimits

0xb337,	// (0x0006c7f6) mup3_progress_pane_t2_ParamLimits

0xeef1,	// (0x000703b0) mup3_progress_pane_t3_ParamLimits

0xf7cf,	// (0x00070c8e) mup3_progress_pane_t_ParamLimits

0xef08,	// (0x000703c7) mup_progress_pane_cp03_ParamLimits

0xb845,	// (0x0006cd04) mup3_control_keys_pane_g4_copy1

0xbd33,	// (0x0006d1f2) mp4_rocker2_pane_ParamLimits

0xbd33,	// (0x0006d1f2) mp4_rocker2_pane

0x156e,	// (0x00062a2d) mp4_rocker2_pane_g1

0x1566,	// (0x00062a25) mp4_rocker2_pane_g2

0xc06a,	// (0x0006d529) mp4_rocker2_pane_g3

0xc072,	// (0x0006d531) mp4_rocker2_pane_g4

0xc07a,	// (0x0006d539) mp4_rocker2_pane_g5

0x0004,

0xf8ff,	// (0x00070dbe) mp4_rocker2_pane_g

0x011a,	// (0x000615d9) main_camera4_pane

0x011a,	// (0x000615d9) main_video4_pane

0xba98,	// (0x0006cf57) main_video_tele_dialer_pane_t1_ParamLimits

0xba98,	// (0x0006cf57) main_video_tele_dialer_pane_t1

0xbaaa,	// (0x0006cf69) main_video_tele_dialer_pane_t2_ParamLimits

0xbaaa,	// (0x0006cf69) main_video_tele_dialer_pane_t2

0x0001,

0xf8b9,	// (0x00070d78) main_video_tele_dialer_pane_t_ParamLimits

0xf8b9,	// (0x00070d78) main_video_tele_dialer_pane_t

0xc09a,	// (0x0006d559) cam4_autofocus_pane_ParamLimits

0xc09a,	// (0x0006d559) cam4_autofocus_pane

0xc0a8,	// (0x0006d567) cam4_image_uncrop_pane_ParamLimits

0xc0a8,	// (0x0006d567) cam4_image_uncrop_pane

0xc0bf,	// (0x0006d57e) cam4_indicators_pane_ParamLimits

0xc0bf,	// (0x0006d57e) cam4_indicators_pane

0xc0db,	// (0x0006d59a) main_camera4_pane_g1_ParamLimits

0xc0db,	// (0x0006d59a) main_camera4_pane_g1

0xc0e7,	// (0x0006d5a6) main_camera4_pane_g2_ParamLimits

0xc0e7,	// (0x0006d5a6) main_camera4_pane_g2

0xc0e7,	// (0x0006d5a6) main_camera4_pane_g3_ParamLimits

0xc0e7,	// (0x0006d5a6) main_camera4_pane_g3

0xc0f3,	// (0x0006d5b2) main_camera4_pane_g4_ParamLimits

0xc0f3,	// (0x0006d5b2) main_camera4_pane_g4

0xc0ff,	// (0x0006d5be) main_camera4_pane_g5_ParamLimits

0xc0ff,	// (0x0006d5be) main_camera4_pane_g5

0x0005,

0xf90a,	// (0x00070dc9) main_camera4_pane_g_ParamLimits

0xf90a,	// (0x00070dc9) main_camera4_pane_g

0xc119,	// (0x0006d5d8) main_camera4_pane_t1_ParamLimits

0xc119,	// (0x0006d5d8) main_camera4_pane_t1

0xee76,	// (0x00070335) bg_tb_trans_pane_cp06

0xc169,	// (0x0006d628) cam4_indicators_pane_g1

0xc17a,	// (0x0006d639) cam4_indicators_pane_g2

0x0002,

0xf925,	// (0x00070de4) cam4_indicators_pane_g

0xc198,	// (0x0006d657) cam4_indicators_pane_t1

0xc1c2,	// (0x0006d681) main_video4_pane_g1_ParamLimits

0xc1c2,	// (0x0006d681) main_video4_pane_g1

0xc1ce,	// (0x0006d68d) main_video4_pane_g2_ParamLimits

0xc1ce,	// (0x0006d68d) main_video4_pane_g2

0xc1da,	// (0x0006d699) main_video4_pane_g3_ParamLimits

0xc1da,	// (0x0006d699) main_video4_pane_g3

0xc1e6,	// (0x0006d6a5) main_video4_pane_g4_ParamLimits

0xc1e6,	// (0x0006d6a5) main_video4_pane_g4

0x0004,

0xf92c,	// (0x00070deb) main_video4_pane_g_ParamLimits

0xf92c,	// (0x00070deb) main_video4_pane_g

0xc206,	// (0x0006d6c5) vid4_indicators_pane_ParamLimits

0xc206,	// (0x0006d6c5) vid4_indicators_pane

0xc224,	// (0x0006d6e3) video4_image_uncrop_cif_pane_ParamLimits

0xc224,	// (0x0006d6e3) video4_image_uncrop_cif_pane

0xc233,	// (0x0006d6f2) video4_image_uncrop_nhd_pane_ParamLimits

0xc233,	// (0x0006d6f2) video4_image_uncrop_nhd_pane

0xc0a8,	// (0x0006d567) video4_image_uncrop_vga_pane_ParamLimits

0xc0a8,	// (0x0006d567) video4_image_uncrop_vga_pane

0x9f3f,	// (0x0006b3fe) bg_tb_trans_pane_cp07

0xc24a,	// (0x0006d709) vid4_indicators_pane_g1

0xc25b,	// (0x0006d71a) vid4_indicators_pane_g2

0xc26c,	// (0x0006d72b) vid4_indicators_pane_g3

0x0004,

0xf937,	// (0x00070df6) vid4_indicators_pane_g

0xc299,	// (0x0006d758) vid4_indicators_pane_t1

0xc2b2,	// (0x0006d771) cam4_autofocus_pane_g1

0xc2ba,	// (0x0006d779) cam4_autofocus_pane_g2

0xc2c2,	// (0x0006d781) cam4_autofocus_pane_g3

0x0002,

0xf942,	// (0x00070e01) cam4_autofocus_pane_g

0xc2ca,	// (0x0006d789) cam4_autofocus_pane_g3_copy1

0xbaca,	// (0x0006cf89) video_down_pane_cp_t1

0xbad8,	// (0x0006cf97) video_down_pane_cp_t2

0x0001,

0xf8be,	// (0x00070d7d) video_down_pane_cp_t

0x5a03,	// (0x00066ec2) popup_vitu2_window_ParamLimits

0x5a03,	// (0x00066ec2) popup_vitu2_window

0xc2d2,	// (0x0006d791) aid_size_cell2_itu2_ParamLimits

0xc2d2,	// (0x0006d791) aid_size_cell2_itu2

0xc2f4,	// (0x0006d7b3) aid_size_cell_itu2_ParamLimits

0xc2f4,	// (0x0006d7b3) aid_size_cell_itu2

0x1d46,	// (0x00063205) bg_popup_window_pane_cp09_ParamLimits

0x1d46,	// (0x00063205) bg_popup_window_pane_cp09

0xc338,	// (0x0006d7f7) field_vitu2_entry_pane_ParamLimits

0xc338,	// (0x0006d7f7) field_vitu2_entry_pane

0xc358,	// (0x0006d817) grid_vitu2_function_pane_ParamLimits

0xc358,	// (0x0006d817) grid_vitu2_function_pane

0xc39c,	// (0x0006d85b) grid_vitu2_itu_pane_ParamLimits

0xc39c,	// (0x0006d85b) grid_vitu2_itu_pane

0xc414,	// (0x0006d8d3) cell_vitu2_itu_pane_ParamLimits

0xc414,	// (0x0006d8d3) cell_vitu2_itu_pane

0xc429,	// (0x0006d8e8) cell_vitu2_function_pane_ParamLimits

0xc429,	// (0x0006d8e8) cell_vitu2_function_pane

0x1576,	// (0x00062a35) bg_popup_call_pane_cp08_ParamLimits

0x1576,	// (0x00062a35) bg_popup_call_pane_cp08

0x158f,	// (0x00062a4e) field_vitu2_entry_pane_g1

0x159b,	// (0x00062a5a) field_vitu2_entry_pane_g2

0x0002,

0xf949,	// (0x00070e08) field_vitu2_entry_pane_g

0x4a09,	// (0x00065ec8) field_vitu2_entry_pane_t1_ParamLimits

0x4a09,	// (0x00065ec8) field_vitu2_entry_pane_t1

0x4a38,	// (0x00065ef7) field_vitu2_entry_pane_t2_ParamLimits

0x4a38,	// (0x00065ef7) field_vitu2_entry_pane_t2

0x0001,

0xf950,	// (0x00070e0f) field_vitu2_entry_pane_t_ParamLimits

0xf950,	// (0x00070e0f) field_vitu2_entry_pane_t

0xc468,	// (0x0006d927) bg_button_pane_cp010_ParamLimits

0xc468,	// (0x0006d927) bg_button_pane_cp010

0xc476,	// (0x0006d935) cell_vitu2_itu_pane_g1

0xc494,	// (0x0006d953) cell_vitu2_itu_pane_t1_ParamLimits

0xc494,	// (0x0006d953) cell_vitu2_itu_pane_t1

0x4a55,	// (0x00065f14) cell_vitu2_itu_pane_t2_ParamLimits

0x4a55,	// (0x00065f14) cell_vitu2_itu_pane_t2

0x0002,

0xf95a,	// (0x00070e19) cell_vitu2_itu_pane_t_ParamLimits

0xf95a,	// (0x00070e19) cell_vitu2_itu_pane_t

0x9f3f,	// (0x0006b3fe) bg_button_pane_cp011

0xc4e6,	// (0x0006d9a5) cell_vitu2_function_pane_g1

0x011a,	// (0x000615d9) main_myfav_hc_pane

0xbf6f,	// (0x0006d42e) popup_image3_note_pane_ParamLimits

0xbf6f,	// (0x0006d42e) popup_image3_note_pane

0xbf7d,	// (0x0006d43c) popup_image3_tool_bar_pane_ParamLimits

0xbf7d,	// (0x0006d43c) popup_image3_tool_bar_pane

0x4ac3,	// (0x00065f82) cell_vitu2_itu_pane_t3_ParamLimits

0x4ac3,	// (0x00065f82) cell_vitu2_itu_pane_t3

0x011a,	// (0x000615d9) bg_popup_trans_pane

0x15da,	// (0x00062a99) grid_image3_tool_bar_pane

0x15e4,	// (0x00062aa3) bg_popup_trans_pane_g1

0x0dc5,	// (0x00062284) bg_popup_trans_pane_g2

0x15ec,	// (0x00062aab) bg_popup_trans_pane_g3

0x15f4,	// (0x00062ab3) bg_popup_trans_pane_g4

0x15fc,	// (0x00062abb) bg_popup_trans_pane_g5

0x1604,	// (0x00062ac3) bg_popup_trans_pane_g6

0x160c,	// (0x00062acb) bg_popup_trans_pane_g7

0x1614,	// (0x00062ad3) bg_popup_trans_pane_g8

0x0da5,	// (0x00062264) bg_popup_trans_pane_g9

0x0008,

0xf961,	// (0x00070e20) bg_popup_trans_pane_g

0x161c,	// (0x00062adb) cell_image3_tool_bar_pane_ParamLimits

0x161c,	// (0x00062adb) cell_image3_tool_bar_pane

0xec13,	// (0x000700d2) cell_image3_tool_bar_pane_g1

0x011a,	// (0x000615d9) bg_popup_trans_pane_cp1

0x1630,	// (0x00062aef) popup_image3_note_pane_t1

0x163e,	// (0x00062afd) popup_image3_note_pane_t2

0x164c,	// (0x00062b0b) popup_image3_note_pane_t3

0x0002,

0xf974,	// (0x00070e33) popup_image3_note_pane_t

0x165a,	// (0x00062b19) popup_image3_note_pane_t3_copy1

0xc4fa,	// (0x0006d9b9) bg_myfav_hc_instruction_pane_ParamLimits

0xc4fa,	// (0x0006d9b9) bg_myfav_hc_instruction_pane

0xc512,	// (0x0006d9d1) cell_myfav_contact_pane_ParamLimits

0xc512,	// (0x0006d9d1) cell_myfav_contact_pane

0xc52c,	// (0x0006d9eb) cell_myfav_contact_pane_cp1_ParamLimits

0xc52c,	// (0x0006d9eb) cell_myfav_contact_pane_cp1

0xc544,	// (0x0006da03) cell_myfav_contact_pane_cp2_ParamLimits

0xc544,	// (0x0006da03) cell_myfav_contact_pane_cp2

0xc55c,	// (0x0006da1b) cell_myfav_contact_pane_cp3_ParamLimits

0xc55c,	// (0x0006da1b) cell_myfav_contact_pane_cp3

0xc573,	// (0x0006da32) cell_myfav_contact_pane_cp4_ParamLimits

0xc573,	// (0x0006da32) cell_myfav_contact_pane_cp4

0xc589,	// (0x0006da48) cell_myfav_contact_pane_cp5_ParamLimits

0xc589,	// (0x0006da48) cell_myfav_contact_pane_cp5

0xc59d,	// (0x0006da5c) cell_myfav_contact_pane_cp6_ParamLimits

0xc59d,	// (0x0006da5c) cell_myfav_contact_pane_cp6

0xc5b1,	// (0x0006da70) cell_myfav_contact_pane_cp7_ParamLimits

0xc5b1,	// (0x0006da70) cell_myfav_contact_pane_cp7

0x1668,	// (0x00062b27) listscroll_gen_pane_cp05

0xc5c9,	// (0x0006da88) main_myfav_hc_pane_g1_ParamLimits

0xc5c9,	// (0x0006da88) main_myfav_hc_pane_g1

0xc5df,	// (0x0006da9e) main_myfav_hc_pane_g2_ParamLimits

0xc5df,	// (0x0006da9e) main_myfav_hc_pane_g2

0x0002,

0xf97b,	// (0x00070e3a) main_myfav_hc_pane_g_ParamLimits

0xf97b,	// (0x00070e3a) main_myfav_hc_pane_g

0xc60d,	// (0x0006dacc) main_myfav_hc_pane_t1_ParamLimits

0xc60d,	// (0x0006dacc) main_myfav_hc_pane_t1

0x1671,	// (0x00062b30) main_myfav_hc_pane_t2_ParamLimits

0x1671,	// (0x00062b30) main_myfav_hc_pane_t2

0x1683,	// (0x00062b42) main_myfav_hc_pane_t3_ParamLimits

0x1683,	// (0x00062b42) main_myfav_hc_pane_t3

0xc624,	// (0x0006dae3) main_myfav_hc_pane_t4_ParamLimits

0xc624,	// (0x0006dae3) main_myfav_hc_pane_t4

0x0004,

0xf982,	// (0x00070e41) main_myfav_hc_pane_t_ParamLimits

0xf982,	// (0x00070e41) main_myfav_hc_pane_t

0xec13,	// (0x000700d2) bg_myfav_hc_instruction_pane_g1

0x1695,	// (0x00062b54) cell_myfav_contact_pane_g1_ParamLimits

0x1695,	// (0x00062b54) cell_myfav_contact_pane_g1

0x1695,	// (0x00062b54) cell_myfav_contact_pane_g2_ParamLimits

0x1695,	// (0x00062b54) cell_myfav_contact_pane_g2

0x16a1,	// (0x00062b60) cell_myfav_contact_pane_g3_ParamLimits

0x16a1,	// (0x00062b60) cell_myfav_contact_pane_g3

0xeedb,	// (0x0007039a) cell_myfav_contact_pane_g4_ParamLimits

0xeedb,	// (0x0007039a) cell_myfav_contact_pane_g4

0x16ae,	// (0x00062b6d) cell_myfav_contact_pane_g5_ParamLimits

0x16ae,	// (0x00062b6d) cell_myfav_contact_pane_g5

0x0004,

0xf98d,	// (0x00070e4c) cell_myfav_contact_pane_g_ParamLimits

0xf98d,	// (0x00070e4c) cell_myfav_contact_pane_g

0xc5f5,	// (0x0006dab4) main_myfav_hc_pane_g3_ParamLimits

0xc5f5,	// (0x0006dab4) main_myfav_hc_pane_g3

0x591f,	// (0x00066dde) popup_adpt_find_window

0xc64e,	// (0x0006db0d) afind_page_pane_ParamLimits

0xc64e,	// (0x0006db0d) afind_page_pane

0xc65b,	// (0x0006db1a) aid_size_cell_afind_ParamLimits

0xc65b,	// (0x0006db1a) aid_size_cell_afind

0xc675,	// (0x0006db34) bg_popup_sub_pane_cp09_ParamLimits

0xc675,	// (0x0006db34) bg_popup_sub_pane_cp09

0xc682,	// (0x0006db41) find_pane_cp01_ParamLimits

0xc682,	// (0x0006db41) find_pane_cp01

0x16ba,	// (0x00062b79) grid_afind_control_pane_ParamLimits

0x16ba,	// (0x00062b79) grid_afind_control_pane

0xc68f,	// (0x0006db4e) grid_afind_pane_ParamLimits

0xc68f,	// (0x0006db4e) grid_afind_pane

0xc6ab,	// (0x0006db6a) cell_afind_pane_ParamLimits

0xc6ab,	// (0x0006db6a) cell_afind_pane

0xec13,	// (0x000700d2) afind_page_pane_g1

0xc6f1,	// (0x0006dbb0) afind_page_pane_g2

0xc6fa,	// (0x0006dbb9) afind_page_pane_g3

0x0002,

0xf998,	// (0x00070e57) afind_page_pane_g

0xc703,	// (0x0006dbc2) afind_page_pane_t1

0x16ce,	// (0x00062b8d) cell_afind_grid_control_pane_ParamLimits

0x16ce,	// (0x00062b8d) cell_afind_grid_control_pane

0x1487,	// (0x00062946) bg_button_pane_cp69_ParamLimits

0x1487,	// (0x00062946) bg_button_pane_cp69

0xc723,	// (0x0006dbe2) cell_afind_pane_g1_ParamLimits

0xc723,	// (0x0006dbe2) cell_afind_pane_g1

0xc730,	// (0x0006dbef) cell_afind_pane_t1_ParamLimits

0xc730,	// (0x0006dbef) cell_afind_pane_t1

0x0bb8,	// (0x00062077) bg_button_pane_cp72

0x16dd,	// (0x00062b9c) cell_afind_grid_control_pane_g1

0x8b19,	// (0x00069fd8) aid_image_placing_area_ParamLimits

0x8b19,	// (0x00069fd8) aid_image_placing_area

0x114b,	// (0x0006260a) field_vitu_entry_pane_g1_ParamLimits

0x114b,	// (0x0006260a) field_vitu_entry_pane_g1

0x1157,	// (0x00062616) field_vitu_entry_pane_g2_ParamLimits

0x1157,	// (0x00062616) field_vitu_entry_pane_g2

0x0001,

0xf849,	// (0x00070d08) field_vitu_entry_pane_g_ParamLimits

0xf849,	// (0x00070d08) field_vitu_entry_pane_g

0xb8cc,	// (0x0006cd8b) cell_vitu_itu_pane_g1_ParamLimits

0xb90e,	// (0x0006cdcd) cell_vitu_itu_pane_t3_ParamLimits

0xb90e,	// (0x0006cdcd) cell_vitu_itu_pane_t3

0x142d,	// (0x000628ec) mp4_progress_pane_t1_ParamLimits

0x1446,	// (0x00062905) mp4_progress_pane_t2_ParamLimits

0xf8de,	// (0x00070d9d) mp4_progress_pane_t_ParamLimits

0x145f,	// (0x0006291e) mup_progress_pane_cp04_ParamLimits

0xc638,	// (0x0006daf7) main_myfav_hc_pane_t5_ParamLimits

0xc638,	// (0x0006daf7) main_myfav_hc_pane_t5

0x46d8,	// (0x00065b97) aid_zoom_text_primary

0x591f,	// (0x00066dde) popup_adpt_find_window_ParamLimits

0x9f3f,	// (0x0006b3fe) main_cam_set_pane

0xc0cd,	// (0x0006d58c) cam4_zoom_pane_ParamLimits

0xc0cd,	// (0x0006d58c) cam4_zoom_pane

0xc742,	// (0x0006dc01) main_cam_set_pane_g1_ParamLimits

0xc742,	// (0x0006dc01) main_cam_set_pane_g1

0xc750,	// (0x0006dc0f) main_cam_set_pane_g2_ParamLimits

0xc750,	// (0x0006dc0f) main_cam_set_pane_g2

0x0001,

0xf99f,	// (0x00070e5e) main_cam_set_pane_g_ParamLimits

0xf99f,	// (0x00070e5e) main_cam_set_pane_g

0xc75c,	// (0x0006dc1b) main_cam_set_pane_t1_ParamLimits

0xc75c,	// (0x0006dc1b) main_cam_set_pane_t1

0xc778,	// (0x0006dc37) main_cset_listscroll_pane_ParamLimits

0xc778,	// (0x0006dc37) main_cset_listscroll_pane

0xc7a3,	// (0x0006dc62) main_cset_slider_pane_ParamLimits

0xc7a3,	// (0x0006dc62) main_cset_slider_pane

0x16ee,	// (0x00062bad) main_cset_list_pane_ParamLimits

0x16ee,	// (0x00062bad) main_cset_list_pane

0x16fe,	// (0x00062bbd) scroll_pane_cp028

0xc7c2,	// (0x0006dc81) aid_area_touch_slider

0xc7de,	// (0x0006dc9d) cset_slider_pane

0xc808,	// (0x0006dcc7) main_cset_slider_pane_g1

0xc81d,	// (0x0006dcdc) main_cset_slider_pane_g2

0x0011,

0xf9a4,	// (0x00070e63) main_cset_slider_pane_g

0x1737,	// (0x00062bf6) main_cset_slider_pane_t1

0xc8df,	// (0x0006dd9e) main_cset_slider_pane_t2

0xc8f9,	// (0x0006ddb8) main_cset_slider_pane_t3

0xc913,	// (0x0006ddd2) main_cset_slider_pane_t4

0xc92d,	// (0x0006ddec) main_cset_slider_pane_t5

0xc94b,	// (0x0006de0a) main_cset_slider_pane_t6

0xc962,	// (0x0006de21) main_cset_slider_pane_t7

0x000e,

0xf9c9,	// (0x00070e88) main_cset_slider_pane_t

0xca6e,	// (0x0006df2d) cset_list_set_pane_ParamLimits

0xca6e,	// (0x0006df2d) cset_list_set_pane

0xca84,	// (0x0006df43) aid_position_infowindow_above

0xca8c,	// (0x0006df4b) aid_position_infowindow_below

0xca94,	// (0x0006df53) cset_list_set_pane_g1_ParamLimits

0xca94,	// (0x0006df53) cset_list_set_pane_g1

0x4b10,	// (0x00065fcf) cset_list_set_pane_g3_ParamLimits

0x4b10,	// (0x00065fcf) cset_list_set_pane_g3

0x0001,

0xf9e8,	// (0x00070ea7) cset_list_set_pane_g_ParamLimits

0xf9e8,	// (0x00070ea7) cset_list_set_pane_g

0x4b1f,	// (0x00065fde) cset_list_set_pane_t1_ParamLimits

0x4b1f,	// (0x00065fde) cset_list_set_pane_t1

0x9f3f,	// (0x0006b3fe) list_highlight_pane_cp021_ParamLimits

0x9f3f,	// (0x0006b3fe) list_highlight_pane_cp021

0x844f,	// (0x0006990e) cset_slider_pane_g1

0x8461,	// (0x00069920) cset_slider_pane_g2

0x8458,	// (0x00069917) cset_slider_pane_g3

0x0002,

0xf9ed,	// (0x00070eac) cset_slider_pane_g

0xcaa0,	// (0x0006df5f) aid_area_touch_cam4_zoom

0xcaa8,	// (0x0006df67) cam4_zoom_cont_pane

0xcab0,	// (0x0006df6f) cam4_zoom_pane_g1

0xcab8,	// (0x0006df77) cam4_zoom_pane_g2

0xcac0,	// (0x0006df7f) cam4_zoom_pane_g3

0x0002,

0xf9f4,	// (0x00070eb3) cam4_zoom_pane_g

0x2095,	// (0x00063554) cam4_zoom_cont_pane_g1

0x209e,	// (0x0006355d) cam4_zoom_cont_pane_g2

0x20a7,	// (0x00063566) cam4_zoom_cont_pane_g3

0x0002,

0xf9fb,	// (0x00070eba) cam4_zoom_cont_pane_g

0xbfc6,	// (0x0006d485) call4_image_pane_ParamLimits

0xbfc6,	// (0x0006d485) call4_image_pane

0x1493,	// (0x00062952) call4_windows_conf_pane_ParamLimits

0x14d4,	// (0x00062993) popup_call4_audio_in_window_ParamLimits

0x14d4,	// (0x00062993) popup_call4_audio_in_window

0x011a,	// (0x000615d9) bg_popup_call2_act_pane_cp02

0x154a,	// (0x00062a09) call4_list_conf_pane

0xec13,	// (0x000700d2) call4_image_pane_g1

0xec13,	// (0x000700d2) call4_image_pane_g2

0x0001,

0xf70f,	// (0x00070bce) call4_image_pane_g

0x17f2,	// (0x00062cb1) list_single_graphic_popup_conf4_pane_ParamLimits

0x17f2,	// (0x00062cb1) list_single_graphic_popup_conf4_pane

0x011a,	// (0x000615d9) list_highlight_pane_cp022

0x1805,	// (0x00062cc4) list_single_graphic_popup_conf4_pane_g1

0x79d5,	// (0x00068e94) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xfa02,	// (0x00070ec1) list_single_graphic_popup_conf4_pane_g

0x180d,	// (0x00062ccc) list_single_graphic_popup_conf4_pane_t1

0x6811,	// (0x00067cd0) popup_vtel_slider_window_ParamLimits

0x6811,	// (0x00067cd0) popup_vtel_slider_window

0x1475,	// (0x00062934) dialer2_ne_pane_t2_ParamLimits

0x1475,	// (0x00062934) dialer2_ne_pane_t2

0x0001,

0xf8e3,	// (0x00070da2) dialer2_ne_pane_t_ParamLimits

0xf8e3,	// (0x00070da2) dialer2_ne_pane_t

0x9f3f,	// (0x0006b3fe) bg_popup_sub_pane_cp010_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_popup_sub_pane_cp010

0xcac8,	// (0x0006df87) popup_vtel_slider_window_g1_ParamLimits

0xcac8,	// (0x0006df87) popup_vtel_slider_window_g1

0xcad4,	// (0x0006df93) popup_vtel_slider_window_g2_ParamLimits

0xcad4,	// (0x0006df93) popup_vtel_slider_window_g2

0x0003,

0xfa07,	// (0x00070ec6) popup_vtel_slider_window_g_ParamLimits

0xfa07,	// (0x00070ec6) popup_vtel_slider_window_g

0xcb1c,	// (0x0006dfdb) vtel_slider_pane_ParamLimits

0xcb1c,	// (0x0006dfdb) vtel_slider_pane

0xcb2b,	// (0x0006dfea) vtel_slider_pane_g1_ParamLimits

0xcb2b,	// (0x0006dfea) vtel_slider_pane_g1

0xcb38,	// (0x0006dff7) vtel_slider_pane_g2_ParamLimits

0xcb38,	// (0x0006dff7) vtel_slider_pane_g2

0xcb45,	// (0x0006e004) vtel_slider_pane_g3_ParamLimits

0xcb45,	// (0x0006e004) vtel_slider_pane_g3

0xcb2b,	// (0x0006dfea) vtel_slider_pane_g4_ParamLimits

0xcb2b,	// (0x0006dfea) vtel_slider_pane_g4

0xcb52,	// (0x0006e011) vtel_slider_pane_g5_ParamLimits

0xcb52,	// (0x0006e011) vtel_slider_pane_g5

0x0004,

0xfa10,	// (0x00070ecf) vtel_slider_pane_g_ParamLimits

0xfa10,	// (0x00070ecf) vtel_slider_pane_g

0x011a,	// (0x000615d9) main_gallery2_pane

0xc31a,	// (0x0006d7d9) aid_size_row_itut2_dropdow_list_ParamLimits

0xc31a,	// (0x0006d7d9) aid_size_row_itut2_dropdow_list

0xc37a,	// (0x0006d839) grid_vitu2_function_top_pane_ParamLimits

0xc37a,	// (0x0006d839) grid_vitu2_function_top_pane

0xc3d0,	// (0x0006d88f) popup_vitu2_dropdown_list_window_ParamLimits

0xc3d0,	// (0x0006d88f) popup_vitu2_dropdown_list_window

0xc3f0,	// (0x0006d8af) popup_vitu2_match_list_window

0xcb5f,	// (0x0006e01e) cell_vitu2_function_top_pane_ParamLimits

0xcb5f,	// (0x0006e01e) cell_vitu2_function_top_pane

0xcb7f,	// (0x0006e03e) cell_vitu2_function_top_pane_cp01_ParamLimits

0xcb7f,	// (0x0006e03e) cell_vitu2_function_top_pane_cp01

0xcb9d,	// (0x0006e05c) cell_vitu2_function_top_wide_pane_ParamLimits

0xcb9d,	// (0x0006e05c) cell_vitu2_function_top_wide_pane

0x9f3f,	// (0x0006b3fe) bg_button_pane_cp012

0xcbbb,	// (0x0006e07a) cell_vitu2_function_top_pane_g1

0xcbca,	// (0x0006e089) bg_button_pane_cp013_ParamLimits

0xcbca,	// (0x0006e089) bg_button_pane_cp013

0xcbe6,	// (0x0006e0a5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0xcbe6,	// (0x0006e0a5) cell_vitu2_function_top_wide_pane_g1

0x5a03,	// (0x00066ec2) bg_popup_sub_pane_cp20

0xcbfe,	// (0x0006e0bd) list_vitu2_match_list_pane

0x15e4,	// (0x00062aa3) bg_popup_sub_pane_cp20_g1

0x15ec,	// (0x00062aab) bg_popup_sub_pane_cp20_g2

0x0dc5,	// (0x00062284) bg_popup_sub_pane_cp20_g3

0x15f4,	// (0x00062ab3) bg_popup_sub_pane_cp20_g4

0x0da5,	// (0x00062264) bg_popup_sub_pane_cp20_g5

0x1829,	// (0x00062ce8) bg_popup_sub_pane_cp20_g6

0x1604,	// (0x00062ac3) bg_popup_sub_pane_cp20_g7

0x160c,	// (0x00062acb) bg_popup_sub_pane_cp20_g8

0x1614,	// (0x00062ad3) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa1b,	// (0x00070eda) bg_popup_sub_pane_cp20_g

0xcc16,	// (0x0006e0d5) list_vitu2_match_list_item_pane_ParamLimits

0xcc16,	// (0x0006e0d5) list_vitu2_match_list_item_pane

0xcc28,	// (0x0006e0e7) list_vitu2_match_list_item_pane_t1

0x011a,	// (0x000615d9) bg_popup_sub_pane_cp21

0x7866,	// (0x00068d25) grid_vitu2_dropdown_list_pane

0xcc36,	// (0x0006e0f5) cell_vitu2_dropdown_list_char_pane_ParamLimits

0xcc36,	// (0x0006e0f5) cell_vitu2_dropdown_list_char_pane

0xcc57,	// (0x0006e116) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0xcc57,	// (0x0006e116) cell_vitu2_dropdown_list_ctrl_pane

0x185b,	// (0x00062d1a) cell_vitu2_dropdown_list_char_pane_g1

0x1852,	// (0x00062d11) cell_vitu2_dropdown_list_char_pane_g2

0x1849,	// (0x00062d08) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa38,	// (0x00070ef7) cell_vitu2_dropdown_list_char_pane_g

0xcc83,	// (0x0006e142) cell_vitu2_dropdown_list_char_pane_t1

0xcc91,	// (0x0006e150) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0xcc91,	// (0x0006e150) cell_vitu2_dropdown_list_ctrl_pane_g1

0xcca1,	// (0x0006e160) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0xcca1,	// (0x0006e160) cell_vitu2_dropdown_list_ctrl_pane_g2

0xccb2,	// (0x0006e171) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0xccb2,	// (0x0006e171) cell_vitu2_dropdown_list_ctrl_pane_g3

0xccc2,	// (0x0006e181) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0xccc2,	// (0x0006e181) cell_vitu2_dropdown_list_ctrl_pane_g4

0xee76,	// (0x00070335) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xee76,	// (0x00070335) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa3f,	// (0x00070efe) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa3f,	// (0x00070efe) cell_vitu2_dropdown_list_ctrl_pane_g

0xccde,	// (0x0006e19d) aid_size_cell_gallery2_ParamLimits

0xccde,	// (0x0006e19d) aid_size_cell_gallery2

0xccec,	// (0x0006e1ab) grid_gallery2_pane_ParamLimits

0xccec,	// (0x0006e1ab) grid_gallery2_pane

0xccfb,	// (0x0006e1ba) scroll_pane_cp029_ParamLimits

0xccfb,	// (0x0006e1ba) scroll_pane_cp029

0xcd07,	// (0x0006e1c6) cell_gallery2_pane_ParamLimits

0xcd07,	// (0x0006e1c6) cell_gallery2_pane

0x1864,	// (0x00062d23) cell_gallery2_pane_g2

0x2e8f,	// (0x0006434e) cell_gallery2_pane_g3

0x186e,	// (0x00062d2d) cell_gallery2_pane_g4

0x1876,	// (0x00062d35) cell_gallery2_pane_g5

0x7ecf,	// (0x0006938e) grid_highlight_pane_cp10

0xc3f0,	// (0x0006d8af) popup_vitu2_match_list_window_ParamLimits

0xc404,	// (0x0006d8c3) popup_vitu2_query_window_ParamLimits

0xc404,	// (0x0006d8c3) popup_vitu2_query_window

0x011a,	// (0x000615d9) bg_vitu2_candi_button_pane

0x185b,	// (0x00062d1a) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x1852,	// (0x00062d11) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x1849,	// (0x00062d08) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x4b89,	// (0x00066048) bg_button_pane_cp015

0xcd35,	// (0x0006e1f4) bg_button_pane_cp016

0xcd3f,	// (0x0006e1fe) bg_button_pane_cp017

0x9f3f,	// (0x0006b3fe) bg_popup_sub_pane_cp22

0x187e,	// (0x00062d3d) popup_vitu2_query_window_g1

0x4ba0,	// (0x0006605f) popup_vitu2_query_window_g2

0x0001,

0xfa4a,	// (0x00070f09) popup_vitu2_query_window_g

0x4bae,	// (0x0006606d) popup_vitu2_query_window_t1_ParamLimits

0x4bae,	// (0x0006606d) popup_vitu2_query_window_t1

0x4bd6,	// (0x00066095) popup_vitu2_query_window_t2_ParamLimits

0x4bd6,	// (0x00066095) popup_vitu2_query_window_t2

0x4be8,	// (0x000660a7) popup_vitu2_query_window_t3_ParamLimits

0x4be8,	// (0x000660a7) popup_vitu2_query_window_t3

0xcd5a,	// (0x0006e219) popup_vitu2_query_window_t4_ParamLimits

0xcd5a,	// (0x0006e219) popup_vitu2_query_window_t4

0xcd6e,	// (0x0006e22d) popup_vitu2_query_window_t5_ParamLimits

0xcd6e,	// (0x0006e22d) popup_vitu2_query_window_t5

0x0004,

0xfa4f,	// (0x00070f0e) popup_vitu2_query_window_t_ParamLimits

0xfa4f,	// (0x00070f0e) popup_vitu2_query_window_t

0x16e6,	// (0x00062ba5) main_cset_text_pane

0xc7c2,	// (0x0006dc81) aid_area_touch_slider_ParamLimits

0xc7de,	// (0x0006dc9d) cset_slider_pane_ParamLimits

0xc808,	// (0x0006dcc7) main_cset_slider_pane_g1_ParamLimits

0xc81d,	// (0x0006dcdc) main_cset_slider_pane_g2_ParamLimits

0x1707,	// (0x00062bc6) main_cset_slider_pane_g3_ParamLimits

0x1707,	// (0x00062bc6) main_cset_slider_pane_g3

0xc832,	// (0x0006dcf1) main_cset_slider_pane_g4_ParamLimits

0xc832,	// (0x0006dcf1) main_cset_slider_pane_g4

0xc841,	// (0x0006dd00) main_cset_slider_pane_g5_ParamLimits

0xc841,	// (0x0006dd00) main_cset_slider_pane_g5

0xc84f,	// (0x0006dd0e) main_cset_slider_pane_g6_ParamLimits

0xc84f,	// (0x0006dd0e) main_cset_slider_pane_g6

0xf9a4,	// (0x00070e63) main_cset_slider_pane_g_ParamLimits

0x1737,	// (0x00062bf6) main_cset_slider_pane_t1_ParamLimits

0xc8df,	// (0x0006dd9e) main_cset_slider_pane_t2_ParamLimits

0xc8f9,	// (0x0006ddb8) main_cset_slider_pane_t3_ParamLimits

0xc913,	// (0x0006ddd2) main_cset_slider_pane_t4_ParamLimits

0xc92d,	// (0x0006ddec) main_cset_slider_pane_t5_ParamLimits

0xc94b,	// (0x0006de0a) main_cset_slider_pane_t6_ParamLimits

0xc962,	// (0x0006de21) main_cset_slider_pane_t7_ParamLimits

0xc990,	// (0x0006de4f) main_cset_slider_pane_t8_ParamLimits

0xc990,	// (0x0006de4f) main_cset_slider_pane_t8

0xc9b8,	// (0x0006de77) main_cset_slider_pane_t9_ParamLimits

0xc9b8,	// (0x0006de77) main_cset_slider_pane_t9

0xc9e0,	// (0x0006de9f) main_cset_slider_pane_t10_ParamLimits

0xc9e0,	// (0x0006de9f) main_cset_slider_pane_t10

0xca08,	// (0x0006dec7) main_cset_slider_pane_t11_ParamLimits

0xca08,	// (0x0006dec7) main_cset_slider_pane_t11

0xca32,	// (0x0006def1) main_cset_slider_pane_t12_ParamLimits

0xca32,	// (0x0006def1) main_cset_slider_pane_t12

0xca4f,	// (0x0006df0e) main_cset_slider_pane_t13_ParamLimits

0xca4f,	// (0x0006df0e) main_cset_slider_pane_t13

0xf9c9,	// (0x00070e88) main_cset_slider_pane_t_ParamLimits

0x011a,	// (0x000615d9) bg_popup_sub_pane_cp011

0x188a,	// (0x00062d49) main_cset_text_pane_g1

0x1892,	// (0x00062d51) main_cset_text_pane_t1

0x18a0,	// (0x00062d5f) main_cset_text_pane_t2

0x18ae,	// (0x00062d6d) main_cset_text_pane_t3

0x18bc,	// (0x00062d7b) main_cset_text_pane_t4

0x18ca,	// (0x00062d89) main_cset_text_pane_t5

0x18d8,	// (0x00062d97) main_cset_text_pane_t6

0x18e6,	// (0x00062da5) main_cset_text_pane_t7

0x0006,

0xfa5a,	// (0x00070f19) main_cset_text_pane_t

0x011a,	// (0x000615d9) main_cam4_burst_pane

0x011a,	// (0x000615d9) main_cam5_pane

0xc711,	// (0x0006dbd0) bg_button_pane_cp019

0xc71a,	// (0x0006dbd9) bg_button_pane_cp020

0x1713,	// (0x00062bd2) main_cset_slider_pane_g7_ParamLimits

0x1713,	// (0x00062bd2) main_cset_slider_pane_g7

0x171f,	// (0x00062bde) main_cset_slider_pane_g8_ParamLimits

0x171f,	// (0x00062bde) main_cset_slider_pane_g8

0xc863,	// (0x0006dd22) main_cset_slider_pane_g9_ParamLimits

0xc863,	// (0x0006dd22) main_cset_slider_pane_g9

0xc86f,	// (0x0006dd2e) main_cset_slider_pane_g10_ParamLimits

0xc86f,	// (0x0006dd2e) main_cset_slider_pane_g10

0xc87b,	// (0x0006dd3a) main_cset_slider_pane_g11_ParamLimits

0xc87b,	// (0x0006dd3a) main_cset_slider_pane_g11

0xc887,	// (0x0006dd46) main_cset_slider_pane_g12_ParamLimits

0xc887,	// (0x0006dd46) main_cset_slider_pane_g12

0xc893,	// (0x0006dd52) main_cset_slider_pane_g13_ParamLimits

0xc893,	// (0x0006dd52) main_cset_slider_pane_g13

0xc89f,	// (0x0006dd5e) main_cset_slider_pane_g14_ParamLimits

0xc89f,	// (0x0006dd5e) main_cset_slider_pane_g14

0xc8ab,	// (0x0006dd6a) main_cset_slider_pane_g15_ParamLimits

0xc8ab,	// (0x0006dd6a) main_cset_slider_pane_g15

0x1765,	// (0x00062c24) main_cset_slider_pane_t14_ParamLimits

0x1765,	// (0x00062c24) main_cset_slider_pane_t14

0x179e,	// (0x00062c5d) main_cset_slider_pane_t15_ParamLimits

0x179e,	// (0x00062c5d) main_cset_slider_pane_t15

0xcd82,	// (0x0006e241) aid_cam4_burst_size_cell_ParamLimits

0xcd82,	// (0x0006e241) aid_cam4_burst_size_cell

0xcd9e,	// (0x0006e25d) grid_cam4_burst_pane_ParamLimits

0xcd9e,	// (0x0006e25d) grid_cam4_burst_pane

0xcdce,	// (0x0006e28d) linegrid_cam4_burst_pane_ParamLimits

0xcdce,	// (0x0006e28d) linegrid_cam4_burst_pane

0xcdee,	// (0x0006e2ad) scroll_pane_cp30_ParamLimits

0xcdee,	// (0x0006e2ad) scroll_pane_cp30

0xcdfa,	// (0x0006e2b9) cell_cam4_burst_pane_ParamLimits

0xcdfa,	// (0x0006e2b9) cell_cam4_burst_pane

0x18f4,	// (0x00062db3) linegrid_cam4_burst_pane_g1_ParamLimits

0x18f4,	// (0x00062db3) linegrid_cam4_burst_pane_g1

0xce36,	// (0x0006e2f5) linegrid_cam4_burst_pane_g2_ParamLimits

0xce36,	// (0x0006e2f5) linegrid_cam4_burst_pane_g2

0x1901,	// (0x00062dc0) linegrid_cam4_burst_pane_g3_ParamLimits

0x1901,	// (0x00062dc0) linegrid_cam4_burst_pane_g3

0x0002,

0xfa69,	// (0x00070f28) linegrid_cam4_burst_pane_g_ParamLimits

0xfa69,	// (0x00070f28) linegrid_cam4_burst_pane_g

0xce47,	// (0x0006e306) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0xce47,	// (0x0006e306) linegrid_cam4_burst_pane_g3_copy1

0x190e,	// (0x00062dcd) linegrid_cam4_burst_pane_g4_ParamLimits

0x190e,	// (0x00062dcd) linegrid_cam4_burst_pane_g4

0xce61,	// (0x0006e320) linegrid_cam4_burst_pane_g5_ParamLimits

0xce61,	// (0x0006e320) linegrid_cam4_burst_pane_g5

0xce72,	// (0x0006e331) linegrid_cam4_burst_pane_g6_ParamLimits

0xce72,	// (0x0006e331) linegrid_cam4_burst_pane_g6

0x191b,	// (0x00062dda) linegrid_cam4_burst_pane_g7_ParamLimits

0x191b,	// (0x00062dda) linegrid_cam4_burst_pane_g7

0xce83,	// (0x0006e342) cell_cam4_burst_pane_g1

0x1934,	// (0x00062df3) main_cam5_pane_t1_ParamLimits

0x1934,	// (0x00062df3) main_cam5_pane_t1

0x1946,	// (0x00062e05) main_cam5_pane_t2_ParamLimits

0x1946,	// (0x00062e05) main_cam5_pane_t2

0x1958,	// (0x00062e17) main_cam5_pane_t3_ParamLimits

0x1958,	// (0x00062e17) main_cam5_pane_t3

0x196a,	// (0x00062e29) main_cam5_pane_t4_ParamLimits

0x196a,	// (0x00062e29) main_cam5_pane_t4

0x1982,	// (0x00062e41) main_cam5_pane_t5_ParamLimits

0x1982,	// (0x00062e41) main_cam5_pane_t5

0x1996,	// (0x00062e55) main_cam5_pane_t6_ParamLimits

0x1996,	// (0x00062e55) main_cam5_pane_t6

0x19aa,	// (0x00062e69) main_cam5_pane_t7_ParamLimits

0x19aa,	// (0x00062e69) main_cam5_pane_t7

0x19bc,	// (0x00062e7b) main_cam5_pane_t8_ParamLimits

0x19bc,	// (0x00062e7b) main_cam5_pane_t8

0x19d8,	// (0x00062e97) main_cam5_pane_t9_ParamLimits

0x19d8,	// (0x00062e97) main_cam5_pane_t9

0x19ea,	// (0x00062ea9) main_cam5_pane_t10_ParamLimits

0x19ea,	// (0x00062ea9) main_cam5_pane_t10

0x19fc,	// (0x00062ebb) main_cam5_pane_t11_ParamLimits

0x19fc,	// (0x00062ebb) main_cam5_pane_t11

0x1a0e,	// (0x00062ecd) main_cam5_pane_t12_ParamLimits

0x1a0e,	// (0x00062ecd) main_cam5_pane_t12

0x1a23,	// (0x00062ee2) main_cam5_pane_t13_ParamLimits

0x1a23,	// (0x00062ee2) main_cam5_pane_t13

0x000c,

0xfa75,	// (0x00070f34) main_cam5_pane_t_ParamLimits

0xfa75,	// (0x00070f34) main_cam5_pane_t

0x59cc,	// (0x00066e8b) popup_scut_keymap_window_ParamLimits

0x59cc,	// (0x00066e8b) popup_scut_keymap_window

0xce96,	// (0x0006e355) aid_size_cell_brow_shortcut

0x7ecf,	// (0x0006938e) bg_popup_window_pane_cp010

0xcea2,	// (0x0006e361) grid_scut_pane

0xceae,	// (0x0006e36d) cell_scut_pane_ParamLimits

0xceae,	// (0x0006e36d) cell_scut_pane

0xcec5,	// (0x0006e384) cell_scut_pane_g1

0x1a40,	// (0x00062eff) cell_scut_pane_t1

0x1a4f,	// (0x00062f0e) cell_scut_pane_t2

0xcece,	// (0x0006e38d) cell_scut_pane_t3

0x0002,

0xfa90,	// (0x00070f4f) cell_scut_pane_t

0xaf6a,	// (0x0006c429) main_mup3_pane_g8_ParamLimits

0xaf6a,	// (0x0006c429) main_mup3_pane_g8

0xc328,	// (0x0006d7e7) area_vitu2_query_pane_ParamLimits

0xc328,	// (0x0006d7e7) area_vitu2_query_pane

0x4b93,	// (0x00066052) input_focus_pane_cp08

0x1a5e,	// (0x00062f1d) area_vitu2_query_pane_g1

0x4c10,	// (0x000660cf) area_vitu2_query_pane_g2

0x0001,

0xfa97,	// (0x00070f56) area_vitu2_query_pane_g

0xcedc,	// (0x0006e39b) area_vitu2_query_pane_t1_ParamLimits

0xcedc,	// (0x0006e39b) area_vitu2_query_pane_t1

0xcef0,	// (0x0006e3af) area_vitu2_query_pane_t2_ParamLimits

0xcef0,	// (0x0006e3af) area_vitu2_query_pane_t2

0x4c21,	// (0x000660e0) area_vitu2_query_pane_t3_ParamLimits

0x4c21,	// (0x000660e0) area_vitu2_query_pane_t3

0x4c49,	// (0x00066108) area_vitu2_query_pane_t4_ParamLimits

0x4c49,	// (0x00066108) area_vitu2_query_pane_t4

0x4c71,	// (0x00066130) area_vitu2_query_pane_t5_ParamLimits

0x4c71,	// (0x00066130) area_vitu2_query_pane_t5

0x4c99,	// (0x00066158) area_vitu2_query_pane_t6_ParamLimits

0x4c99,	// (0x00066158) area_vitu2_query_pane_t6

0x0006,

0xfa9c,	// (0x00070f5b) area_vitu2_query_pane_t_ParamLimits

0xfa9c,	// (0x00070f5b) area_vitu2_query_pane_t

0xcf04,	// (0x0006e3c3) bg_button_pane_cp018

0xcf12,	// (0x0006e3d1) bg_button_pane_cp021

0x4ce5,	// (0x000661a4) bg_button_pane_cp022

0x4cf6,	// (0x000661b5) input_focus_pane_cp09

0x7d0a,	// (0x000691c9) aid_size_touch_mv_arrow_left

0x7d33,	// (0x000691f2) aid_size_touch_mv_arrow_right

0xc8c3,	// (0x0006dd82) main_cset_slider_pane_g16_ParamLimits

0xc8c3,	// (0x0006dd82) main_cset_slider_pane_g16

0xc8d1,	// (0x0006dd90) main_cset_slider_pane_g17_ParamLimits

0xc8d1,	// (0x0006dd90) main_cset_slider_pane_g17

0xce83,	// (0x0006e342) cell_cam4_burst_pane_g1_ParamLimits

0x011a,	// (0x000615d9) compa_mode_pane

0xcae0,	// (0x0006df9f) popup_vtel_slider_window_g3_ParamLimits

0xcae0,	// (0x0006df9f) popup_vtel_slider_window_g3

0xcaf4,	// (0x0006dfb3) popup_vtel_slider_window_g4_ParamLimits

0xcaf4,	// (0x0006dfb3) popup_vtel_slider_window_g4

0xcb08,	// (0x0006dfc7) popup_vtel_slider_window_t1_ParamLimits

0xcb08,	// (0x0006dfc7) popup_vtel_slider_window_t1

0x011a,	// (0x000615d9) main_cl_pane

0x9fdd,	// (0x0006b49c) popup_imed_adjust2_window_ParamLimits

0x9f31,	// (0x0006b3f0) bg_tb_trans_pane_cp05_ParamLimits

0x1080,	// (0x0006253f) popup_imed_adjust2_window_g1_ParamLimits

0x108f,	// (0x0006254e) popup_imed_adjust2_window_g2_ParamLimits

0x108f,	// (0x0006254e) popup_imed_adjust2_window_g2

0x109b,	// (0x0006255a) popup_imed_adjust2_window_g3_ParamLimits

0x109b,	// (0x0006255a) popup_imed_adjust2_window_g3

0x0002,

0xf80d,	// (0x00070ccc) popup_imed_adjust2_window_g_ParamLimits

0xf80d,	// (0x00070ccc) popup_imed_adjust2_window_g

0x10a7,	// (0x00062566) popup_imed_adjust2_window_t1_ParamLimits

0x10bf,	// (0x0006257e) slider_imed_adjust_pane_ParamLimits

0x10d3,	// (0x00062592) slider_imed_adjust_pane_g1_ParamLimits

0x10e3,	// (0x000625a2) slider_imed_adjust_pane_g2_ParamLimits

0x10f3,	// (0x000625b2) slider_imed_adjust_pane_g3_ParamLimits

0x1104,	// (0x000625c3) slider_imed_adjust_pane_g4_ParamLimits

0xf814,	// (0x00070cd3) slider_imed_adjust_pane_g_ParamLimits

0xc082,	// (0x0006d541) aid_touch_area_cam4_ParamLimits

0xc082,	// (0x0006d541) aid_touch_area_cam4

0xc092,	// (0x0006d551) battery_pane_cp01

0xc10d,	// (0x0006d5cc) main_camera4_pane_g6_ParamLimits

0xc10d,	// (0x0006d5cc) main_camera4_pane_g6

0xc12b,	// (0x0006d5ea) main_camera4_pane_t2_ParamLimits

0xc12b,	// (0x0006d5ea) main_camera4_pane_t2

0x0001,

0xf917,	// (0x00070dd6) main_camera4_pane_t_ParamLimits

0xf917,	// (0x00070dd6) main_camera4_pane_t

0xc1b2,	// (0x0006d671) aid_touch_area_vid4_ParamLimits

0xc1b2,	// (0x0006d671) aid_touch_area_vid4

0xc1f2,	// (0x0006d6b1) main_video4_pane_g5_ParamLimits

0xc1f2,	// (0x0006d6b1) main_video4_pane_g5

0xc214,	// (0x0006d6d3) vid4_progress_pane_ParamLimits

0xc214,	// (0x0006d6d3) vid4_progress_pane

0x172b,	// (0x00062bea) main_cset_slider_pane_g18_ParamLimits

0x172b,	// (0x00062bea) main_cset_slider_pane_g18

0x1928,	// (0x00062de7) cell_cam4_burst_pane_g2_ParamLimits

0x1928,	// (0x00062de7) cell_cam4_burst_pane_g2

0x0001,

0xfa70,	// (0x00070f2f) cell_cam4_burst_pane_g_ParamLimits

0xfa70,	// (0x00070f2f) cell_cam4_burst_pane_g

0xcf1e,	// (0x0006e3dd) bg_cl_pane_ParamLimits

0xcf1e,	// (0x0006e3dd) bg_cl_pane

0xcf2a,	// (0x0006e3e9) cl_header_pane_ParamLimits

0xcf2a,	// (0x0006e3e9) cl_header_pane

0xcf36,	// (0x0006e3f5) cl_listscroll_pane_ParamLimits

0xcf36,	// (0x0006e3f5) cl_listscroll_pane

0x1b06,	// (0x00062fc5) bg_cl_pane_g1

0x1b0e,	// (0x00062fcd) bg_cl_pane_g2

0x1b16,	// (0x00062fd5) bg_cl_pane_g3

0x1b1e,	// (0x00062fdd) bg_cl_pane_g4

0x1b26,	// (0x00062fe5) bg_cl_pane_g5

0x1b2e,	// (0x00062fed) bg_cl_pane_g6

0x1b36,	// (0x00062ff5) bg_cl_pane_g7

0x1b3e,	// (0x00062ffd) bg_cl_pane_g8

0x1b46,	// (0x00063005) bg_cl_pane_g9

0x0008,

0xfaab,	// (0x00070f6a) bg_cl_pane_g

0xcf42,	// (0x0006e401) aid_height_cl_leading_ParamLimits

0xcf42,	// (0x0006e401) aid_height_cl_leading

0xcf4e,	// (0x0006e40d) aid_height_cl_text_ParamLimits

0xcf4e,	// (0x0006e40d) aid_height_cl_text

0x5a03,	// (0x00066ec2) bg_cl_header_pane_ParamLimits

0x5a03,	// (0x00066ec2) bg_cl_header_pane

0xcf66,	// (0x0006e425) cl_header_pane_g1_ParamLimits

0xcf66,	// (0x0006e425) cl_header_pane_g1

0xcf73,	// (0x0006e432) cl_header_pane_t1_ParamLimits

0xcf73,	// (0x0006e432) cl_header_pane_t1

0x1b4e,	// (0x0006300d) cl_list_pane

0x16fe,	// (0x00062bbd) hc_scroll_pane_cp01

0x0da5,	// (0x00062264) bg_cl_header_pane_g1

0x15e4,	// (0x00062aa3) bg_cl_header_pane_g2

0x0dc5,	// (0x00062284) bg_cl_header_pane_g3

0x15f4,	// (0x00062ab3) bg_cl_header_pane_g4

0x15ec,	// (0x00062aab) bg_cl_header_pane_g5

0x1829,	// (0x00062ce8) bg_cl_header_pane_g6

0x160c,	// (0x00062acb) bg_cl_header_pane_g7

0x1614,	// (0x00062ad3) bg_cl_header_pane_g8

0x1604,	// (0x00062ac3) bg_cl_header_pane_g9

0x0008,

0xfabe,	// (0x00070f7d) bg_cl_header_pane_g

0xcf85,	// (0x0006e444) hc_cl_list_double_graphic_heading_pane_ParamLimits

0xcf85,	// (0x0006e444) hc_cl_list_double_graphic_heading_pane

0xcf96,	// (0x0006e455) hc_cl_list_single_graphic_pane_ParamLimits

0xcf96,	// (0x0006e455) hc_cl_list_single_graphic_pane

0xcfaf,	// (0x0006e46e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0xcfaf,	// (0x0006e46e) hc_cl_list_single_graphic_pane_g1

0xcfbb,	// (0x0006e47a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0xcfbb,	// (0x0006e47a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfad1,	// (0x00070f90) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfad1,	// (0x00070f90) hc_cl_list_single_graphic_pane_g

0xcfcf,	// (0x0006e48e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0xcfcf,	// (0x0006e48e) hc_cl_list_single_graphic_pane_t1

0xcfaf,	// (0x0006e46e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0xcfaf,	// (0x0006e46e) hc_cl_list_double_graphic_heading_pane_g1

0xcfe4,	// (0x0006e4a3) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0xcfe4,	// (0x0006e4a3) hc_cl_list_double_graphic_heading_pane_g2

0xcff8,	// (0x0006e4b7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0xcff8,	// (0x0006e4b7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfad6,	// (0x00070f95) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfad6,	// (0x00070f95) hc_cl_list_double_graphic_heading_pane_g

0xd00c,	// (0x0006e4cb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0xd00c,	// (0x0006e4cb) hc_cl_list_double_graphic_heading_pane_t1

0xd021,	// (0x0006e4e0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0xd021,	// (0x0006e4e0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfadd,	// (0x00070f9c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfadd,	// (0x00070f9c) hc_cl_list_double_graphic_heading_pane_t

0xd03e,	// (0x0006e4fd) vid4_progress_pane_g1

0xd04e,	// (0x0006e50d) vid4_progress_pane_g2

0x85a4,	// (0x00069a63) vid4_progress_pane_g3

0xd05e,	// (0x0006e51d) vid4_progress_pane_g4

0x0004,

0xfae2,	// (0x00070fa1) vid4_progress_pane_g

0xd07c,	// (0x0006e53b) vid4_progress_pane_t1

0xd091,	// (0x0006e550) vid4_progress_pane_t2

0x0002,

0xfaed,	// (0x00070fac) vid4_progress_pane_t

0xd0bc,	// (0x0006e57b) wait_bar_pane_cp07

0xaa68,	// (0x0006bf27) blid_firmament_pane_ParamLimits

0xaaab,	// (0x0006bf6a) popup_blid_sat_info2_window_g1

0xaacf,	// (0x0006bf8e) popup_blid_sat_info2_window_t3

0xaadd,	// (0x0006bf9c) popup_blid_sat_info2_window_t4

0xaaeb,	// (0x0006bfaa) popup_blid_sat_info2_window_t5

0xaaf9,	// (0x0006bfb8) popup_blid_sat_info2_window_t6

0xab09,	// (0x0006bfc8) popup_blid_sat_info2_window_t7

0xab17,	// (0x0006bfd6) popup_blid_sat_info2_window_t8

0xab25,	// (0x0006bfe4) popup_blid_sat_info2_window_t9

0xead1,	// (0x0006ff90) popup_blid_sat_info2_window_t10

0xeb93,	// (0x00070052) aid_firma_cardinal_ParamLimits

0xeba7,	// (0x00070066) blid_firmament_pane_t1_ParamLimits

0xebbe,	// (0x0007007d) blid_firmament_pane_t2_ParamLimits

0xebd5,	// (0x00070094) blid_firmament_pane_t3_ParamLimits

0xebec,	// (0x000700ab) blid_firmament_pane_t4_ParamLimits

0xf706,	// (0x00070bc5) blid_firmament_pane_t_ParamLimits

0xec03,	// (0x000700c2) blid_sat_info_pane_ParamLimits

0x9f3f,	// (0x0006b3fe) main_cam_set_pane_ParamLimits

0xb6ef,	// (0x0006cbae) aid_size_cell_colour_35_ParamLimits

0xb709,	// (0x0006cbc8) aid_size_cell_colour_112_ParamLimits

0xb720,	// (0x0006cbdf) aid_size_cell_effect_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_tb_trans_pane_cp02_ParamLimits

0xf039,	// (0x000704f8) heading_imed_pane_ParamLimits

0xb73a,	// (0x0006cbf9) listscroll_imed_pane_ParamLimits

0x92e4,	// (0x0006a7a3) popup_call2_audio_first_window_g5_ParamLimits

0x92e4,	// (0x0006a7a3) popup_call2_audio_first_window_g5

0xbe3f,	// (0x0006d2fe) aid_size_touch_image3_arrow_left_ParamLimits

0xbe3f,	// (0x0006d2fe) aid_size_touch_image3_arrow_left

0xbe55,	// (0x0006d314) aid_size_touch_image3_arrow_right_ParamLimits

0xbe55,	// (0x0006d314) aid_size_touch_image3_arrow_right

0xd0a7,	// (0x0006e566) vid4_progress_pane_t3

0xb9d7,	// (0x0006ce96) main_hwr_training_symbol_option_pane_ParamLimits

0xb9d7,	// (0x0006ce96) main_hwr_training_symbol_option_pane

0x136d,	// (0x0006282c) popup_hwr_training_preview_window_ParamLimits

0x136d,	// (0x0006282c) popup_hwr_training_preview_window

0xba38,	// (0x0006cef7) hwr_training_navi_pane_g5_ParamLimits

0xba38,	// (0x0006cef7) hwr_training_navi_pane_g5

0x15d2,	// (0x00062a91) popup_char_count_window

0x5a03,	// (0x00066ec2) bg_popup_sub_pane_cp20_ParamLimits

0xcbfe,	// (0x0006e0bd) list_vitu2_match_list_pane_ParamLimits

0xcc0a,	// (0x0006e0c9) vitu2_page_scroll_pane_ParamLimits

0xcc0a,	// (0x0006e0c9) vitu2_page_scroll_pane

0x1bb1,	// (0x00063070) list_single_hwr_training_symbol_option_pane_ParamLimits

0x1bb1,	// (0x00063070) list_single_hwr_training_symbol_option_pane

0x1bc4,	// (0x00063083) list_single_hwr_training_symbol_option_pane_g1

0x1bcc,	// (0x0006308b) list_single_hwr_training_symbol_option_pane_t1

0x1bda,	// (0x00063099) bg_button_pane_cp023

0x1be3,	// (0x000630a2) bg_button_pane_cp024

0xd0d6,	// (0x0006e595) vitu2_page_scroll_pane_g1

0xd0de,	// (0x0006e59d) vitu2_page_scroll_pane_g2

0x0001,

0xfaf4,	// (0x00070fb3) vitu2_page_scroll_pane_g

0xd0e6,	// (0x0006e5a5) vitu2_page_scroll_pane_t1

0x1c16,	// (0x000630d5) popup_char_count_window_g1

0x1c1f,	// (0x000630de) popup_char_count_window_g2

0x1c28,	// (0x000630e7) popup_char_count_window_g3

0x0002,

0xfaf9,	// (0x00070fb8) popup_char_count_window_g

0x1c31,	// (0x000630f0) popup_char_count_window_t1

0x011a,	// (0x000615d9) main_vded2_pane

0x106c,	// (0x0006252b) aid_size_cell_imed_line

0x1076,	// (0x00062535) grid_imed_line_width_pane

0xc27d,	// (0x0006d73c) vid4_indicators_pane_g4

0x1c3f,	// (0x000630fe) cell_imed_line_width_pane_ParamLimits

0x1c3f,	// (0x000630fe) cell_imed_line_width_pane

0x1c53,	// (0x00063112) cell_imed_line_width_pane_g1

0xf0f3,	// (0x000705b2) cell_imed_line_width_pane_g2

0x0001,

0xfb00,	// (0x00070fbf) cell_imed_line_width_pane_g

0xd0f5,	// (0x0006e5b4) main_vded2_pane_g1_ParamLimits

0xd0f5,	// (0x0006e5b4) main_vded2_pane_g1

0xd102,	// (0x0006e5c1) main_vded2_pane_g2_ParamLimits

0xd102,	// (0x0006e5c1) main_vded2_pane_g2

0x0001,

0xfb05,	// (0x00070fc4) main_vded2_pane_g_ParamLimits

0xfb05,	// (0x00070fc4) main_vded2_pane_g

0xd110,	// (0x0006e5cf) vded2_slider_pane_ParamLimits

0xd110,	// (0x0006e5cf) vded2_slider_pane

0xd11d,	// (0x0006e5dc) aid_size_touch_vded2_end

0xd127,	// (0x0006e5e6) aid_size_touch_vded2_playhead

0x1c5c,	// (0x0006311b) aid_size_touch_vded2_start

0x1c64,	// (0x00063123) vded2_slider_bg_pane

0x1c6d,	// (0x0006312c) vded2_slider_pane_g1

0x1c76,	// (0x00063135) vded2_slider_pane_g2

0xd12f,	// (0x0006e5ee) vded2_slider_pane_g3

0x0002,

0xfb0a,	// (0x00070fc9) vded2_slider_pane_g

0x1c7e,	// (0x0006313d) vded2_slider_bg_pane_g1

0x1c87,	// (0x00063146) vded2_slider_bg_pane_g2

0x1c90,	// (0x0006314f) vded2_slider_bg_pane_g3

0x0002,

0xfb11,	// (0x00070fd0) vded2_slider_bg_pane_g

0x85ca,	// (0x00069a89) aid_postcard_touch_down_pane_ParamLimits

0x85ca,	// (0x00069a89) aid_postcard_touch_down_pane

0x85da,	// (0x00069a99) aid_postcard_touch_up_pane_ParamLimits

0x85da,	// (0x00069a99) aid_postcard_touch_up_pane

0x011a,	// (0x000615d9) main_blid2_pane

0x9f68,	// (0x0006b427) popup_blid2_search_window

0x011a,	// (0x000615d9) blid2_gps_pane

0x011a,	// (0x000615d9) blid2_navig_pane

0x011a,	// (0x000615d9) blid2_search_pane

0x011a,	// (0x000615d9) blid2_tripm_pane

0xd138,	// (0x0006e5f7) blid2_search_pane_g1_ParamLimits

0xd138,	// (0x0006e5f7) blid2_search_pane_g1

0xd148,	// (0x0006e607) blid2_search_pane_t1_ParamLimits

0xd148,	// (0x0006e607) blid2_search_pane_t1

0xd15a,	// (0x0006e619) aid_size_cell_blid2_gps_ParamLimits

0xd15a,	// (0x0006e619) aid_size_cell_blid2_gps

0xd16a,	// (0x0006e629) blid2_gps_pane_g1_ParamLimits

0xd16a,	// (0x0006e629) blid2_gps_pane_g1

0xd176,	// (0x0006e635) grid_blid2_satellite_pane_ParamLimits

0xd176,	// (0x0006e635) grid_blid2_satellite_pane

0xd186,	// (0x0006e645) blid2_navig_pane_g1_ParamLimits

0xd186,	// (0x0006e645) blid2_navig_pane_g1

0xd192,	// (0x0006e651) blid2_navig_pane_t1_ParamLimits

0xd192,	// (0x0006e651) blid2_navig_pane_t1

0xd1a4,	// (0x0006e663) blid2_navig_pane_t2_ParamLimits

0xd1a4,	// (0x0006e663) blid2_navig_pane_t2

0x0001,

0xfb18,	// (0x00070fd7) blid2_navig_pane_t_ParamLimits

0xfb18,	// (0x00070fd7) blid2_navig_pane_t

0xd1b6,	// (0x0006e675) blid2_navig_ring_pane_ParamLimits

0xd1b6,	// (0x0006e675) blid2_navig_ring_pane

0xd1c6,	// (0x0006e685) blid2_speed_pane_ParamLimits

0xd1c6,	// (0x0006e685) blid2_speed_pane

0xd1d2,	// (0x0006e691) blid2_tripm_pane_g1_ParamLimits

0xd1d2,	// (0x0006e691) blid2_tripm_pane_g1

0xd1e2,	// (0x0006e6a1) blid2_tripm_pane_g2_ParamLimits

0xd1e2,	// (0x0006e6a1) blid2_tripm_pane_g2

0xd1ee,	// (0x0006e6ad) blid2_tripm_pane_g3_ParamLimits

0xd1ee,	// (0x0006e6ad) blid2_tripm_pane_g3

0xd1fa,	// (0x0006e6b9) blid2_tripm_pane_g4_ParamLimits

0xd1fa,	// (0x0006e6b9) blid2_tripm_pane_g4

0xd206,	// (0x0006e6c5) blid2_tripm_pane_g5_ParamLimits

0xd206,	// (0x0006e6c5) blid2_tripm_pane_g5

0x0005,

0xfb1d,	// (0x00070fdc) blid2_tripm_pane_g_ParamLimits

0xfb1d,	// (0x00070fdc) blid2_tripm_pane_g

0xd222,	// (0x0006e6e1) blid2_tripm_pane_t1_ParamLimits

0xd222,	// (0x0006e6e1) blid2_tripm_pane_t1

0xd236,	// (0x0006e6f5) blid2_tripm_pane_t2_ParamLimits

0xd236,	// (0x0006e6f5) blid2_tripm_pane_t2

0xd248,	// (0x0006e707) blid2_tripm_pane_t3_ParamLimits

0xd248,	// (0x0006e707) blid2_tripm_pane_t3

0x0003,

0xfb2a,	// (0x00070fe9) blid2_tripm_pane_t_ParamLimits

0xfb2a,	// (0x00070fe9) blid2_tripm_pane_t

0xd27a,	// (0x0006e739) cell_blid2_satellite_pane_ParamLimits

0xd27a,	// (0x0006e739) cell_blid2_satellite_pane

0xd294,	// (0x0006e753) cell_blid2_satellite_pane_g1

0x1c99,	// (0x00063158) cell_blid2_satellite_pane_t1

0xec13,	// (0x000700d2) blid2_speed_pane_g1

0x1ca7,	// (0x00063166) blid2_speed_pane_t1

0x1cb5,	// (0x00063174) blid2_speed_pane_t2

0x0001,

0xfb33,	// (0x00070ff2) blid2_speed_pane_t

0xec13,	// (0x000700d2) blid2_navig_ring_pane_g1

0xd29d,	// (0x0006e75c) blid2_navig_ring_pane_g2

0xd2a5,	// (0x0006e764) blid2_navig_ring_pane_g3

0xd2ad,	// (0x0006e76c) blid2_navig_ring_pane_g4

0xd2b5,	// (0x0006e774) blid2_navig_ring_pane_g5

0x0004,

0xfb38,	// (0x00070ff7) blid2_navig_ring_pane_g

0x011a,	// (0x000615d9) bg_popup_window_pane_cp011

0x1cc3,	// (0x00063182) popup_blid2_search_window_g1

0x1ccb,	// (0x0006318a) popup_blid2_search_window_t1

0x1cd9,	// (0x00063198) popup_blid2_search_window_t2

0x0001,

0xfb43,	// (0x00071002) popup_blid2_search_window_t

0x0cb4,	// (0x00062173) main_browser_pane_g1

0x08f3,	// (0x00061db2) main_browser_pane_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_button_pane_cp011_ParamLimits

0xc4e6,	// (0x0006d9a5) cell_vitu2_function_pane_g1_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_popup_sub_pane_cp22_ParamLimits

0x4b93,	// (0x00066052) input_focus_pane_cp08_ParamLimits

0xcd49,	// (0x0006e208) popup_vitu2_query_button_pane_ParamLimits

0xcd49,	// (0x0006e208) popup_vitu2_query_button_pane

0x4b89,	// (0x00066048) popup_vitu2_query_input_button_pane

0x187e,	// (0x00062d3d) popup_vitu2_query_window_g1_ParamLimits

0x4ba0,	// (0x0006605f) popup_vitu2_query_window_g2_ParamLimits

0xfa4a,	// (0x00070f09) popup_vitu2_query_window_g_ParamLimits

0x011a,	// (0x000615d9) bg_button_pane_cp026

0xd2bd,	// (0x0006e77c) popup_vitu2_query_input_button_pane_g1

0x011a,	// (0x000615d9) bg_button_pane_cp025

0x1ce7,	// (0x000631a6) popup_vitu2_query_button_pane_t1

0xac79,	// (0x0006c138) main_mp3_pane_t6

0xac89,	// (0x0006c148) popup_slider_window_cp01

0xc161,	// (0x0006d620) cam4_battery_pane

0xc240,	// (0x0006d6ff) cam4_battery_pane_cp02

0xd036,	// (0x0006e4f5) cam4_battery_pane_cp01

0xd036,	// (0x0006e4f5) cam4_battery_pane_cp03

0xec13,	// (0x000700d2) cam4_battery_pane_g1

0x146b,	// (0x0006292a) cam4_battery_pane_g2

0x0001,

0xfb48,	// (0x00071007) cam4_battery_pane_g

0xeadf,	// (0x0006ff9e) popup_blid_sat_info2_window_t11

0x7d0a,	// (0x000691c9) aid_size_touch_mv_arrow_left_ParamLimits

0x7d33,	// (0x000691f2) aid_size_touch_mv_arrow_right_ParamLimits

0x7d7b,	// (0x0006923a) navi_pane_g1_ParamLimits

0x7d87,	// (0x00069246) navi_pane_g2_ParamLimits

0x7db5,	// (0x00069274) navi_pane_g3_ParamLimits

0xf418,	// (0x000708d7) navi_pane_g_ParamLimits

0x7e73,	// (0x00069332) navi_pane_mv_t1_ParamLimits

0xb746,	// (0x0006cc05) grid_imed_effect_pane_ParamLimits

0x0bfd,	// (0x000620bc) aid_placing_vt_slider_lsc

0x0c05,	// (0x000620c4) aid_placing_vt_slider_prt

0x9f3f,	// (0x0006b3fe) bg_tb_trans_pane_cp01_ParamLimits

0xed96,	// (0x00070255) popup_image_details_window_g1_ParamLimits

0xeda9,	// (0x00070268) popup_image_details_window_g2_ParamLimits

0xedbe,	// (0x0007027d) popup_image_details_window_g3_ParamLimits

0xedbe,	// (0x0007027d) popup_image_details_window_g3

0xf74b,	// (0x00070c0a) popup_image_details_window_g_ParamLimits

0xedd2,	// (0x00070291) popup_image_details_window_t1_ParamLimits

0xede4,	// (0x000702a3) popup_image_details_window_t2_ParamLimits

0xedfd,	// (0x000702bc) popup_image_details_window_t3_ParamLimits

0xee11,	// (0x000702d0) popup_image_details_window_t4_ParamLimits

0xee2c,	// (0x000702eb) popup_image_details_window_t5_ParamLimits

0xf752,	// (0x00070c11) popup_image_details_window_t_ParamLimits

0xcf5a,	// (0x0006e419) cl_header_name_pane_ParamLimits

0xcf5a,	// (0x0006e419) cl_header_name_pane

0xd2c5,	// (0x0006e784) cl_header_name_pane_t1_ParamLimits

0xd2c5,	// (0x0006e784) cl_header_name_pane_t1

0xd2dc,	// (0x0006e79b) cl_header_name_pane_t2_ParamLimits

0xd2dc,	// (0x0006e79b) cl_header_name_pane_t2

0xd306,	// (0x0006e7c5) cl_header_name_pane_t3_ParamLimits

0xd306,	// (0x0006e7c5) cl_header_name_pane_t3

0x0002,

0xfb4d,	// (0x0007100c) cl_header_name_pane_t_ParamLimits

0xfb4d,	// (0x0007100c) cl_header_name_pane_t

0x7e44,	// (0x00069303) navi_pane_mv_g2_ParamLimits

0x158f,	// (0x00062a4e) field_vitu2_entry_pane_g1_ParamLimits

0x159b,	// (0x00062a5a) field_vitu2_entry_pane_g2_ParamLimits

0x15a7,	// (0x00062a66) field_vitu2_entry_pane_g3_ParamLimits

0x15a7,	// (0x00062a66) field_vitu2_entry_pane_g3

0xf949,	// (0x00070e08) field_vitu2_entry_pane_g_ParamLimits

0xc476,	// (0x0006d935) cell_vitu2_itu_pane_g1_ParamLimits

0xc486,	// (0x0006d945) cell_vitu2_itu_pane_g2_ParamLimits

0xc486,	// (0x0006d945) cell_vitu2_itu_pane_g2

0x0001,

0xf955,	// (0x00070e14) cell_vitu2_itu_pane_g_ParamLimits

0xf955,	// (0x00070e14) cell_vitu2_itu_pane_g

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp05_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp05

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp03

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp04

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp10_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp10

0x4ce5,	// (0x000661a4) bg_vkb2_func_pane_cp08

0xcf04,	// (0x0006e3c3) bg_vkb2_func_pane_cp06

0xcf12,	// (0x0006e3d1) bg_vkb2_func_pane_cp07

0x1bec,	// (0x000630ab) bg_vkb2_func_pane_cp11_ParamLimits

0x1bec,	// (0x000630ab) bg_vkb2_func_pane_cp11

0x1c01,	// (0x000630c0) bg_vkb2_func_pane_cp12_ParamLimits

0x1c01,	// (0x000630c0) bg_vkb2_func_pane_cp12

0x011a,	// (0x000615d9) bg_vkb2_func_pane_cp09

0x15e4,	// (0x00062aa3) bg_vkb2_func_pane_g1

0x0dc5,	// (0x00062284) bg_vkb2_func_pane_g2

0x15ec,	// (0x00062aab) bg_vkb2_func_pane_g3

0x15f4,	// (0x00062ab3) bg_vkb2_func_pane_g4

0x1829,	// (0x00062ce8) bg_vkb2_func_pane_g5

0x160c,	// (0x00062acb) bg_vkb2_func_pane_g6

0x1614,	// (0x00062ad3) bg_vkb2_func_pane_g7

0x1604,	// (0x00062ac3) bg_vkb2_func_pane_g8

0x0da5,	// (0x00062264) bg_vkb2_func_pane_g9

0x0008,

0xfb54,	// (0x00071013) bg_vkb2_func_pane_g

0xd214,	// (0x0006e6d3) blid2_tripm_pane_g6_ParamLimits

0xd214,	// (0x0006e6d3) blid2_tripm_pane_g6

0x1425,	// (0x000628e4) mp4_progress_pane_g1

0xd26e,	// (0x0006e72d) blid2_tripm_values_pane_ParamLimits

0xd26e,	// (0x0006e72d) blid2_tripm_values_pane

0xd32b,	// (0x0006e7ea) blid2_tripm_values_pane_t1

0xd339,	// (0x0006e7f8) blid2_tripm_values_pane_t2

0xd347,	// (0x0006e806) blid2_tripm_values_pane_t3

0xd355,	// (0x0006e814) blid2_tripm_values_pane_t4

0xd363,	// (0x0006e822) blid2_tripm_values_pane_t5

0xd371,	// (0x0006e830) blid2_tripm_values_pane_t6

0xd37f,	// (0x0006e83e) blid2_tripm_values_pane_t7

0xd38d,	// (0x0006e84c) blid2_tripm_values_pane_t8

0xd39b,	// (0x0006e85a) blid2_tripm_values_pane_t9

0x0008,

0xfb67,	// (0x00071026) blid2_tripm_values_pane_t

0x6741,	// (0x00067c00) call_video_pane_t1_ParamLimits

0x675a,	// (0x00067c19) call_video_pane_t2_ParamLimits

0xf2a1,	// (0x00070760) call_video_pane_t_ParamLimits

0x4958,	// (0x00065e17) msg_header_pane_g1_ParamLimits

0x84f2,	// (0x000699b1) msg_header_pane_g2_ParamLimits

0x84f2,	// (0x000699b1) msg_header_pane_g2

0x0001,

0xf4bb,	// (0x0007097a) msg_header_pane_g_ParamLimits

0xf4bb,	// (0x0007097a) msg_header_pane_g

0x08f3,	// (0x00061db2) main_clock2_pane_ParamLimits

0xb4d6,	// (0x0006c995) grid_clock2_toolbar_pane_ParamLimits

0xb4d6,	// (0x0006c995) grid_clock2_toolbar_pane

0xb4d6,	// (0x0006c995) listscroll_clock2_pane_ParamLimits

0xb4d6,	// (0x0006c995) listscroll_clock2_pane

0xb583,	// (0x0006ca42) main_clock2_pane_t3_ParamLimits

0xb583,	// (0x0006ca42) main_clock2_pane_t3

0xb595,	// (0x0006ca54) main_clock2_pane_t4_ParamLimits

0xb595,	// (0x0006ca54) main_clock2_pane_t4

0x1cf5,	// (0x000631b4) cell_clock2_toolbar_pane

0x1cfd,	// (0x000631bc) cell_clock2_toolbar_pane_cp01

0x1cfd,	// (0x000631bc) cell_clock2_toolbar_pane_cp02

0x1d05,	// (0x000631c4) cell_clock2_toolbar_pane_cp03

0x1d0d,	// (0x000631cc) list_clock2_pane

0x7ad8,	// (0x00068f97) scroll_pane_cp10

0x1d15,	// (0x000631d4) list_single_clock2_pane_ParamLimits

0x1d15,	// (0x000631d4) list_single_clock2_pane

0x7ecf,	// (0x0006938e) list_highlight_pane_cp08

0x1d22,	// (0x000631e1) list_single_clock2_pane_t1

0x1d30,	// (0x000631ef) list_single_clock2_pane_t2

0x0001,

0xfb7a,	// (0x00071039) list_single_clock2_pane_t

0x011a,	// (0x000615d9) bg_button_pane_cp10

0x1d3e,	// (0x000631fd) cell_clock2_toolbar_pane_g1

0x851e,	// (0x000699dd) aid_main_viewer_pane_g1_ParamLimits

0x851e,	// (0x000699dd) aid_main_viewer_pane_g1

0x852a,	// (0x000699e9) aid_main_viewer_pane_g2_ParamLimits

0x852a,	// (0x000699e9) aid_main_viewer_pane_g2

0x8536,	// (0x000699f5) aid_main_viewer_pane_g3_ParamLimits

0x8536,	// (0x000699f5) aid_main_viewer_pane_g3

0x8547,	// (0x00069a06) aid_main_viewer_pane_g4_ParamLimits

0x8547,	// (0x00069a06) aid_main_viewer_pane_g4

0x0003,

0xf4cc,	// (0x0007098b) aid_main_viewer_pane_g_ParamLimits

0xf4cc,	// (0x0007098b) aid_main_viewer_pane_g

0x9f24,	// (0x0006b3e3) main_calc_pane_ParamLimits

0x9f4d,	// (0x0006b40c) main_dialer2_pane_ParamLimits

0x011a,	// (0x000615d9) main_cam6_pane

0x011a,	// (0x000615d9) main_vid6_pane

0xb4e2,	// (0x0006c9a1) listscroll_gen_pane_cp06_ParamLimits

0xb4e2,	// (0x0006c9a1) listscroll_gen_pane_cp06

0xb5a7,	// (0x0006ca66) main_clock2_pane_t5_ParamLimits

0xb5a7,	// (0x0006ca66) main_clock2_pane_t5

0xb5f0,	// (0x0006caaf) aid_call2_pane_cp10_ParamLimits

0xb602,	// (0x0006cac1) aid_call_pane_cp10_ParamLimits

0x7c95,	// (0x00069154) popup_clock_analogue_window_cp10_g1_ParamLimits

0x7c95,	// (0x00069154) popup_clock_analogue_window_cp10_g2_ParamLimits

0xb614,	// (0x0006cad3) popup_clock_analogue_window_cp10_g3_ParamLimits

0xb614,	// (0x0006cad3) popup_clock_analogue_window_cp10_g4_ParamLimits

0x7c95,	// (0x00069154) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf802,	// (0x00070cc1) popup_clock_analogue_window_cp10_g_ParamLimits

0xb626,	// (0x0006cae5) popup_clock_analogue_window_cp10_t1_ParamLimits

0xbdec,	// (0x0006d2ab) cell_dialer2_keypad_pane_g2_ParamLimits

0xbdec,	// (0x0006d2ab) cell_dialer2_keypad_pane_g2

0x0001,

0xf8e8,	// (0x00070da7) cell_dialer2_keypad_pane_g_ParamLimits

0xf8e8,	// (0x00070da7) cell_dialer2_keypad_pane_g

0xbe08,	// (0x0006d2c7) cell_dialer2_keypad_pane_t1

0xc7af,	// (0x0006dc6e) main_cset_text2_pane_ParamLimits

0xc7af,	// (0x0006dc6e) main_cset_text2_pane

0x1a5e,	// (0x00062f1d) area_vitu2_query_pane_g1_ParamLimits

0x4c10,	// (0x000660cf) area_vitu2_query_pane_g2_ParamLimits

0xfa97,	// (0x00070f56) area_vitu2_query_pane_g_ParamLimits

0x4cc1,	// (0x00066180) area_vitu2_query_pane_t7_ParamLimits

0x4cc1,	// (0x00066180) area_vitu2_query_pane_t7

0xcf04,	// (0x0006e3c3) bg_button_pane_cp018_ParamLimits

0xcf12,	// (0x0006e3d1) bg_button_pane_cp021_ParamLimits

0x4ce5,	// (0x000661a4) bg_button_pane_cp022_ParamLimits

0x4ce5,	// (0x000661a4) bg_vkb2_func_pane_cp08_ParamLimits

0xcf04,	// (0x0006e3c3) bg_vkb2_func_pane_cp06_ParamLimits

0xcf12,	// (0x0006e3d1) bg_vkb2_func_pane_cp07_ParamLimits

0x4cf6,	// (0x000661b5) input_focus_pane_cp09_ParamLimits

0xd3a9,	// (0x0006e868) cam6_autofocus_pane_ParamLimits

0xd3a9,	// (0x0006e868) cam6_autofocus_pane

0xd3cb,	// (0x0006e88a) cam6_image_uncrop_pane_ParamLimits

0xd3cb,	// (0x0006e88a) cam6_image_uncrop_pane

0xd3f8,	// (0x0006e8b7) cam6_indi_pane_ParamLimits

0xd3f8,	// (0x0006e8b7) cam6_indi_pane

0xd412,	// (0x0006e8d1) cam6_mode_pane_ParamLimits

0xd412,	// (0x0006e8d1) cam6_mode_pane

0xd426,	// (0x0006e8e5) cam6_timer_pane_ParamLimits

0xd426,	// (0x0006e8e5) cam6_timer_pane

0xd432,	// (0x0006e8f1) cam6_zoom_pane_ParamLimits

0xd432,	// (0x0006e8f1) cam6_zoom_pane

0xc1c2,	// (0x0006d681) cam6_mode_pane_g1_ParamLimits

0xc1c2,	// (0x0006d681) cam6_mode_pane_g1

0xc1da,	// (0x0006d699) cam6_mode_pane_g2_ParamLimits

0xc1da,	// (0x0006d699) cam6_mode_pane_g2

0xc1e6,	// (0x0006d6a5) cam6_mode_pane_g3_ParamLimits

0xc1e6,	// (0x0006d6a5) cam6_mode_pane_g3

0xc1f2,	// (0x0006d6b1) cam6_mode_pane_g4_ParamLimits

0xc1f2,	// (0x0006d6b1) cam6_mode_pane_g4

0x0003,

0xfb7f,	// (0x0007103e) cam6_mode_pane_g_ParamLimits

0xfb7f,	// (0x0007103e) cam6_mode_pane_g

0x1d46,	// (0x00063205) bg_tb_trans_pane_cp08_ParamLimits

0x1d46,	// (0x00063205) bg_tb_trans_pane_cp08

0x1d54,	// (0x00063213) cam6_battery_pane_ParamLimits

0x1d54,	// (0x00063213) cam6_battery_pane

0x1d6a,	// (0x00063229) cam6_indi_pane_g1_ParamLimits

0x1d6a,	// (0x00063229) cam6_indi_pane_g1

0x1d7c,	// (0x0006323b) cam6_indi_pane_g2_ParamLimits

0x1d7c,	// (0x0006323b) cam6_indi_pane_g2

0x1d8e,	// (0x0006324d) cam6_indi_pane_g3_ParamLimits

0x1d8e,	// (0x0006324d) cam6_indi_pane_g3

0x0002,

0xfb88,	// (0x00071047) cam6_indi_pane_g_ParamLimits

0xfb88,	// (0x00071047) cam6_indi_pane_g

0x1da0,	// (0x0006325f) cam6_indi_pane_t1_ParamLimits

0x1da0,	// (0x0006325f) cam6_indi_pane_t1

0xc2b2,	// (0x0006d771) cam6_autofocus_pane_g1

0xc2ba,	// (0x0006d779) cam6_autofocus_pane_g2

0xc2c2,	// (0x0006d781) cam6_autofocus_pane_g3

0xc2ca,	// (0x0006d789) cam6_autofocus_pane_g4

0x0003,

0xfb8f,	// (0x0007104e) cam6_autofocus_pane_g

0x1dc6,	// (0x00063285) cam6_timer_pane_g1

0x1dce,	// (0x0006328d) cam6_timer_pane_t1

0x1ddc,	// (0x0006329b) cam6_zoom_cont_pane

0x1de4,	// (0x000632a3) cam6_zoom_pane_g1

0x1dec,	// (0x000632ab) cam6_zoom_pane_g2

0xd44a,	// (0x0006e909) cam6_zoom_pane_g3

0x0002,

0xfb98,	// (0x00071057) cam6_zoom_pane_g

0xec13,	// (0x000700d2) cam6_battery_pane_g1

0xec13,	// (0x000700d2) cam6_battery_pane_g2

0x0001,

0xf70f,	// (0x00070bce) cam6_battery_pane_g

0x1df4,	// (0x000632b3) cam6_zoom_cont_pane_g1

0x1dfd,	// (0x000632bc) cam6_zoom_cont_pane_g2

0x1e06,	// (0x000632c5) cam6_zoom_cont_pane_g3

0x0002,

0xfb9f,	// (0x0007105e) cam6_zoom_cont_pane_g

0xd467,	// (0x0006e926) cam6_mode_pane_cp_ParamLimits

0xd467,	// (0x0006e926) cam6_mode_pane_cp

0xd432,	// (0x0006e8f1) cam6_zoom_pane_cp_ParamLimits

0xd432,	// (0x0006e8f1) cam6_zoom_pane_cp

0xd47b,	// (0x0006e93a) vid6_image_uncrop_cif_pane_ParamLimits

0xd47b,	// (0x0006e93a) vid6_image_uncrop_cif_pane

0xd4a7,	// (0x0006e966) vid6_image_uncrop_nhd_pane_ParamLimits

0xd4a7,	// (0x0006e966) vid6_image_uncrop_nhd_pane

0xd3cb,	// (0x0006e88a) vid6_image_uncrop_vga_pane_ParamLimits

0xd3cb,	// (0x0006e88a) vid6_image_uncrop_vga_pane

0xd4c4,	// (0x0006e983) vid6_image_uncrop_wvga_pane_ParamLimits

0xd4c4,	// (0x0006e983) vid6_image_uncrop_wvga_pane

0xd4e1,	// (0x0006e9a0) vid6_indi_pane_ParamLimits

0xd4e1,	// (0x0006e9a0) vid6_indi_pane

0x1d46,	// (0x00063205) bg_tb_trans_pane_cp09_ParamLimits

0x1d46,	// (0x00063205) bg_tb_trans_pane_cp09

0x1e1e,	// (0x000632dd) cam6_battery_pane_cp_ParamLimits

0x1e1e,	// (0x000632dd) cam6_battery_pane_cp

0x1e2a,	// (0x000632e9) vid6_indi_pane_g1_ParamLimits

0x1e2a,	// (0x000632e9) vid6_indi_pane_g1

0x1e3c,	// (0x000632fb) vid6_indi_pane_g2_ParamLimits

0x1e3c,	// (0x000632fb) vid6_indi_pane_g2

0x1e4e,	// (0x0006330d) vid6_indi_pane_g3_ParamLimits

0x1e4e,	// (0x0006330d) vid6_indi_pane_g3

0x1e63,	// (0x00063322) vid6_indi_pane_g4_ParamLimits

0x1e63,	// (0x00063322) vid6_indi_pane_g4

0x1e78,	// (0x00063337) vid6_indi_pane_g5_ParamLimits

0x1e78,	// (0x00063337) vid6_indi_pane_g5

0x0004,

0xfba6,	// (0x00071065) vid6_indi_pane_g_ParamLimits

0xfba6,	// (0x00071065) vid6_indi_pane_g

0x1e92,	// (0x00063351) vid6_indi_pane_t1_ParamLimits

0x1e92,	// (0x00063351) vid6_indi_pane_t1

0x1ea8,	// (0x00063367) vid6_indi_pane_t2_ParamLimits

0x1ea8,	// (0x00063367) vid6_indi_pane_t2

0x1ed0,	// (0x0006338f) vid6_indi_pane_t3_ParamLimits

0x1ed0,	// (0x0006338f) vid6_indi_pane_t3

0x1ef8,	// (0x000633b7) vid6_indi_pane_t4_ParamLimits

0x1ef8,	// (0x000633b7) vid6_indi_pane_t4

0x0003,

0xfbb1,	// (0x00071070) vid6_indi_pane_t_ParamLimits

0xfbb1,	// (0x00071070) vid6_indi_pane_t

0x1f1c,	// (0x000633db) wait_bar_pane_cp08

0xd506,	// (0x0006e9c5) main_cset_text2_pane_t1_ParamLimits

0xd506,	// (0x0006e9c5) main_cset_text2_pane_t1

0xd452,	// (0x0006e911) listscroll_gen_pane_cp06_t1_ParamLimits

0xd452,	// (0x0006e911) listscroll_gen_pane_cp06_t1

0x011a,	// (0x000615d9) main_cam6_set_pane

0xee76,	// (0x00070335) bg_tb_trans_pane_cp06_ParamLimits

0xc169,	// (0x0006d628) cam4_indicators_pane_g1_ParamLimits

0xc17a,	// (0x0006d639) cam4_indicators_pane_g2_ParamLimits

0xf925,	// (0x00070de4) cam4_indicators_pane_g_ParamLimits

0xc198,	// (0x0006d657) cam4_indicators_pane_t1_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_tb_trans_pane_cp07_ParamLimits

0xc24a,	// (0x0006d709) vid4_indicators_pane_g1_ParamLimits

0xc25b,	// (0x0006d71a) vid4_indicators_pane_g2_ParamLimits

0xc26c,	// (0x0006d72b) vid4_indicators_pane_g3_ParamLimits

0xc27d,	// (0x0006d73c) vid4_indicators_pane_g4_ParamLimits

0xf937,	// (0x00070df6) vid4_indicators_pane_g_ParamLimits

0xc299,	// (0x0006d758) vid4_indicators_pane_t1_ParamLimits

0xd03e,	// (0x0006e4fd) vid4_progress_pane_g1_ParamLimits

0xd04e,	// (0x0006e50d) vid4_progress_pane_g2_ParamLimits

0x85a4,	// (0x00069a63) vid4_progress_pane_g3_ParamLimits

0xd05e,	// (0x0006e51d) vid4_progress_pane_g4_ParamLimits

0xfae2,	// (0x00070fa1) vid4_progress_pane_g_ParamLimits

0xd07c,	// (0x0006e53b) vid4_progress_pane_t1_ParamLimits

0xd091,	// (0x0006e550) vid4_progress_pane_t2_ParamLimits

0xd0a7,	// (0x0006e566) vid4_progress_pane_t3_ParamLimits

0xfaed,	// (0x00070fac) vid4_progress_pane_t_ParamLimits

0xd0bc,	// (0x0006e57b) wait_bar_pane_cp07_ParamLimits

0xd539,	// (0x0006e9f8) main_cam6_set_pane_g2_ParamLimits

0xd539,	// (0x0006e9f8) main_cam6_set_pane_g2

0xd545,	// (0x0006ea04) main_cset6_listscroll_pane_ParamLimits

0xd545,	// (0x0006ea04) main_cset6_listscroll_pane

0xd570,	// (0x0006ea2f) main_cset6_slider_pane_ParamLimits

0xd570,	// (0x0006ea2f) main_cset6_slider_pane

0xd57c,	// (0x0006ea3b) main_cset6_text2_pane_ParamLimits

0xd57c,	// (0x0006ea3b) main_cset6_text2_pane

0x1f2b,	// (0x000633ea) main_cset6_text_pane

0x1f33,	// (0x000633f2) main_cset_list_pane_copy1_ParamLimits

0x1f33,	// (0x000633f2) main_cset_list_pane_copy1

0x1f43,	// (0x00063402) scroll_pane_cp028_copy1

0xd58f,	// (0x0006ea4e) cset_list_set_pane_copy1

0xd5a2,	// (0x0006ea61) aid_position_infowindow_above_copy1

0xd5aa,	// (0x0006ea69) aid_position_infowindow_below_copy1

0xd5b2,	// (0x0006ea71) cset_list_set_pane_g1_copy1

0x4b10,	// (0x00065fcf) cset_list_set_pane_g3_copy1_ParamLimits

0x4b10,	// (0x00065fcf) cset_list_set_pane_g3_copy1

0x4b1f,	// (0x00065fde) cset_list_set_pane_t1_copy1_ParamLimits

0x4b1f,	// (0x00065fde) cset_list_set_pane_t1_copy1

0x9f3f,	// (0x0006b3fe) list_highlight_pane_cp021_copy1_ParamLimits

0x9f3f,	// (0x0006b3fe) list_highlight_pane_cp021_copy1

0x1f4c,	// (0x0006340b) cset6_slider_pane_ParamLimits

0x1f4c,	// (0x0006340b) cset6_slider_pane

0x1f78,	// (0x00063437) main_cset6_slider_pane_g1_ParamLimits

0x1f78,	// (0x00063437) main_cset6_slider_pane_g1

0xd5ba,	// (0x0006ea79) main_cset6_slider_pane_g2_ParamLimits

0xd5ba,	// (0x0006ea79) main_cset6_slider_pane_g2

0x1fa0,	// (0x0006345f) main_cset6_slider_pane_g3_ParamLimits

0x1fa0,	// (0x0006345f) main_cset6_slider_pane_g3

0xd5e2,	// (0x0006eaa1) main_cset6_slider_pane_g4_ParamLimits

0xd5e2,	// (0x0006eaa1) main_cset6_slider_pane_g4

0xd5ee,	// (0x0006eaad) main_cset6_slider_pane_g5_ParamLimits

0xd5ee,	// (0x0006eaad) main_cset6_slider_pane_g5

0x1713,	// (0x00062bd2) main_cset6_slider_pane_g7_ParamLimits

0x1713,	// (0x00062bd2) main_cset6_slider_pane_g7

0x171f,	// (0x00062bde) main_cset6_slider_pane_g8_ParamLimits

0x171f,	// (0x00062bde) main_cset6_slider_pane_g8

0xd5fc,	// (0x0006eabb) main_cset6_slider_pane_g9_ParamLimits

0xd5fc,	// (0x0006eabb) main_cset6_slider_pane_g9

0xd608,	// (0x0006eac7) main_cset6_slider_pane_g10_ParamLimits

0xd608,	// (0x0006eac7) main_cset6_slider_pane_g10

0xd614,	// (0x0006ead3) main_cset6_slider_pane_g11_ParamLimits

0xd614,	// (0x0006ead3) main_cset6_slider_pane_g11

0xd620,	// (0x0006eadf) main_cset6_slider_pane_g12_ParamLimits

0xd620,	// (0x0006eadf) main_cset6_slider_pane_g12

0xd62c,	// (0x0006eaeb) main_cset6_slider_pane_g13_ParamLimits

0xd62c,	// (0x0006eaeb) main_cset6_slider_pane_g13

0xd638,	// (0x0006eaf7) main_cset6_slider_pane_g14_ParamLimits

0xd638,	// (0x0006eaf7) main_cset6_slider_pane_g14

0xd644,	// (0x0006eb03) main_cset6_slider_pane_g15_ParamLimits

0xd644,	// (0x0006eb03) main_cset6_slider_pane_g15

0xd65c,	// (0x0006eb1b) main_cset6_slider_pane_g16_ParamLimits

0xd65c,	// (0x0006eb1b) main_cset6_slider_pane_g16

0xd66a,	// (0x0006eb29) main_cset6_slider_pane_g17_ParamLimits

0xd66a,	// (0x0006eb29) main_cset6_slider_pane_g17

0x0011,

0xfbba,	// (0x00071079) main_cset6_slider_pane_g_ParamLimits

0xfbba,	// (0x00071079) main_cset6_slider_pane_g

0x1fac,	// (0x0006346b) main_cset6_slider_pane_t1_ParamLimits

0x1fac,	// (0x0006346b) main_cset6_slider_pane_t1

0xd690,	// (0x0006eb4f) main_cset6_slider_pane_t2_ParamLimits

0xd690,	// (0x0006eb4f) main_cset6_slider_pane_t2

0xd6bb,	// (0x0006eb7a) main_cset6_slider_pane_t3_ParamLimits

0xd6bb,	// (0x0006eb7a) main_cset6_slider_pane_t3

0xd6e6,	// (0x0006eba5) main_cset6_slider_pane_t4_ParamLimits

0xd6e6,	// (0x0006eba5) main_cset6_slider_pane_t4

0xd711,	// (0x0006ebd0) main_cset6_slider_pane_t5_ParamLimits

0xd711,	// (0x0006ebd0) main_cset6_slider_pane_t5

0x1fed,	// (0x000634ac) main_cset6_slider_pane_t7_ParamLimits

0x1fed,	// (0x000634ac) main_cset6_slider_pane_t7

0xd73e,	// (0x0006ebfd) main_cset6_slider_pane_t8_ParamLimits

0xd73e,	// (0x0006ebfd) main_cset6_slider_pane_t8

0xd762,	// (0x0006ec21) main_cset6_slider_pane_t9_ParamLimits

0xd762,	// (0x0006ec21) main_cset6_slider_pane_t9

0xd786,	// (0x0006ec45) main_cset6_slider_pane_t10_ParamLimits

0xd786,	// (0x0006ec45) main_cset6_slider_pane_t10

0xd7aa,	// (0x0006ec69) main_cset6_slider_pane_t11_ParamLimits

0xd7aa,	// (0x0006ec69) main_cset6_slider_pane_t11

0x2023,	// (0x000634e2) main_cset6_slider_pane_t14_ParamLimits

0x2023,	// (0x000634e2) main_cset6_slider_pane_t14

0x205c,	// (0x0006351b) main_cset6_slider_pane_t15_ParamLimits

0x205c,	// (0x0006351b) main_cset6_slider_pane_t15

0x000b,

0xfbdf,	// (0x0007109e) main_cset6_slider_pane_t_ParamLimits

0xfbdf,	// (0x0007109e) main_cset6_slider_pane_t

0x2095,	// (0x00063554) cset_slider_pane_g1_copy1

0x209e,	// (0x0006355d) cset_slider_pane_g2_copy1

0x20a7,	// (0x00063566) cset_slider_pane_g3_copy1

0x011a,	// (0x000615d9) bg_popup_sub_pane_cp011_copy1

0x188a,	// (0x00062d49) main_cset_text_pane_g1_copy1

0x1892,	// (0x00062d51) main_cset_text_pane_t1_copy1

0x18a0,	// (0x00062d5f) main_cset_text_pane_t2_copy1

0x18ae,	// (0x00062d6d) main_cset_text_pane_t3_copy1

0x18bc,	// (0x00062d7b) main_cset_text_pane_t4_copy1

0x18ca,	// (0x00062d89) main_cset_text_pane_t5_copy1

0x18d8,	// (0x00062d97) main_cset_text_pane_t6_copy1

0x18e6,	// (0x00062da5) main_cset_text_pane_t7_copy1

0xd7ce,	// (0x0006ec8d) main_cset_text2_pane_t1_copy1

0x011a,	// (0x000615d9) main_ncimui_pane

0x9f9e,	// (0x0006b45d) popup_query_ncimui_window_ParamLimits

0x9f9e,	// (0x0006b45d) popup_query_ncimui_window

0xadda,	// (0x0006c299) field_cale_ev2_pane_g4_ParamLimits

0xadda,	// (0x0006c299) field_cale_ev2_pane_g4

0xbb0c,	// (0x0006cfcb) cell_video_dialer_keypad_pane_g2_ParamLimits

0xbb0c,	// (0x0006cfcb) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8c3,	// (0x00070d82) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8c3,	// (0x00070d82) cell_video_dialer_keypad_pane_g

0xbb24,	// (0x0006cfe3) cell_video_dialer_keypad_pane_t1

0x011a,	// (0x000615d9) bg_popup_window_pane_cp012

0x7930,	// (0x00068def) heading_pane_cp06

0x219f,	// (0x0006365e) ncim_query_content_pane

0x011a,	// (0x000615d9) bg_popup_heading_pane_cp01

0x21a7,	// (0x00063666) ncim_heading_pane_t1

0x21b5,	// (0x00063674) ncim_indicator_popup_pane

0x21c7,	// (0x00063686) ncim_query_button_pane

0x21db,	// (0x0006369a) ncim_query_content_pane_t1

0x21ed,	// (0x000636ac) ncim_query_content_pane_t2

0x0005,

0xfc1e,	// (0x000710dd) ncim_query_content_pane_t

0x2227,	// (0x000636e6) ncim_query_list_pane

0x2239,	// (0x000636f8) ncim_query_popup_pane

0x21b5,	// (0x00063674) ncim_indicator_popup_pane_ParamLimits

0xd8be,	// (0x0006ed7d) ncim_query_content_pane_g1_ParamLimits

0xd8be,	// (0x0006ed7d) ncim_query_content_pane_g1

0x21db,	// (0x0006369a) ncim_query_content_pane_t1_ParamLimits

0x21ed,	// (0x000636ac) ncim_query_content_pane_t2_ParamLimits

0xd8ca,	// (0x0006ed89) ncim_query_content_pane_t3_ParamLimits

0xd8ca,	// (0x0006ed89) ncim_query_content_pane_t3

0xd8e7,	// (0x0006eda6) ncim_query_content_pane_t4_ParamLimits

0xd8e7,	// (0x0006eda6) ncim_query_content_pane_t4

0xd904,	// (0x0006edc3) ncim_query_content_pane_t5_ParamLimits

0xd904,	// (0x0006edc3) ncim_query_content_pane_t5

0x21ff,	// (0x000636be) ncim_query_content_pane_t6_ParamLimits

0x21ff,	// (0x000636be) ncim_query_content_pane_t6

0xfc1e,	// (0x000710dd) ncim_query_content_pane_t_ParamLimits

0x2227,	// (0x000636e6) ncim_query_list_pane_ParamLimits

0x2239,	// (0x000636f8) ncim_query_popup_pane_ParamLimits

0x224d,	// (0x0006370c) wait_bar_pane_cp04

0x011a,	// (0x000615d9) input_focus_pane_cp011

0x2255,	// (0x00063714) ncim_query_popup_pane_t1

0x2263,	// (0x00063722) ncim_list_query_list_pane_ParamLimits

0x2263,	// (0x00063722) ncim_list_query_list_pane

0x011a,	// (0x000615d9) bg_button_pane_cp027

0x2270,	// (0x0006372f) ncim_query_button_pane_g1

0x011a,	// (0x000615d9) list_highlight_pane_cp012

0x227a,	// (0x00063739) ncim_list_query_list_pane_g1

0x2282,	// (0x00063741) ncim_list_query_list_pane_t1

0xc189,	// (0x0006d648) cam4_indicators_pane_g3_ParamLimits

0xc189,	// (0x0006d648) cam4_indicators_pane_g3

0xc289,	// (0x0006d748) vid4_indicators_pane_g5_ParamLimits

0xc289,	// (0x0006d748) vid4_indicators_pane_g5

0xd06d,	// (0x0006e52c) vid4_progress_pane_g5_ParamLimits

0xd06d,	// (0x0006e52c) vid4_progress_pane_g5

0xd806,	// (0x0006ecc5) main_ncimui_pane_g1

0xd84c,	// (0x0006ed0b) ncimui_group_query_pane_ParamLimits

0xd84c,	// (0x0006ed0b) ncimui_group_query_pane

0xd880,	// (0x0006ed3f) ncimui_list_pane_ParamLimits

0xd880,	// (0x0006ed3f) ncimui_list_pane

0xd89a,	// (0x0006ed59) ncimui_text_pane_ParamLimits

0xd89a,	// (0x0006ed59) ncimui_text_pane

0xd921,	// (0x0006ede0) ncimui_text_pane_t1_ParamLimits

0xd921,	// (0x0006ede0) ncimui_text_pane_t1

0x2290,	// (0x0006374f) ncimui_list_single_graphic_pane_ParamLimits

0x2290,	// (0x0006374f) ncimui_list_single_graphic_pane

0xd940,	// (0x0006edff) ncimui_query_pane_ParamLimits

0xd940,	// (0x0006edff) ncimui_query_pane

0x011a,	// (0x000615d9) list_highlight_pane_cp013

0x22a0,	// (0x0006375f) ncim_list_query_list_pane_t1_copy1

0x227a,	// (0x00063739) ncim_list_single_graphic_pane_g1

0x22ae,	// (0x0006376d) ncim_query_button_pane_cp01

0x22b6,	// (0x00063775) ncim_query_entry_pane_ParamLimits

0x22b6,	// (0x00063775) ncim_query_entry_pane

0x22c6,	// (0x00063785) ncimui_query_pane_g1

0x22ce,	// (0x0006378d) ncimui_query_pane_t1_ParamLimits

0x22ce,	// (0x0006378d) ncimui_query_pane_t1

0x011a,	// (0x000615d9) input_focus_pane_cp012

0x2255,	// (0x00063714) ncim_query_entry_pane_t1

0x08f3,	// (0x00061db2) main_im_pane_ParamLimits

0x9f3f,	// (0x0006b3fe) main_mobtv_pane_ParamLimits

0x9f3f,	// (0x0006b3fe) main_mobtv_pane

0xd678,	// (0x0006eb37) main_cset6_slider_pane_g18_ParamLimits

0xd678,	// (0x0006eb37) main_cset6_slider_pane_g18

0xd684,	// (0x0006eb43) main_cset6_slider_pane_g19_ParamLimits

0xd684,	// (0x0006eb43) main_cset6_slider_pane_g19

0x15a7,	// (0x00062a66) bg_main_mobtv_pane_ParamLimits

0x15a7,	// (0x00062a66) bg_main_mobtv_pane

0xd950,	// (0x0006ee0f) main_mobtv_info_pane

0xd95b,	// (0x0006ee1a) main_mobtv_loading_pane_ParamLimits

0xd95b,	// (0x0006ee1a) main_mobtv_loading_pane

0x22f2,	// (0x000637b1) main_mobtv_pg_channel_list_pane

0x22fc,	// (0x000637bb) main_mobtv_pg_hdr_pane

0xd968,	// (0x0006ee27) main_mobtv_programe_curr_pane_ParamLimits

0xd968,	// (0x0006ee27) main_mobtv_programe_curr_pane

0xd975,	// (0x0006ee34) main_mobtv_programe_next_pane_ParamLimits

0xd975,	// (0x0006ee34) main_mobtv_programe_next_pane

0x2305,	// (0x000637c4) popup_mobtv_noti_window

0xec13,	// (0x000700d2) main_tv_pg_hdr_pane_g1

0x230d,	// (0x000637cc) main_tv_pg_hdr_pane_g2

0x2315,	// (0x000637d4) main_tv_pg_hdr_pane_g3

0x231d,	// (0x000637dc) main_tv_pg_hdr_pane_g4

0x2325,	// (0x000637e4) main_tv_pg_hdr_pane_g5

0x232f,	// (0x000637ee) main_tv_pg_hdr_pane_g6

0x2339,	// (0x000637f8) main_tv_pg_hdr_pane_g7

0x2343,	// (0x00063802) main_tv_pg_hdr_pane_g8

0x234d,	// (0x0006380c) main_tv_pg_hdr_pane_g9

0x2357,	// (0x00063816) main_tv_pg_hdr_pane_g10

0x2361,	// (0x00063820) main_tv_pg_hdr_pane_g11

0x000a,

0xfc2b,	// (0x000710ea) main_tv_pg_hdr_pane_g

0x236b,	// (0x0006382a) main_tv_pg_hdr_pane_t1

0x2379,	// (0x00063838) main_tv_pg_hdr_pane_t2

0x2387,	// (0x00063846) main_tv_pg_hdr_pane_t3

0x2397,	// (0x00063856) main_tv_pg_hdr_pane_t4

0x23a7,	// (0x00063866) main_tv_pg_hdr_pane_t5

0x0004,

0xfc42,	// (0x00071101) main_tv_pg_hdr_pane_t

0x23b7,	// (0x00063876) single_mobtv_pg_channel_pane_ParamLimits

0x23b7,	// (0x00063876) single_mobtv_pg_channel_pane

0x23c9,	// (0x00063888) single_mobtv_pg_channel_table_pane

0x23d2,	// (0x00063891) single_mobtv_pg_channel_thumb_pane

0x23db,	// (0x0006389a) single_tv_pg_channel_pane_g1

0x23e4,	// (0x000638a3) single_tv_pg_channel_pane_g2

0x0001,

0xfc4d,	// (0x0007110c) single_tv_pg_channel_pane_g

0xee76,	// (0x00070335) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xee76,	// (0x00070335) bg_single_mobtv_pg_channel_thumb_pane

0x23ed,	// (0x000638ac) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x23ed,	// (0x000638ac) single_mobtv_pg_channel_thumb_pane_g1

0x23fb,	// (0x000638ba) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x23fb,	// (0x000638ba) single_mobtv_pg_channel_thumb_pane_g2

0x2407,	// (0x000638c6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x2407,	// (0x000638c6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc52,	// (0x00071111) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc52,	// (0x00071111) single_mobtv_pg_channel_thumb_pane_g

0x2413,	// (0x000638d2) single_mobtv_pg_channel_thumb_pane_t1

0x2421,	// (0x000638e0) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc59,	// (0x00071118) single_mobtv_pg_channel_thumb_pane_t

0xec13,	// (0x000700d2) bg_single_mobtv_pg_channel_table_pane_g1

0xec13,	// (0x000700d2) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf70f,	// (0x00070bce) bg_single_mobtv_pg_channel_table_pane_g

0x242f,	// (0x000638ee) single_mobtv_pg_channel_table_pane_t1

0x243d,	// (0x000638fc) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc5e,	// (0x0007111d) single_mobtv_pg_channel_table_pane_t

0xd98a,	// (0x0006ee49) main_mobtv_info_pane_g1_ParamLimits

0xd98a,	// (0x0006ee49) main_mobtv_info_pane_g1

0xd9a6,	// (0x0006ee65) main_mobtv_info_pane_t1_ParamLimits

0xd9a6,	// (0x0006ee65) main_mobtv_info_pane_t1

0xda1e,	// (0x0006eedd) main_mobtv_info_pane_t2_ParamLimits

0xda1e,	// (0x0006eedd) main_mobtv_info_pane_t2

0x0002,

0xfc68,	// (0x00071127) main_mobtv_info_pane_t_ParamLimits

0xfc68,	// (0x00071127) main_mobtv_info_pane_t

0xdaad,	// (0x0006ef6c) wait_bar_pane_cp05

0xdabf,	// (0x0006ef7e) main_mobtv_loading_pane_g1_ParamLimits

0xdabf,	// (0x0006ef7e) main_mobtv_loading_pane_g1

0xdacd,	// (0x0006ef8c) main_mobtv_loading_pane_g2_ParamLimits

0xdacd,	// (0x0006ef8c) main_mobtv_loading_pane_g2

0xdad9,	// (0x0006ef98) main_mobtv_loading_pane_g3_ParamLimits

0xdad9,	// (0x0006ef98) main_mobtv_loading_pane_g3

0x0002,

0xfc6f,	// (0x0007112e) main_mobtv_loading_pane_g_ParamLimits

0xfc6f,	// (0x0007112e) main_mobtv_loading_pane_g

0x244b,	// (0x0006390a) main_mobtv_loading_pane_t1_ParamLimits

0x244b,	// (0x0006390a) main_mobtv_loading_pane_t1

0x2463,	// (0x00063922) main_mobtv_loading_pane_t2_ParamLimits

0x2463,	// (0x00063922) main_mobtv_loading_pane_t2

0x0001,

0xfc76,	// (0x00071135) main_mobtv_loading_pane_t_ParamLimits

0xfc76,	// (0x00071135) main_mobtv_loading_pane_t

0xdae7,	// (0x0006efa6) wait_bar_pane_cp06_ParamLimits

0xdae7,	// (0x0006efa6) wait_bar_pane_cp06

0x2487,	// (0x00063946) main_mobtv_programe_curr_pane_t1

0x2495,	// (0x00063954) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc7b,	// (0x0007113a) main_mobtv_programe_curr_pane_t

0x24a3,	// (0x00063962) main_mobtv_programe_next_pane_t1

0x24b1,	// (0x00063970) main_mobtv_programe_next_pane_t2

0x24bf,	// (0x0006397e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc80,	// (0x0007113f) main_mobtv_programe_next_pane_t

0x011a,	// (0x000615d9) bg_popup_mobtv_noti_window_pane

0x24cd,	// (0x0006398c) popup_mobtv_noti_window_g1

0x24d5,	// (0x00063994) popup_mobtv_noti_window_t1

0x24e3,	// (0x000639a2) popup_mobtv_noti_window_t2

0x0001,

0xfc87,	// (0x00071146) popup_mobtv_noti_window_t

0xec13,	// (0x000700d2) bg_popup_mobtv_noti_window_pane_g1

0x011a,	// (0x000615d9) sc_clock_pane

0x011a,	// (0x000615d9) main_fs_bigclock_pane

0xd25c,	// (0x0006e71b) blid2_tripm_pane_t4_ParamLimits

0xd25c,	// (0x0006e71b) blid2_tripm_pane_t4

0xdaf3,	// (0x0006efb2) sc_clock_pane_g1_ParamLimits

0xdaf3,	// (0x0006efb2) sc_clock_pane_g1

0xdb01,	// (0x0006efc0) sc_clock_pane_t1_ParamLimits

0xdb01,	// (0x0006efc0) sc_clock_pane_t1

0xdb14,	// (0x0006efd3) sc_clock_pane_t2_ParamLimits

0xdb14,	// (0x0006efd3) sc_clock_pane_t2

0xdb26,	// (0x0006efe5) sc_clock_pane_t3_ParamLimits

0xdb26,	// (0x0006efe5) sc_clock_pane_t3

0x0004,

0xfc8c,	// (0x0007114b) sc_clock_pane_t_ParamLimits

0xfc8c,	// (0x0007114b) sc_clock_pane_t

0xe2ef,	// (0x0006f7ae) main_fs_bigclock_indicator_pane_ParamLimits

0xe2ef,	// (0x0006f7ae) main_fs_bigclock_indicator_pane

0xdbaa,	// (0x0006f069) main_fs_bigclock_pane_g1_ParamLimits

0xdbaa,	// (0x0006f069) main_fs_bigclock_pane_g1

0xe2fb,	// (0x0006f7ba) main_fs_bigclock_pane_t1_ParamLimits

0xe2fb,	// (0x0006f7ba) main_fs_bigclock_pane_t1

0xe30d,	// (0x0006f7cc) main_fs_bigclock_pane_t2_ParamLimits

0xe30d,	// (0x0006f7cc) main_fs_bigclock_pane_t2

0xe321,	// (0x0006f7e0) main_fs_bigclock_pane_t3_ParamLimits

0xe321,	// (0x0006f7e0) main_fs_bigclock_pane_t3

0x0002,

0xfe8b,	// (0x0007134a) main_fs_bigclock_pane_t_ParamLimits

0xfe8b,	// (0x0007134a) main_fs_bigclock_pane_t

0x30ee,	// (0x000645ad) main_fs_bigclock_indicator_pane_g1

0x21cf,	// (0x0006368e) ncim_query_content_pane_g2_ParamLimits

0x21cf,	// (0x0006368e) ncim_query_content_pane_g2

0x0001,

0xfc19,	// (0x000710d8) ncim_query_content_pane_g_ParamLimits

0xfc19,	// (0x000710d8) ncim_query_content_pane_g

0xdb3a,	// (0x0006eff9) sc_clock_pane_t4_ParamLimits

0xdb3a,	// (0x0006eff9) sc_clock_pane_t4

0x9f3f,	// (0x0006b3fe) main_radioblah_pane

0x1518,	// (0x000629d7) cell_call4_button_pane_t1_copy1_ParamLimits

0x1518,	// (0x000629d7) cell_call4_button_pane_t1_copy1

0xd80e,	// (0x0006eccd) main_ncimui_pane_t1_ParamLimits

0xd80e,	// (0x0006eccd) main_ncimui_pane_t1

0xd820,	// (0x0006ecdf) main_ncimui_pane_t2_ParamLimits

0xd820,	// (0x0006ecdf) main_ncimui_pane_t2

0x0002,

0xfc12,	// (0x000710d1) main_ncimui_pane_t_ParamLimits

0xfc12,	// (0x000710d1) main_ncimui_pane_t

0x2611,	// (0x00063ad0) main_radioblah_anim_pane_ParamLimits

0x2611,	// (0x00063ad0) main_radioblah_anim_pane

0x2622,	// (0x00063ae1) main_radioblah_info_pane_ParamLimits

0x2622,	// (0x00063ae1) main_radioblah_info_pane

0x2636,	// (0x00063af5) main_radioblah_pane_t1_ParamLimits

0x2636,	// (0x00063af5) main_radioblah_pane_t1

0x2652,	// (0x00063b11) main_radioblah_pane_t2_ParamLimits

0x2652,	// (0x00063b11) main_radioblah_pane_t2

0x0003,

0xfcad,	// (0x0007116c) main_radioblah_pane_t_ParamLimits

0xfcad,	// (0x0007116c) main_radioblah_pane_t

0xdbfc,	// (0x0006f0bb) main_radioblah_rocker_ctrl_pane_ParamLimits

0xdbfc,	// (0x0006f0bb) main_radioblah_rocker_ctrl_pane

0x269a,	// (0x00063b59) main_radioblah_info_pane_t1_ParamLimits

0x269a,	// (0x00063b59) main_radioblah_info_pane_t1

0xdc41,	// (0x0006f100) main_radioblah_info_pane_t2_ParamLimits

0xdc41,	// (0x0006f100) main_radioblah_info_pane_t2

0x0003,

0xfcb6,	// (0x00071175) main_radioblah_info_pane_t_ParamLimits

0xfcb6,	// (0x00071175) main_radioblah_info_pane_t

0xec13,	// (0x000700d2) main_radioblah_rocker_ctrl_pane_g1

0xdcf1,	// (0x0006f1b0) main_radioblah_rocker_ctrl_pane_g2

0xdcf9,	// (0x0006f1b8) main_radioblah_rocker_ctrl_pane_g3

0xdd01,	// (0x0006f1c0) main_radioblah_rocker_ctrl_pane_g4

0xdd09,	// (0x0006f1c8) main_radioblah_rocker_ctrl_pane_g5

0xdd11,	// (0x0006f1d0) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfcbf,	// (0x0007117e) main_radioblah_rocker_ctrl_pane_g

0xd7ce,	// (0x0006ec8d) main_cset_text2_pane_t1_copy1_ParamLimits

0xc0b7,	// (0x0006d576) cam4_image_uncrop_qvga_pane

0xc1fe,	// (0x0006d6bd) vid4_image_uncrop_qcif_pane

0xd3ea,	// (0x0006e8a9) cam6_image_uncrop_qvga_pane_ParamLimits

0xd3ea,	// (0x0006e8a9) cam6_image_uncrop_qvga_pane

0x1e0e,	// (0x000632cd) vid6_image_uncrop_qcif_pane_ParamLimits

0x1e0e,	// (0x000632cd) vid6_image_uncrop_qcif_pane

0x011a,	// (0x000615d9) bg_popup_preview_window_pane_cp03

0x2181,	// (0x00063640) list_cset_text2_pane

0x2189,	// (0x00063648) main_cset6_text2_pane_g1

0x2191,	// (0x00063650) main_cset6_text2_pane_t1

0xdd19,	// (0x0006f1d8) list_cset_text2_pane_t1_ParamLimits

0xdd19,	// (0x0006f1d8) list_cset_text2_pane_t1

0x9f3f,	// (0x0006b3fe) main_radioblah_pane_ParamLimits

0xda99,	// (0x0006ef58) main_mobtv_info_pane_t3_ParamLimits

0xda99,	// (0x0006ef58) main_mobtv_info_pane_t3

0xdbea,	// (0x0006f0a9) main_radioblah_pane_g1

0xdc15,	// (0x0006f0d4) main_radioblah_info_pane_g1

0xdc96,	// (0x0006f155) main_radioblah_info_pane_t3_ParamLimits

0xdc96,	// (0x0006f155) main_radioblah_info_pane_t3

0x7349,	// (0x00068808) highlight_cell_cale_month_pane_ParamLimits

0x7349,	// (0x00068808) highlight_cell_cale_month_pane

0x011a,	// (0x000615d9) main_phob_fisheye_pane

0xef58,	// (0x00070417) scroll_pane_cp0031_ParamLimits

0xef58,	// (0x00070417) scroll_pane_cp0031

0x1f1c,	// (0x000633db) wait_bar_pane_cp08_ParamLimits

0xd58f,	// (0x0006ea4e) cset_list_set_pane_copy1_ParamLimits

0x26d4,	// (0x00063b93) highlight_cell_cale_month_pane_g1

0xdd36,	// (0x0006f1f5) highlight_cell_cale_month_pane_t1

0x1b4e,	// (0x0006300d) list_gen_pane_cp01

0x16fe,	// (0x00062bbd) scroll_pane_01

0x4e21,	// (0x000662e0) list_single_double_fisheye_pane

0x4e2a,	// (0x000662e9) list_double_fisheye_pane_g1_ParamLimits

0x4e2a,	// (0x000662e9) list_double_fisheye_pane_g1

0x4e36,	// (0x000662f5) list_double_fisheye_pane_g2_ParamLimits

0x4e36,	// (0x000662f5) list_double_fisheye_pane_g2

0x4e4a,	// (0x00066309) list_double_fisheye_pane_g3_ParamLimits

0x4e4a,	// (0x00066309) list_double_fisheye_pane_g3

0x0004,

0xfccc,	// (0x0007118b) list_double_fisheye_pane_g_ParamLimits

0xfccc,	// (0x0007118b) list_double_fisheye_pane_g

0x4e73,	// (0x00066332) list_double_fisheye_pane_t1_ParamLimits

0x4e73,	// (0x00066332) list_double_fisheye_pane_t1

0x4e8e,	// (0x0006634d) list_double_fisheye_pane_t2_ParamLimits

0x4e8e,	// (0x0006634d) list_double_fisheye_pane_t2

0x0001,

0xfcd7,	// (0x00071196) list_double_fisheye_pane_t_ParamLimits

0xfcd7,	// (0x00071196) list_double_fisheye_pane_t

0x011a,	// (0x000615d9) main_call5_pane

0xdb60,	// (0x0006f01f) sc_swipe_pane_ParamLimits

0xdb60,	// (0x0006f01f) sc_swipe_pane

0xdd50,	// (0x0006f20f) call5_image_pane_ParamLimits

0xdd50,	// (0x0006f20f) call5_image_pane

0xdd60,	// (0x0006f21f) call5_swipe_1_pane_ParamLimits

0xdd60,	// (0x0006f21f) call5_swipe_1_pane

0xdd6c,	// (0x0006f22b) call5_swipe_2_pane_ParamLimits

0xdd6c,	// (0x0006f22b) call5_swipe_2_pane

0xdd86,	// (0x0006f245) popup_call5_audio_first_window_ParamLimits

0xdd86,	// (0x0006f245) popup_call5_audio_first_window

0xee76,	// (0x00070335) call5_swipe_1_pane_g1_ParamLimits

0xee76,	// (0x00070335) call5_swipe_1_pane_g1

0x26e5,	// (0x00063ba4) call5_swipe_1_pane_g2_ParamLimits

0x26e5,	// (0x00063ba4) call5_swipe_1_pane_g2

0x0001,

0xfcdc,	// (0x0007119b) call5_swipe_1_pane_g_ParamLimits

0xfcdc,	// (0x0007119b) call5_swipe_1_pane_g

0x26f1,	// (0x00063bb0) call5_swipe_1_pane_t1_ParamLimits

0x26f1,	// (0x00063bb0) call5_swipe_1_pane_t1

0xee76,	// (0x00070335) call5_swipe_2_pane_g1_ParamLimits

0xee76,	// (0x00070335) call5_swipe_2_pane_g1

0x2706,	// (0x00063bc5) call5_swipe_2_pane_g2_ParamLimits

0x2706,	// (0x00063bc5) call5_swipe_2_pane_g2

0x0001,

0xfce1,	// (0x000711a0) call5_swipe_2_pane_g_ParamLimits

0xfce1,	// (0x000711a0) call5_swipe_2_pane_g

0x2712,	// (0x00063bd1) call5_swipe_2_pane_t1_ParamLimits

0x2712,	// (0x00063bd1) call5_swipe_2_pane_t1

0x2727,	// (0x00063be6) sc_swipe_pane_g1_ParamLimits

0x2727,	// (0x00063be6) sc_swipe_pane_g1

0x2734,	// (0x00063bf3) sc_swipe_pane_g2_ParamLimits

0x2734,	// (0x00063bf3) sc_swipe_pane_g2

0x0001,

0xfce6,	// (0x000711a5) sc_swipe_pane_g_ParamLimits

0xfce6,	// (0x000711a5) sc_swipe_pane_g

0x2740,	// (0x00063bff) sc_swipe_pane_t1_ParamLimits

0x2740,	// (0x00063bff) sc_swipe_pane_t1

0x011a,	// (0x000615d9) main_cmail_launcher_pane

0xdd94,	// (0x0006f253) aid_size_cell_cmail_l_ParamLimits

0xdd94,	// (0x0006f253) aid_size_cell_cmail_l

0xdda4,	// (0x0006f263) grid_cmail_l_pane_ParamLimits

0xdda4,	// (0x0006f263) grid_cmail_l_pane

0xddb4,	// (0x0006f273) cell_cmail_l_pane_ParamLimits

0xddb4,	// (0x0006f273) cell_cmail_l_pane

0xddc8,	// (0x0006f287) cell_cmail_l_pane_g1_ParamLimits

0xddc8,	// (0x0006f287) cell_cmail_l_pane_g1

0xddd4,	// (0x0006f293) cell_cmail_l_pane_t1_ParamLimits

0xddd4,	// (0x0006f293) cell_cmail_l_pane_t1

0x2755,	// (0x00063c14) cell_cmail_l_pane_t2_ParamLimits

0x2755,	// (0x00063c14) cell_cmail_l_pane_t2

0x0001,

0xfceb,	// (0x000711aa) cell_cmail_l_pane_t_ParamLimits

0xfceb,	// (0x000711aa) cell_cmail_l_pane_t

0x9f3f,	// (0x0006b3fe) grid_highlight_pane_cp018_ParamLimits

0x9f3f,	// (0x0006b3fe) grid_highlight_pane_cp018

0x5883,	// (0x00066d42) main2_pane_ParamLimits

0x5883,	// (0x00066d42) main2_pane

0x09b0,	// (0x00061e6f) popup_sp_fs_action_menu_bg_pane_g1

0x09b8,	// (0x00061e77) popup_sp_fs_action_menu_bg_pane_g2

0x09c0,	// (0x00061e7f) popup_sp_fs_action_menu_bg_pane_g3

0x09c8,	// (0x00061e87) popup_sp_fs_action_menu_bg_pane_g4

0x09d0,	// (0x00061e8f) popup_sp_fs_action_menu_bg_pane_g5

0x09d8,	// (0x00061e97) popup_sp_fs_action_menu_bg_pane_g6

0x09e0,	// (0x00061e9f) popup_sp_fs_action_menu_bg_pane_g7

0x09e8,	// (0x00061ea7) popup_sp_fs_action_menu_bg_pane_g8

0x09f0,	// (0x00061eaf) popup_sp_fs_action_menu_bg_pane_g9

0x09f8,	// (0x00061eb7) popup_sp_fs_action_menu_bg_pane_g10

0x09f8,	// (0x00061eb7) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1bb,	// (0x0007067a) popup_sp_fs_action_menu_bg_pane_g

0x46ee,	// (0x00065bad) list_medium_line_x2_t3_g3_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t3_g3_g1

0x46fa,	// (0x00065bb9) list_medium_line_x2_t3_g3_g2_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x2_t3_g3_g2

0x4706,	// (0x00065bc5) list_medium_line_x2_t3_g3_g3_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_x2_t3_g3_g3

0x0002,

0xf26b,	// (0x0007072a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf26b,	// (0x0007072a) list_medium_line_x2_t3_g3_g

0x4712,	// (0x00065bd1) list_medium_line_x2_t3_g3_t1_ParamLimits

0x4712,	// (0x00065bd1) list_medium_line_x2_t3_g3_t1

0x4727,	// (0x00065be6) list_medium_line_x2_t3_g3_t2_ParamLimits

0x4727,	// (0x00065be6) list_medium_line_x2_t3_g3_t2

0x4739,	// (0x00065bf8) list_medium_line_x2_t3_g3_t3_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_x2_t3_g3_t3

0x0002,

0xf272,	// (0x00070731) list_medium_line_x2_t3_g3_t_ParamLimits

0xf272,	// (0x00070731) list_medium_line_x2_t3_g3_t

0x46ee,	// (0x00065bad) list_medium_line_x2_t3_g2_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t3_g2_g1

0x4706,	// (0x00065bc5) list_medium_line_x2_t3_g2_g2_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_x2_t3_g2_g2

0x0001,

0xf279,	// (0x00070738) list_medium_line_x2_t3_g2_g_ParamLimits

0xf279,	// (0x00070738) list_medium_line_x2_t3_g2_g

0x474e,	// (0x00065c0d) list_medium_line_x2_t3_g2_t1_ParamLimits

0x474e,	// (0x00065c0d) list_medium_line_x2_t3_g2_t1

0x4764,	// (0x00065c23) list_medium_line_x2_t3_g2_t2_ParamLimits

0x4764,	// (0x00065c23) list_medium_line_x2_t3_g2_t2

0x4776,	// (0x00065c35) list_medium_line_x2_t3_g2_t3_ParamLimits

0x4776,	// (0x00065c35) list_medium_line_x2_t3_g2_t3

0x0002,

0xf27e,	// (0x0007073d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf27e,	// (0x0007073d) list_medium_line_x2_t3_g2_t

0x46ee,	// (0x00065bad) list_medium_line_x2_t4_g4_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t4_g4_g1

0x4793,	// (0x00065c52) list_medium_line_x2_t4_g4_g2_ParamLimits

0x4793,	// (0x00065c52) list_medium_line_x2_t4_g4_g2

0x46fa,	// (0x00065bb9) list_medium_line_x2_t4_g4_g3_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x2_t4_g4_g3

0x479f,	// (0x00065c5e) list_medium_line_x2_t4_g4_g4_ParamLimits

0x479f,	// (0x00065c5e) list_medium_line_x2_t4_g4_g4

0x0003,

0xf285,	// (0x00070744) list_medium_line_x2_t4_g4_g_ParamLimits

0xf285,	// (0x00070744) list_medium_line_x2_t4_g4_g

0x47ab,	// (0x00065c6a) list_medium_line_x2_t4_g4_t1_ParamLimits

0x47ab,	// (0x00065c6a) list_medium_line_x2_t4_g4_t1

0x47c5,	// (0x00065c84) list_medium_line_x2_t4_g4_t2_ParamLimits

0x47c5,	// (0x00065c84) list_medium_line_x2_t4_g4_t2

0x47db,	// (0x00065c9a) list_medium_line_x2_t4_g4_t3_ParamLimits

0x47db,	// (0x00065c9a) list_medium_line_x2_t4_g4_t3

0x47f0,	// (0x00065caf) list_medium_line_x2_t4_g4_t4_ParamLimits

0x47f0,	// (0x00065caf) list_medium_line_x2_t4_g4_t4

0x0003,

0xf28e,	// (0x0007074d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf28e,	// (0x0007074d) list_medium_line_x2_t4_g4_t

0x46ee,	// (0x00065bad) list_medium_line_x2_t2_g4_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t2_g4_g1

0x4793,	// (0x00065c52) list_medium_line_x2_t2_g4_g2_ParamLimits

0x4793,	// (0x00065c52) list_medium_line_x2_t2_g4_g2

0x46fa,	// (0x00065bb9) list_medium_line_x2_t2_g4_g3_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x2_t2_g4_g3

0x4706,	// (0x00065bc5) list_medium_line_x2_t2_g4_g4_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2f5,	// (0x000707b4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2f5,	// (0x000707b4) list_medium_line_x2_t2_g4_g

0x4802,	// (0x00065cc1) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4802,	// (0x00065cc1) list_medium_line_x2_t2_g4_t1

0x4739,	// (0x00065bf8) list_medium_line_x2_t2_g4_t2_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2fe,	// (0x000707bd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2fe,	// (0x000707bd) list_medium_line_x2_t2_g4_t

0x46ee,	// (0x00065bad) list_medium_line_x2_t2_g3_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t2_g3_g1

0x46fa,	// (0x00065bb9) list_medium_line_x2_t2_g3_g2_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x2_t2_g3_g2

0x4706,	// (0x00065bc5) list_medium_line_x2_t2_g3_g3_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_x2_t2_g3_g3

0x0002,

0xf26b,	// (0x0007072a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf26b,	// (0x0007072a) list_medium_line_x2_t2_g3_g

0x4817,	// (0x00065cd6) list_medium_line_x2_t2_g3_t1_ParamLimits

0x4817,	// (0x00065cd6) list_medium_line_x2_t2_g3_t1

0x4739,	// (0x00065bf8) list_medium_line_x2_t2_g3_t2_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_x2_t2_g3_t2

0x0001,

0xf303,	// (0x000707c2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf303,	// (0x000707c2) list_medium_line_x2_t2_g3_t

0x76fc,	// (0x00068bbb) main_sp_fs_list_pane_ParamLimits

0x76fc,	// (0x00068bbb) main_sp_fs_list_pane

0x7708,	// (0x00068bc7) sp_fs_scroll_pane_ParamLimits

0x7708,	// (0x00068bc7) sp_fs_scroll_pane

0x482c,	// (0x00065ceb) list_medium_line_x2_t3_t1

0x483c,	// (0x00065cfb) list_medium_line_x2_t3_t2

0x484a,	// (0x00065d09) list_medium_line_x2_t3_t3

0x0002,

0xf34e,	// (0x0007080d) list_medium_line_x2_t3_t

0x4858,	// (0x00065d17) list_medium_line_x3_t4_t1

0x4868,	// (0x00065d27) list_medium_line_x3_t4_t2

0x4876,	// (0x00065d35) list_medium_line_x3_t4_t3

0x484a,	// (0x00065d09) list_medium_line_x3_t4_t4

0x0003,

0xf355,	// (0x00070814) list_medium_line_x3_t4_t

0x4884,	// (0x00065d43) list_medium_line_x4_t5_t1

0x4894,	// (0x00065d53) list_medium_line_x4_t5_t2

0x4876,	// (0x00065d35) list_medium_line_x4_t5_t3

0x48a2,	// (0x00065d61) list_medium_line_x4_t5_t4

0x484a,	// (0x00065d09) list_medium_line_x4_t5_t5

0x0004,

0xf35e,	// (0x0007081d) list_medium_line_x4_t5_t

0x46ee,	// (0x00065bad) list_medium_line_t4_g4_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_t4_g4_g1

0x479f,	// (0x00065c5e) list_medium_line_t4_g4_g2_ParamLimits

0x479f,	// (0x00065c5e) list_medium_line_t4_g4_g2

0x48b0,	// (0x00065d6f) list_medium_line_t4_g4_g3_ParamLimits

0x48b0,	// (0x00065d6f) list_medium_line_t4_g4_g3

0x4706,	// (0x00065bc5) list_medium_line_t4_g4_g4_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_t4_g4_g4

0x0003,

0xf369,	// (0x00070828) list_medium_line_t4_g4_g_ParamLimits

0xf369,	// (0x00070828) list_medium_line_t4_g4_g

0x48bc,	// (0x00065d7b) list_medium_line_t4_g4_t1_ParamLimits

0x48bc,	// (0x00065d7b) list_medium_line_t4_g4_t1

0x48d1,	// (0x00065d90) list_medium_line_t4_g4_t2_ParamLimits

0x48d1,	// (0x00065d90) list_medium_line_t4_g4_t2

0x48e6,	// (0x00065da5) list_medium_line_t4_g4_t3_ParamLimits

0x48e6,	// (0x00065da5) list_medium_line_t4_g4_t3

0x4739,	// (0x00065bf8) list_medium_line_t4_g4_t4_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_t4_g4_t4

0x0003,

0xf372,	// (0x00070831) list_medium_line_t4_g4_t_ParamLimits

0xf372,	// (0x00070831) list_medium_line_t4_g4_t

0x7aa5,	// (0x00068f64) chi_dic_find_pane_g1

0x9f5b,	// (0x0006b41a) main_tport_pane

0x4b34,	// (0x00065ff3) list_medium_line_plain_t1

0x4b42,	// (0x00066001) list_medium_line_t2_g2_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_t2_g2_g1

0x4b4e,	// (0x0006600d) list_medium_line_t2_g2_g2_ParamLimits

0x4b4e,	// (0x0006600d) list_medium_line_t2_g2_g2

0x0001,

0xfa2e,	// (0x00070eed) list_medium_line_t2_g2_g_ParamLimits

0xfa2e,	// (0x00070eed) list_medium_line_t2_g2_g

0x4b5a,	// (0x00066019) list_medium_line_t2_g2_t1_ParamLimits

0x4b5a,	// (0x00066019) list_medium_line_t2_g2_t1

0x4b74,	// (0x00066033) list_medium_line_t2_g2_t2_ParamLimits

0x4b74,	// (0x00066033) list_medium_line_t2_g2_t2

0x0001,

0xfa33,	// (0x00070ef2) list_medium_line_t2_g2_t_ParamLimits

0xfa33,	// (0x00070ef2) list_medium_line_t2_g2_t

0x4d07,	// (0x000661c6) aid_sp_fs_list_icon_a_sm

0xd0ce,	// (0x0006e58d) aid_sp_fs_list_icon_d

0x3192,	// (0x00064651) aid_sp_fs_text_primary

0x4d0f,	// (0x000661ce) aid_sp_fs_text_secondary

0x4d18,	// (0x000661d7) list_medium_line

0x4d18,	// (0x000661d7) list_medium_line_g2

0x4d18,	// (0x000661d7) list_medium_line_g3

0x4d18,	// (0x000661d7) list_medium_line_plain

0x4d18,	// (0x000661d7) list_medium_line_plain_t2

0x4d18,	// (0x000661d7) list_medium_line_plain_t3

0x4d18,	// (0x000661d7) list_medium_line_right_icon

0x4d18,	// (0x000661d7) list_medium_line_right_iconx2

0x4d18,	// (0x000661d7) list_medium_line_t2

0x4d18,	// (0x000661d7) list_medium_line_t2_g2

0x4d18,	// (0x000661d7) list_medium_line_t2_g3

0x4d18,	// (0x000661d7) list_medium_line_t2_right_icon

0x4d18,	// (0x000661d7) list_medium_line_t2_right_iconx2

0x4d18,	// (0x000661d7) list_medium_line_t3

0x4d18,	// (0x000661d7) list_medium_line_t3_g2

0x4d18,	// (0x000661d7) list_medium_line_t3_g3

0x4d18,	// (0x000661d7) list_medium_line_t3_right_iconx2

0x4d21,	// (0x000661e0) list_medium_line_t4_g4

0x4d2a,	// (0x000661e9) list_medium_line_x2

0x4d2a,	// (0x000661e9) list_medium_line_x2_t2_g2

0x4d2a,	// (0x000661e9) list_medium_line_x2_t2_g3

0x4d2a,	// (0x000661e9) list_medium_line_x2_t2_g4

0x4d2a,	// (0x000661e9) list_medium_line_x2_t3

0x4d2a,	// (0x000661e9) list_medium_line_x2_t3_g2

0x4d2a,	// (0x000661e9) list_medium_line_x2_t3_g3

0x4d2a,	// (0x000661e9) list_medium_line_x2_t3_g4

0x4d2a,	// (0x000661e9) list_medium_line_x2_t4_g2

0x4d2a,	// (0x000661e9) list_medium_line_x2_t4_g4

0x4d33,	// (0x000661f2) list_medium_line_x3

0x4d33,	// (0x000661f2) list_medium_line_x3_t4

0x4d33,	// (0x000661f2) list_medium_line_x3_t4_g4

0x4d21,	// (0x000661e0) list_medium_line_x4_t4

0x4d21,	// (0x000661e0) list_medium_line_x4_t4_g7

0x4d21,	// (0x000661e0) list_medium_line_x4_t5

0x4d3c,	// (0x000661fb) list_single_fs_dyc_pane_ParamLimits

0x4d3c,	// (0x000661fb) list_single_fs_dyc_pane

0x46ee,	// (0x00065bad) list_medium_line_x4_t4_g7_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x4_t4_g7_g1

0x4d50,	// (0x0006620f) list_medium_line_x4_t4_g7_g2_ParamLimits

0x4d50,	// (0x0006620f) list_medium_line_x4_t4_g7_g2

0x4d5c,	// (0x0006621b) list_medium_line_x4_t4_g7_g3_ParamLimits

0x4d5c,	// (0x0006621b) list_medium_line_x4_t4_g7_g3

0x4d6b,	// (0x0006622a) list_medium_line_x4_t4_g7_g4_ParamLimits

0x4d6b,	// (0x0006622a) list_medium_line_x4_t4_g7_g4

0x4d77,	// (0x00066236) list_medium_line_x4_t4_g7_g5_ParamLimits

0x4d77,	// (0x00066236) list_medium_line_x4_t4_g7_g5

0x4d86,	// (0x00066245) list_medium_line_x4_t4_g7_g6_ParamLimits

0x4d86,	// (0x00066245) list_medium_line_x4_t4_g7_g6

0x4d95,	// (0x00066254) list_medium_line_x4_t4_g7_g7_ParamLimits

0x4d95,	// (0x00066254) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbf8,	// (0x000710b7) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbf8,	// (0x000710b7) list_medium_line_x4_t4_g7_g

0x4da1,	// (0x00066260) list_medium_line_x4_t4_g7_t1_ParamLimits

0x4da1,	// (0x00066260) list_medium_line_x4_t4_g7_t1

0x4db6,	// (0x00066275) list_medium_line_x4_t4_g7_t2_ParamLimits

0x4db6,	// (0x00066275) list_medium_line_x4_t4_g7_t2

0x4dcb,	// (0x0006628a) list_medium_line_x4_t4_g7_t3_ParamLimits

0x4dcb,	// (0x0006628a) list_medium_line_x4_t4_g7_t3

0x4de0,	// (0x0006629f) list_medium_line_x4_t4_g7_t4_ParamLimits

0x4de0,	// (0x0006629f) list_medium_line_x4_t4_g7_t4

0x4df2,	// (0x000662b1) list_medium_line_x4_t4_g7_t5_ParamLimits

0x4df2,	// (0x000662b1) list_medium_line_x4_t4_g7_t5

0x0004,

0xfc07,	// (0x000710c6) list_medium_line_x4_t4_g7_t_ParamLimits

0xfc07,	// (0x000710c6) list_medium_line_x4_t4_g7_t

0x4e04,	// (0x000662c3) list_single_dyc_row_pane_ParamLimits

0x4e04,	// (0x000662c3) list_single_dyc_row_pane

0xdd44,	// (0x0006f203) call5_gesture_pane_ParamLimits

0xdd44,	// (0x0006f203) call5_gesture_pane

0xdd78,	// (0x0006f237) call5_windows_pane_ParamLimits

0xdd78,	// (0x0006f237) call5_windows_pane

0xddea,	// (0x0006f2a9) call5_swipe_1_pane_cp_ParamLimits

0xddea,	// (0x0006f2a9) call5_swipe_1_pane_cp

0xddf6,	// (0x0006f2b5) call5_swipe_2_pane_cp_ParamLimits

0xddf6,	// (0x0006f2b5) call5_swipe_2_pane_cp

0x7ecf,	// (0x0006938e) call5_image_pane_cp

0xde02,	// (0x0006f2c1) popup_call5_audio_first_window_cp_ParamLimits

0xde02,	// (0x0006f2c1) popup_call5_audio_first_window_cp

0x2727,	// (0x00063be6) call5_swipe_1_pane_g1_cp_ParamLimits

0x2727,	// (0x00063be6) call5_swipe_1_pane_g1_cp

0x2767,	// (0x00063c26) call5_swipe_1_pane_g2_cp

0x2740,	// (0x00063bff) call5_swipe_1_pane_t1_cp_ParamLimits

0x2740,	// (0x00063bff) call5_swipe_1_pane_t1_cp

0x2727,	// (0x00063be6) call5_swipe_2_pane_g1_cp_ParamLimits

0x2727,	// (0x00063be6) call5_swipe_2_pane_g1_cp

0x276f,	// (0x00063c2e) call5_swipe_2_pane_g2_cp

0x2777,	// (0x00063c36) call5_swipe_2_pane_t1_cp_ParamLimits

0x2777,	// (0x00063c36) call5_swipe_2_pane_t1_cp

0x9f3f,	// (0x0006b3fe) main_sp_fs_email_pane

0x278c,	// (0x00063c4b) main_sp_fs_listscroll_pane_te

0x4eb0,	// (0x0006636f) popup_sp_fs_action_menu_pane_ParamLimits

0x4eb0,	// (0x0006636f) popup_sp_fs_action_menu_pane

0xec13,	// (0x000700d2) bg_sp_fs_ctrlbar_pane_g1

0x27d9,	// (0x00063c98) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x27e2,	// (0x00063ca1) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x27eb,	// (0x00063caa) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xec13,	// (0x000700d2) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcf0,	// (0x000711af) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xaa5a,	// (0x0006bf19) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xaa5a,	// (0x0006bf19) bg_sp_fs_ctrlbar_ddmenu_pane

0x27f4,	// (0x00063cb3) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x27f4,	// (0x00063cb3) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x2800,	// (0x00063cbf) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x2800,	// (0x00063cbf) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcf9,	// (0x000711b8) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcf9,	// (0x000711b8) main_sp_fs_ctrlbar_ddmenu_pane_g

0x280c,	// (0x00063ccb) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x280c,	// (0x00063ccb) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x4ef4,	// (0x000663b3) list_medium_line_t2_right_icon_g1

0x4efc,	// (0x000663bb) list_medium_line_t2_right_icon_t1

0x4f0c,	// (0x000663cb) list_medium_line_t2_right_icon_t2

0x0001,

0xfcfe,	// (0x000711bd) list_medium_line_t2_right_icon_t

0x9f31,	// (0x0006b3f0) bg_sp_fs_ctrlbar_pane_ParamLimits

0x9f31,	// (0x0006b3f0) bg_sp_fs_ctrlbar_pane

0xde67,	// (0x0006f326) main_sp_fs_ctrlbar_button_pane_cp01

0xde6f,	// (0x0006f32e) main_sp_fs_ctrlbar_ddmenu_pane

0x2866,	// (0x00063d25) main_sp_fs_ctrlbar_pane_g1

0x2872,	// (0x00063d31) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfd03,	// (0x000711c2) main_sp_fs_ctrlbar_pane_g

0x287e,	// (0x00063d3d) main_sp_fs_ctrlbar_pane_t1

0x4f1a,	// (0x000663d9) main_sp_fs_ctrlbar_pane

0x4f36,	// (0x000663f5) main_sp_fs_listscroll_pane_te_cp01

0x4f47,	// (0x00066406) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x4f47,	// (0x00066406) popup_sp_fs_action_menu_pane_cp01

0x9f3f,	// (0x0006b3fe) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_sp_fs_highlight_list_pane_cp01

0x4f61,	// (0x00066420) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x4f61,	// (0x00066420) sp_fs_action_menu_list_gene_pane_g1

0x28a2,	// (0x00063d61) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x28a2,	// (0x00063d61) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfd08,	// (0x000711c7) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfd08,	// (0x000711c7) sp_fs_action_menu_list_gene_pane_g

0x4f70,	// (0x0006642f) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x4f70,	// (0x0006642f) sp_fs_action_menu_list_gene_pane_t1

0x4f88,	// (0x00066447) sp_fs_action_menu_list_gene_pane_ParamLimits

0x4f88,	// (0x00066447) sp_fs_action_menu_list_gene_pane

0x28e6,	// (0x00063da5) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x28e6,	// (0x00063da5) popup_sp_fs_action_menu_bg_pane

0x4fa9,	// (0x00066468) sp_fs_action_menu_list_pane_ParamLimits

0x4fa9,	// (0x00066468) sp_fs_action_menu_list_pane

0x2914,	// (0x00063dd3) sp_fs_scroll_pane_cp01_ParamLimits

0x2914,	// (0x00063dd3) sp_fs_scroll_pane_cp01

0x4fcb,	// (0x0006648a) list_medium_line_plain_t2_t1

0x4fdb,	// (0x0006649a) list_medium_line_plain_t2_t2

0x0001,

0xfd0d,	// (0x000711cc) list_medium_line_plain_t2_t

0x4fe9,	// (0x000664a8) list_medium_line_plain_t3_t1

0x4ff9,	// (0x000664b8) list_medium_line_plain_t3_t2

0x5007,	// (0x000664c6) list_medium_line_plain_t3_t3

0x0002,

0xfd12,	// (0x000711d1) list_medium_line_plain_t3_t

0x46ee,	// (0x00065bad) list_medium_line_x2_t2_g2_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t2_g2_g1

0x4706,	// (0x00065bc5) list_medium_line_x2_t2_g2_g2_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_x2_t2_g2_g2

0x0001,

0xf279,	// (0x00070738) list_medium_line_x2_t2_g2_g_ParamLimits

0xf279,	// (0x00070738) list_medium_line_x2_t2_g2_g

0x48bc,	// (0x00065d7b) list_medium_line_x2_t2_g2_t1_ParamLimits

0x48bc,	// (0x00065d7b) list_medium_line_x2_t2_g2_t1

0x4739,	// (0x00065bf8) list_medium_line_x2_t2_g2_t2_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd19,	// (0x000711d8) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd19,	// (0x000711d8) list_medium_line_x2_t2_g2_t

0x46ee,	// (0x00065bad) list_medium_line_x2_t4_g2_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t4_g2_g1

0x5015,	// (0x000664d4) list_medium_line_x2_t4_g2_g2_ParamLimits

0x5015,	// (0x000664d4) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd1e,	// (0x000711dd) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd1e,	// (0x000711dd) list_medium_line_x2_t4_g2_g

0x5027,	// (0x000664e6) list_medium_line_x2_t4_g2_t1_ParamLimits

0x5027,	// (0x000664e6) list_medium_line_x2_t4_g2_t1

0x503e,	// (0x000664fd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x503e,	// (0x000664fd) list_medium_line_x2_t4_g2_t2

0x5053,	// (0x00066512) list_medium_line_x2_t4_g2_t3_ParamLimits

0x5053,	// (0x00066512) list_medium_line_x2_t4_g2_t3

0x4739,	// (0x00065bf8) list_medium_line_x2_t4_g2_t4_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd23,	// (0x000711e2) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd23,	// (0x000711e2) list_medium_line_x2_t4_g2_t

0x5065,	// (0x00066524) list_medium_line_t3_right_iconx2_g1

0x4ef4,	// (0x000663b3) list_medium_line_t3_right_iconx2_g2

0x506d,	// (0x0006652c) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd2c,	// (0x000711eb) list_medium_line_t3_right_iconx2_g

0x5075,	// (0x00066534) list_medium_line_t3_right_iconx2_t1

0x5085,	// (0x00066544) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd33,	// (0x000711f2) list_medium_line_t3_right_iconx2_t

0x46ee,	// (0x00065bad) list_medium_line_x3_t4_g4_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x3_t4_g4_g1

0x46fa,	// (0x00065bb9) list_medium_line_x3_t4_g4_g2_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x3_t4_g4_g2

0x479f,	// (0x00065c5e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x479f,	// (0x00065c5e) list_medium_line_x3_t4_g4_g3

0x5093,	// (0x00066552) list_medium_line_x3_t4_g4_g4_ParamLimits

0x5093,	// (0x00066552) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd38,	// (0x000711f7) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd38,	// (0x000711f7) list_medium_line_x3_t4_g4_g

0x509f,	// (0x0006655e) list_medium_line_x3_t4_g4_t1_ParamLimits

0x509f,	// (0x0006655e) list_medium_line_x3_t4_g4_t1

0x50b6,	// (0x00066575) list_medium_line_x3_t4_g4_t2_ParamLimits

0x50b6,	// (0x00066575) list_medium_line_x3_t4_g4_t2

0x48d1,	// (0x00065d90) list_medium_line_x3_t4_g4_t3_ParamLimits

0x48d1,	// (0x00065d90) list_medium_line_x3_t4_g4_t3

0x50cb,	// (0x0006658a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x50cb,	// (0x0006658a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd41,	// (0x00071200) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd41,	// (0x00071200) list_medium_line_x3_t4_g4_t

0x50e8,	// (0x000665a7) list_single_dyc_row_text_pane_t1_ParamLimits

0x50e8,	// (0x000665a7) list_single_dyc_row_text_pane_t1

0x511f,	// (0x000665de) list_single_dyc_row_text_pane_t2_ParamLimits

0x511f,	// (0x000665de) list_single_dyc_row_text_pane_t2

0x5179,	// (0x00066638) list_single_dyc_row_text_pane_t3_ParamLimits

0x5179,	// (0x00066638) list_single_dyc_row_text_pane_t3

0x0002,

0xfd4a,	// (0x00071209) list_single_dyc_row_text_pane_t_ParamLimits

0xfd4a,	// (0x00071209) list_single_dyc_row_text_pane_t

0x518b,	// (0x0006664a) list_single_dyc_row_pane_g1_ParamLimits

0x518b,	// (0x0006664a) list_single_dyc_row_pane_g1

0x5197,	// (0x00066656) list_single_dyc_row_pane_g2_ParamLimits

0x5197,	// (0x00066656) list_single_dyc_row_pane_g2

0x51a3,	// (0x00066662) list_single_dyc_row_pane_g3_ParamLimits

0x51a3,	// (0x00066662) list_single_dyc_row_pane_g3

0x51af,	// (0x0006666e) list_single_dyc_row_pane_g4_ParamLimits

0x51af,	// (0x0006666e) list_single_dyc_row_pane_g4

0x0003,

0xfd51,	// (0x00071210) list_single_dyc_row_pane_g_ParamLimits

0xfd51,	// (0x00071210) list_single_dyc_row_pane_g

0x51bb,	// (0x0006667a) list_single_dyc_row_text_pane_ParamLimits

0x51bb,	// (0x0006667a) list_single_dyc_row_text_pane

0x011a,	// (0x000615d9) bg_sp_fs_scroll_pane

0x29de,	// (0x00063e9d) thumb_sp_fs_scroll_pane

0x4b42,	// (0x00066001) list_medium_line_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_g1

0x51da,	// (0x00066699) list_medium_line_t1_ParamLimits

0x51da,	// (0x00066699) list_medium_line_t1

0x46ee,	// (0x00065bad) list_medium_line_x2_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_g1

0x46fa,	// (0x00065bb9) list_medium_line_x2_g2_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x2_g2

0x0001,

0xfd5a,	// (0x00071219) list_medium_line_x2_g_ParamLimits

0xfd5a,	// (0x00071219) list_medium_line_x2_g

0x51ef,	// (0x000666ae) list_medium_line_x2_t1_ParamLimits

0x51ef,	// (0x000666ae) list_medium_line_x2_t1

0x46ee,	// (0x00065bad) list_medium_line_x3_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x3_g1

0x46fa,	// (0x00065bb9) list_medium_line_x3_g2_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x3_g2

0x0001,

0xfd5a,	// (0x00071219) list_medium_line_x3_g_ParamLimits

0xfd5a,	// (0x00071219) list_medium_line_x3_g

0x51ef,	// (0x000666ae) list_medium_line_x3_t1_ParamLimits

0x51ef,	// (0x000666ae) list_medium_line_x3_t1

0x2a12,	// (0x00063ed1) thumb_sp_fs_scroll_pane_g1

0x2a1b,	// (0x00063eda) thumb_sp_fs_scroll_pane_g2

0x2a24,	// (0x00063ee3) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0007121e) thumb_sp_fs_scroll_pane_g

0x2a12,	// (0x00063ed1) bg_sp_fs_scroll_pane_g1

0x2a1b,	// (0x00063eda) bg_sp_fs_scroll_pane_g2

0x2a24,	// (0x00063ee3) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd5f,	// (0x0007121e) bg_sp_fs_scroll_pane_g

0x46ee,	// (0x00065bad) list_medium_line_x2_t3_g4_g1_ParamLimits

0x46ee,	// (0x00065bad) list_medium_line_x2_t3_g4_g1

0x4793,	// (0x00065c52) list_medium_line_x2_t3_g4_g2_ParamLimits

0x4793,	// (0x00065c52) list_medium_line_x2_t3_g4_g2

0x46fa,	// (0x00065bb9) list_medium_line_x2_t3_g4_g3_ParamLimits

0x46fa,	// (0x00065bb9) list_medium_line_x2_t3_g4_g3

0x4706,	// (0x00065bc5) list_medium_line_x2_t3_g4_g4_ParamLimits

0x4706,	// (0x00065bc5) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2f5,	// (0x000707b4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2f5,	// (0x000707b4) list_medium_line_x2_t3_g4_g

0x5205,	// (0x000666c4) list_medium_line_x2_t3_g4_t1_ParamLimits

0x5205,	// (0x000666c4) list_medium_line_x2_t3_g4_t1

0x521b,	// (0x000666da) list_medium_line_x2_t3_g4_t2_ParamLimits

0x521b,	// (0x000666da) list_medium_line_x2_t3_g4_t2

0x4739,	// (0x00065bf8) list_medium_line_x2_t3_g4_t3_ParamLimits

0x4739,	// (0x00065bf8) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd66,	// (0x00071225) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd66,	// (0x00071225) list_medium_line_x2_t3_g4_t

0x4b42,	// (0x00066001) list_medium_line_g2_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_g2_g1

0x4b4e,	// (0x0006600d) list_medium_line_g2_g2_ParamLimits

0x4b4e,	// (0x0006600d) list_medium_line_g2_g2

0x0001,

0xfa2e,	// (0x00070eed) list_medium_line_g2_g_ParamLimits

0xfa2e,	// (0x00070eed) list_medium_line_g2_g

0x5235,	// (0x000666f4) list_medium_line_g2_t1_ParamLimits

0x5235,	// (0x000666f4) list_medium_line_g2_t1

0x4b42,	// (0x00066001) list_medium_line_t3_g2_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_t3_g2_g1

0x4b4e,	// (0x0006600d) list_medium_line_t3_g2_g2_ParamLimits

0x4b4e,	// (0x0006600d) list_medium_line_t3_g2_g2

0x0001,

0xfa2e,	// (0x00070eed) list_medium_line_t3_g2_g_ParamLimits

0xfa2e,	// (0x00070eed) list_medium_line_t3_g2_g

0x524a,	// (0x00066709) list_medium_line_t3_g2_t1_ParamLimits

0x524a,	// (0x00066709) list_medium_line_t3_g2_t1

0x5261,	// (0x00066720) list_medium_line_t3_g2_t2_ParamLimits

0x5261,	// (0x00066720) list_medium_line_t3_g2_t2

0x5276,	// (0x00066735) list_medium_line_t3_g2_t3_ParamLimits

0x5276,	// (0x00066735) list_medium_line_t3_g2_t3

0x0002,

0xfd6d,	// (0x0007122c) list_medium_line_t3_g2_t_ParamLimits

0xfd6d,	// (0x0007122c) list_medium_line_t3_g2_t

0x4ef4,	// (0x000663b3) list_medium_line_right_icon_g1

0x528b,	// (0x0006674a) list_medium_line_right_icon_t1

0x4b42,	// (0x00066001) list_medium_line_t2_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_t2_g1

0x5299,	// (0x00066758) list_medium_line_t2_t1_ParamLimits

0x5299,	// (0x00066758) list_medium_line_t2_t1

0x52b3,	// (0x00066772) list_medium_line_t2_t2_ParamLimits

0x52b3,	// (0x00066772) list_medium_line_t2_t2

0x0001,

0xfd74,	// (0x00071233) list_medium_line_t2_t_ParamLimits

0xfd74,	// (0x00071233) list_medium_line_t2_t

0x4b42,	// (0x00066001) list_medium_line_t3_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_t3_g1

0x52c8,	// (0x00066787) list_medium_line_t3_t1_ParamLimits

0x52c8,	// (0x00066787) list_medium_line_t3_t1

0x52df,	// (0x0006679e) list_medium_line_t3_t2_ParamLimits

0x52df,	// (0x0006679e) list_medium_line_t3_t2

0x52f4,	// (0x000667b3) list_medium_line_t3_t3_ParamLimits

0x52f4,	// (0x000667b3) list_medium_line_t3_t3

0x0002,

0xfd79,	// (0x00071238) list_medium_line_t3_t_ParamLimits

0xfd79,	// (0x00071238) list_medium_line_t3_t

0x4b42,	// (0x00066001) list_medium_line_g3_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_g3_g1

0x5306,	// (0x000667c5) list_medium_line_g3_g2_ParamLimits

0x5306,	// (0x000667c5) list_medium_line_g3_g2

0x4b4e,	// (0x0006600d) list_medium_line_g3_g3_ParamLimits

0x4b4e,	// (0x0006600d) list_medium_line_g3_g3

0x0002,

0xfd80,	// (0x0007123f) list_medium_line_g3_g_ParamLimits

0xfd80,	// (0x0007123f) list_medium_line_g3_g

0x5312,	// (0x000667d1) list_medium_line_g3_t1_ParamLimits

0x5312,	// (0x000667d1) list_medium_line_g3_t1

0x4b42,	// (0x00066001) list_medium_line_t2_g3_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_t2_g3_g1

0x5306,	// (0x000667c5) list_medium_line_t2_g3_g2_ParamLimits

0x5306,	// (0x000667c5) list_medium_line_t2_g3_g2

0x4b4e,	// (0x0006600d) list_medium_line_t2_g3_g3_ParamLimits

0x4b4e,	// (0x0006600d) list_medium_line_t2_g3_g3

0x0002,

0xfd80,	// (0x0007123f) list_medium_line_t2_g3_g_ParamLimits

0xfd80,	// (0x0007123f) list_medium_line_t2_g3_g

0x5327,	// (0x000667e6) list_medium_line_t2_g3_t1_ParamLimits

0x5327,	// (0x000667e6) list_medium_line_t2_g3_t1

0x5341,	// (0x00066800) list_medium_line_t2_g3_t2_ParamLimits

0x5341,	// (0x00066800) list_medium_line_t2_g3_t2

0x0001,

0xfd87,	// (0x00071246) list_medium_line_t2_g3_t_ParamLimits

0xfd87,	// (0x00071246) list_medium_line_t2_g3_t

0x4b42,	// (0x00066001) list_medium_line_t3_g3_g1_ParamLimits

0x4b42,	// (0x00066001) list_medium_line_t3_g3_g1

0x5306,	// (0x000667c5) list_medium_line_t3_g3_g2_ParamLimits

0x5306,	// (0x000667c5) list_medium_line_t3_g3_g2

0x4b4e,	// (0x0006600d) list_medium_line_t3_g3_g3_ParamLimits

0x4b4e,	// (0x0006600d) list_medium_line_t3_g3_g3

0x0002,

0xfd80,	// (0x0007123f) list_medium_line_t3_g3_g_ParamLimits

0xfd80,	// (0x0007123f) list_medium_line_t3_g3_g

0x5356,	// (0x00066815) list_medium_line_t3_g3_t1_ParamLimits

0x5356,	// (0x00066815) list_medium_line_t3_g3_t1

0x536a,	// (0x00066829) list_medium_line_t3_g3_t2_ParamLimits

0x536a,	// (0x00066829) list_medium_line_t3_g3_t2

0x537c,	// (0x0006683b) list_medium_line_t3_g3_t3_ParamLimits

0x537c,	// (0x0006683b) list_medium_line_t3_g3_t3

0x0002,

0xfd8c,	// (0x0007124b) list_medium_line_t3_g3_t_ParamLimits

0xfd8c,	// (0x0007124b) list_medium_line_t3_g3_t

0x5065,	// (0x00066524) list_medium_line_right_iconx2_g1

0x4ef4,	// (0x000663b3) list_medium_line_right_iconx2_g2

0x0001,

0xfd93,	// (0x00071252) list_medium_line_right_iconx2_g

0x538e,	// (0x0006684d) list_medium_line_right_iconx2_t1

0x5065,	// (0x00066524) list_medium_line_t2_right_iconx2_g1

0x4ef4,	// (0x000663b3) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd93,	// (0x00071252) list_medium_line_t2_right_iconx2_g

0x539c,	// (0x0006685b) list_medium_line_t2_right_iconx2_t1

0x53ac,	// (0x0006686b) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd98,	// (0x00071257) list_medium_line_t2_right_iconx2_t

0x53ba,	// (0x00066879) list_medium_line_x4_t4_t1

0x53c8,	// (0x00066887) list_medium_line_x4_t4_t2

0x53d8,	// (0x00066897) list_medium_line_x4_t4_t3

0x53e8,	// (0x000668a7) list_medium_line_x4_t4_t4

0x0003,

0xfd9d,	// (0x0007125c) list_medium_line_x4_t4_t

0xdea2,	// (0x0006f361) tport_appsw_pane_ParamLimits

0xdea2,	// (0x0006f361) tport_appsw_pane

0xdeae,	// (0x0006f36d) tport_contact_pane_ParamLimits

0xdeae,	// (0x0006f36d) tport_contact_pane

0xdebe,	// (0x0006f37d) tport_listscroll_pane_ParamLimits

0xdebe,	// (0x0006f37d) tport_listscroll_pane

0xdece,	// (0x0006f38d) cell_tport_appsw_pane_ParamLimits

0xdece,	// (0x0006f38d) cell_tport_appsw_pane

0xeedb,	// (0x0007039a) tport_appsw_pane_g1_ParamLimits

0xeedb,	// (0x0007039a) tport_appsw_pane_g1

0x2a8d,	// (0x00063f4c) tport_contact_pane_g1

0x2255,	// (0x00063714) tport_contact_pane_t1

0x2a96,	// (0x00063f55) tport_contact_pane_t2

0x0001,

0xfda6,	// (0x00071265) tport_contact_pane_t

0x2aa4,	// (0x00063f63) list_tport_pane

0x2aad,	// (0x00063f6c) scroll_pane_cp_030

0x2abe,	// (0x00063f7d) cell_tport_appsw_pane_g1

0x2ace,	// (0x00063f8d) cell_tport_appsw_pane_t1

0x011a,	// (0x000615d9) grid_highlight_pane_cp019

0xdef9,	// (0x0006f3b8) list_tport_double_graphic_pane_ParamLimits

0xdef9,	// (0x0006f3b8) list_tport_double_graphic_pane

0x9f3f,	// (0x0006b3fe) list_highlight_pane_cp023_ParamLimits

0x9f3f,	// (0x0006b3fe) list_highlight_pane_cp023

0xdf0b,	// (0x0006f3ca) list_tport_double_graphic_pane_g1_ParamLimits

0xdf0b,	// (0x0006f3ca) list_tport_double_graphic_pane_g1

0xdf18,	// (0x0006f3d7) list_tport_double_graphic_pane_t1_ParamLimits

0xdf18,	// (0x0006f3d7) list_tport_double_graphic_pane_t1

0xdf2d,	// (0x0006f3ec) list_tport_double_graphic_pane_t2_ParamLimits

0xdf2d,	// (0x0006f3ec) list_tport_double_graphic_pane_t2

0x0001,

0xfdb2,	// (0x00071271) list_tport_double_graphic_pane_t_ParamLimits

0xfdb2,	// (0x00071271) list_tport_double_graphic_pane_t

0x011a,	// (0x000615d9) main_cale_note_pane

0xc44e,	// (0x0006d90d) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0xc44e,	// (0x0006d90d) cell_vitu2_function_top_wide_pane_cp01

0xdaad,	// (0x0006ef6c) wait_bar_pane_cp05_ParamLimits

0x011a,	// (0x000615d9) listscroll_cmail_pane

0x2ae4,	// (0x00063fa3) list_cmail_pane

0xdf49,	// (0x0006f408) list_cmail_body_pane

0xdf66,	// (0x0006f425) list_single_cmail_header_caption_pane

0xdf8b,	// (0x0006f44a) list_single_cmail_header_detail_pane_ParamLimits

0xdf8b,	// (0x0006f44a) list_single_cmail_header_detail_pane

0xdfbe,	// (0x0006f47d) list_single_cmail_header_caption_pane_t1

0x53f8,	// (0x000668b7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x53f8,	// (0x000668b7) list_single_cmail_header_detail_pane_g1

0xdfcc,	// (0x0006f48b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xdfcc,	// (0x0006f48b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfdb7,	// (0x00071276) list_single_cmail_header_detail_pane_g_ParamLimits

0xfdb7,	// (0x00071276) list_single_cmail_header_detail_pane_g

0x540e,	// (0x000668cd) list_single_cmail_header_detail_pane_t1_ParamLimits

0x540e,	// (0x000668cd) list_single_cmail_header_detail_pane_t1

0x546c,	// (0x0006692b) list_single_cmail_header_editor_pane_bg_ParamLimits

0x546c,	// (0x0006692b) list_single_cmail_header_editor_pane_bg

0x23e4,	// (0x000638a3) list_cmail_body_pane_g1

0x2b7f,	// (0x0006403e) list_cmail_body_pane_t1

0x15e4,	// (0x00062aa3) list_single_cmail_header_editor_pane_bg_g1

0x0dc5,	// (0x00062284) list_single_cmail_header_editor_pane_bg_g1_copy1

0x15f4,	// (0x00062ab3) list_single_cmail_header_editor_pane_bg_g1_copy2

0x15ec,	// (0x00062aab) list_single_cmail_header_editor_pane_bg_g1_copy3

0x1829,	// (0x00062ce8) list_single_cmail_header_editor_pane_bg_g1_copy4

0x1614,	// (0x00062ad3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x1604,	// (0x00062ac3) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x160c,	// (0x00062acb) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0x0da5,	// (0x00062264) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xdfd8,	// (0x0006f497) calenote_gesture_pane_ParamLimits

0xdfd8,	// (0x0006f497) calenote_gesture_pane

0xdff2,	// (0x0006f4b1) calenote_window_pane_ParamLimits

0xdff2,	// (0x0006f4b1) calenote_window_pane

0x2b8d,	// (0x0006404c) popup_note_window_cp01

0xe00a,	// (0x0006f4c9) calenote_swipe_1_pane_ParamLimits

0xe00a,	// (0x0006f4c9) calenote_swipe_1_pane

0xddf6,	// (0x0006f2b5) calenote_swipe_2_pane_ParamLimits

0xddf6,	// (0x0006f2b5) calenote_swipe_2_pane

0x2727,	// (0x00063be6) calenote_swipe_1_pane_g1_ParamLimits

0x2727,	// (0x00063be6) calenote_swipe_1_pane_g1

0x2734,	// (0x00063bf3) calenote_swipe_1_pane_g2_ParamLimits

0x2734,	// (0x00063bf3) calenote_swipe_1_pane_g2

0x0001,

0xfce6,	// (0x000711a5) calenote_swipe_1_pane_g_ParamLimits

0xfce6,	// (0x000711a5) calenote_swipe_1_pane_g

0x2b9f,	// (0x0006405e) calenote_swipe_1_pane_t1_ParamLimits

0x2b9f,	// (0x0006405e) calenote_swipe_1_pane_t1

0x2727,	// (0x00063be6) calenote_swipe_2_pane_g1_ParamLimits

0x2727,	// (0x00063be6) calenote_swipe_2_pane_g1

0x2bbe,	// (0x0006407d) calenote_swipe_2_pane_g2_ParamLimits

0x2bbe,	// (0x0006407d) calenote_swipe_2_pane_g2

0x0001,

0xfdc3,	// (0x00071282) calenote_swipe_2_pane_g_ParamLimits

0xfdc3,	// (0x00071282) calenote_swipe_2_pane_g

0x2bca,	// (0x00064089) calenote_swipe_2_pane_t1_ParamLimits

0x2bca,	// (0x00064089) calenote_swipe_2_pane_t1

0x011a,	// (0x000615d9) main_mup_navstr_pane

0xb206,	// (0x0006c6c5) main_mup3_pane_t7_ParamLimits

0xb206,	// (0x0006c6c5) main_mup3_pane_t7

0xbbeb,	// (0x0006d0aa) main_mp4_pane_g6_ParamLimits

0xbbeb,	// (0x0006d0aa) main_mp4_pane_g6

0xbf5d,	// (0x0006d41c) main_image3_pane_t4_ParamLimits

0xbf5d,	// (0x0006d41c) main_image3_pane_t4

0xe01d,	// (0x0006f4dc) popup_navstr_preview_pane_ParamLimits

0xe01d,	// (0x0006f4dc) popup_navstr_preview_pane

0xe029,	// (0x0006f4e8) scroll_navstr_pane_ParamLimits

0xe029,	// (0x0006f4e8) scroll_navstr_pane

0x011a,	// (0x000615d9) bg_popup_preview_window_pane_cp04

0x2bf1,	// (0x000640b0) popup_navstr_preview_pane_t1

0xe035,	// (0x0006f4f4) scroll_navstr_pane_g1_ParamLimits

0xe035,	// (0x0006f4f4) scroll_navstr_pane_g1

0xe042,	// (0x0006f501) scroll_navstr_pane_t1_ParamLimits

0xe042,	// (0x0006f501) scroll_navstr_pane_t1

0x2b96,	// (0x00064055) bg_button_pane_cp014

0x2b96,	// (0x00064055) bg_button_pane_cp030

0x4e56,	// (0x00066315) list_double_fisheye_pane_g4_ParamLimits

0x4e56,	// (0x00066315) list_double_fisheye_pane_g4

0x4e62,	// (0x00066321) list_double_fisheye_pane_g5_ParamLimits

0x4e62,	// (0x00066321) list_double_fisheye_pane_g5

0x2aec,	// (0x00063fab) sp_fs_scroll_pane_cp03

0x2866,	// (0x00063d25) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x2872,	// (0x00063d31) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfd03,	// (0x000711c2) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x287e,	// (0x00063d3d) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xdf3f,	// (0x0006f3fe) sp_fs_scroll_pane_cp02

0x0a63,	// (0x00061f22) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0x0a63,	// (0x00061f22) popup_sp_fs_calendar_preview_list_single_pane

0x011a,	// (0x000615d9) main_cam6_pano_pane

0x9f3f,	// (0x0006b3fe) main_mup3_pane_ParamLimits

0x011a,	// (0x000615d9) main_phacti_pane

0xd982,	// (0x0006ee41) bg_button_pane_cp11

0xd99a,	// (0x0006ee59) main_mobtv_info_pane_g2_ParamLimits

0xd99a,	// (0x0006ee59) main_mobtv_info_pane_g2

0x0001,

0xfc63,	// (0x00071122) main_mobtv_info_pane_g_ParamLimits

0xfc63,	// (0x00071122) main_mobtv_info_pane_g

0xdb4c,	// (0x0006f00b) sc_clock_pane_t5_ParamLimits

0xdb4c,	// (0x0006f00b) sc_clock_pane_t5

0xdbea,	// (0x0006f0a9) main_radioblah_pane_g1_ParamLimits

0x266a,	// (0x00063b29) main_radioblah_pane_t3_ParamLimits

0x266a,	// (0x00063b29) main_radioblah_pane_t3

0x2682,	// (0x00063b41) main_radioblah_pane_t4_ParamLimits

0x2682,	// (0x00063b41) main_radioblah_pane_t4

0xdc08,	// (0x0006f0c7) main_radioblah_text_pane_ParamLimits

0xdc08,	// (0x0006f0c7) main_radioblah_text_pane

0xdc15,	// (0x0006f0d4) main_radioblah_info_pane_g1_ParamLimits

0xdcaa,	// (0x0006f169) main_radioblah_info_pane_t4_ParamLimits

0xdcaa,	// (0x0006f169) main_radioblah_info_pane_t4

0x9f3f,	// (0x0006b3fe) main_sp_fs_calendar_pane

0xe054,	// (0x0006f513) main_phacti_pane_g1

0xe05c,	// (0x0006f51b) phacti_note_pane_ParamLimits

0xe05c,	// (0x0006f51b) phacti_note_pane

0x2c08,	// (0x000640c7) phacti_term_pane_ParamLimits

0x2c08,	// (0x000640c7) phacti_term_pane

0x2c1d,	// (0x000640dc) phacti_note_pane_t1_ParamLimits

0x2c1d,	// (0x000640dc) phacti_note_pane_t1

0x547e,	// (0x0006693d) phacti_term_pane_g1

0x5486,	// (0x00066945) phacti_term_pane_t1_ParamLimits

0x5486,	// (0x00066945) phacti_term_pane_t1

0x2c66,	// (0x00064125) popup_sp_fs_calendar_preview_list_single_pane_g1

0x0bc0,	// (0x0006207f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdcd,	// (0x0007128c) popup_sp_fs_calendar_preview_list_single_pane_g

0x2c6e,	// (0x0006412d) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0x2c6e,	// (0x0006412d) popup_sp_fs_calendar_preview_list_single_pane_t1

0x2c83,	// (0x00064142) aid_popup_sp_fs_bg_corner_pane

0xec13,	// (0x000700d2) popup_sp_fs_calendar_preview_bg_pane_g1

0x011a,	// (0x000615d9) popup_sp_fs_calendar_preview_bg_pane

0x2c8b,	// (0x0006414a) popup_sp_fs_calendar_preview_list_pane

0x9f3f,	// (0x0006b3fe) bg_main_sp_fs_cale_pane_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_main_sp_fs_cale_pane

0x54b0,	// (0x0006696f) listscroll_cale_mrui_pane_ParamLimits

0x54b0,	// (0x0006696f) listscroll_cale_mrui_pane

0x54c4,	// (0x00066983) listscroll_sp_fs_schedule_track_pane

0x54cd,	// (0x0006698c) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x54cd,	// (0x0006698c) main_sp_fs_ctrlbar_pane_cp01

0x2cc1,	// (0x00064180) main_sp_fs_ribbon_pane

0x2cc9,	// (0x00064188) popup_sp_fs_cale_preview_window

0x2afc,	// (0x00063fbb) list_single_sp_fs_schedule_track_pane_ParamLimits

0x2afc,	// (0x00063fbb) list_single_sp_fs_schedule_track_pane

0x5a03,	// (0x00066ec2) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x5a03,	// (0x00066ec2) bg_sp_fs_highlight_list_pane_cp03

0xe09b,	// (0x0006f55a) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xe09b,	// (0x0006f55a) list_single_sp_fs_schedule_track_pane_g1

0xe0a7,	// (0x0006f566) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xe0a7,	// (0x0006f566) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdd2,	// (0x00071291) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdd2,	// (0x00071291) list_single_sp_fs_schedule_track_pane_g

0xe0b3,	// (0x0006f572) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xe0b3,	// (0x0006f572) list_single_sp_fs_schedule_track_pane_t1

0xe0cb,	// (0x0006f58a) sp_fs_schedule_track_pane_ParamLimits

0xe0cb,	// (0x0006f58a) sp_fs_schedule_track_pane

0x2cdb,	// (0x0006419a) sp_fs_schedule_track_pane_g1

0x2ce3,	// (0x000641a2) sp_fs_schedule_track_pane_g2

0x2ceb,	// (0x000641aa) sp_fs_schedule_track_pane_g3

0x2cf3,	// (0x000641b2) sp_fs_schedule_track_pane_g4

0x2cfb,	// (0x000641ba) sp_fs_schedule_track_pane_g5

0x0004,

0xfdd7,	// (0x00071296) sp_fs_schedule_track_pane_g

0x15e4,	// (0x00062aa3) bg_sp_fs_schedule_viewer_highlight_g1

0x0dc5,	// (0x00062284) bg_sp_fs_schedule_viewer_highlight_g2

0x15ec,	// (0x00062aab) bg_sp_fs_schedule_viewer_highlight_g3

0x15f4,	// (0x00062ab3) bg_sp_fs_schedule_viewer_highlight_g4

0x1829,	// (0x00062ce8) bg_sp_fs_schedule_viewer_highlight_g5

0x1604,	// (0x00062ac3) bg_sp_fs_schedule_viewer_highlight_g6

0x160c,	// (0x00062acb) bg_sp_fs_schedule_viewer_highlight_g7

0x1614,	// (0x00062ad3) bg_sp_fs_schedule_viewer_highlight_g8

0x0da5,	// (0x00062264) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfde2,	// (0x000712a1) bg_sp_fs_schedule_viewer_highlight_g

0x011a,	// (0x000615d9) bg_main_sp_fs_ribbon_pane

0xe0db,	// (0x0006f59a) main_sp_fs_ribbon_pane_g1

0x2d03,	// (0x000641c2) main_sp_fs_ribbon_pane_t1

0xe0e4,	// (0x0006f5a3) main_sp_fs_ribbon_pane_t2

0x2d12,	// (0x000641d1) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdf5,	// (0x000712b4) main_sp_fs_ribbon_pane_t

0x2d21,	// (0x000641e0) main_sp_fs_ribbon_scheduler_pane

0x2d29,	// (0x000641e8) bg_main_sp_fs_ribbon_pane_g1

0x2d32,	// (0x000641f1) bg_main_sp_fs_ribbon_pane_g2

0x2d3b,	// (0x000641fa) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdfc,	// (0x000712bb) bg_main_sp_fs_ribbon_pane_g

0x2d43,	// (0x00064202) main_sp_fs_ribbon_scheduler_pane_g1

0x2d4c,	// (0x0006420b) main_sp_fs_ribbon_scheduler_pane_g2

0x2d55,	// (0x00064214) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfe03,	// (0x000712c2) main_sp_fs_ribbon_scheduler_pane_g

0x2d5e,	// (0x0006421d) list_cale_mrui_pane

0xe0f3,	// (0x0006f5b2) sp_fs_scroll_pane_cp07_ParamLimits

0xe0f3,	// (0x0006f5b2) sp_fs_scroll_pane_cp07

0xe109,	// (0x0006f5c8) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xe109,	// (0x0006f5c8) bg_sp_fs_schedule_viewer_highlight

0x2d67,	// (0x00064226) list_single_sp_fs_schedule_track_pane_cp01

0x2d6f,	// (0x0006422e) list_sp_fs_schedule_track_pane

0x2d77,	// (0x00064236) sp_fs_scroll_pane_cp06_ParamLimits

0x2d77,	// (0x00064236) sp_fs_scroll_pane_cp06

0xec13,	// (0x000700d2) bgmain_sp_fs_calendar_pane_g1

0x54de,	// (0x0006699d) list_single_cale_mrui_pane_ParamLimits

0x54de,	// (0x0006699d) list_single_cale_mrui_pane

0x5503,	// (0x000669c2) list_single_cale_mrui_row_pane_ParamLimits

0x5503,	// (0x000669c2) list_single_cale_mrui_row_pane

0x5510,	// (0x000669cf) list_single_cale_mrui_row_pane_g1_ParamLimits

0x5510,	// (0x000669cf) list_single_cale_mrui_row_pane_g1

0x5548,	// (0x00066a07) list_single_cale_mrui_row_pane_t1_ParamLimits

0x5548,	// (0x00066a07) list_single_cale_mrui_row_pane_t1

0x555a,	// (0x00066a19) list_single_cale_mrui_row_pane_t2_ParamLimits

0x555a,	// (0x00066a19) list_single_cale_mrui_row_pane_t2

0x55c0,	// (0x00066a7f) list_single_cale_mrui_row_pane_t3_ParamLimits

0x55c0,	// (0x00066a7f) list_single_cale_mrui_row_pane_t3

0x55ef,	// (0x00066aae) list_single_cale_mrui_row_pane_t4_ParamLimits

0x55ef,	// (0x00066aae) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe0f,	// (0x000712ce) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe0f,	// (0x000712ce) list_single_cale_mrui_row_pane_t

0x561e,	// (0x00066add) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x561e,	// (0x00066add) list_single_cmail_header_editor_pane_bg_cp01

0x563e,	// (0x00066afd) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x563e,	// (0x00066afd) list_single_cmail_header_editor_pane_bg_cp02

0xe116,	// (0x0006f5d5) main_radioblah_text_pane_t1_ParamLimits

0xe116,	// (0x0006f5d5) main_radioblah_text_pane_t1

0x2e3e,	// (0x000642fd) cam6_indi_pane_cp01

0x2e46,	// (0x00064305) cam6_mode_pane_cp01

0x2e4e,	// (0x0006430d) cam6_pano_pane

0x2e57,	// (0x00064316) cam6_zoom_pane_cp01

0x2e5f,	// (0x0006431e) cam6_pano_image_pane

0x2e6a,	// (0x00064329) cam6_pano_pane_g1

0x23e4,	// (0x000638a3) cam6_pano_pane_g2

0x2e73,	// (0x00064332) cam6_pano_pane_g3

0x2e7c,	// (0x0006433b) cam6_pano_pane_g4

0x111d,	// (0x000625dc) cam6_pano_pane_g5

0x2e85,	// (0x00064344) cam6_pano_pane_g6

0x2e8f,	// (0x0006434e) cam6_pano_pane_g7

0x2e97,	// (0x00064356) cam6_pano_pane_g8

0x2ea0,	// (0x0006435f) cam6_pano_pane_g9

0x0008,

0xfe18,	// (0x000712d7) cam6_pano_pane_g

0x011a,	// (0x000615d9) main_browser_tag_pane

0x2be9,	// (0x000640a8) grid_navstr_albumart_pane

0x2eab,	// (0x0006436a) cell_navstr_albumart_pane_ParamLimits

0x2eab,	// (0x0006436a) cell_navstr_albumart_pane

0x2ece,	// (0x0006438d) cell_navstr_albumart_pane_g1

0x9afc,	// (0x0006afbb) cell_navstr_albumart_pane_g2

0x9b0c,	// (0x0006afcb) cell_navstr_albumart_pane_g3

0x9b04,	// (0x0006afc3) cell_navstr_albumart_pane_g4

0x0003,

0xfe2b,	// (0x000712ea) cell_navstr_albumart_pane_g

0xe131,	// (0x0006f5f0) bt_list_pane_ParamLimits

0xe131,	// (0x0006f5f0) bt_list_pane

0xe151,	// (0x0006f610) bt_list_pane_t1

0xe160,	// (0x0006f61f) bt_list_pane_t2

0x0001,

0xfe34,	// (0x000712f3) bt_list_pane_t

0x011a,	// (0x000615d9) main_cale_prevew_pane

0xe16f,	// (0x0006f62e) popup_cale_preview_window_ParamLimits

0xe16f,	// (0x0006f62e) popup_cale_preview_window

0x9f3f,	// (0x0006b3fe) bg_popup_preview_window_pane_cp05_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_popup_preview_window_pane_cp05

0x2ed6,	// (0x00064395) list_cale_preview_pane_ParamLimits

0x2ed6,	// (0x00064395) list_cale_preview_pane

0x322c,	// (0x000646eb) list_double_cale_preview_pane_ParamLimits

0x322c,	// (0x000646eb) list_double_cale_preview_pane

0xe188,	// (0x0006f647) list_single_cale_preview_pane_ParamLimits

0xe188,	// (0x0006f647) list_single_cale_preview_pane

0xe19e,	// (0x0006f65d) list_single_cale_preview_pane_g1

0xe1a6,	// (0x0006f665) list_single_cale_preview_pane_t1_ParamLimits

0xe1a6,	// (0x0006f665) list_single_cale_preview_pane_t1

0xe1bb,	// (0x0006f67a) list_double_cale_preview_pane_g1

0xe1c3,	// (0x0006f682) list_double_cale_preview_pane_t1_ParamLimits

0xe1c3,	// (0x0006f682) list_double_cale_preview_pane_t1

0xe1d8,	// (0x0006f697) list_double_cale_preview_pane_t2_ParamLimits

0xe1d8,	// (0x0006f697) list_double_cale_preview_pane_t2

0x0001,

0xfe39,	// (0x000712f8) list_double_cale_preview_pane_t_ParamLimits

0xfe39,	// (0x000712f8) list_double_cale_preview_pane_t

0x011a,	// (0x000615d9) main_ezdial_pane

0x9f3f,	// (0x0006b3fe) main_sp_fs_email_pane_ParamLimits

0xde10,	// (0x0006f2cf) cmail_ddmenu_btn01_pane_ParamLimits

0xde10,	// (0x0006f2cf) cmail_ddmenu_btn01_pane

0xde2d,	// (0x0006f2ec) cmail_ddmenu_btn02_pane_ParamLimits

0xde2d,	// (0x0006f2ec) cmail_ddmenu_btn02_pane

0xde4b,	// (0x0006f30a) cmail_ddmenu_btn03_pane_ParamLimits

0xde4b,	// (0x0006f30a) cmail_ddmenu_btn03_pane

0x4f1a,	// (0x000663d9) main_sp_fs_ctrlbar_pane_ParamLimits

0x4f36,	// (0x000663f5) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xdf49,	// (0x0006f408) list_cmail_body_pane_ParamLimits

0x2b15,	// (0x00063fd4) bg_button_pane_cp12

0x2b2a,	// (0x00063fe9) list_single_cmail_header_detail_pane_g3_ParamLimits

0x2b2a,	// (0x00063fe9) list_single_cmail_header_detail_pane_g3

0x5448,	// (0x00066907) list_single_cmail_header_detail_pane_t2_ParamLimits

0x5448,	// (0x00066907) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdbe,	// (0x0007127d) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdbe,	// (0x0007127d) list_single_cmail_header_detail_pane_t

0x549b,	// (0x0006695a) phacti_term_pane_t2_ParamLimits

0x549b,	// (0x0006695a) phacti_term_pane_t2

0x0001,

0xfdc8,	// (0x00071287) phacti_term_pane_t_ParamLimits

0xfdc8,	// (0x00071287) phacti_term_pane_t

0x2ee2,	// (0x000643a1) aid_size_list_single_double

0xe1f0,	// (0x0006f6af) popup_ezdial_listscroll_window

0xe210,	// (0x0006f6cf) popup_number_entry_window_cp01

0x7ecf,	// (0x0006938e) bg_popup_call_pane_cp09

0x2eee,	// (0x000643ad) ezdial_list_pane

0x2ef6,	// (0x000643b5) scroll_pane_cp23

0xaa5a,	// (0x0006bf19) bg_button_pane_cp028_ParamLimits

0xaa5a,	// (0x0006bf19) bg_button_pane_cp028

0xe21e,	// (0x0006f6dd) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xe21e,	// (0x0006f6dd) cmail_ddmenu_btn01_pane_g1

0xe22e,	// (0x0006f6ed) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xe22e,	// (0x0006f6ed) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe3e,	// (0x000712fd) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe3e,	// (0x000712fd) cmail_ddmenu_btn01_pane_g

0x2efe,	// (0x000643bd) cmail_ddmenu_btn01_pane_t1_ParamLimits

0x2efe,	// (0x000643bd) cmail_ddmenu_btn01_pane_t1

0x9f31,	// (0x0006b3f0) bg_button_pane_cp029_ParamLimits

0x9f31,	// (0x0006b3f0) bg_button_pane_cp029

0xe22e,	// (0x0006f6ed) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xe22e,	// (0x0006f6ed) cmail_ddmenu_btn02_pane_g1

0xe246,	// (0x0006f705) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xe246,	// (0x0006f705) cmail_ddmenu_btn02_pane_t1

0x5a03,	// (0x00066ec2) bg_button_pane_cp031_ParamLimits

0x5a03,	// (0x00066ec2) bg_button_pane_cp031

0xe22e,	// (0x0006f6ed) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xe22e,	// (0x0006f6ed) cmail_ddmenu_btn03_pane_g1

0xe246,	// (0x0006f705) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xe246,	// (0x0006f705) cmail_ddmenu_btn03_pane_t1

0xbe08,	// (0x0006d2c7) cell_dialer2_keypad_pane_t1_ParamLimits

0xbe22,	// (0x0006d2e1) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xbe22,	// (0x0006d2e1) cell_dialer2_keypad_pane_t1_copy1

0xd844,	// (0x0006ed03) ncimui_group_button_pane

0x9f3f,	// (0x0006b3fe) main_sp_fs_calendar_pane_ParamLimits

0xdf66,	// (0x0006f425) list_single_cmail_header_caption_pane_ParamLimits

0x1b70,	// (0x0006302f) aid_recal_txt_sm_pane

0x011a,	// (0x000615d9) mian_recal_day_pane

0x2cc9,	// (0x00064188) popup_sp_fs_cale_preview_window_ParamLimits

0x011a,	// (0x000615d9) list_recal_day_pane

0x2f2c,	// (0x000643eb) list_single_recal_day_pane_ParamLimits

0x2f2c,	// (0x000643eb) list_single_recal_day_pane

0x2f3e,	// (0x000643fd) list_single_recal_day_pane_g1_ParamLimits

0x2f3e,	// (0x000643fd) list_single_recal_day_pane_g1

0x2f4a,	// (0x00064409) list_single_recal_day_pane_g2_ParamLimits

0x2f4a,	// (0x00064409) list_single_recal_day_pane_g2

0x2f59,	// (0x00064418) list_single_recal_day_pane_g3_ParamLimits

0x2f59,	// (0x00064418) list_single_recal_day_pane_g3

0xe26a,	// (0x0006f729) list_single_recal_day_pane_g4_ParamLimits

0xe26a,	// (0x0006f729) list_single_recal_day_pane_g4

0x2f65,	// (0x00064424) list_single_recal_day_pane_g5_ParamLimits

0x2f65,	// (0x00064424) list_single_recal_day_pane_g5

0x2f74,	// (0x00064433) list_single_recal_day_pane_g6_ParamLimits

0x2f74,	// (0x00064433) list_single_recal_day_pane_g6

0x0005,

0xfe4d,	// (0x0007130c) list_single_recal_day_pane_g_ParamLimits

0xfe4d,	// (0x0007130c) list_single_recal_day_pane_g

0x2f80,	// (0x0006443f) list_single_recal_day_pane_t1

0x2f8e,	// (0x0006444d) list_single_recal_day_pane_t2

0x0001,

0xfe5a,	// (0x00071319) list_single_recal_day_pane_t

0xe27d,	// (0x0006f73c) ncimui_query_button_pane_ParamLimits

0xe27d,	// (0x0006f73c) ncimui_query_button_pane

0xe28d,	// (0x0006f74c) ncimui_query_button_pane_t1_ParamLimits

0xe28d,	// (0x0006f74c) ncimui_query_button_pane_t1

0x2f9c,	// (0x0006445b) ncimui_query_button_pane_t2_ParamLimits

0x2f9c,	// (0x0006445b) ncimui_query_button_pane_t2

0x0001,

0xfe5f,	// (0x0007131e) ncimui_query_button_pane_t_ParamLimits

0xfe5f,	// (0x0007131e) ncimui_query_button_pane_t

0xe2a0,	// (0x0006f75f) query_button_pane_ParamLimits

0xe2a0,	// (0x0006f75f) query_button_pane

0x011a,	// (0x000615d9) bg_button_pane_cp0028

0x2faf,	// (0x0006446e) query_button_pane_t1

0x9f5b,	// (0x0006b41a) main_tport_pane_ParamLimits

0xde79,	// (0x0006f338) bg_popup_window_pane_cp01_ParamLimits

0xde79,	// (0x0006f338) bg_popup_window_pane_cp01

0xde86,	// (0x0006f345) heading_pane_cp08_ParamLimits

0xde86,	// (0x0006f345) heading_pane_cp08

0xde94,	// (0x0006f353) heading_pane_cp07_ParamLimits

0xde94,	// (0x0006f353) heading_pane_cp07

0x2abe,	// (0x00063f7d) cell_tport_appsw_pane_g2

0x0002,

0xfdab,	// (0x0007126a) cell_tport_appsw_pane_g

0x4919,	// (0x00065dd8) input_candi_list_open_g1

0x753b,	// (0x000689fa) list_cale_time_pane_g6_ParamLimits

0x753b,	// (0x000689fa) list_cale_time_pane_g6

0xac93,	// (0x0006c152) aid_size_touch_calib_1_ParamLimits

0xac93,	// (0x0006c152) aid_size_touch_calib_1

0xac9f,	// (0x0006c15e) aid_size_touch_calib_2_ParamLimits

0xac9f,	// (0x0006c15e) aid_size_touch_calib_2

0xacad,	// (0x0006c16c) aid_size_touch_calib_3_ParamLimits

0xacad,	// (0x0006c16c) aid_size_touch_calib_3

0xacbd,	// (0x0006c17c) aid_size_touch_calib_4_ParamLimits

0xacbd,	// (0x0006c17c) aid_size_touch_calib_4

0xaccb,	// (0x0006c18a) main_touch_calib_button_group_pane_ParamLimits

0xaccb,	// (0x0006c18a) main_touch_calib_button_group_pane

0xacd9,	// (0x0006c198) main_touch_calib_pane_g1_ParamLimits

0xace5,	// (0x0006c1a4) main_touch_calib_pane_g2_ParamLimits

0xacf1,	// (0x0006c1b0) main_touch_calib_pane_g3_ParamLimits

0xacfd,	// (0x0006c1bc) main_touch_calib_pane_g4_ParamLimits

0xf784,	// (0x00070c43) main_touch_calib_pane_g_ParamLimits

0xad09,	// (0x0006c1c8) main_touch_calib_pane_t1_ParamLimits

0xad20,	// (0x0006c1df) main_touch_calib_pane_t2_ParamLimits

0xad37,	// (0x0006c1f6) main_touch_calib_pane_t3_ParamLimits

0xad4b,	// (0x0006c20a) main_touch_calib_pane_t4_ParamLimits

0xad5f,	// (0x0006c21e) main_touch_calib_pane_t5_ParamLimits

0xf78d,	// (0x00070c4c) main_touch_calib_pane_t_ParamLimits

0xef7c,	// (0x0007043b) list_single_fp_cale_pane_g3_ParamLimits

0xef7c,	// (0x0007043b) list_single_fp_cale_pane_g3

0x9f3f,	// (0x0006b3fe) bg_button_pane_cp012_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp03_ParamLimits

0xcbbb,	// (0x0006e07a) cell_vitu2_function_top_pane_g1_ParamLimits

0x9f3f,	// (0x0006b3fe) bg_vkb2_func_pane_cp04_ParamLimits

0xd7f5,	// (0x0006ecb4) main_ncimui_button_group_pane_ParamLimits

0xd7f5,	// (0x0006ecb4) main_ncimui_button_group_pane

0xd832,	// (0x0006ecf1) main_ncimui_pane_t3_ParamLimits

0xd832,	// (0x0006ecf1) main_ncimui_pane_t3

0x2bff,	// (0x000640be) phacti_button_group_pane

0x2ee2,	// (0x000643a1) aid_size_list_single_double_ParamLimits

0xe1f0,	// (0x0006f6af) popup_ezdial_listscroll_window_ParamLimits

0xe210,	// (0x0006f6cf) popup_number_entry_window_cp01_ParamLimits

0xe2ad,	// (0x0006f76c) phacti_button_pane_ParamLimits

0xe2ad,	// (0x0006f76c) phacti_button_pane

0x011a,	// (0x000615d9) bg_button_pane_cp14

0x2fbd,	// (0x0006447c) phacti_button_pane_t1

0xe2be,	// (0x0006f77d) main_touch_calib_button_pane_ParamLimits

0xe2be,	// (0x0006f77d) main_touch_calib_button_pane

0x08f3,	// (0x00061db2) bg_button_pane_cp18_ParamLimits

0x08f3,	// (0x00061db2) bg_button_pane_cp18

0x2fcb,	// (0x0006448a) main_touch_calib_button_pane_t1_ParamLimits

0x2fcb,	// (0x0006448a) main_touch_calib_button_pane_t1

0x2fe1,	// (0x000644a0) main_touch_calib_button_pane_t2_ParamLimits

0x2fe1,	// (0x000644a0) main_touch_calib_button_pane_t2

0x0001,

0xfe64,	// (0x00071323) main_touch_calib_button_pane_t_ParamLimits

0xfe64,	// (0x00071323) main_touch_calib_button_pane_t

0x011a,	// (0x000615d9) cell_ncimui_button_pane

0x011a,	// (0x000615d9) bg_button_pane_cp032

0x2fff,	// (0x000644be) cell_ncimui_button_pane_t1

0xbe7e,	// (0x0006d33d) image3_infobar_pane_ParamLimits

0xbe7e,	// (0x0006d33d) image3_infobar_pane

0xdb6e,	// (0x0006f02d) fs_bigclock_status_pane_ParamLimits

0xdb6e,	// (0x0006f02d) fs_bigclock_status_pane

0xdb7b,	// (0x0006f03a) main_fs_bigclock_clock_pane_ParamLimits

0xdb7b,	// (0x0006f03a) main_fs_bigclock_clock_pane

0xdb8b,	// (0x0006f04a) main_fs_bigclock_indi_pane_ParamLimits

0xdb8b,	// (0x0006f04a) main_fs_bigclock_indi_pane

0xdbb8,	// (0x0006f077) main_fs_bigclock_swipe_pane_ParamLimits

0xdbb8,	// (0x0006f077) main_fs_bigclock_swipe_pane

0x011a,	// (0x000615d9) main_fs_clock_dumped_data

0x24f1,	// (0x000639b0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x24f1,	// (0x000639b0) list_single_fs_bigclock_indicator_pane_g1

0x250d,	// (0x000639cc) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x250d,	// (0x000639cc) list_single_fs_bigclock_indicator_pane_g2

0x2527,	// (0x000639e6) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x2527,	// (0x000639e6) list_single_fs_bigclock_indicator_pane_g3

0x2541,	// (0x00063a00) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x2541,	// (0x00063a00) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc97,	// (0x00071156) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc97,	// (0x00071156) list_single_fs_bigclock_indicator_pane_g

0x2567,	// (0x00063a26) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x2567,	// (0x00063a26) list_single_fs_bigclock_indicator_pane_t1

0x258f,	// (0x00063a4e) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x258f,	// (0x00063a4e) list_single_fs_bigclock_indicator_pane_t2

0x25b7,	// (0x00063a76) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x25b7,	// (0x00063a76) list_single_fs_bigclock_indicator_pane_t3

0x25df,	// (0x00063a9e) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x25df,	// (0x00063a9e) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfca2,	// (0x00071161) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfca2,	// (0x00071161) list_single_fs_bigclock_indicator_pane_t

0x300d,	// (0x000644cc) image3_infobar_fav_pane_ParamLimits

0x300d,	// (0x000644cc) image3_infobar_fav_pane

0x301d,	// (0x000644dc) image3_infobar_loc_pane_ParamLimits

0x301d,	// (0x000644dc) image3_infobar_loc_pane

0x3031,	// (0x000644f0) image3_infobar_time_pane_ParamLimits

0x3031,	// (0x000644f0) image3_infobar_time_pane

0xec13,	// (0x000700d2) image3_infobar_time_pane_g1

0x3041,	// (0x00064500) image3_infobar_time_pane_t1

0xec13,	// (0x000700d2) image3_infobar_loc_pane_g1

0x304f,	// (0x0006450e) image3_infobar_loc_pane_g2

0x0001,

0xfe69,	// (0x00071328) image3_infobar_loc_pane_g

0x3057,	// (0x00064516) image3_infobar_loc_pane_t1

0xec13,	// (0x000700d2) image3_infobar_fav_pane_g1

0x3065,	// (0x00064524) image3_infobar_fav_pane_g2

0x0001,

0xfe6e,	// (0x0007132d) image3_infobar_fav_pane_g

0x306d,	// (0x0006452c) fs_bigclock_status_battery_pane

0x3076,	// (0x00064535) fs_bigclock_status_signal_pane

0x307f,	// (0x0006453e) fs_bigclock_status_title_pane

0x3088,	// (0x00064547) fs_bigclock_status_signal_pane_g1

0x3091,	// (0x00064550) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe73,	// (0x00071332) fs_bigclock_status_signal_pane_g

0x3099,	// (0x00064558) fs_bigclock_status_battery_pane_g1

0x30a2,	// (0x00064561) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe78,	// (0x00071337) fs_bigclock_status_battery_pane_g

0x30aa,	// (0x00064569) fs_bigclock_status_title_pane_t1

0xec13,	// (0x000700d2) main_fs_bigclock_clock_pane_g1

0x30b8,	// (0x00064577) main_fs_bigclock_clock_pane_g2

0x30b8,	// (0x00064577) main_fs_bigclock_clock_pane_g3

0x30b8,	// (0x00064577) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe7d,	// (0x0007133c) main_fs_bigclock_clock_pane_g

0x30c0,	// (0x0006457f) main_fs_bigclock_clock_pane_t1

0x30ce,	// (0x0006458d) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe86,	// (0x00071345) main_fs_bigclock_clock_pane_t

0x30dd,	// (0x0006459c) list_single_fs_bigclock_indicator_pane_ParamLimits

0x30dd,	// (0x0006459c) list_single_fs_bigclock_indicator_pane

0xe2d0,	// (0x0006f78f) list_single_fs_bigclock_pane_ParamLimits

0xe2d0,	// (0x0006f78f) list_single_fs_bigclock_pane

0x30f7,	// (0x000645b6) main_fs_bigclock_indicator_pane_t1

0x3106,	// (0x000645c5) list_single_fs_bigclock_pane_g1

0x310e,	// (0x000645cd) list_single_fs_bigclock_pane_t1

0xec13,	// (0x000700d2) main_fs_bigclock_swipe_pane_g1

0x314c,	// (0x0006460b) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe97,	// (0x00071356) main_fs_bigclock_swipe_pane_g

0x3154,	// (0x00064613) main_fs_bigclock_swipe_pane_t1_ParamLimits

0x3154,	// (0x00064613) main_fs_bigclock_swipe_pane_t1

0x7822,	// (0x00068ce1) call_type_pane_ParamLimits

0x011a,	// (0x000615d9) main_btmg_pane

0x553c,	// (0x000669fb) list_single_cale_mrui_row_pane_g2_ParamLimits

0x553c,	// (0x000669fb) list_single_cale_mrui_row_pane_g2

0x0001,

0xfe0a,	// (0x000712c9) list_single_cale_mrui_row_pane_g_ParamLimits

0xfe0a,	// (0x000712c9) list_single_cale_mrui_row_pane_g

0x2f1c,	// (0x000643db) list_recal_vselct_arw_lo_pane

0x2f24,	// (0x000643e3) list_recal_vselct_arw_up_pane

0x1b67,	// (0x00063026) list_recal_vselct_pane

0x3171,	// (0x00064630) btmg_button_pane

0xe333,	// (0x0006f7f2) main_btmg_pane_g1

0x011a,	// (0x000615d9) bg_button_pane_cp044

0x317b,	// (0x0006463a) btmg_button_pane_t1

0x9f1c,	// (0x0006b3db) aid_listscroll_gen

0x9f3f,	// (0x0006b3fe) main_cntbar_detail_pane

0x2adc,	// (0x00063f9b) list_cmail_folder_pane

0x2aec,	// (0x00063fab) sp_fs_scroll_pane_cp03_ParamLimits

0x565a,	// (0x00066b19) list_single_fs_dyc_pane_cp01_ParamLimits

0x565a,	// (0x00066b19) list_single_fs_dyc_pane_cp01

0x3189,	// (0x00064648) aid_size_cmail_indent

0xe33b,	// (0x0006f7fa) list_single_dyc_row_pane_cp01

0xe364,	// (0x0006f823) cntbar_detail_list_pane_ParamLimits

0xe364,	// (0x0006f823) cntbar_detail_list_pane

0xe39e,	// (0x0006f85d) main_cntbar_detail_cont_pane_ParamLimits

0xe39e,	// (0x0006f85d) main_cntbar_detail_cont_pane

0x7708,	// (0x00068bc7) scroll_pane_cp032_ParamLimits

0x7708,	// (0x00068bc7) scroll_pane_cp032

0xe3aa,	// (0x0006f869) cntbar_detail_list_event_pane_ParamLimits

0xe3aa,	// (0x0006f869) cntbar_detail_list_event_pane

0xe370,	// (0x0006f82f) cntbar_detail_list_shct_pane

0x0e13,	// (0x000622d2) aid_list_gen

0x319b,	// (0x0006465a) aid_scroll

0x31a4,	// (0x00064663) aid_size_touch_scroll_bar

0x567c,	// (0x00066b3b) aid_list_double

0x31ad,	// (0x0006466c) aid_list_single

0xe3be,	// (0x0006f87d) aid_list_single_lg

0x5685,	// (0x00066b44) aid_list_z_g_a_sm

0xe3c7,	// (0x0006f886) aid_list_z_g_d

0x568d,	// (0x00066b4c) aid_txt_z_prm

0x569b,	// (0x00066b5a) aid_txt_z_prm_cp01

0x56a9,	// (0x00066b68) aid_txt_z_sec

0xe3cf,	// (0x0006f88e) main_cntbar_detail_cont_pane_g1_ParamLimits

0xe3cf,	// (0x0006f88e) main_cntbar_detail_cont_pane_g1

0xe3dc,	// (0x0006f89b) main_cntbar_detail_cont_pane_g2_ParamLimits

0xe3dc,	// (0x0006f89b) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe9c,	// (0x0007135b) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe9c,	// (0x0007135b) main_cntbar_detail_cont_pane_g

0x31d4,	// (0x00064693) main_cntbar_detail_cont_pane_t1

0x31e2,	// (0x000646a1) main_cntbar_detail_cont_pane_t2

0x31f0,	// (0x000646af) main_cntbar_detail_cont_pane_t3

0x0002,

0xfea1,	// (0x00071360) main_cntbar_detail_cont_pane_t

0xe3e8,	// (0x0006f8a7) cell_cntbar_detail_list_shct_pane_ParamLimits

0xe3e8,	// (0x0006f8a7) cell_cntbar_detail_list_shct_pane

0x31fe,	// (0x000646bd) cntbar_detail_list_shct_pane_g1

0x3207,	// (0x000646c6) cntbar_detail_list_shct_pane_g2

0x0001,

0xfea8,	// (0x00071367) cntbar_detail_list_shct_pane_g

0xe3fc,	// (0x0006f8bb) cntbar_detail_list_event_pane_g1_ParamLimits

0xe3fc,	// (0x0006f8bb) cntbar_detail_list_event_pane_g1

0xe408,	// (0x0006f8c7) cntbar_detail_list_event_pane_g2_ParamLimits

0xe408,	// (0x0006f8c7) cntbar_detail_list_event_pane_g2

0x0005,

0xfead,	// (0x0007136c) cntbar_detail_list_event_pane_g_ParamLimits

0xfead,	// (0x0007136c) cntbar_detail_list_event_pane_g

0xe474,	// (0x0006f933) cntbar_detail_list_event_pane_t1_ParamLimits

0xe474,	// (0x0006f933) cntbar_detail_list_event_pane_t1

0xe489,	// (0x0006f948) cntbar_detail_list_event_pane_t2_ParamLimits

0xe489,	// (0x0006f948) cntbar_detail_list_event_pane_t2

0x0002,

0xfeba,	// (0x00071379) cntbar_detail_list_event_pane_t_ParamLimits

0xfeba,	// (0x00071379) cntbar_detail_list_event_pane_t

0xec13,	// (0x000700d2) cell_cntbar_detail_list_shct_pane_g1

0x7e63,	// (0x00069322) navi_pane_mv_g3

0x9f3f,	// (0x0006b3fe) main_cntbar_detail_pane_ParamLimits

0x011a,	// (0x000615d9) main_notif_wgt_pane

0xbb32,	// (0x0006cff1) aid_tch_main_mp4_pane_g4

0xbd67,	// (0x0006d226) popup_slider_window_cp02

0x2f13,	// (0x000643d2) list_recal_day_event_pane

0xe344,	// (0x0006f803) cntbar_detail_btn_pane_ParamLimits

0xe344,	// (0x0006f803) cntbar_detail_btn_pane

0xe354,	// (0x0006f813) cntbar_detail_btn_pane_cp01_ParamLimits

0xe354,	// (0x0006f813) cntbar_detail_btn_pane_cp01

0xe370,	// (0x0006f82f) cntbar_detail_list_shct_pane_ParamLimits

0xe37c,	// (0x0006f83b) cntbar_detail_pane_g1_ParamLimits

0xe37c,	// (0x0006f83b) cntbar_detail_pane_g1

0xe388,	// (0x0006f847) cntbar_detail_pane_t1_ParamLimits

0xe388,	// (0x0006f847) cntbar_detail_pane_t1

0xe414,	// (0x0006f8d3) cntbar_detail_list_event_pane_g3_ParamLimits

0xe414,	// (0x0006f8d3) cntbar_detail_list_event_pane_g3

0xe42c,	// (0x0006f8eb) cntbar_detail_list_event_pane_g4_ParamLimits

0xe42c,	// (0x0006f8eb) cntbar_detail_list_event_pane_g4

0xe444,	// (0x0006f903) cntbar_detail_list_event_pane_g5_ParamLimits

0xe444,	// (0x0006f903) cntbar_detail_list_event_pane_g5

0xe45c,	// (0x0006f91b) cntbar_detail_list_event_pane_g6_ParamLimits

0xe45c,	// (0x0006f91b) cntbar_detail_list_event_pane_g6

0xe49e,	// (0x0006f95d) cntbar_detail_list_event_pane_t3_ParamLimits

0xe49e,	// (0x0006f95d) cntbar_detail_list_event_pane_t3

0xe4b0,	// (0x0006f96f) popup_notif_wgt_window_ParamLimits

0xe4b0,	// (0x0006f96f) popup_notif_wgt_window

0xe4c0,	// (0x0006f97f) popup_submenu_window_cp01_ParamLimits

0xe4c0,	// (0x0006f97f) popup_submenu_window_cp01

0x7ecf,	// (0x0006938e) bg_popup_window_pane_cp10

0x3210,	// (0x000646cf) listscroll_notif_wgt_pane

0x321a,	// (0x000646d9) list_notif_wgt_window

0x3223,	// (0x000646e2) scroll_pane_cp033

0x322c,	// (0x000646eb) list_notif_wgt_row_pane_ParamLimits

0x322c,	// (0x000646eb) list_notif_wgt_row_pane

0x323e,	// (0x000646fd) aid_size_list_notif_wgt_del

0x3247,	// (0x00064706) list_notif_wgt_row_pane_g1

0x324f,	// (0x0006470e) list_notif_wgt_row_pane_g2

0x3257,	// (0x00064716) list_notif_wgt_row_pane_g3

0x0002,

0xfec1,	// (0x00071380) list_notif_wgt_row_pane_g

0x3260,	// (0x0006471f) list_notif_wgt_row_pane_t1

0x326e,	// (0x0006472d) list_notif_wgt_row_pane_t2

0x327c,	// (0x0006473b) list_notif_wgt_row_pane_t3

0x0002,

0xfec8,	// (0x00071387) list_notif_wgt_row_pane_t

0x185b,	// (0x00062d1a) list_recal_day_event_pane_g1

0x328a,	// (0x00064749) list_recal_day_event_pane_t1

0x011a,	// (0x000615d9) bg_button_pane_cp045

0x3299,	// (0x00064758) cntbar_detail_btn_pane_t1

0x9f31,	// (0x0006b3f0) main_callh_pane_ParamLimits

0x9f31,	// (0x0006b3f0) main_callh_pane

0x011a,	// (0x000615d9) main_coverflow0_pane

0x011a,	// (0x000615d9) main_wgtman_pane

0xdbd0,	// (0x0006f08f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0xdbd0,	// (0x0006f08f) main_fs_bigclock_unlock_btn_pane

0x2ab6,	// (0x00063f75) bg_button_pane_cp16

0x2ac6,	// (0x00063f85) cell_tport_appsw_pane_g3

0xe4ce,	// (0x0006f98d) cf0_flow_pane_ParamLimits

0xe4ce,	// (0x0006f98d) cf0_flow_pane

0x32a7,	// (0x00064766) listscroll_cf0_pane

0x32b0,	// (0x0006476f) main_cf0_pane_g1

0xe4dd,	// (0x0006f99c) main_cf0_pane_t1_ParamLimits

0xe4dd,	// (0x0006f99c) main_cf0_pane_t1

0xe4f1,	// (0x0006f9b0) main_cf0_pane_t2_ParamLimits

0xe4f1,	// (0x0006f9b0) main_cf0_pane_t2

0x0001,

0xfecf,	// (0x0007138e) main_cf0_pane_t_ParamLimits

0xfecf,	// (0x0007138e) main_cf0_pane_t

0x32ba,	// (0x00064779) scroll_pane_cp11

0xe505,	// (0x0006f9c4) cf0_flow_pane_g1

0xe50d,	// (0x0006f9cc) cf0_flow_pane_g2

0x0001,

0xfed4,	// (0x00071393) cf0_flow_pane_g

0xe515,	// (0x0006f9d4) cf0_flow_pane_t1

0x011a,	// (0x000615d9) main_call6_pane

0x011a,	// (0x000615d9) main_calllock_pane

0xe523,	// (0x0006f9e2) call6_btn_grp_pane_ParamLimits

0xe523,	// (0x0006f9e2) call6_btn_grp_pane

0xe532,	// (0x0006f9f1) call6_pane_g1_ParamLimits

0xe532,	// (0x0006f9f1) call6_pane_g1

0xe541,	// (0x0006fa00) popup_call6_1st_window_ParamLimits

0xe541,	// (0x0006fa00) popup_call6_1st_window

0xe54f,	// (0x0006fa0e) popup_call6_2nd_window_ParamLimits

0xe54f,	// (0x0006fa0e) popup_call6_2nd_window

0xe55d,	// (0x0006fa1c) cell_call6_btn_pane_ParamLimits

0xe55d,	// (0x0006fa1c) cell_call6_btn_pane

0x7ecf,	// (0x0006938e) bg_popup_call2_in_pane_cp03

0x32c5,	// (0x00064784) popup_call6_1st_window_g1

0x32cd,	// (0x0006478c) popup_call6_1st_window_g2

0x32d5,	// (0x00064794) popup_call6_1st_window_g3

0x0002,

0xfed9,	// (0x00071398) popup_call6_1st_window_g

0x32dd,	// (0x0006479c) popup_call6_1st_window_t1

0x32ec,	// (0x000647ab) popup_call6_1st_window_t2

0x32fc,	// (0x000647bb) popup_call6_1st_window_t3

0x0002,

0xfee0,	// (0x0007139f) popup_call6_1st_window_t

0x7ecf,	// (0x0006938e) bg_popup_call2_in_pane_cp04

0x32c5,	// (0x00064784) popup_call6_2nd_window_g1

0x32cd,	// (0x0006478c) popup_call6_2nd_window_g2

0x32d5,	// (0x00064794) popup_call6_2nd_window_g3

0x0002,

0xfed9,	// (0x00071398) popup_call6_2nd_window_g

0x32dd,	// (0x0006479c) popup_call6_2nd_window_t1

0x011a,	// (0x000615d9) bg_button_pane_cp15

0x330c,	// (0x000647cb) cell_call6_btn_pane_g1

0x3315,	// (0x000647d4) cell_call6_btn_pane_t1

0xe56c,	// (0x0006fa2b) listscroll_wgtman_pane_ParamLimits

0xe56c,	// (0x0006fa2b) listscroll_wgtman_pane

0xe58a,	// (0x0006fa49) wgtman_btn_pane_ParamLimits

0xe58a,	// (0x0006fa49) wgtman_btn_pane

0x7ad8,	// (0x00068f97) aid_scroll_copy1

0x3324,	// (0x000647e3) list_wgtman_pane

0xe5bf,	// (0x0006fa7e) wgtman_btn_pane_g1_ParamLimits

0xe5bf,	// (0x0006fa7e) wgtman_btn_pane_g1

0xe5e7,	// (0x0006faa6) wgtman_btn_pane_t1_ParamLimits

0xe5e7,	// (0x0006faa6) wgtman_btn_pane_t1

0x332e,	// (0x000647ed) wgtman_btn_pane_t2_ParamLimits

0x332e,	// (0x000647ed) wgtman_btn_pane_t2

0x0001,

0xfee7,	// (0x000713a6) wgtman_btn_pane_t_ParamLimits

0xfee7,	// (0x000713a6) wgtman_btn_pane_t

0xe61e,	// (0x0006fadd) listrow_wgtman_pane_ParamLimits

0xe61e,	// (0x0006fadd) listrow_wgtman_pane

0xe639,	// (0x0006faf8) listrow_wgtman_pane_g1

0xe642,	// (0x0006fb01) listrow_wgtman_pane_g2

0x0001,

0xfeec,	// (0x000713ab) listrow_wgtman_pane_g

0x56b7,	// (0x00066b76) listrow_wgtman_pane_t1

0x56c5,	// (0x00066b84) listrow_wgtman_pane_t2

0x0001,

0xfef1,	// (0x000713b0) listrow_wgtman_pane_t

0xe64c,	// (0x0006fb0b) wait_bar_pane_cp09

0x3345,	// (0x00064804) main_calllock_btn_pane

0x334f,	// (0x0006480e) main_calllock_pane_g1

0x011a,	// (0x000615d9) bg_button_pane_cp17

0x335b,	// (0x0006481a) main_calllock_btn_pane_g1

0x3364,	// (0x00064823) main_calllock_btn_pane_t1

0x011a,	// (0x000615d9) main_dialer3_pane

0x011a,	// (0x000615d9) main_fmrd2_pane

0xec13,	// (0x000700d2) main_fs_bigclock_unlock_btn_pane_g1

0x337b,	// (0x0006483a) main_fs_bigclock_unlock_btn_pane_t1

0xe654,	// (0x0006fb13) area_fmrd2_info_pane_ParamLimits

0xe654,	// (0x0006fb13) area_fmrd2_info_pane

0xe662,	// (0x0006fb21) area_fmrd2_visual_pane_ParamLimits

0xe662,	// (0x0006fb21) area_fmrd2_visual_pane

0xe670,	// (0x0006fb2f) fmrd2_indi_pane_ParamLimits

0xe670,	// (0x0006fb2f) fmrd2_indi_pane

0xe67d,	// (0x0006fb3c) area_fmrd2_visual_pane_g1

0xe685,	// (0x0006fb44) area_fmrd2_visual_pane_t1

0xe695,	// (0x0006fb54) area_fmrd2_visual_pane_t2

0xe6a5,	// (0x0006fb64) area_fmrd2_visual_pane_t3

0x0002,

0xfefb,	// (0x000713ba) area_fmrd2_visual_pane_t

0xe6b5,	// (0x0006fb74) area_fmrd2_info_pane_g1

0xe6bd,	// (0x0006fb7c) area_fmrd2_info_pane_t1

0xe6cd,	// (0x0006fb8c) area_fmrd2_info_pane_t2

0xe6dd,	// (0x0006fb9c) area_fmrd2_info_pane_t3

0xe6ed,	// (0x0006fbac) area_fmrd2_info_pane_t4

0x0003,

0xff02,	// (0x000713c1) area_fmrd2_info_pane_t

0xe6fb,	// (0x0006fbba) fmrd2_indi_pane_t1

0xe70b,	// (0x0006fbca) fmrd2_indi_pane_t2

0xe71b,	// (0x0006fbda) fmrd2_indi_pane_t3

0x0002,

0xff0b,	// (0x000713ca) fmrd2_indi_pane_t

0x2550,	// (0x00063a0f) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x2550,	// (0x00063a0f) list_single_fs_bigclock_indicator_pane_g5

0x25f4,	// (0x00063ab3) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x25f4,	// (0x00063ab3) list_single_fs_bigclock_indicator_pane_t5

0xe072,	// (0x0006f531) aid_cell_bcale_month_pane_ParamLimits

0xe072,	// (0x0006f531) aid_cell_bcale_month_pane

0xe07e,	// (0x0006f53d) bcale_month_pane_ParamLimits

0xe07e,	// (0x0006f53d) bcale_month_pane

0xe08c,	// (0x0006f54b) bcale_preview_pane_ParamLimits

0xe08c,	// (0x0006f54b) bcale_preview_pane

0x310e,	// (0x000645cd) list_single_fs_bigclock_pane_t1_ParamLimits

0x3128,	// (0x000645e7) list_single_fs_bigclock_pane_t2_ParamLimits

0x3128,	// (0x000645e7) list_single_fs_bigclock_pane_t2

0x0001,

0xfe92,	// (0x00071351) list_single_fs_bigclock_pane_t_ParamLimits

0xfe92,	// (0x00071351) list_single_fs_bigclock_pane_t

0x3373,	// (0x00064832) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfef6,	// (0x000713b5) main_fs_bigclock_unlock_btn_pane_g

0xe729,	// (0x0006fbe8) aid_dia3_key_size_ParamLimits

0xe729,	// (0x0006fbe8) aid_dia3_key_size

0xe735,	// (0x0006fbf4) aid_dia3_listrow_size_ParamLimits

0xe735,	// (0x0006fbf4) aid_dia3_listrow_size

0xe745,	// (0x0006fc04) dia3_keypad_fun_pane_ParamLimits

0xe745,	// (0x0006fc04) dia3_keypad_fun_pane

0xe757,	// (0x0006fc16) dia3_keypad_num_pane_ParamLimits

0xe757,	// (0x0006fc16) dia3_keypad_num_pane

0xe769,	// (0x0006fc28) dia3_listscroll_pane_ParamLimits

0xe769,	// (0x0006fc28) dia3_listscroll_pane

0xe777,	// (0x0006fc36) dia3_numentry_pane_ParamLimits

0xe777,	// (0x0006fc36) dia3_numentry_pane

0x3389,	// (0x00064848) dia3_list_pane

0x3394,	// (0x00064853) scroll_pane_cp12

0x011a,	// (0x000615d9) bg_dia3_numentry_pane

0xe785,	// (0x0006fc44) dia3_numentry_pane_t1

0xe794,	// (0x0006fc53) cell_dia3_key_num_pane

0xe79c,	// (0x0006fc5b) cell_dia3_key0_fun_pane_ParamLimits

0xe79c,	// (0x0006fc5b) cell_dia3_key0_fun_pane

0xe7a9,	// (0x0006fc68) cell_dia3_key1_fun_pane_ParamLimits

0xe7a9,	// (0x0006fc68) cell_dia3_key1_fun_pane

0xe7b6,	// (0x0006fc75) dia3_listrow_pane

0x2270,	// (0x0006372f) bg_dia3_numentry_pane_g1

0x011a,	// (0x000615d9) bg_button_pane_cp21

0x339f,	// (0x0006485e) cell_dia3_key_num_pane_t1

0x33ad,	// (0x0006486c) cell_dia3_key_num_pane_t2

0x33bc,	// (0x0006487b) cell_dia3_key_num_pane_t3

0x33cb,	// (0x0006488a) cell_dia3_key_num_pane_t4

0x0003,

0xff12,	// (0x000713d1) cell_dia3_key_num_pane_t

0x011a,	// (0x000615d9) bg_button_pane_cp19

0xe7c3,	// (0x0006fc82) cell_dia3_key0_fun_pane_g1

0x011a,	// (0x000615d9) bg_button_pane_cp20

0xe7cb,	// (0x0006fc8a) cell_dia3_key1_fun_pane_g1

0xe7d3,	// (0x0006fc92) area_left_week_number_pane

0xe33b,	// (0x0006f7fa) area_top_day_name_pane

0xe7dc,	// (0x0006fc9b) frame_month_view_pane

0xe7e6,	// (0x0006fca5) grid_month_view_pane

0xe7f0,	// (0x0006fcaf) cell_top_day_name_pane_ParamLimits

0xe7f0,	// (0x0006fcaf) cell_top_day_name_pane

0xe80a,	// (0x0006fcc9) cell_area_left_week_number_pane_ParamLimits

0xe80a,	// (0x0006fcc9) cell_area_left_week_number_pane

0xe81e,	// (0x0006fcdd) cell_month_view_pane_ParamLimits

0xe81e,	// (0x0006fcdd) cell_month_view_pane

0x33da,	// (0x00064899) frm_month_g1

0xe83b,	// (0x0006fcfa) frm_month_g2

0xe845,	// (0x0006fd04) frm_month_g3

0xe84f,	// (0x0006fd0e) frm_month_g4

0xe859,	// (0x0006fd18) frm_month_g5

0xe863,	// (0x0006fd22) frm_month_g6

0xe86d,	// (0x0006fd2c) frm_month_g7

0x33e3,	// (0x000648a2) frm_month_g8

0xe877,	// (0x0006fd36) frm_month_g9

0xe880,	// (0x0006fd3f) frm_month_g10

0xe889,	// (0x0006fd48) frm_month_g11

0xe892,	// (0x0006fd51) frm_month_g12

0xe89b,	// (0x0006fd5a) frm_month_g13

0xe8a4,	// (0x0006fd63) frm_month_g14

0xe8ad,	// (0x0006fd6c) frm_month_g15

0xe8b8,	// (0x0006fd77) frm_month_g16

0x000f,

0xff1b,	// (0x000713da) frm_month_g

0xe8c3,	// (0x0006fd82) cell_top_day_name_pane_t1

0xe8d2,	// (0x0006fd91) cell_area_left_week_number_pane_g1

0xe8c3,	// (0x0006fd82) cell_area_left_week_number_pane_t1

0xec13,	// (0x000700d2) cell_month_view_pane_g1

0xe8da,	// (0x0006fd99) cell_month_view_pane_t1

0x011a,	// (0x000615d9) main_fps_pane

0x282e,	// (0x00063ced) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x282e,	// (0x00063ced) cmail_ddmenu_btn02_pane_cp1

0x284a,	// (0x00063d09) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x284a,	// (0x00063d09) cmail_ddmenu_btn02_pane_cp2

0xe23a,	// (0x0006f6f9) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xe23a,	// (0x0006f6f9) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe43,	// (0x00071302) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe43,	// (0x00071302) cmail_ddmenu_btn02_pane_g

0xe258,	// (0x0006f717) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xe258,	// (0x0006f717) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe48,	// (0x00071307) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe48,	// (0x00071307) cmail_ddmenu_btn02_pane_t

0xe8e9,	// (0x0006fda8) fps_text_pane_ParamLimits

0xe8e9,	// (0x0006fda8) fps_text_pane

0xe8f6,	// (0x0006fdb5) main_fps_pane_g1_ParamLimits

0xe8f6,	// (0x0006fdb5) main_fps_pane_g1

0xe904,	// (0x0006fdc3) wait_bar_pane_cp010_ParamLimits

0xe904,	// (0x0006fdc3) wait_bar_pane_cp010

0xe910,	// (0x0006fdcf) fps_text_pane_t1_ParamLimits

0xe910,	// (0x0006fdcf) fps_text_pane_t1

0xc13d,	// (0x0006d5fc) cam4_image_uncrop_pane_g1

0xc146,	// (0x0006d605) cam4_image_uncrop_pane_g2

0xc14f,	// (0x0006d60e) cam4_image_uncrop_pane_g3

0xc158,	// (0x0006d617) cam4_image_uncrop_pane_g4

0x0003,

0xf91c,	// (0x00070ddb) cam4_image_uncrop_pane_g

0xe7b6,	// (0x0006fc75) dia3_listrow_pane_ParamLimits

0x011a,	// (0x000615d9) main_phob2_pane

0xdedb,	// (0x0006f39a) cell_tport_appsw_pane_cp02_ParamLimits

0xdedb,	// (0x0006f39a) cell_tport_appsw_pane_cp02

0xdeea,	// (0x0006f3a9) cell_tport_appsw_pane_cp03_ParamLimits

0xdeea,	// (0x0006f3a9) cell_tport_appsw_pane_cp03

0x011a,	// (0x000615d9) phob2_contact_card_pane

0x011a,	// (0x000615d9) phob2_listscroll_pane

0xe929,	// (0x0006fde8) phob2_list_pane

0xe931,	// (0x0006fdf0) scroll_pane_cp034

0xe939,	// (0x0006fdf8) phob2_cc_data_pane_ParamLimits

0xe939,	// (0x0006fdf8) phob2_cc_data_pane

0xe953,	// (0x0006fe12) phob2_cc_listscroll_pane_ParamLimits

0xe953,	// (0x0006fe12) phob2_cc_listscroll_pane

0xe96d,	// (0x0006fe2c) list_double_large_graphic_phob2_pane_ParamLimits

0xe96d,	// (0x0006fe2c) list_double_large_graphic_phob2_pane

0xe98b,	// (0x0006fe4a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xe98b,	// (0x0006fe4a) list_double_large_graphic_phob2_pane_g1

0x56d3,	// (0x00066b92) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x56d3,	// (0x00066b92) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff3c,	// (0x000713fb) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff3c,	// (0x000713fb) list_double_large_graphic_phob2_pane_g

0x56df,	// (0x00066b9e) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x56df,	// (0x00066b9e) list_double_large_graphic_phob2_pane_t1

0x56f4,	// (0x00066bb3) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x56f4,	// (0x00066bb3) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff41,	// (0x00071400) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff41,	// (0x00071400) list_double_large_graphic_phob2_pane_t

0x011a,	// (0x000615d9) list_highlight_pane_cp024

0xe998,	// (0x0006fe57) phob2_cc_button_pane

0xe9a0,	// (0x0006fe5f) phob2_cc_data_pane_g1_ParamLimits

0xe9a0,	// (0x0006fe5f) phob2_cc_data_pane_g1

0xe9ac,	// (0x0006fe6b) phob2_cc_data_pane_g2_ParamLimits

0xe9ac,	// (0x0006fe6b) phob2_cc_data_pane_g2

0x0001,

0xff46,	// (0x00071405) phob2_cc_data_pane_g_ParamLimits

0xff46,	// (0x00071405) phob2_cc_data_pane_g

0xe9b8,	// (0x0006fe77) phob2_cc_data_pane_t1_ParamLimits

0xe9b8,	// (0x0006fe77) phob2_cc_data_pane_t1

0xe9ca,	// (0x0006fe89) phob2_cc_data_pane_t2_ParamLimits

0xe9ca,	// (0x0006fe89) phob2_cc_data_pane_t2

0xe9dc,	// (0x0006fe9b) phob2_cc_data_pane_t3_ParamLimits

0xe9dc,	// (0x0006fe9b) phob2_cc_data_pane_t3

0x0002,

0xff4b,	// (0x0007140a) phob2_cc_data_pane_t_ParamLimits

0xff4b,	// (0x0007140a) phob2_cc_data_pane_t

0xe9ee,	// (0x0006fead) phob2_cc_list_pane_ParamLimits

0xe9ee,	// (0x0006fead) phob2_cc_list_pane

0xe9fa,	// (0x0006feb9) scroll_pane_cp035_ParamLimits

0xe9fa,	// (0x0006feb9) scroll_pane_cp035

0x9f3f,	// (0x0006b3fe) bg_button_pane_cp033

0xea06,	// (0x0006fec5) phob2_cc_button_pane_g1

0xea12,	// (0x0006fed1) phob2_cc_button_pane_t1

0xea27,	// (0x0006fee6) phob2_cc_button_pane_t2

0x0001,

0xff52,	// (0x00071411) phob2_cc_button_pane_t

0xea39,	// (0x0006fef8) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xea39,	// (0x0006fef8) list_double_large_graphic_phob2_cc_pane

0xea60,	// (0x0006ff1f) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xea60,	// (0x0006ff1f) list_double_large_graphic_phob2_cc_pane_g1

0x5706,	// (0x00066bc5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x5706,	// (0x00066bc5) list_double_large_graphic_phob2_cc_pane_g2

0x5715,	// (0x00066bd4) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x5715,	// (0x00066bd4) list_double_large_graphic_phob2_cc_pane_g3

0x5724,	// (0x00066be3) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x5724,	// (0x00066be3) list_double_large_graphic_phob2_cc_pane_g4

0x5735,	// (0x00066bf4) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x5735,	// (0x00066bf4) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff57,	// (0x00071416) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff57,	// (0x00071416) list_double_large_graphic_phob2_cc_pane_g

0x5744,	// (0x00066c03) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x5744,	// (0x00066c03) list_double_large_graphic_phob2_cc_pane_t1

0x576d,	// (0x00066c2c) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x576d,	// (0x00066c2c) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff62,	// (0x00071421) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff62,	// (0x00071421) list_double_large_graphic_phob2_cc_pane_t

0xea71,	// (0x0006ff30) list_highlight_pane_cp025_ParamLimits

0xea71,	// (0x0006ff30) list_highlight_pane_cp025

0x9f3f,	// (0x0006b3fe) bg_button_pane_cp033_ParamLimits

0xea06,	// (0x0006fec5) phob2_cc_button_pane_g1_ParamLimits

0xea12,	// (0x0006fed1) phob2_cc_button_pane_t1_ParamLimits

0xea27,	// (0x0006fee6) phob2_cc_button_pane_t2_ParamLimits

0xff52,	// (0x00071411) phob2_cc_button_pane_t_ParamLimits

0x5a11,	// (0x00066ed0) popup_wgtman_window

0x16fe,	// (0x00062bbd) scroll_pane_cp038

0xe5a7,	// (0x0006fa66) wgtman_btn_pane_cp_01_ParamLimits

0xe5a7,	// (0x0006fa66) wgtman_btn_pane_cp_01

0xea7f,	// (0x0006ff3e) wgtman_content_pane

0xea88,	// (0x0006ff47) wgtman_heading_pane

0x011a,	// (0x000615d9) bg_heading_pane_cp02

0xea91,	// (0x0006ff50) wgtman_heading_pane_g1

0xea99,	// (0x0006ff58) wgtman_heading_pane_t1

0xeaa7,	// (0x0006ff66) scroll_pane_cp036

0xeaaf,	// (0x0006ff6e) wgtman_list_pane

0xeab7,	// (0x0006ff76) wgtman_list_pane_t1_ParamLimits

0xeab7,	// (0x0006ff76) wgtman_list_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Elaf_php_apps_qhd_prt_tch_Large

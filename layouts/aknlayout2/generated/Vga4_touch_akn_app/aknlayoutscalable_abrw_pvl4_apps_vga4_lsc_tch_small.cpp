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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0005b9e9 };

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
0x0b4f,	// (0x0005c538) Screen

0x0b5b,	// (0x0005c544) application_window

0x0bcd,	// (0x0005c5b6) area_bottom_pane_ParamLimits

0x0bcd,	// (0x0005c5b6) area_bottom_pane

0x0c2b,	// (0x0005c614) area_top_pane_ParamLimits

0x0c2b,	// (0x0005c614) area_top_pane

0x0c88,	// (0x0005c671) call_video_uplink_pane_ParamLimits

0x0c88,	// (0x0005c671) call_video_uplink_pane

0x0cb4,	// (0x0005c69d) main_pane_ParamLimits

0x0cb4,	// (0x0005c69d) main_pane

0xbf46,	// (0x0006792f) context_pane

0x415c,	// (0x0005fb45) navi_pane

0x418c,	// (0x0005fb75) popup_cale_events_window_ParamLimits

0x418c,	// (0x0005fb75) popup_cale_events_window

0xbf59,	// (0x00067942) popup_mup_playback_window

0x41a4,	// (0x0005fb8d) signal_pane

0x9eb9,	// (0x000658a2) main_browser_pane

0xaa88,	// (0x00066471) main_burst_pane

0x3e5e,	// (0x0005f847) main_calc_pane

0xaa88,	// (0x00066471) main_cale_day_pane

0x9eb9,	// (0x000658a2) main_cale_month_pane

0xaa88,	// (0x00066471) main_cale_week_pane

0xaa88,	// (0x00066471) main_call_pane

0x9b67,	// (0x00065550) main_call_poc_pane

0xaa88,	// (0x00066471) main_camera_pane

0xaa88,	// (0x00066471) main_chi_dic_pane

0xa92a,	// (0x00066313) main_clock_pane

0x9b67,	// (0x00065550) main_fmradio_pane

0xaa88,	// (0x00066471) main_graph_messa_pane

0x9b67,	// (0x00065550) main_help_pane

0x9eb9,	// (0x000658a2) main_im_pane

0x9dc2,	// (0x000657ab) main_image_pane_ParamLimits

0x9dc2,	// (0x000657ab) main_image_pane

0x9b67,	// (0x00065550) main_location2_pane

0xaa88,	// (0x00066471) main_location_pane

0x9b67,	// (0x00065550) main_messa_pane

0x9b67,	// (0x00065550) main_mp2_pane

0xaa88,	// (0x00066471) main_mp_pane

0x9b67,	// (0x00065550) main_msg_pane

0x9b67,	// (0x00065550) main_mup_eq_pane

0x9b67,	// (0x00065550) main_mup_pane

0xaa88,	// (0x00066471) main_notes_pane

0x9b67,	// (0x00065550) main_pec_pane

0x9b67,	// (0x00065550) main_phob_pane

0x9b67,	// (0x00065550) main_pinb_pane

0x9b67,	// (0x00065550) main_postcard_pane

0x9b67,	// (0x00065550) main_qdial_pane

0xaa88,	// (0x00066471) main_skin_pane

0x9b67,	// (0x00065550) main_smil2_pane

0xaa88,	// (0x00066471) main_smil_pane

0xaa88,	// (0x00066471) main_video_pane

0xaa88,	// (0x00066471) main_video_tele_pane

0x9dc2,	// (0x000657ab) main_viewer_pane_ParamLimits

0x9dc2,	// (0x000657ab) main_viewer_pane

0xaa88,	// (0x00066471) main_vorec_pane

0x3eb4,	// (0x0005f89d) popup_blid_sat_info_window_ParamLimits

0x3eb4,	// (0x0005f89d) popup_blid_sat_info_window

0x3f18,	// (0x0005f901) popup_dyc_status_message_window_ParamLimits

0x3f18,	// (0x0005f901) popup_dyc_status_message_window

0x3f32,	// (0x0005f91b) popup_grid_large_graphic_window_ParamLimits

0x3f32,	// (0x0005f91b) popup_grid_large_graphic_window

0x3ff4,	// (0x0005f9dd) popup_loc_request_window_ParamLimits

0x3ff4,	// (0x0005f9dd) popup_loc_request_window

0x4130,	// (0x0005fb19) popup_wml_address_window_ParamLimits

0x4130,	// (0x0005fb19) popup_wml_address_window

0x3c9c,	// (0x0005f685) call_muted_g1

0x392d,	// (0x0005f316) popup_call_audio_conf_window_ParamLimits

0x392d,	// (0x0005f316) popup_call_audio_conf_window

0x3cac,	// (0x0005f695) popup_call_audio_first_window_ParamLimits

0x3cac,	// (0x0005f695) popup_call_audio_first_window

0x3d22,	// (0x0005f70b) popup_call_audio_in_window_ParamLimits

0x3d22,	// (0x0005f70b) popup_call_audio_in_window

0x3d5e,	// (0x0005f747) popup_call_audio_out_window_ParamLimits

0x3d5e,	// (0x0005f747) popup_call_audio_out_window

0x3d98,	// (0x0005f781) popup_call_audio_second_window_ParamLimits

0x3d98,	// (0x0005f781) popup_call_audio_second_window

0x3dee,	// (0x0005f7d7) popup_call_audio_wait_window_ParamLimits

0x3dee,	// (0x0005f7d7) popup_call_audio_wait_window

0x3e23,	// (0x0005f80c) popup_number_entry_window_ParamLimits

0x3e23,	// (0x0005f80c) popup_number_entry_window

0x0e56,	// (0x0005c83f) bg_popup_call_pane_cp05_ParamLimits

0x0e56,	// (0x0005c83f) bg_popup_call_pane_cp05

0x0e76,	// (0x0005c85f) popup_number_entry_window_t1

0x0e89,	// (0x0005c872) popup_number_entry_window_t2

0x0e9b,	// (0x0005c884) popup_number_entry_window_t3

0x0003,

0xf0ec,	// (0x0006aad5) popup_number_entry_window_t

0x0ee2,	// (0x0005c8cb) text_title_cp2

0x0ef5,	// (0x0005c8de) bg_popup_call_pane_cp_ParamLimits

0x0ef5,	// (0x0005c8de) bg_popup_call_pane_cp

0x0f03,	// (0x0005c8ec) call_thumbnail_pane

0x0f0b,	// (0x0005c8f4) popup_call_audio_in_window_g1_ParamLimits

0x0f0b,	// (0x0005c8f4) popup_call_audio_in_window_g1

0x0f17,	// (0x0005c900) popup_call_audio_in_window_g2_ParamLimits

0x0f17,	// (0x0005c900) popup_call_audio_in_window_g2

0x0f23,	// (0x0005c90c) popup_call_audio_in_window_g3_ParamLimits

0x0f23,	// (0x0005c90c) popup_call_audio_in_window_g3

0x0002,

0xf0f5,	// (0x0006aade) popup_call_audio_in_window_g_ParamLimits

0xf0f5,	// (0x0006aade) popup_call_audio_in_window_g

0x0f2f,	// (0x0005c918) popup_call_audio_in_window_t1_ParamLimits

0x0f2f,	// (0x0005c918) popup_call_audio_in_window_t1

0x0f4b,	// (0x0005c934) popup_call_audio_in_window_t2_ParamLimits

0x0f4b,	// (0x0005c934) popup_call_audio_in_window_t2

0x9830,	// (0x00065219) popup_call_audio_in_window_t3_ParamLimits

0x9830,	// (0x00065219) popup_call_audio_in_window_t3

0x0002,

0xf0fc,	// (0x0006aae5) popup_call_audio_in_window_t_ParamLimits

0xf0fc,	// (0x0006aae5) popup_call_audio_in_window_t

0x0ef5,	// (0x0005c8de) bg_popup_call_pane_cp01_ParamLimits

0x0ef5,	// (0x0005c8de) bg_popup_call_pane_cp01

0x0f03,	// (0x0005c8ec) call_thumbnail_pane_cp02

0x9843,	// (0x0006522c) call_type_pane_cp022

0x984b,	// (0x00065234) popup_call_audio_out_window_g1_ParamLimits

0x984b,	// (0x00065234) popup_call_audio_out_window_g1

0x985d,	// (0x00065246) popup_call_audio_out_window_g2_ParamLimits

0x985d,	// (0x00065246) popup_call_audio_out_window_g2

0x9869,	// (0x00065252) popup_call_audio_out_window_g3_ParamLimits

0x9869,	// (0x00065252) popup_call_audio_out_window_g3

0x0002,

0xf103,	// (0x0006aaec) popup_call_audio_out_window_g_ParamLimits

0xf103,	// (0x0006aaec) popup_call_audio_out_window_g

0x987b,	// (0x00065264) popup_call_audio_out_window_t1_ParamLimits

0x987b,	// (0x00065264) popup_call_audio_out_window_t1

0x9893,	// (0x0006527c) popup_call_audio_out_window_t2_ParamLimits

0x9893,	// (0x0006527c) popup_call_audio_out_window_t2

0x0001,

0xf10a,	// (0x0006aaf3) popup_call_audio_out_window_t_ParamLimits

0xf10a,	// (0x0006aaf3) popup_call_audio_out_window_t

0x98a8,	// (0x00065291) bg_popup_call_pane_ParamLimits

0x98a8,	// (0x00065291) bg_popup_call_pane

0x0f67,	// (0x0005c950) call_thumbnail_pane_cp_ParamLimits

0x0f67,	// (0x0005c950) call_thumbnail_pane_cp

0x992c,	// (0x00065315) call_type_pane_cp01_ParamLimits

0x992c,	// (0x00065315) call_type_pane_cp01

0x9970,	// (0x00065359) popup_call_audio_first_window_g1_ParamLimits

0x9970,	// (0x00065359) popup_call_audio_first_window_g1

0x99bc,	// (0x000653a5) popup_call_audio_first_window_g2_ParamLimits

0x99bc,	// (0x000653a5) popup_call_audio_first_window_g2

0x0001,

0xf10f,	// (0x0006aaf8) popup_call_audio_first_window_g_ParamLimits

0xf10f,	// (0x0006aaf8) popup_call_audio_first_window_g

0x9a00,	// (0x000653e9) popup_call_audio_first_window_t1_ParamLimits

0x9a00,	// (0x000653e9) popup_call_audio_first_window_t1

0x9aac,	// (0x00065495) popup_call_audio_first_window_t4_ParamLimits

0x9aac,	// (0x00065495) popup_call_audio_first_window_t4

0x9b38,	// (0x00065521) popup_call_audio_first_window_t5_ParamLimits

0x9b38,	// (0x00065521) popup_call_audio_first_window_t5

0x0002,

0xf114,	// (0x0006aafd) popup_call_audio_first_window_t_ParamLimits

0xf114,	// (0x0006aafd) popup_call_audio_first_window_t

0x9b67,	// (0x00065550) bg_popup_call_pane_cp02

0x9b71,	// (0x0006555a) call_type_pane_cp023

0x9b79,	// (0x00065562) popup_call_audio_wait_window_g1

0x9b81,	// (0x0006556a) popup_call_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006ab04) popup_call_audio_wait_window_g

0x9b89,	// (0x00065572) popup_call_audio_wait_window_t3

0x9b97,	// (0x00065580) bg_popup_call_pane_cp03_ParamLimits

0x9b97,	// (0x00065580) bg_popup_call_pane_cp03

0x9bf7,	// (0x000655e0) call_thumbnail_pane_cp011_ParamLimits

0x9bf7,	// (0x000655e0) call_thumbnail_pane_cp011

0x9c03,	// (0x000655ec) call_type_pane_cp034_ParamLimits

0x9c03,	// (0x000655ec) call_type_pane_cp034

0x9c3f,	// (0x00065628) popup_call_audio_second_window_g1_ParamLimits

0x9c3f,	// (0x00065628) popup_call_audio_second_window_g1

0x9c7b,	// (0x00065664) popup_call_audio_second_window_g2_ParamLimits

0x9c7b,	// (0x00065664) popup_call_audio_second_window_g2

0x0001,

0xf120,	// (0x0006ab09) popup_call_audio_second_window_g_ParamLimits

0xf120,	// (0x0006ab09) popup_call_audio_second_window_g

0x9cb7,	// (0x000656a0) popup_call_audio_second_window_t1_ParamLimits

0x9cb7,	// (0x000656a0) popup_call_audio_second_window_t1

0x9d38,	// (0x00065721) popup_call_audio_second_window_t2_ParamLimits

0x9d38,	// (0x00065721) popup_call_audio_second_window_t2

0x9d6e,	// (0x00065757) popup_call_audio_second_window_t3_ParamLimits

0x9d6e,	// (0x00065757) popup_call_audio_second_window_t3

0x0002,

0xf125,	// (0x0006ab0e) popup_call_audio_second_window_t_ParamLimits

0xf125,	// (0x0006ab0e) popup_call_audio_second_window_t

0x9b67,	// (0x00065550) bg_popup_call_pane_cp04

0x9da4,	// (0x0006578d) list_conf_pane

0x9dac,	// (0x00065795) popup_call_audio_conf_window_t1

0x9dba,	// (0x000657a3) call_thumbnail_pane_g1

0x9dc2,	// (0x000657ab) bg_pinb_pane_ParamLimits

0x9dc2,	// (0x000657ab) bg_pinb_pane

0x9dd0,	// (0x000657b9) find_pinb_pane

0x9dd9,	// (0x000657c2) listscroll_pinb_pane_ParamLimits

0x9dd9,	// (0x000657c2) listscroll_pinb_pane

0x9de8,	// (0x000657d1) pinb_bg_pane_g1

0x0f8b,	// (0x0005c974) pinb_bg_pane_g2

0x0f97,	// (0x0005c980) pinb_bg_pane_g3

0x0fa3,	// (0x0005c98c) pinb_bg_pane_g4

0x0faf,	// (0x0005c998) pinb_bg_pane_g5

0x0fbb,	// (0x0005c9a4) pinb_bg_pane_g6

0x0fc6,	// (0x0005c9af) pinb_bg_pane_g7

0x0fd1,	// (0x0005c9ba) pinb_bg_pane_g8

0x0fdc,	// (0x0005c9c5) pinb_bg_pane_g9

0x0fe6,	// (0x0005c9cf) pinb_bg_pane_g10

0x0009,

0xf12c,	// (0x0006ab15) pinb_bg_pane_g

0x1003,	// (0x0005c9ec) grid_pinb_pane

0x100e,	// (0x0005c9f7) list_pinb_pane

0x1019,	// (0x0005ca02) scroll_pane_cp01_ParamLimits

0x1019,	// (0x0005ca02) scroll_pane_cp01

0x9df2,	// (0x000657db) find_pinb_pane_g1_ParamLimits

0x9df2,	// (0x000657db) find_pinb_pane_g1

0x9e0a,	// (0x000657f3) find_pinb_pane_t1

0x9e1c,	// (0x00065805) find_pinb_pane_t2

0x0001,

0xf146,	// (0x0006ab2f) find_pinb_pane_t

0x9e31,	// (0x0006581a) input_focus_pane_cp01_ParamLimits

0x9e31,	// (0x0006581a) input_focus_pane_cp01

0x102b,	// (0x0005ca14) cell_pinb_pane_ParamLimits

0x102b,	// (0x0005ca14) cell_pinb_pane

0x104d,	// (0x0005ca36) cell_pinb_pane_g1_ParamLimits

0x104d,	// (0x0005ca36) cell_pinb_pane_g1

0x1061,	// (0x0005ca4a) cell_pinb_pane_g2_ParamLimits

0x1061,	// (0x0005ca4a) cell_pinb_pane_g2

0x9e3d,	// (0x00065826) cell_pinb_pane_g3_ParamLimits

0x9e3d,	// (0x00065826) cell_pinb_pane_g3

0x0002,

0xf14b,	// (0x0006ab34) cell_pinb_pane_g_ParamLimits

0xf14b,	// (0x0006ab34) cell_pinb_pane_g

0x9b67,	// (0x00065550) grid_highlight_pane_cp01

0x106d,	// (0x0005ca56) list_pinb_item_pane_ParamLimits

0x106d,	// (0x0005ca56) list_pinb_item_pane

0x9b67,	// (0x00065550) list_highlight_pane_cp02

0x1080,	// (0x0005ca69) list_pinb_item_pane_g1_ParamLimits

0x1080,	// (0x0005ca69) list_pinb_item_pane_g1

0x108d,	// (0x0005ca76) list_pinb_item_pane_g2_ParamLimits

0x108d,	// (0x0005ca76) list_pinb_item_pane_g2

0x1099,	// (0x0005ca82) list_pinb_item_pane_g3_ParamLimits

0x1099,	// (0x0005ca82) list_pinb_item_pane_g3

0x10aa,	// (0x0005ca93) list_pinb_item_pane_g4_ParamLimits

0x10aa,	// (0x0005ca93) list_pinb_item_pane_g4

0x0003,

0xf152,	// (0x0006ab3b) list_pinb_item_pane_g_ParamLimits

0xf152,	// (0x0006ab3b) list_pinb_item_pane_g

0x10b6,	// (0x0005ca9f) list_pinb_item_pane_t1_ParamLimits

0x10b6,	// (0x0005ca9f) list_pinb_item_pane_t1

0x10eb,	// (0x0005cad4) calc_display_pane

0x1111,	// (0x0005cafa) calc_paper_pane

0x1134,	// (0x0005cb1d) grid_calc_pane

0x9b67,	// (0x00065550) bg_list_pane_cp01

0x1162,	// (0x0005cb4b) clock_g1

0x116a,	// (0x0005cb53) clock_g2

0x0001,

0xf15b,	// (0x0006ab44) clock_g

0x1172,	// (0x0005cb5b) clock_t1_ParamLimits

0x1172,	// (0x0005cb5b) clock_t1

0x1187,	// (0x0005cb70) clock_t2_ParamLimits

0x1187,	// (0x0005cb70) clock_t2

0x1199,	// (0x0005cb82) clock_t3_ParamLimits

0x1199,	// (0x0005cb82) clock_t3

0x11ab,	// (0x0005cb94) clock_t4_ParamLimits

0x11ab,	// (0x0005cb94) clock_t4

0x11bd,	// (0x0005cba6) clock_t5_ParamLimits

0x11bd,	// (0x0005cba6) clock_t5

0x11d2,	// (0x0005cbbb) clock_t6_ParamLimits

0x11d2,	// (0x0005cbbb) clock_t6

0x11e4,	// (0x0005cbcd) clock_t7_ParamLimits

0x11e4,	// (0x0005cbcd) clock_t7

0x11f6,	// (0x0005cbdf) clock_t8_ParamLimits

0x11f6,	// (0x0005cbdf) clock_t8

0x120a,	// (0x0005cbf3) clock_t9_ParamLimits

0x120a,	// (0x0005cbf3) clock_t9

0x0008,

0xf160,	// (0x0006ab49) clock_t_ParamLimits

0xf160,	// (0x0006ab49) clock_t

0x9e51,	// (0x0006583a) popup_clock_analogue_window_cp02

0x9e51,	// (0x0006583a) popup_clock_digital_window_cp01

0x9e59,	// (0x00065842) listscroll_help_pane

0x9b67,	// (0x00065550) phob_pre_status_pane

0x9e63,	// (0x0006584c) grid_qdial_pane

0x9b67,	// (0x00065550) listscroll_mce_pane

0x9e6d,	// (0x00065856) bg_notes_pane

0x9e77,	// (0x00065860) list_notes_pane

0x1220,	// (0x0005cc09) scroll_pane_cp06

0x9e81,	// (0x0006586a) bg_calc_paper_pane

0x9e9f,	// (0x00065888) list_calc_pane

0x9eb9,	// (0x000658a2) bg_calc_display_pane

0x122b,	// (0x0005cc14) calc_display_pane_t1

0x123d,	// (0x0005cc26) calc_display_pane_t2

0x9ec5,	// (0x000658ae) calc_display_pane_t3

0x0002,

0xf173,	// (0x0006ab5c) calc_display_pane_t

0x124f,	// (0x0005cc38) cell_calc_pane_ParamLimits

0x124f,	// (0x0005cc38) cell_calc_pane

0x9ed7,	// (0x000658c0) bg_calc_paper_pane_g1

0x9ee3,	// (0x000658cc) bg_calc_paper_pane_g2

0x9eef,	// (0x000658d8) bg_calc_paper_pane_g3

0x9efb,	// (0x000658e4) bg_calc_paper_pane_g4

0x9f07,	// (0x000658f0) bg_calc_paper_pane_g5

0x128a,	// (0x0005cc73) bg_calc_paper_pane_g6

0x129d,	// (0x0005cc86) bg_calc_paper_pane_g7

0x12b0,	// (0x0005cc99) bg_calc_paper_pane_g8

0x0007,

0xf17a,	// (0x0006ab63) bg_calc_paper_pane_g

0x12c1,	// (0x0005ccaa) calc_bg_paper_pane_g9

0x12d2,	// (0x0005ccbb) list_calc_item_pane_ParamLimits

0x12d2,	// (0x0005ccbb) list_calc_item_pane

0x9f13,	// (0x000658fc) list_calc_item_pane_g1

0x9f20,	// (0x00065909) list_calc_item_pane_t1_ParamLimits

0x9f20,	// (0x00065909) list_calc_item_pane_t1

0x12e6,	// (0x0005cccf) list_calc_item_pane_t2_ParamLimits

0x12e6,	// (0x0005cccf) list_calc_item_pane_t2

0x0001,

0xf18b,	// (0x0006ab74) list_calc_item_pane_t_ParamLimits

0xf18b,	// (0x0006ab74) list_calc_item_pane_t

0x9f32,	// (0x0006591b) cell_calc_pane_g1

0x9f3c,	// (0x00065925) grid_highlight_pane_cp02

0x9f5e,	// (0x00065947) bg_calc_display_pane_g1

0x9f67,	// (0x00065950) bg_calc_display_pane_g2

0x9f71,	// (0x0006595a) bg_calc_display_pane_g3

0x0002,

0xf195,	// (0x0006ab7e) bg_calc_display_pane_g

0x1318,	// (0x0005cd01) cell_qdial_pane_ParamLimits

0x1318,	// (0x0005cd01) cell_qdial_pane

0x132e,	// (0x0005cd17) cell_qdial_pane_g1_ParamLimits

0x132e,	// (0x0005cd17) cell_qdial_pane_g1

0x1344,	// (0x0005cd2d) cell_qdial_pane_g2_ParamLimits

0x1344,	// (0x0005cd2d) cell_qdial_pane_g2

0x9f7a,	// (0x00065963) cell_qdial_pane_g3_ParamLimits

0x9f7a,	// (0x00065963) cell_qdial_pane_g3

0x0003,

0xf19c,	// (0x0006ab85) cell_qdial_pane_g_ParamLimits

0xf19c,	// (0x0006ab85) cell_qdial_pane_g

0x136a,	// (0x0005cd53) cell_qdial_pane_t1_ParamLimits

0x136a,	// (0x0005cd53) cell_qdial_pane_t1

0x1382,	// (0x0005cd6b) cell_qdial_pane_t2_ParamLimits

0x1382,	// (0x0005cd6b) cell_qdial_pane_t2

0x1395,	// (0x0005cd7e) cell_qdial_pane_t3_ParamLimits

0x1395,	// (0x0005cd7e) cell_qdial_pane_t3

0x0002,

0xf1a5,	// (0x0006ab8e) cell_qdial_pane_t_ParamLimits

0xf1a5,	// (0x0006ab8e) cell_qdial_pane_t

0x9b67,	// (0x00065550) grid_highlight_pane_cp04

0x9f86,	// (0x0006596f) thumbnail_qdial_pane_ParamLimits

0x9f86,	// (0x0006596f) thumbnail_qdial_pane

0x9fe2,	// (0x000659cb) list_help_pane

0x9feb,	// (0x000659d4) scroll_pane_cp02

0x13a8,	// (0x0005cd91) help_list_pane_t1_ParamLimits

0x13a8,	// (0x0005cd91) help_list_pane_t1

0x9ff4,	// (0x000659dd) bg_notes_pane_g2

0x9ffc,	// (0x000659e5) bg_notes_pane_g3

0xa004,	// (0x000659ed) notes_bg_pane_g1

0xa00c,	// (0x000659f5) notes_bg_pane_g4

0xa014,	// (0x000659fd) notes_bg_pane_g5

0xa01c,	// (0x00065a05) notes_bg_pane_g6

0xa024,	// (0x00065a0d) notes_bg_pane_g7

0xa02c,	// (0x00065a15) notes_bg_pane_g8

0xa034,	// (0x00065a1d) notes_bg_pane_g9

0x0006,

0xf1c3,	// (0x0006abac) notes_bg_pane_g

0x13cc,	// (0x0005cdb5) list_notes_text_pane_ParamLimits

0x13cc,	// (0x0005cdb5) list_notes_text_pane

0xa03c,	// (0x00065a25) list_notes_text_pane_g1

0x13e3,	// (0x0005cdcc) list_notes_text_pane_t1

0x9eb9,	// (0x000658a2) listscroll_cale_week_pane

0x140e,	// (0x0005cdf7) bg_cale_heading_pane

0xa056,	// (0x00065a3f) bg_cale_pane_cp01

0x142a,	// (0x0005ce13) cale_week_corner_pane

0x1440,	// (0x0005ce29) cale_week_day_heading_pane

0x145c,	// (0x0005ce45) cale_week_scroll_pane_g1

0x1475,	// (0x0005ce5e) cale_week_scroll_pane_g2

0x1486,	// (0x0005ce6f) cale_week_scroll_pane_g3

0x1497,	// (0x0005ce80) cale_week_scroll_pane_g4

0x14a8,	// (0x0005ce91) cale_week_scroll_pane_g5

0x14b9,	// (0x0005cea2) cale_week_scroll_pane_g6

0x14ca,	// (0x0005ceb3) cale_week_scroll_pane_g7

0x14db,	// (0x0005cec4) cale_week_scroll_pane_g8

0x14ec,	// (0x0005ced5) cale_week_scroll_pane_g9

0x14fd,	// (0x0005cee6) cale_week_scroll_pane_g10

0x150e,	// (0x0005cef7) cale_week_scroll_pane_g11

0x151f,	// (0x0005cf08) cale_week_scroll_pane_g12

0x1530,	// (0x0005cf19) cale_week_scroll_pane_g13

0x1549,	// (0x0005cf32) cale_week_scroll_pane_g14

0x1562,	// (0x0005cf4b) cale_week_scroll_pane_g15

0x000e,

0xf1d2,	// (0x0006abbb) cale_week_scroll_pane_g

0x157b,	// (0x0005cf64) cale_week_time_pane

0x158c,	// (0x0005cf75) grid_cale_week_pane

0x15a7,	// (0x0005cf90) scroll_pane_cp08

0x15bf,	// (0x0005cfa8) cell_cale_week_pane_ParamLimits

0x15bf,	// (0x0005cfa8) cell_cale_week_pane

0x1607,	// (0x0005cff0) cale_week_day_heading_pane_t1

0x161b,	// (0x0005d004) cale_week_day_heading_pane_t2

0x162f,	// (0x0005d018) cale_week_day_heading_pane_t3

0x1643,	// (0x0005d02c) cale_week_day_heading_pane_t4

0x1657,	// (0x0005d040) cale_week_day_heading_pane_t5

0x166b,	// (0x0005d054) cale_week_day_heading_pane_t6

0x167f,	// (0x0005d068) cale_week_day_heading_pane_t7

0x0006,

0xf1f1,	// (0x0006abda) cale_week_day_heading_pane_t

0xa081,	// (0x00065a6a) bg_cale_side_pane

0x1693,	// (0x0005d07c) cale_week_time_pane_t1

0x16ab,	// (0x0005d094) cale_week_time_pane_t2

0x16c3,	// (0x0005d0ac) cale_week_time_pane_t3

0x16db,	// (0x0005d0c4) cale_week_time_pane_t4

0x16f3,	// (0x0005d0dc) cale_week_time_pane_t5

0x170b,	// (0x0005d0f4) cale_week_time_pane_t6

0x1723,	// (0x0005d10c) cale_week_time_pane_t7

0x173f,	// (0x0005d128) cale_week_time_pane_t8

0x0007,

0xf200,	// (0x0006abe9) cale_week_time_pane_t

0x175f,	// (0x0005d148) cell_cale_week_pane_g2

0x1770,	// (0x0005d159) cell_cale_week_pane_g3_ParamLimits

0x1770,	// (0x0005d159) cell_cale_week_pane_g3

0xa08f,	// (0x00065a78) grid_highlight_pane_cp07

0xa097,	// (0x00065a80) listscroll_gms_pane

0xa0a1,	// (0x00065a8a) grid_gms_pane

0xa0aa,	// (0x00065a93) listscroll_gms_pane_g1

0xa0b2,	// (0x00065a9b) listscroll_gms_pane_g2

0x0001,

0xf211,	// (0x0006abfa) listscroll_gms_pane_g

0x1788,	// (0x0005d171) scroll_pane_cp010

0x1793,	// (0x0005d17c) cell_gms_pane_ParamLimits

0x1793,	// (0x0005d17c) cell_gms_pane

0x17ad,	// (0x0005d196) cell_gms_pane_g1

0xa0ba,	// (0x00065aa3) cell_gms_pane_g2

0xa0c2,	// (0x00065aab) cell_gms_pane_g3

0xa0cb,	// (0x00065ab4) cell_gms_pane_g4

0x0003,

0xf216,	// (0x0006abff) cell_gms_pane_g

0xa0d4,	// (0x00065abd) grid_highlight_pane_cp09

0x3c44,	// (0x0005f62d) phob_pre_status_pane_g1

0x3c4c,	// (0x0005f635) phob_pre_status_pane_g2

0x3c54,	// (0x0005f63d) phob_pre_status_pane_g3

0x3c5c,	// (0x0005f645) phob_pre_status_pane_g4

0x0004,

0xf605,	// (0x0006afee) phob_pre_status_pane_g

0x3c6c,	// (0x0005f655) phob_pre_status_pane_t1

0x3c7c,	// (0x0005f665) phob_pre_status_pane_t2

0x3c8c,	// (0x0005f675) phob_pre_status_pane_t3

0x0002,

0xf610,	// (0x0006aff9) phob_pre_status_pane_t

0x9b67,	// (0x00065550) bg_list_pane_cp05

0x17bd,	// (0x0005d1a6) grid_vorec_pane

0xa0dc,	// (0x00065ac5) vorec_t1

0xa0ea,	// (0x00065ad3) vorec_t2

0xa0f8,	// (0x00065ae1) vorec_t3

0xa106,	// (0x00065aef) vorec_t4

0xa114,	// (0x00065afd) vorec_t5

0xa122,	// (0x00065b0b) vorec_t6

0x0006,

0xf21f,	// (0x0006ac08) vorec_t

0xa13e,	// (0x00065b27) wait_bar_pane_cp01

0x17c7,	// (0x0005d1b0) cell_vorec_pane_ParamLimits

0x17c7,	// (0x0005d1b0) cell_vorec_pane

0xa146,	// (0x00065b2f) cell_vorec_pane_g1

0x9b67,	// (0x00065550) grid_highlight_pane_cp05

0x17f2,	// (0x0005d1db) cams_zoom_pane

0x1801,	// (0x0005d1ea) image_vga_pane

0x181b,	// (0x0005d204) main_camera_pane_g1

0x182d,	// (0x0005d216) main_camera_pane_g2

0x183d,	// (0x0005d226) main_camera_pane_g3

0x1851,	// (0x0005d23a) main_camera_pane_g4

0x1865,	// (0x0005d24e) main_camera_pane_g5

0x1879,	// (0x0005d262) main_camera_pane_g6

0x188d,	// (0x0005d276) main_camera_pane_g7

0x0007,

0xf22e,	// (0x0006ac17) main_camera_pane_g

0x18a1,	// (0x0005d28a) main_camera_pane_t1

0x18b7,	// (0x0005d2a0) main_camera_pane_t2

0x0001,

0xf23f,	// (0x0006ac28) main_camera_pane_t

0x18f5,	// (0x0005d2de) cams_zoom_pane_cp_ParamLimits

0x18f5,	// (0x0005d2de) cams_zoom_pane_cp

0x191d,	// (0x0005d306) image_cif_pane_ParamLimits

0x191d,	// (0x0005d306) image_cif_pane

0x1958,	// (0x0005d341) image_subqcif_pane

0x1962,	// (0x0005d34b) main_video_pane_g1_ParamLimits

0x1962,	// (0x0005d34b) main_video_pane_g1

0x1986,	// (0x0005d36f) main_video_pane_g2_ParamLimits

0x1986,	// (0x0005d36f) main_video_pane_g2

0x19bc,	// (0x0005d3a5) main_video_pane_g3_ParamLimits

0x19bc,	// (0x0005d3a5) main_video_pane_g3

0x19ea,	// (0x0005d3d3) main_video_pane_g4_ParamLimits

0x19ea,	// (0x0005d3d3) main_video_pane_g4

0x1a18,	// (0x0005d401) main_video_pane_g5_ParamLimits

0x1a18,	// (0x0005d401) main_video_pane_g5

0xa15c,	// (0x00065b45) main_video_pane_g6_ParamLimits

0xa15c,	// (0x00065b45) main_video_pane_g6

0x0006,

0xf244,	// (0x0006ac2d) main_video_pane_g_ParamLimits

0xf244,	// (0x0006ac2d) main_video_pane_g

0x1a41,	// (0x0005d42a) main_video_pane_t1_ParamLimits

0x1a41,	// (0x0005d42a) main_video_pane_t1

0xa176,	// (0x00065b5f) cams_zoom_pane_g1

0xa17f,	// (0x00065b68) cams_zoom_pane_g2

0xa188,	// (0x00065b71) cams_zoom_pane_g3

0xa191,	// (0x00065b7a) cams_zoom_pane_g4

0x0003,

0xf253,	// (0x0006ac3c) cams_zoom_pane_g

0x1a9e,	// (0x0005d487) grid_cams_pane

0x1ab8,	// (0x0005d4a1) linegrid_cams_pane

0x1acc,	// (0x0005d4b5) cell_cams_pane_ParamLimits

0x1acc,	// (0x0005d4b5) cell_cams_pane

0xa19a,	// (0x00065b83) cams_burst_image_pane

0xa1a2,	// (0x00065b8b) cell_cams_pane_g1

0x9b67,	// (0x00065550) grid_highlight_pane_cp03

0x9f32,	// (0x0006591b) mp_bg_pane_g1

0x9b67,	// (0x00065550) bg_list_pane_cp03

0xbe18,	// (0x00067801) bg_mp_pane

0xbe20,	// (0x00067809) grid_mp_pane

0xbe28,	// (0x00067811) media_player_g1

0xbe32,	// (0x0006781b) media_player_t1

0xbe40,	// (0x00067829) media_player_t2

0xbe4e,	// (0x00067837) media_player_t3

0xbe5c,	// (0x00067845) media_player_t4

0xbe6a,	// (0x00067853) media_player_t5

0xbe78,	// (0x00067861) media_player_t6

0xbe86,	// (0x0006786f) media_player_t7

0x0006,

0xf5ef,	// (0x0006afd8) media_player_t

0xbe94,	// (0x0006787d) wait_bar_pane_cp02

0xf5d4,	// (0x0006afbd) main_usb_pane_t

0x3c3b,	// (0x0005f624) cell_mp_pane

0x9f32,	// (0x0006591b) cell_mp_pane_g1

0x9b67,	// (0x00065550) grid_highlight_pane_cp06

0xa1aa,	// (0x00065b93) grid_skin_colour_pane

0xa1b2,	// (0x00065b9b) list_highlight_pane_cp03

0x1c05,	// (0x0005d5ee) skin_g1

0xa1ba,	// (0x00065ba3) skin_t1

0xa1c9,	// (0x00065bb2) skin_t2

0x0001,

0xf288,	// (0x0006ac71) skin_t

0x1c0f,	// (0x0005d5f8) cell_skin_colour_pane_ParamLimits

0x1c0f,	// (0x0005d5f8) cell_skin_colour_pane

0xa1d7,	// (0x00065bc0) cell_skin_colour_pane_g1

0x1c82,	// (0x0005d66b) call_video_g1_ParamLimits

0x1c82,	// (0x0005d66b) call_video_g1

0x1c9e,	// (0x0005d687) call_video_g2_ParamLimits

0x1c9e,	// (0x0005d687) call_video_g2

0x0001,

0xf28d,	// (0x0006ac76) call_video_g_ParamLimits

0xf28d,	// (0x0006ac76) call_video_g

0x1ce6,	// (0x0005d6cf) call_video_uplink_pane_cp1_ParamLimits

0x1ce6,	// (0x0005d6cf) call_video_uplink_pane_cp1

0xa1e9,	// (0x00065bd2) call_video_uplink_pane_cp2

0x1d87,	// (0x0005d770) video_down_crop_pane_ParamLimits

0x1d87,	// (0x0005d770) video_down_crop_pane

0x1e70,	// (0x0005d859) video_down_pane_ParamLimits

0x1e70,	// (0x0005d859) video_down_pane

0xa1f1,	// (0x00065bda) video_down_subqcif_pane_ParamLimits

0xa1f1,	// (0x00065bda) video_down_subqcif_pane

0xa20b,	// (0x00065bf4) video_down_subqcif_pane_cp_ParamLimits

0xa20b,	// (0x00065bf4) video_down_subqcif_pane_cp

0xa231,	// (0x00065c1a) im_reading_pane_ParamLimits

0xa231,	// (0x00065c1a) im_reading_pane

0x1f79,	// (0x0005d962) im_writing_pane_ParamLimits

0x1f79,	// (0x0005d962) im_writing_pane

0x1f97,	// (0x0005d980) im_reading_pane_t1

0xa24b,	// (0x00065c34) list_im_pane

0xa25c,	// (0x00065c45) scroll_pane_cp07

0x1fd6,	// (0x0005d9bf) im_writing_pane_t1_ParamLimits

0x1fd6,	// (0x0005d9bf) im_writing_pane_t1

0xa275,	// (0x00065c5e) im_writing_pane_t2_ParamLimits

0xa275,	// (0x00065c5e) im_writing_pane_t2

0x0001,

0xf297,	// (0x0006ac80) im_writing_pane_t_ParamLimits

0xf297,	// (0x0006ac80) im_writing_pane_t

0x9b67,	// (0x00065550) input_focus_pane_cp04

0x9b67,	// (0x00065550) input_focus_pane_cp05

0x1feb,	// (0x0005d9d4) list_im_single_pane_ParamLimits

0x1feb,	// (0x0005d9d4) list_im_single_pane

0x2004,	// (0x0005d9ed) list_single_im_pane_t1

0x3bfb,	// (0x0005f5e4) blid_accuracy_pane

0x3c03,	// (0x0005f5ec) blid_compass_pane

0x3c0d,	// (0x0005f5f6) main_location_t1

0x3c1d,	// (0x0005f606) main_location_t2

0x3c2d,	// (0x0005f616) main_location_t3

0x0002,

0xf5fe,	// (0x0006afe7) main_location_t

0x9b67,	// (0x00065550) aid_levels_location

0x9f32,	// (0x0006591b) blid_accuracy_pane_g1

0x9f32,	// (0x0006591b) blid_accuracy_pane_g2

0x0001,

0xf2f9,	// (0x0006ace2) blid_accuracy_pane_g

0xa2bd,	// (0x00065ca6) wml_content_pane

0xa2fb,	// (0x00065ce4) wml_button_pane_ParamLimits

0xa2fb,	// (0x00065ce4) wml_button_pane

0x2013,	// (0x0005d9fc) wml_list_single_large_pane_ParamLimits

0x2013,	// (0x0005d9fc) wml_list_single_large_pane

0x202c,	// (0x0005da15) wml_list_single_medium_pane_ParamLimits

0x202c,	// (0x0005da15) wml_list_single_medium_pane

0x2046,	// (0x0005da2f) wml_list_single_small_pane_ParamLimits

0x2046,	// (0x0005da2f) wml_list_single_small_pane

0xa30f,	// (0x00065cf8) wml_selection_box_pane_ParamLimits

0xa30f,	// (0x00065cf8) wml_selection_box_pane

0xa322,	// (0x00065d0b) wml_list_single_pane_t1

0xa331,	// (0x00065d1a) wml_list_single_medium_pane_t1

0xa340,	// (0x00065d29) wml_list_single_large_pane_t1

0xa34f,	// (0x00065d38) input_focus_pane_cp02_ParamLimits

0xa34f,	// (0x00065d38) input_focus_pane_cp02

0xa362,	// (0x00065d4b) wml_selection_box_pane_g1

0xa36b,	// (0x00065d54) wml_selection_box_pane_t1_ParamLimits

0xa36b,	// (0x00065d54) wml_selection_box_pane_t1

0x9dc2,	// (0x000657ab) bg_wml_button_pane_ParamLimits

0x9dc2,	// (0x000657ab) bg_wml_button_pane

0xa383,	// (0x00065d6c) wml_button_pane_g1

0xa38b,	// (0x00065d74) wml_button_pane_t1

0xa383,	// (0x00065d6c) wml_button_bg_pane_g1

0xa39b,	// (0x00065d84) wml_button_bg_pane_g2

0xa3a3,	// (0x00065d8c) wml_button_bg_pane_g3

0xa3ab,	// (0x00065d94) wml_button_bg_pane_g4

0xa3b3,	// (0x00065d9c) wml_button_bg_pane_g5

0xa3bb,	// (0x00065da4) wml_button_bg_pane_g6

0xa3c3,	// (0x00065dac) wml_button_bg_pane_g7

0xa3cb,	// (0x00065db4) wml_button_bg_pane_g8

0xa3d3,	// (0x00065dbc) wml_button_bg_pane_g9

0x0008,

0xf29c,	// (0x0006ac85) wml_button_bg_pane_g

0x2065,	// (0x0005da4e) bg_list_pane_cp02

0xa3db,	// (0x00065dc4) mce_header_pane_ParamLimits

0xa3db,	// (0x00065dc4) mce_header_pane

0xa3f1,	// (0x00065dda) mce_icon_pane

0xa3f1,	// (0x00065dda) mce_image_pane

0xa3fa,	// (0x00065de3) mce_text_pane_ParamLimits

0xa3fa,	// (0x00065de3) mce_text_pane

0x206f,	// (0x0005da58) scroll_pane_cp03

0xa2f3,	// (0x00065cdc) scroll_pane_cp04

0xa40d,	// (0x00065df6) scroll_pane_cp05_ParamLimits

0xa40d,	// (0x00065df6) scroll_pane_cp05

0x2079,	// (0x0005da62) mce_header_field_pane_ParamLimits

0x2079,	// (0x0005da62) mce_header_field_pane

0x2092,	// (0x0005da7b) mce_header_field_pane_2_ParamLimits

0x2092,	// (0x0005da7b) mce_header_field_pane_2

0x20a8,	// (0x0005da91) mce_header_field_pane_3

0x20b0,	// (0x0005da99) list_single_mce_message_pane_ParamLimits

0x20b0,	// (0x0005da99) list_single_mce_message_pane

0x20cc,	// (0x0005dab5) list_single_mce_smart_pane_ParamLimits

0x20cc,	// (0x0005dab5) list_single_mce_smart_pane

0xa419,	// (0x00065e02) input_focus_pane_cp03

0xa422,	// (0x00065e0b) list_header_data_pane

0x20f3,	// (0x0005dadc) mce_header_field_pane_t1

0x2103,	// (0x0005daec) list_single_mce_header_pane_ParamLimits

0x2103,	// (0x0005daec) list_single_mce_header_pane

0xa42a,	// (0x00065e13) list_single_mce_header_pane_t1

0xa439,	// (0x00065e22) list_single_mce_message_pane_g1

0xa441,	// (0x00065e2a) list_single_mce_message_pane_t1

0x2135,	// (0x0005db1e) bg_cale_heading_pane_cp01_ParamLimits

0x2135,	// (0x0005db1e) bg_cale_heading_pane_cp01

0xa44f,	// (0x00065e38) bg_cale_pane_cp02_ParamLimits

0xa44f,	// (0x00065e38) bg_cale_pane_cp02

0x2168,	// (0x0005db51) cale_month_corner_pane

0x217e,	// (0x0005db67) cale_month_day_heading_pane_ParamLimits

0x217e,	// (0x0005db67) cale_month_day_heading_pane

0x21b1,	// (0x0005db9a) cale_month_pane_g1_ParamLimits

0x21b1,	// (0x0005db9a) cale_month_pane_g1

0x21dd,	// (0x0005dbc6) cale_month_pane_g2_ParamLimits

0x21dd,	// (0x0005dbc6) cale_month_pane_g2

0x21fe,	// (0x0005dbe7) cale_month_pane_g3_ParamLimits

0x21fe,	// (0x0005dbe7) cale_month_pane_g3

0x223a,	// (0x0005dc23) cale_month_pane_g4_ParamLimits

0x223a,	// (0x0005dc23) cale_month_pane_g4

0x2276,	// (0x0005dc5f) cale_month_pane_g5_ParamLimits

0x2276,	// (0x0005dc5f) cale_month_pane_g5

0x22b2,	// (0x0005dc9b) cale_month_pane_g6_ParamLimits

0x22b2,	// (0x0005dc9b) cale_month_pane_g6

0x22ee,	// (0x0005dcd7) cale_month_pane_g7_ParamLimits

0x22ee,	// (0x0005dcd7) cale_month_pane_g7

0x232a,	// (0x0005dd13) cale_month_pane_g8_ParamLimits

0x232a,	// (0x0005dd13) cale_month_pane_g8

0x2366,	// (0x0005dd4f) cale_month_pane_g9_ParamLimits

0x2366,	// (0x0005dd4f) cale_month_pane_g9

0x239c,	// (0x0005dd85) cale_month_pane_g10_ParamLimits

0x239c,	// (0x0005dd85) cale_month_pane_g10

0x23c6,	// (0x0005ddaf) cale_month_pane_g11_ParamLimits

0x23c6,	// (0x0005ddaf) cale_month_pane_g11

0x23f0,	// (0x0005ddd9) cale_month_pane_g12_ParamLimits

0x23f0,	// (0x0005ddd9) cale_month_pane_g12

0x241e,	// (0x0005de07) cale_month_pane_g13_ParamLimits

0x241e,	// (0x0005de07) cale_month_pane_g13

0x000c,

0xf2af,	// (0x0006ac98) cale_month_pane_g_ParamLimits

0xf2af,	// (0x0006ac98) cale_month_pane_g

0x244c,	// (0x0005de35) cale_month_week_pane

0x245d,	// (0x0005de46) grid_cale_month_pane_ParamLimits

0x245d,	// (0x0005de46) grid_cale_month_pane

0x248b,	// (0x0005de74) cale_month_day_heading_pane_t1

0x24e9,	// (0x0005ded2) cale_month_day_heading_pane_t2

0x254e,	// (0x0005df37) cale_month_day_heading_pane_t3

0x25b3,	// (0x0005df9c) cale_month_day_heading_pane_t4

0x2618,	// (0x0005e001) cale_month_day_heading_pane_t5

0x267d,	// (0x0005e066) cale_month_day_heading_pane_t6

0x26e2,	// (0x0005e0cb) cale_month_day_heading_pane_t7

0x0006,

0xf2ca,	// (0x0006acb3) cale_month_day_heading_pane_t

0xa081,	// (0x00065a6a) bg_cale_side_pane_cp01

0x2747,	// (0x0005e130) cale_month_week_pane_t1

0x275e,	// (0x0005e147) cale_month_week_pane_t2

0x2775,	// (0x0005e15e) cale_month_week_pane_t3

0x278c,	// (0x0005e175) cale_month_week_pane_t4

0x27a3,	// (0x0005e18c) cale_month_week_pane_t5

0x27ba,	// (0x0005e1a3) cale_month_week_pane_t6

0x0005,

0xf2d9,	// (0x0006acc2) cale_month_week_pane_t

0x27d9,	// (0x0005e1c2) cell_cale_month_pane_ParamLimits

0x27d9,	// (0x0005e1c2) cell_cale_month_pane

0xa484,	// (0x00065e6d) cell_cale_month_pane_g1

0x28b1,	// (0x0005e29a) cell_cale_month_pane_t1_ParamLimits

0x28b1,	// (0x0005e29a) cell_cale_month_pane_t1

0xa08f,	// (0x00065a78) grid_highlight_pane_cp08

0x9f32,	// (0x0006591b) main_smil_g1

0x28cd,	// (0x0005e2b6) smil_status_pane

0xa490,	// (0x00065e79) smil_text_pane

0xbd36,	// (0x0006771f) bg_popup_call3_rect_pane_g8

0xbd3e,	// (0x00067727) bg_popup_call3_rect_pane_g9

0x0008,

0xf592,	// (0x0006af7b) bg_popup_call3_rect_pane_g

0xbfd3,	// (0x000679bc) smil_status_volume_pane_g1

0xa49a,	// (0x00065e83) smil_status_pane_t1

0xc006,	// (0x000679ef) volume_smil_pane

0xa4b1,	// (0x00065e9a) list_smil_text_pane

0x28e2,	// (0x0005e2cb) scroll_pane_cp011

0x28ed,	// (0x0005e2d6) smil_text_list_pane_t1_ParamLimits

0x28ed,	// (0x0005e2d6) smil_text_list_pane_t1

0xa4bb,	// (0x00065ea4) aid_volume_smil_ParamLimits

0xa4bb,	// (0x00065ea4) aid_volume_smil

0x9f32,	// (0x0006591b) smil_volume_pane_g1

0x9f32,	// (0x0006591b) smil_volume_pane_g2

0x0001,

0xf2f9,	// (0x0006ace2) smil_volume_pane_g

0x9eb9,	// (0x000658a2) listscroll_cale_day_pane

0xa4dd,	// (0x00065ec6) bg_cale_pane

0xa4f5,	// (0x00065ede) list_cale_pane

0xa506,	// (0x00065eef) scroll_pane_cp09

0xa517,	// (0x00065f00) cale_bg_pane_g1

0xa51f,	// (0x00065f08) cale_bg_pane_g2

0xa527,	// (0x00065f10) cale_bg_pane_g3

0xa52f,	// (0x00065f18) cale_bg_pane_g4

0xa537,	// (0x00065f20) cale_bg_pane_g5

0xa53f,	// (0x00065f28) cale_bg_pane_g6

0xa547,	// (0x00065f30) cale_bg_pane_g7

0xa54f,	// (0x00065f38) cale_bg_pane_g8

0xa557,	// (0x00065f40) cale_bg_pane_g9

0x0008,

0xf2fe,	// (0x0006ace7) cale_bg_pane_g

0x2942,	// (0x0005e32b) list_cale_time_pane_ParamLimits

0x2942,	// (0x0005e32b) list_cale_time_pane

0x2957,	// (0x0005e340) list_cale_time_pane_g1_ParamLimits

0x2957,	// (0x0005e340) list_cale_time_pane_g1

0xa55f,	// (0x00065f48) list_cale_time_pane_g2_ParamLimits

0xa55f,	// (0x00065f48) list_cale_time_pane_g2

0x2963,	// (0x0005e34c) list_cale_time_pane_g3_ParamLimits

0x2963,	// (0x0005e34c) list_cale_time_pane_g3

0x2971,	// (0x0005e35a) list_cale_time_pane_g4_ParamLimits

0x2971,	// (0x0005e35a) list_cale_time_pane_g4

0x297f,	// (0x0005e368) list_cale_time_pane_g5_ParamLimits

0x297f,	// (0x0005e368) list_cale_time_pane_g5

0x0005,

0xf311,	// (0x0006acfa) list_cale_time_pane_g_ParamLimits

0xf311,	// (0x0006acfa) list_cale_time_pane_g

0x298d,	// (0x0005e376) list_cale_time_pane_t1_ParamLimits

0x298d,	// (0x0005e376) list_cale_time_pane_t1

0x29b5,	// (0x0005e39e) list_cale_time_pane_t2_ParamLimits

0x29b5,	// (0x0005e39e) list_cale_time_pane_t2

0x2da2,	// (0x0005e78b) aid_blid_cardinal_pane

0x2de4,	// (0x0005e7cd) compass_pane_t4

0x29dd,	// (0x0005e3c6) list_cale_time_pane_t4_ParamLimits

0x29dd,	// (0x0005e3c6) list_cale_time_pane_t4

0x2df2,	// (0x0005e7db) compass_pane_t5

0x2e02,	// (0x0005e7eb) compass_pane_t6

0x2e10,	// (0x0005e7f9) compass_pane_t7

0xa9da,	// (0x000663c3) navi_pane_cc_t1

0xab41,	// (0x0006652a) aid_phob_thumbnail_center_pane

0x35c1,	// (0x0005efaa) main_postcard_pane_g4_ParamLimits

0x0002,

0xf31e,	// (0x0006ad07) list_cale_time_pane_t_ParamLimits

0xf31e,	// (0x0006ad07) list_cale_time_pane_t

0x0ef5,	// (0x0005c8de) bg_popup_window_pane_cp02_ParamLimits

0x0ef5,	// (0x0005c8de) bg_popup_window_pane_cp02

0xa579,	// (0x00065f62) heading_pane_cp01_ParamLimits

0xa579,	// (0x00065f62) heading_pane_cp01

0xa585,	// (0x00065f6e) loc_req_pane_ParamLimits

0xa585,	// (0x00065f6e) loc_req_pane

0xa595,	// (0x00065f7e) loc_type_pane_ParamLimits

0xa595,	// (0x00065f7e) loc_type_pane

0xa5a7,	// (0x00065f90) loc_type_pane_t1_ParamLimits

0xa5a7,	// (0x00065f90) loc_type_pane_t1

0xa5b9,	// (0x00065fa2) loc_type_pane_t2_ParamLimits

0xa5b9,	// (0x00065fa2) loc_type_pane_t2

0xa5cb,	// (0x00065fb4) loc_type_pane_t3_ParamLimits

0xa5cb,	// (0x00065fb4) loc_type_pane_t3

0x0002,

0xf325,	// (0x0006ad0e) loc_type_pane_t_ParamLimits

0xf325,	// (0x0006ad0e) loc_type_pane_t

0xa5dd,	// (0x00065fc6) list_loc_req_pane

0xa5e7,	// (0x00065fd0) scroll_pane_cp012

0x2a05,	// (0x0005e3ee) list_single_loc_request_popup_menu_pane_ParamLimits

0x2a05,	// (0x0005e3ee) list_single_loc_request_popup_menu_pane

0xa5f2,	// (0x00065fdb) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xa5f2,	// (0x00065fdb) list_single_loc_request_popup_menu_pane_g1

0xa5fe,	// (0x00065fe7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xa5fe,	// (0x00065fe7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf32c,	// (0x0006ad15) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf32c,	// (0x0006ad15) list_single_loc_request_popup_menu_pane_g

0xa60a,	// (0x00065ff3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xa60a,	// (0x00065ff3) list_single_loc_request_popup_menu_pane_t1

0x9dc2,	// (0x000657ab) bg_popup_window_pane_cp03_ParamLimits

0x9dc2,	// (0x000657ab) bg_popup_window_pane_cp03

0xa620,	// (0x00066009) heading_loc_req_pane_ParamLimits

0xa620,	// (0x00066009) heading_loc_req_pane

0x2a12,	// (0x0005e3fb) popup_dyc_status_message_window_g1_ParamLimits

0x2a12,	// (0x0005e3fb) popup_dyc_status_message_window_g1

0x2a26,	// (0x0005e40f) popup_dyc_status_message_window_t1_ParamLimits

0x2a26,	// (0x0005e40f) popup_dyc_status_message_window_t1

0x2a3b,	// (0x0005e424) popup_dyc_status_message_window_t2_ParamLimits

0x2a3b,	// (0x0005e424) popup_dyc_status_message_window_t2

0x2a50,	// (0x0005e439) popup_dyc_status_message_window_t3_ParamLimits

0x2a50,	// (0x0005e439) popup_dyc_status_message_window_t3

0x0002,

0xf331,	// (0x0006ad1a) popup_dyc_status_message_window_t_ParamLimits

0xf331,	// (0x0006ad1a) popup_dyc_status_message_window_t

0x9b67,	// (0x00065550) bg_heading_pane_cp01

0xa62c,	// (0x00066015) heading_loc_req_pane_g1

0xa634,	// (0x0006601d) heading_loc_req_pane_g2

0xa63c,	// (0x00066025) heading_loc_req_pane_g3

0x0002,

0xf338,	// (0x0006ad21) heading_loc_req_pane_g

0xa644,	// (0x0006602d) heading_loc_req_pane_t1

0xa654,	// (0x0006603d) bg_popup_sub_pane_cp01_ParamLimits

0xa654,	// (0x0006603d) bg_popup_sub_pane_cp01

0xa662,	// (0x0006604b) popup_cale_events_window_g1_ParamLimits

0xa662,	// (0x0006604b) popup_cale_events_window_g1

0xa682,	// (0x0006606b) popup_cale_events_window_g2_ParamLimits

0xa682,	// (0x0006606b) popup_cale_events_window_g2

0x0001,

0xf36c,	// (0x0006ad55) popup_cale_events_window_g_ParamLimits

0xf36c,	// (0x0006ad55) popup_cale_events_window_g

0xa6a2,	// (0x0006608b) popup_cale_events_window_t1_ParamLimits

0xa6a2,	// (0x0006608b) popup_cale_events_window_t1

0xa6b4,	// (0x0006609d) popup_cale_events_window_t2_ParamLimits

0xa6b4,	// (0x0006609d) popup_cale_events_window_t2

0xa6f2,	// (0x000660db) popup_cale_events_window_t3_ParamLimits

0xa6f2,	// (0x000660db) popup_cale_events_window_t3

0xa72c,	// (0x00066115) popup_cale_events_window_t4_ParamLimits

0xa72c,	// (0x00066115) popup_cale_events_window_t4

0x0003,

0xf371,	// (0x0006ad5a) popup_cale_events_window_t_ParamLimits

0xf371,	// (0x0006ad5a) popup_cale_events_window_t

0x2b55,	// (0x0005e53e) call_type_pane

0x2b65,	// (0x0005e54e) popup_call_status_window_g1

0x2b79,	// (0x0005e562) popup_call_status_window_g2

0x2b8d,	// (0x0005e576) popup_call_status_window_g3

0x0002,

0xf37a,	// (0x0006ad63) popup_call_status_window_g

0xa762,	// (0x0006614b) call_type_pane_g1

0xa76b,	// (0x00066154) call_type_pane_g2

0x0001,

0xf381,	// (0x0006ad6a) call_type_pane_g

0x9b67,	// (0x00065550) bg_popup_sub_pane_cp02

0xa774,	// (0x0006615d) listscroll_popup_wml_pane

0xa77c,	// (0x00066165) list_wml_pane

0xa786,	// (0x0006616f) scroll_pane_cp013

0xa791,	// (0x0006617a) list_single_graphic_popup_wml_pane_ParamLimits

0xa791,	// (0x0006617a) list_single_graphic_popup_wml_pane

0x9f32,	// (0x0006591b) list_single_graphic_popup_wml_pane_g1

0xa7a5,	// (0x0006618e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf386,	// (0x0006ad6f) list_single_graphic_popup_wml_pane_g

0xa7ad,	// (0x00066196) list_single_graphic_popup_wml_pane_t1

0xa7c3,	// (0x000661ac) aid_call_pane

0x9dba,	// (0x000657a3) popup_clock_analogue_window_g1

0x9dba,	// (0x000657a3) popup_clock_analogue_window_g2

0xa7cb,	// (0x000661b4) popup_clock_analogue_window_g3

0xa7cb,	// (0x000661b4) popup_clock_analogue_window_g4

0x9f32,	// (0x0006591b) popup_clock_analogue_window_g5

0x0004,

0xf38b,	// (0x0006ad74) popup_clock_analogue_window_g

0xa7d3,	// (0x000661bc) popup_clock_analogue_window_t1

0xa7e1,	// (0x000661ca) clock_digital_number_pane_ParamLimits

0xa7e1,	// (0x000661ca) clock_digital_number_pane

0xa7ed,	// (0x000661d6) clock_digital_number_pane_cp02_ParamLimits

0xa7ed,	// (0x000661d6) clock_digital_number_pane_cp02

0xa7f9,	// (0x000661e2) clock_digital_number_pane_cp03_ParamLimits

0xa7f9,	// (0x000661e2) clock_digital_number_pane_cp03

0xa805,	// (0x000661ee) clock_digital_number_pane_cp04_ParamLimits

0xa805,	// (0x000661ee) clock_digital_number_pane_cp04

0xa811,	// (0x000661fa) clock_digital_separator_pane_ParamLimits

0xa811,	// (0x000661fa) clock_digital_separator_pane

0xa81d,	// (0x00066206) popup_clock_digital_window_t1

0x9f32,	// (0x0006591b) clock_digital_number_pane_g1

0x9f32,	// (0x0006591b) clock_digital_number_pane_g2

0x0001,

0xf2f9,	// (0x0006ace2) clock_digital_number_pane_g

0x9f32,	// (0x0006591b) clock_digital_separator_pane_g1

0x9f32,	// (0x0006591b) clock_digital_separator_pane_g2

0x0001,

0xf2f9,	// (0x0006ace2) clock_digital_separator_pane_g

0x9b67,	// (0x00065550) bg_popup_window_pane_cp04

0xa83a,	// (0x00066223) heading_pane_cp03

0xa842,	// (0x0006622b) listscroll_popup_gms_pane

0xa84a,	// (0x00066233) grid_large_graphic_popup_pane

0xa854,	// (0x0006623d) listscroll_popup_gms_pane_g1

0xa85c,	// (0x00066245) listscroll_popup_gms_pane_g2

0x0001,

0xf396,	// (0x0006ad7f) listscroll_popup_gms_pane_g

0xa2f3,	// (0x00065cdc) scroll_pane_cp014

0x2b9d,	// (0x0005e586) cell_large_graphic_popup_pane_ParamLimits

0x2b9d,	// (0x0005e586) cell_large_graphic_popup_pane

0x2bb5,	// (0x0005e59e) cell_large_graphic_popup_pane_g1_ParamLimits

0x2bb5,	// (0x0005e59e) cell_large_graphic_popup_pane_g1

0xa864,	// (0x0006624d) cell_large_graphic_popup_pane_g2_ParamLimits

0xa864,	// (0x0006624d) cell_large_graphic_popup_pane_g2

0xa870,	// (0x00066259) cell_large_graphic_popup_pane_g3_ParamLimits

0xa870,	// (0x00066259) cell_large_graphic_popup_pane_g3

0xa87d,	// (0x00066266) cell_large_graphic_popup_pane_g4_ParamLimits

0xa87d,	// (0x00066266) cell_large_graphic_popup_pane_g4

0x0003,

0xf39b,	// (0x0006ad84) cell_large_graphic_popup_pane_g_ParamLimits

0xf39b,	// (0x0006ad84) cell_large_graphic_popup_pane_g

0xa88d,	// (0x00066276) grid_highlight_pane_cp010

0x9f32,	// (0x0006591b) bg_popup_call_pane_g1

0xa897,	// (0x00066280) list_single_graphic_popup_conf_pane_ParamLimits

0xa897,	// (0x00066280) list_single_graphic_popup_conf_pane

0xa8a9,	// (0x00066292) list_highlight_pane_cp01

0xa8b2,	// (0x0006629b) list_single_graphic_popup_conf_pane_g1

0xa8ba,	// (0x000662a3) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf3a4,	// (0x0006ad8d) list_single_graphic_popup_conf_pane_g

0xa8c2,	// (0x000662ab) list_single_graphic_popup_conf_pane_t1

0xa8d0,	// (0x000662b9) linegrid_cams_pane_g1

0x2bc1,	// (0x0005e5aa) linegrid_cams_pane_g2

0xa0c2,	// (0x00065aab) linegrid_cams_pane_g3

0xa8d9,	// (0x000662c2) linegrid_cams_pane_g4

0x2bca,	// (0x0005e5b3) linegrid_cams_pane_g5

0x2bd3,	// (0x0005e5bc) linegrid_cams_pane_g6

0xa0cb,	// (0x00065ab4) linegrid_cams_pane_g7

0x0006,

0xf3a9,	// (0x0006ad92) linegrid_cams_pane_g

0xa8e2,	// (0x000662cb) popup_clock_analogue_window

0xa8e2,	// (0x000662cb) popup_clock_digital_window

0x9b67,	// (0x00065550) popup_phob_thumbnail_window

0x9f32,	// (0x0006591b) call_video_uplink_pane_g1

0xa8eb,	// (0x000662d4) call_video_uplink_pane_g2

0x0001,

0xf3b8,	// (0x0006ada1) call_video_uplink_pane_g

0xa8f3,	// (0x000662dc) video_uplink_pane

0xa8fb,	// (0x000662e4) mce_image_pane_g1

0x2bde,	// (0x0005e5c7) mce_image_pane_g2

0x2be8,	// (0x0005e5d1) mce_image_pane_g3

0x2bf2,	// (0x0005e5db) mce_image_pane_g4

0x2bfa,	// (0x0005e5e3) mce_image_pane_g5

0x0004,

0xf3bd,	// (0x0006ada6) mce_image_pane_g

0xa905,	// (0x000662ee) control_top_pane_stacon_cp01_ParamLimits

0xa905,	// (0x000662ee) control_top_pane_stacon_cp01

0xa919,	// (0x00066302) uni_indicator_pane_stacon_cp01_ParamLimits

0xa919,	// (0x00066302) uni_indicator_pane_stacon_cp01

0xa92a,	// (0x00066313) bg_popup_sub_pane_cp03

0x2c02,	// (0x0005e5eb) chi_dic_find_pane

0x2c0a,	// (0x0005e5f3) listscroll_chi_dic_pane

0x2c13,	// (0x0005e5fc) main_pane_chidic_g1

0x2c26,	// (0x0005e60f) chi_dic_find_pane_t1

0xa934,	// (0x0006631d) find_chidic_pane

0xa93d,	// (0x00066326) chi_dic_list_pane_ParamLimits

0xa93d,	// (0x00066326) chi_dic_list_pane

0xa94e,	// (0x00066337) scroll_pane_cp020

0x2c34,	// (0x0005e61d) find_chidic_pane_t1

0x9b67,	// (0x00065550) input_focus_pane_cp06

0x2c43,	// (0x0005e62c) list_chi_dic_pane_ParamLimits

0x2c43,	// (0x0005e62c) list_chi_dic_pane

0x2c55,	// (0x0005e63e) list_chi_dic_pane_t1_ParamLimits

0x2c55,	// (0x0005e63e) list_chi_dic_pane_t1

0x9b67,	// (0x00065550) list_highlight_pane_cp020

0xa956,	// (0x0006633f) bg_cale_heading_pane_g1

0x2c68,	// (0x0005e651) bg_cale_heading_pane_g2

0x2c70,	// (0x0005e659) bg_cale_heading_pane_g3

0x2c78,	// (0x0005e661) bg_cale_heading_pane_g4

0x2c80,	// (0x0005e669) bg_cale_heading_pane_g5

0x2c88,	// (0x0005e671) bg_cale_heading_pane_g6

0x2c90,	// (0x0005e679) bg_cale_heading_pane_g7

0x2c98,	// (0x0005e681) bg_cale_heading_pane_g8

0x2ca0,	// (0x0005e689) bg_cale_heading_pane_g9

0x0008,

0xf3c8,	// (0x0006adb1) bg_cale_heading_pane_g

0xa956,	// (0x0006633f) bg_cale_side_pane_g1

0x2ca8,	// (0x0005e691) bg_cale_side_pane_g2

0x2cb2,	// (0x0005e69b) bg_cale_side_pane_g3

0x2cbc,	// (0x0005e6a5) bg_cale_side_pane_g4

0x2cc6,	// (0x0005e6af) bg_cale_side_pane_g5

0x2cd0,	// (0x0005e6b9) bg_cale_side_pane_g6

0x2cda,	// (0x0005e6c3) bg_cale_side_pane_g7

0x2ce4,	// (0x0005e6cd) bg_cale_side_pane_g8

0x2cec,	// (0x0005e6d5) bg_cale_side_pane_g9

0x0008,

0xf3db,	// (0x0006adc4) bg_cale_side_pane_g

0x2cf4,	// (0x0005e6dd) popup_call_status_window_ParamLimits

0x2cf4,	// (0x0005e6dd) popup_call_status_window

0xa95e,	// (0x00066347) stacon_top_pane

0xa966,	// (0x0006634f) status_pane_ParamLimits

0xa966,	// (0x0006634f) status_pane

0xa97b,	// (0x00066364) status_small_pane

0xa983,	// (0x0006636c) control_pane

0x9b67,	// (0x00065550) stacon_bottom_pane

0xa98b,	// (0x00066374) list_single_mce_smart_pane_t1_ParamLimits

0xa98b,	// (0x00066374) list_single_mce_smart_pane_t1

0xa99e,	// (0x00066387) list_single_mce_smart_pane_t2_ParamLimits

0xa99e,	// (0x00066387) list_single_mce_smart_pane_t2

0x0001,

0xf3ee,	// (0x0006add7) list_single_mce_smart_pane_t_ParamLimits

0xf3ee,	// (0x0006add7) list_single_mce_smart_pane_t

0x2d41,	// (0x0005e72a) compass_pane

0x2d4c,	// (0x0005e735) main_location2_pane_t1

0x2d62,	// (0x0005e74b) main_location2_pane_t2

0x2d78,	// (0x0005e761) main_location2_pane_t3

0x0003,

0xf3f3,	// (0x0006addc) main_location2_pane_t

0xa9bd,	// (0x000663a6) compass_pane_g1_ParamLimits

0xa9bd,	// (0x000663a6) compass_pane_g1

0x2dc6,	// (0x0005e7af) compass_pane_t1

0x2dd5,	// (0x0005e7be) compass_pane_t2

0x0005,

0xf3fc,	// (0x0006ade5) compass_pane_t

0x2e20,	// (0x0005e809) text_secondary_cp61

0xa9d1,	// (0x000663ba) navi_pane_cams_g5

0xa9f4,	// (0x000663dd) navi_pane_im_t1

0xaa02,	// (0x000663eb) navi_pane_mp_g1_ParamLimits

0xaa02,	// (0x000663eb) navi_pane_mp_g1

0xaa16,	// (0x000663ff) navi_pane_mp_g2_ParamLimits

0xaa16,	// (0x000663ff) navi_pane_mp_g2

0xaa22,	// (0x0006640b) navi_pane_mp_g3_ParamLimits

0xaa22,	// (0x0006640b) navi_pane_mp_g3

0x0002,

0xf410,	// (0x0006adf9) navi_pane_mp_g_ParamLimits

0xf410,	// (0x0006adf9) navi_pane_mp_g

0xaa2e,	// (0x00066417) navi_pane_mp_t1

0xaa3c,	// (0x00066425) navi_pane_mp_t2

0x0002,

0xf417,	// (0x0006ae00) navi_pane_mp_t

0xaa78,	// (0x00066461) navi_pane_vt_g1

0xaa2e,	// (0x00066417) navi_pane_vt_t1

0xaa80,	// (0x00066469) navi_slider_pane

0xaa88,	// (0x00066471) zooming_pane

0xaa90,	// (0x00066479) navi_slider_pane_g1

0xaa99,	// (0x00066482) navi_slider_pane_g2

0x0006,

0xf41e,	// (0x0006ae07) navi_slider_pane_g

0xaac6,	// (0x000664af) aid_levels_zoom

0xaace,	// (0x000664b7) zooming_pane_g1

0xaad6,	// (0x000664bf) zooming_pane_g2

0xaad6,	// (0x000664bf) zooming_pane_g3

0x0002,

0xf42d,	// (0x0006ae16) zooming_pane_g

0xaade,	// (0x000664c7) level_10_zoom

0xaae7,	// (0x000664d0) level_11_zoom

0xaaf0,	// (0x000664d9) level_1_zoom

0xaaf9,	// (0x000664e2) level_2_zoom

0xab02,	// (0x000664eb) level_3_zoom

0xab0b,	// (0x000664f4) level_4_zoom

0xab14,	// (0x000664fd) level_5_zoom

0xab1d,	// (0x00066506) level_6_zoom

0xab26,	// (0x0006650f) level_7_zoom

0xab2f,	// (0x00066518) level_8_zoom

0xab38,	// (0x00066521) level_9_zoom

0xab49,	// (0x00066532) popup_phob_thumbnail_window_g1

0xab51,	// (0x0006653a) popup_phob_thumbnail_window_g2

0x0001,

0xf434,	// (0x0006ae1d) popup_phob_thumbnail_window_g

0xbe9c,	// (0x00067885) level_1_location

0xbea4,	// (0x0006788d) level_2_location

0xbeac,	// (0x00067895) level_3_location

0xbeb4,	// (0x0006789d) level_4_location

0xaa88,	// (0x00066471) level_5_location

0x2f4b,	// (0x0005e934) mce_icon_pane_g1

0x2f53,	// (0x0005e93c) mce_icon_pane_g2

0x0001,

0xf439,	// (0x0006ae22) mce_icon_pane_g

0x2f5b,	// (0x0005e944) main_mup_pane_g1_ParamLimits

0x2f5b,	// (0x0005e944) main_mup_pane_g1

0x2f71,	// (0x0005e95a) main_mup_pane_g2_ParamLimits

0x2f71,	// (0x0005e95a) main_mup_pane_g2

0x2f89,	// (0x0005e972) main_mup_pane_g3_ParamLimits

0x2f89,	// (0x0005e972) main_mup_pane_g3

0x2fa1,	// (0x0005e98a) main_mup_pane_g4_ParamLimits

0x2fa1,	// (0x0005e98a) main_mup_pane_g4

0x2fb3,	// (0x0005e99c) main_mup_pane_g5_ParamLimits

0x2fb3,	// (0x0005e99c) main_mup_pane_g5

0x2fcf,	// (0x0005e9b8) main_mup_pane_g6_ParamLimits

0x2fcf,	// (0x0005e9b8) main_mup_pane_g6

0x2fe9,	// (0x0005e9d2) main_mup_pane_g7_ParamLimits

0x2fe9,	// (0x0005e9d2) main_mup_pane_g7

0x3007,	// (0x0005e9f0) main_mup_pane_g8_ParamLimits

0x3007,	// (0x0005e9f0) main_mup_pane_g8

0x3025,	// (0x0005ea0e) main_mup_pane_g9_ParamLimits

0x3025,	// (0x0005ea0e) main_mup_pane_g9

0x3041,	// (0x0005ea2a) main_mup_pane_g10_ParamLimits

0x3041,	// (0x0005ea2a) main_mup_pane_g10

0x305f,	// (0x0005ea48) main_mup_pane_g11_ParamLimits

0x305f,	// (0x0005ea48) main_mup_pane_g11

0x3079,	// (0x0005ea62) main_mup_pane_g12_ParamLimits

0x3079,	// (0x0005ea62) main_mup_pane_g12

0x308f,	// (0x0005ea78) main_mup_pane_g13_ParamLimits

0x308f,	// (0x0005ea78) main_mup_pane_g13

0x000c,

0xf43e,	// (0x0006ae27) main_mup_pane_g_ParamLimits

0xf43e,	// (0x0006ae27) main_mup_pane_g

0x30a3,	// (0x0005ea8c) main_mup_pane_t1_ParamLimits

0x30a3,	// (0x0005ea8c) main_mup_pane_t1

0x30bf,	// (0x0005eaa8) main_mup_pane_t2_ParamLimits

0x30bf,	// (0x0005eaa8) main_mup_pane_t2

0x30d7,	// (0x0005eac0) main_mup_pane_t3_ParamLimits

0x30d7,	// (0x0005eac0) main_mup_pane_t3

0x30ef,	// (0x0005ead8) main_mup_pane_t4_ParamLimits

0x30ef,	// (0x0005ead8) main_mup_pane_t4

0x310d,	// (0x0005eaf6) main_mup_pane_t5_ParamLimits

0x310d,	// (0x0005eaf6) main_mup_pane_t5

0x3122,	// (0x0005eb0b) main_mup_pane_t6_ParamLimits

0x3122,	// (0x0005eb0b) main_mup_pane_t6

0x0005,

0xf459,	// (0x0006ae42) main_mup_pane_t_ParamLimits

0xf459,	// (0x0006ae42) main_mup_pane_t

0x3134,	// (0x0005eb1d) mup_progress_pane_ParamLimits

0x3134,	// (0x0005eb1d) mup_progress_pane

0x3140,	// (0x0005eb29) mup_visualizer_pane_ParamLimits

0x3140,	// (0x0005eb29) mup_visualizer_pane

0x3174,	// (0x0005eb5d) mup_volume_pane_ParamLimits

0x3174,	// (0x0005eb5d) mup_volume_pane

0xab59,	// (0x00066542) mup_visualizer_pane_g1_ParamLimits

0xab59,	// (0x00066542) mup_visualizer_pane_g1

0xab59,	// (0x00066542) mup_visualizer_pane_g2_ParamLimits

0xab59,	// (0x00066542) mup_visualizer_pane_g2

0xa9bd,	// (0x000663a6) mup_visualizer_pane_g3_ParamLimits

0xa9bd,	// (0x000663a6) mup_visualizer_pane_g3

0x0002,

0xf466,	// (0x0006ae4f) mup_visualizer_pane_g_ParamLimits

0xf466,	// (0x0006ae4f) mup_visualizer_pane_g

0x9f32,	// (0x0006591b) mup_volume_pane_g1

0xab6f,	// (0x00066558) mup_volume_pane_g2

0x0001,

0xf46d,	// (0x0006ae56) mup_volume_pane_g

0x9f32,	// (0x0006591b) mup_progress_pane_g1

0xab78,	// (0x00066561) mup_progress_pane_g2

0xab81,	// (0x0006656a) mup_progress_pane_g3

0x0002,

0xf472,	// (0x0006ae5b) mup_progress_pane_g

0x9b67,	// (0x00065550) bg_popup_window_pane_cp05

0xab8a,	// (0x00066573) heading_pane_cp02_ParamLimits

0xab8a,	// (0x00066573) heading_pane_cp02

0xaba6,	// (0x0006658f) list_popup_blid_pane

0xabae,	// (0x00066597) list_blid_sat_info_pane_ParamLimits

0xabae,	// (0x00066597) list_blid_sat_info_pane

0xabc1,	// (0x000665aa) list_blid_sat_info_pane_g1

0xabc9,	// (0x000665b2) list_blid_sat_info_pane_t1

0x329e,	// (0x0005ec87) mup_equalizer_pane_ParamLimits

0x329e,	// (0x0005ec87) mup_equalizer_pane

0x32bf,	// (0x0005eca8) mup_equalizer_pane_cp1_ParamLimits

0x32bf,	// (0x0005eca8) mup_equalizer_pane_cp1

0x32e0,	// (0x0005ecc9) mup_equalizer_pane_cp2_ParamLimits

0x32e0,	// (0x0005ecc9) mup_equalizer_pane_cp2

0x3305,	// (0x0005ecee) mup_equalizer_pane_cp3_ParamLimits

0x3305,	// (0x0005ecee) mup_equalizer_pane_cp3

0x332e,	// (0x0005ed17) mup_equalizer_pane_cp4_ParamLimits

0x332e,	// (0x0005ed17) mup_equalizer_pane_cp4

0x3357,	// (0x0005ed40) mup_equalizer_pane_cp5

0x336f,	// (0x0005ed58) mup_equalizer_pane_cp6

0x3387,	// (0x0005ed70) mup_equalizer_pane_cp7

0xbdb6,	// (0x0006779f) bg_popup_call_poc_act_pane_g9

0xbdbe,	// (0x000677a7) bg_popup_call_poc_act_pane_g10

0xbdc6,	// (0x000677af) bg_popup_call_poc_act_pane_g11

0x000a,

0x9dc2,	// (0x000657ab) mup_scale_pane

0x9f32,	// (0x0006591b) mup_scale_pane_g1

0xabd7,	// (0x000665c0) mup_scale_pane_g2

0x0006,

0xf48e,	// (0x0006ae77) mup_scale_pane_g

0xabfb,	// (0x000665e4) msg_data_pane

0xac03,	// (0x000665ec) scroll_pane_cp017

0x33b1,	// (0x0005ed9a) bg_list_pane_cp04_ParamLimits

0x33b1,	// (0x0005ed9a) bg_list_pane_cp04

0xac0b,	// (0x000665f4) msg_data_pane_g1

0x33d7,	// (0x0005edc0) msg_data_pane_g2

0x33e1,	// (0x0005edca) msg_data_pane_g3

0x33eb,	// (0x0005edd4) msg_data_pane_g4

0x33f3,	// (0x0005eddc) msg_data_pane_g5

0x33fb,	// (0x0005ede4) msg_data_pane_g6

0x3403,	// (0x0005edec) msg_data_pane_g7

0x0006,

0xf49d,	// (0x0006ae86) msg_data_pane_g

0x340b,	// (0x0005edf4) msg_text_pane_ParamLimits

0x340b,	// (0x0005edf4) msg_text_pane

0x343c,	// (0x0005ee25) qrid_highlight_pane_cp011_ParamLimits

0x343c,	// (0x0005ee25) qrid_highlight_pane_cp011

0x9b67,	// (0x00065550) msg_body_pane

0x9b67,	// (0x00065550) msg_header_pane

0xac1c,	// (0x00066605) input_focus_pane_cp07

0x3460,	// (0x0005ee49) msg_header_pane_t1_ParamLimits

0x3460,	// (0x0005ee49) msg_header_pane_t1

0x3474,	// (0x0005ee5d) msg_header_pane_t2_ParamLimits

0x3474,	// (0x0005ee5d) msg_header_pane_t2

0x0001,

0xf4b1,	// (0x0006ae9a) msg_header_pane_t_ParamLimits

0xf4b1,	// (0x0006ae9a) msg_header_pane_t

0xac31,	// (0x0006661a) msg_body_pane_g1

0x3486,	// (0x0005ee6f) msg_body_pane_t1_ParamLimits

0x3486,	// (0x0005ee6f) msg_body_pane_t1

0x34b7,	// (0x0005eea0) msg_body_pane_t2_ParamLimits

0x34b7,	// (0x0005eea0) msg_body_pane_t2

0x34c9,	// (0x0005eeb2) msg_body_pane_t3_ParamLimits

0x34c9,	// (0x0005eeb2) msg_body_pane_t3

0x0002,

0xf4b6,	// (0x0006ae9f) msg_body_pane_t_ParamLimits

0xf4b6,	// (0x0006ae9f) msg_body_pane_t

0x3515,	// (0x0005eefe) main_viewer_pane_g1_ParamLimits

0x3515,	// (0x0005eefe) main_viewer_pane_g1

0x3523,	// (0x0005ef0c) main_viewer_pane_g2_ParamLimits

0x3523,	// (0x0005ef0c) main_viewer_pane_g2

0x3531,	// (0x0005ef1a) main_viewer_pane_g3_ParamLimits

0x3531,	// (0x0005ef1a) main_viewer_pane_g3

0x3540,	// (0x0005ef29) main_viewer_pane_g4_ParamLimits

0x3540,	// (0x0005ef29) main_viewer_pane_g4

0xac51,	// (0x0006663a) main_viewer_pane_g5_ParamLimits

0xac51,	// (0x0006663a) main_viewer_pane_g5

0xac51,	// (0x0006663a) main_viewer_pane_g7_ParamLimits

0xac51,	// (0x0006663a) main_viewer_pane_g7

0xac63,	// (0x0006664c) main_viewer_pane_g8_ParamLimits

0xac63,	// (0x0006664c) main_viewer_pane_g8

0x0007,

0xf4c6,	// (0x0006aeaf) main_viewer_pane_g_ParamLimits

0xf4c6,	// (0x0006aeaf) main_viewer_pane_g

0xac7b,	// (0x00066664) viewer_content_pane_ParamLimits

0xac7b,	// (0x00066664) viewer_content_pane

0x357e,	// (0x0005ef67) main_postcard_pane_g1_ParamLimits

0x357e,	// (0x0005ef67) main_postcard_pane_g1

0x3594,	// (0x0005ef7d) main_postcard_pane_g2_ParamLimits

0x3594,	// (0x0005ef7d) main_postcard_pane_g2

0x35aa,	// (0x0005ef93) main_postcard_pane_g3_ParamLimits

0x35aa,	// (0x0005ef93) main_postcard_pane_g3

0x0005,

0xf4d7,	// (0x0006aec0) main_postcard_pane_g_ParamLimits

0xf4d7,	// (0x0006aec0) main_postcard_pane_g

0x35c1,	// (0x0005efaa) main_postcard_pane_g4

0xbfe6,	// (0x000679cf) smil_status_volume_pane_g2

0x3604,	// (0x0005efed) postcard_pane_ParamLimits

0x3604,	// (0x0005efed) postcard_pane

0xac89,	// (0x00066672) postcard_pane_g1_ParamLimits

0xac89,	// (0x00066672) postcard_pane_g1

0x3654,	// (0x0005f03d) postcard_pane_g2_ParamLimits

0x3654,	// (0x0005f03d) postcard_pane_g2

0x3660,	// (0x0005f049) postcard_pane_g3_ParamLimits

0x3660,	// (0x0005f049) postcard_pane_g3

0xac97,	// (0x00066680) postcard_pane_g4_ParamLimits

0xac97,	// (0x00066680) postcard_pane_g4

0x366c,	// (0x0005f055) postcard_pane_g5_ParamLimits

0x366c,	// (0x0005f055) postcard_pane_g5

0x367e,	// (0x0005f067) postcard_pane_g6_ParamLimits

0x367e,	// (0x0005f067) postcard_pane_g6

0xac89,	// (0x00066672) postcard_pane_g7_ParamLimits

0xac89,	// (0x00066672) postcard_pane_g7

0x0006,

0xf4e4,	// (0x0006aecd) postcard_pane_g_ParamLimits

0xf4e4,	// (0x0006aecd) postcard_pane_g

0x3696,	// (0x0005f07f) main_mp2_pane_g1_ParamLimits

0x3696,	// (0x0005f07f) main_mp2_pane_g1

0x36a4,	// (0x0005f08d) main_mp2_pane_g2_ParamLimits

0x36a4,	// (0x0005f08d) main_mp2_pane_g2

0x36b0,	// (0x0005f099) main_mp2_pane_g3_ParamLimits

0x36b0,	// (0x0005f099) main_mp2_pane_g3

0x0002,

0xf4f3,	// (0x0006aedc) main_mp2_pane_g_ParamLimits

0xf4f3,	// (0x0006aedc) main_mp2_pane_g

0x36bc,	// (0x0005f0a5) main_mp2_pane_t1_ParamLimits

0x36bc,	// (0x0005f0a5) main_mp2_pane_t1

0x36d3,	// (0x0005f0bc) main_mp2_pane_t2_ParamLimits

0x36d3,	// (0x0005f0bc) main_mp2_pane_t2

0x36e7,	// (0x0005f0d0) main_mp2_pane_t3_ParamLimits

0x36e7,	// (0x0005f0d0) main_mp2_pane_t3

0x0002,

0xf4fa,	// (0x0006aee3) main_mp2_pane_t_ParamLimits

0xf4fa,	// (0x0006aee3) main_mp2_pane_t

0xaca5,	// (0x0006668e) pec_content_pane_ParamLimits

0xaca5,	// (0x0006668e) pec_content_pane

0xa2f3,	// (0x00065cdc) scroll_pane_cp015

0xacb7,	// (0x000666a0) pec_attribute_pane_ParamLimits

0xacb7,	// (0x000666a0) pec_attribute_pane

0x36f9,	// (0x0005f0e2) pec_content_pane_g1_ParamLimits

0x36f9,	// (0x0005f0e2) pec_content_pane_g1

0xacc7,	// (0x000666b0) pec_content_pane_t1_ParamLimits

0xacc7,	// (0x000666b0) pec_content_pane_t1

0xacd9,	// (0x000666c2) pec_content_pane_t2_ParamLimits

0xacd9,	// (0x000666c2) pec_content_pane_t2

0x0001,

0xf501,	// (0x0006aeea) pec_content_pane_t_ParamLimits

0xf501,	// (0x0006aeea) pec_content_pane_t

0x3705,	// (0x0005f0ee) list_single_graphic_pane_cp01_ParamLimits

0x3705,	// (0x0005f0ee) list_single_graphic_pane_cp01

0x9dc2,	// (0x000657ab) bg_popup_sub_pane_cp04

0xaceb,	// (0x000666d4) popup_mup_playback_window_g1

0xacf7,	// (0x000666e0) popup_mup_playback_window_t1

0xad0c,	// (0x000666f5) popup_mup_playback_window_t2

0x0001,

0xf506,	// (0x0006aeef) popup_mup_playback_window_t

0xad43,	// (0x0006672c) main_image_pane_g1_ParamLimits

0xad43,	// (0x0006672c) main_image_pane_g1

0xad86,	// (0x0006676f) scroll_pane_cp018_ParamLimits

0xad86,	// (0x0006676f) scroll_pane_cp018

0xad9e,	// (0x00066787) scroll_pane_cp016_ParamLimits

0xad9e,	// (0x00066787) scroll_pane_cp016

0x37d7,	// (0x0005f1c0) smil2_image_pane_ParamLimits

0x37d7,	// (0x0005f1c0) smil2_image_pane

0x380d,	// (0x0005f1f6) smil2_root_pane_ParamLimits

0x380d,	// (0x0005f1f6) smil2_root_pane

0x3845,	// (0x0005f22e) smil2_text_pane_ParamLimits

0x3845,	// (0x0005f22e) smil2_text_pane

0x9b67,	// (0x00065550) bg_list_pane_cp06

0xadda,	// (0x000667c3) grid_radio_pane

0x9b67,	// (0x00065550) bg_popup_window_pane_cp06

0xade4,	// (0x000667cd) main_fmradio_pane_t1

0xa83a,	// (0x00066223) heading_pane_cp04

0xadf2,	// (0x000667db) main_fmradio_pane_t2

0xbdce,	// (0x000677b7) popup_cale_lunar_info_window_g1

0xae00,	// (0x000667e9) main_fmradio_pane_t3

0xbdd6,	// (0x000677bf) popup_cale_lunar_info_window_g2

0xae10,	// (0x000667f9) main_fmradio_pane_t4

0x0001,

0xae1e,	// (0x00066807) main_fmradio_pane_t5

0x0004,

0xf5e1,	// (0x0006afca) popup_cale_lunar_info_window_g

0xf51b,	// (0x0006af04) main_fmradio_pane_t

0xae2c,	// (0x00066815) wait_bar_pane_cp03

0xae34,	// (0x0006681d) cell_fmradio_pane_ParamLimits

0xae34,	// (0x0006681d) cell_fmradio_pane

0xac89,	// (0x00066672) cell_fmradio_pane_g1_ParamLimits

0xac89,	// (0x00066672) cell_fmradio_pane_g1

0x9b67,	// (0x00065550) grid_highlight_pane_cp011

0xae49,	// (0x00066832) poc_content_pane_ParamLimits

0xae49,	// (0x00066832) poc_content_pane

0xae5b,	// (0x00066844) scroll_pane_cp019

0x38d5,	// (0x0005f2be) popup_call_poc_act_window_ParamLimits

0x38d5,	// (0x0005f2be) popup_call_poc_act_window

0x38f9,	// (0x0005f2e2) popup_call_poc_inact_window_ParamLimits

0x38f9,	// (0x0005f2e2) popup_call_poc_inact_window

0xf5b8,	// (0x0006afa1) bg_popup_call_poc_act_pane_g

0xbd46,	// (0x0006772f) bg_popup_call_poc_inact_pane_g1

0xbd4e,	// (0x00067737) bg_popup_call_poc_inact_pane_g2

0xae63,	// (0x0006684c) popup_call_poc_act_window_g2

0xbd56,	// (0x0006773f) bg_popup_call_poc_inact_pane_g3

0xbd5e,	// (0x00067747) bg_popup_call_poc_inact_pane_g4

0xbd66,	// (0x0006774f) bg_popup_call_poc_inact_pane_g5

0xae6b,	// (0x00066854) popup_call_poc_act_window_t1_ParamLimits

0xae6b,	// (0x00066854) popup_call_poc_act_window_t1

0xae93,	// (0x0006687c) popup_call_poc_act_window_t2_ParamLimits

0xae93,	// (0x0006687c) popup_call_poc_act_window_t2

0xaebb,	// (0x000668a4) popup_call_poc_act_window_t3_ParamLimits

0xaebb,	// (0x000668a4) popup_call_poc_act_window_t3

0xaee3,	// (0x000668cc) popup_call_poc_act_window_t4_ParamLimits

0xaee3,	// (0x000668cc) popup_call_poc_act_window_t4

0x0003,

0xf526,	// (0x0006af0f) popup_call_poc_act_window_t_ParamLimits

0xf526,	// (0x0006af0f) popup_call_poc_act_window_t

0xbd6e,	// (0x00067757) bg_popup_call_poc_inact_pane_g6

0xbd76,	// (0x0006775f) bg_popup_call_poc_inact_pane_g7

0xbd7e,	// (0x00067767) bg_popup_call_poc_inact_pane_g8

0xaef5,	// (0x000668de) popup_call_poc_inact_window_g2

0xbd86,	// (0x0006776f) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf5a5,	// (0x0006af8e) bg_popup_call_poc_inact_pane_g

0xaefd,	// (0x000668e6) popup_call_poc_inact_window_t1_ParamLimits

0xaefd,	// (0x000668e6) popup_call_poc_inact_window_t1

0xaf12,	// (0x000668fb) popup_call_poc_inact_window_t2_ParamLimits

0xaf12,	// (0x000668fb) popup_call_poc_inact_window_t2

0xaf27,	// (0x00066910) popup_call_poc_inact_window_t3_ParamLimits

0xaf27,	// (0x00066910) popup_call_poc_inact_window_t3

0x0002,

0xf52f,	// (0x0006af18) popup_call_poc_inact_window_t_ParamLimits

0xf52f,	// (0x0006af18) popup_call_poc_inact_window_t

0xbf46,	// (0x0006792f) context_pane_ParamLimits

0x41a4,	// (0x0005fb8d) signal_pane_ParamLimits

0xaa88,	// (0x00066471) main_call2_pane

0xbf34,	// (0x0006791d) popup_phob_thumbnail2_window_ParamLimits

0xbf34,	// (0x0006791d) popup_phob_thumbnail2_window

0xac39,	// (0x00066622) aid_hotspot_pointer_arrow_pane

0xac41,	// (0x0006662a) aid_hotspot_pointer_hand_pane

0x3c64,	// (0x0005f64d) phob_pre_status_pane_g5

0x17f2,	// (0x0005d1db) cams_zoom_pane_ParamLimits

0x1801,	// (0x0005d1ea) image_vga_pane_ParamLimits

0x181b,	// (0x0005d204) main_camera_pane_g1_ParamLimits

0x182d,	// (0x0005d216) main_camera_pane_g2_ParamLimits

0x183d,	// (0x0005d226) main_camera_pane_g3_ParamLimits

0x1851,	// (0x0005d23a) main_camera_pane_g4_ParamLimits

0x1865,	// (0x0005d24e) main_camera_pane_g5_ParamLimits

0x1879,	// (0x0005d262) main_camera_pane_g6_ParamLimits

0x188d,	// (0x0005d276) main_camera_pane_g7_ParamLimits

0xf22e,	// (0x0006ac17) main_camera_pane_g_ParamLimits

0x18a1,	// (0x0005d28a) main_camera_pane_t1_ParamLimits

0x18b7,	// (0x0005d2a0) main_camera_pane_t2_ParamLimits

0xf23f,	// (0x0006ac28) main_camera_pane_t_ParamLimits

0x9dc2,	// (0x000657ab) bg_popup_preview_window_pane_cp01_ParamLimits

0x9dc2,	// (0x000657ab) bg_popup_preview_window_pane_cp01

0xaf3c,	// (0x00066925) popup_phob_thumbnail2_window_g1_ParamLimits

0xaf3c,	// (0x00066925) popup_phob_thumbnail2_window_g1

0x9b67,	// (0x00065550) call2_cli_visual_pane

0x392d,	// (0x0005f316) popup_call2_audio_conf_window_ParamLimits

0x392d,	// (0x0005f316) popup_call2_audio_conf_window

0x3955,	// (0x0005f33e) popup_call2_audio_first_window_ParamLimits

0x3955,	// (0x0005f33e) popup_call2_audio_first_window

0x39eb,	// (0x0005f3d4) popup_call2_audio_in_window_ParamLimits

0x39eb,	// (0x0005f3d4) popup_call2_audio_in_window

0x3a37,	// (0x0005f420) popup_call2_audio_out_window_ParamLimits

0x3a37,	// (0x0005f420) popup_call2_audio_out_window

0x3aa9,	// (0x0005f492) popup_call2_audio_second_window_ParamLimits

0x3aa9,	// (0x0005f492) popup_call2_audio_second_window

0x3b0f,	// (0x0005f4f8) popup_call2_audio_wait_window_ParamLimits

0x3b0f,	// (0x0005f4f8) popup_call2_audio_wait_window

0x9b67,	// (0x00065550) bg_popup_call2_act_pane_cp03

0x9da4,	// (0x0006578d) list_conf_pane_cp

0xaf48,	// (0x00066931) popup_call2_audio_conf_window_t1

0xaf56,	// (0x0006693f) list_single_graphic_popup_conf2_pane_ParamLimits

0xaf56,	// (0x0006693f) list_single_graphic_popup_conf2_pane

0xa8a9,	// (0x00066292) list_highlight_pane_cp04

0xaf69,	// (0x00066952) list_single_graphic_popup_conf2_pane_g1

0xa8ba,	// (0x000662a3) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf536,	// (0x0006af1f) list_single_graphic_popup_conf2_pane_g

0xaf73,	// (0x0006695c) list_single_graphic_popup_conf2_pane_t1

0xaf81,	// (0x0006696a) bg_popup_call2_act_pane_cp01_ParamLimits

0xaf81,	// (0x0006696a) bg_popup_call2_act_pane_cp01

0xb00b,	// (0x000669f4) call_type_pane_cp05_ParamLimits

0xb00b,	// (0x000669f4) call_type_pane_cp05

0xb05f,	// (0x00066a48) popup_call2_audio_second_window_g1_ParamLimits

0xb05f,	// (0x00066a48) popup_call2_audio_second_window_g1

0xb0b3,	// (0x00066a9c) popup_call2_audio_second_window_g2_ParamLimits

0xb0b3,	// (0x00066a9c) popup_call2_audio_second_window_g2

0x0002,

0xf53b,	// (0x0006af24) popup_call2_audio_second_window_g_ParamLimits

0xf53b,	// (0x0006af24) popup_call2_audio_second_window_g

0xb118,	// (0x00066b01) popup_call2_audio_second_window_t1_ParamLimits

0xb118,	// (0x00066b01) popup_call2_audio_second_window_t1

0xb1d3,	// (0x00066bbc) popup_call2_audio_second_window_t2_ParamLimits

0xb1d3,	// (0x00066bbc) popup_call2_audio_second_window_t2

0xb226,	// (0x00066c0f) popup_call2_audio_second_window_t3_ParamLimits

0xb226,	// (0x00066c0f) popup_call2_audio_second_window_t3

0x0003,

0xf542,	// (0x0006af2b) popup_call2_audio_second_window_t_ParamLimits

0xf542,	// (0x0006af2b) popup_call2_audio_second_window_t

0x9b67,	// (0x00065550) bg_popup_call2_in_pane_cp02

0x9b71,	// (0x0006555a) call_type_pane_cp04

0x9b79,	// (0x00065562) popup_call2_audio_wait_window_g1

0x9b81,	// (0x0006556a) popup_call2_audio_wait_window_g2

0x0001,

0xf11b,	// (0x0006ab04) popup_call2_audio_wait_window_g

0x9b89,	// (0x00065572) popup_call2_audio_wait_window_t3

0xb319,	// (0x00066d02) bg_popup_call2_act_pane_ParamLimits

0xb319,	// (0x00066d02) bg_popup_call2_act_pane

0xb3d9,	// (0x00066dc2) call_type_pane_cp03_ParamLimits

0xb3d9,	// (0x00066dc2) call_type_pane_cp03

0xb43d,	// (0x00066e26) popup_call2_audio_first_window_g1_ParamLimits

0xb43d,	// (0x00066e26) popup_call2_audio_first_window_g1

0xb4ad,	// (0x00066e96) popup_call2_audio_first_window_g2_ParamLimits

0xb4ad,	// (0x00066e96) popup_call2_audio_first_window_g2

0xab59,	// (0x00066542) popup_call2_audio_first_window_g3_ParamLimits

0xab59,	// (0x00066542) popup_call2_audio_first_window_g3

0x0004,

0xf54b,	// (0x0006af34) popup_call2_audio_first_window_g_ParamLimits

0xf54b,	// (0x0006af34) popup_call2_audio_first_window_g

0xb58b,	// (0x00066f74) popup_call2_audio_first_window_t1_ParamLimits

0xb58b,	// (0x00066f74) popup_call2_audio_first_window_t1

0xb68e,	// (0x00067077) popup_call2_audio_first_window_t4_ParamLimits

0xb68e,	// (0x00067077) popup_call2_audio_first_window_t4

0xb771,	// (0x0006715a) popup_call2_audio_first_window_t5_ParamLimits

0xb771,	// (0x0006715a) popup_call2_audio_first_window_t5

0x0003,

0xf556,	// (0x0006af3f) popup_call2_audio_first_window_t_ParamLimits

0xf556,	// (0x0006af3f) popup_call2_audio_first_window_t

0x9dba,	// (0x000657a3) bg_popup_call2_act_pane_g1

0xbde0,	// (0x000677c9) popup_cale_lunar_info_window_t1

0xbdee,	// (0x000677d7) popup_cale_lunar_info_window_t2

0xbdfc,	// (0x000677e5) popup_cale_lunar_info_window_t3

0x9b67,	// (0x00065550) bg_popup_call2_bubble_pane

0xb872,	// (0x0006725b) bg_popup_call2_in_pane_cp01_ParamLimits

0xb872,	// (0x0006725b) bg_popup_call2_in_pane_cp01

0x9843,	// (0x0006522c) call_type_pane_cp02

0xb8ba,	// (0x000672a3) popup_call2_audio_out_window_g1_ParamLimits

0xb8ba,	// (0x000672a3) popup_call2_audio_out_window_g1

0xb8e6,	// (0x000672cf) popup_call2_audio_out_window_g2_ParamLimits

0xb8e6,	// (0x000672cf) popup_call2_audio_out_window_g2

0xb90e,	// (0x000672f7) popup_call2_audio_out_window_g3_ParamLimits

0xb90e,	// (0x000672f7) popup_call2_audio_out_window_g3

0x0003,

0xf55f,	// (0x0006af48) popup_call2_audio_out_window_g_ParamLimits

0xf55f,	// (0x0006af48) popup_call2_audio_out_window_g

0xb949,	// (0x00067332) popup_call2_audio_out_window_t1_ParamLimits

0xb949,	// (0x00067332) popup_call2_audio_out_window_t1

0xb9a8,	// (0x00067391) popup_call2_audio_out_window_t2_ParamLimits

0xb9a8,	// (0x00067391) popup_call2_audio_out_window_t2

0xb9fc,	// (0x000673e5) popup_call2_audio_out_window_t3_ParamLimits

0xb9fc,	// (0x000673e5) popup_call2_audio_out_window_t3

0xba12,	// (0x000673fb) popup_call2_audio_out_window_t4_ParamLimits

0xba12,	// (0x000673fb) popup_call2_audio_out_window_t4

0xba28,	// (0x00067411) popup_call2_audio_out_window_t5_ParamLimits

0xba28,	// (0x00067411) popup_call2_audio_out_window_t5

0x0005,

0xf568,	// (0x0006af51) popup_call2_audio_out_window_t_ParamLimits

0xf568,	// (0x0006af51) popup_call2_audio_out_window_t

0xba8c,	// (0x00067475) bg_popup_call2_in_pane_ParamLimits

0xba8c,	// (0x00067475) bg_popup_call2_in_pane

0xbae8,	// (0x000674d1) popup_call2_audio_in_window_g1_ParamLimits

0xbae8,	// (0x000674d1) popup_call2_audio_in_window_g1

0xbb20,	// (0x00067509) popup_call2_audio_in_window_g2_ParamLimits

0xbb20,	// (0x00067509) popup_call2_audio_in_window_g2

0xbb58,	// (0x00067541) popup_call2_audio_in_window_g3_ParamLimits

0xbb58,	// (0x00067541) popup_call2_audio_in_window_g3

0x0003,

0xf575,	// (0x0006af5e) popup_call2_audio_in_window_g_ParamLimits

0xf575,	// (0x0006af5e) popup_call2_audio_in_window_g

0xbbb0,	// (0x00067599) popup_call2_audio_in_window_t1_ParamLimits

0xbbb0,	// (0x00067599) popup_call2_audio_in_window_t1

0xbc30,	// (0x00067619) popup_call2_audio_in_window_t2_ParamLimits

0xbc30,	// (0x00067619) popup_call2_audio_in_window_t2

0xbcb0,	// (0x00067699) popup_call2_audio_in_window_t3_ParamLimits

0xbcb0,	// (0x00067699) popup_call2_audio_in_window_t3

0xbcca,	// (0x000676b3) popup_call2_audio_in_window_t4_ParamLimits

0xbcca,	// (0x000676b3) popup_call2_audio_in_window_t4

0xbcdc,	// (0x000676c5) popup_call2_audio_in_window_t5_ParamLimits

0xbcdc,	// (0x000676c5) popup_call2_audio_in_window_t5

0xbcf1,	// (0x000676da) popup_call2_audio_in_window_t6_ParamLimits

0xbcf1,	// (0x000676da) popup_call2_audio_in_window_t6

0x0005,

0xf57e,	// (0x0006af67) popup_call2_audio_in_window_t_ParamLimits

0xf57e,	// (0x0006af67) popup_call2_audio_in_window_t

0x9dba,	// (0x000657a3) bg_popup_call2_in_pane_g1

0xbe0a,	// (0x000677f3) popup_cale_lunar_info_window_t4

0x0003,

0xf5e6,	// (0x0006afcf) popup_cale_lunar_info_window_t

0x9dc2,	// (0x000657ab) bg_popup_call2_rect_pane_ParamLimits

0x9dc2,	// (0x000657ab) bg_popup_call2_rect_pane

0x9b67,	// (0x00065550) call2_cli_visual_graphic_pane

0x9b67,	// (0x00065550) call2_cli_visual_text_pane

0xbff9,	// (0x000679e2) smil_status_volume_pane_g3

0x0002,

0x9f32,	// (0x0006591b) call2_cli_visual_graphic_pane_g1

0x9f32,	// (0x0006591b) call2_cli_visual_graphic_pane_g2

0x9f32,	// (0x0006591b) call2_cli_visual_graphic_pane_g3

0x0002,

0xf58b,	// (0x0006af74) call2_cli_visual_graphic_pane_g

0xbd06,	// (0x000676ef) bg_popup_call2_rect_pane_g1

0x9fda,	// (0x000659c3) bg_popup_call2_rect_pane_g2

0xbd0e,	// (0x000676f7) bg_popup_call2_rect_pane_g3

0xbd16,	// (0x000676ff) bg_popup_call2_rect_pane_g4

0xbd1e,	// (0x00067707) bg_popup_call2_rect_pane_g5

0xbd26,	// (0x0006770f) bg_popup_call2_rect_pane_g6

0xbd2e,	// (0x00067717) bg_popup_call2_rect_pane_g7

0xbd36,	// (0x0006771f) bg_popup_call2_rect_pane_g8

0xbd3e,	// (0x00067727) bg_popup_call2_rect_pane_g9

0x0008,

0xf592,	// (0x0006af7b) bg_popup_call2_rect_pane_g

0xbd46,	// (0x0006772f) bg_popup_call2_bubble_pane_g1

0xbd4e,	// (0x00067737) bg_popup_call2_bubble_pane_g2

0xbd56,	// (0x0006773f) bg_popup_call2_bubble_pane_g3

0xbd5e,	// (0x00067747) bg_popup_call2_bubble_pane_g4

0xbd66,	// (0x0006774f) bg_popup_call2_bubble_pane_g5

0xbd6e,	// (0x00067757) bg_popup_call2_bubble_pane_g6

0xbd76,	// (0x0006775f) bg_popup_call2_bubble_pane_g7

0xbd7e,	// (0x00067767) bg_popup_call2_bubble_pane_g8

0xbd86,	// (0x0006776f) bg_popup_call2_bubble_pane_g9

0x0008,

0xf5a5,	// (0x0006af8e) bg_popup_call2_bubble_pane_g

0x13fb,	// (0x0005cde4) aid_cale_week_size_cell_pane

0x18d1,	// (0x0005d2ba) aid_cams_cif_uncrop_pane_ParamLimits

0x18d1,	// (0x0005d2ba) aid_cams_cif_uncrop_pane

0x1a8a,	// (0x0005d473) aid_cams_size_cell_ParamLimits

0x1a8a,	// (0x0005d473) aid_cams_size_cell

0x1a9e,	// (0x0005d487) grid_cams_pane_ParamLimits

0x1ab8,	// (0x0005d4a1) linegrid_cams_pane_ParamLimits

0x1cb2,	// (0x0005d69b) call_video_pane_t1

0x1ccc,	// (0x0005d6b5) call_video_pane_t2

0x0001,

0xf292,	// (0x0006ac7b) call_video_pane_t

0x2117,	// (0x0005db00) aid_cale_month_size_cell_pane_ParamLimits

0x2117,	// (0x0005db00) aid_cale_month_size_cell_pane

0xf62f,	// (0x0006b018) smil_status_volume_pane_g

0xc006,	// (0x000679ef) volume_smil_pane_ParamLimits

0x0b79,	// (0x0005c562) aid_popup2_width_pane

0x1355,	// (0x0005cd3e) cell_qdial_pane_g4_ParamLimits

0x1355,	// (0x0005cd3e) cell_qdial_pane_g4

0x2da2,	// (0x0005e78b) aid_blid_cardinal_pane_ParamLimits

0x2db2,	// (0x0005e79b) aid_blid_destination_pane_ParamLimits

0x2db2,	// (0x0005e79b) aid_blid_destination_pane

0x9dc2,	// (0x000657ab) bg_popup_call_poc_act_pane_ParamLimits

0x9dc2,	// (0x000657ab) bg_popup_call_poc_act_pane

0x9dc2,	// (0x000657ab) bg_popup_call_poc_inact_pane_ParamLimits

0x9dc2,	// (0x000657ab) bg_popup_call_poc_inact_pane

0xbd8e,	// (0x00067777) bg_popup_call_poc_act_pane_g1

0xbd96,	// (0x0006777f) bg_popup_call_poc_act_pane_g2

0xbd9e,	// (0x00067787) bg_popup_call_poc_act_pane_g3

0xbd5e,	// (0x00067747) bg_popup_call_poc_act_pane_g4

0xbd66,	// (0x0006774f) bg_popup_call_poc_act_pane_g5

0xbda6,	// (0x0006778f) bg_popup_call_poc_act_pane_g6

0xbd76,	// (0x0006775f) bg_popup_call_poc_act_pane_g7

0xbdae,	// (0x00067797) bg_popup_call_poc_act_pane_g8

0x9b67,	// (0x00065550) main_usb_pane

0xbf0b,	// (0x000678f4) popup_cale_lunar_info_window

0x1f97,	// (0x0005d980) im_reading_pane_t1_ParamLimits

0xa24b,	// (0x00065c34) list_im_pane_ParamLimits

0xa25c,	// (0x00065c45) scroll_pane_cp07_ParamLimits

0x9b67,	// (0x00065550) grid_highlight_pane_cp012

0x9dc2,	// (0x000657ab) mup_scale_pane_ParamLimits

0xac89,	// (0x00066672) main_usb_pane_g1_ParamLimits

0xac89,	// (0x00066672) main_usb_pane_g1

0x3b70,	// (0x0005f559) main_usb_pane_g2_ParamLimits

0x3b70,	// (0x0005f559) main_usb_pane_g2

0x0001,

0xf5cf,	// (0x0006afb8) main_usb_pane_g_ParamLimits

0xf5cf,	// (0x0006afb8) main_usb_pane_g

0x3b86,	// (0x0005f56f) main_usb_pane_t1_ParamLimits

0x3b86,	// (0x0005f56f) main_usb_pane_t1

0x3b98,	// (0x0005f581) main_usb_pane_t2_ParamLimits

0x3b98,	// (0x0005f581) main_usb_pane_t2

0x3baa,	// (0x0005f593) main_usb_pane_t3_ParamLimits

0x3baa,	// (0x0005f593) main_usb_pane_t3

0x3bbc,	// (0x0005f5a5) main_usb_pane_t4_ParamLimits

0x3bbc,	// (0x0005f5a5) main_usb_pane_t4

0x3bd1,	// (0x0005f5ba) main_usb_pane_t5_ParamLimits

0x3bd1,	// (0x0005f5ba) main_usb_pane_t5

0x3be6,	// (0x0005f5cf) main_usb_pane_t6_ParamLimits

0x3be6,	// (0x0005f5cf) main_usb_pane_t6

0x0005,

0xf5d4,	// (0x0006afbd) main_usb_pane_t_ParamLimits

0x2d41,	// (0x0005e72a) aid_text_placing

0x2d4c,	// (0x0005e735) main_location2_pane_t1_ParamLimits

0x2d62,	// (0x0005e74b) main_location2_pane_t2_ParamLimits

0x2d78,	// (0x0005e761) main_location2_pane_t3_ParamLimits

0x2d8e,	// (0x0005e777) main_location2_pane_t4_ParamLimits

0x2d8e,	// (0x0005e777) main_location2_pane_t4

0xf3f3,	// (0x0006addc) main_location2_pane_t_ParamLimits

0x9dfe,	// (0x000657e7) find_pinb_pane_g2_ParamLimits

0x9dfe,	// (0x000657e7) find_pinb_pane_g2

0x0001,

0xf141,	// (0x0006ab2a) find_pinb_pane_g_ParamLimits

0xf141,	// (0x0006ab2a) find_pinb_pane_g

0x9e0a,	// (0x000657f3) find_pinb_pane_t1_ParamLimits

0x9e1c,	// (0x00065805) find_pinb_pane_t2_ParamLimits

0xf146,	// (0x0006ab2f) find_pinb_pane_t_ParamLimits

0x9b67,	// (0x00065550) main_call3_pane

0x248b,	// (0x0005de74) cale_month_day_heading_pane_t1_ParamLimits

0x24e9,	// (0x0005ded2) cale_month_day_heading_pane_t2_ParamLimits

0x254e,	// (0x0005df37) cale_month_day_heading_pane_t3_ParamLimits

0x25b3,	// (0x0005df9c) cale_month_day_heading_pane_t4_ParamLimits

0x2618,	// (0x0005e001) cale_month_day_heading_pane_t5_ParamLimits

0x267d,	// (0x0005e066) cale_month_day_heading_pane_t6_ParamLimits

0x26e2,	// (0x0005e0cb) cale_month_day_heading_pane_t7_ParamLimits

0xf2ca,	// (0x0006acb3) cale_month_day_heading_pane_t_ParamLimits

0xa4a8,	// (0x00065e91) smil_status_volume_pane

0x3628,	// (0x0005f011) postcard_address_pane_ParamLimits

0x3628,	// (0x0005f011) postcard_address_pane

0x363e,	// (0x0005f027) postcard_message_pane_ParamLimits

0x363e,	// (0x0005f027) postcard_message_pane

0x3b49,	// (0x0005f532) call2_cli_visual_pane_t1_ParamLimits

0x3b49,	// (0x0005f532) call2_cli_visual_pane_t1

0x43b5,	// (0x0005fd9e) postcard_message_pane_t1_ParamLimits

0x43b5,	// (0x0005fd9e) postcard_message_pane_t1

0xc01b,	// (0x00067a04) postcard_address_pane_t1_ParamLimits

0xc01b,	// (0x00067a04) postcard_address_pane_t1

0x43a1,	// (0x0005fd8a) popup_call3_audio_in_window_ParamLimits

0x43a1,	// (0x0005fd8a) popup_call3_audio_in_window

0x4226,	// (0x0005fc0f) bg_popup_call3_in_pane_ParamLimits

0x4226,	// (0x0005fc0f) bg_popup_call3_in_pane

0x42a2,	// (0x0005fc8b) popup_call3_audio_in_window_g1_ParamLimits

0x42a2,	// (0x0005fc8b) popup_call3_audio_in_window_g1

0x42c2,	// (0x0005fcab) popup_call3_audio_in_window_g2_ParamLimits

0x42c2,	// (0x0005fcab) popup_call3_audio_in_window_g2

0x42e2,	// (0x0005fccb) popup_call3_audio_in_window_g3_ParamLimits

0x42e2,	// (0x0005fccb) popup_call3_audio_in_window_g3

0x0003,

0xf636,	// (0x0006b01f) popup_call3_audio_in_window_g_ParamLimits

0xf636,	// (0x0006b01f) popup_call3_audio_in_window_g

0x4313,	// (0x0005fcfc) popup_call3_audio_in_window_t1_ParamLimits

0x4313,	// (0x0005fcfc) popup_call3_audio_in_window_t1

0x4351,	// (0x0005fd3a) popup_call3_audio_in_window_t2_ParamLimits

0x4351,	// (0x0005fd3a) popup_call3_audio_in_window_t2

0x438f,	// (0x0005fd78) popup_call3_audio_in_window_t3_ParamLimits

0x438f,	// (0x0005fd78) popup_call3_audio_in_window_t3

0x0002,

0xf63f,	// (0x0006b028) popup_call3_audio_in_window_t_ParamLimits

0xf63f,	// (0x0006b028) popup_call3_audio_in_window_t

0xaa88,	// (0x00066471) bg_popup_call3_rect_pane

0xbd06,	// (0x000676ef) bg_popup_call3_rect_pane_g1

0x9fda,	// (0x000659c3) bg_popup_call3_rect_pane_g2

0xbd0e,	// (0x000676f7) bg_popup_call3_rect_pane_g3

0xbd16,	// (0x000676ff) bg_popup_call3_rect_pane_g4

0xbd1e,	// (0x00067707) bg_popup_call3_rect_pane_g5

0xbd26,	// (0x0006770f) bg_popup_call3_rect_pane_g6

0xbd2e,	// (0x00067717) bg_popup_call3_rect_pane_g7

0x318a,	// (0x0005eb73) mup_visualizer_osc_pane

0xab67,	// (0x00066550) mup_visualizer_spec_pane

0x4256,	// (0x0005fc3f) call3_video_qcif_pane_ParamLimits

0x4256,	// (0x0005fc3f) call3_video_qcif_pane

0x4269,	// (0x0005fc52) call3_video_qcif_uncrop_pane_ParamLimits

0x4269,	// (0x0005fc52) call3_video_qcif_uncrop_pane

0x4279,	// (0x0005fc62) call3_video_subqcif_pane_ParamLimits

0x4279,	// (0x0005fc62) call3_video_subqcif_pane

0x428f,	// (0x0005fc78) call3_video_subqcif_uncrop_pane_ParamLimits

0x428f,	// (0x0005fc78) call3_video_subqcif_uncrop_pane

0x4302,	// (0x0005fceb) popup_call3_audio_in_window_g4_ParamLimits

0x4302,	// (0x0005fceb) popup_call3_audio_in_window_g4

0x4215,	// (0x0005fbfe) mup_spec_half_pane

0x421e,	// (0x0005fc07) mup_spec_half_pane_cp

0xbfb9,	// (0x000679a2) mup_osc_middle_pane

0xbfc2,	// (0x000679ab) mup_visualizer_osc_pane_g1

0x41f5,	// (0x0005fbde) mup_spec_bar_pane_ParamLimits

0x41f5,	// (0x0005fbde) mup_spec_bar_pane

0xbfa6,	// (0x0006798f) mup_spec_bar_pane_g1

0xbfb0,	// (0x00067999) mup_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006b013) mup_spec_bar_pane_g

0x13fb,	// (0x0005cde4) aid_cale_week_size_cell_pane_ParamLimits

0x140e,	// (0x0005cdf7) bg_cale_heading_pane_ParamLimits

0xa056,	// (0x00065a3f) bg_cale_pane_cp01_ParamLimits

0x142a,	// (0x0005ce13) cale_week_corner_pane_ParamLimits

0x1440,	// (0x0005ce29) cale_week_day_heading_pane_ParamLimits

0x145c,	// (0x0005ce45) cale_week_scroll_pane_g1_ParamLimits

0x1475,	// (0x0005ce5e) cale_week_scroll_pane_g2_ParamLimits

0x1486,	// (0x0005ce6f) cale_week_scroll_pane_g3_ParamLimits

0x1497,	// (0x0005ce80) cale_week_scroll_pane_g4_ParamLimits

0x14a8,	// (0x0005ce91) cale_week_scroll_pane_g5_ParamLimits

0x14b9,	// (0x0005cea2) cale_week_scroll_pane_g6_ParamLimits

0x14ca,	// (0x0005ceb3) cale_week_scroll_pane_g7_ParamLimits

0x14db,	// (0x0005cec4) cale_week_scroll_pane_g8_ParamLimits

0x14ec,	// (0x0005ced5) cale_week_scroll_pane_g9_ParamLimits

0x14fd,	// (0x0005cee6) cale_week_scroll_pane_g10_ParamLimits

0x150e,	// (0x0005cef7) cale_week_scroll_pane_g11_ParamLimits

0x151f,	// (0x0005cf08) cale_week_scroll_pane_g12_ParamLimits

0x1530,	// (0x0005cf19) cale_week_scroll_pane_g13_ParamLimits

0x1549,	// (0x0005cf32) cale_week_scroll_pane_g14_ParamLimits

0x1562,	// (0x0005cf4b) cale_week_scroll_pane_g15_ParamLimits

0xf1d2,	// (0x0006abbb) cale_week_scroll_pane_g_ParamLimits

0x157b,	// (0x0005cf64) cale_week_time_pane_ParamLimits

0x158c,	// (0x0005cf75) grid_cale_week_pane_ParamLimits

0xa06f,	// (0x00065a58) listscroll_cale_week_pane_t1

0x15a7,	// (0x0005cf90) scroll_pane_cp08_ParamLimits

0x2168,	// (0x0005db51) cale_month_corner_pane_ParamLimits

0xa472,	// (0x00065e5b) cale_month_pane_t1

0x244c,	// (0x0005de35) cale_month_week_pane_ParamLimits

0x2b65,	// (0x0005e54e) popup_call_status_window_g1_ParamLimits

0x2b79,	// (0x0005e562) popup_call_status_window_g2_ParamLimits

0x2b8d,	// (0x0005e576) popup_call_status_window_g3_ParamLimits

0xf37a,	// (0x0006ad63) popup_call_status_window_g_ParamLimits

0xa7bb,	// (0x000661a4) aid_call2_pane

0x3452,	// (0x0005ee3b) msg_header_pane_g1

0x3628,	// (0x0005f011) postcard_address2_pane_ParamLimits

0x3628,	// (0x0005f011) postcard_address2_pane

0x363e,	// (0x0005f027) postcard_message2_pane_ParamLimits

0x363e,	// (0x0005f027) postcard_message2_pane

0x41b2,	// (0x0005fb9b) message2_row_pane_ParamLimits

0x41b2,	// (0x0005fb9b) message2_row_pane

0xbf61,	// (0x0006794a) address2_row_pane_ParamLimits

0xbf61,	// (0x0006794a) address2_row_pane

0xbf74,	// (0x0006795d) postcard_message2_row_pane_g1

0xbf7c,	// (0x00067965) postcard_message2_row_pane_t1

0xbf74,	// (0x0006795d) address2_row_pane_g1

0xbf7c,	// (0x00067965) address2_row_pane_t1

0x17b5,	// (0x0005d19e) aid_size_cell_vorec

0x9b67,	// (0x00065550) main_rss_pane

0x41d5,	// (0x0005fbbe) rss_list_single_pane_ParamLimits

0x41d5,	// (0x0005fbbe) rss_list_single_pane

0xbf8a,	// (0x00067973) rss_list_single_pane_t1

0xbf98,	// (0x00067981) rss_list_single_pane_t2

0x0001,

0xf625,	// (0x0006b00e) rss_list_single_pane_t

0x9b67,	// (0x00065550) main_camera2_pane

0x9b67,	// (0x00065550) main_video2_pane

0x4424,	// (0x0005fe0d) cams_zoom_pane_cp2_ParamLimits

0x4424,	// (0x0005fe0d) cams_zoom_pane_cp2

0x443b,	// (0x0005fe24) image2_vga_pane_ParamLimits

0x443b,	// (0x0005fe24) image2_vga_pane

0x4483,	// (0x0005fe6c) main_camera2_pane_g1_ParamLimits

0x4483,	// (0x0005fe6c) main_camera2_pane_g1

0x44a3,	// (0x0005fe8c) main_camera2_pane_g2_ParamLimits

0x44a3,	// (0x0005fe8c) main_camera2_pane_g2

0x44ba,	// (0x0005fea3) main_camera2_pane_g3_ParamLimits

0x44ba,	// (0x0005fea3) main_camera2_pane_g3

0x44d1,	// (0x0005feba) main_camera2_pane_g4_ParamLimits

0x44d1,	// (0x0005feba) main_camera2_pane_g4

0x44e8,	// (0x0005fed1) main_camera2_pane_g5_ParamLimits

0x44e8,	// (0x0005fed1) main_camera2_pane_g5

0x44ff,	// (0x0005fee8) main_camera2_pane_g6_ParamLimits

0x44ff,	// (0x0005fee8) main_camera2_pane_g6

0x4516,	// (0x0005feff) main_camera2_pane_g7_ParamLimits

0x4516,	// (0x0005feff) main_camera2_pane_g7

0x452d,	// (0x0005ff16) main_camera2_pane_g8_ParamLimits

0x452d,	// (0x0005ff16) main_camera2_pane_g8

0x0008,

0xf646,	// (0x0006b02f) main_camera2_pane_g_ParamLimits

0xf646,	// (0x0006b02f) main_camera2_pane_g

0x455b,	// (0x0005ff44) main_camera2_pane_t1_ParamLimits

0x455b,	// (0x0005ff44) main_camera2_pane_t1

0x4590,	// (0x0005ff79) main_camera2_pane_t2_ParamLimits

0x4590,	// (0x0005ff79) main_camera2_pane_t2

0x45ad,	// (0x0005ff96) main_camera2_pane_t3_ParamLimits

0x45ad,	// (0x0005ff96) main_camera2_pane_t3

0x460b,	// (0x0005fff4) main_camera2_pane_t4_ParamLimits

0x460b,	// (0x0005fff4) main_camera2_pane_t4

0x0006,

0xf659,	// (0x0006b042) main_camera2_pane_t_ParamLimits

0xf659,	// (0x0006b042) main_camera2_pane_t

0x4694,	// (0x0006007d) cams_zoom_pane_cp4_ParamLimits

0x4694,	// (0x0006007d) cams_zoom_pane_cp4

0x46aa,	// (0x00060093) image2_cif_pane_ParamLimits

0x46aa,	// (0x00060093) image2_cif_pane

0x46d5,	// (0x000600be) image2_subqcif_pane_ParamLimits

0x46d5,	// (0x000600be) image2_subqcif_pane

0x46f0,	// (0x000600d9) main_video2_pane_g1_ParamLimits

0x46f0,	// (0x000600d9) main_video2_pane_g1

0x470a,	// (0x000600f3) main_video2_pane_g2_ParamLimits

0x470a,	// (0x000600f3) main_video2_pane_g2

0x4720,	// (0x00060109) main_video2_pane_g3_ParamLimits

0x4720,	// (0x00060109) main_video2_pane_g3

0x4736,	// (0x0006011f) main_video2_pane_g4_ParamLimits

0x4736,	// (0x0006011f) main_video2_pane_g4

0x474c,	// (0x00060135) main_video2_pane_g5_ParamLimits

0x474c,	// (0x00060135) main_video2_pane_g5

0x4762,	// (0x0006014b) main_video2_pane_g6_ParamLimits

0x4762,	// (0x0006014b) main_video2_pane_g6

0x0005,

0xf668,	// (0x0006b051) main_video2_pane_g_ParamLimits

0xf668,	// (0x0006b051) main_video2_pane_g

0x477c,	// (0x00060165) main_video2_pane_t1_ParamLimits

0x477c,	// (0x00060165) main_video2_pane_t1

0x47a0,	// (0x00060189) main_video2_pane_t2_ParamLimits

0x47a0,	// (0x00060189) main_video2_pane_t2

0x47f0,	// (0x000601d9) main_video2_pane_t3_ParamLimits

0x47f0,	// (0x000601d9) main_video2_pane_t3

0x0002,

0xf675,	// (0x0006b05e) main_video2_pane_t_ParamLimits

0xf675,	// (0x0006b05e) main_video2_pane_t

0x3ca4,	// (0x0005f68d) call_muted_g2

0x0001,

0xf617,	// (0x0006b000) call_muted_g

0x9b67,	// (0x00065550) main_mup2_pane

0x4838,	// (0x00060221) main_mup2_pane_g1_ParamLimits

0x4838,	// (0x00060221) main_mup2_pane_g1

0x4844,	// (0x0006022d) main_mup2_pane_g2_ParamLimits

0x4844,	// (0x0006022d) main_mup2_pane_g2

0xc13c,	// (0x00067b25) main_mup_pane_g13_cp1

0xc144,	// (0x00067b2d) mup_volume_pane_cp1

0x4862,	// (0x0006024b) main_mup2_pane_g4_ParamLimits

0x4862,	// (0x0006024b) main_mup2_pane_g4

0x4874,	// (0x0006025d) main_mup2_pane_g5_ParamLimits

0x4874,	// (0x0006025d) main_mup2_pane_g5

0x4886,	// (0x0006026f) main_mup2_pane_g6_ParamLimits

0x4886,	// (0x0006026f) main_mup2_pane_g6

0x4898,	// (0x00060281) main_mup2_pane_g7_ParamLimits

0x4898,	// (0x00060281) main_mup2_pane_g7

0x0006,

0xf67c,	// (0x0006b065) main_mup2_pane_g_ParamLimits

0xf67c,	// (0x0006b065) main_mup2_pane_g

0x48b0,	// (0x00060299) main_mup2_pane_t1_ParamLimits

0x48b0,	// (0x00060299) main_mup2_pane_t1

0x48c6,	// (0x000602af) main_mup2_pane_t2_ParamLimits

0x48c6,	// (0x000602af) main_mup2_pane_t2

0x48dc,	// (0x000602c5) main_mup2_pane_t3_ParamLimits

0x48dc,	// (0x000602c5) main_mup2_pane_t3

0x48f2,	// (0x000602db) main_mup2_pane_t4_ParamLimits

0x48f2,	// (0x000602db) main_mup2_pane_t4

0x490a,	// (0x000602f3) main_mup2_pane_t5_ParamLimits

0x490a,	// (0x000602f3) main_mup2_pane_t5

0x4922,	// (0x0006030b) main_mup2_pane_t6_ParamLimits

0x4922,	// (0x0006030b) main_mup2_pane_t6

0x0005,

0xf68b,	// (0x0006b074) main_mup2_pane_t_ParamLimits

0xf68b,	// (0x0006b074) main_mup2_pane_t

0x4952,	// (0x0006033b) mup2_visualizer_pane_ParamLimits

0x4952,	// (0x0006033b) mup2_visualizer_pane

0x4980,	// (0x00060369) mup_progress_pane_cp_ParamLimits

0x4980,	// (0x00060369) mup_progress_pane_cp

0xc11e,	// (0x00067b07) mup_volume_pane_cp_ParamLimits

0xc11e,	// (0x00067b07) mup_volume_pane_cp

0x4996,	// (0x0006037f) mup2_visualizer_pane_g1_ParamLimits

0x4996,	// (0x0006037f) mup2_visualizer_pane_g1

0xc05d,	// (0x00067a46) mup2_visualizer_pane_g2_ParamLimits

0xc05d,	// (0x00067a46) mup2_visualizer_pane_g2

0x49ab,	// (0x00060394) mup2_visualizer_pane_g3_ParamLimits

0x49ab,	// (0x00060394) mup2_visualizer_pane_g3

0x0002,

0xf698,	// (0x0006b081) mup2_visualizer_pane_g_ParamLimits

0xf698,	// (0x0006b081) mup2_visualizer_pane_g

0xadd2,	// (0x000667bb) aid_size_cell_fmradio

0x3e54,	// (0x0005f83d) aid_height_parent_landcape

0xa2da,	// (0x00065cc3) wml_content_pane_cp

0xa2e2,	// (0x00065ccb) wml_tabs_pane

0xa2eb,	// (0x00065cd4) popup_wml_miniature_window

0xa2f3,	// (0x00065cdc) scroll_pane_cp021

0xa307,	// (0x00065cf0) wml_content_pane_comp8

0x9b67,	// (0x00065550) bg_popup_sub_pane_cp05

0xc07b,	// (0x00067a64) popup_wml_miniature_window_g1

0xc083,	// (0x00067a6c) wml_miniature_view_pane

0x49b7,	// (0x000603a0) aid_size_wml_view

0x49bf,	// (0x000603a8) wml_miniature_view_pane_g1

0x49c8,	// (0x000603b1) wml_miniature_view_pane_g2

0x49d1,	// (0x000603ba) wml_miniature_view_pane_g3

0x49d9,	// (0x000603c2) wml_miniature_view_pane_g4

0x49e1,	// (0x000603ca) wml_miniature_view_pane_g5

0x49e9,	// (0x000603d2) wml_miniature_view_pane_g6

0x49f1,	// (0x000603da) wml_miniature_view_pane_g7

0x49f9,	// (0x000603e2) wml_miniature_view_pane_g8

0x0007,

0xf69f,	// (0x0006b088) wml_miniature_view_pane_g

0xc08b,	// (0x00067a74) background_graphic_ParamLimits

0xc08b,	// (0x00067a74) background_graphic

0xc097,	// (0x00067a80) wml_tabs_2_pane

0xc0a0,	// (0x00067a89) wml_tabs_3_pane_ParamLimits

0xc0a0,	// (0x00067a89) wml_tabs_3_pane

0xc0b2,	// (0x00067a9b) wml_tabs_4_pane_ParamLimits

0xc0b2,	// (0x00067a9b) wml_tabs_4_pane

0xc0c8,	// (0x00067ab1) wml_tabs_5_pane_ParamLimits

0xc0c8,	// (0x00067ab1) wml_tabs_5_pane

0xc0e2,	// (0x00067acb) wml_tabs_pane_g2_ParamLimits

0xc0e2,	// (0x00067acb) wml_tabs_pane_g2

0xc0f6,	// (0x00067adf) wml_tabs_pane_g3_ParamLimits

0xc0f6,	// (0x00067adf) wml_tabs_pane_g3

0x4a01,	// (0x000603ea) wml_tabs_2_active_pane_ParamLimits

0x4a01,	// (0x000603ea) wml_tabs_2_active_pane

0x4a15,	// (0x000603fe) wml_tabs_2_passive_pane_ParamLimits

0x4a15,	// (0x000603fe) wml_tabs_2_passive_pane

0x4a29,	// (0x00060412) wml_tabs_3_active_pane_cp_ParamLimits

0x4a29,	// (0x00060412) wml_tabs_3_active_pane_cp

0x4a3e,	// (0x00060427) wml_tabs_3_passive_pane_ParamLimits

0x4a3e,	// (0x00060427) wml_tabs_3_passive_pane

0x4a51,	// (0x0006043a) wml_tabs_3_passive_pane_cp_ParamLimits

0x4a51,	// (0x0006043a) wml_tabs_3_passive_pane_cp

0x4a68,	// (0x00060451) tabs_4_active_pane

0x4a70,	// (0x00060459) tabs_4_passive_pane

0x4a7a,	// (0x00060463) tabs_4_passive_pane_cp

0x4a82,	// (0x0006046b) tabs_4_passive_pane_cp2

0x3b68,	// (0x0005f551) aid_height_text

0x315c,	// (0x0005eb45) mup_volume_cont_pane_ParamLimits

0x315c,	// (0x0005eb45) mup_volume_cont_pane

0x0ff1,	// (0x0005c9da) aid_size_cell_pinb

0x0ffb,	// (0x0005c9e4) aid_size_list_pinb

0x496c,	// (0x00060355) mup2_volume_cont_pane_ParamLimits

0x496c,	// (0x00060355) mup2_volume_cont_pane

0xc10a,	// (0x00067af3) mup2_volume_cont_pane_g1_ParamLimits

0xc10a,	// (0x00067af3) mup2_volume_cont_pane_g1

0x0b85,	// (0x0005c56e) aid_size_cell_touch_ParamLimits

0x0b85,	// (0x0005c56e) aid_size_cell_touch

0x0e04,	// (0x0005c7ed) touch_pane_ParamLimits

0x0e04,	// (0x0005c7ed) touch_pane

0x0b67,	// (0x0005c550) main_rss2_pane

0xc14c,	// (0x00067b35) listscroll_rss2_pane

0xc155,	// (0x00067b3e) rss2_navigation_pane

0xc15d,	// (0x00067b46) list_rss2_pane

0xa94e,	// (0x00066337) scroll_pane_cp22

0xc165,	// (0x00067b4e) rss2_navigation_pane_g1

0xc16e,	// (0x00067b57) rss2_navigation_pane_g2

0xc176,	// (0x00067b5f) rss2_navigation_pane_g3

0x0002,

0xf6b0,	// (0x0006b099) rss2_navigation_pane_g

0xc17e,	// (0x00067b67) rss2_navigation_pane_t1

0x4a8c,	// (0x00060475) rss2_list_single_pane_ParamLimits

0x4a8c,	// (0x00060475) rss2_list_single_pane

0xc18c,	// (0x00067b75) rss2_list_single_pane_t2

0xc19a,	// (0x00067b83) rss2_list_single_pane_t3_ParamLimits

0xc19a,	// (0x00067b83) rss2_list_single_pane_t3

0xc1b7,	// (0x00067ba0) rss2_list_single_pane_t4

0x28d8,	// (0x0005e2c1) smil_status_pane_g1

0x0dea,	// (0x0005c7d3) main_image2_pane_ParamLimits

0x0dea,	// (0x0005c7d3) main_image2_pane

0x4544,	// (0x0005ff2d) main_camera2_pane_g9_ParamLimits

0x4544,	// (0x0005ff2d) main_camera2_pane_g9

0x4660,	// (0x00060049) main_camera2_pane_t5_ParamLimits

0x4660,	// (0x00060049) main_camera2_pane_t5

0xc032,	// (0x00067a1b) main_camera2_pane_t6_ParamLimits

0xc032,	// (0x00067a1b) main_camera2_pane_t6

0x4aa6,	// (0x0006048f) main_image2_pane_g1_ParamLimits

0x4aa6,	// (0x0006048f) main_image2_pane_g1

0x387f,	// (0x0005f268) smil2_video_pane_ParamLimits

0x387f,	// (0x0005f268) smil2_video_pane

0x0bc5,	// (0x0005c5ae) aid_zoom_text_primary_cp

0x0da6,	// (0x0005c78f) popup_preview_fixed_window

0xa243,	// (0x00065c2c) im_reading_pane_g1

0x4416,	// (0x0005fdff) cams2_bc_adjust_pane_cp_ParamLimits

0x4416,	// (0x0005fdff) cams2_bc_adjust_pane_cp

0x4686,	// (0x0006006f) cams2_bc_adjust_pane_ParamLimits

0x4686,	// (0x0006006f) cams2_bc_adjust_pane

0xc1c5,	// (0x00067bae) cams2_bc_adjust_pane_g1

0xc1cd,	// (0x00067bb6) cams2_slider_pane

0xc1d6,	// (0x00067bbf) cams2_slider_pane_g1

0xc1df,	// (0x00067bc8) cams2_slider_pane_g2

0x0006,

0xf6b7,	// (0x0006b0a0) cams2_slider_pane_g

0x10eb,	// (0x0005cad4) calc_display_pane_ParamLimits

0x1111,	// (0x0005cafa) calc_paper_pane_ParamLimits

0x1134,	// (0x0005cb1d) grid_calc_pane_ParamLimits

0xa81d,	// (0x00066206) popup_clock_digital_window_t1_ParamLimits

0xad6f,	// (0x00066758) main_image_pane_t1

0x10cd,	// (0x0005cab6) aid_size_cell_calc_ParamLimits

0x10cd,	// (0x0005cab6) aid_size_cell_calc

0x3e9a,	// (0x0005f883) popup_blid_sat_info2_window_ParamLimits

0x3e9a,	// (0x0005f883) popup_blid_sat_info2_window

0xc201,	// (0x00067bea) aid_size_cell_blid

0xc209,	// (0x00067bf2) bg_popup_window_pane_cp07

0xc22c,	// (0x00067c15) grid_popup_blid_pane

0xc236,	// (0x00067c1f) heading_pane_cp05_ParamLimits

0xc236,	// (0x00067c1f) heading_pane_cp05

0xc300,	// (0x00067ce9) cell_popup_blid_pane_ParamLimits

0xc300,	// (0x00067ce9) cell_popup_blid_pane

0xc32a,	// (0x00067d13) cell_popup_blid_pane_g1

0xc332,	// (0x00067d1b) cell_popup_blid_pane_t1

0x493c,	// (0x00060325) mup2_indicator_pane_ParamLimits

0x493c,	// (0x00060325) mup2_indicator_pane

0xaa88,	// (0x00066471) mup2_visualizer_osc_pane

0xc069,	// (0x00067a52) mup2_visualizer_spec_pane_ParamLimits

0xc069,	// (0x00067a52) mup2_visualizer_spec_pane

0x4abc,	// (0x000604a5) mup2_spec_half_pane

0x4ac5,	// (0x000604ae) mup2_spec_half_pane_cp

0x4acd,	// (0x000604b6) mup2_spec_bar_pane_ParamLimits

0x4acd,	// (0x000604b6) mup2_spec_bar_pane

0xbfa6,	// (0x0006798f) mup2_spec_bar_pane_g1

0xbfb0,	// (0x00067999) mup2_spec_bar_pane_g2

0x0001,

0xf62a,	// (0x0006b013) mup2_spec_bar_pane_g

0x4aed,	// (0x000604d6) mup2_osc_middle_pane

0xbfc2,	// (0x000679ab) mup2_visualizer_osc_pane_g1

0x0e76,	// (0x0005c85f) popup_number_entry_window_t1_ParamLimits

0x0e89,	// (0x0005c872) popup_number_entry_window_t2_ParamLimits

0x0e9b,	// (0x0005c884) popup_number_entry_window_t3_ParamLimits

0x0ead,	// (0x0005c896) popup_number_entry_window_t5_ParamLimits

0x0ead,	// (0x0005c896) popup_number_entry_window_t5

0xf0ec,	// (0x0006aad5) popup_number_entry_window_t_ParamLimits

0x0ee2,	// (0x0005c8cb) text_title_cp2_ParamLimits

0xac49,	// (0x00066632) aid_hotspot_pointer_text2_pane

0xac6f,	// (0x00066658) main_viewer_pane_g9_ParamLimits

0xac6f,	// (0x00066658) main_viewer_pane_g9

0xa472,	// (0x00065e5b) cale_month_pane_t1_ParamLimits

0xa4dd,	// (0x00065ec6) bg_cale_pane_ParamLimits

0xa4f5,	// (0x00065ede) list_cale_pane_ParamLimits

0xa06f,	// (0x00065a58) listscroll_cale_day_pane_t1

0xa506,	// (0x00065eef) scroll_pane_cp09_ParamLimits

0x3192,	// (0x0005eb7b) main_mup_eq_pane_t1_ParamLimits

0x3192,	// (0x0005eb7b) main_mup_eq_pane_t1

0x31ae,	// (0x0005eb97) main_mup_eq_pane_t2_ParamLimits

0x31ae,	// (0x0005eb97) main_mup_eq_pane_t2

0x31ca,	// (0x0005ebb3) main_mup_eq_pane_t3_ParamLimits

0x31ca,	// (0x0005ebb3) main_mup_eq_pane_t3

0x31e8,	// (0x0005ebd1) main_mup_eq_pane_t4_ParamLimits

0x31e8,	// (0x0005ebd1) main_mup_eq_pane_t4

0x3206,	// (0x0005ebef) main_mup_eq_pane_t5_ParamLimits

0x3206,	// (0x0005ebef) main_mup_eq_pane_t5

0x3224,	// (0x0005ec0d) main_mup_eq_pane_t6_ParamLimits

0x3224,	// (0x0005ec0d) main_mup_eq_pane_t6

0x323a,	// (0x0005ec23) main_mup_eq_pane_t7_ParamLimits

0x323a,	// (0x0005ec23) main_mup_eq_pane_t7

0x3250,	// (0x0005ec39) main_mup_eq_pane_t8_ParamLimits

0x3250,	// (0x0005ec39) main_mup_eq_pane_t8

0x3266,	// (0x0005ec4f) main_mup_eq_pane_t9_ParamLimits

0x3266,	// (0x0005ec4f) main_mup_eq_pane_t9

0x3282,	// (0x0005ec6b) main_mup_eq_pane_t10_ParamLimits

0x3282,	// (0x0005ec6b) main_mup_eq_pane_t10

0x0009,

0xf479,	// (0x0006ae62) main_mup_eq_pane_t_ParamLimits

0xf479,	// (0x0006ae62) main_mup_eq_pane_t

0x3357,	// (0x0005ed40) mup_equalizer_pane_cp5_ParamLimits

0x336f,	// (0x0005ed58) mup_equalizer_pane_cp6_ParamLimits

0x3387,	// (0x0005ed70) mup_equalizer_pane_cp7_ParamLimits

0x0b67,	// (0x0005c550) main_gallery_pane

0xbfcb,	// (0x000679b4) smil2_volume_pane

0xbfd3,	// (0x000679bc) smil_status_volume_pane_g1_ParamLimits

0xbfe6,	// (0x000679cf) smil_status_volume_pane_g2_ParamLimits

0xbff9,	// (0x000679e2) smil_status_volume_pane_g3_ParamLimits

0xf62f,	// (0x0006b018) smil_status_volume_pane_g_ParamLimits

0xc209,	// (0x00067bf2) bg_popup_window_pane_cp07_ParamLimits

0xc217,	// (0x00067c00) blid_firmament_pane

0x4af6,	// (0x000604df) aid_size_cell_gallery_ParamLimits

0x4af6,	// (0x000604df) aid_size_cell_gallery

0x4b0c,	// (0x000604f5) grid_gallery_pane_ParamLimits

0x4b0c,	// (0x000604f5) grid_gallery_pane

0x4b27,	// (0x00060510) cell_gallery_pane_ParamLimits

0x4b27,	// (0x00060510) cell_gallery_pane

0xc340,	// (0x00067d29) bg_cell_gallery_focus_pane_ParamLimits

0xc340,	// (0x00067d29) bg_cell_gallery_focus_pane

0xc352,	// (0x00067d3b) cell_gallery_pane_g1_ParamLimits

0xc352,	// (0x00067d3b) cell_gallery_pane_g1

0x4b78,	// (0x00060561) cell_gallery_pane_g2_ParamLimits

0x4b78,	// (0x00060561) cell_gallery_pane_g2

0x4b85,	// (0x0006056e) cell_gallery_pane_g3_ParamLimits

0x4b85,	// (0x0006056e) cell_gallery_pane_g3

0xc35e,	// (0x00067d47) cell_gallery_pane_g4_ParamLimits

0xc35e,	// (0x00067d47) cell_gallery_pane_g4

0x0003,

0xf6dd,	// (0x0006b0c6) cell_gallery_pane_g_ParamLimits

0xf6dd,	// (0x0006b0c6) cell_gallery_pane_g

0xc36a,	// (0x00067d53) bg_cell_gallery_focus_pane_g1

0xc372,	// (0x00067d5b) bg_cell_gallery_focus_pane_g2

0xc37a,	// (0x00067d63) bg_cell_gallery_focus_pane_g3

0xc382,	// (0x00067d6b) bg_cell_gallery_focus_pane_g4

0xc38a,	// (0x00067d73) bg_cell_gallery_focus_pane_g5

0xc392,	// (0x00067d7b) bg_cell_gallery_focus_pane_g6

0xc39a,	// (0x00067d83) bg_cell_gallery_focus_pane_g7

0xc3a2,	// (0x00067d8b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6e6,	// (0x0006b0cf) bg_cell_gallery_focus_pane_g

0xc3aa,	// (0x00067d93) aid_firma_cardinal

0xc3be,	// (0x00067da7) blid_firmament_pane_t1

0xc3d5,	// (0x00067dbe) blid_firmament_pane_t2

0xc3ec,	// (0x00067dd5) blid_firmament_pane_t3

0xc403,	// (0x00067dec) blid_firmament_pane_t4

0x0003,

0xf6f7,	// (0x0006b0e0) blid_firmament_pane_t

0xc41a,	// (0x00067e03) blid_sat_info_pane

0xc42a,	// (0x00067e13) blid_sat_info_pane_g1

0xc42a,	// (0x00067e13) blid_sat_info_pane_g2

0x0001,

0xf700,	// (0x0006b0e9) blid_sat_info_pane_g

0xc434,	// (0x00067e1d) blid_sat_info_pane_t1

0xc442,	// (0x00067e2b) smil2_volume_content_pane

0xc44b,	// (0x00067e34) smil2_volume_pane_g1

0xc453,	// (0x00067e3c) smil2_volume_content_pane_g1

0xc45c,	// (0x00067e45) smil2_volume_content_pane_g2

0xc465,	// (0x00067e4e) smil2_volume_content_pane_g3

0xc46e,	// (0x00067e57) smil2_volume_content_pane_g4

0xc477,	// (0x00067e60) smil2_volume_content_pane_g5

0xc480,	// (0x00067e69) smil2_volume_content_pane_g6

0xc489,	// (0x00067e72) smil2_volume_content_pane_g7

0xc492,	// (0x00067e7b) smil2_volume_content_pane_g8

0xc49b,	// (0x00067e84) smil2_volume_content_pane_g9

0xc4a4,	// (0x00067e8d) smil2_volume_content_pane_g10

0x0009,

0xf705,	// (0x0006b0ee) smil2_volume_content_pane_g

0x1607,	// (0x0005cff0) cale_week_day_heading_pane_t1_ParamLimits

0x161b,	// (0x0005d004) cale_week_day_heading_pane_t2_ParamLimits

0x162f,	// (0x0005d018) cale_week_day_heading_pane_t3_ParamLimits

0x1643,	// (0x0005d02c) cale_week_day_heading_pane_t4_ParamLimits

0x1657,	// (0x0005d040) cale_week_day_heading_pane_t5_ParamLimits

0x166b,	// (0x0005d054) cale_week_day_heading_pane_t6_ParamLimits

0x167f,	// (0x0005d068) cale_week_day_heading_pane_t7_ParamLimits

0xf1f1,	// (0x0006abda) cale_week_day_heading_pane_t_ParamLimits

0xa081,	// (0x00065a6a) bg_cale_side_pane_ParamLimits

0x1693,	// (0x0005d07c) cale_week_time_pane_t1_ParamLimits

0x16ab,	// (0x0005d094) cale_week_time_pane_t2_ParamLimits

0x16c3,	// (0x0005d0ac) cale_week_time_pane_t3_ParamLimits

0x16db,	// (0x0005d0c4) cale_week_time_pane_t4_ParamLimits

0x16f3,	// (0x0005d0dc) cale_week_time_pane_t5_ParamLimits

0x170b,	// (0x0005d0f4) cale_week_time_pane_t6_ParamLimits

0x1723,	// (0x0005d10c) cale_week_time_pane_t7_ParamLimits

0x173f,	// (0x0005d128) cale_week_time_pane_t8_ParamLimits

0xf200,	// (0x0006abe9) cale_week_time_pane_t_ParamLimits

0x175f,	// (0x0005d148) cell_cale_week_pane_g2_ParamLimits

0xa081,	// (0x00065a6a) bg_cale_side_pane_cp01_ParamLimits

0x2747,	// (0x0005e130) cale_month_week_pane_t1_ParamLimits

0x275e,	// (0x0005e147) cale_month_week_pane_t2_ParamLimits

0x2775,	// (0x0005e15e) cale_month_week_pane_t3_ParamLimits

0x278c,	// (0x0005e175) cale_month_week_pane_t4_ParamLimits

0x27a3,	// (0x0005e18c) cale_month_week_pane_t5_ParamLimits

0x27ba,	// (0x0005e1a3) cale_month_week_pane_t6_ParamLimits

0xf2d9,	// (0x0006acc2) cale_month_week_pane_t_ParamLimits

0xa484,	// (0x00065e6d) cell_cale_month_pane_g1_ParamLimits

0x0b67,	// (0x0005c550) main_cale_event_viewer_pane

0x0b67,	// (0x0005c550) listscroll_cale_event_viewer_pane

0xc4ad,	// (0x00067e96) list_cale_ev_pane

0xc4b5,	// (0x00067e9e) scroll_pane_cp023

0x4b92,	// (0x0006057b) field_cale_ev_pane_ParamLimits

0x4b92,	// (0x0006057b) field_cale_ev_pane

0xc4c1,	// (0x00067eaa) field_cale_ev_content_pane_ParamLimits

0xc4c1,	// (0x00067eaa) field_cale_ev_content_pane

0xc4cd,	// (0x00067eb6) field_cale_ev_pane_g1_ParamLimits

0xc4cd,	// (0x00067eb6) field_cale_ev_pane_g1

0xc4d9,	// (0x00067ec2) field_cale_ev_pane_g2_ParamLimits

0xc4d9,	// (0x00067ec2) field_cale_ev_pane_g2

0xc4f1,	// (0x00067eda) field_cale_ev_pane_g3_ParamLimits

0xc4f1,	// (0x00067eda) field_cale_ev_pane_g3

0x0002,

0xf71a,	// (0x0006b103) field_cale_ev_pane_g_ParamLimits

0xf71a,	// (0x0006b103) field_cale_ev_pane_g

0xc509,	// (0x00067ef2) field_cale_ev_pane_t1_ParamLimits

0xc509,	// (0x00067ef2) field_cale_ev_pane_t1

0x4bb6,	// (0x0006059f) field_cale_ev_content_pane_t1_ParamLimits

0x4bb6,	// (0x0006059f) field_cale_ev_content_pane_t1

0xac13,	// (0x000665fc) bg_button_pane_cp01

0x9eb9,	// (0x000658a2) listscroll_cale_week_pane_ParamLimits

0x13f1,	// (0x0005cdda) popup_toolbar_window_cp01

0xa06f,	// (0x00065a58) listscroll_cale_week_pane_t1_ParamLimits

0x9eb9,	// (0x000658a2) listscroll_cale_day_pane_ParamLimits

0x2938,	// (0x0005e321) popup_toolbar_window_cp02

0xa06f,	// (0x00065a58) listscroll_cale_day_pane_t1_ParamLimits

0x9eb9,	// (0x000658a2) main_cale_month_pane_ParamLimits

0x411a,	// (0x0005fb03) popup_toolbar_window_cp03_ParamLimits

0x411a,	// (0x0005fb03) popup_toolbar_window_cp03

0x373d,	// (0x0005f126) main_image_pane_g2_ParamLimits

0x373d,	// (0x0005f126) main_image_pane_g2

0x374e,	// (0x0005f137) main_image_pane_g3_ParamLimits

0x374e,	// (0x0005f137) main_image_pane_g3

0x0002,

0xf50b,	// (0x0006aef4) main_image_pane_g_ParamLimits

0xf50b,	// (0x0006aef4) main_image_pane_g

0xad6f,	// (0x00066758) main_image_pane_t1_ParamLimits

0x375f,	// (0x0005f148) main_image_pane_t2_ParamLimits

0x375f,	// (0x0005f148) main_image_pane_t2

0x3771,	// (0x0005f15a) main_image_pane_t3_ParamLimits

0x3771,	// (0x0005f15a) main_image_pane_t3

0x3799,	// (0x0005f182) main_image_pane_t4_ParamLimits

0x3799,	// (0x0005f182) main_image_pane_t4

0x0003,

0xf512,	// (0x0006aefb) main_image_pane_t_ParamLimits

0xf512,	// (0x0006aefb) main_image_pane_t

0x37b9,	// (0x0005f1a2) popup_image_details_window_cp01

0x37c3,	// (0x0005f1ac) popup_toobar_trans_pane_cp01_ParamLimits

0x37c3,	// (0x0005f1ac) popup_toobar_trans_pane_cp01

0x3f8d,	// (0x0005f976) popup_image_details_window_ParamLimits

0x3f8d,	// (0x0005f976) popup_image_details_window

0xbf17,	// (0x00067900) popup_image_focus_window

0x43d0,	// (0x0005fdb9) camera2_autofocus_pane_ParamLimits

0x43d0,	// (0x0005fdb9) camera2_autofocus_pane

0x0b67,	// (0x0005c550) bg_popup_sub_pane_cp06

0xc520,	// (0x00067f09) popup_image_focus_window_g1

0xc528,	// (0x00067f11) popup_image_focus_window_g2

0xc530,	// (0x00067f19) popup_image_focus_window_g3

0xc538,	// (0x00067f21) popup_image_focus_window_g4

0x0003,

0xf721,	// (0x0006b10a) popup_image_focus_window_g

0xc540,	// (0x00067f29) popup_image_focus_window_t1

0xc54e,	// (0x00067f37) popup_image_focus_window_t2

0xc55e,	// (0x00067f47) popup_image_focus_window_t3

0x0002,

0xf72a,	// (0x0006b113) popup_image_focus_window_t

0xc56c,	// (0x00067f55) camera2_autofocus_pane_g1

0x0dea,	// (0x0005c7d3) bg_tb_trans_pane_cp01

0xc57a,	// (0x00067f63) popup_image_details_window_g1

0xc58d,	// (0x00067f76) popup_image_details_window_g2

0x0002,

0xf73c,	// (0x0006b125) popup_image_details_window_g

0xc5b6,	// (0x00067f9f) popup_image_details_window_t1

0xc5c8,	// (0x00067fb1) popup_image_details_window_t2

0xc5e1,	// (0x00067fca) popup_image_details_window_t3

0xc5f5,	// (0x00067fde) popup_image_details_window_t4

0xc610,	// (0x00067ff9) popup_image_details_window_t5

0x0004,

0xf743,	// (0x0006b12c) popup_image_details_window_t

0x9e81,	// (0x0006586a) bg_calc_paper_pane_ParamLimits

0x9e95,	// (0x0006587e) grid_highlight_pane_cp013

0x9e9f,	// (0x00065888) list_calc_pane_ParamLimits

0x9eb1,	// (0x0006589a) scroll_pane_cp024

0x9eb9,	// (0x000658a2) bg_calc_display_pane_ParamLimits

0x122b,	// (0x0005cc14) calc_display_pane_t1_ParamLimits

0x123d,	// (0x0005cc26) calc_display_pane_t2_ParamLimits

0x9ec5,	// (0x000658ae) calc_display_pane_t3_ParamLimits

0xf173,	// (0x0006ab5c) calc_display_pane_t_ParamLimits

0x1300,	// (0x0005cce9) cell_calc_pane_g2

0x0001,

0xf190,	// (0x0006ab79) cell_calc_pane_g

0x1309,	// (0x0005ccf2) cell_calc_pane_t1

0x9f3c,	// (0x00065925) grid_highlight_pane_cp02_ParamLimits

0x9f52,	// (0x0006593b) toolbar_button_pane_cp01_ParamLimits

0x9f52,	// (0x0006593b) toolbar_button_pane_cp01

0xadb4,	// (0x0006679d) temp_image_control_pane_ParamLimits

0xadb4,	// (0x0006679d) temp_image_control_pane

0x0dea,	// (0x0005c7d3) main_mp3_pane

0xc62a,	// (0x00068013) temp_image_control_pane_g1_ParamLimits

0xc62a,	// (0x00068013) temp_image_control_pane_g1

0xc638,	// (0x00068021) temp_image_control_pane_g2_ParamLimits

0xc638,	// (0x00068021) temp_image_control_pane_g2

0xc64a,	// (0x00068033) temp_image_control_pane_g3_ParamLimits

0xc64a,	// (0x00068033) temp_image_control_pane_g3

0x4c07,	// (0x000605f0) temp_image_control_pane_g4_ParamLimits

0x4c07,	// (0x000605f0) temp_image_control_pane_g4

0x0003,

0xf74e,	// (0x0006b137) temp_image_control_pane_g_ParamLimits

0xf74e,	// (0x0006b137) temp_image_control_pane_g

0xc62a,	// (0x00068013) main_mp3_pane_g1

0x4c1a,	// (0x00060603) main_mp3_pane_g2

0x0007,

0xf757,	// (0x0006b140) main_mp3_pane_g

0xc68d,	// (0x00068076) main_mp3_pane_t1

0xa150,	// (0x00065b39) main_camera_pane_g8_ParamLimits

0xa150,	// (0x00065b39) main_camera_pane_g8

0x1a30,	// (0x0005d419) main_video_pane_g7_ParamLimits

0x1a30,	// (0x0005d419) main_video_pane_g7

0xc04b,	// (0x00067a34) main_camera2_pane_t7_ParamLimits

0xc04b,	// (0x00067a34) main_camera2_pane_t7

0xa29a,	// (0x00065c83) scroll_pane_cp025_ParamLimits

0xa29a,	// (0x00065c83) scroll_pane_cp025

0xa2ae,	// (0x00065c97) scroll_pane_cp026_ParamLimits

0xa2ae,	// (0x00065c97) scroll_pane_cp026

0xa2bd,	// (0x00065ca6) wml_content_pane_ParamLimits

0x0b67,	// (0x0005c550) main_touch_calib_pane

0x4ce2,	// (0x000606cb) main_touch_calib_pane_g1

0x4cee,	// (0x000606d7) main_touch_calib_pane_g2

0x4cfa,	// (0x000606e3) main_touch_calib_pane_g3

0x4d06,	// (0x000606ef) main_touch_calib_pane_g4

0x0003,

0xf775,	// (0x0006b15e) main_touch_calib_pane_g

0x4d12,	// (0x000606fb) main_touch_calib_pane_t1

0x4d2c,	// (0x00060715) main_touch_calib_pane_t2

0x0004,

0xf77e,	// (0x0006b167) main_touch_calib_pane_t

0xa9c9,	// (0x000663b2) mup_progress_pane_cp02

0xa9e8,	// (0x000663d1) navi_pane_g1

0xaa4a,	// (0x00066433) navi_pane_mp_t3

0x0dea,	// (0x0005c7d3) main_mp3_pane_ParamLimits

0x415c,	// (0x0005fb45) navi_pane_ParamLimits

0xc62a,	// (0x00068013) main_mp3_pane_g1_ParamLimits

0x4c1a,	// (0x00060603) main_mp3_pane_g2_ParamLimits

0x4c26,	// (0x0006060f) main_mp3_pane_g3_ParamLimits

0x4c26,	// (0x0006060f) main_mp3_pane_g3

0x4c34,	// (0x0006061d) main_mp3_pane_g4_ParamLimits

0x4c34,	// (0x0006061d) main_mp3_pane_g4

0xc65a,	// (0x00068043) main_mp3_pane_g5_ParamLimits

0xc65a,	// (0x00068043) main_mp3_pane_g5

0xc668,	// (0x00068051) main_mp3_pane_g6_ParamLimits

0xc668,	// (0x00068051) main_mp3_pane_g6

0xc675,	// (0x0006805e) main_mp3_pane_g7_ParamLimits

0xc675,	// (0x0006805e) main_mp3_pane_g7

0xc681,	// (0x0006806a) main_mp3_pane_g8_ParamLimits

0xc681,	// (0x0006806a) main_mp3_pane_g8

0xf757,	// (0x0006b140) main_mp3_pane_g_ParamLimits

0x4c40,	// (0x00060629) main_mp3_pane_t2

0x4c4e,	// (0x00060637) main_mp3_pane_t3

0xc69b,	// (0x00068084) main_mp3_pane_t4

0xc6a9,	// (0x00068092) main_mp3_pane_t5

0x0005,

0xf768,	// (0x0006b151) main_mp3_pane_t

0xc6b7,	// (0x000680a0) mup_progress_pane_cp01

0x0bc5,	// (0x0005c5ae) aid_zoom_text_secondary2

0xc4ad,	// (0x00067e96) list_cale_ev2_pane

0xc4b5,	// (0x00067e9e) scroll_pane_cp023_ParamLimits

0x4d84,	// (0x0006076d) field_cale_ev2_pane_ParamLimits

0x4d84,	// (0x0006076d) field_cale_ev2_pane

0x4da8,	// (0x00060791) field_cale_ev2_pane_g1_ParamLimits

0x4da8,	// (0x00060791) field_cale_ev2_pane_g1

0x4db4,	// (0x0006079d) field_cale_ev2_pane_g2_ParamLimits

0x4db4,	// (0x0006079d) field_cale_ev2_pane_g2

0x4dcc,	// (0x000607b5) field_cale_ev2_pane_g3_ParamLimits

0x4dcc,	// (0x000607b5) field_cale_ev2_pane_g3

0x0003,

0xf789,	// (0x0006b172) field_cale_ev2_pane_g_ParamLimits

0xf789,	// (0x0006b172) field_cale_ev2_pane_g

0x4df0,	// (0x000607d9) field_cale_ev2_pane_t1_ParamLimits

0x4df0,	// (0x000607d9) field_cale_ev2_pane_t1

0x4e07,	// (0x000607f0) field_cale_ev2_pane_t2_ParamLimits

0x4e07,	// (0x000607f0) field_cale_ev2_pane_t2

0x0001,

0xf792,	// (0x0006b17b) field_cale_ev2_pane_t_ParamLimits

0xf792,	// (0x0006b17b) field_cale_ev2_pane_t

0x35d8,	// (0x0005efc1) main_postcard_pane_g5_ParamLimits

0x35d8,	// (0x0005efc1) main_postcard_pane_g5

0x35ee,	// (0x0005efd7) main_postcard_pane_g6_ParamLimits

0x35ee,	// (0x0005efd7) main_postcard_pane_g6

0x17dc,	// (0x0005d1c5) camera2_autofocus_pane_cp_ParamLimits

0x17dc,	// (0x0005d1c5) camera2_autofocus_pane_cp

0x0dea,	// (0x0005c7d3) main_mup3_pane

0x4e3c,	// (0x00060825) main_mup3_pane_g1_ParamLimits

0x4e3c,	// (0x00060825) main_mup3_pane_g1

0x4e5e,	// (0x00060847) main_mup3_pane_g2_ParamLimits

0x4e5e,	// (0x00060847) main_mup3_pane_g2

0x4ee1,	// (0x000608ca) main_mup3_pane_g3_ParamLimits

0x4ee1,	// (0x000608ca) main_mup3_pane_g3

0x4f25,	// (0x0006090e) main_mup3_pane_g4_ParamLimits

0x4f25,	// (0x0006090e) main_mup3_pane_g4

0x4f69,	// (0x00060952) main_mup3_pane_g5_ParamLimits

0x4f69,	// (0x00060952) main_mup3_pane_g5

0x4fad,	// (0x00060996) main_mup3_pane_g6_ParamLimits

0x4fad,	// (0x00060996) main_mup3_pane_g6

0xc6bf,	// (0x000680a8) main_mup3_pane_g7_ParamLimits

0xc6bf,	// (0x000680a8) main_mup3_pane_g7

0x0007,

0xf7a2,	// (0x0006b18b) main_mup3_pane_g_ParamLimits

0xf7a2,	// (0x0006b18b) main_mup3_pane_g

0x5029,	// (0x00060a12) main_mup3_pane_t1_ParamLimits

0x5029,	// (0x00060a12) main_mup3_pane_t1

0x50a3,	// (0x00060a8c) main_mup3_pane_t2_ParamLimits

0x50a3,	// (0x00060a8c) main_mup3_pane_t2

0x517d,	// (0x00060b66) main_mup3_pane_t4_ParamLimits

0x517d,	// (0x00060b66) main_mup3_pane_t4

0x51db,	// (0x00060bc4) main_mup3_pane_t5_ParamLimits

0x51db,	// (0x00060bc4) main_mup3_pane_t5

0x5293,	// (0x00060c7c) main_mup3_pane_t6_ParamLimits

0x5293,	// (0x00060c7c) main_mup3_pane_t6

0x0005,

0xf7b3,	// (0x0006b19c) main_mup3_pane_t_ParamLimits

0xf7b3,	// (0x0006b19c) main_mup3_pane_t

0x5349,	// (0x00060d32) mup3_progress_pane_ParamLimits

0x5349,	// (0x00060d32) mup3_progress_pane

0x53cd,	// (0x00060db6) popup_mup3_control_window_ParamLimits

0x53cd,	// (0x00060db6) popup_mup3_control_window

0xc6cd,	// (0x000680b6) popup_mup3_text_window

0x5403,	// (0x00060dec) mup3_progress_pane_t1

0x541a,	// (0x00060e03) mup3_progress_pane_t2

0xc6d5,	// (0x000680be) mup3_progress_pane_t3

0x0002,

0xf7c0,	// (0x0006b1a9) mup3_progress_pane_t

0xc6ec,	// (0x000680d5) mup_progress_pane_cp03

0x0b67,	// (0x0005c550) bg_tb_trans_pane_cp04

0x5431,	// (0x00060e1a) mup3_volume_pane

0x5439,	// (0x00060e22) popup_mup3_control_window_g1

0x5442,	// (0x00060e2b) mup3_volume_pane_g1

0x544b,	// (0x00060e34) mup3_volume_pane_g2

0x5454,	// (0x00060e3d) mup3_volume_pane_g3

0x0002,

0xf7c7,	// (0x0006b1b0) mup3_volume_pane_g

0x0b67,	// (0x0005c550) bg_tb_trans_pane_cp03

0xc6fc,	// (0x000680e5) popup_mup3_text_window_g1

0xc704,	// (0x000680ed) popup_mup3_text_window_t1

0x9f13,	// (0x000658fc) list_calc_item_pane_g1_ParamLimits

0xc133,	// (0x00067b1c) mup_volume_pane_cp_g1

0x4d46,	// (0x0006072f) main_touch_calib_pane_t3

0x4d5a,	// (0x00060743) main_touch_calib_pane_t4

0x4d6e,	// (0x00060757) main_touch_calib_pane_t5

0x0b71,	// (0x0005c55a) aid_cell_size_toolbar2

0x0b79,	// (0x0005c562) aid_popup3_width_pane

0x0bb5,	// (0x0005c59e) aid_zoom_text_msg_primary

0xa130,	// (0x00065b19) vorec_t7

0x9ed7,	// (0x000658c0) bg_calc_paper_pane_g1_ParamLimits

0x9ee3,	// (0x000658cc) bg_calc_paper_pane_g2_ParamLimits

0x9eef,	// (0x000658d8) bg_calc_paper_pane_g3_ParamLimits

0x9efb,	// (0x000658e4) bg_calc_paper_pane_g4_ParamLimits

0x9f07,	// (0x000658f0) bg_calc_paper_pane_g5_ParamLimits

0x128a,	// (0x0005cc73) bg_calc_paper_pane_g6_ParamLimits

0x129d,	// (0x0005cc86) bg_calc_paper_pane_g7_ParamLimits

0x12b0,	// (0x0005cc99) bg_calc_paper_pane_g8_ParamLimits

0xf17a,	// (0x0006ab63) bg_calc_paper_pane_g_ParamLimits

0x12c1,	// (0x0005ccaa) calc_bg_paper_pane_g9_ParamLimits

0x193e,	// (0x0005d327) image_qvga_pane_ParamLimits

0x193e,	// (0x0005d327) image_qvga_pane

0x9dc2,	// (0x000657ab) bg_popup_sub_pane_cp04_ParamLimits

0xaceb,	// (0x000666d4) popup_mup_playback_window_g1_ParamLimits

0xacf7,	// (0x000666e0) popup_mup_playback_window_t1_ParamLimits

0xad0c,	// (0x000666f5) popup_mup_playback_window_t2_ParamLimits

0xf506,	// (0x0006aeef) popup_mup_playback_window_t_ParamLimits

0x4854,	// (0x0006023d) main_mup2_pane_g3_ParamLimits

0x4854,	// (0x0006023d) main_mup2_pane_g3

0x1d4b,	// (0x0005d734) popup_toolbar_window_cp04

0xb107,	// (0x00066af0) popup_call2_audio_second_window_g3_ParamLimits

0xb107,	// (0x00066af0) popup_call2_audio_second_window_g3

0xb511,	// (0x00066efa) popup_call2_audio_first_window_g4_ParamLimits

0xb511,	// (0x00066efa) popup_call2_audio_first_window_g4

0xbb90,	// (0x00067579) popup_call2_audio_in_window_g4_ParamLimits

0xbb90,	// (0x00067579) popup_call2_audio_in_window_g4

0x371f,	// (0x0005f108) aid_area_sk_bg_cut_ParamLimits

0x371f,	// (0x0005f108) aid_area_sk_bg_cut

0xad21,	// (0x0006670a) aid_area_sk_bg_cut_2_ParamLimits

0xad21,	// (0x0006670a) aid_area_sk_bg_cut_2

0x4b68,	// (0x00060551) aid_placing_details_win

0x4b70,	// (0x00060559) aid_placing_details_win_2

0xc56c,	// (0x00067f55) camera2_autofocus_pane_g1_ParamLimits

0x0d8b,	// (0x0005c774) popup_fixed_preview_cale_window_ParamLimits

0x0d8b,	// (0x0005c774) popup_fixed_preview_cale_window

0xaaa2,	// (0x0006648b) navi_slider_pane_g3

0xaaab,	// (0x00066494) navi_slider_pane_g4

0xaab4,	// (0x0006649d) navi_slider_pane_g5

0xaaa2,	// (0x0006648b) navi_slider_pane_g6

0xaabd,	// (0x000664a6) navi_slider_pane_g7

0xabe0,	// (0x000665c9) mup_scale_pane_g3

0xabe9,	// (0x000665d2) mup_scale_pane_g4

0xabf2,	// (0x000665db) mup_scale_pane_g5

0x339f,	// (0x0005ed88) mup_scale_pane_g6

0x33a8,	// (0x0005ed91) mup_scale_pane_g7

0xaaa2,	// (0x0006648b) cams2_slider_pane_g3

0xc1e8,	// (0x00067bd1) cams2_slider_pane_g4

0xc1f0,	// (0x00067bd9) cams2_slider_pane_g5

0xaaa2,	// (0x0006648b) cams2_slider_pane_g6

0xc1f8,	// (0x00067be1) cams2_slider_pane_g7

0xc42a,	// (0x00067e13) camera2_autofocus_pane_cp_g1

0xc712,	// (0x000680fb) bg_popup_preview_window_pane_cp02_ParamLimits

0xc712,	// (0x000680fb) bg_popup_preview_window_pane_cp02

0xc71e,	// (0x00068107) list_fp_cale_pane_ParamLimits

0xc71e,	// (0x00068107) list_fp_cale_pane

0xc72a,	// (0x00068113) popup_fixed_preview_cale_window_t1_ParamLimits

0xc72a,	// (0x00068113) popup_fixed_preview_cale_window_t1

0x545d,	// (0x00060e46) popup_fixed_preview_cale_window_t2_ParamLimits

0x545d,	// (0x00060e46) popup_fixed_preview_cale_window_t2

0x5472,	// (0x00060e5b) popup_fixed_preview_cale_window_t3_ParamLimits

0x5472,	// (0x00060e5b) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ce,	// (0x0006b1b7) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ce,	// (0x0006b1b7) popup_fixed_preview_cale_window_t

0xc748,	// (0x00068131) list_single_fp_cale_pane_ParamLimits

0xc748,	// (0x00068131) list_single_fp_cale_pane

0xc760,	// (0x00068149) list_single_fp_cale_pane_g1_ParamLimits

0xc760,	// (0x00068149) list_single_fp_cale_pane_g1

0xc76c,	// (0x00068155) list_single_fp_cale_pane_g2_ParamLimits

0xc76c,	// (0x00068155) list_single_fp_cale_pane_g2

0x0002,

0xf7d5,	// (0x0006b1be) list_single_fp_cale_pane_g_ParamLimits

0xf7d5,	// (0x0006b1be) list_single_fp_cale_pane_g

0xc785,	// (0x0006816e) list_single_fp_cale_pane_t1_ParamLimits

0xc785,	// (0x0006816e) list_single_fp_cale_pane_t1

0xc797,	// (0x00068180) list_single_fp_cale_pane_t2_ParamLimits

0xc797,	// (0x00068180) list_single_fp_cale_pane_t2

0x0001,

0xf7dc,	// (0x0006b1c5) list_single_fp_cale_pane_t_ParamLimits

0xf7dc,	// (0x0006b1c5) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0b67,	// (0x0005c550) main_dialer_pane

0x5489,	// (0x00060e72) aid_cell_size_keypad

0x5493,	// (0x00060e7c) dialer_ne_pane

0x549d,	// (0x00060e86) grid_dialer_command_1_pane

0x54a5,	// (0x00060e8e) grid_dialer_command_2_pane

0x54ad,	// (0x00060e96) grid_dialer_keypad_pane

0x54c1,	// (0x00060eaa) bg_popup_call_pane_cp06_ParamLimits

0x54c1,	// (0x00060eaa) bg_popup_call_pane_cp06

0x54cd,	// (0x00060eb6) dialer_ne_clear_pane_ParamLimits

0x54cd,	// (0x00060eb6) dialer_ne_clear_pane

0xc7ca,	// (0x000681b3) dialer_ne_pane_g1

0xc7d2,	// (0x000681bb) dialer_ne_pane_t1_ParamLimits

0xc7d2,	// (0x000681bb) dialer_ne_pane_t1

0x54d9,	// (0x00060ec2) dialer_ne_pane_t2_ParamLimits

0x54d9,	// (0x00060ec2) dialer_ne_pane_t2

0x5503,	// (0x00060eec) dialer_ne_pane_t3_ParamLimits

0x5503,	// (0x00060eec) dialer_ne_pane_t3

0x0002,

0xf7e1,	// (0x0006b1ca) dialer_ne_pane_t_ParamLimits

0xf7e1,	// (0x0006b1ca) dialer_ne_pane_t

0x5533,	// (0x00060f1c) dialer_ne_pane_t3_copy1_ParamLimits

0x5533,	// (0x00060f1c) dialer_ne_pane_t3_copy1

0x5562,	// (0x00060f4b) cell_dialer_keypad_pane_ParamLimits

0x5562,	// (0x00060f4b) cell_dialer_keypad_pane

0x5579,	// (0x00060f62) cell_dialer_command_1_pane_ParamLimits

0x5579,	// (0x00060f62) cell_dialer_command_1_pane

0x558f,	// (0x00060f78) cell_dialer_command_2_pane_ParamLimits

0x558f,	// (0x00060f78) cell_dialer_command_2_pane

0xc7e4,	// (0x000681cd) bg_button_pane_cp02_ParamLimits

0xc7e4,	// (0x000681cd) bg_button_pane_cp02

0x559e,	// (0x00060f87) cell_dialer_keypad_pane_g1_ParamLimits

0x559e,	// (0x00060f87) cell_dialer_keypad_pane_g1

0xc7e4,	// (0x000681cd) bg_button_pane_cp03_ParamLimits

0xc7e4,	// (0x000681cd) bg_button_pane_cp03

0x55b3,	// (0x00060f9c) cell_dialer_command_1_pane_g1_ParamLimits

0x55b3,	// (0x00060f9c) cell_dialer_command_1_pane_g1

0xc7f0,	// (0x000681d9) bg_button_pane_cp04

0x55c7,	// (0x00060fb0) cell_dialer_command_2_pane_g1

0xaa88,	// (0x00066471) bg_button_pane_cp06

0xc7f8,	// (0x000681e1) dialer_ne_clear_pane_g1

0x2e81,	// (0x0005e86a) navi_pane_g2

0x2eaf,	// (0x0005e898) navi_pane_g3

0x0002,

0xf409,	// (0x0006adf2) navi_pane_g

0x2eda,	// (0x0005e8c3) navi_pane_mv_g2

0x2f01,	// (0x0005e8ea) navi_pane_mv_g5

0x2f09,	// (0x0005e8f2) navi_pane_mv_t1

0x9eb9,	// (0x000658a2) main_clock2_pane

0x5604,	// (0x00060fed) main_clock2_list_pane_ParamLimits

0x5604,	// (0x00060fed) main_clock2_list_pane

0x563c,	// (0x00061025) main_clock2_pane_t1_ParamLimits

0x563c,	// (0x00061025) main_clock2_pane_t1

0x5678,	// (0x00061061) main_clock2_pane_t2_ParamLimits

0x5678,	// (0x00061061) main_clock2_pane_t2

0x0004,

0xf7e8,	// (0x0006b1d1) main_clock2_pane_t_ParamLimits

0xf7e8,	// (0x0006b1d1) main_clock2_pane_t

0x5704,	// (0x000610ed) popup_clock_analogue_window_cp03_ParamLimits

0x5704,	// (0x000610ed) popup_clock_analogue_window_cp03

0x572b,	// (0x00061114) popup_clock_digital_window_cp02_ParamLimits

0x572b,	// (0x00061114) popup_clock_digital_window_cp02

0x57a4,	// (0x0006118d) main_clock2_list_single_pane_ParamLimits

0x57a4,	// (0x0006118d) main_clock2_list_single_pane

0xaa88,	// (0x00066471) list_highlight_pane_cp05

0xc800,	// (0x000681e9) main_clock2_list_single_pane_t1

0x1d4b,	// (0x0005d734) popup_toolbar_window_cp04_ParamLimits

0x4bd7,	// (0x000605c0) camera2_autofocus_pane_g2_ParamLimits

0x4bd7,	// (0x000605c0) camera2_autofocus_pane_g2

0x4be3,	// (0x000605cc) camera2_autofocus_pane_g3_ParamLimits

0x4be3,	// (0x000605cc) camera2_autofocus_pane_g3

0x4bef,	// (0x000605d8) camera2_autofocus_pane_g4_ParamLimits

0x4bef,	// (0x000605d8) camera2_autofocus_pane_g4

0x4bfb,	// (0x000605e4) camera2_autofocus_pane_g5_ParamLimits

0x4bfb,	// (0x000605e4) camera2_autofocus_pane_g5

0x0004,

0xf731,	// (0x0006b11a) camera2_autofocus_pane_g_ParamLimits

0xf731,	// (0x0006b11a) camera2_autofocus_pane_g

0x4e1c,	// (0x00060805) camera2_autofocus_pane_cp_g2

0x4e24,	// (0x0006080d) camera2_autofocus_pane_cp_g3

0x4e2c,	// (0x00060815) camera2_autofocus_pane_cp_g4

0x4e34,	// (0x0006081d) camera2_autofocus_pane_cp_g5

0x0004,

0xf797,	// (0x0006b180) camera2_autofocus_pane_cp_g

0x54b9,	// (0x00060ea2) popup_dialer_spcha_window

0x0b67,	// (0x0005c550) bg_popup_sub_pane_cp07

0xc80e,	// (0x000681f7) list_spcha_pane

0xc816,	// (0x000681ff) list_single_spcha_pane_ParamLimits

0xc816,	// (0x000681ff) list_single_spcha_pane

0x0b67,	// (0x0005c550) list_highlight_pane_cp06

0xc827,	// (0x00068210) list_single_spcha_pane_t1

0xb93a,	// (0x00067323) popup_call2_audio_out_window_g4_ParamLimits

0xb93a,	// (0x00067323) popup_call2_audio_out_window_g4

0x0b67,	// (0x0005c550) main_imed2_pane

0xbf21,	// (0x0006790a) popup_imed_adjust2_window

0x3fa5,	// (0x0005f98e) popup_imed_trans_window_ParamLimits

0x3fa5,	// (0x0005f98e) popup_imed_trans_window

0xc262,	// (0x00067c4b) popup_blid_sat_info2_window_t1

0xc270,	// (0x00067c59) popup_blid_sat_info2_window_t2

0x000a,

0xf6c6,	// (0x0006b0af) popup_blid_sat_info2_window_t

0x585a,	// (0x00061243) aid_size_cell_colour_35

0x587a,	// (0x00061263) aid_size_cell_colour_112

0x589a,	// (0x00061283) aid_size_cell_effect

0xbef5,	// (0x000678de) bg_tb_trans_pane_cp02

0xa579,	// (0x00065f62) heading_imed_pane

0x58ba,	// (0x000612a3) listscroll_imed_pane

0xc835,	// (0x0006821e) heading_imed_pane_g1

0xc83d,	// (0x00068226) heading_imed_pane_t1

0xc84b,	// (0x00068234) grid_imed_colour_35_pane_ParamLimits

0xc84b,	// (0x00068234) grid_imed_colour_35_pane

0x58c6,	// (0x000612af) grid_imed_effect_pane

0xc867,	// (0x00068250) list_imed_aspect_pane

0x58dd,	// (0x000612c6) scroll_pane_cp027_ParamLimits

0x58dd,	// (0x000612c6) scroll_pane_cp027

0x58ee,	// (0x000612d7) cell_imed_effect_pane_ParamLimits

0x58ee,	// (0x000612d7) cell_imed_effect_pane

0xc86f,	// (0x00068258) cell_imed_colour_pane_ParamLimits

0xc86f,	// (0x00068258) cell_imed_colour_pane

0xc8b9,	// (0x000682a2) cell_imed_colour_pane_g1_ParamLimits

0xc8b9,	// (0x000682a2) cell_imed_colour_pane_g1

0xc8ca,	// (0x000682b3) hgihlgiht_grid_pane_cp016_ParamLimits

0xc8ca,	// (0x000682b3) hgihlgiht_grid_pane_cp016

0x5913,	// (0x000612fc) cell_imed_effect_pane_g1

0x591b,	// (0x00061304) grid_highlight_pane_cp017

0xc8db,	// (0x000682c4) list_imed_single_pane_ParamLimits

0xc8db,	// (0x000682c4) list_imed_single_pane

0x0b67,	// (0x0005c550) list_highlight_pane_cp07

0xc8ef,	// (0x000682d8) list_imed_aspect_pane_comp1_t1

0xbef5,	// (0x000678de) bg_tb_trans_pane_cp05

0xc911,	// (0x000682fa) popup_imed_adjust2_window_g1

0xc938,	// (0x00068321) popup_imed_adjust2_window_t1

0xc950,	// (0x00068339) slider_imed_adjust_pane

0xc964,	// (0x0006834d) slider_imed_adjust_pane_g1

0xc974,	// (0x0006835d) slider_imed_adjust_pane_g2

0xc984,	// (0x0006836d) slider_imed_adjust_pane_g3

0xc995,	// (0x0006837e) slider_imed_adjust_pane_g4

0x0003,

0xf805,	// (0x0006b1ee) slider_imed_adjust_pane_g

0x5924,	// (0x0006130d) aid_size_cell_clipart2

0x5930,	// (0x00061319) grid_imed_clipart_pane

0xc9a6,	// (0x0006838f) scroll_pane_cp031

0x593a,	// (0x00061323) cell_imed_clipart_pane_ParamLimits

0x593a,	// (0x00061323) cell_imed_clipart_pane

0x5957,	// (0x00061340) cell_imed_clipart_pane_g1

0x0b67,	// (0x0005c550) grid_highlight_pane_cp014

0x5619,	// (0x00061002) main_clock2_pane_g1_ParamLimits

0x5619,	// (0x00061002) main_clock2_pane_g1

0x574b,	// (0x00061134) aid_call2_pane_cp10

0x575d,	// (0x00061146) aid_call_pane_cp10

0xa9bd,	// (0x000663a6) popup_clock_analogue_window_cp10_g1

0xa9bd,	// (0x000663a6) popup_clock_analogue_window_cp10_g2

0x576f,	// (0x00061158) popup_clock_analogue_window_cp10_g3

0x576f,	// (0x00061158) popup_clock_analogue_window_cp10_g4

0xa9bd,	// (0x000663a6) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7f3,	// (0x0006b1dc) popup_clock_analogue_window_cp10_g

0x5785,	// (0x0006116e) popup_clock_analogue_window_cp10_t1

0x57b6,	// (0x0006119f) clock_digital_number_pane_cp10_ParamLimits

0x57b6,	// (0x0006119f) clock_digital_number_pane_cp10

0x57d0,	// (0x000611b9) clock_digital_number_pane_cp11_ParamLimits

0x57d0,	// (0x000611b9) clock_digital_number_pane_cp11

0x57ea,	// (0x000611d3) clock_digital_number_pane_cp12_ParamLimits

0x57ea,	// (0x000611d3) clock_digital_number_pane_cp12

0x5804,	// (0x000611ed) clock_digital_number_pane_cp13_ParamLimits

0x5804,	// (0x000611ed) clock_digital_number_pane_cp13

0x581e,	// (0x00061207) clock_digital_separator_pane_cp10_ParamLimits

0x581e,	// (0x00061207) clock_digital_separator_pane_cp10

0x5838,	// (0x00061221) popup_clock_digital_window_cp02_t1_ParamLimits

0x5838,	// (0x00061221) popup_clock_digital_window_cp02_t1

0x9dba,	// (0x000657a3) clock_digital_number_pane_cp10_g1

0x9dba,	// (0x000657a3) clock_digital_number_pane_cp10_g2

0x0001,

0xf80e,	// (0x0006b1f7) clock_digital_number_pane_cp10_g

0x9dba,	// (0x000657a3) clock_digital_separator_pane_cp10_g1

0x9dba,	// (0x000657a3) clock_digital_separator_pane_g2_cp10

0xaa58,	// (0x00066441) navi_pane_vded_g4

0xaa61,	// (0x0006644a) navi_pane_vded_g5

0xaa6a,	// (0x00066453) navi_pane_vded_t1

0x0b67,	// (0x0005c550) main_vded_pane

0x5960,	// (0x00061349) main_vded_pane_g1

0x596c,	// (0x00061355) main_vded_pane_g2

0x5978,	// (0x00061361) main_vded_pane_g3

0x0002,

0xf813,	// (0x0006b1fc) main_vded_pane_g

0x5984,	// (0x0006136d) main_vded_pane_t1

0x5992,	// (0x0006137b) main_vded_pane_t2

0x0001,

0xf81a,	// (0x0006b203) main_vded_pane_t

0x59a0,	// (0x00061389) vded_slider_pane

0x59aa,	// (0x00061393) vded_video_pane

0xc9ae,	// (0x00068397) vded_video_pane_g1

0x59b6,	// (0x0006139f) vded_video_pane_g2

0xc42a,	// (0x00067e13) vded_video_pane_g3

0x0002,

0xf81f,	// (0x0006b208) vded_video_pane_g

0xc9b8,	// (0x000683a1) vded_slider_pane_g1

0xc133,	// (0x00067b1c) vded_slider_pane_g2

0xc9c1,	// (0x000683aa) vded_slider_pane_g3

0xc9ca,	// (0x000683b3) vded_slider_pane_g4

0xc9d3,	// (0x000683bc) vded_slider_pane_g5

0x0004,

0xf826,	// (0x0006b20f) vded_slider_pane_g

0x53b7,	// (0x00060da0) mup3_rocker_pane_ParamLimits

0x53b7,	// (0x00060da0) mup3_rocker_pane

0x59bf,	// (0x000613a8) mup3_control_keys_pane_g1

0x59c7,	// (0x000613b0) mup3_control_keys_pane_g2

0x59cf,	// (0x000613b8) mup3_control_keys_pane_g3

0x59d7,	// (0x000613c0) mup3_control_keys_pane_g4

0x0003,

0xf831,	// (0x0006b21a) mup3_control_keys_pane_g

0x0dcc,	// (0x0005c7b5) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0dcc,	// (0x0005c7b5) popup_toolbar2_fixed_window_cp01

0x53ed,	// (0x00060dd6) popup_toolbar2_fixed_window_cp02_ParamLimits

0x53ed,	// (0x00060dd6) popup_toolbar2_fixed_window_cp02

0xb279,	// (0x00066c62) popup_call2_audio_second_window_t4_ParamLimits

0xb279,	// (0x00066c62) popup_call2_audio_second_window_t4

0xb7a7,	// (0x00067190) popup_call2_audio_first_window_t6_ParamLimits

0xb7a7,	// (0x00067190) popup_call2_audio_first_window_t6

0xba3d,	// (0x00067426) popup_call2_audio_out_window_t6_ParamLimits

0xba3d,	// (0x00067426) popup_call2_audio_out_window_t6

0x0b67,	// (0x0005c550) main_vitu_pane

0x59e7,	// (0x000613d0) aid_size_cell_itu_ParamLimits

0x59e7,	// (0x000613d0) aid_size_cell_itu

0x0dea,	// (0x0005c7d3) bg_popup_window_pane_cp08_ParamLimits

0x0dea,	// (0x0005c7d3) bg_popup_window_pane_cp08

0x59fd,	// (0x000613e6) field_vitu_entry_pane_ParamLimits

0x59fd,	// (0x000613e6) field_vitu_entry_pane

0x5a14,	// (0x000613fd) grid_vitu_function_pane_ParamLimits

0x5a14,	// (0x000613fd) grid_vitu_function_pane

0x5a2f,	// (0x00061418) grid_vitu_itu_pane_ParamLimits

0x5a2f,	// (0x00061418) grid_vitu_itu_pane

0x5a4d,	// (0x00061436) cell_vitu_itu_pane_ParamLimits

0x5a4d,	// (0x00061436) cell_vitu_itu_pane

0x5a73,	// (0x0006145c) cell_vitu_function_pane_ParamLimits

0x5a73,	// (0x0006145c) cell_vitu_function_pane

0x0dea,	// (0x0005c7d3) bg_popup_sub_pane_cp08_ParamLimits

0x0dea,	// (0x0005c7d3) bg_popup_sub_pane_cp08

0x5a8e,	// (0x00061477) field_vitu_entry_pane_t1_ParamLimits

0x5a8e,	// (0x00061477) field_vitu_entry_pane_t1

0xc9f4,	// (0x000683dd) field_vitu_entry_pane_t2_ParamLimits

0xc9f4,	// (0x000683dd) field_vitu_entry_pane_t2

0x0001,

0xf83f,	// (0x0006b228) field_vitu_entry_pane_t_ParamLimits

0xf83f,	// (0x0006b228) field_vitu_entry_pane_t

0xca11,	// (0x000683fa) bg_button_pane_cp05_ParamLimits

0xca11,	// (0x000683fa) bg_button_pane_cp05

0x5aae,	// (0x00061497) cell_vitu_itu_pane_g1

0x5ac6,	// (0x000614af) cell_vitu_itu_pane_t1_ParamLimits

0x5ac6,	// (0x000614af) cell_vitu_itu_pane_t1

0x5ad8,	// (0x000614c1) cell_vitu_itu_pane_t2_ParamLimits

0x5ad8,	// (0x000614c1) cell_vitu_itu_pane_t2

0x0002,

0xf844,	// (0x0006b22d) cell_vitu_itu_pane_t_ParamLimits

0xf844,	// (0x0006b22d) cell_vitu_itu_pane_t

0xca1f,	// (0x00068408) bg_button_pane_cp07

0x5b0d,	// (0x000614f6) cell_vitu_function_pane_g1

0x9e49,	// (0x00065832) main_calc_pane_g1

0x0ba9,	// (0x0005c592) aid_visual_content_pane

0x0b67,	// (0x0005c550) main_vradio_pane

0x5b16,	// (0x000614ff) main_vradio_pane_g1_ParamLimits

0x5b16,	// (0x000614ff) main_vradio_pane_g1

0xca29,	// (0x00068412) main_vradio_pane_g2_ParamLimits

0xca29,	// (0x00068412) main_vradio_pane_g2

0x0001,

0xf84b,	// (0x0006b234) main_vradio_pane_g_ParamLimits

0xf84b,	// (0x0006b234) main_vradio_pane_g

0x5b2d,	// (0x00061516) main_vradio_pane_t1_ParamLimits

0x5b2d,	// (0x00061516) main_vradio_pane_t1

0x5b42,	// (0x0006152b) main_vradio_pane_t2_ParamLimits

0x5b42,	// (0x0006152b) main_vradio_pane_t2

0xca36,	// (0x0006841f) main_vradio_pane_t3_ParamLimits

0xca36,	// (0x0006841f) main_vradio_pane_t3

0x0002,

0xf850,	// (0x0006b239) main_vradio_pane_t_ParamLimits

0xf850,	// (0x0006b239) main_vradio_pane_t

0x5b57,	// (0x00061540) vradio_rocker_control_pane_ParamLimits

0x5b57,	// (0x00061540) vradio_rocker_control_pane

0x5b69,	// (0x00061552) vradio_station_info_pane_ParamLimits

0x5b69,	// (0x00061552) vradio_station_info_pane

0xca4a,	// (0x00068433) vradio_frequency_info_pane_ParamLimits

0xca4a,	// (0x00068433) vradio_frequency_info_pane

0xc42a,	// (0x00067e13) vradio_station_info_pane_g1

0xca59,	// (0x00068442) vradio_station_info_pane_t1_ParamLimits

0xca59,	// (0x00068442) vradio_station_info_pane_t1

0xca7b,	// (0x00068464) vradio_station_info_pane_t2_ParamLimits

0xca7b,	// (0x00068464) vradio_station_info_pane_t2

0x0001,

0xf857,	// (0x0006b240) vradio_station_info_pane_t_ParamLimits

0xf857,	// (0x0006b240) vradio_station_info_pane_t

0xca8d,	// (0x00068476) vradio_tuning_pane

0xca95,	// (0x0006847e) vradio_rocker_control_pane_g1

0xca9d,	// (0x00068486) vradio_rocker_control_pane_g2

0xcaa5,	// (0x0006848e) vradio_rocker_control_pane_g3

0xcaad,	// (0x00068496) vradio_rocker_control_pane_g4

0xcab5,	// (0x0006849e) vradio_rocker_control_pane_g5

0x0004,

0xf85c,	// (0x0006b245) vradio_rocker_control_pane_g

0x5b79,	// (0x00061562) vradio_frequency_info_pane_g1

0xcabd,	// (0x000684a6) vradio_frequency_info_pane_t1_ParamLimits

0xcabd,	// (0x000684a6) vradio_frequency_info_pane_t1

0x5b83,	// (0x0006156c) vradio_tuning_pane_g1

0x5b8e,	// (0x00061577) vradio_tuning_pane_t1

0x0c06,	// (0x0005c5ef) area_side_right_pane_ParamLimits

0x0c06,	// (0x0005c5ef) area_side_right_pane

0xbebc,	// (0x000678a5) status_small_pane_g1

0xbec4,	// (0x000678ad) status_small_pane_g2

0xbecd,	// (0x000678b6) status_small_pane_g3

0xbed6,	// (0x000678bf) status_small_pane_g4

0x0003,

0xf61c,	// (0x0006b005) status_small_pane_g

0xbedf,	// (0x000678c8) status_small_pane_t1

0x0b67,	// (0x0005c550) main_video3_pane

0xcad1,	// (0x000684ba) cams_zoom_vslider_pane

0xcad9,	// (0x000684c2) image3_wide_pane_ParamLimits

0xcad9,	// (0x000684c2) image3_wide_pane

0xcaf3,	// (0x000684dc) image3_wide_small_pane

0xcaff,	// (0x000684e8) main_video3_pane_g1_ParamLimits

0xcaff,	// (0x000684e8) main_video3_pane_g1

0xcb1b,	// (0x00068504) main_video3_pane_g2_ParamLimits

0xcb1b,	// (0x00068504) main_video3_pane_g2

0x0001,

0xf867,	// (0x0006b250) main_video3_pane_g_ParamLimits

0xf867,	// (0x0006b250) main_video3_pane_g

0xcb37,	// (0x00068520) main_video3_pane_t1_ParamLimits

0xcb37,	// (0x00068520) main_video3_pane_t1

0xcb62,	// (0x0006854b) main_video3_pane_t2_ParamLimits

0xcb62,	// (0x0006854b) main_video3_pane_t2

0xcb8f,	// (0x00068578) main_video3_pane_t3_ParamLimits

0xcb8f,	// (0x00068578) main_video3_pane_t3

0x0002,

0xf86c,	// (0x0006b255) main_video3_pane_t_ParamLimits

0xf86c,	// (0x0006b255) main_video3_pane_t

0xcbbc,	// (0x000685a5) cams_zoom_vslider_pane_g1

0xcbc5,	// (0x000685ae) cams_zoom_vslider_pane_g2

0x0001,

0xf873,	// (0x0006b25c) cams_zoom_vslider_pane_g

0xcbcd,	// (0x000685b6) small_slider_vertical_pane

0xc42a,	// (0x00067e13) small_slider_vertical_pane_g1

0xc42a,	// (0x00067e13) small_slider_vertical_pane_g2

0xcbd5,	// (0x000685be) small_slider_vertical_pane_g3

0x0002,

0xf878,	// (0x0006b261) small_slider_vertical_pane_g

0x0b67,	// (0x0005c550) main_hwr_training_pane

0xcbde,	// (0x000685c7) hwr_training_instruct_pane_ParamLimits

0xcbde,	// (0x000685c7) hwr_training_instruct_pane

0x5b9d,	// (0x00061586) hwr_training_navi_pane_ParamLimits

0x5b9d,	// (0x00061586) hwr_training_navi_pane

0x5bbc,	// (0x000615a5) hwr_training_write_pane_ParamLimits

0x5bbc,	// (0x000615a5) hwr_training_write_pane

0x0b67,	// (0x0005c550) bg_frame_shadow_pane

0xcc15,	// (0x000685fe) hwr_training_write_pane_g1

0xcc1d,	// (0x00068606) hwr_training_write_pane_g2

0xcc25,	// (0x0006860e) hwr_training_write_pane_g3

0xcc2d,	// (0x00068616) hwr_training_write_pane_g4

0xcc35,	// (0x0006861e) hwr_training_write_pane_g5

0xcc3d,	// (0x00068626) hwr_training_write_pane_g6

0xcc45,	// (0x0006862e) hwr_training_write_pane_g7

0x0006,

0xf87f,	// (0x0006b268) hwr_training_write_pane_g

0xda13,	// (0x000693fc) hwr_training_navi_pane_g1_ParamLimits

0xda13,	// (0x000693fc) hwr_training_navi_pane_g1

0xda25,	// (0x0006940e) hwr_training_navi_pane_g2_ParamLimits

0xda25,	// (0x0006940e) hwr_training_navi_pane_g2

0xda37,	// (0x00069420) hwr_training_navi_pane_g3_ParamLimits

0xda37,	// (0x00069420) hwr_training_navi_pane_g3

0xda47,	// (0x00069430) hwr_training_navi_pane_g4_ParamLimits

0xda47,	// (0x00069430) hwr_training_navi_pane_g4

0x0004,

0xf88e,	// (0x0006b277) hwr_training_navi_pane_g_ParamLimits

0xf88e,	// (0x0006b277) hwr_training_navi_pane_g

0xda54,	// (0x0006943d) hwr_training_navi_pane_t1

0x5c04,	// (0x000615ed) list_single_hwr_training_instruct_pane_ParamLimits

0x5c04,	// (0x000615ed) list_single_hwr_training_instruct_pane

0xcc4d,	// (0x00068636) list_single_hwr_training_instruct_pane_t1

0xc36a,	// (0x00067d53) bg_frame_shadow_pane_g1

0xcc5c,	// (0x00068645) bg_frame_shadow_pane_g2

0xcc64,	// (0x0006864d) bg_frame_shadow_pane_g3

0xcc6c,	// (0x00068655) bg_frame_shadow_pane_g4

0xcc74,	// (0x0006865d) bg_frame_shadow_pane_g5

0xcc7c,	// (0x00068665) bg_frame_shadow_pane_g6

0xcc84,	// (0x0006866d) bg_frame_shadow_pane_g7

0x9fb2,	// (0x0006599b) bg_frame_shadow_pane_g8

0x0007,

0xf899,	// (0x0006b282) bg_frame_shadow_pane_g

0x0b67,	// (0x0005c550) main_video_tele_dialer_pane

0x5c20,	// (0x00061609) aid_size_cell_video_keypad_ParamLimits

0x5c20,	// (0x00061609) aid_size_cell_video_keypad

0x5c3a,	// (0x00061623) grid_video_dialer_keypad_pane_ParamLimits

0x5c3a,	// (0x00061623) grid_video_dialer_keypad_pane

0x5c88,	// (0x00061671) video_down_pane_cp_ParamLimits

0x5c88,	// (0x00061671) video_down_pane_cp

0x5cbc,	// (0x000616a5) cell_video_dialer_keypad_pane_ParamLimits

0x5cbc,	// (0x000616a5) cell_video_dialer_keypad_pane

0xcc8c,	// (0x00068675) bg_button_pane_cp08_ParamLimits

0xcc8c,	// (0x00068675) bg_button_pane_cp08

0x5ce2,	// (0x000616cb) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5ce2,	// (0x000616cb) cell_video_dialer_keypad_pane_g1

0x53a1,	// (0x00060d8a) mup3_rocker2_pane_ParamLimits

0x53a1,	// (0x00060d8a) mup3_rocker2_pane

0xc42a,	// (0x00067e13) mup3_rocker2_pane_g1

0x3e72,	// (0x0005f85b) main_dialer2_pane

0x0b67,	// (0x0005c550) main_mp4_pane

0xda6a,	// (0x00069453) main_mp4_pane_g1_ParamLimits

0xda6a,	// (0x00069453) main_mp4_pane_g1

0xda6a,	// (0x00069453) main_mp4_pane_g2_ParamLimits

0xda6a,	// (0x00069453) main_mp4_pane_g2

0x5d1d,	// (0x00061706) main_mp4_pane_g3_ParamLimits

0x5d1d,	// (0x00061706) main_mp4_pane_g3

0xda78,	// (0x00069461) main_mp4_pane_g4_ParamLimits

0xda78,	// (0x00069461) main_mp4_pane_g4

0xda92,	// (0x0006947b) main_mp4_pane_g5_ParamLimits

0xda92,	// (0x0006947b) main_mp4_pane_g5

0x0005,

0xf8b9,	// (0x0006b2a2) main_mp4_pane_g_ParamLimits

0xf8b9,	// (0x0006b2a2) main_mp4_pane_g

0xdac6,	// (0x000694af) main_mp4_pane_t1_ParamLimits

0xdac6,	// (0x000694af) main_mp4_pane_t1

0xdb22,	// (0x0006950b) main_mp4_pane_t2_ParamLimits

0xdb22,	// (0x0006950b) main_mp4_pane_t2

0xde44,	// (0x0006982d) main_mp4_pane_t3_ParamLimits

0xde44,	// (0x0006982d) main_mp4_pane_t3

0xdb74,	// (0x0006955d) main_mp4_pane_t4_ParamLimits

0xdb74,	// (0x0006955d) main_mp4_pane_t4

0x0003,

0xf8c6,	// (0x0006b2af) main_mp4_pane_t_ParamLimits

0xf8c6,	// (0x0006b2af) main_mp4_pane_t

0xdbb4,	// (0x0006959d) mp4_progress_pane_ParamLimits

0xdbb4,	// (0x0006959d) mp4_progress_pane

0xdbfe,	// (0x000695e7) mp4_rocker_pane_ParamLimits

0xdbfe,	// (0x000695e7) mp4_rocker_pane

0xde6c,	// (0x00069855) mp4_progress_pane_t1

0xde85,	// (0x0006986e) mp4_progress_pane_t2

0x0001,

0xf8cf,	// (0x0006b2b8) mp4_progress_pane_t

0xde9e,	// (0x00069887) mup_progress_pane_cp04

0xdeaa,	// (0x00069893) mp4_rocker_pane_g1

0x5d67,	// (0x00061750) aid_cell_size_keypad2_ParamLimits

0x5d67,	// (0x00061750) aid_cell_size_keypad2

0x5d7d,	// (0x00061766) dialer2_ne_pane_ParamLimits

0x5d7d,	// (0x00061766) dialer2_ne_pane

0x5d95,	// (0x0006177e) grid_dialer2_keypad_pane_ParamLimits

0x5d95,	// (0x0006177e) grid_dialer2_keypad_pane

0xc209,	// (0x00067bf2) bg_popup_call_pane_cp07_ParamLimits

0xc209,	// (0x00067bf2) bg_popup_call_pane_cp07

0x5db1,	// (0x0006179a) dialer2_ne_pane_t1_ParamLimits

0x5db1,	// (0x0006179a) dialer2_ne_pane_t1

0x5df1,	// (0x000617da) cell_dialer2_keypad_pane_ParamLimits

0x5df1,	// (0x000617da) cell_dialer2_keypad_pane

0xdec6,	// (0x000698af) bg_button_pane_pane_cp04_ParamLimits

0xdec6,	// (0x000698af) bg_button_pane_pane_cp04

0x5e17,	// (0x00061800) cell_dialer2_keypad_pane_g1_ParamLimits

0x5e17,	// (0x00061800) cell_dialer2_keypad_pane_g1

0x1c2f,	// (0x0005d618) aid_placing_vt_set_content_ParamLimits

0x1c2f,	// (0x0005d618) aid_placing_vt_set_content

0x1c53,	// (0x0005d63c) aid_placing_vt_set_title_ParamLimits

0x1c53,	// (0x0005d63c) aid_placing_vt_set_title

0x0b67,	// (0x0005c550) main_image3_pane

0x5edd,	// (0x000618c6) area_side_right_pane_cp01_ParamLimits

0x5edd,	// (0x000618c6) area_side_right_pane_cp01

0xda6a,	// (0x00069453) main_image3_pane_g1_ParamLimits

0xda6a,	// (0x00069453) main_image3_pane_g1

0x5ef6,	// (0x000618df) main_image3_pane_g2_ParamLimits

0x5ef6,	// (0x000618df) main_image3_pane_g2

0x5f1e,	// (0x00061907) main_image3_pane_g3_ParamLimits

0x5f1e,	// (0x00061907) main_image3_pane_g3

0x5f48,	// (0x00061931) main_image3_pane_g4_ParamLimits

0x5f48,	// (0x00061931) main_image3_pane_g4

0x0003,

0xf8de,	// (0x0006b2c7) main_image3_pane_g_ParamLimits

0xf8de,	// (0x0006b2c7) main_image3_pane_g

0x5f72,	// (0x0006195b) main_image3_pane_t1_ParamLimits

0x5f72,	// (0x0006195b) main_image3_pane_t1

0x5fca,	// (0x000619b3) main_image3_pane_t2_ParamLimits

0x5fca,	// (0x000619b3) main_image3_pane_t2

0x601c,	// (0x00061a05) main_image3_pane_t3_ParamLimits

0x601c,	// (0x00061a05) main_image3_pane_t3

0x0003,

0xf8e7,	// (0x0006b2d0) main_image3_pane_t_ParamLimits

0xf8e7,	// (0x0006b2d0) main_image3_pane_t

0x0dea,	// (0x0005c7d3) grid_sctrl_middle_pane_cp01_ParamLimits

0x0dea,	// (0x0005c7d3) grid_sctrl_middle_pane_cp01

0x60a4,	// (0x00061a8d) cell_sctrl_middle_pane_cp01_ParamLimits

0x60a4,	// (0x00061a8d) cell_sctrl_middle_pane_cp01

0x60c1,	// (0x00061aaa) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x60c1,	// (0x00061aaa) cell_sctrl_middle_pane_cp01_g1

0x0b67,	// (0x0005c550) main_call4_pane

0x60d6,	// (0x00061abf) aid_size_button_call4_ParamLimits

0x60d6,	// (0x00061abf) aid_size_button_call4

0x6109,	// (0x00061af2) call4_windows_pane_ParamLimits

0x6109,	// (0x00061af2) call4_windows_pane

0x612b,	// (0x00061b14) grid_call4_button_pane_ParamLimits

0x612b,	// (0x00061b14) grid_call4_button_pane

0xded2,	// (0x000698bb) call4_windows_conf_pane

0xdeed,	// (0x000698d6) popup_call4_audio_first_window_ParamLimits

0xdeed,	// (0x000698d6) popup_call4_audio_first_window

0xdf3b,	// (0x00069924) popup_call4_audio_second_window_ParamLimits

0xdf3b,	// (0x00069924) popup_call4_audio_second_window

0xdf51,	// (0x0006993a) popup_call4_audio_wait_window_ParamLimits

0xdf51,	// (0x0006993a) popup_call4_audio_wait_window

0x6156,	// (0x00061b3f) cell_call4_button_pane_ParamLimits

0x6156,	// (0x00061b3f) cell_call4_button_pane

0x617d,	// (0x00061b66) bg_button_pane_cp09_ParamLimits

0x617d,	// (0x00061b66) bg_button_pane_cp09

0x6189,	// (0x00061b72) cell_call4_button_pane_g1_ParamLimits

0x6189,	// (0x00061b72) cell_call4_button_pane_g1

0x61af,	// (0x00061b98) cell_call4_button_pane_t1_ParamLimits

0x61af,	// (0x00061b98) cell_call4_button_pane_t1

0xdf99,	// (0x00069982) popup_call4_audio_conf_window_ParamLimits

0xdf99,	// (0x00069982) popup_call4_audio_conf_window

0x5403,	// (0x00060dec) mup3_progress_pane_t1_ParamLimits

0x541a,	// (0x00060e03) mup3_progress_pane_t2_ParamLimits

0xc6d5,	// (0x000680be) mup3_progress_pane_t3_ParamLimits

0xf7c0,	// (0x0006b1a9) mup3_progress_pane_t_ParamLimits

0xc6ec,	// (0x000680d5) mup_progress_pane_cp03_ParamLimits

0x59df,	// (0x000613c8) mup3_control_keys_pane_g4_copy1

0xdbe2,	// (0x000695cb) mp4_rocker2_pane_ParamLimits

0xdbe2,	// (0x000695cb) mp4_rocker2_pane

0xdfb3,	// (0x0006999c) mp4_rocker2_pane_g1

0xdfbb,	// (0x000699a4) mp4_rocker2_pane_g2

0xdc54,	// (0x0006963d) mp4_rocker2_pane_g3

0xdc5c,	// (0x00069645) mp4_rocker2_pane_g4

0xdc64,	// (0x0006964d) mp4_rocker2_pane_g5

0x0004,

0xf8f0,	// (0x0006b2d9) mp4_rocker2_pane_g

0x0b67,	// (0x0005c550) main_camera4_pane

0x0b67,	// (0x0005c550) main_video4_pane

0x5c56,	// (0x0006163f) main_video_tele_dialer_pane_t1_ParamLimits

0x5c56,	// (0x0006163f) main_video_tele_dialer_pane_t1

0x5c6f,	// (0x00061658) main_video_tele_dialer_pane_t2_ParamLimits

0x5c6f,	// (0x00061658) main_video_tele_dialer_pane_t2

0x0001,

0xf8aa,	// (0x0006b293) main_video_tele_dialer_pane_t_ParamLimits

0xf8aa,	// (0x0006b293) main_video_tele_dialer_pane_t

0x61ed,	// (0x00061bd6) cam4_autofocus_pane_ParamLimits

0x61ed,	// (0x00061bd6) cam4_autofocus_pane

0x6203,	// (0x00061bec) cam4_image_uncrop_pane_ParamLimits

0x6203,	// (0x00061bec) cam4_image_uncrop_pane

0x621c,	// (0x00061c05) cam4_indicators_pane_ParamLimits

0x621c,	// (0x00061c05) cam4_indicators_pane

0x624b,	// (0x00061c34) main_camera4_pane_g1_ParamLimits

0x624b,	// (0x00061c34) main_camera4_pane_g1

0x6257,	// (0x00061c40) main_camera4_pane_g2_ParamLimits

0x6257,	// (0x00061c40) main_camera4_pane_g2

0x6257,	// (0x00061c40) main_camera4_pane_g3_ParamLimits

0x6257,	// (0x00061c40) main_camera4_pane_g3

0x6263,	// (0x00061c4c) main_camera4_pane_g4_ParamLimits

0x6263,	// (0x00061c4c) main_camera4_pane_g4

0x626f,	// (0x00061c58) main_camera4_pane_g5_ParamLimits

0x626f,	// (0x00061c58) main_camera4_pane_g5

0x0005,

0xf8fb,	// (0x0006b2e4) main_camera4_pane_g_ParamLimits

0xf8fb,	// (0x0006b2e4) main_camera4_pane_g

0x628c,	// (0x00061c75) main_camera4_pane_t1_ParamLimits

0x628c,	// (0x00061c75) main_camera4_pane_t1

0xdc8a,	// (0x00069673) bg_tb_trans_pane_cp06

0xdca0,	// (0x00069689) cam4_indicators_pane_g1

0xdcad,	// (0x00069696) cam4_indicators_pane_g2

0x0002,

0xf916,	// (0x0006b2ff) cam4_indicators_pane_g

0xdccd,	// (0x000696b6) cam4_indicators_pane_t1

0x62f0,	// (0x00061cd9) main_video4_pane_g1_ParamLimits

0x62f0,	// (0x00061cd9) main_video4_pane_g1

0x6302,	// (0x00061ceb) main_video4_pane_g2_ParamLimits

0x6302,	// (0x00061ceb) main_video4_pane_g2

0x6316,	// (0x00061cff) main_video4_pane_g3_ParamLimits

0x6316,	// (0x00061cff) main_video4_pane_g3

0x6326,	// (0x00061d0f) main_video4_pane_g4_ParamLimits

0x6326,	// (0x00061d0f) main_video4_pane_g4

0x0004,

0xf91d,	// (0x0006b306) main_video4_pane_g_ParamLimits

0xf91d,	// (0x0006b306) main_video4_pane_g

0x6346,	// (0x00061d2f) vid4_indicators_pane_ParamLimits

0x6346,	// (0x00061d2f) vid4_indicators_pane

0x6376,	// (0x00061d5f) video4_image_uncrop_cif_pane_ParamLimits

0x6376,	// (0x00061d5f) video4_image_uncrop_cif_pane

0x6390,	// (0x00061d79) video4_image_uncrop_nhd_pane_ParamLimits

0x6390,	// (0x00061d79) video4_image_uncrop_nhd_pane

0x6203,	// (0x00061bec) video4_image_uncrop_vga_pane_ParamLimits

0x6203,	// (0x00061bec) video4_image_uncrop_vga_pane

0xdcf1,	// (0x000696da) bg_tb_trans_pane_cp07

0x63a6,	// (0x00061d8f) vid4_indicators_pane_g1

0x63b3,	// (0x00061d9c) vid4_indicators_pane_g2

0x63c0,	// (0x00061da9) vid4_indicators_pane_g3

0x0004,

0xf928,	// (0x0006b311) vid4_indicators_pane_g

0x63e5,	// (0x00061dce) vid4_indicators_pane_t1

0x63f7,	// (0x00061de0) cam4_autofocus_pane_g1

0x63ff,	// (0x00061de8) cam4_autofocus_pane_g2

0x6407,	// (0x00061df0) cam4_autofocus_pane_g3

0x0002,

0xf933,	// (0x0006b31c) cam4_autofocus_pane_g

0x640f,	// (0x00061df8) cam4_autofocus_pane_g3_copy1

0x5ca0,	// (0x00061689) video_down_pane_cp_t1

0x5cae,	// (0x00061697) video_down_pane_cp_t2

0x0001,

0xf8af,	// (0x0006b298) video_down_pane_cp_t

0x0dea,	// (0x0005c7d3) popup_vitu2_window_ParamLimits

0x0dea,	// (0x0005c7d3) popup_vitu2_window

0x6417,	// (0x00061e00) aid_size_cell2_itu2_ParamLimits

0x6417,	// (0x00061e00) aid_size_cell2_itu2

0x643d,	// (0x00061e26) aid_size_cell_itu2_ParamLimits

0x643d,	// (0x00061e26) aid_size_cell_itu2

0x649b,	// (0x00061e84) bg_popup_window_pane_cp09_ParamLimits

0x649b,	// (0x00061e84) bg_popup_window_pane_cp09

0x64a9,	// (0x00061e92) field_vitu2_entry_pane_ParamLimits

0x64a9,	// (0x00061e92) field_vitu2_entry_pane

0x64d1,	// (0x00061eba) grid_vitu2_function_pane_ParamLimits

0x64d1,	// (0x00061eba) grid_vitu2_function_pane

0x6522,	// (0x00061f0b) grid_vitu2_itu_pane_ParamLimits

0x6522,	// (0x00061f0b) grid_vitu2_itu_pane

0x65ad,	// (0x00061f96) cell_vitu2_itu_pane_ParamLimits

0x65ad,	// (0x00061f96) cell_vitu2_itu_pane

0x65d3,	// (0x00061fbc) cell_vitu2_function_pane_ParamLimits

0x65d3,	// (0x00061fbc) cell_vitu2_function_pane

0xdfc3,	// (0x000699ac) bg_popup_call_pane_cp08_ParamLimits

0xdfc3,	// (0x000699ac) bg_popup_call_pane_cp08

0xdfdc,	// (0x000699c5) field_vitu2_entry_pane_g1

0xdfe8,	// (0x000699d1) field_vitu2_entry_pane_g2

0x0002,

0xf93a,	// (0x0006b323) field_vitu2_entry_pane_g

0x6617,	// (0x00062000) field_vitu2_entry_pane_t1_ParamLimits

0x6617,	// (0x00062000) field_vitu2_entry_pane_t1

0x6634,	// (0x0006201d) field_vitu2_entry_pane_t2_ParamLimits

0x6634,	// (0x0006201d) field_vitu2_entry_pane_t2

0x0001,

0xf941,	// (0x0006b32a) field_vitu2_entry_pane_t_ParamLimits

0xf941,	// (0x0006b32a) field_vitu2_entry_pane_t

0x6651,	// (0x0006203a) bg_button_pane_cp010_ParamLimits

0x6651,	// (0x0006203a) bg_button_pane_cp010

0x665f,	// (0x00062048) cell_vitu2_itu_pane_g1

0x667d,	// (0x00062066) cell_vitu2_itu_pane_t1_ParamLimits

0x667d,	// (0x00062066) cell_vitu2_itu_pane_t1

0x0a73,	// (0x0005c45c) cell_vitu2_itu_pane_t2_ParamLimits

0x0a73,	// (0x0005c45c) cell_vitu2_itu_pane_t2

0x0002,

0xf94b,	// (0x0006b334) cell_vitu2_itu_pane_t_ParamLimits

0xf94b,	// (0x0006b334) cell_vitu2_itu_pane_t

0xdd09,	// (0x000696f2) bg_button_pane_cp011

0x66e3,	// (0x000620cc) cell_vitu2_function_pane_g1

0x0b67,	// (0x0005c550) main_myfav_hc_pane

0x606c,	// (0x00061a55) popup_image3_note_pane_ParamLimits

0x606c,	// (0x00061a55) popup_image3_note_pane

0x6088,	// (0x00061a71) popup_image3_tool_bar_pane_ParamLimits

0x6088,	// (0x00061a71) popup_image3_tool_bar_pane

0x0af7,	// (0x0005c4e0) cell_vitu2_itu_pane_t3_ParamLimits

0x0af7,	// (0x0005c4e0) cell_vitu2_itu_pane_t3

0x0b67,	// (0x0005c550) bg_popup_trans_pane

0xe00a,	// (0x000699f3) grid_image3_tool_bar_pane

0xe014,	// (0x000699fd) bg_popup_trans_pane_g1

0xa3a3,	// (0x00065d8c) bg_popup_trans_pane_g2

0xe01c,	// (0x00069a05) bg_popup_trans_pane_g3

0xe024,	// (0x00069a0d) bg_popup_trans_pane_g4

0xe02c,	// (0x00069a15) bg_popup_trans_pane_g5

0xe034,	// (0x00069a1d) bg_popup_trans_pane_g6

0xe03c,	// (0x00069a25) bg_popup_trans_pane_g7

0xe044,	// (0x00069a2d) bg_popup_trans_pane_g8

0xa383,	// (0x00065d6c) bg_popup_trans_pane_g9

0x0008,

0xf952,	// (0x0006b33b) bg_popup_trans_pane_g

0xe04c,	// (0x00069a35) cell_image3_tool_bar_pane_ParamLimits

0xe04c,	// (0x00069a35) cell_image3_tool_bar_pane

0xc42a,	// (0x00067e13) cell_image3_tool_bar_pane_g1

0x0b67,	// (0x0005c550) bg_popup_trans_pane_cp1

0xe062,	// (0x00069a4b) popup_image3_note_pane_t1

0xe070,	// (0x00069a59) popup_image3_note_pane_t2

0xe07e,	// (0x00069a67) popup_image3_note_pane_t3

0x0002,

0xf965,	// (0x0006b34e) popup_image3_note_pane_t

0xe08e,	// (0x00069a77) popup_image3_note_pane_t3_copy1

0x66f7,	// (0x000620e0) bg_myfav_hc_instruction_pane_ParamLimits

0x66f7,	// (0x000620e0) bg_myfav_hc_instruction_pane

0x670f,	// (0x000620f8) cell_myfav_contact_pane_ParamLimits

0x670f,	// (0x000620f8) cell_myfav_contact_pane

0x672b,	// (0x00062114) cell_myfav_contact_pane_cp1_ParamLimits

0x672b,	// (0x00062114) cell_myfav_contact_pane_cp1

0x6743,	// (0x0006212c) cell_myfav_contact_pane_cp2_ParamLimits

0x6743,	// (0x0006212c) cell_myfav_contact_pane_cp2

0x675b,	// (0x00062144) cell_myfav_contact_pane_cp3_ParamLimits

0x675b,	// (0x00062144) cell_myfav_contact_pane_cp3

0x6772,	// (0x0006215b) cell_myfav_contact_pane_cp4_ParamLimits

0x6772,	// (0x0006215b) cell_myfav_contact_pane_cp4

0x678a,	// (0x00062173) cell_myfav_contact_pane_cp5_ParamLimits

0x678a,	// (0x00062173) cell_myfav_contact_pane_cp5

0x679e,	// (0x00062187) cell_myfav_contact_pane_cp6_ParamLimits

0x679e,	// (0x00062187) cell_myfav_contact_pane_cp6

0x67b4,	// (0x0006219d) cell_myfav_contact_pane_cp7_ParamLimits

0x67b4,	// (0x0006219d) cell_myfav_contact_pane_cp7

0xe09c,	// (0x00069a85) listscroll_gen_pane_cp05

0x67cc,	// (0x000621b5) main_myfav_hc_pane_g1_ParamLimits

0x67cc,	// (0x000621b5) main_myfav_hc_pane_g1

0x67e6,	// (0x000621cf) main_myfav_hc_pane_g2_ParamLimits

0x67e6,	// (0x000621cf) main_myfav_hc_pane_g2

0x0002,

0xf96c,	// (0x0006b355) main_myfav_hc_pane_g_ParamLimits

0xf96c,	// (0x0006b355) main_myfav_hc_pane_g

0x681a,	// (0x00062203) main_myfav_hc_pane_t1_ParamLimits

0x681a,	// (0x00062203) main_myfav_hc_pane_t1

0xe0a5,	// (0x00069a8e) main_myfav_hc_pane_t2_ParamLimits

0xe0a5,	// (0x00069a8e) main_myfav_hc_pane_t2

0xe0b7,	// (0x00069aa0) main_myfav_hc_pane_t3_ParamLimits

0xe0b7,	// (0x00069aa0) main_myfav_hc_pane_t3

0x6831,	// (0x0006221a) main_myfav_hc_pane_t4_ParamLimits

0x6831,	// (0x0006221a) main_myfav_hc_pane_t4

0x0004,

0xf973,	// (0x0006b35c) main_myfav_hc_pane_t_ParamLimits

0xf973,	// (0x0006b35c) main_myfav_hc_pane_t

0xc42a,	// (0x00067e13) bg_myfav_hc_instruction_pane_g1

0xe0c9,	// (0x00069ab2) cell_myfav_contact_pane_g1_ParamLimits

0xe0c9,	// (0x00069ab2) cell_myfav_contact_pane_g1

0xe0c9,	// (0x00069ab2) cell_myfav_contact_pane_g2_ParamLimits

0xe0c9,	// (0x00069ab2) cell_myfav_contact_pane_g2

0xe0d5,	// (0x00069abe) cell_myfav_contact_pane_g3_ParamLimits

0xe0d5,	// (0x00069abe) cell_myfav_contact_pane_g3

0xc6bf,	// (0x000680a8) cell_myfav_contact_pane_g4_ParamLimits

0xc6bf,	// (0x000680a8) cell_myfav_contact_pane_g4

0xe0e2,	// (0x00069acb) cell_myfav_contact_pane_g5_ParamLimits

0xe0e2,	// (0x00069acb) cell_myfav_contact_pane_g5

0x0004,

0xf97e,	// (0x0006b367) cell_myfav_contact_pane_g_ParamLimits

0xf97e,	// (0x0006b367) cell_myfav_contact_pane_g

0x6800,	// (0x000621e9) main_myfav_hc_pane_g3_ParamLimits

0x6800,	// (0x000621e9) main_myfav_hc_pane_g3

0x0d22,	// (0x0005c70b) popup_adpt_find_window

0x685b,	// (0x00062244) afind_page_pane_ParamLimits

0x685b,	// (0x00062244) afind_page_pane

0x6870,	// (0x00062259) aid_size_cell_afind_ParamLimits

0x6870,	// (0x00062259) aid_size_cell_afind

0x688e,	// (0x00062277) bg_popup_sub_pane_cp09_ParamLimits

0x688e,	// (0x00062277) bg_popup_sub_pane_cp09

0x689b,	// (0x00062284) find_pane_cp01_ParamLimits

0x689b,	// (0x00062284) find_pane_cp01

0xe0ee,	// (0x00069ad7) grid_afind_control_pane_ParamLimits

0xe0ee,	// (0x00069ad7) grid_afind_control_pane

0x68a8,	// (0x00062291) grid_afind_pane_ParamLimits

0x68a8,	// (0x00062291) grid_afind_pane

0x68ca,	// (0x000622b3) cell_afind_pane_ParamLimits

0x68ca,	// (0x000622b3) cell_afind_pane

0xc42a,	// (0x00067e13) afind_page_pane_g1

0x6931,	// (0x0006231a) afind_page_pane_g2

0x693a,	// (0x00062323) afind_page_pane_g3

0x0002,

0xf989,	// (0x0006b372) afind_page_pane_g

0x6943,	// (0x0006232c) afind_page_pane_t1

0xe102,	// (0x00069aeb) cell_afind_grid_control_pane_ParamLimits

0xe102,	// (0x00069aeb) cell_afind_grid_control_pane

0xdec6,	// (0x000698af) bg_button_pane_cp69_ParamLimits

0xdec6,	// (0x000698af) bg_button_pane_cp69

0x6963,	// (0x0006234c) cell_afind_pane_g1_ParamLimits

0x6963,	// (0x0006234c) cell_afind_pane_g1

0x6970,	// (0x00062359) cell_afind_pane_t1_ParamLimits

0x6970,	// (0x00062359) cell_afind_pane_t1

0xa19a,	// (0x00065b83) bg_button_pane_cp72

0xe111,	// (0x00069afa) cell_afind_grid_control_pane_g1

0x3912,	// (0x0005f2fb) aid_image_placing_area_ParamLimits

0x3912,	// (0x0005f2fb) aid_image_placing_area

0xc9dc,	// (0x000683c5) field_vitu_entry_pane_g1_ParamLimits

0xc9dc,	// (0x000683c5) field_vitu_entry_pane_g1

0xc9e8,	// (0x000683d1) field_vitu_entry_pane_g2_ParamLimits

0xc9e8,	// (0x000683d1) field_vitu_entry_pane_g2

0x0001,

0xf83a,	// (0x0006b223) field_vitu_entry_pane_g_ParamLimits

0xf83a,	// (0x0006b223) field_vitu_entry_pane_g

0x5aae,	// (0x00061497) cell_vitu_itu_pane_g1_ParamLimits

0x5af0,	// (0x000614d9) cell_vitu_itu_pane_t3_ParamLimits

0x5af0,	// (0x000614d9) cell_vitu_itu_pane_t3

0xde6c,	// (0x00069855) mp4_progress_pane_t1_ParamLimits

0xde85,	// (0x0006986e) mp4_progress_pane_t2_ParamLimits

0xf8cf,	// (0x0006b2b8) mp4_progress_pane_t_ParamLimits

0xde9e,	// (0x00069887) mup_progress_pane_cp04_ParamLimits

0x6845,	// (0x0006222e) main_myfav_hc_pane_t5_ParamLimits

0x6845,	// (0x0006222e) main_myfav_hc_pane_t5

0x0bbd,	// (0x0005c5a6) aid_zoom_text_primary

0x0d22,	// (0x0005c70b) popup_adpt_find_window_ParamLimits

0x0dea,	// (0x0005c7d3) main_cam_set_pane

0x6235,	// (0x00061c1e) cam4_zoom_pane_ParamLimits

0x6235,	// (0x00061c1e) cam4_zoom_pane

0x6982,	// (0x0006236b) main_cam_set_pane_g1_ParamLimits

0x6982,	// (0x0006236b) main_cam_set_pane_g1

0x6990,	// (0x00062379) main_cam_set_pane_g2_ParamLimits

0x6990,	// (0x00062379) main_cam_set_pane_g2

0x0001,

0xf990,	// (0x0006b379) main_cam_set_pane_g_ParamLimits

0xf990,	// (0x0006b379) main_cam_set_pane_g

0x69b3,	// (0x0006239c) main_cam_set_pane_t1_ParamLimits

0x69b3,	// (0x0006239c) main_cam_set_pane_t1

0x69ce,	// (0x000623b7) main_cset_listscroll_pane_ParamLimits

0x69ce,	// (0x000623b7) main_cset_listscroll_pane

0x69f2,	// (0x000623db) main_cset_slider_pane_ParamLimits

0x69f2,	// (0x000623db) main_cset_slider_pane

0xe122,	// (0x00069b0b) main_cset_list_pane_ParamLimits

0xe122,	// (0x00069b0b) main_cset_list_pane

0xe132,	// (0x00069b1b) scroll_pane_cp028

0x6a1c,	// (0x00062405) aid_area_touch_slider

0x6a38,	// (0x00062421) cset_slider_pane

0x6a62,	// (0x0006244b) main_cset_slider_pane_g1

0x6a77,	// (0x00062460) main_cset_slider_pane_g2

0x0011,

0xf995,	// (0x0006b37e) main_cset_slider_pane_g

0xe16b,	// (0x00069b54) main_cset_slider_pane_t1

0x6b39,	// (0x00062522) main_cset_slider_pane_t2

0x6b53,	// (0x0006253c) main_cset_slider_pane_t3

0x6b6d,	// (0x00062556) main_cset_slider_pane_t4

0x6b87,	// (0x00062570) main_cset_slider_pane_t5

0x6ba5,	// (0x0006258e) main_cset_slider_pane_t6

0x6bbc,	// (0x000625a5) main_cset_slider_pane_t7

0x000e,

0xf9ba,	// (0x0006b3a3) main_cset_slider_pane_t

0x6cc8,	// (0x000626b1) cset_list_set_pane_ParamLimits

0x6cc8,	// (0x000626b1) cset_list_set_pane

0x6cdc,	// (0x000626c5) aid_position_infowindow_above

0x6ce4,	// (0x000626cd) aid_position_infowindow_below

0x6cec,	// (0x000626d5) cset_list_set_pane_g1_ParamLimits

0x6cec,	// (0x000626d5) cset_list_set_pane_g1

0x6cf8,	// (0x000626e1) cset_list_set_pane_g3_ParamLimits

0x6cf8,	// (0x000626e1) cset_list_set_pane_g3

0x0001,

0xf9d9,	// (0x0006b3c2) cset_list_set_pane_g_ParamLimits

0xf9d9,	// (0x0006b3c2) cset_list_set_pane_g

0x6d07,	// (0x000626f0) cset_list_set_pane_t1_ParamLimits

0x6d07,	// (0x000626f0) cset_list_set_pane_t1

0x0dea,	// (0x0005c7d3) list_highlight_pane_cp021_ParamLimits

0x0dea,	// (0x0005c7d3) list_highlight_pane_cp021

0xabe0,	// (0x000665c9) cset_slider_pane_g1

0xabf2,	// (0x000665db) cset_slider_pane_g2

0xabe9,	// (0x000665d2) cset_slider_pane_g3

0x0002,

0xf9de,	// (0x0006b3c7) cset_slider_pane_g

0xdd17,	// (0x00069700) aid_area_touch_cam4_zoom

0xdd1f,	// (0x00069708) cam4_zoom_cont_pane

0xdd27,	// (0x00069710) cam4_zoom_pane_g1

0xdd2f,	// (0x00069718) cam4_zoom_pane_g2

0x6d1c,	// (0x00062705) cam4_zoom_pane_g3

0x0002,

0xf9e5,	// (0x0006b3ce) cam4_zoom_pane_g

0xdd37,	// (0x00069720) cam4_zoom_cont_pane_g1

0xdd40,	// (0x00069729) cam4_zoom_cont_pane_g2

0xdd49,	// (0x00069732) cam4_zoom_cont_pane_g3

0x0002,

0xf9ec,	// (0x0006b3d5) cam4_zoom_cont_pane_g

0x60f4,	// (0x00061add) call4_image_pane_ParamLimits

0x60f4,	// (0x00061add) call4_image_pane

0xded2,	// (0x000698bb) call4_windows_conf_pane_ParamLimits

0xdf19,	// (0x00069902) popup_call4_audio_in_window_ParamLimits

0xdf19,	// (0x00069902) popup_call4_audio_in_window

0x0b67,	// (0x0005c550) bg_popup_call2_act_pane_cp02

0xdf91,	// (0x0006997a) call4_list_conf_pane

0xc42a,	// (0x00067e13) call4_image_pane_g1

0xc42a,	// (0x00067e13) call4_image_pane_g2

0x0001,

0xf700,	// (0x0006b0e9) call4_image_pane_g

0xe20b,	// (0x00069bf4) list_single_graphic_popup_conf4_pane_ParamLimits

0xe20b,	// (0x00069bf4) list_single_graphic_popup_conf4_pane

0x0b67,	// (0x0005c550) list_highlight_pane_cp022

0xe249,	// (0x00069c32) list_single_graphic_popup_conf4_pane_g1

0xa8ba,	// (0x000662a3) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9f3,	// (0x0006b3dc) list_single_graphic_popup_conf4_pane_g

0xe251,	// (0x00069c3a) list_single_graphic_popup_conf4_pane_t1

0x1d6d,	// (0x0005d756) popup_vtel_slider_window_ParamLimits

0x1d6d,	// (0x0005d756) popup_vtel_slider_window

0xdeb4,	// (0x0006989d) dialer2_ne_pane_t2_ParamLimits

0xdeb4,	// (0x0006989d) dialer2_ne_pane_t2

0x0001,

0xf8d4,	// (0x0006b2bd) dialer2_ne_pane_t_ParamLimits

0xf8d4,	// (0x0006b2bd) dialer2_ne_pane_t

0xc209,	// (0x00067bf2) bg_popup_sub_pane_cp010_ParamLimits

0xc209,	// (0x00067bf2) bg_popup_sub_pane_cp010

0x6d24,	// (0x0006270d) popup_vtel_slider_window_g1_ParamLimits

0x6d24,	// (0x0006270d) popup_vtel_slider_window_g1

0x6d37,	// (0x00062720) popup_vtel_slider_window_g2_ParamLimits

0x6d37,	// (0x00062720) popup_vtel_slider_window_g2

0x0003,

0xf9f8,	// (0x0006b3e1) popup_vtel_slider_window_g_ParamLimits

0xf9f8,	// (0x0006b3e1) popup_vtel_slider_window_g

0x6d8d,	// (0x00062776) vtel_slider_pane_ParamLimits

0x6d8d,	// (0x00062776) vtel_slider_pane

0x6daf,	// (0x00062798) vtel_slider_pane_g1_ParamLimits

0x6daf,	// (0x00062798) vtel_slider_pane_g1

0x6dc3,	// (0x000627ac) vtel_slider_pane_g2_ParamLimits

0x6dc3,	// (0x000627ac) vtel_slider_pane_g2

0x6ddb,	// (0x000627c4) vtel_slider_pane_g3_ParamLimits

0x6ddb,	// (0x000627c4) vtel_slider_pane_g3

0x6daf,	// (0x00062798) vtel_slider_pane_g4_ParamLimits

0x6daf,	// (0x00062798) vtel_slider_pane_g4

0x6df1,	// (0x000627da) vtel_slider_pane_g5_ParamLimits

0x6df1,	// (0x000627da) vtel_slider_pane_g5

0x0004,

0xfa01,	// (0x0006b3ea) vtel_slider_pane_g_ParamLimits

0xfa01,	// (0x0006b3ea) vtel_slider_pane_g

0x0b67,	// (0x0005c550) main_gallery2_pane

0x6469,	// (0x00061e52) aid_size_row_itut2_dropdow_list_ParamLimits

0x6469,	// (0x00061e52) aid_size_row_itut2_dropdow_list

0x64f9,	// (0x00061ee2) grid_vitu2_function_top_pane_ParamLimits

0x64f9,	// (0x00061ee2) grid_vitu2_function_top_pane

0x6558,	// (0x00061f41) popup_vitu2_dropdown_list_window_ParamLimits

0x6558,	// (0x00061f41) popup_vitu2_dropdown_list_window

0x6581,	// (0x00061f6a) popup_vitu2_match_list_window

0x6e15,	// (0x000627fe) cell_vitu2_function_top_pane_ParamLimits

0x6e15,	// (0x000627fe) cell_vitu2_function_top_pane

0x6e35,	// (0x0006281e) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6e35,	// (0x0006281e) cell_vitu2_function_top_pane_cp01

0x6e53,	// (0x0006283c) cell_vitu2_function_top_wide_pane_ParamLimits

0x6e53,	// (0x0006283c) cell_vitu2_function_top_wide_pane

0xdd09,	// (0x000696f2) bg_button_pane_cp012

0x6e71,	// (0x0006285a) cell_vitu2_function_top_pane_g1

0xdd52,	// (0x0006973b) bg_button_pane_cp013_ParamLimits

0xdd52,	// (0x0006973b) bg_button_pane_cp013

0x6e85,	// (0x0006286e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e85,	// (0x0006286e) cell_vitu2_function_top_wide_pane_g1

0xdd09,	// (0x000696f2) bg_popup_sub_pane_cp20

0x6e9d,	// (0x00062886) list_vitu2_match_list_pane

0xe014,	// (0x000699fd) bg_popup_sub_pane_cp20_g1

0xe01c,	// (0x00069a05) bg_popup_sub_pane_cp20_g2

0xa3a3,	// (0x00065d8c) bg_popup_sub_pane_cp20_g3

0xe024,	// (0x00069a0d) bg_popup_sub_pane_cp20_g4

0xa383,	// (0x00065d6c) bg_popup_sub_pane_cp20_g5

0xe267,	// (0x00069c50) bg_popup_sub_pane_cp20_g6

0xe034,	// (0x00069a1d) bg_popup_sub_pane_cp20_g7

0xe03c,	// (0x00069a25) bg_popup_sub_pane_cp20_g8

0xe044,	// (0x00069a2d) bg_popup_sub_pane_cp20_g9

0x0008,

0xfa0c,	// (0x0006b3f5) bg_popup_sub_pane_cp20_g

0xdd6e,	// (0x00069757) list_vitu2_match_list_item_pane_ParamLimits

0xdd6e,	// (0x00069757) list_vitu2_match_list_item_pane

0xdd80,	// (0x00069769) list_vitu2_match_list_item_pane_t1

0x9e95,	// (0x0006587e) bg_popup_sub_pane_cp21

0xdd8e,	// (0x00069777) grid_vitu2_dropdown_list_pane

0x6f05,	// (0x000628ee) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6f05,	// (0x000628ee) cell_vitu2_dropdown_list_char_pane

0x6f28,	// (0x00062911) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f28,	// (0x00062911) cell_vitu2_dropdown_list_ctrl_pane

0xe26f,	// (0x00069c58) cell_vitu2_dropdown_list_char_pane_g1

0xe278,	// (0x00069c61) cell_vitu2_dropdown_list_char_pane_g2

0xe281,	// (0x00069c6a) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0x053c,	// (0x0005bf25) cell_vitu2_dropdown_list_char_pane_g

0x6f56,	// (0x0006293f) cell_vitu2_dropdown_list_char_pane_t1

0x6f64,	// (0x0006294d) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f64,	// (0x0006294d) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f74,	// (0x0006295d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f74,	// (0x0006295d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f85,	// (0x0006296e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f85,	// (0x0006296e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f95,	// (0x0006297e) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f95,	// (0x0006297e) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdc8a,	// (0x00069673) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdc8a,	// (0x00069673) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa29,	// (0x0006b412) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa29,	// (0x0006b412) cell_vitu2_dropdown_list_ctrl_pane_g

0x6fb1,	// (0x0006299a) aid_size_cell_gallery2_ParamLimits

0x6fb1,	// (0x0006299a) aid_size_cell_gallery2

0x6fc7,	// (0x000629b0) grid_gallery2_pane_ParamLimits

0x6fc7,	// (0x000629b0) grid_gallery2_pane

0x6fdb,	// (0x000629c4) scroll_pane_cp029_ParamLimits

0x6fdb,	// (0x000629c4) scroll_pane_cp029

0x6fe7,	// (0x000629d0) cell_gallery2_pane_ParamLimits

0x6fe7,	// (0x000629d0) cell_gallery2_pane

0xe28a,	// (0x00069c73) cell_gallery2_pane_g2

0x7021,	// (0x00062a0a) cell_gallery2_pane_g3

0xe294,	// (0x00069c7d) cell_gallery2_pane_g4

0xe29c,	// (0x00069c85) cell_gallery2_pane_g5

0xaa88,	// (0x00066471) grid_highlight_pane_cp10

0x6581,	// (0x00061f6a) popup_vitu2_match_list_window_ParamLimits

0x6598,	// (0x00061f81) popup_vitu2_query_window_ParamLimits

0x6598,	// (0x00061f81) popup_vitu2_query_window

0x9e95,	// (0x0006587e) bg_vitu2_candi_button_pane

0xe26f,	// (0x00069c58) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xe278,	// (0x00069c61) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xe281,	// (0x00069c6a) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x7029,	// (0x00062a12) bg_button_pane_cp015

0x703d,	// (0x00062a26) bg_button_pane_cp016

0x7050,	// (0x00062a39) bg_button_pane_cp017

0xbef5,	// (0x000678de) bg_popup_sub_pane_cp22

0xe2a4,	// (0x00069c8d) popup_vitu2_query_window_g1

0x7095,	// (0x00062a7e) popup_vitu2_query_window_g2

0x0002,

0xfa34,	// (0x0006b41d) popup_vitu2_query_window_g

0x70b4,	// (0x00062a9d) popup_vitu2_query_window_t1_ParamLimits

0x70b4,	// (0x00062a9d) popup_vitu2_query_window_t1

0x70e9,	// (0x00062ad2) popup_vitu2_query_window_t2_ParamLimits

0x70e9,	// (0x00062ad2) popup_vitu2_query_window_t2

0x70fb,	// (0x00062ae4) popup_vitu2_query_window_t3_ParamLimits

0x70fb,	// (0x00062ae4) popup_vitu2_query_window_t3

0x7123,	// (0x00062b0c) popup_vitu2_query_window_t4_ParamLimits

0x7123,	// (0x00062b0c) popup_vitu2_query_window_t4

0x7144,	// (0x00062b2d) popup_vitu2_query_window_t5_ParamLimits

0x7144,	// (0x00062b2d) popup_vitu2_query_window_t5

0x0006,

0xfa3b,	// (0x0006b424) popup_vitu2_query_window_t_ParamLimits

0xfa3b,	// (0x0006b424) popup_vitu2_query_window_t

0xe11a,	// (0x00069b03) main_cset_text_pane

0x6a1c,	// (0x00062405) aid_area_touch_slider_ParamLimits

0x6a38,	// (0x00062421) cset_slider_pane_ParamLimits

0x6a62,	// (0x0006244b) main_cset_slider_pane_g1_ParamLimits

0x6a77,	// (0x00062460) main_cset_slider_pane_g2_ParamLimits

0xe13b,	// (0x00069b24) main_cset_slider_pane_g3_ParamLimits

0xe13b,	// (0x00069b24) main_cset_slider_pane_g3

0x6a8c,	// (0x00062475) main_cset_slider_pane_g4_ParamLimits

0x6a8c,	// (0x00062475) main_cset_slider_pane_g4

0x6a9b,	// (0x00062484) main_cset_slider_pane_g5_ParamLimits

0x6a9b,	// (0x00062484) main_cset_slider_pane_g5

0x6aa9,	// (0x00062492) main_cset_slider_pane_g6_ParamLimits

0x6aa9,	// (0x00062492) main_cset_slider_pane_g6

0xf995,	// (0x0006b37e) main_cset_slider_pane_g_ParamLimits

0xe16b,	// (0x00069b54) main_cset_slider_pane_t1_ParamLimits

0x6b39,	// (0x00062522) main_cset_slider_pane_t2_ParamLimits

0x6b53,	// (0x0006253c) main_cset_slider_pane_t3_ParamLimits

0x6b6d,	// (0x00062556) main_cset_slider_pane_t4_ParamLimits

0x6b87,	// (0x00062570) main_cset_slider_pane_t5_ParamLimits

0x6ba5,	// (0x0006258e) main_cset_slider_pane_t6_ParamLimits

0x6bbc,	// (0x000625a5) main_cset_slider_pane_t7_ParamLimits

0x6bea,	// (0x000625d3) main_cset_slider_pane_t8_ParamLimits

0x6bea,	// (0x000625d3) main_cset_slider_pane_t8

0x6c12,	// (0x000625fb) main_cset_slider_pane_t9_ParamLimits

0x6c12,	// (0x000625fb) main_cset_slider_pane_t9

0x6c3a,	// (0x00062623) main_cset_slider_pane_t10_ParamLimits

0x6c3a,	// (0x00062623) main_cset_slider_pane_t10

0x6c62,	// (0x0006264b) main_cset_slider_pane_t11_ParamLimits

0x6c62,	// (0x0006264b) main_cset_slider_pane_t11

0x6c8c,	// (0x00062675) main_cset_slider_pane_t12_ParamLimits

0x6c8c,	// (0x00062675) main_cset_slider_pane_t12

0x6ca9,	// (0x00062692) main_cset_slider_pane_t13_ParamLimits

0x6ca9,	// (0x00062692) main_cset_slider_pane_t13

0xf9ba,	// (0x0006b3a3) main_cset_slider_pane_t_ParamLimits

0x0b67,	// (0x0005c550) bg_popup_sub_pane_cp011

0xe2b0,	// (0x00069c99) main_cset_text_pane_g1

0xe2b8,	// (0x00069ca1) main_cset_text_pane_t1

0xe2c6,	// (0x00069caf) main_cset_text_pane_t2

0xe2d4,	// (0x00069cbd) main_cset_text_pane_t3

0xe2e2,	// (0x00069ccb) main_cset_text_pane_t4

0xe2f0,	// (0x00069cd9) main_cset_text_pane_t5

0xe2fe,	// (0x00069ce7) main_cset_text_pane_t6

0xe30c,	// (0x00069cf5) main_cset_text_pane_t7

0x0006,

0x0564,	// (0x0005bf4d) main_cset_text_pane_t

0x0b67,	// (0x0005c550) main_cam4_burst_pane

0x0b67,	// (0x0005c550) main_cam5_pane

0x6951,	// (0x0006233a) bg_button_pane_cp019

0x695a,	// (0x00062343) bg_button_pane_cp020

0xe147,	// (0x00069b30) main_cset_slider_pane_g7_ParamLimits

0xe147,	// (0x00069b30) main_cset_slider_pane_g7

0xe153,	// (0x00069b3c) main_cset_slider_pane_g8_ParamLimits

0xe153,	// (0x00069b3c) main_cset_slider_pane_g8

0x6abd,	// (0x000624a6) main_cset_slider_pane_g9_ParamLimits

0x6abd,	// (0x000624a6) main_cset_slider_pane_g9

0x6ac9,	// (0x000624b2) main_cset_slider_pane_g10_ParamLimits

0x6ac9,	// (0x000624b2) main_cset_slider_pane_g10

0x6ad5,	// (0x000624be) main_cset_slider_pane_g11_ParamLimits

0x6ad5,	// (0x000624be) main_cset_slider_pane_g11

0x6ae1,	// (0x000624ca) main_cset_slider_pane_g12_ParamLimits

0x6ae1,	// (0x000624ca) main_cset_slider_pane_g12

0x6aed,	// (0x000624d6) main_cset_slider_pane_g13_ParamLimits

0x6aed,	// (0x000624d6) main_cset_slider_pane_g13

0x6af9,	// (0x000624e2) main_cset_slider_pane_g14_ParamLimits

0x6af9,	// (0x000624e2) main_cset_slider_pane_g14

0x6b05,	// (0x000624ee) main_cset_slider_pane_g15_ParamLimits

0x6b05,	// (0x000624ee) main_cset_slider_pane_g15

0xe199,	// (0x00069b82) main_cset_slider_pane_t14_ParamLimits

0xe199,	// (0x00069b82) main_cset_slider_pane_t14

0xe1d2,	// (0x00069bbb) main_cset_slider_pane_t15_ParamLimits

0xe1d2,	// (0x00069bbb) main_cset_slider_pane_t15

0x71bb,	// (0x00062ba4) aid_cam4_burst_size_cell_ParamLimits

0x71bb,	// (0x00062ba4) aid_cam4_burst_size_cell

0x71db,	// (0x00062bc4) grid_cam4_burst_pane_ParamLimits

0x71db,	// (0x00062bc4) grid_cam4_burst_pane

0x7215,	// (0x00062bfe) linegrid_cam4_burst_pane_ParamLimits

0x7215,	// (0x00062bfe) linegrid_cam4_burst_pane

0xe64a,	// (0x0006a033) scroll_pane_cp30_ParamLimits

0xe64a,	// (0x0006a033) scroll_pane_cp30

0x7239,	// (0x00062c22) cell_cam4_burst_pane_ParamLimits

0x7239,	// (0x00062c22) cell_cam4_burst_pane

0xe31a,	// (0x00069d03) linegrid_cam4_burst_pane_g1_ParamLimits

0xe31a,	// (0x00069d03) linegrid_cam4_burst_pane_g1

0x728e,	// (0x00062c77) linegrid_cam4_burst_pane_g2_ParamLimits

0x728e,	// (0x00062c77) linegrid_cam4_burst_pane_g2

0xe327,	// (0x00069d10) linegrid_cam4_burst_pane_g3_ParamLimits

0xe327,	// (0x00069d10) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4a,	// (0x0006b433) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4a,	// (0x0006b433) linegrid_cam4_burst_pane_g

0x729f,	// (0x00062c88) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x729f,	// (0x00062c88) linegrid_cam4_burst_pane_g3_copy1

0xe334,	// (0x00069d1d) linegrid_cam4_burst_pane_g4_ParamLimits

0xe334,	// (0x00069d1d) linegrid_cam4_burst_pane_g4

0x72bd,	// (0x00062ca6) linegrid_cam4_burst_pane_g5_ParamLimits

0x72bd,	// (0x00062ca6) linegrid_cam4_burst_pane_g5

0x72ce,	// (0x00062cb7) linegrid_cam4_burst_pane_g6_ParamLimits

0x72ce,	// (0x00062cb7) linegrid_cam4_burst_pane_g6

0xe341,	// (0x00069d2a) linegrid_cam4_burst_pane_g7_ParamLimits

0xe341,	// (0x00069d2a) linegrid_cam4_burst_pane_g7

0x72e5,	// (0x00062cce) cell_cam4_burst_pane_g1

0xe35a,	// (0x00069d43) main_cam5_pane_t1_ParamLimits

0xe35a,	// (0x00069d43) main_cam5_pane_t1

0xe36c,	// (0x00069d55) main_cam5_pane_t2_ParamLimits

0xe36c,	// (0x00069d55) main_cam5_pane_t2

0xe37e,	// (0x00069d67) main_cam5_pane_t3_ParamLimits

0xe37e,	// (0x00069d67) main_cam5_pane_t3

0xe390,	// (0x00069d79) main_cam5_pane_t4_ParamLimits

0xe390,	// (0x00069d79) main_cam5_pane_t4

0xe3a8,	// (0x00069d91) main_cam5_pane_t5_ParamLimits

0xe3a8,	// (0x00069d91) main_cam5_pane_t5

0xe3bc,	// (0x00069da5) main_cam5_pane_t6_ParamLimits

0xe3bc,	// (0x00069da5) main_cam5_pane_t6

0xe3d0,	// (0x00069db9) main_cam5_pane_t7_ParamLimits

0xe3d0,	// (0x00069db9) main_cam5_pane_t7

0xe3e2,	// (0x00069dcb) main_cam5_pane_t8_ParamLimits

0xe3e2,	// (0x00069dcb) main_cam5_pane_t8

0xe400,	// (0x00069de9) main_cam5_pane_t9_ParamLimits

0xe400,	// (0x00069de9) main_cam5_pane_t9

0xe412,	// (0x00069dfb) main_cam5_pane_t10_ParamLimits

0xe412,	// (0x00069dfb) main_cam5_pane_t10

0xe424,	// (0x00069e0d) main_cam5_pane_t11_ParamLimits

0xe424,	// (0x00069e0d) main_cam5_pane_t11

0xe438,	// (0x00069e21) main_cam5_pane_t12_ParamLimits

0xe438,	// (0x00069e21) main_cam5_pane_t12

0xe44f,	// (0x00069e38) main_cam5_pane_t13_ParamLimits

0xe44f,	// (0x00069e38) main_cam5_pane_t13

0x000c,

0x057f,	// (0x0005bf68) main_cam5_pane_t_ParamLimits

0x057f,	// (0x0005bf68) main_cam5_pane_t

0x0db0,	// (0x0005c799) popup_scut_keymap_window_ParamLimits

0x0db0,	// (0x0005c799) popup_scut_keymap_window

0x72f8,	// (0x00062ce1) aid_size_cell_brow_shortcut

0xaa88,	// (0x00066471) bg_popup_window_pane_cp010

0x7304,	// (0x00062ced) grid_scut_pane

0x7310,	// (0x00062cf9) cell_scut_pane_ParamLimits

0x7310,	// (0x00062cf9) cell_scut_pane

0x7329,	// (0x00062d12) cell_scut_pane_g1

0xe472,	// (0x00069e5b) cell_scut_pane_t1

0xe481,	// (0x00069e6a) cell_scut_pane_t2

0x7332,	// (0x00062d1b) cell_scut_pane_t3

0x0002,

0xfa56,	// (0x0006b43f) cell_scut_pane_t

0x4fc0,	// (0x000609a9) main_mup3_pane_g8_ParamLimits

0x4fc0,	// (0x000609a9) main_mup3_pane_g8

0x6483,	// (0x00061e6c) area_vitu2_query_pane_ParamLimits

0x6483,	// (0x00061e6c) area_vitu2_query_pane

0x7063,	// (0x00062a4c) input_focus_pane_cp08

0xe490,	// (0x00069e79) area_vitu2_query_pane_g1

0x7340,	// (0x00062d29) area_vitu2_query_pane_g2

0x0001,

0xfa5d,	// (0x0006b446) area_vitu2_query_pane_g

0x7351,	// (0x00062d3a) area_vitu2_query_pane_t1_ParamLimits

0x7351,	// (0x00062d3a) area_vitu2_query_pane_t1

0x7365,	// (0x00062d4e) area_vitu2_query_pane_t2_ParamLimits

0x7365,	// (0x00062d4e) area_vitu2_query_pane_t2

0x7379,	// (0x00062d62) area_vitu2_query_pane_t3_ParamLimits

0x7379,	// (0x00062d62) area_vitu2_query_pane_t3

0x73a1,	// (0x00062d8a) area_vitu2_query_pane_t4_ParamLimits

0x73a1,	// (0x00062d8a) area_vitu2_query_pane_t4

0x73c9,	// (0x00062db2) area_vitu2_query_pane_t5_ParamLimits

0x73c9,	// (0x00062db2) area_vitu2_query_pane_t5

0x73f1,	// (0x00062dda) area_vitu2_query_pane_t6_ParamLimits

0x73f1,	// (0x00062dda) area_vitu2_query_pane_t6

0x0006,

0xfa62,	// (0x0006b44b) area_vitu2_query_pane_t_ParamLimits

0xfa62,	// (0x0006b44b) area_vitu2_query_pane_t

0x743d,	// (0x00062e26) bg_button_pane_cp018

0x744b,	// (0x00062e34) bg_button_pane_cp021

0x7457,	// (0x00062e40) bg_button_pane_cp022

0x7468,	// (0x00062e51) input_focus_pane_cp09

0x2e2f,	// (0x0005e818) aid_size_touch_mv_arrow_left

0x2e58,	// (0x0005e841) aid_size_touch_mv_arrow_right

0x6b1d,	// (0x00062506) main_cset_slider_pane_g16_ParamLimits

0x6b1d,	// (0x00062506) main_cset_slider_pane_g16

0x6b2b,	// (0x00062514) main_cset_slider_pane_g17_ParamLimits

0x6b2b,	// (0x00062514) main_cset_slider_pane_g17

0x72e5,	// (0x00062cce) cell_cam4_burst_pane_g1_ParamLimits

0x0b67,	// (0x0005c550) compa_mode_pane

0x6d47,	// (0x00062730) popup_vtel_slider_window_g3_ParamLimits

0x6d47,	// (0x00062730) popup_vtel_slider_window_g3

0x6d5e,	// (0x00062747) popup_vtel_slider_window_g4_ParamLimits

0x6d5e,	// (0x00062747) popup_vtel_slider_window_g4

0x6d75,	// (0x0006275e) popup_vtel_slider_window_t1_ParamLimits

0x6d75,	// (0x0006275e) popup_vtel_slider_window_t1

0x0b67,	// (0x0005c550) main_cl_pane

0xbf21,	// (0x0006790a) popup_imed_adjust2_window_ParamLimits

0xbef5,	// (0x000678de) bg_tb_trans_pane_cp05_ParamLimits

0xc911,	// (0x000682fa) popup_imed_adjust2_window_g1_ParamLimits

0xc920,	// (0x00068309) popup_imed_adjust2_window_g2_ParamLimits

0xc920,	// (0x00068309) popup_imed_adjust2_window_g2

0xc92c,	// (0x00068315) popup_imed_adjust2_window_g3_ParamLimits

0xc92c,	// (0x00068315) popup_imed_adjust2_window_g3

0x0002,

0xf7fe,	// (0x0006b1e7) popup_imed_adjust2_window_g_ParamLimits

0xf7fe,	// (0x0006b1e7) popup_imed_adjust2_window_g

0xc938,	// (0x00068321) popup_imed_adjust2_window_t1_ParamLimits

0xc950,	// (0x00068339) slider_imed_adjust_pane_ParamLimits

0xc964,	// (0x0006834d) slider_imed_adjust_pane_g1_ParamLimits

0xc974,	// (0x0006835d) slider_imed_adjust_pane_g2_ParamLimits

0xc984,	// (0x0006836d) slider_imed_adjust_pane_g3_ParamLimits

0xc995,	// (0x0006837e) slider_imed_adjust_pane_g4_ParamLimits

0xf805,	// (0x0006b1ee) slider_imed_adjust_pane_g_ParamLimits

0x61d5,	// (0x00061bbe) aid_touch_area_cam4_ParamLimits

0x61d5,	// (0x00061bbe) aid_touch_area_cam4

0xdc6c,	// (0x00069655) battery_pane_cp01

0x6280,	// (0x00061c69) main_camera4_pane_g6_ParamLimits

0x6280,	// (0x00061c69) main_camera4_pane_g6

0x62a3,	// (0x00061c8c) main_camera4_pane_t2_ParamLimits

0x62a3,	// (0x00061c8c) main_camera4_pane_t2

0x0001,

0xf908,	// (0x0006b2f1) main_camera4_pane_t_ParamLimits

0xf908,	// (0x0006b2f1) main_camera4_pane_t

0x62d8,	// (0x00061cc1) aid_touch_area_vid4_ParamLimits

0x62d8,	// (0x00061cc1) aid_touch_area_vid4

0x6336,	// (0x00061d1f) main_video4_pane_g5_ParamLimits

0x6336,	// (0x00061d1f) main_video4_pane_g5

0x635d,	// (0x00061d46) vid4_progress_pane_ParamLimits

0x635d,	// (0x00061d46) vid4_progress_pane

0xe15f,	// (0x00069b48) main_cset_slider_pane_g18_ParamLimits

0xe15f,	// (0x00069b48) main_cset_slider_pane_g18

0xe34e,	// (0x00069d37) cell_cam4_burst_pane_g2_ParamLimits

0xe34e,	// (0x00069d37) cell_cam4_burst_pane_g2

0x0001,

0xfa51,	// (0x0006b43a) cell_cam4_burst_pane_g_ParamLimits

0xfa51,	// (0x0006b43a) cell_cam4_burst_pane_g

0x9eb9,	// (0x000658a2) bg_cl_pane_ParamLimits

0x9eb9,	// (0x000658a2) bg_cl_pane

0x7479,	// (0x00062e62) cl_header_pane_ParamLimits

0x7479,	// (0x00062e62) cl_header_pane

0x748d,	// (0x00062e76) cl_listscroll_pane_ParamLimits

0x748d,	// (0x00062e76) cl_listscroll_pane

0xe49c,	// (0x00069e85) bg_cl_pane_g1

0xe4a4,	// (0x00069e8d) bg_cl_pane_g2

0xe4ac,	// (0x00069e95) bg_cl_pane_g3

0xe4b4,	// (0x00069e9d) bg_cl_pane_g4

0xe4bc,	// (0x00069ea5) bg_cl_pane_g5

0xe4c4,	// (0x00069ead) bg_cl_pane_g6

0xe4cc,	// (0x00069eb5) bg_cl_pane_g7

0xe4d4,	// (0x00069ebd) bg_cl_pane_g8

0xe4dc,	// (0x00069ec5) bg_cl_pane_g9

0x0008,

0x05b5,	// (0x0005bf9e) bg_cl_pane_g

0x749d,	// (0x00062e86) aid_height_cl_leading_ParamLimits

0x749d,	// (0x00062e86) aid_height_cl_leading

0x74a9,	// (0x00062e92) aid_height_cl_text_ParamLimits

0x74a9,	// (0x00062e92) aid_height_cl_text

0x0dea,	// (0x0005c7d3) bg_cl_header_pane_ParamLimits

0x0dea,	// (0x0005c7d3) bg_cl_header_pane

0x74c8,	// (0x00062eb1) cl_header_pane_g1_ParamLimits

0x74c8,	// (0x00062eb1) cl_header_pane_g1

0x74de,	// (0x00062ec7) cl_header_pane_t1_ParamLimits

0x74de,	// (0x00062ec7) cl_header_pane_t1

0xe4e4,	// (0x00069ecd) cl_list_pane

0xe132,	// (0x00069b1b) hc_scroll_pane_cp01

0xa383,	// (0x00065d6c) bg_cl_header_pane_g1

0xe014,	// (0x000699fd) bg_cl_header_pane_g2

0xa3a3,	// (0x00065d8c) bg_cl_header_pane_g3

0xe024,	// (0x00069a0d) bg_cl_header_pane_g4

0xe01c,	// (0x00069a05) bg_cl_header_pane_g5

0xe267,	// (0x00069c50) bg_cl_header_pane_g6

0xe03c,	// (0x00069a25) bg_cl_header_pane_g7

0xe044,	// (0x00069a2d) bg_cl_header_pane_g8

0xe034,	// (0x00069a1d) bg_cl_header_pane_g9

0x0008,

0xfa71,	// (0x0006b45a) bg_cl_header_pane_g

0x74f7,	// (0x00062ee0) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x74f7,	// (0x00062ee0) hc_cl_list_double_graphic_heading_pane

0x750a,	// (0x00062ef3) hc_cl_list_single_graphic_pane_ParamLimits

0x750a,	// (0x00062ef3) hc_cl_list_single_graphic_pane

0x7522,	// (0x00062f0b) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7522,	// (0x00062f0b) hc_cl_list_single_graphic_pane_g1

0x752e,	// (0x00062f17) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x752e,	// (0x00062f17) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfa84,	// (0x0006b46d) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfa84,	// (0x0006b46d) hc_cl_list_single_graphic_pane_g

0x7542,	// (0x00062f2b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7542,	// (0x00062f2b) hc_cl_list_single_graphic_pane_t1

0x7522,	// (0x00062f0b) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7522,	// (0x00062f0b) hc_cl_list_double_graphic_heading_pane_g1

0x7557,	// (0x00062f40) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7557,	// (0x00062f40) hc_cl_list_double_graphic_heading_pane_g2

0x756b,	// (0x00062f54) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x756b,	// (0x00062f54) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfa89,	// (0x0006b472) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfa89,	// (0x0006b472) hc_cl_list_double_graphic_heading_pane_g

0x757f,	// (0x00062f68) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x757f,	// (0x00062f68) hc_cl_list_double_graphic_heading_pane_t1

0x7594,	// (0x00062f7d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7594,	// (0x00062f7d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfa90,	// (0x0006b479) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfa90,	// (0x0006b479) hc_cl_list_double_graphic_heading_pane_t

0xdd9e,	// (0x00069787) vid4_progress_pane_g1

0xddaa,	// (0x00069793) vid4_progress_pane_g2

0xddb6,	// (0x0006979f) vid4_progress_pane_g3

0xddc5,	// (0x000697ae) vid4_progress_pane_g4

0x0004,

0xfa95,	// (0x0006b47e) vid4_progress_pane_g

0xdde3,	// (0x000697cc) vid4_progress_pane_t1

0xddf9,	// (0x000697e2) vid4_progress_pane_t2

0x0002,

0xfaa0,	// (0x0006b489) vid4_progress_pane_t

0xde24,	// (0x0006980d) wait_bar_pane_cp07

0xc217,	// (0x00067c00) blid_firmament_pane_ParamLimits

0xc25a,	// (0x00067c43) popup_blid_sat_info2_window_g1

0xc27e,	// (0x00067c67) popup_blid_sat_info2_window_t3

0xc28c,	// (0x00067c75) popup_blid_sat_info2_window_t4

0xc29a,	// (0x00067c83) popup_blid_sat_info2_window_t5

0xc2a8,	// (0x00067c91) popup_blid_sat_info2_window_t6

0xc2b8,	// (0x00067ca1) popup_blid_sat_info2_window_t7

0xc2c6,	// (0x00067caf) popup_blid_sat_info2_window_t8

0xc2d4,	// (0x00067cbd) popup_blid_sat_info2_window_t9

0xc2e2,	// (0x00067ccb) popup_blid_sat_info2_window_t10

0xc3aa,	// (0x00067d93) aid_firma_cardinal_ParamLimits

0xc3be,	// (0x00067da7) blid_firmament_pane_t1_ParamLimits

0xc3d5,	// (0x00067dbe) blid_firmament_pane_t2_ParamLimits

0xc3ec,	// (0x00067dd5) blid_firmament_pane_t3_ParamLimits

0xc403,	// (0x00067dec) blid_firmament_pane_t4_ParamLimits

0xf6f7,	// (0x0006b0e0) blid_firmament_pane_t_ParamLimits

0xc41a,	// (0x00067e03) blid_sat_info_pane_ParamLimits

0x0dea,	// (0x0005c7d3) main_cam_set_pane_ParamLimits

0x585a,	// (0x00061243) aid_size_cell_colour_35_ParamLimits

0x587a,	// (0x00061263) aid_size_cell_colour_112_ParamLimits

0x589a,	// (0x00061283) aid_size_cell_effect_ParamLimits

0xbef5,	// (0x000678de) bg_tb_trans_pane_cp02_ParamLimits

0xa579,	// (0x00065f62) heading_imed_pane_ParamLimits

0x58ba,	// (0x000612a3) listscroll_imed_pane_ParamLimits

0xb523,	// (0x00066f0c) popup_call2_audio_first_window_g5_ParamLimits

0xb523,	// (0x00066f0c) popup_call2_audio_first_window_g5

0x5e7f,	// (0x00061868) aid_size_touch_image3_arrow_left_ParamLimits

0x5e7f,	// (0x00061868) aid_size_touch_image3_arrow_left

0x5eab,	// (0x00061894) aid_size_touch_image3_arrow_right_ParamLimits

0x5eab,	// (0x00061894) aid_size_touch_image3_arrow_right

0xde0f,	// (0x000697f8) vid4_progress_pane_t3

0x5bd7,	// (0x000615c0) main_hwr_training_symbol_option_pane_ParamLimits

0x5bd7,	// (0x000615c0) main_hwr_training_symbol_option_pane

0xcc00,	// (0x000685e9) popup_hwr_training_preview_window_ParamLimits

0xcc00,	// (0x000685e9) popup_hwr_training_preview_window

0x5bf7,	// (0x000615e0) hwr_training_navi_pane_g5_ParamLimits

0x5bf7,	// (0x000615e0) hwr_training_navi_pane_g5

0xe002,	// (0x000699eb) popup_char_count_window

0xdd09,	// (0x000696f2) bg_popup_sub_pane_cp20_ParamLimits

0x6e9d,	// (0x00062886) list_vitu2_match_list_pane_ParamLimits

0x6eac,	// (0x00062895) vitu2_page_scroll_pane_ParamLimits

0x6eac,	// (0x00062895) vitu2_page_scroll_pane

0xe4ed,	// (0x00069ed6) list_single_hwr_training_symbol_option_pane_ParamLimits

0xe4ed,	// (0x00069ed6) list_single_hwr_training_symbol_option_pane

0xe500,	// (0x00069ee9) list_single_hwr_training_symbol_option_pane_g1

0xe508,	// (0x00069ef1) list_single_hwr_training_symbol_option_pane_t1

0xe516,	// (0x00069eff) bg_button_pane_cp023

0xe51f,	// (0x00069f08) bg_button_pane_cp024

0x760d,	// (0x00062ff6) vitu2_page_scroll_pane_g1

0x7615,	// (0x00062ffe) vitu2_page_scroll_pane_g2

0x0001,

0xfaa7,	// (0x0006b490) vitu2_page_scroll_pane_g

0x761f,	// (0x00063008) vitu2_page_scroll_pane_t1

0xc133,	// (0x00067b1c) popup_char_count_window_g1

0xe552,	// (0x00069f3b) popup_char_count_window_g2

0xe55b,	// (0x00069f44) popup_char_count_window_g3

0x0002,

0xfaac,	// (0x0006b495) popup_char_count_window_g

0xe564,	// (0x00069f4d) popup_char_count_window_t1

0x0b67,	// (0x0005c550) main_vded2_pane

0xc8fd,	// (0x000682e6) aid_size_cell_imed_line

0xc907,	// (0x000682f0) grid_imed_line_width_pane

0x63cd,	// (0x00061db6) vid4_indicators_pane_g4

0xe572,	// (0x00069f5b) cell_imed_line_width_pane_ParamLimits

0xe572,	// (0x00069f5b) cell_imed_line_width_pane

0xe588,	// (0x00069f71) cell_imed_line_width_pane_g1

0xc1c5,	// (0x00067bae) cell_imed_line_width_pane_g2

0x0001,

0xfab3,	// (0x0006b49c) cell_imed_line_width_pane_g

0x762e,	// (0x00063017) main_vded2_pane_g1_ParamLimits

0x762e,	// (0x00063017) main_vded2_pane_g1

0x7649,	// (0x00063032) main_vded2_pane_g2_ParamLimits

0x7649,	// (0x00063032) main_vded2_pane_g2

0x0001,

0xfab8,	// (0x0006b4a1) main_vded2_pane_g_ParamLimits

0xfab8,	// (0x0006b4a1) main_vded2_pane_g

0x765b,	// (0x00063044) vded2_slider_pane_ParamLimits

0x765b,	// (0x00063044) vded2_slider_pane

0x766b,	// (0x00063054) aid_size_touch_vded2_end

0x7675,	// (0x0006305e) aid_size_touch_vded2_playhead

0xe591,	// (0x00069f7a) aid_size_touch_vded2_start

0xe599,	// (0x00069f82) vded2_slider_bg_pane

0xe5a2,	// (0x00069f8b) vded2_slider_pane_g1

0xe5ab,	// (0x00069f94) vded2_slider_pane_g2

0x767f,	// (0x00063068) vded2_slider_pane_g3

0x0002,

0xfabd,	// (0x0006b4a6) vded2_slider_pane_g

0xe220,	// (0x00069c09) vded2_slider_bg_pane_g1

0xe229,	// (0x00069c12) vded2_slider_bg_pane_g2

0xe232,	// (0x00069c1b) vded2_slider_bg_pane_g3

0x0002,

0xfac4,	// (0x0006b4ad) vded2_slider_bg_pane_g

0x354f,	// (0x0005ef38) aid_postcard_touch_down_pane_ParamLimits

0x354f,	// (0x0005ef38) aid_postcard_touch_down_pane

0x3567,	// (0x0005ef50) aid_postcard_touch_up_pane_ParamLimits

0x3567,	// (0x0005ef50) aid_postcard_touch_up_pane

0x0b67,	// (0x0005c550) main_blid2_pane

0xbf03,	// (0x000678ec) popup_blid2_search_window

0x0b67,	// (0x0005c550) blid2_gps_pane

0x0b67,	// (0x0005c550) blid2_navig_pane

0x0b67,	// (0x0005c550) blid2_search_pane

0x0b67,	// (0x0005c550) blid2_tripm_pane

0x768a,	// (0x00063073) blid2_search_pane_g1_ParamLimits

0x768a,	// (0x00063073) blid2_search_pane_g1

0x76a2,	// (0x0006308b) blid2_search_pane_t1_ParamLimits

0x76a2,	// (0x0006308b) blid2_search_pane_t1

0x76b4,	// (0x0006309d) aid_size_cell_blid2_gps_ParamLimits

0x76b4,	// (0x0006309d) aid_size_cell_blid2_gps

0x76cc,	// (0x000630b5) blid2_gps_pane_g1_ParamLimits

0x76cc,	// (0x000630b5) blid2_gps_pane_g1

0x76e0,	// (0x000630c9) grid_blid2_satellite_pane_ParamLimits

0x76e0,	// (0x000630c9) grid_blid2_satellite_pane

0x76f8,	// (0x000630e1) blid2_navig_pane_g1_ParamLimits

0x76f8,	// (0x000630e1) blid2_navig_pane_g1

0x7704,	// (0x000630ed) blid2_navig_pane_t1_ParamLimits

0x7704,	// (0x000630ed) blid2_navig_pane_t1

0x771f,	// (0x00063108) blid2_navig_pane_t2_ParamLimits

0x771f,	// (0x00063108) blid2_navig_pane_t2

0x0001,

0xfacb,	// (0x0006b4b4) blid2_navig_pane_t_ParamLimits

0xfacb,	// (0x0006b4b4) blid2_navig_pane_t

0x773a,	// (0x00063123) blid2_navig_ring_pane_ParamLimits

0x773a,	// (0x00063123) blid2_navig_ring_pane

0x7755,	// (0x0006313e) blid2_speed_pane_ParamLimits

0x7755,	// (0x0006313e) blid2_speed_pane

0x7761,	// (0x0006314a) blid2_tripm_pane_g1_ParamLimits

0x7761,	// (0x0006314a) blid2_tripm_pane_g1

0x777c,	// (0x00063165) blid2_tripm_pane_g2_ParamLimits

0x777c,	// (0x00063165) blid2_tripm_pane_g2

0x7790,	// (0x00063179) blid2_tripm_pane_g3_ParamLimits

0x7790,	// (0x00063179) blid2_tripm_pane_g3

0x77a4,	// (0x0006318d) blid2_tripm_pane_g4_ParamLimits

0x77a4,	// (0x0006318d) blid2_tripm_pane_g4

0x77b8,	// (0x000631a1) blid2_tripm_pane_g5_ParamLimits

0x77b8,	// (0x000631a1) blid2_tripm_pane_g5

0x0005,

0xfad0,	// (0x0006b4b9) blid2_tripm_pane_g_ParamLimits

0xfad0,	// (0x0006b4b9) blid2_tripm_pane_g

0x77de,	// (0x000631c7) blid2_tripm_pane_t1_ParamLimits

0x77de,	// (0x000631c7) blid2_tripm_pane_t1

0x77f9,	// (0x000631e2) blid2_tripm_pane_t2_ParamLimits

0x77f9,	// (0x000631e2) blid2_tripm_pane_t2

0x7812,	// (0x000631fb) blid2_tripm_pane_t3_ParamLimits

0x7812,	// (0x000631fb) blid2_tripm_pane_t3

0x0003,

0xfadd,	// (0x0006b4c6) blid2_tripm_pane_t_ParamLimits

0xfadd,	// (0x0006b4c6) blid2_tripm_pane_t

0x7859,	// (0x00063242) cell_blid2_satellite_pane_ParamLimits

0x7859,	// (0x00063242) cell_blid2_satellite_pane

0x7875,	// (0x0006325e) cell_blid2_satellite_pane_g1

0xe5b3,	// (0x00069f9c) cell_blid2_satellite_pane_t1

0xc42a,	// (0x00067e13) blid2_speed_pane_g1

0xe5c1,	// (0x00069faa) blid2_speed_pane_t1

0xe5cf,	// (0x00069fb8) blid2_speed_pane_t2

0x0001,

0x0636,	// (0x0005c01f) blid2_speed_pane_t

0xc42a,	// (0x00067e13) blid2_navig_ring_pane_g1

0x787e,	// (0x00063267) blid2_navig_ring_pane_g2

0x7886,	// (0x0006326f) blid2_navig_ring_pane_g3

0x788e,	// (0x00063277) blid2_navig_ring_pane_g4

0x7896,	// (0x0006327f) blid2_navig_ring_pane_g5

0x0004,

0xfae6,	// (0x0006b4cf) blid2_navig_ring_pane_g

0x0b67,	// (0x0005c550) bg_popup_window_pane_cp011

0xe5dd,	// (0x00069fc6) popup_blid2_search_window_g1

0xe5e5,	// (0x00069fce) popup_blid2_search_window_t1

0xe5f3,	// (0x00069fdc) popup_blid2_search_window_t2

0x0001,

0x0646,	// (0x0005c02f) popup_blid2_search_window_t

0xa292,	// (0x00065c7b) main_browser_pane_g1

0x9eb9,	// (0x000658a2) main_browser_pane_ParamLimits

0xdd09,	// (0x000696f2) bg_button_pane_cp011_ParamLimits

0x66e3,	// (0x000620cc) cell_vitu2_function_pane_g1_ParamLimits

0xbef5,	// (0x000678de) bg_popup_sub_pane_cp22_ParamLimits

0x7063,	// (0x00062a4c) input_focus_pane_cp08_ParamLimits

0x707a,	// (0x00062a63) popup_vitu2_query_button_pane_ParamLimits

0x707a,	// (0x00062a63) popup_vitu2_query_button_pane

0x708b,	// (0x00062a74) popup_vitu2_query_input_button_pane

0xe2a4,	// (0x00069c8d) popup_vitu2_query_window_g1_ParamLimits

0x7095,	// (0x00062a7e) popup_vitu2_query_window_g2_ParamLimits

0xfa34,	// (0x0006b41d) popup_vitu2_query_window_g_ParamLimits

0x0b67,	// (0x0005c550) bg_button_pane_cp026

0x789e,	// (0x00063287) popup_vitu2_query_input_button_pane_g1

0x0b67,	// (0x0005c550) bg_button_pane_cp025

0xe601,	// (0x00069fea) popup_vitu2_query_button_pane_t1

0x4c5c,	// (0x00060645) main_mp3_pane_t6

0x4c6a,	// (0x00060653) popup_slider_window_cp01

0xdc98,	// (0x00069681) cam4_battery_pane

0xdcff,	// (0x000696e8) cam4_battery_pane_cp02

0x75a9,	// (0x00062f92) cam4_battery_pane_cp01

0xdd96,	// (0x0006977f) cam4_battery_pane_cp03

0xdeaa,	// (0x00069893) cam4_battery_pane_g1

0xc42a,	// (0x00067e13) cam4_battery_pane_g2

0x0001,

0xfaf1,	// (0x0006b4da) cam4_battery_pane_g

0xc2f0,	// (0x00067cd9) popup_blid_sat_info2_window_t11

0x2e2f,	// (0x0005e818) aid_size_touch_mv_arrow_left_ParamLimits

0x2e58,	// (0x0005e841) aid_size_touch_mv_arrow_right_ParamLimits

0xa9e8,	// (0x000663d1) navi_pane_g1_ParamLimits

0x2e81,	// (0x0005e86a) navi_pane_g2_ParamLimits

0x2eaf,	// (0x0005e898) navi_pane_g3_ParamLimits

0xf409,	// (0x0006adf2) navi_pane_g_ParamLimits

0x2f09,	// (0x0005e8f2) navi_pane_mv_t1_ParamLimits

0x58c6,	// (0x000612af) grid_imed_effect_pane_ParamLimits

0x1c72,	// (0x0005d65b) aid_placing_vt_slider_lsc

0xa1df,	// (0x00065bc8) aid_placing_vt_slider_prt

0x0dea,	// (0x0005c7d3) bg_tb_trans_pane_cp01_ParamLimits

0xc57a,	// (0x00067f63) popup_image_details_window_g1_ParamLimits

0xc58d,	// (0x00067f76) popup_image_details_window_g2_ParamLimits

0xc5a2,	// (0x00067f8b) popup_image_details_window_g3_ParamLimits

0xc5a2,	// (0x00067f8b) popup_image_details_window_g3

0xf73c,	// (0x0006b125) popup_image_details_window_g_ParamLimits

0xc5b6,	// (0x00067f9f) popup_image_details_window_t1_ParamLimits

0xc5c8,	// (0x00067fb1) popup_image_details_window_t2_ParamLimits

0xc5e1,	// (0x00067fca) popup_image_details_window_t3_ParamLimits

0xc5f5,	// (0x00067fde) popup_image_details_window_t4_ParamLimits

0xc610,	// (0x00067ff9) popup_image_details_window_t5_ParamLimits

0xf743,	// (0x0006b12c) popup_image_details_window_t_ParamLimits

0x74b5,	// (0x00062e9e) cl_header_name_pane_ParamLimits

0x74b5,	// (0x00062e9e) cl_header_name_pane

0x78a6,	// (0x0006328f) cl_header_name_pane_t1_ParamLimits

0x78a6,	// (0x0006328f) cl_header_name_pane_t1

0x78c7,	// (0x000632b0) cl_header_name_pane_t2_ParamLimits

0x78c7,	// (0x000632b0) cl_header_name_pane_t2

0x7909,	// (0x000632f2) cl_header_name_pane_t3_ParamLimits

0x7909,	// (0x000632f2) cl_header_name_pane_t3

0x0002,

0xfaf6,	// (0x0006b4df) cl_header_name_pane_t_ParamLimits

0xfaf6,	// (0x0006b4df) cl_header_name_pane_t

0x2eda,	// (0x0005e8c3) navi_pane_mv_g2_ParamLimits

0xdfdc,	// (0x000699c5) field_vitu2_entry_pane_g1_ParamLimits

0xdfe8,	// (0x000699d1) field_vitu2_entry_pane_g2_ParamLimits

0xdff4,	// (0x000699dd) field_vitu2_entry_pane_g3_ParamLimits

0xdff4,	// (0x000699dd) field_vitu2_entry_pane_g3

0xf93a,	// (0x0006b323) field_vitu2_entry_pane_g_ParamLimits

0x665f,	// (0x00062048) cell_vitu2_itu_pane_g1_ParamLimits

0x666f,	// (0x00062058) cell_vitu2_itu_pane_g2_ParamLimits

0x666f,	// (0x00062058) cell_vitu2_itu_pane_g2

0x0001,

0xf946,	// (0x0006b32f) cell_vitu2_itu_pane_g_ParamLimits

0xf946,	// (0x0006b32f) cell_vitu2_itu_pane_g

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp05_ParamLimits

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp05

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp03

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp04

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp10_ParamLimits

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp10

0x7457,	// (0x00062e40) bg_vkb2_func_pane_cp08

0x743d,	// (0x00062e26) bg_vkb2_func_pane_cp06

0x744b,	// (0x00062e34) bg_vkb2_func_pane_cp07

0xe528,	// (0x00069f11) bg_vkb2_func_pane_cp11_ParamLimits

0xe528,	// (0x00069f11) bg_vkb2_func_pane_cp11

0xe53d,	// (0x00069f26) bg_vkb2_func_pane_cp12_ParamLimits

0xe53d,	// (0x00069f26) bg_vkb2_func_pane_cp12

0x0b67,	// (0x0005c550) bg_vkb2_func_pane_cp09

0xe014,	// (0x000699fd) bg_vkb2_func_pane_g1

0xa3a3,	// (0x00065d8c) bg_vkb2_func_pane_g2

0xe01c,	// (0x00069a05) bg_vkb2_func_pane_g3

0xe024,	// (0x00069a0d) bg_vkb2_func_pane_g4

0xe267,	// (0x00069c50) bg_vkb2_func_pane_g5

0xe03c,	// (0x00069a25) bg_vkb2_func_pane_g6

0xe044,	// (0x00069a2d) bg_vkb2_func_pane_g7

0xe034,	// (0x00069a1d) bg_vkb2_func_pane_g8

0xa383,	// (0x00065d6c) bg_vkb2_func_pane_g9

0x0008,

0xfafd,	// (0x0006b4e6) bg_vkb2_func_pane_g

0x77cc,	// (0x000631b5) blid2_tripm_pane_g6_ParamLimits

0x77cc,	// (0x000631b5) blid2_tripm_pane_g6

0xde64,	// (0x0006984d) mp4_progress_pane_g1

0x7845,	// (0x0006322e) blid2_tripm_values_pane_ParamLimits

0x7845,	// (0x0006322e) blid2_tripm_values_pane

0x793a,	// (0x00063323) blid2_tripm_values_pane_t1

0x7948,	// (0x00063331) blid2_tripm_values_pane_t2

0x7956,	// (0x0006333f) blid2_tripm_values_pane_t3

0x7964,	// (0x0006334d) blid2_tripm_values_pane_t4

0x7972,	// (0x0006335b) blid2_tripm_values_pane_t5

0x7980,	// (0x00063369) blid2_tripm_values_pane_t6

0x798e,	// (0x00063377) blid2_tripm_values_pane_t7

0x799c,	// (0x00063385) blid2_tripm_values_pane_t8

0x79aa,	// (0x00063393) blid2_tripm_values_pane_t9

0x0008,

0xfb10,	// (0x0006b4f9) blid2_tripm_values_pane_t

0x1cb2,	// (0x0005d69b) call_video_pane_t1_ParamLimits

0x1ccc,	// (0x0005d6b5) call_video_pane_t2_ParamLimits

0xf292,	// (0x0006ac7b) call_video_pane_t_ParamLimits

0x3452,	// (0x0005ee3b) msg_header_pane_g1_ParamLimits

0xac25,	// (0x0006660e) msg_header_pane_g2_ParamLimits

0xac25,	// (0x0006660e) msg_header_pane_g2

0x0001,

0xf4ac,	// (0x0006ae95) msg_header_pane_g_ParamLimits

0xf4ac,	// (0x0006ae95) msg_header_pane_g

0x9eb9,	// (0x000658a2) main_clock2_pane_ParamLimits

0x55cf,	// (0x00060fb8) grid_clock2_toolbar_pane_ParamLimits

0x55cf,	// (0x00060fb8) grid_clock2_toolbar_pane

0x55cf,	// (0x00060fb8) listscroll_clock2_pane_ParamLimits

0x55cf,	// (0x00060fb8) listscroll_clock2_pane

0x56b8,	// (0x000610a1) main_clock2_pane_t3_ParamLimits

0x56b8,	// (0x000610a1) main_clock2_pane_t3

0x56d3,	// (0x000610bc) main_clock2_pane_t4_ParamLimits

0x56d3,	// (0x000610bc) main_clock2_pane_t4

0xe60f,	// (0x00069ff8) cell_clock2_toolbar_pane

0xe617,	// (0x0006a000) cell_clock2_toolbar_pane_cp01

0xe617,	// (0x0006a000) cell_clock2_toolbar_pane_cp02

0xe61f,	// (0x0006a008) cell_clock2_toolbar_pane_cp03

0xe627,	// (0x0006a010) list_clock2_pane

0xa94e,	// (0x00066337) scroll_pane_cp10

0xe62f,	// (0x0006a018) list_single_clock2_pane_ParamLimits

0xe62f,	// (0x0006a018) list_single_clock2_pane

0xaa88,	// (0x00066471) list_highlight_pane_cp08

0xe63c,	// (0x0006a025) list_single_clock2_pane_t1

0xe656,	// (0x0006a03f) list_single_clock2_pane_t2

0x0001,

0xfb23,	// (0x0006b50c) list_single_clock2_pane_t

0x0b67,	// (0x0005c550) bg_button_pane_cp10

0xe664,	// (0x0006a04d) cell_clock2_toolbar_pane_g1

0x34db,	// (0x0005eec4) aid_main_viewer_pane_g1_ParamLimits

0x34db,	// (0x0005eec4) aid_main_viewer_pane_g1

0x34e9,	// (0x0005eed2) aid_main_viewer_pane_g2_ParamLimits

0x34e9,	// (0x0005eed2) aid_main_viewer_pane_g2

0x34f7,	// (0x0005eee0) aid_main_viewer_pane_g3_ParamLimits

0x34f7,	// (0x0005eee0) aid_main_viewer_pane_g3

0x3506,	// (0x0005eeef) aid_main_viewer_pane_g4_ParamLimits

0x3506,	// (0x0005eeef) aid_main_viewer_pane_g4

0x0003,

0xf4bd,	// (0x0006aea6) aid_main_viewer_pane_g_ParamLimits

0xf4bd,	// (0x0006aea6) aid_main_viewer_pane_g

0x3e5e,	// (0x0005f847) main_calc_pane_ParamLimits

0x3e72,	// (0x0005f85b) main_dialer2_pane_ParamLimits

0x0b67,	// (0x0005c550) main_cam6_pane

0x0b67,	// (0x0005c550) main_vid6_pane

0x55db,	// (0x00060fc4) listscroll_gen_pane_cp06_ParamLimits

0x55db,	// (0x00060fc4) listscroll_gen_pane_cp06

0x56ee,	// (0x000610d7) main_clock2_pane_t5_ParamLimits

0x56ee,	// (0x000610d7) main_clock2_pane_t5

0x574b,	// (0x00061134) aid_call2_pane_cp10_ParamLimits

0x575d,	// (0x00061146) aid_call_pane_cp10_ParamLimits

0xa9bd,	// (0x000663a6) popup_clock_analogue_window_cp10_g1_ParamLimits

0xa9bd,	// (0x000663a6) popup_clock_analogue_window_cp10_g2_ParamLimits

0x576f,	// (0x00061158) popup_clock_analogue_window_cp10_g3_ParamLimits

0x576f,	// (0x00061158) popup_clock_analogue_window_cp10_g4_ParamLimits

0xa9bd,	// (0x000663a6) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7f3,	// (0x0006b1dc) popup_clock_analogue_window_cp10_g_ParamLimits

0x5785,	// (0x0006116e) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5e2c,	// (0x00061815) cell_dialer2_keypad_pane_g2_ParamLimits

0x5e2c,	// (0x00061815) cell_dialer2_keypad_pane_g2

0x0001,

0xf8d9,	// (0x0006b2c2) cell_dialer2_keypad_pane_g_ParamLimits

0xf8d9,	// (0x0006b2c2) cell_dialer2_keypad_pane_g

0x5e48,	// (0x00061831) cell_dialer2_keypad_pane_t1

0x6a0e,	// (0x000623f7) main_cset_text2_pane_ParamLimits

0x6a0e,	// (0x000623f7) main_cset_text2_pane

0xe490,	// (0x00069e79) area_vitu2_query_pane_g1_ParamLimits

0x7340,	// (0x00062d29) area_vitu2_query_pane_g2_ParamLimits

0xfa5d,	// (0x0006b446) area_vitu2_query_pane_g_ParamLimits

0x7419,	// (0x00062e02) area_vitu2_query_pane_t7_ParamLimits

0x7419,	// (0x00062e02) area_vitu2_query_pane_t7

0x743d,	// (0x00062e26) bg_button_pane_cp018_ParamLimits

0x744b,	// (0x00062e34) bg_button_pane_cp021_ParamLimits

0x7457,	// (0x00062e40) bg_button_pane_cp022_ParamLimits

0x7457,	// (0x00062e40) bg_vkb2_func_pane_cp08_ParamLimits

0x743d,	// (0x00062e26) bg_vkb2_func_pane_cp06_ParamLimits

0x744b,	// (0x00062e34) bg_vkb2_func_pane_cp07_ParamLimits

0x7468,	// (0x00062e51) input_focus_pane_cp09_ParamLimits

0xde36,	// (0x0006981f) cam6_autofocus_pane_ParamLimits

0xde36,	// (0x0006981f) cam6_autofocus_pane

0x79b8,	// (0x000633a1) cam6_image_uncrop_pane_ParamLimits

0x79b8,	// (0x000633a1) cam6_image_uncrop_pane

0x79c7,	// (0x000633b0) cam6_indi_pane_ParamLimits

0x79c7,	// (0x000633b0) cam6_indi_pane

0x79dd,	// (0x000633c6) cam6_mode_pane_ParamLimits

0x79dd,	// (0x000633c6) cam6_mode_pane

0x79ef,	// (0x000633d8) cam6_timer_pane_ParamLimits

0x79ef,	// (0x000633d8) cam6_timer_pane

0x79fb,	// (0x000633e4) cam6_zoom_pane_ParamLimits

0x79fb,	// (0x000633e4) cam6_zoom_pane

0x7a09,	// (0x000633f2) cam6_mode_pane_g1_ParamLimits

0x7a09,	// (0x000633f2) cam6_mode_pane_g1

0x7a19,	// (0x00063402) cam6_mode_pane_g2_ParamLimits

0x7a19,	// (0x00063402) cam6_mode_pane_g2

0x7a29,	// (0x00063412) cam6_mode_pane_g3_ParamLimits

0x7a29,	// (0x00063412) cam6_mode_pane_g3

0x7a39,	// (0x00063422) cam6_mode_pane_g4_ParamLimits

0x7a39,	// (0x00063422) cam6_mode_pane_g4

0x0003,

0xfb28,	// (0x0006b511) cam6_mode_pane_g_ParamLimits

0xfb28,	// (0x0006b511) cam6_mode_pane_g

0xe23b,	// (0x00069c24) bg_tb_trans_pane_cp08_ParamLimits

0xe23b,	// (0x00069c24) bg_tb_trans_pane_cp08

0xe66c,	// (0x0006a055) cam6_battery_pane_ParamLimits

0xe66c,	// (0x0006a055) cam6_battery_pane

0xe682,	// (0x0006a06b) cam6_indi_pane_g1_ParamLimits

0xe682,	// (0x0006a06b) cam6_indi_pane_g1

0xe694,	// (0x0006a07d) cam6_indi_pane_g2_ParamLimits

0xe694,	// (0x0006a07d) cam6_indi_pane_g2

0xe6a6,	// (0x0006a08f) cam6_indi_pane_g3_ParamLimits

0xe6a6,	// (0x0006a08f) cam6_indi_pane_g3

0x0002,

0xfb31,	// (0x0006b51a) cam6_indi_pane_g_ParamLimits

0xfb31,	// (0x0006b51a) cam6_indi_pane_g

0xe6b8,	// (0x0006a0a1) cam6_indi_pane_t1_ParamLimits

0xe6b8,	// (0x0006a0a1) cam6_indi_pane_t1

0x63ff,	// (0x00061de8) cam6_autofocus_pane_g1

0x63f7,	// (0x00061de0) cam6_autofocus_pane_g2

0x640f,	// (0x00061df8) cam6_autofocus_pane_g3

0x6407,	// (0x00061df0) cam6_autofocus_pane_g4

0x0003,

0xfb38,	// (0x0006b521) cam6_autofocus_pane_g

0xe6de,	// (0x0006a0c7) cam6_timer_pane_g1

0xe6e6,	// (0x0006a0cf) cam6_timer_pane_t1

0xe6f4,	// (0x0006a0dd) cam6_zoom_cont_pane

0xe6fc,	// (0x0006a0e5) cam6_zoom_pane_g1

0xe704,	// (0x0006a0ed) cam6_zoom_pane_g2

0x7a49,	// (0x00063432) cam6_zoom_pane_g3

0x0002,

0xfb41,	// (0x0006b52a) cam6_zoom_pane_g

0xc42a,	// (0x00067e13) cam6_battery_pane_g1

0xc42a,	// (0x00067e13) cam6_battery_pane_g2

0x0001,

0xf700,	// (0x0006b0e9) cam6_battery_pane_g

0xe70c,	// (0x0006a0f5) cam6_zoom_cont_pane_g1

0xe715,	// (0x0006a0fe) cam6_zoom_cont_pane_g2

0xe71e,	// (0x0006a107) cam6_zoom_cont_pane_g3

0x0002,

0xfb48,	// (0x0006b531) cam6_zoom_cont_pane_g

0x7a66,	// (0x0006344f) cam6_mode_pane_cp_ParamLimits

0x7a66,	// (0x0006344f) cam6_mode_pane_cp

0x7a78,	// (0x00063461) cam6_zoom_pane_cp_ParamLimits

0x7a78,	// (0x00063461) cam6_zoom_pane_cp

0x7a86,	// (0x0006346f) vid6_image_uncrop_cif_pane_ParamLimits

0x7a86,	// (0x0006346f) vid6_image_uncrop_cif_pane

0x7a96,	// (0x0006347f) vid6_image_uncrop_nhd_pane_ParamLimits

0x7a96,	// (0x0006347f) vid6_image_uncrop_nhd_pane

0x7aa5,	// (0x0006348e) vid6_image_uncrop_vga_pane_ParamLimits

0x7aa5,	// (0x0006348e) vid6_image_uncrop_vga_pane

0x7ab4,	// (0x0006349d) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ab4,	// (0x0006349d) vid6_image_uncrop_wvga_pane

0x7ac3,	// (0x000634ac) vid6_indi_pane_ParamLimits

0x7ac3,	// (0x000634ac) vid6_indi_pane

0xe23b,	// (0x00069c24) bg_tb_trans_pane_cp09_ParamLimits

0xe23b,	// (0x00069c24) bg_tb_trans_pane_cp09

0xe736,	// (0x0006a11f) cam6_battery_pane_cp_ParamLimits

0xe736,	// (0x0006a11f) cam6_battery_pane_cp

0xe742,	// (0x0006a12b) vid6_indi_pane_g1_ParamLimits

0xe742,	// (0x0006a12b) vid6_indi_pane_g1

0xe754,	// (0x0006a13d) vid6_indi_pane_g2_ParamLimits

0xe754,	// (0x0006a13d) vid6_indi_pane_g2

0xe766,	// (0x0006a14f) vid6_indi_pane_g3_ParamLimits

0xe766,	// (0x0006a14f) vid6_indi_pane_g3

0xe77d,	// (0x0006a166) vid6_indi_pane_g4_ParamLimits

0xe77d,	// (0x0006a166) vid6_indi_pane_g4

0xe794,	// (0x0006a17d) vid6_indi_pane_g5_ParamLimits

0xe794,	// (0x0006a17d) vid6_indi_pane_g5

0x0004,

0xfb4f,	// (0x0006b538) vid6_indi_pane_g_ParamLimits

0xfb4f,	// (0x0006b538) vid6_indi_pane_g

0xe7ae,	// (0x0006a197) vid6_indi_pane_t1_ParamLimits

0xe7ae,	// (0x0006a197) vid6_indi_pane_t1

0xe7c4,	// (0x0006a1ad) vid6_indi_pane_t2_ParamLimits

0xe7c4,	// (0x0006a1ad) vid6_indi_pane_t2

0xe7ec,	// (0x0006a1d5) vid6_indi_pane_t3_ParamLimits

0xe7ec,	// (0x0006a1d5) vid6_indi_pane_t3

0xe814,	// (0x0006a1fd) vid6_indi_pane_t4_ParamLimits

0xe814,	// (0x0006a1fd) vid6_indi_pane_t4

0x0003,

0xfb5a,	// (0x0006b543) vid6_indi_pane_t_ParamLimits

0xfb5a,	// (0x0006b543) vid6_indi_pane_t

0xe838,	// (0x0006a221) wait_bar_pane_cp08

0x7adb,	// (0x000634c4) main_cset_text2_pane_t1_ParamLimits

0x7adb,	// (0x000634c4) main_cset_text2_pane_t1

0x7a51,	// (0x0006343a) listscroll_gen_pane_cp06_t1_ParamLimits

0x7a51,	// (0x0006343a) listscroll_gen_pane_cp06_t1

0x0b67,	// (0x0005c550) main_cam6_set_pane

0xdc8a,	// (0x00069673) bg_tb_trans_pane_cp06_ParamLimits

0xdca0,	// (0x00069689) cam4_indicators_pane_g1_ParamLimits

0xdcad,	// (0x00069696) cam4_indicators_pane_g2_ParamLimits

0xf916,	// (0x0006b2ff) cam4_indicators_pane_g_ParamLimits

0xdccd,	// (0x000696b6) cam4_indicators_pane_t1_ParamLimits

0xdcf1,	// (0x000696da) bg_tb_trans_pane_cp07_ParamLimits

0x63a6,	// (0x00061d8f) vid4_indicators_pane_g1_ParamLimits

0x63b3,	// (0x00061d9c) vid4_indicators_pane_g2_ParamLimits

0x63c0,	// (0x00061da9) vid4_indicators_pane_g3_ParamLimits

0x63cd,	// (0x00061db6) vid4_indicators_pane_g4_ParamLimits

0xf928,	// (0x0006b311) vid4_indicators_pane_g_ParamLimits

0x63e5,	// (0x00061dce) vid4_indicators_pane_t1_ParamLimits

0xdd9e,	// (0x00069787) vid4_progress_pane_g1_ParamLimits

0xddaa,	// (0x00069793) vid4_progress_pane_g2_ParamLimits

0xddb6,	// (0x0006979f) vid4_progress_pane_g3_ParamLimits

0xddc5,	// (0x000697ae) vid4_progress_pane_g4_ParamLimits

0xfa95,	// (0x0006b47e) vid4_progress_pane_g_ParamLimits

0xdde3,	// (0x000697cc) vid4_progress_pane_t1_ParamLimits

0xddf9,	// (0x000697e2) vid4_progress_pane_t2_ParamLimits

0xde0f,	// (0x000697f8) vid4_progress_pane_t3_ParamLimits

0xfaa0,	// (0x0006b489) vid4_progress_pane_t_ParamLimits

0xde24,	// (0x0006980d) wait_bar_pane_cp07_ParamLimits

0x7afc,	// (0x000634e5) main_cam6_set_pane_g2_ParamLimits

0x7afc,	// (0x000634e5) main_cam6_set_pane_g2

0x7b22,	// (0x0006350b) main_cset6_listscroll_pane_ParamLimits

0x7b22,	// (0x0006350b) main_cset6_listscroll_pane

0x7b40,	// (0x00063529) main_cset6_slider_pane_ParamLimits

0x7b40,	// (0x00063529) main_cset6_slider_pane

0x7b56,	// (0x0006353f) main_cset6_text2_pane_ParamLimits

0x7b56,	// (0x0006353f) main_cset6_text2_pane

0xe847,	// (0x0006a230) main_cset6_text_pane

0xe84f,	// (0x0006a238) main_cset_list_pane_copy1_ParamLimits

0xe84f,	// (0x0006a238) main_cset_list_pane_copy1

0xe85f,	// (0x0006a248) scroll_pane_cp028_copy1

0x7b64,	// (0x0006354d) cset_list_set_pane_copy1

0x7b78,	// (0x00063561) aid_position_infowindow_above_copy1

0x7b80,	// (0x00063569) aid_position_infowindow_below_copy1

0x7b88,	// (0x00063571) cset_list_set_pane_g1_copy1

0x7b90,	// (0x00063579) cset_list_set_pane_g3_copy1_ParamLimits

0x7b90,	// (0x00063579) cset_list_set_pane_g3_copy1

0x7b9f,	// (0x00063588) cset_list_set_pane_t1_copy1_ParamLimits

0x7b9f,	// (0x00063588) cset_list_set_pane_t1_copy1

0x0dea,	// (0x0005c7d3) list_highlight_pane_cp021_copy1_ParamLimits

0x0dea,	// (0x0005c7d3) list_highlight_pane_cp021_copy1

0xe868,	// (0x0006a251) cset6_slider_pane_ParamLimits

0xe868,	// (0x0006a251) cset6_slider_pane

0xe894,	// (0x0006a27d) main_cset6_slider_pane_g1_ParamLimits

0xe894,	// (0x0006a27d) main_cset6_slider_pane_g1

0x7bb4,	// (0x0006359d) main_cset6_slider_pane_g2_ParamLimits

0x7bb4,	// (0x0006359d) main_cset6_slider_pane_g2

0xe8bc,	// (0x0006a2a5) main_cset6_slider_pane_g3_ParamLimits

0xe8bc,	// (0x0006a2a5) main_cset6_slider_pane_g3

0x7bdc,	// (0x000635c5) main_cset6_slider_pane_g4_ParamLimits

0x7bdc,	// (0x000635c5) main_cset6_slider_pane_g4

0x7be8,	// (0x000635d1) main_cset6_slider_pane_g5_ParamLimits

0x7be8,	// (0x000635d1) main_cset6_slider_pane_g5

0xe147,	// (0x00069b30) main_cset6_slider_pane_g7_ParamLimits

0xe147,	// (0x00069b30) main_cset6_slider_pane_g7

0xe153,	// (0x00069b3c) main_cset6_slider_pane_g8_ParamLimits

0xe153,	// (0x00069b3c) main_cset6_slider_pane_g8

0x6abd,	// (0x000624a6) main_cset6_slider_pane_g9_ParamLimits

0x6abd,	// (0x000624a6) main_cset6_slider_pane_g9

0x6ac9,	// (0x000624b2) main_cset6_slider_pane_g10_ParamLimits

0x6ac9,	// (0x000624b2) main_cset6_slider_pane_g10

0x6ad5,	// (0x000624be) main_cset6_slider_pane_g11_ParamLimits

0x6ad5,	// (0x000624be) main_cset6_slider_pane_g11

0x6ae1,	// (0x000624ca) main_cset6_slider_pane_g12_ParamLimits

0x6ae1,	// (0x000624ca) main_cset6_slider_pane_g12

0x6aed,	// (0x000624d6) main_cset6_slider_pane_g13_ParamLimits

0x6aed,	// (0x000624d6) main_cset6_slider_pane_g13

0x6af9,	// (0x000624e2) main_cset6_slider_pane_g14_ParamLimits

0x6af9,	// (0x000624e2) main_cset6_slider_pane_g14

0x7bf6,	// (0x000635df) main_cset6_slider_pane_g15_ParamLimits

0x7bf6,	// (0x000635df) main_cset6_slider_pane_g15

0x6b1d,	// (0x00062506) main_cset6_slider_pane_g16_ParamLimits

0x6b1d,	// (0x00062506) main_cset6_slider_pane_g16

0x6b2b,	// (0x00062514) main_cset6_slider_pane_g17_ParamLimits

0x6b2b,	// (0x00062514) main_cset6_slider_pane_g17

0x0011,

0xfb63,	// (0x0006b54c) main_cset6_slider_pane_g_ParamLimits

0xfb63,	// (0x0006b54c) main_cset6_slider_pane_g

0xe8c8,	// (0x0006a2b1) main_cset6_slider_pane_t1_ParamLimits

0xe8c8,	// (0x0006a2b1) main_cset6_slider_pane_t1

0x7c26,	// (0x0006360f) main_cset6_slider_pane_t2_ParamLimits

0x7c26,	// (0x0006360f) main_cset6_slider_pane_t2

0x7c51,	// (0x0006363a) main_cset6_slider_pane_t3_ParamLimits

0x7c51,	// (0x0006363a) main_cset6_slider_pane_t3

0x7c7c,	// (0x00063665) main_cset6_slider_pane_t4_ParamLimits

0x7c7c,	// (0x00063665) main_cset6_slider_pane_t4

0x7ca9,	// (0x00063692) main_cset6_slider_pane_t5_ParamLimits

0x7ca9,	// (0x00063692) main_cset6_slider_pane_t5

0xe909,	// (0x0006a2f2) main_cset6_slider_pane_t7_ParamLimits

0xe909,	// (0x0006a2f2) main_cset6_slider_pane_t7

0x7cd6,	// (0x000636bf) main_cset6_slider_pane_t8_ParamLimits

0x7cd6,	// (0x000636bf) main_cset6_slider_pane_t8

0x7cfa,	// (0x000636e3) main_cset6_slider_pane_t9_ParamLimits

0x7cfa,	// (0x000636e3) main_cset6_slider_pane_t9

0x7d1e,	// (0x00063707) main_cset6_slider_pane_t10_ParamLimits

0x7d1e,	// (0x00063707) main_cset6_slider_pane_t10

0x7d42,	// (0x0006372b) main_cset6_slider_pane_t11_ParamLimits

0x7d42,	// (0x0006372b) main_cset6_slider_pane_t11

0xe93f,	// (0x0006a328) main_cset6_slider_pane_t14_ParamLimits

0xe93f,	// (0x0006a328) main_cset6_slider_pane_t14

0xe978,	// (0x0006a361) main_cset6_slider_pane_t15_ParamLimits

0xe978,	// (0x0006a361) main_cset6_slider_pane_t15

0x000b,

0xfb88,	// (0x0006b571) main_cset6_slider_pane_t_ParamLimits

0xfb88,	// (0x0006b571) main_cset6_slider_pane_t

0xe9b1,	// (0x0006a39a) cset_slider_pane_g1_copy1

0xe9ba,	// (0x0006a3a3) cset_slider_pane_g2_copy1

0xe9c3,	// (0x0006a3ac) cset_slider_pane_g3_copy1

0x0b67,	// (0x0005c550) bg_popup_sub_pane_cp011_copy1

0xe2b0,	// (0x00069c99) main_cset_text_pane_g1_copy1

0xe2b8,	// (0x00069ca1) main_cset_text_pane_t1_copy1

0xe2c6,	// (0x00069caf) main_cset_text_pane_t2_copy1

0xe2d4,	// (0x00069cbd) main_cset_text_pane_t3_copy1

0xe2e2,	// (0x00069ccb) main_cset_text_pane_t4_copy1

0xe2f0,	// (0x00069cd9) main_cset_text_pane_t5_copy1

0xe2fe,	// (0x00069ce7) main_cset_text_pane_t6_copy1

0xe30c,	// (0x00069cf5) main_cset_text_pane_t7_copy1

0x7adb,	// (0x000634c4) main_cset_text2_pane_t1_copy1

0x0b67,	// (0x0005c550) main_ncimui_pane

0x4100,	// (0x0005fae9) popup_query_ncimui_window_ParamLimits

0x4100,	// (0x0005fae9) popup_query_ncimui_window

0x4de4,	// (0x000607cd) field_cale_ev2_pane_g4_ParamLimits

0x4de4,	// (0x000607cd) field_cale_ev2_pane_g4

0x5cf7,	// (0x000616e0) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5cf7,	// (0x000616e0) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8b4,	// (0x0006b29d) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8b4,	// (0x0006b29d) cell_video_dialer_keypad_pane_g

0x5d0f,	// (0x000616f8) cell_video_dialer_keypad_pane_t1

0x0b67,	// (0x0005c550) bg_popup_window_pane_cp012

0xa83a,	// (0x00066223) heading_pane_cp06

0xe9ea,	// (0x0006a3d3) ncim_query_content_pane

0x0b67,	// (0x0005c550) bg_popup_heading_pane_cp01

0xe9f2,	// (0x0006a3db) ncim_heading_pane_t1

0xea00,	// (0x0006a3e9) ncim_indicator_popup_pane

0xea12,	// (0x0006a3fb) ncim_query_button_pane

0xea28,	// (0x0006a411) ncim_query_content_pane_t1

0xea3a,	// (0x0006a423) ncim_query_content_pane_t2

0x0005,

0xfbc7,	// (0x0006b5b0) ncim_query_content_pane_t

0xea88,	// (0x0006a471) ncim_query_list_pane

0xea9a,	// (0x0006a483) ncim_query_popup_pane

0xea00,	// (0x0006a3e9) ncim_indicator_popup_pane_ParamLimits

0x7e7c,	// (0x00063865) ncim_query_content_pane_g1_ParamLimits

0x7e7c,	// (0x00063865) ncim_query_content_pane_g1

0xea28,	// (0x0006a411) ncim_query_content_pane_t1_ParamLimits

0xea3a,	// (0x0006a423) ncim_query_content_pane_t2_ParamLimits

0x7e88,	// (0x00063871) ncim_query_content_pane_t3_ParamLimits

0x7e88,	// (0x00063871) ncim_query_content_pane_t3

0x7eb0,	// (0x00063899) ncim_query_content_pane_t4_ParamLimits

0x7eb0,	// (0x00063899) ncim_query_content_pane_t4

0x7ed8,	// (0x000638c1) ncim_query_content_pane_t5_ParamLimits

0x7ed8,	// (0x000638c1) ncim_query_content_pane_t5

0xea60,	// (0x0006a449) ncim_query_content_pane_t6_ParamLimits

0xea60,	// (0x0006a449) ncim_query_content_pane_t6

0xfbc7,	// (0x0006b5b0) ncim_query_content_pane_t_ParamLimits

0xea88,	// (0x0006a471) ncim_query_list_pane_ParamLimits

0xea9a,	// (0x0006a483) ncim_query_popup_pane_ParamLimits

0xeaae,	// (0x0006a497) wait_bar_pane_cp04

0x0b67,	// (0x0005c550) input_focus_pane_cp011

0xeab6,	// (0x0006a49f) ncim_query_popup_pane_t1

0xeac4,	// (0x0006a4ad) ncim_list_query_list_pane_ParamLimits

0xeac4,	// (0x0006a4ad) ncim_list_query_list_pane

0x0b67,	// (0x0005c550) bg_button_pane_cp027

0xead7,	// (0x0006a4c0) ncim_query_button_pane_g1

0x0b67,	// (0x0005c550) list_highlight_pane_cp012

0xeae1,	// (0x0006a4ca) ncim_list_query_list_pane_g1

0xeae9,	// (0x0006a4d2) ncim_list_query_list_pane_t1

0xdcbd,	// (0x000696a6) cam4_indicators_pane_g3_ParamLimits

0xdcbd,	// (0x000696a6) cam4_indicators_pane_g3

0x63d9,	// (0x00061dc2) vid4_indicators_pane_g5_ParamLimits

0x63d9,	// (0x00061dc2) vid4_indicators_pane_g5

0xddd4,	// (0x000697bd) vid4_progress_pane_g5_ParamLimits

0xddd4,	// (0x000697bd) vid4_progress_pane_g5

0x7d95,	// (0x0006377e) main_ncimui_pane_g1

0x7deb,	// (0x000637d4) ncimui_group_query_pane_ParamLimits

0x7deb,	// (0x000637d4) ncimui_group_query_pane

0x7e27,	// (0x00063810) ncimui_list_pane_ParamLimits

0x7e27,	// (0x00063810) ncimui_list_pane

0x7e48,	// (0x00063831) ncimui_text_pane_ParamLimits

0x7e48,	// (0x00063831) ncimui_text_pane

0x7f00,	// (0x000638e9) ncimui_text_pane_t1_ParamLimits

0x7f00,	// (0x000638e9) ncimui_text_pane_t1

0xeaf7,	// (0x0006a4e0) ncimui_list_single_graphic_pane_ParamLimits

0xeaf7,	// (0x0006a4e0) ncimui_list_single_graphic_pane

0x7f1e,	// (0x00063907) ncimui_query_pane_ParamLimits

0x7f1e,	// (0x00063907) ncimui_query_pane

0x0b67,	// (0x0005c550) list_highlight_pane_cp013

0xeb07,	// (0x0006a4f0) ncim_list_query_list_pane_t1_copy1

0xeae1,	// (0x0006a4ca) ncim_list_single_graphic_pane_g1

0xeb15,	// (0x0006a4fe) ncim_query_button_pane_cp01

0xeb21,	// (0x0006a50a) ncim_query_entry_pane_ParamLimits

0xeb21,	// (0x0006a50a) ncim_query_entry_pane

0xeb34,	// (0x0006a51d) ncimui_query_pane_g1

0xeb40,	// (0x0006a529) ncimui_query_pane_t1_ParamLimits

0xeb40,	// (0x0006a529) ncimui_query_pane_t1

0x0dea,	// (0x0005c7d3) input_focus_pane_cp012

0xeb59,	// (0x0006a542) ncim_query_entry_pane_t1

0x9eb9,	// (0x000658a2) main_im_pane_ParamLimits

0x0dea,	// (0x0005c7d3) main_mobtv_pane_ParamLimits

0x0dea,	// (0x0005c7d3) main_mobtv_pane

0x7c0e,	// (0x000635f7) main_cset6_slider_pane_g18_ParamLimits

0x7c0e,	// (0x000635f7) main_cset6_slider_pane_g18

0x7c1a,	// (0x00063603) main_cset6_slider_pane_g19_ParamLimits

0x7c1a,	// (0x00063603) main_cset6_slider_pane_g19

0x7f31,	// (0x0006391a) bg_main_mobtv_pane_ParamLimits

0x7f31,	// (0x0006391a) bg_main_mobtv_pane

0x7f3f,	// (0x00063928) main_mobtv_info_pane

0x7f4a,	// (0x00063933) main_mobtv_loading_pane_ParamLimits

0x7f4a,	// (0x00063933) main_mobtv_loading_pane

0xeb6b,	// (0x0006a554) main_mobtv_pg_channel_list_pane

0xeb75,	// (0x0006a55e) main_mobtv_pg_hdr_pane

0x7f57,	// (0x00063940) main_mobtv_programe_curr_pane_ParamLimits

0x7f57,	// (0x00063940) main_mobtv_programe_curr_pane

0x7f64,	// (0x0006394d) main_mobtv_programe_next_pane_ParamLimits

0x7f64,	// (0x0006394d) main_mobtv_programe_next_pane

0xeb7e,	// (0x0006a567) popup_mobtv_noti_window

0xc42a,	// (0x00067e13) main_tv_pg_hdr_pane_g1

0xeb88,	// (0x0006a571) main_tv_pg_hdr_pane_g2

0xeb90,	// (0x0006a579) main_tv_pg_hdr_pane_g3

0xeb98,	// (0x0006a581) main_tv_pg_hdr_pane_g4

0xeba0,	// (0x0006a589) main_tv_pg_hdr_pane_g5

0xebaa,	// (0x0006a593) main_tv_pg_hdr_pane_g6

0xebb4,	// (0x0006a59d) main_tv_pg_hdr_pane_g7

0xebbe,	// (0x0006a5a7) main_tv_pg_hdr_pane_g8

0xebc8,	// (0x0006a5b1) main_tv_pg_hdr_pane_g9

0xebd2,	// (0x0006a5bb) main_tv_pg_hdr_pane_g10

0xebdc,	// (0x0006a5c5) main_tv_pg_hdr_pane_g11

0x000a,

0xfbd4,	// (0x0006b5bd) main_tv_pg_hdr_pane_g

0xebe6,	// (0x0006a5cf) main_tv_pg_hdr_pane_t1

0xebf4,	// (0x0006a5dd) main_tv_pg_hdr_pane_t2

0xec02,	// (0x0006a5eb) main_tv_pg_hdr_pane_t3

0xec12,	// (0x0006a5fb) main_tv_pg_hdr_pane_t4

0xec22,	// (0x0006a60b) main_tv_pg_hdr_pane_t5

0x0004,

0xfbeb,	// (0x0006b5d4) main_tv_pg_hdr_pane_t

0xec32,	// (0x0006a61b) single_mobtv_pg_channel_pane_ParamLimits

0xec32,	// (0x0006a61b) single_mobtv_pg_channel_pane

0xec44,	// (0x0006a62d) single_mobtv_pg_channel_table_pane

0xec4d,	// (0x0006a636) single_mobtv_pg_channel_thumb_pane

0xec56,	// (0x0006a63f) single_tv_pg_channel_pane_g1

0xec5f,	// (0x0006a648) single_tv_pg_channel_pane_g2

0x0001,

0xfbf6,	// (0x0006b5df) single_tv_pg_channel_pane_g

0xc65a,	// (0x00068043) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc65a,	// (0x00068043) bg_single_mobtv_pg_channel_thumb_pane

0xec68,	// (0x0006a651) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xec68,	// (0x0006a651) single_mobtv_pg_channel_thumb_pane_g1

0xec76,	// (0x0006a65f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xec76,	// (0x0006a65f) single_mobtv_pg_channel_thumb_pane_g2

0xec82,	// (0x0006a66b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xec82,	// (0x0006a66b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfbfb,	// (0x0006b5e4) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfbfb,	// (0x0006b5e4) single_mobtv_pg_channel_thumb_pane_g

0xec8e,	// (0x0006a677) single_mobtv_pg_channel_thumb_pane_t1

0xec9c,	// (0x0006a685) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc02,	// (0x0006b5eb) single_mobtv_pg_channel_thumb_pane_t

0xc42a,	// (0x00067e13) bg_single_mobtv_pg_channel_table_pane_g1

0xc42a,	// (0x00067e13) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf700,	// (0x0006b0e9) bg_single_mobtv_pg_channel_table_pane_g

0xecaa,	// (0x0006a693) single_mobtv_pg_channel_table_pane_t1

0xecb8,	// (0x0006a6a1) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc07,	// (0x0006b5f0) single_mobtv_pg_channel_table_pane_t

0x7f79,	// (0x00063962) main_mobtv_info_pane_g1_ParamLimits

0x7f79,	// (0x00063962) main_mobtv_info_pane_g1

0x7f97,	// (0x00063980) main_mobtv_info_pane_t1_ParamLimits

0x7f97,	// (0x00063980) main_mobtv_info_pane_t1

0x800f,	// (0x000639f8) main_mobtv_info_pane_t2_ParamLimits

0x800f,	// (0x000639f8) main_mobtv_info_pane_t2

0x0002,

0xfc11,	// (0x0006b5fa) main_mobtv_info_pane_t_ParamLimits

0xfc11,	// (0x0006b5fa) main_mobtv_info_pane_t

0x80a0,	// (0x00063a89) wait_bar_pane_cp05

0x80b2,	// (0x00063a9b) main_mobtv_loading_pane_g1_ParamLimits

0x80b2,	// (0x00063a9b) main_mobtv_loading_pane_g1

0x80c3,	// (0x00063aac) main_mobtv_loading_pane_g2_ParamLimits

0x80c3,	// (0x00063aac) main_mobtv_loading_pane_g2

0x80cf,	// (0x00063ab8) main_mobtv_loading_pane_g3_ParamLimits

0x80cf,	// (0x00063ab8) main_mobtv_loading_pane_g3

0x0002,

0xfc18,	// (0x0006b601) main_mobtv_loading_pane_g_ParamLimits

0xfc18,	// (0x0006b601) main_mobtv_loading_pane_g

0xecc6,	// (0x0006a6af) main_mobtv_loading_pane_t1_ParamLimits

0xecc6,	// (0x0006a6af) main_mobtv_loading_pane_t1

0xecde,	// (0x0006a6c7) main_mobtv_loading_pane_t2_ParamLimits

0xecde,	// (0x0006a6c7) main_mobtv_loading_pane_t2

0x0001,

0x0779,	// (0x0005c162) main_mobtv_loading_pane_t_ParamLimits

0x0779,	// (0x0005c162) main_mobtv_loading_pane_t

0x80e2,	// (0x00063acb) wait_bar_pane_cp06_ParamLimits

0x80e2,	// (0x00063acb) wait_bar_pane_cp06

0xed02,	// (0x0006a6eb) main_mobtv_programe_curr_pane_t1

0xed10,	// (0x0006a6f9) main_mobtv_programe_curr_pane_t2

0x0001,

0x077e,	// (0x0005c167) main_mobtv_programe_curr_pane_t

0xed1e,	// (0x0006a707) main_mobtv_programe_next_pane_t1

0xed2c,	// (0x0006a715) main_mobtv_programe_next_pane_t2

0xed3a,	// (0x0006a723) main_mobtv_programe_next_pane_t3

0x0002,

0x0783,	// (0x0005c16c) main_mobtv_programe_next_pane_t

0x0b67,	// (0x0005c550) bg_popup_mobtv_noti_window_pane

0xed48,	// (0x0006a731) popup_mobtv_noti_window_g1

0xed50,	// (0x0006a739) popup_mobtv_noti_window_t1

0xed5e,	// (0x0006a747) popup_mobtv_noti_window_t2

0x0001,

0x078a,	// (0x0005c173) popup_mobtv_noti_window_t

0xc42a,	// (0x00067e13) bg_popup_mobtv_noti_window_pane_g1

0x0b67,	// (0x0005c550) sc_clock_pane

0x0b67,	// (0x0005c550) main_fs_bigclock_pane

0x782f,	// (0x00063218) blid2_tripm_pane_t4_ParamLimits

0x782f,	// (0x00063218) blid2_tripm_pane_t4

0x80f1,	// (0x00063ada) sc_clock_pane_g1_ParamLimits

0x80f1,	// (0x00063ada) sc_clock_pane_g1

0x8103,	// (0x00063aec) sc_clock_pane_t1_ParamLimits

0x8103,	// (0x00063aec) sc_clock_pane_t1

0x8127,	// (0x00063b10) sc_clock_pane_t2_ParamLimits

0x8127,	// (0x00063b10) sc_clock_pane_t2

0x813f,	// (0x00063b28) sc_clock_pane_t3_ParamLimits

0x813f,	// (0x00063b28) sc_clock_pane_t3

0x0004,

0xfc1f,	// (0x0006b608) sc_clock_pane_t_ParamLimits

0xfc1f,	// (0x0006b608) sc_clock_pane_t

0x8f4b,	// (0x00064934) main_fs_bigclock_indicator_pane_ParamLimits

0x8f4b,	// (0x00064934) main_fs_bigclock_indicator_pane

0xc62a,	// (0x00068013) main_fs_bigclock_pane_g1_ParamLimits

0xc62a,	// (0x00068013) main_fs_bigclock_pane_g1

0x8f57,	// (0x00064940) main_fs_bigclock_pane_t1_ParamLimits

0x8f57,	// (0x00064940) main_fs_bigclock_pane_t1

0x8f69,	// (0x00064952) main_fs_bigclock_pane_t2_ParamLimits

0x8f69,	// (0x00064952) main_fs_bigclock_pane_t2

0x8f7d,	// (0x00064966) main_fs_bigclock_pane_t3_ParamLimits

0x8f7d,	// (0x00064966) main_fs_bigclock_pane_t3

0x0002,

0xfdff,	// (0x0006b7e8) main_fs_bigclock_pane_t_ParamLimits

0xfdff,	// (0x0006b7e8) main_fs_bigclock_pane_t

0xd5fb,	// (0x00068fe4) main_fs_bigclock_indicator_pane_g1

0xea1a,	// (0x0006a403) ncim_query_content_pane_g2_ParamLimits

0xea1a,	// (0x0006a403) ncim_query_content_pane_g2

0x0001,

0xfbc2,	// (0x0006b5ab) ncim_query_content_pane_g_ParamLimits

0xfbc2,	// (0x0006b5ab) ncim_query_content_pane_g

0x8154,	// (0x00063b3d) sc_clock_pane_t4_ParamLimits

0x8154,	// (0x00063b3d) sc_clock_pane_t4

0x0dea,	// (0x0005c7d3) main_radioblah_pane

0xdf5f,	// (0x00069948) cell_call4_button_pane_t1_copy1_ParamLimits

0xdf5f,	// (0x00069948) cell_call4_button_pane_t1_copy1

0x7d9d,	// (0x00063786) main_ncimui_pane_t1_ParamLimits

0x7d9d,	// (0x00063786) main_ncimui_pane_t1

0x7db7,	// (0x000637a0) main_ncimui_pane_t2_ParamLimits

0x7db7,	// (0x000637a0) main_ncimui_pane_t2

0x0002,

0xfbbb,	// (0x0006b5a4) main_ncimui_pane_t_ParamLimits

0xfbbb,	// (0x0006b5a4) main_ncimui_pane_t

0xee96,	// (0x0006a87f) main_radioblah_anim_pane_ParamLimits

0xee96,	// (0x0006a87f) main_radioblah_anim_pane

0xeea7,	// (0x0006a890) main_radioblah_info_pane_ParamLimits

0xeea7,	// (0x0006a890) main_radioblah_info_pane

0xeebb,	// (0x0006a8a4) main_radioblah_pane_t1_ParamLimits

0xeebb,	// (0x0006a8a4) main_radioblah_pane_t1

0xeed7,	// (0x0006a8c0) main_radioblah_pane_t2_ParamLimits

0xeed7,	// (0x0006a8c0) main_radioblah_pane_t2

0x0003,

0x07b0,	// (0x0005c199) main_radioblah_pane_t_ParamLimits

0x07b0,	// (0x0005c199) main_radioblah_pane_t

0x8202,	// (0x00063beb) main_radioblah_rocker_ctrl_pane_ParamLimits

0x8202,	// (0x00063beb) main_radioblah_rocker_ctrl_pane

0xef1f,	// (0x0006a908) main_radioblah_info_pane_t1_ParamLimits

0xef1f,	// (0x0006a908) main_radioblah_info_pane_t1

0x825a,	// (0x00063c43) main_radioblah_info_pane_t2_ParamLimits

0x825a,	// (0x00063c43) main_radioblah_info_pane_t2

0x0003,

0xfc2a,	// (0x0006b613) main_radioblah_info_pane_t_ParamLimits

0xfc2a,	// (0x0006b613) main_radioblah_info_pane_t

0xc42a,	// (0x00067e13) main_radioblah_rocker_ctrl_pane_g1

0x830a,	// (0x00063cf3) main_radioblah_rocker_ctrl_pane_g2

0x8312,	// (0x00063cfb) main_radioblah_rocker_ctrl_pane_g3

0x831a,	// (0x00063d03) main_radioblah_rocker_ctrl_pane_g4

0x8322,	// (0x00063d0b) main_radioblah_rocker_ctrl_pane_g5

0x832a,	// (0x00063d13) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc33,	// (0x0006b61c) main_radioblah_rocker_ctrl_pane_g

0x7adb,	// (0x000634c4) main_cset_text2_pane_t1_copy1_ParamLimits

0xdc80,	// (0x00069669) cam4_image_uncrop_qvga_pane

0xdce7,	// (0x000696d0) vid4_image_uncrop_qcif_pane

0xde36,	// (0x0006981f) cam6_image_uncrop_qvga_pane_ParamLimits

0xde36,	// (0x0006981f) cam6_image_uncrop_qvga_pane

0xe726,	// (0x0006a10f) vid6_image_uncrop_qcif_pane_ParamLimits

0xe726,	// (0x0006a10f) vid6_image_uncrop_qcif_pane

0x0b67,	// (0x0005c550) bg_popup_preview_window_pane_cp03

0xe9cc,	// (0x0006a3b5) list_cset_text2_pane

0xe9d4,	// (0x0006a3bd) main_cset6_text2_pane_g1

0xe9dc,	// (0x0006a3c5) main_cset6_text2_pane_t1

0xef59,	// (0x0006a942) list_cset_text2_pane_t1_ParamLimits

0xef59,	// (0x0006a942) list_cset_text2_pane_t1

0x0dea,	// (0x0005c7d3) main_radioblah_pane_ParamLimits

0x808c,	// (0x00063a75) main_mobtv_info_pane_t3_ParamLimits

0x808c,	// (0x00063a75) main_mobtv_info_pane_t3

0x81f0,	// (0x00063bd9) main_radioblah_pane_g1

0x822a,	// (0x00063c13) main_radioblah_info_pane_g1

0x82af,	// (0x00063c98) main_radioblah_info_pane_t3_ParamLimits

0x82af,	// (0x00063c98) main_radioblah_info_pane_t3

0x2869,	// (0x0005e252) highlight_cell_cale_month_pane_ParamLimits

0x2869,	// (0x0005e252) highlight_cell_cale_month_pane

0x0b67,	// (0x0005c550) main_phob_fisheye_pane

0xc73c,	// (0x00068125) scroll_pane_cp0031_ParamLimits

0xc73c,	// (0x00068125) scroll_pane_cp0031

0xe838,	// (0x0006a221) wait_bar_pane_cp08_ParamLimits

0x7b64,	// (0x0006354d) cset_list_set_pane_copy1_ParamLimits

0xef73,	// (0x0006a95c) highlight_cell_cale_month_pane_g1

0x8332,	// (0x00063d1b) highlight_cell_cale_month_pane_t1

0xe4e4,	// (0x00069ecd) list_gen_pane_cp01

0xe132,	// (0x00069b1b) scroll_pane_01

0x8340,	// (0x00063d29) list_single_double_fisheye_pane

0x8349,	// (0x00063d32) list_double_fisheye_pane_g1_ParamLimits

0x8349,	// (0x00063d32) list_double_fisheye_pane_g1

0x8355,	// (0x00063d3e) list_double_fisheye_pane_g2_ParamLimits

0x8355,	// (0x00063d3e) list_double_fisheye_pane_g2

0x8369,	// (0x00063d52) list_double_fisheye_pane_g3_ParamLimits

0x8369,	// (0x00063d52) list_double_fisheye_pane_g3

0x0004,

0xfc40,	// (0x0006b629) list_double_fisheye_pane_g_ParamLimits

0xfc40,	// (0x0006b629) list_double_fisheye_pane_g

0x8392,	// (0x00063d7b) list_double_fisheye_pane_t1_ParamLimits

0x8392,	// (0x00063d7b) list_double_fisheye_pane_t1

0x83ad,	// (0x00063d96) list_double_fisheye_pane_t2_ParamLimits

0x83ad,	// (0x00063d96) list_double_fisheye_pane_t2

0x0001,

0xfc4b,	// (0x0006b634) list_double_fisheye_pane_t_ParamLimits

0xfc4b,	// (0x0006b634) list_double_fisheye_pane_t

0x0b67,	// (0x0005c550) main_call5_pane

0x817f,	// (0x00063b68) sc_swipe_pane_ParamLimits

0x817f,	// (0x00063b68) sc_swipe_pane

0x83e2,	// (0x00063dcb) call5_image_pane_ParamLimits

0x83e2,	// (0x00063dcb) call5_image_pane

0x83ff,	// (0x00063de8) call5_swipe_1_pane_ParamLimits

0x83ff,	// (0x00063de8) call5_swipe_1_pane

0x8412,	// (0x00063dfb) call5_swipe_2_pane_ParamLimits

0x8412,	// (0x00063dfb) call5_swipe_2_pane

0x843f,	// (0x00063e28) popup_call5_audio_first_window_ParamLimits

0x843f,	// (0x00063e28) popup_call5_audio_first_window

0xc65a,	// (0x00068043) call5_swipe_1_pane_g1_ParamLimits

0xc65a,	// (0x00068043) call5_swipe_1_pane_g1

0xef7b,	// (0x0006a964) call5_swipe_1_pane_g2_ParamLimits

0xef7b,	// (0x0006a964) call5_swipe_1_pane_g2

0x0001,

0xfc50,	// (0x0006b639) call5_swipe_1_pane_g_ParamLimits

0xfc50,	// (0x0006b639) call5_swipe_1_pane_g

0xef87,	// (0x0006a970) call5_swipe_1_pane_t1_ParamLimits

0xef87,	// (0x0006a970) call5_swipe_1_pane_t1

0xc65a,	// (0x00068043) call5_swipe_2_pane_g1_ParamLimits

0xc65a,	// (0x00068043) call5_swipe_2_pane_g1

0xef9c,	// (0x0006a985) call5_swipe_2_pane_g2_ParamLimits

0xef9c,	// (0x0006a985) call5_swipe_2_pane_g2

0x0001,

0xfc55,	// (0x0006b63e) call5_swipe_2_pane_g_ParamLimits

0xfc55,	// (0x0006b63e) call5_swipe_2_pane_g

0xefa8,	// (0x0006a991) call5_swipe_2_pane_t1_ParamLimits

0xefa8,	// (0x0006a991) call5_swipe_2_pane_t1

0xefbd,	// (0x0006a9a6) sc_swipe_pane_g1_ParamLimits

0xefbd,	// (0x0006a9a6) sc_swipe_pane_g1

0xefca,	// (0x0006a9b3) sc_swipe_pane_g2_ParamLimits

0xefca,	// (0x0006a9b3) sc_swipe_pane_g2

0x0001,

0xfc5a,	// (0x0006b643) sc_swipe_pane_g_ParamLimits

0xfc5a,	// (0x0006b643) sc_swipe_pane_g

0xefd6,	// (0x0006a9bf) sc_swipe_pane_t1_ParamLimits

0xefd6,	// (0x0006a9bf) sc_swipe_pane_t1

0x0b67,	// (0x0005c550) main_cmail_launcher_pane

0x8454,	// (0x00063e3d) aid_size_cell_cmail_l_ParamLimits

0x8454,	// (0x00063e3d) aid_size_cell_cmail_l

0x846e,	// (0x00063e57) grid_cmail_l_pane_ParamLimits

0x846e,	// (0x00063e57) grid_cmail_l_pane

0x848a,	// (0x00063e73) cell_cmail_l_pane_ParamLimits

0x848a,	// (0x00063e73) cell_cmail_l_pane

0x84b2,	// (0x00063e9b) cell_cmail_l_pane_g1_ParamLimits

0x84b2,	// (0x00063e9b) cell_cmail_l_pane_g1

0x84be,	// (0x00063ea7) cell_cmail_l_pane_t1_ParamLimits

0x84be,	// (0x00063ea7) cell_cmail_l_pane_t1

0xefeb,	// (0x0006a9d4) cell_cmail_l_pane_t2_ParamLimits

0xefeb,	// (0x0006a9d4) cell_cmail_l_pane_t2

0x0001,

0xfc5f,	// (0x0006b648) cell_cmail_l_pane_t_ParamLimits

0xfc5f,	// (0x0006b648) cell_cmail_l_pane_t

0x0dea,	// (0x0005c7d3) grid_highlight_pane_cp018_ParamLimits

0x0dea,	// (0x0005c7d3) grid_highlight_pane_cp018

0x0c9c,	// (0x0005c685) main2_pane_ParamLimits

0x0c9c,	// (0x0005c685) main2_pane

0x9f92,	// (0x0006597b) popup_sp_fs_action_menu_bg_pane_g1

0x9f9a,	// (0x00065983) popup_sp_fs_action_menu_bg_pane_g2

0x9fa2,	// (0x0006598b) popup_sp_fs_action_menu_bg_pane_g3

0x9faa,	// (0x00065993) popup_sp_fs_action_menu_bg_pane_g4

0x9fb2,	// (0x0006599b) popup_sp_fs_action_menu_bg_pane_g5

0x9fba,	// (0x000659a3) popup_sp_fs_action_menu_bg_pane_g6

0x9fc2,	// (0x000659ab) popup_sp_fs_action_menu_bg_pane_g7

0x9fca,	// (0x000659b3) popup_sp_fs_action_menu_bg_pane_g8

0x9fd2,	// (0x000659bb) popup_sp_fs_action_menu_bg_pane_g9

0x9fda,	// (0x000659c3) popup_sp_fs_action_menu_bg_pane_g10

0x9fda,	// (0x000659c3) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf1ac,	// (0x0006ab95) popup_sp_fs_action_menu_bg_pane_g

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t3_g3_g1

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t3_g3_g2

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t3_g3_g3

0x0002,

0xf25c,	// (0x0006ac45) list_medium_line_x2_t3_g3_g_ParamLimits

0xf25c,	// (0x0006ac45) list_medium_line_x2_t3_g3_g

0x1b12,	// (0x0005d4fb) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1b12,	// (0x0005d4fb) list_medium_line_x2_t3_g3_t1

0x1b27,	// (0x0005d510) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1b27,	// (0x0005d510) list_medium_line_x2_t3_g3_t2

0x1b3b,	// (0x0005d524) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_x2_t3_g3_t3

0x0002,

0xf263,	// (0x0006ac4c) list_medium_line_x2_t3_g3_t_ParamLimits

0xf263,	// (0x0006ac4c) list_medium_line_x2_t3_g3_t

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t3_g2_g1

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t3_g2_g2

0x0001,

0xf26a,	// (0x0006ac53) list_medium_line_x2_t3_g2_g_ParamLimits

0xf26a,	// (0x0006ac53) list_medium_line_x2_t3_g2_g

0x1b50,	// (0x0005d539) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1b50,	// (0x0005d539) list_medium_line_x2_t3_g2_t1

0x1b66,	// (0x0005d54f) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1b66,	// (0x0005d54f) list_medium_line_x2_t3_g2_t2

0x1b78,	// (0x0005d561) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1b78,	// (0x0005d561) list_medium_line_x2_t3_g2_t3

0x0002,

0xf26f,	// (0x0006ac58) list_medium_line_x2_t3_g2_t_ParamLimits

0xf26f,	// (0x0006ac58) list_medium_line_x2_t3_g2_t

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t4_g4_g1

0x1b96,	// (0x0005d57f) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1b96,	// (0x0005d57f) list_medium_line_x2_t4_g4_g2

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t4_g4_g3

0x1ba2,	// (0x0005d58b) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ba2,	// (0x0005d58b) list_medium_line_x2_t4_g4_g4

0x0003,

0xf276,	// (0x0006ac5f) list_medium_line_x2_t4_g4_g_ParamLimits

0xf276,	// (0x0006ac5f) list_medium_line_x2_t4_g4_g

0x1bae,	// (0x0005d597) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1bae,	// (0x0005d597) list_medium_line_x2_t4_g4_t1

0x1bc8,	// (0x0005d5b1) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1bc8,	// (0x0005d5b1) list_medium_line_x2_t4_g4_t2

0x1bde,	// (0x0005d5c7) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1bde,	// (0x0005d5c7) list_medium_line_x2_t4_g4_t3

0x1bf3,	// (0x0005d5dc) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1bf3,	// (0x0005d5dc) list_medium_line_x2_t4_g4_t4

0x0003,

0xf27f,	// (0x0006ac68) list_medium_line_x2_t4_g4_t_ParamLimits

0xf27f,	// (0x0006ac68) list_medium_line_x2_t4_g4_t

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t2_g4_g1

0x1b96,	// (0x0005d57f) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1b96,	// (0x0005d57f) list_medium_line_x2_t2_g4_g2

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t2_g4_g3

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2e6,	// (0x0006accf) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2e6,	// (0x0006accf) list_medium_line_x2_t2_g4_g

0x2887,	// (0x0005e270) list_medium_line_x2_t2_g4_t1_ParamLimits

0x2887,	// (0x0005e270) list_medium_line_x2_t2_g4_t1

0x1b3b,	// (0x0005d524) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2ef,	// (0x0006acd8) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2ef,	// (0x0006acd8) list_medium_line_x2_t2_g4_t

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t2_g3_g1

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t2_g3_g2

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t2_g3_g3

0x0002,

0xf25c,	// (0x0006ac45) list_medium_line_x2_t2_g3_g_ParamLimits

0xf25c,	// (0x0006ac45) list_medium_line_x2_t2_g3_g

0x289c,	// (0x0005e285) list_medium_line_x2_t2_g3_t1_ParamLimits

0x289c,	// (0x0005e285) list_medium_line_x2_t2_g3_t1

0x1b3b,	// (0x0005d524) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2f4,	// (0x0006acdd) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2f4,	// (0x0006acdd) list_medium_line_x2_t2_g3_t

0x2a6c,	// (0x0005e455) main_sp_fs_list_pane_ParamLimits

0x2a6c,	// (0x0005e455) main_sp_fs_list_pane

0x2a78,	// (0x0005e461) sp_fs_scroll_pane_ParamLimits

0x2a78,	// (0x0005e461) sp_fs_scroll_pane

0x2a84,	// (0x0005e46d) list_medium_line_x2_t3_t1

0x2a94,	// (0x0005e47d) list_medium_line_x2_t3_t2

0x2aa2,	// (0x0005e48b) list_medium_line_x2_t3_t3

0x0002,

0xf33f,	// (0x0006ad28) list_medium_line_x2_t3_t

0x2ab0,	// (0x0005e499) list_medium_line_x3_t4_t1

0x2ac0,	// (0x0005e4a9) list_medium_line_x3_t4_t2

0x2ace,	// (0x0005e4b7) list_medium_line_x3_t4_t3

0x2aa2,	// (0x0005e48b) list_medium_line_x3_t4_t4

0x0003,

0xf346,	// (0x0006ad2f) list_medium_line_x3_t4_t

0x2adc,	// (0x0005e4c5) list_medium_line_x4_t5_t1

0x2aec,	// (0x0005e4d5) list_medium_line_x4_t5_t2

0x2ace,	// (0x0005e4b7) list_medium_line_x4_t5_t3

0x2afa,	// (0x0005e4e3) list_medium_line_x4_t5_t4

0x2aa2,	// (0x0005e48b) list_medium_line_x4_t5_t5

0x0004,

0xf34f,	// (0x0006ad38) list_medium_line_x4_t5_t

0x1aee,	// (0x0005d4d7) list_medium_line_t4_g4_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_t4_g4_g1

0x1ba2,	// (0x0005d58b) list_medium_line_t4_g4_g2_ParamLimits

0x1ba2,	// (0x0005d58b) list_medium_line_t4_g4_g2

0x2b08,	// (0x0005e4f1) list_medium_line_t4_g4_g3_ParamLimits

0x2b08,	// (0x0005e4f1) list_medium_line_t4_g4_g3

0x1b06,	// (0x0005d4ef) list_medium_line_t4_g4_g4_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_t4_g4_g4

0x0003,

0xf35a,	// (0x0006ad43) list_medium_line_t4_g4_g_ParamLimits

0xf35a,	// (0x0006ad43) list_medium_line_t4_g4_g

0x2b14,	// (0x0005e4fd) list_medium_line_t4_g4_t1_ParamLimits

0x2b14,	// (0x0005e4fd) list_medium_line_t4_g4_t1

0x2b29,	// (0x0005e512) list_medium_line_t4_g4_t2_ParamLimits

0x2b29,	// (0x0005e512) list_medium_line_t4_g4_t2

0x2b3f,	// (0x0005e528) list_medium_line_t4_g4_t3_ParamLimits

0x2b3f,	// (0x0005e528) list_medium_line_t4_g4_t3

0x1b3b,	// (0x0005d524) list_medium_line_t4_g4_t4_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_t4_g4_t4

0x0003,

0xf363,	// (0x0006ad4c) list_medium_line_t4_g4_t_ParamLimits

0xf363,	// (0x0006ad4c) list_medium_line_t4_g4_t

0x2c1b,	// (0x0005e604) chi_dic_find_pane_g1

0x3e86,	// (0x0005f86f) main_tport_pane

0x6e07,	// (0x000627f0) list_medium_line_plain_t1

0x6ebb,	// (0x000628a4) list_medium_line_t2_g2_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_t2_g2_g1

0x6ec7,	// (0x000628b0) list_medium_line_t2_g2_g2_ParamLimits

0x6ec7,	// (0x000628b0) list_medium_line_t2_g2_g2

0x0001,

0xfa1f,	// (0x0006b408) list_medium_line_t2_g2_g_ParamLimits

0xfa1f,	// (0x0006b408) list_medium_line_t2_g2_g

0x6ed3,	// (0x000628bc) list_medium_line_t2_g2_t1_ParamLimits

0x6ed3,	// (0x000628bc) list_medium_line_t2_g2_t1

0x6eea,	// (0x000628d3) list_medium_line_t2_g2_t2_ParamLimits

0x6eea,	// (0x000628d3) list_medium_line_t2_g2_t2

0x0001,

0xfa24,	// (0x0006b40d) list_medium_line_t2_g2_t_ParamLimits

0xfa24,	// (0x0006b40d) list_medium_line_t2_g2_t

0x75b3,	// (0x00062f9c) aid_sp_fs_list_icon_a_sm

0x75bb,	// (0x00062fa4) aid_sp_fs_list_icon_d

0x75c3,	// (0x00062fac) aid_sp_fs_text_primary

0x75cc,	// (0x00062fb5) aid_sp_fs_text_secondary

0x75d5,	// (0x00062fbe) list_medium_line

0x75d5,	// (0x00062fbe) list_medium_line_g2

0x75d5,	// (0x00062fbe) list_medium_line_g3

0x75d5,	// (0x00062fbe) list_medium_line_plain

0x75d5,	// (0x00062fbe) list_medium_line_plain_t2

0x75d5,	// (0x00062fbe) list_medium_line_plain_t3

0x75d5,	// (0x00062fbe) list_medium_line_right_icon

0x75d5,	// (0x00062fbe) list_medium_line_right_iconx2

0x75d5,	// (0x00062fbe) list_medium_line_t2

0x75d5,	// (0x00062fbe) list_medium_line_t2_g2

0x75d5,	// (0x00062fbe) list_medium_line_t2_g3

0x75d5,	// (0x00062fbe) list_medium_line_t2_right_icon

0x75d5,	// (0x00062fbe) list_medium_line_t2_right_iconx2

0x75d5,	// (0x00062fbe) list_medium_line_t3

0x75d5,	// (0x00062fbe) list_medium_line_t3_g2

0x75d5,	// (0x00062fbe) list_medium_line_t3_g3

0x75d5,	// (0x00062fbe) list_medium_line_t3_right_iconx2

0x75de,	// (0x00062fc7) list_medium_line_t4_g4

0x75e7,	// (0x00062fd0) list_medium_line_x2

0x75e7,	// (0x00062fd0) list_medium_line_x2_t2_g2

0x75e7,	// (0x00062fd0) list_medium_line_x2_t2_g3

0x75e7,	// (0x00062fd0) list_medium_line_x2_t2_g4

0x75e7,	// (0x00062fd0) list_medium_line_x2_t3

0x75e7,	// (0x00062fd0) list_medium_line_x2_t3_g2

0x75e7,	// (0x00062fd0) list_medium_line_x2_t3_g3

0x75e7,	// (0x00062fd0) list_medium_line_x2_t3_g4

0x75e7,	// (0x00062fd0) list_medium_line_x2_t4_g2

0x75e7,	// (0x00062fd0) list_medium_line_x2_t4_g4

0x75f0,	// (0x00062fd9) list_medium_line_x3

0x75f0,	// (0x00062fd9) list_medium_line_x3_t4

0x75f0,	// (0x00062fd9) list_medium_line_x3_t4_g4

0x75de,	// (0x00062fc7) list_medium_line_x4_t4

0x75de,	// (0x00062fc7) list_medium_line_x4_t4_g7

0x75de,	// (0x00062fc7) list_medium_line_x4_t5

0x75f9,	// (0x00062fe2) list_single_fs_dyc_pane_ParamLimits

0x75f9,	// (0x00062fe2) list_single_fs_dyc_pane

0x1aee,	// (0x0005d4d7) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x4_t4_g7_g1

0x7d68,	// (0x00063751) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7d68,	// (0x00063751) list_medium_line_x4_t4_g7_g2

0x7d74,	// (0x0006375d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7d74,	// (0x0006375d) list_medium_line_x4_t4_g7_g3

0xcc98,	// (0x00068681) list_medium_line_x4_t4_g7_g4_ParamLimits

0xcc98,	// (0x00068681) list_medium_line_x4_t4_g7_g4

0xcca4,	// (0x0006868d) list_medium_line_x4_t4_g7_g5_ParamLimits

0xcca4,	// (0x0006868d) list_medium_line_x4_t4_g7_g5

0xccb3,	// (0x0006869c) list_medium_line_x4_t4_g7_g6_ParamLimits

0xccb3,	// (0x0006869c) list_medium_line_x4_t4_g7_g6

0xccc2,	// (0x000686ab) list_medium_line_x4_t4_g7_g7_ParamLimits

0xccc2,	// (0x000686ab) list_medium_line_x4_t4_g7_g7

0x0006,

0xfba1,	// (0x0006b58a) list_medium_line_x4_t4_g7_g_ParamLimits

0xfba1,	// (0x0006b58a) list_medium_line_x4_t4_g7_g

0xccce,	// (0x000686b7) list_medium_line_x4_t4_g7_t1_ParamLimits

0xccce,	// (0x000686b7) list_medium_line_x4_t4_g7_t1

0xcce3,	// (0x000686cc) list_medium_line_x4_t4_g7_t2_ParamLimits

0xcce3,	// (0x000686cc) list_medium_line_x4_t4_g7_t2

0xccf8,	// (0x000686e1) list_medium_line_x4_t4_g7_t3_ParamLimits

0xccf8,	// (0x000686e1) list_medium_line_x4_t4_g7_t3

0xcd0d,	// (0x000686f6) list_medium_line_x4_t4_g7_t4_ParamLimits

0xcd0d,	// (0x000686f6) list_medium_line_x4_t4_g7_t4

0xcd1f,	// (0x00068708) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcd1f,	// (0x00068708) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbb0,	// (0x0006b599) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbb0,	// (0x0006b599) list_medium_line_x4_t4_g7_t

0xcd31,	// (0x0006871a) list_single_dyc_row_pane_ParamLimits

0xcd31,	// (0x0006871a) list_single_dyc_row_pane

0x83cf,	// (0x00063db8) call5_gesture_pane_ParamLimits

0x83cf,	// (0x00063db8) call5_gesture_pane

0x8425,	// (0x00063e0e) call5_windows_pane_ParamLimits

0x8425,	// (0x00063e0e) call5_windows_pane

0x84d4,	// (0x00063ebd) call5_swipe_1_pane_cp_ParamLimits

0x84d4,	// (0x00063ebd) call5_swipe_1_pane_cp

0x84e0,	// (0x00063ec9) call5_swipe_2_pane_cp_ParamLimits

0x84e0,	// (0x00063ec9) call5_swipe_2_pane_cp

0xaa88,	// (0x00066471) call5_image_pane_cp

0x84ec,	// (0x00063ed5) popup_call5_audio_first_window_cp_ParamLimits

0x84ec,	// (0x00063ed5) popup_call5_audio_first_window_cp

0xefbd,	// (0x0006a9a6) call5_swipe_1_pane_g1_cp_ParamLimits

0xefbd,	// (0x0006a9a6) call5_swipe_1_pane_g1_cp

0xeffd,	// (0x0006a9e6) call5_swipe_1_pane_g2_cp

0xefd6,	// (0x0006a9bf) call5_swipe_1_pane_t1_cp_ParamLimits

0xefd6,	// (0x0006a9bf) call5_swipe_1_pane_t1_cp

0xefbd,	// (0x0006a9a6) call5_swipe_2_pane_g1_cp_ParamLimits

0xefbd,	// (0x0006a9a6) call5_swipe_2_pane_g1_cp

0xf005,	// (0x0006a9ee) call5_swipe_2_pane_g2_cp

0xf00d,	// (0x0006a9f6) call5_swipe_2_pane_t1_cp_ParamLimits

0xf00d,	// (0x0006a9f6) call5_swipe_2_pane_t1_cp

0x0dea,	// (0x0005c7d3) main_sp_fs_email_pane

0xf022,	// (0x0006aa0b) main_sp_fs_listscroll_pane_te

0xcd4e,	// (0x00068737) popup_sp_fs_action_menu_pane_ParamLimits

0xcd4e,	// (0x00068737) popup_sp_fs_action_menu_pane

0xc42a,	// (0x00067e13) bg_sp_fs_ctrlbar_pane_g1

0xf02b,	// (0x0006aa14) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xf034,	// (0x0006aa1d) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xf03d,	// (0x0006aa26) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc42a,	// (0x00067e13) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc64,	// (0x0006b64d) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc209,	// (0x00067bf2) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc209,	// (0x00067bf2) bg_sp_fs_ctrlbar_ddmenu_pane

0xf046,	// (0x0006aa2f) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xf046,	// (0x0006aa2f) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xf052,	// (0x0006aa3b) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xf052,	// (0x0006aa3b) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc6d,	// (0x0006b656) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc6d,	// (0x0006b656) main_sp_fs_ctrlbar_ddmenu_pane_g

0xf05e,	// (0x0006aa47) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xf05e,	// (0x0006aa47) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xcd94,	// (0x0006877d) list_medium_line_t2_right_icon_g1

0x84fa,	// (0x00063ee3) list_medium_line_t2_right_icon_t1

0x850a,	// (0x00063ef3) list_medium_line_t2_right_icon_t2

0x0001,

0xfc72,	// (0x0006b65b) list_medium_line_t2_right_icon_t

0xbef5,	// (0x000678de) bg_sp_fs_ctrlbar_pane_ParamLimits

0xbef5,	// (0x000678de) bg_sp_fs_ctrlbar_pane

0x8564,	// (0x00063f4d) main_sp_fs_ctrlbar_button_pane_cp01

0x856e,	// (0x00063f57) main_sp_fs_ctrlbar_ddmenu_pane

0xf0b2,	// (0x0006aa9b) main_sp_fs_ctrlbar_pane_g1

0xf0be,	// (0x0006aaa7) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc77,	// (0x0006b660) main_sp_fs_ctrlbar_pane_g

0xf0ca,	// (0x0006aab3) main_sp_fs_ctrlbar_pane_t1

0x8578,	// (0x00063f61) main_sp_fs_ctrlbar_pane

0x859c,	// (0x00063f85) main_sp_fs_listscroll_pane_te_cp01

0x85bc,	// (0x00063fa5) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85bc,	// (0x00063fa5) popup_sp_fs_action_menu_pane_cp01

0x0dea,	// (0x0005c7d3) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x0dea,	// (0x0005c7d3) bg_sp_fs_highlight_list_pane_cp01

0xcd9c,	// (0x00068785) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xcd9c,	// (0x00068785) sp_fs_action_menu_list_gene_pane_g1

0xf0df,	// (0x0006aac8) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xf0df,	// (0x0006aac8) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc7c,	// (0x0006b665) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc7c,	// (0x0006b665) sp_fs_action_menu_list_gene_pane_g

0xcdab,	// (0x00068794) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xcdab,	// (0x00068794) sp_fs_action_menu_list_gene_pane_t1

0xcdc3,	// (0x000687ac) sp_fs_action_menu_list_gene_pane_ParamLimits

0xcdc3,	// (0x000687ac) sp_fs_action_menu_list_gene_pane

0xcde6,	// (0x000687cf) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xcde6,	// (0x000687cf) popup_sp_fs_action_menu_bg_pane

0xcdf4,	// (0x000687dd) sp_fs_action_menu_list_pane_ParamLimits

0xcdf4,	// (0x000687dd) sp_fs_action_menu_list_pane

0xce18,	// (0x00068801) sp_fs_scroll_pane_cp01_ParamLimits

0xce18,	// (0x00068801) sp_fs_scroll_pane_cp01

0x85d8,	// (0x00063fc1) list_medium_line_plain_t2_t1

0x85e8,	// (0x00063fd1) list_medium_line_plain_t2_t2

0x0001,

0xfc81,	// (0x0006b66a) list_medium_line_plain_t2_t

0x85f8,	// (0x00063fe1) list_medium_line_plain_t3_t1

0x8608,	// (0x00063ff1) list_medium_line_plain_t3_t2

0x8616,	// (0x00063fff) list_medium_line_plain_t3_t3

0x0002,

0xfc86,	// (0x0006b66f) list_medium_line_plain_t3_t

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t2_g2_g1

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t2_g2_g2

0x0001,

0xf26a,	// (0x0006ac53) list_medium_line_x2_t2_g2_g_ParamLimits

0xf26a,	// (0x0006ac53) list_medium_line_x2_t2_g2_g

0x2b14,	// (0x0005e4fd) list_medium_line_x2_t2_g2_t1_ParamLimits

0x2b14,	// (0x0005e4fd) list_medium_line_x2_t2_g2_t1

0x1b3b,	// (0x0005d524) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc8d,	// (0x0006b676) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc8d,	// (0x0006b676) list_medium_line_x2_t2_g2_t

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t4_g2_g1

0xce3e,	// (0x00068827) list_medium_line_x2_t4_g2_g2_ParamLimits

0xce3e,	// (0x00068827) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc92,	// (0x0006b67b) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc92,	// (0x0006b67b) list_medium_line_x2_t4_g2_g

0x8624,	// (0x0006400d) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8624,	// (0x0006400d) list_medium_line_x2_t4_g2_t1

0x863e,	// (0x00064027) list_medium_line_x2_t4_g2_t2_ParamLimits

0x863e,	// (0x00064027) list_medium_line_x2_t4_g2_t2

0x8654,	// (0x0006403d) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8654,	// (0x0006403d) list_medium_line_x2_t4_g2_t3

0x1b3b,	// (0x0005d524) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc97,	// (0x0006b680) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc97,	// (0x0006b680) list_medium_line_x2_t4_g2_t

0xce50,	// (0x00068839) list_medium_line_t3_right_iconx2_g1

0xcd94,	// (0x0006877d) list_medium_line_t3_right_iconx2_g2

0x8669,	// (0x00064052) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfca0,	// (0x0006b689) list_medium_line_t3_right_iconx2_g

0x8673,	// (0x0006405c) list_medium_line_t3_right_iconx2_t1

0x8683,	// (0x0006406c) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfca7,	// (0x0006b690) list_medium_line_t3_right_iconx2_t

0x1aee,	// (0x0005d4d7) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x3_t4_g4_g1

0x1afa,	// (0x0005d4e3) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x3_t4_g4_g2

0x1ba2,	// (0x0005d58b) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ba2,	// (0x0005d58b) list_medium_line_x3_t4_g4_g3

0xce58,	// (0x00068841) list_medium_line_x3_t4_g4_g4_ParamLimits

0xce58,	// (0x00068841) list_medium_line_x3_t4_g4_g4

0x0003,

0xfcac,	// (0x0006b695) list_medium_line_x3_t4_g4_g_ParamLimits

0xfcac,	// (0x0006b695) list_medium_line_x3_t4_g4_g

0x8691,	// (0x0006407a) list_medium_line_x3_t4_g4_t1_ParamLimits

0x8691,	// (0x0006407a) list_medium_line_x3_t4_g4_t1

0x86a8,	// (0x00064091) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86a8,	// (0x00064091) list_medium_line_x3_t4_g4_t2

0xce64,	// (0x0006884d) list_medium_line_x3_t4_g4_t3_ParamLimits

0xce64,	// (0x0006884d) list_medium_line_x3_t4_g4_t3

0xce79,	// (0x00068862) list_medium_line_x3_t4_g4_t4_ParamLimits

0xce79,	// (0x00068862) list_medium_line_x3_t4_g4_t4

0x0003,

0xfcb5,	// (0x0006b69e) list_medium_line_x3_t4_g4_t_ParamLimits

0xfcb5,	// (0x0006b69e) list_medium_line_x3_t4_g4_t

0x86c3,	// (0x000640ac) list_single_dyc_row_text_pane_t1_ParamLimits

0x86c3,	// (0x000640ac) list_single_dyc_row_text_pane_t1

0x870c,	// (0x000640f5) list_single_dyc_row_text_pane_t2_ParamLimits

0x870c,	// (0x000640f5) list_single_dyc_row_text_pane_t2

0xce96,	// (0x0006887f) list_single_dyc_row_text_pane_t3_ParamLimits

0xce96,	// (0x0006887f) list_single_dyc_row_text_pane_t3

0x0002,

0xfcbe,	// (0x0006b6a7) list_single_dyc_row_text_pane_t_ParamLimits

0xfcbe,	// (0x0006b6a7) list_single_dyc_row_text_pane_t

0xcea8,	// (0x00068891) list_single_dyc_row_pane_g1_ParamLimits

0xcea8,	// (0x00068891) list_single_dyc_row_pane_g1

0xceb4,	// (0x0006889d) list_single_dyc_row_pane_g2_ParamLimits

0xceb4,	// (0x0006889d) list_single_dyc_row_pane_g2

0xcec0,	// (0x000688a9) list_single_dyc_row_pane_g3_ParamLimits

0xcec0,	// (0x000688a9) list_single_dyc_row_pane_g3

0xcecc,	// (0x000688b5) list_single_dyc_row_pane_g4_ParamLimits

0xcecc,	// (0x000688b5) list_single_dyc_row_pane_g4

0x0003,

0xfcc5,	// (0x0006b6ae) list_single_dyc_row_pane_g_ParamLimits

0xfcc5,	// (0x0006b6ae) list_single_dyc_row_pane_g

0xced8,	// (0x000688c1) list_single_dyc_row_text_pane_ParamLimits

0xced8,	// (0x000688c1) list_single_dyc_row_text_pane

0x0b67,	// (0x0005c550) bg_sp_fs_scroll_pane

0xcef7,	// (0x000688e0) thumb_sp_fs_scroll_pane

0x6ebb,	// (0x000628a4) list_medium_line_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_g1

0xcf00,	// (0x000688e9) list_medium_line_t1_ParamLimits

0xcf00,	// (0x000688e9) list_medium_line_t1

0x1aee,	// (0x0005d4d7) list_medium_line_x2_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_g1

0x1afa,	// (0x0005d4e3) list_medium_line_x2_g2_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x2_g2

0x0001,

0xfcce,	// (0x0006b6b7) list_medium_line_x2_g_ParamLimits

0xfcce,	// (0x0006b6b7) list_medium_line_x2_g

0xcf15,	// (0x000688fe) list_medium_line_x2_t1_ParamLimits

0xcf15,	// (0x000688fe) list_medium_line_x2_t1

0x1aee,	// (0x0005d4d7) list_medium_line_x3_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x3_g1

0x1afa,	// (0x0005d4e3) list_medium_line_x3_g2_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x3_g2

0x0001,

0xfcce,	// (0x0006b6b7) list_medium_line_x3_g_ParamLimits

0xfcce,	// (0x0006b6b7) list_medium_line_x3_g

0xcf15,	// (0x000688fe) list_medium_line_x3_t1_ParamLimits

0xcf15,	// (0x000688fe) list_medium_line_x3_t1

0xcf2b,	// (0x00068914) thumb_sp_fs_scroll_pane_g1

0xcf34,	// (0x0006891d) thumb_sp_fs_scroll_pane_g2

0xcf3d,	// (0x00068926) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfcd3,	// (0x0006b6bc) thumb_sp_fs_scroll_pane_g

0xcf2b,	// (0x00068914) bg_sp_fs_scroll_pane_g1

0xcf34,	// (0x0006891d) bg_sp_fs_scroll_pane_g2

0xcf3d,	// (0x00068926) bg_sp_fs_scroll_pane_g3

0x0002,

0xfcd3,	// (0x0006b6bc) bg_sp_fs_scroll_pane_g

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1aee,	// (0x0005d4d7) list_medium_line_x2_t3_g4_g1

0x1b96,	// (0x0005d57f) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1b96,	// (0x0005d57f) list_medium_line_x2_t3_g4_g2

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1afa,	// (0x0005d4e3) list_medium_line_x2_t3_g4_g3

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1b06,	// (0x0005d4ef) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2e6,	// (0x0006accf) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2e6,	// (0x0006accf) list_medium_line_x2_t3_g4_g

0x8766,	// (0x0006414f) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8766,	// (0x0006414f) list_medium_line_x2_t3_g4_t1

0x877c,	// (0x00064165) list_medium_line_x2_t3_g4_t2_ParamLimits

0x877c,	// (0x00064165) list_medium_line_x2_t3_g4_t2

0x1b3b,	// (0x0005d524) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1b3b,	// (0x0005d524) list_medium_line_x2_t3_g4_t3

0x0002,

0xfcda,	// (0x0006b6c3) list_medium_line_x2_t3_g4_t_ParamLimits

0xfcda,	// (0x0006b6c3) list_medium_line_x2_t3_g4_t

0x6ebb,	// (0x000628a4) list_medium_line_g2_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_g2_g1

0x6ec7,	// (0x000628b0) list_medium_line_g2_g2_ParamLimits

0x6ec7,	// (0x000628b0) list_medium_line_g2_g2

0x0001,

0xfa1f,	// (0x0006b408) list_medium_line_g2_g_ParamLimits

0xfa1f,	// (0x0006b408) list_medium_line_g2_g

0xcf46,	// (0x0006892f) list_medium_line_g2_t1_ParamLimits

0xcf46,	// (0x0006892f) list_medium_line_g2_t1

0x6ebb,	// (0x000628a4) list_medium_line_t3_g2_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_t3_g2_g1

0x6ec7,	// (0x000628b0) list_medium_line_t3_g2_g2_ParamLimits

0x6ec7,	// (0x000628b0) list_medium_line_t3_g2_g2

0x0001,

0xfa1f,	// (0x0006b408) list_medium_line_t3_g2_g_ParamLimits

0xfa1f,	// (0x0006b408) list_medium_line_t3_g2_g

0x8795,	// (0x0006417e) list_medium_line_t3_g2_t1_ParamLimits

0x8795,	// (0x0006417e) list_medium_line_t3_g2_t1

0x87af,	// (0x00064198) list_medium_line_t3_g2_t2_ParamLimits

0x87af,	// (0x00064198) list_medium_line_t3_g2_t2

0x87c5,	// (0x000641ae) list_medium_line_t3_g2_t3_ParamLimits

0x87c5,	// (0x000641ae) list_medium_line_t3_g2_t3

0x0002,

0xfce1,	// (0x0006b6ca) list_medium_line_t3_g2_t_ParamLimits

0xfce1,	// (0x0006b6ca) list_medium_line_t3_g2_t

0xcd94,	// (0x0006877d) list_medium_line_right_icon_g1

0xcf5b,	// (0x00068944) list_medium_line_right_icon_t1

0x6ebb,	// (0x000628a4) list_medium_line_t2_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_t2_g1

0x87dc,	// (0x000641c5) list_medium_line_t2_t1_ParamLimits

0x87dc,	// (0x000641c5) list_medium_line_t2_t1

0x87f6,	// (0x000641df) list_medium_line_t2_t2_ParamLimits

0x87f6,	// (0x000641df) list_medium_line_t2_t2

0x0001,

0xfce8,	// (0x0006b6d1) list_medium_line_t2_t_ParamLimits

0xfce8,	// (0x0006b6d1) list_medium_line_t2_t

0x6ebb,	// (0x000628a4) list_medium_line_t3_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_t3_g1

0x880f,	// (0x000641f8) list_medium_line_t3_t1_ParamLimits

0x880f,	// (0x000641f8) list_medium_line_t3_t1

0x8826,	// (0x0006420f) list_medium_line_t3_t2_ParamLimits

0x8826,	// (0x0006420f) list_medium_line_t3_t2

0x883b,	// (0x00064224) list_medium_line_t3_t3_ParamLimits

0x883b,	// (0x00064224) list_medium_line_t3_t3

0x0002,

0xfced,	// (0x0006b6d6) list_medium_line_t3_t_ParamLimits

0xfced,	// (0x0006b6d6) list_medium_line_t3_t

0x6ebb,	// (0x000628a4) list_medium_line_g3_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_g3_g1

0xcf69,	// (0x00068952) list_medium_line_g3_g2_ParamLimits

0xcf69,	// (0x00068952) list_medium_line_g3_g2

0x6ec7,	// (0x000628b0) list_medium_line_g3_g3_ParamLimits

0x6ec7,	// (0x000628b0) list_medium_line_g3_g3

0x0002,

0xfcf4,	// (0x0006b6dd) list_medium_line_g3_g_ParamLimits

0xfcf4,	// (0x0006b6dd) list_medium_line_g3_g

0xcf75,	// (0x0006895e) list_medium_line_g3_t1_ParamLimits

0xcf75,	// (0x0006895e) list_medium_line_g3_t1

0x6ebb,	// (0x000628a4) list_medium_line_t2_g3_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_t2_g3_g1

0xcf69,	// (0x00068952) list_medium_line_t2_g3_g2_ParamLimits

0xcf69,	// (0x00068952) list_medium_line_t2_g3_g2

0x6ec7,	// (0x000628b0) list_medium_line_t2_g3_g3_ParamLimits

0x6ec7,	// (0x000628b0) list_medium_line_t2_g3_g3

0x0002,

0xfcf4,	// (0x0006b6dd) list_medium_line_t2_g3_g_ParamLimits

0xfcf4,	// (0x0006b6dd) list_medium_line_t2_g3_g

0x884d,	// (0x00064236) list_medium_line_t2_g3_t1_ParamLimits

0x884d,	// (0x00064236) list_medium_line_t2_g3_t1

0x8864,	// (0x0006424d) list_medium_line_t2_g3_t2_ParamLimits

0x8864,	// (0x0006424d) list_medium_line_t2_g3_t2

0x0001,

0xfcfb,	// (0x0006b6e4) list_medium_line_t2_g3_t_ParamLimits

0xfcfb,	// (0x0006b6e4) list_medium_line_t2_g3_t

0x6ebb,	// (0x000628a4) list_medium_line_t3_g3_g1_ParamLimits

0x6ebb,	// (0x000628a4) list_medium_line_t3_g3_g1

0xcf69,	// (0x00068952) list_medium_line_t3_g3_g2_ParamLimits

0xcf69,	// (0x00068952) list_medium_line_t3_g3_g2

0x6ec7,	// (0x000628b0) list_medium_line_t3_g3_g3_ParamLimits

0x6ec7,	// (0x000628b0) list_medium_line_t3_g3_g3

0x0002,

0xfcf4,	// (0x0006b6dd) list_medium_line_t3_g3_g_ParamLimits

0xfcf4,	// (0x0006b6dd) list_medium_line_t3_g3_g

0x887d,	// (0x00064266) list_medium_line_t3_g3_t1_ParamLimits

0x887d,	// (0x00064266) list_medium_line_t3_g3_t1

0x8896,	// (0x0006427f) list_medium_line_t3_g3_t2_ParamLimits

0x8896,	// (0x0006427f) list_medium_line_t3_g3_t2

0x88ac,	// (0x00064295) list_medium_line_t3_g3_t3_ParamLimits

0x88ac,	// (0x00064295) list_medium_line_t3_g3_t3

0x0002,

0xfd00,	// (0x0006b6e9) list_medium_line_t3_g3_t_ParamLimits

0xfd00,	// (0x0006b6e9) list_medium_line_t3_g3_t

0xce50,	// (0x00068839) list_medium_line_right_iconx2_g1

0xcd94,	// (0x0006877d) list_medium_line_right_iconx2_g2

0x0001,

0xfd07,	// (0x0006b6f0) list_medium_line_right_iconx2_g

0xcf8a,	// (0x00068973) list_medium_line_right_iconx2_t1

0xce50,	// (0x00068839) list_medium_line_t2_right_iconx2_g1

0xcd94,	// (0x0006877d) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd07,	// (0x0006b6f0) list_medium_line_t2_right_iconx2_g

0x88c6,	// (0x000642af) list_medium_line_t2_right_iconx2_t1

0x88d6,	// (0x000642bf) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd0c,	// (0x0006b6f5) list_medium_line_t2_right_iconx2_t

0xcf98,	// (0x00068981) list_medium_line_x4_t4_t1

0x88e8,	// (0x000642d1) list_medium_line_x4_t4_t2

0x88f8,	// (0x000642e1) list_medium_line_x4_t4_t3

0x8908,	// (0x000642f1) list_medium_line_x4_t4_t4

0x0003,

0xfd11,	// (0x0006b6fa) list_medium_line_x4_t4_t

0x8952,	// (0x0006433b) tport_appsw_pane_ParamLimits

0x8952,	// (0x0006433b) tport_appsw_pane

0x8965,	// (0x0006434e) tport_contact_pane_ParamLimits

0x8965,	// (0x0006434e) tport_contact_pane

0x8978,	// (0x00064361) tport_listscroll_pane_ParamLimits

0x8978,	// (0x00064361) tport_listscroll_pane

0x898e,	// (0x00064377) cell_tport_appsw_pane_ParamLimits

0x898e,	// (0x00064377) cell_tport_appsw_pane

0xdff4,	// (0x000699dd) tport_appsw_pane_g1_ParamLimits

0xdff4,	// (0x000699dd) tport_appsw_pane_g1

0xcfa6,	// (0x0006898f) tport_contact_pane_g1

0xcfaf,	// (0x00068998) tport_contact_pane_t1

0xcfbd,	// (0x000689a6) tport_contact_pane_t2

0x0001,

0xfd1a,	// (0x0006b703) tport_contact_pane_t

0xcfcb,	// (0x000689b4) list_tport_pane

0xcfd4,	// (0x000689bd) scroll_pane_cp_030

0x89d4,	// (0x000643bd) cell_tport_appsw_pane_g1

0xcfed,	// (0x000689d6) cell_tport_appsw_pane_t1

0x0b67,	// (0x0005c550) grid_highlight_pane_cp019

0x89e4,	// (0x000643cd) list_tport_double_graphic_pane_ParamLimits

0x89e4,	// (0x000643cd) list_tport_double_graphic_pane

0x0dea,	// (0x0005c7d3) list_highlight_pane_cp023_ParamLimits

0x0dea,	// (0x0005c7d3) list_highlight_pane_cp023

0x89f4,	// (0x000643dd) list_tport_double_graphic_pane_g1_ParamLimits

0x89f4,	// (0x000643dd) list_tport_double_graphic_pane_g1

0x8a01,	// (0x000643ea) list_tport_double_graphic_pane_t1_ParamLimits

0x8a01,	// (0x000643ea) list_tport_double_graphic_pane_t1

0x8a16,	// (0x000643ff) list_tport_double_graphic_pane_t2_ParamLimits

0x8a16,	// (0x000643ff) list_tport_double_graphic_pane_t2

0x0001,

0xfd26,	// (0x0006b70f) list_tport_double_graphic_pane_t_ParamLimits

0xfd26,	// (0x0006b70f) list_tport_double_graphic_pane_t

0x0b67,	// (0x0005c550) main_cale_note_pane

0x65fc,	// (0x00061fe5) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x65fc,	// (0x00061fe5) cell_vitu2_function_top_wide_pane_cp01

0x80a0,	// (0x00063a89) wait_bar_pane_cp05_ParamLimits

0x0b67,	// (0x0005c550) listscroll_cmail_pane

0xd003,	// (0x000689ec) list_cmail_pane

0x8a32,	// (0x0006441b) list_cmail_body_pane

0x8a4a,	// (0x00064433) list_single_cmail_header_caption_pane

0x8a67,	// (0x00064450) list_single_cmail_header_detail_pane_ParamLimits

0x8a67,	// (0x00064450) list_single_cmail_header_detail_pane

0x8a99,	// (0x00064482) list_single_cmail_header_caption_pane_t1

0x8aa9,	// (0x00064492) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8aa9,	// (0x00064492) list_single_cmail_header_detail_pane_g1

0xd023,	// (0x00068a0c) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd023,	// (0x00068a0c) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd2b,	// (0x0006b714) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd2b,	// (0x0006b714) list_single_cmail_header_detail_pane_g

0xd03c,	// (0x00068a25) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd03c,	// (0x00068a25) list_single_cmail_header_detail_pane_t1

0xd07a,	// (0x00068a63) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd07a,	// (0x00068a63) list_single_cmail_header_editor_pane_bg

0xec5f,	// (0x0006a648) list_cmail_body_pane_g1

0xd08c,	// (0x00068a75) list_cmail_body_pane_t1

0xe014,	// (0x000699fd) list_single_cmail_header_editor_pane_bg_g1

0xa3a3,	// (0x00065d8c) list_single_cmail_header_editor_pane_bg_g1_copy1

0xe024,	// (0x00069a0d) list_single_cmail_header_editor_pane_bg_g1_copy2

0xe01c,	// (0x00069a05) list_single_cmail_header_editor_pane_bg_g1_copy3

0xe267,	// (0x00069c50) list_single_cmail_header_editor_pane_bg_g1_copy4

0xe044,	// (0x00069a2d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xe034,	// (0x00069a1d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xe03c,	// (0x00069a25) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa383,	// (0x00065d6c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8ae7,	// (0x000644d0) calenote_gesture_pane_ParamLimits

0x8ae7,	// (0x000644d0) calenote_gesture_pane

0x8b07,	// (0x000644f0) calenote_window_pane_ParamLimits

0x8b07,	// (0x000644f0) calenote_window_pane

0xd09a,	// (0x00068a83) popup_note_window_cp01

0x8b23,	// (0x0006450c) calenote_swipe_1_pane_ParamLimits

0x8b23,	// (0x0006450c) calenote_swipe_1_pane

0x84e0,	// (0x00063ec9) calenote_swipe_2_pane_ParamLimits

0x84e0,	// (0x00063ec9) calenote_swipe_2_pane

0xefbd,	// (0x0006a9a6) calenote_swipe_1_pane_g1_ParamLimits

0xefbd,	// (0x0006a9a6) calenote_swipe_1_pane_g1

0xefca,	// (0x0006a9b3) calenote_swipe_1_pane_g2_ParamLimits

0xefca,	// (0x0006a9b3) calenote_swipe_1_pane_g2

0x0001,

0xfc5a,	// (0x0006b643) calenote_swipe_1_pane_g_ParamLimits

0xfc5a,	// (0x0006b643) calenote_swipe_1_pane_g

0xd0ac,	// (0x00068a95) calenote_swipe_1_pane_t1_ParamLimits

0xd0ac,	// (0x00068a95) calenote_swipe_1_pane_t1

0xefbd,	// (0x0006a9a6) calenote_swipe_2_pane_g1_ParamLimits

0xefbd,	// (0x0006a9a6) calenote_swipe_2_pane_g1

0xd0cb,	// (0x00068ab4) calenote_swipe_2_pane_g2_ParamLimits

0xd0cb,	// (0x00068ab4) calenote_swipe_2_pane_g2

0x0001,

0xfd37,	// (0x0006b720) calenote_swipe_2_pane_g_ParamLimits

0xfd37,	// (0x0006b720) calenote_swipe_2_pane_g

0xd0d7,	// (0x00068ac0) calenote_swipe_2_pane_t1_ParamLimits

0xd0d7,	// (0x00068ac0) calenote_swipe_2_pane_t1

0x0b67,	// (0x0005c550) main_mup_navstr_pane

0x52a5,	// (0x00060c8e) main_mup3_pane_t7_ParamLimits

0x52a5,	// (0x00060c8e) main_mup3_pane_t7

0xdaac,	// (0x00069495) main_mp4_pane_g6_ParamLimits

0xdaac,	// (0x00069495) main_mp4_pane_g6

0xdc42,	// (0x0006962b) main_image3_pane_t4_ParamLimits

0xdc42,	// (0x0006962b) main_image3_pane_t4

0x8b38,	// (0x00064521) popup_navstr_preview_pane_ParamLimits

0x8b38,	// (0x00064521) popup_navstr_preview_pane

0x8b48,	// (0x00064531) scroll_navstr_pane_ParamLimits

0x8b48,	// (0x00064531) scroll_navstr_pane

0x0b67,	// (0x0005c550) bg_popup_preview_window_pane_cp04

0xd0fe,	// (0x00068ae7) popup_navstr_preview_pane_t1

0x8b5c,	// (0x00064545) scroll_navstr_pane_g1_ParamLimits

0x8b5c,	// (0x00064545) scroll_navstr_pane_g1

0x8b70,	// (0x00064559) scroll_navstr_pane_t1_ParamLimits

0x8b70,	// (0x00064559) scroll_navstr_pane_t1

0xd0a3,	// (0x00068a8c) bg_button_pane_cp014

0xd0a3,	// (0x00068a8c) bg_button_pane_cp030

0x8375,	// (0x00063d5e) list_double_fisheye_pane_g4_ParamLimits

0x8375,	// (0x00063d5e) list_double_fisheye_pane_g4

0x8381,	// (0x00063d6a) list_double_fisheye_pane_g5_ParamLimits

0x8381,	// (0x00063d6a) list_double_fisheye_pane_g5

0xd00b,	// (0x000689f4) sp_fs_scroll_pane_cp03

0xf0b2,	// (0x0006aa9b) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xf0be,	// (0x0006aaa7) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc77,	// (0x0006b660) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xf0ca,	// (0x0006aab3) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8a28,	// (0x00064411) sp_fs_scroll_pane_cp02

0xa045,	// (0x00065a2e) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa045,	// (0x00065a2e) popup_sp_fs_calendar_preview_list_single_pane

0x0b67,	// (0x0005c550) main_cam6_pano_pane

0x0dea,	// (0x0005c7d3) main_mup3_pane_ParamLimits

0x0b67,	// (0x0005c550) main_phacti_pane

0x7f71,	// (0x0006395a) bg_button_pane_cp11

0x7f8b,	// (0x00063974) main_mobtv_info_pane_g2_ParamLimits

0x7f8b,	// (0x00063974) main_mobtv_info_pane_g2

0x0001,

0xfc0c,	// (0x0006b5f5) main_mobtv_info_pane_g_ParamLimits

0xfc0c,	// (0x0006b5f5) main_mobtv_info_pane_g

0x8166,	// (0x00063b4f) sc_clock_pane_t5_ParamLimits

0x8166,	// (0x00063b4f) sc_clock_pane_t5

0x81f0,	// (0x00063bd9) main_radioblah_pane_g1_ParamLimits

0xeeef,	// (0x0006a8d8) main_radioblah_pane_t3_ParamLimits

0xeeef,	// (0x0006a8d8) main_radioblah_pane_t3

0xef07,	// (0x0006a8f0) main_radioblah_pane_t4_ParamLimits

0xef07,	// (0x0006a8f0) main_radioblah_pane_t4

0x8218,	// (0x00063c01) main_radioblah_text_pane_ParamLimits

0x8218,	// (0x00063c01) main_radioblah_text_pane

0x822a,	// (0x00063c13) main_radioblah_info_pane_g1_ParamLimits

0x82c3,	// (0x00063cac) main_radioblah_info_pane_t4_ParamLimits

0x82c3,	// (0x00063cac) main_radioblah_info_pane_t4

0x0dea,	// (0x0005c7d3) main_sp_fs_calendar_pane

0x8b87,	// (0x00064570) main_phacti_pane_g1

0x8b8f,	// (0x00064578) phacti_note_pane_ParamLimits

0x8b8f,	// (0x00064578) phacti_note_pane

0xd115,	// (0x00068afe) phacti_term_pane_ParamLimits

0xd115,	// (0x00068afe) phacti_term_pane

0xd12a,	// (0x00068b13) phacti_note_pane_t1_ParamLimits

0xd12a,	// (0x00068b13) phacti_note_pane_t1

0xd141,	// (0x00068b2a) phacti_term_pane_g1

0xd149,	// (0x00068b32) phacti_term_pane_t1_ParamLimits

0xd149,	// (0x00068b32) phacti_term_pane_t1

0xd173,	// (0x00068b5c) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd17b,	// (0x00068b64) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfd41,	// (0x0006b72a) popup_sp_fs_calendar_preview_list_single_pane_g

0xd183,	// (0x00068b6c) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd183,	// (0x00068b6c) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd199,	// (0x00068b82) aid_popup_sp_fs_bg_corner_pane

0xc42a,	// (0x00067e13) popup_sp_fs_calendar_preview_bg_pane_g1

0x0b67,	// (0x0005c550) popup_sp_fs_calendar_preview_bg_pane

0xd1a1,	// (0x00068b8a) popup_sp_fs_calendar_preview_list_pane

0x0dea,	// (0x0005c7d3) bg_main_sp_fs_cale_pane_ParamLimits

0x0dea,	// (0x0005c7d3) bg_main_sp_fs_cale_pane

0xd1a9,	// (0x00068b92) listscroll_cale_mrui_pane_ParamLimits

0xd1a9,	// (0x00068b92) listscroll_cale_mrui_pane

0xd1bd,	// (0x00068ba6) listscroll_sp_fs_schedule_track_pane

0xd1c6,	// (0x00068baf) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd1c6,	// (0x00068baf) main_sp_fs_ctrlbar_pane_cp01

0xd1d7,	// (0x00068bc0) main_sp_fs_ribbon_pane

0xd1df,	// (0x00068bc8) popup_sp_fs_cale_preview_window

0x8be6,	// (0x000645cf) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8be6,	// (0x000645cf) list_single_sp_fs_schedule_track_pane

0x0dea,	// (0x0005c7d3) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x0dea,	// (0x0005c7d3) bg_sp_fs_highlight_list_pane_cp03

0x8bf9,	// (0x000645e2) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8bf9,	// (0x000645e2) list_single_sp_fs_schedule_track_pane_g1

0x8c05,	// (0x000645ee) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8c05,	// (0x000645ee) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfd46,	// (0x0006b72f) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfd46,	// (0x0006b72f) list_single_sp_fs_schedule_track_pane_g

0x8c11,	// (0x000645fa) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8c11,	// (0x000645fa) list_single_sp_fs_schedule_track_pane_t1

0x8c33,	// (0x0006461c) sp_fs_schedule_track_pane_ParamLimits

0x8c33,	// (0x0006461c) sp_fs_schedule_track_pane

0xd1f1,	// (0x00068bda) sp_fs_schedule_track_pane_g1

0xd1f9,	// (0x00068be2) sp_fs_schedule_track_pane_g2

0xd201,	// (0x00068bea) sp_fs_schedule_track_pane_g3

0xd209,	// (0x00068bf2) sp_fs_schedule_track_pane_g4

0xd211,	// (0x00068bfa) sp_fs_schedule_track_pane_g5

0x0004,

0xfd4b,	// (0x0006b734) sp_fs_schedule_track_pane_g

0xe014,	// (0x000699fd) bg_sp_fs_schedule_viewer_highlight_g1

0xa3a3,	// (0x00065d8c) bg_sp_fs_schedule_viewer_highlight_g2

0xe01c,	// (0x00069a05) bg_sp_fs_schedule_viewer_highlight_g3

0xe024,	// (0x00069a0d) bg_sp_fs_schedule_viewer_highlight_g4

0xe267,	// (0x00069c50) bg_sp_fs_schedule_viewer_highlight_g5

0xe034,	// (0x00069a1d) bg_sp_fs_schedule_viewer_highlight_g6

0xe03c,	// (0x00069a25) bg_sp_fs_schedule_viewer_highlight_g7

0xe044,	// (0x00069a2d) bg_sp_fs_schedule_viewer_highlight_g8

0xa383,	// (0x00065d6c) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd56,	// (0x0006b73f) bg_sp_fs_schedule_viewer_highlight_g

0x0b67,	// (0x0005c550) bg_main_sp_fs_ribbon_pane

0x8c48,	// (0x00064631) main_sp_fs_ribbon_pane_g1

0xd219,	// (0x00068c02) main_sp_fs_ribbon_pane_t1

0x8c51,	// (0x0006463a) main_sp_fs_ribbon_pane_t2

0xd228,	// (0x00068c11) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd69,	// (0x0006b752) main_sp_fs_ribbon_pane_t

0xd237,	// (0x00068c20) main_sp_fs_ribbon_scheduler_pane

0xd23f,	// (0x00068c28) bg_main_sp_fs_ribbon_pane_g1

0xd248,	// (0x00068c31) bg_main_sp_fs_ribbon_pane_g2

0xd251,	// (0x00068c3a) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd70,	// (0x0006b759) bg_main_sp_fs_ribbon_pane_g

0xd259,	// (0x00068c42) main_sp_fs_ribbon_scheduler_pane_g1

0xd262,	// (0x00068c4b) main_sp_fs_ribbon_scheduler_pane_g2

0xd26b,	// (0x00068c54) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd77,	// (0x0006b760) main_sp_fs_ribbon_scheduler_pane_g

0xd274,	// (0x00068c5d) list_cale_mrui_pane

0x8c60,	// (0x00064649) sp_fs_scroll_pane_cp07_ParamLimits

0x8c60,	// (0x00064649) sp_fs_scroll_pane_cp07

0x8c76,	// (0x0006465f) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c76,	// (0x0006465f) bg_sp_fs_schedule_viewer_highlight

0xd27d,	// (0x00068c66) list_single_sp_fs_schedule_track_pane_cp01

0xd285,	// (0x00068c6e) list_sp_fs_schedule_track_pane

0xd28d,	// (0x00068c76) sp_fs_scroll_pane_cp06_ParamLimits

0xd28d,	// (0x00068c76) sp_fs_scroll_pane_cp06

0xc42a,	// (0x00067e13) bgmain_sp_fs_calendar_pane_g1

0x8c88,	// (0x00064671) list_single_cale_mrui_pane_ParamLimits

0x8c88,	// (0x00064671) list_single_cale_mrui_pane

0xd29f,	// (0x00068c88) list_single_cale_mrui_row_pane_ParamLimits

0xd29f,	// (0x00068c88) list_single_cale_mrui_row_pane

0xd2ac,	// (0x00068c95) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd2ac,	// (0x00068c95) list_single_cale_mrui_row_pane_g1

0xd2e4,	// (0x00068ccd) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd2e4,	// (0x00068ccd) list_single_cale_mrui_row_pane_t1

0x8cab,	// (0x00064694) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8cab,	// (0x00064694) list_single_cale_mrui_row_pane_t2

0xd2f6,	// (0x00068cdf) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd2f6,	// (0x00068cdf) list_single_cale_mrui_row_pane_t3

0xd325,	// (0x00068d0e) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd325,	// (0x00068d0e) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd83,	// (0x0006b76c) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd83,	// (0x0006b76c) list_single_cale_mrui_row_pane_t

0x8d13,	// (0x000646fc) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8d13,	// (0x000646fc) list_single_cmail_header_editor_pane_bg_cp01

0x8d39,	// (0x00064722) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8d39,	// (0x00064722) list_single_cmail_header_editor_pane_bg_cp02

0x8d59,	// (0x00064742) main_radioblah_text_pane_t1_ParamLimits

0x8d59,	// (0x00064742) main_radioblah_text_pane_t1

0xd354,	// (0x00068d3d) cam6_indi_pane_cp01

0xd35c,	// (0x00068d45) cam6_mode_pane_cp01

0xd364,	// (0x00068d4d) cam6_pano_pane

0xd36d,	// (0x00068d56) cam6_zoom_pane_cp01

0xd377,	// (0x00068d60) cam6_pano_image_pane

0xd380,	// (0x00068d69) cam6_pano_pane_g1

0xec5f,	// (0x0006a648) cam6_pano_pane_g2

0xd389,	// (0x00068d72) cam6_pano_pane_g3

0xd392,	// (0x00068d7b) cam6_pano_pane_g4

0xc9ae,	// (0x00068397) cam6_pano_pane_g5

0xd39b,	// (0x00068d84) cam6_pano_pane_g6

0xd3a3,	// (0x00068d8c) cam6_pano_pane_g7

0xd3ab,	// (0x00068d94) cam6_pano_pane_g8

0xd3b4,	// (0x00068d9d) cam6_pano_pane_g9

0x0008,

0xfd8c,	// (0x0006b775) cam6_pano_pane_g

0x0b67,	// (0x0005c550) main_browser_tag_pane

0xd0f6,	// (0x00068adf) grid_navstr_albumart_pane

0xd3bf,	// (0x00068da8) cell_navstr_albumart_pane_ParamLimits

0xd3bf,	// (0x00068da8) cell_navstr_albumart_pane

0xd3db,	// (0x00068dc4) cell_navstr_albumart_pane_g1

0xbd0e,	// (0x000676f7) cell_navstr_albumart_pane_g2

0xbd1e,	// (0x00067707) cell_navstr_albumart_pane_g3

0xbd16,	// (0x000676ff) cell_navstr_albumart_pane_g4

0x0003,

0xfd9f,	// (0x0006b788) cell_navstr_albumart_pane_g

0x8d74,	// (0x0006475d) bt_list_pane_ParamLimits

0x8d74,	// (0x0006475d) bt_list_pane

0x8d8a,	// (0x00064773) bt_list_pane_t1

0x8d99,	// (0x00064782) bt_list_pane_t2

0x0001,

0xfda8,	// (0x0006b791) bt_list_pane_t

0x0b67,	// (0x0005c550) main_cale_prevew_pane

0x8da8,	// (0x00064791) popup_cale_preview_window_ParamLimits

0x8da8,	// (0x00064791) popup_cale_preview_window

0x0dea,	// (0x0005c7d3) bg_popup_preview_window_pane_cp05_ParamLimits

0x0dea,	// (0x0005c7d3) bg_popup_preview_window_pane_cp05

0xd3e3,	// (0x00068dcc) list_cale_preview_pane_ParamLimits

0xd3e3,	// (0x00068dcc) list_cale_preview_pane

0x8dc3,	// (0x000647ac) list_double_cale_preview_pane_ParamLimits

0x8dc3,	// (0x000647ac) list_double_cale_preview_pane

0x8dd7,	// (0x000647c0) list_single_cale_preview_pane_ParamLimits

0x8dd7,	// (0x000647c0) list_single_cale_preview_pane

0x8def,	// (0x000647d8) list_single_cale_preview_pane_g1

0x8df7,	// (0x000647e0) list_single_cale_preview_pane_t1_ParamLimits

0x8df7,	// (0x000647e0) list_single_cale_preview_pane_t1

0x8e0c,	// (0x000647f5) list_double_cale_preview_pane_g1

0x8e14,	// (0x000647fd) list_double_cale_preview_pane_t1_ParamLimits

0x8e14,	// (0x000647fd) list_double_cale_preview_pane_t1

0x8e29,	// (0x00064812) list_double_cale_preview_pane_t2_ParamLimits

0x8e29,	// (0x00064812) list_double_cale_preview_pane_t2

0x0001,

0xfdad,	// (0x0006b796) list_double_cale_preview_pane_t_ParamLimits

0xfdad,	// (0x0006b796) list_double_cale_preview_pane_t

0x0b67,	// (0x0005c550) main_ezdial_pane

0x0dea,	// (0x0005c7d3) main_sp_fs_email_pane_ParamLimits

0x851c,	// (0x00063f05) cmail_ddmenu_btn01_pane_ParamLimits

0x851c,	// (0x00063f05) cmail_ddmenu_btn01_pane

0x852f,	// (0x00063f18) cmail_ddmenu_btn02_pane_ParamLimits

0x852f,	// (0x00063f18) cmail_ddmenu_btn02_pane

0x8552,	// (0x00063f3b) cmail_ddmenu_btn03_pane_ParamLimits

0x8552,	// (0x00063f3b) cmail_ddmenu_btn03_pane

0x8578,	// (0x00063f61) main_sp_fs_ctrlbar_pane_ParamLimits

0x859c,	// (0x00063f85) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8a32,	// (0x0006441b) list_cmail_body_pane_ParamLimits

0xd01a,	// (0x00068a03) bg_button_pane_cp12

0xd02f,	// (0x00068a18) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd02f,	// (0x00068a18) list_single_cmail_header_detail_pane_g3

0x8ac1,	// (0x000644aa) list_single_cmail_header_detail_pane_t2_ParamLimits

0x8ac1,	// (0x000644aa) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd32,	// (0x0006b71b) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd32,	// (0x0006b71b) list_single_cmail_header_detail_pane_t

0xd15e,	// (0x00068b47) phacti_term_pane_t2_ParamLimits

0xd15e,	// (0x00068b47) phacti_term_pane_t2

0x0001,

0xfd3c,	// (0x0006b725) phacti_term_pane_t_ParamLimits

0xfd3c,	// (0x0006b725) phacti_term_pane_t

0xd3ef,	// (0x00068dd8) aid_size_list_single_double

0x8e41,	// (0x0006482a) popup_ezdial_listscroll_window

0x8e5d,	// (0x00064846) popup_number_entry_window_cp01

0xaa88,	// (0x00066471) bg_popup_call_pane_cp09

0xd3fb,	// (0x00068de4) ezdial_list_pane

0xd403,	// (0x00068dec) scroll_pane_cp23

0xbef5,	// (0x000678de) bg_button_pane_cp028_ParamLimits

0xbef5,	// (0x000678de) bg_button_pane_cp028

0x8e6b,	// (0x00064854) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8e6b,	// (0x00064854) cmail_ddmenu_btn01_pane_g1

0x8e77,	// (0x00064860) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e77,	// (0x00064860) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfdb2,	// (0x0006b79b) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfdb2,	// (0x0006b79b) cmail_ddmenu_btn01_pane_g

0xd40b,	// (0x00068df4) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd40b,	// (0x00068df4) cmail_ddmenu_btn01_pane_t1

0xbef5,	// (0x000678de) bg_button_pane_cp029_ParamLimits

0xbef5,	// (0x000678de) bg_button_pane_cp029

0x8e83,	// (0x0006486c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e83,	// (0x0006486c) cmail_ddmenu_btn02_pane_g1

0x8e9b,	// (0x00064884) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e9b,	// (0x00064884) cmail_ddmenu_btn02_pane_t1

0x0dea,	// (0x0005c7d3) bg_button_pane_cp031_ParamLimits

0x0dea,	// (0x0005c7d3) bg_button_pane_cp031

0x8e83,	// (0x0006486c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e83,	// (0x0006486c) cmail_ddmenu_btn03_pane_g1

0x8e9b,	// (0x00064884) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e9b,	// (0x00064884) cmail_ddmenu_btn03_pane_t1

0x5e48,	// (0x00061831) cell_dialer2_keypad_pane_t1_ParamLimits

0x5e62,	// (0x0006184b) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5e62,	// (0x0006184b) cell_dialer2_keypad_pane_t1_copy1

0x7de3,	// (0x000637cc) ncimui_group_button_pane

0x0dea,	// (0x0005c7d3) main_sp_fs_calendar_pane_ParamLimits

0x8a4a,	// (0x00064433) list_single_cmail_header_caption_pane_ParamLimits

0x75cc,	// (0x00062fb5) aid_recal_txt_sm_pane

0x0b67,	// (0x0005c550) mian_recal_day_pane

0xd1df,	// (0x00068bc8) popup_sp_fs_cale_preview_window_ParamLimits

0x0b67,	// (0x0005c550) list_recal_day_pane

0xd439,	// (0x00068e22) list_single_recal_day_pane_ParamLimits

0xd439,	// (0x00068e22) list_single_recal_day_pane

0xd44b,	// (0x00068e34) list_single_recal_day_pane_g1_ParamLimits

0xd44b,	// (0x00068e34) list_single_recal_day_pane_g1

0xd457,	// (0x00068e40) list_single_recal_day_pane_g2_ParamLimits

0xd457,	// (0x00068e40) list_single_recal_day_pane_g2

0xd463,	// (0x00068e4c) list_single_recal_day_pane_g3_ParamLimits

0xd463,	// (0x00068e4c) list_single_recal_day_pane_g3

0x8ebf,	// (0x000648a8) list_single_recal_day_pane_g4_ParamLimits

0x8ebf,	// (0x000648a8) list_single_recal_day_pane_g4

0xd46f,	// (0x00068e58) list_single_recal_day_pane_g5_ParamLimits

0xd46f,	// (0x00068e58) list_single_recal_day_pane_g5

0xd47b,	// (0x00068e64) list_single_recal_day_pane_g6_ParamLimits

0xd47b,	// (0x00068e64) list_single_recal_day_pane_g6

0x0005,

0xfdc1,	// (0x0006b7aa) list_single_recal_day_pane_g_ParamLimits

0xfdc1,	// (0x0006b7aa) list_single_recal_day_pane_g

0xd487,	// (0x00068e70) list_single_recal_day_pane_t1

0xd495,	// (0x00068e7e) list_single_recal_day_pane_t2

0x0001,

0xfdce,	// (0x0006b7b7) list_single_recal_day_pane_t

0x8ecd,	// (0x000648b6) ncimui_query_button_pane_ParamLimits

0x8ecd,	// (0x000648b6) ncimui_query_button_pane

0x8edd,	// (0x000648c6) ncimui_query_button_pane_t1_ParamLimits

0x8edd,	// (0x000648c6) ncimui_query_button_pane_t1

0xd4a3,	// (0x00068e8c) ncimui_query_button_pane_t2_ParamLimits

0xd4a3,	// (0x00068e8c) ncimui_query_button_pane_t2

0x0001,

0xfdd3,	// (0x0006b7bc) ncimui_query_button_pane_t_ParamLimits

0xfdd3,	// (0x0006b7bc) ncimui_query_button_pane_t

0x8ef0,	// (0x000648d9) query_button_pane_ParamLimits

0x8ef0,	// (0x000648d9) query_button_pane

0x0b67,	// (0x0005c550) bg_button_pane_cp0028

0xd4b6,	// (0x00068e9f) query_button_pane_t1

0x3e86,	// (0x0005f86f) main_tport_pane_ParamLimits

0x8918,	// (0x00064301) bg_popup_window_pane_cp01_ParamLimits

0x8918,	// (0x00064301) bg_popup_window_pane_cp01

0x892e,	// (0x00064317) heading_pane_cp08_ParamLimits

0x892e,	// (0x00064317) heading_pane_cp08

0x893f,	// (0x00064328) heading_pane_cp07_ParamLimits

0x893f,	// (0x00064328) heading_pane_cp07

0xcfe5,	// (0x000689ce) cell_tport_appsw_pane_g2

0x0002,

0xfd1f,	// (0x0006b708) cell_tport_appsw_pane_g

0x33cf,	// (0x0005edb8) input_candi_list_open_g1

0xa56c,	// (0x00065f55) list_cale_time_pane_g6_ParamLimits

0xa56c,	// (0x00065f55) list_cale_time_pane_g6

0x4c74,	// (0x0006065d) aid_size_touch_calib_1_ParamLimits

0x4c74,	// (0x0006065d) aid_size_touch_calib_1

0x4c80,	// (0x00060669) aid_size_touch_calib_2_ParamLimits

0x4c80,	// (0x00060669) aid_size_touch_calib_2

0x4c96,	// (0x0006067f) aid_size_touch_calib_3_ParamLimits

0x4c96,	// (0x0006067f) aid_size_touch_calib_3

0x4cb4,	// (0x0006069d) aid_size_touch_calib_4_ParamLimits

0x4cb4,	// (0x0006069d) aid_size_touch_calib_4

0x4cca,	// (0x000606b3) main_touch_calib_button_group_pane_ParamLimits

0x4cca,	// (0x000606b3) main_touch_calib_button_group_pane

0x4ce2,	// (0x000606cb) main_touch_calib_pane_g1_ParamLimits

0x4cee,	// (0x000606d7) main_touch_calib_pane_g2_ParamLimits

0x4cfa,	// (0x000606e3) main_touch_calib_pane_g3_ParamLimits

0x4d06,	// (0x000606ef) main_touch_calib_pane_g4_ParamLimits

0xf775,	// (0x0006b15e) main_touch_calib_pane_g_ParamLimits

0x4d12,	// (0x000606fb) main_touch_calib_pane_t1_ParamLimits

0x4d2c,	// (0x00060715) main_touch_calib_pane_t2_ParamLimits

0x4d46,	// (0x0006072f) main_touch_calib_pane_t3_ParamLimits

0x4d5a,	// (0x00060743) main_touch_calib_pane_t4_ParamLimits

0x4d6e,	// (0x00060757) main_touch_calib_pane_t5_ParamLimits

0xf77e,	// (0x0006b167) main_touch_calib_pane_t_ParamLimits

0xc778,	// (0x00068161) list_single_fp_cale_pane_g3_ParamLimits

0xc778,	// (0x00068161) list_single_fp_cale_pane_g3

0xdd09,	// (0x000696f2) bg_button_pane_cp012_ParamLimits

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp03_ParamLimits

0x6e71,	// (0x0006285a) cell_vitu2_function_top_pane_g1_ParamLimits

0xdd09,	// (0x000696f2) bg_vkb2_func_pane_cp04_ParamLimits

0x7d83,	// (0x0006376c) main_ncimui_button_group_pane_ParamLimits

0x7d83,	// (0x0006376c) main_ncimui_button_group_pane

0x7dd1,	// (0x000637ba) main_ncimui_pane_t3_ParamLimits

0x7dd1,	// (0x000637ba) main_ncimui_pane_t3

0xd10c,	// (0x00068af5) phacti_button_group_pane

0xd3ef,	// (0x00068dd8) aid_size_list_single_double_ParamLimits

0x8e41,	// (0x0006482a) popup_ezdial_listscroll_window_ParamLimits

0x8e5d,	// (0x00064846) popup_number_entry_window_cp01_ParamLimits

0x8f03,	// (0x000648ec) phacti_button_pane_ParamLimits

0x8f03,	// (0x000648ec) phacti_button_pane

0x0b67,	// (0x0005c550) bg_button_pane_cp14

0xd4c4,	// (0x00068ead) phacti_button_pane_t1

0x8f14,	// (0x000648fd) main_touch_calib_button_pane_ParamLimits

0x8f14,	// (0x000648fd) main_touch_calib_button_pane

0x9eb9,	// (0x000658a2) bg_button_pane_cp18_ParamLimits

0x9eb9,	// (0x000658a2) bg_button_pane_cp18

0xd4d2,	// (0x00068ebb) main_touch_calib_button_pane_t1_ParamLimits

0xd4d2,	// (0x00068ebb) main_touch_calib_button_pane_t1

0xd4e8,	// (0x00068ed1) main_touch_calib_button_pane_t2_ParamLimits

0xd4e8,	// (0x00068ed1) main_touch_calib_button_pane_t2

0x0001,

0xfdd8,	// (0x0006b7c1) main_touch_calib_button_pane_t_ParamLimits

0xfdd8,	// (0x0006b7c1) main_touch_calib_button_pane_t

0x0b67,	// (0x0005c550) cell_ncimui_button_pane

0x0b67,	// (0x0005c550) bg_button_pane_cp032

0xd506,	// (0x00068eef) cell_ncimui_button_pane_t1

0xdc20,	// (0x00069609) image3_infobar_pane_ParamLimits

0xdc20,	// (0x00069609) image3_infobar_pane

0x8192,	// (0x00063b7b) fs_bigclock_status_pane_ParamLimits

0x8192,	// (0x00063b7b) fs_bigclock_status_pane

0x819f,	// (0x00063b88) main_fs_bigclock_clock_pane_ParamLimits

0x819f,	// (0x00063b88) main_fs_bigclock_clock_pane

0x81b2,	// (0x00063b9b) main_fs_bigclock_indi_pane_ParamLimits

0x81b2,	// (0x00063b9b) main_fs_bigclock_indi_pane

0x81cd,	// (0x00063bb6) main_fs_bigclock_swipe_pane_ParamLimits

0x81cd,	// (0x00063bb6) main_fs_bigclock_swipe_pane

0x0b67,	// (0x0005c550) main_fs_clock_dumped_data

0xed6c,	// (0x0006a755) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xed6c,	// (0x0006a755) list_single_fs_bigclock_indicator_pane_g1

0xed8c,	// (0x0006a775) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xed8c,	// (0x0006a775) list_single_fs_bigclock_indicator_pane_g2

0xeda6,	// (0x0006a78f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xeda6,	// (0x0006a78f) list_single_fs_bigclock_indicator_pane_g3

0xedc2,	// (0x0006a7ab) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xedc2,	// (0x0006a7ab) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0x079a,	// (0x0005c183) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0x079a,	// (0x0005c183) list_single_fs_bigclock_indicator_pane_g

0xede8,	// (0x0006a7d1) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xede8,	// (0x0006a7d1) list_single_fs_bigclock_indicator_pane_t1

0xee10,	// (0x0006a7f9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xee10,	// (0x0006a7f9) list_single_fs_bigclock_indicator_pane_t2

0xee38,	// (0x0006a821) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xee38,	// (0x0006a821) list_single_fs_bigclock_indicator_pane_t3

0xee62,	// (0x0006a84b) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xee62,	// (0x0006a84b) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x07a5,	// (0x0005c18e) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x07a5,	// (0x0005c18e) list_single_fs_bigclock_indicator_pane_t

0xd514,	// (0x00068efd) image3_infobar_fav_pane_ParamLimits

0xd514,	// (0x00068efd) image3_infobar_fav_pane

0xd524,	// (0x00068f0d) image3_infobar_loc_pane_ParamLimits

0xd524,	// (0x00068f0d) image3_infobar_loc_pane

0xd53a,	// (0x00068f23) image3_infobar_time_pane_ParamLimits

0xd53a,	// (0x00068f23) image3_infobar_time_pane

0xc42a,	// (0x00067e13) image3_infobar_time_pane_g1

0xd54a,	// (0x00068f33) image3_infobar_time_pane_t1

0xc42a,	// (0x00067e13) image3_infobar_loc_pane_g1

0xd558,	// (0x00068f41) image3_infobar_loc_pane_g2

0x0001,

0xfddd,	// (0x0006b7c6) image3_infobar_loc_pane_g

0xd560,	// (0x00068f49) image3_infobar_loc_pane_t1

0xc42a,	// (0x00067e13) image3_infobar_fav_pane_g1

0xd56e,	// (0x00068f57) image3_infobar_fav_pane_g2

0x0001,

0xfde2,	// (0x0006b7cb) image3_infobar_fav_pane_g

0xd576,	// (0x00068f5f) fs_bigclock_status_battery_pane

0xd57f,	// (0x00068f68) fs_bigclock_status_signal_pane

0xd588,	// (0x00068f71) fs_bigclock_status_title_pane

0xd591,	// (0x00068f7a) fs_bigclock_status_signal_pane_g1

0xd59a,	// (0x00068f83) fs_bigclock_status_signal_pane_g2

0x0001,

0xfde7,	// (0x0006b7d0) fs_bigclock_status_signal_pane_g

0xd5a2,	// (0x00068f8b) fs_bigclock_status_battery_pane_g1

0xd5ab,	// (0x00068f94) fs_bigclock_status_battery_pane_g2

0x0001,

0xfdec,	// (0x0006b7d5) fs_bigclock_status_battery_pane_g

0xd5b3,	// (0x00068f9c) fs_bigclock_status_title_pane_t1

0xc42a,	// (0x00067e13) main_fs_bigclock_clock_pane_g1

0xd5c1,	// (0x00068faa) main_fs_bigclock_clock_pane_g2

0xd5c1,	// (0x00068faa) main_fs_bigclock_clock_pane_g3

0xd5c1,	// (0x00068faa) main_fs_bigclock_clock_pane_g4

0x0003,

0xfdf1,	// (0x0006b7da) main_fs_bigclock_clock_pane_g

0xd5cd,	// (0x00068fb6) main_fs_bigclock_clock_pane_t1

0xd5db,	// (0x00068fc4) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdfa,	// (0x0006b7e3) main_fs_bigclock_clock_pane_t

0xd5ea,	// (0x00068fd3) list_single_fs_bigclock_indicator_pane_ParamLimits

0xd5ea,	// (0x00068fd3) list_single_fs_bigclock_indicator_pane

0x8f29,	// (0x00064912) list_single_fs_bigclock_pane_ParamLimits

0x8f29,	// (0x00064912) list_single_fs_bigclock_pane

0xd604,	// (0x00068fed) main_fs_bigclock_indicator_pane_t1

0xd613,	// (0x00068ffc) list_single_fs_bigclock_pane_g1

0xd61b,	// (0x00069004) list_single_fs_bigclock_pane_t1

0xc42a,	// (0x00067e13) main_fs_bigclock_swipe_pane_g1

0xd659,	// (0x00069042) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe0b,	// (0x0006b7f4) main_fs_bigclock_swipe_pane_g

0xd661,	// (0x0006904a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xd661,	// (0x0006904a) main_fs_bigclock_swipe_pane_t1

0x2b55,	// (0x0005e53e) call_type_pane_ParamLimits

0x0b67,	// (0x0005c550) main_btmg_pane

0xd2d8,	// (0x00068cc1) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd2d8,	// (0x00068cc1) list_single_cale_mrui_row_pane_g2

0x0001,

0xfd7e,	// (0x0006b767) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd7e,	// (0x0006b767) list_single_cale_mrui_row_pane_g

0xd429,	// (0x00068e12) list_recal_vselct_arw_lo_pane

0xd431,	// (0x00068e1a) list_recal_vselct_arw_up_pane

0x75c3,	// (0x00062fac) list_recal_vselct_pane

0xd67e,	// (0x00069067) btmg_button_pane

0x8f8f,	// (0x00064978) main_btmg_pane_g1

0x0b67,	// (0x0005c550) bg_button_pane_cp044

0xd688,	// (0x00069071) btmg_button_pane_t1

0xbeed,	// (0x000678d6) aid_listscroll_gen

0x0dea,	// (0x0005c7d3) main_cntbar_detail_pane

0xcffb,	// (0x000689e4) list_cmail_folder_pane

0xd00b,	// (0x000689f4) sp_fs_scroll_pane_cp03_ParamLimits

0x8f99,	// (0x00064982) list_single_fs_dyc_pane_cp01_ParamLimits

0x8f99,	// (0x00064982) list_single_fs_dyc_pane_cp01

0xd696,	// (0x0006907f) aid_size_cmail_indent

0xd69f,	// (0x00069088) list_single_dyc_row_pane_cp01

0x8fe4,	// (0x000649cd) cntbar_detail_list_pane_ParamLimits

0x8fe4,	// (0x000649cd) cntbar_detail_list_pane

0x9036,	// (0x00064a1f) main_cntbar_detail_cont_pane_ParamLimits

0x9036,	// (0x00064a1f) main_cntbar_detail_cont_pane

0x2a78,	// (0x0005e461) scroll_pane_cp032_ParamLimits

0x2a78,	// (0x0005e461) scroll_pane_cp032

0x904a,	// (0x00064a33) cntbar_detail_list_event_pane_ParamLimits

0x904a,	// (0x00064a33) cntbar_detail_list_event_pane

0x8ff6,	// (0x000649df) cntbar_detail_list_shct_pane

0xa3f1,	// (0x00065dda) aid_list_gen

0xd6a8,	// (0x00069091) aid_scroll

0xd6b1,	// (0x0006909a) aid_size_touch_scroll_bar

0xd6ba,	// (0x000690a3) aid_list_double

0xd6c3,	// (0x000690ac) aid_list_single

0x905a,	// (0x00064a43) aid_list_single_lg

0xd6cc,	// (0x000690b5) aid_list_z_g_a_sm

0xd6d4,	// (0x000690bd) aid_list_z_g_d

0xd6dc,	// (0x000690c5) aid_txt_z_prm

0x9063,	// (0x00064a4c) aid_txt_z_prm_cp01

0x9071,	// (0x00064a5a) aid_txt_z_sec

0x907f,	// (0x00064a68) main_cntbar_detail_cont_pane_g1_ParamLimits

0x907f,	// (0x00064a68) main_cntbar_detail_cont_pane_g1

0x9093,	// (0x00064a7c) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9093,	// (0x00064a7c) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe10,	// (0x0006b7f9) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe10,	// (0x0006b7f9) main_cntbar_detail_cont_pane_g

0xd6ea,	// (0x000690d3) main_cntbar_detail_cont_pane_t1

0xd6f8,	// (0x000690e1) main_cntbar_detail_cont_pane_t2

0xd706,	// (0x000690ef) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe15,	// (0x0006b7fe) main_cntbar_detail_cont_pane_t

0x90a3,	// (0x00064a8c) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90a3,	// (0x00064a8c) cell_cntbar_detail_list_shct_pane

0xd714,	// (0x000690fd) cntbar_detail_list_shct_pane_g1

0xd71d,	// (0x00069106) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe1c,	// (0x0006b805) cntbar_detail_list_shct_pane_g

0x90b5,	// (0x00064a9e) cntbar_detail_list_event_pane_g1_ParamLimits

0x90b5,	// (0x00064a9e) cntbar_detail_list_event_pane_g1

0x90c1,	// (0x00064aaa) cntbar_detail_list_event_pane_g2_ParamLimits

0x90c1,	// (0x00064aaa) cntbar_detail_list_event_pane_g2

0x0005,

0xfe21,	// (0x0006b80a) cntbar_detail_list_event_pane_g_ParamLimits

0xfe21,	// (0x0006b80a) cntbar_detail_list_event_pane_g

0x912f,	// (0x00064b18) cntbar_detail_list_event_pane_t1_ParamLimits

0x912f,	// (0x00064b18) cntbar_detail_list_event_pane_t1

0x9144,	// (0x00064b2d) cntbar_detail_list_event_pane_t2_ParamLimits

0x9144,	// (0x00064b2d) cntbar_detail_list_event_pane_t2

0x0002,

0xfe2e,	// (0x0006b817) cntbar_detail_list_event_pane_t_ParamLimits

0xfe2e,	// (0x0006b817) cntbar_detail_list_event_pane_t

0xc42a,	// (0x00067e13) cell_cntbar_detail_list_shct_pane_g1

0x2ef9,	// (0x0005e8e2) navi_pane_mv_g3

0x0dea,	// (0x0005c7d3) main_cntbar_detail_pane_ParamLimits

0x0b67,	// (0x0005c550) main_notif_wgt_pane

0xda62,	// (0x0006944b) aid_tch_main_mp4_pane_g4

0xdc16,	// (0x000695ff) popup_slider_window_cp02

0xd420,	// (0x00068e09) list_recal_day_event_pane

0x8fb4,	// (0x0006499d) cntbar_detail_btn_pane_ParamLimits

0x8fb4,	// (0x0006499d) cntbar_detail_btn_pane

0x8fcc,	// (0x000649b5) cntbar_detail_btn_pane_cp01_ParamLimits

0x8fcc,	// (0x000649b5) cntbar_detail_btn_pane_cp01

0x8ff6,	// (0x000649df) cntbar_detail_list_shct_pane_ParamLimits

0x9006,	// (0x000649ef) cntbar_detail_pane_g1_ParamLimits

0x9006,	// (0x000649ef) cntbar_detail_pane_g1

0x901a,	// (0x00064a03) cntbar_detail_pane_t1_ParamLimits

0x901a,	// (0x00064a03) cntbar_detail_pane_t1

0x90cd,	// (0x00064ab6) cntbar_detail_list_event_pane_g3_ParamLimits

0x90cd,	// (0x00064ab6) cntbar_detail_list_event_pane_g3

0x90e5,	// (0x00064ace) cntbar_detail_list_event_pane_g4_ParamLimits

0x90e5,	// (0x00064ace) cntbar_detail_list_event_pane_g4

0x90fd,	// (0x00064ae6) cntbar_detail_list_event_pane_g5_ParamLimits

0x90fd,	// (0x00064ae6) cntbar_detail_list_event_pane_g5

0x9115,	// (0x00064afe) cntbar_detail_list_event_pane_g6_ParamLimits

0x9115,	// (0x00064afe) cntbar_detail_list_event_pane_g6

0x9159,	// (0x00064b42) cntbar_detail_list_event_pane_t3_ParamLimits

0x9159,	// (0x00064b42) cntbar_detail_list_event_pane_t3

0x916b,	// (0x00064b54) popup_notif_wgt_window_ParamLimits

0x916b,	// (0x00064b54) popup_notif_wgt_window

0x9184,	// (0x00064b6d) popup_submenu_window_cp01_ParamLimits

0x9184,	// (0x00064b6d) popup_submenu_window_cp01

0xaa88,	// (0x00066471) bg_popup_window_pane_cp10

0xd726,	// (0x0006910f) listscroll_notif_wgt_pane

0xd730,	// (0x00069119) list_notif_wgt_window

0xd739,	// (0x00069122) scroll_pane_cp033

0xd742,	// (0x0006912b) list_notif_wgt_row_pane_ParamLimits

0xd742,	// (0x0006912b) list_notif_wgt_row_pane

0xd756,	// (0x0006913f) aid_size_list_notif_wgt_del

0xd75f,	// (0x00069148) list_notif_wgt_row_pane_g1

0xd767,	// (0x00069150) list_notif_wgt_row_pane_g2

0xd76f,	// (0x00069158) list_notif_wgt_row_pane_g3

0x0002,

0xfe35,	// (0x0006b81e) list_notif_wgt_row_pane_g

0xd778,	// (0x00069161) list_notif_wgt_row_pane_t1

0xd786,	// (0x0006916f) list_notif_wgt_row_pane_t2

0xd794,	// (0x0006917d) list_notif_wgt_row_pane_t3

0x0002,

0xfe3c,	// (0x0006b825) list_notif_wgt_row_pane_t

0xe281,	// (0x00069c6a) list_recal_day_event_pane_g1

0xd7a2,	// (0x0006918b) list_recal_day_event_pane_t1

0x0b67,	// (0x0005c550) bg_button_pane_cp045

0xd7b1,	// (0x0006919a) cntbar_detail_btn_pane_t1

0xbef5,	// (0x000678de) main_callh_pane_ParamLimits

0xbef5,	// (0x000678de) main_callh_pane

0x0b67,	// (0x0005c550) main_coverflow0_pane

0x0b67,	// (0x0005c550) main_wgtman_pane

0x81db,	// (0x00063bc4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x81db,	// (0x00063bc4) main_fs_bigclock_unlock_btn_pane

0xcfdd,	// (0x000689c6) bg_button_pane_cp16

0x89dc,	// (0x000643c5) cell_tport_appsw_pane_g3

0x9196,	// (0x00064b7f) cf0_flow_pane_ParamLimits

0x9196,	// (0x00064b7f) cf0_flow_pane

0xd7bf,	// (0x000691a8) listscroll_cf0_pane

0xd7c8,	// (0x000691b1) main_cf0_pane_g1

0x91ab,	// (0x00064b94) main_cf0_pane_t1_ParamLimits

0x91ab,	// (0x00064b94) main_cf0_pane_t1

0x91c2,	// (0x00064bab) main_cf0_pane_t2_ParamLimits

0x91c2,	// (0x00064bab) main_cf0_pane_t2

0x0001,

0xfe43,	// (0x0006b82c) main_cf0_pane_t_ParamLimits

0xfe43,	// (0x0006b82c) main_cf0_pane_t

0xd7d2,	// (0x000691bb) scroll_pane_cp11

0x91d9,	// (0x00064bc2) cf0_flow_pane_g1

0x91e5,	// (0x00064bce) cf0_flow_pane_g2

0x0001,

0xfe48,	// (0x0006b831) cf0_flow_pane_g

0x91f1,	// (0x00064bda) cf0_flow_pane_t1

0x0b67,	// (0x0005c550) main_call6_pane

0x0b67,	// (0x0005c550) main_calllock_pane

0x9203,	// (0x00064bec) call6_btn_grp_pane_ParamLimits

0x9203,	// (0x00064bec) call6_btn_grp_pane

0x921f,	// (0x00064c08) call6_pane_g1_ParamLimits

0x921f,	// (0x00064c08) call6_pane_g1

0x9235,	// (0x00064c1e) popup_call6_1st_window_ParamLimits

0x9235,	// (0x00064c1e) popup_call6_1st_window

0x9246,	// (0x00064c2f) popup_call6_2nd_window_ParamLimits

0x9246,	// (0x00064c2f) popup_call6_2nd_window

0x9257,	// (0x00064c40) cell_call6_btn_pane_ParamLimits

0x9257,	// (0x00064c40) cell_call6_btn_pane

0xaa88,	// (0x00066471) bg_popup_call2_in_pane_cp03

0xd7dd,	// (0x000691c6) popup_call6_1st_window_g1

0xd7e5,	// (0x000691ce) popup_call6_1st_window_g2

0xd7ed,	// (0x000691d6) popup_call6_1st_window_g3

0x0002,

0xfe4d,	// (0x0006b836) popup_call6_1st_window_g

0xd7f5,	// (0x000691de) popup_call6_1st_window_t1

0xd804,	// (0x000691ed) popup_call6_1st_window_t2

0xd814,	// (0x000691fd) popup_call6_1st_window_t3

0x0002,

0xfe54,	// (0x0006b83d) popup_call6_1st_window_t

0xaa88,	// (0x00066471) bg_popup_call2_in_pane_cp04

0xd7dd,	// (0x000691c6) popup_call6_2nd_window_g1

0xd7e5,	// (0x000691ce) popup_call6_2nd_window_g2

0xd7ed,	// (0x000691d6) popup_call6_2nd_window_g3

0x0002,

0xfe4d,	// (0x0006b836) popup_call6_2nd_window_g

0xd7f5,	// (0x000691de) popup_call6_2nd_window_t1

0x0b67,	// (0x0005c550) bg_button_pane_cp15

0xd824,	// (0x0006920d) cell_call6_btn_pane_g1

0xd82d,	// (0x00069216) cell_call6_btn_pane_t1

0x926b,	// (0x00064c54) listscroll_wgtman_pane_ParamLimits

0x926b,	// (0x00064c54) listscroll_wgtman_pane

0x928e,	// (0x00064c77) wgtman_btn_pane_ParamLimits

0x928e,	// (0x00064c77) wgtman_btn_pane

0xa94e,	// (0x00066337) aid_scroll_copy1

0xd83c,	// (0x00069225) list_wgtman_pane

0x92d1,	// (0x00064cba) wgtman_btn_pane_g1_ParamLimits

0x92d1,	// (0x00064cba) wgtman_btn_pane_g1

0x92fd,	// (0x00064ce6) wgtman_btn_pane_t1_ParamLimits

0x92fd,	// (0x00064ce6) wgtman_btn_pane_t1

0xd846,	// (0x0006922f) wgtman_btn_pane_t2_ParamLimits

0xd846,	// (0x0006922f) wgtman_btn_pane_t2

0x0001,

0xfe5b,	// (0x0006b844) wgtman_btn_pane_t_ParamLimits

0xfe5b,	// (0x0006b844) wgtman_btn_pane_t

0xd85d,	// (0x00069246) listrow_wgtman_pane_ParamLimits

0xd85d,	// (0x00069246) listrow_wgtman_pane

0xd871,	// (0x0006925a) listrow_wgtman_pane_g1

0x933a,	// (0x00064d23) listrow_wgtman_pane_g2

0x0001,

0xfe60,	// (0x0006b849) listrow_wgtman_pane_g

0xd87a,	// (0x00069263) listrow_wgtman_pane_t1

0xd888,	// (0x00069271) listrow_wgtman_pane_t2

0x0001,

0xfe65,	// (0x0006b84e) listrow_wgtman_pane_t

0xd896,	// (0x0006927f) wait_bar_pane_cp09

0xd89e,	// (0x00069287) main_calllock_btn_pane

0xd8a8,	// (0x00069291) main_calllock_pane_g1

0x0b67,	// (0x0005c550) bg_button_pane_cp17

0xd8b4,	// (0x0006929d) main_calllock_btn_pane_g1

0xd8bd,	// (0x000692a6) main_calllock_btn_pane_t1

0x0b67,	// (0x0005c550) main_dialer3_pane

0x0b67,	// (0x0005c550) main_fmrd2_pane

0xc42a,	// (0x00067e13) main_fs_bigclock_unlock_btn_pane_g1

0xd8d4,	// (0x000692bd) main_fs_bigclock_unlock_btn_pane_t1

0x9344,	// (0x00064d2d) area_fmrd2_info_pane_ParamLimits

0x9344,	// (0x00064d2d) area_fmrd2_info_pane

0x9357,	// (0x00064d40) area_fmrd2_visual_pane_ParamLimits

0x9357,	// (0x00064d40) area_fmrd2_visual_pane

0x9365,	// (0x00064d4e) fmrd2_indi_pane_ParamLimits

0x9365,	// (0x00064d4e) fmrd2_indi_pane

0x9372,	// (0x00064d5b) area_fmrd2_visual_pane_g1

0x937a,	// (0x00064d63) area_fmrd2_visual_pane_t1

0x938a,	// (0x00064d73) area_fmrd2_visual_pane_t2

0x939a,	// (0x00064d83) area_fmrd2_visual_pane_t3

0x0002,

0xfe6f,	// (0x0006b858) area_fmrd2_visual_pane_t

0x93aa,	// (0x00064d93) area_fmrd2_info_pane_g1

0x93b2,	// (0x00064d9b) area_fmrd2_info_pane_t1

0x93c2,	// (0x00064dab) area_fmrd2_info_pane_t2

0x93d2,	// (0x00064dbb) area_fmrd2_info_pane_t3

0x93e2,	// (0x00064dcb) area_fmrd2_info_pane_t4

0x0003,

0xfe76,	// (0x0006b85f) area_fmrd2_info_pane_t

0x93f2,	// (0x00064ddb) fmrd2_indi_pane_t1

0x9402,	// (0x00064deb) fmrd2_indi_pane_t2

0x9412,	// (0x00064dfb) fmrd2_indi_pane_t3

0x0002,

0xfe7f,	// (0x0006b868) fmrd2_indi_pane_t

0xedd1,	// (0x0006a7ba) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xedd1,	// (0x0006a7ba) list_single_fs_bigclock_indicator_pane_g5

0xee77,	// (0x0006a860) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xee77,	// (0x0006a860) list_single_fs_bigclock_indicator_pane_t5

0x8ba3,	// (0x0006458c) aid_cell_bcale_month_pane_ParamLimits

0x8ba3,	// (0x0006458c) aid_cell_bcale_month_pane

0x8bb5,	// (0x0006459e) bcale_month_pane_ParamLimits

0x8bb5,	// (0x0006459e) bcale_month_pane

0x8bcd,	// (0x000645b6) bcale_preview_pane_ParamLimits

0x8bcd,	// (0x000645b6) bcale_preview_pane

0xd61b,	// (0x00069004) list_single_fs_bigclock_pane_t1_ParamLimits

0xd635,	// (0x0006901e) list_single_fs_bigclock_pane_t2_ParamLimits

0xd635,	// (0x0006901e) list_single_fs_bigclock_pane_t2

0x0001,

0xfe06,	// (0x0006b7ef) list_single_fs_bigclock_pane_t_ParamLimits

0xfe06,	// (0x0006b7ef) list_single_fs_bigclock_pane_t

0xd8cc,	// (0x000692b5) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe6a,	// (0x0006b853) main_fs_bigclock_unlock_btn_pane_g

0x9422,	// (0x00064e0b) aid_dia3_key_size_ParamLimits

0x9422,	// (0x00064e0b) aid_dia3_key_size

0x9431,	// (0x00064e1a) aid_dia3_listrow_size_ParamLimits

0x9431,	// (0x00064e1a) aid_dia3_listrow_size

0x943f,	// (0x00064e28) dia3_keypad_fun_pane_ParamLimits

0x943f,	// (0x00064e28) dia3_keypad_fun_pane

0x945b,	// (0x00064e44) dia3_keypad_num_pane_ParamLimits

0x945b,	// (0x00064e44) dia3_keypad_num_pane

0x9474,	// (0x00064e5d) dia3_listscroll_pane_ParamLimits

0x9474,	// (0x00064e5d) dia3_listscroll_pane

0x9489,	// (0x00064e72) dia3_numentry_pane_ParamLimits

0x9489,	// (0x00064e72) dia3_numentry_pane

0xd8e2,	// (0x000692cb) dia3_list_pane

0xd8ed,	// (0x000692d6) scroll_pane_cp12

0x0b67,	// (0x0005c550) bg_dia3_numentry_pane

0xd8f8,	// (0x000692e1) dia3_numentry_pane_t1

0x949c,	// (0x00064e85) cell_dia3_key_num_pane

0x94a4,	// (0x00064e8d) cell_dia3_key0_fun_pane_ParamLimits

0x94a4,	// (0x00064e8d) cell_dia3_key0_fun_pane

0x94b8,	// (0x00064ea1) cell_dia3_key1_fun_pane_ParamLimits

0x94b8,	// (0x00064ea1) cell_dia3_key1_fun_pane

0x94d0,	// (0x00064eb9) dia3_listrow_pane

0xead7,	// (0x0006a4c0) bg_dia3_numentry_pane_g1

0x0b67,	// (0x0005c550) bg_button_pane_cp21

0xd907,	// (0x000692f0) cell_dia3_key_num_pane_t1

0xd915,	// (0x000692fe) cell_dia3_key_num_pane_t2

0xd924,	// (0x0006930d) cell_dia3_key_num_pane_t3

0xd933,	// (0x0006931c) cell_dia3_key_num_pane_t4

0x0003,

0xfe86,	// (0x0006b86f) cell_dia3_key_num_pane_t

0x0b67,	// (0x0005c550) bg_button_pane_cp19

0x94e2,	// (0x00064ecb) cell_dia3_key0_fun_pane_g1

0x0b67,	// (0x0005c550) bg_button_pane_cp20

0x94ea,	// (0x00064ed3) cell_dia3_key1_fun_pane_g1

0x94f2,	// (0x00064edb) area_left_week_number_pane

0x94fb,	// (0x00064ee4) area_top_day_name_pane

0x9504,	// (0x00064eed) frame_month_view_pane

0x9510,	// (0x00064ef9) grid_month_view_pane

0x951a,	// (0x00064f03) cell_top_day_name_pane_ParamLimits

0x951a,	// (0x00064f03) cell_top_day_name_pane

0x9534,	// (0x00064f1d) cell_area_left_week_number_pane_ParamLimits

0x9534,	// (0x00064f1d) cell_area_left_week_number_pane

0x954a,	// (0x00064f33) cell_month_view_pane_ParamLimits

0x954a,	// (0x00064f33) cell_month_view_pane

0xd942,	// (0x0006932b) frm_month_g1

0x9569,	// (0x00064f52) frm_month_g2

0x9573,	// (0x00064f5c) frm_month_g3

0x957d,	// (0x00064f66) frm_month_g4

0x9587,	// (0x00064f70) frm_month_g5

0x9591,	// (0x00064f7a) frm_month_g6

0x959d,	// (0x00064f86) frm_month_g7

0xd94b,	// (0x00069334) frm_month_g8

0x95a9,	// (0x00064f92) frm_month_g9

0x95b2,	// (0x00064f9b) frm_month_g10

0x95bb,	// (0x00064fa4) frm_month_g11

0x95c4,	// (0x00064fad) frm_month_g12

0x95cd,	// (0x00064fb6) frm_month_g13

0x95d6,	// (0x00064fbf) frm_month_g14

0x95df,	// (0x00064fc8) frm_month_g15

0x95ea,	// (0x00064fd3) frm_month_g16

0x000f,

0xfe8f,	// (0x0006b878) frm_month_g

0x95f5,	// (0x00064fde) cell_top_day_name_pane_t1

0x9604,	// (0x00064fed) cell_area_left_week_number_pane_g1

0x95f5,	// (0x00064fde) cell_area_left_week_number_pane_t1

0xc42a,	// (0x00067e13) cell_month_view_pane_g1

0x960c,	// (0x00064ff5) cell_month_view_pane_t1

0x0b67,	// (0x0005c550) main_fps_pane

0xf078,	// (0x0006aa61) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xf078,	// (0x0006aa61) cmail_ddmenu_btn02_pane_cp1

0xf094,	// (0x0006aa7d) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xf094,	// (0x0006aa7d) cmail_ddmenu_btn02_pane_cp2

0x8e8f,	// (0x00064878) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e8f,	// (0x00064878) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfdb7,	// (0x0006b7a0) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfdb7,	// (0x0006b7a0) cmail_ddmenu_btn02_pane_g

0x8ead,	// (0x00064896) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ead,	// (0x00064896) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfdbc,	// (0x0006b7a5) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfdbc,	// (0x0006b7a5) cmail_ddmenu_btn02_pane_t

0x961b,	// (0x00065004) fps_text_pane_ParamLimits

0x961b,	// (0x00065004) fps_text_pane

0x9632,	// (0x0006501b) main_fps_pane_g1_ParamLimits

0x9632,	// (0x0006501b) main_fps_pane_g1

0x964a,	// (0x00065033) wait_bar_pane_cp010_ParamLimits

0x964a,	// (0x00065033) wait_bar_pane_cp010

0x965d,	// (0x00065046) fps_text_pane_t1_ParamLimits

0x965d,	// (0x00065046) fps_text_pane_t1

0xea4c,	// (0x0006a435) cam4_image_uncrop_pane_g1

0xea55,	// (0x0006a43e) cam4_image_uncrop_pane_g2

0x62c4,	// (0x00061cad) cam4_image_uncrop_pane_g3

0x62cd,	// (0x00061cb6) cam4_image_uncrop_pane_g4

0x0003,

0xf90d,	// (0x0006b2f6) cam4_image_uncrop_pane_g

0x94d0,	// (0x00064eb9) dia3_listrow_pane_ParamLimits

0x0b67,	// (0x0005c550) main_phob2_pane

0x89a3,	// (0x0006438c) cell_tport_appsw_pane_cp02_ParamLimits

0x89a3,	// (0x0006438c) cell_tport_appsw_pane_cp02

0x89b7,	// (0x000643a0) cell_tport_appsw_pane_cp03_ParamLimits

0x89b7,	// (0x000643a0) cell_tport_appsw_pane_cp03

0x0b67,	// (0x0005c550) phob2_contact_card_pane

0x0b67,	// (0x0005c550) phob2_listscroll_pane

0xd954,	// (0x0006933d) phob2_list_pane

0xd95c,	// (0x00069345) scroll_pane_cp034

0x9675,	// (0x0006505e) phob2_cc_data_pane_ParamLimits

0x9675,	// (0x0006505e) phob2_cc_data_pane

0x9696,	// (0x0006507f) phob2_cc_listscroll_pane_ParamLimits

0x9696,	// (0x0006507f) phob2_cc_listscroll_pane

0x96b8,	// (0x000650a1) list_double_large_graphic_phob2_pane_ParamLimits

0x96b8,	// (0x000650a1) list_double_large_graphic_phob2_pane

0x96cd,	// (0x000650b6) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x96cd,	// (0x000650b6) list_double_large_graphic_phob2_pane_g1

0x96da,	// (0x000650c3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x96da,	// (0x000650c3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfeb0,	// (0x0006b899) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfeb0,	// (0x0006b899) list_double_large_graphic_phob2_pane_g

0x96e6,	// (0x000650cf) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x96e6,	// (0x000650cf) list_double_large_graphic_phob2_pane_t1

0x96fb,	// (0x000650e4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x96fb,	// (0x000650e4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfeb5,	// (0x0006b89e) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfeb5,	// (0x0006b89e) list_double_large_graphic_phob2_pane_t

0x0b67,	// (0x0005c550) list_highlight_pane_cp024

0xd964,	// (0x0006934d) phob2_cc_button_pane

0x970d,	// (0x000650f6) phob2_cc_data_pane_g1_ParamLimits

0x970d,	// (0x000650f6) phob2_cc_data_pane_g1

0x9723,	// (0x0006510c) phob2_cc_data_pane_g2_ParamLimits

0x9723,	// (0x0006510c) phob2_cc_data_pane_g2

0x0001,

0xfeba,	// (0x0006b8a3) phob2_cc_data_pane_g_ParamLimits

0xfeba,	// (0x0006b8a3) phob2_cc_data_pane_g

0x9737,	// (0x00065120) phob2_cc_data_pane_t1_ParamLimits

0x9737,	// (0x00065120) phob2_cc_data_pane_t1

0x9751,	// (0x0006513a) phob2_cc_data_pane_t2_ParamLimits

0x9751,	// (0x0006513a) phob2_cc_data_pane_t2

0x976b,	// (0x00065154) phob2_cc_data_pane_t3_ParamLimits

0x976b,	// (0x00065154) phob2_cc_data_pane_t3

0x0002,

0xfebf,	// (0x0006b8a8) phob2_cc_data_pane_t_ParamLimits

0xfebf,	// (0x0006b8a8) phob2_cc_data_pane_t

0xd96c,	// (0x00069355) phob2_cc_list_pane_ParamLimits

0xd96c,	// (0x00069355) phob2_cc_list_pane

0xe64a,	// (0x0006a033) scroll_pane_cp035_ParamLimits

0xe64a,	// (0x0006a033) scroll_pane_cp035

0x0dea,	// (0x0005c7d3) bg_button_pane_cp033

0xd978,	// (0x00069361) phob2_cc_button_pane_g1

0xd984,	// (0x0006936d) phob2_cc_button_pane_t1

0xd999,	// (0x00069382) phob2_cc_button_pane_t2

0x0001,

0xfec6,	// (0x0006b8af) phob2_cc_button_pane_t

0x9785,	// (0x0006516e) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9785,	// (0x0006516e) list_double_large_graphic_phob2_cc_pane

0x979a,	// (0x00065183) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x979a,	// (0x00065183) list_double_large_graphic_phob2_cc_pane_g1

0x97a6,	// (0x0006518f) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x97a6,	// (0x0006518f) list_double_large_graphic_phob2_cc_pane_g2

0x97b2,	// (0x0006519b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x97b2,	// (0x0006519b) list_double_large_graphic_phob2_cc_pane_g3

0x97be,	// (0x000651a7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x97be,	// (0x000651a7) list_double_large_graphic_phob2_cc_pane_g4

0x97ca,	// (0x000651b3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x97ca,	// (0x000651b3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfecb,	// (0x0006b8b4) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfecb,	// (0x0006b8b4) list_double_large_graphic_phob2_cc_pane_g

0x97d6,	// (0x000651bf) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x97d6,	// (0x000651bf) list_double_large_graphic_phob2_cc_pane_t1

0x97ff,	// (0x000651e8) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x97ff,	// (0x000651e8) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfed6,	// (0x0006b8bf) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfed6,	// (0x0006b8bf) list_double_large_graphic_phob2_cc_pane_t

0xd9ab,	// (0x00069394) list_highlight_pane_cp025_ParamLimits

0xd9ab,	// (0x00069394) list_highlight_pane_cp025

0x0dea,	// (0x0005c7d3) bg_button_pane_cp033_ParamLimits

0xd978,	// (0x00069361) phob2_cc_button_pane_g1_ParamLimits

0xd984,	// (0x0006936d) phob2_cc_button_pane_t1_ParamLimits

0xd999,	// (0x00069382) phob2_cc_button_pane_t2_ParamLimits

0xfec6,	// (0x0006b8af) phob2_cc_button_pane_t_ParamLimits

0x0df8,	// (0x0005c7e1) popup_wgtman_window

0xe132,	// (0x00069b1b) scroll_pane_cp038

0x92b3,	// (0x00064c9c) wgtman_btn_pane_cp_01_ParamLimits

0x92b3,	// (0x00064c9c) wgtman_btn_pane_cp_01

0xd9b9,	// (0x000693a2) wgtman_content_pane

0xd9c2,	// (0x000693ab) wgtman_heading_pane

0x0b67,	// (0x0005c550) bg_heading_pane_cp02

0xd9cb,	// (0x000693b4) wgtman_heading_pane_g1

0xd9d3,	// (0x000693bc) wgtman_heading_pane_t1

0xd9e1,	// (0x000693ca) scroll_pane_cp036

0xd9e9,	// (0x000693d2) wgtman_list_pane

0xef59,	// (0x0006a942) wgtman_list_pane_t1_ParamLimits

0xef59,	// (0x0006a942) wgtman_list_pane_t1

0xdc74,	// (0x0006965d) cam4_grid_pane

0x7029,	// (0x00062a12) bg_button_pane_cp015_ParamLimits

0x703d,	// (0x00062a26) bg_button_pane_cp016_ParamLimits

0x7050,	// (0x00062a39) bg_button_pane_cp017_ParamLimits

0x70a8,	// (0x00062a91) popup_vitu2_query_window_g3_ParamLimits

0x70a8,	// (0x00062a91) popup_vitu2_query_window_g3

0x7165,	// (0x00062b4e) popup_vitu2_query_window_t6_ParamLimits

0x7165,	// (0x00062b4e) popup_vitu2_query_window_t6

0x7190,	// (0x00062b79) popup_vitu2_query_window_t7_ParamLimits

0x7190,	// (0x00062b79) popup_vitu2_query_window_t7

0xea4c,	// (0x0006a435) cam4_grid_pane_g1

0xea55,	// (0x0006a43e) cam4_grid_pane_g2

0xd9f1,	// (0x000693da) cam4_grid_pane_g3

0xd9fa,	// (0x000693e3) cam4_grid_pane_g4

0x0003,

0xfedb,	// (0x0006b8c4) cam4_grid_pane_g

0x1c72,	// (0x0005d65b) aid_placing_vt_slider_lsc_ParamLimits

0x1f62,	// (0x0005d94b) vidtel_button_pane_ParamLimits

0x1f62,	// (0x0005d94b) vidtel_button_pane

0x0b67,	// (0x0005c550) bg_button_pane_cp034

0x9828,	// (0x00065211) vidtel_button_pane_g1

0xda05,	// (0x000693ee) vidtel_button_pane_t1

0xe25f,	// (0x00069c48) aid_size_vtel_slider_touch

0xe64a,	// (0x0006a033) scroll_pane_cp039

0xeb15,	// (0x0006a4fe) ncim_query_button_pane_cp01_ParamLimits

0xeb34,	// (0x0006a51d) ncimui_query_pane_g1_ParamLimits

0x0dea,	// (0x0005c7d3) input_focus_pane_cp012_ParamLimits

0xeb59,	// (0x0006a542) ncim_query_entry_pane_t1_ParamLimits

0xe64a,	// (0x0006a033) scroll_pane_cp039_ParamLimits
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Small

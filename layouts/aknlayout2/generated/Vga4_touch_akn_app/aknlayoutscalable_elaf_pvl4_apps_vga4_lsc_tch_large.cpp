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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0008d932 };

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
0x0a26,	// (0x0008e358) Screen

0x0a32,	// (0x0008e364) application_window

0x0a86,	// (0x0008e3b8) area_bottom_pane_ParamLimits

0x0a86,	// (0x0008e3b8) area_bottom_pane

0x0abf,	// (0x0008e3f1) area_top_pane_ParamLimits

0x0abf,	// (0x0008e3f1) area_top_pane

0x99c7,	// (0x000972f9) call_video_uplink_pane_ParamLimits

0x99c7,	// (0x000972f9) call_video_uplink_pane

0x0b4d,	// (0x0008e47f) main_pane_ParamLimits

0x0b4d,	// (0x0008e47f) main_pane

0xc7f1,	// (0x0009a123) context_pane

0x44a3,	// (0x00091dd5) navi_pane

0x44d3,	// (0x00091e05) popup_cale_events_window_ParamLimits

0x44d3,	// (0x00091e05) popup_cale_events_window

0xc804,	// (0x0009a136) popup_mup_playback_window

0x44eb,	// (0x00091e1d) signal_pane

0xa148,	// (0x00097a7a) main_browser_pane

0xb37b,	// (0x00098cad) main_burst_pane

0x41a5,	// (0x00091ad7) main_calc_pane

0xc794,	// (0x0009a0c6) main_cale_day_pane

0x118f,	// (0x0008eac1) main_cale_month_pane

0xc794,	// (0x0009a0c6) main_cale_week_pane

0xb37b,	// (0x00098cad) main_call_pane

0x9e06,	// (0x00097738) main_call_poc_pane

0xb37b,	// (0x00098cad) main_camera_pane

0xb37b,	// (0x00098cad) main_chi_dic_pane

0xb21d,	// (0x00098b4f) main_clock_pane

0x9e06,	// (0x00097738) main_fmradio_pane

0xb37b,	// (0x00098cad) main_graph_messa_pane

0x9e06,	// (0x00097738) main_help_pane

0xa148,	// (0x00097a7a) main_im_pane

0xa061,	// (0x00097993) main_image_pane_ParamLimits

0xa061,	// (0x00097993) main_image_pane

0x9e06,	// (0x00097738) main_location2_pane

0xb37b,	// (0x00098cad) main_location_pane

0xa061,	// (0x00097993) main_messa_pane

0x9e06,	// (0x00097738) main_mp2_pane

0xb37b,	// (0x00098cad) main_mp_pane

0x9e06,	// (0x00097738) main_msg_pane

0x9e06,	// (0x00097738) main_mup_eq_pane

0x9e06,	// (0x00097738) main_mup_pane

0xa148,	// (0x00097a7a) main_notes_pane

0x9e06,	// (0x00097738) main_pec_pane

0x9e06,	// (0x00097738) main_phob_pane

0x9e06,	// (0x00097738) main_pinb_pane

0x9e06,	// (0x00097738) main_postcard_pane

0x9e06,	// (0x00097738) main_qdial_pane

0xb37b,	// (0x00098cad) main_skin_pane

0x9e06,	// (0x00097738) main_smil2_pane

0xb37b,	// (0x00098cad) main_smil_pane

0xb37b,	// (0x00098cad) main_video_pane

0xb37b,	// (0x00098cad) main_video_tele_pane

0xa061,	// (0x00097993) main_viewer_pane_ParamLimits

0xa061,	// (0x00097993) main_viewer_pane

0xb37b,	// (0x00098cad) main_vorec_pane

0x41fb,	// (0x00091b2d) popup_blid_sat_info_window_ParamLimits

0x41fb,	// (0x00091b2d) popup_blid_sat_info_window

0x425f,	// (0x00091b91) popup_dyc_status_message_window_ParamLimits

0x425f,	// (0x00091b91) popup_dyc_status_message_window

0x4279,	// (0x00091bab) popup_grid_large_graphic_window_ParamLimits

0x4279,	// (0x00091bab) popup_grid_large_graphic_window

0x433b,	// (0x00091c6d) popup_loc_request_window_ParamLimits

0x433b,	// (0x00091c6d) popup_loc_request_window

0x4477,	// (0x00091da9) popup_wml_address_window_ParamLimits

0x4477,	// (0x00091da9) popup_wml_address_window

0x3fe3,	// (0x00091915) call_muted_g1

0x3c77,	// (0x000915a9) popup_call_audio_conf_window_ParamLimits

0x3c77,	// (0x000915a9) popup_call_audio_conf_window

0x3ff3,	// (0x00091925) popup_call_audio_first_window_ParamLimits

0x3ff3,	// (0x00091925) popup_call_audio_first_window

0x4069,	// (0x0009199b) popup_call_audio_in_window_ParamLimits

0x4069,	// (0x0009199b) popup_call_audio_in_window

0x40a5,	// (0x000919d7) popup_call_audio_out_window_ParamLimits

0x40a5,	// (0x000919d7) popup_call_audio_out_window

0x40df,	// (0x00091a11) popup_call_audio_second_window_ParamLimits

0x40df,	// (0x00091a11) popup_call_audio_second_window

0x4135,	// (0x00091a67) popup_call_audio_wait_window_ParamLimits

0x4135,	// (0x00091a67) popup_call_audio_wait_window

0x416a,	// (0x00091a9c) popup_number_entry_window_ParamLimits

0x416a,	// (0x00091a9c) popup_number_entry_window

0x99f3,	// (0x00097325) bg_popup_call_pane_cp05_ParamLimits

0x99f3,	// (0x00097325) bg_popup_call_pane_cp05

0x9a13,	// (0x00097345) popup_number_entry_window_t1

0x9a26,	// (0x00097358) popup_number_entry_window_t2

0x9a38,	// (0x0009736a) popup_number_entry_window_t3

0x0003,

0xf0c6,	// (0x0009c9f8) popup_number_entry_window_t

0x9a4a,	// (0x0009737c) text_title_cp2

0x9a5d,	// (0x0009738f) bg_popup_call_pane_cp_ParamLimits

0x9a5d,	// (0x0009738f) bg_popup_call_pane_cp

0x9a6b,	// (0x0009739d) call_thumbnail_pane

0x9a73,	// (0x000973a5) popup_call_audio_in_window_g1_ParamLimits

0x9a73,	// (0x000973a5) popup_call_audio_in_window_g1

0x9a7f,	// (0x000973b1) popup_call_audio_in_window_g2_ParamLimits

0x9a7f,	// (0x000973b1) popup_call_audio_in_window_g2

0x9a8b,	// (0x000973bd) popup_call_audio_in_window_g3_ParamLimits

0x9a8b,	// (0x000973bd) popup_call_audio_in_window_g3

0x0002,

0xf0cf,	// (0x0009ca01) popup_call_audio_in_window_g_ParamLimits

0xf0cf,	// (0x0009ca01) popup_call_audio_in_window_g

0x9a97,	// (0x000973c9) popup_call_audio_in_window_t1_ParamLimits

0x9a97,	// (0x000973c9) popup_call_audio_in_window_t1

0x9ab3,	// (0x000973e5) popup_call_audio_in_window_t2_ParamLimits

0x9ab3,	// (0x000973e5) popup_call_audio_in_window_t2

0x9acf,	// (0x00097401) popup_call_audio_in_window_t3_ParamLimits

0x9acf,	// (0x00097401) popup_call_audio_in_window_t3

0x0002,

0xf0d6,	// (0x0009ca08) popup_call_audio_in_window_t_ParamLimits

0xf0d6,	// (0x0009ca08) popup_call_audio_in_window_t

0x9a5d,	// (0x0009738f) bg_popup_call_pane_cp01_ParamLimits

0x9a5d,	// (0x0009738f) bg_popup_call_pane_cp01

0x9a6b,	// (0x0009739d) call_thumbnail_pane_cp02

0x9ae2,	// (0x00097414) call_type_pane_cp022

0x9aea,	// (0x0009741c) popup_call_audio_out_window_g1_ParamLimits

0x9aea,	// (0x0009741c) popup_call_audio_out_window_g1

0x9afc,	// (0x0009742e) popup_call_audio_out_window_g2_ParamLimits

0x9afc,	// (0x0009742e) popup_call_audio_out_window_g2

0x9b08,	// (0x0009743a) popup_call_audio_out_window_g3_ParamLimits

0x9b08,	// (0x0009743a) popup_call_audio_out_window_g3

0x0002,

0xf0dd,	// (0x0009ca0f) popup_call_audio_out_window_g_ParamLimits

0xf0dd,	// (0x0009ca0f) popup_call_audio_out_window_g

0x9b1a,	// (0x0009744c) popup_call_audio_out_window_t1_ParamLimits

0x9b1a,	// (0x0009744c) popup_call_audio_out_window_t1

0x9b32,	// (0x00097464) popup_call_audio_out_window_t2_ParamLimits

0x9b32,	// (0x00097464) popup_call_audio_out_window_t2

0x0001,

0xf0e4,	// (0x0009ca16) popup_call_audio_out_window_t_ParamLimits

0xf0e4,	// (0x0009ca16) popup_call_audio_out_window_t

0x9b47,	// (0x00097479) bg_popup_call_pane_ParamLimits

0x9b47,	// (0x00097479) bg_popup_call_pane

0x0d0c,	// (0x0008e63e) call_thumbnail_pane_cp_ParamLimits

0x0d0c,	// (0x0008e63e) call_thumbnail_pane_cp

0x9bcb,	// (0x000974fd) call_type_pane_cp01_ParamLimits

0x9bcb,	// (0x000974fd) call_type_pane_cp01

0x9c0f,	// (0x00097541) popup_call_audio_first_window_g1_ParamLimits

0x9c0f,	// (0x00097541) popup_call_audio_first_window_g1

0x9c5b,	// (0x0009758d) popup_call_audio_first_window_g2_ParamLimits

0x9c5b,	// (0x0009758d) popup_call_audio_first_window_g2

0x0001,

0xf0e9,	// (0x0009ca1b) popup_call_audio_first_window_g_ParamLimits

0xf0e9,	// (0x0009ca1b) popup_call_audio_first_window_g

0x9c9f,	// (0x000975d1) popup_call_audio_first_window_t1_ParamLimits

0x9c9f,	// (0x000975d1) popup_call_audio_first_window_t1

0x9d4b,	// (0x0009767d) popup_call_audio_first_window_t4_ParamLimits

0x9d4b,	// (0x0009767d) popup_call_audio_first_window_t4

0x9dd7,	// (0x00097709) popup_call_audio_first_window_t5_ParamLimits

0x9dd7,	// (0x00097709) popup_call_audio_first_window_t5

0x0002,

0xf0ee,	// (0x0009ca20) popup_call_audio_first_window_t_ParamLimits

0xf0ee,	// (0x0009ca20) popup_call_audio_first_window_t

0x9e06,	// (0x00097738) bg_popup_call_pane_cp02

0x9e10,	// (0x00097742) call_type_pane_cp023

0x9e18,	// (0x0009774a) popup_call_audio_wait_window_g1

0x9e20,	// (0x00097752) popup_call_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009ca27) popup_call_audio_wait_window_g

0x9e28,	// (0x0009775a) popup_call_audio_wait_window_t3

0x9e36,	// (0x00097768) bg_popup_call_pane_cp03_ParamLimits

0x9e36,	// (0x00097768) bg_popup_call_pane_cp03

0x9e96,	// (0x000977c8) call_thumbnail_pane_cp011_ParamLimits

0x9e96,	// (0x000977c8) call_thumbnail_pane_cp011

0x9ea2,	// (0x000977d4) call_type_pane_cp034_ParamLimits

0x9ea2,	// (0x000977d4) call_type_pane_cp034

0x9ede,	// (0x00097810) popup_call_audio_second_window_g1_ParamLimits

0x9ede,	// (0x00097810) popup_call_audio_second_window_g1

0x9f1a,	// (0x0009784c) popup_call_audio_second_window_g2_ParamLimits

0x9f1a,	// (0x0009784c) popup_call_audio_second_window_g2

0x0001,

0xf0fa,	// (0x0009ca2c) popup_call_audio_second_window_g_ParamLimits

0xf0fa,	// (0x0009ca2c) popup_call_audio_second_window_g

0x9f56,	// (0x00097888) popup_call_audio_second_window_t1_ParamLimits

0x9f56,	// (0x00097888) popup_call_audio_second_window_t1

0x9fd7,	// (0x00097909) popup_call_audio_second_window_t2_ParamLimits

0x9fd7,	// (0x00097909) popup_call_audio_second_window_t2

0xa00d,	// (0x0009793f) popup_call_audio_second_window_t3_ParamLimits

0xa00d,	// (0x0009793f) popup_call_audio_second_window_t3

0x0002,

0xf0ff,	// (0x0009ca31) popup_call_audio_second_window_t_ParamLimits

0xf0ff,	// (0x0009ca31) popup_call_audio_second_window_t

0x9e06,	// (0x00097738) bg_popup_call_pane_cp04

0xa043,	// (0x00097975) list_conf_pane

0xa04b,	// (0x0009797d) popup_call_audio_conf_window_t1

0xa059,	// (0x0009798b) call_thumbnail_pane_g1

0xa061,	// (0x00097993) bg_pinb_pane_ParamLimits

0xa061,	// (0x00097993) bg_pinb_pane

0xa06f,	// (0x000979a1) find_pinb_pane

0xa078,	// (0x000979aa) listscroll_pinb_pane_ParamLimits

0xa078,	// (0x000979aa) listscroll_pinb_pane

0xa087,	// (0x000979b9) pinb_bg_pane_g1

0x0d30,	// (0x0008e662) pinb_bg_pane_g2

0x0d3c,	// (0x0008e66e) pinb_bg_pane_g3

0x0d48,	// (0x0008e67a) pinb_bg_pane_g4

0x0d54,	// (0x0008e686) pinb_bg_pane_g5

0x0d60,	// (0x0008e692) pinb_bg_pane_g6

0x0d6b,	// (0x0008e69d) pinb_bg_pane_g7

0x0d76,	// (0x0008e6a8) pinb_bg_pane_g8

0x0d81,	// (0x0008e6b3) pinb_bg_pane_g9

0x0d8b,	// (0x0008e6bd) pinb_bg_pane_g10

0x0009,

0xf106,	// (0x0009ca38) pinb_bg_pane_g

0x0da8,	// (0x0008e6da) grid_pinb_pane

0x0db3,	// (0x0008e6e5) list_pinb_pane

0x0dbe,	// (0x0008e6f0) scroll_pane_cp01_ParamLimits

0x0dbe,	// (0x0008e6f0) scroll_pane_cp01

0xa091,	// (0x000979c3) find_pinb_pane_g1_ParamLimits

0xa091,	// (0x000979c3) find_pinb_pane_g1

0xa0a9,	// (0x000979db) find_pinb_pane_t1

0xa0bb,	// (0x000979ed) find_pinb_pane_t2

0x0001,

0xf120,	// (0x0009ca52) find_pinb_pane_t

0xa0d0,	// (0x00097a02) input_focus_pane_cp01_ParamLimits

0xa0d0,	// (0x00097a02) input_focus_pane_cp01

0x0dd0,	// (0x0008e702) cell_pinb_pane_ParamLimits

0x0dd0,	// (0x0008e702) cell_pinb_pane

0x0df2,	// (0x0008e724) cell_pinb_pane_g1_ParamLimits

0x0df2,	// (0x0008e724) cell_pinb_pane_g1

0x0e07,	// (0x0008e739) cell_pinb_pane_g2_ParamLimits

0x0e07,	// (0x0008e739) cell_pinb_pane_g2

0xa0dc,	// (0x00097a0e) cell_pinb_pane_g3_ParamLimits

0xa0dc,	// (0x00097a0e) cell_pinb_pane_g3

0x0002,

0xf125,	// (0x0009ca57) cell_pinb_pane_g_ParamLimits

0xf125,	// (0x0009ca57) cell_pinb_pane_g

0x9e06,	// (0x00097738) grid_highlight_pane_cp01

0x0e13,	// (0x0008e745) list_pinb_item_pane_ParamLimits

0x0e13,	// (0x0008e745) list_pinb_item_pane

0x9e06,	// (0x00097738) list_highlight_pane_cp02

0x0e25,	// (0x0008e757) list_pinb_item_pane_g1_ParamLimits

0x0e25,	// (0x0008e757) list_pinb_item_pane_g1

0x0e32,	// (0x0008e764) list_pinb_item_pane_g2_ParamLimits

0x0e32,	// (0x0008e764) list_pinb_item_pane_g2

0x0e3e,	// (0x0008e770) list_pinb_item_pane_g3_ParamLimits

0x0e3e,	// (0x0008e770) list_pinb_item_pane_g3

0x0e4f,	// (0x0008e781) list_pinb_item_pane_g4_ParamLimits

0x0e4f,	// (0x0008e781) list_pinb_item_pane_g4

0x0003,

0xf12c,	// (0x0009ca5e) list_pinb_item_pane_g_ParamLimits

0xf12c,	// (0x0009ca5e) list_pinb_item_pane_g

0x0e5b,	// (0x0008e78d) list_pinb_item_pane_t1_ParamLimits

0x0e5b,	// (0x0008e78d) list_pinb_item_pane_t1

0x0e90,	// (0x0008e7c2) calc_display_pane

0x0eb8,	// (0x0008e7ea) calc_paper_pane

0x0edb,	// (0x0008e80d) grid_calc_pane

0x9e06,	// (0x00097738) bg_list_pane_cp01

0x0f09,	// (0x0008e83b) clock_g1

0x0f11,	// (0x0008e843) clock_g2

0x0001,

0xf135,	// (0x0009ca67) clock_g

0x0f19,	// (0x0008e84b) clock_t1_ParamLimits

0x0f19,	// (0x0008e84b) clock_t1

0x0f2e,	// (0x0008e860) clock_t2_ParamLimits

0x0f2e,	// (0x0008e860) clock_t2

0x0f40,	// (0x0008e872) clock_t3_ParamLimits

0x0f40,	// (0x0008e872) clock_t3

0x0f52,	// (0x0008e884) clock_t4_ParamLimits

0x0f52,	// (0x0008e884) clock_t4

0x0f64,	// (0x0008e896) clock_t5_ParamLimits

0x0f64,	// (0x0008e896) clock_t5

0x0f79,	// (0x0008e8ab) clock_t6_ParamLimits

0x0f79,	// (0x0008e8ab) clock_t6

0x0f8b,	// (0x0008e8bd) clock_t7_ParamLimits

0x0f8b,	// (0x0008e8bd) clock_t7

0x0f9d,	// (0x0008e8cf) clock_t8_ParamLimits

0x0f9d,	// (0x0008e8cf) clock_t8

0x0fb1,	// (0x0008e8e3) clock_t9_ParamLimits

0x0fb1,	// (0x0008e8e3) clock_t9

0x0008,

0xf13a,	// (0x0009ca6c) clock_t_ParamLimits

0xf13a,	// (0x0009ca6c) clock_t

0xa0f0,	// (0x00097a22) popup_clock_analogue_window_cp02

0xa0f0,	// (0x00097a22) popup_clock_digital_window_cp01

0xa0f8,	// (0x00097a2a) listscroll_help_pane

0x9e06,	// (0x00097738) phob_pre_status_pane

0xa102,	// (0x00097a34) grid_qdial_pane

0xa061,	// (0x00097993) listscroll_mce_pane

0xa061,	// (0x00097993) bg_notes_pane

0xa10c,	// (0x00097a3e) list_notes_pane

0x0fc7,	// (0x0008e8f9) scroll_pane_cp06

0xa11a,	// (0x00097a4c) bg_calc_paper_pane

0xa12e,	// (0x00097a60) list_calc_pane

0xa148,	// (0x00097a7a) bg_calc_display_pane

0x0fdb,	// (0x0008e90d) calc_display_pane_t1

0x0fed,	// (0x0008e91f) calc_display_pane_t2

0xa154,	// (0x00097a86) calc_display_pane_t3

0x0002,

0xf14d,	// (0x0009ca7f) calc_display_pane_t

0x0fff,	// (0x0008e931) cell_calc_pane_ParamLimits

0x0fff,	// (0x0008e931) cell_calc_pane

0xa166,	// (0x00097a98) bg_calc_paper_pane_g1

0xa172,	// (0x00097aa4) bg_calc_paper_pane_g2

0xa17e,	// (0x00097ab0) bg_calc_paper_pane_g3

0xa18a,	// (0x00097abc) bg_calc_paper_pane_g4

0xa196,	// (0x00097ac8) bg_calc_paper_pane_g5

0x103c,	// (0x0008e96e) bg_calc_paper_pane_g6

0x104f,	// (0x0008e981) bg_calc_paper_pane_g7

0x1062,	// (0x0008e994) bg_calc_paper_pane_g8

0x0007,

0xf154,	// (0x0009ca86) bg_calc_paper_pane_g

0x1073,	// (0x0008e9a5) calc_bg_paper_pane_g9

0x1084,	// (0x0008e9b6) list_calc_item_pane_ParamLimits

0x1084,	// (0x0008e9b6) list_calc_item_pane

0xa1a2,	// (0x00097ad4) list_calc_item_pane_g1

0xa1af,	// (0x00097ae1) list_calc_item_pane_t1_ParamLimits

0xa1af,	// (0x00097ae1) list_calc_item_pane_t1

0x109c,	// (0x0008e9ce) list_calc_item_pane_t2_ParamLimits

0x109c,	// (0x0008e9ce) list_calc_item_pane_t2

0x0001,

0xf165,	// (0x0009ca97) list_calc_item_pane_t_ParamLimits

0xf165,	// (0x0009ca97) list_calc_item_pane_t

0xa1c1,	// (0x00097af3) cell_calc_pane_g1

0xa1cb,	// (0x00097afd) grid_highlight_pane_cp02

0xa1ed,	// (0x00097b1f) bg_calc_display_pane_g1

0xa1f6,	// (0x00097b28) bg_calc_display_pane_g2

0xa200,	// (0x00097b32) bg_calc_display_pane_g3

0x0002,

0xf16f,	// (0x0009caa1) bg_calc_display_pane_g

0x10ce,	// (0x0008ea00) cell_qdial_pane_ParamLimits

0x10ce,	// (0x0008ea00) cell_qdial_pane

0x10e2,	// (0x0008ea14) cell_qdial_pane_g1_ParamLimits

0x10e2,	// (0x0008ea14) cell_qdial_pane_g1

0x10f8,	// (0x0008ea2a) cell_qdial_pane_g2_ParamLimits

0x10f8,	// (0x0008ea2a) cell_qdial_pane_g2

0xa209,	// (0x00097b3b) cell_qdial_pane_g3_ParamLimits

0xa209,	// (0x00097b3b) cell_qdial_pane_g3

0x0003,

0xf176,	// (0x0009caa8) cell_qdial_pane_g_ParamLimits

0xf176,	// (0x0009caa8) cell_qdial_pane_g

0x111f,	// (0x0008ea51) cell_qdial_pane_t1_ParamLimits

0x111f,	// (0x0008ea51) cell_qdial_pane_t1

0x1137,	// (0x0008ea69) cell_qdial_pane_t2_ParamLimits

0x1137,	// (0x0008ea69) cell_qdial_pane_t2

0x114a,	// (0x0008ea7c) cell_qdial_pane_t3_ParamLimits

0x114a,	// (0x0008ea7c) cell_qdial_pane_t3

0x0002,

0xf17f,	// (0x0009cab1) cell_qdial_pane_t_ParamLimits

0xf17f,	// (0x0009cab1) cell_qdial_pane_t

0x9e06,	// (0x00097738) grid_highlight_pane_cp04

0xa215,	// (0x00097b47) thumbnail_qdial_pane_ParamLimits

0xa215,	// (0x00097b47) thumbnail_qdial_pane

0xa271,	// (0x00097ba3) list_help_pane

0xa27a,	// (0x00097bac) scroll_pane_cp02

0x115d,	// (0x0008ea8f) help_list_pane_t1_ParamLimits

0x115d,	// (0x0008ea8f) help_list_pane_t1

0xa283,	// (0x00097bb5) bg_notes_pane_g2

0xa28b,	// (0x00097bbd) bg_notes_pane_g3

0xa293,	// (0x00097bc5) notes_bg_pane_g1

0xa29b,	// (0x00097bcd) notes_bg_pane_g4

0xa2a3,	// (0x00097bd5) notes_bg_pane_g5

0xa2ab,	// (0x00097bdd) notes_bg_pane_g6

0xa2b3,	// (0x00097be5) notes_bg_pane_g7

0xa2bb,	// (0x00097bed) notes_bg_pane_g8

0xa2c3,	// (0x00097bf5) notes_bg_pane_g9

0x0006,

0xf19d,	// (0x0009cacf) notes_bg_pane_g

0x117b,	// (0x0008eaad) list_notes_text_pane_ParamLimits

0x117b,	// (0x0008eaad) list_notes_text_pane

0xa2cb,	// (0x00097bfd) list_notes_text_pane_g1

0xfb4c,	// (0x0008d47e) list_notes_text_pane_t1

0x118f,	// (0x0008eac1) listscroll_cale_week_pane

0x11c5,	// (0x0008eaf7) bg_cale_heading_pane

0xa2e5,	// (0x00097c17) bg_cale_pane_cp01

0x11ee,	// (0x0008eb20) cale_week_corner_pane

0x120d,	// (0x0008eb3f) cale_week_day_heading_pane

0x123b,	// (0x0008eb6d) cale_week_scroll_pane_g1

0x125f,	// (0x0008eb91) cale_week_scroll_pane_g2

0x1277,	// (0x0008eba9) cale_week_scroll_pane_g3

0x128f,	// (0x0008ebc1) cale_week_scroll_pane_g4

0x12ab,	// (0x0008ebdd) cale_week_scroll_pane_g5

0x12cb,	// (0x0008ebfd) cale_week_scroll_pane_g6

0x12eb,	// (0x0008ec1d) cale_week_scroll_pane_g7

0x130f,	// (0x0008ec41) cale_week_scroll_pane_g8

0x1333,	// (0x0008ec65) cale_week_scroll_pane_g9

0x1350,	// (0x0008ec82) cale_week_scroll_pane_g10

0x136d,	// (0x0008ec9f) cale_week_scroll_pane_g11

0x138a,	// (0x0008ecbc) cale_week_scroll_pane_g12

0x13a7,	// (0x0008ecd9) cale_week_scroll_pane_g13

0x13c4,	// (0x0008ecf6) cale_week_scroll_pane_g14

0x13ed,	// (0x0008ed1f) cale_week_scroll_pane_g15

0x000f,

0xf1ac,	// (0x0009cade) cale_week_scroll_pane_g

0x143a,	// (0x0008ed6c) cale_week_time_pane

0x145e,	// (0x0008ed90) grid_cale_week_pane

0xa315,	// (0x00097c47) scroll_pane_cp08

0x1495,	// (0x0008edc7) cell_cale_week_pane_ParamLimits

0x1495,	// (0x0008edc7) cell_cale_week_pane

0x1525,	// (0x0008ee57) cale_week_day_heading_pane_t1

0x156f,	// (0x0008eea1) cale_week_day_heading_pane_t2

0x15be,	// (0x0008eef0) cale_week_day_heading_pane_t3

0x160d,	// (0x0008ef3f) cale_week_day_heading_pane_t4

0x165c,	// (0x0008ef8e) cale_week_day_heading_pane_t5

0x16af,	// (0x0008efe1) cale_week_day_heading_pane_t6

0x1706,	// (0x0008f038) cale_week_day_heading_pane_t7

0x0006,

0xf1cd,	// (0x0009caff) cale_week_day_heading_pane_t

0xa337,	// (0x00097c69) bg_cale_side_pane

0x1750,	// (0x0008f082) cale_week_time_pane_t1

0x178a,	// (0x0008f0bc) cale_week_time_pane_t2

0x17c4,	// (0x0008f0f6) cale_week_time_pane_t3

0x17fe,	// (0x0008f130) cale_week_time_pane_t4

0x1838,	// (0x0008f16a) cale_week_time_pane_t5

0x1872,	// (0x0008f1a4) cale_week_time_pane_t6

0x18ac,	// (0x0008f1de) cale_week_time_pane_t7

0x18e6,	// (0x0008f218) cale_week_time_pane_t8

0x0007,

0xf1dc,	// (0x0009cb0e) cale_week_time_pane_t

0x1926,	// (0x0008f258) cell_cale_week_pane_g2

0x1945,	// (0x0008f277) cell_cale_week_pane_g3_ParamLimits

0x1945,	// (0x0008f277) cell_cale_week_pane_g3

0xa345,	// (0x00097c77) grid_highlight_pane_cp07

0xa34d,	// (0x00097c7f) listscroll_gms_pane

0xa357,	// (0x00097c89) grid_gms_pane

0xa360,	// (0x00097c92) listscroll_gms_pane_g1

0xa368,	// (0x00097c9a) listscroll_gms_pane_g2

0x0001,

0xf1ed,	// (0x0009cb1f) listscroll_gms_pane_g

0x195d,	// (0x0008f28f) scroll_pane_cp010

0x1968,	// (0x0008f29a) cell_gms_pane_ParamLimits

0x1968,	// (0x0008f29a) cell_gms_pane

0x1982,	// (0x0008f2b4) cell_gms_pane_g1

0xa370,	// (0x00097ca2) cell_gms_pane_g2

0xa378,	// (0x00097caa) cell_gms_pane_g3

0xa381,	// (0x00097cb3) cell_gms_pane_g4

0x0003,

0xf1f2,	// (0x0009cb24) cell_gms_pane_g

0xa38a,	// (0x00097cbc) grid_highlight_pane_cp09

0x3f8b,	// (0x000918bd) phob_pre_status_pane_g1

0x3f93,	// (0x000918c5) phob_pre_status_pane_g2

0x3f9b,	// (0x000918cd) phob_pre_status_pane_g3

0x3fa3,	// (0x000918d5) phob_pre_status_pane_g4

0x0004,

0xf5e8,	// (0x0009cf1a) phob_pre_status_pane_g

0x3fb3,	// (0x000918e5) phob_pre_status_pane_t1

0x3fc3,	// (0x000918f5) phob_pre_status_pane_t2

0x3fd3,	// (0x00091905) phob_pre_status_pane_t3

0x0002,

0xf5f3,	// (0x0009cf25) phob_pre_status_pane_t

0x9e06,	// (0x00097738) bg_list_pane_cp05

0x1992,	// (0x0008f2c4) grid_vorec_pane

0x199e,	// (0x0008f2d0) vorec_t1

0x19ac,	// (0x0008f2de) vorec_t2

0x19ba,	// (0x0008f2ec) vorec_t3

0x19c8,	// (0x0008f2fa) vorec_t4

0x19d6,	// (0x0008f308) vorec_t5

0xa392,	// (0x00097cc4) vorec_t6

0x0006,

0xf1fb,	// (0x0009cb2d) vorec_t

0x19f2,	// (0x0008f324) wait_bar_pane_cp01

0x19fa,	// (0x0008f32c) cell_vorec_pane_ParamLimits

0x19fa,	// (0x0008f32c) cell_vorec_pane

0xa3a0,	// (0x00097cd2) cell_vorec_pane_g1

0x9e06,	// (0x00097738) grid_highlight_pane_cp05

0x1a25,	// (0x0008f357) cams_zoom_pane

0x1a34,	// (0x0008f366) image_vga_pane

0x1a4e,	// (0x0008f380) main_camera_pane_g1

0x1a60,	// (0x0008f392) main_camera_pane_g2

0x1a70,	// (0x0008f3a2) main_camera_pane_g3

0x1a84,	// (0x0008f3b6) main_camera_pane_g4

0x1a98,	// (0x0008f3ca) main_camera_pane_g5

0x1aac,	// (0x0008f3de) main_camera_pane_g6

0x1ac0,	// (0x0008f3f2) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0009cb3c) main_camera_pane_g

0x1ad4,	// (0x0008f406) main_camera_pane_t1

0x1aea,	// (0x0008f41c) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0009cb4d) main_camera_pane_t

0x1b28,	// (0x0008f45a) cams_zoom_pane_cp_ParamLimits

0x1b28,	// (0x0008f45a) cams_zoom_pane_cp

0x1b50,	// (0x0008f482) image_cif_pane_ParamLimits

0x1b50,	// (0x0008f482) image_cif_pane

0x1b8b,	// (0x0008f4bd) image_subqcif_pane

0x1b95,	// (0x0008f4c7) main_video_pane_g1_ParamLimits

0x1b95,	// (0x0008f4c7) main_video_pane_g1

0x1bb9,	// (0x0008f4eb) main_video_pane_g2_ParamLimits

0x1bb9,	// (0x0008f4eb) main_video_pane_g2

0x1bef,	// (0x0008f521) main_video_pane_g3_ParamLimits

0x1bef,	// (0x0008f521) main_video_pane_g3

0x1c1d,	// (0x0008f54f) main_video_pane_g4_ParamLimits

0x1c1d,	// (0x0008f54f) main_video_pane_g4

0x1c4b,	// (0x0008f57d) main_video_pane_g5_ParamLimits

0x1c4b,	// (0x0008f57d) main_video_pane_g5

0xa3b6,	// (0x00097ce8) main_video_pane_g6_ParamLimits

0xa3b6,	// (0x00097ce8) main_video_pane_g6

0x0006,

0xf220,	// (0x0009cb52) main_video_pane_g_ParamLimits

0xf220,	// (0x0009cb52) main_video_pane_g

0x1c74,	// (0x0008f5a6) main_video_pane_t1_ParamLimits

0x1c74,	// (0x0008f5a6) main_video_pane_t1

0xa3d0,	// (0x00097d02) cams_zoom_pane_g1

0xa3d9,	// (0x00097d0b) cams_zoom_pane_g2

0xa3e2,	// (0x00097d14) cams_zoom_pane_g3

0xa3eb,	// (0x00097d1d) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0009cb61) cams_zoom_pane_g

0x1cd1,	// (0x0008f603) grid_cams_pane

0x1ceb,	// (0x0008f61d) linegrid_cams_pane

0x1cfd,	// (0x0008f62f) cell_cams_pane_ParamLimits

0x1cfd,	// (0x0008f62f) cell_cams_pane

0xa3f4,	// (0x00097d26) cams_burst_image_pane

0xa3fc,	// (0x00097d2e) cell_cams_pane_g1

0x9e06,	// (0x00097738) grid_highlight_pane_cp03

0xa1c1,	// (0x00097af3) mp_bg_pane_g1

0x9e06,	// (0x00097738) bg_list_pane_cp03

0xc6b7,	// (0x00099fe9) bg_mp_pane

0xc6bf,	// (0x00099ff1) grid_mp_pane

0xc6c7,	// (0x00099ff9) media_player_g1

0xc6d1,	// (0x0009a003) media_player_t1

0xc6df,	// (0x0009a011) media_player_t2

0xc6ed,	// (0x0009a01f) media_player_t3

0xc6fb,	// (0x0009a02d) media_player_t4

0xc709,	// (0x0009a03b) media_player_t5

0xc717,	// (0x0009a049) media_player_t6

0xc725,	// (0x0009a057) media_player_t7

0x0006,

0xf5d2,	// (0x0009cf04) media_player_t

0xc733,	// (0x0009a065) wait_bar_pane_cp02

0xf5b7,	// (0x0009cee9) main_usb_pane_t

0x3f82,	// (0x000918b4) cell_mp_pane

0xa1c1,	// (0x00097af3) cell_mp_pane_g1

0x9e06,	// (0x00097738) grid_highlight_pane_cp06

0xa404,	// (0x00097d36) grid_skin_colour_pane

0xa40c,	// (0x00097d3e) list_highlight_pane_cp03

0x1d1f,	// (0x0008f651) skin_g1

0xa414,	// (0x00097d46) skin_t1

0xa423,	// (0x00097d55) skin_t2

0x0001,

0xf264,	// (0x0009cb96) skin_t

0x1d27,	// (0x0008f659) cell_skin_colour_pane_ParamLimits

0x1d27,	// (0x0008f659) cell_skin_colour_pane

0xa431,	// (0x00097d63) cell_skin_colour_pane_g1

0x1d9a,	// (0x0008f6cc) call_video_g1_ParamLimits

0x1d9a,	// (0x0008f6cc) call_video_g1

0x1db6,	// (0x0008f6e8) call_video_g2_ParamLimits

0x1db6,	// (0x0008f6e8) call_video_g2

0x0001,

0xf269,	// (0x0009cb9b) call_video_g_ParamLimits

0xf269,	// (0x0009cb9b) call_video_g

0x1dfb,	// (0x0008f72d) call_video_uplink_pane_cp1_ParamLimits

0x1dfb,	// (0x0008f72d) call_video_uplink_pane_cp1

0xa443,	// (0x00097d75) call_video_uplink_pane_cp2

0x1e9c,	// (0x0008f7ce) video_down_crop_pane_ParamLimits

0x1e9c,	// (0x0008f7ce) video_down_crop_pane

0x1f85,	// (0x0008f8b7) video_down_pane_ParamLimits

0x1f85,	// (0x0008f8b7) video_down_pane

0xa44b,	// (0x00097d7d) video_down_subqcif_pane_ParamLimits

0xa44b,	// (0x00097d7d) video_down_subqcif_pane

0xa465,	// (0x00097d97) video_down_subqcif_pane_cp_ParamLimits

0xa465,	// (0x00097d97) video_down_subqcif_pane_cp

0xa48d,	// (0x00097dbf) im_reading_pane_ParamLimits

0xa48d,	// (0x00097dbf) im_reading_pane

0x208e,	// (0x0008f9c0) im_writing_pane_ParamLimits

0x208e,	// (0x0008f9c0) im_writing_pane

0x20aa,	// (0x0008f9dc) im_reading_pane_t1

0xa4a7,	// (0x00097dd9) list_im_pane

0xa4b8,	// (0x00097dea) scroll_pane_cp07

0x20e6,	// (0x0008fa18) im_writing_pane_t1_ParamLimits

0x20e6,	// (0x0008fa18) im_writing_pane_t1

0xa4d1,	// (0x00097e03) im_writing_pane_t2_ParamLimits

0xa4d1,	// (0x00097e03) im_writing_pane_t2

0x0001,

0xf273,	// (0x0009cba5) im_writing_pane_t_ParamLimits

0xf273,	// (0x0009cba5) im_writing_pane_t

0x9e06,	// (0x00097738) input_focus_pane_cp04

0x9e06,	// (0x00097738) input_focus_pane_cp05

0x20fb,	// (0x0008fa2d) list_im_single_pane_ParamLimits

0x20fb,	// (0x0008fa2d) list_im_single_pane

0x2111,	// (0x0008fa43) list_single_im_pane_t1

0x3f42,	// (0x00091874) blid_accuracy_pane

0x3f4a,	// (0x0009187c) blid_compass_pane

0x3f54,	// (0x00091886) main_location_t1

0x3f64,	// (0x00091896) main_location_t2

0x3f74,	// (0x000918a6) main_location_t3

0x0002,

0xf5e1,	// (0x0009cf13) main_location_t

0x9e06,	// (0x00097738) aid_levels_location

0xa1c1,	// (0x00097af3) blid_accuracy_pane_g1

0xa1c1,	// (0x00097af3) blid_accuracy_pane_g2

0x0001,

0xf2dc,	// (0x0009cc0e) blid_accuracy_pane_g

0xa519,	// (0x00097e4b) wml_content_pane

0xa557,	// (0x00097e89) wml_button_pane_ParamLimits

0xa557,	// (0x00097e89) wml_button_pane

0x2120,	// (0x0008fa52) wml_list_single_large_pane_ParamLimits

0x2120,	// (0x0008fa52) wml_list_single_large_pane

0x2136,	// (0x0008fa68) wml_list_single_medium_pane_ParamLimits

0x2136,	// (0x0008fa68) wml_list_single_medium_pane

0x214d,	// (0x0008fa7f) wml_list_single_small_pane_ParamLimits

0x214d,	// (0x0008fa7f) wml_list_single_small_pane

0xa56b,	// (0x00097e9d) wml_selection_box_pane_ParamLimits

0xa56b,	// (0x00097e9d) wml_selection_box_pane

0xa57e,	// (0x00097eb0) wml_list_single_pane_t1

0xa58d,	// (0x00097ebf) wml_list_single_medium_pane_t1

0xa59c,	// (0x00097ece) wml_list_single_large_pane_t1

0xa5ab,	// (0x00097edd) input_focus_pane_cp02_ParamLimits

0xa5ab,	// (0x00097edd) input_focus_pane_cp02

0xac61,	// (0x00098593) wml_selection_box_pane_g1

0xac6a,	// (0x0009859c) wml_selection_box_pane_t1_ParamLimits

0xac6a,	// (0x0009859c) wml_selection_box_pane_t1

0xa061,	// (0x00097993) bg_wml_button_pane_ParamLimits

0xa061,	// (0x00097993) bg_wml_button_pane

0xac82,	// (0x000985b4) wml_button_pane_g1

0xac8a,	// (0x000985bc) wml_button_pane_t1

0xac82,	// (0x000985b4) wml_button_bg_pane_g1

0xac9a,	// (0x000985cc) wml_button_bg_pane_g2

0xaca2,	// (0x000985d4) wml_button_bg_pane_g3

0xacaa,	// (0x000985dc) wml_button_bg_pane_g4

0xacb2,	// (0x000985e4) wml_button_bg_pane_g5

0xacba,	// (0x000985ec) wml_button_bg_pane_g6

0xacc2,	// (0x000985f4) wml_button_bg_pane_g7

0xacca,	// (0x000985fc) wml_button_bg_pane_g8

0xacd2,	// (0x00098604) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0009cbaa) wml_button_bg_pane_g

0x2169,	// (0x0008fa9b) bg_list_pane_cp02

0xacda,	// (0x0009860c) mce_header_pane_ParamLimits

0xacda,	// (0x0009860c) mce_header_pane

0xacf0,	// (0x00098622) mce_icon_pane

0xacf0,	// (0x00098622) mce_image_pane

0xacf9,	// (0x0009862b) mce_text_pane_ParamLimits

0xacf9,	// (0x0009862b) mce_text_pane

0x2173,	// (0x0008faa5) scroll_pane_cp03

0xa54f,	// (0x00097e81) scroll_pane_cp04

0xad0c,	// (0x0009863e) scroll_pane_cp05_ParamLimits

0xad0c,	// (0x0009863e) scroll_pane_cp05

0x217d,	// (0x0008faaf) mce_header_field_pane_ParamLimits

0x217d,	// (0x0008faaf) mce_header_field_pane

0x2196,	// (0x0008fac8) mce_header_field_pane_2_ParamLimits

0x2196,	// (0x0008fac8) mce_header_field_pane_2

0x21ac,	// (0x0008fade) mce_header_field_pane_3

0x21b4,	// (0x0008fae6) list_single_mce_message_pane_ParamLimits

0x21b4,	// (0x0008fae6) list_single_mce_message_pane

0x21cd,	// (0x0008faff) list_single_mce_smart_pane_ParamLimits

0x21cd,	// (0x0008faff) list_single_mce_smart_pane

0xad18,	// (0x0009864a) input_focus_pane_cp03

0xad21,	// (0x00098653) list_header_data_pane

0x21f1,	// (0x0008fb23) mce_header_field_pane_t1

0x2201,	// (0x0008fb33) list_single_mce_header_pane_ParamLimits

0x2201,	// (0x0008fb33) list_single_mce_header_pane

0xad29,	// (0x0009865b) list_single_mce_header_pane_t1

0xad38,	// (0x0009866a) list_single_mce_message_pane_g1

0xad40,	// (0x00098672) list_single_mce_message_pane_t1

0x223b,	// (0x0008fb6d) bg_cale_heading_pane_cp01_ParamLimits

0x223b,	// (0x0008fb6d) bg_cale_heading_pane_cp01

0xad4e,	// (0x00098680) bg_cale_pane_cp02_ParamLimits

0xad4e,	// (0x00098680) bg_cale_pane_cp02

0x2282,	// (0x0008fbb4) cale_month_corner_pane

0x22a1,	// (0x0008fbd3) cale_month_day_heading_pane_ParamLimits

0x22a1,	// (0x0008fbd3) cale_month_day_heading_pane

0x2300,	// (0x0008fc32) cale_month_pane_g1_ParamLimits

0x2300,	// (0x0008fc32) cale_month_pane_g1

0x233c,	// (0x0008fc6e) cale_month_pane_g2_ParamLimits

0x233c,	// (0x0008fc6e) cale_month_pane_g2

0x2378,	// (0x0008fcaa) cale_month_pane_g3_ParamLimits

0x2378,	// (0x0008fcaa) cale_month_pane_g3

0x23cc,	// (0x0008fcfe) cale_month_pane_g4_ParamLimits

0x23cc,	// (0x0008fcfe) cale_month_pane_g4

0x2420,	// (0x0008fd52) cale_month_pane_g5_ParamLimits

0x2420,	// (0x0008fd52) cale_month_pane_g5

0x247c,	// (0x0008fdae) cale_month_pane_g6_ParamLimits

0x247c,	// (0x0008fdae) cale_month_pane_g6

0x24e0,	// (0x0008fe12) cale_month_pane_g7_ParamLimits

0x24e0,	// (0x0008fe12) cale_month_pane_g7

0x254c,	// (0x0008fe7e) cale_month_pane_g8_ParamLimits

0x254c,	// (0x0008fe7e) cale_month_pane_g8

0x25b8,	// (0x0008feea) cale_month_pane_g9_ParamLimits

0x25b8,	// (0x0008feea) cale_month_pane_g9

0x2616,	// (0x0008ff48) cale_month_pane_g10_ParamLimits

0x2616,	// (0x0008ff48) cale_month_pane_g10

0x2668,	// (0x0008ff9a) cale_month_pane_g11_ParamLimits

0x2668,	// (0x0008ff9a) cale_month_pane_g11

0x26ba,	// (0x0008ffec) cale_month_pane_g12_ParamLimits

0x26ba,	// (0x0008ffec) cale_month_pane_g12

0x2712,	// (0x00090044) cale_month_pane_g13_ParamLimits

0x2712,	// (0x00090044) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0009cbbd) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0009cbbd) cale_month_pane_g

0x276a,	// (0x0009009c) cale_month_week_pane

0x278e,	// (0x000900c0) grid_cale_month_pane_ParamLimits

0x278e,	// (0x000900c0) grid_cale_month_pane

0x27e4,	// (0x00090116) cale_month_day_heading_pane_t1

0x286a,	// (0x0009019c) cale_month_day_heading_pane_t2

0x28fb,	// (0x0009022d) cale_month_day_heading_pane_t3

0x298c,	// (0x000902be) cale_month_day_heading_pane_t4

0x2a1d,	// (0x0009034f) cale_month_day_heading_pane_t5

0x2abe,	// (0x000903f0) cale_month_day_heading_pane_t6

0x2b63,	// (0x00090495) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0009cbd8) cale_month_day_heading_pane_t

0xa337,	// (0x00097c69) bg_cale_side_pane_cp01

0x2c0c,	// (0x0009053e) cale_month_week_pane_t1

0x2c25,	// (0x00090557) cale_month_week_pane_t2

0x2c3e,	// (0x00090570) cale_month_week_pane_t3

0x2c57,	// (0x00090589) cale_month_week_pane_t4

0x2c70,	// (0x000905a2) cale_month_week_pane_t5

0x2c89,	// (0x000905bb) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0009cbe7) cale_month_week_pane_t

0x2ca8,	// (0x000905da) cell_cale_month_pane_ParamLimits

0x2ca8,	// (0x000905da) cell_cale_month_pane

0xa5be,	// (0x00097ef0) cell_cale_month_pane_g1

0x2dd2,	// (0x00090704) cell_cale_month_pane_t1_ParamLimits

0x2dd2,	// (0x00090704) cell_cale_month_pane_t1

0xa345,	// (0x00097c77) grid_highlight_pane_cp08

0xa1c1,	// (0x00097af3) main_smil_g1

0x2df2,	// (0x00090724) smil_status_pane

0xad8d,	// (0x000986bf) smil_text_pane

0xc5d5,	// (0x00099f07) bg_popup_call3_rect_pane_g8

0xc5dd,	// (0x00099f0f) bg_popup_call3_rect_pane_g9

0x0008,

0xf575,	// (0x0009cea7) bg_popup_call3_rect_pane_g

0xc86b,	// (0x0009a19d) smil_status_volume_pane_g1

0x2e05,	// (0x00090737) smil_status_pane_t1

0xa6bc,	// (0x00097fee) volume_smil_pane

0xad97,	// (0x000986c9) list_smil_text_pane

0x2e1e,	// (0x00090750) scroll_pane_cp011

0x2e29,	// (0x0009075b) smil_text_list_pane_t1_ParamLimits

0x2e29,	// (0x0009075b) smil_text_list_pane_t1

0xa5ca,	// (0x00097efc) aid_volume_smil_ParamLimits

0xa5ca,	// (0x00097efc) aid_volume_smil

0xa1c1,	// (0x00097af3) smil_volume_pane_g1

0xa1c1,	// (0x00097af3) smil_volume_pane_g2

0x0001,

0xf2dc,	// (0x0009cc0e) smil_volume_pane_g

0x118f,	// (0x0008eac1) listscroll_cale_day_pane

0xada1,	// (0x000986d3) bg_cale_pane

0xadb9,	// (0x000986eb) list_cale_pane

0xaddc,	// (0x0009870e) scroll_pane_cp09

0xaded,	// (0x0009871f) cale_bg_pane_g1

0xadf5,	// (0x00098727) cale_bg_pane_g2

0xadfd,	// (0x0009872f) cale_bg_pane_g3

0xae05,	// (0x00098737) cale_bg_pane_g4

0xae0d,	// (0x0009873f) cale_bg_pane_g5

0xae15,	// (0x00098747) cale_bg_pane_g6

0xae1d,	// (0x0009874f) cale_bg_pane_g7

0xae25,	// (0x00098757) cale_bg_pane_g8

0xae2d,	// (0x0009875f) cale_bg_pane_g9

0x0008,

0xf2e1,	// (0x0009cc13) cale_bg_pane_g

0x2e62,	// (0x00090794) list_cale_time_pane_ParamLimits

0x2e62,	// (0x00090794) list_cale_time_pane

0xae3d,	// (0x0009876f) list_cale_time_pane_g1_ParamLimits

0xae3d,	// (0x0009876f) list_cale_time_pane_g1

0xae49,	// (0x0009877b) list_cale_time_pane_g2_ParamLimits

0xae49,	// (0x0009877b) list_cale_time_pane_g2

0x2e76,	// (0x000907a8) list_cale_time_pane_g3_ParamLimits

0x2e76,	// (0x000907a8) list_cale_time_pane_g3

0x2e84,	// (0x000907b6) list_cale_time_pane_g4_ParamLimits

0x2e84,	// (0x000907b6) list_cale_time_pane_g4

0x2e92,	// (0x000907c4) list_cale_time_pane_g5_ParamLimits

0x2e92,	// (0x000907c4) list_cale_time_pane_g5

0x0005,

0xf2f4,	// (0x0009cc26) list_cale_time_pane_g_ParamLimits

0xf2f4,	// (0x0009cc26) list_cale_time_pane_g

0xae63,	// (0x00098795) list_cale_time_pane_t1_ParamLimits

0xae63,	// (0x00098795) list_cale_time_pane_t1

0xae8b,	// (0x000987bd) list_cale_time_pane_t2_ParamLimits

0xae8b,	// (0x000987bd) list_cale_time_pane_t2

0x3160,	// (0x00090a92) aid_blid_cardinal_pane

0x319e,	// (0x00090ad0) compass_pane_t4

0xaeb3,	// (0x000987e5) list_cale_time_pane_t4_ParamLimits

0xaeb3,	// (0x000987e5) list_cale_time_pane_t4

0x31ac,	// (0x00090ade) compass_pane_t5

0x31ba,	// (0x00090aec) compass_pane_t6

0x31c8,	// (0x00090afa) compass_pane_t7

0xb2cd,	// (0x00098bff) navi_pane_cc_t1

0xb422,	// (0x00098d54) aid_phob_thumbnail_center_pane

0x390d,	// (0x0009123f) main_postcard_pane_g4_ParamLimits

0x0002,

0xf301,	// (0x0009cc33) list_cale_time_pane_t_ParamLimits

0xf301,	// (0x0009cc33) list_cale_time_pane_t

0x9a5d,	// (0x0009738f) bg_popup_window_pane_cp02_ParamLimits

0x9a5d,	// (0x0009738f) bg_popup_window_pane_cp02

0xaedb,	// (0x0009880d) heading_pane_cp01_ParamLimits

0xaedb,	// (0x0009880d) heading_pane_cp01

0xaee7,	// (0x00098819) loc_req_pane_ParamLimits

0xaee7,	// (0x00098819) loc_req_pane

0xaef7,	// (0x00098829) loc_type_pane_ParamLimits

0xaef7,	// (0x00098829) loc_type_pane

0xaf09,	// (0x0009883b) loc_type_pane_t1_ParamLimits

0xaf09,	// (0x0009883b) loc_type_pane_t1

0xaf1b,	// (0x0009884d) loc_type_pane_t2_ParamLimits

0xaf1b,	// (0x0009884d) loc_type_pane_t2

0xaf2d,	// (0x0009885f) loc_type_pane_t3_ParamLimits

0xaf2d,	// (0x0009885f) loc_type_pane_t3

0x0002,

0xf308,	// (0x0009cc3a) loc_type_pane_t_ParamLimits

0xf308,	// (0x0009cc3a) loc_type_pane_t

0xaf3f,	// (0x00098871) list_loc_req_pane

0xaf49,	// (0x0009887b) scroll_pane_cp012

0x2ea0,	// (0x000907d2) list_single_loc_request_popup_menu_pane_ParamLimits

0x2ea0,	// (0x000907d2) list_single_loc_request_popup_menu_pane

0xaf54,	// (0x00098886) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf54,	// (0x00098886) list_single_loc_request_popup_menu_pane_g1

0xaf60,	// (0x00098892) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf60,	// (0x00098892) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf30f,	// (0x0009cc41) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf30f,	// (0x0009cc41) list_single_loc_request_popup_menu_pane_g

0xaf6c,	// (0x0009889e) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf6c,	// (0x0009889e) list_single_loc_request_popup_menu_pane_t1

0xa061,	// (0x00097993) bg_popup_window_pane_cp03_ParamLimits

0xa061,	// (0x00097993) bg_popup_window_pane_cp03

0xaf82,	// (0x000988b4) heading_loc_req_pane_ParamLimits

0xaf82,	// (0x000988b4) heading_loc_req_pane

0x2ead,	// (0x000907df) popup_dyc_status_message_window_g1_ParamLimits

0x2ead,	// (0x000907df) popup_dyc_status_message_window_g1

0x2ec1,	// (0x000907f3) popup_dyc_status_message_window_t1_ParamLimits

0x2ec1,	// (0x000907f3) popup_dyc_status_message_window_t1

0x2ed6,	// (0x00090808) popup_dyc_status_message_window_t2_ParamLimits

0x2ed6,	// (0x00090808) popup_dyc_status_message_window_t2

0x2eeb,	// (0x0009081d) popup_dyc_status_message_window_t3_ParamLimits

0x2eeb,	// (0x0009081d) popup_dyc_status_message_window_t3

0x0002,

0xf314,	// (0x0009cc46) popup_dyc_status_message_window_t_ParamLimits

0xf314,	// (0x0009cc46) popup_dyc_status_message_window_t

0x9e06,	// (0x00097738) bg_heading_pane_cp01

0xaf8e,	// (0x000988c0) heading_loc_req_pane_g1

0xaf96,	// (0x000988c8) heading_loc_req_pane_g2

0xaf9e,	// (0x000988d0) heading_loc_req_pane_g3

0x0002,

0xf31b,	// (0x0009cc4d) heading_loc_req_pane_g

0xafa6,	// (0x000988d8) heading_loc_req_pane_t1

0xafb6,	// (0x000988e8) bg_popup_sub_pane_cp01_ParamLimits

0xafb6,	// (0x000988e8) bg_popup_sub_pane_cp01

0xafc4,	// (0x000988f6) popup_cale_events_window_g1_ParamLimits

0xafc4,	// (0x000988f6) popup_cale_events_window_g1

0xafe4,	// (0x00098916) popup_cale_events_window_g2_ParamLimits

0xafe4,	// (0x00098916) popup_cale_events_window_g2

0x0001,

0xf34f,	// (0x0009cc81) popup_cale_events_window_g_ParamLimits

0xf34f,	// (0x0009cc81) popup_cale_events_window_g

0xb004,	// (0x00098936) popup_cale_events_window_t1_ParamLimits

0xb004,	// (0x00098936) popup_cale_events_window_t1

0xb016,	// (0x00098948) popup_cale_events_window_t2_ParamLimits

0xb016,	// (0x00098948) popup_cale_events_window_t2

0xb054,	// (0x00098986) popup_cale_events_window_t3_ParamLimits

0xb054,	// (0x00098986) popup_cale_events_window_t3

0xb08e,	// (0x000989c0) popup_cale_events_window_t4_ParamLimits

0xb08e,	// (0x000989c0) popup_cale_events_window_t4

0x0003,

0xf354,	// (0x0009cc86) popup_cale_events_window_t_ParamLimits

0xf354,	// (0x0009cc86) popup_cale_events_window_t

0x2f1f,	// (0x00090851) call_type_pane

0x2f2f,	// (0x00090861) popup_call_status_window_g1

0x2f43,	// (0x00090875) popup_call_status_window_g2

0x2f57,	// (0x00090889) popup_call_status_window_g3

0x0002,

0xf35d,	// (0x0009cc8f) popup_call_status_window_g

0xb0c4,	// (0x000989f6) call_type_pane_g1

0xb0cd,	// (0x000989ff) call_type_pane_g2

0x0001,

0xf364,	// (0x0009cc96) call_type_pane_g

0x9e06,	// (0x00097738) bg_popup_sub_pane_cp02

0xb0d6,	// (0x00098a08) listscroll_popup_wml_pane

0xb0de,	// (0x00098a10) list_wml_pane

0xb0e8,	// (0x00098a1a) scroll_pane_cp013

0xb0f3,	// (0x00098a25) list_single_graphic_popup_wml_pane_ParamLimits

0xb0f3,	// (0x00098a25) list_single_graphic_popup_wml_pane

0xa1c1,	// (0x00097af3) list_single_graphic_popup_wml_pane_g1

0xb107,	// (0x00098a39) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf369,	// (0x0009cc9b) list_single_graphic_popup_wml_pane_g

0xb10f,	// (0x00098a41) list_single_graphic_popup_wml_pane_t1

0xb125,	// (0x00098a57) aid_call_pane

0xa059,	// (0x0009798b) popup_clock_analogue_window_g1

0xa059,	// (0x0009798b) popup_clock_analogue_window_g2

0xa5ec,	// (0x00097f1e) popup_clock_analogue_window_g3

0xa5ec,	// (0x00097f1e) popup_clock_analogue_window_g4

0xa1c1,	// (0x00097af3) popup_clock_analogue_window_g5

0x0004,

0xf36e,	// (0x0009cca0) popup_clock_analogue_window_g

0xa5f4,	// (0x00097f26) popup_clock_analogue_window_t1

0xa602,	// (0x00097f34) clock_digital_number_pane_ParamLimits

0xa602,	// (0x00097f34) clock_digital_number_pane

0xa60e,	// (0x00097f40) clock_digital_number_pane_cp02_ParamLimits

0xa60e,	// (0x00097f40) clock_digital_number_pane_cp02

0xa61a,	// (0x00097f4c) clock_digital_number_pane_cp03_ParamLimits

0xa61a,	// (0x00097f4c) clock_digital_number_pane_cp03

0xa626,	// (0x00097f58) clock_digital_number_pane_cp04_ParamLimits

0xa626,	// (0x00097f58) clock_digital_number_pane_cp04

0xa632,	// (0x00097f64) clock_digital_separator_pane_ParamLimits

0xa632,	// (0x00097f64) clock_digital_separator_pane

0xa63e,	// (0x00097f70) popup_clock_digital_window_t1

0xa1c1,	// (0x00097af3) clock_digital_number_pane_g1

0xa1c1,	// (0x00097af3) clock_digital_number_pane_g2

0x0001,

0xf2dc,	// (0x0009cc0e) clock_digital_number_pane_g

0xa1c1,	// (0x00097af3) clock_digital_separator_pane_g1

0xa1c1,	// (0x00097af3) clock_digital_separator_pane_g2

0x0001,

0xf2dc,	// (0x0009cc0e) clock_digital_separator_pane_g

0x9e06,	// (0x00097738) bg_popup_window_pane_cp04

0xb12d,	// (0x00098a5f) heading_pane_cp03

0xb135,	// (0x00098a67) listscroll_popup_gms_pane

0xb13d,	// (0x00098a6f) grid_large_graphic_popup_pane

0xb147,	// (0x00098a79) listscroll_popup_gms_pane_g1

0xb14f,	// (0x00098a81) listscroll_popup_gms_pane_g2

0x0001,

0xf379,	// (0x0009ccab) listscroll_popup_gms_pane_g

0xa54f,	// (0x00097e81) scroll_pane_cp014

0x2f67,	// (0x00090899) cell_large_graphic_popup_pane_ParamLimits

0x2f67,	// (0x00090899) cell_large_graphic_popup_pane

0x2f7f,	// (0x000908b1) cell_large_graphic_popup_pane_g1_ParamLimits

0x2f7f,	// (0x000908b1) cell_large_graphic_popup_pane_g1

0xb157,	// (0x00098a89) cell_large_graphic_popup_pane_g2_ParamLimits

0xb157,	// (0x00098a89) cell_large_graphic_popup_pane_g2

0xb163,	// (0x00098a95) cell_large_graphic_popup_pane_g3_ParamLimits

0xb163,	// (0x00098a95) cell_large_graphic_popup_pane_g3

0xb170,	// (0x00098aa2) cell_large_graphic_popup_pane_g4_ParamLimits

0xb170,	// (0x00098aa2) cell_large_graphic_popup_pane_g4

0x0003,

0xf37e,	// (0x0009ccb0) cell_large_graphic_popup_pane_g_ParamLimits

0xf37e,	// (0x0009ccb0) cell_large_graphic_popup_pane_g

0xb180,	// (0x00098ab2) grid_highlight_pane_cp010

0xa1c1,	// (0x00097af3) bg_popup_call_pane_g1

0xb18a,	// (0x00098abc) list_single_graphic_popup_conf_pane_ParamLimits

0xb18a,	// (0x00098abc) list_single_graphic_popup_conf_pane

0xb19c,	// (0x00098ace) list_highlight_pane_cp01

0xb1a5,	// (0x00098ad7) list_single_graphic_popup_conf_pane_g1

0xb1ad,	// (0x00098adf) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf387,	// (0x0009ccb9) list_single_graphic_popup_conf_pane_g

0xb1b5,	// (0x00098ae7) list_single_graphic_popup_conf_pane_t1

0xb1c3,	// (0x00098af5) linegrid_cams_pane_g1

0x2f8b,	// (0x000908bd) linegrid_cams_pane_g2

0xa378,	// (0x00097caa) linegrid_cams_pane_g3

0xb1cc,	// (0x00098afe) linegrid_cams_pane_g4

0x2f94,	// (0x000908c6) linegrid_cams_pane_g5

0x2f9d,	// (0x000908cf) linegrid_cams_pane_g6

0xa381,	// (0x00097cb3) linegrid_cams_pane_g7

0x0006,

0xf38c,	// (0x0009ccbe) linegrid_cams_pane_g

0xb1d5,	// (0x00098b07) popup_clock_analogue_window

0xb1d5,	// (0x00098b07) popup_clock_digital_window

0x9e06,	// (0x00097738) popup_phob_thumbnail_window

0xa1c1,	// (0x00097af3) call_video_uplink_pane_g1

0xb1de,	// (0x00098b10) call_video_uplink_pane_g2

0x0001,

0xf39b,	// (0x0009cccd) call_video_uplink_pane_g

0xb1e6,	// (0x00098b18) video_uplink_pane

0xb1ee,	// (0x00098b20) mce_image_pane_g1

0x2fa8,	// (0x000908da) mce_image_pane_g2

0x2fb2,	// (0x000908e4) mce_image_pane_g3

0x2fbc,	// (0x000908ee) mce_image_pane_g4

0x2fc4,	// (0x000908f6) mce_image_pane_g5

0x0004,

0xf3a0,	// (0x0009ccd2) mce_image_pane_g

0xb1f8,	// (0x00098b2a) control_top_pane_stacon_cp01_ParamLimits

0xb1f8,	// (0x00098b2a) control_top_pane_stacon_cp01

0xb20c,	// (0x00098b3e) uni_indicator_pane_stacon_cp01_ParamLimits

0xb20c,	// (0x00098b3e) uni_indicator_pane_stacon_cp01

0xb21d,	// (0x00098b4f) bg_popup_sub_pane_cp03

0x2fcc,	// (0x000908fe) chi_dic_find_pane

0x2fd4,	// (0x00090906) listscroll_chi_dic_pane

0x2fdd,	// (0x0009090f) main_pane_chidic_g1

0x2ff0,	// (0x00090922) chi_dic_find_pane_t1

0xb227,	// (0x00098b59) find_chidic_pane

0xb230,	// (0x00098b62) chi_dic_list_pane_ParamLimits

0xb230,	// (0x00098b62) chi_dic_list_pane

0xb241,	// (0x00098b73) scroll_pane_cp020

0x2ffe,	// (0x00090930) find_chidic_pane_t1

0x9e06,	// (0x00097738) input_focus_pane_cp06

0x0e13,	// (0x0008e745) list_chi_dic_pane_ParamLimits

0x0e13,	// (0x0008e745) list_chi_dic_pane

0x300d,	// (0x0009093f) list_chi_dic_pane_t1_ParamLimits

0x300d,	// (0x0009093f) list_chi_dic_pane_t1

0x9e06,	// (0x00097738) list_highlight_pane_cp020

0xb249,	// (0x00098b7b) bg_cale_heading_pane_g1

0x3020,	// (0x00090952) bg_cale_heading_pane_g2

0x3028,	// (0x0009095a) bg_cale_heading_pane_g3

0x3030,	// (0x00090962) bg_cale_heading_pane_g4

0x303a,	// (0x0009096c) bg_cale_heading_pane_g5

0x3044,	// (0x00090976) bg_cale_heading_pane_g6

0x304c,	// (0x0009097e) bg_cale_heading_pane_g7

0x3054,	// (0x00090986) bg_cale_heading_pane_g8

0x305e,	// (0x00090990) bg_cale_heading_pane_g9

0x0008,

0xf3ab,	// (0x0009ccdd) bg_cale_heading_pane_g

0xb249,	// (0x00098b7b) bg_cale_side_pane_g1

0x3068,	// (0x0009099a) bg_cale_side_pane_g2

0x3072,	// (0x000909a4) bg_cale_side_pane_g3

0x307c,	// (0x000909ae) bg_cale_side_pane_g4

0x3086,	// (0x000909b8) bg_cale_side_pane_g5

0x3090,	// (0x000909c2) bg_cale_side_pane_g6

0x309a,	// (0x000909cc) bg_cale_side_pane_g7

0x30a4,	// (0x000909d6) bg_cale_side_pane_g8

0x30ac,	// (0x000909de) bg_cale_side_pane_g9

0x0008,

0xf3be,	// (0x0009ccf0) bg_cale_side_pane_g

0x30b4,	// (0x000909e6) popup_call_status_window_ParamLimits

0x30b4,	// (0x000909e6) popup_call_status_window

0xb251,	// (0x00098b83) stacon_top_pane

0xb259,	// (0x00098b8b) status_pane_ParamLimits

0xb259,	// (0x00098b8b) status_pane

0xb26e,	// (0x00098ba0) status_small_pane

0xb276,	// (0x00098ba8) control_pane

0x9e06,	// (0x00097738) stacon_bottom_pane

0xb27e,	// (0x00098bb0) list_single_mce_smart_pane_t1_ParamLimits

0xb27e,	// (0x00098bb0) list_single_mce_smart_pane_t1

0xb291,	// (0x00098bc3) list_single_mce_smart_pane_t2_ParamLimits

0xb291,	// (0x00098bc3) list_single_mce_smart_pane_t2

0x0001,

0xf3d1,	// (0x0009cd03) list_single_mce_smart_pane_t_ParamLimits

0xf3d1,	// (0x0009cd03) list_single_mce_smart_pane_t

0x3101,	// (0x00090a33) compass_pane

0x310c,	// (0x00090a3e) main_location2_pane_t1

0x3120,	// (0x00090a52) main_location2_pane_t2

0x3136,	// (0x00090a68) main_location2_pane_t3

0x0003,

0xf3d6,	// (0x0009cd08) main_location2_pane_t

0xb2b0,	// (0x00098be2) compass_pane_g1_ParamLimits

0xb2b0,	// (0x00098be2) compass_pane_g1

0x3180,	// (0x00090ab2) compass_pane_t1

0x318f,	// (0x00090ac1) compass_pane_t2

0x0005,

0xf3df,	// (0x0009cd11) compass_pane_t

0x31d6,	// (0x00090b08) text_secondary_cp61

0xb2c4,	// (0x00098bf6) navi_pane_cams_g5

0xb2e7,	// (0x00098c19) navi_pane_im_t1

0xb2f5,	// (0x00098c27) navi_pane_mp_g1_ParamLimits

0xb2f5,	// (0x00098c27) navi_pane_mp_g1

0xb309,	// (0x00098c3b) navi_pane_mp_g2_ParamLimits

0xb309,	// (0x00098c3b) navi_pane_mp_g2

0xb315,	// (0x00098c47) navi_pane_mp_g3_ParamLimits

0xb315,	// (0x00098c47) navi_pane_mp_g3

0x0002,

0xf3f3,	// (0x0009cd25) navi_pane_mp_g_ParamLimits

0xf3f3,	// (0x0009cd25) navi_pane_mp_g

0xb321,	// (0x00098c53) navi_pane_mp_t1

0xb32f,	// (0x00098c61) navi_pane_mp_t2

0x0002,

0xf3fa,	// (0x0009cd2c) navi_pane_mp_t

0xb36b,	// (0x00098c9d) navi_pane_vt_g1

0xb321,	// (0x00098c53) navi_pane_vt_t1

0xb373,	// (0x00098ca5) navi_slider_pane

0xb37b,	// (0x00098cad) zooming_pane

0xb383,	// (0x00098cb5) navi_slider_pane_g1

0xa65b,	// (0x00097f8d) navi_slider_pane_g2

0x0006,

0xf401,	// (0x0009cd33) navi_slider_pane_g

0xb3a7,	// (0x00098cd9) aid_levels_zoom

0xb3af,	// (0x00098ce1) zooming_pane_g1

0xb3b7,	// (0x00098ce9) zooming_pane_g2

0xb3b7,	// (0x00098ce9) zooming_pane_g3

0x0002,

0xf410,	// (0x0009cd42) zooming_pane_g

0xb3bf,	// (0x00098cf1) level_10_zoom

0xb3c8,	// (0x00098cfa) level_11_zoom

0xb3d1,	// (0x00098d03) level_1_zoom

0xb3da,	// (0x00098d0c) level_2_zoom

0xb3e3,	// (0x00098d15) level_3_zoom

0xb3ec,	// (0x00098d1e) level_4_zoom

0xb3f5,	// (0x00098d27) level_5_zoom

0xb3fe,	// (0x00098d30) level_6_zoom

0xb407,	// (0x00098d39) level_7_zoom

0xb410,	// (0x00098d42) level_8_zoom

0xb419,	// (0x00098d4b) level_9_zoom

0xb42a,	// (0x00098d5c) popup_phob_thumbnail_window_g1

0xb432,	// (0x00098d64) popup_phob_thumbnail_window_g2

0x0001,

0xf417,	// (0x0009cd49) popup_phob_thumbnail_window_g

0xc73b,	// (0x0009a06d) level_1_location

0xc743,	// (0x0009a075) level_2_location

0xc74b,	// (0x0009a07d) level_3_location

0xc753,	// (0x0009a085) level_4_location

0xb37b,	// (0x00098cad) level_5_location

0x331f,	// (0x00090c51) mce_icon_pane_g1

0x3329,	// (0x00090c5b) mce_icon_pane_g2

0x0001,

0xf41c,	// (0x0009cd4e) mce_icon_pane_g

0x3331,	// (0x00090c63) main_mup_pane_g1_ParamLimits

0x3331,	// (0x00090c63) main_mup_pane_g1

0x3347,	// (0x00090c79) main_mup_pane_g2_ParamLimits

0x3347,	// (0x00090c79) main_mup_pane_g2

0x335f,	// (0x00090c91) main_mup_pane_g3_ParamLimits

0x335f,	// (0x00090c91) main_mup_pane_g3

0x3377,	// (0x00090ca9) main_mup_pane_g4_ParamLimits

0x3377,	// (0x00090ca9) main_mup_pane_g4

0x338f,	// (0x00090cc1) main_mup_pane_g5_ParamLimits

0x338f,	// (0x00090cc1) main_mup_pane_g5

0x33ab,	// (0x00090cdd) main_mup_pane_g6_ParamLimits

0x33ab,	// (0x00090cdd) main_mup_pane_g6

0x33c5,	// (0x00090cf7) main_mup_pane_g7_ParamLimits

0x33c5,	// (0x00090cf7) main_mup_pane_g7

0x33e3,	// (0x00090d15) main_mup_pane_g8_ParamLimits

0x33e3,	// (0x00090d15) main_mup_pane_g8

0x3401,	// (0x00090d33) main_mup_pane_g9_ParamLimits

0x3401,	// (0x00090d33) main_mup_pane_g9

0x341d,	// (0x00090d4f) main_mup_pane_g10_ParamLimits

0x341d,	// (0x00090d4f) main_mup_pane_g10

0x343b,	// (0x00090d6d) main_mup_pane_g11_ParamLimits

0x343b,	// (0x00090d6d) main_mup_pane_g11

0x3455,	// (0x00090d87) main_mup_pane_g12_ParamLimits

0x3455,	// (0x00090d87) main_mup_pane_g12

0x346b,	// (0x00090d9d) main_mup_pane_g13_ParamLimits

0x346b,	// (0x00090d9d) main_mup_pane_g13

0x000c,

0xf421,	// (0x0009cd53) main_mup_pane_g_ParamLimits

0xf421,	// (0x0009cd53) main_mup_pane_g

0x347f,	// (0x00090db1) main_mup_pane_t1_ParamLimits

0x347f,	// (0x00090db1) main_mup_pane_t1

0x349b,	// (0x00090dcd) main_mup_pane_t2_ParamLimits

0x349b,	// (0x00090dcd) main_mup_pane_t2

0x34b3,	// (0x00090de5) main_mup_pane_t3_ParamLimits

0x34b3,	// (0x00090de5) main_mup_pane_t3

0x34cb,	// (0x00090dfd) main_mup_pane_t4_ParamLimits

0x34cb,	// (0x00090dfd) main_mup_pane_t4

0x34e9,	// (0x00090e1b) main_mup_pane_t5_ParamLimits

0x34e9,	// (0x00090e1b) main_mup_pane_t5

0x34fe,	// (0x00090e30) main_mup_pane_t6_ParamLimits

0x34fe,	// (0x00090e30) main_mup_pane_t6

0x0005,

0xf43c,	// (0x0009cd6e) main_mup_pane_t_ParamLimits

0xf43c,	// (0x0009cd6e) main_mup_pane_t

0x3510,	// (0x00090e42) mup_progress_pane_ParamLimits

0x3510,	// (0x00090e42) mup_progress_pane

0x351c,	// (0x00090e4e) mup_visualizer_pane_ParamLimits

0x351c,	// (0x00090e4e) mup_visualizer_pane

0x3550,	// (0x00090e82) mup_volume_pane_ParamLimits

0x3550,	// (0x00090e82) mup_volume_pane

0xb43a,	// (0x00098d6c) mup_visualizer_pane_g1_ParamLimits

0xb43a,	// (0x00098d6c) mup_visualizer_pane_g1

0xb43a,	// (0x00098d6c) mup_visualizer_pane_g2_ParamLimits

0xb43a,	// (0x00098d6c) mup_visualizer_pane_g2

0xb2b0,	// (0x00098be2) mup_visualizer_pane_g3_ParamLimits

0xb2b0,	// (0x00098be2) mup_visualizer_pane_g3

0x0002,

0xf449,	// (0x0009cd7b) mup_visualizer_pane_g_ParamLimits

0xf449,	// (0x0009cd7b) mup_visualizer_pane_g

0xa1c1,	// (0x00097af3) mup_volume_pane_g1

0xb450,	// (0x00098d82) mup_volume_pane_g2

0x0001,

0xf450,	// (0x0009cd82) mup_volume_pane_g

0xa1c1,	// (0x00097af3) mup_progress_pane_g1

0xb459,	// (0x00098d8b) mup_progress_pane_g2

0xb462,	// (0x00098d94) mup_progress_pane_g3

0x0002,

0xf455,	// (0x0009cd87) mup_progress_pane_g

0x9e06,	// (0x00097738) bg_popup_window_pane_cp05

0xb46b,	// (0x00098d9d) heading_pane_cp02_ParamLimits

0xb46b,	// (0x00098d9d) heading_pane_cp02

0xb487,	// (0x00098db9) list_popup_blid_pane

0xb48f,	// (0x00098dc1) list_blid_sat_info_pane_ParamLimits

0xb48f,	// (0x00098dc1) list_blid_sat_info_pane

0xb4a2,	// (0x00098dd4) list_blid_sat_info_pane_g1

0xb4aa,	// (0x00098ddc) list_blid_sat_info_pane_t1

0x367a,	// (0x00090fac) mup_equalizer_pane_ParamLimits

0x367a,	// (0x00090fac) mup_equalizer_pane

0x369b,	// (0x00090fcd) mup_equalizer_pane_cp1_ParamLimits

0x369b,	// (0x00090fcd) mup_equalizer_pane_cp1

0x36bc,	// (0x00090fee) mup_equalizer_pane_cp2_ParamLimits

0x36bc,	// (0x00090fee) mup_equalizer_pane_cp2

0x36e1,	// (0x00091013) mup_equalizer_pane_cp3_ParamLimits

0x36e1,	// (0x00091013) mup_equalizer_pane_cp3

0x370a,	// (0x0009103c) mup_equalizer_pane_cp4_ParamLimits

0x370a,	// (0x0009103c) mup_equalizer_pane_cp4

0x3733,	// (0x00091065) mup_equalizer_pane_cp5

0x374b,	// (0x0009107d) mup_equalizer_pane_cp6

0x3763,	// (0x00091095) mup_equalizer_pane_cp7

0xc655,	// (0x00099f87) bg_popup_call_poc_act_pane_g9

0xc65d,	// (0x00099f8f) bg_popup_call_poc_act_pane_g10

0xc665,	// (0x00099f97) bg_popup_call_poc_act_pane_g11

0x000a,

0xa061,	// (0x00097993) mup_scale_pane

0xa1c1,	// (0x00097af3) mup_scale_pane_g1

0xb4b8,	// (0x00098dea) mup_scale_pane_g2

0x0006,

0xf471,	// (0x0009cda3) mup_scale_pane_g

0xb4dc,	// (0x00098e0e) msg_data_pane

0xb4e4,	// (0x00098e16) scroll_pane_cp017

0xfd6c,	// (0x0008d69e) bg_list_pane_cp04_ParamLimits

0xfd6c,	// (0x0008d69e) bg_list_pane_cp04

0xb4ec,	// (0x00098e1e) msg_data_pane_g1

0x3795,	// (0x000910c7) msg_data_pane_g2

0x379f,	// (0x000910d1) msg_data_pane_g3

0x37a9,	// (0x000910db) msg_data_pane_g4

0x37b1,	// (0x000910e3) msg_data_pane_g5

0x37b9,	// (0x000910eb) msg_data_pane_g6

0x37c1,	// (0x000910f3) msg_data_pane_g7

0x0006,

0xf480,	// (0x0009cdb2) msg_data_pane_g

0xfd8c,	// (0x0008d6be) msg_text_pane_ParamLimits

0xfd8c,	// (0x0008d6be) msg_text_pane

0x37c9,	// (0x000910fb) qrid_highlight_pane_cp011_ParamLimits

0x37c9,	// (0x000910fb) qrid_highlight_pane_cp011

0x9e06,	// (0x00097738) msg_body_pane

0x9e06,	// (0x00097738) msg_header_pane

0xb4fd,	// (0x00098e2f) input_focus_pane_cp07

0x37df,	// (0x00091111) msg_header_pane_t1_ParamLimits

0x37df,	// (0x00091111) msg_header_pane_t1

0x37f1,	// (0x00091123) msg_header_pane_t2_ParamLimits

0x37f1,	// (0x00091123) msg_header_pane_t2

0x0001,

0xf494,	// (0x0009cdc6) msg_header_pane_t_ParamLimits

0xf494,	// (0x0009cdc6) msg_header_pane_t

0xb512,	// (0x00098e44) msg_body_pane_g1

0xfdc0,	// (0x0008d6f2) msg_body_pane_t1_ParamLimits

0xfdc0,	// (0x0008d6f2) msg_body_pane_t1

0x3803,	// (0x00091135) msg_body_pane_t2_ParamLimits

0x3803,	// (0x00091135) msg_body_pane_t2

0x3815,	// (0x00091147) msg_body_pane_t3_ParamLimits

0x3815,	// (0x00091147) msg_body_pane_t3

0x0002,

0xf499,	// (0x0009cdcb) msg_body_pane_t_ParamLimits

0xf499,	// (0x0009cdcb) msg_body_pane_t

0x3861,	// (0x00091193) main_viewer_pane_g1_ParamLimits

0x3861,	// (0x00091193) main_viewer_pane_g1

0x386f,	// (0x000911a1) main_viewer_pane_g2_ParamLimits

0x386f,	// (0x000911a1) main_viewer_pane_g2

0x387d,	// (0x000911af) main_viewer_pane_g3_ParamLimits

0x387d,	// (0x000911af) main_viewer_pane_g3

0x388c,	// (0x000911be) main_viewer_pane_g4_ParamLimits

0x388c,	// (0x000911be) main_viewer_pane_g4

0xa685,	// (0x00097fb7) main_viewer_pane_g5_ParamLimits

0xa685,	// (0x00097fb7) main_viewer_pane_g5

0xa685,	// (0x00097fb7) main_viewer_pane_g7_ParamLimits

0xa685,	// (0x00097fb7) main_viewer_pane_g7

0xa697,	// (0x00097fc9) main_viewer_pane_g8_ParamLimits

0xa697,	// (0x00097fc9) main_viewer_pane_g8

0x0007,

0xf4a9,	// (0x0009cddb) main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0009cddb) main_viewer_pane_g

0xb51a,	// (0x00098e4c) viewer_content_pane_ParamLimits

0xb51a,	// (0x00098e4c) viewer_content_pane

0x38ca,	// (0x000911fc) main_postcard_pane_g1_ParamLimits

0x38ca,	// (0x000911fc) main_postcard_pane_g1

0x38e0,	// (0x00091212) main_postcard_pane_g2_ParamLimits

0x38e0,	// (0x00091212) main_postcard_pane_g2

0x38f6,	// (0x00091228) main_postcard_pane_g3_ParamLimits

0x38f6,	// (0x00091228) main_postcard_pane_g3

0x0005,

0xf4ba,	// (0x0009cdec) main_postcard_pane_g_ParamLimits

0xf4ba,	// (0x0009cdec) main_postcard_pane_g

0x390d,	// (0x0009123f) main_postcard_pane_g4

0xc87e,	// (0x0009a1b0) smil_status_volume_pane_g2

0x3950,	// (0x00091282) postcard_pane_ParamLimits

0x3950,	// (0x00091282) postcard_pane

0xb528,	// (0x00098e5a) postcard_pane_g1_ParamLimits

0xb528,	// (0x00098e5a) postcard_pane_g1

0x39a0,	// (0x000912d2) postcard_pane_g2_ParamLimits

0x39a0,	// (0x000912d2) postcard_pane_g2

0x39ac,	// (0x000912de) postcard_pane_g3_ParamLimits

0x39ac,	// (0x000912de) postcard_pane_g3

0xb536,	// (0x00098e68) postcard_pane_g4_ParamLimits

0xb536,	// (0x00098e68) postcard_pane_g4

0x39b8,	// (0x000912ea) postcard_pane_g5_ParamLimits

0x39b8,	// (0x000912ea) postcard_pane_g5

0x39cd,	// (0x000912ff) postcard_pane_g6_ParamLimits

0x39cd,	// (0x000912ff) postcard_pane_g6

0xb528,	// (0x00098e5a) postcard_pane_g7_ParamLimits

0xb528,	// (0x00098e5a) postcard_pane_g7

0x0006,

0xf4c7,	// (0x0009cdf9) postcard_pane_g_ParamLimits

0xf4c7,	// (0x0009cdf9) postcard_pane_g

0x39e5,	// (0x00091317) main_mp2_pane_g1_ParamLimits

0x39e5,	// (0x00091317) main_mp2_pane_g1

0x39f3,	// (0x00091325) main_mp2_pane_g2_ParamLimits

0x39f3,	// (0x00091325) main_mp2_pane_g2

0x39ff,	// (0x00091331) main_mp2_pane_g3_ParamLimits

0x39ff,	// (0x00091331) main_mp2_pane_g3

0x0002,

0xf4d6,	// (0x0009ce08) main_mp2_pane_g_ParamLimits

0xf4d6,	// (0x0009ce08) main_mp2_pane_g

0x3a0b,	// (0x0009133d) main_mp2_pane_t1_ParamLimits

0x3a0b,	// (0x0009133d) main_mp2_pane_t1

0x3a22,	// (0x00091354) main_mp2_pane_t2_ParamLimits

0x3a22,	// (0x00091354) main_mp2_pane_t2

0x3a34,	// (0x00091366) main_mp2_pane_t3_ParamLimits

0x3a34,	// (0x00091366) main_mp2_pane_t3

0x0002,

0xf4dd,	// (0x0009ce0f) main_mp2_pane_t_ParamLimits

0xf4dd,	// (0x0009ce0f) main_mp2_pane_t

0xb544,	// (0x00098e76) pec_content_pane_ParamLimits

0xb544,	// (0x00098e76) pec_content_pane

0xa54f,	// (0x00097e81) scroll_pane_cp015

0xb556,	// (0x00098e88) pec_attribute_pane_ParamLimits

0xb556,	// (0x00098e88) pec_attribute_pane

0x3a46,	// (0x00091378) pec_content_pane_g1_ParamLimits

0x3a46,	// (0x00091378) pec_content_pane_g1

0xb566,	// (0x00098e98) pec_content_pane_t1_ParamLimits

0xb566,	// (0x00098e98) pec_content_pane_t1

0xb578,	// (0x00098eaa) pec_content_pane_t2_ParamLimits

0xb578,	// (0x00098eaa) pec_content_pane_t2

0x0001,

0xf4e4,	// (0x0009ce16) pec_content_pane_t_ParamLimits

0xf4e4,	// (0x0009ce16) pec_content_pane_t

0x3a52,	// (0x00091384) list_single_graphic_pane_cp01_ParamLimits

0x3a52,	// (0x00091384) list_single_graphic_pane_cp01

0xa061,	// (0x00097993) bg_popup_sub_pane_cp04

0xb58a,	// (0x00098ebc) popup_mup_playback_window_g1

0xb596,	// (0x00098ec8) popup_mup_playback_window_t1

0xb5ab,	// (0x00098edd) popup_mup_playback_window_t2

0x0001,

0xf4e9,	// (0x0009ce1b) popup_mup_playback_window_t

0xb5e2,	// (0x00098f14) main_image_pane_g1_ParamLimits

0xb5e2,	// (0x00098f14) main_image_pane_g1

0xb625,	// (0x00098f57) scroll_pane_cp018_ParamLimits

0xb625,	// (0x00098f57) scroll_pane_cp018

0xb63d,	// (0x00098f6f) scroll_pane_cp016_ParamLimits

0xb63d,	// (0x00098f6f) scroll_pane_cp016

0x3b21,	// (0x00091453) smil2_image_pane_ParamLimits

0x3b21,	// (0x00091453) smil2_image_pane

0x3b57,	// (0x00091489) smil2_root_pane_ParamLimits

0x3b57,	// (0x00091489) smil2_root_pane

0x3b8f,	// (0x000914c1) smil2_text_pane_ParamLimits

0x3b8f,	// (0x000914c1) smil2_text_pane

0x9e06,	// (0x00097738) bg_list_pane_cp06

0xb679,	// (0x00098fab) grid_radio_pane

0x9e06,	// (0x00097738) bg_popup_window_pane_cp06

0xb683,	// (0x00098fb5) main_fmradio_pane_t1

0xb12d,	// (0x00098a5f) heading_pane_cp04

0xb691,	// (0x00098fc3) main_fmradio_pane_t2

0xc66d,	// (0x00099f9f) popup_cale_lunar_info_window_g1

0xb69f,	// (0x00098fd1) main_fmradio_pane_t3

0xc675,	// (0x00099fa7) popup_cale_lunar_info_window_g2

0xb6af,	// (0x00098fe1) main_fmradio_pane_t4

0x0001,

0xb6bd,	// (0x00098fef) main_fmradio_pane_t5

0x0004,

0xf5c4,	// (0x0009cef6) popup_cale_lunar_info_window_g

0xf4fe,	// (0x0009ce30) main_fmradio_pane_t

0xb6cb,	// (0x00098ffd) wait_bar_pane_cp03

0xb6d3,	// (0x00099005) cell_fmradio_pane_ParamLimits

0xb6d3,	// (0x00099005) cell_fmradio_pane

0xb528,	// (0x00098e5a) cell_fmradio_pane_g1_ParamLimits

0xb528,	// (0x00098e5a) cell_fmradio_pane_g1

0x9e06,	// (0x00097738) grid_highlight_pane_cp011

0xb6e8,	// (0x0009901a) poc_content_pane_ParamLimits

0xb6e8,	// (0x0009901a) poc_content_pane

0xb6fa,	// (0x0009902c) scroll_pane_cp019

0x3c1f,	// (0x00091551) popup_call_poc_act_window_ParamLimits

0x3c1f,	// (0x00091551) popup_call_poc_act_window

0x3c43,	// (0x00091575) popup_call_poc_inact_window_ParamLimits

0x3c43,	// (0x00091575) popup_call_poc_inact_window

0xf59b,	// (0x0009cecd) bg_popup_call_poc_act_pane_g

0xc5e5,	// (0x00099f17) bg_popup_call_poc_inact_pane_g1

0xc5ed,	// (0x00099f1f) bg_popup_call_poc_inact_pane_g2

0xb702,	// (0x00099034) popup_call_poc_act_window_g2

0xc5f5,	// (0x00099f27) bg_popup_call_poc_inact_pane_g3

0xc5fd,	// (0x00099f2f) bg_popup_call_poc_inact_pane_g4

0xc605,	// (0x00099f37) bg_popup_call_poc_inact_pane_g5

0xb70a,	// (0x0009903c) popup_call_poc_act_window_t1_ParamLimits

0xb70a,	// (0x0009903c) popup_call_poc_act_window_t1

0xb732,	// (0x00099064) popup_call_poc_act_window_t2_ParamLimits

0xb732,	// (0x00099064) popup_call_poc_act_window_t2

0xb75a,	// (0x0009908c) popup_call_poc_act_window_t3_ParamLimits

0xb75a,	// (0x0009908c) popup_call_poc_act_window_t3

0xb782,	// (0x000990b4) popup_call_poc_act_window_t4_ParamLimits

0xb782,	// (0x000990b4) popup_call_poc_act_window_t4

0x0003,

0xf509,	// (0x0009ce3b) popup_call_poc_act_window_t_ParamLimits

0xf509,	// (0x0009ce3b) popup_call_poc_act_window_t

0xc60d,	// (0x00099f3f) bg_popup_call_poc_inact_pane_g6

0xc615,	// (0x00099f47) bg_popup_call_poc_inact_pane_g7

0xc61d,	// (0x00099f4f) bg_popup_call_poc_inact_pane_g8

0xb794,	// (0x000990c6) popup_call_poc_inact_window_g2

0xc625,	// (0x00099f57) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf588,	// (0x0009ceba) bg_popup_call_poc_inact_pane_g

0xb79c,	// (0x000990ce) popup_call_poc_inact_window_t1_ParamLimits

0xb79c,	// (0x000990ce) popup_call_poc_inact_window_t1

0xb7b1,	// (0x000990e3) popup_call_poc_inact_window_t2_ParamLimits

0xb7b1,	// (0x000990e3) popup_call_poc_inact_window_t2

0xb7c6,	// (0x000990f8) popup_call_poc_inact_window_t3_ParamLimits

0xb7c6,	// (0x000990f8) popup_call_poc_inact_window_t3

0x0002,

0xf512,	// (0x0009ce44) popup_call_poc_inact_window_t_ParamLimits

0xf512,	// (0x0009ce44) popup_call_poc_inact_window_t

0xc7f1,	// (0x0009a123) context_pane_ParamLimits

0x44eb,	// (0x00091e1d) signal_pane_ParamLimits

0xb37b,	// (0x00098cad) main_call2_pane

0xc7df,	// (0x0009a111) popup_phob_thumbnail2_window_ParamLimits

0xc7df,	// (0x0009a111) popup_phob_thumbnail2_window

0xa66d,	// (0x00097f9f) aid_hotspot_pointer_arrow_pane

0xa675,	// (0x00097fa7) aid_hotspot_pointer_hand_pane

0x3fab,	// (0x000918dd) phob_pre_status_pane_g5

0x1a25,	// (0x0008f357) cams_zoom_pane_ParamLimits

0x1a34,	// (0x0008f366) image_vga_pane_ParamLimits

0x1a4e,	// (0x0008f380) main_camera_pane_g1_ParamLimits

0x1a60,	// (0x0008f392) main_camera_pane_g2_ParamLimits

0x1a70,	// (0x0008f3a2) main_camera_pane_g3_ParamLimits

0x1a84,	// (0x0008f3b6) main_camera_pane_g4_ParamLimits

0x1a98,	// (0x0008f3ca) main_camera_pane_g5_ParamLimits

0x1aac,	// (0x0008f3de) main_camera_pane_g6_ParamLimits

0x1ac0,	// (0x0008f3f2) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0009cb3c) main_camera_pane_g_ParamLimits

0x1ad4,	// (0x0008f406) main_camera_pane_t1_ParamLimits

0x1aea,	// (0x0008f41c) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0009cb4d) main_camera_pane_t_ParamLimits

0xa061,	// (0x00097993) bg_popup_preview_window_pane_cp01_ParamLimits

0xa061,	// (0x00097993) bg_popup_preview_window_pane_cp01

0xb7db,	// (0x0009910d) popup_phob_thumbnail2_window_g1_ParamLimits

0xb7db,	// (0x0009910d) popup_phob_thumbnail2_window_g1

0x9e06,	// (0x00097738) call2_cli_visual_pane

0x3c77,	// (0x000915a9) popup_call2_audio_conf_window_ParamLimits

0x3c77,	// (0x000915a9) popup_call2_audio_conf_window

0x3c9f,	// (0x000915d1) popup_call2_audio_first_window_ParamLimits

0x3c9f,	// (0x000915d1) popup_call2_audio_first_window

0x3d35,	// (0x00091667) popup_call2_audio_in_window_ParamLimits

0x3d35,	// (0x00091667) popup_call2_audio_in_window

0x3d81,	// (0x000916b3) popup_call2_audio_out_window_ParamLimits

0x3d81,	// (0x000916b3) popup_call2_audio_out_window

0x3df3,	// (0x00091725) popup_call2_audio_second_window_ParamLimits

0x3df3,	// (0x00091725) popup_call2_audio_second_window

0x3e59,	// (0x0009178b) popup_call2_audio_wait_window_ParamLimits

0x3e59,	// (0x0009178b) popup_call2_audio_wait_window

0x9e06,	// (0x00097738) bg_popup_call2_act_pane_cp03

0xa043,	// (0x00097975) list_conf_pane_cp

0xb7e7,	// (0x00099119) popup_call2_audio_conf_window_t1

0xb7f5,	// (0x00099127) list_single_graphic_popup_conf2_pane_ParamLimits

0xb7f5,	// (0x00099127) list_single_graphic_popup_conf2_pane

0xb19c,	// (0x00098ace) list_highlight_pane_cp04

0xb808,	// (0x0009913a) list_single_graphic_popup_conf2_pane_g1

0xb1ad,	// (0x00098adf) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf519,	// (0x0009ce4b) list_single_graphic_popup_conf2_pane_g

0xb812,	// (0x00099144) list_single_graphic_popup_conf2_pane_t1

0xb820,	// (0x00099152) bg_popup_call2_act_pane_cp01_ParamLimits

0xb820,	// (0x00099152) bg_popup_call2_act_pane_cp01

0xb8aa,	// (0x000991dc) call_type_pane_cp05_ParamLimits

0xb8aa,	// (0x000991dc) call_type_pane_cp05

0xb8fe,	// (0x00099230) popup_call2_audio_second_window_g1_ParamLimits

0xb8fe,	// (0x00099230) popup_call2_audio_second_window_g1

0xb952,	// (0x00099284) popup_call2_audio_second_window_g2_ParamLimits

0xb952,	// (0x00099284) popup_call2_audio_second_window_g2

0x0002,

0xf51e,	// (0x0009ce50) popup_call2_audio_second_window_g_ParamLimits

0xf51e,	// (0x0009ce50) popup_call2_audio_second_window_g

0xb9b7,	// (0x000992e9) popup_call2_audio_second_window_t1_ParamLimits

0xb9b7,	// (0x000992e9) popup_call2_audio_second_window_t1

0xba72,	// (0x000993a4) popup_call2_audio_second_window_t2_ParamLimits

0xba72,	// (0x000993a4) popup_call2_audio_second_window_t2

0xbac5,	// (0x000993f7) popup_call2_audio_second_window_t3_ParamLimits

0xbac5,	// (0x000993f7) popup_call2_audio_second_window_t3

0x0003,

0xf525,	// (0x0009ce57) popup_call2_audio_second_window_t_ParamLimits

0xf525,	// (0x0009ce57) popup_call2_audio_second_window_t

0x9e06,	// (0x00097738) bg_popup_call2_in_pane_cp02

0x9e10,	// (0x00097742) call_type_pane_cp04

0x9e18,	// (0x0009774a) popup_call2_audio_wait_window_g1

0x9e20,	// (0x00097752) popup_call2_audio_wait_window_g2

0x0001,

0xf0f5,	// (0x0009ca27) popup_call2_audio_wait_window_g

0x9e28,	// (0x0009775a) popup_call2_audio_wait_window_t3

0xbbb8,	// (0x000994ea) bg_popup_call2_act_pane_ParamLimits

0xbbb8,	// (0x000994ea) bg_popup_call2_act_pane

0xbc78,	// (0x000995aa) call_type_pane_cp03_ParamLimits

0xbc78,	// (0x000995aa) call_type_pane_cp03

0xbcdc,	// (0x0009960e) popup_call2_audio_first_window_g1_ParamLimits

0xbcdc,	// (0x0009960e) popup_call2_audio_first_window_g1

0xbd4c,	// (0x0009967e) popup_call2_audio_first_window_g2_ParamLimits

0xbd4c,	// (0x0009967e) popup_call2_audio_first_window_g2

0xb43a,	// (0x00098d6c) popup_call2_audio_first_window_g3_ParamLimits

0xb43a,	// (0x00098d6c) popup_call2_audio_first_window_g3

0x0004,

0xf52e,	// (0x0009ce60) popup_call2_audio_first_window_g_ParamLimits

0xf52e,	// (0x0009ce60) popup_call2_audio_first_window_g

0xbe2a,	// (0x0009975c) popup_call2_audio_first_window_t1_ParamLimits

0xbe2a,	// (0x0009975c) popup_call2_audio_first_window_t1

0xbf2d,	// (0x0009985f) popup_call2_audio_first_window_t4_ParamLimits

0xbf2d,	// (0x0009985f) popup_call2_audio_first_window_t4

0xc010,	// (0x00099942) popup_call2_audio_first_window_t5_ParamLimits

0xc010,	// (0x00099942) popup_call2_audio_first_window_t5

0x0003,

0xf539,	// (0x0009ce6b) popup_call2_audio_first_window_t_ParamLimits

0xf539,	// (0x0009ce6b) popup_call2_audio_first_window_t

0xa059,	// (0x0009798b) bg_popup_call2_act_pane_g1

0xc67f,	// (0x00099fb1) popup_cale_lunar_info_window_t1

0xc68d,	// (0x00099fbf) popup_cale_lunar_info_window_t2

0xc69b,	// (0x00099fcd) popup_cale_lunar_info_window_t3

0x9e06,	// (0x00097738) bg_popup_call2_bubble_pane

0xc111,	// (0x00099a43) bg_popup_call2_in_pane_cp01_ParamLimits

0xc111,	// (0x00099a43) bg_popup_call2_in_pane_cp01

0x9ae2,	// (0x00097414) call_type_pane_cp02

0xc159,	// (0x00099a8b) popup_call2_audio_out_window_g1_ParamLimits

0xc159,	// (0x00099a8b) popup_call2_audio_out_window_g1

0xc185,	// (0x00099ab7) popup_call2_audio_out_window_g2_ParamLimits

0xc185,	// (0x00099ab7) popup_call2_audio_out_window_g2

0xc1ad,	// (0x00099adf) popup_call2_audio_out_window_g3_ParamLimits

0xc1ad,	// (0x00099adf) popup_call2_audio_out_window_g3

0x0003,

0xf542,	// (0x0009ce74) popup_call2_audio_out_window_g_ParamLimits

0xf542,	// (0x0009ce74) popup_call2_audio_out_window_g

0xc1e8,	// (0x00099b1a) popup_call2_audio_out_window_t1_ParamLimits

0xc1e8,	// (0x00099b1a) popup_call2_audio_out_window_t1

0xc247,	// (0x00099b79) popup_call2_audio_out_window_t2_ParamLimits

0xc247,	// (0x00099b79) popup_call2_audio_out_window_t2

0xc29b,	// (0x00099bcd) popup_call2_audio_out_window_t3_ParamLimits

0xc29b,	// (0x00099bcd) popup_call2_audio_out_window_t3

0xc2b1,	// (0x00099be3) popup_call2_audio_out_window_t4_ParamLimits

0xc2b1,	// (0x00099be3) popup_call2_audio_out_window_t4

0xc2c7,	// (0x00099bf9) popup_call2_audio_out_window_t5_ParamLimits

0xc2c7,	// (0x00099bf9) popup_call2_audio_out_window_t5

0x0005,

0xf54b,	// (0x0009ce7d) popup_call2_audio_out_window_t_ParamLimits

0xf54b,	// (0x0009ce7d) popup_call2_audio_out_window_t

0xc32b,	// (0x00099c5d) bg_popup_call2_in_pane_ParamLimits

0xc32b,	// (0x00099c5d) bg_popup_call2_in_pane

0xc387,	// (0x00099cb9) popup_call2_audio_in_window_g1_ParamLimits

0xc387,	// (0x00099cb9) popup_call2_audio_in_window_g1

0xc3bf,	// (0x00099cf1) popup_call2_audio_in_window_g2_ParamLimits

0xc3bf,	// (0x00099cf1) popup_call2_audio_in_window_g2

0xc3f7,	// (0x00099d29) popup_call2_audio_in_window_g3_ParamLimits

0xc3f7,	// (0x00099d29) popup_call2_audio_in_window_g3

0x0003,

0xf558,	// (0x0009ce8a) popup_call2_audio_in_window_g_ParamLimits

0xf558,	// (0x0009ce8a) popup_call2_audio_in_window_g

0xc44f,	// (0x00099d81) popup_call2_audio_in_window_t1_ParamLimits

0xc44f,	// (0x00099d81) popup_call2_audio_in_window_t1

0xc4cf,	// (0x00099e01) popup_call2_audio_in_window_t2_ParamLimits

0xc4cf,	// (0x00099e01) popup_call2_audio_in_window_t2

0xc54f,	// (0x00099e81) popup_call2_audio_in_window_t3_ParamLimits

0xc54f,	// (0x00099e81) popup_call2_audio_in_window_t3

0xc569,	// (0x00099e9b) popup_call2_audio_in_window_t4_ParamLimits

0xc569,	// (0x00099e9b) popup_call2_audio_in_window_t4

0xc57b,	// (0x00099ead) popup_call2_audio_in_window_t5_ParamLimits

0xc57b,	// (0x00099ead) popup_call2_audio_in_window_t5

0xc590,	// (0x00099ec2) popup_call2_audio_in_window_t6_ParamLimits

0xc590,	// (0x00099ec2) popup_call2_audio_in_window_t6

0x0005,

0xf561,	// (0x0009ce93) popup_call2_audio_in_window_t_ParamLimits

0xf561,	// (0x0009ce93) popup_call2_audio_in_window_t

0xa059,	// (0x0009798b) bg_popup_call2_in_pane_g1

0xc6a9,	// (0x00099fdb) popup_cale_lunar_info_window_t4

0x0003,

0xf5c9,	// (0x0009cefb) popup_cale_lunar_info_window_t

0xa061,	// (0x00097993) bg_popup_call2_rect_pane_ParamLimits

0xa061,	// (0x00097993) bg_popup_call2_rect_pane

0x9e06,	// (0x00097738) call2_cli_visual_graphic_pane

0x9e06,	// (0x00097738) call2_cli_visual_text_pane

0xa6af,	// (0x00097fe1) smil_status_volume_pane_g3

0x0002,

0xa1c1,	// (0x00097af3) call2_cli_visual_graphic_pane_g1

0xa1c1,	// (0x00097af3) call2_cli_visual_graphic_pane_g2

0xa1c1,	// (0x00097af3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf56e,	// (0x0009cea0) call2_cli_visual_graphic_pane_g

0xc5a5,	// (0x00099ed7) bg_popup_call2_rect_pane_g1

0xa269,	// (0x00097b9b) bg_popup_call2_rect_pane_g2

0xc5ad,	// (0x00099edf) bg_popup_call2_rect_pane_g3

0xc5b5,	// (0x00099ee7) bg_popup_call2_rect_pane_g4

0xc5bd,	// (0x00099eef) bg_popup_call2_rect_pane_g5

0xc5c5,	// (0x00099ef7) bg_popup_call2_rect_pane_g6

0xc5cd,	// (0x00099eff) bg_popup_call2_rect_pane_g7

0xc5d5,	// (0x00099f07) bg_popup_call2_rect_pane_g8

0xc5dd,	// (0x00099f0f) bg_popup_call2_rect_pane_g9

0x0008,

0xf575,	// (0x0009cea7) bg_popup_call2_rect_pane_g

0xc5e5,	// (0x00099f17) bg_popup_call2_bubble_pane_g1

0xc5ed,	// (0x00099f1f) bg_popup_call2_bubble_pane_g2

0xc5f5,	// (0x00099f27) bg_popup_call2_bubble_pane_g3

0xc5fd,	// (0x00099f2f) bg_popup_call2_bubble_pane_g4

0xc605,	// (0x00099f37) bg_popup_call2_bubble_pane_g5

0xc60d,	// (0x00099f3f) bg_popup_call2_bubble_pane_g6

0xc615,	// (0x00099f47) bg_popup_call2_bubble_pane_g7

0xc61d,	// (0x00099f4f) bg_popup_call2_bubble_pane_g8

0xc625,	// (0x00099f57) bg_popup_call2_bubble_pane_g9

0x0008,

0xf588,	// (0x0009ceba) bg_popup_call2_bubble_pane_g

0x11ab,	// (0x0008eadd) aid_cale_week_size_cell_pane

0x1b04,	// (0x0008f436) aid_cams_cif_uncrop_pane_ParamLimits

0x1b04,	// (0x0008f436) aid_cams_cif_uncrop_pane

0x1cbd,	// (0x0008f5ef) aid_cams_size_cell_ParamLimits

0x1cbd,	// (0x0008f5ef) aid_cams_size_cell

0x1cd1,	// (0x0008f603) grid_cams_pane_ParamLimits

0x1ceb,	// (0x0008f61d) linegrid_cams_pane_ParamLimits

0x1dc7,	// (0x0008f6f9) call_video_pane_t1

0x1de1,	// (0x0008f713) call_video_pane_t2

0x0001,

0xf26e,	// (0x0009cba0) call_video_pane_t

0x2215,	// (0x0008fb47) aid_cale_month_size_cell_pane_ParamLimits

0x2215,	// (0x0008fb47) aid_cale_month_size_cell_pane

0xf612,	// (0x0009cf44) smil_status_volume_pane_g

0xa6bc,	// (0x00097fee) volume_smil_pane_ParamLimits

0x99a6,	// (0x000972d8) aid_popup2_width_pane

0x1109,	// (0x0008ea3b) cell_qdial_pane_g4_ParamLimits

0x1109,	// (0x0008ea3b) cell_qdial_pane_g4

0x3160,	// (0x00090a92) aid_blid_cardinal_pane_ParamLimits

0x316c,	// (0x00090a9e) aid_blid_destination_pane_ParamLimits

0x316c,	// (0x00090a9e) aid_blid_destination_pane

0xa061,	// (0x00097993) bg_popup_call_poc_act_pane_ParamLimits

0xa061,	// (0x00097993) bg_popup_call_poc_act_pane

0xa061,	// (0x00097993) bg_popup_call_poc_inact_pane_ParamLimits

0xa061,	// (0x00097993) bg_popup_call_poc_inact_pane

0xc62d,	// (0x00099f5f) bg_popup_call_poc_act_pane_g1

0xc635,	// (0x00099f67) bg_popup_call_poc_act_pane_g2

0xc63d,	// (0x00099f6f) bg_popup_call_poc_act_pane_g3

0xc5fd,	// (0x00099f2f) bg_popup_call_poc_act_pane_g4

0xc605,	// (0x00099f37) bg_popup_call_poc_act_pane_g5

0xc645,	// (0x00099f77) bg_popup_call_poc_act_pane_g6

0xc615,	// (0x00099f47) bg_popup_call_poc_act_pane_g7

0xc64d,	// (0x00099f7f) bg_popup_call_poc_act_pane_g8

0x9e06,	// (0x00097738) main_usb_pane

0xc7b6,	// (0x0009a0e8) popup_cale_lunar_info_window

0x20aa,	// (0x0008f9dc) im_reading_pane_t1_ParamLimits

0xa4a7,	// (0x00097dd9) list_im_pane_ParamLimits

0xa4b8,	// (0x00097dea) scroll_pane_cp07_ParamLimits

0x9e06,	// (0x00097738) grid_highlight_pane_cp012

0xa061,	// (0x00097993) mup_scale_pane_ParamLimits

0xb528,	// (0x00098e5a) main_usb_pane_g1_ParamLimits

0xb528,	// (0x00098e5a) main_usb_pane_g1

0x3eb7,	// (0x000917e9) main_usb_pane_g2_ParamLimits

0x3eb7,	// (0x000917e9) main_usb_pane_g2

0x0001,

0xf5b2,	// (0x0009cee4) main_usb_pane_g_ParamLimits

0xf5b2,	// (0x0009cee4) main_usb_pane_g

0x3ecd,	// (0x000917ff) main_usb_pane_t1_ParamLimits

0x3ecd,	// (0x000917ff) main_usb_pane_t1

0x3edf,	// (0x00091811) main_usb_pane_t2_ParamLimits

0x3edf,	// (0x00091811) main_usb_pane_t2

0x3ef1,	// (0x00091823) main_usb_pane_t3_ParamLimits

0x3ef1,	// (0x00091823) main_usb_pane_t3

0x3f03,	// (0x00091835) main_usb_pane_t4_ParamLimits

0x3f03,	// (0x00091835) main_usb_pane_t4

0x3f18,	// (0x0009184a) main_usb_pane_t5_ParamLimits

0x3f18,	// (0x0009184a) main_usb_pane_t5

0x3f2d,	// (0x0009185f) main_usb_pane_t6_ParamLimits

0x3f2d,	// (0x0009185f) main_usb_pane_t6

0x0005,

0xf5b7,	// (0x0009cee9) main_usb_pane_t_ParamLimits

0x3101,	// (0x00090a33) aid_text_placing

0x310c,	// (0x00090a3e) main_location2_pane_t1_ParamLimits

0x3120,	// (0x00090a52) main_location2_pane_t2_ParamLimits

0x3136,	// (0x00090a68) main_location2_pane_t3_ParamLimits

0x314c,	// (0x00090a7e) main_location2_pane_t4_ParamLimits

0x314c,	// (0x00090a7e) main_location2_pane_t4

0xf3d6,	// (0x0009cd08) main_location2_pane_t_ParamLimits

0xa09d,	// (0x000979cf) find_pinb_pane_g2_ParamLimits

0xa09d,	// (0x000979cf) find_pinb_pane_g2

0x0001,

0xf11b,	// (0x0009ca4d) find_pinb_pane_g_ParamLimits

0xf11b,	// (0x0009ca4d) find_pinb_pane_g

0xa0a9,	// (0x000979db) find_pinb_pane_t1_ParamLimits

0xa0bb,	// (0x000979ed) find_pinb_pane_t2_ParamLimits

0xf120,	// (0x0009ca52) find_pinb_pane_t_ParamLimits

0x9e06,	// (0x00097738) main_call3_pane

0x27e4,	// (0x00090116) cale_month_day_heading_pane_t1_ParamLimits

0x286a,	// (0x0009019c) cale_month_day_heading_pane_t2_ParamLimits

0x28fb,	// (0x0009022d) cale_month_day_heading_pane_t3_ParamLimits

0x298c,	// (0x000902be) cale_month_day_heading_pane_t4_ParamLimits

0x2a1d,	// (0x0009034f) cale_month_day_heading_pane_t5_ParamLimits

0x2abe,	// (0x000903f0) cale_month_day_heading_pane_t6_ParamLimits

0x2b63,	// (0x00090495) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0009cbd8) cale_month_day_heading_pane_t_ParamLimits

0x2e15,	// (0x00090747) smil_status_volume_pane

0x3974,	// (0x000912a6) postcard_address_pane_ParamLimits

0x3974,	// (0x000912a6) postcard_address_pane

0x398a,	// (0x000912bc) postcard_message_pane_ParamLimits

0x398a,	// (0x000912bc) postcard_message_pane

0x3e93,	// (0x000917c5) call2_cli_visual_pane_t1_ParamLimits

0x3e93,	// (0x000917c5) call2_cli_visual_pane_t1

0x4720,	// (0x00092052) postcard_message_pane_t1_ParamLimits

0x4720,	// (0x00092052) postcard_message_pane_t1

0x4709,	// (0x0009203b) postcard_address_pane_t1_ParamLimits

0x4709,	// (0x0009203b) postcard_address_pane_t1

0x46f5,	// (0x00092027) popup_call3_audio_in_window_ParamLimits

0x46f5,	// (0x00092027) popup_call3_audio_in_window

0x457a,	// (0x00091eac) bg_popup_call3_in_pane_ParamLimits

0x457a,	// (0x00091eac) bg_popup_call3_in_pane

0x45f6,	// (0x00091f28) popup_call3_audio_in_window_g1_ParamLimits

0x45f6,	// (0x00091f28) popup_call3_audio_in_window_g1

0x4616,	// (0x00091f48) popup_call3_audio_in_window_g2_ParamLimits

0x4616,	// (0x00091f48) popup_call3_audio_in_window_g2

0x4636,	// (0x00091f68) popup_call3_audio_in_window_g3_ParamLimits

0x4636,	// (0x00091f68) popup_call3_audio_in_window_g3

0x0003,

0xf619,	// (0x0009cf4b) popup_call3_audio_in_window_g_ParamLimits

0xf619,	// (0x0009cf4b) popup_call3_audio_in_window_g

0x4667,	// (0x00091f99) popup_call3_audio_in_window_t1_ParamLimits

0x4667,	// (0x00091f99) popup_call3_audio_in_window_t1

0x46a5,	// (0x00091fd7) popup_call3_audio_in_window_t2_ParamLimits

0x46a5,	// (0x00091fd7) popup_call3_audio_in_window_t2

0x46e3,	// (0x00092015) popup_call3_audio_in_window_t3_ParamLimits

0x46e3,	// (0x00092015) popup_call3_audio_in_window_t3

0x0002,

0xf622,	// (0x0009cf54) popup_call3_audio_in_window_t_ParamLimits

0xf622,	// (0x0009cf54) popup_call3_audio_in_window_t

0xb37b,	// (0x00098cad) bg_popup_call3_rect_pane

0xc5a5,	// (0x00099ed7) bg_popup_call3_rect_pane_g1

0xa269,	// (0x00097b9b) bg_popup_call3_rect_pane_g2

0xc5ad,	// (0x00099edf) bg_popup_call3_rect_pane_g3

0xc5b5,	// (0x00099ee7) bg_popup_call3_rect_pane_g4

0xc5bd,	// (0x00099eef) bg_popup_call3_rect_pane_g5

0xc5c5,	// (0x00099ef7) bg_popup_call3_rect_pane_g6

0xc5cd,	// (0x00099eff) bg_popup_call3_rect_pane_g7

0x3566,	// (0x00090e98) mup_visualizer_osc_pane

0xb448,	// (0x00098d7a) mup_visualizer_spec_pane

0x45aa,	// (0x00091edc) call3_video_qcif_pane_ParamLimits

0x45aa,	// (0x00091edc) call3_video_qcif_pane

0x45bd,	// (0x00091eef) call3_video_qcif_uncrop_pane_ParamLimits

0x45bd,	// (0x00091eef) call3_video_qcif_uncrop_pane

0x45cd,	// (0x00091eff) call3_video_subqcif_pane_ParamLimits

0x45cd,	// (0x00091eff) call3_video_subqcif_pane

0x45e3,	// (0x00091f15) call3_video_subqcif_uncrop_pane_ParamLimits

0x45e3,	// (0x00091f15) call3_video_subqcif_uncrop_pane

0x4656,	// (0x00091f88) popup_call3_audio_in_window_g4_ParamLimits

0x4656,	// (0x00091f88) popup_call3_audio_in_window_g4

0x4569,	// (0x00091e9b) mup_spec_half_pane

0x4572,	// (0x00091ea4) mup_spec_half_pane_cp

0xc851,	// (0x0009a183) mup_osc_middle_pane

0xc85a,	// (0x0009a18c) mup_visualizer_osc_pane_g1

0x4549,	// (0x00091e7b) mup_spec_bar_pane_ParamLimits

0x4549,	// (0x00091e7b) mup_spec_bar_pane

0xc83e,	// (0x0009a170) mup_spec_bar_pane_g1

0xc848,	// (0x0009a17a) mup_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0009cf3f) mup_spec_bar_pane_g

0x11ab,	// (0x0008eadd) aid_cale_week_size_cell_pane_ParamLimits

0x11c5,	// (0x0008eaf7) bg_cale_heading_pane_ParamLimits

0xa2e5,	// (0x00097c17) bg_cale_pane_cp01_ParamLimits

0x11ee,	// (0x0008eb20) cale_week_corner_pane_ParamLimits

0x120d,	// (0x0008eb3f) cale_week_day_heading_pane_ParamLimits

0x123b,	// (0x0008eb6d) cale_week_scroll_pane_g1_ParamLimits

0x125f,	// (0x0008eb91) cale_week_scroll_pane_g2_ParamLimits

0x1277,	// (0x0008eba9) cale_week_scroll_pane_g3_ParamLimits

0x128f,	// (0x0008ebc1) cale_week_scroll_pane_g4_ParamLimits

0x12ab,	// (0x0008ebdd) cale_week_scroll_pane_g5_ParamLimits

0x12cb,	// (0x0008ebfd) cale_week_scroll_pane_g6_ParamLimits

0x12eb,	// (0x0008ec1d) cale_week_scroll_pane_g7_ParamLimits

0x130f,	// (0x0008ec41) cale_week_scroll_pane_g8_ParamLimits

0x1333,	// (0x0008ec65) cale_week_scroll_pane_g9_ParamLimits

0x1350,	// (0x0008ec82) cale_week_scroll_pane_g10_ParamLimits

0x136d,	// (0x0008ec9f) cale_week_scroll_pane_g11_ParamLimits

0x138a,	// (0x0008ecbc) cale_week_scroll_pane_g12_ParamLimits

0x13a7,	// (0x0008ecd9) cale_week_scroll_pane_g13_ParamLimits

0x13c4,	// (0x0008ecf6) cale_week_scroll_pane_g14_ParamLimits

0x13ed,	// (0x0008ed1f) cale_week_scroll_pane_g15_ParamLimits

0xf1ac,	// (0x0009cade) cale_week_scroll_pane_g_ParamLimits

0x143a,	// (0x0008ed6c) cale_week_time_pane_ParamLimits

0x145e,	// (0x0008ed90) grid_cale_week_pane_ParamLimits

0xa303,	// (0x00097c35) listscroll_cale_week_pane_t1

0xa315,	// (0x00097c47) scroll_pane_cp08_ParamLimits

0x2282,	// (0x0008fbb4) cale_month_corner_pane_ParamLimits

0xad7b,	// (0x000986ad) cale_month_pane_t1

0x276a,	// (0x0009009c) cale_month_week_pane_ParamLimits

0x2f2f,	// (0x00090861) popup_call_status_window_g1_ParamLimits

0x2f43,	// (0x00090875) popup_call_status_window_g2_ParamLimits

0x2f57,	// (0x00090889) popup_call_status_window_g3_ParamLimits

0xf35d,	// (0x0009cc8f) popup_call_status_window_g_ParamLimits

0xb11d,	// (0x00098a4f) aid_call2_pane

0xfdb2,	// (0x0008d6e4) msg_header_pane_g1

0x3974,	// (0x000912a6) postcard_address2_pane_ParamLimits

0x3974,	// (0x000912a6) postcard_address2_pane

0x398a,	// (0x000912bc) postcard_message2_pane_ParamLimits

0x398a,	// (0x000912bc) postcard_message2_pane

0x44f9,	// (0x00091e2b) message2_row_pane_ParamLimits

0x44f9,	// (0x00091e2b) message2_row_pane

0x4516,	// (0x00091e48) address2_row_pane_ParamLimits

0x4516,	// (0x00091e48) address2_row_pane

0xc80c,	// (0x0009a13e) postcard_message2_row_pane_g1

0xc814,	// (0x0009a146) postcard_message2_row_pane_t1

0xc80c,	// (0x0009a13e) address2_row_pane_g1

0xc814,	// (0x0009a146) address2_row_pane_t1

0x198a,	// (0x0008f2bc) aid_size_cell_vorec

0x9e06,	// (0x00097738) main_rss_pane

0x4529,	// (0x00091e5b) rss_list_single_pane_ParamLimits

0x4529,	// (0x00091e5b) rss_list_single_pane

0xc822,	// (0x0009a154) rss_list_single_pane_t1

0xc830,	// (0x0009a162) rss_list_single_pane_t2

0x0001,

0xf608,	// (0x0009cf3a) rss_list_single_pane_t

0x9e06,	// (0x00097738) main_camera2_pane

0x9e06,	// (0x00097738) main_video2_pane

0x478f,	// (0x000920c1) cams_zoom_pane_cp2_ParamLimits

0x478f,	// (0x000920c1) cams_zoom_pane_cp2

0x47a6,	// (0x000920d8) image2_vga_pane_ParamLimits

0x47a6,	// (0x000920d8) image2_vga_pane

0x47ee,	// (0x00092120) main_camera2_pane_g1_ParamLimits

0x47ee,	// (0x00092120) main_camera2_pane_g1

0x480e,	// (0x00092140) main_camera2_pane_g2_ParamLimits

0x480e,	// (0x00092140) main_camera2_pane_g2

0x4825,	// (0x00092157) main_camera2_pane_g3_ParamLimits

0x4825,	// (0x00092157) main_camera2_pane_g3

0x483c,	// (0x0009216e) main_camera2_pane_g4_ParamLimits

0x483c,	// (0x0009216e) main_camera2_pane_g4

0x4853,	// (0x00092185) main_camera2_pane_g5_ParamLimits

0x4853,	// (0x00092185) main_camera2_pane_g5

0x486a,	// (0x0009219c) main_camera2_pane_g6_ParamLimits

0x486a,	// (0x0009219c) main_camera2_pane_g6

0x4881,	// (0x000921b3) main_camera2_pane_g7_ParamLimits

0x4881,	// (0x000921b3) main_camera2_pane_g7

0x4898,	// (0x000921ca) main_camera2_pane_g8_ParamLimits

0x4898,	// (0x000921ca) main_camera2_pane_g8

0x0008,

0xf629,	// (0x0009cf5b) main_camera2_pane_g_ParamLimits

0xf629,	// (0x0009cf5b) main_camera2_pane_g

0x48c6,	// (0x000921f8) main_camera2_pane_t1_ParamLimits

0x48c6,	// (0x000921f8) main_camera2_pane_t1

0x48fb,	// (0x0009222d) main_camera2_pane_t2_ParamLimits

0x48fb,	// (0x0009222d) main_camera2_pane_t2

0x4918,	// (0x0009224a) main_camera2_pane_t3_ParamLimits

0x4918,	// (0x0009224a) main_camera2_pane_t3

0x4976,	// (0x000922a8) main_camera2_pane_t4_ParamLimits

0x4976,	// (0x000922a8) main_camera2_pane_t4

0x0006,

0xf63c,	// (0x0009cf6e) main_camera2_pane_t_ParamLimits

0xf63c,	// (0x0009cf6e) main_camera2_pane_t

0x49ff,	// (0x00092331) cams_zoom_pane_cp4_ParamLimits

0x49ff,	// (0x00092331) cams_zoom_pane_cp4

0x4a15,	// (0x00092347) image2_cif_pane_ParamLimits

0x4a15,	// (0x00092347) image2_cif_pane

0x4a40,	// (0x00092372) image2_subqcif_pane_ParamLimits

0x4a40,	// (0x00092372) image2_subqcif_pane

0x4a5b,	// (0x0009238d) main_video2_pane_g1_ParamLimits

0x4a5b,	// (0x0009238d) main_video2_pane_g1

0x4a75,	// (0x000923a7) main_video2_pane_g2_ParamLimits

0x4a75,	// (0x000923a7) main_video2_pane_g2

0x4a8b,	// (0x000923bd) main_video2_pane_g3_ParamLimits

0x4a8b,	// (0x000923bd) main_video2_pane_g3

0x4aa1,	// (0x000923d3) main_video2_pane_g4_ParamLimits

0x4aa1,	// (0x000923d3) main_video2_pane_g4

0x4ab7,	// (0x000923e9) main_video2_pane_g5_ParamLimits

0x4ab7,	// (0x000923e9) main_video2_pane_g5

0x4acd,	// (0x000923ff) main_video2_pane_g6_ParamLimits

0x4acd,	// (0x000923ff) main_video2_pane_g6

0x0005,

0xf64b,	// (0x0009cf7d) main_video2_pane_g_ParamLimits

0xf64b,	// (0x0009cf7d) main_video2_pane_g

0x4ae7,	// (0x00092419) main_video2_pane_t1_ParamLimits

0x4ae7,	// (0x00092419) main_video2_pane_t1

0x4b0b,	// (0x0009243d) main_video2_pane_t2_ParamLimits

0x4b0b,	// (0x0009243d) main_video2_pane_t2

0x4b5b,	// (0x0009248d) main_video2_pane_t3_ParamLimits

0x4b5b,	// (0x0009248d) main_video2_pane_t3

0x0002,

0xf658,	// (0x0009cf8a) main_video2_pane_t_ParamLimits

0xf658,	// (0x0009cf8a) main_video2_pane_t

0x3feb,	// (0x0009191d) call_muted_g2

0x0001,

0xf5fa,	// (0x0009cf2c) call_muted_g

0x9e06,	// (0x00097738) main_mup2_pane

0x4ba3,	// (0x000924d5) main_mup2_pane_g1_ParamLimits

0x4ba3,	// (0x000924d5) main_mup2_pane_g1

0x4baf,	// (0x000924e1) main_mup2_pane_g2_ParamLimits

0x4baf,	// (0x000924e1) main_mup2_pane_g2

0xa727,	// (0x00098059) main_mup_pane_g13_cp1

0xa72f,	// (0x00098061) mup_volume_pane_cp1

0x4bcd,	// (0x000924ff) main_mup2_pane_g4_ParamLimits

0x4bcd,	// (0x000924ff) main_mup2_pane_g4

0x4bdf,	// (0x00092511) main_mup2_pane_g5_ParamLimits

0x4bdf,	// (0x00092511) main_mup2_pane_g5

0x4bf1,	// (0x00092523) main_mup2_pane_g6_ParamLimits

0x4bf1,	// (0x00092523) main_mup2_pane_g6

0x4c03,	// (0x00092535) main_mup2_pane_g7_ParamLimits

0x4c03,	// (0x00092535) main_mup2_pane_g7

0x0006,

0xf65f,	// (0x0009cf91) main_mup2_pane_g_ParamLimits

0xf65f,	// (0x0009cf91) main_mup2_pane_g

0x4c1b,	// (0x0009254d) main_mup2_pane_t1_ParamLimits

0x4c1b,	// (0x0009254d) main_mup2_pane_t1

0x4c31,	// (0x00092563) main_mup2_pane_t2_ParamLimits

0x4c31,	// (0x00092563) main_mup2_pane_t2

0x4c47,	// (0x00092579) main_mup2_pane_t3_ParamLimits

0x4c47,	// (0x00092579) main_mup2_pane_t3

0x4c5d,	// (0x0009258f) main_mup2_pane_t4_ParamLimits

0x4c5d,	// (0x0009258f) main_mup2_pane_t4

0x4c75,	// (0x000925a7) main_mup2_pane_t5_ParamLimits

0x4c75,	// (0x000925a7) main_mup2_pane_t5

0x4c8d,	// (0x000925bf) main_mup2_pane_t6_ParamLimits

0x4c8d,	// (0x000925bf) main_mup2_pane_t6

0x0005,

0xf66e,	// (0x0009cfa0) main_mup2_pane_t_ParamLimits

0xf66e,	// (0x0009cfa0) main_mup2_pane_t

0x4cbd,	// (0x000925ef) mup2_visualizer_pane_ParamLimits

0x4cbd,	// (0x000925ef) mup2_visualizer_pane

0x4ceb,	// (0x0009261d) mup_progress_pane_cp_ParamLimits

0x4ceb,	// (0x0009261d) mup_progress_pane_cp

0xa712,	// (0x00098044) mup_volume_pane_cp_ParamLimits

0xa712,	// (0x00098044) mup_volume_pane_cp

0x4d01,	// (0x00092633) mup2_visualizer_pane_g1_ParamLimits

0x4d01,	// (0x00092633) mup2_visualizer_pane_g1

0xc891,	// (0x0009a1c3) mup2_visualizer_pane_g2_ParamLimits

0xc891,	// (0x0009a1c3) mup2_visualizer_pane_g2

0x4d18,	// (0x0009264a) mup2_visualizer_pane_g3_ParamLimits

0x4d18,	// (0x0009264a) mup2_visualizer_pane_g3

0x0002,

0xf67b,	// (0x0009cfad) mup2_visualizer_pane_g_ParamLimits

0xf67b,	// (0x0009cfad) mup2_visualizer_pane_g

0xb671,	// (0x00098fa3) aid_size_cell_fmradio

0x419b,	// (0x00091acd) aid_height_parent_landcape

0xa536,	// (0x00097e68) wml_content_pane_cp

0xa53e,	// (0x00097e70) wml_tabs_pane

0xa547,	// (0x00097e79) popup_wml_miniature_window

0xa54f,	// (0x00097e81) scroll_pane_cp021

0xa563,	// (0x00097e95) wml_content_pane_comp8

0x9e06,	// (0x00097738) bg_popup_sub_pane_cp05

0xc8af,	// (0x0009a1e1) popup_wml_miniature_window_g1

0xc8b7,	// (0x0009a1e9) wml_miniature_view_pane

0x4d24,	// (0x00092656) aid_size_wml_view

0x4d2c,	// (0x0009265e) wml_miniature_view_pane_g1

0x4d35,	// (0x00092667) wml_miniature_view_pane_g2

0x4d3e,	// (0x00092670) wml_miniature_view_pane_g3

0x4d46,	// (0x00092678) wml_miniature_view_pane_g4

0x4d4e,	// (0x00092680) wml_miniature_view_pane_g5

0x4d56,	// (0x00092688) wml_miniature_view_pane_g6

0x4d5e,	// (0x00092690) wml_miniature_view_pane_g7

0x4d66,	// (0x00092698) wml_miniature_view_pane_g8

0x0007,

0xf682,	// (0x0009cfb4) wml_miniature_view_pane_g

0xc8bf,	// (0x0009a1f1) background_graphic_ParamLimits

0xc8bf,	// (0x0009a1f1) background_graphic

0xc8cb,	// (0x0009a1fd) wml_tabs_2_pane

0xc8d4,	// (0x0009a206) wml_tabs_3_pane_ParamLimits

0xc8d4,	// (0x0009a206) wml_tabs_3_pane

0xc8e6,	// (0x0009a218) wml_tabs_4_pane_ParamLimits

0xc8e6,	// (0x0009a218) wml_tabs_4_pane

0xc8fc,	// (0x0009a22e) wml_tabs_5_pane_ParamLimits

0xc8fc,	// (0x0009a22e) wml_tabs_5_pane

0xc916,	// (0x0009a248) wml_tabs_pane_g2_ParamLimits

0xc916,	// (0x0009a248) wml_tabs_pane_g2

0xc92a,	// (0x0009a25c) wml_tabs_pane_g3_ParamLimits

0xc92a,	// (0x0009a25c) wml_tabs_pane_g3

0x4d6e,	// (0x000926a0) wml_tabs_2_active_pane_ParamLimits

0x4d6e,	// (0x000926a0) wml_tabs_2_active_pane

0x4d82,	// (0x000926b4) wml_tabs_2_passive_pane_ParamLimits

0x4d82,	// (0x000926b4) wml_tabs_2_passive_pane

0x4d96,	// (0x000926c8) wml_tabs_3_active_pane_cp_ParamLimits

0x4d96,	// (0x000926c8) wml_tabs_3_active_pane_cp

0x4dab,	// (0x000926dd) wml_tabs_3_passive_pane_ParamLimits

0x4dab,	// (0x000926dd) wml_tabs_3_passive_pane

0x4dbe,	// (0x000926f0) wml_tabs_3_passive_pane_cp_ParamLimits

0x4dbe,	// (0x000926f0) wml_tabs_3_passive_pane_cp

0x4dd5,	// (0x00092707) tabs_4_active_pane

0x4ddd,	// (0x0009270f) tabs_4_passive_pane

0x4de7,	// (0x00092719) tabs_4_passive_pane_cp

0x4def,	// (0x00092721) tabs_4_passive_pane_cp2

0x3eaf,	// (0x000917e1) aid_height_text

0x3538,	// (0x00090e6a) mup_volume_cont_pane_ParamLimits

0x3538,	// (0x00090e6a) mup_volume_cont_pane

0x0d96,	// (0x0008e6c8) aid_size_cell_pinb

0x0da0,	// (0x0008e6d2) aid_size_list_pinb

0x4cd7,	// (0x00092609) mup2_volume_cont_pane_ParamLimits

0x4cd7,	// (0x00092609) mup2_volume_cont_pane

0xa6fe,	// (0x00098030) mup2_volume_cont_pane_g1_ParamLimits

0xa6fe,	// (0x00098030) mup2_volume_cont_pane_g1

0x0a3e,	// (0x0008e370) aid_size_cell_touch_ParamLimits

0x0a3e,	// (0x0008e370) aid_size_cell_touch

0x0c86,	// (0x0008e5b8) touch_pane_ParamLimits

0x0c86,	// (0x0008e5b8) touch_pane

0x9994,	// (0x000972c6) main_rss2_pane

0xc947,	// (0x0009a279) listscroll_rss2_pane

0xc950,	// (0x0009a282) rss2_navigation_pane

0xc958,	// (0x0009a28a) list_rss2_pane

0xb241,	// (0x00098b73) scroll_pane_cp22

0xc960,	// (0x0009a292) rss2_navigation_pane_g1

0xc969,	// (0x0009a29b) rss2_navigation_pane_g2

0xc971,	// (0x0009a2a3) rss2_navigation_pane_g3

0x0002,

0xf693,	// (0x0009cfc5) rss2_navigation_pane_g

0xc979,	// (0x0009a2ab) rss2_navigation_pane_t1

0x4df9,	// (0x0009272b) rss2_list_single_pane_ParamLimits

0x4df9,	// (0x0009272b) rss2_list_single_pane

0xc987,	// (0x0009a2b9) rss2_list_single_pane_t2

0xc995,	// (0x0009a2c7) rss2_list_single_pane_t3_ParamLimits

0xc995,	// (0x0009a2c7) rss2_list_single_pane_t3

0xc9b2,	// (0x0009a2e4) rss2_list_single_pane_t4

0x2dfd,	// (0x0009072f) smil_status_pane_g1

0x99e5,	// (0x00097317) main_image2_pane_ParamLimits

0x99e5,	// (0x00097317) main_image2_pane

0x48af,	// (0x000921e1) main_camera2_pane_g9_ParamLimits

0x48af,	// (0x000921e1) main_camera2_pane_g9

0x49cb,	// (0x000922fd) main_camera2_pane_t5_ParamLimits

0x49cb,	// (0x000922fd) main_camera2_pane_t5

0xa6d3,	// (0x00098005) main_camera2_pane_t6_ParamLimits

0xa6d3,	// (0x00098005) main_camera2_pane_t6

0x4e0f,	// (0x00092741) main_image2_pane_g1_ParamLimits

0x4e0f,	// (0x00092741) main_image2_pane_g1

0x3bc9,	// (0x000914fb) smil2_video_pane_ParamLimits

0x3bc9,	// (0x000914fb) smil2_video_pane

0x0a7e,	// (0x0008e3b0) aid_zoom_text_primary_cp

0x99db,	// (0x0009730d) popup_preview_fixed_window

0xa49f,	// (0x00097dd1) im_reading_pane_g1

0x4781,	// (0x000920b3) cams2_bc_adjust_pane_cp_ParamLimits

0x4781,	// (0x000920b3) cams2_bc_adjust_pane_cp

0x49f1,	// (0x00092323) cams2_bc_adjust_pane_ParamLimits

0x49f1,	// (0x00092323) cams2_bc_adjust_pane

0xa737,	// (0x00098069) cams2_bc_adjust_pane_g1

0xa73f,	// (0x00098071) cams2_slider_pane

0xa748,	// (0x0009807a) cams2_slider_pane_g1

0xa751,	// (0x00098083) cams2_slider_pane_g2

0x0006,

0xf69a,	// (0x0009cfcc) cams2_slider_pane_g

0x0e90,	// (0x0008e7c2) calc_display_pane_ParamLimits

0x0eb8,	// (0x0008e7ea) calc_paper_pane_ParamLimits

0x0edb,	// (0x0008e80d) grid_calc_pane_ParamLimits

0xa63e,	// (0x00097f70) popup_clock_digital_window_t1_ParamLimits

0xb60e,	// (0x00098f40) main_image_pane_t1

0x0e72,	// (0x0008e7a4) aid_size_cell_calc_ParamLimits

0x0e72,	// (0x0008e7a4) aid_size_cell_calc

0x41e1,	// (0x00091b13) popup_blid_sat_info2_window_ParamLimits

0x41e1,	// (0x00091b13) popup_blid_sat_info2_window

0xc9c8,	// (0x0009a2fa) aid_size_cell_blid

0xc9d0,	// (0x0009a302) bg_popup_window_pane_cp07

0xc9f3,	// (0x0009a325) grid_popup_blid_pane

0xc9fd,	// (0x0009a32f) heading_pane_cp05_ParamLimits

0xc9fd,	// (0x0009a32f) heading_pane_cp05

0xcac7,	// (0x0009a3f9) cell_popup_blid_pane_ParamLimits

0xcac7,	// (0x0009a3f9) cell_popup_blid_pane

0xcaf1,	// (0x0009a423) cell_popup_blid_pane_g1

0xcaf9,	// (0x0009a42b) cell_popup_blid_pane_t1

0x4ca7,	// (0x000925d9) mup2_indicator_pane_ParamLimits

0x4ca7,	// (0x000925d9) mup2_indicator_pane

0xb37b,	// (0x00098cad) mup2_visualizer_osc_pane

0xc89d,	// (0x0009a1cf) mup2_visualizer_spec_pane_ParamLimits

0xc89d,	// (0x0009a1cf) mup2_visualizer_spec_pane

0x4e25,	// (0x00092757) mup2_spec_half_pane

0x4e2e,	// (0x00092760) mup2_spec_half_pane_cp

0x4e36,	// (0x00092768) mup2_spec_bar_pane_ParamLimits

0x4e36,	// (0x00092768) mup2_spec_bar_pane

0xc83e,	// (0x0009a170) mup2_spec_bar_pane_g1

0xc848,	// (0x0009a17a) mup2_spec_bar_pane_g2

0x0001,

0xf60d,	// (0x0009cf3f) mup2_spec_bar_pane_g

0x4e56,	// (0x00092788) mup2_osc_middle_pane

0xc85a,	// (0x0009a18c) mup2_visualizer_osc_pane_g1

0x9a13,	// (0x00097345) popup_number_entry_window_t1_ParamLimits

0x9a26,	// (0x00097358) popup_number_entry_window_t2_ParamLimits

0x9a38,	// (0x0009736a) popup_number_entry_window_t3_ParamLimits

0x0cd8,	// (0x0008e60a) popup_number_entry_window_t5_ParamLimits

0x0cd8,	// (0x0008e60a) popup_number_entry_window_t5

0xf0c6,	// (0x0009c9f8) popup_number_entry_window_t_ParamLimits

0x9a4a,	// (0x0009737c) text_title_cp2_ParamLimits

0xa67d,	// (0x00097faf) aid_hotspot_pointer_text2_pane

0xa6a3,	// (0x00097fd5) main_viewer_pane_g9_ParamLimits

0xa6a3,	// (0x00097fd5) main_viewer_pane_g9

0xad7b,	// (0x000986ad) cale_month_pane_t1_ParamLimits

0xada1,	// (0x000986d3) bg_cale_pane_ParamLimits

0xadb9,	// (0x000986eb) list_cale_pane_ParamLimits

0xadca,	// (0x000986fc) listscroll_cale_day_pane_t1

0xaddc,	// (0x0009870e) scroll_pane_cp09_ParamLimits

0x356e,	// (0x00090ea0) main_mup_eq_pane_t1_ParamLimits

0x356e,	// (0x00090ea0) main_mup_eq_pane_t1

0x358a,	// (0x00090ebc) main_mup_eq_pane_t2_ParamLimits

0x358a,	// (0x00090ebc) main_mup_eq_pane_t2

0x35a6,	// (0x00090ed8) main_mup_eq_pane_t3_ParamLimits

0x35a6,	// (0x00090ed8) main_mup_eq_pane_t3

0x35c4,	// (0x00090ef6) main_mup_eq_pane_t4_ParamLimits

0x35c4,	// (0x00090ef6) main_mup_eq_pane_t4

0x35e2,	// (0x00090f14) main_mup_eq_pane_t5_ParamLimits

0x35e2,	// (0x00090f14) main_mup_eq_pane_t5

0x3600,	// (0x00090f32) main_mup_eq_pane_t6_ParamLimits

0x3600,	// (0x00090f32) main_mup_eq_pane_t6

0x3616,	// (0x00090f48) main_mup_eq_pane_t7_ParamLimits

0x3616,	// (0x00090f48) main_mup_eq_pane_t7

0x362c,	// (0x00090f5e) main_mup_eq_pane_t8_ParamLimits

0x362c,	// (0x00090f5e) main_mup_eq_pane_t8

0x3642,	// (0x00090f74) main_mup_eq_pane_t9_ParamLimits

0x3642,	// (0x00090f74) main_mup_eq_pane_t9

0x365e,	// (0x00090f90) main_mup_eq_pane_t10_ParamLimits

0x365e,	// (0x00090f90) main_mup_eq_pane_t10

0x0009,

0xf45c,	// (0x0009cd8e) main_mup_eq_pane_t_ParamLimits

0xf45c,	// (0x0009cd8e) main_mup_eq_pane_t

0x3733,	// (0x00091065) mup_equalizer_pane_cp5_ParamLimits

0x374b,	// (0x0009107d) mup_equalizer_pane_cp6_ParamLimits

0x3763,	// (0x00091095) mup_equalizer_pane_cp7_ParamLimits

0x9994,	// (0x000972c6) main_gallery_pane

0xc863,	// (0x0009a195) smil2_volume_pane

0xc86b,	// (0x0009a19d) smil_status_volume_pane_g1_ParamLimits

0xc87e,	// (0x0009a1b0) smil_status_volume_pane_g2_ParamLimits

0xa6af,	// (0x00097fe1) smil_status_volume_pane_g3_ParamLimits

0xf612,	// (0x0009cf44) smil_status_volume_pane_g_ParamLimits

0xc9d0,	// (0x0009a302) bg_popup_window_pane_cp07_ParamLimits

0xc9de,	// (0x0009a310) blid_firmament_pane

0x4e5f,	// (0x00092791) aid_size_cell_gallery_ParamLimits

0x4e5f,	// (0x00092791) aid_size_cell_gallery

0x4e75,	// (0x000927a7) grid_gallery_pane_ParamLimits

0x4e75,	// (0x000927a7) grid_gallery_pane

0x4e90,	// (0x000927c2) cell_gallery_pane_ParamLimits

0x4e90,	// (0x000927c2) cell_gallery_pane

0xcb07,	// (0x0009a439) bg_cell_gallery_focus_pane_ParamLimits

0xcb07,	// (0x0009a439) bg_cell_gallery_focus_pane

0xcb19,	// (0x0009a44b) cell_gallery_pane_g1_ParamLimits

0xcb19,	// (0x0009a44b) cell_gallery_pane_g1

0x4edb,	// (0x0009280d) cell_gallery_pane_g2_ParamLimits

0x4edb,	// (0x0009280d) cell_gallery_pane_g2

0x4ee8,	// (0x0009281a) cell_gallery_pane_g3_ParamLimits

0x4ee8,	// (0x0009281a) cell_gallery_pane_g3

0xcb25,	// (0x0009a457) cell_gallery_pane_g4_ParamLimits

0xcb25,	// (0x0009a457) cell_gallery_pane_g4

0x0003,

0xf6c0,	// (0x0009cff2) cell_gallery_pane_g_ParamLimits

0xf6c0,	// (0x0009cff2) cell_gallery_pane_g

0xcb31,	// (0x0009a463) bg_cell_gallery_focus_pane_g1

0xcb39,	// (0x0009a46b) bg_cell_gallery_focus_pane_g2

0xcb41,	// (0x0009a473) bg_cell_gallery_focus_pane_g3

0xcb49,	// (0x0009a47b) bg_cell_gallery_focus_pane_g4

0xcb51,	// (0x0009a483) bg_cell_gallery_focus_pane_g5

0xcb59,	// (0x0009a48b) bg_cell_gallery_focus_pane_g6

0xcb61,	// (0x0009a493) bg_cell_gallery_focus_pane_g7

0xcb69,	// (0x0009a49b) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c9,	// (0x0009cffb) bg_cell_gallery_focus_pane_g

0xcb71,	// (0x0009a4a3) aid_firma_cardinal

0xcb85,	// (0x0009a4b7) blid_firmament_pane_t1

0xcb9c,	// (0x0009a4ce) blid_firmament_pane_t2

0xcbb3,	// (0x0009a4e5) blid_firmament_pane_t3

0xcbca,	// (0x0009a4fc) blid_firmament_pane_t4

0x0003,

0xf6da,	// (0x0009d00c) blid_firmament_pane_t

0xcbe1,	// (0x0009a513) blid_sat_info_pane

0xcbf1,	// (0x0009a523) blid_sat_info_pane_g1

0xcbf1,	// (0x0009a523) blid_sat_info_pane_g2

0x0001,

0xf6e3,	// (0x0009d015) blid_sat_info_pane_g

0xcbfb,	// (0x0009a52d) blid_sat_info_pane_t1

0xcc09,	// (0x0009a53b) smil2_volume_content_pane

0xcc12,	// (0x0009a544) smil2_volume_pane_g1

0xcc1a,	// (0x0009a54c) smil2_volume_content_pane_g1

0xcc23,	// (0x0009a555) smil2_volume_content_pane_g2

0xcc2c,	// (0x0009a55e) smil2_volume_content_pane_g3

0xcc35,	// (0x0009a567) smil2_volume_content_pane_g4

0xcc3e,	// (0x0009a570) smil2_volume_content_pane_g5

0xcc47,	// (0x0009a579) smil2_volume_content_pane_g6

0xcc50,	// (0x0009a582) smil2_volume_content_pane_g7

0xcc59,	// (0x0009a58b) smil2_volume_content_pane_g8

0xcc62,	// (0x0009a594) smil2_volume_content_pane_g9

0xcc6b,	// (0x0009a59d) smil2_volume_content_pane_g10

0x0009,

0xf6e8,	// (0x0009d01a) smil2_volume_content_pane_g

0x1525,	// (0x0008ee57) cale_week_day_heading_pane_t1_ParamLimits

0x156f,	// (0x0008eea1) cale_week_day_heading_pane_t2_ParamLimits

0x15be,	// (0x0008eef0) cale_week_day_heading_pane_t3_ParamLimits

0x160d,	// (0x0008ef3f) cale_week_day_heading_pane_t4_ParamLimits

0x165c,	// (0x0008ef8e) cale_week_day_heading_pane_t5_ParamLimits

0x16af,	// (0x0008efe1) cale_week_day_heading_pane_t6_ParamLimits

0x1706,	// (0x0008f038) cale_week_day_heading_pane_t7_ParamLimits

0xf1cd,	// (0x0009caff) cale_week_day_heading_pane_t_ParamLimits

0xa337,	// (0x00097c69) bg_cale_side_pane_ParamLimits

0x1750,	// (0x0008f082) cale_week_time_pane_t1_ParamLimits

0x178a,	// (0x0008f0bc) cale_week_time_pane_t2_ParamLimits

0x17c4,	// (0x0008f0f6) cale_week_time_pane_t3_ParamLimits

0x17fe,	// (0x0008f130) cale_week_time_pane_t4_ParamLimits

0x1838,	// (0x0008f16a) cale_week_time_pane_t5_ParamLimits

0x1872,	// (0x0008f1a4) cale_week_time_pane_t6_ParamLimits

0x18ac,	// (0x0008f1de) cale_week_time_pane_t7_ParamLimits

0x18e6,	// (0x0008f218) cale_week_time_pane_t8_ParamLimits

0xf1dc,	// (0x0009cb0e) cale_week_time_pane_t_ParamLimits

0x1926,	// (0x0008f258) cell_cale_week_pane_g2_ParamLimits

0xa337,	// (0x00097c69) bg_cale_side_pane_cp01_ParamLimits

0x2c0c,	// (0x0009053e) cale_month_week_pane_t1_ParamLimits

0x2c25,	// (0x00090557) cale_month_week_pane_t2_ParamLimits

0x2c3e,	// (0x00090570) cale_month_week_pane_t3_ParamLimits

0x2c57,	// (0x00090589) cale_month_week_pane_t4_ParamLimits

0x2c70,	// (0x000905a2) cale_month_week_pane_t5_ParamLimits

0x2c89,	// (0x000905bb) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0009cbe7) cale_month_week_pane_t_ParamLimits

0xa5be,	// (0x00097ef0) cell_cale_month_pane_g1_ParamLimits

0x9994,	// (0x000972c6) main_cale_event_viewer_pane

0x9994,	// (0x000972c6) listscroll_cale_event_viewer_pane

0xcc74,	// (0x0009a5a6) list_cale_ev_pane

0xcc7c,	// (0x0009a5ae) scroll_pane_cp023

0x4ef5,	// (0x00092827) field_cale_ev_pane_ParamLimits

0x4ef5,	// (0x00092827) field_cale_ev_pane

0xcc88,	// (0x0009a5ba) field_cale_ev_content_pane_ParamLimits

0xcc88,	// (0x0009a5ba) field_cale_ev_content_pane

0xcc94,	// (0x0009a5c6) field_cale_ev_pane_g1_ParamLimits

0xcc94,	// (0x0009a5c6) field_cale_ev_pane_g1

0xcca0,	// (0x0009a5d2) field_cale_ev_pane_g2_ParamLimits

0xcca0,	// (0x0009a5d2) field_cale_ev_pane_g2

0xccb8,	// (0x0009a5ea) field_cale_ev_pane_g3_ParamLimits

0xccb8,	// (0x0009a5ea) field_cale_ev_pane_g3

0x0002,

0xf6fd,	// (0x0009d02f) field_cale_ev_pane_g_ParamLimits

0xf6fd,	// (0x0009d02f) field_cale_ev_pane_g

0xccd0,	// (0x0009a602) field_cale_ev_pane_t1_ParamLimits

0xccd0,	// (0x0009a602) field_cale_ev_pane_t1

0x4f19,	// (0x0009284b) field_cale_ev_content_pane_t1_ParamLimits

0x4f19,	// (0x0009284b) field_cale_ev_content_pane_t1

0xb4f4,	// (0x00098e26) bg_button_pane_cp01

0x118f,	// (0x0008eac1) listscroll_cale_week_pane_ParamLimits

0x11a1,	// (0x0008ead3) popup_toolbar_window_cp01

0xa303,	// (0x00097c35) listscroll_cale_week_pane_t1_ParamLimits

0x118f,	// (0x0008eac1) listscroll_cale_day_pane_ParamLimits

0x11a1,	// (0x0008ead3) popup_toolbar_window_cp02

0xadca,	// (0x000986fc) listscroll_cale_day_pane_t1_ParamLimits

0x118f,	// (0x0008eac1) main_cale_month_pane_ParamLimits

0x4461,	// (0x00091d93) popup_toolbar_window_cp03_ParamLimits

0x4461,	// (0x00091d93) popup_toolbar_window_cp03

0x3a87,	// (0x000913b9) main_image_pane_g2_ParamLimits

0x3a87,	// (0x000913b9) main_image_pane_g2

0x3a98,	// (0x000913ca) main_image_pane_g3_ParamLimits

0x3a98,	// (0x000913ca) main_image_pane_g3

0x0002,

0xf4ee,	// (0x0009ce20) main_image_pane_g_ParamLimits

0xf4ee,	// (0x0009ce20) main_image_pane_g

0xb60e,	// (0x00098f40) main_image_pane_t1_ParamLimits

0x3aa9,	// (0x000913db) main_image_pane_t2_ParamLimits

0x3aa9,	// (0x000913db) main_image_pane_t2

0x3abb,	// (0x000913ed) main_image_pane_t3_ParamLimits

0x3abb,	// (0x000913ed) main_image_pane_t3

0x3ae3,	// (0x00091415) main_image_pane_t4_ParamLimits

0x3ae3,	// (0x00091415) main_image_pane_t4

0x0003,

0xf4f5,	// (0x0009ce27) main_image_pane_t_ParamLimits

0xf4f5,	// (0x0009ce27) main_image_pane_t

0x3b03,	// (0x00091435) popup_image_details_window_cp01

0x3b0d,	// (0x0009143f) popup_toobar_trans_pane_cp01_ParamLimits

0x3b0d,	// (0x0009143f) popup_toobar_trans_pane_cp01

0x42d4,	// (0x00091c06) popup_image_details_window_ParamLimits

0x42d4,	// (0x00091c06) popup_image_details_window

0xc7c2,	// (0x0009a0f4) popup_image_focus_window

0x473b,	// (0x0009206d) camera2_autofocus_pane_ParamLimits

0x473b,	// (0x0009206d) camera2_autofocus_pane

0x9994,	// (0x000972c6) bg_popup_sub_pane_cp06

0xcce7,	// (0x0009a619) popup_image_focus_window_g1

0xccef,	// (0x0009a621) popup_image_focus_window_g2

0xccf7,	// (0x0009a629) popup_image_focus_window_g3

0xccff,	// (0x0009a631) popup_image_focus_window_g4

0x0003,

0xf704,	// (0x0009d036) popup_image_focus_window_g

0xcd07,	// (0x0009a639) popup_image_focus_window_t1

0xcd15,	// (0x0009a647) popup_image_focus_window_t2

0xcd25,	// (0x0009a657) popup_image_focus_window_t3

0x0002,

0xf70d,	// (0x0009d03f) popup_image_focus_window_t

0xcd33,	// (0x0009a665) camera2_autofocus_pane_g1

0x99e5,	// (0x00097317) bg_tb_trans_pane_cp01

0xcd41,	// (0x0009a673) popup_image_details_window_g1

0xcd54,	// (0x0009a686) popup_image_details_window_g2

0x0002,

0xf71f,	// (0x0009d051) popup_image_details_window_g

0xcd7d,	// (0x0009a6af) popup_image_details_window_t1

0xcd8f,	// (0x0009a6c1) popup_image_details_window_t2

0xcda8,	// (0x0009a6da) popup_image_details_window_t3

0xcdbc,	// (0x0009a6ee) popup_image_details_window_t4

0xcdd7,	// (0x0009a709) popup_image_details_window_t5

0x0004,

0xf726,	// (0x0009d058) popup_image_details_window_t

0xa11a,	// (0x00097a4c) bg_calc_paper_pane_ParamLimits

0x9994,	// (0x000972c6) grid_highlight_pane_cp013

0xa12e,	// (0x00097a60) list_calc_pane_ParamLimits

0xa140,	// (0x00097a72) scroll_pane_cp024

0xa148,	// (0x00097a7a) bg_calc_display_pane_ParamLimits

0x0fdb,	// (0x0008e90d) calc_display_pane_t1_ParamLimits

0x0fed,	// (0x0008e91f) calc_display_pane_t2_ParamLimits

0xa154,	// (0x00097a86) calc_display_pane_t3_ParamLimits

0xf14d,	// (0x0009ca7f) calc_display_pane_t_ParamLimits

0x10b6,	// (0x0008e9e8) cell_calc_pane_g2

0x0001,

0xf16a,	// (0x0009ca9c) cell_calc_pane_g

0x10bf,	// (0x0008e9f1) cell_calc_pane_t1

0xa1cb,	// (0x00097afd) grid_highlight_pane_cp02_ParamLimits

0xa1e1,	// (0x00097b13) toolbar_button_pane_cp01_ParamLimits

0xa1e1,	// (0x00097b13) toolbar_button_pane_cp01

0xb653,	// (0x00098f85) temp_image_control_pane_ParamLimits

0xb653,	// (0x00098f85) temp_image_control_pane

0x99e5,	// (0x00097317) main_mp3_pane

0xcdf1,	// (0x0009a723) temp_image_control_pane_g1_ParamLimits

0xcdf1,	// (0x0009a723) temp_image_control_pane_g1

0xcdff,	// (0x0009a731) temp_image_control_pane_g2_ParamLimits

0xcdff,	// (0x0009a731) temp_image_control_pane_g2

0xce11,	// (0x0009a743) temp_image_control_pane_g3_ParamLimits

0xce11,	// (0x0009a743) temp_image_control_pane_g3

0x4f6a,	// (0x0009289c) temp_image_control_pane_g4_ParamLimits

0x4f6a,	// (0x0009289c) temp_image_control_pane_g4

0x0003,

0xf731,	// (0x0009d063) temp_image_control_pane_g_ParamLimits

0xf731,	// (0x0009d063) temp_image_control_pane_g

0xcdf1,	// (0x0009a723) main_mp3_pane_g1

0x4f7d,	// (0x000928af) main_mp3_pane_g2

0x0007,

0xf73a,	// (0x0009d06c) main_mp3_pane_g

0xce54,	// (0x0009a786) main_mp3_pane_t1

0xa3aa,	// (0x00097cdc) main_camera_pane_g8_ParamLimits

0xa3aa,	// (0x00097cdc) main_camera_pane_g8

0x1c63,	// (0x0008f595) main_video_pane_g7_ParamLimits

0x1c63,	// (0x0008f595) main_video_pane_g7

0xa6ec,	// (0x0009801e) main_camera2_pane_t7_ParamLimits

0xa6ec,	// (0x0009801e) main_camera2_pane_t7

0xa4f6,	// (0x00097e28) scroll_pane_cp025_ParamLimits

0xa4f6,	// (0x00097e28) scroll_pane_cp025

0xa50a,	// (0x00097e3c) scroll_pane_cp026_ParamLimits

0xa50a,	// (0x00097e3c) scroll_pane_cp026

0xa519,	// (0x00097e4b) wml_content_pane_ParamLimits

0x9994,	// (0x000972c6) main_touch_calib_pane

0x504f,	// (0x00092981) main_touch_calib_pane_g1

0x5061,	// (0x00092993) main_touch_calib_pane_g2

0x5073,	// (0x000929a5) main_touch_calib_pane_g3

0x5085,	// (0x000929b7) main_touch_calib_pane_g4

0x0003,

0xf758,	// (0x0009d08a) main_touch_calib_pane_g

0x5097,	// (0x000929c9) main_touch_calib_pane_t1

0x50b1,	// (0x000929e3) main_touch_calib_pane_t2

0x0004,

0xf761,	// (0x0009d093) main_touch_calib_pane_t

0xb2bc,	// (0x00098bee) mup_progress_pane_cp02

0xb2db,	// (0x00098c0d) navi_pane_g1

0xb33d,	// (0x00098c6f) navi_pane_mp_t3

0x99e5,	// (0x00097317) main_mp3_pane_ParamLimits

0x44a3,	// (0x00091dd5) navi_pane_ParamLimits

0xcdf1,	// (0x0009a723) main_mp3_pane_g1_ParamLimits

0x4f7d,	// (0x000928af) main_mp3_pane_g2_ParamLimits

0x4f89,	// (0x000928bb) main_mp3_pane_g3_ParamLimits

0x4f89,	// (0x000928bb) main_mp3_pane_g3

0x4f97,	// (0x000928c9) main_mp3_pane_g4_ParamLimits

0x4f97,	// (0x000928c9) main_mp3_pane_g4

0xce21,	// (0x0009a753) main_mp3_pane_g5_ParamLimits

0xce21,	// (0x0009a753) main_mp3_pane_g5

0xce2f,	// (0x0009a761) main_mp3_pane_g6_ParamLimits

0xce2f,	// (0x0009a761) main_mp3_pane_g6

0xce3c,	// (0x0009a76e) main_mp3_pane_g7_ParamLimits

0xce3c,	// (0x0009a76e) main_mp3_pane_g7

0xce48,	// (0x0009a77a) main_mp3_pane_g8_ParamLimits

0xce48,	// (0x0009a77a) main_mp3_pane_g8

0xf73a,	// (0x0009d06c) main_mp3_pane_g_ParamLimits

0x4fa3,	// (0x000928d5) main_mp3_pane_t2

0x4fb1,	// (0x000928e3) main_mp3_pane_t3

0xce62,	// (0x0009a794) main_mp3_pane_t4

0xce70,	// (0x0009a7a2) main_mp3_pane_t5

0x0005,

0xf74b,	// (0x0009d07d) main_mp3_pane_t

0xce7e,	// (0x0009a7b0) mup_progress_pane_cp01

0x0a7e,	// (0x0008e3b0) aid_zoom_text_secondary2

0xcc74,	// (0x0009a5a6) list_cale_ev2_pane

0xcc7c,	// (0x0009a5ae) scroll_pane_cp023_ParamLimits

0x510b,	// (0x00092a3d) field_cale_ev2_pane_ParamLimits

0x510b,	// (0x00092a3d) field_cale_ev2_pane

0x512f,	// (0x00092a61) field_cale_ev2_pane_g1_ParamLimits

0x512f,	// (0x00092a61) field_cale_ev2_pane_g1

0x513b,	// (0x00092a6d) field_cale_ev2_pane_g2_ParamLimits

0x513b,	// (0x00092a6d) field_cale_ev2_pane_g2

0x5153,	// (0x00092a85) field_cale_ev2_pane_g3_ParamLimits

0x5153,	// (0x00092a85) field_cale_ev2_pane_g3

0x0003,

0xf76c,	// (0x0009d09e) field_cale_ev2_pane_g_ParamLimits

0xf76c,	// (0x0009d09e) field_cale_ev2_pane_g

0xfdf1,	// (0x0008d723) field_cale_ev2_pane_t1_ParamLimits

0xfdf1,	// (0x0008d723) field_cale_ev2_pane_t1

0xfe08,	// (0x0008d73a) field_cale_ev2_pane_t2_ParamLimits

0xfe08,	// (0x0008d73a) field_cale_ev2_pane_t2

0x0001,

0xf775,	// (0x0009d0a7) field_cale_ev2_pane_t_ParamLimits

0xf775,	// (0x0009d0a7) field_cale_ev2_pane_t

0x3924,	// (0x00091256) main_postcard_pane_g5_ParamLimits

0x3924,	// (0x00091256) main_postcard_pane_g5

0x393a,	// (0x0009126c) main_postcard_pane_g6_ParamLimits

0x393a,	// (0x0009126c) main_postcard_pane_g6

0x1a0f,	// (0x0008f341) camera2_autofocus_pane_cp_ParamLimits

0x1a0f,	// (0x0008f341) camera2_autofocus_pane_cp

0x99e5,	// (0x00097317) main_mup3_pane

0x518b,	// (0x00092abd) main_mup3_pane_g1_ParamLimits

0x518b,	// (0x00092abd) main_mup3_pane_g1

0x51ad,	// (0x00092adf) main_mup3_pane_g2_ParamLimits

0x51ad,	// (0x00092adf) main_mup3_pane_g2

0x5230,	// (0x00092b62) main_mup3_pane_g3_ParamLimits

0x5230,	// (0x00092b62) main_mup3_pane_g3

0x5278,	// (0x00092baa) main_mup3_pane_g4_ParamLimits

0x5278,	// (0x00092baa) main_mup3_pane_g4

0x52be,	// (0x00092bf0) main_mup3_pane_g5_ParamLimits

0x52be,	// (0x00092bf0) main_mup3_pane_g5

0x5306,	// (0x00092c38) main_mup3_pane_g6_ParamLimits

0x5306,	// (0x00092c38) main_mup3_pane_g6

0xce86,	// (0x0009a7b8) main_mup3_pane_g7_ParamLimits

0xce86,	// (0x0009a7b8) main_mup3_pane_g7

0x0007,

0xf785,	// (0x0009d0b7) main_mup3_pane_g_ParamLimits

0xf785,	// (0x0009d0b7) main_mup3_pane_g

0x5386,	// (0x00092cb8) main_mup3_pane_t1_ParamLimits

0x5386,	// (0x00092cb8) main_mup3_pane_t1

0x53f4,	// (0x00092d26) main_mup3_pane_t2_ParamLimits

0x53f4,	// (0x00092d26) main_mup3_pane_t2

0x54ca,	// (0x00092dfc) main_mup3_pane_t4_ParamLimits

0x54ca,	// (0x00092dfc) main_mup3_pane_t4

0x5528,	// (0x00092e5a) main_mup3_pane_t5_ParamLimits

0x5528,	// (0x00092e5a) main_mup3_pane_t5

0x55e2,	// (0x00092f14) main_mup3_pane_t6_ParamLimits

0x55e2,	// (0x00092f14) main_mup3_pane_t6

0x0005,

0xf796,	// (0x0009d0c8) main_mup3_pane_t_ParamLimits

0xf796,	// (0x0009d0c8) main_mup3_pane_t

0x569a,	// (0x00092fcc) mup3_progress_pane_ParamLimits

0x569a,	// (0x00092fcc) mup3_progress_pane

0x572c,	// (0x0009305e) popup_mup3_control_window_ParamLimits

0x572c,	// (0x0009305e) popup_mup3_control_window

0xce94,	// (0x0009a7c6) popup_mup3_text_window

0x5762,	// (0x00093094) mup3_progress_pane_t1

0x5780,	// (0x000930b2) mup3_progress_pane_t2

0xce9c,	// (0x0009a7ce) mup3_progress_pane_t3

0x0002,

0xf7a3,	// (0x0009d0d5) mup3_progress_pane_t

0xceb9,	// (0x0009a7eb) mup_progress_pane_cp03

0x9994,	// (0x000972c6) bg_tb_trans_pane_cp04

0x579e,	// (0x000930d0) mup3_volume_pane

0x57a6,	// (0x000930d8) popup_mup3_control_window_g1

0x57af,	// (0x000930e1) mup3_volume_pane_g1

0x57b8,	// (0x000930ea) mup3_volume_pane_g2

0x57c1,	// (0x000930f3) mup3_volume_pane_g3

0x0002,

0xf7aa,	// (0x0009d0dc) mup3_volume_pane_g

0x9994,	// (0x000972c6) bg_tb_trans_pane_cp03

0xcec9,	// (0x0009a7fb) popup_mup3_text_window_g1

0xced1,	// (0x0009a803) popup_mup3_text_window_t1

0xa1a2,	// (0x00097ad4) list_calc_item_pane_g1_ParamLimits

0xc93e,	// (0x0009a270) mup_volume_pane_cp_g1

0x50cb,	// (0x000929fd) main_touch_calib_pane_t3

0x50df,	// (0x00092a11) main_touch_calib_pane_t4

0x50f5,	// (0x00092a27) main_touch_calib_pane_t5

0x999e,	// (0x000972d0) aid_cell_size_toolbar2

0x99a6,	// (0x000972d8) aid_popup3_width_pane

0x0a6e,	// (0x0008e3a0) aid_zoom_text_msg_primary

0x19e4,	// (0x0008f316) vorec_t7

0xa166,	// (0x00097a98) bg_calc_paper_pane_g1_ParamLimits

0xa172,	// (0x00097aa4) bg_calc_paper_pane_g2_ParamLimits

0xa17e,	// (0x00097ab0) bg_calc_paper_pane_g3_ParamLimits

0xa18a,	// (0x00097abc) bg_calc_paper_pane_g4_ParamLimits

0xa196,	// (0x00097ac8) bg_calc_paper_pane_g5_ParamLimits

0x103c,	// (0x0008e96e) bg_calc_paper_pane_g6_ParamLimits

0x104f,	// (0x0008e981) bg_calc_paper_pane_g7_ParamLimits

0x1062,	// (0x0008e994) bg_calc_paper_pane_g8_ParamLimits

0xf154,	// (0x0009ca86) bg_calc_paper_pane_g_ParamLimits

0x1073,	// (0x0008e9a5) calc_bg_paper_pane_g9_ParamLimits

0x1b71,	// (0x0008f4a3) image_qvga_pane_ParamLimits

0x1b71,	// (0x0008f4a3) image_qvga_pane

0xa061,	// (0x00097993) bg_popup_sub_pane_cp04_ParamLimits

0xb58a,	// (0x00098ebc) popup_mup_playback_window_g1_ParamLimits

0xb596,	// (0x00098ec8) popup_mup_playback_window_t1_ParamLimits

0xb5ab,	// (0x00098edd) popup_mup_playback_window_t2_ParamLimits

0xf4e9,	// (0x0009ce1b) popup_mup_playback_window_t_ParamLimits

0x4bbf,	// (0x000924f1) main_mup2_pane_g3_ParamLimits

0x4bbf,	// (0x000924f1) main_mup2_pane_g3

0x1e60,	// (0x0008f792) popup_toolbar_window_cp04

0xb9a6,	// (0x000992d8) popup_call2_audio_second_window_g3_ParamLimits

0xb9a6,	// (0x000992d8) popup_call2_audio_second_window_g3

0xbdb0,	// (0x000996e2) popup_call2_audio_first_window_g4_ParamLimits

0xbdb0,	// (0x000996e2) popup_call2_audio_first_window_g4

0xc42f,	// (0x00099d61) popup_call2_audio_in_window_g4_ParamLimits

0xc42f,	// (0x00099d61) popup_call2_audio_in_window_g4

0x3a69,	// (0x0009139b) aid_area_sk_bg_cut_ParamLimits

0x3a69,	// (0x0009139b) aid_area_sk_bg_cut

0xb5c0,	// (0x00098ef2) aid_area_sk_bg_cut_2_ParamLimits

0xb5c0,	// (0x00098ef2) aid_area_sk_bg_cut_2

0x4ecb,	// (0x000927fd) aid_placing_details_win

0x4ed3,	// (0x00092805) aid_placing_details_win_2

0xcd33,	// (0x0009a665) camera2_autofocus_pane_g1_ParamLimits

0x0c1f,	// (0x0008e551) popup_fixed_preview_cale_window_ParamLimits

0x0c1f,	// (0x0008e551) popup_fixed_preview_cale_window

0xb38c,	// (0x00098cbe) navi_slider_pane_g3

0xb395,	// (0x00098cc7) navi_slider_pane_g4

0xb39e,	// (0x00098cd0) navi_slider_pane_g5

0xb38c,	// (0x00098cbe) navi_slider_pane_g6

0xa664,	// (0x00097f96) navi_slider_pane_g7

0xb4c1,	// (0x00098df3) mup_scale_pane_g3

0xb4ca,	// (0x00098dfc) mup_scale_pane_g4

0xb4d3,	// (0x00098e05) mup_scale_pane_g5

0x377b,	// (0x000910ad) mup_scale_pane_g6

0x3784,	// (0x000910b6) mup_scale_pane_g7

0xb38c,	// (0x00098cbe) cams2_slider_pane_g3

0xc9c0,	// (0x0009a2f2) cams2_slider_pane_g4

0xa75a,	// (0x0009808c) cams2_slider_pane_g5

0xb38c,	// (0x00098cbe) cams2_slider_pane_g6

0xa762,	// (0x00098094) cams2_slider_pane_g7

0xcbf1,	// (0x0009a523) camera2_autofocus_pane_cp_g1

0xc794,	// (0x0009a0c6) bg_popup_preview_window_pane_cp02_ParamLimits

0xc794,	// (0x0009a0c6) bg_popup_preview_window_pane_cp02

0xcedf,	// (0x0009a811) list_fp_cale_pane_ParamLimits

0xcedf,	// (0x0009a811) list_fp_cale_pane

0xceeb,	// (0x0009a81d) popup_fixed_preview_cale_window_t1_ParamLimits

0xceeb,	// (0x0009a81d) popup_fixed_preview_cale_window_t1

0x57ca,	// (0x000930fc) popup_fixed_preview_cale_window_t2_ParamLimits

0x57ca,	// (0x000930fc) popup_fixed_preview_cale_window_t2

0x57df,	// (0x00093111) popup_fixed_preview_cale_window_t3_ParamLimits

0x57df,	// (0x00093111) popup_fixed_preview_cale_window_t3

0x0002,

0xf7b1,	// (0x0009d0e3) popup_fixed_preview_cale_window_t_ParamLimits

0xf7b1,	// (0x0009d0e3) popup_fixed_preview_cale_window_t

0x57f4,	// (0x00093126) list_single_fp_cale_pane_ParamLimits

0x57f4,	// (0x00093126) list_single_fp_cale_pane

0xcf09,	// (0x0009a83b) list_single_fp_cale_pane_g1_ParamLimits

0xcf09,	// (0x0009a83b) list_single_fp_cale_pane_g1

0xcf15,	// (0x0009a847) list_single_fp_cale_pane_g2_ParamLimits

0xcf15,	// (0x0009a847) list_single_fp_cale_pane_g2

0x0002,

0xf7b8,	// (0x0009d0ea) list_single_fp_cale_pane_g_ParamLimits

0xf7b8,	// (0x0009d0ea) list_single_fp_cale_pane_g

0xcf2e,	// (0x0009a860) list_single_fp_cale_pane_t1_ParamLimits

0xcf2e,	// (0x0009a860) list_single_fp_cale_pane_t1

0xcf40,	// (0x0009a872) list_single_fp_cale_pane_t2_ParamLimits

0xcf40,	// (0x0009a872) list_single_fp_cale_pane_t2

0x0001,

0xf7bf,	// (0x0009d0f1) list_single_fp_cale_pane_t_ParamLimits

0xf7bf,	// (0x0009d0f1) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9994,	// (0x000972c6) main_dialer_pane

0x5809,	// (0x0009313b) aid_cell_size_keypad

0x5813,	// (0x00093145) dialer_ne_pane

0x581d,	// (0x0009314f) grid_dialer_command_1_pane

0x5825,	// (0x00093157) grid_dialer_command_2_pane

0x582d,	// (0x0009315f) grid_dialer_keypad_pane

0x583f,	// (0x00093171) bg_popup_call_pane_cp06_ParamLimits

0x583f,	// (0x00093171) bg_popup_call_pane_cp06

0x584b,	// (0x0009317d) dialer_ne_clear_pane_ParamLimits

0x584b,	// (0x0009317d) dialer_ne_clear_pane

0xcf73,	// (0x0009a8a5) dialer_ne_pane_g1

0xcf7b,	// (0x0009a8ad) dialer_ne_pane_t1_ParamLimits

0xcf7b,	// (0x0009a8ad) dialer_ne_pane_t1

0x5857,	// (0x00093189) dialer_ne_pane_t2_ParamLimits

0x5857,	// (0x00093189) dialer_ne_pane_t2

0x5881,	// (0x000931b3) dialer_ne_pane_t3_ParamLimits

0x5881,	// (0x000931b3) dialer_ne_pane_t3

0x0002,

0xf7c4,	// (0x0009d0f6) dialer_ne_pane_t_ParamLimits

0xf7c4,	// (0x0009d0f6) dialer_ne_pane_t

0x58b1,	// (0x000931e3) dialer_ne_pane_t3_copy1_ParamLimits

0x58b1,	// (0x000931e3) dialer_ne_pane_t3_copy1

0x58e0,	// (0x00093212) cell_dialer_keypad_pane_ParamLimits

0x58e0,	// (0x00093212) cell_dialer_keypad_pane

0x58f7,	// (0x00093229) cell_dialer_command_1_pane_ParamLimits

0x58f7,	// (0x00093229) cell_dialer_command_1_pane

0x590d,	// (0x0009323f) cell_dialer_command_2_pane_ParamLimits

0x590d,	// (0x0009323f) cell_dialer_command_2_pane

0xcf8d,	// (0x0009a8bf) bg_button_pane_cp02_ParamLimits

0xcf8d,	// (0x0009a8bf) bg_button_pane_cp02

0x591c,	// (0x0009324e) cell_dialer_keypad_pane_g1_ParamLimits

0x591c,	// (0x0009324e) cell_dialer_keypad_pane_g1

0xcf8d,	// (0x0009a8bf) bg_button_pane_cp03_ParamLimits

0xcf8d,	// (0x0009a8bf) bg_button_pane_cp03

0x5931,	// (0x00093263) cell_dialer_command_1_pane_g1_ParamLimits

0x5931,	// (0x00093263) cell_dialer_command_1_pane_g1

0xcf99,	// (0x0009a8cb) bg_button_pane_cp04

0x5945,	// (0x00093277) cell_dialer_command_2_pane_g1

0xb37b,	// (0x00098cad) bg_button_pane_cp06

0xcfa1,	// (0x0009a8d3) dialer_ne_clear_pane_g1

0x324d,	// (0x00090b7f) navi_pane_g2

0x327b,	// (0x00090bad) navi_pane_g3

0x0002,

0xf3ec,	// (0x0009cd1e) navi_pane_g

0x32a6,	// (0x00090bd8) navi_pane_mv_g2

0x32cd,	// (0x00090bff) navi_pane_mv_g5

0x32d5,	// (0x00090c07) navi_pane_mv_t1

0xa148,	// (0x00097a7a) main_clock2_pane

0x5990,	// (0x000932c2) main_clock2_list_pane_ParamLimits

0x5990,	// (0x000932c2) main_clock2_list_pane

0x59c8,	// (0x000932fa) main_clock2_pane_t1_ParamLimits

0x59c8,	// (0x000932fa) main_clock2_pane_t1

0x5a04,	// (0x00093336) main_clock2_pane_t2_ParamLimits

0x5a04,	// (0x00093336) main_clock2_pane_t2

0x0004,

0xf7d0,	// (0x0009d102) main_clock2_pane_t_ParamLimits

0xf7d0,	// (0x0009d102) main_clock2_pane_t

0x5aa4,	// (0x000933d6) popup_clock_analogue_window_cp03_ParamLimits

0x5aa4,	// (0x000933d6) popup_clock_analogue_window_cp03

0x5acb,	// (0x000933fd) popup_clock_digital_window_cp02_ParamLimits

0x5acb,	// (0x000933fd) popup_clock_digital_window_cp02

0x5b44,	// (0x00093476) main_clock2_list_single_pane_ParamLimits

0x5b44,	// (0x00093476) main_clock2_list_single_pane

0xb37b,	// (0x00098cad) list_highlight_pane_cp05

0xcfdd,	// (0x0009a90f) main_clock2_list_single_pane_t1

0x1e60,	// (0x0008f792) popup_toolbar_window_cp04_ParamLimits

0x4f3a,	// (0x0009286c) camera2_autofocus_pane_g2_ParamLimits

0x4f3a,	// (0x0009286c) camera2_autofocus_pane_g2

0x4f46,	// (0x00092878) camera2_autofocus_pane_g3_ParamLimits

0x4f46,	// (0x00092878) camera2_autofocus_pane_g3

0x4f52,	// (0x00092884) camera2_autofocus_pane_g4_ParamLimits

0x4f52,	// (0x00092884) camera2_autofocus_pane_g4

0x4f5e,	// (0x00092890) camera2_autofocus_pane_g5_ParamLimits

0x4f5e,	// (0x00092890) camera2_autofocus_pane_g5

0x0004,

0xf714,	// (0x0009d046) camera2_autofocus_pane_g_ParamLimits

0xf714,	// (0x0009d046) camera2_autofocus_pane_g

0x516b,	// (0x00092a9d) camera2_autofocus_pane_cp_g2

0x5173,	// (0x00092aa5) camera2_autofocus_pane_cp_g3

0x517b,	// (0x00092aad) camera2_autofocus_pane_cp_g4

0x5183,	// (0x00092ab5) camera2_autofocus_pane_cp_g5

0x0004,

0xf77a,	// (0x0009d0ac) camera2_autofocus_pane_cp_g

0x5837,	// (0x00093169) popup_dialer_spcha_window

0x9994,	// (0x000972c6) bg_popup_sub_pane_cp07

0xcfeb,	// (0x0009a91d) list_spcha_pane

0xcff3,	// (0x0009a925) list_single_spcha_pane_ParamLimits

0xcff3,	// (0x0009a925) list_single_spcha_pane

0x9994,	// (0x000972c6) list_highlight_pane_cp06

0xd004,	// (0x0009a936) list_single_spcha_pane_t1

0xc1d9,	// (0x00099b0b) popup_call2_audio_out_window_g4_ParamLimits

0xc1d9,	// (0x00099b0b) popup_call2_audio_out_window_g4

0x9994,	// (0x000972c6) main_imed2_pane

0xc7cc,	// (0x0009a0fe) popup_imed_adjust2_window

0x42ec,	// (0x00091c1e) popup_imed_trans_window_ParamLimits

0x42ec,	// (0x00091c1e) popup_imed_trans_window

0xca29,	// (0x0009a35b) popup_blid_sat_info2_window_t1

0xca37,	// (0x0009a369) popup_blid_sat_info2_window_t2

0x000a,

0xf6a9,	// (0x0009cfdb) popup_blid_sat_info2_window_t

0x5bfa,	// (0x0009352c) aid_size_cell_colour_35

0x5c1a,	// (0x0009354c) aid_size_cell_colour_112

0x5c3a,	// (0x0009356c) aid_size_cell_effect

0xc7a0,	// (0x0009a0d2) bg_tb_trans_pane_cp02

0xaedb,	// (0x0009880d) heading_imed_pane

0x5c5a,	// (0x0009358c) listscroll_imed_pane

0xd012,	// (0x0009a944) heading_imed_pane_g1

0xd01a,	// (0x0009a94c) heading_imed_pane_t1

0xd028,	// (0x0009a95a) grid_imed_colour_35_pane_ParamLimits

0xd028,	// (0x0009a95a) grid_imed_colour_35_pane

0x5c66,	// (0x00093598) grid_imed_effect_pane

0xd044,	// (0x0009a976) list_imed_aspect_pane

0x5c7b,	// (0x000935ad) scroll_pane_cp027_ParamLimits

0x5c7b,	// (0x000935ad) scroll_pane_cp027

0x5c8c,	// (0x000935be) cell_imed_effect_pane_ParamLimits

0x5c8c,	// (0x000935be) cell_imed_effect_pane

0xd04c,	// (0x0009a97e) cell_imed_colour_pane_ParamLimits

0xd04c,	// (0x0009a97e) cell_imed_colour_pane

0xd096,	// (0x0009a9c8) cell_imed_colour_pane_g1_ParamLimits

0xd096,	// (0x0009a9c8) cell_imed_colour_pane_g1

0xd0a7,	// (0x0009a9d9) hgihlgiht_grid_pane_cp016_ParamLimits

0xd0a7,	// (0x0009a9d9) hgihlgiht_grid_pane_cp016

0x5cb7,	// (0x000935e9) cell_imed_effect_pane_g1

0x5cbf,	// (0x000935f1) grid_highlight_pane_cp017

0xd0b8,	// (0x0009a9ea) list_imed_single_pane_ParamLimits

0xd0b8,	// (0x0009a9ea) list_imed_single_pane

0x9994,	// (0x000972c6) list_highlight_pane_cp07

0xd0cc,	// (0x0009a9fe) list_imed_aspect_pane_comp1_t1

0xc7a0,	// (0x0009a0d2) bg_tb_trans_pane_cp05

0xd0ee,	// (0x0009aa20) popup_imed_adjust2_window_g1

0xd115,	// (0x0009aa47) popup_imed_adjust2_window_t1

0xd12d,	// (0x0009aa5f) slider_imed_adjust_pane

0xd141,	// (0x0009aa73) slider_imed_adjust_pane_g1

0xd151,	// (0x0009aa83) slider_imed_adjust_pane_g2

0xd161,	// (0x0009aa93) slider_imed_adjust_pane_g3

0xd172,	// (0x0009aaa4) slider_imed_adjust_pane_g4

0x0003,

0xf7ed,	// (0x0009d11f) slider_imed_adjust_pane_g

0x5cc8,	// (0x000935fa) aid_size_cell_clipart2

0x5cd4,	// (0x00093606) grid_imed_clipart_pane

0xd183,	// (0x0009aab5) scroll_pane_cp031

0x5cde,	// (0x00093610) cell_imed_clipart_pane_ParamLimits

0x5cde,	// (0x00093610) cell_imed_clipart_pane

0x5cfb,	// (0x0009362d) cell_imed_clipart_pane_g1

0x9994,	// (0x000972c6) grid_highlight_pane_cp014

0x59a5,	// (0x000932d7) main_clock2_pane_g1_ParamLimits

0x59a5,	// (0x000932d7) main_clock2_pane_g1

0x5aeb,	// (0x0009341d) aid_call2_pane_cp10

0x5afd,	// (0x0009342f) aid_call_pane_cp10

0xb2b0,	// (0x00098be2) popup_clock_analogue_window_cp10_g1

0xb2b0,	// (0x00098be2) popup_clock_analogue_window_cp10_g2

0x5b0f,	// (0x00093441) popup_clock_analogue_window_cp10_g3

0x5b0f,	// (0x00093441) popup_clock_analogue_window_cp10_g4

0xb2b0,	// (0x00098be2) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7db,	// (0x0009d10d) popup_clock_analogue_window_cp10_g

0x5b25,	// (0x00093457) popup_clock_analogue_window_cp10_t1

0x5b56,	// (0x00093488) clock_digital_number_pane_cp10_ParamLimits

0x5b56,	// (0x00093488) clock_digital_number_pane_cp10

0x5b70,	// (0x000934a2) clock_digital_number_pane_cp11_ParamLimits

0x5b70,	// (0x000934a2) clock_digital_number_pane_cp11

0x5b8a,	// (0x000934bc) clock_digital_number_pane_cp12_ParamLimits

0x5b8a,	// (0x000934bc) clock_digital_number_pane_cp12

0x5ba4,	// (0x000934d6) clock_digital_number_pane_cp13_ParamLimits

0x5ba4,	// (0x000934d6) clock_digital_number_pane_cp13

0x5bbe,	// (0x000934f0) clock_digital_separator_pane_cp10_ParamLimits

0x5bbe,	// (0x000934f0) clock_digital_separator_pane_cp10

0x5bd8,	// (0x0009350a) popup_clock_digital_window_cp02_t1_ParamLimits

0x5bd8,	// (0x0009350a) popup_clock_digital_window_cp02_t1

0xa059,	// (0x0009798b) clock_digital_number_pane_cp10_g1

0xa059,	// (0x0009798b) clock_digital_number_pane_cp10_g2

0x0001,

0xf7f6,	// (0x0009d128) clock_digital_number_pane_cp10_g

0xa059,	// (0x0009798b) clock_digital_separator_pane_cp10_g1

0xa059,	// (0x0009798b) clock_digital_separator_pane_g2_cp10

0xb34b,	// (0x00098c7d) navi_pane_vded_g4

0xb354,	// (0x00098c86) navi_pane_vded_g5

0xb35d,	// (0x00098c8f) navi_pane_vded_t1

0x9994,	// (0x000972c6) main_vded_pane

0x5d04,	// (0x00093636) main_vded_pane_g1

0x5d10,	// (0x00093642) main_vded_pane_g2

0x5d1c,	// (0x0009364e) main_vded_pane_g3

0x0002,

0xf7fb,	// (0x0009d12d) main_vded_pane_g

0x5d28,	// (0x0009365a) main_vded_pane_t1

0x5d36,	// (0x00093668) main_vded_pane_t2

0x0001,

0xf802,	// (0x0009d134) main_vded_pane_t

0x5d44,	// (0x00093676) vded_slider_pane

0x5d4e,	// (0x00093680) vded_video_pane

0xd18b,	// (0x0009aabd) vded_video_pane_g1

0x5d58,	// (0x0009368a) vded_video_pane_g2

0xcbf1,	// (0x0009a523) vded_video_pane_g3

0x0002,

0xf807,	// (0x0009d139) vded_video_pane_g

0xd195,	// (0x0009aac7) vded_slider_pane_g1

0xc93e,	// (0x0009a270) vded_slider_pane_g2

0xd19e,	// (0x0009aad0) vded_slider_pane_g3

0xd1a7,	// (0x0009aad9) vded_slider_pane_g4

0xd1b0,	// (0x0009aae2) vded_slider_pane_g5

0x0004,

0xf80e,	// (0x0009d140) vded_slider_pane_g

0x5716,	// (0x00093048) mup3_rocker_pane_ParamLimits

0x5716,	// (0x00093048) mup3_rocker_pane

0x5d61,	// (0x00093693) mup3_control_keys_pane_g1

0x5d69,	// (0x0009369b) mup3_control_keys_pane_g2

0x5d71,	// (0x000936a3) mup3_control_keys_pane_g3

0x5d79,	// (0x000936ab) mup3_control_keys_pane_g4

0x0003,

0xf819,	// (0x0009d14b) mup3_control_keys_pane_g

0x0c56,	// (0x0008e588) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0c56,	// (0x0008e588) popup_toolbar2_fixed_window_cp01

0x574c,	// (0x0009307e) popup_toolbar2_fixed_window_cp02_ParamLimits

0x574c,	// (0x0009307e) popup_toolbar2_fixed_window_cp02

0xbb18,	// (0x0009944a) popup_call2_audio_second_window_t4_ParamLimits

0xbb18,	// (0x0009944a) popup_call2_audio_second_window_t4

0xc046,	// (0x00099978) popup_call2_audio_first_window_t6_ParamLimits

0xc046,	// (0x00099978) popup_call2_audio_first_window_t6

0xc2dc,	// (0x00099c0e) popup_call2_audio_out_window_t6_ParamLimits

0xc2dc,	// (0x00099c0e) popup_call2_audio_out_window_t6

0x9994,	// (0x000972c6) main_vitu_pane

0x5d89,	// (0x000936bb) aid_size_cell_itu_ParamLimits

0x5d89,	// (0x000936bb) aid_size_cell_itu

0x99e5,	// (0x00097317) bg_popup_window_pane_cp08_ParamLimits

0x99e5,	// (0x00097317) bg_popup_window_pane_cp08

0x5d9f,	// (0x000936d1) field_vitu_entry_pane_ParamLimits

0x5d9f,	// (0x000936d1) field_vitu_entry_pane

0x5db6,	// (0x000936e8) grid_vitu_function_pane_ParamLimits

0x5db6,	// (0x000936e8) grid_vitu_function_pane

0x5dd1,	// (0x00093703) grid_vitu_itu_pane_ParamLimits

0x5dd1,	// (0x00093703) grid_vitu_itu_pane

0x5def,	// (0x00093721) cell_vitu_itu_pane_ParamLimits

0x5def,	// (0x00093721) cell_vitu_itu_pane

0x5e15,	// (0x00093747) cell_vitu_function_pane_ParamLimits

0x5e15,	// (0x00093747) cell_vitu_function_pane

0x99e5,	// (0x00097317) bg_popup_sub_pane_cp08_ParamLimits

0x99e5,	// (0x00097317) bg_popup_sub_pane_cp08

0x5e30,	// (0x00093762) field_vitu_entry_pane_t1_ParamLimits

0x5e30,	// (0x00093762) field_vitu_entry_pane_t1

0xd1d1,	// (0x0009ab03) field_vitu_entry_pane_t2_ParamLimits

0xd1d1,	// (0x0009ab03) field_vitu_entry_pane_t2

0x0001,

0xf827,	// (0x0009d159) field_vitu_entry_pane_t_ParamLimits

0xf827,	// (0x0009d159) field_vitu_entry_pane_t

0xd1f6,	// (0x0009ab28) bg_button_pane_cp05_ParamLimits

0xd1f6,	// (0x0009ab28) bg_button_pane_cp05

0x5e50,	// (0x00093782) cell_vitu_itu_pane_g1

0x5e68,	// (0x0009379a) cell_vitu_itu_pane_t1_ParamLimits

0x5e68,	// (0x0009379a) cell_vitu_itu_pane_t1

0x5e7a,	// (0x000937ac) cell_vitu_itu_pane_t2_ParamLimits

0x5e7a,	// (0x000937ac) cell_vitu_itu_pane_t2

0x0002,

0xf82c,	// (0x0009d15e) cell_vitu_itu_pane_t_ParamLimits

0xf82c,	// (0x0009d15e) cell_vitu_itu_pane_t

0xd204,	// (0x0009ab36) bg_button_pane_cp07

0x5eaf,	// (0x000937e1) cell_vitu_function_pane_g1

0xa0e8,	// (0x00097a1a) main_calc_pane_g1

0x0a62,	// (0x0008e394) aid_visual_content_pane

0x9994,	// (0x000972c6) main_vradio_pane

0x5eb8,	// (0x000937ea) main_vradio_pane_g1_ParamLimits

0x5eb8,	// (0x000937ea) main_vradio_pane_g1

0xd20e,	// (0x0009ab40) main_vradio_pane_g2_ParamLimits

0xd20e,	// (0x0009ab40) main_vradio_pane_g2

0x0001,

0xf833,	// (0x0009d165) main_vradio_pane_g_ParamLimits

0xf833,	// (0x0009d165) main_vradio_pane_g

0x5ecf,	// (0x00093801) main_vradio_pane_t1_ParamLimits

0x5ecf,	// (0x00093801) main_vradio_pane_t1

0x5ee4,	// (0x00093816) main_vradio_pane_t2_ParamLimits

0x5ee4,	// (0x00093816) main_vradio_pane_t2

0xd21b,	// (0x0009ab4d) main_vradio_pane_t3_ParamLimits

0xd21b,	// (0x0009ab4d) main_vradio_pane_t3

0x0002,

0xf838,	// (0x0009d16a) main_vradio_pane_t_ParamLimits

0xf838,	// (0x0009d16a) main_vradio_pane_t

0x5ef9,	// (0x0009382b) vradio_rocker_control_pane_ParamLimits

0x5ef9,	// (0x0009382b) vradio_rocker_control_pane

0x5f0b,	// (0x0009383d) vradio_station_info_pane_ParamLimits

0x5f0b,	// (0x0009383d) vradio_station_info_pane

0xd22f,	// (0x0009ab61) vradio_frequency_info_pane_ParamLimits

0xd22f,	// (0x0009ab61) vradio_frequency_info_pane

0xcbf1,	// (0x0009a523) vradio_station_info_pane_g1

0xd23e,	// (0x0009ab70) vradio_station_info_pane_t1_ParamLimits

0xd23e,	// (0x0009ab70) vradio_station_info_pane_t1

0xd260,	// (0x0009ab92) vradio_station_info_pane_t2_ParamLimits

0xd260,	// (0x0009ab92) vradio_station_info_pane_t2

0x0001,

0xf83f,	// (0x0009d171) vradio_station_info_pane_t_ParamLimits

0xf83f,	// (0x0009d171) vradio_station_info_pane_t

0xd272,	// (0x0009aba4) vradio_tuning_pane

0xd27a,	// (0x0009abac) vradio_rocker_control_pane_g1

0xd282,	// (0x0009abb4) vradio_rocker_control_pane_g2

0xd28a,	// (0x0009abbc) vradio_rocker_control_pane_g3

0xd292,	// (0x0009abc4) vradio_rocker_control_pane_g4

0xd29a,	// (0x0009abcc) vradio_rocker_control_pane_g5

0x0004,

0xf844,	// (0x0009d176) vradio_rocker_control_pane_g

0x5f1b,	// (0x0009384d) vradio_frequency_info_pane_g1

0xd2a2,	// (0x0009abd4) vradio_frequency_info_pane_t1_ParamLimits

0xd2a2,	// (0x0009abd4) vradio_frequency_info_pane_t1

0x5f25,	// (0x00093857) vradio_tuning_pane_g1

0x5f30,	// (0x00093862) vradio_tuning_pane_t1

0x99b2,	// (0x000972e4) area_side_right_pane_ParamLimits

0x99b2,	// (0x000972e4) area_side_right_pane

0xc75b,	// (0x0009a08d) status_small_pane_g1

0xc763,	// (0x0009a095) status_small_pane_g2

0xc76c,	// (0x0009a09e) status_small_pane_g3

0xc775,	// (0x0009a0a7) status_small_pane_g4

0x0003,

0xf5ff,	// (0x0009cf31) status_small_pane_g

0xc77e,	// (0x0009a0b0) status_small_pane_t1

0x9994,	// (0x000972c6) main_video3_pane

0xd2b6,	// (0x0009abe8) cams_zoom_vslider_pane

0xd2be,	// (0x0009abf0) image3_wide_pane_ParamLimits

0xd2be,	// (0x0009abf0) image3_wide_pane

0xd2d8,	// (0x0009ac0a) image3_wide_small_pane

0xd2e4,	// (0x0009ac16) main_video3_pane_g1_ParamLimits

0xd2e4,	// (0x0009ac16) main_video3_pane_g1

0xd300,	// (0x0009ac32) main_video3_pane_g2_ParamLimits

0xd300,	// (0x0009ac32) main_video3_pane_g2

0x0001,

0xf84f,	// (0x0009d181) main_video3_pane_g_ParamLimits

0xf84f,	// (0x0009d181) main_video3_pane_g

0xd31c,	// (0x0009ac4e) main_video3_pane_t1_ParamLimits

0xd31c,	// (0x0009ac4e) main_video3_pane_t1

0xd347,	// (0x0009ac79) main_video3_pane_t2_ParamLimits

0xd347,	// (0x0009ac79) main_video3_pane_t2

0xd374,	// (0x0009aca6) main_video3_pane_t3_ParamLimits

0xd374,	// (0x0009aca6) main_video3_pane_t3

0x0002,

0xf854,	// (0x0009d186) main_video3_pane_t_ParamLimits

0xf854,	// (0x0009d186) main_video3_pane_t

0xd3a1,	// (0x0009acd3) cams_zoom_vslider_pane_g1

0xd3aa,	// (0x0009acdc) cams_zoom_vslider_pane_g2

0x0001,

0xf85b,	// (0x0009d18d) cams_zoom_vslider_pane_g

0xd3b2,	// (0x0009ace4) small_slider_vertical_pane

0xcbf1,	// (0x0009a523) small_slider_vertical_pane_g1

0xcbf1,	// (0x0009a523) small_slider_vertical_pane_g2

0xd3ba,	// (0x0009acec) small_slider_vertical_pane_g3

0x0002,

0xf860,	// (0x0009d192) small_slider_vertical_pane_g

0x9994,	// (0x000972c6) main_hwr_training_pane

0xd3c3,	// (0x0009acf5) hwr_training_instruct_pane_ParamLimits

0xd3c3,	// (0x0009acf5) hwr_training_instruct_pane

0x5f3f,	// (0x00093871) hwr_training_navi_pane_ParamLimits

0x5f3f,	// (0x00093871) hwr_training_navi_pane

0x5f5e,	// (0x00093890) hwr_training_write_pane_ParamLimits

0x5f5e,	// (0x00093890) hwr_training_write_pane

0x9994,	// (0x000972c6) bg_frame_shadow_pane

0xd3fa,	// (0x0009ad2c) hwr_training_write_pane_g1

0xd402,	// (0x0009ad34) hwr_training_write_pane_g2

0xd40a,	// (0x0009ad3c) hwr_training_write_pane_g3

0xd412,	// (0x0009ad44) hwr_training_write_pane_g4

0xd41a,	// (0x0009ad4c) hwr_training_write_pane_g5

0xd422,	// (0x0009ad54) hwr_training_write_pane_g6

0xd42a,	// (0x0009ad5c) hwr_training_write_pane_g7

0x0006,

0xf867,	// (0x0009d199) hwr_training_write_pane_g

0xa777,	// (0x000980a9) hwr_training_navi_pane_g1_ParamLimits

0xa777,	// (0x000980a9) hwr_training_navi_pane_g1

0xa789,	// (0x000980bb) hwr_training_navi_pane_g2_ParamLimits

0xa789,	// (0x000980bb) hwr_training_navi_pane_g2

0xa79b,	// (0x000980cd) hwr_training_navi_pane_g3_ParamLimits

0xa79b,	// (0x000980cd) hwr_training_navi_pane_g3

0xa7ab,	// (0x000980dd) hwr_training_navi_pane_g4_ParamLimits

0xa7ab,	// (0x000980dd) hwr_training_navi_pane_g4

0x0004,

0xf876,	// (0x0009d1a8) hwr_training_navi_pane_g_ParamLimits

0xf876,	// (0x0009d1a8) hwr_training_navi_pane_g

0xa7b8,	// (0x000980ea) hwr_training_navi_pane_t1

0x5fa6,	// (0x000938d8) list_single_hwr_training_instruct_pane_ParamLimits

0x5fa6,	// (0x000938d8) list_single_hwr_training_instruct_pane

0xd432,	// (0x0009ad64) list_single_hwr_training_instruct_pane_t1

0xcb31,	// (0x0009a463) bg_frame_shadow_pane_g1

0xd441,	// (0x0009ad73) bg_frame_shadow_pane_g2

0xd449,	// (0x0009ad7b) bg_frame_shadow_pane_g3

0xd451,	// (0x0009ad83) bg_frame_shadow_pane_g4

0xd459,	// (0x0009ad8b) bg_frame_shadow_pane_g5

0xd461,	// (0x0009ad93) bg_frame_shadow_pane_g6

0xd469,	// (0x0009ad9b) bg_frame_shadow_pane_g7

0xa241,	// (0x00097b73) bg_frame_shadow_pane_g8

0x0007,

0xf881,	// (0x0009d1b3) bg_frame_shadow_pane_g

0x9994,	// (0x000972c6) main_video_tele_dialer_pane

0x5fbb,	// (0x000938ed) aid_size_cell_video_keypad_ParamLimits

0x5fbb,	// (0x000938ed) aid_size_cell_video_keypad

0x5fd5,	// (0x00093907) grid_video_dialer_keypad_pane_ParamLimits

0x5fd5,	// (0x00093907) grid_video_dialer_keypad_pane

0x6021,	// (0x00093953) video_down_pane_cp_ParamLimits

0x6021,	// (0x00093953) video_down_pane_cp

0x6051,	// (0x00093983) cell_video_dialer_keypad_pane_ParamLimits

0x6051,	// (0x00093983) cell_video_dialer_keypad_pane

0xd471,	// (0x0009ada3) bg_button_pane_cp08_ParamLimits

0xd471,	// (0x0009ada3) bg_button_pane_cp08

0x6075,	// (0x000939a7) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6075,	// (0x000939a7) cell_video_dialer_keypad_pane_g1

0x5700,	// (0x00093032) mup3_rocker2_pane_ParamLimits

0x5700,	// (0x00093032) mup3_rocker2_pane

0xcbf1,	// (0x0009a523) mup3_rocker2_pane_g1

0x41b9,	// (0x00091aeb) main_dialer2_pane

0x9994,	// (0x000972c6) main_mp4_pane

0xa7ce,	// (0x00098100) main_mp4_pane_g1_ParamLimits

0xa7ce,	// (0x00098100) main_mp4_pane_g1

0xa7ce,	// (0x00098100) main_mp4_pane_g2_ParamLimits

0xa7ce,	// (0x00098100) main_mp4_pane_g2

0x60b0,	// (0x000939e2) main_mp4_pane_g3_ParamLimits

0x60b0,	// (0x000939e2) main_mp4_pane_g3

0xa7dc,	// (0x0009810e) main_mp4_pane_g4_ParamLimits

0xa7dc,	// (0x0009810e) main_mp4_pane_g4

0xa804,	// (0x00098136) main_mp4_pane_g5_ParamLimits

0xa804,	// (0x00098136) main_mp4_pane_g5

0x0005,

0xf8a1,	// (0x0009d1d3) main_mp4_pane_g_ParamLimits

0xf8a1,	// (0x0009d1d3) main_mp4_pane_g

0xa854,	// (0x00098186) main_mp4_pane_t1_ParamLimits

0xa854,	// (0x00098186) main_mp4_pane_t1

0xa8b0,	// (0x000981e2) main_mp4_pane_t2_ParamLimits

0xa8b0,	// (0x000981e2) main_mp4_pane_t2

0xd47d,	// (0x0009adaf) main_mp4_pane_t3_ParamLimits

0xd47d,	// (0x0009adaf) main_mp4_pane_t3

0xa902,	// (0x00098234) main_mp4_pane_t4_ParamLimits

0xa902,	// (0x00098234) main_mp4_pane_t4

0x0003,

0xf8ae,	// (0x0009d1e0) main_mp4_pane_t_ParamLimits

0xf8ae,	// (0x0009d1e0) main_mp4_pane_t

0xa942,	// (0x00098274) mp4_progress_pane_ParamLimits

0xa942,	// (0x00098274) mp4_progress_pane

0xa98c,	// (0x000982be) mp4_rocker_pane_ParamLimits

0xa98c,	// (0x000982be) mp4_rocker_pane

0xd4a5,	// (0x0009add7) mp4_progress_pane_t1

0xd4be,	// (0x0009adf0) mp4_progress_pane_t2

0x0001,

0xf8b7,	// (0x0009d1e9) mp4_progress_pane_t

0xd4d7,	// (0x0009ae09) mup_progress_pane_cp04

0xcbf1,	// (0x0009a523) mp4_rocker_pane_g1

0x60fa,	// (0x00093a2c) aid_cell_size_keypad2_ParamLimits

0x60fa,	// (0x00093a2c) aid_cell_size_keypad2

0x6110,	// (0x00093a42) dialer2_ne_pane_ParamLimits

0x6110,	// (0x00093a42) dialer2_ne_pane

0x6128,	// (0x00093a5a) grid_dialer2_keypad_pane_ParamLimits

0x6128,	// (0x00093a5a) grid_dialer2_keypad_pane

0xc9d0,	// (0x0009a302) bg_popup_call_pane_cp07_ParamLimits

0xc9d0,	// (0x0009a302) bg_popup_call_pane_cp07

0x6144,	// (0x00093a76) dialer2_ne_pane_t1_ParamLimits

0x6144,	// (0x00093a76) dialer2_ne_pane_t1

0x617f,	// (0x00093ab1) cell_dialer2_keypad_pane_ParamLimits

0x617f,	// (0x00093ab1) cell_dialer2_keypad_pane

0xd4f5,	// (0x0009ae27) bg_button_pane_pane_cp04_ParamLimits

0xd4f5,	// (0x0009ae27) bg_button_pane_pane_cp04

0x61a3,	// (0x00093ad5) cell_dialer2_keypad_pane_g1_ParamLimits

0x61a3,	// (0x00093ad5) cell_dialer2_keypad_pane_g1

0x1d47,	// (0x0008f679) aid_placing_vt_set_content_ParamLimits

0x1d47,	// (0x0008f679) aid_placing_vt_set_content

0x1d6b,	// (0x0008f69d) aid_placing_vt_set_title_ParamLimits

0x1d6b,	// (0x0008f69d) aid_placing_vt_set_title

0x9994,	// (0x000972c6) main_image3_pane

0x6269,	// (0x00093b9b) area_side_right_pane_cp01_ParamLimits

0x6269,	// (0x00093b9b) area_side_right_pane_cp01

0xa7ce,	// (0x00098100) main_image3_pane_g1_ParamLimits

0xa7ce,	// (0x00098100) main_image3_pane_g1

0x6282,	// (0x00093bb4) main_image3_pane_g2_ParamLimits

0x6282,	// (0x00093bb4) main_image3_pane_g2

0x62aa,	// (0x00093bdc) main_image3_pane_g3_ParamLimits

0x62aa,	// (0x00093bdc) main_image3_pane_g3

0x62d4,	// (0x00093c06) main_image3_pane_g4_ParamLimits

0x62d4,	// (0x00093c06) main_image3_pane_g4

0x0003,

0xf8c6,	// (0x0009d1f8) main_image3_pane_g_ParamLimits

0xf8c6,	// (0x0009d1f8) main_image3_pane_g

0x62fe,	// (0x00093c30) main_image3_pane_t1_ParamLimits

0x62fe,	// (0x00093c30) main_image3_pane_t1

0x6356,	// (0x00093c88) main_image3_pane_t2_ParamLimits

0x6356,	// (0x00093c88) main_image3_pane_t2

0x63a8,	// (0x00093cda) main_image3_pane_t3_ParamLimits

0x63a8,	// (0x00093cda) main_image3_pane_t3

0x0003,

0xf8cf,	// (0x0009d201) main_image3_pane_t_ParamLimits

0xf8cf,	// (0x0009d201) main_image3_pane_t

0x99e5,	// (0x00097317) grid_sctrl_middle_pane_cp01_ParamLimits

0x99e5,	// (0x00097317) grid_sctrl_middle_pane_cp01

0x6430,	// (0x00093d62) cell_sctrl_middle_pane_cp01_ParamLimits

0x6430,	// (0x00093d62) cell_sctrl_middle_pane_cp01

0x644d,	// (0x00093d7f) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x644d,	// (0x00093d7f) cell_sctrl_middle_pane_cp01_g1

0x9994,	// (0x000972c6) main_call4_pane

0x6462,	// (0x00093d94) aid_size_button_call4_ParamLimits

0x6462,	// (0x00093d94) aid_size_button_call4

0x6495,	// (0x00093dc7) call4_windows_pane_ParamLimits

0x6495,	// (0x00093dc7) call4_windows_pane

0x64b7,	// (0x00093de9) grid_call4_button_pane_ParamLimits

0x64b7,	// (0x00093de9) grid_call4_button_pane

0xd501,	// (0x0009ae33) call4_windows_conf_pane

0x64e2,	// (0x00093e14) popup_call4_audio_first_window_ParamLimits

0x64e2,	// (0x00093e14) popup_call4_audio_first_window

0x650e,	// (0x00093e40) popup_call4_audio_second_window_ParamLimits

0x650e,	// (0x00093e40) popup_call4_audio_second_window

0xd53e,	// (0x0009ae70) popup_call4_audio_wait_window_ParamLimits

0xd53e,	// (0x0009ae70) popup_call4_audio_wait_window

0x6524,	// (0x00093e56) cell_call4_button_pane_ParamLimits

0x6524,	// (0x00093e56) cell_call4_button_pane

0x654b,	// (0x00093e7d) bg_button_pane_cp09_ParamLimits

0x654b,	// (0x00093e7d) bg_button_pane_cp09

0x6557,	// (0x00093e89) cell_call4_button_pane_g1_ParamLimits

0x6557,	// (0x00093e89) cell_call4_button_pane_g1

0x657d,	// (0x00093eaf) cell_call4_button_pane_t1_ParamLimits

0x657d,	// (0x00093eaf) cell_call4_button_pane_t1

0xd586,	// (0x0009aeb8) popup_call4_audio_conf_window_ParamLimits

0xd586,	// (0x0009aeb8) popup_call4_audio_conf_window

0x5762,	// (0x00093094) mup3_progress_pane_t1_ParamLimits

0x5780,	// (0x000930b2) mup3_progress_pane_t2_ParamLimits

0xce9c,	// (0x0009a7ce) mup3_progress_pane_t3_ParamLimits

0xf7a3,	// (0x0009d0d5) mup3_progress_pane_t_ParamLimits

0xceb9,	// (0x0009a7eb) mup_progress_pane_cp03_ParamLimits

0x5d81,	// (0x000936b3) mup3_control_keys_pane_g4_copy1

0xa970,	// (0x000982a2) mp4_rocker2_pane_ParamLimits

0xa970,	// (0x000982a2) mp4_rocker2_pane

0xd5a0,	// (0x0009aed2) mp4_rocker2_pane_g1

0xd5a8,	// (0x0009aeda) mp4_rocker2_pane_g2

0xa9e2,	// (0x00098314) mp4_rocker2_pane_g3

0xa9ea,	// (0x0009831c) mp4_rocker2_pane_g4

0xa9f2,	// (0x00098324) mp4_rocker2_pane_g5

0x0004,

0xf8d8,	// (0x0009d20a) mp4_rocker2_pane_g

0x9994,	// (0x000972c6) main_camera4_pane

0x9994,	// (0x000972c6) main_video4_pane

0x5fef,	// (0x00093921) main_video_tele_dialer_pane_t1_ParamLimits

0x5fef,	// (0x00093921) main_video_tele_dialer_pane_t1

0x6008,	// (0x0009393a) main_video_tele_dialer_pane_t2_ParamLimits

0x6008,	// (0x0009393a) main_video_tele_dialer_pane_t2

0x0001,

0xf892,	// (0x0009d1c4) main_video_tele_dialer_pane_t_ParamLimits

0xf892,	// (0x0009d1c4) main_video_tele_dialer_pane_t

0x65bb,	// (0x00093eed) cam4_autofocus_pane_ParamLimits

0x65bb,	// (0x00093eed) cam4_autofocus_pane

0x65d1,	// (0x00093f03) cam4_image_uncrop_pane_ParamLimits

0x65d1,	// (0x00093f03) cam4_image_uncrop_pane

0x65ea,	// (0x00093f1c) cam4_indicators_pane_ParamLimits

0x65ea,	// (0x00093f1c) cam4_indicators_pane

0x6619,	// (0x00093f4b) main_camera4_pane_g1_ParamLimits

0x6619,	// (0x00093f4b) main_camera4_pane_g1

0x662b,	// (0x00093f5d) main_camera4_pane_g2_ParamLimits

0x662b,	// (0x00093f5d) main_camera4_pane_g2

0x663e,	// (0x00093f70) main_camera4_pane_g3_ParamLimits

0x663e,	// (0x00093f70) main_camera4_pane_g3

0x6651,	// (0x00093f83) main_camera4_pane_g4_ParamLimits

0x6651,	// (0x00093f83) main_camera4_pane_g4

0x6664,	// (0x00093f96) main_camera4_pane_g5_ParamLimits

0x6664,	// (0x00093f96) main_camera4_pane_g5

0x0005,

0xf8e3,	// (0x0009d215) main_camera4_pane_g_ParamLimits

0xf8e3,	// (0x0009d215) main_camera4_pane_g

0x6688,	// (0x00093fba) main_camera4_pane_t1_ParamLimits

0x6688,	// (0x00093fba) main_camera4_pane_t1

0xce21,	// (0x0009a753) bg_tb_trans_pane_cp06

0xaa20,	// (0x00098352) cam4_indicators_pane_g1

0xaa31,	// (0x00098363) cam4_indicators_pane_g2

0x0002,

0xf8fe,	// (0x0009d230) cam4_indicators_pane_g

0xaa49,	// (0x0009837b) cam4_indicators_pane_t1

0x66ec,	// (0x0009401e) main_video4_pane_g1_ParamLimits

0x66ec,	// (0x0009401e) main_video4_pane_g1

0x66fb,	// (0x0009402d) main_video4_pane_g2_ParamLimits

0x66fb,	// (0x0009402d) main_video4_pane_g2

0x670a,	// (0x0009403c) main_video4_pane_g3_ParamLimits

0x670a,	// (0x0009403c) main_video4_pane_g3

0x6719,	// (0x0009404b) main_video4_pane_g4_ParamLimits

0x6719,	// (0x0009404b) main_video4_pane_g4

0x0004,

0xf905,	// (0x0009d237) main_video4_pane_g_ParamLimits

0xf905,	// (0x0009d237) main_video4_pane_g

0x6737,	// (0x00094069) vid4_indicators_pane_ParamLimits

0x6737,	// (0x00094069) vid4_indicators_pane

0x6765,	// (0x00094097) video4_image_uncrop_cif_pane_ParamLimits

0x6765,	// (0x00094097) video4_image_uncrop_cif_pane

0x677f,	// (0x000940b1) video4_image_uncrop_nhd_pane_ParamLimits

0x677f,	// (0x000940b1) video4_image_uncrop_nhd_pane

0x65d1,	// (0x00093f03) video4_image_uncrop_vga_pane_ParamLimits

0x65d1,	// (0x00093f03) video4_image_uncrop_vga_pane

0x99e5,	// (0x00097317) bg_tb_trans_pane_cp07

0xaa77,	// (0x000983a9) vid4_indicators_pane_g1

0xaa8d,	// (0x000983bf) vid4_indicators_pane_g2

0xaaa1,	// (0x000983d3) vid4_indicators_pane_g3

0x0004,

0xf910,	// (0x0009d242) vid4_indicators_pane_g

0xaad2,	// (0x00098404) vid4_indicators_pane_t1

0x6795,	// (0x000940c7) cam4_autofocus_pane_g1

0x679d,	// (0x000940cf) cam4_autofocus_pane_g2

0x67a5,	// (0x000940d7) cam4_autofocus_pane_g3

0x0002,

0xf91b,	// (0x0009d24d) cam4_autofocus_pane_g

0x67ad,	// (0x000940df) cam4_autofocus_pane_g3_copy1

0x6035,	// (0x00093967) video_down_pane_cp_t1

0x6043,	// (0x00093975) video_down_pane_cp_t2

0x0001,

0xf897,	// (0x0009d1c9) video_down_pane_cp_t

0x99e5,	// (0x00097317) popup_vitu2_window_ParamLimits

0x99e5,	// (0x00097317) popup_vitu2_window

0x67b5,	// (0x000940e7) aid_size_cell2_itu2_ParamLimits

0x67b5,	// (0x000940e7) aid_size_cell2_itu2

0x67db,	// (0x0009410d) aid_size_cell_itu2_ParamLimits

0x67db,	// (0x0009410d) aid_size_cell_itu2

0x683b,	// (0x0009416d) bg_popup_window_pane_cp09_ParamLimits

0x683b,	// (0x0009416d) bg_popup_window_pane_cp09

0x6849,	// (0x0009417b) field_vitu2_entry_pane_ParamLimits

0x6849,	// (0x0009417b) field_vitu2_entry_pane

0x6871,	// (0x000941a3) grid_vitu2_function_pane_ParamLimits

0x6871,	// (0x000941a3) grid_vitu2_function_pane

0x68c2,	// (0x000941f4) grid_vitu2_itu_pane_ParamLimits

0x68c2,	// (0x000941f4) grid_vitu2_itu_pane

0x694d,	// (0x0009427f) cell_vitu2_itu_pane_ParamLimits

0x694d,	// (0x0009427f) cell_vitu2_itu_pane

0x6973,	// (0x000942a5) cell_vitu2_function_pane_ParamLimits

0x6973,	// (0x000942a5) cell_vitu2_function_pane

0xd5c4,	// (0x0009aef6) bg_popup_call_pane_cp08_ParamLimits

0xd5c4,	// (0x0009aef6) bg_popup_call_pane_cp08

0xd5db,	// (0x0009af0d) field_vitu2_entry_pane_g1

0xd5e7,	// (0x0009af19) field_vitu2_entry_pane_g2

0x0002,

0xf922,	// (0x0009d254) field_vitu2_entry_pane_g

0xfe1d,	// (0x0008d74f) field_vitu2_entry_pane_t1_ParamLimits

0xfe1d,	// (0x0008d74f) field_vitu2_entry_pane_t1

0x69b7,	// (0x000942e9) field_vitu2_entry_pane_t2_ParamLimits

0x69b7,	// (0x000942e9) field_vitu2_entry_pane_t2

0x0001,

0xf929,	// (0x0009d25b) field_vitu2_entry_pane_t_ParamLimits

0xf929,	// (0x0009d25b) field_vitu2_entry_pane_t

0x69d4,	// (0x00094306) bg_button_pane_cp010_ParamLimits

0x69d4,	// (0x00094306) bg_button_pane_cp010

0x69e2,	// (0x00094314) cell_vitu2_itu_pane_g1

0x6a0d,	// (0x0009433f) cell_vitu2_itu_pane_t1_ParamLimits

0x6a0d,	// (0x0009433f) cell_vitu2_itu_pane_t1

0xfe48,	// (0x0008d77a) cell_vitu2_itu_pane_t2_ParamLimits

0xfe48,	// (0x0008d77a) cell_vitu2_itu_pane_t2

0x0002,

0xf933,	// (0x0009d265) cell_vitu2_itu_pane_t_ParamLimits

0xf933,	// (0x0009d265) cell_vitu2_itu_pane_t

0x99e5,	// (0x00097317) bg_button_pane_cp011

0x6a6b,	// (0x0009439d) cell_vitu2_function_pane_g1

0x9994,	// (0x000972c6) main_myfav_hc_pane

0x63f8,	// (0x00093d2a) popup_image3_note_pane_ParamLimits

0x63f8,	// (0x00093d2a) popup_image3_note_pane

0x6414,	// (0x00093d46) popup_image3_tool_bar_pane_ParamLimits

0x6414,	// (0x00093d46) popup_image3_tool_bar_pane

0xfecc,	// (0x0008d7fe) cell_vitu2_itu_pane_t3_ParamLimits

0xfecc,	// (0x0008d7fe) cell_vitu2_itu_pane_t3

0x9994,	// (0x000972c6) bg_popup_trans_pane

0xd609,	// (0x0009af3b) grid_image3_tool_bar_pane

0xd613,	// (0x0009af45) bg_popup_trans_pane_g1

0xaca2,	// (0x000985d4) bg_popup_trans_pane_g2

0xd61b,	// (0x0009af4d) bg_popup_trans_pane_g3

0xd623,	// (0x0009af55) bg_popup_trans_pane_g4

0xd62b,	// (0x0009af5d) bg_popup_trans_pane_g5

0xd633,	// (0x0009af65) bg_popup_trans_pane_g6

0xd63b,	// (0x0009af6d) bg_popup_trans_pane_g7

0xd643,	// (0x0009af75) bg_popup_trans_pane_g8

0xac82,	// (0x000985b4) bg_popup_trans_pane_g9

0x0008,

0xf93a,	// (0x0009d26c) bg_popup_trans_pane_g

0xd64b,	// (0x0009af7d) cell_image3_tool_bar_pane_ParamLimits

0xd64b,	// (0x0009af7d) cell_image3_tool_bar_pane

0xcbf1,	// (0x0009a523) cell_image3_tool_bar_pane_g1

0x9994,	// (0x000972c6) bg_popup_trans_pane_cp1

0xd661,	// (0x0009af93) popup_image3_note_pane_t1

0xd66f,	// (0x0009afa1) popup_image3_note_pane_t2

0xd67d,	// (0x0009afaf) popup_image3_note_pane_t3

0x0002,

0xf94d,	// (0x0009d27f) popup_image3_note_pane_t

0xd68d,	// (0x0009afbf) popup_image3_note_pane_t3_copy1

0x6a7f,	// (0x000943b1) bg_myfav_hc_instruction_pane_ParamLimits

0x6a7f,	// (0x000943b1) bg_myfav_hc_instruction_pane

0x6a97,	// (0x000943c9) cell_myfav_contact_pane_ParamLimits

0x6a97,	// (0x000943c9) cell_myfav_contact_pane

0x6ab3,	// (0x000943e5) cell_myfav_contact_pane_cp1_ParamLimits

0x6ab3,	// (0x000943e5) cell_myfav_contact_pane_cp1

0x6acb,	// (0x000943fd) cell_myfav_contact_pane_cp2_ParamLimits

0x6acb,	// (0x000943fd) cell_myfav_contact_pane_cp2

0x6ae3,	// (0x00094415) cell_myfav_contact_pane_cp3_ParamLimits

0x6ae3,	// (0x00094415) cell_myfav_contact_pane_cp3

0x6afa,	// (0x0009442c) cell_myfav_contact_pane_cp4_ParamLimits

0x6afa,	// (0x0009442c) cell_myfav_contact_pane_cp4

0x6b12,	// (0x00094444) cell_myfav_contact_pane_cp5_ParamLimits

0x6b12,	// (0x00094444) cell_myfav_contact_pane_cp5

0x6b26,	// (0x00094458) cell_myfav_contact_pane_cp6_ParamLimits

0x6b26,	// (0x00094458) cell_myfav_contact_pane_cp6

0x6b3c,	// (0x0009446e) cell_myfav_contact_pane_cp7_ParamLimits

0x6b3c,	// (0x0009446e) cell_myfav_contact_pane_cp7

0xd69b,	// (0x0009afcd) listscroll_gen_pane_cp05

0x6b54,	// (0x00094486) main_myfav_hc_pane_g1_ParamLimits

0x6b54,	// (0x00094486) main_myfav_hc_pane_g1

0x6b6e,	// (0x000944a0) main_myfav_hc_pane_g2_ParamLimits

0x6b6e,	// (0x000944a0) main_myfav_hc_pane_g2

0x0002,

0xf954,	// (0x0009d286) main_myfav_hc_pane_g_ParamLimits

0xf954,	// (0x0009d286) main_myfav_hc_pane_g

0x6ba2,	// (0x000944d4) main_myfav_hc_pane_t1_ParamLimits

0x6ba2,	// (0x000944d4) main_myfav_hc_pane_t1

0xd6a4,	// (0x0009afd6) main_myfav_hc_pane_t2_ParamLimits

0xd6a4,	// (0x0009afd6) main_myfav_hc_pane_t2

0xd6b6,	// (0x0009afe8) main_myfav_hc_pane_t3_ParamLimits

0xd6b6,	// (0x0009afe8) main_myfav_hc_pane_t3

0x6bb9,	// (0x000944eb) main_myfav_hc_pane_t4_ParamLimits

0x6bb9,	// (0x000944eb) main_myfav_hc_pane_t4

0x0004,

0xf95b,	// (0x0009d28d) main_myfav_hc_pane_t_ParamLimits

0xf95b,	// (0x0009d28d) main_myfav_hc_pane_t

0xcbf1,	// (0x0009a523) bg_myfav_hc_instruction_pane_g1

0xd6c8,	// (0x0009affa) cell_myfav_contact_pane_g1_ParamLimits

0xd6c8,	// (0x0009affa) cell_myfav_contact_pane_g1

0xd6c8,	// (0x0009affa) cell_myfav_contact_pane_g2_ParamLimits

0xd6c8,	// (0x0009affa) cell_myfav_contact_pane_g2

0xd6d4,	// (0x0009b006) cell_myfav_contact_pane_g3_ParamLimits

0xd6d4,	// (0x0009b006) cell_myfav_contact_pane_g3

0xce86,	// (0x0009a7b8) cell_myfav_contact_pane_g4_ParamLimits

0xce86,	// (0x0009a7b8) cell_myfav_contact_pane_g4

0xd6e1,	// (0x0009b013) cell_myfav_contact_pane_g5_ParamLimits

0xd6e1,	// (0x0009b013) cell_myfav_contact_pane_g5

0x0004,

0xf966,	// (0x0009d298) cell_myfav_contact_pane_g_ParamLimits

0xf966,	// (0x0009d298) cell_myfav_contact_pane_g

0x6b88,	// (0x000944ba) main_myfav_hc_pane_g3_ParamLimits

0x6b88,	// (0x000944ba) main_myfav_hc_pane_g3

0x0bb7,	// (0x0008e4e9) popup_adpt_find_window

0x6be3,	// (0x00094515) afind_page_pane_ParamLimits

0x6be3,	// (0x00094515) afind_page_pane

0x6bf8,	// (0x0009452a) aid_size_cell_afind_ParamLimits

0x6bf8,	// (0x0009452a) aid_size_cell_afind

0x6c16,	// (0x00094548) bg_popup_sub_pane_cp09_ParamLimits

0x6c16,	// (0x00094548) bg_popup_sub_pane_cp09

0x6c23,	// (0x00094555) find_pane_cp01_ParamLimits

0x6c23,	// (0x00094555) find_pane_cp01

0xd6ed,	// (0x0009b01f) grid_afind_control_pane_ParamLimits

0xd6ed,	// (0x0009b01f) grid_afind_control_pane

0x6c30,	// (0x00094562) grid_afind_pane_ParamLimits

0x6c30,	// (0x00094562) grid_afind_pane

0x6c52,	// (0x00094584) cell_afind_pane_ParamLimits

0x6c52,	// (0x00094584) cell_afind_pane

0xcbf1,	// (0x0009a523) afind_page_pane_g1

0x6cb9,	// (0x000945eb) afind_page_pane_g2

0x6cc2,	// (0x000945f4) afind_page_pane_g3

0x0002,

0xf971,	// (0x0009d2a3) afind_page_pane_g

0x6ccb,	// (0x000945fd) afind_page_pane_t1

0xd701,	// (0x0009b033) cell_afind_grid_control_pane_ParamLimits

0xd701,	// (0x0009b033) cell_afind_grid_control_pane

0xd4f5,	// (0x0009ae27) bg_button_pane_cp69_ParamLimits

0xd4f5,	// (0x0009ae27) bg_button_pane_cp69

0x6ceb,	// (0x0009461d) cell_afind_pane_g1_ParamLimits

0x6ceb,	// (0x0009461d) cell_afind_pane_g1

0x6cf8,	// (0x0009462a) cell_afind_pane_t1_ParamLimits

0x6cf8,	// (0x0009462a) cell_afind_pane_t1

0xa3f4,	// (0x00097d26) bg_button_pane_cp72

0xd710,	// (0x0009b042) cell_afind_grid_control_pane_g1

0x3c5c,	// (0x0009158e) aid_image_placing_area_ParamLimits

0x3c5c,	// (0x0009158e) aid_image_placing_area

0xd1b9,	// (0x0009aaeb) field_vitu_entry_pane_g1_ParamLimits

0xd1b9,	// (0x0009aaeb) field_vitu_entry_pane_g1

0xd1c5,	// (0x0009aaf7) field_vitu_entry_pane_g2_ParamLimits

0xd1c5,	// (0x0009aaf7) field_vitu_entry_pane_g2

0x0001,

0xf822,	// (0x0009d154) field_vitu_entry_pane_g_ParamLimits

0xf822,	// (0x0009d154) field_vitu_entry_pane_g

0x5e50,	// (0x00093782) cell_vitu_itu_pane_g1_ParamLimits

0x5e92,	// (0x000937c4) cell_vitu_itu_pane_t3_ParamLimits

0x5e92,	// (0x000937c4) cell_vitu_itu_pane_t3

0xd4a5,	// (0x0009add7) mp4_progress_pane_t1_ParamLimits

0xd4be,	// (0x0009adf0) mp4_progress_pane_t2_ParamLimits

0xf8b7,	// (0x0009d1e9) mp4_progress_pane_t_ParamLimits

0xd4d7,	// (0x0009ae09) mup_progress_pane_cp04_ParamLimits

0x6bcd,	// (0x000944ff) main_myfav_hc_pane_t5_ParamLimits

0x6bcd,	// (0x000944ff) main_myfav_hc_pane_t5

0x0a76,	// (0x0008e3a8) aid_zoom_text_primary

0x0bb7,	// (0x0008e4e9) popup_adpt_find_window_ParamLimits

0x99e5,	// (0x00097317) main_cam_set_pane

0x6603,	// (0x00093f35) cam4_zoom_pane_ParamLimits

0x6603,	// (0x00093f35) cam4_zoom_pane

0x6d0a,	// (0x0009463c) main_cam_set_pane_g1_ParamLimits

0x6d0a,	// (0x0009463c) main_cam_set_pane_g1

0x6d18,	// (0x0009464a) main_cam_set_pane_g2_ParamLimits

0x6d18,	// (0x0009464a) main_cam_set_pane_g2

0x0001,

0xf978,	// (0x0009d2aa) main_cam_set_pane_g_ParamLimits

0xf978,	// (0x0009d2aa) main_cam_set_pane_g

0x6d39,	// (0x0009466b) main_cam_set_pane_t1_ParamLimits

0x6d39,	// (0x0009466b) main_cam_set_pane_t1

0x6d54,	// (0x00094686) main_cset_listscroll_pane_ParamLimits

0x6d54,	// (0x00094686) main_cset_listscroll_pane

0x6d78,	// (0x000946aa) main_cset_slider_pane_ParamLimits

0x6d78,	// (0x000946aa) main_cset_slider_pane

0xd721,	// (0x0009b053) main_cset_list_pane_ParamLimits

0xd721,	// (0x0009b053) main_cset_list_pane

0xd731,	// (0x0009b063) scroll_pane_cp028

0x6da2,	// (0x000946d4) aid_area_touch_slider

0x6dbe,	// (0x000946f0) cset_slider_pane

0x6de8,	// (0x0009471a) main_cset_slider_pane_g1

0x6dfd,	// (0x0009472f) main_cset_slider_pane_g2

0x0011,

0xf97d,	// (0x0009d2af) main_cset_slider_pane_g

0xd76a,	// (0x0009b09c) main_cset_slider_pane_t1

0x6ebf,	// (0x000947f1) main_cset_slider_pane_t2

0x6ed9,	// (0x0009480b) main_cset_slider_pane_t3

0x6ef3,	// (0x00094825) main_cset_slider_pane_t4

0x6f0d,	// (0x0009483f) main_cset_slider_pane_t5

0x6f2b,	// (0x0009485d) main_cset_slider_pane_t6

0x6f40,	// (0x00094872) main_cset_slider_pane_t7

0x000e,

0xf9a2,	// (0x0009d2d4) main_cset_slider_pane_t

0x704c,	// (0x0009497e) cset_list_set_pane_ParamLimits

0x704c,	// (0x0009497e) cset_list_set_pane

0x7060,	// (0x00094992) aid_position_infowindow_above

0x7068,	// (0x0009499a) aid_position_infowindow_below

0x7070,	// (0x000949a2) cset_list_set_pane_g1_ParamLimits

0x7070,	// (0x000949a2) cset_list_set_pane_g1

0xff24,	// (0x0008d856) cset_list_set_pane_g3_ParamLimits

0xff24,	// (0x0008d856) cset_list_set_pane_g3

0x0001,

0xf9c1,	// (0x0009d2f3) cset_list_set_pane_g_ParamLimits

0xf9c1,	// (0x0009d2f3) cset_list_set_pane_g

0xff33,	// (0x0008d865) cset_list_set_pane_t1_ParamLimits

0xff33,	// (0x0008d865) cset_list_set_pane_t1

0x99e5,	// (0x00097317) list_highlight_pane_cp021_ParamLimits

0x99e5,	// (0x00097317) list_highlight_pane_cp021

0xb4c1,	// (0x00098df3) cset_slider_pane_g1

0xb4d3,	// (0x00098e05) cset_slider_pane_g2

0xb4ca,	// (0x00098dfc) cset_slider_pane_g3

0x0002,

0xf9c6,	// (0x0009d2f8) cset_slider_pane_g

0xaae9,	// (0x0009841b) aid_area_touch_cam4_zoom

0xaaf1,	// (0x00098423) cam4_zoom_cont_pane

0xaaf9,	// (0x0009842b) cam4_zoom_pane_g1

0xab01,	// (0x00098433) cam4_zoom_pane_g2

0x707c,	// (0x000949ae) cam4_zoom_pane_g3

0x0002,

0xf9cd,	// (0x0009d2ff) cam4_zoom_pane_g

0xd80a,	// (0x0009b13c) cam4_zoom_cont_pane_g1

0xd813,	// (0x0009b145) cam4_zoom_cont_pane_g2

0xd81c,	// (0x0009b14e) cam4_zoom_cont_pane_g3

0x0002,

0xf9d4,	// (0x0009d306) cam4_zoom_cont_pane_g

0x6480,	// (0x00093db2) call4_image_pane_ParamLimits

0x6480,	// (0x00093db2) call4_image_pane

0xd501,	// (0x0009ae33) call4_windows_conf_pane_ParamLimits

0xd51c,	// (0x0009ae4e) popup_call4_audio_in_window_ParamLimits

0xd51c,	// (0x0009ae4e) popup_call4_audio_in_window

0x9994,	// (0x000972c6) bg_popup_call2_act_pane_cp02

0xd57e,	// (0x0009aeb0) call4_list_conf_pane

0xcbf1,	// (0x0009a523) call4_image_pane_g1

0xcbf1,	// (0x0009a523) call4_image_pane_g2

0x0001,

0xf6e3,	// (0x0009d015) call4_image_pane_g

0xd825,	// (0x0009b157) list_single_graphic_popup_conf4_pane_ParamLimits

0xd825,	// (0x0009b157) list_single_graphic_popup_conf4_pane

0x9994,	// (0x000972c6) list_highlight_pane_cp022

0xd83a,	// (0x0009b16c) list_single_graphic_popup_conf4_pane_g1

0xb1ad,	// (0x00098adf) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9db,	// (0x0009d30d) list_single_graphic_popup_conf4_pane_g

0xd842,	// (0x0009b174) list_single_graphic_popup_conf4_pane_t1

0x1e82,	// (0x0008f7b4) popup_vtel_slider_window_ParamLimits

0x1e82,	// (0x0008f7b4) popup_vtel_slider_window

0xd4e3,	// (0x0009ae15) dialer2_ne_pane_t2_ParamLimits

0xd4e3,	// (0x0009ae15) dialer2_ne_pane_t2

0x0001,

0xf8bc,	// (0x0009d1ee) dialer2_ne_pane_t_ParamLimits

0xf8bc,	// (0x0009d1ee) dialer2_ne_pane_t

0xc9d0,	// (0x0009a302) bg_popup_sub_pane_cp010_ParamLimits

0xc9d0,	// (0x0009a302) bg_popup_sub_pane_cp010

0x7084,	// (0x000949b6) popup_vtel_slider_window_g1_ParamLimits

0x7084,	// (0x000949b6) popup_vtel_slider_window_g1

0x7097,	// (0x000949c9) popup_vtel_slider_window_g2_ParamLimits

0x7097,	// (0x000949c9) popup_vtel_slider_window_g2

0x0003,

0xf9e0,	// (0x0009d312) popup_vtel_slider_window_g_ParamLimits

0xf9e0,	// (0x0009d312) popup_vtel_slider_window_g

0x70ed,	// (0x00094a1f) vtel_slider_pane_ParamLimits

0x70ed,	// (0x00094a1f) vtel_slider_pane

0x710f,	// (0x00094a41) vtel_slider_pane_g1_ParamLimits

0x710f,	// (0x00094a41) vtel_slider_pane_g1

0x7123,	// (0x00094a55) vtel_slider_pane_g2_ParamLimits

0x7123,	// (0x00094a55) vtel_slider_pane_g2

0x713b,	// (0x00094a6d) vtel_slider_pane_g3_ParamLimits

0x713b,	// (0x00094a6d) vtel_slider_pane_g3

0x710f,	// (0x00094a41) vtel_slider_pane_g4_ParamLimits

0x710f,	// (0x00094a41) vtel_slider_pane_g4

0x7151,	// (0x00094a83) vtel_slider_pane_g5_ParamLimits

0x7151,	// (0x00094a83) vtel_slider_pane_g5

0x0004,

0xf9e9,	// (0x0009d31b) vtel_slider_pane_g_ParamLimits

0xf9e9,	// (0x0009d31b) vtel_slider_pane_g

0x99e5,	// (0x00097317) main_gallery2_pane

0x6807,	// (0x00094139) aid_size_row_itut2_dropdow_list_ParamLimits

0x6807,	// (0x00094139) aid_size_row_itut2_dropdow_list

0x6899,	// (0x000941cb) grid_vitu2_function_top_pane_ParamLimits

0x6899,	// (0x000941cb) grid_vitu2_function_top_pane

0x68f8,	// (0x0009422a) popup_vitu2_dropdown_list_window_ParamLimits

0x68f8,	// (0x0009422a) popup_vitu2_dropdown_list_window

0x6921,	// (0x00094253) popup_vitu2_match_list_window

0x7175,	// (0x00094aa7) cell_vitu2_function_top_pane_ParamLimits

0x7175,	// (0x00094aa7) cell_vitu2_function_top_pane

0x7195,	// (0x00094ac7) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7195,	// (0x00094ac7) cell_vitu2_function_top_pane_cp01

0x71b3,	// (0x00094ae5) cell_vitu2_function_top_wide_pane_ParamLimits

0x71b3,	// (0x00094ae5) cell_vitu2_function_top_wide_pane

0x99e5,	// (0x00097317) bg_button_pane_cp012

0x71d1,	// (0x00094b03) cell_vitu2_function_top_pane_g1

0xab09,	// (0x0009843b) bg_button_pane_cp013_ParamLimits

0xab09,	// (0x0009843b) bg_button_pane_cp013

0x71e5,	// (0x00094b17) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x71e5,	// (0x00094b17) cell_vitu2_function_top_wide_pane_g1

0x99e5,	// (0x00097317) bg_popup_sub_pane_cp20

0x71fd,	// (0x00094b2f) list_vitu2_match_list_pane

0xd613,	// (0x0009af45) bg_popup_sub_pane_cp20_g1

0xd61b,	// (0x0009af4d) bg_popup_sub_pane_cp20_g2

0xaca2,	// (0x000985d4) bg_popup_sub_pane_cp20_g3

0xd623,	// (0x0009af55) bg_popup_sub_pane_cp20_g4

0xac82,	// (0x000985b4) bg_popup_sub_pane_cp20_g5

0xd858,	// (0x0009b18a) bg_popup_sub_pane_cp20_g6

0xd633,	// (0x0009af65) bg_popup_sub_pane_cp20_g7

0xd63b,	// (0x0009af6d) bg_popup_sub_pane_cp20_g8

0xd643,	// (0x0009af75) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f4,	// (0x0009d326) bg_popup_sub_pane_cp20_g

0xab25,	// (0x00098457) list_vitu2_match_list_item_pane_ParamLimits

0xab25,	// (0x00098457) list_vitu2_match_list_item_pane

0xab37,	// (0x00098469) list_vitu2_match_list_item_pane_t1

0x9994,	// (0x000972c6) bg_popup_sub_pane_cp21

0xb0d6,	// (0x00098a08) grid_vitu2_dropdown_list_pane

0x7227,	// (0x00094b59) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7227,	// (0x00094b59) cell_vitu2_dropdown_list_char_pane

0x724a,	// (0x00094b7c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x724a,	// (0x00094b7c) cell_vitu2_dropdown_list_ctrl_pane

0xd860,	// (0x0009b192) cell_vitu2_dropdown_list_char_pane_g1

0xd869,	// (0x0009b19b) cell_vitu2_dropdown_list_char_pane_g2

0xd872,	// (0x0009b1a4) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa11,	// (0x0009d343) cell_vitu2_dropdown_list_char_pane_g

0x7278,	// (0x00094baa) cell_vitu2_dropdown_list_char_pane_t1

0x7286,	// (0x00094bb8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7286,	// (0x00094bb8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7296,	// (0x00094bc8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7296,	// (0x00094bc8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x72a7,	// (0x00094bd9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x72a7,	// (0x00094bd9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x72b7,	// (0x00094be9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x72b7,	// (0x00094be9) cell_vitu2_dropdown_list_ctrl_pane_g4

0xce21,	// (0x0009a753) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xce21,	// (0x0009a753) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa18,	// (0x0009d34a) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa18,	// (0x0009d34a) cell_vitu2_dropdown_list_ctrl_pane_g

0x72d3,	// (0x00094c05) aid_size_cell_gallery2_ParamLimits

0x72d3,	// (0x00094c05) aid_size_cell_gallery2

0x72f1,	// (0x00094c23) grid_gallery2_pane_ParamLimits

0x72f1,	// (0x00094c23) grid_gallery2_pane

0x730b,	// (0x00094c3d) scroll_pane_cp029_ParamLimits

0x730b,	// (0x00094c3d) scroll_pane_cp029

0x7317,	// (0x00094c49) cell_gallery2_pane_ParamLimits

0x7317,	// (0x00094c49) cell_gallery2_pane

0xd87b,	// (0x0009b1ad) cell_gallery2_pane_g2

0x7378,	// (0x00094caa) cell_gallery2_pane_g3

0xd883,	// (0x0009b1b5) cell_gallery2_pane_g4

0xd88b,	// (0x0009b1bd) cell_gallery2_pane_g5

0xb37b,	// (0x00098cad) grid_highlight_pane_cp10

0x6921,	// (0x00094253) popup_vitu2_match_list_window_ParamLimits

0x6938,	// (0x0009426a) popup_vitu2_query_window_ParamLimits

0x6938,	// (0x0009426a) popup_vitu2_query_window

0x9994,	// (0x000972c6) bg_vitu2_candi_button_pane

0xd860,	// (0x0009b192) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd869,	// (0x0009b19b) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd872,	// (0x0009b1a4) cell_vitu2_dropdown_list_char_pane_g2_copy2

0xff80,	// (0x0008d8b2) bg_button_pane_cp015

0x7380,	// (0x00094cb2) bg_button_pane_cp016

0x7393,	// (0x00094cc5) bg_button_pane_cp017

0xc7a0,	// (0x0009a0d2) bg_popup_sub_pane_cp22

0xd893,	// (0x0009b1c5) popup_vitu2_query_window_g1

0xffb5,	// (0x0008d8e7) popup_vitu2_query_window_g2

0x0002,

0xfa23,	// (0x0009d355) popup_vitu2_query_window_g

0xffd4,	// (0x0008d906) popup_vitu2_query_window_t1_ParamLimits

0xffd4,	// (0x0008d906) popup_vitu2_query_window_t1

0x0009,	// (0x0008d93b) popup_vitu2_query_window_t2_ParamLimits

0x0009,	// (0x0008d93b) popup_vitu2_query_window_t2

0x001b,	// (0x0008d94d) popup_vitu2_query_window_t3_ParamLimits

0x001b,	// (0x0008d94d) popup_vitu2_query_window_t3

0x73b7,	// (0x00094ce9) popup_vitu2_query_window_t4_ParamLimits

0x73b7,	// (0x00094ce9) popup_vitu2_query_window_t4

0x73d8,	// (0x00094d0a) popup_vitu2_query_window_t5_ParamLimits

0x73d8,	// (0x00094d0a) popup_vitu2_query_window_t5

0x0006,

0xfa2a,	// (0x0009d35c) popup_vitu2_query_window_t_ParamLimits

0xfa2a,	// (0x0009d35c) popup_vitu2_query_window_t

0xd719,	// (0x0009b04b) main_cset_text_pane

0x6da2,	// (0x000946d4) aid_area_touch_slider_ParamLimits

0x6dbe,	// (0x000946f0) cset_slider_pane_ParamLimits

0x6de8,	// (0x0009471a) main_cset_slider_pane_g1_ParamLimits

0x6dfd,	// (0x0009472f) main_cset_slider_pane_g2_ParamLimits

0xd73a,	// (0x0009b06c) main_cset_slider_pane_g3_ParamLimits

0xd73a,	// (0x0009b06c) main_cset_slider_pane_g3

0x6e12,	// (0x00094744) main_cset_slider_pane_g4_ParamLimits

0x6e12,	// (0x00094744) main_cset_slider_pane_g4

0x6e21,	// (0x00094753) main_cset_slider_pane_g5_ParamLimits

0x6e21,	// (0x00094753) main_cset_slider_pane_g5

0x6e2f,	// (0x00094761) main_cset_slider_pane_g6_ParamLimits

0x6e2f,	// (0x00094761) main_cset_slider_pane_g6

0xf97d,	// (0x0009d2af) main_cset_slider_pane_g_ParamLimits

0xd76a,	// (0x0009b09c) main_cset_slider_pane_t1_ParamLimits

0x6ebf,	// (0x000947f1) main_cset_slider_pane_t2_ParamLimits

0x6ed9,	// (0x0009480b) main_cset_slider_pane_t3_ParamLimits

0x6ef3,	// (0x00094825) main_cset_slider_pane_t4_ParamLimits

0x6f0d,	// (0x0009483f) main_cset_slider_pane_t5_ParamLimits

0x6f2b,	// (0x0009485d) main_cset_slider_pane_t6_ParamLimits

0x6f40,	// (0x00094872) main_cset_slider_pane_t7_ParamLimits

0x6f6e,	// (0x000948a0) main_cset_slider_pane_t8_ParamLimits

0x6f6e,	// (0x000948a0) main_cset_slider_pane_t8

0x6f96,	// (0x000948c8) main_cset_slider_pane_t9_ParamLimits

0x6f96,	// (0x000948c8) main_cset_slider_pane_t9

0x6fbe,	// (0x000948f0) main_cset_slider_pane_t10_ParamLimits

0x6fbe,	// (0x000948f0) main_cset_slider_pane_t10

0x6fe6,	// (0x00094918) main_cset_slider_pane_t11_ParamLimits

0x6fe6,	// (0x00094918) main_cset_slider_pane_t11

0x7010,	// (0x00094942) main_cset_slider_pane_t12_ParamLimits

0x7010,	// (0x00094942) main_cset_slider_pane_t12

0x702d,	// (0x0009495f) main_cset_slider_pane_t13_ParamLimits

0x702d,	// (0x0009495f) main_cset_slider_pane_t13

0xf9a2,	// (0x0009d2d4) main_cset_slider_pane_t_ParamLimits

0x9994,	// (0x000972c6) bg_popup_sub_pane_cp011

0xd89f,	// (0x0009b1d1) main_cset_text_pane_g1

0xd8a7,	// (0x0009b1d9) main_cset_text_pane_t1

0xd8b5,	// (0x0009b1e7) main_cset_text_pane_t2

0xd8c3,	// (0x0009b1f5) main_cset_text_pane_t3

0xd8d1,	// (0x0009b203) main_cset_text_pane_t4

0xd8df,	// (0x0009b211) main_cset_text_pane_t5

0xd8ed,	// (0x0009b21f) main_cset_text_pane_t6

0xd8fb,	// (0x0009b22d) main_cset_text_pane_t7

0x0006,

0xfa39,	// (0x0009d36b) main_cset_text_pane_t

0x9994,	// (0x000972c6) main_cam4_burst_pane

0x9994,	// (0x000972c6) main_cam5_pane

0x6cd9,	// (0x0009460b) bg_button_pane_cp019

0x6ce2,	// (0x00094614) bg_button_pane_cp020

0xd746,	// (0x0009b078) main_cset_slider_pane_g7_ParamLimits

0xd746,	// (0x0009b078) main_cset_slider_pane_g7

0xd752,	// (0x0009b084) main_cset_slider_pane_g8_ParamLimits

0xd752,	// (0x0009b084) main_cset_slider_pane_g8

0x6e43,	// (0x00094775) main_cset_slider_pane_g9_ParamLimits

0x6e43,	// (0x00094775) main_cset_slider_pane_g9

0x6e4f,	// (0x00094781) main_cset_slider_pane_g10_ParamLimits

0x6e4f,	// (0x00094781) main_cset_slider_pane_g10

0x6e5b,	// (0x0009478d) main_cset_slider_pane_g11_ParamLimits

0x6e5b,	// (0x0009478d) main_cset_slider_pane_g11

0x6e67,	// (0x00094799) main_cset_slider_pane_g12_ParamLimits

0x6e67,	// (0x00094799) main_cset_slider_pane_g12

0x6e73,	// (0x000947a5) main_cset_slider_pane_g13_ParamLimits

0x6e73,	// (0x000947a5) main_cset_slider_pane_g13

0x6e7f,	// (0x000947b1) main_cset_slider_pane_g14_ParamLimits

0x6e7f,	// (0x000947b1) main_cset_slider_pane_g14

0x6e8b,	// (0x000947bd) main_cset_slider_pane_g15_ParamLimits

0x6e8b,	// (0x000947bd) main_cset_slider_pane_g15

0xd798,	// (0x0009b0ca) main_cset_slider_pane_t14_ParamLimits

0xd798,	// (0x0009b0ca) main_cset_slider_pane_t14

0xd7d1,	// (0x0009b103) main_cset_slider_pane_t15_ParamLimits

0xd7d1,	// (0x0009b103) main_cset_slider_pane_t15

0x73f9,	// (0x00094d2b) aid_cam4_burst_size_cell_ParamLimits

0x73f9,	// (0x00094d2b) aid_cam4_burst_size_cell

0x7419,	// (0x00094d4b) grid_cam4_burst_pane_ParamLimits

0x7419,	// (0x00094d4b) grid_cam4_burst_pane

0x7453,	// (0x00094d85) linegrid_cam4_burst_pane_ParamLimits

0x7453,	// (0x00094d85) linegrid_cam4_burst_pane

0xd909,	// (0x0009b23b) scroll_pane_cp30_ParamLimits

0xd909,	// (0x0009b23b) scroll_pane_cp30

0x7475,	// (0x00094da7) cell_cam4_burst_pane_ParamLimits

0x7475,	// (0x00094da7) cell_cam4_burst_pane

0xd915,	// (0x0009b247) linegrid_cam4_burst_pane_g1_ParamLimits

0xd915,	// (0x0009b247) linegrid_cam4_burst_pane_g1

0x74ca,	// (0x00094dfc) linegrid_cam4_burst_pane_g2_ParamLimits

0x74ca,	// (0x00094dfc) linegrid_cam4_burst_pane_g2

0xd922,	// (0x0009b254) linegrid_cam4_burst_pane_g3_ParamLimits

0xd922,	// (0x0009b254) linegrid_cam4_burst_pane_g3

0x0002,

0xfa48,	// (0x0009d37a) linegrid_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0009d37a) linegrid_cam4_burst_pane_g

0x74db,	// (0x00094e0d) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x74db,	// (0x00094e0d) linegrid_cam4_burst_pane_g3_copy1

0xd92f,	// (0x0009b261) linegrid_cam4_burst_pane_g4_ParamLimits

0xd92f,	// (0x0009b261) linegrid_cam4_burst_pane_g4

0x74f9,	// (0x00094e2b) linegrid_cam4_burst_pane_g5_ParamLimits

0x74f9,	// (0x00094e2b) linegrid_cam4_burst_pane_g5

0x750a,	// (0x00094e3c) linegrid_cam4_burst_pane_g6_ParamLimits

0x750a,	// (0x00094e3c) linegrid_cam4_burst_pane_g6

0xd93c,	// (0x0009b26e) linegrid_cam4_burst_pane_g7_ParamLimits

0xd93c,	// (0x0009b26e) linegrid_cam4_burst_pane_g7

0x7521,	// (0x00094e53) cell_cam4_burst_pane_g1

0xd955,	// (0x0009b287) main_cam5_pane_t1_ParamLimits

0xd955,	// (0x0009b287) main_cam5_pane_t1

0xd967,	// (0x0009b299) main_cam5_pane_t2_ParamLimits

0xd967,	// (0x0009b299) main_cam5_pane_t2

0xd979,	// (0x0009b2ab) main_cam5_pane_t3_ParamLimits

0xd979,	// (0x0009b2ab) main_cam5_pane_t3

0xd98b,	// (0x0009b2bd) main_cam5_pane_t4_ParamLimits

0xd98b,	// (0x0009b2bd) main_cam5_pane_t4

0xd9a3,	// (0x0009b2d5) main_cam5_pane_t5_ParamLimits

0xd9a3,	// (0x0009b2d5) main_cam5_pane_t5

0xd9b7,	// (0x0009b2e9) main_cam5_pane_t6_ParamLimits

0xd9b7,	// (0x0009b2e9) main_cam5_pane_t6

0xd9cb,	// (0x0009b2fd) main_cam5_pane_t7_ParamLimits

0xd9cb,	// (0x0009b2fd) main_cam5_pane_t7

0xd9dd,	// (0x0009b30f) main_cam5_pane_t8_ParamLimits

0xd9dd,	// (0x0009b30f) main_cam5_pane_t8

0xd9fb,	// (0x0009b32d) main_cam5_pane_t9_ParamLimits

0xd9fb,	// (0x0009b32d) main_cam5_pane_t9

0xda0d,	// (0x0009b33f) main_cam5_pane_t10_ParamLimits

0xda0d,	// (0x0009b33f) main_cam5_pane_t10

0xda1f,	// (0x0009b351) main_cam5_pane_t11_ParamLimits

0xda1f,	// (0x0009b351) main_cam5_pane_t11

0xda33,	// (0x0009b365) main_cam5_pane_t12_ParamLimits

0xda33,	// (0x0009b365) main_cam5_pane_t12

0xda4a,	// (0x0009b37c) main_cam5_pane_t13_ParamLimits

0xda4a,	// (0x0009b37c) main_cam5_pane_t13

0x000c,

0xfa54,	// (0x0009d386) main_cam5_pane_t_ParamLimits

0xfa54,	// (0x0009d386) main_cam5_pane_t

0x0c3a,	// (0x0008e56c) popup_scut_keymap_window_ParamLimits

0x0c3a,	// (0x0008e56c) popup_scut_keymap_window

0x7534,	// (0x00094e66) aid_size_cell_brow_shortcut

0xb37b,	// (0x00098cad) bg_popup_window_pane_cp010

0x7540,	// (0x00094e72) grid_scut_pane

0x754c,	// (0x00094e7e) cell_scut_pane_ParamLimits

0x754c,	// (0x00094e7e) cell_scut_pane

0x7565,	// (0x00094e97) cell_scut_pane_g1

0xda6d,	// (0x0009b39f) cell_scut_pane_t1

0xda7c,	// (0x0009b3ae) cell_scut_pane_t2

0x756e,	// (0x00094ea0) cell_scut_pane_t3

0x0002,

0xfa6f,	// (0x0009d3a1) cell_scut_pane_t

0x5319,	// (0x00092c4b) main_mup3_pane_g8_ParamLimits

0x5319,	// (0x00092c4b) main_mup3_pane_g8

0x6823,	// (0x00094155) area_vitu2_query_pane_ParamLimits

0x6823,	// (0x00094155) area_vitu2_query_pane

0xff94,	// (0x0008d8c6) input_focus_pane_cp08

0xda8b,	// (0x0009b3bd) area_vitu2_query_pane_g1

0x0099,	// (0x0008d9cb) area_vitu2_query_pane_g2

0x0001,

0xfa76,	// (0x0009d3a8) area_vitu2_query_pane_g

0x757c,	// (0x00094eae) area_vitu2_query_pane_t1_ParamLimits

0x757c,	// (0x00094eae) area_vitu2_query_pane_t1

0x7590,	// (0x00094ec2) area_vitu2_query_pane_t2_ParamLimits

0x7590,	// (0x00094ec2) area_vitu2_query_pane_t2

0x00ac,	// (0x0008d9de) area_vitu2_query_pane_t3_ParamLimits

0x00ac,	// (0x0008d9de) area_vitu2_query_pane_t3

0x75a4,	// (0x00094ed6) area_vitu2_query_pane_t4_ParamLimits

0x75a4,	// (0x00094ed6) area_vitu2_query_pane_t4

0x75cc,	// (0x00094efe) area_vitu2_query_pane_t5_ParamLimits

0x75cc,	// (0x00094efe) area_vitu2_query_pane_t5

0x75f4,	// (0x00094f26) area_vitu2_query_pane_t6_ParamLimits

0x75f4,	// (0x00094f26) area_vitu2_query_pane_t6

0x0006,

0xfa7b,	// (0x0009d3ad) area_vitu2_query_pane_t_ParamLimits

0xfa7b,	// (0x0009d3ad) area_vitu2_query_pane_t

0x7640,	// (0x00094f72) bg_button_pane_cp018

0x764e,	// (0x00094f80) bg_button_pane_cp021

0x00d4,	// (0x0008da06) bg_button_pane_cp022

0x00e5,	// (0x0008da17) input_focus_pane_cp09

0x31e5,	// (0x00090b17) aid_size_touch_mv_arrow_left

0x320e,	// (0x00090b40) aid_size_touch_mv_arrow_right

0x6ea3,	// (0x000947d5) main_cset_slider_pane_g16_ParamLimits

0x6ea3,	// (0x000947d5) main_cset_slider_pane_g16

0x6eb1,	// (0x000947e3) main_cset_slider_pane_g17_ParamLimits

0x6eb1,	// (0x000947e3) main_cset_slider_pane_g17

0x7521,	// (0x00094e53) cell_cam4_burst_pane_g1_ParamLimits

0x9994,	// (0x000972c6) compa_mode_pane

0x70a7,	// (0x000949d9) popup_vtel_slider_window_g3_ParamLimits

0x70a7,	// (0x000949d9) popup_vtel_slider_window_g3

0x70be,	// (0x000949f0) popup_vtel_slider_window_g4_ParamLimits

0x70be,	// (0x000949f0) popup_vtel_slider_window_g4

0x70d5,	// (0x00094a07) popup_vtel_slider_window_t1_ParamLimits

0x70d5,	// (0x00094a07) popup_vtel_slider_window_t1

0x9994,	// (0x000972c6) main_cl_pane

0xc7cc,	// (0x0009a0fe) popup_imed_adjust2_window_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_tb_trans_pane_cp05_ParamLimits

0xd0ee,	// (0x0009aa20) popup_imed_adjust2_window_g1_ParamLimits

0xd0fd,	// (0x0009aa2f) popup_imed_adjust2_window_g2_ParamLimits

0xd0fd,	// (0x0009aa2f) popup_imed_adjust2_window_g2

0xd109,	// (0x0009aa3b) popup_imed_adjust2_window_g3_ParamLimits

0xd109,	// (0x0009aa3b) popup_imed_adjust2_window_g3

0x0002,

0xf7e6,	// (0x0009d118) popup_imed_adjust2_window_g_ParamLimits

0xf7e6,	// (0x0009d118) popup_imed_adjust2_window_g

0xd115,	// (0x0009aa47) popup_imed_adjust2_window_t1_ParamLimits

0xd12d,	// (0x0009aa5f) slider_imed_adjust_pane_ParamLimits

0xd141,	// (0x0009aa73) slider_imed_adjust_pane_g1_ParamLimits

0xd151,	// (0x0009aa83) slider_imed_adjust_pane_g2_ParamLimits

0xd161,	// (0x0009aa93) slider_imed_adjust_pane_g3_ParamLimits

0xd172,	// (0x0009aaa4) slider_imed_adjust_pane_g4_ParamLimits

0xf7ed,	// (0x0009d11f) slider_imed_adjust_pane_g_ParamLimits

0x65a3,	// (0x00093ed5) aid_touch_area_cam4_ParamLimits

0x65a3,	// (0x00093ed5) aid_touch_area_cam4

0xa9fa,	// (0x0009832c) battery_pane_cp01

0x6675,	// (0x00093fa7) main_camera4_pane_g6_ParamLimits

0x6675,	// (0x00093fa7) main_camera4_pane_g6

0x669f,	// (0x00093fd1) main_camera4_pane_t2_ParamLimits

0x669f,	// (0x00093fd1) main_camera4_pane_t2

0x0001,

0xf8f0,	// (0x0009d222) main_camera4_pane_t_ParamLimits

0xf8f0,	// (0x0009d222) main_camera4_pane_t

0x66d4,	// (0x00094006) aid_touch_area_vid4_ParamLimits

0x66d4,	// (0x00094006) aid_touch_area_vid4

0x6728,	// (0x0009405a) main_video4_pane_g5_ParamLimits

0x6728,	// (0x0009405a) main_video4_pane_g5

0x674d,	// (0x0009407f) vid4_progress_pane_ParamLimits

0x674d,	// (0x0009407f) vid4_progress_pane

0xd75e,	// (0x0009b090) main_cset_slider_pane_g18_ParamLimits

0xd75e,	// (0x0009b090) main_cset_slider_pane_g18

0xd949,	// (0x0009b27b) cell_cam4_burst_pane_g2_ParamLimits

0xd949,	// (0x0009b27b) cell_cam4_burst_pane_g2

0x0001,

0xfa4f,	// (0x0009d381) cell_cam4_burst_pane_g_ParamLimits

0xfa4f,	// (0x0009d381) cell_cam4_burst_pane_g

0xa148,	// (0x00097a7a) bg_cl_pane_ParamLimits

0xa148,	// (0x00097a7a) bg_cl_pane

0x765a,	// (0x00094f8c) cl_header_pane_ParamLimits

0x765a,	// (0x00094f8c) cl_header_pane

0x766e,	// (0x00094fa0) cl_listscroll_pane_ParamLimits

0x766e,	// (0x00094fa0) cl_listscroll_pane

0xda97,	// (0x0009b3c9) bg_cl_pane_g1

0xda9f,	// (0x0009b3d1) bg_cl_pane_g2

0xdaa7,	// (0x0009b3d9) bg_cl_pane_g3

0xdaaf,	// (0x0009b3e1) bg_cl_pane_g4

0xdab7,	// (0x0009b3e9) bg_cl_pane_g5

0xdabf,	// (0x0009b3f1) bg_cl_pane_g6

0xdac7,	// (0x0009b3f9) bg_cl_pane_g7

0xdacf,	// (0x0009b401) bg_cl_pane_g8

0xdad7,	// (0x0009b409) bg_cl_pane_g9

0x0008,

0xfa8a,	// (0x0009d3bc) bg_cl_pane_g

0x767e,	// (0x00094fb0) aid_height_cl_leading_ParamLimits

0x767e,	// (0x00094fb0) aid_height_cl_leading

0x768a,	// (0x00094fbc) aid_height_cl_text_ParamLimits

0x768a,	// (0x00094fbc) aid_height_cl_text

0x99e5,	// (0x00097317) bg_cl_header_pane_ParamLimits

0x99e5,	// (0x00097317) bg_cl_header_pane

0x76a9,	// (0x00094fdb) cl_header_pane_g1_ParamLimits

0x76a9,	// (0x00094fdb) cl_header_pane_g1

0x76bf,	// (0x00094ff1) cl_header_pane_t1_ParamLimits

0x76bf,	// (0x00094ff1) cl_header_pane_t1

0xdadf,	// (0x0009b411) cl_list_pane

0xd731,	// (0x0009b063) hc_scroll_pane_cp01

0xac82,	// (0x000985b4) bg_cl_header_pane_g1

0xd613,	// (0x0009af45) bg_cl_header_pane_g2

0xaca2,	// (0x000985d4) bg_cl_header_pane_g3

0xd623,	// (0x0009af55) bg_cl_header_pane_g4

0xd61b,	// (0x0009af4d) bg_cl_header_pane_g5

0xd858,	// (0x0009b18a) bg_cl_header_pane_g6

0xd63b,	// (0x0009af6d) bg_cl_header_pane_g7

0xd643,	// (0x0009af75) bg_cl_header_pane_g8

0xd633,	// (0x0009af65) bg_cl_header_pane_g9

0x0008,

0xfa9d,	// (0x0009d3cf) bg_cl_header_pane_g

0x76d8,	// (0x0009500a) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x76d8,	// (0x0009500a) hc_cl_list_double_graphic_heading_pane

0x76eb,	// (0x0009501d) hc_cl_list_single_graphic_pane_ParamLimits

0x76eb,	// (0x0009501d) hc_cl_list_single_graphic_pane

0x7703,	// (0x00095035) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7703,	// (0x00095035) hc_cl_list_single_graphic_pane_g1

0x770f,	// (0x00095041) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x770f,	// (0x00095041) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab0,	// (0x0009d3e2) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab0,	// (0x0009d3e2) hc_cl_list_single_graphic_pane_g

0x7723,	// (0x00095055) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7723,	// (0x00095055) hc_cl_list_single_graphic_pane_t1

0x7703,	// (0x00095035) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7703,	// (0x00095035) hc_cl_list_double_graphic_heading_pane_g1

0x7738,	// (0x0009506a) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7738,	// (0x0009506a) hc_cl_list_double_graphic_heading_pane_g2

0x774c,	// (0x0009507e) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x774c,	// (0x0009507e) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab5,	// (0x0009d3e7) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab5,	// (0x0009d3e7) hc_cl_list_double_graphic_heading_pane_g

0x7760,	// (0x00095092) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7760,	// (0x00095092) hc_cl_list_double_graphic_heading_pane_t1

0x7775,	// (0x000950a7) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7775,	// (0x000950a7) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfabc,	// (0x0009d3ee) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfabc,	// (0x0009d3ee) hc_cl_list_double_graphic_heading_pane_t

0x778a,	// (0x000950bc) vid4_progress_pane_g1

0x779c,	// (0x000950ce) vid4_progress_pane_g2

0xa697,	// (0x00097fc9) vid4_progress_pane_g3

0xab59,	// (0x0009848b) vid4_progress_pane_g4

0x0004,

0xfac1,	// (0x0009d3f3) vid4_progress_pane_g

0xab77,	// (0x000984a9) vid4_progress_pane_t1

0xab8c,	// (0x000984be) vid4_progress_pane_t2

0x0002,

0xfacc,	// (0x0009d3fe) vid4_progress_pane_t

0xabb7,	// (0x000984e9) wait_bar_pane_cp07

0xc9de,	// (0x0009a310) blid_firmament_pane_ParamLimits

0xca21,	// (0x0009a353) popup_blid_sat_info2_window_g1

0xca45,	// (0x0009a377) popup_blid_sat_info2_window_t3

0xca53,	// (0x0009a385) popup_blid_sat_info2_window_t4

0xca61,	// (0x0009a393) popup_blid_sat_info2_window_t5

0xca6f,	// (0x0009a3a1) popup_blid_sat_info2_window_t6

0xca7f,	// (0x0009a3b1) popup_blid_sat_info2_window_t7

0xca8d,	// (0x0009a3bf) popup_blid_sat_info2_window_t8

0xca9b,	// (0x0009a3cd) popup_blid_sat_info2_window_t9

0xcaa9,	// (0x0009a3db) popup_blid_sat_info2_window_t10

0xcb71,	// (0x0009a4a3) aid_firma_cardinal_ParamLimits

0xcb85,	// (0x0009a4b7) blid_firmament_pane_t1_ParamLimits

0xcb9c,	// (0x0009a4ce) blid_firmament_pane_t2_ParamLimits

0xcbb3,	// (0x0009a4e5) blid_firmament_pane_t3_ParamLimits

0xcbca,	// (0x0009a4fc) blid_firmament_pane_t4_ParamLimits

0xf6da,	// (0x0009d00c) blid_firmament_pane_t_ParamLimits

0xcbe1,	// (0x0009a513) blid_sat_info_pane_ParamLimits

0x99e5,	// (0x00097317) main_cam_set_pane_ParamLimits

0x5bfa,	// (0x0009352c) aid_size_cell_colour_35_ParamLimits

0x5c1a,	// (0x0009354c) aid_size_cell_colour_112_ParamLimits

0x5c3a,	// (0x0009356c) aid_size_cell_effect_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_tb_trans_pane_cp02_ParamLimits

0xaedb,	// (0x0009880d) heading_imed_pane_ParamLimits

0x5c5a,	// (0x0009358c) listscroll_imed_pane_ParamLimits

0xbdc2,	// (0x000996f4) popup_call2_audio_first_window_g5_ParamLimits

0xbdc2,	// (0x000996f4) popup_call2_audio_first_window_g5

0x620b,	// (0x00093b3d) aid_size_touch_image3_arrow_left_ParamLimits

0x620b,	// (0x00093b3d) aid_size_touch_image3_arrow_left

0x6237,	// (0x00093b69) aid_size_touch_image3_arrow_right_ParamLimits

0x6237,	// (0x00093b69) aid_size_touch_image3_arrow_right

0xaba2,	// (0x000984d4) vid4_progress_pane_t3

0x5f79,	// (0x000938ab) main_hwr_training_symbol_option_pane_ParamLimits

0x5f79,	// (0x000938ab) main_hwr_training_symbol_option_pane

0xd3e5,	// (0x0009ad17) popup_hwr_training_preview_window_ParamLimits

0xd3e5,	// (0x0009ad17) popup_hwr_training_preview_window

0x5f99,	// (0x000938cb) hwr_training_navi_pane_g5_ParamLimits

0x5f99,	// (0x000938cb) hwr_training_navi_pane_g5

0xd601,	// (0x0009af33) popup_char_count_window

0x99e5,	// (0x00097317) bg_popup_sub_pane_cp20_ParamLimits

0x71fd,	// (0x00094b2f) list_vitu2_match_list_pane_ParamLimits

0x720c,	// (0x00094b3e) vitu2_page_scroll_pane_ParamLimits

0x720c,	// (0x00094b3e) vitu2_page_scroll_pane

0xdae8,	// (0x0009b41a) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdae8,	// (0x0009b41a) list_single_hwr_training_symbol_option_pane

0xdafb,	// (0x0009b42d) list_single_hwr_training_symbol_option_pane_g1

0xdb03,	// (0x0009b435) list_single_hwr_training_symbol_option_pane_t1

0xdb11,	// (0x0009b443) bg_button_pane_cp023

0xdb1a,	// (0x0009b44c) bg_button_pane_cp024

0x77da,	// (0x0009510c) vitu2_page_scroll_pane_g1

0x77e2,	// (0x00095114) vitu2_page_scroll_pane_g2

0x0001,

0xfad3,	// (0x0009d405) vitu2_page_scroll_pane_g

0x77ec,	// (0x0009511e) vitu2_page_scroll_pane_t1

0xc93e,	// (0x0009a270) popup_char_count_window_g1

0xdb4d,	// (0x0009b47f) popup_char_count_window_g2

0xdb56,	// (0x0009b488) popup_char_count_window_g3

0x0002,

0xfad8,	// (0x0009d40a) popup_char_count_window_g

0xdb5f,	// (0x0009b491) popup_char_count_window_t1

0x9994,	// (0x000972c6) main_vded2_pane

0xd0da,	// (0x0009aa0c) aid_size_cell_imed_line

0xd0e4,	// (0x0009aa16) grid_imed_line_width_pane

0xaab4,	// (0x000983e6) vid4_indicators_pane_g4

0xdb6d,	// (0x0009b49f) cell_imed_line_width_pane_ParamLimits

0xdb6d,	// (0x0009b49f) cell_imed_line_width_pane

0xdb83,	// (0x0009b4b5) cell_imed_line_width_pane_g1

0xd1ee,	// (0x0009ab20) cell_imed_line_width_pane_g2

0x0001,

0xfadf,	// (0x0009d411) cell_imed_line_width_pane_g

0x77fb,	// (0x0009512d) main_vded2_pane_g1_ParamLimits

0x77fb,	// (0x0009512d) main_vded2_pane_g1

0x7816,	// (0x00095148) main_vded2_pane_g2_ParamLimits

0x7816,	// (0x00095148) main_vded2_pane_g2

0x0001,

0xfae4,	// (0x0009d416) main_vded2_pane_g_ParamLimits

0xfae4,	// (0x0009d416) main_vded2_pane_g

0x7828,	// (0x0009515a) vded2_slider_pane_ParamLimits

0x7828,	// (0x0009515a) vded2_slider_pane

0x7838,	// (0x0009516a) aid_size_touch_vded2_end

0x7842,	// (0x00095174) aid_size_touch_vded2_playhead

0xdb8c,	// (0x0009b4be) aid_size_touch_vded2_start

0xdb94,	// (0x0009b4c6) vded2_slider_bg_pane

0xdb9d,	// (0x0009b4cf) vded2_slider_pane_g1

0xdba6,	// (0x0009b4d8) vded2_slider_pane_g2

0x784c,	// (0x0009517e) vded2_slider_pane_g3

0x0002,

0xfae9,	// (0x0009d41b) vded2_slider_pane_g

0xdbae,	// (0x0009b4e0) vded2_slider_bg_pane_g1

0xdbb7,	// (0x0009b4e9) vded2_slider_bg_pane_g2

0xdbc0,	// (0x0009b4f2) vded2_slider_bg_pane_g3

0x0002,

0xfaf0,	// (0x0009d422) vded2_slider_bg_pane_g

0x389b,	// (0x000911cd) aid_postcard_touch_down_pane_ParamLimits

0x389b,	// (0x000911cd) aid_postcard_touch_down_pane

0x38b3,	// (0x000911e5) aid_postcard_touch_up_pane_ParamLimits

0x38b3,	// (0x000911e5) aid_postcard_touch_up_pane

0x9994,	// (0x000972c6) main_blid2_pane

0xc7ae,	// (0x0009a0e0) popup_blid2_search_window

0x9994,	// (0x000972c6) blid2_gps_pane

0x9994,	// (0x000972c6) blid2_navig_pane

0x9994,	// (0x000972c6) blid2_search_pane

0x9994,	// (0x000972c6) blid2_tripm_pane

0x7857,	// (0x00095189) blid2_search_pane_g1_ParamLimits

0x7857,	// (0x00095189) blid2_search_pane_g1

0x786a,	// (0x0009519c) blid2_search_pane_t1_ParamLimits

0x786a,	// (0x0009519c) blid2_search_pane_t1

0x787c,	// (0x000951ae) aid_size_cell_blid2_gps_ParamLimits

0x787c,	// (0x000951ae) aid_size_cell_blid2_gps

0x7894,	// (0x000951c6) blid2_gps_pane_g1_ParamLimits

0x7894,	// (0x000951c6) blid2_gps_pane_g1

0x78a8,	// (0x000951da) grid_blid2_satellite_pane_ParamLimits

0x78a8,	// (0x000951da) grid_blid2_satellite_pane

0x78c0,	// (0x000951f2) blid2_navig_pane_g1_ParamLimits

0x78c0,	// (0x000951f2) blid2_navig_pane_g1

0x78cc,	// (0x000951fe) blid2_navig_pane_t1_ParamLimits

0x78cc,	// (0x000951fe) blid2_navig_pane_t1

0x78e7,	// (0x00095219) blid2_navig_pane_t2_ParamLimits

0x78e7,	// (0x00095219) blid2_navig_pane_t2

0x0001,

0xfaf7,	// (0x0009d429) blid2_navig_pane_t_ParamLimits

0xfaf7,	// (0x0009d429) blid2_navig_pane_t

0x7902,	// (0x00095234) blid2_navig_ring_pane_ParamLimits

0x7902,	// (0x00095234) blid2_navig_ring_pane

0x791d,	// (0x0009524f) blid2_speed_pane_ParamLimits

0x791d,	// (0x0009524f) blid2_speed_pane

0x7929,	// (0x0009525b) blid2_tripm_pane_g1_ParamLimits

0x7929,	// (0x0009525b) blid2_tripm_pane_g1

0x7944,	// (0x00095276) blid2_tripm_pane_g2_ParamLimits

0x7944,	// (0x00095276) blid2_tripm_pane_g2

0x7958,	// (0x0009528a) blid2_tripm_pane_g3_ParamLimits

0x7958,	// (0x0009528a) blid2_tripm_pane_g3

0x796c,	// (0x0009529e) blid2_tripm_pane_g4_ParamLimits

0x796c,	// (0x0009529e) blid2_tripm_pane_g4

0x7980,	// (0x000952b2) blid2_tripm_pane_g5_ParamLimits

0x7980,	// (0x000952b2) blid2_tripm_pane_g5

0x0005,

0xfafc,	// (0x0009d42e) blid2_tripm_pane_g_ParamLimits

0xfafc,	// (0x0009d42e) blid2_tripm_pane_g

0x79a6,	// (0x000952d8) blid2_tripm_pane_t1_ParamLimits

0x79a6,	// (0x000952d8) blid2_tripm_pane_t1

0x79bf,	// (0x000952f1) blid2_tripm_pane_t2_ParamLimits

0x79bf,	// (0x000952f1) blid2_tripm_pane_t2

0x79d8,	// (0x0009530a) blid2_tripm_pane_t3_ParamLimits

0x79d8,	// (0x0009530a) blid2_tripm_pane_t3

0x0003,

0xfb09,	// (0x0009d43b) blid2_tripm_pane_t_ParamLimits

0xfb09,	// (0x0009d43b) blid2_tripm_pane_t

0x7a1f,	// (0x00095351) cell_blid2_satellite_pane_ParamLimits

0x7a1f,	// (0x00095351) cell_blid2_satellite_pane

0x7a3d,	// (0x0009536f) cell_blid2_satellite_pane_g1

0xdbc9,	// (0x0009b4fb) cell_blid2_satellite_pane_t1

0xcbf1,	// (0x0009a523) blid2_speed_pane_g1

0xdbd7,	// (0x0009b509) blid2_speed_pane_t1

0xdbe5,	// (0x0009b517) blid2_speed_pane_t2

0x0001,

0xfb12,	// (0x0009d444) blid2_speed_pane_t

0xcbf1,	// (0x0009a523) blid2_navig_ring_pane_g1

0x7a46,	// (0x00095378) blid2_navig_ring_pane_g2

0x7a4e,	// (0x00095380) blid2_navig_ring_pane_g3

0x7a56,	// (0x00095388) blid2_navig_ring_pane_g4

0x7a5e,	// (0x00095390) blid2_navig_ring_pane_g5

0x0004,

0xfb17,	// (0x0009d449) blid2_navig_ring_pane_g

0x9994,	// (0x000972c6) bg_popup_window_pane_cp011

0xdbf3,	// (0x0009b525) popup_blid2_search_window_g1

0xdbfb,	// (0x0009b52d) popup_blid2_search_window_t1

0xdc09,	// (0x0009b53b) popup_blid2_search_window_t2

0x0001,

0xfb22,	// (0x0009d454) popup_blid2_search_window_t

0xa4ee,	// (0x00097e20) main_browser_pane_g1

0xa148,	// (0x00097a7a) main_browser_pane_ParamLimits

0x99e5,	// (0x00097317) bg_button_pane_cp011_ParamLimits

0x6a6b,	// (0x0009439d) cell_vitu2_function_pane_g1_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_popup_sub_pane_cp22_ParamLimits

0xff94,	// (0x0008d8c6) input_focus_pane_cp08_ParamLimits

0x73a6,	// (0x00094cd8) popup_vitu2_query_button_pane_ParamLimits

0x73a6,	// (0x00094cd8) popup_vitu2_query_button_pane

0xffab,	// (0x0008d8dd) popup_vitu2_query_input_button_pane

0xd893,	// (0x0009b1c5) popup_vitu2_query_window_g1_ParamLimits

0xffb5,	// (0x0008d8e7) popup_vitu2_query_window_g2_ParamLimits

0xfa23,	// (0x0009d355) popup_vitu2_query_window_g_ParamLimits

0x9994,	// (0x000972c6) bg_button_pane_cp026

0x7a66,	// (0x00095398) popup_vitu2_query_input_button_pane_g1

0x9994,	// (0x000972c6) bg_button_pane_cp025

0xdc17,	// (0x0009b549) popup_vitu2_query_button_pane_t1

0x4fbf,	// (0x000928f1) main_mp3_pane_t6

0x4fcd,	// (0x000928ff) popup_slider_window_cp01

0xaa18,	// (0x0009834a) cam4_battery_pane

0xaa6d,	// (0x0009839f) cam4_battery_pane_cp02

0xab51,	// (0x00098483) cam4_battery_pane_cp01

0xab51,	// (0x00098483) cam4_battery_pane_cp03

0xcbf1,	// (0x0009a523) cam4_battery_pane_g1

0xdc25,	// (0x0009b557) cam4_battery_pane_g2

0x0001,

0xfb27,	// (0x0009d459) cam4_battery_pane_g

0xcab7,	// (0x0009a3e9) popup_blid_sat_info2_window_t11

0x31e5,	// (0x00090b17) aid_size_touch_mv_arrow_left_ParamLimits

0x320e,	// (0x00090b40) aid_size_touch_mv_arrow_right_ParamLimits

0xb2db,	// (0x00098c0d) navi_pane_g1_ParamLimits

0x324d,	// (0x00090b7f) navi_pane_g2_ParamLimits

0x327b,	// (0x00090bad) navi_pane_g3_ParamLimits

0xf3ec,	// (0x0009cd1e) navi_pane_g_ParamLimits

0x32d5,	// (0x00090c07) navi_pane_mv_t1_ParamLimits

0x5c66,	// (0x00093598) grid_imed_effect_pane_ParamLimits

0x1d8a,	// (0x0008f6bc) aid_placing_vt_slider_lsc

0xa439,	// (0x00097d6b) aid_placing_vt_slider_prt

0x99e5,	// (0x00097317) bg_tb_trans_pane_cp01_ParamLimits

0xcd41,	// (0x0009a673) popup_image_details_window_g1_ParamLimits

0xcd54,	// (0x0009a686) popup_image_details_window_g2_ParamLimits

0xcd69,	// (0x0009a69b) popup_image_details_window_g3_ParamLimits

0xcd69,	// (0x0009a69b) popup_image_details_window_g3

0xf71f,	// (0x0009d051) popup_image_details_window_g_ParamLimits

0xcd7d,	// (0x0009a6af) popup_image_details_window_t1_ParamLimits

0xcd8f,	// (0x0009a6c1) popup_image_details_window_t2_ParamLimits

0xcda8,	// (0x0009a6da) popup_image_details_window_t3_ParamLimits

0xcdbc,	// (0x0009a6ee) popup_image_details_window_t4_ParamLimits

0xcdd7,	// (0x0009a709) popup_image_details_window_t5_ParamLimits

0xf726,	// (0x0009d058) popup_image_details_window_t_ParamLimits

0x7696,	// (0x00094fc8) cl_header_name_pane_ParamLimits

0x7696,	// (0x00094fc8) cl_header_name_pane

0x7a6e,	// (0x000953a0) cl_header_name_pane_t1_ParamLimits

0x7a6e,	// (0x000953a0) cl_header_name_pane_t1

0x7a8f,	// (0x000953c1) cl_header_name_pane_t2_ParamLimits

0x7a8f,	// (0x000953c1) cl_header_name_pane_t2

0x7ad1,	// (0x00095403) cl_header_name_pane_t3_ParamLimits

0x7ad1,	// (0x00095403) cl_header_name_pane_t3

0x0002,

0xfb2c,	// (0x0009d45e) cl_header_name_pane_t_ParamLimits

0xfb2c,	// (0x0009d45e) cl_header_name_pane_t

0x32a6,	// (0x00090bd8) navi_pane_mv_g2_ParamLimits

0xd5db,	// (0x0009af0d) field_vitu2_entry_pane_g1_ParamLimits

0xd5e7,	// (0x0009af19) field_vitu2_entry_pane_g2_ParamLimits

0xd5f3,	// (0x0009af25) field_vitu2_entry_pane_g3_ParamLimits

0xd5f3,	// (0x0009af25) field_vitu2_entry_pane_g3

0xf922,	// (0x0009d254) field_vitu2_entry_pane_g_ParamLimits

0x69e2,	// (0x00094314) cell_vitu2_itu_pane_g1_ParamLimits

0x69f2,	// (0x00094324) cell_vitu2_itu_pane_g2_ParamLimits

0x69f2,	// (0x00094324) cell_vitu2_itu_pane_g2

0x0001,

0xf92e,	// (0x0009d260) cell_vitu2_itu_pane_g_ParamLimits

0xf92e,	// (0x0009d260) cell_vitu2_itu_pane_g

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp05_ParamLimits

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp05

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp03

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp04

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp10_ParamLimits

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp10

0x00d4,	// (0x0008da06) bg_vkb2_func_pane_cp08

0x7640,	// (0x00094f72) bg_vkb2_func_pane_cp06

0x764e,	// (0x00094f80) bg_vkb2_func_pane_cp07

0xdb23,	// (0x0009b455) bg_vkb2_func_pane_cp11_ParamLimits

0xdb23,	// (0x0009b455) bg_vkb2_func_pane_cp11

0xdb38,	// (0x0009b46a) bg_vkb2_func_pane_cp12_ParamLimits

0xdb38,	// (0x0009b46a) bg_vkb2_func_pane_cp12

0x9994,	// (0x000972c6) bg_vkb2_func_pane_cp09

0xd613,	// (0x0009af45) bg_vkb2_func_pane_g1

0xaca2,	// (0x000985d4) bg_vkb2_func_pane_g2

0xd61b,	// (0x0009af4d) bg_vkb2_func_pane_g3

0xd623,	// (0x0009af55) bg_vkb2_func_pane_g4

0xd858,	// (0x0009b18a) bg_vkb2_func_pane_g5

0xd63b,	// (0x0009af6d) bg_vkb2_func_pane_g6

0xd643,	// (0x0009af75) bg_vkb2_func_pane_g7

0xd633,	// (0x0009af65) bg_vkb2_func_pane_g8

0xac82,	// (0x000985b4) bg_vkb2_func_pane_g9

0x0008,

0xfb33,	// (0x0009d465) bg_vkb2_func_pane_g

0x7994,	// (0x000952c6) blid2_tripm_pane_g6_ParamLimits

0x7994,	// (0x000952c6) blid2_tripm_pane_g6

0xd49d,	// (0x0009adcf) mp4_progress_pane_g1

0x7a0b,	// (0x0009533d) blid2_tripm_values_pane_ParamLimits

0x7a0b,	// (0x0009533d) blid2_tripm_values_pane

0x7b02,	// (0x00095434) blid2_tripm_values_pane_t1

0x7b10,	// (0x00095442) blid2_tripm_values_pane_t2

0x7b1e,	// (0x00095450) blid2_tripm_values_pane_t3

0x7b2c,	// (0x0009545e) blid2_tripm_values_pane_t4

0x7b3a,	// (0x0009546c) blid2_tripm_values_pane_t5

0x7b48,	// (0x0009547a) blid2_tripm_values_pane_t6

0x7b56,	// (0x00095488) blid2_tripm_values_pane_t7

0x7b64,	// (0x00095496) blid2_tripm_values_pane_t8

0x7b72,	// (0x000954a4) blid2_tripm_values_pane_t9

0x0008,

0xfb46,	// (0x0009d478) blid2_tripm_values_pane_t

0x1dc7,	// (0x0008f6f9) call_video_pane_t1_ParamLimits

0x1de1,	// (0x0008f713) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0009cba0) call_video_pane_t_ParamLimits

0xfdb2,	// (0x0008d6e4) msg_header_pane_g1_ParamLimits

0xb506,	// (0x00098e38) msg_header_pane_g2_ParamLimits

0xb506,	// (0x00098e38) msg_header_pane_g2

0x0001,

0xf48f,	// (0x0009cdc1) msg_header_pane_g_ParamLimits

0xf48f,	// (0x0009cdc1) msg_header_pane_g

0xa148,	// (0x00097a7a) main_clock2_pane_ParamLimits

0x594d,	// (0x0009327f) grid_clock2_toolbar_pane_ParamLimits

0x594d,	// (0x0009327f) grid_clock2_toolbar_pane

0x594d,	// (0x0009327f) listscroll_clock2_pane_ParamLimits

0x594d,	// (0x0009327f) listscroll_clock2_pane

0x5a44,	// (0x00093376) main_clock2_pane_t3_ParamLimits

0x5a44,	// (0x00093376) main_clock2_pane_t3

0x5a68,	// (0x0009339a) main_clock2_pane_t4_ParamLimits

0x5a68,	// (0x0009339a) main_clock2_pane_t4

0xdc2f,	// (0x0009b561) cell_clock2_toolbar_pane

0xdc37,	// (0x0009b569) cell_clock2_toolbar_pane_cp01

0xdc37,	// (0x0009b569) cell_clock2_toolbar_pane_cp02

0xdc3f,	// (0x0009b571) cell_clock2_toolbar_pane_cp03

0xdc47,	// (0x0009b579) list_clock2_pane

0xb241,	// (0x00098b73) scroll_pane_cp10

0xdc4f,	// (0x0009b581) list_single_clock2_pane_ParamLimits

0xdc4f,	// (0x0009b581) list_single_clock2_pane

0xb37b,	// (0x00098cad) list_highlight_pane_cp08

0xdc5c,	// (0x0009b58e) list_single_clock2_pane_t1

0xdc6a,	// (0x0009b59c) list_single_clock2_pane_t2

0x0001,

0xfb59,	// (0x0009d48b) list_single_clock2_pane_t

0x9994,	// (0x000972c6) bg_button_pane_cp10

0xdc78,	// (0x0009b5aa) cell_clock2_toolbar_pane_g1

0x3827,	// (0x00091159) aid_main_viewer_pane_g1_ParamLimits

0x3827,	// (0x00091159) aid_main_viewer_pane_g1

0x3835,	// (0x00091167) aid_main_viewer_pane_g2_ParamLimits

0x3835,	// (0x00091167) aid_main_viewer_pane_g2

0x3843,	// (0x00091175) aid_main_viewer_pane_g3_ParamLimits

0x3843,	// (0x00091175) aid_main_viewer_pane_g3

0x3852,	// (0x00091184) aid_main_viewer_pane_g4_ParamLimits

0x3852,	// (0x00091184) aid_main_viewer_pane_g4

0x0003,

0xf4a0,	// (0x0009cdd2) aid_main_viewer_pane_g_ParamLimits

0xf4a0,	// (0x0009cdd2) aid_main_viewer_pane_g

0x41a5,	// (0x00091ad7) main_calc_pane_ParamLimits

0x41b9,	// (0x00091aeb) main_dialer2_pane_ParamLimits

0x9994,	// (0x000972c6) main_cam6_pane

0x9994,	// (0x000972c6) main_vid6_pane

0x5959,	// (0x0009328b) listscroll_gen_pane_cp06_ParamLimits

0x5959,	// (0x0009328b) listscroll_gen_pane_cp06

0x5a8b,	// (0x000933bd) main_clock2_pane_t5_ParamLimits

0x5a8b,	// (0x000933bd) main_clock2_pane_t5

0x5aeb,	// (0x0009341d) aid_call2_pane_cp10_ParamLimits

0x5afd,	// (0x0009342f) aid_call_pane_cp10_ParamLimits

0xb2b0,	// (0x00098be2) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2b0,	// (0x00098be2) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5b0f,	// (0x00093441) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5b0f,	// (0x00093441) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2b0,	// (0x00098be2) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7db,	// (0x0009d10d) popup_clock_analogue_window_cp10_g_ParamLimits

0x5b25,	// (0x00093457) popup_clock_analogue_window_cp10_t1_ParamLimits

0x61b8,	// (0x00093aea) cell_dialer2_keypad_pane_g2_ParamLimits

0x61b8,	// (0x00093aea) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c1,	// (0x0009d1f3) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c1,	// (0x0009d1f3) cell_dialer2_keypad_pane_g

0x61d4,	// (0x00093b06) cell_dialer2_keypad_pane_t1

0x6d94,	// (0x000946c6) main_cset_text2_pane_ParamLimits

0x6d94,	// (0x000946c6) main_cset_text2_pane

0xda8b,	// (0x0009b3bd) area_vitu2_query_pane_g1_ParamLimits

0x0099,	// (0x0008d9cb) area_vitu2_query_pane_g2_ParamLimits

0xfa76,	// (0x0009d3a8) area_vitu2_query_pane_g_ParamLimits

0x761c,	// (0x00094f4e) area_vitu2_query_pane_t7_ParamLimits

0x761c,	// (0x00094f4e) area_vitu2_query_pane_t7

0x7640,	// (0x00094f72) bg_button_pane_cp018_ParamLimits

0x764e,	// (0x00094f80) bg_button_pane_cp021_ParamLimits

0x00d4,	// (0x0008da06) bg_button_pane_cp022_ParamLimits

0x00d4,	// (0x0008da06) bg_vkb2_func_pane_cp08_ParamLimits

0x7640,	// (0x00094f72) bg_vkb2_func_pane_cp06_ParamLimits

0x764e,	// (0x00094f80) bg_vkb2_func_pane_cp07_ParamLimits

0x00e5,	// (0x0008da17) input_focus_pane_cp09_ParamLimits

0xabd3,	// (0x00098505) cam6_autofocus_pane_ParamLimits

0xabd3,	// (0x00098505) cam6_autofocus_pane

0x7b80,	// (0x000954b2) cam6_image_uncrop_pane_ParamLimits

0x7b80,	// (0x000954b2) cam6_image_uncrop_pane

0x7b8f,	// (0x000954c1) cam6_indi_pane_ParamLimits

0x7b8f,	// (0x000954c1) cam6_indi_pane

0x7ba5,	// (0x000954d7) cam6_mode_pane_ParamLimits

0x7ba5,	// (0x000954d7) cam6_mode_pane

0x7bb7,	// (0x000954e9) cam6_timer_pane_ParamLimits

0x7bb7,	// (0x000954e9) cam6_timer_pane

0x7bc3,	// (0x000954f5) cam6_zoom_pane_ParamLimits

0x7bc3,	// (0x000954f5) cam6_zoom_pane

0x7bd1,	// (0x00095503) cam6_mode_pane_g1_ParamLimits

0x7bd1,	// (0x00095503) cam6_mode_pane_g1

0x7be1,	// (0x00095513) cam6_mode_pane_g2_ParamLimits

0x7be1,	// (0x00095513) cam6_mode_pane_g2

0x7bf1,	// (0x00095523) cam6_mode_pane_g3_ParamLimits

0x7bf1,	// (0x00095523) cam6_mode_pane_g3

0x7c01,	// (0x00095533) cam6_mode_pane_g4_ParamLimits

0x7c01,	// (0x00095533) cam6_mode_pane_g4

0x0003,

0xfb5e,	// (0x0009d490) cam6_mode_pane_g_ParamLimits

0xfb5e,	// (0x0009d490) cam6_mode_pane_g

0xdc80,	// (0x0009b5b2) bg_tb_trans_pane_cp08_ParamLimits

0xdc80,	// (0x0009b5b2) bg_tb_trans_pane_cp08

0xdc8e,	// (0x0009b5c0) cam6_battery_pane_ParamLimits

0xdc8e,	// (0x0009b5c0) cam6_battery_pane

0xdca4,	// (0x0009b5d6) cam6_indi_pane_g1_ParamLimits

0xdca4,	// (0x0009b5d6) cam6_indi_pane_g1

0xdcb6,	// (0x0009b5e8) cam6_indi_pane_g2_ParamLimits

0xdcb6,	// (0x0009b5e8) cam6_indi_pane_g2

0xdcc8,	// (0x0009b5fa) cam6_indi_pane_g3_ParamLimits

0xdcc8,	// (0x0009b5fa) cam6_indi_pane_g3

0x0002,

0xfb67,	// (0x0009d499) cam6_indi_pane_g_ParamLimits

0xfb67,	// (0x0009d499) cam6_indi_pane_g

0xdcda,	// (0x0009b60c) cam6_indi_pane_t1_ParamLimits

0xdcda,	// (0x0009b60c) cam6_indi_pane_t1

0x6795,	// (0x000940c7) cam6_autofocus_pane_g1

0x679d,	// (0x000940cf) cam6_autofocus_pane_g2

0x67a5,	// (0x000940d7) cam6_autofocus_pane_g3

0x67ad,	// (0x000940df) cam6_autofocus_pane_g4

0x0003,

0xfb6e,	// (0x0009d4a0) cam6_autofocus_pane_g

0xdd00,	// (0x0009b632) cam6_timer_pane_g1

0xdd08,	// (0x0009b63a) cam6_timer_pane_t1

0xdd16,	// (0x0009b648) cam6_zoom_cont_pane

0xdd1e,	// (0x0009b650) cam6_zoom_pane_g1

0xdd26,	// (0x0009b658) cam6_zoom_pane_g2

0x7c11,	// (0x00095543) cam6_zoom_pane_g3

0x0002,

0xfb77,	// (0x0009d4a9) cam6_zoom_pane_g

0xcbf1,	// (0x0009a523) cam6_battery_pane_g1

0xcbf1,	// (0x0009a523) cam6_battery_pane_g2

0x0001,

0xf6e3,	// (0x0009d015) cam6_battery_pane_g

0xdd2e,	// (0x0009b660) cam6_zoom_cont_pane_g1

0xdd37,	// (0x0009b669) cam6_zoom_cont_pane_g2

0xdd40,	// (0x0009b672) cam6_zoom_cont_pane_g3

0x0002,

0xfb7e,	// (0x0009d4b0) cam6_zoom_cont_pane_g

0x7c2e,	// (0x00095560) cam6_mode_pane_cp_ParamLimits

0x7c2e,	// (0x00095560) cam6_mode_pane_cp

0x7bc3,	// (0x000954f5) cam6_zoom_pane_cp_ParamLimits

0x7bc3,	// (0x000954f5) cam6_zoom_pane_cp

0x7c40,	// (0x00095572) vid6_image_uncrop_cif_pane_ParamLimits

0x7c40,	// (0x00095572) vid6_image_uncrop_cif_pane

0x7c50,	// (0x00095582) vid6_image_uncrop_nhd_pane_ParamLimits

0x7c50,	// (0x00095582) vid6_image_uncrop_nhd_pane

0x7b80,	// (0x000954b2) vid6_image_uncrop_vga_pane_ParamLimits

0x7b80,	// (0x000954b2) vid6_image_uncrop_vga_pane

0x7c5f,	// (0x00095591) vid6_image_uncrop_wvga_pane_ParamLimits

0x7c5f,	// (0x00095591) vid6_image_uncrop_wvga_pane

0x7c6e,	// (0x000955a0) vid6_indi_pane_ParamLimits

0x7c6e,	// (0x000955a0) vid6_indi_pane

0xdc80,	// (0x0009b5b2) bg_tb_trans_pane_cp09_ParamLimits

0xdc80,	// (0x0009b5b2) bg_tb_trans_pane_cp09

0xdd58,	// (0x0009b68a) cam6_battery_pane_cp_ParamLimits

0xdd58,	// (0x0009b68a) cam6_battery_pane_cp

0xdd64,	// (0x0009b696) vid6_indi_pane_g1_ParamLimits

0xdd64,	// (0x0009b696) vid6_indi_pane_g1

0xdd76,	// (0x0009b6a8) vid6_indi_pane_g2_ParamLimits

0xdd76,	// (0x0009b6a8) vid6_indi_pane_g2

0xdd88,	// (0x0009b6ba) vid6_indi_pane_g3_ParamLimits

0xdd88,	// (0x0009b6ba) vid6_indi_pane_g3

0xdd9f,	// (0x0009b6d1) vid6_indi_pane_g4_ParamLimits

0xdd9f,	// (0x0009b6d1) vid6_indi_pane_g4

0xddb6,	// (0x0009b6e8) vid6_indi_pane_g5_ParamLimits

0xddb6,	// (0x0009b6e8) vid6_indi_pane_g5

0x0004,

0xfb85,	// (0x0009d4b7) vid6_indi_pane_g_ParamLimits

0xfb85,	// (0x0009d4b7) vid6_indi_pane_g

0xddd0,	// (0x0009b702) vid6_indi_pane_t1_ParamLimits

0xddd0,	// (0x0009b702) vid6_indi_pane_t1

0xdde6,	// (0x0009b718) vid6_indi_pane_t2_ParamLimits

0xdde6,	// (0x0009b718) vid6_indi_pane_t2

0xde0e,	// (0x0009b740) vid6_indi_pane_t3_ParamLimits

0xde0e,	// (0x0009b740) vid6_indi_pane_t3

0xde36,	// (0x0009b768) vid6_indi_pane_t4_ParamLimits

0xde36,	// (0x0009b768) vid6_indi_pane_t4

0x0003,

0xfb90,	// (0x0009d4c2) vid6_indi_pane_t_ParamLimits

0xfb90,	// (0x0009d4c2) vid6_indi_pane_t

0xde5a,	// (0x0009b78c) wait_bar_pane_cp08

0x7c86,	// (0x000955b8) main_cset_text2_pane_t1_ParamLimits

0x7c86,	// (0x000955b8) main_cset_text2_pane_t1

0x7c19,	// (0x0009554b) listscroll_gen_pane_cp06_t1_ParamLimits

0x7c19,	// (0x0009554b) listscroll_gen_pane_cp06_t1

0x9994,	// (0x000972c6) main_cam6_set_pane

0xce21,	// (0x0009a753) bg_tb_trans_pane_cp06_ParamLimits

0xaa20,	// (0x00098352) cam4_indicators_pane_g1_ParamLimits

0xaa31,	// (0x00098363) cam4_indicators_pane_g2_ParamLimits

0xf8fe,	// (0x0009d230) cam4_indicators_pane_g_ParamLimits

0xaa49,	// (0x0009837b) cam4_indicators_pane_t1_ParamLimits

0x99e5,	// (0x00097317) bg_tb_trans_pane_cp07_ParamLimits

0xaa77,	// (0x000983a9) vid4_indicators_pane_g1_ParamLimits

0xaa8d,	// (0x000983bf) vid4_indicators_pane_g2_ParamLimits

0xaaa1,	// (0x000983d3) vid4_indicators_pane_g3_ParamLimits

0xaab4,	// (0x000983e6) vid4_indicators_pane_g4_ParamLimits

0xf910,	// (0x0009d242) vid4_indicators_pane_g_ParamLimits

0xaad2,	// (0x00098404) vid4_indicators_pane_t1_ParamLimits

0x778a,	// (0x000950bc) vid4_progress_pane_g1_ParamLimits

0x779c,	// (0x000950ce) vid4_progress_pane_g2_ParamLimits

0xa697,	// (0x00097fc9) vid4_progress_pane_g3_ParamLimits

0xab59,	// (0x0009848b) vid4_progress_pane_g4_ParamLimits

0xfac1,	// (0x0009d3f3) vid4_progress_pane_g_ParamLimits

0xab77,	// (0x000984a9) vid4_progress_pane_t1_ParamLimits

0xab8c,	// (0x000984be) vid4_progress_pane_t2_ParamLimits

0xaba2,	// (0x000984d4) vid4_progress_pane_t3_ParamLimits

0xfacc,	// (0x0009d3fe) vid4_progress_pane_t_ParamLimits

0xabb7,	// (0x000984e9) wait_bar_pane_cp07_ParamLimits

0x7ca4,	// (0x000955d6) main_cam6_set_pane_g2_ParamLimits

0x7ca4,	// (0x000955d6) main_cam6_set_pane_g2

0x7cca,	// (0x000955fc) main_cset6_listscroll_pane_ParamLimits

0x7cca,	// (0x000955fc) main_cset6_listscroll_pane

0x7ce8,	// (0x0009561a) main_cset6_slider_pane_ParamLimits

0x7ce8,	// (0x0009561a) main_cset6_slider_pane

0x7cfe,	// (0x00095630) main_cset6_text2_pane_ParamLimits

0x7cfe,	// (0x00095630) main_cset6_text2_pane

0xde69,	// (0x0009b79b) main_cset6_text_pane

0xde71,	// (0x0009b7a3) main_cset_list_pane_copy1_ParamLimits

0xde71,	// (0x0009b7a3) main_cset_list_pane_copy1

0xde81,	// (0x0009b7b3) scroll_pane_cp028_copy1

0x2e62,	// (0x00090794) cset_list_set_pane_copy1

0x7d0c,	// (0x0009563e) aid_position_infowindow_above_copy1

0x7d14,	// (0x00095646) aid_position_infowindow_below_copy1

0x7d1c,	// (0x0009564e) cset_list_set_pane_g1_copy1

0x011c,	// (0x0008da4e) cset_list_set_pane_g3_copy1_ParamLimits

0x011c,	// (0x0008da4e) cset_list_set_pane_g3_copy1

0x012b,	// (0x0008da5d) cset_list_set_pane_t1_copy1_ParamLimits

0x012b,	// (0x0008da5d) cset_list_set_pane_t1_copy1

0x99e5,	// (0x00097317) list_highlight_pane_cp021_copy1_ParamLimits

0x99e5,	// (0x00097317) list_highlight_pane_cp021_copy1

0xde8a,	// (0x0009b7bc) cset6_slider_pane_ParamLimits

0xde8a,	// (0x0009b7bc) cset6_slider_pane

0xdeb6,	// (0x0009b7e8) main_cset6_slider_pane_g1_ParamLimits

0xdeb6,	// (0x0009b7e8) main_cset6_slider_pane_g1

0x7d24,	// (0x00095656) main_cset6_slider_pane_g2_ParamLimits

0x7d24,	// (0x00095656) main_cset6_slider_pane_g2

0xdede,	// (0x0009b810) main_cset6_slider_pane_g3_ParamLimits

0xdede,	// (0x0009b810) main_cset6_slider_pane_g3

0x7d4c,	// (0x0009567e) main_cset6_slider_pane_g4_ParamLimits

0x7d4c,	// (0x0009567e) main_cset6_slider_pane_g4

0x7d58,	// (0x0009568a) main_cset6_slider_pane_g5_ParamLimits

0x7d58,	// (0x0009568a) main_cset6_slider_pane_g5

0xd746,	// (0x0009b078) main_cset6_slider_pane_g7_ParamLimits

0xd746,	// (0x0009b078) main_cset6_slider_pane_g7

0xd752,	// (0x0009b084) main_cset6_slider_pane_g8_ParamLimits

0xd752,	// (0x0009b084) main_cset6_slider_pane_g8

0x6e43,	// (0x00094775) main_cset6_slider_pane_g9_ParamLimits

0x6e43,	// (0x00094775) main_cset6_slider_pane_g9

0x6e4f,	// (0x00094781) main_cset6_slider_pane_g10_ParamLimits

0x6e4f,	// (0x00094781) main_cset6_slider_pane_g10

0x6e5b,	// (0x0009478d) main_cset6_slider_pane_g11_ParamLimits

0x6e5b,	// (0x0009478d) main_cset6_slider_pane_g11

0x6e67,	// (0x00094799) main_cset6_slider_pane_g12_ParamLimits

0x6e67,	// (0x00094799) main_cset6_slider_pane_g12

0x6e73,	// (0x000947a5) main_cset6_slider_pane_g13_ParamLimits

0x6e73,	// (0x000947a5) main_cset6_slider_pane_g13

0x6e7f,	// (0x000947b1) main_cset6_slider_pane_g14_ParamLimits

0x6e7f,	// (0x000947b1) main_cset6_slider_pane_g14

0x7d66,	// (0x00095698) main_cset6_slider_pane_g15_ParamLimits

0x7d66,	// (0x00095698) main_cset6_slider_pane_g15

0x6ea3,	// (0x000947d5) main_cset6_slider_pane_g16_ParamLimits

0x6ea3,	// (0x000947d5) main_cset6_slider_pane_g16

0x6eb1,	// (0x000947e3) main_cset6_slider_pane_g17_ParamLimits

0x6eb1,	// (0x000947e3) main_cset6_slider_pane_g17

0x0011,

0xfb99,	// (0x0009d4cb) main_cset6_slider_pane_g_ParamLimits

0xfb99,	// (0x0009d4cb) main_cset6_slider_pane_g

0xdeea,	// (0x0009b81c) main_cset6_slider_pane_t1_ParamLimits

0xdeea,	// (0x0009b81c) main_cset6_slider_pane_t1

0x7d96,	// (0x000956c8) main_cset6_slider_pane_t2_ParamLimits

0x7d96,	// (0x000956c8) main_cset6_slider_pane_t2

0x7dc1,	// (0x000956f3) main_cset6_slider_pane_t3_ParamLimits

0x7dc1,	// (0x000956f3) main_cset6_slider_pane_t3

0x7dec,	// (0x0009571e) main_cset6_slider_pane_t4_ParamLimits

0x7dec,	// (0x0009571e) main_cset6_slider_pane_t4

0x7e17,	// (0x00095749) main_cset6_slider_pane_t5_ParamLimits

0x7e17,	// (0x00095749) main_cset6_slider_pane_t5

0xdf2b,	// (0x0009b85d) main_cset6_slider_pane_t7_ParamLimits

0xdf2b,	// (0x0009b85d) main_cset6_slider_pane_t7

0x7e44,	// (0x00095776) main_cset6_slider_pane_t8_ParamLimits

0x7e44,	// (0x00095776) main_cset6_slider_pane_t8

0x7e68,	// (0x0009579a) main_cset6_slider_pane_t9_ParamLimits

0x7e68,	// (0x0009579a) main_cset6_slider_pane_t9

0x7e8c,	// (0x000957be) main_cset6_slider_pane_t10_ParamLimits

0x7e8c,	// (0x000957be) main_cset6_slider_pane_t10

0x7eb0,	// (0x000957e2) main_cset6_slider_pane_t11_ParamLimits

0x7eb0,	// (0x000957e2) main_cset6_slider_pane_t11

0xdf61,	// (0x0009b893) main_cset6_slider_pane_t14_ParamLimits

0xdf61,	// (0x0009b893) main_cset6_slider_pane_t14

0xdf9a,	// (0x0009b8cc) main_cset6_slider_pane_t15_ParamLimits

0xdf9a,	// (0x0009b8cc) main_cset6_slider_pane_t15

0x000b,

0xfbbe,	// (0x0009d4f0) main_cset6_slider_pane_t_ParamLimits

0xfbbe,	// (0x0009d4f0) main_cset6_slider_pane_t

0xd80a,	// (0x0009b13c) cset_slider_pane_g1_copy1

0xd813,	// (0x0009b145) cset_slider_pane_g2_copy1

0xd81c,	// (0x0009b14e) cset_slider_pane_g3_copy1

0x9994,	// (0x000972c6) bg_popup_sub_pane_cp011_copy1

0xdfd3,	// (0x0009b905) main_cset_text_pane_g1_copy1

0xd8a7,	// (0x0009b1d9) main_cset_text_pane_t1_copy1

0xd8b5,	// (0x0009b1e7) main_cset_text_pane_t2_copy1

0xd8c3,	// (0x0009b1f5) main_cset_text_pane_t3_copy1

0xd8d1,	// (0x0009b203) main_cset_text_pane_t4_copy1

0xd8df,	// (0x0009b211) main_cset_text_pane_t5_copy1

0xdfdb,	// (0x0009b90d) main_cset_text_pane_t6_copy1

0xdfe9,	// (0x0009b91b) main_cset_text_pane_t7_copy1

0x7c86,	// (0x000955b8) main_cset_text2_pane_t1_copy1

0x99e5,	// (0x00097317) main_ncimui_pane

0x4447,	// (0x00091d79) popup_query_ncimui_window_ParamLimits

0x4447,	// (0x00091d79) popup_query_ncimui_window

0xa76b,	// (0x0009809d) field_cale_ev2_pane_g4_ParamLimits

0xa76b,	// (0x0009809d) field_cale_ev2_pane_g4

0x608a,	// (0x000939bc) cell_video_dialer_keypad_pane_g2_ParamLimits

0x608a,	// (0x000939bc) cell_video_dialer_keypad_pane_g2

0x0001,

0xf89c,	// (0x0009d1ce) cell_video_dialer_keypad_pane_g_ParamLimits

0xf89c,	// (0x0009d1ce) cell_video_dialer_keypad_pane_g

0x60a2,	// (0x000939d4) cell_video_dialer_keypad_pane_t1

0x9994,	// (0x000972c6) bg_popup_window_pane_cp012

0xb12d,	// (0x00098a5f) heading_pane_cp06

0xe015,	// (0x0009b947) ncim_query_content_pane

0x9994,	// (0x000972c6) bg_popup_heading_pane_cp01

0xe01d,	// (0x0009b94f) ncim_heading_pane_t1

0xe02b,	// (0x0009b95d) ncim_indicator_popup_pane

0xe03d,	// (0x0009b96f) ncim_query_button_pane

0xe053,	// (0x0009b985) ncim_query_content_pane_t1

0xe065,	// (0x0009b997) ncim_query_content_pane_t2

0x0005,

0xfc02,	// (0x0009d534) ncim_query_content_pane_t

0xe09f,	// (0x0009b9d1) ncim_query_list_pane

0xe0b1,	// (0x0009b9e3) ncim_query_popup_pane

0xe02b,	// (0x0009b95d) ncim_indicator_popup_pane_ParamLimits

0x7ffc,	// (0x0009592e) ncim_query_content_pane_g1_ParamLimits

0x7ffc,	// (0x0009592e) ncim_query_content_pane_g1

0xe053,	// (0x0009b985) ncim_query_content_pane_t1_ParamLimits

0xe065,	// (0x0009b997) ncim_query_content_pane_t2_ParamLimits

0x8008,	// (0x0009593a) ncim_query_content_pane_t3_ParamLimits

0x8008,	// (0x0009593a) ncim_query_content_pane_t3

0x8030,	// (0x00095962) ncim_query_content_pane_t4_ParamLimits

0x8030,	// (0x00095962) ncim_query_content_pane_t4

0x8058,	// (0x0009598a) ncim_query_content_pane_t5_ParamLimits

0x8058,	// (0x0009598a) ncim_query_content_pane_t5

0xe077,	// (0x0009b9a9) ncim_query_content_pane_t6_ParamLimits

0xe077,	// (0x0009b9a9) ncim_query_content_pane_t6

0xfc02,	// (0x0009d534) ncim_query_content_pane_t_ParamLimits

0xe09f,	// (0x0009b9d1) ncim_query_list_pane_ParamLimits

0xe0b1,	// (0x0009b9e3) ncim_query_popup_pane_ParamLimits

0xe0c5,	// (0x0009b9f7) wait_bar_pane_cp04

0x9994,	// (0x000972c6) input_focus_pane_cp011

0xe0cd,	// (0x0009b9ff) ncim_query_popup_pane_t1

0xe0db,	// (0x0009ba0d) ncim_list_query_list_pane_ParamLimits

0xe0db,	// (0x0009ba0d) ncim_list_query_list_pane

0x9994,	// (0x000972c6) bg_button_pane_cp027

0xe0ee,	// (0x0009ba20) ncim_query_button_pane_g1

0x9994,	// (0x000972c6) list_highlight_pane_cp012

0xe0f8,	// (0x0009ba2a) ncim_list_query_list_pane_g1

0xe100,	// (0x0009ba32) ncim_list_query_list_pane_t1

0xaa3d,	// (0x0009836f) cam4_indicators_pane_g3_ParamLimits

0xaa3d,	// (0x0009836f) cam4_indicators_pane_g3

0xaac0,	// (0x000983f2) vid4_indicators_pane_g5_ParamLimits

0xaac0,	// (0x000983f2) vid4_indicators_pane_g5

0xab68,	// (0x0009849a) vid4_progress_pane_g5_ParamLimits

0xab68,	// (0x0009849a) vid4_progress_pane_g5

0x7eea,	// (0x0009581c) main_ncimui_pane_g1

0x7f50,	// (0x00095882) ncimui_group_query_pane_ParamLimits

0x7f50,	// (0x00095882) ncimui_group_query_pane

0x7f98,	// (0x000958ca) ncimui_list_pane_ParamLimits

0x7f98,	// (0x000958ca) ncimui_list_pane

0x7fbf,	// (0x000958f1) ncimui_text_pane_ParamLimits

0x7fbf,	// (0x000958f1) ncimui_text_pane

0x8080,	// (0x000959b2) ncimui_text_pane_t1_ParamLimits

0x8080,	// (0x000959b2) ncimui_text_pane_t1

0xe10e,	// (0x0009ba40) ncimui_list_single_graphic_pane_ParamLimits

0xe10e,	// (0x0009ba40) ncimui_list_single_graphic_pane

0x809e,	// (0x000959d0) ncimui_query_pane_ParamLimits

0x809e,	// (0x000959d0) ncimui_query_pane

0x9994,	// (0x000972c6) list_highlight_pane_cp013

0xe11e,	// (0x0009ba50) ncim_list_query_list_pane_t1_copy1

0xe0f8,	// (0x0009ba2a) ncim_list_single_graphic_pane_g1

0xe12c,	// (0x0009ba5e) ncim_query_button_pane_cp01

0xe138,	// (0x0009ba6a) ncim_query_entry_pane_ParamLimits

0xe138,	// (0x0009ba6a) ncim_query_entry_pane

0xe14b,	// (0x0009ba7d) ncimui_query_pane_g1

0xe157,	// (0x0009ba89) ncimui_query_pane_t1_ParamLimits

0xe157,	// (0x0009ba89) ncimui_query_pane_t1

0x99e5,	// (0x00097317) input_focus_pane_cp012

0xe170,	// (0x0009baa2) ncim_query_entry_pane_t1

0xa148,	// (0x00097a7a) main_im_pane_ParamLimits

0x99e5,	// (0x00097317) main_mobtv_pane_ParamLimits

0x99e5,	// (0x00097317) main_mobtv_pane

0x7d7e,	// (0x000956b0) main_cset6_slider_pane_g18_ParamLimits

0x7d7e,	// (0x000956b0) main_cset6_slider_pane_g18

0x7d8a,	// (0x000956bc) main_cset6_slider_pane_g19_ParamLimits

0x7d8a,	// (0x000956bc) main_cset6_slider_pane_g19

0xabe1,	// (0x00098513) bg_main_mobtv_pane_ParamLimits

0xabe1,	// (0x00098513) bg_main_mobtv_pane

0x80b1,	// (0x000959e3) main_mobtv_info_pane

0x80bc,	// (0x000959ee) main_mobtv_loading_pane_ParamLimits

0x80bc,	// (0x000959ee) main_mobtv_loading_pane

0xe182,	// (0x0009bab4) main_mobtv_pg_channel_list_pane

0xe18c,	// (0x0009babe) main_mobtv_pg_hdr_pane

0x80c9,	// (0x000959fb) main_mobtv_programe_curr_pane_ParamLimits

0x80c9,	// (0x000959fb) main_mobtv_programe_curr_pane

0x80d6,	// (0x00095a08) main_mobtv_programe_next_pane_ParamLimits

0x80d6,	// (0x00095a08) main_mobtv_programe_next_pane

0xe195,	// (0x0009bac7) popup_mobtv_noti_window

0xcbf1,	// (0x0009a523) main_tv_pg_hdr_pane_g1

0xe19f,	// (0x0009bad1) main_tv_pg_hdr_pane_g2

0xe1a7,	// (0x0009bad9) main_tv_pg_hdr_pane_g3

0xe1af,	// (0x0009bae1) main_tv_pg_hdr_pane_g4

0xe1b7,	// (0x0009bae9) main_tv_pg_hdr_pane_g5

0xe1c1,	// (0x0009baf3) main_tv_pg_hdr_pane_g6

0xe1cb,	// (0x0009bafd) main_tv_pg_hdr_pane_g7

0xe1d5,	// (0x0009bb07) main_tv_pg_hdr_pane_g8

0xe1df,	// (0x0009bb11) main_tv_pg_hdr_pane_g9

0xe1e9,	// (0x0009bb1b) main_tv_pg_hdr_pane_g10

0xe1f3,	// (0x0009bb25) main_tv_pg_hdr_pane_g11

0x000a,

0xfc0f,	// (0x0009d541) main_tv_pg_hdr_pane_g

0xe1fd,	// (0x0009bb2f) main_tv_pg_hdr_pane_t1

0xe20b,	// (0x0009bb3d) main_tv_pg_hdr_pane_t2

0xe219,	// (0x0009bb4b) main_tv_pg_hdr_pane_t3

0xe229,	// (0x0009bb5b) main_tv_pg_hdr_pane_t4

0xe239,	// (0x0009bb6b) main_tv_pg_hdr_pane_t5

0x0004,

0xfc26,	// (0x0009d558) main_tv_pg_hdr_pane_t

0xe249,	// (0x0009bb7b) single_mobtv_pg_channel_pane_ParamLimits

0xe249,	// (0x0009bb7b) single_mobtv_pg_channel_pane

0xe25b,	// (0x0009bb8d) single_mobtv_pg_channel_table_pane

0xe264,	// (0x0009bb96) single_mobtv_pg_channel_thumb_pane

0xe26d,	// (0x0009bb9f) single_tv_pg_channel_pane_g1

0xe276,	// (0x0009bba8) single_tv_pg_channel_pane_g2

0x0001,

0xfc31,	// (0x0009d563) single_tv_pg_channel_pane_g

0xce21,	// (0x0009a753) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xce21,	// (0x0009a753) bg_single_mobtv_pg_channel_thumb_pane

0xe27f,	// (0x0009bbb1) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe27f,	// (0x0009bbb1) single_mobtv_pg_channel_thumb_pane_g1

0xe28d,	// (0x0009bbbf) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe28d,	// (0x0009bbbf) single_mobtv_pg_channel_thumb_pane_g2

0xe299,	// (0x0009bbcb) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe299,	// (0x0009bbcb) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc36,	// (0x0009d568) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc36,	// (0x0009d568) single_mobtv_pg_channel_thumb_pane_g

0xe2a5,	// (0x0009bbd7) single_mobtv_pg_channel_thumb_pane_t1

0xe2b3,	// (0x0009bbe5) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc3d,	// (0x0009d56f) single_mobtv_pg_channel_thumb_pane_t

0xcbf1,	// (0x0009a523) bg_single_mobtv_pg_channel_table_pane_g1

0xcbf1,	// (0x0009a523) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6e3,	// (0x0009d015) bg_single_mobtv_pg_channel_table_pane_g

0xe2c1,	// (0x0009bbf3) single_mobtv_pg_channel_table_pane_t1

0xe2cf,	// (0x0009bc01) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc42,	// (0x0009d574) single_mobtv_pg_channel_table_pane_t

0x80eb,	// (0x00095a1d) main_mobtv_info_pane_g1_ParamLimits

0x80eb,	// (0x00095a1d) main_mobtv_info_pane_g1

0x8109,	// (0x00095a3b) main_mobtv_info_pane_t1_ParamLimits

0x8109,	// (0x00095a3b) main_mobtv_info_pane_t1

0x8181,	// (0x00095ab3) main_mobtv_info_pane_t2_ParamLimits

0x8181,	// (0x00095ab3) main_mobtv_info_pane_t2

0x0002,

0xfc4c,	// (0x0009d57e) main_mobtv_info_pane_t_ParamLimits

0xfc4c,	// (0x0009d57e) main_mobtv_info_pane_t

0x8210,	// (0x00095b42) wait_bar_pane_cp05

0x8222,	// (0x00095b54) main_mobtv_loading_pane_g1_ParamLimits

0x8222,	// (0x00095b54) main_mobtv_loading_pane_g1

0x8233,	// (0x00095b65) main_mobtv_loading_pane_g2_ParamLimits

0x8233,	// (0x00095b65) main_mobtv_loading_pane_g2

0x823f,	// (0x00095b71) main_mobtv_loading_pane_g3_ParamLimits

0x823f,	// (0x00095b71) main_mobtv_loading_pane_g3

0x0002,

0xfc53,	// (0x0009d585) main_mobtv_loading_pane_g_ParamLimits

0xfc53,	// (0x0009d585) main_mobtv_loading_pane_g

0xe2dd,	// (0x0009bc0f) main_mobtv_loading_pane_t1_ParamLimits

0xe2dd,	// (0x0009bc0f) main_mobtv_loading_pane_t1

0xe2f5,	// (0x0009bc27) main_mobtv_loading_pane_t2_ParamLimits

0xe2f5,	// (0x0009bc27) main_mobtv_loading_pane_t2

0x0001,

0xfc5a,	// (0x0009d58c) main_mobtv_loading_pane_t_ParamLimits

0xfc5a,	// (0x0009d58c) main_mobtv_loading_pane_t

0x8252,	// (0x00095b84) wait_bar_pane_cp06_ParamLimits

0x8252,	// (0x00095b84) wait_bar_pane_cp06

0xe319,	// (0x0009bc4b) main_mobtv_programe_curr_pane_t1

0xe327,	// (0x0009bc59) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc5f,	// (0x0009d591) main_mobtv_programe_curr_pane_t

0xe335,	// (0x0009bc67) main_mobtv_programe_next_pane_t1

0xe343,	// (0x0009bc75) main_mobtv_programe_next_pane_t2

0xe351,	// (0x0009bc83) main_mobtv_programe_next_pane_t3

0x0002,

0xfc64,	// (0x0009d596) main_mobtv_programe_next_pane_t

0x9994,	// (0x000972c6) bg_popup_mobtv_noti_window_pane

0xe35f,	// (0x0009bc91) popup_mobtv_noti_window_g1

0xe367,	// (0x0009bc99) popup_mobtv_noti_window_t1

0xe375,	// (0x0009bca7) popup_mobtv_noti_window_t2

0x0001,

0xfc6b,	// (0x0009d59d) popup_mobtv_noti_window_t

0xcbf1,	// (0x0009a523) bg_popup_mobtv_noti_window_pane_g1

0x9994,	// (0x000972c6) sc_clock_pane

0x9994,	// (0x000972c6) main_fs_bigclock_pane

0x79f5,	// (0x00095327) blid2_tripm_pane_t4_ParamLimits

0x79f5,	// (0x00095327) blid2_tripm_pane_t4

0x8261,	// (0x00095b93) sc_clock_pane_g1_ParamLimits

0x8261,	// (0x00095b93) sc_clock_pane_g1

0x8273,	// (0x00095ba5) sc_clock_pane_t1_ParamLimits

0x8273,	// (0x00095ba5) sc_clock_pane_t1

0x8297,	// (0x00095bc9) sc_clock_pane_t2_ParamLimits

0x8297,	// (0x00095bc9) sc_clock_pane_t2

0x82af,	// (0x00095be1) sc_clock_pane_t3_ParamLimits

0x82af,	// (0x00095be1) sc_clock_pane_t3

0x0004,

0xfc70,	// (0x0009d5a2) sc_clock_pane_t_ParamLimits

0xfc70,	// (0x0009d5a2) sc_clock_pane_t

0x8f88,	// (0x000968ba) main_fs_bigclock_indicator_pane_ParamLimits

0x8f88,	// (0x000968ba) main_fs_bigclock_indicator_pane

0x836b,	// (0x00095c9d) main_fs_bigclock_pane_g1_ParamLimits

0x836b,	// (0x00095c9d) main_fs_bigclock_pane_g1

0x8f94,	// (0x000968c6) main_fs_bigclock_pane_t1_ParamLimits

0x8f94,	// (0x000968c6) main_fs_bigclock_pane_t1

0x8fa6,	// (0x000968d8) main_fs_bigclock_pane_t2_ParamLimits

0x8fa6,	// (0x000968d8) main_fs_bigclock_pane_t2

0x8fba,	// (0x000968ec) main_fs_bigclock_pane_t3_ParamLimits

0x8fba,	// (0x000968ec) main_fs_bigclock_pane_t3

0x0002,

0xfe7a,	// (0x0009d7ac) main_fs_bigclock_pane_t_ParamLimits

0xfe7a,	// (0x0009d7ac) main_fs_bigclock_pane_t

0xebd9,	// (0x0009c50b) main_fs_bigclock_indicator_pane_g1

0xe045,	// (0x0009b977) ncim_query_content_pane_g2_ParamLimits

0xe045,	// (0x0009b977) ncim_query_content_pane_g2

0x0001,

0xfbfd,	// (0x0009d52f) ncim_query_content_pane_g_ParamLimits

0xfbfd,	// (0x0009d52f) ncim_query_content_pane_g

0x82c6,	// (0x00095bf8) sc_clock_pane_t4_ParamLimits

0x82c6,	// (0x00095bf8) sc_clock_pane_t4

0x99e5,	// (0x00097317) main_radioblah_pane

0xd54c,	// (0x0009ae7e) cell_call4_button_pane_t1_copy1_ParamLimits

0xd54c,	// (0x0009ae7e) cell_call4_button_pane_t1_copy1

0x7f02,	// (0x00095834) main_ncimui_pane_t1_ParamLimits

0x7f02,	// (0x00095834) main_ncimui_pane_t1

0x7f1c,	// (0x0009584e) main_ncimui_pane_t2_ParamLimits

0x7f1c,	// (0x0009584e) main_ncimui_pane_t2

0x0002,

0xfbf6,	// (0x0009d528) main_ncimui_pane_t_ParamLimits

0xfbf6,	// (0x0009d528) main_ncimui_pane_t

0xe4d4,	// (0x0009be06) main_radioblah_anim_pane_ParamLimits

0xe4d4,	// (0x0009be06) main_radioblah_anim_pane

0xe4e5,	// (0x0009be17) main_radioblah_info_pane_ParamLimits

0xe4e5,	// (0x0009be17) main_radioblah_info_pane

0xe4f9,	// (0x0009be2b) main_radioblah_pane_t1_ParamLimits

0xe4f9,	// (0x0009be2b) main_radioblah_pane_t1

0xe515,	// (0x0009be47) main_radioblah_pane_t2_ParamLimits

0xe515,	// (0x0009be47) main_radioblah_pane_t2

0x0003,

0xfc91,	// (0x0009d5c3) main_radioblah_pane_t_ParamLimits

0xfc91,	// (0x0009d5c3) main_radioblah_pane_t

0x83c8,	// (0x00095cfa) main_radioblah_rocker_ctrl_pane_ParamLimits

0x83c8,	// (0x00095cfa) main_radioblah_rocker_ctrl_pane

0xe55d,	// (0x0009be8f) main_radioblah_info_pane_t1_ParamLimits

0xe55d,	// (0x0009be8f) main_radioblah_info_pane_t1

0x8420,	// (0x00095d52) main_radioblah_info_pane_t2_ParamLimits

0x8420,	// (0x00095d52) main_radioblah_info_pane_t2

0x0003,

0xfc9a,	// (0x0009d5cc) main_radioblah_info_pane_t_ParamLimits

0xfc9a,	// (0x0009d5cc) main_radioblah_info_pane_t

0xcbf1,	// (0x0009a523) main_radioblah_rocker_ctrl_pane_g1

0x84d0,	// (0x00095e02) main_radioblah_rocker_ctrl_pane_g2

0x84d8,	// (0x00095e0a) main_radioblah_rocker_ctrl_pane_g3

0x84e0,	// (0x00095e12) main_radioblah_rocker_ctrl_pane_g4

0x84e8,	// (0x00095e1a) main_radioblah_rocker_ctrl_pane_g5

0x84f0,	// (0x00095e22) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca3,	// (0x0009d5d5) main_radioblah_rocker_ctrl_pane_g

0x7c86,	// (0x000955b8) main_cset_text2_pane_t1_copy1_ParamLimits

0xaa0e,	// (0x00098340) cam4_image_uncrop_qvga_pane

0xaa63,	// (0x00098395) vid4_image_uncrop_qcif_pane

0xabd3,	// (0x00098505) cam6_image_uncrop_qvga_pane_ParamLimits

0xabd3,	// (0x00098505) cam6_image_uncrop_qvga_pane

0xdd48,	// (0x0009b67a) vid6_image_uncrop_qcif_pane_ParamLimits

0xdd48,	// (0x0009b67a) vid6_image_uncrop_qcif_pane

0x9994,	// (0x000972c6) bg_popup_preview_window_pane_cp03

0xdff7,	// (0x0009b929) list_cset_text2_pane

0xdfff,	// (0x0009b931) main_cset6_text2_pane_g1

0xe007,	// (0x0009b939) main_cset6_text2_pane_t1

0x84f8,	// (0x00095e2a) list_cset_text2_pane_t1_ParamLimits

0x84f8,	// (0x00095e2a) list_cset_text2_pane_t1

0x99e5,	// (0x00097317) main_radioblah_pane_ParamLimits

0x81fc,	// (0x00095b2e) main_mobtv_info_pane_t3_ParamLimits

0x81fc,	// (0x00095b2e) main_mobtv_info_pane_t3

0x83b6,	// (0x00095ce8) main_radioblah_pane_g1

0x83f0,	// (0x00095d22) main_radioblah_info_pane_g1

0x8475,	// (0x00095da7) main_radioblah_info_pane_t3_ParamLimits

0x8475,	// (0x00095da7) main_radioblah_info_pane_t3

0x2dac,	// (0x000906de) highlight_cell_cale_month_pane_ParamLimits

0x2dac,	// (0x000906de) highlight_cell_cale_month_pane

0x9994,	// (0x000972c6) main_phob_fisheye_pane

0xcefd,	// (0x0009a82f) scroll_pane_cp0031_ParamLimits

0xcefd,	// (0x0009a82f) scroll_pane_cp0031

0xde5a,	// (0x0009b78c) wait_bar_pane_cp08_ParamLimits

0x2e62,	// (0x00090794) cset_list_set_pane_copy1_ParamLimits

0xe597,	// (0x0009bec9) highlight_cell_cale_month_pane_g1

0x8511,	// (0x00095e43) highlight_cell_cale_month_pane_t1

0xdadf,	// (0x0009b411) list_gen_pane_cp01

0xd731,	// (0x0009b063) scroll_pane_01

0x020f,	// (0x0008db41) list_single_double_fisheye_pane

0x0218,	// (0x0008db4a) list_double_fisheye_pane_g1_ParamLimits

0x0218,	// (0x0008db4a) list_double_fisheye_pane_g1

0x0224,	// (0x0008db56) list_double_fisheye_pane_g2_ParamLimits

0x0224,	// (0x0008db56) list_double_fisheye_pane_g2

0x0238,	// (0x0008db6a) list_double_fisheye_pane_g3_ParamLimits

0x0238,	// (0x0008db6a) list_double_fisheye_pane_g3

0x0004,

0xfcb0,	// (0x0009d5e2) list_double_fisheye_pane_g_ParamLimits

0xfcb0,	// (0x0009d5e2) list_double_fisheye_pane_g

0x0261,	// (0x0008db93) list_double_fisheye_pane_t1_ParamLimits

0x0261,	// (0x0008db93) list_double_fisheye_pane_t1

0x027c,	// (0x0008dbae) list_double_fisheye_pane_t2_ParamLimits

0x027c,	// (0x0008dbae) list_double_fisheye_pane_t2

0x0001,

0xfcbb,	// (0x0009d5ed) list_double_fisheye_pane_t_ParamLimits

0xfcbb,	// (0x0009d5ed) list_double_fisheye_pane_t

0x9994,	// (0x000972c6) main_call5_pane

0x82f1,	// (0x00095c23) sc_swipe_pane_ParamLimits

0x82f1,	// (0x00095c23) sc_swipe_pane

0x8532,	// (0x00095e64) call5_image_pane_ParamLimits

0x8532,	// (0x00095e64) call5_image_pane

0x854f,	// (0x00095e81) call5_swipe_1_pane_ParamLimits

0x854f,	// (0x00095e81) call5_swipe_1_pane

0x8562,	// (0x00095e94) call5_swipe_2_pane_ParamLimits

0x8562,	// (0x00095e94) call5_swipe_2_pane

0x858f,	// (0x00095ec1) popup_call5_audio_first_window_ParamLimits

0x858f,	// (0x00095ec1) popup_call5_audio_first_window

0xce21,	// (0x0009a753) call5_swipe_1_pane_g1_ParamLimits

0xce21,	// (0x0009a753) call5_swipe_1_pane_g1

0xe59f,	// (0x0009bed1) call5_swipe_1_pane_g2_ParamLimits

0xe59f,	// (0x0009bed1) call5_swipe_1_pane_g2

0x0001,

0xfcc0,	// (0x0009d5f2) call5_swipe_1_pane_g_ParamLimits

0xfcc0,	// (0x0009d5f2) call5_swipe_1_pane_g

0xe5ab,	// (0x0009bedd) call5_swipe_1_pane_t1_ParamLimits

0xe5ab,	// (0x0009bedd) call5_swipe_1_pane_t1

0xce21,	// (0x0009a753) call5_swipe_2_pane_g1_ParamLimits

0xce21,	// (0x0009a753) call5_swipe_2_pane_g1

0xe5c0,	// (0x0009bef2) call5_swipe_2_pane_g2_ParamLimits

0xe5c0,	// (0x0009bef2) call5_swipe_2_pane_g2

0x0001,

0xfcc5,	// (0x0009d5f7) call5_swipe_2_pane_g_ParamLimits

0xfcc5,	// (0x0009d5f7) call5_swipe_2_pane_g

0xe5cc,	// (0x0009befe) call5_swipe_2_pane_t1_ParamLimits

0xe5cc,	// (0x0009befe) call5_swipe_2_pane_t1

0xe5e1,	// (0x0009bf13) sc_swipe_pane_g1_ParamLimits

0xe5e1,	// (0x0009bf13) sc_swipe_pane_g1

0xe5ee,	// (0x0009bf20) sc_swipe_pane_g2_ParamLimits

0xe5ee,	// (0x0009bf20) sc_swipe_pane_g2

0x0001,

0xfcca,	// (0x0009d5fc) sc_swipe_pane_g_ParamLimits

0xfcca,	// (0x0009d5fc) sc_swipe_pane_g

0xe5fa,	// (0x0009bf2c) sc_swipe_pane_t1_ParamLimits

0xe5fa,	// (0x0009bf2c) sc_swipe_pane_t1

0x9994,	// (0x000972c6) main_cmail_launcher_pane

0x85a4,	// (0x00095ed6) aid_size_cell_cmail_l_ParamLimits

0x85a4,	// (0x00095ed6) aid_size_cell_cmail_l

0x85be,	// (0x00095ef0) grid_cmail_l_pane_ParamLimits

0x85be,	// (0x00095ef0) grid_cmail_l_pane

0x85d9,	// (0x00095f0b) cell_cmail_l_pane_ParamLimits

0x85d9,	// (0x00095f0b) cell_cmail_l_pane

0x8601,	// (0x00095f33) cell_cmail_l_pane_g1_ParamLimits

0x8601,	// (0x00095f33) cell_cmail_l_pane_g1

0x860d,	// (0x00095f3f) cell_cmail_l_pane_t1_ParamLimits

0x860d,	// (0x00095f3f) cell_cmail_l_pane_t1

0xe60f,	// (0x0009bf41) cell_cmail_l_pane_t2_ParamLimits

0xe60f,	// (0x0009bf41) cell_cmail_l_pane_t2

0x0001,

0xfccf,	// (0x0009d601) cell_cmail_l_pane_t_ParamLimits

0xfccf,	// (0x0009d601) cell_cmail_l_pane_t

0x99e5,	// (0x00097317) grid_highlight_pane_cp018_ParamLimits

0x99e5,	// (0x00097317) grid_highlight_pane_cp018

0x0b1c,	// (0x0008e44e) main2_pane_ParamLimits

0x0b1c,	// (0x0008e44e) main2_pane

0xa221,	// (0x00097b53) popup_sp_fs_action_menu_bg_pane_g1

0xa229,	// (0x00097b5b) popup_sp_fs_action_menu_bg_pane_g2

0xa231,	// (0x00097b63) popup_sp_fs_action_menu_bg_pane_g3

0xa239,	// (0x00097b6b) popup_sp_fs_action_menu_bg_pane_g4

0xa241,	// (0x00097b73) popup_sp_fs_action_menu_bg_pane_g5

0xa249,	// (0x00097b7b) popup_sp_fs_action_menu_bg_pane_g6

0xa251,	// (0x00097b83) popup_sp_fs_action_menu_bg_pane_g7

0xa259,	// (0x00097b8b) popup_sp_fs_action_menu_bg_pane_g8

0xa261,	// (0x00097b93) popup_sp_fs_action_menu_bg_pane_g9

0xa269,	// (0x00097b9b) popup_sp_fs_action_menu_bg_pane_g10

0xa269,	// (0x00097b9b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf186,	// (0x0009cab8) popup_sp_fs_action_menu_bg_pane_g

0xfb5a,	// (0x0008d48c) list_medium_line_x2_t3_g3_g1_ParamLimits

0xfb5a,	// (0x0008d48c) list_medium_line_x2_t3_g3_g1

0xfb66,	// (0x0008d498) list_medium_line_x2_t3_g3_g2_ParamLimits

0xfb66,	// (0x0008d498) list_medium_line_x2_t3_g3_g2

0xfb72,	// (0x0008d4a4) list_medium_line_x2_t3_g3_g3_ParamLimits

0xfb72,	// (0x0008d4a4) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0009cb6a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0009cb6a) list_medium_line_x2_t3_g3_g

0xfb7e,	// (0x0008d4b0) list_medium_line_x2_t3_g3_t1_ParamLimits

0xfb7e,	// (0x0008d4b0) list_medium_line_x2_t3_g3_t1

0xfb93,	// (0x0008d4c5) list_medium_line_x2_t3_g3_t2_ParamLimits

0xfb93,	// (0x0008d4c5) list_medium_line_x2_t3_g3_t2

0xfba7,	// (0x0008d4d9) list_medium_line_x2_t3_g3_t3_ParamLimits

0xfba7,	// (0x0008d4d9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0009cb71) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0009cb71) list_medium_line_x2_t3_g3_t

0xf044,	// (0x0009c976) list_medium_line_x2_t3_g2_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t3_g2_g1

0xf050,	// (0x0009c982) list_medium_line_x2_t3_g2_g2_ParamLimits

0xf050,	// (0x0009c982) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0009cb78) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0009cb78) list_medium_line_x2_t3_g2_g

0xfbbc,	// (0x0008d4ee) list_medium_line_x2_t3_g2_t1_ParamLimits

0xfbbc,	// (0x0008d4ee) list_medium_line_x2_t3_g2_t1

0xfbd2,	// (0x0008d504) list_medium_line_x2_t3_g2_t2_ParamLimits

0xfbd2,	// (0x0008d504) list_medium_line_x2_t3_g2_t2

0xfbe4,	// (0x0008d516) list_medium_line_x2_t3_g2_t3_ParamLimits

0xfbe4,	// (0x0008d516) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0009cb7d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0009cb7d) list_medium_line_x2_t3_g2_t

0xf044,	// (0x0009c976) list_medium_line_x2_t4_g4_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t4_g4_g1

0xfc02,	// (0x0008d534) list_medium_line_x2_t4_g4_g2_ParamLimits

0xfc02,	// (0x0008d534) list_medium_line_x2_t4_g4_g2

0xf05c,	// (0x0009c98e) list_medium_line_x2_t4_g4_g3_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x2_t4_g4_g3

0xfc0e,	// (0x0008d540) list_medium_line_x2_t4_g4_g4_ParamLimits

0xfc0e,	// (0x0008d540) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0009cb84) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0009cb84) list_medium_line_x2_t4_g4_g

0xfc1a,	// (0x0008d54c) list_medium_line_x2_t4_g4_t1_ParamLimits

0xfc1a,	// (0x0008d54c) list_medium_line_x2_t4_g4_t1

0xfc34,	// (0x0008d566) list_medium_line_x2_t4_g4_t2_ParamLimits

0xfc34,	// (0x0008d566) list_medium_line_x2_t4_g4_t2

0xfc4a,	// (0x0008d57c) list_medium_line_x2_t4_g4_t3_ParamLimits

0xfc4a,	// (0x0008d57c) list_medium_line_x2_t4_g4_t3

0xfc5f,	// (0x0008d591) list_medium_line_x2_t4_g4_t4_ParamLimits

0xfc5f,	// (0x0008d591) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0009cb8d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0009cb8d) list_medium_line_x2_t4_g4_t

0xf044,	// (0x0009c976) list_medium_line_x2_t2_g4_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t2_g4_g1

0xf068,	// (0x0009c99a) list_medium_line_x2_t2_g4_g2_ParamLimits

0xf068,	// (0x0009c99a) list_medium_line_x2_t2_g4_g2

0xf05c,	// (0x0009c98e) list_medium_line_x2_t2_g4_g3_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x2_t2_g4_g3

0xf050,	// (0x0009c982) list_medium_line_x2_t2_g4_g4_ParamLimits

0xf050,	// (0x0009c982) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0009cbf4) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0009cbf4) list_medium_line_x2_t2_g4_g

0xfc71,	// (0x0008d5a3) list_medium_line_x2_t2_g4_t1_ParamLimits

0xfc71,	// (0x0008d5a3) list_medium_line_x2_t2_g4_t1

0xf074,	// (0x0009c9a6) list_medium_line_x2_t2_g4_t2_ParamLimits

0xf074,	// (0x0009c9a6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0009cbfd) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0009cbfd) list_medium_line_x2_t2_g4_t

0xf044,	// (0x0009c976) list_medium_line_x2_t2_g3_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t2_g3_g1

0xf05c,	// (0x0009c98e) list_medium_line_x2_t2_g3_g2_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x2_t2_g3_g2

0xf050,	// (0x0009c982) list_medium_line_x2_t2_g3_g3_ParamLimits

0xf050,	// (0x0009c982) list_medium_line_x2_t2_g3_g3

0x0002,

0xf2d0,	// (0x0009cc02) list_medium_line_x2_t2_g3_g_ParamLimits

0xf2d0,	// (0x0009cc02) list_medium_line_x2_t2_g3_g

0xfc86,	// (0x0008d5b8) list_medium_line_x2_t2_g3_t1_ParamLimits

0xfc86,	// (0x0008d5b8) list_medium_line_x2_t2_g3_t1

0xf074,	// (0x0009c9a6) list_medium_line_x2_t2_g3_t2_ParamLimits

0xf074,	// (0x0009c9a6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d7,	// (0x0009cc09) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d7,	// (0x0009cc09) list_medium_line_x2_t2_g3_t

0x2f07,	// (0x00090839) main_sp_fs_list_pane_ParamLimits

0x2f07,	// (0x00090839) main_sp_fs_list_pane

0x2f13,	// (0x00090845) sp_fs_scroll_pane_ParamLimits

0x2f13,	// (0x00090845) sp_fs_scroll_pane

0xfc9b,	// (0x0008d5cd) list_medium_line_x2_t3_t1

0xfcab,	// (0x0008d5dd) list_medium_line_x2_t3_t2

0xfcb9,	// (0x0008d5eb) list_medium_line_x2_t3_t3

0x0002,

0xf322,	// (0x0009cc54) list_medium_line_x2_t3_t

0xfcc7,	// (0x0008d5f9) list_medium_line_x3_t4_t1

0xfcd7,	// (0x0008d609) list_medium_line_x3_t4_t2

0xfce5,	// (0x0008d617) list_medium_line_x3_t4_t3

0xf089,	// (0x0009c9bb) list_medium_line_x3_t4_t4

0x0003,

0xf329,	// (0x0009cc5b) list_medium_line_x3_t4_t

0xfcf3,	// (0x0008d625) list_medium_line_x4_t5_t1

0xfd03,	// (0x0008d635) list_medium_line_x4_t5_t2

0xf097,	// (0x0009c9c9) list_medium_line_x4_t5_t3

0xfd11,	// (0x0008d643) list_medium_line_x4_t5_t4

0xf089,	// (0x0009c9bb) list_medium_line_x4_t5_t5

0x0004,

0xf332,	// (0x0009cc64) list_medium_line_x4_t5_t

0xf044,	// (0x0009c976) list_medium_line_t4_g4_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_t4_g4_g1

0xf0a5,	// (0x0009c9d7) list_medium_line_t4_g4_g2_ParamLimits

0xf0a5,	// (0x0009c9d7) list_medium_line_t4_g4_g2

0xfd1f,	// (0x0008d651) list_medium_line_t4_g4_g3_ParamLimits

0xfd1f,	// (0x0008d651) list_medium_line_t4_g4_g3

0xf050,	// (0x0009c982) list_medium_line_t4_g4_g4_ParamLimits

0xf050,	// (0x0009c982) list_medium_line_t4_g4_g4

0x0003,

0xf33d,	// (0x0009cc6f) list_medium_line_t4_g4_g_ParamLimits

0xf33d,	// (0x0009cc6f) list_medium_line_t4_g4_g

0xfd2b,	// (0x0008d65d) list_medium_line_t4_g4_t1_ParamLimits

0xfd2b,	// (0x0008d65d) list_medium_line_t4_g4_t1

0xfd40,	// (0x0008d672) list_medium_line_t4_g4_t2_ParamLimits

0xfd40,	// (0x0008d672) list_medium_line_t4_g4_t2

0xfd56,	// (0x0008d688) list_medium_line_t4_g4_t3_ParamLimits

0xfd56,	// (0x0008d688) list_medium_line_t4_g4_t3

0xf074,	// (0x0009c9a6) list_medium_line_t4_g4_t4_ParamLimits

0xf074,	// (0x0009c9a6) list_medium_line_t4_g4_t4

0x0003,

0xf346,	// (0x0009cc78) list_medium_line_t4_g4_t_ParamLimits

0xf346,	// (0x0009cc78) list_medium_line_t4_g4_t

0x2fe5,	// (0x00090917) chi_dic_find_pane_g1

0x41cd,	// (0x00091aff) main_tport_pane

0x7167,	// (0x00094a99) list_medium_line_plain_t1

0x721b,	// (0x00094b4d) list_medium_line_t2_g2_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_t2_g2_g1

0xab45,	// (0x00098477) list_medium_line_t2_g2_g2_ParamLimits

0xab45,	// (0x00098477) list_medium_line_t2_g2_g2

0x0001,

0xfa07,	// (0x0009d339) list_medium_line_t2_g2_g_ParamLimits

0xfa07,	// (0x0009d339) list_medium_line_t2_g2_g

0xff48,	// (0x0008d87a) list_medium_line_t2_g2_t1_ParamLimits

0xff48,	// (0x0008d87a) list_medium_line_t2_g2_t1

0xff62,	// (0x0008d894) list_medium_line_t2_g2_t2_ParamLimits

0xff62,	// (0x0008d894) list_medium_line_t2_g2_t2

0x0001,

0xfa0c,	// (0x0009d33e) list_medium_line_t2_g2_t_ParamLimits

0xfa0c,	// (0x0009d33e) list_medium_line_t2_g2_t

0x77ae,	// (0x000950e0) aid_sp_fs_list_icon_a_sm

0xabcb,	// (0x000984fd) aid_sp_fs_list_icon_d

0x77b6,	// (0x000950e8) aid_sp_fs_text_primary

0x77bf,	// (0x000950f1) aid_sp_fs_text_secondary

0x77c8,	// (0x000950fa) list_medium_line

0x77c8,	// (0x000950fa) list_medium_line_g2

0x77c8,	// (0x000950fa) list_medium_line_g3

0x77c8,	// (0x000950fa) list_medium_line_plain

0x77c8,	// (0x000950fa) list_medium_line_plain_t2

0x77c8,	// (0x000950fa) list_medium_line_plain_t3

0x77c8,	// (0x000950fa) list_medium_line_right_icon

0x77c8,	// (0x000950fa) list_medium_line_right_iconx2

0x77c8,	// (0x000950fa) list_medium_line_t2

0x77c8,	// (0x000950fa) list_medium_line_t2_g2

0x77c8,	// (0x000950fa) list_medium_line_t2_g3

0x77c8,	// (0x000950fa) list_medium_line_t2_right_icon

0x77c8,	// (0x000950fa) list_medium_line_t2_right_iconx2

0x77c8,	// (0x000950fa) list_medium_line_t3

0x77c8,	// (0x000950fa) list_medium_line_t3_g2

0x77c8,	// (0x000950fa) list_medium_line_t3_g3

0x77c8,	// (0x000950fa) list_medium_line_t3_right_iconx2

0x00f6,	// (0x0008da28) list_medium_line_t4_g4

0x00ff,	// (0x0008da31) list_medium_line_x2

0x00ff,	// (0x0008da31) list_medium_line_x2_t2_g2

0x00ff,	// (0x0008da31) list_medium_line_x2_t2_g3

0x00ff,	// (0x0008da31) list_medium_line_x2_t2_g4

0x00ff,	// (0x0008da31) list_medium_line_x2_t3

0x00ff,	// (0x0008da31) list_medium_line_x2_t3_g2

0x00ff,	// (0x0008da31) list_medium_line_x2_t3_g3

0x00ff,	// (0x0008da31) list_medium_line_x2_t3_g4

0x00ff,	// (0x0008da31) list_medium_line_x2_t4_g2

0x00ff,	// (0x0008da31) list_medium_line_x2_t4_g4

0x77d1,	// (0x00095103) list_medium_line_x3

0x77d1,	// (0x00095103) list_medium_line_x3_t4

0x77d1,	// (0x00095103) list_medium_line_x3_t4_g4

0x00f6,	// (0x0008da28) list_medium_line_x4_t4

0x00f6,	// (0x0008da28) list_medium_line_x4_t4_g7

0x00f6,	// (0x0008da28) list_medium_line_x4_t5

0x0108,	// (0x0008da3a) list_single_fs_dyc_pane_ParamLimits

0x0108,	// (0x0008da3a) list_single_fs_dyc_pane

0xf044,	// (0x0009c976) list_medium_line_x4_t4_g7_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x4_t4_g7_g1

0x0140,	// (0x0008da72) list_medium_line_x4_t4_g7_g2_ParamLimits

0x0140,	// (0x0008da72) list_medium_line_x4_t4_g7_g2

0x014c,	// (0x0008da7e) list_medium_line_x4_t4_g7_g3_ParamLimits

0x014c,	// (0x0008da7e) list_medium_line_x4_t4_g7_g3

0x015b,	// (0x0008da8d) list_medium_line_x4_t4_g7_g4_ParamLimits

0x015b,	// (0x0008da8d) list_medium_line_x4_t4_g7_g4

0x0167,	// (0x0008da99) list_medium_line_x4_t4_g7_g5_ParamLimits

0x0167,	// (0x0008da99) list_medium_line_x4_t4_g7_g5

0x0176,	// (0x0008daa8) list_medium_line_x4_t4_g7_g6_ParamLimits

0x0176,	// (0x0008daa8) list_medium_line_x4_t4_g7_g6

0x0185,	// (0x0008dab7) list_medium_line_x4_t4_g7_g7_ParamLimits

0x0185,	// (0x0008dab7) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbd7,	// (0x0009d509) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbd7,	// (0x0009d509) list_medium_line_x4_t4_g7_g

0x0191,	// (0x0008dac3) list_medium_line_x4_t4_g7_t1_ParamLimits

0x0191,	// (0x0008dac3) list_medium_line_x4_t4_g7_t1

0x01a6,	// (0x0008dad8) list_medium_line_x4_t4_g7_t2_ParamLimits

0x01a6,	// (0x0008dad8) list_medium_line_x4_t4_g7_t2

0x01bb,	// (0x0008daed) list_medium_line_x4_t4_g7_t3_ParamLimits

0x01bb,	// (0x0008daed) list_medium_line_x4_t4_g7_t3

0x01d0,	// (0x0008db02) list_medium_line_x4_t4_g7_t4_ParamLimits

0x01d0,	// (0x0008db02) list_medium_line_x4_t4_g7_t4

0x01e2,	// (0x0008db14) list_medium_line_x4_t4_g7_t5_ParamLimits

0x01e2,	// (0x0008db14) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbe6,	// (0x0009d518) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbe6,	// (0x0009d518) list_medium_line_x4_t4_g7_t

0x01f4,	// (0x0008db26) list_single_dyc_row_pane_ParamLimits

0x01f4,	// (0x0008db26) list_single_dyc_row_pane

0x851f,	// (0x00095e51) call5_gesture_pane_ParamLimits

0x851f,	// (0x00095e51) call5_gesture_pane

0x8575,	// (0x00095ea7) call5_windows_pane_ParamLimits

0x8575,	// (0x00095ea7) call5_windows_pane

0x8623,	// (0x00095f55) call5_swipe_1_pane_cp_ParamLimits

0x8623,	// (0x00095f55) call5_swipe_1_pane_cp

0x862f,	// (0x00095f61) call5_swipe_2_pane_cp_ParamLimits

0x862f,	// (0x00095f61) call5_swipe_2_pane_cp

0xb37b,	// (0x00098cad) call5_image_pane_cp

0x863b,	// (0x00095f6d) popup_call5_audio_first_window_cp_ParamLimits

0x863b,	// (0x00095f6d) popup_call5_audio_first_window_cp

0xe5e1,	// (0x0009bf13) call5_swipe_1_pane_g1_cp_ParamLimits

0xe5e1,	// (0x0009bf13) call5_swipe_1_pane_g1_cp

0xe621,	// (0x0009bf53) call5_swipe_1_pane_g2_cp

0xe5fa,	// (0x0009bf2c) call5_swipe_1_pane_t1_cp_ParamLimits

0xe5fa,	// (0x0009bf2c) call5_swipe_1_pane_t1_cp

0xe5e1,	// (0x0009bf13) call5_swipe_2_pane_g1_cp_ParamLimits

0xe5e1,	// (0x0009bf13) call5_swipe_2_pane_g1_cp

0xe629,	// (0x0009bf5b) call5_swipe_2_pane_g2_cp

0xe631,	// (0x0009bf63) call5_swipe_2_pane_t1_cp_ParamLimits

0xe631,	// (0x0009bf63) call5_swipe_2_pane_t1_cp

0x99e5,	// (0x00097317) main_sp_fs_email_pane

0xe646,	// (0x0009bf78) main_sp_fs_listscroll_pane_te

0x8649,	// (0x00095f7b) popup_sp_fs_action_menu_pane_ParamLimits

0x8649,	// (0x00095f7b) popup_sp_fs_action_menu_pane

0xcbf1,	// (0x0009a523) bg_sp_fs_ctrlbar_pane_g1

0xd19e,	// (0x0009aad0) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1b0,	// (0x0009aae2) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1a7,	// (0x0009aad9) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xcbf1,	// (0x0009a523) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd4,	// (0x0009d606) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc9d0,	// (0x0009a302) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc9d0,	// (0x0009a302) bg_sp_fs_ctrlbar_ddmenu_pane

0xe64f,	// (0x0009bf81) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe64f,	// (0x0009bf81) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe65b,	// (0x0009bf8d) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe65b,	// (0x0009bf8d) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfcdd,	// (0x0009d60f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfcdd,	// (0x0009d60f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe667,	// (0x0009bf99) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe667,	// (0x0009bf99) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xabef,	// (0x00098521) list_medium_line_t2_right_icon_g1

0x029e,	// (0x0008dbd0) list_medium_line_t2_right_icon_t1

0x02ae,	// (0x0008dbe0) list_medium_line_t2_right_icon_t2

0x0001,

0xfce2,	// (0x0009d614) list_medium_line_t2_right_icon_t

0xc7a0,	// (0x0009a0d2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_sp_fs_ctrlbar_pane

0x86dc,	// (0x0009600e) main_sp_fs_ctrlbar_button_pane_cp01

0x86e6,	// (0x00096018) main_sp_fs_ctrlbar_ddmenu_pane

0xe4c8,	// (0x0009bdfa) main_sp_fs_ctrlbar_pane_g1

0xe6b9,	// (0x0009bfeb) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfce7,	// (0x0009d619) main_sp_fs_ctrlbar_pane_g

0xe6c5,	// (0x0009bff7) main_sp_fs_ctrlbar_pane_t1

0x02c0,	// (0x0008dbf2) main_sp_fs_ctrlbar_pane

0x02e4,	// (0x0008dc16) main_sp_fs_listscroll_pane_te_cp01

0x0304,	// (0x0008dc36) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0304,	// (0x0008dc36) popup_sp_fs_action_menu_pane_cp01

0x99e5,	// (0x00097317) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0x99e5,	// (0x00097317) bg_sp_fs_highlight_list_pane_cp01

0x86f0,	// (0x00096022) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x86f0,	// (0x00096022) sp_fs_action_menu_list_gene_pane_g1

0xe6f5,	// (0x0009c027) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe6f5,	// (0x0009c027) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf1,	// (0x0009d623) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf1,	// (0x0009d623) sp_fs_action_menu_list_gene_pane_g

0x86ff,	// (0x00096031) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x86ff,	// (0x00096031) sp_fs_action_menu_list_gene_pane_t1

0x8717,	// (0x00096049) sp_fs_action_menu_list_gene_pane_ParamLimits

0x8717,	// (0x00096049) sp_fs_action_menu_list_gene_pane

0xe702,	// (0x0009c034) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe702,	// (0x0009c034) popup_sp_fs_action_menu_bg_pane

0x873a,	// (0x0009606c) sp_fs_action_menu_list_pane_ParamLimits

0x873a,	// (0x0009606c) sp_fs_action_menu_list_pane

0xe710,	// (0x0009c042) sp_fs_scroll_pane_cp01_ParamLimits

0xe710,	// (0x0009c042) sp_fs_scroll_pane_cp01

0x033a,	// (0x0008dc6c) list_medium_line_plain_t2_t1

0x034a,	// (0x0008dc7c) list_medium_line_plain_t2_t2

0x0001,

0xfcf6,	// (0x0009d628) list_medium_line_plain_t2_t

0x035a,	// (0x0008dc8c) list_medium_line_plain_t3_t1

0x036a,	// (0x0008dc9c) list_medium_line_plain_t3_t2

0x0378,	// (0x0008dcaa) list_medium_line_plain_t3_t3

0x0002,

0xfcfb,	// (0x0009d62d) list_medium_line_plain_t3_t

0xf044,	// (0x0009c976) list_medium_line_x2_t2_g2_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t2_g2_g1

0xf050,	// (0x0009c982) list_medium_line_x2_t2_g2_g2_ParamLimits

0xf050,	// (0x0009c982) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0009cb78) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0009cb78) list_medium_line_x2_t2_g2_g

0xf0b1,	// (0x0009c9e3) list_medium_line_x2_t2_g2_t1_ParamLimits

0xf0b1,	// (0x0009c9e3) list_medium_line_x2_t2_g2_t1

0xf074,	// (0x0009c9a6) list_medium_line_x2_t2_g2_t2_ParamLimits

0xf074,	// (0x0009c9a6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfd02,	// (0x0009d634) list_medium_line_x2_t2_g2_t_ParamLimits

0xfd02,	// (0x0009d634) list_medium_line_x2_t2_g2_t

0xf044,	// (0x0009c976) list_medium_line_x2_t4_g2_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t4_g2_g1

0x0386,	// (0x0008dcb8) list_medium_line_x2_t4_g2_g2_ParamLimits

0x0386,	// (0x0008dcb8) list_medium_line_x2_t4_g2_g2

0x0001,

0xfd07,	// (0x0009d639) list_medium_line_x2_t4_g2_g_ParamLimits

0xfd07,	// (0x0009d639) list_medium_line_x2_t4_g2_g

0x0398,	// (0x0008dcca) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0398,	// (0x0008dcca) list_medium_line_x2_t4_g2_t1

0x03b2,	// (0x0008dce4) list_medium_line_x2_t4_g2_t2_ParamLimits

0x03b2,	// (0x0008dce4) list_medium_line_x2_t4_g2_t2

0x03c8,	// (0x0008dcfa) list_medium_line_x2_t4_g2_t3_ParamLimits

0x03c8,	// (0x0008dcfa) list_medium_line_x2_t4_g2_t3

0xf074,	// (0x0009c9a6) list_medium_line_x2_t4_g2_t4_ParamLimits

0xf074,	// (0x0009c9a6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd0c,	// (0x0009d63e) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd0c,	// (0x0009d63e) list_medium_line_x2_t4_g2_t

0xabf7,	// (0x00098529) list_medium_line_t3_right_iconx2_g1

0xabef,	// (0x00098521) list_medium_line_t3_right_iconx2_g2

0x03dd,	// (0x0008dd0f) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd15,	// (0x0009d647) list_medium_line_t3_right_iconx2_g

0x03e7,	// (0x0008dd19) list_medium_line_t3_right_iconx2_t1

0x03f7,	// (0x0008dd29) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd1c,	// (0x0009d64e) list_medium_line_t3_right_iconx2_t

0xf044,	// (0x0009c976) list_medium_line_x3_t4_g4_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x3_t4_g4_g1

0xf05c,	// (0x0009c98e) list_medium_line_x3_t4_g4_g2_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x3_t4_g4_g2

0xf0a5,	// (0x0009c9d7) list_medium_line_x3_t4_g4_g3_ParamLimits

0xf0a5,	// (0x0009c9d7) list_medium_line_x3_t4_g4_g3

0x0405,	// (0x0008dd37) list_medium_line_x3_t4_g4_g4_ParamLimits

0x0405,	// (0x0008dd37) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd21,	// (0x0009d653) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd21,	// (0x0009d653) list_medium_line_x3_t4_g4_g

0x0411,	// (0x0008dd43) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0411,	// (0x0008dd43) list_medium_line_x3_t4_g4_t1

0x0428,	// (0x0008dd5a) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0428,	// (0x0008dd5a) list_medium_line_x3_t4_g4_t2

0x0443,	// (0x0008dd75) list_medium_line_x3_t4_g4_t3_ParamLimits

0x0443,	// (0x0008dd75) list_medium_line_x3_t4_g4_t3

0x0458,	// (0x0008dd8a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x0458,	// (0x0008dd8a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd2a,	// (0x0009d65c) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd2a,	// (0x0009d65c) list_medium_line_x3_t4_g4_t

0x0475,	// (0x0008dda7) list_single_dyc_row_text_pane_t1_ParamLimits

0x0475,	// (0x0008dda7) list_single_dyc_row_text_pane_t1

0x04be,	// (0x0008ddf0) list_single_dyc_row_text_pane_t2_ParamLimits

0x04be,	// (0x0008ddf0) list_single_dyc_row_text_pane_t2

0x875e,	// (0x00096090) list_single_dyc_row_text_pane_t3_ParamLimits

0x875e,	// (0x00096090) list_single_dyc_row_text_pane_t3

0x0005,

0xfd33,	// (0x0009d665) list_single_dyc_row_text_pane_t_ParamLimits

0xfd33,	// (0x0009d665) list_single_dyc_row_text_pane_t

0x8782,	// (0x000960b4) list_single_dyc_row_pane_g1_ParamLimits

0x8782,	// (0x000960b4) list_single_dyc_row_pane_g1

0x878e,	// (0x000960c0) list_single_dyc_row_pane_g2_ParamLimits

0x878e,	// (0x000960c0) list_single_dyc_row_pane_g2

0x879a,	// (0x000960cc) list_single_dyc_row_pane_g3_ParamLimits

0x879a,	// (0x000960cc) list_single_dyc_row_pane_g3

0x87a6,	// (0x000960d8) list_single_dyc_row_pane_g4_ParamLimits

0x87a6,	// (0x000960d8) list_single_dyc_row_pane_g4

0x0003,

0xfd40,	// (0x0009d672) list_single_dyc_row_pane_g_ParamLimits

0xfd40,	// (0x0009d672) list_single_dyc_row_pane_g

0x87b2,	// (0x000960e4) list_single_dyc_row_text_pane_ParamLimits

0x87b2,	// (0x000960e4) list_single_dyc_row_text_pane

0x9994,	// (0x000972c6) bg_sp_fs_scroll_pane

0xe736,	// (0x0009c068) thumb_sp_fs_scroll_pane

0x721b,	// (0x00094b4d) list_medium_line_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_g1

0x87d1,	// (0x00096103) list_medium_line_t1_ParamLimits

0x87d1,	// (0x00096103) list_medium_line_t1

0xf044,	// (0x0009c976) list_medium_line_x2_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_g1

0xf05c,	// (0x0009c98e) list_medium_line_x2_g2_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x2_g2

0x0001,

0xfd49,	// (0x0009d67b) list_medium_line_x2_g_ParamLimits

0xfd49,	// (0x0009d67b) list_medium_line_x2_g

0x87e6,	// (0x00096118) list_medium_line_x2_t1_ParamLimits

0x87e6,	// (0x00096118) list_medium_line_x2_t1

0xf044,	// (0x0009c976) list_medium_line_x3_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x3_g1

0xf05c,	// (0x0009c98e) list_medium_line_x3_g2_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x3_g2

0x0001,

0xfd49,	// (0x0009d67b) list_medium_line_x3_g_ParamLimits

0xfd49,	// (0x0009d67b) list_medium_line_x3_g

0x87e6,	// (0x00096118) list_medium_line_x3_t1_ParamLimits

0x87e6,	// (0x00096118) list_medium_line_x3_t1

0xe73f,	// (0x0009c071) thumb_sp_fs_scroll_pane_g1

0xe748,	// (0x0009c07a) thumb_sp_fs_scroll_pane_g2

0xe751,	// (0x0009c083) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d680) thumb_sp_fs_scroll_pane_g

0xe73f,	// (0x0009c071) bg_sp_fs_scroll_pane_g1

0xe748,	// (0x0009c07a) bg_sp_fs_scroll_pane_g2

0xe751,	// (0x0009c083) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd4e,	// (0x0009d680) bg_sp_fs_scroll_pane_g

0xf044,	// (0x0009c976) list_medium_line_x2_t3_g4_g1_ParamLimits

0xf044,	// (0x0009c976) list_medium_line_x2_t3_g4_g1

0xf068,	// (0x0009c99a) list_medium_line_x2_t3_g4_g2_ParamLimits

0xf068,	// (0x0009c99a) list_medium_line_x2_t3_g4_g2

0xf05c,	// (0x0009c98e) list_medium_line_x2_t3_g4_g3_ParamLimits

0xf05c,	// (0x0009c98e) list_medium_line_x2_t3_g4_g3

0xf050,	// (0x0009c982) list_medium_line_x2_t3_g4_g4_ParamLimits

0xf050,	// (0x0009c982) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0009cbf4) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0009cbf4) list_medium_line_x2_t3_g4_g

0x05f3,	// (0x0008df25) list_medium_line_x2_t3_g4_t1_ParamLimits

0x05f3,	// (0x0008df25) list_medium_line_x2_t3_g4_t1

0x0609,	// (0x0008df3b) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0609,	// (0x0008df3b) list_medium_line_x2_t3_g4_t2

0xf074,	// (0x0009c9a6) list_medium_line_x2_t3_g4_t3_ParamLimits

0xf074,	// (0x0009c9a6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd55,	// (0x0009d687) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd55,	// (0x0009d687) list_medium_line_x2_t3_g4_t

0x721b,	// (0x00094b4d) list_medium_line_g2_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_g2_g1

0xab45,	// (0x00098477) list_medium_line_g2_g2_ParamLimits

0xab45,	// (0x00098477) list_medium_line_g2_g2

0x0001,

0xfa07,	// (0x0009d339) list_medium_line_g2_g_ParamLimits

0xfa07,	// (0x0009d339) list_medium_line_g2_g

0x87fc,	// (0x0009612e) list_medium_line_g2_t1_ParamLimits

0x87fc,	// (0x0009612e) list_medium_line_g2_t1

0x721b,	// (0x00094b4d) list_medium_line_t3_g2_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_t3_g2_g1

0xab45,	// (0x00098477) list_medium_line_t3_g2_g2_ParamLimits

0xab45,	// (0x00098477) list_medium_line_t3_g2_g2

0x0001,

0xfa07,	// (0x0009d339) list_medium_line_t3_g2_g_ParamLimits

0xfa07,	// (0x0009d339) list_medium_line_t3_g2_g

0x0622,	// (0x0008df54) list_medium_line_t3_g2_t1_ParamLimits

0x0622,	// (0x0008df54) list_medium_line_t3_g2_t1

0x0639,	// (0x0008df6b) list_medium_line_t3_g2_t2_ParamLimits

0x0639,	// (0x0008df6b) list_medium_line_t3_g2_t2

0x064e,	// (0x0008df80) list_medium_line_t3_g2_t3_ParamLimits

0x064e,	// (0x0008df80) list_medium_line_t3_g2_t3

0x0002,

0xfd5c,	// (0x0009d68e) list_medium_line_t3_g2_t_ParamLimits

0xfd5c,	// (0x0009d68e) list_medium_line_t3_g2_t

0xabef,	// (0x00098521) list_medium_line_right_icon_g1

0x8811,	// (0x00096143) list_medium_line_right_icon_t1

0x721b,	// (0x00094b4d) list_medium_line_t2_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_t2_g1

0x0667,	// (0x0008df99) list_medium_line_t2_t1_ParamLimits

0x0667,	// (0x0008df99) list_medium_line_t2_t1

0x0681,	// (0x0008dfb3) list_medium_line_t2_t2_ParamLimits

0x0681,	// (0x0008dfb3) list_medium_line_t2_t2

0x0001,

0xfd63,	// (0x0009d695) list_medium_line_t2_t_ParamLimits

0xfd63,	// (0x0009d695) list_medium_line_t2_t

0x721b,	// (0x00094b4d) list_medium_line_t3_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_t3_g1

0x069a,	// (0x0008dfcc) list_medium_line_t3_t1_ParamLimits

0x069a,	// (0x0008dfcc) list_medium_line_t3_t1

0x06b4,	// (0x0008dfe6) list_medium_line_t3_t2_ParamLimits

0x06b4,	// (0x0008dfe6) list_medium_line_t3_t2

0x06ca,	// (0x0008dffc) list_medium_line_t3_t3_ParamLimits

0x06ca,	// (0x0008dffc) list_medium_line_t3_t3

0x0002,

0xfd68,	// (0x0009d69a) list_medium_line_t3_t_ParamLimits

0xfd68,	// (0x0009d69a) list_medium_line_t3_t

0x721b,	// (0x00094b4d) list_medium_line_g3_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_g3_g1

0xabff,	// (0x00098531) list_medium_line_g3_g2_ParamLimits

0xabff,	// (0x00098531) list_medium_line_g3_g2

0xab45,	// (0x00098477) list_medium_line_g3_g3_ParamLimits

0xab45,	// (0x00098477) list_medium_line_g3_g3

0x0002,

0xfd6f,	// (0x0009d6a1) list_medium_line_g3_g_ParamLimits

0xfd6f,	// (0x0009d6a1) list_medium_line_g3_g

0x881f,	// (0x00096151) list_medium_line_g3_t1_ParamLimits

0x881f,	// (0x00096151) list_medium_line_g3_t1

0x721b,	// (0x00094b4d) list_medium_line_t2_g3_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_t2_g3_g1

0xabff,	// (0x00098531) list_medium_line_t2_g3_g2_ParamLimits

0xabff,	// (0x00098531) list_medium_line_t2_g3_g2

0xab45,	// (0x00098477) list_medium_line_t2_g3_g3_ParamLimits

0xab45,	// (0x00098477) list_medium_line_t2_g3_g3

0x0002,

0xfd6f,	// (0x0009d6a1) list_medium_line_t2_g3_g_ParamLimits

0xfd6f,	// (0x0009d6a1) list_medium_line_t2_g3_g

0x06df,	// (0x0008e011) list_medium_line_t2_g3_t1_ParamLimits

0x06df,	// (0x0008e011) list_medium_line_t2_g3_t1

0x06f9,	// (0x0008e02b) list_medium_line_t2_g3_t2_ParamLimits

0x06f9,	// (0x0008e02b) list_medium_line_t2_g3_t2

0x0001,

0xfd76,	// (0x0009d6a8) list_medium_line_t2_g3_t_ParamLimits

0xfd76,	// (0x0009d6a8) list_medium_line_t2_g3_t

0x721b,	// (0x00094b4d) list_medium_line_t3_g3_g1_ParamLimits

0x721b,	// (0x00094b4d) list_medium_line_t3_g3_g1

0xabff,	// (0x00098531) list_medium_line_t3_g3_g2_ParamLimits

0xabff,	// (0x00098531) list_medium_line_t3_g3_g2

0xab45,	// (0x00098477) list_medium_line_t3_g3_g3_ParamLimits

0xab45,	// (0x00098477) list_medium_line_t3_g3_g3

0x0002,

0xfd6f,	// (0x0009d6a1) list_medium_line_t3_g3_g_ParamLimits

0xfd6f,	// (0x0009d6a1) list_medium_line_t3_g3_g

0x0713,	// (0x0008e045) list_medium_line_t3_g3_t1_ParamLimits

0x0713,	// (0x0008e045) list_medium_line_t3_g3_t1

0x0727,	// (0x0008e059) list_medium_line_t3_g3_t2_ParamLimits

0x0727,	// (0x0008e059) list_medium_line_t3_g3_t2

0x0739,	// (0x0008e06b) list_medium_line_t3_g3_t3_ParamLimits

0x0739,	// (0x0008e06b) list_medium_line_t3_g3_t3

0x0002,

0xfd7b,	// (0x0009d6ad) list_medium_line_t3_g3_t_ParamLimits

0xfd7b,	// (0x0009d6ad) list_medium_line_t3_g3_t

0xabf7,	// (0x00098529) list_medium_line_right_iconx2_g1

0xabef,	// (0x00098521) list_medium_line_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d6b4) list_medium_line_right_iconx2_g

0xac0b,	// (0x0009853d) list_medium_line_right_iconx2_t1

0xabf7,	// (0x00098529) list_medium_line_t2_right_iconx2_g1

0xabef,	// (0x00098521) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd82,	// (0x0009d6b4) list_medium_line_t2_right_iconx2_g

0x074d,	// (0x0008e07f) list_medium_line_t2_right_iconx2_t1

0x075d,	// (0x0008e08f) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd87,	// (0x0009d6b9) list_medium_line_t2_right_iconx2_t

0x076f,	// (0x0008e0a1) list_medium_line_x4_t4_t1

0x077d,	// (0x0008e0af) list_medium_line_x4_t4_t2

0x078d,	// (0x0008e0bf) list_medium_line_x4_t4_t3

0x079d,	// (0x0008e0cf) list_medium_line_x4_t4_t4

0x0003,

0xfd8c,	// (0x0009d6be) list_medium_line_x4_t4_t

0x8877,	// (0x000961a9) tport_appsw_pane_ParamLimits

0x8877,	// (0x000961a9) tport_appsw_pane

0x888f,	// (0x000961c1) tport_contact_pane_ParamLimits

0x888f,	// (0x000961c1) tport_contact_pane

0x88a7,	// (0x000961d9) tport_listscroll_pane_ParamLimits

0x88a7,	// (0x000961d9) tport_listscroll_pane

0x88c1,	// (0x000961f3) cell_tport_appsw_pane_ParamLimits

0x88c1,	// (0x000961f3) cell_tport_appsw_pane

0xd5f3,	// (0x0009af25) tport_appsw_pane_g1_ParamLimits

0xd5f3,	// (0x0009af25) tport_appsw_pane_g1

0xe75a,	// (0x0009c08c) tport_contact_pane_g1

0xe763,	// (0x0009c095) tport_contact_pane_t1

0xe771,	// (0x0009c0a3) tport_contact_pane_t2

0x0001,

0xfd95,	// (0x0009d6c7) tport_contact_pane_t

0xe77f,	// (0x0009c0b1) list_tport_pane

0xe788,	// (0x0009c0ba) scroll_pane_cp_030

0x8913,	// (0x00096245) cell_tport_appsw_pane_g1

0x8923,	// (0x00096255) cell_tport_appsw_pane_t1

0x8931,	// (0x00096263) grid_highlight_pane_cp019

0x8939,	// (0x0009626b) list_tport_double_graphic_pane_ParamLimits

0x8939,	// (0x0009626b) list_tport_double_graphic_pane

0x99e5,	// (0x00097317) list_highlight_pane_cp023_ParamLimits

0x99e5,	// (0x00097317) list_highlight_pane_cp023

0x8946,	// (0x00096278) list_tport_double_graphic_pane_g1_ParamLimits

0x8946,	// (0x00096278) list_tport_double_graphic_pane_g1

0x8953,	// (0x00096285) list_tport_double_graphic_pane_t1_ParamLimits

0x8953,	// (0x00096285) list_tport_double_graphic_pane_t1

0x8968,	// (0x0009629a) list_tport_double_graphic_pane_t2_ParamLimits

0x8968,	// (0x0009629a) list_tport_double_graphic_pane_t2

0x0001,

0xfda1,	// (0x0009d6d3) list_tport_double_graphic_pane_t_ParamLimits

0xfda1,	// (0x0009d6d3) list_tport_double_graphic_pane_t

0x9994,	// (0x000972c6) main_cale_note_pane

0x699c,	// (0x000942ce) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x699c,	// (0x000942ce) cell_vitu2_function_top_wide_pane_cp01

0x8210,	// (0x00095b42) wait_bar_pane_cp05_ParamLimits

0x99e5,	// (0x00097317) listscroll_cmail_pane

0xe799,	// (0x0009c0cb) list_cmail_pane

0x8984,	// (0x000962b6) list_cmail_body_pane

0xe7b0,	// (0x0009c0e2) list_single_cmail_header_caption_pane

0x8997,	// (0x000962c9) list_single_cmail_header_detail_pane_ParamLimits

0x8997,	// (0x000962c9) list_single_cmail_header_detail_pane

0x89c2,	// (0x000962f4) list_single_cmail_header_caption_pane_t1

0x07ad,	// (0x0008e0df) list_single_cmail_header_detail_pane_g1_ParamLimits

0x07ad,	// (0x0008e0df) list_single_cmail_header_detail_pane_g1

0xac19,	// (0x0009854b) list_single_cmail_header_detail_pane_g2_ParamLimits

0xac19,	// (0x0009854b) list_single_cmail_header_detail_pane_g2

0x0002,

0xfda6,	// (0x0009d6d8) list_single_cmail_header_detail_pane_g_ParamLimits

0xfda6,	// (0x0009d6d8) list_single_cmail_header_detail_pane_g

0x07c5,	// (0x0008e0f7) list_single_cmail_header_detail_pane_t1_ParamLimits

0x07c5,	// (0x0008e0f7) list_single_cmail_header_detail_pane_t1

0x0815,	// (0x0008e147) list_single_cmail_header_editor_pane_bg_ParamLimits

0x0815,	// (0x0008e147) list_single_cmail_header_editor_pane_bg

0xe276,	// (0x0009bba8) list_cmail_body_pane_g1

0xe7e1,	// (0x0009c113) list_cmail_body_pane_t1

0xd613,	// (0x0009af45) list_single_cmail_header_editor_pane_bg_g1

0xaca2,	// (0x000985d4) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd623,	// (0x0009af55) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd61b,	// (0x0009af4d) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd858,	// (0x0009b18a) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd643,	// (0x0009af75) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd633,	// (0x0009af65) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd63b,	// (0x0009af6d) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac82,	// (0x000985b4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x89f6,	// (0x00096328) calenote_gesture_pane_ParamLimits

0x89f6,	// (0x00096328) calenote_gesture_pane

0x8a16,	// (0x00096348) calenote_window_pane_ParamLimits

0x8a16,	// (0x00096348) calenote_window_pane

0xe7ef,	// (0x0009c121) popup_note_window_cp01

0x8a32,	// (0x00096364) calenote_swipe_1_pane_ParamLimits

0x8a32,	// (0x00096364) calenote_swipe_1_pane

0x862f,	// (0x00095f61) calenote_swipe_2_pane_ParamLimits

0x862f,	// (0x00095f61) calenote_swipe_2_pane

0xe5e1,	// (0x0009bf13) calenote_swipe_1_pane_g1_ParamLimits

0xe5e1,	// (0x0009bf13) calenote_swipe_1_pane_g1

0xe5ee,	// (0x0009bf20) calenote_swipe_1_pane_g2_ParamLimits

0xe5ee,	// (0x0009bf20) calenote_swipe_1_pane_g2

0x0001,

0xfcca,	// (0x0009d5fc) calenote_swipe_1_pane_g_ParamLimits

0xfcca,	// (0x0009d5fc) calenote_swipe_1_pane_g

0xe801,	// (0x0009c133) calenote_swipe_1_pane_t1_ParamLimits

0xe801,	// (0x0009c133) calenote_swipe_1_pane_t1

0xe5e1,	// (0x0009bf13) calenote_swipe_2_pane_g1_ParamLimits

0xe5e1,	// (0x0009bf13) calenote_swipe_2_pane_g1

0xe820,	// (0x0009c152) calenote_swipe_2_pane_g2_ParamLimits

0xe820,	// (0x0009c152) calenote_swipe_2_pane_g2

0x0001,

0xfdb2,	// (0x0009d6e4) calenote_swipe_2_pane_g_ParamLimits

0xfdb2,	// (0x0009d6e4) calenote_swipe_2_pane_g

0xe82c,	// (0x0009c15e) calenote_swipe_2_pane_t1_ParamLimits

0xe82c,	// (0x0009c15e) calenote_swipe_2_pane_t1

0x9994,	// (0x000972c6) main_mup_navstr_pane

0x55f4,	// (0x00092f26) main_mup3_pane_t7_ParamLimits

0x55f4,	// (0x00092f26) main_mup3_pane_t7

0xa82c,	// (0x0009815e) main_mp4_pane_g6_ParamLimits

0xa82c,	// (0x0009815e) main_mp4_pane_g6

0xa9d0,	// (0x00098302) main_image3_pane_t4_ParamLimits

0xa9d0,	// (0x00098302) main_image3_pane_t4

0x8a47,	// (0x00096379) popup_navstr_preview_pane_ParamLimits

0x8a47,	// (0x00096379) popup_navstr_preview_pane

0x8a57,	// (0x00096389) scroll_navstr_pane_ParamLimits

0x8a57,	// (0x00096389) scroll_navstr_pane

0x9994,	// (0x000972c6) bg_popup_preview_window_pane_cp04

0xe853,	// (0x0009c185) popup_navstr_preview_pane_t1

0x8a6b,	// (0x0009639d) scroll_navstr_pane_g1_ParamLimits

0x8a6b,	// (0x0009639d) scroll_navstr_pane_g1

0x8a7f,	// (0x000963b1) scroll_navstr_pane_t1_ParamLimits

0x8a7f,	// (0x000963b1) scroll_navstr_pane_t1

0xe7f8,	// (0x0009c12a) bg_button_pane_cp014

0xe7f8,	// (0x0009c12a) bg_button_pane_cp030

0x0244,	// (0x0008db76) list_double_fisheye_pane_g4_ParamLimits

0x0244,	// (0x0008db76) list_double_fisheye_pane_g4

0x0250,	// (0x0008db82) list_double_fisheye_pane_g5_ParamLimits

0x0250,	// (0x0008db82) list_double_fisheye_pane_g5

0xe7a1,	// (0x0009c0d3) sp_fs_scroll_pane_cp03

0xe4c8,	// (0x0009bdfa) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe6b9,	// (0x0009bfeb) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfce7,	// (0x0009d619) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe6c5,	// (0x0009bff7) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x897a,	// (0x000962ac) sp_fs_scroll_pane_cp02

0xa2d4,	// (0x00097c06) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa2d4,	// (0x00097c06) popup_sp_fs_calendar_preview_list_single_pane

0x9994,	// (0x000972c6) main_cam6_pano_pane

0x99e5,	// (0x00097317) main_mup3_pane_ParamLimits

0x9994,	// (0x000972c6) main_phacti_pane

0x80e3,	// (0x00095a15) bg_button_pane_cp11

0x80fd,	// (0x00095a2f) main_mobtv_info_pane_g2_ParamLimits

0x80fd,	// (0x00095a2f) main_mobtv_info_pane_g2

0x0001,

0xfc47,	// (0x0009d579) main_mobtv_info_pane_g_ParamLimits

0xfc47,	// (0x0009d579) main_mobtv_info_pane_g

0x82d8,	// (0x00095c0a) sc_clock_pane_t5_ParamLimits

0x82d8,	// (0x00095c0a) sc_clock_pane_t5

0x83b6,	// (0x00095ce8) main_radioblah_pane_g1_ParamLimits

0xe52d,	// (0x0009be5f) main_radioblah_pane_t3_ParamLimits

0xe52d,	// (0x0009be5f) main_radioblah_pane_t3

0xe545,	// (0x0009be77) main_radioblah_pane_t4_ParamLimits

0xe545,	// (0x0009be77) main_radioblah_pane_t4

0x83de,	// (0x00095d10) main_radioblah_text_pane_ParamLimits

0x83de,	// (0x00095d10) main_radioblah_text_pane

0x83f0,	// (0x00095d22) main_radioblah_info_pane_g1_ParamLimits

0x8489,	// (0x00095dbb) main_radioblah_info_pane_t4_ParamLimits

0x8489,	// (0x00095dbb) main_radioblah_info_pane_t4

0x99e5,	// (0x00097317) main_sp_fs_calendar_pane

0x8a96,	// (0x000963c8) main_phacti_pane_g1

0x8a9e,	// (0x000963d0) phacti_note_pane_ParamLimits

0x8a9e,	// (0x000963d0) phacti_note_pane

0xe86a,	// (0x0009c19c) phacti_term_pane_ParamLimits

0xe86a,	// (0x0009c19c) phacti_term_pane

0xe87f,	// (0x0009c1b1) phacti_note_pane_t1_ParamLimits

0xe87f,	// (0x0009c1b1) phacti_note_pane_t1

0x8ab2,	// (0x000963e4) phacti_term_pane_g1

0x8aba,	// (0x000963ec) phacti_term_pane_t1_ParamLimits

0x8aba,	// (0x000963ec) phacti_term_pane_t1

0xe896,	// (0x0009c1c8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe89e,	// (0x0009c1d0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdbc,	// (0x0009d6ee) popup_sp_fs_calendar_preview_list_single_pane_g

0xe8a6,	// (0x0009c1d8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe8a6,	// (0x0009c1d8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe8bc,	// (0x0009c1ee) aid_popup_sp_fs_bg_corner_pane

0xcbf1,	// (0x0009a523) popup_sp_fs_calendar_preview_bg_pane_g1

0x9994,	// (0x000972c6) popup_sp_fs_calendar_preview_bg_pane

0xe8c4,	// (0x0009c1f6) popup_sp_fs_calendar_preview_list_pane

0xc7a0,	// (0x0009a0d2) bg_main_sp_fs_cale_pane_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_main_sp_fs_cale_pane

0x8b4a,	// (0x0009647c) listscroll_cale_mrui_pane_ParamLimits

0x8b4a,	// (0x0009647c) listscroll_cale_mrui_pane

0x8b5f,	// (0x00096491) listscroll_sp_fs_schedule_track_pane

0x8b68,	// (0x0009649a) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8b68,	// (0x0009649a) main_sp_fs_ctrlbar_pane_cp01

0xe8cc,	// (0x0009c1fe) main_sp_fs_ribbon_pane

0x8b7b,	// (0x000964ad) popup_sp_fs_cale_preview_window

0x8b8d,	// (0x000964bf) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8b8d,	// (0x000964bf) list_single_sp_fs_schedule_track_pane

0x99e5,	// (0x00097317) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x99e5,	// (0x00097317) bg_sp_fs_highlight_list_pane_cp03

0x8ba1,	// (0x000964d3) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8ba1,	// (0x000964d3) list_single_sp_fs_schedule_track_pane_g1

0x8bad,	// (0x000964df) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8bad,	// (0x000964df) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdc1,	// (0x0009d6f3) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdc1,	// (0x0009d6f3) list_single_sp_fs_schedule_track_pane_g

0x8bb9,	// (0x000964eb) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8bb9,	// (0x000964eb) list_single_sp_fs_schedule_track_pane_t1

0x8bdb,	// (0x0009650d) sp_fs_schedule_track_pane_ParamLimits

0x8bdb,	// (0x0009650d) sp_fs_schedule_track_pane

0xe8d4,	// (0x0009c206) sp_fs_schedule_track_pane_g1

0xe8dc,	// (0x0009c20e) sp_fs_schedule_track_pane_g2

0xe8e4,	// (0x0009c216) sp_fs_schedule_track_pane_g3

0xe8ec,	// (0x0009c21e) sp_fs_schedule_track_pane_g4

0xe8f4,	// (0x0009c226) sp_fs_schedule_track_pane_g5

0x0004,

0xfdc6,	// (0x0009d6f8) sp_fs_schedule_track_pane_g

0xd613,	// (0x0009af45) bg_sp_fs_schedule_viewer_highlight_g1

0xaca2,	// (0x000985d4) bg_sp_fs_schedule_viewer_highlight_g2

0xd61b,	// (0x0009af4d) bg_sp_fs_schedule_viewer_highlight_g3

0xd623,	// (0x0009af55) bg_sp_fs_schedule_viewer_highlight_g4

0xd858,	// (0x0009b18a) bg_sp_fs_schedule_viewer_highlight_g5

0xd633,	// (0x0009af65) bg_sp_fs_schedule_viewer_highlight_g6

0xd63b,	// (0x0009af6d) bg_sp_fs_schedule_viewer_highlight_g7

0xd643,	// (0x0009af75) bg_sp_fs_schedule_viewer_highlight_g8

0xac82,	// (0x000985b4) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdd1,	// (0x0009d703) bg_sp_fs_schedule_viewer_highlight_g

0x9994,	// (0x000972c6) bg_main_sp_fs_ribbon_pane

0x8bf0,	// (0x00096522) main_sp_fs_ribbon_pane_g1

0xe8fc,	// (0x0009c22e) main_sp_fs_ribbon_pane_t1

0x8bf9,	// (0x0009652b) main_sp_fs_ribbon_pane_t2

0xe90b,	// (0x0009c23d) main_sp_fs_ribbon_pane_t3

0x0002,

0xfde4,	// (0x0009d716) main_sp_fs_ribbon_pane_t

0xe91a,	// (0x0009c24c) main_sp_fs_ribbon_scheduler_pane

0xe922,	// (0x0009c254) bg_main_sp_fs_ribbon_pane_g1

0xe92b,	// (0x0009c25d) bg_main_sp_fs_ribbon_pane_g2

0xe934,	// (0x0009c266) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdeb,	// (0x0009d71d) bg_main_sp_fs_ribbon_pane_g

0xe93c,	// (0x0009c26e) main_sp_fs_ribbon_scheduler_pane_g1

0xe945,	// (0x0009c277) main_sp_fs_ribbon_scheduler_pane_g2

0xe94e,	// (0x0009c280) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfdf2,	// (0x0009d724) main_sp_fs_ribbon_scheduler_pane_g

0xe957,	// (0x0009c289) list_cale_mrui_pane

0x8c08,	// (0x0009653a) sp_fs_scroll_pane_cp07_ParamLimits

0x8c08,	// (0x0009653a) sp_fs_scroll_pane_cp07

0x8c24,	// (0x00096556) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8c24,	// (0x00096556) bg_sp_fs_schedule_viewer_highlight

0xe964,	// (0x0009c296) list_single_sp_fs_schedule_track_pane_cp01

0xe96c,	// (0x0009c29e) list_sp_fs_schedule_track_pane

0xe974,	// (0x0009c2a6) sp_fs_scroll_pane_cp06_ParamLimits

0xe974,	// (0x0009c2a6) sp_fs_scroll_pane_cp06

0xcbf1,	// (0x0009a523) bgmain_sp_fs_calendar_pane_g1

0x082e,	// (0x0008e160) list_single_cale_mrui_pane_ParamLimits

0x082e,	// (0x0008e160) list_single_cale_mrui_pane

0x8c36,	// (0x00096568) list_single_cale_mrui_row_pane_ParamLimits

0x8c36,	// (0x00096568) list_single_cale_mrui_row_pane

0x8c4c,	// (0x0009657e) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8c4c,	// (0x0009657e) list_single_cale_mrui_row_pane_g1

0x8c78,	// (0x000965aa) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8c78,	// (0x000965aa) list_single_cale_mrui_row_pane_t1

0x0843,	// (0x0008e175) list_single_cale_mrui_row_pane_t2_ParamLimits

0x0843,	// (0x0008e175) list_single_cale_mrui_row_pane_t2

0x8c8a,	// (0x000965bc) list_single_cale_mrui_row_pane_t3_ParamLimits

0x8c8a,	// (0x000965bc) list_single_cale_mrui_row_pane_t3

0x8cb9,	// (0x000965eb) list_single_cale_mrui_row_pane_t4_ParamLimits

0x8cb9,	// (0x000965eb) list_single_cale_mrui_row_pane_t4

0x0003,

0xfe00,	// (0x0009d732) list_single_cale_mrui_row_pane_t_ParamLimits

0xfe00,	// (0x0009d732) list_single_cale_mrui_row_pane_t

0x08ab,	// (0x0008e1dd) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x08ab,	// (0x0008e1dd) list_single_cmail_header_editor_pane_bg_cp01

0x08cf,	// (0x0008e201) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x08cf,	// (0x0008e201) list_single_cmail_header_editor_pane_bg_cp02

0x8ce8,	// (0x0009661a) main_radioblah_text_pane_t1_ParamLimits

0x8ce8,	// (0x0009661a) main_radioblah_text_pane_t1

0xe993,	// (0x0009c2c5) cam6_indi_pane_cp01

0xe99b,	// (0x0009c2cd) cam6_mode_pane_cp01

0xe9a3,	// (0x0009c2d5) cam6_pano_pane

0xe9ac,	// (0x0009c2de) cam6_zoom_pane_cp01

0xe9b6,	// (0x0009c2e8) cam6_pano_image_pane

0xe9bf,	// (0x0009c2f1) cam6_pano_pane_g1

0xe276,	// (0x0009bba8) cam6_pano_pane_g2

0xe9c8,	// (0x0009c2fa) cam6_pano_pane_g3

0xe9d1,	// (0x0009c303) cam6_pano_pane_g4

0xd18b,	// (0x0009aabd) cam6_pano_pane_g5

0xe9da,	// (0x0009c30c) cam6_pano_pane_g6

0xe9e2,	// (0x0009c314) cam6_pano_pane_g7

0xe9ea,	// (0x0009c31c) cam6_pano_pane_g8

0xe9f3,	// (0x0009c325) cam6_pano_pane_g9

0x0008,

0xfe09,	// (0x0009d73b) cam6_pano_pane_g

0x9994,	// (0x000972c6) main_browser_tag_pane

0xe84b,	// (0x0009c17d) grid_navstr_albumart_pane

0xe9fe,	// (0x0009c330) cell_navstr_albumart_pane_ParamLimits

0xe9fe,	// (0x0009c330) cell_navstr_albumart_pane

0xea1d,	// (0x0009c34f) cell_navstr_albumart_pane_g1

0xc5ad,	// (0x00099edf) cell_navstr_albumart_pane_g2

0xc5bd,	// (0x00099eef) cell_navstr_albumart_pane_g3

0xc5b5,	// (0x00099ee7) cell_navstr_albumart_pane_g4

0x0003,

0xfe1c,	// (0x0009d74e) cell_navstr_albumart_pane_g

0x8d03,	// (0x00096635) bt_list_pane_ParamLimits

0x8d03,	// (0x00096635) bt_list_pane

0x8d19,	// (0x0009664b) bt_list_pane_t1

0x8d28,	// (0x0009665a) bt_list_pane_t2

0x0001,

0xfe25,	// (0x0009d757) bt_list_pane_t

0x9994,	// (0x000972c6) main_cale_prevew_pane

0x8d37,	// (0x00096669) popup_cale_preview_window_ParamLimits

0x8d37,	// (0x00096669) popup_cale_preview_window

0x99e5,	// (0x00097317) bg_popup_preview_window_pane_cp05_ParamLimits

0x99e5,	// (0x00097317) bg_popup_preview_window_pane_cp05

0xea25,	// (0x0009c357) list_cale_preview_pane_ParamLimits

0xea25,	// (0x0009c357) list_cale_preview_pane

0x8d54,	// (0x00096686) list_double_cale_preview_pane_ParamLimits

0x8d54,	// (0x00096686) list_double_cale_preview_pane

0x8d68,	// (0x0009669a) list_single_cale_preview_pane_ParamLimits

0x8d68,	// (0x0009669a) list_single_cale_preview_pane

0x8d80,	// (0x000966b2) list_single_cale_preview_pane_g1

0x8d88,	// (0x000966ba) list_single_cale_preview_pane_t1_ParamLimits

0x8d88,	// (0x000966ba) list_single_cale_preview_pane_t1

0x8d9d,	// (0x000966cf) list_double_cale_preview_pane_g1

0x8da5,	// (0x000966d7) list_double_cale_preview_pane_t1_ParamLimits

0x8da5,	// (0x000966d7) list_double_cale_preview_pane_t1

0x8dba,	// (0x000966ec) list_double_cale_preview_pane_t2_ParamLimits

0x8dba,	// (0x000966ec) list_double_cale_preview_pane_t2

0x0001,

0xfe2a,	// (0x0009d75c) list_double_cale_preview_pane_t_ParamLimits

0xfe2a,	// (0x0009d75c) list_double_cale_preview_pane_t

0x9994,	// (0x000972c6) main_ezdial_pane

0x99e5,	// (0x00097317) main_sp_fs_email_pane_ParamLimits

0x868f,	// (0x00095fc1) cmail_ddmenu_btn01_pane_ParamLimits

0x868f,	// (0x00095fc1) cmail_ddmenu_btn01_pane

0x86a2,	// (0x00095fd4) cmail_ddmenu_btn02_pane_ParamLimits

0x86a2,	// (0x00095fd4) cmail_ddmenu_btn02_pane

0x86c5,	// (0x00095ff7) cmail_ddmenu_btn03_pane_ParamLimits

0x86c5,	// (0x00095ff7) cmail_ddmenu_btn03_pane

0x02c0,	// (0x0008dbf2) main_sp_fs_ctrlbar_pane_ParamLimits

0x02e4,	// (0x0008dc16) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8984,	// (0x000962b6) list_cmail_body_pane_ParamLimits

0xe7cb,	// (0x0009c0fd) bg_button_pane_cp12

0xe7d4,	// (0x0009c106) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe7d4,	// (0x0009c106) list_single_cmail_header_detail_pane_g3

0x89d2,	// (0x00096304) list_single_cmail_header_detail_pane_t2_ParamLimits

0x89d2,	// (0x00096304) list_single_cmail_header_detail_pane_t2

0x0001,

0xfdad,	// (0x0009d6df) list_single_cmail_header_detail_pane_t_ParamLimits

0xfdad,	// (0x0009d6df) list_single_cmail_header_detail_pane_t

0x8acf,	// (0x00096401) phacti_term_pane_t2_ParamLimits

0x8acf,	// (0x00096401) phacti_term_pane_t2

0x0001,

0xfdb7,	// (0x0009d6e9) phacti_term_pane_t_ParamLimits

0xfdb7,	// (0x0009d6e9) phacti_term_pane_t

0xea31,	// (0x0009c363) aid_size_list_single_double

0x8dd2,	// (0x00096704) popup_ezdial_listscroll_window

0x8dee,	// (0x00096720) popup_number_entry_window_cp01

0xb37b,	// (0x00098cad) bg_popup_call_pane_cp09

0xea3d,	// (0x0009c36f) ezdial_list_pane

0xea45,	// (0x0009c377) scroll_pane_cp23

0xc7a0,	// (0x0009a0d2) bg_button_pane_cp028_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_button_pane_cp028

0x8dfc,	// (0x0009672e) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8dfc,	// (0x0009672e) cmail_ddmenu_btn01_pane_g1

0x8e0b,	// (0x0009673d) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8e0b,	// (0x0009673d) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe2f,	// (0x0009d761) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe2f,	// (0x0009d761) cmail_ddmenu_btn01_pane_g

0xea4d,	// (0x0009c37f) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea4d,	// (0x0009c37f) cmail_ddmenu_btn01_pane_t1

0xc7a0,	// (0x0009a0d2) bg_button_pane_cp029_ParamLimits

0xc7a0,	// (0x0009a0d2) bg_button_pane_cp029

0x8e21,	// (0x00096753) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8e21,	// (0x00096753) cmail_ddmenu_btn02_pane_g1

0x8e3c,	// (0x0009676e) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8e3c,	// (0x0009676e) cmail_ddmenu_btn02_pane_t1

0x99e5,	// (0x00097317) bg_button_pane_cp031_ParamLimits

0x99e5,	// (0x00097317) bg_button_pane_cp031

0x8e21,	// (0x00096753) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8e21,	// (0x00096753) cmail_ddmenu_btn03_pane_g1

0x8e3c,	// (0x0009676e) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8e3c,	// (0x0009676e) cmail_ddmenu_btn03_pane_t1

0x61d4,	// (0x00093b06) cell_dialer2_keypad_pane_t1_ParamLimits

0x61ee,	// (0x00093b20) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x61ee,	// (0x00093b20) cell_dialer2_keypad_pane_t1_copy1

0x7f48,	// (0x0009587a) ncimui_group_button_pane

0x99e5,	// (0x00097317) main_sp_fs_calendar_pane_ParamLimits

0xe7b0,	// (0x0009c0e2) list_single_cmail_header_caption_pane_ParamLimits

0x8b02,	// (0x00096434) aid_recal_txt_sm_pane

0x9994,	// (0x000972c6) mian_recal_day_pane

0x8b7b,	// (0x000964ad) popup_sp_fs_cale_preview_window_ParamLimits

0xea63,	// (0x0009c395) list_recal_day_pane

0x8e7f,	// (0x000967b1) list_single_recal_day_pane_ParamLimits

0x8e7f,	// (0x000967b1) list_single_recal_day_pane

0xea8a,	// (0x0009c3bc) list_single_recal_day_pane_g1_ParamLimits

0xea8a,	// (0x0009c3bc) list_single_recal_day_pane_g1

0x8e91,	// (0x000967c3) list_single_recal_day_pane_g2_ParamLimits

0x8e91,	// (0x000967c3) list_single_recal_day_pane_g2

0x8e9d,	// (0x000967cf) list_single_recal_day_pane_g3_ParamLimits

0x8e9d,	// (0x000967cf) list_single_recal_day_pane_g3

0x08ed,	// (0x0008e21f) list_single_recal_day_pane_g4_ParamLimits

0x08ed,	// (0x0008e21f) list_single_recal_day_pane_g4

0x8ea9,	// (0x000967db) list_single_recal_day_pane_g5_ParamLimits

0x8ea9,	// (0x000967db) list_single_recal_day_pane_g5

0x8eb5,	// (0x000967e7) list_single_recal_day_pane_g6_ParamLimits

0x8eb5,	// (0x000967e7) list_single_recal_day_pane_g6

0x0004,

0xfe3e,	// (0x0009d770) list_single_recal_day_pane_g_ParamLimits

0xfe3e,	// (0x0009d770) list_single_recal_day_pane_g

0x8ec9,	// (0x000967fb) list_single_recal_day_pane_t1

0x8edb,	// (0x0009680d) list_single_recal_day_pane_t2

0x0001,

0xfe49,	// (0x0009d77b) list_single_recal_day_pane_t

0x8eed,	// (0x0009681f) ncimui_query_button_pane_ParamLimits

0x8eed,	// (0x0009681f) ncimui_query_button_pane

0x8efd,	// (0x0009682f) ncimui_query_button_pane_t1_ParamLimits

0x8efd,	// (0x0009682f) ncimui_query_button_pane_t1

0xea96,	// (0x0009c3c8) ncimui_query_button_pane_t2_ParamLimits

0xea96,	// (0x0009c3c8) ncimui_query_button_pane_t2

0x0001,

0xfe4e,	// (0x0009d780) ncimui_query_button_pane_t_ParamLimits

0xfe4e,	// (0x0009d780) ncimui_query_button_pane_t

0x8f10,	// (0x00096842) query_button_pane_ParamLimits

0x8f10,	// (0x00096842) query_button_pane

0x9994,	// (0x000972c6) bg_button_pane_cp0028

0xeaa9,	// (0x0009c3db) query_button_pane_t1

0x41cd,	// (0x00091aff) main_tport_pane_ParamLimits

0x8834,	// (0x00096166) bg_popup_window_pane_cp01_ParamLimits

0x8834,	// (0x00096166) bg_popup_window_pane_cp01

0x884f,	// (0x00096181) heading_pane_cp08_ParamLimits

0x884f,	// (0x00096181) heading_pane_cp08

0x8862,	// (0x00096194) heading_pane_cp07_ParamLimits

0x8862,	// (0x00096194) heading_pane_cp07

0x8913,	// (0x00096245) cell_tport_appsw_pane_g2

0x0002,

0xfd9a,	// (0x0009d6cc) cell_tport_appsw_pane_g

0x378d,	// (0x000910bf) input_candi_list_open_g1

0xae56,	// (0x00098788) list_cale_time_pane_g6_ParamLimits

0xae56,	// (0x00098788) list_cale_time_pane_g6

0x4fd7,	// (0x00092909) aid_size_touch_calib_1_ParamLimits

0x4fd7,	// (0x00092909) aid_size_touch_calib_1

0x4fe9,	// (0x0009291b) aid_size_touch_calib_2_ParamLimits

0x4fe9,	// (0x0009291b) aid_size_touch_calib_2

0x5001,	// (0x00092933) aid_size_touch_calib_3_ParamLimits

0x5001,	// (0x00092933) aid_size_touch_calib_3

0x501f,	// (0x00092951) aid_size_touch_calib_4_ParamLimits

0x501f,	// (0x00092951) aid_size_touch_calib_4

0x5037,	// (0x00092969) main_touch_calib_button_group_pane_ParamLimits

0x5037,	// (0x00092969) main_touch_calib_button_group_pane

0x504f,	// (0x00092981) main_touch_calib_pane_g1_ParamLimits

0x5061,	// (0x00092993) main_touch_calib_pane_g2_ParamLimits

0x5073,	// (0x000929a5) main_touch_calib_pane_g3_ParamLimits

0x5085,	// (0x000929b7) main_touch_calib_pane_g4_ParamLimits

0xf758,	// (0x0009d08a) main_touch_calib_pane_g_ParamLimits

0x5097,	// (0x000929c9) main_touch_calib_pane_t1_ParamLimits

0x50b1,	// (0x000929e3) main_touch_calib_pane_t2_ParamLimits

0x50cb,	// (0x000929fd) main_touch_calib_pane_t3_ParamLimits

0x50df,	// (0x00092a11) main_touch_calib_pane_t4_ParamLimits

0x50f5,	// (0x00092a27) main_touch_calib_pane_t5_ParamLimits

0xf761,	// (0x0009d093) main_touch_calib_pane_t_ParamLimits

0xcf21,	// (0x0009a853) list_single_fp_cale_pane_g3_ParamLimits

0xcf21,	// (0x0009a853) list_single_fp_cale_pane_g3

0x99e5,	// (0x00097317) bg_button_pane_cp012_ParamLimits

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp03_ParamLimits

0x71d1,	// (0x00094b03) cell_vitu2_function_top_pane_g1_ParamLimits

0x99e5,	// (0x00097317) bg_vkb2_func_pane_cp04_ParamLimits

0x7ed6,	// (0x00095808) main_ncimui_button_group_pane_ParamLimits

0x7ed6,	// (0x00095808) main_ncimui_button_group_pane

0x7f36,	// (0x00095868) main_ncimui_pane_t3_ParamLimits

0x7f36,	// (0x00095868) main_ncimui_pane_t3

0xe861,	// (0x0009c193) phacti_button_group_pane

0xea31,	// (0x0009c363) aid_size_list_single_double_ParamLimits

0x8dd2,	// (0x00096704) popup_ezdial_listscroll_window_ParamLimits

0x8dee,	// (0x00096720) popup_number_entry_window_cp01_ParamLimits

0x8f23,	// (0x00096855) phacti_button_pane_ParamLimits

0x8f23,	// (0x00096855) phacti_button_pane

0x9994,	// (0x000972c6) bg_button_pane_cp14

0xeab7,	// (0x0009c3e9) phacti_button_pane_t1

0x8f34,	// (0x00096866) main_touch_calib_button_pane_ParamLimits

0x8f34,	// (0x00096866) main_touch_calib_button_pane

0xa148,	// (0x00097a7a) bg_button_pane_cp18_ParamLimits

0xa148,	// (0x00097a7a) bg_button_pane_cp18

0xeac5,	// (0x0009c3f7) main_touch_calib_button_pane_t1_ParamLimits

0xeac5,	// (0x0009c3f7) main_touch_calib_button_pane_t1

0xeadb,	// (0x0009c40d) main_touch_calib_button_pane_t2_ParamLimits

0xeadb,	// (0x0009c40d) main_touch_calib_button_pane_t2

0x0001,

0xfe53,	// (0x0009d785) main_touch_calib_button_pane_t_ParamLimits

0xfe53,	// (0x0009d785) main_touch_calib_button_pane_t

0x9994,	// (0x000972c6) cell_ncimui_button_pane

0x9994,	// (0x000972c6) bg_button_pane_cp032

0xeaf9,	// (0x0009c42b) cell_ncimui_button_pane_t1

0xa9ae,	// (0x000982e0) image3_infobar_pane_ParamLimits

0xa9ae,	// (0x000982e0) image3_infobar_pane

0x8304,	// (0x00095c36) fs_bigclock_status_pane_ParamLimits

0x8304,	// (0x00095c36) fs_bigclock_status_pane

0x8311,	// (0x00095c43) main_fs_bigclock_clock_pane_ParamLimits

0x8311,	// (0x00095c43) main_fs_bigclock_clock_pane

0x833b,	// (0x00095c6d) main_fs_bigclock_indi_pane_ParamLimits

0x833b,	// (0x00095c6d) main_fs_bigclock_indi_pane

0x8379,	// (0x00095cab) main_fs_bigclock_swipe_pane_ParamLimits

0x8379,	// (0x00095cab) main_fs_bigclock_swipe_pane

0x9994,	// (0x000972c6) main_fs_clock_dumped_data

0xe383,	// (0x0009bcb5) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe383,	// (0x0009bcb5) list_single_fs_bigclock_indicator_pane_g1

0xe3ad,	// (0x0009bcdf) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe3ad,	// (0x0009bcdf) list_single_fs_bigclock_indicator_pane_g2

0xe3c7,	// (0x0009bcf9) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe3c7,	// (0x0009bcf9) list_single_fs_bigclock_indicator_pane_g3

0xe3e1,	// (0x0009bd13) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe3e1,	// (0x0009bd13) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7b,	// (0x0009d5ad) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7b,	// (0x0009d5ad) list_single_fs_bigclock_indicator_pane_g

0xe40c,	// (0x0009bd3e) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe40c,	// (0x0009bd3e) list_single_fs_bigclock_indicator_pane_t1

0xe434,	// (0x0009bd66) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe434,	// (0x0009bd66) list_single_fs_bigclock_indicator_pane_t2

0xe45c,	// (0x0009bd8e) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe45c,	// (0x0009bd8e) list_single_fs_bigclock_indicator_pane_t3

0xe484,	// (0x0009bdb6) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe484,	// (0x0009bdb6) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc86,	// (0x0009d5b8) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc86,	// (0x0009d5b8) list_single_fs_bigclock_indicator_pane_t

0xeb07,	// (0x0009c439) image3_infobar_fav_pane_ParamLimits

0xeb07,	// (0x0009c439) image3_infobar_fav_pane

0xeb17,	// (0x0009c449) image3_infobar_loc_pane_ParamLimits

0xeb17,	// (0x0009c449) image3_infobar_loc_pane

0xeb2d,	// (0x0009c45f) image3_infobar_time_pane_ParamLimits

0xeb2d,	// (0x0009c45f) image3_infobar_time_pane

0xcbf1,	// (0x0009a523) image3_infobar_time_pane_g1

0xeb3d,	// (0x0009c46f) image3_infobar_time_pane_t1

0xcbf1,	// (0x0009a523) image3_infobar_loc_pane_g1

0xeb4b,	// (0x0009c47d) image3_infobar_loc_pane_g2

0x0001,

0xfe58,	// (0x0009d78a) image3_infobar_loc_pane_g

0xeb53,	// (0x0009c485) image3_infobar_loc_pane_t1

0xcbf1,	// (0x0009a523) image3_infobar_fav_pane_g1

0xeb61,	// (0x0009c493) image3_infobar_fav_pane_g2

0x0001,

0xfe5d,	// (0x0009d78f) image3_infobar_fav_pane_g

0xeb69,	// (0x0009c49b) fs_bigclock_status_battery_pane

0xeb72,	// (0x0009c4a4) fs_bigclock_status_signal_pane

0xeb7b,	// (0x0009c4ad) fs_bigclock_status_title_pane

0xeb84,	// (0x0009c4b6) fs_bigclock_status_signal_pane_g1

0xeb8d,	// (0x0009c4bf) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe62,	// (0x0009d794) fs_bigclock_status_signal_pane_g

0xeb95,	// (0x0009c4c7) fs_bigclock_status_battery_pane_g1

0xeb9e,	// (0x0009c4d0) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe67,	// (0x0009d799) fs_bigclock_status_battery_pane_g

0xeba6,	// (0x0009c4d8) fs_bigclock_status_title_pane_t1

0xcbf1,	// (0x0009a523) main_fs_bigclock_clock_pane_g1

0xebb4,	// (0x0009c4e6) main_fs_bigclock_clock_pane_g2

0xebbf,	// (0x0009c4f1) main_fs_bigclock_clock_pane_g3

0xebbf,	// (0x0009c4f1) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe6c,	// (0x0009d79e) main_fs_bigclock_clock_pane_g

0xebcb,	// (0x0009c4fd) main_fs_bigclock_clock_pane_t1

0x8f49,	// (0x0009687b) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe75,	// (0x0009d7a7) main_fs_bigclock_clock_pane_t

0x8f58,	// (0x0009688a) list_single_fs_bigclock_indicator_pane_ParamLimits

0x8f58,	// (0x0009688a) list_single_fs_bigclock_indicator_pane

0x8f69,	// (0x0009689b) list_single_fs_bigclock_pane_ParamLimits

0x8f69,	// (0x0009689b) list_single_fs_bigclock_pane

0xebe2,	// (0x0009c514) main_fs_bigclock_indicator_pane_t1

0xebf1,	// (0x0009c523) list_single_fs_bigclock_pane_g1

0xebf9,	// (0x0009c52b) list_single_fs_bigclock_pane_t1

0xcbf1,	// (0x0009a523) main_fs_bigclock_swipe_pane_g1

0xec3c,	// (0x0009c56e) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe86,	// (0x0009d7b8) main_fs_bigclock_swipe_pane_g

0xec44,	// (0x0009c576) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xec44,	// (0x0009c576) main_fs_bigclock_swipe_pane_t1

0x2f1f,	// (0x00090851) call_type_pane_ParamLimits

0x9994,	// (0x000972c6) main_btmg_pane

0xac25,	// (0x00098557) list_single_cale_mrui_row_pane_g2_ParamLimits

0xac25,	// (0x00098557) list_single_cale_mrui_row_pane_g2

0x0002,

0xfdf9,	// (0x0009d72b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfdf9,	// (0x0009d72b) list_single_cale_mrui_row_pane_g

0x8e6d,	// (0x0009679f) list_recal_vselct_arw_lo_pane

0xea82,	// (0x0009c3b4) list_recal_vselct_arw_up_pane

0x8e75,	// (0x000967a7) list_recal_vselct_pane

0x8fcc,	// (0x000968fe) btmg_button_pane

0x8fd6,	// (0x00096908) main_btmg_pane_g1

0x9994,	// (0x000972c6) bg_button_pane_cp044

0xec61,	// (0x0009c593) btmg_button_pane_t1

0xc78c,	// (0x0009a0be) aid_listscroll_gen

0x99e5,	// (0x00097317) main_cntbar_detail_pane

0xe791,	// (0x0009c0c3) list_cmail_folder_pane

0xe7a1,	// (0x0009c0d3) sp_fs_scroll_pane_cp03_ParamLimits

0xac31,	// (0x00098563) list_single_fs_dyc_pane_cp01_ParamLimits

0xac31,	// (0x00098563) list_single_fs_dyc_pane_cp01

0xec6f,	// (0x0009c5a1) aid_size_cmail_indent

0x8fe0,	// (0x00096912) list_single_dyc_row_pane_cp01

0x9019,	// (0x0009694b) cntbar_detail_list_pane_ParamLimits

0x9019,	// (0x0009694b) cntbar_detail_list_pane

0x906b,	// (0x0009699d) main_cntbar_detail_cont_pane_ParamLimits

0x906b,	// (0x0009699d) main_cntbar_detail_cont_pane

0x2f13,	// (0x00090845) scroll_pane_cp032_ParamLimits

0x2f13,	// (0x00090845) scroll_pane_cp032

0x907f,	// (0x000969b1) cntbar_detail_list_event_pane_ParamLimits

0x907f,	// (0x000969b1) cntbar_detail_list_event_pane

0x902b,	// (0x0009695d) cntbar_detail_list_shct_pane

0xacf0,	// (0x00098622) aid_list_gen

0xec78,	// (0x0009c5aa) aid_scroll

0xec81,	// (0x0009c5b3) aid_size_touch_scroll_bar

0x00ff,	// (0x0008da31) aid_list_double

0xec8a,	// (0x0009c5bc) aid_list_single

0x77c8,	// (0x000950fa) aid_list_single_lg

0x908f,	// (0x000969c1) aid_list_z_g_a_sm

0xac4b,	// (0x0009857d) aid_list_z_g_d

0x9097,	// (0x000969c9) aid_txt_z_prm

0x0905,	// (0x0008e237) aid_txt_z_prm_cp01

0x0913,	// (0x0008e245) aid_txt_z_sec

0x90a5,	// (0x000969d7) main_cntbar_detail_cont_pane_g1_ParamLimits

0x90a5,	// (0x000969d7) main_cntbar_detail_cont_pane_g1

0x90b9,	// (0x000969eb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x90b9,	// (0x000969eb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe8b,	// (0x0009d7bd) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe8b,	// (0x0009d7bd) main_cntbar_detail_cont_pane_g

0xec93,	// (0x0009c5c5) main_cntbar_detail_cont_pane_t1

0xeca1,	// (0x0009c5d3) main_cntbar_detail_cont_pane_t2

0xecaf,	// (0x0009c5e1) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe90,	// (0x0009d7c2) main_cntbar_detail_cont_pane_t

0x90c9,	// (0x000969fb) cell_cntbar_detail_list_shct_pane_ParamLimits

0x90c9,	// (0x000969fb) cell_cntbar_detail_list_shct_pane

0xecbd,	// (0x0009c5ef) cntbar_detail_list_shct_pane_g1

0xecc6,	// (0x0009c5f8) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe97,	// (0x0009d7c9) cntbar_detail_list_shct_pane_g

0x90db,	// (0x00096a0d) cntbar_detail_list_event_pane_g1_ParamLimits

0x90db,	// (0x00096a0d) cntbar_detail_list_event_pane_g1

0x90e7,	// (0x00096a19) cntbar_detail_list_event_pane_g2_ParamLimits

0x90e7,	// (0x00096a19) cntbar_detail_list_event_pane_g2

0x0005,

0xfe9c,	// (0x0009d7ce) cntbar_detail_list_event_pane_g_ParamLimits

0xfe9c,	// (0x0009d7ce) cntbar_detail_list_event_pane_g

0x9155,	// (0x00096a87) cntbar_detail_list_event_pane_t1_ParamLimits

0x9155,	// (0x00096a87) cntbar_detail_list_event_pane_t1

0x916a,	// (0x00096a9c) cntbar_detail_list_event_pane_t2_ParamLimits

0x916a,	// (0x00096a9c) cntbar_detail_list_event_pane_t2

0x0002,

0xfea9,	// (0x0009d7db) cntbar_detail_list_event_pane_t_ParamLimits

0xfea9,	// (0x0009d7db) cntbar_detail_list_event_pane_t

0xcbf1,	// (0x0009a523) cell_cntbar_detail_list_shct_pane_g1

0x32c5,	// (0x00090bf7) navi_pane_mv_g3

0x99e5,	// (0x00097317) main_cntbar_detail_pane_ParamLimits

0x9994,	// (0x000972c6) main_notif_wgt_pane

0xa7c6,	// (0x000980f8) aid_tch_main_mp4_pane_g4

0xa9a4,	// (0x000982d6) popup_slider_window_cp02

0x8e63,	// (0x00096795) list_recal_day_event_pane

0x8fe9,	// (0x0009691b) cntbar_detail_btn_pane_ParamLimits

0x8fe9,	// (0x0009691b) cntbar_detail_btn_pane

0x9001,	// (0x00096933) cntbar_detail_btn_pane_cp01_ParamLimits

0x9001,	// (0x00096933) cntbar_detail_btn_pane_cp01

0x902b,	// (0x0009695d) cntbar_detail_list_shct_pane_ParamLimits

0x903b,	// (0x0009696d) cntbar_detail_pane_g1_ParamLimits

0x903b,	// (0x0009696d) cntbar_detail_pane_g1

0x904f,	// (0x00096981) cntbar_detail_pane_t1_ParamLimits

0x904f,	// (0x00096981) cntbar_detail_pane_t1

0x90f3,	// (0x00096a25) cntbar_detail_list_event_pane_g3_ParamLimits

0x90f3,	// (0x00096a25) cntbar_detail_list_event_pane_g3

0x910b,	// (0x00096a3d) cntbar_detail_list_event_pane_g4_ParamLimits

0x910b,	// (0x00096a3d) cntbar_detail_list_event_pane_g4

0x9123,	// (0x00096a55) cntbar_detail_list_event_pane_g5_ParamLimits

0x9123,	// (0x00096a55) cntbar_detail_list_event_pane_g5

0x913b,	// (0x00096a6d) cntbar_detail_list_event_pane_g6_ParamLimits

0x913b,	// (0x00096a6d) cntbar_detail_list_event_pane_g6

0x917f,	// (0x00096ab1) cntbar_detail_list_event_pane_t3_ParamLimits

0x917f,	// (0x00096ab1) cntbar_detail_list_event_pane_t3

0x9191,	// (0x00096ac3) popup_notif_wgt_window_ParamLimits

0x9191,	// (0x00096ac3) popup_notif_wgt_window

0x91aa,	// (0x00096adc) popup_submenu_window_cp01_ParamLimits

0x91aa,	// (0x00096adc) popup_submenu_window_cp01

0xb37b,	// (0x00098cad) bg_popup_window_pane_cp10

0xeccf,	// (0x0009c601) listscroll_notif_wgt_pane

0xece1,	// (0x0009c613) list_notif_wgt_window

0xecea,	// (0x0009c61c) scroll_pane_cp033

0x91be,	// (0x00096af0) list_notif_wgt_row_pane_ParamLimits

0x91be,	// (0x00096af0) list_notif_wgt_row_pane

0xecf3,	// (0x0009c625) aid_size_list_notif_wgt_del

0xed00,	// (0x0009c632) list_notif_wgt_row_pane_g1

0xed0c,	// (0x0009c63e) list_notif_wgt_row_pane_g2

0xed20,	// (0x0009c652) list_notif_wgt_row_pane_g3

0x0002,

0xfeb0,	// (0x0009d7e2) list_notif_wgt_row_pane_g

0xed2d,	// (0x0009c65f) list_notif_wgt_row_pane_t1

0xed43,	// (0x0009c675) list_notif_wgt_row_pane_t2

0xed55,	// (0x0009c687) list_notif_wgt_row_pane_t3

0x0002,

0xfeb7,	// (0x0009d7e9) list_notif_wgt_row_pane_t

0xd860,	// (0x0009b192) list_recal_day_event_pane_g1

0xed67,	// (0x0009c699) list_recal_day_event_pane_t1

0x9994,	// (0x000972c6) bg_button_pane_cp045

0xed76,	// (0x0009c6a8) cntbar_detail_btn_pane_t1

0xc7a0,	// (0x0009a0d2) main_callh_pane_ParamLimits

0xc7a0,	// (0x0009a0d2) main_callh_pane

0x9994,	// (0x000972c6) main_coverflow0_pane

0x9994,	// (0x000972c6) main_wgtman_pane

0x8391,	// (0x00095cc3) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8391,	// (0x00095cc3) main_fs_bigclock_unlock_btn_pane

0x890b,	// (0x0009623d) bg_button_pane_cp16

0x891b,	// (0x0009624d) cell_tport_appsw_pane_g3

0x91ce,	// (0x00096b00) cf0_flow_pane_ParamLimits

0x91ce,	// (0x00096b00) cf0_flow_pane

0xed84,	// (0x0009c6b6) listscroll_cf0_pane

0xed8f,	// (0x0009c6c1) main_cf0_pane_g1

0x91e3,	// (0x00096b15) main_cf0_pane_t1_ParamLimits

0x91e3,	// (0x00096b15) main_cf0_pane_t1

0x91fa,	// (0x00096b2c) main_cf0_pane_t2_ParamLimits

0x91fa,	// (0x00096b2c) main_cf0_pane_t2

0x0001,

0xfec3,	// (0x0009d7f5) main_cf0_pane_t_ParamLimits

0xfec3,	// (0x0009d7f5) main_cf0_pane_t

0xeda1,	// (0x0009c6d3) scroll_pane_cp11

0x9211,	// (0x00096b43) cf0_flow_pane_g1

0x921d,	// (0x00096b4f) cf0_flow_pane_g2

0x0001,

0xfec8,	// (0x0009d7fa) cf0_flow_pane_g

0x9229,	// (0x00096b5b) cf0_flow_pane_t1

0x9994,	// (0x000972c6) main_call6_pane

0x9994,	// (0x000972c6) main_calllock_pane

0x923b,	// (0x00096b6d) call6_btn_grp_pane_ParamLimits

0x923b,	// (0x00096b6d) call6_btn_grp_pane

0x9255,	// (0x00096b87) call6_pane_g1_ParamLimits

0x9255,	// (0x00096b87) call6_pane_g1

0x926b,	// (0x00096b9d) popup_call6_1st_window_ParamLimits

0x926b,	// (0x00096b9d) popup_call6_1st_window

0x927c,	// (0x00096bae) popup_call6_2nd_window_ParamLimits

0x927c,	// (0x00096bae) popup_call6_2nd_window

0x928d,	// (0x00096bbf) cell_call6_btn_pane_ParamLimits

0x928d,	// (0x00096bbf) cell_call6_btn_pane

0xb37b,	// (0x00098cad) bg_popup_call2_in_pane_cp03

0xedac,	// (0x0009c6de) popup_call6_1st_window_g1

0xedb4,	// (0x0009c6e6) popup_call6_1st_window_g2

0xedbc,	// (0x0009c6ee) popup_call6_1st_window_g3

0x0002,

0xfecd,	// (0x0009d7ff) popup_call6_1st_window_g

0xedc4,	// (0x0009c6f6) popup_call6_1st_window_t1

0xedd3,	// (0x0009c705) popup_call6_1st_window_t2

0xede3,	// (0x0009c715) popup_call6_1st_window_t3

0x0002,

0xfed4,	// (0x0009d806) popup_call6_1st_window_t

0xb37b,	// (0x00098cad) bg_popup_call2_in_pane_cp04

0xedac,	// (0x0009c6de) popup_call6_2nd_window_g1

0xedb4,	// (0x0009c6e6) popup_call6_2nd_window_g2

0xedbc,	// (0x0009c6ee) popup_call6_2nd_window_g3

0x0002,

0xfecd,	// (0x0009d7ff) popup_call6_2nd_window_g

0xedc4,	// (0x0009c6f6) popup_call6_2nd_window_t1

0x9994,	// (0x000972c6) bg_button_pane_cp15

0xedf3,	// (0x0009c725) cell_call6_btn_pane_g1

0xedfc,	// (0x0009c72e) cell_call6_btn_pane_t1

0x92a1,	// (0x00096bd3) listscroll_wgtman_pane_ParamLimits

0x92a1,	// (0x00096bd3) listscroll_wgtman_pane

0x92c2,	// (0x00096bf4) wgtman_btn_pane_ParamLimits

0x92c2,	// (0x00096bf4) wgtman_btn_pane

0xb241,	// (0x00098b73) aid_scroll_copy1

0xee0b,	// (0x0009c73d) list_wgtman_pane

0x9305,	// (0x00096c37) wgtman_btn_pane_g1_ParamLimits

0x9305,	// (0x00096c37) wgtman_btn_pane_g1

0x9331,	// (0x00096c63) wgtman_btn_pane_t1_ParamLimits

0x9331,	// (0x00096c63) wgtman_btn_pane_t1

0xee15,	// (0x0009c747) wgtman_btn_pane_t2_ParamLimits

0xee15,	// (0x0009c747) wgtman_btn_pane_t2

0x0001,

0xfedb,	// (0x0009d80d) wgtman_btn_pane_t_ParamLimits

0xfedb,	// (0x0009d80d) wgtman_btn_pane_t

0xab25,	// (0x00098457) listrow_wgtman_pane_ParamLimits

0xab25,	// (0x00098457) listrow_wgtman_pane

0x936e,	// (0x00096ca0) listrow_wgtman_pane_g1

0x937b,	// (0x00096cad) listrow_wgtman_pane_g2

0x0001,

0xfee0,	// (0x0009d812) listrow_wgtman_pane_g

0x0921,	// (0x0008e253) listrow_wgtman_pane_t1

0x0939,	// (0x0008e26b) listrow_wgtman_pane_t2

0x0001,

0xfee5,	// (0x0009d817) listrow_wgtman_pane_t

0x095f,	// (0x0008e291) wait_bar_pane_cp09

0xee2c,	// (0x0009c75e) main_calllock_btn_pane

0xee36,	// (0x0009c768) main_calllock_pane_g1

0x9994,	// (0x000972c6) bg_button_pane_cp17

0xee42,	// (0x0009c774) main_calllock_btn_pane_g1

0xee4b,	// (0x0009c77d) main_calllock_btn_pane_t1

0x9994,	// (0x000972c6) main_dialer3_pane

0x9994,	// (0x000972c6) main_fmrd2_pane

0xcbf1,	// (0x0009a523) main_fs_bigclock_unlock_btn_pane_g1

0xee62,	// (0x0009c794) main_fs_bigclock_unlock_btn_pane_t1

0x9399,	// (0x00096ccb) area_fmrd2_info_pane_ParamLimits

0x9399,	// (0x00096ccb) area_fmrd2_info_pane

0x93a8,	// (0x00096cda) area_fmrd2_visual_pane_ParamLimits

0x93a8,	// (0x00096cda) area_fmrd2_visual_pane

0x93b6,	// (0x00096ce8) fmrd2_indi_pane_ParamLimits

0x93b6,	// (0x00096ce8) fmrd2_indi_pane

0x93c3,	// (0x00096cf5) area_fmrd2_visual_pane_g1

0x93cb,	// (0x00096cfd) area_fmrd2_visual_pane_t1

0x93db,	// (0x00096d0d) area_fmrd2_visual_pane_t2

0x93eb,	// (0x00096d1d) area_fmrd2_visual_pane_t3

0x0002,

0xfeef,	// (0x0009d821) area_fmrd2_visual_pane_t

0x93fb,	// (0x00096d2d) area_fmrd2_info_pane_g1

0x9403,	// (0x00096d35) area_fmrd2_info_pane_t1

0x9413,	// (0x00096d45) area_fmrd2_info_pane_t2

0x9423,	// (0x00096d55) area_fmrd2_info_pane_t3

0x9433,	// (0x00096d65) area_fmrd2_info_pane_t4

0x0003,

0xfef6,	// (0x0009d828) area_fmrd2_info_pane_t

0x9443,	// (0x00096d75) fmrd2_indi_pane_t1

0x9453,	// (0x00096d85) fmrd2_indi_pane_t2

0x9463,	// (0x00096d95) fmrd2_indi_pane_t3

0x0002,

0xfeff,	// (0x0009d831) fmrd2_indi_pane_t

0xe3f0,	// (0x0009bd22) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe3f0,	// (0x0009bd22) list_single_fs_bigclock_indicator_pane_g5

0xe4a0,	// (0x0009bdd2) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe4a0,	// (0x0009bdd2) list_single_fs_bigclock_indicator_pane_t5

0x8ae4,	// (0x00096416) aid_cell_bcale_month_pane_ParamLimits

0x8ae4,	// (0x00096416) aid_cell_bcale_month_pane

0x8b0b,	// (0x0009643d) bcale_month_pane_ParamLimits

0x8b0b,	// (0x0009643d) bcale_month_pane

0x8b2d,	// (0x0009645f) bcale_preview_pane_ParamLimits

0x8b2d,	// (0x0009645f) bcale_preview_pane

0xebf9,	// (0x0009c52b) list_single_fs_bigclock_pane_t1_ParamLimits

0xec18,	// (0x0009c54a) list_single_fs_bigclock_pane_t2_ParamLimits

0xec18,	// (0x0009c54a) list_single_fs_bigclock_pane_t2

0x0001,

0xfe81,	// (0x0009d7b3) list_single_fs_bigclock_pane_t_ParamLimits

0xfe81,	// (0x0009d7b3) list_single_fs_bigclock_pane_t

0xee5a,	// (0x0009c78c) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfeea,	// (0x0009d81c) main_fs_bigclock_unlock_btn_pane_g

0x9473,	// (0x00096da5) aid_dia3_key_size_ParamLimits

0x9473,	// (0x00096da5) aid_dia3_key_size

0x9482,	// (0x00096db4) aid_dia3_listrow_size_ParamLimits

0x9482,	// (0x00096db4) aid_dia3_listrow_size

0x9497,	// (0x00096dc9) dia3_keypad_fun_pane_ParamLimits

0x9497,	// (0x00096dc9) dia3_keypad_fun_pane

0x94b3,	// (0x00096de5) dia3_keypad_num_pane_ParamLimits

0x94b3,	// (0x00096de5) dia3_keypad_num_pane

0x94cc,	// (0x00096dfe) dia3_listscroll_pane_ParamLimits

0x94cc,	// (0x00096dfe) dia3_listscroll_pane

0x94df,	// (0x00096e11) dia3_numentry_pane_ParamLimits

0x94df,	// (0x00096e11) dia3_numentry_pane

0xee70,	// (0x0009c7a2) dia3_list_pane

0xee7b,	// (0x0009c7ad) scroll_pane_cp12

0x9994,	// (0x000972c6) bg_dia3_numentry_pane

0x94f3,	// (0x00096e25) dia3_numentry_pane_t1

0x9502,	// (0x00096e34) cell_dia3_key_num_pane

0x950a,	// (0x00096e3c) cell_dia3_key0_fun_pane_ParamLimits

0x950a,	// (0x00096e3c) cell_dia3_key0_fun_pane

0x951e,	// (0x00096e50) cell_dia3_key1_fun_pane_ParamLimits

0x951e,	// (0x00096e50) cell_dia3_key1_fun_pane

0x9536,	// (0x00096e68) dia3_listrow_pane

0xe0ee,	// (0x0009ba20) bg_dia3_numentry_pane_g1

0x9994,	// (0x000972c6) bg_button_pane_cp21

0xee86,	// (0x0009c7b8) cell_dia3_key_num_pane_t1

0xee94,	// (0x0009c7c6) cell_dia3_key_num_pane_t2

0xeea3,	// (0x0009c7d5) cell_dia3_key_num_pane_t3

0xeeb2,	// (0x0009c7e4) cell_dia3_key_num_pane_t4

0x0003,

0xff06,	// (0x0009d838) cell_dia3_key_num_pane_t

0x9994,	// (0x000972c6) bg_button_pane_cp19

0x9548,	// (0x00096e7a) cell_dia3_key0_fun_pane_g1

0x9994,	// (0x000972c6) bg_button_pane_cp20

0x9550,	// (0x00096e82) cell_dia3_key1_fun_pane_g1

0x9558,	// (0x00096e8a) area_left_week_number_pane

0x9566,	// (0x00096e98) area_top_day_name_pane

0x9579,	// (0x00096eab) frame_month_view_pane

0xeec1,	// (0x0009c7f3) grid_month_view_pane

0x958e,	// (0x00096ec0) cell_top_day_name_pane_ParamLimits

0x958e,	// (0x00096ec0) cell_top_day_name_pane

0x95bd,	// (0x00096eef) cell_area_left_week_number_pane_ParamLimits

0x95bd,	// (0x00096eef) cell_area_left_week_number_pane

0x95d1,	// (0x00096f03) cell_month_view_pane_ParamLimits

0x95d1,	// (0x00096f03) cell_month_view_pane

0xeecf,	// (0x0009c801) frm_month_g1

0x9600,	// (0x00096f32) frm_month_g2

0x9613,	// (0x00096f45) frm_month_g3

0x9626,	// (0x00096f58) frm_month_g4

0x9639,	// (0x00096f6b) frm_month_g5

0x964c,	// (0x00096f7e) frm_month_g6

0x965f,	// (0x00096f91) frm_month_g7

0xeedc,	// (0x0009c80e) frm_month_g8

0x9674,	// (0x00096fa6) frm_month_g9

0x9684,	// (0x00096fb6) frm_month_g10

0x9694,	// (0x00096fc6) frm_month_g11

0x96a4,	// (0x00096fd6) frm_month_g12

0x96b6,	// (0x00096fe8) frm_month_g13

0x96ca,	// (0x00096ffc) frm_month_g14

0x96de,	// (0x00097010) frm_month_g15

0x96f2,	// (0x00097024) frm_month_g16

0x000f,

0xff0f,	// (0x0009d841) frm_month_g

0xeee9,	// (0x0009c81b) cell_top_day_name_pane_t1

0x9706,	// (0x00097038) cell_area_left_week_number_pane_g1

0x9712,	// (0x00097044) cell_area_left_week_number_pane_t1

0xce21,	// (0x0009a753) cell_month_view_pane_g1

0x9725,	// (0x00097057) cell_month_view_pane_t1

0x9994,	// (0x000972c6) main_fps_pane

0xe681,	// (0x0009bfb3) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe681,	// (0x0009bfb3) cmail_ddmenu_btn02_pane_cp1

0xe69d,	// (0x0009bfcf) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe69d,	// (0x0009bfcf) cmail_ddmenu_btn02_pane_cp2

0x8e30,	// (0x00096762) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8e30,	// (0x00096762) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe34,	// (0x0009d766) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe34,	// (0x0009d766) cmail_ddmenu_btn02_pane_g

0x8e51,	// (0x00096783) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8e51,	// (0x00096783) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe39,	// (0x0009d76b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe39,	// (0x0009d76b) cmail_ddmenu_btn02_pane_t

0x9738,	// (0x0009706a) fps_text_pane_ParamLimits

0x9738,	// (0x0009706a) fps_text_pane

0x974f,	// (0x00097081) main_fps_pane_g1_ParamLimits

0x974f,	// (0x00097081) main_fps_pane_g1

0x9767,	// (0x00097099) wait_bar_pane_cp010_ParamLimits

0x9767,	// (0x00097099) wait_bar_pane_cp010

0x977a,	// (0x000970ac) fps_text_pane_t1_ParamLimits

0x977a,	// (0x000970ac) fps_text_pane_t1

0xd5b0,	// (0x0009aee2) cam4_image_uncrop_pane_g1

0xd5b9,	// (0x0009aeeb) cam4_image_uncrop_pane_g2

0x66c0,	// (0x00093ff2) cam4_image_uncrop_pane_g3

0x66c9,	// (0x00093ffb) cam4_image_uncrop_pane_g4

0x0003,

0xf8f5,	// (0x0009d227) cam4_image_uncrop_pane_g

0x9536,	// (0x00096e68) dia3_listrow_pane_ParamLimits

0x9994,	// (0x000972c6) main_phob2_pane

0x88da,	// (0x0009620c) cell_tport_appsw_pane_cp02_ParamLimits

0x88da,	// (0x0009620c) cell_tport_appsw_pane_cp02

0x88ee,	// (0x00096220) cell_tport_appsw_pane_cp03_ParamLimits

0x88ee,	// (0x00096220) cell_tport_appsw_pane_cp03

0x9994,	// (0x000972c6) phob2_contact_card_pane

0x9994,	// (0x000972c6) phob2_listscroll_pane

0xeefc,	// (0x0009c82e) phob2_list_pane

0xef04,	// (0x0009c836) scroll_pane_cp034

0x9792,	// (0x000970c4) phob2_cc_data_pane_ParamLimits

0x9792,	// (0x000970c4) phob2_cc_data_pane

0x97b3,	// (0x000970e5) phob2_cc_listscroll_pane_ParamLimits

0x97b3,	// (0x000970e5) phob2_cc_listscroll_pane

0x97d5,	// (0x00097107) list_double_large_graphic_phob2_pane_ParamLimits

0x97d5,	// (0x00097107) list_double_large_graphic_phob2_pane

0x97e9,	// (0x0009711b) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x97e9,	// (0x0009711b) list_double_large_graphic_phob2_pane_g1

0x0971,	// (0x0008e2a3) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x0971,	// (0x0008e2a3) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff30,	// (0x0009d862) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff30,	// (0x0009d862) list_double_large_graphic_phob2_pane_g

0x097d,	// (0x0008e2af) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x097d,	// (0x0008e2af) list_double_large_graphic_phob2_pane_t1

0x0992,	// (0x0008e2c4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x0992,	// (0x0008e2c4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff35,	// (0x0009d867) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff35,	// (0x0009d867) list_double_large_graphic_phob2_pane_t

0x9994,	// (0x000972c6) list_highlight_pane_cp024

0x97ff,	// (0x00097131) phob2_cc_button_pane

0x9807,	// (0x00097139) phob2_cc_data_pane_g1_ParamLimits

0x9807,	// (0x00097139) phob2_cc_data_pane_g1

0x981d,	// (0x0009714f) phob2_cc_data_pane_g2_ParamLimits

0x981d,	// (0x0009714f) phob2_cc_data_pane_g2

0x0001,

0xff3a,	// (0x0009d86c) phob2_cc_data_pane_g_ParamLimits

0xff3a,	// (0x0009d86c) phob2_cc_data_pane_g

0x982d,	// (0x0009715f) phob2_cc_data_pane_t1_ParamLimits

0x982d,	// (0x0009715f) phob2_cc_data_pane_t1

0x9845,	// (0x00097177) phob2_cc_data_pane_t2_ParamLimits

0x9845,	// (0x00097177) phob2_cc_data_pane_t2

0x985f,	// (0x00097191) phob2_cc_data_pane_t3_ParamLimits

0x985f,	// (0x00097191) phob2_cc_data_pane_t3

0x0002,

0xff3f,	// (0x0009d871) phob2_cc_data_pane_t_ParamLimits

0xff3f,	// (0x0009d871) phob2_cc_data_pane_t

0xef0c,	// (0x0009c83e) phob2_cc_list_pane_ParamLimits

0xef0c,	// (0x0009c83e) phob2_cc_list_pane

0xd909,	// (0x0009b23b) scroll_pane_cp035_ParamLimits

0xd909,	// (0x0009b23b) scroll_pane_cp035

0x99e5,	// (0x00097317) bg_button_pane_cp033

0xef18,	// (0x0009c84a) phob2_cc_button_pane_g1

0xef24,	// (0x0009c856) phob2_cc_button_pane_t1

0xef39,	// (0x0009c86b) phob2_cc_button_pane_t2

0x0001,

0xff46,	// (0x0009d878) phob2_cc_button_pane_t

0x9879,	// (0x000971ab) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9879,	// (0x000971ab) list_double_large_graphic_phob2_cc_pane

0x988d,	// (0x000971bf) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x988d,	// (0x000971bf) list_double_large_graphic_phob2_cc_pane_g1

0x09a4,	// (0x0008e2d6) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x09a4,	// (0x0008e2d6) list_double_large_graphic_phob2_cc_pane_g2

0x09b0,	// (0x0008e2e2) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x09b0,	// (0x0008e2e2) list_double_large_graphic_phob2_cc_pane_g3

0x09bc,	// (0x0008e2ee) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x09bc,	// (0x0008e2ee) list_double_large_graphic_phob2_cc_pane_g4

0x09c8,	// (0x0008e2fa) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x09c8,	// (0x0008e2fa) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff4b,	// (0x0009d87d) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff4b,	// (0x0009d87d) list_double_large_graphic_phob2_cc_pane_g

0x09d4,	// (0x0008e306) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x09d4,	// (0x0008e306) list_double_large_graphic_phob2_cc_pane_t1

0x09fd,	// (0x0008e32f) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x09fd,	// (0x0008e32f) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff56,	// (0x0009d888) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff56,	// (0x0009d888) list_double_large_graphic_phob2_cc_pane_t

0xef4b,	// (0x0009c87d) list_highlight_pane_cp025_ParamLimits

0xef4b,	// (0x0009c87d) list_highlight_pane_cp025

0x99e5,	// (0x00097317) bg_button_pane_cp033_ParamLimits

0xef18,	// (0x0009c84a) phob2_cc_button_pane_g1_ParamLimits

0xef24,	// (0x0009c856) phob2_cc_button_pane_t1_ParamLimits

0xef39,	// (0x0009c86b) phob2_cc_button_pane_t2_ParamLimits

0xff46,	// (0x0009d878) phob2_cc_button_pane_t_ParamLimits

0x0c7a,	// (0x0008e5ac) popup_wgtman_window

0xd731,	// (0x0009b063) scroll_pane_cp038

0x92e7,	// (0x00096c19) wgtman_btn_pane_cp_01_ParamLimits

0x92e7,	// (0x00096c19) wgtman_btn_pane_cp_01

0xef59,	// (0x0009c88b) wgtman_content_pane

0xef62,	// (0x0009c894) wgtman_heading_pane

0x9994,	// (0x000972c6) bg_heading_pane_cp02

0xef6b,	// (0x0009c89d) wgtman_heading_pane_g1

0xef73,	// (0x0009c8a5) wgtman_heading_pane_t1

0xef81,	// (0x0009c8b3) scroll_pane_cp036

0xef89,	// (0x0009c8bb) wgtman_list_pane

0xef91,	// (0x0009c8c3) wgtman_list_pane_t1_ParamLimits

0xef91,	// (0x0009c8c3) wgtman_list_pane_t1

0xaa02,	// (0x00098334) cam4_grid_pane

0xff80,	// (0x0008d8b2) bg_button_pane_cp015_ParamLimits

0x7380,	// (0x00094cb2) bg_button_pane_cp016_ParamLimits

0x7393,	// (0x00094cc5) bg_button_pane_cp017_ParamLimits

0xffc8,	// (0x0008d8fa) popup_vitu2_query_window_g3_ParamLimits

0xffc8,	// (0x0008d8fa) popup_vitu2_query_window_g3

0x0043,	// (0x0008d975) popup_vitu2_query_window_t6_ParamLimits

0x0043,	// (0x0008d975) popup_vitu2_query_window_t6

0x006e,	// (0x0008d9a0) popup_vitu2_query_window_t7_ParamLimits

0x006e,	// (0x0008d9a0) popup_vitu2_query_window_t7

0xd5b0,	// (0x0009aee2) cam4_grid_pane_g1

0xd5b9,	// (0x0009aeeb) cam4_grid_pane_g2

0xefab,	// (0x0009c8dd) cam4_grid_pane_g3

0xefb4,	// (0x0009c8e6) cam4_grid_pane_g4

0x0003,

0xff5b,	// (0x0009d88d) cam4_grid_pane_g

0x1d8a,	// (0x0008f6bc) aid_placing_vt_slider_lsc_ParamLimits

0x2077,	// (0x0008f9a9) vidtel_button_pane_ParamLimits

0x2077,	// (0x0008f9a9) vidtel_button_pane

0xefbf,	// (0x0009c8f1) bg_button_pane_cp034

0x9899,	// (0x000971cb) vidtel_button_pane_g1

0xefc9,	// (0x0009c8fb) vidtel_button_pane_t1

0xd850,	// (0x0009b182) aid_size_vtel_slider_touch

0xd909,	// (0x0009b23b) scroll_pane_cp039

0xe12c,	// (0x0009ba5e) ncim_query_button_pane_cp01_ParamLimits

0xe14b,	// (0x0009ba7d) ncimui_query_pane_g1_ParamLimits

0x99e5,	// (0x00097317) input_focus_pane_cp012_ParamLimits

0xe170,	// (0x0009baa2) ncim_query_entry_pane_t1_ParamLimits

0xd909,	// (0x0009b23b) scroll_pane_cp039_ParamLimits

0x3237,	// (0x00090b69) navi_pane_bcale_mc_g1

0x323f,	// (0x00090b71) navi_pane_bcale_mc_t1

0xe6da,	// (0x0009c00c) main_sp_fs_email_pane_g1

0xe6e6,	// (0x0009c018) main_sp_fs_email_pane_g2

0x0001,

0xfcec,	// (0x0009d61e) main_sp_fs_email_pane_g

0xe986,	// (0x0009c2b8) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe986,	// (0x0009c2b8) list_single_cale_mrui_row_pane_g3

0x08fb,	// (0x0008e22d) list_single_recal_day_pane_g5_event_pane

0x8ec1,	// (0x000967f3) list_single_recal_day_pane_g7

0xefd7,	// (0x0009c909) list_recal_day_event_pane_cp01

0xefe0,	// (0x0009c912) list_recal_vselct_arw_lo_pane_cp01

0xefe8,	// (0x0009c91a) list_recal_vselct_arw_up_pane_cp01

0xeff0,	// (0x0009c922) list_recal_vselct_pane_cp01

0xd860,	// (0x0009b192) list_recal_day_event_pane_cp01_g1

0xac53,	// (0x00098585) list_recal_day_event_pane_cp01_t1

0x8ec9,	// (0x000967fb) list_single_recal_day_pane_t1_ParamLimits

0x8edb,	// (0x0009680d) list_single_recal_day_pane_t2_ParamLimits

0xfe49,	// (0x0009d77b) list_single_recal_day_pane_t_ParamLimits

0xa061,	// (0x00097993) bg_notes_pane_ParamLimits

0xa10c,	// (0x00097a3e) list_notes_pane_ParamLimits

0x0fc7,	// (0x0008e8f9) scroll_pane_cp06_ParamLimits

0xa148,	// (0x00097a7a) main_notes_pane_ParamLimits

0x9994,	// (0x000972c6) main_welc_pane

0x98a1,	// (0x000971d3) main_welc_body_pane_ParamLimits

0x98a1,	// (0x000971d3) main_welc_body_pane

0x98c0,	// (0x000971f2) main_welc_opti_pane_ParamLimits

0x98c0,	// (0x000971f2) main_welc_opti_pane

0x9909,	// (0x0009723b) main_welc_pane_t1_ParamLimits

0x9909,	// (0x0009723b) main_welc_pane_t1

0x992b,	// (0x0009725d) main_welc_body_row_pane_ParamLimits

0x992b,	// (0x0009725d) main_welc_body_row_pane

0x993f,	// (0x00097271) main_welc_opti_row_pane_ParamLimits

0x993f,	// (0x00097271) main_welc_opti_row_pane

0xeffa,	// (0x0009c92c) main_welc_opti_row_pane_g1

0xf002,	// (0x0009c934) main_welc_opti_row_pane_t1

0xf011,	// (0x0009c943) main_welc_body_row_pane_t1

0xecd9,	// (0x0009c60b) popup_notif_wgt_heading_pane

0xecf3,	// (0x0009c625) aid_size_list_notif_wgt_del_ParamLimits

0xed00,	// (0x0009c632) list_notif_wgt_row_pane_g1_ParamLimits

0xed0c,	// (0x0009c63e) list_notif_wgt_row_pane_g2_ParamLimits

0xed20,	// (0x0009c652) list_notif_wgt_row_pane_g3_ParamLimits

0xfeb0,	// (0x0009d7e2) list_notif_wgt_row_pane_g_ParamLimits

0xed2d,	// (0x0009c65f) list_notif_wgt_row_pane_t1_ParamLimits

0xed43,	// (0x0009c675) list_notif_wgt_row_pane_t2_ParamLimits

0xed55,	// (0x0009c687) list_notif_wgt_row_pane_t3_ParamLimits

0xfeb7,	// (0x0009d7e9) list_notif_wgt_row_pane_t_ParamLimits

0x936e,	// (0x00096ca0) listrow_wgtman_pane_g1_ParamLimits

0x937b,	// (0x00096cad) listrow_wgtman_pane_g2_ParamLimits

0xfee0,	// (0x0009d812) listrow_wgtman_pane_g_ParamLimits

0x0921,	// (0x0008e253) listrow_wgtman_pane_t1_ParamLimits

0x0939,	// (0x0008e26b) listrow_wgtman_pane_t2_ParamLimits

0xfee5,	// (0x0009d817) listrow_wgtman_pane_t_ParamLimits

0x095f,	// (0x0008e291) wait_bar_pane_cp09_ParamLimits

0x9994,	// (0x000972c6) bg_popup_heading_pane_cp02

0xf020,	// (0x0009c952) popup_notif_wgt_heading_pane_g1

0xf028,	// (0x0009c95a) popup_notif_wgt_heading_pane_t1

0x9994,	// (0x000972c6) main_vids_pane

0x9994,	// (0x000972c6) vids_listscroll_pane

0x994f,	// (0x00097281) scroll_pane_cp040

0x9994,	// (0x000972c6) vids_list_pane

0x995a,	// (0x0009728c) vids_list_double_pane_ParamLimits

0x995a,	// (0x0009728c) vids_list_double_pane

0x996b,	// (0x0009729d) vids_list_double_pane_g1

0x9974,	// (0x000972a6) vids_list_double_pane_t1

0x9984,	// (0x000972b6) vids_list_double_pane_t2

0x0001,

0xff69,	// (0x0009d89b) vids_list_double_pane_t

0x99e5,	// (0x00097317) main_ncimui_pane_ParamLimits

0x7eea,	// (0x0009581c) main_ncimui_pane_g1_ParamLimits

0x7ef6,	// (0x00095828) main_ncimui_pane_g2_ParamLimits

0x7ef6,	// (0x00095828) main_ncimui_pane_g2

0x0001,

0xfbf1,	// (0x0009d523) main_ncimui_pane_g_ParamLimits

0xfbf1,	// (0x0009d523) main_ncimui_pane_g

0x98df,	// (0x00097211) main_welc_pane_g1_ParamLimits

0x98df,	// (0x00097211) main_welc_pane_g1

0x98f4,	// (0x00097226) main_welc_pane_g2_ParamLimits

0x98f4,	// (0x00097226) main_welc_pane_g2

0x0001,

0xff64,	// (0x0009d896) main_welc_pane_g_ParamLimits

0xff64,	// (0x0009d896) main_welc_pane_g

0xa061,	// (0x00097993) listscroll_mce_pane_ParamLimits

0x3317,	// (0x00090c49) wait_bar_pane_cp10

0xc794,	// (0x0009a0c6) main_cale_day_pane_ParamLimits

0xc794,	// (0x0009a0c6) main_cale_week_pane_ParamLimits

0xa061,	// (0x00097993) main_messa_pane_ParamLimits

0x597e,	// (0x000932b0) main_clock2_btn_pane_ParamLimits

0x597e,	// (0x000932b0) main_clock2_btn_pane

0xcfa9,	// (0x0009a8db) main_clock2_btn_pane_cp01_ParamLimits

0xcfa9,	// (0x0009a8db) main_clock2_btn_pane_cp01

0xe957,	// (0x0009c289) list_cale_mrui_pane_ParamLimits

0xed99,	// (0x0009c6cb) main_cf0_pane_g2

0x0001,

0xfebe,	// (0x0009d7f0) main_cf0_pane_g

0x9558,	// (0x00096e8a) area_left_week_number_pane_ParamLimits

0x9566,	// (0x00096e98) area_top_day_name_pane_ParamLimits

0x9579,	// (0x00096eab) frame_month_view_pane_ParamLimits

0xeec1,	// (0x0009c7f3) grid_month_view_pane_ParamLimits

0xeecf,	// (0x0009c801) frm_month_g1_ParamLimits

0x9600,	// (0x00096f32) frm_month_g2_ParamLimits

0x9613,	// (0x00096f45) frm_month_g3_ParamLimits

0x9626,	// (0x00096f58) frm_month_g4_ParamLimits

0x9639,	// (0x00096f6b) frm_month_g5_ParamLimits

0x964c,	// (0x00096f7e) frm_month_g6_ParamLimits

0x965f,	// (0x00096f91) frm_month_g7_ParamLimits

0xeedc,	// (0x0009c80e) frm_month_g8_ParamLimits

0x9674,	// (0x00096fa6) frm_month_g9_ParamLimits

0x9684,	// (0x00096fb6) frm_month_g10_ParamLimits

0x9694,	// (0x00096fc6) frm_month_g11_ParamLimits

0x96a4,	// (0x00096fd6) frm_month_g12_ParamLimits

0x96b6,	// (0x00096fe8) frm_month_g13_ParamLimits

0x96ca,	// (0x00096ffc) frm_month_g14_ParamLimits

0x96de,	// (0x00097010) frm_month_g15_ParamLimits

0x96f2,	// (0x00097024) frm_month_g16_ParamLimits

0xff0f,	// (0x0009d841) frm_month_g_ParamLimits

0xeee9,	// (0x0009c81b) cell_top_day_name_pane_t1_ParamLimits

0x9706,	// (0x00097038) cell_area_left_week_number_pane_g1_ParamLimits

0x9712,	// (0x00097044) cell_area_left_week_number_pane_t1_ParamLimits

0xce21,	// (0x0009a753) cell_month_view_pane_g1_ParamLimits

0x9725,	// (0x00097057) cell_month_view_pane_t1_ParamLimits

0xa059,	// (0x0009798b) main_clock2_btn_pane_g1

0xf036,	// (0x0009c968) main_clock2_btn_pane_t1

0x99e5,	// (0x00097317) listscroll_cmail_pane_ParamLimits

0xe6da,	// (0x0009c00c) main_sp_fs_email_pane_g1_ParamLimits

0xe6e6,	// (0x0009c018) main_sp_fs_email_pane_g2_ParamLimits

0xfcec,	// (0x0009d61e) main_sp_fs_email_pane_g_ParamLimits

0xea63,	// (0x0009c395) list_recal_day_pane_ParamLimits

0xea74,	// (0x0009c3a6) mian_recal_day_pane_t1

0x0534,	// (0x0008de66) list_single_dyc_row_text_pane_t4_ParamLimits

0x0534,	// (0x0008de66) list_single_dyc_row_text_pane_t4

0x057d,	// (0x0008deaf) list_single_dyc_row_text_pane_t5_ParamLimits

0x057d,	// (0x0008deaf) list_single_dyc_row_text_pane_t5

0x8770,	// (0x000960a2) list_single_dyc_row_text_pane_t6_ParamLimits

0x8770,	// (0x000960a2) list_single_dyc_row_text_pane_t6

0xae35,	// (0x00098767) aid_mgn_list_cale_time_pane

0x99e5,	// (0x00097317) main_gallery2_pane_ParamLimits

0xcfbd,	// (0x0009a8ef) main_clock2_pane_cp01_t1

0xcfcd,	// (0x0009a8ff) main_clock2_pane_cp01_t3

0x0001,

0xf7cb,	// (0x0009d0fd) main_clock2_pane_cp01_t

0x1416,	// (0x0008ed48) cale_week_scroll_pane_g16_ParamLimits

0x1416,	// (0x0008ed48) cale_week_scroll_pane_g16
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

} // end of namespace AknLayoutScalable_Elaf_pvl4_apps_vga4_lsc_tch_Large

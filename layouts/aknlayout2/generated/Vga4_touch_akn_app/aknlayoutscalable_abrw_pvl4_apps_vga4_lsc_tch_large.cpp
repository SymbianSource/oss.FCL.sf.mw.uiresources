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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0009cf5d };

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
0x0174,	// (0x0009d0d1) Screen

0x0180,	// (0x0009d0dd) application_window

0x01c6,	// (0x0009d123) area_bottom_pane_ParamLimits

0x01c6,	// (0x0009d123) area_bottom_pane

0x01ff,	// (0x0009d15c) area_top_pane_ParamLimits

0x01ff,	// (0x0009d15c) area_top_pane

0xa3f9,	// (0x000a7356) call_video_uplink_pane_ParamLimits

0xa3f9,	// (0x000a7356) call_video_uplink_pane

0x028d,	// (0x0009d1ea) main_pane_ParamLimits

0x028d,	// (0x0009d1ea) main_pane

0xde6a,	// (0x000aadc7) context_pane

0x34aa,	// (0x000a0407) navi_pane

0x34e1,	// (0x000a043e) popup_cale_events_window_ParamLimits

0x34e1,	// (0x000a043e) popup_cale_events_window

0xde7d,	// (0x000aadda) popup_mup_playback_window

0x34f9,	// (0x000a0456) signal_pane

0xab32,	// (0x000a7a8f) main_browser_pane

0xad45,	// (0x000a7ca2) main_burst_pane

0x31b2,	// (0x000a010f) main_calc_pane

0xde5e,	// (0x000aadbb) main_cale_day_pane

0x31c6,	// (0x000a0123) main_cale_month_pane

0xde5e,	// (0x000aadbb) main_cale_week_pane

0xad45,	// (0x000a7ca2) main_call_pane

0xa79e,	// (0x000a76fb) main_call_poc_pane

0xad45,	// (0x000a7ca2) main_camera_pane

0xad45,	// (0x000a7ca2) main_chi_dic_pane

0xb5bd,	// (0x000a851a) main_clock_pane

0xa79e,	// (0x000a76fb) main_fmradio_pane

0xad45,	// (0x000a7ca2) main_graph_messa_pane

0xa79e,	// (0x000a76fb) main_help_pane

0xab32,	// (0x000a7a8f) main_im_pane

0xa9f9,	// (0x000a7956) main_image_pane_ParamLimits

0xa9f9,	// (0x000a7956) main_image_pane

0xa79e,	// (0x000a76fb) main_location2_pane

0xad45,	// (0x000a7ca2) main_location_pane

0xa9f9,	// (0x000a7956) main_messa_pane

0xa79e,	// (0x000a76fb) main_mp2_pane

0xad45,	// (0x000a7ca2) main_mp_pane

0xa79e,	// (0x000a76fb) main_msg_pane

0xa79e,	// (0x000a76fb) main_mup_eq_pane

0xa79e,	// (0x000a76fb) main_mup_pane

0xab32,	// (0x000a7a8f) main_notes_pane

0xa79e,	// (0x000a76fb) main_pec_pane

0xa79e,	// (0x000a76fb) main_phob_pane

0xa79e,	// (0x000a76fb) main_pinb_pane

0xa79e,	// (0x000a76fb) main_postcard_pane

0xa79e,	// (0x000a76fb) main_qdial_pane

0xad45,	// (0x000a7ca2) main_skin_pane

0xa79e,	// (0x000a76fb) main_smil2_pane

0xad45,	// (0x000a7ca2) main_smil_pane

0xad45,	// (0x000a7ca2) main_video_pane

0xad45,	// (0x000a7ca2) main_video_tele_pane

0xa9f9,	// (0x000a7956) main_viewer_pane_ParamLimits

0xa9f9,	// (0x000a7956) main_viewer_pane

0xad45,	// (0x000a7ca2) main_vorec_pane

0x3218,	// (0x000a0175) popup_blid_sat_info_window_ParamLimits

0x3218,	// (0x000a0175) popup_blid_sat_info_window

0x327c,	// (0x000a01d9) popup_dyc_status_message_window_ParamLimits

0x327c,	// (0x000a01d9) popup_dyc_status_message_window

0x3296,	// (0x000a01f3) popup_grid_large_graphic_window_ParamLimits

0x3296,	// (0x000a01f3) popup_grid_large_graphic_window

0x3358,	// (0x000a02b5) popup_loc_request_window_ParamLimits

0x3358,	// (0x000a02b5) popup_loc_request_window

0x347e,	// (0x000a03db) popup_wml_address_window_ParamLimits

0x347e,	// (0x000a03db) popup_wml_address_window

0x2ff0,	// (0x0009ff4d) call_muted_g1

0x2cc9,	// (0x0009fc26) popup_call_audio_conf_window_ParamLimits

0x2cc9,	// (0x0009fc26) popup_call_audio_conf_window

0x3000,	// (0x0009ff5d) popup_call_audio_first_window_ParamLimits

0x3000,	// (0x0009ff5d) popup_call_audio_first_window

0x3076,	// (0x0009ffd3) popup_call_audio_in_window_ParamLimits

0x3076,	// (0x0009ffd3) popup_call_audio_in_window

0x30b2,	// (0x000a000f) popup_call_audio_out_window_ParamLimits

0x30b2,	// (0x000a000f) popup_call_audio_out_window

0x30ec,	// (0x000a0049) popup_call_audio_second_window_ParamLimits

0x30ec,	// (0x000a0049) popup_call_audio_second_window

0x3142,	// (0x000a009f) popup_call_audio_wait_window_ParamLimits

0x3142,	// (0x000a009f) popup_call_audio_wait_window

0x3177,	// (0x000a00d4) popup_number_entry_window_ParamLimits

0x3177,	// (0x000a00d4) popup_number_entry_window

0x0412,	// (0x0009d36f) bg_popup_call_pane_cp05_ParamLimits

0x0412,	// (0x0009d36f) bg_popup_call_pane_cp05

0x0432,	// (0x0009d38f) popup_number_entry_window_t1

0x0445,	// (0x0009d3a2) popup_number_entry_window_t2

0x0457,	// (0x0009d3b4) popup_number_entry_window_t3

0x0003,

0xf040,	// (0x000abf9d) popup_number_entry_window_t

0x049e,	// (0x0009d3fb) text_title_cp2

0x04b1,	// (0x0009d40e) bg_popup_call_pane_cp_ParamLimits

0x04b1,	// (0x0009d40e) bg_popup_call_pane_cp

0x04bf,	// (0x0009d41c) call_thumbnail_pane

0x04c7,	// (0x0009d424) popup_call_audio_in_window_g1_ParamLimits

0x04c7,	// (0x0009d424) popup_call_audio_in_window_g1

0x04d3,	// (0x0009d430) popup_call_audio_in_window_g2_ParamLimits

0x04d3,	// (0x0009d430) popup_call_audio_in_window_g2

0x04df,	// (0x0009d43c) popup_call_audio_in_window_g3_ParamLimits

0x04df,	// (0x0009d43c) popup_call_audio_in_window_g3

0x0002,

0xf049,	// (0x000abfa6) popup_call_audio_in_window_g_ParamLimits

0xf049,	// (0x000abfa6) popup_call_audio_in_window_g

0xa42f,	// (0x000a738c) popup_call_audio_in_window_t1_ParamLimits

0xa42f,	// (0x000a738c) popup_call_audio_in_window_t1

0xa44b,	// (0x000a73a8) popup_call_audio_in_window_t2_ParamLimits

0xa44b,	// (0x000a73a8) popup_call_audio_in_window_t2

0xa467,	// (0x000a73c4) popup_call_audio_in_window_t3_ParamLimits

0xa467,	// (0x000a73c4) popup_call_audio_in_window_t3

0x0002,

0xf050,	// (0x000abfad) popup_call_audio_in_window_t_ParamLimits

0xf050,	// (0x000abfad) popup_call_audio_in_window_t

0x04b1,	// (0x0009d40e) bg_popup_call_pane_cp01_ParamLimits

0x04b1,	// (0x0009d40e) bg_popup_call_pane_cp01

0x04bf,	// (0x0009d41c) call_thumbnail_pane_cp02

0xa47a,	// (0x000a73d7) call_type_pane_cp022

0xa482,	// (0x000a73df) popup_call_audio_out_window_g1_ParamLimits

0xa482,	// (0x000a73df) popup_call_audio_out_window_g1

0xa494,	// (0x000a73f1) popup_call_audio_out_window_g2_ParamLimits

0xa494,	// (0x000a73f1) popup_call_audio_out_window_g2

0xa4a0,	// (0x000a73fd) popup_call_audio_out_window_g3_ParamLimits

0xa4a0,	// (0x000a73fd) popup_call_audio_out_window_g3

0x0002,

0xf057,	// (0x000abfb4) popup_call_audio_out_window_g_ParamLimits

0xf057,	// (0x000abfb4) popup_call_audio_out_window_g

0xa4b2,	// (0x000a740f) popup_call_audio_out_window_t1_ParamLimits

0xa4b2,	// (0x000a740f) popup_call_audio_out_window_t1

0xa4ca,	// (0x000a7427) popup_call_audio_out_window_t2_ParamLimits

0xa4ca,	// (0x000a7427) popup_call_audio_out_window_t2

0x0001,

0xf05e,	// (0x000abfbb) popup_call_audio_out_window_t_ParamLimits

0xf05e,	// (0x000abfbb) popup_call_audio_out_window_t

0xa4df,	// (0x000a743c) bg_popup_call_pane_ParamLimits

0xa4df,	// (0x000a743c) bg_popup_call_pane

0x04eb,	// (0x0009d448) call_thumbnail_pane_cp_ParamLimits

0x04eb,	// (0x0009d448) call_thumbnail_pane_cp

0xa563,	// (0x000a74c0) call_type_pane_cp01_ParamLimits

0xa563,	// (0x000a74c0) call_type_pane_cp01

0xa5a7,	// (0x000a7504) popup_call_audio_first_window_g1_ParamLimits

0xa5a7,	// (0x000a7504) popup_call_audio_first_window_g1

0xa5f3,	// (0x000a7550) popup_call_audio_first_window_g2_ParamLimits

0xa5f3,	// (0x000a7550) popup_call_audio_first_window_g2

0x0001,

0xf063,	// (0x000abfc0) popup_call_audio_first_window_g_ParamLimits

0xf063,	// (0x000abfc0) popup_call_audio_first_window_g

0xa637,	// (0x000a7594) popup_call_audio_first_window_t1_ParamLimits

0xa637,	// (0x000a7594) popup_call_audio_first_window_t1

0xa6e3,	// (0x000a7640) popup_call_audio_first_window_t4_ParamLimits

0xa6e3,	// (0x000a7640) popup_call_audio_first_window_t4

0xa76f,	// (0x000a76cc) popup_call_audio_first_window_t5_ParamLimits

0xa76f,	// (0x000a76cc) popup_call_audio_first_window_t5

0x0002,

0xf068,	// (0x000abfc5) popup_call_audio_first_window_t_ParamLimits

0xf068,	// (0x000abfc5) popup_call_audio_first_window_t

0xa79e,	// (0x000a76fb) bg_popup_call_pane_cp02

0xa7a8,	// (0x000a7705) call_type_pane_cp023

0xa7b0,	// (0x000a770d) popup_call_audio_wait_window_g1

0xa7b8,	// (0x000a7715) popup_call_audio_wait_window_g2

0x0001,

0xf06f,	// (0x000abfcc) popup_call_audio_wait_window_g

0xa7c0,	// (0x000a771d) popup_call_audio_wait_window_t3

0xa7ce,	// (0x000a772b) bg_popup_call_pane_cp03_ParamLimits

0xa7ce,	// (0x000a772b) bg_popup_call_pane_cp03

0xa82e,	// (0x000a778b) call_thumbnail_pane_cp011_ParamLimits

0xa82e,	// (0x000a778b) call_thumbnail_pane_cp011

0xa83a,	// (0x000a7797) call_type_pane_cp034_ParamLimits

0xa83a,	// (0x000a7797) call_type_pane_cp034

0xa876,	// (0x000a77d3) popup_call_audio_second_window_g1_ParamLimits

0xa876,	// (0x000a77d3) popup_call_audio_second_window_g1

0xa8b2,	// (0x000a780f) popup_call_audio_second_window_g2_ParamLimits

0xa8b2,	// (0x000a780f) popup_call_audio_second_window_g2

0x0001,

0xf074,	// (0x000abfd1) popup_call_audio_second_window_g_ParamLimits

0xf074,	// (0x000abfd1) popup_call_audio_second_window_g

0xa8ee,	// (0x000a784b) popup_call_audio_second_window_t1_ParamLimits

0xa8ee,	// (0x000a784b) popup_call_audio_second_window_t1

0xa96f,	// (0x000a78cc) popup_call_audio_second_window_t2_ParamLimits

0xa96f,	// (0x000a78cc) popup_call_audio_second_window_t2

0xa9a5,	// (0x000a7902) popup_call_audio_second_window_t3_ParamLimits

0xa9a5,	// (0x000a7902) popup_call_audio_second_window_t3

0x0002,

0xf079,	// (0x000abfd6) popup_call_audio_second_window_t_ParamLimits

0xf079,	// (0x000abfd6) popup_call_audio_second_window_t

0xa79e,	// (0x000a76fb) bg_popup_call_pane_cp04

0xa9db,	// (0x000a7938) list_conf_pane

0xa9e3,	// (0x000a7940) popup_call_audio_conf_window_t1

0xa9f1,	// (0x000a794e) call_thumbnail_pane_g1

0xa9f9,	// (0x000a7956) bg_pinb_pane_ParamLimits

0xa9f9,	// (0x000a7956) bg_pinb_pane

0xaa07,	// (0x000a7964) find_pinb_pane

0xa9f9,	// (0x000a7956) listscroll_pinb_pane_ParamLimits

0xa9f9,	// (0x000a7956) listscroll_pinb_pane

0xaa11,	// (0x000a796e) pinb_bg_pane_g1

0xaa11,	// (0x000a796e) pinb_bg_pane_g2

0xaa11,	// (0x000a796e) pinb_bg_pane_g3

0xaa11,	// (0x000a796e) pinb_bg_pane_g4

0xaa11,	// (0x000a796e) pinb_bg_pane_g5

0xaa11,	// (0x000a796e) pinb_bg_pane_g6

0xaa11,	// (0x000a796e) pinb_bg_pane_g7

0xaa11,	// (0x000a796e) pinb_bg_pane_g8

0xaa11,	// (0x000a796e) pinb_bg_pane_g9

0xaa11,	// (0x000a796e) pinb_bg_pane_g10

0x0009,

0xf080,	// (0x000abfdd) pinb_bg_pane_g

0x018c,	// (0x0009d0e9) grid_pinb_pane

0x018c,	// (0x0009d0e9) list_pinb_pane

0xaa1b,	// (0x000a7978) scroll_pane_cp01_ParamLimits

0xaa1b,	// (0x000a7978) scroll_pane_cp01

0xaa29,	// (0x000a7986) find_pinb_pane_g1_ParamLimits

0xaa29,	// (0x000a7986) find_pinb_pane_g1

0xaa41,	// (0x000a799e) find_pinb_pane_t1

0xaa53,	// (0x000a79b0) find_pinb_pane_t2

0x0001,

0xf09a,	// (0x000abff7) find_pinb_pane_t

0xaa68,	// (0x000a79c5) input_focus_pane_cp01_ParamLimits

0xaa68,	// (0x000a79c5) input_focus_pane_cp01

0x050f,	// (0x0009d46c) cell_pinb_pane_ParamLimits

0x050f,	// (0x0009d46c) cell_pinb_pane

0xaa74,	// (0x000a79d1) cell_pinb_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_pinb_pane_g1

0xaa82,	// (0x000a79df) cell_pinb_pane_g2_ParamLimits

0xaa82,	// (0x000a79df) cell_pinb_pane_g2

0xaa82,	// (0x000a79df) cell_pinb_pane_g3_ParamLimits

0xaa82,	// (0x000a79df) cell_pinb_pane_g3

0x0002,

0xf09f,	// (0x000abffc) cell_pinb_pane_g_ParamLimits

0xf09f,	// (0x000abffc) cell_pinb_pane_g

0xa79e,	// (0x000a76fb) grid_highlight_pane_cp01

0x050f,	// (0x0009d46c) list_pinb_item_pane_ParamLimits

0x050f,	// (0x0009d46c) list_pinb_item_pane

0x018c,	// (0x0009d0e9) list_highlight_pane_cp02

0xaa90,	// (0x000a79ed) list_pinb_item_pane_g1_ParamLimits

0xaa90,	// (0x000a79ed) list_pinb_item_pane_g1

0xaa82,	// (0x000a79df) list_pinb_item_pane_g2_ParamLimits

0xaa82,	// (0x000a79df) list_pinb_item_pane_g2

0xaa74,	// (0x000a79d1) list_pinb_item_pane_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_pinb_item_pane_g3

0xaa82,	// (0x000a79df) list_pinb_item_pane_g4_ParamLimits

0xaa82,	// (0x000a79df) list_pinb_item_pane_g4

0x0003,

0xf0a6,	// (0x000ac003) list_pinb_item_pane_g_ParamLimits

0xf0a6,	// (0x000ac003) list_pinb_item_pane_g

0xaa9e,	// (0x000a79fb) list_pinb_item_pane_t1_ParamLimits

0xaa9e,	// (0x000a79fb) list_pinb_item_pane_t1

0x053d,	// (0x0009d49a) calc_display_pane

0x0562,	// (0x0009d4bf) calc_paper_pane

0x0585,	// (0x0009d4e2) grid_calc_pane

0x018c,	// (0x0009d0e9) bg_list_pane_cp01

0xaaba,	// (0x000a7a17) clock_g1

0xaaba,	// (0x000a7a17) clock_g2

0x0001,

0xf0af,	// (0x000ac00c) clock_g

0xaac4,	// (0x000a7a21) clock_t1_ParamLimits

0xaac4,	// (0x000a7a21) clock_t1

0xaad8,	// (0x000a7a35) clock_t2_ParamLimits

0xaad8,	// (0x000a7a35) clock_t2

0xaad8,	// (0x000a7a35) clock_t3_ParamLimits

0xaad8,	// (0x000a7a35) clock_t3

0xaad8,	// (0x000a7a35) clock_t4_ParamLimits

0xaad8,	// (0x000a7a35) clock_t4

0xaac4,	// (0x000a7a21) clock_t5_ParamLimits

0xaac4,	// (0x000a7a21) clock_t5

0xaad8,	// (0x000a7a35) clock_t6_ParamLimits

0xaad8,	// (0x000a7a35) clock_t6

0xaad8,	// (0x000a7a35) clock_t7_ParamLimits

0xaad8,	// (0x000a7a35) clock_t7

0xaad8,	// (0x000a7a35) clock_t8_ParamLimits

0xaad8,	// (0x000a7a35) clock_t8

0xaad8,	// (0x000a7a35) clock_t9_ParamLimits

0xaad8,	// (0x000a7a35) clock_t9

0x0008,

0xf0b4,	// (0x000ac011) clock_t_ParamLimits

0xf0b4,	// (0x000ac011) clock_t

0x018c,	// (0x0009d0e9) popup_clock_analogue_window_cp02

0x018c,	// (0x0009d0e9) popup_clock_digital_window_cp01

0xa79e,	// (0x000a76fb) listscroll_help_pane

0xa79e,	// (0x000a76fb) phob_pre_status_pane

0xaaec,	// (0x000a7a49) grid_qdial_pane

0xa9f9,	// (0x000a7956) listscroll_mce_pane

0xa9f9,	// (0x000a7956) bg_notes_pane

0xaaf6,	// (0x000a7a53) list_notes_pane

0x05b3,	// (0x0009d510) scroll_pane_cp06

0xab04,	// (0x000a7a61) bg_calc_paper_pane

0xab18,	// (0x000a7a75) list_calc_pane

0xab32,	// (0x000a7a8f) bg_calc_display_pane

0x05c7,	// (0x0009d524) calc_display_pane_t1

0x05dc,	// (0x0009d539) calc_display_pane_t2

0xab3e,	// (0x000a7a9b) calc_display_pane_t3

0x0002,

0xf0c7,	// (0x000ac024) calc_display_pane_t

0x05f1,	// (0x0009d54e) cell_calc_pane_ParamLimits

0x05f1,	// (0x0009d54e) cell_calc_pane

0xab50,	// (0x000a7aad) bg_calc_paper_pane_g1

0xab5c,	// (0x000a7ab9) bg_calc_paper_pane_g2

0xab68,	// (0x000a7ac5) bg_calc_paper_pane_g3

0xab74,	// (0x000a7ad1) bg_calc_paper_pane_g4

0xab80,	// (0x000a7add) bg_calc_paper_pane_g5

0x062c,	// (0x0009d589) bg_calc_paper_pane_g6

0x063f,	// (0x0009d59c) bg_calc_paper_pane_g7

0x0652,	// (0x0009d5af) bg_calc_paper_pane_g8

0x0007,

0xf0ce,	// (0x000ac02b) bg_calc_paper_pane_g

0x0665,	// (0x0009d5c2) calc_bg_paper_pane_g9

0x0678,	// (0x0009d5d5) list_calc_item_pane_ParamLimits

0x0678,	// (0x0009d5d5) list_calc_item_pane

0xab8c,	// (0x000a7ae9) list_calc_item_pane_g1

0xab99,	// (0x000a7af6) list_calc_item_pane_t1_ParamLimits

0xab99,	// (0x000a7af6) list_calc_item_pane_t1

0x0690,	// (0x0009d5ed) list_calc_item_pane_t2_ParamLimits

0x0690,	// (0x0009d5ed) list_calc_item_pane_t2

0x0001,

0xf0df,	// (0x000ac03c) list_calc_item_pane_t_ParamLimits

0xf0df,	// (0x000ac03c) list_calc_item_pane_t

0xaa11,	// (0x000a796e) cell_calc_pane_g1

0xabab,	// (0x000a7b08) grid_highlight_pane_cp02

0x06c2,	// (0x0009d61f) bg_calc_display_pane_g1

0x06cb,	// (0x0009d628) bg_calc_display_pane_g2

0xabcd,	// (0x000a7b2a) bg_calc_display_pane_g3

0x0002,

0xf0e9,	// (0x000ac046) bg_calc_display_pane_g

0x06d5,	// (0x0009d632) cell_qdial_pane_ParamLimits

0x06d5,	// (0x0009d632) cell_qdial_pane

0x06e9,	// (0x0009d646) cell_qdial_pane_g1_ParamLimits

0x06e9,	// (0x0009d646) cell_qdial_pane_g1

0x06ff,	// (0x0009d65c) cell_qdial_pane_g2_ParamLimits

0x06ff,	// (0x0009d65c) cell_qdial_pane_g2

0xabd6,	// (0x000a7b33) cell_qdial_pane_g3_ParamLimits

0xabd6,	// (0x000a7b33) cell_qdial_pane_g3

0x0003,

0xf0f0,	// (0x000ac04d) cell_qdial_pane_g_ParamLimits

0xf0f0,	// (0x000ac04d) cell_qdial_pane_g

0x0726,	// (0x0009d683) cell_qdial_pane_t1_ParamLimits

0x0726,	// (0x0009d683) cell_qdial_pane_t1

0x073e,	// (0x0009d69b) cell_qdial_pane_t2_ParamLimits

0x073e,	// (0x0009d69b) cell_qdial_pane_t2

0x0751,	// (0x0009d6ae) cell_qdial_pane_t3_ParamLimits

0x0751,	// (0x0009d6ae) cell_qdial_pane_t3

0x0002,

0xf0f9,	// (0x000ac056) cell_qdial_pane_t_ParamLimits

0xf0f9,	// (0x000ac056) cell_qdial_pane_t

0xa79e,	// (0x000a76fb) grid_highlight_pane_cp04

0xabe2,	// (0x000a7b3f) thumbnail_qdial_pane_ParamLimits

0xabe2,	// (0x000a7b3f) thumbnail_qdial_pane

0xac3e,	// (0x000a7b9b) list_help_pane

0xac47,	// (0x000a7ba4) scroll_pane_cp02

0x0764,	// (0x0009d6c1) help_list_pane_t1_ParamLimits

0x0764,	// (0x0009d6c1) help_list_pane_t1

0xac50,	// (0x000a7bad) bg_notes_pane_g2

0xac58,	// (0x000a7bb5) bg_notes_pane_g3

0xac60,	// (0x000a7bbd) notes_bg_pane_g1

0xac68,	// (0x000a7bc5) notes_bg_pane_g4

0xac70,	// (0x000a7bcd) notes_bg_pane_g5

0xac78,	// (0x000a7bd5) notes_bg_pane_g6

0xac80,	// (0x000a7bdd) notes_bg_pane_g7

0xac88,	// (0x000a7be5) notes_bg_pane_g8

0xac90,	// (0x000a7bed) notes_bg_pane_g9

0x0006,

0xf117,	// (0x000ac074) notes_bg_pane_g

0x0788,	// (0x0009d6e5) list_notes_text_pane_ParamLimits

0x0788,	// (0x0009d6e5) list_notes_text_pane

0xac98,	// (0x000a7bf5) list_notes_text_pane_g1

0xdc03,	// (0x000aab60) list_notes_text_pane_t1

0x079f,	// (0x0009d6fc) listscroll_cale_week_pane

0x07c9,	// (0x0009d726) bg_cale_heading_pane

0x07ed,	// (0x0009d74a) bg_cale_pane_cp01

0x080a,	// (0x0009d767) cale_week_corner_pane

0x0829,	// (0x0009d786) cale_week_day_heading_pane

0x0852,	// (0x0009d7af) cale_week_scroll_pane_g1

0x0871,	// (0x0009d7ce) cale_week_scroll_pane_g2

0x0889,	// (0x0009d7e6) cale_week_scroll_pane_g3

0x08a1,	// (0x0009d7fe) cale_week_scroll_pane_g4

0x08b9,	// (0x0009d816) cale_week_scroll_pane_g5

0x08d9,	// (0x0009d836) cale_week_scroll_pane_g6

0x08f9,	// (0x0009d856) cale_week_scroll_pane_g7

0x091d,	// (0x0009d87a) cale_week_scroll_pane_g8

0x0941,	// (0x0009d89e) cale_week_scroll_pane_g9

0x0959,	// (0x0009d8b6) cale_week_scroll_pane_g10

0x0971,	// (0x0009d8ce) cale_week_scroll_pane_g11

0x0989,	// (0x0009d8e6) cale_week_scroll_pane_g12

0x09ad,	// (0x0009d90a) cale_week_scroll_pane_g13

0x09ad,	// (0x0009d90a) cale_week_scroll_pane_g14

0x09ad,	// (0x0009d90a) cale_week_scroll_pane_g15

0x000f,

0xf126,	// (0x000ac083) cale_week_scroll_pane_g

0x09f5,	// (0x0009d952) cale_week_time_pane

0x0a19,	// (0x0009d976) grid_cale_week_pane

0xaccd,	// (0x000a7c2a) scroll_pane_cp08

0x0a4b,	// (0x0009d9a8) cell_cale_week_pane_ParamLimits

0x0a4b,	// (0x0009d9a8) cell_cale_week_pane

0x0ae7,	// (0x0009da44) cale_week_day_heading_pane_t1

0x0b11,	// (0x0009da6e) cale_week_day_heading_pane_t2

0x0b40,	// (0x0009da9d) cale_week_day_heading_pane_t3

0x0b6f,	// (0x0009dacc) cale_week_day_heading_pane_t4

0x0b9e,	// (0x0009dafb) cale_week_day_heading_pane_t5

0x0bd1,	// (0x0009db2e) cale_week_day_heading_pane_t6

0x0c08,	// (0x0009db65) cale_week_day_heading_pane_t7

0x0006,

0xf147,	// (0x000ac0a4) cale_week_day_heading_pane_t

0xacea,	// (0x000a7c47) bg_cale_side_pane

0x0c32,	// (0x0009db8f) cale_week_time_pane_t1

0x0c4c,	// (0x0009dba9) cale_week_time_pane_t2

0x0c66,	// (0x0009dbc3) cale_week_time_pane_t3

0x0c80,	// (0x0009dbdd) cale_week_time_pane_t4

0x0c9a,	// (0x0009dbf7) cale_week_time_pane_t5

0x0cb4,	// (0x0009dc11) cale_week_time_pane_t6

0x0cd4,	// (0x0009dc31) cale_week_time_pane_t7

0x0cfa,	// (0x0009dc57) cale_week_time_pane_t8

0x0007,

0xf156,	// (0x000ac0b3) cale_week_time_pane_t

0x0d20,	// (0x0009dc7d) cell_cale_week_pane_g2

0x0d44,	// (0x0009dca1) cell_cale_week_pane_g3_ParamLimits

0x0d44,	// (0x0009dca1) cell_cale_week_pane_g3

0xacf8,	// (0x000a7c55) grid_highlight_pane_cp07

0xad00,	// (0x000a7c5d) listscroll_gms_pane

0xad0a,	// (0x000a7c67) grid_gms_pane

0xad13,	// (0x000a7c70) listscroll_gms_pane_g1

0xad1b,	// (0x000a7c78) listscroll_gms_pane_g2

0x0001,

0xf167,	// (0x000ac0c4) listscroll_gms_pane_g

0x0d5c,	// (0x0009dcb9) scroll_pane_cp010

0x0d67,	// (0x0009dcc4) cell_gms_pane_ParamLimits

0x0d67,	// (0x0009dcc4) cell_gms_pane

0x0d7e,	// (0x0009dcdb) cell_gms_pane_g1

0xad23,	// (0x000a7c80) cell_gms_pane_g2

0xad2b,	// (0x000a7c88) cell_gms_pane_g3

0xad34,	// (0x000a7c91) cell_gms_pane_g4

0x0003,

0xf16c,	// (0x000ac0c9) cell_gms_pane_g

0xad3d,	// (0x000a7c9a) grid_highlight_pane_cp09

0x2f74,	// (0x0009fed1) phob_pre_status_pane_g1

0x2f7c,	// (0x0009fed9) phob_pre_status_pane_g2

0x2f84,	// (0x0009fee1) phob_pre_status_pane_g3

0x2f8c,	// (0x0009fee9) phob_pre_status_pane_g4

0x0004,

0xf51b,	// (0x000ac478) phob_pre_status_pane_g

0x2f9c,	// (0x0009fef9) phob_pre_status_pane_t1

0x2fac,	// (0x0009ff09) phob_pre_status_pane_t2

0x2fbc,	// (0x0009ff19) phob_pre_status_pane_t3

0x0002,

0xf526,	// (0x000ac483) phob_pre_status_pane_t

0xad45,	// (0x000a7ca2) bg_list_pane_cp05

0x0d8e,	// (0x0009dceb) grid_vorec_pane

0x0d98,	// (0x0009dcf5) vorec_t1

0x0da6,	// (0x0009dd03) vorec_t2

0x0db4,	// (0x0009dd11) vorec_t3

0x0dc2,	// (0x0009dd1f) vorec_t4

0xdbf5,	// (0x000aab52) vorec_t5

0x9527,	// (0x000a6484) vorec_t6

0x0004,

0xf175,	// (0x000ac0d2) vorec_t

0x9535,	// (0x000a6492) wait_bar_pane_cp01

0x0dde,	// (0x0009dd3b) cell_vorec_pane_ParamLimits

0x0dde,	// (0x0009dd3b) cell_vorec_pane

0xad4d,	// (0x000a7caa) cell_vorec_pane_g1

0xa79e,	// (0x000a76fb) grid_highlight_pane_cp05

0xaa1b,	// (0x000a7978) cams_zoom_pane

0xaa1b,	// (0x000a7978) image_vga_pane

0xaa74,	// (0x000a79d1) main_camera_pane_g1

0xaa74,	// (0x000a79d1) main_camera_pane_g2

0xaa74,	// (0x000a79d1) main_camera_pane_g3

0xaa74,	// (0x000a79d1) main_camera_pane_g4

0xaa74,	// (0x000a79d1) main_camera_pane_g5

0xaa74,	// (0x000a79d1) main_camera_pane_g6

0xaa74,	// (0x000a79d1) main_camera_pane_g7

0x0007,

0xf180,	// (0x000ac0dd) main_camera_pane_g

0xaac4,	// (0x000a7a21) main_camera_pane_t1

0xaac4,	// (0x000a7a21) main_camera_pane_t2

0x0001,

0xf191,	// (0x000ac0ee) main_camera_pane_t

0x0e07,	// (0x0009dd64) cams_zoom_pane_cp_ParamLimits

0x0e07,	// (0x0009dd64) cams_zoom_pane_cp

0x0e3b,	// (0x0009dd98) image_cif_pane_ParamLimits

0x0e3b,	// (0x0009dd98) image_cif_pane

0x018c,	// (0x0009d0e9) image_subqcif_pane

0x0e4d,	// (0x0009ddaa) main_video_pane_g1_ParamLimits

0x0e4d,	// (0x0009ddaa) main_video_pane_g1

0x0e7b,	// (0x0009ddd8) main_video_pane_g2_ParamLimits

0x0e7b,	// (0x0009ddd8) main_video_pane_g2

0x0eb5,	// (0x0009de12) main_video_pane_g3_ParamLimits

0x0eb5,	// (0x0009de12) main_video_pane_g3

0x0eb5,	// (0x0009de12) main_video_pane_g4_ParamLimits

0x0eb5,	// (0x0009de12) main_video_pane_g4

0x0ee9,	// (0x0009de46) main_video_pane_g5_ParamLimits

0x0ee9,	// (0x0009de46) main_video_pane_g5

0xad57,	// (0x000a7cb4) main_video_pane_g6_ParamLimits

0xad57,	// (0x000a7cb4) main_video_pane_g6

0x0006,

0xf196,	// (0x000ac0f3) main_video_pane_g_ParamLimits

0xf196,	// (0x000ac0f3) main_video_pane_g

0x0f05,	// (0x0009de62) main_video_pane_t1_ParamLimits

0x0f05,	// (0x0009de62) main_video_pane_t1

0xaaba,	// (0x000a7a17) cams_zoom_pane_g1

0xaaba,	// (0x000a7a17) cams_zoom_pane_g2

0xaaba,	// (0x000a7a17) cams_zoom_pane_g3

0xaaba,	// (0x000a7a17) cams_zoom_pane_g4

0x0003,

0xf1a5,	// (0x000ac102) cams_zoom_pane_g

0xaa1b,	// (0x000a7978) grid_cams_pane

0xaa1b,	// (0x000a7978) linegrid_cams_pane

0x0f49,	// (0x0009dea6) cell_cams_pane_ParamLimits

0x0f49,	// (0x0009dea6) cell_cams_pane

0x018c,	// (0x0009d0e9) cams_burst_image_pane

0xaaba,	// (0x000a7a17) cell_cams_pane_g1

0x018c,	// (0x0009d0e9) grid_highlight_pane_cp03

0xaa11,	// (0x000a796e) mp_bg_pane_g1

0x018c,	// (0x0009d0e9) bg_list_pane_cp03

0x018c,	// (0x0009d0e9) bg_mp_pane

0x018c,	// (0x0009d0e9) grid_mp_pane

0xaaba,	// (0x000a7a17) media_player_g1

0xb2e3,	// (0x000a8240) media_player_t1

0xb2e3,	// (0x000a8240) media_player_t2

0xb2e3,	// (0x000a8240) media_player_t3

0xb2e3,	// (0x000a8240) media_player_t4

0xb2e3,	// (0x000a8240) media_player_t5

0xb2e3,	// (0x000a8240) media_player_t6

0xb2e3,	// (0x000a8240) media_player_t7

0x0006,

0xf505,	// (0x000ac462) media_player_t

0x018c,	// (0x0009d0e9) wait_bar_pane_cp02

0xf4ea,	// (0x000ac447) main_usb_pane_t

0xb5bd,	// (0x000a851a) cell_mp_pane

0xaa11,	// (0x000a796e) cell_mp_pane_g1

0xa79e,	// (0x000a76fb) grid_highlight_pane_cp06

0xad71,	// (0x000a7cce) grid_skin_colour_pane

0xad79,	// (0x000a7cd6) list_highlight_pane_cp03

0x0f5e,	// (0x0009debb) skin_g1

0xad81,	// (0x000a7cde) skin_t1

0xad90,	// (0x000a7ced) skin_t2

0x0001,

0xf1d3,	// (0x000ac130) skin_t

0x0f66,	// (0x0009dec3) cell_skin_colour_pane_ParamLimits

0x0f66,	// (0x0009dec3) cell_skin_colour_pane

0xad9e,	// (0x000a7cfb) cell_skin_colour_pane_g1

0x0fd9,	// (0x0009df36) call_video_g1_ParamLimits

0x0fd9,	// (0x0009df36) call_video_g1

0x0ff5,	// (0x0009df52) call_video_g2_ParamLimits

0x0ff5,	// (0x0009df52) call_video_g2

0x0001,

0xf1d8,	// (0x000ac135) call_video_g_ParamLimits

0xf1d8,	// (0x000ac135) call_video_g

0x103a,	// (0x0009df97) call_video_uplink_pane_cp1_ParamLimits

0x103a,	// (0x0009df97) call_video_uplink_pane_cp1

0xadb0,	// (0x000a7d0d) call_video_uplink_pane_cp2

0x10db,	// (0x0009e038) video_down_crop_pane_ParamLimits

0x10db,	// (0x0009e038) video_down_crop_pane

0x11c4,	// (0x0009e121) video_down_pane_ParamLimits

0x11c4,	// (0x0009e121) video_down_pane

0xadb8,	// (0x000a7d15) video_down_subqcif_pane_ParamLimits

0xadb8,	// (0x000a7d15) video_down_subqcif_pane

0xadd2,	// (0x000a7d2f) video_down_subqcif_pane_cp_ParamLimits

0xadd2,	// (0x000a7d2f) video_down_subqcif_pane_cp

0xadfa,	// (0x000a7d57) im_reading_pane_ParamLimits

0xadfa,	// (0x000a7d57) im_reading_pane

0x12cf,	// (0x0009e22c) im_writing_pane_ParamLimits

0x12cf,	// (0x0009e22c) im_writing_pane

0x12ed,	// (0x0009e24a) im_reading_pane_t1

0xae14,	// (0x000a7d71) list_im_pane

0xae25,	// (0x000a7d82) scroll_pane_cp07

0x132c,	// (0x0009e289) im_writing_pane_t1_ParamLimits

0x132c,	// (0x0009e289) im_writing_pane_t1

0xae3e,	// (0x000a7d9b) im_writing_pane_t2_ParamLimits

0xae3e,	// (0x000a7d9b) im_writing_pane_t2

0x0001,

0xf1e2,	// (0x000ac13f) im_writing_pane_t_ParamLimits

0xf1e2,	// (0x000ac13f) im_writing_pane_t

0xa79e,	// (0x000a76fb) input_focus_pane_cp04

0xa79e,	// (0x000a76fb) input_focus_pane_cp05

0x1341,	// (0x0009e29e) list_im_single_pane_ParamLimits

0x1341,	// (0x0009e29e) list_im_single_pane

0xae5b,	// (0x000a7db8) list_single_im_pane_t1

0xad45,	// (0x000a7ca2) blid_accuracy_pane

0xad45,	// (0x000a7ca2) blid_compass_pane

0xde16,	// (0x000aad73) main_location_t1

0xde16,	// (0x000aad73) main_location_t2

0xde16,	// (0x000aad73) main_location_t3

0x0002,

0xf514,	// (0x000ac471) main_location_t

0xa79e,	// (0x000a76fb) aid_levels_location

0xaa11,	// (0x000a796e) blid_accuracy_pane_g1

0xaa11,	// (0x000a796e) blid_accuracy_pane_g2

0x0001,

0xf231,	// (0x000ac18e) blid_accuracy_pane_g

0xae95,	// (0x000a7df2) wml_content_pane

0xaed3,	// (0x000a7e30) wml_button_pane_ParamLimits

0xaed3,	// (0x000a7e30) wml_button_pane

0x1357,	// (0x0009e2b4) wml_list_single_large_pane_ParamLimits

0x1357,	// (0x0009e2b4) wml_list_single_large_pane

0x1370,	// (0x0009e2cd) wml_list_single_medium_pane_ParamLimits

0x1370,	// (0x0009e2cd) wml_list_single_medium_pane

0x138a,	// (0x0009e2e7) wml_list_single_small_pane_ParamLimits

0x138a,	// (0x0009e2e7) wml_list_single_small_pane

0xaee7,	// (0x000a7e44) wml_selection_box_pane_ParamLimits

0xaee7,	// (0x000a7e44) wml_selection_box_pane

0xaefa,	// (0x000a7e57) wml_list_single_pane_t1

0xaf09,	// (0x000a7e66) wml_list_single_medium_pane_t1

0xaf18,	// (0x000a7e75) wml_list_single_large_pane_t1

0xaf27,	// (0x000a7e84) input_focus_pane_cp02_ParamLimits

0xaf27,	// (0x000a7e84) input_focus_pane_cp02

0xaf3a,	// (0x000a7e97) wml_selection_box_pane_g1

0xaf43,	// (0x000a7ea0) wml_selection_box_pane_t1_ParamLimits

0xaf43,	// (0x000a7ea0) wml_selection_box_pane_t1

0xa9f9,	// (0x000a7956) bg_wml_button_pane_ParamLimits

0xa9f9,	// (0x000a7956) bg_wml_button_pane

0xaf5b,	// (0x000a7eb8) wml_button_pane_g1

0xaf63,	// (0x000a7ec0) wml_button_pane_t1

0xaf5b,	// (0x000a7eb8) wml_button_bg_pane_g1

0xaf73,	// (0x000a7ed0) wml_button_bg_pane_g2

0xaf7b,	// (0x000a7ed8) wml_button_bg_pane_g3

0xaf83,	// (0x000a7ee0) wml_button_bg_pane_g4

0xaf8b,	// (0x000a7ee8) wml_button_bg_pane_g5

0xaf93,	// (0x000a7ef0) wml_button_bg_pane_g6

0xaf9b,	// (0x000a7ef8) wml_button_bg_pane_g7

0xafa3,	// (0x000a7f00) wml_button_bg_pane_g8

0xafab,	// (0x000a7f08) wml_button_bg_pane_g9

0x0008,

0xf1e7,	// (0x000ac144) wml_button_bg_pane_g

0x13a6,	// (0x0009e303) bg_list_pane_cp02

0xafb3,	// (0x000a7f10) mce_header_pane_ParamLimits

0xafb3,	// (0x000a7f10) mce_header_pane

0xafc9,	// (0x000a7f26) mce_icon_pane

0xafc9,	// (0x000a7f26) mce_image_pane

0xafd2,	// (0x000a7f2f) mce_text_pane_ParamLimits

0xafd2,	// (0x000a7f2f) mce_text_pane

0x13b0,	// (0x0009e30d) scroll_pane_cp03

0xaecb,	// (0x000a7e28) scroll_pane_cp04

0xafe5,	// (0x000a7f42) scroll_pane_cp05_ParamLimits

0xafe5,	// (0x000a7f42) scroll_pane_cp05

0x13ba,	// (0x0009e317) mce_header_field_pane_ParamLimits

0x13ba,	// (0x0009e317) mce_header_field_pane

0x13d3,	// (0x0009e330) mce_header_field_pane_2_ParamLimits

0x13d3,	// (0x0009e330) mce_header_field_pane_2

0x13e9,	// (0x0009e346) mce_header_field_pane_3

0x13f1,	// (0x0009e34e) list_single_mce_message_pane_ParamLimits

0x13f1,	// (0x0009e34e) list_single_mce_message_pane

0x140d,	// (0x0009e36a) list_single_mce_smart_pane_ParamLimits

0x140d,	// (0x0009e36a) list_single_mce_smart_pane

0xaff1,	// (0x000a7f4e) input_focus_pane_cp03

0xaffa,	// (0x000a7f57) list_header_data_pane

0x1434,	// (0x0009e391) mce_header_field_pane_t1

0x1444,	// (0x0009e3a1) list_single_mce_header_pane_ParamLimits

0x1444,	// (0x0009e3a1) list_single_mce_header_pane

0xb002,	// (0x000a7f5f) list_single_mce_header_pane_t1

0xb011,	// (0x000a7f6e) list_single_mce_message_pane_g1

0xb019,	// (0x000a7f76) list_single_mce_message_pane_t1

0x147e,	// (0x0009e3db) bg_cale_heading_pane_cp01_ParamLimits

0x147e,	// (0x0009e3db) bg_cale_heading_pane_cp01

0xb027,	// (0x000a7f84) bg_cale_pane_cp02_ParamLimits

0xb027,	// (0x000a7f84) bg_cale_pane_cp02

0x14d0,	// (0x0009e42d) cale_month_corner_pane

0x14ef,	// (0x0009e44c) cale_month_day_heading_pane_ParamLimits

0x14ef,	// (0x0009e44c) cale_month_day_heading_pane

0x1559,	// (0x0009e4b6) cale_month_pane_g1_ParamLimits

0x1559,	// (0x0009e4b6) cale_month_pane_g1

0x15a0,	// (0x0009e4fd) cale_month_pane_g2_ParamLimits

0x15a0,	// (0x0009e4fd) cale_month_pane_g2

0x15dc,	// (0x0009e539) cale_month_pane_g3_ParamLimits

0x15dc,	// (0x0009e539) cale_month_pane_g3

0x1630,	// (0x0009e58d) cale_month_pane_g4_ParamLimits

0x1630,	// (0x0009e58d) cale_month_pane_g4

0x1684,	// (0x0009e5e1) cale_month_pane_g5_ParamLimits

0x1684,	// (0x0009e5e1) cale_month_pane_g5

0x16e0,	// (0x0009e63d) cale_month_pane_g6_ParamLimits

0x16e0,	// (0x0009e63d) cale_month_pane_g6

0x1748,	// (0x0009e6a5) cale_month_pane_g7_ParamLimits

0x1748,	// (0x0009e6a5) cale_month_pane_g7

0x17b4,	// (0x0009e711) cale_month_pane_g8_ParamLimits

0x17b4,	// (0x0009e711) cale_month_pane_g8

0x1820,	// (0x0009e77d) cale_month_pane_g9_ParamLimits

0x1820,	// (0x0009e77d) cale_month_pane_g9

0x1884,	// (0x0009e7e1) cale_month_pane_g10_ParamLimits

0x1884,	// (0x0009e7e1) cale_month_pane_g10

0x18d6,	// (0x0009e833) cale_month_pane_g11_ParamLimits

0x18d6,	// (0x0009e833) cale_month_pane_g11

0x1928,	// (0x0009e885) cale_month_pane_g12_ParamLimits

0x1928,	// (0x0009e885) cale_month_pane_g12

0x1980,	// (0x0009e8dd) cale_month_pane_g13_ParamLimits

0x1980,	// (0x0009e8dd) cale_month_pane_g13

0x000c,

0xf1fa,	// (0x000ac157) cale_month_pane_g_ParamLimits

0xf1fa,	// (0x000ac157) cale_month_pane_g

0x19d8,	// (0x0009e935) cale_month_week_pane

0x19fc,	// (0x0009e959) grid_cale_month_pane_ParamLimits

0x19fc,	// (0x0009e959) grid_cale_month_pane

0x1a5d,	// (0x0009e9ba) cale_month_day_heading_pane_t1

0x1ae3,	// (0x0009ea40) cale_month_day_heading_pane_t2

0x1b5c,	// (0x0009eab9) cale_month_day_heading_pane_t3

0x1bd5,	// (0x0009eb32) cale_month_day_heading_pane_t4

0x1c56,	// (0x0009ebb3) cale_month_day_heading_pane_t5

0x1cdf,	// (0x0009ec3c) cale_month_day_heading_pane_t6

0x1d70,	// (0x0009eccd) cale_month_day_heading_pane_t7

0x0006,

0xf215,	// (0x000ac172) cale_month_day_heading_pane_t

0xacea,	// (0x000a7c47) bg_cale_side_pane_cp01

0x1e01,	// (0x0009ed5e) cale_month_week_pane_t1

0x1e1a,	// (0x0009ed77) cale_month_week_pane_t2

0x1e33,	// (0x0009ed90) cale_month_week_pane_t3

0x1e4c,	// (0x0009eda9) cale_month_week_pane_t4

0x1e65,	// (0x0009edc2) cale_month_week_pane_t5

0x1e7e,	// (0x0009eddb) cale_month_week_pane_t6

0x0005,

0xf224,	// (0x000ac181) cale_month_week_pane_t

0x1ea3,	// (0x0009ee00) cell_cale_month_pane_ParamLimits

0x1ea3,	// (0x0009ee00) cell_cale_month_pane

0xb066,	// (0x000a7fc3) cell_cale_month_pane_g1

0x1fe1,	// (0x0009ef3e) cell_cale_month_pane_t1_ParamLimits

0x1fe1,	// (0x0009ef3e) cell_cale_month_pane_t1

0xacf8,	// (0x000a7c55) grid_highlight_pane_cp08

0xaa11,	// (0x000a796e) main_smil_g1

0x200d,	// (0x0009ef6a) smil_status_pane

0xb072,	// (0x000a7fcf) smil_text_pane

0xdd2c,	// (0x000aac89) bg_popup_call3_rect_pane_g8

0xdd34,	// (0x000aac91) bg_popup_call3_rect_pane_g9

0x0008,

0xf4ad,	// (0x000ac40a) bg_popup_call3_rect_pane_g

0xdedf,	// (0x000aae3c) smil_status_volume_pane_g1

0xb07c,	// (0x000a7fd9) smil_status_pane_t1

0xbaa3,	// (0x000a8a00) volume_smil_pane

0xb093,	// (0x000a7ff0) list_smil_text_pane

0x2022,	// (0x0009ef7f) scroll_pane_cp011

0x202d,	// (0x0009ef8a) smil_text_list_pane_t1_ParamLimits

0x202d,	// (0x0009ef8a) smil_text_list_pane_t1

0xb09d,	// (0x000a7ffa) aid_volume_smil_ParamLimits

0xb09d,	// (0x000a7ffa) aid_volume_smil

0xaa11,	// (0x000a796e) smil_volume_pane_g1

0xaa11,	// (0x000a796e) smil_volume_pane_g2

0x0001,

0xf231,	// (0x000ac18e) smil_volume_pane_g

0x079f,	// (0x0009d6fc) listscroll_cale_day_pane

0xb0bf,	// (0x000a801c) bg_cale_pane

0xb0d7,	// (0x000a8034) list_cale_pane

0xb0fa,	// (0x000a8057) scroll_pane_cp09

0xb10b,	// (0x000a8068) cale_bg_pane_g1

0xb113,	// (0x000a8070) cale_bg_pane_g2

0xb11b,	// (0x000a8078) cale_bg_pane_g3

0xb123,	// (0x000a8080) cale_bg_pane_g4

0xb12b,	// (0x000a8088) cale_bg_pane_g5

0xb133,	// (0x000a8090) cale_bg_pane_g6

0xb13b,	// (0x000a8098) cale_bg_pane_g7

0xb143,	// (0x000a80a0) cale_bg_pane_g8

0xb14b,	// (0x000a80a8) cale_bg_pane_g9

0x0008,

0xf236,	// (0x000ac193) cale_bg_pane_g

0xb153,	// (0x000a80b0) list_cale_time_pane_ParamLimits

0xb153,	// (0x000a80b0) list_cale_time_pane

0xb16a,	// (0x000a80c7) list_cale_time_pane_g1_ParamLimits

0xb16a,	// (0x000a80c7) list_cale_time_pane_g1

0xb176,	// (0x000a80d3) list_cale_time_pane_g2_ParamLimits

0xb176,	// (0x000a80d3) list_cale_time_pane_g2

0x2081,	// (0x0009efde) list_cale_time_pane_g3_ParamLimits

0x2081,	// (0x0009efde) list_cale_time_pane_g3

0x208f,	// (0x0009efec) list_cale_time_pane_g4_ParamLimits

0x208f,	// (0x0009efec) list_cale_time_pane_g4

0x209d,	// (0x0009effa) list_cale_time_pane_g5_ParamLimits

0x209d,	// (0x0009effa) list_cale_time_pane_g5

0x0005,

0xf249,	// (0x000ac1a6) list_cale_time_pane_g_ParamLimits

0xf249,	// (0x000ac1a6) list_cale_time_pane_g

0xb190,	// (0x000a80ed) list_cale_time_pane_t1_ParamLimits

0xb190,	// (0x000a80ed) list_cale_time_pane_t1

0xb1b8,	// (0x000a8115) list_cale_time_pane_t2_ParamLimits

0xb1b8,	// (0x000a8115) list_cale_time_pane_t2

0x235b,	// (0x0009f2b8) aid_blid_cardinal_pane

0x2399,	// (0x0009f2f6) compass_pane_t4

0xb1e0,	// (0x000a813d) list_cale_time_pane_t4_ParamLimits

0xb1e0,	// (0x000a813d) list_cale_time_pane_t4

0x23a7,	// (0x0009f304) compass_pane_t5

0x23b7,	// (0x0009f314) compass_pane_t6

0x23c5,	// (0x0009f322) compass_pane_t7

0xb66d,	// (0x000a85ca) navi_pane_cc_t1

0xb7cc,	// (0x000a8729) aid_phob_thumbnail_center_pane

0x2982,	// (0x0009f8df) main_postcard_pane_g4_ParamLimits

0x0002,

0xf256,	// (0x000ac1b3) list_cale_time_pane_t_ParamLimits

0xf256,	// (0x000ac1b3) list_cale_time_pane_t

0x04b1,	// (0x0009d40e) bg_popup_window_pane_cp02_ParamLimits

0x04b1,	// (0x0009d40e) bg_popup_window_pane_cp02

0xb208,	// (0x000a8165) heading_pane_cp01_ParamLimits

0xb208,	// (0x000a8165) heading_pane_cp01

0xb214,	// (0x000a8171) loc_req_pane_ParamLimits

0xb214,	// (0x000a8171) loc_req_pane

0xb224,	// (0x000a8181) loc_type_pane_ParamLimits

0xb224,	// (0x000a8181) loc_type_pane

0xb236,	// (0x000a8193) loc_type_pane_t1_ParamLimits

0xb236,	// (0x000a8193) loc_type_pane_t1

0xb248,	// (0x000a81a5) loc_type_pane_t2_ParamLimits

0xb248,	// (0x000a81a5) loc_type_pane_t2

0xb25a,	// (0x000a81b7) loc_type_pane_t3_ParamLimits

0xb25a,	// (0x000a81b7) loc_type_pane_t3

0x0002,

0xf25d,	// (0x000ac1ba) loc_type_pane_t_ParamLimits

0xf25d,	// (0x000ac1ba) loc_type_pane_t

0xb26c,	// (0x000a81c9) list_loc_req_pane

0xb276,	// (0x000a81d3) scroll_pane_cp012

0x20ab,	// (0x0009f008) list_single_loc_request_popup_menu_pane_ParamLimits

0x20ab,	// (0x0009f008) list_single_loc_request_popup_menu_pane

0xb281,	// (0x000a81de) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb281,	// (0x000a81de) list_single_loc_request_popup_menu_pane_g1

0xb28d,	// (0x000a81ea) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb28d,	// (0x000a81ea) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf264,	// (0x000ac1c1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf264,	// (0x000ac1c1) list_single_loc_request_popup_menu_pane_g

0xb299,	// (0x000a81f6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb299,	// (0x000a81f6) list_single_loc_request_popup_menu_pane_t1

0xa9f9,	// (0x000a7956) bg_popup_window_pane_cp03_ParamLimits

0xa9f9,	// (0x000a7956) bg_popup_window_pane_cp03

0xb2af,	// (0x000a820c) heading_loc_req_pane_ParamLimits

0xb2af,	// (0x000a820c) heading_loc_req_pane

0x20b8,	// (0x0009f015) popup_dyc_status_message_window_g1_ParamLimits

0x20b8,	// (0x0009f015) popup_dyc_status_message_window_g1

0x20cc,	// (0x0009f029) popup_dyc_status_message_window_t1_ParamLimits

0x20cc,	// (0x0009f029) popup_dyc_status_message_window_t1

0x20e1,	// (0x0009f03e) popup_dyc_status_message_window_t2_ParamLimits

0x20e1,	// (0x0009f03e) popup_dyc_status_message_window_t2

0x20f6,	// (0x0009f053) popup_dyc_status_message_window_t3_ParamLimits

0x20f6,	// (0x0009f053) popup_dyc_status_message_window_t3

0x0002,

0xf269,	// (0x000ac1c6) popup_dyc_status_message_window_t_ParamLimits

0xf269,	// (0x000ac1c6) popup_dyc_status_message_window_t

0xa79e,	// (0x000a76fb) bg_heading_pane_cp01

0xb2bb,	// (0x000a8218) heading_loc_req_pane_g1

0xb2c3,	// (0x000a8220) heading_loc_req_pane_g2

0xb2cb,	// (0x000a8228) heading_loc_req_pane_g3

0x0002,

0xf270,	// (0x000ac1cd) heading_loc_req_pane_g

0xb2d3,	// (0x000a8230) heading_loc_req_pane_t1

0xb2f3,	// (0x000a8250) bg_popup_sub_pane_cp01_ParamLimits

0xb2f3,	// (0x000a8250) bg_popup_sub_pane_cp01

0xb301,	// (0x000a825e) popup_cale_events_window_g1_ParamLimits

0xb301,	// (0x000a825e) popup_cale_events_window_g1

0xb321,	// (0x000a827e) popup_cale_events_window_g2_ParamLimits

0xb321,	// (0x000a827e) popup_cale_events_window_g2

0x0001,

0xf292,	// (0x000ac1ef) popup_cale_events_window_g_ParamLimits

0xf292,	// (0x000ac1ef) popup_cale_events_window_g

0xb341,	// (0x000a829e) popup_cale_events_window_t1_ParamLimits

0xb341,	// (0x000a829e) popup_cale_events_window_t1

0xb353,	// (0x000a82b0) popup_cale_events_window_t2_ParamLimits

0xb353,	// (0x000a82b0) popup_cale_events_window_t2

0xb391,	// (0x000a82ee) popup_cale_events_window_t3_ParamLimits

0xb391,	// (0x000a82ee) popup_cale_events_window_t3

0xb3cb,	// (0x000a8328) popup_cale_events_window_t4_ParamLimits

0xb3cb,	// (0x000a8328) popup_cale_events_window_t4

0x0003,

0xf297,	// (0x000ac1f4) popup_cale_events_window_t_ParamLimits

0xf297,	// (0x000ac1f4) popup_cale_events_window_t

0x212a,	// (0x0009f087) call_type_pane

0x213a,	// (0x0009f097) popup_call_status_window_g1

0x214e,	// (0x0009f0ab) popup_call_status_window_g2

0x2162,	// (0x0009f0bf) popup_call_status_window_g3

0x0002,

0xf2a0,	// (0x000ac1fd) popup_call_status_window_g

0xb401,	// (0x000a835e) call_type_pane_g1

0xb40a,	// (0x000a8367) call_type_pane_g2

0x0001,

0xf2a7,	// (0x000ac204) call_type_pane_g

0xa79e,	// (0x000a76fb) bg_popup_sub_pane_cp02

0xb413,	// (0x000a8370) listscroll_popup_wml_pane

0xb41b,	// (0x000a8378) list_wml_pane

0xb425,	// (0x000a8382) scroll_pane_cp013

0xb430,	// (0x000a838d) list_single_graphic_popup_wml_pane_ParamLimits

0xb430,	// (0x000a838d) list_single_graphic_popup_wml_pane

0xaa11,	// (0x000a796e) list_single_graphic_popup_wml_pane_g1

0xb444,	// (0x000a83a1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2ac,	// (0x000ac209) list_single_graphic_popup_wml_pane_g

0xb44c,	// (0x000a83a9) list_single_graphic_popup_wml_pane_t1

0xb462,	// (0x000a83bf) aid_call_pane

0xa9f1,	// (0x000a794e) popup_clock_analogue_window_g1

0xa9f1,	// (0x000a794e) popup_clock_analogue_window_g2

0xb46a,	// (0x000a83c7) popup_clock_analogue_window_g3

0xb46a,	// (0x000a83c7) popup_clock_analogue_window_g4

0xaa11,	// (0x000a796e) popup_clock_analogue_window_g5

0x0004,

0xf2b1,	// (0x000ac20e) popup_clock_analogue_window_g

0xb472,	// (0x000a83cf) popup_clock_analogue_window_t1

0xb480,	// (0x000a83dd) clock_digital_number_pane_ParamLimits

0xb480,	// (0x000a83dd) clock_digital_number_pane

0xb48c,	// (0x000a83e9) clock_digital_number_pane_cp02_ParamLimits

0xb48c,	// (0x000a83e9) clock_digital_number_pane_cp02

0xb498,	// (0x000a83f5) clock_digital_number_pane_cp03_ParamLimits

0xb498,	// (0x000a83f5) clock_digital_number_pane_cp03

0xb4a4,	// (0x000a8401) clock_digital_number_pane_cp04_ParamLimits

0xb4a4,	// (0x000a8401) clock_digital_number_pane_cp04

0xb4b0,	// (0x000a840d) clock_digital_separator_pane_ParamLimits

0xb4b0,	// (0x000a840d) clock_digital_separator_pane

0xb4bc,	// (0x000a8419) popup_clock_digital_window_t1

0xaa11,	// (0x000a796e) clock_digital_number_pane_g1

0xaa11,	// (0x000a796e) clock_digital_number_pane_g2

0x0001,

0xf231,	// (0x000ac18e) clock_digital_number_pane_g

0xaa11,	// (0x000a796e) clock_digital_separator_pane_g1

0xaa11,	// (0x000a796e) clock_digital_separator_pane_g2

0x0001,

0xf231,	// (0x000ac18e) clock_digital_separator_pane_g

0xa79e,	// (0x000a76fb) bg_popup_window_pane_cp04

0xb4d9,	// (0x000a8436) heading_pane_cp03

0xad45,	// (0x000a7ca2) listscroll_popup_gms_pane

0xa79e,	// (0x000a76fb) grid_large_graphic_popup_pane

0xb4e2,	// (0x000a843f) listscroll_popup_gms_pane_g1

0xb4eb,	// (0x000a8448) listscroll_popup_gms_pane_g2

0x0001,

0xf2bc,	// (0x000ac219) listscroll_popup_gms_pane_g

0xb4f4,	// (0x000a8451) scroll_pane_cp014

0x050f,	// (0x0009d46c) cell_large_graphic_popup_pane_ParamLimits

0x050f,	// (0x0009d46c) cell_large_graphic_popup_pane

0xaa74,	// (0x000a79d1) cell_large_graphic_popup_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_large_graphic_popup_pane_g1

0xb4fd,	// (0x000a845a) cell_large_graphic_popup_pane_g2_ParamLimits

0xb4fd,	// (0x000a845a) cell_large_graphic_popup_pane_g2

0xb50b,	// (0x000a8468) cell_large_graphic_popup_pane_g3_ParamLimits

0xb50b,	// (0x000a8468) cell_large_graphic_popup_pane_g3

0xb519,	// (0x000a8476) cell_large_graphic_popup_pane_g4_ParamLimits

0xb519,	// (0x000a8476) cell_large_graphic_popup_pane_g4

0x0003,

0xf2c1,	// (0x000ac21e) cell_large_graphic_popup_pane_g_ParamLimits

0xf2c1,	// (0x000ac21e) cell_large_graphic_popup_pane_g

0xa79e,	// (0x000a76fb) grid_highlight_pane_cp010

0xaa11,	// (0x000a796e) bg_popup_call_pane_g1

0xb52a,	// (0x000a8487) list_single_graphic_popup_conf_pane_ParamLimits

0xb52a,	// (0x000a8487) list_single_graphic_popup_conf_pane

0xb53c,	// (0x000a8499) list_highlight_pane_cp01

0xb545,	// (0x000a84a2) list_single_graphic_popup_conf_pane_g1

0xb54d,	// (0x000a84aa) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2ca,	// (0x000ac227) list_single_graphic_popup_conf_pane_g

0xb555,	// (0x000a84b2) list_single_graphic_popup_conf_pane_t1

0xb563,	// (0x000a84c0) linegrid_cams_pane_g1

0x2172,	// (0x0009f0cf) linegrid_cams_pane_g2

0xad2b,	// (0x000a7c88) linegrid_cams_pane_g3

0xb56c,	// (0x000a84c9) linegrid_cams_pane_g4

0x217b,	// (0x0009f0d8) linegrid_cams_pane_g5

0x2184,	// (0x0009f0e1) linegrid_cams_pane_g6

0xad34,	// (0x000a7c91) linegrid_cams_pane_g7

0x0006,

0xf2cf,	// (0x000ac22c) linegrid_cams_pane_g

0xb575,	// (0x000a84d2) popup_clock_analogue_window

0xb575,	// (0x000a84d2) popup_clock_digital_window

0xa79e,	// (0x000a76fb) popup_phob_thumbnail_window

0xaa11,	// (0x000a796e) call_video_uplink_pane_g1

0xb57e,	// (0x000a84db) call_video_uplink_pane_g2

0x0001,

0xf2de,	// (0x000ac23b) call_video_uplink_pane_g

0xb586,	// (0x000a84e3) video_uplink_pane

0xb58e,	// (0x000a84eb) mce_image_pane_g1

0x218f,	// (0x0009f0ec) mce_image_pane_g2

0x2199,	// (0x0009f0f6) mce_image_pane_g3

0x21a3,	// (0x0009f100) mce_image_pane_g4

0x21ab,	// (0x0009f108) mce_image_pane_g5

0x0004,

0xf2e3,	// (0x000ac240) mce_image_pane_g

0xb598,	// (0x000a84f5) control_top_pane_stacon_cp01_ParamLimits

0xb598,	// (0x000a84f5) control_top_pane_stacon_cp01

0xb5ac,	// (0x000a8509) uni_indicator_pane_stacon_cp01_ParamLimits

0xb5ac,	// (0x000a8509) uni_indicator_pane_stacon_cp01

0xb5bd,	// (0x000a851a) bg_popup_sub_pane_cp03

0x21b3,	// (0x0009f110) chi_dic_find_pane

0x21bb,	// (0x0009f118) listscroll_chi_dic_pane

0x21c4,	// (0x0009f121) main_pane_chidic_g1

0x21d7,	// (0x0009f134) chi_dic_find_pane_t1

0xb5c7,	// (0x000a8524) find_chidic_pane

0xb5d0,	// (0x000a852d) chi_dic_list_pane_ParamLimits

0xb5d0,	// (0x000a852d) chi_dic_list_pane

0xb5e1,	// (0x000a853e) scroll_pane_cp020

0x21e5,	// (0x0009f142) find_chidic_pane_t1

0xa79e,	// (0x000a76fb) input_focus_pane_cp06

0x21f4,	// (0x0009f151) list_chi_dic_pane_ParamLimits

0x21f4,	// (0x0009f151) list_chi_dic_pane

0x2206,	// (0x0009f163) list_chi_dic_pane_t1_ParamLimits

0x2206,	// (0x0009f163) list_chi_dic_pane_t1

0xa79e,	// (0x000a76fb) list_highlight_pane_cp020

0xb5e9,	// (0x000a8546) bg_cale_heading_pane_g1

0x2219,	// (0x0009f176) bg_cale_heading_pane_g2

0x2221,	// (0x0009f17e) bg_cale_heading_pane_g3

0x2229,	// (0x0009f186) bg_cale_heading_pane_g4

0x2233,	// (0x0009f190) bg_cale_heading_pane_g5

0x223d,	// (0x0009f19a) bg_cale_heading_pane_g6

0x2245,	// (0x0009f1a2) bg_cale_heading_pane_g7

0x224d,	// (0x0009f1aa) bg_cale_heading_pane_g8

0x2257,	// (0x0009f1b4) bg_cale_heading_pane_g9

0x0008,

0xf2ee,	// (0x000ac24b) bg_cale_heading_pane_g

0xb5e9,	// (0x000a8546) bg_cale_side_pane_g1

0x2261,	// (0x0009f1be) bg_cale_side_pane_g2

0x226b,	// (0x0009f1c8) bg_cale_side_pane_g3

0x2275,	// (0x0009f1d2) bg_cale_side_pane_g4

0x227f,	// (0x0009f1dc) bg_cale_side_pane_g5

0x2289,	// (0x0009f1e6) bg_cale_side_pane_g6

0x2293,	// (0x0009f1f0) bg_cale_side_pane_g7

0x229d,	// (0x0009f1fa) bg_cale_side_pane_g8

0x22a5,	// (0x0009f202) bg_cale_side_pane_g9

0x0008,

0xf301,	// (0x000ac25e) bg_cale_side_pane_g

0x22ad,	// (0x0009f20a) popup_call_status_window_ParamLimits

0x22ad,	// (0x0009f20a) popup_call_status_window

0xb5f1,	// (0x000a854e) stacon_top_pane

0xb5f9,	// (0x000a8556) status_pane_ParamLimits

0xb5f9,	// (0x000a8556) status_pane

0xb60e,	// (0x000a856b) status_small_pane

0xb616,	// (0x000a8573) control_pane

0xa79e,	// (0x000a76fb) stacon_bottom_pane

0xb61e,	// (0x000a857b) list_single_mce_smart_pane_t1_ParamLimits

0xb61e,	// (0x000a857b) list_single_mce_smart_pane_t1

0xb631,	// (0x000a858e) list_single_mce_smart_pane_t2_ParamLimits

0xb631,	// (0x000a858e) list_single_mce_smart_pane_t2

0x0001,

0xf314,	// (0x000ac271) list_single_mce_smart_pane_t_ParamLimits

0xf314,	// (0x000ac271) list_single_mce_smart_pane_t

0x22fa,	// (0x0009f257) compass_pane

0x2305,	// (0x0009f262) main_location2_pane_t1

0x231b,	// (0x0009f278) main_location2_pane_t2

0x2331,	// (0x0009f28e) main_location2_pane_t3

0x0003,

0xf319,	// (0x000ac276) main_location2_pane_t

0xb650,	// (0x000a85ad) compass_pane_g1_ParamLimits

0xb650,	// (0x000a85ad) compass_pane_g1

0x237b,	// (0x0009f2d8) compass_pane_t1

0x238a,	// (0x0009f2e7) compass_pane_t2

0x0005,

0xf322,	// (0x000ac27f) compass_pane_t

0x23d5,	// (0x0009f332) text_secondary_cp61

0xb664,	// (0x000a85c1) navi_pane_cams_g5

0xb687,	// (0x000a85e4) navi_pane_im_t1

0xb695,	// (0x000a85f2) navi_pane_mp_g1_ParamLimits

0xb695,	// (0x000a85f2) navi_pane_mp_g1

0xb6a9,	// (0x000a8606) navi_pane_mp_g2_ParamLimits

0xb6a9,	// (0x000a8606) navi_pane_mp_g2

0xb6b5,	// (0x000a8612) navi_pane_mp_g3_ParamLimits

0xb6b5,	// (0x000a8612) navi_pane_mp_g3

0x0002,

0xf336,	// (0x000ac293) navi_pane_mp_g_ParamLimits

0xf336,	// (0x000ac293) navi_pane_mp_g

0xb6c1,	// (0x000a861e) navi_pane_mp_t1

0xb6cf,	// (0x000a862c) navi_pane_mp_t2

0x0002,

0xf33d,	// (0x000ac29a) navi_pane_mp_t

0xb70b,	// (0x000a8668) navi_pane_vt_g1

0xb6c1,	// (0x000a861e) navi_pane_vt_t1

0xb713,	// (0x000a8670) navi_slider_pane

0xad45,	// (0x000a7ca2) zooming_pane

0xb71b,	// (0x000a8678) navi_slider_pane_g1

0xb724,	// (0x000a8681) navi_slider_pane_g2

0x0006,

0xf344,	// (0x000ac2a1) navi_slider_pane_g

0xb751,	// (0x000a86ae) aid_levels_zoom

0xb759,	// (0x000a86b6) zooming_pane_g1

0xb761,	// (0x000a86be) zooming_pane_g2

0xb761,	// (0x000a86be) zooming_pane_g3

0x0002,

0xf353,	// (0x000ac2b0) zooming_pane_g

0xb769,	// (0x000a86c6) level_10_zoom

0xb772,	// (0x000a86cf) level_11_zoom

0xb77b,	// (0x000a86d8) level_1_zoom

0xb784,	// (0x000a86e1) level_2_zoom

0xb78d,	// (0x000a86ea) level_3_zoom

0xb796,	// (0x000a86f3) level_4_zoom

0xb79f,	// (0x000a86fc) level_5_zoom

0xb7a8,	// (0x000a8705) level_6_zoom

0xb7b1,	// (0x000a870e) level_7_zoom

0xb7ba,	// (0x000a8717) level_8_zoom

0xb7c3,	// (0x000a8720) level_9_zoom

0xb7d4,	// (0x000a8731) popup_phob_thumbnail_window_g1

0xb7dc,	// (0x000a8739) popup_phob_thumbnail_window_g2

0x0001,

0xf35a,	// (0x000ac2b7) popup_phob_thumbnail_window_g

0x2fcc,	// (0x0009ff29) level_1_location

0x2fd4,	// (0x0009ff31) level_2_location

0x2fdc,	// (0x0009ff39) level_3_location

0x2fe6,	// (0x0009ff43) level_4_location

0xad45,	// (0x000a7ca2) level_5_location

0x251e,	// (0x0009f47b) mce_icon_pane_g1

0x2528,	// (0x0009f485) mce_icon_pane_g2

0x0001,

0xf35f,	// (0x000ac2bc) mce_icon_pane_g

0xb7e4,	// (0x000a8741) main_mup_pane_g1_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g1

0xb7e4,	// (0x000a8741) main_mup_pane_g2_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g2

0xb7e4,	// (0x000a8741) main_mup_pane_g3_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g3

0xb7e4,	// (0x000a8741) main_mup_pane_g4_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g4

0xb7e4,	// (0x000a8741) main_mup_pane_g5_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g5

0xb7e4,	// (0x000a8741) main_mup_pane_g6_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g6

0xb7e4,	// (0x000a8741) main_mup_pane_g7_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g7

0xb7e4,	// (0x000a8741) main_mup_pane_g8_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g8

0xb7e4,	// (0x000a8741) main_mup_pane_g9_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g9

0xb7e4,	// (0x000a8741) main_mup_pane_g10_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g10

0xb7e4,	// (0x000a8741) main_mup_pane_g11_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g11

0xaa74,	// (0x000a79d1) main_mup_pane_g12_ParamLimits

0xaa74,	// (0x000a79d1) main_mup_pane_g12

0xb7e4,	// (0x000a8741) main_mup_pane_g13_ParamLimits

0xb7e4,	// (0x000a8741) main_mup_pane_g13

0x000c,

0xf364,	// (0x000ac2c1) main_mup_pane_g_ParamLimits

0xf364,	// (0x000ac2c1) main_mup_pane_g

0xb7f2,	// (0x000a874f) main_mup_pane_t1_ParamLimits

0xb7f2,	// (0x000a874f) main_mup_pane_t1

0xb7f2,	// (0x000a874f) main_mup_pane_t2_ParamLimits

0xb7f2,	// (0x000a874f) main_mup_pane_t2

0xb7f2,	// (0x000a874f) main_mup_pane_t3_ParamLimits

0xb7f2,	// (0x000a874f) main_mup_pane_t3

0xaac4,	// (0x000a7a21) main_mup_pane_t4_ParamLimits

0xaac4,	// (0x000a7a21) main_mup_pane_t4

0xaac4,	// (0x000a7a21) main_mup_pane_t5_ParamLimits

0xaac4,	// (0x000a7a21) main_mup_pane_t5

0xaad8,	// (0x000a7a35) main_mup_pane_t6_ParamLimits

0xaad8,	// (0x000a7a35) main_mup_pane_t6

0x0005,

0xf37f,	// (0x000ac2dc) main_mup_pane_t_ParamLimits

0xf37f,	// (0x000ac2dc) main_mup_pane_t

0x050f,	// (0x0009d46c) mup_progress_pane_ParamLimits

0x050f,	// (0x0009d46c) mup_progress_pane

0xb806,	// (0x000a8763) mup_visualizer_pane_ParamLimits

0xb806,	// (0x000a8763) mup_visualizer_pane

0xb806,	// (0x000a8763) mup_volume_pane_ParamLimits

0xb806,	// (0x000a8763) mup_volume_pane

0xaa82,	// (0x000a79df) mup_visualizer_pane_g1_ParamLimits

0xaa82,	// (0x000a79df) mup_visualizer_pane_g1

0xb814,	// (0x000a8771) mup_visualizer_pane_g2_ParamLimits

0xb814,	// (0x000a8771) mup_visualizer_pane_g2

0xaa74,	// (0x000a79d1) mup_visualizer_pane_g3_ParamLimits

0xaa74,	// (0x000a79d1) mup_visualizer_pane_g3

0x0002,

0xf38c,	// (0x000ac2e9) mup_visualizer_pane_g_ParamLimits

0xf38c,	// (0x000ac2e9) mup_visualizer_pane_g

0xaaba,	// (0x000a7a17) mup_volume_pane_g1

0xaaba,	// (0x000a7a17) mup_volume_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) mup_volume_pane_g

0xaaba,	// (0x000a7a17) mup_progress_pane_g1

0xaaba,	// (0x000a7a17) mup_progress_pane_g2

0xaaba,	// (0x000a7a17) mup_progress_pane_g3

0x0002,

0xf393,	// (0x000ac2f0) mup_progress_pane_g

0xa79e,	// (0x000a76fb) bg_popup_window_pane_cp05

0xb822,	// (0x000a877f) heading_pane_cp02_ParamLimits

0xb822,	// (0x000a877f) heading_pane_cp02

0xb83e,	// (0x000a879b) list_popup_blid_pane

0xb846,	// (0x000a87a3) list_blid_sat_info_pane_ParamLimits

0xb846,	// (0x000a87a3) list_blid_sat_info_pane

0xb859,	// (0x000a87b6) list_blid_sat_info_pane_g1

0xb861,	// (0x000a87be) list_blid_sat_info_pane_t1

0x263c,	// (0x0009f599) mup_equalizer_pane_ParamLimits

0x263c,	// (0x0009f599) mup_equalizer_pane

0x265d,	// (0x0009f5ba) mup_equalizer_pane_cp1_ParamLimits

0x265d,	// (0x0009f5ba) mup_equalizer_pane_cp1

0x267e,	// (0x0009f5db) mup_equalizer_pane_cp2_ParamLimits

0x267e,	// (0x0009f5db) mup_equalizer_pane_cp2

0x26a3,	// (0x0009f600) mup_equalizer_pane_cp3_ParamLimits

0x26a3,	// (0x0009f600) mup_equalizer_pane_cp3

0x26cc,	// (0x0009f629) mup_equalizer_pane_cp4_ParamLimits

0x26cc,	// (0x0009f629) mup_equalizer_pane_cp4

0x26f5,	// (0x0009f652) mup_equalizer_pane_cp5

0x270d,	// (0x0009f66a) mup_equalizer_pane_cp6

0x2725,	// (0x0009f682) mup_equalizer_pane_cp7

0xddac,	// (0x000aad09) bg_popup_call_poc_act_pane_g9

0xddb4,	// (0x000aad11) bg_popup_call_poc_act_pane_g10

0xddbc,	// (0x000aad19) bg_popup_call_poc_act_pane_g11

0x000a,

0xa9f9,	// (0x000a7956) mup_scale_pane

0xaa11,	// (0x000a796e) mup_scale_pane_g1

0xb86f,	// (0x000a87cc) mup_scale_pane_g2

0x0006,

0xf3af,	// (0x000ac30c) mup_scale_pane_g

0xb893,	// (0x000a87f0) msg_data_pane

0xb89b,	// (0x000a87f8) scroll_pane_cp017

0x274f,	// (0x0009f6ac) bg_list_pane_cp04_ParamLimits

0x274f,	// (0x0009f6ac) bg_list_pane_cp04

0xb8a3,	// (0x000a8800) msg_data_pane_g1

0x2777,	// (0x0009f6d4) msg_data_pane_g2

0x2781,	// (0x0009f6de) msg_data_pane_g3

0x278b,	// (0x0009f6e8) msg_data_pane_g4

0x2793,	// (0x0009f6f0) msg_data_pane_g5

0x279b,	// (0x0009f6f8) msg_data_pane_g6

0x27a3,	// (0x0009f700) msg_data_pane_g7

0x0006,

0xf3be,	// (0x000ac31b) msg_data_pane_g

0x27ab,	// (0x0009f708) msg_text_pane_ParamLimits

0x27ab,	// (0x0009f708) msg_text_pane

0x27e7,	// (0x0009f744) qrid_highlight_pane_cp011_ParamLimits

0x27e7,	// (0x0009f744) qrid_highlight_pane_cp011

0xa79e,	// (0x000a76fb) msg_body_pane

0xa9f9,	// (0x000a7956) msg_header_pane

0xdc11,	// (0x000aab6e) input_focus_pane_cp07

0x280b,	// (0x0009f768) msg_header_pane_t1_ParamLimits

0x280b,	// (0x0009f768) msg_header_pane_t1

0x2827,	// (0x0009f784) msg_header_pane_t2_ParamLimits

0x2827,	// (0x0009f784) msg_header_pane_t2

0x0001,

0xf3d2,	// (0x000ac32f) msg_header_pane_t_ParamLimits

0xf3d2,	// (0x000ac32f) msg_header_pane_t

0xb8cb,	// (0x000a8828) msg_body_pane_g1

0x2847,	// (0x0009f7a4) msg_body_pane_t1_ParamLimits

0x2847,	// (0x0009f7a4) msg_body_pane_t1

0x2878,	// (0x0009f7d5) msg_body_pane_t2_ParamLimits

0x2878,	// (0x0009f7d5) msg_body_pane_t2

0x288a,	// (0x0009f7e7) msg_body_pane_t3_ParamLimits

0x288a,	// (0x0009f7e7) msg_body_pane_t3

0x0002,

0xf3d7,	// (0x000ac334) msg_body_pane_t_ParamLimits

0xf3d7,	// (0x000ac334) msg_body_pane_t

0x28d6,	// (0x0009f833) main_viewer_pane_g1_ParamLimits

0x28d6,	// (0x0009f833) main_viewer_pane_g1

0x28e4,	// (0x0009f841) main_viewer_pane_g2_ParamLimits

0x28e4,	// (0x0009f841) main_viewer_pane_g2

0x28f2,	// (0x0009f84f) main_viewer_pane_g3_ParamLimits

0x28f2,	// (0x0009f84f) main_viewer_pane_g3

0x2901,	// (0x0009f85e) main_viewer_pane_g4_ParamLimits

0x2901,	// (0x0009f85e) main_viewer_pane_g4

0xb8eb,	// (0x000a8848) main_viewer_pane_g5_ParamLimits

0xb8eb,	// (0x000a8848) main_viewer_pane_g5

0xb8eb,	// (0x000a8848) main_viewer_pane_g7_ParamLimits

0xb8eb,	// (0x000a8848) main_viewer_pane_g7

0xb8fd,	// (0x000a885a) main_viewer_pane_g8_ParamLimits

0xb8fd,	// (0x000a885a) main_viewer_pane_g8

0x0007,

0xf3e7,	// (0x000ac344) main_viewer_pane_g_ParamLimits

0xf3e7,	// (0x000ac344) main_viewer_pane_g

0xb915,	// (0x000a8872) viewer_content_pane_ParamLimits

0xb915,	// (0x000a8872) viewer_content_pane

0x293f,	// (0x0009f89c) main_postcard_pane_g1_ParamLimits

0x293f,	// (0x0009f89c) main_postcard_pane_g1

0x2955,	// (0x0009f8b2) main_postcard_pane_g2_ParamLimits

0x2955,	// (0x0009f8b2) main_postcard_pane_g2

0x296b,	// (0x0009f8c8) main_postcard_pane_g3_ParamLimits

0x296b,	// (0x0009f8c8) main_postcard_pane_g3

0x0005,

0xf3f8,	// (0x000ac355) main_postcard_pane_g_ParamLimits

0xf3f8,	// (0x000ac355) main_postcard_pane_g

0x2982,	// (0x0009f8df) main_postcard_pane_g4

0xdef2,	// (0x000aae4f) smil_status_volume_pane_g2

0x29c5,	// (0x0009f922) postcard_pane_ParamLimits

0x29c5,	// (0x0009f922) postcard_pane

0xb923,	// (0x000a8880) postcard_pane_g1_ParamLimits

0xb923,	// (0x000a8880) postcard_pane_g1

0x2a15,	// (0x0009f972) postcard_pane_g2_ParamLimits

0x2a15,	// (0x0009f972) postcard_pane_g2

0x2a21,	// (0x0009f97e) postcard_pane_g3_ParamLimits

0x2a21,	// (0x0009f97e) postcard_pane_g3

0xb931,	// (0x000a888e) postcard_pane_g4_ParamLimits

0xb931,	// (0x000a888e) postcard_pane_g4

0x2a2d,	// (0x0009f98a) postcard_pane_g5_ParamLimits

0x2a2d,	// (0x0009f98a) postcard_pane_g5

0x2a42,	// (0x0009f99f) postcard_pane_g6_ParamLimits

0x2a42,	// (0x0009f99f) postcard_pane_g6

0xb923,	// (0x000a8880) postcard_pane_g7_ParamLimits

0xb923,	// (0x000a8880) postcard_pane_g7

0x0006,

0xf405,	// (0x000ac362) postcard_pane_g_ParamLimits

0xf405,	// (0x000ac362) postcard_pane_g

0x2a5a,	// (0x0009f9b7) main_mp2_pane_g1_ParamLimits

0x2a5a,	// (0x0009f9b7) main_mp2_pane_g1

0x2a68,	// (0x0009f9c5) main_mp2_pane_g2_ParamLimits

0x2a68,	// (0x0009f9c5) main_mp2_pane_g2

0x2a74,	// (0x0009f9d1) main_mp2_pane_g3_ParamLimits

0x2a74,	// (0x0009f9d1) main_mp2_pane_g3

0x0002,

0xf414,	// (0x000ac371) main_mp2_pane_g_ParamLimits

0xf414,	// (0x000ac371) main_mp2_pane_g

0x2a80,	// (0x0009f9dd) main_mp2_pane_t1_ParamLimits

0x2a80,	// (0x0009f9dd) main_mp2_pane_t1

0x2a97,	// (0x0009f9f4) main_mp2_pane_t2_ParamLimits

0x2a97,	// (0x0009f9f4) main_mp2_pane_t2

0x2aa9,	// (0x0009fa06) main_mp2_pane_t3_ParamLimits

0x2aa9,	// (0x0009fa06) main_mp2_pane_t3

0x0002,

0xf41b,	// (0x000ac378) main_mp2_pane_t_ParamLimits

0xf41b,	// (0x000ac378) main_mp2_pane_t

0xaa1b,	// (0x000a7978) pec_content_pane_ParamLimits

0xaa1b,	// (0x000a7978) pec_content_pane

0x018c,	// (0x0009d0e9) scroll_pane_cp015

0xb806,	// (0x000a8763) pec_attribute_pane_ParamLimits

0xb806,	// (0x000a8763) pec_attribute_pane

0xaa74,	// (0x000a79d1) pec_content_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) pec_content_pane_g1

0xb93f,	// (0x000a889c) pec_content_pane_t1_ParamLimits

0xb93f,	// (0x000a889c) pec_content_pane_t1

0xb953,	// (0x000a88b0) pec_content_pane_t2_ParamLimits

0xb953,	// (0x000a88b0) pec_content_pane_t2

0x0001,

0xf422,	// (0x000ac37f) pec_content_pane_t_ParamLimits

0xf422,	// (0x000ac37f) pec_content_pane_t

0x050f,	// (0x0009d46c) list_single_graphic_pane_cp01_ParamLimits

0x050f,	// (0x0009d46c) list_single_graphic_pane_cp01

0xa9f9,	// (0x000a7956) bg_popup_sub_pane_cp04

0xb967,	// (0x000a88c4) popup_mup_playback_window_g1

0xb973,	// (0x000a88d0) popup_mup_playback_window_t1

0xb988,	// (0x000a88e5) popup_mup_playback_window_t2

0x0001,

0xf427,	// (0x000ac384) popup_mup_playback_window_t

0xb9bf,	// (0x000a891c) main_image_pane_g1_ParamLimits

0xb9bf,	// (0x000a891c) main_image_pane_g1

0xba02,	// (0x000a895f) scroll_pane_cp018_ParamLimits

0xba02,	// (0x000a895f) scroll_pane_cp018

0xba1a,	// (0x000a8977) scroll_pane_cp016_ParamLimits

0xba1a,	// (0x000a8977) scroll_pane_cp016

0x2b73,	// (0x0009fad0) smil2_image_pane_ParamLimits

0x2b73,	// (0x0009fad0) smil2_image_pane

0x2ba9,	// (0x0009fb06) smil2_root_pane_ParamLimits

0x2ba9,	// (0x0009fb06) smil2_root_pane

0x2be1,	// (0x0009fb3e) smil2_text_pane_ParamLimits

0x2be1,	// (0x0009fb3e) smil2_text_pane

0x018c,	// (0x0009d0e9) bg_list_pane_cp06

0x018c,	// (0x0009d0e9) grid_radio_pane

0xa79e,	// (0x000a76fb) bg_popup_window_pane_cp06

0xb2e3,	// (0x000a8240) main_fmradio_pane_t1

0xddc4,	// (0x000aad21) heading_pane_cp04

0xb2e3,	// (0x000a8240) main_fmradio_pane_t2

0xddcc,	// (0x000aad29) popup_cale_lunar_info_window_g1

0xb2e3,	// (0x000a8240) main_fmradio_pane_t3

0xddd4,	// (0x000aad31) popup_cale_lunar_info_window_g2

0xb2e3,	// (0x000a8240) main_fmradio_pane_t4

0x0001,

0xb2e3,	// (0x000a8240) main_fmradio_pane_t5

0x0004,

0xf4f7,	// (0x000ac454) popup_cale_lunar_info_window_g

0xf287,	// (0x000ac1e4) main_fmradio_pane_t

0x018c,	// (0x0009d0e9) wait_bar_pane_cp03

0x050f,	// (0x0009d46c) cell_fmradio_pane_ParamLimits

0x050f,	// (0x0009d46c) cell_fmradio_pane

0xaa74,	// (0x000a79d1) cell_fmradio_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_fmradio_pane_g1

0x018c,	// (0x0009d0e9) grid_highlight_pane_cp011

0xce40,	// (0x000a9d9d) poc_content_pane_ParamLimits

0xce40,	// (0x000a9d9d) poc_content_pane

0xce52,	// (0x000a9daf) scroll_pane_cp019

0x2c71,	// (0x0009fbce) popup_call_poc_act_window_ParamLimits

0x2c71,	// (0x0009fbce) popup_call_poc_act_window

0x2c95,	// (0x0009fbf2) popup_call_poc_inact_window_ParamLimits

0x2c95,	// (0x0009fbf2) popup_call_poc_inact_window

0xf4d3,	// (0x000ac430) bg_popup_call_poc_act_pane_g

0xdd3c,	// (0x000aac99) bg_popup_call_poc_inact_pane_g1

0xdd44,	// (0x000aaca1) bg_popup_call_poc_inact_pane_g2

0xce5a,	// (0x000a9db7) popup_call_poc_act_window_g2

0xdd4c,	// (0x000aaca9) bg_popup_call_poc_inact_pane_g3

0xdd54,	// (0x000aacb1) bg_popup_call_poc_inact_pane_g4

0xdd5c,	// (0x000aacb9) bg_popup_call_poc_inact_pane_g5

0xce62,	// (0x000a9dbf) popup_call_poc_act_window_t1_ParamLimits

0xce62,	// (0x000a9dbf) popup_call_poc_act_window_t1

0xce8a,	// (0x000a9de7) popup_call_poc_act_window_t2_ParamLimits

0xce8a,	// (0x000a9de7) popup_call_poc_act_window_t2

0xceb2,	// (0x000a9e0f) popup_call_poc_act_window_t3_ParamLimits

0xceb2,	// (0x000a9e0f) popup_call_poc_act_window_t3

0xceda,	// (0x000a9e37) popup_call_poc_act_window_t4_ParamLimits

0xceda,	// (0x000a9e37) popup_call_poc_act_window_t4

0x0003,

0xf43c,	// (0x000ac399) popup_call_poc_act_window_t_ParamLimits

0xf43c,	// (0x000ac399) popup_call_poc_act_window_t

0xdd64,	// (0x000aacc1) bg_popup_call_poc_inact_pane_g6

0xdd6c,	// (0x000aacc9) bg_popup_call_poc_inact_pane_g7

0xdd74,	// (0x000aacd1) bg_popup_call_poc_inact_pane_g8

0xceec,	// (0x000a9e49) popup_call_poc_inact_window_g2

0xdd7c,	// (0x000aacd9) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4c0,	// (0x000ac41d) bg_popup_call_poc_inact_pane_g

0xcef4,	// (0x000a9e51) popup_call_poc_inact_window_t1_ParamLimits

0xcef4,	// (0x000a9e51) popup_call_poc_inact_window_t1

0xcf09,	// (0x000a9e66) popup_call_poc_inact_window_t2_ParamLimits

0xcf09,	// (0x000a9e66) popup_call_poc_inact_window_t2

0xcf1e,	// (0x000a9e7b) popup_call_poc_inact_window_t3_ParamLimits

0xcf1e,	// (0x000a9e7b) popup_call_poc_inact_window_t3

0x0002,

0xf445,	// (0x000ac3a2) popup_call_poc_inact_window_t_ParamLimits

0xf445,	// (0x000ac3a2) popup_call_poc_inact_window_t

0xde6a,	// (0x000aadc7) context_pane_ParamLimits

0x34f9,	// (0x000a0456) signal_pane_ParamLimits

0xad45,	// (0x000a7ca2) main_call2_pane

0xba6f,	// (0x000a89cc) popup_phob_thumbnail2_window_ParamLimits

0xba6f,	// (0x000a89cc) popup_phob_thumbnail2_window

0xb8d3,	// (0x000a8830) aid_hotspot_pointer_arrow_pane

0xb8db,	// (0x000a8838) aid_hotspot_pointer_hand_pane

0x2f94,	// (0x0009fef1) phob_pre_status_pane_g5

0xaa1b,	// (0x000a7978) cams_zoom_pane_ParamLimits

0xaa1b,	// (0x000a7978) image_vga_pane_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g2_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g3_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g4_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g5_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g6_ParamLimits

0xaa74,	// (0x000a79d1) main_camera_pane_g7_ParamLimits

0xf180,	// (0x000ac0dd) main_camera_pane_g_ParamLimits

0xaac4,	// (0x000a7a21) main_camera_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) main_camera_pane_t2_ParamLimits

0xf191,	// (0x000ac0ee) main_camera_pane_t_ParamLimits

0xa9f9,	// (0x000a7956) bg_popup_preview_window_pane_cp01_ParamLimits

0xa9f9,	// (0x000a7956) bg_popup_preview_window_pane_cp01

0xcf33,	// (0x000a9e90) popup_phob_thumbnail2_window_g1_ParamLimits

0xcf33,	// (0x000a9e90) popup_phob_thumbnail2_window_g1

0xa79e,	// (0x000a76fb) call2_cli_visual_pane

0x2cc9,	// (0x0009fc26) popup_call2_audio_conf_window_ParamLimits

0x2cc9,	// (0x0009fc26) popup_call2_audio_conf_window

0x2cf1,	// (0x0009fc4e) popup_call2_audio_first_window_ParamLimits

0x2cf1,	// (0x0009fc4e) popup_call2_audio_first_window

0x2d87,	// (0x0009fce4) popup_call2_audio_in_window_ParamLimits

0x2d87,	// (0x0009fce4) popup_call2_audio_in_window

0x2dd3,	// (0x0009fd30) popup_call2_audio_out_window_ParamLimits

0x2dd3,	// (0x0009fd30) popup_call2_audio_out_window

0x2e45,	// (0x0009fda2) popup_call2_audio_second_window_ParamLimits

0x2e45,	// (0x0009fda2) popup_call2_audio_second_window

0x2eab,	// (0x0009fe08) popup_call2_audio_wait_window_ParamLimits

0x2eab,	// (0x0009fe08) popup_call2_audio_wait_window

0xa79e,	// (0x000a76fb) bg_popup_call2_act_pane_cp03

0xa9db,	// (0x000a7938) list_conf_pane_cp

0xcf3f,	// (0x000a9e9c) popup_call2_audio_conf_window_t1

0xcf4d,	// (0x000a9eaa) list_single_graphic_popup_conf2_pane_ParamLimits

0xcf4d,	// (0x000a9eaa) list_single_graphic_popup_conf2_pane

0xb53c,	// (0x000a8499) list_highlight_pane_cp04

0xcf60,	// (0x000a9ebd) list_single_graphic_popup_conf2_pane_g1

0xb54d,	// (0x000a84aa) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf44c,	// (0x000ac3a9) list_single_graphic_popup_conf2_pane_g

0xcf6a,	// (0x000a9ec7) list_single_graphic_popup_conf2_pane_t1

0xcf78,	// (0x000a9ed5) bg_popup_call2_act_pane_cp01_ParamLimits

0xcf78,	// (0x000a9ed5) bg_popup_call2_act_pane_cp01

0xd002,	// (0x000a9f5f) call_type_pane_cp05_ParamLimits

0xd002,	// (0x000a9f5f) call_type_pane_cp05

0xd056,	// (0x000a9fb3) popup_call2_audio_second_window_g1_ParamLimits

0xd056,	// (0x000a9fb3) popup_call2_audio_second_window_g1

0xd0aa,	// (0x000aa007) popup_call2_audio_second_window_g2_ParamLimits

0xd0aa,	// (0x000aa007) popup_call2_audio_second_window_g2

0x0002,

0xf451,	// (0x000ac3ae) popup_call2_audio_second_window_g_ParamLimits

0xf451,	// (0x000ac3ae) popup_call2_audio_second_window_g

0xd10f,	// (0x000aa06c) popup_call2_audio_second_window_t1_ParamLimits

0xd10f,	// (0x000aa06c) popup_call2_audio_second_window_t1

0xd1ca,	// (0x000aa127) popup_call2_audio_second_window_t2_ParamLimits

0xd1ca,	// (0x000aa127) popup_call2_audio_second_window_t2

0xd21d,	// (0x000aa17a) popup_call2_audio_second_window_t3_ParamLimits

0xd21d,	// (0x000aa17a) popup_call2_audio_second_window_t3

0x0003,

0xf458,	// (0x000ac3b5) popup_call2_audio_second_window_t_ParamLimits

0xf458,	// (0x000ac3b5) popup_call2_audio_second_window_t

0xa79e,	// (0x000a76fb) bg_popup_call2_in_pane_cp02

0xa7a8,	// (0x000a7705) call_type_pane_cp04

0x2ee5,	// (0x0009fe42) popup_call2_audio_wait_window_g1

0x2eed,	// (0x0009fe4a) popup_call2_audio_wait_window_g2

0x0001,

0xf461,	// (0x000ac3be) popup_call2_audio_wait_window_g

0xa7c0,	// (0x000a771d) popup_call2_audio_wait_window_t3

0xd310,	// (0x000aa26d) bg_popup_call2_act_pane_ParamLimits

0xd310,	// (0x000aa26d) bg_popup_call2_act_pane

0xd3d0,	// (0x000aa32d) call_type_pane_cp03_ParamLimits

0xd3d0,	// (0x000aa32d) call_type_pane_cp03

0xd434,	// (0x000aa391) popup_call2_audio_first_window_g1_ParamLimits

0xd434,	// (0x000aa391) popup_call2_audio_first_window_g1

0xd4a4,	// (0x000aa401) popup_call2_audio_first_window_g2_ParamLimits

0xd4a4,	// (0x000aa401) popup_call2_audio_first_window_g2

0xba30,	// (0x000a898d) popup_call2_audio_first_window_g3_ParamLimits

0xba30,	// (0x000a898d) popup_call2_audio_first_window_g3

0x0004,

0xf466,	// (0x000ac3c3) popup_call2_audio_first_window_g_ParamLimits

0xf466,	// (0x000ac3c3) popup_call2_audio_first_window_g

0xd582,	// (0x000aa4df) popup_call2_audio_first_window_t1_ParamLimits

0xd582,	// (0x000aa4df) popup_call2_audio_first_window_t1

0xd685,	// (0x000aa5e2) popup_call2_audio_first_window_t4_ParamLimits

0xd685,	// (0x000aa5e2) popup_call2_audio_first_window_t4

0xd768,	// (0x000aa6c5) popup_call2_audio_first_window_t5_ParamLimits

0xd768,	// (0x000aa6c5) popup_call2_audio_first_window_t5

0x0003,

0xf471,	// (0x000ac3ce) popup_call2_audio_first_window_t_ParamLimits

0xf471,	// (0x000ac3ce) popup_call2_audio_first_window_t

0xa9f1,	// (0x000a794e) bg_popup_call2_act_pane_g1

0xddde,	// (0x000aad3b) popup_cale_lunar_info_window_t1

0xddec,	// (0x000aad49) popup_cale_lunar_info_window_t2

0xddfa,	// (0x000aad57) popup_cale_lunar_info_window_t3

0xa79e,	// (0x000a76fb) bg_popup_call2_bubble_pane

0xd869,	// (0x000aa7c6) bg_popup_call2_in_pane_cp01_ParamLimits

0xd869,	// (0x000aa7c6) bg_popup_call2_in_pane_cp01

0xa47a,	// (0x000a73d7) call_type_pane_cp02

0x2ef5,	// (0x0009fe52) popup_call2_audio_out_window_g1_ParamLimits

0x2ef5,	// (0x0009fe52) popup_call2_audio_out_window_g1

0xd8b1,	// (0x000aa80e) popup_call2_audio_out_window_g2_ParamLimits

0xd8b1,	// (0x000aa80e) popup_call2_audio_out_window_g2

0x2f21,	// (0x0009fe7e) popup_call2_audio_out_window_g3_ParamLimits

0x2f21,	// (0x0009fe7e) popup_call2_audio_out_window_g3

0x0003,

0xf47a,	// (0x000ac3d7) popup_call2_audio_out_window_g_ParamLimits

0xf47a,	// (0x000ac3d7) popup_call2_audio_out_window_g

0xd8e8,	// (0x000aa845) popup_call2_audio_out_window_t1_ParamLimits

0xd8e8,	// (0x000aa845) popup_call2_audio_out_window_t1

0xd947,	// (0x000aa8a4) popup_call2_audio_out_window_t2_ParamLimits

0xd947,	// (0x000aa8a4) popup_call2_audio_out_window_t2

0xd99b,	// (0x000aa8f8) popup_call2_audio_out_window_t3_ParamLimits

0xd99b,	// (0x000aa8f8) popup_call2_audio_out_window_t3

0xd9b1,	// (0x000aa90e) popup_call2_audio_out_window_t4_ParamLimits

0xd9b1,	// (0x000aa90e) popup_call2_audio_out_window_t4

0xd9c7,	// (0x000aa924) popup_call2_audio_out_window_t5_ParamLimits

0xd9c7,	// (0x000aa924) popup_call2_audio_out_window_t5

0x0005,

0xf483,	// (0x000ac3e0) popup_call2_audio_out_window_t_ParamLimits

0xf483,	// (0x000ac3e0) popup_call2_audio_out_window_t

0xda2b,	// (0x000aa988) bg_popup_call2_in_pane_ParamLimits

0xda2b,	// (0x000aa988) bg_popup_call2_in_pane

0xda87,	// (0x000aa9e4) popup_call2_audio_in_window_g1_ParamLimits

0xda87,	// (0x000aa9e4) popup_call2_audio_in_window_g1

0xdabf,	// (0x000aaa1c) popup_call2_audio_in_window_g2_ParamLimits

0xdabf,	// (0x000aaa1c) popup_call2_audio_in_window_g2

0xdaf7,	// (0x000aaa54) popup_call2_audio_in_window_g3_ParamLimits

0xdaf7,	// (0x000aaa54) popup_call2_audio_in_window_g3

0x0003,

0xf490,	// (0x000ac3ed) popup_call2_audio_in_window_g_ParamLimits

0xf490,	// (0x000ac3ed) popup_call2_audio_in_window_g

0xdb4f,	// (0x000aaaac) popup_call2_audio_in_window_t1_ParamLimits

0xdb4f,	// (0x000aaaac) popup_call2_audio_in_window_t1

0xdc26,	// (0x000aab83) popup_call2_audio_in_window_t2_ParamLimits

0xdc26,	// (0x000aab83) popup_call2_audio_in_window_t2

0xdca6,	// (0x000aac03) popup_call2_audio_in_window_t3_ParamLimits

0xdca6,	// (0x000aac03) popup_call2_audio_in_window_t3

0xdcc0,	// (0x000aac1d) popup_call2_audio_in_window_t4_ParamLimits

0xdcc0,	// (0x000aac1d) popup_call2_audio_in_window_t4

0xdcd2,	// (0x000aac2f) popup_call2_audio_in_window_t5_ParamLimits

0xdcd2,	// (0x000aac2f) popup_call2_audio_in_window_t5

0xdce7,	// (0x000aac44) popup_call2_audio_in_window_t6_ParamLimits

0xdce7,	// (0x000aac44) popup_call2_audio_in_window_t6

0x0005,

0xf499,	// (0x000ac3f6) popup_call2_audio_in_window_t_ParamLimits

0xf499,	// (0x000ac3f6) popup_call2_audio_in_window_t

0xa9f1,	// (0x000a794e) bg_popup_call2_in_pane_g1

0xde08,	// (0x000aad65) popup_cale_lunar_info_window_t4

0x0003,

0xf4fc,	// (0x000ac459) popup_cale_lunar_info_window_t

0xa9f9,	// (0x000a7956) bg_popup_call2_rect_pane_ParamLimits

0xa9f9,	// (0x000a7956) bg_popup_call2_rect_pane

0xa79e,	// (0x000a76fb) call2_cli_visual_graphic_pane

0xa79e,	// (0x000a76fb) call2_cli_visual_text_pane

0xba96,	// (0x000a89f3) smil_status_volume_pane_g3

0x0002,

0xaa11,	// (0x000a796e) call2_cli_visual_graphic_pane_g1

0xaa11,	// (0x000a796e) call2_cli_visual_graphic_pane_g2

0xaa11,	// (0x000a796e) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4a6,	// (0x000ac403) call2_cli_visual_graphic_pane_g

0xdcfc,	// (0x000aac59) bg_popup_call2_rect_pane_g1

0xac36,	// (0x000a7b93) bg_popup_call2_rect_pane_g2

0xdd04,	// (0x000aac61) bg_popup_call2_rect_pane_g3

0xdd0c,	// (0x000aac69) bg_popup_call2_rect_pane_g4

0xdd14,	// (0x000aac71) bg_popup_call2_rect_pane_g5

0xdd1c,	// (0x000aac79) bg_popup_call2_rect_pane_g6

0xdd24,	// (0x000aac81) bg_popup_call2_rect_pane_g7

0xdd2c,	// (0x000aac89) bg_popup_call2_rect_pane_g8

0xdd34,	// (0x000aac91) bg_popup_call2_rect_pane_g9

0x0008,

0xf4ad,	// (0x000ac40a) bg_popup_call2_rect_pane_g

0xdd3c,	// (0x000aac99) bg_popup_call2_bubble_pane_g1

0xdd44,	// (0x000aaca1) bg_popup_call2_bubble_pane_g2

0xdd4c,	// (0x000aaca9) bg_popup_call2_bubble_pane_g3

0xdd54,	// (0x000aacb1) bg_popup_call2_bubble_pane_g4

0xdd5c,	// (0x000aacb9) bg_popup_call2_bubble_pane_g5

0xdd64,	// (0x000aacc1) bg_popup_call2_bubble_pane_g6

0xdd6c,	// (0x000aacc9) bg_popup_call2_bubble_pane_g7

0xdd74,	// (0x000aacd1) bg_popup_call2_bubble_pane_g8

0xdd7c,	// (0x000aacd9) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4c0,	// (0x000ac41d) bg_popup_call2_bubble_pane_g

0x07af,	// (0x0009d70c) aid_cale_week_size_cell_pane

0x0df3,	// (0x0009dd50) aid_cams_cif_uncrop_pane_ParamLimits

0x0df3,	// (0x0009dd50) aid_cams_cif_uncrop_pane

0xaa1b,	// (0x000a7978) aid_cams_size_cell_ParamLimits

0xaa1b,	// (0x000a7978) aid_cams_size_cell

0xaa1b,	// (0x000a7978) grid_cams_pane_ParamLimits

0xaa1b,	// (0x000a7978) linegrid_cams_pane_ParamLimits

0x1006,	// (0x0009df63) call_video_pane_t1

0x1020,	// (0x0009df7d) call_video_pane_t2

0x0001,

0xf1dd,	// (0x000ac13a) call_video_pane_t

0x1458,	// (0x0009e3b5) aid_cale_month_size_cell_pane_ParamLimits

0x1458,	// (0x0009e3b5) aid_cale_month_size_cell_pane

0xf540,	// (0x000ac49d) smil_status_volume_pane_g

0xbaa3,	// (0x000a8a00) volume_smil_pane_ParamLimits

0xa3ac,	// (0x000a7309) aid_popup2_width_pane

0x0710,	// (0x0009d66d) cell_qdial_pane_g4_ParamLimits

0x0710,	// (0x0009d66d) cell_qdial_pane_g4

0x235b,	// (0x0009f2b8) aid_blid_cardinal_pane_ParamLimits

0x2367,	// (0x0009f2c4) aid_blid_destination_pane_ParamLimits

0x2367,	// (0x0009f2c4) aid_blid_destination_pane

0xa9f9,	// (0x000a7956) bg_popup_call_poc_act_pane_ParamLimits

0xa9f9,	// (0x000a7956) bg_popup_call_poc_act_pane

0xa9f9,	// (0x000a7956) bg_popup_call_poc_inact_pane_ParamLimits

0xa9f9,	// (0x000a7956) bg_popup_call_poc_inact_pane

0xdd84,	// (0x000aace1) bg_popup_call_poc_act_pane_g1

0xdd8c,	// (0x000aace9) bg_popup_call_poc_act_pane_g2

0xdd94,	// (0x000aacf1) bg_popup_call_poc_act_pane_g3

0xdd54,	// (0x000aacb1) bg_popup_call_poc_act_pane_g4

0xdd5c,	// (0x000aacb9) bg_popup_call_poc_act_pane_g5

0xdd9c,	// (0x000aacf9) bg_popup_call_poc_act_pane_g6

0xdd6c,	// (0x000aacc9) bg_popup_call_poc_act_pane_g7

0xdda4,	// (0x000aad01) bg_popup_call_poc_act_pane_g8

0xa79e,	// (0x000a76fb) main_usb_pane

0xba46,	// (0x000a89a3) popup_cale_lunar_info_window

0x12ed,	// (0x0009e24a) im_reading_pane_t1_ParamLimits

0xae14,	// (0x000a7d71) list_im_pane_ParamLimits

0xae25,	// (0x000a7d82) scroll_pane_cp07_ParamLimits

0xa79e,	// (0x000a76fb) grid_highlight_pane_cp012

0xa9f9,	// (0x000a7956) mup_scale_pane_ParamLimits

0xaa74,	// (0x000a79d1) main_usb_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) main_usb_pane_g1

0xaa74,	// (0x000a79d1) main_usb_pane_g2_ParamLimits

0xaa74,	// (0x000a79d1) main_usb_pane_g2

0x0001,

0xf1bc,	// (0x000ac119) main_usb_pane_g_ParamLimits

0xf1bc,	// (0x000ac119) main_usb_pane_g

0xaac4,	// (0x000a7a21) main_usb_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) main_usb_pane_t1

0xaac4,	// (0x000a7a21) main_usb_pane_t2_ParamLimits

0xaac4,	// (0x000a7a21) main_usb_pane_t2

0xaac4,	// (0x000a7a21) main_usb_pane_t3_ParamLimits

0xaac4,	// (0x000a7a21) main_usb_pane_t3

0xaac4,	// (0x000a7a21) main_usb_pane_t4_ParamLimits

0xaac4,	// (0x000a7a21) main_usb_pane_t4

0xaac4,	// (0x000a7a21) main_usb_pane_t5_ParamLimits

0xaac4,	// (0x000a7a21) main_usb_pane_t5

0xaac4,	// (0x000a7a21) main_usb_pane_t6_ParamLimits

0xaac4,	// (0x000a7a21) main_usb_pane_t6

0x0005,

0xf4ea,	// (0x000ac447) main_usb_pane_t_ParamLimits

0x22fa,	// (0x0009f257) aid_text_placing

0x2305,	// (0x0009f262) main_location2_pane_t1_ParamLimits

0x231b,	// (0x0009f278) main_location2_pane_t2_ParamLimits

0x2331,	// (0x0009f28e) main_location2_pane_t3_ParamLimits

0x2347,	// (0x0009f2a4) main_location2_pane_t4_ParamLimits

0x2347,	// (0x0009f2a4) main_location2_pane_t4

0xf319,	// (0x000ac276) main_location2_pane_t_ParamLimits

0xaa35,	// (0x000a7992) find_pinb_pane_g2_ParamLimits

0xaa35,	// (0x000a7992) find_pinb_pane_g2

0x0001,

0xf095,	// (0x000abff2) find_pinb_pane_g_ParamLimits

0xf095,	// (0x000abff2) find_pinb_pane_g

0xaa41,	// (0x000a799e) find_pinb_pane_t1_ParamLimits

0xaa53,	// (0x000a79b0) find_pinb_pane_t2_ParamLimits

0xf09a,	// (0x000abff7) find_pinb_pane_t_ParamLimits

0xa79e,	// (0x000a76fb) main_call3_pane

0x1a5d,	// (0x0009e9ba) cale_month_day_heading_pane_t1_ParamLimits

0x1ae3,	// (0x0009ea40) cale_month_day_heading_pane_t2_ParamLimits

0x1b5c,	// (0x0009eab9) cale_month_day_heading_pane_t3_ParamLimits

0x1bd5,	// (0x0009eb32) cale_month_day_heading_pane_t4_ParamLimits

0x1c56,	// (0x0009ebb3) cale_month_day_heading_pane_t5_ParamLimits

0x1cdf,	// (0x0009ec3c) cale_month_day_heading_pane_t6_ParamLimits

0x1d70,	// (0x0009eccd) cale_month_day_heading_pane_t7_ParamLimits

0xf215,	// (0x000ac172) cale_month_day_heading_pane_t_ParamLimits

0xb08a,	// (0x000a7fe7) smil_status_volume_pane

0x29e9,	// (0x0009f946) postcard_address_pane_ParamLimits

0x29e9,	// (0x0009f946) postcard_address_pane

0x29ff,	// (0x0009f95c) postcard_message_pane_ParamLimits

0x29ff,	// (0x0009f95c) postcard_message_pane

0x2f4d,	// (0x0009feaa) call2_cli_visual_pane_t1_ParamLimits

0x2f4d,	// (0x0009feaa) call2_cli_visual_pane_t1

0xdf1d,	// (0x000aae7a) postcard_message_pane_t1_ParamLimits

0xdf1d,	// (0x000aae7a) postcard_message_pane_t1

0xdf05,	// (0x000aae62) postcard_address_pane_t1_ParamLimits

0xdf05,	// (0x000aae62) postcard_address_pane_t1

0x36b5,	// (0x000a0612) popup_call3_audio_in_window_ParamLimits

0x36b5,	// (0x000a0612) popup_call3_audio_in_window

0x353a,	// (0x000a0497) bg_popup_call3_in_pane_ParamLimits

0x353a,	// (0x000a0497) bg_popup_call3_in_pane

0x35b6,	// (0x000a0513) popup_call3_audio_in_window_g1_ParamLimits

0x35b6,	// (0x000a0513) popup_call3_audio_in_window_g1

0x35d6,	// (0x000a0533) popup_call3_audio_in_window_g2_ParamLimits

0x35d6,	// (0x000a0533) popup_call3_audio_in_window_g2

0x35f6,	// (0x000a0553) popup_call3_audio_in_window_g3_ParamLimits

0x35f6,	// (0x000a0553) popup_call3_audio_in_window_g3

0x0003,

0xf547,	// (0x000ac4a4) popup_call3_audio_in_window_g_ParamLimits

0xf547,	// (0x000ac4a4) popup_call3_audio_in_window_g

0x3627,	// (0x000a0584) popup_call3_audio_in_window_t1_ParamLimits

0x3627,	// (0x000a0584) popup_call3_audio_in_window_t1

0x3665,	// (0x000a05c2) popup_call3_audio_in_window_t2_ParamLimits

0x3665,	// (0x000a05c2) popup_call3_audio_in_window_t2

0x36a3,	// (0x000a0600) popup_call3_audio_in_window_t3_ParamLimits

0x36a3,	// (0x000a0600) popup_call3_audio_in_window_t3

0x0002,

0xf550,	// (0x000ac4ad) popup_call3_audio_in_window_t_ParamLimits

0xf550,	// (0x000ac4ad) popup_call3_audio_in_window_t

0xad45,	// (0x000a7ca2) bg_popup_call3_rect_pane

0xdcfc,	// (0x000aac59) bg_popup_call3_rect_pane_g1

0xac36,	// (0x000a7b93) bg_popup_call3_rect_pane_g2

0xdd04,	// (0x000aac61) bg_popup_call3_rect_pane_g3

0xdd0c,	// (0x000aac69) bg_popup_call3_rect_pane_g4

0xdd14,	// (0x000aac71) bg_popup_call3_rect_pane_g5

0xdd1c,	// (0x000aac79) bg_popup_call3_rect_pane_g6

0xdd24,	// (0x000aac81) bg_popup_call3_rect_pane_g7

0x018c,	// (0x0009d0e9) mup_visualizer_osc_pane

0x018c,	// (0x0009d0e9) mup_visualizer_spec_pane

0x356a,	// (0x000a04c7) call3_video_qcif_pane_ParamLimits

0x356a,	// (0x000a04c7) call3_video_qcif_pane

0x357d,	// (0x000a04da) call3_video_qcif_uncrop_pane_ParamLimits

0x357d,	// (0x000a04da) call3_video_qcif_uncrop_pane

0x358d,	// (0x000a04ea) call3_video_subqcif_pane_ParamLimits

0x358d,	// (0x000a04ea) call3_video_subqcif_pane

0x35a3,	// (0x000a0500) call3_video_subqcif_uncrop_pane_ParamLimits

0x35a3,	// (0x000a0500) call3_video_subqcif_uncrop_pane

0x3616,	// (0x000a0573) popup_call3_audio_in_window_g4_ParamLimits

0x3616,	// (0x000a0573) popup_call3_audio_in_window_g4

0x018c,	// (0x0009d0e9) mup_spec_half_pane

0x018c,	// (0x0009d0e9) mup_spec_half_pane_cp

0x018c,	// (0x0009d0e9) mup_osc_middle_pane

0xaaba,	// (0x000a7a17) mup_visualizer_osc_pane_g1

0xdeb8,	// (0x000aae15) mup_spec_bar_pane_ParamLimits

0xdeb8,	// (0x000aae15) mup_spec_bar_pane

0xaaba,	// (0x000a7a17) mup_spec_bar_pane_g1

0xaaba,	// (0x000a7a17) mup_spec_bar_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) mup_spec_bar_pane_g

0x07af,	// (0x0009d70c) aid_cale_week_size_cell_pane_ParamLimits

0x07c9,	// (0x0009d726) bg_cale_heading_pane_ParamLimits

0x07ed,	// (0x0009d74a) bg_cale_pane_cp01_ParamLimits

0x080a,	// (0x0009d767) cale_week_corner_pane_ParamLimits

0x0829,	// (0x0009d786) cale_week_day_heading_pane_ParamLimits

0x0852,	// (0x0009d7af) cale_week_scroll_pane_g1_ParamLimits

0x0871,	// (0x0009d7ce) cale_week_scroll_pane_g2_ParamLimits

0x0889,	// (0x0009d7e6) cale_week_scroll_pane_g3_ParamLimits

0x08a1,	// (0x0009d7fe) cale_week_scroll_pane_g4_ParamLimits

0x08b9,	// (0x0009d816) cale_week_scroll_pane_g5_ParamLimits

0x08d9,	// (0x0009d836) cale_week_scroll_pane_g6_ParamLimits

0x08f9,	// (0x0009d856) cale_week_scroll_pane_g7_ParamLimits

0x091d,	// (0x0009d87a) cale_week_scroll_pane_g8_ParamLimits

0x0941,	// (0x0009d89e) cale_week_scroll_pane_g9_ParamLimits

0x0959,	// (0x0009d8b6) cale_week_scroll_pane_g10_ParamLimits

0x0971,	// (0x0009d8ce) cale_week_scroll_pane_g11_ParamLimits

0x0989,	// (0x0009d8e6) cale_week_scroll_pane_g12_ParamLimits

0x09ad,	// (0x0009d90a) cale_week_scroll_pane_g13_ParamLimits

0x09ad,	// (0x0009d90a) cale_week_scroll_pane_g14_ParamLimits

0x09ad,	// (0x0009d90a) cale_week_scroll_pane_g15_ParamLimits

0xf126,	// (0x000ac083) cale_week_scroll_pane_g_ParamLimits

0x09f5,	// (0x0009d952) cale_week_time_pane_ParamLimits

0x0a19,	// (0x0009d976) grid_cale_week_pane_ParamLimits

0xacbb,	// (0x000a7c18) listscroll_cale_week_pane_t1

0xaccd,	// (0x000a7c2a) scroll_pane_cp08_ParamLimits

0x14d0,	// (0x0009e42d) cale_month_corner_pane_ParamLimits

0xb054,	// (0x000a7fb1) cale_month_pane_t1

0x19d8,	// (0x0009e935) cale_month_week_pane_ParamLimits

0x213a,	// (0x0009f097) popup_call_status_window_g1_ParamLimits

0x214e,	// (0x0009f0ab) popup_call_status_window_g2_ParamLimits

0x2162,	// (0x0009f0bf) popup_call_status_window_g3_ParamLimits

0xf2a0,	// (0x000ac1fd) popup_call_status_window_g_ParamLimits

0xb45a,	// (0x000a83b7) aid_call2_pane

0x27fd,	// (0x0009f75a) msg_header_pane_g1

0x29e9,	// (0x0009f946) postcard_address2_pane_ParamLimits

0x29e9,	// (0x0009f946) postcard_address2_pane

0x29ff,	// (0x0009f95c) postcard_message2_pane_ParamLimits

0x29ff,	// (0x0009f95c) postcard_message2_pane

0x3507,	// (0x000a0464) message2_row_pane_ParamLimits

0x3507,	// (0x000a0464) message2_row_pane

0x3527,	// (0x000a0484) address2_row_pane_ParamLimits

0x3527,	// (0x000a0484) address2_row_pane

0xde85,	// (0x000aade2) postcard_message2_row_pane_g1

0xde8d,	// (0x000aadea) postcard_message2_row_pane_t1

0xde85,	// (0x000aade2) address2_row_pane_g1

0xde8d,	// (0x000aadea) address2_row_pane_t1

0x0d86,	// (0x0009dce3) aid_size_cell_vorec

0xa79e,	// (0x000a76fb) main_rss_pane

0xde9b,	// (0x000aadf8) rss_list_single_pane_ParamLimits

0xde9b,	// (0x000aadf8) rss_list_single_pane

0xdea9,	// (0x000aae06) rss_list_single_pane_t1

0xdea9,	// (0x000aae06) rss_list_single_pane_t2

0x0001,

0xf53b,	// (0x000ac498) rss_list_single_pane_t

0xa79e,	// (0x000a76fb) main_camera2_pane

0xa79e,	// (0x000a76fb) main_video2_pane

0xbab8,	// (0x000a8a15) cams_zoom_pane_cp2_ParamLimits

0xbab8,	// (0x000a8a15) cams_zoom_pane_cp2

0xbab8,	// (0x000a8a15) image2_vga_pane_ParamLimits

0xbab8,	// (0x000a8a15) image2_vga_pane

0xbac6,	// (0x000a8a23) main_camera2_pane_g1_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g1

0xbac6,	// (0x000a8a23) main_camera2_pane_g2_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g2

0xbac6,	// (0x000a8a23) main_camera2_pane_g3_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g3

0xbac6,	// (0x000a8a23) main_camera2_pane_g4_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g4

0xbac6,	// (0x000a8a23) main_camera2_pane_g5_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g5

0xbac6,	// (0x000a8a23) main_camera2_pane_g6_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g6

0xbac6,	// (0x000a8a23) main_camera2_pane_g7_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g7

0xbac6,	// (0x000a8a23) main_camera2_pane_g8_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g8

0x0008,

0xf557,	// (0x000ac4b4) main_camera2_pane_g_ParamLimits

0xf557,	// (0x000ac4b4) main_camera2_pane_g

0x36d7,	// (0x000a0634) main_camera2_pane_t1_ParamLimits

0x36d7,	// (0x000a0634) main_camera2_pane_t1

0x36d7,	// (0x000a0634) main_camera2_pane_t2_ParamLimits

0x36d7,	// (0x000a0634) main_camera2_pane_t2

0x36d7,	// (0x000a0634) main_camera2_pane_t3_ParamLimits

0x36d7,	// (0x000a0634) main_camera2_pane_t3

0x36d7,	// (0x000a0634) main_camera2_pane_t4_ParamLimits

0x36d7,	// (0x000a0634) main_camera2_pane_t4

0x0006,

0xf56a,	// (0x000ac4c7) main_camera2_pane_t_ParamLimits

0xf56a,	// (0x000ac4c7) main_camera2_pane_t

0xbb0a,	// (0x000a8a67) cams_zoom_pane_cp4_ParamLimits

0xbb0a,	// (0x000a8a67) cams_zoom_pane_cp4

0x36eb,	// (0x000a0648) image2_cif_pane_ParamLimits

0x36eb,	// (0x000a0648) image2_cif_pane

0xa417,	// (0x000a7374) image2_subqcif_pane_ParamLimits

0xa417,	// (0x000a7374) image2_subqcif_pane

0x36f9,	// (0x000a0656) main_video2_pane_g1_ParamLimits

0x36f9,	// (0x000a0656) main_video2_pane_g1

0x36f9,	// (0x000a0656) main_video2_pane_g2_ParamLimits

0x36f9,	// (0x000a0656) main_video2_pane_g2

0x36f9,	// (0x000a0656) main_video2_pane_g3_ParamLimits

0x36f9,	// (0x000a0656) main_video2_pane_g3

0x36f9,	// (0x000a0656) main_video2_pane_g4_ParamLimits

0x36f9,	// (0x000a0656) main_video2_pane_g4

0x36f9,	// (0x000a0656) main_video2_pane_g5_ParamLimits

0x36f9,	// (0x000a0656) main_video2_pane_g5

0x36f9,	// (0x000a0656) main_video2_pane_g6_ParamLimits

0x36f9,	// (0x000a0656) main_video2_pane_g6

0x0005,

0xf579,	// (0x000ac4d6) main_video2_pane_g_ParamLimits

0xf579,	// (0x000ac4d6) main_video2_pane_g

0x3707,	// (0x000a0664) main_video2_pane_t1_ParamLimits

0x3707,	// (0x000a0664) main_video2_pane_t1

0x3707,	// (0x000a0664) main_video2_pane_t2_ParamLimits

0x3707,	// (0x000a0664) main_video2_pane_t2

0x3707,	// (0x000a0664) main_video2_pane_t3_ParamLimits

0x3707,	// (0x000a0664) main_video2_pane_t3

0x0002,

0xf586,	// (0x000ac4e3) main_video2_pane_t_ParamLimits

0xf586,	// (0x000ac4e3) main_video2_pane_t

0x2ff8,	// (0x0009ff55) call_muted_g2

0x0001,

0xf52d,	// (0x000ac48a) call_muted_g

0xa79e,	// (0x000a76fb) main_mup2_pane

0xb7e4,	// (0x000a8741) main_mup2_pane_g1_ParamLimits

0xb7e4,	// (0x000a8741) main_mup2_pane_g1

0xb7e4,	// (0x000a8741) main_mup2_pane_g2_ParamLimits

0xb7e4,	// (0x000a8741) main_mup2_pane_g2

0x37c8,	// (0x000a0725) main_mup_pane_g13_cp1

0xa425,	// (0x000a7382) mup_volume_pane_cp1

0xb7e4,	// (0x000a8741) main_mup2_pane_g4_ParamLimits

0xb7e4,	// (0x000a8741) main_mup2_pane_g4

0xb7e4,	// (0x000a8741) main_mup2_pane_g5_ParamLimits

0xb7e4,	// (0x000a8741) main_mup2_pane_g5

0xb7e4,	// (0x000a8741) main_mup2_pane_g6_ParamLimits

0xb7e4,	// (0x000a8741) main_mup2_pane_g6

0xb7e4,	// (0x000a8741) main_mup2_pane_g7_ParamLimits

0xb7e4,	// (0x000a8741) main_mup2_pane_g7

0x0006,

0xf58d,	// (0x000ac4ea) main_mup2_pane_g_ParamLimits

0xf58d,	// (0x000ac4ea) main_mup2_pane_g

0xb7f2,	// (0x000a874f) main_mup2_pane_t1_ParamLimits

0xb7f2,	// (0x000a874f) main_mup2_pane_t1

0xb7f2,	// (0x000a874f) main_mup2_pane_t2_ParamLimits

0xb7f2,	// (0x000a874f) main_mup2_pane_t2

0xb7f2,	// (0x000a874f) main_mup2_pane_t3_ParamLimits

0xb7f2,	// (0x000a874f) main_mup2_pane_t3

0xb7f2,	// (0x000a874f) main_mup2_pane_t4_ParamLimits

0xb7f2,	// (0x000a874f) main_mup2_pane_t4

0xb7f2,	// (0x000a874f) main_mup2_pane_t5_ParamLimits

0xb7f2,	// (0x000a874f) main_mup2_pane_t5

0xb7f2,	// (0x000a874f) main_mup2_pane_t6_ParamLimits

0xb7f2,	// (0x000a874f) main_mup2_pane_t6

0x0005,

0xf59c,	// (0x000ac4f9) main_mup2_pane_t_ParamLimits

0xf59c,	// (0x000ac4f9) main_mup2_pane_t

0xb806,	// (0x000a8763) mup2_visualizer_pane_ParamLimits

0xb806,	// (0x000a8763) mup2_visualizer_pane

0xb806,	// (0x000a8763) mup_progress_pane_cp_ParamLimits

0xb806,	// (0x000a8763) mup_progress_pane_cp

0xbb2e,	// (0x000a8a8b) mup_volume_pane_cp_ParamLimits

0xbb2e,	// (0x000a8a8b) mup_volume_pane_cp

0xaa74,	// (0x000a79d1) mup2_visualizer_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) mup2_visualizer_pane_g1

0xaa82,	// (0x000a79df) mup2_visualizer_pane_g2_ParamLimits

0xaa82,	// (0x000a79df) mup2_visualizer_pane_g2

0xaa82,	// (0x000a79df) mup2_visualizer_pane_g3_ParamLimits

0xaa82,	// (0x000a79df) mup2_visualizer_pane_g3

0x0002,

0xf09f,	// (0x000abffc) mup2_visualizer_pane_g_ParamLimits

0xf09f,	// (0x000abffc) mup2_visualizer_pane_g

0x018c,	// (0x0009d0e9) aid_size_cell_fmradio

0x31a8,	// (0x000a0105) aid_height_parent_landcape

0xaeb2,	// (0x000a7e0f) wml_content_pane_cp

0xaeba,	// (0x000a7e17) wml_tabs_pane

0xaec3,	// (0x000a7e20) popup_wml_miniature_window

0xaecb,	// (0x000a7e28) scroll_pane_cp021

0xaedf,	// (0x000a7e3c) wml_content_pane_comp8

0xa79e,	// (0x000a76fb) bg_popup_sub_pane_cp05

0xdf4f,	// (0x000aaeac) popup_wml_miniature_window_g1

0xdf57,	// (0x000aaeb4) wml_miniature_view_pane

0x371b,	// (0x000a0678) aid_size_wml_view

0x3723,	// (0x000a0680) wml_miniature_view_pane_g1

0x372c,	// (0x000a0689) wml_miniature_view_pane_g2

0x3735,	// (0x000a0692) wml_miniature_view_pane_g3

0x373d,	// (0x000a069a) wml_miniature_view_pane_g4

0x3745,	// (0x000a06a2) wml_miniature_view_pane_g5

0x374d,	// (0x000a06aa) wml_miniature_view_pane_g6

0x3755,	// (0x000a06b2) wml_miniature_view_pane_g7

0x375d,	// (0x000a06ba) wml_miniature_view_pane_g8

0x0007,

0xf5a9,	// (0x000ac506) wml_miniature_view_pane_g

0xdf5f,	// (0x000aaebc) background_graphic_ParamLimits

0xdf5f,	// (0x000aaebc) background_graphic

0xdf6b,	// (0x000aaec8) wml_tabs_2_pane

0xdf74,	// (0x000aaed1) wml_tabs_3_pane_ParamLimits

0xdf74,	// (0x000aaed1) wml_tabs_3_pane

0xdf86,	// (0x000aaee3) wml_tabs_4_pane_ParamLimits

0xdf86,	// (0x000aaee3) wml_tabs_4_pane

0xdf9c,	// (0x000aaef9) wml_tabs_5_pane_ParamLimits

0xdf9c,	// (0x000aaef9) wml_tabs_5_pane

0xdfb6,	// (0x000aaf13) wml_tabs_pane_g2_ParamLimits

0xdfb6,	// (0x000aaf13) wml_tabs_pane_g2

0xdfcb,	// (0x000aaf28) wml_tabs_pane_g3_ParamLimits

0xdfcb,	// (0x000aaf28) wml_tabs_pane_g3

0xdfe0,	// (0x000aaf3d) wml_tabs_2_active_pane_ParamLimits

0xdfe0,	// (0x000aaf3d) wml_tabs_2_active_pane

0xdfe0,	// (0x000aaf3d) wml_tabs_2_passive_pane_ParamLimits

0xdfe0,	// (0x000aaf3d) wml_tabs_2_passive_pane

0x3765,	// (0x000a06c2) wml_tabs_3_active_pane_cp_ParamLimits

0x3765,	// (0x000a06c2) wml_tabs_3_active_pane_cp

0x377a,	// (0x000a06d7) wml_tabs_3_passive_pane_ParamLimits

0x377a,	// (0x000a06d7) wml_tabs_3_passive_pane

0x378d,	// (0x000a06ea) wml_tabs_3_passive_pane_cp_ParamLimits

0x378d,	// (0x000a06ea) wml_tabs_3_passive_pane_cp

0x37a4,	// (0x000a0701) tabs_4_active_pane

0x37ac,	// (0x000a0709) tabs_4_passive_pane

0x37b6,	// (0x000a0713) tabs_4_passive_pane_cp

0x37be,	// (0x000a071b) tabs_4_passive_pane_cp2

0x2f6c,	// (0x0009fec9) aid_height_text

0xb806,	// (0x000a8763) mup_volume_cont_pane_ParamLimits

0xb806,	// (0x000a8763) mup_volume_cont_pane

0x018c,	// (0x0009d0e9) aid_size_cell_pinb

0x018c,	// (0x0009d0e9) aid_size_list_pinb

0xb806,	// (0x000a8763) mup2_volume_cont_pane_ParamLimits

0xb806,	// (0x000a8763) mup2_volume_cont_pane

0xbb18,	// (0x000a8a75) mup2_volume_cont_pane_g1_ParamLimits

0xbb18,	// (0x000a8a75) mup2_volume_cont_pane_g1

0x0196,	// (0x0009d0f3) aid_size_cell_touch_ParamLimits

0x0196,	// (0x0009d0f3) aid_size_cell_touch

0x03c0,	// (0x0009d31d) touch_pane_ParamLimits

0x03c0,	// (0x0009d31d) touch_pane

0xa425,	// (0x000a7382) main_rss2_pane

0xdff7,	// (0x000aaf54) listscroll_rss2_pane

0xe000,	// (0x000aaf5d) rss2_navigation_pane

0xe008,	// (0x000aaf65) list_rss2_pane

0xb5e1,	// (0x000a853e) scroll_pane_cp22

0xe010,	// (0x000aaf6d) rss2_navigation_pane_g1

0xe019,	// (0x000aaf76) rss2_navigation_pane_g2

0xe021,	// (0x000aaf7e) rss2_navigation_pane_g3

0x0002,

0xf5ba,	// (0x000ac517) rss2_navigation_pane_g

0xe029,	// (0x000aaf86) rss2_navigation_pane_t1

0x37d2,	// (0x000a072f) rss2_list_single_pane_ParamLimits

0x37d2,	// (0x000a072f) rss2_list_single_pane

0xe037,	// (0x000aaf94) rss2_list_single_pane_t2

0xe045,	// (0x000aafa2) rss2_list_single_pane_t3_ParamLimits

0xe045,	// (0x000aafa2) rss2_list_single_pane_t3

0xe062,	// (0x000aafbf) rss2_list_single_pane_t4

0x2018,	// (0x0009ef75) smil_status_pane_g1

0xa417,	// (0x000a7374) main_image2_pane_ParamLimits

0xa417,	// (0x000a7374) main_image2_pane

0xbac6,	// (0x000a8a23) main_camera2_pane_g9_ParamLimits

0xbac6,	// (0x000a8a23) main_camera2_pane_g9

0x36d7,	// (0x000a0634) main_camera2_pane_t5_ParamLimits

0x36d7,	// (0x000a0634) main_camera2_pane_t5

0xbad4,	// (0x000a8a31) main_camera2_pane_t6_ParamLimits

0xbad4,	// (0x000a8a31) main_camera2_pane_t6

0x37e9,	// (0x000a0746) main_image2_pane_g1_ParamLimits

0x37e9,	// (0x000a0746) main_image2_pane_g1

0x2c1b,	// (0x0009fb78) smil2_video_pane_ParamLimits

0x2c1b,	// (0x0009fb78) smil2_video_pane

0xa3c8,	// (0x000a7325) aid_zoom_text_primary_cp

0xa40d,	// (0x000a736a) popup_preview_fixed_window

0xae0c,	// (0x000a7d69) im_reading_pane_g1

0x36c9,	// (0x000a0626) cams2_bc_adjust_pane_cp_ParamLimits

0x36c9,	// (0x000a0626) cams2_bc_adjust_pane_cp

0xbafc,	// (0x000a8a59) cams2_bc_adjust_pane_ParamLimits

0xbafc,	// (0x000a8a59) cams2_bc_adjust_pane

0x37c8,	// (0x000a0725) cams2_bc_adjust_pane_g1

0xa425,	// (0x000a7382) cams2_slider_pane

0x37c8,	// (0x000a0725) cams2_slider_pane_g1

0x37c8,	// (0x000a0725) cams2_slider_pane_g2

0x0006,

0xf5c1,	// (0x000ac51e) cams2_slider_pane_g

0x053d,	// (0x0009d49a) calc_display_pane_ParamLimits

0x0562,	// (0x0009d4bf) calc_paper_pane_ParamLimits

0x0585,	// (0x0009d4e2) grid_calc_pane_ParamLimits

0xb4bc,	// (0x000a8419) popup_clock_digital_window_t1_ParamLimits

0xb9eb,	// (0x000a8948) main_image_pane_t1

0x051d,	// (0x0009d47a) aid_size_cell_calc_ParamLimits

0x051d,	// (0x0009d47a) aid_size_cell_calc

0x31fe,	// (0x000a015b) popup_blid_sat_info2_window_ParamLimits

0x31fe,	// (0x000a015b) popup_blid_sat_info2_window

0xe070,	// (0x000aafcd) aid_size_cell_blid

0xdbcf,	// (0x000aab2c) bg_popup_window_pane_cp07

0xe08d,	// (0x000aafea) grid_popup_blid_pane

0xe097,	// (0x000aaff4) heading_pane_cp05_ParamLimits

0xe097,	// (0x000aaff4) heading_pane_cp05

0xe161,	// (0x000ab0be) cell_popup_blid_pane_ParamLimits

0xe161,	// (0x000ab0be) cell_popup_blid_pane

0xe18b,	// (0x000ab0e8) cell_popup_blid_pane_g1

0xe193,	// (0x000ab0f0) cell_popup_blid_pane_t1

0xb806,	// (0x000a8763) mup2_indicator_pane_ParamLimits

0xb806,	// (0x000a8763) mup2_indicator_pane

0x018c,	// (0x0009d0e9) mup2_visualizer_osc_pane

0xdf39,	// (0x000aae96) mup2_visualizer_spec_pane_ParamLimits

0xdf39,	// (0x000aae96) mup2_visualizer_spec_pane

0x018c,	// (0x0009d0e9) mup2_spec_half_pane

0x018c,	// (0x0009d0e9) mup2_spec_half_pane_cp

0xe1a1,	// (0x000ab0fe) mup2_spec_bar_pane_ParamLimits

0xe1a1,	// (0x000ab0fe) mup2_spec_bar_pane

0xaaba,	// (0x000a7a17) mup2_spec_bar_pane_g1

0xe1c0,	// (0x000ab11d) mup2_spec_bar_pane_g2

0x0001,

0xf5e7,	// (0x000ac544) mup2_spec_bar_pane_g

0x018c,	// (0x0009d0e9) mup2_osc_middle_pane

0xaaba,	// (0x000a7a17) mup2_visualizer_osc_pane_g1

0x0432,	// (0x0009d38f) popup_number_entry_window_t1_ParamLimits

0x0445,	// (0x0009d3a2) popup_number_entry_window_t2_ParamLimits

0x0457,	// (0x0009d3b4) popup_number_entry_window_t3_ParamLimits

0x0469,	// (0x0009d3c6) popup_number_entry_window_t5_ParamLimits

0x0469,	// (0x0009d3c6) popup_number_entry_window_t5

0xf040,	// (0x000abf9d) popup_number_entry_window_t_ParamLimits

0x049e,	// (0x0009d3fb) text_title_cp2_ParamLimits

0xb8e3,	// (0x000a8840) aid_hotspot_pointer_text2_pane

0xb909,	// (0x000a8866) main_viewer_pane_g9_ParamLimits

0xb909,	// (0x000a8866) main_viewer_pane_g9

0xb054,	// (0x000a7fb1) cale_month_pane_t1_ParamLimits

0xb0bf,	// (0x000a801c) bg_cale_pane_ParamLimits

0xb0d7,	// (0x000a8034) list_cale_pane_ParamLimits

0xb0e8,	// (0x000a8045) listscroll_cale_day_pane_t1

0xb0fa,	// (0x000a8057) scroll_pane_cp09_ParamLimits

0x2530,	// (0x0009f48d) main_mup_eq_pane_t1_ParamLimits

0x2530,	// (0x0009f48d) main_mup_eq_pane_t1

0x254c,	// (0x0009f4a9) main_mup_eq_pane_t2_ParamLimits

0x254c,	// (0x0009f4a9) main_mup_eq_pane_t2

0x2568,	// (0x0009f4c5) main_mup_eq_pane_t3_ParamLimits

0x2568,	// (0x0009f4c5) main_mup_eq_pane_t3

0x2586,	// (0x0009f4e3) main_mup_eq_pane_t4_ParamLimits

0x2586,	// (0x0009f4e3) main_mup_eq_pane_t4

0x25a4,	// (0x0009f501) main_mup_eq_pane_t5_ParamLimits

0x25a4,	// (0x0009f501) main_mup_eq_pane_t5

0x25c2,	// (0x0009f51f) main_mup_eq_pane_t6_ParamLimits

0x25c2,	// (0x0009f51f) main_mup_eq_pane_t6

0x25d8,	// (0x0009f535) main_mup_eq_pane_t7_ParamLimits

0x25d8,	// (0x0009f535) main_mup_eq_pane_t7

0x25ee,	// (0x0009f54b) main_mup_eq_pane_t8_ParamLimits

0x25ee,	// (0x0009f54b) main_mup_eq_pane_t8

0x2604,	// (0x0009f561) main_mup_eq_pane_t9_ParamLimits

0x2604,	// (0x0009f561) main_mup_eq_pane_t9

0x2620,	// (0x0009f57d) main_mup_eq_pane_t10_ParamLimits

0x2620,	// (0x0009f57d) main_mup_eq_pane_t10

0x0009,

0xf39a,	// (0x000ac2f7) main_mup_eq_pane_t_ParamLimits

0xf39a,	// (0x000ac2f7) main_mup_eq_pane_t

0x26f5,	// (0x0009f652) mup_equalizer_pane_cp5_ParamLimits

0x270d,	// (0x0009f66a) mup_equalizer_pane_cp6_ParamLimits

0x2725,	// (0x0009f682) mup_equalizer_pane_cp7_ParamLimits

0xa425,	// (0x000a7382) main_gallery_pane

0xded7,	// (0x000aae34) smil2_volume_pane

0xdedf,	// (0x000aae3c) smil_status_volume_pane_g1_ParamLimits

0xdef2,	// (0x000aae4f) smil_status_volume_pane_g2_ParamLimits

0xba96,	// (0x000a89f3) smil_status_volume_pane_g3_ParamLimits

0xf540,	// (0x000ac49d) smil_status_volume_pane_g_ParamLimits

0xdbcf,	// (0x000aab2c) bg_popup_window_pane_cp07_ParamLimits

0xe078,	// (0x000aafd5) blid_firmament_pane

0xaa1b,	// (0x000a7978) aid_size_cell_gallery_ParamLimits

0xaa1b,	// (0x000a7978) aid_size_cell_gallery

0xaa1b,	// (0x000a7978) grid_gallery_pane_ParamLimits

0xaa1b,	// (0x000a7978) grid_gallery_pane

0xdbcf,	// (0x000aab2c) cell_gallery_pane_ParamLimits

0xdbcf,	// (0x000aab2c) cell_gallery_pane

0xaa1b,	// (0x000a7978) bg_cell_gallery_focus_pane_ParamLimits

0xaa1b,	// (0x000a7978) bg_cell_gallery_focus_pane

0xaa74,	// (0x000a79d1) cell_gallery_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_gallery_pane_g1

0xaa74,	// (0x000a79d1) cell_gallery_pane_g2_ParamLimits

0xaa74,	// (0x000a79d1) cell_gallery_pane_g2

0xaa74,	// (0x000a79d1) cell_gallery_pane_g3_ParamLimits

0xaa74,	// (0x000a79d1) cell_gallery_pane_g3

0xaa82,	// (0x000a79df) cell_gallery_pane_g4_ParamLimits

0xaa82,	// (0x000a79df) cell_gallery_pane_g4

0x0003,

0xf5ec,	// (0x000ac549) cell_gallery_pane_g_ParamLimits

0xf5ec,	// (0x000ac549) cell_gallery_pane_g

0xe1ca,	// (0x000ab127) bg_cell_gallery_focus_pane_g1

0xe1d2,	// (0x000ab12f) bg_cell_gallery_focus_pane_g2

0xe1da,	// (0x000ab137) bg_cell_gallery_focus_pane_g3

0xe1e2,	// (0x000ab13f) bg_cell_gallery_focus_pane_g4

0xe1ea,	// (0x000ab147) bg_cell_gallery_focus_pane_g5

0xe1f2,	// (0x000ab14f) bg_cell_gallery_focus_pane_g6

0xe1fa,	// (0x000ab157) bg_cell_gallery_focus_pane_g7

0xe202,	// (0x000ab15f) bg_cell_gallery_focus_pane_g8

0x0007,

0xf5f5,	// (0x000ac552) bg_cell_gallery_focus_pane_g

0xe20a,	// (0x000ab167) aid_firma_cardinal

0xe21e,	// (0x000ab17b) blid_firmament_pane_t1

0xe235,	// (0x000ab192) blid_firmament_pane_t2

0xe24c,	// (0x000ab1a9) blid_firmament_pane_t3

0xe263,	// (0x000ab1c0) blid_firmament_pane_t4

0x0003,

0xf606,	// (0x000ac563) blid_firmament_pane_t

0xe27a,	// (0x000ab1d7) blid_sat_info_pane

0xaaba,	// (0x000a7a17) blid_sat_info_pane_g1

0xaaba,	// (0x000a7a17) blid_sat_info_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) blid_sat_info_pane_g

0xe28a,	// (0x000ab1e7) blid_sat_info_pane_t1

0xe298,	// (0x000ab1f5) smil2_volume_content_pane

0xe2a1,	// (0x000ab1fe) smil2_volume_pane_g1

0xabcd,	// (0x000a7b2a) smil2_volume_content_pane_g1

0xe2a9,	// (0x000ab206) smil2_volume_content_pane_g2

0xe2b2,	// (0x000ab20f) smil2_volume_content_pane_g3

0xe2bb,	// (0x000ab218) smil2_volume_content_pane_g4

0xe2c4,	// (0x000ab221) smil2_volume_content_pane_g5

0xe2cd,	// (0x000ab22a) smil2_volume_content_pane_g6

0xe2d6,	// (0x000ab233) smil2_volume_content_pane_g7

0xe2df,	// (0x000ab23c) smil2_volume_content_pane_g8

0xe2e8,	// (0x000ab245) smil2_volume_content_pane_g9

0xe2f1,	// (0x000ab24e) smil2_volume_content_pane_g10

0x0009,

0xf60f,	// (0x000ac56c) smil2_volume_content_pane_g

0x0ae7,	// (0x0009da44) cale_week_day_heading_pane_t1_ParamLimits

0x0b11,	// (0x0009da6e) cale_week_day_heading_pane_t2_ParamLimits

0x0b40,	// (0x0009da9d) cale_week_day_heading_pane_t3_ParamLimits

0x0b6f,	// (0x0009dacc) cale_week_day_heading_pane_t4_ParamLimits

0x0b9e,	// (0x0009dafb) cale_week_day_heading_pane_t5_ParamLimits

0x0bd1,	// (0x0009db2e) cale_week_day_heading_pane_t6_ParamLimits

0x0c08,	// (0x0009db65) cale_week_day_heading_pane_t7_ParamLimits

0xf147,	// (0x000ac0a4) cale_week_day_heading_pane_t_ParamLimits

0xacea,	// (0x000a7c47) bg_cale_side_pane_ParamLimits

0x0c32,	// (0x0009db8f) cale_week_time_pane_t1_ParamLimits

0x0c4c,	// (0x0009dba9) cale_week_time_pane_t2_ParamLimits

0x0c66,	// (0x0009dbc3) cale_week_time_pane_t3_ParamLimits

0x0c80,	// (0x0009dbdd) cale_week_time_pane_t4_ParamLimits

0x0c9a,	// (0x0009dbf7) cale_week_time_pane_t5_ParamLimits

0x0cb4,	// (0x0009dc11) cale_week_time_pane_t6_ParamLimits

0x0cd4,	// (0x0009dc31) cale_week_time_pane_t7_ParamLimits

0x0cfa,	// (0x0009dc57) cale_week_time_pane_t8_ParamLimits

0xf156,	// (0x000ac0b3) cale_week_time_pane_t_ParamLimits

0x0d20,	// (0x0009dc7d) cell_cale_week_pane_g2_ParamLimits

0xacea,	// (0x000a7c47) bg_cale_side_pane_cp01_ParamLimits

0x1e01,	// (0x0009ed5e) cale_month_week_pane_t1_ParamLimits

0x1e1a,	// (0x0009ed77) cale_month_week_pane_t2_ParamLimits

0x1e33,	// (0x0009ed90) cale_month_week_pane_t3_ParamLimits

0x1e4c,	// (0x0009eda9) cale_month_week_pane_t4_ParamLimits

0x1e65,	// (0x0009edc2) cale_month_week_pane_t5_ParamLimits

0x1e7e,	// (0x0009eddb) cale_month_week_pane_t6_ParamLimits

0xf224,	// (0x000ac181) cale_month_week_pane_t_ParamLimits

0xb066,	// (0x000a7fc3) cell_cale_month_pane_g1_ParamLimits

0xa425,	// (0x000a7382) main_cale_event_viewer_pane

0x018c,	// (0x0009d0e9) listscroll_cale_event_viewer_pane

0xe2fa,	// (0x000ab257) list_cale_ev_pane

0xe302,	// (0x000ab25f) scroll_pane_cp023

0x37ff,	// (0x000a075c) field_cale_ev_pane_ParamLimits

0x37ff,	// (0x000a075c) field_cale_ev_pane

0xe30e,	// (0x000ab26b) field_cale_ev_content_pane_ParamLimits

0xe30e,	// (0x000ab26b) field_cale_ev_content_pane

0xe31a,	// (0x000ab277) field_cale_ev_pane_g1_ParamLimits

0xe31a,	// (0x000ab277) field_cale_ev_pane_g1

0xe326,	// (0x000ab283) field_cale_ev_pane_g2_ParamLimits

0xe326,	// (0x000ab283) field_cale_ev_pane_g2

0xe33e,	// (0x000ab29b) field_cale_ev_pane_g3_ParamLimits

0xe33e,	// (0x000ab29b) field_cale_ev_pane_g3

0x0002,

0xf624,	// (0x000ac581) field_cale_ev_pane_g_ParamLimits

0xf624,	// (0x000ac581) field_cale_ev_pane_g

0xe356,	// (0x000ab2b3) field_cale_ev_pane_t1_ParamLimits

0xe356,	// (0x000ab2b3) field_cale_ev_pane_t1

0x3823,	// (0x000a0780) field_cale_ev_content_pane_t1_ParamLimits

0x3823,	// (0x000a0780) field_cale_ev_content_pane_t1

0xb8ab,	// (0x000a8808) bg_button_pane_cp01

0x079f,	// (0x0009d6fc) listscroll_cale_week_pane_ParamLimits

0xacb2,	// (0x000a7c0f) popup_toolbar_window_cp01

0xacbb,	// (0x000a7c18) listscroll_cale_week_pane_t1_ParamLimits

0x079f,	// (0x0009d6fc) listscroll_cale_day_pane_ParamLimits

0xacb2,	// (0x000a7c0f) popup_toolbar_window_cp02

0xb0e8,	// (0x000a8045) listscroll_cale_day_pane_t1_ParamLimits

0x31c6,	// (0x000a0123) main_cale_month_pane_ParamLimits

0xba81,	// (0x000a89de) popup_toolbar_window_cp03_ParamLimits

0xba81,	// (0x000a89de) popup_toolbar_window_cp03

0x2ad9,	// (0x0009fa36) main_image_pane_g2_ParamLimits

0x2ad9,	// (0x0009fa36) main_image_pane_g2

0x2aea,	// (0x0009fa47) main_image_pane_g3_ParamLimits

0x2aea,	// (0x0009fa47) main_image_pane_g3

0x0002,

0xf42c,	// (0x000ac389) main_image_pane_g_ParamLimits

0xf42c,	// (0x000ac389) main_image_pane_g

0xb9eb,	// (0x000a8948) main_image_pane_t1_ParamLimits

0x2afb,	// (0x0009fa58) main_image_pane_t2_ParamLimits

0x2afb,	// (0x0009fa58) main_image_pane_t2

0x2b0d,	// (0x0009fa6a) main_image_pane_t3_ParamLimits

0x2b0d,	// (0x0009fa6a) main_image_pane_t3

0x2b35,	// (0x0009fa92) main_image_pane_t4_ParamLimits

0x2b35,	// (0x0009fa92) main_image_pane_t4

0x0003,

0xf433,	// (0x000ac390) main_image_pane_t_ParamLimits

0xf433,	// (0x000ac390) main_image_pane_t

0x2b55,	// (0x0009fab2) popup_image_details_window_cp01

0x2b5f,	// (0x0009fabc) popup_toobar_trans_pane_cp01_ParamLimits

0x2b5f,	// (0x0009fabc) popup_toobar_trans_pane_cp01

0x32f1,	// (0x000a024e) popup_image_details_window_ParamLimits

0x32f1,	// (0x000a024e) popup_image_details_window

0xba52,	// (0x000a89af) popup_image_focus_window

0xbab8,	// (0x000a8a15) camera2_autofocus_pane_ParamLimits

0xbab8,	// (0x000a8a15) camera2_autofocus_pane

0x018c,	// (0x0009d0e9) bg_popup_sub_pane_cp06

0xe36d,	// (0x000ab2ca) popup_image_focus_window_g1

0xe375,	// (0x000ab2d2) popup_image_focus_window_g2

0xe37d,	// (0x000ab2da) popup_image_focus_window_g3

0xe385,	// (0x000ab2e2) popup_image_focus_window_g4

0x0003,

0xf62b,	// (0x000ac588) popup_image_focus_window_g

0xe38d,	// (0x000ab2ea) popup_image_focus_window_t1

0xe39b,	// (0x000ab2f8) popup_image_focus_window_t2

0xe3ab,	// (0x000ab308) popup_image_focus_window_t3

0x0002,

0xf634,	// (0x000ac591) popup_image_focus_window_t

0xaa74,	// (0x000a79d1) camera2_autofocus_pane_g1

0xaa1b,	// (0x000a7978) bg_tb_trans_pane_cp01

0xe3b9,	// (0x000ab316) popup_image_details_window_g1

0xe3cc,	// (0x000ab329) popup_image_details_window_g2

0x0002,

0xf646,	// (0x000ac5a3) popup_image_details_window_g

0xe3f5,	// (0x000ab352) popup_image_details_window_t1

0xe407,	// (0x000ab364) popup_image_details_window_t2

0xe420,	// (0x000ab37d) popup_image_details_window_t3

0xe434,	// (0x000ab391) popup_image_details_window_t4

0xe44f,	// (0x000ab3ac) popup_image_details_window_t5

0x0004,

0xf64d,	// (0x000ac5aa) popup_image_details_window_t

0xab04,	// (0x000a7a61) bg_calc_paper_pane_ParamLimits

0xa425,	// (0x000a7382) grid_highlight_pane_cp013

0xab18,	// (0x000a7a75) list_calc_pane_ParamLimits

0xab2a,	// (0x000a7a87) scroll_pane_cp024

0xab32,	// (0x000a7a8f) bg_calc_display_pane_ParamLimits

0x05c7,	// (0x0009d524) calc_display_pane_t1_ParamLimits

0x05dc,	// (0x0009d539) calc_display_pane_t2_ParamLimits

0xab3e,	// (0x000a7a9b) calc_display_pane_t3_ParamLimits

0xf0c7,	// (0x000ac024) calc_display_pane_t_ParamLimits

0x06aa,	// (0x0009d607) cell_calc_pane_g2

0x0001,

0xf0e4,	// (0x000ac041) cell_calc_pane_g

0x06b3,	// (0x0009d610) cell_calc_pane_t1

0xabab,	// (0x000a7b08) grid_highlight_pane_cp02_ParamLimits

0xabc1,	// (0x000a7b1e) toolbar_button_pane_cp01_ParamLimits

0xabc1,	// (0x000a7b1e) toolbar_button_pane_cp01

0xce22,	// (0x000a9d7f) temp_image_control_pane_ParamLimits

0xce22,	// (0x000a9d7f) temp_image_control_pane

0xa417,	// (0x000a7374) main_mp3_pane

0xe469,	// (0x000ab3c6) temp_image_control_pane_g1_ParamLimits

0xe469,	// (0x000ab3c6) temp_image_control_pane_g1

0xe477,	// (0x000ab3d4) temp_image_control_pane_g2_ParamLimits

0xe477,	// (0x000ab3d4) temp_image_control_pane_g2

0xe489,	// (0x000ab3e6) temp_image_control_pane_g3_ParamLimits

0xe489,	// (0x000ab3e6) temp_image_control_pane_g3

0x3844,	// (0x000a07a1) temp_image_control_pane_g4_ParamLimits

0x3844,	// (0x000a07a1) temp_image_control_pane_g4

0x0003,

0xf658,	// (0x000ac5b5) temp_image_control_pane_g_ParamLimits

0xf658,	// (0x000ac5b5) temp_image_control_pane_g

0xe469,	// (0x000ab3c6) main_mp3_pane_g1

0x3857,	// (0x000a07b4) main_mp3_pane_g2

0x0007,

0xf661,	// (0x000ac5be) main_mp3_pane_g

0xe4be,	// (0x000ab41b) main_mp3_pane_t1

0xaa82,	// (0x000a79df) main_camera_pane_g8_ParamLimits

0xaa82,	// (0x000a79df) main_camera_pane_g8

0x0ef7,	// (0x0009de54) main_video_pane_g7_ParamLimits

0x0ef7,	// (0x0009de54) main_video_pane_g7

0xbae8,	// (0x000a8a45) main_camera2_pane_t7_ParamLimits

0xbae8,	// (0x000a8a45) main_camera2_pane_t7

0xae72,	// (0x000a7dcf) scroll_pane_cp025_ParamLimits

0xae72,	// (0x000a7dcf) scroll_pane_cp025

0xae86,	// (0x000a7de3) scroll_pane_cp026_ParamLimits

0xae86,	// (0x000a7de3) scroll_pane_cp026

0xae95,	// (0x000a7df2) wml_content_pane_ParamLimits

0xa425,	// (0x000a7382) main_touch_calib_pane

0x3929,	// (0x000a0886) main_touch_calib_pane_g1

0x393b,	// (0x000a0898) main_touch_calib_pane_g2

0x394d,	// (0x000a08aa) main_touch_calib_pane_g3

0x395f,	// (0x000a08bc) main_touch_calib_pane_g4

0x0003,

0xf67f,	// (0x000ac5dc) main_touch_calib_pane_g

0x3971,	// (0x000a08ce) main_touch_calib_pane_t1

0x398b,	// (0x000a08e8) main_touch_calib_pane_t2

0x0004,

0xf688,	// (0x000ac5e5) main_touch_calib_pane_t

0xb65c,	// (0x000a85b9) mup_progress_pane_cp02

0xb67b,	// (0x000a85d8) navi_pane_g1

0xb6dd,	// (0x000a863a) navi_pane_mp_t3

0xa417,	// (0x000a7374) main_mp3_pane_ParamLimits

0x34aa,	// (0x000a0407) navi_pane_ParamLimits

0xe469,	// (0x000ab3c6) main_mp3_pane_g1_ParamLimits

0x3857,	// (0x000a07b4) main_mp3_pane_g2_ParamLimits

0x3863,	// (0x000a07c0) main_mp3_pane_g3_ParamLimits

0x3863,	// (0x000a07c0) main_mp3_pane_g3

0x3871,	// (0x000a07ce) main_mp3_pane_g4_ParamLimits

0x3871,	// (0x000a07ce) main_mp3_pane_g4

0xaa74,	// (0x000a79d1) main_mp3_pane_g5_ParamLimits

0xaa74,	// (0x000a79d1) main_mp3_pane_g5

0xe499,	// (0x000ab3f6) main_mp3_pane_g6_ParamLimits

0xe499,	// (0x000ab3f6) main_mp3_pane_g6

0xe4a6,	// (0x000ab403) main_mp3_pane_g7_ParamLimits

0xe4a6,	// (0x000ab403) main_mp3_pane_g7

0xe4b2,	// (0x000ab40f) main_mp3_pane_g8_ParamLimits

0xe4b2,	// (0x000ab40f) main_mp3_pane_g8

0xf661,	// (0x000ac5be) main_mp3_pane_g_ParamLimits

0x387d,	// (0x000a07da) main_mp3_pane_t2

0x388b,	// (0x000a07e8) main_mp3_pane_t3

0xe4cc,	// (0x000ab429) main_mp3_pane_t4

0xe4da,	// (0x000ab437) main_mp3_pane_t5

0x0005,

0xf672,	// (0x000ac5cf) main_mp3_pane_t

0xe4e8,	// (0x000ab445) mup_progress_pane_cp01

0xa3c8,	// (0x000a7325) aid_zoom_text_secondary2

0xe2fa,	// (0x000ab257) list_cale_ev2_pane

0xe302,	// (0x000ab25f) scroll_pane_cp023_ParamLimits

0x39e5,	// (0x000a0942) field_cale_ev2_pane_ParamLimits

0x39e5,	// (0x000a0942) field_cale_ev2_pane

0x3a09,	// (0x000a0966) field_cale_ev2_pane_g1_ParamLimits

0x3a09,	// (0x000a0966) field_cale_ev2_pane_g1

0x3a15,	// (0x000a0972) field_cale_ev2_pane_g2_ParamLimits

0x3a15,	// (0x000a0972) field_cale_ev2_pane_g2

0x3a2d,	// (0x000a098a) field_cale_ev2_pane_g3_ParamLimits

0x3a2d,	// (0x000a098a) field_cale_ev2_pane_g3

0x0003,

0xf693,	// (0x000ac5f0) field_cale_ev2_pane_g_ParamLimits

0xf693,	// (0x000ac5f0) field_cale_ev2_pane_g

0x3a45,	// (0x000a09a2) field_cale_ev2_pane_t1_ParamLimits

0x3a45,	// (0x000a09a2) field_cale_ev2_pane_t1

0x3a5c,	// (0x000a09b9) field_cale_ev2_pane_t2_ParamLimits

0x3a5c,	// (0x000a09b9) field_cale_ev2_pane_t2

0x0001,

0xf69c,	// (0x000ac5f9) field_cale_ev2_pane_t_ParamLimits

0xf69c,	// (0x000ac5f9) field_cale_ev2_pane_t

0x2999,	// (0x0009f8f6) main_postcard_pane_g5_ParamLimits

0x2999,	// (0x0009f8f6) main_postcard_pane_g5

0x29af,	// (0x0009f90c) main_postcard_pane_g6_ParamLimits

0x29af,	// (0x0009f90c) main_postcard_pane_g6

0xaa1b,	// (0x000a7978) camera2_autofocus_pane_cp_ParamLimits

0xaa1b,	// (0x000a7978) camera2_autofocus_pane_cp

0xa417,	// (0x000a7374) main_mup3_pane

0x3abb,	// (0x000a0a18) main_mup3_pane_g1_ParamLimits

0x3abb,	// (0x000a0a18) main_mup3_pane_g1

0x3add,	// (0x000a0a3a) main_mup3_pane_g2_ParamLimits

0x3add,	// (0x000a0a3a) main_mup3_pane_g2

0x3b58,	// (0x000a0ab5) main_mup3_pane_g3_ParamLimits

0x3b58,	// (0x000a0ab5) main_mup3_pane_g3

0x3bc2,	// (0x000a0b1f) main_mup3_pane_g4_ParamLimits

0x3bc2,	// (0x000a0b1f) main_mup3_pane_g4

0x3c2c,	// (0x000a0b89) main_mup3_pane_g5_ParamLimits

0x3c2c,	// (0x000a0b89) main_mup3_pane_g5

0x3c96,	// (0x000a0bf3) main_mup3_pane_g6_ParamLimits

0x3c96,	// (0x000a0bf3) main_mup3_pane_g6

0xaa82,	// (0x000a79df) main_mup3_pane_g7_ParamLimits

0xaa82,	// (0x000a79df) main_mup3_pane_g7

0x0007,

0xf6ac,	// (0x000ac609) main_mup3_pane_g_ParamLimits

0xf6ac,	// (0x000ac609) main_mup3_pane_g

0x3d1a,	// (0x000a0c77) main_mup3_pane_t1_ParamLimits

0x3d1a,	// (0x000a0c77) main_mup3_pane_t1

0x3d84,	// (0x000a0ce1) main_mup3_pane_t2_ParamLimits

0x3d84,	// (0x000a0ce1) main_mup3_pane_t2

0x3e5a,	// (0x000a0db7) main_mup3_pane_t4_ParamLimits

0x3e5a,	// (0x000a0db7) main_mup3_pane_t4

0x3eb8,	// (0x000a0e15) main_mup3_pane_t5_ParamLimits

0x3eb8,	// (0x000a0e15) main_mup3_pane_t5

0x3f80,	// (0x000a0edd) main_mup3_pane_t6_ParamLimits

0x3f80,	// (0x000a0edd) main_mup3_pane_t6

0x0005,

0xf6bd,	// (0x000ac61a) main_mup3_pane_t_ParamLimits

0xf6bd,	// (0x000ac61a) main_mup3_pane_t

0x4038,	// (0x000a0f95) mup3_progress_pane_ParamLimits

0x4038,	// (0x000a0f95) mup3_progress_pane

0x40d0,	// (0x000a102d) popup_mup3_control_window_ParamLimits

0x40d0,	// (0x000a102d) popup_mup3_control_window

0xe4fc,	// (0x000ab459) popup_mup3_text_window

0x4106,	// (0x000a1063) mup3_progress_pane_t1

0x4125,	// (0x000a1082) mup3_progress_pane_t2

0xe504,	// (0x000ab461) mup3_progress_pane_t3

0x0002,

0xf6ca,	// (0x000ac627) mup3_progress_pane_t

0xe521,	// (0x000ab47e) mup_progress_pane_cp03

0x018c,	// (0x0009d0e9) bg_tb_trans_pane_cp04

0x4144,	// (0x000a10a1) mup3_volume_pane

0x414c,	// (0x000a10a9) popup_mup3_control_window_g1

0x4155,	// (0x000a10b2) mup3_volume_pane_g1

0x415e,	// (0x000a10bb) mup3_volume_pane_g2

0x4167,	// (0x000a10c4) mup3_volume_pane_g3

0x0002,

0xf6d1,	// (0x000ac62e) mup3_volume_pane_g

0x018c,	// (0x0009d0e9) bg_tb_trans_pane_cp03

0xe531,	// (0x000ab48e) popup_mup3_text_window_g1

0xe539,	// (0x000ab496) popup_mup3_text_window_t1

0xab8c,	// (0x000a7ae9) list_calc_item_pane_g1_ParamLimits

0xdfee,	// (0x000aaf4b) mup_volume_pane_cp_g1

0x39a5,	// (0x000a0902) main_touch_calib_pane_t3

0x39b9,	// (0x000a0916) main_touch_calib_pane_t4

0x39cf,	// (0x000a092c) main_touch_calib_pane_t5

0xa3a4,	// (0x000a7301) aid_cell_size_toolbar2

0xa3ac,	// (0x000a7309) aid_popup3_width_pane

0xa3b8,	// (0x000a7315) aid_zoom_text_msg_primary

0x0dd0,	// (0x0009dd2d) vorec_t7

0xab50,	// (0x000a7aad) bg_calc_paper_pane_g1_ParamLimits

0xab5c,	// (0x000a7ab9) bg_calc_paper_pane_g2_ParamLimits

0xab68,	// (0x000a7ac5) bg_calc_paper_pane_g3_ParamLimits

0xab74,	// (0x000a7ad1) bg_calc_paper_pane_g4_ParamLimits

0xab80,	// (0x000a7add) bg_calc_paper_pane_g5_ParamLimits

0x062c,	// (0x0009d589) bg_calc_paper_pane_g6_ParamLimits

0x063f,	// (0x0009d59c) bg_calc_paper_pane_g7_ParamLimits

0x0652,	// (0x0009d5af) bg_calc_paper_pane_g8_ParamLimits

0xf0ce,	// (0x000ac02b) bg_calc_paper_pane_g_ParamLimits

0x0665,	// (0x0009d5c2) calc_bg_paper_pane_g9_ParamLimits

0xaa1b,	// (0x000a7978) image_qvga_pane_ParamLimits

0xaa1b,	// (0x000a7978) image_qvga_pane

0xa9f9,	// (0x000a7956) bg_popup_sub_pane_cp04_ParamLimits

0xb967,	// (0x000a88c4) popup_mup_playback_window_g1_ParamLimits

0xb973,	// (0x000a88d0) popup_mup_playback_window_t1_ParamLimits

0xb988,	// (0x000a88e5) popup_mup_playback_window_t2_ParamLimits

0xf427,	// (0x000ac384) popup_mup_playback_window_t_ParamLimits

0xaa82,	// (0x000a79df) main_mup2_pane_g3_ParamLimits

0xaa82,	// (0x000a79df) main_mup2_pane_g3

0x109f,	// (0x0009dffc) popup_toolbar_window_cp04

0xd0fe,	// (0x000aa05b) popup_call2_audio_second_window_g3_ParamLimits

0xd0fe,	// (0x000aa05b) popup_call2_audio_second_window_g3

0xd508,	// (0x000aa465) popup_call2_audio_first_window_g4_ParamLimits

0xd508,	// (0x000aa465) popup_call2_audio_first_window_g4

0xdb2f,	// (0x000aaa8c) popup_call2_audio_in_window_g4_ParamLimits

0xdb2f,	// (0x000aaa8c) popup_call2_audio_in_window_g4

0x2abb,	// (0x0009fa18) aid_area_sk_bg_cut_ParamLimits

0x2abb,	// (0x0009fa18) aid_area_sk_bg_cut

0xb99d,	// (0x000a88fa) aid_area_sk_bg_cut_2_ParamLimits

0xb99d,	// (0x000a88fa) aid_area_sk_bg_cut_2

0x018c,	// (0x0009d0e9) aid_placing_details_win

0x018c,	// (0x0009d0e9) aid_placing_details_win_2

0xaa74,	// (0x000a79d1) camera2_autofocus_pane_g1_ParamLimits

0x035b,	// (0x0009d2b8) popup_fixed_preview_cale_window_ParamLimits

0x035b,	// (0x0009d2b8) popup_fixed_preview_cale_window

0xb72d,	// (0x000a868a) navi_slider_pane_g3

0xb736,	// (0x000a8693) navi_slider_pane_g4

0xb73f,	// (0x000a869c) navi_slider_pane_g5

0xb72d,	// (0x000a868a) navi_slider_pane_g6

0xb748,	// (0x000a86a5) navi_slider_pane_g7

0xb878,	// (0x000a87d5) mup_scale_pane_g3

0xb881,	// (0x000a87de) mup_scale_pane_g4

0xb88a,	// (0x000a87e7) mup_scale_pane_g5

0x273d,	// (0x0009f69a) mup_scale_pane_g6

0x2746,	// (0x0009f6a3) mup_scale_pane_g7

0x37c8,	// (0x000a0725) cams2_slider_pane_g3

0x37c8,	// (0x000a0725) cams2_slider_pane_g4

0x37c8,	// (0x000a0725) cams2_slider_pane_g5

0x37c8,	// (0x000a0725) cams2_slider_pane_g6

0x37c8,	// (0x000a0725) cams2_slider_pane_g7

0xaaba,	// (0x000a7a17) camera2_autofocus_pane_cp_g1

0xde5e,	// (0x000aadbb) bg_popup_preview_window_pane_cp02_ParamLimits

0xde5e,	// (0x000aadbb) bg_popup_preview_window_pane_cp02

0xe547,	// (0x000ab4a4) list_fp_cale_pane_ParamLimits

0xe547,	// (0x000ab4a4) list_fp_cale_pane

0xe553,	// (0x000ab4b0) popup_fixed_preview_cale_window_t1_ParamLimits

0xe553,	// (0x000ab4b0) popup_fixed_preview_cale_window_t1

0x4170,	// (0x000a10cd) popup_fixed_preview_cale_window_t2_ParamLimits

0x4170,	// (0x000a10cd) popup_fixed_preview_cale_window_t2

0x4185,	// (0x000a10e2) popup_fixed_preview_cale_window_t3_ParamLimits

0x4185,	// (0x000a10e2) popup_fixed_preview_cale_window_t3

0x0002,

0xf6d8,	// (0x000ac635) popup_fixed_preview_cale_window_t_ParamLimits

0xf6d8,	// (0x000ac635) popup_fixed_preview_cale_window_t

0x419c,	// (0x000a10f9) list_single_fp_cale_pane_ParamLimits

0x419c,	// (0x000a10f9) list_single_fp_cale_pane

0xe571,	// (0x000ab4ce) list_single_fp_cale_pane_g1_ParamLimits

0xe571,	// (0x000ab4ce) list_single_fp_cale_pane_g1

0xe57d,	// (0x000ab4da) list_single_fp_cale_pane_g2_ParamLimits

0xe57d,	// (0x000ab4da) list_single_fp_cale_pane_g2

0x0002,

0xf6df,	// (0x000ac63c) list_single_fp_cale_pane_g_ParamLimits

0xf6df,	// (0x000ac63c) list_single_fp_cale_pane_g

0xe596,	// (0x000ab4f3) list_single_fp_cale_pane_t1_ParamLimits

0xe596,	// (0x000ab4f3) list_single_fp_cale_pane_t1

0xe5a8,	// (0x000ab505) list_single_fp_cale_pane_t2_ParamLimits

0xe5a8,	// (0x000ab505) list_single_fp_cale_pane_t2

0x0001,

0xf6e6,	// (0x000ac643) list_single_fp_cale_pane_t_ParamLimits

0xf6e6,	// (0x000ac643) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xa425,	// (0x000a7382) main_dialer_pane

0x018c,	// (0x0009d0e9) aid_cell_size_keypad

0x018c,	// (0x0009d0e9) dialer_ne_pane

0x018c,	// (0x0009d0e9) grid_dialer_command_1_pane

0x018c,	// (0x0009d0e9) grid_dialer_command_2_pane

0x018c,	// (0x0009d0e9) grid_dialer_keypad_pane

0x41b1,	// (0x000a110e) bg_popup_call_pane_cp06_ParamLimits

0x41b1,	// (0x000a110e) bg_popup_call_pane_cp06

0x41b1,	// (0x000a110e) dialer_ne_clear_pane_ParamLimits

0x41b1,	// (0x000a110e) dialer_ne_clear_pane

0xaaba,	// (0x000a7a17) dialer_ne_pane_g1

0xaad8,	// (0x000a7a35) dialer_ne_pane_t1_ParamLimits

0xaad8,	// (0x000a7a35) dialer_ne_pane_t1

0x41bf,	// (0x000a111c) dialer_ne_pane_t2_ParamLimits

0x41bf,	// (0x000a111c) dialer_ne_pane_t2

0x41e7,	// (0x000a1144) dialer_ne_pane_t3_ParamLimits

0x41e7,	// (0x000a1144) dialer_ne_pane_t3

0x0002,

0xf6eb,	// (0x000ac648) dialer_ne_pane_t_ParamLimits

0xf6eb,	// (0x000ac648) dialer_ne_pane_t

0x41e7,	// (0x000a1144) dialer_ne_pane_t3_copy1_ParamLimits

0x41e7,	// (0x000a1144) dialer_ne_pane_t3_copy1

0xe5db,	// (0x000ab538) cell_dialer_keypad_pane_ParamLimits

0xe5db,	// (0x000ab538) cell_dialer_keypad_pane

0xaa1b,	// (0x000a7978) cell_dialer_command_1_pane_ParamLimits

0xaa1b,	// (0x000a7978) cell_dialer_command_1_pane

0xe5f2,	// (0x000ab54f) cell_dialer_command_2_pane_ParamLimits

0xe5f2,	// (0x000ab54f) cell_dialer_command_2_pane

0xaa1b,	// (0x000a7978) bg_button_pane_cp02_ParamLimits

0xaa1b,	// (0x000a7978) bg_button_pane_cp02

0xaa74,	// (0x000a79d1) cell_dialer_keypad_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_dialer_keypad_pane_g1

0xaa1b,	// (0x000a7978) bg_button_pane_cp03_ParamLimits

0xaa1b,	// (0x000a7978) bg_button_pane_cp03

0xaa74,	// (0x000a79d1) cell_dialer_command_1_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_dialer_command_1_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp04

0xaaba,	// (0x000a7a17) cell_dialer_command_2_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp06

0xaaba,	// (0x000a7a17) dialer_ne_clear_pane_g1

0x244c,	// (0x0009f3a9) navi_pane_g2

0x247a,	// (0x0009f3d7) navi_pane_g3

0x0002,

0xf32f,	// (0x000ac28c) navi_pane_g

0x24a5,	// (0x0009f402) navi_pane_mv_g2

0x24cc,	// (0x0009f429) navi_pane_mv_g5

0x24d4,	// (0x0009f431) navi_pane_mv_t1

0xab32,	// (0x000a7a8f) main_clock2_pane

0xaa1b,	// (0x000a7978) main_clock2_list_pane_ParamLimits

0xaa1b,	// (0x000a7978) main_clock2_list_pane

0x4278,	// (0x000a11d5) main_clock2_pane_t1_ParamLimits

0x4278,	// (0x000a11d5) main_clock2_pane_t1

0x42b3,	// (0x000a1210) main_clock2_pane_t2_ParamLimits

0x42b3,	// (0x000a1210) main_clock2_pane_t2

0x0004,

0xf6f7,	// (0x000ac654) main_clock2_pane_t_ParamLimits

0xf6f7,	// (0x000ac654) main_clock2_pane_t

0x4352,	// (0x000a12af) popup_clock_analogue_window_cp03_ParamLimits

0x4352,	// (0x000a12af) popup_clock_analogue_window_cp03

0x4377,	// (0x000a12d4) popup_clock_digital_window_cp02_ParamLimits

0x4377,	// (0x000a12d4) popup_clock_digital_window_cp02

0x43f0,	// (0x000a134d) main_clock2_list_single_pane_ParamLimits

0x43f0,	// (0x000a134d) main_clock2_list_single_pane

0xad45,	// (0x000a7ca2) list_highlight_pane_cp05

0xe633,	// (0x000ab590) main_clock2_list_single_pane_t1

0x109f,	// (0x0009dffc) popup_toolbar_window_cp04_ParamLimits

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g2_ParamLimits

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g2

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g3_ParamLimits

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g3

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g4_ParamLimits

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g4

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g5_ParamLimits

0xaa82,	// (0x000a79df) camera2_autofocus_pane_g5

0x0004,

0xf63b,	// (0x000ac598) camera2_autofocus_pane_g_ParamLimits

0xf63b,	// (0x000ac598) camera2_autofocus_pane_g

0x3a71,	// (0x000a09ce) camera2_autofocus_pane_cp_g2

0x3a79,	// (0x000a09d6) camera2_autofocus_pane_cp_g3

0x3a81,	// (0x000a09de) camera2_autofocus_pane_cp_g4

0x3a89,	// (0x000a09e6) camera2_autofocus_pane_cp_g5

0x0004,

0xf6a1,	// (0x000ac5fe) camera2_autofocus_pane_cp_g

0x018c,	// (0x0009d0e9) popup_dialer_spcha_window

0x018c,	// (0x0009d0e9) bg_popup_sub_pane_cp07

0x018c,	// (0x0009d0e9) list_spcha_pane

0xe641,	// (0x000ab59e) list_single_spcha_pane_ParamLimits

0xe641,	// (0x000ab59e) list_single_spcha_pane

0x018c,	// (0x0009d0e9) list_highlight_pane_cp06

0xb2e3,	// (0x000a8240) list_single_spcha_pane_t1

0xd8d9,	// (0x000aa836) popup_call2_audio_out_window_g4_ParamLimits

0xd8d9,	// (0x000aa836) popup_call2_audio_out_window_g4

0xa425,	// (0x000a7382) main_imed2_pane

0xba5c,	// (0x000a89b9) popup_imed_adjust2_window

0x3309,	// (0x000a0266) popup_imed_trans_window_ParamLimits

0x3309,	// (0x000a0266) popup_imed_trans_window

0xe0c3,	// (0x000ab020) popup_blid_sat_info2_window_t1

0xe0d1,	// (0x000ab02e) popup_blid_sat_info2_window_t2

0x000a,

0xf5d0,	// (0x000ac52d) popup_blid_sat_info2_window_t

0x44ab,	// (0x000a1408) aid_size_cell_colour_35

0x44cb,	// (0x000a1428) aid_size_cell_colour_112

0x44eb,	// (0x000a1448) aid_size_cell_effect

0xb806,	// (0x000a8763) bg_tb_trans_pane_cp02

0xb208,	// (0x000a8165) heading_imed_pane

0x450b,	// (0x000a1468) listscroll_imed_pane

0xe653,	// (0x000ab5b0) heading_imed_pane_g1

0xe65b,	// (0x000ab5b8) heading_imed_pane_t1

0xe669,	// (0x000ab5c6) grid_imed_colour_35_pane_ParamLimits

0xe669,	// (0x000ab5c6) grid_imed_colour_35_pane

0x4517,	// (0x000a1474) grid_imed_effect_pane

0xe685,	// (0x000ab5e2) list_imed_aspect_pane

0x452e,	// (0x000a148b) scroll_pane_cp027_ParamLimits

0x452e,	// (0x000a148b) scroll_pane_cp027

0x453f,	// (0x000a149c) cell_imed_effect_pane_ParamLimits

0x453f,	// (0x000a149c) cell_imed_effect_pane

0xe68d,	// (0x000ab5ea) cell_imed_colour_pane_ParamLimits

0xe68d,	// (0x000ab5ea) cell_imed_colour_pane

0xe6d7,	// (0x000ab634) cell_imed_colour_pane_g1_ParamLimits

0xe6d7,	// (0x000ab634) cell_imed_colour_pane_g1

0xe6e8,	// (0x000ab645) hgihlgiht_grid_pane_cp016_ParamLimits

0xe6e8,	// (0x000ab645) hgihlgiht_grid_pane_cp016

0x456a,	// (0x000a14c7) cell_imed_effect_pane_g1

0x4572,	// (0x000a14cf) grid_highlight_pane_cp017

0xe6f9,	// (0x000ab656) list_imed_single_pane_ParamLimits

0xe6f9,	// (0x000ab656) list_imed_single_pane

0x018c,	// (0x0009d0e9) list_highlight_pane_cp07

0xe70d,	// (0x000ab66a) list_imed_aspect_pane_comp1_t1

0xb806,	// (0x000a8763) bg_tb_trans_pane_cp05

0xe72f,	// (0x000ab68c) popup_imed_adjust2_window_g1

0xe756,	// (0x000ab6b3) popup_imed_adjust2_window_t1

0xe76e,	// (0x000ab6cb) slider_imed_adjust_pane

0xe782,	// (0x000ab6df) slider_imed_adjust_pane_g1

0xe792,	// (0x000ab6ef) slider_imed_adjust_pane_g2

0xe7a2,	// (0x000ab6ff) slider_imed_adjust_pane_g3

0xe7b3,	// (0x000ab710) slider_imed_adjust_pane_g4

0x0003,

0xf714,	// (0x000ac671) slider_imed_adjust_pane_g

0x457b,	// (0x000a14d8) aid_size_cell_clipart2

0xe7c4,	// (0x000ab721) grid_imed_clipart_pane

0xb89b,	// (0x000a87f8) scroll_pane_cp031

0x4587,	// (0x000a14e4) cell_imed_clipart_pane_ParamLimits

0x4587,	// (0x000a14e4) cell_imed_clipart_pane

0x45a4,	// (0x000a1501) cell_imed_clipart_pane_g1

0x018c,	// (0x0009d0e9) grid_highlight_pane_cp014

0x4256,	// (0x000a11b3) main_clock2_pane_g1_ParamLimits

0x4256,	// (0x000a11b3) main_clock2_pane_g1

0x4397,	// (0x000a12f4) aid_call2_pane_cp10

0x43a9,	// (0x000a1306) aid_call_pane_cp10

0xb650,	// (0x000a85ad) popup_clock_analogue_window_cp10_g1

0xb650,	// (0x000a85ad) popup_clock_analogue_window_cp10_g2

0x43bb,	// (0x000a1318) popup_clock_analogue_window_cp10_g3

0x43bb,	// (0x000a1318) popup_clock_analogue_window_cp10_g4

0xb650,	// (0x000a85ad) popup_clock_analogue_window_cp10_g5

0x0004,

0xf702,	// (0x000ac65f) popup_clock_analogue_window_cp10_g

0x43d1,	// (0x000a132e) popup_clock_analogue_window_cp10_t1

0x4402,	// (0x000a135f) clock_digital_number_pane_cp10_ParamLimits

0x4402,	// (0x000a135f) clock_digital_number_pane_cp10

0x441c,	// (0x000a1379) clock_digital_number_pane_cp11_ParamLimits

0x441c,	// (0x000a1379) clock_digital_number_pane_cp11

0x4436,	// (0x000a1393) clock_digital_number_pane_cp12_ParamLimits

0x4436,	// (0x000a1393) clock_digital_number_pane_cp12

0x4452,	// (0x000a13af) clock_digital_number_pane_cp13_ParamLimits

0x4452,	// (0x000a13af) clock_digital_number_pane_cp13

0x446e,	// (0x000a13cb) clock_digital_separator_pane_cp10_ParamLimits

0x446e,	// (0x000a13cb) clock_digital_separator_pane_cp10

0x448a,	// (0x000a13e7) popup_clock_digital_window_cp02_t1_ParamLimits

0x448a,	// (0x000a13e7) popup_clock_digital_window_cp02_t1

0xa9f1,	// (0x000a794e) clock_digital_number_pane_cp10_g1

0xa9f1,	// (0x000a794e) clock_digital_number_pane_cp10_g2

0x0001,

0xf71d,	// (0x000ac67a) clock_digital_number_pane_cp10_g

0xa9f1,	// (0x000a794e) clock_digital_separator_pane_cp10_g1

0xa9f1,	// (0x000a794e) clock_digital_separator_pane_g2_cp10

0xb6eb,	// (0x000a8648) navi_pane_vded_g4

0xb6f4,	// (0x000a8651) navi_pane_vded_g5

0xb6fd,	// (0x000a865a) navi_pane_vded_t1

0xa425,	// (0x000a7382) main_vded_pane

0x45ad,	// (0x000a150a) main_vded_pane_g1

0x45b9,	// (0x000a1516) main_vded_pane_g2

0x45c5,	// (0x000a1522) main_vded_pane_g3

0x0002,

0xf722,	// (0x000ac67f) main_vded_pane_g

0x45d1,	// (0x000a152e) main_vded_pane_t1

0x45df,	// (0x000a153c) main_vded_pane_t2

0x0001,

0xf729,	// (0x000ac686) main_vded_pane_t

0x45ed,	// (0x000a154a) vded_slider_pane

0x45f7,	// (0x000a1554) vded_video_pane

0xe7ce,	// (0x000ab72b) vded_video_pane_g1

0x4603,	// (0x000a1560) vded_video_pane_g2

0xaaba,	// (0x000a7a17) vded_video_pane_g3

0x0002,

0xf72e,	// (0x000ac68b) vded_video_pane_g

0xe7d8,	// (0x000ab735) vded_slider_pane_g1

0xdfee,	// (0x000aaf4b) vded_slider_pane_g2

0xe7e1,	// (0x000ab73e) vded_slider_pane_g3

0xe7ea,	// (0x000ab747) vded_slider_pane_g4

0xe7f3,	// (0x000ab750) vded_slider_pane_g5

0x0004,

0xf735,	// (0x000ac692) vded_slider_pane_g

0x40ba,	// (0x000a1017) mup3_rocker_pane_ParamLimits

0x40ba,	// (0x000a1017) mup3_rocker_pane

0x460c,	// (0x000a1569) mup3_control_keys_pane_g1

0x4614,	// (0x000a1571) mup3_control_keys_pane_g2

0x461c,	// (0x000a1579) mup3_control_keys_pane_g3

0x4624,	// (0x000a1581) mup3_control_keys_pane_g4

0x0003,

0xf740,	// (0x000ac69d) mup3_control_keys_pane_g

0x0390,	// (0x0009d2ed) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0390,	// (0x0009d2ed) popup_toolbar2_fixed_window_cp01

0x40f0,	// (0x000a104d) popup_toolbar2_fixed_window_cp02_ParamLimits

0x40f0,	// (0x000a104d) popup_toolbar2_fixed_window_cp02

0xd270,	// (0x000aa1cd) popup_call2_audio_second_window_t4_ParamLimits

0xd270,	// (0x000aa1cd) popup_call2_audio_second_window_t4

0xd79e,	// (0x000aa6fb) popup_call2_audio_first_window_t6_ParamLimits

0xd79e,	// (0x000aa6fb) popup_call2_audio_first_window_t6

0xd9dc,	// (0x000aa939) popup_call2_audio_out_window_t6_ParamLimits

0xd9dc,	// (0x000aa939) popup_call2_audio_out_window_t6

0xa425,	// (0x000a7382) main_vitu_pane

0xaa1b,	// (0x000a7978) aid_size_cell_itu_ParamLimits

0xaa1b,	// (0x000a7978) aid_size_cell_itu

0xaa1b,	// (0x000a7978) bg_popup_window_pane_cp08_ParamLimits

0xaa1b,	// (0x000a7978) bg_popup_window_pane_cp08

0xaa1b,	// (0x000a7978) field_vitu_entry_pane_ParamLimits

0xaa1b,	// (0x000a7978) field_vitu_entry_pane

0xaa1b,	// (0x000a7978) grid_vitu_function_pane_ParamLimits

0xaa1b,	// (0x000a7978) grid_vitu_function_pane

0xaa1b,	// (0x000a7978) grid_vitu_itu_pane_ParamLimits

0xaa1b,	// (0x000a7978) grid_vitu_itu_pane

0xaa1b,	// (0x000a7978) cell_vitu_itu_pane_ParamLimits

0xaa1b,	// (0x000a7978) cell_vitu_itu_pane

0xaa1b,	// (0x000a7978) cell_vitu_function_pane_ParamLimits

0xaa1b,	// (0x000a7978) cell_vitu_function_pane

0xaa1b,	// (0x000a7978) bg_popup_sub_pane_cp08_ParamLimits

0xaa1b,	// (0x000a7978) bg_popup_sub_pane_cp08

0xaac4,	// (0x000a7a21) field_vitu_entry_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) field_vitu_entry_pane_t1

0xe7fc,	// (0x000ab759) field_vitu_entry_pane_t2_ParamLimits

0xe7fc,	// (0x000ab759) field_vitu_entry_pane_t2

0x0001,

0xf749,	// (0x000ac6a6) field_vitu_entry_pane_t_ParamLimits

0xf749,	// (0x000ac6a6) field_vitu_entry_pane_t

0xdbcf,	// (0x000aab2c) bg_button_pane_cp05_ParamLimits

0xdbcf,	// (0x000aab2c) bg_button_pane_cp05

0xe819,	// (0x000ab776) cell_vitu_itu_pane_g1

0xb7f2,	// (0x000a874f) cell_vitu_itu_pane_t1_ParamLimits

0xb7f2,	// (0x000a874f) cell_vitu_itu_pane_t1

0xb7f2,	// (0x000a874f) cell_vitu_itu_pane_t2_ParamLimits

0xb7f2,	// (0x000a874f) cell_vitu_itu_pane_t2

0x0002,

0xf74e,	// (0x000ac6ab) cell_vitu_itu_pane_t_ParamLimits

0xf74e,	// (0x000ac6ab) cell_vitu_itu_pane_t

0x018c,	// (0x0009d0e9) bg_button_pane_cp07

0xaaba,	// (0x000a7a17) cell_vitu_function_pane_g1

0xaab2,	// (0x000a7a0f) main_calc_pane_g1

0x01ba,	// (0x0009d117) aid_visual_content_pane

0xa425,	// (0x000a7382) main_vradio_pane

0xaa74,	// (0x000a79d1) main_vradio_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) main_vradio_pane_g1

0xaa82,	// (0x000a79df) main_vradio_pane_g2_ParamLimits

0xaa82,	// (0x000a79df) main_vradio_pane_g2

0x0001,

0xf755,	// (0x000ac6b2) main_vradio_pane_g_ParamLimits

0xf755,	// (0x000ac6b2) main_vradio_pane_g

0xaac4,	// (0x000a7a21) main_vradio_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) main_vradio_pane_t1

0xaac4,	// (0x000a7a21) main_vradio_pane_t2_ParamLimits

0xaac4,	// (0x000a7a21) main_vradio_pane_t2

0xaad8,	// (0x000a7a35) main_vradio_pane_t3_ParamLimits

0xaad8,	// (0x000a7a35) main_vradio_pane_t3

0x0002,

0xf75a,	// (0x000ac6b7) main_vradio_pane_t_ParamLimits

0xf75a,	// (0x000ac6b7) main_vradio_pane_t

0xaa1b,	// (0x000a7978) vradio_rocker_control_pane_ParamLimits

0xaa1b,	// (0x000a7978) vradio_rocker_control_pane

0xaa1b,	// (0x000a7978) vradio_station_info_pane_ParamLimits

0xaa1b,	// (0x000a7978) vradio_station_info_pane

0xaa1b,	// (0x000a7978) vradio_frequency_info_pane_ParamLimits

0xaa1b,	// (0x000a7978) vradio_frequency_info_pane

0xaaba,	// (0x000a7a17) vradio_station_info_pane_g1

0xb7f2,	// (0x000a874f) vradio_station_info_pane_t1_ParamLimits

0xb7f2,	// (0x000a874f) vradio_station_info_pane_t1

0xaad8,	// (0x000a7a35) vradio_station_info_pane_t2_ParamLimits

0xaad8,	// (0x000a7a35) vradio_station_info_pane_t2

0x0001,

0xf761,	// (0x000ac6be) vradio_station_info_pane_t_ParamLimits

0xf761,	// (0x000ac6be) vradio_station_info_pane_t

0x018c,	// (0x0009d0e9) vradio_tuning_pane

0x4634,	// (0x000a1591) vradio_rocker_control_pane_g1

0xe835,	// (0x000ab792) vradio_rocker_control_pane_g2

0x463e,	// (0x000a159b) vradio_rocker_control_pane_g3

0x4648,	// (0x000a15a5) vradio_rocker_control_pane_g4

0x4652,	// (0x000a15af) vradio_rocker_control_pane_g5

0x0004,

0xf766,	// (0x000ac6c3) vradio_rocker_control_pane_g

0xaaba,	// (0x000a7a17) vradio_frequency_info_pane_g1

0xaac4,	// (0x000a7a21) vradio_frequency_info_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) vradio_frequency_info_pane_t1

0x465c,	// (0x000a15b9) vradio_tuning_pane_g1

0x4667,	// (0x000a15c4) vradio_tuning_pane_t1

0xa3d0,	// (0x000a732d) area_side_right_pane_ParamLimits

0xa3d0,	// (0x000a732d) area_side_right_pane

0xde25,	// (0x000aad82) status_small_pane_g1

0xde2d,	// (0x000aad8a) status_small_pane_g2

0xde36,	// (0x000aad93) status_small_pane_g3

0xde3f,	// (0x000aad9c) status_small_pane_g4

0x0003,

0xf532,	// (0x000ac48f) status_small_pane_g

0xde48,	// (0x000aada5) status_small_pane_t1

0xa425,	// (0x000a7382) main_video3_pane

0x018c,	// (0x0009d0e9) cams_zoom_vslider_pane

0xe83d,	// (0x000ab79a) image3_wide_pane_ParamLimits

0xe83d,	// (0x000ab79a) image3_wide_pane

0x018c,	// (0x0009d0e9) image3_wide_small_pane

0xe857,	// (0x000ab7b4) main_video3_pane_g1_ParamLimits

0xe857,	// (0x000ab7b4) main_video3_pane_g1

0xe857,	// (0x000ab7b4) main_video3_pane_g2_ParamLimits

0xe857,	// (0x000ab7b4) main_video3_pane_g2

0x0001,

0xf771,	// (0x000ac6ce) main_video3_pane_g_ParamLimits

0xf771,	// (0x000ac6ce) main_video3_pane_g

0xe875,	// (0x000ab7d2) main_video3_pane_t1_ParamLimits

0xe875,	// (0x000ab7d2) main_video3_pane_t1

0xe875,	// (0x000ab7d2) main_video3_pane_t2_ParamLimits

0xe875,	// (0x000ab7d2) main_video3_pane_t2

0xe875,	// (0x000ab7d2) main_video3_pane_t3_ParamLimits

0xe875,	// (0x000ab7d2) main_video3_pane_t3

0x0002,

0xf776,	// (0x000ac6d3) main_video3_pane_t_ParamLimits

0xf776,	// (0x000ac6d3) main_video3_pane_t

0xaaba,	// (0x000a7a17) cams_zoom_vslider_pane_g1

0xaaba,	// (0x000a7a17) cams_zoom_vslider_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) cams_zoom_vslider_pane_g

0x018c,	// (0x0009d0e9) small_slider_vertical_pane

0xaaba,	// (0x000a7a17) small_slider_vertical_pane_g1

0xaaba,	// (0x000a7a17) small_slider_vertical_pane_g2

0xe89c,	// (0x000ab7f9) small_slider_vertical_pane_g3

0x0002,

0xf77d,	// (0x000ac6da) small_slider_vertical_pane_g

0xa425,	// (0x000a7382) main_hwr_training_pane

0xe8a5,	// (0x000ab802) hwr_training_instruct_pane_ParamLimits

0xe8a5,	// (0x000ab802) hwr_training_instruct_pane

0x4676,	// (0x000a15d3) hwr_training_navi_pane_ParamLimits

0x4676,	// (0x000a15d3) hwr_training_navi_pane

0x4695,	// (0x000a15f2) hwr_training_write_pane_ParamLimits

0x4695,	// (0x000a15f2) hwr_training_write_pane

0x018c,	// (0x0009d0e9) bg_frame_shadow_pane

0xe8dc,	// (0x000ab839) hwr_training_write_pane_g1

0xe8e4,	// (0x000ab841) hwr_training_write_pane_g2

0xe8ec,	// (0x000ab849) hwr_training_write_pane_g3

0xe8f4,	// (0x000ab851) hwr_training_write_pane_g4

0xe8fc,	// (0x000ab859) hwr_training_write_pane_g5

0xe904,	// (0x000ab861) hwr_training_write_pane_g6

0xe90c,	// (0x000ab869) hwr_training_write_pane_g7

0x0006,

0xf784,	// (0x000ac6e1) hwr_training_write_pane_g

0xbb44,	// (0x000a8aa1) hwr_training_navi_pane_g1_ParamLimits

0xbb44,	// (0x000a8aa1) hwr_training_navi_pane_g1

0xbb56,	// (0x000a8ab3) hwr_training_navi_pane_g2_ParamLimits

0xbb56,	// (0x000a8ab3) hwr_training_navi_pane_g2

0xbb68,	// (0x000a8ac5) hwr_training_navi_pane_g3_ParamLimits

0xbb68,	// (0x000a8ac5) hwr_training_navi_pane_g3

0xbb78,	// (0x000a8ad5) hwr_training_navi_pane_g4_ParamLimits

0xbb78,	// (0x000a8ad5) hwr_training_navi_pane_g4

0x0004,

0xf793,	// (0x000ac6f0) hwr_training_navi_pane_g_ParamLimits

0xf793,	// (0x000ac6f0) hwr_training_navi_pane_g

0xbb85,	// (0x000a8ae2) hwr_training_navi_pane_t1

0x46dd,	// (0x000a163a) list_single_hwr_training_instruct_pane_ParamLimits

0x46dd,	// (0x000a163a) list_single_hwr_training_instruct_pane

0xe914,	// (0x000ab871) list_single_hwr_training_instruct_pane_t1

0xe1ca,	// (0x000ab127) bg_frame_shadow_pane_g1

0xe923,	// (0x000ab880) bg_frame_shadow_pane_g2

0xe92b,	// (0x000ab888) bg_frame_shadow_pane_g3

0xe933,	// (0x000ab890) bg_frame_shadow_pane_g4

0xe93b,	// (0x000ab898) bg_frame_shadow_pane_g5

0xe943,	// (0x000ab8a0) bg_frame_shadow_pane_g6

0xe94b,	// (0x000ab8a8) bg_frame_shadow_pane_g7

0xac0e,	// (0x000a7b6b) bg_frame_shadow_pane_g8

0x0007,

0xf79e,	// (0x000ac6fb) bg_frame_shadow_pane_g

0xa425,	// (0x000a7382) main_video_tele_dialer_pane

0x46f9,	// (0x000a1656) aid_size_cell_video_keypad_ParamLimits

0x46f9,	// (0x000a1656) aid_size_cell_video_keypad

0x4713,	// (0x000a1670) grid_video_dialer_keypad_pane_ParamLimits

0x4713,	// (0x000a1670) grid_video_dialer_keypad_pane

0x475f,	// (0x000a16bc) video_down_pane_cp_ParamLimits

0x475f,	// (0x000a16bc) video_down_pane_cp

0x4791,	// (0x000a16ee) cell_video_dialer_keypad_pane_ParamLimits

0x4791,	// (0x000a16ee) cell_video_dialer_keypad_pane

0xe953,	// (0x000ab8b0) bg_button_pane_cp08_ParamLimits

0xe953,	// (0x000ab8b0) bg_button_pane_cp08

0x47b7,	// (0x000a1714) cell_video_dialer_keypad_pane_g1_ParamLimits

0x47b7,	// (0x000a1714) cell_video_dialer_keypad_pane_g1

0x40a4,	// (0x000a1001) mup3_rocker2_pane_ParamLimits

0x40a4,	// (0x000a1001) mup3_rocker2_pane

0xaaba,	// (0x000a7a17) mup3_rocker2_pane_g1

0x31d6,	// (0x000a0133) main_dialer2_pane

0xa425,	// (0x000a7382) main_mp4_pane

0xbbb1,	// (0x000a8b0e) main_mp4_pane_g1_ParamLimits

0xbbb1,	// (0x000a8b0e) main_mp4_pane_g1

0xbbb1,	// (0x000a8b0e) main_mp4_pane_g2_ParamLimits

0xbbb1,	// (0x000a8b0e) main_mp4_pane_g2

0x47f2,	// (0x000a174f) main_mp4_pane_g3_ParamLimits

0x47f2,	// (0x000a174f) main_mp4_pane_g3

0xbbcf,	// (0x000a8b2c) main_mp4_pane_g4_ParamLimits

0xbbcf,	// (0x000a8b2c) main_mp4_pane_g4

0xbbf7,	// (0x000a8b54) main_mp4_pane_g5_ParamLimits

0xbbf7,	// (0x000a8b54) main_mp4_pane_g5

0x0007,

0xf7be,	// (0x000ac71b) main_mp4_pane_g_ParamLimits

0xf7be,	// (0x000ac71b) main_mp4_pane_g

0xbc5f,	// (0x000a8bbc) main_mp4_pane_t1_ParamLimits

0xbc5f,	// (0x000a8bbc) main_mp4_pane_t1

0xbcc1,	// (0x000a8c1e) main_mp4_pane_t2_ParamLimits

0xbcc1,	// (0x000a8c1e) main_mp4_pane_t2

0xbd25,	// (0x000a8c82) main_mp4_pane_t3_ParamLimits

0xbd25,	// (0x000a8c82) main_mp4_pane_t3

0xbd83,	// (0x000a8ce0) main_mp4_pane_t4_ParamLimits

0xbd83,	// (0x000a8ce0) main_mp4_pane_t4

0x0003,

0xf7cf,	// (0x000ac72c) main_mp4_pane_t_ParamLimits

0xf7cf,	// (0x000ac72c) main_mp4_pane_t

0xbde1,	// (0x000a8d3e) mp4_progress_pane_ParamLimits

0xbde1,	// (0x000a8d3e) mp4_progress_pane

0xbe15,	// (0x000a8d72) mp4_rocker_pane_ParamLimits

0xbe15,	// (0x000a8d72) mp4_rocker_pane

0xe967,	// (0x000ab8c4) mp4_progress_pane_t1

0xe989,	// (0x000ab8e6) mp4_progress_pane_t2

0x0001,

0xf7d8,	// (0x000ac735) mp4_progress_pane_t

0xe9ab,	// (0x000ab908) mup_progress_pane_cp04

0x37c8,	// (0x000a0725) mp4_rocker_pane_g1

0xa417,	// (0x000a7374) aid_cell_size_keypad2_ParamLimits

0xa417,	// (0x000a7374) aid_cell_size_keypad2

0xa417,	// (0x000a7374) dialer2_ne_pane_ParamLimits

0xa417,	// (0x000a7374) dialer2_ne_pane

0xa417,	// (0x000a7374) grid_dialer2_keypad_pane_ParamLimits

0xa417,	// (0x000a7374) grid_dialer2_keypad_pane

0xdbcf,	// (0x000aab2c) bg_popup_call_pane_cp07_ParamLimits

0xdbcf,	// (0x000aab2c) bg_popup_call_pane_cp07

0x4824,	// (0x000a1781) dialer2_ne_pane_t1_ParamLimits

0x4824,	// (0x000a1781) dialer2_ne_pane_t1

0x4864,	// (0x000a17c1) cell_dialer2_keypad_pane_ParamLimits

0x4864,	// (0x000a17c1) cell_dialer2_keypad_pane

0xdbcf,	// (0x000aab2c) bg_button_pane_pane_cp04_ParamLimits

0xdbcf,	// (0x000aab2c) bg_button_pane_pane_cp04

0xaa74,	// (0x000a79d1) cell_dialer2_keypad_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) cell_dialer2_keypad_pane_g1

0x0f86,	// (0x0009dee3) aid_placing_vt_set_content_ParamLimits

0x0f86,	// (0x0009dee3) aid_placing_vt_set_content

0x0faa,	// (0x0009df07) aid_placing_vt_set_title_ParamLimits

0x0faa,	// (0x0009df07) aid_placing_vt_set_title

0xa425,	// (0x000a7382) main_image3_pane

0x48d9,	// (0x000a1836) area_side_right_pane_cp01_ParamLimits

0x48d9,	// (0x000a1836) area_side_right_pane_cp01

0x48f2,	// (0x000a184f) main_image3_pane_g1_ParamLimits

0x48f2,	// (0x000a184f) main_image3_pane_g1

0x4900,	// (0x000a185d) main_image3_pane_g2_ParamLimits

0x4900,	// (0x000a185d) main_image3_pane_g2

0x4928,	// (0x000a1885) main_image3_pane_g3_ParamLimits

0x4928,	// (0x000a1885) main_image3_pane_g3

0x4952,	// (0x000a18af) main_image3_pane_g4_ParamLimits

0x4952,	// (0x000a18af) main_image3_pane_g4

0x0003,

0xf7e7,	// (0x000ac744) main_image3_pane_g_ParamLimits

0xf7e7,	// (0x000ac744) main_image3_pane_g

0x497c,	// (0x000a18d9) main_image3_pane_t1_ParamLimits

0x497c,	// (0x000a18d9) main_image3_pane_t1

0x49d4,	// (0x000a1931) main_image3_pane_t2_ParamLimits

0x49d4,	// (0x000a1931) main_image3_pane_t2

0x4a26,	// (0x000a1983) main_image3_pane_t3_ParamLimits

0x4a26,	// (0x000a1983) main_image3_pane_t3

0x0003,

0xf7f0,	// (0x000ac74d) main_image3_pane_t_ParamLimits

0xf7f0,	// (0x000ac74d) main_image3_pane_t

0xaa1b,	// (0x000a7978) grid_sctrl_middle_pane_cp01_ParamLimits

0xaa1b,	// (0x000a7978) grid_sctrl_middle_pane_cp01

0x4aae,	// (0x000a1a0b) cell_sctrl_middle_pane_cp01_ParamLimits

0x4aae,	// (0x000a1a0b) cell_sctrl_middle_pane_cp01

0x4acb,	// (0x000a1a28) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x4acb,	// (0x000a1a28) cell_sctrl_middle_pane_cp01_g1

0xa425,	// (0x000a7382) main_call4_pane

0x4ae0,	// (0x000a1a3d) aid_size_button_call4_ParamLimits

0x4ae0,	// (0x000a1a3d) aid_size_button_call4

0x4b13,	// (0x000a1a70) call4_windows_pane_ParamLimits

0x4b13,	// (0x000a1a70) call4_windows_pane

0x4b32,	// (0x000a1a8f) grid_call4_button_pane_ParamLimits

0x4b32,	// (0x000a1a8f) grid_call4_button_pane

0x4b69,	// (0x000a1ac6) call4_windows_conf_pane

0x4b82,	// (0x000a1adf) popup_call4_audio_first_window_ParamLimits

0x4b82,	// (0x000a1adf) popup_call4_audio_first_window

0x4bd2,	// (0x000a1b2f) popup_call4_audio_second_window_ParamLimits

0x4bd2,	// (0x000a1b2f) popup_call4_audio_second_window

0x4beb,	// (0x000a1b48) popup_call4_audio_wait_window_ParamLimits

0x4beb,	// (0x000a1b48) popup_call4_audio_wait_window

0x4bf9,	// (0x000a1b56) cell_call4_button_pane_ParamLimits

0x4bf9,	// (0x000a1b56) cell_call4_button_pane

0x4c20,	// (0x000a1b7d) bg_button_pane_cp09_ParamLimits

0x4c20,	// (0x000a1b7d) bg_button_pane_cp09

0x4c2c,	// (0x000a1b89) cell_call4_button_pane_g1_ParamLimits

0x4c2c,	// (0x000a1b89) cell_call4_button_pane_g1

0x4c52,	// (0x000a1baf) cell_call4_button_pane_t1_ParamLimits

0x4c52,	// (0x000a1baf) cell_call4_button_pane_t1

0xea16,	// (0x000ab973) popup_call4_audio_conf_window_ParamLimits

0xea16,	// (0x000ab973) popup_call4_audio_conf_window

0x4106,	// (0x000a1063) mup3_progress_pane_t1_ParamLimits

0x4125,	// (0x000a1082) mup3_progress_pane_t2_ParamLimits

0xe504,	// (0x000ab461) mup3_progress_pane_t3_ParamLimits

0xf6ca,	// (0x000ac627) mup3_progress_pane_t_ParamLimits

0xe521,	// (0x000ab47e) mup_progress_pane_cp03_ParamLimits

0x462c,	// (0x000a1589) mup3_control_keys_pane_g4_copy1

0xbe15,	// (0x000a8d72) mp4_rocker2_pane_ParamLimits

0xbe15,	// (0x000a8d72) mp4_rocker2_pane

0xbe91,	// (0x000a8dee) mp4_rocker2_pane_g1

0xbe91,	// (0x000a8dee) mp4_rocker2_pane_g2

0xbe91,	// (0x000a8dee) mp4_rocker2_pane_g3

0xbe91,	// (0x000a8dee) mp4_rocker2_pane_g4

0xbe91,	// (0x000a8dee) mp4_rocker2_pane_g5

0x0004,

0xf7f9,	// (0x000ac756) mp4_rocker2_pane_g

0xa425,	// (0x000a7382) main_camera4_pane

0xa425,	// (0x000a7382) main_video4_pane

0x472d,	// (0x000a168a) main_video_tele_dialer_pane_t1_ParamLimits

0x472d,	// (0x000a168a) main_video_tele_dialer_pane_t1

0x4746,	// (0x000a16a3) main_video_tele_dialer_pane_t2_ParamLimits

0x4746,	// (0x000a16a3) main_video_tele_dialer_pane_t2

0x0001,

0xf7af,	// (0x000ac70c) main_video_tele_dialer_pane_t_ParamLimits

0xf7af,	// (0x000ac70c) main_video_tele_dialer_pane_t

0x4c90,	// (0x000a1bed) cam4_autofocus_pane_ParamLimits

0x4c90,	// (0x000a1bed) cam4_autofocus_pane

0x4ca6,	// (0x000a1c03) cam4_image_uncrop_pane_ParamLimits

0x4ca6,	// (0x000a1c03) cam4_image_uncrop_pane

0x4cbf,	// (0x000a1c1c) cam4_indicators_pane_ParamLimits

0x4cbf,	// (0x000a1c1c) cam4_indicators_pane

0x4cef,	// (0x000a1c4c) main_camera4_pane_g1_ParamLimits

0x4cef,	// (0x000a1c4c) main_camera4_pane_g1

0x4d01,	// (0x000a1c5e) main_camera4_pane_g2_ParamLimits

0x4d01,	// (0x000a1c5e) main_camera4_pane_g2

0x4d14,	// (0x000a1c71) main_camera4_pane_g3_ParamLimits

0x4d14,	// (0x000a1c71) main_camera4_pane_g3

0x4d27,	// (0x000a1c84) main_camera4_pane_g4_ParamLimits

0x4d27,	// (0x000a1c84) main_camera4_pane_g4

0x4d3a,	// (0x000a1c97) main_camera4_pane_g5_ParamLimits

0x4d3a,	// (0x000a1c97) main_camera4_pane_g5

0x0005,

0xf804,	// (0x000ac761) main_camera4_pane_g_ParamLimits

0xf804,	// (0x000ac761) main_camera4_pane_g

0x4d5e,	// (0x000a1cbb) main_camera4_pane_t1_ParamLimits

0x4d5e,	// (0x000a1cbb) main_camera4_pane_t1

0x4daa,	// (0x000a1d07) bg_tb_trans_pane_cp06

0xbed3,	// (0x000a8e30) cam4_indicators_pane_g1

0xbee4,	// (0x000a8e41) cam4_indicators_pane_g2

0x0002,

0xf81f,	// (0x000ac77c) cam4_indicators_pane_g

0xbefc,	// (0x000a8e59) cam4_indicators_pane_t1

0x4dd0,	// (0x000a1d2d) main_video4_pane_g1_ParamLimits

0x4dd0,	// (0x000a1d2d) main_video4_pane_g1

0x4ddf,	// (0x000a1d3c) main_video4_pane_g2_ParamLimits

0x4ddf,	// (0x000a1d3c) main_video4_pane_g2

0x4def,	// (0x000a1d4c) main_video4_pane_g3_ParamLimits

0x4def,	// (0x000a1d4c) main_video4_pane_g3

0x4dff,	// (0x000a1d5c) main_video4_pane_g4_ParamLimits

0x4dff,	// (0x000a1d5c) main_video4_pane_g4

0x0004,

0xf826,	// (0x000ac783) main_video4_pane_g_ParamLimits

0xf826,	// (0x000ac783) main_video4_pane_g

0x4e1f,	// (0x000a1d7c) vid4_indicators_pane_ParamLimits

0x4e1f,	// (0x000a1d7c) vid4_indicators_pane

0x4e49,	// (0x000a1da6) video4_image_uncrop_cif_pane_ParamLimits

0x4e49,	// (0x000a1da6) video4_image_uncrop_cif_pane

0x4e63,	// (0x000a1dc0) video4_image_uncrop_nhd_pane_ParamLimits

0x4e63,	// (0x000a1dc0) video4_image_uncrop_nhd_pane

0x4ca6,	// (0x000a1c03) video4_image_uncrop_vga_pane_ParamLimits

0x4ca6,	// (0x000a1c03) video4_image_uncrop_vga_pane

0xa417,	// (0x000a7374) bg_tb_trans_pane_cp07

0xbf2a,	// (0x000a8e87) vid4_indicators_pane_g1

0xbf40,	// (0x000a8e9d) vid4_indicators_pane_g2

0xbf54,	// (0x000a8eb1) vid4_indicators_pane_g3

0x0004,

0xf831,	// (0x000ac78e) vid4_indicators_pane_g

0xbf85,	// (0x000a8ee2) vid4_indicators_pane_t1

0x4e7a,	// (0x000a1dd7) cam4_autofocus_pane_g1

0x4e82,	// (0x000a1ddf) cam4_autofocus_pane_g2

0x4e8a,	// (0x000a1de7) cam4_autofocus_pane_g3

0x0002,

0xf83c,	// (0x000ac799) cam4_autofocus_pane_g

0x4e92,	// (0x000a1def) cam4_autofocus_pane_g3_copy1

0x4775,	// (0x000a16d2) video_down_pane_cp_t1

0x4783,	// (0x000a16e0) video_down_pane_cp_t2

0x0001,

0xf7b4,	// (0x000ac711) video_down_pane_cp_t

0xa417,	// (0x000a7374) popup_vitu2_window_ParamLimits

0xa417,	// (0x000a7374) popup_vitu2_window

0x4e9a,	// (0x000a1df7) aid_size_cell2_itu2_ParamLimits

0x4e9a,	// (0x000a1df7) aid_size_cell2_itu2

0x4ec0,	// (0x000a1e1d) aid_size_cell_itu2_ParamLimits

0x4ec0,	// (0x000a1e1d) aid_size_cell_itu2

0x4f1e,	// (0x000a1e7b) bg_popup_window_pane_cp09_ParamLimits

0x4f1e,	// (0x000a1e7b) bg_popup_window_pane_cp09

0x4f2c,	// (0x000a1e89) field_vitu2_entry_pane_ParamLimits

0x4f2c,	// (0x000a1e89) field_vitu2_entry_pane

0x4f54,	// (0x000a1eb1) grid_vitu2_function_pane_ParamLimits

0x4f54,	// (0x000a1eb1) grid_vitu2_function_pane

0x4fa5,	// (0x000a1f02) grid_vitu2_itu_pane_ParamLimits

0x4fa5,	// (0x000a1f02) grid_vitu2_itu_pane

0x5035,	// (0x000a1f92) cell_vitu2_itu_pane_ParamLimits

0x5035,	// (0x000a1f92) cell_vitu2_itu_pane

0x5063,	// (0x000a1fc0) cell_vitu2_function_pane_ParamLimits

0x5063,	// (0x000a1fc0) cell_vitu2_function_pane

0xea30,	// (0x000ab98d) bg_popup_call_pane_cp08_ParamLimits

0xea30,	// (0x000ab98d) bg_popup_call_pane_cp08

0xea47,	// (0x000ab9a4) field_vitu2_entry_pane_g1

0xea53,	// (0x000ab9b0) field_vitu2_entry_pane_g2

0x0002,

0xf843,	// (0x000ac7a0) field_vitu2_entry_pane_g

0xea5f,	// (0x000ab9bc) field_vitu2_entry_pane_t1_ParamLimits

0xea5f,	// (0x000ab9bc) field_vitu2_entry_pane_t1

0xea8e,	// (0x000ab9eb) field_vitu2_entry_pane_t2_ParamLimits

0xea8e,	// (0x000ab9eb) field_vitu2_entry_pane_t2

0x0001,

0xf84a,	// (0x000ac7a7) field_vitu2_entry_pane_t_ParamLimits

0xf84a,	// (0x000ac7a7) field_vitu2_entry_pane_t

0x50a7,	// (0x000a2004) bg_button_pane_cp010_ParamLimits

0x50a7,	// (0x000a2004) bg_button_pane_cp010

0x50b5,	// (0x000a2012) cell_vitu2_itu_pane_g1

0x50db,	// (0x000a2038) cell_vitu2_itu_pane_t1_ParamLimits

0x50db,	// (0x000a2038) cell_vitu2_itu_pane_t1

0x0088,	// (0x0009cfe5) cell_vitu2_itu_pane_t2_ParamLimits

0x0088,	// (0x0009cfe5) cell_vitu2_itu_pane_t2

0x0002,

0xf854,	// (0x000ac7b1) cell_vitu2_itu_pane_t_ParamLimits

0xf854,	// (0x000ac7b1) cell_vitu2_itu_pane_t

0xa417,	// (0x000a7374) bg_button_pane_cp011

0x5139,	// (0x000a2096) cell_vitu2_function_pane_g1

0xa425,	// (0x000a7382) main_myfav_hc_pane

0x4a76,	// (0x000a19d3) popup_image3_note_pane_ParamLimits

0x4a76,	// (0x000a19d3) popup_image3_note_pane

0x4a92,	// (0x000a19ef) popup_image3_tool_bar_pane_ParamLimits

0x4a92,	// (0x000a19ef) popup_image3_tool_bar_pane

0x0116,	// (0x0009d073) cell_vitu2_itu_pane_t3_ParamLimits

0x0116,	// (0x0009d073) cell_vitu2_itu_pane_t3

0x018c,	// (0x0009d0e9) bg_popup_trans_pane

0xeab3,	// (0x000aba10) grid_image3_tool_bar_pane

0xeabd,	// (0x000aba1a) bg_popup_trans_pane_g1

0xaf7b,	// (0x000a7ed8) bg_popup_trans_pane_g2

0xeac5,	// (0x000aba22) bg_popup_trans_pane_g3

0xeacd,	// (0x000aba2a) bg_popup_trans_pane_g4

0xead5,	// (0x000aba32) bg_popup_trans_pane_g5

0xeadd,	// (0x000aba3a) bg_popup_trans_pane_g6

0xeae5,	// (0x000aba42) bg_popup_trans_pane_g7

0xeaed,	// (0x000aba4a) bg_popup_trans_pane_g8

0xaf5b,	// (0x000a7eb8) bg_popup_trans_pane_g9

0x0008,

0xf85b,	// (0x000ac7b8) bg_popup_trans_pane_g

0xeaf5,	// (0x000aba52) cell_image3_tool_bar_pane_ParamLimits

0xeaf5,	// (0x000aba52) cell_image3_tool_bar_pane

0xaaba,	// (0x000a7a17) cell_image3_tool_bar_pane_g1

0x018c,	// (0x0009d0e9) bg_popup_trans_pane_cp1

0xeb0b,	// (0x000aba68) popup_image3_note_pane_t1

0xeb19,	// (0x000aba76) popup_image3_note_pane_t2

0xeb27,	// (0x000aba84) popup_image3_note_pane_t3

0x0002,

0xf86e,	// (0x000ac7cb) popup_image3_note_pane_t

0xeb37,	// (0x000aba94) popup_image3_note_pane_t3_copy1

0x514d,	// (0x000a20aa) bg_myfav_hc_instruction_pane_ParamLimits

0x514d,	// (0x000a20aa) bg_myfav_hc_instruction_pane

0x5165,	// (0x000a20c2) cell_myfav_contact_pane_ParamLimits

0x5165,	// (0x000a20c2) cell_myfav_contact_pane

0x5181,	// (0x000a20de) cell_myfav_contact_pane_cp1_ParamLimits

0x5181,	// (0x000a20de) cell_myfav_contact_pane_cp1

0x5199,	// (0x000a20f6) cell_myfav_contact_pane_cp2_ParamLimits

0x5199,	// (0x000a20f6) cell_myfav_contact_pane_cp2

0x51b1,	// (0x000a210e) cell_myfav_contact_pane_cp3_ParamLimits

0x51b1,	// (0x000a210e) cell_myfav_contact_pane_cp3

0x51c8,	// (0x000a2125) cell_myfav_contact_pane_cp4_ParamLimits

0x51c8,	// (0x000a2125) cell_myfav_contact_pane_cp4

0x51e0,	// (0x000a213d) cell_myfav_contact_pane_cp5_ParamLimits

0x51e0,	// (0x000a213d) cell_myfav_contact_pane_cp5

0x51f4,	// (0x000a2151) cell_myfav_contact_pane_cp6_ParamLimits

0x51f4,	// (0x000a2151) cell_myfav_contact_pane_cp6

0x520a,	// (0x000a2167) cell_myfav_contact_pane_cp7_ParamLimits

0x520a,	// (0x000a2167) cell_myfav_contact_pane_cp7

0xeb45,	// (0x000abaa2) listscroll_gen_pane_cp05

0x5222,	// (0x000a217f) main_myfav_hc_pane_g1_ParamLimits

0x5222,	// (0x000a217f) main_myfav_hc_pane_g1

0x523c,	// (0x000a2199) main_myfav_hc_pane_g2_ParamLimits

0x523c,	// (0x000a2199) main_myfav_hc_pane_g2

0x0002,

0xf875,	// (0x000ac7d2) main_myfav_hc_pane_g_ParamLimits

0xf875,	// (0x000ac7d2) main_myfav_hc_pane_g

0x5270,	// (0x000a21cd) main_myfav_hc_pane_t1_ParamLimits

0x5270,	// (0x000a21cd) main_myfav_hc_pane_t1

0xeb4e,	// (0x000abaab) main_myfav_hc_pane_t2_ParamLimits

0xeb4e,	// (0x000abaab) main_myfav_hc_pane_t2

0xeb60,	// (0x000ababd) main_myfav_hc_pane_t3_ParamLimits

0xeb60,	// (0x000ababd) main_myfav_hc_pane_t3

0x5287,	// (0x000a21e4) main_myfav_hc_pane_t4_ParamLimits

0x5287,	// (0x000a21e4) main_myfav_hc_pane_t4

0x0004,

0xf87c,	// (0x000ac7d9) main_myfav_hc_pane_t_ParamLimits

0xf87c,	// (0x000ac7d9) main_myfav_hc_pane_t

0xaaba,	// (0x000a7a17) bg_myfav_hc_instruction_pane_g1

0xeb72,	// (0x000abacf) cell_myfav_contact_pane_g1_ParamLimits

0xeb72,	// (0x000abacf) cell_myfav_contact_pane_g1

0xeb72,	// (0x000abacf) cell_myfav_contact_pane_g2_ParamLimits

0xeb72,	// (0x000abacf) cell_myfav_contact_pane_g2

0xeb7e,	// (0x000abadb) cell_myfav_contact_pane_g3_ParamLimits

0xeb7e,	// (0x000abadb) cell_myfav_contact_pane_g3

0xaa82,	// (0x000a79df) cell_myfav_contact_pane_g4_ParamLimits

0xaa82,	// (0x000a79df) cell_myfav_contact_pane_g4

0xeb8b,	// (0x000abae8) cell_myfav_contact_pane_g5_ParamLimits

0xeb8b,	// (0x000abae8) cell_myfav_contact_pane_g5

0x0004,

0xf887,	// (0x000ac7e4) cell_myfav_contact_pane_g_ParamLimits

0xf887,	// (0x000ac7e4) cell_myfav_contact_pane_g

0x5256,	// (0x000a21b3) main_myfav_hc_pane_g3_ParamLimits

0x5256,	// (0x000a21b3) main_myfav_hc_pane_g3

0x02f5,	// (0x0009d252) popup_adpt_find_window

0x52b1,	// (0x000a220e) afind_page_pane_ParamLimits

0x52b1,	// (0x000a220e) afind_page_pane

0x52c7,	// (0x000a2224) aid_size_cell_afind_ParamLimits

0x52c7,	// (0x000a2224) aid_size_cell_afind

0x52e5,	// (0x000a2242) bg_popup_sub_pane_cp09_ParamLimits

0x52e5,	// (0x000a2242) bg_popup_sub_pane_cp09

0x52f7,	// (0x000a2254) find_pane_cp01_ParamLimits

0x52f7,	// (0x000a2254) find_pane_cp01

0xeb97,	// (0x000abaf4) grid_afind_control_pane_ParamLimits

0xeb97,	// (0x000abaf4) grid_afind_control_pane

0x530b,	// (0x000a2268) grid_afind_pane_ParamLimits

0x530b,	// (0x000a2268) grid_afind_pane

0x532d,	// (0x000a228a) cell_afind_pane_ParamLimits

0x532d,	// (0x000a228a) cell_afind_pane

0xaaba,	// (0x000a7a17) afind_page_pane_g1

0x5396,	// (0x000a22f3) afind_page_pane_g2

0x539e,	// (0x000a22fb) afind_page_pane_g3

0x0002,

0xf892,	// (0x000ac7ef) afind_page_pane_g

0x53a6,	// (0x000a2303) afind_page_pane_t1

0xebbd,	// (0x000abb1a) cell_afind_grid_control_pane_ParamLimits

0xebbd,	// (0x000abb1a) cell_afind_grid_control_pane

0xebcc,	// (0x000abb29) bg_button_pane_cp69_ParamLimits

0xebcc,	// (0x000abb29) bg_button_pane_cp69

0x53b4,	// (0x000a2311) cell_afind_pane_g1_ParamLimits

0x53b4,	// (0x000a2311) cell_afind_pane_g1

0x53c1,	// (0x000a231e) cell_afind_pane_t1_ParamLimits

0x53c1,	// (0x000a231e) cell_afind_pane_t1

0xebd8,	// (0x000abb35) bg_button_pane_cp72

0xebe0,	// (0x000abb3d) cell_afind_grid_control_pane_g1

0x2cae,	// (0x0009fc0b) aid_image_placing_area_ParamLimits

0x2cae,	// (0x0009fc0b) aid_image_placing_area

0xaa74,	// (0x000a79d1) field_vitu_entry_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) field_vitu_entry_pane_g1

0xaa74,	// (0x000a79d1) field_vitu_entry_pane_g2_ParamLimits

0xaa74,	// (0x000a79d1) field_vitu_entry_pane_g2

0x0001,

0xf1bc,	// (0x000ac119) field_vitu_entry_pane_g_ParamLimits

0xf1bc,	// (0x000ac119) field_vitu_entry_pane_g

0xe819,	// (0x000ab776) cell_vitu_itu_pane_g1_ParamLimits

0xe7fc,	// (0x000ab759) cell_vitu_itu_pane_t3_ParamLimits

0xe7fc,	// (0x000ab759) cell_vitu_itu_pane_t3

0xe967,	// (0x000ab8c4) mp4_progress_pane_t1_ParamLimits

0xe989,	// (0x000ab8e6) mp4_progress_pane_t2_ParamLimits

0xf7d8,	// (0x000ac735) mp4_progress_pane_t_ParamLimits

0xe9ab,	// (0x000ab908) mup_progress_pane_cp04_ParamLimits

0x529b,	// (0x000a21f8) main_myfav_hc_pane_t5_ParamLimits

0x529b,	// (0x000a21f8) main_myfav_hc_pane_t5

0xa3c0,	// (0x000a731d) aid_zoom_text_primary

0x02f5,	// (0x0009d252) popup_adpt_find_window_ParamLimits

0xa417,	// (0x000a7374) main_cam_set_pane

0x4cd8,	// (0x000a1c35) cam4_zoom_pane_ParamLimits

0x4cd8,	// (0x000a1c35) cam4_zoom_pane

0x53d3,	// (0x000a2330) main_cam_set_pane_g1_ParamLimits

0x53d3,	// (0x000a2330) main_cam_set_pane_g1

0x53e1,	// (0x000a233e) main_cam_set_pane_g2_ParamLimits

0x53e1,	// (0x000a233e) main_cam_set_pane_g2

0x0001,

0xf899,	// (0x000ac7f6) main_cam_set_pane_g_ParamLimits

0xf899,	// (0x000ac7f6) main_cam_set_pane_g

0x5402,	// (0x000a235f) main_cam_set_pane_t1_ParamLimits

0x5402,	// (0x000a235f) main_cam_set_pane_t1

0x541d,	// (0x000a237a) main_cset_listscroll_pane_ParamLimits

0x541d,	// (0x000a237a) main_cset_listscroll_pane

0x5445,	// (0x000a23a2) main_cset_slider_pane_ParamLimits

0x5445,	// (0x000a23a2) main_cset_slider_pane

0xebf1,	// (0x000abb4e) main_cset_list_pane_ParamLimits

0xebf1,	// (0x000abb4e) main_cset_list_pane

0xec01,	// (0x000abb5e) scroll_pane_cp028

0x546f,	// (0x000a23cc) aid_area_touch_slider

0x548b,	// (0x000a23e8) cset_slider_pane

0x54ae,	// (0x000a240b) main_cset_slider_pane_g1

0x54c3,	// (0x000a2420) main_cset_slider_pane_g2

0x0011,

0xf89e,	// (0x000ac7fb) main_cset_slider_pane_g

0xec3a,	// (0x000abb97) main_cset_slider_pane_t1

0x5585,	// (0x000a24e2) main_cset_slider_pane_t2

0x559f,	// (0x000a24fc) main_cset_slider_pane_t3

0x55b9,	// (0x000a2516) main_cset_slider_pane_t4

0x55d3,	// (0x000a2530) main_cset_slider_pane_t5

0x55f1,	// (0x000a254e) main_cset_slider_pane_t6

0x5606,	// (0x000a2563) main_cset_slider_pane_t7

0x000e,

0xf8c3,	// (0x000ac820) main_cset_slider_pane_t

0x5712,	// (0x000a266f) cset_list_set_pane_ParamLimits

0x5712,	// (0x000a266f) cset_list_set_pane

0xecd4,	// (0x000abc31) aid_position_infowindow_above

0xecdc,	// (0x000abc39) aid_position_infowindow_below

0x5726,	// (0x000a2683) cset_list_set_pane_g1_ParamLimits

0x5726,	// (0x000a2683) cset_list_set_pane_g1

0x5732,	// (0x000a268f) cset_list_set_pane_g3_ParamLimits

0x5732,	// (0x000a268f) cset_list_set_pane_g3

0x0001,

0xf8e2,	// (0x000ac83f) cset_list_set_pane_g_ParamLimits

0xf8e2,	// (0x000ac83f) cset_list_set_pane_g

0x5741,	// (0x000a269e) cset_list_set_pane_t1_ParamLimits

0x5741,	// (0x000a269e) cset_list_set_pane_t1

0xaa1b,	// (0x000a7978) list_highlight_pane_cp021_ParamLimits

0xaa1b,	// (0x000a7978) list_highlight_pane_cp021

0xb878,	// (0x000a87d5) cset_slider_pane_g1

0xb88a,	// (0x000a87e7) cset_slider_pane_g2

0xb881,	// (0x000a87de) cset_slider_pane_g3

0x0002,

0xf8e7,	// (0x000ac844) cset_slider_pane_g

0xb4f4,	// (0x000a8451) aid_area_touch_cam4_zoom

0x5756,	// (0x000a26b3) cam4_zoom_cont_pane

0x575e,	// (0x000a26bb) cam4_zoom_pane_g1

0x5766,	// (0x000a26c3) cam4_zoom_pane_g2

0x576e,	// (0x000a26cb) cam4_zoom_pane_g3

0x0002,

0xf8ee,	// (0x000ac84b) cam4_zoom_pane_g

0xbf9c,	// (0x000a8ef9) cam4_zoom_cont_pane_g1

0xbfa5,	// (0x000a8f02) cam4_zoom_cont_pane_g2

0xbfae,	// (0x000a8f0b) cam4_zoom_cont_pane_g3

0x0002,

0xf8f5,	// (0x000ac852) cam4_zoom_cont_pane_g

0x4afe,	// (0x000a1a5b) call4_image_pane_ParamLimits

0x4afe,	// (0x000a1a5b) call4_image_pane

0x4b69,	// (0x000a1ac6) call4_windows_conf_pane_ParamLimits

0x4bb0,	// (0x000a1b0d) popup_call4_audio_in_window_ParamLimits

0x4bb0,	// (0x000a1b0d) popup_call4_audio_in_window

0x018c,	// (0x0009d0e9) bg_popup_call2_act_pane_cp02

0xea0e,	// (0x000ab96b) call4_list_conf_pane

0xaaba,	// (0x000a7a17) call4_image_pane_g1

0xaaba,	// (0x000a7a17) call4_image_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) call4_image_pane_g

0xece4,	// (0x000abc41) list_single_graphic_popup_conf4_pane_ParamLimits

0xece4,	// (0x000abc41) list_single_graphic_popup_conf4_pane

0x018c,	// (0x0009d0e9) list_highlight_pane_cp022

0xecf9,	// (0x000abc56) list_single_graphic_popup_conf4_pane_g1

0xb54d,	// (0x000a84aa) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf8fc,	// (0x000ac859) list_single_graphic_popup_conf4_pane_g

0xed01,	// (0x000abc5e) list_single_graphic_popup_conf4_pane_t1

0x10c1,	// (0x0009e01e) popup_vtel_slider_window_ParamLimits

0x10c1,	// (0x0009e01e) popup_vtel_slider_window

0xe9e0,	// (0x000ab93d) dialer2_ne_pane_t2_ParamLimits

0xe9e0,	// (0x000ab93d) dialer2_ne_pane_t2

0x0001,

0xf7dd,	// (0x000ac73a) dialer2_ne_pane_t_ParamLimits

0xf7dd,	// (0x000ac73a) dialer2_ne_pane_t

0xdbcf,	// (0x000aab2c) bg_popup_sub_pane_cp010_ParamLimits

0xdbcf,	// (0x000aab2c) bg_popup_sub_pane_cp010

0x5776,	// (0x000a26d3) popup_vtel_slider_window_g1_ParamLimits

0x5776,	// (0x000a26d3) popup_vtel_slider_window_g1

0x5789,	// (0x000a26e6) popup_vtel_slider_window_g2_ParamLimits

0x5789,	// (0x000a26e6) popup_vtel_slider_window_g2

0x0003,

0xf901,	// (0x000ac85e) popup_vtel_slider_window_g_ParamLimits

0xf901,	// (0x000ac85e) popup_vtel_slider_window_g

0x57df,	// (0x000a273c) vtel_slider_pane_ParamLimits

0x57df,	// (0x000a273c) vtel_slider_pane

0x5801,	// (0x000a275e) vtel_slider_pane_g1_ParamLimits

0x5801,	// (0x000a275e) vtel_slider_pane_g1

0x5815,	// (0x000a2772) vtel_slider_pane_g2_ParamLimits

0x5815,	// (0x000a2772) vtel_slider_pane_g2

0x582d,	// (0x000a278a) vtel_slider_pane_g3_ParamLimits

0x582d,	// (0x000a278a) vtel_slider_pane_g3

0x5801,	// (0x000a275e) vtel_slider_pane_g4_ParamLimits

0x5801,	// (0x000a275e) vtel_slider_pane_g4

0x5843,	// (0x000a27a0) vtel_slider_pane_g5_ParamLimits

0x5843,	// (0x000a27a0) vtel_slider_pane_g5

0x0004,

0xf90a,	// (0x000ac867) vtel_slider_pane_g_ParamLimits

0xf90a,	// (0x000ac867) vtel_slider_pane_g

0xa417,	// (0x000a7374) main_gallery2_pane

0x4eec,	// (0x000a1e49) aid_size_row_itut2_dropdow_list_ParamLimits

0x4eec,	// (0x000a1e49) aid_size_row_itut2_dropdow_list

0x4f7c,	// (0x000a1ed9) grid_vitu2_function_top_pane_ParamLimits

0x4f7c,	// (0x000a1ed9) grid_vitu2_function_top_pane

0x4fe0,	// (0x000a1f3d) popup_vitu2_dropdown_list_window_ParamLimits

0x4fe0,	// (0x000a1f3d) popup_vitu2_dropdown_list_window

0x5007,	// (0x000a1f64) popup_vitu2_match_list_window

0x5859,	// (0x000a27b6) cell_vitu2_function_top_pane_ParamLimits

0x5859,	// (0x000a27b6) cell_vitu2_function_top_pane

0x5873,	// (0x000a27d0) cell_vitu2_function_top_pane_cp01_ParamLimits

0x5873,	// (0x000a27d0) cell_vitu2_function_top_pane_cp01

0x588f,	// (0x000a27ec) cell_vitu2_function_top_wide_pane_ParamLimits

0x588f,	// (0x000a27ec) cell_vitu2_function_top_wide_pane

0xa417,	// (0x000a7374) bg_button_pane_cp012

0x58ad,	// (0x000a280a) cell_vitu2_function_top_pane_g1

0xbfb7,	// (0x000a8f14) bg_button_pane_cp013_ParamLimits

0xbfb7,	// (0x000a8f14) bg_button_pane_cp013

0x58c1,	// (0x000a281e) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x58c1,	// (0x000a281e) cell_vitu2_function_top_wide_pane_g1

0xa417,	// (0x000a7374) bg_popup_sub_pane_cp20

0x58d9,	// (0x000a2836) list_vitu2_match_list_pane

0xeabd,	// (0x000aba1a) bg_popup_sub_pane_cp20_g1

0xeac5,	// (0x000aba22) bg_popup_sub_pane_cp20_g2

0xaf7b,	// (0x000a7ed8) bg_popup_sub_pane_cp20_g3

0xeacd,	// (0x000aba2a) bg_popup_sub_pane_cp20_g4

0xaf5b,	// (0x000a7eb8) bg_popup_sub_pane_cp20_g5

0xed17,	// (0x000abc74) bg_popup_sub_pane_cp20_g6

0xeadd,	// (0x000aba3a) bg_popup_sub_pane_cp20_g7

0xeae5,	// (0x000aba42) bg_popup_sub_pane_cp20_g8

0xeaed,	// (0x000aba4a) bg_popup_sub_pane_cp20_g9

0x0008,

0xf915,	// (0x000ac872) bg_popup_sub_pane_cp20_g

0xbfd3,	// (0x000a8f30) list_vitu2_match_list_item_pane_ParamLimits

0xbfd3,	// (0x000a8f30) list_vitu2_match_list_item_pane

0xbfe5,	// (0x000a8f42) list_vitu2_match_list_item_pane_t1

0xa425,	// (0x000a7382) bg_popup_sub_pane_cp21

0xad45,	// (0x000a7ca2) grid_vitu2_dropdown_list_pane

0x58f1,	// (0x000a284e) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x58f1,	// (0x000a284e) cell_vitu2_dropdown_list_char_pane

0x5913,	// (0x000a2870) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x5913,	// (0x000a2870) cell_vitu2_dropdown_list_ctrl_pane

0xed1f,	// (0x000abc7c) cell_vitu2_dropdown_list_char_pane_g1

0xed28,	// (0x000abc85) cell_vitu2_dropdown_list_char_pane_g2

0xed31,	// (0x000abc8e) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf928,	// (0x000ac885) cell_vitu2_dropdown_list_char_pane_g

0x593d,	// (0x000a289a) cell_vitu2_dropdown_list_char_pane_t1

0x594b,	// (0x000a28a8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x594b,	// (0x000a28a8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x595b,	// (0x000a28b8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x595b,	// (0x000a28b8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x596c,	// (0x000a28c9) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x596c,	// (0x000a28c9) cell_vitu2_dropdown_list_ctrl_pane_g3

0x597c,	// (0x000a28d9) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x597c,	// (0x000a28d9) cell_vitu2_dropdown_list_ctrl_pane_g4

0x4daa,	// (0x000a1d07) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x4daa,	// (0x000a1d07) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf92f,	// (0x000ac88c) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf92f,	// (0x000ac88c) cell_vitu2_dropdown_list_ctrl_pane_g

0x5998,	// (0x000a28f5) aid_size_cell_gallery2_ParamLimits

0x5998,	// (0x000a28f5) aid_size_cell_gallery2

0x59b6,	// (0x000a2913) grid_gallery2_pane_ParamLimits

0x59b6,	// (0x000a2913) grid_gallery2_pane

0x59d0,	// (0x000a292d) scroll_pane_cp029_ParamLimits

0x59d0,	// (0x000a292d) scroll_pane_cp029

0x59e1,	// (0x000a293e) cell_gallery2_pane_ParamLimits

0x59e1,	// (0x000a293e) cell_gallery2_pane

0xed3a,	// (0x000abc97) cell_gallery2_pane_g2

0x5a45,	// (0x000a29a2) cell_gallery2_pane_g3

0xed42,	// (0x000abc9f) cell_gallery2_pane_g4

0xed4a,	// (0x000abca7) cell_gallery2_pane_g5

0xad45,	// (0x000a7ca2) grid_highlight_pane_cp10

0x5007,	// (0x000a1f64) popup_vitu2_match_list_window_ParamLimits

0x501e,	// (0x000a1f7b) popup_vitu2_query_window_ParamLimits

0x501e,	// (0x000a1f7b) popup_vitu2_query_window

0xa425,	// (0x000a7382) bg_vitu2_candi_button_pane

0xed1f,	// (0x000abc7c) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xed28,	// (0x000abc85) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xed31,	// (0x000abc8e) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x5a4d,	// (0x000a29aa) bg_button_pane_cp015

0x5a64,	// (0x000a29c1) bg_button_pane_cp016

0x5a70,	// (0x000a29cd) bg_button_pane_cp017

0xb806,	// (0x000a8763) bg_popup_sub_pane_cp22

0xed52,	// (0x000abcaf) popup_vitu2_query_window_g1

0x5ab1,	// (0x000a2a0e) popup_vitu2_query_window_g2

0x0002,

0xf93a,	// (0x000ac897) popup_vitu2_query_window_g

0x5ad7,	// (0x000a2a34) popup_vitu2_query_window_t1_ParamLimits

0x5ad7,	// (0x000a2a34) popup_vitu2_query_window_t1

0x5b0c,	// (0x000a2a69) popup_vitu2_query_window_t2_ParamLimits

0x5b0c,	// (0x000a2a69) popup_vitu2_query_window_t2

0x5b1e,	// (0x000a2a7b) popup_vitu2_query_window_t3_ParamLimits

0x5b1e,	// (0x000a2a7b) popup_vitu2_query_window_t3

0x5b46,	// (0x000a2aa3) popup_vitu2_query_window_t4_ParamLimits

0x5b46,	// (0x000a2aa3) popup_vitu2_query_window_t4

0x5b5a,	// (0x000a2ab7) popup_vitu2_query_window_t5_ParamLimits

0x5b5a,	// (0x000a2ab7) popup_vitu2_query_window_t5

0x0006,

0xf941,	// (0x000ac89e) popup_vitu2_query_window_t_ParamLimits

0xf941,	// (0x000ac89e) popup_vitu2_query_window_t

0xebe9,	// (0x000abb46) main_cset_text_pane

0x546f,	// (0x000a23cc) aid_area_touch_slider_ParamLimits

0x548b,	// (0x000a23e8) cset_slider_pane_ParamLimits

0x54ae,	// (0x000a240b) main_cset_slider_pane_g1_ParamLimits

0x54c3,	// (0x000a2420) main_cset_slider_pane_g2_ParamLimits

0xec0a,	// (0x000abb67) main_cset_slider_pane_g3_ParamLimits

0xec0a,	// (0x000abb67) main_cset_slider_pane_g3

0x54d8,	// (0x000a2435) main_cset_slider_pane_g4_ParamLimits

0x54d8,	// (0x000a2435) main_cset_slider_pane_g4

0x54e7,	// (0x000a2444) main_cset_slider_pane_g5_ParamLimits

0x54e7,	// (0x000a2444) main_cset_slider_pane_g5

0x54f5,	// (0x000a2452) main_cset_slider_pane_g6_ParamLimits

0x54f5,	// (0x000a2452) main_cset_slider_pane_g6

0xf89e,	// (0x000ac7fb) main_cset_slider_pane_g_ParamLimits

0xec3a,	// (0x000abb97) main_cset_slider_pane_t1_ParamLimits

0x5585,	// (0x000a24e2) main_cset_slider_pane_t2_ParamLimits

0x559f,	// (0x000a24fc) main_cset_slider_pane_t3_ParamLimits

0x55b9,	// (0x000a2516) main_cset_slider_pane_t4_ParamLimits

0x55d3,	// (0x000a2530) main_cset_slider_pane_t5_ParamLimits

0x55f1,	// (0x000a254e) main_cset_slider_pane_t6_ParamLimits

0x5606,	// (0x000a2563) main_cset_slider_pane_t7_ParamLimits

0x5634,	// (0x000a2591) main_cset_slider_pane_t8_ParamLimits

0x5634,	// (0x000a2591) main_cset_slider_pane_t8

0x565c,	// (0x000a25b9) main_cset_slider_pane_t9_ParamLimits

0x565c,	// (0x000a25b9) main_cset_slider_pane_t9

0x5684,	// (0x000a25e1) main_cset_slider_pane_t10_ParamLimits

0x5684,	// (0x000a25e1) main_cset_slider_pane_t10

0x56ac,	// (0x000a2609) main_cset_slider_pane_t11_ParamLimits

0x56ac,	// (0x000a2609) main_cset_slider_pane_t11

0x56d6,	// (0x000a2633) main_cset_slider_pane_t12_ParamLimits

0x56d6,	// (0x000a2633) main_cset_slider_pane_t12

0x56f3,	// (0x000a2650) main_cset_slider_pane_t13_ParamLimits

0x56f3,	// (0x000a2650) main_cset_slider_pane_t13

0xf8c3,	// (0x000ac820) main_cset_slider_pane_t_ParamLimits

0x018c,	// (0x0009d0e9) bg_popup_sub_pane_cp011

0xed5e,	// (0x000abcbb) main_cset_text_pane_g1

0xed66,	// (0x000abcc3) main_cset_text_pane_t1

0xed74,	// (0x000abcd1) main_cset_text_pane_t2

0xed82,	// (0x000abcdf) main_cset_text_pane_t3

0xed90,	// (0x000abced) main_cset_text_pane_t4

0xed9e,	// (0x000abcfb) main_cset_text_pane_t5

0xedac,	// (0x000abd09) main_cset_text_pane_t6

0xedba,	// (0x000abd17) main_cset_text_pane_t7

0x0006,

0xf950,	// (0x000ac8ad) main_cset_text_pane_t

0xa425,	// (0x000a7382) main_cam4_burst_pane

0xa425,	// (0x000a7382) main_cam5_pane

0xebab,	// (0x000abb08) bg_button_pane_cp019

0xebb4,	// (0x000abb11) bg_button_pane_cp020

0xec16,	// (0x000abb73) main_cset_slider_pane_g7_ParamLimits

0xec16,	// (0x000abb73) main_cset_slider_pane_g7

0xec22,	// (0x000abb7f) main_cset_slider_pane_g8_ParamLimits

0xec22,	// (0x000abb7f) main_cset_slider_pane_g8

0x5509,	// (0x000a2466) main_cset_slider_pane_g9_ParamLimits

0x5509,	// (0x000a2466) main_cset_slider_pane_g9

0x5515,	// (0x000a2472) main_cset_slider_pane_g10_ParamLimits

0x5515,	// (0x000a2472) main_cset_slider_pane_g10

0x5521,	// (0x000a247e) main_cset_slider_pane_g11_ParamLimits

0x5521,	// (0x000a247e) main_cset_slider_pane_g11

0x552d,	// (0x000a248a) main_cset_slider_pane_g12_ParamLimits

0x552d,	// (0x000a248a) main_cset_slider_pane_g12

0x5539,	// (0x000a2496) main_cset_slider_pane_g13_ParamLimits

0x5539,	// (0x000a2496) main_cset_slider_pane_g13

0x5545,	// (0x000a24a2) main_cset_slider_pane_g14_ParamLimits

0x5545,	// (0x000a24a2) main_cset_slider_pane_g14

0x5551,	// (0x000a24ae) main_cset_slider_pane_g15_ParamLimits

0x5551,	// (0x000a24ae) main_cset_slider_pane_g15

0xec62,	// (0x000abbbf) main_cset_slider_pane_t14_ParamLimits

0xec62,	// (0x000abbbf) main_cset_slider_pane_t14

0xec9b,	// (0x000abbf8) main_cset_slider_pane_t15_ParamLimits

0xec9b,	// (0x000abbf8) main_cset_slider_pane_t15

0x5bc4,	// (0x000a2b21) aid_cam4_burst_size_cell_ParamLimits

0x5bc4,	// (0x000a2b21) aid_cam4_burst_size_cell

0x5be4,	// (0x000a2b41) grid_cam4_burst_pane_ParamLimits

0x5be4,	// (0x000a2b41) grid_cam4_burst_pane

0x5c1e,	// (0x000a2b7b) linegrid_cam4_burst_pane_ParamLimits

0x5c1e,	// (0x000a2b7b) linegrid_cam4_burst_pane

0x5c40,	// (0x000a2b9d) scroll_pane_cp30_ParamLimits

0x5c40,	// (0x000a2b9d) scroll_pane_cp30

0x5c4c,	// (0x000a2ba9) cell_cam4_burst_pane_ParamLimits

0x5c4c,	// (0x000a2ba9) cell_cam4_burst_pane

0xedc8,	// (0x000abd25) linegrid_cam4_burst_pane_g1_ParamLimits

0xedc8,	// (0x000abd25) linegrid_cam4_burst_pane_g1

0x5ca1,	// (0x000a2bfe) linegrid_cam4_burst_pane_g2_ParamLimits

0x5ca1,	// (0x000a2bfe) linegrid_cam4_burst_pane_g2

0xedd5,	// (0x000abd32) linegrid_cam4_burst_pane_g3_ParamLimits

0xedd5,	// (0x000abd32) linegrid_cam4_burst_pane_g3

0x0002,

0xf95f,	// (0x000ac8bc) linegrid_cam4_burst_pane_g_ParamLimits

0xf95f,	// (0x000ac8bc) linegrid_cam4_burst_pane_g

0x5cb2,	// (0x000a2c0f) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x5cb2,	// (0x000a2c0f) linegrid_cam4_burst_pane_g3_copy1

0xede2,	// (0x000abd3f) linegrid_cam4_burst_pane_g4_ParamLimits

0xede2,	// (0x000abd3f) linegrid_cam4_burst_pane_g4

0x5cd0,	// (0x000a2c2d) linegrid_cam4_burst_pane_g5_ParamLimits

0x5cd0,	// (0x000a2c2d) linegrid_cam4_burst_pane_g5

0x5ce1,	// (0x000a2c3e) linegrid_cam4_burst_pane_g6_ParamLimits

0x5ce1,	// (0x000a2c3e) linegrid_cam4_burst_pane_g6

0xedef,	// (0x000abd4c) linegrid_cam4_burst_pane_g7_ParamLimits

0xedef,	// (0x000abd4c) linegrid_cam4_burst_pane_g7

0x5cf8,	// (0x000a2c55) cell_cam4_burst_pane_g1

0xee08,	// (0x000abd65) main_cam5_pane_t1_ParamLimits

0xee08,	// (0x000abd65) main_cam5_pane_t1

0xee1a,	// (0x000abd77) main_cam5_pane_t2_ParamLimits

0xee1a,	// (0x000abd77) main_cam5_pane_t2

0xee2c,	// (0x000abd89) main_cam5_pane_t3_ParamLimits

0xee2c,	// (0x000abd89) main_cam5_pane_t3

0xee3e,	// (0x000abd9b) main_cam5_pane_t4_ParamLimits

0xee3e,	// (0x000abd9b) main_cam5_pane_t4

0xee56,	// (0x000abdb3) main_cam5_pane_t5_ParamLimits

0xee56,	// (0x000abdb3) main_cam5_pane_t5

0xee6a,	// (0x000abdc7) main_cam5_pane_t6_ParamLimits

0xee6a,	// (0x000abdc7) main_cam5_pane_t6

0xee7e,	// (0x000abddb) main_cam5_pane_t7_ParamLimits

0xee7e,	// (0x000abddb) main_cam5_pane_t7

0xee90,	// (0x000abded) main_cam5_pane_t8_ParamLimits

0xee90,	// (0x000abded) main_cam5_pane_t8

0xeeae,	// (0x000abe0b) main_cam5_pane_t9_ParamLimits

0xeeae,	// (0x000abe0b) main_cam5_pane_t9

0xeec0,	// (0x000abe1d) main_cam5_pane_t10_ParamLimits

0xeec0,	// (0x000abe1d) main_cam5_pane_t10

0xeed2,	// (0x000abe2f) main_cam5_pane_t11_ParamLimits

0xeed2,	// (0x000abe2f) main_cam5_pane_t11

0xeee6,	// (0x000abe43) main_cam5_pane_t12_ParamLimits

0xeee6,	// (0x000abe43) main_cam5_pane_t12

0xeefd,	// (0x000abe5a) main_cam5_pane_t13_ParamLimits

0xeefd,	// (0x000abe5a) main_cam5_pane_t13

0x000c,

0xf96b,	// (0x000ac8c8) main_cam5_pane_t_ParamLimits

0xf96b,	// (0x000ac8c8) main_cam5_pane_t

0x0374,	// (0x0009d2d1) popup_scut_keymap_window_ParamLimits

0x0374,	// (0x0009d2d1) popup_scut_keymap_window

0x5d0b,	// (0x000a2c68) aid_size_cell_brow_shortcut

0xad45,	// (0x000a7ca2) bg_popup_window_pane_cp010

0x5d17,	// (0x000a2c74) grid_scut_pane

0x5d23,	// (0x000a2c80) cell_scut_pane_ParamLimits

0x5d23,	// (0x000a2c80) cell_scut_pane

0x5d3c,	// (0x000a2c99) cell_scut_pane_g1

0xef20,	// (0x000abe7d) cell_scut_pane_t1

0xef2f,	// (0x000abe8c) cell_scut_pane_t2

0x5d45,	// (0x000a2ca2) cell_scut_pane_t3

0x0002,

0xf986,	// (0x000ac8e3) cell_scut_pane_t

0x3ca9,	// (0x000a0c06) main_mup3_pane_g8_ParamLimits

0x3ca9,	// (0x000a0c06) main_mup3_pane_g8

0x4f06,	// (0x000a1e63) area_vitu2_query_pane_ParamLimits

0x4f06,	// (0x000a1e63) area_vitu2_query_pane

0x5a7c,	// (0x000a29d9) input_focus_pane_cp08

0xef3e,	// (0x000abe9b) area_vitu2_query_pane_g1

0x5d53,	// (0x000a2cb0) area_vitu2_query_pane_g2

0x0001,

0xf98d,	// (0x000ac8ea) area_vitu2_query_pane_g

0x5d68,	// (0x000a2cc5) area_vitu2_query_pane_t1_ParamLimits

0x5d68,	// (0x000a2cc5) area_vitu2_query_pane_t1

0x5d7c,	// (0x000a2cd9) area_vitu2_query_pane_t2_ParamLimits

0x5d7c,	// (0x000a2cd9) area_vitu2_query_pane_t2

0x5d90,	// (0x000a2ced) area_vitu2_query_pane_t3_ParamLimits

0x5d90,	// (0x000a2ced) area_vitu2_query_pane_t3

0xef4a,	// (0x000abea7) area_vitu2_query_pane_t4_ParamLimits

0xef4a,	// (0x000abea7) area_vitu2_query_pane_t4

0xef72,	// (0x000abecf) area_vitu2_query_pane_t5_ParamLimits

0xef72,	// (0x000abecf) area_vitu2_query_pane_t5

0xef9a,	// (0x000abef7) area_vitu2_query_pane_t6_ParamLimits

0xef9a,	// (0x000abef7) area_vitu2_query_pane_t6

0x0006,

0xf992,	// (0x000ac8ef) area_vitu2_query_pane_t_ParamLimits

0xf992,	// (0x000ac8ef) area_vitu2_query_pane_t

0x5dbc,	// (0x000a2d19) bg_button_pane_cp018

0x5dc8,	// (0x000a2d25) bg_button_pane_cp021

0x5dd4,	// (0x000a2d31) bg_button_pane_cp022

0x5dff,	// (0x000a2d5c) input_focus_pane_cp09

0x23e4,	// (0x0009f341) aid_size_touch_mv_arrow_left

0x240d,	// (0x0009f36a) aid_size_touch_mv_arrow_right

0x5569,	// (0x000a24c6) main_cset_slider_pane_g16_ParamLimits

0x5569,	// (0x000a24c6) main_cset_slider_pane_g16

0x5577,	// (0x000a24d4) main_cset_slider_pane_g17_ParamLimits

0x5577,	// (0x000a24d4) main_cset_slider_pane_g17

0x5cf8,	// (0x000a2c55) cell_cam4_burst_pane_g1_ParamLimits

0x018c,	// (0x0009d0e9) compa_mode_pane

0x5799,	// (0x000a26f6) popup_vtel_slider_window_g3_ParamLimits

0x5799,	// (0x000a26f6) popup_vtel_slider_window_g3

0x57b0,	// (0x000a270d) popup_vtel_slider_window_g4_ParamLimits

0x57b0,	// (0x000a270d) popup_vtel_slider_window_g4

0x57c7,	// (0x000a2724) popup_vtel_slider_window_t1_ParamLimits

0x57c7,	// (0x000a2724) popup_vtel_slider_window_t1

0xa425,	// (0x000a7382) main_cl_pane

0xba5c,	// (0x000a89b9) popup_imed_adjust2_window_ParamLimits

0xb806,	// (0x000a8763) bg_tb_trans_pane_cp05_ParamLimits

0xe72f,	// (0x000ab68c) popup_imed_adjust2_window_g1_ParamLimits

0xe73e,	// (0x000ab69b) popup_imed_adjust2_window_g2_ParamLimits

0xe73e,	// (0x000ab69b) popup_imed_adjust2_window_g2

0xe74a,	// (0x000ab6a7) popup_imed_adjust2_window_g3_ParamLimits

0xe74a,	// (0x000ab6a7) popup_imed_adjust2_window_g3

0x0002,

0xf70d,	// (0x000ac66a) popup_imed_adjust2_window_g_ParamLimits

0xf70d,	// (0x000ac66a) popup_imed_adjust2_window_g

0xe756,	// (0x000ab6b3) popup_imed_adjust2_window_t1_ParamLimits

0xe76e,	// (0x000ab6cb) slider_imed_adjust_pane_ParamLimits

0xe782,	// (0x000ab6df) slider_imed_adjust_pane_g1_ParamLimits

0xe792,	// (0x000ab6ef) slider_imed_adjust_pane_g2_ParamLimits

0xe7a2,	// (0x000ab6ff) slider_imed_adjust_pane_g3_ParamLimits

0xe7b3,	// (0x000ab710) slider_imed_adjust_pane_g4_ParamLimits

0xf714,	// (0x000ac671) slider_imed_adjust_pane_g_ParamLimits

0x4c78,	// (0x000a1bd5) aid_touch_area_cam4_ParamLimits

0x4c78,	// (0x000a1bd5) aid_touch_area_cam4

0xbe99,	// (0x000a8df6) battery_pane_cp01

0x4d4b,	// (0x000a1ca8) main_camera4_pane_g6_ParamLimits

0x4d4b,	// (0x000a1ca8) main_camera4_pane_g6

0x4d75,	// (0x000a1cd2) main_camera4_pane_t2_ParamLimits

0x4d75,	// (0x000a1cd2) main_camera4_pane_t2

0x0001,

0xf811,	// (0x000ac76e) main_camera4_pane_t_ParamLimits

0xf811,	// (0x000ac76e) main_camera4_pane_t

0x4db8,	// (0x000a1d15) aid_touch_area_vid4_ParamLimits

0x4db8,	// (0x000a1d15) aid_touch_area_vid4

0x4e0f,	// (0x000a1d6c) main_video4_pane_g5_ParamLimits

0x4e0f,	// (0x000a1d6c) main_video4_pane_g5

0x4e35,	// (0x000a1d92) vid4_progress_pane_ParamLimits

0x4e35,	// (0x000a1d92) vid4_progress_pane

0xec2e,	// (0x000abb8b) main_cset_slider_pane_g18_ParamLimits

0xec2e,	// (0x000abb8b) main_cset_slider_pane_g18

0xedfc,	// (0x000abd59) cell_cam4_burst_pane_g2_ParamLimits

0xedfc,	// (0x000abd59) cell_cam4_burst_pane_g2

0x0001,

0xf966,	// (0x000ac8c3) cell_cam4_burst_pane_g_ParamLimits

0xf966,	// (0x000ac8c3) cell_cam4_burst_pane_g

0xab32,	// (0x000a7a8f) bg_cl_pane_ParamLimits

0xab32,	// (0x000a7a8f) bg_cl_pane

0x5e10,	// (0x000a2d6d) cl_header_pane_ParamLimits

0x5e10,	// (0x000a2d6d) cl_header_pane

0x5e24,	// (0x000a2d81) cl_listscroll_pane_ParamLimits

0x5e24,	// (0x000a2d81) cl_listscroll_pane

0xefe6,	// (0x000abf43) bg_cl_pane_g1

0xefee,	// (0x000abf4b) bg_cl_pane_g2

0xeff6,	// (0x000abf53) bg_cl_pane_g3

0xeffe,	// (0x000abf5b) bg_cl_pane_g4

0xf006,	// (0x000abf63) bg_cl_pane_g5

0xf00e,	// (0x000abf6b) bg_cl_pane_g6

0xf016,	// (0x000abf73) bg_cl_pane_g7

0xf01e,	// (0x000abf7b) bg_cl_pane_g8

0xf026,	// (0x000abf83) bg_cl_pane_g9

0x0008,

0xf9a1,	// (0x000ac8fe) bg_cl_pane_g

0x5e34,	// (0x000a2d91) aid_height_cl_leading_ParamLimits

0x5e34,	// (0x000a2d91) aid_height_cl_leading

0x5e40,	// (0x000a2d9d) aid_height_cl_text_ParamLimits

0x5e40,	// (0x000a2d9d) aid_height_cl_text

0xaa1b,	// (0x000a7978) bg_cl_header_pane_ParamLimits

0xaa1b,	// (0x000a7978) bg_cl_header_pane

0x5e5f,	// (0x000a2dbc) cl_header_pane_g1_ParamLimits

0x5e5f,	// (0x000a2dbc) cl_header_pane_g1

0x5e75,	// (0x000a2dd2) cl_header_pane_t1_ParamLimits

0x5e75,	// (0x000a2dd2) cl_header_pane_t1

0xf02e,	// (0x000abf8b) cl_list_pane

0xec01,	// (0x000abb5e) hc_scroll_pane_cp01

0xaf5b,	// (0x000a7eb8) bg_cl_header_pane_g1

0xeabd,	// (0x000aba1a) bg_cl_header_pane_g2

0xaf7b,	// (0x000a7ed8) bg_cl_header_pane_g3

0xeacd,	// (0x000aba2a) bg_cl_header_pane_g4

0xeac5,	// (0x000aba22) bg_cl_header_pane_g5

0xed17,	// (0x000abc74) bg_cl_header_pane_g6

0xeae5,	// (0x000aba42) bg_cl_header_pane_g7

0xeaed,	// (0x000aba4a) bg_cl_header_pane_g8

0xeadd,	// (0x000aba3a) bg_cl_header_pane_g9

0x0008,

0xf9b4,	// (0x000ac911) bg_cl_header_pane_g

0x5e8e,	// (0x000a2deb) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x5e8e,	// (0x000a2deb) hc_cl_list_double_graphic_heading_pane

0x5ea1,	// (0x000a2dfe) hc_cl_list_single_graphic_pane_ParamLimits

0x5ea1,	// (0x000a2dfe) hc_cl_list_single_graphic_pane

0x5eb9,	// (0x000a2e16) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x5eb9,	// (0x000a2e16) hc_cl_list_single_graphic_pane_g1

0x5ec5,	// (0x000a2e22) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x5ec5,	// (0x000a2e22) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9c7,	// (0x000ac924) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9c7,	// (0x000ac924) hc_cl_list_single_graphic_pane_g

0x5ed9,	// (0x000a2e36) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x5ed9,	// (0x000a2e36) hc_cl_list_single_graphic_pane_t1

0x5eb9,	// (0x000a2e16) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x5eb9,	// (0x000a2e16) hc_cl_list_double_graphic_heading_pane_g1

0x5eee,	// (0x000a2e4b) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x5eee,	// (0x000a2e4b) hc_cl_list_double_graphic_heading_pane_g2

0x5f02,	// (0x000a2e5f) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x5f02,	// (0x000a2e5f) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9cc,	// (0x000ac929) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9cc,	// (0x000ac929) hc_cl_list_double_graphic_heading_pane_g

0x5f16,	// (0x000a2e73) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x5f16,	// (0x000a2e73) hc_cl_list_double_graphic_heading_pane_t1

0x5f2b,	// (0x000a2e88) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x5f2b,	// (0x000a2e88) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9d3,	// (0x000ac930) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9d3,	// (0x000ac930) hc_cl_list_double_graphic_heading_pane_t

0xbffb,	// (0x000a8f58) vid4_progress_pane_g1

0xc00b,	// (0x000a8f68) vid4_progress_pane_g2

0x5f40,	// (0x000a2e9d) vid4_progress_pane_g3

0xc01b,	// (0x000a8f78) vid4_progress_pane_g4

0x0004,

0xf9d8,	// (0x000ac935) vid4_progress_pane_g

0x5f52,	// (0x000a2eaf) vid4_progress_pane_t1

0xc039,	// (0x000a8f96) vid4_progress_pane_t2

0x0002,

0xf9e3,	// (0x000ac940) vid4_progress_pane_t

0x5f6c,	// (0x000a2ec9) wait_bar_pane_cp07

0xe078,	// (0x000aafd5) blid_firmament_pane_ParamLimits

0xe0bb,	// (0x000ab018) popup_blid_sat_info2_window_g1

0xe0df,	// (0x000ab03c) popup_blid_sat_info2_window_t3

0xe0ed,	// (0x000ab04a) popup_blid_sat_info2_window_t4

0xe0fb,	// (0x000ab058) popup_blid_sat_info2_window_t5

0xe109,	// (0x000ab066) popup_blid_sat_info2_window_t6

0xe119,	// (0x000ab076) popup_blid_sat_info2_window_t7

0xe127,	// (0x000ab084) popup_blid_sat_info2_window_t8

0xe135,	// (0x000ab092) popup_blid_sat_info2_window_t9

0xe143,	// (0x000ab0a0) popup_blid_sat_info2_window_t10

0xe20a,	// (0x000ab167) aid_firma_cardinal_ParamLimits

0xe21e,	// (0x000ab17b) blid_firmament_pane_t1_ParamLimits

0xe235,	// (0x000ab192) blid_firmament_pane_t2_ParamLimits

0xe24c,	// (0x000ab1a9) blid_firmament_pane_t3_ParamLimits

0xe263,	// (0x000ab1c0) blid_firmament_pane_t4_ParamLimits

0xf606,	// (0x000ac563) blid_firmament_pane_t_ParamLimits

0xe27a,	// (0x000ab1d7) blid_sat_info_pane_ParamLimits

0xa417,	// (0x000a7374) main_cam_set_pane_ParamLimits

0x44ab,	// (0x000a1408) aid_size_cell_colour_35_ParamLimits

0x44cb,	// (0x000a1428) aid_size_cell_colour_112_ParamLimits

0x44eb,	// (0x000a1448) aid_size_cell_effect_ParamLimits

0xb806,	// (0x000a8763) bg_tb_trans_pane_cp02_ParamLimits

0xb208,	// (0x000a8165) heading_imed_pane_ParamLimits

0x450b,	// (0x000a1468) listscroll_imed_pane_ParamLimits

0xd51a,	// (0x000aa477) popup_call2_audio_first_window_g5_ParamLimits

0xd51a,	// (0x000aa477) popup_call2_audio_first_window_g5

0x487b,	// (0x000a17d8) aid_size_touch_image3_arrow_left_ParamLimits

0x487b,	// (0x000a17d8) aid_size_touch_image3_arrow_left

0x48a7,	// (0x000a1804) aid_size_touch_image3_arrow_right_ParamLimits

0x48a7,	// (0x000a1804) aid_size_touch_image3_arrow_right

0xc052,	// (0x000a8faf) vid4_progress_pane_t3

0x46b0,	// (0x000a160d) main_hwr_training_symbol_option_pane_ParamLimits

0x46b0,	// (0x000a160d) main_hwr_training_symbol_option_pane

0xe8c7,	// (0x000ab824) popup_hwr_training_preview_window_ParamLimits

0xe8c7,	// (0x000ab824) popup_hwr_training_preview_window

0x46d0,	// (0x000a162d) hwr_training_navi_pane_g5_ParamLimits

0x46d0,	// (0x000a162d) hwr_training_navi_pane_g5

0xeaab,	// (0x000aba08) popup_char_count_window

0xa417,	// (0x000a7374) bg_popup_sub_pane_cp20_ParamLimits

0x58d9,	// (0x000a2836) list_vitu2_match_list_pane_ParamLimits

0x58e5,	// (0x000a2842) vitu2_page_scroll_pane_ParamLimits

0x58e5,	// (0x000a2842) vitu2_page_scroll_pane

0x5fb5,	// (0x000a2f12) list_single_hwr_training_symbol_option_pane_ParamLimits

0x5fb5,	// (0x000a2f12) list_single_hwr_training_symbol_option_pane

0x5fc8,	// (0x000a2f25) list_single_hwr_training_symbol_option_pane_g1

0x5fd0,	// (0x000a2f2d) list_single_hwr_training_symbol_option_pane_t1

0x5fde,	// (0x000a2f3b) bg_button_pane_cp023

0x5fe7,	// (0x000a2f44) bg_button_pane_cp024

0x601a,	// (0x000a2f77) vitu2_page_scroll_pane_g1

0x6022,	// (0x000a2f7f) vitu2_page_scroll_pane_g2

0x0001,

0xf9ea,	// (0x000ac947) vitu2_page_scroll_pane_g

0x602a,	// (0x000a2f87) vitu2_page_scroll_pane_t1

0x6039,	// (0x000a2f96) popup_char_count_window_g1

0x6042,	// (0x000a2f9f) popup_char_count_window_g2

0x604b,	// (0x000a2fa8) popup_char_count_window_g3

0x0002,

0xf9ef,	// (0x000ac94c) popup_char_count_window_g

0x6054,	// (0x000a2fb1) popup_char_count_window_t1

0xa425,	// (0x000a7382) main_vded2_pane

0xe71b,	// (0x000ab678) aid_size_cell_imed_line

0xe725,	// (0x000ab682) grid_imed_line_width_pane

0xbf67,	// (0x000a8ec4) vid4_indicators_pane_g4

0x6062,	// (0x000a2fbf) cell_imed_line_width_pane_ParamLimits

0x6062,	// (0x000a2fbf) cell_imed_line_width_pane

0x6078,	// (0x000a2fd5) cell_imed_line_width_pane_g1

0x6081,	// (0x000a2fde) cell_imed_line_width_pane_g2

0x0001,

0xf9f6,	// (0x000ac953) cell_imed_line_width_pane_g

0x6089,	// (0x000a2fe6) main_vded2_pane_g1_ParamLimits

0x6089,	// (0x000a2fe6) main_vded2_pane_g1

0x60a4,	// (0x000a3001) main_vded2_pane_g2_ParamLimits

0x60a4,	// (0x000a3001) main_vded2_pane_g2

0x0001,

0xf9fb,	// (0x000ac958) main_vded2_pane_g_ParamLimits

0xf9fb,	// (0x000ac958) main_vded2_pane_g

0x60b6,	// (0x000a3013) vded2_slider_pane_ParamLimits

0x60b6,	// (0x000a3013) vded2_slider_pane

0x60c6,	// (0x000a3023) aid_size_touch_vded2_end

0x60d0,	// (0x000a302d) aid_size_touch_vded2_playhead

0x60da,	// (0x000a3037) aid_size_touch_vded2_start

0x60e2,	// (0x000a303f) vded2_slider_bg_pane

0x60eb,	// (0x000a3048) vded2_slider_pane_g1

0x60f4,	// (0x000a3051) vded2_slider_pane_g2

0x60fc,	// (0x000a3059) vded2_slider_pane_g3

0x0002,

0xfa00,	// (0x000ac95d) vded2_slider_pane_g

0x6107,	// (0x000a3064) vded2_slider_bg_pane_g1

0x6110,	// (0x000a306d) vded2_slider_bg_pane_g2

0x6119,	// (0x000a3076) vded2_slider_bg_pane_g3

0x0002,

0xfa07,	// (0x000ac964) vded2_slider_bg_pane_g

0x2910,	// (0x0009f86d) aid_postcard_touch_down_pane_ParamLimits

0x2910,	// (0x0009f86d) aid_postcard_touch_down_pane

0x2928,	// (0x0009f885) aid_postcard_touch_up_pane_ParamLimits

0x2928,	// (0x0009f885) aid_postcard_touch_up_pane

0xa425,	// (0x000a7382) main_blid2_pane

0xba3e,	// (0x000a899b) popup_blid2_search_window

0x018c,	// (0x0009d0e9) blid2_gps_pane

0x018c,	// (0x0009d0e9) blid2_navig_pane

0x018c,	// (0x0009d0e9) blid2_search_pane

0x018c,	// (0x0009d0e9) blid2_tripm_pane

0x6122,	// (0x000a307f) blid2_search_pane_g1_ParamLimits

0x6122,	// (0x000a307f) blid2_search_pane_g1

0x6135,	// (0x000a3092) blid2_search_pane_t1_ParamLimits

0x6135,	// (0x000a3092) blid2_search_pane_t1

0x6147,	// (0x000a30a4) aid_size_cell_blid2_gps_ParamLimits

0x6147,	// (0x000a30a4) aid_size_cell_blid2_gps

0x615f,	// (0x000a30bc) blid2_gps_pane_g1_ParamLimits

0x615f,	// (0x000a30bc) blid2_gps_pane_g1

0x6173,	// (0x000a30d0) grid_blid2_satellite_pane_ParamLimits

0x6173,	// (0x000a30d0) grid_blid2_satellite_pane

0x618b,	// (0x000a30e8) blid2_navig_pane_g1_ParamLimits

0x618b,	// (0x000a30e8) blid2_navig_pane_g1

0x6197,	// (0x000a30f4) blid2_navig_pane_t1_ParamLimits

0x6197,	// (0x000a30f4) blid2_navig_pane_t1

0x61b2,	// (0x000a310f) blid2_navig_pane_t2_ParamLimits

0x61b2,	// (0x000a310f) blid2_navig_pane_t2

0x0001,

0xfa0e,	// (0x000ac96b) blid2_navig_pane_t_ParamLimits

0xfa0e,	// (0x000ac96b) blid2_navig_pane_t

0x61cd,	// (0x000a312a) blid2_navig_ring_pane_ParamLimits

0x61cd,	// (0x000a312a) blid2_navig_ring_pane

0x61e8,	// (0x000a3145) blid2_speed_pane_ParamLimits

0x61e8,	// (0x000a3145) blid2_speed_pane

0x61f4,	// (0x000a3151) blid2_tripm_pane_g1_ParamLimits

0x61f4,	// (0x000a3151) blid2_tripm_pane_g1

0x620f,	// (0x000a316c) blid2_tripm_pane_g2_ParamLimits

0x620f,	// (0x000a316c) blid2_tripm_pane_g2

0x6222,	// (0x000a317f) blid2_tripm_pane_g3_ParamLimits

0x6222,	// (0x000a317f) blid2_tripm_pane_g3

0x6233,	// (0x000a3190) blid2_tripm_pane_g4_ParamLimits

0x6233,	// (0x000a3190) blid2_tripm_pane_g4

0x6244,	// (0x000a31a1) blid2_tripm_pane_g5_ParamLimits

0x6244,	// (0x000a31a1) blid2_tripm_pane_g5

0x0005,

0xfa13,	// (0x000ac970) blid2_tripm_pane_g_ParamLimits

0xfa13,	// (0x000ac970) blid2_tripm_pane_g

0x626a,	// (0x000a31c7) blid2_tripm_pane_t1_ParamLimits

0x626a,	// (0x000a31c7) blid2_tripm_pane_t1

0x6283,	// (0x000a31e0) blid2_tripm_pane_t2_ParamLimits

0x6283,	// (0x000a31e0) blid2_tripm_pane_t2

0x629c,	// (0x000a31f9) blid2_tripm_pane_t3_ParamLimits

0x629c,	// (0x000a31f9) blid2_tripm_pane_t3

0x0003,

0xfa20,	// (0x000ac97d) blid2_tripm_pane_t_ParamLimits

0xfa20,	// (0x000ac97d) blid2_tripm_pane_t

0x62e3,	// (0x000a3240) cell_blid2_satellite_pane_ParamLimits

0x62e3,	// (0x000a3240) cell_blid2_satellite_pane

0x62ff,	// (0x000a325c) cell_blid2_satellite_pane_g1

0x6308,	// (0x000a3265) cell_blid2_satellite_pane_t1

0xaaba,	// (0x000a7a17) blid2_speed_pane_g1

0x6316,	// (0x000a3273) blid2_speed_pane_t1

0x6324,	// (0x000a3281) blid2_speed_pane_t2

0x0001,

0xfa29,	// (0x000ac986) blid2_speed_pane_t

0xaaba,	// (0x000a7a17) blid2_navig_ring_pane_g1

0x6332,	// (0x000a328f) blid2_navig_ring_pane_g2

0x633a,	// (0x000a3297) blid2_navig_ring_pane_g3

0x6342,	// (0x000a329f) blid2_navig_ring_pane_g4

0x634a,	// (0x000a32a7) blid2_navig_ring_pane_g5

0x0004,

0xfa2e,	// (0x000ac98b) blid2_navig_ring_pane_g

0x018c,	// (0x0009d0e9) bg_popup_window_pane_cp011

0x6352,	// (0x000a32af) popup_blid2_search_window_g1

0x635a,	// (0x000a32b7) popup_blid2_search_window_t1

0x6368,	// (0x000a32c5) popup_blid2_search_window_t2

0x0001,

0xfa39,	// (0x000ac996) popup_blid2_search_window_t

0xae6a,	// (0x000a7dc7) main_browser_pane_g1

0xab32,	// (0x000a7a8f) main_browser_pane_ParamLimits

0xa417,	// (0x000a7374) bg_button_pane_cp011_ParamLimits

0x5139,	// (0x000a2096) cell_vitu2_function_pane_g1_ParamLimits

0xb806,	// (0x000a8763) bg_popup_sub_pane_cp22_ParamLimits

0x5a7c,	// (0x000a29d9) input_focus_pane_cp08_ParamLimits

0x5a98,	// (0x000a29f5) popup_vitu2_query_button_pane_ParamLimits

0x5a98,	// (0x000a29f5) popup_vitu2_query_button_pane

0x5aa7,	// (0x000a2a04) popup_vitu2_query_input_button_pane

0xed52,	// (0x000abcaf) popup_vitu2_query_window_g1_ParamLimits

0x5ab1,	// (0x000a2a0e) popup_vitu2_query_window_g2_ParamLimits

0xf93a,	// (0x000ac897) popup_vitu2_query_window_g_ParamLimits

0x018c,	// (0x0009d0e9) bg_button_pane_cp026

0x6376,	// (0x000a32d3) popup_vitu2_query_input_button_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp025

0x637e,	// (0x000a32db) popup_vitu2_query_button_pane_t1

0x3899,	// (0x000a07f6) main_mp3_pane_t6

0x38a7,	// (0x000a0804) popup_slider_window_cp01

0xbecb,	// (0x000a8e28) cam4_battery_pane

0xbf20,	// (0x000a8e7d) cam4_battery_pane_cp02

0xbff3,	// (0x000a8f50) cam4_battery_pane_cp01

0xbff3,	// (0x000a8f50) cam4_battery_pane_cp03

0x37c8,	// (0x000a0725) cam4_battery_pane_g1

0xaaba,	// (0x000a7a17) cam4_battery_pane_g2

0x0001,

0xfa3e,	// (0x000ac99b) cam4_battery_pane_g

0xe151,	// (0x000ab0ae) popup_blid_sat_info2_window_t11

0x23e4,	// (0x0009f341) aid_size_touch_mv_arrow_left_ParamLimits

0x240d,	// (0x0009f36a) aid_size_touch_mv_arrow_right_ParamLimits

0xb67b,	// (0x000a85d8) navi_pane_g1_ParamLimits

0x244c,	// (0x0009f3a9) navi_pane_g2_ParamLimits

0x247a,	// (0x0009f3d7) navi_pane_g3_ParamLimits

0xf32f,	// (0x000ac28c) navi_pane_g_ParamLimits

0x24d4,	// (0x0009f431) navi_pane_mv_t1_ParamLimits

0x4517,	// (0x000a1474) grid_imed_effect_pane_ParamLimits

0x0fc9,	// (0x0009df26) aid_placing_vt_slider_lsc

0xada6,	// (0x000a7d03) aid_placing_vt_slider_prt

0xaa1b,	// (0x000a7978) bg_tb_trans_pane_cp01_ParamLimits

0xe3b9,	// (0x000ab316) popup_image_details_window_g1_ParamLimits

0xe3cc,	// (0x000ab329) popup_image_details_window_g2_ParamLimits

0xe3e1,	// (0x000ab33e) popup_image_details_window_g3_ParamLimits

0xe3e1,	// (0x000ab33e) popup_image_details_window_g3

0xf646,	// (0x000ac5a3) popup_image_details_window_g_ParamLimits

0xe3f5,	// (0x000ab352) popup_image_details_window_t1_ParamLimits

0xe407,	// (0x000ab364) popup_image_details_window_t2_ParamLimits

0xe420,	// (0x000ab37d) popup_image_details_window_t3_ParamLimits

0xe434,	// (0x000ab391) popup_image_details_window_t4_ParamLimits

0xe44f,	// (0x000ab3ac) popup_image_details_window_t5_ParamLimits

0xf64d,	// (0x000ac5aa) popup_image_details_window_t_ParamLimits

0x5e4c,	// (0x000a2da9) cl_header_name_pane_ParamLimits

0x5e4c,	// (0x000a2da9) cl_header_name_pane

0x638c,	// (0x000a32e9) cl_header_name_pane_t1_ParamLimits

0x638c,	// (0x000a32e9) cl_header_name_pane_t1

0x63ad,	// (0x000a330a) cl_header_name_pane_t2_ParamLimits

0x63ad,	// (0x000a330a) cl_header_name_pane_t2

0x63ef,	// (0x000a334c) cl_header_name_pane_t3_ParamLimits

0x63ef,	// (0x000a334c) cl_header_name_pane_t3

0x0002,

0xfa43,	// (0x000ac9a0) cl_header_name_pane_t_ParamLimits

0xfa43,	// (0x000ac9a0) cl_header_name_pane_t

0x24a5,	// (0x0009f402) navi_pane_mv_g2_ParamLimits

0xea47,	// (0x000ab9a4) field_vitu2_entry_pane_g1_ParamLimits

0xea53,	// (0x000ab9b0) field_vitu2_entry_pane_g2_ParamLimits

0xb7e4,	// (0x000a8741) field_vitu2_entry_pane_g3_ParamLimits

0xb7e4,	// (0x000a8741) field_vitu2_entry_pane_g3

0xf843,	// (0x000ac7a0) field_vitu2_entry_pane_g_ParamLimits

0x50b5,	// (0x000a2012) cell_vitu2_itu_pane_g1_ParamLimits

0x50cd,	// (0x000a202a) cell_vitu2_itu_pane_g2_ParamLimits

0x50cd,	// (0x000a202a) cell_vitu2_itu_pane_g2

0x0001,

0xf84f,	// (0x000ac7ac) cell_vitu2_itu_pane_g_ParamLimits

0xf84f,	// (0x000ac7ac) cell_vitu2_itu_pane_g

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp05_ParamLimits

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp05

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp03

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp04

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp10_ParamLimits

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp10

0x5de9,	// (0x000a2d46) bg_vkb2_func_pane_cp08

0x5dbc,	// (0x000a2d19) bg_vkb2_func_pane_cp06

0x5dc8,	// (0x000a2d25) bg_vkb2_func_pane_cp07

0x5ff0,	// (0x000a2f4d) bg_vkb2_func_pane_cp11_ParamLimits

0x5ff0,	// (0x000a2f4d) bg_vkb2_func_pane_cp11

0x6005,	// (0x000a2f62) bg_vkb2_func_pane_cp12_ParamLimits

0x6005,	// (0x000a2f62) bg_vkb2_func_pane_cp12

0x018c,	// (0x0009d0e9) bg_vkb2_func_pane_cp09

0xeabd,	// (0x000aba1a) bg_vkb2_func_pane_g1

0xaf7b,	// (0x000a7ed8) bg_vkb2_func_pane_g2

0xeac5,	// (0x000aba22) bg_vkb2_func_pane_g3

0xeacd,	// (0x000aba2a) bg_vkb2_func_pane_g4

0xed17,	// (0x000abc74) bg_vkb2_func_pane_g5

0xeae5,	// (0x000aba42) bg_vkb2_func_pane_g6

0xeaed,	// (0x000aba4a) bg_vkb2_func_pane_g7

0xeadd,	// (0x000aba3a) bg_vkb2_func_pane_g8

0xaf5b,	// (0x000a7eb8) bg_vkb2_func_pane_g9

0x0008,

0xfa4a,	// (0x000ac9a7) bg_vkb2_func_pane_g

0x6258,	// (0x000a31b5) blid2_tripm_pane_g6_ParamLimits

0x6258,	// (0x000a31b5) blid2_tripm_pane_g6

0xe95f,	// (0x000ab8bc) mp4_progress_pane_g1

0x62cf,	// (0x000a322c) blid2_tripm_values_pane_ParamLimits

0x62cf,	// (0x000a322c) blid2_tripm_values_pane

0x6420,	// (0x000a337d) blid2_tripm_values_pane_t1

0x642e,	// (0x000a338b) blid2_tripm_values_pane_t2

0x643c,	// (0x000a3399) blid2_tripm_values_pane_t3

0x644a,	// (0x000a33a7) blid2_tripm_values_pane_t4

0x6458,	// (0x000a33b5) blid2_tripm_values_pane_t5

0x6466,	// (0x000a33c3) blid2_tripm_values_pane_t6

0x6474,	// (0x000a33d1) blid2_tripm_values_pane_t7

0x6482,	// (0x000a33df) blid2_tripm_values_pane_t8

0x6490,	// (0x000a33ed) blid2_tripm_values_pane_t9

0x0008,

0xfa5d,	// (0x000ac9ba) blid2_tripm_values_pane_t

0x1006,	// (0x0009df63) call_video_pane_t1_ParamLimits

0x1020,	// (0x0009df7d) call_video_pane_t2_ParamLimits

0xf1dd,	// (0x000ac13a) call_video_pane_t_ParamLimits

0x27fd,	// (0x0009f75a) msg_header_pane_g1_ParamLimits

0xb8bf,	// (0x000a881c) msg_header_pane_g2_ParamLimits

0xb8bf,	// (0x000a881c) msg_header_pane_g2

0x0001,

0xf3cd,	// (0x000ac32a) msg_header_pane_g_ParamLimits

0xf3cd,	// (0x000ac32a) msg_header_pane_g

0xab32,	// (0x000a7a8f) main_clock2_pane_ParamLimits

0x4214,	// (0x000a1171) grid_clock2_toolbar_pane_ParamLimits

0x4214,	// (0x000a1171) grid_clock2_toolbar_pane

0x4214,	// (0x000a1171) listscroll_clock2_pane_ParamLimits

0x4214,	// (0x000a1171) listscroll_clock2_pane

0x42f3,	// (0x000a1250) main_clock2_pane_t3_ParamLimits

0x42f3,	// (0x000a1250) main_clock2_pane_t3

0x4316,	// (0x000a1273) main_clock2_pane_t4_ParamLimits

0x4316,	// (0x000a1273) main_clock2_pane_t4

0x649e,	// (0x000a33fb) cell_clock2_toolbar_pane

0x64a6,	// (0x000a3403) cell_clock2_toolbar_pane_cp01

0x64a6,	// (0x000a3403) cell_clock2_toolbar_pane_cp02

0x64ae,	// (0x000a340b) cell_clock2_toolbar_pane_cp03

0x64b6,	// (0x000a3413) list_clock2_pane

0xb5e1,	// (0x000a853e) scroll_pane_cp10

0x64be,	// (0x000a341b) list_single_clock2_pane_ParamLimits

0x64be,	// (0x000a341b) list_single_clock2_pane

0xad45,	// (0x000a7ca2) list_highlight_pane_cp08

0x64cb,	// (0x000a3428) list_single_clock2_pane_t1

0x64d9,	// (0x000a3436) list_single_clock2_pane_t2

0x0001,

0xfa70,	// (0x000ac9cd) list_single_clock2_pane_t

0x018c,	// (0x0009d0e9) bg_button_pane_cp10

0x64e7,	// (0x000a3444) cell_clock2_toolbar_pane_g1

0x289c,	// (0x0009f7f9) aid_main_viewer_pane_g1_ParamLimits

0x289c,	// (0x0009f7f9) aid_main_viewer_pane_g1

0x28aa,	// (0x0009f807) aid_main_viewer_pane_g2_ParamLimits

0x28aa,	// (0x0009f807) aid_main_viewer_pane_g2

0x28b8,	// (0x0009f815) aid_main_viewer_pane_g3_ParamLimits

0x28b8,	// (0x0009f815) aid_main_viewer_pane_g3

0x28c7,	// (0x0009f824) aid_main_viewer_pane_g4_ParamLimits

0x28c7,	// (0x0009f824) aid_main_viewer_pane_g4

0x0003,

0xf3de,	// (0x000ac33b) aid_main_viewer_pane_g_ParamLimits

0xf3de,	// (0x000ac33b) aid_main_viewer_pane_g

0x31b2,	// (0x000a010f) main_calc_pane_ParamLimits

0x31d6,	// (0x000a0133) main_dialer2_pane_ParamLimits

0xa425,	// (0x000a7382) main_cam6_pane

0xa425,	// (0x000a7382) main_vid6_pane

0x4220,	// (0x000a117d) listscroll_gen_pane_cp06_ParamLimits

0x4220,	// (0x000a117d) listscroll_gen_pane_cp06

0x4339,	// (0x000a1296) main_clock2_pane_t5_ParamLimits

0x4339,	// (0x000a1296) main_clock2_pane_t5

0x4397,	// (0x000a12f4) aid_call2_pane_cp10_ParamLimits

0x43a9,	// (0x000a1306) aid_call_pane_cp10_ParamLimits

0xb650,	// (0x000a85ad) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb650,	// (0x000a85ad) popup_clock_analogue_window_cp10_g2_ParamLimits

0x43bb,	// (0x000a1318) popup_clock_analogue_window_cp10_g3_ParamLimits

0x43bb,	// (0x000a1318) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb650,	// (0x000a85ad) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf702,	// (0x000ac65f) popup_clock_analogue_window_cp10_g_ParamLimits

0x43d1,	// (0x000a132e) popup_clock_analogue_window_cp10_t1_ParamLimits

0xe9f2,	// (0x000ab94f) cell_dialer2_keypad_pane_g2_ParamLimits

0xe9f2,	// (0x000ab94f) cell_dialer2_keypad_pane_g2

0x0001,

0xf7e2,	// (0x000ac73f) cell_dialer2_keypad_pane_g_ParamLimits

0xf7e2,	// (0x000ac73f) cell_dialer2_keypad_pane_g

0xaac4,	// (0x000a7a21) cell_dialer2_keypad_pane_t1

0x5461,	// (0x000a23be) main_cset_text2_pane_ParamLimits

0x5461,	// (0x000a23be) main_cset_text2_pane

0xef3e,	// (0x000abe9b) area_vitu2_query_pane_g1_ParamLimits

0x5d53,	// (0x000a2cb0) area_vitu2_query_pane_g2_ParamLimits

0xf98d,	// (0x000ac8ea) area_vitu2_query_pane_g_ParamLimits

0xefc2,	// (0x000abf1f) area_vitu2_query_pane_t7_ParamLimits

0xefc2,	// (0x000abf1f) area_vitu2_query_pane_t7

0x5dbc,	// (0x000a2d19) bg_button_pane_cp018_ParamLimits

0x5dc8,	// (0x000a2d25) bg_button_pane_cp021_ParamLimits

0x5dd4,	// (0x000a2d31) bg_button_pane_cp022_ParamLimits

0x5de9,	// (0x000a2d46) bg_vkb2_func_pane_cp08_ParamLimits

0x5dbc,	// (0x000a2d19) bg_vkb2_func_pane_cp06_ParamLimits

0x5dc8,	// (0x000a2d25) bg_vkb2_func_pane_cp07_ParamLimits

0x5dff,	// (0x000a2d5c) input_focus_pane_cp09_ParamLimits

0xc067,	// (0x000a8fc4) cam6_autofocus_pane_ParamLimits

0xc067,	// (0x000a8fc4) cam6_autofocus_pane

0x64ef,	// (0x000a344c) cam6_image_uncrop_pane_ParamLimits

0x64ef,	// (0x000a344c) cam6_image_uncrop_pane

0x64ff,	// (0x000a345c) cam6_indi_pane_ParamLimits

0x64ff,	// (0x000a345c) cam6_indi_pane

0x6515,	// (0x000a3472) cam6_mode_pane_ParamLimits

0x6515,	// (0x000a3472) cam6_mode_pane

0x6527,	// (0x000a3484) cam6_timer_pane_ParamLimits

0x6527,	// (0x000a3484) cam6_timer_pane

0x6533,	// (0x000a3490) cam6_zoom_pane_ParamLimits

0x6533,	// (0x000a3490) cam6_zoom_pane

0x6541,	// (0x000a349e) cam6_mode_pane_g1_ParamLimits

0x6541,	// (0x000a349e) cam6_mode_pane_g1

0x6551,	// (0x000a34ae) cam6_mode_pane_g2_ParamLimits

0x6551,	// (0x000a34ae) cam6_mode_pane_g2

0x6561,	// (0x000a34be) cam6_mode_pane_g3_ParamLimits

0x6561,	// (0x000a34be) cam6_mode_pane_g3

0x6571,	// (0x000a34ce) cam6_mode_pane_g4_ParamLimits

0x6571,	// (0x000a34ce) cam6_mode_pane_g4

0x0003,

0xfa75,	// (0x000ac9d2) cam6_mode_pane_g_ParamLimits

0xfa75,	// (0x000ac9d2) cam6_mode_pane_g

0xe9be,	// (0x000ab91b) bg_tb_trans_pane_cp08_ParamLimits

0xe9be,	// (0x000ab91b) bg_tb_trans_pane_cp08

0x6581,	// (0x000a34de) cam6_battery_pane_ParamLimits

0x6581,	// (0x000a34de) cam6_battery_pane

0x6597,	// (0x000a34f4) cam6_indi_pane_g1_ParamLimits

0x6597,	// (0x000a34f4) cam6_indi_pane_g1

0x65a9,	// (0x000a3506) cam6_indi_pane_g2_ParamLimits

0x65a9,	// (0x000a3506) cam6_indi_pane_g2

0x65bb,	// (0x000a3518) cam6_indi_pane_g3_ParamLimits

0x65bb,	// (0x000a3518) cam6_indi_pane_g3

0x0002,

0xfa7e,	// (0x000ac9db) cam6_indi_pane_g_ParamLimits

0xfa7e,	// (0x000ac9db) cam6_indi_pane_g

0x65cd,	// (0x000a352a) cam6_indi_pane_t1_ParamLimits

0x65cd,	// (0x000a352a) cam6_indi_pane_t1

0x4e82,	// (0x000a1ddf) cam6_autofocus_pane_g1

0x4e7a,	// (0x000a1dd7) cam6_autofocus_pane_g2

0x4e92,	// (0x000a1def) cam6_autofocus_pane_g3

0x4e8a,	// (0x000a1de7) cam6_autofocus_pane_g4

0x0003,

0xfa85,	// (0x000ac9e2) cam6_autofocus_pane_g

0x65f3,	// (0x000a3550) cam6_timer_pane_g1

0x65fb,	// (0x000a3558) cam6_timer_pane_t1

0x6609,	// (0x000a3566) cam6_zoom_cont_pane

0x6611,	// (0x000a356e) cam6_zoom_pane_g1

0x661a,	// (0x000a3577) cam6_zoom_pane_g2

0x6623,	// (0x000a3580) cam6_zoom_pane_g3

0x0002,

0xfa8e,	// (0x000ac9eb) cam6_zoom_pane_g

0xaaba,	// (0x000a7a17) cam6_battery_pane_g1

0xaaba,	// (0x000a7a17) cam6_battery_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) cam6_battery_pane_g

0x6611,	// (0x000a356e) cam6_zoom_cont_pane_g1

0x661a,	// (0x000a3577) cam6_zoom_cont_pane_g2

0x662c,	// (0x000a3589) cam6_zoom_cont_pane_g3

0x0002,

0xfa95,	// (0x000ac9f2) cam6_zoom_cont_pane_g

0x6649,	// (0x000a35a6) cam6_mode_pane_cp_ParamLimits

0x6649,	// (0x000a35a6) cam6_mode_pane_cp

0x665b,	// (0x000a35b8) cam6_zoom_pane_cp_ParamLimits

0x665b,	// (0x000a35b8) cam6_zoom_pane_cp

0x6669,	// (0x000a35c6) vid6_image_uncrop_cif_pane_ParamLimits

0x6669,	// (0x000a35c6) vid6_image_uncrop_cif_pane

0x6679,	// (0x000a35d6) vid6_image_uncrop_nhd_pane_ParamLimits

0x6679,	// (0x000a35d6) vid6_image_uncrop_nhd_pane

0x6698,	// (0x000a35f5) vid6_image_uncrop_vga_pane_ParamLimits

0x6698,	// (0x000a35f5) vid6_image_uncrop_vga_pane

0x66a7,	// (0x000a3604) vid6_image_uncrop_wvga_pane_ParamLimits

0x66a7,	// (0x000a3604) vid6_image_uncrop_wvga_pane

0x66b6,	// (0x000a3613) vid6_indi_pane_ParamLimits

0x66b6,	// (0x000a3613) vid6_indi_pane

0xe9be,	// (0x000ab91b) bg_tb_trans_pane_cp09_ParamLimits

0xe9be,	// (0x000ab91b) bg_tb_trans_pane_cp09

0x66ce,	// (0x000a362b) cam6_battery_pane_cp_ParamLimits

0x66ce,	// (0x000a362b) cam6_battery_pane_cp

0x66da,	// (0x000a3637) vid6_indi_pane_g1_ParamLimits

0x66da,	// (0x000a3637) vid6_indi_pane_g1

0x66ec,	// (0x000a3649) vid6_indi_pane_g2_ParamLimits

0x66ec,	// (0x000a3649) vid6_indi_pane_g2

0x66fe,	// (0x000a365b) vid6_indi_pane_g3_ParamLimits

0x66fe,	// (0x000a365b) vid6_indi_pane_g3

0x6715,	// (0x000a3672) vid6_indi_pane_g4_ParamLimits

0x6715,	// (0x000a3672) vid6_indi_pane_g4

0x672c,	// (0x000a3689) vid6_indi_pane_g5_ParamLimits

0x672c,	// (0x000a3689) vid6_indi_pane_g5

0x0004,

0xfa9c,	// (0x000ac9f9) vid6_indi_pane_g_ParamLimits

0xfa9c,	// (0x000ac9f9) vid6_indi_pane_g

0x6746,	// (0x000a36a3) vid6_indi_pane_t1_ParamLimits

0x6746,	// (0x000a36a3) vid6_indi_pane_t1

0x675c,	// (0x000a36b9) vid6_indi_pane_t2_ParamLimits

0x675c,	// (0x000a36b9) vid6_indi_pane_t2

0x6784,	// (0x000a36e1) vid6_indi_pane_t3_ParamLimits

0x6784,	// (0x000a36e1) vid6_indi_pane_t3

0x67ac,	// (0x000a3709) vid6_indi_pane_t4_ParamLimits

0x67ac,	// (0x000a3709) vid6_indi_pane_t4

0x0003,

0xfaa7,	// (0x000aca04) vid6_indi_pane_t_ParamLimits

0xfaa7,	// (0x000aca04) vid6_indi_pane_t

0x67d0,	// (0x000a372d) wait_bar_pane_cp08

0x67df,	// (0x000a373c) main_cset_text2_pane_t1_ParamLimits

0x67df,	// (0x000a373c) main_cset_text2_pane_t1

0x6634,	// (0x000a3591) listscroll_gen_pane_cp06_t1_ParamLimits

0x6634,	// (0x000a3591) listscroll_gen_pane_cp06_t1

0xa425,	// (0x000a7382) main_cam6_set_pane

0x4daa,	// (0x000a1d07) bg_tb_trans_pane_cp06_ParamLimits

0xbed3,	// (0x000a8e30) cam4_indicators_pane_g1_ParamLimits

0xbee4,	// (0x000a8e41) cam4_indicators_pane_g2_ParamLimits

0xf81f,	// (0x000ac77c) cam4_indicators_pane_g_ParamLimits

0xbefc,	// (0x000a8e59) cam4_indicators_pane_t1_ParamLimits

0xa417,	// (0x000a7374) bg_tb_trans_pane_cp07_ParamLimits

0xbf2a,	// (0x000a8e87) vid4_indicators_pane_g1_ParamLimits

0xbf40,	// (0x000a8e9d) vid4_indicators_pane_g2_ParamLimits

0xbf54,	// (0x000a8eb1) vid4_indicators_pane_g3_ParamLimits

0xbf67,	// (0x000a8ec4) vid4_indicators_pane_g4_ParamLimits

0xf831,	// (0x000ac78e) vid4_indicators_pane_g_ParamLimits

0xbf85,	// (0x000a8ee2) vid4_indicators_pane_t1_ParamLimits

0xbffb,	// (0x000a8f58) vid4_progress_pane_g1_ParamLimits

0xc00b,	// (0x000a8f68) vid4_progress_pane_g2_ParamLimits

0x5f40,	// (0x000a2e9d) vid4_progress_pane_g3_ParamLimits

0xc01b,	// (0x000a8f78) vid4_progress_pane_g4_ParamLimits

0xf9d8,	// (0x000ac935) vid4_progress_pane_g_ParamLimits

0x5f52,	// (0x000a2eaf) vid4_progress_pane_t1_ParamLimits

0xc039,	// (0x000a8f96) vid4_progress_pane_t2_ParamLimits

0xc052,	// (0x000a8faf) vid4_progress_pane_t3_ParamLimits

0xf9e3,	// (0x000ac940) vid4_progress_pane_t_ParamLimits

0x5f6c,	// (0x000a2ec9) wait_bar_pane_cp07_ParamLimits

0x6800,	// (0x000a375d) main_cam6_set_pane_g2_ParamLimits

0x6800,	// (0x000a375d) main_cam6_set_pane_g2

0x6826,	// (0x000a3783) main_cset6_listscroll_pane_ParamLimits

0x6826,	// (0x000a3783) main_cset6_listscroll_pane

0x6844,	// (0x000a37a1) main_cset6_slider_pane_ParamLimits

0x6844,	// (0x000a37a1) main_cset6_slider_pane

0x685a,	// (0x000a37b7) main_cset6_text2_pane_ParamLimits

0x685a,	// (0x000a37b7) main_cset6_text2_pane

0x6868,	// (0x000a37c5) main_cset6_text_pane

0x6870,	// (0x000a37cd) main_cset_list_pane_copy1_ParamLimits

0x6870,	// (0x000a37cd) main_cset_list_pane_copy1

0x6880,	// (0x000a37dd) scroll_pane_cp028_copy1

0x6889,	// (0x000a37e6) cset_list_set_pane_copy1

0x689d,	// (0x000a37fa) aid_position_infowindow_above_copy1

0x68a5,	// (0x000a3802) aid_position_infowindow_below_copy1

0x68ad,	// (0x000a380a) cset_list_set_pane_g1_copy1

0x68b5,	// (0x000a3812) cset_list_set_pane_g3_copy1_ParamLimits

0x68b5,	// (0x000a3812) cset_list_set_pane_g3_copy1

0x68c4,	// (0x000a3821) cset_list_set_pane_t1_copy1_ParamLimits

0x68c4,	// (0x000a3821) cset_list_set_pane_t1_copy1

0xaa1b,	// (0x000a7978) list_highlight_pane_cp021_copy1_ParamLimits

0xaa1b,	// (0x000a7978) list_highlight_pane_cp021_copy1

0x68d9,	// (0x000a3836) cset6_slider_pane_ParamLimits

0x68d9,	// (0x000a3836) cset6_slider_pane

0x6905,	// (0x000a3862) main_cset6_slider_pane_g1_ParamLimits

0x6905,	// (0x000a3862) main_cset6_slider_pane_g1

0x692d,	// (0x000a388a) main_cset6_slider_pane_g2_ParamLimits

0x692d,	// (0x000a388a) main_cset6_slider_pane_g2

0x6955,	// (0x000a38b2) main_cset6_slider_pane_g3_ParamLimits

0x6955,	// (0x000a38b2) main_cset6_slider_pane_g3

0x6961,	// (0x000a38be) main_cset6_slider_pane_g4_ParamLimits

0x6961,	// (0x000a38be) main_cset6_slider_pane_g4

0x696d,	// (0x000a38ca) main_cset6_slider_pane_g5_ParamLimits

0x696d,	// (0x000a38ca) main_cset6_slider_pane_g5

0xec16,	// (0x000abb73) main_cset6_slider_pane_g7_ParamLimits

0xec16,	// (0x000abb73) main_cset6_slider_pane_g7

0xec22,	// (0x000abb7f) main_cset6_slider_pane_g8_ParamLimits

0xec22,	// (0x000abb7f) main_cset6_slider_pane_g8

0x5509,	// (0x000a2466) main_cset6_slider_pane_g9_ParamLimits

0x5509,	// (0x000a2466) main_cset6_slider_pane_g9

0x5515,	// (0x000a2472) main_cset6_slider_pane_g10_ParamLimits

0x5515,	// (0x000a2472) main_cset6_slider_pane_g10

0x5521,	// (0x000a247e) main_cset6_slider_pane_g11_ParamLimits

0x5521,	// (0x000a247e) main_cset6_slider_pane_g11

0x552d,	// (0x000a248a) main_cset6_slider_pane_g12_ParamLimits

0x552d,	// (0x000a248a) main_cset6_slider_pane_g12

0x5539,	// (0x000a2496) main_cset6_slider_pane_g13_ParamLimits

0x5539,	// (0x000a2496) main_cset6_slider_pane_g13

0x5545,	// (0x000a24a2) main_cset6_slider_pane_g14_ParamLimits

0x5545,	// (0x000a24a2) main_cset6_slider_pane_g14

0x697b,	// (0x000a38d8) main_cset6_slider_pane_g15_ParamLimits

0x697b,	// (0x000a38d8) main_cset6_slider_pane_g15

0x5569,	// (0x000a24c6) main_cset6_slider_pane_g16_ParamLimits

0x5569,	// (0x000a24c6) main_cset6_slider_pane_g16

0x5577,	// (0x000a24d4) main_cset6_slider_pane_g17_ParamLimits

0x5577,	// (0x000a24d4) main_cset6_slider_pane_g17

0x0011,

0xfab0,	// (0x000aca0d) main_cset6_slider_pane_g_ParamLimits

0xfab0,	// (0x000aca0d) main_cset6_slider_pane_g

0x69ab,	// (0x000a3908) main_cset6_slider_pane_t1_ParamLimits

0x69ab,	// (0x000a3908) main_cset6_slider_pane_t1

0x69ec,	// (0x000a3949) main_cset6_slider_pane_t2_ParamLimits

0x69ec,	// (0x000a3949) main_cset6_slider_pane_t2

0x6a17,	// (0x000a3974) main_cset6_slider_pane_t3_ParamLimits

0x6a17,	// (0x000a3974) main_cset6_slider_pane_t3

0x6a42,	// (0x000a399f) main_cset6_slider_pane_t4_ParamLimits

0x6a42,	// (0x000a399f) main_cset6_slider_pane_t4

0x6a6d,	// (0x000a39ca) main_cset6_slider_pane_t5_ParamLimits

0x6a6d,	// (0x000a39ca) main_cset6_slider_pane_t5

0x6a9a,	// (0x000a39f7) main_cset6_slider_pane_t7_ParamLimits

0x6a9a,	// (0x000a39f7) main_cset6_slider_pane_t7

0x6ad0,	// (0x000a3a2d) main_cset6_slider_pane_t8_ParamLimits

0x6ad0,	// (0x000a3a2d) main_cset6_slider_pane_t8

0x6af4,	// (0x000a3a51) main_cset6_slider_pane_t9_ParamLimits

0x6af4,	// (0x000a3a51) main_cset6_slider_pane_t9

0x6b18,	// (0x000a3a75) main_cset6_slider_pane_t10_ParamLimits

0x6b18,	// (0x000a3a75) main_cset6_slider_pane_t10

0x6b3c,	// (0x000a3a99) main_cset6_slider_pane_t11_ParamLimits

0x6b3c,	// (0x000a3a99) main_cset6_slider_pane_t11

0x6b62,	// (0x000a3abf) main_cset6_slider_pane_t14_ParamLimits

0x6b62,	// (0x000a3abf) main_cset6_slider_pane_t14

0x6b9b,	// (0x000a3af8) main_cset6_slider_pane_t15_ParamLimits

0x6b9b,	// (0x000a3af8) main_cset6_slider_pane_t15

0x000b,

0xfad5,	// (0x000aca32) main_cset6_slider_pane_t_ParamLimits

0xfad5,	// (0x000aca32) main_cset6_slider_pane_t

0x6bd4,	// (0x000a3b31) cset_slider_pane_g1_copy1

0x6bdd,	// (0x000a3b3a) cset_slider_pane_g2_copy1

0x6be6,	// (0x000a3b43) cset_slider_pane_g3_copy1

0x018c,	// (0x0009d0e9) bg_popup_sub_pane_cp011_copy1

0x6c15,	// (0x000a3b72) main_cset_text_pane_g1_copy1

0xed66,	// (0x000abcc3) main_cset_text_pane_t1_copy1

0xed74,	// (0x000abcd1) main_cset_text_pane_t2_copy1

0xed82,	// (0x000abcdf) main_cset_text_pane_t3_copy1

0xed90,	// (0x000abced) main_cset_text_pane_t4_copy1

0xed9e,	// (0x000abcfb) main_cset_text_pane_t5_copy1

0x6c1d,	// (0x000a3b7a) main_cset_text_pane_t6_copy1

0x6c2b,	// (0x000a3b88) main_cset_text_pane_t7_copy1

0x67df,	// (0x000a373c) main_cset_text2_pane_t1_copy1

0xa417,	// (0x000a7374) main_ncimui_pane

0x3464,	// (0x000a03c1) popup_query_ncimui_window_ParamLimits

0x3464,	// (0x000a03c1) popup_query_ncimui_window

0xe4f0,	// (0x000ab44d) field_cale_ev2_pane_g4_ParamLimits

0xe4f0,	// (0x000ab44d) field_cale_ev2_pane_g4

0x47cc,	// (0x000a1729) cell_video_dialer_keypad_pane_g2_ParamLimits

0x47cc,	// (0x000a1729) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7b9,	// (0x000ac716) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7b9,	// (0x000ac716) cell_video_dialer_keypad_pane_g

0x47e4,	// (0x000a1741) cell_video_dialer_keypad_pane_t1

0x018c,	// (0x0009d0e9) bg_popup_window_pane_cp012

0xddc4,	// (0x000aad21) heading_pane_cp06

0x6d80,	// (0x000a3cdd) ncim_query_content_pane

0x018c,	// (0x0009d0e9) bg_popup_heading_pane_cp01

0x6d88,	// (0x000a3ce5) ncim_heading_pane_t1

0x6d96,	// (0x000a3cf3) ncim_indicator_popup_pane

0x6da8,	// (0x000a3d05) ncim_query_button_pane

0x6dca,	// (0x000a3d27) ncim_query_content_pane_t1

0x6ddc,	// (0x000a3d39) ncim_query_content_pane_t2

0x0005,

0xfb19,	// (0x000aca76) ncim_query_content_pane_t

0x6e8e,	// (0x000a3deb) ncim_query_list_pane

0x6ea0,	// (0x000a3dfd) ncim_query_popup_pane

0x6d96,	// (0x000a3cf3) ncim_indicator_popup_pane_ParamLimits

0x6db0,	// (0x000a3d0d) ncim_query_content_pane_g1_ParamLimits

0x6db0,	// (0x000a3d0d) ncim_query_content_pane_g1

0x6dca,	// (0x000a3d27) ncim_query_content_pane_t1_ParamLimits

0x6ddc,	// (0x000a3d39) ncim_query_content_pane_t2_ParamLimits

0x6dee,	// (0x000a3d4b) ncim_query_content_pane_t3_ParamLimits

0x6dee,	// (0x000a3d4b) ncim_query_content_pane_t3

0x6e16,	// (0x000a3d73) ncim_query_content_pane_t4_ParamLimits

0x6e16,	// (0x000a3d73) ncim_query_content_pane_t4

0x6e3e,	// (0x000a3d9b) ncim_query_content_pane_t5_ParamLimits

0x6e3e,	// (0x000a3d9b) ncim_query_content_pane_t5

0x6e66,	// (0x000a3dc3) ncim_query_content_pane_t6_ParamLimits

0x6e66,	// (0x000a3dc3) ncim_query_content_pane_t6

0xfb19,	// (0x000aca76) ncim_query_content_pane_t_ParamLimits

0x6e8e,	// (0x000a3deb) ncim_query_list_pane_ParamLimits

0x6ea0,	// (0x000a3dfd) ncim_query_popup_pane_ParamLimits

0x6eb4,	// (0x000a3e11) wait_bar_pane_cp04

0x018c,	// (0x0009d0e9) input_focus_pane_cp011

0x6ebc,	// (0x000a3e19) ncim_query_popup_pane_t1

0x6eca,	// (0x000a3e27) ncim_list_query_list_pane_ParamLimits

0x6eca,	// (0x000a3e27) ncim_list_query_list_pane

0x018c,	// (0x0009d0e9) bg_button_pane_cp027

0x6edd,	// (0x000a3e3a) ncim_query_button_pane_g1

0x018c,	// (0x0009d0e9) list_highlight_pane_cp012

0x6ee7,	// (0x000a3e44) ncim_list_query_list_pane_g1

0x6eef,	// (0x000a3e4c) ncim_list_query_list_pane_t1

0xbef0,	// (0x000a8e4d) cam4_indicators_pane_g3_ParamLimits

0xbef0,	// (0x000a8e4d) cam4_indicators_pane_g3

0xbf73,	// (0x000a8ed0) vid4_indicators_pane_g5_ParamLimits

0xbf73,	// (0x000a8ed0) vid4_indicators_pane_g5

0xc02a,	// (0x000a8f87) vid4_progress_pane_g5_ParamLimits

0xc02a,	// (0x000a8f87) vid4_progress_pane_g5

0x6c6b,	// (0x000a3bc8) main_ncimui_pane_g1

0x6cd4,	// (0x000a3c31) ncimui_group_query_pane_ParamLimits

0x6cd4,	// (0x000a3c31) ncimui_group_query_pane

0x6d1c,	// (0x000a3c79) ncimui_list_pane_ParamLimits

0x6d1c,	// (0x000a3c79) ncimui_list_pane

0x6d43,	// (0x000a3ca0) ncimui_text_pane_ParamLimits

0x6d43,	// (0x000a3ca0) ncimui_text_pane

0x6efd,	// (0x000a3e5a) ncimui_text_pane_t1_ParamLimits

0x6efd,	// (0x000a3e5a) ncimui_text_pane_t1

0x6f1b,	// (0x000a3e78) ncimui_list_single_graphic_pane_ParamLimits

0x6f1b,	// (0x000a3e78) ncimui_list_single_graphic_pane

0x6f2b,	// (0x000a3e88) ncimui_query_pane_ParamLimits

0x6f2b,	// (0x000a3e88) ncimui_query_pane

0x018c,	// (0x0009d0e9) list_highlight_pane_cp013

0x6f3e,	// (0x000a3e9b) ncim_list_query_list_pane_t1_copy1

0x6ee7,	// (0x000a3e44) ncim_list_single_graphic_pane_g1

0x6f4c,	// (0x000a3ea9) ncim_query_button_pane_cp01

0x6f58,	// (0x000a3eb5) ncim_query_entry_pane_ParamLimits

0x6f58,	// (0x000a3eb5) ncim_query_entry_pane

0x6f6b,	// (0x000a3ec8) ncimui_query_pane_g1

0x6f77,	// (0x000a3ed4) ncimui_query_pane_t1_ParamLimits

0x6f77,	// (0x000a3ed4) ncimui_query_pane_t1

0xaa1b,	// (0x000a7978) input_focus_pane_cp012

0x6f90,	// (0x000a3eed) ncim_query_entry_pane_t1

0xab32,	// (0x000a7a8f) main_im_pane_ParamLimits

0xa417,	// (0x000a7374) main_mobtv_pane_ParamLimits

0xa417,	// (0x000a7374) main_mobtv_pane

0x6993,	// (0x000a38f0) main_cset6_slider_pane_g18_ParamLimits

0x6993,	// (0x000a38f0) main_cset6_slider_pane_g18

0x699f,	// (0x000a38fc) main_cset6_slider_pane_g19_ParamLimits

0x699f,	// (0x000a38fc) main_cset6_slider_pane_g19

0xaa90,	// (0x000a79ed) bg_main_mobtv_pane_ParamLimits

0xaa90,	// (0x000a79ed) bg_main_mobtv_pane

0x6fa2,	// (0x000a3eff) main_mobtv_info_pane

0x6fad,	// (0x000a3f0a) main_mobtv_loading_pane_ParamLimits

0x6fad,	// (0x000a3f0a) main_mobtv_loading_pane

0x6fba,	// (0x000a3f17) main_mobtv_pg_channel_list_pane

0x6fc4,	// (0x000a3f21) main_mobtv_pg_hdr_pane

0x6fcd,	// (0x000a3f2a) main_mobtv_programe_curr_pane_ParamLimits

0x6fcd,	// (0x000a3f2a) main_mobtv_programe_curr_pane

0x6fda,	// (0x000a3f37) main_mobtv_programe_next_pane_ParamLimits

0x6fda,	// (0x000a3f37) main_mobtv_programe_next_pane

0x6fe7,	// (0x000a3f44) popup_mobtv_noti_window

0xaaba,	// (0x000a7a17) main_tv_pg_hdr_pane_g1

0x6ff1,	// (0x000a3f4e) main_tv_pg_hdr_pane_g2

0x6ff9,	// (0x000a3f56) main_tv_pg_hdr_pane_g3

0x7001,	// (0x000a3f5e) main_tv_pg_hdr_pane_g4

0x7009,	// (0x000a3f66) main_tv_pg_hdr_pane_g5

0x7013,	// (0x000a3f70) main_tv_pg_hdr_pane_g6

0x701d,	// (0x000a3f7a) main_tv_pg_hdr_pane_g7

0x7027,	// (0x000a3f84) main_tv_pg_hdr_pane_g8

0x7031,	// (0x000a3f8e) main_tv_pg_hdr_pane_g9

0x703b,	// (0x000a3f98) main_tv_pg_hdr_pane_g10

0x7045,	// (0x000a3fa2) main_tv_pg_hdr_pane_g11

0x000a,

0xfb26,	// (0x000aca83) main_tv_pg_hdr_pane_g

0x704f,	// (0x000a3fac) main_tv_pg_hdr_pane_t1

0x705d,	// (0x000a3fba) main_tv_pg_hdr_pane_t2

0x706b,	// (0x000a3fc8) main_tv_pg_hdr_pane_t3

0x707b,	// (0x000a3fd8) main_tv_pg_hdr_pane_t4

0x708b,	// (0x000a3fe8) main_tv_pg_hdr_pane_t5

0x0004,

0xfb3d,	// (0x000aca9a) main_tv_pg_hdr_pane_t

0x709b,	// (0x000a3ff8) single_mobtv_pg_channel_pane_ParamLimits

0x709b,	// (0x000a3ff8) single_mobtv_pg_channel_pane

0x70ad,	// (0x000a400a) single_mobtv_pg_channel_table_pane

0x70b6,	// (0x000a4013) single_mobtv_pg_channel_thumb_pane

0x70bf,	// (0x000a401c) single_tv_pg_channel_pane_g1

0x70c8,	// (0x000a4025) single_tv_pg_channel_pane_g2

0x0001,

0xfb48,	// (0x000acaa5) single_tv_pg_channel_pane_g

0xaa74,	// (0x000a79d1) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xaa74,	// (0x000a79d1) bg_single_mobtv_pg_channel_thumb_pane

0x70d1,	// (0x000a402e) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x70d1,	// (0x000a402e) single_mobtv_pg_channel_thumb_pane_g1

0x70df,	// (0x000a403c) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x70df,	// (0x000a403c) single_mobtv_pg_channel_thumb_pane_g2

0x70eb,	// (0x000a4048) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x70eb,	// (0x000a4048) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb4d,	// (0x000acaaa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb4d,	// (0x000acaaa) single_mobtv_pg_channel_thumb_pane_g

0x70f7,	// (0x000a4054) single_mobtv_pg_channel_thumb_pane_t1

0x7105,	// (0x000a4062) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb54,	// (0x000acab1) single_mobtv_pg_channel_thumb_pane_t

0xaaba,	// (0x000a7a17) bg_single_mobtv_pg_channel_table_pane_g1

0xaaba,	// (0x000a7a17) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf0af,	// (0x000ac00c) bg_single_mobtv_pg_channel_table_pane_g

0x7113,	// (0x000a4070) single_mobtv_pg_channel_table_pane_t1

0x7121,	// (0x000a407e) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb59,	// (0x000acab6) single_mobtv_pg_channel_table_pane_t

0x7137,	// (0x000a4094) main_mobtv_info_pane_g1_ParamLimits

0x7137,	// (0x000a4094) main_mobtv_info_pane_g1

0x7155,	// (0x000a40b2) main_mobtv_info_pane_t1_ParamLimits

0x7155,	// (0x000a40b2) main_mobtv_info_pane_t1

0x71cd,	// (0x000a412a) main_mobtv_info_pane_t2_ParamLimits

0x71cd,	// (0x000a412a) main_mobtv_info_pane_t2

0x0002,

0xfb63,	// (0x000acac0) main_mobtv_info_pane_t_ParamLimits

0xfb63,	// (0x000acac0) main_mobtv_info_pane_t

0x725e,	// (0x000a41bb) wait_bar_pane_cp05

0x7270,	// (0x000a41cd) main_mobtv_loading_pane_g1_ParamLimits

0x7270,	// (0x000a41cd) main_mobtv_loading_pane_g1

0x7281,	// (0x000a41de) main_mobtv_loading_pane_g2_ParamLimits

0x7281,	// (0x000a41de) main_mobtv_loading_pane_g2

0x728d,	// (0x000a41ea) main_mobtv_loading_pane_g3_ParamLimits

0x728d,	// (0x000a41ea) main_mobtv_loading_pane_g3

0x0002,

0xfb6a,	// (0x000acac7) main_mobtv_loading_pane_g_ParamLimits

0xfb6a,	// (0x000acac7) main_mobtv_loading_pane_g

0x72a0,	// (0x000a41fd) main_mobtv_loading_pane_t1_ParamLimits

0x72a0,	// (0x000a41fd) main_mobtv_loading_pane_t1

0x72b8,	// (0x000a4215) main_mobtv_loading_pane_t2_ParamLimits

0x72b8,	// (0x000a4215) main_mobtv_loading_pane_t2

0x0001,

0xfb71,	// (0x000acace) main_mobtv_loading_pane_t_ParamLimits

0xfb71,	// (0x000acace) main_mobtv_loading_pane_t

0x72dc,	// (0x000a4239) wait_bar_pane_cp06_ParamLimits

0x72dc,	// (0x000a4239) wait_bar_pane_cp06

0x72eb,	// (0x000a4248) main_mobtv_programe_curr_pane_t1

0x72f9,	// (0x000a4256) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb76,	// (0x000acad3) main_mobtv_programe_curr_pane_t

0x7307,	// (0x000a4264) main_mobtv_programe_next_pane_t1

0x7315,	// (0x000a4272) main_mobtv_programe_next_pane_t2

0x7323,	// (0x000a4280) main_mobtv_programe_next_pane_t3

0x0002,

0xfb7b,	// (0x000acad8) main_mobtv_programe_next_pane_t

0x018c,	// (0x0009d0e9) bg_popup_mobtv_noti_window_pane

0x7331,	// (0x000a428e) popup_mobtv_noti_window_g1

0x7339,	// (0x000a4296) popup_mobtv_noti_window_t1

0x7347,	// (0x000a42a4) popup_mobtv_noti_window_t2

0x0001,

0xfb82,	// (0x000acadf) popup_mobtv_noti_window_t

0xaaba,	// (0x000a7a17) bg_popup_mobtv_noti_window_pane_g1

0xa425,	// (0x000a7382) sc_clock_pane

0xa425,	// (0x000a7382) main_fs_bigclock_pane

0x62b9,	// (0x000a3216) blid2_tripm_pane_t4_ParamLimits

0x62b9,	// (0x000a3216) blid2_tripm_pane_t4

0xaa74,	// (0x000a79d1) sc_clock_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) sc_clock_pane_g1

0xaac4,	// (0x000a7a21) sc_clock_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) sc_clock_pane_t1

0xaac4,	// (0x000a7a21) sc_clock_pane_t2_ParamLimits

0xaac4,	// (0x000a7a21) sc_clock_pane_t2

0xaac4,	// (0x000a7a21) sc_clock_pane_t3_ParamLimits

0xaac4,	// (0x000a7a21) sc_clock_pane_t3

0x0004,

0xfb87,	// (0x000acae4) sc_clock_pane_t_ParamLimits

0xfb87,	// (0x000acae4) sc_clock_pane_t

0x861a,	// (0x000a5577) main_fs_bigclock_indicator_pane_ParamLimits

0x861a,	// (0x000a5577) main_fs_bigclock_indicator_pane

0x73c6,	// (0x000a4323) main_fs_bigclock_pane_g1_ParamLimits

0x73c6,	// (0x000a4323) main_fs_bigclock_pane_g1

0x8626,	// (0x000a5583) main_fs_bigclock_pane_t1_ParamLimits

0x8626,	// (0x000a5583) main_fs_bigclock_pane_t1

0x8638,	// (0x000a5595) main_fs_bigclock_pane_t2_ParamLimits

0x8638,	// (0x000a5595) main_fs_bigclock_pane_t2

0x864c,	// (0x000a55a9) main_fs_bigclock_pane_t3_ParamLimits

0x864c,	// (0x000a55a9) main_fs_bigclock_pane_t3

0x0002,

0xfd18,	// (0x000acc75) main_fs_bigclock_pane_t_ParamLimits

0xfd18,	// (0x000acc75) main_fs_bigclock_pane_t

0xc544,	// (0x000a94a1) main_fs_bigclock_indicator_pane_g1

0x6dbc,	// (0x000a3d19) ncim_query_content_pane_g2_ParamLimits

0x6dbc,	// (0x000a3d19) ncim_query_content_pane_g2

0x0001,

0xfb14,	// (0x000aca71) ncim_query_content_pane_g_ParamLimits

0xfb14,	// (0x000aca71) ncim_query_content_pane_g

0xaac4,	// (0x000a7a21) sc_clock_pane_t4_ParamLimits

0xaac4,	// (0x000a7a21) sc_clock_pane_t4

0xa417,	// (0x000a7374) main_radioblah_pane

0xbe5f,	// (0x000a8dbc) cell_call4_button_pane_t1_copy1_ParamLimits

0xbe5f,	// (0x000a8dbc) cell_call4_button_pane_t1_copy1

0x6c83,	// (0x000a3be0) main_ncimui_pane_t1_ParamLimits

0x6c83,	// (0x000a3be0) main_ncimui_pane_t1

0x6c9d,	// (0x000a3bfa) main_ncimui_pane_t2_ParamLimits

0x6c9d,	// (0x000a3bfa) main_ncimui_pane_t2

0x0002,

0xfb0d,	// (0x000aca6a) main_ncimui_pane_t_ParamLimits

0xfb0d,	// (0x000aca6a) main_ncimui_pane_t

0xb806,	// (0x000a8763) main_radioblah_anim_pane_ParamLimits

0xb806,	// (0x000a8763) main_radioblah_anim_pane

0xb806,	// (0x000a8763) main_radioblah_info_pane_ParamLimits

0xb806,	// (0x000a8763) main_radioblah_info_pane

0xb7f2,	// (0x000a874f) main_radioblah_pane_t1_ParamLimits

0xb7f2,	// (0x000a874f) main_radioblah_pane_t1

0xb7f2,	// (0x000a874f) main_radioblah_pane_t2_ParamLimits

0xb7f2,	// (0x000a874f) main_radioblah_pane_t2

0x0003,

0xfba8,	// (0x000acb05) main_radioblah_pane_t_ParamLimits

0xfba8,	// (0x000acb05) main_radioblah_pane_t

0xaa1b,	// (0x000a7978) main_radioblah_rocker_ctrl_pane_ParamLimits

0xaa1b,	// (0x000a7978) main_radioblah_rocker_ctrl_pane

0xe9cc,	// (0x000ab929) main_radioblah_info_pane_t1_ParamLimits

0xe9cc,	// (0x000ab929) main_radioblah_info_pane_t1

0x758d,	// (0x000a44ea) main_radioblah_info_pane_t2_ParamLimits

0x758d,	// (0x000a44ea) main_radioblah_info_pane_t2

0x0003,

0xfbb1,	// (0x000acb0e) main_radioblah_info_pane_t_ParamLimits

0xfbb1,	// (0x000acb0e) main_radioblah_info_pane_t

0xaaba,	// (0x000a7a17) main_radioblah_rocker_ctrl_pane_g1

0xaaba,	// (0x000a7a17) main_radioblah_rocker_ctrl_pane_g2

0xaaba,	// (0x000a7a17) main_radioblah_rocker_ctrl_pane_g3

0xaaba,	// (0x000a7a17) main_radioblah_rocker_ctrl_pane_g4

0xaaba,	// (0x000a7a17) main_radioblah_rocker_ctrl_pane_g5

0xaaba,	// (0x000a7a17) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbba,	// (0x000acb17) main_radioblah_rocker_ctrl_pane_g

0x67df,	// (0x000a373c) main_cset_text2_pane_t1_copy1_ParamLimits

0xbead,	// (0x000a8e0a) cam4_image_uncrop_qvga_pane

0xbf16,	// (0x000a8e73) vid4_image_uncrop_qcif_pane

0xc067,	// (0x000a8fc4) cam6_image_uncrop_qvga_pane_ParamLimits

0xc067,	// (0x000a8fc4) cam6_image_uncrop_qvga_pane

0x6688,	// (0x000a35e5) vid6_image_uncrop_qcif_pane_ParamLimits

0x6688,	// (0x000a35e5) vid6_image_uncrop_qcif_pane

0x018c,	// (0x0009d0e9) bg_popup_preview_window_pane_cp03

0x6c39,	// (0x000a3b96) list_cset_text2_pane

0x6c41,	// (0x000a3b9e) main_cset6_text2_pane_g1

0x6c49,	// (0x000a3ba6) main_cset6_text2_pane_t1

0xc075,	// (0x000a8fd2) list_cset_text2_pane_t1_ParamLimits

0xc075,	// (0x000a8fd2) list_cset_text2_pane_t1

0xa417,	// (0x000a7374) main_radioblah_pane_ParamLimits

0x724a,	// (0x000a41a7) main_mobtv_info_pane_t3_ParamLimits

0x724a,	// (0x000a41a7) main_mobtv_info_pane_t3

0xb7e4,	// (0x000a8741) main_radioblah_pane_g1

0x755d,	// (0x000a44ba) main_radioblah_info_pane_g1

0xaad8,	// (0x000a7a35) main_radioblah_info_pane_t3_ParamLimits

0xaad8,	// (0x000a7a35) main_radioblah_info_pane_t3

0x1fbb,	// (0x0009ef18) highlight_cell_cale_month_pane_ParamLimits

0x1fbb,	// (0x0009ef18) highlight_cell_cale_month_pane

0xa425,	// (0x000a7382) main_phob_fisheye_pane

0xe565,	// (0x000ab4c2) scroll_pane_cp0031_ParamLimits

0xe565,	// (0x000ab4c2) scroll_pane_cp0031

0x67d0,	// (0x000a372d) wait_bar_pane_cp08_ParamLimits

0x6889,	// (0x000a37e6) cset_list_set_pane_copy1_ParamLimits

0x75dc,	// (0x000a4539) highlight_cell_cale_month_pane_g1

0x75e4,	// (0x000a4541) highlight_cell_cale_month_pane_t1

0xf02e,	// (0x000abf8b) list_gen_pane_cp01

0xec01,	// (0x000abb5e) scroll_pane_01

0x75f2,	// (0x000a454f) list_single_double_fisheye_pane

0x75fb,	// (0x000a4558) list_double_fisheye_pane_g1_ParamLimits

0x75fb,	// (0x000a4558) list_double_fisheye_pane_g1

0x7607,	// (0x000a4564) list_double_fisheye_pane_g2_ParamLimits

0x7607,	// (0x000a4564) list_double_fisheye_pane_g2

0x761b,	// (0x000a4578) list_double_fisheye_pane_g3_ParamLimits

0x761b,	// (0x000a4578) list_double_fisheye_pane_g3

0x0004,

0xfbc7,	// (0x000acb24) list_double_fisheye_pane_g_ParamLimits

0xfbc7,	// (0x000acb24) list_double_fisheye_pane_g

0x7644,	// (0x000a45a1) list_double_fisheye_pane_t1_ParamLimits

0x7644,	// (0x000a45a1) list_double_fisheye_pane_t1

0x765f,	// (0x000a45bc) list_double_fisheye_pane_t2_ParamLimits

0x765f,	// (0x000a45bc) list_double_fisheye_pane_t2

0x0001,

0xfbd2,	// (0x000acb2f) list_double_fisheye_pane_t_ParamLimits

0xfbd2,	// (0x000acb2f) list_double_fisheye_pane_t

0xa425,	// (0x000a7382) main_call5_pane

0xaa1b,	// (0x000a7978) sc_swipe_pane_ParamLimits

0xaa1b,	// (0x000a7978) sc_swipe_pane

0x7694,	// (0x000a45f1) call5_image_pane_ParamLimits

0x7694,	// (0x000a45f1) call5_image_pane

0x76b1,	// (0x000a460e) call5_swipe_1_pane_ParamLimits

0x76b1,	// (0x000a460e) call5_swipe_1_pane

0x76c4,	// (0x000a4621) call5_swipe_2_pane_ParamLimits

0x76c4,	// (0x000a4621) call5_swipe_2_pane

0x76ef,	// (0x000a464c) popup_call5_audio_first_window_ParamLimits

0x76ef,	// (0x000a464c) popup_call5_audio_first_window

0xaa74,	// (0x000a79d1) call5_swipe_1_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) call5_swipe_1_pane_g1

0x7704,	// (0x000a4661) call5_swipe_1_pane_g2_ParamLimits

0x7704,	// (0x000a4661) call5_swipe_1_pane_g2

0x0001,

0xfbd7,	// (0x000acb34) call5_swipe_1_pane_g_ParamLimits

0xfbd7,	// (0x000acb34) call5_swipe_1_pane_g

0x7710,	// (0x000a466d) call5_swipe_1_pane_t1_ParamLimits

0x7710,	// (0x000a466d) call5_swipe_1_pane_t1

0xaa74,	// (0x000a79d1) call5_swipe_2_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) call5_swipe_2_pane_g1

0x7725,	// (0x000a4682) call5_swipe_2_pane_g2_ParamLimits

0x7725,	// (0x000a4682) call5_swipe_2_pane_g2

0x0001,

0xfbdc,	// (0x000acb39) call5_swipe_2_pane_g_ParamLimits

0xfbdc,	// (0x000acb39) call5_swipe_2_pane_g

0x7731,	// (0x000a468e) call5_swipe_2_pane_t1_ParamLimits

0x7731,	// (0x000a468e) call5_swipe_2_pane_t1

0xaa74,	// (0x000a79d1) sc_swipe_pane_g1_ParamLimits

0xaa74,	// (0x000a79d1) sc_swipe_pane_g1

0xaa82,	// (0x000a79df) sc_swipe_pane_g2_ParamLimits

0xaa82,	// (0x000a79df) sc_swipe_pane_g2

0x0001,

0xf755,	// (0x000ac6b2) sc_swipe_pane_g_ParamLimits

0xf755,	// (0x000ac6b2) sc_swipe_pane_g

0xaac4,	// (0x000a7a21) sc_swipe_pane_t1_ParamLimits

0xaac4,	// (0x000a7a21) sc_swipe_pane_t1

0xa425,	// (0x000a7382) main_cmail_launcher_pane

0x7746,	// (0x000a46a3) aid_size_cell_cmail_l_ParamLimits

0x7746,	// (0x000a46a3) aid_size_cell_cmail_l

0x775b,	// (0x000a46b8) grid_cmail_l_pane_ParamLimits

0x775b,	// (0x000a46b8) grid_cmail_l_pane

0x7775,	// (0x000a46d2) cell_cmail_l_pane_ParamLimits

0x7775,	// (0x000a46d2) cell_cmail_l_pane

0x7796,	// (0x000a46f3) cell_cmail_l_pane_g1_ParamLimits

0x7796,	// (0x000a46f3) cell_cmail_l_pane_g1

0x77a2,	// (0x000a46ff) cell_cmail_l_pane_t1_ParamLimits

0x77a2,	// (0x000a46ff) cell_cmail_l_pane_t1

0x77b8,	// (0x000a4715) cell_cmail_l_pane_t2_ParamLimits

0x77b8,	// (0x000a4715) cell_cmail_l_pane_t2

0x0001,

0xfbe1,	// (0x000acb3e) cell_cmail_l_pane_t_ParamLimits

0xfbe1,	// (0x000acb3e) cell_cmail_l_pane_t

0xaa1b,	// (0x000a7978) grid_highlight_pane_cp018_ParamLimits

0xaa1b,	// (0x000a7978) grid_highlight_pane_cp018

0x025c,	// (0x0009d1b9) main2_pane_ParamLimits

0x025c,	// (0x0009d1b9) main2_pane

0xabee,	// (0x000a7b4b) popup_sp_fs_action_menu_bg_pane_g1

0xabf6,	// (0x000a7b53) popup_sp_fs_action_menu_bg_pane_g2

0xabfe,	// (0x000a7b5b) popup_sp_fs_action_menu_bg_pane_g3

0xac06,	// (0x000a7b63) popup_sp_fs_action_menu_bg_pane_g4

0xac0e,	// (0x000a7b6b) popup_sp_fs_action_menu_bg_pane_g5

0xac16,	// (0x000a7b73) popup_sp_fs_action_menu_bg_pane_g6

0xac1e,	// (0x000a7b7b) popup_sp_fs_action_menu_bg_pane_g7

0xac26,	// (0x000a7b83) popup_sp_fs_action_menu_bg_pane_g8

0xac2e,	// (0x000a7b8b) popup_sp_fs_action_menu_bg_pane_g9

0xac36,	// (0x000a7b93) popup_sp_fs_action_menu_bg_pane_g10

0xac36,	// (0x000a7b93) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf100,	// (0x000ac05d) popup_sp_fs_action_menu_bg_pane_g

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g3_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g3_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g3_g2

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g3_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1ae,	// (0x000ac10b) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1ae,	// (0x000ac10b) list_medium_line_x2_t3_g3_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g3_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g3_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g3_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g3_t2

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g3_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1b5,	// (0x000ac112) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1b5,	// (0x000ac112) list_medium_line_x2_t3_g3_t

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g2_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_x2_t3_g2_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g2_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g2_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g2_t2

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g2_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1b5,	// (0x000ac112) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1b5,	// (0x000ac112) list_medium_line_x2_t3_g2_t

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g2

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g3

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c1,	// (0x000ac11e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c1,	// (0x000ac11e) list_medium_line_x2_t4_g4_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t2

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t3

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1ca,	// (0x000ac127) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1ca,	// (0x000ac127) list_medium_line_x2_t4_g4_t

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g2

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g3

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g4_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c1,	// (0x000ac11e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c1,	// (0x000ac11e) list_medium_line_x2_t2_g4_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g4_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g4_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g4_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g4_t2

0x0001,

0xf191,	// (0x000ac0ee) list_medium_line_x2_t2_g4_t_ParamLimits

0xf191,	// (0x000ac0ee) list_medium_line_x2_t2_g4_t

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g3_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g3_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g3_g2

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g3_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1ae,	// (0x000ac10b) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1ae,	// (0x000ac10b) list_medium_line_x2_t2_g3_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g3_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g3_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g3_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g3_t2

0x0001,

0xf191,	// (0x000ac0ee) list_medium_line_x2_t2_g3_t_ParamLimits

0xf191,	// (0x000ac0ee) list_medium_line_x2_t2_g3_t

0x2112,	// (0x0009f06f) main_sp_fs_list_pane_ParamLimits

0x2112,	// (0x0009f06f) main_sp_fs_list_pane

0x211e,	// (0x0009f07b) sp_fs_scroll_pane_ParamLimits

0x211e,	// (0x0009f07b) sp_fs_scroll_pane

0xb2e3,	// (0x000a8240) list_medium_line_x2_t3_t1

0xb2e3,	// (0x000a8240) list_medium_line_x2_t3_t2

0xb2e3,	// (0x000a8240) list_medium_line_x2_t3_t3

0x0002,

0xf277,	// (0x000ac1d4) list_medium_line_x2_t3_t

0xb2e3,	// (0x000a8240) list_medium_line_x3_t4_t1

0xb2e3,	// (0x000a8240) list_medium_line_x3_t4_t2

0xb2e3,	// (0x000a8240) list_medium_line_x3_t4_t3

0xb2e3,	// (0x000a8240) list_medium_line_x3_t4_t4

0x0003,

0xf27e,	// (0x000ac1db) list_medium_line_x3_t4_t

0xb2e3,	// (0x000a8240) list_medium_line_x4_t5_t1

0xb2e3,	// (0x000a8240) list_medium_line_x4_t5_t2

0xb2e3,	// (0x000a8240) list_medium_line_x4_t5_t3

0xb2e3,	// (0x000a8240) list_medium_line_x4_t5_t4

0xb2e3,	// (0x000a8240) list_medium_line_x4_t5_t5

0x0004,

0xf287,	// (0x000ac1e4) list_medium_line_x4_t5_t

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g1

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g2

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g3

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g4_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t4_g4_g4

0x0003,

0xf1c1,	// (0x000ac11e) list_medium_line_t4_g4_g_ParamLimits

0xf1c1,	// (0x000ac11e) list_medium_line_t4_g4_g

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t1

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t2

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t3

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t4_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t4_g4_t4

0x0003,

0xf1ca,	// (0x000ac127) list_medium_line_t4_g4_t_ParamLimits

0xf1ca,	// (0x000ac127) list_medium_line_t4_g4_t

0x21cc,	// (0x0009f129) chi_dic_find_pane_g1

0x31ea,	// (0x000a0147) main_tport_pane

0xb2e3,	// (0x000a8240) list_medium_line_plain_t1

0xaa74,	// (0x000a79d1) list_medium_line_t2_g2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t2_g2_g1

0xaa74,	// (0x000a79d1) list_medium_line_t2_g2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t2_g2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_t2_g2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_t2_g2_g

0xaac4,	// (0x000a7a21) list_medium_line_t2_g2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t2_g2_t1

0xaac4,	// (0x000a7a21) list_medium_line_t2_g2_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t2_g2_t2

0x0001,

0xf191,	// (0x000ac0ee) list_medium_line_t2_g2_t_ParamLimits

0xf191,	// (0x000ac0ee) list_medium_line_t2_g2_t

0x5f7f,	// (0x000a2edc) aid_sp_fs_list_icon_a_sm

0x5f87,	// (0x000a2ee4) aid_sp_fs_list_icon_d

0x5f8f,	// (0x000a2eec) aid_sp_fs_text_primary

0x5f98,	// (0x000a2ef5) aid_sp_fs_text_secondary

0x018c,	// (0x0009d0e9) list_medium_line

0x018c,	// (0x0009d0e9) list_medium_line_g2

0x018c,	// (0x0009d0e9) list_medium_line_g3

0x018c,	// (0x0009d0e9) list_medium_line_plain

0x018c,	// (0x0009d0e9) list_medium_line_plain_t2

0x018c,	// (0x0009d0e9) list_medium_line_plain_t3

0x018c,	// (0x0009d0e9) list_medium_line_right_icon

0x018c,	// (0x0009d0e9) list_medium_line_right_iconx2

0x018c,	// (0x0009d0e9) list_medium_line_t2

0x018c,	// (0x0009d0e9) list_medium_line_t2_g2

0x018c,	// (0x0009d0e9) list_medium_line_t2_g3

0x018c,	// (0x0009d0e9) list_medium_line_t2_right_icon

0x018c,	// (0x0009d0e9) list_medium_line_t2_right_iconx2

0x018c,	// (0x0009d0e9) list_medium_line_t3

0x018c,	// (0x0009d0e9) list_medium_line_t3_g2

0x018c,	// (0x0009d0e9) list_medium_line_t3_g3

0x018c,	// (0x0009d0e9) list_medium_line_t3_right_iconx2

0x018c,	// (0x0009d0e9) list_medium_line_t4_g4

0x018c,	// (0x0009d0e9) list_medium_line_x2

0x018c,	// (0x0009d0e9) list_medium_line_x2_t2_g2

0x018c,	// (0x0009d0e9) list_medium_line_x2_t2_g3

0x018c,	// (0x0009d0e9) list_medium_line_x2_t2_g4

0x018c,	// (0x0009d0e9) list_medium_line_x2_t3

0x018c,	// (0x0009d0e9) list_medium_line_x2_t3_g2

0x018c,	// (0x0009d0e9) list_medium_line_x2_t3_g3

0x018c,	// (0x0009d0e9) list_medium_line_x2_t3_g4

0x018c,	// (0x0009d0e9) list_medium_line_x2_t4_g2

0x018c,	// (0x0009d0e9) list_medium_line_x2_t4_g4

0x018c,	// (0x0009d0e9) list_medium_line_x3

0x018c,	// (0x0009d0e9) list_medium_line_x3_t4

0x018c,	// (0x0009d0e9) list_medium_line_x3_t4_g4

0x018c,	// (0x0009d0e9) list_medium_line_x4_t4

0x018c,	// (0x0009d0e9) list_medium_line_x4_t4_g7

0x018c,	// (0x0009d0e9) list_medium_line_x4_t5

0x5fa1,	// (0x000a2efe) list_single_fs_dyc_pane_ParamLimits

0x5fa1,	// (0x000a2efe) list_single_fs_dyc_pane

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g1

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g2

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g3

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g4_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g4

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g5_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g5

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g6_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x4_t4_g7_g6

0xaa82,	// (0x000a79df) list_medium_line_x4_t4_g7_g7_ParamLimits

0xaa82,	// (0x000a79df) list_medium_line_x4_t4_g7_g7

0x0006,

0xfaee,	// (0x000aca4b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfaee,	// (0x000aca4b) list_medium_line_x4_t4_g7_g

0xaac4,	// (0x000a7a21) list_medium_line_x4_t4_g7_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x4_t4_g7_t1

0xaac4,	// (0x000a7a21) list_medium_line_x4_t4_g7_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x4_t4_g7_t2

0xaac4,	// (0x000a7a21) list_medium_line_x4_t4_g7_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x4_t4_g7_t3

0xaad8,	// (0x000a7a35) list_medium_line_x4_t4_g7_t4_ParamLimits

0xaad8,	// (0x000a7a35) list_medium_line_x4_t4_g7_t4

0xaad8,	// (0x000a7a35) list_medium_line_x4_t4_g7_t5_ParamLimits

0xaad8,	// (0x000a7a35) list_medium_line_x4_t4_g7_t5

0x0004,

0xfafd,	// (0x000aca5a) list_medium_line_x4_t4_g7_t_ParamLimits

0xfafd,	// (0x000aca5a) list_medium_line_x4_t4_g7_t

0x6bef,	// (0x000a3b4c) list_single_dyc_row_pane_ParamLimits

0x6bef,	// (0x000a3b4c) list_single_dyc_row_pane

0x7681,	// (0x000a45de) call5_gesture_pane_ParamLimits

0x7681,	// (0x000a45de) call5_gesture_pane

0x76d7,	// (0x000a4634) call5_windows_pane_ParamLimits

0x76d7,	// (0x000a4634) call5_windows_pane

0x77d5,	// (0x000a4732) call5_swipe_1_pane_cp_ParamLimits

0x77d5,	// (0x000a4732) call5_swipe_1_pane_cp

0x77e1,	// (0x000a473e) call5_swipe_2_pane_cp_ParamLimits

0x77e1,	// (0x000a473e) call5_swipe_2_pane_cp

0xad45,	// (0x000a7ca2) call5_image_pane_cp

0x77ed,	// (0x000a474a) popup_call5_audio_first_window_cp_ParamLimits

0x77ed,	// (0x000a474a) popup_call5_audio_first_window_cp

0x77fb,	// (0x000a4758) call5_swipe_1_pane_g1_cp_ParamLimits

0x77fb,	// (0x000a4758) call5_swipe_1_pane_g1_cp

0x7808,	// (0x000a4765) call5_swipe_1_pane_g2_cp

0x7810,	// (0x000a476d) call5_swipe_1_pane_t1_cp_ParamLimits

0x7810,	// (0x000a476d) call5_swipe_1_pane_t1_cp

0x77fb,	// (0x000a4758) call5_swipe_2_pane_g1_cp_ParamLimits

0x77fb,	// (0x000a4758) call5_swipe_2_pane_g1_cp

0x7825,	// (0x000a4782) call5_swipe_2_pane_g2_cp

0x782d,	// (0x000a478a) call5_swipe_2_pane_t1_cp_ParamLimits

0x782d,	// (0x000a478a) call5_swipe_2_pane_t1_cp

0xaa1b,	// (0x000a7978) main_sp_fs_email_pane

0xf037,	// (0x000abf94) main_sp_fs_listscroll_pane_te

0x7842,	// (0x000a479f) popup_sp_fs_action_menu_pane_ParamLimits

0x7842,	// (0x000a479f) popup_sp_fs_action_menu_pane

0xaaba,	// (0x000a7a17) bg_sp_fs_ctrlbar_pane_g1

0x7888,	// (0x000a47e5) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0x7891,	// (0x000a47ee) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0x789a,	// (0x000a47f7) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xaaba,	// (0x000a7a17) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfbe6,	// (0x000acb43) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xdbcf,	// (0x000aab2c) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xdbcf,	// (0x000aab2c) bg_sp_fs_ctrlbar_ddmenu_pane

0x78a3,	// (0x000a4800) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0x78a3,	// (0x000a4800) main_sp_fs_ctrlbar_ddmenu_pane_g1

0x78af,	// (0x000a480c) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0x78af,	// (0x000a480c) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfbef,	// (0x000acb4c) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfbef,	// (0x000acb4c) main_sp_fs_ctrlbar_ddmenu_pane_g

0x78bb,	// (0x000a4818) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0x78bb,	// (0x000a4818) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xaaba,	// (0x000a7a17) list_medium_line_t2_right_icon_g1

0xb2e3,	// (0x000a8240) list_medium_line_t2_right_icon_t1

0xb2e3,	// (0x000a8240) list_medium_line_t2_right_icon_t2

0x0001,

0xfbf4,	// (0x000acb51) list_medium_line_t2_right_icon_t

0xb806,	// (0x000a8763) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb806,	// (0x000a8763) bg_sp_fs_ctrlbar_pane

0x795c,	// (0x000a48b9) main_sp_fs_ctrlbar_button_pane_cp01

0x7966,	// (0x000a48c3) main_sp_fs_ctrlbar_ddmenu_pane

0x7970,	// (0x000a48cd) main_sp_fs_ctrlbar_pane_g1

0x797c,	// (0x000a48d9) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfbf9,	// (0x000acb56) main_sp_fs_ctrlbar_pane_g

0x79bc,	// (0x000a4919) main_sp_fs_ctrlbar_pane_t1

0x79fb,	// (0x000a4958) main_sp_fs_ctrlbar_pane

0x7a3a,	// (0x000a4997) main_sp_fs_listscroll_pane_te_cp01

0x7a66,	// (0x000a49c3) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7a66,	// (0x000a49c3) popup_sp_fs_action_menu_pane_cp01

0xaa1b,	// (0x000a7978) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xaa1b,	// (0x000a7978) bg_sp_fs_highlight_list_pane_cp01

0x7a8b,	// (0x000a49e8) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x7a8b,	// (0x000a49e8) sp_fs_action_menu_list_gene_pane_g1

0x7a9a,	// (0x000a49f7) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0x7a9a,	// (0x000a49f7) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc07,	// (0x000acb64) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc07,	// (0x000acb64) sp_fs_action_menu_list_gene_pane_g

0x7aa7,	// (0x000a4a04) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x7aa7,	// (0x000a4a04) sp_fs_action_menu_list_gene_pane_t1

0x7abf,	// (0x000a4a1c) sp_fs_action_menu_list_gene_pane_ParamLimits

0x7abf,	// (0x000a4a1c) sp_fs_action_menu_list_gene_pane

0x7ae2,	// (0x000a4a3f) popup_sp_fs_action_menu_bg_pane_ParamLimits

0x7ae2,	// (0x000a4a3f) popup_sp_fs_action_menu_bg_pane

0x7af0,	// (0x000a4a4d) sp_fs_action_menu_list_pane_ParamLimits

0x7af0,	// (0x000a4a4d) sp_fs_action_menu_list_pane

0x7b14,	// (0x000a4a71) sp_fs_scroll_pane_cp01_ParamLimits

0x7b14,	// (0x000a4a71) sp_fs_scroll_pane_cp01

0xb2e3,	// (0x000a8240) list_medium_line_plain_t2_t1

0xb2e3,	// (0x000a8240) list_medium_line_plain_t2_t2

0x0001,

0xfbf4,	// (0x000acb51) list_medium_line_plain_t2_t

0xb2e3,	// (0x000a8240) list_medium_line_plain_t3_t1

0xb2e3,	// (0x000a8240) list_medium_line_plain_t3_t2

0xb2e3,	// (0x000a8240) list_medium_line_plain_t3_t3

0x0002,

0xf277,	// (0x000ac1d4) list_medium_line_plain_t3_t

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g2_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_x2_t2_g2_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g2_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g2_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t2_g2_t2

0x0001,

0xf191,	// (0x000ac0ee) list_medium_line_x2_t2_g2_t_ParamLimits

0xf191,	// (0x000ac0ee) list_medium_line_x2_t2_g2_t

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g2_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_x2_t4_g2_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t2

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t3

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t4_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1ca,	// (0x000ac127) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1ca,	// (0x000ac127) list_medium_line_x2_t4_g2_t

0xaaba,	// (0x000a7a17) list_medium_line_t3_right_iconx2_g1

0xaaba,	// (0x000a7a17) list_medium_line_t3_right_iconx2_g2

0xaaba,	// (0x000a7a17) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf393,	// (0x000ac2f0) list_medium_line_t3_right_iconx2_g

0xb2e3,	// (0x000a8240) list_medium_line_t3_right_iconx2_t1

0xb2e3,	// (0x000a8240) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfbf4,	// (0x000acb51) list_medium_line_t3_right_iconx2_t

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g1

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g2

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g3

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g4_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c1,	// (0x000ac11e) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c1,	// (0x000ac11e) list_medium_line_x3_t4_g4_g

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t1

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t2

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t3

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t4_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1ca,	// (0x000ac127) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1ca,	// (0x000ac127) list_medium_line_x3_t4_g4_t

0x7b3a,	// (0x000a4a97) list_single_dyc_row_text_pane_t1_ParamLimits

0x7b3a,	// (0x000a4a97) list_single_dyc_row_text_pane_t1

0x7b83,	// (0x000a4ae0) list_single_dyc_row_text_pane_t2_ParamLimits

0x7b83,	// (0x000a4ae0) list_single_dyc_row_text_pane_t2

0x7bf9,	// (0x000a4b56) list_single_dyc_row_text_pane_t3_ParamLimits

0x7bf9,	// (0x000a4b56) list_single_dyc_row_text_pane_t3

0x0005,

0xfc0c,	// (0x000acb69) list_single_dyc_row_text_pane_t_ParamLimits

0xfc0c,	// (0x000acb69) list_single_dyc_row_text_pane_t

0x7cdc,	// (0x000a4c39) list_single_dyc_row_pane_g1_ParamLimits

0x7cdc,	// (0x000a4c39) list_single_dyc_row_pane_g1

0x7ce8,	// (0x000a4c45) list_single_dyc_row_pane_g2_ParamLimits

0x7ce8,	// (0x000a4c45) list_single_dyc_row_pane_g2

0x7cf4,	// (0x000a4c51) list_single_dyc_row_pane_g3_ParamLimits

0x7cf4,	// (0x000a4c51) list_single_dyc_row_pane_g3

0x7d00,	// (0x000a4c5d) list_single_dyc_row_pane_g4_ParamLimits

0x7d00,	// (0x000a4c5d) list_single_dyc_row_pane_g4

0x0003,

0xfc19,	// (0x000acb76) list_single_dyc_row_pane_g_ParamLimits

0xfc19,	// (0x000acb76) list_single_dyc_row_pane_g

0x7d0c,	// (0x000a4c69) list_single_dyc_row_text_pane_ParamLimits

0x7d0c,	// (0x000a4c69) list_single_dyc_row_text_pane

0x018c,	// (0x0009d0e9) bg_sp_fs_scroll_pane

0x7d2b,	// (0x000a4c88) thumb_sp_fs_scroll_pane

0xaa74,	// (0x000a79d1) list_medium_line_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_g1

0xaac4,	// (0x000a7a21) list_medium_line_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t1

0xaa74,	// (0x000a79d1) list_medium_line_x2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_x2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_x2_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t1

0xaa74,	// (0x000a79d1) list_medium_line_x3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x3_g1

0x4daa,	// (0x000a1d07) list_medium_line_x3_g2_ParamLimits

0x4daa,	// (0x000a1d07) list_medium_line_x3_g2

0x0001,

0xfc22,	// (0x000acb7f) list_medium_line_x3_g_ParamLimits

0xfc22,	// (0x000acb7f) list_medium_line_x3_g

0xc08f,	// (0x000a8fec) list_medium_line_x3_t1_ParamLimits

0xc08f,	// (0x000a8fec) list_medium_line_x3_t1

0xc0a3,	// (0x000a9000) thumb_sp_fs_scroll_pane_g1

0xc0ac,	// (0x000a9009) thumb_sp_fs_scroll_pane_g2

0xc0b5,	// (0x000a9012) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x000acb84) thumb_sp_fs_scroll_pane_g

0xc0a3,	// (0x000a9000) bg_sp_fs_scroll_pane_g1

0xc0ac,	// (0x000a9009) bg_sp_fs_scroll_pane_g2

0xc0b5,	// (0x000a9012) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc27,	// (0x000acb84) bg_sp_fs_scroll_pane_g

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g1

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g2

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g3

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g4_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c1,	// (0x000ac11e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c1,	// (0x000ac11e) list_medium_line_x2_t3_g4_g

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g4_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g4_t1

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g4_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g4_t2

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g4_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1b5,	// (0x000ac112) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1b5,	// (0x000ac112) list_medium_line_x2_t3_g4_t

0xaa74,	// (0x000a79d1) list_medium_line_g2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_g2_g1

0xaa74,	// (0x000a79d1) list_medium_line_g2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_g2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_g2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_g2_g

0xaac4,	// (0x000a7a21) list_medium_line_g2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_g2_t1

0xaa74,	// (0x000a79d1) list_medium_line_t3_g2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t3_g2_g1

0xaa74,	// (0x000a79d1) list_medium_line_t3_g2_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t3_g2_g2

0x0001,

0xf1bc,	// (0x000ac119) list_medium_line_t3_g2_g_ParamLimits

0xf1bc,	// (0x000ac119) list_medium_line_t3_g2_g

0xaac4,	// (0x000a7a21) list_medium_line_t3_g2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_g2_t1

0xaac4,	// (0x000a7a21) list_medium_line_t3_g2_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_g2_t2

0xaac4,	// (0x000a7a21) list_medium_line_t3_g2_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_g2_t3

0x0002,

0xf1b5,	// (0x000ac112) list_medium_line_t3_g2_t_ParamLimits

0xf1b5,	// (0x000ac112) list_medium_line_t3_g2_t

0xaaba,	// (0x000a7a17) list_medium_line_right_icon_g1

0xb2e3,	// (0x000a8240) list_medium_line_right_icon_t1

0xaa74,	// (0x000a79d1) list_medium_line_t2_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t2_g1

0xaac4,	// (0x000a7a21) list_medium_line_t2_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t2_t1

0xaac4,	// (0x000a7a21) list_medium_line_t2_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t2_t2

0x0001,

0xf191,	// (0x000ac0ee) list_medium_line_t2_t_ParamLimits

0xf191,	// (0x000ac0ee) list_medium_line_t2_t

0xaa74,	// (0x000a79d1) list_medium_line_t3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t3_g1

0xaac4,	// (0x000a7a21) list_medium_line_t3_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_t1

0xaac4,	// (0x000a7a21) list_medium_line_t3_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_t2

0xaac4,	// (0x000a7a21) list_medium_line_t3_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_t3

0x0002,

0xf1b5,	// (0x000ac112) list_medium_line_t3_t_ParamLimits

0xf1b5,	// (0x000ac112) list_medium_line_t3_t

0xaa74,	// (0x000a79d1) list_medium_line_g3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_g3_g1

0xaa74,	// (0x000a79d1) list_medium_line_g3_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_g3_g2

0xaa74,	// (0x000a79d1) list_medium_line_g3_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_g3_g3

0x0002,

0xf1ae,	// (0x000ac10b) list_medium_line_g3_g_ParamLimits

0xf1ae,	// (0x000ac10b) list_medium_line_g3_g

0xaac4,	// (0x000a7a21) list_medium_line_g3_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_g3_t1

0xaa74,	// (0x000a79d1) list_medium_line_t2_g3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t2_g3_g1

0xaa74,	// (0x000a79d1) list_medium_line_t2_g3_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t2_g3_g2

0xaa74,	// (0x000a79d1) list_medium_line_t2_g3_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t2_g3_g3

0x0002,

0xf1ae,	// (0x000ac10b) list_medium_line_t2_g3_g_ParamLimits

0xf1ae,	// (0x000ac10b) list_medium_line_t2_g3_g

0xaac4,	// (0x000a7a21) list_medium_line_t2_g3_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t2_g3_t1

0xaac4,	// (0x000a7a21) list_medium_line_t2_g3_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t2_g3_t2

0x0001,

0xf191,	// (0x000ac0ee) list_medium_line_t2_g3_t_ParamLimits

0xf191,	// (0x000ac0ee) list_medium_line_t2_g3_t

0xaa74,	// (0x000a79d1) list_medium_line_t3_g3_g1_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t3_g3_g1

0xaa74,	// (0x000a79d1) list_medium_line_t3_g3_g2_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t3_g3_g2

0xaa74,	// (0x000a79d1) list_medium_line_t3_g3_g3_ParamLimits

0xaa74,	// (0x000a79d1) list_medium_line_t3_g3_g3

0x0002,

0xf1ae,	// (0x000ac10b) list_medium_line_t3_g3_g_ParamLimits

0xf1ae,	// (0x000ac10b) list_medium_line_t3_g3_g

0xaac4,	// (0x000a7a21) list_medium_line_t3_g3_t1_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_g3_t1

0xaac4,	// (0x000a7a21) list_medium_line_t3_g3_t2_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_g3_t2

0xaac4,	// (0x000a7a21) list_medium_line_t3_g3_t3_ParamLimits

0xaac4,	// (0x000a7a21) list_medium_line_t3_g3_t3

0x0002,

0xf1b5,	// (0x000ac112) list_medium_line_t3_g3_t_ParamLimits

0xf1b5,	// (0x000ac112) list_medium_line_t3_g3_t

0xaaba,	// (0x000a7a17) list_medium_line_right_iconx2_g1

0xaaba,	// (0x000a7a17) list_medium_line_right_iconx2_g2

0x0001,

0xf0af,	// (0x000ac00c) list_medium_line_right_iconx2_g

0xb2e3,	// (0x000a8240) list_medium_line_right_iconx2_t1

0xaaba,	// (0x000a7a17) list_medium_line_t2_right_iconx2_g1

0xaaba,	// (0x000a7a17) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf0af,	// (0x000ac00c) list_medium_line_t2_right_iconx2_g

0xb2e3,	// (0x000a8240) list_medium_line_t2_right_iconx2_t1

0xb2e3,	// (0x000a8240) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfbf4,	// (0x000acb51) list_medium_line_t2_right_iconx2_t

0xb2e3,	// (0x000a8240) list_medium_line_x4_t4_t1

0xb2e3,	// (0x000a8240) list_medium_line_x4_t4_t2

0xb2e3,	// (0x000a8240) list_medium_line_x4_t4_t3

0xb2e3,	// (0x000a8240) list_medium_line_x4_t4_t4

0x0003,

0xf27e,	// (0x000ac1db) list_medium_line_x4_t4_t

0x7d78,	// (0x000a4cd5) tport_appsw_pane_ParamLimits

0x7d78,	// (0x000a4cd5) tport_appsw_pane

0x7d90,	// (0x000a4ced) tport_contact_pane_ParamLimits

0x7d90,	// (0x000a4ced) tport_contact_pane

0x7dab,	// (0x000a4d08) tport_listscroll_pane_ParamLimits

0x7dab,	// (0x000a4d08) tport_listscroll_pane

0x7dc3,	// (0x000a4d20) cell_tport_appsw_pane_ParamLimits

0x7dc3,	// (0x000a4d20) cell_tport_appsw_pane

0xb7e4,	// (0x000a8741) tport_appsw_pane_g1_ParamLimits

0xb7e4,	// (0x000a8741) tport_appsw_pane_g1

0x7e0d,	// (0x000a4d6a) tport_contact_pane_g1

0x7e16,	// (0x000a4d73) tport_contact_pane_t1

0x7e24,	// (0x000a4d81) tport_contact_pane_t2

0x0001,

0xfc2e,	// (0x000acb8b) tport_contact_pane_t

0xc0be,	// (0x000a901b) list_tport_pane

0xc0c7,	// (0x000a9024) scroll_pane_cp_030

0x7e3a,	// (0x000a4d97) cell_tport_appsw_pane_g1

0x7e4a,	// (0x000a4da7) cell_tport_appsw_pane_t1

0x7e58,	// (0x000a4db5) grid_highlight_pane_cp019

0x7e60,	// (0x000a4dbd) list_tport_double_graphic_pane_ParamLimits

0x7e60,	// (0x000a4dbd) list_tport_double_graphic_pane

0xaa1b,	// (0x000a7978) list_highlight_pane_cp023_ParamLimits

0xaa1b,	// (0x000a7978) list_highlight_pane_cp023

0x7e6d,	// (0x000a4dca) list_tport_double_graphic_pane_g1_ParamLimits

0x7e6d,	// (0x000a4dca) list_tport_double_graphic_pane_g1

0x7e7a,	// (0x000a4dd7) list_tport_double_graphic_pane_t1_ParamLimits

0x7e7a,	// (0x000a4dd7) list_tport_double_graphic_pane_t1

0x7e8f,	// (0x000a4dec) list_tport_double_graphic_pane_t2_ParamLimits

0x7e8f,	// (0x000a4dec) list_tport_double_graphic_pane_t2

0x0001,

0xfc3a,	// (0x000acb97) list_tport_double_graphic_pane_t_ParamLimits

0xfc3a,	// (0x000acb97) list_tport_double_graphic_pane_t

0x018c,	// (0x0009d0e9) main_cale_note_pane

0x508c,	// (0x000a1fe9) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x508c,	// (0x000a1fe9) cell_vitu2_function_top_wide_pane_cp01

0x725e,	// (0x000a41bb) wait_bar_pane_cp05_ParamLimits

0xaa1b,	// (0x000a7978) listscroll_cmail_pane

0xc0d8,	// (0x000a9035) list_cmail_pane

0x7ea1,	// (0x000a4dfe) list_cmail_body_pane

0x7eb8,	// (0x000a4e15) list_single_cmail_header_caption_pane

0x7ed2,	// (0x000a4e2f) list_single_cmail_header_detail_pane_ParamLimits

0x7ed2,	// (0x000a4e2f) list_single_cmail_header_detail_pane

0xc0ef,	// (0x000a904c) list_single_cmail_header_caption_pane_t1

0x7f05,	// (0x000a4e62) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7f05,	// (0x000a4e62) list_single_cmail_header_detail_pane_g1

0x7f1d,	// (0x000a4e7a) list_single_cmail_header_detail_pane_g2_ParamLimits

0x7f1d,	// (0x000a4e7a) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc3f,	// (0x000acb9c) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc3f,	// (0x000acb9c) list_single_cmail_header_detail_pane_g

0x7f29,	// (0x000a4e86) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7f29,	// (0x000a4e86) list_single_cmail_header_detail_pane_t1

0x7f89,	// (0x000a4ee6) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7f89,	// (0x000a4ee6) list_single_cmail_header_editor_pane_bg

0x70c8,	// (0x000a4025) list_cmail_body_pane_g1

0xc113,	// (0x000a9070) list_cmail_body_pane_t1

0xeabd,	// (0x000aba1a) list_single_cmail_header_editor_pane_bg_g1

0xaf7b,	// (0x000a7ed8) list_single_cmail_header_editor_pane_bg_g1_copy1

0xeacd,	// (0x000aba2a) list_single_cmail_header_editor_pane_bg_g1_copy2

0xeac5,	// (0x000aba22) list_single_cmail_header_editor_pane_bg_g1_copy3

0xed17,	// (0x000abc74) list_single_cmail_header_editor_pane_bg_g1_copy4

0xeaed,	// (0x000aba4a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xeadd,	// (0x000aba3a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xeae5,	// (0x000aba42) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xaf5b,	// (0x000a7eb8) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7fa0,	// (0x000a4efd) calenote_gesture_pane_ParamLimits

0x7fa0,	// (0x000a4efd) calenote_gesture_pane

0x7fc0,	// (0x000a4f1d) calenote_window_pane_ParamLimits

0x7fc0,	// (0x000a4f1d) calenote_window_pane

0xc121,	// (0x000a907e) popup_note_window_cp01

0x7fdc,	// (0x000a4f39) calenote_swipe_1_pane_ParamLimits

0x7fdc,	// (0x000a4f39) calenote_swipe_1_pane

0x77e1,	// (0x000a473e) calenote_swipe_2_pane_ParamLimits

0x77e1,	// (0x000a473e) calenote_swipe_2_pane

0x77fb,	// (0x000a4758) calenote_swipe_1_pane_g1_ParamLimits

0x77fb,	// (0x000a4758) calenote_swipe_1_pane_g1

0xc133,	// (0x000a9090) calenote_swipe_1_pane_g2_ParamLimits

0xc133,	// (0x000a9090) calenote_swipe_1_pane_g2

0x0001,

0xfc4b,	// (0x000acba8) calenote_swipe_1_pane_g_ParamLimits

0xfc4b,	// (0x000acba8) calenote_swipe_1_pane_g

0xc13f,	// (0x000a909c) calenote_swipe_1_pane_t1_ParamLimits

0xc13f,	// (0x000a909c) calenote_swipe_1_pane_t1

0x77fb,	// (0x000a4758) calenote_swipe_2_pane_g1_ParamLimits

0x77fb,	// (0x000a4758) calenote_swipe_2_pane_g1

0xc15e,	// (0x000a90bb) calenote_swipe_2_pane_g2_ParamLimits

0xc15e,	// (0x000a90bb) calenote_swipe_2_pane_g2

0x0001,

0xfc50,	// (0x000acbad) calenote_swipe_2_pane_g_ParamLimits

0xfc50,	// (0x000acbad) calenote_swipe_2_pane_g

0xc16a,	// (0x000a90c7) calenote_swipe_2_pane_t1_ParamLimits

0xc16a,	// (0x000a90c7) calenote_swipe_2_pane_t1

0x018c,	// (0x0009d0e9) main_mup_navstr_pane

0x3f92,	// (0x000a0eef) main_mup3_pane_t7_ParamLimits

0x3f92,	// (0x000a0eef) main_mup3_pane_t7

0xbc1f,	// (0x000a8b7c) main_mp4_pane_g6_ParamLimits

0xbc1f,	// (0x000a8b7c) main_mp4_pane_g6

0xbe4d,	// (0x000a8daa) main_image3_pane_t4_ParamLimits

0xbe4d,	// (0x000a8daa) main_image3_pane_t4

0x7ff1,	// (0x000a4f4e) popup_navstr_preview_pane_ParamLimits

0x7ff1,	// (0x000a4f4e) popup_navstr_preview_pane

0x8001,	// (0x000a4f5e) scroll_navstr_pane_ParamLimits

0x8001,	// (0x000a4f5e) scroll_navstr_pane

0x018c,	// (0x0009d0e9) bg_popup_preview_window_pane_cp04

0xc191,	// (0x000a90ee) popup_navstr_preview_pane_t1

0x8015,	// (0x000a4f72) scroll_navstr_pane_g1_ParamLimits

0x8015,	// (0x000a4f72) scroll_navstr_pane_g1

0x8029,	// (0x000a4f86) scroll_navstr_pane_t1_ParamLimits

0x8029,	// (0x000a4f86) scroll_navstr_pane_t1

0xc12a,	// (0x000a9087) bg_button_pane_cp014

0xc12a,	// (0x000a9087) bg_button_pane_cp030

0x7627,	// (0x000a4584) list_double_fisheye_pane_g4_ParamLimits

0x7627,	// (0x000a4584) list_double_fisheye_pane_g4

0x7633,	// (0x000a4590) list_double_fisheye_pane_g5_ParamLimits

0x7633,	// (0x000a4590) list_double_fisheye_pane_g5

0x211e,	// (0x0009f07b) sp_fs_scroll_pane_cp03

0x7970,	// (0x000a48cd) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0x797c,	// (0x000a48d9) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfbf9,	// (0x000acb56) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x79bc,	// (0x000a4919) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xc0e7,	// (0x000a9044) sp_fs_scroll_pane_cp02

0xaca1,	// (0x000a7bfe) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaca1,	// (0x000a7bfe) popup_sp_fs_calendar_preview_list_single_pane

0x018c,	// (0x0009d0e9) main_cam6_pano_pane

0xa417,	// (0x000a7374) main_mup3_pane_ParamLimits

0x018c,	// (0x0009d0e9) main_phacti_pane

0x712f,	// (0x000a408c) bg_button_pane_cp11

0x7149,	// (0x000a40a6) main_mobtv_info_pane_g2_ParamLimits

0x7149,	// (0x000a40a6) main_mobtv_info_pane_g2

0x0001,

0xfb5e,	// (0x000acabb) main_mobtv_info_pane_g_ParamLimits

0xfb5e,	// (0x000acabb) main_mobtv_info_pane_g

0xaac4,	// (0x000a7a21) sc_clock_pane_t5_ParamLimits

0xaac4,	// (0x000a7a21) sc_clock_pane_t5

0xb7e4,	// (0x000a8741) main_radioblah_pane_g1_ParamLimits

0xb7f2,	// (0x000a874f) main_radioblah_pane_t3_ParamLimits

0xb7f2,	// (0x000a874f) main_radioblah_pane_t3

0xb7f2,	// (0x000a874f) main_radioblah_pane_t4_ParamLimits

0xb7f2,	// (0x000a874f) main_radioblah_pane_t4

0xaa1b,	// (0x000a7978) main_radioblah_text_pane_ParamLimits

0xaa1b,	// (0x000a7978) main_radioblah_text_pane

0x755d,	// (0x000a44ba) main_radioblah_info_pane_g1_ParamLimits

0x75a1,	// (0x000a44fe) main_radioblah_info_pane_t4_ParamLimits

0x75a1,	// (0x000a44fe) main_radioblah_info_pane_t4

0xaa1b,	// (0x000a7978) main_sp_fs_calendar_pane

0x8040,	// (0x000a4f9d) main_phacti_pane_g1

0x8048,	// (0x000a4fa5) phacti_note_pane_ParamLimits

0x8048,	// (0x000a4fa5) phacti_note_pane

0xc1a8,	// (0x000a9105) phacti_term_pane_ParamLimits

0xc1a8,	// (0x000a9105) phacti_term_pane

0xc1bd,	// (0x000a911a) phacti_note_pane_t1_ParamLimits

0xc1bd,	// (0x000a911a) phacti_note_pane_t1

0x805c,	// (0x000a4fb9) phacti_term_pane_g1

0x8064,	// (0x000a4fc1) phacti_term_pane_t1_ParamLimits

0x8064,	// (0x000a4fc1) phacti_term_pane_t1

0xc1d4,	// (0x000a9131) popup_sp_fs_calendar_preview_list_single_pane_g1

0xc1dc,	// (0x000a9139) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc5a,	// (0x000acbb7) popup_sp_fs_calendar_preview_list_single_pane_g

0xc1e4,	// (0x000a9141) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xc1e4,	// (0x000a9141) popup_sp_fs_calendar_preview_list_single_pane_t1

0xc1fa,	// (0x000a9157) aid_popup_sp_fs_bg_corner_pane

0xaaba,	// (0x000a7a17) popup_sp_fs_calendar_preview_bg_pane_g1

0x018c,	// (0x0009d0e9) popup_sp_fs_calendar_preview_bg_pane

0xc202,	// (0x000a915f) popup_sp_fs_calendar_preview_list_pane

0xb806,	// (0x000a8763) bg_main_sp_fs_cale_pane_ParamLimits

0xb806,	// (0x000a8763) bg_main_sp_fs_cale_pane

0x80f8,	// (0x000a5055) listscroll_cale_mrui_pane_ParamLimits

0x80f8,	// (0x000a5055) listscroll_cale_mrui_pane

0x810d,	// (0x000a506a) listscroll_sp_fs_schedule_track_pane

0x8116,	// (0x000a5073) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0x8116,	// (0x000a5073) main_sp_fs_ctrlbar_pane_cp01

0xc20a,	// (0x000a9167) main_sp_fs_ribbon_pane

0x8129,	// (0x000a5086) popup_sp_fs_cale_preview_window

0x813b,	// (0x000a5098) list_single_sp_fs_schedule_track_pane_ParamLimits

0x813b,	// (0x000a5098) list_single_sp_fs_schedule_track_pane

0xaa1b,	// (0x000a7978) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xaa1b,	// (0x000a7978) bg_sp_fs_highlight_list_pane_cp03

0x814e,	// (0x000a50ab) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x814e,	// (0x000a50ab) list_single_sp_fs_schedule_track_pane_g1

0x815a,	// (0x000a50b7) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x815a,	// (0x000a50b7) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc5f,	// (0x000acbbc) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc5f,	// (0x000acbbc) list_single_sp_fs_schedule_track_pane_g

0x8166,	// (0x000a50c3) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8166,	// (0x000a50c3) list_single_sp_fs_schedule_track_pane_t1

0x8188,	// (0x000a50e5) sp_fs_schedule_track_pane_ParamLimits

0x8188,	// (0x000a50e5) sp_fs_schedule_track_pane

0xc212,	// (0x000a916f) sp_fs_schedule_track_pane_g1

0xc21a,	// (0x000a9177) sp_fs_schedule_track_pane_g2

0xc222,	// (0x000a917f) sp_fs_schedule_track_pane_g3

0xc22a,	// (0x000a9187) sp_fs_schedule_track_pane_g4

0xc232,	// (0x000a918f) sp_fs_schedule_track_pane_g5

0x0004,

0xfc64,	// (0x000acbc1) sp_fs_schedule_track_pane_g

0xeabd,	// (0x000aba1a) bg_sp_fs_schedule_viewer_highlight_g1

0xaf7b,	// (0x000a7ed8) bg_sp_fs_schedule_viewer_highlight_g2

0xeac5,	// (0x000aba22) bg_sp_fs_schedule_viewer_highlight_g3

0xeacd,	// (0x000aba2a) bg_sp_fs_schedule_viewer_highlight_g4

0xed17,	// (0x000abc74) bg_sp_fs_schedule_viewer_highlight_g5

0xeadd,	// (0x000aba3a) bg_sp_fs_schedule_viewer_highlight_g6

0xeae5,	// (0x000aba42) bg_sp_fs_schedule_viewer_highlight_g7

0xeaed,	// (0x000aba4a) bg_sp_fs_schedule_viewer_highlight_g8

0xaf5b,	// (0x000a7eb8) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc6f,	// (0x000acbcc) bg_sp_fs_schedule_viewer_highlight_g

0x018c,	// (0x0009d0e9) bg_main_sp_fs_ribbon_pane

0x819d,	// (0x000a50fa) main_sp_fs_ribbon_pane_g1

0xc23a,	// (0x000a9197) main_sp_fs_ribbon_pane_t1

0x81a6,	// (0x000a5103) main_sp_fs_ribbon_pane_t2

0xc249,	// (0x000a91a6) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc82,	// (0x000acbdf) main_sp_fs_ribbon_pane_t

0xc258,	// (0x000a91b5) main_sp_fs_ribbon_scheduler_pane

0xc260,	// (0x000a91bd) bg_main_sp_fs_ribbon_pane_g1

0xc269,	// (0x000a91c6) bg_main_sp_fs_ribbon_pane_g2

0xc272,	// (0x000a91cf) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfc89,	// (0x000acbe6) bg_main_sp_fs_ribbon_pane_g

0xc27a,	// (0x000a91d7) main_sp_fs_ribbon_scheduler_pane_g1

0xc283,	// (0x000a91e0) main_sp_fs_ribbon_scheduler_pane_g2

0xc28c,	// (0x000a91e9) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfc90,	// (0x000acbed) main_sp_fs_ribbon_scheduler_pane_g

0xc295,	// (0x000a91f2) list_cale_mrui_pane

0x81b5,	// (0x000a5112) sp_fs_scroll_pane_cp07_ParamLimits

0x81b5,	// (0x000a5112) sp_fs_scroll_pane_cp07

0x81d1,	// (0x000a512e) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x81d1,	// (0x000a512e) bg_sp_fs_schedule_viewer_highlight

0xc2a2,	// (0x000a91ff) list_single_sp_fs_schedule_track_pane_cp01

0xc2aa,	// (0x000a9207) list_sp_fs_schedule_track_pane

0xc2b2,	// (0x000a920f) sp_fs_scroll_pane_cp06_ParamLimits

0xc2b2,	// (0x000a920f) sp_fs_scroll_pane_cp06

0xaaba,	// (0x000a7a17) bgmain_sp_fs_calendar_pane_g1

0x81e3,	// (0x000a5140) list_single_cale_mrui_pane_ParamLimits

0x81e3,	// (0x000a5140) list_single_cale_mrui_pane

0x8203,	// (0x000a5160) list_single_cale_mrui_row_pane_ParamLimits

0x8203,	// (0x000a5160) list_single_cale_mrui_row_pane

0x8210,	// (0x000a516d) list_single_cale_mrui_row_pane_g1_ParamLimits

0x8210,	// (0x000a516d) list_single_cale_mrui_row_pane_g1

0x8248,	// (0x000a51a5) list_single_cale_mrui_row_pane_t1_ParamLimits

0x8248,	// (0x000a51a5) list_single_cale_mrui_row_pane_t1

0x825a,	// (0x000a51b7) list_single_cale_mrui_row_pane_t2_ParamLimits

0x825a,	// (0x000a51b7) list_single_cale_mrui_row_pane_t2

0x82c0,	// (0x000a521d) list_single_cale_mrui_row_pane_t3_ParamLimits

0x82c0,	// (0x000a521d) list_single_cale_mrui_row_pane_t3

0x82ef,	// (0x000a524c) list_single_cale_mrui_row_pane_t4_ParamLimits

0x82ef,	// (0x000a524c) list_single_cale_mrui_row_pane_t4

0x0003,

0xfc9e,	// (0x000acbfb) list_single_cale_mrui_row_pane_t_ParamLimits

0xfc9e,	// (0x000acbfb) list_single_cale_mrui_row_pane_t

0x8320,	// (0x000a527d) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8320,	// (0x000a527d) list_single_cmail_header_editor_pane_bg_cp01

0x834c,	// (0x000a52a9) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x834c,	// (0x000a52a9) list_single_cmail_header_editor_pane_bg_cp02

0xc2d1,	// (0x000a922e) main_radioblah_text_pane_t1_ParamLimits

0xc2d1,	// (0x000a922e) main_radioblah_text_pane_t1

0xc2eb,	// (0x000a9248) cam6_indi_pane_cp01

0xc2f3,	// (0x000a9250) cam6_mode_pane_cp01

0xc2fb,	// (0x000a9258) cam6_pano_pane

0xc304,	// (0x000a9261) cam6_zoom_pane_cp01

0xc30e,	// (0x000a926b) cam6_pano_image_pane

0xc317,	// (0x000a9274) cam6_pano_pane_g1

0x70c8,	// (0x000a4025) cam6_pano_pane_g2

0xc320,	// (0x000a927d) cam6_pano_pane_g3

0xc329,	// (0x000a9286) cam6_pano_pane_g4

0xe7ce,	// (0x000ab72b) cam6_pano_pane_g5

0xc332,	// (0x000a928f) cam6_pano_pane_g6

0xc33a,	// (0x000a9297) cam6_pano_pane_g7

0xc342,	// (0x000a929f) cam6_pano_pane_g8

0xc34b,	// (0x000a92a8) cam6_pano_pane_g9

0x0008,

0xfca7,	// (0x000acc04) cam6_pano_pane_g

0x018c,	// (0x0009d0e9) main_browser_tag_pane

0xc189,	// (0x000a90e6) grid_navstr_albumart_pane

0xc356,	// (0x000a92b3) cell_navstr_albumart_pane_ParamLimits

0xc356,	// (0x000a92b3) cell_navstr_albumart_pane

0xc372,	// (0x000a92cf) cell_navstr_albumart_pane_g1

0xdd04,	// (0x000aac61) cell_navstr_albumart_pane_g2

0xdd14,	// (0x000aac71) cell_navstr_albumart_pane_g3

0xdd0c,	// (0x000aac69) cell_navstr_albumart_pane_g4

0x0003,

0xfcba,	// (0x000acc17) cell_navstr_albumart_pane_g

0x836c,	// (0x000a52c9) bt_list_pane_ParamLimits

0x836c,	// (0x000a52c9) bt_list_pane

0x8382,	// (0x000a52df) bt_list_pane_t1

0x8391,	// (0x000a52ee) bt_list_pane_t2

0x0001,

0xfcc3,	// (0x000acc20) bt_list_pane_t

0x018c,	// (0x0009d0e9) main_cale_prevew_pane

0x83a0,	// (0x000a52fd) popup_cale_preview_window_ParamLimits

0x83a0,	// (0x000a52fd) popup_cale_preview_window

0xaa1b,	// (0x000a7978) bg_popup_preview_window_pane_cp05_ParamLimits

0xaa1b,	// (0x000a7978) bg_popup_preview_window_pane_cp05

0xc37a,	// (0x000a92d7) list_cale_preview_pane_ParamLimits

0xc37a,	// (0x000a92d7) list_cale_preview_pane

0x83bd,	// (0x000a531a) list_double_cale_preview_pane_ParamLimits

0x83bd,	// (0x000a531a) list_double_cale_preview_pane

0x83d1,	// (0x000a532e) list_single_cale_preview_pane_ParamLimits

0x83d1,	// (0x000a532e) list_single_cale_preview_pane

0x83e9,	// (0x000a5346) list_single_cale_preview_pane_g1

0x83f1,	// (0x000a534e) list_single_cale_preview_pane_t1_ParamLimits

0x83f1,	// (0x000a534e) list_single_cale_preview_pane_t1

0x8406,	// (0x000a5363) list_double_cale_preview_pane_g1

0x840e,	// (0x000a536b) list_double_cale_preview_pane_t1_ParamLimits

0x840e,	// (0x000a536b) list_double_cale_preview_pane_t1

0x8423,	// (0x000a5380) list_double_cale_preview_pane_t2_ParamLimits

0x8423,	// (0x000a5380) list_double_cale_preview_pane_t2

0x0001,

0xfcc8,	// (0x000acc25) list_double_cale_preview_pane_t_ParamLimits

0xfcc8,	// (0x000acc25) list_double_cale_preview_pane_t

0x018c,	// (0x0009d0e9) main_ezdial_pane

0xaa1b,	// (0x000a7978) main_sp_fs_email_pane_ParamLimits

0x78d5,	// (0x000a4832) cmail_ddmenu_btn01_pane_ParamLimits

0x78d5,	// (0x000a4832) cmail_ddmenu_btn01_pane

0x78e8,	// (0x000a4845) cmail_ddmenu_btn02_pane_ParamLimits

0x78e8,	// (0x000a4845) cmail_ddmenu_btn02_pane

0x7945,	// (0x000a48a2) cmail_ddmenu_btn03_pane_ParamLimits

0x7945,	// (0x000a48a2) cmail_ddmenu_btn03_pane

0x79fb,	// (0x000a4958) main_sp_fs_ctrlbar_pane_ParamLimits

0x7a3a,	// (0x000a4997) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7ea1,	// (0x000a4dfe) list_cmail_body_pane_ParamLimits

0xc0fd,	// (0x000a905a) bg_button_pane_cp12

0xc106,	// (0x000a9063) list_single_cmail_header_detail_pane_g3_ParamLimits

0xc106,	// (0x000a9063) list_single_cmail_header_detail_pane_g3

0x7f65,	// (0x000a4ec2) list_single_cmail_header_detail_pane_t2_ParamLimits

0x7f65,	// (0x000a4ec2) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc46,	// (0x000acba3) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc46,	// (0x000acba3) list_single_cmail_header_detail_pane_t

0x8079,	// (0x000a4fd6) phacti_term_pane_t2_ParamLimits

0x8079,	// (0x000a4fd6) phacti_term_pane_t2

0x0001,

0xfc55,	// (0x000acbb2) phacti_term_pane_t_ParamLimits

0xfc55,	// (0x000acbb2) phacti_term_pane_t

0xc386,	// (0x000a92e3) aid_size_list_single_double

0x843b,	// (0x000a5398) popup_ezdial_listscroll_window

0xc392,	// (0x000a92ef) popup_number_entry_window_cp01

0xad45,	// (0x000a7ca2) bg_popup_call_pane_cp09

0xc39f,	// (0x000a92fc) ezdial_list_pane

0xc3a7,	// (0x000a9304) scroll_pane_cp23

0xb806,	// (0x000a8763) bg_button_pane_cp028_ParamLimits

0xb806,	// (0x000a8763) bg_button_pane_cp028

0x8457,	// (0x000a53b4) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8457,	// (0x000a53b4) cmail_ddmenu_btn01_pane_g1

0x8466,	// (0x000a53c3) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8466,	// (0x000a53c3) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfccd,	// (0x000acc2a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfccd,	// (0x000acc2a) cmail_ddmenu_btn01_pane_g

0xc3af,	// (0x000a930c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xc3af,	// (0x000a930c) cmail_ddmenu_btn01_pane_t1

0xb806,	// (0x000a8763) bg_button_pane_cp029_ParamLimits

0xb806,	// (0x000a8763) bg_button_pane_cp029

0x847c,	// (0x000a53d9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x847c,	// (0x000a53d9) cmail_ddmenu_btn02_pane_g1

0x8497,	// (0x000a53f4) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8497,	// (0x000a53f4) cmail_ddmenu_btn02_pane_t1

0xaa1b,	// (0x000a7978) bg_button_pane_cp031_ParamLimits

0xaa1b,	// (0x000a7978) bg_button_pane_cp031

0x847c,	// (0x000a53d9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x847c,	// (0x000a53d9) cmail_ddmenu_btn03_pane_g1

0x8497,	// (0x000a53f4) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8497,	// (0x000a53f4) cmail_ddmenu_btn03_pane_t1

0xaac4,	// (0x000a7a21) cell_dialer2_keypad_pane_t1_ParamLimits

0xe7fc,	// (0x000ab759) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0xe7fc,	// (0x000ab759) cell_dialer2_keypad_pane_t1_copy1

0x6ccc,	// (0x000a3c29) ncimui_group_button_pane

0xaa1b,	// (0x000a7978) main_sp_fs_calendar_pane_ParamLimits

0x7eb8,	// (0x000a4e15) list_single_cmail_header_caption_pane_ParamLimits

0x80ac,	// (0x000a5009) aid_recal_txt_sm_pane

0x018c,	// (0x0009d0e9) mian_recal_day_pane

0x8129,	// (0x000a5086) popup_sp_fs_cale_preview_window_ParamLimits

0xc3c5,	// (0x000a9322) list_recal_day_pane

0x84da,	// (0x000a5437) list_single_recal_day_pane_ParamLimits

0x84da,	// (0x000a5437) list_single_recal_day_pane

0xc3ec,	// (0x000a9349) list_single_recal_day_pane_g1_ParamLimits

0xc3ec,	// (0x000a9349) list_single_recal_day_pane_g1

0x84ec,	// (0x000a5449) list_single_recal_day_pane_g2_ParamLimits

0x84ec,	// (0x000a5449) list_single_recal_day_pane_g2

0x84f8,	// (0x000a5455) list_single_recal_day_pane_g3_ParamLimits

0x84f8,	// (0x000a5455) list_single_recal_day_pane_g3

0x8504,	// (0x000a5461) list_single_recal_day_pane_g4_ParamLimits

0x8504,	// (0x000a5461) list_single_recal_day_pane_g4

0x8512,	// (0x000a546f) list_single_recal_day_pane_g5_ParamLimits

0x8512,	// (0x000a546f) list_single_recal_day_pane_g5

0x8528,	// (0x000a5485) list_single_recal_day_pane_g6_ParamLimits

0x8528,	// (0x000a5485) list_single_recal_day_pane_g6

0x0004,

0xfcdc,	// (0x000acc39) list_single_recal_day_pane_g_ParamLimits

0xfcdc,	// (0x000acc39) list_single_recal_day_pane_g

0x853c,	// (0x000a5499) list_single_recal_day_pane_t1

0x854e,	// (0x000a54ab) list_single_recal_day_pane_t2

0x0001,

0xfce7,	// (0x000acc44) list_single_recal_day_pane_t

0x8560,	// (0x000a54bd) ncimui_query_button_pane_ParamLimits

0x8560,	// (0x000a54bd) ncimui_query_button_pane

0x8570,	// (0x000a54cd) ncimui_query_button_pane_t1_ParamLimits

0x8570,	// (0x000a54cd) ncimui_query_button_pane_t1

0xc3f8,	// (0x000a9355) ncimui_query_button_pane_t2_ParamLimits

0xc3f8,	// (0x000a9355) ncimui_query_button_pane_t2

0x0001,

0xfcec,	// (0x000acc49) ncimui_query_button_pane_t_ParamLimits

0xfcec,	// (0x000acc49) ncimui_query_button_pane_t

0x8583,	// (0x000a54e0) query_button_pane_ParamLimits

0x8583,	// (0x000a54e0) query_button_pane

0x018c,	// (0x0009d0e9) bg_button_pane_cp0028

0xc40b,	// (0x000a9368) query_button_pane_t1

0x31ea,	// (0x000a0147) main_tport_pane_ParamLimits

0x7d34,	// (0x000a4c91) bg_popup_window_pane_cp01_ParamLimits

0x7d34,	// (0x000a4c91) bg_popup_window_pane_cp01

0x7d4d,	// (0x000a4caa) heading_pane_cp08_ParamLimits

0x7d4d,	// (0x000a4caa) heading_pane_cp08

0x7d63,	// (0x000a4cc0) heading_pane_cp07_ParamLimits

0x7d63,	// (0x000a4cc0) heading_pane_cp07

0x7e3a,	// (0x000a4d97) cell_tport_appsw_pane_g2

0x0002,

0xfc33,	// (0x000acb90) cell_tport_appsw_pane_g

0x276f,	// (0x0009f6cc) input_candi_list_open_g1

0xb183,	// (0x000a80e0) list_cale_time_pane_g6_ParamLimits

0xb183,	// (0x000a80e0) list_cale_time_pane_g6

0x38b1,	// (0x000a080e) aid_size_touch_calib_1_ParamLimits

0x38b1,	// (0x000a080e) aid_size_touch_calib_1

0x38c3,	// (0x000a0820) aid_size_touch_calib_2_ParamLimits

0x38c3,	// (0x000a0820) aid_size_touch_calib_2

0x38db,	// (0x000a0838) aid_size_touch_calib_3_ParamLimits

0x38db,	// (0x000a0838) aid_size_touch_calib_3

0x38f9,	// (0x000a0856) aid_size_touch_calib_4_ParamLimits

0x38f9,	// (0x000a0856) aid_size_touch_calib_4

0x3911,	// (0x000a086e) main_touch_calib_button_group_pane_ParamLimits

0x3911,	// (0x000a086e) main_touch_calib_button_group_pane

0x3929,	// (0x000a0886) main_touch_calib_pane_g1_ParamLimits

0x393b,	// (0x000a0898) main_touch_calib_pane_g2_ParamLimits

0x394d,	// (0x000a08aa) main_touch_calib_pane_g3_ParamLimits

0x395f,	// (0x000a08bc) main_touch_calib_pane_g4_ParamLimits

0xf67f,	// (0x000ac5dc) main_touch_calib_pane_g_ParamLimits

0x3971,	// (0x000a08ce) main_touch_calib_pane_t1_ParamLimits

0x398b,	// (0x000a08e8) main_touch_calib_pane_t2_ParamLimits

0x39a5,	// (0x000a0902) main_touch_calib_pane_t3_ParamLimits

0x39b9,	// (0x000a0916) main_touch_calib_pane_t4_ParamLimits

0x39cf,	// (0x000a092c) main_touch_calib_pane_t5_ParamLimits

0xf688,	// (0x000ac5e5) main_touch_calib_pane_t_ParamLimits

0xe589,	// (0x000ab4e6) list_single_fp_cale_pane_g3_ParamLimits

0xe589,	// (0x000ab4e6) list_single_fp_cale_pane_g3

0xa417,	// (0x000a7374) bg_button_pane_cp012_ParamLimits

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp03_ParamLimits

0x58ad,	// (0x000a280a) cell_vitu2_function_top_pane_g1_ParamLimits

0xa417,	// (0x000a7374) bg_vkb2_func_pane_cp04_ParamLimits

0x6c57,	// (0x000a3bb4) main_ncimui_button_group_pane_ParamLimits

0x6c57,	// (0x000a3bb4) main_ncimui_button_group_pane

0x6cb7,	// (0x000a3c14) main_ncimui_pane_t3_ParamLimits

0x6cb7,	// (0x000a3c14) main_ncimui_pane_t3

0xc19f,	// (0x000a90fc) phacti_button_group_pane

0xc386,	// (0x000a92e3) aid_size_list_single_double_ParamLimits

0x843b,	// (0x000a5398) popup_ezdial_listscroll_window_ParamLimits

0xc392,	// (0x000a92ef) popup_number_entry_window_cp01_ParamLimits

0x8596,	// (0x000a54f3) phacti_button_pane_ParamLimits

0x8596,	// (0x000a54f3) phacti_button_pane

0x018c,	// (0x0009d0e9) bg_button_pane_cp14

0xc419,	// (0x000a9376) phacti_button_pane_t1

0x85a7,	// (0x000a5504) main_touch_calib_button_pane_ParamLimits

0x85a7,	// (0x000a5504) main_touch_calib_button_pane

0xab32,	// (0x000a7a8f) bg_button_pane_cp18_ParamLimits

0xab32,	// (0x000a7a8f) bg_button_pane_cp18

0xc427,	// (0x000a9384) main_touch_calib_button_pane_t1_ParamLimits

0xc427,	// (0x000a9384) main_touch_calib_button_pane_t1

0xc43d,	// (0x000a939a) main_touch_calib_button_pane_t2_ParamLimits

0xc43d,	// (0x000a939a) main_touch_calib_button_pane_t2

0x0001,

0xfcf1,	// (0x000acc4e) main_touch_calib_button_pane_t_ParamLimits

0xfcf1,	// (0x000acc4e) main_touch_calib_button_pane_t

0x018c,	// (0x0009d0e9) cell_ncimui_button_pane

0x018c,	// (0x0009d0e9) bg_button_pane_cp032

0xc45b,	// (0x000a93b8) cell_ncimui_button_pane_t1

0xbe2b,	// (0x000a8d88) image3_infobar_pane_ParamLimits

0xbe2b,	// (0x000a8d88) image3_infobar_pane

0x7355,	// (0x000a42b2) fs_bigclock_status_pane_ParamLimits

0x7355,	// (0x000a42b2) fs_bigclock_status_pane

0x7362,	// (0x000a42bf) main_fs_bigclock_clock_pane_ParamLimits

0x7362,	// (0x000a42bf) main_fs_bigclock_clock_pane

0x7394,	// (0x000a42f1) main_fs_bigclock_indi_pane_ParamLimits

0x7394,	// (0x000a42f1) main_fs_bigclock_indi_pane

0x73d4,	// (0x000a4331) main_fs_bigclock_swipe_pane_ParamLimits

0x73d4,	// (0x000a4331) main_fs_bigclock_swipe_pane

0x018c,	// (0x0009d0e9) main_fs_clock_dumped_data

0x7420,	// (0x000a437d) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x7420,	// (0x000a437d) list_single_fs_bigclock_indicator_pane_g1

0x7439,	// (0x000a4396) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x7439,	// (0x000a4396) list_single_fs_bigclock_indicator_pane_g2

0x7453,	// (0x000a43b0) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x7453,	// (0x000a43b0) list_single_fs_bigclock_indicator_pane_g3

0x746d,	// (0x000a43ca) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x746d,	// (0x000a43ca) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfb92,	// (0x000acaef) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfb92,	// (0x000acaef) list_single_fs_bigclock_indicator_pane_g

0x749c,	// (0x000a43f9) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x749c,	// (0x000a43f9) list_single_fs_bigclock_indicator_pane_t1

0x74c4,	// (0x000a4421) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x74c4,	// (0x000a4421) list_single_fs_bigclock_indicator_pane_t2

0x74ec,	// (0x000a4449) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x74ec,	// (0x000a4449) list_single_fs_bigclock_indicator_pane_t3

0x7514,	// (0x000a4471) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x7514,	// (0x000a4471) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfb9d,	// (0x000acafa) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfb9d,	// (0x000acafa) list_single_fs_bigclock_indicator_pane_t

0xc469,	// (0x000a93c6) image3_infobar_fav_pane_ParamLimits

0xc469,	// (0x000a93c6) image3_infobar_fav_pane

0xc479,	// (0x000a93d6) image3_infobar_loc_pane_ParamLimits

0xc479,	// (0x000a93d6) image3_infobar_loc_pane

0xc48f,	// (0x000a93ec) image3_infobar_time_pane_ParamLimits

0xc48f,	// (0x000a93ec) image3_infobar_time_pane

0xaaba,	// (0x000a7a17) image3_infobar_time_pane_g1

0xc49f,	// (0x000a93fc) image3_infobar_time_pane_t1

0xaaba,	// (0x000a7a17) image3_infobar_loc_pane_g1

0xc4ad,	// (0x000a940a) image3_infobar_loc_pane_g2

0x0001,

0xfcf6,	// (0x000acc53) image3_infobar_loc_pane_g

0xc4b5,	// (0x000a9412) image3_infobar_loc_pane_t1

0xaaba,	// (0x000a7a17) image3_infobar_fav_pane_g1

0xc4c3,	// (0x000a9420) image3_infobar_fav_pane_g2

0x0001,

0xfcfb,	// (0x000acc58) image3_infobar_fav_pane_g

0xc4cb,	// (0x000a9428) fs_bigclock_status_battery_pane

0xc4d4,	// (0x000a9431) fs_bigclock_status_signal_pane

0xc4dd,	// (0x000a943a) fs_bigclock_status_title_pane

0xc4e6,	// (0x000a9443) fs_bigclock_status_signal_pane_g1

0xc4ef,	// (0x000a944c) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd00,	// (0x000acc5d) fs_bigclock_status_signal_pane_g

0xc4f7,	// (0x000a9454) fs_bigclock_status_battery_pane_g1

0xc500,	// (0x000a945d) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd05,	// (0x000acc62) fs_bigclock_status_battery_pane_g

0xc508,	// (0x000a9465) fs_bigclock_status_title_pane_t1

0x85bc,	// (0x000a5519) main_fs_bigclock_clock_pane_g1

0x85bc,	// (0x000a5519) main_fs_bigclock_clock_pane_g2

0x85cf,	// (0x000a552c) main_fs_bigclock_clock_pane_g3

0x85cf,	// (0x000a552c) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd0a,	// (0x000acc67) main_fs_bigclock_clock_pane_g

0x85e6,	// (0x000a5543) main_fs_bigclock_clock_pane_t1

0x85fc,	// (0x000a5559) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd13,	// (0x000acc70) main_fs_bigclock_clock_pane_t

0xc516,	// (0x000a9473) list_single_fs_bigclock_indicator_pane_ParamLimits

0xc516,	// (0x000a9473) list_single_fs_bigclock_indicator_pane

0xc527,	// (0x000a9484) list_single_fs_bigclock_pane_ParamLimits

0xc527,	// (0x000a9484) list_single_fs_bigclock_pane

0xc54d,	// (0x000a94aa) main_fs_bigclock_indicator_pane_t1

0xc55c,	// (0x000a94b9) list_single_fs_bigclock_pane_g1

0xc564,	// (0x000a94c1) list_single_fs_bigclock_pane_t1

0xaaba,	// (0x000a7a17) main_fs_bigclock_swipe_pane_g1

0xc5a7,	// (0x000a9504) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd24,	// (0x000acc81) main_fs_bigclock_swipe_pane_g

0xc5af,	// (0x000a950c) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xc5af,	// (0x000a950c) main_fs_bigclock_swipe_pane_t1

0x212a,	// (0x0009f087) call_type_pane_ParamLimits

0x018c,	// (0x0009d0e9) main_btmg_pane

0x823c,	// (0x000a5199) list_single_cale_mrui_row_pane_g2_ParamLimits

0x823c,	// (0x000a5199) list_single_cale_mrui_row_pane_g2

0x0002,

0xfc97,	// (0x000acbf4) list_single_cale_mrui_row_pane_g_ParamLimits

0xfc97,	// (0x000acbf4) list_single_cale_mrui_row_pane_g

0x84c8,	// (0x000a5425) list_recal_vselct_arw_lo_pane

0xc3e4,	// (0x000a9341) list_recal_vselct_arw_up_pane

0x84d0,	// (0x000a542d) list_recal_vselct_pane

0x865e,	// (0x000a55bb) btmg_button_pane

0x8668,	// (0x000a55c5) main_btmg_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp044

0xc5cc,	// (0x000a9529) btmg_button_pane_t1

0xde56,	// (0x000aadb3) aid_listscroll_gen

0xaa1b,	// (0x000a7978) main_cntbar_detail_pane

0xc0d0,	// (0x000a902d) list_cmail_folder_pane

0x211e,	// (0x0009f07b) sp_fs_scroll_pane_cp03_ParamLimits

0x8672,	// (0x000a55cf) list_single_fs_dyc_pane_cp01_ParamLimits

0x8672,	// (0x000a55cf) list_single_fs_dyc_pane_cp01

0xc5da,	// (0x000a9537) aid_size_cmail_indent

0x868c,	// (0x000a55e9) list_single_dyc_row_pane_cp01

0x86c9,	// (0x000a5626) cntbar_detail_list_pane_ParamLimits

0x86c9,	// (0x000a5626) cntbar_detail_list_pane

0x871b,	// (0x000a5678) main_cntbar_detail_cont_pane_ParamLimits

0x871b,	// (0x000a5678) main_cntbar_detail_cont_pane

0x211e,	// (0x0009f07b) scroll_pane_cp032_ParamLimits

0x211e,	// (0x0009f07b) scroll_pane_cp032

0x872f,	// (0x000a568c) cntbar_detail_list_event_pane_ParamLimits

0x872f,	// (0x000a568c) cntbar_detail_list_event_pane

0x86db,	// (0x000a5638) cntbar_detail_list_shct_pane

0xafc9,	// (0x000a7f26) aid_list_gen

0xc5e3,	// (0x000a9540) aid_scroll

0xc5ec,	// (0x000a9549) aid_size_touch_scroll_bar

0x75f2,	// (0x000a454f) aid_list_double

0x873f,	// (0x000a569c) aid_list_single

0x873f,	// (0x000a569c) aid_list_single_lg

0x8748,	// (0x000a56a5) aid_list_z_g_a_sm

0x8750,	// (0x000a56ad) aid_list_z_g_d

0x8758,	// (0x000a56b5) aid_txt_z_prm

0x8766,	// (0x000a56c3) aid_txt_z_prm_cp01

0x8774,	// (0x000a56d1) aid_txt_z_sec

0x8782,	// (0x000a56df) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8782,	// (0x000a56df) main_cntbar_detail_cont_pane_g1

0x8796,	// (0x000a56f3) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8796,	// (0x000a56f3) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd29,	// (0x000acc86) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd29,	// (0x000acc86) main_cntbar_detail_cont_pane_g

0xc5f5,	// (0x000a9552) main_cntbar_detail_cont_pane_t1

0xc603,	// (0x000a9560) main_cntbar_detail_cont_pane_t2

0xc611,	// (0x000a956e) main_cntbar_detail_cont_pane_t3

0x0002,

0xfd2e,	// (0x000acc8b) main_cntbar_detail_cont_pane_t

0x87a6,	// (0x000a5703) cell_cntbar_detail_list_shct_pane_ParamLimits

0x87a6,	// (0x000a5703) cell_cntbar_detail_list_shct_pane

0xc61f,	// (0x000a957c) cntbar_detail_list_shct_pane_g1

0xc628,	// (0x000a9585) cntbar_detail_list_shct_pane_g2

0x0001,

0xfd35,	// (0x000acc92) cntbar_detail_list_shct_pane_g

0x87b8,	// (0x000a5715) cntbar_detail_list_event_pane_g1_ParamLimits

0x87b8,	// (0x000a5715) cntbar_detail_list_event_pane_g1

0x87c4,	// (0x000a5721) cntbar_detail_list_event_pane_g2_ParamLimits

0x87c4,	// (0x000a5721) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3a,	// (0x000acc97) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3a,	// (0x000acc97) cntbar_detail_list_event_pane_g

0x8832,	// (0x000a578f) cntbar_detail_list_event_pane_t1_ParamLimits

0x8832,	// (0x000a578f) cntbar_detail_list_event_pane_t1

0x8847,	// (0x000a57a4) cntbar_detail_list_event_pane_t2_ParamLimits

0x8847,	// (0x000a57a4) cntbar_detail_list_event_pane_t2

0x0002,

0xfd47,	// (0x000acca4) cntbar_detail_list_event_pane_t_ParamLimits

0xfd47,	// (0x000acca4) cntbar_detail_list_event_pane_t

0xaaba,	// (0x000a7a17) cell_cntbar_detail_list_shct_pane_g1

0x24c4,	// (0x0009f421) navi_pane_mv_g3

0xaa1b,	// (0x000a7978) main_cntbar_detail_pane_ParamLimits

0x018c,	// (0x0009d0e9) main_notif_wgt_pane

0xbba9,	// (0x000a8b06) aid_tch_main_mp4_pane_g4

0xbe21,	// (0x000a8d7e) popup_slider_window_cp02

0x84be,	// (0x000a541b) list_recal_day_event_pane

0x8695,	// (0x000a55f2) cntbar_detail_btn_pane_ParamLimits

0x8695,	// (0x000a55f2) cntbar_detail_btn_pane

0x86ae,	// (0x000a560b) cntbar_detail_btn_pane_cp01_ParamLimits

0x86ae,	// (0x000a560b) cntbar_detail_btn_pane_cp01

0x86db,	// (0x000a5638) cntbar_detail_list_shct_pane_ParamLimits

0x86eb,	// (0x000a5648) cntbar_detail_pane_g1_ParamLimits

0x86eb,	// (0x000a5648) cntbar_detail_pane_g1

0x86ff,	// (0x000a565c) cntbar_detail_pane_t1_ParamLimits

0x86ff,	// (0x000a565c) cntbar_detail_pane_t1

0x87d0,	// (0x000a572d) cntbar_detail_list_event_pane_g3_ParamLimits

0x87d0,	// (0x000a572d) cntbar_detail_list_event_pane_g3

0x87e8,	// (0x000a5745) cntbar_detail_list_event_pane_g4_ParamLimits

0x87e8,	// (0x000a5745) cntbar_detail_list_event_pane_g4

0x8800,	// (0x000a575d) cntbar_detail_list_event_pane_g5_ParamLimits

0x8800,	// (0x000a575d) cntbar_detail_list_event_pane_g5

0x8818,	// (0x000a5775) cntbar_detail_list_event_pane_g6_ParamLimits

0x8818,	// (0x000a5775) cntbar_detail_list_event_pane_g6

0x885c,	// (0x000a57b9) cntbar_detail_list_event_pane_t3_ParamLimits

0x885c,	// (0x000a57b9) cntbar_detail_list_event_pane_t3

0x886e,	// (0x000a57cb) popup_notif_wgt_window_ParamLimits

0x886e,	// (0x000a57cb) popup_notif_wgt_window

0x8887,	// (0x000a57e4) popup_submenu_window_cp01_ParamLimits

0x8887,	// (0x000a57e4) popup_submenu_window_cp01

0xad45,	// (0x000a7ca2) bg_popup_window_pane_cp10

0xc631,	// (0x000a958e) listscroll_notif_wgt_pane

0xc643,	// (0x000a95a0) list_notif_wgt_window

0xc64c,	// (0x000a95a9) scroll_pane_cp033

0x889b,	// (0x000a57f8) list_notif_wgt_row_pane_ParamLimits

0x889b,	// (0x000a57f8) list_notif_wgt_row_pane

0xc655,	// (0x000a95b2) aid_size_list_notif_wgt_del

0xc662,	// (0x000a95bf) list_notif_wgt_row_pane_g1

0xc66e,	// (0x000a95cb) list_notif_wgt_row_pane_g2

0xc67d,	// (0x000a95da) list_notif_wgt_row_pane_g3

0x0002,

0xfd4e,	// (0x000accab) list_notif_wgt_row_pane_g

0xc68a,	// (0x000a95e7) list_notif_wgt_row_pane_t1

0xc6a0,	// (0x000a95fd) list_notif_wgt_row_pane_t2

0xc6b2,	// (0x000a960f) list_notif_wgt_row_pane_t3

0x0002,

0xfd55,	// (0x000accb2) list_notif_wgt_row_pane_t

0xed31,	// (0x000abc8e) list_recal_day_event_pane_g1

0xc6c4,	// (0x000a9621) list_recal_day_event_pane_t1

0x018c,	// (0x0009d0e9) bg_button_pane_cp045

0x88ab,	// (0x000a5808) cntbar_detail_btn_pane_t1

0xb806,	// (0x000a8763) main_callh_pane_ParamLimits

0xb806,	// (0x000a8763) main_callh_pane

0x018c,	// (0x0009d0e9) main_coverflow0_pane

0x018c,	// (0x0009d0e9) main_wgtman_pane

0x73f5,	// (0x000a4352) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x73f5,	// (0x000a4352) main_fs_bigclock_unlock_btn_pane

0x7e32,	// (0x000a4d8f) bg_button_pane_cp16

0x7e42,	// (0x000a4d9f) cell_tport_appsw_pane_g3

0x88b9,	// (0x000a5816) cf0_flow_pane_ParamLimits

0x88b9,	// (0x000a5816) cf0_flow_pane

0xc6d3,	// (0x000a9630) listscroll_cf0_pane

0xc6de,	// (0x000a963b) main_cf0_pane_g1

0x88ce,	// (0x000a582b) main_cf0_pane_t1_ParamLimits

0x88ce,	// (0x000a582b) main_cf0_pane_t1

0x88e5,	// (0x000a5842) main_cf0_pane_t2_ParamLimits

0x88e5,	// (0x000a5842) main_cf0_pane_t2

0x0001,

0xfd61,	// (0x000accbe) main_cf0_pane_t_ParamLimits

0xfd61,	// (0x000accbe) main_cf0_pane_t

0xc6f0,	// (0x000a964d) scroll_pane_cp11

0x88fc,	// (0x000a5859) cf0_flow_pane_g1

0x8908,	// (0x000a5865) cf0_flow_pane_g2

0x0001,

0xfd66,	// (0x000accc3) cf0_flow_pane_g

0x8914,	// (0x000a5871) cf0_flow_pane_t1

0x018c,	// (0x0009d0e9) main_call6_pane

0x018c,	// (0x0009d0e9) main_calllock_pane

0x8926,	// (0x000a5883) call6_btn_grp_pane_ParamLimits

0x8926,	// (0x000a5883) call6_btn_grp_pane

0x8940,	// (0x000a589d) call6_pane_g1_ParamLimits

0x8940,	// (0x000a589d) call6_pane_g1

0x8959,	// (0x000a58b6) popup_call6_1st_window_ParamLimits

0x8959,	// (0x000a58b6) popup_call6_1st_window

0x896d,	// (0x000a58ca) popup_call6_2nd_window_ParamLimits

0x896d,	// (0x000a58ca) popup_call6_2nd_window

0x8981,	// (0x000a58de) cell_call6_btn_pane_ParamLimits

0x8981,	// (0x000a58de) cell_call6_btn_pane

0xad45,	// (0x000a7ca2) bg_popup_call2_in_pane_cp03

0xc6fb,	// (0x000a9658) popup_call6_1st_window_g1

0xc703,	// (0x000a9660) popup_call6_1st_window_g2

0xc70b,	// (0x000a9668) popup_call6_1st_window_g3

0x0002,

0xfd6b,	// (0x000accc8) popup_call6_1st_window_g

0xc713,	// (0x000a9670) popup_call6_1st_window_t1

0xc722,	// (0x000a967f) popup_call6_1st_window_t2

0xc732,	// (0x000a968f) popup_call6_1st_window_t3

0x0002,

0xfd72,	// (0x000acccf) popup_call6_1st_window_t

0xad45,	// (0x000a7ca2) bg_popup_call2_in_pane_cp04

0xc742,	// (0x000a969f) popup_call6_2nd_window_g1

0xc74a,	// (0x000a96a7) popup_call6_2nd_window_g2

0xc752,	// (0x000a96af) popup_call6_2nd_window_g3

0x0002,

0xfd79,	// (0x000accd6) popup_call6_2nd_window_g

0xc75a,	// (0x000a96b7) popup_call6_2nd_window_t1

0xa425,	// (0x000a7382) bg_button_pane_cp15

0xdbdd,	// (0x000aab3a) cell_call6_btn_pane_g1

0xdbe6,	// (0x000aab43) cell_call6_btn_pane_t1

0x8995,	// (0x000a58f2) listscroll_wgtman_pane_ParamLimits

0x8995,	// (0x000a58f2) listscroll_wgtman_pane

0x89b6,	// (0x000a5913) wgtman_btn_pane_ParamLimits

0x89b6,	// (0x000a5913) wgtman_btn_pane

0xb5e1,	// (0x000a853e) aid_scroll_copy1

0xc769,	// (0x000a96c6) list_wgtman_pane

0x89f9,	// (0x000a5956) wgtman_btn_pane_g1_ParamLimits

0x89f9,	// (0x000a5956) wgtman_btn_pane_g1

0x8a25,	// (0x000a5982) wgtman_btn_pane_t1_ParamLimits

0x8a25,	// (0x000a5982) wgtman_btn_pane_t1

0xc773,	// (0x000a96d0) wgtman_btn_pane_t2_ParamLimits

0xc773,	// (0x000a96d0) wgtman_btn_pane_t2

0x0001,

0xfd80,	// (0x000accdd) wgtman_btn_pane_t_ParamLimits

0xfd80,	// (0x000accdd) wgtman_btn_pane_t

0x8a62,	// (0x000a59bf) listrow_wgtman_pane_ParamLimits

0x8a62,	// (0x000a59bf) listrow_wgtman_pane

0x8a76,	// (0x000a59d3) listrow_wgtman_pane_g1

0x8a83,	// (0x000a59e0) listrow_wgtman_pane_g2

0x0001,

0xfd85,	// (0x000acce2) listrow_wgtman_pane_g

0x8aa1,	// (0x000a59fe) listrow_wgtman_pane_t1

0x8ab9,	// (0x000a5a16) listrow_wgtman_pane_t2

0x0001,

0xfd8a,	// (0x000acce7) listrow_wgtman_pane_t

0x8adf,	// (0x000a5a3c) wait_bar_pane_cp09

0xc78a,	// (0x000a96e7) main_calllock_btn_pane

0xc794,	// (0x000a96f1) main_calllock_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp17

0xc7a0,	// (0x000a96fd) main_calllock_btn_pane_g1

0xc7a9,	// (0x000a9706) main_calllock_btn_pane_t1

0x018c,	// (0x0009d0e9) main_dialer3_pane

0x018c,	// (0x0009d0e9) main_fmrd2_pane

0xaaba,	// (0x000a7a17) main_fs_bigclock_unlock_btn_pane_g1

0x8af9,	// (0x000a5a56) main_fs_bigclock_unlock_btn_pane_t1

0x8b07,	// (0x000a5a64) area_fmrd2_info_pane_ParamLimits

0x8b07,	// (0x000a5a64) area_fmrd2_info_pane

0x8b18,	// (0x000a5a75) area_fmrd2_visual_pane_ParamLimits

0x8b18,	// (0x000a5a75) area_fmrd2_visual_pane

0x8b26,	// (0x000a5a83) fmrd2_indi_pane_ParamLimits

0x8b26,	// (0x000a5a83) fmrd2_indi_pane

0x8b33,	// (0x000a5a90) area_fmrd2_visual_pane_g1

0x8b3b,	// (0x000a5a98) area_fmrd2_visual_pane_t1

0x8b4b,	// (0x000a5aa8) area_fmrd2_visual_pane_t2

0x8b5b,	// (0x000a5ab8) area_fmrd2_visual_pane_t3

0x0002,

0xfd94,	// (0x000accf1) area_fmrd2_visual_pane_t

0x8b6b,	// (0x000a5ac8) area_fmrd2_info_pane_g1

0x8b73,	// (0x000a5ad0) area_fmrd2_info_pane_t1

0x8b83,	// (0x000a5ae0) area_fmrd2_info_pane_t2

0x8b93,	// (0x000a5af0) area_fmrd2_info_pane_t3

0x8ba3,	// (0x000a5b00) area_fmrd2_info_pane_t4

0x0003,

0xfd9b,	// (0x000accf8) area_fmrd2_info_pane_t

0x8bb3,	// (0x000a5b10) fmrd2_indi_pane_t1

0x8bc3,	// (0x000a5b20) fmrd2_indi_pane_t2

0x8bd3,	// (0x000a5b30) fmrd2_indi_pane_t3

0x0002,

0xfda4,	// (0x000acd01) fmrd2_indi_pane_t

0x747e,	// (0x000a43db) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x747e,	// (0x000a43db) list_single_fs_bigclock_indicator_pane_g5

0x7533,	// (0x000a4490) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x7533,	// (0x000a4490) list_single_fs_bigclock_indicator_pane_t5

0x808e,	// (0x000a4feb) aid_cell_bcale_month_pane_ParamLimits

0x808e,	// (0x000a4feb) aid_cell_bcale_month_pane

0x80b5,	// (0x000a5012) bcale_month_pane_ParamLimits

0x80b5,	// (0x000a5012) bcale_month_pane

0x80d9,	// (0x000a5036) bcale_preview_pane_ParamLimits

0x80d9,	// (0x000a5036) bcale_preview_pane

0xc564,	// (0x000a94c1) list_single_fs_bigclock_pane_t1_ParamLimits

0xc583,	// (0x000a94e0) list_single_fs_bigclock_pane_t2_ParamLimits

0xc583,	// (0x000a94e0) list_single_fs_bigclock_pane_t2

0x0001,

0xfd1f,	// (0x000acc7c) list_single_fs_bigclock_pane_t_ParamLimits

0xfd1f,	// (0x000acc7c) list_single_fs_bigclock_pane_t

0x8af1,	// (0x000a5a4e) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd8f,	// (0x000accec) main_fs_bigclock_unlock_btn_pane_g

0x8be3,	// (0x000a5b40) aid_dia3_key_size_ParamLimits

0x8be3,	// (0x000a5b40) aid_dia3_key_size

0x8bf7,	// (0x000a5b54) aid_dia3_listrow_size_ParamLimits

0x8bf7,	// (0x000a5b54) aid_dia3_listrow_size

0x8c11,	// (0x000a5b6e) dia3_keypad_fun_pane_ParamLimits

0x8c11,	// (0x000a5b6e) dia3_keypad_fun_pane

0x8c2b,	// (0x000a5b88) dia3_keypad_num_pane_ParamLimits

0x8c2b,	// (0x000a5b88) dia3_keypad_num_pane

0x8c45,	// (0x000a5ba2) dia3_listscroll_pane_ParamLimits

0x8c45,	// (0x000a5ba2) dia3_listscroll_pane

0x8c5b,	// (0x000a5bb8) dia3_numentry_pane_ParamLimits

0x8c5b,	// (0x000a5bb8) dia3_numentry_pane

0xc7b8,	// (0x000a9715) dia3_list_pane

0x8c75,	// (0x000a5bd2) scroll_pane_cp12

0x018c,	// (0x0009d0e9) bg_dia3_numentry_pane

0x8c80,	// (0x000a5bdd) dia3_numentry_pane_t1

0x8c8f,	// (0x000a5bec) cell_dia3_key_num_pane

0x8c97,	// (0x000a5bf4) cell_dia3_key0_fun_pane_ParamLimits

0x8c97,	// (0x000a5bf4) cell_dia3_key0_fun_pane

0x8cab,	// (0x000a5c08) cell_dia3_key1_fun_pane_ParamLimits

0x8cab,	// (0x000a5c08) cell_dia3_key1_fun_pane

0x8cc0,	// (0x000a5c1d) dia3_listrow_pane

0x6edd,	// (0x000a3e3a) bg_dia3_numentry_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp21

0x8cd2,	// (0x000a5c2f) cell_dia3_key_num_pane_t1

0x8ce0,	// (0x000a5c3d) cell_dia3_key_num_pane_t2

0x8ce0,	// (0x000a5c3d) cell_dia3_key_num_pane_t3

0x8ce0,	// (0x000a5c3d) cell_dia3_key_num_pane_t4

0x0003,

0xfdab,	// (0x000acd08) cell_dia3_key_num_pane_t

0x018c,	// (0x0009d0e9) bg_button_pane_cp19

0x8cef,	// (0x000a5c4c) cell_dia3_key0_fun_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp20

0x8cf7,	// (0x000a5c54) cell_dia3_key1_fun_pane_g1

0x8cff,	// (0x000a5c5c) area_left_week_number_pane

0x8d0d,	// (0x000a5c6a) area_top_day_name_pane

0x8d20,	// (0x000a5c7d) frame_month_view_pane

0xc7c3,	// (0x000a9720) grid_month_view_pane

0x8d35,	// (0x000a5c92) cell_top_day_name_pane_ParamLimits

0x8d35,	// (0x000a5c92) cell_top_day_name_pane

0x8d64,	// (0x000a5cc1) cell_area_left_week_number_pane_ParamLimits

0x8d64,	// (0x000a5cc1) cell_area_left_week_number_pane

0x8d7a,	// (0x000a5cd7) cell_month_view_pane_ParamLimits

0x8d7a,	// (0x000a5cd7) cell_month_view_pane

0xc7d1,	// (0x000a972e) frm_month_g1

0x8dab,	// (0x000a5d08) frm_month_g2

0x8dbe,	// (0x000a5d1b) frm_month_g3

0x8dd1,	// (0x000a5d2e) frm_month_g4

0x8de4,	// (0x000a5d41) frm_month_g5

0x8df7,	// (0x000a5d54) frm_month_g6

0x8e0c,	// (0x000a5d69) frm_month_g7

0xc7de,	// (0x000a973b) frm_month_g8

0x8e21,	// (0x000a5d7e) frm_month_g9

0x8e31,	// (0x000a5d8e) frm_month_g10

0x8e41,	// (0x000a5d9e) frm_month_g11

0x8e51,	// (0x000a5dae) frm_month_g12

0x8e63,	// (0x000a5dc0) frm_month_g13

0x8e77,	// (0x000a5dd4) frm_month_g14

0x8e8b,	// (0x000a5de8) frm_month_g15

0x8e9f,	// (0x000a5dfc) frm_month_g16

0x000f,

0xfdb4,	// (0x000acd11) frm_month_g

0xc7eb,	// (0x000a9748) cell_top_day_name_pane_t1

0x8eb3,	// (0x000a5e10) cell_area_left_week_number_pane_g1

0x8ebf,	// (0x000a5e1c) cell_area_left_week_number_pane_t1

0xaa74,	// (0x000a79d1) cell_month_view_pane_g1

0x8ed2,	// (0x000a5e2f) cell_month_view_pane_t1

0x018c,	// (0x0009d0e9) main_fps_pane

0x790b,	// (0x000a4868) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0x790b,	// (0x000a4868) cmail_ddmenu_btn02_pane_cp1

0x7927,	// (0x000a4884) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0x7927,	// (0x000a4884) cmail_ddmenu_btn02_pane_cp2

0x848b,	// (0x000a53e8) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x848b,	// (0x000a53e8) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfcd2,	// (0x000acc2f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfcd2,	// (0x000acc2f) cmail_ddmenu_btn02_pane_g

0x84ac,	// (0x000a5409) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x84ac,	// (0x000a5409) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfcd7,	// (0x000acc34) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfcd7,	// (0x000acc34) cmail_ddmenu_btn02_pane_t

0x8ee5,	// (0x000a5e42) fps_text_pane_ParamLimits

0x8ee5,	// (0x000a5e42) fps_text_pane

0x8efc,	// (0x000a5e59) main_fps_pane_g1_ParamLimits

0x8efc,	// (0x000a5e59) main_fps_pane_g1

0x8f14,	// (0x000a5e71) wait_bar_pane_cp010_ParamLimits

0x8f14,	// (0x000a5e71) wait_bar_pane_cp010

0x8f27,	// (0x000a5e84) fps_text_pane_t1_ParamLimits

0x8f27,	// (0x000a5e84) fps_text_pane_t1

0xbeb7,	// (0x000a8e14) cam4_image_uncrop_pane_g1

0xbec0,	// (0x000a8e1d) cam4_image_uncrop_pane_g2

0x4d96,	// (0x000a1cf3) cam4_image_uncrop_pane_g3

0x4d9f,	// (0x000a1cfc) cam4_image_uncrop_pane_g4

0x0003,

0xf816,	// (0x000ac773) cam4_image_uncrop_pane_g

0x8cc0,	// (0x000a5c1d) dia3_listrow_pane_ParamLimits

0x018c,	// (0x0009d0e9) main_phob2_pane

0x7ddc,	// (0x000a4d39) cell_tport_appsw_pane_cp02_ParamLimits

0x7ddc,	// (0x000a4d39) cell_tport_appsw_pane_cp02

0x7df0,	// (0x000a4d4d) cell_tport_appsw_pane_cp03_ParamLimits

0x7df0,	// (0x000a4d4d) cell_tport_appsw_pane_cp03

0x018c,	// (0x0009d0e9) phob2_contact_card_pane

0x018c,	// (0x0009d0e9) phob2_listscroll_pane

0xc7fe,	// (0x000a975b) phob2_list_pane

0xc806,	// (0x000a9763) scroll_pane_cp034

0x8f3f,	// (0x000a5e9c) phob2_cc_data_pane_ParamLimits

0x8f3f,	// (0x000a5e9c) phob2_cc_data_pane

0x8f58,	// (0x000a5eb5) phob2_cc_listscroll_pane_ParamLimits

0x8f58,	// (0x000a5eb5) phob2_cc_listscroll_pane

0x8f79,	// (0x000a5ed6) list_double_large_graphic_phob2_pane_ParamLimits

0x8f79,	// (0x000a5ed6) list_double_large_graphic_phob2_pane

0x8f8d,	// (0x000a5eea) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8f8d,	// (0x000a5eea) list_double_large_graphic_phob2_pane_g1

0x8f9a,	// (0x000a5ef7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8f9a,	// (0x000a5ef7) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdd5,	// (0x000acd32) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdd5,	// (0x000acd32) list_double_large_graphic_phob2_pane_g

0x8fc0,	// (0x000a5f1d) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8fc0,	// (0x000a5f1d) list_double_large_graphic_phob2_pane_t1

0x8fd5,	// (0x000a5f32) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8fd5,	// (0x000a5f32) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfdde,	// (0x000acd3b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfdde,	// (0x000acd3b) list_double_large_graphic_phob2_pane_t

0x018c,	// (0x0009d0e9) list_highlight_pane_cp024

0x8fea,	// (0x000a5f47) phob2_cc_button_pane

0x8ff6,	// (0x000a5f53) phob2_cc_data_pane_g1_ParamLimits

0x8ff6,	// (0x000a5f53) phob2_cc_data_pane_g1

0x900c,	// (0x000a5f69) phob2_cc_data_pane_g2_ParamLimits

0x900c,	// (0x000a5f69) phob2_cc_data_pane_g2

0x0001,

0xfde3,	// (0x000acd40) phob2_cc_data_pane_g_ParamLimits

0xfde3,	// (0x000acd40) phob2_cc_data_pane_g

0x9024,	// (0x000a5f81) phob2_cc_data_pane_t1_ParamLimits

0x9024,	// (0x000a5f81) phob2_cc_data_pane_t1

0x9054,	// (0x000a5fb1) phob2_cc_data_pane_t2_ParamLimits

0x9054,	// (0x000a5fb1) phob2_cc_data_pane_t2

0x9084,	// (0x000a5fe1) phob2_cc_data_pane_t3_ParamLimits

0x9084,	// (0x000a5fe1) phob2_cc_data_pane_t3

0x0002,

0xfde8,	// (0x000acd45) phob2_cc_data_pane_t_ParamLimits

0xfde8,	// (0x000acd45) phob2_cc_data_pane_t

0xc80e,	// (0x000a976b) phob2_cc_list_pane_ParamLimits

0xc80e,	// (0x000a976b) phob2_cc_list_pane

0x5c40,	// (0x000a2b9d) scroll_pane_cp035_ParamLimits

0x5c40,	// (0x000a2b9d) scroll_pane_cp035

0xaa1b,	// (0x000a7978) bg_button_pane_cp033

0x90b4,	// (0x000a6011) phob2_cc_button_pane_g1

0x90c0,	// (0x000a601d) phob2_cc_button_pane_t1

0x90d5,	// (0x000a6032) phob2_cc_button_pane_t2

0x0001,

0xfdef,	// (0x000acd4c) phob2_cc_button_pane_t

0x90e7,	// (0x000a6044) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x90e7,	// (0x000a6044) list_double_large_graphic_phob2_cc_pane

0x911e,	// (0x000a607b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x911e,	// (0x000a607b) list_double_large_graphic_phob2_cc_pane_g1

0x912a,	// (0x000a6087) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x912a,	// (0x000a6087) list_double_large_graphic_phob2_cc_pane_g2

0x9136,	// (0x000a6093) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9136,	// (0x000a6093) list_double_large_graphic_phob2_cc_pane_g3

0x9142,	// (0x000a609f) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9142,	// (0x000a609f) list_double_large_graphic_phob2_cc_pane_g4

0x914e,	// (0x000a60ab) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x914e,	// (0x000a60ab) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf4,	// (0x000acd51) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf4,	// (0x000acd51) list_double_large_graphic_phob2_cc_pane_g

0x915a,	// (0x000a60b7) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x915a,	// (0x000a60b7) list_double_large_graphic_phob2_cc_pane_t1

0x9183,	// (0x000a60e0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9183,	// (0x000a60e0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfdff,	// (0x000acd5c) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfdff,	// (0x000acd5c) list_double_large_graphic_phob2_cc_pane_t

0xc81a,	// (0x000a9777) list_highlight_pane_cp025_ParamLimits

0xc81a,	// (0x000a9777) list_highlight_pane_cp025

0xaa1b,	// (0x000a7978) bg_button_pane_cp033_ParamLimits

0x90b4,	// (0x000a6011) phob2_cc_button_pane_g1_ParamLimits

0x90c0,	// (0x000a601d) phob2_cc_button_pane_t1_ParamLimits

0x90d5,	// (0x000a6032) phob2_cc_button_pane_t2_ParamLimits

0xfdef,	// (0x000acd4c) phob2_cc_button_pane_t_ParamLimits

0x03b4,	// (0x0009d311) popup_wgtman_window

0xec01,	// (0x000abb5e) scroll_pane_cp038

0x89db,	// (0x000a5938) wgtman_btn_pane_cp_01_ParamLimits

0x89db,	// (0x000a5938) wgtman_btn_pane_cp_01

0xc828,	// (0x000a9785) wgtman_content_pane

0xc831,	// (0x000a978e) wgtman_heading_pane

0x018c,	// (0x0009d0e9) bg_heading_pane_cp02

0xc83a,	// (0x000a9797) wgtman_heading_pane_g1

0xc842,	// (0x000a979f) wgtman_heading_pane_t1

0xc850,	// (0x000a97ad) scroll_pane_cp036

0xc858,	// (0x000a97b5) wgtman_list_pane

0xc075,	// (0x000a8fd2) wgtman_list_pane_t1_ParamLimits

0xc075,	// (0x000a8fd2) wgtman_list_pane_t1

0xbea1,	// (0x000a8dfe) cam4_grid_pane

0x5a4d,	// (0x000a29aa) bg_button_pane_cp015_ParamLimits

0x5a64,	// (0x000a29c1) bg_button_pane_cp016_ParamLimits

0x5a70,	// (0x000a29cd) bg_button_pane_cp017_ParamLimits

0x5acb,	// (0x000a2a28) popup_vitu2_query_window_g3_ParamLimits

0x5acb,	// (0x000a2a28) popup_vitu2_query_window_g3

0x5b6e,	// (0x000a2acb) popup_vitu2_query_window_t6_ParamLimits

0x5b6e,	// (0x000a2acb) popup_vitu2_query_window_t6

0x5b99,	// (0x000a2af6) popup_vitu2_query_window_t7_ParamLimits

0x5b99,	// (0x000a2af6) popup_vitu2_query_window_t7

0xbeb7,	// (0x000a8e14) cam4_grid_pane_g1

0xbec0,	// (0x000a8e1d) cam4_grid_pane_g2

0xc860,	// (0x000a97bd) cam4_grid_pane_g3

0xc869,	// (0x000a97c6) cam4_grid_pane_g4

0x0003,

0xfe04,	// (0x000acd61) cam4_grid_pane_g

0x0fc9,	// (0x0009df26) aid_placing_vt_slider_lsc_ParamLimits

0x12b6,	// (0x0009e213) vidtel_button_pane_ParamLimits

0x12b6,	// (0x0009e213) vidtel_button_pane

0x018c,	// (0x0009d0e9) bg_button_pane_cp034

0xc874,	// (0x000a97d1) vidtel_button_pane_g1

0xc87c,	// (0x000a97d9) vidtel_button_pane_t1

0xed0f,	// (0x000abc6c) aid_size_vtel_slider_touch

0x5c40,	// (0x000a2b9d) scroll_pane_cp039

0x6f4c,	// (0x000a3ea9) ncim_query_button_pane_cp01_ParamLimits

0x6f6b,	// (0x000a3ec8) ncimui_query_pane_g1_ParamLimits

0xaa1b,	// (0x000a7978) input_focus_pane_cp012_ParamLimits

0x6f90,	// (0x000a3eed) ncim_query_entry_pane_t1_ParamLimits

0x5c40,	// (0x000a2b9d) scroll_pane_cp039_ParamLimits

0x2436,	// (0x0009f393) navi_pane_bcale_mc_g1

0x243e,	// (0x0009f39b) navi_pane_bcale_mc_t1

0x7a1f,	// (0x000a497c) main_sp_fs_email_pane_g1

0x7a2b,	// (0x000a4988) main_sp_fs_email_pane_g2

0x0001,

0xfc02,	// (0x000acb5f) main_sp_fs_email_pane_g

0xc2c4,	// (0x000a9221) list_single_cale_mrui_row_pane_g3_ParamLimits

0xc2c4,	// (0x000a9221) list_single_cale_mrui_row_pane_g3

0x851e,	// (0x000a547b) list_single_recal_day_pane_g5_event_pane

0x8534,	// (0x000a5491) list_single_recal_day_pane_g7

0xc892,	// (0x000a97ef) list_recal_day_event_pane_cp01

0xc89b,	// (0x000a97f8) list_recal_vselct_arw_lo_pane_cp01

0xc8a3,	// (0x000a9800) list_recal_vselct_arw_up_pane_cp01

0xc8ab,	// (0x000a9808) list_recal_vselct_pane_cp01

0xed31,	// (0x000abc8e) list_recal_day_event_pane_cp01_g1

0x91ac,	// (0x000a6109) list_recal_day_event_pane_cp01_t1

0x853c,	// (0x000a5499) list_single_recal_day_pane_t1_ParamLimits

0x854e,	// (0x000a54ab) list_single_recal_day_pane_t2_ParamLimits

0xfce7,	// (0x000acc44) list_single_recal_day_pane_t_ParamLimits

0xa9f9,	// (0x000a7956) bg_notes_pane_ParamLimits

0xaaf6,	// (0x000a7a53) list_notes_pane_ParamLimits

0x05b3,	// (0x0009d510) scroll_pane_cp06_ParamLimits

0xab32,	// (0x000a7a8f) main_notes_pane_ParamLimits

0xaa1b,	// (0x000a7978) main_welc_pane

0x91e8,	// (0x000a6145) main_welc_body_pane_ParamLimits

0x91e8,	// (0x000a6145) main_welc_body_pane

0x9207,	// (0x000a6164) main_welc_opti_pane_ParamLimits

0x9207,	// (0x000a6164) main_welc_opti_pane

0x9295,	// (0x000a61f2) main_welc_pane_t1_ParamLimits

0x9295,	// (0x000a61f2) main_welc_pane_t1

0x94bd,	// (0x000a641a) main_welc_body_row_pane_ParamLimits

0x94bd,	// (0x000a641a) main_welc_body_row_pane

0x050f,	// (0x0009d46c) main_welc_opti_row_pane_ParamLimits

0x050f,	// (0x0009d46c) main_welc_opti_row_pane

0xc8c5,	// (0x000a9822) main_welc_opti_row_pane_g1

0x94d1,	// (0x000a642e) main_welc_opti_row_pane_t1

0xc8cd,	// (0x000a982a) main_welc_body_row_pane_t1

0xc63b,	// (0x000a9598) popup_notif_wgt_heading_pane

0xc655,	// (0x000a95b2) aid_size_list_notif_wgt_del_ParamLimits

0xc662,	// (0x000a95bf) list_notif_wgt_row_pane_g1_ParamLimits

0xc66e,	// (0x000a95cb) list_notif_wgt_row_pane_g2_ParamLimits

0xc67d,	// (0x000a95da) list_notif_wgt_row_pane_g3_ParamLimits

0xfd4e,	// (0x000accab) list_notif_wgt_row_pane_g_ParamLimits

0xc68a,	// (0x000a95e7) list_notif_wgt_row_pane_t1_ParamLimits

0xc6a0,	// (0x000a95fd) list_notif_wgt_row_pane_t2_ParamLimits

0xc6b2,	// (0x000a960f) list_notif_wgt_row_pane_t3_ParamLimits

0xfd55,	// (0x000accb2) list_notif_wgt_row_pane_t_ParamLimits

0x8a76,	// (0x000a59d3) listrow_wgtman_pane_g1_ParamLimits

0x8a83,	// (0x000a59e0) listrow_wgtman_pane_g2_ParamLimits

0xfd85,	// (0x000acce2) listrow_wgtman_pane_g_ParamLimits

0x8aa1,	// (0x000a59fe) listrow_wgtman_pane_t1_ParamLimits

0x8ab9,	// (0x000a5a16) listrow_wgtman_pane_t2_ParamLimits

0xfd8a,	// (0x000acce7) listrow_wgtman_pane_t_ParamLimits

0x8adf,	// (0x000a5a3c) wait_bar_pane_cp09_ParamLimits

0x018c,	// (0x0009d0e9) bg_popup_heading_pane_cp02

0xc8dc,	// (0x000a9839) popup_notif_wgt_heading_pane_g1

0xc8e4,	// (0x000a9841) popup_notif_wgt_heading_pane_t1

0x018c,	// (0x0009d0e9) main_vids_pane

0x018c,	// (0x0009d0e9) vids_listscroll_pane

0x94e0,	// (0x000a643d) scroll_pane_cp040

0x018c,	// (0x0009d0e9) vids_list_pane

0x94eb,	// (0x000a6448) vids_list_double_pane_ParamLimits

0x94eb,	// (0x000a6448) vids_list_double_pane

0x94fe,	// (0x000a645b) vids_list_double_pane_g1

0x9507,	// (0x000a6464) vids_list_double_pane_t1

0x9517,	// (0x000a6474) vids_list_double_pane_t2

0x0001,

0xfe23,	// (0x000acd80) vids_list_double_pane_t

0xa417,	// (0x000a7374) main_ncimui_pane_ParamLimits

0x6c6b,	// (0x000a3bc8) main_ncimui_pane_g1_ParamLimits

0x6c77,	// (0x000a3bd4) main_ncimui_pane_g2_ParamLimits

0x6c77,	// (0x000a3bd4) main_ncimui_pane_g2

0x0001,

0xfb08,	// (0x000aca65) main_ncimui_pane_g_ParamLimits

0xfb08,	// (0x000aca65) main_ncimui_pane_g

0x9226,	// (0x000a6183) main_welc_pane_g1_ParamLimits

0x9226,	// (0x000a6183) main_welc_pane_g1

0x923b,	// (0x000a6198) main_welc_pane_g2_ParamLimits

0x923b,	// (0x000a6198) main_welc_pane_g2

0x0003,

0xfe0d,	// (0x000acd6a) main_welc_pane_g_ParamLimits

0xfe0d,	// (0x000acd6a) main_welc_pane_g

0xa9f9,	// (0x000a7956) listscroll_mce_pane_ParamLimits

0x2516,	// (0x0009f473) wait_bar_pane_cp10

0xde5e,	// (0x000aadbb) main_cale_day_pane_ParamLimits

0xde5e,	// (0x000aadbb) main_cale_week_pane_ParamLimits

0xa9f9,	// (0x000a7956) main_messa_pane_ParamLimits

0x4244,	// (0x000a11a1) main_clock2_btn_pane_ParamLimits

0x4244,	// (0x000a11a1) main_clock2_btn_pane

0xe603,	// (0x000ab560) main_clock2_btn_pane_cp01_ParamLimits

0xe603,	// (0x000ab560) main_clock2_btn_pane_cp01

0xc295,	// (0x000a91f2) list_cale_mrui_pane_ParamLimits

0xc6e8,	// (0x000a9645) main_cf0_pane_g2

0x0001,

0xfd5c,	// (0x000accb9) main_cf0_pane_g

0x8cff,	// (0x000a5c5c) area_left_week_number_pane_ParamLimits

0x8d0d,	// (0x000a5c6a) area_top_day_name_pane_ParamLimits

0x8d20,	// (0x000a5c7d) frame_month_view_pane_ParamLimits

0xc7c3,	// (0x000a9720) grid_month_view_pane_ParamLimits

0xc7d1,	// (0x000a972e) frm_month_g1_ParamLimits

0x8dab,	// (0x000a5d08) frm_month_g2_ParamLimits

0x8dbe,	// (0x000a5d1b) frm_month_g3_ParamLimits

0x8dd1,	// (0x000a5d2e) frm_month_g4_ParamLimits

0x8de4,	// (0x000a5d41) frm_month_g5_ParamLimits

0x8df7,	// (0x000a5d54) frm_month_g6_ParamLimits

0x8e0c,	// (0x000a5d69) frm_month_g7_ParamLimits

0xc7de,	// (0x000a973b) frm_month_g8_ParamLimits

0x8e21,	// (0x000a5d7e) frm_month_g9_ParamLimits

0x8e31,	// (0x000a5d8e) frm_month_g10_ParamLimits

0x8e41,	// (0x000a5d9e) frm_month_g11_ParamLimits

0x8e51,	// (0x000a5dae) frm_month_g12_ParamLimits

0x8e63,	// (0x000a5dc0) frm_month_g13_ParamLimits

0x8e77,	// (0x000a5dd4) frm_month_g14_ParamLimits

0x8e8b,	// (0x000a5de8) frm_month_g15_ParamLimits

0x8e9f,	// (0x000a5dfc) frm_month_g16_ParamLimits

0xfdb4,	// (0x000acd11) frm_month_g_ParamLimits

0xc7eb,	// (0x000a9748) cell_top_day_name_pane_t1_ParamLimits

0x8eb3,	// (0x000a5e10) cell_area_left_week_number_pane_g1_ParamLimits

0x8ebf,	// (0x000a5e1c) cell_area_left_week_number_pane_t1_ParamLimits

0xaa74,	// (0x000a79d1) cell_month_view_pane_g1_ParamLimits

0x8ed2,	// (0x000a5e2f) cell_month_view_pane_t1_ParamLimits

0xa9f1,	// (0x000a794e) main_clock2_btn_pane_g1

0xc8f2,	// (0x000a984f) main_clock2_btn_pane_t1

0xaa1b,	// (0x000a7978) listscroll_cmail_pane_ParamLimits

0x7a1f,	// (0x000a497c) main_sp_fs_email_pane_g1_ParamLimits

0x7a2b,	// (0x000a4988) main_sp_fs_email_pane_g2_ParamLimits

0xfc02,	// (0x000acb5f) main_sp_fs_email_pane_g_ParamLimits

0xc3c5,	// (0x000a9322) list_recal_day_pane_ParamLimits

0xc3d6,	// (0x000a9333) mian_recal_day_pane_t1

0x7c0b,	// (0x000a4b68) list_single_dyc_row_text_pane_t4_ParamLimits

0x7c0b,	// (0x000a4b68) list_single_dyc_row_text_pane_t4

0x7c54,	// (0x000a4bb1) list_single_dyc_row_text_pane_t5_ParamLimits

0x7c54,	// (0x000a4bb1) list_single_dyc_row_text_pane_t5

0x7cca,	// (0x000a4c27) list_single_dyc_row_text_pane_t6_ParamLimits

0x7cca,	// (0x000a4c27) list_single_dyc_row_text_pane_t6

0x2079,	// (0x0009efd6) aid_mgn_list_cale_time_pane

0xa417,	// (0x000a7374) main_gallery2_pane_ParamLimits

0xe617,	// (0x000ab574) main_clock2_pane_cp01_t1

0xe625,	// (0x000ab582) main_clock2_pane_cp01_t3

0x0001,

0xf6f2,	// (0x000ac64f) main_clock2_pane_cp01_t

0x09d1,	// (0x0009d92e) cale_week_scroll_pane_g16_ParamLimits

0x09d1,	// (0x0009d92e) cale_week_scroll_pane_g16

0xad45,	// (0x000a7ca2) vorec_slider_pane

0xc87c,	// (0x000a97d9) vidtel_button_pane_t1_ParamLimits

0x85bc,	// (0x000a5519) main_fs_bigclock_clock_pane_g1_ParamLimits

0x85bc,	// (0x000a5519) main_fs_bigclock_clock_pane_g2_ParamLimits

0x85cf,	// (0x000a552c) main_fs_bigclock_clock_pane_g3_ParamLimits

0x85cf,	// (0x000a552c) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd0a,	// (0x000acc67) main_fs_bigclock_clock_pane_g_ParamLimits

0x85e6,	// (0x000a5543) main_fs_bigclock_clock_pane_t1_ParamLimits

0x85fc,	// (0x000a5559) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd13,	// (0x000acc70) main_fs_bigclock_clock_pane_t_ParamLimits

0x3a91,	// (0x000a09ee) main_mup3_lyrics_pane_ParamLimits

0x3a91,	// (0x000a09ee) main_mup3_lyrics_pane

0x953f,	// (0x000a649c) main_mup3_lyrics_pane_t1_ParamLimits

0x953f,	// (0x000a649c) main_mup3_lyrics_pane_t1

0xbb93,	// (0x000a8af0) aid_main_mp4_pane_t1_area

0xbb9d,	// (0x000a8afa) aid_main_mp4_pane_t2_area

0xbc47,	// (0x000a8ba4) main_mp4_pane_g7_ParamLimits

0xbc47,	// (0x000a8ba4) main_mp4_pane_g7

0xbc53,	// (0x000a8bb0) main_mp4_pane_g8_ParamLimits

0xbc53,	// (0x000a8bb0) main_mp4_pane_g8

0x4b5d,	// (0x000a1aba) aid_call6_pane_g1_size

0x9106,	// (0x000a6063) list_double_large_graphic_phob2_other_pane_ParamLimits

0x9106,	// (0x000a6063) list_double_large_graphic_phob2_other_pane

0xb10b,	// (0x000a8068) list_double_large_graphic_phob2_other_pane_g1

0x018c,	// (0x0009d0e9) list_highlight_pane_cp026

0xaa1b,	// (0x000a7978) main_welc_pane_ParamLimits

0x7988,	// (0x000a48e5) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7988,	// (0x000a48e5) main_sp_fs_ctrlbar_pane_g3

0x79a2,	// (0x000a48ff) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x79a2,	// (0x000a48ff) main_sp_fs_ctrlbar_pane_g4

0x79d6,	// (0x000a4933) toolbar2_fixed_button_pane_cp01

0x79e1,	// (0x000a493e) toolbar2_fixed_button_pane_cp02

0x79ee,	// (0x000a494b) toolbar2_fixed_button_pane_cp03

0x91cd,	// (0x000a612a) list_welc_entry_pane_ParamLimits

0x91cd,	// (0x000a612a) list_welc_entry_pane

0x9250,	// (0x000a61ad) main_welc_pane_g3_ParamLimits

0x9250,	// (0x000a61ad) main_welc_pane_g3

0x92b7,	// (0x000a6214) main_welc_pane_t2_ParamLimits

0x92b7,	// (0x000a6214) main_welc_pane_t2

0x92da,	// (0x000a6237) main_welc_pane_t3_ParamLimits

0x92da,	// (0x000a6237) main_welc_pane_t3

0x0005,

0xfe16,	// (0x000acd73) main_welc_pane_t_ParamLimits

0xfe16,	// (0x000acd73) main_welc_pane_t

0x9412,	// (0x000a636f) welc_button_pane_ParamLimits

0x9412,	// (0x000a636f) welc_button_pane

0x94a5,	// (0x000a6402) welc_service_logo_pane_ParamLimits

0x94a5,	// (0x000a6402) welc_service_logo_pane

0x955a,	// (0x000a64b7) list_single_welc_entry_pane_ParamLimits

0x955a,	// (0x000a64b7) list_single_welc_entry_pane

0x956b,	// (0x000a64c8) list_single_welc_entry_pane_g1

0x9573,	// (0x000a64d0) list_single_welc_entry_pane_t1

0x9581,	// (0x000a64de) list_single_welc_entry_pane_t2

0x0001,

0xfe28,	// (0x000acd85) list_single_welc_entry_pane_t

0x018c,	// (0x0009d0e9) bg_button_pane_cp035

0xc900,	// (0x000a985d) welc_button_pane_t1

0x958f,	// (0x000a64ec) welc_service_logo_pane_g1

0x9598,	// (0x000a64f5) welc_service_logo_pane_g2

0x0001,

0xfe2d,	// (0x000acd8a) welc_service_logo_pane_g

0xa425,	// (0x000a7382) main_int_radio_pane

0x6c0c,	// (0x000a3b69) list_single_fs_dyc_pane_g1

0x8fa6,	// (0x000a5f03) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8fa6,	// (0x000a5f03) list_double_large_graphic_phob2_pane_g3

0x8fb2,	// (0x000a5f0f) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8fb2,	// (0x000a5f0f) list_double_large_graphic_phob2_pane_g4

0x95a1,	// (0x000a64fe) main_int_radio1_pane_ParamLimits

0x95a1,	// (0x000a64fe) main_int_radio1_pane

0xc90e,	// (0x000a986b) find_pane_cp02

0x95be,	// (0x000a651b) input_focus_pane_cp12_ParamLimits

0x95be,	// (0x000a651b) input_focus_pane_cp12

0x95ce,	// (0x000a652b) input_focus_pane_cp13_ParamLimits

0x95ce,	// (0x000a652b) input_focus_pane_cp13

0x95e2,	// (0x000a653f) input_focus_pane_cp14_ParamLimits

0x95e2,	// (0x000a653f) input_focus_pane_cp14

0xc917,	// (0x000a9874) int_radio1_listscroll_pane

0x95f6,	// (0x000a6553) main_int_radio1_pane_g1_ParamLimits

0x95f6,	// (0x000a6553) main_int_radio1_pane_g1

0x960c,	// (0x000a6569) main_int_radio1_pane_t1_ParamLimits

0x960c,	// (0x000a6569) main_int_radio1_pane_t1

0x9625,	// (0x000a6582) main_int_radio1_pane_t2_ParamLimits

0x9625,	// (0x000a6582) main_int_radio1_pane_t2

0x9640,	// (0x000a659d) main_int_radio1_pane_t3_ParamLimits

0x9640,	// (0x000a659d) main_int_radio1_pane_t3

0x965b,	// (0x000a65b8) main_int_radio1_pane_t4_ParamLimits

0x965b,	// (0x000a65b8) main_int_radio1_pane_t4

0xc921,	// (0x000a987e) main_int_radio1_pane_t5_ParamLimits

0xc921,	// (0x000a987e) main_int_radio1_pane_t5

0x966d,	// (0x000a65ca) main_int_radio1_pane_t6_ParamLimits

0x966d,	// (0x000a65ca) main_int_radio1_pane_t6

0x9682,	// (0x000a65df) main_int_radio1_pane_t7_ParamLimits

0x9682,	// (0x000a65df) main_int_radio1_pane_t7

0x9697,	// (0x000a65f4) main_int_radio1_pane_t8_ParamLimits

0x9697,	// (0x000a65f4) main_int_radio1_pane_t8

0x96b4,	// (0x000a6611) main_int_radio1_pane_t9_ParamLimits

0x96b4,	// (0x000a6611) main_int_radio1_pane_t9

0x96c6,	// (0x000a6623) main_int_radio1_pane_t10_ParamLimits

0x96c6,	// (0x000a6623) main_int_radio1_pane_t10

0x96ec,	// (0x000a6649) main_int_radio1_pane_t11_ParamLimits

0x96ec,	// (0x000a6649) main_int_radio1_pane_t11

0x9712,	// (0x000a666f) main_int_radio1_pane_t12_ParamLimits

0x9712,	// (0x000a666f) main_int_radio1_pane_t12

0x000b,

0xfe32,	// (0x000acd8f) main_int_radio1_pane_t_ParamLimits

0xfe32,	// (0x000acd8f) main_int_radio1_pane_t

0xc7fe,	// (0x000a975b) int_radio_list_pane

0xc806,	// (0x000a9763) scroll_pane_cp037

0xc933,	// (0x000a9890) list_double_large_graphic_int_radio_pane_ParamLimits

0xc933,	// (0x000a9890) list_double_large_graphic_int_radio_pane

0xc947,	// (0x000a98a4) list_double_large_graphic_int_radio_pane_g1

0x9724,	// (0x000a6681) list_double_large_graphic_int_radio_pane_t1

0x9732,	// (0x000a668f) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe4b,	// (0x000acda8) list_double_large_graphic_int_radio_pane_t

0x018c,	// (0x0009d0e9) list_highlight_pane_cp027

0xc8b5,	// (0x000a9812) main_button_pane_4

0x9264,	// (0x000a61c1) main_welc_pane_g4_ParamLimits

0x9264,	// (0x000a61c1) main_welc_pane_g4

0x92fd,	// (0x000a625a) main_welc_pane_t4_ParamLimits

0x92fd,	// (0x000a625a) main_welc_pane_t4

0x9314,	// (0x000a6271) main_welc_pane_t5_ParamLimits

0x9314,	// (0x000a6271) main_welc_pane_t5

0x9353,	// (0x000a62b0) main_welc_pane_t6_ParamLimits

0x9353,	// (0x000a62b0) main_welc_pane_t6

0x9427,	// (0x000a6384) welc_button_pane_2_ParamLimits

0x9427,	// (0x000a6384) welc_button_pane_2

0x944a,	// (0x000a63a7) welc_button_pane_3_ParamLimits

0x944a,	// (0x000a63a7) welc_button_pane_3

0xc8bd,	// (0x000a981a) welc_button_pane_4

0x9472,	// (0x000a63cf) welc_button_pane_5_ParamLimits

0x9472,	// (0x000a63cf) welc_button_pane_5

0x01ba,	// (0x0009d117) main_popup_welc_pane

0xc968,	// (0x000a98c5) main_welc_sk_g3

0xc972,	// (0x000a98cf) main_welc_sk_g4

0xc97c,	// (0x000a98d9) main_welc_sk_t3

0xc98c,	// (0x000a98e9) main_welc_sk_t4

0xc99c,	// (0x000a98f9) popup_welc_pane_t4

0xc9aa,	// (0x000a9907) popup_welc_pane_t5

0xc9b8,	// (0x000a9915) popup_welc_pane_t6

0xa425,	// (0x000a7382) main_acti_pane

0x018c,	// (0x0009d0e9) main_sso_pane

0x9740,	// (0x000a669d) sso_body_pane_ParamLimits

0x9740,	// (0x000a669d) sso_body_pane

0x9755,	// (0x000a66b2) sso_logo_pane_ParamLimits

0x9755,	// (0x000a66b2) sso_logo_pane

0x978e,	// (0x000a66eb) sso_sk_pane_ParamLimits

0x978e,	// (0x000a66eb) sso_sk_pane

0xc9fa,	// (0x000a9957) main_sso_logo_pane_g1

0x97a0,	// (0x000a66fd) sso_sk_pane_t1_ParamLimits

0x97a0,	// (0x000a66fd) sso_sk_pane_t1

0x97ba,	// (0x000a6717) sso_sk_pane_t2_ParamLimits

0x97ba,	// (0x000a6717) sso_sk_pane_t2

0x0001,

0xfe50,	// (0x000acdad) sso_sk_pane_t_ParamLimits

0xfe50,	// (0x000acdad) sso_sk_pane_t

0xca05,	// (0x000a9962) aid_sso_gap

0xca0e,	// (0x000a996b) aid_sso_txt1

0xca18,	// (0x000a9975) aid_sso_txt2

0xca22,	// (0x000a997f) aid_sso_txt3

0x0002,

0xfe55,	// (0x000acdb2) aid_sso_txt

0xca2c,	// (0x000a9989) aid_sso_widget

0x9824,	// (0x000a6781) sso_btn_pane_ParamLimits

0x9824,	// (0x000a6781) sso_btn_pane

0x98a8,	// (0x000a6805) sso_option_pane_ParamLimits

0x98a8,	// (0x000a6805) sso_option_pane

0x9966,	// (0x000a68c3) sso_query_pane_ParamLimits

0x9966,	// (0x000a68c3) sso_query_pane

0x99bc,	// (0x000a6919) sso_query_pane_cp01_ParamLimits

0x99bc,	// (0x000a6919) sso_query_pane_cp01

0x9a1c,	// (0x000a6979) sso_t_hdr_pane_ParamLimits

0x9a1c,	// (0x000a6979) sso_t_hdr_pane

0x9a46,	// (0x000a69a3) sso_t_nml_pane_ParamLimits

0x9a46,	// (0x000a69a3) sso_t_nml_pane

0xca36,	// (0x000a9993) sso_t_sub_pane

0x9762,	// (0x000a66bf) sso_popup_window_ParamLimits

0x9762,	// (0x000a66bf) sso_popup_window

0x97d0,	// (0x000a672d) sso_apps_pane_ParamLimits

0x97d0,	// (0x000a672d) sso_apps_pane

0x97fa,	// (0x000a6757) sso_body_pane_g1

0x9804,	// (0x000a6761) sso_body_pane_t1

0x9814,	// (0x000a6771) sso_body_pane_t2

0x0001,

0xfe5c,	// (0x000acdb9) sso_body_pane_t

0x9870,	// (0x000a67cd) sso_btn_pane_cp01_ParamLimits

0x9870,	// (0x000a67cd) sso_btn_pane_cp01

0x993a,	// (0x000a6897) sso_prog_pane_ParamLimits

0x993a,	// (0x000a6897) sso_prog_pane

0x9a9c,	// (0x000a69f9) sso_t_hdr_pane_t1_ParamLimits

0x9a9c,	// (0x000a69f9) sso_t_hdr_pane_t1

0xca4b,	// (0x000a99a8) input_focus_pane_cp10_ParamLimits

0xca4b,	// (0x000a99a8) input_focus_pane_cp10

0xca5f,	// (0x000a99bc) sso_query_pane_t1_ParamLimits

0xca5f,	// (0x000a99bc) sso_query_pane_t1

0xca72,	// (0x000a99cf) sso_query_pane_t2_ParamLimits

0xca72,	// (0x000a99cf) sso_query_pane_t2

0xca8c,	// (0x000a99e9) sso_query_pane_t3_ParamLimits

0xca8c,	// (0x000a99e9) sso_query_pane_t3

0xcab6,	// (0x000a9a13) sso_query_pane_t4_ParamLimits

0xcab6,	// (0x000a9a13) sso_query_pane_t4

0x0003,

0xfe61,	// (0x000acdbe) sso_query_pane_t_ParamLimits

0xfe61,	// (0x000acdbe) sso_query_pane_t

0xc95f,	// (0x000a98bc) bg_button_pane_cp22

0xc950,	// (0x000a98ad) sso_btn_pane_t1

0x9aaf,	// (0x000a6a0c) sso_t_nml_pane_t1_ParamLimits

0x9aaf,	// (0x000a6a0c) sso_t_nml_pane_t1

0xcada,	// (0x000a9a37) sso_option_row_pane_ParamLimits

0xcada,	// (0x000a9a37) sso_option_row_pane

0xcae7,	// (0x000a9a44) sso_t_sub_pane_t1_ParamLimits

0xcae7,	// (0x000a9a44) sso_t_sub_pane_t1

0xaa1b,	// (0x000a7978) bg_popup_window_pane_cp11_ParamLimits

0xaa1b,	// (0x000a7978) bg_popup_window_pane_cp11

0xcb04,	// (0x000a9a61) popup_sk_window_cp01_ParamLimits

0xcb04,	// (0x000a9a61) popup_sk_window_cp01

0xcb11,	// (0x000a9a6e) sso_popup_body_pane_ParamLimits

0xcb11,	// (0x000a9a6e) sso_popup_body_pane

0xcb1e,	// (0x000a9a7b) scroll_pane_cp21_ParamLimits

0xcb1e,	// (0x000a9a7b) scroll_pane_cp21

0xcb2b,	// (0x000a9a88) sso_popup_body_t_pane_ParamLimits

0xcb2b,	// (0x000a9a88) sso_popup_body_t_pane

0xcb38,	// (0x000a9a95) sso_popup_body_t_hdr_pane_ParamLimits

0xcb38,	// (0x000a9a95) sso_popup_body_t_hdr_pane

0x9aca,	// (0x000a6a27) sso_popup_body_t_nml_pane_ParamLimits

0x9aca,	// (0x000a6a27) sso_popup_body_t_nml_pane

0x9af1,	// (0x000a6a4e) sso_popup_body_t_sub_pane_ParamLimits

0x9af1,	// (0x000a6a4e) sso_popup_body_t_sub_pane

0xcb4a,	// (0x000a9aa7) sso_popup_body_t_hdr_pane_t1

0x9b14,	// (0x000a6a71) sso_popup_body_t_nml_pane_t1_ParamLimits

0x9b14,	// (0x000a6a71) sso_popup_body_t_nml_pane_t1

0xcb5a,	// (0x000a9ab7) sso_popup_body_t_sub_pane_t1_ParamLimits

0xcb5a,	// (0x000a9ab7) sso_popup_body_t_sub_pane_t1

0xaaba,	// (0x000a7a17) sso_prog_pane_g1

0x9b4c,	// (0x000a6aa9) sso_apps_pane_comp1_ParamLimits

0x9b4c,	// (0x000a6aa9) sso_apps_pane_comp1

0xcb7f,	// (0x000a9adc) sso_apps_pane_comp1_g1

0xcb87,	// (0x000a9ae4) sso_apps_pane_comp1_t1

0xcba3,	// (0x000a9b00) sso_option_row_pane_g1

0xcbab,	// (0x000a9b08) sso_option_row_pane_t1

0xc0d8,	// (0x000a9035) list_cmail_pane_ParamLimits

0x018c,	// (0x0009d0e9) main_call7_pane

0x91ba,	// (0x000a6117) bg_welc_area_ParamLimits

0x91ba,	// (0x000a6117) bg_welc_area

0x9391,	// (0x000a62ee) sso_t_hdr_pane_a_t1_ParamLimits

0x9391,	// (0x000a62ee) sso_t_hdr_pane_a_t1

0x93aa,	// (0x000a6307) sso_t_nml_pane_a_t1_ParamLimits

0x93aa,	// (0x000a6307) sso_t_nml_pane_a_t1

0x93d9,	// (0x000a6336) sso_t_sub_pane_a_t1_ParamLimits

0x93d9,	// (0x000a6336) sso_t_sub_pane_a_t1

0x948b,	// (0x000a63e8) welc_button_pane_cp01_ParamLimits

0x948b,	// (0x000a63e8) welc_button_pane_cp01

0xc950,	// (0x000a98ad) sso_btn_pane_t1_copy1

0xc95f,	// (0x000a98bc) welc_button_pane_2_comp1

0xc9c8,	// (0x000a9925) sso_t_hdr_pane_p_t1

0xc9d8,	// (0x000a9935) sso_t_nml_pane_p_t1

0xc9e8,	// (0x000a9945) sso_t_sub_pane_p_t1

0x018c,	// (0x0009d0e9) main_att_pane

0x018c,	// (0x0009d0e9) main_vod_pane

0xca36,	// (0x000a9993) sso_t_sub_pane_ParamLimits

0xcb95,	// (0x000a9af2) input_focus_pane_cp10_t1

0xcbab,	// (0x000a9b08) sso_option_row_pane_t1_ParamLimits

0x9b66,	// (0x000a6ac3) main_att_body_pane_ParamLimits

0x9b66,	// (0x000a6ac3) main_att_body_pane

0x9b7c,	// (0x000a6ad9) att_btn_emg_pane_ParamLimits

0x9b7c,	// (0x000a6ad9) att_btn_emg_pane

0x9b9b,	// (0x000a6af8) att_btn_pane_ParamLimits

0x9b9b,	// (0x000a6af8) att_btn_pane

0x9c10,	// (0x000a6b6d) att_btn_pane_cp01_ParamLimits

0x9c10,	// (0x000a6b6d) att_btn_pane_cp01

0x9c30,	// (0x000a6b8d) att_li_srv_pane_ParamLimits

0x9c30,	// (0x000a6b8d) att_li_srv_pane

0x9c4d,	// (0x000a6baa) att_opt_pane_ParamLimits

0x9c4d,	// (0x000a6baa) att_opt_pane

0x9c97,	// (0x000a6bf4) att_query_pane_ParamLimits

0x9c97,	// (0x000a6bf4) att_query_pane

0x9d10,	// (0x000a6c6d) att_query_pane_cp01_ParamLimits

0x9d10,	// (0x000a6c6d) att_query_pane_cp01

0x9d5c,	// (0x000a6cb9) att_t_hdr_pane_ParamLimits

0x9d5c,	// (0x000a6cb9) att_t_hdr_pane

0x9dcc,	// (0x000a6d29) att_t_nml_pane_ParamLimits

0x9dcc,	// (0x000a6d29) att_t_nml_pane

0x9e46,	// (0x000a6da3) att_t_nml_pane_cp01_ParamLimits

0x9e46,	// (0x000a6da3) att_t_nml_pane_cp01

0x9e74,	// (0x000a6dd1) att_t_nmlb_pane_ParamLimits

0x9e74,	// (0x000a6dd1) att_t_nmlb_pane

0x9ee1,	// (0x000a6e3e) att_term_pane_ParamLimits

0x9ee1,	// (0x000a6e3e) att_term_pane

0x9f2d,	// (0x000a6e8a) main_att_body_pane_g1_ParamLimits

0x9f2d,	// (0x000a6e8a) main_att_body_pane_g1

0xcbc4,	// (0x000a9b21) att_t_hdr_pane_t1_ParamLimits

0xcbc4,	// (0x000a9b21) att_t_hdr_pane_t1

0xcbdd,	// (0x000a9b3a) att_t_nml_pane_t1_ParamLimits

0xcbdd,	// (0x000a9b3a) att_t_nml_pane_t1

0xcc02,	// (0x000a9b5f) att_btn_pane_t1

0xc95f,	// (0x000a98bc) bg_button_pane_cp23

0x9f5b,	// (0x000a6eb8) att_li_srv_row_pane_ParamLimits

0x9f5b,	// (0x000a6eb8) att_li_srv_row_pane

0xcc12,	// (0x000a9b6f) att_t_nmlb_pane_t1_ParamLimits

0xcc12,	// (0x000a9b6f) att_t_nmlb_pane_t1

0xcc30,	// (0x000a9b8d) att_query_pane_t1

0xcc3f,	// (0x000a9b9c) att_query_pane_t2

0xcc4e,	// (0x000a9bab) att_query_pane_t3

0x0002,

0xfe6a,	// (0x000acdc7) att_query_pane_t

0xcc5d,	// (0x000a9bba) input_focus_pane_cp11

0xcc66,	// (0x000a9bc3) att_term_pane_t1_ParamLimits

0xcc66,	// (0x000a9bc3) att_term_pane_t1

0x018c,	// (0x0009d0e9) att_opt_row_pane

0xcba3,	// (0x000a9b00) att_opt_row_pane_g1

0xcc83,	// (0x000a9be0) att_opt_row_pane_t1_ParamLimits

0xcc83,	// (0x000a9be0) att_opt_row_pane_t1

0x9f6b,	// (0x000a6ec8) att_li_srv_row_pane_g1

0x9f73,	// (0x000a6ed0) att_li_srv_row_pane_t1_ParamLimits

0x9f73,	// (0x000a6ed0) att_li_srv_row_pane_t1

0x9f88,	// (0x000a6ee5) att_li_srv_row_pane_t2_ParamLimits

0x9f88,	// (0x000a6ee5) att_li_srv_row_pane_t2

0x0001,

0xfe71,	// (0x000acdce) att_li_srv_row_pane_t_ParamLimits

0xfe71,	// (0x000acdce) att_li_srv_row_pane_t

0xcc9c,	// (0x000a9bf9) att_btn_close_pane_g1

0x018c,	// (0x0009d0e9) bg_button_pane_cp24

0x9f9d,	// (0x000a6efa) main_vod_body_pane_ParamLimits

0x9f9d,	// (0x000a6efa) main_vod_body_pane

0x9fb1,	// (0x000a6f0e) main_vod_body_pane_g1_ParamLimits

0x9fb1,	// (0x000a6f0e) main_vod_body_pane_g1

0x9fe5,	// (0x000a6f42) scroll_pane_cp24_ParamLimits

0x9fe5,	// (0x000a6f42) scroll_pane_cp24

0xa033,	// (0x000a6f90) vod_btn_pane_ParamLimits

0xa033,	// (0x000a6f90) vod_btn_pane

0xa075,	// (0x000a6fd2) vod_det_pane_ParamLimits

0xa075,	// (0x000a6fd2) vod_det_pane

0xa0a9,	// (0x000a7006) vod_logo_g1_ParamLimits

0xa0a9,	// (0x000a7006) vod_logo_g1

0xa0f7,	// (0x000a7054) vod_opt_pane_ParamLimits

0xa0f7,	// (0x000a7054) vod_opt_pane

0xa12a,	// (0x000a7087) vod_opt_pane_cp01_ParamLimits

0xa12a,	// (0x000a7087) vod_opt_pane_cp01

0xa156,	// (0x000a70b3) vod_query_pane_ParamLimits

0xa156,	// (0x000a70b3) vod_query_pane

0xa181,	// (0x000a70de) vod_query_pane_cp01_ParamLimits

0xa181,	// (0x000a70de) vod_query_pane_cp01

0xa18d,	// (0x000a70ea) vod_t_nml_pane_ParamLimits

0xa18d,	// (0x000a70ea) vod_t_nml_pane

0xa242,	// (0x000a719f) vod_t_nml_pane_cp01_ParamLimits

0xa242,	// (0x000a719f) vod_t_nml_pane_cp01

0xa27e,	// (0x000a71db) vod_t_sub_pane_ParamLimits

0xa27e,	// (0x000a71db) vod_t_sub_pane

0xa2af,	// (0x000a720c) vod_t_sub_pane_cp01_ParamLimits

0xa2af,	// (0x000a720c) vod_t_sub_pane_cp01

0xcc5d,	// (0x000a9bba) vod_query_field_pane

0xcca4,	// (0x000a9c01) vod_query_pane_t1

0xc95f,	// (0x000a98bc) bg_button_pane_cp25

0xccb3,	// (0x000a9c10) sso_btn_pane_t1_copy2

0xa2db,	// (0x000a7238) vod_t_nml_pane_t1_ParamLimits

0xa2db,	// (0x000a7238) vod_t_nml_pane_t1

0xccc2,	// (0x000a9c1f) vod_opt_row_pane_ParamLimits

0xccc2,	// (0x000a9c1f) vod_opt_row_pane

0xccd4,	// (0x000a9c31) vod_t_sub_pane_t1_ParamLimits

0xccd4,	// (0x000a9c31) vod_t_sub_pane_t1

0xcced,	// (0x000a9c4a) vod_det_cell_pane_ParamLimits

0xcced,	// (0x000a9c4a) vod_det_cell_pane

0x018c,	// (0x0009d0e9) input_focus_pane_cp15

0xccfe,	// (0x000a9c5b) vod_query_field_pane_t1

0xcd0c,	// (0x000a9c69) vod_opt_row_pane_g1_ParamLimits

0xcd0c,	// (0x000a9c69) vod_opt_row_pane_g1

0xcd18,	// (0x000a9c75) vod_opt_row_pane_t1_ParamLimits

0xcd18,	// (0x000a9c75) vod_opt_row_pane_t1

0xcd37,	// (0x000a9c94) vod_det_cell_field_pane

0xcd40,	// (0x000a9c9d) vod_det_cell_pane_g1

0xcd48,	// (0x000a9ca5) vod_det_cell_pane_t1

0x018c,	// (0x0009d0e9) input_focus_pane_cp16

0xcd57,	// (0x000a9cb4) vod_det_cell_field_pane_t1

0xa310,	// (0x000a726d) call7_btn_grp_pane_ParamLimits

0xa310,	// (0x000a726d) call7_btn_grp_pane

0xaa1b,	// (0x000a7978) call7_bubble_pane_ParamLimits

0xaa1b,	// (0x000a7978) call7_bubble_pane

0xa32a,	// (0x000a7287) cell_call7_btn_pane_ParamLimits

0xa32a,	// (0x000a7287) cell_call7_btn_pane

0xa33e,	// (0x000a729b) call7_pane_g1_ParamLimits

0xa33e,	// (0x000a729b) call7_pane_g1

0xa350,	// (0x000a72ad) call7_windows_conf_pane_ParamLimits

0xa350,	// (0x000a72ad) call7_windows_conf_pane

0xa36e,	// (0x000a72cb) popup_call7_1st_window_ParamLimits

0xa36e,	// (0x000a72cb) popup_call7_1st_window

0xa380,	// (0x000a72dd) popup_call7_2nd_window_ParamLimits

0xa380,	// (0x000a72dd) popup_call7_2nd_window

0xa392,	// (0x000a72ef) popup_call7_3rd_window_ParamLimits

0xa392,	// (0x000a72ef) popup_call7_3rd_window

0x018c,	// (0x0009d0e9) bg_button_pane_cp26

0xc7a0,	// (0x000a96fd) cell_call7_btn_pane_g1

0xcd65,	// (0x000a9cc2) cell_call7_btn_pane_t1

0x018c,	// (0x0009d0e9) bg_popup_window_pane_cp12

0xcd74,	// (0x000a9cd1) popup_call7_1st_window_g1

0xcd7c,	// (0x000a9cd9) popup_call7_1st_window_g2

0xcd84,	// (0x000a9ce1) popup_call7_1st_window_g3

0x0002,

0xfe76,	// (0x000acdd3) popup_call7_1st_window_g

0xcd8c,	// (0x000a9ce9) popup_call7_1st_window_t1

0xcd9b,	// (0x000a9cf8) popup_call7_1st_window_t2

0xcdab,	// (0x000a9d08) popup_call7_1st_window_t3

0x0002,

0xfe7d,	// (0x000acdda) popup_call7_1st_window_t

0x018c,	// (0x0009d0e9) bg_popup_window_pane_cp13

0xcdbb,	// (0x000a9d18) popup_call7_2nd_window_g1

0xcdc3,	// (0x000a9d20) popup_call7_2nd_window_g2

0xcdcb,	// (0x000a9d28) popup_call7_2nd_window_g3

0x0002,

0xfe84,	// (0x000acde1) popup_call7_2nd_window_g

0xcd8c,	// (0x000a9ce9) popup_call7_2nd_window_t1

0x018c,	// (0x0009d0e9) bg_popup_window_pane_cp14

0xcdd3,	// (0x000a9d30) call7_list_conf_pane

0xcddb,	// (0x000a9d38) call7_list_conf_row_pane_ParamLimits

0xcddb,	// (0x000a9d38) call7_list_conf_row_pane

0xcdee,	// (0x000a9d4b) call7_list_conf_row_pane_g1

0xcdf6,	// (0x000a9d53) call7_list_conf_row_pane_g2

0x0001,

0xfe8b,	// (0x000acde8) call7_list_conf_row_pane_g

0xcdfe,	// (0x000a9d5b) call7_list_conf_row_pane_t1

0x018c,	// (0x0009d0e9) list_highlight_pane_cp22

0x9902,	// (0x000a685f) sso_option_pane_cp01_ParamLimits

0x9902,	// (0x000a685f) sso_option_pane_cp01

0xa9f9,	// (0x000a7956) msg_header_pane_ParamLimits

0xb8ab,	// (0x000a8808) bg_button_pane_cp01_ParamLimits

0xdc11,	// (0x000aab6e) input_focus_pane_cp07_ParamLimits

0x7a5a,	// (0x000a49b7) popup_email_progress_window

0xaaba,	// (0x000a7a17) popup_email_progress_window_g1

0xce0c,	// (0x000a9d69) popup_email_progress_window_g2

0x0001,

0xfe90,	// (0x000acded) popup_email_progress_window_g

0xce14,	// (0x000a9d71) popup_email_progress_window_t1
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
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&Limits,
	&ParameterLimitsTableLV,
	&TextTableLVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
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
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&Limits,
	&TextTableLVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&WindowLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
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
	&TextLineVCR,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&ParameterLimitsV,
	&WindowLineVCR,
	&WindowLineVCR,
	&WindowLineVCR,
	&Limits,
	&WindowTableLVCR,
	&TextLineVCR,
	};

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Large

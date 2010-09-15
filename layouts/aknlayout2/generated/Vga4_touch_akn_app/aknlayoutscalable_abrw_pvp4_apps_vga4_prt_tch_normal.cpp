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

#include "aknlayoutscalable_abrw_pvp4_apps_vga4_prt_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001e863 };

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
0x23f7,	// (0x00020c5a) Screen

0x2403,	// (0x00020c66) application_window

0x240f,	// (0x00020c72) area_bottom_pane_ParamLimits

0x240f,	// (0x00020c72) area_bottom_pane

0x0bcc,	// (0x0001f42f) area_top_pane_ParamLimits

0x0bcc,	// (0x0001f42f) area_top_pane

0x0c30,	// (0x0001f493) call_video_uplink_pane_ParamLimits

0x0c30,	// (0x0001f493) call_video_uplink_pane

0x0c6f,	// (0x0001f4d2) main_pane_ParamLimits

0x0c6f,	// (0x0001f4d2) main_pane

0xc20e,	// (0x0002aa71) context_pane

0x4d84,	// (0x000235e7) navi_pane

0x4dad,	// (0x00023610) popup_cale_events_window_ParamLimits

0x4dad,	// (0x00023610) popup_cale_events_window

0xc221,	// (0x0002aa84) popup_mup_playback_window

0x4dc5,	// (0x00023628) signal_pane

0xa387,	// (0x00028bea) main_browser_pane

0xa533,	// (0x00028d96) main_burst_pane

0x128c,	// (0x0001faef) main_calc_pane

0xc202,	// (0x0002aa65) main_cale_day_pane

0x1299,	// (0x0001fafc) main_cale_month_pane

0xc202,	// (0x0002aa65) main_cale_week_pane

0xa533,	// (0x00028d96) main_call_pane

0xa031,	// (0x00028894) main_call_poc_pane

0xa533,	// (0x00028d96) main_camera_pane

0xa533,	// (0x00028d96) main_chi_dic_pane

0xad2f,	// (0x00029592) main_clock_pane

0xa031,	// (0x00028894) main_fmradio_pane

0xa533,	// (0x00028d96) main_graph_messa_pane

0xa031,	// (0x00028894) main_help_pane

0xa387,	// (0x00028bea) main_im_pane

0xa28c,	// (0x00028aef) main_image_pane_ParamLimits

0xa28c,	// (0x00028aef) main_image_pane

0xa031,	// (0x00028894) main_location2_pane

0xa533,	// (0x00028d96) main_location_pane

0xa28c,	// (0x00028aef) main_messa_pane

0xa031,	// (0x00028894) main_mp2_pane

0xa533,	// (0x00028d96) main_mp_pane

0xa031,	// (0x00028894) main_msg_pane

0xa031,	// (0x00028894) main_mup_eq_pane

0xa031,	// (0x00028894) main_mup_pane

0xa387,	// (0x00028bea) main_notes_pane

0xa031,	// (0x00028894) main_pec_pane

0xa031,	// (0x00028894) main_phob_pane

0xa031,	// (0x00028894) main_pinb_pane

0xa031,	// (0x00028894) main_postcard_pane

0xa031,	// (0x00028894) main_qdial_pane

0xa533,	// (0x00028d96) main_skin_pane

0xa031,	// (0x00028894) main_smil2_pane

0xa533,	// (0x00028d96) main_smil_pane

0xa533,	// (0x00028d96) main_video_pane

0xa533,	// (0x00028d96) main_video_tele_pane

0xa28c,	// (0x00028aef) main_viewer_pane_ParamLimits

0xa28c,	// (0x00028aef) main_viewer_pane

0xa533,	// (0x00028d96) main_vorec_pane

0x12ec,	// (0x0001fb4f) popup_blid_sat_info_window_ParamLimits

0x12ec,	// (0x0001fb4f) popup_blid_sat_info_window

0x1312,	// (0x0001fb75) popup_dyc_status_message_window_ParamLimits

0x1312,	// (0x0001fb75) popup_dyc_status_message_window

0x1322,	// (0x0001fb85) popup_grid_large_graphic_window_ParamLimits

0x1322,	// (0x0001fb85) popup_grid_large_graphic_window

0x13b7,	// (0x0001fc1a) popup_loc_request_window_ParamLimits

0x13b7,	// (0x0001fc1a) popup_loc_request_window

0x1410,	// (0x0001fc73) popup_wml_address_window_ParamLimits

0x1410,	// (0x0001fc73) popup_wml_address_window

0x4c66,	// (0x000234c9) call_muted_g1

0x48de,	// (0x00023141) popup_call_audio_conf_window_ParamLimits

0x48de,	// (0x00023141) popup_call_audio_conf_window

0x4c76,	// (0x000234d9) popup_call_audio_first_window_ParamLimits

0x4c76,	// (0x000234d9) popup_call_audio_first_window

0x4cb6,	// (0x00023519) popup_call_audio_in_window_ParamLimits

0x4cb6,	// (0x00023519) popup_call_audio_in_window

0x4cda,	// (0x0002353d) popup_call_audio_out_window_ParamLimits

0x4cda,	// (0x0002353d) popup_call_audio_out_window

0x4cfc,	// (0x0002355f) popup_call_audio_second_window_ParamLimits

0x4cfc,	// (0x0002355f) popup_call_audio_second_window

0x4d2c,	// (0x0002358f) popup_call_audio_wait_window_ParamLimits

0x4d2c,	// (0x0002358f) popup_call_audio_wait_window

0x4d4d,	// (0x000235b0) popup_number_entry_window_ParamLimits

0x4d4d,	// (0x000235b0) popup_number_entry_window

0x9be9,	// (0x0002844c) bg_popup_call_pane_cp05_ParamLimits

0x9be9,	// (0x0002844c) bg_popup_call_pane_cp05

0x9c09,	// (0x0002846c) popup_number_entry_window_t1

0x9c1c,	// (0x0002847f) popup_number_entry_window_t2

0x9c2e,	// (0x00028491) popup_number_entry_window_t3

0x0003,

0xf045,	// (0x0002d8a8) popup_number_entry_window_t

0x9c75,	// (0x000284d8) text_title_cp2

0x9c88,	// (0x000284eb) bg_popup_call_pane_cp_ParamLimits

0x9c88,	// (0x000284eb) bg_popup_call_pane_cp

0x9c96,	// (0x000284f9) call_thumbnail_pane

0x9c9e,	// (0x00028501) popup_call_audio_in_window_g1_ParamLimits

0x9c9e,	// (0x00028501) popup_call_audio_in_window_g1

0x9caa,	// (0x0002850d) popup_call_audio_in_window_g2_ParamLimits

0x9caa,	// (0x0002850d) popup_call_audio_in_window_g2

0x9cb6,	// (0x00028519) popup_call_audio_in_window_g3_ParamLimits

0x9cb6,	// (0x00028519) popup_call_audio_in_window_g3

0x0002,

0xf04e,	// (0x0002d8b1) popup_call_audio_in_window_g_ParamLimits

0xf04e,	// (0x0002d8b1) popup_call_audio_in_window_g

0x9cc2,	// (0x00028525) popup_call_audio_in_window_t1_ParamLimits

0x9cc2,	// (0x00028525) popup_call_audio_in_window_t1

0x9cde,	// (0x00028541) popup_call_audio_in_window_t2_ParamLimits

0x9cde,	// (0x00028541) popup_call_audio_in_window_t2

0x9cfa,	// (0x0002855d) popup_call_audio_in_window_t3_ParamLimits

0x9cfa,	// (0x0002855d) popup_call_audio_in_window_t3

0x0002,

0xf055,	// (0x0002d8b8) popup_call_audio_in_window_t_ParamLimits

0xf055,	// (0x0002d8b8) popup_call_audio_in_window_t

0x9c88,	// (0x000284eb) bg_popup_call_pane_cp01_ParamLimits

0x9c88,	// (0x000284eb) bg_popup_call_pane_cp01

0x9c96,	// (0x000284f9) call_thumbnail_pane_cp02

0x9d0d,	// (0x00028570) call_type_pane_cp022

0x9d15,	// (0x00028578) popup_call_audio_out_window_g1_ParamLimits

0x9d15,	// (0x00028578) popup_call_audio_out_window_g1

0x9d27,	// (0x0002858a) popup_call_audio_out_window_g2_ParamLimits

0x9d27,	// (0x0002858a) popup_call_audio_out_window_g2

0x9d33,	// (0x00028596) popup_call_audio_out_window_g3_ParamLimits

0x9d33,	// (0x00028596) popup_call_audio_out_window_g3

0x0002,

0xf05c,	// (0x0002d8bf) popup_call_audio_out_window_g_ParamLimits

0xf05c,	// (0x0002d8bf) popup_call_audio_out_window_g

0x9d45,	// (0x000285a8) popup_call_audio_out_window_t1_ParamLimits

0x9d45,	// (0x000285a8) popup_call_audio_out_window_t1

0x9d5d,	// (0x000285c0) popup_call_audio_out_window_t2_ParamLimits

0x9d5d,	// (0x000285c0) popup_call_audio_out_window_t2

0x0001,

0xf063,	// (0x0002d8c6) popup_call_audio_out_window_t_ParamLimits

0xf063,	// (0x0002d8c6) popup_call_audio_out_window_t

0x9d72,	// (0x000285d5) bg_popup_call_pane_ParamLimits

0x9d72,	// (0x000285d5) bg_popup_call_pane

0x2450,	// (0x00020cb3) call_thumbnail_pane_cp_ParamLimits

0x2450,	// (0x00020cb3) call_thumbnail_pane_cp

0x9df6,	// (0x00028659) call_type_pane_cp01_ParamLimits

0x9df6,	// (0x00028659) call_type_pane_cp01

0x9e3a,	// (0x0002869d) popup_call_audio_first_window_g1_ParamLimits

0x9e3a,	// (0x0002869d) popup_call_audio_first_window_g1

0x9e86,	// (0x000286e9) popup_call_audio_first_window_g2_ParamLimits

0x9e86,	// (0x000286e9) popup_call_audio_first_window_g2

0x0001,

0xf068,	// (0x0002d8cb) popup_call_audio_first_window_g_ParamLimits

0xf068,	// (0x0002d8cb) popup_call_audio_first_window_g

0x9eca,	// (0x0002872d) popup_call_audio_first_window_t1_ParamLimits

0x9eca,	// (0x0002872d) popup_call_audio_first_window_t1

0x9f76,	// (0x000287d9) popup_call_audio_first_window_t4_ParamLimits

0x9f76,	// (0x000287d9) popup_call_audio_first_window_t4

0xa002,	// (0x00028865) popup_call_audio_first_window_t5_ParamLimits

0xa002,	// (0x00028865) popup_call_audio_first_window_t5

0x0002,

0xf06d,	// (0x0002d8d0) popup_call_audio_first_window_t_ParamLimits

0xf06d,	// (0x0002d8d0) popup_call_audio_first_window_t

0xa031,	// (0x00028894) bg_popup_call_pane_cp02

0xa03b,	// (0x0002889e) call_type_pane_cp023

0xa043,	// (0x000288a6) popup_call_audio_wait_window_g1

0xa04b,	// (0x000288ae) popup_call_audio_wait_window_g2

0x0001,

0xf074,	// (0x0002d8d7) popup_call_audio_wait_window_g

0xa053,	// (0x000288b6) popup_call_audio_wait_window_t3

0xa061,	// (0x000288c4) bg_popup_call_pane_cp03_ParamLimits

0xa061,	// (0x000288c4) bg_popup_call_pane_cp03

0xa0c1,	// (0x00028924) call_thumbnail_pane_cp011_ParamLimits

0xa0c1,	// (0x00028924) call_thumbnail_pane_cp011

0xa0cd,	// (0x00028930) call_type_pane_cp034_ParamLimits

0xa0cd,	// (0x00028930) call_type_pane_cp034

0xa109,	// (0x0002896c) popup_call_audio_second_window_g1_ParamLimits

0xa109,	// (0x0002896c) popup_call_audio_second_window_g1

0xa145,	// (0x000289a8) popup_call_audio_second_window_g2_ParamLimits

0xa145,	// (0x000289a8) popup_call_audio_second_window_g2

0x0001,

0xf079,	// (0x0002d8dc) popup_call_audio_second_window_g_ParamLimits

0xf079,	// (0x0002d8dc) popup_call_audio_second_window_g

0xa181,	// (0x000289e4) popup_call_audio_second_window_t1_ParamLimits

0xa181,	// (0x000289e4) popup_call_audio_second_window_t1

0xa202,	// (0x00028a65) popup_call_audio_second_window_t2_ParamLimits

0xa202,	// (0x00028a65) popup_call_audio_second_window_t2

0xa238,	// (0x00028a9b) popup_call_audio_second_window_t3_ParamLimits

0xa238,	// (0x00028a9b) popup_call_audio_second_window_t3

0x0002,

0xf07e,	// (0x0002d8e1) popup_call_audio_second_window_t_ParamLimits

0xf07e,	// (0x0002d8e1) popup_call_audio_second_window_t

0xa031,	// (0x00028894) bg_popup_call_pane_cp04

0xa26e,	// (0x00028ad1) list_conf_pane

0xa276,	// (0x00028ad9) popup_call_audio_conf_window_t1

0xa284,	// (0x00028ae7) call_thumbnail_pane_g1

0xa28c,	// (0x00028aef) bg_pinb_pane_ParamLimits

0xa28c,	// (0x00028aef) bg_pinb_pane

0xa29a,	// (0x00028afd) find_pinb_pane

0xa28c,	// (0x00028aef) listscroll_pinb_pane_ParamLimits

0xa28c,	// (0x00028aef) listscroll_pinb_pane

0xa2a4,	// (0x00028b07) pinb_bg_pane_g1

0xa2a4,	// (0x00028b07) pinb_bg_pane_g2

0xa2a4,	// (0x00028b07) pinb_bg_pane_g3

0xa2a4,	// (0x00028b07) pinb_bg_pane_g4

0xa2a4,	// (0x00028b07) pinb_bg_pane_g5

0xa2a4,	// (0x00028b07) pinb_bg_pane_g6

0xa2a4,	// (0x00028b07) pinb_bg_pane_g7

0xa2a4,	// (0x00028b07) pinb_bg_pane_g8

0xa2a4,	// (0x00028b07) pinb_bg_pane_g9

0xa2a4,	// (0x00028b07) pinb_bg_pane_g10

0x0009,

0xf085,	// (0x0002d8e8) pinb_bg_pane_g

0x9bdf,	// (0x00028442) grid_pinb_pane

0x9bdf,	// (0x00028442) list_pinb_pane

0xa2ae,	// (0x00028b11) scroll_pane_cp01_ParamLimits

0xa2ae,	// (0x00028b11) scroll_pane_cp01

0xa2bc,	// (0x00028b1f) find_pinb_pane_g1_ParamLimits

0xa2bc,	// (0x00028b1f) find_pinb_pane_g1

0xa2d4,	// (0x00028b37) find_pinb_pane_t1

0xa2e6,	// (0x00028b49) find_pinb_pane_t2

0x0001,

0xf09f,	// (0x0002d902) find_pinb_pane_t

0xa2fb,	// (0x00028b5e) input_focus_pane_cp01_ParamLimits

0xa2fb,	// (0x00028b5e) input_focus_pane_cp01

0xa307,	// (0x00028b6a) cell_pinb_pane_ParamLimits

0xa307,	// (0x00028b6a) cell_pinb_pane

0xa315,	// (0x00028b78) cell_pinb_pane_g1_ParamLimits

0xa315,	// (0x00028b78) cell_pinb_pane_g1

0xa323,	// (0x00028b86) cell_pinb_pane_g2_ParamLimits

0xa323,	// (0x00028b86) cell_pinb_pane_g2

0xa323,	// (0x00028b86) cell_pinb_pane_g3_ParamLimits

0xa323,	// (0x00028b86) cell_pinb_pane_g3

0x0002,

0xf0a4,	// (0x0002d907) cell_pinb_pane_g_ParamLimits

0xf0a4,	// (0x0002d907) cell_pinb_pane_g

0xa031,	// (0x00028894) grid_highlight_pane_cp01

0xa307,	// (0x00028b6a) list_pinb_item_pane_ParamLimits

0xa307,	// (0x00028b6a) list_pinb_item_pane

0x9bdf,	// (0x00028442) list_highlight_pane_cp02

0xa331,	// (0x00028b94) list_pinb_item_pane_g1_ParamLimits

0xa331,	// (0x00028b94) list_pinb_item_pane_g1

0xa323,	// (0x00028b86) list_pinb_item_pane_g2_ParamLimits

0xa323,	// (0x00028b86) list_pinb_item_pane_g2

0xa315,	// (0x00028b78) list_pinb_item_pane_g3_ParamLimits

0xa315,	// (0x00028b78) list_pinb_item_pane_g3

0xa323,	// (0x00028b86) list_pinb_item_pane_g4_ParamLimits

0xa323,	// (0x00028b86) list_pinb_item_pane_g4

0x0003,

0xf0ab,	// (0x0002d90e) list_pinb_item_pane_g_ParamLimits

0xf0ab,	// (0x0002d90e) list_pinb_item_pane_g

0xa33f,	// (0x00028ba2) list_pinb_item_pane_t1_ParamLimits

0xa33f,	// (0x00028ba2) list_pinb_item_pane_t1

0x0e5c,	// (0x0001f6bf) calc_display_pane

0x0e7a,	// (0x0001f6dd) calc_paper_pane

0x0e96,	// (0x0001f6f9) grid_calc_pane

0xa031,	// (0x00028894) bg_list_pane_cp01

0x2474,	// (0x00020cd7) clock_g1

0x247c,	// (0x00020cdf) clock_g2

0x0001,

0xf0b4,	// (0x0002d917) clock_g

0x2486,	// (0x00020ce9) clock_t1_ParamLimits

0x2486,	// (0x00020ce9) clock_t1

0x249b,	// (0x00020cfe) clock_t2_ParamLimits

0x249b,	// (0x00020cfe) clock_t2

0x24ad,	// (0x00020d10) clock_t3_ParamLimits

0x24ad,	// (0x00020d10) clock_t3

0x24bf,	// (0x00020d22) clock_t4_ParamLimits

0x24bf,	// (0x00020d22) clock_t4

0x24d1,	// (0x00020d34) clock_t5_ParamLimits

0x24d1,	// (0x00020d34) clock_t5

0x24e6,	// (0x00020d49) clock_t6_ParamLimits

0x24e6,	// (0x00020d49) clock_t6

0x24f8,	// (0x00020d5b) clock_t7_ParamLimits

0x24f8,	// (0x00020d5b) clock_t7

0x250a,	// (0x00020d6d) clock_t8_ParamLimits

0x250a,	// (0x00020d6d) clock_t8

0x2520,	// (0x00020d83) clock_t9_ParamLimits

0x2520,	// (0x00020d83) clock_t9

0x0008,

0xf0b9,	// (0x0002d91c) clock_t_ParamLimits

0xf0b9,	// (0x0002d91c) clock_t

0xa353,	// (0x00028bb6) popup_clock_analogue_window_cp02

0xa353,	// (0x00028bb6) popup_clock_digital_window_cp01

0xa031,	// (0x00028894) listscroll_help_pane

0xa031,	// (0x00028894) phob_pre_status_pane

0xa35b,	// (0x00028bbe) grid_qdial_pane

0xa28c,	// (0x00028aef) listscroll_mce_pane

0xa28c,	// (0x00028aef) bg_notes_pane

0xa365,	// (0x00028bc8) list_notes_pane

0x2536,	// (0x00020d99) scroll_pane_cp06

0xa373,	// (0x00028bd6) bg_calc_paper_pane

0x0ec2,	// (0x0001f725) list_calc_pane

0xa387,	// (0x00028bea) bg_calc_display_pane

0x0edc,	// (0x0001f73f) calc_display_pane_t1

0x0ef1,	// (0x0001f754) calc_display_pane_t2

0x0f06,	// (0x0001f769) calc_display_pane_t3

0x0002,

0xf0cc,	// (0x0002d92f) calc_display_pane_t

0x0f18,	// (0x0001f77b) cell_calc_pane_ParamLimits

0x0f18,	// (0x0001f77b) cell_calc_pane

0xa393,	// (0x00028bf6) bg_calc_paper_pane_g1

0xa39f,	// (0x00028c02) bg_calc_paper_pane_g2

0xa3ab,	// (0x00028c0e) bg_calc_paper_pane_g3

0xa3b7,	// (0x00028c1a) bg_calc_paper_pane_g4

0xa3c3,	// (0x00028c26) bg_calc_paper_pane_g5

0x2545,	// (0x00020da8) bg_calc_paper_pane_g6

0x2556,	// (0x00020db9) bg_calc_paper_pane_g7

0x2567,	// (0x00020dca) bg_calc_paper_pane_g8

0x0007,

0xf0d3,	// (0x0002d936) bg_calc_paper_pane_g

0x2578,	// (0x00020ddb) calc_bg_paper_pane_g9

0x2589,	// (0x00020dec) list_calc_item_pane_ParamLimits

0x2589,	// (0x00020dec) list_calc_item_pane

0xa3cf,	// (0x00028c32) list_calc_item_pane_g1

0x0f47,	// (0x0001f7aa) list_calc_item_pane_t1_ParamLimits

0x0f47,	// (0x0001f7aa) list_calc_item_pane_t1

0x0f59,	// (0x0001f7bc) list_calc_item_pane_t2_ParamLimits

0x0f59,	// (0x0001f7bc) list_calc_item_pane_t2

0x0001,

0xf0e4,	// (0x0002d947) list_calc_item_pane_t_ParamLimits

0xf0e4,	// (0x0002d947) list_calc_item_pane_t

0xa2a4,	// (0x00028b07) cell_calc_pane_g1

0xa3dc,	// (0x00028c3f) grid_highlight_pane_cp02

0xd4ef,	// (0x0002bd52) bg_calc_display_pane_g1

0x0f89,	// (0x0001f7ec) bg_calc_display_pane_g2

0xd4f8,	// (0x0002bd5b) bg_calc_display_pane_g3

0x0002,

0xf0ee,	// (0x0002d951) bg_calc_display_pane_g

0x0f93,	// (0x0001f7f6) cell_qdial_pane_ParamLimits

0x0f93,	// (0x0001f7f6) cell_qdial_pane

0x25aa,	// (0x00020e0d) cell_qdial_pane_g1_ParamLimits

0x25aa,	// (0x00020e0d) cell_qdial_pane_g1

0x25b7,	// (0x00020e1a) cell_qdial_pane_g2_ParamLimits

0x25b7,	// (0x00020e1a) cell_qdial_pane_g2

0xa3fe,	// (0x00028c61) cell_qdial_pane_g3_ParamLimits

0xa3fe,	// (0x00028c61) cell_qdial_pane_g3

0x0003,

0xf0f5,	// (0x0002d958) cell_qdial_pane_g_ParamLimits

0xf0f5,	// (0x0002d958) cell_qdial_pane_g

0x25d5,	// (0x00020e38) cell_qdial_pane_t1_ParamLimits

0x25d5,	// (0x00020e38) cell_qdial_pane_t1

0x25ed,	// (0x00020e50) cell_qdial_pane_t2_ParamLimits

0x25ed,	// (0x00020e50) cell_qdial_pane_t2

0x2600,	// (0x00020e63) cell_qdial_pane_t3_ParamLimits

0x2600,	// (0x00020e63) cell_qdial_pane_t3

0x0002,

0xf0fe,	// (0x0002d961) cell_qdial_pane_t_ParamLimits

0xf0fe,	// (0x0002d961) cell_qdial_pane_t

0xa031,	// (0x00028894) grid_highlight_pane_cp04

0xa40a,	// (0x00028c6d) thumbnail_qdial_pane_ParamLimits

0xa40a,	// (0x00028c6d) thumbnail_qdial_pane

0xa466,	// (0x00028cc9) list_help_pane

0xa46f,	// (0x00028cd2) scroll_pane_cp02

0x2613,	// (0x00020e76) help_list_pane_t1_ParamLimits

0x2613,	// (0x00020e76) help_list_pane_t1

0x0fa9,	// (0x0001f80c) bg_notes_pane_g2

0x0fb1,	// (0x0001f814) bg_notes_pane_g3

0x0fb9,	// (0x0001f81c) notes_bg_pane_g1

0x0fc1,	// (0x0001f824) notes_bg_pane_g4

0x0fc9,	// (0x0001f82c) notes_bg_pane_g5

0x0fd1,	// (0x0001f834) notes_bg_pane_g6

0x0fd9,	// (0x0001f83c) notes_bg_pane_g7

0x0fe1,	// (0x0001f844) notes_bg_pane_g8

0x0fe9,	// (0x0001f84c) notes_bg_pane_g9

0x0006,

0xf11c,	// (0x0002d97f) notes_bg_pane_g

0x263a,	// (0x00020e9d) list_notes_text_pane_ParamLimits

0x263a,	// (0x00020e9d) list_notes_text_pane

0xa478,	// (0x00028cdb) list_notes_text_pane_g1

0xa481,	// (0x00028ce4) list_notes_text_pane_t1

0x2662,	// (0x00020ec5) listscroll_cale_week_pane

0x268e,	// (0x00020ef1) bg_cale_heading_pane

0x26b7,	// (0x00020f1a) bg_cale_pane_cp01

0x26d9,	// (0x00020f3c) cale_week_corner_pane

0x26f8,	// (0x00020f5b) cale_week_day_heading_pane

0x2726,	// (0x00020f89) cale_week_scroll_pane_g1

0x274a,	// (0x00020fad) cale_week_scroll_pane_g2

0x2762,	// (0x00020fc5) cale_week_scroll_pane_g3

0x277a,	// (0x00020fdd) cale_week_scroll_pane_g4

0x2792,	// (0x00020ff5) cale_week_scroll_pane_g5

0x27aa,	// (0x0002100d) cale_week_scroll_pane_g6

0x27ca,	// (0x0002102d) cale_week_scroll_pane_g7

0x27ea,	// (0x0002104d) cale_week_scroll_pane_g8

0x280a,	// (0x0002106d) cale_week_scroll_pane_g9

0x2827,	// (0x0002108a) cale_week_scroll_pane_g10

0x2844,	// (0x000210a7) cale_week_scroll_pane_g11

0x2863,	// (0x000210c6) cale_week_scroll_pane_g12

0x2888,	// (0x000210eb) cale_week_scroll_pane_g13

0x28b1,	// (0x00021114) cale_week_scroll_pane_g14

0x28da,	// (0x0002113d) cale_week_scroll_pane_g15

0x000f,

0xf12b,	// (0x0002d98e) cale_week_scroll_pane_g

0x2923,	// (0x00021186) cale_week_time_pane

0x2943,	// (0x000211a6) grid_cale_week_pane

0xa4bb,	// (0x00028d1e) scroll_pane_cp08

0x2974,	// (0x000211d7) cell_cale_week_pane_ParamLimits

0x2974,	// (0x000211d7) cell_cale_week_pane

0x2a04,	// (0x00021267) cale_week_day_heading_pane_t1

0x2a2c,	// (0x0002128f) cale_week_day_heading_pane_t2

0x2a59,	// (0x000212bc) cale_week_day_heading_pane_t3

0x2a86,	// (0x000212e9) cale_week_day_heading_pane_t4

0x2ab3,	// (0x00021316) cale_week_day_heading_pane_t5

0x2ae0,	// (0x00021343) cale_week_day_heading_pane_t6

0x2b0d,	// (0x00021370) cale_week_day_heading_pane_t7

0x0006,

0xf14c,	// (0x0002d9af) cale_week_day_heading_pane_t

0xa4d8,	// (0x00028d3b) bg_cale_side_pane

0x0ff1,	// (0x0001f854) cale_week_time_pane_t1

0x1015,	// (0x0001f878) cale_week_time_pane_t2

0x1039,	// (0x0001f89c) cale_week_time_pane_t3

0x105d,	// (0x0001f8c0) cale_week_time_pane_t4

0x1081,	// (0x0001f8e4) cale_week_time_pane_t5

0x10a7,	// (0x0001f90a) cale_week_time_pane_t6

0x10cf,	// (0x0001f932) cale_week_time_pane_t7

0x10fb,	// (0x0001f95e) cale_week_time_pane_t8

0x0007,

0xf15b,	// (0x0002d9be) cale_week_time_pane_t

0x2b35,	// (0x00021398) cell_cale_week_pane_g2

0x2b59,	// (0x000213bc) cell_cale_week_pane_g3_ParamLimits

0x2b59,	// (0x000213bc) cell_cale_week_pane_g3

0xa4e6,	// (0x00028d49) grid_highlight_pane_cp07

0xa4ee,	// (0x00028d51) listscroll_gms_pane

0xa4f8,	// (0x00028d5b) grid_gms_pane

0xa501,	// (0x00028d64) listscroll_gms_pane_g1

0xa509,	// (0x00028d6c) listscroll_gms_pane_g2

0x0001,

0xf16c,	// (0x0002d9cf) listscroll_gms_pane_g

0x2b71,	// (0x000213d4) scroll_pane_cp010

0x2b7c,	// (0x000213df) cell_gms_pane_ParamLimits

0x2b7c,	// (0x000213df) cell_gms_pane

0x2b8f,	// (0x000213f2) cell_gms_pane_g1

0xa511,	// (0x00028d74) cell_gms_pane_g2

0xa519,	// (0x00028d7c) cell_gms_pane_g3

0xa522,	// (0x00028d85) cell_gms_pane_g4

0x0003,

0xf171,	// (0x0002d9d4) cell_gms_pane_g

0xa52b,	// (0x00028d8e) grid_highlight_pane_cp09

0x4bea,	// (0x0002344d) phob_pre_status_pane_g1

0x4bf2,	// (0x00023455) phob_pre_status_pane_g2

0x4bfa,	// (0x0002345d) phob_pre_status_pane_g3

0x4c02,	// (0x00023465) phob_pre_status_pane_g4

0x0004,

0xf53a,	// (0x0002dd9d) phob_pre_status_pane_g

0x4c12,	// (0x00023475) phob_pre_status_pane_t1

0x4c22,	// (0x00023485) phob_pre_status_pane_t2

0x4c32,	// (0x00023495) phob_pre_status_pane_t3

0x0002,

0xf545,	// (0x0002dda8) phob_pre_status_pane_t

0xa533,	// (0x00028d96) bg_list_pane_cp05

0x2b9f,	// (0x00021402) grid_vorec_pane

0x2ba9,	// (0x0002140c) vorec_t1

0x2bb7,	// (0x0002141a) vorec_t2

0x2bc5,	// (0x00021428) vorec_t3

0x2bd3,	// (0x00021436) vorec_t4

0x23d2,	// (0x00020c35) vorec_t5

0x23e0,	// (0x00020c43) vorec_t6

0x0004,

0xf17a,	// (0x0002d9dd) vorec_t

0x23ee,	// (0x00020c51) wait_bar_pane_cp01

0x2bef,	// (0x00021452) cell_vorec_pane_ParamLimits

0x2bef,	// (0x00021452) cell_vorec_pane

0x112b,	// (0x0001f98e) cell_vorec_pane_g1

0xa031,	// (0x00028894) grid_highlight_pane_cp05

0xa307,	// (0x00028b6a) cams_zoom_pane

0xa307,	// (0x00028b6a) image_vga_pane

0xa323,	// (0x00028b86) main_camera_pane_g1

0xa323,	// (0x00028b86) main_camera_pane_g2

0xa323,	// (0x00028b86) main_camera_pane_g3

0xa323,	// (0x00028b86) main_camera_pane_g4

0xa323,	// (0x00028b86) main_camera_pane_g5

0xa323,	// (0x00028b86) main_camera_pane_g6

0xa323,	// (0x00028b86) main_camera_pane_g7

0x0007,

0xf185,	// (0x0002d9e8) main_camera_pane_g

0xae99,	// (0x000296fc) main_camera_pane_t1

0xae99,	// (0x000296fc) main_camera_pane_t2

0x0001,

0xf196,	// (0x0002d9f9) main_camera_pane_t

0x2c04,	// (0x00021467) cams_zoom_pane_cp_ParamLimits

0x2c04,	// (0x00021467) cams_zoom_pane_cp

0x2c32,	// (0x00021495) image_cif_pane_ParamLimits

0x2c32,	// (0x00021495) image_cif_pane

0x9bdf,	// (0x00028442) image_subqcif_pane

0x2c40,	// (0x000214a3) main_video_pane_g1_ParamLimits

0x2c40,	// (0x000214a3) main_video_pane_g1

0x2c68,	// (0x000214cb) main_video_pane_g2_ParamLimits

0x2c68,	// (0x000214cb) main_video_pane_g2

0x2c9b,	// (0x000214fe) main_video_pane_g3_ParamLimits

0x2c9b,	// (0x000214fe) main_video_pane_g3

0x2c9b,	// (0x000214fe) main_video_pane_g4_ParamLimits

0x2c9b,	// (0x000214fe) main_video_pane_g4

0x2cc9,	// (0x0002152c) main_video_pane_g5_ParamLimits

0x2cc9,	// (0x0002152c) main_video_pane_g5

0xa53b,	// (0x00028d9e) main_video_pane_g6_ParamLimits

0xa53b,	// (0x00028d9e) main_video_pane_g6

0x0006,

0xf19b,	// (0x0002d9fe) main_video_pane_g_ParamLimits

0xf19b,	// (0x0002d9fe) main_video_pane_g

0x2ce5,	// (0x00021548) main_video_pane_t1_ParamLimits

0x2ce5,	// (0x00021548) main_video_pane_t1

0xa555,	// (0x00028db8) cams_zoom_pane_g1

0xa555,	// (0x00028db8) cams_zoom_pane_g2

0xa555,	// (0x00028db8) cams_zoom_pane_g3

0xa555,	// (0x00028db8) cams_zoom_pane_g4

0x0003,

0xf1aa,	// (0x0002da0d) cams_zoom_pane_g

0x2d2b,	// (0x0002158e) grid_cams_pane

0x2d39,	// (0x0002159c) linegrid_cams_pane

0x2d45,	// (0x000215a8) cell_cams_pane_ParamLimits

0x2d45,	// (0x000215a8) cell_cams_pane

0xa55f,	// (0x00028dc2) cams_burst_image_pane

0xa567,	// (0x00028dca) cell_cams_pane_g1

0xa031,	// (0x00028894) grid_highlight_pane_cp03

0xa2a4,	// (0x00028b07) mp_bg_pane_g1

0x9bdf,	// (0x00028442) bg_list_pane_cp03

0x9bdf,	// (0x00028442) bg_mp_pane

0x9bdf,	// (0x00028442) grid_mp_pane

0xa555,	// (0x00028db8) media_player_g1

0xaac4,	// (0x00029327) media_player_t1

0xaac4,	// (0x00029327) media_player_t2

0xaac4,	// (0x00029327) media_player_t3

0xaac4,	// (0x00029327) media_player_t4

0xaac4,	// (0x00029327) media_player_t5

0xaac4,	// (0x00029327) media_player_t6

0xaac4,	// (0x00029327) media_player_t7

0x0006,

0xf524,	// (0x0002dd87) media_player_t

0x9bdf,	// (0x00028442) wait_bar_pane_cp02

0xf509,	// (0x0002dd6c) main_usb_pane_t

0xad2f,	// (0x00029592) cell_mp_pane

0xa2a4,	// (0x00028b07) cell_mp_pane_g1

0xa031,	// (0x00028894) grid_highlight_pane_cp06

0xa58c,	// (0x00028def) grid_skin_colour_pane

0xa594,	// (0x00028df7) list_highlight_pane_cp03

0x2d5a,	// (0x000215bd) skin_g1

0xa59c,	// (0x00028dff) skin_t1

0xa5ab,	// (0x00028e0e) skin_t2

0x0001,

0xf1d8,	// (0x0002da3b) skin_t

0x2d64,	// (0x000215c7) cell_skin_colour_pane_ParamLimits

0x2d64,	// (0x000215c7) cell_skin_colour_pane

0xa5b9,	// (0x00028e1c) cell_skin_colour_pane_g1

0x2de4,	// (0x00021647) call_video_g1_ParamLimits

0x2de4,	// (0x00021647) call_video_g1

0x2df4,	// (0x00021657) call_video_g2_ParamLimits

0x2df4,	// (0x00021657) call_video_g2

0x0001,

0xf1dd,	// (0x0002da40) call_video_g_ParamLimits

0xf1dd,	// (0x0002da40) call_video_g

0x2e44,	// (0x000216a7) call_video_uplink_pane_cp1_ParamLimits

0x2e44,	// (0x000216a7) call_video_uplink_pane_cp1

0xa5cb,	// (0x00028e2e) call_video_uplink_pane_cp2

0x2f12,	// (0x00021775) video_down_crop_pane_ParamLimits

0x2f12,	// (0x00021775) video_down_crop_pane

0x3004,	// (0x00021867) video_down_pane_ParamLimits

0x3004,	// (0x00021867) video_down_pane

0xa5d3,	// (0x00028e36) video_down_subqcif_pane_ParamLimits

0xa5d3,	// (0x00028e36) video_down_subqcif_pane

0xa5ed,	// (0x00028e50) video_down_subqcif_pane_cp_ParamLimits

0xa5ed,	// (0x00028e50) video_down_subqcif_pane_cp

0xa615,	// (0x00028e78) im_reading_pane_ParamLimits

0xa615,	// (0x00028e78) im_reading_pane

0x3121,	// (0x00021984) im_writing_pane_ParamLimits

0x3121,	// (0x00021984) im_writing_pane

0x313f,	// (0x000219a2) im_reading_pane_t1

0xa62f,	// (0x00028e92) list_im_pane

0xa640,	// (0x00028ea3) scroll_pane_cp07

0x3181,	// (0x000219e4) im_writing_pane_t1_ParamLimits

0x3181,	// (0x000219e4) im_writing_pane_t1

0xa659,	// (0x00028ebc) im_writing_pane_t2_ParamLimits

0xa659,	// (0x00028ebc) im_writing_pane_t2

0x0001,

0xf1e7,	// (0x0002da4a) im_writing_pane_t_ParamLimits

0xf1e7,	// (0x0002da4a) im_writing_pane_t

0xa031,	// (0x00028894) input_focus_pane_cp04

0xa031,	// (0x00028894) input_focus_pane_cp05

0x3193,	// (0x000219f6) list_im_single_pane_ParamLimits

0x3193,	// (0x000219f6) list_im_single_pane

0xa676,	// (0x00028ed9) list_single_im_pane_t1

0xa533,	// (0x00028d96) blid_accuracy_pane

0xa533,	// (0x00028d96) blid_compass_pane

0xc1ba,	// (0x0002aa1d) main_location_t1

0xc1ba,	// (0x0002aa1d) main_location_t2

0xc1ba,	// (0x0002aa1d) main_location_t3

0x0002,

0xf533,	// (0x0002dd96) main_location_t

0xa031,	// (0x00028894) aid_levels_location

0xa2a4,	// (0x00028b07) blid_accuracy_pane_g1

0xa2a4,	// (0x00028b07) blid_accuracy_pane_g2

0x0001,

0xf23b,	// (0x0002da9e) blid_accuracy_pane_g

0xa6b0,	// (0x00028f13) wml_content_pane

0xa6ee,	// (0x00028f51) wml_button_pane_ParamLimits

0xa6ee,	// (0x00028f51) wml_button_pane

0x31ac,	// (0x00021a0f) wml_list_single_large_pane_ParamLimits

0x31ac,	// (0x00021a0f) wml_list_single_large_pane

0x31ce,	// (0x00021a31) wml_list_single_medium_pane_ParamLimits

0x31ce,	// (0x00021a31) wml_list_single_medium_pane

0x31f1,	// (0x00021a54) wml_list_single_small_pane_ParamLimits

0x31f1,	// (0x00021a54) wml_list_single_small_pane

0xa702,	// (0x00028f65) wml_selection_box_pane_ParamLimits

0xa702,	// (0x00028f65) wml_selection_box_pane

0xa715,	// (0x00028f78) wml_list_single_pane_t1

0xa724,	// (0x00028f87) wml_list_single_medium_pane_t1

0xa733,	// (0x00028f96) wml_list_single_large_pane_t1

0xa742,	// (0x00028fa5) input_focus_pane_cp02_ParamLimits

0xa742,	// (0x00028fa5) input_focus_pane_cp02

0xa755,	// (0x00028fb8) wml_selection_box_pane_g1

0xa75e,	// (0x00028fc1) wml_selection_box_pane_t1_ParamLimits

0xa75e,	// (0x00028fc1) wml_selection_box_pane_t1

0xa28c,	// (0x00028aef) bg_wml_button_pane_ParamLimits

0xa28c,	// (0x00028aef) bg_wml_button_pane

0xa776,	// (0x00028fd9) wml_button_pane_g1

0xa77e,	// (0x00028fe1) wml_button_pane_t1

0xa776,	// (0x00028fd9) wml_button_bg_pane_g1

0xa78e,	// (0x00028ff1) wml_button_bg_pane_g2

0xa796,	// (0x00028ff9) wml_button_bg_pane_g3

0xa79e,	// (0x00029001) wml_button_bg_pane_g4

0xa7a6,	// (0x00029009) wml_button_bg_pane_g5

0xa7ae,	// (0x00029011) wml_button_bg_pane_g6

0xa7b6,	// (0x00029019) wml_button_bg_pane_g7

0xa7be,	// (0x00029021) wml_button_bg_pane_g8

0xa7c6,	// (0x00029029) wml_button_bg_pane_g9

0x0008,

0xf1ec,	// (0x0002da4f) wml_button_bg_pane_g

0x3219,	// (0x00021a7c) bg_list_pane_cp02

0xa7ce,	// (0x00029031) mce_header_pane_ParamLimits

0xa7ce,	// (0x00029031) mce_header_pane

0xa7e4,	// (0x00029047) mce_icon_pane

0xa7e4,	// (0x00029047) mce_image_pane

0xa7ed,	// (0x00029050) mce_text_pane_ParamLimits

0xa7ed,	// (0x00029050) mce_text_pane

0x3223,	// (0x00021a86) scroll_pane_cp03

0xa6e6,	// (0x00028f49) scroll_pane_cp04

0xa800,	// (0x00029063) scroll_pane_cp05_ParamLimits

0xa800,	// (0x00029063) scroll_pane_cp05

0x322d,	// (0x00021a90) mce_header_field_pane_ParamLimits

0x322d,	// (0x00021a90) mce_header_field_pane

0x324f,	// (0x00021ab2) mce_header_field_pane_2_ParamLimits

0x324f,	// (0x00021ab2) mce_header_field_pane_2

0x3265,	// (0x00021ac8) mce_header_field_pane_3

0x326d,	// (0x00021ad0) list_single_mce_message_pane_ParamLimits

0x326d,	// (0x00021ad0) list_single_mce_message_pane

0x328c,	// (0x00021aef) list_single_mce_smart_pane_ParamLimits

0x328c,	// (0x00021aef) list_single_mce_smart_pane

0xa80c,	// (0x0002906f) input_focus_pane_cp03

0xa815,	// (0x00029078) list_header_data_pane

0x32b6,	// (0x00021b19) mce_header_field_pane_t1

0x32c6,	// (0x00021b29) list_single_mce_header_pane_ParamLimits

0x32c6,	// (0x00021b29) list_single_mce_header_pane

0xa81d,	// (0x00029080) list_single_mce_header_pane_t1

0xa82c,	// (0x0002908f) list_single_mce_message_pane_g1

0xa834,	// (0x00029097) list_single_mce_message_pane_t1

0x330a,	// (0x00021b6d) bg_cale_heading_pane_cp01_ParamLimits

0x330a,	// (0x00021b6d) bg_cale_heading_pane_cp01

0xa842,	// (0x000290a5) bg_cale_pane_cp02_ParamLimits

0xa842,	// (0x000290a5) bg_cale_pane_cp02

0x335c,	// (0x00021bbf) cale_month_corner_pane

0x337b,	// (0x00021bde) cale_month_day_heading_pane_ParamLimits

0x337b,	// (0x00021bde) cale_month_day_heading_pane

0x33dd,	// (0x00021c40) cale_month_pane_g1_ParamLimits

0x33dd,	// (0x00021c40) cale_month_pane_g1

0x3424,	// (0x00021c87) cale_month_pane_g2_ParamLimits

0x3424,	// (0x00021c87) cale_month_pane_g2

0x345c,	// (0x00021cbf) cale_month_pane_g3_ParamLimits

0x345c,	// (0x00021cbf) cale_month_pane_g3

0x34b0,	// (0x00021d13) cale_month_pane_g4_ParamLimits

0x34b0,	// (0x00021d13) cale_month_pane_g4

0x3504,	// (0x00021d67) cale_month_pane_g5_ParamLimits

0x3504,	// (0x00021d67) cale_month_pane_g5

0x3558,	// (0x00021dbb) cale_month_pane_g6_ParamLimits

0x3558,	// (0x00021dbb) cale_month_pane_g6

0x35bc,	// (0x00021e1f) cale_month_pane_g7_ParamLimits

0x35bc,	// (0x00021e1f) cale_month_pane_g7

0x3620,	// (0x00021e83) cale_month_pane_g8_ParamLimits

0x3620,	// (0x00021e83) cale_month_pane_g8

0x3684,	// (0x00021ee7) cale_month_pane_g9_ParamLimits

0x3684,	// (0x00021ee7) cale_month_pane_g9

0x36de,	// (0x00021f41) cale_month_pane_g10_ParamLimits

0x36de,	// (0x00021f41) cale_month_pane_g10

0x3730,	// (0x00021f93) cale_month_pane_g11_ParamLimits

0x3730,	// (0x00021f93) cale_month_pane_g11

0x377e,	// (0x00021fe1) cale_month_pane_g12_ParamLimits

0x377e,	// (0x00021fe1) cale_month_pane_g12

0x37ce,	// (0x00022031) cale_month_pane_g13_ParamLimits

0x37ce,	// (0x00022031) cale_month_pane_g13

0x000c,

0xf1ff,	// (0x0002da62) cale_month_pane_g_ParamLimits

0xf1ff,	// (0x0002da62) cale_month_pane_g

0x381e,	// (0x00022081) cale_month_week_pane

0x383e,	// (0x000220a1) grid_cale_month_pane_ParamLimits

0x383e,	// (0x000220a1) grid_cale_month_pane

0x3897,	// (0x000220fa) cale_month_day_heading_pane_t1

0x3919,	// (0x0002217c) cale_month_day_heading_pane_t2

0x3992,	// (0x000221f5) cale_month_day_heading_pane_t3

0x3a0b,	// (0x0002226e) cale_month_day_heading_pane_t4

0x3a84,	// (0x000222e7) cale_month_day_heading_pane_t5

0x3b05,	// (0x00022368) cale_month_day_heading_pane_t6

0x3b8e,	// (0x000223f1) cale_month_day_heading_pane_t7

0x0006,

0xf21a,	// (0x0002da7d) cale_month_day_heading_pane_t

0xa4d8,	// (0x00028d3b) bg_cale_side_pane_cp01

0x3c17,	// (0x0002247a) cale_month_week_pane_t1

0x3c30,	// (0x00022493) cale_month_week_pane_t2

0x3c49,	// (0x000224ac) cale_month_week_pane_t3

0x3c62,	// (0x000224c5) cale_month_week_pane_t4

0x3c7b,	// (0x000224de) cale_month_week_pane_t5

0x3c98,	// (0x000224fb) cale_month_week_pane_t6

0x0005,

0xf229,	// (0x0002da8c) cale_month_week_pane_t

0x3cbb,	// (0x0002251e) cell_cale_month_pane_ParamLimits

0x3cbb,	// (0x0002251e) cell_cale_month_pane

0x1135,	// (0x0001f998) cell_cale_month_pane_g1

0x1141,	// (0x0001f9a4) cell_cale_month_pane_t1_ParamLimits

0x1141,	// (0x0001f9a4) cell_cale_month_pane_t1

0xa4e6,	// (0x00028d49) grid_highlight_pane_cp08

0xa2a4,	// (0x00028b07) main_smil_g1

0x3de9,	// (0x0002264c) smil_status_pane

0xa881,	// (0x000290e4) smil_text_pane

0xc0d0,	// (0x0002a933) bg_popup_call3_rect_pane_g8

0xc0d8,	// (0x0002a93b) bg_popup_call3_rect_pane_g9

0x0008,

0xf4c7,	// (0x0002dd2a) bg_popup_call3_rect_pane_g

0xc283,	// (0x0002aae6) smil_status_volume_pane_g1

0xa88b,	// (0x000290ee) smil_status_pane_t1

0x1449,	// (0x0001fcac) volume_smil_pane

0xa8a2,	// (0x00029105) list_smil_text_pane

0x3dfc,	// (0x0002265f) scroll_pane_cp011

0x3e07,	// (0x0002266a) smil_text_list_pane_t1_ParamLimits

0x3e07,	// (0x0002266a) smil_text_list_pane_t1

0x116d,	// (0x0001f9d0) aid_volume_smil_ParamLimits

0x116d,	// (0x0001f9d0) aid_volume_smil

0xa2a4,	// (0x00028b07) smil_volume_pane_g1

0xa2a4,	// (0x00028b07) smil_volume_pane_g2

0x0001,

0xf23b,	// (0x0002da9e) smil_volume_pane_g

0x2662,	// (0x00020ec5) listscroll_cale_day_pane

0xa8ac,	// (0x0002910f) bg_cale_pane

0xa8c4,	// (0x00029127) list_cale_pane

0xa8e7,	// (0x0002914a) scroll_pane_cp09

0xa8f8,	// (0x0002915b) cale_bg_pane_g1

0xa900,	// (0x00029163) cale_bg_pane_g2

0xa908,	// (0x0002916b) cale_bg_pane_g3

0xa910,	// (0x00029173) cale_bg_pane_g4

0xa918,	// (0x0002917b) cale_bg_pane_g5

0xa920,	// (0x00029183) cale_bg_pane_g6

0xa928,	// (0x0002918b) cale_bg_pane_g7

0xa930,	// (0x00029193) cale_bg_pane_g8

0xa938,	// (0x0002919b) cale_bg_pane_g9

0x0008,

0xf240,	// (0x0002daa3) cale_bg_pane_g

0xa940,	// (0x000291a3) list_cale_time_pane_ParamLimits

0xa940,	// (0x000291a3) list_cale_time_pane

0xa957,	// (0x000291ba) list_cale_time_pane_g1_ParamLimits

0xa957,	// (0x000291ba) list_cale_time_pane_g1

0xa963,	// (0x000291c6) list_cale_time_pane_g2_ParamLimits

0xa963,	// (0x000291c6) list_cale_time_pane_g2

0x3e63,	// (0x000226c6) list_cale_time_pane_g3_ParamLimits

0x3e63,	// (0x000226c6) list_cale_time_pane_g3

0x3e71,	// (0x000226d4) list_cale_time_pane_g4_ParamLimits

0x3e71,	// (0x000226d4) list_cale_time_pane_g4

0x3e7f,	// (0x000226e2) list_cale_time_pane_g5_ParamLimits

0x3e7f,	// (0x000226e2) list_cale_time_pane_g5

0x0005,

0xf253,	// (0x0002dab6) list_cale_time_pane_g_ParamLimits

0xf253,	// (0x0002dab6) list_cale_time_pane_g

0xa97d,	// (0x000291e0) list_cale_time_pane_t1_ParamLimits

0xa97d,	// (0x000291e0) list_cale_time_pane_t1

0xa9a5,	// (0x00029208) list_cale_time_pane_t2_ParamLimits

0xa9a5,	// (0x00029208) list_cale_time_pane_t2

0x40e2,	// (0x00022945) aid_blid_cardinal_pane

0x4124,	// (0x00022987) compass_pane_t4

0xa9cd,	// (0x00029230) list_cale_time_pane_t4_ParamLimits

0xa9cd,	// (0x00029230) list_cale_time_pane_t4

0x4132,	// (0x00022995) compass_pane_t5

0x4142,	// (0x000229a5) compass_pane_t6

0x4150,	// (0x000229b3) compass_pane_t7

0xaddf,	// (0x00029642) navi_pane_cc_t1

0xaf4c,	// (0x000297af) aid_phob_thumbnail_center_pane

0x467e,	// (0x00022ee1) main_postcard_pane_g4_ParamLimits

0x0002,

0xf260,	// (0x0002dac3) list_cale_time_pane_t_ParamLimits

0xf260,	// (0x0002dac3) list_cale_time_pane_t

0x9c88,	// (0x000284eb) bg_popup_window_pane_cp02_ParamLimits

0x9c88,	// (0x000284eb) bg_popup_window_pane_cp02

0xa9f5,	// (0x00029258) heading_pane_cp01_ParamLimits

0xa9f5,	// (0x00029258) heading_pane_cp01

0xaa01,	// (0x00029264) loc_req_pane_ParamLimits

0xaa01,	// (0x00029264) loc_req_pane

0xaa11,	// (0x00029274) loc_type_pane_ParamLimits

0xaa11,	// (0x00029274) loc_type_pane

0xaa23,	// (0x00029286) loc_type_pane_t1_ParamLimits

0xaa23,	// (0x00029286) loc_type_pane_t1

0xaa35,	// (0x00029298) loc_type_pane_t2_ParamLimits

0xaa35,	// (0x00029298) loc_type_pane_t2

0xaa47,	// (0x000292aa) loc_type_pane_t3_ParamLimits

0xaa47,	// (0x000292aa) loc_type_pane_t3

0x0002,

0xf267,	// (0x0002daca) loc_type_pane_t_ParamLimits

0xf267,	// (0x0002daca) loc_type_pane_t

0xaa59,	// (0x000292bc) list_loc_req_pane

0xaa63,	// (0x000292c6) scroll_pane_cp012

0x3e8d,	// (0x000226f0) list_single_loc_request_popup_menu_pane_ParamLimits

0x3e8d,	// (0x000226f0) list_single_loc_request_popup_menu_pane

0xaa6e,	// (0x000292d1) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa6e,	// (0x000292d1) list_single_loc_request_popup_menu_pane_g1

0xaa7a,	// (0x000292dd) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa7a,	// (0x000292dd) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf26e,	// (0x0002dad1) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf26e,	// (0x0002dad1) list_single_loc_request_popup_menu_pane_g

0xaa86,	// (0x000292e9) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa86,	// (0x000292e9) list_single_loc_request_popup_menu_pane_t1

0x3e9f,	// (0x00022702) bg_popup_window_pane_cp03_ParamLimits

0x3e9f,	// (0x00022702) bg_popup_window_pane_cp03

0x3ead,	// (0x00022710) heading_loc_req_pane_ParamLimits

0x3ead,	// (0x00022710) heading_loc_req_pane

0x3eb9,	// (0x0002271c) popup_dyc_status_message_window_g1_ParamLimits

0x3eb9,	// (0x0002271c) popup_dyc_status_message_window_g1

0x3ec5,	// (0x00022728) popup_dyc_status_message_window_t1_ParamLimits

0x3ec5,	// (0x00022728) popup_dyc_status_message_window_t1

0x3ed7,	// (0x0002273a) popup_dyc_status_message_window_t2_ParamLimits

0x3ed7,	// (0x0002273a) popup_dyc_status_message_window_t2

0x3ee9,	// (0x0002274c) popup_dyc_status_message_window_t3_ParamLimits

0x3ee9,	// (0x0002274c) popup_dyc_status_message_window_t3

0x0002,

0xf273,	// (0x0002dad6) popup_dyc_status_message_window_t_ParamLimits

0xf273,	// (0x0002dad6) popup_dyc_status_message_window_t

0xa031,	// (0x00028894) bg_heading_pane_cp01

0xaa9c,	// (0x000292ff) heading_loc_req_pane_g1

0xaaa4,	// (0x00029307) heading_loc_req_pane_g2

0xaaac,	// (0x0002930f) heading_loc_req_pane_g3

0x0002,

0xf27a,	// (0x0002dadd) heading_loc_req_pane_g

0xaab4,	// (0x00029317) heading_loc_req_pane_t1

0xaad4,	// (0x00029337) bg_popup_sub_pane_cp01_ParamLimits

0xaad4,	// (0x00029337) bg_popup_sub_pane_cp01

0xaae2,	// (0x00029345) popup_cale_events_window_g1_ParamLimits

0xaae2,	// (0x00029345) popup_cale_events_window_g1

0xab02,	// (0x00029365) popup_cale_events_window_g2_ParamLimits

0xab02,	// (0x00029365) popup_cale_events_window_g2

0x0001,

0xf29c,	// (0x0002daff) popup_cale_events_window_g_ParamLimits

0xf29c,	// (0x0002daff) popup_cale_events_window_g

0xab22,	// (0x00029385) popup_cale_events_window_t1_ParamLimits

0xab22,	// (0x00029385) popup_cale_events_window_t1

0xab34,	// (0x00029397) popup_cale_events_window_t2_ParamLimits

0xab34,	// (0x00029397) popup_cale_events_window_t2

0xab72,	// (0x000293d5) popup_cale_events_window_t3_ParamLimits

0xab72,	// (0x000293d5) popup_cale_events_window_t3

0xabac,	// (0x0002940f) popup_cale_events_window_t4_ParamLimits

0xabac,	// (0x0002940f) popup_cale_events_window_t4

0x0003,

0xf2a1,	// (0x0002db04) popup_cale_events_window_t_ParamLimits

0xf2a1,	// (0x0002db04) popup_cale_events_window_t

0x3f13,	// (0x00022776) call_type_pane

0xb7af,	// (0x0002a012) popup_call_status_window_g1

0x3f1f,	// (0x00022782) popup_call_status_window_g2

0x3f2b,	// (0x0002278e) popup_call_status_window_g3

0x0002,

0xf2aa,	// (0x0002db0d) popup_call_status_window_g

0xabe2,	// (0x00029445) call_type_pane_g1

0xabeb,	// (0x0002944e) call_type_pane_g2

0x0001,

0xf2b1,	// (0x0002db14) call_type_pane_g

0xa031,	// (0x00028894) bg_popup_sub_pane_cp02

0xabf4,	// (0x00029457) listscroll_popup_wml_pane

0xabfc,	// (0x0002945f) list_wml_pane

0xac06,	// (0x00029469) scroll_pane_cp013

0xac11,	// (0x00029474) list_single_graphic_popup_wml_pane_ParamLimits

0xac11,	// (0x00029474) list_single_graphic_popup_wml_pane

0xa2a4,	// (0x00028b07) list_single_graphic_popup_wml_pane_g1

0xac25,	// (0x00029488) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf2b6,	// (0x0002db19) list_single_graphic_popup_wml_pane_g

0xac2d,	// (0x00029490) list_single_graphic_popup_wml_pane_t1

0xac43,	// (0x000294a6) aid_call_pane

0xa284,	// (0x00028ae7) popup_clock_analogue_window_g1

0xa284,	// (0x00028ae7) popup_clock_analogue_window_g2

0x118f,	// (0x0001f9f2) popup_clock_analogue_window_g3

0x118f,	// (0x0001f9f2) popup_clock_analogue_window_g4

0xa2a4,	// (0x00028b07) popup_clock_analogue_window_g5

0x0004,

0xf2bb,	// (0x0002db1e) popup_clock_analogue_window_g

0x1197,	// (0x0001f9fa) popup_clock_analogue_window_t1

0x11a5,	// (0x0001fa08) clock_digital_number_pane_ParamLimits

0x11a5,	// (0x0001fa08) clock_digital_number_pane

0x11b1,	// (0x0001fa14) clock_digital_number_pane_cp02_ParamLimits

0x11b1,	// (0x0001fa14) clock_digital_number_pane_cp02

0x11bd,	// (0x0001fa20) clock_digital_number_pane_cp03_ParamLimits

0x11bd,	// (0x0001fa20) clock_digital_number_pane_cp03

0x11c9,	// (0x0001fa2c) clock_digital_number_pane_cp04_ParamLimits

0x11c9,	// (0x0001fa2c) clock_digital_number_pane_cp04

0x11d5,	// (0x0001fa38) clock_digital_separator_pane_ParamLimits

0x11d5,	// (0x0001fa38) clock_digital_separator_pane

0x11e1,	// (0x0001fa44) popup_clock_digital_window_t1

0xa2a4,	// (0x00028b07) clock_digital_number_pane_g1

0xa2a4,	// (0x00028b07) clock_digital_number_pane_g2

0x0001,

0xf23b,	// (0x0002da9e) clock_digital_number_pane_g

0xa2a4,	// (0x00028b07) clock_digital_separator_pane_g1

0xa2a4,	// (0x00028b07) clock_digital_separator_pane_g2

0x0001,

0xf23b,	// (0x0002da9e) clock_digital_separator_pane_g

0xa031,	// (0x00028894) bg_popup_window_pane_cp04

0xac4b,	// (0x000294ae) heading_pane_cp03

0xa533,	// (0x00028d96) listscroll_popup_gms_pane

0xa031,	// (0x00028894) grid_large_graphic_popup_pane

0xac54,	// (0x000294b7) listscroll_popup_gms_pane_g1

0xac5d,	// (0x000294c0) listscroll_popup_gms_pane_g2

0x0001,

0xf2c6,	// (0x0002db29) listscroll_popup_gms_pane_g

0xac66,	// (0x000294c9) scroll_pane_cp014

0xa307,	// (0x00028b6a) cell_large_graphic_popup_pane_ParamLimits

0xa307,	// (0x00028b6a) cell_large_graphic_popup_pane

0xa315,	// (0x00028b78) cell_large_graphic_popup_pane_g1_ParamLimits

0xa315,	// (0x00028b78) cell_large_graphic_popup_pane_g1

0xac6f,	// (0x000294d2) cell_large_graphic_popup_pane_g2_ParamLimits

0xac6f,	// (0x000294d2) cell_large_graphic_popup_pane_g2

0xac7d,	// (0x000294e0) cell_large_graphic_popup_pane_g3_ParamLimits

0xac7d,	// (0x000294e0) cell_large_graphic_popup_pane_g3

0xac8b,	// (0x000294ee) cell_large_graphic_popup_pane_g4_ParamLimits

0xac8b,	// (0x000294ee) cell_large_graphic_popup_pane_g4

0x0003,

0xf2cb,	// (0x0002db2e) cell_large_graphic_popup_pane_g_ParamLimits

0xf2cb,	// (0x0002db2e) cell_large_graphic_popup_pane_g

0xa031,	// (0x00028894) grid_highlight_pane_cp010

0xa2a4,	// (0x00028b07) bg_popup_call_pane_g1

0xac9c,	// (0x000294ff) list_single_graphic_popup_conf_pane_ParamLimits

0xac9c,	// (0x000294ff) list_single_graphic_popup_conf_pane

0xacae,	// (0x00029511) list_highlight_pane_cp01

0xacb7,	// (0x0002951a) list_single_graphic_popup_conf_pane_g1

0xacbf,	// (0x00029522) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf2d4,	// (0x0002db37) list_single_graphic_popup_conf_pane_g

0xacc7,	// (0x0002952a) list_single_graphic_popup_conf_pane_t1

0xacd5,	// (0x00029538) linegrid_cams_pane_g1

0x3f37,	// (0x0002279a) linegrid_cams_pane_g2

0xa519,	// (0x00028d7c) linegrid_cams_pane_g3

0xacde,	// (0x00029541) linegrid_cams_pane_g4

0x3f40,	// (0x000227a3) linegrid_cams_pane_g5

0x3f49,	// (0x000227ac) linegrid_cams_pane_g6

0xa522,	// (0x00028d85) linegrid_cams_pane_g7

0x0006,

0xf2d9,	// (0x0002db3c) linegrid_cams_pane_g

0xace7,	// (0x0002954a) popup_clock_analogue_window

0xace7,	// (0x0002954a) popup_clock_digital_window

0xa031,	// (0x00028894) popup_phob_thumbnail_window

0xa2a4,	// (0x00028b07) call_video_uplink_pane_g1

0xacf0,	// (0x00029553) call_video_uplink_pane_g2

0x0001,

0xf2e8,	// (0x0002db4b) call_video_uplink_pane_g

0xacf8,	// (0x0002955b) video_uplink_pane

0xad00,	// (0x00029563) mce_image_pane_g1

0x3f54,	// (0x000227b7) mce_image_pane_g2

0x3f5e,	// (0x000227c1) mce_image_pane_g3

0x3f68,	// (0x000227cb) mce_image_pane_g4

0x3f70,	// (0x000227d3) mce_image_pane_g5

0x0004,

0xf2ed,	// (0x0002db50) mce_image_pane_g

0xad0a,	// (0x0002956d) control_top_pane_stacon_cp01_ParamLimits

0xad0a,	// (0x0002956d) control_top_pane_stacon_cp01

0xad1e,	// (0x00029581) uni_indicator_pane_stacon_cp01_ParamLimits

0xad1e,	// (0x00029581) uni_indicator_pane_stacon_cp01

0xad2f,	// (0x00029592) bg_popup_sub_pane_cp03

0x3f78,	// (0x000227db) chi_dic_find_pane

0x3f80,	// (0x000227e3) listscroll_chi_dic_pane

0x3f89,	// (0x000227ec) main_pane_chidic_g1

0x3f9c,	// (0x000227ff) chi_dic_find_pane_t1

0xad39,	// (0x0002959c) find_chidic_pane

0xad42,	// (0x000295a5) chi_dic_list_pane_ParamLimits

0xad42,	// (0x000295a5) chi_dic_list_pane

0xad53,	// (0x000295b6) scroll_pane_cp020

0x3faa,	// (0x0002280d) find_chidic_pane_t1

0xa031,	// (0x00028894) input_focus_pane_cp06

0x3fb9,	// (0x0002281c) list_chi_dic_pane_ParamLimits

0x3fb9,	// (0x0002281c) list_chi_dic_pane

0x3fce,	// (0x00022831) list_chi_dic_pane_t1_ParamLimits

0x3fce,	// (0x00022831) list_chi_dic_pane_t1

0xa031,	// (0x00028894) list_highlight_pane_cp020

0xad5b,	// (0x000295be) bg_cale_heading_pane_g1

0x3fe1,	// (0x00022844) bg_cale_heading_pane_g2

0x3fe9,	// (0x0002284c) bg_cale_heading_pane_g3

0x3ff1,	// (0x00022854) bg_cale_heading_pane_g4

0x3ffb,	// (0x0002285e) bg_cale_heading_pane_g5

0x4005,	// (0x00022868) bg_cale_heading_pane_g6

0x400d,	// (0x00022870) bg_cale_heading_pane_g7

0x4015,	// (0x00022878) bg_cale_heading_pane_g8

0x401f,	// (0x00022882) bg_cale_heading_pane_g9

0x0008,

0xf2f8,	// (0x0002db5b) bg_cale_heading_pane_g

0xad5b,	// (0x000295be) bg_cale_side_pane_g1

0x4029,	// (0x0002288c) bg_cale_side_pane_g2

0x4033,	// (0x00022896) bg_cale_side_pane_g3

0x403d,	// (0x000228a0) bg_cale_side_pane_g4

0x4047,	// (0x000228aa) bg_cale_side_pane_g5

0x4051,	// (0x000228b4) bg_cale_side_pane_g6

0x405b,	// (0x000228be) bg_cale_side_pane_g7

0x4065,	// (0x000228c8) bg_cale_side_pane_g8

0x406d,	// (0x000228d0) bg_cale_side_pane_g9

0x0008,

0xf30b,	// (0x0002db6e) bg_cale_side_pane_g

0x4075,	// (0x000228d8) popup_call_status_window_ParamLimits

0x4075,	// (0x000228d8) popup_call_status_window

0xad63,	// (0x000295c6) stacon_top_pane

0xad6b,	// (0x000295ce) status_pane_ParamLimits

0xad6b,	// (0x000295ce) status_pane

0xad80,	// (0x000295e3) status_small_pane

0xad88,	// (0x000295eb) control_pane

0xa031,	// (0x00028894) stacon_bottom_pane

0xad90,	// (0x000295f3) list_single_mce_smart_pane_t1_ParamLimits

0xad90,	// (0x000295f3) list_single_mce_smart_pane_t1

0xada3,	// (0x00029606) list_single_mce_smart_pane_t2_ParamLimits

0xada3,	// (0x00029606) list_single_mce_smart_pane_t2

0x0001,

0xf31e,	// (0x0002db81) list_single_mce_smart_pane_t_ParamLimits

0xf31e,	// (0x0002db81) list_single_mce_smart_pane_t

0x4081,	// (0x000228e4) compass_pane

0x408c,	// (0x000228ef) main_location2_pane_t1

0x40a2,	// (0x00022905) main_location2_pane_t2

0x40b8,	// (0x0002291b) main_location2_pane_t3

0x0003,

0xf323,	// (0x0002db86) main_location2_pane_t

0xadc2,	// (0x00029625) compass_pane_g1_ParamLimits

0xadc2,	// (0x00029625) compass_pane_g1

0x4106,	// (0x00022969) compass_pane_t1

0x4115,	// (0x00022978) compass_pane_t2

0x0005,

0xf32c,	// (0x0002db8f) compass_pane_t

0x4160,	// (0x000229c3) text_secondary_cp61

0xadd6,	// (0x00029639) navi_pane_cams_g5

0xadf9,	// (0x0002965c) navi_pane_im_t1

0xae07,	// (0x0002966a) navi_pane_mp_g1_ParamLimits

0xae07,	// (0x0002966a) navi_pane_mp_g1

0xae1b,	// (0x0002967e) navi_pane_mp_g2_ParamLimits

0xae1b,	// (0x0002967e) navi_pane_mp_g2

0xae27,	// (0x0002968a) navi_pane_mp_g3_ParamLimits

0xae27,	// (0x0002968a) navi_pane_mp_g3

0x0002,

0xf340,	// (0x0002dba3) navi_pane_mp_g_ParamLimits

0xf340,	// (0x0002dba3) navi_pane_mp_g

0xae33,	// (0x00029696) navi_pane_mp_t1

0xae41,	// (0x000296a4) navi_pane_mp_t2

0x0002,

0xf347,	// (0x0002dbaa) navi_pane_mp_t

0xae7d,	// (0x000296e0) navi_pane_vt_g1

0xae33,	// (0x00029696) navi_pane_vt_t1

0xae85,	// (0x000296e8) navi_slider_pane

0xa533,	// (0x00028d96) zooming_pane

0xaead,	// (0x00029710) navi_slider_pane_g1

0x11fe,	// (0x0001fa61) navi_slider_pane_g2

0x0006,

0xf34e,	// (0x0002dbb1) navi_slider_pane_g

0xaed1,	// (0x00029734) aid_levels_zoom

0xaed9,	// (0x0002973c) zooming_pane_g1

0xaee1,	// (0x00029744) zooming_pane_g2

0xaee1,	// (0x00029744) zooming_pane_g3

0x0002,

0xf35d,	// (0x0002dbc0) zooming_pane_g

0xaee9,	// (0x0002974c) level_10_zoom

0xaef2,	// (0x00029755) level_11_zoom

0xaefb,	// (0x0002975e) level_1_zoom

0xaf04,	// (0x00029767) level_2_zoom

0xaf0d,	// (0x00029770) level_3_zoom

0xaf16,	// (0x00029779) level_4_zoom

0xaf1f,	// (0x00029782) level_5_zoom

0xaf28,	// (0x0002978b) level_6_zoom

0xaf31,	// (0x00029794) level_7_zoom

0xaf3a,	// (0x0002979d) level_8_zoom

0xaf43,	// (0x000297a6) level_9_zoom

0xaf54,	// (0x000297b7) popup_phob_thumbnail_window_g1

0xaf5c,	// (0x000297bf) popup_phob_thumbnail_window_g2

0x0001,

0xf364,	// (0x0002dbc7) popup_phob_thumbnail_window_g

0x4c42,	// (0x000234a5) level_1_location

0x4c4a,	// (0x000234ad) level_2_location

0x4c52,	// (0x000234b5) level_3_location

0x4c5c,	// (0x000234bf) level_4_location

0xa533,	// (0x00028d96) level_5_location

0x4295,	// (0x00022af8) mce_icon_pane_g1

0x429d,	// (0x00022b00) mce_icon_pane_g2

0x0001,

0xf369,	// (0x0002dbcc) mce_icon_pane_g

0x42a5,	// (0x00022b08) main_mup_pane_g1_ParamLimits

0x42a5,	// (0x00022b08) main_mup_pane_g1

0xa331,	// (0x00028b94) main_mup_pane_g2_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g2

0xa331,	// (0x00028b94) main_mup_pane_g3_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g3

0xa331,	// (0x00028b94) main_mup_pane_g4_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g4

0xa331,	// (0x00028b94) main_mup_pane_g5_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g5

0xa331,	// (0x00028b94) main_mup_pane_g6_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g6

0xa331,	// (0x00028b94) main_mup_pane_g7_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g7

0xa331,	// (0x00028b94) main_mup_pane_g8_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g8

0xa331,	// (0x00028b94) main_mup_pane_g9_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g9

0xa331,	// (0x00028b94) main_mup_pane_g10_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g10

0xa331,	// (0x00028b94) main_mup_pane_g11_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g11

0xa323,	// (0x00028b86) main_mup_pane_g12_ParamLimits

0xa323,	// (0x00028b86) main_mup_pane_g12

0xa331,	// (0x00028b94) main_mup_pane_g13_ParamLimits

0xa331,	// (0x00028b94) main_mup_pane_g13

0x000c,

0xf36e,	// (0x0002dbd1) main_mup_pane_g_ParamLimits

0xf36e,	// (0x0002dbd1) main_mup_pane_g

0xa33f,	// (0x00028ba2) main_mup_pane_t1_ParamLimits

0xa33f,	// (0x00028ba2) main_mup_pane_t1

0xa33f,	// (0x00028ba2) main_mup_pane_t2_ParamLimits

0xa33f,	// (0x00028ba2) main_mup_pane_t2

0xa33f,	// (0x00028ba2) main_mup_pane_t3_ParamLimits

0xa33f,	// (0x00028ba2) main_mup_pane_t3

0xae99,	// (0x000296fc) main_mup_pane_t4_ParamLimits

0xae99,	// (0x000296fc) main_mup_pane_t4

0xae99,	// (0x000296fc) main_mup_pane_t5_ParamLimits

0xae99,	// (0x000296fc) main_mup_pane_t5

0xa56f,	// (0x00028dd2) main_mup_pane_t6_ParamLimits

0xa56f,	// (0x00028dd2) main_mup_pane_t6

0x0005,

0xf389,	// (0x0002dbec) main_mup_pane_t_ParamLimits

0xf389,	// (0x0002dbec) main_mup_pane_t

0xa2ae,	// (0x00028b11) mup_progress_pane_ParamLimits

0xa2ae,	// (0x00028b11) mup_progress_pane

0xc068,	// (0x0002a8cb) mup_visualizer_pane_ParamLimits

0xc068,	// (0x0002a8cb) mup_visualizer_pane

0xc068,	// (0x0002a8cb) mup_volume_pane_ParamLimits

0xc068,	// (0x0002a8cb) mup_volume_pane

0xa323,	// (0x00028b86) mup_visualizer_pane_g1_ParamLimits

0xa323,	// (0x00028b86) mup_visualizer_pane_g1

0xaf64,	// (0x000297c7) mup_visualizer_pane_g2_ParamLimits

0xaf64,	// (0x000297c7) mup_visualizer_pane_g2

0xa315,	// (0x00028b78) mup_visualizer_pane_g3_ParamLimits

0xa315,	// (0x00028b78) mup_visualizer_pane_g3

0x0002,

0xf396,	// (0x0002dbf9) mup_visualizer_pane_g_ParamLimits

0xf396,	// (0x0002dbf9) mup_visualizer_pane_g

0xa555,	// (0x00028db8) mup_volume_pane_g1

0xa555,	// (0x00028db8) mup_volume_pane_g2

0x0001,

0xf39d,	// (0x0002dc00) mup_volume_pane_g

0xa555,	// (0x00028db8) mup_progress_pane_g1

0xa555,	// (0x00028db8) mup_progress_pane_g2

0xa555,	// (0x00028db8) mup_progress_pane_g3

0x0002,

0xf3a2,	// (0x0002dc05) mup_progress_pane_g

0xa031,	// (0x00028894) bg_popup_window_pane_cp05

0xaf72,	// (0x000297d5) heading_pane_cp02_ParamLimits

0xaf72,	// (0x000297d5) heading_pane_cp02

0xaf8e,	// (0x000297f1) list_popup_blid_pane

0xaf96,	// (0x000297f9) list_blid_sat_info_pane_ParamLimits

0xaf96,	// (0x000297f9) list_blid_sat_info_pane

0xafa9,	// (0x0002980c) list_blid_sat_info_pane_g1

0xafb1,	// (0x00029814) list_blid_sat_info_pane_t1

0x43b4,	// (0x00022c17) mup_equalizer_pane_ParamLimits

0x43b4,	// (0x00022c17) mup_equalizer_pane

0x43d5,	// (0x00022c38) mup_equalizer_pane_cp1_ParamLimits

0x43d5,	// (0x00022c38) mup_equalizer_pane_cp1

0x43f6,	// (0x00022c59) mup_equalizer_pane_cp2_ParamLimits

0x43f6,	// (0x00022c59) mup_equalizer_pane_cp2

0x4417,	// (0x00022c7a) mup_equalizer_pane_cp3_ParamLimits

0x4417,	// (0x00022c7a) mup_equalizer_pane_cp3

0x443c,	// (0x00022c9f) mup_equalizer_pane_cp4_ParamLimits

0x443c,	// (0x00022c9f) mup_equalizer_pane_cp4

0x4461,	// (0x00022cc4) mup_equalizer_pane_cp5

0x4479,	// (0x00022cdc) mup_equalizer_pane_cp6

0x4491,	// (0x00022cf4) mup_equalizer_pane_cp7

0xc150,	// (0x0002a9b3) bg_popup_call_poc_act_pane_g9

0xc158,	// (0x0002a9bb) bg_popup_call_poc_act_pane_g10

0xc160,	// (0x0002a9c3) bg_popup_call_poc_act_pane_g11

0x000a,

0xa28c,	// (0x00028aef) mup_scale_pane

0xa2a4,	// (0x00028b07) mup_scale_pane_g1

0xafbf,	// (0x00029822) mup_scale_pane_g2

0x0006,

0xf3be,	// (0x0002dc21) mup_scale_pane_g

0xafe3,	// (0x00029846) msg_data_pane

0xafeb,	// (0x0002984e) scroll_pane_cp017

0x44bb,	// (0x00022d1e) bg_list_pane_cp04_ParamLimits

0x44bb,	// (0x00022d1e) bg_list_pane_cp04

0xaff3,	// (0x00029856) msg_data_pane_g1

0x44e3,	// (0x00022d46) msg_data_pane_g2

0x44ed,	// (0x00022d50) msg_data_pane_g3

0x44f7,	// (0x00022d5a) msg_data_pane_g4

0x44ff,	// (0x00022d62) msg_data_pane_g5

0x4507,	// (0x00022d6a) msg_data_pane_g6

0x450f,	// (0x00022d72) msg_data_pane_g7

0x0006,

0xf3cd,	// (0x0002dc30) msg_data_pane_g

0x4517,	// (0x00022d7a) msg_text_pane_ParamLimits

0x4517,	// (0x00022d7a) msg_text_pane

0x4548,	// (0x00022dab) qrid_highlight_pane_cp011_ParamLimits

0x4548,	// (0x00022dab) qrid_highlight_pane_cp011

0xa031,	// (0x00028894) msg_body_pane

0xa031,	// (0x00028894) msg_header_pane

0xb004,	// (0x00029867) input_focus_pane_cp07

0x456c,	// (0x00022dcf) msg_header_pane_t1_ParamLimits

0x456c,	// (0x00022dcf) msg_header_pane_t1

0x4582,	// (0x00022de5) msg_header_pane_t2_ParamLimits

0x4582,	// (0x00022de5) msg_header_pane_t2

0x0001,

0xf3e1,	// (0x0002dc44) msg_header_pane_t_ParamLimits

0xf3e1,	// (0x0002dc44) msg_header_pane_t

0xb019,	// (0x0002987c) msg_body_pane_g1

0x4599,	// (0x00022dfc) msg_body_pane_t1_ParamLimits

0x4599,	// (0x00022dfc) msg_body_pane_t1

0x45ca,	// (0x00022e2d) msg_body_pane_t2_ParamLimits

0x45ca,	// (0x00022e2d) msg_body_pane_t2

0x45dc,	// (0x00022e3f) msg_body_pane_t3_ParamLimits

0x45dc,	// (0x00022e3f) msg_body_pane_t3

0x0002,

0xf3e6,	// (0x0002dc49) msg_body_pane_t_ParamLimits

0xf3e6,	// (0x0002dc49) msg_body_pane_t

0x1240,	// (0x0001faa3) main_viewer_pane_g1_ParamLimits

0x1240,	// (0x0001faa3) main_viewer_pane_g1

0x124c,	// (0x0001faaf) main_viewer_pane_g2_ParamLimits

0x124c,	// (0x0001faaf) main_viewer_pane_g2

0x4610,	// (0x00022e73) main_viewer_pane_g3_ParamLimits

0x4610,	// (0x00022e73) main_viewer_pane_g3

0x4621,	// (0x00022e84) main_viewer_pane_g4_ParamLimits

0x4621,	// (0x00022e84) main_viewer_pane_g4

0x1258,	// (0x0001fabb) main_viewer_pane_g5_ParamLimits

0x1258,	// (0x0001fabb) main_viewer_pane_g5

0x1258,	// (0x0001fabb) main_viewer_pane_g7_ParamLimits

0x1258,	// (0x0001fabb) main_viewer_pane_g7

0x126a,	// (0x0001facd) main_viewer_pane_g8_ParamLimits

0x126a,	// (0x0001facd) main_viewer_pane_g8

0x0007,

0xf3f6,	// (0x0002dc59) main_viewer_pane_g_ParamLimits

0xf3f6,	// (0x0002dc59) main_viewer_pane_g

0xb021,	// (0x00029884) viewer_content_pane_ParamLimits

0xb021,	// (0x00029884) viewer_content_pane

0x4652,	// (0x00022eb5) main_postcard_pane_g1_ParamLimits

0x4652,	// (0x00022eb5) main_postcard_pane_g1

0x4660,	// (0x00022ec3) main_postcard_pane_g2_ParamLimits

0x4660,	// (0x00022ec3) main_postcard_pane_g2

0x466e,	// (0x00022ed1) main_postcard_pane_g3_ParamLimits

0x466e,	// (0x00022ed1) main_postcard_pane_g3

0x0005,

0xf407,	// (0x0002dc6a) main_postcard_pane_g_ParamLimits

0xf407,	// (0x0002dc6a) main_postcard_pane_g

0x467e,	// (0x00022ee1) main_postcard_pane_g4

0xc296,	// (0x0002aaf9) smil_status_volume_pane_g2

0x46aa,	// (0x00022f0d) postcard_pane_ParamLimits

0x46aa,	// (0x00022f0d) postcard_pane

0xb7af,	// (0x0002a012) postcard_pane_g1_ParamLimits

0xb7af,	// (0x0002a012) postcard_pane_g1

0x46e4,	// (0x00022f47) postcard_pane_g2_ParamLimits

0x46e4,	// (0x00022f47) postcard_pane_g2

0x46f0,	// (0x00022f53) postcard_pane_g3_ParamLimits

0x46f0,	// (0x00022f53) postcard_pane_g3

0xb02f,	// (0x00029892) postcard_pane_g4_ParamLimits

0xb02f,	// (0x00029892) postcard_pane_g4

0x46fc,	// (0x00022f5f) postcard_pane_g5_ParamLimits

0x46fc,	// (0x00022f5f) postcard_pane_g5

0x4708,	// (0x00022f6b) postcard_pane_g6_ParamLimits

0x4708,	// (0x00022f6b) postcard_pane_g6

0xb03d,	// (0x000298a0) postcard_pane_g7_ParamLimits

0xb03d,	// (0x000298a0) postcard_pane_g7

0x0006,

0xf414,	// (0x0002dc77) postcard_pane_g_ParamLimits

0xf414,	// (0x0002dc77) postcard_pane_g

0x4716,	// (0x00022f79) main_mp2_pane_g1_ParamLimits

0x4716,	// (0x00022f79) main_mp2_pane_g1

0x4724,	// (0x00022f87) main_mp2_pane_g2_ParamLimits

0x4724,	// (0x00022f87) main_mp2_pane_g2

0x4730,	// (0x00022f93) main_mp2_pane_g3_ParamLimits

0x4730,	// (0x00022f93) main_mp2_pane_g3

0x0002,

0xf423,	// (0x0002dc86) main_mp2_pane_g_ParamLimits

0xf423,	// (0x0002dc86) main_mp2_pane_g

0x473c,	// (0x00022f9f) main_mp2_pane_t1_ParamLimits

0x473c,	// (0x00022f9f) main_mp2_pane_t1

0x4753,	// (0x00022fb6) main_mp2_pane_t2_ParamLimits

0x4753,	// (0x00022fb6) main_mp2_pane_t2

0x4767,	// (0x00022fca) main_mp2_pane_t3_ParamLimits

0x4767,	// (0x00022fca) main_mp2_pane_t3

0x0002,

0xf42a,	// (0x0002dc8d) main_mp2_pane_t_ParamLimits

0xf42a,	// (0x0002dc8d) main_mp2_pane_t

0xb04b,	// (0x000298ae) pec_content_pane_ParamLimits

0xb04b,	// (0x000298ae) pec_content_pane

0xa6e6,	// (0x00028f49) scroll_pane_cp015

0xb05d,	// (0x000298c0) pec_attribute_pane_ParamLimits

0xb05d,	// (0x000298c0) pec_attribute_pane

0x4779,	// (0x00022fdc) pec_content_pane_g1_ParamLimits

0x4779,	// (0x00022fdc) pec_content_pane_g1

0xb06d,	// (0x000298d0) pec_content_pane_t1_ParamLimits

0xb06d,	// (0x000298d0) pec_content_pane_t1

0xb07f,	// (0x000298e2) pec_content_pane_t2_ParamLimits

0xb07f,	// (0x000298e2) pec_content_pane_t2

0x0001,

0xf431,	// (0x0002dc94) pec_content_pane_t_ParamLimits

0xf431,	// (0x0002dc94) pec_content_pane_t

0x4785,	// (0x00022fe8) list_single_graphic_pane_cp01_ParamLimits

0x4785,	// (0x00022fe8) list_single_graphic_pane_cp01

0xa28c,	// (0x00028aef) bg_popup_sub_pane_cp04

0xb091,	// (0x000298f4) popup_mup_playback_window_g1

0xb09d,	// (0x00029900) popup_mup_playback_window_t1

0xb0b2,	// (0x00029915) popup_mup_playback_window_t2

0x0001,

0xf436,	// (0x0002dc99) popup_mup_playback_window_t

0xb0e9,	// (0x0002994c) main_image_pane_g1_ParamLimits

0xb0e9,	// (0x0002994c) main_image_pane_g1

0xb12c,	// (0x0002998f) scroll_pane_cp018_ParamLimits

0xb12c,	// (0x0002998f) scroll_pane_cp018

0xb144,	// (0x000299a7) scroll_pane_cp016_ParamLimits

0xb144,	// (0x000299a7) scroll_pane_cp016

0x4813,	// (0x00023076) smil2_image_pane_ParamLimits

0x4813,	// (0x00023076) smil2_image_pane

0x4849,	// (0x000230ac) smil2_root_pane_ParamLimits

0x4849,	// (0x000230ac) smil2_root_pane

0x4875,	// (0x000230d8) smil2_text_pane_ParamLimits

0x4875,	// (0x000230d8) smil2_text_pane

0xa031,	// (0x00028894) bg_list_pane_cp06

0xb180,	// (0x000299e3) grid_radio_pane

0xa031,	// (0x00028894) bg_popup_window_pane_cp06

0xb18a,	// (0x000299ed) main_fmradio_pane_t1

0xc168,	// (0x0002a9cb) heading_pane_cp04

0xb198,	// (0x000299fb) main_fmradio_pane_t2

0xc170,	// (0x0002a9d3) popup_cale_lunar_info_window_g1

0xb1a6,	// (0x00029a09) main_fmradio_pane_t3

0xc178,	// (0x0002a9db) popup_cale_lunar_info_window_g2

0xb1b6,	// (0x00029a19) main_fmradio_pane_t4

0x0001,

0xb1c4,	// (0x00029a27) main_fmradio_pane_t5

0x0004,

0xf516,	// (0x0002dd79) popup_cale_lunar_info_window_g

0xf44b,	// (0x0002dcae) main_fmradio_pane_t

0xb1d2,	// (0x00029a35) wait_bar_pane_cp03

0xb1da,	// (0x00029a3d) cell_fmradio_pane_ParamLimits

0xb1da,	// (0x00029a3d) cell_fmradio_pane

0xb03d,	// (0x000298a0) cell_fmradio_pane_g1_ParamLimits

0xb03d,	// (0x000298a0) cell_fmradio_pane_g1

0xa031,	// (0x00028894) grid_highlight_pane_cp011

0xb1ef,	// (0x00029a52) poc_content_pane_ParamLimits

0xb1ef,	// (0x00029a52) poc_content_pane

0xb201,	// (0x00029a64) scroll_pane_cp019

0x48b5,	// (0x00023118) popup_call_poc_act_window_ParamLimits

0x48b5,	// (0x00023118) popup_call_poc_act_window

0x48c2,	// (0x00023125) popup_call_poc_inact_window_ParamLimits

0x48c2,	// (0x00023125) popup_call_poc_inact_window

0xf4ed,	// (0x0002dd50) bg_popup_call_poc_act_pane_g

0xc0e0,	// (0x0002a943) bg_popup_call_poc_inact_pane_g1

0xc0e8,	// (0x0002a94b) bg_popup_call_poc_inact_pane_g2

0xb209,	// (0x00029a6c) popup_call_poc_act_window_g2

0xc0f0,	// (0x0002a953) bg_popup_call_poc_inact_pane_g3

0xc0f8,	// (0x0002a95b) bg_popup_call_poc_inact_pane_g4

0xc100,	// (0x0002a963) bg_popup_call_poc_inact_pane_g5

0xb211,	// (0x00029a74) popup_call_poc_act_window_t1_ParamLimits

0xb211,	// (0x00029a74) popup_call_poc_act_window_t1

0xb239,	// (0x00029a9c) popup_call_poc_act_window_t2_ParamLimits

0xb239,	// (0x00029a9c) popup_call_poc_act_window_t2

0xb261,	// (0x00029ac4) popup_call_poc_act_window_t3_ParamLimits

0xb261,	// (0x00029ac4) popup_call_poc_act_window_t3

0xb289,	// (0x00029aec) popup_call_poc_act_window_t4_ParamLimits

0xb289,	// (0x00029aec) popup_call_poc_act_window_t4

0x0003,

0xf456,	// (0x0002dcb9) popup_call_poc_act_window_t_ParamLimits

0xf456,	// (0x0002dcb9) popup_call_poc_act_window_t

0xc108,	// (0x0002a96b) bg_popup_call_poc_inact_pane_g6

0xc110,	// (0x0002a973) bg_popup_call_poc_inact_pane_g7

0xc118,	// (0x0002a97b) bg_popup_call_poc_inact_pane_g8

0xb29b,	// (0x00029afe) popup_call_poc_inact_window_g2

0xc120,	// (0x0002a983) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf4da,	// (0x0002dd3d) bg_popup_call_poc_inact_pane_g

0xb2a3,	// (0x00029b06) popup_call_poc_inact_window_t1_ParamLimits

0xb2a3,	// (0x00029b06) popup_call_poc_inact_window_t1

0xb2b8,	// (0x00029b1b) popup_call_poc_inact_window_t2_ParamLimits

0xb2b8,	// (0x00029b1b) popup_call_poc_inact_window_t2

0xb2cd,	// (0x00029b30) popup_call_poc_inact_window_t3_ParamLimits

0xb2cd,	// (0x00029b30) popup_call_poc_inact_window_t3

0x0002,

0xf45f,	// (0x0002dcc2) popup_call_poc_inact_window_t_ParamLimits

0xf45f,	// (0x0002dcc2) popup_call_poc_inact_window_t

0xc20e,	// (0x0002aa71) context_pane_ParamLimits

0x4dc5,	// (0x00023628) signal_pane_ParamLimits

0xa533,	// (0x00028d96) main_call2_pane

0x13e9,	// (0x0001fc4c) popup_phob_thumbnail2_window_ParamLimits

0x13e9,	// (0x0001fc4c) popup_phob_thumbnail2_window

0x1210,	// (0x0001fa73) aid_hotspot_pointer_arrow_pane

0x1218,	// (0x0001fa7b) aid_hotspot_pointer_hand_pane

0x4c0a,	// (0x0002346d) phob_pre_status_pane_g5

0xa307,	// (0x00028b6a) cams_zoom_pane_ParamLimits

0xa307,	// (0x00028b6a) image_vga_pane_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g1_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g2_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g3_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g4_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g5_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g6_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g7_ParamLimits

0xf185,	// (0x0002d9e8) main_camera_pane_g_ParamLimits

0xae99,	// (0x000296fc) main_camera_pane_t1_ParamLimits

0xae99,	// (0x000296fc) main_camera_pane_t2_ParamLimits

0xf196,	// (0x0002d9f9) main_camera_pane_t_ParamLimits

0xa28c,	// (0x00028aef) bg_popup_preview_window_pane_cp01_ParamLimits

0xa28c,	// (0x00028aef) bg_popup_preview_window_pane_cp01

0xb2e2,	// (0x00029b45) popup_phob_thumbnail2_window_g1_ParamLimits

0xb2e2,	// (0x00029b45) popup_phob_thumbnail2_window_g1

0xa031,	// (0x00028894) call2_cli_visual_pane

0x48de,	// (0x00023141) popup_call2_audio_conf_window_ParamLimits

0x48de,	// (0x00023141) popup_call2_audio_conf_window

0x48f7,	// (0x0002315a) popup_call2_audio_first_window_ParamLimits

0x48f7,	// (0x0002315a) popup_call2_audio_first_window

0x4995,	// (0x000231f8) popup_call2_audio_in_window_ParamLimits

0x4995,	// (0x000231f8) popup_call2_audio_in_window

0x49d9,	// (0x0002323c) popup_call2_audio_out_window_ParamLimits

0x49d9,	// (0x0002323c) popup_call2_audio_out_window

0x4a43,	// (0x000232a6) popup_call2_audio_second_window_ParamLimits

0x4a43,	// (0x000232a6) popup_call2_audio_second_window

0x4aa1,	// (0x00023304) popup_call2_audio_wait_window_ParamLimits

0x4aa1,	// (0x00023304) popup_call2_audio_wait_window

0xa031,	// (0x00028894) bg_popup_call2_act_pane_cp03

0xa26e,	// (0x00028ad1) list_conf_pane_cp

0xb2ee,	// (0x00029b51) popup_call2_audio_conf_window_t1

0xb2fc,	// (0x00029b5f) list_single_graphic_popup_conf2_pane_ParamLimits

0xb2fc,	// (0x00029b5f) list_single_graphic_popup_conf2_pane

0xacae,	// (0x00029511) list_highlight_pane_cp04

0xb30f,	// (0x00029b72) list_single_graphic_popup_conf2_pane_g1

0xacbf,	// (0x00029522) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf466,	// (0x0002dcc9) list_single_graphic_popup_conf2_pane_g

0xb319,	// (0x00029b7c) list_single_graphic_popup_conf2_pane_t1

0xb327,	// (0x00029b8a) bg_popup_call2_act_pane_cp01_ParamLimits

0xb327,	// (0x00029b8a) bg_popup_call2_act_pane_cp01

0xb3b1,	// (0x00029c14) call_type_pane_cp05_ParamLimits

0xb3b1,	// (0x00029c14) call_type_pane_cp05

0xb405,	// (0x00029c68) popup_call2_audio_second_window_g1_ParamLimits

0xb405,	// (0x00029c68) popup_call2_audio_second_window_g1

0xb459,	// (0x00029cbc) popup_call2_audio_second_window_g2_ParamLimits

0xb459,	// (0x00029cbc) popup_call2_audio_second_window_g2

0x0002,

0xf46b,	// (0x0002dcce) popup_call2_audio_second_window_g_ParamLimits

0xf46b,	// (0x0002dcce) popup_call2_audio_second_window_g

0xb4be,	// (0x00029d21) popup_call2_audio_second_window_t1_ParamLimits

0xb4be,	// (0x00029d21) popup_call2_audio_second_window_t1

0xb579,	// (0x00029ddc) popup_call2_audio_second_window_t2_ParamLimits

0xb579,	// (0x00029ddc) popup_call2_audio_second_window_t2

0xb5cc,	// (0x00029e2f) popup_call2_audio_second_window_t3_ParamLimits

0xb5cc,	// (0x00029e2f) popup_call2_audio_second_window_t3

0x0003,

0xf472,	// (0x0002dcd5) popup_call2_audio_second_window_t_ParamLimits

0xf472,	// (0x0002dcd5) popup_call2_audio_second_window_t

0xa031,	// (0x00028894) bg_popup_call2_in_pane_cp02

0xa03b,	// (0x0002889e) call_type_pane_cp04

0x4ae0,	// (0x00023343) popup_call2_audio_wait_window_g1

0x4ae8,	// (0x0002334b) popup_call2_audio_wait_window_g2

0x0001,

0xf47b,	// (0x0002dcde) popup_call2_audio_wait_window_g

0xa053,	// (0x000288b6) popup_call2_audio_wait_window_t3

0xb6bf,	// (0x00029f22) bg_popup_call2_act_pane_ParamLimits

0xb6bf,	// (0x00029f22) bg_popup_call2_act_pane

0xb7bd,	// (0x0002a020) call_type_pane_cp03_ParamLimits

0xb7bd,	// (0x0002a020) call_type_pane_cp03

0xb821,	// (0x0002a084) popup_call2_audio_first_window_g1_ParamLimits

0xb821,	// (0x0002a084) popup_call2_audio_first_window_g1

0xb891,	// (0x0002a0f4) popup_call2_audio_first_window_g2_ParamLimits

0xb891,	// (0x0002a0f4) popup_call2_audio_first_window_g2

0xb7af,	// (0x0002a012) popup_call2_audio_first_window_g3_ParamLimits

0xb7af,	// (0x0002a012) popup_call2_audio_first_window_g3

0x0004,

0xf480,	// (0x0002dce3) popup_call2_audio_first_window_g_ParamLimits

0xf480,	// (0x0002dce3) popup_call2_audio_first_window_g

0xb96f,	// (0x0002a1d2) popup_call2_audio_first_window_t1_ParamLimits

0xb96f,	// (0x0002a1d2) popup_call2_audio_first_window_t1

0xba72,	// (0x0002a2d5) popup_call2_audio_first_window_t4_ParamLimits

0xba72,	// (0x0002a2d5) popup_call2_audio_first_window_t4

0xbb55,	// (0x0002a3b8) popup_call2_audio_first_window_t5_ParamLimits

0xbb55,	// (0x0002a3b8) popup_call2_audio_first_window_t5

0x0003,

0xf48b,	// (0x0002dcee) popup_call2_audio_first_window_t_ParamLimits

0xf48b,	// (0x0002dcee) popup_call2_audio_first_window_t

0xa284,	// (0x00028ae7) bg_popup_call2_act_pane_g1

0xc182,	// (0x0002a9e5) popup_cale_lunar_info_window_t1

0xc190,	// (0x0002a9f3) popup_cale_lunar_info_window_t2

0xc19e,	// (0x0002aa01) popup_cale_lunar_info_window_t3

0xa031,	// (0x00028894) bg_popup_call2_bubble_pane

0xbc56,	// (0x0002a4b9) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc56,	// (0x0002a4b9) bg_popup_call2_in_pane_cp01

0x9d0d,	// (0x00028570) call_type_pane_cp02

0x4af0,	// (0x00023353) popup_call2_audio_out_window_g1_ParamLimits

0x4af0,	// (0x00023353) popup_call2_audio_out_window_g1

0xbc9e,	// (0x0002a501) popup_call2_audio_out_window_g2_ParamLimits

0xbc9e,	// (0x0002a501) popup_call2_audio_out_window_g2

0x4b1c,	// (0x0002337f) popup_call2_audio_out_window_g3_ParamLimits

0x4b1c,	// (0x0002337f) popup_call2_audio_out_window_g3

0x0003,

0xf494,	// (0x0002dcf7) popup_call2_audio_out_window_g_ParamLimits

0xf494,	// (0x0002dcf7) popup_call2_audio_out_window_g

0xbcd5,	// (0x0002a538) popup_call2_audio_out_window_t1_ParamLimits

0xbcd5,	// (0x0002a538) popup_call2_audio_out_window_t1

0xbd34,	// (0x0002a597) popup_call2_audio_out_window_t2_ParamLimits

0xbd34,	// (0x0002a597) popup_call2_audio_out_window_t2

0xbd88,	// (0x0002a5eb) popup_call2_audio_out_window_t3_ParamLimits

0xbd88,	// (0x0002a5eb) popup_call2_audio_out_window_t3

0xbd9e,	// (0x0002a601) popup_call2_audio_out_window_t4_ParamLimits

0xbd9e,	// (0x0002a601) popup_call2_audio_out_window_t4

0xbdb4,	// (0x0002a617) popup_call2_audio_out_window_t5_ParamLimits

0xbdb4,	// (0x0002a617) popup_call2_audio_out_window_t5

0x0005,

0xf49d,	// (0x0002dd00) popup_call2_audio_out_window_t_ParamLimits

0xf49d,	// (0x0002dd00) popup_call2_audio_out_window_t

0xbe18,	// (0x0002a67b) bg_popup_call2_in_pane_ParamLimits

0xbe18,	// (0x0002a67b) bg_popup_call2_in_pane

0xbe74,	// (0x0002a6d7) popup_call2_audio_in_window_g1_ParamLimits

0xbe74,	// (0x0002a6d7) popup_call2_audio_in_window_g1

0xbeac,	// (0x0002a70f) popup_call2_audio_in_window_g2_ParamLimits

0xbeac,	// (0x0002a70f) popup_call2_audio_in_window_g2

0xbee4,	// (0x0002a747) popup_call2_audio_in_window_g3_ParamLimits

0xbee4,	// (0x0002a747) popup_call2_audio_in_window_g3

0x0003,

0xf4aa,	// (0x0002dd0d) popup_call2_audio_in_window_g_ParamLimits

0xf4aa,	// (0x0002dd0d) popup_call2_audio_in_window_g

0xbf3c,	// (0x0002a79f) popup_call2_audio_in_window_t1_ParamLimits

0xbf3c,	// (0x0002a79f) popup_call2_audio_in_window_t1

0xbfbc,	// (0x0002a81f) popup_call2_audio_in_window_t2_ParamLimits

0xbfbc,	// (0x0002a81f) popup_call2_audio_in_window_t2

0xc03c,	// (0x0002a89f) popup_call2_audio_in_window_t3_ParamLimits

0xc03c,	// (0x0002a89f) popup_call2_audio_in_window_t3

0xc056,	// (0x0002a8b9) popup_call2_audio_in_window_t4_ParamLimits

0xc056,	// (0x0002a8b9) popup_call2_audio_in_window_t4

0xc076,	// (0x0002a8d9) popup_call2_audio_in_window_t5_ParamLimits

0xc076,	// (0x0002a8d9) popup_call2_audio_in_window_t5

0xc08b,	// (0x0002a8ee) popup_call2_audio_in_window_t6_ParamLimits

0xc08b,	// (0x0002a8ee) popup_call2_audio_in_window_t6

0x0005,

0xf4b3,	// (0x0002dd16) popup_call2_audio_in_window_t_ParamLimits

0xf4b3,	// (0x0002dd16) popup_call2_audio_in_window_t

0xa284,	// (0x00028ae7) bg_popup_call2_in_pane_g1

0xc1ac,	// (0x0002aa0f) popup_cale_lunar_info_window_t4

0x0003,

0xf51b,	// (0x0002dd7e) popup_cale_lunar_info_window_t

0xa28c,	// (0x00028aef) bg_popup_call2_rect_pane_ParamLimits

0xa28c,	// (0x00028aef) bg_popup_call2_rect_pane

0xa031,	// (0x00028894) call2_cli_visual_graphic_pane

0xa031,	// (0x00028894) call2_cli_visual_text_pane

0x143c,	// (0x0001fc9f) smil_status_volume_pane_g3

0x0002,

0xa2a4,	// (0x00028b07) call2_cli_visual_graphic_pane_g1

0xa2a4,	// (0x00028b07) call2_cli_visual_graphic_pane_g2

0xa2a4,	// (0x00028b07) call2_cli_visual_graphic_pane_g3

0x0002,

0xf4c0,	// (0x0002dd23) call2_cli_visual_graphic_pane_g

0xc0a0,	// (0x0002a903) bg_popup_call2_rect_pane_g1

0xa45e,	// (0x00028cc1) bg_popup_call2_rect_pane_g2

0xc0a8,	// (0x0002a90b) bg_popup_call2_rect_pane_g3

0xc0b0,	// (0x0002a913) bg_popup_call2_rect_pane_g4

0xc0b8,	// (0x0002a91b) bg_popup_call2_rect_pane_g5

0xc0c0,	// (0x0002a923) bg_popup_call2_rect_pane_g6

0xc0c8,	// (0x0002a92b) bg_popup_call2_rect_pane_g7

0xc0d0,	// (0x0002a933) bg_popup_call2_rect_pane_g8

0xc0d8,	// (0x0002a93b) bg_popup_call2_rect_pane_g9

0x0008,

0xf4c7,	// (0x0002dd2a) bg_popup_call2_rect_pane_g

0xc0e0,	// (0x0002a943) bg_popup_call2_bubble_pane_g1

0xc0e8,	// (0x0002a94b) bg_popup_call2_bubble_pane_g2

0xc0f0,	// (0x0002a953) bg_popup_call2_bubble_pane_g3

0xc0f8,	// (0x0002a95b) bg_popup_call2_bubble_pane_g4

0xc100,	// (0x0002a963) bg_popup_call2_bubble_pane_g5

0xc108,	// (0x0002a96b) bg_popup_call2_bubble_pane_g6

0xc110,	// (0x0002a973) bg_popup_call2_bubble_pane_g7

0xc118,	// (0x0002a97b) bg_popup_call2_bubble_pane_g8

0xc120,	// (0x0002a983) bg_popup_call2_bubble_pane_g9

0x0008,

0xf4da,	// (0x0002dd3d) bg_popup_call2_bubble_pane_g

0x2674,	// (0x00020ed7) aid_cale_week_size_cell_pane

0xa28c,	// (0x00028aef) aid_cams_cif_uncrop_pane_ParamLimits

0xa28c,	// (0x00028aef) aid_cams_cif_uncrop_pane

0x2d1f,	// (0x00021582) aid_cams_size_cell_ParamLimits

0x2d1f,	// (0x00021582) aid_cams_size_cell

0x2d2b,	// (0x0002158e) grid_cams_pane_ParamLimits

0x2d39,	// (0x0002159c) linegrid_cams_pane_ParamLimits

0x2e0a,	// (0x0002166d) call_video_pane_t1

0x2e27,	// (0x0002168a) call_video_pane_t2

0x0001,

0xf1e2,	// (0x0002da45) call_video_pane_t

0x32e4,	// (0x00021b47) aid_cale_month_size_cell_pane_ParamLimits

0x32e4,	// (0x00021b47) aid_cale_month_size_cell_pane

0xf55f,	// (0x0002ddc2) smil_status_volume_pane_g

0x1449,	// (0x0001fcac) volume_smil_pane_ParamLimits

0x0b53,	// (0x0001f3b6) aid_popup2_width_pane

0x25c8,	// (0x00020e2b) cell_qdial_pane_g4_ParamLimits

0x25c8,	// (0x00020e2b) cell_qdial_pane_g4

0x40e2,	// (0x00022945) aid_blid_cardinal_pane_ParamLimits

0x40f2,	// (0x00022955) aid_blid_destination_pane_ParamLimits

0x40f2,	// (0x00022955) aid_blid_destination_pane

0xa28c,	// (0x00028aef) bg_popup_call_poc_act_pane_ParamLimits

0xa28c,	// (0x00028aef) bg_popup_call_poc_act_pane

0xa28c,	// (0x00028aef) bg_popup_call_poc_inact_pane_ParamLimits

0xa28c,	// (0x00028aef) bg_popup_call_poc_inact_pane

0xc128,	// (0x0002a98b) bg_popup_call_poc_act_pane_g1

0xc130,	// (0x0002a993) bg_popup_call_poc_act_pane_g2

0xc138,	// (0x0002a99b) bg_popup_call_poc_act_pane_g3

0xc0f8,	// (0x0002a95b) bg_popup_call_poc_act_pane_g4

0xc100,	// (0x0002a963) bg_popup_call_poc_act_pane_g5

0xc140,	// (0x0002a9a3) bg_popup_call_poc_act_pane_g6

0xc110,	// (0x0002a973) bg_popup_call_poc_act_pane_g7

0xc148,	// (0x0002a9ab) bg_popup_call_poc_act_pane_g8

0xa031,	// (0x00028894) main_usb_pane

0x1306,	// (0x0001fb69) popup_cale_lunar_info_window

0x313f,	// (0x000219a2) im_reading_pane_t1_ParamLimits

0xa62f,	// (0x00028e92) list_im_pane_ParamLimits

0xa640,	// (0x00028ea3) scroll_pane_cp07_ParamLimits

0xa031,	// (0x00028894) grid_highlight_pane_cp012

0xa28c,	// (0x00028aef) mup_scale_pane_ParamLimits

0xb7af,	// (0x0002a012) main_usb_pane_g1_ParamLimits

0xb7af,	// (0x0002a012) main_usb_pane_g1

0x4b72,	// (0x000233d5) main_usb_pane_g2_ParamLimits

0x4b72,	// (0x000233d5) main_usb_pane_g2

0x0001,

0xf504,	// (0x0002dd67) main_usb_pane_g_ParamLimits

0xf504,	// (0x0002dd67) main_usb_pane_g

0x4b7e,	// (0x000233e1) main_usb_pane_t1_ParamLimits

0x4b7e,	// (0x000233e1) main_usb_pane_t1

0x4b90,	// (0x000233f3) main_usb_pane_t2_ParamLimits

0x4b90,	// (0x000233f3) main_usb_pane_t2

0x4ba2,	// (0x00023405) main_usb_pane_t3_ParamLimits

0x4ba2,	// (0x00023405) main_usb_pane_t3

0x4bb4,	// (0x00023417) main_usb_pane_t4_ParamLimits

0x4bb4,	// (0x00023417) main_usb_pane_t4

0x4bc6,	// (0x00023429) main_usb_pane_t5_ParamLimits

0x4bc6,	// (0x00023429) main_usb_pane_t5

0x4bd8,	// (0x0002343b) main_usb_pane_t6_ParamLimits

0x4bd8,	// (0x0002343b) main_usb_pane_t6

0x0005,

0xf509,	// (0x0002dd6c) main_usb_pane_t_ParamLimits

0x4081,	// (0x000228e4) aid_text_placing

0x408c,	// (0x000228ef) main_location2_pane_t1_ParamLimits

0x40a2,	// (0x00022905) main_location2_pane_t2_ParamLimits

0x40b8,	// (0x0002291b) main_location2_pane_t3_ParamLimits

0x40ce,	// (0x00022931) main_location2_pane_t4_ParamLimits

0x40ce,	// (0x00022931) main_location2_pane_t4

0xf323,	// (0x0002db86) main_location2_pane_t_ParamLimits

0xa2c8,	// (0x00028b2b) find_pinb_pane_g2_ParamLimits

0xa2c8,	// (0x00028b2b) find_pinb_pane_g2

0x0001,

0xf09a,	// (0x0002d8fd) find_pinb_pane_g_ParamLimits

0xf09a,	// (0x0002d8fd) find_pinb_pane_g

0xa2d4,	// (0x00028b37) find_pinb_pane_t1_ParamLimits

0xa2e6,	// (0x00028b49) find_pinb_pane_t2_ParamLimits

0xf09f,	// (0x0002d902) find_pinb_pane_t_ParamLimits

0xa031,	// (0x00028894) main_call3_pane

0x3897,	// (0x000220fa) cale_month_day_heading_pane_t1_ParamLimits

0x3919,	// (0x0002217c) cale_month_day_heading_pane_t2_ParamLimits

0x3992,	// (0x000221f5) cale_month_day_heading_pane_t3_ParamLimits

0x3a0b,	// (0x0002226e) cale_month_day_heading_pane_t4_ParamLimits

0x3a84,	// (0x000222e7) cale_month_day_heading_pane_t5_ParamLimits

0x3b05,	// (0x00022368) cale_month_day_heading_pane_t6_ParamLimits

0x3b8e,	// (0x000223f1) cale_month_day_heading_pane_t7_ParamLimits

0xf21a,	// (0x0002da7d) cale_month_day_heading_pane_t_ParamLimits

0xa899,	// (0x000290fc) smil_status_volume_pane

0x46c8,	// (0x00022f2b) postcard_address_pane_ParamLimits

0x46c8,	// (0x00022f2b) postcard_address_pane

0x46d6,	// (0x00022f39) postcard_message_pane_ParamLimits

0x46d6,	// (0x00022f39) postcard_message_pane

0x4b48,	// (0x000233ab) call2_cli_visual_pane_t1_ParamLimits

0x4b48,	// (0x000233ab) call2_cli_visual_pane_t1

0xc2c1,	// (0x0002ab24) postcard_message_pane_t1_ParamLimits

0xc2c1,	// (0x0002ab24) postcard_message_pane_t1

0xc2a9,	// (0x0002ab0c) postcard_address_pane_t1_ParamLimits

0xc2a9,	// (0x0002ab0c) postcard_address_pane_t1

0x4f22,	// (0x00023785) popup_call3_audio_in_window_ParamLimits

0x4f22,	// (0x00023785) popup_call3_audio_in_window

0x4e00,	// (0x00023663) bg_popup_call3_in_pane_ParamLimits

0x4e00,	// (0x00023663) bg_popup_call3_in_pane

0x4e68,	// (0x000236cb) popup_call3_audio_in_window_g1_ParamLimits

0x4e68,	// (0x000236cb) popup_call3_audio_in_window_g1

0x4e80,	// (0x000236e3) popup_call3_audio_in_window_g2_ParamLimits

0x4e80,	// (0x000236e3) popup_call3_audio_in_window_g2

0x4e98,	// (0x000236fb) popup_call3_audio_in_window_g3_ParamLimits

0x4e98,	// (0x000236fb) popup_call3_audio_in_window_g3

0x0003,

0xf566,	// (0x0002ddc9) popup_call3_audio_in_window_g_ParamLimits

0xf566,	// (0x0002ddc9) popup_call3_audio_in_window_g

0x4ec0,	// (0x00023723) popup_call3_audio_in_window_t1_ParamLimits

0x4ec0,	// (0x00023723) popup_call3_audio_in_window_t1

0x4ee8,	// (0x0002374b) popup_call3_audio_in_window_t2_ParamLimits

0x4ee8,	// (0x0002374b) popup_call3_audio_in_window_t2

0x4f10,	// (0x00023773) popup_call3_audio_in_window_t3_ParamLimits

0x4f10,	// (0x00023773) popup_call3_audio_in_window_t3

0x0002,

0xf56f,	// (0x0002ddd2) popup_call3_audio_in_window_t_ParamLimits

0xf56f,	// (0x0002ddd2) popup_call3_audio_in_window_t

0xa533,	// (0x00028d96) bg_popup_call3_rect_pane

0xc0a0,	// (0x0002a903) bg_popup_call3_rect_pane_g1

0xa45e,	// (0x00028cc1) bg_popup_call3_rect_pane_g2

0xc0a8,	// (0x0002a90b) bg_popup_call3_rect_pane_g3

0xc0b0,	// (0x0002a913) bg_popup_call3_rect_pane_g4

0xc0b8,	// (0x0002a91b) bg_popup_call3_rect_pane_g5

0xc0c0,	// (0x0002a923) bg_popup_call3_rect_pane_g6

0xc0c8,	// (0x0002a92b) bg_popup_call3_rect_pane_g7

0x9bdf,	// (0x00028442) mup_visualizer_osc_pane

0x9bdf,	// (0x00028442) mup_visualizer_spec_pane

0x4e20,	// (0x00023683) call3_video_qcif_pane_ParamLimits

0x4e20,	// (0x00023683) call3_video_qcif_pane

0x4e32,	// (0x00023695) call3_video_qcif_uncrop_pane_ParamLimits

0x4e32,	// (0x00023695) call3_video_qcif_uncrop_pane

0x4e42,	// (0x000236a5) call3_video_subqcif_pane_ParamLimits

0x4e42,	// (0x000236a5) call3_video_subqcif_pane

0x4e56,	// (0x000236b9) call3_video_subqcif_uncrop_pane_ParamLimits

0x4e56,	// (0x000236b9) call3_video_subqcif_uncrop_pane

0x4eb0,	// (0x00023713) popup_call3_audio_in_window_g4_ParamLimits

0x4eb0,	// (0x00023713) popup_call3_audio_in_window_g4

0x9bdf,	// (0x00028442) mup_spec_half_pane

0x9bdf,	// (0x00028442) mup_spec_half_pane_cp

0x9bdf,	// (0x00028442) mup_osc_middle_pane

0xa555,	// (0x00028db8) mup_visualizer_osc_pane_g1

0xc25c,	// (0x0002aabf) mup_spec_bar_pane_ParamLimits

0xc25c,	// (0x0002aabf) mup_spec_bar_pane

0xa555,	// (0x00028db8) mup_spec_bar_pane_g1

0xa555,	// (0x00028db8) mup_spec_bar_pane_g2

0x0001,

0xf39d,	// (0x0002dc00) mup_spec_bar_pane_g

0x2674,	// (0x00020ed7) aid_cale_week_size_cell_pane_ParamLimits

0x268e,	// (0x00020ef1) bg_cale_heading_pane_ParamLimits

0x26b7,	// (0x00020f1a) bg_cale_pane_cp01_ParamLimits

0x26d9,	// (0x00020f3c) cale_week_corner_pane_ParamLimits

0x26f8,	// (0x00020f5b) cale_week_day_heading_pane_ParamLimits

0x2726,	// (0x00020f89) cale_week_scroll_pane_g1_ParamLimits

0x274a,	// (0x00020fad) cale_week_scroll_pane_g2_ParamLimits

0x2762,	// (0x00020fc5) cale_week_scroll_pane_g3_ParamLimits

0x277a,	// (0x00020fdd) cale_week_scroll_pane_g4_ParamLimits

0x2792,	// (0x00020ff5) cale_week_scroll_pane_g5_ParamLimits

0x27aa,	// (0x0002100d) cale_week_scroll_pane_g6_ParamLimits

0x27ca,	// (0x0002102d) cale_week_scroll_pane_g7_ParamLimits

0x27ea,	// (0x0002104d) cale_week_scroll_pane_g8_ParamLimits

0x280a,	// (0x0002106d) cale_week_scroll_pane_g9_ParamLimits

0x2827,	// (0x0002108a) cale_week_scroll_pane_g10_ParamLimits

0x2844,	// (0x000210a7) cale_week_scroll_pane_g11_ParamLimits

0x2863,	// (0x000210c6) cale_week_scroll_pane_g12_ParamLimits

0x2888,	// (0x000210eb) cale_week_scroll_pane_g13_ParamLimits

0x28b1,	// (0x00021114) cale_week_scroll_pane_g14_ParamLimits

0x28da,	// (0x0002113d) cale_week_scroll_pane_g15_ParamLimits

0xf12b,	// (0x0002d98e) cale_week_scroll_pane_g_ParamLimits

0x2923,	// (0x00021186) cale_week_time_pane_ParamLimits

0x2943,	// (0x000211a6) grid_cale_week_pane_ParamLimits

0xa4a9,	// (0x00028d0c) listscroll_cale_week_pane_t1

0xa4bb,	// (0x00028d1e) scroll_pane_cp08_ParamLimits

0x335c,	// (0x00021bbf) cale_month_corner_pane_ParamLimits

0xa86f,	// (0x000290d2) cale_month_pane_t1

0x381e,	// (0x00022081) cale_month_week_pane_ParamLimits

0xb7af,	// (0x0002a012) popup_call_status_window_g1_ParamLimits

0x3f1f,	// (0x00022782) popup_call_status_window_g2_ParamLimits

0x3f2b,	// (0x0002278e) popup_call_status_window_g3_ParamLimits

0xf2aa,	// (0x0002db0d) popup_call_status_window_g_ParamLimits

0xac3b,	// (0x0002949e) aid_call2_pane

0x455e,	// (0x00022dc1) msg_header_pane_g1

0x46c8,	// (0x00022f2b) postcard_address2_pane_ParamLimits

0x46c8,	// (0x00022f2b) postcard_address2_pane

0x46d6,	// (0x00022f39) postcard_message2_pane_ParamLimits

0x46d6,	// (0x00022f39) postcard_message2_pane

0x4dd3,	// (0x00023636) message2_row_pane_ParamLimits

0x4dd3,	// (0x00023636) message2_row_pane

0x4ded,	// (0x00023650) address2_row_pane_ParamLimits

0x4ded,	// (0x00023650) address2_row_pane

0xc229,	// (0x0002aa8c) postcard_message2_row_pane_g1

0xc231,	// (0x0002aa94) postcard_message2_row_pane_t1

0xc229,	// (0x0002aa8c) address2_row_pane_g1

0xc231,	// (0x0002aa94) address2_row_pane_t1

0x2b97,	// (0x000213fa) aid_size_cell_vorec

0xa031,	// (0x00028894) main_rss_pane

0xc23f,	// (0x0002aaa2) rss_list_single_pane_ParamLimits

0xc23f,	// (0x0002aaa2) rss_list_single_pane

0xc24d,	// (0x0002aab0) rss_list_single_pane_t1

0xc24d,	// (0x0002aab0) rss_list_single_pane_t2

0x0001,

0xf55a,	// (0x0002ddbd) rss_list_single_pane_t

0xa031,	// (0x00028894) main_camera2_pane

0xa031,	// (0x00028894) main_video2_pane

0x0dd3,	// (0x0001f636) cams_zoom_pane_cp2_ParamLimits

0x0dd3,	// (0x0001f636) cams_zoom_pane_cp2

0x0dd3,	// (0x0001f636) image2_vga_pane_ParamLimits

0x0dd3,	// (0x0001f636) image2_vga_pane

0xac6f,	// (0x000294d2) main_camera2_pane_g1_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g1

0xac6f,	// (0x000294d2) main_camera2_pane_g2_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g2

0xac6f,	// (0x000294d2) main_camera2_pane_g3_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g3

0xac6f,	// (0x000294d2) main_camera2_pane_g4_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g4

0xac6f,	// (0x000294d2) main_camera2_pane_g5_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g5

0xac6f,	// (0x000294d2) main_camera2_pane_g6_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g6

0xac6f,	// (0x000294d2) main_camera2_pane_g7_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g7

0xac6f,	// (0x000294d2) main_camera2_pane_g8_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g8

0x0008,

0xf576,	// (0x0002ddd9) main_camera2_pane_g_ParamLimits

0xf576,	// (0x0002ddd9) main_camera2_pane_g

0x146c,	// (0x0001fccf) main_camera2_pane_t1_ParamLimits

0x146c,	// (0x0001fccf) main_camera2_pane_t1

0x146c,	// (0x0001fccf) main_camera2_pane_t2_ParamLimits

0x146c,	// (0x0001fccf) main_camera2_pane_t2

0x146c,	// (0x0001fccf) main_camera2_pane_t3_ParamLimits

0x146c,	// (0x0001fccf) main_camera2_pane_t3

0x146c,	// (0x0001fccf) main_camera2_pane_t4_ParamLimits

0x146c,	// (0x0001fccf) main_camera2_pane_t4

0x0006,

0xf589,	// (0x0002ddec) main_camera2_pane_t_ParamLimits

0xf589,	// (0x0002ddec) main_camera2_pane_t

0x1494,	// (0x0001fcf7) cams_zoom_pane_cp4_ParamLimits

0x1494,	// (0x0001fcf7) cams_zoom_pane_cp4

0x12ab,	// (0x0001fb0e) image2_cif_pane_ParamLimits

0x12ab,	// (0x0001fb0e) image2_cif_pane

0x0dd3,	// (0x0001f636) image2_subqcif_pane_ParamLimits

0x0dd3,	// (0x0001f636) image2_subqcif_pane

0x14a2,	// (0x0001fd05) main_video2_pane_g1_ParamLimits

0x14a2,	// (0x0001fd05) main_video2_pane_g1

0x14a2,	// (0x0001fd05) main_video2_pane_g2_ParamLimits

0x14a2,	// (0x0001fd05) main_video2_pane_g2

0x14a2,	// (0x0001fd05) main_video2_pane_g3_ParamLimits

0x14a2,	// (0x0001fd05) main_video2_pane_g3

0x14a2,	// (0x0001fd05) main_video2_pane_g4_ParamLimits

0x14a2,	// (0x0001fd05) main_video2_pane_g4

0x14a2,	// (0x0001fd05) main_video2_pane_g5_ParamLimits

0x14a2,	// (0x0001fd05) main_video2_pane_g5

0x14a2,	// (0x0001fd05) main_video2_pane_g6_ParamLimits

0x14a2,	// (0x0001fd05) main_video2_pane_g6

0x0005,

0xf598,	// (0x0002ddfb) main_video2_pane_g_ParamLimits

0xf598,	// (0x0002ddfb) main_video2_pane_g

0x14b0,	// (0x0001fd13) main_video2_pane_t1_ParamLimits

0x14b0,	// (0x0001fd13) main_video2_pane_t1

0x14b0,	// (0x0001fd13) main_video2_pane_t2_ParamLimits

0x14b0,	// (0x0001fd13) main_video2_pane_t2

0x14b0,	// (0x0001fd13) main_video2_pane_t3_ParamLimits

0x14b0,	// (0x0001fd13) main_video2_pane_t3

0x0002,

0xf5a5,	// (0x0002de08) main_video2_pane_t_ParamLimits

0xf5a5,	// (0x0002de08) main_video2_pane_t

0x4c6e,	// (0x000234d1) call_muted_g2

0x0001,

0xf54c,	// (0x0002ddaf) call_muted_g

0xa031,	// (0x00028894) main_mup2_pane

0xa331,	// (0x00028b94) main_mup2_pane_g1_ParamLimits

0xa331,	// (0x00028b94) main_mup2_pane_g1

0xa331,	// (0x00028b94) main_mup2_pane_g2_ParamLimits

0xa331,	// (0x00028b94) main_mup2_pane_g2

0xd501,	// (0x0002bd64) main_mup_pane_g13_cp1

0x0de1,	// (0x0001f644) mup_volume_pane_cp1

0xa331,	// (0x00028b94) main_mup2_pane_g4_ParamLimits

0xa331,	// (0x00028b94) main_mup2_pane_g4

0xa331,	// (0x00028b94) main_mup2_pane_g5_ParamLimits

0xa331,	// (0x00028b94) main_mup2_pane_g5

0xa331,	// (0x00028b94) main_mup2_pane_g6_ParamLimits

0xa331,	// (0x00028b94) main_mup2_pane_g6

0xa331,	// (0x00028b94) main_mup2_pane_g7_ParamLimits

0xa331,	// (0x00028b94) main_mup2_pane_g7

0x0006,

0xf5ac,	// (0x0002de0f) main_mup2_pane_g_ParamLimits

0xf5ac,	// (0x0002de0f) main_mup2_pane_g

0xa33f,	// (0x00028ba2) main_mup2_pane_t1_ParamLimits

0xa33f,	// (0x00028ba2) main_mup2_pane_t1

0xa33f,	// (0x00028ba2) main_mup2_pane_t2_ParamLimits

0xa33f,	// (0x00028ba2) main_mup2_pane_t2

0xa33f,	// (0x00028ba2) main_mup2_pane_t3_ParamLimits

0xa33f,	// (0x00028ba2) main_mup2_pane_t3

0xa33f,	// (0x00028ba2) main_mup2_pane_t4_ParamLimits

0xa33f,	// (0x00028ba2) main_mup2_pane_t4

0xa33f,	// (0x00028ba2) main_mup2_pane_t5_ParamLimits

0xa33f,	// (0x00028ba2) main_mup2_pane_t5

0xa33f,	// (0x00028ba2) main_mup2_pane_t6_ParamLimits

0xa33f,	// (0x00028ba2) main_mup2_pane_t6

0x0005,

0xf5bb,	// (0x0002de1e) main_mup2_pane_t_ParamLimits

0xf5bb,	// (0x0002de1e) main_mup2_pane_t

0xc068,	// (0x0002a8cb) mup2_visualizer_pane_ParamLimits

0xc068,	// (0x0002a8cb) mup2_visualizer_pane

0xc068,	// (0x0002a8cb) mup_progress_pane_cp_ParamLimits

0xc068,	// (0x0002a8cb) mup_progress_pane_cp

0x14da,	// (0x0001fd3d) mup_volume_pane_cp_ParamLimits

0x14da,	// (0x0001fd3d) mup_volume_pane_cp

0xa315,	// (0x00028b78) mup2_visualizer_pane_g1_ParamLimits

0xa315,	// (0x00028b78) mup2_visualizer_pane_g1

0xa323,	// (0x00028b86) mup2_visualizer_pane_g2_ParamLimits

0xa323,	// (0x00028b86) mup2_visualizer_pane_g2

0xa323,	// (0x00028b86) mup2_visualizer_pane_g3_ParamLimits

0xa323,	// (0x00028b86) mup2_visualizer_pane_g3

0x0002,

0xf0a4,	// (0x0002d907) mup2_visualizer_pane_g_ParamLimits

0xf0a4,	// (0x0002d907) mup2_visualizer_pane_g

0xb178,	// (0x000299db) aid_size_cell_fmradio

0x1282,	// (0x0001fae5) aid_height_parent_landcape

0xa6cd,	// (0x00028f30) wml_content_pane_cp

0xa6d5,	// (0x00028f38) wml_tabs_pane

0xa6de,	// (0x00028f41) popup_wml_miniature_window

0xa6e6,	// (0x00028f49) scroll_pane_cp021

0xa6fa,	// (0x00028f5d) wml_content_pane_comp8

0xa031,	// (0x00028894) bg_popup_sub_pane_cp05

0xc2f3,	// (0x0002ab56) popup_wml_miniature_window_g1

0xc2fb,	// (0x0002ab5e) wml_miniature_view_pane

0x4f31,	// (0x00023794) aid_size_wml_view

0x4f39,	// (0x0002379c) wml_miniature_view_pane_g1

0x4f42,	// (0x000237a5) wml_miniature_view_pane_g2

0x4f4b,	// (0x000237ae) wml_miniature_view_pane_g3

0x4f53,	// (0x000237b6) wml_miniature_view_pane_g4

0x4f5b,	// (0x000237be) wml_miniature_view_pane_g5

0x4f63,	// (0x000237c6) wml_miniature_view_pane_g6

0x4f6b,	// (0x000237ce) wml_miniature_view_pane_g7

0x4f73,	// (0x000237d6) wml_miniature_view_pane_g8

0x0007,

0xf5c8,	// (0x0002de2b) wml_miniature_view_pane_g

0xc303,	// (0x0002ab66) background_graphic_ParamLimits

0xc303,	// (0x0002ab66) background_graphic

0xc30f,	// (0x0002ab72) wml_tabs_2_pane

0xc318,	// (0x0002ab7b) wml_tabs_3_pane_ParamLimits

0xc318,	// (0x0002ab7b) wml_tabs_3_pane

0xc32a,	// (0x0002ab8d) wml_tabs_4_pane_ParamLimits

0xc32a,	// (0x0002ab8d) wml_tabs_4_pane

0xc340,	// (0x0002aba3) wml_tabs_5_pane_ParamLimits

0xc340,	// (0x0002aba3) wml_tabs_5_pane

0xc35a,	// (0x0002abbd) wml_tabs_pane_g2_ParamLimits

0xc35a,	// (0x0002abbd) wml_tabs_pane_g2

0xc36f,	// (0x0002abd2) wml_tabs_pane_g3_ParamLimits

0xc36f,	// (0x0002abd2) wml_tabs_pane_g3

0xc384,	// (0x0002abe7) wml_tabs_2_active_pane_ParamLimits

0xc384,	// (0x0002abe7) wml_tabs_2_active_pane

0xc384,	// (0x0002abe7) wml_tabs_2_passive_pane_ParamLimits

0xc384,	// (0x0002abe7) wml_tabs_2_passive_pane

0x4f7b,	// (0x000237de) wml_tabs_3_active_pane_cp_ParamLimits

0x4f7b,	// (0x000237de) wml_tabs_3_active_pane_cp

0x4f8e,	// (0x000237f1) wml_tabs_3_passive_pane_ParamLimits

0x4f8e,	// (0x000237f1) wml_tabs_3_passive_pane

0x4f9f,	// (0x00023802) wml_tabs_3_passive_pane_cp_ParamLimits

0x4f9f,	// (0x00023802) wml_tabs_3_passive_pane_cp

0x4fb4,	// (0x00023817) tabs_4_active_pane

0x4fbc,	// (0x0002381f) tabs_4_passive_pane

0x4fc4,	// (0x00023827) tabs_4_passive_pane_cp

0x4fcc,	// (0x0002382f) tabs_4_passive_pane_cp2

0x4b6a,	// (0x000233cd) aid_height_text

0xc068,	// (0x0002a8cb) mup_volume_cont_pane_ParamLimits

0xc068,	// (0x0002a8cb) mup_volume_cont_pane

0x9bdf,	// (0x00028442) aid_size_cell_pinb

0x9bdf,	// (0x00028442) aid_size_list_pinb

0xc068,	// (0x0002a8cb) mup2_volume_cont_pane_ParamLimits

0xc068,	// (0x0002a8cb) mup2_volume_cont_pane

0x14c4,	// (0x0001fd27) mup2_volume_cont_pane_g1_ParamLimits

0x14c4,	// (0x0001fd27) mup2_volume_cont_pane_g1

0x0b5f,	// (0x0001f3c2) aid_size_cell_touch_ParamLimits

0x0b5f,	// (0x0001f3c2) aid_size_cell_touch

0x0deb,	// (0x0001f64e) touch_pane_ParamLimits

0x0deb,	// (0x0001f64e) touch_pane

0x0de1,	// (0x0001f644) main_rss2_pane

0xc39b,	// (0x0002abfe) listscroll_rss2_pane

0xc3a4,	// (0x0002ac07) rss2_navigation_pane

0xc3ac,	// (0x0002ac0f) list_rss2_pane

0xad53,	// (0x000295b6) scroll_pane_cp22

0xc3b4,	// (0x0002ac17) rss2_navigation_pane_g1

0xc3bd,	// (0x0002ac20) rss2_navigation_pane_g2

0xc3c5,	// (0x0002ac28) rss2_navigation_pane_g3

0x0002,

0xf5d9,	// (0x0002de3c) rss2_navigation_pane_g

0xc3cd,	// (0x0002ac30) rss2_navigation_pane_t1

0x4fd6,	// (0x00023839) rss2_list_single_pane_ParamLimits

0x4fd6,	// (0x00023839) rss2_list_single_pane

0xc3db,	// (0x0002ac3e) rss2_list_single_pane_t2

0xc3e9,	// (0x0002ac4c) rss2_list_single_pane_t3_ParamLimits

0xc3e9,	// (0x0002ac4c) rss2_list_single_pane_t3

0xc406,	// (0x0002ac69) rss2_list_single_pane_t4

0x3df4,	// (0x00022657) smil_status_pane_g1

0x12ab,	// (0x0001fb0e) main_image2_pane_ParamLimits

0x12ab,	// (0x0001fb0e) main_image2_pane

0xac6f,	// (0x000294d2) main_camera2_pane_g9_ParamLimits

0xac6f,	// (0x000294d2) main_camera2_pane_g9

0x146c,	// (0x0001fccf) main_camera2_pane_t5_ParamLimits

0x146c,	// (0x0001fccf) main_camera2_pane_t5

0x1480,	// (0x0001fce3) main_camera2_pane_t6_ParamLimits

0x1480,	// (0x0001fce3) main_camera2_pane_t6

0x4ff9,	// (0x0002385c) main_image2_pane_g1_ParamLimits

0x4ff9,	// (0x0002385c) main_image2_pane_g1

0x489f,	// (0x00023102) smil2_video_pane_ParamLimits

0x489f,	// (0x00023102) smil2_video_pane

0x0b93,	// (0x0001f3f6) aid_zoom_text_primary_cp

0x0d88,	// (0x0001f5eb) popup_preview_fixed_window

0xa627,	// (0x00028e8a) im_reading_pane_g1

0x145e,	// (0x0001fcc1) cams2_bc_adjust_pane_cp_ParamLimits

0x145e,	// (0x0001fcc1) cams2_bc_adjust_pane_cp

0x0dd3,	// (0x0001f636) cams2_bc_adjust_pane_ParamLimits

0x0dd3,	// (0x0001f636) cams2_bc_adjust_pane

0xd501,	// (0x0002bd64) cams2_bc_adjust_pane_g1

0x0de1,	// (0x0001f644) cams2_slider_pane

0xd501,	// (0x0002bd64) cams2_slider_pane_g1

0xd501,	// (0x0002bd64) cams2_slider_pane_g2

0x0006,

0xf5e0,	// (0x0002de43) cams2_slider_pane_g

0x0e5c,	// (0x0001f6bf) calc_display_pane_ParamLimits

0x0e7a,	// (0x0001f6dd) calc_paper_pane_ParamLimits

0x0e96,	// (0x0001f6f9) grid_calc_pane_ParamLimits

0x11e1,	// (0x0001fa44) popup_clock_digital_window_t1_ParamLimits

0xb115,	// (0x00029978) main_image_pane_t1

0x0e42,	// (0x0001f6a5) aid_size_cell_calc_ParamLimits

0x0e42,	// (0x0001f6a5) aid_size_cell_calc

0x12dc,	// (0x0001fb3f) popup_blid_sat_info2_window_ParamLimits

0x12dc,	// (0x0001fb3f) popup_blid_sat_info2_window

0xc414,	// (0x0002ac77) aid_size_cell_blid

0xc068,	// (0x0002a8cb) bg_popup_window_pane_cp07

0xc431,	// (0x0002ac94) grid_popup_blid_pane

0xc43b,	// (0x0002ac9e) heading_pane_cp05_ParamLimits

0xc43b,	// (0x0002ac9e) heading_pane_cp05

0xc505,	// (0x0002ad68) cell_popup_blid_pane_ParamLimits

0xc505,	// (0x0002ad68) cell_popup_blid_pane

0xc52f,	// (0x0002ad92) cell_popup_blid_pane_g1

0xc537,	// (0x0002ad9a) cell_popup_blid_pane_t1

0xc068,	// (0x0002a8cb) mup2_indicator_pane_ParamLimits

0xc068,	// (0x0002a8cb) mup2_indicator_pane

0x9bdf,	// (0x00028442) mup2_visualizer_osc_pane

0xc2dd,	// (0x0002ab40) mup2_visualizer_spec_pane_ParamLimits

0xc2dd,	// (0x0002ab40) mup2_visualizer_spec_pane

0x9bdf,	// (0x00028442) mup2_spec_half_pane

0x9bdf,	// (0x00028442) mup2_spec_half_pane_cp

0xc545,	// (0x0002ada8) mup2_spec_bar_pane_ParamLimits

0xc545,	// (0x0002ada8) mup2_spec_bar_pane

0xa555,	// (0x00028db8) mup2_spec_bar_pane_g1

0xc564,	// (0x0002adc7) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002de69) mup2_spec_bar_pane_g

0x9bdf,	// (0x00028442) mup2_osc_middle_pane

0xa555,	// (0x00028db8) mup2_visualizer_osc_pane_g1

0x9c09,	// (0x0002846c) popup_number_entry_window_t1_ParamLimits

0x9c1c,	// (0x0002847f) popup_number_entry_window_t2_ParamLimits

0x9c2e,	// (0x00028491) popup_number_entry_window_t3_ParamLimits

0x9c40,	// (0x000284a3) popup_number_entry_window_t5_ParamLimits

0x9c40,	// (0x000284a3) popup_number_entry_window_t5

0xf045,	// (0x0002d8a8) popup_number_entry_window_t_ParamLimits

0x9c75,	// (0x000284d8) text_title_cp2_ParamLimits

0x1220,	// (0x0001fa83) aid_hotspot_pointer_text2_pane

0x1276,	// (0x0001fad9) main_viewer_pane_g9_ParamLimits

0x1276,	// (0x0001fad9) main_viewer_pane_g9

0xa86f,	// (0x000290d2) cale_month_pane_t1_ParamLimits

0xa8ac,	// (0x0002910f) bg_cale_pane_ParamLimits

0xa8c4,	// (0x00029127) list_cale_pane_ParamLimits

0xa8d5,	// (0x00029138) listscroll_cale_day_pane_t1

0xa8e7,	// (0x0002914a) scroll_pane_cp09_ParamLimits

0x42b8,	// (0x00022b1b) main_mup_eq_pane_t1_ParamLimits

0x42b8,	// (0x00022b1b) main_mup_eq_pane_t1

0x42d4,	// (0x00022b37) main_mup_eq_pane_t2_ParamLimits

0x42d4,	// (0x00022b37) main_mup_eq_pane_t2

0x42f0,	// (0x00022b53) main_mup_eq_pane_t3_ParamLimits

0x42f0,	// (0x00022b53) main_mup_eq_pane_t3

0x430a,	// (0x00022b6d) main_mup_eq_pane_t4_ParamLimits

0x430a,	// (0x00022b6d) main_mup_eq_pane_t4

0x4324,	// (0x00022b87) main_mup_eq_pane_t5_ParamLimits

0x4324,	// (0x00022b87) main_mup_eq_pane_t5

0x433e,	// (0x00022ba1) main_mup_eq_pane_t6_ParamLimits

0x433e,	// (0x00022ba1) main_mup_eq_pane_t6

0x4354,	// (0x00022bb7) main_mup_eq_pane_t7_ParamLimits

0x4354,	// (0x00022bb7) main_mup_eq_pane_t7

0x436a,	// (0x00022bcd) main_mup_eq_pane_t8_ParamLimits

0x436a,	// (0x00022bcd) main_mup_eq_pane_t8

0x4380,	// (0x00022be3) main_mup_eq_pane_t9_ParamLimits

0x4380,	// (0x00022be3) main_mup_eq_pane_t9

0x439c,	// (0x00022bff) main_mup_eq_pane_t10_ParamLimits

0x439c,	// (0x00022bff) main_mup_eq_pane_t10

0x0009,

0xf3a9,	// (0x0002dc0c) main_mup_eq_pane_t_ParamLimits

0xf3a9,	// (0x0002dc0c) main_mup_eq_pane_t

0x4461,	// (0x00022cc4) mup_equalizer_pane_cp5_ParamLimits

0x4479,	// (0x00022cdc) mup_equalizer_pane_cp6_ParamLimits

0x4491,	// (0x00022cf4) mup_equalizer_pane_cp7_ParamLimits

0x0de1,	// (0x0001f644) main_gallery_pane

0xc27b,	// (0x0002aade) smil2_volume_pane

0xc283,	// (0x0002aae6) smil_status_volume_pane_g1_ParamLimits

0xc296,	// (0x0002aaf9) smil_status_volume_pane_g2_ParamLimits

0x143c,	// (0x0001fc9f) smil_status_volume_pane_g3_ParamLimits

0xf55f,	// (0x0002ddc2) smil_status_volume_pane_g_ParamLimits

0xc068,	// (0x0002a8cb) bg_popup_window_pane_cp07_ParamLimits

0xc41c,	// (0x0002ac7f) blid_firmament_pane

0xa307,	// (0x00028b6a) aid_size_cell_gallery_ParamLimits

0xa307,	// (0x00028b6a) aid_size_cell_gallery

0xa307,	// (0x00028b6a) grid_gallery_pane_ParamLimits

0xa307,	// (0x00028b6a) grid_gallery_pane

0xb77f,	// (0x00029fe2) cell_gallery_pane_ParamLimits

0xb77f,	// (0x00029fe2) cell_gallery_pane

0xa2ae,	// (0x00028b11) bg_cell_gallery_focus_pane_ParamLimits

0xa2ae,	// (0x00028b11) bg_cell_gallery_focus_pane

0xa315,	// (0x00028b78) cell_gallery_pane_g1_ParamLimits

0xa315,	// (0x00028b78) cell_gallery_pane_g1

0xa315,	// (0x00028b78) cell_gallery_pane_g2_ParamLimits

0xa315,	// (0x00028b78) cell_gallery_pane_g2

0xa315,	// (0x00028b78) cell_gallery_pane_g3_ParamLimits

0xa315,	// (0x00028b78) cell_gallery_pane_g3

0xa323,	// (0x00028b86) cell_gallery_pane_g4_ParamLimits

0xa323,	// (0x00028b86) cell_gallery_pane_g4

0x0003,

0xf60b,	// (0x0002de6e) cell_gallery_pane_g_ParamLimits

0xf60b,	// (0x0002de6e) cell_gallery_pane_g

0xc56e,	// (0x0002add1) bg_cell_gallery_focus_pane_g1

0xc576,	// (0x0002add9) bg_cell_gallery_focus_pane_g2

0xc57e,	// (0x0002ade1) bg_cell_gallery_focus_pane_g3

0xc586,	// (0x0002ade9) bg_cell_gallery_focus_pane_g4

0xc58e,	// (0x0002adf1) bg_cell_gallery_focus_pane_g5

0xc596,	// (0x0002adf9) bg_cell_gallery_focus_pane_g6

0xc59e,	// (0x0002ae01) bg_cell_gallery_focus_pane_g7

0xc5a6,	// (0x0002ae09) bg_cell_gallery_focus_pane_g8

0x0007,

0xf614,	// (0x0002de77) bg_cell_gallery_focus_pane_g

0xc5ae,	// (0x0002ae11) aid_firma_cardinal

0xc5c2,	// (0x0002ae25) blid_firmament_pane_t1

0xc5d9,	// (0x0002ae3c) blid_firmament_pane_t2

0xc5f0,	// (0x0002ae53) blid_firmament_pane_t3

0xc607,	// (0x0002ae6a) blid_firmament_pane_t4

0x0003,

0xf625,	// (0x0002de88) blid_firmament_pane_t

0xc61e,	// (0x0002ae81) blid_sat_info_pane

0xa555,	// (0x00028db8) blid_sat_info_pane_g1

0xa555,	// (0x00028db8) blid_sat_info_pane_g2

0x0001,

0xf39d,	// (0x0002dc00) blid_sat_info_pane_g

0xc62e,	// (0x0002ae91) blid_sat_info_pane_t1

0xc63c,	// (0x0002ae9f) smil2_volume_content_pane

0xc645,	// (0x0002aea8) smil2_volume_pane_g1

0xa583,	// (0x00028de6) smil2_volume_content_pane_g1

0xc64d,	// (0x0002aeb0) smil2_volume_content_pane_g2

0xc656,	// (0x0002aeb9) smil2_volume_content_pane_g3

0xc65f,	// (0x0002aec2) smil2_volume_content_pane_g4

0xc668,	// (0x0002aecb) smil2_volume_content_pane_g5

0xc671,	// (0x0002aed4) smil2_volume_content_pane_g6

0xc67a,	// (0x0002aedd) smil2_volume_content_pane_g7

0xc683,	// (0x0002aee6) smil2_volume_content_pane_g8

0xc68c,	// (0x0002aeef) smil2_volume_content_pane_g9

0xc695,	// (0x0002aef8) smil2_volume_content_pane_g10

0x0009,

0xf62e,	// (0x0002de91) smil2_volume_content_pane_g

0x2a04,	// (0x00021267) cale_week_day_heading_pane_t1_ParamLimits

0x2a2c,	// (0x0002128f) cale_week_day_heading_pane_t2_ParamLimits

0x2a59,	// (0x000212bc) cale_week_day_heading_pane_t3_ParamLimits

0x2a86,	// (0x000212e9) cale_week_day_heading_pane_t4_ParamLimits

0x2ab3,	// (0x00021316) cale_week_day_heading_pane_t5_ParamLimits

0x2ae0,	// (0x00021343) cale_week_day_heading_pane_t6_ParamLimits

0x2b0d,	// (0x00021370) cale_week_day_heading_pane_t7_ParamLimits

0xf14c,	// (0x0002d9af) cale_week_day_heading_pane_t_ParamLimits

0xa4d8,	// (0x00028d3b) bg_cale_side_pane_ParamLimits

0x0ff1,	// (0x0001f854) cale_week_time_pane_t1_ParamLimits

0x1015,	// (0x0001f878) cale_week_time_pane_t2_ParamLimits

0x1039,	// (0x0001f89c) cale_week_time_pane_t3_ParamLimits

0x105d,	// (0x0001f8c0) cale_week_time_pane_t4_ParamLimits

0x1081,	// (0x0001f8e4) cale_week_time_pane_t5_ParamLimits

0x10a7,	// (0x0001f90a) cale_week_time_pane_t6_ParamLimits

0x10cf,	// (0x0001f932) cale_week_time_pane_t7_ParamLimits

0x10fb,	// (0x0001f95e) cale_week_time_pane_t8_ParamLimits

0xf15b,	// (0x0002d9be) cale_week_time_pane_t_ParamLimits

0x2b35,	// (0x00021398) cell_cale_week_pane_g2_ParamLimits

0xa4d8,	// (0x00028d3b) bg_cale_side_pane_cp01_ParamLimits

0x3c17,	// (0x0002247a) cale_month_week_pane_t1_ParamLimits

0x3c30,	// (0x00022493) cale_month_week_pane_t2_ParamLimits

0x3c49,	// (0x000224ac) cale_month_week_pane_t3_ParamLimits

0x3c62,	// (0x000224c5) cale_month_week_pane_t4_ParamLimits

0x3c7b,	// (0x000224de) cale_month_week_pane_t5_ParamLimits

0x3c98,	// (0x000224fb) cale_month_week_pane_t6_ParamLimits

0xf229,	// (0x0002da8c) cale_month_week_pane_t_ParamLimits

0x1135,	// (0x0001f998) cell_cale_month_pane_g1_ParamLimits

0x0de1,	// (0x0001f644) main_cale_event_viewer_pane

0x9bdf,	// (0x00028442) listscroll_cale_event_viewer_pane

0xc69e,	// (0x0002af01) list_cale_ev_pane

0xc6a6,	// (0x0002af09) scroll_pane_cp023

0x5005,	// (0x00023868) field_cale_ev_pane_ParamLimits

0x5005,	// (0x00023868) field_cale_ev_pane

0xc6b2,	// (0x0002af15) field_cale_ev_content_pane_ParamLimits

0xc6b2,	// (0x0002af15) field_cale_ev_content_pane

0xc6be,	// (0x0002af21) field_cale_ev_pane_g1_ParamLimits

0xc6be,	// (0x0002af21) field_cale_ev_pane_g1

0xc6ca,	// (0x0002af2d) field_cale_ev_pane_g2_ParamLimits

0xc6ca,	// (0x0002af2d) field_cale_ev_pane_g2

0xc6e2,	// (0x0002af45) field_cale_ev_pane_g3_ParamLimits

0xc6e2,	// (0x0002af45) field_cale_ev_pane_g3

0x0002,

0xf643,	// (0x0002dea6) field_cale_ev_pane_g_ParamLimits

0xf643,	// (0x0002dea6) field_cale_ev_pane_g

0xc6fa,	// (0x0002af5d) field_cale_ev_pane_t1_ParamLimits

0xc6fa,	// (0x0002af5d) field_cale_ev_pane_t1

0x5029,	// (0x0002388c) field_cale_ev_content_pane_t1_ParamLimits

0x5029,	// (0x0002388c) field_cale_ev_content_pane_t1

0xaffb,	// (0x0002985e) bg_button_pane_cp01

0x2662,	// (0x00020ec5) listscroll_cale_week_pane_ParamLimits

0xa4a0,	// (0x00028d03) popup_toolbar_window_cp01

0xa4a9,	// (0x00028d0c) listscroll_cale_week_pane_t1_ParamLimits

0x2662,	// (0x00020ec5) listscroll_cale_day_pane_ParamLimits

0xa4a0,	// (0x00028d03) popup_toolbar_window_cp02

0xa8d5,	// (0x00029138) listscroll_cale_day_pane_t1_ParamLimits

0x1299,	// (0x0001fafc) main_cale_month_pane_ParamLimits

0x13fb,	// (0x0001fc5e) popup_toolbar_window_cp03_ParamLimits

0x13fb,	// (0x0001fc5e) popup_toolbar_window_cp03

0x47af,	// (0x00023012) main_image_pane_g2_ParamLimits

0x47af,	// (0x00023012) main_image_pane_g2

0x47bb,	// (0x0002301e) main_image_pane_g3_ParamLimits

0x47bb,	// (0x0002301e) main_image_pane_g3

0x0002,

0xf43b,	// (0x0002dc9e) main_image_pane_g_ParamLimits

0xf43b,	// (0x0002dc9e) main_image_pane_g

0xb115,	// (0x00029978) main_image_pane_t1_ParamLimits

0x47c7,	// (0x0002302a) main_image_pane_t2_ParamLimits

0x47c7,	// (0x0002302a) main_image_pane_t2

0x47d9,	// (0x0002303c) main_image_pane_t3_ParamLimits

0x47d9,	// (0x0002303c) main_image_pane_t3

0x47eb,	// (0x0002304e) main_image_pane_t4_ParamLimits

0x47eb,	// (0x0002304e) main_image_pane_t4

0x0003,

0xf442,	// (0x0002dca5) main_image_pane_t_ParamLimits

0xf442,	// (0x0002dca5) main_image_pane_t

0x47fd,	// (0x00023060) popup_image_details_window_cp01

0x4807,	// (0x0002306a) popup_toobar_trans_pane_cp01_ParamLimits

0x4807,	// (0x0002306a) popup_toobar_trans_pane_cp01

0x133d,	// (0x0001fba0) popup_image_details_window_ParamLimits

0x133d,	// (0x0001fba0) popup_image_details_window

0x134b,	// (0x0001fbae) popup_image_focus_window

0x0dd3,	// (0x0001f636) camera2_autofocus_pane_ParamLimits

0x0dd3,	// (0x0001f636) camera2_autofocus_pane

0x9bdf,	// (0x00028442) bg_popup_sub_pane_cp06

0xc711,	// (0x0002af74) popup_image_focus_window_g1

0xc719,	// (0x0002af7c) popup_image_focus_window_g2

0xc721,	// (0x0002af84) popup_image_focus_window_g3

0xc729,	// (0x0002af8c) popup_image_focus_window_g4

0x0003,

0xf64a,	// (0x0002dead) popup_image_focus_window_g

0xc731,	// (0x0002af94) popup_image_focus_window_t1

0xc73f,	// (0x0002afa2) popup_image_focus_window_t2

0xc74f,	// (0x0002afb2) popup_image_focus_window_t3

0x0002,

0xf653,	// (0x0002deb6) popup_image_focus_window_t

0xa315,	// (0x00028b78) camera2_autofocus_pane_g1

0xa2ae,	// (0x00028b11) bg_tb_trans_pane_cp01

0xc75d,	// (0x0002afc0) popup_image_details_window_g1

0xc770,	// (0x0002afd3) popup_image_details_window_g2

0x0002,

0xf665,	// (0x0002dec8) popup_image_details_window_g

0xc799,	// (0x0002affc) popup_image_details_window_t1

0xc7ab,	// (0x0002b00e) popup_image_details_window_t2

0xc7c4,	// (0x0002b027) popup_image_details_window_t3

0xc7d8,	// (0x0002b03b) popup_image_details_window_t4

0xc7f3,	// (0x0002b056) popup_image_details_window_t5

0x0004,

0xf66c,	// (0x0002decf) popup_image_details_window_t

0xa373,	// (0x00028bd6) bg_calc_paper_pane_ParamLimits

0x0de1,	// (0x0001f644) grid_highlight_pane_cp013

0x0ec2,	// (0x0001f725) list_calc_pane_ParamLimits

0x0ed4,	// (0x0001f737) scroll_pane_cp024

0xa387,	// (0x00028bea) bg_calc_display_pane_ParamLimits

0x0edc,	// (0x0001f73f) calc_display_pane_t1_ParamLimits

0x0ef1,	// (0x0001f754) calc_display_pane_t2_ParamLimits

0x0f06,	// (0x0001f769) calc_display_pane_t3_ParamLimits

0xf0cc,	// (0x0002d92f) calc_display_pane_t_ParamLimits

0x0f71,	// (0x0001f7d4) cell_calc_pane_g2

0x0001,

0xf0e9,	// (0x0002d94c) cell_calc_pane_g

0x0f7a,	// (0x0001f7dd) cell_calc_pane_t1

0xa3dc,	// (0x00028c3f) grid_highlight_pane_cp02_ParamLimits

0xa3f2,	// (0x00028c55) toolbar_button_pane_cp01_ParamLimits

0xa3f2,	// (0x00028c55) toolbar_button_pane_cp01

0xb15a,	// (0x000299bd) temp_image_control_pane_ParamLimits

0xb15a,	// (0x000299bd) temp_image_control_pane

0x12ab,	// (0x0001fb0e) main_mp3_pane

0xc80d,	// (0x0002b070) temp_image_control_pane_g1_ParamLimits

0xc80d,	// (0x0002b070) temp_image_control_pane_g1

0xc81b,	// (0x0002b07e) temp_image_control_pane_g2_ParamLimits

0xc81b,	// (0x0002b07e) temp_image_control_pane_g2

0xc82d,	// (0x0002b090) temp_image_control_pane_g3_ParamLimits

0xc82d,	// (0x0002b090) temp_image_control_pane_g3

0x5044,	// (0x000238a7) temp_image_control_pane_g4_ParamLimits

0x5044,	// (0x000238a7) temp_image_control_pane_g4

0x0003,

0xf677,	// (0x0002deda) temp_image_control_pane_g_ParamLimits

0xf677,	// (0x0002deda) temp_image_control_pane_g

0xc80d,	// (0x0002b070) main_mp3_pane_g1

0x5055,	// (0x000238b8) main_mp3_pane_g2

0x0007,

0xf680,	// (0x0002dee3) main_mp3_pane_g

0xc870,	// (0x0002b0d3) main_mp3_pane_t1

0xa323,	// (0x00028b86) main_camera_pane_g8_ParamLimits

0xa323,	// (0x00028b86) main_camera_pane_g8

0x2cd7,	// (0x0002153a) main_video_pane_g7_ParamLimits

0x2cd7,	// (0x0002153a) main_video_pane_g7

0x146c,	// (0x0001fccf) main_camera2_pane_t7_ParamLimits

0x146c,	// (0x0001fccf) main_camera2_pane_t7

0xa68d,	// (0x00028ef0) scroll_pane_cp025_ParamLimits

0xa68d,	// (0x00028ef0) scroll_pane_cp025

0xa6a1,	// (0x00028f04) scroll_pane_cp026_ParamLimits

0xa6a1,	// (0x00028f04) scroll_pane_cp026

0xa6b0,	// (0x00028f13) wml_content_pane_ParamLimits

0x0de1,	// (0x0001f644) main_touch_calib_pane

0x50f9,	// (0x0002395c) main_touch_calib_pane_g1

0x5105,	// (0x00023968) main_touch_calib_pane_g2

0x5111,	// (0x00023974) main_touch_calib_pane_g3

0x511d,	// (0x00023980) main_touch_calib_pane_g4

0x0003,

0xf69e,	// (0x0002df01) main_touch_calib_pane_g

0x5129,	// (0x0002398c) main_touch_calib_pane_t1

0x5140,	// (0x000239a3) main_touch_calib_pane_t2

0x0004,

0xf6a7,	// (0x0002df0a) main_touch_calib_pane_t

0xadce,	// (0x00029631) mup_progress_pane_cp02

0xaded,	// (0x00029650) navi_pane_g1

0xae4f,	// (0x000296b2) navi_pane_mp_t3

0x12ab,	// (0x0001fb0e) main_mp3_pane_ParamLimits

0x4d84,	// (0x000235e7) navi_pane_ParamLimits

0xc80d,	// (0x0002b070) main_mp3_pane_g1_ParamLimits

0x5055,	// (0x000238b8) main_mp3_pane_g2_ParamLimits

0x5061,	// (0x000238c4) main_mp3_pane_g3_ParamLimits

0x5061,	// (0x000238c4) main_mp3_pane_g3

0x506d,	// (0x000238d0) main_mp3_pane_g4_ParamLimits

0x506d,	// (0x000238d0) main_mp3_pane_g4

0xa315,	// (0x00028b78) main_mp3_pane_g5_ParamLimits

0xa315,	// (0x00028b78) main_mp3_pane_g5

0xc83d,	// (0x0002b0a0) main_mp3_pane_g6_ParamLimits

0xc83d,	// (0x0002b0a0) main_mp3_pane_g6

0xc84a,	// (0x0002b0ad) main_mp3_pane_g7_ParamLimits

0xc84a,	// (0x0002b0ad) main_mp3_pane_g7

0xc864,	// (0x0002b0c7) main_mp3_pane_g8_ParamLimits

0xc864,	// (0x0002b0c7) main_mp3_pane_g8

0xf680,	// (0x0002dee3) main_mp3_pane_g_ParamLimits

0x5079,	// (0x000238dc) main_mp3_pane_t2

0x5089,	// (0x000238ec) main_mp3_pane_t3

0xc87e,	// (0x0002b0e1) main_mp3_pane_t4

0xc88c,	// (0x0002b0ef) main_mp3_pane_t5

0x0005,

0xf691,	// (0x0002def4) main_mp3_pane_t

0xc89a,	// (0x0002b0fd) mup_progress_pane_cp01

0x0b93,	// (0x0001f3f6) aid_zoom_text_secondary2

0xc69e,	// (0x0002af01) list_cale_ev2_pane

0xc6a6,	// (0x0002af09) scroll_pane_cp023_ParamLimits

0x519b,	// (0x000239fe) field_cale_ev2_pane_ParamLimits

0x519b,	// (0x000239fe) field_cale_ev2_pane

0x51b6,	// (0x00023a19) field_cale_ev2_pane_g1_ParamLimits

0x51b6,	// (0x00023a19) field_cale_ev2_pane_g1

0x51c2,	// (0x00023a25) field_cale_ev2_pane_g2_ParamLimits

0x51c2,	// (0x00023a25) field_cale_ev2_pane_g2

0x51da,	// (0x00023a3d) field_cale_ev2_pane_g3_ParamLimits

0x51da,	// (0x00023a3d) field_cale_ev2_pane_g3

0x0003,

0xf6b2,	// (0x0002df15) field_cale_ev2_pane_g_ParamLimits

0xf6b2,	// (0x0002df15) field_cale_ev2_pane_g

0x51f2,	// (0x00023a55) field_cale_ev2_pane_t1_ParamLimits

0x51f2,	// (0x00023a55) field_cale_ev2_pane_t1

0x5209,	// (0x00023a6c) field_cale_ev2_pane_t2_ParamLimits

0x5209,	// (0x00023a6c) field_cale_ev2_pane_t2

0x0001,

0xf6bb,	// (0x0002df1e) field_cale_ev2_pane_t_ParamLimits

0xf6bb,	// (0x0002df1e) field_cale_ev2_pane_t

0x468e,	// (0x00022ef1) main_postcard_pane_g5_ParamLimits

0x468e,	// (0x00022ef1) main_postcard_pane_g5

0x469c,	// (0x00022eff) main_postcard_pane_g6_ParamLimits

0x469c,	// (0x00022eff) main_postcard_pane_g6

0xa307,	// (0x00028b6a) camera2_autofocus_pane_cp_ParamLimits

0xa307,	// (0x00028b6a) camera2_autofocus_pane_cp

0x12ab,	// (0x0001fb0e) main_mup3_pane

0x5261,	// (0x00023ac4) main_mup3_pane_g1_ParamLimits

0x5261,	// (0x00023ac4) main_mup3_pane_g1

0x5282,	// (0x00023ae5) main_mup3_pane_g2_ParamLimits

0x5282,	// (0x00023ae5) main_mup3_pane_g2

0x52f6,	// (0x00023b59) main_mup3_pane_g3_ParamLimits

0x52f6,	// (0x00023b59) main_mup3_pane_g3

0x535b,	// (0x00023bbe) main_mup3_pane_g4_ParamLimits

0x535b,	// (0x00023bbe) main_mup3_pane_g4

0x53c0,	// (0x00023c23) main_mup3_pane_g5_ParamLimits

0x53c0,	// (0x00023c23) main_mup3_pane_g5

0x5425,	// (0x00023c88) main_mup3_pane_g6_ParamLimits

0x5425,	// (0x00023c88) main_mup3_pane_g6

0xa323,	// (0x00028b86) main_mup3_pane_g7_ParamLimits

0xa323,	// (0x00028b86) main_mup3_pane_g7

0x0007,

0xf6cb,	// (0x0002df2e) main_mup3_pane_g_ParamLimits

0xf6cb,	// (0x0002df2e) main_mup3_pane_g

0x549f,	// (0x00023d02) main_mup3_pane_t1_ParamLimits

0x549f,	// (0x00023d02) main_mup3_pane_t1

0x5504,	// (0x00023d67) main_mup3_pane_t2_ParamLimits

0x5504,	// (0x00023d67) main_mup3_pane_t2

0x55cd,	// (0x00023e30) main_mup3_pane_t4_ParamLimits

0x55cd,	// (0x00023e30) main_mup3_pane_t4

0x5621,	// (0x00023e84) main_mup3_pane_t5_ParamLimits

0x5621,	// (0x00023e84) main_mup3_pane_t5

0x56dd,	// (0x00023f40) main_mup3_pane_t6_ParamLimits

0x56dd,	// (0x00023f40) main_mup3_pane_t6

0x0005,

0xf6dc,	// (0x0002df3f) main_mup3_pane_t_ParamLimits

0xf6dc,	// (0x0002df3f) main_mup3_pane_t

0x5787,	// (0x00023fea) mup3_progress_pane_ParamLimits

0x5787,	// (0x00023fea) mup3_progress_pane

0x5805,	// (0x00024068) popup_mup3_control_window_ParamLimits

0x5805,	// (0x00024068) popup_mup3_control_window

0xc8ae,	// (0x0002b111) popup_mup3_text_window

0x5822,	// (0x00024085) mup3_progress_pane_t1

0x5840,	// (0x000240a3) mup3_progress_pane_t2

0xc8b6,	// (0x0002b119) mup3_progress_pane_t3

0x0002,

0xf6e9,	// (0x0002df4c) mup3_progress_pane_t

0xc8d3,	// (0x0002b136) mup_progress_pane_cp03

0x9bdf,	// (0x00028442) bg_tb_trans_pane_cp04

0x585e,	// (0x000240c1) mup3_volume_pane

0x5866,	// (0x000240c9) popup_mup3_control_window_g1

0xd50b,	// (0x0002bd6e) mup3_volume_pane_g1

0xd514,	// (0x0002bd77) mup3_volume_pane_g2

0xd51d,	// (0x0002bd80) mup3_volume_pane_g3

0x0002,

0xf6f0,	// (0x0002df53) mup3_volume_pane_g

0x9bdf,	// (0x00028442) bg_tb_trans_pane_cp03

0xc8e3,	// (0x0002b146) popup_mup3_text_window_g1

0xc8eb,	// (0x0002b14e) popup_mup3_text_window_t1

0xa3cf,	// (0x00028c32) list_calc_item_pane_g1_ParamLimits

0xc392,	// (0x0002abf5) mup_volume_pane_cp_g1

0x5159,	// (0x000239bc) main_touch_calib_pane_t3

0x516f,	// (0x000239d2) main_touch_calib_pane_t4

0x5185,	// (0x000239e8) main_touch_calib_pane_t5

0x0b4b,	// (0x0001f3ae) aid_cell_size_toolbar2

0x0b53,	// (0x0001f3b6) aid_popup3_width_pane

0x0b93,	// (0x0001f3f6) aid_zoom_text_msg_primary

0x2be1,	// (0x00021444) vorec_t7

0xa393,	// (0x00028bf6) bg_calc_paper_pane_g1_ParamLimits

0xa39f,	// (0x00028c02) bg_calc_paper_pane_g2_ParamLimits

0xa3ab,	// (0x00028c0e) bg_calc_paper_pane_g3_ParamLimits

0xa3b7,	// (0x00028c1a) bg_calc_paper_pane_g4_ParamLimits

0xa3c3,	// (0x00028c26) bg_calc_paper_pane_g5_ParamLimits

0x2545,	// (0x00020da8) bg_calc_paper_pane_g6_ParamLimits

0x2556,	// (0x00020db9) bg_calc_paper_pane_g7_ParamLimits

0x2567,	// (0x00020dca) bg_calc_paper_pane_g8_ParamLimits

0xf0d3,	// (0x0002d936) bg_calc_paper_pane_g_ParamLimits

0x2578,	// (0x00020ddb) calc_bg_paper_pane_g9_ParamLimits

0xa307,	// (0x00028b6a) image_qvga_pane_ParamLimits

0xa307,	// (0x00028b6a) image_qvga_pane

0xa28c,	// (0x00028aef) bg_popup_sub_pane_cp04_ParamLimits

0xb091,	// (0x000298f4) popup_mup_playback_window_g1_ParamLimits

0xb09d,	// (0x00029900) popup_mup_playback_window_t1_ParamLimits

0xb0b2,	// (0x00029915) popup_mup_playback_window_t2_ParamLimits

0xf436,	// (0x0002dc99) popup_mup_playback_window_t_ParamLimits

0xa315,	// (0x00028b78) main_mup2_pane_g3_ParamLimits

0xa315,	// (0x00028b78) main_mup2_pane_g3

0x2eb0,	// (0x00021713) popup_toolbar_window_cp04

0xb4ad,	// (0x00029d10) popup_call2_audio_second_window_g3_ParamLimits

0xb4ad,	// (0x00029d10) popup_call2_audio_second_window_g3

0xb8f5,	// (0x0002a158) popup_call2_audio_first_window_g4_ParamLimits

0xb8f5,	// (0x0002a158) popup_call2_audio_first_window_g4

0xbf1c,	// (0x0002a77f) popup_call2_audio_in_window_g4_ParamLimits

0xbf1c,	// (0x0002a77f) popup_call2_audio_in_window_g4

0x47a2,	// (0x00023005) aid_area_sk_bg_cut_ParamLimits

0x47a2,	// (0x00023005) aid_area_sk_bg_cut

0xb0c7,	// (0x0002992a) aid_area_sk_bg_cut_2_ParamLimits

0xb0c7,	// (0x0002992a) aid_area_sk_bg_cut_2

0x9bdf,	// (0x00028442) aid_placing_details_win

0x9bdf,	// (0x00028442) aid_placing_details_win_2

0xa315,	// (0x00028b78) camera2_autofocus_pane_g1_ParamLimits

0x0d79,	// (0x0001f5dc) popup_fixed_preview_cale_window_ParamLimits

0x0d79,	// (0x0001f5dc) popup_fixed_preview_cale_window

0xaeb6,	// (0x00029719) navi_slider_pane_g3

0xaebf,	// (0x00029722) navi_slider_pane_g4

0xaec8,	// (0x0002972b) navi_slider_pane_g5

0xaeb6,	// (0x00029719) navi_slider_pane_g6

0x1207,	// (0x0001fa6a) navi_slider_pane_g7

0xafc8,	// (0x0002982b) mup_scale_pane_g3

0xafd1,	// (0x00029834) mup_scale_pane_g4

0xafda,	// (0x0002983d) mup_scale_pane_g5

0x44a9,	// (0x00022d0c) mup_scale_pane_g6

0x44b2,	// (0x00022d15) mup_scale_pane_g7

0xd501,	// (0x0002bd64) cams2_slider_pane_g3

0xd501,	// (0x0002bd64) cams2_slider_pane_g4

0xd501,	// (0x0002bd64) cams2_slider_pane_g5

0xd501,	// (0x0002bd64) cams2_slider_pane_g6

0xd501,	// (0x0002bd64) cams2_slider_pane_g7

0xa555,	// (0x00028db8) camera2_autofocus_pane_cp_g1

0xc202,	// (0x0002aa65) bg_popup_preview_window_pane_cp02_ParamLimits

0xc202,	// (0x0002aa65) bg_popup_preview_window_pane_cp02

0xc8f9,	// (0x0002b15c) list_fp_cale_pane_ParamLimits

0xc8f9,	// (0x0002b15c) list_fp_cale_pane

0xc905,	// (0x0002b168) popup_fixed_preview_cale_window_t1_ParamLimits

0xc905,	// (0x0002b168) popup_fixed_preview_cale_window_t1

0x586f,	// (0x000240d2) popup_fixed_preview_cale_window_t2_ParamLimits

0x586f,	// (0x000240d2) popup_fixed_preview_cale_window_t2

0x5884,	// (0x000240e7) popup_fixed_preview_cale_window_t3_ParamLimits

0x5884,	// (0x000240e7) popup_fixed_preview_cale_window_t3

0x0002,

0xf6f7,	// (0x0002df5a) popup_fixed_preview_cale_window_t_ParamLimits

0xf6f7,	// (0x0002df5a) popup_fixed_preview_cale_window_t

0x5899,	// (0x000240fc) list_single_fp_cale_pane_ParamLimits

0x5899,	// (0x000240fc) list_single_fp_cale_pane

0xc923,	// (0x0002b186) list_single_fp_cale_pane_g1_ParamLimits

0xc923,	// (0x0002b186) list_single_fp_cale_pane_g1

0xc92f,	// (0x0002b192) list_single_fp_cale_pane_g2_ParamLimits

0xc92f,	// (0x0002b192) list_single_fp_cale_pane_g2

0x0002,

0xf6fe,	// (0x0002df61) list_single_fp_cale_pane_g_ParamLimits

0xf6fe,	// (0x0002df61) list_single_fp_cale_pane_g

0xc948,	// (0x0002b1ab) list_single_fp_cale_pane_t1_ParamLimits

0xc948,	// (0x0002b1ab) list_single_fp_cale_pane_t1

0xc95a,	// (0x0002b1bd) list_single_fp_cale_pane_t2_ParamLimits

0xc95a,	// (0x0002b1bd) list_single_fp_cale_pane_t2

0x0001,

0xf705,	// (0x0002df68) list_single_fp_cale_pane_t_ParamLimits

0xf705,	// (0x0002df68) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x0de1,	// (0x0001f644) main_dialer_pane

0x9bdf,	// (0x00028442) aid_cell_size_keypad

0x9bdf,	// (0x00028442) dialer_ne_pane

0x9bdf,	// (0x00028442) grid_dialer_command_1_pane

0x9bdf,	// (0x00028442) grid_dialer_command_2_pane

0x9bdf,	// (0x00028442) grid_dialer_keypad_pane

0xc068,	// (0x0002a8cb) bg_popup_call_pane_cp06_ParamLimits

0xc068,	// (0x0002a8cb) bg_popup_call_pane_cp06

0xc068,	// (0x0002a8cb) dialer_ne_clear_pane_ParamLimits

0xc068,	// (0x0002a8cb) dialer_ne_clear_pane

0xa555,	// (0x00028db8) dialer_ne_pane_g1

0xae99,	// (0x000296fc) dialer_ne_pane_t1_ParamLimits

0xae99,	// (0x000296fc) dialer_ne_pane_t1

0xc98d,	// (0x0002b1f0) dialer_ne_pane_t2_ParamLimits

0xc98d,	// (0x0002b1f0) dialer_ne_pane_t2

0x58a9,	// (0x0002410c) dialer_ne_pane_t3_ParamLimits

0x58a9,	// (0x0002410c) dialer_ne_pane_t3

0x0002,

0xf70a,	// (0x0002df6d) dialer_ne_pane_t_ParamLimits

0xf70a,	// (0x0002df6d) dialer_ne_pane_t

0x58a9,	// (0x0002410c) dialer_ne_pane_t3_copy1_ParamLimits

0x58a9,	// (0x0002410c) dialer_ne_pane_t3_copy1

0xc9aa,	// (0x0002b20d) cell_dialer_keypad_pane_ParamLimits

0xc9aa,	// (0x0002b20d) cell_dialer_keypad_pane

0xa2ae,	// (0x00028b11) cell_dialer_command_1_pane_ParamLimits

0xa2ae,	// (0x00028b11) cell_dialer_command_1_pane

0xc9c1,	// (0x0002b224) cell_dialer_command_2_pane_ParamLimits

0xc9c1,	// (0x0002b224) cell_dialer_command_2_pane

0xa2ae,	// (0x00028b11) bg_button_pane_cp02_ParamLimits

0xa2ae,	// (0x00028b11) bg_button_pane_cp02

0xa315,	// (0x00028b78) cell_dialer_keypad_pane_g1_ParamLimits

0xa315,	// (0x00028b78) cell_dialer_keypad_pane_g1

0xa2ae,	// (0x00028b11) bg_button_pane_cp03_ParamLimits

0xa2ae,	// (0x00028b11) bg_button_pane_cp03

0xa315,	// (0x00028b78) cell_dialer_command_1_pane_g1_ParamLimits

0xa315,	// (0x00028b78) cell_dialer_command_1_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp04

0xa555,	// (0x00028db8) cell_dialer_command_2_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp06

0xa555,	// (0x00028db8) dialer_ne_clear_pane_g1

0x41d9,	// (0x00022a3c) navi_pane_g2

0x4207,	// (0x00022a6a) navi_pane_g3

0x0002,

0xf339,	// (0x0002db9c) navi_pane_g

0x4232,	// (0x00022a95) navi_pane_mv_g2

0x4259,	// (0x00022abc) navi_pane_mv_g5

0x4261,	// (0x00022ac4) navi_pane_mv_t1

0xa387,	// (0x00028bea) main_clock2_pane

0xa307,	// (0x00028b6a) main_clock2_list_pane_ParamLimits

0xa307,	// (0x00028b6a) main_clock2_list_pane

0x591e,	// (0x00024181) main_clock2_pane_t1_ParamLimits

0x591e,	// (0x00024181) main_clock2_pane_t1

0x594c,	// (0x000241af) main_clock2_pane_t2_ParamLimits

0x594c,	// (0x000241af) main_clock2_pane_t2

0x0004,

0xf716,	// (0x0002df79) main_clock2_pane_t_ParamLimits

0xf716,	// (0x0002df79) main_clock2_pane_t

0x59b1,	// (0x00024214) popup_clock_analogue_window_cp03_ParamLimits

0x59b1,	// (0x00024214) popup_clock_analogue_window_cp03

0x59cf,	// (0x00024232) popup_clock_digital_window_cp02_ParamLimits

0x59cf,	// (0x00024232) popup_clock_digital_window_cp02

0x5a0f,	// (0x00024272) main_clock2_list_single_pane_ParamLimits

0x5a0f,	// (0x00024272) main_clock2_list_single_pane

0xa533,	// (0x00028d96) list_highlight_pane_cp05

0xca02,	// (0x0002b265) main_clock2_list_single_pane_t1

0x2eb0,	// (0x00021713) popup_toolbar_window_cp04_ParamLimits

0xa323,	// (0x00028b86) camera2_autofocus_pane_g2_ParamLimits

0xa323,	// (0x00028b86) camera2_autofocus_pane_g2

0xa323,	// (0x00028b86) camera2_autofocus_pane_g3_ParamLimits

0xa323,	// (0x00028b86) camera2_autofocus_pane_g3

0xa323,	// (0x00028b86) camera2_autofocus_pane_g4_ParamLimits

0xa323,	// (0x00028b86) camera2_autofocus_pane_g4

0xa323,	// (0x00028b86) camera2_autofocus_pane_g5_ParamLimits

0xa323,	// (0x00028b86) camera2_autofocus_pane_g5

0x0004,

0xf65a,	// (0x0002debd) camera2_autofocus_pane_g_ParamLimits

0xf65a,	// (0x0002debd) camera2_autofocus_pane_g

0x521e,	// (0x00023a81) camera2_autofocus_pane_cp_g2

0x5226,	// (0x00023a89) camera2_autofocus_pane_cp_g3

0x522e,	// (0x00023a91) camera2_autofocus_pane_cp_g4

0x5236,	// (0x00023a99) camera2_autofocus_pane_cp_g5

0x0004,

0xf6c0,	// (0x0002df23) camera2_autofocus_pane_cp_g

0x9bdf,	// (0x00028442) popup_dialer_spcha_window

0x9bdf,	// (0x00028442) bg_popup_sub_pane_cp07

0x9bdf,	// (0x00028442) list_spcha_pane

0xca10,	// (0x0002b273) list_single_spcha_pane_ParamLimits

0xca10,	// (0x0002b273) list_single_spcha_pane

0x9bdf,	// (0x00028442) list_highlight_pane_cp06

0xaac4,	// (0x00029327) list_single_spcha_pane_t1

0xbcc6,	// (0x0002a529) popup_call2_audio_out_window_g4_ParamLimits

0xbcc6,	// (0x0002a529) popup_call2_audio_out_window_g4

0x0de1,	// (0x0001f644) main_imed2_pane

0x1355,	// (0x0001fbb8) popup_imed_adjust2_window

0x1368,	// (0x0001fbcb) popup_imed_trans_window_ParamLimits

0x1368,	// (0x0001fbcb) popup_imed_trans_window

0xc467,	// (0x0002acca) popup_blid_sat_info2_window_t1

0xc475,	// (0x0002acd8) popup_blid_sat_info2_window_t2

0x000a,

0xf5ef,	// (0x0002de52) popup_blid_sat_info2_window_t

0x5a21,	// (0x00024284) aid_size_cell_colour_35

0x5a3b,	// (0x0002429e) aid_size_cell_colour_112

0x5a52,	// (0x000242b5) aid_size_cell_effect

0xa2ae,	// (0x00028b11) bg_tb_trans_pane_cp02

0xae8d,	// (0x000296f0) heading_imed_pane

0x5a6c,	// (0x000242cf) listscroll_imed_pane

0xca22,	// (0x0002b285) heading_imed_pane_g1

0xca2a,	// (0x0002b28d) heading_imed_pane_t1

0xca38,	// (0x0002b29b) grid_imed_colour_35_pane_ParamLimits

0xca38,	// (0x0002b29b) grid_imed_colour_35_pane

0x5a78,	// (0x000242db) grid_imed_effect_pane

0xca54,	// (0x0002b2b7) list_imed_aspect_pane

0x5a88,	// (0x000242eb) scroll_pane_cp027_ParamLimits

0x5a88,	// (0x000242eb) scroll_pane_cp027

0x5a94,	// (0x000242f7) cell_imed_effect_pane_ParamLimits

0x5a94,	// (0x000242f7) cell_imed_effect_pane

0xca5c,	// (0x0002b2bf) cell_imed_colour_pane_ParamLimits

0xca5c,	// (0x0002b2bf) cell_imed_colour_pane

0xcaa6,	// (0x0002b309) cell_imed_colour_pane_g1_ParamLimits

0xcaa6,	// (0x0002b309) cell_imed_colour_pane_g1

0xcab7,	// (0x0002b31a) hgihlgiht_grid_pane_cp016_ParamLimits

0xcab7,	// (0x0002b31a) hgihlgiht_grid_pane_cp016

0x5ab0,	// (0x00024313) cell_imed_effect_pane_g1

0x5ab8,	// (0x0002431b) grid_highlight_pane_cp017

0xcac8,	// (0x0002b32b) list_imed_single_pane_ParamLimits

0xcac8,	// (0x0002b32b) list_imed_single_pane

0x9bdf,	// (0x00028442) list_highlight_pane_cp07

0xcadc,	// (0x0002b33f) list_imed_aspect_pane_comp1_t1

0xb77f,	// (0x00029fe2) bg_tb_trans_pane_cp05

0xcafe,	// (0x0002b361) popup_imed_adjust2_window_g1

0xcb25,	// (0x0002b388) popup_imed_adjust2_window_t1

0xcb3d,	// (0x0002b3a0) slider_imed_adjust_pane

0xcb51,	// (0x0002b3b4) slider_imed_adjust_pane_g1

0xcb61,	// (0x0002b3c4) slider_imed_adjust_pane_g2

0xcb71,	// (0x0002b3d4) slider_imed_adjust_pane_g3

0xcb82,	// (0x0002b3e5) slider_imed_adjust_pane_g4

0x0003,

0xf733,	// (0x0002df96) slider_imed_adjust_pane_g

0x5ac1,	// (0x00024324) aid_size_cell_clipart2

0xcb93,	// (0x0002b3f6) grid_imed_clipart_pane

0xcb9d,	// (0x0002b400) scroll_pane_cp031

0x5acd,	// (0x00024330) cell_imed_clipart_pane_ParamLimits

0x5acd,	// (0x00024330) cell_imed_clipart_pane

0x5aeb,	// (0x0002434e) cell_imed_clipart_pane_g1

0x9bdf,	// (0x00028442) grid_highlight_pane_cp014

0x5900,	// (0x00024163) main_clock2_pane_g1_ParamLimits

0x5900,	// (0x00024163) main_clock2_pane_g1

0x59eb,	// (0x0002424e) aid_call2_pane_cp10

0x59fd,	// (0x00024260) aid_call_pane_cp10

0xadc2,	// (0x00029625) popup_clock_analogue_window_cp10_g1

0xadc2,	// (0x00029625) popup_clock_analogue_window_cp10_g2

0x14f0,	// (0x0001fd53) popup_clock_analogue_window_cp10_g3

0x14f0,	// (0x0001fd53) popup_clock_analogue_window_cp10_g4

0xadc2,	// (0x00029625) popup_clock_analogue_window_cp10_g5

0x0004,

0xf721,	// (0x0002df84) popup_clock_analogue_window_cp10_g

0x1506,	// (0x0001fd69) popup_clock_analogue_window_cp10_t1

0x1525,	// (0x0001fd88) clock_digital_number_pane_cp10_ParamLimits

0x1525,	// (0x0001fd88) clock_digital_number_pane_cp10

0x153f,	// (0x0001fda2) clock_digital_number_pane_cp11_ParamLimits

0x153f,	// (0x0001fda2) clock_digital_number_pane_cp11

0x1559,	// (0x0001fdbc) clock_digital_number_pane_cp12_ParamLimits

0x1559,	// (0x0001fdbc) clock_digital_number_pane_cp12

0x1573,	// (0x0001fdd6) clock_digital_number_pane_cp13_ParamLimits

0x1573,	// (0x0001fdd6) clock_digital_number_pane_cp13

0x158f,	// (0x0001fdf2) clock_digital_separator_pane_cp10_ParamLimits

0x158f,	// (0x0001fdf2) clock_digital_separator_pane_cp10

0x15a9,	// (0x0001fe0c) popup_clock_digital_window_cp02_t1_ParamLimits

0x15a9,	// (0x0001fe0c) popup_clock_digital_window_cp02_t1

0xa284,	// (0x00028ae7) clock_digital_number_pane_cp10_g1

0xa284,	// (0x00028ae7) clock_digital_number_pane_cp10_g2

0x0001,

0xf73c,	// (0x0002df9f) clock_digital_number_pane_cp10_g

0xa284,	// (0x00028ae7) clock_digital_separator_pane_cp10_g1

0xa284,	// (0x00028ae7) clock_digital_separator_pane_g2_cp10

0xae5d,	// (0x000296c0) navi_pane_vded_g4

0xae66,	// (0x000296c9) navi_pane_vded_g5

0xae6f,	// (0x000296d2) navi_pane_vded_t1

0x0de1,	// (0x0001f644) main_vded_pane

0x5af4,	// (0x00024357) main_vded_pane_g1

0x5b00,	// (0x00024363) main_vded_pane_g2

0x5b0a,	// (0x0002436d) main_vded_pane_g3

0x0002,

0xf741,	// (0x0002dfa4) main_vded_pane_g

0x5b14,	// (0x00024377) main_vded_pane_t1

0x5b22,	// (0x00024385) main_vded_pane_t2

0x0001,

0xf748,	// (0x0002dfab) main_vded_pane_t

0x5b30,	// (0x00024393) vded_slider_pane

0x5b3a,	// (0x0002439d) vded_video_pane

0xcba5,	// (0x0002b408) vded_video_pane_g1

0x5b46,	// (0x000243a9) vded_video_pane_g2

0xa555,	// (0x00028db8) vded_video_pane_g3

0x0002,

0xf74d,	// (0x0002dfb0) vded_video_pane_g

0xcbaf,	// (0x0002b412) vded_slider_pane_g1

0xc392,	// (0x0002abf5) vded_slider_pane_g2

0xcbb8,	// (0x0002b41b) vded_slider_pane_g3

0xcbc1,	// (0x0002b424) vded_slider_pane_g4

0xcbca,	// (0x0002b42d) vded_slider_pane_g5

0x0004,

0xf754,	// (0x0002dfb7) vded_slider_pane_g

0x57f9,	// (0x0002405c) mup3_rocker_pane_ParamLimits

0x57f9,	// (0x0002405c) mup3_rocker_pane

0x5b4f,	// (0x000243b2) mup3_control_keys_pane_g1

0x5b57,	// (0x000243ba) mup3_control_keys_pane_g2

0x5b5f,	// (0x000243c2) mup3_control_keys_pane_g3

0x5b67,	// (0x000243ca) mup3_control_keys_pane_g4

0x0003,

0xf75f,	// (0x0002dfc2) mup3_control_keys_pane_g

0x0da1,	// (0x0001f604) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0da1,	// (0x0001f604) popup_toolbar2_fixed_window_cp01

0x5815,	// (0x00024078) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5815,	// (0x00024078) popup_toolbar2_fixed_window_cp02

0xb61f,	// (0x00029e82) popup_call2_audio_second_window_t4_ParamLimits

0xb61f,	// (0x00029e82) popup_call2_audio_second_window_t4

0xbb8b,	// (0x0002a3ee) popup_call2_audio_first_window_t6_ParamLimits

0xbb8b,	// (0x0002a3ee) popup_call2_audio_first_window_t6

0xbdc9,	// (0x0002a62c) popup_call2_audio_out_window_t6_ParamLimits

0xbdc9,	// (0x0002a62c) popup_call2_audio_out_window_t6

0x0de1,	// (0x0001f644) main_vitu_pane

0xa307,	// (0x00028b6a) aid_size_cell_itu_ParamLimits

0xa307,	// (0x00028b6a) aid_size_cell_itu

0xa307,	// (0x00028b6a) bg_popup_window_pane_cp08_ParamLimits

0xa307,	// (0x00028b6a) bg_popup_window_pane_cp08

0xa307,	// (0x00028b6a) field_vitu_entry_pane_ParamLimits

0xa307,	// (0x00028b6a) field_vitu_entry_pane

0xa307,	// (0x00028b6a) grid_vitu_function_pane_ParamLimits

0xa307,	// (0x00028b6a) grid_vitu_function_pane

0xa307,	// (0x00028b6a) grid_vitu_itu_pane_ParamLimits

0xa307,	// (0x00028b6a) grid_vitu_itu_pane

0xa307,	// (0x00028b6a) cell_vitu_itu_pane_ParamLimits

0xa307,	// (0x00028b6a) cell_vitu_itu_pane

0xa307,	// (0x00028b6a) cell_vitu_function_pane_ParamLimits

0xa307,	// (0x00028b6a) cell_vitu_function_pane

0xa2ae,	// (0x00028b11) bg_popup_sub_pane_cp08_ParamLimits

0xa2ae,	// (0x00028b11) bg_popup_sub_pane_cp08

0xa56f,	// (0x00028dd2) field_vitu_entry_pane_t1_ParamLimits

0xa56f,	// (0x00028dd2) field_vitu_entry_pane_t1

0xc98d,	// (0x0002b1f0) field_vitu_entry_pane_t2_ParamLimits

0xc98d,	// (0x0002b1f0) field_vitu_entry_pane_t2

0x0001,

0xf768,	// (0x0002dfcb) field_vitu_entry_pane_t_ParamLimits

0xf768,	// (0x0002dfcb) field_vitu_entry_pane_t

0xc068,	// (0x0002a8cb) bg_button_pane_cp05_ParamLimits

0xc068,	// (0x0002a8cb) bg_button_pane_cp05

0xcbd3,	// (0x0002b436) cell_vitu_itu_pane_g1

0xb78d,	// (0x00029ff0) cell_vitu_itu_pane_t1_ParamLimits

0xb78d,	// (0x00029ff0) cell_vitu_itu_pane_t1

0xb78d,	// (0x00029ff0) cell_vitu_itu_pane_t2_ParamLimits

0xb78d,	// (0x00029ff0) cell_vitu_itu_pane_t2

0x0002,

0xf76d,	// (0x0002dfd0) cell_vitu_itu_pane_t_ParamLimits

0xf76d,	// (0x0002dfd0) cell_vitu_itu_pane_t

0x9bdf,	// (0x00028442) bg_button_pane_cp07

0xa555,	// (0x00028db8) cell_vitu_function_pane_g1

0x0eba,	// (0x0001f71d) main_calc_pane_g1

0x0b87,	// (0x0001f3ea) aid_visual_content_pane

0x0de1,	// (0x0001f644) main_vradio_pane

0xa323,	// (0x00028b86) main_vradio_pane_g1_ParamLimits

0xa323,	// (0x00028b86) main_vradio_pane_g1

0xa323,	// (0x00028b86) main_vradio_pane_g2_ParamLimits

0xa323,	// (0x00028b86) main_vradio_pane_g2

0x0001,

0xf774,	// (0x0002dfd7) main_vradio_pane_g_ParamLimits

0xf774,	// (0x0002dfd7) main_vradio_pane_g

0xae99,	// (0x000296fc) main_vradio_pane_t1_ParamLimits

0xae99,	// (0x000296fc) main_vradio_pane_t1

0xae99,	// (0x000296fc) main_vradio_pane_t2_ParamLimits

0xae99,	// (0x000296fc) main_vradio_pane_t2

0xae99,	// (0x000296fc) main_vradio_pane_t3_ParamLimits

0xae99,	// (0x000296fc) main_vradio_pane_t3

0x0002,

0xf779,	// (0x0002dfdc) main_vradio_pane_t_ParamLimits

0xf779,	// (0x0002dfdc) main_vradio_pane_t

0xa307,	// (0x00028b6a) vradio_rocker_control_pane_ParamLimits

0xa307,	// (0x00028b6a) vradio_rocker_control_pane

0xa307,	// (0x00028b6a) vradio_station_info_pane_ParamLimits

0xa307,	// (0x00028b6a) vradio_station_info_pane

0xa2ae,	// (0x00028b11) vradio_frequency_info_pane_ParamLimits

0xa2ae,	// (0x00028b11) vradio_frequency_info_pane

0xa555,	// (0x00028db8) vradio_station_info_pane_g1

0xb78d,	// (0x00029ff0) vradio_station_info_pane_t1_ParamLimits

0xb78d,	// (0x00029ff0) vradio_station_info_pane_t1

0xae99,	// (0x000296fc) vradio_station_info_pane_t2_ParamLimits

0xae99,	// (0x000296fc) vradio_station_info_pane_t2

0x0001,

0xf780,	// (0x0002dfe3) vradio_station_info_pane_t_ParamLimits

0xf780,	// (0x0002dfe3) vradio_station_info_pane_t

0x9bdf,	// (0x00028442) vradio_tuning_pane

0x5b77,	// (0x000243da) vradio_rocker_control_pane_g1

0xcbef,	// (0x0002b452) vradio_rocker_control_pane_g2

0x5b7f,	// (0x000243e2) vradio_rocker_control_pane_g3

0x5b87,	// (0x000243ea) vradio_rocker_control_pane_g4

0x5b91,	// (0x000243f4) vradio_rocker_control_pane_g5

0x0004,

0xf785,	// (0x0002dfe8) vradio_rocker_control_pane_g

0xa555,	// (0x00028db8) vradio_frequency_info_pane_g1

0xa56f,	// (0x00028dd2) vradio_frequency_info_pane_t1_ParamLimits

0xa56f,	// (0x00028dd2) vradio_frequency_info_pane_t1

0x5b99,	// (0x000243fc) vradio_tuning_pane_g1

0x5ba6,	// (0x00024409) vradio_tuning_pane_t1

0x0ba3,	// (0x0001f406) area_side_right_pane_ParamLimits

0x0ba3,	// (0x0001f406) area_side_right_pane

0xc1c9,	// (0x0002aa2c) status_small_pane_g1

0xc1d1,	// (0x0002aa34) status_small_pane_g2

0xc1da,	// (0x0002aa3d) status_small_pane_g3

0xc1e3,	// (0x0002aa46) status_small_pane_g4

0x0003,

0xf551,	// (0x0002ddb4) status_small_pane_g

0xc1ec,	// (0x0002aa4f) status_small_pane_t1

0x0de1,	// (0x0001f644) main_video3_pane

0xcbf7,	// (0x0002b45a) cams_zoom_vslider_pane

0xcbff,	// (0x0002b462) image3_wide_pane_ParamLimits

0xcbff,	// (0x0002b462) image3_wide_pane

0xcc19,	// (0x0002b47c) image3_wide_small_pane

0xcc25,	// (0x0002b488) main_video3_pane_g1_ParamLimits

0xcc25,	// (0x0002b488) main_video3_pane_g1

0xcc41,	// (0x0002b4a4) main_video3_pane_g2_ParamLimits

0xcc41,	// (0x0002b4a4) main_video3_pane_g2

0x0001,

0xf790,	// (0x0002dff3) main_video3_pane_g_ParamLimits

0xf790,	// (0x0002dff3) main_video3_pane_g

0xcc5d,	// (0x0002b4c0) main_video3_pane_t1_ParamLimits

0xcc5d,	// (0x0002b4c0) main_video3_pane_t1

0xcc88,	// (0x0002b4eb) main_video3_pane_t2_ParamLimits

0xcc88,	// (0x0002b4eb) main_video3_pane_t2

0xccb5,	// (0x0002b518) main_video3_pane_t3_ParamLimits

0xccb5,	// (0x0002b518) main_video3_pane_t3

0x0002,

0xf795,	// (0x0002dff8) main_video3_pane_t_ParamLimits

0xf795,	// (0x0002dff8) main_video3_pane_t

0xcce2,	// (0x0002b545) cams_zoom_vslider_pane_g1

0xcceb,	// (0x0002b54e) cams_zoom_vslider_pane_g2

0x0001,

0xf79c,	// (0x0002dfff) cams_zoom_vslider_pane_g

0xccf3,	// (0x0002b556) small_slider_vertical_pane

0xa555,	// (0x00028db8) small_slider_vertical_pane_g1

0xa555,	// (0x00028db8) small_slider_vertical_pane_g2

0xccfb,	// (0x0002b55e) small_slider_vertical_pane_g3

0x0002,

0xf7a1,	// (0x0002e004) small_slider_vertical_pane_g

0x0de1,	// (0x0001f644) main_hwr_training_pane

0xcd04,	// (0x0002b567) hwr_training_instruct_pane_ParamLimits

0xcd04,	// (0x0002b567) hwr_training_instruct_pane

0x5bb5,	// (0x00024418) hwr_training_navi_pane_ParamLimits

0x5bb5,	// (0x00024418) hwr_training_navi_pane

0x5bcf,	// (0x00024432) hwr_training_write_pane_ParamLimits

0x5bcf,	// (0x00024432) hwr_training_write_pane

0x9bdf,	// (0x00028442) bg_frame_shadow_pane

0xcd3b,	// (0x0002b59e) hwr_training_write_pane_g1

0xcd43,	// (0x0002b5a6) hwr_training_write_pane_g2

0xcd4b,	// (0x0002b5ae) hwr_training_write_pane_g3

0xcd53,	// (0x0002b5b6) hwr_training_write_pane_g4

0xcd5b,	// (0x0002b5be) hwr_training_write_pane_g5

0xcd63,	// (0x0002b5c6) hwr_training_write_pane_g6

0xcd6b,	// (0x0002b5ce) hwr_training_write_pane_g7

0x0006,

0xf7a8,	// (0x0002e00b) hwr_training_write_pane_g

0x15ca,	// (0x0001fe2d) hwr_training_navi_pane_g1_ParamLimits

0x15ca,	// (0x0001fe2d) hwr_training_navi_pane_g1

0x15dc,	// (0x0001fe3f) hwr_training_navi_pane_g2_ParamLimits

0x15dc,	// (0x0001fe3f) hwr_training_navi_pane_g2

0x15ee,	// (0x0001fe51) hwr_training_navi_pane_g3_ParamLimits

0x15ee,	// (0x0001fe51) hwr_training_navi_pane_g3

0x15fe,	// (0x0001fe61) hwr_training_navi_pane_g4_ParamLimits

0x15fe,	// (0x0001fe61) hwr_training_navi_pane_g4

0x0004,

0xf7b7,	// (0x0002e01a) hwr_training_navi_pane_g_ParamLimits

0xf7b7,	// (0x0002e01a) hwr_training_navi_pane_g

0x1618,	// (0x0001fe7b) hwr_training_navi_pane_t1

0x5c07,	// (0x0002446a) list_single_hwr_training_instruct_pane_ParamLimits

0x5c07,	// (0x0002446a) list_single_hwr_training_instruct_pane

0xcd73,	// (0x0002b5d6) list_single_hwr_training_instruct_pane_t1

0xc56e,	// (0x0002add1) bg_frame_shadow_pane_g1

0xcd82,	// (0x0002b5e5) bg_frame_shadow_pane_g2

0xcd8a,	// (0x0002b5ed) bg_frame_shadow_pane_g3

0xcd92,	// (0x0002b5f5) bg_frame_shadow_pane_g4

0xcd9a,	// (0x0002b5fd) bg_frame_shadow_pane_g5

0xcda2,	// (0x0002b605) bg_frame_shadow_pane_g6

0xcdaa,	// (0x0002b60d) bg_frame_shadow_pane_g7

0xa436,	// (0x00028c99) bg_frame_shadow_pane_g8

0x0007,

0xf7c2,	// (0x0002e025) bg_frame_shadow_pane_g

0x0de1,	// (0x0001f644) main_video_tele_dialer_pane

0x1626,	// (0x0001fe89) aid_size_cell_video_keypad_ParamLimits

0x1626,	// (0x0001fe89) aid_size_cell_video_keypad

0x1636,	// (0x0001fe99) grid_video_dialer_keypad_pane_ParamLimits

0x1636,	// (0x0001fe99) grid_video_dialer_keypad_pane

0x1644,	// (0x0001fea7) video_down_pane_cp_ParamLimits

0x1644,	// (0x0001fea7) video_down_pane_cp

0x1652,	// (0x0001feb5) cell_video_dialer_keypad_pane_ParamLimits

0x1652,	// (0x0001feb5) cell_video_dialer_keypad_pane

0xcdb2,	// (0x0002b615) bg_button_pane_cp08_ParamLimits

0xcdb2,	// (0x0002b615) bg_button_pane_cp08

0x5c60,	// (0x000244c3) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c60,	// (0x000244c3) cell_video_dialer_keypad_pane_g1

0x57ed,	// (0x00024050) mup3_rocker2_pane_ParamLimits

0x57ed,	// (0x00024050) mup3_rocker2_pane

0xa555,	// (0x00028db8) mup3_rocker2_pane_g1

0x12b9,	// (0x0001fb1c) main_dialer2_pane

0x0de1,	// (0x0001f644) main_mp4_pane

0x1687,	// (0x0001feea) main_mp4_pane_g1_ParamLimits

0x1687,	// (0x0001feea) main_mp4_pane_g1

0x1695,	// (0x0001fef8) main_mp4_pane_g2_ParamLimits

0x1695,	// (0x0001fef8) main_mp4_pane_g2

0x16a3,	// (0x0001ff06) main_mp4_pane_g3_ParamLimits

0x16a3,	// (0x0001ff06) main_mp4_pane_g3

0x16f6,	// (0x0001ff59) main_mp4_pane_g4_ParamLimits

0x16f6,	// (0x0001ff59) main_mp4_pane_g4

0x1724,	// (0x0001ff87) main_mp4_pane_g5_ParamLimits

0x1724,	// (0x0001ff87) main_mp4_pane_g5

0x0007,

0xf7e2,	// (0x0002e045) main_mp4_pane_g_ParamLimits

0xf7e2,	// (0x0002e045) main_mp4_pane_g

0x1798,	// (0x0001fffb) main_mp4_pane_t1_ParamLimits

0x1798,	// (0x0001fffb) main_mp4_pane_t1

0x17f4,	// (0x00020057) main_mp4_pane_t2_ParamLimits

0x17f4,	// (0x00020057) main_mp4_pane_t2

0xcdbe,	// (0x0002b621) main_mp4_pane_t3_ParamLimits

0xcdbe,	// (0x0002b621) main_mp4_pane_t3

0x1846,	// (0x000200a9) main_mp4_pane_t4_ParamLimits

0x1846,	// (0x000200a9) main_mp4_pane_t4

0x0003,

0xf7f3,	// (0x0002e056) main_mp4_pane_t_ParamLimits

0xf7f3,	// (0x0002e056) main_mp4_pane_t

0x1886,	// (0x000200e9) mp4_progress_pane_ParamLimits

0x1886,	// (0x000200e9) mp4_progress_pane

0x18d0,	// (0x00020133) mp4_rocker_pane_ParamLimits

0x18d0,	// (0x00020133) mp4_rocker_pane

0xcdec,	// (0x0002b64f) mp4_progress_pane_t1

0xce05,	// (0x0002b668) mp4_progress_pane_t2

0x0001,

0xf7fc,	// (0x0002e05f) mp4_progress_pane_t

0xce1e,	// (0x0002b681) mup_progress_pane_cp04

0xd501,	// (0x0002bd64) mp4_rocker_pane_g1

0x18f2,	// (0x00020155) aid_cell_size_keypad2_ParamLimits

0x18f2,	// (0x00020155) aid_cell_size_keypad2

0x1902,	// (0x00020165) dialer2_ne_pane_ParamLimits

0x1902,	// (0x00020165) dialer2_ne_pane

0x190e,	// (0x00020171) grid_dialer2_keypad_pane_ParamLimits

0x190e,	// (0x00020171) grid_dialer2_keypad_pane

0xc856,	// (0x0002b0b9) bg_popup_call_pane_cp07_ParamLimits

0xc856,	// (0x0002b0b9) bg_popup_call_pane_cp07

0x5c9b,	// (0x000244fe) dialer2_ne_pane_t1_ParamLimits

0x5c9b,	// (0x000244fe) dialer2_ne_pane_t1

0x191c,	// (0x0002017f) cell_dialer2_keypad_pane_ParamLimits

0x191c,	// (0x0002017f) cell_dialer2_keypad_pane

0xce43,	// (0x0002b6a6) bg_button_pane_pane_cp04_ParamLimits

0xce43,	// (0x0002b6a6) bg_button_pane_pane_cp04

0x5cc0,	// (0x00024523) cell_dialer2_keypad_pane_g1_ParamLimits

0x5cc0,	// (0x00024523) cell_dialer2_keypad_pane_g1

0x2d82,	// (0x000215e5) aid_placing_vt_set_content_ParamLimits

0x2d82,	// (0x000215e5) aid_placing_vt_set_content

0x2daa,	// (0x0002160d) aid_placing_vt_set_title_ParamLimits

0x2daa,	// (0x0002160d) aid_placing_vt_set_title

0x0de1,	// (0x0001f644) main_image3_pane

0x1965,	// (0x000201c8) area_side_right_pane_cp01_ParamLimits

0x1965,	// (0x000201c8) area_side_right_pane_cp01

0x1994,	// (0x000201f7) main_image3_pane_g1_ParamLimits

0x1994,	// (0x000201f7) main_image3_pane_g1

0x19a2,	// (0x00020205) main_image3_pane_g2_ParamLimits

0x19a2,	// (0x00020205) main_image3_pane_g2

0x19bb,	// (0x0002021e) main_image3_pane_g3_ParamLimits

0x19bb,	// (0x0002021e) main_image3_pane_g3

0x19d4,	// (0x00020237) main_image3_pane_g4_ParamLimits

0x19d4,	// (0x00020237) main_image3_pane_g4

0x0003,

0xf80b,	// (0x0002e06e) main_image3_pane_g_ParamLimits

0xf80b,	// (0x0002e06e) main_image3_pane_g

0x19ed,	// (0x00020250) main_image3_pane_t1_ParamLimits

0x19ed,	// (0x00020250) main_image3_pane_t1

0x1a12,	// (0x00020275) main_image3_pane_t2_ParamLimits

0x1a12,	// (0x00020275) main_image3_pane_t2

0x1a31,	// (0x00020294) main_image3_pane_t3_ParamLimits

0x1a31,	// (0x00020294) main_image3_pane_t3

0x0003,

0xf814,	// (0x0002e077) main_image3_pane_t_ParamLimits

0xf814,	// (0x0002e077) main_image3_pane_t

0xa307,	// (0x00028b6a) grid_sctrl_middle_pane_cp01_ParamLimits

0xa307,	// (0x00028b6a) grid_sctrl_middle_pane_cp01

0x5d28,	// (0x0002458b) cell_sctrl_middle_pane_cp01_ParamLimits

0x5d28,	// (0x0002458b) cell_sctrl_middle_pane_cp01

0x5d39,	// (0x0002459c) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x5d39,	// (0x0002459c) cell_sctrl_middle_pane_cp01_g1

0x0de1,	// (0x0001f644) main_call4_pane

0x1a92,	// (0x000202f5) aid_size_button_call4_ParamLimits

0x1a92,	// (0x000202f5) aid_size_button_call4

0x1ac8,	// (0x0002032b) call4_windows_pane_ParamLimits

0x1ac8,	// (0x0002032b) call4_windows_pane

0x1add,	// (0x00020340) grid_call4_button_pane_ParamLimits

0x1add,	// (0x00020340) grid_call4_button_pane

0x5d52,	// (0x000245b5) call4_windows_conf_pane

0x5d6b,	// (0x000245ce) popup_call4_audio_first_window_ParamLimits

0x5d6b,	// (0x000245ce) popup_call4_audio_first_window

0x5dbb,	// (0x0002461e) popup_call4_audio_second_window_ParamLimits

0x5dbb,	// (0x0002461e) popup_call4_audio_second_window

0x5dd4,	// (0x00024637) popup_call4_audio_wait_window_ParamLimits

0x5dd4,	// (0x00024637) popup_call4_audio_wait_window

0x1b01,	// (0x00020364) cell_call4_button_pane_ParamLimits

0x1b01,	// (0x00020364) cell_call4_button_pane

0x5de2,	// (0x00024645) bg_button_pane_cp09_ParamLimits

0x5de2,	// (0x00024645) bg_button_pane_cp09

0x1b24,	// (0x00020387) cell_call4_button_pane_g1_ParamLimits

0x1b24,	// (0x00020387) cell_call4_button_pane_g1

0x5dee,	// (0x00024651) cell_call4_button_pane_t1_ParamLimits

0x5dee,	// (0x00024651) cell_call4_button_pane_t1

0xce57,	// (0x0002b6ba) popup_call4_audio_conf_window_ParamLimits

0xce57,	// (0x0002b6ba) popup_call4_audio_conf_window

0x5822,	// (0x00024085) mup3_progress_pane_t1_ParamLimits

0x5840,	// (0x000240a3) mup3_progress_pane_t2_ParamLimits

0xc8b6,	// (0x0002b119) mup3_progress_pane_t3_ParamLimits

0xf6e9,	// (0x0002df4c) mup3_progress_pane_t_ParamLimits

0xc8d3,	// (0x0002b136) mup_progress_pane_cp03_ParamLimits

0x5b6f,	// (0x000243d2) mup3_control_keys_pane_g4_copy1

0x18b4,	// (0x00020117) mp4_rocker2_pane_ParamLimits

0x18b4,	// (0x00020117) mp4_rocker2_pane

0xce71,	// (0x0002b6d4) mp4_rocker2_pane_g1

0xce79,	// (0x0002b6dc) mp4_rocker2_pane_g2

0x1b63,	// (0x000203c6) mp4_rocker2_pane_g3

0x1b6b,	// (0x000203ce) mp4_rocker2_pane_g4

0x1b73,	// (0x000203d6) mp4_rocker2_pane_g5

0x0004,

0xf81d,	// (0x0002e080) mp4_rocker2_pane_g

0x0de1,	// (0x0001f644) main_camera4_pane

0x0de1,	// (0x0001f644) main_video4_pane

0x5c20,	// (0x00024483) main_video_tele_dialer_pane_t1_ParamLimits

0x5c20,	// (0x00024483) main_video_tele_dialer_pane_t1

0x5c32,	// (0x00024495) main_video_tele_dialer_pane_t2_ParamLimits

0x5c32,	// (0x00024495) main_video_tele_dialer_pane_t2

0x0001,

0xf7d3,	// (0x0002e036) main_video_tele_dialer_pane_t_ParamLimits

0xf7d3,	// (0x0002e036) main_video_tele_dialer_pane_t

0x1b93,	// (0x000203f6) cam4_autofocus_pane_ParamLimits

0x1b93,	// (0x000203f6) cam4_autofocus_pane

0x1bab,	// (0x0002040e) cam4_image_uncrop_pane_ParamLimits

0x1bab,	// (0x0002040e) cam4_image_uncrop_pane

0x1bc4,	// (0x00020427) cam4_indicators_pane_ParamLimits

0x1bc4,	// (0x00020427) cam4_indicators_pane

0x1be0,	// (0x00020443) main_camera4_pane_g1_ParamLimits

0x1be0,	// (0x00020443) main_camera4_pane_g1

0x1bec,	// (0x0002044f) main_camera4_pane_g2_ParamLimits

0x1bec,	// (0x0002044f) main_camera4_pane_g2

0x1bec,	// (0x0002044f) main_camera4_pane_g3_ParamLimits

0x1bec,	// (0x0002044f) main_camera4_pane_g3

0x1bf8,	// (0x0002045b) main_camera4_pane_g4_ParamLimits

0x1bf8,	// (0x0002045b) main_camera4_pane_g4

0x1c04,	// (0x00020467) main_camera4_pane_g5_ParamLimits

0x1c04,	// (0x00020467) main_camera4_pane_g5

0x0005,

0xf828,	// (0x0002e08b) main_camera4_pane_g_ParamLimits

0xf828,	// (0x0002e08b) main_camera4_pane_g

0x1c1e,	// (0x00020481) main_camera4_pane_t1_ParamLimits

0x1c1e,	// (0x00020481) main_camera4_pane_t1

0xdec9,	// (0x0002c72c) bg_tb_trans_pane_cp06

0x1c4a,	// (0x000204ad) cam4_indicators_pane_g1

0x1c5b,	// (0x000204be) cam4_indicators_pane_g2

0x0002,

0xf843,	// (0x0002e0a6) cam4_indicators_pane_g

0x1c73,	// (0x000204d6) cam4_indicators_pane_t1

0x1c9d,	// (0x00020500) main_video4_pane_g1_ParamLimits

0x1c9d,	// (0x00020500) main_video4_pane_g1

0x1ca9,	// (0x0002050c) main_video4_pane_g2_ParamLimits

0x1ca9,	// (0x0002050c) main_video4_pane_g2

0x1cb5,	// (0x00020518) main_video4_pane_g3_ParamLimits

0x1cb5,	// (0x00020518) main_video4_pane_g3

0x1cc1,	// (0x00020524) main_video4_pane_g4_ParamLimits

0x1cc1,	// (0x00020524) main_video4_pane_g4

0x0004,

0xf84a,	// (0x0002e0ad) main_video4_pane_g_ParamLimits

0xf84a,	// (0x0002e0ad) main_video4_pane_g

0x1ce3,	// (0x00020546) vid4_indicators_pane_ParamLimits

0x1ce3,	// (0x00020546) vid4_indicators_pane

0x1d02,	// (0x00020565) video4_image_uncrop_cif_pane_ParamLimits

0x1d02,	// (0x00020565) video4_image_uncrop_cif_pane

0x1d11,	// (0x00020574) video4_image_uncrop_nhd_pane_ParamLimits

0x1d11,	// (0x00020574) video4_image_uncrop_nhd_pane

0x1bab,	// (0x0002040e) video4_image_uncrop_vga_pane_ParamLimits

0x1bab,	// (0x0002040e) video4_image_uncrop_vga_pane

0x12ab,	// (0x0001fb0e) bg_tb_trans_pane_cp07

0x1d2a,	// (0x0002058d) vid4_indicators_pane_g1

0x1d40,	// (0x000205a3) vid4_indicators_pane_g2

0x1d54,	// (0x000205b7) vid4_indicators_pane_g3

0x0004,

0xf855,	// (0x0002e0b8) vid4_indicators_pane_g

0x1d85,	// (0x000205e8) vid4_indicators_pane_t1

0x5e26,	// (0x00024689) cam4_autofocus_pane_g1

0x5e2e,	// (0x00024691) cam4_autofocus_pane_g2

0x5e36,	// (0x00024699) cam4_autofocus_pane_g3

0x0002,

0xf860,	// (0x0002e0c3) cam4_autofocus_pane_g

0x5e3e,	// (0x000246a1) cam4_autofocus_pane_g3_copy1

0x5c44,	// (0x000244a7) video_down_pane_cp_t1

0x5c52,	// (0x000244b5) video_down_pane_cp_t2

0x0001,

0xf7d8,	// (0x0002e03b) video_down_pane_cp_t

0x0dd3,	// (0x0001f636) popup_vitu2_window_ParamLimits

0x0dd3,	// (0x0001f636) popup_vitu2_window

0x1d9c,	// (0x000205ff) aid_size_cell2_itu2_ParamLimits

0x1d9c,	// (0x000205ff) aid_size_cell2_itu2

0x1dbe,	// (0x00020621) aid_size_cell_itu2_ParamLimits

0x1dbe,	// (0x00020621) aid_size_cell_itu2

0x1e02,	// (0x00020665) bg_popup_window_pane_cp09_ParamLimits

0x1e02,	// (0x00020665) bg_popup_window_pane_cp09

0x1e10,	// (0x00020673) field_vitu2_entry_pane_ParamLimits

0x1e10,	// (0x00020673) field_vitu2_entry_pane

0x1e30,	// (0x00020693) grid_vitu2_function_pane_ParamLimits

0x1e30,	// (0x00020693) grid_vitu2_function_pane

0x1e74,	// (0x000206d7) grid_vitu2_itu_pane_ParamLimits

0x1e74,	// (0x000206d7) grid_vitu2_itu_pane

0x1eea,	// (0x0002074d) cell_vitu2_itu_pane_ParamLimits

0x1eea,	// (0x0002074d) cell_vitu2_itu_pane

0x1f05,	// (0x00020768) cell_vitu2_function_pane_ParamLimits

0x1f05,	// (0x00020768) cell_vitu2_function_pane

0xce81,	// (0x0002b6e4) bg_popup_call_pane_cp08_ParamLimits

0xce81,	// (0x0002b6e4) bg_popup_call_pane_cp08

0xce98,	// (0x0002b6fb) field_vitu2_entry_pane_g1

0xcea4,	// (0x0002b707) field_vitu2_entry_pane_g2

0x0002,

0xf867,	// (0x0002e0ca) field_vitu2_entry_pane_g

0xceb0,	// (0x0002b713) field_vitu2_entry_pane_t1_ParamLimits

0xceb0,	// (0x0002b713) field_vitu2_entry_pane_t1

0xcedf,	// (0x0002b742) field_vitu2_entry_pane_t2_ParamLimits

0xcedf,	// (0x0002b742) field_vitu2_entry_pane_t2

0x0001,

0xf86e,	// (0x0002e0d1) field_vitu2_entry_pane_t_ParamLimits

0xf86e,	// (0x0002e0d1) field_vitu2_entry_pane_t

0x145e,	// (0x0001fcc1) bg_button_pane_cp010_ParamLimits

0x145e,	// (0x0001fcc1) bg_button_pane_cp010

0x1f49,	// (0x000207ac) cell_vitu2_itu_pane_g1

0x1f6f,	// (0x000207d2) cell_vitu2_itu_pane_t1_ParamLimits

0x1f6f,	// (0x000207d2) cell_vitu2_itu_pane_t1

0x1fbb,	// (0x0002081e) cell_vitu2_itu_pane_t2_ParamLimits

0x1fbb,	// (0x0002081e) cell_vitu2_itu_pane_t2

0x0002,

0xf878,	// (0x0002e0db) cell_vitu2_itu_pane_t_ParamLimits

0xf878,	// (0x0002e0db) cell_vitu2_itu_pane_t

0x12ab,	// (0x0001fb0e) bg_button_pane_cp011

0x2083,	// (0x000208e6) cell_vitu2_function_pane_g1

0x0de1,	// (0x0001f644) main_myfav_hc_pane

0x1a73,	// (0x000202d6) popup_image3_note_pane_ParamLimits

0x1a73,	// (0x000202d6) popup_image3_note_pane

0x1a81,	// (0x000202e4) popup_image3_tool_bar_pane_ParamLimits

0x1a81,	// (0x000202e4) popup_image3_tool_bar_pane

0x2031,	// (0x00020894) cell_vitu2_itu_pane_t3_ParamLimits

0x2031,	// (0x00020894) cell_vitu2_itu_pane_t3

0x9bdf,	// (0x00028442) bg_popup_trans_pane

0xcf04,	// (0x0002b767) grid_image3_tool_bar_pane

0xcf0e,	// (0x0002b771) bg_popup_trans_pane_g1

0xa796,	// (0x00028ff9) bg_popup_trans_pane_g2

0xcf16,	// (0x0002b779) bg_popup_trans_pane_g3

0xcf1e,	// (0x0002b781) bg_popup_trans_pane_g4

0xcf26,	// (0x0002b789) bg_popup_trans_pane_g5

0xcf2e,	// (0x0002b791) bg_popup_trans_pane_g6

0xcf36,	// (0x0002b799) bg_popup_trans_pane_g7

0xcf3e,	// (0x0002b7a1) bg_popup_trans_pane_g8

0xa776,	// (0x00028fd9) bg_popup_trans_pane_g9

0x0008,

0xf87f,	// (0x0002e0e2) bg_popup_trans_pane_g

0xcf46,	// (0x0002b7a9) cell_image3_tool_bar_pane_ParamLimits

0xcf46,	// (0x0002b7a9) cell_image3_tool_bar_pane

0xa555,	// (0x00028db8) cell_image3_tool_bar_pane_g1

0x9bdf,	// (0x00028442) bg_popup_trans_pane_cp1

0xcf5c,	// (0x0002b7bf) popup_image3_note_pane_t1

0xcf6a,	// (0x0002b7cd) popup_image3_note_pane_t2

0xcf78,	// (0x0002b7db) popup_image3_note_pane_t3

0x0002,

0xf892,	// (0x0002e0f5) popup_image3_note_pane_t

0xcf88,	// (0x0002b7eb) popup_image3_note_pane_t3_copy1

0x5e46,	// (0x000246a9) bg_myfav_hc_instruction_pane_ParamLimits

0x5e46,	// (0x000246a9) bg_myfav_hc_instruction_pane

0x5e5e,	// (0x000246c1) cell_myfav_contact_pane_ParamLimits

0x5e5e,	// (0x000246c1) cell_myfav_contact_pane

0x5e78,	// (0x000246db) cell_myfav_contact_pane_cp1_ParamLimits

0x5e78,	// (0x000246db) cell_myfav_contact_pane_cp1

0x5e90,	// (0x000246f3) cell_myfav_contact_pane_cp2_ParamLimits

0x5e90,	// (0x000246f3) cell_myfav_contact_pane_cp2

0x5ea8,	// (0x0002470b) cell_myfav_contact_pane_cp3_ParamLimits

0x5ea8,	// (0x0002470b) cell_myfav_contact_pane_cp3

0x5ebf,	// (0x00024722) cell_myfav_contact_pane_cp4_ParamLimits

0x5ebf,	// (0x00024722) cell_myfav_contact_pane_cp4

0x5ed5,	// (0x00024738) cell_myfav_contact_pane_cp5_ParamLimits

0x5ed5,	// (0x00024738) cell_myfav_contact_pane_cp5

0x5ee9,	// (0x0002474c) cell_myfav_contact_pane_cp6_ParamLimits

0x5ee9,	// (0x0002474c) cell_myfav_contact_pane_cp6

0x5efd,	// (0x00024760) cell_myfav_contact_pane_cp7_ParamLimits

0x5efd,	// (0x00024760) cell_myfav_contact_pane_cp7

0xcf96,	// (0x0002b7f9) listscroll_gen_pane_cp05

0x5f15,	// (0x00024778) main_myfav_hc_pane_g1_ParamLimits

0x5f15,	// (0x00024778) main_myfav_hc_pane_g1

0x5f2f,	// (0x00024792) main_myfav_hc_pane_g2_ParamLimits

0x5f2f,	// (0x00024792) main_myfav_hc_pane_g2

0x0002,

0xf899,	// (0x0002e0fc) main_myfav_hc_pane_g_ParamLimits

0xf899,	// (0x0002e0fc) main_myfav_hc_pane_g

0x5f61,	// (0x000247c4) main_myfav_hc_pane_t1_ParamLimits

0x5f61,	// (0x000247c4) main_myfav_hc_pane_t1

0xcf9f,	// (0x0002b802) main_myfav_hc_pane_t2_ParamLimits

0xcf9f,	// (0x0002b802) main_myfav_hc_pane_t2

0xcfb1,	// (0x0002b814) main_myfav_hc_pane_t3_ParamLimits

0xcfb1,	// (0x0002b814) main_myfav_hc_pane_t3

0x5f78,	// (0x000247db) main_myfav_hc_pane_t4_ParamLimits

0x5f78,	// (0x000247db) main_myfav_hc_pane_t4

0x0004,

0xf8a0,	// (0x0002e103) main_myfav_hc_pane_t_ParamLimits

0xf8a0,	// (0x0002e103) main_myfav_hc_pane_t

0xa555,	// (0x00028db8) bg_myfav_hc_instruction_pane_g1

0xcfc3,	// (0x0002b826) cell_myfav_contact_pane_g1_ParamLimits

0xcfc3,	// (0x0002b826) cell_myfav_contact_pane_g1

0xcfc3,	// (0x0002b826) cell_myfav_contact_pane_g2_ParamLimits

0xcfc3,	// (0x0002b826) cell_myfav_contact_pane_g2

0xcfcf,	// (0x0002b832) cell_myfav_contact_pane_g3_ParamLimits

0xcfcf,	// (0x0002b832) cell_myfav_contact_pane_g3

0xa323,	// (0x00028b86) cell_myfav_contact_pane_g4_ParamLimits

0xa323,	// (0x00028b86) cell_myfav_contact_pane_g4

0xcfdc,	// (0x0002b83f) cell_myfav_contact_pane_g5_ParamLimits

0xcfdc,	// (0x0002b83f) cell_myfav_contact_pane_g5

0x0004,

0xf8ab,	// (0x0002e10e) cell_myfav_contact_pane_g_ParamLimits

0xf8ab,	// (0x0002e10e) cell_myfav_contact_pane_g

0x5f49,	// (0x000247ac) main_myfav_hc_pane_g3_ParamLimits

0x5f49,	// (0x000247ac) main_myfav_hc_pane_g3

0x0cdd,	// (0x0001f540) popup_adpt_find_window

0x5fa2,	// (0x00024805) afind_page_pane_ParamLimits

0x5fa2,	// (0x00024805) afind_page_pane

0x5faf,	// (0x00024812) aid_size_cell_afind_ParamLimits

0x5faf,	// (0x00024812) aid_size_cell_afind

0x5fc9,	// (0x0002482c) bg_popup_sub_pane_cp09_ParamLimits

0x5fc9,	// (0x0002482c) bg_popup_sub_pane_cp09

0x5fda,	// (0x0002483d) find_pane_cp01_ParamLimits

0x5fda,	// (0x0002483d) find_pane_cp01

0xcfe8,	// (0x0002b84b) grid_afind_control_pane_ParamLimits

0xcfe8,	// (0x0002b84b) grid_afind_control_pane

0x5fed,	// (0x00024850) grid_afind_pane_ParamLimits

0x5fed,	// (0x00024850) grid_afind_pane

0x6009,	// (0x0002486c) cell_afind_pane_ParamLimits

0x6009,	// (0x0002486c) cell_afind_pane

0xa555,	// (0x00028db8) afind_page_pane_g1

0x6051,	// (0x000248b4) afind_page_pane_g2

0x6059,	// (0x000248bc) afind_page_pane_g3

0x0002,

0xf8b6,	// (0x0002e119) afind_page_pane_g

0x6061,	// (0x000248c4) afind_page_pane_t1

0xd00e,	// (0x0002b871) cell_afind_grid_control_pane_ParamLimits

0xd00e,	// (0x0002b871) cell_afind_grid_control_pane

0xce43,	// (0x0002b6a6) bg_button_pane_cp69_ParamLimits

0xce43,	// (0x0002b6a6) bg_button_pane_cp69

0x606f,	// (0x000248d2) cell_afind_pane_g1_ParamLimits

0x606f,	// (0x000248d2) cell_afind_pane_g1

0x607c,	// (0x000248df) cell_afind_pane_t1_ParamLimits

0x607c,	// (0x000248df) cell_afind_pane_t1

0xa55f,	// (0x00028dc2) bg_button_pane_cp72

0xd01d,	// (0x0002b880) cell_afind_grid_control_pane_g1

0x48cf,	// (0x00023132) aid_image_placing_area_ParamLimits

0x48cf,	// (0x00023132) aid_image_placing_area

0xa315,	// (0x00028b78) field_vitu_entry_pane_g1_ParamLimits

0xa315,	// (0x00028b78) field_vitu_entry_pane_g1

0xa315,	// (0x00028b78) field_vitu_entry_pane_g2_ParamLimits

0xa315,	// (0x00028b78) field_vitu_entry_pane_g2

0x0001,

0xf1c1,	// (0x0002da24) field_vitu_entry_pane_g_ParamLimits

0xf1c1,	// (0x0002da24) field_vitu_entry_pane_g

0xcbd3,	// (0x0002b436) cell_vitu_itu_pane_g1_ParamLimits

0xc98d,	// (0x0002b1f0) cell_vitu_itu_pane_t3_ParamLimits

0xc98d,	// (0x0002b1f0) cell_vitu_itu_pane_t3

0xcdec,	// (0x0002b64f) mp4_progress_pane_t1_ParamLimits

0xce05,	// (0x0002b668) mp4_progress_pane_t2_ParamLimits

0xf7fc,	// (0x0002e05f) mp4_progress_pane_t_ParamLimits

0xce1e,	// (0x0002b681) mup_progress_pane_cp04_ParamLimits

0x5f8c,	// (0x000247ef) main_myfav_hc_pane_t5_ParamLimits

0x5f8c,	// (0x000247ef) main_myfav_hc_pane_t5

0x0b9b,	// (0x0001f3fe) aid_zoom_text_primary

0x0cdd,	// (0x0001f540) popup_adpt_find_window_ParamLimits

0x12ab,	// (0x0001fb0e) main_cam_set_pane

0x1bd2,	// (0x00020435) cam4_zoom_pane_ParamLimits

0x1bd2,	// (0x00020435) cam4_zoom_pane

0x608e,	// (0x000248f1) main_cam_set_pane_g1_ParamLimits

0x608e,	// (0x000248f1) main_cam_set_pane_g1

0x609c,	// (0x000248ff) main_cam_set_pane_g2_ParamLimits

0x609c,	// (0x000248ff) main_cam_set_pane_g2

0x0001,

0xf8bd,	// (0x0002e120) main_cam_set_pane_g_ParamLimits

0xf8bd,	// (0x0002e120) main_cam_set_pane_g

0x60a8,	// (0x0002490b) main_cam_set_pane_t1_ParamLimits

0x60a8,	// (0x0002490b) main_cam_set_pane_t1

0x60c4,	// (0x00024927) main_cset_listscroll_pane_ParamLimits

0x60c4,	// (0x00024927) main_cset_listscroll_pane

0x60f8,	// (0x0002495b) main_cset_slider_pane_ParamLimits

0x60f8,	// (0x0002495b) main_cset_slider_pane

0xd02e,	// (0x0002b891) main_cset_list_pane_ParamLimits

0xd02e,	// (0x0002b891) main_cset_list_pane

0xd03e,	// (0x0002b8a1) scroll_pane_cp028

0x6119,	// (0x0002497c) aid_area_touch_slider

0x6135,	// (0x00024998) cset_slider_pane

0x6158,	// (0x000249bb) main_cset_slider_pane_g1

0x616d,	// (0x000249d0) main_cset_slider_pane_g2

0x0011,

0xf8c2,	// (0x0002e125) main_cset_slider_pane_g

0xd077,	// (0x0002b8da) main_cset_slider_pane_t1

0x6229,	// (0x00024a8c) main_cset_slider_pane_t2

0x6243,	// (0x00024aa6) main_cset_slider_pane_t3

0x625d,	// (0x00024ac0) main_cset_slider_pane_t4

0x6277,	// (0x00024ada) main_cset_slider_pane_t5

0x6291,	// (0x00024af4) main_cset_slider_pane_t6

0x62a6,	// (0x00024b09) main_cset_slider_pane_t7

0x000e,

0xf8e7,	// (0x0002e14a) main_cset_slider_pane_t

0x63aa,	// (0x00024c0d) cset_list_set_pane_ParamLimits

0x63aa,	// (0x00024c0d) cset_list_set_pane

0xd111,	// (0x0002b974) aid_position_infowindow_above

0xd119,	// (0x0002b97c) aid_position_infowindow_below

0x63bb,	// (0x00024c1e) cset_list_set_pane_g1_ParamLimits

0x63bb,	// (0x00024c1e) cset_list_set_pane_g1

0x63c7,	// (0x00024c2a) cset_list_set_pane_g3_ParamLimits

0x63c7,	// (0x00024c2a) cset_list_set_pane_g3

0x0001,

0xf906,	// (0x0002e169) cset_list_set_pane_g_ParamLimits

0xf906,	// (0x0002e169) cset_list_set_pane_g

0x63d6,	// (0x00024c39) cset_list_set_pane_t1_ParamLimits

0x63d6,	// (0x00024c39) cset_list_set_pane_t1

0xa2ae,	// (0x00028b11) list_highlight_pane_cp021_ParamLimits

0xa2ae,	// (0x00028b11) list_highlight_pane_cp021

0xafc8,	// (0x0002982b) cset_slider_pane_g1

0xafda,	// (0x0002983d) cset_slider_pane_g2

0xafd1,	// (0x00029834) cset_slider_pane_g3

0x0002,

0xf90b,	// (0x0002e16e) cset_slider_pane_g

0xac66,	// (0x000294c9) aid_area_touch_cam4_zoom

0x2097,	// (0x000208fa) cam4_zoom_cont_pane

0x209f,	// (0x00020902) cam4_zoom_pane_g1

0x20a7,	// (0x0002090a) cam4_zoom_pane_g2

0x20af,	// (0x00020912) cam4_zoom_pane_g3

0x0002,

0xf912,	// (0x0002e175) cam4_zoom_pane_g

0x20b7,	// (0x0002091a) cam4_zoom_cont_pane_g1

0x20c0,	// (0x00020923) cam4_zoom_cont_pane_g2

0x20c9,	// (0x0002092c) cam4_zoom_cont_pane_g3

0x0002,

0xf919,	// (0x0002e17c) cam4_zoom_cont_pane_g

0x1aac,	// (0x0002030f) call4_image_pane_ParamLimits

0x1aac,	// (0x0002030f) call4_image_pane

0x5d52,	// (0x000245b5) call4_windows_conf_pane_ParamLimits

0x5d99,	// (0x000245fc) popup_call4_audio_in_window_ParamLimits

0x5d99,	// (0x000245fc) popup_call4_audio_in_window

0x9bdf,	// (0x00028442) bg_popup_call2_act_pane_cp02

0xce4f,	// (0x0002b6b2) call4_list_conf_pane

0xa555,	// (0x00028db8) call4_image_pane_g1

0xa555,	// (0x00028db8) call4_image_pane_g2

0x0001,

0xf39d,	// (0x0002dc00) call4_image_pane_g

0xd121,	// (0x0002b984) list_single_graphic_popup_conf4_pane_ParamLimits

0xd121,	// (0x0002b984) list_single_graphic_popup_conf4_pane

0x9bdf,	// (0x00028442) list_highlight_pane_cp022

0xd136,	// (0x0002b999) list_single_graphic_popup_conf4_pane_g1

0xacbf,	// (0x00029522) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf920,	// (0x0002e183) list_single_graphic_popup_conf4_pane_g

0xd13e,	// (0x0002b9a1) list_single_graphic_popup_conf4_pane_t1

0x2f04,	// (0x00021767) popup_vtel_slider_window_ParamLimits

0x2f04,	// (0x00021767) popup_vtel_slider_window

0xce31,	// (0x0002b694) dialer2_ne_pane_t2_ParamLimits

0xce31,	// (0x0002b694) dialer2_ne_pane_t2

0x0001,

0xf801,	// (0x0002e064) dialer2_ne_pane_t_ParamLimits

0xf801,	// (0x0002e064) dialer2_ne_pane_t

0xa2ae,	// (0x00028b11) bg_popup_sub_pane_cp010_ParamLimits

0xa2ae,	// (0x00028b11) bg_popup_sub_pane_cp010

0x63eb,	// (0x00024c4e) popup_vtel_slider_window_g1_ParamLimits

0x63eb,	// (0x00024c4e) popup_vtel_slider_window_g1

0x63f7,	// (0x00024c5a) popup_vtel_slider_window_g2_ParamLimits

0x63f7,	// (0x00024c5a) popup_vtel_slider_window_g2

0x0003,

0xf925,	// (0x0002e188) popup_vtel_slider_window_g_ParamLimits

0xf925,	// (0x0002e188) popup_vtel_slider_window_g

0x643f,	// (0x00024ca2) vtel_slider_pane_ParamLimits

0x643f,	// (0x00024ca2) vtel_slider_pane

0x644e,	// (0x00024cb1) vtel_slider_pane_g1_ParamLimits

0x644e,	// (0x00024cb1) vtel_slider_pane_g1

0x645b,	// (0x00024cbe) vtel_slider_pane_g2_ParamLimits

0x645b,	// (0x00024cbe) vtel_slider_pane_g2

0x6468,	// (0x00024ccb) vtel_slider_pane_g3_ParamLimits

0x6468,	// (0x00024ccb) vtel_slider_pane_g3

0x644e,	// (0x00024cb1) vtel_slider_pane_g4_ParamLimits

0x644e,	// (0x00024cb1) vtel_slider_pane_g4

0x6475,	// (0x00024cd8) vtel_slider_pane_g5_ParamLimits

0x6475,	// (0x00024cd8) vtel_slider_pane_g5

0x0004,

0xf92e,	// (0x0002e191) vtel_slider_pane_g_ParamLimits

0xf92e,	// (0x0002e191) vtel_slider_pane_g

0x12ab,	// (0x0001fb0e) main_gallery2_pane

0x1de4,	// (0x00020647) aid_size_row_itut2_dropdow_list_ParamLimits

0x1de4,	// (0x00020647) aid_size_row_itut2_dropdow_list

0x1e52,	// (0x000206b5) grid_vitu2_function_top_pane_ParamLimits

0x1e52,	// (0x000206b5) grid_vitu2_function_top_pane

0x1ea8,	// (0x0002070b) popup_vitu2_dropdown_list_window_ParamLimits

0x1ea8,	// (0x0002070b) popup_vitu2_dropdown_list_window

0x1ec6,	// (0x00020729) popup_vitu2_match_list_window

0x20d2,	// (0x00020935) cell_vitu2_function_top_pane_ParamLimits

0x20d2,	// (0x00020935) cell_vitu2_function_top_pane

0x20ec,	// (0x0002094f) cell_vitu2_function_top_pane_cp01_ParamLimits

0x20ec,	// (0x0002094f) cell_vitu2_function_top_pane_cp01

0x2108,	// (0x0002096b) cell_vitu2_function_top_wide_pane_ParamLimits

0x2108,	// (0x0002096b) cell_vitu2_function_top_wide_pane

0x12ab,	// (0x0001fb0e) bg_button_pane_cp012

0x2126,	// (0x00020989) cell_vitu2_function_top_pane_g1

0x213a,	// (0x0002099d) bg_button_pane_cp013_ParamLimits

0x213a,	// (0x0002099d) bg_button_pane_cp013

0x6482,	// (0x00024ce5) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6482,	// (0x00024ce5) cell_vitu2_function_top_wide_pane_g1

0x0dd3,	// (0x0001f636) bg_popup_sub_pane_cp20

0x2156,	// (0x000209b9) list_vitu2_match_list_pane

0xcf0e,	// (0x0002b771) bg_popup_sub_pane_cp20_g1

0xcf16,	// (0x0002b779) bg_popup_sub_pane_cp20_g2

0xa796,	// (0x00028ff9) bg_popup_sub_pane_cp20_g3

0xcf1e,	// (0x0002b781) bg_popup_sub_pane_cp20_g4

0xa776,	// (0x00028fd9) bg_popup_sub_pane_cp20_g5

0xd154,	// (0x0002b9b7) bg_popup_sub_pane_cp20_g6

0xcf2e,	// (0x0002b791) bg_popup_sub_pane_cp20_g7

0xcf36,	// (0x0002b799) bg_popup_sub_pane_cp20_g8

0xcf3e,	// (0x0002b7a1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf939,	// (0x0002e19c) bg_popup_sub_pane_cp20_g

0x216e,	// (0x000209d1) list_vitu2_match_list_item_pane_ParamLimits

0x216e,	// (0x000209d1) list_vitu2_match_list_item_pane

0x2180,	// (0x000209e3) list_vitu2_match_list_item_pane_t1

0x0de1,	// (0x0001f644) bg_popup_sub_pane_cp21

0xa533,	// (0x00028d96) grid_vitu2_dropdown_list_pane

0x218e,	// (0x000209f1) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x218e,	// (0x000209f1) cell_vitu2_dropdown_list_char_pane

0x21b2,	// (0x00020a15) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x21b2,	// (0x00020a15) cell_vitu2_dropdown_list_ctrl_pane

0xd15c,	// (0x0002b9bf) cell_vitu2_dropdown_list_char_pane_g1

0xd165,	// (0x0002b9c8) cell_vitu2_dropdown_list_char_pane_g2

0xd16e,	// (0x0002b9d1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf94c,	// (0x0002e1af) cell_vitu2_dropdown_list_char_pane_g

0x21dc,	// (0x00020a3f) cell_vitu2_dropdown_list_char_pane_t1

0x649a,	// (0x00024cfd) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x649a,	// (0x00024cfd) cell_vitu2_dropdown_list_ctrl_pane_g1

0x64aa,	// (0x00024d0d) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x64aa,	// (0x00024d0d) cell_vitu2_dropdown_list_ctrl_pane_g2

0x64bb,	// (0x00024d1e) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x64bb,	// (0x00024d1e) cell_vitu2_dropdown_list_ctrl_pane_g3

0x21ea,	// (0x00020a4d) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x21ea,	// (0x00020a4d) cell_vitu2_dropdown_list_ctrl_pane_g4

0xdec9,	// (0x0002c72c) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xdec9,	// (0x0002c72c) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf953,	// (0x0002e1b6) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf953,	// (0x0002e1b6) cell_vitu2_dropdown_list_ctrl_pane_g

0x64cb,	// (0x00024d2e) aid_size_cell_gallery2_ParamLimits

0x64cb,	// (0x00024d2e) aid_size_cell_gallery2

0x64e5,	// (0x00024d48) grid_gallery2_pane_ParamLimits

0x64e5,	// (0x00024d48) grid_gallery2_pane

0x64fc,	// (0x00024d5f) scroll_pane_cp029_ParamLimits

0x64fc,	// (0x00024d5f) scroll_pane_cp029

0x650c,	// (0x00024d6f) cell_gallery2_pane_ParamLimits

0x650c,	// (0x00024d6f) cell_gallery2_pane

0xd177,	// (0x0002b9da) cell_gallery2_pane_g2

0x6563,	// (0x00024dc6) cell_gallery2_pane_g3

0xd17f,	// (0x0002b9e2) cell_gallery2_pane_g4

0xd187,	// (0x0002b9ea) cell_gallery2_pane_g5

0xa533,	// (0x00028d96) grid_highlight_pane_cp10

0x1ec6,	// (0x00020729) popup_vitu2_match_list_window_ParamLimits

0x1eda,	// (0x0002073d) popup_vitu2_query_window_ParamLimits

0x1eda,	// (0x0002073d) popup_vitu2_query_window

0x0de1,	// (0x0001f644) bg_vitu2_candi_button_pane

0xd15c,	// (0x0002b9bf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd165,	// (0x0002b9c8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd16e,	// (0x0002b9d1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x656b,	// (0x00024dce) bg_button_pane_cp015

0x6580,	// (0x00024de3) bg_button_pane_cp016

0x658c,	// (0x00024def) bg_button_pane_cp017

0xb77f,	// (0x00029fe2) bg_popup_sub_pane_cp22

0xd18f,	// (0x0002b9f2) popup_vitu2_query_window_g1

0x65cd,	// (0x00024e30) popup_vitu2_query_window_g2

0x0002,

0xf95e,	// (0x0002e1c1) popup_vitu2_query_window_g

0x65f1,	// (0x00024e54) popup_vitu2_query_window_t1_ParamLimits

0x65f1,	// (0x00024e54) popup_vitu2_query_window_t1

0x6624,	// (0x00024e87) popup_vitu2_query_window_t2_ParamLimits

0x6624,	// (0x00024e87) popup_vitu2_query_window_t2

0x6636,	// (0x00024e99) popup_vitu2_query_window_t3_ParamLimits

0x6636,	// (0x00024e99) popup_vitu2_query_window_t3

0x665e,	// (0x00024ec1) popup_vitu2_query_window_t4_ParamLimits

0x665e,	// (0x00024ec1) popup_vitu2_query_window_t4

0x6672,	// (0x00024ed5) popup_vitu2_query_window_t5_ParamLimits

0x6672,	// (0x00024ed5) popup_vitu2_query_window_t5

0x0006,

0xf965,	// (0x0002e1c8) popup_vitu2_query_window_t_ParamLimits

0xf965,	// (0x0002e1c8) popup_vitu2_query_window_t

0xd026,	// (0x0002b889) main_cset_text_pane

0x6119,	// (0x0002497c) aid_area_touch_slider_ParamLimits

0x6135,	// (0x00024998) cset_slider_pane_ParamLimits

0x6158,	// (0x000249bb) main_cset_slider_pane_g1_ParamLimits

0x616d,	// (0x000249d0) main_cset_slider_pane_g2_ParamLimits

0xd047,	// (0x0002b8aa) main_cset_slider_pane_g3_ParamLimits

0xd047,	// (0x0002b8aa) main_cset_slider_pane_g3

0x6182,	// (0x000249e5) main_cset_slider_pane_g4_ParamLimits

0x6182,	// (0x000249e5) main_cset_slider_pane_g4

0x6191,	// (0x000249f4) main_cset_slider_pane_g5_ParamLimits

0x6191,	// (0x000249f4) main_cset_slider_pane_g5

0x619d,	// (0x00024a00) main_cset_slider_pane_g6_ParamLimits

0x619d,	// (0x00024a00) main_cset_slider_pane_g6

0xf8c2,	// (0x0002e125) main_cset_slider_pane_g_ParamLimits

0xd077,	// (0x0002b8da) main_cset_slider_pane_t1_ParamLimits

0x6229,	// (0x00024a8c) main_cset_slider_pane_t2_ParamLimits

0x6243,	// (0x00024aa6) main_cset_slider_pane_t3_ParamLimits

0x625d,	// (0x00024ac0) main_cset_slider_pane_t4_ParamLimits

0x6277,	// (0x00024ada) main_cset_slider_pane_t5_ParamLimits

0x6291,	// (0x00024af4) main_cset_slider_pane_t6_ParamLimits

0x62a6,	// (0x00024b09) main_cset_slider_pane_t7_ParamLimits

0x62d0,	// (0x00024b33) main_cset_slider_pane_t8_ParamLimits

0x62d0,	// (0x00024b33) main_cset_slider_pane_t8

0x62f8,	// (0x00024b5b) main_cset_slider_pane_t9_ParamLimits

0x62f8,	// (0x00024b5b) main_cset_slider_pane_t9

0x6320,	// (0x00024b83) main_cset_slider_pane_t10_ParamLimits

0x6320,	// (0x00024b83) main_cset_slider_pane_t10

0x6348,	// (0x00024bab) main_cset_slider_pane_t11_ParamLimits

0x6348,	// (0x00024bab) main_cset_slider_pane_t11

0x6370,	// (0x00024bd3) main_cset_slider_pane_t12_ParamLimits

0x6370,	// (0x00024bd3) main_cset_slider_pane_t12

0x638d,	// (0x00024bf0) main_cset_slider_pane_t13_ParamLimits

0x638d,	// (0x00024bf0) main_cset_slider_pane_t13

0xf8e7,	// (0x0002e14a) main_cset_slider_pane_t_ParamLimits

0x9bdf,	// (0x00028442) bg_popup_sub_pane_cp011

0xd1a4,	// (0x0002ba07) main_cset_text_pane_g1

0xd1ac,	// (0x0002ba0f) main_cset_text_pane_t1

0xd1ba,	// (0x0002ba1d) main_cset_text_pane_t2

0xd1c8,	// (0x0002ba2b) main_cset_text_pane_t3

0xd1d6,	// (0x0002ba39) main_cset_text_pane_t4

0xd1e4,	// (0x0002ba47) main_cset_text_pane_t5

0xd1f2,	// (0x0002ba55) main_cset_text_pane_t6

0xd200,	// (0x0002ba63) main_cset_text_pane_t7

0x0006,

0xf974,	// (0x0002e1d7) main_cset_text_pane_t

0x0de1,	// (0x0001f644) main_cam4_burst_pane

0x0de1,	// (0x0001f644) main_cam5_pane

0xcffc,	// (0x0002b85f) bg_button_pane_cp019

0xd005,	// (0x0002b868) bg_button_pane_cp020

0xd053,	// (0x0002b8b6) main_cset_slider_pane_g7_ParamLimits

0xd053,	// (0x0002b8b6) main_cset_slider_pane_g7

0xd05f,	// (0x0002b8c2) main_cset_slider_pane_g8_ParamLimits

0xd05f,	// (0x0002b8c2) main_cset_slider_pane_g8

0x61b1,	// (0x00024a14) main_cset_slider_pane_g9_ParamLimits

0x61b1,	// (0x00024a14) main_cset_slider_pane_g9

0x61bd,	// (0x00024a20) main_cset_slider_pane_g10_ParamLimits

0x61bd,	// (0x00024a20) main_cset_slider_pane_g10

0x61c9,	// (0x00024a2c) main_cset_slider_pane_g11_ParamLimits

0x61c9,	// (0x00024a2c) main_cset_slider_pane_g11

0x61d5,	// (0x00024a38) main_cset_slider_pane_g12_ParamLimits

0x61d5,	// (0x00024a38) main_cset_slider_pane_g12

0x61e1,	// (0x00024a44) main_cset_slider_pane_g13_ParamLimits

0x61e1,	// (0x00024a44) main_cset_slider_pane_g13

0x61ed,	// (0x00024a50) main_cset_slider_pane_g14_ParamLimits

0x61ed,	// (0x00024a50) main_cset_slider_pane_g14

0x61f9,	// (0x00024a5c) main_cset_slider_pane_g15_ParamLimits

0x61f9,	// (0x00024a5c) main_cset_slider_pane_g15

0xd09f,	// (0x0002b902) main_cset_slider_pane_t14_ParamLimits

0xd09f,	// (0x0002b902) main_cset_slider_pane_t14

0xd0d8,	// (0x0002b93b) main_cset_slider_pane_t15_ParamLimits

0xd0d8,	// (0x0002b93b) main_cset_slider_pane_t15

0x66dc,	// (0x00024f3f) aid_cam4_burst_size_cell_ParamLimits

0x66dc,	// (0x00024f3f) aid_cam4_burst_size_cell

0x66f8,	// (0x00024f5b) grid_cam4_burst_pane_ParamLimits

0x66f8,	// (0x00024f5b) grid_cam4_burst_pane

0x672a,	// (0x00024f8d) linegrid_cam4_burst_pane_ParamLimits

0x672a,	// (0x00024f8d) linegrid_cam4_burst_pane

0x6748,	// (0x00024fab) scroll_pane_cp30_ParamLimits

0x6748,	// (0x00024fab) scroll_pane_cp30

0x6754,	// (0x00024fb7) cell_cam4_burst_pane_ParamLimits

0x6754,	// (0x00024fb7) cell_cam4_burst_pane

0xd20e,	// (0x0002ba71) linegrid_cam4_burst_pane_g1_ParamLimits

0xd20e,	// (0x0002ba71) linegrid_cam4_burst_pane_g1

0x6794,	// (0x00024ff7) linegrid_cam4_burst_pane_g2_ParamLimits

0x6794,	// (0x00024ff7) linegrid_cam4_burst_pane_g2

0xd21b,	// (0x0002ba7e) linegrid_cam4_burst_pane_g3_ParamLimits

0xd21b,	// (0x0002ba7e) linegrid_cam4_burst_pane_g3

0x0002,

0xf983,	// (0x0002e1e6) linegrid_cam4_burst_pane_g_ParamLimits

0xf983,	// (0x0002e1e6) linegrid_cam4_burst_pane_g

0x67a5,	// (0x00025008) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x67a5,	// (0x00025008) linegrid_cam4_burst_pane_g3_copy1

0xd228,	// (0x0002ba8b) linegrid_cam4_burst_pane_g4_ParamLimits

0xd228,	// (0x0002ba8b) linegrid_cam4_burst_pane_g4

0x67bf,	// (0x00025022) linegrid_cam4_burst_pane_g5_ParamLimits

0x67bf,	// (0x00025022) linegrid_cam4_burst_pane_g5

0x67d0,	// (0x00025033) linegrid_cam4_burst_pane_g6_ParamLimits

0x67d0,	// (0x00025033) linegrid_cam4_burst_pane_g6

0xd235,	// (0x0002ba98) linegrid_cam4_burst_pane_g7_ParamLimits

0xd235,	// (0x0002ba98) linegrid_cam4_burst_pane_g7

0x67e7,	// (0x0002504a) cell_cam4_burst_pane_g1

0xd24e,	// (0x0002bab1) main_cam5_pane_t1_ParamLimits

0xd24e,	// (0x0002bab1) main_cam5_pane_t1

0xd260,	// (0x0002bac3) main_cam5_pane_t2_ParamLimits

0xd260,	// (0x0002bac3) main_cam5_pane_t2

0xd272,	// (0x0002bad5) main_cam5_pane_t3_ParamLimits

0xd272,	// (0x0002bad5) main_cam5_pane_t3

0xd284,	// (0x0002bae7) main_cam5_pane_t4_ParamLimits

0xd284,	// (0x0002bae7) main_cam5_pane_t4

0xd29c,	// (0x0002baff) main_cam5_pane_t5_ParamLimits

0xd29c,	// (0x0002baff) main_cam5_pane_t5

0xd2b0,	// (0x0002bb13) main_cam5_pane_t6_ParamLimits

0xd2b0,	// (0x0002bb13) main_cam5_pane_t6

0xd2c4,	// (0x0002bb27) main_cam5_pane_t7_ParamLimits

0xd2c4,	// (0x0002bb27) main_cam5_pane_t7

0xd2d6,	// (0x0002bb39) main_cam5_pane_t8_ParamLimits

0xd2d6,	// (0x0002bb39) main_cam5_pane_t8

0xd2f4,	// (0x0002bb57) main_cam5_pane_t9_ParamLimits

0xd2f4,	// (0x0002bb57) main_cam5_pane_t9

0xd306,	// (0x0002bb69) main_cam5_pane_t10_ParamLimits

0xd306,	// (0x0002bb69) main_cam5_pane_t10

0xd318,	// (0x0002bb7b) main_cam5_pane_t11_ParamLimits

0xd318,	// (0x0002bb7b) main_cam5_pane_t11

0xd32c,	// (0x0002bb8f) main_cam5_pane_t12_ParamLimits

0xd32c,	// (0x0002bb8f) main_cam5_pane_t12

0xd343,	// (0x0002bba6) main_cam5_pane_t13_ParamLimits

0xd343,	// (0x0002bba6) main_cam5_pane_t13

0x000c,

0xf98f,	// (0x0002e1f2) main_cam5_pane_t_ParamLimits

0xf98f,	// (0x0002e1f2) main_cam5_pane_t

0x0d92,	// (0x0001f5f5) popup_scut_keymap_window_ParamLimits

0x0d92,	// (0x0001f5f5) popup_scut_keymap_window

0x67fa,	// (0x0002505d) aid_size_cell_brow_shortcut

0xa533,	// (0x00028d96) bg_popup_window_pane_cp010

0x6806,	// (0x00025069) grid_scut_pane

0x6812,	// (0x00025075) cell_scut_pane_ParamLimits

0x6812,	// (0x00025075) cell_scut_pane

0x682d,	// (0x00025090) cell_scut_pane_g1

0xd366,	// (0x0002bbc9) cell_scut_pane_t1

0xd375,	// (0x0002bbd8) cell_scut_pane_t2

0x6836,	// (0x00025099) cell_scut_pane_t3

0x0002,

0xf9aa,	// (0x0002e20d) cell_scut_pane_t

0x5433,	// (0x00023c96) main_mup3_pane_g8_ParamLimits

0x5433,	// (0x00023c96) main_mup3_pane_g8

0x1df2,	// (0x00020655) area_vitu2_query_pane_ParamLimits

0x1df2,	// (0x00020655) area_vitu2_query_pane

0x6598,	// (0x00024dfb) input_focus_pane_cp08

0xd384,	// (0x0002bbe7) area_vitu2_query_pane_g1

0x6844,	// (0x000250a7) area_vitu2_query_pane_g2

0x0001,

0xf9b1,	// (0x0002e214) area_vitu2_query_pane_g

0x6855,	// (0x000250b8) area_vitu2_query_pane_t1_ParamLimits

0x6855,	// (0x000250b8) area_vitu2_query_pane_t1

0x6869,	// (0x000250cc) area_vitu2_query_pane_t2_ParamLimits

0x6869,	// (0x000250cc) area_vitu2_query_pane_t2

0x687d,	// (0x000250e0) area_vitu2_query_pane_t3_ParamLimits

0x687d,	// (0x000250e0) area_vitu2_query_pane_t3

0xd390,	// (0x0002bbf3) area_vitu2_query_pane_t4_ParamLimits

0xd390,	// (0x0002bbf3) area_vitu2_query_pane_t4

0xd3b8,	// (0x0002bc1b) area_vitu2_query_pane_t5_ParamLimits

0xd3b8,	// (0x0002bc1b) area_vitu2_query_pane_t5

0xd3e0,	// (0x0002bc43) area_vitu2_query_pane_t6_ParamLimits

0xd3e0,	// (0x0002bc43) area_vitu2_query_pane_t6

0x0006,

0xf9b6,	// (0x0002e219) area_vitu2_query_pane_t_ParamLimits

0xf9b6,	// (0x0002e219) area_vitu2_query_pane_t

0x6580,	// (0x00024de3) bg_button_pane_cp018

0x68a5,	// (0x00025108) bg_button_pane_cp021

0x68b1,	// (0x00025114) bg_button_pane_cp022

0x68d4,	// (0x00025137) input_focus_pane_cp09

0x416f,	// (0x000229d2) aid_size_touch_mv_arrow_left

0x419a,	// (0x000229fd) aid_size_touch_mv_arrow_right

0x6211,	// (0x00024a74) main_cset_slider_pane_g16_ParamLimits

0x6211,	// (0x00024a74) main_cset_slider_pane_g16

0x621d,	// (0x00024a80) main_cset_slider_pane_g17_ParamLimits

0x621d,	// (0x00024a80) main_cset_slider_pane_g17

0x67e7,	// (0x0002504a) cell_cam4_burst_pane_g1_ParamLimits

0x9bdf,	// (0x00028442) compa_mode_pane

0x6403,	// (0x00024c66) popup_vtel_slider_window_g3_ParamLimits

0x6403,	// (0x00024c66) popup_vtel_slider_window_g3

0x6417,	// (0x00024c7a) popup_vtel_slider_window_g4_ParamLimits

0x6417,	// (0x00024c7a) popup_vtel_slider_window_g4

0x642b,	// (0x00024c8e) popup_vtel_slider_window_t1_ParamLimits

0x642b,	// (0x00024c8e) popup_vtel_slider_window_t1

0x0de1,	// (0x0001f644) main_cl_pane

0x1355,	// (0x0001fbb8) popup_imed_adjust2_window_ParamLimits

0xb77f,	// (0x00029fe2) bg_tb_trans_pane_cp05_ParamLimits

0xcafe,	// (0x0002b361) popup_imed_adjust2_window_g1_ParamLimits

0xcb0d,	// (0x0002b370) popup_imed_adjust2_window_g2_ParamLimits

0xcb0d,	// (0x0002b370) popup_imed_adjust2_window_g2

0xcb19,	// (0x0002b37c) popup_imed_adjust2_window_g3_ParamLimits

0xcb19,	// (0x0002b37c) popup_imed_adjust2_window_g3

0x0002,

0xf72c,	// (0x0002df8f) popup_imed_adjust2_window_g_ParamLimits

0xf72c,	// (0x0002df8f) popup_imed_adjust2_window_g

0xcb25,	// (0x0002b388) popup_imed_adjust2_window_t1_ParamLimits

0xcb3d,	// (0x0002b3a0) slider_imed_adjust_pane_ParamLimits

0xcb51,	// (0x0002b3b4) slider_imed_adjust_pane_g1_ParamLimits

0xcb61,	// (0x0002b3c4) slider_imed_adjust_pane_g2_ParamLimits

0xcb71,	// (0x0002b3d4) slider_imed_adjust_pane_g3_ParamLimits

0xcb82,	// (0x0002b3e5) slider_imed_adjust_pane_g4_ParamLimits

0xf733,	// (0x0002df96) slider_imed_adjust_pane_g_ParamLimits

0x1b7b,	// (0x000203de) aid_touch_area_cam4_ParamLimits

0x1b7b,	// (0x000203de) aid_touch_area_cam4

0x1b8b,	// (0x000203ee) battery_pane_cp01

0x1c12,	// (0x00020475) main_camera4_pane_g6_ParamLimits

0x1c12,	// (0x00020475) main_camera4_pane_g6

0x1c30,	// (0x00020493) main_camera4_pane_t2_ParamLimits

0x1c30,	// (0x00020493) main_camera4_pane_t2

0x0001,

0xf835,	// (0x0002e098) main_camera4_pane_t_ParamLimits

0xf835,	// (0x0002e098) main_camera4_pane_t

0x1c8d,	// (0x000204f0) aid_touch_area_vid4_ParamLimits

0x1c8d,	// (0x000204f0) aid_touch_area_vid4

0x1ccd,	// (0x00020530) main_video4_pane_g5_ParamLimits

0x1ccd,	// (0x00020530) main_video4_pane_g5

0x1cf3,	// (0x00020556) vid4_progress_pane_ParamLimits

0x1cf3,	// (0x00020556) vid4_progress_pane

0xd06b,	// (0x0002b8ce) main_cset_slider_pane_g18_ParamLimits

0xd06b,	// (0x0002b8ce) main_cset_slider_pane_g18

0xd242,	// (0x0002baa5) cell_cam4_burst_pane_g2_ParamLimits

0xd242,	// (0x0002baa5) cell_cam4_burst_pane_g2

0x0001,

0xf98a,	// (0x0002e1ed) cell_cam4_burst_pane_g_ParamLimits

0xf98a,	// (0x0002e1ed) cell_cam4_burst_pane_g

0x68e5,	// (0x00025148) bg_cl_pane_ParamLimits

0x68e5,	// (0x00025148) bg_cl_pane

0x68f1,	// (0x00025154) cl_header_pane_ParamLimits

0x68f1,	// (0x00025154) cl_header_pane

0x68fd,	// (0x00025160) cl_listscroll_pane_ParamLimits

0x68fd,	// (0x00025160) cl_listscroll_pane

0xd42c,	// (0x0002bc8f) bg_cl_pane_g1

0xd434,	// (0x0002bc97) bg_cl_pane_g2

0xd43c,	// (0x0002bc9f) bg_cl_pane_g3

0xd444,	// (0x0002bca7) bg_cl_pane_g4

0xd44c,	// (0x0002bcaf) bg_cl_pane_g5

0xd454,	// (0x0002bcb7) bg_cl_pane_g6

0xd45c,	// (0x0002bcbf) bg_cl_pane_g7

0xd464,	// (0x0002bcc7) bg_cl_pane_g8

0xd46c,	// (0x0002bccf) bg_cl_pane_g9

0x0008,

0xf9c5,	// (0x0002e228) bg_cl_pane_g

0x6909,	// (0x0002516c) aid_height_cl_leading_ParamLimits

0x6909,	// (0x0002516c) aid_height_cl_leading

0x6915,	// (0x00025178) aid_height_cl_text_ParamLimits

0x6915,	// (0x00025178) aid_height_cl_text

0xa307,	// (0x00028b6a) bg_cl_header_pane_ParamLimits

0xa307,	// (0x00028b6a) bg_cl_header_pane

0x692d,	// (0x00025190) cl_header_pane_g1_ParamLimits

0x692d,	// (0x00025190) cl_header_pane_g1

0x693a,	// (0x0002519d) cl_header_pane_t1_ParamLimits

0x693a,	// (0x0002519d) cl_header_pane_t1

0xd474,	// (0x0002bcd7) cl_list_pane

0xd03e,	// (0x0002b8a1) hc_scroll_pane_cp01

0xa776,	// (0x00028fd9) bg_cl_header_pane_g1

0xcf0e,	// (0x0002b771) bg_cl_header_pane_g2

0xa796,	// (0x00028ff9) bg_cl_header_pane_g3

0xcf1e,	// (0x0002b781) bg_cl_header_pane_g4

0xcf16,	// (0x0002b779) bg_cl_header_pane_g5

0xd154,	// (0x0002b9b7) bg_cl_header_pane_g6

0xcf36,	// (0x0002b799) bg_cl_header_pane_g7

0xcf3e,	// (0x0002b7a1) bg_cl_header_pane_g8

0xcf2e,	// (0x0002b791) bg_cl_header_pane_g9

0x0008,

0xf9d8,	// (0x0002e23b) bg_cl_header_pane_g

0x694c,	// (0x000251af) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x694c,	// (0x000251af) hc_cl_list_double_graphic_heading_pane

0x695c,	// (0x000251bf) hc_cl_list_single_graphic_pane_ParamLimits

0x695c,	// (0x000251bf) hc_cl_list_single_graphic_pane

0x696e,	// (0x000251d1) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x696e,	// (0x000251d1) hc_cl_list_single_graphic_pane_g1

0x697a,	// (0x000251dd) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x697a,	// (0x000251dd) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9eb,	// (0x0002e24e) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9eb,	// (0x0002e24e) hc_cl_list_single_graphic_pane_g

0x698e,	// (0x000251f1) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x698e,	// (0x000251f1) hc_cl_list_single_graphic_pane_t1

0x696e,	// (0x000251d1) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x696e,	// (0x000251d1) hc_cl_list_double_graphic_heading_pane_g1

0x69a3,	// (0x00025206) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x69a3,	// (0x00025206) hc_cl_list_double_graphic_heading_pane_g2

0x69b7,	// (0x0002521a) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x69b7,	// (0x0002521a) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f0,	// (0x0002e253) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f0,	// (0x0002e253) hc_cl_list_double_graphic_heading_pane_g

0x69cb,	// (0x0002522e) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x69cb,	// (0x0002522e) hc_cl_list_double_graphic_heading_pane_t1

0x69e0,	// (0x00025243) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x69e0,	// (0x00025243) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9f7,	// (0x0002e25a) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9f7,	// (0x0002e25a) hc_cl_list_double_graphic_heading_pane_t

0x220b,	// (0x00020a6e) vid4_progress_pane_g1

0x221b,	// (0x00020a7e) vid4_progress_pane_g2

0x222b,	// (0x00020a8e) vid4_progress_pane_g3

0x223d,	// (0x00020aa0) vid4_progress_pane_g4

0x0004,

0xf9fc,	// (0x0002e25f) vid4_progress_pane_g

0x225b,	// (0x00020abe) vid4_progress_pane_t1

0x2275,	// (0x00020ad8) vid4_progress_pane_t2

0x0002,

0xfa07,	// (0x0002e26a) vid4_progress_pane_t

0x22a3,	// (0x00020b06) wait_bar_pane_cp07

0xc41c,	// (0x0002ac7f) blid_firmament_pane_ParamLimits

0xc45f,	// (0x0002acc2) popup_blid_sat_info2_window_g1

0xc483,	// (0x0002ace6) popup_blid_sat_info2_window_t3

0xc491,	// (0x0002acf4) popup_blid_sat_info2_window_t4

0xc49f,	// (0x0002ad02) popup_blid_sat_info2_window_t5

0xc4ad,	// (0x0002ad10) popup_blid_sat_info2_window_t6

0xc4bd,	// (0x0002ad20) popup_blid_sat_info2_window_t7

0xc4cb,	// (0x0002ad2e) popup_blid_sat_info2_window_t8

0xc4d9,	// (0x0002ad3c) popup_blid_sat_info2_window_t9

0xc4e7,	// (0x0002ad4a) popup_blid_sat_info2_window_t10

0xc5ae,	// (0x0002ae11) aid_firma_cardinal_ParamLimits

0xc5c2,	// (0x0002ae25) blid_firmament_pane_t1_ParamLimits

0xc5d9,	// (0x0002ae3c) blid_firmament_pane_t2_ParamLimits

0xc5f0,	// (0x0002ae53) blid_firmament_pane_t3_ParamLimits

0xc607,	// (0x0002ae6a) blid_firmament_pane_t4_ParamLimits

0xf625,	// (0x0002de88) blid_firmament_pane_t_ParamLimits

0xc61e,	// (0x0002ae81) blid_sat_info_pane_ParamLimits

0x12ab,	// (0x0001fb0e) main_cam_set_pane_ParamLimits

0x5a21,	// (0x00024284) aid_size_cell_colour_35_ParamLimits

0x5a3b,	// (0x0002429e) aid_size_cell_colour_112_ParamLimits

0x5a52,	// (0x000242b5) aid_size_cell_effect_ParamLimits

0xa2ae,	// (0x00028b11) bg_tb_trans_pane_cp02_ParamLimits

0xae8d,	// (0x000296f0) heading_imed_pane_ParamLimits

0x5a6c,	// (0x000242cf) listscroll_imed_pane_ParamLimits

0xb907,	// (0x0002a16a) popup_call2_audio_first_window_g5_ParamLimits

0xb907,	// (0x0002a16a) popup_call2_audio_first_window_g5

0x1933,	// (0x00020196) aid_size_touch_image3_arrow_left_ParamLimits

0x1933,	// (0x00020196) aid_size_touch_image3_arrow_left

0x1949,	// (0x000201ac) aid_size_touch_image3_arrow_right_ParamLimits

0x1949,	// (0x000201ac) aid_size_touch_image3_arrow_right

0x228e,	// (0x00020af1) vid4_progress_pane_t3

0x5be7,	// (0x0002444a) main_hwr_training_symbol_option_pane_ParamLimits

0x5be7,	// (0x0002444a) main_hwr_training_symbol_option_pane

0xcd26,	// (0x0002b589) popup_hwr_training_preview_window_ParamLimits

0xcd26,	// (0x0002b589) popup_hwr_training_preview_window

0x160b,	// (0x0001fe6e) hwr_training_navi_pane_g5_ParamLimits

0x160b,	// (0x0001fe6e) hwr_training_navi_pane_g5

0xcefc,	// (0x0002b75f) popup_char_count_window

0x0dd3,	// (0x0001f636) bg_popup_sub_pane_cp20_ParamLimits

0x2156,	// (0x000209b9) list_vitu2_match_list_pane_ParamLimits

0x2162,	// (0x000209c5) vitu2_page_scroll_pane_ParamLimits

0x2162,	// (0x000209c5) vitu2_page_scroll_pane

0xd49f,	// (0x0002bd02) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd49f,	// (0x0002bd02) list_single_hwr_training_symbol_option_pane

0xd4b2,	// (0x0002bd15) list_single_hwr_training_symbol_option_pane_g1

0xd4ba,	// (0x0002bd1d) list_single_hwr_training_symbol_option_pane_t1

0xd4c8,	// (0x0002bd2b) bg_button_pane_cp023

0xd4d1,	// (0x0002bd34) bg_button_pane_cp024

0xd53b,	// (0x0002bd9e) vitu2_page_scroll_pane_g1

0xd543,	// (0x0002bda6) vitu2_page_scroll_pane_g2

0x0001,

0xfa0e,	// (0x0002e271) vitu2_page_scroll_pane_g

0xd54b,	// (0x0002bdae) vitu2_page_scroll_pane_t1

0xd4f8,	// (0x0002bd5b) popup_char_count_window_g1

0xd55a,	// (0x0002bdbd) popup_char_count_window_g2

0xd4ef,	// (0x0002bd52) popup_char_count_window_g3

0x0002,

0xfa13,	// (0x0002e276) popup_char_count_window_g

0xd563,	// (0x0002bdc6) popup_char_count_window_t1

0x0de1,	// (0x0001f644) main_vded2_pane

0xcaea,	// (0x0002b34d) aid_size_cell_imed_line

0xcaf4,	// (0x0002b357) grid_imed_line_width_pane

0x1d67,	// (0x000205ca) vid4_indicators_pane_g4

0xd571,	// (0x0002bdd4) cell_imed_line_width_pane_ParamLimits

0xd571,	// (0x0002bdd4) cell_imed_line_width_pane

0xd587,	// (0x0002bdea) cell_imed_line_width_pane_g1

0xd590,	// (0x0002bdf3) cell_imed_line_width_pane_g2

0x0001,

0xfa1a,	// (0x0002e27d) cell_imed_line_width_pane_g

0x6a09,	// (0x0002526c) main_vded2_pane_g1_ParamLimits

0x6a09,	// (0x0002526c) main_vded2_pane_g1

0x6a18,	// (0x0002527b) main_vded2_pane_g2_ParamLimits

0x6a18,	// (0x0002527b) main_vded2_pane_g2

0x0001,

0xfa1f,	// (0x0002e282) main_vded2_pane_g_ParamLimits

0xfa1f,	// (0x0002e282) main_vded2_pane_g

0x6a26,	// (0x00025289) vded2_slider_pane_ParamLimits

0x6a26,	// (0x00025289) vded2_slider_pane

0x6a33,	// (0x00025296) aid_size_touch_vded2_end

0x6a3d,	// (0x000252a0) aid_size_touch_vded2_playhead

0xd598,	// (0x0002bdfb) aid_size_touch_vded2_start

0xd5a0,	// (0x0002be03) vded2_slider_bg_pane

0xd5a9,	// (0x0002be0c) vded2_slider_pane_g1

0xd5b2,	// (0x0002be15) vded2_slider_pane_g2

0x6a45,	// (0x000252a8) vded2_slider_pane_g3

0x0002,

0xfa24,	// (0x0002e287) vded2_slider_pane_g

0xd50b,	// (0x0002bd6e) vded2_slider_bg_pane_g1

0xd514,	// (0x0002bd77) vded2_slider_bg_pane_g2

0xd51d,	// (0x0002bd80) vded2_slider_bg_pane_g3

0x0002,

0xf6f0,	// (0x0002df53) vded2_slider_bg_pane_g

0x4632,	// (0x00022e95) aid_postcard_touch_down_pane_ParamLimits

0x4632,	// (0x00022e95) aid_postcard_touch_down_pane

0x4642,	// (0x00022ea5) aid_postcard_touch_up_pane_ParamLimits

0x4642,	// (0x00022ea5) aid_postcard_touch_up_pane

0x0de1,	// (0x0001f644) main_blid2_pane

0x12d4,	// (0x0001fb37) popup_blid2_search_window

0x9bdf,	// (0x00028442) blid2_gps_pane

0x9bdf,	// (0x00028442) blid2_navig_pane

0x9bdf,	// (0x00028442) blid2_search_pane

0x9bdf,	// (0x00028442) blid2_tripm_pane

0x6a4e,	// (0x000252b1) blid2_search_pane_g1_ParamLimits

0x6a4e,	// (0x000252b1) blid2_search_pane_g1

0x6a5a,	// (0x000252bd) blid2_search_pane_t1_ParamLimits

0x6a5a,	// (0x000252bd) blid2_search_pane_t1

0x6a6c,	// (0x000252cf) aid_size_cell_blid2_gps_ParamLimits

0x6a6c,	// (0x000252cf) aid_size_cell_blid2_gps

0x6a7c,	// (0x000252df) blid2_gps_pane_g1_ParamLimits

0x6a7c,	// (0x000252df) blid2_gps_pane_g1

0x6a88,	// (0x000252eb) grid_blid2_satellite_pane_ParamLimits

0x6a88,	// (0x000252eb) grid_blid2_satellite_pane

0x6a96,	// (0x000252f9) blid2_navig_pane_g1_ParamLimits

0x6a96,	// (0x000252f9) blid2_navig_pane_g1

0x6aa2,	// (0x00025305) blid2_navig_pane_t1_ParamLimits

0x6aa2,	// (0x00025305) blid2_navig_pane_t1

0x6ab4,	// (0x00025317) blid2_navig_pane_t2_ParamLimits

0x6ab4,	// (0x00025317) blid2_navig_pane_t2

0x0001,

0xfa2b,	// (0x0002e28e) blid2_navig_pane_t_ParamLimits

0xfa2b,	// (0x0002e28e) blid2_navig_pane_t

0x6ac6,	// (0x00025329) blid2_navig_ring_pane_ParamLimits

0x6ac6,	// (0x00025329) blid2_navig_ring_pane

0x6ad6,	// (0x00025339) blid2_speed_pane_ParamLimits

0x6ad6,	// (0x00025339) blid2_speed_pane

0x6ae2,	// (0x00025345) blid2_tripm_pane_g1_ParamLimits

0x6ae2,	// (0x00025345) blid2_tripm_pane_g1

0x6af2,	// (0x00025355) blid2_tripm_pane_g2_ParamLimits

0x6af2,	// (0x00025355) blid2_tripm_pane_g2

0x6afe,	// (0x00025361) blid2_tripm_pane_g3_ParamLimits

0x6afe,	// (0x00025361) blid2_tripm_pane_g3

0x6b0a,	// (0x0002536d) blid2_tripm_pane_g4_ParamLimits

0x6b0a,	// (0x0002536d) blid2_tripm_pane_g4

0x6b16,	// (0x00025379) blid2_tripm_pane_g5_ParamLimits

0x6b16,	// (0x00025379) blid2_tripm_pane_g5

0x0005,

0xfa30,	// (0x0002e293) blid2_tripm_pane_g_ParamLimits

0xfa30,	// (0x0002e293) blid2_tripm_pane_g

0x6b32,	// (0x00025395) blid2_tripm_pane_t1_ParamLimits

0x6b32,	// (0x00025395) blid2_tripm_pane_t1

0x6b44,	// (0x000253a7) blid2_tripm_pane_t2_ParamLimits

0x6b44,	// (0x000253a7) blid2_tripm_pane_t2

0x6b56,	// (0x000253b9) blid2_tripm_pane_t3_ParamLimits

0x6b56,	// (0x000253b9) blid2_tripm_pane_t3

0x0003,

0xfa3d,	// (0x0002e2a0) blid2_tripm_pane_t_ParamLimits

0xfa3d,	// (0x0002e2a0) blid2_tripm_pane_t

0x6b88,	// (0x000253eb) cell_blid2_satellite_pane_ParamLimits

0x6b88,	// (0x000253eb) cell_blid2_satellite_pane

0x6ba6,	// (0x00025409) cell_blid2_satellite_pane_g1

0xd5ba,	// (0x0002be1d) cell_blid2_satellite_pane_t1

0xa555,	// (0x00028db8) blid2_speed_pane_g1

0xd5c8,	// (0x0002be2b) blid2_speed_pane_t1

0xd5d6,	// (0x0002be39) blid2_speed_pane_t2

0x0001,

0xfa46,	// (0x0002e2a9) blid2_speed_pane_t

0xa555,	// (0x00028db8) blid2_navig_ring_pane_g1

0x6baf,	// (0x00025412) blid2_navig_ring_pane_g2

0x6bb7,	// (0x0002541a) blid2_navig_ring_pane_g3

0x6bbf,	// (0x00025422) blid2_navig_ring_pane_g4

0x6bc7,	// (0x0002542a) blid2_navig_ring_pane_g5

0x0004,

0xfa4b,	// (0x0002e2ae) blid2_navig_ring_pane_g

0x9bdf,	// (0x00028442) bg_popup_window_pane_cp011

0xd5e4,	// (0x0002be47) popup_blid2_search_window_g1

0xd5ec,	// (0x0002be4f) popup_blid2_search_window_t1

0xd5fa,	// (0x0002be5d) popup_blid2_search_window_t2

0x0001,

0xfa56,	// (0x0002e2b9) popup_blid2_search_window_t

0xa685,	// (0x00028ee8) main_browser_pane_g1

0xa387,	// (0x00028bea) main_browser_pane_ParamLimits

0x12ab,	// (0x0001fb0e) bg_button_pane_cp011_ParamLimits

0x2083,	// (0x000208e6) cell_vitu2_function_pane_g1_ParamLimits

0xb77f,	// (0x00029fe2) bg_popup_sub_pane_cp22_ParamLimits

0x6598,	// (0x00024dfb) input_focus_pane_cp08_ParamLimits

0x65b4,	// (0x00024e17) popup_vitu2_query_button_pane_ParamLimits

0x65b4,	// (0x00024e17) popup_vitu2_query_button_pane

0x65c3,	// (0x00024e26) popup_vitu2_query_input_button_pane

0xd18f,	// (0x0002b9f2) popup_vitu2_query_window_g1_ParamLimits

0x65cd,	// (0x00024e30) popup_vitu2_query_window_g2_ParamLimits

0xf95e,	// (0x0002e1c1) popup_vitu2_query_window_g_ParamLimits

0x9bdf,	// (0x00028442) bg_button_pane_cp026

0x6bcf,	// (0x00025432) popup_vitu2_query_input_button_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp025

0xd608,	// (0x0002be6b) popup_vitu2_query_button_pane_t1

0x5099,	// (0x000238fc) main_mp3_pane_t6

0x50a9,	// (0x0002390c) popup_slider_window_cp01

0x1c42,	// (0x000204a5) cam4_battery_pane

0x1d20,	// (0x00020583) cam4_battery_pane_cp02

0x2203,	// (0x00020a66) cam4_battery_pane_cp01

0x2203,	// (0x00020a66) cam4_battery_pane_cp03

0xd501,	// (0x0002bd64) cam4_battery_pane_g1

0xa555,	// (0x00028db8) cam4_battery_pane_g2

0x0001,

0xfa5b,	// (0x0002e2be) cam4_battery_pane_g

0xc4f5,	// (0x0002ad58) popup_blid_sat_info2_window_t11

0x416f,	// (0x000229d2) aid_size_touch_mv_arrow_left_ParamLimits

0x419a,	// (0x000229fd) aid_size_touch_mv_arrow_right_ParamLimits

0xaded,	// (0x00029650) navi_pane_g1_ParamLimits

0x41d9,	// (0x00022a3c) navi_pane_g2_ParamLimits

0x4207,	// (0x00022a6a) navi_pane_g3_ParamLimits

0xf339,	// (0x0002db9c) navi_pane_g_ParamLimits

0x4261,	// (0x00022ac4) navi_pane_mv_t1_ParamLimits

0x5a78,	// (0x000242db) grid_imed_effect_pane_ParamLimits

0x2dcc,	// (0x0002162f) aid_placing_vt_slider_lsc

0xa5c1,	// (0x00028e24) aid_placing_vt_slider_prt

0xa2ae,	// (0x00028b11) bg_tb_trans_pane_cp01_ParamLimits

0xc75d,	// (0x0002afc0) popup_image_details_window_g1_ParamLimits

0xc770,	// (0x0002afd3) popup_image_details_window_g2_ParamLimits

0xc785,	// (0x0002afe8) popup_image_details_window_g3_ParamLimits

0xc785,	// (0x0002afe8) popup_image_details_window_g3

0xf665,	// (0x0002dec8) popup_image_details_window_g_ParamLimits

0xc799,	// (0x0002affc) popup_image_details_window_t1_ParamLimits

0xc7ab,	// (0x0002b00e) popup_image_details_window_t2_ParamLimits

0xc7c4,	// (0x0002b027) popup_image_details_window_t3_ParamLimits

0xc7d8,	// (0x0002b03b) popup_image_details_window_t4_ParamLimits

0xc7f3,	// (0x0002b056) popup_image_details_window_t5_ParamLimits

0xf66c,	// (0x0002decf) popup_image_details_window_t_ParamLimits

0x6921,	// (0x00025184) cl_header_name_pane_ParamLimits

0x6921,	// (0x00025184) cl_header_name_pane

0x6bd7,	// (0x0002543a) cl_header_name_pane_t1_ParamLimits

0x6bd7,	// (0x0002543a) cl_header_name_pane_t1

0x6bee,	// (0x00025451) cl_header_name_pane_t2_ParamLimits

0x6bee,	// (0x00025451) cl_header_name_pane_t2

0x6c18,	// (0x0002547b) cl_header_name_pane_t3_ParamLimits

0x6c18,	// (0x0002547b) cl_header_name_pane_t3

0x0002,

0xfa60,	// (0x0002e2c3) cl_header_name_pane_t_ParamLimits

0xfa60,	// (0x0002e2c3) cl_header_name_pane_t

0x4232,	// (0x00022a95) navi_pane_mv_g2_ParamLimits

0xce98,	// (0x0002b6fb) field_vitu2_entry_pane_g1_ParamLimits

0xcea4,	// (0x0002b707) field_vitu2_entry_pane_g2_ParamLimits

0xb7a1,	// (0x0002a004) field_vitu2_entry_pane_g3_ParamLimits

0xb7a1,	// (0x0002a004) field_vitu2_entry_pane_g3

0xf867,	// (0x0002e0ca) field_vitu2_entry_pane_g_ParamLimits

0x1f49,	// (0x000207ac) cell_vitu2_itu_pane_g1_ParamLimits

0x1f61,	// (0x000207c4) cell_vitu2_itu_pane_g2_ParamLimits

0x1f61,	// (0x000207c4) cell_vitu2_itu_pane_g2

0x0001,

0xf873,	// (0x0002e0d6) cell_vitu2_itu_pane_g_ParamLimits

0xf873,	// (0x0002e0d6) cell_vitu2_itu_pane_g

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp05_ParamLimits

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp05

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp03

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp04

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp10_ParamLimits

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp10

0x68c2,	// (0x00025125) bg_vkb2_func_pane_cp08

0x6580,	// (0x00024de3) bg_vkb2_func_pane_cp06

0x68a5,	// (0x00025108) bg_vkb2_func_pane_cp07

0xd4da,	// (0x0002bd3d) bg_vkb2_func_pane_cp11_ParamLimits

0xd4da,	// (0x0002bd3d) bg_vkb2_func_pane_cp11

0xd526,	// (0x0002bd89) bg_vkb2_func_pane_cp12_ParamLimits

0xd526,	// (0x0002bd89) bg_vkb2_func_pane_cp12

0x9bdf,	// (0x00028442) bg_vkb2_func_pane_cp09

0xcf0e,	// (0x0002b771) bg_vkb2_func_pane_g1

0xa796,	// (0x00028ff9) bg_vkb2_func_pane_g2

0xcf16,	// (0x0002b779) bg_vkb2_func_pane_g3

0xcf1e,	// (0x0002b781) bg_vkb2_func_pane_g4

0xd154,	// (0x0002b9b7) bg_vkb2_func_pane_g5

0xcf36,	// (0x0002b799) bg_vkb2_func_pane_g6

0xcf3e,	// (0x0002b7a1) bg_vkb2_func_pane_g7

0xcf2e,	// (0x0002b791) bg_vkb2_func_pane_g8

0xa776,	// (0x00028fd9) bg_vkb2_func_pane_g9

0x0008,

0xfa67,	// (0x0002e2ca) bg_vkb2_func_pane_g

0x6b24,	// (0x00025387) blid2_tripm_pane_g6_ParamLimits

0x6b24,	// (0x00025387) blid2_tripm_pane_g6

0xcde4,	// (0x0002b647) mp4_progress_pane_g1

0x6b7c,	// (0x000253df) blid2_tripm_values_pane_ParamLimits

0x6b7c,	// (0x000253df) blid2_tripm_values_pane

0x6c3d,	// (0x000254a0) blid2_tripm_values_pane_t1

0x6c4b,	// (0x000254ae) blid2_tripm_values_pane_t2

0xd616,	// (0x0002be79) blid2_tripm_values_pane_t3

0x6c59,	// (0x000254bc) blid2_tripm_values_pane_t4

0x6c67,	// (0x000254ca) blid2_tripm_values_pane_t5

0x6c75,	// (0x000254d8) blid2_tripm_values_pane_t6

0xd624,	// (0x0002be87) blid2_tripm_values_pane_t7

0x6c83,	// (0x000254e6) blid2_tripm_values_pane_t8

0x6c91,	// (0x000254f4) blid2_tripm_values_pane_t9

0x0008,

0xfa7a,	// (0x0002e2dd) blid2_tripm_values_pane_t

0x2e0a,	// (0x0002166d) call_video_pane_t1_ParamLimits

0x2e27,	// (0x0002168a) call_video_pane_t2_ParamLimits

0xf1e2,	// (0x0002da45) call_video_pane_t_ParamLimits

0x455e,	// (0x00022dc1) msg_header_pane_g1_ParamLimits

0xb00d,	// (0x00029870) msg_header_pane_g2_ParamLimits

0xb00d,	// (0x00029870) msg_header_pane_g2

0x0001,

0xf3dc,	// (0x0002dc3f) msg_header_pane_g_ParamLimits

0xf3dc,	// (0x0002dc3f) msg_header_pane_g

0xa387,	// (0x00028bea) main_clock2_pane_ParamLimits

0x58cb,	// (0x0002412e) grid_clock2_toolbar_pane_ParamLimits

0x58cb,	// (0x0002412e) grid_clock2_toolbar_pane

0x58cb,	// (0x0002412e) listscroll_clock2_pane_ParamLimits

0x58cb,	// (0x0002412e) listscroll_clock2_pane

0x597a,	// (0x000241dd) main_clock2_pane_t3_ParamLimits

0x597a,	// (0x000241dd) main_clock2_pane_t3

0x598c,	// (0x000241ef) main_clock2_pane_t4_ParamLimits

0x598c,	// (0x000241ef) main_clock2_pane_t4

0xd632,	// (0x0002be95) cell_clock2_toolbar_pane

0xd63a,	// (0x0002be9d) cell_clock2_toolbar_pane_cp01

0xd63a,	// (0x0002be9d) cell_clock2_toolbar_pane_cp02

0xd642,	// (0x0002bea5) cell_clock2_toolbar_pane_cp03

0xd64a,	// (0x0002bead) list_clock2_pane

0xad53,	// (0x000295b6) scroll_pane_cp10

0xd652,	// (0x0002beb5) list_single_clock2_pane_ParamLimits

0xd652,	// (0x0002beb5) list_single_clock2_pane

0xa533,	// (0x00028d96) list_highlight_pane_cp08

0xd65f,	// (0x0002bec2) list_single_clock2_pane_t1

0xd66d,	// (0x0002bed0) list_single_clock2_pane_t2

0x0001,

0xfa8d,	// (0x0002e2f0) list_single_clock2_pane_t

0x9bdf,	// (0x00028442) bg_button_pane_cp10

0xd67b,	// (0x0002bede) cell_clock2_toolbar_pane_g1

0x1228,	// (0x0001fa8b) aid_main_viewer_pane_g1_ParamLimits

0x1228,	// (0x0001fa8b) aid_main_viewer_pane_g1

0x1234,	// (0x0001fa97) aid_main_viewer_pane_g2_ParamLimits

0x1234,	// (0x0001fa97) aid_main_viewer_pane_g2

0x45ee,	// (0x00022e51) aid_main_viewer_pane_g3_ParamLimits

0x45ee,	// (0x00022e51) aid_main_viewer_pane_g3

0x45ff,	// (0x00022e62) aid_main_viewer_pane_g4_ParamLimits

0x45ff,	// (0x00022e62) aid_main_viewer_pane_g4

0x0003,

0xf3ed,	// (0x0002dc50) aid_main_viewer_pane_g_ParamLimits

0xf3ed,	// (0x0002dc50) aid_main_viewer_pane_g

0x128c,	// (0x0001faef) main_calc_pane_ParamLimits

0x12b9,	// (0x0001fb1c) main_dialer2_pane_ParamLimits

0x0de1,	// (0x0001f644) main_cam6_pane

0x0de1,	// (0x0001f644) main_vid6_pane

0x58d7,	// (0x0002413a) listscroll_gen_pane_cp06_ParamLimits

0x58d7,	// (0x0002413a) listscroll_gen_pane_cp06

0x599e,	// (0x00024201) main_clock2_pane_t5_ParamLimits

0x599e,	// (0x00024201) main_clock2_pane_t5

0x59eb,	// (0x0002424e) aid_call2_pane_cp10_ParamLimits

0x59fd,	// (0x00024260) aid_call_pane_cp10_ParamLimits

0xadc2,	// (0x00029625) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadc2,	// (0x00029625) popup_clock_analogue_window_cp10_g2_ParamLimits

0x14f0,	// (0x0001fd53) popup_clock_analogue_window_cp10_g3_ParamLimits

0x14f0,	// (0x0001fd53) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadc2,	// (0x00029625) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf721,	// (0x0002df84) popup_clock_analogue_window_cp10_g_ParamLimits

0x1506,	// (0x0001fd69) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5cd5,	// (0x00024538) cell_dialer2_keypad_pane_g2_ParamLimits

0x5cd5,	// (0x00024538) cell_dialer2_keypad_pane_g2

0x0001,

0xf806,	// (0x0002e069) cell_dialer2_keypad_pane_g_ParamLimits

0xf806,	// (0x0002e069) cell_dialer2_keypad_pane_g

0x5cf1,	// (0x00024554) cell_dialer2_keypad_pane_t1

0x6106,	// (0x00024969) main_cset_text2_pane_ParamLimits

0x6106,	// (0x00024969) main_cset_text2_pane

0xd384,	// (0x0002bbe7) area_vitu2_query_pane_g1_ParamLimits

0x6844,	// (0x000250a7) area_vitu2_query_pane_g2_ParamLimits

0xf9b1,	// (0x0002e214) area_vitu2_query_pane_g_ParamLimits

0xd408,	// (0x0002bc6b) area_vitu2_query_pane_t7_ParamLimits

0xd408,	// (0x0002bc6b) area_vitu2_query_pane_t7

0x6580,	// (0x00024de3) bg_button_pane_cp018_ParamLimits

0x68a5,	// (0x00025108) bg_button_pane_cp021_ParamLimits

0x68b1,	// (0x00025114) bg_button_pane_cp022_ParamLimits

0x68c2,	// (0x00025125) bg_vkb2_func_pane_cp08_ParamLimits

0x6580,	// (0x00024de3) bg_vkb2_func_pane_cp06_ParamLimits

0x68a5,	// (0x00025108) bg_vkb2_func_pane_cp07_ParamLimits

0x68d4,	// (0x00025137) input_focus_pane_cp09_ParamLimits

0x22b6,	// (0x00020b19) cam6_autofocus_pane_ParamLimits

0x22b6,	// (0x00020b19) cam6_autofocus_pane

0x22d8,	// (0x00020b3b) cam6_image_uncrop_pane_ParamLimits

0x22d8,	// (0x00020b3b) cam6_image_uncrop_pane

0x230e,	// (0x00020b71) cam6_indi_pane_ParamLimits

0x230e,	// (0x00020b71) cam6_indi_pane

0x2328,	// (0x00020b8b) cam6_mode_pane_ParamLimits

0x2328,	// (0x00020b8b) cam6_mode_pane

0x233c,	// (0x00020b9f) cam6_timer_pane_ParamLimits

0x233c,	// (0x00020b9f) cam6_timer_pane

0x2350,	// (0x00020bb3) cam6_zoom_pane_ParamLimits

0x2350,	// (0x00020bb3) cam6_zoom_pane

0x6c9f,	// (0x00025502) cam6_mode_pane_g1_ParamLimits

0x6c9f,	// (0x00025502) cam6_mode_pane_g1

0x6cab,	// (0x0002550e) cam6_mode_pane_g2_ParamLimits

0x6cab,	// (0x0002550e) cam6_mode_pane_g2

0x6cb7,	// (0x0002551a) cam6_mode_pane_g3_ParamLimits

0x6cb7,	// (0x0002551a) cam6_mode_pane_g3

0x6cc3,	// (0x00025526) cam6_mode_pane_g4_ParamLimits

0x6cc3,	// (0x00025526) cam6_mode_pane_g4

0x0003,

0xfa92,	// (0x0002e2f5) cam6_mode_pane_g_ParamLimits

0xfa92,	// (0x0002e2f5) cam6_mode_pane_g

0xc856,	// (0x0002b0b9) bg_tb_trans_pane_cp08_ParamLimits

0xc856,	// (0x0002b0b9) bg_tb_trans_pane_cp08

0xd683,	// (0x0002bee6) cam6_battery_pane_ParamLimits

0xd683,	// (0x0002bee6) cam6_battery_pane

0xd699,	// (0x0002befc) cam6_indi_pane_g1_ParamLimits

0xd699,	// (0x0002befc) cam6_indi_pane_g1

0xd6ab,	// (0x0002bf0e) cam6_indi_pane_g2_ParamLimits

0xd6ab,	// (0x0002bf0e) cam6_indi_pane_g2

0xd6bd,	// (0x0002bf20) cam6_indi_pane_g3_ParamLimits

0xd6bd,	// (0x0002bf20) cam6_indi_pane_g3

0x0002,

0xfa9b,	// (0x0002e2fe) cam6_indi_pane_g_ParamLimits

0xfa9b,	// (0x0002e2fe) cam6_indi_pane_g

0xd6cf,	// (0x0002bf32) cam6_indi_pane_t1_ParamLimits

0xd6cf,	// (0x0002bf32) cam6_indi_pane_t1

0x5e2e,	// (0x00024691) cam6_autofocus_pane_g1

0x5e26,	// (0x00024689) cam6_autofocus_pane_g2

0x5e3e,	// (0x000246a1) cam6_autofocus_pane_g3

0x5e36,	// (0x00024699) cam6_autofocus_pane_g4

0x0003,

0xfaa2,	// (0x0002e305) cam6_autofocus_pane_g

0xd6f5,	// (0x0002bf58) cam6_timer_pane_g1

0xd6fd,	// (0x0002bf60) cam6_timer_pane_t1

0xd70b,	// (0x0002bf6e) cam6_zoom_cont_pane

0xd713,	// (0x0002bf76) cam6_zoom_pane_g1

0xd71c,	// (0x0002bf7f) cam6_zoom_pane_g2

0x6ccf,	// (0x00025532) cam6_zoom_pane_g3

0x0002,

0xfaab,	// (0x0002e30e) cam6_zoom_pane_g

0xa555,	// (0x00028db8) cam6_battery_pane_g1

0xa555,	// (0x00028db8) cam6_battery_pane_g2

0x0001,

0xf39d,	// (0x0002dc00) cam6_battery_pane_g

0xd713,	// (0x0002bf76) cam6_zoom_cont_pane_g1

0xd71c,	// (0x0002bf7f) cam6_zoom_cont_pane_g2

0xd725,	// (0x0002bf88) cam6_zoom_cont_pane_g3

0x0002,

0xfab2,	// (0x0002e315) cam6_zoom_cont_pane_g

0x6ced,	// (0x00025550) cam6_mode_pane_cp_ParamLimits

0x6ced,	// (0x00025550) cam6_mode_pane_cp

0x6d01,	// (0x00025564) cam6_zoom_pane_cp_ParamLimits

0x6d01,	// (0x00025564) cam6_zoom_pane_cp

0x6d1d,	// (0x00025580) vid6_image_uncrop_cif_pane_ParamLimits

0x6d1d,	// (0x00025580) vid6_image_uncrop_cif_pane

0x6d49,	// (0x000255ac) vid6_image_uncrop_nhd_pane_ParamLimits

0x6d49,	// (0x000255ac) vid6_image_uncrop_nhd_pane

0x6d68,	// (0x000255cb) vid6_image_uncrop_vga_pane_ParamLimits

0x6d68,	// (0x000255cb) vid6_image_uncrop_vga_pane

0x6d87,	// (0x000255ea) vid6_image_uncrop_wvga_pane_ParamLimits

0x6d87,	// (0x000255ea) vid6_image_uncrop_wvga_pane

0x6da6,	// (0x00025609) vid6_indi_pane_ParamLimits

0x6da6,	// (0x00025609) vid6_indi_pane

0xc856,	// (0x0002b0b9) bg_tb_trans_pane_cp09_ParamLimits

0xc856,	// (0x0002b0b9) bg_tb_trans_pane_cp09

0xd73d,	// (0x0002bfa0) cam6_battery_pane_cp_ParamLimits

0xd73d,	// (0x0002bfa0) cam6_battery_pane_cp

0xd749,	// (0x0002bfac) vid6_indi_pane_g1_ParamLimits

0xd749,	// (0x0002bfac) vid6_indi_pane_g1

0xd75b,	// (0x0002bfbe) vid6_indi_pane_g2_ParamLimits

0xd75b,	// (0x0002bfbe) vid6_indi_pane_g2

0xd76d,	// (0x0002bfd0) vid6_indi_pane_g3_ParamLimits

0xd76d,	// (0x0002bfd0) vid6_indi_pane_g3

0xd784,	// (0x0002bfe7) vid6_indi_pane_g4_ParamLimits

0xd784,	// (0x0002bfe7) vid6_indi_pane_g4

0xd79b,	// (0x0002bffe) vid6_indi_pane_g5_ParamLimits

0xd79b,	// (0x0002bffe) vid6_indi_pane_g5

0x0004,

0xfab9,	// (0x0002e31c) vid6_indi_pane_g_ParamLimits

0xfab9,	// (0x0002e31c) vid6_indi_pane_g

0xd7b5,	// (0x0002c018) vid6_indi_pane_t1_ParamLimits

0xd7b5,	// (0x0002c018) vid6_indi_pane_t1

0xd7cb,	// (0x0002c02e) vid6_indi_pane_t2_ParamLimits

0xd7cb,	// (0x0002c02e) vid6_indi_pane_t2

0xd7f3,	// (0x0002c056) vid6_indi_pane_t3_ParamLimits

0xd7f3,	// (0x0002c056) vid6_indi_pane_t3

0xd847,	// (0x0002c0aa) vid6_indi_pane_t4_ParamLimits

0xd847,	// (0x0002c0aa) vid6_indi_pane_t4

0x0003,

0xfac4,	// (0x0002e327) vid6_indi_pane_t_ParamLimits

0xfac4,	// (0x0002e327) vid6_indi_pane_t

0xd86b,	// (0x0002c0ce) wait_bar_pane_cp08

0x6dcb,	// (0x0002562e) main_cset_text2_pane_t1_ParamLimits

0x6dcb,	// (0x0002562e) main_cset_text2_pane_t1

0x6cd8,	// (0x0002553b) listscroll_gen_pane_cp06_t1_ParamLimits

0x6cd8,	// (0x0002553b) listscroll_gen_pane_cp06_t1

0x0de1,	// (0x0001f644) main_cam6_set_pane

0xdec9,	// (0x0002c72c) bg_tb_trans_pane_cp06_ParamLimits

0x1c4a,	// (0x000204ad) cam4_indicators_pane_g1_ParamLimits

0x1c5b,	// (0x000204be) cam4_indicators_pane_g2_ParamLimits

0xf843,	// (0x0002e0a6) cam4_indicators_pane_g_ParamLimits

0x1c73,	// (0x000204d6) cam4_indicators_pane_t1_ParamLimits

0x12ab,	// (0x0001fb0e) bg_tb_trans_pane_cp07_ParamLimits

0x1d2a,	// (0x0002058d) vid4_indicators_pane_g1_ParamLimits

0x1d40,	// (0x000205a3) vid4_indicators_pane_g2_ParamLimits

0x1d54,	// (0x000205b7) vid4_indicators_pane_g3_ParamLimits

0x1d67,	// (0x000205ca) vid4_indicators_pane_g4_ParamLimits

0xf855,	// (0x0002e0b8) vid4_indicators_pane_g_ParamLimits

0x1d85,	// (0x000205e8) vid4_indicators_pane_t1_ParamLimits

0x220b,	// (0x00020a6e) vid4_progress_pane_g1_ParamLimits

0x221b,	// (0x00020a7e) vid4_progress_pane_g2_ParamLimits

0x222b,	// (0x00020a8e) vid4_progress_pane_g3_ParamLimits

0x223d,	// (0x00020aa0) vid4_progress_pane_g4_ParamLimits

0xf9fc,	// (0x0002e25f) vid4_progress_pane_g_ParamLimits

0x225b,	// (0x00020abe) vid4_progress_pane_t1_ParamLimits

0x2275,	// (0x00020ad8) vid4_progress_pane_t2_ParamLimits

0x228e,	// (0x00020af1) vid4_progress_pane_t3_ParamLimits

0xfa07,	// (0x0002e26a) vid4_progress_pane_t_ParamLimits

0x22a3,	// (0x00020b06) wait_bar_pane_cp07_ParamLimits

0x6df2,	// (0x00025655) main_cam6_set_pane_g2_ParamLimits

0x6df2,	// (0x00025655) main_cam6_set_pane_g2

0x6dfe,	// (0x00025661) main_cset6_listscroll_pane_ParamLimits

0x6dfe,	// (0x00025661) main_cset6_listscroll_pane

0x6e2b,	// (0x0002568e) main_cset6_slider_pane_ParamLimits

0x6e2b,	// (0x0002568e) main_cset6_slider_pane

0x6e37,	// (0x0002569a) main_cset6_text2_pane_ParamLimits

0x6e37,	// (0x0002569a) main_cset6_text2_pane

0xd87a,	// (0x0002c0dd) main_cset6_text_pane

0xd882,	// (0x0002c0e5) main_cset_list_pane_copy1_ParamLimits

0xd882,	// (0x0002c0e5) main_cset_list_pane_copy1

0xd892,	// (0x0002c0f5) scroll_pane_cp028_copy1

0x6e4a,	// (0x000256ad) cset_list_set_pane_copy1

0x6e5a,	// (0x000256bd) aid_position_infowindow_above_copy1

0x6e62,	// (0x000256c5) aid_position_infowindow_below_copy1

0x6e6a,	// (0x000256cd) cset_list_set_pane_g1_copy1

0x6e72,	// (0x000256d5) cset_list_set_pane_g3_copy1_ParamLimits

0x6e72,	// (0x000256d5) cset_list_set_pane_g3_copy1

0x6e81,	// (0x000256e4) cset_list_set_pane_t1_copy1_ParamLimits

0x6e81,	// (0x000256e4) cset_list_set_pane_t1_copy1

0xa2ae,	// (0x00028b11) list_highlight_pane_cp021_copy1_ParamLimits

0xa2ae,	// (0x00028b11) list_highlight_pane_cp021_copy1

0xd89b,	// (0x0002c0fe) cset6_slider_pane_ParamLimits

0xd89b,	// (0x0002c0fe) cset6_slider_pane

0xd8c7,	// (0x0002c12a) main_cset6_slider_pane_g1_ParamLimits

0xd8c7,	// (0x0002c12a) main_cset6_slider_pane_g1

0x6e96,	// (0x000256f9) main_cset6_slider_pane_g2_ParamLimits

0x6e96,	// (0x000256f9) main_cset6_slider_pane_g2

0xd8ef,	// (0x0002c152) main_cset6_slider_pane_g3_ParamLimits

0xd8ef,	// (0x0002c152) main_cset6_slider_pane_g3

0x6ebe,	// (0x00025721) main_cset6_slider_pane_g4_ParamLimits

0x6ebe,	// (0x00025721) main_cset6_slider_pane_g4

0x6eca,	// (0x0002572d) main_cset6_slider_pane_g5_ParamLimits

0x6eca,	// (0x0002572d) main_cset6_slider_pane_g5

0xd053,	// (0x0002b8b6) main_cset6_slider_pane_g7_ParamLimits

0xd053,	// (0x0002b8b6) main_cset6_slider_pane_g7

0xd05f,	// (0x0002b8c2) main_cset6_slider_pane_g8_ParamLimits

0xd05f,	// (0x0002b8c2) main_cset6_slider_pane_g8

0x6ed6,	// (0x00025739) main_cset6_slider_pane_g9_ParamLimits

0x6ed6,	// (0x00025739) main_cset6_slider_pane_g9

0x6ee2,	// (0x00025745) main_cset6_slider_pane_g10_ParamLimits

0x6ee2,	// (0x00025745) main_cset6_slider_pane_g10

0x6eee,	// (0x00025751) main_cset6_slider_pane_g11_ParamLimits

0x6eee,	// (0x00025751) main_cset6_slider_pane_g11

0x6efa,	// (0x0002575d) main_cset6_slider_pane_g12_ParamLimits

0x6efa,	// (0x0002575d) main_cset6_slider_pane_g12

0x6f06,	// (0x00025769) main_cset6_slider_pane_g13_ParamLimits

0x6f06,	// (0x00025769) main_cset6_slider_pane_g13

0x6f12,	// (0x00025775) main_cset6_slider_pane_g14_ParamLimits

0x6f12,	// (0x00025775) main_cset6_slider_pane_g14

0x6f1e,	// (0x00025781) main_cset6_slider_pane_g15_ParamLimits

0x6f1e,	// (0x00025781) main_cset6_slider_pane_g15

0x6f36,	// (0x00025799) main_cset6_slider_pane_g16_ParamLimits

0x6f36,	// (0x00025799) main_cset6_slider_pane_g16

0x6f42,	// (0x000257a5) main_cset6_slider_pane_g17_ParamLimits

0x6f42,	// (0x000257a5) main_cset6_slider_pane_g17

0x0011,

0xfacd,	// (0x0002e330) main_cset6_slider_pane_g_ParamLimits

0xfacd,	// (0x0002e330) main_cset6_slider_pane_g

0xd8fb,	// (0x0002c15e) main_cset6_slider_pane_t1_ParamLimits

0xd8fb,	// (0x0002c15e) main_cset6_slider_pane_t1

0x6f66,	// (0x000257c9) main_cset6_slider_pane_t2_ParamLimits

0x6f66,	// (0x000257c9) main_cset6_slider_pane_t2

0x6f91,	// (0x000257f4) main_cset6_slider_pane_t3_ParamLimits

0x6f91,	// (0x000257f4) main_cset6_slider_pane_t3

0x6fbc,	// (0x0002581f) main_cset6_slider_pane_t4_ParamLimits

0x6fbc,	// (0x0002581f) main_cset6_slider_pane_t4

0x6fe7,	// (0x0002584a) main_cset6_slider_pane_t5_ParamLimits

0x6fe7,	// (0x0002584a) main_cset6_slider_pane_t5

0xd93c,	// (0x0002c19f) main_cset6_slider_pane_t7_ParamLimits

0xd93c,	// (0x0002c19f) main_cset6_slider_pane_t7

0x7012,	// (0x00025875) main_cset6_slider_pane_t8_ParamLimits

0x7012,	// (0x00025875) main_cset6_slider_pane_t8

0x7036,	// (0x00025899) main_cset6_slider_pane_t9_ParamLimits

0x7036,	// (0x00025899) main_cset6_slider_pane_t9

0x705a,	// (0x000258bd) main_cset6_slider_pane_t10_ParamLimits

0x705a,	// (0x000258bd) main_cset6_slider_pane_t10

0x707e,	// (0x000258e1) main_cset6_slider_pane_t11_ParamLimits

0x707e,	// (0x000258e1) main_cset6_slider_pane_t11

0xd972,	// (0x0002c1d5) main_cset6_slider_pane_t14_ParamLimits

0xd972,	// (0x0002c1d5) main_cset6_slider_pane_t14

0xd9ab,	// (0x0002c20e) main_cset6_slider_pane_t15_ParamLimits

0xd9ab,	// (0x0002c20e) main_cset6_slider_pane_t15

0x000b,

0xfaf2,	// (0x0002e355) main_cset6_slider_pane_t_ParamLimits

0xfaf2,	// (0x0002e355) main_cset6_slider_pane_t

0xd9e4,	// (0x0002c247) cset_slider_pane_g1_copy1

0xd9ed,	// (0x0002c250) cset_slider_pane_g2_copy1

0xd9f6,	// (0x0002c259) cset_slider_pane_g3_copy1

0x9bdf,	// (0x00028442) bg_popup_sub_pane_cp011_copy1

0xda08,	// (0x0002c26b) main_cset_text_pane_g1_copy1

0xd1ac,	// (0x0002ba0f) main_cset_text_pane_t1_copy1

0xd1ba,	// (0x0002ba1d) main_cset_text_pane_t2_copy1

0xd1c8,	// (0x0002ba2b) main_cset_text_pane_t3_copy1

0xd1d6,	// (0x0002ba39) main_cset_text_pane_t4_copy1

0xd1e4,	// (0x0002ba47) main_cset_text_pane_t5_copy1

0xda10,	// (0x0002c273) main_cset_text_pane_t6_copy1

0xda1e,	// (0x0002c281) main_cset_text_pane_t7_copy1

0x70bf,	// (0x00025922) main_cset_text2_pane_t1_copy1

0x12ab,	// (0x0001fb0e) main_ncimui_pane

0x1312,	// (0x0001fb75) popup_query_ncimui_window_ParamLimits

0x1312,	// (0x0001fb75) popup_query_ncimui_window

0xc8a2,	// (0x0002b105) field_cale_ev2_pane_g4_ParamLimits

0xc8a2,	// (0x0002b105) field_cale_ev2_pane_g4

0x5c75,	// (0x000244d8) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c75,	// (0x000244d8) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7dd,	// (0x0002e040) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7dd,	// (0x0002e040) cell_video_dialer_keypad_pane_g

0x5c8d,	// (0x000244f0) cell_video_dialer_keypad_pane_t1

0x9bdf,	// (0x00028442) bg_popup_window_pane_cp012

0xc168,	// (0x0002a9cb) heading_pane_cp06

0xda4a,	// (0x0002c2ad) ncim_query_content_pane

0x9bdf,	// (0x00028442) bg_popup_heading_pane_cp01

0xda52,	// (0x0002c2b5) ncim_heading_pane_t1

0xda60,	// (0x0002c2c3) ncim_indicator_popup_pane

0xda72,	// (0x0002c2d5) ncim_query_button_pane

0xda88,	// (0x0002c2eb) ncim_query_content_pane_t1

0xda9a,	// (0x0002c2fd) ncim_query_content_pane_t2

0x0005,

0xfb36,	// (0x0002e399) ncim_query_content_pane_t

0xdad4,	// (0x0002c337) ncim_query_list_pane

0xdae6,	// (0x0002c349) ncim_query_popup_pane

0xda60,	// (0x0002c2c3) ncim_indicator_popup_pane_ParamLimits

0x721b,	// (0x00025a7e) ncim_query_content_pane_g1_ParamLimits

0x721b,	// (0x00025a7e) ncim_query_content_pane_g1

0xda88,	// (0x0002c2eb) ncim_query_content_pane_t1_ParamLimits

0xda9a,	// (0x0002c2fd) ncim_query_content_pane_t2_ParamLimits

0x7227,	// (0x00025a8a) ncim_query_content_pane_t3_ParamLimits

0x7227,	// (0x00025a8a) ncim_query_content_pane_t3

0x7244,	// (0x00025aa7) ncim_query_content_pane_t4_ParamLimits

0x7244,	// (0x00025aa7) ncim_query_content_pane_t4

0x7261,	// (0x00025ac4) ncim_query_content_pane_t5_ParamLimits

0x7261,	// (0x00025ac4) ncim_query_content_pane_t5

0xdaac,	// (0x0002c30f) ncim_query_content_pane_t6_ParamLimits

0xdaac,	// (0x0002c30f) ncim_query_content_pane_t6

0xfb36,	// (0x0002e399) ncim_query_content_pane_t_ParamLimits

0xdad4,	// (0x0002c337) ncim_query_list_pane_ParamLimits

0xdae6,	// (0x0002c349) ncim_query_popup_pane_ParamLimits

0xdafa,	// (0x0002c35d) wait_bar_pane_cp04

0x9bdf,	// (0x00028442) input_focus_pane_cp011

0xdb02,	// (0x0002c365) ncim_query_popup_pane_t1

0xdb10,	// (0x0002c373) ncim_list_query_list_pane_ParamLimits

0xdb10,	// (0x0002c373) ncim_list_query_list_pane

0x9bdf,	// (0x00028442) bg_button_pane_cp027

0xdb23,	// (0x0002c386) ncim_query_button_pane_g1

0x9bdf,	// (0x00028442) list_highlight_pane_cp012

0xdb2d,	// (0x0002c390) ncim_list_query_list_pane_g1

0xdb35,	// (0x0002c398) ncim_list_query_list_pane_t1

0x1c67,	// (0x000204ca) cam4_indicators_pane_g3_ParamLimits

0x1c67,	// (0x000204ca) cam4_indicators_pane_g3

0x1d73,	// (0x000205d6) vid4_indicators_pane_g5_ParamLimits

0x1d73,	// (0x000205d6) vid4_indicators_pane_g5

0x224c,	// (0x00020aaf) vid4_progress_pane_g5_ParamLimits

0x224c,	// (0x00020aaf) vid4_progress_pane_g5

0x70f1,	// (0x00025954) main_ncimui_pane_g1

0x715d,	// (0x000259c0) ncimui_group_query_pane_ParamLimits

0x715d,	// (0x000259c0) ncimui_group_query_pane

0x71b7,	// (0x00025a1a) ncimui_list_pane_ParamLimits

0x71b7,	// (0x00025a1a) ncimui_list_pane

0x71de,	// (0x00025a41) ncimui_text_pane_ParamLimits

0x71de,	// (0x00025a41) ncimui_text_pane

0x727e,	// (0x00025ae1) ncimui_text_pane_t1_ParamLimits

0x727e,	// (0x00025ae1) ncimui_text_pane_t1

0xdb43,	// (0x0002c3a6) ncimui_list_single_graphic_pane_ParamLimits

0xdb43,	// (0x0002c3a6) ncimui_list_single_graphic_pane

0x729d,	// (0x00025b00) ncimui_query_pane_ParamLimits

0x729d,	// (0x00025b00) ncimui_query_pane

0x9bdf,	// (0x00028442) list_highlight_pane_cp013

0xdb53,	// (0x0002c3b6) ncim_list_query_list_pane_t1_copy1

0xdb2d,	// (0x0002c390) ncim_list_single_graphic_pane_g1

0x72b0,	// (0x00025b13) ncim_query_button_pane_cp01

0x72bc,	// (0x00025b1f) ncim_query_entry_pane_ParamLimits

0x72bc,	// (0x00025b1f) ncim_query_entry_pane

0x72cf,	// (0x00025b32) ncimui_query_pane_g1

0x72db,	// (0x00025b3e) ncimui_query_pane_t1_ParamLimits

0x72db,	// (0x00025b3e) ncimui_query_pane_t1

0xa2ae,	// (0x00028b11) input_focus_pane_cp012

0xdb61,	// (0x0002c3c4) ncim_query_entry_pane_t1

0xa387,	// (0x00028bea) main_im_pane_ParamLimits

0x12ab,	// (0x0001fb0e) main_mobtv_pane_ParamLimits

0x12ab,	// (0x0001fb0e) main_mobtv_pane

0x6f4e,	// (0x000257b1) main_cset6_slider_pane_g18_ParamLimits

0x6f4e,	// (0x000257b1) main_cset6_slider_pane_g18

0x6f5a,	// (0x000257bd) main_cset6_slider_pane_g19_ParamLimits

0x6f5a,	// (0x000257bd) main_cset6_slider_pane_g19

0xb7a1,	// (0x0002a004) bg_main_mobtv_pane_ParamLimits

0xb7a1,	// (0x0002a004) bg_main_mobtv_pane

0x72f4,	// (0x00025b57) main_mobtv_info_pane

0x72ff,	// (0x00025b62) main_mobtv_loading_pane_ParamLimits

0x72ff,	// (0x00025b62) main_mobtv_loading_pane

0xdb73,	// (0x0002c3d6) main_mobtv_pg_channel_list_pane

0xdb7d,	// (0x0002c3e0) main_mobtv_pg_hdr_pane

0x730c,	// (0x00025b6f) main_mobtv_programe_curr_pane_ParamLimits

0x730c,	// (0x00025b6f) main_mobtv_programe_curr_pane

0x7319,	// (0x00025b7c) main_mobtv_programe_next_pane_ParamLimits

0x7319,	// (0x00025b7c) main_mobtv_programe_next_pane

0xdb86,	// (0x0002c3e9) popup_mobtv_noti_window

0xa555,	// (0x00028db8) main_tv_pg_hdr_pane_g1

0xdb90,	// (0x0002c3f3) main_tv_pg_hdr_pane_g2

0xdb98,	// (0x0002c3fb) main_tv_pg_hdr_pane_g3

0xdba0,	// (0x0002c403) main_tv_pg_hdr_pane_g4

0xdba8,	// (0x0002c40b) main_tv_pg_hdr_pane_g5

0xdbb2,	// (0x0002c415) main_tv_pg_hdr_pane_g6

0xdbbc,	// (0x0002c41f) main_tv_pg_hdr_pane_g7

0xdbc6,	// (0x0002c429) main_tv_pg_hdr_pane_g8

0xdbd0,	// (0x0002c433) main_tv_pg_hdr_pane_g9

0xdbda,	// (0x0002c43d) main_tv_pg_hdr_pane_g10

0xdbe4,	// (0x0002c447) main_tv_pg_hdr_pane_g11

0x000a,

0xfb43,	// (0x0002e3a6) main_tv_pg_hdr_pane_g

0xdbee,	// (0x0002c451) main_tv_pg_hdr_pane_t1

0xdbfc,	// (0x0002c45f) main_tv_pg_hdr_pane_t2

0xdc0a,	// (0x0002c46d) main_tv_pg_hdr_pane_t3

0xdc1a,	// (0x0002c47d) main_tv_pg_hdr_pane_t4

0xdc2a,	// (0x0002c48d) main_tv_pg_hdr_pane_t5

0x0004,

0xfb5a,	// (0x0002e3bd) main_tv_pg_hdr_pane_t

0xdc3a,	// (0x0002c49d) single_mobtv_pg_channel_pane_ParamLimits

0xdc3a,	// (0x0002c49d) single_mobtv_pg_channel_pane

0xdc4c,	// (0x0002c4af) single_mobtv_pg_channel_table_pane

0xdc55,	// (0x0002c4b8) single_mobtv_pg_channel_thumb_pane

0xdc5e,	// (0x0002c4c1) single_tv_pg_channel_pane_g1

0xdc67,	// (0x0002c4ca) single_tv_pg_channel_pane_g2

0x0001,

0xfb65,	// (0x0002e3c8) single_tv_pg_channel_pane_g

0xa315,	// (0x00028b78) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xa315,	// (0x00028b78) bg_single_mobtv_pg_channel_thumb_pane

0xdc70,	// (0x0002c4d3) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdc70,	// (0x0002c4d3) single_mobtv_pg_channel_thumb_pane_g1

0xdc7e,	// (0x0002c4e1) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdc7e,	// (0x0002c4e1) single_mobtv_pg_channel_thumb_pane_g2

0xdc8a,	// (0x0002c4ed) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdc8a,	// (0x0002c4ed) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb6a,	// (0x0002e3cd) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb6a,	// (0x0002e3cd) single_mobtv_pg_channel_thumb_pane_g

0xdc96,	// (0x0002c4f9) single_mobtv_pg_channel_thumb_pane_t1

0xdca4,	// (0x0002c507) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb71,	// (0x0002e3d4) single_mobtv_pg_channel_thumb_pane_t

0xa555,	// (0x00028db8) bg_single_mobtv_pg_channel_table_pane_g1

0xa555,	// (0x00028db8) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf39d,	// (0x0002dc00) bg_single_mobtv_pg_channel_table_pane_g

0xdcb2,	// (0x0002c515) single_mobtv_pg_channel_table_pane_t1

0xdcc0,	// (0x0002c523) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb76,	// (0x0002e3d9) single_mobtv_pg_channel_table_pane_t

0x732e,	// (0x00025b91) main_mobtv_info_pane_g1_ParamLimits

0x732e,	// (0x00025b91) main_mobtv_info_pane_g1

0x734a,	// (0x00025bad) main_mobtv_info_pane_t1_ParamLimits

0x734a,	// (0x00025bad) main_mobtv_info_pane_t1

0x73c2,	// (0x00025c25) main_mobtv_info_pane_t2_ParamLimits

0x73c2,	// (0x00025c25) main_mobtv_info_pane_t2

0x0002,

0xfb80,	// (0x0002e3e3) main_mobtv_info_pane_t_ParamLimits

0xfb80,	// (0x0002e3e3) main_mobtv_info_pane_t

0x7453,	// (0x00025cb6) wait_bar_pane_cp05

0x7465,	// (0x00025cc8) main_mobtv_loading_pane_g1_ParamLimits

0x7465,	// (0x00025cc8) main_mobtv_loading_pane_g1

0x7471,	// (0x00025cd4) main_mobtv_loading_pane_g2_ParamLimits

0x7471,	// (0x00025cd4) main_mobtv_loading_pane_g2

0x747d,	// (0x00025ce0) main_mobtv_loading_pane_g3_ParamLimits

0x747d,	// (0x00025ce0) main_mobtv_loading_pane_g3

0x0002,

0xfb87,	// (0x0002e3ea) main_mobtv_loading_pane_g_ParamLimits

0xfb87,	// (0x0002e3ea) main_mobtv_loading_pane_g

0xdcce,	// (0x0002c531) main_mobtv_loading_pane_t1_ParamLimits

0xdcce,	// (0x0002c531) main_mobtv_loading_pane_t1

0xdce6,	// (0x0002c549) main_mobtv_loading_pane_t2_ParamLimits

0xdce6,	// (0x0002c549) main_mobtv_loading_pane_t2

0x0001,

0xfb8e,	// (0x0002e3f1) main_mobtv_loading_pane_t_ParamLimits

0xfb8e,	// (0x0002e3f1) main_mobtv_loading_pane_t

0x748b,	// (0x00025cee) wait_bar_pane_cp06_ParamLimits

0x748b,	// (0x00025cee) wait_bar_pane_cp06

0xdd0a,	// (0x0002c56d) main_mobtv_programe_curr_pane_t1

0xdd18,	// (0x0002c57b) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb93,	// (0x0002e3f6) main_mobtv_programe_curr_pane_t

0xdd26,	// (0x0002c589) main_mobtv_programe_next_pane_t1

0xdd34,	// (0x0002c597) main_mobtv_programe_next_pane_t2

0xdd42,	// (0x0002c5a5) main_mobtv_programe_next_pane_t3

0x0002,

0xfb98,	// (0x0002e3fb) main_mobtv_programe_next_pane_t

0x9bdf,	// (0x00028442) bg_popup_mobtv_noti_window_pane

0xdd50,	// (0x0002c5b3) popup_mobtv_noti_window_g1

0xdd58,	// (0x0002c5bb) popup_mobtv_noti_window_t1

0xdd66,	// (0x0002c5c9) popup_mobtv_noti_window_t2

0x0001,

0xfb9f,	// (0x0002e402) popup_mobtv_noti_window_t

0xa555,	// (0x00028db8) bg_popup_mobtv_noti_window_pane_g1

0x0de1,	// (0x0001f644) sc_clock_pane

0x0de1,	// (0x0001f644) main_fs_bigclock_pane

0x6b6a,	// (0x000253cd) blid2_tripm_pane_t4_ParamLimits

0x6b6a,	// (0x000253cd) blid2_tripm_pane_t4

0x7497,	// (0x00025cfa) sc_clock_pane_g1_ParamLimits

0x7497,	// (0x00025cfa) sc_clock_pane_g1

0x74a5,	// (0x00025d08) sc_clock_pane_t1_ParamLimits

0x74a5,	// (0x00025d08) sc_clock_pane_t1

0x74ba,	// (0x00025d1d) sc_clock_pane_t2_ParamLimits

0x74ba,	// (0x00025d1d) sc_clock_pane_t2

0x74cc,	// (0x00025d2f) sc_clock_pane_t3_ParamLimits

0x74cc,	// (0x00025d2f) sc_clock_pane_t3

0x0004,

0xfba4,	// (0x0002e407) sc_clock_pane_t_ParamLimits

0xfba4,	// (0x0002e407) sc_clock_pane_t

0x832c,	// (0x00026b8f) main_fs_bigclock_indicator_pane_ParamLimits

0x832c,	// (0x00026b8f) main_fs_bigclock_indicator_pane

0x755b,	// (0x00025dbe) main_fs_bigclock_pane_g1_ParamLimits

0x755b,	// (0x00025dbe) main_fs_bigclock_pane_g1

0x8338,	// (0x00026b9b) main_fs_bigclock_pane_t1_ParamLimits

0x8338,	// (0x00026b9b) main_fs_bigclock_pane_t1

0x834a,	// (0x00026bad) main_fs_bigclock_pane_t2_ParamLimits

0x834a,	// (0x00026bad) main_fs_bigclock_pane_t2

0x835e,	// (0x00026bc1) main_fs_bigclock_pane_t3_ParamLimits

0x835e,	// (0x00026bc1) main_fs_bigclock_pane_t3

0x0002,

0xfd29,	// (0x0002e58c) main_fs_bigclock_pane_t_ParamLimits

0xfd29,	// (0x0002e58c) main_fs_bigclock_pane_t

0xe72c,	// (0x0002cf8f) main_fs_bigclock_indicator_pane_g1

0xda7a,	// (0x0002c2dd) ncim_query_content_pane_g2_ParamLimits

0xda7a,	// (0x0002c2dd) ncim_query_content_pane_g2

0x0001,

0xfb31,	// (0x0002e394) ncim_query_content_pane_g_ParamLimits

0xfb31,	// (0x0002e394) ncim_query_content_pane_g

0x74de,	// (0x00025d41) sc_clock_pane_t4_ParamLimits

0x74de,	// (0x00025d41) sc_clock_pane_t4

0x12ab,	// (0x0001fb0e) main_radioblah_pane

0x1b31,	// (0x00020394) cell_call4_button_pane_t1_copy1_ParamLimits

0x1b31,	// (0x00020394) cell_call4_button_pane_t1_copy1

0x710d,	// (0x00025970) main_ncimui_pane_t1_ParamLimits

0x710d,	// (0x00025970) main_ncimui_pane_t1

0x7127,	// (0x0002598a) main_ncimui_pane_t2_ParamLimits

0x7127,	// (0x0002598a) main_ncimui_pane_t2

0x0002,

0xfb2a,	// (0x0002e38d) main_ncimui_pane_t_ParamLimits

0xfb2a,	// (0x0002e38d) main_ncimui_pane_t

0xdd74,	// (0x0002c5d7) main_radioblah_anim_pane_ParamLimits

0xdd74,	// (0x0002c5d7) main_radioblah_anim_pane

0xdd85,	// (0x0002c5e8) main_radioblah_info_pane_ParamLimits

0xdd85,	// (0x0002c5e8) main_radioblah_info_pane

0xdd99,	// (0x0002c5fc) main_radioblah_pane_t1_ParamLimits

0xdd99,	// (0x0002c5fc) main_radioblah_pane_t1

0xddb5,	// (0x0002c618) main_radioblah_pane_t2_ParamLimits

0xddb5,	// (0x0002c618) main_radioblah_pane_t2

0x0003,

0xfbc5,	// (0x0002e428) main_radioblah_pane_t_ParamLimits

0xfbc5,	// (0x0002e428) main_radioblah_pane_t

0x76fa,	// (0x00025f5d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x76fa,	// (0x00025f5d) main_radioblah_rocker_ctrl_pane

0xddfd,	// (0x0002c660) main_radioblah_info_pane_t1_ParamLimits

0xddfd,	// (0x0002c660) main_radioblah_info_pane_t1

0x7743,	// (0x00025fa6) main_radioblah_info_pane_t2_ParamLimits

0x7743,	// (0x00025fa6) main_radioblah_info_pane_t2

0x0003,

0xfbce,	// (0x0002e431) main_radioblah_info_pane_t_ParamLimits

0xfbce,	// (0x0002e431) main_radioblah_info_pane_t

0xa555,	// (0x00028db8) main_radioblah_rocker_ctrl_pane_g1

0x77f3,	// (0x00026056) main_radioblah_rocker_ctrl_pane_g2

0x77fb,	// (0x0002605e) main_radioblah_rocker_ctrl_pane_g3

0x7803,	// (0x00026066) main_radioblah_rocker_ctrl_pane_g4

0x780b,	// (0x0002606e) main_radioblah_rocker_ctrl_pane_g5

0x7813,	// (0x00026076) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbd7,	// (0x0002e43a) main_radioblah_rocker_ctrl_pane_g

0x70bf,	// (0x00025922) main_cset_text2_pane_t1_copy1_ParamLimits

0x1bba,	// (0x0002041d) cam4_image_uncrop_qvga_pane

0x1cd9,	// (0x0002053c) vid4_image_uncrop_qcif_pane

0x2300,	// (0x00020b63) cam6_image_uncrop_qvga_pane_ParamLimits

0x2300,	// (0x00020b63) cam6_image_uncrop_qvga_pane

0xd72d,	// (0x0002bf90) vid6_image_uncrop_qcif_pane_ParamLimits

0xd72d,	// (0x0002bf90) vid6_image_uncrop_qcif_pane

0x9bdf,	// (0x00028442) bg_popup_preview_window_pane_cp03

0xda2c,	// (0x0002c28f) list_cset_text2_pane

0xda34,	// (0x0002c297) main_cset6_text2_pane_g1

0xda3c,	// (0x0002c29f) main_cset6_text2_pane_t1

0x781b,	// (0x0002607e) list_cset_text2_pane_t1_ParamLimits

0x781b,	// (0x0002607e) list_cset_text2_pane_t1

0x12ab,	// (0x0001fb0e) main_radioblah_pane_ParamLimits

0x743f,	// (0x00025ca2) main_mobtv_info_pane_t3_ParamLimits

0x743f,	// (0x00025ca2) main_mobtv_info_pane_t3

0x76e8,	// (0x00025f4b) main_radioblah_pane_g1

0x7713,	// (0x00025f76) main_radioblah_info_pane_g1

0x7798,	// (0x00025ffb) main_radioblah_info_pane_t3_ParamLimits

0x7798,	// (0x00025ffb) main_radioblah_info_pane_t3

0x3dc3,	// (0x00022626) highlight_cell_cale_month_pane_ParamLimits

0x3dc3,	// (0x00022626) highlight_cell_cale_month_pane

0x0de1,	// (0x0001f644) main_phob_fisheye_pane

0xc917,	// (0x0002b17a) scroll_pane_cp0031_ParamLimits

0xc917,	// (0x0002b17a) scroll_pane_cp0031

0xd86b,	// (0x0002c0ce) wait_bar_pane_cp08_ParamLimits

0x6e4a,	// (0x000256ad) cset_list_set_pane_copy1_ParamLimits

0xde37,	// (0x0002c69a) highlight_cell_cale_month_pane_g1

0x7832,	// (0x00026095) highlight_cell_cale_month_pane_t1

0xd474,	// (0x0002bcd7) list_gen_pane_cp01

0xd03e,	// (0x0002b8a1) scroll_pane_01

0x7840,	// (0x000260a3) list_single_double_fisheye_pane

0x7849,	// (0x000260ac) list_double_fisheye_pane_g1_ParamLimits

0x7849,	// (0x000260ac) list_double_fisheye_pane_g1

0x7855,	// (0x000260b8) list_double_fisheye_pane_g2_ParamLimits

0x7855,	// (0x000260b8) list_double_fisheye_pane_g2

0x7869,	// (0x000260cc) list_double_fisheye_pane_g3_ParamLimits

0x7869,	// (0x000260cc) list_double_fisheye_pane_g3

0x0004,

0xfbe4,	// (0x0002e447) list_double_fisheye_pane_g_ParamLimits

0xfbe4,	// (0x0002e447) list_double_fisheye_pane_g

0x7892,	// (0x000260f5) list_double_fisheye_pane_t1_ParamLimits

0x7892,	// (0x000260f5) list_double_fisheye_pane_t1

0x78ad,	// (0x00026110) list_double_fisheye_pane_t2_ParamLimits

0x78ad,	// (0x00026110) list_double_fisheye_pane_t2

0x0001,

0xfbef,	// (0x0002e452) list_double_fisheye_pane_t_ParamLimits

0xfbef,	// (0x0002e452) list_double_fisheye_pane_t

0x0de1,	// (0x0001f644) main_call5_pane

0x7504,	// (0x00025d67) sc_swipe_pane_ParamLimits

0x7504,	// (0x00025d67) sc_swipe_pane

0x78db,	// (0x0002613e) call5_image_pane_ParamLimits

0x78db,	// (0x0002613e) call5_image_pane

0x78ed,	// (0x00026150) call5_swipe_1_pane_ParamLimits

0x78ed,	// (0x00026150) call5_swipe_1_pane

0x78f9,	// (0x0002615c) call5_swipe_2_pane_ParamLimits

0x78f9,	// (0x0002615c) call5_swipe_2_pane

0x7913,	// (0x00026176) popup_call5_audio_first_window_ParamLimits

0x7913,	// (0x00026176) popup_call5_audio_first_window

0xa315,	// (0x00028b78) call5_swipe_1_pane_g1_ParamLimits

0xa315,	// (0x00028b78) call5_swipe_1_pane_g1

0xde3f,	// (0x0002c6a2) call5_swipe_1_pane_g2_ParamLimits

0xde3f,	// (0x0002c6a2) call5_swipe_1_pane_g2

0x0001,

0xfbf4,	// (0x0002e457) call5_swipe_1_pane_g_ParamLimits

0xfbf4,	// (0x0002e457) call5_swipe_1_pane_g

0xde4b,	// (0x0002c6ae) call5_swipe_1_pane_t1_ParamLimits

0xde4b,	// (0x0002c6ae) call5_swipe_1_pane_t1

0xa315,	// (0x00028b78) call5_swipe_2_pane_g1_ParamLimits

0xa315,	// (0x00028b78) call5_swipe_2_pane_g1

0xde60,	// (0x0002c6c3) call5_swipe_2_pane_g2_ParamLimits

0xde60,	// (0x0002c6c3) call5_swipe_2_pane_g2

0x0001,

0xfbf9,	// (0x0002e45c) call5_swipe_2_pane_g_ParamLimits

0xfbf9,	// (0x0002e45c) call5_swipe_2_pane_g

0xde6c,	// (0x0002c6cf) call5_swipe_2_pane_t1_ParamLimits

0xde6c,	// (0x0002c6cf) call5_swipe_2_pane_t1

0xde81,	// (0x0002c6e4) sc_swipe_pane_g1_ParamLimits

0xde81,	// (0x0002c6e4) sc_swipe_pane_g1

0xde8e,	// (0x0002c6f1) sc_swipe_pane_g2_ParamLimits

0xde8e,	// (0x0002c6f1) sc_swipe_pane_g2

0x0001,

0x089c,	// (0x0001f0ff) sc_swipe_pane_g_ParamLimits

0x089c,	// (0x0001f0ff) sc_swipe_pane_g

0xde9a,	// (0x0002c6fd) sc_swipe_pane_t1_ParamLimits

0xde9a,	// (0x0002c6fd) sc_swipe_pane_t1

0x0de1,	// (0x0001f644) main_cmail_launcher_pane

0x7923,	// (0x00026186) aid_size_cell_cmail_l_ParamLimits

0x7923,	// (0x00026186) aid_size_cell_cmail_l

0x7931,	// (0x00026194) grid_cmail_l_pane_ParamLimits

0x7931,	// (0x00026194) grid_cmail_l_pane

0x793f,	// (0x000261a2) cell_cmail_l_pane_ParamLimits

0x793f,	// (0x000261a2) cell_cmail_l_pane

0x795a,	// (0x000261bd) cell_cmail_l_pane_g1_ParamLimits

0x795a,	// (0x000261bd) cell_cmail_l_pane_g1

0x7966,	// (0x000261c9) cell_cmail_l_pane_t1_ParamLimits

0x7966,	// (0x000261c9) cell_cmail_l_pane_t1

0x797c,	// (0x000261df) cell_cmail_l_pane_t2_ParamLimits

0x797c,	// (0x000261df) cell_cmail_l_pane_t2

0x0001,

0xfbfe,	// (0x0002e461) cell_cmail_l_pane_t_ParamLimits

0xfbfe,	// (0x0002e461) cell_cmail_l_pane_t

0xa2ae,	// (0x00028b11) grid_highlight_pane_cp018_ParamLimits

0xa2ae,	// (0x00028b11) grid_highlight_pane_cp018

0x0c44,	// (0x0001f4a7) main2_pane_ParamLimits

0x0c44,	// (0x0001f4a7) main2_pane

0xa416,	// (0x00028c79) popup_sp_fs_action_menu_bg_pane_g1

0xa41e,	// (0x00028c81) popup_sp_fs_action_menu_bg_pane_g2

0xa426,	// (0x00028c89) popup_sp_fs_action_menu_bg_pane_g3

0xa42e,	// (0x00028c91) popup_sp_fs_action_menu_bg_pane_g4

0xa436,	// (0x00028c99) popup_sp_fs_action_menu_bg_pane_g5

0xa43e,	// (0x00028ca1) popup_sp_fs_action_menu_bg_pane_g6

0xa446,	// (0x00028ca9) popup_sp_fs_action_menu_bg_pane_g7

0xa44e,	// (0x00028cb1) popup_sp_fs_action_menu_bg_pane_g8

0xa456,	// (0x00028cb9) popup_sp_fs_action_menu_bg_pane_g9

0xa45e,	// (0x00028cc1) popup_sp_fs_action_menu_bg_pane_g10

0xa45e,	// (0x00028cc1) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf105,	// (0x0002d968) popup_sp_fs_action_menu_bg_pane_g

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g3_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g3_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g3_g2

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g3_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g3_g3

0x0002,

0xf1b3,	// (0x0002da16) list_medium_line_x2_t3_g3_g_ParamLimits

0xf1b3,	// (0x0002da16) list_medium_line_x2_t3_g3_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g3_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g3_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g3_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g3_t2

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g3_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g3_t3

0x0002,

0xf1ba,	// (0x0002da1d) list_medium_line_x2_t3_g3_t_ParamLimits

0xf1ba,	// (0x0002da1d) list_medium_line_x2_t3_g3_t

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g2_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_x2_t3_g2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_x2_t3_g2_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g2_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g2_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g2_t2

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g2_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g2_t3

0x0002,

0xf1ba,	// (0x0002da1d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf1ba,	// (0x0002da1d) list_medium_line_x2_t3_g2_t

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g2

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g3

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g4_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002da29) list_medium_line_x2_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002da29) list_medium_line_x2_t4_g4_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t2

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t3

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t4_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002da32) list_medium_line_x2_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002da32) list_medium_line_x2_t4_g4_t

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g2

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g3

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g4_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g4_g4

0x0003,

0xf1c6,	// (0x0002da29) list_medium_line_x2_t2_g4_g_ParamLimits

0xf1c6,	// (0x0002da29) list_medium_line_x2_t2_g4_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g4_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g4_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g4_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g4_t2

0x0001,

0xf236,	// (0x0002da99) list_medium_line_x2_t2_g4_t_ParamLimits

0xf236,	// (0x0002da99) list_medium_line_x2_t2_g4_t

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g3_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g3_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g3_g2

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g3_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g3_g3

0x0002,

0xf1b3,	// (0x0002da16) list_medium_line_x2_t2_g3_g_ParamLimits

0xf1b3,	// (0x0002da16) list_medium_line_x2_t2_g3_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g3_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g3_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g3_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g3_t2

0x0001,

0xf236,	// (0x0002da99) list_medium_line_x2_t2_g3_t_ParamLimits

0xf236,	// (0x0002da99) list_medium_line_x2_t2_g3_t

0x3efb,	// (0x0002275e) main_sp_fs_list_pane_ParamLimits

0x3efb,	// (0x0002275e) main_sp_fs_list_pane

0x3f07,	// (0x0002276a) sp_fs_scroll_pane_ParamLimits

0x3f07,	// (0x0002276a) sp_fs_scroll_pane

0xaac4,	// (0x00029327) list_medium_line_x2_t3_t1

0xaac4,	// (0x00029327) list_medium_line_x2_t3_t2

0xaac4,	// (0x00029327) list_medium_line_x2_t3_t3

0x0002,

0xf281,	// (0x0002dae4) list_medium_line_x2_t3_t

0xaac4,	// (0x00029327) list_medium_line_x3_t4_t1

0xaac4,	// (0x00029327) list_medium_line_x3_t4_t2

0xaac4,	// (0x00029327) list_medium_line_x3_t4_t3

0xaac4,	// (0x00029327) list_medium_line_x3_t4_t4

0x0003,

0xf288,	// (0x0002daeb) list_medium_line_x3_t4_t

0xaac4,	// (0x00029327) list_medium_line_x4_t5_t1

0xaac4,	// (0x00029327) list_medium_line_x4_t5_t2

0xaac4,	// (0x00029327) list_medium_line_x4_t5_t3

0xaac4,	// (0x00029327) list_medium_line_x4_t5_t4

0xaac4,	// (0x00029327) list_medium_line_x4_t5_t5

0x0004,

0xf291,	// (0x0002daf4) list_medium_line_x4_t5_t

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g1

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g2

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g3

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g4_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002da29) list_medium_line_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002da29) list_medium_line_t4_g4_g

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t1

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t2

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t3

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t4_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002da32) list_medium_line_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002da32) list_medium_line_t4_g4_t

0x3f91,	// (0x000227f4) chi_dic_find_pane_g1

0x12c7,	// (0x0001fb2a) main_tport_pane

0xaac4,	// (0x00029327) list_medium_line_plain_t1

0xa315,	// (0x00028b78) list_medium_line_t2_g2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t2_g2_g1

0xa315,	// (0x00028b78) list_medium_line_t2_g2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t2_g2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_t2_g2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_t2_g2_g

0xa56f,	// (0x00028dd2) list_medium_line_t2_g2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t2_g2_t1

0xa56f,	// (0x00028dd2) list_medium_line_t2_g2_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t2_g2_t2

0x0001,

0xf236,	// (0x0002da99) list_medium_line_t2_g2_t_ParamLimits

0xf236,	// (0x0002da99) list_medium_line_t2_g2_t

0xd47d,	// (0x0002bce0) aid_sp_fs_list_icon_a_sm

0xd485,	// (0x0002bce8) aid_sp_fs_list_icon_d

0xd48d,	// (0x0002bcf0) aid_sp_fs_text_primary

0xd496,	// (0x0002bcf9) aid_sp_fs_text_secondary

0x9bdf,	// (0x00028442) list_medium_line

0x9bdf,	// (0x00028442) list_medium_line_g2

0x9bdf,	// (0x00028442) list_medium_line_g3

0x9bdf,	// (0x00028442) list_medium_line_plain

0x9bdf,	// (0x00028442) list_medium_line_plain_t2

0x9bdf,	// (0x00028442) list_medium_line_plain_t3

0x9bdf,	// (0x00028442) list_medium_line_right_icon

0x9bdf,	// (0x00028442) list_medium_line_right_iconx2

0x9bdf,	// (0x00028442) list_medium_line_t2

0x9bdf,	// (0x00028442) list_medium_line_t2_g2

0x9bdf,	// (0x00028442) list_medium_line_t2_g3

0x9bdf,	// (0x00028442) list_medium_line_t2_right_icon

0x9bdf,	// (0x00028442) list_medium_line_t2_right_iconx2

0x9bdf,	// (0x00028442) list_medium_line_t3

0x9bdf,	// (0x00028442) list_medium_line_t3_g2

0x9bdf,	// (0x00028442) list_medium_line_t3_g3

0x9bdf,	// (0x00028442) list_medium_line_t3_right_iconx2

0x9bdf,	// (0x00028442) list_medium_line_t4_g4

0x9bdf,	// (0x00028442) list_medium_line_x2

0x9bdf,	// (0x00028442) list_medium_line_x2_t2_g2

0x9bdf,	// (0x00028442) list_medium_line_x2_t2_g3

0x9bdf,	// (0x00028442) list_medium_line_x2_t2_g4

0x9bdf,	// (0x00028442) list_medium_line_x2_t3

0x9bdf,	// (0x00028442) list_medium_line_x2_t3_g2

0x9bdf,	// (0x00028442) list_medium_line_x2_t3_g3

0x9bdf,	// (0x00028442) list_medium_line_x2_t3_g4

0x9bdf,	// (0x00028442) list_medium_line_x2_t4_g2

0x9bdf,	// (0x00028442) list_medium_line_x2_t4_g4

0x9bdf,	// (0x00028442) list_medium_line_x3

0x9bdf,	// (0x00028442) list_medium_line_x3_t4

0x9bdf,	// (0x00028442) list_medium_line_x3_t4_g4

0x9bdf,	// (0x00028442) list_medium_line_x4_t4

0x9bdf,	// (0x00028442) list_medium_line_x4_t4_g7

0x9bdf,	// (0x00028442) list_medium_line_x4_t5

0x69f5,	// (0x00025258) list_single_fs_dyc_pane_ParamLimits

0x69f5,	// (0x00025258) list_single_fs_dyc_pane

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g1

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g2

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g3

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g4_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g4

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g5_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g5

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g6_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x4_t4_g7_g6

0xa323,	// (0x00028b86) list_medium_line_x4_t4_g7_g7_ParamLimits

0xa323,	// (0x00028b86) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb0b,	// (0x0002e36e) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb0b,	// (0x0002e36e) list_medium_line_x4_t4_g7_g

0xa56f,	// (0x00028dd2) list_medium_line_x4_t4_g7_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x4_t4_g7_t1

0xa56f,	// (0x00028dd2) list_medium_line_x4_t4_g7_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x4_t4_g7_t2

0xa56f,	// (0x00028dd2) list_medium_line_x4_t4_g7_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x4_t4_g7_t3

0xae99,	// (0x000296fc) list_medium_line_x4_t4_g7_t4_ParamLimits

0xae99,	// (0x000296fc) list_medium_line_x4_t4_g7_t4

0xae99,	// (0x000296fc) list_medium_line_x4_t4_g7_t5_ParamLimits

0xae99,	// (0x000296fc) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb1a,	// (0x0002e37d) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb1a,	// (0x0002e37d) list_medium_line_x4_t4_g7_t

0x70a2,	// (0x00025905) list_single_dyc_row_pane_ParamLimits

0x70a2,	// (0x00025905) list_single_dyc_row_pane

0x78cf,	// (0x00026132) call5_gesture_pane_ParamLimits

0x78cf,	// (0x00026132) call5_gesture_pane

0x7905,	// (0x00026168) call5_windows_pane_ParamLimits

0x7905,	// (0x00026168) call5_windows_pane

0x7999,	// (0x000261fc) call5_swipe_1_pane_cp_ParamLimits

0x7999,	// (0x000261fc) call5_swipe_1_pane_cp

0x79a5,	// (0x00026208) call5_swipe_2_pane_cp_ParamLimits

0x79a5,	// (0x00026208) call5_swipe_2_pane_cp

0xa533,	// (0x00028d96) call5_image_pane_cp

0x79b1,	// (0x00026214) popup_call5_audio_first_window_cp_ParamLimits

0x79b1,	// (0x00026214) popup_call5_audio_first_window_cp

0xde81,	// (0x0002c6e4) call5_swipe_1_pane_g1_cp_ParamLimits

0xde81,	// (0x0002c6e4) call5_swipe_1_pane_g1_cp

0xded7,	// (0x0002c73a) call5_swipe_1_pane_g2_cp

0xde9a,	// (0x0002c6fd) call5_swipe_1_pane_t1_cp_ParamLimits

0xde9a,	// (0x0002c6fd) call5_swipe_1_pane_t1_cp

0xde81,	// (0x0002c6e4) call5_swipe_2_pane_g1_cp_ParamLimits

0xde81,	// (0x0002c6e4) call5_swipe_2_pane_g1_cp

0xdedf,	// (0x0002c742) call5_swipe_2_pane_g2_cp

0xdee7,	// (0x0002c74a) call5_swipe_2_pane_t1_cp_ParamLimits

0xdee7,	// (0x0002c74a) call5_swipe_2_pane_t1_cp

0xa2ae,	// (0x00028b11) main_sp_fs_email_pane

0xd19b,	// (0x0002b9fe) main_sp_fs_listscroll_pane_te

0x79bf,	// (0x00026222) popup_sp_fs_action_menu_pane_ParamLimits

0x79bf,	// (0x00026222) popup_sp_fs_action_menu_pane

0xa555,	// (0x00028db8) bg_sp_fs_ctrlbar_pane_g1

0xdefc,	// (0x0002c75f) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf05,	// (0x0002c768) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xdf0e,	// (0x0002c771) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xa555,	// (0x00028db8) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc03,	// (0x0002e466) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc068,	// (0x0002a8cb) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc068,	// (0x0002a8cb) bg_sp_fs_ctrlbar_ddmenu_pane

0xdf17,	// (0x0002c77a) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xdf17,	// (0x0002c77a) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xdf23,	// (0x0002c786) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xdf23,	// (0x0002c786) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc0c,	// (0x0002e46f) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc0c,	// (0x0002e46f) main_sp_fs_ctrlbar_ddmenu_pane_g

0xdf2f,	// (0x0002c792) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xdf2f,	// (0x0002c792) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xa555,	// (0x00028db8) list_medium_line_t2_right_icon_g1

0xaac4,	// (0x00029327) list_medium_line_t2_right_icon_t1

0xaac4,	// (0x00029327) list_medium_line_t2_right_icon_t2

0x0001,

0xfc11,	// (0x0002e474) list_medium_line_t2_right_icon_t

0xb77f,	// (0x00029fe2) bg_sp_fs_ctrlbar_pane_ParamLimits

0xb77f,	// (0x00029fe2) bg_sp_fs_ctrlbar_pane

0x7a5e,	// (0x000262c1) main_sp_fs_ctrlbar_button_pane_cp01

0x7a66,	// (0x000262c9) main_sp_fs_ctrlbar_ddmenu_pane

0xdf83,	// (0x0002c7e6) main_sp_fs_ctrlbar_pane_g1

0xdf8f,	// (0x0002c7f2) main_sp_fs_ctrlbar_pane_g2

0x0003,

0xfc16,	// (0x0002e479) main_sp_fs_ctrlbar_pane_g

0x7aa4,	// (0x00026307) main_sp_fs_ctrlbar_pane_t1

0x7ae1,	// (0x00026344) main_sp_fs_ctrlbar_pane

0x7afb,	// (0x0002635e) main_sp_fs_listscroll_pane_te_cp01

0x7b0c,	// (0x0002636f) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x7b0c,	// (0x0002636f) popup_sp_fs_action_menu_pane_cp01

0xa2ae,	// (0x00028b11) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa2ae,	// (0x00028b11) bg_sp_fs_highlight_list_pane_cp01

0xdfb6,	// (0x0002c819) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xdfb6,	// (0x0002c819) sp_fs_action_menu_list_gene_pane_g1

0xdfc5,	// (0x0002c828) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xdfc5,	// (0x0002c828) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc24,	// (0x0002e487) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc24,	// (0x0002e487) sp_fs_action_menu_list_gene_pane_g

0xdfd2,	// (0x0002c835) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xdfd2,	// (0x0002c835) sp_fs_action_menu_list_gene_pane_t1

0xdfea,	// (0x0002c84d) sp_fs_action_menu_list_gene_pane_ParamLimits

0xdfea,	// (0x0002c84d) sp_fs_action_menu_list_gene_pane

0xe00d,	// (0x0002c870) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe00d,	// (0x0002c870) popup_sp_fs_action_menu_bg_pane

0xe01b,	// (0x0002c87e) sp_fs_action_menu_list_pane_ParamLimits

0xe01b,	// (0x0002c87e) sp_fs_action_menu_list_pane

0x7b2c,	// (0x0002638f) sp_fs_scroll_pane_cp01_ParamLimits

0x7b2c,	// (0x0002638f) sp_fs_scroll_pane_cp01

0xaac4,	// (0x00029327) list_medium_line_plain_t2_t1

0xaac4,	// (0x00029327) list_medium_line_plain_t2_t2

0x0001,

0xfc11,	// (0x0002e474) list_medium_line_plain_t2_t

0xaac4,	// (0x00029327) list_medium_line_plain_t3_t1

0xaac4,	// (0x00029327) list_medium_line_plain_t3_t2

0xaac4,	// (0x00029327) list_medium_line_plain_t3_t3

0x0002,

0xf281,	// (0x0002dae4) list_medium_line_plain_t3_t

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g2_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t2_g2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_x2_t2_g2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_x2_t2_g2_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g2_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g2_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t2_g2_t2

0x0001,

0xf236,	// (0x0002da99) list_medium_line_x2_t2_g2_t_ParamLimits

0xf236,	// (0x0002da99) list_medium_line_x2_t2_g2_t

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g2_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t4_g2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_x2_t4_g2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_x2_t4_g2_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t2

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t3

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t4_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t4_g2_t4

0x0003,

0xf1cf,	// (0x0002da32) list_medium_line_x2_t4_g2_t_ParamLimits

0xf1cf,	// (0x0002da32) list_medium_line_x2_t4_g2_t

0xa555,	// (0x00028db8) list_medium_line_t3_right_iconx2_g1

0xa555,	// (0x00028db8) list_medium_line_t3_right_iconx2_g2

0xa555,	// (0x00028db8) list_medium_line_t3_right_iconx2_g3

0x0002,

0xf3a2,	// (0x0002dc05) list_medium_line_t3_right_iconx2_g

0xaac4,	// (0x00029327) list_medium_line_t3_right_iconx2_t1

0xaac4,	// (0x00029327) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc11,	// (0x0002e474) list_medium_line_t3_right_iconx2_t

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g1

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g2

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g3

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g4_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x3_t4_g4_g4

0x0003,

0xf1c6,	// (0x0002da29) list_medium_line_x3_t4_g4_g_ParamLimits

0xf1c6,	// (0x0002da29) list_medium_line_x3_t4_g4_g

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t1

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t2

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t3

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t4_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x3_t4_g4_t4

0x0003,

0xf1cf,	// (0x0002da32) list_medium_line_x3_t4_g4_t_ParamLimits

0xf1cf,	// (0x0002da32) list_medium_line_x3_t4_g4_t

0x7b52,	// (0x000263b5) list_single_dyc_row_text_pane_t1_ParamLimits

0x7b52,	// (0x000263b5) list_single_dyc_row_text_pane_t1

0x7b91,	// (0x000263f4) list_single_dyc_row_text_pane_t2_ParamLimits

0x7b91,	// (0x000263f4) list_single_dyc_row_text_pane_t2

0xe03f,	// (0x0002c8a2) list_single_dyc_row_text_pane_t3_ParamLimits

0xe03f,	// (0x0002c8a2) list_single_dyc_row_text_pane_t3

0x0005,

0xfc29,	// (0x0002e48c) list_single_dyc_row_text_pane_t_ParamLimits

0xfc29,	// (0x0002e48c) list_single_dyc_row_text_pane_t

0xe063,	// (0x0002c8c6) list_single_dyc_row_pane_g1_ParamLimits

0xe063,	// (0x0002c8c6) list_single_dyc_row_pane_g1

0xe06f,	// (0x0002c8d2) list_single_dyc_row_pane_g2_ParamLimits

0xe06f,	// (0x0002c8d2) list_single_dyc_row_pane_g2

0xe07b,	// (0x0002c8de) list_single_dyc_row_pane_g3_ParamLimits

0xe07b,	// (0x0002c8de) list_single_dyc_row_pane_g3

0xe087,	// (0x0002c8ea) list_single_dyc_row_pane_g4_ParamLimits

0xe087,	// (0x0002c8ea) list_single_dyc_row_pane_g4

0x0003,

0xfc36,	// (0x0002e499) list_single_dyc_row_pane_g_ParamLimits

0xfc36,	// (0x0002e499) list_single_dyc_row_pane_g

0xe093,	// (0x0002c8f6) list_single_dyc_row_text_pane_ParamLimits

0xe093,	// (0x0002c8f6) list_single_dyc_row_text_pane

0x9bdf,	// (0x00028442) bg_sp_fs_scroll_pane

0xe0b2,	// (0x0002c915) thumb_sp_fs_scroll_pane

0xa315,	// (0x00028b78) list_medium_line_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_g1

0xa56f,	// (0x00028dd2) list_medium_line_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t1

0xa315,	// (0x00028b78) list_medium_line_x2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_g1

0xa315,	// (0x00028b78) list_medium_line_x2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_x2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_x2_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t1

0xa315,	// (0x00028b78) list_medium_line_x3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x3_g1

0xdec9,	// (0x0002c72c) list_medium_line_x3_g2_ParamLimits

0xdec9,	// (0x0002c72c) list_medium_line_x3_g2

0x0001,

0xfc3f,	// (0x0002e4a2) list_medium_line_x3_g_ParamLimits

0xfc3f,	// (0x0002e4a2) list_medium_line_x3_g

0xe0bb,	// (0x0002c91e) list_medium_line_x3_t1_ParamLimits

0xe0bb,	// (0x0002c91e) list_medium_line_x3_t1

0xe0cf,	// (0x0002c932) thumb_sp_fs_scroll_pane_g1

0xe0d8,	// (0x0002c93b) thumb_sp_fs_scroll_pane_g2

0xe0e1,	// (0x0002c944) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x0002e4a7) thumb_sp_fs_scroll_pane_g

0xe0cf,	// (0x0002c932) bg_sp_fs_scroll_pane_g1

0xe0d8,	// (0x0002c93b) bg_sp_fs_scroll_pane_g2

0xe0e1,	// (0x0002c944) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc44,	// (0x0002e4a7) bg_sp_fs_scroll_pane_g

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g1

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g2

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g3

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g4_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_x2_t3_g4_g4

0x0003,

0xf1c6,	// (0x0002da29) list_medium_line_x2_t3_g4_g_ParamLimits

0xf1c6,	// (0x0002da29) list_medium_line_x2_t3_g4_g

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g4_t1

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g4_t2

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g4_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_x2_t3_g4_t3

0x0002,

0xf1ba,	// (0x0002da1d) list_medium_line_x2_t3_g4_t_ParamLimits

0xf1ba,	// (0x0002da1d) list_medium_line_x2_t3_g4_t

0xa315,	// (0x00028b78) list_medium_line_g2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_g2_g1

0xa315,	// (0x00028b78) list_medium_line_g2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_g2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_g2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_g2_g

0xa56f,	// (0x00028dd2) list_medium_line_g2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_g2_t1

0xa315,	// (0x00028b78) list_medium_line_t3_g2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t3_g2_g1

0xa315,	// (0x00028b78) list_medium_line_t3_g2_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t3_g2_g2

0x0001,

0xf1c1,	// (0x0002da24) list_medium_line_t3_g2_g_ParamLimits

0xf1c1,	// (0x0002da24) list_medium_line_t3_g2_g

0xa56f,	// (0x00028dd2) list_medium_line_t3_g2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_g2_t1

0xa56f,	// (0x00028dd2) list_medium_line_t3_g2_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_g2_t2

0xa56f,	// (0x00028dd2) list_medium_line_t3_g2_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_g2_t3

0x0002,

0xf1ba,	// (0x0002da1d) list_medium_line_t3_g2_t_ParamLimits

0xf1ba,	// (0x0002da1d) list_medium_line_t3_g2_t

0xa555,	// (0x00028db8) list_medium_line_right_icon_g1

0xaac4,	// (0x00029327) list_medium_line_right_icon_t1

0xa315,	// (0x00028b78) list_medium_line_t2_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t2_g1

0xa56f,	// (0x00028dd2) list_medium_line_t2_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t2_t1

0xa56f,	// (0x00028dd2) list_medium_line_t2_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t2_t2

0x0001,

0xf236,	// (0x0002da99) list_medium_line_t2_t_ParamLimits

0xf236,	// (0x0002da99) list_medium_line_t2_t

0xa315,	// (0x00028b78) list_medium_line_t3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t3_g1

0xa56f,	// (0x00028dd2) list_medium_line_t3_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_t1

0xa56f,	// (0x00028dd2) list_medium_line_t3_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_t2

0xa56f,	// (0x00028dd2) list_medium_line_t3_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_t3

0x0002,

0xf1ba,	// (0x0002da1d) list_medium_line_t3_t_ParamLimits

0xf1ba,	// (0x0002da1d) list_medium_line_t3_t

0xa315,	// (0x00028b78) list_medium_line_g3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_g3_g1

0xa315,	// (0x00028b78) list_medium_line_g3_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_g3_g2

0xa315,	// (0x00028b78) list_medium_line_g3_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_g3_g3

0x0002,

0xf1b3,	// (0x0002da16) list_medium_line_g3_g_ParamLimits

0xf1b3,	// (0x0002da16) list_medium_line_g3_g

0xa56f,	// (0x00028dd2) list_medium_line_g3_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_g3_t1

0xa315,	// (0x00028b78) list_medium_line_t2_g3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t2_g3_g1

0xa315,	// (0x00028b78) list_medium_line_t2_g3_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t2_g3_g2

0xa315,	// (0x00028b78) list_medium_line_t2_g3_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t2_g3_g3

0x0002,

0xf1b3,	// (0x0002da16) list_medium_line_t2_g3_g_ParamLimits

0xf1b3,	// (0x0002da16) list_medium_line_t2_g3_g

0xa56f,	// (0x00028dd2) list_medium_line_t2_g3_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t2_g3_t1

0xa56f,	// (0x00028dd2) list_medium_line_t2_g3_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t2_g3_t2

0x0001,

0xf236,	// (0x0002da99) list_medium_line_t2_g3_t_ParamLimits

0xf236,	// (0x0002da99) list_medium_line_t2_g3_t

0xa315,	// (0x00028b78) list_medium_line_t3_g3_g1_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t3_g3_g1

0xa315,	// (0x00028b78) list_medium_line_t3_g3_g2_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t3_g3_g2

0xa315,	// (0x00028b78) list_medium_line_t3_g3_g3_ParamLimits

0xa315,	// (0x00028b78) list_medium_line_t3_g3_g3

0x0002,

0xf1b3,	// (0x0002da16) list_medium_line_t3_g3_g_ParamLimits

0xf1b3,	// (0x0002da16) list_medium_line_t3_g3_g

0xa56f,	// (0x00028dd2) list_medium_line_t3_g3_t1_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_g3_t1

0xa56f,	// (0x00028dd2) list_medium_line_t3_g3_t2_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_g3_t2

0xa56f,	// (0x00028dd2) list_medium_line_t3_g3_t3_ParamLimits

0xa56f,	// (0x00028dd2) list_medium_line_t3_g3_t3

0x0002,

0xf1ba,	// (0x0002da1d) list_medium_line_t3_g3_t_ParamLimits

0xf1ba,	// (0x0002da1d) list_medium_line_t3_g3_t

0xa555,	// (0x00028db8) list_medium_line_right_iconx2_g1

0xa555,	// (0x00028db8) list_medium_line_right_iconx2_g2

0x0001,

0xf39d,	// (0x0002dc00) list_medium_line_right_iconx2_g

0xaac4,	// (0x00029327) list_medium_line_right_iconx2_t1

0xa555,	// (0x00028db8) list_medium_line_t2_right_iconx2_g1

0xa555,	// (0x00028db8) list_medium_line_t2_right_iconx2_g2

0x0001,

0xf39d,	// (0x0002dc00) list_medium_line_t2_right_iconx2_g

0xaac4,	// (0x00029327) list_medium_line_t2_right_iconx2_t1

0xaac4,	// (0x00029327) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfc11,	// (0x0002e474) list_medium_line_t2_right_iconx2_t

0xaac4,	// (0x00029327) list_medium_line_x4_t4_t1

0xaac4,	// (0x00029327) list_medium_line_x4_t4_t2

0xaac4,	// (0x00029327) list_medium_line_x4_t4_t3

0xaac4,	// (0x00029327) list_medium_line_x4_t4_t4

0x0003,

0xf288,	// (0x0002daeb) list_medium_line_x4_t4_t

0x7ce6,	// (0x00026549) tport_appsw_pane_ParamLimits

0x7ce6,	// (0x00026549) tport_appsw_pane

0x7cf4,	// (0x00026557) tport_contact_pane_ParamLimits

0x7cf4,	// (0x00026557) tport_contact_pane

0x7d04,	// (0x00026567) tport_listscroll_pane_ParamLimits

0x7d04,	// (0x00026567) tport_listscroll_pane

0x7d14,	// (0x00026577) cell_tport_appsw_pane_ParamLimits

0x7d14,	// (0x00026577) cell_tport_appsw_pane

0xa323,	// (0x00028b86) tport_appsw_pane_g1_ParamLimits

0xa323,	// (0x00028b86) tport_appsw_pane_g1

0x7d41,	// (0x000265a4) tport_contact_pane_g1

0x7d4a,	// (0x000265ad) tport_contact_pane_t1

0x7d58,	// (0x000265bb) tport_contact_pane_t2

0x0001,

0xfc4b,	// (0x0002e4ae) tport_contact_pane_t

0xe0ea,	// (0x0002c94d) list_tport_pane

0xe0f3,	// (0x0002c956) scroll_pane_cp_030

0x7d6e,	// (0x000265d1) cell_tport_appsw_pane_g1

0x7d7e,	// (0x000265e1) cell_tport_appsw_pane_t1

0x7d8c,	// (0x000265ef) grid_highlight_pane_cp019

0x7d94,	// (0x000265f7) list_tport_double_graphic_pane_ParamLimits

0x7d94,	// (0x000265f7) list_tport_double_graphic_pane

0xa2ae,	// (0x00028b11) list_highlight_pane_cp023_ParamLimits

0xa2ae,	// (0x00028b11) list_highlight_pane_cp023

0x7da1,	// (0x00026604) list_tport_double_graphic_pane_g1_ParamLimits

0x7da1,	// (0x00026604) list_tport_double_graphic_pane_g1

0x7dae,	// (0x00026611) list_tport_double_graphic_pane_t1_ParamLimits

0x7dae,	// (0x00026611) list_tport_double_graphic_pane_t1

0x7dc3,	// (0x00026626) list_tport_double_graphic_pane_t2_ParamLimits

0x7dc3,	// (0x00026626) list_tport_double_graphic_pane_t2

0x0001,

0xfc57,	// (0x0002e4ba) list_tport_double_graphic_pane_t_ParamLimits

0xfc57,	// (0x0002e4ba) list_tport_double_graphic_pane_t

0x9bdf,	// (0x00028442) main_cale_note_pane

0x1f2e,	// (0x00020791) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1f2e,	// (0x00020791) cell_vitu2_function_top_wide_pane_cp01

0x7453,	// (0x00025cb6) wait_bar_pane_cp05_ParamLimits

0xa2ae,	// (0x00028b11) listscroll_cmail_pane

0xe104,	// (0x0002c967) list_cmail_pane

0x7dd5,	// (0x00026638) list_cmail_body_pane

0x7def,	// (0x00026652) list_single_cmail_header_caption_pane

0x7e0f,	// (0x00026672) list_single_cmail_header_detail_pane_ParamLimits

0x7e0f,	// (0x00026672) list_single_cmail_header_detail_pane

0xe11b,	// (0x0002c97e) list_single_cmail_header_caption_pane_t1

0x7e45,	// (0x000266a8) list_single_cmail_header_detail_pane_g1_ParamLimits

0x7e45,	// (0x000266a8) list_single_cmail_header_detail_pane_g1

0xe132,	// (0x0002c995) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe132,	// (0x0002c995) list_single_cmail_header_detail_pane_g2

0x0002,

0xfc5c,	// (0x0002e4bf) list_single_cmail_header_detail_pane_g_ParamLimits

0xfc5c,	// (0x0002e4bf) list_single_cmail_header_detail_pane_g

0x7e5d,	// (0x000266c0) list_single_cmail_header_detail_pane_t1_ParamLimits

0x7e5d,	// (0x000266c0) list_single_cmail_header_detail_pane_t1

0x7e99,	// (0x000266fc) list_single_cmail_header_editor_pane_bg_ParamLimits

0x7e99,	// (0x000266fc) list_single_cmail_header_editor_pane_bg

0xdc67,	// (0x0002c4ca) list_cmail_body_pane_g1

0xe16f,	// (0x0002c9d2) list_cmail_body_pane_t1

0xcf0e,	// (0x0002b771) list_single_cmail_header_editor_pane_bg_g1

0xa796,	// (0x00028ff9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xcf1e,	// (0x0002b781) list_single_cmail_header_editor_pane_bg_g1_copy2

0xcf16,	// (0x0002b779) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd154,	// (0x0002b9b7) list_single_cmail_header_editor_pane_bg_g1_copy4

0xcf3e,	// (0x0002b7a1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xcf2e,	// (0x0002b791) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xcf36,	// (0x0002b799) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa776,	// (0x00028fd9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x7eb0,	// (0x00026713) calenote_gesture_pane_ParamLimits

0x7eb0,	// (0x00026713) calenote_gesture_pane

0x7eca,	// (0x0002672d) calenote_window_pane_ParamLimits

0x7eca,	// (0x0002672d) calenote_window_pane

0xe17d,	// (0x0002c9e0) popup_note_window_cp01

0x7ee2,	// (0x00026745) calenote_swipe_1_pane_ParamLimits

0x7ee2,	// (0x00026745) calenote_swipe_1_pane

0x79a5,	// (0x00026208) calenote_swipe_2_pane_ParamLimits

0x79a5,	// (0x00026208) calenote_swipe_2_pane

0xde81,	// (0x0002c6e4) calenote_swipe_1_pane_g1_ParamLimits

0xde81,	// (0x0002c6e4) calenote_swipe_1_pane_g1

0xde8e,	// (0x0002c6f1) calenote_swipe_1_pane_g2_ParamLimits

0xde8e,	// (0x0002c6f1) calenote_swipe_1_pane_g2

0x0001,

0x089c,	// (0x0001f0ff) calenote_swipe_1_pane_g_ParamLimits

0x089c,	// (0x0001f0ff) calenote_swipe_1_pane_g

0xe18f,	// (0x0002c9f2) calenote_swipe_1_pane_t1_ParamLimits

0xe18f,	// (0x0002c9f2) calenote_swipe_1_pane_t1

0xde81,	// (0x0002c6e4) calenote_swipe_2_pane_g1_ParamLimits

0xde81,	// (0x0002c6e4) calenote_swipe_2_pane_g1

0xe1ae,	// (0x0002ca11) calenote_swipe_2_pane_g2_ParamLimits

0xe1ae,	// (0x0002ca11) calenote_swipe_2_pane_g2

0x0001,

0xfc68,	// (0x0002e4cb) calenote_swipe_2_pane_g_ParamLimits

0xfc68,	// (0x0002e4cb) calenote_swipe_2_pane_g

0xe1ba,	// (0x0002ca1d) calenote_swipe_2_pane_t1_ParamLimits

0xe1ba,	// (0x0002ca1d) calenote_swipe_2_pane_t1

0x9bdf,	// (0x00028442) main_mup_navstr_pane

0x56ef,	// (0x00023f52) main_mup3_pane_t7_ParamLimits

0x56ef,	// (0x00023f52) main_mup3_pane_t7

0x1752,	// (0x0001ffb5) main_mp4_pane_g6_ParamLimits

0x1752,	// (0x0001ffb5) main_mp4_pane_g6

0x1a61,	// (0x000202c4) main_image3_pane_t4_ParamLimits

0x1a61,	// (0x000202c4) main_image3_pane_t4

0x7ef5,	// (0x00026758) popup_navstr_preview_pane_ParamLimits

0x7ef5,	// (0x00026758) popup_navstr_preview_pane

0x7f01,	// (0x00026764) scroll_navstr_pane_ParamLimits

0x7f01,	// (0x00026764) scroll_navstr_pane

0x9bdf,	// (0x00028442) bg_popup_preview_window_pane_cp04

0xe1e1,	// (0x0002ca44) popup_navstr_preview_pane_t1

0x7f0d,	// (0x00026770) scroll_navstr_pane_g1_ParamLimits

0x7f0d,	// (0x00026770) scroll_navstr_pane_g1

0x7f1a,	// (0x0002677d) scroll_navstr_pane_t1_ParamLimits

0x7f1a,	// (0x0002677d) scroll_navstr_pane_t1

0xe186,	// (0x0002c9e9) bg_button_pane_cp014

0xe186,	// (0x0002c9e9) bg_button_pane_cp030

0x7875,	// (0x000260d8) list_double_fisheye_pane_g4_ParamLimits

0x7875,	// (0x000260d8) list_double_fisheye_pane_g4

0x7881,	// (0x000260e4) list_double_fisheye_pane_g5_ParamLimits

0x7881,	// (0x000260e4) list_double_fisheye_pane_g5

0xd827,	// (0x0002c08a) sp_fs_scroll_pane_cp03

0xdf83,	// (0x0002c7e6) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xdf8f,	// (0x0002c7f2) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc16,	// (0x0002e479) main_sp_fs_ctrlbar_pane_g_ParamLimits

0x7aa4,	// (0x00026307) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe113,	// (0x0002c976) sp_fs_scroll_pane_cp02

0xa48f,	// (0x00028cf2) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa48f,	// (0x00028cf2) popup_sp_fs_calendar_preview_list_single_pane

0x9bdf,	// (0x00028442) main_cam6_pano_pane

0x12ab,	// (0x0001fb0e) main_mup3_pane_ParamLimits

0x9bdf,	// (0x00028442) main_phacti_pane

0x7326,	// (0x00025b89) bg_button_pane_cp11

0x733e,	// (0x00025ba1) main_mobtv_info_pane_g2_ParamLimits

0x733e,	// (0x00025ba1) main_mobtv_info_pane_g2

0x0001,

0xfb7b,	// (0x0002e3de) main_mobtv_info_pane_g_ParamLimits

0xfb7b,	// (0x0002e3de) main_mobtv_info_pane_g

0x74f0,	// (0x00025d53) sc_clock_pane_t5_ParamLimits

0x74f0,	// (0x00025d53) sc_clock_pane_t5

0x76e8,	// (0x00025f4b) main_radioblah_pane_g1_ParamLimits

0xddcd,	// (0x0002c630) main_radioblah_pane_t3_ParamLimits

0xddcd,	// (0x0002c630) main_radioblah_pane_t3

0xdde5,	// (0x0002c648) main_radioblah_pane_t4_ParamLimits

0xdde5,	// (0x0002c648) main_radioblah_pane_t4

0x7706,	// (0x00025f69) main_radioblah_text_pane_ParamLimits

0x7706,	// (0x00025f69) main_radioblah_text_pane

0x7713,	// (0x00025f76) main_radioblah_info_pane_g1_ParamLimits

0x77ac,	// (0x0002600f) main_radioblah_info_pane_t4_ParamLimits

0x77ac,	// (0x0002600f) main_radioblah_info_pane_t4

0xa2ae,	// (0x00028b11) main_sp_fs_calendar_pane

0x7f2c,	// (0x0002678f) main_phacti_pane_g1

0x7f34,	// (0x00026797) phacti_note_pane_ParamLimits

0x7f34,	// (0x00026797) phacti_note_pane

0xe1f8,	// (0x0002ca5b) phacti_term_pane_ParamLimits

0xe1f8,	// (0x0002ca5b) phacti_term_pane

0xe20d,	// (0x0002ca70) phacti_note_pane_t1_ParamLimits

0xe20d,	// (0x0002ca70) phacti_note_pane_t1

0xe224,	// (0x0002ca87) phacti_term_pane_g1

0xe22c,	// (0x0002ca8f) phacti_term_pane_t1_ParamLimits

0xe22c,	// (0x0002ca8f) phacti_term_pane_t1

0xe256,	// (0x0002cab9) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe25e,	// (0x0002cac1) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfc72,	// (0x0002e4d5) popup_sp_fs_calendar_preview_list_single_pane_g

0xe266,	// (0x0002cac9) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe266,	// (0x0002cac9) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe27c,	// (0x0002cadf) aid_popup_sp_fs_bg_corner_pane

0xa555,	// (0x00028db8) popup_sp_fs_calendar_preview_bg_pane_g1

0x9bdf,	// (0x00028442) popup_sp_fs_calendar_preview_bg_pane

0xe284,	// (0x0002cae7) popup_sp_fs_calendar_preview_list_pane

0xb77f,	// (0x00029fe2) bg_main_sp_fs_cale_pane_ParamLimits

0xb77f,	// (0x00029fe2) bg_main_sp_fs_cale_pane

0xe295,	// (0x0002caf8) listscroll_cale_mrui_pane_ParamLimits

0xe295,	// (0x0002caf8) listscroll_cale_mrui_pane

0xe2aa,	// (0x0002cb0d) listscroll_sp_fs_schedule_track_pane

0xe2b3,	// (0x0002cb16) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe2b3,	// (0x0002cb16) main_sp_fs_ctrlbar_pane_cp01

0xe2c6,	// (0x0002cb29) main_sp_fs_ribbon_pane

0xe2ce,	// (0x0002cb31) popup_sp_fs_cale_preview_window

0x7f97,	// (0x000267fa) list_single_sp_fs_schedule_track_pane_ParamLimits

0x7f97,	// (0x000267fa) list_single_sp_fs_schedule_track_pane

0xa307,	// (0x00028b6a) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa307,	// (0x00028b6a) bg_sp_fs_highlight_list_pane_cp03

0x7fae,	// (0x00026811) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x7fae,	// (0x00026811) list_single_sp_fs_schedule_track_pane_g1

0x7fba,	// (0x0002681d) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x7fba,	// (0x0002681d) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfc77,	// (0x0002e4da) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfc77,	// (0x0002e4da) list_single_sp_fs_schedule_track_pane_g

0x7fc6,	// (0x00026829) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x7fc6,	// (0x00026829) list_single_sp_fs_schedule_track_pane_t1

0x7fe4,	// (0x00026847) sp_fs_schedule_track_pane_ParamLimits

0x7fe4,	// (0x00026847) sp_fs_schedule_track_pane

0xe2e0,	// (0x0002cb43) sp_fs_schedule_track_pane_g1

0xe2e8,	// (0x0002cb4b) sp_fs_schedule_track_pane_g2

0xe2f0,	// (0x0002cb53) sp_fs_schedule_track_pane_g3

0xe2f8,	// (0x0002cb5b) sp_fs_schedule_track_pane_g4

0xe300,	// (0x0002cb63) sp_fs_schedule_track_pane_g5

0x0004,

0xfc7c,	// (0x0002e4df) sp_fs_schedule_track_pane_g

0xcf0e,	// (0x0002b771) bg_sp_fs_schedule_viewer_highlight_g1

0xa796,	// (0x00028ff9) bg_sp_fs_schedule_viewer_highlight_g2

0xcf16,	// (0x0002b779) bg_sp_fs_schedule_viewer_highlight_g3

0xcf1e,	// (0x0002b781) bg_sp_fs_schedule_viewer_highlight_g4

0xd154,	// (0x0002b9b7) bg_sp_fs_schedule_viewer_highlight_g5

0xcf2e,	// (0x0002b791) bg_sp_fs_schedule_viewer_highlight_g6

0xcf36,	// (0x0002b799) bg_sp_fs_schedule_viewer_highlight_g7

0xcf3e,	// (0x0002b7a1) bg_sp_fs_schedule_viewer_highlight_g8

0xa776,	// (0x00028fd9) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfc87,	// (0x0002e4ea) bg_sp_fs_schedule_viewer_highlight_g

0x9bdf,	// (0x00028442) bg_main_sp_fs_ribbon_pane

0x7ff6,	// (0x00026859) main_sp_fs_ribbon_pane_g1

0xe308,	// (0x0002cb6b) main_sp_fs_ribbon_pane_t1

0x7fff,	// (0x00026862) main_sp_fs_ribbon_pane_t2

0xe317,	// (0x0002cb7a) main_sp_fs_ribbon_pane_t3

0x0002,

0xfc9a,	// (0x0002e4fd) main_sp_fs_ribbon_pane_t

0xe326,	// (0x0002cb89) main_sp_fs_ribbon_scheduler_pane

0xe32e,	// (0x0002cb91) bg_main_sp_fs_ribbon_pane_g1

0xe337,	// (0x0002cb9a) bg_main_sp_fs_ribbon_pane_g2

0xe340,	// (0x0002cba3) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x094b,	// (0x0001f1ae) bg_main_sp_fs_ribbon_pane_g

0xe348,	// (0x0002cbab) main_sp_fs_ribbon_scheduler_pane_g1

0xe351,	// (0x0002cbb4) main_sp_fs_ribbon_scheduler_pane_g2

0xe35a,	// (0x0002cbbd) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfca1,	// (0x0002e504) main_sp_fs_ribbon_scheduler_pane_g

0xe363,	// (0x0002cbc6) list_cale_mrui_pane

0x800e,	// (0x00026871) sp_fs_scroll_pane_cp07_ParamLimits

0x800e,	// (0x00026871) sp_fs_scroll_pane_cp07

0x802a,	// (0x0002688d) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x802a,	// (0x0002688d) bg_sp_fs_schedule_viewer_highlight

0xe370,	// (0x0002cbd3) list_single_sp_fs_schedule_track_pane_cp01

0xe378,	// (0x0002cbdb) list_sp_fs_schedule_track_pane

0xe380,	// (0x0002cbe3) sp_fs_scroll_pane_cp06_ParamLimits

0xe380,	// (0x0002cbe3) sp_fs_scroll_pane_cp06

0xa555,	// (0x00028db8) bgmain_sp_fs_calendar_pane_g1

0x8037,	// (0x0002689a) list_single_cale_mrui_pane_ParamLimits

0x8037,	// (0x0002689a) list_single_cale_mrui_pane

0xe392,	// (0x0002cbf5) list_single_cale_mrui_row_pane_ParamLimits

0xe392,	// (0x0002cbf5) list_single_cale_mrui_row_pane

0xe39f,	// (0x0002cc02) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe39f,	// (0x0002cc02) list_single_cale_mrui_row_pane_g1

0xe3e4,	// (0x0002cc47) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe3e4,	// (0x0002cc47) list_single_cale_mrui_row_pane_t1

0x805a,	// (0x000268bd) list_single_cale_mrui_row_pane_t2_ParamLimits

0x805a,	// (0x000268bd) list_single_cale_mrui_row_pane_t2

0xe3f6,	// (0x0002cc59) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe3f6,	// (0x0002cc59) list_single_cale_mrui_row_pane_t3

0xe425,	// (0x0002cc88) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe425,	// (0x0002cc88) list_single_cale_mrui_row_pane_t4

0x0003,

0xfcaf,	// (0x0002e512) list_single_cale_mrui_row_pane_t_ParamLimits

0xfcaf,	// (0x0002e512) list_single_cale_mrui_row_pane_t

0x80c0,	// (0x00026923) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x80c0,	// (0x00026923) list_single_cmail_header_editor_pane_bg_cp01

0x80ea,	// (0x0002694d) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x80ea,	// (0x0002694d) list_single_cmail_header_editor_pane_bg_cp02

0x8106,	// (0x00026969) main_radioblah_text_pane_t1_ParamLimits

0x8106,	// (0x00026969) main_radioblah_text_pane_t1

0xe456,	// (0x0002ccb9) cam6_indi_pane_cp01

0xe45e,	// (0x0002ccc1) cam6_mode_pane_cp01

0xe466,	// (0x0002ccc9) cam6_pano_pane

0xe46f,	// (0x0002ccd2) cam6_zoom_pane_cp01

0xe479,	// (0x0002ccdc) cam6_pano_image_pane

0xe482,	// (0x0002cce5) cam6_pano_pane_g1

0xdc67,	// (0x0002c4ca) cam6_pano_pane_g2

0xe48b,	// (0x0002ccee) cam6_pano_pane_g3

0xe494,	// (0x0002ccf7) cam6_pano_pane_g4

0xcba5,	// (0x0002b408) cam6_pano_pane_g5

0xe49d,	// (0x0002cd00) cam6_pano_pane_g6

0xe4a5,	// (0x0002cd08) cam6_pano_pane_g7

0xe4ad,	// (0x0002cd10) cam6_pano_pane_g8

0xe4b6,	// (0x0002cd19) cam6_pano_pane_g9

0x0008,

0xfcb8,	// (0x0002e51b) cam6_pano_pane_g

0x9bdf,	// (0x00028442) main_browser_tag_pane

0xe1d9,	// (0x0002ca3c) grid_navstr_albumart_pane

0xe4c1,	// (0x0002cd24) cell_navstr_albumart_pane_ParamLimits

0xe4c1,	// (0x0002cd24) cell_navstr_albumart_pane

0xe4dd,	// (0x0002cd40) cell_navstr_albumart_pane_g1

0xc0a8,	// (0x0002a90b) cell_navstr_albumart_pane_g2

0xc0b8,	// (0x0002a91b) cell_navstr_albumart_pane_g3

0xc0b0,	// (0x0002a913) cell_navstr_albumart_pane_g4

0x0003,

0xfccb,	// (0x0002e52e) cell_navstr_albumart_pane_g

0x8120,	// (0x00026983) bt_list_pane_ParamLimits

0x8120,	// (0x00026983) bt_list_pane

0x8139,	// (0x0002699c) bt_list_pane_t1

0x8148,	// (0x000269ab) bt_list_pane_t2

0x0001,

0xfcd4,	// (0x0002e537) bt_list_pane_t

0x9bdf,	// (0x00028442) main_cale_prevew_pane

0x8157,	// (0x000269ba) popup_cale_preview_window_ParamLimits

0x8157,	// (0x000269ba) popup_cale_preview_window

0xa2ae,	// (0x00028b11) bg_popup_preview_window_pane_cp05_ParamLimits

0xa2ae,	// (0x00028b11) bg_popup_preview_window_pane_cp05

0xe4e5,	// (0x0002cd48) list_cale_preview_pane_ParamLimits

0xe4e5,	// (0x0002cd48) list_cale_preview_pane

0x8174,	// (0x000269d7) list_double_cale_preview_pane_ParamLimits

0x8174,	// (0x000269d7) list_double_cale_preview_pane

0x8188,	// (0x000269eb) list_single_cale_preview_pane_ParamLimits

0x8188,	// (0x000269eb) list_single_cale_preview_pane

0x81a0,	// (0x00026a03) list_single_cale_preview_pane_g1

0x81a8,	// (0x00026a0b) list_single_cale_preview_pane_t1_ParamLimits

0x81a8,	// (0x00026a0b) list_single_cale_preview_pane_t1

0x81bd,	// (0x00026a20) list_double_cale_preview_pane_g1

0x81c5,	// (0x00026a28) list_double_cale_preview_pane_t1_ParamLimits

0x81c5,	// (0x00026a28) list_double_cale_preview_pane_t1

0x81da,	// (0x00026a3d) list_double_cale_preview_pane_t2_ParamLimits

0x81da,	// (0x00026a3d) list_double_cale_preview_pane_t2

0x0001,

0xfcd9,	// (0x0002e53c) list_double_cale_preview_pane_t_ParamLimits

0xfcd9,	// (0x0002e53c) list_double_cale_preview_pane_t

0x9bdf,	// (0x00028442) main_ezdial_pane

0xa2ae,	// (0x00028b11) main_sp_fs_email_pane_ParamLimits

0x7a05,	// (0x00026268) cmail_ddmenu_btn01_pane_ParamLimits

0x7a05,	// (0x00026268) cmail_ddmenu_btn01_pane

0x7a22,	// (0x00026285) cmail_ddmenu_btn02_pane_ParamLimits

0x7a22,	// (0x00026285) cmail_ddmenu_btn02_pane

0x7a40,	// (0x000262a3) cmail_ddmenu_btn03_pane_ParamLimits

0x7a40,	// (0x000262a3) cmail_ddmenu_btn03_pane

0x7ae1,	// (0x00026344) main_sp_fs_ctrlbar_pane_ParamLimits

0x7afb,	// (0x0002635e) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x7dd5,	// (0x00026638) list_cmail_body_pane_ParamLimits

0xe129,	// (0x0002c98c) bg_button_pane_cp12

0xe13e,	// (0x0002c9a1) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe13e,	// (0x0002c9a1) list_single_cmail_header_detail_pane_g3

0xe14b,	// (0x0002c9ae) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe14b,	// (0x0002c9ae) list_single_cmail_header_detail_pane_t2

0x0001,

0xfc63,	// (0x0002e4c6) list_single_cmail_header_detail_pane_t_ParamLimits

0xfc63,	// (0x0002e4c6) list_single_cmail_header_detail_pane_t

0xe241,	// (0x0002caa4) phacti_term_pane_t2_ParamLimits

0xe241,	// (0x0002caa4) phacti_term_pane_t2

0x0001,

0xfc6d,	// (0x0002e4d0) phacti_term_pane_t_ParamLimits

0xfc6d,	// (0x0002e4d0) phacti_term_pane_t

0xe4f1,	// (0x0002cd54) aid_size_list_single_double

0x81f2,	// (0x00026a55) popup_ezdial_listscroll_window

0x8214,	// (0x00026a77) popup_number_entry_window_cp01

0xa533,	// (0x00028d96) bg_popup_call_pane_cp09

0xe4fd,	// (0x0002cd60) ezdial_list_pane

0xe505,	// (0x0002cd68) scroll_pane_cp23

0xc068,	// (0x0002a8cb) bg_button_pane_cp028_ParamLimits

0xc068,	// (0x0002a8cb) bg_button_pane_cp028

0x8222,	// (0x00026a85) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8222,	// (0x00026a85) cmail_ddmenu_btn01_pane_g1

0x8234,	// (0x00026a97) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8234,	// (0x00026a97) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfcde,	// (0x0002e541) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfcde,	// (0x0002e541) cmail_ddmenu_btn01_pane_g

0xe50d,	// (0x0002cd70) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xe50d,	// (0x0002cd70) cmail_ddmenu_btn01_pane_t1

0xb77f,	// (0x00029fe2) bg_button_pane_cp029_ParamLimits

0xb77f,	// (0x00029fe2) bg_button_pane_cp029

0x8240,	// (0x00026aa3) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8240,	// (0x00026aa3) cmail_ddmenu_btn02_pane_g1

0x8258,	// (0x00026abb) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8258,	// (0x00026abb) cmail_ddmenu_btn02_pane_t1

0xa307,	// (0x00028b6a) bg_button_pane_cp031_ParamLimits

0xa307,	// (0x00028b6a) bg_button_pane_cp031

0x8240,	// (0x00026aa3) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8240,	// (0x00026aa3) cmail_ddmenu_btn03_pane_g1

0x8258,	// (0x00026abb) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8258,	// (0x00026abb) cmail_ddmenu_btn03_pane_t1

0x5cf1,	// (0x00024554) cell_dialer2_keypad_pane_t1_ParamLimits

0x5d0b,	// (0x0002456e) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5d0b,	// (0x0002456e) cell_dialer2_keypad_pane_t1_copy1

0x7153,	// (0x000259b6) ncimui_group_button_pane

0xa2ae,	// (0x00028b11) main_sp_fs_calendar_pane_ParamLimits

0x7def,	// (0x00026652) list_single_cmail_header_caption_pane_ParamLimits

0xe28c,	// (0x0002caef) aid_recal_txt_sm_pane

0x9bdf,	// (0x00028442) mian_recal_day_pane

0xe2ce,	// (0x0002cb31) popup_sp_fs_cale_preview_window_ParamLimits

0xe523,	// (0x0002cd86) list_recal_day_pane

0xe566,	// (0x0002cdc9) list_single_recal_day_pane_ParamLimits

0xe566,	// (0x0002cdc9) list_single_recal_day_pane

0xe578,	// (0x0002cddb) list_single_recal_day_pane_g1_ParamLimits

0xe578,	// (0x0002cddb) list_single_recal_day_pane_g1

0xe584,	// (0x0002cde7) list_single_recal_day_pane_g2_ParamLimits

0xe584,	// (0x0002cde7) list_single_recal_day_pane_g2

0xe590,	// (0x0002cdf3) list_single_recal_day_pane_g3_ParamLimits

0xe590,	// (0x0002cdf3) list_single_recal_day_pane_g3

0x827c,	// (0x00026adf) list_single_recal_day_pane_g4_ParamLimits

0x827c,	// (0x00026adf) list_single_recal_day_pane_g4

0xe59c,	// (0x0002cdff) list_single_recal_day_pane_g5_ParamLimits

0xe59c,	// (0x0002cdff) list_single_recal_day_pane_g5

0xe5a8,	// (0x0002ce0b) list_single_recal_day_pane_g6_ParamLimits

0xe5a8,	// (0x0002ce0b) list_single_recal_day_pane_g6

0x0004,

0xfced,	// (0x0002e550) list_single_recal_day_pane_g_ParamLimits

0xfced,	// (0x0002e550) list_single_recal_day_pane_g

0xe5bc,	// (0x0002ce1f) list_single_recal_day_pane_t1

0xe5ce,	// (0x0002ce31) list_single_recal_day_pane_t2

0x0001,

0xfcf8,	// (0x0002e55b) list_single_recal_day_pane_t

0x8294,	// (0x00026af7) ncimui_query_button_pane_ParamLimits

0x8294,	// (0x00026af7) ncimui_query_button_pane

0x82a4,	// (0x00026b07) ncimui_query_button_pane_t1_ParamLimits

0x82a4,	// (0x00026b07) ncimui_query_button_pane_t1

0xe5e0,	// (0x0002ce43) ncimui_query_button_pane_t2_ParamLimits

0xe5e0,	// (0x0002ce43) ncimui_query_button_pane_t2

0x0001,

0xfcfd,	// (0x0002e560) ncimui_query_button_pane_t_ParamLimits

0xfcfd,	// (0x0002e560) ncimui_query_button_pane_t

0x82b7,	// (0x00026b1a) query_button_pane_ParamLimits

0x82b7,	// (0x00026b1a) query_button_pane

0x9bdf,	// (0x00028442) bg_button_pane_cp0028

0xe5f3,	// (0x0002ce56) query_button_pane_t1

0x12c7,	// (0x0001fb2a) main_tport_pane_ParamLimits

0x7cbc,	// (0x0002651f) bg_popup_window_pane_cp01_ParamLimits

0x7cbc,	// (0x0002651f) bg_popup_window_pane_cp01

0x7cca,	// (0x0002652d) heading_pane_cp08_ParamLimits

0x7cca,	// (0x0002652d) heading_pane_cp08

0x7cd8,	// (0x0002653b) heading_pane_cp07_ParamLimits

0x7cd8,	// (0x0002653b) heading_pane_cp07

0x7d6e,	// (0x000265d1) cell_tport_appsw_pane_g2

0x0002,

0xfc50,	// (0x0002e4b3) cell_tport_appsw_pane_g

0x44db,	// (0x00022d3e) input_candi_list_open_g1

0xa970,	// (0x000291d3) list_cale_time_pane_g6_ParamLimits

0xa970,	// (0x000291d3) list_cale_time_pane_g6

0x50b3,	// (0x00023916) aid_size_touch_calib_1_ParamLimits

0x50b3,	// (0x00023916) aid_size_touch_calib_1

0x50bf,	// (0x00023922) aid_size_touch_calib_2_ParamLimits

0x50bf,	// (0x00023922) aid_size_touch_calib_2

0x50cd,	// (0x00023930) aid_size_touch_calib_3_ParamLimits

0x50cd,	// (0x00023930) aid_size_touch_calib_3

0x50dd,	// (0x00023940) aid_size_touch_calib_4_ParamLimits

0x50dd,	// (0x00023940) aid_size_touch_calib_4

0x50eb,	// (0x0002394e) main_touch_calib_button_group_pane_ParamLimits

0x50eb,	// (0x0002394e) main_touch_calib_button_group_pane

0x50f9,	// (0x0002395c) main_touch_calib_pane_g1_ParamLimits

0x5105,	// (0x00023968) main_touch_calib_pane_g2_ParamLimits

0x5111,	// (0x00023974) main_touch_calib_pane_g3_ParamLimits

0x511d,	// (0x00023980) main_touch_calib_pane_g4_ParamLimits

0xf69e,	// (0x0002df01) main_touch_calib_pane_g_ParamLimits

0x5129,	// (0x0002398c) main_touch_calib_pane_t1_ParamLimits

0x5140,	// (0x000239a3) main_touch_calib_pane_t2_ParamLimits

0x5159,	// (0x000239bc) main_touch_calib_pane_t3_ParamLimits

0x516f,	// (0x000239d2) main_touch_calib_pane_t4_ParamLimits

0x5185,	// (0x000239e8) main_touch_calib_pane_t5_ParamLimits

0xf6a7,	// (0x0002df0a) main_touch_calib_pane_t_ParamLimits

0xc93b,	// (0x0002b19e) list_single_fp_cale_pane_g3_ParamLimits

0xc93b,	// (0x0002b19e) list_single_fp_cale_pane_g3

0x12ab,	// (0x0001fb0e) bg_button_pane_cp012_ParamLimits

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp03_ParamLimits

0x2126,	// (0x00020989) cell_vitu2_function_top_pane_g1_ParamLimits

0x12ab,	// (0x0001fb0e) bg_vkb2_func_pane_cp04_ParamLimits

0x70d9,	// (0x0002593c) main_ncimui_button_group_pane_ParamLimits

0x70d9,	// (0x0002593c) main_ncimui_button_group_pane

0x7141,	// (0x000259a4) main_ncimui_pane_t3_ParamLimits

0x7141,	// (0x000259a4) main_ncimui_pane_t3

0xe1ef,	// (0x0002ca52) phacti_button_group_pane

0xe4f1,	// (0x0002cd54) aid_size_list_single_double_ParamLimits

0x81f2,	// (0x00026a55) popup_ezdial_listscroll_window_ParamLimits

0x8214,	// (0x00026a77) popup_number_entry_window_cp01_ParamLimits

0x82c4,	// (0x00026b27) phacti_button_pane_ParamLimits

0x82c4,	// (0x00026b27) phacti_button_pane

0x9bdf,	// (0x00028442) bg_button_pane_cp14

0xe601,	// (0x0002ce64) phacti_button_pane_t1

0x82d5,	// (0x00026b38) main_touch_calib_button_pane_ParamLimits

0x82d5,	// (0x00026b38) main_touch_calib_button_pane

0xa387,	// (0x00028bea) bg_button_pane_cp18_ParamLimits

0xa387,	// (0x00028bea) bg_button_pane_cp18

0xe60f,	// (0x0002ce72) main_touch_calib_button_pane_t1_ParamLimits

0xe60f,	// (0x0002ce72) main_touch_calib_button_pane_t1

0xe625,	// (0x0002ce88) main_touch_calib_button_pane_t2_ParamLimits

0xe625,	// (0x0002ce88) main_touch_calib_button_pane_t2

0x0001,

0xfd02,	// (0x0002e565) main_touch_calib_button_pane_t_ParamLimits

0xfd02,	// (0x0002e565) main_touch_calib_button_pane_t

0x9bdf,	// (0x00028442) cell_ncimui_button_pane

0x9bdf,	// (0x00028442) bg_button_pane_cp032

0xe643,	// (0x0002cea6) cell_ncimui_button_pane_t1

0x1972,	// (0x000201d5) image3_infobar_pane_ParamLimits

0x1972,	// (0x000201d5) image3_infobar_pane

0x7512,	// (0x00025d75) fs_bigclock_status_pane_ParamLimits

0x7512,	// (0x00025d75) fs_bigclock_status_pane

0x751f,	// (0x00025d82) main_fs_bigclock_clock_pane_ParamLimits

0x751f,	// (0x00025d82) main_fs_bigclock_clock_pane

0x753b,	// (0x00025d9e) main_fs_bigclock_indi_pane_ParamLimits

0x753b,	// (0x00025d9e) main_fs_bigclock_indi_pane

0x7569,	// (0x00025dcc) main_fs_bigclock_swipe_pane_ParamLimits

0x7569,	// (0x00025dcc) main_fs_bigclock_swipe_pane

0x9bdf,	// (0x00028442) main_fs_clock_dumped_data

0x75a3,	// (0x00025e06) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x75a3,	// (0x00025e06) list_single_fs_bigclock_indicator_pane_g1

0x75c2,	// (0x00025e25) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x75c2,	// (0x00025e25) list_single_fs_bigclock_indicator_pane_g2

0x75dc,	// (0x00025e3f) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x75dc,	// (0x00025e3f) list_single_fs_bigclock_indicator_pane_g3

0x75f8,	// (0x00025e5b) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x75f8,	// (0x00025e5b) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbaf,	// (0x0002e412) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbaf,	// (0x0002e412) list_single_fs_bigclock_indicator_pane_g

0x7627,	// (0x00025e8a) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x7627,	// (0x00025e8a) list_single_fs_bigclock_indicator_pane_t1

0x764f,	// (0x00025eb2) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x764f,	// (0x00025eb2) list_single_fs_bigclock_indicator_pane_t2

0x7677,	// (0x00025eda) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x7677,	// (0x00025eda) list_single_fs_bigclock_indicator_pane_t3

0x769f,	// (0x00025f02) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x769f,	// (0x00025f02) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbba,	// (0x0002e41d) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbba,	// (0x0002e41d) list_single_fs_bigclock_indicator_pane_t

0xe651,	// (0x0002ceb4) image3_infobar_fav_pane_ParamLimits

0xe651,	// (0x0002ceb4) image3_infobar_fav_pane

0xe661,	// (0x0002cec4) image3_infobar_loc_pane_ParamLimits

0xe661,	// (0x0002cec4) image3_infobar_loc_pane

0xe677,	// (0x0002ceda) image3_infobar_time_pane_ParamLimits

0xe677,	// (0x0002ceda) image3_infobar_time_pane

0xa555,	// (0x00028db8) image3_infobar_time_pane_g1

0xe687,	// (0x0002ceea) image3_infobar_time_pane_t1

0xa555,	// (0x00028db8) image3_infobar_loc_pane_g1

0xe695,	// (0x0002cef8) image3_infobar_loc_pane_g2

0x0001,

0xfd07,	// (0x0002e56a) image3_infobar_loc_pane_g

0xe69d,	// (0x0002cf00) image3_infobar_loc_pane_t1

0xa555,	// (0x00028db8) image3_infobar_fav_pane_g1

0xe6ab,	// (0x0002cf0e) image3_infobar_fav_pane_g2

0x0001,

0xfd0c,	// (0x0002e56f) image3_infobar_fav_pane_g

0xe6b3,	// (0x0002cf16) fs_bigclock_status_battery_pane

0xe6bc,	// (0x0002cf1f) fs_bigclock_status_signal_pane

0xe6c5,	// (0x0002cf28) fs_bigclock_status_title_pane

0xe6ce,	// (0x0002cf31) fs_bigclock_status_signal_pane_g1

0xe6d7,	// (0x0002cf3a) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd11,	// (0x0002e574) fs_bigclock_status_signal_pane_g

0xe6df,	// (0x0002cf42) fs_bigclock_status_battery_pane_g1

0xe6e8,	// (0x0002cf4b) fs_bigclock_status_battery_pane_g2

0x0001,

0xfd16,	// (0x0002e579) fs_bigclock_status_battery_pane_g

0xe6f0,	// (0x0002cf53) fs_bigclock_status_title_pane_t1

0x82e5,	// (0x00026b48) main_fs_bigclock_clock_pane_g1

0x82e5,	// (0x00026b48) main_fs_bigclock_clock_pane_g2

0x82f4,	// (0x00026b57) main_fs_bigclock_clock_pane_g3

0x82f4,	// (0x00026b57) main_fs_bigclock_clock_pane_g4

0x0003,

0xfd1b,	// (0x0002e57e) main_fs_bigclock_clock_pane_g

0x8304,	// (0x00026b67) main_fs_bigclock_clock_pane_t1

0x8319,	// (0x00026b7c) main_fs_bigclock_clock_pane_t2

0x0001,

0xfd24,	// (0x0002e587) main_fs_bigclock_clock_pane_t

0xe6fe,	// (0x0002cf61) list_single_fs_bigclock_indicator_pane_ParamLimits

0xe6fe,	// (0x0002cf61) list_single_fs_bigclock_indicator_pane

0xe70f,	// (0x0002cf72) list_single_fs_bigclock_pane_ParamLimits

0xe70f,	// (0x0002cf72) list_single_fs_bigclock_pane

0xe735,	// (0x0002cf98) main_fs_bigclock_indicator_pane_t1

0xe744,	// (0x0002cfa7) list_single_fs_bigclock_pane_g1

0xe74c,	// (0x0002cfaf) list_single_fs_bigclock_pane_t1

0xa555,	// (0x00028db8) main_fs_bigclock_swipe_pane_g1

0xe78f,	// (0x0002cff2) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfd35,	// (0x0002e598) main_fs_bigclock_swipe_pane_g

0xe797,	// (0x0002cffa) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xe797,	// (0x0002cffa) main_fs_bigclock_swipe_pane_t1

0x3f13,	// (0x00022776) call_type_pane_ParamLimits

0x9bdf,	// (0x00028442) main_btmg_pane

0xe3cb,	// (0x0002cc2e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe3cb,	// (0x0002cc2e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfca8,	// (0x0002e50b) list_single_cale_mrui_row_pane_g_ParamLimits

0xfca8,	// (0x0002e50b) list_single_cale_mrui_row_pane_g

0xe54c,	// (0x0002cdaf) list_recal_vselct_arw_lo_pane

0xe554,	// (0x0002cdb7) list_recal_vselct_arw_up_pane

0xe55c,	// (0x0002cdbf) list_recal_vselct_pane

0x8370,	// (0x00026bd3) btmg_button_pane

0x837c,	// (0x00026bdf) main_btmg_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp044

0xe7b4,	// (0x0002d017) btmg_button_pane_t1

0xc1fa,	// (0x0002aa5d) aid_listscroll_gen

0xa2ae,	// (0x00028b11) main_cntbar_detail_pane

0xe0fc,	// (0x0002c95f) list_cmail_folder_pane

0xd827,	// (0x0002c08a) sp_fs_scroll_pane_cp03_ParamLimits

0x8384,	// (0x00026be7) list_single_fs_dyc_pane_cp01_ParamLimits

0x8384,	// (0x00026be7) list_single_fs_dyc_pane_cp01

0xe7c2,	// (0x0002d025) aid_size_cmail_indent

0xe7cb,	// (0x0002d02e) list_single_dyc_row_pane_cp01

0x83c1,	// (0x00026c24) cntbar_detail_list_pane_ParamLimits

0x83c1,	// (0x00026c24) cntbar_detail_list_pane

0x8401,	// (0x00026c64) main_cntbar_detail_cont_pane_ParamLimits

0x8401,	// (0x00026c64) main_cntbar_detail_cont_pane

0x3f07,	// (0x0002276a) scroll_pane_cp032_ParamLimits

0x3f07,	// (0x0002276a) scroll_pane_cp032

0x840d,	// (0x00026c70) cntbar_detail_list_event_pane_ParamLimits

0x840d,	// (0x00026c70) cntbar_detail_list_event_pane

0x83cf,	// (0x00026c32) cntbar_detail_list_shct_pane

0xa7e4,	// (0x00029047) aid_list_gen

0xe7d4,	// (0x0002d037) aid_scroll

0xe7dd,	// (0x0002d040) aid_size_touch_scroll_bar

0x841d,	// (0x00026c80) aid_list_double

0x8426,	// (0x00026c89) aid_list_single

0x8426,	// (0x00026c89) aid_list_single_lg

0x842f,	// (0x00026c92) aid_list_z_g_a_sm

0x8437,	// (0x00026c9a) aid_list_z_g_d

0x843f,	// (0x00026ca2) aid_txt_z_prm

0x844d,	// (0x00026cb0) aid_txt_z_prm_cp01

0x845b,	// (0x00026cbe) aid_txt_z_sec

0x8469,	// (0x00026ccc) main_cntbar_detail_cont_pane_g1_ParamLimits

0x8469,	// (0x00026ccc) main_cntbar_detail_cont_pane_g1

0x8476,	// (0x00026cd9) main_cntbar_detail_cont_pane_g2_ParamLimits

0x8476,	// (0x00026cd9) main_cntbar_detail_cont_pane_g2

0x0001,

0xfd3a,	// (0x0002e59d) main_cntbar_detail_cont_pane_g_ParamLimits

0xfd3a,	// (0x0002e59d) main_cntbar_detail_cont_pane_g

0xe7e6,	// (0x0002d049) main_cntbar_detail_cont_pane_t1

0xe7f4,	// (0x0002d057) main_cntbar_detail_cont_pane_t2

0xe802,	// (0x0002d065) main_cntbar_detail_cont_pane_t3

0x0002,

0x09e9,	// (0x0001f24c) main_cntbar_detail_cont_pane_t

0x8482,	// (0x00026ce5) cell_cntbar_detail_list_shct_pane_ParamLimits

0x8482,	// (0x00026ce5) cell_cntbar_detail_list_shct_pane

0xe810,	// (0x0002d073) cntbar_detail_list_shct_pane_g1

0xe819,	// (0x0002d07c) cntbar_detail_list_shct_pane_g2

0x0001,

0x09f0,	// (0x0001f253) cntbar_detail_list_shct_pane_g

0x8496,	// (0x00026cf9) cntbar_detail_list_event_pane_g1_ParamLimits

0x8496,	// (0x00026cf9) cntbar_detail_list_event_pane_g1

0x84a2,	// (0x00026d05) cntbar_detail_list_event_pane_g2_ParamLimits

0x84a2,	// (0x00026d05) cntbar_detail_list_event_pane_g2

0x0005,

0xfd3f,	// (0x0002e5a2) cntbar_detail_list_event_pane_g_ParamLimits

0xfd3f,	// (0x0002e5a2) cntbar_detail_list_event_pane_g

0x8510,	// (0x00026d73) cntbar_detail_list_event_pane_t1_ParamLimits

0x8510,	// (0x00026d73) cntbar_detail_list_event_pane_t1

0x8525,	// (0x00026d88) cntbar_detail_list_event_pane_t2_ParamLimits

0x8525,	// (0x00026d88) cntbar_detail_list_event_pane_t2

0x0002,

0xfd4c,	// (0x0002e5af) cntbar_detail_list_event_pane_t_ParamLimits

0xfd4c,	// (0x0002e5af) cntbar_detail_list_event_pane_t

0xa555,	// (0x00028db8) cell_cntbar_detail_list_shct_pane_g1

0x4251,	// (0x00022ab4) navi_pane_mv_g3

0xa2ae,	// (0x00028b11) main_cntbar_detail_pane_ParamLimits

0x9bdf,	// (0x00028442) main_notif_wgt_pane

0x167f,	// (0x0001fee2) aid_tch_main_mp4_pane_g4

0x18e8,	// (0x0002014b) popup_slider_window_cp02

0xe542,	// (0x0002cda5) list_recal_day_event_pane

0x83a1,	// (0x00026c04) cntbar_detail_btn_pane_ParamLimits

0x83a1,	// (0x00026c04) cntbar_detail_btn_pane

0x83b1,	// (0x00026c14) cntbar_detail_btn_pane_cp01_ParamLimits

0x83b1,	// (0x00026c14) cntbar_detail_btn_pane_cp01

0x83cf,	// (0x00026c32) cntbar_detail_list_shct_pane_ParamLimits

0x83db,	// (0x00026c3e) cntbar_detail_pane_g1_ParamLimits

0x83db,	// (0x00026c3e) cntbar_detail_pane_g1

0x83eb,	// (0x00026c4e) cntbar_detail_pane_t1_ParamLimits

0x83eb,	// (0x00026c4e) cntbar_detail_pane_t1

0x84ae,	// (0x00026d11) cntbar_detail_list_event_pane_g3_ParamLimits

0x84ae,	// (0x00026d11) cntbar_detail_list_event_pane_g3

0x84c6,	// (0x00026d29) cntbar_detail_list_event_pane_g4_ParamLimits

0x84c6,	// (0x00026d29) cntbar_detail_list_event_pane_g4

0x84de,	// (0x00026d41) cntbar_detail_list_event_pane_g5_ParamLimits

0x84de,	// (0x00026d41) cntbar_detail_list_event_pane_g5

0x84f6,	// (0x00026d59) cntbar_detail_list_event_pane_g6_ParamLimits

0x84f6,	// (0x00026d59) cntbar_detail_list_event_pane_g6

0x853a,	// (0x00026d9d) cntbar_detail_list_event_pane_t3_ParamLimits

0x853a,	// (0x00026d9d) cntbar_detail_list_event_pane_t3

0x854c,	// (0x00026daf) popup_notif_wgt_window_ParamLimits

0x854c,	// (0x00026daf) popup_notif_wgt_window

0x855c,	// (0x00026dbf) popup_submenu_window_cp01_ParamLimits

0x855c,	// (0x00026dbf) popup_submenu_window_cp01

0xa533,	// (0x00028d96) bg_popup_window_pane_cp10

0xe822,	// (0x0002d085) listscroll_notif_wgt_pane

0xe834,	// (0x0002d097) list_notif_wgt_window

0xe83d,	// (0x0002d0a0) scroll_pane_cp033

0x856c,	// (0x00026dcf) list_notif_wgt_row_pane_ParamLimits

0x856c,	// (0x00026dcf) list_notif_wgt_row_pane

0xe846,	// (0x0002d0a9) aid_size_list_notif_wgt_del

0xe853,	// (0x0002d0b6) list_notif_wgt_row_pane_g1

0xe85f,	// (0x0002d0c2) list_notif_wgt_row_pane_g2

0xe888,	// (0x0002d0eb) list_notif_wgt_row_pane_g3

0x0002,

0xfd53,	// (0x0002e5b6) list_notif_wgt_row_pane_g

0xe895,	// (0x0002d0f8) list_notif_wgt_row_pane_t1

0xe8ab,	// (0x0002d10e) list_notif_wgt_row_pane_t2

0xe8bd,	// (0x0002d120) list_notif_wgt_row_pane_t3

0x0002,

0xfd5a,	// (0x0002e5bd) list_notif_wgt_row_pane_t

0xd16e,	// (0x0002b9d1) list_recal_day_event_pane_g1

0xe8cf,	// (0x0002d132) list_recal_day_event_pane_t1

0x9bdf,	// (0x00028442) bg_button_pane_cp045

0x8580,	// (0x00026de3) cntbar_detail_btn_pane_t1

0xb77f,	// (0x00029fe2) main_callh_pane_ParamLimits

0xb77f,	// (0x00029fe2) main_callh_pane

0x9bdf,	// (0x00028442) main_coverflow0_pane

0x9bdf,	// (0x00028442) main_wgtman_pane

0x7581,	// (0x00025de4) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x7581,	// (0x00025de4) main_fs_bigclock_unlock_btn_pane

0x7d66,	// (0x000265c9) bg_button_pane_cp16

0x7d76,	// (0x000265d9) cell_tport_appsw_pane_g3

0x858e,	// (0x00026df1) cf0_flow_pane_ParamLimits

0x858e,	// (0x00026df1) cf0_flow_pane

0xe8de,	// (0x0002d141) listscroll_cf0_pane

0xe8e9,	// (0x0002d14c) main_cf0_pane_g1

0x859d,	// (0x00026e00) main_cf0_pane_t1_ParamLimits

0x859d,	// (0x00026e00) main_cf0_pane_t1

0x85b1,	// (0x00026e14) main_cf0_pane_t2_ParamLimits

0x85b1,	// (0x00026e14) main_cf0_pane_t2

0x0001,

0xfd66,	// (0x0002e5c9) main_cf0_pane_t_ParamLimits

0xfd66,	// (0x0002e5c9) main_cf0_pane_t

0xe8fb,	// (0x0002d15e) scroll_pane_cp11

0x85c5,	// (0x00026e28) cf0_flow_pane_g1

0x85cd,	// (0x00026e30) cf0_flow_pane_g2

0x0001,

0xfd6b,	// (0x0002e5ce) cf0_flow_pane_g

0x85d5,	// (0x00026e38) cf0_flow_pane_t1

0x9bdf,	// (0x00028442) main_call6_pane

0x9bdf,	// (0x00028442) main_calllock_pane

0x236c,	// (0x00020bcf) call6_btn_grp_pane_ParamLimits

0x236c,	// (0x00020bcf) call6_btn_grp_pane

0x2379,	// (0x00020bdc) call6_pane_g1_ParamLimits

0x2379,	// (0x00020bdc) call6_pane_g1

0x2389,	// (0x00020bec) popup_call6_1st_window_ParamLimits

0x2389,	// (0x00020bec) popup_call6_1st_window

0x2399,	// (0x00020bfc) popup_call6_2nd_window_ParamLimits

0x2399,	// (0x00020bfc) popup_call6_2nd_window

0x23a9,	// (0x00020c0c) cell_call6_btn_pane_ParamLimits

0x23a9,	// (0x00020c0c) cell_call6_btn_pane

0xa533,	// (0x00028d96) bg_popup_call2_in_pane_cp03

0xe906,	// (0x0002d169) popup_call6_1st_window_g1

0xe90e,	// (0x0002d171) popup_call6_1st_window_g2

0xe916,	// (0x0002d179) popup_call6_1st_window_g3

0x0002,

0xfd70,	// (0x0002e5d3) popup_call6_1st_window_g

0xe91e,	// (0x0002d181) popup_call6_1st_window_t1

0xe92d,	// (0x0002d190) popup_call6_1st_window_t2

0xe93d,	// (0x0002d1a0) popup_call6_1st_window_t3

0x0002,

0xfd77,	// (0x0002e5da) popup_call6_1st_window_t

0xa533,	// (0x00028d96) bg_popup_call2_in_pane_cp04

0xe94d,	// (0x0002d1b0) popup_call6_2nd_window_g1

0xe955,	// (0x0002d1b8) popup_call6_2nd_window_g2

0xe95d,	// (0x0002d1c0) popup_call6_2nd_window_g3

0x0002,

0xfd7e,	// (0x0002e5e1) popup_call6_2nd_window_g

0xe965,	// (0x0002d1c8) popup_call6_2nd_window_t1

0x0de1,	// (0x0001f644) bg_button_pane_cp15

0x23ba,	// (0x00020c1d) cell_call6_btn_pane_g1

0x23c3,	// (0x00020c26) cell_call6_btn_pane_t1

0x85e3,	// (0x00026e46) listscroll_wgtman_pane_ParamLimits

0x85e3,	// (0x00026e46) listscroll_wgtman_pane

0x85ff,	// (0x00026e62) wgtman_btn_pane_ParamLimits

0x85ff,	// (0x00026e62) wgtman_btn_pane

0xad53,	// (0x000295b6) aid_scroll_copy1

0xe974,	// (0x0002d1d7) list_wgtman_pane

0x8634,	// (0x00026e97) wgtman_btn_pane_g1_ParamLimits

0x8634,	// (0x00026e97) wgtman_btn_pane_g1

0x865c,	// (0x00026ebf) wgtman_btn_pane_t1_ParamLimits

0x865c,	// (0x00026ebf) wgtman_btn_pane_t1

0xe97e,	// (0x0002d1e1) wgtman_btn_pane_t2_ParamLimits

0xe97e,	// (0x0002d1e1) wgtman_btn_pane_t2

0x0001,

0xfd85,	// (0x0002e5e8) wgtman_btn_pane_t_ParamLimits

0xfd85,	// (0x0002e5e8) wgtman_btn_pane_t

0x8693,	// (0x00026ef6) listrow_wgtman_pane_ParamLimits

0x8693,	// (0x00026ef6) listrow_wgtman_pane

0x86aa,	// (0x00026f0d) listrow_wgtman_pane_g1

0x86b7,	// (0x00026f1a) listrow_wgtman_pane_g2

0x0001,

0xfd8a,	// (0x0002e5ed) listrow_wgtman_pane_g

0x86d5,	// (0x00026f38) listrow_wgtman_pane_t1

0x86ed,	// (0x00026f50) listrow_wgtman_pane_t2

0x0001,

0xfd8f,	// (0x0002e5f2) listrow_wgtman_pane_t

0x8713,	// (0x00026f76) wait_bar_pane_cp09

0xe995,	// (0x0002d1f8) main_calllock_btn_pane

0xe99f,	// (0x0002d202) main_calllock_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp17

0xe9ab,	// (0x0002d20e) main_calllock_btn_pane_g1

0xe9b4,	// (0x0002d217) main_calllock_btn_pane_t1

0x9bdf,	// (0x00028442) main_dialer3_pane

0x9bdf,	// (0x00028442) main_fmrd2_pane

0xa555,	// (0x00028db8) main_fs_bigclock_unlock_btn_pane_g1

0x872d,	// (0x00026f90) main_fs_bigclock_unlock_btn_pane_t1

0x873b,	// (0x00026f9e) area_fmrd2_info_pane_ParamLimits

0x873b,	// (0x00026f9e) area_fmrd2_info_pane

0x8747,	// (0x00026faa) area_fmrd2_visual_pane_ParamLimits

0x8747,	// (0x00026faa) area_fmrd2_visual_pane

0x8755,	// (0x00026fb8) fmrd2_indi_pane_ParamLimits

0x8755,	// (0x00026fb8) fmrd2_indi_pane

0x8762,	// (0x00026fc5) area_fmrd2_visual_pane_g1

0x876a,	// (0x00026fcd) area_fmrd2_visual_pane_t1

0x877a,	// (0x00026fdd) area_fmrd2_visual_pane_t2

0x878a,	// (0x00026fed) area_fmrd2_visual_pane_t3

0x0002,

0xfd99,	// (0x0002e5fc) area_fmrd2_visual_pane_t

0x879a,	// (0x00026ffd) area_fmrd2_info_pane_g1

0x87a2,	// (0x00027005) area_fmrd2_info_pane_t1

0x87b2,	// (0x00027015) area_fmrd2_info_pane_t2

0x87c2,	// (0x00027025) area_fmrd2_info_pane_t3

0x87d2,	// (0x00027035) area_fmrd2_info_pane_t4

0x0003,

0xfda0,	// (0x0002e603) area_fmrd2_info_pane_t

0x87e2,	// (0x00027045) fmrd2_indi_pane_t1

0x87f2,	// (0x00027055) fmrd2_indi_pane_t2

0x8802,	// (0x00027065) fmrd2_indi_pane_t3

0x0002,

0xfda9,	// (0x0002e60c) fmrd2_indi_pane_t

0x7609,	// (0x00025e6c) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x7609,	// (0x00025e6c) list_single_fs_bigclock_indicator_pane_g5

0x76be,	// (0x00025f21) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x76be,	// (0x00025f21) list_single_fs_bigclock_indicator_pane_t5

0x7f4a,	// (0x000267ad) aid_cell_bcale_month_pane_ParamLimits

0x7f4a,	// (0x000267ad) aid_cell_bcale_month_pane

0x7f68,	// (0x000267cb) bcale_month_pane_ParamLimits

0x7f68,	// (0x000267cb) bcale_month_pane

0x7f86,	// (0x000267e9) bcale_preview_pane_ParamLimits

0x7f86,	// (0x000267e9) bcale_preview_pane

0xe74c,	// (0x0002cfaf) list_single_fs_bigclock_pane_t1_ParamLimits

0xe76b,	// (0x0002cfce) list_single_fs_bigclock_pane_t2_ParamLimits

0xe76b,	// (0x0002cfce) list_single_fs_bigclock_pane_t2

0x0001,

0xfd30,	// (0x0002e593) list_single_fs_bigclock_pane_t_ParamLimits

0xfd30,	// (0x0002e593) list_single_fs_bigclock_pane_t

0x8725,	// (0x00026f88) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfd94,	// (0x0002e5f7) main_fs_bigclock_unlock_btn_pane_g

0x8812,	// (0x00027075) aid_dia3_key_size_ParamLimits

0x8812,	// (0x00027075) aid_dia3_key_size

0x881e,	// (0x00027081) aid_dia3_listrow_size_ParamLimits

0x881e,	// (0x00027081) aid_dia3_listrow_size

0x882e,	// (0x00027091) dia3_keypad_fun_pane_ParamLimits

0x882e,	// (0x00027091) dia3_keypad_fun_pane

0x883e,	// (0x000270a1) dia3_keypad_num_pane_ParamLimits

0x883e,	// (0x000270a1) dia3_keypad_num_pane

0x884e,	// (0x000270b1) dia3_listscroll_pane_ParamLimits

0x884e,	// (0x000270b1) dia3_listscroll_pane

0x885c,	// (0x000270bf) dia3_numentry_pane_ParamLimits

0x885c,	// (0x000270bf) dia3_numentry_pane

0xe9c3,	// (0x0002d226) dia3_list_pane

0x886a,	// (0x000270cd) scroll_pane_cp12

0x9bdf,	// (0x00028442) bg_dia3_numentry_pane

0x8875,	// (0x000270d8) dia3_numentry_pane_t1

0x8884,	// (0x000270e7) cell_dia3_key_num_pane

0x888c,	// (0x000270ef) cell_dia3_key0_fun_pane_ParamLimits

0x888c,	// (0x000270ef) cell_dia3_key0_fun_pane

0x8899,	// (0x000270fc) cell_dia3_key1_fun_pane_ParamLimits

0x8899,	// (0x000270fc) cell_dia3_key1_fun_pane

0x88a6,	// (0x00027109) dia3_listrow_pane

0xdb23,	// (0x0002c386) bg_dia3_numentry_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp21

0x88b3,	// (0x00027116) cell_dia3_key_num_pane_t1

0x88c1,	// (0x00027124) cell_dia3_key_num_pane_t2

0x88d0,	// (0x00027133) cell_dia3_key_num_pane_t3

0x88df,	// (0x00027142) cell_dia3_key_num_pane_t4

0x0003,

0xfdb0,	// (0x0002e613) cell_dia3_key_num_pane_t

0x9bdf,	// (0x00028442) bg_button_pane_cp19

0x88ee,	// (0x00027151) cell_dia3_key0_fun_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp20

0x88f6,	// (0x00027159) cell_dia3_key1_fun_pane_g1

0x88fe,	// (0x00027161) area_left_week_number_pane

0x8911,	// (0x00027174) area_top_day_name_pane

0x891f,	// (0x00027182) frame_month_view_pane

0xe9ce,	// (0x0002d231) grid_month_view_pane

0x8934,	// (0x00027197) cell_top_day_name_pane_ParamLimits

0x8934,	// (0x00027197) cell_top_day_name_pane

0x8950,	// (0x000271b3) cell_area_left_week_number_pane_ParamLimits

0x8950,	// (0x000271b3) cell_area_left_week_number_pane

0x8971,	// (0x000271d4) cell_month_view_pane_ParamLimits

0x8971,	// (0x000271d4) cell_month_view_pane

0xe9dc,	// (0x0002d23f) frm_month_g1

0x899d,	// (0x00027200) frm_month_g2

0x89ae,	// (0x00027211) frm_month_g3

0x89bf,	// (0x00027222) frm_month_g4

0x89d0,	// (0x00027233) frm_month_g5

0x89e1,	// (0x00027244) frm_month_g6

0x89f4,	// (0x00027257) frm_month_g7

0xe9e9,	// (0x0002d24c) frm_month_g8

0x8a07,	// (0x0002726a) frm_month_g9

0x8a14,	// (0x00027277) frm_month_g10

0x8a21,	// (0x00027284) frm_month_g11

0x8a2e,	// (0x00027291) frm_month_g12

0x8a3b,	// (0x0002729e) frm_month_g13

0x8a4a,	// (0x000272ad) frm_month_g14

0x8a59,	// (0x000272bc) frm_month_g15

0x8a68,	// (0x000272cb) frm_month_g16

0x000f,

0xfdb9,	// (0x0002e61c) frm_month_g

0xe9f6,	// (0x0002d259) cell_top_day_name_pane_t1

0x8a77,	// (0x000272da) cell_area_left_week_number_pane_g1

0x8a86,	// (0x000272e9) cell_area_left_week_number_pane_t1

0xa315,	// (0x00028b78) cell_month_view_pane_g1

0x8a9c,	// (0x000272ff) cell_month_view_pane_t1

0x9bdf,	// (0x00028442) main_fps_pane

0xdf49,	// (0x0002c7ac) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xdf49,	// (0x0002c7ac) cmail_ddmenu_btn02_pane_cp1

0xdf65,	// (0x0002c7c8) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xdf65,	// (0x0002c7c8) cmail_ddmenu_btn02_pane_cp2

0x824c,	// (0x00026aaf) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x824c,	// (0x00026aaf) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfce3,	// (0x0002e546) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfce3,	// (0x0002e546) cmail_ddmenu_btn02_pane_g

0x826a,	// (0x00026acd) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x826a,	// (0x00026acd) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfce8,	// (0x0002e54b) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfce8,	// (0x0002e54b) cmail_ddmenu_btn02_pane_t

0x8ab2,	// (0x00027315) fps_text_pane_ParamLimits

0x8ab2,	// (0x00027315) fps_text_pane

0x8abf,	// (0x00027322) main_fps_pane_g1_ParamLimits

0x8abf,	// (0x00027322) main_fps_pane_g1

0x8acb,	// (0x0002732e) wait_bar_pane_cp010_ParamLimits

0x8acb,	// (0x0002732e) wait_bar_pane_cp010

0x8ad7,	// (0x0002733a) fps_text_pane_t1_ParamLimits

0x8ad7,	// (0x0002733a) fps_text_pane_t1

0x5e00,	// (0x00024663) cam4_image_uncrop_pane_g1

0x5e09,	// (0x0002466c) cam4_image_uncrop_pane_g2

0x5e12,	// (0x00024675) cam4_image_uncrop_pane_g3

0x5e1b,	// (0x0002467e) cam4_image_uncrop_pane_g4

0x0003,

0xf83a,	// (0x0002e09d) cam4_image_uncrop_pane_g

0x88a6,	// (0x00027109) dia3_listrow_pane_ParamLimits

0x9bdf,	// (0x00028442) main_phob2_pane

0x7d23,	// (0x00026586) cell_tport_appsw_pane_cp02_ParamLimits

0x7d23,	// (0x00026586) cell_tport_appsw_pane_cp02

0x7d32,	// (0x00026595) cell_tport_appsw_pane_cp03_ParamLimits

0x7d32,	// (0x00026595) cell_tport_appsw_pane_cp03

0x9bdf,	// (0x00028442) phob2_contact_card_pane

0x9bdf,	// (0x00028442) phob2_listscroll_pane

0xea09,	// (0x0002d26c) phob2_list_pane

0xea11,	// (0x0002d274) scroll_pane_cp034

0x8af0,	// (0x00027353) phob2_cc_data_pane_ParamLimits

0x8af0,	// (0x00027353) phob2_cc_data_pane

0x8b07,	// (0x0002736a) phob2_cc_listscroll_pane_ParamLimits

0x8b07,	// (0x0002736a) phob2_cc_listscroll_pane

0x8b23,	// (0x00027386) list_double_large_graphic_phob2_pane_ParamLimits

0x8b23,	// (0x00027386) list_double_large_graphic_phob2_pane

0x8b37,	// (0x0002739a) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x8b37,	// (0x0002739a) list_double_large_graphic_phob2_pane_g1

0x8b44,	// (0x000273a7) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x8b44,	// (0x000273a7) list_double_large_graphic_phob2_pane_g2

0x0003,

0xfdda,	// (0x0002e63d) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfdda,	// (0x0002e63d) list_double_large_graphic_phob2_pane_g

0x8b6a,	// (0x000273cd) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x8b6a,	// (0x000273cd) list_double_large_graphic_phob2_pane_t1

0x8b7f,	// (0x000273e2) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x8b7f,	// (0x000273e2) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfde3,	// (0x0002e646) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfde3,	// (0x0002e646) list_double_large_graphic_phob2_pane_t

0x9bdf,	// (0x00028442) list_highlight_pane_cp024

0x8b94,	// (0x000273f7) phob2_cc_button_pane

0x8b9e,	// (0x00027401) phob2_cc_data_pane_g1_ParamLimits

0x8b9e,	// (0x00027401) phob2_cc_data_pane_g1

0x8bb1,	// (0x00027414) phob2_cc_data_pane_g2_ParamLimits

0x8bb1,	// (0x00027414) phob2_cc_data_pane_g2

0x0001,

0xfde8,	// (0x0002e64b) phob2_cc_data_pane_g_ParamLimits

0xfde8,	// (0x0002e64b) phob2_cc_data_pane_g

0x8bc5,	// (0x00027428) phob2_cc_data_pane_t1_ParamLimits

0x8bc5,	// (0x00027428) phob2_cc_data_pane_t1

0x8be6,	// (0x00027449) phob2_cc_data_pane_t2_ParamLimits

0x8be6,	// (0x00027449) phob2_cc_data_pane_t2

0x8c07,	// (0x0002746a) phob2_cc_data_pane_t3_ParamLimits

0x8c07,	// (0x0002746a) phob2_cc_data_pane_t3

0x0002,

0xfded,	// (0x0002e650) phob2_cc_data_pane_t_ParamLimits

0xfded,	// (0x0002e650) phob2_cc_data_pane_t

0xea19,	// (0x0002d27c) phob2_cc_list_pane_ParamLimits

0xea19,	// (0x0002d27c) phob2_cc_list_pane

0xd81b,	// (0x0002c07e) scroll_pane_cp035_ParamLimits

0xd81b,	// (0x0002c07e) scroll_pane_cp035

0xa2ae,	// (0x00028b11) bg_button_pane_cp033

0x8c28,	// (0x0002748b) phob2_cc_button_pane_g1

0x8c34,	// (0x00027497) phob2_cc_button_pane_t1

0x8c49,	// (0x000274ac) phob2_cc_button_pane_t2

0x0001,

0xfdf4,	// (0x0002e657) phob2_cc_button_pane_t

0x8c5b,	// (0x000274be) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x8c5b,	// (0x000274be) list_double_large_graphic_phob2_cc_pane

0x8ca8,	// (0x0002750b) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x8ca8,	// (0x0002750b) list_double_large_graphic_phob2_cc_pane_g1

0x8cb9,	// (0x0002751c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x8cb9,	// (0x0002751c) list_double_large_graphic_phob2_cc_pane_g2

0x8cc8,	// (0x0002752b) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x8cc8,	// (0x0002752b) list_double_large_graphic_phob2_cc_pane_g3

0x8cd7,	// (0x0002753a) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x8cd7,	// (0x0002753a) list_double_large_graphic_phob2_cc_pane_g4

0x8ce8,	// (0x0002754b) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x8ce8,	// (0x0002754b) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfdf9,	// (0x0002e65c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfdf9,	// (0x0002e65c) list_double_large_graphic_phob2_cc_pane_g

0x8cf7,	// (0x0002755a) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x8cf7,	// (0x0002755a) list_double_large_graphic_phob2_cc_pane_t1

0x8d20,	// (0x00027583) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x8d20,	// (0x00027583) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe04,	// (0x0002e667) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe04,	// (0x0002e667) list_double_large_graphic_phob2_cc_pane_t

0xea25,	// (0x0002d288) list_highlight_pane_cp025_ParamLimits

0xea25,	// (0x0002d288) list_highlight_pane_cp025

0xa2ae,	// (0x00028b11) bg_button_pane_cp033_ParamLimits

0x8c28,	// (0x0002748b) phob2_cc_button_pane_g1_ParamLimits

0x8c34,	// (0x00027497) phob2_cc_button_pane_t1_ParamLimits

0x8c49,	// (0x000274ac) phob2_cc_button_pane_t2_ParamLimits

0xfdf4,	// (0x0002e657) phob2_cc_button_pane_t_ParamLimits

0x2444,	// (0x00020ca7) popup_wgtman_window

0xd03e,	// (0x0002b8a1) scroll_pane_cp038

0x861c,	// (0x00026e7f) wgtman_btn_pane_cp_01_ParamLimits

0x861c,	// (0x00026e7f) wgtman_btn_pane_cp_01

0xea33,	// (0x0002d296) wgtman_content_pane

0xea3c,	// (0x0002d29f) wgtman_heading_pane

0x9bdf,	// (0x00028442) bg_heading_pane_cp02

0xea45,	// (0x0002d2a8) wgtman_heading_pane_g1

0xea4d,	// (0x0002d2b0) wgtman_heading_pane_t1

0xea5b,	// (0x0002d2be) scroll_pane_cp036

0xea63,	// (0x0002d2c6) wgtman_list_pane

0xdeaf,	// (0x0002c712) wgtman_list_pane_t1_ParamLimits

0xdeaf,	// (0x0002c712) wgtman_list_pane_t1

0x1b9f,	// (0x00020402) cam4_grid_pane

0x656b,	// (0x00024dce) bg_button_pane_cp015_ParamLimits

0x6580,	// (0x00024de3) bg_button_pane_cp016_ParamLimits

0x658c,	// (0x00024def) bg_button_pane_cp017_ParamLimits

0x65e5,	// (0x00024e48) popup_vitu2_query_window_g3_ParamLimits

0x65e5,	// (0x00024e48) popup_vitu2_query_window_g3

0x6686,	// (0x00024ee9) popup_vitu2_query_window_t6_ParamLimits

0x6686,	// (0x00024ee9) popup_vitu2_query_window_t6

0x66b1,	// (0x00024f14) popup_vitu2_query_window_t7_ParamLimits

0x66b1,	// (0x00024f14) popup_vitu2_query_window_t7

0xd833,	// (0x0002c096) cam4_grid_pane_g1

0xd83c,	// (0x0002c09f) cam4_grid_pane_g2

0xea6b,	// (0x0002d2ce) cam4_grid_pane_g3

0xea74,	// (0x0002d2d7) cam4_grid_pane_g4

0x0003,

0xfe09,	// (0x0002e66c) cam4_grid_pane_g

0x2dcc,	// (0x0002162f) aid_placing_vt_slider_lsc_ParamLimits

0x30ff,	// (0x00021962) vidtel_button_pane_ParamLimits

0x30ff,	// (0x00021962) vidtel_button_pane

0x9bdf,	// (0x00028442) bg_button_pane_cp034

0xea7f,	// (0x0002d2e2) vidtel_button_pane_g1

0xea87,	// (0x0002d2ea) vidtel_button_pane_t1

0xd14c,	// (0x0002b9af) aid_size_vtel_slider_touch

0xd81b,	// (0x0002c07e) scroll_pane_cp039

0x72b0,	// (0x00025b13) ncim_query_button_pane_cp01_ParamLimits

0x72cf,	// (0x00025b32) ncimui_query_pane_g1_ParamLimits

0xa2ae,	// (0x00028b11) input_focus_pane_cp012_ParamLimits

0xdb61,	// (0x0002c3c4) ncim_query_entry_pane_t1_ParamLimits

0xd81b,	// (0x0002c07e) scroll_pane_cp039_ParamLimits

0x41c3,	// (0x00022a26) navi_pane_bcale_mc_g1

0x41cb,	// (0x00022a2e) navi_pane_bcale_mc_t1

0xdf9b,	// (0x0002c7fe) main_sp_fs_email_pane_g1

0xdfa7,	// (0x0002c80a) main_sp_fs_email_pane_g2

0x0001,

0xfc1f,	// (0x0002e482) main_sp_fs_email_pane_g

0xe3d7,	// (0x0002cc3a) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe3d7,	// (0x0002cc3a) list_single_cale_mrui_row_pane_g3

0x828a,	// (0x00026aed) list_single_recal_day_pane_g5_event_pane

0xe5b4,	// (0x0002ce17) list_single_recal_day_pane_g7

0xea9d,	// (0x0002d300) list_recal_day_event_pane_cp01

0xeaa6,	// (0x0002d309) list_recal_vselct_arw_lo_pane_cp01

0xeaae,	// (0x0002d311) list_recal_vselct_arw_up_pane_cp01

0xeab6,	// (0x0002d319) list_recal_vselct_pane_cp01

0xd16e,	// (0x0002b9d1) list_recal_day_event_pane_cp01_g1

0xeac0,	// (0x0002d323) list_recal_day_event_pane_cp01_t1

0xe5bc,	// (0x0002ce1f) list_single_recal_day_pane_t1_ParamLimits

0xe5ce,	// (0x0002ce31) list_single_recal_day_pane_t2_ParamLimits

0xfcf8,	// (0x0002e55b) list_single_recal_day_pane_t_ParamLimits

0xa28c,	// (0x00028aef) bg_notes_pane_ParamLimits

0xa365,	// (0x00028bc8) list_notes_pane_ParamLimits

0x2536,	// (0x00020d99) scroll_pane_cp06_ParamLimits

0xa387,	// (0x00028bea) main_notes_pane_ParamLimits

0xa2ae,	// (0x00028b11) main_welc_pane

0x8d6b,	// (0x000275ce) main_welc_body_pane_ParamLimits

0x8d6b,	// (0x000275ce) main_welc_body_pane

0x8d86,	// (0x000275e9) main_welc_opti_pane_ParamLimits

0x8d86,	// (0x000275e9) main_welc_opti_pane

0x8de7,	// (0x0002764a) main_welc_pane_t1_ParamLimits

0x8de7,	// (0x0002764a) main_welc_pane_t1

0xe86e,	// (0x0002d0d1) main_welc_body_row_pane_ParamLimits

0xe86e,	// (0x0002d0d1) main_welc_body_row_pane

0xa307,	// (0x00028b6a) main_welc_opti_row_pane_ParamLimits

0xa307,	// (0x00028b6a) main_welc_opti_row_pane

0xeade,	// (0x0002d341) main_welc_opti_row_pane_g1

0x8f8d,	// (0x000277f0) main_welc_opti_row_pane_t1

0xeae6,	// (0x0002d349) main_welc_body_row_pane_t1

0xe82c,	// (0x0002d08f) popup_notif_wgt_heading_pane

0xe846,	// (0x0002d0a9) aid_size_list_notif_wgt_del_ParamLimits

0xe853,	// (0x0002d0b6) list_notif_wgt_row_pane_g1_ParamLimits

0xe85f,	// (0x0002d0c2) list_notif_wgt_row_pane_g2_ParamLimits

0xe888,	// (0x0002d0eb) list_notif_wgt_row_pane_g3_ParamLimits

0xfd53,	// (0x0002e5b6) list_notif_wgt_row_pane_g_ParamLimits

0xe895,	// (0x0002d0f8) list_notif_wgt_row_pane_t1_ParamLimits

0xe8ab,	// (0x0002d10e) list_notif_wgt_row_pane_t2_ParamLimits

0xe8bd,	// (0x0002d120) list_notif_wgt_row_pane_t3_ParamLimits

0xfd5a,	// (0x0002e5bd) list_notif_wgt_row_pane_t_ParamLimits

0x86aa,	// (0x00026f0d) listrow_wgtman_pane_g1_ParamLimits

0x86b7,	// (0x00026f1a) listrow_wgtman_pane_g2_ParamLimits

0xfd8a,	// (0x0002e5ed) listrow_wgtman_pane_g_ParamLimits

0x86d5,	// (0x00026f38) listrow_wgtman_pane_t1_ParamLimits

0x86ed,	// (0x00026f50) listrow_wgtman_pane_t2_ParamLimits

0xfd8f,	// (0x0002e5f2) listrow_wgtman_pane_t_ParamLimits

0x8713,	// (0x00026f76) wait_bar_pane_cp09_ParamLimits

0x9bdf,	// (0x00028442) bg_popup_heading_pane_cp02

0xeaf5,	// (0x0002d358) popup_notif_wgt_heading_pane_g1

0xeafd,	// (0x0002d360) popup_notif_wgt_heading_pane_t1

0x9bdf,	// (0x00028442) main_vids_pane

0x9bdf,	// (0x00028442) vids_listscroll_pane

0x8f9c,	// (0x000277ff) scroll_pane_cp040

0x9bdf,	// (0x00028442) vids_list_pane

0x8fa7,	// (0x0002780a) vids_list_double_pane_ParamLimits

0x8fa7,	// (0x0002780a) vids_list_double_pane

0x8fbb,	// (0x0002781e) vids_list_double_pane_g1

0x8fc4,	// (0x00027827) vids_list_double_pane_t1

0x8fd4,	// (0x00027837) vids_list_double_pane_t2

0x0001,

0xfe28,	// (0x0002e68b) vids_list_double_pane_t

0x12ab,	// (0x0001fb0e) main_ncimui_pane_ParamLimits

0x70f1,	// (0x00025954) main_ncimui_pane_g1_ParamLimits

0x70ff,	// (0x00025962) main_ncimui_pane_g2_ParamLimits

0x70ff,	// (0x00025962) main_ncimui_pane_g2

0x0001,

0xfb25,	// (0x0002e388) main_ncimui_pane_g_ParamLimits

0xfb25,	// (0x0002e388) main_ncimui_pane_g

0x8da1,	// (0x00027604) main_welc_pane_g1_ParamLimits

0x8da1,	// (0x00027604) main_welc_pane_g1

0x8dad,	// (0x00027610) main_welc_pane_g2_ParamLimits

0x8dad,	// (0x00027610) main_welc_pane_g2

0x0003,

0xfe12,	// (0x0002e675) main_welc_pane_g_ParamLimits

0xfe12,	// (0x0002e675) main_welc_pane_g

0xa28c,	// (0x00028aef) listscroll_mce_pane_ParamLimits

0x428d,	// (0x00022af0) wait_bar_pane_cp10

0xc202,	// (0x0002aa65) main_cale_day_pane_ParamLimits

0xc202,	// (0x0002aa65) main_cale_week_pane_ParamLimits

0xa28c,	// (0x00028aef) main_messa_pane_ParamLimits

0x58f4,	// (0x00024157) main_clock2_btn_pane_ParamLimits

0x58f4,	// (0x00024157) main_clock2_btn_pane

0xc9d2,	// (0x0002b235) main_clock2_btn_pane_cp01_ParamLimits

0xc9d2,	// (0x0002b235) main_clock2_btn_pane_cp01

0xe363,	// (0x0002cbc6) list_cale_mrui_pane_ParamLimits

0xe8f3,	// (0x0002d156) main_cf0_pane_g2

0x0001,

0xfd61,	// (0x0002e5c4) main_cf0_pane_g

0x88fe,	// (0x00027161) area_left_week_number_pane_ParamLimits

0x8911,	// (0x00027174) area_top_day_name_pane_ParamLimits

0x891f,	// (0x00027182) frame_month_view_pane_ParamLimits

0xe9ce,	// (0x0002d231) grid_month_view_pane_ParamLimits

0xe9dc,	// (0x0002d23f) frm_month_g1_ParamLimits

0x899d,	// (0x00027200) frm_month_g2_ParamLimits

0x89ae,	// (0x00027211) frm_month_g3_ParamLimits

0x89bf,	// (0x00027222) frm_month_g4_ParamLimits

0x89d0,	// (0x00027233) frm_month_g5_ParamLimits

0x89e1,	// (0x00027244) frm_month_g6_ParamLimits

0x89f4,	// (0x00027257) frm_month_g7_ParamLimits

0xe9e9,	// (0x0002d24c) frm_month_g8_ParamLimits

0x8a07,	// (0x0002726a) frm_month_g9_ParamLimits

0x8a14,	// (0x00027277) frm_month_g10_ParamLimits

0x8a21,	// (0x00027284) frm_month_g11_ParamLimits

0x8a2e,	// (0x00027291) frm_month_g12_ParamLimits

0x8a3b,	// (0x0002729e) frm_month_g13_ParamLimits

0x8a4a,	// (0x000272ad) frm_month_g14_ParamLimits

0x8a59,	// (0x000272bc) frm_month_g15_ParamLimits

0x8a68,	// (0x000272cb) frm_month_g16_ParamLimits

0xfdb9,	// (0x0002e61c) frm_month_g_ParamLimits

0xe9f6,	// (0x0002d259) cell_top_day_name_pane_t1_ParamLimits

0x8a77,	// (0x000272da) cell_area_left_week_number_pane_g1_ParamLimits

0x8a86,	// (0x000272e9) cell_area_left_week_number_pane_t1_ParamLimits

0xa315,	// (0x00028b78) cell_month_view_pane_g1_ParamLimits

0x8a9c,	// (0x000272ff) cell_month_view_pane_t1_ParamLimits

0xa284,	// (0x00028ae7) main_clock2_btn_pane_g1

0xeb0b,	// (0x0002d36e) main_clock2_btn_pane_t1

0xa2ae,	// (0x00028b11) listscroll_cmail_pane_ParamLimits

0xdf9b,	// (0x0002c7fe) main_sp_fs_email_pane_g1_ParamLimits

0xdfa7,	// (0x0002c80a) main_sp_fs_email_pane_g2_ParamLimits

0xfc1f,	// (0x0002e482) main_sp_fs_email_pane_g_ParamLimits

0xe523,	// (0x0002cd86) list_recal_day_pane_ParamLimits

0xe534,	// (0x0002cd97) mian_recal_day_pane_t1

0x7c07,	// (0x0002646a) list_single_dyc_row_text_pane_t4_ParamLimits

0x7c07,	// (0x0002646a) list_single_dyc_row_text_pane_t4

0x7c46,	// (0x000264a9) list_single_dyc_row_text_pane_t5_ParamLimits

0x7c46,	// (0x000264a9) list_single_dyc_row_text_pane_t5

0xe051,	// (0x0002c8b4) list_single_dyc_row_text_pane_t6_ParamLimits

0xe051,	// (0x0002c8b4) list_single_dyc_row_text_pane_t6

0x3e5b,	// (0x000226be) aid_mgn_list_cale_time_pane

0x12ab,	// (0x0001fb0e) main_gallery2_pane_ParamLimits

0xc9e6,	// (0x0002b249) main_clock2_pane_cp01_t1

0xc9f4,	// (0x0002b257) main_clock2_pane_cp01_t3

0x0001,

0xf711,	// (0x0002df74) main_clock2_pane_cp01_t

0x2903,	// (0x00021166) cale_week_scroll_pane_g16_ParamLimits

0x2903,	// (0x00021166) cale_week_scroll_pane_g16

0xa533,	// (0x00028d96) vorec_slider_pane

0xea87,	// (0x0002d2ea) vidtel_button_pane_t1_ParamLimits

0x82e5,	// (0x00026b48) main_fs_bigclock_clock_pane_g1_ParamLimits

0x82e5,	// (0x00026b48) main_fs_bigclock_clock_pane_g2_ParamLimits

0x82f4,	// (0x00026b57) main_fs_bigclock_clock_pane_g3_ParamLimits

0x82f4,	// (0x00026b57) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfd1b,	// (0x0002e57e) main_fs_bigclock_clock_pane_g_ParamLimits

0x8304,	// (0x00026b67) main_fs_bigclock_clock_pane_t1_ParamLimits

0x8319,	// (0x00026b7c) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfd24,	// (0x0002e587) main_fs_bigclock_clock_pane_t_ParamLimits

0x523e,	// (0x00023aa1) main_mup3_lyrics_pane_ParamLimits

0x523e,	// (0x00023aa1) main_mup3_lyrics_pane

0x8fe4,	// (0x00027847) main_mup3_lyrics_pane_t1_ParamLimits

0x8fe4,	// (0x00027847) main_mup3_lyrics_pane_t1

0x1669,	// (0x0001fecc) aid_main_mp4_pane_t1_area

0x1673,	// (0x0001fed6) aid_main_mp4_pane_t2_area

0x1780,	// (0x0001ffe3) main_mp4_pane_g7_ParamLimits

0x1780,	// (0x0001ffe3) main_mp4_pane_g7

0x178c,	// (0x0001ffef) main_mp4_pane_g8_ParamLimits

0x178c,	// (0x0001ffef) main_mp4_pane_g8

0x5d46,	// (0x000245a9) aid_call6_pane_g1_size

0x8c87,	// (0x000274ea) list_double_large_graphic_phob2_other_pane_ParamLimits

0x8c87,	// (0x000274ea) list_double_large_graphic_phob2_other_pane

0x900b,	// (0x0002786e) list_double_large_graphic_phob2_other_pane_g1

0x9bdf,	// (0x00028442) list_highlight_pane_cp026

0xa2ae,	// (0x00028b11) main_welc_pane_ParamLimits

0x7a70,	// (0x000262d3) main_sp_fs_ctrlbar_pane_g3_ParamLimits

0x7a70,	// (0x000262d3) main_sp_fs_ctrlbar_pane_g3

0x7a8a,	// (0x000262ed) main_sp_fs_ctrlbar_pane_g4_ParamLimits

0x7a8a,	// (0x000262ed) main_sp_fs_ctrlbar_pane_g4

0x7abc,	// (0x0002631f) toolbar2_fixed_button_pane_cp01

0x7ac7,	// (0x0002632a) toolbar2_fixed_button_pane_cp02

0x7ad4,	// (0x00026337) toolbar2_fixed_button_pane_cp03

0x8d5b,	// (0x000275be) list_welc_entry_pane_ParamLimits

0x8d5b,	// (0x000275be) list_welc_entry_pane

0x8dbb,	// (0x0002761e) main_welc_pane_g3_ParamLimits

0x8dbb,	// (0x0002761e) main_welc_pane_g3

0x8e05,	// (0x00027668) main_welc_pane_t2_ParamLimits

0x8e05,	// (0x00027668) main_welc_pane_t2

0x8e19,	// (0x0002767c) main_welc_pane_t3_ParamLimits

0x8e19,	// (0x0002767c) main_welc_pane_t3

0x0005,

0xfe1b,	// (0x0002e67e) main_welc_pane_t_ParamLimits

0xfe1b,	// (0x0002e67e) main_welc_pane_t

0x8f1d,	// (0x00027780) welc_button_pane_ParamLimits

0x8f1d,	// (0x00027780) welc_button_pane

0x8f7f,	// (0x000277e2) welc_service_logo_pane_ParamLimits

0x8f7f,	// (0x000277e2) welc_service_logo_pane

0x9013,	// (0x00027876) list_single_welc_entry_pane_ParamLimits

0x9013,	// (0x00027876) list_single_welc_entry_pane

0x9024,	// (0x00027887) list_single_welc_entry_pane_g1

0x902e,	// (0x00027891) list_single_welc_entry_pane_t1

0x903c,	// (0x0002789f) list_single_welc_entry_pane_t2

0x0001,

0xfe2d,	// (0x0002e690) list_single_welc_entry_pane_t

0x9bdf,	// (0x00028442) bg_button_pane_cp035

0x904a,	// (0x000278ad) welc_button_pane_t1

0xeb19,	// (0x0002d37c) welc_service_logo_pane_g1

0xeb22,	// (0x0002d385) welc_service_logo_pane_g2

0x0001,

0xfe32,	// (0x0002e695) welc_service_logo_pane_g

0x0de1,	// (0x0001f644) main_int_radio_pane

0xd9ff,	// (0x0002c262) list_single_fs_dyc_pane_g1

0x8b50,	// (0x000273b3) list_double_large_graphic_phob2_pane_g3_ParamLimits

0x8b50,	// (0x000273b3) list_double_large_graphic_phob2_pane_g3

0x8b5c,	// (0x000273bf) list_double_large_graphic_phob2_pane_g4_ParamLimits

0x8b5c,	// (0x000273bf) list_double_large_graphic_phob2_pane_g4

0x9058,	// (0x000278bb) main_int_radio1_pane_ParamLimits

0x9058,	// (0x000278bb) main_int_radio1_pane

0xeb2b,	// (0x0002d38e) find_pane_cp02

0x906e,	// (0x000278d1) input_focus_pane_cp12_ParamLimits

0x906e,	// (0x000278d1) input_focus_pane_cp12

0x907a,	// (0x000278dd) input_focus_pane_cp13_ParamLimits

0x907a,	// (0x000278dd) input_focus_pane_cp13

0x9092,	// (0x000278f5) input_focus_pane_cp14_ParamLimits

0x9092,	// (0x000278f5) input_focus_pane_cp14

0xeb34,	// (0x0002d397) int_radio1_listscroll_pane

0x90aa,	// (0x0002790d) main_int_radio1_pane_g1_ParamLimits

0x90aa,	// (0x0002790d) main_int_radio1_pane_g1

0x90b6,	// (0x00027919) main_int_radio1_pane_t1_ParamLimits

0x90b6,	// (0x00027919) main_int_radio1_pane_t1

0x90c8,	// (0x0002792b) main_int_radio1_pane_t2_ParamLimits

0x90c8,	// (0x0002792b) main_int_radio1_pane_t2

0x90dc,	// (0x0002793f) main_int_radio1_pane_t3_ParamLimits

0x90dc,	// (0x0002793f) main_int_radio1_pane_t3

0x90f0,	// (0x00027953) main_int_radio1_pane_t4_ParamLimits

0x90f0,	// (0x00027953) main_int_radio1_pane_t4

0xeb3e,	// (0x0002d3a1) main_int_radio1_pane_t5_ParamLimits

0xeb3e,	// (0x0002d3a1) main_int_radio1_pane_t5

0x9107,	// (0x0002796a) main_int_radio1_pane_t6_ParamLimits

0x9107,	// (0x0002796a) main_int_radio1_pane_t6

0x9119,	// (0x0002797c) main_int_radio1_pane_t7_ParamLimits

0x9119,	// (0x0002797c) main_int_radio1_pane_t7

0x912b,	// (0x0002798e) main_int_radio1_pane_t8_ParamLimits

0x912b,	// (0x0002798e) main_int_radio1_pane_t8

0x913d,	// (0x000279a0) main_int_radio1_pane_t9_ParamLimits

0x913d,	// (0x000279a0) main_int_radio1_pane_t9

0x914f,	// (0x000279b2) main_int_radio1_pane_t10_ParamLimits

0x914f,	// (0x000279b2) main_int_radio1_pane_t10

0x9180,	// (0x000279e3) main_int_radio1_pane_t11_ParamLimits

0x9180,	// (0x000279e3) main_int_radio1_pane_t11

0x91b1,	// (0x00027a14) main_int_radio1_pane_t12_ParamLimits

0x91b1,	// (0x00027a14) main_int_radio1_pane_t12

0x000b,

0xfe37,	// (0x0002e69a) main_int_radio1_pane_t_ParamLimits

0xfe37,	// (0x0002e69a) main_int_radio1_pane_t

0xea09,	// (0x0002d26c) int_radio_list_pane

0xea11,	// (0x0002d274) scroll_pane_cp037

0xeb50,	// (0x0002d3b3) list_double_large_graphic_int_radio_pane_ParamLimits

0xeb50,	// (0x0002d3b3) list_double_large_graphic_int_radio_pane

0xeb64,	// (0x0002d3c7) list_double_large_graphic_int_radio_pane_g1

0xeb6d,	// (0x0002d3d0) list_double_large_graphic_int_radio_pane_t1

0xeb7b,	// (0x0002d3de) list_double_large_graphic_int_radio_pane_t2

0x0001,

0xfe50,	// (0x0002e6b3) list_double_large_graphic_int_radio_pane_t

0x9bdf,	// (0x00028442) list_highlight_pane_cp027

0xeace,	// (0x0002d331) main_button_pane_4

0x8dc7,	// (0x0002762a) main_welc_pane_g4_ParamLimits

0x8dc7,	// (0x0002762a) main_welc_pane_g4

0x8e2b,	// (0x0002768e) main_welc_pane_t4_ParamLimits

0x8e2b,	// (0x0002768e) main_welc_pane_t4

0x8e3d,	// (0x000276a0) main_welc_pane_t5_ParamLimits

0x8e3d,	// (0x000276a0) main_welc_pane_t5

0x8e71,	// (0x000276d4) main_welc_pane_t6_ParamLimits

0x8e71,	// (0x000276d4) main_welc_pane_t6

0x8f2b,	// (0x0002778e) welc_button_pane_2_ParamLimits

0x8f2b,	// (0x0002778e) welc_button_pane_2

0x8f45,	// (0x000277a8) welc_button_pane_3_ParamLimits

0x8f45,	// (0x000277a8) welc_button_pane_3

0xead6,	// (0x0002d339) welc_button_pane_4

0x8f61,	// (0x000277c4) welc_button_pane_5_ParamLimits

0x8f61,	// (0x000277c4) welc_button_pane_5

0x0b87,	// (0x0001f3ea) main_popup_welc_pane

0xeb98,	// (0x0002d3fb) main_welc_sk_g3

0xeba2,	// (0x0002d405) main_welc_sk_g4

0xebbb,	// (0x0002d41e) main_welc_sk_t3

0xebcb,	// (0x0002d42e) main_welc_sk_t4

0xebdb,	// (0x0002d43e) popup_welc_pane_t4

0xebe9,	// (0x0002d44c) popup_welc_pane_t5

0xebf7,	// (0x0002d45a) popup_welc_pane_t6

0x0de1,	// (0x0001f644) main_acti_pane

0x9bdf,	// (0x00028442) main_sso_pane

0x91c8,	// (0x00027a2b) sso_body_pane_ParamLimits

0x91c8,	// (0x00027a2b) sso_body_pane

0x91d7,	// (0x00027a3a) sso_logo_pane_ParamLimits

0x91d7,	// (0x00027a3a) sso_logo_pane

0x9200,	// (0x00027a63) sso_sk_pane_ParamLimits

0x9200,	// (0x00027a63) sso_sk_pane

0xa555,	// (0x00028db8) main_sso_logo_pane_g1

0x920d,	// (0x00027a70) sso_sk_pane_t1_ParamLimits

0x920d,	// (0x00027a70) sso_sk_pane_t1

0x9221,	// (0x00027a84) sso_sk_pane_t2_ParamLimits

0x9221,	// (0x00027a84) sso_sk_pane_t2

0x0001,

0xfe55,	// (0x0002e6b8) sso_sk_pane_t_ParamLimits

0xfe55,	// (0x0002e6b8) sso_sk_pane_t

0xec39,	// (0x0002d49c) aid_sso_gap

0xec42,	// (0x0002d4a5) aid_sso_txt1

0xec4c,	// (0x0002d4af) aid_sso_txt2

0xec56,	// (0x0002d4b9) aid_sso_txt3

0x0002,

0xfe5a,	// (0x0002e6bd) aid_sso_txt

0xec60,	// (0x0002d4c3) aid_sso_widget

0x927e,	// (0x00027ae1) sso_btn_pane_ParamLimits

0x927e,	// (0x00027ae1) sso_btn_pane

0x92f7,	// (0x00027b5a) sso_option_pane_ParamLimits

0x92f7,	// (0x00027b5a) sso_option_pane

0x9373,	// (0x00027bd6) sso_query_pane_ParamLimits

0x9373,	// (0x00027bd6) sso_query_pane

0x93c3,	// (0x00027c26) sso_query_pane_cp01_ParamLimits

0x93c3,	// (0x00027c26) sso_query_pane_cp01

0x941b,	// (0x00027c7e) sso_t_hdr_pane_ParamLimits

0x941b,	// (0x00027c7e) sso_t_hdr_pane

0x943f,	// (0x00027ca2) sso_t_nml_pane_ParamLimits

0x943f,	// (0x00027ca2) sso_t_nml_pane

0xec6a,	// (0x0002d4cd) sso_t_sub_pane

0x91e4,	// (0x00027a47) sso_popup_window_ParamLimits

0x91e4,	// (0x00027a47) sso_popup_window

0x9233,	// (0x00027a96) sso_apps_pane_ParamLimits

0x9233,	// (0x00027a96) sso_apps_pane

0x9256,	// (0x00027ab9) sso_body_pane_g1

0x925e,	// (0x00027ac1) sso_body_pane_t1

0x926e,	// (0x00027ad1) sso_body_pane_t2

0x0001,

0xfe61,	// (0x0002e6c4) sso_body_pane_t

0x92c9,	// (0x00027b2c) sso_btn_pane_cp01_ParamLimits

0x92c9,	// (0x00027b2c) sso_btn_pane_cp01

0x9345,	// (0x00027ba8) sso_prog_pane_ParamLimits

0x9345,	// (0x00027ba8) sso_prog_pane

0x948f,	// (0x00027cf2) sso_t_hdr_pane_t1_ParamLimits

0x948f,	// (0x00027cf2) sso_t_hdr_pane_t1

0xec7f,	// (0x0002d4e2) input_focus_pane_cp10_ParamLimits

0xec7f,	// (0x0002d4e2) input_focus_pane_cp10

0xec99,	// (0x0002d4fc) sso_query_pane_t1_ParamLimits

0xec99,	// (0x0002d4fc) sso_query_pane_t1

0xecac,	// (0x0002d50f) sso_query_pane_t2_ParamLimits

0xecac,	// (0x0002d50f) sso_query_pane_t2

0xecc6,	// (0x0002d529) sso_query_pane_t3_ParamLimits

0xecc6,	// (0x0002d529) sso_query_pane_t3

0xecf0,	// (0x0002d553) sso_query_pane_t4_ParamLimits

0xecf0,	// (0x0002d553) sso_query_pane_t4

0x0003,

0xfe66,	// (0x0002e6c9) sso_query_pane_t_ParamLimits

0xfe66,	// (0x0002e6c9) sso_query_pane_t

0x9bdf,	// (0x00028442) bg_button_pane_cp22

0xeb89,	// (0x0002d3ec) sso_btn_pane_t1

0x94a8,	// (0x00027d0b) sso_t_nml_pane_t1_ParamLimits

0x94a8,	// (0x00027d0b) sso_t_nml_pane_t1

0x94c5,	// (0x00027d28) sso_option_row_pane_ParamLimits

0x94c5,	// (0x00027d28) sso_option_row_pane

0xed14,	// (0x0002d577) sso_t_sub_pane_t1_ParamLimits

0xed14,	// (0x0002d577) sso_t_sub_pane_t1

0xa2ae,	// (0x00028b11) bg_popup_window_pane_cp11_ParamLimits

0xa2ae,	// (0x00028b11) bg_popup_window_pane_cp11

0xed31,	// (0x0002d594) popup_sk_window_cp01_ParamLimits

0xed31,	// (0x0002d594) popup_sk_window_cp01

0xed3e,	// (0x0002d5a1) sso_popup_body_pane_ParamLimits

0xed3e,	// (0x0002d5a1) sso_popup_body_pane

0xed4b,	// (0x0002d5ae) scroll_pane_cp21_ParamLimits

0xed4b,	// (0x0002d5ae) scroll_pane_cp21

0xed58,	// (0x0002d5bb) sso_popup_body_t_pane_ParamLimits

0xed58,	// (0x0002d5bb) sso_popup_body_t_pane

0xed65,	// (0x0002d5c8) sso_popup_body_t_hdr_pane_ParamLimits

0xed65,	// (0x0002d5c8) sso_popup_body_t_hdr_pane

0xed78,	// (0x0002d5db) sso_popup_body_t_nml_pane_ParamLimits

0xed78,	// (0x0002d5db) sso_popup_body_t_nml_pane

0xed96,	// (0x0002d5f9) sso_popup_body_t_sub_pane_ParamLimits

0xed96,	// (0x0002d5f9) sso_popup_body_t_sub_pane

0xedb9,	// (0x0002d61c) sso_popup_body_t_hdr_pane_t1

0x94d2,	// (0x00027d35) sso_popup_body_t_nml_pane_t1_ParamLimits

0x94d2,	// (0x00027d35) sso_popup_body_t_nml_pane_t1

0xedc9,	// (0x0002d62c) sso_popup_body_t_sub_pane_t1_ParamLimits

0xedc9,	// (0x0002d62c) sso_popup_body_t_sub_pane_t1

0xa555,	// (0x00028db8) sso_prog_pane_g1

0x9519,	// (0x00027d7c) sso_apps_pane_comp1_ParamLimits

0x9519,	// (0x00027d7c) sso_apps_pane_comp1

0xedee,	// (0x0002d651) sso_apps_pane_comp1_g1

0xedf6,	// (0x0002d659) sso_apps_pane_comp1_t1

0xee12,	// (0x0002d675) sso_option_row_pane_g1

0xee1a,	// (0x0002d67d) sso_option_row_pane_t1

0x8d49,	// (0x000275ac) bg_welc_area_ParamLimits

0x8d49,	// (0x000275ac) bg_welc_area

0x8ea7,	// (0x0002770a) sso_t_hdr_pane_a_t1_ParamLimits

0x8ea7,	// (0x0002770a) sso_t_hdr_pane_a_t1

0x8ebb,	// (0x0002771e) sso_t_nml_pane_a_t1_ParamLimits

0x8ebb,	// (0x0002771e) sso_t_nml_pane_a_t1

0x8ee9,	// (0x0002774c) sso_t_sub_pane_a_t1_ParamLimits

0x8ee9,	// (0x0002774c) sso_t_sub_pane_a_t1

0xeb89,	// (0x0002d3ec) sso_btn_pane_t1_copy1

0x9bdf,	// (0x00028442) welc_button_pane_2_comp1

0xec07,	// (0x0002d46a) sso_t_hdr_pane_p_t1

0xec17,	// (0x0002d47a) sso_t_nml_pane_p_t1

0xec27,	// (0x0002d48a) sso_t_sub_pane_p_t1

0xe104,	// (0x0002c967) list_cmail_pane_ParamLimits

0x8f71,	// (0x000277d4) welc_button_pane_cp01_ParamLimits

0x8f71,	// (0x000277d4) welc_button_pane_cp01

0x9bdf,	// (0x00028442) main_att_pane

0xee04,	// (0x0002d667) input_focus_pane_cp10_t1

0xee1a,	// (0x0002d67d) sso_option_row_pane_t1_ParamLimits

0x952e,	// (0x00027d91) main_att_body_pane_ParamLimits

0x952e,	// (0x00027d91) main_att_body_pane

0x955a,	// (0x00027dbd) att_btn_pane_ParamLimits

0x955a,	// (0x00027dbd) att_btn_pane

0x957c,	// (0x00027ddf) att_btn_pane_cp01_ParamLimits

0x957c,	// (0x00027ddf) att_btn_pane_cp01

0x9596,	// (0x00027df9) att_li_srv_pane_ParamLimits

0x9596,	// (0x00027df9) att_li_srv_pane

0x95a8,	// (0x00027e0b) att_opt_pane_ParamLimits

0x95a8,	// (0x00027e0b) att_opt_pane

0x95ec,	// (0x00027e4f) att_query_pane_ParamLimits

0x95ec,	// (0x00027e4f) att_query_pane

0x9630,	// (0x00027e93) att_query_pane_cp01_ParamLimits

0x9630,	// (0x00027e93) att_query_pane_cp01

0x9674,	// (0x00027ed7) att_t_hdr_pane_ParamLimits

0x9674,	// (0x00027ed7) att_t_hdr_pane

0x96d2,	// (0x00027f35) att_t_nml_pane_ParamLimits

0x96d2,	// (0x00027f35) att_t_nml_pane

0x971a,	// (0x00027f7d) att_t_nml_pane_cp01_ParamLimits

0x971a,	// (0x00027f7d) att_t_nml_pane_cp01

0x973e,	// (0x00027fa1) att_t_nmlb_pane_ParamLimits

0x973e,	// (0x00027fa1) att_t_nmlb_pane

0x9758,	// (0x00027fbb) att_term_pane_ParamLimits

0x9758,	// (0x00027fbb) att_term_pane

0x979e,	// (0x00028001) main_att_body_pane_g1_ParamLimits

0x979e,	// (0x00028001) main_att_body_pane_g1

0xee30,	// (0x0002d693) att_t_hdr_pane_t1_ParamLimits

0xee30,	// (0x0002d693) att_t_hdr_pane_t1

0xee49,	// (0x0002d6ac) att_t_nml_pane_t1_ParamLimits

0xee49,	// (0x0002d6ac) att_t_nml_pane_t1

0xee6e,	// (0x0002d6d1) att_btn_pane_t1

0x9bdf,	// (0x00028442) bg_button_pane_cp23

0x97d2,	// (0x00028035) att_li_srv_row_pane_ParamLimits

0x97d2,	// (0x00028035) att_li_srv_row_pane

0xee7e,	// (0x0002d6e1) att_t_nmlb_pane_t1_ParamLimits

0xee7e,	// (0x0002d6e1) att_t_nmlb_pane_t1

0xee97,	// (0x0002d6fa) att_query_pane_t1

0xeea6,	// (0x0002d709) att_query_pane_t2

0xeeb5,	// (0x0002d718) att_query_pane_t3

0x0002,

0xfe6f,	// (0x0002e6d2) att_query_pane_t

0xeec4,	// (0x0002d727) input_focus_pane_cp11

0xeecd,	// (0x0002d730) att_term_pane_t1_ParamLimits

0xeecd,	// (0x0002d730) att_term_pane_t1

0x9bdf,	// (0x00028442) att_opt_row_pane

0xeeea,	// (0x0002d74d) att_opt_row_pane_g1

0xeef2,	// (0x0002d755) att_opt_row_pane_t1_ParamLimits

0xeef2,	// (0x0002d755) att_opt_row_pane_t1

0x97e2,	// (0x00028045) att_li_srv_row_pane_g1

0x97ea,	// (0x0002804d) att_li_srv_row_pane_t1

0x97ff,	// (0x00028062) att_li_srv_row_pane_t2

0x0001,

0xfe76,	// (0x0002e6d9) att_li_srv_row_pane_t

0x9bdf,	// (0x00028442) main_call7_pane

0x9bdf,	// (0x00028442) main_vod_pane

0xec6a,	// (0x0002d4cd) sso_t_sub_pane_ParamLimits

0x9542,	// (0x00027da5) att_btn_emg_pane_ParamLimits

0x9542,	// (0x00027da5) att_btn_emg_pane

0x97ea,	// (0x0002804d) att_li_srv_row_pane_t1_ParamLimits

0x97ff,	// (0x00028062) att_li_srv_row_pane_t2_ParamLimits

0xfe76,	// (0x0002e6d9) att_li_srv_row_pane_t_ParamLimits

0xef0b,	// (0x0002d76e) att_btn_close_pane_g1

0x9bdf,	// (0x00028442) bg_button_pane_cp24

0x9814,	// (0x00028077) main_vod_body_pane_ParamLimits

0x9814,	// (0x00028077) main_vod_body_pane

0x9822,	// (0x00028085) main_vod_body_pane_g1_ParamLimits

0x9822,	// (0x00028085) main_vod_body_pane_g1

0x9852,	// (0x000280b5) scroll_pane_cp24_ParamLimits

0x9852,	// (0x000280b5) scroll_pane_cp24

0x989a,	// (0x000280fd) vod_btn_pane_ParamLimits

0x989a,	// (0x000280fd) vod_btn_pane

0x98da,	// (0x0002813d) vod_det_pane_ParamLimits

0x98da,	// (0x0002813d) vod_det_pane

0x9906,	// (0x00028169) vod_logo_g1_ParamLimits

0x9906,	// (0x00028169) vod_logo_g1

0x9940,	// (0x000281a3) vod_opt_pane_ParamLimits

0x9940,	// (0x000281a3) vod_opt_pane

0x9970,	// (0x000281d3) vod_opt_pane_cp01_ParamLimits

0x9970,	// (0x000281d3) vod_opt_pane_cp01

0x9998,	// (0x000281fb) vod_query_pane_ParamLimits

0x9998,	// (0x000281fb) vod_query_pane

0x99c2,	// (0x00028225) vod_query_pane_cp01_ParamLimits

0x99c2,	// (0x00028225) vod_query_pane_cp01

0x99ce,	// (0x00028231) vod_t_nml_pane_ParamLimits

0x99ce,	// (0x00028231) vod_t_nml_pane

0x9a7c,	// (0x000282df) vod_t_nml_pane_cp01_ParamLimits

0x9a7c,	// (0x000282df) vod_t_nml_pane_cp01

0x9ab4,	// (0x00028317) vod_t_sub_pane_ParamLimits

0x9ab4,	// (0x00028317) vod_t_sub_pane

0x9ae2,	// (0x00028345) vod_t_sub_pane_cp01_ParamLimits

0x9ae2,	// (0x00028345) vod_t_sub_pane_cp01

0xeec4,	// (0x0002d727) vod_query_field_pane

0xee97,	// (0x0002d6fa) vod_query_pane_t1

0x9bdf,	// (0x00028442) bg_button_pane_cp25

0xef13,	// (0x0002d776) sso_btn_pane_t1_copy2

0x9b0a,	// (0x0002836d) vod_t_nml_pane_t1_ParamLimits

0x9b0a,	// (0x0002836d) vod_t_nml_pane_t1

0xef23,	// (0x0002d786) vod_opt_row_pane_ParamLimits

0xef23,	// (0x0002d786) vod_opt_row_pane

0xef35,	// (0x0002d798) vod_t_sub_pane_t1_ParamLimits

0xef35,	// (0x0002d798) vod_t_sub_pane_t1

0x9b47,	// (0x000283aa) vod_det_cell_pane_ParamLimits

0x9b47,	// (0x000283aa) vod_det_cell_pane

0x9bdf,	// (0x00028442) input_focus_pane_cp15

0xef4e,	// (0x0002d7b1) vod_query_field_pane_t1

0xef5c,	// (0x0002d7bf) vod_opt_row_pane_g1_ParamLimits

0xef5c,	// (0x0002d7bf) vod_opt_row_pane_g1

0xef68,	// (0x0002d7cb) vod_opt_row_pane_t1_ParamLimits

0xef68,	// (0x0002d7cb) vod_opt_row_pane_t1

0xef8d,	// (0x0002d7f0) vod_det_cell_field_pane

0xef96,	// (0x0002d7f9) vod_det_cell_pane_g1

0xee97,	// (0x0002d6fa) vod_det_cell_pane_t1

0x9bdf,	// (0x00028442) input_focus_pane_cp16

0xef4e,	// (0x0002d7b1) vod_det_cell_field_pane_t1

0x9b59,	// (0x000283bc) call7_btn_grp_pane_ParamLimits

0x9b59,	// (0x000283bc) call7_btn_grp_pane

0x9b66,	// (0x000283c9) call7_bubble_pane_ParamLimits

0x9b66,	// (0x000283c9) call7_bubble_pane

0x9b75,	// (0x000283d8) cell_call7_btn_pane_ParamLimits

0x9b75,	// (0x000283d8) cell_call7_btn_pane

0x9b86,	// (0x000283e9) call7_pane_g1_ParamLimits

0x9b86,	// (0x000283e9) call7_pane_g1

0x9b95,	// (0x000283f8) call7_windows_conf_pane_ParamLimits

0x9b95,	// (0x000283f8) call7_windows_conf_pane

0x9bb5,	// (0x00028418) popup_call7_1st_window_ParamLimits

0x9bb5,	// (0x00028418) popup_call7_1st_window

0x9bc3,	// (0x00028426) popup_call7_2nd_window_ParamLimits

0x9bc3,	// (0x00028426) popup_call7_2nd_window

0x9bd1,	// (0x00028434) popup_call7_3rd_window_ParamLimits

0x9bd1,	// (0x00028434) popup_call7_3rd_window

0x9bdf,	// (0x00028442) bg_button_pane_cp26

0xe9ab,	// (0x0002d20e) cell_call7_btn_pane_g1

0xebac,	// (0x0002d40f) cell_call7_btn_pane_t1

0x9bdf,	// (0x00028442) bg_popup_window_pane_cp12

0xef9e,	// (0x0002d801) popup_call7_1st_window_g1

0xefa6,	// (0x0002d809) popup_call7_1st_window_g2

0xefae,	// (0x0002d811) popup_call7_1st_window_g3

0x0002,

0xfe7b,	// (0x0002e6de) popup_call7_1st_window_g

0xefb6,	// (0x0002d819) popup_call7_1st_window_t1

0xefc5,	// (0x0002d828) popup_call7_1st_window_t2

0xefd5,	// (0x0002d838) popup_call7_1st_window_t3

0x0002,

0xfe82,	// (0x0002e6e5) popup_call7_1st_window_t

0x9bdf,	// (0x00028442) bg_popup_window_pane_cp13

0xefe5,	// (0x0002d848) popup_call7_2nd_window_g1

0xefed,	// (0x0002d850) popup_call7_2nd_window_g2

0xeff5,	// (0x0002d858) popup_call7_2nd_window_g3

0x0002,

0xfe89,	// (0x0002e6ec) popup_call7_2nd_window_g

0xeffd,	// (0x0002d860) popup_call7_2nd_window_t1

0x9bdf,	// (0x00028442) bg_popup_window_pane_cp14

0xf00c,	// (0x0002d86f) call7_list_conf_pane

0xf014,	// (0x0002d877) call7_list_conf_row_pane_ParamLimits

0xf014,	// (0x0002d877) call7_list_conf_row_pane

0xf027,	// (0x0002d88a) call7_list_conf_row_pane_g1

0xf02f,	// (0x0002d892) call7_list_conf_row_pane_g2

0x0001,

0xfe90,	// (0x0002e6f3) call7_list_conf_row_pane_g

0xf037,	// (0x0002d89a) call7_list_conf_row_pane_t1

0x9bdf,	// (0x00028442) list_highlight_pane_cp22
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
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&ParameterLimitsV,
	&TextLineVCR,
	&TextLineVCR,
	&WindowLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&TextLineVCR,
	&ParameterLimitsV,
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
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
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
	&ParameterLimitsTableLV,
	&WindowLineVCR,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
	&WindowLineVCR,
	&ParameterLimitsV,
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal

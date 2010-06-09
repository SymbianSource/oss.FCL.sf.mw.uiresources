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

#include "aknlayoutscalable_abrw_pnp4_apps_nhd4_prt_tch_small.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x0005ba1c };

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
0x0e3a,	// (0x0005c856) Screen

0x0e46,	// (0x0005c862) application_window

0x0ea2,	// (0x0005c8be) area_bottom_pane_ParamLimits

0x0ea2,	// (0x0005c8be) area_bottom_pane

0x0efb,	// (0x0005c917) area_top_pane_ParamLimits

0x0efb,	// (0x0005c917) area_top_pane

0x0f5f,	// (0x0005c97b) call_video_uplink_pane_ParamLimits

0x0f5f,	// (0x0005c97b) call_video_uplink_pane

0x0f9e,	// (0x0005c9ba) main_pane_ParamLimits

0x0f9e,	// (0x0005c9ba) main_pane

0xc8f2,	// (0x0006830e) context_pane

0x44ad,	// (0x0005fec9) navi_pane

0x44d3,	// (0x0005feef) popup_cale_events_window_ParamLimits

0x44d3,	// (0x0005feef) popup_cale_events_window

0xc905,	// (0x00068321) popup_mup_playback_window

0x44eb,	// (0x0005ff07) signal_pane

0xa855,	// (0x00066271) main_browser_pane

0xaa2c,	// (0x00066448) main_burst_pane

0x432f,	// (0x0005fd4b) main_calc_pane

0xc8d8,	// (0x000682f4) main_cale_day_pane

0x16fd,	// (0x0005d119) main_cale_month_pane

0xc8d8,	// (0x000682f4) main_cale_week_pane

0xaa2c,	// (0x00066448) main_call_pane

0xa529,	// (0x00065f45) main_call_poc_pane

0xaa2c,	// (0x00066448) main_camera_pane

0xaa2c,	// (0x00066448) main_chi_dic_pane

0xb23b,	// (0x00066c57) main_clock_pane

0xa529,	// (0x00065f45) main_fmradio_pane

0xaa2c,	// (0x00066448) main_graph_messa_pane

0xa529,	// (0x00065f45) main_help_pane

0xa855,	// (0x00066271) main_im_pane

0xa784,	// (0x000661a0) main_image_pane_ParamLimits

0xa784,	// (0x000661a0) main_image_pane

0xa529,	// (0x00065f45) main_location2_pane

0xaa2c,	// (0x00066448) main_location_pane

0xa784,	// (0x000661a0) main_messa_pane

0xa529,	// (0x00065f45) main_mp2_pane

0xaa2c,	// (0x00066448) main_mp_pane

0xa529,	// (0x00065f45) main_msg_pane

0xa529,	// (0x00065f45) main_mup_eq_pane

0xa529,	// (0x00065f45) main_mup_pane

0xa855,	// (0x00066271) main_notes_pane

0xa529,	// (0x00065f45) main_pec_pane

0xa529,	// (0x00065f45) main_phob_pane

0xa529,	// (0x00065f45) main_pinb_pane

0xa529,	// (0x00065f45) main_postcard_pane

0xa529,	// (0x00065f45) main_qdial_pane

0xaa2c,	// (0x00066448) main_skin_pane

0xa529,	// (0x00065f45) main_smil2_pane

0xaa2c,	// (0x00066448) main_smil_pane

0xaa2c,	// (0x00066448) main_video_pane

0xaa2c,	// (0x00066448) main_video_tele_pane

0xa784,	// (0x000661a0) main_viewer_pane_ParamLimits

0xa784,	// (0x000661a0) main_viewer_pane

0xaa2c,	// (0x00066448) main_vorec_pane

0x437b,	// (0x0005fd97) popup_blid_sat_info_window_ParamLimits

0x437b,	// (0x0005fd97) popup_blid_sat_info_window

0x439b,	// (0x0005fdb7) popup_dyc_status_message_window_ParamLimits

0x439b,	// (0x0005fdb7) popup_dyc_status_message_window

0x43a9,	// (0x0005fdc5) popup_grid_large_graphic_window_ParamLimits

0x43a9,	// (0x0005fdc5) popup_grid_large_graphic_window

0x4438,	// (0x0005fe54) popup_loc_request_window_ParamLimits

0x4438,	// (0x0005fe54) popup_loc_request_window

0x4485,	// (0x0005fea1) popup_wml_address_window_ParamLimits

0x4485,	// (0x0005fea1) popup_wml_address_window

0x4207,	// (0x0005fc23) call_muted_g1

0x3ec3,	// (0x0005f8df) popup_call_audio_conf_window_ParamLimits

0x3ec3,	// (0x0005f8df) popup_call_audio_conf_window

0x4217,	// (0x0005fc33) popup_call_audio_first_window_ParamLimits

0x4217,	// (0x0005fc33) popup_call_audio_first_window

0x4257,	// (0x0005fc73) popup_call_audio_in_window_ParamLimits

0x4257,	// (0x0005fc73) popup_call_audio_in_window

0x427b,	// (0x0005fc97) popup_call_audio_out_window_ParamLimits

0x427b,	// (0x0005fc97) popup_call_audio_out_window

0x429d,	// (0x0005fcb9) popup_call_audio_second_window_ParamLimits

0x429d,	// (0x0005fcb9) popup_call_audio_second_window

0x42cd,	// (0x0005fce9) popup_call_audio_wait_window_ParamLimits

0x42cd,	// (0x0005fce9) popup_call_audio_wait_window

0x42ee,	// (0x0005fd0a) popup_number_entry_window_ParamLimits

0x42ee,	// (0x0005fd0a) popup_number_entry_window

0x9b73,	// (0x0006558f) bg_popup_call_pane_cp05_ParamLimits

0x9b73,	// (0x0006558f) bg_popup_call_pane_cp05

0x9b93,	// (0x000655af) popup_number_entry_window_t1

0x9ba6,	// (0x000655c2) popup_number_entry_window_t2

0x9bb8,	// (0x000655d4) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0006aae6) popup_number_entry_window_t

0x9bca,	// (0x000655e6) text_title_cp2

0x9bdd,	// (0x000655f9) bg_popup_call_pane_cp_ParamLimits

0x9bdd,	// (0x000655f9) bg_popup_call_pane_cp

0x9beb,	// (0x00065607) call_thumbnail_pane

0x9bf3,	// (0x0006560f) popup_call_audio_in_window_g1_ParamLimits

0x9bf3,	// (0x0006560f) popup_call_audio_in_window_g1

0x9bff,	// (0x0006561b) popup_call_audio_in_window_g2_ParamLimits

0x9bff,	// (0x0006561b) popup_call_audio_in_window_g2

0x9c0b,	// (0x00065627) popup_call_audio_in_window_g3_ParamLimits

0x9c0b,	// (0x00065627) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0006aaef) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0006aaef) popup_call_audio_in_window_g

0x9c17,	// (0x00065633) popup_call_audio_in_window_t1_ParamLimits

0x9c17,	// (0x00065633) popup_call_audio_in_window_t1

0x9c33,	// (0x0006564f) popup_call_audio_in_window_t2_ParamLimits

0x9c33,	// (0x0006564f) popup_call_audio_in_window_t2

0x9c4f,	// (0x0006566b) popup_call_audio_in_window_t3_ParamLimits

0x9c4f,	// (0x0006566b) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0006aaf6) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0006aaf6) popup_call_audio_in_window_t

0x9bdd,	// (0x000655f9) bg_popup_call_pane_cp01_ParamLimits

0x9bdd,	// (0x000655f9) bg_popup_call_pane_cp01

0x9beb,	// (0x00065607) call_thumbnail_pane_cp02

0x9c62,	// (0x0006567e) call_type_pane_cp022

0x9c6a,	// (0x00065686) popup_call_audio_out_window_g1_ParamLimits

0x9c6a,	// (0x00065686) popup_call_audio_out_window_g1

0x9c7c,	// (0x00065698) popup_call_audio_out_window_g2_ParamLimits

0x9c7c,	// (0x00065698) popup_call_audio_out_window_g2

0x9c88,	// (0x000656a4) popup_call_audio_out_window_g3_ParamLimits

0x9c88,	// (0x000656a4) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0006aafd) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0006aafd) popup_call_audio_out_window_g

0x9c9a,	// (0x000656b6) popup_call_audio_out_window_t1_ParamLimits

0x9c9a,	// (0x000656b6) popup_call_audio_out_window_t1

0xa1f3,	// (0x00065c0f) popup_call_audio_out_window_t2_ParamLimits

0xa1f3,	// (0x00065c0f) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0006ab04) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0006ab04) popup_call_audio_out_window_t

0xa208,	// (0x00065c24) bg_popup_call_pane_ParamLimits

0xa208,	// (0x00065c24) bg_popup_call_pane

0x11ba,	// (0x0005cbd6) call_thumbnail_pane_cp_ParamLimits

0x11ba,	// (0x0005cbd6) call_thumbnail_pane_cp

0xa2ee,	// (0x00065d0a) call_type_pane_cp01_ParamLimits

0xa2ee,	// (0x00065d0a) call_type_pane_cp01

0xa332,	// (0x00065d4e) popup_call_audio_first_window_g1_ParamLimits

0xa332,	// (0x00065d4e) popup_call_audio_first_window_g1

0xa37e,	// (0x00065d9a) popup_call_audio_first_window_g2_ParamLimits

0xa37e,	// (0x00065d9a) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0006ab09) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0006ab09) popup_call_audio_first_window_g

0xa3c2,	// (0x00065dde) popup_call_audio_first_window_t1_ParamLimits

0xa3c2,	// (0x00065dde) popup_call_audio_first_window_t1

0xa46e,	// (0x00065e8a) popup_call_audio_first_window_t4_ParamLimits

0xa46e,	// (0x00065e8a) popup_call_audio_first_window_t4

0xa4fa,	// (0x00065f16) popup_call_audio_first_window_t5_ParamLimits

0xa4fa,	// (0x00065f16) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0006ab0e) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0006ab0e) popup_call_audio_first_window_t

0xa529,	// (0x00065f45) bg_popup_call_pane_cp02

0xa533,	// (0x00065f4f) call_type_pane_cp023

0xa53b,	// (0x00065f57) popup_call_audio_wait_window_g1

0xa543,	// (0x00065f5f) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006ab15) popup_call_audio_wait_window_g

0xa54b,	// (0x00065f67) popup_call_audio_wait_window_t3

0xa559,	// (0x00065f75) bg_popup_call_pane_cp03_ParamLimits

0xa559,	// (0x00065f75) bg_popup_call_pane_cp03

0xa5b9,	// (0x00065fd5) call_thumbnail_pane_cp011_ParamLimits

0xa5b9,	// (0x00065fd5) call_thumbnail_pane_cp011

0xa5c5,	// (0x00065fe1) call_type_pane_cp034_ParamLimits

0xa5c5,	// (0x00065fe1) call_type_pane_cp034

0xa601,	// (0x0006601d) popup_call_audio_second_window_g1_ParamLimits

0xa601,	// (0x0006601d) popup_call_audio_second_window_g1

0xa63d,	// (0x00066059) popup_call_audio_second_window_g2_ParamLimits

0xa63d,	// (0x00066059) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0006ab1a) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0006ab1a) popup_call_audio_second_window_g

0xa679,	// (0x00066095) popup_call_audio_second_window_t1_ParamLimits

0xa679,	// (0x00066095) popup_call_audio_second_window_t1

0xa6fa,	// (0x00066116) popup_call_audio_second_window_t2_ParamLimits

0xa6fa,	// (0x00066116) popup_call_audio_second_window_t2

0xa730,	// (0x0006614c) popup_call_audio_second_window_t3_ParamLimits

0xa730,	// (0x0006614c) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0006ab1f) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0006ab1f) popup_call_audio_second_window_t

0xa529,	// (0x00065f45) bg_popup_call_pane_cp04

0xa766,	// (0x00066182) list_conf_pane

0xa76e,	// (0x0006618a) popup_call_audio_conf_window_t1

0xa77c,	// (0x00066198) call_thumbnail_pane_g1

0xa784,	// (0x000661a0) bg_pinb_pane_ParamLimits

0xa784,	// (0x000661a0) bg_pinb_pane

0xa792,	// (0x000661ae) find_pinb_pane

0xa79b,	// (0x000661b7) listscroll_pinb_pane_ParamLimits

0xa79b,	// (0x000661b7) listscroll_pinb_pane

0xa7aa,	// (0x000661c6) pinb_bg_pane_g1

0x11de,	// (0x0005cbfa) pinb_bg_pane_g2

0x11ea,	// (0x0005cc06) pinb_bg_pane_g3

0x11f6,	// (0x0005cc12) pinb_bg_pane_g4

0x1202,	// (0x0005cc1e) pinb_bg_pane_g5

0x120e,	// (0x0005cc2a) pinb_bg_pane_g6

0x1219,	// (0x0005cc35) pinb_bg_pane_g7

0x1224,	// (0x0005cc40) pinb_bg_pane_g8

0x122f,	// (0x0005cc4b) pinb_bg_pane_g9

0x1239,	// (0x0005cc55) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0006ab26) pinb_bg_pane_g

0x1256,	// (0x0005cc72) grid_pinb_pane

0x1261,	// (0x0005cc7d) list_pinb_pane

0x126c,	// (0x0005cc88) scroll_pane_cp01_ParamLimits

0x126c,	// (0x0005cc88) scroll_pane_cp01

0xa7b4,	// (0x000661d0) find_pinb_pane_g1_ParamLimits

0xa7b4,	// (0x000661d0) find_pinb_pane_g1

0xa7cc,	// (0x000661e8) find_pinb_pane_t1

0xa7de,	// (0x000661fa) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0006ab40) find_pinb_pane_t

0xa7f3,	// (0x0006620f) input_focus_pane_cp01_ParamLimits

0xa7f3,	// (0x0006620f) input_focus_pane_cp01

0x127e,	// (0x0005cc9a) cell_pinb_pane_ParamLimits

0x127e,	// (0x0005cc9a) cell_pinb_pane

0x12a9,	// (0x0005ccc5) cell_pinb_pane_g1_ParamLimits

0x12a9,	// (0x0005ccc5) cell_pinb_pane_g1

0xa7ff,	// (0x0006621b) cell_pinb_pane_g2_ParamLimits

0xa7ff,	// (0x0006621b) cell_pinb_pane_g2

0xa80b,	// (0x00066227) cell_pinb_pane_g3_ParamLimits

0xa80b,	// (0x00066227) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0006ab45) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0006ab45) cell_pinb_pane_g

0xa529,	// (0x00065f45) grid_highlight_pane_cp01

0x12be,	// (0x0005ccda) list_pinb_item_pane_ParamLimits

0x12be,	// (0x0005ccda) list_pinb_item_pane

0xa529,	// (0x00065f45) list_highlight_pane_cp02

0x12e7,	// (0x0005cd03) list_pinb_item_pane_g1_ParamLimits

0x12e7,	// (0x0005cd03) list_pinb_item_pane_g1

0x12f4,	// (0x0005cd10) list_pinb_item_pane_g2_ParamLimits

0x12f4,	// (0x0005cd10) list_pinb_item_pane_g2

0x1300,	// (0x0005cd1c) list_pinb_item_pane_g3_ParamLimits

0x1300,	// (0x0005cd1c) list_pinb_item_pane_g3

0x1311,	// (0x0005cd2d) list_pinb_item_pane_g4_ParamLimits

0x1311,	// (0x0005cd2d) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0006ab4c) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0006ab4c) list_pinb_item_pane_g

0x131d,	// (0x0005cd39) list_pinb_item_pane_t1_ParamLimits

0x131d,	// (0x0005cd39) list_pinb_item_pane_t1

0x134e,	// (0x0005cd6a) calc_display_pane

0x136c,	// (0x0005cd88) calc_paper_pane

0x1388,	// (0x0005cda4) grid_calc_pane

0xa529,	// (0x00065f45) bg_list_pane_cp01

0x13b4,	// (0x0005cdd0) clock_g1

0x13bc,	// (0x0005cdd8) clock_g2

0x0001,

0xf139,	// (0x0006ab55) clock_g

0x13c6,	// (0x0005cde2) clock_t1_ParamLimits

0x13c6,	// (0x0005cde2) clock_t1

0x13db,	// (0x0005cdf7) clock_t2_ParamLimits

0x13db,	// (0x0005cdf7) clock_t2

0x13ed,	// (0x0005ce09) clock_t3_ParamLimits

0x13ed,	// (0x0005ce09) clock_t3

0x13ff,	// (0x0005ce1b) clock_t4_ParamLimits

0x13ff,	// (0x0005ce1b) clock_t4

0x1411,	// (0x0005ce2d) clock_t5_ParamLimits

0x1411,	// (0x0005ce2d) clock_t5

0x1426,	// (0x0005ce42) clock_t6_ParamLimits

0x1426,	// (0x0005ce42) clock_t6

0x1438,	// (0x0005ce54) clock_t7_ParamLimits

0x1438,	// (0x0005ce54) clock_t7

0x144a,	// (0x0005ce66) clock_t8_ParamLimits

0x144a,	// (0x0005ce66) clock_t8

0x1460,	// (0x0005ce7c) clock_t9_ParamLimits

0x1460,	// (0x0005ce7c) clock_t9

0x0008,

0xf13e,	// (0x0006ab5a) clock_t_ParamLimits

0xf13e,	// (0x0006ab5a) clock_t

0xa817,	// (0x00066233) popup_clock_analogue_window_cp02

0xa817,	// (0x00066233) popup_clock_digital_window_cp01

0xa81f,	// (0x0006623b) listscroll_help_pane

0xa529,	// (0x00065f45) phob_pre_status_pane

0xa829,	// (0x00066245) grid_qdial_pane

0xa784,	// (0x000661a0) listscroll_mce_pane

0xa784,	// (0x000661a0) bg_notes_pane

0xa833,	// (0x0006624f) list_notes_pane

0x1476,	// (0x0005ce92) scroll_pane_cp06

0xa841,	// (0x0006625d) bg_calc_paper_pane

0x1485,	// (0x0005cea1) list_calc_pane

0xa855,	// (0x00066271) bg_calc_display_pane

0x149f,	// (0x0005cebb) calc_display_pane_t1

0x14b4,	// (0x0005ced0) calc_display_pane_t2

0x14c9,	// (0x0005cee5) calc_display_pane_t3

0x0002,

0xf151,	// (0x0006ab6d) calc_display_pane_t

0x14db,	// (0x0005cef7) cell_calc_pane_ParamLimits

0x14db,	// (0x0005cef7) cell_calc_pane

0xa861,	// (0x0006627d) bg_calc_paper_pane_g1

0xa86d,	// (0x00066289) bg_calc_paper_pane_g2

0xa879,	// (0x00066295) bg_calc_paper_pane_g3

0xa885,	// (0x000662a1) bg_calc_paper_pane_g4

0xa891,	// (0x000662ad) bg_calc_paper_pane_g5

0x1508,	// (0x0005cf24) bg_calc_paper_pane_g6

0x1519,	// (0x0005cf35) bg_calc_paper_pane_g7

0x152a,	// (0x0005cf46) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0006ab74) bg_calc_paper_pane_g

0x153b,	// (0x0005cf57) calc_bg_paper_pane_g9

0x154c,	// (0x0005cf68) list_calc_item_pane_ParamLimits

0x154c,	// (0x0005cf68) list_calc_item_pane

0xa89d,	// (0x000662b9) list_calc_item_pane_g1

0x157c,	// (0x0005cf98) list_calc_item_pane_t1_ParamLimits

0x157c,	// (0x0005cf98) list_calc_item_pane_t1

0x158e,	// (0x0005cfaa) list_calc_item_pane_t2_ParamLimits

0x158e,	// (0x0005cfaa) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0006ab85) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0006ab85) list_calc_item_pane_t

0xa8aa,	// (0x000662c6) cell_calc_pane_g1

0xa8b4,	// (0x000662d0) grid_highlight_pane_cp02

0xa8d6,	// (0x000662f2) bg_calc_display_pane_g1

0x15be,	// (0x0005cfda) bg_calc_display_pane_g2

0xa8df,	// (0x000662fb) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0006ab8f) bg_calc_display_pane_g

0x15c8,	// (0x0005cfe4) cell_qdial_pane_ParamLimits

0x15c8,	// (0x0005cfe4) cell_qdial_pane

0x15dc,	// (0x0005cff8) cell_qdial_pane_g1_ParamLimits

0x15dc,	// (0x0005cff8) cell_qdial_pane_g1

0x15e9,	// (0x0005d005) cell_qdial_pane_g2_ParamLimits

0x15e9,	// (0x0005d005) cell_qdial_pane_g2

0xa8e8,	// (0x00066304) cell_qdial_pane_g3_ParamLimits

0xa8e8,	// (0x00066304) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0006ab96) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0006ab96) cell_qdial_pane_g

0x1606,	// (0x0005d022) cell_qdial_pane_t1_ParamLimits

0x1606,	// (0x0005d022) cell_qdial_pane_t1

0x161e,	// (0x0005d03a) cell_qdial_pane_t2_ParamLimits

0x161e,	// (0x0005d03a) cell_qdial_pane_t2

0x1631,	// (0x0005d04d) cell_qdial_pane_t3_ParamLimits

0x1631,	// (0x0005d04d) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0006ab9f) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0006ab9f) cell_qdial_pane_t

0xa529,	// (0x00065f45) grid_highlight_pane_cp04

0xa8f4,	// (0x00066310) thumbnail_qdial_pane_ParamLimits

0xa8f4,	// (0x00066310) thumbnail_qdial_pane

0xa950,	// (0x0006636c) list_help_pane

0xa959,	// (0x00066375) scroll_pane_cp02

0x1644,	// (0x0005d060) help_list_pane_t1_ParamLimits

0x1644,	// (0x0005d060) help_list_pane_t1

0x167b,	// (0x0005d097) bg_notes_pane_g2

0x1683,	// (0x0005d09f) bg_notes_pane_g3

0x168b,	// (0x0005d0a7) notes_bg_pane_g1

0x1693,	// (0x0005d0af) notes_bg_pane_g4

0x169b,	// (0x0005d0b7) notes_bg_pane_g5

0x16a3,	// (0x0005d0bf) notes_bg_pane_g6

0x16ab,	// (0x0005d0c7) notes_bg_pane_g7

0x16b3,	// (0x0005d0cf) notes_bg_pane_g8

0x16bb,	// (0x0005d0d7) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0006abbd) notes_bg_pane_g

0x16c3,	// (0x0005d0df) list_notes_text_pane_ParamLimits

0x16c3,	// (0x0005d0df) list_notes_text_pane

0xa962,	// (0x0006637e) list_notes_text_pane_g1

0x16ef,	// (0x0005d10b) list_notes_text_pane_t1

0x16fd,	// (0x0005d119) listscroll_cale_week_pane

0x1722,	// (0x0005d13e) bg_cale_heading_pane

0xa985,	// (0x000663a1) bg_cale_pane_cp01

0x1744,	// (0x0005d160) cale_week_corner_pane

0x175e,	// (0x0005d17a) cale_week_day_heading_pane

0x1780,	// (0x0005d19c) cale_week_scroll_pane_g1

0x179d,	// (0x0005d1b9) cale_week_scroll_pane_g2

0x17b0,	// (0x0005d1cc) cale_week_scroll_pane_g3

0x17c3,	// (0x0005d1df) cale_week_scroll_pane_g4

0x17d6,	// (0x0005d1f2) cale_week_scroll_pane_g5

0x17e9,	// (0x0005d205) cale_week_scroll_pane_g6

0x17fc,	// (0x0005d218) cale_week_scroll_pane_g7

0x1811,	// (0x0005d22d) cale_week_scroll_pane_g8

0x1826,	// (0x0005d242) cale_week_scroll_pane_g9

0x1839,	// (0x0005d255) cale_week_scroll_pane_g10

0x184c,	// (0x0005d268) cale_week_scroll_pane_g11

0x185f,	// (0x0005d27b) cale_week_scroll_pane_g12

0x1876,	// (0x0005d292) cale_week_scroll_pane_g13

0x1891,	// (0x0005d2ad) cale_week_scroll_pane_g14

0x18ac,	// (0x0005d2c8) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0006abcc) cale_week_scroll_pane_g

0x18dc,	// (0x0005d2f8) cale_week_time_pane

0x18f1,	// (0x0005d30d) grid_cale_week_pane

0xa9b4,	// (0x000663d0) scroll_pane_cp08

0x1910,	// (0x0005d32c) cell_cale_week_pane_ParamLimits

0x1910,	// (0x0005d32c) cell_cale_week_pane

0x1972,	// (0x0005d38e) cale_week_day_heading_pane_t1

0x198d,	// (0x0005d3a9) cale_week_day_heading_pane_t2

0x19a8,	// (0x0005d3c4) cale_week_day_heading_pane_t3

0x19c3,	// (0x0005d3df) cale_week_day_heading_pane_t4

0x19de,	// (0x0005d3fa) cale_week_day_heading_pane_t5

0x19f9,	// (0x0005d415) cale_week_day_heading_pane_t6

0x1a14,	// (0x0005d430) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0006abed) cale_week_day_heading_pane_t

0xa9d1,	// (0x000663ed) bg_cale_side_pane

0x1a2f,	// (0x0005d44b) cale_week_time_pane_t1

0x1a49,	// (0x0005d465) cale_week_time_pane_t2

0x1a63,	// (0x0005d47f) cale_week_time_pane_t3

0x1a7d,	// (0x0005d499) cale_week_time_pane_t4

0x1a97,	// (0x0005d4b3) cale_week_time_pane_t5

0x1ab1,	// (0x0005d4cd) cale_week_time_pane_t6

0x1ad1,	// (0x0005d4ed) cale_week_time_pane_t7

0x1af3,	// (0x0005d50f) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0006abfc) cale_week_time_pane_t

0x1b17,	// (0x0005d533) cell_cale_week_pane_g2

0x1b3b,	// (0x0005d557) cell_cale_week_pane_g3_ParamLimits

0x1b3b,	// (0x0005d557) cell_cale_week_pane_g3

0xa9df,	// (0x000663fb) grid_highlight_pane_cp07

0xa9e7,	// (0x00066403) listscroll_gms_pane

0xa9f1,	// (0x0006640d) grid_gms_pane

0xa9fa,	// (0x00066416) listscroll_gms_pane_g1

0xaa02,	// (0x0006641e) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0006ac0d) listscroll_gms_pane_g

0x1b53,	// (0x0005d56f) scroll_pane_cp010

0x1b5e,	// (0x0005d57a) cell_gms_pane_ParamLimits

0x1b5e,	// (0x0005d57a) cell_gms_pane

0x1b6e,	// (0x0005d58a) cell_gms_pane_g1

0xaa0a,	// (0x00066426) cell_gms_pane_g2

0xaa12,	// (0x0006642e) cell_gms_pane_g3

0xaa1b,	// (0x00066437) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0006ac12) cell_gms_pane_g

0xaa24,	// (0x00066440) grid_highlight_pane_cp09

0x41af,	// (0x0005fbcb) phob_pre_status_pane_g1

0x41b7,	// (0x0005fbd3) phob_pre_status_pane_g2

0x41bf,	// (0x0005fbdb) phob_pre_status_pane_g3

0x41c7,	// (0x0005fbe3) phob_pre_status_pane_g4

0x0004,

0xf4b0,	// (0x0006aecc) phob_pre_status_pane_g

0x41d7,	// (0x0005fbf3) phob_pre_status_pane_t1

0x41e7,	// (0x0005fc03) phob_pre_status_pane_t2

0x41f7,	// (0x0005fc13) phob_pre_status_pane_t3

0x0002,

0xf4bb,	// (0x0006aed7) phob_pre_status_pane_t

0xaa2c,	// (0x00066448) bg_list_pane_cp05

0x1b7e,	// (0x0005d59a) grid_vorec_pane

0x1b88,	// (0x0005d5a4) vorec_t1

0x1b96,	// (0x0005d5b2) vorec_t2

0x1ba4,	// (0x0005d5c0) vorec_t3

0x1bb2,	// (0x0005d5ce) vorec_t4

0x9b0d,	// (0x00065529) vorec_t5

0x9b1b,	// (0x00065537) vorec_t6

0x0004,

0xf1ff,	// (0x0006ac1b) vorec_t

0x9b29,	// (0x00065545) wait_bar_pane_cp01

0x1bce,	// (0x0005d5ea) cell_vorec_pane_ParamLimits

0x1bce,	// (0x0005d5ea) cell_vorec_pane

0x1be1,	// (0x0005d5fd) cell_vorec_pane_g1

0xa529,	// (0x00065f45) grid_highlight_pane_cp05

0x1bfb,	// (0x0005d617) cams_zoom_pane

0x1c07,	// (0x0005d623) image_vga_pane

0x1c16,	// (0x0005d632) main_camera_pane_g1

0x1c24,	// (0x0005d640) main_camera_pane_g2

0x1c30,	// (0x0005d64c) main_camera_pane_g3

0x1c3c,	// (0x0005d658) main_camera_pane_g4

0x1c48,	// (0x0005d664) main_camera_pane_g5

0x1c54,	// (0x0005d670) main_camera_pane_g6

0x1c60,	// (0x0005d67c) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0006ac26) main_camera_pane_g

0x1c6c,	// (0x0005d688) main_camera_pane_t1

0x1c7e,	// (0x0005d69a) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0006ac37) main_camera_pane_t

0x1c9f,	// (0x0005d6bb) cams_zoom_pane_cp_ParamLimits

0x1c9f,	// (0x0005d6bb) cams_zoom_pane_cp

0x1cc3,	// (0x0005d6df) image_cif_pane_ParamLimits

0x1cc3,	// (0x0005d6df) image_cif_pane

0x1ce1,	// (0x0005d6fd) image_subqcif_pane

0x1ce9,	// (0x0005d705) main_video_pane_g1_ParamLimits

0x1ce9,	// (0x0005d705) main_video_pane_g1

0x1d09,	// (0x0005d725) main_video_pane_g2_ParamLimits

0x1d09,	// (0x0005d725) main_video_pane_g2

0x1d39,	// (0x0005d755) main_video_pane_g3_ParamLimits

0x1d39,	// (0x0005d755) main_video_pane_g3

0x1d62,	// (0x0005d77e) main_video_pane_g4_ParamLimits

0x1d62,	// (0x0005d77e) main_video_pane_g4

0x1d8b,	// (0x0005d7a7) main_video_pane_g5_ParamLimits

0x1d8b,	// (0x0005d7a7) main_video_pane_g5

0xaa40,	// (0x0006645c) main_video_pane_g6_ParamLimits

0xaa40,	// (0x0006645c) main_video_pane_g6

0x0006,

0xf220,	// (0x0006ac3c) main_video_pane_g_ParamLimits

0xf220,	// (0x0006ac3c) main_video_pane_g

0x1dad,	// (0x0005d7c9) main_video_pane_t1_ParamLimits

0x1dad,	// (0x0005d7c9) main_video_pane_t1

0xaa5a,	// (0x00066476) cams_zoom_pane_g1

0xaa63,	// (0x0006647f) cams_zoom_pane_g2

0xaa6c,	// (0x00066488) cams_zoom_pane_g3

0xaa75,	// (0x00066491) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0006ac4b) cams_zoom_pane_g

0x1df7,	// (0x0005d813) grid_cams_pane

0x1e05,	// (0x0005d821) linegrid_cams_pane

0x1e13,	// (0x0005d82f) cell_cams_pane_ParamLimits

0x1e13,	// (0x0005d82f) cell_cams_pane

0xaa7e,	// (0x0006649a) cams_burst_image_pane

0xaa86,	// (0x000664a2) cell_cams_pane_g1

0xa529,	// (0x00065f45) grid_highlight_pane_cp03

0xa8aa,	// (0x000662c6) mp_bg_pane_g1

0xa529,	// (0x00065f45) bg_list_pane_cp03

0xc7fd,	// (0x00068219) bg_mp_pane

0xc805,	// (0x00068221) grid_mp_pane

0xc80d,	// (0x00068229) media_player_g1

0xc815,	// (0x00068231) media_player_t1

0xc823,	// (0x0006823f) media_player_t2

0xc831,	// (0x0006824d) media_player_t3

0xc83f,	// (0x0006825b) media_player_t4

0xc84d,	// (0x00068269) media_player_t5

0xc85b,	// (0x00068277) media_player_t6

0xc869,	// (0x00068285) media_player_t7

0x0006,

0x0456,	// (0x0005be72) media_player_t

0xc877,	// (0x00068293) wait_bar_pane_cp02

0xf49c,	// (0x0006aeb8) main_usb_pane_t

0x41a6,	// (0x0005fbc2) cell_mp_pane

0xa8aa,	// (0x000662c6) cell_mp_pane_g1

0xa529,	// (0x00065f45) grid_highlight_pane_cp06

0xaa8e,	// (0x000664aa) grid_skin_colour_pane

0xaa96,	// (0x000664b2) list_highlight_pane_cp03

0x1f3a,	// (0x0005d956) skin_g1

0xaa9e,	// (0x000664ba) skin_t1

0xaaad,	// (0x000664c9) skin_t2

0x0001,

0xf264,	// (0x0006ac80) skin_t

0x1f44,	// (0x0005d960) cell_skin_colour_pane_ParamLimits

0x1f44,	// (0x0005d960) cell_skin_colour_pane

0xaabb,	// (0x000664d7) cell_skin_colour_pane_g1

0x1fc8,	// (0x0005d9e4) call_video_g1_ParamLimits

0x1fc8,	// (0x0005d9e4) call_video_g1

0x1fd8,	// (0x0005d9f4) call_video_g2_ParamLimits

0x1fd8,	// (0x0005d9f4) call_video_g2

0x0001,

0xf269,	// (0x0006ac85) call_video_g_ParamLimits

0xf269,	// (0x0006ac85) call_video_g

0x2032,	// (0x0005da4e) call_video_uplink_pane_cp1_ParamLimits

0x2032,	// (0x0005da4e) call_video_uplink_pane_cp1

0xaacd,	// (0x000664e9) call_video_uplink_pane_cp2

0x20fe,	// (0x0005db1a) video_down_crop_pane_ParamLimits

0x20fe,	// (0x0005db1a) video_down_crop_pane

0x21f0,	// (0x0005dc0c) video_down_pane_ParamLimits

0x21f0,	// (0x0005dc0c) video_down_pane

0xaad5,	// (0x000664f1) video_down_subqcif_pane_ParamLimits

0xaad5,	// (0x000664f1) video_down_subqcif_pane

0xaaed,	// (0x00066509) video_down_subqcif_pane_cp_ParamLimits

0xaaed,	// (0x00066509) video_down_subqcif_pane_cp

0xab13,	// (0x0006652f) im_reading_pane_ParamLimits

0xab13,	// (0x0006652f) im_reading_pane

0x2310,	// (0x0005dd2c) im_writing_pane_ParamLimits

0x2310,	// (0x0005dd2c) im_writing_pane

0x232e,	// (0x0005dd4a) im_reading_pane_t1

0xab2d,	// (0x00066549) list_im_pane

0xab3e,	// (0x0006655a) scroll_pane_cp07

0x2386,	// (0x0005dda2) im_writing_pane_t1_ParamLimits

0x2386,	// (0x0005dda2) im_writing_pane_t1

0xab57,	// (0x00066573) im_writing_pane_t2_ParamLimits

0xab57,	// (0x00066573) im_writing_pane_t2

0x0001,

0xf273,	// (0x0006ac8f) im_writing_pane_t_ParamLimits

0xf273,	// (0x0006ac8f) im_writing_pane_t

0xa529,	// (0x00065f45) input_focus_pane_cp04

0xa529,	// (0x00065f45) input_focus_pane_cp05

0x2398,	// (0x0005ddb4) list_im_single_pane_ParamLimits

0x2398,	// (0x0005ddb4) list_im_single_pane

0x23bf,	// (0x0005dddb) list_single_im_pane_t1

0x416a,	// (0x0005fb86) blid_accuracy_pane

0x4172,	// (0x0005fb8e) blid_compass_pane

0x417c,	// (0x0005fb98) main_location_t1

0x418a,	// (0x0005fba6) main_location_t2

0x4198,	// (0x0005fbb4) main_location_t3

0x0002,

0xf4a9,	// (0x0006aec5) main_location_t

0xa529,	// (0x00065f45) aid_levels_location

0xa8aa,	// (0x000662c6) blid_accuracy_pane_g1

0xa8aa,	// (0x000662c6) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0006acf1) blid_accuracy_pane_g

0xab9f,	// (0x000665bb) wml_content_pane

0xabdd,	// (0x000665f9) wml_button_pane_ParamLimits

0xabdd,	// (0x000665f9) wml_button_pane

0x23ce,	// (0x0005ddea) wml_list_single_large_pane_ParamLimits

0x23ce,	// (0x0005ddea) wml_list_single_large_pane

0x23f9,	// (0x0005de15) wml_list_single_medium_pane_ParamLimits

0x23f9,	// (0x0005de15) wml_list_single_medium_pane

0x242b,	// (0x0005de47) wml_list_single_small_pane_ParamLimits

0x242b,	// (0x0005de47) wml_list_single_small_pane

0xabf1,	// (0x0006660d) wml_selection_box_pane_ParamLimits

0xabf1,	// (0x0006660d) wml_selection_box_pane

0xac04,	// (0x00066620) wml_list_single_pane_t1

0xac13,	// (0x0006662f) wml_list_single_medium_pane_t1

0xac22,	// (0x0006663e) wml_list_single_large_pane_t1

0xac31,	// (0x0006664d) input_focus_pane_cp02_ParamLimits

0xac31,	// (0x0006664d) input_focus_pane_cp02

0xac44,	// (0x00066660) wml_selection_box_pane_g1

0xac4d,	// (0x00066669) wml_selection_box_pane_t1_ParamLimits

0xac4d,	// (0x00066669) wml_selection_box_pane_t1

0xa784,	// (0x000661a0) bg_wml_button_pane_ParamLimits

0xa784,	// (0x000661a0) bg_wml_button_pane

0xac65,	// (0x00066681) wml_button_pane_g1

0xac6d,	// (0x00066689) wml_button_pane_t1

0xac65,	// (0x00066681) wml_button_bg_pane_g1

0xac7d,	// (0x00066699) wml_button_bg_pane_g2

0xac85,	// (0x000666a1) wml_button_bg_pane_g3

0xac8d,	// (0x000666a9) wml_button_bg_pane_g4

0xac95,	// (0x000666b1) wml_button_bg_pane_g5

0xac9d,	// (0x000666b9) wml_button_bg_pane_g6

0xaca5,	// (0x000666c1) wml_button_bg_pane_g7

0xacad,	// (0x000666c9) wml_button_bg_pane_g8

0xacb5,	// (0x000666d1) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0006ac94) wml_button_bg_pane_g

0x2468,	// (0x0005de84) bg_list_pane_cp02

0xacbd,	// (0x000666d9) mce_header_pane_ParamLimits

0xacbd,	// (0x000666d9) mce_header_pane

0xacd3,	// (0x000666ef) mce_icon_pane

0xacd3,	// (0x000666ef) mce_image_pane

0xacdc,	// (0x000666f8) mce_text_pane_ParamLimits

0xacdc,	// (0x000666f8) mce_text_pane

0x2472,	// (0x0005de8e) scroll_pane_cp03

0xabd5,	// (0x000665f1) scroll_pane_cp04

0xacef,	// (0x0006670b) scroll_pane_cp05_ParamLimits

0xacef,	// (0x0006670b) scroll_pane_cp05

0x247c,	// (0x0005de98) mce_header_field_pane_ParamLimits

0x247c,	// (0x0005de98) mce_header_field_pane

0x249c,	// (0x0005deb8) mce_header_field_pane_2_ParamLimits

0x249c,	// (0x0005deb8) mce_header_field_pane_2

0x24b2,	// (0x0005dece) mce_header_field_pane_3

0x24ba,	// (0x0005ded6) list_single_mce_message_pane_ParamLimits

0x24ba,	// (0x0005ded6) list_single_mce_message_pane

0x24e8,	// (0x0005df04) list_single_mce_smart_pane_ParamLimits

0x24e8,	// (0x0005df04) list_single_mce_smart_pane

0xacfb,	// (0x00066717) input_focus_pane_cp03

0xad04,	// (0x00066720) list_header_data_pane

0x2521,	// (0x0005df3d) mce_header_field_pane_t1

0x252f,	// (0x0005df4b) list_single_mce_header_pane_ParamLimits

0x252f,	// (0x0005df4b) list_single_mce_header_pane

0xad0c,	// (0x00066728) list_single_mce_header_pane_t1

0xad1b,	// (0x00066737) list_single_mce_message_pane_g1

0xad23,	// (0x0006673f) list_single_mce_message_pane_t1

0x2585,	// (0x0005dfa1) bg_cale_heading_pane_cp01_ParamLimits

0x2585,	// (0x0005dfa1) bg_cale_heading_pane_cp01

0xad31,	// (0x0006674d) bg_cale_pane_cp02_ParamLimits

0xad31,	// (0x0006674d) bg_cale_pane_cp02

0x25d3,	// (0x0005dfef) cale_month_corner_pane

0x25f2,	// (0x0005e00e) cale_month_day_heading_pane_ParamLimits

0x25f2,	// (0x0005e00e) cale_month_day_heading_pane

0x2658,	// (0x0005e074) cale_month_pane_g1_ParamLimits

0x2658,	// (0x0005e074) cale_month_pane_g1

0x269b,	// (0x0005e0b7) cale_month_pane_g2_ParamLimits

0x269b,	// (0x0005e0b7) cale_month_pane_g2

0x26d5,	// (0x0005e0f1) cale_month_pane_g3_ParamLimits

0x26d5,	// (0x0005e0f1) cale_month_pane_g3

0x2725,	// (0x0005e141) cale_month_pane_g4_ParamLimits

0x2725,	// (0x0005e141) cale_month_pane_g4

0x2775,	// (0x0005e191) cale_month_pane_g5_ParamLimits

0x2775,	// (0x0005e191) cale_month_pane_g5

0x27c5,	// (0x0005e1e1) cale_month_pane_g6_ParamLimits

0x27c5,	// (0x0005e1e1) cale_month_pane_g6

0x2815,	// (0x0005e231) cale_month_pane_g7_ParamLimits

0x2815,	// (0x0005e231) cale_month_pane_g7

0x287d,	// (0x0005e299) cale_month_pane_g8_ParamLimits

0x287d,	// (0x0005e299) cale_month_pane_g8

0x28e5,	// (0x0005e301) cale_month_pane_g9_ParamLimits

0x28e5,	// (0x0005e301) cale_month_pane_g9

0x2943,	// (0x0005e35f) cale_month_pane_g10_ParamLimits

0x2943,	// (0x0005e35f) cale_month_pane_g10

0x29a1,	// (0x0005e3bd) cale_month_pane_g11_ParamLimits

0x29a1,	// (0x0005e3bd) cale_month_pane_g11

0x29f5,	// (0x0005e411) cale_month_pane_g12_ParamLimits

0x29f5,	// (0x0005e411) cale_month_pane_g12

0x2a4b,	// (0x0005e467) cale_month_pane_g13_ParamLimits

0x2a4b,	// (0x0005e467) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0006aca7) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0006aca7) cale_month_pane_g

0x2aa1,	// (0x0005e4bd) cale_month_week_pane

0x2ac5,	// (0x0005e4e1) grid_cale_month_pane_ParamLimits

0x2ac5,	// (0x0005e4e1) grid_cale_month_pane

0x2b22,	// (0x0005e53e) cale_month_day_heading_pane_t1

0x2ba8,	// (0x0005e5c4) cale_month_day_heading_pane_t2

0x2c21,	// (0x0005e63d) cale_month_day_heading_pane_t3

0x2c9a,	// (0x0005e6b6) cale_month_day_heading_pane_t4

0x2d13,	// (0x0005e72f) cale_month_day_heading_pane_t5

0x2d8c,	// (0x0005e7a8) cale_month_day_heading_pane_t6

0x2e05,	// (0x0005e821) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0006acc2) cale_month_day_heading_pane_t

0xa9d1,	// (0x000663ed) bg_cale_side_pane_cp01

0x2e96,	// (0x0005e8b2) cale_month_week_pane_t1

0x2eaf,	// (0x0005e8cb) cale_month_week_pane_t2

0x2ec8,	// (0x0005e8e4) cale_month_week_pane_t3

0x2ee1,	// (0x0005e8fd) cale_month_week_pane_t4

0x2efc,	// (0x0005e918) cale_month_week_pane_t5

0x2f1d,	// (0x0005e939) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0006acd1) cale_month_week_pane_t

0x2f3e,	// (0x0005e95a) cell_cale_month_pane_ParamLimits

0x2f3e,	// (0x0005e95a) cell_cale_month_pane

0x308e,	// (0x0005eaaa) cell_cale_month_pane_g1

0x309a,	// (0x0005eab6) cell_cale_month_pane_t1_ParamLimits

0x309a,	// (0x0005eab6) cell_cale_month_pane_t1

0xa9df,	// (0x000663fb) grid_highlight_pane_cp08

0xa8aa,	// (0x000662c6) main_smil_g1

0x30c6,	// (0x0005eae2) smil_status_pane

0xad9c,	// (0x000667b8) smil_text_pane

0xc6dd,	// (0x000680f9) bg_popup_call3_rect_pane_g8

0xc6e5,	// (0x00068101) bg_popup_call3_rect_pane_g9

0x0008,

0xf484,	// (0x0006aea0) bg_popup_call3_rect_pane_g

0xc96c,	// (0x00068388) smil_status_volume_pane_g1

0xada6,	// (0x000667c2) smil_status_pane_t1

0x45a1,	// (0x0005ffbd) volume_smil_pane

0xadbd,	// (0x000667d9) list_smil_text_pane

0x30d9,	// (0x0005eaf5) scroll_pane_cp011

0x30e4,	// (0x0005eb00) smil_text_list_pane_t1_ParamLimits

0x30e4,	// (0x0005eb00) smil_text_list_pane_t1

0x3171,	// (0x0005eb8d) aid_volume_smil_ParamLimits

0x3171,	// (0x0005eb8d) aid_volume_smil

0xa8aa,	// (0x000662c6) smil_volume_pane_g1

0xa8aa,	// (0x000662c6) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0006acf1) smil_volume_pane_g

0x16fd,	// (0x0005d119) listscroll_cale_day_pane

0xadc7,	// (0x000667e3) bg_cale_pane

0xaddf,	// (0x000667fb) list_cale_pane

0xae02,	// (0x0006681e) scroll_pane_cp09

0xae13,	// (0x0006682f) cale_bg_pane_g1

0xae1b,	// (0x00066837) cale_bg_pane_g2

0xae23,	// (0x0006683f) cale_bg_pane_g3

0xae2b,	// (0x00066847) cale_bg_pane_g4

0xae33,	// (0x0006684f) cale_bg_pane_g5

0xae3b,	// (0x00066857) cale_bg_pane_g6

0xae43,	// (0x0006685f) cale_bg_pane_g7

0xae4b,	// (0x00066867) cale_bg_pane_g8

0xae53,	// (0x0006686f) cale_bg_pane_g9

0x0008,

0x0152,	// (0x0005bb6e) cale_bg_pane_g

0x319b,	// (0x0005ebb7) list_cale_time_pane_ParamLimits

0x319b,	// (0x0005ebb7) list_cale_time_pane

0xae5b,	// (0x00066877) list_cale_time_pane_g1_ParamLimits

0xae5b,	// (0x00066877) list_cale_time_pane_g1

0xae67,	// (0x00066883) list_cale_time_pane_g2_ParamLimits

0xae67,	// (0x00066883) list_cale_time_pane_g2

0x31c3,	// (0x0005ebdf) list_cale_time_pane_g3_ParamLimits

0x31c3,	// (0x0005ebdf) list_cale_time_pane_g3

0x31d1,	// (0x0005ebed) list_cale_time_pane_g4_ParamLimits

0x31d1,	// (0x0005ebed) list_cale_time_pane_g4

0x31df,	// (0x0005ebfb) list_cale_time_pane_g5_ParamLimits

0x31df,	// (0x0005ebfb) list_cale_time_pane_g5

0x0005,

0xf2da,	// (0x0006acf6) list_cale_time_pane_g_ParamLimits

0xf2da,	// (0x0006acf6) list_cale_time_pane_g

0xae81,	// (0x0006689d) list_cale_time_pane_t1_ParamLimits

0xae81,	// (0x0006689d) list_cale_time_pane_t1

0xaea9,	// (0x000668c5) list_cale_time_pane_t2_ParamLimits

0xaea9,	// (0x000668c5) list_cale_time_pane_t2

0x35a8,	// (0x0005efc4) aid_blid_cardinal_pane

0x35ea,	// (0x0005f006) compass_pane_t4

0xaed1,	// (0x000668ed) list_cale_time_pane_t4_ParamLimits

0xaed1,	// (0x000668ed) list_cale_time_pane_t4

0x35f8,	// (0x0005f014) compass_pane_t5

0x3608,	// (0x0005f024) compass_pane_t6

0x3616,	// (0x0005f032) compass_pane_t7

0xb355,	// (0x00066d71) navi_pane_cc_t1

0xb532,	// (0x00066f4e) aid_phob_thumbnail_center_pane

0x3c6b,	// (0x0005f687) main_postcard_pane_g4_ParamLimits

0x0002,

0x0172,	// (0x0005bb8e) list_cale_time_pane_t_ParamLimits

0x0172,	// (0x0005bb8e) list_cale_time_pane_t

0x9bdd,	// (0x000655f9) bg_popup_window_pane_cp02_ParamLimits

0x9bdd,	// (0x000655f9) bg_popup_window_pane_cp02

0xaef9,	// (0x00066915) heading_pane_cp01_ParamLimits

0xaef9,	// (0x00066915) heading_pane_cp01

0xaf05,	// (0x00066921) loc_req_pane_ParamLimits

0xaf05,	// (0x00066921) loc_req_pane

0xaf15,	// (0x00066931) loc_type_pane_ParamLimits

0xaf15,	// (0x00066931) loc_type_pane

0xaf27,	// (0x00066943) loc_type_pane_t1_ParamLimits

0xaf27,	// (0x00066943) loc_type_pane_t1

0xaf39,	// (0x00066955) loc_type_pane_t2_ParamLimits

0xaf39,	// (0x00066955) loc_type_pane_t2

0xaf4b,	// (0x00066967) loc_type_pane_t3_ParamLimits

0xaf4b,	// (0x00066967) loc_type_pane_t3

0x0002,

0x0179,	// (0x0005bb95) loc_type_pane_t_ParamLimits

0x0179,	// (0x0005bb95) loc_type_pane_t

0xaf5d,	// (0x00066979) list_loc_req_pane

0xaf67,	// (0x00066983) scroll_pane_cp012

0x31ed,	// (0x0005ec09) list_single_loc_request_popup_menu_pane_ParamLimits

0x31ed,	// (0x0005ec09) list_single_loc_request_popup_menu_pane

0xaf72,	// (0x0006698e) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaf72,	// (0x0006698e) list_single_loc_request_popup_menu_pane_g1

0xaf7e,	// (0x0006699a) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaf7e,	// (0x0006699a) list_single_loc_request_popup_menu_pane_g2

0x0001,

0x0180,	// (0x0005bb9c) list_single_loc_request_popup_menu_pane_g_ParamLimits

0x0180,	// (0x0005bb9c) list_single_loc_request_popup_menu_pane_g

0xaf8a,	// (0x000669a6) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaf8a,	// (0x000669a6) list_single_loc_request_popup_menu_pane_t1

0x3206,	// (0x0005ec22) bg_popup_window_pane_cp03_ParamLimits

0x3206,	// (0x0005ec22) bg_popup_window_pane_cp03

0x3214,	// (0x0005ec30) heading_loc_req_pane_ParamLimits

0x3214,	// (0x0005ec30) heading_loc_req_pane

0x3220,	// (0x0005ec3c) popup_dyc_status_message_window_g1_ParamLimits

0x3220,	// (0x0005ec3c) popup_dyc_status_message_window_g1

0x322c,	// (0x0005ec48) popup_dyc_status_message_window_t1_ParamLimits

0x322c,	// (0x0005ec48) popup_dyc_status_message_window_t1

0x323e,	// (0x0005ec5a) popup_dyc_status_message_window_t2_ParamLimits

0x323e,	// (0x0005ec5a) popup_dyc_status_message_window_t2

0x3250,	// (0x0005ec6c) popup_dyc_status_message_window_t3_ParamLimits

0x3250,	// (0x0005ec6c) popup_dyc_status_message_window_t3

0x0002,

0xf2e7,	// (0x0006ad03) popup_dyc_status_message_window_t_ParamLimits

0xf2e7,	// (0x0006ad03) popup_dyc_status_message_window_t

0xa529,	// (0x00065f45) bg_heading_pane_cp01

0xafa0,	// (0x000669bc) heading_loc_req_pane_g1

0xafa8,	// (0x000669c4) heading_loc_req_pane_g2

0xafb0,	// (0x000669cc) heading_loc_req_pane_g3

0x0002,

0xf2ee,	// (0x0006ad0a) heading_loc_req_pane_g

0xafb8,	// (0x000669d4) heading_loc_req_pane_t1

0xafd3,	// (0x000669ef) bg_popup_sub_pane_cp01_ParamLimits

0xafd3,	// (0x000669ef) bg_popup_sub_pane_cp01

0xafe1,	// (0x000669fd) popup_cale_events_window_g1_ParamLimits

0xafe1,	// (0x000669fd) popup_cale_events_window_g1

0xb001,	// (0x00066a1d) popup_cale_events_window_g2_ParamLimits

0xb001,	// (0x00066a1d) popup_cale_events_window_g2

0x0001,

0x01c0,	// (0x0005bbdc) popup_cale_events_window_g_ParamLimits

0x01c0,	// (0x0005bbdc) popup_cale_events_window_g

0xb021,	// (0x00066a3d) popup_cale_events_window_t1_ParamLimits

0xb021,	// (0x00066a3d) popup_cale_events_window_t1

0xb033,	// (0x00066a4f) popup_cale_events_window_t2_ParamLimits

0xb033,	// (0x00066a4f) popup_cale_events_window_t2

0xb071,	// (0x00066a8d) popup_cale_events_window_t3_ParamLimits

0xb071,	// (0x00066a8d) popup_cale_events_window_t3

0xb0ab,	// (0x00066ac7) popup_cale_events_window_t4_ParamLimits

0xb0ab,	// (0x00066ac7) popup_cale_events_window_t4

0x0003,

0x01c5,	// (0x0005bbe1) popup_cale_events_window_t_ParamLimits

0x01c5,	// (0x0005bbe1) popup_cale_events_window_t

0x334b,	// (0x0005ed67) call_type_pane

0xb54a,	// (0x00066f66) popup_call_status_window_g1

0x3357,	// (0x0005ed73) popup_call_status_window_g2

0x3363,	// (0x0005ed7f) popup_call_status_window_g3

0x0002,

0xf322,	// (0x0006ad3e) popup_call_status_window_g

0xb0e1,	// (0x00066afd) call_type_pane_g1

0xb0ea,	// (0x00066b06) call_type_pane_g2

0x0001,

0x01d5,	// (0x0005bbf1) call_type_pane_g

0xa529,	// (0x00065f45) bg_popup_sub_pane_cp02

0xb0f3,	// (0x00066b0f) listscroll_popup_wml_pane

0xb0fb,	// (0x00066b17) list_wml_pane

0xb105,	// (0x00066b21) scroll_pane_cp013

0xb110,	// (0x00066b2c) list_single_graphic_popup_wml_pane_ParamLimits

0xb110,	// (0x00066b2c) list_single_graphic_popup_wml_pane

0xa8aa,	// (0x000662c6) list_single_graphic_popup_wml_pane_g1

0xb124,	// (0x00066b40) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf329,	// (0x0006ad45) list_single_graphic_popup_wml_pane_g

0xb12c,	// (0x00066b48) list_single_graphic_popup_wml_pane_t1

0xb142,	// (0x00066b5e) aid_call_pane

0xa77c,	// (0x00066198) popup_clock_analogue_window_g1

0xa77c,	// (0x00066198) popup_clock_analogue_window_g2

0x336f,	// (0x0005ed8b) popup_clock_analogue_window_g3

0x336f,	// (0x0005ed8b) popup_clock_analogue_window_g4

0xa8aa,	// (0x000662c6) popup_clock_analogue_window_g5

0x0004,

0xf32e,	// (0x0006ad4a) popup_clock_analogue_window_g

0x3377,	// (0x0005ed93) popup_clock_analogue_window_t1

0x3385,	// (0x0005eda1) clock_digital_number_pane_ParamLimits

0x3385,	// (0x0005eda1) clock_digital_number_pane

0x3391,	// (0x0005edad) clock_digital_number_pane_cp02_ParamLimits

0x3391,	// (0x0005edad) clock_digital_number_pane_cp02

0x339d,	// (0x0005edb9) clock_digital_number_pane_cp03_ParamLimits

0x339d,	// (0x0005edb9) clock_digital_number_pane_cp03

0x33a9,	// (0x0005edc5) clock_digital_number_pane_cp04_ParamLimits

0x33a9,	// (0x0005edc5) clock_digital_number_pane_cp04

0x33b5,	// (0x0005edd1) clock_digital_separator_pane_ParamLimits

0x33b5,	// (0x0005edd1) clock_digital_separator_pane

0x33c1,	// (0x0005eddd) popup_clock_digital_window_t1

0xa8aa,	// (0x000662c6) clock_digital_number_pane_g1

0xa8aa,	// (0x000662c6) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0006acf1) clock_digital_number_pane_g

0xa8aa,	// (0x000662c6) clock_digital_separator_pane_g1

0xa8aa,	// (0x000662c6) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0006acf1) clock_digital_separator_pane_g

0xa529,	// (0x00065f45) bg_popup_window_pane_cp04

0xb14a,	// (0x00066b66) heading_pane_cp03

0xb152,	// (0x00066b6e) listscroll_popup_gms_pane

0xb15a,	// (0x00066b76) grid_large_graphic_popup_pane

0xb164,	// (0x00066b80) listscroll_popup_gms_pane_g1

0xb16c,	// (0x00066b88) listscroll_popup_gms_pane_g2

0x0001,

0x01ea,	// (0x0005bc06) listscroll_popup_gms_pane_g

0xabd5,	// (0x000665f1) scroll_pane_cp014

0x33de,	// (0x0005edfa) cell_large_graphic_popup_pane_ParamLimits

0x33de,	// (0x0005edfa) cell_large_graphic_popup_pane

0x33f6,	// (0x0005ee12) cell_large_graphic_popup_pane_g1_ParamLimits

0x33f6,	// (0x0005ee12) cell_large_graphic_popup_pane_g1

0xb174,	// (0x00066b90) cell_large_graphic_popup_pane_g2_ParamLimits

0xb174,	// (0x00066b90) cell_large_graphic_popup_pane_g2

0xb180,	// (0x00066b9c) cell_large_graphic_popup_pane_g3_ParamLimits

0xb180,	// (0x00066b9c) cell_large_graphic_popup_pane_g3

0xb18d,	// (0x00066ba9) cell_large_graphic_popup_pane_g4_ParamLimits

0xb18d,	// (0x00066ba9) cell_large_graphic_popup_pane_g4

0x0003,

0xf339,	// (0x0006ad55) cell_large_graphic_popup_pane_g_ParamLimits

0xf339,	// (0x0006ad55) cell_large_graphic_popup_pane_g

0xb19d,	// (0x00066bb9) grid_highlight_pane_cp010

0xa8aa,	// (0x000662c6) bg_popup_call_pane_g1

0xb1a7,	// (0x00066bc3) list_single_graphic_popup_conf_pane_ParamLimits

0xb1a7,	// (0x00066bc3) list_single_graphic_popup_conf_pane

0xb1ba,	// (0x00066bd6) list_highlight_pane_cp01

0xb1c3,	// (0x00066bdf) list_single_graphic_popup_conf_pane_g1

0xb1cb,	// (0x00066be7) list_single_graphic_popup_conf_pane_g2

0x0001,

0x01f8,	// (0x0005bc14) list_single_graphic_popup_conf_pane_g

0xb1d3,	// (0x00066bef) list_single_graphic_popup_conf_pane_t1

0xb1e1,	// (0x00066bfd) linegrid_cams_pane_g1

0x3402,	// (0x0005ee1e) linegrid_cams_pane_g2

0xaa12,	// (0x0006642e) linegrid_cams_pane_g3

0xb1ea,	// (0x00066c06) linegrid_cams_pane_g4

0x340b,	// (0x0005ee27) linegrid_cams_pane_g5

0x3414,	// (0x0005ee30) linegrid_cams_pane_g6

0xaa1b,	// (0x00066437) linegrid_cams_pane_g7

0x0006,

0xf342,	// (0x0006ad5e) linegrid_cams_pane_g

0xb1f3,	// (0x00066c0f) popup_clock_analogue_window

0xb1f3,	// (0x00066c0f) popup_clock_digital_window

0xa529,	// (0x00065f45) popup_phob_thumbnail_window

0xa8aa,	// (0x000662c6) call_video_uplink_pane_g1

0xb1fc,	// (0x00066c18) call_video_uplink_pane_g2

0x0001,

0xf351,	// (0x0006ad6d) call_video_uplink_pane_g

0xb204,	// (0x00066c20) video_uplink_pane

0xb20c,	// (0x00066c28) mce_image_pane_g1

0x341d,	// (0x0005ee39) mce_image_pane_g2

0x3425,	// (0x0005ee41) mce_image_pane_g3

0x342d,	// (0x0005ee49) mce_image_pane_g4

0x3435,	// (0x0005ee51) mce_image_pane_g5

0x0004,

0xf356,	// (0x0006ad72) mce_image_pane_g

0xb216,	// (0x00066c32) control_top_pane_stacon_cp01_ParamLimits

0xb216,	// (0x00066c32) control_top_pane_stacon_cp01

0xb22a,	// (0x00066c46) uni_indicator_pane_stacon_cp01_ParamLimits

0xb22a,	// (0x00066c46) uni_indicator_pane_stacon_cp01

0xb23b,	// (0x00066c57) bg_popup_sub_pane_cp03

0x343d,	// (0x0005ee59) chi_dic_find_pane

0x3445,	// (0x0005ee61) listscroll_chi_dic_pane

0x344e,	// (0x0005ee6a) main_pane_chidic_g1

0x3461,	// (0x0005ee7d) chi_dic_find_pane_t1

0xb245,	// (0x00066c61) find_chidic_pane

0xb24e,	// (0x00066c6a) chi_dic_list_pane_ParamLimits

0xb24e,	// (0x00066c6a) chi_dic_list_pane

0xb25f,	// (0x00066c7b) scroll_pane_cp020

0x346f,	// (0x0005ee8b) find_chidic_pane_t1

0xa529,	// (0x00065f45) input_focus_pane_cp06

0x347e,	// (0x0005ee9a) list_chi_dic_pane_ParamLimits

0x347e,	// (0x0005ee9a) list_chi_dic_pane

0x349b,	// (0x0005eeb7) list_chi_dic_pane_t1_ParamLimits

0x349b,	// (0x0005eeb7) list_chi_dic_pane_t1

0xa529,	// (0x00065f45) list_highlight_pane_cp020

0xb267,	// (0x00066c83) bg_cale_heading_pane_g1

0x34ae,	// (0x0005eeca) bg_cale_heading_pane_g2

0x34b6,	// (0x0005eed2) bg_cale_heading_pane_g3

0x34be,	// (0x0005eeda) bg_cale_heading_pane_g4

0x34c8,	// (0x0005eee4) bg_cale_heading_pane_g5

0x34d2,	// (0x0005eeee) bg_cale_heading_pane_g6

0x34da,	// (0x0005eef6) bg_cale_heading_pane_g7

0x34e2,	// (0x0005eefe) bg_cale_heading_pane_g8

0x34ec,	// (0x0005ef08) bg_cale_heading_pane_g9

0x0008,

0xf361,	// (0x0006ad7d) bg_cale_heading_pane_g

0xb267,	// (0x00066c83) bg_cale_side_pane_g1

0x34f6,	// (0x0005ef12) bg_cale_side_pane_g2

0x3500,	// (0x0005ef1c) bg_cale_side_pane_g3

0x350a,	// (0x0005ef26) bg_cale_side_pane_g4

0x3514,	// (0x0005ef30) bg_cale_side_pane_g5

0x351e,	// (0x0005ef3a) bg_cale_side_pane_g6

0x3528,	// (0x0005ef44) bg_cale_side_pane_g7

0x3532,	// (0x0005ef4e) bg_cale_side_pane_g8

0x353a,	// (0x0005ef56) bg_cale_side_pane_g9

0x0008,

0xf374,	// (0x0006ad90) bg_cale_side_pane_g

0x3542,	// (0x0005ef5e) popup_call_status_window_ParamLimits

0x3542,	// (0x0005ef5e) popup_call_status_window

0xb26f,	// (0x00066c8b) stacon_top_pane

0xb277,	// (0x00066c93) status_pane_ParamLimits

0xb277,	// (0x00066c93) status_pane

0xb28c,	// (0x00066ca8) status_small_pane

0xb294,	// (0x00066cb0) control_pane

0xa529,	// (0x00065f45) stacon_bottom_pane

0xb29c,	// (0x00066cb8) list_single_mce_smart_pane_t1_ParamLimits

0xb29c,	// (0x00066cb8) list_single_mce_smart_pane_t1

0xb2af,	// (0x00066ccb) list_single_mce_smart_pane_t2_ParamLimits

0xb2af,	// (0x00066ccb) list_single_mce_smart_pane_t2

0x0001,

0x0242,	// (0x0005bc5e) list_single_mce_smart_pane_t_ParamLimits

0x0242,	// (0x0005bc5e) list_single_mce_smart_pane_t

0x354e,	// (0x0005ef6a) compass_pane

0x355a,	// (0x0005ef76) main_location2_pane_t1

0x356e,	// (0x0005ef8a) main_location2_pane_t2

0x3582,	// (0x0005ef9e) main_location2_pane_t3

0x0003,

0xf387,	// (0x0006ada3) main_location2_pane_t

0xb2ce,	// (0x00066cea) compass_pane_g1_ParamLimits

0xb2ce,	// (0x00066cea) compass_pane_g1

0x35cc,	// (0x0005efe8) compass_pane_t1

0x35db,	// (0x0005eff7) compass_pane_t2

0x0005,

0xf390,	// (0x0006adac) compass_pane_t

0x3626,	// (0x0005f042) text_secondary_cp61

0xb34c,	// (0x00066d68) navi_pane_cams_g5

0xb3c8,	// (0x00066de4) navi_pane_im_t1

0xb3d6,	// (0x00066df2) navi_pane_mp_g1_ParamLimits

0xb3d6,	// (0x00066df2) navi_pane_mp_g1

0xb3ea,	// (0x00066e06) navi_pane_mp_g2_ParamLimits

0xb3ea,	// (0x00066e06) navi_pane_mp_g2

0xb3f6,	// (0x00066e12) navi_pane_mp_g3_ParamLimits

0xb3f6,	// (0x00066e12) navi_pane_mp_g3

0x0002,

0x0264,	// (0x0005bc80) navi_pane_mp_g_ParamLimits

0x0264,	// (0x0005bc80) navi_pane_mp_g

0xb402,	// (0x00066e1e) navi_pane_mp_t1

0xb410,	// (0x00066e2c) navi_pane_mp_t2

0x0002,

0x026b,	// (0x0005bc87) navi_pane_mp_t

0xb47b,	// (0x00066e97) navi_pane_vt_g1

0xb402,	// (0x00066e1e) navi_pane_vt_t1

0xb483,	// (0x00066e9f) navi_slider_pane

0xaa2c,	// (0x00066448) zooming_pane

0xb493,	// (0x00066eaf) navi_slider_pane_g1

0x3661,	// (0x0005f07d) navi_slider_pane_g2

0x0006,

0xf39d,	// (0x0006adb9) navi_slider_pane_g

0xb4b7,	// (0x00066ed3) aid_levels_zoom

0xb4bf,	// (0x00066edb) zooming_pane_g1

0xb4c7,	// (0x00066ee3) zooming_pane_g2

0xb4c7,	// (0x00066ee3) zooming_pane_g3

0x0002,

0x0281,	// (0x0005bc9d) zooming_pane_g

0xb4cf,	// (0x00066eeb) level_10_zoom

0xb4d8,	// (0x00066ef4) level_11_zoom

0xb4e1,	// (0x00066efd) level_1_zoom

0xb4ea,	// (0x00066f06) level_2_zoom

0xb4f3,	// (0x00066f0f) level_3_zoom

0xb4fc,	// (0x00066f18) level_4_zoom

0xb505,	// (0x00066f21) level_5_zoom

0xb50e,	// (0x00066f2a) level_6_zoom

0xb517,	// (0x00066f33) level_7_zoom

0xb520,	// (0x00066f3c) level_8_zoom

0xb529,	// (0x00066f45) level_9_zoom

0xb53a,	// (0x00066f56) popup_phob_thumbnail_window_g1

0xb542,	// (0x00066f5e) popup_phob_thumbnail_window_g2

0x0001,

0x0288,	// (0x0005bca4) popup_phob_thumbnail_window_g

0xc87f,	// (0x0006829b) level_1_location

0xc887,	// (0x000682a3) level_2_location

0xc88f,	// (0x000682ab) level_3_location

0xc897,	// (0x000682b3) level_4_location

0xaa2c,	// (0x00066448) level_5_location

0x3673,	// (0x0005f08f) mce_icon_pane_g1

0x367b,	// (0x0005f097) mce_icon_pane_g2

0x0001,

0xf3ac,	// (0x0006adc8) mce_icon_pane_g

0x3683,	// (0x0005f09f) main_mup_pane_g1_ParamLimits

0x3683,	// (0x0005f09f) main_mup_pane_g1

0x369b,	// (0x0005f0b7) main_mup_pane_g2_ParamLimits

0x369b,	// (0x0005f0b7) main_mup_pane_g2

0x36af,	// (0x0005f0cb) main_mup_pane_g3_ParamLimits

0x36af,	// (0x0005f0cb) main_mup_pane_g3

0x36c3,	// (0x0005f0df) main_mup_pane_g4_ParamLimits

0x36c3,	// (0x0005f0df) main_mup_pane_g4

0x36df,	// (0x0005f0fb) main_mup_pane_g5_ParamLimits

0x36df,	// (0x0005f0fb) main_mup_pane_g5

0x3700,	// (0x0005f11c) main_mup_pane_g6_ParamLimits

0x3700,	// (0x0005f11c) main_mup_pane_g6

0x371c,	// (0x0005f138) main_mup_pane_g7_ParamLimits

0x371c,	// (0x0005f138) main_mup_pane_g7

0x3738,	// (0x0005f154) main_mup_pane_g8_ParamLimits

0x3738,	// (0x0005f154) main_mup_pane_g8

0x3754,	// (0x0005f170) main_mup_pane_g9_ParamLimits

0x3754,	// (0x0005f170) main_mup_pane_g9

0x3773,	// (0x0005f18f) main_mup_pane_g10_ParamLimits

0x3773,	// (0x0005f18f) main_mup_pane_g10

0x3792,	// (0x0005f1ae) main_mup_pane_g11_ParamLimits

0x3792,	// (0x0005f1ae) main_mup_pane_g11

0x37aa,	// (0x0005f1c6) main_mup_pane_g12_ParamLimits

0x37aa,	// (0x0005f1c6) main_mup_pane_g12

0x37b8,	// (0x0005f1d4) main_mup_pane_g13_ParamLimits

0x37b8,	// (0x0005f1d4) main_mup_pane_g13

0x000c,

0xf3b1,	// (0x0006adcd) main_mup_pane_g_ParamLimits

0xf3b1,	// (0x0006adcd) main_mup_pane_g

0x37ce,	// (0x0005f1ea) main_mup_pane_t1_ParamLimits

0x37ce,	// (0x0005f1ea) main_mup_pane_t1

0x37eb,	// (0x0005f207) main_mup_pane_t2_ParamLimits

0x37eb,	// (0x0005f207) main_mup_pane_t2

0x3805,	// (0x0005f221) main_mup_pane_t3_ParamLimits

0x3805,	// (0x0005f221) main_mup_pane_t3

0x381f,	// (0x0005f23b) main_mup_pane_t4_ParamLimits

0x381f,	// (0x0005f23b) main_mup_pane_t4

0x3831,	// (0x0005f24d) main_mup_pane_t5_ParamLimits

0x3831,	// (0x0005f24d) main_mup_pane_t5

0x3843,	// (0x0005f25f) main_mup_pane_t6_ParamLimits

0x3843,	// (0x0005f25f) main_mup_pane_t6

0x0005,

0xf3cc,	// (0x0006ade8) main_mup_pane_t_ParamLimits

0xf3cc,	// (0x0006ade8) main_mup_pane_t

0x3859,	// (0x0005f275) mup_progress_pane_ParamLimits

0x3859,	// (0x0005f275) mup_progress_pane

0x3865,	// (0x0005f281) mup_visualizer_pane_ParamLimits

0x3865,	// (0x0005f281) mup_visualizer_pane

0x38a3,	// (0x0005f2bf) mup_volume_pane_ParamLimits

0x38a3,	// (0x0005f2bf) mup_volume_pane

0xb54a,	// (0x00066f66) mup_visualizer_pane_g1_ParamLimits

0xb54a,	// (0x00066f66) mup_visualizer_pane_g1

0xb54a,	// (0x00066f66) mup_visualizer_pane_g2_ParamLimits

0xb54a,	// (0x00066f66) mup_visualizer_pane_g2

0xb2ce,	// (0x00066cea) mup_visualizer_pane_g3_ParamLimits

0xb2ce,	// (0x00066cea) mup_visualizer_pane_g3

0x0002,

0x02ba,	// (0x0005bcd6) mup_visualizer_pane_g_ParamLimits

0x02ba,	// (0x0005bcd6) mup_visualizer_pane_g

0xa8aa,	// (0x000662c6) mup_volume_pane_g1

0xb560,	// (0x00066f7c) mup_volume_pane_g2

0x0001,

0xf3d9,	// (0x0006adf5) mup_volume_pane_g

0xa8aa,	// (0x000662c6) mup_progress_pane_g1

0xb569,	// (0x00066f85) mup_progress_pane_g2

0xb572,	// (0x00066f8e) mup_progress_pane_g3

0x0002,

0xf3de,	// (0x0006adfa) mup_progress_pane_g

0xa529,	// (0x00065f45) bg_popup_window_pane_cp05

0xb57b,	// (0x00066f97) heading_pane_cp02_ParamLimits

0xb57b,	// (0x00066f97) heading_pane_cp02

0xb595,	// (0x00066fb1) list_popup_blid_pane

0xb59d,	// (0x00066fb9) list_blid_sat_info_pane_ParamLimits

0xb59d,	// (0x00066fb9) list_blid_sat_info_pane

0xb5b0,	// (0x00066fcc) list_blid_sat_info_pane_g1

0xb5b8,	// (0x00066fd4) list_blid_sat_info_pane_t1

0x39ae,	// (0x0005f3ca) mup_equalizer_pane_ParamLimits

0x39ae,	// (0x0005f3ca) mup_equalizer_pane

0x39cf,	// (0x0005f3eb) mup_equalizer_pane_cp1_ParamLimits

0x39cf,	// (0x0005f3eb) mup_equalizer_pane_cp1

0x39f0,	// (0x0005f40c) mup_equalizer_pane_cp2_ParamLimits

0x39f0,	// (0x0005f40c) mup_equalizer_pane_cp2

0x3a11,	// (0x0005f42d) mup_equalizer_pane_cp3_ParamLimits

0x3a11,	// (0x0005f42d) mup_equalizer_pane_cp3

0x3a32,	// (0x0005f44e) mup_equalizer_pane_cp4_ParamLimits

0x3a32,	// (0x0005f44e) mup_equalizer_pane_cp4

0x3a53,	// (0x0005f46f) mup_equalizer_pane_cp5

0x3a69,	// (0x0005f485) mup_equalizer_pane_cp6

0x3a81,	// (0x0005f49d) mup_equalizer_pane_cp7

0xc75d,	// (0x00068179) bg_popup_call_poc_act_pane_g9

0xc765,	// (0x00068181) bg_popup_call_poc_act_pane_g10

0xc76d,	// (0x00068189) bg_popup_call_poc_act_pane_g11

0x000a,

0xa784,	// (0x000661a0) mup_scale_pane

0xa8aa,	// (0x000662c6) mup_scale_pane_g1

0xb5c6,	// (0x00066fe2) mup_scale_pane_g2

0x0006,

0xf3fa,	// (0x0006ae16) mup_scale_pane_g

0xb5ea,	// (0x00067006) msg_data_pane

0xb5f2,	// (0x0006700e) scroll_pane_cp017

0x3aab,	// (0x0005f4c7) bg_list_pane_cp04_ParamLimits

0x3aab,	// (0x0005f4c7) bg_list_pane_cp04

0xb5fa,	// (0x00067016) msg_data_pane_g1

0x3ac3,	// (0x0005f4df) msg_data_pane_g2

0x3acb,	// (0x0005f4e7) msg_data_pane_g3

0x3ad3,	// (0x0005f4ef) msg_data_pane_g4

0x3adb,	// (0x0005f4f7) msg_data_pane_g5

0x3ae3,	// (0x0005f4ff) msg_data_pane_g6

0x3aeb,	// (0x0005f507) msg_data_pane_g7

0x0006,

0xf409,	// (0x0006ae25) msg_data_pane_g

0x3af3,	// (0x0005f50f) msg_text_pane_ParamLimits

0x3af3,	// (0x0005f50f) msg_text_pane

0x3b4d,	// (0x0005f569) qrid_highlight_pane_cp011_ParamLimits

0x3b4d,	// (0x0005f569) qrid_highlight_pane_cp011

0xa529,	// (0x00065f45) msg_body_pane

0xa529,	// (0x00065f45) msg_header_pane

0xb60b,	// (0x00067027) input_focus_pane_cp07

0x9cba,	// (0x000656d6) msg_header_pane_t1_ParamLimits

0x9cba,	// (0x000656d6) msg_header_pane_t1

0x9ccc,	// (0x000656e8) msg_header_pane_t2_ParamLimits

0x9ccc,	// (0x000656e8) msg_header_pane_t2

0x0001,

0xf41d,	// (0x0006ae39) msg_header_pane_t_ParamLimits

0xf41d,	// (0x0006ae39) msg_header_pane_t

0xb620,	// (0x0006703c) msg_body_pane_g1

0x9cde,	// (0x000656fa) msg_body_pane_t1_ParamLimits

0x9cde,	// (0x000656fa) msg_body_pane_t1

0x9d0f,	// (0x0006572b) msg_body_pane_t2_ParamLimits

0x9d0f,	// (0x0006572b) msg_body_pane_t2

0x9d21,	// (0x0006573d) msg_body_pane_t3_ParamLimits

0x9d21,	// (0x0006573d) msg_body_pane_t3

0x0002,

0xf422,	// (0x0006ae3e) msg_body_pane_t_ParamLimits

0xf422,	// (0x0006ae3e) msg_body_pane_t

0x3bc7,	// (0x0005f5e3) main_viewer_pane_g1_ParamLimits

0x3bc7,	// (0x0005f5e3) main_viewer_pane_g1

0x3bd3,	// (0x0005f5ef) main_viewer_pane_g2_ParamLimits

0x3bd3,	// (0x0005f5ef) main_viewer_pane_g2

0x3bdf,	// (0x0005f5fb) main_viewer_pane_g3_ParamLimits

0x3bdf,	// (0x0005f5fb) main_viewer_pane_g3

0x3bf0,	// (0x0005f60c) main_viewer_pane_g4_ParamLimits

0x3bf0,	// (0x0005f60c) main_viewer_pane_g4

0x3c01,	// (0x0005f61d) main_viewer_pane_g5_ParamLimits

0x3c01,	// (0x0005f61d) main_viewer_pane_g5

0x3c01,	// (0x0005f61d) main_viewer_pane_g7_ParamLimits

0x3c01,	// (0x0005f61d) main_viewer_pane_g7

0xaf72,	// (0x0006698e) main_viewer_pane_g8_ParamLimits

0xaf72,	// (0x0006698e) main_viewer_pane_g8

0x0007,

0xf432,	// (0x0006ae4e) main_viewer_pane_g_ParamLimits

0xf432,	// (0x0006ae4e) main_viewer_pane_g

0xb628,	// (0x00067044) viewer_content_pane_ParamLimits

0xb628,	// (0x00067044) viewer_content_pane

0x3c3f,	// (0x0005f65b) main_postcard_pane_g1_ParamLimits

0x3c3f,	// (0x0005f65b) main_postcard_pane_g1

0x3c4d,	// (0x0005f669) main_postcard_pane_g2_ParamLimits

0x3c4d,	// (0x0005f669) main_postcard_pane_g2

0x3c5b,	// (0x0005f677) main_postcard_pane_g3_ParamLimits

0x3c5b,	// (0x0005f677) main_postcard_pane_g3

0x0005,

0xf443,	// (0x0006ae5f) main_postcard_pane_g_ParamLimits

0xf443,	// (0x0006ae5f) main_postcard_pane_g

0x3c6b,	// (0x0005f687) main_postcard_pane_g4

0xc97f,	// (0x0006839b) smil_status_volume_pane_g2

0x3c97,	// (0x0005f6b3) postcard_pane_ParamLimits

0x3c97,	// (0x0005f6b3) postcard_pane

0xb54a,	// (0x00066f66) postcard_pane_g1_ParamLimits

0xb54a,	// (0x00066f66) postcard_pane_g1

0x3cc9,	// (0x0005f6e5) postcard_pane_g2_ParamLimits

0x3cc9,	// (0x0005f6e5) postcard_pane_g2

0x3cd5,	// (0x0005f6f1) postcard_pane_g3_ParamLimits

0x3cd5,	// (0x0005f6f1) postcard_pane_g3

0xb636,	// (0x00067052) postcard_pane_g4_ParamLimits

0xb636,	// (0x00067052) postcard_pane_g4

0x3ce1,	// (0x0005f6fd) postcard_pane_g5_ParamLimits

0x3ce1,	// (0x0005f6fd) postcard_pane_g5

0x3ced,	// (0x0005f709) postcard_pane_g6_ParamLimits

0x3ced,	// (0x0005f709) postcard_pane_g6

0xb644,	// (0x00067060) postcard_pane_g7_ParamLimits

0xb644,	// (0x00067060) postcard_pane_g7

0x0006,

0xf450,	// (0x0006ae6c) postcard_pane_g_ParamLimits

0xf450,	// (0x0006ae6c) postcard_pane_g

0x3cf9,	// (0x0005f715) main_mp2_pane_g1_ParamLimits

0x3cf9,	// (0x0005f715) main_mp2_pane_g1

0x3d05,	// (0x0005f721) main_mp2_pane_g2_ParamLimits

0x3d05,	// (0x0005f721) main_mp2_pane_g2

0x3d11,	// (0x0005f72d) main_mp2_pane_g3_ParamLimits

0x3d11,	// (0x0005f72d) main_mp2_pane_g3

0x0002,

0xf45f,	// (0x0006ae7b) main_mp2_pane_g_ParamLimits

0xf45f,	// (0x0006ae7b) main_mp2_pane_g

0x3d1d,	// (0x0005f739) main_mp2_pane_t1_ParamLimits

0x3d1d,	// (0x0005f739) main_mp2_pane_t1

0x3d34,	// (0x0005f750) main_mp2_pane_t2_ParamLimits

0x3d34,	// (0x0005f750) main_mp2_pane_t2

0x3d46,	// (0x0005f762) main_mp2_pane_t3_ParamLimits

0x3d46,	// (0x0005f762) main_mp2_pane_t3

0x0002,

0xf466,	// (0x0006ae82) main_mp2_pane_t_ParamLimits

0xf466,	// (0x0006ae82) main_mp2_pane_t

0xb652,	// (0x0006706e) pec_content_pane_ParamLimits

0xb652,	// (0x0006706e) pec_content_pane

0xabd5,	// (0x000665f1) scroll_pane_cp015

0xb664,	// (0x00067080) pec_attribute_pane_ParamLimits

0xb664,	// (0x00067080) pec_attribute_pane

0x3d58,	// (0x0005f774) pec_content_pane_g1_ParamLimits

0x3d58,	// (0x0005f774) pec_content_pane_g1

0xb674,	// (0x00067090) pec_content_pane_t1_ParamLimits

0xb674,	// (0x00067090) pec_content_pane_t1

0xb686,	// (0x000670a2) pec_content_pane_t2_ParamLimits

0xb686,	// (0x000670a2) pec_content_pane_t2

0x0001,

0x0355,	// (0x0005bd71) pec_content_pane_t_ParamLimits

0x0355,	// (0x0005bd71) pec_content_pane_t

0x3d64,	// (0x0005f780) list_single_graphic_pane_cp01_ParamLimits

0x3d64,	// (0x0005f780) list_single_graphic_pane_cp01

0xa784,	// (0x000661a0) bg_popup_sub_pane_cp04

0xb698,	// (0x000670b4) popup_mup_playback_window_g1

0xb6a4,	// (0x000670c0) popup_mup_playback_window_t1

0xb6b9,	// (0x000670d5) popup_mup_playback_window_t2

0x0001,

0x035a,	// (0x0005bd76) popup_mup_playback_window_t

0xb6f0,	// (0x0006710c) main_image_pane_g1_ParamLimits

0xb6f0,	// (0x0006710c) main_image_pane_g1

0xb733,	// (0x0006714f) scroll_pane_cp018_ParamLimits

0xb733,	// (0x0006714f) scroll_pane_cp018

0xb74b,	// (0x00067167) scroll_pane_cp016_ParamLimits

0xb74b,	// (0x00067167) scroll_pane_cp016

0x3dfe,	// (0x0005f81a) smil2_image_pane_ParamLimits

0x3dfe,	// (0x0005f81a) smil2_image_pane

0x3e2e,	// (0x0005f84a) smil2_root_pane_ParamLimits

0x3e2e,	// (0x0005f84a) smil2_root_pane

0x3e5a,	// (0x0005f876) smil2_text_pane_ParamLimits

0x3e5a,	// (0x0005f876) smil2_text_pane

0xa529,	// (0x00065f45) bg_list_pane_cp06

0xb787,	// (0x000671a3) grid_radio_pane

0xa529,	// (0x00065f45) bg_popup_window_pane_cp06

0xb78f,	// (0x000671ab) main_fmradio_pane_t1

0xb14a,	// (0x00066b66) heading_pane_cp04

0xb79d,	// (0x000671b9) main_fmradio_pane_t2

0xc7b5,	// (0x000681d1) popup_cale_lunar_info_window_g1

0xb7ab,	// (0x000671c7) main_fmradio_pane_t3

0xc7bd,	// (0x000681d9) popup_cale_lunar_info_window_g2

0xb7b9,	// (0x000671d5) main_fmradio_pane_t4

0x0001,

0xb7c7,	// (0x000671e3) main_fmradio_pane_t5

0x0004,

0x0448,	// (0x0005be64) popup_cale_lunar_info_window_g

0x036f,	// (0x0005bd8b) main_fmradio_pane_t

0xb7d5,	// (0x000671f1) wait_bar_pane_cp03

0xb7dd,	// (0x000671f9) cell_fmradio_pane_ParamLimits

0xb7dd,	// (0x000671f9) cell_fmradio_pane

0xb644,	// (0x00067060) cell_fmradio_pane_g1_ParamLimits

0xb644,	// (0x00067060) cell_fmradio_pane_g1

0xa529,	// (0x00065f45) grid_highlight_pane_cp011

0xb7f0,	// (0x0006720c) poc_content_pane_ParamLimits

0xb7f0,	// (0x0006720c) poc_content_pane

0xb802,	// (0x0006721e) scroll_pane_cp019

0x3e9a,	// (0x0005f8b6) popup_call_poc_act_window_ParamLimits

0x3e9a,	// (0x0005f8b6) popup_call_poc_act_window

0x3ea7,	// (0x0005f8c3) popup_call_poc_inact_window_ParamLimits

0x3ea7,	// (0x0005f8c3) popup_call_poc_inact_window

0x040c,	// (0x0005be28) bg_popup_call_poc_act_pane_g

0xc775,	// (0x00068191) bg_popup_call_poc_inact_pane_g1

0xc77d,	// (0x00068199) bg_popup_call_poc_inact_pane_g2

0xb80a,	// (0x00067226) popup_call_poc_act_window_g2

0xc785,	// (0x000681a1) bg_popup_call_poc_inact_pane_g3

0xc705,	// (0x00068121) bg_popup_call_poc_inact_pane_g4

0xc78d,	// (0x000681a9) bg_popup_call_poc_inact_pane_g5

0xb812,	// (0x0006722e) popup_call_poc_act_window_t1_ParamLimits

0xb812,	// (0x0006722e) popup_call_poc_act_window_t1

0xb83a,	// (0x00067256) popup_call_poc_act_window_t2_ParamLimits

0xb83a,	// (0x00067256) popup_call_poc_act_window_t2

0xb862,	// (0x0006727e) popup_call_poc_act_window_t3_ParamLimits

0xb862,	// (0x0006727e) popup_call_poc_act_window_t3

0xb88a,	// (0x000672a6) popup_call_poc_act_window_t4_ParamLimits

0xb88a,	// (0x000672a6) popup_call_poc_act_window_t4

0x0003,

0x037a,	// (0x0005bd96) popup_call_poc_act_window_t_ParamLimits

0x037a,	// (0x0005bd96) popup_call_poc_act_window_t

0xc795,	// (0x000681b1) bg_popup_call_poc_inact_pane_g6

0xc79d,	// (0x000681b9) bg_popup_call_poc_inact_pane_g7

0xc7a5,	// (0x000681c1) bg_popup_call_poc_inact_pane_g8

0xb89c,	// (0x000672b8) popup_call_poc_inact_window_g2

0xc7ad,	// (0x000681c9) bg_popup_call_poc_inact_pane_g9

0x0008,

0x0423,	// (0x0005be3f) bg_popup_call_poc_inact_pane_g

0xb8a4,	// (0x000672c0) popup_call_poc_inact_window_t1_ParamLimits

0xb8a4,	// (0x000672c0) popup_call_poc_inact_window_t1

0xb8b9,	// (0x000672d5) popup_call_poc_inact_window_t2_ParamLimits

0xb8b9,	// (0x000672d5) popup_call_poc_inact_window_t2

0xb8ce,	// (0x000672ea) popup_call_poc_inact_window_t3_ParamLimits

0xb8ce,	// (0x000672ea) popup_call_poc_inact_window_t3

0x0002,

0x0383,	// (0x0005bd9f) popup_call_poc_inact_window_t_ParamLimits

0x0383,	// (0x0005bd9f) popup_call_poc_inact_window_t

0xc8f2,	// (0x0006830e) context_pane_ParamLimits

0x44eb,	// (0x0005ff07) signal_pane_ParamLimits

0xaa2c,	// (0x00066448) main_call2_pane

0x445e,	// (0x0005fe7a) popup_phob_thumbnail2_window_ParamLimits

0x445e,	// (0x0005fe7a) popup_phob_thumbnail2_window

0x3b75,	// (0x0005f591) aid_hotspot_pointer_arrow_pane

0x3b7d,	// (0x0005f599) aid_hotspot_pointer_hand_pane

0x41cf,	// (0x0005fbeb) phob_pre_status_pane_g5

0x1bfb,	// (0x0005d617) cams_zoom_pane_ParamLimits

0x1c07,	// (0x0005d623) image_vga_pane_ParamLimits

0x1c16,	// (0x0005d632) main_camera_pane_g1_ParamLimits

0x1c24,	// (0x0005d640) main_camera_pane_g2_ParamLimits

0x1c30,	// (0x0005d64c) main_camera_pane_g3_ParamLimits

0x1c3c,	// (0x0005d658) main_camera_pane_g4_ParamLimits

0x1c48,	// (0x0005d664) main_camera_pane_g5_ParamLimits

0x1c54,	// (0x0005d670) main_camera_pane_g6_ParamLimits

0x1c60,	// (0x0005d67c) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0006ac26) main_camera_pane_g_ParamLimits

0x1c6c,	// (0x0005d688) main_camera_pane_t1_ParamLimits

0x1c7e,	// (0x0005d69a) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0006ac37) main_camera_pane_t_ParamLimits

0xa784,	// (0x000661a0) bg_popup_preview_window_pane_cp01_ParamLimits

0xa784,	// (0x000661a0) bg_popup_preview_window_pane_cp01

0xb8e3,	// (0x000672ff) popup_phob_thumbnail2_window_g1_ParamLimits

0xb8e3,	// (0x000672ff) popup_phob_thumbnail2_window_g1

0xa529,	// (0x00065f45) call2_cli_visual_pane

0x3ec3,	// (0x0005f8df) popup_call2_audio_conf_window_ParamLimits

0x3ec3,	// (0x0005f8df) popup_call2_audio_conf_window

0x3ed8,	// (0x0005f8f4) popup_call2_audio_first_window_ParamLimits

0x3ed8,	// (0x0005f8f4) popup_call2_audio_first_window

0x3f76,	// (0x0005f992) popup_call2_audio_in_window_ParamLimits

0x3f76,	// (0x0005f992) popup_call2_audio_in_window

0x3fb8,	// (0x0005f9d4) popup_call2_audio_out_window_ParamLimits

0x3fb8,	// (0x0005f9d4) popup_call2_audio_out_window

0x401a,	// (0x0005fa36) popup_call2_audio_second_window_ParamLimits

0x401a,	// (0x0005fa36) popup_call2_audio_second_window

0x4078,	// (0x0005fa94) popup_call2_audio_wait_window_ParamLimits

0x4078,	// (0x0005fa94) popup_call2_audio_wait_window

0xa529,	// (0x00065f45) bg_popup_call2_act_pane_cp03

0xa766,	// (0x00066182) list_conf_pane_cp

0xb8ef,	// (0x0006730b) popup_call2_audio_conf_window_t1

0xb8fd,	// (0x00067319) list_single_graphic_popup_conf2_pane_ParamLimits

0xb8fd,	// (0x00067319) list_single_graphic_popup_conf2_pane

0xb1ba,	// (0x00066bd6) list_highlight_pane_cp04

0xb910,	// (0x0006732c) list_single_graphic_popup_conf2_pane_g1

0xb1cb,	// (0x00066be7) list_single_graphic_popup_conf2_pane_g2

0x0001,

0x038a,	// (0x0005bda6) list_single_graphic_popup_conf2_pane_g

0xb91a,	// (0x00067336) list_single_graphic_popup_conf2_pane_t1

0xb928,	// (0x00067344) bg_popup_call2_act_pane_cp01_ParamLimits

0xb928,	// (0x00067344) bg_popup_call2_act_pane_cp01

0xb9b2,	// (0x000673ce) call_type_pane_cp05_ParamLimits

0xb9b2,	// (0x000673ce) call_type_pane_cp05

0xba06,	// (0x00067422) popup_call2_audio_second_window_g1_ParamLimits

0xba06,	// (0x00067422) popup_call2_audio_second_window_g1

0xba5a,	// (0x00067476) popup_call2_audio_second_window_g2_ParamLimits

0xba5a,	// (0x00067476) popup_call2_audio_second_window_g2

0x0002,

0x038f,	// (0x0005bdab) popup_call2_audio_second_window_g_ParamLimits

0x038f,	// (0x0005bdab) popup_call2_audio_second_window_g

0xbabf,	// (0x000674db) popup_call2_audio_second_window_t1_ParamLimits

0xbabf,	// (0x000674db) popup_call2_audio_second_window_t1

0xbb7a,	// (0x00067596) popup_call2_audio_second_window_t2_ParamLimits

0xbb7a,	// (0x00067596) popup_call2_audio_second_window_t2

0xbbcd,	// (0x000675e9) popup_call2_audio_second_window_t3_ParamLimits

0xbbcd,	// (0x000675e9) popup_call2_audio_second_window_t3

0x0003,

0x0396,	// (0x0005bdb2) popup_call2_audio_second_window_t_ParamLimits

0x0396,	// (0x0005bdb2) popup_call2_audio_second_window_t

0xa529,	// (0x00065f45) bg_popup_call2_in_pane_cp02

0xa533,	// (0x00065f4f) call_type_pane_cp04

0xa53b,	// (0x00065f57) popup_call2_audio_wait_window_g1

0xa543,	// (0x00065f5f) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0006ab15) popup_call2_audio_wait_window_g

0xa54b,	// (0x00065f67) popup_call2_audio_wait_window_t3

0xbcc0,	// (0x000676dc) bg_popup_call2_act_pane_ParamLimits

0xbcc0,	// (0x000676dc) bg_popup_call2_act_pane

0xbd80,	// (0x0006779c) call_type_pane_cp03_ParamLimits

0xbd80,	// (0x0006779c) call_type_pane_cp03

0xbde4,	// (0x00067800) popup_call2_audio_first_window_g1_ParamLimits

0xbde4,	// (0x00067800) popup_call2_audio_first_window_g1

0xbe54,	// (0x00067870) popup_call2_audio_first_window_g2_ParamLimits

0xbe54,	// (0x00067870) popup_call2_audio_first_window_g2

0xb54a,	// (0x00066f66) popup_call2_audio_first_window_g3_ParamLimits

0xb54a,	// (0x00066f66) popup_call2_audio_first_window_g3

0x0004,

0x039f,	// (0x0005bdbb) popup_call2_audio_first_window_g_ParamLimits

0x039f,	// (0x0005bdbb) popup_call2_audio_first_window_g

0xbf32,	// (0x0006794e) popup_call2_audio_first_window_t1_ParamLimits

0xbf32,	// (0x0006794e) popup_call2_audio_first_window_t1

0xc035,	// (0x00067a51) popup_call2_audio_first_window_t4_ParamLimits

0xc035,	// (0x00067a51) popup_call2_audio_first_window_t4

0xc118,	// (0x00067b34) popup_call2_audio_first_window_t5_ParamLimits

0xc118,	// (0x00067b34) popup_call2_audio_first_window_t5

0x0003,

0x03aa,	// (0x0005bdc6) popup_call2_audio_first_window_t_ParamLimits

0x03aa,	// (0x0005bdc6) popup_call2_audio_first_window_t

0xa77c,	// (0x00066198) bg_popup_call2_act_pane_g1

0xc7c5,	// (0x000681e1) popup_cale_lunar_info_window_t1

0xc7d3,	// (0x000681ef) popup_cale_lunar_info_window_t2

0xc7e1,	// (0x000681fd) popup_cale_lunar_info_window_t3

0xa529,	// (0x00065f45) bg_popup_call2_bubble_pane

0xc219,	// (0x00067c35) bg_popup_call2_in_pane_cp01_ParamLimits

0xc219,	// (0x00067c35) bg_popup_call2_in_pane_cp01

0x9c62,	// (0x0006567e) call_type_pane_cp02

0xc261,	// (0x00067c7d) popup_call2_audio_out_window_g1_ParamLimits

0xc261,	// (0x00067c7d) popup_call2_audio_out_window_g1

0xc28d,	// (0x00067ca9) popup_call2_audio_out_window_g2_ParamLimits

0xc28d,	// (0x00067ca9) popup_call2_audio_out_window_g2

0xc2b5,	// (0x00067cd1) popup_call2_audio_out_window_g3_ParamLimits

0xc2b5,	// (0x00067cd1) popup_call2_audio_out_window_g3

0x0003,

0x03b3,	// (0x0005bdcf) popup_call2_audio_out_window_g_ParamLimits

0x03b3,	// (0x0005bdcf) popup_call2_audio_out_window_g

0xc2f0,	// (0x00067d0c) popup_call2_audio_out_window_t1_ParamLimits

0xc2f0,	// (0x00067d0c) popup_call2_audio_out_window_t1

0xc34f,	// (0x00067d6b) popup_call2_audio_out_window_t2_ParamLimits

0xc34f,	// (0x00067d6b) popup_call2_audio_out_window_t2

0xc3a3,	// (0x00067dbf) popup_call2_audio_out_window_t3_ParamLimits

0xc3a3,	// (0x00067dbf) popup_call2_audio_out_window_t3

0xc3b9,	// (0x00067dd5) popup_call2_audio_out_window_t4_ParamLimits

0xc3b9,	// (0x00067dd5) popup_call2_audio_out_window_t4

0xc3cf,	// (0x00067deb) popup_call2_audio_out_window_t5_ParamLimits

0xc3cf,	// (0x00067deb) popup_call2_audio_out_window_t5

0x0005,

0x03bc,	// (0x0005bdd8) popup_call2_audio_out_window_t_ParamLimits

0x03bc,	// (0x0005bdd8) popup_call2_audio_out_window_t

0xc433,	// (0x00067e4f) bg_popup_call2_in_pane_ParamLimits

0xc433,	// (0x00067e4f) bg_popup_call2_in_pane

0xc48f,	// (0x00067eab) popup_call2_audio_in_window_g1_ParamLimits

0xc48f,	// (0x00067eab) popup_call2_audio_in_window_g1

0xc4c7,	// (0x00067ee3) popup_call2_audio_in_window_g2_ParamLimits

0xc4c7,	// (0x00067ee3) popup_call2_audio_in_window_g2

0xc4ff,	// (0x00067f1b) popup_call2_audio_in_window_g3_ParamLimits

0xc4ff,	// (0x00067f1b) popup_call2_audio_in_window_g3

0x0003,

0x03c9,	// (0x0005bde5) popup_call2_audio_in_window_g_ParamLimits

0x03c9,	// (0x0005bde5) popup_call2_audio_in_window_g

0xc557,	// (0x00067f73) popup_call2_audio_in_window_t1_ParamLimits

0xc557,	// (0x00067f73) popup_call2_audio_in_window_t1

0xc5d7,	// (0x00067ff3) popup_call2_audio_in_window_t2_ParamLimits

0xc5d7,	// (0x00067ff3) popup_call2_audio_in_window_t2

0xc657,	// (0x00068073) popup_call2_audio_in_window_t3_ParamLimits

0xc657,	// (0x00068073) popup_call2_audio_in_window_t3

0xc671,	// (0x0006808d) popup_call2_audio_in_window_t4_ParamLimits

0xc671,	// (0x0006808d) popup_call2_audio_in_window_t4

0xc683,	// (0x0006809f) popup_call2_audio_in_window_t5_ParamLimits

0xc683,	// (0x0006809f) popup_call2_audio_in_window_t5

0xc698,	// (0x000680b4) popup_call2_audio_in_window_t6_ParamLimits

0xc698,	// (0x000680b4) popup_call2_audio_in_window_t6

0x0005,

0x03d2,	// (0x0005bdee) popup_call2_audio_in_window_t_ParamLimits

0x03d2,	// (0x0005bdee) popup_call2_audio_in_window_t

0xa77c,	// (0x00066198) bg_popup_call2_in_pane_g1

0xc7ef,	// (0x0006820b) popup_cale_lunar_info_window_t4

0x0003,

0x044d,	// (0x0005be69) popup_cale_lunar_info_window_t

0xa784,	// (0x000661a0) bg_popup_call2_rect_pane_ParamLimits

0xa784,	// (0x000661a0) bg_popup_call2_rect_pane

0xa529,	// (0x00065f45) call2_cli_visual_graphic_pane

0xa529,	// (0x00065f45) call2_cli_visual_text_pane

0x4594,	// (0x0005ffb0) smil_status_volume_pane_g3

0x0002,

0xa8aa,	// (0x000662c6) call2_cli_visual_graphic_pane_g1

0xa8aa,	// (0x000662c6) call2_cli_visual_graphic_pane_g2

0xa8aa,	// (0x000662c6) call2_cli_visual_graphic_pane_g3

0x0002,

0xf47d,	// (0x0006ae99) call2_cli_visual_graphic_pane_g

0xc6ad,	// (0x000680c9) bg_popup_call2_rect_pane_g1

0xa948,	// (0x00066364) bg_popup_call2_rect_pane_g2

0xc6b5,	// (0x000680d1) bg_popup_call2_rect_pane_g3

0xc6bd,	// (0x000680d9) bg_popup_call2_rect_pane_g4

0xc6c5,	// (0x000680e1) bg_popup_call2_rect_pane_g5

0xc6cd,	// (0x000680e9) bg_popup_call2_rect_pane_g6

0xc6d5,	// (0x000680f1) bg_popup_call2_rect_pane_g7

0xc6dd,	// (0x000680f9) bg_popup_call2_rect_pane_g8

0xc6e5,	// (0x00068101) bg_popup_call2_rect_pane_g9

0x0008,

0xf484,	// (0x0006aea0) bg_popup_call2_rect_pane_g

0xc6ed,	// (0x00068109) bg_popup_call2_bubble_pane_g1

0xc6f5,	// (0x00068111) bg_popup_call2_bubble_pane_g2

0xc6fd,	// (0x00068119) bg_popup_call2_bubble_pane_g3

0xc705,	// (0x00068121) bg_popup_call2_bubble_pane_g4

0xc70d,	// (0x00068129) bg_popup_call2_bubble_pane_g5

0xc715,	// (0x00068131) bg_popup_call2_bubble_pane_g6

0xc71d,	// (0x00068139) bg_popup_call2_bubble_pane_g7

0xc725,	// (0x00068141) bg_popup_call2_bubble_pane_g8

0xc72d,	// (0x00068149) bg_popup_call2_bubble_pane_g9

0x0008,

0x03f9,	// (0x0005be15) bg_popup_call2_bubble_pane_g

0x170d,	// (0x0005d129) aid_cale_week_size_cell_pane

0x1c90,	// (0x0005d6ac) aid_cams_cif_uncrop_pane_ParamLimits

0x1c90,	// (0x0005d6ac) aid_cams_cif_uncrop_pane

0x1deb,	// (0x0005d807) aid_cams_size_cell_ParamLimits

0x1deb,	// (0x0005d807) aid_cams_size_cell

0x1df7,	// (0x0005d813) grid_cams_pane_ParamLimits

0x1e05,	// (0x0005d821) linegrid_cams_pane_ParamLimits

0x1ff0,	// (0x0005da0c) call_video_pane_t1

0x2011,	// (0x0005da2d) call_video_pane_t2

0x0001,

0xf26e,	// (0x0006ac8a) call_video_pane_t

0x255f,	// (0x0005df7b) aid_cale_month_size_cell_pane_ParamLimits

0x255f,	// (0x0005df7b) aid_cale_month_size_cell_pane

0xf4c7,	// (0x0006aee3) smil_status_volume_pane_g

0x45a1,	// (0x0005ffbd) volume_smil_pane_ParamLimits

0x0e5a,	// (0x0005c876) aid_popup2_width_pane

0x15f9,	// (0x0005d015) cell_qdial_pane_g4_ParamLimits

0x15f9,	// (0x0005d015) cell_qdial_pane_g4

0x35a8,	// (0x0005efc4) aid_blid_cardinal_pane_ParamLimits

0x35b8,	// (0x0005efd4) aid_blid_destination_pane_ParamLimits

0x35b8,	// (0x0005efd4) aid_blid_destination_pane

0xa784,	// (0x000661a0) bg_popup_call_poc_act_pane_ParamLimits

0xa784,	// (0x000661a0) bg_popup_call_poc_act_pane

0xa784,	// (0x000661a0) bg_popup_call_poc_inact_pane_ParamLimits

0xa784,	// (0x000661a0) bg_popup_call_poc_inact_pane

0xc735,	// (0x00068151) bg_popup_call_poc_act_pane_g1

0xc73d,	// (0x00068159) bg_popup_call_poc_act_pane_g2

0xc745,	// (0x00068161) bg_popup_call_poc_act_pane_g3

0xc705,	// (0x00068121) bg_popup_call_poc_act_pane_g4

0xc70d,	// (0x00068129) bg_popup_call_poc_act_pane_g5

0xc74d,	// (0x00068169) bg_popup_call_poc_act_pane_g6

0xc71d,	// (0x00068139) bg_popup_call_poc_act_pane_g7

0xc755,	// (0x00068171) bg_popup_call_poc_act_pane_g8

0xa529,	// (0x00065f45) main_usb_pane

0x4391,	// (0x0005fdad) popup_cale_lunar_info_window

0x232e,	// (0x0005dd4a) im_reading_pane_t1_ParamLimits

0xab2d,	// (0x00066549) list_im_pane_ParamLimits

0xab3e,	// (0x0006655a) scroll_pane_cp07_ParamLimits

0xa529,	// (0x00065f45) grid_highlight_pane_cp012

0xa784,	// (0x000661a0) mup_scale_pane_ParamLimits

0xb54a,	// (0x00066f66) main_usb_pane_g1_ParamLimits

0xb54a,	// (0x00066f66) main_usb_pane_g1

0x40f2,	// (0x0005fb0e) main_usb_pane_g2_ParamLimits

0x40f2,	// (0x0005fb0e) main_usb_pane_g2

0x0001,

0xf497,	// (0x0006aeb3) main_usb_pane_g_ParamLimits

0xf497,	// (0x0006aeb3) main_usb_pane_g

0x40fe,	// (0x0005fb1a) main_usb_pane_t1_ParamLimits

0x40fe,	// (0x0005fb1a) main_usb_pane_t1

0x4110,	// (0x0005fb2c) main_usb_pane_t2_ParamLimits

0x4110,	// (0x0005fb2c) main_usb_pane_t2

0x4122,	// (0x0005fb3e) main_usb_pane_t3_ParamLimits

0x4122,	// (0x0005fb3e) main_usb_pane_t3

0x4134,	// (0x0005fb50) main_usb_pane_t4_ParamLimits

0x4134,	// (0x0005fb50) main_usb_pane_t4

0x4146,	// (0x0005fb62) main_usb_pane_t5_ParamLimits

0x4146,	// (0x0005fb62) main_usb_pane_t5

0x4158,	// (0x0005fb74) main_usb_pane_t6_ParamLimits

0x4158,	// (0x0005fb74) main_usb_pane_t6

0x0005,

0xf49c,	// (0x0006aeb8) main_usb_pane_t_ParamLimits

0x354e,	// (0x0005ef6a) aid_text_placing

0x355a,	// (0x0005ef76) main_location2_pane_t1_ParamLimits

0x356e,	// (0x0005ef8a) main_location2_pane_t2_ParamLimits

0x3582,	// (0x0005ef9e) main_location2_pane_t3_ParamLimits

0x3596,	// (0x0005efb2) main_location2_pane_t4_ParamLimits

0x3596,	// (0x0005efb2) main_location2_pane_t4

0xf387,	// (0x0006ada3) main_location2_pane_t_ParamLimits

0xa7c0,	// (0x000661dc) find_pinb_pane_g2_ParamLimits

0xa7c0,	// (0x000661dc) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0006ab3b) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0006ab3b) find_pinb_pane_g

0xa7cc,	// (0x000661e8) find_pinb_pane_t1_ParamLimits

0xa7de,	// (0x000661fa) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0006ab40) find_pinb_pane_t_ParamLimits

0xa529,	// (0x00065f45) main_call3_pane

0x2b22,	// (0x0005e53e) cale_month_day_heading_pane_t1_ParamLimits

0x2ba8,	// (0x0005e5c4) cale_month_day_heading_pane_t2_ParamLimits

0x2c21,	// (0x0005e63d) cale_month_day_heading_pane_t3_ParamLimits

0x2c9a,	// (0x0005e6b6) cale_month_day_heading_pane_t4_ParamLimits

0x2d13,	// (0x0005e72f) cale_month_day_heading_pane_t5_ParamLimits

0x2d8c,	// (0x0005e7a8) cale_month_day_heading_pane_t6_ParamLimits

0x2e05,	// (0x0005e821) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0006acc2) cale_month_day_heading_pane_t_ParamLimits

0xadb4,	// (0x000667d0) smil_status_volume_pane

0x3cb1,	// (0x0005f6cd) postcard_address_pane_ParamLimits

0x3cb1,	// (0x0005f6cd) postcard_address_pane

0x3cbd,	// (0x0005f6d9) postcard_message_pane_ParamLimits

0x3cbd,	// (0x0005f6d9) postcard_message_pane

0x40b7,	// (0x0005fad3) call2_cli_visual_pane_t1_ParamLimits

0x40b7,	// (0x0005fad3) call2_cli_visual_pane_t1

0x46f8,	// (0x00060114) postcard_message_pane_t1_ParamLimits

0x46f8,	// (0x00060114) postcard_message_pane_t1

0x46e1,	// (0x000600fd) postcard_address_pane_t1_ParamLimits

0x46e1,	// (0x000600fd) postcard_address_pane_t1

0x46d2,	// (0x000600ee) popup_call3_audio_in_window_ParamLimits

0x46d2,	// (0x000600ee) popup_call3_audio_in_window

0x45b6,	// (0x0005ffd2) bg_popup_call3_in_pane_ParamLimits

0x45b6,	// (0x0005ffd2) bg_popup_call3_in_pane

0x4618,	// (0x00060034) popup_call3_audio_in_window_g1_ParamLimits

0x4618,	// (0x00060034) popup_call3_audio_in_window_g1

0x4630,	// (0x0006004c) popup_call3_audio_in_window_g2_ParamLimits

0x4630,	// (0x0006004c) popup_call3_audio_in_window_g2

0x4648,	// (0x00060064) popup_call3_audio_in_window_g3_ParamLimits

0x4648,	// (0x00060064) popup_call3_audio_in_window_g3

0x0003,

0xf4ce,	// (0x0006aeea) popup_call3_audio_in_window_g_ParamLimits

0xf4ce,	// (0x0006aeea) popup_call3_audio_in_window_g

0x4670,	// (0x0006008c) popup_call3_audio_in_window_t1_ParamLimits

0x4670,	// (0x0006008c) popup_call3_audio_in_window_t1

0x4698,	// (0x000600b4) popup_call3_audio_in_window_t2_ParamLimits

0x4698,	// (0x000600b4) popup_call3_audio_in_window_t2

0x46c0,	// (0x000600dc) popup_call3_audio_in_window_t3_ParamLimits

0x46c0,	// (0x000600dc) popup_call3_audio_in_window_t3

0x0002,

0xf4d7,	// (0x0006aef3) popup_call3_audio_in_window_t_ParamLimits

0xf4d7,	// (0x0006aef3) popup_call3_audio_in_window_t

0xaa2c,	// (0x00066448) bg_popup_call3_rect_pane

0xc6ad,	// (0x000680c9) bg_popup_call3_rect_pane_g1

0xa948,	// (0x00066364) bg_popup_call3_rect_pane_g2

0xc6b5,	// (0x000680d1) bg_popup_call3_rect_pane_g3

0xc6bd,	// (0x000680d9) bg_popup_call3_rect_pane_g4

0xc6c5,	// (0x000680e1) bg_popup_call3_rect_pane_g5

0xc6cd,	// (0x000680e9) bg_popup_call3_rect_pane_g6

0xc6d5,	// (0x000680f1) bg_popup_call3_rect_pane_g7

0x38be,	// (0x0005f2da) mup_visualizer_osc_pane

0xb558,	// (0x00066f74) mup_visualizer_spec_pane

0x45d6,	// (0x0005fff2) call3_video_qcif_pane_ParamLimits

0x45d6,	// (0x0005fff2) call3_video_qcif_pane

0x45e8,	// (0x00060004) call3_video_qcif_uncrop_pane_ParamLimits

0x45e8,	// (0x00060004) call3_video_qcif_uncrop_pane

0x45f6,	// (0x00060012) call3_video_subqcif_pane_ParamLimits

0x45f6,	// (0x00060012) call3_video_subqcif_pane

0x4608,	// (0x00060024) call3_video_subqcif_uncrop_pane_ParamLimits

0x4608,	// (0x00060024) call3_video_subqcif_uncrop_pane

0x4660,	// (0x0006007c) popup_call3_audio_in_window_g4_ParamLimits

0x4660,	// (0x0006007c) popup_call3_audio_in_window_g4

0x4581,	// (0x0005ff9d) mup_spec_half_pane

0x458a,	// (0x0005ffa6) mup_spec_half_pane_cp

0xc952,	// (0x0006836e) mup_osc_middle_pane

0xc95b,	// (0x00068377) mup_visualizer_osc_pane_g1

0x4562,	// (0x0005ff7e) mup_spec_bar_pane_ParamLimits

0x4562,	// (0x0005ff7e) mup_spec_bar_pane

0xc93f,	// (0x0006835b) mup_spec_bar_pane_g1

0xc949,	// (0x00068365) mup_spec_bar_pane_g2

0x0001,

0x0491,	// (0x0005bead) mup_spec_bar_pane_g

0x170d,	// (0x0005d129) aid_cale_week_size_cell_pane_ParamLimits

0x1722,	// (0x0005d13e) bg_cale_heading_pane_ParamLimits

0xa985,	// (0x000663a1) bg_cale_pane_cp01_ParamLimits

0x1744,	// (0x0005d160) cale_week_corner_pane_ParamLimits

0x175e,	// (0x0005d17a) cale_week_day_heading_pane_ParamLimits

0x1780,	// (0x0005d19c) cale_week_scroll_pane_g1_ParamLimits

0x179d,	// (0x0005d1b9) cale_week_scroll_pane_g2_ParamLimits

0x17b0,	// (0x0005d1cc) cale_week_scroll_pane_g3_ParamLimits

0x17c3,	// (0x0005d1df) cale_week_scroll_pane_g4_ParamLimits

0x17d6,	// (0x0005d1f2) cale_week_scroll_pane_g5_ParamLimits

0x17e9,	// (0x0005d205) cale_week_scroll_pane_g6_ParamLimits

0x17fc,	// (0x0005d218) cale_week_scroll_pane_g7_ParamLimits

0x1811,	// (0x0005d22d) cale_week_scroll_pane_g8_ParamLimits

0x1826,	// (0x0005d242) cale_week_scroll_pane_g9_ParamLimits

0x1839,	// (0x0005d255) cale_week_scroll_pane_g10_ParamLimits

0x184c,	// (0x0005d268) cale_week_scroll_pane_g11_ParamLimits

0x185f,	// (0x0005d27b) cale_week_scroll_pane_g12_ParamLimits

0x1876,	// (0x0005d292) cale_week_scroll_pane_g13_ParamLimits

0x1891,	// (0x0005d2ad) cale_week_scroll_pane_g14_ParamLimits

0x18ac,	// (0x0005d2c8) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0006abcc) cale_week_scroll_pane_g_ParamLimits

0x18dc,	// (0x0005d2f8) cale_week_time_pane_ParamLimits

0x18f1,	// (0x0005d30d) grid_cale_week_pane_ParamLimits

0xa9a2,	// (0x000663be) listscroll_cale_week_pane_t1

0xa9b4,	// (0x000663d0) scroll_pane_cp08_ParamLimits

0x25d3,	// (0x0005dfef) cale_month_corner_pane_ParamLimits

0xad8a,	// (0x000667a6) cale_month_pane_t1

0x2aa1,	// (0x0005e4bd) cale_month_week_pane_ParamLimits

0xb54a,	// (0x00066f66) popup_call_status_window_g1_ParamLimits

0x3357,	// (0x0005ed73) popup_call_status_window_g2_ParamLimits

0x3363,	// (0x0005ed7f) popup_call_status_window_g3_ParamLimits

0xf322,	// (0x0006ad3e) popup_call_status_window_g_ParamLimits

0xb13a,	// (0x00066b56) aid_call2_pane

0x3b69,	// (0x0005f585) msg_header_pane_g1

0x3cb1,	// (0x0005f6cd) postcard_address2_pane_ParamLimits

0x3cb1,	// (0x0005f6cd) postcard_address2_pane

0x3cbd,	// (0x0005f6d9) postcard_message2_pane_ParamLimits

0x3cbd,	// (0x0005f6d9) postcard_message2_pane

0x44f9,	// (0x0005ff15) message2_row_pane_ParamLimits

0x44f9,	// (0x0005ff15) message2_row_pane

0x4514,	// (0x0005ff30) address2_row_pane_ParamLimits

0x4514,	// (0x0005ff30) address2_row_pane

0xc90d,	// (0x00068329) postcard_message2_row_pane_g1

0xc915,	// (0x00068331) postcard_message2_row_pane_t1

0xc90d,	// (0x00068329) address2_row_pane_g1

0xc915,	// (0x00068331) address2_row_pane_t1

0x1b76,	// (0x0005d592) aid_size_cell_vorec

0xa529,	// (0x00065f45) main_rss_pane

0x4527,	// (0x0005ff43) rss_list_single_pane_ParamLimits

0x4527,	// (0x0005ff43) rss_list_single_pane

0xc923,	// (0x0006833f) rss_list_single_pane_t1

0xc931,	// (0x0006834d) rss_list_single_pane_t2

0x0001,

0x048c,	// (0x0005bea8) rss_list_single_pane_t

0xa529,	// (0x00065f45) main_camera2_pane

0xa529,	// (0x00065f45) main_video2_pane

0x475c,	// (0x00060178) cams_zoom_pane_cp2_ParamLimits

0x475c,	// (0x00060178) cams_zoom_pane_cp2

0x4768,	// (0x00060184) image2_vga_pane_ParamLimits

0x4768,	// (0x00060184) image2_vga_pane

0x4777,	// (0x00060193) main_camera2_pane_g1_ParamLimits

0x4777,	// (0x00060193) main_camera2_pane_g1

0x4783,	// (0x0006019f) main_camera2_pane_g2_ParamLimits

0x4783,	// (0x0006019f) main_camera2_pane_g2

0x478f,	// (0x000601ab) main_camera2_pane_g3_ParamLimits

0x478f,	// (0x000601ab) main_camera2_pane_g3

0x479b,	// (0x000601b7) main_camera2_pane_g4_ParamLimits

0x479b,	// (0x000601b7) main_camera2_pane_g4

0x47a7,	// (0x000601c3) main_camera2_pane_g5_ParamLimits

0x47a7,	// (0x000601c3) main_camera2_pane_g5

0x47b3,	// (0x000601cf) main_camera2_pane_g6_ParamLimits

0x47b3,	// (0x000601cf) main_camera2_pane_g6

0x47bf,	// (0x000601db) main_camera2_pane_g7_ParamLimits

0x47bf,	// (0x000601db) main_camera2_pane_g7

0x47cb,	// (0x000601e7) main_camera2_pane_g8_ParamLimits

0x47cb,	// (0x000601e7) main_camera2_pane_g8

0x0008,

0xf4de,	// (0x0006aefa) main_camera2_pane_g_ParamLimits

0xf4de,	// (0x0006aefa) main_camera2_pane_g

0x47e3,	// (0x000601ff) main_camera2_pane_t1_ParamLimits

0x47e3,	// (0x000601ff) main_camera2_pane_t1

0x47f5,	// (0x00060211) main_camera2_pane_t2_ParamLimits

0x47f5,	// (0x00060211) main_camera2_pane_t2

0x4807,	// (0x00060223) main_camera2_pane_t3_ParamLimits

0x4807,	// (0x00060223) main_camera2_pane_t3

0x4819,	// (0x00060235) main_camera2_pane_t4_ParamLimits

0x4819,	// (0x00060235) main_camera2_pane_t4

0x0006,

0xf4f1,	// (0x0006af0d) main_camera2_pane_t_ParamLimits

0xf4f1,	// (0x0006af0d) main_camera2_pane_t

0x487b,	// (0x00060297) cams_zoom_pane_cp4_ParamLimits

0x487b,	// (0x00060297) cams_zoom_pane_cp4

0x488b,	// (0x000602a7) image2_cif_pane_ParamLimits

0x488b,	// (0x000602a7) image2_cif_pane

0x48a0,	// (0x000602bc) image2_subqcif_pane_ParamLimits

0x48a0,	// (0x000602bc) image2_subqcif_pane

0x48af,	// (0x000602cb) main_video2_pane_g1_ParamLimits

0x48af,	// (0x000602cb) main_video2_pane_g1

0x48c1,	// (0x000602dd) main_video2_pane_g2_ParamLimits

0x48c1,	// (0x000602dd) main_video2_pane_g2

0x48d1,	// (0x000602ed) main_video2_pane_g3_ParamLimits

0x48d1,	// (0x000602ed) main_video2_pane_g3

0x48e1,	// (0x000602fd) main_video2_pane_g4_ParamLimits

0x48e1,	// (0x000602fd) main_video2_pane_g4

0x48f1,	// (0x0006030d) main_video2_pane_g5_ParamLimits

0x48f1,	// (0x0006030d) main_video2_pane_g5

0x4901,	// (0x0006031d) main_video2_pane_g6_ParamLimits

0x4901,	// (0x0006031d) main_video2_pane_g6

0x0005,

0xf500,	// (0x0006af1c) main_video2_pane_g_ParamLimits

0xf500,	// (0x0006af1c) main_video2_pane_g

0x4913,	// (0x0006032f) main_video2_pane_t1_ParamLimits

0x4913,	// (0x0006032f) main_video2_pane_t1

0x492d,	// (0x00060349) main_video2_pane_t2_ParamLimits

0x492d,	// (0x00060349) main_video2_pane_t2

0x4953,	// (0x0006036f) main_video2_pane_t3_ParamLimits

0x4953,	// (0x0006036f) main_video2_pane_t3

0x0002,

0xf50d,	// (0x0006af29) main_video2_pane_t_ParamLimits

0xf50d,	// (0x0006af29) main_video2_pane_t

0x420f,	// (0x0005fc2b) call_muted_g2

0x0001,

0xf4c2,	// (0x0006aede) call_muted_g

0xa529,	// (0x00065f45) main_mup2_pane

0xc992,	// (0x000683ae) main_mup2_pane_g1_ParamLimits

0xc992,	// (0x000683ae) main_mup2_pane_g1

0x4979,	// (0x00060395) main_mup2_pane_g2_ParamLimits

0x4979,	// (0x00060395) main_mup2_pane_g2

0x4bfb,	// (0x00060617) main_mup_pane_g13_cp1

0x4c03,	// (0x0006061f) mup_volume_pane_cp1

0x4999,	// (0x000603b5) main_mup2_pane_g4_ParamLimits

0x4999,	// (0x000603b5) main_mup2_pane_g4

0x49ae,	// (0x000603ca) main_mup2_pane_g5_ParamLimits

0x49ae,	// (0x000603ca) main_mup2_pane_g5

0x49c3,	// (0x000603df) main_mup2_pane_g6_ParamLimits

0x49c3,	// (0x000603df) main_mup2_pane_g6

0x49d8,	// (0x000603f4) main_mup2_pane_g7_ParamLimits

0x49d8,	// (0x000603f4) main_mup2_pane_g7

0x0006,

0xf514,	// (0x0006af30) main_mup2_pane_g_ParamLimits

0xf514,	// (0x0006af30) main_mup2_pane_g

0x49f4,	// (0x00060410) main_mup2_pane_t1_ParamLimits

0x49f4,	// (0x00060410) main_mup2_pane_t1

0x4a0b,	// (0x00060427) main_mup2_pane_t2_ParamLimits

0x4a0b,	// (0x00060427) main_mup2_pane_t2

0x4a22,	// (0x0006043e) main_mup2_pane_t3_ParamLimits

0x4a22,	// (0x0006043e) main_mup2_pane_t3

0x4a39,	// (0x00060455) main_mup2_pane_t4_ParamLimits

0x4a39,	// (0x00060455) main_mup2_pane_t4

0x4a53,	// (0x0006046f) main_mup2_pane_t5_ParamLimits

0x4a53,	// (0x0006046f) main_mup2_pane_t5

0x4a6d,	// (0x00060489) main_mup2_pane_t6_ParamLimits

0x4a6d,	// (0x00060489) main_mup2_pane_t6

0x0005,

0xf523,	// (0x0006af3f) main_mup2_pane_t_ParamLimits

0xf523,	// (0x0006af3f) main_mup2_pane_t

0x4aa5,	// (0x000604c1) mup2_visualizer_pane_ParamLimits

0x4aa5,	// (0x000604c1) mup2_visualizer_pane

0x4adb,	// (0x000604f7) mup_progress_pane_cp_ParamLimits

0x4adb,	// (0x000604f7) mup_progress_pane_cp

0x4be6,	// (0x00060602) mup_volume_pane_cp_ParamLimits

0x4be6,	// (0x00060602) mup_volume_pane_cp

0x4af2,	// (0x0006050e) mup2_visualizer_pane_g1_ParamLimits

0x4af2,	// (0x0006050e) mup2_visualizer_pane_g1

0xc99e,	// (0x000683ba) mup2_visualizer_pane_g2_ParamLimits

0xc99e,	// (0x000683ba) mup2_visualizer_pane_g2

0x4b07,	// (0x00060523) mup2_visualizer_pane_g3_ParamLimits

0x4b07,	// (0x00060523) mup2_visualizer_pane_g3

0x0002,

0xf530,	// (0x0006af4c) mup2_visualizer_pane_g_ParamLimits

0xf530,	// (0x0006af4c) mup2_visualizer_pane_g

0xb77f,	// (0x0006719b) aid_size_cell_fmradio

0x4325,	// (0x0005fd41) aid_height_parent_landcape

0xabbc,	// (0x000665d8) wml_content_pane_cp

0xabc4,	// (0x000665e0) wml_tabs_pane

0xabcd,	// (0x000665e9) popup_wml_miniature_window

0xabd5,	// (0x000665f1) scroll_pane_cp021

0xabe9,	// (0x00066605) wml_content_pane_comp8

0xa529,	// (0x00065f45) bg_popup_sub_pane_cp05

0xc9bc,	// (0x000683d8) popup_wml_miniature_window_g1

0xc9c4,	// (0x000683e0) wml_miniature_view_pane

0x4b15,	// (0x00060531) aid_size_wml_view

0x4b1d,	// (0x00060539) wml_miniature_view_pane_g1

0x4b26,	// (0x00060542) wml_miniature_view_pane_g2

0x4b2f,	// (0x0006054b) wml_miniature_view_pane_g3

0x4b37,	// (0x00060553) wml_miniature_view_pane_g4

0x4b3f,	// (0x0006055b) wml_miniature_view_pane_g5

0x4b47,	// (0x00060563) wml_miniature_view_pane_g6

0x4b4f,	// (0x0006056b) wml_miniature_view_pane_g7

0x4b57,	// (0x00060573) wml_miniature_view_pane_g8

0x0007,

0xf537,	// (0x0006af53) wml_miniature_view_pane_g

0xc992,	// (0x000683ae) background_graphic_ParamLimits

0xc992,	// (0x000683ae) background_graphic

0xc9cc,	// (0x000683e8) wml_tabs_2_pane

0xc9d5,	// (0x000683f1) wml_tabs_3_pane_ParamLimits

0xc9d5,	// (0x000683f1) wml_tabs_3_pane

0xc9e7,	// (0x00068403) wml_tabs_4_pane_ParamLimits

0xc9e7,	// (0x00068403) wml_tabs_4_pane

0xc9fd,	// (0x00068419) wml_tabs_5_pane_ParamLimits

0xc9fd,	// (0x00068419) wml_tabs_5_pane

0xca17,	// (0x00068433) wml_tabs_pane_g2_ParamLimits

0xca17,	// (0x00068433) wml_tabs_pane_g2

0xca2b,	// (0x00068447) wml_tabs_pane_g3_ParamLimits

0xca2b,	// (0x00068447) wml_tabs_pane_g3

0x4b5f,	// (0x0006057b) wml_tabs_2_active_pane_ParamLimits

0x4b5f,	// (0x0006057b) wml_tabs_2_active_pane

0x4b6f,	// (0x0006058b) wml_tabs_2_passive_pane_ParamLimits

0x4b6f,	// (0x0006058b) wml_tabs_2_passive_pane

0x4b7f,	// (0x0006059b) wml_tabs_3_active_pane_cp_ParamLimits

0x4b7f,	// (0x0006059b) wml_tabs_3_active_pane_cp

0x4b90,	// (0x000605ac) wml_tabs_3_passive_pane_ParamLimits

0x4b90,	// (0x000605ac) wml_tabs_3_passive_pane

0x4ba1,	// (0x000605bd) wml_tabs_3_passive_pane_cp_ParamLimits

0x4ba1,	// (0x000605bd) wml_tabs_3_passive_pane_cp

0x4bb2,	// (0x000605ce) tabs_4_active_pane

0x4bba,	// (0x000605d6) tabs_4_passive_pane

0x4bc2,	// (0x000605de) tabs_4_passive_pane_cp

0x4bca,	// (0x000605e6) tabs_4_passive_pane_cp2

0x40ea,	// (0x0005fb06) aid_height_text

0x3887,	// (0x0005f2a3) mup_volume_cont_pane_ParamLimits

0x3887,	// (0x0005f2a3) mup_volume_cont_pane

0x1244,	// (0x0005cc60) aid_size_cell_pinb

0x124e,	// (0x0005cc6a) aid_size_list_pinb

0x4ac4,	// (0x000604e0) mup2_volume_cont_pane_ParamLimits

0x4ac4,	// (0x000604e0) mup2_volume_cont_pane

0x4bd2,	// (0x000605ee) mup2_volume_cont_pane_g1_ParamLimits

0x4bd2,	// (0x000605ee) mup2_volume_cont_pane_g1

0x0e66,	// (0x0005c882) aid_size_cell_touch_ParamLimits

0x0e66,	// (0x0005c882) aid_size_cell_touch

0x1127,	// (0x0005cb43) touch_pane_ParamLimits

0x1127,	// (0x0005cb43) touch_pane

0x111d,	// (0x0005cb39) main_rss2_pane

0xca48,	// (0x00068464) listscroll_rss2_pane

0xca51,	// (0x0006846d) rss2_navigation_pane

0xca59,	// (0x00068475) list_rss2_pane

0xb25f,	// (0x00066c7b) scroll_pane_cp22

0xca61,	// (0x0006847d) rss2_navigation_pane_g1

0xca6a,	// (0x00068486) rss2_navigation_pane_g2

0xca72,	// (0x0006848e) rss2_navigation_pane_g3

0x0002,

0x0517,	// (0x0005bf33) rss2_navigation_pane_g

0xca7a,	// (0x00068496) rss2_navigation_pane_t1

0x4c0b,	// (0x00060627) rss2_list_single_pane_ParamLimits

0x4c0b,	// (0x00060627) rss2_list_single_pane

0xca88,	// (0x000684a4) rss2_list_single_pane_t2

0xca96,	// (0x000684b2) rss2_list_single_pane_t3_ParamLimits

0xca96,	// (0x000684b2) rss2_list_single_pane_t3

0xcab3,	// (0x000684cf) rss2_list_single_pane_t4

0x30d1,	// (0x0005eaed) smil_status_pane_g1

0x433c,	// (0x0005fd58) main_image2_pane_ParamLimits

0x433c,	// (0x0005fd58) main_image2_pane

0x47d7,	// (0x000601f3) main_camera2_pane_g9_ParamLimits

0x47d7,	// (0x000601f3) main_camera2_pane_g9

0x482b,	// (0x00060247) main_camera2_pane_t5_ParamLimits

0x482b,	// (0x00060247) main_camera2_pane_t5

0x483d,	// (0x00060259) main_camera2_pane_t6_ParamLimits

0x483d,	// (0x00060259) main_camera2_pane_t6

0x4c3f,	// (0x0006065b) main_image2_pane_g1_ParamLimits

0x4c3f,	// (0x0006065b) main_image2_pane_g1

0x3e84,	// (0x0005f8a0) smil2_video_pane_ParamLimits

0x3e84,	// (0x0005f8a0) smil2_video_pane

0x0d6a,	// (0x0005c786) aid_zoom_text_primary_cp

0x10b8,	// (0x0005cad4) popup_preview_fixed_window

0xab25,	// (0x00066541) im_reading_pane_g1

0x4721,	// (0x0006013d) cams2_bc_adjust_pane_cp_ParamLimits

0x4721,	// (0x0006013d) cams2_bc_adjust_pane_cp

0x486d,	// (0x00060289) cams2_bc_adjust_pane_ParamLimits

0x486d,	// (0x00060289) cams2_bc_adjust_pane

0xdc10,	// (0x0006962c) cams2_bc_adjust_pane_g1

0x4c4b,	// (0x00060667) cams2_slider_pane

0x4c54,	// (0x00060670) cams2_slider_pane_g1

0x4c5d,	// (0x00060679) cams2_slider_pane_g2

0x0006,

0xf548,	// (0x0006af64) cams2_slider_pane_g

0x134e,	// (0x0005cd6a) calc_display_pane_ParamLimits

0x136c,	// (0x0005cd88) calc_paper_pane_ParamLimits

0x1388,	// (0x0005cda4) grid_calc_pane_ParamLimits

0x33c1,	// (0x0005eddd) popup_clock_digital_window_t1_ParamLimits

0xb71c,	// (0x00067138) main_image_pane_t1

0x1334,	// (0x0005cd50) aid_size_cell_calc_ParamLimits

0x1334,	// (0x0005cd50) aid_size_cell_calc

0x436d,	// (0x0005fd89) popup_blid_sat_info2_window_ParamLimits

0x436d,	// (0x0005fd89) popup_blid_sat_info2_window

0xcac9,	// (0x000684e5) aid_size_cell_blid

0xcad1,	// (0x000684ed) bg_popup_window_pane_cp07

0xcaf4,	// (0x00068510) grid_popup_blid_pane

0xcafe,	// (0x0006851a) heading_pane_cp05_ParamLimits

0xcafe,	// (0x0006851a) heading_pane_cp05

0xcbc8,	// (0x000685e4) cell_popup_blid_pane_ParamLimits

0xcbc8,	// (0x000685e4) cell_popup_blid_pane

0xcbec,	// (0x00068608) cell_popup_blid_pane_g1

0xcbf4,	// (0x00068610) cell_popup_blid_pane_t1

0x4a8a,	// (0x000604a6) mup2_indicator_pane_ParamLimits

0x4a8a,	// (0x000604a6) mup2_indicator_pane

0xaa2c,	// (0x00066448) mup2_visualizer_osc_pane

0xc9aa,	// (0x000683c6) mup2_visualizer_spec_pane_ParamLimits

0xc9aa,	// (0x000683c6) mup2_visualizer_spec_pane

0x4c77,	// (0x00060693) mup2_spec_half_pane

0x4c80,	// (0x0006069c) mup2_spec_half_pane_cp

0x4c8a,	// (0x000606a6) mup2_spec_bar_pane_ParamLimits

0x4c8a,	// (0x000606a6) mup2_spec_bar_pane

0xc93f,	// (0x0006835b) mup2_spec_bar_pane_g1

0xc949,	// (0x00068365) mup2_spec_bar_pane_g2

0x0001,

0x0491,	// (0x0005bead) mup2_spec_bar_pane_g

0x4ca9,	// (0x000606c5) mup2_osc_middle_pane

0xc95b,	// (0x00068377) mup2_visualizer_osc_pane_g1

0x9b93,	// (0x000655af) popup_number_entry_window_t1_ParamLimits

0x9ba6,	// (0x000655c2) popup_number_entry_window_t2_ParamLimits

0x9bb8,	// (0x000655d4) popup_number_entry_window_t3_ParamLimits

0x117e,	// (0x0005cb9a) popup_number_entry_window_t5_ParamLimits

0x117e,	// (0x0005cb9a) popup_number_entry_window_t5

0xf0ca,	// (0x0006aae6) popup_number_entry_window_t_ParamLimits

0x9bca,	// (0x000655e6) text_title_cp2_ParamLimits

0x3b85,	// (0x0005f5a1) aid_hotspot_pointer_text2_pane

0x3c13,	// (0x0005f62f) main_viewer_pane_g9_ParamLimits

0x3c13,	// (0x0005f62f) main_viewer_pane_g9

0xad8a,	// (0x000667a6) cale_month_pane_t1_ParamLimits

0xadc7,	// (0x000667e3) bg_cale_pane_ParamLimits

0xaddf,	// (0x000667fb) list_cale_pane_ParamLimits

0xadf0,	// (0x0006680c) listscroll_cale_day_pane_t1

0xae02,	// (0x0006681e) scroll_pane_cp09_ParamLimits

0x38c6,	// (0x0005f2e2) main_mup_eq_pane_t1_ParamLimits

0x38c6,	// (0x0005f2e2) main_mup_eq_pane_t1

0x38e0,	// (0x0005f2fc) main_mup_eq_pane_t2_ParamLimits

0x38e0,	// (0x0005f2fc) main_mup_eq_pane_t2

0x38f8,	// (0x0005f314) main_mup_eq_pane_t3_ParamLimits

0x38f8,	// (0x0005f314) main_mup_eq_pane_t3

0x3910,	// (0x0005f32c) main_mup_eq_pane_t4_ParamLimits

0x3910,	// (0x0005f32c) main_mup_eq_pane_t4

0x3928,	// (0x0005f344) main_mup_eq_pane_t5_ParamLimits

0x3928,	// (0x0005f344) main_mup_eq_pane_t5

0x3940,	// (0x0005f35c) main_mup_eq_pane_t6_ParamLimits

0x3940,	// (0x0005f35c) main_mup_eq_pane_t6

0x3954,	// (0x0005f370) main_mup_eq_pane_t7_ParamLimits

0x3954,	// (0x0005f370) main_mup_eq_pane_t7

0x3968,	// (0x0005f384) main_mup_eq_pane_t8_ParamLimits

0x3968,	// (0x0005f384) main_mup_eq_pane_t8

0x397e,	// (0x0005f39a) main_mup_eq_pane_t9_ParamLimits

0x397e,	// (0x0005f39a) main_mup_eq_pane_t9

0x3996,	// (0x0005f3b2) main_mup_eq_pane_t10_ParamLimits

0x3996,	// (0x0005f3b2) main_mup_eq_pane_t10

0x0009,

0xf3e5,	// (0x0006ae01) main_mup_eq_pane_t_ParamLimits

0xf3e5,	// (0x0006ae01) main_mup_eq_pane_t

0x3a53,	// (0x0005f46f) mup_equalizer_pane_cp5_ParamLimits

0x3a69,	// (0x0005f485) mup_equalizer_pane_cp6_ParamLimits

0x3a81,	// (0x0005f49d) mup_equalizer_pane_cp7_ParamLimits

0x111d,	// (0x0005cb39) main_gallery_pane

0xc964,	// (0x00068380) smil2_volume_pane

0xc96c,	// (0x00068388) smil_status_volume_pane_g1_ParamLimits

0xc97f,	// (0x0006839b) smil_status_volume_pane_g2_ParamLimits

0x4594,	// (0x0005ffb0) smil_status_volume_pane_g3_ParamLimits

0xf4c7,	// (0x0006aee3) smil_status_volume_pane_g_ParamLimits

0xcad1,	// (0x000684ed) bg_popup_window_pane_cp07_ParamLimits

0xcadf,	// (0x000684fb) blid_firmament_pane

0x4cb2,	// (0x000606ce) aid_size_cell_gallery_ParamLimits

0x4cb2,	// (0x000606ce) aid_size_cell_gallery

0x4cc0,	// (0x000606dc) grid_gallery_pane_ParamLimits

0x4cc0,	// (0x000606dc) grid_gallery_pane

0x4cd0,	// (0x000606ec) cell_gallery_pane_ParamLimits

0x4cd0,	// (0x000606ec) cell_gallery_pane

0xcc02,	// (0x0006861e) bg_cell_gallery_focus_pane_ParamLimits

0xcc02,	// (0x0006861e) bg_cell_gallery_focus_pane

0xcc14,	// (0x00068630) cell_gallery_pane_g1_ParamLimits

0xcc14,	// (0x00068630) cell_gallery_pane_g1

0x4d1e,	// (0x0006073a) cell_gallery_pane_g2_ParamLimits

0x4d1e,	// (0x0006073a) cell_gallery_pane_g2

0x4d2b,	// (0x00060747) cell_gallery_pane_g3_ParamLimits

0x4d2b,	// (0x00060747) cell_gallery_pane_g3

0xcc20,	// (0x0006863c) cell_gallery_pane_g4_ParamLimits

0xcc20,	// (0x0006863c) cell_gallery_pane_g4

0x0003,

0xf557,	// (0x0006af73) cell_gallery_pane_g_ParamLimits

0xf557,	// (0x0006af73) cell_gallery_pane_g

0xcc2c,	// (0x00068648) bg_cell_gallery_focus_pane_g1

0xcc34,	// (0x00068650) bg_cell_gallery_focus_pane_g2

0xcc3c,	// (0x00068658) bg_cell_gallery_focus_pane_g3

0xcc44,	// (0x00068660) bg_cell_gallery_focus_pane_g4

0xcc4c,	// (0x00068668) bg_cell_gallery_focus_pane_g5

0xcc54,	// (0x00068670) bg_cell_gallery_focus_pane_g6

0xcc5c,	// (0x00068678) bg_cell_gallery_focus_pane_g7

0xcc64,	// (0x00068680) bg_cell_gallery_focus_pane_g8

0x0007,

0x054d,	// (0x0005bf69) bg_cell_gallery_focus_pane_g

0xcc6c,	// (0x00068688) aid_firma_cardinal

0xcc80,	// (0x0006869c) blid_firmament_pane_t1

0xcc97,	// (0x000686b3) blid_firmament_pane_t2

0xccae,	// (0x000686ca) blid_firmament_pane_t3

0xccc5,	// (0x000686e1) blid_firmament_pane_t4

0x0003,

0x055e,	// (0x0005bf7a) blid_firmament_pane_t

0xccdc,	// (0x000686f8) blid_sat_info_pane

0xccec,	// (0x00068708) blid_sat_info_pane_g1

0xccec,	// (0x00068708) blid_sat_info_pane_g2

0x0001,

0x0567,	// (0x0005bf83) blid_sat_info_pane_g

0xccf6,	// (0x00068712) blid_sat_info_pane_t1

0xcd04,	// (0x00068720) smil2_volume_content_pane

0xcd0d,	// (0x00068729) smil2_volume_pane_g1

0xcd15,	// (0x00068731) smil2_volume_content_pane_g1

0xcd1e,	// (0x0006873a) smil2_volume_content_pane_g2

0xcd27,	// (0x00068743) smil2_volume_content_pane_g3

0xcd30,	// (0x0006874c) smil2_volume_content_pane_g4

0xcd39,	// (0x00068755) smil2_volume_content_pane_g5

0xcd42,	// (0x0006875e) smil2_volume_content_pane_g6

0xcd4b,	// (0x00068767) smil2_volume_content_pane_g7

0xcd54,	// (0x00068770) smil2_volume_content_pane_g8

0xcd5d,	// (0x00068779) smil2_volume_content_pane_g9

0xcd66,	// (0x00068782) smil2_volume_content_pane_g10

0x0009,

0x056c,	// (0x0005bf88) smil2_volume_content_pane_g

0x1972,	// (0x0005d38e) cale_week_day_heading_pane_t1_ParamLimits

0x198d,	// (0x0005d3a9) cale_week_day_heading_pane_t2_ParamLimits

0x19a8,	// (0x0005d3c4) cale_week_day_heading_pane_t3_ParamLimits

0x19c3,	// (0x0005d3df) cale_week_day_heading_pane_t4_ParamLimits

0x19de,	// (0x0005d3fa) cale_week_day_heading_pane_t5_ParamLimits

0x19f9,	// (0x0005d415) cale_week_day_heading_pane_t6_ParamLimits

0x1a14,	// (0x0005d430) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0006abed) cale_week_day_heading_pane_t_ParamLimits

0xa9d1,	// (0x000663ed) bg_cale_side_pane_ParamLimits

0x1a2f,	// (0x0005d44b) cale_week_time_pane_t1_ParamLimits

0x1a49,	// (0x0005d465) cale_week_time_pane_t2_ParamLimits

0x1a63,	// (0x0005d47f) cale_week_time_pane_t3_ParamLimits

0x1a7d,	// (0x0005d499) cale_week_time_pane_t4_ParamLimits

0x1a97,	// (0x0005d4b3) cale_week_time_pane_t5_ParamLimits

0x1ab1,	// (0x0005d4cd) cale_week_time_pane_t6_ParamLimits

0x1ad1,	// (0x0005d4ed) cale_week_time_pane_t7_ParamLimits

0x1af3,	// (0x0005d50f) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0006abfc) cale_week_time_pane_t_ParamLimits

0x1b17,	// (0x0005d533) cell_cale_week_pane_g2_ParamLimits

0xa9d1,	// (0x000663ed) bg_cale_side_pane_cp01_ParamLimits

0x2e96,	// (0x0005e8b2) cale_month_week_pane_t1_ParamLimits

0x2eaf,	// (0x0005e8cb) cale_month_week_pane_t2_ParamLimits

0x2ec8,	// (0x0005e8e4) cale_month_week_pane_t3_ParamLimits

0x2ee1,	// (0x0005e8fd) cale_month_week_pane_t4_ParamLimits

0x2efc,	// (0x0005e918) cale_month_week_pane_t5_ParamLimits

0x2f1d,	// (0x0005e939) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0006acd1) cale_month_week_pane_t_ParamLimits

0x308e,	// (0x0005eaaa) cell_cale_month_pane_g1_ParamLimits

0x111d,	// (0x0005cb39) main_cale_event_viewer_pane

0x9b69,	// (0x00065585) listscroll_cale_event_viewer_pane

0xcd6f,	// (0x0006878b) list_cale_ev_pane

0xcd77,	// (0x00068793) scroll_pane_cp023

0xcd83,	// (0x0006879f) field_cale_ev_pane_ParamLimits

0xcd83,	// (0x0006879f) field_cale_ev_pane

0xcda1,	// (0x000687bd) field_cale_ev_content_pane_ParamLimits

0xcda1,	// (0x000687bd) field_cale_ev_content_pane

0xcdad,	// (0x000687c9) field_cale_ev_pane_g1_ParamLimits

0xcdad,	// (0x000687c9) field_cale_ev_pane_g1

0xcdb9,	// (0x000687d5) field_cale_ev_pane_g2_ParamLimits

0xcdb9,	// (0x000687d5) field_cale_ev_pane_g2

0xcdd1,	// (0x000687ed) field_cale_ev_pane_g3_ParamLimits

0xcdd1,	// (0x000687ed) field_cale_ev_pane_g3

0x0002,

0x0581,	// (0x0005bf9d) field_cale_ev_pane_g_ParamLimits

0x0581,	// (0x0005bf9d) field_cale_ev_pane_g

0xcde9,	// (0x00068805) field_cale_ev_pane_t1_ParamLimits

0xcde9,	// (0x00068805) field_cale_ev_pane_t1

0xad6c,	// (0x00066788) field_cale_ev_content_pane_t1_ParamLimits

0xad6c,	// (0x00066788) field_cale_ev_content_pane_t1

0xb602,	// (0x0006701e) bg_button_pane_cp01

0x16fd,	// (0x0005d119) listscroll_cale_week_pane_ParamLimits

0xa97c,	// (0x00066398) popup_toolbar_window_cp01

0xa9a2,	// (0x000663be) listscroll_cale_week_pane_t1_ParamLimits

0x16fd,	// (0x0005d119) listscroll_cale_day_pane_ParamLimits

0xa97c,	// (0x00066398) popup_toolbar_window_cp02

0xadf0,	// (0x0006680c) listscroll_cale_day_pane_t1_ParamLimits

0x16fd,	// (0x0005d119) main_cale_month_pane_ParamLimits

0x4470,	// (0x0005fe8c) popup_toolbar_window_cp03_ParamLimits

0x4470,	// (0x0005fe8c) popup_toolbar_window_cp03

0x3d9a,	// (0x0005f7b6) main_image_pane_g2_ParamLimits

0x3d9a,	// (0x0005f7b6) main_image_pane_g2

0x3da6,	// (0x0005f7c2) main_image_pane_g3_ParamLimits

0x3da6,	// (0x0005f7c2) main_image_pane_g3

0x0002,

0xf46d,	// (0x0006ae89) main_image_pane_g_ParamLimits

0xf46d,	// (0x0006ae89) main_image_pane_g

0xb71c,	// (0x00067138) main_image_pane_t1_ParamLimits

0x3db2,	// (0x0005f7ce) main_image_pane_t2_ParamLimits

0x3db2,	// (0x0005f7ce) main_image_pane_t2

0x3dc4,	// (0x0005f7e0) main_image_pane_t3_ParamLimits

0x3dc4,	// (0x0005f7e0) main_image_pane_t3

0x3dd6,	// (0x0005f7f2) main_image_pane_t4_ParamLimits

0x3dd6,	// (0x0005f7f2) main_image_pane_t4

0x0003,

0xf474,	// (0x0006ae90) main_image_pane_t_ParamLimits

0xf474,	// (0x0006ae90) main_image_pane_t

0x3de8,	// (0x0005f804) popup_image_details_window_cp01

0x3df2,	// (0x0005f80e) popup_toobar_trans_pane_cp01_ParamLimits

0x3df2,	// (0x0005f80e) popup_toobar_trans_pane_cp01

0x43c0,	// (0x0005fddc) popup_image_details_window_ParamLimits

0x43c0,	// (0x0005fddc) popup_image_details_window

0x43ce,	// (0x0005fdea) popup_image_focus_window

0x4713,	// (0x0006012f) camera2_autofocus_pane_ParamLimits

0x4713,	// (0x0006012f) camera2_autofocus_pane

0x9b69,	// (0x00065585) bg_popup_sub_pane_cp06

0xce00,	// (0x0006881c) popup_image_focus_window_g1

0xce08,	// (0x00068824) popup_image_focus_window_g2

0xce10,	// (0x0006882c) popup_image_focus_window_g3

0xce18,	// (0x00068834) popup_image_focus_window_g4

0x0003,

0x0588,	// (0x0005bfa4) popup_image_focus_window_g

0xce20,	// (0x0006883c) popup_image_focus_window_t1

0xce2e,	// (0x0006884a) popup_image_focus_window_t2

0xce3e,	// (0x0006885a) popup_image_focus_window_t3

0x0002,

0x0591,	// (0x0005bfad) popup_image_focus_window_t

0xce4c,	// (0x00068868) camera2_autofocus_pane_g1

0xad5e,	// (0x0006677a) bg_tb_trans_pane_cp01

0xce5a,	// (0x00068876) popup_image_details_window_g1

0xce6d,	// (0x00068889) popup_image_details_window_g2

0x0002,

0x05a3,	// (0x0005bfbf) popup_image_details_window_g

0xce96,	// (0x000688b2) popup_image_details_window_t1

0xcea8,	// (0x000688c4) popup_image_details_window_t2

0xcec1,	// (0x000688dd) popup_image_details_window_t3

0xced5,	// (0x000688f1) popup_image_details_window_t4

0xcef0,	// (0x0006890c) popup_image_details_window_t5

0x0004,

0xf56b,	// (0x0006af87) popup_image_details_window_t

0xa841,	// (0x0006625d) bg_calc_paper_pane_ParamLimits

0x111d,	// (0x0005cb39) grid_highlight_pane_cp013

0x1485,	// (0x0005cea1) list_calc_pane_ParamLimits

0x1497,	// (0x0005ceb3) scroll_pane_cp024

0xa855,	// (0x00066271) bg_calc_display_pane_ParamLimits

0x149f,	// (0x0005cebb) calc_display_pane_t1_ParamLimits

0x14b4,	// (0x0005ced0) calc_display_pane_t2_ParamLimits

0x14c9,	// (0x0005cee5) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0006ab6d) calc_display_pane_t_ParamLimits

0x15a6,	// (0x0005cfc2) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0006ab8a) cell_calc_pane_g

0x15af,	// (0x0005cfcb) cell_calc_pane_t1

0xa8b4,	// (0x000662d0) grid_highlight_pane_cp02_ParamLimits

0xa8ca,	// (0x000662e6) toolbar_button_pane_cp01_ParamLimits

0xa8ca,	// (0x000662e6) toolbar_button_pane_cp01

0xb761,	// (0x0006717d) temp_image_control_pane_ParamLimits

0xb761,	// (0x0006717d) temp_image_control_pane

0x433c,	// (0x0005fd58) main_mp3_pane

0xcf0a,	// (0x00068926) temp_image_control_pane_g1_ParamLimits

0xcf0a,	// (0x00068926) temp_image_control_pane_g1

0xcf18,	// (0x00068934) temp_image_control_pane_g2_ParamLimits

0xcf18,	// (0x00068934) temp_image_control_pane_g2

0xcf2a,	// (0x00068946) temp_image_control_pane_g3_ParamLimits

0xcf2a,	// (0x00068946) temp_image_control_pane_g3

0x4d68,	// (0x00060784) temp_image_control_pane_g4_ParamLimits

0x4d68,	// (0x00060784) temp_image_control_pane_g4

0x0003,

0xf576,	// (0x0006af92) temp_image_control_pane_g_ParamLimits

0xf576,	// (0x0006af92) temp_image_control_pane_g

0xcf0a,	// (0x00068926) main_mp3_pane_g1

0x4d79,	// (0x00060795) main_mp3_pane_g2

0x0007,

0xf57f,	// (0x0006af9b) main_mp3_pane_g

0xcf6d,	// (0x00068989) main_mp3_pane_t1

0xaa34,	// (0x00066450) main_camera_pane_g8_ParamLimits

0xaa34,	// (0x00066450) main_camera_pane_g8

0x1da1,	// (0x0005d7bd) main_video_pane_g7_ParamLimits

0x1da1,	// (0x0005d7bd) main_video_pane_g7

0x485b,	// (0x00060277) main_camera2_pane_t7_ParamLimits

0x485b,	// (0x00060277) main_camera2_pane_t7

0xab7c,	// (0x00066598) scroll_pane_cp025_ParamLimits

0xab7c,	// (0x00066598) scroll_pane_cp025

0xab90,	// (0x000665ac) scroll_pane_cp026_ParamLimits

0xab90,	// (0x000665ac) scroll_pane_cp026

0xab9f,	// (0x000665bb) wml_content_pane_ParamLimits

0x111d,	// (0x0005cb39) main_touch_calib_pane

0x4e1d,	// (0x00060839) main_touch_calib_pane_g1

0x4e29,	// (0x00060845) main_touch_calib_pane_g2

0x4e35,	// (0x00060851) main_touch_calib_pane_g3

0x4e41,	// (0x0006085d) main_touch_calib_pane_g4

0x0003,

0xf59d,	// (0x0006afb9) main_touch_calib_pane_g

0x4e4d,	// (0x00060869) main_touch_calib_pane_t1

0x4e66,	// (0x00060882) main_touch_calib_pane_t2

0x0004,

0xf5a6,	// (0x0006afc2) main_touch_calib_pane_t

0xb32e,	// (0x00066d4a) mup_progress_pane_cp02

0xb363,	// (0x00066d7f) navi_pane_g1

0xb41e,	// (0x00066e3a) navi_pane_mp_t3

0x433c,	// (0x0005fd58) main_mp3_pane_ParamLimits

0x44ad,	// (0x0005fec9) navi_pane_ParamLimits

0xcf0a,	// (0x00068926) main_mp3_pane_g1_ParamLimits

0x4d79,	// (0x00060795) main_mp3_pane_g2_ParamLimits

0x4d85,	// (0x000607a1) main_mp3_pane_g3_ParamLimits

0x4d85,	// (0x000607a1) main_mp3_pane_g3

0x4d91,	// (0x000607ad) main_mp3_pane_g4_ParamLimits

0x4d91,	// (0x000607ad) main_mp3_pane_g4

0xcf3a,	// (0x00068956) main_mp3_pane_g5_ParamLimits

0xcf3a,	// (0x00068956) main_mp3_pane_g5

0xcf48,	// (0x00068964) main_mp3_pane_g6_ParamLimits

0xcf48,	// (0x00068964) main_mp3_pane_g6

0xcf55,	// (0x00068971) main_mp3_pane_g7_ParamLimits

0xcf55,	// (0x00068971) main_mp3_pane_g7

0xcf61,	// (0x0006897d) main_mp3_pane_g8_ParamLimits

0xcf61,	// (0x0006897d) main_mp3_pane_g8

0xf57f,	// (0x0006af9b) main_mp3_pane_g_ParamLimits

0x4d9d,	// (0x000607b9) main_mp3_pane_t2

0x4dad,	// (0x000607c9) main_mp3_pane_t3

0xcf87,	// (0x000689a3) main_mp3_pane_t4

0xcf95,	// (0x000689b1) main_mp3_pane_t5

0x0005,

0xf590,	// (0x0006afac) main_mp3_pane_t

0xcfa3,	// (0x000689bf) mup_progress_pane_cp01

0x0d6a,	// (0x0005c786) aid_zoom_text_secondary2

0xcd6f,	// (0x0006878b) list_cale_ev2_pane

0xcd77,	// (0x00068793) scroll_pane_cp023_ParamLimits

0x4ec1,	// (0x000608dd) field_cale_ev2_pane_ParamLimits

0x4ec1,	// (0x000608dd) field_cale_ev2_pane

0x9d33,	// (0x0006574f) field_cale_ev2_pane_g1_ParamLimits

0x9d33,	// (0x0006574f) field_cale_ev2_pane_g1

0x9d3f,	// (0x0006575b) field_cale_ev2_pane_g2_ParamLimits

0x9d3f,	// (0x0006575b) field_cale_ev2_pane_g2

0x9d57,	// (0x00065773) field_cale_ev2_pane_g3_ParamLimits

0x9d57,	// (0x00065773) field_cale_ev2_pane_g3

0x0003,

0xf5b1,	// (0x0006afcd) field_cale_ev2_pane_g_ParamLimits

0xf5b1,	// (0x0006afcd) field_cale_ev2_pane_g

0x9d7b,	// (0x00065797) field_cale_ev2_pane_t1_ParamLimits

0x9d7b,	// (0x00065797) field_cale_ev2_pane_t1

0x9d92,	// (0x000657ae) field_cale_ev2_pane_t2_ParamLimits

0x9d92,	// (0x000657ae) field_cale_ev2_pane_t2

0x0001,

0xf5ba,	// (0x0006afd6) field_cale_ev2_pane_t_ParamLimits

0xf5ba,	// (0x0006afd6) field_cale_ev2_pane_t

0x3c7b,	// (0x0005f697) main_postcard_pane_g5_ParamLimits

0x3c7b,	// (0x0005f697) main_postcard_pane_g5

0x3c89,	// (0x0005f6a5) main_postcard_pane_g6_ParamLimits

0x3c89,	// (0x0005f6a5) main_postcard_pane_g6

0x1beb,	// (0x0005d607) camera2_autofocus_pane_cp_ParamLimits

0x1beb,	// (0x0005d607) camera2_autofocus_pane_cp

0x433c,	// (0x0005fd58) main_mup3_pane

0x4f2a,	// (0x00060946) main_mup3_pane_g1_ParamLimits

0x4f2a,	// (0x00060946) main_mup3_pane_g1

0x4f4b,	// (0x00060967) main_mup3_pane_g2_ParamLimits

0x4f4b,	// (0x00060967) main_mup3_pane_g2

0x4fc5,	// (0x000609e1) main_mup3_pane_g3_ParamLimits

0x4fc5,	// (0x000609e1) main_mup3_pane_g3

0x5008,	// (0x00060a24) main_mup3_pane_g4_ParamLimits

0x5008,	// (0x00060a24) main_mup3_pane_g4

0x504b,	// (0x00060a67) main_mup3_pane_g5_ParamLimits

0x504b,	// (0x00060a67) main_mup3_pane_g5

0x508e,	// (0x00060aaa) main_mup3_pane_g6_ParamLimits

0x508e,	// (0x00060aaa) main_mup3_pane_g6

0xcfab,	// (0x000689c7) main_mup3_pane_g7_ParamLimits

0xcfab,	// (0x000689c7) main_mup3_pane_g7

0x0007,

0xf5ca,	// (0x0006afe6) main_mup3_pane_g_ParamLimits

0xf5ca,	// (0x0006afe6) main_mup3_pane_g

0x5104,	// (0x00060b20) main_mup3_pane_t1_ParamLimits

0x5104,	// (0x00060b20) main_mup3_pane_t1

0x5173,	// (0x00060b8f) main_mup3_pane_t2_ParamLimits

0x5173,	// (0x00060b8f) main_mup3_pane_t2

0x523c,	// (0x00060c58) main_mup3_pane_t4_ParamLimits

0x523c,	// (0x00060c58) main_mup3_pane_t4

0x528a,	// (0x00060ca6) main_mup3_pane_t5_ParamLimits

0x528a,	// (0x00060ca6) main_mup3_pane_t5

0x533a,	// (0x00060d56) main_mup3_pane_t6_ParamLimits

0x533a,	// (0x00060d56) main_mup3_pane_t6

0x0005,

0xf5db,	// (0x0006aff7) main_mup3_pane_t_ParamLimits

0xf5db,	// (0x0006aff7) main_mup3_pane_t

0x53e6,	// (0x00060e02) mup3_progress_pane_ParamLimits

0x53e6,	// (0x00060e02) mup3_progress_pane

0x545a,	// (0x00060e76) popup_mup3_control_window_ParamLimits

0x545a,	// (0x00060e76) popup_mup3_control_window

0xcfb9,	// (0x000689d5) popup_mup3_text_window

0x5473,	// (0x00060e8f) mup3_progress_pane_t1

0x5492,	// (0x00060eae) mup3_progress_pane_t2

0xcfc1,	// (0x000689dd) mup3_progress_pane_t3

0x0002,

0xf5e8,	// (0x0006b004) mup3_progress_pane_t

0xcfde,	// (0x000689fa) mup_progress_pane_cp03

0x9b69,	// (0x00065585) bg_tb_trans_pane_cp04

0x54b1,	// (0x00060ecd) mup3_volume_pane

0x54b9,	// (0x00060ed5) popup_mup3_control_window_g1

0x54c2,	// (0x00060ede) mup3_volume_pane_g1

0x54cb,	// (0x00060ee7) mup3_volume_pane_g2

0x54d4,	// (0x00060ef0) mup3_volume_pane_g3

0x0002,

0xf5ef,	// (0x0006b00b) mup3_volume_pane_g

0x9b69,	// (0x00065585) bg_tb_trans_pane_cp03

0xcfee,	// (0x00068a0a) popup_mup3_text_window_g1

0xcff6,	// (0x00068a12) popup_mup3_text_window_t1

0xa89d,	// (0x000662b9) list_calc_item_pane_g1_ParamLimits

0xca3f,	// (0x0006845b) mup_volume_pane_cp_g1

0x4e7f,	// (0x0006089b) main_touch_calib_pane_t3

0x4e95,	// (0x000608b1) main_touch_calib_pane_t4

0x4eab,	// (0x000608c7) main_touch_calib_pane_t5

0x0e52,	// (0x0005c86e) aid_cell_size_toolbar2

0x0e5a,	// (0x0005c876) aid_popup3_width_pane

0x0d62,	// (0x0005c77e) aid_zoom_text_msg_primary

0x1bc0,	// (0x0005d5dc) vorec_t7

0xa861,	// (0x0006627d) bg_calc_paper_pane_g1_ParamLimits

0xa86d,	// (0x00066289) bg_calc_paper_pane_g2_ParamLimits

0xa879,	// (0x00066295) bg_calc_paper_pane_g3_ParamLimits

0xa885,	// (0x000662a1) bg_calc_paper_pane_g4_ParamLimits

0xa891,	// (0x000662ad) bg_calc_paper_pane_g5_ParamLimits

0x1508,	// (0x0005cf24) bg_calc_paper_pane_g6_ParamLimits

0x1519,	// (0x0005cf35) bg_calc_paper_pane_g7_ParamLimits

0x152a,	// (0x0005cf46) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0006ab74) bg_calc_paper_pane_g_ParamLimits

0x153b,	// (0x0005cf57) calc_bg_paper_pane_g9_ParamLimits

0x1cd2,	// (0x0005d6ee) image_qvga_pane_ParamLimits

0x1cd2,	// (0x0005d6ee) image_qvga_pane

0xa784,	// (0x000661a0) bg_popup_sub_pane_cp04_ParamLimits

0xb698,	// (0x000670b4) popup_mup_playback_window_g1_ParamLimits

0xb6a4,	// (0x000670c0) popup_mup_playback_window_t1_ParamLimits

0xb6b9,	// (0x000670d5) popup_mup_playback_window_t2_ParamLimits

0x035a,	// (0x0005bd76) popup_mup_playback_window_t_ParamLimits

0x498a,	// (0x000603a6) main_mup2_pane_g3_ParamLimits

0x498a,	// (0x000603a6) main_mup2_pane_g3

0x209e,	// (0x0005daba) popup_toolbar_window_cp04

0xbaae,	// (0x000674ca) popup_call2_audio_second_window_g3_ParamLimits

0xbaae,	// (0x000674ca) popup_call2_audio_second_window_g3

0xbeb8,	// (0x000678d4) popup_call2_audio_first_window_g4_ParamLimits

0xbeb8,	// (0x000678d4) popup_call2_audio_first_window_g4

0xc537,	// (0x00067f53) popup_call2_audio_in_window_g4_ParamLimits

0xc537,	// (0x00067f53) popup_call2_audio_in_window_g4

0x3d8d,	// (0x0005f7a9) aid_area_sk_bg_cut_ParamLimits

0x3d8d,	// (0x0005f7a9) aid_area_sk_bg_cut

0xb6ce,	// (0x000670ea) aid_area_sk_bg_cut_2_ParamLimits

0xb6ce,	// (0x000670ea) aid_area_sk_bg_cut_2

0x4d0e,	// (0x0006072a) aid_placing_details_win

0x4d16,	// (0x00060732) aid_placing_details_win_2

0xce4c,	// (0x00068868) camera2_autofocus_pane_g1_ParamLimits

0x10a9,	// (0x0005cac5) popup_fixed_preview_cale_window_ParamLimits

0x10a9,	// (0x0005cac5) popup_fixed_preview_cale_window

0xb49c,	// (0x00066eb8) navi_slider_pane_g3

0xb4a5,	// (0x00066ec1) navi_slider_pane_g4

0xb4ae,	// (0x00066eca) navi_slider_pane_g5

0xb49c,	// (0x00066eb8) navi_slider_pane_g6

0x366a,	// (0x0005f086) navi_slider_pane_g7

0xb5cf,	// (0x00066feb) mup_scale_pane_g3

0xb5d8,	// (0x00066ff4) mup_scale_pane_g4

0xb5e1,	// (0x00066ffd) mup_scale_pane_g5

0x3a99,	// (0x0005f4b5) mup_scale_pane_g6

0x3aa2,	// (0x0005f4be) mup_scale_pane_g7

0xb49c,	// (0x00066eb8) cams2_slider_pane_g3

0xcac1,	// (0x000684dd) cams2_slider_pane_g4

0x4c66,	// (0x00060682) cams2_slider_pane_g5

0xb49c,	// (0x00066eb8) cams2_slider_pane_g6

0x4c6e,	// (0x0006068a) cams2_slider_pane_g7

0xccec,	// (0x00068708) camera2_autofocus_pane_cp_g1

0xc8d8,	// (0x000682f4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc8d8,	// (0x000682f4) bg_popup_preview_window_pane_cp02

0xd004,	// (0x00068a20) list_fp_cale_pane_ParamLimits

0xd004,	// (0x00068a20) list_fp_cale_pane

0xd010,	// (0x00068a2c) popup_fixed_preview_cale_window_t1_ParamLimits

0xd010,	// (0x00068a2c) popup_fixed_preview_cale_window_t1

0x54dd,	// (0x00060ef9) popup_fixed_preview_cale_window_t2_ParamLimits

0x54dd,	// (0x00060ef9) popup_fixed_preview_cale_window_t2

0x54f2,	// (0x00060f0e) popup_fixed_preview_cale_window_t3_ParamLimits

0x54f2,	// (0x00060f0e) popup_fixed_preview_cale_window_t3

0x0002,

0xf5f6,	// (0x0006b012) popup_fixed_preview_cale_window_t_ParamLimits

0xf5f6,	// (0x0006b012) popup_fixed_preview_cale_window_t

0x5507,	// (0x00060f23) list_single_fp_cale_pane_ParamLimits

0x5507,	// (0x00060f23) list_single_fp_cale_pane

0xd02e,	// (0x00068a4a) list_single_fp_cale_pane_g1_ParamLimits

0xd02e,	// (0x00068a4a) list_single_fp_cale_pane_g1

0xd03a,	// (0x00068a56) list_single_fp_cale_pane_g2_ParamLimits

0xd03a,	// (0x00068a56) list_single_fp_cale_pane_g2

0x0002,

0x063c,	// (0x0005c058) list_single_fp_cale_pane_g_ParamLimits

0x063c,	// (0x0005c058) list_single_fp_cale_pane_g

0xd053,	// (0x00068a6f) list_single_fp_cale_pane_t1_ParamLimits

0xd053,	// (0x00068a6f) list_single_fp_cale_pane_t1

0xd065,	// (0x00068a81) list_single_fp_cale_pane_t2_ParamLimits

0xd065,	// (0x00068a81) list_single_fp_cale_pane_t2

0x0001,

0x0643,	// (0x0005c05f) list_single_fp_cale_pane_t_ParamLimits

0x0643,	// (0x0005c05f) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x111d,	// (0x0005cb39) main_dialer_pane

0x551a,	// (0x00060f36) aid_cell_size_keypad

0x5524,	// (0x00060f40) dialer_ne_pane

0x552e,	// (0x00060f4a) grid_dialer_command_1_pane

0x5536,	// (0x00060f52) grid_dialer_command_2_pane

0x553e,	// (0x00060f5a) grid_dialer_keypad_pane

0x5552,	// (0x00060f6e) bg_popup_call_pane_cp06_ParamLimits

0x5552,	// (0x00060f6e) bg_popup_call_pane_cp06

0x555e,	// (0x00060f7a) dialer_ne_clear_pane_ParamLimits

0x555e,	// (0x00060f7a) dialer_ne_clear_pane

0xd098,	// (0x00068ab4) dialer_ne_pane_g1

0xd0a0,	// (0x00068abc) dialer_ne_pane_t1_ParamLimits

0xd0a0,	// (0x00068abc) dialer_ne_pane_t1

0x556a,	// (0x00060f86) dialer_ne_pane_t2_ParamLimits

0x556a,	// (0x00060f86) dialer_ne_pane_t2

0x5587,	// (0x00060fa3) dialer_ne_pane_t3_ParamLimits

0x5587,	// (0x00060fa3) dialer_ne_pane_t3

0x0002,

0xf5fd,	// (0x0006b019) dialer_ne_pane_t_ParamLimits

0xf5fd,	// (0x0006b019) dialer_ne_pane_t

0x55ab,	// (0x00060fc7) dialer_ne_pane_t3_copy1_ParamLimits

0x55ab,	// (0x00060fc7) dialer_ne_pane_t3_copy1

0x55cf,	// (0x00060feb) cell_dialer_keypad_pane_ParamLimits

0x55cf,	// (0x00060feb) cell_dialer_keypad_pane

0x55e6,	// (0x00061002) cell_dialer_command_1_pane_ParamLimits

0x55e6,	// (0x00061002) cell_dialer_command_1_pane

0x55fc,	// (0x00061018) cell_dialer_command_2_pane_ParamLimits

0x55fc,	// (0x00061018) cell_dialer_command_2_pane

0xd0b2,	// (0x00068ace) bg_button_pane_cp02_ParamLimits

0xd0b2,	// (0x00068ace) bg_button_pane_cp02

0x560b,	// (0x00061027) cell_dialer_keypad_pane_g1_ParamLimits

0x560b,	// (0x00061027) cell_dialer_keypad_pane_g1

0xd0b2,	// (0x00068ace) bg_button_pane_cp03_ParamLimits

0xd0b2,	// (0x00068ace) bg_button_pane_cp03

0x5620,	// (0x0006103c) cell_dialer_command_1_pane_g1_ParamLimits

0x5620,	// (0x0006103c) cell_dialer_command_1_pane_g1

0xd0be,	// (0x00068ada) bg_button_pane_cp04

0x5634,	// (0x00061050) cell_dialer_command_2_pane_g1

0xaa2c,	// (0x00066448) bg_button_pane_cp06

0xd0c6,	// (0x00068ae2) dialer_ne_clear_pane_g1

0xb36f,	// (0x00066d8b) navi_pane_g2

0xb39d,	// (0x00066db9) navi_pane_g3

0x0002,

0x025d,	// (0x0005bc79) navi_pane_g

0xb42c,	// (0x00066e48) navi_pane_mv_g2

0xb453,	// (0x00066e6f) navi_pane_mv_g5

0x3635,	// (0x0005f051) navi_pane_mv_t1

0xa855,	// (0x00066271) main_clock2_pane

0x5674,	// (0x00061090) main_clock2_list_pane_ParamLimits

0x5674,	// (0x00061090) main_clock2_list_pane

0x569e,	// (0x000610ba) main_clock2_pane_t1_ParamLimits

0x569e,	// (0x000610ba) main_clock2_pane_t1

0x56c2,	// (0x000610de) main_clock2_pane_t2_ParamLimits

0x56c2,	// (0x000610de) main_clock2_pane_t2

0x0004,

0xf604,	// (0x0006b020) main_clock2_pane_t_ParamLimits

0xf604,	// (0x0006b020) main_clock2_pane_t

0x571d,	// (0x00061139) popup_clock_analogue_window_cp03_ParamLimits

0x571d,	// (0x00061139) popup_clock_analogue_window_cp03

0x573b,	// (0x00061157) popup_clock_digital_window_cp02_ParamLimits

0x573b,	// (0x00061157) popup_clock_digital_window_cp02

0x57a8,	// (0x000611c4) main_clock2_list_single_pane_ParamLimits

0x57a8,	// (0x000611c4) main_clock2_list_single_pane

0xaa2c,	// (0x00066448) list_highlight_pane_cp05

0xd100,	// (0x00068b1c) main_clock2_list_single_pane_t1

0x209e,	// (0x0005daba) popup_toolbar_window_cp04_ParamLimits

0x4d38,	// (0x00060754) camera2_autofocus_pane_g2_ParamLimits

0x4d38,	// (0x00060754) camera2_autofocus_pane_g2

0x4d44,	// (0x00060760) camera2_autofocus_pane_g3_ParamLimits

0x4d44,	// (0x00060760) camera2_autofocus_pane_g3

0x4d50,	// (0x0006076c) camera2_autofocus_pane_g4_ParamLimits

0x4d50,	// (0x0006076c) camera2_autofocus_pane_g4

0x4d5c,	// (0x00060778) camera2_autofocus_pane_g5_ParamLimits

0x4d5c,	// (0x00060778) camera2_autofocus_pane_g5

0x0004,

0xf560,	// (0x0006af7c) camera2_autofocus_pane_g_ParamLimits

0xf560,	// (0x0006af7c) camera2_autofocus_pane_g

0x4eeb,	// (0x00060907) camera2_autofocus_pane_cp_g2

0x4ef3,	// (0x0006090f) camera2_autofocus_pane_cp_g3

0x4efb,	// (0x00060917) camera2_autofocus_pane_cp_g4

0x4f03,	// (0x0006091f) camera2_autofocus_pane_cp_g5

0x0004,

0xf5bf,	// (0x0006afdb) camera2_autofocus_pane_cp_g

0x554a,	// (0x00060f66) popup_dialer_spcha_window

0x9b69,	// (0x00065585) bg_popup_sub_pane_cp07

0xd10e,	// (0x00068b2a) list_spcha_pane

0xd116,	// (0x00068b32) list_single_spcha_pane_ParamLimits

0xd116,	// (0x00068b32) list_single_spcha_pane

0x9b69,	// (0x00065585) list_highlight_pane_cp06

0xd127,	// (0x00068b43) list_single_spcha_pane_t1

0xc2e1,	// (0x00067cfd) popup_call2_audio_out_window_g4_ParamLimits

0xc2e1,	// (0x00067cfd) popup_call2_audio_out_window_g4

0x111d,	// (0x0005cb39) main_imed2_pane

0x43d6,	// (0x0005fdf2) popup_imed_adjust2_window

0x43e9,	// (0x0005fe05) popup_imed_trans_window_ParamLimits

0x43e9,	// (0x0005fe05) popup_imed_trans_window

0xcb2a,	// (0x00068546) popup_blid_sat_info2_window_t1

0xcb38,	// (0x00068554) popup_blid_sat_info2_window_t2

0x000a,

0x052d,	// (0x0005bf49) popup_blid_sat_info2_window_t

0x5851,	// (0x0006126d) aid_size_cell_colour_35

0x586b,	// (0x00061287) aid_size_cell_colour_112

0x5882,	// (0x0006129e) aid_size_cell_effect

0xad5e,	// (0x0006677a) bg_tb_trans_pane_cp02

0xafc7,	// (0x000669e3) heading_imed_pane

0x589c,	// (0x000612b8) listscroll_imed_pane

0xd135,	// (0x00068b51) heading_imed_pane_g1

0xd13d,	// (0x00068b59) heading_imed_pane_t1

0xd14b,	// (0x00068b67) grid_imed_colour_35_pane_ParamLimits

0xd14b,	// (0x00068b67) grid_imed_colour_35_pane

0x58a8,	// (0x000612c4) grid_imed_effect_pane

0xd163,	// (0x00068b7f) list_imed_aspect_pane

0x58b8,	// (0x000612d4) scroll_pane_cp027_ParamLimits

0x58b8,	// (0x000612d4) scroll_pane_cp027

0x58c4,	// (0x000612e0) cell_imed_effect_pane_ParamLimits

0x58c4,	// (0x000612e0) cell_imed_effect_pane

0xd16b,	// (0x00068b87) cell_imed_colour_pane_ParamLimits

0xd16b,	// (0x00068b87) cell_imed_colour_pane

0xd1ad,	// (0x00068bc9) cell_imed_colour_pane_g1_ParamLimits

0xd1ad,	// (0x00068bc9) cell_imed_colour_pane_g1

0xd1be,	// (0x00068bda) hgihlgiht_grid_pane_cp016_ParamLimits

0xd1be,	// (0x00068bda) hgihlgiht_grid_pane_cp016

0x58dc,	// (0x000612f8) cell_imed_effect_pane_g1

0x58e4,	// (0x00061300) grid_highlight_pane_cp017

0xd1cf,	// (0x00068beb) list_imed_single_pane_ParamLimits

0xd1cf,	// (0x00068beb) list_imed_single_pane

0x9b69,	// (0x00065585) list_highlight_pane_cp07

0xd1e4,	// (0x00068c00) list_imed_aspect_pane_comp1_t1

0xc8e4,	// (0x00068300) bg_tb_trans_pane_cp05

0xd206,	// (0x00068c22) popup_imed_adjust2_window_g1

0xd22d,	// (0x00068c49) popup_imed_adjust2_window_t1

0xd245,	// (0x00068c61) slider_imed_adjust_pane

0xd259,	// (0x00068c75) slider_imed_adjust_pane_g1

0xd269,	// (0x00068c85) slider_imed_adjust_pane_g2

0xd279,	// (0x00068c95) slider_imed_adjust_pane_g3

0xd28a,	// (0x00068ca6) slider_imed_adjust_pane_g4

0x0003,

0x0671,	// (0x0005c08d) slider_imed_adjust_pane_g

0x58ed,	// (0x00061309) aid_size_cell_clipart2

0x58f9,	// (0x00061315) grid_imed_clipart_pane

0xd29b,	// (0x00068cb7) scroll_pane_cp031

0x5903,	// (0x0006131f) cell_imed_clipart_pane_ParamLimits

0x5903,	// (0x0006131f) cell_imed_clipart_pane

0x5926,	// (0x00061342) cell_imed_clipart_pane_g1

0x9b69,	// (0x00065585) grid_highlight_pane_cp014

0x5680,	// (0x0006109c) main_clock2_pane_g1_ParamLimits

0x5680,	// (0x0006109c) main_clock2_pane_g1

0x5753,	// (0x0006116f) aid_call2_pane_cp10

0x5765,	// (0x00061181) aid_call_pane_cp10

0xb2ce,	// (0x00066cea) popup_clock_analogue_window_cp10_g1

0xb2ce,	// (0x00066cea) popup_clock_analogue_window_cp10_g2

0x5777,	// (0x00061193) popup_clock_analogue_window_cp10_g3

0x5777,	// (0x00061193) popup_clock_analogue_window_cp10_g4

0xb2ce,	// (0x00066cea) popup_clock_analogue_window_cp10_g5

0x0004,

0xf60f,	// (0x0006b02b) popup_clock_analogue_window_cp10_g

0x5789,	// (0x000611a5) popup_clock_analogue_window_cp10_t1

0x57ba,	// (0x000611d6) clock_digital_number_pane_cp10_ParamLimits

0x57ba,	// (0x000611d6) clock_digital_number_pane_cp10

0x57d2,	// (0x000611ee) clock_digital_number_pane_cp11_ParamLimits

0x57d2,	// (0x000611ee) clock_digital_number_pane_cp11

0x57ea,	// (0x00061206) clock_digital_number_pane_cp12_ParamLimits

0x57ea,	// (0x00061206) clock_digital_number_pane_cp12

0x5802,	// (0x0006121e) clock_digital_number_pane_cp13_ParamLimits

0x5802,	// (0x0006121e) clock_digital_number_pane_cp13

0x581a,	// (0x00061236) clock_digital_separator_pane_cp10_ParamLimits

0x581a,	// (0x00061236) clock_digital_separator_pane_cp10

0x5832,	// (0x0006124e) popup_clock_digital_window_cp02_t1_ParamLimits

0x5832,	// (0x0006124e) popup_clock_digital_window_cp02_t1

0xa77c,	// (0x00066198) clock_digital_number_pane_cp10_g1

0xa77c,	// (0x00066198) clock_digital_number_pane_cp10_g2

0x0001,

0xf61a,	// (0x0006b036) clock_digital_number_pane_cp10_g

0xa77c,	// (0x00066198) clock_digital_separator_pane_cp10_g1

0xa77c,	// (0x00066198) clock_digital_separator_pane_g2_cp10

0xb45b,	// (0x00066e77) navi_pane_vded_g4

0xb464,	// (0x00066e80) navi_pane_vded_g5

0xb46d,	// (0x00066e89) navi_pane_vded_t1

0x111d,	// (0x0005cb39) main_vded_pane

0x592f,	// (0x0006134b) main_vded_pane_g1

0x593b,	// (0x00061357) main_vded_pane_g2

0x5945,	// (0x00061361) main_vded_pane_g3

0x0002,

0xf61f,	// (0x0006b03b) main_vded_pane_g

0x594f,	// (0x0006136b) main_vded_pane_t1

0x595d,	// (0x00061379) main_vded_pane_t2

0x0001,

0xf626,	// (0x0006b042) main_vded_pane_t

0x596b,	// (0x00061387) vded_slider_pane

0x5975,	// (0x00061391) vded_video_pane

0xd2a3,	// (0x00068cbf) vded_video_pane_g1

0x597f,	// (0x0006139b) vded_video_pane_g2

0xccec,	// (0x00068708) vded_video_pane_g3

0x0002,

0xf62b,	// (0x0006b047) vded_video_pane_g

0xd2ad,	// (0x00068cc9) vded_slider_pane_g1

0xca3f,	// (0x0006845b) vded_slider_pane_g2

0xd2b6,	// (0x00068cd2) vded_slider_pane_g3

0xd2bf,	// (0x00068cdb) vded_slider_pane_g4

0xd2c8,	// (0x00068ce4) vded_slider_pane_g5

0x0004,

0x0692,	// (0x0005c0ae) vded_slider_pane_g

0x544c,	// (0x00060e68) mup3_rocker_pane_ParamLimits

0x544c,	// (0x00060e68) mup3_rocker_pane

0x5988,	// (0x000613a4) mup3_control_keys_pane_g1

0x5990,	// (0x000613ac) mup3_control_keys_pane_g2

0x5998,	// (0x000613b4) mup3_control_keys_pane_g3

0x59a0,	// (0x000613bc) mup3_control_keys_pane_g4

0x0003,

0xf632,	// (0x0006b04e) mup3_control_keys_pane_g

0x10d1,	// (0x0005caed) popup_toolbar2_fixed_window_cp01_ParamLimits

0x10d1,	// (0x0005caed) popup_toolbar2_fixed_window_cp01

0x5466,	// (0x00060e82) popup_toolbar2_fixed_window_cp02_ParamLimits

0x5466,	// (0x00060e82) popup_toolbar2_fixed_window_cp02

0xbc20,	// (0x0006763c) popup_call2_audio_second_window_t4_ParamLimits

0xbc20,	// (0x0006763c) popup_call2_audio_second_window_t4

0xc14e,	// (0x00067b6a) popup_call2_audio_first_window_t6_ParamLimits

0xc14e,	// (0x00067b6a) popup_call2_audio_first_window_t6

0xc3e4,	// (0x00067e00) popup_call2_audio_out_window_t6_ParamLimits

0xc3e4,	// (0x00067e00) popup_call2_audio_out_window_t6

0x111d,	// (0x0005cb39) main_vitu_pane

0x59b0,	// (0x000613cc) aid_size_cell_itu_ParamLimits

0x59b0,	// (0x000613cc) aid_size_cell_itu

0xd903,	// (0x0006931f) bg_popup_window_pane_cp08_ParamLimits

0xd903,	// (0x0006931f) bg_popup_window_pane_cp08

0x59be,	// (0x000613da) field_vitu_entry_pane_ParamLimits

0x59be,	// (0x000613da) field_vitu_entry_pane

0x59cd,	// (0x000613e9) grid_vitu_function_pane_ParamLimits

0x59cd,	// (0x000613e9) grid_vitu_function_pane

0x59dd,	// (0x000613f9) grid_vitu_itu_pane_ParamLimits

0x59dd,	// (0x000613f9) grid_vitu_itu_pane

0x59ed,	// (0x00061409) cell_vitu_itu_pane_ParamLimits

0x59ed,	// (0x00061409) cell_vitu_itu_pane

0x5a02,	// (0x0006141e) cell_vitu_function_pane_ParamLimits

0x5a02,	// (0x0006141e) cell_vitu_function_pane

0xad5e,	// (0x0006677a) bg_popup_sub_pane_cp08_ParamLimits

0xad5e,	// (0x0006677a) bg_popup_sub_pane_cp08

0x5a14,	// (0x00061430) field_vitu_entry_pane_t1_ParamLimits

0x5a14,	// (0x00061430) field_vitu_entry_pane_t1

0xd2e9,	// (0x00068d05) field_vitu_entry_pane_t2_ParamLimits

0xd2e9,	// (0x00068d05) field_vitu_entry_pane_t2

0x0001,

0xf63b,	// (0x0006b057) field_vitu_entry_pane_t_ParamLimits

0xf63b,	// (0x0006b057) field_vitu_entry_pane_t

0xd306,	// (0x00068d22) bg_button_pane_cp05_ParamLimits

0xd306,	// (0x00068d22) bg_button_pane_cp05

0x5a31,	// (0x0006144d) cell_vitu_itu_pane_g1

0x5a49,	// (0x00061465) cell_vitu_itu_pane_t1_ParamLimits

0x5a49,	// (0x00061465) cell_vitu_itu_pane_t1

0x5a5b,	// (0x00061477) cell_vitu_itu_pane_t2_ParamLimits

0x5a5b,	// (0x00061477) cell_vitu_itu_pane_t2

0x0002,

0xf640,	// (0x0006b05c) cell_vitu_itu_pane_t_ParamLimits

0xf640,	// (0x0006b05c) cell_vitu_itu_pane_t

0xd314,	// (0x00068d30) bg_button_pane_cp07

0x5a90,	// (0x000614ac) cell_vitu_function_pane_g1

0x13ac,	// (0x0005cdc8) main_calc_pane_g1

0x0e8e,	// (0x0005c8aa) aid_visual_content_pane

0x111d,	// (0x0005cb39) main_vradio_pane

0x5a99,	// (0x000614b5) main_vradio_pane_g1_ParamLimits

0x5a99,	// (0x000614b5) main_vradio_pane_g1

0xd31e,	// (0x00068d3a) main_vradio_pane_g2_ParamLimits

0xd31e,	// (0x00068d3a) main_vradio_pane_g2

0x0001,

0xf647,	// (0x0006b063) main_vradio_pane_g_ParamLimits

0xf647,	// (0x0006b063) main_vradio_pane_g

0x5aa9,	// (0x000614c5) main_vradio_pane_t1_ParamLimits

0x5aa9,	// (0x000614c5) main_vradio_pane_t1

0x5abb,	// (0x000614d7) main_vradio_pane_t2_ParamLimits

0x5abb,	// (0x000614d7) main_vradio_pane_t2

0xd32b,	// (0x00068d47) main_vradio_pane_t3_ParamLimits

0xd32b,	// (0x00068d47) main_vradio_pane_t3

0x0002,

0xf64c,	// (0x0006b068) main_vradio_pane_t_ParamLimits

0xf64c,	// (0x0006b068) main_vradio_pane_t

0x5acd,	// (0x000614e9) vradio_rocker_control_pane_ParamLimits

0x5acd,	// (0x000614e9) vradio_rocker_control_pane

0x5ad9,	// (0x000614f5) vradio_station_info_pane_ParamLimits

0x5ad9,	// (0x000614f5) vradio_station_info_pane

0xd33f,	// (0x00068d5b) vradio_frequency_info_pane_ParamLimits

0xd33f,	// (0x00068d5b) vradio_frequency_info_pane

0xccec,	// (0x00068708) vradio_station_info_pane_g1

0xd34e,	// (0x00068d6a) vradio_station_info_pane_t1_ParamLimits

0xd34e,	// (0x00068d6a) vradio_station_info_pane_t1

0xd370,	// (0x00068d8c) vradio_station_info_pane_t2_ParamLimits

0xd370,	// (0x00068d8c) vradio_station_info_pane_t2

0x0001,

0x06c3,	// (0x0005c0df) vradio_station_info_pane_t_ParamLimits

0x06c3,	// (0x0005c0df) vradio_station_info_pane_t

0xd382,	// (0x00068d9e) vradio_tuning_pane

0xd38a,	// (0x00068da6) vradio_rocker_control_pane_g1

0xd392,	// (0x00068dae) vradio_rocker_control_pane_g2

0xd39a,	// (0x00068db6) vradio_rocker_control_pane_g3

0xd3a2,	// (0x00068dbe) vradio_rocker_control_pane_g4

0xd3aa,	// (0x00068dc6) vradio_rocker_control_pane_g5

0x0004,

0x06c8,	// (0x0005c0e4) vradio_rocker_control_pane_g

0x5ae8,	// (0x00061504) vradio_frequency_info_pane_g1

0xd3b2,	// (0x00068dce) vradio_frequency_info_pane_t1_ParamLimits

0xd3b2,	// (0x00068dce) vradio_frequency_info_pane_t1

0x5af2,	// (0x0006150e) vradio_tuning_pane_g1

0x5afb,	// (0x00061517) vradio_tuning_pane_t1

0x0ed7,	// (0x0005c8f3) area_side_right_pane_ParamLimits

0x0ed7,	// (0x0005c8f3) area_side_right_pane

0xc89f,	// (0x000682bb) status_small_pane_g1

0xc8a7,	// (0x000682c3) status_small_pane_g2

0xc8b0,	// (0x000682cc) status_small_pane_g3

0xc8b9,	// (0x000682d5) status_small_pane_g4

0x0003,

0x0483,	// (0x0005be9f) status_small_pane_g

0xc8c2,	// (0x000682de) status_small_pane_t1

0x111d,	// (0x0005cb39) main_video3_pane

0xd3c6,	// (0x00068de2) cams_zoom_vslider_pane

0xd3ce,	// (0x00068dea) image3_wide_pane_ParamLimits

0xd3ce,	// (0x00068dea) image3_wide_pane

0xd3e8,	// (0x00068e04) image3_wide_small_pane

0xd3f4,	// (0x00068e10) main_video3_pane_g1_ParamLimits

0xd3f4,	// (0x00068e10) main_video3_pane_g1

0xd410,	// (0x00068e2c) main_video3_pane_g2_ParamLimits

0xd410,	// (0x00068e2c) main_video3_pane_g2

0x0001,

0x06d3,	// (0x0005c0ef) main_video3_pane_g_ParamLimits

0x06d3,	// (0x0005c0ef) main_video3_pane_g

0xd42c,	// (0x00068e48) main_video3_pane_t1_ParamLimits

0xd42c,	// (0x00068e48) main_video3_pane_t1

0xd457,	// (0x00068e73) main_video3_pane_t2_ParamLimits

0xd457,	// (0x00068e73) main_video3_pane_t2

0xd482,	// (0x00068e9e) main_video3_pane_t3_ParamLimits

0xd482,	// (0x00068e9e) main_video3_pane_t3

0x0002,

0x06d8,	// (0x0005c0f4) main_video3_pane_t_ParamLimits

0x06d8,	// (0x0005c0f4) main_video3_pane_t

0xd4af,	// (0x00068ecb) cams_zoom_vslider_pane_g1

0xd4b8,	// (0x00068ed4) cams_zoom_vslider_pane_g2

0x0001,

0x06df,	// (0x0005c0fb) cams_zoom_vslider_pane_g

0xd4c0,	// (0x00068edc) small_slider_vertical_pane

0xccec,	// (0x00068708) small_slider_vertical_pane_g1

0xccec,	// (0x00068708) small_slider_vertical_pane_g2

0xd4c8,	// (0x00068ee4) small_slider_vertical_pane_g3

0x0002,

0x06e4,	// (0x0005c100) small_slider_vertical_pane_g

0x111d,	// (0x0005cb39) main_hwr_training_pane

0xd4d1,	// (0x00068eed) hwr_training_instruct_pane_ParamLimits

0xd4d1,	// (0x00068eed) hwr_training_instruct_pane

0x5b0a,	// (0x00061526) hwr_training_navi_pane_ParamLimits

0x5b0a,	// (0x00061526) hwr_training_navi_pane

0x5b24,	// (0x00061540) hwr_training_write_pane_ParamLimits

0x5b24,	// (0x00061540) hwr_training_write_pane

0x9b69,	// (0x00065585) bg_frame_shadow_pane

0xd508,	// (0x00068f24) hwr_training_write_pane_g1

0xd510,	// (0x00068f2c) hwr_training_write_pane_g2

0xd518,	// (0x00068f34) hwr_training_write_pane_g3

0xd520,	// (0x00068f3c) hwr_training_write_pane_g4

0xd528,	// (0x00068f44) hwr_training_write_pane_g5

0xd530,	// (0x00068f4c) hwr_training_write_pane_g6

0xd538,	// (0x00068f54) hwr_training_write_pane_g7

0x0006,

0x06eb,	// (0x0005c107) hwr_training_write_pane_g

0x5b5c,	// (0x00061578) hwr_training_navi_pane_g1_ParamLimits

0x5b5c,	// (0x00061578) hwr_training_navi_pane_g1

0x5b6e,	// (0x0006158a) hwr_training_navi_pane_g2_ParamLimits

0x5b6e,	// (0x0006158a) hwr_training_navi_pane_g2

0x5b80,	// (0x0006159c) hwr_training_navi_pane_g3_ParamLimits

0x5b80,	// (0x0006159c) hwr_training_navi_pane_g3

0x5b90,	// (0x000615ac) hwr_training_navi_pane_g4_ParamLimits

0x5b90,	// (0x000615ac) hwr_training_navi_pane_g4

0x0004,

0xf653,	// (0x0006b06f) hwr_training_navi_pane_g_ParamLimits

0xf653,	// (0x0006b06f) hwr_training_navi_pane_g

0x5baa,	// (0x000615c6) hwr_training_navi_pane_t1

0x5bb8,	// (0x000615d4) list_single_hwr_training_instruct_pane_ParamLimits

0x5bb8,	// (0x000615d4) list_single_hwr_training_instruct_pane

0xd540,	// (0x00068f5c) list_single_hwr_training_instruct_pane_t1

0xcc2c,	// (0x00068648) bg_frame_shadow_pane_g1

0xd54f,	// (0x00068f6b) bg_frame_shadow_pane_g2

0xd557,	// (0x00068f73) bg_frame_shadow_pane_g3

0xd55f,	// (0x00068f7b) bg_frame_shadow_pane_g4

0xd567,	// (0x00068f83) bg_frame_shadow_pane_g5

0xd56f,	// (0x00068f8b) bg_frame_shadow_pane_g6

0xd577,	// (0x00068f93) bg_frame_shadow_pane_g7

0xa920,	// (0x0006633c) bg_frame_shadow_pane_g8

0x0007,

0xf65e,	// (0x0006b07a) bg_frame_shadow_pane_g

0x111d,	// (0x0005cb39) main_video_tele_dialer_pane

0x5be1,	// (0x000615fd) aid_size_cell_video_keypad_ParamLimits

0x5be1,	// (0x000615fd) aid_size_cell_video_keypad

0x5bf1,	// (0x0006160d) grid_video_dialer_keypad_pane_ParamLimits

0x5bf1,	// (0x0006160d) grid_video_dialer_keypad_pane

0x5c25,	// (0x00061641) video_down_pane_cp_ParamLimits

0x5c25,	// (0x00061641) video_down_pane_cp

0x5c4f,	// (0x0006166b) cell_video_dialer_keypad_pane_ParamLimits

0x5c4f,	// (0x0006166b) cell_video_dialer_keypad_pane

0xd57f,	// (0x00068f9b) bg_button_pane_cp08_ParamLimits

0xd57f,	// (0x00068f9b) bg_button_pane_cp08

0x5c64,	// (0x00061680) cell_video_dialer_keypad_pane_g1_ParamLimits

0x5c64,	// (0x00061680) cell_video_dialer_keypad_pane_g1

0x5440,	// (0x00060e5c) mup3_rocker2_pane_ParamLimits

0x5440,	// (0x00060e5c) mup3_rocker2_pane

0xccec,	// (0x00068708) mup3_rocker2_pane_g1

0x434a,	// (0x0005fd66) main_dialer2_pane

0x111d,	// (0x0005cb39) main_mp4_pane

0x5ca6,	// (0x000616c2) main_mp4_pane_g1_ParamLimits

0x5ca6,	// (0x000616c2) main_mp4_pane_g1

0x5cb4,	// (0x000616d0) main_mp4_pane_g2_ParamLimits

0x5cb4,	// (0x000616d0) main_mp4_pane_g2

0x5cc2,	// (0x000616de) main_mp4_pane_g3_ParamLimits

0x5cc2,	// (0x000616de) main_mp4_pane_g3

0x5d07,	// (0x00061723) main_mp4_pane_g4_ParamLimits

0x5d07,	// (0x00061723) main_mp4_pane_g4

0x5d2f,	// (0x0006174b) main_mp4_pane_g5_ParamLimits

0x5d2f,	// (0x0006174b) main_mp4_pane_g5

0x0005,

0xf67e,	// (0x0006b09a) main_mp4_pane_g_ParamLimits

0xf67e,	// (0x0006b09a) main_mp4_pane_g

0x5d7f,	// (0x0006179b) main_mp4_pane_t1_ParamLimits

0x5d7f,	// (0x0006179b) main_mp4_pane_t1

0x5ddb,	// (0x000617f7) main_mp4_pane_t2_ParamLimits

0x5ddb,	// (0x000617f7) main_mp4_pane_t2

0xd58b,	// (0x00068fa7) main_mp4_pane_t3_ParamLimits

0xd58b,	// (0x00068fa7) main_mp4_pane_t3

0x5e2d,	// (0x00061849) main_mp4_pane_t4_ParamLimits

0x5e2d,	// (0x00061849) main_mp4_pane_t4

0x0003,

0xf68b,	// (0x0006b0a7) main_mp4_pane_t_ParamLimits

0xf68b,	// (0x0006b0a7) main_mp4_pane_t

0x5e71,	// (0x0006188d) mp4_progress_pane_ParamLimits

0x5e71,	// (0x0006188d) mp4_progress_pane

0x5ebb,	// (0x000618d7) mp4_rocker_pane_ParamLimits

0x5ebb,	// (0x000618d7) mp4_rocker_pane

0xd5b3,	// (0x00068fcf) mp4_progress_pane_t1

0xd5cc,	// (0x00068fe8) mp4_progress_pane_t2

0x0001,

0x073b,	// (0x0005c157) mp4_progress_pane_t

0xd5e5,	// (0x00069001) mup_progress_pane_cp04

0xdcd4,	// (0x000696f0) mp4_rocker_pane_g1

0x5edb,	// (0x000618f7) aid_cell_size_keypad2_ParamLimits

0x5edb,	// (0x000618f7) aid_cell_size_keypad2

0x5eeb,	// (0x00061907) dialer2_ne_pane_ParamLimits

0x5eeb,	// (0x00061907) dialer2_ne_pane

0x5ef9,	// (0x00061915) grid_dialer2_keypad_pane_ParamLimits

0x5ef9,	// (0x00061915) grid_dialer2_keypad_pane

0xd911,	// (0x0006932d) bg_popup_call_pane_cp07_ParamLimits

0xd911,	// (0x0006932d) bg_popup_call_pane_cp07

0x5f09,	// (0x00061925) dialer2_ne_pane_t1_ParamLimits

0x5f09,	// (0x00061925) dialer2_ne_pane_t1

0x5f2e,	// (0x0006194a) cell_dialer2_keypad_pane_ParamLimits

0x5f2e,	// (0x0006194a) cell_dialer2_keypad_pane

0xd603,	// (0x0006901f) bg_button_pane_pane_cp04_ParamLimits

0xd603,	// (0x0006901f) bg_button_pane_pane_cp04

0x5f43,	// (0x0006195f) cell_dialer2_keypad_pane_g1_ParamLimits

0x5f43,	// (0x0006195f) cell_dialer2_keypad_pane_g1

0x1f60,	// (0x0005d97c) aid_placing_vt_set_content_ParamLimits

0x1f60,	// (0x0005d97c) aid_placing_vt_set_content

0x1f8c,	// (0x0005d9a8) aid_placing_vt_set_title_ParamLimits

0x1f8c,	// (0x0005d9a8) aid_placing_vt_set_title

0x111d,	// (0x0005cb39) main_image3_pane

0x5fdd,	// (0x000619f9) area_side_right_pane_cp01_ParamLimits

0x5fdd,	// (0x000619f9) area_side_right_pane_cp01

0x600a,	// (0x00061a26) main_image3_pane_g1_ParamLimits

0x600a,	// (0x00061a26) main_image3_pane_g1

0x6018,	// (0x00061a34) main_image3_pane_g2_ParamLimits

0x6018,	// (0x00061a34) main_image3_pane_g2

0x6031,	// (0x00061a4d) main_image3_pane_g3_ParamLimits

0x6031,	// (0x00061a4d) main_image3_pane_g3

0x604a,	// (0x00061a66) main_image3_pane_g4_ParamLimits

0x604a,	// (0x00061a66) main_image3_pane_g4

0x0003,

0xf69e,	// (0x0006b0ba) main_image3_pane_g_ParamLimits

0xf69e,	// (0x0006b0ba) main_image3_pane_g

0x6063,	// (0x00061a7f) main_image3_pane_t1_ParamLimits

0x6063,	// (0x00061a7f) main_image3_pane_t1

0x6088,	// (0x00061aa4) main_image3_pane_t2_ParamLimits

0x6088,	// (0x00061aa4) main_image3_pane_t2

0x60a7,	// (0x00061ac3) main_image3_pane_t3_ParamLimits

0x60a7,	// (0x00061ac3) main_image3_pane_t3

0x0003,

0xf6a7,	// (0x0006b0c3) main_image3_pane_t_ParamLimits

0xf6a7,	// (0x0006b0c3) main_image3_pane_t

0xd903,	// (0x0006931f) grid_sctrl_middle_pane_cp01_ParamLimits

0xd903,	// (0x0006931f) grid_sctrl_middle_pane_cp01

0x6108,	// (0x00061b24) cell_sctrl_middle_pane_cp01_ParamLimits

0x6108,	// (0x00061b24) cell_sctrl_middle_pane_cp01

0x6119,	// (0x00061b35) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6119,	// (0x00061b35) cell_sctrl_middle_pane_cp01_g1

0x111d,	// (0x0005cb39) main_call4_pane

0x6126,	// (0x00061b42) aid_size_button_call4_ParamLimits

0x6126,	// (0x00061b42) aid_size_button_call4

0x6156,	// (0x00061b72) call4_windows_pane_ParamLimits

0x6156,	// (0x00061b72) call4_windows_pane

0x6170,	// (0x00061b8c) grid_call4_button_pane_ParamLimits

0x6170,	// (0x00061b8c) grid_call4_button_pane

0xd60f,	// (0x0006902b) call4_windows_conf_pane

0xd626,	// (0x00069042) popup_call4_audio_first_window_ParamLimits

0xd626,	// (0x00069042) popup_call4_audio_first_window

0xd66e,	// (0x0006908a) popup_call4_audio_second_window_ParamLimits

0xd66e,	// (0x0006908a) popup_call4_audio_second_window

0xd687,	// (0x000690a3) popup_call4_audio_wait_window_ParamLimits

0xd687,	// (0x000690a3) popup_call4_audio_wait_window

0x6194,	// (0x00061bb0) cell_call4_button_pane_ParamLimits

0x6194,	// (0x00061bb0) cell_call4_button_pane

0x61b9,	// (0x00061bd5) bg_button_pane_cp09_ParamLimits

0x61b9,	// (0x00061bd5) bg_button_pane_cp09

0x61c5,	// (0x00061be1) cell_call4_button_pane_g1_ParamLimits

0x61c5,	// (0x00061be1) cell_call4_button_pane_g1

0x61d2,	// (0x00061bee) cell_call4_button_pane_t1_ParamLimits

0x61d2,	// (0x00061bee) cell_call4_button_pane_t1

0xd69d,	// (0x000690b9) popup_call4_audio_conf_window_ParamLimits

0xd69d,	// (0x000690b9) popup_call4_audio_conf_window

0x5473,	// (0x00060e8f) mup3_progress_pane_t1_ParamLimits

0x5492,	// (0x00060eae) mup3_progress_pane_t2_ParamLimits

0xcfc1,	// (0x000689dd) mup3_progress_pane_t3_ParamLimits

0xf5e8,	// (0x0006b004) mup3_progress_pane_t_ParamLimits

0xcfde,	// (0x000689fa) mup_progress_pane_cp03_ParamLimits

0x59a8,	// (0x000613c4) mup3_control_keys_pane_g4_copy1

0x5e9f,	// (0x000618bb) mp4_rocker2_pane_ParamLimits

0x5e9f,	// (0x000618bb) mp4_rocker2_pane

0xd6b1,	// (0x000690cd) mp4_rocker2_pane_g1

0xd6b9,	// (0x000690d5) mp4_rocker2_pane_g2

0x6216,	// (0x00061c32) mp4_rocker2_pane_g3

0x621e,	// (0x00061c3a) mp4_rocker2_pane_g4

0x6226,	// (0x00061c42) mp4_rocker2_pane_g5

0x0004,

0xf6b0,	// (0x0006b0cc) mp4_rocker2_pane_g

0x111d,	// (0x0005cb39) main_camera4_pane

0x111d,	// (0x0005cb39) main_video4_pane

0x5c01,	// (0x0006161d) main_video_tele_dialer_pane_t1_ParamLimits

0x5c01,	// (0x0006161d) main_video_tele_dialer_pane_t1

0x5c13,	// (0x0006162f) main_video_tele_dialer_pane_t2_ParamLimits

0x5c13,	// (0x0006162f) main_video_tele_dialer_pane_t2

0x0001,

0xf66f,	// (0x0006b08b) main_video_tele_dialer_pane_t_ParamLimits

0xf66f,	// (0x0006b08b) main_video_tele_dialer_pane_t

0x6246,	// (0x00061c62) cam4_autofocus_pane_ParamLimits

0x6246,	// (0x00061c62) cam4_autofocus_pane

0x6260,	// (0x00061c7c) cam4_image_uncrop_pane_ParamLimits

0x6260,	// (0x00061c7c) cam4_image_uncrop_pane

0x6277,	// (0x00061c93) cam4_indicators_pane_ParamLimits

0x6277,	// (0x00061c93) cam4_indicators_pane

0x6293,	// (0x00061caf) main_camera4_pane_g1_ParamLimits

0x6293,	// (0x00061caf) main_camera4_pane_g1

0x629f,	// (0x00061cbb) main_camera4_pane_g2_ParamLimits

0x629f,	// (0x00061cbb) main_camera4_pane_g2

0x629f,	// (0x00061cbb) main_camera4_pane_g3_ParamLimits

0x629f,	// (0x00061cbb) main_camera4_pane_g3

0x62ab,	// (0x00061cc7) main_camera4_pane_g4_ParamLimits

0x62ab,	// (0x00061cc7) main_camera4_pane_g4

0x62b7,	// (0x00061cd3) main_camera4_pane_g5_ParamLimits

0x62b7,	// (0x00061cd3) main_camera4_pane_g5

0x0005,

0xf6bb,	// (0x0006b0d7) main_camera4_pane_g_ParamLimits

0xf6bb,	// (0x0006b0d7) main_camera4_pane_g

0x62d1,	// (0x00061ced) main_camera4_pane_t1_ParamLimits

0x62d1,	// (0x00061ced) main_camera4_pane_t1

0x6319,	// (0x00061d35) bg_tb_trans_pane_cp06

0x632f,	// (0x00061d4b) cam4_indicators_pane_g1

0x6340,	// (0x00061d5c) cam4_indicators_pane_g2

0x0002,

0xf6d6,	// (0x0006b0f2) cam4_indicators_pane_g

0x6358,	// (0x00061d74) cam4_indicators_pane_t1

0x6382,	// (0x00061d9e) main_video4_pane_g1_ParamLimits

0x6382,	// (0x00061d9e) main_video4_pane_g1

0x638e,	// (0x00061daa) main_video4_pane_g2_ParamLimits

0x638e,	// (0x00061daa) main_video4_pane_g2

0x639a,	// (0x00061db6) main_video4_pane_g3_ParamLimits

0x639a,	// (0x00061db6) main_video4_pane_g3

0x63a6,	// (0x00061dc2) main_video4_pane_g4_ParamLimits

0x63a6,	// (0x00061dc2) main_video4_pane_g4

0x0004,

0xf6dd,	// (0x0006b0f9) main_video4_pane_g_ParamLimits

0xf6dd,	// (0x0006b0f9) main_video4_pane_g

0x63c6,	// (0x00061de2) vid4_indicators_pane_ParamLimits

0x63c6,	// (0x00061de2) vid4_indicators_pane

0x63e5,	// (0x00061e01) video4_image_uncrop_cif_pane_ParamLimits

0x63e5,	// (0x00061e01) video4_image_uncrop_cif_pane

0x63f4,	// (0x00061e10) video4_image_uncrop_nhd_pane_ParamLimits

0x63f4,	// (0x00061e10) video4_image_uncrop_nhd_pane

0x6260,	// (0x00061c7c) video4_image_uncrop_vga_pane_ParamLimits

0x6260,	// (0x00061c7c) video4_image_uncrop_vga_pane

0x433c,	// (0x0005fd58) bg_tb_trans_pane_cp07

0x6409,	// (0x00061e25) vid4_indicators_pane_g1

0x641d,	// (0x00061e39) vid4_indicators_pane_g2

0x6431,	// (0x00061e4d) vid4_indicators_pane_g3

0x0004,

0xf6e8,	// (0x0006b104) vid4_indicators_pane_g

0x645e,	// (0x00061e7a) vid4_indicators_pane_t1

0x6475,	// (0x00061e91) cam4_autofocus_pane_g1

0x647d,	// (0x00061e99) cam4_autofocus_pane_g2

0x6485,	// (0x00061ea1) cam4_autofocus_pane_g3

0x0002,

0xf6f3,	// (0x0006b10f) cam4_autofocus_pane_g

0x648d,	// (0x00061ea9) cam4_autofocus_pane_g3_copy1

0x5c33,	// (0x0006164f) video_down_pane_cp_t1

0x5c41,	// (0x0006165d) video_down_pane_cp_t2

0x0001,

0xf674,	// (0x0006b090) video_down_pane_cp_t

0x1103,	// (0x0005cb1f) popup_vitu2_window_ParamLimits

0x1103,	// (0x0005cb1f) popup_vitu2_window

0x6495,	// (0x00061eb1) aid_size_cell2_itu2_ParamLimits

0x6495,	// (0x00061eb1) aid_size_cell2_itu2

0x64b7,	// (0x00061ed3) aid_size_cell_itu2_ParamLimits

0x64b7,	// (0x00061ed3) aid_size_cell_itu2

0x64fb,	// (0x00061f17) bg_popup_window_pane_cp09_ParamLimits

0x64fb,	// (0x00061f17) bg_popup_window_pane_cp09

0x6509,	// (0x00061f25) field_vitu2_entry_pane_ParamLimits

0x6509,	// (0x00061f25) field_vitu2_entry_pane

0x6529,	// (0x00061f45) grid_vitu2_function_pane_ParamLimits

0x6529,	// (0x00061f45) grid_vitu2_function_pane

0x656d,	// (0x00061f89) grid_vitu2_itu_pane_ParamLimits

0x656d,	// (0x00061f89) grid_vitu2_itu_pane

0x65e7,	// (0x00062003) cell_vitu2_itu_pane_ParamLimits

0x65e7,	// (0x00062003) cell_vitu2_itu_pane

0x6600,	// (0x0006201c) cell_vitu2_function_pane_ParamLimits

0x6600,	// (0x0006201c) cell_vitu2_function_pane

0xd6c1,	// (0x000690dd) bg_popup_call_pane_cp08_ParamLimits

0xd6c1,	// (0x000690dd) bg_popup_call_pane_cp08

0xd6d8,	// (0x000690f4) field_vitu2_entry_pane_g1

0xd6e4,	// (0x00069100) field_vitu2_entry_pane_g2

0x0002,

0x07a6,	// (0x0005c1c2) field_vitu2_entry_pane_g

0x6641,	// (0x0006205d) field_vitu2_entry_pane_t1_ParamLimits

0x6641,	// (0x0006205d) field_vitu2_entry_pane_t1

0x9da7,	// (0x000657c3) field_vitu2_entry_pane_t2_ParamLimits

0x9da7,	// (0x000657c3) field_vitu2_entry_pane_t2

0x0001,

0xf6fa,	// (0x0006b116) field_vitu2_entry_pane_t_ParamLimits

0xf6fa,	// (0x0006b116) field_vitu2_entry_pane_t

0x6673,	// (0x0006208f) bg_button_pane_cp010_ParamLimits

0x6673,	// (0x0006208f) bg_button_pane_cp010

0x6681,	// (0x0006209d) cell_vitu2_itu_pane_g1

0x66a1,	// (0x000620bd) cell_vitu2_itu_pane_t1_ParamLimits

0x66a1,	// (0x000620bd) cell_vitu2_itu_pane_t1

0x0d72,	// (0x0005c78e) cell_vitu2_itu_pane_t2_ParamLimits

0x0d72,	// (0x0005c78e) cell_vitu2_itu_pane_t2

0x0002,

0xf704,	// (0x0006b120) cell_vitu2_itu_pane_t_ParamLimits

0xf704,	// (0x0006b120) cell_vitu2_itu_pane_t

0x433c,	// (0x0005fd58) bg_button_pane_cp011

0x66ed,	// (0x00062109) cell_vitu2_function_pane_g1

0x111d,	// (0x0005cb39) main_myfav_hc_pane

0x60e9,	// (0x00061b05) popup_image3_note_pane_ParamLimits

0x60e9,	// (0x00061b05) popup_image3_note_pane

0x60f7,	// (0x00061b13) popup_image3_tool_bar_pane_ParamLimits

0x60f7,	// (0x00061b13) popup_image3_tool_bar_pane

0x0de8,	// (0x0005c804) cell_vitu2_itu_pane_t3_ParamLimits

0x0de8,	// (0x0005c804) cell_vitu2_itu_pane_t3

0x9b69,	// (0x00065585) bg_popup_trans_pane

0xd706,	// (0x00069122) grid_image3_tool_bar_pane

0xd710,	// (0x0006912c) bg_popup_trans_pane_g1

0xac85,	// (0x000666a1) bg_popup_trans_pane_g2

0xd718,	// (0x00069134) bg_popup_trans_pane_g3

0xd720,	// (0x0006913c) bg_popup_trans_pane_g4

0xd728,	// (0x00069144) bg_popup_trans_pane_g5

0xd730,	// (0x0006914c) bg_popup_trans_pane_g6

0xd738,	// (0x00069154) bg_popup_trans_pane_g7

0xd740,	// (0x0006915c) bg_popup_trans_pane_g8

0xac65,	// (0x00066681) bg_popup_trans_pane_g9

0x0008,

0xf70b,	// (0x0006b127) bg_popup_trans_pane_g

0xd748,	// (0x00069164) cell_image3_tool_bar_pane_ParamLimits

0xd748,	// (0x00069164) cell_image3_tool_bar_pane

0xccec,	// (0x00068708) cell_image3_tool_bar_pane_g1

0x9b69,	// (0x00065585) bg_popup_trans_pane_cp1

0xd75c,	// (0x00069178) popup_image3_note_pane_t1

0xd76a,	// (0x00069186) popup_image3_note_pane_t2

0xd778,	// (0x00069194) popup_image3_note_pane_t3

0x0002,

0x07d1,	// (0x0005c1ed) popup_image3_note_pane_t

0xd786,	// (0x000691a2) popup_image3_note_pane_t3_copy1

0x6701,	// (0x0006211d) bg_myfav_hc_instruction_pane_ParamLimits

0x6701,	// (0x0006211d) bg_myfav_hc_instruction_pane

0x6719,	// (0x00062135) cell_myfav_contact_pane_ParamLimits

0x6719,	// (0x00062135) cell_myfav_contact_pane

0x6733,	// (0x0006214f) cell_myfav_contact_pane_cp1_ParamLimits

0x6733,	// (0x0006214f) cell_myfav_contact_pane_cp1

0x674b,	// (0x00062167) cell_myfav_contact_pane_cp2_ParamLimits

0x674b,	// (0x00062167) cell_myfav_contact_pane_cp2

0x6763,	// (0x0006217f) cell_myfav_contact_pane_cp3_ParamLimits

0x6763,	// (0x0006217f) cell_myfav_contact_pane_cp3

0x677a,	// (0x00062196) cell_myfav_contact_pane_cp4_ParamLimits

0x677a,	// (0x00062196) cell_myfav_contact_pane_cp4

0x6790,	// (0x000621ac) cell_myfav_contact_pane_cp5_ParamLimits

0x6790,	// (0x000621ac) cell_myfav_contact_pane_cp5

0x67a4,	// (0x000621c0) cell_myfav_contact_pane_cp6_ParamLimits

0x67a4,	// (0x000621c0) cell_myfav_contact_pane_cp6

0x67b8,	// (0x000621d4) cell_myfav_contact_pane_cp7_ParamLimits

0x67b8,	// (0x000621d4) cell_myfav_contact_pane_cp7

0xd794,	// (0x000691b0) listscroll_gen_pane_cp05

0x67d0,	// (0x000621ec) main_myfav_hc_pane_g1_ParamLimits

0x67d0,	// (0x000621ec) main_myfav_hc_pane_g1

0x67e6,	// (0x00062202) main_myfav_hc_pane_g2_ParamLimits

0x67e6,	// (0x00062202) main_myfav_hc_pane_g2

0x0002,

0xf71e,	// (0x0006b13a) main_myfav_hc_pane_g_ParamLimits

0xf71e,	// (0x0006b13a) main_myfav_hc_pane_g

0x6816,	// (0x00062232) main_myfav_hc_pane_t1_ParamLimits

0x6816,	// (0x00062232) main_myfav_hc_pane_t1

0xd79d,	// (0x000691b9) main_myfav_hc_pane_t2_ParamLimits

0xd79d,	// (0x000691b9) main_myfav_hc_pane_t2

0xd7af,	// (0x000691cb) main_myfav_hc_pane_t3_ParamLimits

0xd7af,	// (0x000691cb) main_myfav_hc_pane_t3

0x682d,	// (0x00062249) main_myfav_hc_pane_t4_ParamLimits

0x682d,	// (0x00062249) main_myfav_hc_pane_t4

0x0004,

0xf725,	// (0x0006b141) main_myfav_hc_pane_t_ParamLimits

0xf725,	// (0x0006b141) main_myfav_hc_pane_t

0xccec,	// (0x00068708) bg_myfav_hc_instruction_pane_g1

0xd7c1,	// (0x000691dd) cell_myfav_contact_pane_g1_ParamLimits

0xd7c1,	// (0x000691dd) cell_myfav_contact_pane_g1

0xd7c1,	// (0x000691dd) cell_myfav_contact_pane_g2_ParamLimits

0xd7c1,	// (0x000691dd) cell_myfav_contact_pane_g2

0xd7cd,	// (0x000691e9) cell_myfav_contact_pane_g3_ParamLimits

0xd7cd,	// (0x000691e9) cell_myfav_contact_pane_g3

0xcfab,	// (0x000689c7) cell_myfav_contact_pane_g4_ParamLimits

0xcfab,	// (0x000689c7) cell_myfav_contact_pane_g4

0xd7da,	// (0x000691f6) cell_myfav_contact_pane_g5_ParamLimits

0xd7da,	// (0x000691f6) cell_myfav_contact_pane_g5

0x0004,

0x07ea,	// (0x0005c206) cell_myfav_contact_pane_g_ParamLimits

0x07ea,	// (0x0005c206) cell_myfav_contact_pane_g

0x67fe,	// (0x0006221a) main_myfav_hc_pane_g3_ParamLimits

0x67fe,	// (0x0006221a) main_myfav_hc_pane_g3

0x100c,	// (0x0005ca28) popup_adpt_find_window

0x6857,	// (0x00062273) afind_page_pane_ParamLimits

0x6857,	// (0x00062273) afind_page_pane

0x6864,	// (0x00062280) aid_size_cell_afind_ParamLimits

0x6864,	// (0x00062280) aid_size_cell_afind

0x687e,	// (0x0006229a) bg_popup_sub_pane_cp09_ParamLimits

0x687e,	// (0x0006229a) bg_popup_sub_pane_cp09

0x688b,	// (0x000622a7) find_pane_cp01_ParamLimits

0x688b,	// (0x000622a7) find_pane_cp01

0xd7e6,	// (0x00069202) grid_afind_control_pane_ParamLimits

0xd7e6,	// (0x00069202) grid_afind_control_pane

0x6898,	// (0x000622b4) grid_afind_pane_ParamLimits

0x6898,	// (0x000622b4) grid_afind_pane

0x68b2,	// (0x000622ce) cell_afind_pane_ParamLimits

0x68b2,	// (0x000622ce) cell_afind_pane

0xccec,	// (0x00068708) afind_page_pane_g1

0x68fa,	// (0x00062316) afind_page_pane_g2

0x6903,	// (0x0006231f) afind_page_pane_g3

0x0002,

0xf730,	// (0x0006b14c) afind_page_pane_g

0x690c,	// (0x00062328) afind_page_pane_t1

0xd7fa,	// (0x00069216) cell_afind_grid_control_pane_ParamLimits

0xd7fa,	// (0x00069216) cell_afind_grid_control_pane

0xd603,	// (0x0006901f) bg_button_pane_cp69_ParamLimits

0xd603,	// (0x0006901f) bg_button_pane_cp69

0x692c,	// (0x00062348) cell_afind_pane_g1_ParamLimits

0x692c,	// (0x00062348) cell_afind_pane_g1

0x6939,	// (0x00062355) cell_afind_pane_t1_ParamLimits

0x6939,	// (0x00062355) cell_afind_pane_t1

0xaa7e,	// (0x0006649a) bg_button_pane_cp72

0xd809,	// (0x00069225) cell_afind_grid_control_pane_g1

0x3eb4,	// (0x0005f8d0) aid_image_placing_area_ParamLimits

0x3eb4,	// (0x0005f8d0) aid_image_placing_area

0xd2d1,	// (0x00068ced) field_vitu_entry_pane_g1_ParamLimits

0xd2d1,	// (0x00068ced) field_vitu_entry_pane_g1

0xd2dd,	// (0x00068cf9) field_vitu_entry_pane_g2_ParamLimits

0xd2dd,	// (0x00068cf9) field_vitu_entry_pane_g2

0x0001,

0x06a6,	// (0x0005c0c2) field_vitu_entry_pane_g_ParamLimits

0x06a6,	// (0x0005c0c2) field_vitu_entry_pane_g

0x5a31,	// (0x0006144d) cell_vitu_itu_pane_g1_ParamLimits

0x5a73,	// (0x0006148f) cell_vitu_itu_pane_t3_ParamLimits

0x5a73,	// (0x0006148f) cell_vitu_itu_pane_t3

0xd5b3,	// (0x00068fcf) mp4_progress_pane_t1_ParamLimits

0xd5cc,	// (0x00068fe8) mp4_progress_pane_t2_ParamLimits

0x073b,	// (0x0005c157) mp4_progress_pane_t_ParamLimits

0xd5e5,	// (0x00069001) mup_progress_pane_cp04_ParamLimits

0x6841,	// (0x0006225d) main_myfav_hc_pane_t5_ParamLimits

0x6841,	// (0x0006225d) main_myfav_hc_pane_t5

0x0e9a,	// (0x0005c8b6) aid_zoom_text_primary

0x100c,	// (0x0005ca28) popup_adpt_find_window_ParamLimits

0x433c,	// (0x0005fd58) main_cam_set_pane

0x6285,	// (0x00061ca1) cam4_zoom_pane_ParamLimits

0x6285,	// (0x00061ca1) cam4_zoom_pane

0x694b,	// (0x00062367) main_cam_set_pane_g1_ParamLimits

0x694b,	// (0x00062367) main_cam_set_pane_g1

0x6959,	// (0x00062375) main_cam_set_pane_g2_ParamLimits

0x6959,	// (0x00062375) main_cam_set_pane_g2

0x0001,

0xf737,	// (0x0006b153) main_cam_set_pane_g_ParamLimits

0xf737,	// (0x0006b153) main_cam_set_pane_g

0x6965,	// (0x00062381) main_cam_set_pane_t1_ParamLimits

0x6965,	// (0x00062381) main_cam_set_pane_t1

0x6981,	// (0x0006239d) main_cset_listscroll_pane_ParamLimits

0x6981,	// (0x0006239d) main_cset_listscroll_pane

0x69ac,	// (0x000623c8) main_cset_slider_pane_ParamLimits

0x69ac,	// (0x000623c8) main_cset_slider_pane

0xd81a,	// (0x00069236) main_cset_list_pane_ParamLimits

0xd81a,	// (0x00069236) main_cset_list_pane

0xd82a,	// (0x00069246) scroll_pane_cp028

0x69cb,	// (0x000623e7) aid_area_touch_slider

0x69e7,	// (0x00062403) cset_slider_pane

0x6a11,	// (0x0006242d) main_cset_slider_pane_g1

0x6a26,	// (0x00062442) main_cset_slider_pane_g2

0x0011,

0xf73c,	// (0x0006b158) main_cset_slider_pane_g

0xd863,	// (0x0006927f) main_cset_slider_pane_t1

0x6aec,	// (0x00062508) main_cset_slider_pane_t2

0x6b06,	// (0x00062522) main_cset_slider_pane_t3

0x6b20,	// (0x0006253c) main_cset_slider_pane_t4

0x6b3e,	// (0x0006255a) main_cset_slider_pane_t5

0x6b5c,	// (0x00062578) main_cset_slider_pane_t6

0x6b73,	// (0x0006258f) main_cset_slider_pane_t7

0x000e,

0xf761,	// (0x0006b17d) main_cset_slider_pane_t

0x6c81,	// (0x0006269d) cset_list_set_pane_ParamLimits

0x6c81,	// (0x0006269d) cset_list_set_pane

0x6c9a,	// (0x000626b6) aid_position_infowindow_above

0x6ca2,	// (0x000626be) aid_position_infowindow_below

0x6caa,	// (0x000626c6) cset_list_set_pane_g1_ParamLimits

0x6caa,	// (0x000626c6) cset_list_set_pane_g1

0x6cb6,	// (0x000626d2) cset_list_set_pane_g3_ParamLimits

0x6cb6,	// (0x000626d2) cset_list_set_pane_g3

0x0001,

0xf780,	// (0x0006b19c) cset_list_set_pane_g_ParamLimits

0xf780,	// (0x0006b19c) cset_list_set_pane_g

0x6cc5,	// (0x000626e1) cset_list_set_pane_t1_ParamLimits

0x6cc5,	// (0x000626e1) cset_list_set_pane_t1

0xad5e,	// (0x0006677a) list_highlight_pane_cp021_ParamLimits

0xad5e,	// (0x0006677a) list_highlight_pane_cp021

0xb5cf,	// (0x00066feb) cset_slider_pane_g1

0xb5e1,	// (0x00066ffd) cset_slider_pane_g2

0xb5d8,	// (0x00066ff4) cset_slider_pane_g3

0x0002,

0x084a,	// (0x0005c266) cset_slider_pane_g

0x6cda,	// (0x000626f6) aid_area_touch_cam4_zoom

0x6ce2,	// (0x000626fe) cam4_zoom_cont_pane

0x6cea,	// (0x00062706) cam4_zoom_pane_g1

0x6cf2,	// (0x0006270e) cam4_zoom_pane_g2

0x6cfa,	// (0x00062716) cam4_zoom_pane_g3

0x0002,

0xf785,	// (0x0006b1a1) cam4_zoom_pane_g

0x6d02,	// (0x0006271e) cam4_zoom_cont_pane_g1

0x6d0b,	// (0x00062727) cam4_zoom_cont_pane_g2

0x6d14,	// (0x00062730) cam4_zoom_cont_pane_g3

0x0002,

0xf78c,	// (0x0006b1a8) cam4_zoom_cont_pane_g

0x6140,	// (0x00061b5c) call4_image_pane_ParamLimits

0x6140,	// (0x00061b5c) call4_image_pane

0xd60f,	// (0x0006902b) call4_windows_conf_pane_ParamLimits

0xd64c,	// (0x00069068) popup_call4_audio_in_window_ParamLimits

0xd64c,	// (0x00069068) popup_call4_audio_in_window

0x9b69,	// (0x00065585) bg_popup_call2_act_pane_cp02

0xd695,	// (0x000690b1) call4_list_conf_pane

0xccec,	// (0x00068708) call4_image_pane_g1

0xccec,	// (0x00068708) call4_image_pane_g2

0x0001,

0x0567,	// (0x0005bf83) call4_image_pane_g

0xd91f,	// (0x0006933b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd91f,	// (0x0006933b) list_single_graphic_popup_conf4_pane

0x9b69,	// (0x00065585) list_highlight_pane_cp022

0xd932,	// (0x0006934e) list_single_graphic_popup_conf4_pane_g1

0xb1cb,	// (0x00066be7) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf793,	// (0x0006b1af) list_single_graphic_popup_conf4_pane_g

0xd93a,	// (0x00069356) list_single_graphic_popup_conf4_pane_t1

0x20f0,	// (0x0005db0c) popup_vtel_slider_window_ParamLimits

0x20f0,	// (0x0005db0c) popup_vtel_slider_window

0xd5f1,	// (0x0006900d) dialer2_ne_pane_t2_ParamLimits

0xd5f1,	// (0x0006900d) dialer2_ne_pane_t2

0x0001,

0xf694,	// (0x0006b0b0) dialer2_ne_pane_t_ParamLimits

0xf694,	// (0x0006b0b0) dialer2_ne_pane_t

0xad5e,	// (0x0006677a) bg_popup_sub_pane_cp010_ParamLimits

0xad5e,	// (0x0006677a) bg_popup_sub_pane_cp010

0x6d1d,	// (0x00062739) popup_vtel_slider_window_g1_ParamLimits

0x6d1d,	// (0x00062739) popup_vtel_slider_window_g1

0x6d29,	// (0x00062745) popup_vtel_slider_window_g2_ParamLimits

0x6d29,	// (0x00062745) popup_vtel_slider_window_g2

0x0003,

0xf798,	// (0x0006b1b4) popup_vtel_slider_window_g_ParamLimits

0xf798,	// (0x0006b1b4) popup_vtel_slider_window_g

0x6d71,	// (0x0006278d) vtel_slider_pane_ParamLimits

0x6d71,	// (0x0006278d) vtel_slider_pane

0x6d80,	// (0x0006279c) vtel_slider_pane_g1_ParamLimits

0x6d80,	// (0x0006279c) vtel_slider_pane_g1

0x6d8d,	// (0x000627a9) vtel_slider_pane_g2_ParamLimits

0x6d8d,	// (0x000627a9) vtel_slider_pane_g2

0x6d9a,	// (0x000627b6) vtel_slider_pane_g3_ParamLimits

0x6d9a,	// (0x000627b6) vtel_slider_pane_g3

0x6d80,	// (0x0006279c) vtel_slider_pane_g4_ParamLimits

0x6d80,	// (0x0006279c) vtel_slider_pane_g4

0x6da7,	// (0x000627c3) vtel_slider_pane_g5_ParamLimits

0x6da7,	// (0x000627c3) vtel_slider_pane_g5

0x0004,

0xf7a1,	// (0x0006b1bd) vtel_slider_pane_g_ParamLimits

0xf7a1,	// (0x0006b1bd) vtel_slider_pane_g

0x433c,	// (0x0005fd58) main_gallery2_pane

0x64dd,	// (0x00061ef9) aid_size_row_itut2_dropdow_list_ParamLimits

0x64dd,	// (0x00061ef9) aid_size_row_itut2_dropdow_list

0x654b,	// (0x00061f67) grid_vitu2_function_top_pane_ParamLimits

0x654b,	// (0x00061f67) grid_vitu2_function_top_pane

0x65a5,	// (0x00061fc1) popup_vitu2_dropdown_list_window_ParamLimits

0x65a5,	// (0x00061fc1) popup_vitu2_dropdown_list_window

0x65c5,	// (0x00061fe1) popup_vitu2_match_list_window

0x6dc2,	// (0x000627de) cell_vitu2_function_top_pane_ParamLimits

0x6dc2,	// (0x000627de) cell_vitu2_function_top_pane

0x6ddc,	// (0x000627f8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x6ddc,	// (0x000627f8) cell_vitu2_function_top_pane_cp01

0x6df8,	// (0x00062814) cell_vitu2_function_top_wide_pane_ParamLimits

0x6df8,	// (0x00062814) cell_vitu2_function_top_wide_pane

0x433c,	// (0x0005fd58) bg_button_pane_cp012

0x6e14,	// (0x00062830) cell_vitu2_function_top_pane_g1

0x6e28,	// (0x00062844) bg_button_pane_cp013_ParamLimits

0x6e28,	// (0x00062844) bg_button_pane_cp013

0x6e44,	// (0x00062860) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x6e44,	// (0x00062860) cell_vitu2_function_top_wide_pane_g1

0x1103,	// (0x0005cb1f) bg_popup_sub_pane_cp20

0x6e5c,	// (0x00062878) list_vitu2_match_list_pane

0xd710,	// (0x0006912c) bg_popup_sub_pane_cp20_g1

0xd718,	// (0x00069134) bg_popup_sub_pane_cp20_g2

0xac85,	// (0x000666a1) bg_popup_sub_pane_cp20_g3

0xd720,	// (0x0006913c) bg_popup_sub_pane_cp20_g4

0xac65,	// (0x00066681) bg_popup_sub_pane_cp20_g5

0xd950,	// (0x0006936c) bg_popup_sub_pane_cp20_g6

0xd730,	// (0x0006914c) bg_popup_sub_pane_cp20_g7

0xd738,	// (0x00069154) bg_popup_sub_pane_cp20_g8

0xd740,	// (0x0006915c) bg_popup_sub_pane_cp20_g9

0x0008,

0xf7ac,	// (0x0006b1c8) bg_popup_sub_pane_cp20_g

0x6e74,	// (0x00062890) list_vitu2_match_list_item_pane_ParamLimits

0x6e74,	// (0x00062890) list_vitu2_match_list_item_pane

0x6e86,	// (0x000628a2) list_vitu2_match_list_item_pane_t1

0x111d,	// (0x0005cb39) bg_popup_sub_pane_cp21

0x6edc,	// (0x000628f8) grid_vitu2_dropdown_list_pane

0x6ee4,	// (0x00062900) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x6ee4,	// (0x00062900) cell_vitu2_dropdown_list_char_pane

0x6f05,	// (0x00062921) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x6f05,	// (0x00062921) cell_vitu2_dropdown_list_ctrl_pane

0xd958,	// (0x00069374) cell_vitu2_dropdown_list_char_pane_g1

0xd961,	// (0x0006937d) cell_vitu2_dropdown_list_char_pane_g2

0xd96a,	// (0x00069386) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf7c9,	// (0x0006b1e5) cell_vitu2_dropdown_list_char_pane_g

0x6f31,	// (0x0006294d) cell_vitu2_dropdown_list_char_pane_t1

0x6f3f,	// (0x0006295b) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x6f3f,	// (0x0006295b) cell_vitu2_dropdown_list_ctrl_pane_g1

0x6f4f,	// (0x0006296b) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x6f4f,	// (0x0006296b) cell_vitu2_dropdown_list_ctrl_pane_g2

0x6f60,	// (0x0006297c) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x6f60,	// (0x0006297c) cell_vitu2_dropdown_list_ctrl_pane_g3

0x6f70,	// (0x0006298c) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x6f70,	// (0x0006298c) cell_vitu2_dropdown_list_ctrl_pane_g4

0x6319,	// (0x00061d35) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x6319,	// (0x00061d35) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf7d0,	// (0x0006b1ec) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf7d0,	// (0x0006b1ec) cell_vitu2_dropdown_list_ctrl_pane_g

0x6f8c,	// (0x000629a8) aid_size_cell_gallery2_ParamLimits

0x6f8c,	// (0x000629a8) aid_size_cell_gallery2

0x6fa6,	// (0x000629c2) grid_gallery2_pane_ParamLimits

0x6fa6,	// (0x000629c2) grid_gallery2_pane

0x6fbd,	// (0x000629d9) scroll_pane_cp029_ParamLimits

0x6fbd,	// (0x000629d9) scroll_pane_cp029

0x6fcd,	// (0x000629e9) cell_gallery2_pane_ParamLimits

0x6fcd,	// (0x000629e9) cell_gallery2_pane

0xd973,	// (0x0006938f) cell_gallery2_pane_g2

0x7022,	// (0x00062a3e) cell_gallery2_pane_g3

0xd97b,	// (0x00069397) cell_gallery2_pane_g4

0xd983,	// (0x0006939f) cell_gallery2_pane_g5

0xaa2c,	// (0x00066448) grid_highlight_pane_cp10

0x65c5,	// (0x00061fe1) popup_vitu2_match_list_window_ParamLimits

0x65d7,	// (0x00061ff3) popup_vitu2_query_window_ParamLimits

0x65d7,	// (0x00061ff3) popup_vitu2_query_window

0x111d,	// (0x0005cb39) bg_vitu2_candi_button_pane

0xd958,	// (0x00069374) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd961,	// (0x0006937d) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd96a,	// (0x00069386) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x702a,	// (0x00062a46) bg_button_pane_cp015

0x703c,	// (0x00062a58) bg_button_pane_cp016

0x704f,	// (0x00062a6b) bg_button_pane_cp017

0xc8e4,	// (0x00068300) bg_popup_sub_pane_cp22

0xd98b,	// (0x000693a7) popup_vitu2_query_window_g1

0x7094,	// (0x00062ab0) popup_vitu2_query_window_g2

0x0002,

0xf7db,	// (0x0006b1f7) popup_vitu2_query_window_g

0x70b1,	// (0x00062acd) popup_vitu2_query_window_t1_ParamLimits

0x70b1,	// (0x00062acd) popup_vitu2_query_window_t1

0x70e4,	// (0x00062b00) popup_vitu2_query_window_t2_ParamLimits

0x70e4,	// (0x00062b00) popup_vitu2_query_window_t2

0x70f6,	// (0x00062b12) popup_vitu2_query_window_t3_ParamLimits

0x70f6,	// (0x00062b12) popup_vitu2_query_window_t3

0x711e,	// (0x00062b3a) popup_vitu2_query_window_t4_ParamLimits

0x711e,	// (0x00062b3a) popup_vitu2_query_window_t4

0x713f,	// (0x00062b5b) popup_vitu2_query_window_t5_ParamLimits

0x713f,	// (0x00062b5b) popup_vitu2_query_window_t5

0x0006,

0xf7e2,	// (0x0006b1fe) popup_vitu2_query_window_t_ParamLimits

0xf7e2,	// (0x0006b1fe) popup_vitu2_query_window_t

0xd812,	// (0x0006922e) main_cset_text_pane

0x69cb,	// (0x000623e7) aid_area_touch_slider_ParamLimits

0x69e7,	// (0x00062403) cset_slider_pane_ParamLimits

0x6a11,	// (0x0006242d) main_cset_slider_pane_g1_ParamLimits

0x6a26,	// (0x00062442) main_cset_slider_pane_g2_ParamLimits

0xd833,	// (0x0006924f) main_cset_slider_pane_g3_ParamLimits

0xd833,	// (0x0006924f) main_cset_slider_pane_g3

0x6a3b,	// (0x00062457) main_cset_slider_pane_g4_ParamLimits

0x6a3b,	// (0x00062457) main_cset_slider_pane_g4

0x6a4a,	// (0x00062466) main_cset_slider_pane_g5_ParamLimits

0x6a4a,	// (0x00062466) main_cset_slider_pane_g5

0x6a58,	// (0x00062474) main_cset_slider_pane_g6_ParamLimits

0x6a58,	// (0x00062474) main_cset_slider_pane_g6

0xf73c,	// (0x0006b158) main_cset_slider_pane_g_ParamLimits

0xd863,	// (0x0006927f) main_cset_slider_pane_t1_ParamLimits

0x6aec,	// (0x00062508) main_cset_slider_pane_t2_ParamLimits

0x6b06,	// (0x00062522) main_cset_slider_pane_t3_ParamLimits

0x6b20,	// (0x0006253c) main_cset_slider_pane_t4_ParamLimits

0x6b3e,	// (0x0006255a) main_cset_slider_pane_t5_ParamLimits

0x6b5c,	// (0x00062578) main_cset_slider_pane_t6_ParamLimits

0x6b73,	// (0x0006258f) main_cset_slider_pane_t7_ParamLimits

0x6ba1,	// (0x000625bd) main_cset_slider_pane_t8_ParamLimits

0x6ba1,	// (0x000625bd) main_cset_slider_pane_t8

0x6bc9,	// (0x000625e5) main_cset_slider_pane_t9_ParamLimits

0x6bc9,	// (0x000625e5) main_cset_slider_pane_t9

0x6bf1,	// (0x0006260d) main_cset_slider_pane_t10_ParamLimits

0x6bf1,	// (0x0006260d) main_cset_slider_pane_t10

0x6c19,	// (0x00062635) main_cset_slider_pane_t11_ParamLimits

0x6c19,	// (0x00062635) main_cset_slider_pane_t11

0x6c43,	// (0x0006265f) main_cset_slider_pane_t12_ParamLimits

0x6c43,	// (0x0006265f) main_cset_slider_pane_t12

0x6c62,	// (0x0006267e) main_cset_slider_pane_t13_ParamLimits

0x6c62,	// (0x0006267e) main_cset_slider_pane_t13

0xf761,	// (0x0006b17d) main_cset_slider_pane_t_ParamLimits

0x9b69,	// (0x00065585) bg_popup_sub_pane_cp011

0xd997,	// (0x000693b3) main_cset_text_pane_g1

0xd99f,	// (0x000693bb) main_cset_text_pane_t1

0xd9ad,	// (0x000693c9) main_cset_text_pane_t2

0xd9bb,	// (0x000693d7) main_cset_text_pane_t3

0xd9c9,	// (0x000693e5) main_cset_text_pane_t4

0xd9d7,	// (0x000693f3) main_cset_text_pane_t5

0xd9e5,	// (0x00069401) main_cset_text_pane_t6

0xd9f3,	// (0x0006940f) main_cset_text_pane_t7

0x0006,

0xf7f1,	// (0x0006b20d) main_cset_text_pane_t

0x111d,	// (0x0005cb39) main_cam4_burst_pane

0x111d,	// (0x0005cb39) main_cam5_pane

0x691a,	// (0x00062336) bg_button_pane_cp019

0x6923,	// (0x0006233f) bg_button_pane_cp020

0xd83f,	// (0x0006925b) main_cset_slider_pane_g7_ParamLimits

0xd83f,	// (0x0006925b) main_cset_slider_pane_g7

0xd84b,	// (0x00069267) main_cset_slider_pane_g8_ParamLimits

0xd84b,	// (0x00069267) main_cset_slider_pane_g8

0x6a6c,	// (0x00062488) main_cset_slider_pane_g9_ParamLimits

0x6a6c,	// (0x00062488) main_cset_slider_pane_g9

0x6a78,	// (0x00062494) main_cset_slider_pane_g10_ParamLimits

0x6a78,	// (0x00062494) main_cset_slider_pane_g10

0x6a84,	// (0x000624a0) main_cset_slider_pane_g11_ParamLimits

0x6a84,	// (0x000624a0) main_cset_slider_pane_g11

0x6a90,	// (0x000624ac) main_cset_slider_pane_g12_ParamLimits

0x6a90,	// (0x000624ac) main_cset_slider_pane_g12

0x6a9c,	// (0x000624b8) main_cset_slider_pane_g13_ParamLimits

0x6a9c,	// (0x000624b8) main_cset_slider_pane_g13

0x6aaa,	// (0x000624c6) main_cset_slider_pane_g14_ParamLimits

0x6aaa,	// (0x000624c6) main_cset_slider_pane_g14

0x6ab8,	// (0x000624d4) main_cset_slider_pane_g15_ParamLimits

0x6ab8,	// (0x000624d4) main_cset_slider_pane_g15

0xd891,	// (0x000692ad) main_cset_slider_pane_t14_ParamLimits

0xd891,	// (0x000692ad) main_cset_slider_pane_t14

0xd8ca,	// (0x000692e6) main_cset_slider_pane_t15_ParamLimits

0xd8ca,	// (0x000692e6) main_cset_slider_pane_t15

0x71b6,	// (0x00062bd2) aid_cam4_burst_size_cell_ParamLimits

0x71b6,	// (0x00062bd2) aid_cam4_burst_size_cell

0x71d2,	// (0x00062bee) grid_cam4_burst_pane_ParamLimits

0x71d2,	// (0x00062bee) grid_cam4_burst_pane

0x7202,	// (0x00062c1e) linegrid_cam4_burst_pane_ParamLimits

0x7202,	// (0x00062c1e) linegrid_cam4_burst_pane

0x7222,	// (0x00062c3e) scroll_pane_cp30_ParamLimits

0x7222,	// (0x00062c3e) scroll_pane_cp30

0x722e,	// (0x00062c4a) cell_cam4_burst_pane_ParamLimits

0x722e,	// (0x00062c4a) cell_cam4_burst_pane

0xda01,	// (0x0006941d) linegrid_cam4_burst_pane_g1_ParamLimits

0xda01,	// (0x0006941d) linegrid_cam4_burst_pane_g1

0x726a,	// (0x00062c86) linegrid_cam4_burst_pane_g2_ParamLimits

0x726a,	// (0x00062c86) linegrid_cam4_burst_pane_g2

0xda0e,	// (0x0006942a) linegrid_cam4_burst_pane_g3_ParamLimits

0xda0e,	// (0x0006942a) linegrid_cam4_burst_pane_g3

0x0002,

0xf800,	// (0x0006b21c) linegrid_cam4_burst_pane_g_ParamLimits

0xf800,	// (0x0006b21c) linegrid_cam4_burst_pane_g

0x727b,	// (0x00062c97) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x727b,	// (0x00062c97) linegrid_cam4_burst_pane_g3_copy1

0xda1b,	// (0x00069437) linegrid_cam4_burst_pane_g4_ParamLimits

0xda1b,	// (0x00069437) linegrid_cam4_burst_pane_g4

0x7295,	// (0x00062cb1) linegrid_cam4_burst_pane_g5_ParamLimits

0x7295,	// (0x00062cb1) linegrid_cam4_burst_pane_g5

0x72a6,	// (0x00062cc2) linegrid_cam4_burst_pane_g6_ParamLimits

0x72a6,	// (0x00062cc2) linegrid_cam4_burst_pane_g6

0xda28,	// (0x00069444) linegrid_cam4_burst_pane_g7_ParamLimits

0xda28,	// (0x00069444) linegrid_cam4_burst_pane_g7

0x72b7,	// (0x00062cd3) cell_cam4_burst_pane_g1

0xda89,	// (0x000694a5) main_cam5_pane_t1_ParamLimits

0xda89,	// (0x000694a5) main_cam5_pane_t1

0xda9b,	// (0x000694b7) main_cam5_pane_t2_ParamLimits

0xda9b,	// (0x000694b7) main_cam5_pane_t2

0xdaad,	// (0x000694c9) main_cam5_pane_t3_ParamLimits

0xdaad,	// (0x000694c9) main_cam5_pane_t3

0xdabf,	// (0x000694db) main_cam5_pane_t4_ParamLimits

0xdabf,	// (0x000694db) main_cam5_pane_t4

0xdad7,	// (0x000694f3) main_cam5_pane_t5_ParamLimits

0xdad7,	// (0x000694f3) main_cam5_pane_t5

0xdaeb,	// (0x00069507) main_cam5_pane_t6_ParamLimits

0xdaeb,	// (0x00069507) main_cam5_pane_t6

0xdaff,	// (0x0006951b) main_cam5_pane_t7_ParamLimits

0xdaff,	// (0x0006951b) main_cam5_pane_t7

0xdb11,	// (0x0006952d) main_cam5_pane_t8_ParamLimits

0xdb11,	// (0x0006952d) main_cam5_pane_t8

0xdb2d,	// (0x00069549) main_cam5_pane_t9_ParamLimits

0xdb2d,	// (0x00069549) main_cam5_pane_t9

0xdb3f,	// (0x0006955b) main_cam5_pane_t10_ParamLimits

0xdb3f,	// (0x0006955b) main_cam5_pane_t10

0xdb51,	// (0x0006956d) main_cam5_pane_t11_ParamLimits

0xdb51,	// (0x0006956d) main_cam5_pane_t11

0xdb63,	// (0x0006957f) main_cam5_pane_t12_ParamLimits

0xdb63,	// (0x0006957f) main_cam5_pane_t12

0xdb78,	// (0x00069594) main_cam5_pane_t13_ParamLimits

0xdb78,	// (0x00069594) main_cam5_pane_t13

0x000c,

0x08d8,	// (0x0005c2f4) main_cam5_pane_t_ParamLimits

0x08d8,	// (0x0005c2f4) main_cam5_pane_t

0x10c2,	// (0x0005cade) popup_scut_keymap_window_ParamLimits

0x10c2,	// (0x0005cade) popup_scut_keymap_window

0x72ca,	// (0x00062ce6) aid_size_cell_brow_shortcut

0xaa2c,	// (0x00066448) bg_popup_window_pane_cp010

0x72d6,	// (0x00062cf2) grid_scut_pane

0x72e2,	// (0x00062cfe) cell_scut_pane_ParamLimits

0x72e2,	// (0x00062cfe) cell_scut_pane

0x72f9,	// (0x00062d15) cell_scut_pane_g1

0xdb95,	// (0x000695b1) cell_scut_pane_t1

0xdba4,	// (0x000695c0) cell_scut_pane_t2

0x7302,	// (0x00062d1e) cell_scut_pane_t3

0x0002,

0xf80c,	// (0x0006b228) cell_scut_pane_t

0x509c,	// (0x00060ab8) main_mup3_pane_g8_ParamLimits

0x509c,	// (0x00060ab8) main_mup3_pane_g8

0x64eb,	// (0x00061f07) area_vitu2_query_pane_ParamLimits

0x64eb,	// (0x00061f07) area_vitu2_query_pane

0x7062,	// (0x00062a7e) input_focus_pane_cp08

0xdbb3,	// (0x000695cf) area_vitu2_query_pane_g1

0x7310,	// (0x00062d2c) area_vitu2_query_pane_g2

0x0001,

0xf813,	// (0x0006b22f) area_vitu2_query_pane_g

0x7321,	// (0x00062d3d) area_vitu2_query_pane_t1_ParamLimits

0x7321,	// (0x00062d3d) area_vitu2_query_pane_t1

0x7335,	// (0x00062d51) area_vitu2_query_pane_t2_ParamLimits

0x7335,	// (0x00062d51) area_vitu2_query_pane_t2

0x7349,	// (0x00062d65) area_vitu2_query_pane_t3_ParamLimits

0x7349,	// (0x00062d65) area_vitu2_query_pane_t3

0x9dc4,	// (0x000657e0) area_vitu2_query_pane_t4_ParamLimits

0x9dc4,	// (0x000657e0) area_vitu2_query_pane_t4

0x9dec,	// (0x00065808) area_vitu2_query_pane_t5_ParamLimits

0x9dec,	// (0x00065808) area_vitu2_query_pane_t5

0x9e14,	// (0x00065830) area_vitu2_query_pane_t6_ParamLimits

0x9e14,	// (0x00065830) area_vitu2_query_pane_t6

0x0006,

0xf818,	// (0x0006b234) area_vitu2_query_pane_t_ParamLimits

0xf818,	// (0x0006b234) area_vitu2_query_pane_t

0x7371,	// (0x00062d8d) bg_button_pane_cp018

0x737f,	// (0x00062d9b) bg_button_pane_cp021

0x738b,	// (0x00062da7) bg_button_pane_cp022

0x739c,	// (0x00062db8) input_focus_pane_cp09

0xb2da,	// (0x00066cf6) aid_size_touch_mv_arrow_left

0xb305,	// (0x00066d21) aid_size_touch_mv_arrow_right

0x6ad0,	// (0x000624ec) main_cset_slider_pane_g16_ParamLimits

0x6ad0,	// (0x000624ec) main_cset_slider_pane_g16

0x6ade,	// (0x000624fa) main_cset_slider_pane_g17_ParamLimits

0x6ade,	// (0x000624fa) main_cset_slider_pane_g17

0x72b7,	// (0x00062cd3) cell_cam4_burst_pane_g1_ParamLimits

0x9b69,	// (0x00065585) compa_mode_pane

0x6d35,	// (0x00062751) popup_vtel_slider_window_g3_ParamLimits

0x6d35,	// (0x00062751) popup_vtel_slider_window_g3

0x6d49,	// (0x00062765) popup_vtel_slider_window_g4_ParamLimits

0x6d49,	// (0x00062765) popup_vtel_slider_window_g4

0x6d5d,	// (0x00062779) popup_vtel_slider_window_t1_ParamLimits

0x6d5d,	// (0x00062779) popup_vtel_slider_window_t1

0x111d,	// (0x0005cb39) main_cl_pane

0x43d6,	// (0x0005fdf2) popup_imed_adjust2_window_ParamLimits

0xc8e4,	// (0x00068300) bg_tb_trans_pane_cp05_ParamLimits

0xd206,	// (0x00068c22) popup_imed_adjust2_window_g1_ParamLimits

0xd215,	// (0x00068c31) popup_imed_adjust2_window_g2_ParamLimits

0xd215,	// (0x00068c31) popup_imed_adjust2_window_g2

0xd221,	// (0x00068c3d) popup_imed_adjust2_window_g3_ParamLimits

0xd221,	// (0x00068c3d) popup_imed_adjust2_window_g3

0x0002,

0x066a,	// (0x0005c086) popup_imed_adjust2_window_g_ParamLimits

0x066a,	// (0x0005c086) popup_imed_adjust2_window_g

0xd22d,	// (0x00068c49) popup_imed_adjust2_window_t1_ParamLimits

0xd245,	// (0x00068c61) slider_imed_adjust_pane_ParamLimits

0xd259,	// (0x00068c75) slider_imed_adjust_pane_g1_ParamLimits

0xd269,	// (0x00068c85) slider_imed_adjust_pane_g2_ParamLimits

0xd279,	// (0x00068c95) slider_imed_adjust_pane_g3_ParamLimits

0xd28a,	// (0x00068ca6) slider_imed_adjust_pane_g4_ParamLimits

0x0671,	// (0x0005c08d) slider_imed_adjust_pane_g_ParamLimits

0x622e,	// (0x00061c4a) aid_touch_area_cam4_ParamLimits

0x622e,	// (0x00061c4a) aid_touch_area_cam4

0x623e,	// (0x00061c5a) battery_pane_cp01

0x62c5,	// (0x00061ce1) main_camera4_pane_g6_ParamLimits

0x62c5,	// (0x00061ce1) main_camera4_pane_g6

0x62e3,	// (0x00061cff) main_camera4_pane_t2_ParamLimits

0x62e3,	// (0x00061cff) main_camera4_pane_t2

0x0001,

0xf6c8,	// (0x0006b0e4) main_camera4_pane_t_ParamLimits

0xf6c8,	// (0x0006b0e4) main_camera4_pane_t

0x6372,	// (0x00061d8e) aid_touch_area_vid4_ParamLimits

0x6372,	// (0x00061d8e) aid_touch_area_vid4

0x63b2,	// (0x00061dce) main_video4_pane_g5_ParamLimits

0x63b2,	// (0x00061dce) main_video4_pane_g5

0x63d6,	// (0x00061df2) vid4_progress_pane_ParamLimits

0x63d6,	// (0x00061df2) vid4_progress_pane

0xd857,	// (0x00069273) main_cset_slider_pane_g18_ParamLimits

0xd857,	// (0x00069273) main_cset_slider_pane_g18

0xda35,	// (0x00069451) cell_cam4_burst_pane_g2_ParamLimits

0xda35,	// (0x00069451) cell_cam4_burst_pane_g2

0x0001,

0xf807,	// (0x0006b223) cell_cam4_burst_pane_g_ParamLimits

0xf807,	// (0x0006b223) cell_cam4_burst_pane_g

0x73ad,	// (0x00062dc9) bg_cl_pane_ParamLimits

0x73ad,	// (0x00062dc9) bg_cl_pane

0x73b9,	// (0x00062dd5) cl_header_pane_ParamLimits

0x73b9,	// (0x00062dd5) cl_header_pane

0x73c5,	// (0x00062de1) cl_listscroll_pane_ParamLimits

0x73c5,	// (0x00062de1) cl_listscroll_pane

0xdbbf,	// (0x000695db) bg_cl_pane_g1

0xdbc7,	// (0x000695e3) bg_cl_pane_g2

0xdbcf,	// (0x000695eb) bg_cl_pane_g3

0xdbd7,	// (0x000695f3) bg_cl_pane_g4

0xdbdf,	// (0x000695fb) bg_cl_pane_g5

0xdbe7,	// (0x00069603) bg_cl_pane_g6

0xdbef,	// (0x0006960b) bg_cl_pane_g7

0xdbf7,	// (0x00069613) bg_cl_pane_g8

0xdbff,	// (0x0006961b) bg_cl_pane_g9

0x0008,

0x090e,	// (0x0005c32a) bg_cl_pane_g

0x73d1,	// (0x00062ded) aid_height_cl_leading_ParamLimits

0x73d1,	// (0x00062ded) aid_height_cl_leading

0x73dd,	// (0x00062df9) aid_height_cl_text_ParamLimits

0x73dd,	// (0x00062df9) aid_height_cl_text

0xd903,	// (0x0006931f) bg_cl_header_pane_ParamLimits

0xd903,	// (0x0006931f) bg_cl_header_pane

0x73f5,	// (0x00062e11) cl_header_pane_g1_ParamLimits

0x73f5,	// (0x00062e11) cl_header_pane_g1

0x7402,	// (0x00062e1e) cl_header_pane_t1_ParamLimits

0x7402,	// (0x00062e1e) cl_header_pane_t1

0xdc07,	// (0x00069623) cl_list_pane

0xd82a,	// (0x00069246) hc_scroll_pane_cp01

0xac65,	// (0x00066681) bg_cl_header_pane_g1

0xd710,	// (0x0006912c) bg_cl_header_pane_g2

0xac85,	// (0x000666a1) bg_cl_header_pane_g3

0xd720,	// (0x0006913c) bg_cl_header_pane_g4

0xd718,	// (0x00069134) bg_cl_header_pane_g5

0xd950,	// (0x0006936c) bg_cl_header_pane_g6

0xd738,	// (0x00069154) bg_cl_header_pane_g7

0xd740,	// (0x0006915c) bg_cl_header_pane_g8

0xd730,	// (0x0006914c) bg_cl_header_pane_g9

0x0008,

0xf827,	// (0x0006b243) bg_cl_header_pane_g

0x7414,	// (0x00062e30) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7414,	// (0x00062e30) hc_cl_list_double_graphic_heading_pane

0x7428,	// (0x00062e44) hc_cl_list_single_graphic_pane_ParamLimits

0x7428,	// (0x00062e44) hc_cl_list_single_graphic_pane

0x7442,	// (0x00062e5e) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7442,	// (0x00062e5e) hc_cl_list_single_graphic_pane_g1

0x744e,	// (0x00062e6a) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x744e,	// (0x00062e6a) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf83a,	// (0x0006b256) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf83a,	// (0x0006b256) hc_cl_list_single_graphic_pane_g

0x7462,	// (0x00062e7e) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7462,	// (0x00062e7e) hc_cl_list_single_graphic_pane_t1

0x7442,	// (0x00062e5e) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7442,	// (0x00062e5e) hc_cl_list_double_graphic_heading_pane_g1

0x7477,	// (0x00062e93) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7477,	// (0x00062e93) hc_cl_list_double_graphic_heading_pane_g2

0x748b,	// (0x00062ea7) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x748b,	// (0x00062ea7) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf83f,	// (0x0006b25b) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf83f,	// (0x0006b25b) hc_cl_list_double_graphic_heading_pane_g

0x749f,	// (0x00062ebb) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x749f,	// (0x00062ebb) hc_cl_list_double_graphic_heading_pane_t1

0x74b4,	// (0x00062ed0) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x74b4,	// (0x00062ed0) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf846,	// (0x0006b262) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf846,	// (0x0006b262) hc_cl_list_double_graphic_heading_pane_t

0x74d1,	// (0x00062eed) vid4_progress_pane_g1

0x74e1,	// (0x00062efd) vid4_progress_pane_g2

0x74f1,	// (0x00062f0d) vid4_progress_pane_g3

0x7503,	// (0x00062f1f) vid4_progress_pane_g4

0x0004,

0xf84b,	// (0x0006b267) vid4_progress_pane_g

0x751b,	// (0x00062f37) vid4_progress_pane_t1

0x7531,	// (0x00062f4d) vid4_progress_pane_t2

0x0002,

0xf856,	// (0x0006b272) vid4_progress_pane_t

0x755c,	// (0x00062f78) wait_bar_pane_cp07

0xcadf,	// (0x000684fb) blid_firmament_pane_ParamLimits

0xcb22,	// (0x0006853e) popup_blid_sat_info2_window_g1

0xcb46,	// (0x00068562) popup_blid_sat_info2_window_t3

0xcb54,	// (0x00068570) popup_blid_sat_info2_window_t4

0xcb62,	// (0x0006857e) popup_blid_sat_info2_window_t5

0xcb70,	// (0x0006858c) popup_blid_sat_info2_window_t6

0xcb80,	// (0x0006859c) popup_blid_sat_info2_window_t7

0xcb8e,	// (0x000685aa) popup_blid_sat_info2_window_t8

0xcb9c,	// (0x000685b8) popup_blid_sat_info2_window_t9

0xcbaa,	// (0x000685c6) popup_blid_sat_info2_window_t10

0xcc6c,	// (0x00068688) aid_firma_cardinal_ParamLimits

0xcc80,	// (0x0006869c) blid_firmament_pane_t1_ParamLimits

0xcc97,	// (0x000686b3) blid_firmament_pane_t2_ParamLimits

0xccae,	// (0x000686ca) blid_firmament_pane_t3_ParamLimits

0xccc5,	// (0x000686e1) blid_firmament_pane_t4_ParamLimits

0x055e,	// (0x0005bf7a) blid_firmament_pane_t_ParamLimits

0xccdc,	// (0x000686f8) blid_sat_info_pane_ParamLimits

0x433c,	// (0x0005fd58) main_cam_set_pane_ParamLimits

0x5851,	// (0x0006126d) aid_size_cell_colour_35_ParamLimits

0x586b,	// (0x00061287) aid_size_cell_colour_112_ParamLimits

0x5882,	// (0x0006129e) aid_size_cell_effect_ParamLimits

0xad5e,	// (0x0006677a) bg_tb_trans_pane_cp02_ParamLimits

0xafc7,	// (0x000669e3) heading_imed_pane_ParamLimits

0x589c,	// (0x000612b8) listscroll_imed_pane_ParamLimits

0xbeca,	// (0x000678e6) popup_call2_audio_first_window_g5_ParamLimits

0xbeca,	// (0x000678e6) popup_call2_audio_first_window_g5

0x5fab,	// (0x000619c7) aid_size_touch_image3_arrow_left_ParamLimits

0x5fab,	// (0x000619c7) aid_size_touch_image3_arrow_left

0x5fc1,	// (0x000619dd) aid_size_touch_image3_arrow_right_ParamLimits

0x5fc1,	// (0x000619dd) aid_size_touch_image3_arrow_right

0x7546,	// (0x00062f62) vid4_progress_pane_t3

0x5b3c,	// (0x00061558) main_hwr_training_symbol_option_pane_ParamLimits

0x5b3c,	// (0x00061558) main_hwr_training_symbol_option_pane

0xd4f3,	// (0x00068f0f) popup_hwr_training_preview_window_ParamLimits

0xd4f3,	// (0x00068f0f) popup_hwr_training_preview_window

0x5b9d,	// (0x000615b9) hwr_training_navi_pane_g5_ParamLimits

0x5b9d,	// (0x000615b9) hwr_training_navi_pane_g5

0xd6fe,	// (0x0006911a) popup_char_count_window

0x1103,	// (0x0005cb1f) bg_popup_sub_pane_cp20_ParamLimits

0x6e5c,	// (0x00062878) list_vitu2_match_list_pane_ParamLimits

0x6e68,	// (0x00062884) vitu2_page_scroll_pane_ParamLimits

0x6e68,	// (0x00062884) vitu2_page_scroll_pane

0xdc18,	// (0x00069634) list_single_hwr_training_symbol_option_pane_ParamLimits

0xdc18,	// (0x00069634) list_single_hwr_training_symbol_option_pane

0xdc2b,	// (0x00069647) list_single_hwr_training_symbol_option_pane_g1

0xdc33,	// (0x0006964f) list_single_hwr_training_symbol_option_pane_t1

0xdc41,	// (0x0006965d) bg_button_pane_cp023

0xdc4a,	// (0x00069666) bg_button_pane_cp024

0x75a5,	// (0x00062fc1) vitu2_page_scroll_pane_g1

0x75ad,	// (0x00062fc9) vitu2_page_scroll_pane_g2

0x0001,

0xf85d,	// (0x0006b279) vitu2_page_scroll_pane_g

0x75b5,	// (0x00062fd1) vitu2_page_scroll_pane_t1

0xcd15,	// (0x00068731) popup_char_count_window_g1

0xdc7d,	// (0x00069699) popup_char_count_window_g2

0xdc86,	// (0x000696a2) popup_char_count_window_g3

0x0002,

0xf862,	// (0x0006b27e) popup_char_count_window_g

0xdc8f,	// (0x000696ab) popup_char_count_window_t1

0x111d,	// (0x0005cb39) main_vded2_pane

0xd1f2,	// (0x00068c0e) aid_size_cell_imed_line

0xd1fc,	// (0x00068c18) grid_imed_line_width_pane

0x6442,	// (0x00061e5e) vid4_indicators_pane_g4

0xdc9d,	// (0x000696b9) cell_imed_line_width_pane_ParamLimits

0xdc9d,	// (0x000696b9) cell_imed_line_width_pane

0xdcb1,	// (0x000696cd) cell_imed_line_width_pane_g1

0xdc10,	// (0x0006962c) cell_imed_line_width_pane_g2

0x0001,

0xf869,	// (0x0006b285) cell_imed_line_width_pane_g

0x75c4,	// (0x00062fe0) main_vded2_pane_g1_ParamLimits

0x75c4,	// (0x00062fe0) main_vded2_pane_g1

0x75d1,	// (0x00062fed) main_vded2_pane_g2_ParamLimits

0x75d1,	// (0x00062fed) main_vded2_pane_g2

0x0001,

0xf86e,	// (0x0006b28a) main_vded2_pane_g_ParamLimits

0xf86e,	// (0x0006b28a) main_vded2_pane_g

0x75df,	// (0x00062ffb) vded2_slider_pane_ParamLimits

0x75df,	// (0x00062ffb) vded2_slider_pane

0x75ec,	// (0x00063008) aid_size_touch_vded2_end

0x75f6,	// (0x00063012) aid_size_touch_vded2_playhead

0xdcba,	// (0x000696d6) aid_size_touch_vded2_start

0xdcc2,	// (0x000696de) vded2_slider_bg_pane

0xdccb,	// (0x000696e7) vded2_slider_pane_g1

0xdcde,	// (0x000696fa) vded2_slider_pane_g2

0x75fe,	// (0x0006301a) vded2_slider_pane_g3

0x0002,

0xf873,	// (0x0006b28f) vded2_slider_pane_g

0xdce6,	// (0x00069702) vded2_slider_bg_pane_g1

0xdcef,	// (0x0006970b) vded2_slider_bg_pane_g2

0xdcf8,	// (0x00069714) vded2_slider_bg_pane_g3

0x0002,

0xf87a,	// (0x0006b296) vded2_slider_bg_pane_g

0x3c1f,	// (0x0005f63b) aid_postcard_touch_down_pane_ParamLimits

0x3c1f,	// (0x0005f63b) aid_postcard_touch_down_pane

0x3c2f,	// (0x0005f64b) aid_postcard_touch_up_pane_ParamLimits

0x3c2f,	// (0x0005f64b) aid_postcard_touch_up_pane

0x111d,	// (0x0005cb39) main_blid2_pane

0x4365,	// (0x0005fd81) popup_blid2_search_window

0x9b69,	// (0x00065585) blid2_gps_pane

0x9b69,	// (0x00065585) blid2_navig_pane

0x9b69,	// (0x00065585) blid2_search_pane

0x9b69,	// (0x00065585) blid2_tripm_pane

0x7607,	// (0x00063023) blid2_search_pane_g1_ParamLimits

0x7607,	// (0x00063023) blid2_search_pane_g1

0x7617,	// (0x00063033) blid2_search_pane_t1_ParamLimits

0x7617,	// (0x00063033) blid2_search_pane_t1

0x7629,	// (0x00063045) aid_size_cell_blid2_gps_ParamLimits

0x7629,	// (0x00063045) aid_size_cell_blid2_gps

0x7639,	// (0x00063055) blid2_gps_pane_g1_ParamLimits

0x7639,	// (0x00063055) blid2_gps_pane_g1

0x7645,	// (0x00063061) grid_blid2_satellite_pane_ParamLimits

0x7645,	// (0x00063061) grid_blid2_satellite_pane

0x7655,	// (0x00063071) blid2_navig_pane_g1_ParamLimits

0x7655,	// (0x00063071) blid2_navig_pane_g1

0x7661,	// (0x0006307d) blid2_navig_pane_t1_ParamLimits

0x7661,	// (0x0006307d) blid2_navig_pane_t1

0x7673,	// (0x0006308f) blid2_navig_pane_t2_ParamLimits

0x7673,	// (0x0006308f) blid2_navig_pane_t2

0x0001,

0xf881,	// (0x0006b29d) blid2_navig_pane_t_ParamLimits

0xf881,	// (0x0006b29d) blid2_navig_pane_t

0x7685,	// (0x000630a1) blid2_navig_ring_pane_ParamLimits

0x7685,	// (0x000630a1) blid2_navig_ring_pane

0x7695,	// (0x000630b1) blid2_speed_pane_ParamLimits

0x7695,	// (0x000630b1) blid2_speed_pane

0x76a1,	// (0x000630bd) blid2_tripm_pane_g1_ParamLimits

0x76a1,	// (0x000630bd) blid2_tripm_pane_g1

0x76b1,	// (0x000630cd) blid2_tripm_pane_g2_ParamLimits

0x76b1,	// (0x000630cd) blid2_tripm_pane_g2

0x76bd,	// (0x000630d9) blid2_tripm_pane_g3_ParamLimits

0x76bd,	// (0x000630d9) blid2_tripm_pane_g3

0x76c9,	// (0x000630e5) blid2_tripm_pane_g4_ParamLimits

0x76c9,	// (0x000630e5) blid2_tripm_pane_g4

0x76d5,	// (0x000630f1) blid2_tripm_pane_g5_ParamLimits

0x76d5,	// (0x000630f1) blid2_tripm_pane_g5

0x0005,

0xf886,	// (0x0006b2a2) blid2_tripm_pane_g_ParamLimits

0xf886,	// (0x0006b2a2) blid2_tripm_pane_g

0x76f1,	// (0x0006310d) blid2_tripm_pane_t1_ParamLimits

0x76f1,	// (0x0006310d) blid2_tripm_pane_t1

0x7705,	// (0x00063121) blid2_tripm_pane_t2_ParamLimits

0x7705,	// (0x00063121) blid2_tripm_pane_t2

0x7717,	// (0x00063133) blid2_tripm_pane_t3_ParamLimits

0x7717,	// (0x00063133) blid2_tripm_pane_t3

0x0003,

0xf893,	// (0x0006b2af) blid2_tripm_pane_t_ParamLimits

0xf893,	// (0x0006b2af) blid2_tripm_pane_t

0x7749,	// (0x00063165) cell_blid2_satellite_pane_ParamLimits

0x7749,	// (0x00063165) cell_blid2_satellite_pane

0x7763,	// (0x0006317f) cell_blid2_satellite_pane_g1

0xdd01,	// (0x0006971d) cell_blid2_satellite_pane_t1

0xccec,	// (0x00068708) blid2_speed_pane_g1

0xdd0f,	// (0x0006972b) blid2_speed_pane_t1

0xdd1d,	// (0x00069739) blid2_speed_pane_t2

0x0001,

0xf89c,	// (0x0006b2b8) blid2_speed_pane_t

0xccec,	// (0x00068708) blid2_navig_ring_pane_g1

0x776c,	// (0x00063188) blid2_navig_ring_pane_g2

0x7774,	// (0x00063190) blid2_navig_ring_pane_g3

0x777c,	// (0x00063198) blid2_navig_ring_pane_g4

0x7784,	// (0x000631a0) blid2_navig_ring_pane_g5

0x0004,

0xf8a1,	// (0x0006b2bd) blid2_navig_ring_pane_g

0x9b69,	// (0x00065585) bg_popup_window_pane_cp011

0xdd2b,	// (0x00069747) popup_blid2_search_window_g1

0xdd33,	// (0x0006974f) popup_blid2_search_window_t1

0xdd41,	// (0x0006975d) popup_blid2_search_window_t2

0x0001,

0xf8ac,	// (0x0006b2c8) popup_blid2_search_window_t

0xab74,	// (0x00066590) main_browser_pane_g1

0xa855,	// (0x00066271) main_browser_pane_ParamLimits

0x433c,	// (0x0005fd58) bg_button_pane_cp011_ParamLimits

0x66ed,	// (0x00062109) cell_vitu2_function_pane_g1_ParamLimits

0xc8e4,	// (0x00068300) bg_popup_sub_pane_cp22_ParamLimits

0x7062,	// (0x00062a7e) input_focus_pane_cp08_ParamLimits

0x7079,	// (0x00062a95) popup_vitu2_query_button_pane_ParamLimits

0x7079,	// (0x00062a95) popup_vitu2_query_button_pane

0x708a,	// (0x00062aa6) popup_vitu2_query_input_button_pane

0xd98b,	// (0x000693a7) popup_vitu2_query_window_g1_ParamLimits

0x7094,	// (0x00062ab0) popup_vitu2_query_window_g2_ParamLimits

0xf7db,	// (0x0006b1f7) popup_vitu2_query_window_g_ParamLimits

0x9b69,	// (0x00065585) bg_button_pane_cp026

0x778c,	// (0x000631a8) popup_vitu2_query_input_button_pane_g1

0x9b69,	// (0x00065585) bg_button_pane_cp025

0xdd4f,	// (0x0006976b) popup_vitu2_query_button_pane_t1

0x4dbd,	// (0x000607d9) main_mp3_pane_t6

0x4dcd,	// (0x000607e9) popup_slider_window_cp01

0x6327,	// (0x00061d43) cam4_battery_pane

0x6401,	// (0x00061e1d) cam4_battery_pane_cp02

0x74c9,	// (0x00062ee5) cam4_battery_pane_cp01

0x74c9,	// (0x00062ee5) cam4_battery_pane_cp03

0xdcd4,	// (0x000696f0) cam4_battery_pane_g1

0xccec,	// (0x00068708) cam4_battery_pane_g2

0x0001,

0xf8b1,	// (0x0006b2cd) cam4_battery_pane_g

0xcbb8,	// (0x000685d4) popup_blid_sat_info2_window_t11

0xb2da,	// (0x00066cf6) aid_size_touch_mv_arrow_left_ParamLimits

0xb305,	// (0x00066d21) aid_size_touch_mv_arrow_right_ParamLimits

0xb363,	// (0x00066d7f) navi_pane_g1_ParamLimits

0xb36f,	// (0x00066d8b) navi_pane_g2_ParamLimits

0xb39d,	// (0x00066db9) navi_pane_g3_ParamLimits

0x025d,	// (0x0005bc79) navi_pane_g_ParamLimits

0x3635,	// (0x0005f051) navi_pane_mv_t1_ParamLimits

0x58a8,	// (0x000612c4) grid_imed_effect_pane_ParamLimits

0x1fb0,	// (0x0005d9cc) aid_placing_vt_slider_lsc

0xaac3,	// (0x000664df) aid_placing_vt_slider_prt

0xad5e,	// (0x0006677a) bg_tb_trans_pane_cp01_ParamLimits

0xce5a,	// (0x00068876) popup_image_details_window_g1_ParamLimits

0xce6d,	// (0x00068889) popup_image_details_window_g2_ParamLimits

0xce82,	// (0x0006889e) popup_image_details_window_g3_ParamLimits

0xce82,	// (0x0006889e) popup_image_details_window_g3

0x05a3,	// (0x0005bfbf) popup_image_details_window_g_ParamLimits

0xce96,	// (0x000688b2) popup_image_details_window_t1_ParamLimits

0xcea8,	// (0x000688c4) popup_image_details_window_t2_ParamLimits

0xcec1,	// (0x000688dd) popup_image_details_window_t3_ParamLimits

0xced5,	// (0x000688f1) popup_image_details_window_t4_ParamLimits

0xcef0,	// (0x0006890c) popup_image_details_window_t5_ParamLimits

0xf56b,	// (0x0006af87) popup_image_details_window_t_ParamLimits

0x73e9,	// (0x00062e05) cl_header_name_pane_ParamLimits

0x73e9,	// (0x00062e05) cl_header_name_pane

0x7794,	// (0x000631b0) cl_header_name_pane_t1_ParamLimits

0x7794,	// (0x000631b0) cl_header_name_pane_t1

0x77ab,	// (0x000631c7) cl_header_name_pane_t2_ParamLimits

0x77ab,	// (0x000631c7) cl_header_name_pane_t2

0x77d5,	// (0x000631f1) cl_header_name_pane_t3_ParamLimits

0x77d5,	// (0x000631f1) cl_header_name_pane_t3

0x0002,

0xf8b6,	// (0x0006b2d2) cl_header_name_pane_t_ParamLimits

0xf8b6,	// (0x0006b2d2) cl_header_name_pane_t

0xb42c,	// (0x00066e48) navi_pane_mv_g2_ParamLimits

0xd6d8,	// (0x000690f4) field_vitu2_entry_pane_g1_ParamLimits

0xd6e4,	// (0x00069100) field_vitu2_entry_pane_g2_ParamLimits

0xd6f0,	// (0x0006910c) field_vitu2_entry_pane_g3_ParamLimits

0xd6f0,	// (0x0006910c) field_vitu2_entry_pane_g3

0x07a6,	// (0x0005c1c2) field_vitu2_entry_pane_g_ParamLimits

0x6681,	// (0x0006209d) cell_vitu2_itu_pane_g1_ParamLimits

0x6693,	// (0x000620af) cell_vitu2_itu_pane_g2_ParamLimits

0x6693,	// (0x000620af) cell_vitu2_itu_pane_g2

0x0001,

0xf6ff,	// (0x0006b11b) cell_vitu2_itu_pane_g_ParamLimits

0xf6ff,	// (0x0006b11b) cell_vitu2_itu_pane_g

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp05_ParamLimits

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp05

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp03

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp04

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp10_ParamLimits

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp10

0x738b,	// (0x00062da7) bg_vkb2_func_pane_cp08

0x7371,	// (0x00062d8d) bg_vkb2_func_pane_cp06

0x737f,	// (0x00062d9b) bg_vkb2_func_pane_cp07

0xdc53,	// (0x0006966f) bg_vkb2_func_pane_cp11_ParamLimits

0xdc53,	// (0x0006966f) bg_vkb2_func_pane_cp11

0xdc68,	// (0x00069684) bg_vkb2_func_pane_cp12_ParamLimits

0xdc68,	// (0x00069684) bg_vkb2_func_pane_cp12

0x9b69,	// (0x00065585) bg_vkb2_func_pane_cp09

0xd710,	// (0x0006912c) bg_vkb2_func_pane_g1

0xac85,	// (0x000666a1) bg_vkb2_func_pane_g2

0xd718,	// (0x00069134) bg_vkb2_func_pane_g3

0xd720,	// (0x0006913c) bg_vkb2_func_pane_g4

0xd950,	// (0x0006936c) bg_vkb2_func_pane_g5

0xd738,	// (0x00069154) bg_vkb2_func_pane_g6

0xd740,	// (0x0006915c) bg_vkb2_func_pane_g7

0xd730,	// (0x0006914c) bg_vkb2_func_pane_g8

0xac65,	// (0x00066681) bg_vkb2_func_pane_g9

0x0008,

0xf8bd,	// (0x0006b2d9) bg_vkb2_func_pane_g

0x76e3,	// (0x000630ff) blid2_tripm_pane_g6_ParamLimits

0x76e3,	// (0x000630ff) blid2_tripm_pane_g6

0xd5ab,	// (0x00068fc7) mp4_progress_pane_g1

0x773d,	// (0x00063159) blid2_tripm_values_pane_ParamLimits

0x773d,	// (0x00063159) blid2_tripm_values_pane

0x77fa,	// (0x00063216) blid2_tripm_values_pane_t1

0x7808,	// (0x00063224) blid2_tripm_values_pane_t2

0x7816,	// (0x00063232) blid2_tripm_values_pane_t3

0x7824,	// (0x00063240) blid2_tripm_values_pane_t4

0x7832,	// (0x0006324e) blid2_tripm_values_pane_t5

0x7840,	// (0x0006325c) blid2_tripm_values_pane_t6

0x784e,	// (0x0006326a) blid2_tripm_values_pane_t7

0x785c,	// (0x00063278) blid2_tripm_values_pane_t8

0x786a,	// (0x00063286) blid2_tripm_values_pane_t9

0x0008,

0xf8d0,	// (0x0006b2ec) blid2_tripm_values_pane_t

0x1ff0,	// (0x0005da0c) call_video_pane_t1_ParamLimits

0x2011,	// (0x0005da2d) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0006ac8a) call_video_pane_t_ParamLimits

0x3b69,	// (0x0005f585) msg_header_pane_g1_ParamLimits

0xb614,	// (0x00067030) msg_header_pane_g2_ParamLimits

0xb614,	// (0x00067030) msg_header_pane_g2

0x0001,

0xf418,	// (0x0006ae34) msg_header_pane_g_ParamLimits

0xf418,	// (0x0006ae34) msg_header_pane_g

0xa855,	// (0x00066271) main_clock2_pane_ParamLimits

0x563c,	// (0x00061058) grid_clock2_toolbar_pane_ParamLimits

0x563c,	// (0x00061058) grid_clock2_toolbar_pane

0x563c,	// (0x00061058) listscroll_clock2_pane_ParamLimits

0x563c,	// (0x00061058) listscroll_clock2_pane

0x56e6,	// (0x00061102) main_clock2_pane_t3_ParamLimits

0x56e6,	// (0x00061102) main_clock2_pane_t3

0x56f8,	// (0x00061114) main_clock2_pane_t4_ParamLimits

0x56f8,	// (0x00061114) main_clock2_pane_t4

0xdd5d,	// (0x00069779) cell_clock2_toolbar_pane

0xdd65,	// (0x00069781) cell_clock2_toolbar_pane_cp01

0xdd65,	// (0x00069781) cell_clock2_toolbar_pane_cp02

0xdd6d,	// (0x00069789) cell_clock2_toolbar_pane_cp03

0xdd75,	// (0x00069791) list_clock2_pane

0xb25f,	// (0x00066c7b) scroll_pane_cp10

0xdd7d,	// (0x00069799) list_single_clock2_pane_ParamLimits

0xdd7d,	// (0x00069799) list_single_clock2_pane

0xaa2c,	// (0x00066448) list_highlight_pane_cp08

0xdd8a,	// (0x000697a6) list_single_clock2_pane_t1

0xdd98,	// (0x000697b4) list_single_clock2_pane_t2

0x0001,

0x09dd,	// (0x0005c3f9) list_single_clock2_pane_t

0x9b69,	// (0x00065585) bg_button_pane_cp10

0xdda6,	// (0x000697c2) cell_clock2_toolbar_pane_g1

0x3b8d,	// (0x0005f5a9) aid_main_viewer_pane_g1_ParamLimits

0x3b8d,	// (0x0005f5a9) aid_main_viewer_pane_g1

0x3b99,	// (0x0005f5b5) aid_main_viewer_pane_g2_ParamLimits

0x3b99,	// (0x0005f5b5) aid_main_viewer_pane_g2

0x3ba5,	// (0x0005f5c1) aid_main_viewer_pane_g3_ParamLimits

0x3ba5,	// (0x0005f5c1) aid_main_viewer_pane_g3

0x3bb6,	// (0x0005f5d2) aid_main_viewer_pane_g4_ParamLimits

0x3bb6,	// (0x0005f5d2) aid_main_viewer_pane_g4

0x0003,

0xf429,	// (0x0006ae45) aid_main_viewer_pane_g_ParamLimits

0xf429,	// (0x0006ae45) aid_main_viewer_pane_g

0x432f,	// (0x0005fd4b) main_calc_pane_ParamLimits

0x434a,	// (0x0005fd66) main_dialer2_pane_ParamLimits

0x111d,	// (0x0005cb39) main_cam6_pane

0x111d,	// (0x0005cb39) main_vid6_pane

0x5648,	// (0x00061064) listscroll_gen_pane_cp06_ParamLimits

0x5648,	// (0x00061064) listscroll_gen_pane_cp06

0x570a,	// (0x00061126) main_clock2_pane_t5_ParamLimits

0x570a,	// (0x00061126) main_clock2_pane_t5

0x5753,	// (0x0006116f) aid_call2_pane_cp10_ParamLimits

0x5765,	// (0x00061181) aid_call_pane_cp10_ParamLimits

0xb2ce,	// (0x00066cea) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb2ce,	// (0x00066cea) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5777,	// (0x00061193) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5777,	// (0x00061193) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb2ce,	// (0x00066cea) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf60f,	// (0x0006b02b) popup_clock_analogue_window_cp10_g_ParamLimits

0x5789,	// (0x000611a5) popup_clock_analogue_window_cp10_t1_ParamLimits

0x5f58,	// (0x00061974) cell_dialer2_keypad_pane_g2_ParamLimits

0x5f58,	// (0x00061974) cell_dialer2_keypad_pane_g2

0x0001,

0xf699,	// (0x0006b0b5) cell_dialer2_keypad_pane_g_ParamLimits

0xf699,	// (0x0006b0b5) cell_dialer2_keypad_pane_g

0x5f74,	// (0x00061990) cell_dialer2_keypad_pane_t1

0x69b8,	// (0x000623d4) main_cset_text2_pane_ParamLimits

0x69b8,	// (0x000623d4) main_cset_text2_pane

0xdbb3,	// (0x000695cf) area_vitu2_query_pane_g1_ParamLimits

0x7310,	// (0x00062d2c) area_vitu2_query_pane_g2_ParamLimits

0xf813,	// (0x0006b22f) area_vitu2_query_pane_g_ParamLimits

0x9e3c,	// (0x00065858) area_vitu2_query_pane_t7_ParamLimits

0x9e3c,	// (0x00065858) area_vitu2_query_pane_t7

0x7371,	// (0x00062d8d) bg_button_pane_cp018_ParamLimits

0x737f,	// (0x00062d9b) bg_button_pane_cp021_ParamLimits

0x738b,	// (0x00062da7) bg_button_pane_cp022_ParamLimits

0x738b,	// (0x00062da7) bg_vkb2_func_pane_cp08_ParamLimits

0x7371,	// (0x00062d8d) bg_vkb2_func_pane_cp06_ParamLimits

0x737f,	// (0x00062d9b) bg_vkb2_func_pane_cp07_ParamLimits

0x739c,	// (0x00062db8) input_focus_pane_cp09_ParamLimits

0x7878,	// (0x00063294) cam6_autofocus_pane_ParamLimits

0x7878,	// (0x00063294) cam6_autofocus_pane

0x789a,	// (0x000632b6) cam6_image_uncrop_pane_ParamLimits

0x789a,	// (0x000632b6) cam6_image_uncrop_pane

0x78c7,	// (0x000632e3) cam6_indi_pane_ParamLimits

0x78c7,	// (0x000632e3) cam6_indi_pane

0x78e1,	// (0x000632fd) cam6_mode_pane_ParamLimits

0x78e1,	// (0x000632fd) cam6_mode_pane

0x78f5,	// (0x00063311) cam6_timer_pane_ParamLimits

0x78f5,	// (0x00063311) cam6_timer_pane

0x7906,	// (0x00063322) cam6_zoom_pane_ParamLimits

0x7906,	// (0x00063322) cam6_zoom_pane

0x791e,	// (0x0006333a) cam6_mode_pane_g1_ParamLimits

0x791e,	// (0x0006333a) cam6_mode_pane_g1

0x792a,	// (0x00063346) cam6_mode_pane_g2_ParamLimits

0x792a,	// (0x00063346) cam6_mode_pane_g2

0x7936,	// (0x00063352) cam6_mode_pane_g3_ParamLimits

0x7936,	// (0x00063352) cam6_mode_pane_g3

0x7942,	// (0x0006335e) cam6_mode_pane_g4_ParamLimits

0x7942,	// (0x0006335e) cam6_mode_pane_g4

0x0003,

0xf8e3,	// (0x0006b2ff) cam6_mode_pane_g_ParamLimits

0xf8e3,	// (0x0006b2ff) cam6_mode_pane_g

0xd911,	// (0x0006932d) bg_tb_trans_pane_cp08_ParamLimits

0xd911,	// (0x0006932d) bg_tb_trans_pane_cp08

0xddae,	// (0x000697ca) cam6_battery_pane_ParamLimits

0xddae,	// (0x000697ca) cam6_battery_pane

0xddc4,	// (0x000697e0) cam6_indi_pane_g1_ParamLimits

0xddc4,	// (0x000697e0) cam6_indi_pane_g1

0xddd6,	// (0x000697f2) cam6_indi_pane_g2_ParamLimits

0xddd6,	// (0x000697f2) cam6_indi_pane_g2

0xdde8,	// (0x00069804) cam6_indi_pane_g3_ParamLimits

0xdde8,	// (0x00069804) cam6_indi_pane_g3

0x0002,

0x09eb,	// (0x0005c407) cam6_indi_pane_g_ParamLimits

0x09eb,	// (0x0005c407) cam6_indi_pane_g

0xddfa,	// (0x00069816) cam6_indi_pane_t1_ParamLimits

0xddfa,	// (0x00069816) cam6_indi_pane_t1

0x647d,	// (0x00061e99) cam6_autofocus_pane_g1

0x6475,	// (0x00061e91) cam6_autofocus_pane_g2

0x648d,	// (0x00061ea9) cam6_autofocus_pane_g3

0x6485,	// (0x00061ea1) cam6_autofocus_pane_g4

0x0003,

0xf8ec,	// (0x0006b308) cam6_autofocus_pane_g

0xde20,	// (0x0006983c) cam6_timer_pane_g1

0xde28,	// (0x00069844) cam6_timer_pane_t1

0xde36,	// (0x00069852) cam6_zoom_cont_pane

0xde3e,	// (0x0006985a) cam6_zoom_pane_g1

0xde46,	// (0x00069862) cam6_zoom_pane_g2

0x794e,	// (0x0006336a) cam6_zoom_pane_g3

0x0002,

0xf8f5,	// (0x0006b311) cam6_zoom_pane_g

0xccec,	// (0x00068708) cam6_battery_pane_g1

0xccec,	// (0x00068708) cam6_battery_pane_g2

0x0001,

0x0567,	// (0x0005bf83) cam6_battery_pane_g

0xde4e,	// (0x0006986a) cam6_zoom_cont_pane_g1

0xde57,	// (0x00069873) cam6_zoom_cont_pane_g2

0xde60,	// (0x0006987c) cam6_zoom_cont_pane_g3

0x0002,

0x0a02,	// (0x0005c41e) cam6_zoom_cont_pane_g

0x796b,	// (0x00063387) cam6_mode_pane_cp_ParamLimits

0x796b,	// (0x00063387) cam6_mode_pane_cp

0x797f,	// (0x0006339b) cam6_zoom_pane_cp_ParamLimits

0x797f,	// (0x0006339b) cam6_zoom_pane_cp

0x7997,	// (0x000633b3) vid6_image_uncrop_cif_pane_ParamLimits

0x7997,	// (0x000633b3) vid6_image_uncrop_cif_pane

0x79c3,	// (0x000633df) vid6_image_uncrop_nhd_pane_ParamLimits

0x79c3,	// (0x000633df) vid6_image_uncrop_nhd_pane

0x79e0,	// (0x000633fc) vid6_image_uncrop_vga_pane_ParamLimits

0x79e0,	// (0x000633fc) vid6_image_uncrop_vga_pane

0x79ff,	// (0x0006341b) vid6_image_uncrop_wvga_pane_ParamLimits

0x79ff,	// (0x0006341b) vid6_image_uncrop_wvga_pane

0x7a1c,	// (0x00063438) vid6_indi_pane_ParamLimits

0x7a1c,	// (0x00063438) vid6_indi_pane

0xd911,	// (0x0006932d) bg_tb_trans_pane_cp09_ParamLimits

0xd911,	// (0x0006932d) bg_tb_trans_pane_cp09

0xde78,	// (0x00069894) cam6_battery_pane_cp_ParamLimits

0xde78,	// (0x00069894) cam6_battery_pane_cp

0xde84,	// (0x000698a0) vid6_indi_pane_g1_ParamLimits

0xde84,	// (0x000698a0) vid6_indi_pane_g1

0xde96,	// (0x000698b2) vid6_indi_pane_g2_ParamLimits

0xde96,	// (0x000698b2) vid6_indi_pane_g2

0xdea8,	// (0x000698c4) vid6_indi_pane_g3_ParamLimits

0xdea8,	// (0x000698c4) vid6_indi_pane_g3

0xdebd,	// (0x000698d9) vid6_indi_pane_g4_ParamLimits

0xdebd,	// (0x000698d9) vid6_indi_pane_g4

0xded2,	// (0x000698ee) vid6_indi_pane_g5_ParamLimits

0xded2,	// (0x000698ee) vid6_indi_pane_g5

0x0004,

0x0a09,	// (0x0005c425) vid6_indi_pane_g_ParamLimits

0x0a09,	// (0x0005c425) vid6_indi_pane_g

0xdeec,	// (0x00069908) vid6_indi_pane_t1_ParamLimits

0xdeec,	// (0x00069908) vid6_indi_pane_t1

0xdf02,	// (0x0006991e) vid6_indi_pane_t2_ParamLimits

0xdf02,	// (0x0006991e) vid6_indi_pane_t2

0xdf2a,	// (0x00069946) vid6_indi_pane_t3_ParamLimits

0xdf2a,	// (0x00069946) vid6_indi_pane_t3

0xdf52,	// (0x0006996e) vid6_indi_pane_t4_ParamLimits

0xdf52,	// (0x0006996e) vid6_indi_pane_t4

0x0003,

0x0a14,	// (0x0005c430) vid6_indi_pane_t_ParamLimits

0x0a14,	// (0x0005c430) vid6_indi_pane_t

0xdf76,	// (0x00069992) wait_bar_pane_cp08

0x7a3f,	// (0x0006345b) main_cset_text2_pane_t1_ParamLimits

0x7a3f,	// (0x0006345b) main_cset_text2_pane_t1

0x7956,	// (0x00063372) listscroll_gen_pane_cp06_t1_ParamLimits

0x7956,	// (0x00063372) listscroll_gen_pane_cp06_t1

0x111d,	// (0x0005cb39) main_cam6_set_pane

0x6319,	// (0x00061d35) bg_tb_trans_pane_cp06_ParamLimits

0x632f,	// (0x00061d4b) cam4_indicators_pane_g1_ParamLimits

0x6340,	// (0x00061d5c) cam4_indicators_pane_g2_ParamLimits

0xf6d6,	// (0x0006b0f2) cam4_indicators_pane_g_ParamLimits

0x6358,	// (0x00061d74) cam4_indicators_pane_t1_ParamLimits

0x433c,	// (0x0005fd58) bg_tb_trans_pane_cp07_ParamLimits

0x6409,	// (0x00061e25) vid4_indicators_pane_g1_ParamLimits

0x641d,	// (0x00061e39) vid4_indicators_pane_g2_ParamLimits

0x6431,	// (0x00061e4d) vid4_indicators_pane_g3_ParamLimits

0x6442,	// (0x00061e5e) vid4_indicators_pane_g4_ParamLimits

0xf6e8,	// (0x0006b104) vid4_indicators_pane_g_ParamLimits

0x645e,	// (0x00061e7a) vid4_indicators_pane_t1_ParamLimits

0x74d1,	// (0x00062eed) vid4_progress_pane_g1_ParamLimits

0x74e1,	// (0x00062efd) vid4_progress_pane_g2_ParamLimits

0x74f1,	// (0x00062f0d) vid4_progress_pane_g3_ParamLimits

0x7503,	// (0x00062f1f) vid4_progress_pane_g4_ParamLimits

0xf84b,	// (0x0006b267) vid4_progress_pane_g_ParamLimits

0x751b,	// (0x00062f37) vid4_progress_pane_t1_ParamLimits

0x7531,	// (0x00062f4d) vid4_progress_pane_t2_ParamLimits

0x7546,	// (0x00062f62) vid4_progress_pane_t3_ParamLimits

0xf856,	// (0x0006b272) vid4_progress_pane_t_ParamLimits

0x755c,	// (0x00062f78) wait_bar_pane_cp07_ParamLimits

0x7a76,	// (0x00063492) main_cam6_set_pane_g2_ParamLimits

0x7a76,	// (0x00063492) main_cam6_set_pane_g2

0x7a82,	// (0x0006349e) main_cset6_listscroll_pane_ParamLimits

0x7a82,	// (0x0006349e) main_cset6_listscroll_pane

0x7aad,	// (0x000634c9) main_cset6_slider_pane_ParamLimits

0x7aad,	// (0x000634c9) main_cset6_slider_pane

0x7ab9,	// (0x000634d5) main_cset6_text2_pane_ParamLimits

0x7ab9,	// (0x000634d5) main_cset6_text2_pane

0xdf85,	// (0x000699a1) main_cset6_text_pane

0xdf8d,	// (0x000699a9) main_cset_list_pane_copy1_ParamLimits

0xdf8d,	// (0x000699a9) main_cset_list_pane_copy1

0xdf9d,	// (0x000699b9) scroll_pane_cp028_copy1

0x7acc,	// (0x000634e8) cset_list_set_pane_copy1

0x7ae2,	// (0x000634fe) aid_position_infowindow_above_copy1

0x7aea,	// (0x00063506) aid_position_infowindow_below_copy1

0x7af2,	// (0x0006350e) cset_list_set_pane_g1_copy1

0x6cb6,	// (0x000626d2) cset_list_set_pane_g3_copy1_ParamLimits

0x6cb6,	// (0x000626d2) cset_list_set_pane_g3_copy1

0x6cc5,	// (0x000626e1) cset_list_set_pane_t1_copy1_ParamLimits

0x6cc5,	// (0x000626e1) cset_list_set_pane_t1_copy1

0xad5e,	// (0x0006677a) list_highlight_pane_cp021_copy1_ParamLimits

0xad5e,	// (0x0006677a) list_highlight_pane_cp021_copy1

0xdfa6,	// (0x000699c2) cset6_slider_pane_ParamLimits

0xdfa6,	// (0x000699c2) cset6_slider_pane

0xdfd2,	// (0x000699ee) main_cset6_slider_pane_g1_ParamLimits

0xdfd2,	// (0x000699ee) main_cset6_slider_pane_g1

0x7afa,	// (0x00063516) main_cset6_slider_pane_g2_ParamLimits

0x7afa,	// (0x00063516) main_cset6_slider_pane_g2

0xdffa,	// (0x00069a16) main_cset6_slider_pane_g3_ParamLimits

0xdffa,	// (0x00069a16) main_cset6_slider_pane_g3

0x7b22,	// (0x0006353e) main_cset6_slider_pane_g4_ParamLimits

0x7b22,	// (0x0006353e) main_cset6_slider_pane_g4

0x7b2e,	// (0x0006354a) main_cset6_slider_pane_g5_ParamLimits

0x7b2e,	// (0x0006354a) main_cset6_slider_pane_g5

0xd83f,	// (0x0006925b) main_cset6_slider_pane_g7_ParamLimits

0xd83f,	// (0x0006925b) main_cset6_slider_pane_g7

0xd84b,	// (0x00069267) main_cset6_slider_pane_g8_ParamLimits

0xd84b,	// (0x00069267) main_cset6_slider_pane_g8

0x7b3c,	// (0x00063558) main_cset6_slider_pane_g9_ParamLimits

0x7b3c,	// (0x00063558) main_cset6_slider_pane_g9

0x7b48,	// (0x00063564) main_cset6_slider_pane_g10_ParamLimits

0x7b48,	// (0x00063564) main_cset6_slider_pane_g10

0x7b54,	// (0x00063570) main_cset6_slider_pane_g11_ParamLimits

0x7b54,	// (0x00063570) main_cset6_slider_pane_g11

0x7b60,	// (0x0006357c) main_cset6_slider_pane_g12_ParamLimits

0x7b60,	// (0x0006357c) main_cset6_slider_pane_g12

0xda41,	// (0x0006945d) main_cset6_slider_pane_g13_ParamLimits

0xda41,	// (0x0006945d) main_cset6_slider_pane_g13

0xda4d,	// (0x00069469) main_cset6_slider_pane_g14_ParamLimits

0xda4d,	// (0x00069469) main_cset6_slider_pane_g14

0x7b6c,	// (0x00063588) main_cset6_slider_pane_g15_ParamLimits

0x7b6c,	// (0x00063588) main_cset6_slider_pane_g15

0x7b84,	// (0x000635a0) main_cset6_slider_pane_g16_ParamLimits

0x7b84,	// (0x000635a0) main_cset6_slider_pane_g16

0x7b92,	// (0x000635ae) main_cset6_slider_pane_g17_ParamLimits

0x7b92,	// (0x000635ae) main_cset6_slider_pane_g17

0x0011,

0xf8fc,	// (0x0006b318) main_cset6_slider_pane_g_ParamLimits

0xf8fc,	// (0x0006b318) main_cset6_slider_pane_g

0xe012,	// (0x00069a2e) main_cset6_slider_pane_t1_ParamLimits

0xe012,	// (0x00069a2e) main_cset6_slider_pane_t1

0x7bac,	// (0x000635c8) main_cset6_slider_pane_t2_ParamLimits

0x7bac,	// (0x000635c8) main_cset6_slider_pane_t2

0x7bd7,	// (0x000635f3) main_cset6_slider_pane_t3_ParamLimits

0x7bd7,	// (0x000635f3) main_cset6_slider_pane_t3

0x7c02,	// (0x0006361e) main_cset6_slider_pane_t4_ParamLimits

0x7c02,	// (0x0006361e) main_cset6_slider_pane_t4

0x7c2d,	// (0x00063649) main_cset6_slider_pane_t5_ParamLimits

0x7c2d,	// (0x00063649) main_cset6_slider_pane_t5

0xe053,	// (0x00069a6f) main_cset6_slider_pane_t7_ParamLimits

0xe053,	// (0x00069a6f) main_cset6_slider_pane_t7

0x7c5a,	// (0x00063676) main_cset6_slider_pane_t8_ParamLimits

0x7c5a,	// (0x00063676) main_cset6_slider_pane_t8

0x7c7e,	// (0x0006369a) main_cset6_slider_pane_t9_ParamLimits

0x7c7e,	// (0x0006369a) main_cset6_slider_pane_t9

0x7ca2,	// (0x000636be) main_cset6_slider_pane_t10_ParamLimits

0x7ca2,	// (0x000636be) main_cset6_slider_pane_t10

0x7cc6,	// (0x000636e2) main_cset6_slider_pane_t11_ParamLimits

0x7cc6,	// (0x000636e2) main_cset6_slider_pane_t11

0xe089,	// (0x00069aa5) main_cset6_slider_pane_t14_ParamLimits

0xe089,	// (0x00069aa5) main_cset6_slider_pane_t14

0xe0c2,	// (0x00069ade) main_cset6_slider_pane_t15_ParamLimits

0xe0c2,	// (0x00069ade) main_cset6_slider_pane_t15

0x000b,

0xf921,	// (0x0006b33d) main_cset6_slider_pane_t_ParamLimits

0xf921,	// (0x0006b33d) main_cset6_slider_pane_t

0xd4c8,	// (0x00068ee4) cset_slider_pane_g1_copy1

0xda59,	// (0x00069475) cset_slider_pane_g2_copy1

0xda62,	// (0x0006947e) cset_slider_pane_g3_copy1

0x9b69,	// (0x00065585) bg_popup_sub_pane_cp011_copy1

0xe0fb,	// (0x00069b17) main_cset_text_pane_g1_copy1

0xd99f,	// (0x000693bb) main_cset_text_pane_t1_copy1

0xd9ad,	// (0x000693c9) main_cset_text_pane_t2_copy1

0xd9bb,	// (0x000693d7) main_cset_text_pane_t3_copy1

0xd9c9,	// (0x000693e5) main_cset_text_pane_t4_copy1

0xd9d7,	// (0x000693f3) main_cset_text_pane_t5_copy1

0xe103,	// (0x00069b1f) main_cset_text_pane_t6_copy1

0xe111,	// (0x00069b2d) main_cset_text_pane_t7_copy1

0x7dc2,	// (0x000637de) main_cset_text2_pane_t1_copy1

0x433c,	// (0x0005fd58) main_ncimui_pane

0x439b,	// (0x0005fdb7) popup_query_ncimui_window_ParamLimits

0x439b,	// (0x0005fdb7) popup_query_ncimui_window

0x9d6f,	// (0x0006578b) field_cale_ev2_pane_g4_ParamLimits

0x9d6f,	// (0x0006578b) field_cale_ev2_pane_g4

0x5c78,	// (0x00061694) cell_video_dialer_keypad_pane_g2_ParamLimits

0x5c78,	// (0x00061694) cell_video_dialer_keypad_pane_g2

0x0001,

0xf679,	// (0x0006b095) cell_video_dialer_keypad_pane_g_ParamLimits

0xf679,	// (0x0006b095) cell_video_dialer_keypad_pane_g

0x5c90,	// (0x000616ac) cell_video_dialer_keypad_pane_t1

0x9b69,	// (0x00065585) bg_popup_window_pane_cp012

0xb14a,	// (0x00066b66) heading_pane_cp06

0xe13d,	// (0x00069b59) ncim_query_content_pane

0x9b69,	// (0x00065585) bg_popup_heading_pane_cp01

0xe145,	// (0x00069b61) ncim_heading_pane_t1

0xe153,	// (0x00069b6f) ncim_indicator_popup_pane

0xe165,	// (0x00069b81) ncim_query_button_pane

0xe179,	// (0x00069b95) ncim_query_content_pane_t1

0xe18b,	// (0x00069ba7) ncim_query_content_pane_t2

0x0005,

0xf965,	// (0x0006b381) ncim_query_content_pane_t

0xe1c5,	// (0x00069be1) ncim_query_list_pane

0xe1d7,	// (0x00069bf3) ncim_query_popup_pane

0xe153,	// (0x00069b6f) ncim_indicator_popup_pane_ParamLimits

0x7f16,	// (0x00063932) ncim_query_content_pane_g1_ParamLimits

0x7f16,	// (0x00063932) ncim_query_content_pane_g1

0xe179,	// (0x00069b95) ncim_query_content_pane_t1_ParamLimits

0xe18b,	// (0x00069ba7) ncim_query_content_pane_t2_ParamLimits

0x7f22,	// (0x0006393e) ncim_query_content_pane_t3_ParamLimits

0x7f22,	// (0x0006393e) ncim_query_content_pane_t3

0x7f3f,	// (0x0006395b) ncim_query_content_pane_t4_ParamLimits

0x7f3f,	// (0x0006395b) ncim_query_content_pane_t4

0x7f5c,	// (0x00063978) ncim_query_content_pane_t5_ParamLimits

0x7f5c,	// (0x00063978) ncim_query_content_pane_t5

0xe19d,	// (0x00069bb9) ncim_query_content_pane_t6_ParamLimits

0xe19d,	// (0x00069bb9) ncim_query_content_pane_t6

0xf965,	// (0x0006b381) ncim_query_content_pane_t_ParamLimits

0xe1c5,	// (0x00069be1) ncim_query_list_pane_ParamLimits

0xe1d7,	// (0x00069bf3) ncim_query_popup_pane_ParamLimits

0xe1eb,	// (0x00069c07) wait_bar_pane_cp04

0x9b69,	// (0x00065585) input_focus_pane_cp011

0xe1f3,	// (0x00069c0f) ncim_query_popup_pane_t1

0xe201,	// (0x00069c1d) ncim_list_query_list_pane_ParamLimits

0xe201,	// (0x00069c1d) ncim_list_query_list_pane

0x9b69,	// (0x00065585) bg_button_pane_cp027

0xe20e,	// (0x00069c2a) ncim_query_button_pane_g1

0x9b69,	// (0x00065585) list_highlight_pane_cp012

0xe218,	// (0x00069c34) ncim_list_query_list_pane_g1

0xe220,	// (0x00069c3c) ncim_list_query_list_pane_t1

0x634c,	// (0x00061d68) cam4_indicators_pane_g3_ParamLimits

0x634c,	// (0x00061d68) cam4_indicators_pane_g3

0x644e,	// (0x00061e6a) vid4_indicators_pane_g5_ParamLimits

0x644e,	// (0x00061e6a) vid4_indicators_pane_g5

0x750f,	// (0x00062f2b) vid4_progress_pane_g5_ParamLimits

0x750f,	// (0x00062f2b) vid4_progress_pane_g5

0x7e02,	// (0x0006381e) main_ncimui_pane_g1

0x7e6a,	// (0x00063886) ncimui_group_query_pane_ParamLimits

0x7e6a,	// (0x00063886) ncimui_group_query_pane

0x7eb2,	// (0x000638ce) ncimui_list_pane_ParamLimits

0x7eb2,	// (0x000638ce) ncimui_list_pane

0x7ed9,	// (0x000638f5) ncimui_text_pane_ParamLimits

0x7ed9,	// (0x000638f5) ncimui_text_pane

0x7f79,	// (0x00063995) ncimui_text_pane_t1_ParamLimits

0x7f79,	// (0x00063995) ncimui_text_pane_t1

0xe22e,	// (0x00069c4a) ncimui_list_single_graphic_pane_ParamLimits

0xe22e,	// (0x00069c4a) ncimui_list_single_graphic_pane

0x7f98,	// (0x000639b4) ncimui_query_pane_ParamLimits

0x7f98,	// (0x000639b4) ncimui_query_pane

0x9b69,	// (0x00065585) list_highlight_pane_cp013

0xe23e,	// (0x00069c5a) ncim_list_query_list_pane_t1_copy1

0xe24c,	// (0x00069c68) ncim_list_single_graphic_pane_g1

0x7fab,	// (0x000639c7) ncim_query_button_pane_cp01

0x7fb7,	// (0x000639d3) ncim_query_entry_pane_ParamLimits

0x7fb7,	// (0x000639d3) ncim_query_entry_pane

0x7fca,	// (0x000639e6) ncimui_query_pane_g1

0x7fd6,	// (0x000639f2) ncimui_query_pane_t1_ParamLimits

0x7fd6,	// (0x000639f2) ncimui_query_pane_t1

0xad5e,	// (0x0006677a) input_focus_pane_cp012

0xe254,	// (0x00069c70) ncim_query_entry_pane_t1

0xa855,	// (0x00066271) main_im_pane_ParamLimits

0x433c,	// (0x0005fd58) main_mobtv_pane_ParamLimits

0x433c,	// (0x0005fd58) main_mobtv_pane

0x7ba0,	// (0x000635bc) main_cset6_slider_pane_g18_ParamLimits

0x7ba0,	// (0x000635bc) main_cset6_slider_pane_g18

0xe006,	// (0x00069a22) main_cset6_slider_pane_g19_ParamLimits

0xe006,	// (0x00069a22) main_cset6_slider_pane_g19

0xd6f0,	// (0x0006910c) bg_main_mobtv_pane_ParamLimits

0xd6f0,	// (0x0006910c) bg_main_mobtv_pane

0x7fef,	// (0x00063a0b) main_mobtv_info_pane

0x7ffa,	// (0x00063a16) main_mobtv_loading_pane_ParamLimits

0x7ffa,	// (0x00063a16) main_mobtv_loading_pane

0xe266,	// (0x00069c82) main_mobtv_pg_channel_list_pane

0xe270,	// (0x00069c8c) main_mobtv_pg_hdr_pane

0x8007,	// (0x00063a23) main_mobtv_programe_curr_pane_ParamLimits

0x8007,	// (0x00063a23) main_mobtv_programe_curr_pane

0x8014,	// (0x00063a30) main_mobtv_programe_next_pane_ParamLimits

0x8014,	// (0x00063a30) main_mobtv_programe_next_pane

0xe279,	// (0x00069c95) popup_mobtv_noti_window

0xccec,	// (0x00068708) main_tv_pg_hdr_pane_g1

0xe281,	// (0x00069c9d) main_tv_pg_hdr_pane_g2

0xe289,	// (0x00069ca5) main_tv_pg_hdr_pane_g3

0xe291,	// (0x00069cad) main_tv_pg_hdr_pane_g4

0xe299,	// (0x00069cb5) main_tv_pg_hdr_pane_g5

0xe2a3,	// (0x00069cbf) main_tv_pg_hdr_pane_g6

0xe2ad,	// (0x00069cc9) main_tv_pg_hdr_pane_g7

0xe2b7,	// (0x00069cd3) main_tv_pg_hdr_pane_g8

0xe2c1,	// (0x00069cdd) main_tv_pg_hdr_pane_g9

0xe2cb,	// (0x00069ce7) main_tv_pg_hdr_pane_g10

0xe2d5,	// (0x00069cf1) main_tv_pg_hdr_pane_g11

0x000a,

0x0a93,	// (0x0005c4af) main_tv_pg_hdr_pane_g

0xe2df,	// (0x00069cfb) main_tv_pg_hdr_pane_t1

0xe2ed,	// (0x00069d09) main_tv_pg_hdr_pane_t2

0xe2fb,	// (0x00069d17) main_tv_pg_hdr_pane_t3

0xe30b,	// (0x00069d27) main_tv_pg_hdr_pane_t4

0xe31b,	// (0x00069d37) main_tv_pg_hdr_pane_t5

0x0004,

0x0aaa,	// (0x0005c4c6) main_tv_pg_hdr_pane_t

0xe32b,	// (0x00069d47) single_mobtv_pg_channel_pane_ParamLimits

0xe32b,	// (0x00069d47) single_mobtv_pg_channel_pane

0xe33d,	// (0x00069d59) single_mobtv_pg_channel_table_pane

0xadb4,	// (0x000667d0) single_mobtv_pg_channel_thumb_pane

0xe346,	// (0x00069d62) single_tv_pg_channel_pane_g1

0xe34f,	// (0x00069d6b) single_tv_pg_channel_pane_g2

0x0001,

0x0ab5,	// (0x0005c4d1) single_tv_pg_channel_pane_g

0xcf3a,	// (0x00068956) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xcf3a,	// (0x00068956) bg_single_mobtv_pg_channel_thumb_pane

0xe358,	// (0x00069d74) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xe358,	// (0x00069d74) single_mobtv_pg_channel_thumb_pane_g1

0xe366,	// (0x00069d82) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xe366,	// (0x00069d82) single_mobtv_pg_channel_thumb_pane_g2

0xe372,	// (0x00069d8e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xe372,	// (0x00069d8e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xf972,	// (0x0006b38e) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xf972,	// (0x0006b38e) single_mobtv_pg_channel_thumb_pane_g

0xe37e,	// (0x00069d9a) single_mobtv_pg_channel_thumb_pane_t1

0xe38c,	// (0x00069da8) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xf979,	// (0x0006b395) single_mobtv_pg_channel_thumb_pane_t

0xccec,	// (0x00068708) bg_single_mobtv_pg_channel_table_pane_g1

0xccec,	// (0x00068708) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x0567,	// (0x0005bf83) bg_single_mobtv_pg_channel_table_pane_g

0xe39a,	// (0x00069db6) single_mobtv_pg_channel_table_pane_t1

0xe3a8,	// (0x00069dc4) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xf97e,	// (0x0006b39a) single_mobtv_pg_channel_table_pane_t

0x8029,	// (0x00063a45) main_mobtv_info_pane_g1_ParamLimits

0x8029,	// (0x00063a45) main_mobtv_info_pane_g1

0x8045,	// (0x00063a61) main_mobtv_info_pane_t1_ParamLimits

0x8045,	// (0x00063a61) main_mobtv_info_pane_t1

0x80bd,	// (0x00063ad9) main_mobtv_info_pane_t2_ParamLimits

0x80bd,	// (0x00063ad9) main_mobtv_info_pane_t2

0x0002,

0xf988,	// (0x0006b3a4) main_mobtv_info_pane_t_ParamLimits

0xf988,	// (0x0006b3a4) main_mobtv_info_pane_t

0x814c,	// (0x00063b68) wait_bar_pane_cp05

0x815e,	// (0x00063b7a) main_mobtv_loading_pane_g1_ParamLimits

0x815e,	// (0x00063b7a) main_mobtv_loading_pane_g1

0x816c,	// (0x00063b88) main_mobtv_loading_pane_g2_ParamLimits

0x816c,	// (0x00063b88) main_mobtv_loading_pane_g2

0x8178,	// (0x00063b94) main_mobtv_loading_pane_g3_ParamLimits

0x8178,	// (0x00063b94) main_mobtv_loading_pane_g3

0x0002,

0xf98f,	// (0x0006b3ab) main_mobtv_loading_pane_g_ParamLimits

0xf98f,	// (0x0006b3ab) main_mobtv_loading_pane_g

0xe3b6,	// (0x00069dd2) main_mobtv_loading_pane_t1_ParamLimits

0xe3b6,	// (0x00069dd2) main_mobtv_loading_pane_t1

0xe3ce,	// (0x00069dea) main_mobtv_loading_pane_t2_ParamLimits

0xe3ce,	// (0x00069dea) main_mobtv_loading_pane_t2

0x0001,

0xf996,	// (0x0006b3b2) main_mobtv_loading_pane_t_ParamLimits

0xf996,	// (0x0006b3b2) main_mobtv_loading_pane_t

0x8186,	// (0x00063ba2) wait_bar_pane_cp06_ParamLimits

0x8186,	// (0x00063ba2) wait_bar_pane_cp06

0xe3f2,	// (0x00069e0e) main_mobtv_programe_curr_pane_t1

0xe400,	// (0x00069e1c) main_mobtv_programe_curr_pane_t2

0x0001,

0xf99b,	// (0x0006b3b7) main_mobtv_programe_curr_pane_t

0xe40e,	// (0x00069e2a) main_mobtv_programe_next_pane_t1

0xe41c,	// (0x00069e38) main_mobtv_programe_next_pane_t2

0xe42a,	// (0x00069e46) main_mobtv_programe_next_pane_t3

0x0002,

0xf9a0,	// (0x0006b3bc) main_mobtv_programe_next_pane_t

0x9b69,	// (0x00065585) bg_popup_mobtv_noti_window_pane

0xe438,	// (0x00069e54) popup_mobtv_noti_window_g1

0xe440,	// (0x00069e5c) popup_mobtv_noti_window_t1

0xe44e,	// (0x00069e6a) popup_mobtv_noti_window_t2

0x0001,

0xf9a7,	// (0x0006b3c3) popup_mobtv_noti_window_t

0xccec,	// (0x00068708) bg_popup_mobtv_noti_window_pane_g1

0x111d,	// (0x0005cb39) sc_clock_pane

0x111d,	// (0x0005cb39) main_fs_bigclock_pane

0x772b,	// (0x00063147) blid2_tripm_pane_t4_ParamLimits

0x772b,	// (0x00063147) blid2_tripm_pane_t4

0x8192,	// (0x00063bae) sc_clock_pane_g1_ParamLimits

0x8192,	// (0x00063bae) sc_clock_pane_g1

0x81a0,	// (0x00063bbc) sc_clock_pane_t1_ParamLimits

0x81a0,	// (0x00063bbc) sc_clock_pane_t1

0x81b3,	// (0x00063bcf) sc_clock_pane_t2_ParamLimits

0x81b3,	// (0x00063bcf) sc_clock_pane_t2

0x81c5,	// (0x00063be1) sc_clock_pane_t3_ParamLimits

0x81c5,	// (0x00063be1) sc_clock_pane_t3

0x0004,

0xf9ac,	// (0x0006b3c8) sc_clock_pane_t_ParamLimits

0xf9ac,	// (0x0006b3c8) sc_clock_pane_t

0x90b0,	// (0x00064acc) main_fs_bigclock_indicator_pane_ParamLimits

0x90b0,	// (0x00064acc) main_fs_bigclock_indicator_pane

0x8248,	// (0x00063c64) main_fs_bigclock_pane_g1_ParamLimits

0x8248,	// (0x00063c64) main_fs_bigclock_pane_g1

0x90bc,	// (0x00064ad8) main_fs_bigclock_pane_t1_ParamLimits

0x90bc,	// (0x00064ad8) main_fs_bigclock_pane_t1

0x90ce,	// (0x00064aea) main_fs_bigclock_pane_t2_ParamLimits

0x90ce,	// (0x00064aea) main_fs_bigclock_pane_t2

0x90e2,	// (0x00064afe) main_fs_bigclock_pane_t3_ParamLimits

0x90e2,	// (0x00064afe) main_fs_bigclock_pane_t3

0x0002,

0xfb3f,	// (0x0006b55b) main_fs_bigclock_pane_t_ParamLimits

0xfb3f,	// (0x0006b55b) main_fs_bigclock_pane_t

0xecd0,	// (0x0006a6ec) main_fs_bigclock_indicator_pane_g1

0xe16d,	// (0x00069b89) ncim_query_content_pane_g2_ParamLimits

0xe16d,	// (0x00069b89) ncim_query_content_pane_g2

0x0001,

0xf960,	// (0x0006b37c) ncim_query_content_pane_g_ParamLimits

0xf960,	// (0x0006b37c) ncim_query_content_pane_g

0x81d9,	// (0x00063bf5) sc_clock_pane_t4_ParamLimits

0x81d9,	// (0x00063bf5) sc_clock_pane_t4

0x433c,	// (0x0005fd58) main_radioblah_pane

0x61e4,	// (0x00061c00) cell_call4_button_pane_t1_copy1_ParamLimits

0x61e4,	// (0x00061c00) cell_call4_button_pane_t1_copy1

0x7e1c,	// (0x00063838) main_ncimui_pane_t1_ParamLimits

0x7e1c,	// (0x00063838) main_ncimui_pane_t1

0x7e36,	// (0x00063852) main_ncimui_pane_t2_ParamLimits

0x7e36,	// (0x00063852) main_ncimui_pane_t2

0x0002,

0xf959,	// (0x0006b375) main_ncimui_pane_t_ParamLimits

0xf959,	// (0x0006b375) main_ncimui_pane_t

0xe59d,	// (0x00069fb9) main_radioblah_anim_pane_ParamLimits

0xe59d,	// (0x00069fb9) main_radioblah_anim_pane

0xe5ae,	// (0x00069fca) main_radioblah_info_pane_ParamLimits

0xe5ae,	// (0x00069fca) main_radioblah_info_pane

0xe5c2,	// (0x00069fde) main_radioblah_pane_t1_ParamLimits

0xe5c2,	// (0x00069fde) main_radioblah_pane_t1

0xe5de,	// (0x00069ffa) main_radioblah_pane_t2_ParamLimits

0xe5de,	// (0x00069ffa) main_radioblah_pane_t2

0x0003,

0x0ae3,	// (0x0005c4ff) main_radioblah_pane_t_ParamLimits

0x0ae3,	// (0x0005c4ff) main_radioblah_pane_t

0x829e,	// (0x00063cba) main_radioblah_rocker_ctrl_pane_ParamLimits

0x829e,	// (0x00063cba) main_radioblah_rocker_ctrl_pane

0xe626,	// (0x0006a042) main_radioblah_info_pane_t1_ParamLimits

0xe626,	// (0x0006a042) main_radioblah_info_pane_t1

0x82e3,	// (0x00063cff) main_radioblah_info_pane_t2_ParamLimits

0x82e3,	// (0x00063cff) main_radioblah_info_pane_t2

0x0003,

0xf9c2,	// (0x0006b3de) main_radioblah_info_pane_t_ParamLimits

0xf9c2,	// (0x0006b3de) main_radioblah_info_pane_t

0xccec,	// (0x00068708) main_radioblah_rocker_ctrl_pane_g1

0x8393,	// (0x00063daf) main_radioblah_rocker_ctrl_pane_g2

0x839b,	// (0x00063db7) main_radioblah_rocker_ctrl_pane_g3

0x83a3,	// (0x00063dbf) main_radioblah_rocker_ctrl_pane_g4

0x83ab,	// (0x00063dc7) main_radioblah_rocker_ctrl_pane_g5

0x83b3,	// (0x00063dcf) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xf9cb,	// (0x0006b3e7) main_radioblah_rocker_ctrl_pane_g

0x7dc2,	// (0x000637de) main_cset_text2_pane_t1_copy1_ParamLimits

0x626f,	// (0x00061c8b) cam4_image_uncrop_qvga_pane

0x63be,	// (0x00061dda) vid4_image_uncrop_qcif_pane

0x78b9,	// (0x000632d5) cam6_image_uncrop_qvga_pane_ParamLimits

0x78b9,	// (0x000632d5) cam6_image_uncrop_qvga_pane

0xde68,	// (0x00069884) vid6_image_uncrop_qcif_pane_ParamLimits

0xde68,	// (0x00069884) vid6_image_uncrop_qcif_pane

0x9b69,	// (0x00065585) bg_popup_preview_window_pane_cp03

0xe11f,	// (0x00069b3b) list_cset_text2_pane

0xe127,	// (0x00069b43) main_cset6_text2_pane_g1

0xe12f,	// (0x00069b4b) main_cset6_text2_pane_t1

0x83bb,	// (0x00063dd7) list_cset_text2_pane_t1_ParamLimits

0x83bb,	// (0x00063dd7) list_cset_text2_pane_t1

0x433c,	// (0x0005fd58) main_radioblah_pane_ParamLimits

0x8138,	// (0x00063b54) main_mobtv_info_pane_t3_ParamLimits

0x8138,	// (0x00063b54) main_mobtv_info_pane_t3

0x828c,	// (0x00063ca8) main_radioblah_pane_g1

0x82b7,	// (0x00063cd3) main_radioblah_info_pane_g1

0x8338,	// (0x00063d54) main_radioblah_info_pane_t3_ParamLimits

0x8338,	// (0x00063d54) main_radioblah_info_pane_t3

0x303e,	// (0x0005ea5a) highlight_cell_cale_month_pane_ParamLimits

0x303e,	// (0x0005ea5a) highlight_cell_cale_month_pane

0x111d,	// (0x0005cb39) main_phob_fisheye_pane

0xd022,	// (0x00068a3e) scroll_pane_cp0031_ParamLimits

0xd022,	// (0x00068a3e) scroll_pane_cp0031

0xdf76,	// (0x00069992) wait_bar_pane_cp08_ParamLimits

0x7acc,	// (0x000634e8) cset_list_set_pane_copy1_ParamLimits

0xe660,	// (0x0006a07c) highlight_cell_cale_month_pane_g1

0x83dc,	// (0x00063df8) highlight_cell_cale_month_pane_t1

0xdc07,	// (0x00069623) list_gen_pane_cp01

0xd82a,	// (0x00069246) scroll_pane_01

0x83ea,	// (0x00063e06) list_single_double_fisheye_pane

0x83f3,	// (0x00063e0f) list_double_fisheye_pane_g1_ParamLimits

0x83f3,	// (0x00063e0f) list_double_fisheye_pane_g1

0x83ff,	// (0x00063e1b) list_double_fisheye_pane_g2_ParamLimits

0x83ff,	// (0x00063e1b) list_double_fisheye_pane_g2

0x8413,	// (0x00063e2f) list_double_fisheye_pane_g3_ParamLimits

0x8413,	// (0x00063e2f) list_double_fisheye_pane_g3

0x0004,

0xf9d8,	// (0x0006b3f4) list_double_fisheye_pane_g_ParamLimits

0xf9d8,	// (0x0006b3f4) list_double_fisheye_pane_g

0x843c,	// (0x00063e58) list_double_fisheye_pane_t1_ParamLimits

0x843c,	// (0x00063e58) list_double_fisheye_pane_t1

0x8457,	// (0x00063e73) list_double_fisheye_pane_t2_ParamLimits

0x8457,	// (0x00063e73) list_double_fisheye_pane_t2

0x0001,

0xf9e3,	// (0x0006b3ff) list_double_fisheye_pane_t_ParamLimits

0xf9e3,	// (0x0006b3ff) list_double_fisheye_pane_t

0x111d,	// (0x0005cb39) main_call5_pane

0x81ff,	// (0x00063c1b) sc_swipe_pane_ParamLimits

0x81ff,	// (0x00063c1b) sc_swipe_pane

0x8485,	// (0x00063ea1) call5_image_pane_ParamLimits

0x8485,	// (0x00063ea1) call5_image_pane

0x8495,	// (0x00063eb1) call5_swipe_1_pane_ParamLimits

0x8495,	// (0x00063eb1) call5_swipe_1_pane

0x84a1,	// (0x00063ebd) call5_swipe_2_pane_ParamLimits

0x84a1,	// (0x00063ebd) call5_swipe_2_pane

0x84bb,	// (0x00063ed7) popup_call5_audio_first_window_ParamLimits

0x84bb,	// (0x00063ed7) popup_call5_audio_first_window

0xcf3a,	// (0x00068956) call5_swipe_1_pane_g1_ParamLimits

0xcf3a,	// (0x00068956) call5_swipe_1_pane_g1

0xe668,	// (0x0006a084) call5_swipe_1_pane_g2_ParamLimits

0xe668,	// (0x0006a084) call5_swipe_1_pane_g2

0x0001,

0xf9e8,	// (0x0006b404) call5_swipe_1_pane_g_ParamLimits

0xf9e8,	// (0x0006b404) call5_swipe_1_pane_g

0xe674,	// (0x0006a090) call5_swipe_1_pane_t1_ParamLimits

0xe674,	// (0x0006a090) call5_swipe_1_pane_t1

0xcf3a,	// (0x00068956) call5_swipe_2_pane_g1_ParamLimits

0xcf3a,	// (0x00068956) call5_swipe_2_pane_g1

0xe689,	// (0x0006a0a5) call5_swipe_2_pane_g2_ParamLimits

0xe689,	// (0x0006a0a5) call5_swipe_2_pane_g2

0x0001,

0xf9ed,	// (0x0006b409) call5_swipe_2_pane_g_ParamLimits

0xf9ed,	// (0x0006b409) call5_swipe_2_pane_g

0xe695,	// (0x0006a0b1) call5_swipe_2_pane_t1_ParamLimits

0xe695,	// (0x0006a0b1) call5_swipe_2_pane_t1

0xe6aa,	// (0x0006a0c6) sc_swipe_pane_g1_ParamLimits

0xe6aa,	// (0x0006a0c6) sc_swipe_pane_g1

0xe6b7,	// (0x0006a0d3) sc_swipe_pane_g2_ParamLimits

0xe6b7,	// (0x0006a0d3) sc_swipe_pane_g2

0x0001,

0xf9f2,	// (0x0006b40e) sc_swipe_pane_g_ParamLimits

0xf9f2,	// (0x0006b40e) sc_swipe_pane_g

0xe6c3,	// (0x0006a0df) sc_swipe_pane_t1_ParamLimits

0xe6c3,	// (0x0006a0df) sc_swipe_pane_t1

0x111d,	// (0x0005cb39) main_cmail_launcher_pane

0x84c9,	// (0x00063ee5) aid_size_cell_cmail_l_ParamLimits

0x84c9,	// (0x00063ee5) aid_size_cell_cmail_l

0x84d7,	// (0x00063ef3) grid_cmail_l_pane_ParamLimits

0x84d7,	// (0x00063ef3) grid_cmail_l_pane

0x84e7,	// (0x00063f03) cell_cmail_l_pane_ParamLimits

0x84e7,	// (0x00063f03) cell_cmail_l_pane

0xe6f3,	// (0x0006a10f) cell_cmail_l_pane_g1_ParamLimits

0xe6f3,	// (0x0006a10f) cell_cmail_l_pane_g1

0xe6ff,	// (0x0006a11b) cell_cmail_l_pane_t1_ParamLimits

0xe6ff,	// (0x0006a11b) cell_cmail_l_pane_t1

0xe715,	// (0x0006a131) cell_cmail_l_pane_t2_ParamLimits

0xe715,	// (0x0006a131) cell_cmail_l_pane_t2

0x0001,

0x0b21,	// (0x0005c53d) cell_cmail_l_pane_t_ParamLimits

0x0b21,	// (0x0005c53d) cell_cmail_l_pane_t

0xad5e,	// (0x0006677a) grid_highlight_pane_cp018_ParamLimits

0xad5e,	// (0x0006677a) grid_highlight_pane_cp018

0x0f73,	// (0x0005c98f) main2_pane_ParamLimits

0x0f73,	// (0x0005c98f) main2_pane

0xa900,	// (0x0006631c) popup_sp_fs_action_menu_bg_pane_g1

0xa908,	// (0x00066324) popup_sp_fs_action_menu_bg_pane_g2

0xa910,	// (0x0006632c) popup_sp_fs_action_menu_bg_pane_g3

0xa918,	// (0x00066334) popup_sp_fs_action_menu_bg_pane_g4

0xa920,	// (0x0006633c) popup_sp_fs_action_menu_bg_pane_g5

0xa928,	// (0x00066344) popup_sp_fs_action_menu_bg_pane_g6

0xa930,	// (0x0006634c) popup_sp_fs_action_menu_bg_pane_g7

0xa938,	// (0x00066354) popup_sp_fs_action_menu_bg_pane_g8

0xa940,	// (0x0006635c) popup_sp_fs_action_menu_bg_pane_g9

0xa948,	// (0x00066364) popup_sp_fs_action_menu_bg_pane_g10

0xa948,	// (0x00066364) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0006aba6) popup_sp_fs_action_menu_bg_pane_g

0x1e26,	// (0x0005d842) list_medium_line_x2_t3_g3_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t3_g3_g1

0x1e32,	// (0x0005d84e) list_medium_line_x2_t3_g3_g2_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x2_t3_g3_g2

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t3_g3_g3_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0006ac54) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0006ac54) list_medium_line_x2_t3_g3_g

0x1e4a,	// (0x0005d866) list_medium_line_x2_t3_g3_t1_ParamLimits

0x1e4a,	// (0x0005d866) list_medium_line_x2_t3_g3_t1

0x1e5f,	// (0x0005d87b) list_medium_line_x2_t3_g3_t2_ParamLimits

0x1e5f,	// (0x0005d87b) list_medium_line_x2_t3_g3_t2

0x1e71,	// (0x0005d88d) list_medium_line_x2_t3_g3_t3_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0006ac5b) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0006ac5b) list_medium_line_x2_t3_g3_t

0x1e26,	// (0x0005d842) list_medium_line_x2_t3_g2_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t3_g2_g1

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t3_g2_g2_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0006ac62) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0006ac62) list_medium_line_x2_t3_g2_g

0x1e86,	// (0x0005d8a2) list_medium_line_x2_t3_g2_t1_ParamLimits

0x1e86,	// (0x0005d8a2) list_medium_line_x2_t3_g2_t1

0x1e9b,	// (0x0005d8b7) list_medium_line_x2_t3_g2_t2_ParamLimits

0x1e9b,	// (0x0005d8b7) list_medium_line_x2_t3_g2_t2

0x1ead,	// (0x0005d8c9) list_medium_line_x2_t3_g2_t3_ParamLimits

0x1ead,	// (0x0005d8c9) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0006ac67) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0006ac67) list_medium_line_x2_t3_g2_t

0x1e26,	// (0x0005d842) list_medium_line_x2_t4_g4_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t4_g4_g1

0x1ecb,	// (0x0005d8e7) list_medium_line_x2_t4_g4_g2_ParamLimits

0x1ecb,	// (0x0005d8e7) list_medium_line_x2_t4_g4_g2

0x1e32,	// (0x0005d84e) list_medium_line_x2_t4_g4_g3_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x2_t4_g4_g3

0x1ed7,	// (0x0005d8f3) list_medium_line_x2_t4_g4_g4_ParamLimits

0x1ed7,	// (0x0005d8f3) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0006ac6e) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0006ac6e) list_medium_line_x2_t4_g4_g

0x1ee3,	// (0x0005d8ff) list_medium_line_x2_t4_g4_t1_ParamLimits

0x1ee3,	// (0x0005d8ff) list_medium_line_x2_t4_g4_t1

0x1efd,	// (0x0005d919) list_medium_line_x2_t4_g4_t2_ParamLimits

0x1efd,	// (0x0005d919) list_medium_line_x2_t4_g4_t2

0x1f13,	// (0x0005d92f) list_medium_line_x2_t4_g4_t3_ParamLimits

0x1f13,	// (0x0005d92f) list_medium_line_x2_t4_g4_t3

0x1f28,	// (0x0005d944) list_medium_line_x2_t4_g4_t4_ParamLimits

0x1f28,	// (0x0005d944) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0006ac77) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0006ac77) list_medium_line_x2_t4_g4_t

0x1e26,	// (0x0005d842) list_medium_line_x2_t2_g4_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t2_g4_g1

0x1ecb,	// (0x0005d8e7) list_medium_line_x2_t2_g4_g2_ParamLimits

0x1ecb,	// (0x0005d8e7) list_medium_line_x2_t2_g4_g2

0x1e32,	// (0x0005d84e) list_medium_line_x2_t2_g4_g3_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x2_t2_g4_g3

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t2_g4_g4_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0006acde) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0006acde) list_medium_line_x2_t2_g4_g

0x3064,	// (0x0005ea80) list_medium_line_x2_t2_g4_t1_ParamLimits

0x3064,	// (0x0005ea80) list_medium_line_x2_t2_g4_t1

0x1e71,	// (0x0005d88d) list_medium_line_x2_t2_g4_t2_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0006ace7) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0006ace7) list_medium_line_x2_t2_g4_t

0x1e26,	// (0x0005d842) list_medium_line_x2_t2_g3_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t2_g3_g1

0x1e32,	// (0x0005d84e) list_medium_line_x2_t2_g3_g2_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x2_t2_g3_g2

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t2_g3_g3_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0006ac54) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0006ac54) list_medium_line_x2_t2_g3_g

0x3079,	// (0x0005ea95) list_medium_line_x2_t2_g3_t1_ParamLimits

0x3079,	// (0x0005ea95) list_medium_line_x2_t2_g3_t1

0x1e71,	// (0x0005d88d) list_medium_line_x2_t2_g3_t2_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0006acec) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0006acec) list_medium_line_x2_t2_g3_t

0x3262,	// (0x0005ec7e) main_sp_fs_list_pane_ParamLimits

0x3262,	// (0x0005ec7e) main_sp_fs_list_pane

0x326e,	// (0x0005ec8a) sp_fs_scroll_pane_ParamLimits

0x326e,	// (0x0005ec8a) sp_fs_scroll_pane

0x327a,	// (0x0005ec96) list_medium_line_x2_t3_t1

0x328a,	// (0x0005eca6) list_medium_line_x2_t3_t2

0x3298,	// (0x0005ecb4) list_medium_line_x2_t3_t3

0x0002,

0xf2f5,	// (0x0006ad11) list_medium_line_x2_t3_t

0x32a6,	// (0x0005ecc2) list_medium_line_x3_t4_t1

0x32b6,	// (0x0005ecd2) list_medium_line_x3_t4_t2

0x32c4,	// (0x0005ece0) list_medium_line_x3_t4_t3

0x3298,	// (0x0005ecb4) list_medium_line_x3_t4_t4

0x0003,

0xf2fc,	// (0x0006ad18) list_medium_line_x3_t4_t

0x32d2,	// (0x0005ecee) list_medium_line_x4_t5_t1

0x32e2,	// (0x0005ecfe) list_medium_line_x4_t5_t2

0x32c4,	// (0x0005ece0) list_medium_line_x4_t5_t3

0x32f0,	// (0x0005ed0c) list_medium_line_x4_t5_t4

0x3298,	// (0x0005ecb4) list_medium_line_x4_t5_t5

0x0004,

0xf305,	// (0x0006ad21) list_medium_line_x4_t5_t

0x1e26,	// (0x0005d842) list_medium_line_t4_g4_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_t4_g4_g1

0x1ed7,	// (0x0005d8f3) list_medium_line_t4_g4_g2_ParamLimits

0x1ed7,	// (0x0005d8f3) list_medium_line_t4_g4_g2

0x32fe,	// (0x0005ed1a) list_medium_line_t4_g4_g3_ParamLimits

0x32fe,	// (0x0005ed1a) list_medium_line_t4_g4_g3

0x1e3e,	// (0x0005d85a) list_medium_line_t4_g4_g4_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_t4_g4_g4

0x0003,

0xf310,	// (0x0006ad2c) list_medium_line_t4_g4_g_ParamLimits

0xf310,	// (0x0006ad2c) list_medium_line_t4_g4_g

0x330a,	// (0x0005ed26) list_medium_line_t4_g4_t1_ParamLimits

0x330a,	// (0x0005ed26) list_medium_line_t4_g4_t1

0x331f,	// (0x0005ed3b) list_medium_line_t4_g4_t2_ParamLimits

0x331f,	// (0x0005ed3b) list_medium_line_t4_g4_t2

0x3335,	// (0x0005ed51) list_medium_line_t4_g4_t3_ParamLimits

0x3335,	// (0x0005ed51) list_medium_line_t4_g4_t3

0x1e71,	// (0x0005d88d) list_medium_line_t4_g4_t4_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_t4_g4_t4

0x0003,

0xf319,	// (0x0006ad35) list_medium_line_t4_g4_t_ParamLimits

0xf319,	// (0x0006ad35) list_medium_line_t4_g4_t

0x3456,	// (0x0005ee72) chi_dic_find_pane_g1

0x4358,	// (0x0005fd74) main_tport_pane

0x6db4,	// (0x000627d0) list_medium_line_plain_t1

0x6e94,	// (0x000628b0) list_medium_line_t2_g2_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_t2_g2_g1

0x6ea0,	// (0x000628bc) list_medium_line_t2_g2_g2_ParamLimits

0x6ea0,	// (0x000628bc) list_medium_line_t2_g2_g2

0x0001,

0xf7bf,	// (0x0006b1db) list_medium_line_t2_g2_g_ParamLimits

0xf7bf,	// (0x0006b1db) list_medium_line_t2_g2_g

0x6eac,	// (0x000628c8) list_medium_line_t2_g2_t1_ParamLimits

0x6eac,	// (0x000628c8) list_medium_line_t2_g2_t1

0x6ec6,	// (0x000628e2) list_medium_line_t2_g2_t2_ParamLimits

0x6ec6,	// (0x000628e2) list_medium_line_t2_g2_t2

0x0001,

0xf7c4,	// (0x0006b1e0) list_medium_line_t2_g2_t_ParamLimits

0xf7c4,	// (0x0006b1e0) list_medium_line_t2_g2_t

0x9e60,	// (0x0006587c) aid_sp_fs_list_icon_a_sm

0x9e68,	// (0x00065884) aid_sp_fs_list_icon_d

0x9e70,	// (0x0006588c) aid_sp_fs_text_primary

0xe492,	// (0x00069eae) aid_sp_fs_text_secondary

0x756d,	// (0x00062f89) list_medium_line

0x756d,	// (0x00062f89) list_medium_line_g2

0x756d,	// (0x00062f89) list_medium_line_g3

0x756d,	// (0x00062f89) list_medium_line_plain

0x756d,	// (0x00062f89) list_medium_line_plain_t2

0x756d,	// (0x00062f89) list_medium_line_plain_t3

0x756d,	// (0x00062f89) list_medium_line_right_icon

0x756d,	// (0x00062f89) list_medium_line_right_iconx2

0x756d,	// (0x00062f89) list_medium_line_t2

0x756d,	// (0x00062f89) list_medium_line_t2_g2

0x756d,	// (0x00062f89) list_medium_line_t2_g3

0x756d,	// (0x00062f89) list_medium_line_t2_right_icon

0x756d,	// (0x00062f89) list_medium_line_t2_right_iconx2

0x756d,	// (0x00062f89) list_medium_line_t3

0x756d,	// (0x00062f89) list_medium_line_t3_g2

0x756d,	// (0x00062f89) list_medium_line_t3_g3

0x756d,	// (0x00062f89) list_medium_line_t3_right_iconx2

0x7576,	// (0x00062f92) list_medium_line_t4_g4

0x757f,	// (0x00062f9b) list_medium_line_x2

0x757f,	// (0x00062f9b) list_medium_line_x2_t2_g2

0x757f,	// (0x00062f9b) list_medium_line_x2_t2_g3

0x757f,	// (0x00062f9b) list_medium_line_x2_t2_g4

0x757f,	// (0x00062f9b) list_medium_line_x2_t3

0x757f,	// (0x00062f9b) list_medium_line_x2_t3_g2

0x757f,	// (0x00062f9b) list_medium_line_x2_t3_g3

0x757f,	// (0x00062f9b) list_medium_line_x2_t3_g4

0x757f,	// (0x00062f9b) list_medium_line_x2_t4_g2

0x757f,	// (0x00062f9b) list_medium_line_x2_t4_g4

0x7588,	// (0x00062fa4) list_medium_line_x3

0x7588,	// (0x00062fa4) list_medium_line_x3_t4

0x7588,	// (0x00062fa4) list_medium_line_x3_t4_g4

0x7576,	// (0x00062f92) list_medium_line_x4_t4

0x7576,	// (0x00062f92) list_medium_line_x4_t4_g7

0x7576,	// (0x00062f92) list_medium_line_x4_t5

0x7591,	// (0x00062fad) list_single_fs_dyc_pane_ParamLimits

0x7591,	// (0x00062fad) list_single_fs_dyc_pane

0x1e26,	// (0x0005d842) list_medium_line_x4_t4_g7_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x4_t4_g7_g1

0x7cec,	// (0x00063708) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7cec,	// (0x00063708) list_medium_line_x4_t4_g7_g2

0x7cf8,	// (0x00063714) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7cf8,	// (0x00063714) list_medium_line_x4_t4_g7_g3

0x7d07,	// (0x00063723) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7d07,	// (0x00063723) list_medium_line_x4_t4_g7_g4

0x7d13,	// (0x0006372f) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7d13,	// (0x0006372f) list_medium_line_x4_t4_g7_g5

0x7d22,	// (0x0006373e) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7d22,	// (0x0006373e) list_medium_line_x4_t4_g7_g6

0x7d31,	// (0x0006374d) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7d31,	// (0x0006374d) list_medium_line_x4_t4_g7_g7

0x0006,

0xf93a,	// (0x0006b356) list_medium_line_x4_t4_g7_g_ParamLimits

0xf93a,	// (0x0006b356) list_medium_line_x4_t4_g7_g

0x7d3d,	// (0x00063759) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7d3d,	// (0x00063759) list_medium_line_x4_t4_g7_t1

0x7d52,	// (0x0006376e) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7d52,	// (0x0006376e) list_medium_line_x4_t4_g7_t2

0x7d67,	// (0x00063783) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7d67,	// (0x00063783) list_medium_line_x4_t4_g7_t3

0x7d7c,	// (0x00063798) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7d7c,	// (0x00063798) list_medium_line_x4_t4_g7_t4

0x7d8e,	// (0x000637aa) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7d8e,	// (0x000637aa) list_medium_line_x4_t4_g7_t5

0x0004,

0xf949,	// (0x0006b365) list_medium_line_x4_t4_g7_t_ParamLimits

0xf949,	// (0x0006b365) list_medium_line_x4_t4_g7_t

0x7da0,	// (0x000637bc) list_single_dyc_row_pane_ParamLimits

0x7da0,	// (0x000637bc) list_single_dyc_row_pane

0x8479,	// (0x00063e95) call5_gesture_pane_ParamLimits

0x8479,	// (0x00063e95) call5_gesture_pane

0x84ad,	// (0x00063ec9) call5_windows_pane_ParamLimits

0x84ad,	// (0x00063ec9) call5_windows_pane

0x8500,	// (0x00063f1c) call5_swipe_1_pane_cp_ParamLimits

0x8500,	// (0x00063f1c) call5_swipe_1_pane_cp

0x850c,	// (0x00063f28) call5_swipe_2_pane_cp_ParamLimits

0x850c,	// (0x00063f28) call5_swipe_2_pane_cp

0xaa2c,	// (0x00066448) call5_image_pane_cp

0x8518,	// (0x00063f34) popup_call5_audio_first_window_cp_ParamLimits

0x8518,	// (0x00063f34) popup_call5_audio_first_window_cp

0xe6aa,	// (0x0006a0c6) call5_swipe_1_pane_g1_cp_ParamLimits

0xe6aa,	// (0x0006a0c6) call5_swipe_1_pane_g1_cp

0xe732,	// (0x0006a14e) call5_swipe_1_pane_g2_cp

0xe6c3,	// (0x0006a0df) call5_swipe_1_pane_t1_cp_ParamLimits

0xe6c3,	// (0x0006a0df) call5_swipe_1_pane_t1_cp

0xe6aa,	// (0x0006a0c6) call5_swipe_2_pane_g1_cp_ParamLimits

0xe6aa,	// (0x0006a0c6) call5_swipe_2_pane_g1_cp

0xe73a,	// (0x0006a156) call5_swipe_2_pane_g2_cp

0xe742,	// (0x0006a15e) call5_swipe_2_pane_t1_cp_ParamLimits

0xe742,	// (0x0006a15e) call5_swipe_2_pane_t1_cp

0xad5e,	// (0x0006677a) main_sp_fs_email_pane

0xe757,	// (0x0006a173) main_sp_fs_listscroll_pane_te

0x9e79,	// (0x00065895) popup_sp_fs_action_menu_pane_ParamLimits

0x9e79,	// (0x00065895) popup_sp_fs_action_menu_pane

0xccec,	// (0x00068708) bg_sp_fs_ctrlbar_pane_g1

0xe760,	// (0x0006a17c) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xe769,	// (0x0006a185) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xe772,	// (0x0006a18e) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xccec,	// (0x00068708) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0x0b26,	// (0x0005c542) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xcad1,	// (0x000684ed) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xcad1,	// (0x000684ed) bg_sp_fs_ctrlbar_ddmenu_pane

0xe77b,	// (0x0006a197) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe77b,	// (0x0006a197) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe787,	// (0x0006a1a3) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe787,	// (0x0006a1a3) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0x0b2f,	// (0x0005c54b) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0x0b2f,	// (0x0005c54b) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe793,	// (0x0006a1af) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe793,	// (0x0006a1af) main_sp_fs_ctrlbar_ddmenu_pane_t1

0x8526,	// (0x00063f42) list_medium_line_t2_right_icon_g1

0x852e,	// (0x00063f4a) list_medium_line_t2_right_icon_t1

0x853e,	// (0x00063f5a) list_medium_line_t2_right_icon_t2

0x0001,

0xf9f7,	// (0x0006b413) list_medium_line_t2_right_icon_t

0xc8e4,	// (0x00068300) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc8e4,	// (0x00068300) bg_sp_fs_ctrlbar_pane

0x858f,	// (0x00063fab) main_sp_fs_ctrlbar_button_pane_cp01

0x8597,	// (0x00063fb3) main_sp_fs_ctrlbar_ddmenu_pane

0xe7e5,	// (0x0006a201) main_sp_fs_ctrlbar_pane_g1

0xe7f1,	// (0x0006a20d) main_sp_fs_ctrlbar_pane_g2

0x0001,

0x0b39,	// (0x0005c555) main_sp_fs_ctrlbar_pane_g

0xe7fd,	// (0x0006a219) main_sp_fs_ctrlbar_pane_t1

0x85a1,	// (0x00063fbd) main_sp_fs_ctrlbar_pane

0x85b7,	// (0x00063fd3) main_sp_fs_listscroll_pane_te_cp01

0x85c8,	// (0x00063fe4) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x85c8,	// (0x00063fe4) popup_sp_fs_action_menu_pane_cp01

0xad5e,	// (0x0006677a) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xad5e,	// (0x0006677a) bg_sp_fs_highlight_list_pane_cp01

0x9ebb,	// (0x000658d7) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0x9ebb,	// (0x000658d7) sp_fs_action_menu_list_gene_pane_g1

0xe82d,	// (0x0006a249) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe82d,	// (0x0006a249) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xf9fc,	// (0x0006b418) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xf9fc,	// (0x0006b418) sp_fs_action_menu_list_gene_pane_g

0x9eca,	// (0x000658e6) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0x9eca,	// (0x000658e6) sp_fs_action_menu_list_gene_pane_t1

0x9ee2,	// (0x000658fe) sp_fs_action_menu_list_gene_pane_ParamLimits

0x9ee2,	// (0x000658fe) sp_fs_action_menu_list_gene_pane

0xe83a,	// (0x0006a256) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe83a,	// (0x0006a256) popup_sp_fs_action_menu_bg_pane

0x9f01,	// (0x0006591d) sp_fs_action_menu_list_pane_ParamLimits

0x9f01,	// (0x0006591d) sp_fs_action_menu_list_pane

0x9f21,	// (0x0006593d) sp_fs_scroll_pane_cp01_ParamLimits

0x9f21,	// (0x0006593d) sp_fs_scroll_pane_cp01

0x85f2,	// (0x0006400e) list_medium_line_plain_t2_t1

0x8602,	// (0x0006401e) list_medium_line_plain_t2_t2

0x0001,

0xfa01,	// (0x0006b41d) list_medium_line_plain_t2_t

0x8610,	// (0x0006402c) list_medium_line_plain_t3_t1

0x8620,	// (0x0006403c) list_medium_line_plain_t3_t2

0x862e,	// (0x0006404a) list_medium_line_plain_t3_t3

0x0002,

0xfa06,	// (0x0006b422) list_medium_line_plain_t3_t

0x1e26,	// (0x0005d842) list_medium_line_x2_t2_g2_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t2_g2_g1

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t2_g2_g2_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0006ac62) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0006ac62) list_medium_line_x2_t2_g2_g

0x330a,	// (0x0005ed26) list_medium_line_x2_t2_g2_t1_ParamLimits

0x330a,	// (0x0005ed26) list_medium_line_x2_t2_g2_t1

0x1e71,	// (0x0005d88d) list_medium_line_x2_t2_g2_t2_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_x2_t2_g2_t2

0x0001,

0xfa0d,	// (0x0006b429) list_medium_line_x2_t2_g2_t_ParamLimits

0xfa0d,	// (0x0006b429) list_medium_line_x2_t2_g2_t

0x1e26,	// (0x0005d842) list_medium_line_x2_t4_g2_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t4_g2_g1

0x863c,	// (0x00064058) list_medium_line_x2_t4_g2_g2_ParamLimits

0x863c,	// (0x00064058) list_medium_line_x2_t4_g2_g2

0x0001,

0xfa12,	// (0x0006b42e) list_medium_line_x2_t4_g2_g_ParamLimits

0xfa12,	// (0x0006b42e) list_medium_line_x2_t4_g2_g

0x864e,	// (0x0006406a) list_medium_line_x2_t4_g2_t1_ParamLimits

0x864e,	// (0x0006406a) list_medium_line_x2_t4_g2_t1

0x8668,	// (0x00064084) list_medium_line_x2_t4_g2_t2_ParamLimits

0x8668,	// (0x00064084) list_medium_line_x2_t4_g2_t2

0x867e,	// (0x0006409a) list_medium_line_x2_t4_g2_t3_ParamLimits

0x867e,	// (0x0006409a) list_medium_line_x2_t4_g2_t3

0x1e71,	// (0x0005d88d) list_medium_line_x2_t4_g2_t4_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_x2_t4_g2_t4

0x0003,

0xfa17,	// (0x0006b433) list_medium_line_x2_t4_g2_t_ParamLimits

0xfa17,	// (0x0006b433) list_medium_line_x2_t4_g2_t

0x8693,	// (0x000640af) list_medium_line_t3_right_iconx2_g1

0x8526,	// (0x00063f42) list_medium_line_t3_right_iconx2_g2

0x869b,	// (0x000640b7) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfa20,	// (0x0006b43c) list_medium_line_t3_right_iconx2_g

0x86a3,	// (0x000640bf) list_medium_line_t3_right_iconx2_t1

0x86b3,	// (0x000640cf) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfa27,	// (0x0006b443) list_medium_line_t3_right_iconx2_t

0x1e26,	// (0x0005d842) list_medium_line_x3_t4_g4_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x3_t4_g4_g1

0x1e32,	// (0x0005d84e) list_medium_line_x3_t4_g4_g2_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x3_t4_g4_g2

0x1ed7,	// (0x0005d8f3) list_medium_line_x3_t4_g4_g3_ParamLimits

0x1ed7,	// (0x0005d8f3) list_medium_line_x3_t4_g4_g3

0x86c1,	// (0x000640dd) list_medium_line_x3_t4_g4_g4_ParamLimits

0x86c1,	// (0x000640dd) list_medium_line_x3_t4_g4_g4

0x0003,

0xfa2c,	// (0x0006b448) list_medium_line_x3_t4_g4_g_ParamLimits

0xfa2c,	// (0x0006b448) list_medium_line_x3_t4_g4_g

0x86cd,	// (0x000640e9) list_medium_line_x3_t4_g4_t1_ParamLimits

0x86cd,	// (0x000640e9) list_medium_line_x3_t4_g4_t1

0x86e4,	// (0x00064100) list_medium_line_x3_t4_g4_t2_ParamLimits

0x86e4,	// (0x00064100) list_medium_line_x3_t4_g4_t2

0x86f9,	// (0x00064115) list_medium_line_x3_t4_g4_t3_ParamLimits

0x86f9,	// (0x00064115) list_medium_line_x3_t4_g4_t3

0x870e,	// (0x0006412a) list_medium_line_x3_t4_g4_t4_ParamLimits

0x870e,	// (0x0006412a) list_medium_line_x3_t4_g4_t4

0x0003,

0xfa35,	// (0x0006b451) list_medium_line_x3_t4_g4_t_ParamLimits

0xfa35,	// (0x0006b451) list_medium_line_x3_t4_g4_t

0x872b,	// (0x00064147) list_single_dyc_row_text_pane_t1_ParamLimits

0x872b,	// (0x00064147) list_single_dyc_row_text_pane_t1

0x8762,	// (0x0006417e) list_single_dyc_row_text_pane_t2_ParamLimits

0x8762,	// (0x0006417e) list_single_dyc_row_text_pane_t2

0x9f47,	// (0x00065963) list_single_dyc_row_text_pane_t3_ParamLimits

0x9f47,	// (0x00065963) list_single_dyc_row_text_pane_t3

0x0005,

0xfa3e,	// (0x0006b45a) list_single_dyc_row_text_pane_t_ParamLimits

0xfa3e,	// (0x0006b45a) list_single_dyc_row_text_pane_t

0x9f6b,	// (0x00065987) list_single_dyc_row_pane_g1_ParamLimits

0x9f6b,	// (0x00065987) list_single_dyc_row_pane_g1

0x9f77,	// (0x00065993) list_single_dyc_row_pane_g2_ParamLimits

0x9f77,	// (0x00065993) list_single_dyc_row_pane_g2

0x9f83,	// (0x0006599f) list_single_dyc_row_pane_g3_ParamLimits

0x9f83,	// (0x0006599f) list_single_dyc_row_pane_g3

0x9f8f,	// (0x000659ab) list_single_dyc_row_pane_g4_ParamLimits

0x9f8f,	// (0x000659ab) list_single_dyc_row_pane_g4

0x0003,

0xfa4b,	// (0x0006b467) list_single_dyc_row_pane_g_ParamLimits

0xfa4b,	// (0x0006b467) list_single_dyc_row_pane_g

0x9f9b,	// (0x000659b7) list_single_dyc_row_text_pane_ParamLimits

0x9f9b,	// (0x000659b7) list_single_dyc_row_text_pane

0x9b69,	// (0x00065585) bg_sp_fs_scroll_pane

0xe848,	// (0x0006a264) thumb_sp_fs_scroll_pane

0x6e94,	// (0x000628b0) list_medium_line_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_g1

0x8885,	// (0x000642a1) list_medium_line_t1_ParamLimits

0x8885,	// (0x000642a1) list_medium_line_t1

0x1e26,	// (0x0005d842) list_medium_line_x2_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_g1

0x1e32,	// (0x0005d84e) list_medium_line_x2_g2_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x2_g2

0x0001,

0xfa54,	// (0x0006b470) list_medium_line_x2_g_ParamLimits

0xfa54,	// (0x0006b470) list_medium_line_x2_g

0x9fba,	// (0x000659d6) list_medium_line_x2_t1_ParamLimits

0x9fba,	// (0x000659d6) list_medium_line_x2_t1

0x1e26,	// (0x0005d842) list_medium_line_x3_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x3_g1

0x1e32,	// (0x0005d84e) list_medium_line_x3_g2_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x3_g2

0x0001,

0xfa54,	// (0x0006b470) list_medium_line_x3_g_ParamLimits

0xfa54,	// (0x0006b470) list_medium_line_x3_g

0x9fba,	// (0x000659d6) list_medium_line_x3_t1_ParamLimits

0x9fba,	// (0x000659d6) list_medium_line_x3_t1

0xe851,	// (0x0006a26d) thumb_sp_fs_scroll_pane_g1

0xe85a,	// (0x0006a276) thumb_sp_fs_scroll_pane_g2

0xe863,	// (0x0006a27f) thumb_sp_fs_scroll_pane_g3

0x0002,

0x0ba0,	// (0x0005c5bc) thumb_sp_fs_scroll_pane_g

0xe851,	// (0x0006a26d) bg_sp_fs_scroll_pane_g1

0xe85a,	// (0x0006a276) bg_sp_fs_scroll_pane_g2

0xe863,	// (0x0006a27f) bg_sp_fs_scroll_pane_g3

0x0002,

0x0ba0,	// (0x0005c5bc) bg_sp_fs_scroll_pane_g

0x1e26,	// (0x0005d842) list_medium_line_x2_t3_g4_g1_ParamLimits

0x1e26,	// (0x0005d842) list_medium_line_x2_t3_g4_g1

0x1ecb,	// (0x0005d8e7) list_medium_line_x2_t3_g4_g2_ParamLimits

0x1ecb,	// (0x0005d8e7) list_medium_line_x2_t3_g4_g2

0x1e32,	// (0x0005d84e) list_medium_line_x2_t3_g4_g3_ParamLimits

0x1e32,	// (0x0005d84e) list_medium_line_x2_t3_g4_g3

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t3_g4_g4_ParamLimits

0x1e3e,	// (0x0005d85a) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0006acde) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0006acde) list_medium_line_x2_t3_g4_g

0x889a,	// (0x000642b6) list_medium_line_x2_t3_g4_t1_ParamLimits

0x889a,	// (0x000642b6) list_medium_line_x2_t3_g4_t1

0x88b0,	// (0x000642cc) list_medium_line_x2_t3_g4_t2_ParamLimits

0x88b0,	// (0x000642cc) list_medium_line_x2_t3_g4_t2

0x1e71,	// (0x0005d88d) list_medium_line_x2_t3_g4_t3_ParamLimits

0x1e71,	// (0x0005d88d) list_medium_line_x2_t3_g4_t3

0x0002,

0xfa59,	// (0x0006b475) list_medium_line_x2_t3_g4_t_ParamLimits

0xfa59,	// (0x0006b475) list_medium_line_x2_t3_g4_t

0x6e94,	// (0x000628b0) list_medium_line_g2_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_g2_g1

0x6ea0,	// (0x000628bc) list_medium_line_g2_g2_ParamLimits

0x6ea0,	// (0x000628bc) list_medium_line_g2_g2

0x0001,

0xf7bf,	// (0x0006b1db) list_medium_line_g2_g_ParamLimits

0xf7bf,	// (0x0006b1db) list_medium_line_g2_g

0x88ca,	// (0x000642e6) list_medium_line_g2_t1_ParamLimits

0x88ca,	// (0x000642e6) list_medium_line_g2_t1

0x6e94,	// (0x000628b0) list_medium_line_t3_g2_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_t3_g2_g1

0x6ea0,	// (0x000628bc) list_medium_line_t3_g2_g2_ParamLimits

0x6ea0,	// (0x000628bc) list_medium_line_t3_g2_g2

0x0001,

0xf7bf,	// (0x0006b1db) list_medium_line_t3_g2_g_ParamLimits

0xf7bf,	// (0x0006b1db) list_medium_line_t3_g2_g

0x88df,	// (0x000642fb) list_medium_line_t3_g2_t1_ParamLimits

0x88df,	// (0x000642fb) list_medium_line_t3_g2_t1

0x88f9,	// (0x00064315) list_medium_line_t3_g2_t2_ParamLimits

0x88f9,	// (0x00064315) list_medium_line_t3_g2_t2

0x890f,	// (0x0006432b) list_medium_line_t3_g2_t3_ParamLimits

0x890f,	// (0x0006432b) list_medium_line_t3_g2_t3

0x0002,

0xfa60,	// (0x0006b47c) list_medium_line_t3_g2_t_ParamLimits

0xfa60,	// (0x0006b47c) list_medium_line_t3_g2_t

0x8526,	// (0x00063f42) list_medium_line_right_icon_g1

0x8925,	// (0x00064341) list_medium_line_right_icon_t1

0x6e94,	// (0x000628b0) list_medium_line_t2_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_t2_g1

0x8933,	// (0x0006434f) list_medium_line_t2_t1_ParamLimits

0x8933,	// (0x0006434f) list_medium_line_t2_t1

0x894d,	// (0x00064369) list_medium_line_t2_t2_ParamLimits

0x894d,	// (0x00064369) list_medium_line_t2_t2

0x0001,

0xfa67,	// (0x0006b483) list_medium_line_t2_t_ParamLimits

0xfa67,	// (0x0006b483) list_medium_line_t2_t

0x6e94,	// (0x000628b0) list_medium_line_t3_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_t3_g1

0x8962,	// (0x0006437e) list_medium_line_t3_t1_ParamLimits

0x8962,	// (0x0006437e) list_medium_line_t3_t1

0x897c,	// (0x00064398) list_medium_line_t3_t2_ParamLimits

0x897c,	// (0x00064398) list_medium_line_t3_t2

0x8992,	// (0x000643ae) list_medium_line_t3_t3_ParamLimits

0x8992,	// (0x000643ae) list_medium_line_t3_t3

0x0002,

0xfa6c,	// (0x0006b488) list_medium_line_t3_t_ParamLimits

0xfa6c,	// (0x0006b488) list_medium_line_t3_t

0x6e94,	// (0x000628b0) list_medium_line_g3_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_g3_g1

0x89a7,	// (0x000643c3) list_medium_line_g3_g2_ParamLimits

0x89a7,	// (0x000643c3) list_medium_line_g3_g2

0x6ea0,	// (0x000628bc) list_medium_line_g3_g3_ParamLimits

0x6ea0,	// (0x000628bc) list_medium_line_g3_g3

0x0002,

0xfa73,	// (0x0006b48f) list_medium_line_g3_g_ParamLimits

0xfa73,	// (0x0006b48f) list_medium_line_g3_g

0x89b3,	// (0x000643cf) list_medium_line_g3_t1_ParamLimits

0x89b3,	// (0x000643cf) list_medium_line_g3_t1

0x6e94,	// (0x000628b0) list_medium_line_t2_g3_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_t2_g3_g1

0x89a7,	// (0x000643c3) list_medium_line_t2_g3_g2_ParamLimits

0x89a7,	// (0x000643c3) list_medium_line_t2_g3_g2

0x6ea0,	// (0x000628bc) list_medium_line_t2_g3_g3_ParamLimits

0x6ea0,	// (0x000628bc) list_medium_line_t2_g3_g3

0x0002,

0xfa73,	// (0x0006b48f) list_medium_line_t2_g3_g_ParamLimits

0xfa73,	// (0x0006b48f) list_medium_line_t2_g3_g

0x89c8,	// (0x000643e4) list_medium_line_t2_g3_t1_ParamLimits

0x89c8,	// (0x000643e4) list_medium_line_t2_g3_t1

0x89e2,	// (0x000643fe) list_medium_line_t2_g3_t2_ParamLimits

0x89e2,	// (0x000643fe) list_medium_line_t2_g3_t2

0x0001,

0xfa7a,	// (0x0006b496) list_medium_line_t2_g3_t_ParamLimits

0xfa7a,	// (0x0006b496) list_medium_line_t2_g3_t

0x6e94,	// (0x000628b0) list_medium_line_t3_g3_g1_ParamLimits

0x6e94,	// (0x000628b0) list_medium_line_t3_g3_g1

0x89a7,	// (0x000643c3) list_medium_line_t3_g3_g2_ParamLimits

0x89a7,	// (0x000643c3) list_medium_line_t3_g3_g2

0x6ea0,	// (0x000628bc) list_medium_line_t3_g3_g3_ParamLimits

0x6ea0,	// (0x000628bc) list_medium_line_t3_g3_g3

0x0002,

0xfa73,	// (0x0006b48f) list_medium_line_t3_g3_g_ParamLimits

0xfa73,	// (0x0006b48f) list_medium_line_t3_g3_g

0x89f8,	// (0x00064414) list_medium_line_t3_g3_t1_ParamLimits

0x89f8,	// (0x00064414) list_medium_line_t3_g3_t1

0x8a11,	// (0x0006442d) list_medium_line_t3_g3_t2_ParamLimits

0x8a11,	// (0x0006442d) list_medium_line_t3_g3_t2

0x8a27,	// (0x00064443) list_medium_line_t3_g3_t3_ParamLimits

0x8a27,	// (0x00064443) list_medium_line_t3_g3_t3

0x0002,

0xfa7f,	// (0x0006b49b) list_medium_line_t3_g3_t_ParamLimits

0xfa7f,	// (0x0006b49b) list_medium_line_t3_g3_t

0x8693,	// (0x000640af) list_medium_line_right_iconx2_g1

0x8526,	// (0x00063f42) list_medium_line_right_iconx2_g2

0x0001,

0xfa86,	// (0x0006b4a2) list_medium_line_right_iconx2_g

0x8a3d,	// (0x00064459) list_medium_line_right_iconx2_t1

0x8693,	// (0x000640af) list_medium_line_t2_right_iconx2_g1

0x8526,	// (0x00063f42) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfa86,	// (0x0006b4a2) list_medium_line_t2_right_iconx2_g

0x8a4b,	// (0x00064467) list_medium_line_t2_right_iconx2_t1

0x8a5b,	// (0x00064477) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfa8b,	// (0x0006b4a7) list_medium_line_t2_right_iconx2_t

0x8a69,	// (0x00064485) list_medium_line_x4_t4_t1

0x8a77,	// (0x00064493) list_medium_line_x4_t4_t2

0x8a87,	// (0x000644a3) list_medium_line_x4_t4_t3

0x8a97,	// (0x000644b3) list_medium_line_x4_t4_t4

0x0003,

0xfa90,	// (0x0006b4ac) list_medium_line_x4_t4_t

0x8ad1,	// (0x000644ed) tport_appsw_pane_ParamLimits

0x8ad1,	// (0x000644ed) tport_appsw_pane

0x8adf,	// (0x000644fb) tport_contact_pane_ParamLimits

0x8adf,	// (0x000644fb) tport_contact_pane

0x8aef,	// (0x0006450b) tport_listscroll_pane_ParamLimits

0x8aef,	// (0x0006450b) tport_listscroll_pane

0x8aff,	// (0x0006451b) cell_tport_appsw_pane_ParamLimits

0x8aff,	// (0x0006451b) cell_tport_appsw_pane

0xcfab,	// (0x000689c7) tport_appsw_pane_g1_ParamLimits

0xcfab,	// (0x000689c7) tport_appsw_pane_g1

0xe86c,	// (0x0006a288) tport_contact_pane_g1

0xe875,	// (0x0006a291) tport_contact_pane_t1

0xe883,	// (0x0006a29f) tport_contact_pane_t2

0x0001,

0x0be7,	// (0x0005c603) tport_contact_pane_t

0xe891,	// (0x0006a2ad) list_tport_pane

0xe89a,	// (0x0006a2b6) scroll_pane_cp_030

0x8b32,	// (0x0006454e) cell_tport_appsw_pane_g1

0x8b42,	// (0x0006455e) cell_tport_appsw_pane_t1

0x8b50,	// (0x0006456c) grid_highlight_pane_cp019

0x8b58,	// (0x00064574) list_tport_double_graphic_pane_ParamLimits

0x8b58,	// (0x00064574) list_tport_double_graphic_pane

0xad5e,	// (0x0006677a) list_highlight_pane_cp023_ParamLimits

0xad5e,	// (0x0006677a) list_highlight_pane_cp023

0x8b69,	// (0x00064585) list_tport_double_graphic_pane_g1_ParamLimits

0x8b69,	// (0x00064585) list_tport_double_graphic_pane_g1

0x8b76,	// (0x00064592) list_tport_double_graphic_pane_t1_ParamLimits

0x8b76,	// (0x00064592) list_tport_double_graphic_pane_t1

0x8b8b,	// (0x000645a7) list_tport_double_graphic_pane_t2_ParamLimits

0x8b8b,	// (0x000645a7) list_tport_double_graphic_pane_t2

0x0001,

0xfaa0,	// (0x0006b4bc) list_tport_double_graphic_pane_t_ParamLimits

0xfaa0,	// (0x0006b4bc) list_tport_double_graphic_pane_t

0x9b69,	// (0x00065585) main_cale_note_pane

0x6627,	// (0x00062043) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6627,	// (0x00062043) cell_vitu2_function_top_wide_pane_cp01

0x814c,	// (0x00063b68) wait_bar_pane_cp05_ParamLimits

0xad5e,	// (0x0006677a) listscroll_cmail_pane

0xe8a3,	// (0x0006a2bf) list_cmail_pane

0x8b9d,	// (0x000645b9) list_cmail_body_pane

0x8bc5,	// (0x000645e1) list_single_cmail_header_caption_pane

0x8bf1,	// (0x0006460d) list_single_cmail_header_detail_pane_ParamLimits

0x8bf1,	// (0x0006460d) list_single_cmail_header_detail_pane

0xe8b3,	// (0x0006a2cf) list_single_cmail_header_caption_pane_t1

0x8c2a,	// (0x00064646) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8c2a,	// (0x00064646) list_single_cmail_header_detail_pane_g1

0x9fd0,	// (0x000659ec) list_single_cmail_header_detail_pane_g2_ParamLimits

0x9fd0,	// (0x000659ec) list_single_cmail_header_detail_pane_g2

0x0002,

0xfaa5,	// (0x0006b4c1) list_single_cmail_header_detail_pane_g_ParamLimits

0xfaa5,	// (0x0006b4c1) list_single_cmail_header_detail_pane_g

0x9fdc,	// (0x000659f8) list_single_cmail_header_detail_pane_t1_ParamLimits

0x9fdc,	// (0x000659f8) list_single_cmail_header_detail_pane_t1

0xa044,	// (0x00065a60) list_single_cmail_header_editor_pane_bg_ParamLimits

0xa044,	// (0x00065a60) list_single_cmail_header_editor_pane_bg

0xe34f,	// (0x00069d6b) list_cmail_body_pane_g1

0xe8d7,	// (0x0006a2f3) list_cmail_body_pane_t1

0xd710,	// (0x0006912c) list_single_cmail_header_editor_pane_bg_g1

0xac85,	// (0x000666a1) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd720,	// (0x0006913c) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd718,	// (0x00069134) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd950,	// (0x0006936c) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd740,	// (0x0006915c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd730,	// (0x0006914c) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd738,	// (0x00069154) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xac65,	// (0x00066681) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8c40,	// (0x0006465c) calenote_gesture_pane_ParamLimits

0x8c40,	// (0x0006465c) calenote_gesture_pane

0x8c5a,	// (0x00064676) calenote_window_pane_ParamLimits

0x8c5a,	// (0x00064676) calenote_window_pane

0xe8e5,	// (0x0006a301) popup_note_window_cp01

0x8c72,	// (0x0006468e) calenote_swipe_1_pane_ParamLimits

0x8c72,	// (0x0006468e) calenote_swipe_1_pane

0x850c,	// (0x00063f28) calenote_swipe_2_pane_ParamLimits

0x850c,	// (0x00063f28) calenote_swipe_2_pane

0xe6aa,	// (0x0006a0c6) calenote_swipe_1_pane_g1_ParamLimits

0xe6aa,	// (0x0006a0c6) calenote_swipe_1_pane_g1

0xe6b7,	// (0x0006a0d3) calenote_swipe_1_pane_g2_ParamLimits

0xe6b7,	// (0x0006a0d3) calenote_swipe_1_pane_g2

0x0001,

0xf9f2,	// (0x0006b40e) calenote_swipe_1_pane_g_ParamLimits

0xf9f2,	// (0x0006b40e) calenote_swipe_1_pane_g

0xe8f7,	// (0x0006a313) calenote_swipe_1_pane_t1_ParamLimits

0xe8f7,	// (0x0006a313) calenote_swipe_1_pane_t1

0xe6aa,	// (0x0006a0c6) calenote_swipe_2_pane_g1_ParamLimits

0xe6aa,	// (0x0006a0c6) calenote_swipe_2_pane_g1

0xe916,	// (0x0006a332) calenote_swipe_2_pane_g2_ParamLimits

0xe916,	// (0x0006a332) calenote_swipe_2_pane_g2

0x0001,

0xfab1,	// (0x0006b4cd) calenote_swipe_2_pane_g_ParamLimits

0xfab1,	// (0x0006b4cd) calenote_swipe_2_pane_g

0xe922,	// (0x0006a33e) calenote_swipe_2_pane_t1_ParamLimits

0xe922,	// (0x0006a33e) calenote_swipe_2_pane_t1

0x9b69,	// (0x00065585) main_mup_navstr_pane

0x534c,	// (0x00060d68) main_mup3_pane_t7_ParamLimits

0x534c,	// (0x00060d68) main_mup3_pane_t7

0x5d57,	// (0x00061773) main_mp4_pane_g6_ParamLimits

0x5d57,	// (0x00061773) main_mp4_pane_g6

0x60d7,	// (0x00061af3) main_image3_pane_t4_ParamLimits

0x60d7,	// (0x00061af3) main_image3_pane_t4

0x8c85,	// (0x000646a1) popup_navstr_preview_pane_ParamLimits

0x8c85,	// (0x000646a1) popup_navstr_preview_pane

0x8c91,	// (0x000646ad) scroll_navstr_pane_ParamLimits

0x8c91,	// (0x000646ad) scroll_navstr_pane

0x9b69,	// (0x00065585) bg_popup_preview_window_pane_cp04

0xe949,	// (0x0006a365) popup_navstr_preview_pane_t1

0x8c9d,	// (0x000646b9) scroll_navstr_pane_g1_ParamLimits

0x8c9d,	// (0x000646b9) scroll_navstr_pane_g1

0x8caa,	// (0x000646c6) scroll_navstr_pane_t1_ParamLimits

0x8caa,	// (0x000646c6) scroll_navstr_pane_t1

0xe8ee,	// (0x0006a30a) bg_button_pane_cp014

0xe8ee,	// (0x0006a30a) bg_button_pane_cp030

0x841f,	// (0x00063e3b) list_double_fisheye_pane_g4_ParamLimits

0x841f,	// (0x00063e3b) list_double_fisheye_pane_g4

0x842b,	// (0x00063e47) list_double_fisheye_pane_g5_ParamLimits

0x842b,	// (0x00063e47) list_double_fisheye_pane_g5

0xcf7b,	// (0x00068997) sp_fs_scroll_pane_cp03

0xe7e5,	// (0x0006a201) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe7f1,	// (0x0006a20d) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0x0b39,	// (0x0005c555) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe7fd,	// (0x0006a219) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xe8ab,	// (0x0006a2c7) sp_fs_scroll_pane_cp02

0xa96b,	// (0x00066387) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa96b,	// (0x00066387) popup_sp_fs_calendar_preview_list_single_pane

0x9b69,	// (0x00065585) main_cam6_pano_pane

0x433c,	// (0x0005fd58) main_mup3_pane_ParamLimits

0x9b69,	// (0x00065585) main_phacti_pane

0x8021,	// (0x00063a3d) bg_button_pane_cp11

0x8039,	// (0x00063a55) main_mobtv_info_pane_g2_ParamLimits

0x8039,	// (0x00063a55) main_mobtv_info_pane_g2

0x0001,

0xf983,	// (0x0006b39f) main_mobtv_info_pane_g_ParamLimits

0xf983,	// (0x0006b39f) main_mobtv_info_pane_g

0x81eb,	// (0x00063c07) sc_clock_pane_t5_ParamLimits

0x81eb,	// (0x00063c07) sc_clock_pane_t5

0x828c,	// (0x00063ca8) main_radioblah_pane_g1_ParamLimits

0xe5f6,	// (0x0006a012) main_radioblah_pane_t3_ParamLimits

0xe5f6,	// (0x0006a012) main_radioblah_pane_t3

0xe60e,	// (0x0006a02a) main_radioblah_pane_t4_ParamLimits

0xe60e,	// (0x0006a02a) main_radioblah_pane_t4

0x82aa,	// (0x00063cc6) main_radioblah_text_pane_ParamLimits

0x82aa,	// (0x00063cc6) main_radioblah_text_pane

0x82b7,	// (0x00063cd3) main_radioblah_info_pane_g1_ParamLimits

0x834c,	// (0x00063d68) main_radioblah_info_pane_t4_ParamLimits

0x834c,	// (0x00063d68) main_radioblah_info_pane_t4

0xad5e,	// (0x0006677a) main_sp_fs_calendar_pane

0x8cbc,	// (0x000646d8) main_phacti_pane_g1

0x8cc4,	// (0x000646e0) phacti_note_pane_ParamLimits

0x8cc4,	// (0x000646e0) phacti_note_pane

0xe960,	// (0x0006a37c) phacti_term_pane_ParamLimits

0xe960,	// (0x0006a37c) phacti_term_pane

0xe975,	// (0x0006a391) phacti_note_pane_t1_ParamLimits

0xe975,	// (0x0006a391) phacti_note_pane_t1

0xa05b,	// (0x00065a77) phacti_term_pane_g1

0xa063,	// (0x00065a7f) phacti_term_pane_t1_ParamLimits

0xa063,	// (0x00065a7f) phacti_term_pane_t1

0xe98c,	// (0x0006a3a8) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe994,	// (0x0006a3b0) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0x0c0e,	// (0x0005c62a) popup_sp_fs_calendar_preview_list_single_pane_g

0xe99c,	// (0x0006a3b8) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe99c,	// (0x0006a3b8) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe9b2,	// (0x0006a3ce) aid_popup_sp_fs_bg_corner_pane

0xccec,	// (0x00068708) popup_sp_fs_calendar_preview_bg_pane_g1

0x9b69,	// (0x00065585) popup_sp_fs_calendar_preview_bg_pane

0xa018,	// (0x00065a34) popup_sp_fs_calendar_preview_list_pane

0xc8e4,	// (0x00068300) bg_main_sp_fs_cale_pane_ParamLimits

0xc8e4,	// (0x00068300) bg_main_sp_fs_cale_pane

0xa096,	// (0x00065ab2) listscroll_cale_mrui_pane_ParamLimits

0xa096,	// (0x00065ab2) listscroll_cale_mrui_pane

0xa0ab,	// (0x00065ac7) listscroll_sp_fs_schedule_track_pane

0xa0b4,	// (0x00065ad0) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xa0b4,	// (0x00065ad0) main_sp_fs_ctrlbar_pane_cp01

0xe9ba,	// (0x0006a3d6) main_sp_fs_ribbon_pane

0xa0c7,	// (0x00065ae3) popup_sp_fs_cale_preview_window

0x8d27,	// (0x00064743) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8d27,	// (0x00064743) list_single_sp_fs_schedule_track_pane

0xd903,	// (0x0006931f) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xd903,	// (0x0006931f) bg_sp_fs_highlight_list_pane_cp03

0x8d4a,	// (0x00064766) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8d4a,	// (0x00064766) list_single_sp_fs_schedule_track_pane_g1

0x8d56,	// (0x00064772) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8d56,	// (0x00064772) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfabb,	// (0x0006b4d7) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfabb,	// (0x0006b4d7) list_single_sp_fs_schedule_track_pane_g

0x8d62,	// (0x0006477e) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8d62,	// (0x0006477e) list_single_sp_fs_schedule_track_pane_t1

0x8d7a,	// (0x00064796) sp_fs_schedule_track_pane_ParamLimits

0x8d7a,	// (0x00064796) sp_fs_schedule_track_pane

0xe9c2,	// (0x0006a3de) sp_fs_schedule_track_pane_g1

0xe9ca,	// (0x0006a3e6) sp_fs_schedule_track_pane_g2

0xe9d2,	// (0x0006a3ee) sp_fs_schedule_track_pane_g3

0xe9da,	// (0x0006a3f6) sp_fs_schedule_track_pane_g4

0xe9e2,	// (0x0006a3fe) sp_fs_schedule_track_pane_g5

0x0004,

0x0c18,	// (0x0005c634) sp_fs_schedule_track_pane_g

0xd710,	// (0x0006912c) bg_sp_fs_schedule_viewer_highlight_g1

0xac85,	// (0x000666a1) bg_sp_fs_schedule_viewer_highlight_g2

0xd718,	// (0x00069134) bg_sp_fs_schedule_viewer_highlight_g3

0xd720,	// (0x0006913c) bg_sp_fs_schedule_viewer_highlight_g4

0xd950,	// (0x0006936c) bg_sp_fs_schedule_viewer_highlight_g5

0xd730,	// (0x0006914c) bg_sp_fs_schedule_viewer_highlight_g6

0xd738,	// (0x00069154) bg_sp_fs_schedule_viewer_highlight_g7

0xd740,	// (0x0006915c) bg_sp_fs_schedule_viewer_highlight_g8

0xac65,	// (0x00066681) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfac0,	// (0x0006b4dc) bg_sp_fs_schedule_viewer_highlight_g

0x9b69,	// (0x00065585) bg_main_sp_fs_ribbon_pane

0x8d8a,	// (0x000647a6) main_sp_fs_ribbon_pane_g1

0xe9ea,	// (0x0006a406) main_sp_fs_ribbon_pane_t1

0x8d93,	// (0x000647af) main_sp_fs_ribbon_pane_t2

0xe9f9,	// (0x0006a415) main_sp_fs_ribbon_pane_t3

0x0002,

0xfad3,	// (0x0006b4ef) main_sp_fs_ribbon_pane_t

0xea08,	// (0x0006a424) main_sp_fs_ribbon_scheduler_pane

0xea10,	// (0x0006a42c) bg_main_sp_fs_ribbon_pane_g1

0xea19,	// (0x0006a435) bg_main_sp_fs_ribbon_pane_g2

0xea22,	// (0x0006a43e) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0x0c3d,	// (0x0005c659) bg_main_sp_fs_ribbon_pane_g

0xea2a,	// (0x0006a446) main_sp_fs_ribbon_scheduler_pane_g1

0xea33,	// (0x0006a44f) main_sp_fs_ribbon_scheduler_pane_g2

0xea3c,	// (0x0006a458) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0x0c44,	// (0x0005c660) main_sp_fs_ribbon_scheduler_pane_g

0xea45,	// (0x0006a461) list_cale_mrui_pane

0x8da2,	// (0x000647be) sp_fs_scroll_pane_cp07_ParamLimits

0x8da2,	// (0x000647be) sp_fs_scroll_pane_cp07

0x8dbe,	// (0x000647da) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8dbe,	// (0x000647da) bg_sp_fs_schedule_viewer_highlight

0xea52,	// (0x0006a46e) list_single_sp_fs_schedule_track_pane_cp01

0xea5a,	// (0x0006a476) list_sp_fs_schedule_track_pane

0xea62,	// (0x0006a47e) sp_fs_scroll_pane_cp06_ParamLimits

0xea62,	// (0x0006a47e) sp_fs_scroll_pane_cp06

0xccec,	// (0x00068708) bgmain_sp_fs_calendar_pane_g1

0x8dcb,	// (0x000647e7) list_single_cale_mrui_pane_ParamLimits

0x8dcb,	// (0x000647e7) list_single_cale_mrui_pane

0xa0d9,	// (0x00065af5) list_single_cale_mrui_row_pane_ParamLimits

0xa0d9,	// (0x00065af5) list_single_cale_mrui_row_pane

0xa0e6,	// (0x00065b02) list_single_cale_mrui_row_pane_g1_ParamLimits

0xa0e6,	// (0x00065b02) list_single_cale_mrui_row_pane_g1

0xa11e,	// (0x00065b3a) list_single_cale_mrui_row_pane_t1_ParamLimits

0xa11e,	// (0x00065b3a) list_single_cale_mrui_row_pane_t1

0x8dfc,	// (0x00064818) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8dfc,	// (0x00064818) list_single_cale_mrui_row_pane_t2

0xa130,	// (0x00065b4c) list_single_cale_mrui_row_pane_t3_ParamLimits

0xa130,	// (0x00065b4c) list_single_cale_mrui_row_pane_t3

0xa15f,	// (0x00065b7b) list_single_cale_mrui_row_pane_t4_ParamLimits

0xa15f,	// (0x00065b7b) list_single_cale_mrui_row_pane_t4

0x0003,

0xfae1,	// (0x0006b4fd) list_single_cale_mrui_row_pane_t_ParamLimits

0xfae1,	// (0x0006b4fd) list_single_cale_mrui_row_pane_t

0x8e62,	// (0x0006487e) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8e62,	// (0x0006487e) list_single_cmail_header_editor_pane_bg_cp01

0x8e82,	// (0x0006489e) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8e82,	// (0x0006489e) list_single_cmail_header_editor_pane_bg_cp02

0x8e9e,	// (0x000648ba) main_radioblah_text_pane_t1_ParamLimits

0x8e9e,	// (0x000648ba) main_radioblah_text_pane_t1

0xea81,	// (0x0006a49d) cam6_indi_pane_cp01

0xea89,	// (0x0006a4a5) cam6_mode_pane_cp01

0xea91,	// (0x0006a4ad) cam6_pano_pane

0xea9a,	// (0x0006a4b6) cam6_zoom_pane_cp01

0xeaa2,	// (0x0006a4be) cam6_pano_image_pane

0xeaad,	// (0x0006a4c9) cam6_pano_pane_g1

0xe34f,	// (0x00069d6b) cam6_pano_pane_g2

0xeab6,	// (0x0006a4d2) cam6_pano_pane_g3

0xeabf,	// (0x0006a4db) cam6_pano_pane_g4

0xd2a3,	// (0x00068cbf) cam6_pano_pane_g5

0xeac8,	// (0x0006a4e4) cam6_pano_pane_g6

0xead2,	// (0x0006a4ee) cam6_pano_pane_g7

0xeada,	// (0x0006a4f6) cam6_pano_pane_g8

0xeae3,	// (0x0006a4ff) cam6_pano_pane_g9

0x0008,

0x0c5b,	// (0x0005c677) cam6_pano_pane_g

0x9b69,	// (0x00065585) main_browser_tag_pane

0xe941,	// (0x0006a35d) grid_navstr_albumart_pane

0xeaee,	// (0x0006a50a) cell_navstr_albumart_pane_ParamLimits

0xeaee,	// (0x0006a50a) cell_navstr_albumart_pane

0xeb0e,	// (0x0006a52a) cell_navstr_albumart_pane_g1

0xc6b5,	// (0x000680d1) cell_navstr_albumart_pane_g2

0xc6c5,	// (0x000680e1) cell_navstr_albumart_pane_g3

0xc6bd,	// (0x000680d9) cell_navstr_albumart_pane_g4

0x0003,

0x0c6e,	// (0x0005c68a) cell_navstr_albumart_pane_g

0x8eb9,	// (0x000648d5) bt_list_pane_ParamLimits

0x8eb9,	// (0x000648d5) bt_list_pane

0x8eda,	// (0x000648f6) bt_list_pane_t1

0x8ee9,	// (0x00064905) bt_list_pane_t2

0x0001,

0xfaea,	// (0x0006b506) bt_list_pane_t

0x9b69,	// (0x00065585) main_cale_prevew_pane

0x8ef8,	// (0x00064914) popup_cale_preview_window_ParamLimits

0x8ef8,	// (0x00064914) popup_cale_preview_window

0xad5e,	// (0x0006677a) bg_popup_preview_window_pane_cp05_ParamLimits

0xad5e,	// (0x0006677a) bg_popup_preview_window_pane_cp05

0xeb16,	// (0x0006a532) list_cale_preview_pane_ParamLimits

0xeb16,	// (0x0006a532) list_cale_preview_pane

0x8f11,	// (0x0006492d) list_double_cale_preview_pane_ParamLimits

0x8f11,	// (0x0006492d) list_double_cale_preview_pane

0x8f23,	// (0x0006493f) list_single_cale_preview_pane_ParamLimits

0x8f23,	// (0x0006493f) list_single_cale_preview_pane

0x8f37,	// (0x00064953) list_single_cale_preview_pane_g1

0x8f3f,	// (0x0006495b) list_single_cale_preview_pane_t1_ParamLimits

0x8f3f,	// (0x0006495b) list_single_cale_preview_pane_t1

0x8f54,	// (0x00064970) list_double_cale_preview_pane_g1

0x8f5c,	// (0x00064978) list_double_cale_preview_pane_t1_ParamLimits

0x8f5c,	// (0x00064978) list_double_cale_preview_pane_t1

0x8f71,	// (0x0006498d) list_double_cale_preview_pane_t2_ParamLimits

0x8f71,	// (0x0006498d) list_double_cale_preview_pane_t2

0x0001,

0xfaef,	// (0x0006b50b) list_double_cale_preview_pane_t_ParamLimits

0xfaef,	// (0x0006b50b) list_double_cale_preview_pane_t

0x9b69,	// (0x00065585) main_ezdial_pane

0xad5e,	// (0x0006677a) main_sp_fs_email_pane_ParamLimits

0x854c,	// (0x00063f68) cmail_ddmenu_btn01_pane_ParamLimits

0x854c,	// (0x00063f68) cmail_ddmenu_btn01_pane

0x8561,	// (0x00063f7d) cmail_ddmenu_btn02_pane_ParamLimits

0x8561,	// (0x00063f7d) cmail_ddmenu_btn02_pane

0x8579,	// (0x00063f95) cmail_ddmenu_btn03_pane_ParamLimits

0x8579,	// (0x00063f95) cmail_ddmenu_btn03_pane

0x85a1,	// (0x00063fbd) main_sp_fs_ctrlbar_pane_ParamLimits

0x85b7,	// (0x00063fd3) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8b9d,	// (0x000645b9) list_cmail_body_pane_ParamLimits

0xe8c1,	// (0x0006a2dd) bg_button_pane_cp12

0xe8ca,	// (0x0006a2e6) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe8ca,	// (0x0006a2e6) list_single_cmail_header_detail_pane_g3

0xa020,	// (0x00065a3c) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa020,	// (0x00065a3c) list_single_cmail_header_detail_pane_t2

0x0001,

0xfaac,	// (0x0006b4c8) list_single_cmail_header_detail_pane_t_ParamLimits

0xfaac,	// (0x0006b4c8) list_single_cmail_header_detail_pane_t

0xa078,	// (0x00065a94) phacti_term_pane_t2_ParamLimits

0xa078,	// (0x00065a94) phacti_term_pane_t2

0x0001,

0xfab6,	// (0x0006b4d2) phacti_term_pane_t_ParamLimits

0xfab6,	// (0x0006b4d2) phacti_term_pane_t

0xeb22,	// (0x0006a53e) aid_size_list_single_double

0x8f89,	// (0x000649a5) popup_ezdial_listscroll_window

0x8fad,	// (0x000649c9) popup_number_entry_window_cp01

0xaa2c,	// (0x00066448) bg_popup_call_pane_cp09

0xeb2e,	// (0x0006a54a) ezdial_list_pane

0xeb36,	// (0x0006a552) scroll_pane_cp23

0xcad1,	// (0x000684ed) bg_button_pane_cp028_ParamLimits

0xcad1,	// (0x000684ed) bg_button_pane_cp028

0x8fbb,	// (0x000649d7) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x8fbb,	// (0x000649d7) cmail_ddmenu_btn01_pane_g1

0x8fcb,	// (0x000649e7) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x8fcb,	// (0x000649e7) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfaf4,	// (0x0006b510) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfaf4,	// (0x0006b510) cmail_ddmenu_btn01_pane_g

0xeb3e,	// (0x0006a55a) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xeb3e,	// (0x0006a55a) cmail_ddmenu_btn01_pane_t1

0xc8e4,	// (0x00068300) bg_button_pane_cp029_ParamLimits

0xc8e4,	// (0x00068300) bg_button_pane_cp029

0x8fcb,	// (0x000649e7) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x8fcb,	// (0x000649e7) cmail_ddmenu_btn02_pane_g1

0x8fe4,	// (0x00064a00) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x8fe4,	// (0x00064a00) cmail_ddmenu_btn02_pane_t1

0xd903,	// (0x0006931f) bg_button_pane_cp031_ParamLimits

0xd903,	// (0x0006931f) bg_button_pane_cp031

0x8fcb,	// (0x000649e7) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x8fcb,	// (0x000649e7) cmail_ddmenu_btn03_pane_g1

0x8fe4,	// (0x00064a00) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x8fe4,	// (0x00064a00) cmail_ddmenu_btn03_pane_t1

0x5f74,	// (0x00061990) cell_dialer2_keypad_pane_t1_ParamLimits

0x5f8e,	// (0x000619aa) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x5f8e,	// (0x000619aa) cell_dialer2_keypad_pane_t1_copy1

0x7e62,	// (0x0006387e) ncimui_group_button_pane

0xad5e,	// (0x0006677a) main_sp_fs_calendar_pane_ParamLimits

0x8bc5,	// (0x000645e1) list_single_cmail_header_caption_pane_ParamLimits

0xa08d,	// (0x00065aa9) aid_recal_txt_sm_pane

0x9b69,	// (0x00065585) mian_recal_day_pane

0xa0c7,	// (0x00065ae3) popup_sp_fs_cale_preview_window_ParamLimits

0xeb53,	// (0x0006a56f) list_recal_day_pane

0xa1a9,	// (0x00065bc5) list_single_recal_day_pane_ParamLimits

0xa1a9,	// (0x00065bc5) list_single_recal_day_pane

0xeb7a,	// (0x0006a596) list_single_recal_day_pane_g1_ParamLimits

0xeb7a,	// (0x0006a596) list_single_recal_day_pane_g1

0xa1bb,	// (0x00065bd7) list_single_recal_day_pane_g2_ParamLimits

0xa1bb,	// (0x00065bd7) list_single_recal_day_pane_g2

0xa1c7,	// (0x00065be3) list_single_recal_day_pane_g3_ParamLimits

0xa1c7,	// (0x00065be3) list_single_recal_day_pane_g3

0x9008,	// (0x00064a24) list_single_recal_day_pane_g4_ParamLimits

0x9008,	// (0x00064a24) list_single_recal_day_pane_g4

0xa1d3,	// (0x00065bef) list_single_recal_day_pane_g5_ParamLimits

0xa1d3,	// (0x00065bef) list_single_recal_day_pane_g5

0xa1df,	// (0x00065bfb) list_single_recal_day_pane_g6_ParamLimits

0xa1df,	// (0x00065bfb) list_single_recal_day_pane_g6

0x0004,

0xfb03,	// (0x0006b51f) list_single_recal_day_pane_g_ParamLimits

0xfb03,	// (0x0006b51f) list_single_recal_day_pane_g

0xa28c,	// (0x00065ca8) list_single_recal_day_pane_t1

0xa29e,	// (0x00065cba) list_single_recal_day_pane_t2

0x0001,

0xfb0e,	// (0x0006b52a) list_single_recal_day_pane_t

0x9020,	// (0x00064a3c) ncimui_query_button_pane_ParamLimits

0x9020,	// (0x00064a3c) ncimui_query_button_pane

0x9030,	// (0x00064a4c) ncimui_query_button_pane_t1_ParamLimits

0x9030,	// (0x00064a4c) ncimui_query_button_pane_t1

0xeb86,	// (0x0006a5a2) ncimui_query_button_pane_t2_ParamLimits

0xeb86,	// (0x0006a5a2) ncimui_query_button_pane_t2

0x0001,

0xfb13,	// (0x0006b52f) ncimui_query_button_pane_t_ParamLimits

0xfb13,	// (0x0006b52f) ncimui_query_button_pane_t

0x9043,	// (0x00064a5f) query_button_pane_ParamLimits

0x9043,	// (0x00064a5f) query_button_pane

0x9b69,	// (0x00065585) bg_button_pane_cp0028

0xeb99,	// (0x0006a5b5) query_button_pane_t1

0x4358,	// (0x0005fd74) main_tport_pane_ParamLimits

0x8aa7,	// (0x000644c3) bg_popup_window_pane_cp01_ParamLimits

0x8aa7,	// (0x000644c3) bg_popup_window_pane_cp01

0x8ab5,	// (0x000644d1) heading_pane_cp08_ParamLimits

0x8ab5,	// (0x000644d1) heading_pane_cp08

0x8ac3,	// (0x000644df) heading_pane_cp07_ParamLimits

0x8ac3,	// (0x000644df) heading_pane_cp07

0x8b32,	// (0x0006454e) cell_tport_appsw_pane_g2

0x0002,

0xfa99,	// (0x0006b4b5) cell_tport_appsw_pane_g

0x9cb2,	// (0x000656ce) input_candi_list_open_g1

0xae74,	// (0x00066890) list_cale_time_pane_g6_ParamLimits

0xae74,	// (0x00066890) list_cale_time_pane_g6

0x4dd7,	// (0x000607f3) aid_size_touch_calib_1_ParamLimits

0x4dd7,	// (0x000607f3) aid_size_touch_calib_1

0x4de3,	// (0x000607ff) aid_size_touch_calib_2_ParamLimits

0x4de3,	// (0x000607ff) aid_size_touch_calib_2

0x4df1,	// (0x0006080d) aid_size_touch_calib_3_ParamLimits

0x4df1,	// (0x0006080d) aid_size_touch_calib_3

0x4e01,	// (0x0006081d) aid_size_touch_calib_4_ParamLimits

0x4e01,	// (0x0006081d) aid_size_touch_calib_4

0x4e0f,	// (0x0006082b) main_touch_calib_button_group_pane_ParamLimits

0x4e0f,	// (0x0006082b) main_touch_calib_button_group_pane

0x4e1d,	// (0x00060839) main_touch_calib_pane_g1_ParamLimits

0x4e29,	// (0x00060845) main_touch_calib_pane_g2_ParamLimits

0x4e35,	// (0x00060851) main_touch_calib_pane_g3_ParamLimits

0x4e41,	// (0x0006085d) main_touch_calib_pane_g4_ParamLimits

0xf59d,	// (0x0006afb9) main_touch_calib_pane_g_ParamLimits

0x4e4d,	// (0x00060869) main_touch_calib_pane_t1_ParamLimits

0x4e66,	// (0x00060882) main_touch_calib_pane_t2_ParamLimits

0x4e7f,	// (0x0006089b) main_touch_calib_pane_t3_ParamLimits

0x4e95,	// (0x000608b1) main_touch_calib_pane_t4_ParamLimits

0x4eab,	// (0x000608c7) main_touch_calib_pane_t5_ParamLimits

0xf5a6,	// (0x0006afc2) main_touch_calib_pane_t_ParamLimits

0xd046,	// (0x00068a62) list_single_fp_cale_pane_g3_ParamLimits

0xd046,	// (0x00068a62) list_single_fp_cale_pane_g3

0x433c,	// (0x0005fd58) bg_button_pane_cp012_ParamLimits

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp03_ParamLimits

0x6e14,	// (0x00062830) cell_vitu2_function_top_pane_g1_ParamLimits

0x433c,	// (0x0005fd58) bg_vkb2_func_pane_cp04_ParamLimits

0x7dea,	// (0x00063806) main_ncimui_button_group_pane_ParamLimits

0x7dea,	// (0x00063806) main_ncimui_button_group_pane

0x7e50,	// (0x0006386c) main_ncimui_pane_t3_ParamLimits

0x7e50,	// (0x0006386c) main_ncimui_pane_t3

0xe957,	// (0x0006a373) phacti_button_group_pane

0xeb22,	// (0x0006a53e) aid_size_list_single_double_ParamLimits

0x8f89,	// (0x000649a5) popup_ezdial_listscroll_window_ParamLimits

0x8fad,	// (0x000649c9) popup_number_entry_window_cp01_ParamLimits

0x9050,	// (0x00064a6c) phacti_button_pane_ParamLimits

0x9050,	// (0x00064a6c) phacti_button_pane

0x9b69,	// (0x00065585) bg_button_pane_cp14

0xeba7,	// (0x0006a5c3) phacti_button_pane_t1

0x9061,	// (0x00064a7d) main_touch_calib_button_pane_ParamLimits

0x9061,	// (0x00064a7d) main_touch_calib_button_pane

0xa855,	// (0x00066271) bg_button_pane_cp18_ParamLimits

0xa855,	// (0x00066271) bg_button_pane_cp18

0xebb5,	// (0x0006a5d1) main_touch_calib_button_pane_t1_ParamLimits

0xebb5,	// (0x0006a5d1) main_touch_calib_button_pane_t1

0xebcb,	// (0x0006a5e7) main_touch_calib_button_pane_t2_ParamLimits

0xebcb,	// (0x0006a5e7) main_touch_calib_button_pane_t2

0x0001,

0xfb18,	// (0x0006b534) main_touch_calib_button_pane_t_ParamLimits

0xfb18,	// (0x0006b534) main_touch_calib_button_pane_t

0x9b69,	// (0x00065585) cell_ncimui_button_pane

0x9b69,	// (0x00065585) bg_button_pane_cp032

0xebe9,	// (0x0006a605) cell_ncimui_button_pane_t1

0x5fea,	// (0x00061a06) image3_infobar_pane_ParamLimits

0x5fea,	// (0x00061a06) image3_infobar_pane

0x820d,	// (0x00063c29) fs_bigclock_status_pane_ParamLimits

0x820d,	// (0x00063c29) fs_bigclock_status_pane

0x821a,	// (0x00063c36) main_fs_bigclock_clock_pane_ParamLimits

0x821a,	// (0x00063c36) main_fs_bigclock_clock_pane

0x822e,	// (0x00063c4a) main_fs_bigclock_indi_pane_ParamLimits

0x822e,	// (0x00063c4a) main_fs_bigclock_indi_pane

0x8256,	// (0x00063c72) main_fs_bigclock_swipe_pane_ParamLimits

0x8256,	// (0x00063c72) main_fs_bigclock_swipe_pane

0x9b69,	// (0x00065585) main_fs_clock_dumped_data

0xe45c,	// (0x00069e78) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xe45c,	// (0x00069e78) list_single_fs_bigclock_indicator_pane_g1

0xe478,	// (0x00069e94) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe478,	// (0x00069e94) list_single_fs_bigclock_indicator_pane_g2

0xe49b,	// (0x00069eb7) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe49b,	// (0x00069eb7) list_single_fs_bigclock_indicator_pane_g3

0xe4b5,	// (0x00069ed1) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe4b5,	// (0x00069ed1) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xf9b7,	// (0x0006b3d3) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xf9b7,	// (0x0006b3d3) list_single_fs_bigclock_indicator_pane_g

0xe4e0,	// (0x00069efc) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe4e0,	// (0x00069efc) list_single_fs_bigclock_indicator_pane_t1

0xe508,	// (0x00069f24) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe508,	// (0x00069f24) list_single_fs_bigclock_indicator_pane_t2

0xe530,	// (0x00069f4c) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe530,	// (0x00069f4c) list_single_fs_bigclock_indicator_pane_t3

0xe558,	// (0x00069f74) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe558,	// (0x00069f74) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0x0ad8,	// (0x0005c4f4) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0x0ad8,	// (0x0005c4f4) list_single_fs_bigclock_indicator_pane_t

0xebf7,	// (0x0006a613) image3_infobar_fav_pane_ParamLimits

0xebf7,	// (0x0006a613) image3_infobar_fav_pane

0xec07,	// (0x0006a623) image3_infobar_loc_pane_ParamLimits

0xec07,	// (0x0006a623) image3_infobar_loc_pane

0xec1b,	// (0x0006a637) image3_infobar_time_pane_ParamLimits

0xec1b,	// (0x0006a637) image3_infobar_time_pane

0xccec,	// (0x00068708) image3_infobar_time_pane_g1

0xec2b,	// (0x0006a647) image3_infobar_time_pane_t1

0xccec,	// (0x00068708) image3_infobar_loc_pane_g1

0xec39,	// (0x0006a655) image3_infobar_loc_pane_g2

0x0001,

0xfb1d,	// (0x0006b539) image3_infobar_loc_pane_g

0xec41,	// (0x0006a65d) image3_infobar_loc_pane_t1

0xccec,	// (0x00068708) image3_infobar_fav_pane_g1

0xec4f,	// (0x0006a66b) image3_infobar_fav_pane_g2

0x0001,

0xfb22,	// (0x0006b53e) image3_infobar_fav_pane_g

0xec57,	// (0x0006a673) fs_bigclock_status_battery_pane

0xec60,	// (0x0006a67c) fs_bigclock_status_signal_pane

0xec69,	// (0x0006a685) fs_bigclock_status_title_pane

0xec72,	// (0x0006a68e) fs_bigclock_status_signal_pane_g1

0xec7b,	// (0x0006a697) fs_bigclock_status_signal_pane_g2

0x0001,

0xfb27,	// (0x0006b543) fs_bigclock_status_signal_pane_g

0xec83,	// (0x0006a69f) fs_bigclock_status_battery_pane_g1

0xec8c,	// (0x0006a6a8) fs_bigclock_status_battery_pane_g2

0x0001,

0xfb2c,	// (0x0006b548) fs_bigclock_status_battery_pane_g

0xec94,	// (0x0006a6b0) fs_bigclock_status_title_pane_t1

0x9071,	// (0x00064a8d) main_fs_bigclock_clock_pane_g1

0x9071,	// (0x00064a8d) main_fs_bigclock_clock_pane_g2

0x907e,	// (0x00064a9a) main_fs_bigclock_clock_pane_g3

0x907e,	// (0x00064a9a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfb31,	// (0x0006b54d) main_fs_bigclock_clock_pane_g

0x908a,	// (0x00064aa6) main_fs_bigclock_clock_pane_t1

0x909d,	// (0x00064ab9) main_fs_bigclock_clock_pane_t2

0x0001,

0xfb3a,	// (0x0006b556) main_fs_bigclock_clock_pane_t

0xeca2,	// (0x0006a6be) list_single_fs_bigclock_indicator_pane_ParamLimits

0xeca2,	// (0x0006a6be) list_single_fs_bigclock_indicator_pane

0xecb3,	// (0x0006a6cf) list_single_fs_bigclock_pane_ParamLimits

0xecb3,	// (0x0006a6cf) list_single_fs_bigclock_pane

0xecd9,	// (0x0006a6f5) main_fs_bigclock_indicator_pane_t1

0xece8,	// (0x0006a704) list_single_fs_bigclock_pane_g1

0xecf0,	// (0x0006a70c) list_single_fs_bigclock_pane_t1

0xccec,	// (0x00068708) main_fs_bigclock_swipe_pane_g1

0xed33,	// (0x0006a74f) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfb4b,	// (0x0006b567) main_fs_bigclock_swipe_pane_g

0xed3b,	// (0x0006a757) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xed3b,	// (0x0006a757) main_fs_bigclock_swipe_pane_t1

0x334b,	// (0x0005ed67) call_type_pane_ParamLimits

0x9b69,	// (0x00065585) main_btmg_pane

0xa112,	// (0x00065b2e) list_single_cale_mrui_row_pane_g2_ParamLimits

0xa112,	// (0x00065b2e) list_single_cale_mrui_row_pane_g2

0x0002,

0xfada,	// (0x0006b4f6) list_single_cale_mrui_row_pane_g_ParamLimits

0xfada,	// (0x0006b4f6) list_single_cale_mrui_row_pane_g

0xa198,	// (0x00065bb4) list_recal_vselct_arw_lo_pane

0xeb72,	// (0x0006a58e) list_recal_vselct_arw_up_pane

0xa1a0,	// (0x00065bbc) list_recal_vselct_pane

0x90f4,	// (0x00064b10) btmg_button_pane

0x9100,	// (0x00064b1c) main_btmg_pane_g1

0x9b69,	// (0x00065585) bg_button_pane_cp044

0xed58,	// (0x0006a774) btmg_button_pane_t1

0xc8d0,	// (0x000682ec) aid_listscroll_gen

0xad5e,	// (0x0006677a) main_cntbar_detail_pane

0xe8a3,	// (0x0006a2bf) list_cmail_folder_pane

0xcf7b,	// (0x00068997) sp_fs_scroll_pane_cp03_ParamLimits

0x9108,	// (0x00064b24) list_single_fs_dyc_pane_cp01_ParamLimits

0x9108,	// (0x00064b24) list_single_fs_dyc_pane_cp01

0xed66,	// (0x0006a782) aid_size_cmail_indent

0xa2b0,	// (0x00065ccc) list_single_dyc_row_pane_cp01

0x9157,	// (0x00064b73) cntbar_detail_list_pane_ParamLimits

0x9157,	// (0x00064b73) cntbar_detail_list_pane

0x9191,	// (0x00064bad) main_cntbar_detail_cont_pane_ParamLimits

0x9191,	// (0x00064bad) main_cntbar_detail_cont_pane

0x326e,	// (0x0005ec8a) scroll_pane_cp032_ParamLimits

0x326e,	// (0x0005ec8a) scroll_pane_cp032

0x919d,	// (0x00064bb9) cntbar_detail_list_event_pane_ParamLimits

0x919d,	// (0x00064bb9) cntbar_detail_list_event_pane

0x9163,	// (0x00064b7f) cntbar_detail_list_shct_pane

0xacd3,	// (0x000666ef) aid_list_gen

0xed6f,	// (0x0006a78b) aid_scroll

0xed78,	// (0x0006a794) aid_size_touch_scroll_bar

0x757f,	// (0x00062f9b) aid_list_double

0xa2b9,	// (0x00065cd5) aid_list_single

0x756d,	// (0x00062f89) aid_list_single_lg

0xa2c2,	// (0x00065cde) aid_list_z_g_a_sm

0xa2ca,	// (0x00065ce6) aid_list_z_g_d

0xa2d2,	// (0x00065cee) aid_txt_z_prm

0x91b1,	// (0x00064bcd) aid_txt_z_prm_cp01

0x91bf,	// (0x00064bdb) aid_txt_z_sec

0x91cd,	// (0x00064be9) main_cntbar_detail_cont_pane_g1_ParamLimits

0x91cd,	// (0x00064be9) main_cntbar_detail_cont_pane_g1

0x91da,	// (0x00064bf6) main_cntbar_detail_cont_pane_g2_ParamLimits

0x91da,	// (0x00064bf6) main_cntbar_detail_cont_pane_g2

0x0001,

0xfb50,	// (0x0006b56c) main_cntbar_detail_cont_pane_g_ParamLimits

0xfb50,	// (0x0006b56c) main_cntbar_detail_cont_pane_g

0xed81,	// (0x0006a79d) main_cntbar_detail_cont_pane_t1

0xed8f,	// (0x0006a7ab) main_cntbar_detail_cont_pane_t2

0xed9d,	// (0x0006a7b9) main_cntbar_detail_cont_pane_t3

0x0002,

0xfb55,	// (0x0006b571) main_cntbar_detail_cont_pane_t

0x91e6,	// (0x00064c02) cell_cntbar_detail_list_shct_pane_ParamLimits

0x91e6,	// (0x00064c02) cell_cntbar_detail_list_shct_pane

0xedab,	// (0x0006a7c7) cntbar_detail_list_shct_pane_g1

0xedb4,	// (0x0006a7d0) cntbar_detail_list_shct_pane_g2

0x0001,

0xfb5c,	// (0x0006b578) cntbar_detail_list_shct_pane_g

0x91fa,	// (0x00064c16) cntbar_detail_list_event_pane_g1_ParamLimits

0x91fa,	// (0x00064c16) cntbar_detail_list_event_pane_g1

0x9206,	// (0x00064c22) cntbar_detail_list_event_pane_g2_ParamLimits

0x9206,	// (0x00064c22) cntbar_detail_list_event_pane_g2

0x0005,

0xfb61,	// (0x0006b57d) cntbar_detail_list_event_pane_g_ParamLimits

0xfb61,	// (0x0006b57d) cntbar_detail_list_event_pane_g

0x9272,	// (0x00064c8e) cntbar_detail_list_event_pane_t1_ParamLimits

0x9272,	// (0x00064c8e) cntbar_detail_list_event_pane_t1

0x9287,	// (0x00064ca3) cntbar_detail_list_event_pane_t2_ParamLimits

0x9287,	// (0x00064ca3) cntbar_detail_list_event_pane_t2

0x0002,

0xfb6e,	// (0x0006b58a) cntbar_detail_list_event_pane_t_ParamLimits

0xfb6e,	// (0x0006b58a) cntbar_detail_list_event_pane_t

0xccec,	// (0x00068708) cell_cntbar_detail_list_shct_pane_g1

0xb44b,	// (0x00066e67) navi_pane_mv_g3

0xad5e,	// (0x0006677a) main_cntbar_detail_pane_ParamLimits

0x9b69,	// (0x00065585) main_notif_wgt_pane

0x5c9e,	// (0x000616ba) aid_tch_main_mp4_pane_g4

0x5ed3,	// (0x000618ef) popup_slider_window_cp02

0xa18e,	// (0x00065baa) list_recal_day_event_pane

0x9137,	// (0x00064b53) cntbar_detail_btn_pane_ParamLimits

0x9137,	// (0x00064b53) cntbar_detail_btn_pane

0x9147,	// (0x00064b63) cntbar_detail_btn_pane_cp01_ParamLimits

0x9147,	// (0x00064b63) cntbar_detail_btn_pane_cp01

0x9163,	// (0x00064b7f) cntbar_detail_list_shct_pane_ParamLimits

0x916f,	// (0x00064b8b) cntbar_detail_pane_g1_ParamLimits

0x916f,	// (0x00064b8b) cntbar_detail_pane_g1

0x917b,	// (0x00064b97) cntbar_detail_pane_t1_ParamLimits

0x917b,	// (0x00064b97) cntbar_detail_pane_t1

0x9212,	// (0x00064c2e) cntbar_detail_list_event_pane_g3_ParamLimits

0x9212,	// (0x00064c2e) cntbar_detail_list_event_pane_g3

0x922a,	// (0x00064c46) cntbar_detail_list_event_pane_g4_ParamLimits

0x922a,	// (0x00064c46) cntbar_detail_list_event_pane_g4

0x9242,	// (0x00064c5e) cntbar_detail_list_event_pane_g5_ParamLimits

0x9242,	// (0x00064c5e) cntbar_detail_list_event_pane_g5

0x925a,	// (0x00064c76) cntbar_detail_list_event_pane_g6_ParamLimits

0x925a,	// (0x00064c76) cntbar_detail_list_event_pane_g6

0x929c,	// (0x00064cb8) cntbar_detail_list_event_pane_t3_ParamLimits

0x929c,	// (0x00064cb8) cntbar_detail_list_event_pane_t3

0x92ae,	// (0x00064cca) popup_notif_wgt_window_ParamLimits

0x92ae,	// (0x00064cca) popup_notif_wgt_window

0x92be,	// (0x00064cda) popup_submenu_window_cp01_ParamLimits

0x92be,	// (0x00064cda) popup_submenu_window_cp01

0xaa2c,	// (0x00066448) bg_popup_window_pane_cp10

0xedbd,	// (0x0006a7d9) listscroll_notif_wgt_pane

0xedcf,	// (0x0006a7eb) list_notif_wgt_window

0xedd8,	// (0x0006a7f4) scroll_pane_cp033

0x92cc,	// (0x00064ce8) list_notif_wgt_row_pane_ParamLimits

0x92cc,	// (0x00064ce8) list_notif_wgt_row_pane

0xede1,	// (0x0006a7fd) aid_size_list_notif_wgt_del

0xedee,	// (0x0006a80a) list_notif_wgt_row_pane_g1

0xedfa,	// (0x0006a816) list_notif_wgt_row_pane_g2

0xee09,	// (0x0006a825) list_notif_wgt_row_pane_g3

0x0002,

0xfb75,	// (0x0006b591) list_notif_wgt_row_pane_g

0xee16,	// (0x0006a832) list_notif_wgt_row_pane_t1

0xee2c,	// (0x0006a848) list_notif_wgt_row_pane_t2

0xee3e,	// (0x0006a85a) list_notif_wgt_row_pane_t3

0x0002,

0xfb7c,	// (0x0006b598) list_notif_wgt_row_pane_t

0xd96a,	// (0x00069386) list_recal_day_event_pane_g1

0xee50,	// (0x0006a86c) list_recal_day_event_pane_t1

0x9b69,	// (0x00065585) bg_button_pane_cp045

0x92de,	// (0x00064cfa) cntbar_detail_btn_pane_t1

0xc8e4,	// (0x00068300) main_callh_pane_ParamLimits

0xc8e4,	// (0x00068300) main_callh_pane

0x9b69,	// (0x00065585) main_coverflow0_pane

0x9b69,	// (0x00065585) main_wgtman_pane

0x826e,	// (0x00063c8a) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x826e,	// (0x00063c8a) main_fs_bigclock_unlock_btn_pane

0x8b2a,	// (0x00064546) bg_button_pane_cp16

0x8b3a,	// (0x00064556) cell_tport_appsw_pane_g3

0x92ec,	// (0x00064d08) cf0_flow_pane_ParamLimits

0x92ec,	// (0x00064d08) cf0_flow_pane

0xee5f,	// (0x0006a87b) listscroll_cf0_pane

0xee6a,	// (0x0006a886) main_cf0_pane_g1

0x92fb,	// (0x00064d17) main_cf0_pane_t1_ParamLimits

0x92fb,	// (0x00064d17) main_cf0_pane_t1

0x930f,	// (0x00064d2b) main_cf0_pane_t2_ParamLimits

0x930f,	// (0x00064d2b) main_cf0_pane_t2

0x0001,

0xfb88,	// (0x0006b5a4) main_cf0_pane_t_ParamLimits

0xfb88,	// (0x0006b5a4) main_cf0_pane_t

0xee7c,	// (0x0006a898) scroll_pane_cp11

0x9323,	// (0x00064d3f) cf0_flow_pane_g1

0x932b,	// (0x00064d47) cf0_flow_pane_g2

0x0001,

0xfb8d,	// (0x0006b5a9) cf0_flow_pane_g

0x9333,	// (0x00064d4f) cf0_flow_pane_t1

0x9b69,	// (0x00065585) main_call6_pane

0x9b69,	// (0x00065585) main_calllock_pane

0x9341,	// (0x00064d5d) call6_btn_grp_pane_ParamLimits

0x9341,	// (0x00064d5d) call6_btn_grp_pane

0x9350,	// (0x00064d6c) call6_pane_g1_ParamLimits

0x9350,	// (0x00064d6c) call6_pane_g1

0x9360,	// (0x00064d7c) popup_call6_1st_window_ParamLimits

0x9360,	// (0x00064d7c) popup_call6_1st_window

0x936e,	// (0x00064d8a) popup_call6_2nd_window_ParamLimits

0x936e,	// (0x00064d8a) popup_call6_2nd_window

0x937c,	// (0x00064d98) cell_call6_btn_pane_ParamLimits

0x937c,	// (0x00064d98) cell_call6_btn_pane

0xaa2c,	// (0x00066448) bg_popup_call2_in_pane_cp03

0xee87,	// (0x0006a8a3) popup_call6_1st_window_g1

0xee8f,	// (0x0006a8ab) popup_call6_1st_window_g2

0xee97,	// (0x0006a8b3) popup_call6_1st_window_g3

0x0002,

0xfb92,	// (0x0006b5ae) popup_call6_1st_window_g

0xee9f,	// (0x0006a8bb) popup_call6_1st_window_t1

0xeeae,	// (0x0006a8ca) popup_call6_1st_window_t2

0xeebc,	// (0x0006a8d8) popup_call6_1st_window_t3

0x0002,

0xfb99,	// (0x0006b5b5) popup_call6_1st_window_t

0xaa2c,	// (0x00066448) bg_popup_call2_in_pane_cp04

0xee87,	// (0x0006a8a3) popup_call6_2nd_window_g1

0xee8f,	// (0x0006a8ab) popup_call6_2nd_window_g2

0xee97,	// (0x0006a8b3) popup_call6_2nd_window_g3

0x0002,

0xfb92,	// (0x0006b5ae) popup_call6_2nd_window_g

0xee9f,	// (0x0006a8bb) popup_call6_2nd_window_t1

0x111d,	// (0x0005cb39) bg_button_pane_cp15

0x938b,	// (0x00064da7) cell_call6_btn_pane_g1

0x9394,	// (0x00064db0) cell_call6_btn_pane_t1

0x93a3,	// (0x00064dbf) listscroll_wgtman_pane_ParamLimits

0x93a3,	// (0x00064dbf) listscroll_wgtman_pane

0x93bf,	// (0x00064ddb) wgtman_btn_pane_ParamLimits

0x93bf,	// (0x00064ddb) wgtman_btn_pane

0xb25f,	// (0x00066c7b) aid_scroll_copy1

0xeeca,	// (0x0006a8e6) list_wgtman_pane

0x93f4,	// (0x00064e10) wgtman_btn_pane_g1_ParamLimits

0x93f4,	// (0x00064e10) wgtman_btn_pane_g1

0x941c,	// (0x00064e38) wgtman_btn_pane_t1_ParamLimits

0x941c,	// (0x00064e38) wgtman_btn_pane_t1

0xeed4,	// (0x0006a8f0) wgtman_btn_pane_t2_ParamLimits

0xeed4,	// (0x0006a8f0) wgtman_btn_pane_t2

0x0001,

0xfba0,	// (0x0006b5bc) wgtman_btn_pane_t_ParamLimits

0xfba0,	// (0x0006b5bc) wgtman_btn_pane_t

0x9453,	// (0x00064e6f) listrow_wgtman_pane_ParamLimits

0x9453,	// (0x00064e6f) listrow_wgtman_pane

0x946f,	// (0x00064e8b) listrow_wgtman_pane_g1

0x947c,	// (0x00064e98) listrow_wgtman_pane_g2

0x0001,

0xfba5,	// (0x0006b5c1) listrow_wgtman_pane_g

0x949a,	// (0x00064eb6) listrow_wgtman_pane_t1

0x94b2,	// (0x00064ece) listrow_wgtman_pane_t2

0x0001,

0xfbaa,	// (0x0006b5c6) listrow_wgtman_pane_t

0x94d8,	// (0x00064ef4) wait_bar_pane_cp09

0xeeeb,	// (0x0006a907) main_calllock_btn_pane

0xeef5,	// (0x0006a911) main_calllock_pane_g1

0x9b69,	// (0x00065585) bg_button_pane_cp17

0xef01,	// (0x0006a91d) main_calllock_btn_pane_g1

0xef0a,	// (0x0006a926) main_calllock_btn_pane_t1

0x9b69,	// (0x00065585) main_dialer3_pane

0x9b69,	// (0x00065585) main_fmrd2_pane

0xccec,	// (0x00068708) main_fs_bigclock_unlock_btn_pane_g1

0x94f2,	// (0x00064f0e) main_fs_bigclock_unlock_btn_pane_t1

0x9500,	// (0x00064f1c) area_fmrd2_info_pane_ParamLimits

0x9500,	// (0x00064f1c) area_fmrd2_info_pane

0x950e,	// (0x00064f2a) area_fmrd2_visual_pane_ParamLimits

0x950e,	// (0x00064f2a) area_fmrd2_visual_pane

0x951c,	// (0x00064f38) fmrd2_indi_pane_ParamLimits

0x951c,	// (0x00064f38) fmrd2_indi_pane

0x9529,	// (0x00064f45) area_fmrd2_visual_pane_g1

0x9531,	// (0x00064f4d) area_fmrd2_visual_pane_t1

0x9541,	// (0x00064f5d) area_fmrd2_visual_pane_t2

0x9551,	// (0x00064f6d) area_fmrd2_visual_pane_t3

0x0002,

0xfbb4,	// (0x0006b5d0) area_fmrd2_visual_pane_t

0x9561,	// (0x00064f7d) area_fmrd2_info_pane_g1

0x9569,	// (0x00064f85) area_fmrd2_info_pane_t1

0x9579,	// (0x00064f95) area_fmrd2_info_pane_t2

0x9589,	// (0x00064fa5) area_fmrd2_info_pane_t3

0x9599,	// (0x00064fb5) area_fmrd2_info_pane_t4

0x0003,

0xfbbb,	// (0x0006b5d7) area_fmrd2_info_pane_t

0x95a7,	// (0x00064fc3) fmrd2_indi_pane_t1

0x95b7,	// (0x00064fd3) fmrd2_indi_pane_t2

0x95c7,	// (0x00064fe3) fmrd2_indi_pane_t3

0x0002,

0xfbc4,	// (0x0006b5e0) fmrd2_indi_pane_t

0xe4c4,	// (0x00069ee0) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe4c4,	// (0x00069ee0) list_single_fs_bigclock_indicator_pane_g5

0xe575,	// (0x00069f91) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe575,	// (0x00069f91) list_single_fs_bigclock_indicator_pane_t5

0x8cda,	// (0x000646f6) aid_cell_bcale_month_pane_ParamLimits

0x8cda,	// (0x000646f6) aid_cell_bcale_month_pane

0x8cf8,	// (0x00064714) bcale_month_pane_ParamLimits

0x8cf8,	// (0x00064714) bcale_month_pane

0x8d16,	// (0x00064732) bcale_preview_pane_ParamLimits

0x8d16,	// (0x00064732) bcale_preview_pane

0xecf0,	// (0x0006a70c) list_single_fs_bigclock_pane_t1_ParamLimits

0xed0f,	// (0x0006a72b) list_single_fs_bigclock_pane_t2_ParamLimits

0xed0f,	// (0x0006a72b) list_single_fs_bigclock_pane_t2

0x0001,

0xfb46,	// (0x0006b562) list_single_fs_bigclock_pane_t_ParamLimits

0xfb46,	// (0x0006b562) list_single_fs_bigclock_pane_t

0x94ea,	// (0x00064f06) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfbaf,	// (0x0006b5cb) main_fs_bigclock_unlock_btn_pane_g

0x95d5,	// (0x00064ff1) aid_dia3_key_size_ParamLimits

0x95d5,	// (0x00064ff1) aid_dia3_key_size

0x95e1,	// (0x00064ffd) aid_dia3_listrow_size_ParamLimits

0x95e1,	// (0x00064ffd) aid_dia3_listrow_size

0x95f1,	// (0x0006500d) dia3_keypad_fun_pane_ParamLimits

0x95f1,	// (0x0006500d) dia3_keypad_fun_pane

0x9603,	// (0x0006501f) dia3_keypad_num_pane_ParamLimits

0x9603,	// (0x0006501f) dia3_keypad_num_pane

0x9615,	// (0x00065031) dia3_listscroll_pane_ParamLimits

0x9615,	// (0x00065031) dia3_listscroll_pane

0x9623,	// (0x0006503f) dia3_numentry_pane_ParamLimits

0x9623,	// (0x0006503f) dia3_numentry_pane

0xef19,	// (0x0006a935) dia3_list_pane

0xef24,	// (0x0006a940) scroll_pane_cp12

0x9b69,	// (0x00065585) bg_dia3_numentry_pane

0x9631,	// (0x0006504d) dia3_numentry_pane_t1

0x9640,	// (0x0006505c) cell_dia3_key_num_pane

0x9648,	// (0x00065064) cell_dia3_key0_fun_pane_ParamLimits

0x9648,	// (0x00065064) cell_dia3_key0_fun_pane

0x9655,	// (0x00065071) cell_dia3_key1_fun_pane_ParamLimits

0x9655,	// (0x00065071) cell_dia3_key1_fun_pane

0x9662,	// (0x0006507e) dia3_listrow_pane

0xe20e,	// (0x00069c2a) bg_dia3_numentry_pane_g1

0x9b69,	// (0x00065585) bg_button_pane_cp21

0xef2f,	// (0x0006a94b) cell_dia3_key_num_pane_t1

0xef3d,	// (0x0006a959) cell_dia3_key_num_pane_t2

0xef4c,	// (0x0006a968) cell_dia3_key_num_pane_t3

0xef5b,	// (0x0006a977) cell_dia3_key_num_pane_t4

0x0003,

0xfbcb,	// (0x0006b5e7) cell_dia3_key_num_pane_t

0x9b69,	// (0x00065585) bg_button_pane_cp19

0x966f,	// (0x0006508b) cell_dia3_key0_fun_pane_g1

0x9b69,	// (0x00065585) bg_button_pane_cp20

0x9677,	// (0x00065093) cell_dia3_key1_fun_pane_g1

0x967f,	// (0x0006509b) area_left_week_number_pane

0x9692,	// (0x000650ae) area_top_day_name_pane

0x96a0,	// (0x000650bc) frame_month_view_pane

0xef6a,	// (0x0006a986) grid_month_view_pane

0x96b5,	// (0x000650d1) cell_top_day_name_pane_ParamLimits

0x96b5,	// (0x000650d1) cell_top_day_name_pane

0x96cf,	// (0x000650eb) cell_area_left_week_number_pane_ParamLimits

0x96cf,	// (0x000650eb) cell_area_left_week_number_pane

0x96f2,	// (0x0006510e) cell_month_view_pane_ParamLimits

0x96f2,	// (0x0006510e) cell_month_view_pane

0xef78,	// (0x0006a994) frm_month_g1

0x971e,	// (0x0006513a) frm_month_g2

0x972f,	// (0x0006514b) frm_month_g3

0x9740,	// (0x0006515c) frm_month_g4

0x9751,	// (0x0006516d) frm_month_g5

0x9764,	// (0x00065180) frm_month_g6

0x9777,	// (0x00065193) frm_month_g7

0xef85,	// (0x0006a9a1) frm_month_g8

0x978a,	// (0x000651a6) frm_month_g9

0x9797,	// (0x000651b3) frm_month_g10

0x97a4,	// (0x000651c0) frm_month_g11

0x97b1,	// (0x000651cd) frm_month_g12

0x97be,	// (0x000651da) frm_month_g13

0x97cb,	// (0x000651e7) frm_month_g14

0x97da,	// (0x000651f6) frm_month_g15

0x97e9,	// (0x00065205) frm_month_g16

0x000f,

0xfbd4,	// (0x0006b5f0) frm_month_g

0xef92,	// (0x0006a9ae) cell_top_day_name_pane_t1

0x97f8,	// (0x00065214) cell_area_left_week_number_pane_g1

0x9807,	// (0x00065223) cell_area_left_week_number_pane_t1

0xcf3a,	// (0x00068956) cell_month_view_pane_g1

0x981d,	// (0x00065239) cell_month_view_pane_t1

0x9b69,	// (0x00065585) main_fps_pane

0xe7ad,	// (0x0006a1c9) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe7ad,	// (0x0006a1c9) cmail_ddmenu_btn02_pane_cp1

0xe7c9,	// (0x0006a1e5) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe7c9,	// (0x0006a1e5) cmail_ddmenu_btn02_pane_cp2

0x8fd7,	// (0x000649f3) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x8fd7,	// (0x000649f3) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfaf9,	// (0x0006b515) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfaf9,	// (0x0006b515) cmail_ddmenu_btn02_pane_g

0x8ff6,	// (0x00064a12) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x8ff6,	// (0x00064a12) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfafe,	// (0x0006b51a) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfafe,	// (0x0006b51a) cmail_ddmenu_btn02_pane_t

0x9833,	// (0x0006524f) fps_text_pane_ParamLimits

0x9833,	// (0x0006524f) fps_text_pane

0x9840,	// (0x0006525c) main_fps_pane_g1_ParamLimits

0x9840,	// (0x0006525c) main_fps_pane_g1

0x984e,	// (0x0006526a) wait_bar_pane_cp010_ParamLimits

0x984e,	// (0x0006526a) wait_bar_pane_cp010

0x985a,	// (0x00065276) fps_text_pane_t1_ParamLimits

0x985a,	// (0x00065276) fps_text_pane_t1

0x62f5,	// (0x00061d11) cam4_image_uncrop_pane_g1

0x62fe,	// (0x00061d1a) cam4_image_uncrop_pane_g2

0x6307,	// (0x00061d23) cam4_image_uncrop_pane_g3

0x6310,	// (0x00061d2c) cam4_image_uncrop_pane_g4

0x0003,

0xf6cd,	// (0x0006b0e9) cam4_image_uncrop_pane_g

0x9662,	// (0x0006507e) dia3_listrow_pane_ParamLimits

0x9b69,	// (0x00065585) main_phob2_pane

0x8b0c,	// (0x00064528) cell_tport_appsw_pane_cp02_ParamLimits

0x8b0c,	// (0x00064528) cell_tport_appsw_pane_cp02

0x8b1b,	// (0x00064537) cell_tport_appsw_pane_cp03_ParamLimits

0x8b1b,	// (0x00064537) cell_tport_appsw_pane_cp03

0x9b69,	// (0x00065585) phob2_contact_card_pane

0x9b69,	// (0x00065585) phob2_listscroll_pane

0xefa5,	// (0x0006a9c1) phob2_list_pane

0xefad,	// (0x0006a9c9) scroll_pane_cp034

0x9873,	// (0x0006528f) phob2_cc_data_pane_ParamLimits

0x9873,	// (0x0006528f) phob2_cc_data_pane

0x988d,	// (0x000652a9) phob2_cc_listscroll_pane_ParamLimits

0x988d,	// (0x000652a9) phob2_cc_listscroll_pane

0x98a7,	// (0x000652c3) list_double_large_graphic_phob2_pane_ParamLimits

0x98a7,	// (0x000652c3) list_double_large_graphic_phob2_pane

0x98c6,	// (0x000652e2) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x98c6,	// (0x000652e2) list_double_large_graphic_phob2_pane_g1

0x98dc,	// (0x000652f8) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x98dc,	// (0x000652f8) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfbf5,	// (0x0006b611) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfbf5,	// (0x0006b611) list_double_large_graphic_phob2_pane_g

0x98e8,	// (0x00065304) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x98e8,	// (0x00065304) list_double_large_graphic_phob2_pane_t1

0x98fe,	// (0x0006531a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x98fe,	// (0x0006531a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfbfa,	// (0x0006b616) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfbfa,	// (0x0006b616) list_double_large_graphic_phob2_pane_t

0x9b69,	// (0x00065585) list_highlight_pane_cp024

0x9913,	// (0x0006532f) phob2_cc_button_pane

0x991b,	// (0x00065337) phob2_cc_data_pane_g1_ParamLimits

0x991b,	// (0x00065337) phob2_cc_data_pane_g1

0x9927,	// (0x00065343) phob2_cc_data_pane_g2_ParamLimits

0x9927,	// (0x00065343) phob2_cc_data_pane_g2

0x0001,

0xfbff,	// (0x0006b61b) phob2_cc_data_pane_g_ParamLimits

0xfbff,	// (0x0006b61b) phob2_cc_data_pane_g

0x9933,	// (0x0006534f) phob2_cc_data_pane_t1_ParamLimits

0x9933,	// (0x0006534f) phob2_cc_data_pane_t1

0x9945,	// (0x00065361) phob2_cc_data_pane_t2_ParamLimits

0x9945,	// (0x00065361) phob2_cc_data_pane_t2

0x9957,	// (0x00065373) phob2_cc_data_pane_t3_ParamLimits

0x9957,	// (0x00065373) phob2_cc_data_pane_t3

0x0002,

0xfc04,	// (0x0006b620) phob2_cc_data_pane_t_ParamLimits

0xfc04,	// (0x0006b620) phob2_cc_data_pane_t

0xefb5,	// (0x0006a9d1) phob2_cc_list_pane_ParamLimits

0xefb5,	// (0x0006a9d1) phob2_cc_list_pane

0xda6b,	// (0x00069487) scroll_pane_cp035_ParamLimits

0xda6b,	// (0x00069487) scroll_pane_cp035

0xad5e,	// (0x0006677a) bg_button_pane_cp033

0xefc1,	// (0x0006a9dd) phob2_cc_button_pane_g1

0xefcd,	// (0x0006a9e9) phob2_cc_button_pane_t1

0xefe2,	// (0x0006a9fe) phob2_cc_button_pane_t2

0x0001,

0xfc0b,	// (0x0006b627) phob2_cc_button_pane_t

0x9969,	// (0x00065385) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9969,	// (0x00065385) list_double_large_graphic_phob2_cc_pane

0x9992,	// (0x000653ae) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9992,	// (0x000653ae) list_double_large_graphic_phob2_cc_pane_g1

0x99a3,	// (0x000653bf) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x99a3,	// (0x000653bf) list_double_large_graphic_phob2_cc_pane_g2

0x99af,	// (0x000653cb) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x99af,	// (0x000653cb) list_double_large_graphic_phob2_cc_pane_g3

0x99bb,	// (0x000653d7) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x99bb,	// (0x000653d7) list_double_large_graphic_phob2_cc_pane_g4

0x99c7,	// (0x000653e3) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x99c7,	// (0x000653e3) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfc10,	// (0x0006b62c) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfc10,	// (0x0006b62c) list_double_large_graphic_phob2_cc_pane_g

0x99d3,	// (0x000653ef) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x99d3,	// (0x000653ef) list_double_large_graphic_phob2_cc_pane_t1

0x99fc,	// (0x00065418) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x99fc,	// (0x00065418) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfc1b,	// (0x0006b637) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfc1b,	// (0x0006b637) list_double_large_graphic_phob2_cc_pane_t

0xeff4,	// (0x0006aa10) list_highlight_pane_cp025_ParamLimits

0xeff4,	// (0x0006aa10) list_highlight_pane_cp025

0xad5e,	// (0x0006677a) bg_button_pane_cp033_ParamLimits

0xefc1,	// (0x0006a9dd) phob2_cc_button_pane_g1_ParamLimits

0xefcd,	// (0x0006a9e9) phob2_cc_button_pane_t1_ParamLimits

0xefe2,	// (0x0006a9fe) phob2_cc_button_pane_t2_ParamLimits

0xfc0b,	// (0x0006b627) phob2_cc_button_pane_t_ParamLimits

0x1111,	// (0x0005cb2d) popup_wgtman_window

0xd82a,	// (0x00069246) scroll_pane_cp038

0x93dc,	// (0x00064df8) wgtman_btn_pane_cp_01_ParamLimits

0x93dc,	// (0x00064df8) wgtman_btn_pane_cp_01

0xf002,	// (0x0006aa1e) wgtman_content_pane

0xf00b,	// (0x0006aa27) wgtman_heading_pane

0x9b69,	// (0x00065585) bg_heading_pane_cp02

0xf014,	// (0x0006aa30) wgtman_heading_pane_g1

0xf01c,	// (0x0006aa38) wgtman_heading_pane_t1

0xf02a,	// (0x0006aa46) scroll_pane_cp036

0xf032,	// (0x0006aa4e) wgtman_list_pane

0xe6d8,	// (0x0006a0f4) wgtman_list_pane_t1_ParamLimits

0xe6d8,	// (0x0006a0f4) wgtman_list_pane_t1

0x6254,	// (0x00061c70) cam4_grid_pane

0x702a,	// (0x00062a46) bg_button_pane_cp015_ParamLimits

0x703c,	// (0x00062a58) bg_button_pane_cp016_ParamLimits

0x704f,	// (0x00062a6b) bg_button_pane_cp017_ParamLimits

0x70a5,	// (0x00062ac1) popup_vitu2_query_window_g3_ParamLimits

0x70a5,	// (0x00062ac1) popup_vitu2_query_window_g3

0x7160,	// (0x00062b7c) popup_vitu2_query_window_t6_ParamLimits

0x7160,	// (0x00062b7c) popup_vitu2_query_window_t6

0x718b,	// (0x00062ba7) popup_vitu2_query_window_t7_ParamLimits

0x718b,	// (0x00062ba7) popup_vitu2_query_window_t7

0xda77,	// (0x00069493) cam4_grid_pane_g1

0xda80,	// (0x0006949c) cam4_grid_pane_g2

0xf03a,	// (0x0006aa56) cam4_grid_pane_g3

0xf043,	// (0x0006aa5f) cam4_grid_pane_g4

0x0003,

0xfc20,	// (0x0006b63c) cam4_grid_pane_g

0x1fb0,	// (0x0005d9cc) aid_placing_vt_slider_lsc_ParamLimits

0x22f0,	// (0x0005dd0c) vidtel_button_pane_ParamLimits

0x22f0,	// (0x0005dd0c) vidtel_button_pane

0x9b69,	// (0x00065585) bg_button_pane_cp034

0xf04e,	// (0x0006aa6a) vidtel_button_pane_g1

0xf056,	// (0x0006aa72) vidtel_button_pane_t1

0xd948,	// (0x00069364) aid_size_vtel_slider_touch

0xda6b,	// (0x00069487) scroll_pane_cp039

0x7fab,	// (0x000639c7) ncim_query_button_pane_cp01_ParamLimits

0x7fca,	// (0x000639e6) ncimui_query_pane_g1_ParamLimits

0xad5e,	// (0x0006677a) input_focus_pane_cp012_ParamLimits

0xe254,	// (0x00069c70) ncim_query_entry_pane_t1_ParamLimits

0xda6b,	// (0x00069487) scroll_pane_cp039_ParamLimits

0xb336,	// (0x00066d52) navi_pane_bcale_mc_g1

0xb33e,	// (0x00066d5a) navi_pane_bcale_mc_t1

0xe812,	// (0x0006a22e) main_sp_fs_email_pane_g1

0xe81e,	// (0x0006a23a) main_sp_fs_email_pane_g2

0x0001,

0x0b3e,	// (0x0005c55a) main_sp_fs_email_pane_g

0xea74,	// (0x0006a490) list_single_cale_mrui_row_pane_g3_ParamLimits

0xea74,	// (0x0006a490) list_single_cale_mrui_row_pane_g3

0x9016,	// (0x00064a32) list_single_recal_day_pane_g5_event_pane

0xa1eb,	// (0x00065c07) list_single_recal_day_pane_g7

0xf06c,	// (0x0006aa88) list_recal_day_event_pane_cp01

0xf075,	// (0x0006aa91) list_recal_vselct_arw_lo_pane_cp01

0xf07d,	// (0x0006aa99) list_recal_vselct_arw_up_pane_cp01

0xf085,	// (0x0006aaa1) list_recal_vselct_pane_cp01

0xd96a,	// (0x00069386) list_recal_day_event_pane_cp01_g1

0xa2e0,	// (0x00065cfc) list_recal_day_event_pane_cp01_t1

0xa28c,	// (0x00065ca8) list_single_recal_day_pane_t1_ParamLimits

0xa29e,	// (0x00065cba) list_single_recal_day_pane_t2_ParamLimits

0xfb0e,	// (0x0006b52a) list_single_recal_day_pane_t_ParamLimits

0xa784,	// (0x000661a0) bg_notes_pane_ParamLimits

0xa833,	// (0x0006624f) list_notes_pane_ParamLimits

0x1476,	// (0x0005ce92) scroll_pane_cp06_ParamLimits

0xa855,	// (0x00066271) main_notes_pane_ParamLimits

0x9b69,	// (0x00065585) main_welc_pane

0x9a25,	// (0x00065441) main_welc_body_pane_ParamLimits

0x9a25,	// (0x00065441) main_welc_body_pane

0x9a3e,	// (0x0006545a) main_welc_opti_pane_ParamLimits

0x9a3e,	// (0x0006545a) main_welc_opti_pane

0x9a71,	// (0x0006548d) main_welc_pane_t1_ParamLimits

0x9a71,	// (0x0006548d) main_welc_pane_t1

0x9a8b,	// (0x000654a7) main_welc_body_row_pane_ParamLimits

0x9a8b,	// (0x000654a7) main_welc_body_row_pane

0xd903,	// (0x0006931f) main_welc_opti_row_pane_ParamLimits

0xd903,	// (0x0006931f) main_welc_opti_row_pane

0xf08f,	// (0x0006aaab) main_welc_opti_row_pane_g1

0x9ab4,	// (0x000654d0) main_welc_opti_row_pane_t1

0xf097,	// (0x0006aab3) main_welc_body_row_pane_t1

0xedc7,	// (0x0006a7e3) popup_notif_wgt_heading_pane

0xede1,	// (0x0006a7fd) aid_size_list_notif_wgt_del_ParamLimits

0xedee,	// (0x0006a80a) list_notif_wgt_row_pane_g1_ParamLimits

0xedfa,	// (0x0006a816) list_notif_wgt_row_pane_g2_ParamLimits

0xee09,	// (0x0006a825) list_notif_wgt_row_pane_g3_ParamLimits

0xfb75,	// (0x0006b591) list_notif_wgt_row_pane_g_ParamLimits

0xee16,	// (0x0006a832) list_notif_wgt_row_pane_t1_ParamLimits

0xee2c,	// (0x0006a848) list_notif_wgt_row_pane_t2_ParamLimits

0xee3e,	// (0x0006a85a) list_notif_wgt_row_pane_t3_ParamLimits

0xfb7c,	// (0x0006b598) list_notif_wgt_row_pane_t_ParamLimits

0x946f,	// (0x00064e8b) listrow_wgtman_pane_g1_ParamLimits

0x947c,	// (0x00064e98) listrow_wgtman_pane_g2_ParamLimits

0xfba5,	// (0x0006b5c1) listrow_wgtman_pane_g_ParamLimits

0x949a,	// (0x00064eb6) listrow_wgtman_pane_t1_ParamLimits

0x94b2,	// (0x00064ece) listrow_wgtman_pane_t2_ParamLimits

0xfbaa,	// (0x0006b5c6) listrow_wgtman_pane_t_ParamLimits

0x94d8,	// (0x00064ef4) wait_bar_pane_cp09_ParamLimits

0x9b69,	// (0x00065585) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0006aac2) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0006aaca) popup_notif_wgt_heading_pane_t1

0x9b69,	// (0x00065585) main_vids_pane

0x9b69,	// (0x00065585) vids_listscroll_pane

0x9ac3,	// (0x000654df) scroll_pane_cp040

0x9b69,	// (0x00065585) vids_list_pane

0x9ace,	// (0x000654ea) vids_list_double_pane_ParamLimits

0x9ace,	// (0x000654ea) vids_list_double_pane

0x9ae6,	// (0x00065502) vids_list_double_pane_g1

0x9aef,	// (0x0006550b) vids_list_double_pane_t1

0x9aff,	// (0x0006551b) vids_list_double_pane_t2

0x0001,

0xfc2e,	// (0x0006b64a) vids_list_double_pane_t

0x433c,	// (0x0005fd58) main_ncimui_pane_ParamLimits

0x7e02,	// (0x0006381e) main_ncimui_pane_g1_ParamLimits

0x7e0e,	// (0x0006382a) main_ncimui_pane_g2_ParamLimits

0x7e0e,	// (0x0006382a) main_ncimui_pane_g2

0x0001,

0xf954,	// (0x0006b370) main_ncimui_pane_g_ParamLimits

0xf954,	// (0x0006b370) main_ncimui_pane_g

0x9a57,	// (0x00065473) main_welc_pane_g1_ParamLimits

0x9a57,	// (0x00065473) main_welc_pane_g1

0x9a63,	// (0x0006547f) main_welc_pane_g2_ParamLimits

0x9a63,	// (0x0006547f) main_welc_pane_g2

0x0001,

0xfc29,	// (0x0006b645) main_welc_pane_g_ParamLimits

0xfc29,	// (0x0006b645) main_welc_pane_g

0xa784,	// (0x000661a0) listscroll_mce_pane_ParamLimits

0xb48b,	// (0x00066ea7) wait_bar_pane_cp10

0xc8d8,	// (0x000682f4) main_cale_day_pane_ParamLimits

0xc8d8,	// (0x000682f4) main_cale_week_pane_ParamLimits

0xa784,	// (0x000661a0) main_messa_pane_ParamLimits

0x5668,	// (0x00061084) main_clock2_btn_pane_ParamLimits

0x5668,	// (0x00061084) main_clock2_btn_pane

0xd0ce,	// (0x00068aea) main_clock2_btn_pane_cp01_ParamLimits

0xd0ce,	// (0x00068aea) main_clock2_btn_pane_cp01

0xea45,	// (0x0006a461) list_cale_mrui_pane_ParamLimits

0xee74,	// (0x0006a890) main_cf0_pane_g2

0x0001,

0xfb83,	// (0x0006b59f) main_cf0_pane_g

0x967f,	// (0x0006509b) area_left_week_number_pane_ParamLimits

0x9692,	// (0x000650ae) area_top_day_name_pane_ParamLimits

0x96a0,	// (0x000650bc) frame_month_view_pane_ParamLimits

0xef6a,	// (0x0006a986) grid_month_view_pane_ParamLimits

0xef78,	// (0x0006a994) frm_month_g1_ParamLimits

0x971e,	// (0x0006513a) frm_month_g2_ParamLimits

0x972f,	// (0x0006514b) frm_month_g3_ParamLimits

0x9740,	// (0x0006515c) frm_month_g4_ParamLimits

0x9751,	// (0x0006516d) frm_month_g5_ParamLimits

0x9764,	// (0x00065180) frm_month_g6_ParamLimits

0x9777,	// (0x00065193) frm_month_g7_ParamLimits

0xef85,	// (0x0006a9a1) frm_month_g8_ParamLimits

0x978a,	// (0x000651a6) frm_month_g9_ParamLimits

0x9797,	// (0x000651b3) frm_month_g10_ParamLimits

0x97a4,	// (0x000651c0) frm_month_g11_ParamLimits

0x97b1,	// (0x000651cd) frm_month_g12_ParamLimits

0x97be,	// (0x000651da) frm_month_g13_ParamLimits

0x97cb,	// (0x000651e7) frm_month_g14_ParamLimits

0x97da,	// (0x000651f6) frm_month_g15_ParamLimits

0x97e9,	// (0x00065205) frm_month_g16_ParamLimits

0xfbd4,	// (0x0006b5f0) frm_month_g_ParamLimits

0xef92,	// (0x0006a9ae) cell_top_day_name_pane_t1_ParamLimits

0x97f8,	// (0x00065214) cell_area_left_week_number_pane_g1_ParamLimits

0x9807,	// (0x00065223) cell_area_left_week_number_pane_t1_ParamLimits

0xcf3a,	// (0x00068956) cell_month_view_pane_g1_ParamLimits

0x981d,	// (0x00065239) cell_month_view_pane_t1_ParamLimits

0xa77c,	// (0x00066198) main_clock2_btn_pane_g1

0xf0bc,	// (0x0006aad8) main_clock2_btn_pane_t1

0xad5e,	// (0x0006677a) listscroll_cmail_pane_ParamLimits

0xe812,	// (0x0006a22e) main_sp_fs_email_pane_g1_ParamLimits

0xe81e,	// (0x0006a23a) main_sp_fs_email_pane_g2_ParamLimits

0x0b3e,	// (0x0005c55a) main_sp_fs_email_pane_g_ParamLimits

0xeb53,	// (0x0006a56f) list_recal_day_pane_ParamLimits

0xeb64,	// (0x0006a580) mian_recal_day_pane_t1

0x87d8,	// (0x000641f4) list_single_dyc_row_text_pane_t4_ParamLimits

0x87d8,	// (0x000641f4) list_single_dyc_row_text_pane_t4

0x880f,	// (0x0006422b) list_single_dyc_row_text_pane_t5_ParamLimits

0x880f,	// (0x0006422b) list_single_dyc_row_text_pane_t5

0x9f59,	// (0x00065975) list_single_dyc_row_text_pane_t6_ParamLimits

0x9f59,	// (0x00065975) list_single_dyc_row_text_pane_t6

0x3193,	// (0x0005ebaf) aid_mgn_list_cale_time_pane

0x433c,	// (0x0005fd58) main_gallery2_pane_ParamLimits

0xd0e4,	// (0x00068b00) main_clock2_pane_cp01_t1

0xd0f2,	// (0x00068b0e) main_clock2_pane_cp01_t3

0x0001,

0x064f,	// (0x0005c06b) main_clock2_pane_cp01_t

0x18c7,	// (0x0005d2e3) cale_week_scroll_pane_g16_ParamLimits

0x18c7,	// (0x0005d2e3) cale_week_scroll_pane_g16

0xaa2c,	// (0x00066448) vorec_slider_pane

0xf056,	// (0x0006aa72) vidtel_button_pane_t1_ParamLimits

0x9071,	// (0x00064a8d) main_fs_bigclock_clock_pane_g1_ParamLimits

0x9071,	// (0x00064a8d) main_fs_bigclock_clock_pane_g2_ParamLimits

0x907e,	// (0x00064a9a) main_fs_bigclock_clock_pane_g3_ParamLimits

0x907e,	// (0x00064a9a) main_fs_bigclock_clock_pane_g4_ParamLimits

0xfb31,	// (0x0006b54d) main_fs_bigclock_clock_pane_g_ParamLimits

0x908a,	// (0x00064aa6) main_fs_bigclock_clock_pane_t1_ParamLimits

0x909d,	// (0x00064ab9) main_fs_bigclock_clock_pane_t2_ParamLimits

0xfb3a,	// (0x0006b556) main_fs_bigclock_clock_pane_t_ParamLimits

0x4f0b,	// (0x00060927) main_mup3_lyrics_pane_ParamLimits

0x4f0b,	// (0x00060927) main_mup3_lyrics_pane

0x9b33,	// (0x0006554f) main_mup3_lyrics_pane_t1_ParamLimits

0x9b33,	// (0x0006554f) main_mup3_lyrics_pane_t1
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
	};

} // end of namespace AknLayoutScalable_Abrw_pnp4_apps_nhd4_prt_tch_Small

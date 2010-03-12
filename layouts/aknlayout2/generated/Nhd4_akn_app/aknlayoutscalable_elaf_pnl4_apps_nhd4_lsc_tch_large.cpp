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

#include "aknlayoutscalable_elaf_pnl4_apps_nhd4_lsc_tch_large.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch[]; }

namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pnp4_apps_nhd4_prt_tch + 0x00079e61 };

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
0x1387,	// (0x0007b1e8) Screen

0x1393,	// (0x0007b1f4) application_window

0x13d9,	// (0x0007b23a) area_bottom_pane_ParamLimits

0x13d9,	// (0x0007b23a) area_bottom_pane

0x1412,	// (0x0007b273) area_top_pane_ParamLimits

0x1412,	// (0x0007b273) area_top_pane

0xa69e,	// (0x000844ff) call_video_uplink_pane_ParamLimits

0xa69e,	// (0x000844ff) call_video_uplink_pane

0x1487,	// (0x0007b2e8) main_pane_ParamLimits

0x1487,	// (0x0007b2e8) main_pane

0xcd71,	// (0x00086bd2) context_pane

0x4700,	// (0x0007e561) navi_pane

0x4728,	// (0x0007e589) popup_cale_events_window_ParamLimits

0x4728,	// (0x0007e589) popup_cale_events_window

0xcd84,	// (0x00086be5) popup_mup_playback_window

0x4740,	// (0x0007e5a1) signal_pane

0xab19,	// (0x0008497a) main_browser_pane

0xb885,	// (0x000856e6) main_burst_pane

0x4460,	// (0x0007e2c1) main_calc_pane

0xb885,	// (0x000856e6) main_cale_day_pane

0xab19,	// (0x0008497a) main_cale_month_pane

0xb885,	// (0x000856e6) main_cale_week_pane

0xb885,	// (0x000856e6) main_call_pane

0xa785,	// (0x000845e6) main_call_poc_pane

0xb885,	// (0x000856e6) main_camera_pane

0xb885,	// (0x000856e6) main_chi_dic_pane

0xb714,	// (0x00085575) main_clock_pane

0xa785,	// (0x000845e6) main_fmradio_pane

0xb885,	// (0x000856e6) main_graph_messa_pane

0xa785,	// (0x000845e6) main_help_pane

0xab19,	// (0x0008497a) main_im_pane

0xa9e0,	// (0x00084841) main_image_pane_ParamLimits

0xa9e0,	// (0x00084841) main_image_pane

0xa785,	// (0x000845e6) main_location2_pane

0xb885,	// (0x000856e6) main_location_pane

0xa785,	// (0x000845e6) main_messa_pane

0xa785,	// (0x000845e6) main_mp2_pane

0xb885,	// (0x000856e6) main_mp_pane

0xa785,	// (0x000845e6) main_msg_pane

0xa785,	// (0x000845e6) main_mup_eq_pane

0xa785,	// (0x000845e6) main_mup_pane

0xab19,	// (0x0008497a) main_notes_pane

0xa785,	// (0x000845e6) main_pec_pane

0xa785,	// (0x000845e6) main_phob_pane

0xa785,	// (0x000845e6) main_pinb_pane

0xa785,	// (0x000845e6) main_postcard_pane

0xa785,	// (0x000845e6) main_qdial_pane

0xb885,	// (0x000856e6) main_skin_pane

0xa785,	// (0x000845e6) main_smil2_pane

0xb885,	// (0x000856e6) main_smil_pane

0xb885,	// (0x000856e6) main_video_pane

0xb885,	// (0x000856e6) main_video_tele_pane

0xa9e0,	// (0x00084841) main_viewer_pane_ParamLimits

0xa9e0,	// (0x00084841) main_viewer_pane

0xb885,	// (0x000856e6) main_vorec_pane

0x44b4,	// (0x0007e315) popup_blid_sat_info_window_ParamLimits

0x44b4,	// (0x0007e315) popup_blid_sat_info_window

0x450c,	// (0x0007e36d) popup_dyc_status_message_window_ParamLimits

0x450c,	// (0x0007e36d) popup_dyc_status_message_window

0x4524,	// (0x0007e385) popup_grid_large_graphic_window_ParamLimits

0x4524,	// (0x0007e385) popup_grid_large_graphic_window

0x45da,	// (0x0007e43b) popup_loc_request_window_ParamLimits

0x45da,	// (0x0007e43b) popup_loc_request_window

0x46d8,	// (0x0007e539) popup_wml_address_window_ParamLimits

0x46d8,	// (0x0007e539) popup_wml_address_window

0x429a,	// (0x0007e0fb) call_muted_g1

0x3f52,	// (0x0007ddb3) popup_call_audio_conf_window_ParamLimits

0x3f52,	// (0x0007ddb3) popup_call_audio_conf_window

0x42ae,	// (0x0007e10f) popup_call_audio_first_window_ParamLimits

0x42ae,	// (0x0007e10f) popup_call_audio_first_window

0x4324,	// (0x0007e185) popup_call_audio_in_window_ParamLimits

0x4324,	// (0x0007e185) popup_call_audio_in_window

0x4360,	// (0x0007e1c1) popup_call_audio_out_window_ParamLimits

0x4360,	// (0x0007e1c1) popup_call_audio_out_window

0x439a,	// (0x0007e1fb) popup_call_audio_second_window_ParamLimits

0x439a,	// (0x0007e1fb) popup_call_audio_second_window

0x43f0,	// (0x0007e251) popup_call_audio_wait_window_ParamLimits

0x43f0,	// (0x0007e251) popup_call_audio_wait_window

0x4425,	// (0x0007e286) popup_number_entry_window_ParamLimits

0x4425,	// (0x0007e286) popup_number_entry_window

0x1609,	// (0x0007b46a) bg_popup_call_pane_cp05_ParamLimits

0x1609,	// (0x0007b46a) bg_popup_call_pane_cp05

0x1629,	// (0x0007b48a) popup_number_entry_window_t1

0x163c,	// (0x0007b49d) popup_number_entry_window_t2

0x164e,	// (0x0007b4af) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00088f39) popup_number_entry_window_t

0x1696,	// (0x0007b4f7) text_title_cp2

0x16a9,	// (0x0007b50a) bg_popup_call_pane_cp_ParamLimits

0x16a9,	// (0x0007b50a) bg_popup_call_pane_cp

0x16b7,	// (0x0007b518) call_thumbnail_pane

0x16bf,	// (0x0007b520) popup_call_audio_in_window_g1_ParamLimits

0x16bf,	// (0x0007b520) popup_call_audio_in_window_g1

0x16cb,	// (0x0007b52c) popup_call_audio_in_window_g2_ParamLimits

0x16cb,	// (0x0007b52c) popup_call_audio_in_window_g2

0x16d7,	// (0x0007b538) popup_call_audio_in_window_g3_ParamLimits

0x16d7,	// (0x0007b538) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x00088f42) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x00088f42) popup_call_audio_in_window_g

0x16e3,	// (0x0007b544) popup_call_audio_in_window_t1_ParamLimits

0x16e3,	// (0x0007b544) popup_call_audio_in_window_t1

0x16fe,	// (0x0007b55f) popup_call_audio_in_window_t2_ParamLimits

0x16fe,	// (0x0007b55f) popup_call_audio_in_window_t2

0x1719,	// (0x0007b57a) popup_call_audio_in_window_t3_ParamLimits

0x1719,	// (0x0007b57a) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00088f49) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00088f49) popup_call_audio_in_window_t

0x16a9,	// (0x0007b50a) bg_popup_call_pane_cp01_ParamLimits

0x16a9,	// (0x0007b50a) bg_popup_call_pane_cp01

0x16b7,	// (0x0007b518) call_thumbnail_pane_cp02

0x172c,	// (0x0007b58d) call_type_pane_cp022

0x1734,	// (0x0007b595) popup_call_audio_out_window_g1_ParamLimits

0x1734,	// (0x0007b595) popup_call_audio_out_window_g1

0x1746,	// (0x0007b5a7) popup_call_audio_out_window_g2_ParamLimits

0x1746,	// (0x0007b5a7) popup_call_audio_out_window_g2

0x1752,	// (0x0007b5b3) popup_call_audio_out_window_g3_ParamLimits

0x1752,	// (0x0007b5b3) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x00088f50) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x00088f50) popup_call_audio_out_window_g

0x1764,	// (0x0007b5c5) popup_call_audio_out_window_t1_ParamLimits

0x1764,	// (0x0007b5c5) popup_call_audio_out_window_t1

0x177c,	// (0x0007b5dd) popup_call_audio_out_window_t2_ParamLimits

0x177c,	// (0x0007b5dd) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00088f57) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00088f57) popup_call_audio_out_window_t

0x1791,	// (0x0007b5f2) bg_popup_call_pane_ParamLimits

0x1791,	// (0x0007b5f2) bg_popup_call_pane

0x1815,	// (0x0007b676) call_thumbnail_pane_cp_ParamLimits

0x1815,	// (0x0007b676) call_thumbnail_pane_cp

0x1839,	// (0x0007b69a) call_type_pane_cp01_ParamLimits

0x1839,	// (0x0007b69a) call_type_pane_cp01

0x187d,	// (0x0007b6de) popup_call_audio_first_window_g1_ParamLimits

0x187d,	// (0x0007b6de) popup_call_audio_first_window_g1

0x18c9,	// (0x0007b72a) popup_call_audio_first_window_g2_ParamLimits

0x18c9,	// (0x0007b72a) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00088f5c) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00088f5c) popup_call_audio_first_window_g

0x190d,	// (0x0007b76e) popup_call_audio_first_window_t1_ParamLimits

0x190d,	// (0x0007b76e) popup_call_audio_first_window_t1

0xa6ca,	// (0x0008452b) popup_call_audio_first_window_t4_ParamLimits

0xa6ca,	// (0x0008452b) popup_call_audio_first_window_t4

0xa756,	// (0x000845b7) popup_call_audio_first_window_t5_ParamLimits

0xa756,	// (0x000845b7) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x00088f61) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x00088f61) popup_call_audio_first_window_t

0xa785,	// (0x000845e6) bg_popup_call_pane_cp02

0xa78f,	// (0x000845f0) call_type_pane_cp023

0xa797,	// (0x000845f8) popup_call_audio_wait_window_g1

0xa79f,	// (0x00084600) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00088f68) popup_call_audio_wait_window_g

0xa7a7,	// (0x00084608) popup_call_audio_wait_window_t3

0xa7b5,	// (0x00084616) bg_popup_call_pane_cp03_ParamLimits

0xa7b5,	// (0x00084616) bg_popup_call_pane_cp03

0xa815,	// (0x00084676) call_thumbnail_pane_cp011_ParamLimits

0xa815,	// (0x00084676) call_thumbnail_pane_cp011

0xa821,	// (0x00084682) call_type_pane_cp034_ParamLimits

0xa821,	// (0x00084682) call_type_pane_cp034

0xa85d,	// (0x000846be) popup_call_audio_second_window_g1_ParamLimits

0xa85d,	// (0x000846be) popup_call_audio_second_window_g1

0xa899,	// (0x000846fa) popup_call_audio_second_window_g2_ParamLimits

0xa899,	// (0x000846fa) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00088f6d) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00088f6d) popup_call_audio_second_window_g

0xa8d5,	// (0x00084736) popup_call_audio_second_window_t1_ParamLimits

0xa8d5,	// (0x00084736) popup_call_audio_second_window_t1

0xa956,	// (0x000847b7) popup_call_audio_second_window_t2_ParamLimits

0xa956,	// (0x000847b7) popup_call_audio_second_window_t2

0xa98c,	// (0x000847ed) popup_call_audio_second_window_t3_ParamLimits

0xa98c,	// (0x000847ed) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x00088f72) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x00088f72) popup_call_audio_second_window_t

0xa785,	// (0x000845e6) bg_popup_call_pane_cp04

0xa9c2,	// (0x00084823) list_conf_pane

0xa9ca,	// (0x0008482b) popup_call_audio_conf_window_t1

0xa9d8,	// (0x00084839) call_thumbnail_pane_g1

0xa9e0,	// (0x00084841) bg_pinb_pane_ParamLimits

0xa9e0,	// (0x00084841) bg_pinb_pane

0xa9ee,	// (0x0008484f) find_pinb_pane

0xa9f7,	// (0x00084858) listscroll_pinb_pane_ParamLimits

0xa9f7,	// (0x00084858) listscroll_pinb_pane

0xaa06,	// (0x00084867) pinb_bg_pane_g1

0x19b9,	// (0x0007b81a) pinb_bg_pane_g2

0x19c5,	// (0x0007b826) pinb_bg_pane_g3

0x19d1,	// (0x0007b832) pinb_bg_pane_g4

0x19dd,	// (0x0007b83e) pinb_bg_pane_g5

0x19e9,	// (0x0007b84a) pinb_bg_pane_g6

0x19f4,	// (0x0007b855) pinb_bg_pane_g7

0x19ff,	// (0x0007b860) pinb_bg_pane_g8

0x1a0a,	// (0x0007b86b) pinb_bg_pane_g9

0x1a14,	// (0x0007b875) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00088f79) pinb_bg_pane_g

0x1a29,	// (0x0007b88a) grid_pinb_pane

0x1a32,	// (0x0007b893) list_pinb_pane

0x1a3b,	// (0x0007b89c) scroll_pane_cp01_ParamLimits

0x1a3b,	// (0x0007b89c) scroll_pane_cp01

0xaa18,	// (0x00084879) find_pinb_pane_g1_ParamLimits

0xaa18,	// (0x00084879) find_pinb_pane_g1

0xaa30,	// (0x00084891) find_pinb_pane_t1

0xaa42,	// (0x000848a3) find_pinb_pane_t2

0x0001,

0xf132,	// (0x00088f93) find_pinb_pane_t

0xaa57,	// (0x000848b8) input_focus_pane_cp01_ParamLimits

0xaa57,	// (0x000848b8) input_focus_pane_cp01

0x1a4d,	// (0x0007b8ae) cell_pinb_pane_ParamLimits

0x1a4d,	// (0x0007b8ae) cell_pinb_pane

0x1a7f,	// (0x0007b8e0) cell_pinb_pane_g1_ParamLimits

0x1a7f,	// (0x0007b8e0) cell_pinb_pane_g1

0x1a8f,	// (0x0007b8f0) cell_pinb_pane_g2_ParamLimits

0x1a8f,	// (0x0007b8f0) cell_pinb_pane_g2

0xaa63,	// (0x000848c4) cell_pinb_pane_g3_ParamLimits

0xaa63,	// (0x000848c4) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x00088f98) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x00088f98) cell_pinb_pane_g

0xa785,	// (0x000845e6) grid_highlight_pane_cp01

0x1a9b,	// (0x0007b8fc) list_pinb_item_pane_ParamLimits

0x1a9b,	// (0x0007b8fc) list_pinb_item_pane

0xa785,	// (0x000845e6) list_highlight_pane_cp02

0xaa6f,	// (0x000848d0) list_pinb_item_pane_g1_ParamLimits

0xaa6f,	// (0x000848d0) list_pinb_item_pane_g1

0xaa7c,	// (0x000848dd) list_pinb_item_pane_g2_ParamLimits

0xaa7c,	// (0x000848dd) list_pinb_item_pane_g2

0x1aaf,	// (0x0007b910) list_pinb_item_pane_g3_ParamLimits

0x1aaf,	// (0x0007b910) list_pinb_item_pane_g3

0xaa88,	// (0x000848e9) list_pinb_item_pane_g4_ParamLimits

0xaa88,	// (0x000848e9) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x00088f9f) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x00088f9f) list_pinb_item_pane_g

0xaa94,	// (0x000848f5) list_pinb_item_pane_t1_ParamLimits

0xaa94,	// (0x000848f5) list_pinb_item_pane_t1

0x1ade,	// (0x0007b93f) calc_display_pane

0x1b06,	// (0x0007b967) calc_paper_pane

0x1b29,	// (0x0007b98a) grid_calc_pane

0xa785,	// (0x000845e6) bg_list_pane_cp01

0x1b57,	// (0x0007b9b8) clock_g1

0x1b5f,	// (0x0007b9c0) clock_g2

0x0001,

0xf147,	// (0x00088fa8) clock_g

0x1b67,	// (0x0007b9c8) clock_t1_ParamLimits

0x1b67,	// (0x0007b9c8) clock_t1

0x1b7c,	// (0x0007b9dd) clock_t2_ParamLimits

0x1b7c,	// (0x0007b9dd) clock_t2

0x1b8e,	// (0x0007b9ef) clock_t3_ParamLimits

0x1b8e,	// (0x0007b9ef) clock_t3

0x1ba0,	// (0x0007ba01) clock_t4_ParamLimits

0x1ba0,	// (0x0007ba01) clock_t4

0x1bb2,	// (0x0007ba13) clock_t5_ParamLimits

0x1bb2,	// (0x0007ba13) clock_t5

0x1bc7,	// (0x0007ba28) clock_t6_ParamLimits

0x1bc7,	// (0x0007ba28) clock_t6

0x1bd9,	// (0x0007ba3a) clock_t7_ParamLimits

0x1bd9,	// (0x0007ba3a) clock_t7

0x1beb,	// (0x0007ba4c) clock_t8_ParamLimits

0x1beb,	// (0x0007ba4c) clock_t8

0x1bff,	// (0x0007ba60) clock_t9_ParamLimits

0x1bff,	// (0x0007ba60) clock_t9

0x0008,

0xf14c,	// (0x00088fad) clock_t_ParamLimits

0xf14c,	// (0x00088fad) clock_t

0xaab3,	// (0x00084914) popup_clock_analogue_window_cp02

0xaab3,	// (0x00084914) popup_clock_digital_window_cp01

0xaabb,	// (0x0008491c) listscroll_help_pane

0xa785,	// (0x000845e6) phob_pre_status_pane

0xaac5,	// (0x00084926) grid_qdial_pane

0xa785,	// (0x000845e6) listscroll_mce_pane

0xaacf,	// (0x00084930) bg_notes_pane

0xaadd,	// (0x0008493e) list_notes_pane

0x1c13,	// (0x0007ba74) scroll_pane_cp06

0xaaeb,	// (0x0008494c) bg_calc_paper_pane

0xaaff,	// (0x00084960) list_calc_pane

0xab19,	// (0x0008497a) bg_calc_display_pane

0x1c27,	// (0x0007ba88) calc_display_pane_t1

0x1c39,	// (0x0007ba9a) calc_display_pane_t2

0xab25,	// (0x00084986) calc_display_pane_t3

0x0002,

0xf15f,	// (0x00088fc0) calc_display_pane_t

0x1c4b,	// (0x0007baac) cell_calc_pane_ParamLimits

0x1c4b,	// (0x0007baac) cell_calc_pane

0xab37,	// (0x00084998) bg_calc_paper_pane_g1

0xab43,	// (0x000849a4) bg_calc_paper_pane_g2

0xab4f,	// (0x000849b0) bg_calc_paper_pane_g3

0xab5b,	// (0x000849bc) bg_calc_paper_pane_g4

0xab67,	// (0x000849c8) bg_calc_paper_pane_g5

0x1c82,	// (0x0007bae3) bg_calc_paper_pane_g6

0x1c93,	// (0x0007baf4) bg_calc_paper_pane_g7

0x1ca4,	// (0x0007bb05) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x00088fc7) bg_calc_paper_pane_g

0x1cb7,	// (0x0007bb18) calc_bg_paper_pane_g9

0x1cca,	// (0x0007bb2b) list_calc_item_pane_ParamLimits

0x1cca,	// (0x0007bb2b) list_calc_item_pane

0xab73,	// (0x000849d4) list_calc_item_pane_g1

0xab80,	// (0x000849e1) list_calc_item_pane_t1_ParamLimits

0xab80,	// (0x000849e1) list_calc_item_pane_t1

0x1ce2,	// (0x0007bb43) list_calc_item_pane_t2_ParamLimits

0x1ce2,	// (0x0007bb43) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x00088fd8) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x00088fd8) list_calc_item_pane_t

0xab92,	// (0x000849f3) cell_calc_pane_g1

0xab9c,	// (0x000849fd) grid_highlight_pane_cp02

0xabbe,	// (0x00084a1f) bg_calc_display_pane_g1

0xabc7,	// (0x00084a28) bg_calc_display_pane_g2

0xabd1,	// (0x00084a32) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x00088fe2) bg_calc_display_pane_g

0x1d14,	// (0x0007bb75) cell_qdial_pane_ParamLimits

0x1d14,	// (0x0007bb75) cell_qdial_pane

0x1d28,	// (0x0007bb89) cell_qdial_pane_g1_ParamLimits

0x1d28,	// (0x0007bb89) cell_qdial_pane_g1

0x1d3e,	// (0x0007bb9f) cell_qdial_pane_g2_ParamLimits

0x1d3e,	// (0x0007bb9f) cell_qdial_pane_g2

0xabda,	// (0x00084a3b) cell_qdial_pane_g3_ParamLimits

0xabda,	// (0x00084a3b) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x00088fe9) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x00088fe9) cell_qdial_pane_g

0x1d65,	// (0x0007bbc6) cell_qdial_pane_t1_ParamLimits

0x1d65,	// (0x0007bbc6) cell_qdial_pane_t1

0x1d7d,	// (0x0007bbde) cell_qdial_pane_t2_ParamLimits

0x1d7d,	// (0x0007bbde) cell_qdial_pane_t2

0x1d90,	// (0x0007bbf1) cell_qdial_pane_t3_ParamLimits

0x1d90,	// (0x0007bbf1) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x00088ff2) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x00088ff2) cell_qdial_pane_t

0xa785,	// (0x000845e6) grid_highlight_pane_cp04

0xabe6,	// (0x00084a47) thumbnail_qdial_pane_ParamLimits

0xabe6,	// (0x00084a47) thumbnail_qdial_pane

0xac42,	// (0x00084aa3) list_help_pane

0xac4b,	// (0x00084aac) scroll_pane_cp02

0x1da3,	// (0x0007bc04) help_list_pane_t1_ParamLimits

0x1da3,	// (0x0007bc04) help_list_pane_t1

0xac54,	// (0x00084ab5) bg_notes_pane_g2

0xac5c,	// (0x00084abd) bg_notes_pane_g3

0xac64,	// (0x00084ac5) notes_bg_pane_g1

0xac6c,	// (0x00084acd) notes_bg_pane_g4

0xac74,	// (0x00084ad5) notes_bg_pane_g5

0xac7c,	// (0x00084add) notes_bg_pane_g6

0xac84,	// (0x00084ae5) notes_bg_pane_g7

0xac8c,	// (0x00084aed) notes_bg_pane_g8

0xac94,	// (0x00084af5) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x00089010) notes_bg_pane_g

0x1dc3,	// (0x0007bc24) list_notes_text_pane_ParamLimits

0x1dc3,	// (0x0007bc24) list_notes_text_pane

0xac9c,	// (0x00084afd) list_notes_text_pane_g1

0x0962,	// (0x0007a7c3) list_notes_text_pane_t1

0xab19,	// (0x0008497a) listscroll_cale_week_pane

0x1df7,	// (0x0007bc58) bg_cale_heading_pane

0xacb6,	// (0x00084b17) bg_cale_pane_cp01

0x1e0f,	// (0x0007bc70) cale_week_corner_pane

0x1e20,	// (0x0007bc81) cale_week_day_heading_pane

0x1e38,	// (0x0007bc99) cale_week_scroll_pane_g1

0x1e4d,	// (0x0007bcae) cale_week_scroll_pane_g2

0x1e5e,	// (0x0007bcbf) cale_week_scroll_pane_g3

0x1e6f,	// (0x0007bcd0) cale_week_scroll_pane_g4

0x1e80,	// (0x0007bce1) cale_week_scroll_pane_g5

0x1e93,	// (0x0007bcf4) cale_week_scroll_pane_g6

0x1ea6,	// (0x0007bd07) cale_week_scroll_pane_g7

0x1eb9,	// (0x0007bd1a) cale_week_scroll_pane_g8

0x1ecc,	// (0x0007bd2d) cale_week_scroll_pane_g9

0x1edd,	// (0x0007bd3e) cale_week_scroll_pane_g10

0x1eee,	// (0x0007bd4f) cale_week_scroll_pane_g11

0x1eff,	// (0x0007bd60) cale_week_scroll_pane_g12

0x1f10,	// (0x0007bd71) cale_week_scroll_pane_g13

0x1f21,	// (0x0007bd82) cale_week_scroll_pane_g14

0x1f32,	// (0x0007bd93) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0008901f) cale_week_scroll_pane_g

0x1f47,	// (0x0007bda8) cale_week_time_pane

0x1f5a,	// (0x0007bdbb) grid_cale_week_pane

0x1f6f,	// (0x0007bdd0) scroll_pane_cp08

0x1f89,	// (0x0007bdea) cell_cale_week_pane_ParamLimits

0x1f89,	// (0x0007bdea) cell_cale_week_pane

0x1fc9,	// (0x0007be2a) cale_week_day_heading_pane_t1

0x1fdd,	// (0x0007be3e) cale_week_day_heading_pane_t2

0x1ff1,	// (0x0007be52) cale_week_day_heading_pane_t3

0x2005,	// (0x0007be66) cale_week_day_heading_pane_t4

0x2019,	// (0x0007be7a) cale_week_day_heading_pane_t5

0x202d,	// (0x0007be8e) cale_week_day_heading_pane_t6

0x2043,	// (0x0007bea4) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x0008903e) cale_week_day_heading_pane_t

0xace1,	// (0x00084b42) bg_cale_side_pane

0x2057,	// (0x0007beb8) cale_week_time_pane_t1

0x206f,	// (0x0007bed0) cale_week_time_pane_t2

0x2087,	// (0x0007bee8) cale_week_time_pane_t3

0x209f,	// (0x0007bf00) cale_week_time_pane_t4

0x20b7,	// (0x0007bf18) cale_week_time_pane_t5

0x20cf,	// (0x0007bf30) cale_week_time_pane_t6

0x20e7,	// (0x0007bf48) cale_week_time_pane_t7

0x20ff,	// (0x0007bf60) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x0008904d) cale_week_time_pane_t

0x2117,	// (0x0007bf78) cell_cale_week_pane_g2

0x2130,	// (0x0007bf91) cell_cale_week_pane_g3_ParamLimits

0x2130,	// (0x0007bf91) cell_cale_week_pane_g3

0xacef,	// (0x00084b50) grid_highlight_pane_cp07

0xacf7,	// (0x00084b58) listscroll_gms_pane

0xad01,	// (0x00084b62) grid_gms_pane

0xad0a,	// (0x00084b6b) listscroll_gms_pane_g1

0xad12,	// (0x00084b73) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x0008905e) listscroll_gms_pane_g

0x2148,	// (0x0007bfa9) scroll_pane_cp010

0x2153,	// (0x0007bfb4) cell_gms_pane_ParamLimits

0x2153,	// (0x0007bfb4) cell_gms_pane

0x2165,	// (0x0007bfc6) cell_gms_pane_g1

0xad1a,	// (0x00084b7b) cell_gms_pane_g2

0xac9c,	// (0x00084afd) cell_gms_pane_g3

0xad22,	// (0x00084b83) cell_gms_pane_g4

0x0003,

0xf202,	// (0x00089063) cell_gms_pane_g

0xad2b,	// (0x00084b8c) grid_highlight_pane_cp09

0x4242,	// (0x0007e0a3) phob_pre_status_pane_g1

0x424a,	// (0x0007e0ab) phob_pre_status_pane_g2

0x4252,	// (0x0007e0b3) phob_pre_status_pane_g3

0x425a,	// (0x0007e0bb) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x00089452) phob_pre_status_pane_g

0x426c,	// (0x0007e0cd) phob_pre_status_pane_t1

0x427a,	// (0x0007e0db) phob_pre_status_pane_t2

0x428a,	// (0x0007e0eb) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x0008945d) phob_pre_status_pane_t

0xa785,	// (0x000845e6) bg_list_pane_cp05

0x216d,	// (0x0007bfce) grid_vorec_pane

0xad3b,	// (0x00084b9c) vorec_t1

0xad49,	// (0x00084baa) vorec_t2

0xad57,	// (0x00084bb8) vorec_t3

0xad65,	// (0x00084bc6) vorec_t4

0xad73,	// (0x00084bd4) vorec_t5

0xad81,	// (0x00084be2) vorec_t6

0x0006,

0xf20b,	// (0x0008906c) vorec_t

0xad9d,	// (0x00084bfe) wait_bar_pane_cp01

0xada5,	// (0x00084c06) cell_vorec_pane_ParamLimits

0xada5,	// (0x00084c06) cell_vorec_pane

0xadb8,	// (0x00084c19) cell_vorec_pane_g1

0xa785,	// (0x000845e6) grid_highlight_pane_cp05

0x218f,	// (0x0007bff0) cams_zoom_pane

0x219e,	// (0x0007bfff) image_vga_pane

0x21b8,	// (0x0007c019) main_camera_pane_g1

0x21ca,	// (0x0007c02b) main_camera_pane_g2

0x21dc,	// (0x0007c03d) main_camera_pane_g3

0x21ee,	// (0x0007c04f) main_camera_pane_g4

0x2200,	// (0x0007c061) main_camera_pane_g5

0x2212,	// (0x0007c073) main_camera_pane_g6

0x2224,	// (0x0007c085) main_camera_pane_g7

0x0007,

0xf21a,	// (0x0008907b) main_camera_pane_g

0x2236,	// (0x0007c097) main_camera_pane_t1

0x224c,	// (0x0007c0ad) main_camera_pane_t2

0x0001,

0xf22b,	// (0x0008908c) main_camera_pane_t

0x2288,	// (0x0007c0e9) cams_zoom_pane_cp_ParamLimits

0x2288,	// (0x0007c0e9) cams_zoom_pane_cp

0x22b0,	// (0x0007c111) image_cif_pane_ParamLimits

0x22b0,	// (0x0007c111) image_cif_pane

0x22eb,	// (0x0007c14c) image_subqcif_pane

0x22f3,	// (0x0007c154) main_video_pane_g1_ParamLimits

0x22f3,	// (0x0007c154) main_video_pane_g1

0x2317,	// (0x0007c178) main_video_pane_g2_ParamLimits

0x2317,	// (0x0007c178) main_video_pane_g2

0x234d,	// (0x0007c1ae) main_video_pane_g3_ParamLimits

0x234d,	// (0x0007c1ae) main_video_pane_g3

0x237d,	// (0x0007c1de) main_video_pane_g4_ParamLimits

0x237d,	// (0x0007c1de) main_video_pane_g4

0x23ad,	// (0x0007c20e) main_video_pane_g5_ParamLimits

0x23ad,	// (0x0007c20e) main_video_pane_g5

0xadce,	// (0x00084c2f) main_video_pane_g6_ParamLimits

0xadce,	// (0x00084c2f) main_video_pane_g6

0x0006,

0xf230,	// (0x00089091) main_video_pane_g_ParamLimits

0xf230,	// (0x00089091) main_video_pane_g

0x23d8,	// (0x0007c239) main_video_pane_t1_ParamLimits

0x23d8,	// (0x0007c239) main_video_pane_t1

0xade8,	// (0x00084c49) cams_zoom_pane_g1

0xadf1,	// (0x00084c52) cams_zoom_pane_g2

0xadfa,	// (0x00084c5b) cams_zoom_pane_g3

0xae03,	// (0x00084c64) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000890a0) cams_zoom_pane_g

0x2435,	// (0x0007c296) grid_cams_pane

0x244f,	// (0x0007c2b0) linegrid_cams_pane

0x2462,	// (0x0007c2c3) cell_cams_pane_ParamLimits

0x2462,	// (0x0007c2c3) cell_cams_pane

0xae0c,	// (0x00084c6d) cams_burst_image_pane

0xae14,	// (0x00084c75) cell_cams_pane_g1

0xa785,	// (0x000845e6) grid_highlight_pane_cp03

0xab92,	// (0x000849f3) mp_bg_pane_g1

0xa785,	// (0x000845e6) bg_list_pane_cp03

0xcc49,	// (0x00086aaa) bg_mp_pane

0xcc51,	// (0x00086ab2) grid_mp_pane

0xcc59,	// (0x00086aba) media_player_g1

0xcc61,	// (0x00086ac2) media_player_t1

0xcc6f,	// (0x00086ad0) media_player_t2

0xcc7d,	// (0x00086ade) media_player_t3

0xcc8b,	// (0x00086aec) media_player_t4

0xcc99,	// (0x00086afa) media_player_t5

0xcca7,	// (0x00086b08) media_player_t6

0xccb5,	// (0x00086b16) media_player_t7

0x0006,

0xf5db,	// (0x0008943c) media_player_t

0xccc3,	// (0x00086b24) wait_bar_pane_cp02

0xf5c0,	// (0x00089421) main_usb_pane_t

0x4239,	// (0x0007e09a) cell_mp_pane

0xab92,	// (0x000849f3) cell_mp_pane_g1

0xa785,	// (0x000845e6) grid_highlight_pane_cp06

0xaeda,	// (0x00084d3b) grid_skin_colour_pane

0xaee2,	// (0x00084d43) list_highlight_pane_cp03

0x2482,	// (0x0007c2e3) skin_g1

0xaeea,	// (0x00084d4b) skin_t1

0xaef9,	// (0x00084d5a) skin_t2

0x0001,

0xf274,	// (0x000890d5) skin_t

0x248a,	// (0x0007c2eb) cell_skin_colour_pane_ParamLimits

0x248a,	// (0x0007c2eb) cell_skin_colour_pane

0xaf07,	// (0x00084d68) cell_skin_colour_pane_g1

0x2503,	// (0x0007c364) call_video_g1_ParamLimits

0x2503,	// (0x0007c364) call_video_g1

0x251f,	// (0x0007c380) call_video_g2_ParamLimits

0x251f,	// (0x0007c380) call_video_g2

0x0001,

0xf279,	// (0x000890da) call_video_g_ParamLimits

0xf279,	// (0x000890da) call_video_g

0x2571,	// (0x0007c3d2) call_video_uplink_pane_cp1_ParamLimits

0x2571,	// (0x0007c3d2) call_video_uplink_pane_cp1

0xaf19,	// (0x00084d7a) call_video_uplink_pane_cp2

0x2610,	// (0x0007c471) video_down_crop_pane_ParamLimits

0x2610,	// (0x0007c471) video_down_crop_pane

0x26f9,	// (0x0007c55a) video_down_pane_ParamLimits

0x26f9,	// (0x0007c55a) video_down_pane

0xaf21,	// (0x00084d82) video_down_subqcif_pane_ParamLimits

0xaf21,	// (0x00084d82) video_down_subqcif_pane

0xaf39,	// (0x00084d9a) video_down_subqcif_pane_cp_ParamLimits

0xaf39,	// (0x00084d9a) video_down_subqcif_pane_cp

0xaf5f,	// (0x00084dc0) im_reading_pane_ParamLimits

0xaf5f,	// (0x00084dc0) im_reading_pane

0x2807,	// (0x0007c668) im_writing_pane_ParamLimits

0x2807,	// (0x0007c668) im_writing_pane

0x281d,	// (0x0007c67e) im_reading_pane_t1

0xaf79,	// (0x00084dda) list_im_pane

0xaf8a,	// (0x00084deb) scroll_pane_cp07

0x2859,	// (0x0007c6ba) im_writing_pane_t1_ParamLimits

0x2859,	// (0x0007c6ba) im_writing_pane_t1

0xafa3,	// (0x00084e04) im_writing_pane_t2_ParamLimits

0xafa3,	// (0x00084e04) im_writing_pane_t2

0x0001,

0xf283,	// (0x000890e4) im_writing_pane_t_ParamLimits

0xf283,	// (0x000890e4) im_writing_pane_t

0xa785,	// (0x000845e6) input_focus_pane_cp04

0xa785,	// (0x000845e6) input_focus_pane_cp05

0x286e,	// (0x0007c6cf) list_im_single_pane_ParamLimits

0x286e,	// (0x0007c6cf) list_im_single_pane

0x2884,	// (0x0007c6e5) list_single_im_pane_t1

0x41f9,	// (0x0007e05a) blid_accuracy_pane

0x4201,	// (0x0007e062) blid_compass_pane

0x420b,	// (0x0007e06c) main_location_t1

0x421b,	// (0x0007e07c) main_location_t2

0x422b,	// (0x0007e08c) main_location_t3

0x0002,

0xf5ea,	// (0x0008944b) main_location_t

0xa785,	// (0x000845e6) aid_levels_location

0xab92,	// (0x000849f3) blid_accuracy_pane_g1

0xab92,	// (0x000849f3) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00089146) blid_accuracy_pane_g

0xafeb,	// (0x00084e4c) wml_content_pane

0xb029,	// (0x00084e8a) wml_button_pane_ParamLimits

0xb029,	// (0x00084e8a) wml_button_pane

0x2893,	// (0x0007c6f4) wml_list_single_large_pane_ParamLimits

0x2893,	// (0x0007c6f4) wml_list_single_large_pane

0x28aa,	// (0x0007c70b) wml_list_single_medium_pane_ParamLimits

0x28aa,	// (0x0007c70b) wml_list_single_medium_pane

0x28c2,	// (0x0007c723) wml_list_single_small_pane_ParamLimits

0x28c2,	// (0x0007c723) wml_list_single_small_pane

0xb03d,	// (0x00084e9e) wml_selection_box_pane_ParamLimits

0xb03d,	// (0x00084e9e) wml_selection_box_pane

0xb050,	// (0x00084eb1) wml_list_single_pane_t1

0xb05f,	// (0x00084ec0) wml_list_single_medium_pane_t1

0xb06e,	// (0x00084ecf) wml_list_single_large_pane_t1

0xb07d,	// (0x00084ede) input_focus_pane_cp02_ParamLimits

0xb07d,	// (0x00084ede) input_focus_pane_cp02

0xb090,	// (0x00084ef1) wml_selection_box_pane_g1

0xb099,	// (0x00084efa) wml_selection_box_pane_t1_ParamLimits

0xb099,	// (0x00084efa) wml_selection_box_pane_t1

0xa9e0,	// (0x00084841) bg_wml_button_pane_ParamLimits

0xa9e0,	// (0x00084841) bg_wml_button_pane

0xb0b1,	// (0x00084f12) wml_button_pane_g1

0xb0b9,	// (0x00084f1a) wml_button_pane_t1

0xb0b1,	// (0x00084f12) wml_button_bg_pane_g1

0xb0c9,	// (0x00084f2a) wml_button_bg_pane_g2

0xb0d1,	// (0x00084f32) wml_button_bg_pane_g3

0xb0d9,	// (0x00084f3a) wml_button_bg_pane_g4

0xb0e1,	// (0x00084f42) wml_button_bg_pane_g5

0xb0e9,	// (0x00084f4a) wml_button_bg_pane_g6

0xb0f1,	// (0x00084f52) wml_button_bg_pane_g7

0xb0f9,	// (0x00084f5a) wml_button_bg_pane_g8

0xb101,	// (0x00084f62) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000890e9) wml_button_bg_pane_g

0x28e0,	// (0x0007c741) bg_list_pane_cp02

0xb109,	// (0x00084f6a) mce_header_pane_ParamLimits

0xb109,	// (0x00084f6a) mce_header_pane

0xb11f,	// (0x00084f80) mce_icon_pane

0xb11f,	// (0x00084f80) mce_image_pane

0xb128,	// (0x00084f89) mce_text_pane_ParamLimits

0xb128,	// (0x00084f89) mce_text_pane

0x28e8,	// (0x0007c749) scroll_pane_cp03

0xb021,	// (0x00084e82) scroll_pane_cp04

0xb13b,	// (0x00084f9c) scroll_pane_cp05_ParamLimits

0xb13b,	// (0x00084f9c) scroll_pane_cp05

0x28f2,	// (0x0007c753) mce_header_field_pane_ParamLimits

0x28f2,	// (0x0007c753) mce_header_field_pane

0x2909,	// (0x0007c76a) mce_header_field_pane_2_ParamLimits

0x2909,	// (0x0007c76a) mce_header_field_pane_2

0x291f,	// (0x0007c780) mce_header_field_pane_3

0x2927,	// (0x0007c788) list_single_mce_message_pane_ParamLimits

0x2927,	// (0x0007c788) list_single_mce_message_pane

0x293f,	// (0x0007c7a0) list_single_mce_smart_pane_ParamLimits

0x293f,	// (0x0007c7a0) list_single_mce_smart_pane

0xb147,	// (0x00084fa8) input_focus_pane_cp03

0xb150,	// (0x00084fb1) list_header_data_pane

0x2962,	// (0x0007c7c3) mce_header_field_pane_t1

0x2972,	// (0x0007c7d3) list_single_mce_header_pane_ParamLimits

0x2972,	// (0x0007c7d3) list_single_mce_header_pane

0xb158,	// (0x00084fb9) list_single_mce_header_pane_t1

0xb167,	// (0x00084fc8) list_single_mce_message_pane_g1

0xb16f,	// (0x00084fd0) list_single_mce_message_pane_t1

0x29a4,	// (0x0007c805) bg_cale_heading_pane_cp01_ParamLimits

0x29a4,	// (0x0007c805) bg_cale_heading_pane_cp01

0xb17d,	// (0x00084fde) bg_cale_pane_cp02_ParamLimits

0xb17d,	// (0x00084fde) bg_cale_pane_cp02

0x29c7,	// (0x0007c828) cale_month_corner_pane

0x29dd,	// (0x0007c83e) cale_month_day_heading_pane_ParamLimits

0x29dd,	// (0x0007c83e) cale_month_day_heading_pane

0x2a10,	// (0x0007c871) cale_month_pane_g1_ParamLimits

0x2a10,	// (0x0007c871) cale_month_pane_g1

0x2a2c,	// (0x0007c88d) cale_month_pane_g2_ParamLimits

0x2a2c,	// (0x0007c88d) cale_month_pane_g2

0x2a47,	// (0x0007c8a8) cale_month_pane_g3_ParamLimits

0x2a47,	// (0x0007c8a8) cale_month_pane_g3

0x2a73,	// (0x0007c8d4) cale_month_pane_g4_ParamLimits

0x2a73,	// (0x0007c8d4) cale_month_pane_g4

0x2a9f,	// (0x0007c900) cale_month_pane_g5_ParamLimits

0x2a9f,	// (0x0007c900) cale_month_pane_g5

0x2ad3,	// (0x0007c934) cale_month_pane_g6_ParamLimits

0x2ad3,	// (0x0007c934) cale_month_pane_g6

0x2b0f,	// (0x0007c970) cale_month_pane_g7_ParamLimits

0x2b0f,	// (0x0007c970) cale_month_pane_g7

0x2b4b,	// (0x0007c9ac) cale_month_pane_g8_ParamLimits

0x2b4b,	// (0x0007c9ac) cale_month_pane_g8

0x2b87,	// (0x0007c9e8) cale_month_pane_g9_ParamLimits

0x2b87,	// (0x0007c9e8) cale_month_pane_g9

0x2bc1,	// (0x0007ca22) cale_month_pane_g10_ParamLimits

0x2bc1,	// (0x0007ca22) cale_month_pane_g10

0x2bfb,	// (0x0007ca5c) cale_month_pane_g11_ParamLimits

0x2bfb,	// (0x0007ca5c) cale_month_pane_g11

0x2c35,	// (0x0007ca96) cale_month_pane_g12_ParamLimits

0x2c35,	// (0x0007ca96) cale_month_pane_g12

0x2c6f,	// (0x0007cad0) cale_month_pane_g13_ParamLimits

0x2c6f,	// (0x0007cad0) cale_month_pane_g13

0x000c,

0xf29b,	// (0x000890fc) cale_month_pane_g_ParamLimits

0xf29b,	// (0x000890fc) cale_month_pane_g

0x2ca9,	// (0x0007cb0a) cale_month_week_pane

0x2cbc,	// (0x0007cb1d) grid_cale_month_pane_ParamLimits

0x2cbc,	// (0x0007cb1d) grid_cale_month_pane

0x2cea,	// (0x0007cb4b) cale_month_day_heading_pane_t1

0x2d48,	// (0x0007cba9) cale_month_day_heading_pane_t2

0x2dad,	// (0x0007cc0e) cale_month_day_heading_pane_t3

0x2e12,	// (0x0007cc73) cale_month_day_heading_pane_t4

0x2e77,	// (0x0007ccd8) cale_month_day_heading_pane_t5

0x2eec,	// (0x0007cd4d) cale_month_day_heading_pane_t6

0x2f61,	// (0x0007cdc2) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00089117) cale_month_day_heading_pane_t

0xace1,	// (0x00084b42) bg_cale_side_pane_cp01

0x2fd6,	// (0x0007ce37) cale_month_week_pane_t1

0x2fed,	// (0x0007ce4e) cale_month_week_pane_t2

0x3004,	// (0x0007ce65) cale_month_week_pane_t3

0x301b,	// (0x0007ce7c) cale_month_week_pane_t4

0x3032,	// (0x0007ce93) cale_month_week_pane_t5

0x3049,	// (0x0007ceaa) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00089126) cale_month_week_pane_t

0x3060,	// (0x0007cec1) cell_cale_month_pane_ParamLimits

0x3060,	// (0x0007cec1) cell_cale_month_pane

0xb1dc,	// (0x0008503d) cell_cale_month_pane_g1

0x3136,	// (0x0007cf97) cell_cale_month_pane_t1_ParamLimits

0x3136,	// (0x0007cf97) cell_cale_month_pane_t1

0xacef,	// (0x00084b50) grid_highlight_pane_cp08

0xab92,	// (0x000849f3) main_smil_g1

0x3152,	// (0x0007cfb3) smil_status_pane

0xb1e8,	// (0x00085049) smil_text_pane

0xcb61,	// (0x000869c2) bg_popup_call3_rect_pane_g8

0xcb69,	// (0x000869ca) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000893df) bg_popup_call3_rect_pane_g

0xcdeb,	// (0x00086c4c) smil_status_volume_pane_g1

0xb1f2,	// (0x00085053) smil_status_pane_t1

0xce1e,	// (0x00086c7f) volume_smil_pane

0xb209,	// (0x0008506a) list_smil_text_pane

0x3167,	// (0x0007cfc8) scroll_pane_cp011

0x3172,	// (0x0007cfd3) smil_text_list_pane_t1_ParamLimits

0x3172,	// (0x0007cfd3) smil_text_list_pane_t1

0xb213,	// (0x00085074) aid_volume_smil_ParamLimits

0xb213,	// (0x00085074) aid_volume_smil

0xab92,	// (0x000849f3) smil_volume_pane_g1

0xab92,	// (0x000849f3) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00089146) smil_volume_pane_g

0xab19,	// (0x0008497a) listscroll_cale_day_pane

0xb235,	// (0x00085096) bg_cale_pane

0xb24d,	// (0x000850ae) list_cale_pane

0xb25e,	// (0x000850bf) scroll_pane_cp09

0xb26f,	// (0x000850d0) cale_bg_pane_g1

0xb277,	// (0x000850d8) cale_bg_pane_g2

0xb27f,	// (0x000850e0) cale_bg_pane_g3

0xb287,	// (0x000850e8) cale_bg_pane_g4

0xb28f,	// (0x000850f0) cale_bg_pane_g5

0xb297,	// (0x000850f8) cale_bg_pane_g6

0xb29f,	// (0x00085100) cale_bg_pane_g7

0xb2a7,	// (0x00085108) cale_bg_pane_g8

0xb2af,	// (0x00085110) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x0008914b) cale_bg_pane_g

0x31c6,	// (0x0007d027) list_cale_time_pane_ParamLimits

0x31c6,	// (0x0007d027) list_cale_time_pane

0x31db,	// (0x0007d03c) list_cale_time_pane_g1_ParamLimits

0x31db,	// (0x0007d03c) list_cale_time_pane_g1

0xb2b7,	// (0x00085118) list_cale_time_pane_g2_ParamLimits

0xb2b7,	// (0x00085118) list_cale_time_pane_g2

0x31e7,	// (0x0007d048) list_cale_time_pane_g3_ParamLimits

0x31e7,	// (0x0007d048) list_cale_time_pane_g3

0x3203,	// (0x0007d064) list_cale_time_pane_g4_ParamLimits

0x3203,	// (0x0007d064) list_cale_time_pane_g4

0x3211,	// (0x0007d072) list_cale_time_pane_g5_ParamLimits

0x3211,	// (0x0007d072) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x0008915e) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x0008915e) list_cale_time_pane_g

0x321f,	// (0x0007d080) list_cale_time_pane_t1_ParamLimits

0x321f,	// (0x0007d080) list_cale_time_pane_t1

0x3247,	// (0x0007d0a8) list_cale_time_pane_t2_ParamLimits

0x3247,	// (0x0007d0a8) list_cale_time_pane_t2

0x351a,	// (0x0007d37b) aid_blid_cardinal_pane

0x3558,	// (0x0007d3b9) compass_pane_t4

0x326f,	// (0x0007d0d0) list_cale_time_pane_t4_ParamLimits

0x326f,	// (0x0007d0d0) list_cale_time_pane_t4

0x3566,	// (0x0007d3c7) compass_pane_t5

0x3574,	// (0x0007d3d5) compass_pane_t6

0x3582,	// (0x0007d3e3) compass_pane_t7

0xb7d7,	// (0x00085638) navi_pane_cc_t1

0xb93e,	// (0x0008579f) aid_phob_thumbnail_center_pane

0x3c0d,	// (0x0007da6e) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x0008916b) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x0008916b) list_cale_time_pane_t

0x16a9,	// (0x0007b50a) bg_popup_window_pane_cp02_ParamLimits

0x16a9,	// (0x0007b50a) bg_popup_window_pane_cp02

0xb2d1,	// (0x00085132) heading_pane_cp01_ParamLimits

0xb2d1,	// (0x00085132) heading_pane_cp01

0xb2dd,	// (0x0008513e) loc_req_pane_ParamLimits

0xb2dd,	// (0x0008513e) loc_req_pane

0xb2ed,	// (0x0008514e) loc_type_pane_ParamLimits

0xb2ed,	// (0x0008514e) loc_type_pane

0xb2ff,	// (0x00085160) loc_type_pane_t1_ParamLimits

0xb2ff,	// (0x00085160) loc_type_pane_t1

0xb311,	// (0x00085172) loc_type_pane_t2_ParamLimits

0xb311,	// (0x00085172) loc_type_pane_t2

0xb323,	// (0x00085184) loc_type_pane_t3_ParamLimits

0xb323,	// (0x00085184) loc_type_pane_t3

0x0002,

0xf311,	// (0x00089172) loc_type_pane_t_ParamLimits

0xf311,	// (0x00089172) loc_type_pane_t

0xb335,	// (0x00085196) list_loc_req_pane

0xb33f,	// (0x000851a0) scroll_pane_cp012

0x3297,	// (0x0007d0f8) list_single_loc_request_popup_menu_pane_ParamLimits

0x3297,	// (0x0007d0f8) list_single_loc_request_popup_menu_pane

0xb34a,	// (0x000851ab) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xb34a,	// (0x000851ab) list_single_loc_request_popup_menu_pane_g1

0xb356,	// (0x000851b7) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xb356,	// (0x000851b7) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00089179) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00089179) list_single_loc_request_popup_menu_pane_g

0xb362,	// (0x000851c3) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xb362,	// (0x000851c3) list_single_loc_request_popup_menu_pane_t1

0xa9e0,	// (0x00084841) bg_popup_window_pane_cp03_ParamLimits

0xa9e0,	// (0x00084841) bg_popup_window_pane_cp03

0xb378,	// (0x000851d9) heading_loc_req_pane_ParamLimits

0xb378,	// (0x000851d9) heading_loc_req_pane

0x32a4,	// (0x0007d105) popup_dyc_status_message_window_g1_ParamLimits

0x32a4,	// (0x0007d105) popup_dyc_status_message_window_g1

0x32b8,	// (0x0007d119) popup_dyc_status_message_window_t1_ParamLimits

0x32b8,	// (0x0007d119) popup_dyc_status_message_window_t1

0x32cd,	// (0x0007d12e) popup_dyc_status_message_window_t2_ParamLimits

0x32cd,	// (0x0007d12e) popup_dyc_status_message_window_t2

0x32e2,	// (0x0007d143) popup_dyc_status_message_window_t3_ParamLimits

0x32e2,	// (0x0007d143) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x0008917e) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x0008917e) popup_dyc_status_message_window_t

0xa785,	// (0x000845e6) bg_heading_pane_cp01

0xb384,	// (0x000851e5) heading_loc_req_pane_g1

0xb38c,	// (0x000851ed) heading_loc_req_pane_g2

0xb394,	// (0x000851f5) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00089185) heading_loc_req_pane_g

0xb39c,	// (0x000851fd) heading_loc_req_pane_t1

0xb422,	// (0x00085283) bg_popup_sub_pane_cp01_ParamLimits

0xb422,	// (0x00085283) bg_popup_sub_pane_cp01

0xb430,	// (0x00085291) popup_cale_events_window_g1_ParamLimits

0xb430,	// (0x00085291) popup_cale_events_window_g1

0xb450,	// (0x000852b1) popup_cale_events_window_g2_ParamLimits

0xb450,	// (0x000852b1) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000891b9) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000891b9) popup_cale_events_window_g

0xb470,	// (0x000852d1) popup_cale_events_window_t1_ParamLimits

0xb470,	// (0x000852d1) popup_cale_events_window_t1

0xb482,	// (0x000852e3) popup_cale_events_window_t2_ParamLimits

0xb482,	// (0x000852e3) popup_cale_events_window_t2

0xb4c0,	// (0x00085321) popup_cale_events_window_t3_ParamLimits

0xb4c0,	// (0x00085321) popup_cale_events_window_t3

0xb4fa,	// (0x0008535b) popup_cale_events_window_t4_ParamLimits

0xb4fa,	// (0x0008535b) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000891be) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000891be) popup_cale_events_window_t

0x3316,	// (0x0007d177) call_type_pane

0x3326,	// (0x0007d187) popup_call_status_window_g1

0x333a,	// (0x0007d19b) popup_call_status_window_g2

0x334e,	// (0x0007d1af) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000891c7) popup_call_status_window_g

0xb530,	// (0x00085391) call_type_pane_g1

0xb539,	// (0x0008539a) call_type_pane_g2

0x0001,

0xf36d,	// (0x000891ce) call_type_pane_g

0xa785,	// (0x000845e6) bg_popup_sub_pane_cp02

0xb542,	// (0x000853a3) listscroll_popup_wml_pane

0xb54a,	// (0x000853ab) list_wml_pane

0xb554,	// (0x000853b5) scroll_pane_cp013

0xb55f,	// (0x000853c0) list_single_graphic_popup_wml_pane_ParamLimits

0xb55f,	// (0x000853c0) list_single_graphic_popup_wml_pane

0xab92,	// (0x000849f3) list_single_graphic_popup_wml_pane_g1

0xb573,	// (0x000853d4) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000891d3) list_single_graphic_popup_wml_pane_g

0xb57b,	// (0x000853dc) list_single_graphic_popup_wml_pane_t1

0xb591,	// (0x000853f2) aid_call_pane

0xa9d8,	// (0x00084839) popup_clock_analogue_window_g1

0xa9d8,	// (0x00084839) popup_clock_analogue_window_g2

0xb599,	// (0x000853fa) popup_clock_analogue_window_g3

0xb599,	// (0x000853fa) popup_clock_analogue_window_g4

0xab92,	// (0x000849f3) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000891d8) popup_clock_analogue_window_g

0xb5a1,	// (0x00085402) popup_clock_analogue_window_t1

0xb5af,	// (0x00085410) clock_digital_number_pane_ParamLimits

0xb5af,	// (0x00085410) clock_digital_number_pane

0xb5bb,	// (0x0008541c) clock_digital_number_pane_cp02_ParamLimits

0xb5bb,	// (0x0008541c) clock_digital_number_pane_cp02

0xb5c7,	// (0x00085428) clock_digital_number_pane_cp03_ParamLimits

0xb5c7,	// (0x00085428) clock_digital_number_pane_cp03

0xb5d3,	// (0x00085434) clock_digital_number_pane_cp04_ParamLimits

0xb5d3,	// (0x00085434) clock_digital_number_pane_cp04

0xb5df,	// (0x00085440) clock_digital_separator_pane_ParamLimits

0xb5df,	// (0x00085440) clock_digital_separator_pane

0xb5eb,	// (0x0008544c) popup_clock_digital_window_t1

0xab92,	// (0x000849f3) clock_digital_number_pane_g1

0xab92,	// (0x000849f3) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00089146) clock_digital_number_pane_g

0xab92,	// (0x000849f3) clock_digital_separator_pane_g1

0xab92,	// (0x000849f3) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00089146) clock_digital_separator_pane_g

0xa785,	// (0x000845e6) bg_popup_window_pane_cp04

0xb608,	// (0x00085469) heading_pane_cp03

0xb610,	// (0x00085471) listscroll_popup_gms_pane

0xb618,	// (0x00085479) grid_large_graphic_popup_pane

0xb622,	// (0x00085483) listscroll_popup_gms_pane_g1

0xb62a,	// (0x0008548b) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000891e3) listscroll_popup_gms_pane_g

0xb021,	// (0x00084e82) scroll_pane_cp014

0xb632,	// (0x00085493) cell_large_graphic_popup_pane_ParamLimits

0xb632,	// (0x00085493) cell_large_graphic_popup_pane

0xb64a,	// (0x000854ab) cell_large_graphic_popup_pane_g1_ParamLimits

0xb64a,	// (0x000854ab) cell_large_graphic_popup_pane_g1

0xb656,	// (0x000854b7) cell_large_graphic_popup_pane_g2_ParamLimits

0xb656,	// (0x000854b7) cell_large_graphic_popup_pane_g2

0xb662,	// (0x000854c3) cell_large_graphic_popup_pane_g3_ParamLimits

0xb662,	// (0x000854c3) cell_large_graphic_popup_pane_g3

0xb66f,	// (0x000854d0) cell_large_graphic_popup_pane_g4_ParamLimits

0xb66f,	// (0x000854d0) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000891e8) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000891e8) cell_large_graphic_popup_pane_g

0xb67f,	// (0x000854e0) grid_highlight_pane_cp010

0xab92,	// (0x000849f3) bg_popup_call_pane_g1

0xb689,	// (0x000854ea) list_single_graphic_popup_conf_pane_ParamLimits

0xb689,	// (0x000854ea) list_single_graphic_popup_conf_pane

0xb69b,	// (0x000854fc) list_highlight_pane_cp01

0xb6a4,	// (0x00085505) list_single_graphic_popup_conf_pane_g1

0xb6ac,	// (0x0008550d) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000891f1) list_single_graphic_popup_conf_pane_g

0xb6b4,	// (0x00085515) list_single_graphic_popup_conf_pane_t1

0xb6c2,	// (0x00085523) linegrid_cams_pane_g1

0x335e,	// (0x0007d1bf) linegrid_cams_pane_g2

0xac9c,	// (0x00084afd) linegrid_cams_pane_g3

0xb6cb,	// (0x0008552c) linegrid_cams_pane_g4

0x3367,	// (0x0007d1c8) linegrid_cams_pane_g5

0x3370,	// (0x0007d1d1) linegrid_cams_pane_g6

0xad22,	// (0x00084b83) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x000891f6) linegrid_cams_pane_g

0xb6d4,	// (0x00085535) popup_clock_analogue_window

0xb6d4,	// (0x00085535) popup_clock_digital_window

0xa785,	// (0x000845e6) popup_phob_thumbnail_window

0xab92,	// (0x000849f3) call_video_uplink_pane_g1

0xb6dd,	// (0x0008553e) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00089205) call_video_uplink_pane_g

0xacef,	// (0x00084b50) video_uplink_pane

0xb6e5,	// (0x00085546) mce_image_pane_g1

0x337b,	// (0x0007d1dc) mce_image_pane_g2

0x3383,	// (0x0007d1e4) mce_image_pane_g3

0x338b,	// (0x0007d1ec) mce_image_pane_g4

0x3393,	// (0x0007d1f4) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x0008920a) mce_image_pane_g

0xb6ef,	// (0x00085550) control_top_pane_stacon_cp01_ParamLimits

0xb6ef,	// (0x00085550) control_top_pane_stacon_cp01

0xb703,	// (0x00085564) uni_indicator_pane_stacon_cp01_ParamLimits

0xb703,	// (0x00085564) uni_indicator_pane_stacon_cp01

0xb714,	// (0x00085575) bg_popup_sub_pane_cp03

0x339b,	// (0x0007d1fc) chi_dic_find_pane

0x33a3,	// (0x0007d204) listscroll_chi_dic_pane

0x33ac,	// (0x0007d20d) main_pane_chidic_g1

0x33bf,	// (0x0007d220) chi_dic_find_pane_t1

0xb71e,	// (0x0008557f) find_chidic_pane

0xb727,	// (0x00085588) chi_dic_list_pane_ParamLimits

0xb727,	// (0x00085588) chi_dic_list_pane

0xb738,	// (0x00085599) scroll_pane_cp020

0x33cd,	// (0x0007d22e) find_chidic_pane_t1

0xa785,	// (0x000845e6) input_focus_pane_cp06

0x33dc,	// (0x0007d23d) list_chi_dic_pane_ParamLimits

0x33dc,	// (0x0007d23d) list_chi_dic_pane

0xb740,	// (0x000855a1) list_chi_dic_pane_t1_ParamLimits

0xb740,	// (0x000855a1) list_chi_dic_pane_t1

0xa785,	// (0x000845e6) list_highlight_pane_cp020

0xb753,	// (0x000855b4) bg_cale_heading_pane_g1

0x33f0,	// (0x0007d251) bg_cale_heading_pane_g2

0x33f8,	// (0x0007d259) bg_cale_heading_pane_g3

0x3400,	// (0x0007d261) bg_cale_heading_pane_g4

0x340a,	// (0x0007d26b) bg_cale_heading_pane_g5

0x3414,	// (0x0007d275) bg_cale_heading_pane_g6

0x341c,	// (0x0007d27d) bg_cale_heading_pane_g7

0x3424,	// (0x0007d285) bg_cale_heading_pane_g8

0x342e,	// (0x0007d28f) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00089215) bg_cale_heading_pane_g

0xb753,	// (0x000855b4) bg_cale_side_pane_g1

0x3438,	// (0x0007d299) bg_cale_side_pane_g2

0x3440,	// (0x0007d2a1) bg_cale_side_pane_g3

0x3448,	// (0x0007d2a9) bg_cale_side_pane_g4

0x3450,	// (0x0007d2b1) bg_cale_side_pane_g5

0x3458,	// (0x0007d2b9) bg_cale_side_pane_g6

0x3460,	// (0x0007d2c1) bg_cale_side_pane_g7

0x3468,	// (0x0007d2c9) bg_cale_side_pane_g8

0x3470,	// (0x0007d2d1) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00089228) bg_cale_side_pane_g

0x3478,	// (0x0007d2d9) popup_call_status_window_ParamLimits

0x3478,	// (0x0007d2d9) popup_call_status_window

0xb75b,	// (0x000855bc) stacon_top_pane

0xb763,	// (0x000855c4) status_pane_ParamLimits

0xb763,	// (0x000855c4) status_pane

0xb778,	// (0x000855d9) status_small_pane

0xb780,	// (0x000855e1) control_pane

0xa785,	// (0x000845e6) stacon_bottom_pane

0xb788,	// (0x000855e9) list_single_mce_smart_pane_t1_ParamLimits

0xb788,	// (0x000855e9) list_single_mce_smart_pane_t1

0xb79b,	// (0x000855fc) list_single_mce_smart_pane_t2_ParamLimits

0xb79b,	// (0x000855fc) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x0008923b) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x0008923b) list_single_mce_smart_pane_t

0x34bf,	// (0x0007d320) compass_pane

0x34c8,	// (0x0007d329) main_location2_pane_t1

0x34dc,	// (0x0007d33d) main_location2_pane_t2

0x34f0,	// (0x0007d351) main_location2_pane_t3

0x0003,

0xf3df,	// (0x00089240) main_location2_pane_t

0xb7ba,	// (0x0008561b) compass_pane_g1_ParamLimits

0xb7ba,	// (0x0008561b) compass_pane_g1

0x353a,	// (0x0007d39b) compass_pane_t1

0x3549,	// (0x0007d3aa) compass_pane_t2

0x0005,

0xf3e8,	// (0x00089249) compass_pane_t

0x3590,	// (0x0007d3f1) text_secondary_cp61

0xb7ce,	// (0x0008562f) navi_pane_cams_g5

0xb7f1,	// (0x00085652) navi_pane_im_t1

0xb7ff,	// (0x00085660) navi_pane_mp_g1_ParamLimits

0xb7ff,	// (0x00085660) navi_pane_mp_g1

0xb813,	// (0x00085674) navi_pane_mp_g2_ParamLimits

0xb813,	// (0x00085674) navi_pane_mp_g2

0xb81f,	// (0x00085680) navi_pane_mp_g3_ParamLimits

0xb81f,	// (0x00085680) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x0008925d) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x0008925d) navi_pane_mp_g

0xb82b,	// (0x0008568c) navi_pane_mp_t1

0xb839,	// (0x0008569a) navi_pane_mp_t2

0x0002,

0xf403,	// (0x00089264) navi_pane_mp_t

0xb875,	// (0x000856d6) navi_pane_vt_g1

0xb82b,	// (0x0008568c) navi_pane_vt_t1

0xb87d,	// (0x000856de) navi_slider_pane

0xb885,	// (0x000856e6) zooming_pane

0xb88d,	// (0x000856ee) navi_slider_pane_g1

0xb896,	// (0x000856f7) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x0008926b) navi_slider_pane_g

0xb8c3,	// (0x00085724) aid_levels_zoom

0xb8cb,	// (0x0008572c) zooming_pane_g1

0xb8d3,	// (0x00085734) zooming_pane_g2

0xb8d3,	// (0x00085734) zooming_pane_g3

0x0002,

0xf419,	// (0x0008927a) zooming_pane_g

0xb8db,	// (0x0008573c) level_10_zoom

0xb8e4,	// (0x00085745) level_11_zoom

0xb8ed,	// (0x0008574e) level_1_zoom

0xb8f6,	// (0x00085757) level_2_zoom

0xb8ff,	// (0x00085760) level_3_zoom

0xb908,	// (0x00085769) level_4_zoom

0xb911,	// (0x00085772) level_5_zoom

0xb91a,	// (0x0008577b) level_6_zoom

0xb923,	// (0x00085784) level_7_zoom

0xb92c,	// (0x0008578d) level_8_zoom

0xb935,	// (0x00085796) level_9_zoom

0xb946,	// (0x000857a7) popup_phob_thumbnail_window_g1

0xb94e,	// (0x000857af) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x00089281) popup_phob_thumbnail_window_g

0xcccb,	// (0x00086b2c) level_1_location

0xccd3,	// (0x00086b34) level_2_location

0xccdb,	// (0x00086b3c) level_3_location

0xcce3,	// (0x00086b44) level_4_location

0xb885,	// (0x000856e6) level_5_location

0x36cf,	// (0x0007d530) mce_icon_pane_g1

0x36d7,	// (0x0007d538) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00089286) mce_icon_pane_g

0x36df,	// (0x0007d540) main_mup_pane_g1_ParamLimits

0x36df,	// (0x0007d540) main_mup_pane_g1

0x36f5,	// (0x0007d556) main_mup_pane_g2_ParamLimits

0x36f5,	// (0x0007d556) main_mup_pane_g2

0x370d,	// (0x0007d56e) main_mup_pane_g3_ParamLimits

0x370d,	// (0x0007d56e) main_mup_pane_g3

0x3725,	// (0x0007d586) main_mup_pane_g4_ParamLimits

0x3725,	// (0x0007d586) main_mup_pane_g4

0x373d,	// (0x0007d59e) main_mup_pane_g5_ParamLimits

0x373d,	// (0x0007d59e) main_mup_pane_g5

0x3759,	// (0x0007d5ba) main_mup_pane_g6_ParamLimits

0x3759,	// (0x0007d5ba) main_mup_pane_g6

0x3771,	// (0x0007d5d2) main_mup_pane_g7_ParamLimits

0x3771,	// (0x0007d5d2) main_mup_pane_g7

0x3789,	// (0x0007d5ea) main_mup_pane_g8_ParamLimits

0x3789,	// (0x0007d5ea) main_mup_pane_g8

0x37a1,	// (0x0007d602) main_mup_pane_g9_ParamLimits

0x37a1,	// (0x0007d602) main_mup_pane_g9

0x37bb,	// (0x0007d61c) main_mup_pane_g10_ParamLimits

0x37bb,	// (0x0007d61c) main_mup_pane_g10

0x37d5,	// (0x0007d636) main_mup_pane_g11_ParamLimits

0x37d5,	// (0x0007d636) main_mup_pane_g11

0x37e9,	// (0x0007d64a) main_mup_pane_g12_ParamLimits

0x37e9,	// (0x0007d64a) main_mup_pane_g12

0x37ff,	// (0x0007d660) main_mup_pane_g13_ParamLimits

0x37ff,	// (0x0007d660) main_mup_pane_g13

0x000c,

0xf42a,	// (0x0008928b) main_mup_pane_g_ParamLimits

0xf42a,	// (0x0008928b) main_mup_pane_g

0x3813,	// (0x0007d674) main_mup_pane_t1_ParamLimits

0x3813,	// (0x0007d674) main_mup_pane_t1

0x382d,	// (0x0007d68e) main_mup_pane_t2_ParamLimits

0x382d,	// (0x0007d68e) main_mup_pane_t2

0x3845,	// (0x0007d6a6) main_mup_pane_t3_ParamLimits

0x3845,	// (0x0007d6a6) main_mup_pane_t3

0x385d,	// (0x0007d6be) main_mup_pane_t4_ParamLimits

0x385d,	// (0x0007d6be) main_mup_pane_t4

0x387b,	// (0x0007d6dc) main_mup_pane_t5_ParamLimits

0x387b,	// (0x0007d6dc) main_mup_pane_t5

0x3890,	// (0x0007d6f1) main_mup_pane_t6_ParamLimits

0x3890,	// (0x0007d6f1) main_mup_pane_t6

0x0005,

0xf445,	// (0x000892a6) main_mup_pane_t_ParamLimits

0xf445,	// (0x000892a6) main_mup_pane_t

0x38a2,	// (0x0007d703) mup_progress_pane_ParamLimits

0x38a2,	// (0x0007d703) mup_progress_pane

0x38ae,	// (0x0007d70f) mup_visualizer_pane_ParamLimits

0x38ae,	// (0x0007d70f) mup_visualizer_pane

0x38e2,	// (0x0007d743) mup_volume_pane_ParamLimits

0x38e2,	// (0x0007d743) mup_volume_pane

0xb956,	// (0x000857b7) mup_visualizer_pane_g1_ParamLimits

0xb956,	// (0x000857b7) mup_visualizer_pane_g1

0xb956,	// (0x000857b7) mup_visualizer_pane_g2_ParamLimits

0xb956,	// (0x000857b7) mup_visualizer_pane_g2

0xb7ba,	// (0x0008561b) mup_visualizer_pane_g3_ParamLimits

0xb7ba,	// (0x0008561b) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000892b3) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000892b3) mup_visualizer_pane_g

0xab92,	// (0x000849f3) mup_volume_pane_g1

0xb96c,	// (0x000857cd) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000892ba) mup_volume_pane_g

0xab92,	// (0x000849f3) mup_progress_pane_g1

0xb975,	// (0x000857d6) mup_progress_pane_g2

0xb97e,	// (0x000857df) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000892bf) mup_progress_pane_g

0xa785,	// (0x000845e6) bg_popup_window_pane_cp05

0xb987,	// (0x000857e8) heading_pane_cp02_ParamLimits

0xb987,	// (0x000857e8) heading_pane_cp02

0xb9a1,	// (0x00085802) list_popup_blid_pane

0xb9a9,	// (0x0008580a) list_blid_sat_info_pane_ParamLimits

0xb9a9,	// (0x0008580a) list_blid_sat_info_pane

0xb9bc,	// (0x0008581d) list_blid_sat_info_pane_g1

0xb9c4,	// (0x00085825) list_blid_sat_info_pane_t1

0x3a08,	// (0x0007d869) mup_equalizer_pane_ParamLimits

0x3a08,	// (0x0007d869) mup_equalizer_pane

0x3a21,	// (0x0007d882) mup_equalizer_pane_cp1_ParamLimits

0x3a21,	// (0x0007d882) mup_equalizer_pane_cp1

0x3a3e,	// (0x0007d89f) mup_equalizer_pane_cp2_ParamLimits

0x3a3e,	// (0x0007d89f) mup_equalizer_pane_cp2

0x3a5b,	// (0x0007d8bc) mup_equalizer_pane_cp3_ParamLimits

0x3a5b,	// (0x0007d8bc) mup_equalizer_pane_cp3

0x3a7c,	// (0x0007d8dd) mup_equalizer_pane_cp4_ParamLimits

0x3a7c,	// (0x0007d8dd) mup_equalizer_pane_cp4

0x3a9d,	// (0x0007d8fe) mup_equalizer_pane_cp5

0x3ab1,	// (0x0007d912) mup_equalizer_pane_cp6

0x3ac5,	// (0x0007d926) mup_equalizer_pane_cp7

0xcbe9,	// (0x00086a4a) bg_popup_call_poc_act_pane_g9

0xcbf1,	// (0x00086a52) bg_popup_call_poc_act_pane_g10

0xcbf9,	// (0x00086a5a) bg_popup_call_poc_act_pane_g11

0x000a,

0xa9e0,	// (0x00084841) mup_scale_pane

0xab92,	// (0x000849f3) mup_scale_pane_g1

0xb9d2,	// (0x00085833) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000892db) mup_scale_pane_g

0xb9f6,	// (0x00085857) msg_data_pane

0xb9fe,	// (0x0008585f) scroll_pane_cp017

0x0a1c,	// (0x0007a87d) bg_list_pane_cp04_ParamLimits

0x0a1c,	// (0x0007a87d) bg_list_pane_cp04

0xba06,	// (0x00085867) msg_data_pane_g1

0x3aeb,	// (0x0007d94c) msg_data_pane_g2

0x3383,	// (0x0007d1e4) msg_data_pane_g3

0x3af3,	// (0x0007d954) msg_data_pane_g4

0x3afb,	// (0x0007d95c) msg_data_pane_g5

0x3b03,	// (0x0007d964) msg_data_pane_g6

0x3b0b,	// (0x0007d96c) msg_data_pane_g7

0x0006,

0xf489,	// (0x000892ea) msg_data_pane_g

0x0a3c,	// (0x0007a89d) msg_text_pane_ParamLimits

0x0a3c,	// (0x0007a89d) msg_text_pane

0x3b13,	// (0x0007d974) qrid_highlight_pane_cp011_ParamLimits

0x3b13,	// (0x0007d974) qrid_highlight_pane_cp011

0xa785,	// (0x000845e6) msg_body_pane

0xa785,	// (0x000845e6) msg_header_pane

0xba17,	// (0x00085878) input_focus_pane_cp07

0x0a71,	// (0x0007a8d2) msg_header_pane_t1_ParamLimits

0x0a71,	// (0x0007a8d2) msg_header_pane_t1

0xba2c,	// (0x0008588d) msg_header_pane_t2_ParamLimits

0xba2c,	// (0x0008588d) msg_header_pane_t2

0x0001,

0xf49d,	// (0x000892fe) msg_header_pane_t_ParamLimits

0xf49d,	// (0x000892fe) msg_header_pane_t

0xba3e,	// (0x0008589f) msg_body_pane_g1

0x0a85,	// (0x0007a8e6) msg_body_pane_t1_ParamLimits

0x0a85,	// (0x0007a8e6) msg_body_pane_t1

0xba46,	// (0x000858a7) msg_body_pane_t2_ParamLimits

0xba46,	// (0x000858a7) msg_body_pane_t2

0xba58,	// (0x000858b9) msg_body_pane_t3_ParamLimits

0xba58,	// (0x000858b9) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x00089303) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x00089303) msg_body_pane_t

0x3b63,	// (0x0007d9c4) main_viewer_pane_g1_ParamLimits

0x3b63,	// (0x0007d9c4) main_viewer_pane_g1

0x3b71,	// (0x0007d9d2) main_viewer_pane_g2_ParamLimits

0x3b71,	// (0x0007d9d2) main_viewer_pane_g2

0x3b7f,	// (0x0007d9e0) main_viewer_pane_g3_ParamLimits

0x3b7f,	// (0x0007d9e0) main_viewer_pane_g3

0x3b8e,	// (0x0007d9ef) main_viewer_pane_g4_ParamLimits

0x3b8e,	// (0x0007d9ef) main_viewer_pane_g4

0xba82,	// (0x000858e3) main_viewer_pane_g5_ParamLimits

0xba82,	// (0x000858e3) main_viewer_pane_g5

0xba82,	// (0x000858e3) main_viewer_pane_g7_ParamLimits

0xba82,	// (0x000858e3) main_viewer_pane_g7

0xba94,	// (0x000858f5) main_viewer_pane_g8_ParamLimits

0xba94,	// (0x000858f5) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x00089313) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x00089313) main_viewer_pane_g

0xbaac,	// (0x0008590d) viewer_content_pane_ParamLimits

0xbaac,	// (0x0008590d) viewer_content_pane

0x3bca,	// (0x0007da2b) main_postcard_pane_g1_ParamLimits

0x3bca,	// (0x0007da2b) main_postcard_pane_g1

0x3be0,	// (0x0007da41) main_postcard_pane_g2_ParamLimits

0x3be0,	// (0x0007da41) main_postcard_pane_g2

0x3bf6,	// (0x0007da57) main_postcard_pane_g3_ParamLimits

0x3bf6,	// (0x0007da57) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x00089324) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x00089324) main_postcard_pane_g

0x3c0d,	// (0x0007da6e) main_postcard_pane_g4

0xcdfe,	// (0x00086c5f) smil_status_volume_pane_g2

0x3c50,	// (0x0007dab1) postcard_pane_ParamLimits

0x3c50,	// (0x0007dab1) postcard_pane

0xbaba,	// (0x0008591b) postcard_pane_g1_ParamLimits

0xbaba,	// (0x0008591b) postcard_pane_g1

0x3c92,	// (0x0007daf3) postcard_pane_g2_ParamLimits

0x3c92,	// (0x0007daf3) postcard_pane_g2

0x3c9e,	// (0x0007daff) postcard_pane_g3_ParamLimits

0x3c9e,	// (0x0007daff) postcard_pane_g3

0xbac8,	// (0x00085929) postcard_pane_g4_ParamLimits

0xbac8,	// (0x00085929) postcard_pane_g4

0x3caa,	// (0x0007db0b) postcard_pane_g5_ParamLimits

0x3caa,	// (0x0007db0b) postcard_pane_g5

0x3cbf,	// (0x0007db20) postcard_pane_g6_ParamLimits

0x3cbf,	// (0x0007db20) postcard_pane_g6

0xbaba,	// (0x0008591b) postcard_pane_g7_ParamLimits

0xbaba,	// (0x0008591b) postcard_pane_g7

0x0006,

0xf4d0,	// (0x00089331) postcard_pane_g_ParamLimits

0xf4d0,	// (0x00089331) postcard_pane_g

0x3cd3,	// (0x0007db34) main_mp2_pane_g1_ParamLimits

0x3cd3,	// (0x0007db34) main_mp2_pane_g1

0x3cdf,	// (0x0007db40) main_mp2_pane_g2_ParamLimits

0x3cdf,	// (0x0007db40) main_mp2_pane_g2

0x3ceb,	// (0x0007db4c) main_mp2_pane_g3_ParamLimits

0x3ceb,	// (0x0007db4c) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x00089340) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x00089340) main_mp2_pane_g

0x3cf7,	// (0x0007db58) main_mp2_pane_t1_ParamLimits

0x3cf7,	// (0x0007db58) main_mp2_pane_t1

0x3d0c,	// (0x0007db6d) main_mp2_pane_t2_ParamLimits

0x3d0c,	// (0x0007db6d) main_mp2_pane_t2

0x3d1e,	// (0x0007db7f) main_mp2_pane_t3_ParamLimits

0x3d1e,	// (0x0007db7f) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00089347) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00089347) main_mp2_pane_t

0xbad6,	// (0x00085937) pec_content_pane_ParamLimits

0xbad6,	// (0x00085937) pec_content_pane

0xb021,	// (0x00084e82) scroll_pane_cp015

0xbae8,	// (0x00085949) pec_attribute_pane_ParamLimits

0xbae8,	// (0x00085949) pec_attribute_pane

0x3d30,	// (0x0007db91) pec_content_pane_g1_ParamLimits

0x3d30,	// (0x0007db91) pec_content_pane_g1

0xbaf8,	// (0x00085959) pec_content_pane_t1_ParamLimits

0xbaf8,	// (0x00085959) pec_content_pane_t1

0xbb0a,	// (0x0008596b) pec_content_pane_t2_ParamLimits

0xbb0a,	// (0x0008596b) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x0008934e) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x0008934e) pec_content_pane_t

0x3d3e,	// (0x0007db9f) list_single_graphic_pane_cp01_ParamLimits

0x3d3e,	// (0x0007db9f) list_single_graphic_pane_cp01

0xa9e0,	// (0x00084841) bg_popup_sub_pane_cp04

0xbb1c,	// (0x0008597d) popup_mup_playback_window_g1

0xbb28,	// (0x00085989) popup_mup_playback_window_t1

0xbb3d,	// (0x0008599e) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x00089353) popup_mup_playback_window_t

0xbb74,	// (0x000859d5) main_image_pane_g1_ParamLimits

0xbb74,	// (0x000859d5) main_image_pane_g1

0xbbb7,	// (0x00085a18) scroll_pane_cp018_ParamLimits

0xbbb7,	// (0x00085a18) scroll_pane_cp018

0xbbcf,	// (0x00085a30) scroll_pane_cp016_ParamLimits

0xbbcf,	// (0x00085a30) scroll_pane_cp016

0x3e0e,	// (0x0007dc6f) smil2_image_pane_ParamLimits

0x3e0e,	// (0x0007dc6f) smil2_image_pane

0x3e42,	// (0x0007dca3) smil2_root_pane_ParamLimits

0x3e42,	// (0x0007dca3) smil2_root_pane

0x3e7a,	// (0x0007dcdb) smil2_text_pane_ParamLimits

0x3e7a,	// (0x0007dcdb) smil2_text_pane

0xa785,	// (0x000845e6) bg_list_pane_cp06

0xbc0b,	// (0x00085a6c) grid_radio_pane

0xa785,	// (0x000845e6) bg_popup_window_pane_cp06

0xbc13,	// (0x00085a74) main_fmradio_pane_t1

0xb608,	// (0x00085469) heading_pane_cp04

0xbc21,	// (0x00085a82) main_fmradio_pane_t2

0xcc01,	// (0x00086a62) popup_cale_lunar_info_window_g1

0xbc2f,	// (0x00085a90) main_fmradio_pane_t3

0xcc09,	// (0x00086a6a) popup_cale_lunar_info_window_g2

0xbc3d,	// (0x00085a9e) main_fmradio_pane_t4

0x0001,

0xbc4b,	// (0x00085aac) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x0008942e) popup_cale_lunar_info_window_g

0xf507,	// (0x00089368) main_fmradio_pane_t

0xbc59,	// (0x00085aba) wait_bar_pane_cp03

0xbc61,	// (0x00085ac2) cell_fmradio_pane_ParamLimits

0xbc61,	// (0x00085ac2) cell_fmradio_pane

0xbaba,	// (0x0008591b) cell_fmradio_pane_g1_ParamLimits

0xbaba,	// (0x0008591b) cell_fmradio_pane_g1

0xa785,	// (0x000845e6) grid_highlight_pane_cp011

0xbc74,	// (0x00085ad5) poc_content_pane_ParamLimits

0xbc74,	// (0x00085ad5) poc_content_pane

0xbc86,	// (0x00085ae7) scroll_pane_cp019

0x3efa,	// (0x0007dd5b) popup_call_poc_act_window_ParamLimits

0x3efa,	// (0x0007dd5b) popup_call_poc_act_window

0x3f1e,	// (0x0007dd7f) popup_call_poc_inact_window_ParamLimits

0x3f1e,	// (0x0007dd7f) popup_call_poc_inact_window

0xf5a4,	// (0x00089405) bg_popup_call_poc_act_pane_g

0xcb71,	// (0x000869d2) bg_popup_call_poc_inact_pane_g1

0xcb79,	// (0x000869da) bg_popup_call_poc_inact_pane_g2

0xbc8e,	// (0x00085aef) popup_call_poc_act_window_g2

0xcb81,	// (0x000869e2) bg_popup_call_poc_inact_pane_g3

0xcb89,	// (0x000869ea) bg_popup_call_poc_inact_pane_g4

0xcb91,	// (0x000869f2) bg_popup_call_poc_inact_pane_g5

0xbc96,	// (0x00085af7) popup_call_poc_act_window_t1_ParamLimits

0xbc96,	// (0x00085af7) popup_call_poc_act_window_t1

0xbcbe,	// (0x00085b1f) popup_call_poc_act_window_t2_ParamLimits

0xbcbe,	// (0x00085b1f) popup_call_poc_act_window_t2

0xbce6,	// (0x00085b47) popup_call_poc_act_window_t3_ParamLimits

0xbce6,	// (0x00085b47) popup_call_poc_act_window_t3

0xbd0e,	// (0x00085b6f) popup_call_poc_act_window_t4_ParamLimits

0xbd0e,	// (0x00085b6f) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x00089373) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x00089373) popup_call_poc_act_window_t

0xcb99,	// (0x000869fa) bg_popup_call_poc_inact_pane_g6

0xcba1,	// (0x00086a02) bg_popup_call_poc_inact_pane_g7

0xcba9,	// (0x00086a0a) bg_popup_call_poc_inact_pane_g8

0xbd20,	// (0x00085b81) popup_call_poc_inact_window_g2

0xcbb1,	// (0x00086a12) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000893f2) bg_popup_call_poc_inact_pane_g

0xbd28,	// (0x00085b89) popup_call_poc_inact_window_t1_ParamLimits

0xbd28,	// (0x00085b89) popup_call_poc_inact_window_t1

0xbd3d,	// (0x00085b9e) popup_call_poc_inact_window_t2_ParamLimits

0xbd3d,	// (0x00085b9e) popup_call_poc_inact_window_t2

0xbd52,	// (0x00085bb3) popup_call_poc_inact_window_t3_ParamLimits

0xbd52,	// (0x00085bb3) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x0008937c) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x0008937c) popup_call_poc_inact_window_t

0xcd71,	// (0x00086bd2) context_pane_ParamLimits

0x4740,	// (0x0007e5a1) signal_pane_ParamLimits

0xb885,	// (0x000856e6) main_call2_pane

0xcd5f,	// (0x00086bc0) popup_phob_thumbnail2_window_ParamLimits

0xcd5f,	// (0x00086bc0) popup_phob_thumbnail2_window

0xba6a,	// (0x000858cb) aid_hotspot_pointer_arrow_pane

0xba72,	// (0x000858d3) aid_hotspot_pointer_hand_pane

0x4264,	// (0x0007e0c5) phob_pre_status_pane_g5

0x218f,	// (0x0007bff0) cams_zoom_pane_ParamLimits

0x219e,	// (0x0007bfff) image_vga_pane_ParamLimits

0x21b8,	// (0x0007c019) main_camera_pane_g1_ParamLimits

0x21ca,	// (0x0007c02b) main_camera_pane_g2_ParamLimits

0x21dc,	// (0x0007c03d) main_camera_pane_g3_ParamLimits

0x21ee,	// (0x0007c04f) main_camera_pane_g4_ParamLimits

0x2200,	// (0x0007c061) main_camera_pane_g5_ParamLimits

0x2212,	// (0x0007c073) main_camera_pane_g6_ParamLimits

0x2224,	// (0x0007c085) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x0008907b) main_camera_pane_g_ParamLimits

0x2236,	// (0x0007c097) main_camera_pane_t1_ParamLimits

0x224c,	// (0x0007c0ad) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x0008908c) main_camera_pane_t_ParamLimits

0xa9e0,	// (0x00084841) bg_popup_preview_window_pane_cp01_ParamLimits

0xa9e0,	// (0x00084841) bg_popup_preview_window_pane_cp01

0xbd67,	// (0x00085bc8) popup_phob_thumbnail2_window_g1_ParamLimits

0xbd67,	// (0x00085bc8) popup_phob_thumbnail2_window_g1

0xa785,	// (0x000845e6) call2_cli_visual_pane

0x3f52,	// (0x0007ddb3) popup_call2_audio_conf_window_ParamLimits

0x3f52,	// (0x0007ddb3) popup_call2_audio_conf_window

0x3f72,	// (0x0007ddd3) popup_call2_audio_first_window_ParamLimits

0x3f72,	// (0x0007ddd3) popup_call2_audio_first_window

0x4008,	// (0x0007de69) popup_call2_audio_in_window_ParamLimits

0x4008,	// (0x0007de69) popup_call2_audio_in_window

0x4050,	// (0x0007deb1) popup_call2_audio_out_window_ParamLimits

0x4050,	// (0x0007deb1) popup_call2_audio_out_window

0x40ba,	// (0x0007df1b) popup_call2_audio_second_window_ParamLimits

0x40ba,	// (0x0007df1b) popup_call2_audio_second_window

0x4120,	// (0x0007df81) popup_call2_audio_wait_window_ParamLimits

0x4120,	// (0x0007df81) popup_call2_audio_wait_window

0xa785,	// (0x000845e6) bg_popup_call2_act_pane_cp03

0xa9c2,	// (0x00084823) list_conf_pane_cp

0xbd73,	// (0x00085bd4) popup_call2_audio_conf_window_t1

0xbd81,	// (0x00085be2) list_single_graphic_popup_conf2_pane_ParamLimits

0xbd81,	// (0x00085be2) list_single_graphic_popup_conf2_pane

0xb69b,	// (0x000854fc) list_highlight_pane_cp04

0xbd94,	// (0x00085bf5) list_single_graphic_popup_conf2_pane_g1

0xb6ac,	// (0x0008550d) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x00089383) list_single_graphic_popup_conf2_pane_g

0xbd9e,	// (0x00085bff) list_single_graphic_popup_conf2_pane_t1

0xbdac,	// (0x00085c0d) bg_popup_call2_act_pane_cp01_ParamLimits

0xbdac,	// (0x00085c0d) bg_popup_call2_act_pane_cp01

0xbe36,	// (0x00085c97) call_type_pane_cp05_ParamLimits

0xbe36,	// (0x00085c97) call_type_pane_cp05

0xbe8a,	// (0x00085ceb) popup_call2_audio_second_window_g1_ParamLimits

0xbe8a,	// (0x00085ceb) popup_call2_audio_second_window_g1

0xbede,	// (0x00085d3f) popup_call2_audio_second_window_g2_ParamLimits

0xbede,	// (0x00085d3f) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00089388) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00089388) popup_call2_audio_second_window_g

0xbf43,	// (0x00085da4) popup_call2_audio_second_window_t1_ParamLimits

0xbf43,	// (0x00085da4) popup_call2_audio_second_window_t1

0xbffe,	// (0x00085e5f) popup_call2_audio_second_window_t2_ParamLimits

0xbffe,	// (0x00085e5f) popup_call2_audio_second_window_t2

0xc051,	// (0x00085eb2) popup_call2_audio_second_window_t3_ParamLimits

0xc051,	// (0x00085eb2) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0008938f) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0008938f) popup_call2_audio_second_window_t

0xa785,	// (0x000845e6) bg_popup_call2_in_pane_cp02

0xa78f,	// (0x000845f0) call_type_pane_cp04

0xa797,	// (0x000845f8) popup_call2_audio_wait_window_g1

0xa79f,	// (0x00084600) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00088f68) popup_call2_audio_wait_window_g

0xa7a7,	// (0x00084608) popup_call2_audio_wait_window_t3

0xc144,	// (0x00085fa5) bg_popup_call2_act_pane_ParamLimits

0xc144,	// (0x00085fa5) bg_popup_call2_act_pane

0xc204,	// (0x00086065) call_type_pane_cp03_ParamLimits

0xc204,	// (0x00086065) call_type_pane_cp03

0xc268,	// (0x000860c9) popup_call2_audio_first_window_g1_ParamLimits

0xc268,	// (0x000860c9) popup_call2_audio_first_window_g1

0xc2d8,	// (0x00086139) popup_call2_audio_first_window_g2_ParamLimits

0xc2d8,	// (0x00086139) popup_call2_audio_first_window_g2

0xb956,	// (0x000857b7) popup_call2_audio_first_window_g3_ParamLimits

0xb956,	// (0x000857b7) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x00089398) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x00089398) popup_call2_audio_first_window_g

0xc3b6,	// (0x00086217) popup_call2_audio_first_window_t1_ParamLimits

0xc3b6,	// (0x00086217) popup_call2_audio_first_window_t1

0xc4b9,	// (0x0008631a) popup_call2_audio_first_window_t4_ParamLimits

0xc4b9,	// (0x0008631a) popup_call2_audio_first_window_t4

0xc59c,	// (0x000863fd) popup_call2_audio_first_window_t5_ParamLimits

0xc59c,	// (0x000863fd) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000893a3) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000893a3) popup_call2_audio_first_window_t

0xa9d8,	// (0x00084839) bg_popup_call2_act_pane_g1

0xcc11,	// (0x00086a72) popup_cale_lunar_info_window_t1

0xcc1f,	// (0x00086a80) popup_cale_lunar_info_window_t2

0xcc2d,	// (0x00086a8e) popup_cale_lunar_info_window_t3

0xa785,	// (0x000845e6) bg_popup_call2_bubble_pane

0xc69d,	// (0x000864fe) bg_popup_call2_in_pane_cp01_ParamLimits

0xc69d,	// (0x000864fe) bg_popup_call2_in_pane_cp01

0x172c,	// (0x0007b58d) call_type_pane_cp02

0xc6e5,	// (0x00086546) popup_call2_audio_out_window_g1_ParamLimits

0xc6e5,	// (0x00086546) popup_call2_audio_out_window_g1

0xc711,	// (0x00086572) popup_call2_audio_out_window_g2_ParamLimits

0xc711,	// (0x00086572) popup_call2_audio_out_window_g2

0xc739,	// (0x0008659a) popup_call2_audio_out_window_g3_ParamLimits

0xc739,	// (0x0008659a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000893ac) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000893ac) popup_call2_audio_out_window_g

0xc774,	// (0x000865d5) popup_call2_audio_out_window_t1_ParamLimits

0xc774,	// (0x000865d5) popup_call2_audio_out_window_t1

0xc7d3,	// (0x00086634) popup_call2_audio_out_window_t2_ParamLimits

0xc7d3,	// (0x00086634) popup_call2_audio_out_window_t2

0xc827,	// (0x00086688) popup_call2_audio_out_window_t3_ParamLimits

0xc827,	// (0x00086688) popup_call2_audio_out_window_t3

0xc83d,	// (0x0008669e) popup_call2_audio_out_window_t4_ParamLimits

0xc83d,	// (0x0008669e) popup_call2_audio_out_window_t4

0xc853,	// (0x000866b4) popup_call2_audio_out_window_t5_ParamLimits

0xc853,	// (0x000866b4) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000893b5) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000893b5) popup_call2_audio_out_window_t

0xc8b7,	// (0x00086718) bg_popup_call2_in_pane_ParamLimits

0xc8b7,	// (0x00086718) bg_popup_call2_in_pane

0xc913,	// (0x00086774) popup_call2_audio_in_window_g1_ParamLimits

0xc913,	// (0x00086774) popup_call2_audio_in_window_g1

0xc94b,	// (0x000867ac) popup_call2_audio_in_window_g2_ParamLimits

0xc94b,	// (0x000867ac) popup_call2_audio_in_window_g2

0xc983,	// (0x000867e4) popup_call2_audio_in_window_g3_ParamLimits

0xc983,	// (0x000867e4) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000893c2) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000893c2) popup_call2_audio_in_window_g

0xc9db,	// (0x0008683c) popup_call2_audio_in_window_t1_ParamLimits

0xc9db,	// (0x0008683c) popup_call2_audio_in_window_t1

0xca5b,	// (0x000868bc) popup_call2_audio_in_window_t2_ParamLimits

0xca5b,	// (0x000868bc) popup_call2_audio_in_window_t2

0xcadb,	// (0x0008693c) popup_call2_audio_in_window_t3_ParamLimits

0xcadb,	// (0x0008693c) popup_call2_audio_in_window_t3

0xcaf5,	// (0x00086956) popup_call2_audio_in_window_t4_ParamLimits

0xcaf5,	// (0x00086956) popup_call2_audio_in_window_t4

0xcb07,	// (0x00086968) popup_call2_audio_in_window_t5_ParamLimits

0xcb07,	// (0x00086968) popup_call2_audio_in_window_t5

0xcb1c,	// (0x0008697d) popup_call2_audio_in_window_t6_ParamLimits

0xcb1c,	// (0x0008697d) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000893cb) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000893cb) popup_call2_audio_in_window_t

0xa9d8,	// (0x00084839) bg_popup_call2_in_pane_g1

0xcc3b,	// (0x00086a9c) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x00089433) popup_cale_lunar_info_window_t

0xa9e0,	// (0x00084841) bg_popup_call2_rect_pane_ParamLimits

0xa9e0,	// (0x00084841) bg_popup_call2_rect_pane

0xa785,	// (0x000845e6) call2_cli_visual_graphic_pane

0xa785,	// (0x000845e6) call2_cli_visual_text_pane

0xce11,	// (0x00086c72) smil_status_volume_pane_g3

0x0002,

0xab92,	// (0x000849f3) call2_cli_visual_graphic_pane_g1

0xab92,	// (0x000849f3) call2_cli_visual_graphic_pane_g2

0xab92,	// (0x000849f3) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000893d8) call2_cli_visual_graphic_pane_g

0xcb31,	// (0x00086992) bg_popup_call2_rect_pane_g1

0xac3a,	// (0x00084a9b) bg_popup_call2_rect_pane_g2

0xcb39,	// (0x0008699a) bg_popup_call2_rect_pane_g3

0xcb41,	// (0x000869a2) bg_popup_call2_rect_pane_g4

0xcb49,	// (0x000869aa) bg_popup_call2_rect_pane_g5

0xcb51,	// (0x000869b2) bg_popup_call2_rect_pane_g6

0xcb59,	// (0x000869ba) bg_popup_call2_rect_pane_g7

0xcb61,	// (0x000869c2) bg_popup_call2_rect_pane_g8

0xcb69,	// (0x000869ca) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000893df) bg_popup_call2_rect_pane_g

0xcb71,	// (0x000869d2) bg_popup_call2_bubble_pane_g1

0xcb79,	// (0x000869da) bg_popup_call2_bubble_pane_g2

0xcb81,	// (0x000869e2) bg_popup_call2_bubble_pane_g3

0xcb89,	// (0x000869ea) bg_popup_call2_bubble_pane_g4

0xcb91,	// (0x000869f2) bg_popup_call2_bubble_pane_g5

0xcb99,	// (0x000869fa) bg_popup_call2_bubble_pane_g6

0xcba1,	// (0x00086a02) bg_popup_call2_bubble_pane_g7

0xcba9,	// (0x00086a0a) bg_popup_call2_bubble_pane_g8

0xcbb1,	// (0x00086a12) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000893f2) bg_popup_call2_bubble_pane_g

0x1de4,	// (0x0007bc45) aid_cale_week_size_cell_pane

0x2264,	// (0x0007c0c5) aid_cams_cif_uncrop_pane_ParamLimits

0x2264,	// (0x0007c0c5) aid_cams_cif_uncrop_pane

0x2421,	// (0x0007c282) aid_cams_size_cell_ParamLimits

0x2421,	// (0x0007c282) aid_cams_size_cell

0x2435,	// (0x0007c296) grid_cams_pane_ParamLimits

0x244f,	// (0x0007c2b0) linegrid_cams_pane_ParamLimits

0x2535,	// (0x0007c396) call_video_pane_t1

0x2553,	// (0x0007c3b4) call_video_pane_t2

0x0001,

0xf27e,	// (0x000890df) call_video_pane_t

0x2986,	// (0x0007c7e7) aid_cale_month_size_cell_pane_ParamLimits

0x2986,	// (0x0007c7e7) aid_cale_month_size_cell_pane

0xf61b,	// (0x0008947c) smil_status_volume_pane_g

0xce1e,	// (0x00086c7f) volume_smil_pane_ParamLimits

0xa656,	// (0x000844b7) aid_popup2_width_pane

0x1d4f,	// (0x0007bbb0) cell_qdial_pane_g4_ParamLimits

0x1d4f,	// (0x0007bbb0) cell_qdial_pane_g4

0x351a,	// (0x0007d37b) aid_blid_cardinal_pane_ParamLimits

0x3526,	// (0x0007d387) aid_blid_destination_pane_ParamLimits

0x3526,	// (0x0007d387) aid_blid_destination_pane

0xa9e0,	// (0x00084841) bg_popup_call_poc_act_pane_ParamLimits

0xa9e0,	// (0x00084841) bg_popup_call_poc_act_pane

0xa9e0,	// (0x00084841) bg_popup_call_poc_inact_pane_ParamLimits

0xa9e0,	// (0x00084841) bg_popup_call_poc_inact_pane

0xcbc1,	// (0x00086a22) bg_popup_call_poc_act_pane_g1

0xcbc9,	// (0x00086a2a) bg_popup_call_poc_act_pane_g2

0xcbd1,	// (0x00086a32) bg_popup_call_poc_act_pane_g3

0xcb89,	// (0x000869ea) bg_popup_call_poc_act_pane_g4

0xcb91,	// (0x000869f2) bg_popup_call_poc_act_pane_g5

0xcbd9,	// (0x00086a3a) bg_popup_call_poc_act_pane_g6

0xcba1,	// (0x00086a02) bg_popup_call_poc_act_pane_g7

0xcbe1,	// (0x00086a42) bg_popup_call_poc_act_pane_g8

0xa785,	// (0x000845e6) main_usb_pane

0xcd3a,	// (0x00086b9b) popup_cale_lunar_info_window

0x281d,	// (0x0007c67e) im_reading_pane_t1_ParamLimits

0xaf79,	// (0x00084dda) list_im_pane_ParamLimits

0xaf8a,	// (0x00084deb) scroll_pane_cp07_ParamLimits

0xa785,	// (0x000845e6) grid_highlight_pane_cp012

0xa9e0,	// (0x00084841) mup_scale_pane_ParamLimits

0xbaba,	// (0x0008591b) main_usb_pane_g1_ParamLimits

0xbaba,	// (0x0008591b) main_usb_pane_g1

0x4177,	// (0x0007dfd8) main_usb_pane_g2_ParamLimits

0x4177,	// (0x0007dfd8) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x0008941c) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x0008941c) main_usb_pane_g

0x418d,	// (0x0007dfee) main_usb_pane_t1_ParamLimits

0x418d,	// (0x0007dfee) main_usb_pane_t1

0x419f,	// (0x0007e000) main_usb_pane_t2_ParamLimits

0x419f,	// (0x0007e000) main_usb_pane_t2

0x41b1,	// (0x0007e012) main_usb_pane_t3_ParamLimits

0x41b1,	// (0x0007e012) main_usb_pane_t3

0x41c3,	// (0x0007e024) main_usb_pane_t4_ParamLimits

0x41c3,	// (0x0007e024) main_usb_pane_t4

0x41d5,	// (0x0007e036) main_usb_pane_t5_ParamLimits

0x41d5,	// (0x0007e036) main_usb_pane_t5

0x41e7,	// (0x0007e048) main_usb_pane_t6_ParamLimits

0x41e7,	// (0x0007e048) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x00089421) main_usb_pane_t_ParamLimits

0x34bf,	// (0x0007d320) aid_text_placing

0x34c8,	// (0x0007d329) main_location2_pane_t1_ParamLimits

0x34dc,	// (0x0007d33d) main_location2_pane_t2_ParamLimits

0x34f0,	// (0x0007d351) main_location2_pane_t3_ParamLimits

0x3506,	// (0x0007d367) main_location2_pane_t4_ParamLimits

0x3506,	// (0x0007d367) main_location2_pane_t4

0xf3df,	// (0x00089240) main_location2_pane_t_ParamLimits

0xaa24,	// (0x00084885) find_pinb_pane_g2_ParamLimits

0xaa24,	// (0x00084885) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00088f8e) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00088f8e) find_pinb_pane_g

0xaa30,	// (0x00084891) find_pinb_pane_t1_ParamLimits

0xaa42,	// (0x000848a3) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x00088f93) find_pinb_pane_t_ParamLimits

0xa785,	// (0x000845e6) main_call3_pane

0x2cea,	// (0x0007cb4b) cale_month_day_heading_pane_t1_ParamLimits

0x2d48,	// (0x0007cba9) cale_month_day_heading_pane_t2_ParamLimits

0x2dad,	// (0x0007cc0e) cale_month_day_heading_pane_t3_ParamLimits

0x2e12,	// (0x0007cc73) cale_month_day_heading_pane_t4_ParamLimits

0x2e77,	// (0x0007ccd8) cale_month_day_heading_pane_t5_ParamLimits

0x2eec,	// (0x0007cd4d) cale_month_day_heading_pane_t6_ParamLimits

0x2f61,	// (0x0007cdc2) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00089117) cale_month_day_heading_pane_t_ParamLimits

0xb200,	// (0x00085061) smil_status_volume_pane

0x3c6e,	// (0x0007dacf) postcard_address_pane_ParamLimits

0x3c6e,	// (0x0007dacf) postcard_address_pane

0x3c80,	// (0x0007dae1) postcard_message_pane_ParamLimits

0x3c80,	// (0x0007dae1) postcard_message_pane

0x415a,	// (0x0007dfbb) call2_cli_visual_pane_t1_ParamLimits

0x415a,	// (0x0007dfbb) call2_cli_visual_pane_t1

0x496e,	// (0x0007e7cf) postcard_message_pane_t1_ParamLimits

0x496e,	// (0x0007e7cf) postcard_message_pane_t1

0x4957,	// (0x0007e7b8) postcard_address_pane_t1_ParamLimits

0x4957,	// (0x0007e7b8) postcard_address_pane_t1

0x4943,	// (0x0007e7a4) popup_call3_audio_in_window_ParamLimits

0x4943,	// (0x0007e7a4) popup_call3_audio_in_window

0x47d2,	// (0x0007e633) bg_popup_call3_in_pane_ParamLimits

0x47d2,	// (0x0007e633) bg_popup_call3_in_pane

0x4844,	// (0x0007e6a5) popup_call3_audio_in_window_g1_ParamLimits

0x4844,	// (0x0007e6a5) popup_call3_audio_in_window_g1

0x4864,	// (0x0007e6c5) popup_call3_audio_in_window_g2_ParamLimits

0x4864,	// (0x0007e6c5) popup_call3_audio_in_window_g2

0x4884,	// (0x0007e6e5) popup_call3_audio_in_window_g3_ParamLimits

0x4884,	// (0x0007e6e5) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x00089483) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x00089483) popup_call3_audio_in_window_g

0x48b5,	// (0x0007e716) popup_call3_audio_in_window_t1_ParamLimits

0x48b5,	// (0x0007e716) popup_call3_audio_in_window_t1

0x48f3,	// (0x0007e754) popup_call3_audio_in_window_t2_ParamLimits

0x48f3,	// (0x0007e754) popup_call3_audio_in_window_t2

0x4931,	// (0x0007e792) popup_call3_audio_in_window_t3_ParamLimits

0x4931,	// (0x0007e792) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x0008948c) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x0008948c) popup_call3_audio_in_window_t

0xb885,	// (0x000856e6) bg_popup_call3_rect_pane

0xcb31,	// (0x00086992) bg_popup_call3_rect_pane_g1

0xac3a,	// (0x00084a9b) bg_popup_call3_rect_pane_g2

0xcb39,	// (0x0008699a) bg_popup_call3_rect_pane_g3

0xcb41,	// (0x000869a2) bg_popup_call3_rect_pane_g4

0xcb49,	// (0x000869aa) bg_popup_call3_rect_pane_g5

0xcb51,	// (0x000869b2) bg_popup_call3_rect_pane_g6

0xcb59,	// (0x000869ba) bg_popup_call3_rect_pane_g7

0x38f8,	// (0x0007d759) mup_visualizer_osc_pane

0xb964,	// (0x000857c5) mup_visualizer_spec_pane

0x4802,	// (0x0007e663) call3_video_qcif_pane_ParamLimits

0x4802,	// (0x0007e663) call3_video_qcif_pane

0x4813,	// (0x0007e674) call3_video_qcif_uncrop_pane_ParamLimits

0x4813,	// (0x0007e674) call3_video_qcif_uncrop_pane

0x481f,	// (0x0007e680) call3_video_subqcif_pane_ParamLimits

0x481f,	// (0x0007e680) call3_video_subqcif_pane

0x4833,	// (0x0007e694) call3_video_subqcif_uncrop_pane_ParamLimits

0x4833,	// (0x0007e694) call3_video_subqcif_uncrop_pane

0x48a4,	// (0x0007e705) popup_call3_audio_in_window_g4_ParamLimits

0x48a4,	// (0x0007e705) popup_call3_audio_in_window_g4

0x47c1,	// (0x0007e622) mup_spec_half_pane

0x47ca,	// (0x0007e62b) mup_spec_half_pane_cp

0xcdd1,	// (0x00086c32) mup_osc_middle_pane

0xcdda,	// (0x00086c3b) mup_visualizer_osc_pane_g1

0x47a1,	// (0x0007e602) mup_spec_bar_pane_ParamLimits

0x47a1,	// (0x0007e602) mup_spec_bar_pane

0xcdbe,	// (0x00086c1f) mup_spec_bar_pane_g1

0xcdc8,	// (0x00086c29) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00089477) mup_spec_bar_pane_g

0x1de4,	// (0x0007bc45) aid_cale_week_size_cell_pane_ParamLimits

0x1df7,	// (0x0007bc58) bg_cale_heading_pane_ParamLimits

0xacb6,	// (0x00084b17) bg_cale_pane_cp01_ParamLimits

0x1e0f,	// (0x0007bc70) cale_week_corner_pane_ParamLimits

0x1e20,	// (0x0007bc81) cale_week_day_heading_pane_ParamLimits

0x1e38,	// (0x0007bc99) cale_week_scroll_pane_g1_ParamLimits

0x1e4d,	// (0x0007bcae) cale_week_scroll_pane_g2_ParamLimits

0x1e5e,	// (0x0007bcbf) cale_week_scroll_pane_g3_ParamLimits

0x1e6f,	// (0x0007bcd0) cale_week_scroll_pane_g4_ParamLimits

0x1e80,	// (0x0007bce1) cale_week_scroll_pane_g5_ParamLimits

0x1e93,	// (0x0007bcf4) cale_week_scroll_pane_g6_ParamLimits

0x1ea6,	// (0x0007bd07) cale_week_scroll_pane_g7_ParamLimits

0x1eb9,	// (0x0007bd1a) cale_week_scroll_pane_g8_ParamLimits

0x1ecc,	// (0x0007bd2d) cale_week_scroll_pane_g9_ParamLimits

0x1edd,	// (0x0007bd3e) cale_week_scroll_pane_g10_ParamLimits

0x1eee,	// (0x0007bd4f) cale_week_scroll_pane_g11_ParamLimits

0x1eff,	// (0x0007bd60) cale_week_scroll_pane_g12_ParamLimits

0x1f10,	// (0x0007bd71) cale_week_scroll_pane_g13_ParamLimits

0x1f21,	// (0x0007bd82) cale_week_scroll_pane_g14_ParamLimits

0x1f32,	// (0x0007bd93) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0008901f) cale_week_scroll_pane_g_ParamLimits

0x1f47,	// (0x0007bda8) cale_week_time_pane_ParamLimits

0x1f5a,	// (0x0007bdbb) grid_cale_week_pane_ParamLimits

0xaccf,	// (0x00084b30) listscroll_cale_week_pane_t1

0x1f6f,	// (0x0007bdd0) scroll_pane_cp08_ParamLimits

0x29c7,	// (0x0007c828) cale_month_corner_pane_ParamLimits

0xb1a0,	// (0x00085001) cale_month_pane_t1

0x2ca9,	// (0x0007cb0a) cale_month_week_pane_ParamLimits

0x3326,	// (0x0007d187) popup_call_status_window_g1_ParamLimits

0x333a,	// (0x0007d19b) popup_call_status_window_g2_ParamLimits

0x334e,	// (0x0007d1af) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000891c7) popup_call_status_window_g_ParamLimits

0xb589,	// (0x000853ea) aid_call2_pane

0x0a63,	// (0x0007a8c4) msg_header_pane_g1

0x3c6e,	// (0x0007dacf) postcard_address2_pane_ParamLimits

0x3c6e,	// (0x0007dacf) postcard_address2_pane

0x3c80,	// (0x0007dae1) postcard_message2_pane_ParamLimits

0x3c80,	// (0x0007dae1) postcard_message2_pane

0x474e,	// (0x0007e5af) message2_row_pane_ParamLimits

0x474e,	// (0x0007e5af) message2_row_pane

0x476d,	// (0x0007e5ce) address2_row_pane_ParamLimits

0x476d,	// (0x0007e5ce) address2_row_pane

0xcd8c,	// (0x00086bed) postcard_message2_row_pane_g1

0xcd94,	// (0x00086bf5) postcard_message2_row_pane_t1

0xcd8c,	// (0x00086bed) address2_row_pane_g1

0xcd94,	// (0x00086bf5) address2_row_pane_t1

0xad33,	// (0x00084b94) aid_size_cell_vorec

0xa785,	// (0x000845e6) main_rss_pane

0x4780,	// (0x0007e5e1) rss_list_single_pane_ParamLimits

0x4780,	// (0x0007e5e1) rss_list_single_pane

0xcda2,	// (0x00086c03) rss_list_single_pane_t1

0xcdb0,	// (0x00086c11) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x00089472) rss_list_single_pane_t

0xa785,	// (0x000845e6) main_camera2_pane

0xa785,	// (0x000845e6) main_video2_pane

0x49e7,	// (0x0007e848) cams_zoom_pane_cp2_ParamLimits

0x49e7,	// (0x0007e848) cams_zoom_pane_cp2

0x4a07,	// (0x0007e868) image2_vga_pane_ParamLimits

0x4a07,	// (0x0007e868) image2_vga_pane

0x4a58,	// (0x0007e8b9) main_camera2_pane_g1_ParamLimits

0x4a58,	// (0x0007e8b9) main_camera2_pane_g1

0x4a78,	// (0x0007e8d9) main_camera2_pane_g2_ParamLimits

0x4a78,	// (0x0007e8d9) main_camera2_pane_g2

0x4a98,	// (0x0007e8f9) main_camera2_pane_g3_ParamLimits

0x4a98,	// (0x0007e8f9) main_camera2_pane_g3

0x4ab8,	// (0x0007e919) main_camera2_pane_g4_ParamLimits

0x4ab8,	// (0x0007e919) main_camera2_pane_g4

0x4ad8,	// (0x0007e939) main_camera2_pane_g5_ParamLimits

0x4ad8,	// (0x0007e939) main_camera2_pane_g5

0x4af8,	// (0x0007e959) main_camera2_pane_g6_ParamLimits

0x4af8,	// (0x0007e959) main_camera2_pane_g6

0x4b18,	// (0x0007e979) main_camera2_pane_g7_ParamLimits

0x4b18,	// (0x0007e979) main_camera2_pane_g7

0x4b38,	// (0x0007e999) main_camera2_pane_g8_ParamLimits

0x4b38,	// (0x0007e999) main_camera2_pane_g8

0x0008,

0xf632,	// (0x00089493) main_camera2_pane_g_ParamLimits

0xf632,	// (0x00089493) main_camera2_pane_g

0x4b78,	// (0x0007e9d9) main_camera2_pane_t1_ParamLimits

0x4b78,	// (0x0007e9d9) main_camera2_pane_t1

0x4bad,	// (0x0007ea0e) main_camera2_pane_t2_ParamLimits

0x4bad,	// (0x0007ea0e) main_camera2_pane_t2

0x4bd3,	// (0x0007ea34) main_camera2_pane_t3_ParamLimits

0x4bd3,	// (0x0007ea34) main_camera2_pane_t3

0x4c31,	// (0x0007ea92) main_camera2_pane_t4_ParamLimits

0x4c31,	// (0x0007ea92) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000894a6) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000894a6) main_camera2_pane_t

0x4cc3,	// (0x0007eb24) cams_zoom_pane_cp4_ParamLimits

0x4cc3,	// (0x0007eb24) cams_zoom_pane_cp4

0x4cd9,	// (0x0007eb3a) image2_cif_pane_ParamLimits

0x4cd9,	// (0x0007eb3a) image2_cif_pane

0x4d04,	// (0x0007eb65) image2_subqcif_pane_ParamLimits

0x4d04,	// (0x0007eb65) image2_subqcif_pane

0x4d1e,	// (0x0007eb7f) main_video2_pane_g1_ParamLimits

0x4d1e,	// (0x0007eb7f) main_video2_pane_g1

0x4d38,	// (0x0007eb99) main_video2_pane_g2_ParamLimits

0x4d38,	// (0x0007eb99) main_video2_pane_g2

0x4d4e,	// (0x0007ebaf) main_video2_pane_g3_ParamLimits

0x4d4e,	// (0x0007ebaf) main_video2_pane_g3

0x4d64,	// (0x0007ebc5) main_video2_pane_g4_ParamLimits

0x4d64,	// (0x0007ebc5) main_video2_pane_g4

0x4d7a,	// (0x0007ebdb) main_video2_pane_g5_ParamLimits

0x4d7a,	// (0x0007ebdb) main_video2_pane_g5

0x4d90,	// (0x0007ebf1) main_video2_pane_g6_ParamLimits

0x4d90,	// (0x0007ebf1) main_video2_pane_g6

0x0005,

0xf654,	// (0x000894b5) main_video2_pane_g_ParamLimits

0xf654,	// (0x000894b5) main_video2_pane_g

0x4daa,	// (0x0007ec0b) main_video2_pane_t1_ParamLimits

0x4daa,	// (0x0007ec0b) main_video2_pane_t1

0x4dce,	// (0x0007ec2f) main_video2_pane_t2_ParamLimits

0x4dce,	// (0x0007ec2f) main_video2_pane_t2

0x4e1c,	// (0x0007ec7d) main_video2_pane_t3_ParamLimits

0x4e1c,	// (0x0007ec7d) main_video2_pane_t3

0x0002,

0xf661,	// (0x000894c2) main_video2_pane_t_ParamLimits

0xf661,	// (0x000894c2) main_video2_pane_t

0x42a4,	// (0x0007e105) call_muted_g2

0x0001,

0xf603,	// (0x00089464) call_muted_g

0xa785,	// (0x000845e6) main_mup2_pane

0x4e64,	// (0x0007ecc5) main_mup2_pane_g1_ParamLimits

0x4e64,	// (0x0007ecc5) main_mup2_pane_g1

0x4e70,	// (0x0007ecd1) main_mup2_pane_g2_ParamLimits

0x4e70,	// (0x0007ecd1) main_mup2_pane_g2

0xce8c,	// (0x00086ced) main_mup_pane_g13_cp1

0xce94,	// (0x00086cf5) mup_volume_pane_cp1

0x4e8c,	// (0x0007eced) main_mup2_pane_g4_ParamLimits

0x4e8c,	// (0x0007eced) main_mup2_pane_g4

0x4e9e,	// (0x0007ecff) main_mup2_pane_g5_ParamLimits

0x4e9e,	// (0x0007ecff) main_mup2_pane_g5

0x4eb0,	// (0x0007ed11) main_mup2_pane_g6_ParamLimits

0x4eb0,	// (0x0007ed11) main_mup2_pane_g6

0x4ec2,	// (0x0007ed23) main_mup2_pane_g7_ParamLimits

0x4ec2,	// (0x0007ed23) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000894c9) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000894c9) main_mup2_pane_g

0x4eda,	// (0x0007ed3b) main_mup2_pane_t1_ParamLimits

0x4eda,	// (0x0007ed3b) main_mup2_pane_t1

0x4ef0,	// (0x0007ed51) main_mup2_pane_t2_ParamLimits

0x4ef0,	// (0x0007ed51) main_mup2_pane_t2

0x4f06,	// (0x0007ed67) main_mup2_pane_t3_ParamLimits

0x4f06,	// (0x0007ed67) main_mup2_pane_t3

0x4f1c,	// (0x0007ed7d) main_mup2_pane_t4_ParamLimits

0x4f1c,	// (0x0007ed7d) main_mup2_pane_t4

0x4f34,	// (0x0007ed95) main_mup2_pane_t5_ParamLimits

0x4f34,	// (0x0007ed95) main_mup2_pane_t5

0x4f4c,	// (0x0007edad) main_mup2_pane_t6_ParamLimits

0x4f4c,	// (0x0007edad) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000894d8) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000894d8) main_mup2_pane_t

0x4f7c,	// (0x0007eddd) mup2_visualizer_pane_ParamLimits

0x4f7c,	// (0x0007eddd) mup2_visualizer_pane

0x4faa,	// (0x0007ee0b) mup_progress_pane_cp_ParamLimits

0x4faa,	// (0x0007ee0b) mup_progress_pane_cp

0xce77,	// (0x00086cd8) mup_volume_pane_cp_ParamLimits

0xce77,	// (0x00086cd8) mup_volume_pane_cp

0x4fbe,	// (0x0007ee1f) mup2_visualizer_pane_g1_ParamLimits

0x4fbe,	// (0x0007ee1f) mup2_visualizer_pane_g1

0xe063,	// (0x00087ec4) mup2_visualizer_pane_g2_ParamLimits

0xe063,	// (0x00087ec4) mup2_visualizer_pane_g2

0x4fd5,	// (0x0007ee36) mup2_visualizer_pane_g3_ParamLimits

0x4fd5,	// (0x0007ee36) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000894e5) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000894e5) mup2_visualizer_pane_g

0xbc03,	// (0x00085a64) aid_size_cell_fmradio

0x4456,	// (0x0007e2b7) aid_height_parent_landcape

0xb008,	// (0x00084e69) wml_content_pane_cp

0xb010,	// (0x00084e71) wml_tabs_pane

0xb019,	// (0x00084e7a) popup_wml_miniature_window

0xb021,	// (0x00084e82) scroll_pane_cp021

0xb035,	// (0x00084e96) wml_content_pane_comp8

0xa785,	// (0x000845e6) bg_popup_sub_pane_cp05

0xe081,	// (0x00087ee2) popup_wml_miniature_window_g1

0xe089,	// (0x00087eea) wml_miniature_view_pane

0x4fe1,	// (0x0007ee42) aid_size_wml_view

0x4fe9,	// (0x0007ee4a) wml_miniature_view_pane_g1

0x4ff2,	// (0x0007ee53) wml_miniature_view_pane_g2

0x4ffb,	// (0x0007ee5c) wml_miniature_view_pane_g3

0x5003,	// (0x0007ee64) wml_miniature_view_pane_g4

0x500b,	// (0x0007ee6c) wml_miniature_view_pane_g5

0x5013,	// (0x0007ee74) wml_miniature_view_pane_g6

0x501b,	// (0x0007ee7c) wml_miniature_view_pane_g7

0x5023,	// (0x0007ee84) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000894ec) wml_miniature_view_pane_g

0xe091,	// (0x00087ef2) background_graphic_ParamLimits

0xe091,	// (0x00087ef2) background_graphic

0xe09d,	// (0x00087efe) wml_tabs_2_pane

0xe0a6,	// (0x00087f07) wml_tabs_3_pane_ParamLimits

0xe0a6,	// (0x00087f07) wml_tabs_3_pane

0xe0b8,	// (0x00087f19) wml_tabs_4_pane_ParamLimits

0xe0b8,	// (0x00087f19) wml_tabs_4_pane

0xe0ce,	// (0x00087f2f) wml_tabs_5_pane_ParamLimits

0xe0ce,	// (0x00087f2f) wml_tabs_5_pane

0xe592,	// (0x000883f3) wml_tabs_pane_g2_ParamLimits

0xe592,	// (0x000883f3) wml_tabs_pane_g2

0xe5a6,	// (0x00088407) wml_tabs_pane_g3_ParamLimits

0xe5a6,	// (0x00088407) wml_tabs_pane_g3

0x502b,	// (0x0007ee8c) wml_tabs_2_active_pane_ParamLimits

0x502b,	// (0x0007ee8c) wml_tabs_2_active_pane

0x503f,	// (0x0007eea0) wml_tabs_2_passive_pane_ParamLimits

0x503f,	// (0x0007eea0) wml_tabs_2_passive_pane

0x5053,	// (0x0007eeb4) wml_tabs_3_active_pane_cp_ParamLimits

0x5053,	// (0x0007eeb4) wml_tabs_3_active_pane_cp

0x5068,	// (0x0007eec9) wml_tabs_3_passive_pane_ParamLimits

0x5068,	// (0x0007eec9) wml_tabs_3_passive_pane

0x507b,	// (0x0007eedc) wml_tabs_3_passive_pane_cp_ParamLimits

0x507b,	// (0x0007eedc) wml_tabs_3_passive_pane_cp

0x5092,	// (0x0007eef3) tabs_4_active_pane

0x509a,	// (0x0007eefb) tabs_4_passive_pane

0x50a4,	// (0x0007ef05) tabs_4_passive_pane_cp

0x50ac,	// (0x0007ef0d) tabs_4_passive_pane_cp2

0xcbb9,	// (0x00086a1a) aid_height_text

0x38ca,	// (0x0007d72b) mup_volume_cont_pane_ParamLimits

0x38ca,	// (0x0007d72b) mup_volume_cont_pane

0x1a1f,	// (0x0007b880) aid_size_cell_pinb

0xaa10,	// (0x00084871) aid_size_list_pinb

0x4f96,	// (0x0007edf7) mup2_volume_cont_pane_ParamLimits

0x4f96,	// (0x0007edf7) mup2_volume_cont_pane

0xce63,	// (0x00086cc4) mup2_volume_cont_pane_g1_ParamLimits

0xce63,	// (0x00086cc4) mup2_volume_cont_pane_g1

0x13a9,	// (0x0007b20a) aid_size_cell_touch_ParamLimits

0x13a9,	// (0x0007b20a) aid_size_cell_touch

0x15b7,	// (0x0007b418) touch_pane_ParamLimits

0x15b7,	// (0x0007b418) touch_pane

0x139f,	// (0x0007b200) main_rss2_pane

0xe5c3,	// (0x00088424) listscroll_rss2_pane

0xe5cc,	// (0x0008842d) rss2_navigation_pane

0xe5d4,	// (0x00088435) list_rss2_pane

0xb738,	// (0x00085599) scroll_pane_cp22

0xe5dc,	// (0x0008843d) rss2_navigation_pane_g1

0xe5e5,	// (0x00088446) rss2_navigation_pane_g2

0xe5ed,	// (0x0008844e) rss2_navigation_pane_g3

0x0002,

0x0097,	// (0x00079ef8) rss2_navigation_pane_g

0xe5f5,	// (0x00088456) rss2_navigation_pane_t1

0x50b6,	// (0x0007ef17) rss2_list_single_pane_ParamLimits

0x50b6,	// (0x0007ef17) rss2_list_single_pane

0xe603,	// (0x00088464) rss2_list_single_pane_t2

0xe611,	// (0x00088472) rss2_list_single_pane_t3_ParamLimits

0xe611,	// (0x00088472) rss2_list_single_pane_t3

0xe62e,	// (0x0008848f) rss2_list_single_pane_t4

0x315d,	// (0x0007cfbe) smil_status_pane_g1

0xa6bc,	// (0x0008451d) main_image2_pane_ParamLimits

0xa6bc,	// (0x0008451d) main_image2_pane

0x4b58,	// (0x0007e9b9) main_camera2_pane_g9_ParamLimits

0x4b58,	// (0x0007e9b9) main_camera2_pane_g9

0x4c86,	// (0x0007eae7) main_camera2_pane_t5_ParamLimits

0x4c86,	// (0x0007eae7) main_camera2_pane_t5

0xce33,	// (0x00086c94) main_camera2_pane_t6_ParamLimits

0xce33,	// (0x00086c94) main_camera2_pane_t6

0x50ce,	// (0x0007ef2f) main_image2_pane_g1_ParamLimits

0x50ce,	// (0x0007ef2f) main_image2_pane_g1

0x3eb0,	// (0x0007dd11) smil2_video_pane_ParamLimits

0x3eb0,	// (0x0007dd11) smil2_video_pane

0xa672,	// (0x000844d3) aid_zoom_text_primary_cp

0xa6b2,	// (0x00084513) popup_preview_fixed_window

0xaf71,	// (0x00084dd2) im_reading_pane_g1

0x49cf,	// (0x0007e830) cams2_bc_adjust_pane_cp_ParamLimits

0x49cf,	// (0x0007e830) cams2_bc_adjust_pane_cp

0x4cb5,	// (0x0007eb16) cams2_bc_adjust_pane_ParamLimits

0x4cb5,	// (0x0007eb16) cams2_bc_adjust_pane

0xce9c,	// (0x00086cfd) cams2_bc_adjust_pane_g1

0xcea4,	// (0x00086d05) cams2_slider_pane

0xcead,	// (0x00086d0e) cams2_slider_pane_g1

0xceb6,	// (0x00086d17) cams2_slider_pane_g2

0x0006,

0xf69c,	// (0x000894fd) cams2_slider_pane_g

0x1ade,	// (0x0007b93f) calc_display_pane_ParamLimits

0x1b06,	// (0x0007b967) calc_paper_pane_ParamLimits

0x1b29,	// (0x0007b98a) grid_calc_pane_ParamLimits

0xb5eb,	// (0x0008544c) popup_clock_digital_window_t1_ParamLimits

0xbba0,	// (0x00085a01) main_image_pane_t1

0x1ac0,	// (0x0007b921) aid_size_cell_calc_ParamLimits

0x1ac0,	// (0x0007b921) aid_size_cell_calc

0x449c,	// (0x0007e2fd) popup_blid_sat_info2_window_ParamLimits

0x449c,	// (0x0007e2fd) popup_blid_sat_info2_window

0xe644,	// (0x000884a5) aid_size_cell_blid

0xe64c,	// (0x000884ad) bg_popup_window_pane_cp07

0xe66f,	// (0x000884d0) grid_popup_blid_pane

0xe679,	// (0x000884da) heading_pane_cp05_ParamLimits

0xe679,	// (0x000884da) heading_pane_cp05

0xe743,	// (0x000885a4) cell_popup_blid_pane_ParamLimits

0xe743,	// (0x000885a4) cell_popup_blid_pane

0xe769,	// (0x000885ca) cell_popup_blid_pane_g1

0xe771,	// (0x000885d2) cell_popup_blid_pane_t1

0x4f66,	// (0x0007edc7) mup2_indicator_pane_ParamLimits

0x4f66,	// (0x0007edc7) mup2_indicator_pane

0xb885,	// (0x000856e6) mup2_visualizer_osc_pane

0xe06f,	// (0x00087ed0) mup2_visualizer_spec_pane_ParamLimits

0xe06f,	// (0x00087ed0) mup2_visualizer_spec_pane

0x50e4,	// (0x0007ef45) mup2_spec_half_pane

0x50ed,	// (0x0007ef4e) mup2_spec_half_pane_cp

0x50f5,	// (0x0007ef56) mup2_spec_bar_pane_ParamLimits

0x50f5,	// (0x0007ef56) mup2_spec_bar_pane

0xcdbe,	// (0x00086c1f) mup2_spec_bar_pane_g1

0xcdc8,	// (0x00086c29) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00089477) mup2_spec_bar_pane_g

0x5115,	// (0x0007ef76) mup2_osc_middle_pane

0xcdda,	// (0x00086c3b) mup2_visualizer_osc_pane_g1

0x1629,	// (0x0007b48a) popup_number_entry_window_t1_ParamLimits

0x163c,	// (0x0007b49d) popup_number_entry_window_t2_ParamLimits

0x164e,	// (0x0007b4af) popup_number_entry_window_t3_ParamLimits

0x1660,	// (0x0007b4c1) popup_number_entry_window_t5_ParamLimits

0x1660,	// (0x0007b4c1) popup_number_entry_window_t5

0xf0d8,	// (0x00088f39) popup_number_entry_window_t_ParamLimits

0x1696,	// (0x0007b4f7) text_title_cp2_ParamLimits

0xba7a,	// (0x000858db) aid_hotspot_pointer_text2_pane

0xbaa0,	// (0x00085901) main_viewer_pane_g9_ParamLimits

0xbaa0,	// (0x00085901) main_viewer_pane_g9

0xb1a0,	// (0x00085001) cale_month_pane_t1_ParamLimits

0xb235,	// (0x00085096) bg_cale_pane_ParamLimits

0xb24d,	// (0x000850ae) list_cale_pane_ParamLimits

0xaccf,	// (0x00084b30) listscroll_cale_day_pane_t1

0xb25e,	// (0x000850bf) scroll_pane_cp09_ParamLimits

0x3900,	// (0x0007d761) main_mup_eq_pane_t1_ParamLimits

0x3900,	// (0x0007d761) main_mup_eq_pane_t1

0x391c,	// (0x0007d77d) main_mup_eq_pane_t2_ParamLimits

0x391c,	// (0x0007d77d) main_mup_eq_pane_t2

0x3938,	// (0x0007d799) main_mup_eq_pane_t3_ParamLimits

0x3938,	// (0x0007d799) main_mup_eq_pane_t3

0x3956,	// (0x0007d7b7) main_mup_eq_pane_t4_ParamLimits

0x3956,	// (0x0007d7b7) main_mup_eq_pane_t4

0x3974,	// (0x0007d7d5) main_mup_eq_pane_t5_ParamLimits

0x3974,	// (0x0007d7d5) main_mup_eq_pane_t5

0x3992,	// (0x0007d7f3) main_mup_eq_pane_t6_ParamLimits

0x3992,	// (0x0007d7f3) main_mup_eq_pane_t6

0x39a8,	// (0x0007d809) main_mup_eq_pane_t7_ParamLimits

0x39a8,	// (0x0007d809) main_mup_eq_pane_t7

0x39be,	// (0x0007d81f) main_mup_eq_pane_t8_ParamLimits

0x39be,	// (0x0007d81f) main_mup_eq_pane_t8

0x39d4,	// (0x0007d835) main_mup_eq_pane_t9_ParamLimits

0x39d4,	// (0x0007d835) main_mup_eq_pane_t9

0x39ee,	// (0x0007d84f) main_mup_eq_pane_t10_ParamLimits

0x39ee,	// (0x0007d84f) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000892c6) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000892c6) main_mup_eq_pane_t

0x3a9d,	// (0x0007d8fe) mup_equalizer_pane_cp5_ParamLimits

0x3ab1,	// (0x0007d912) mup_equalizer_pane_cp6_ParamLimits

0x3ac5,	// (0x0007d926) mup_equalizer_pane_cp7_ParamLimits

0x139f,	// (0x0007b200) main_gallery_pane

0xcde3,	// (0x00086c44) smil2_volume_pane

0xcdeb,	// (0x00086c4c) smil_status_volume_pane_g1_ParamLimits

0xcdfe,	// (0x00086c5f) smil_status_volume_pane_g2_ParamLimits

0xce11,	// (0x00086c72) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x0008947c) smil_status_volume_pane_g_ParamLimits

0xe64c,	// (0x000884ad) bg_popup_window_pane_cp07_ParamLimits

0xe65a,	// (0x000884bb) blid_firmament_pane

0x511e,	// (0x0007ef7f) aid_size_cell_gallery_ParamLimits

0x511e,	// (0x0007ef7f) aid_size_cell_gallery

0x5134,	// (0x0007ef95) grid_gallery_pane_ParamLimits

0x5134,	// (0x0007ef95) grid_gallery_pane

0x514d,	// (0x0007efae) cell_gallery_pane_ParamLimits

0x514d,	// (0x0007efae) cell_gallery_pane

0xe77f,	// (0x000885e0) bg_cell_gallery_focus_pane_ParamLimits

0xe77f,	// (0x000885e0) bg_cell_gallery_focus_pane

0xe791,	// (0x000885f2) cell_gallery_pane_g1_ParamLimits

0xe791,	// (0x000885f2) cell_gallery_pane_g1

0x5196,	// (0x0007eff7) cell_gallery_pane_g2_ParamLimits

0x5196,	// (0x0007eff7) cell_gallery_pane_g2

0x51a3,	// (0x0007f004) cell_gallery_pane_g3_ParamLimits

0x51a3,	// (0x0007f004) cell_gallery_pane_g3

0xe79d,	// (0x000885fe) cell_gallery_pane_g4_ParamLimits

0xe79d,	// (0x000885fe) cell_gallery_pane_g4

0x0003,

0xf6ab,	// (0x0008950c) cell_gallery_pane_g_ParamLimits

0xf6ab,	// (0x0008950c) cell_gallery_pane_g

0xe7a9,	// (0x0008860a) bg_cell_gallery_focus_pane_g1

0xe7b1,	// (0x00088612) bg_cell_gallery_focus_pane_g2

0xe7b9,	// (0x0008861a) bg_cell_gallery_focus_pane_g3

0xe7c1,	// (0x00088622) bg_cell_gallery_focus_pane_g4

0xe7c9,	// (0x0008862a) bg_cell_gallery_focus_pane_g5

0xe7d1,	// (0x00088632) bg_cell_gallery_focus_pane_g6

0xe7d9,	// (0x0008863a) bg_cell_gallery_focus_pane_g7

0xe7e1,	// (0x00088642) bg_cell_gallery_focus_pane_g8

0x0007,

0x00cd,	// (0x00079f2e) bg_cell_gallery_focus_pane_g

0xe7e9,	// (0x0008864a) aid_firma_cardinal

0xe7fd,	// (0x0008865e) blid_firmament_pane_t1

0xe814,	// (0x00088675) blid_firmament_pane_t2

0xe82b,	// (0x0008868c) blid_firmament_pane_t3

0xe842,	// (0x000886a3) blid_firmament_pane_t4

0x0003,

0x00de,	// (0x00079f3f) blid_firmament_pane_t

0xe859,	// (0x000886ba) blid_sat_info_pane

0xe869,	// (0x000886ca) blid_sat_info_pane_g1

0xe869,	// (0x000886ca) blid_sat_info_pane_g2

0x0001,

0x00e7,	// (0x00079f48) blid_sat_info_pane_g

0xe873,	// (0x000886d4) blid_sat_info_pane_t1

0xe881,	// (0x000886e2) smil2_volume_content_pane

0xe88a,	// (0x000886eb) smil2_volume_pane_g1

0xe892,	// (0x000886f3) smil2_volume_content_pane_g1

0xe89b,	// (0x000886fc) smil2_volume_content_pane_g2

0xe8a4,	// (0x00088705) smil2_volume_content_pane_g3

0xe8ad,	// (0x0008870e) smil2_volume_content_pane_g4

0xe8b6,	// (0x00088717) smil2_volume_content_pane_g5

0xe8bf,	// (0x00088720) smil2_volume_content_pane_g6

0xe8c8,	// (0x00088729) smil2_volume_content_pane_g7

0xe8d1,	// (0x00088732) smil2_volume_content_pane_g8

0xe8da,	// (0x0008873b) smil2_volume_content_pane_g9

0xe8e3,	// (0x00088744) smil2_volume_content_pane_g10

0x0009,

0x00ec,	// (0x00079f4d) smil2_volume_content_pane_g

0x1fc9,	// (0x0007be2a) cale_week_day_heading_pane_t1_ParamLimits

0x1fdd,	// (0x0007be3e) cale_week_day_heading_pane_t2_ParamLimits

0x1ff1,	// (0x0007be52) cale_week_day_heading_pane_t3_ParamLimits

0x2005,	// (0x0007be66) cale_week_day_heading_pane_t4_ParamLimits

0x2019,	// (0x0007be7a) cale_week_day_heading_pane_t5_ParamLimits

0x202d,	// (0x0007be8e) cale_week_day_heading_pane_t6_ParamLimits

0x2043,	// (0x0007bea4) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x0008903e) cale_week_day_heading_pane_t_ParamLimits

0xace1,	// (0x00084b42) bg_cale_side_pane_ParamLimits

0x2057,	// (0x0007beb8) cale_week_time_pane_t1_ParamLimits

0x206f,	// (0x0007bed0) cale_week_time_pane_t2_ParamLimits

0x2087,	// (0x0007bee8) cale_week_time_pane_t3_ParamLimits

0x209f,	// (0x0007bf00) cale_week_time_pane_t4_ParamLimits

0x20b7,	// (0x0007bf18) cale_week_time_pane_t5_ParamLimits

0x20cf,	// (0x0007bf30) cale_week_time_pane_t6_ParamLimits

0x20e7,	// (0x0007bf48) cale_week_time_pane_t7_ParamLimits

0x20ff,	// (0x0007bf60) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x0008904d) cale_week_time_pane_t_ParamLimits

0x2117,	// (0x0007bf78) cell_cale_week_pane_g2_ParamLimits

0xace1,	// (0x00084b42) bg_cale_side_pane_cp01_ParamLimits

0x2fd6,	// (0x0007ce37) cale_month_week_pane_t1_ParamLimits

0x2fed,	// (0x0007ce4e) cale_month_week_pane_t2_ParamLimits

0x3004,	// (0x0007ce65) cale_month_week_pane_t3_ParamLimits

0x301b,	// (0x0007ce7c) cale_month_week_pane_t4_ParamLimits

0x3032,	// (0x0007ce93) cale_month_week_pane_t5_ParamLimits

0x3049,	// (0x0007ceaa) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00089126) cale_month_week_pane_t_ParamLimits

0xb1dc,	// (0x0008503d) cell_cale_month_pane_g1_ParamLimits

0x139f,	// (0x0007b200) main_cale_event_viewer_pane

0x139f,	// (0x0007b200) listscroll_cale_event_viewer_pane

0xe8ec,	// (0x0008874d) list_cale_ev_pane

0xe8f4,	// (0x00088755) scroll_pane_cp023

0xe900,	// (0x00088761) field_cale_ev_pane_ParamLimits

0xe900,	// (0x00088761) field_cale_ev_pane

0xe91a,	// (0x0008877b) field_cale_ev_content_pane_ParamLimits

0xe91a,	// (0x0008877b) field_cale_ev_content_pane

0xe926,	// (0x00088787) field_cale_ev_pane_g1_ParamLimits

0xe926,	// (0x00088787) field_cale_ev_pane_g1

0xe932,	// (0x00088793) field_cale_ev_pane_g2_ParamLimits

0xe932,	// (0x00088793) field_cale_ev_pane_g2

0xe94a,	// (0x000887ab) field_cale_ev_pane_g3_ParamLimits

0xe94a,	// (0x000887ab) field_cale_ev_pane_g3

0x0002,

0x0101,	// (0x00079f62) field_cale_ev_pane_g_ParamLimits

0x0101,	// (0x00079f62) field_cale_ev_pane_g

0xe962,	// (0x000887c3) field_cale_ev_pane_t1_ParamLimits

0xe962,	// (0x000887c3) field_cale_ev_pane_t1

0xe979,	// (0x000887da) field_cale_ev_content_pane_t1_ParamLimits

0xe979,	// (0x000887da) field_cale_ev_content_pane_t1

0xba0e,	// (0x0008586f) bg_button_pane_cp01

0xab19,	// (0x0008497a) listscroll_cale_week_pane_ParamLimits

0x1dda,	// (0x0007bc3b) popup_toolbar_window_cp01

0xaccf,	// (0x00084b30) listscroll_cale_week_pane_t1_ParamLimits

0xab19,	// (0x0008497a) listscroll_cale_day_pane_ParamLimits

0x31bc,	// (0x0007d01d) popup_toolbar_window_cp02

0xaccf,	// (0x00084b30) listscroll_cale_day_pane_t1_ParamLimits

0xab19,	// (0x0008497a) main_cale_month_pane_ParamLimits

0x46c2,	// (0x0007e523) popup_toolbar_window_cp03_ParamLimits

0x46c2,	// (0x0007e523) popup_toolbar_window_cp03

0x3d74,	// (0x0007dbd5) main_image_pane_g2_ParamLimits

0x3d74,	// (0x0007dbd5) main_image_pane_g2

0x3d85,	// (0x0007dbe6) main_image_pane_g3_ParamLimits

0x3d85,	// (0x0007dbe6) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00089358) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00089358) main_image_pane_g

0xbba0,	// (0x00085a01) main_image_pane_t1_ParamLimits

0x3d96,	// (0x0007dbf7) main_image_pane_t2_ParamLimits

0x3d96,	// (0x0007dbf7) main_image_pane_t2

0x3da8,	// (0x0007dc09) main_image_pane_t3_ParamLimits

0x3da8,	// (0x0007dc09) main_image_pane_t3

0x3dd0,	// (0x0007dc31) main_image_pane_t4_ParamLimits

0x3dd0,	// (0x0007dc31) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0008935f) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0008935f) main_image_pane_t

0x3df0,	// (0x0007dc51) popup_image_details_window_cp01

0x3dfa,	// (0x0007dc5b) popup_toobar_trans_pane_cp01_ParamLimits

0x3dfa,	// (0x0007dc5b) popup_toobar_trans_pane_cp01

0x4573,	// (0x0007e3d4) popup_image_details_window_ParamLimits

0x4573,	// (0x0007e3d4) popup_image_details_window

0xcd44,	// (0x00086ba5) popup_image_focus_window

0x4989,	// (0x0007e7ea) camera2_autofocus_pane_ParamLimits

0x4989,	// (0x0007e7ea) camera2_autofocus_pane

0x139f,	// (0x0007b200) bg_popup_sub_pane_cp06

0xe996,	// (0x000887f7) popup_image_focus_window_g1

0xe99e,	// (0x000887ff) popup_image_focus_window_g2

0xe9a6,	// (0x00088807) popup_image_focus_window_g3

0xe9ae,	// (0x0008880f) popup_image_focus_window_g4

0x0003,

0x0108,	// (0x00079f69) popup_image_focus_window_g

0xe9b6,	// (0x00088817) popup_image_focus_window_t1

0xe9c4,	// (0x00088825) popup_image_focus_window_t2

0xe9d4,	// (0x00088835) popup_image_focus_window_t3

0x0002,

0xf6b4,	// (0x00089515) popup_image_focus_window_t

0xe9e2,	// (0x00088843) camera2_autofocus_pane_g1

0xa6bc,	// (0x0008451d) bg_tb_trans_pane_cp01

0xe9f0,	// (0x00088851) popup_image_details_window_g1

0xea03,	// (0x00088864) popup_image_details_window_g2

0x0002,

0xf6c6,	// (0x00089527) popup_image_details_window_g

0xea2c,	// (0x0008888d) popup_image_details_window_t1

0xea3e,	// (0x0008889f) popup_image_details_window_t2

0xea57,	// (0x000888b8) popup_image_details_window_t3

0xea6b,	// (0x000888cc) popup_image_details_window_t4

0xea86,	// (0x000888e7) popup_image_details_window_t5

0x0004,

0xf6cd,	// (0x0008952e) popup_image_details_window_t

0xaaeb,	// (0x0008494c) bg_calc_paper_pane_ParamLimits

0x139f,	// (0x0007b200) grid_highlight_pane_cp013

0xaaff,	// (0x00084960) list_calc_pane_ParamLimits

0xab11,	// (0x00084972) scroll_pane_cp024

0xab19,	// (0x0008497a) bg_calc_display_pane_ParamLimits

0x1c27,	// (0x0007ba88) calc_display_pane_t1_ParamLimits

0x1c39,	// (0x0007ba9a) calc_display_pane_t2_ParamLimits

0xab25,	// (0x00084986) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x00088fc0) calc_display_pane_t_ParamLimits

0x1cfc,	// (0x0007bb5d) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x00088fdd) cell_calc_pane_g

0x1d05,	// (0x0007bb66) cell_calc_pane_t1

0xab9c,	// (0x000849fd) grid_highlight_pane_cp02_ParamLimits

0xabb2,	// (0x00084a13) toolbar_button_pane_cp01_ParamLimits

0xabb2,	// (0x00084a13) toolbar_button_pane_cp01

0xbbe5,	// (0x00085a46) temp_image_control_pane_ParamLimits

0xbbe5,	// (0x00085a46) temp_image_control_pane

0xa6bc,	// (0x0008451d) main_mp3_pane

0xeacf,	// (0x00088930) temp_image_control_pane_g1_ParamLimits

0xeacf,	// (0x00088930) temp_image_control_pane_g1

0xeadd,	// (0x0008893e) temp_image_control_pane_g2_ParamLimits

0xeadd,	// (0x0008893e) temp_image_control_pane_g2

0xeaef,	// (0x00088950) temp_image_control_pane_g3_ParamLimits

0xeaef,	// (0x00088950) temp_image_control_pane_g3

0x51e0,	// (0x0007f041) temp_image_control_pane_g4_ParamLimits

0x51e0,	// (0x0007f041) temp_image_control_pane_g4

0x0003,

0xf6d8,	// (0x00089539) temp_image_control_pane_g_ParamLimits

0xf6d8,	// (0x00089539) temp_image_control_pane_g

0xeacf,	// (0x00088930) main_mp3_pane_g1

0x51f3,	// (0x0007f054) main_mp3_pane_g2

0x0007,

0xf6e1,	// (0x00089542) main_mp3_pane_g

0xeb32,	// (0x00088993) main_mp3_pane_t1

0xadc2,	// (0x00084c23) main_camera_pane_g8_ParamLimits

0xadc2,	// (0x00084c23) main_camera_pane_g8

0x23c7,	// (0x0007c228) main_video_pane_g7_ParamLimits

0x23c7,	// (0x0007c228) main_video_pane_g7

0xce51,	// (0x00086cb2) main_camera2_pane_t7_ParamLimits

0xce51,	// (0x00086cb2) main_camera2_pane_t7

0xafc8,	// (0x00084e29) scroll_pane_cp025_ParamLimits

0xafc8,	// (0x00084e29) scroll_pane_cp025

0xafdc,	// (0x00084e3d) scroll_pane_cp026_ParamLimits

0xafdc,	// (0x00084e3d) scroll_pane_cp026

0xafeb,	// (0x00084e4c) wml_content_pane_ParamLimits

0x139f,	// (0x0007b200) main_touch_calib_pane

0x52bf,	// (0x0007f120) main_touch_calib_pane_g1

0x52cb,	// (0x0007f12c) main_touch_calib_pane_g2

0x52d7,	// (0x0007f138) main_touch_calib_pane_g3

0x52e3,	// (0x0007f144) main_touch_calib_pane_g4

0x0003,

0xf6ff,	// (0x00089560) main_touch_calib_pane_g

0x52ef,	// (0x0007f150) main_touch_calib_pane_t1

0x5309,	// (0x0007f16a) main_touch_calib_pane_t2

0x0004,

0xf708,	// (0x00089569) main_touch_calib_pane_t

0xb7c6,	// (0x00085627) mup_progress_pane_cp02

0xb7e5,	// (0x00085646) navi_pane_g1

0xb847,	// (0x000856a8) navi_pane_mp_t3

0xa6bc,	// (0x0008451d) main_mp3_pane_ParamLimits

0x4700,	// (0x0007e561) navi_pane_ParamLimits

0xeacf,	// (0x00088930) main_mp3_pane_g1_ParamLimits

0x51f3,	// (0x0007f054) main_mp3_pane_g2_ParamLimits

0x5201,	// (0x0007f062) main_mp3_pane_g3_ParamLimits

0x5201,	// (0x0007f062) main_mp3_pane_g3

0x520f,	// (0x0007f070) main_mp3_pane_g4_ParamLimits

0x520f,	// (0x0007f070) main_mp3_pane_g4

0xeaff,	// (0x00088960) main_mp3_pane_g5_ParamLimits

0xeaff,	// (0x00088960) main_mp3_pane_g5

0xeb0d,	// (0x0008896e) main_mp3_pane_g6_ParamLimits

0xeb0d,	// (0x0008896e) main_mp3_pane_g6

0xeb1a,	// (0x0008897b) main_mp3_pane_g7_ParamLimits

0xeb1a,	// (0x0008897b) main_mp3_pane_g7

0xeb26,	// (0x00088987) main_mp3_pane_g8_ParamLimits

0xeb26,	// (0x00088987) main_mp3_pane_g8

0xf6e1,	// (0x00089542) main_mp3_pane_g_ParamLimits

0x521d,	// (0x0007f07e) main_mp3_pane_t2

0x522b,	// (0x0007f08c) main_mp3_pane_t3

0xeb40,	// (0x000889a1) main_mp3_pane_t4

0xeb4e,	// (0x000889af) main_mp3_pane_t5

0x0005,

0xf6f2,	// (0x00089553) main_mp3_pane_t

0xeb5c,	// (0x000889bd) mup_progress_pane_cp01

0xa672,	// (0x000844d3) aid_zoom_text_secondary2

0xe8ec,	// (0x0008874d) list_cale_ev2_pane

0xe8f4,	// (0x00088755) scroll_pane_cp023_ParamLimits

0x535f,	// (0x0007f1c0) field_cale_ev2_pane_ParamLimits

0x535f,	// (0x0007f1c0) field_cale_ev2_pane

0x5385,	// (0x0007f1e6) field_cale_ev2_pane_g1_ParamLimits

0x5385,	// (0x0007f1e6) field_cale_ev2_pane_g1

0x5391,	// (0x0007f1f2) field_cale_ev2_pane_g2_ParamLimits

0x5391,	// (0x0007f1f2) field_cale_ev2_pane_g2

0x53a9,	// (0x0007f20a) field_cale_ev2_pane_g3_ParamLimits

0x53a9,	// (0x0007f20a) field_cale_ev2_pane_g3

0x0003,

0xf713,	// (0x00089574) field_cale_ev2_pane_g_ParamLimits

0xf713,	// (0x00089574) field_cale_ev2_pane_g

0xcedc,	// (0x00086d3d) field_cale_ev2_pane_t1_ParamLimits

0xcedc,	// (0x00086d3d) field_cale_ev2_pane_t1

0xcef3,	// (0x00086d54) field_cale_ev2_pane_t2_ParamLimits

0xcef3,	// (0x00086d54) field_cale_ev2_pane_t2

0x0001,

0xf71c,	// (0x0008957d) field_cale_ev2_pane_t_ParamLimits

0xf71c,	// (0x0008957d) field_cale_ev2_pane_t

0x3c24,	// (0x0007da85) main_postcard_pane_g5_ParamLimits

0x3c24,	// (0x0007da85) main_postcard_pane_g5

0x3c3a,	// (0x0007da9b) main_postcard_pane_g6_ParamLimits

0x3c3a,	// (0x0007da9b) main_postcard_pane_g6

0x2177,	// (0x0007bfd8) camera2_autofocus_pane_cp_ParamLimits

0x2177,	// (0x0007bfd8) camera2_autofocus_pane_cp

0xa6bc,	// (0x0008451d) main_mup3_pane

0x53e1,	// (0x0007f242) main_mup3_pane_g1_ParamLimits

0x53e1,	// (0x0007f242) main_mup3_pane_g1

0x5403,	// (0x0007f264) main_mup3_pane_g2_ParamLimits

0x5403,	// (0x0007f264) main_mup3_pane_g2

0x5488,	// (0x0007f2e9) main_mup3_pane_g3_ParamLimits

0x5488,	// (0x0007f2e9) main_mup3_pane_g3

0x54ce,	// (0x0007f32f) main_mup3_pane_g4_ParamLimits

0x54ce,	// (0x0007f32f) main_mup3_pane_g4

0x5514,	// (0x0007f375) main_mup3_pane_g5_ParamLimits

0x5514,	// (0x0007f375) main_mup3_pane_g5

0x555c,	// (0x0007f3bd) main_mup3_pane_g6_ParamLimits

0x555c,	// (0x0007f3bd) main_mup3_pane_g6

0xeb64,	// (0x000889c5) main_mup3_pane_g7_ParamLimits

0xeb64,	// (0x000889c5) main_mup3_pane_g7

0x0007,

0xf72c,	// (0x0008958d) main_mup3_pane_g_ParamLimits

0xf72c,	// (0x0008958d) main_mup3_pane_g

0x55dc,	// (0x0007f43d) main_mup3_pane_t1_ParamLimits

0x55dc,	// (0x0007f43d) main_mup3_pane_t1

0x5650,	// (0x0007f4b1) main_mup3_pane_t2_ParamLimits

0x5650,	// (0x0007f4b1) main_mup3_pane_t2

0x5724,	// (0x0007f585) main_mup3_pane_t4_ParamLimits

0x5724,	// (0x0007f585) main_mup3_pane_t4

0x5782,	// (0x0007f5e3) main_mup3_pane_t5_ParamLimits

0x5782,	// (0x0007f5e3) main_mup3_pane_t5

0x583e,	// (0x0007f69f) main_mup3_pane_t6_ParamLimits

0x583e,	// (0x0007f69f) main_mup3_pane_t6

0x0005,

0xf73d,	// (0x0008959e) main_mup3_pane_t_ParamLimits

0xf73d,	// (0x0008959e) main_mup3_pane_t

0x58f6,	// (0x0007f757) mup3_progress_pane_ParamLimits

0x58f6,	// (0x0007f757) mup3_progress_pane

0x5982,	// (0x0007f7e3) popup_mup3_control_window_ParamLimits

0x5982,	// (0x0007f7e3) popup_mup3_control_window

0xeb72,	// (0x000889d3) popup_mup3_text_window

0x59b4,	// (0x0007f815) mup3_progress_pane_t1

0x59d3,	// (0x0007f834) mup3_progress_pane_t2

0xeb7a,	// (0x000889db) mup3_progress_pane_t3

0x0002,

0xf74a,	// (0x000895ab) mup3_progress_pane_t

0xeb97,	// (0x000889f8) mup_progress_pane_cp03

0x139f,	// (0x0007b200) bg_tb_trans_pane_cp04

0x59f2,	// (0x0007f853) mup3_volume_pane

0x59fa,	// (0x0007f85b) popup_mup3_control_window_g1

0x5a03,	// (0x0007f864) mup3_volume_pane_g1

0x5a0c,	// (0x0007f86d) mup3_volume_pane_g2

0x5a15,	// (0x0007f876) mup3_volume_pane_g3

0x0002,

0xf751,	// (0x000895b2) mup3_volume_pane_g

0x139f,	// (0x0007b200) bg_tb_trans_pane_cp03

0xeba7,	// (0x00088a08) popup_mup3_text_window_g1

0xebaf,	// (0x00088a10) popup_mup3_text_window_t1

0xab73,	// (0x000849d4) list_calc_item_pane_g1_ParamLimits

0xe5ba,	// (0x0008841b) mup_volume_pane_cp_g1

0x5323,	// (0x0007f184) main_touch_calib_pane_t3

0x5337,	// (0x0007f198) main_touch_calib_pane_t4

0x534b,	// (0x0007f1ac) main_touch_calib_pane_t5

0xa64e,	// (0x000844af) aid_cell_size_toolbar2

0xa656,	// (0x000844b7) aid_popup3_width_pane

0xa662,	// (0x000844c3) aid_zoom_text_msg_primary

0xad8f,	// (0x00084bf0) vorec_t7

0xab37,	// (0x00084998) bg_calc_paper_pane_g1_ParamLimits

0xab43,	// (0x000849a4) bg_calc_paper_pane_g2_ParamLimits

0xab4f,	// (0x000849b0) bg_calc_paper_pane_g3_ParamLimits

0xab5b,	// (0x000849bc) bg_calc_paper_pane_g4_ParamLimits

0xab67,	// (0x000849c8) bg_calc_paper_pane_g5_ParamLimits

0x1c82,	// (0x0007bae3) bg_calc_paper_pane_g6_ParamLimits

0x1c93,	// (0x0007baf4) bg_calc_paper_pane_g7_ParamLimits

0x1ca4,	// (0x0007bb05) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x00088fc7) bg_calc_paper_pane_g_ParamLimits

0x1cb7,	// (0x0007bb18) calc_bg_paper_pane_g9_ParamLimits

0x22d1,	// (0x0007c132) image_qvga_pane_ParamLimits

0x22d1,	// (0x0007c132) image_qvga_pane

0xa9e0,	// (0x00084841) bg_popup_sub_pane_cp04_ParamLimits

0xbb1c,	// (0x0008597d) popup_mup_playback_window_g1_ParamLimits

0xbb28,	// (0x00085989) popup_mup_playback_window_t1_ParamLimits

0xbb3d,	// (0x0008599e) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x00089353) popup_mup_playback_window_t_ParamLimits

0x4e80,	// (0x0007ece1) main_mup2_pane_g3_ParamLimits

0x4e80,	// (0x0007ece1) main_mup2_pane_g3

0x25d6,	// (0x0007c437) popup_toolbar_window_cp04

0xbf32,	// (0x00085d93) popup_call2_audio_second_window_g3_ParamLimits

0xbf32,	// (0x00085d93) popup_call2_audio_second_window_g3

0xc33c,	// (0x0008619d) popup_call2_audio_first_window_g4_ParamLimits

0xc33c,	// (0x0008619d) popup_call2_audio_first_window_g4

0xc9bb,	// (0x0008681c) popup_call2_audio_in_window_g4_ParamLimits

0xc9bb,	// (0x0008681c) popup_call2_audio_in_window_g4

0x3d56,	// (0x0007dbb7) aid_area_sk_bg_cut_ParamLimits

0x3d56,	// (0x0007dbb7) aid_area_sk_bg_cut

0xbb52,	// (0x000859b3) aid_area_sk_bg_cut_2_ParamLimits

0xbb52,	// (0x000859b3) aid_area_sk_bg_cut_2

0x5186,	// (0x0007efe7) aid_placing_details_win

0x518e,	// (0x0007efef) aid_placing_details_win_2

0xe9e2,	// (0x00088843) camera2_autofocus_pane_g1_ParamLimits

0x1556,	// (0x0007b3b7) popup_fixed_preview_cale_window_ParamLimits

0x1556,	// (0x0007b3b7) popup_fixed_preview_cale_window

0xb89f,	// (0x00085700) navi_slider_pane_g3

0xb8a8,	// (0x00085709) navi_slider_pane_g4

0xb8b1,	// (0x00085712) navi_slider_pane_g5

0xb89f,	// (0x00085700) navi_slider_pane_g6

0xb8ba,	// (0x0008571b) navi_slider_pane_g7

0xb9db,	// (0x0008583c) mup_scale_pane_g3

0xb9e4,	// (0x00085845) mup_scale_pane_g4

0xb9ed,	// (0x0008584e) mup_scale_pane_g5

0x3ad9,	// (0x0007d93a) mup_scale_pane_g6

0x3ae2,	// (0x0007d943) mup_scale_pane_g7

0xb89f,	// (0x00085700) cams2_slider_pane_g3

0xe63c,	// (0x0008849d) cams2_slider_pane_g4

0xcebf,	// (0x00086d20) cams2_slider_pane_g5

0xb89f,	// (0x00085700) cams2_slider_pane_g6

0xcec7,	// (0x00086d28) cams2_slider_pane_g7

0xe869,	// (0x000886ca) camera2_autofocus_pane_cp_g1

0xebbd,	// (0x00088a1e) bg_popup_preview_window_pane_cp02_ParamLimits

0xebbd,	// (0x00088a1e) bg_popup_preview_window_pane_cp02

0xebc9,	// (0x00088a2a) list_fp_cale_pane_ParamLimits

0xebc9,	// (0x00088a2a) list_fp_cale_pane

0xebd5,	// (0x00088a36) popup_fixed_preview_cale_window_t1_ParamLimits

0xebd5,	// (0x00088a36) popup_fixed_preview_cale_window_t1

0x5a1e,	// (0x0007f87f) popup_fixed_preview_cale_window_t2_ParamLimits

0x5a1e,	// (0x0007f87f) popup_fixed_preview_cale_window_t2

0x5a33,	// (0x0007f894) popup_fixed_preview_cale_window_t3_ParamLimits

0x5a33,	// (0x0007f894) popup_fixed_preview_cale_window_t3

0x0002,

0xf758,	// (0x000895b9) popup_fixed_preview_cale_window_t_ParamLimits

0xf758,	// (0x000895b9) popup_fixed_preview_cale_window_t

0x5a48,	// (0x0007f8a9) list_single_fp_cale_pane_ParamLimits

0x5a48,	// (0x0007f8a9) list_single_fp_cale_pane

0xebf3,	// (0x00088a54) list_single_fp_cale_pane_g1_ParamLimits

0xebf3,	// (0x00088a54) list_single_fp_cale_pane_g1

0xebff,	// (0x00088a60) list_single_fp_cale_pane_g2_ParamLimits

0xebff,	// (0x00088a60) list_single_fp_cale_pane_g2

0x0002,

0x01bc,	// (0x0007a01d) list_single_fp_cale_pane_g_ParamLimits

0x01bc,	// (0x0007a01d) list_single_fp_cale_pane_g

0xec18,	// (0x00088a79) list_single_fp_cale_pane_t1_ParamLimits

0xec18,	// (0x00088a79) list_single_fp_cale_pane_t1

0xec2a,	// (0x00088a8b) list_single_fp_cale_pane_t2_ParamLimits

0xec2a,	// (0x00088a8b) list_single_fp_cale_pane_t2

0x0001,

0x01c3,	// (0x0007a024) list_single_fp_cale_pane_t_ParamLimits

0x01c3,	// (0x0007a024) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x139f,	// (0x0007b200) main_dialer_pane

0x5a60,	// (0x0007f8c1) aid_cell_size_keypad

0x5a6a,	// (0x0007f8cb) dialer_ne_pane

0x5a72,	// (0x0007f8d3) grid_dialer_command_1_pane

0x5a7a,	// (0x0007f8db) grid_dialer_command_2_pane

0x5a82,	// (0x0007f8e3) grid_dialer_keypad_pane

0x5a94,	// (0x0007f8f5) bg_popup_call_pane_cp06_ParamLimits

0x5a94,	// (0x0007f8f5) bg_popup_call_pane_cp06

0x5aa0,	// (0x0007f901) dialer_ne_clear_pane_ParamLimits

0x5aa0,	// (0x0007f901) dialer_ne_clear_pane

0xec5d,	// (0x00088abe) dialer_ne_pane_g1

0xec65,	// (0x00088ac6) dialer_ne_pane_t1_ParamLimits

0xec65,	// (0x00088ac6) dialer_ne_pane_t1

0x5aac,	// (0x0007f90d) dialer_ne_pane_t2_ParamLimits

0x5aac,	// (0x0007f90d) dialer_ne_pane_t2

0x5ad6,	// (0x0007f937) dialer_ne_pane_t3_ParamLimits

0x5ad6,	// (0x0007f937) dialer_ne_pane_t3

0x0002,

0xf75f,	// (0x000895c0) dialer_ne_pane_t_ParamLimits

0xf75f,	// (0x000895c0) dialer_ne_pane_t

0x5b06,	// (0x0007f967) dialer_ne_pane_t3_copy1_ParamLimits

0x5b06,	// (0x0007f967) dialer_ne_pane_t3_copy1

0x5b35,	// (0x0007f996) cell_dialer_keypad_pane_ParamLimits

0x5b35,	// (0x0007f996) cell_dialer_keypad_pane

0x5b4c,	// (0x0007f9ad) cell_dialer_command_1_pane_ParamLimits

0x5b4c,	// (0x0007f9ad) cell_dialer_command_1_pane

0x5b62,	// (0x0007f9c3) cell_dialer_command_2_pane_ParamLimits

0x5b62,	// (0x0007f9c3) cell_dialer_command_2_pane

0xec77,	// (0x00088ad8) bg_button_pane_cp02_ParamLimits

0xec77,	// (0x00088ad8) bg_button_pane_cp02

0x5b71,	// (0x0007f9d2) cell_dialer_keypad_pane_g1_ParamLimits

0x5b71,	// (0x0007f9d2) cell_dialer_keypad_pane_g1

0xec77,	// (0x00088ad8) bg_button_pane_cp03_ParamLimits

0xec77,	// (0x00088ad8) bg_button_pane_cp03

0x5b86,	// (0x0007f9e7) cell_dialer_command_1_pane_g1_ParamLimits

0x5b86,	// (0x0007f9e7) cell_dialer_command_1_pane_g1

0xec83,	// (0x00088ae4) bg_button_pane_cp04

0x5b9a,	// (0x0007f9fb) cell_dialer_command_2_pane_g1

0xb885,	// (0x000856e6) bg_button_pane_cp06

0xec8b,	// (0x00088aec) dialer_ne_clear_pane_g1

0x3607,	// (0x0007d468) navi_pane_g2

0x3635,	// (0x0007d496) navi_pane_g3

0x0002,

0xf3f5,	// (0x00089256) navi_pane_g

0x365e,	// (0x0007d4bf) navi_pane_mv_g2

0x3685,	// (0x0007d4e6) navi_pane_mv_g5

0x368d,	// (0x0007d4ee) navi_pane_mv_t1

0xab19,	// (0x0008497a) main_clock2_pane

0x5bd4,	// (0x0007fa35) main_clock2_list_pane_ParamLimits

0x5bd4,	// (0x0007fa35) main_clock2_list_pane

0x5c0e,	// (0x0007fa6f) main_clock2_pane_t1_ParamLimits

0x5c0e,	// (0x0007fa6f) main_clock2_pane_t1

0x5c4c,	// (0x0007faad) main_clock2_pane_t2_ParamLimits

0x5c4c,	// (0x0007faad) main_clock2_pane_t2

0x0004,

0xf766,	// (0x000895c7) main_clock2_pane_t_ParamLimits

0xf766,	// (0x000895c7) main_clock2_pane_t

0x5ce9,	// (0x0007fb4a) popup_clock_analogue_window_cp03_ParamLimits

0x5ce9,	// (0x0007fb4a) popup_clock_analogue_window_cp03

0x5d10,	// (0x0007fb71) popup_clock_digital_window_cp02_ParamLimits

0x5d10,	// (0x0007fb71) popup_clock_digital_window_cp02

0x5d85,	// (0x0007fbe6) main_clock2_list_single_pane_ParamLimits

0x5d85,	// (0x0007fbe6) main_clock2_list_single_pane

0xb885,	// (0x000856e6) list_highlight_pane_cp05

0xec93,	// (0x00088af4) main_clock2_list_single_pane_t1

0x25d6,	// (0x0007c437) popup_toolbar_window_cp04_ParamLimits

0x51b0,	// (0x0007f011) camera2_autofocus_pane_g2_ParamLimits

0x51b0,	// (0x0007f011) camera2_autofocus_pane_g2

0x51bc,	// (0x0007f01d) camera2_autofocus_pane_g3_ParamLimits

0x51bc,	// (0x0007f01d) camera2_autofocus_pane_g3

0x51c8,	// (0x0007f029) camera2_autofocus_pane_g4_ParamLimits

0x51c8,	// (0x0007f029) camera2_autofocus_pane_g4

0x51d4,	// (0x0007f035) camera2_autofocus_pane_g5_ParamLimits

0x51d4,	// (0x0007f035) camera2_autofocus_pane_g5

0x0004,

0xf6bb,	// (0x0008951c) camera2_autofocus_pane_g_ParamLimits

0xf6bb,	// (0x0008951c) camera2_autofocus_pane_g

0x53c1,	// (0x0007f222) camera2_autofocus_pane_cp_g2

0x53c9,	// (0x0007f22a) camera2_autofocus_pane_cp_g3

0x53d1,	// (0x0007f232) camera2_autofocus_pane_cp_g4

0x53d9,	// (0x0007f23a) camera2_autofocus_pane_cp_g5

0x0004,

0xf721,	// (0x00089582) camera2_autofocus_pane_cp_g

0x5a8c,	// (0x0007f8ed) popup_dialer_spcha_window

0x139f,	// (0x0007b200) bg_popup_sub_pane_cp07

0xeca1,	// (0x00088b02) list_spcha_pane

0xeca9,	// (0x00088b0a) list_single_spcha_pane_ParamLimits

0xeca9,	// (0x00088b0a) list_single_spcha_pane

0x139f,	// (0x0007b200) list_highlight_pane_cp06

0xecba,	// (0x00088b1b) list_single_spcha_pane_t1

0xc765,	// (0x000865c6) popup_call2_audio_out_window_g4_ParamLimits

0xc765,	// (0x000865c6) popup_call2_audio_out_window_g4

0x139f,	// (0x0007b200) main_imed2_pane

0xcd4c,	// (0x00086bad) popup_imed_adjust2_window

0x458b,	// (0x0007e3ec) popup_imed_trans_window_ParamLimits

0x458b,	// (0x0007e3ec) popup_imed_trans_window

0xe6a5,	// (0x00088506) popup_blid_sat_info2_window_t1

0xe6b3,	// (0x00088514) popup_blid_sat_info2_window_t2

0x000a,

0x00ad,	// (0x00079f0e) popup_blid_sat_info2_window_t

0x5e2d,	// (0x0007fc8e) aid_size_cell_colour_35

0x5e4d,	// (0x0007fcae) aid_size_cell_colour_112

0x5e6d,	// (0x0007fcce) aid_size_cell_effect

0xcd24,	// (0x00086b85) bg_tb_trans_pane_cp02

0xb2d1,	// (0x00085132) heading_imed_pane

0x5e8d,	// (0x0007fcee) listscroll_imed_pane

0xecc8,	// (0x00088b29) heading_imed_pane_g1

0xecd0,	// (0x00088b31) heading_imed_pane_t1

0xecde,	// (0x00088b3f) grid_imed_colour_35_pane_ParamLimits

0xecde,	// (0x00088b3f) grid_imed_colour_35_pane

0x5e99,	// (0x0007fcfa) grid_imed_effect_pane

0xecf9,	// (0x00088b5a) list_imed_aspect_pane

0x5eae,	// (0x0007fd0f) scroll_pane_cp027_ParamLimits

0x5eae,	// (0x0007fd0f) scroll_pane_cp027

0x5ebf,	// (0x0007fd20) cell_imed_effect_pane_ParamLimits

0x5ebf,	// (0x0007fd20) cell_imed_effect_pane

0xed01,	// (0x00088b62) cell_imed_colour_pane_ParamLimits

0xed01,	// (0x00088b62) cell_imed_colour_pane

0xed43,	// (0x00088ba4) cell_imed_colour_pane_g1_ParamLimits

0xed43,	// (0x00088ba4) cell_imed_colour_pane_g1

0xed54,	// (0x00088bb5) hgihlgiht_grid_pane_cp016_ParamLimits

0xed54,	// (0x00088bb5) hgihlgiht_grid_pane_cp016

0x5ee6,	// (0x0007fd47) cell_imed_effect_pane_g1

0x5eee,	// (0x0007fd4f) grid_highlight_pane_cp017

0xed65,	// (0x00088bc6) list_imed_single_pane_ParamLimits

0xed65,	// (0x00088bc6) list_imed_single_pane

0x139f,	// (0x0007b200) list_highlight_pane_cp07

0xed7c,	// (0x00088bdd) list_imed_aspect_pane_comp1_t1

0xcd24,	// (0x00086b85) bg_tb_trans_pane_cp05

0xed9e,	// (0x00088bff) popup_imed_adjust2_window_g1

0xedc5,	// (0x00088c26) popup_imed_adjust2_window_t1

0xeddd,	// (0x00088c3e) slider_imed_adjust_pane

0xedf1,	// (0x00088c52) slider_imed_adjust_pane_g1

0xee01,	// (0x00088c62) slider_imed_adjust_pane_g2

0xee11,	// (0x00088c72) slider_imed_adjust_pane_g3

0xee22,	// (0x00088c83) slider_imed_adjust_pane_g4

0x0003,

0x01ec,	// (0x0007a04d) slider_imed_adjust_pane_g

0x5ef7,	// (0x0007fd58) aid_size_cell_clipart2

0x5f03,	// (0x0007fd64) grid_imed_clipart_pane

0xee33,	// (0x00088c94) scroll_pane_cp031

0x5f0d,	// (0x0007fd6e) cell_imed_clipart_pane_ParamLimits

0x5f0d,	// (0x0007fd6e) cell_imed_clipart_pane

0x5f34,	// (0x0007fd95) cell_imed_clipart_pane_g1

0x139f,	// (0x0007b200) grid_highlight_pane_cp014

0x5be9,	// (0x0007fa4a) main_clock2_pane_g1_ParamLimits

0x5be9,	// (0x0007fa4a) main_clock2_pane_g1

0x5d30,	// (0x0007fb91) aid_call2_pane_cp10

0x5d42,	// (0x0007fba3) aid_call_pane_cp10

0xb7ba,	// (0x0008561b) popup_clock_analogue_window_cp10_g1

0xb7ba,	// (0x0008561b) popup_clock_analogue_window_cp10_g2

0x5d54,	// (0x0007fbb5) popup_clock_analogue_window_cp10_g3

0x5d54,	// (0x0007fbb5) popup_clock_analogue_window_cp10_g4

0xb7ba,	// (0x0008561b) popup_clock_analogue_window_cp10_g5

0x0004,

0xf771,	// (0x000895d2) popup_clock_analogue_window_cp10_g

0x5d66,	// (0x0007fbc7) popup_clock_analogue_window_cp10_t1

0x5d97,	// (0x0007fbf8) clock_digital_number_pane_cp10_ParamLimits

0x5d97,	// (0x0007fbf8) clock_digital_number_pane_cp10

0x5daf,	// (0x0007fc10) clock_digital_number_pane_cp11_ParamLimits

0x5daf,	// (0x0007fc10) clock_digital_number_pane_cp11

0x5dc7,	// (0x0007fc28) clock_digital_number_pane_cp12_ParamLimits

0x5dc7,	// (0x0007fc28) clock_digital_number_pane_cp12

0x5ddf,	// (0x0007fc40) clock_digital_number_pane_cp13_ParamLimits

0x5ddf,	// (0x0007fc40) clock_digital_number_pane_cp13

0x5df7,	// (0x0007fc58) clock_digital_separator_pane_cp10_ParamLimits

0x5df7,	// (0x0007fc58) clock_digital_separator_pane_cp10

0x5e0f,	// (0x0007fc70) popup_clock_digital_window_cp02_t1_ParamLimits

0x5e0f,	// (0x0007fc70) popup_clock_digital_window_cp02_t1

0xa9d8,	// (0x00084839) clock_digital_number_pane_cp10_g1

0xa9d8,	// (0x00084839) clock_digital_number_pane_cp10_g2

0x0001,

0xf77c,	// (0x000895dd) clock_digital_number_pane_cp10_g

0xa9d8,	// (0x00084839) clock_digital_separator_pane_cp10_g1

0xa9d8,	// (0x00084839) clock_digital_separator_pane_g2_cp10

0xb855,	// (0x000856b6) navi_pane_vded_g4

0xb85e,	// (0x000856bf) navi_pane_vded_g5

0xb867,	// (0x000856c8) navi_pane_vded_t1

0x139f,	// (0x0007b200) main_vded_pane

0x5f3d,	// (0x0007fd9e) main_vded_pane_g1

0x5f49,	// (0x0007fdaa) main_vded_pane_g2

0x5f53,	// (0x0007fdb4) main_vded_pane_g3

0x0002,

0xf781,	// (0x000895e2) main_vded_pane_g

0x5f5d,	// (0x0007fdbe) main_vded_pane_t1

0x5f6b,	// (0x0007fdcc) main_vded_pane_t2

0x0001,

0xf788,	// (0x000895e9) main_vded_pane_t

0x5f79,	// (0x0007fdda) vded_slider_pane

0x5f83,	// (0x0007fde4) vded_video_pane

0xee3b,	// (0x00088c9c) vded_video_pane_g1

0x5f8d,	// (0x0007fdee) vded_video_pane_g2

0xe869,	// (0x000886ca) vded_video_pane_g3

0x0002,

0xf78d,	// (0x000895ee) vded_video_pane_g

0xee45,	// (0x00088ca6) vded_slider_pane_g1

0xe5ba,	// (0x0008841b) vded_slider_pane_g2

0xee4e,	// (0x00088caf) vded_slider_pane_g3

0xee57,	// (0x00088cb8) vded_slider_pane_g4

0xee60,	// (0x00088cc1) vded_slider_pane_g5

0x0004,

0x020d,	// (0x0007a06e) vded_slider_pane_g

0x596a,	// (0x0007f7cb) mup3_rocker_pane_ParamLimits

0x596a,	// (0x0007f7cb) mup3_rocker_pane

0x5f96,	// (0x0007fdf7) mup3_control_keys_pane_g1

0x5f9e,	// (0x0007fdff) mup3_control_keys_pane_g2

0x5fa6,	// (0x0007fe07) mup3_control_keys_pane_g3

0x5fae,	// (0x0007fe0f) mup3_control_keys_pane_g4

0x0003,

0xf794,	// (0x000895f5) mup3_control_keys_pane_g

0x158d,	// (0x0007b3ee) popup_toolbar2_fixed_window_cp01_ParamLimits

0x158d,	// (0x0007b3ee) popup_toolbar2_fixed_window_cp01

0x599e,	// (0x0007f7ff) popup_toolbar2_fixed_window_cp02_ParamLimits

0x599e,	// (0x0007f7ff) popup_toolbar2_fixed_window_cp02

0xc0a4,	// (0x00085f05) popup_call2_audio_second_window_t4_ParamLimits

0xc0a4,	// (0x00085f05) popup_call2_audio_second_window_t4

0xc5d2,	// (0x00086433) popup_call2_audio_first_window_t6_ParamLimits

0xc5d2,	// (0x00086433) popup_call2_audio_first_window_t6

0xc868,	// (0x000866c9) popup_call2_audio_out_window_t6_ParamLimits

0xc868,	// (0x000866c9) popup_call2_audio_out_window_t6

0x139f,	// (0x0007b200) main_vitu_pane

0x5fbe,	// (0x0007fe1f) aid_size_cell_itu_ParamLimits

0x5fbe,	// (0x0007fe1f) aid_size_cell_itu

0xa6bc,	// (0x0008451d) bg_popup_window_pane_cp08_ParamLimits

0xa6bc,	// (0x0008451d) bg_popup_window_pane_cp08

0x5fd4,	// (0x0007fe35) field_vitu_entry_pane_ParamLimits

0x5fd4,	// (0x0007fe35) field_vitu_entry_pane

0x5feb,	// (0x0007fe4c) grid_vitu_function_pane_ParamLimits

0x5feb,	// (0x0007fe4c) grid_vitu_function_pane

0x6006,	// (0x0007fe67) grid_vitu_itu_pane_ParamLimits

0x6006,	// (0x0007fe67) grid_vitu_itu_pane

0x6024,	// (0x0007fe85) cell_vitu_itu_pane_ParamLimits

0x6024,	// (0x0007fe85) cell_vitu_itu_pane

0x6048,	// (0x0007fea9) cell_vitu_function_pane_ParamLimits

0x6048,	// (0x0007fea9) cell_vitu_function_pane

0xa6bc,	// (0x0008451d) bg_popup_sub_pane_cp08_ParamLimits

0xa6bc,	// (0x0008451d) bg_popup_sub_pane_cp08

0x6063,	// (0x0007fec4) field_vitu_entry_pane_t1_ParamLimits

0x6063,	// (0x0007fec4) field_vitu_entry_pane_t1

0xee81,	// (0x00088ce2) field_vitu_entry_pane_t2_ParamLimits

0xee81,	// (0x00088ce2) field_vitu_entry_pane_t2

0x0001,

0xf79d,	// (0x000895fe) field_vitu_entry_pane_t_ParamLimits

0xf79d,	// (0x000895fe) field_vitu_entry_pane_t

0xee9e,	// (0x00088cff) bg_button_pane_cp05_ParamLimits

0xee9e,	// (0x00088cff) bg_button_pane_cp05

0x6083,	// (0x0007fee4) cell_vitu_itu_pane_g1

0x609b,	// (0x0007fefc) cell_vitu_itu_pane_t1_ParamLimits

0x609b,	// (0x0007fefc) cell_vitu_itu_pane_t1

0x60ad,	// (0x0007ff0e) cell_vitu_itu_pane_t2_ParamLimits

0x60ad,	// (0x0007ff0e) cell_vitu_itu_pane_t2

0x0002,

0xf7a2,	// (0x00089603) cell_vitu_itu_pane_t_ParamLimits

0xf7a2,	// (0x00089603) cell_vitu_itu_pane_t

0xeeac,	// (0x00088d0d) bg_button_pane_cp07

0x60e2,	// (0x0007ff43) cell_vitu_function_pane_g1

0xaaab,	// (0x0008490c) main_calc_pane_g1

0x13cd,	// (0x0007b22e) aid_visual_content_pane

0x139f,	// (0x0007b200) main_vradio_pane

0x60eb,	// (0x0007ff4c) main_vradio_pane_g1_ParamLimits

0x60eb,	// (0x0007ff4c) main_vradio_pane_g1

0xeeb6,	// (0x00088d17) main_vradio_pane_g2_ParamLimits

0xeeb6,	// (0x00088d17) main_vradio_pane_g2

0x0001,

0xf7a9,	// (0x0008960a) main_vradio_pane_g_ParamLimits

0xf7a9,	// (0x0008960a) main_vradio_pane_g

0x6104,	// (0x0007ff65) main_vradio_pane_t1_ParamLimits

0x6104,	// (0x0007ff65) main_vradio_pane_t1

0x6119,	// (0x0007ff7a) main_vradio_pane_t2_ParamLimits

0x6119,	// (0x0007ff7a) main_vradio_pane_t2

0xeec3,	// (0x00088d24) main_vradio_pane_t3_ParamLimits

0xeec3,	// (0x00088d24) main_vradio_pane_t3

0x0002,

0xf7ae,	// (0x0008960f) main_vradio_pane_t_ParamLimits

0xf7ae,	// (0x0008960f) main_vradio_pane_t

0x612e,	// (0x0007ff8f) vradio_rocker_control_pane_ParamLimits

0x612e,	// (0x0007ff8f) vradio_rocker_control_pane

0x6140,	// (0x0007ffa1) vradio_station_info_pane_ParamLimits

0x6140,	// (0x0007ffa1) vradio_station_info_pane

0xeed7,	// (0x00088d38) vradio_frequency_info_pane_ParamLimits

0xeed7,	// (0x00088d38) vradio_frequency_info_pane

0xe869,	// (0x000886ca) vradio_station_info_pane_g1

0xeee6,	// (0x00088d47) vradio_station_info_pane_t1_ParamLimits

0xeee6,	// (0x00088d47) vradio_station_info_pane_t1

0xef08,	// (0x00088d69) vradio_station_info_pane_t2_ParamLimits

0xef08,	// (0x00088d69) vradio_station_info_pane_t2

0x0001,

0x023e,	// (0x0007a09f) vradio_station_info_pane_t_ParamLimits

0x023e,	// (0x0007a09f) vradio_station_info_pane_t

0xef1a,	// (0x00088d7b) vradio_tuning_pane

0xef22,	// (0x00088d83) vradio_rocker_control_pane_g1

0xef2a,	// (0x00088d8b) vradio_rocker_control_pane_g2

0xef32,	// (0x00088d93) vradio_rocker_control_pane_g3

0xef3a,	// (0x00088d9b) vradio_rocker_control_pane_g4

0xef42,	// (0x00088da3) vradio_rocker_control_pane_g5

0x0004,

0x0243,	// (0x0007a0a4) vradio_rocker_control_pane_g

0x6152,	// (0x0007ffb3) vradio_frequency_info_pane_g1

0xef4a,	// (0x00088dab) vradio_frequency_info_pane_t1_ParamLimits

0xef4a,	// (0x00088dab) vradio_frequency_info_pane_t1

0x615c,	// (0x0007ffbd) vradio_tuning_pane_g1

0x6167,	// (0x0007ffc8) vradio_tuning_pane_t1

0xa67a,	// (0x000844db) area_side_right_pane_ParamLimits

0xa67a,	// (0x000844db) area_side_right_pane

0xcceb,	// (0x00086b4c) status_small_pane_g1

0xccf3,	// (0x00086b54) status_small_pane_g2

0xccfc,	// (0x00086b5d) status_small_pane_g3

0xcd05,	// (0x00086b66) status_small_pane_g4

0x0003,

0xf608,	// (0x00089469) status_small_pane_g

0xcd0e,	// (0x00086b6f) status_small_pane_t1

0x139f,	// (0x0007b200) main_video3_pane

0xef5e,	// (0x00088dbf) cams_zoom_vslider_pane

0xef66,	// (0x00088dc7) image3_wide_pane_ParamLimits

0xef66,	// (0x00088dc7) image3_wide_pane

0xef80,	// (0x00088de1) image3_wide_small_pane

0xef8c,	// (0x00088ded) main_video3_pane_g1_ParamLimits

0xef8c,	// (0x00088ded) main_video3_pane_g1

0xefa8,	// (0x00088e09) main_video3_pane_g2_ParamLimits

0xefa8,	// (0x00088e09) main_video3_pane_g2

0x0001,

0x024e,	// (0x0007a0af) main_video3_pane_g_ParamLimits

0x024e,	// (0x0007a0af) main_video3_pane_g

0xefc4,	// (0x00088e25) main_video3_pane_t1_ParamLimits

0xefc4,	// (0x00088e25) main_video3_pane_t1

0xefef,	// (0x00088e50) main_video3_pane_t2_ParamLimits

0xefef,	// (0x00088e50) main_video3_pane_t2

0xf01a,	// (0x00088e7b) main_video3_pane_t3_ParamLimits

0xf01a,	// (0x00088e7b) main_video3_pane_t3

0x0002,

0x0253,	// (0x0007a0b4) main_video3_pane_t_ParamLimits

0x0253,	// (0x0007a0b4) main_video3_pane_t

0xf047,	// (0x00088ea8) cams_zoom_vslider_pane_g1

0xf050,	// (0x00088eb1) cams_zoom_vslider_pane_g2

0x0001,

0x025a,	// (0x0007a0bb) cams_zoom_vslider_pane_g

0xf058,	// (0x00088eb9) small_slider_vertical_pane

0xe869,	// (0x000886ca) small_slider_vertical_pane_g1

0xe869,	// (0x000886ca) small_slider_vertical_pane_g2

0xf060,	// (0x00088ec1) small_slider_vertical_pane_g3

0x0002,

0x025f,	// (0x0007a0c0) small_slider_vertical_pane_g

0x139f,	// (0x0007b200) main_hwr_training_pane

0xf069,	// (0x00088eca) hwr_training_instruct_pane_ParamLimits

0xf069,	// (0x00088eca) hwr_training_instruct_pane

0x6176,	// (0x0007ffd7) hwr_training_navi_pane_ParamLimits

0x6176,	// (0x0007ffd7) hwr_training_navi_pane

0x6195,	// (0x0007fff6) hwr_training_write_pane_ParamLimits

0x6195,	// (0x0007fff6) hwr_training_write_pane

0x139f,	// (0x0007b200) bg_frame_shadow_pane

0xf0a0,	// (0x00088f01) hwr_training_write_pane_g1

0xf0a8,	// (0x00088f09) hwr_training_write_pane_g2

0xf0b0,	// (0x00088f11) hwr_training_write_pane_g3

0xf0b8,	// (0x00088f19) hwr_training_write_pane_g4

0xf0c0,	// (0x00088f21) hwr_training_write_pane_g5

0xf0c8,	// (0x00088f29) hwr_training_write_pane_g6

0xf0d0,	// (0x00088f31) hwr_training_write_pane_g7

0x0006,

0x0266,	// (0x0007a0c7) hwr_training_write_pane_g

0xe0e8,	// (0x00087f49) hwr_training_navi_pane_g1_ParamLimits

0xe0e8,	// (0x00087f49) hwr_training_navi_pane_g1

0xe0fa,	// (0x00087f5b) hwr_training_navi_pane_g2_ParamLimits

0xe0fa,	// (0x00087f5b) hwr_training_navi_pane_g2

0xe10c,	// (0x00087f6d) hwr_training_navi_pane_g3_ParamLimits

0xe10c,	// (0x00087f6d) hwr_training_navi_pane_g3

0xe11c,	// (0x00087f7d) hwr_training_navi_pane_g4_ParamLimits

0xe11c,	// (0x00087f7d) hwr_training_navi_pane_g4

0x0004,

0xf7b5,	// (0x00089616) hwr_training_navi_pane_g_ParamLimits

0xf7b5,	// (0x00089616) hwr_training_navi_pane_g

0xe129,	// (0x00087f8a) hwr_training_navi_pane_t1

0x61df,	// (0x00080040) list_single_hwr_training_instruct_pane_ParamLimits

0x61df,	// (0x00080040) list_single_hwr_training_instruct_pane

0x61fc,	// (0x0008005d) list_single_hwr_training_instruct_pane_t1

0xe7a9,	// (0x0008860a) bg_frame_shadow_pane_g1

0x620b,	// (0x0008006c) bg_frame_shadow_pane_g2

0x6213,	// (0x00080074) bg_frame_shadow_pane_g3

0x621b,	// (0x0008007c) bg_frame_shadow_pane_g4

0x6223,	// (0x00080084) bg_frame_shadow_pane_g5

0x622b,	// (0x0008008c) bg_frame_shadow_pane_g6

0x6233,	// (0x00080094) bg_frame_shadow_pane_g7

0xac12,	// (0x00084a73) bg_frame_shadow_pane_g8

0x0007,

0xf7c0,	// (0x00089621) bg_frame_shadow_pane_g

0x139f,	// (0x0007b200) main_video_tele_dialer_pane

0x623b,	// (0x0008009c) aid_size_cell_video_keypad_ParamLimits

0x623b,	// (0x0008009c) aid_size_cell_video_keypad

0x6255,	// (0x000800b6) grid_video_dialer_keypad_pane_ParamLimits

0x6255,	// (0x000800b6) grid_video_dialer_keypad_pane

0x62a1,	// (0x00080102) video_down_pane_cp_ParamLimits

0x62a1,	// (0x00080102) video_down_pane_cp

0x62d1,	// (0x00080132) cell_video_dialer_keypad_pane_ParamLimits

0x62d1,	// (0x00080132) cell_video_dialer_keypad_pane

0x62f3,	// (0x00080154) bg_button_pane_cp08_ParamLimits

0x62f3,	// (0x00080154) bg_button_pane_cp08

0x62ff,	// (0x00080160) cell_video_dialer_keypad_pane_g1_ParamLimits

0x62ff,	// (0x00080160) cell_video_dialer_keypad_pane_g1

0x5954,	// (0x0007f7b5) mup3_rocker2_pane_ParamLimits

0x5954,	// (0x0007f7b5) mup3_rocker2_pane

0xe869,	// (0x000886ca) mup3_rocker2_pane_g1

0x4474,	// (0x0007e2d5) main_dialer2_pane

0x139f,	// (0x0007b200) main_mp4_pane

0xe13f,	// (0x00087fa0) main_mp4_pane_g1_ParamLimits

0xe13f,	// (0x00087fa0) main_mp4_pane_g1

0xe13f,	// (0x00087fa0) main_mp4_pane_g2_ParamLimits

0xe13f,	// (0x00087fa0) main_mp4_pane_g2

0x633a,	// (0x0008019b) main_mp4_pane_g3_ParamLimits

0x633a,	// (0x0008019b) main_mp4_pane_g3

0xe14d,	// (0x00087fae) main_mp4_pane_g4_ParamLimits

0xe14d,	// (0x00087fae) main_mp4_pane_g4

0xe175,	// (0x00087fd6) main_mp4_pane_g5_ParamLimits

0xe175,	// (0x00087fd6) main_mp4_pane_g5

0x0005,

0xf7e0,	// (0x00089641) main_mp4_pane_g_ParamLimits

0xf7e0,	// (0x00089641) main_mp4_pane_g

0xe1c5,	// (0x00088026) main_mp4_pane_t1_ParamLimits

0xe1c5,	// (0x00088026) main_mp4_pane_t1

0xe221,	// (0x00088082) main_mp4_pane_t2_ParamLimits

0xe221,	// (0x00088082) main_mp4_pane_t2

0x6376,	// (0x000801d7) main_mp4_pane_t3_ParamLimits

0x6376,	// (0x000801d7) main_mp4_pane_t3

0xe273,	// (0x000880d4) main_mp4_pane_t4_ParamLimits

0xe273,	// (0x000880d4) main_mp4_pane_t4

0x0003,

0xf7ed,	// (0x0008964e) main_mp4_pane_t_ParamLimits

0xf7ed,	// (0x0008964e) main_mp4_pane_t

0xe2b7,	// (0x00088118) mp4_progress_pane_ParamLimits

0xe2b7,	// (0x00088118) mp4_progress_pane

0xe301,	// (0x00088162) mp4_rocker_pane_ParamLimits

0xe301,	// (0x00088162) mp4_rocker_pane

0x639e,	// (0x000801ff) mp4_progress_pane_t1

0x63b7,	// (0x00080218) mp4_progress_pane_t2

0x0001,

0xf7f6,	// (0x00089657) mp4_progress_pane_t

0x63d0,	// (0x00080231) mup_progress_pane_cp04

0xe869,	// (0x000886ca) mp4_rocker_pane_g1

0x63dc,	// (0x0008023d) aid_cell_size_keypad2_ParamLimits

0x63dc,	// (0x0008023d) aid_cell_size_keypad2

0x63f2,	// (0x00080253) dialer2_ne_pane_ParamLimits

0x63f2,	// (0x00080253) dialer2_ne_pane

0x640c,	// (0x0008026d) grid_dialer2_keypad_pane_ParamLimits

0x640c,	// (0x0008026d) grid_dialer2_keypad_pane

0xe64c,	// (0x000884ad) bg_popup_call_pane_cp07_ParamLimits

0xe64c,	// (0x000884ad) bg_popup_call_pane_cp07

0x642a,	// (0x0008028b) dialer2_ne_pane_t1_ParamLimits

0x642a,	// (0x0008028b) dialer2_ne_pane_t1

0x647b,	// (0x000802dc) cell_dialer2_keypad_pane_ParamLimits

0x647b,	// (0x000802dc) cell_dialer2_keypad_pane

0x649f,	// (0x00080300) bg_button_pane_pane_cp04_ParamLimits

0x649f,	// (0x00080300) bg_button_pane_pane_cp04

0x64ab,	// (0x0008030c) cell_dialer2_keypad_pane_g1_ParamLimits

0x64ab,	// (0x0008030c) cell_dialer2_keypad_pane_g1

0x24aa,	// (0x0007c30b) aid_placing_vt_set_content_ParamLimits

0x24aa,	// (0x0007c30b) aid_placing_vt_set_content

0x24d2,	// (0x0007c333) aid_placing_vt_set_title_ParamLimits

0x24d2,	// (0x0007c333) aid_placing_vt_set_title

0x139f,	// (0x0007b200) main_image3_pane

0x6571,	// (0x000803d2) area_side_right_pane_cp01_ParamLimits

0x6571,	// (0x000803d2) area_side_right_pane_cp01

0xe13f,	// (0x00087fa0) main_image3_pane_g1_ParamLimits

0xe13f,	// (0x00087fa0) main_image3_pane_g1

0x6588,	// (0x000803e9) main_image3_pane_g2_ParamLimits

0x6588,	// (0x000803e9) main_image3_pane_g2

0x65b0,	// (0x00080411) main_image3_pane_g3_ParamLimits

0x65b0,	// (0x00080411) main_image3_pane_g3

0x65da,	// (0x0008043b) main_image3_pane_g4_ParamLimits

0x65da,	// (0x0008043b) main_image3_pane_g4

0x0003,

0xf805,	// (0x00089666) main_image3_pane_g_ParamLimits

0xf805,	// (0x00089666) main_image3_pane_g

0x6604,	// (0x00080465) main_image3_pane_t1_ParamLimits

0x6604,	// (0x00080465) main_image3_pane_t1

0x665c,	// (0x000804bd) main_image3_pane_t2_ParamLimits

0x665c,	// (0x000804bd) main_image3_pane_t2

0x66ae,	// (0x0008050f) main_image3_pane_t3_ParamLimits

0x66ae,	// (0x0008050f) main_image3_pane_t3

0x0003,

0xf80e,	// (0x0008966f) main_image3_pane_t_ParamLimits

0xf80e,	// (0x0008966f) main_image3_pane_t

0xa6bc,	// (0x0008451d) grid_sctrl_middle_pane_cp01_ParamLimits

0xa6bc,	// (0x0008451d) grid_sctrl_middle_pane_cp01

0x6736,	// (0x00080597) cell_sctrl_middle_pane_cp01_ParamLimits

0x6736,	// (0x00080597) cell_sctrl_middle_pane_cp01

0x6753,	// (0x000805b4) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6753,	// (0x000805b4) cell_sctrl_middle_pane_cp01_g1

0x139f,	// (0x0007b200) main_call4_pane

0x6769,	// (0x000805ca) aid_size_button_call4_ParamLimits

0x6769,	// (0x000805ca) aid_size_button_call4

0x679a,	// (0x000805fb) call4_windows_pane_ParamLimits

0x679a,	// (0x000805fb) call4_windows_pane

0x67ba,	// (0x0008061b) grid_call4_button_pane_ParamLimits

0x67ba,	// (0x0008061b) grid_call4_button_pane

0x67e7,	// (0x00080648) call4_windows_conf_pane

0x67fc,	// (0x0008065d) popup_call4_audio_first_window_ParamLimits

0x67fc,	// (0x0008065d) popup_call4_audio_first_window

0x6848,	// (0x000806a9) popup_call4_audio_second_window_ParamLimits

0x6848,	// (0x000806a9) popup_call4_audio_second_window

0x685c,	// (0x000806bd) popup_call4_audio_wait_window_ParamLimits

0x685c,	// (0x000806bd) popup_call4_audio_wait_window

0x686a,	// (0x000806cb) cell_call4_button_pane_ParamLimits

0x686a,	// (0x000806cb) cell_call4_button_pane

0x6893,	// (0x000806f4) bg_button_pane_cp09_ParamLimits

0x6893,	// (0x000806f4) bg_button_pane_cp09

0x689f,	// (0x00080700) cell_call4_button_pane_g1_ParamLimits

0x689f,	// (0x00080700) cell_call4_button_pane_g1

0x68c5,	// (0x00080726) cell_call4_button_pane_t1_ParamLimits

0x68c5,	// (0x00080726) cell_call4_button_pane_t1

0x6929,	// (0x0008078a) popup_call4_audio_conf_window_ParamLimits

0x6929,	// (0x0008078a) popup_call4_audio_conf_window

0x59b4,	// (0x0007f815) mup3_progress_pane_t1_ParamLimits

0x59d3,	// (0x0007f834) mup3_progress_pane_t2_ParamLimits

0xeb7a,	// (0x000889db) mup3_progress_pane_t3_ParamLimits

0xf74a,	// (0x000895ab) mup3_progress_pane_t_ParamLimits

0xeb97,	// (0x000889f8) mup_progress_pane_cp03_ParamLimits

0x5fb6,	// (0x0007fe17) mup3_control_keys_pane_g4_copy1

0xe2e5,	// (0x00088146) mp4_rocker2_pane_ParamLimits

0xe2e5,	// (0x00088146) mp4_rocker2_pane

0x693d,	// (0x0008079e) mp4_rocker2_pane_g1

0x6945,	// (0x000807a6) mp4_rocker2_pane_g2

0xe353,	// (0x000881b4) mp4_rocker2_pane_g3

0xe35b,	// (0x000881bc) mp4_rocker2_pane_g4

0xe363,	// (0x000881c4) mp4_rocker2_pane_g5

0x0004,

0xf817,	// (0x00089678) mp4_rocker2_pane_g

0x139f,	// (0x0007b200) main_camera4_pane

0x139f,	// (0x0007b200) main_video4_pane

0x626f,	// (0x000800d0) main_video_tele_dialer_pane_t1_ParamLimits

0x626f,	// (0x000800d0) main_video_tele_dialer_pane_t1

0x6288,	// (0x000800e9) main_video_tele_dialer_pane_t2_ParamLimits

0x6288,	// (0x000800e9) main_video_tele_dialer_pane_t2

0x0001,

0xf7d1,	// (0x00089632) main_video_tele_dialer_pane_t_ParamLimits

0xf7d1,	// (0x00089632) main_video_tele_dialer_pane_t

0x6965,	// (0x000807c6) cam4_autofocus_pane_ParamLimits

0x6965,	// (0x000807c6) cam4_autofocus_pane

0x697b,	// (0x000807dc) cam4_image_uncrop_pane_ParamLimits

0x697b,	// (0x000807dc) cam4_image_uncrop_pane

0x6995,	// (0x000807f6) cam4_indicators_pane_ParamLimits

0x6995,	// (0x000807f6) cam4_indicators_pane

0x69c0,	// (0x00080821) main_camera4_pane_g1_ParamLimits

0x69c0,	// (0x00080821) main_camera4_pane_g1

0x69d2,	// (0x00080833) main_camera4_pane_g2_ParamLimits

0x69d2,	// (0x00080833) main_camera4_pane_g2

0x69e5,	// (0x00080846) main_camera4_pane_g3_ParamLimits

0x69e5,	// (0x00080846) main_camera4_pane_g3

0x69f8,	// (0x00080859) main_camera4_pane_g4_ParamLimits

0x69f8,	// (0x00080859) main_camera4_pane_g4

0x6a0b,	// (0x0008086c) main_camera4_pane_g5_ParamLimits

0x6a0b,	// (0x0008086c) main_camera4_pane_g5

0x0005,

0xf822,	// (0x00089683) main_camera4_pane_g_ParamLimits

0xf822,	// (0x00089683) main_camera4_pane_g

0x6a2f,	// (0x00080890) main_camera4_pane_t1_ParamLimits

0x6a2f,	// (0x00080890) main_camera4_pane_t1

0xeaff,	// (0x00088960) bg_tb_trans_pane_cp06

0xe38f,	// (0x000881f0) cam4_indicators_pane_g1

0xe3a0,	// (0x00088201) cam4_indicators_pane_g2

0x0002,

0xf83d,	// (0x0008969e) cam4_indicators_pane_g

0xe3be,	// (0x0008821f) cam4_indicators_pane_t1

0x6aa5,	// (0x00080906) main_video4_pane_g1_ParamLimits

0x6aa5,	// (0x00080906) main_video4_pane_g1

0x6ab4,	// (0x00080915) main_video4_pane_g2_ParamLimits

0x6ab4,	// (0x00080915) main_video4_pane_g2

0x6ac3,	// (0x00080924) main_video4_pane_g3_ParamLimits

0x6ac3,	// (0x00080924) main_video4_pane_g3

0x6ad2,	// (0x00080933) main_video4_pane_g4_ParamLimits

0x6ad2,	// (0x00080933) main_video4_pane_g4

0x0004,

0xf844,	// (0x000896a5) main_video4_pane_g_ParamLimits

0xf844,	// (0x000896a5) main_video4_pane_g

0x6af0,	// (0x00080951) vid4_indicators_pane_ParamLimits

0x6af0,	// (0x00080951) vid4_indicators_pane

0x6b20,	// (0x00080981) video4_image_uncrop_cif_pane_ParamLimits

0x6b20,	// (0x00080981) video4_image_uncrop_cif_pane

0x6b3a,	// (0x0008099b) video4_image_uncrop_nhd_pane_ParamLimits

0x6b3a,	// (0x0008099b) video4_image_uncrop_nhd_pane

0x697b,	// (0x000807dc) video4_image_uncrop_vga_pane_ParamLimits

0x697b,	// (0x000807dc) video4_image_uncrop_vga_pane

0xa6bc,	// (0x0008451d) bg_tb_trans_pane_cp07

0xe3e8,	// (0x00088249) vid4_indicators_pane_g1

0xe3fc,	// (0x0008825d) vid4_indicators_pane_g2

0xe410,	// (0x00088271) vid4_indicators_pane_g3

0x0004,

0xf84f,	// (0x000896b0) vid4_indicators_pane_g

0xe43d,	// (0x0008829e) vid4_indicators_pane_t1

0x6b4e,	// (0x000809af) cam4_autofocus_pane_g1

0x6b56,	// (0x000809b7) cam4_autofocus_pane_g2

0x6b5e,	// (0x000809bf) cam4_autofocus_pane_g3

0x0002,

0xf85a,	// (0x000896bb) cam4_autofocus_pane_g

0x6b66,	// (0x000809c7) cam4_autofocus_pane_g3_copy1

0x62b5,	// (0x00080116) video_down_pane_cp_t1

0x62c3,	// (0x00080124) video_down_pane_cp_t2

0x0001,

0xf7d6,	// (0x00089637) video_down_pane_cp_t

0xa6bc,	// (0x0008451d) popup_vitu2_window_ParamLimits

0xa6bc,	// (0x0008451d) popup_vitu2_window

0x6b6e,	// (0x000809cf) aid_size_cell2_itu2_ParamLimits

0x6b6e,	// (0x000809cf) aid_size_cell2_itu2

0x6b94,	// (0x000809f5) aid_size_cell_itu2_ParamLimits

0x6b94,	// (0x000809f5) aid_size_cell_itu2

0x6bf0,	// (0x00080a51) bg_popup_window_pane_cp09_ParamLimits

0x6bf0,	// (0x00080a51) bg_popup_window_pane_cp09

0x6bfe,	// (0x00080a5f) field_vitu2_entry_pane_ParamLimits

0x6bfe,	// (0x00080a5f) field_vitu2_entry_pane

0x6c24,	// (0x00080a85) grid_vitu2_function_pane_ParamLimits

0x6c24,	// (0x00080a85) grid_vitu2_function_pane

0x6c75,	// (0x00080ad6) grid_vitu2_itu_pane_ParamLimits

0x6c75,	// (0x00080ad6) grid_vitu2_itu_pane

0x6d06,	// (0x00080b67) cell_vitu2_itu_pane_ParamLimits

0x6d06,	// (0x00080b67) cell_vitu2_itu_pane

0x6d2a,	// (0x00080b8b) cell_vitu2_function_pane_ParamLimits

0x6d2a,	// (0x00080b8b) cell_vitu2_function_pane

0x6d69,	// (0x00080bca) bg_popup_call_pane_cp08_ParamLimits

0x6d69,	// (0x00080bca) bg_popup_call_pane_cp08

0x6d82,	// (0x00080be3) field_vitu2_entry_pane_g1

0x6d8e,	// (0x00080bef) field_vitu2_entry_pane_g2

0x0002,

0xf861,	// (0x000896c2) field_vitu2_entry_pane_g

0x0ab6,	// (0x0007a917) field_vitu2_entry_pane_t1_ParamLimits

0x0ab6,	// (0x0007a917) field_vitu2_entry_pane_t1

0xcf08,	// (0x00086d69) field_vitu2_entry_pane_t2_ParamLimits

0xcf08,	// (0x00086d69) field_vitu2_entry_pane_t2

0x0001,

0xf868,	// (0x000896c9) field_vitu2_entry_pane_t_ParamLimits

0xf868,	// (0x000896c9) field_vitu2_entry_pane_t

0x6db0,	// (0x00080c11) bg_button_pane_cp010_ParamLimits

0x6db0,	// (0x00080c11) bg_button_pane_cp010

0x6dbe,	// (0x00080c1f) cell_vitu2_itu_pane_g1

0x6ddc,	// (0x00080c3d) cell_vitu2_itu_pane_t1_ParamLimits

0x6ddc,	// (0x00080c3d) cell_vitu2_itu_pane_t1

0x0ae7,	// (0x0007a948) cell_vitu2_itu_pane_t2_ParamLimits

0x0ae7,	// (0x0007a948) cell_vitu2_itu_pane_t2

0x0002,

0xf872,	// (0x000896d3) cell_vitu2_itu_pane_t_ParamLimits

0xf872,	// (0x000896d3) cell_vitu2_itu_pane_t

0xa6bc,	// (0x0008451d) bg_button_pane_cp011

0x6e42,	// (0x00080ca3) cell_vitu2_function_pane_g1

0x139f,	// (0x0007b200) main_myfav_hc_pane

0x66fe,	// (0x0008055f) popup_image3_note_pane_ParamLimits

0x66fe,	// (0x0008055f) popup_image3_note_pane

0x671a,	// (0x0008057b) popup_image3_tool_bar_pane_ParamLimits

0x671a,	// (0x0008057b) popup_image3_tool_bar_pane

0x0b6b,	// (0x0007a9cc) cell_vitu2_itu_pane_t3_ParamLimits

0x0b6b,	// (0x0007a9cc) cell_vitu2_itu_pane_t3

0x139f,	// (0x0007b200) bg_popup_trans_pane

0x6e56,	// (0x00080cb7) grid_image3_tool_bar_pane

0x6e60,	// (0x00080cc1) bg_popup_trans_pane_g1

0xb0d1,	// (0x00084f32) bg_popup_trans_pane_g2

0x6e68,	// (0x00080cc9) bg_popup_trans_pane_g3

0x6e70,	// (0x00080cd1) bg_popup_trans_pane_g4

0x6e78,	// (0x00080cd9) bg_popup_trans_pane_g5

0x6e80,	// (0x00080ce1) bg_popup_trans_pane_g6

0x6e88,	// (0x00080ce9) bg_popup_trans_pane_g7

0x6e90,	// (0x00080cf1) bg_popup_trans_pane_g8

0xb0b1,	// (0x00084f12) bg_popup_trans_pane_g9

0x0008,

0xf879,	// (0x000896da) bg_popup_trans_pane_g

0x6e98,	// (0x00080cf9) cell_image3_tool_bar_pane_ParamLimits

0x6e98,	// (0x00080cf9) cell_image3_tool_bar_pane

0xe869,	// (0x000886ca) cell_image3_tool_bar_pane_g1

0x139f,	// (0x0007b200) bg_popup_trans_pane_cp1

0x6eac,	// (0x00080d0d) popup_image3_note_pane_t1

0x6eba,	// (0x00080d1b) popup_image3_note_pane_t2

0x6ec8,	// (0x00080d29) popup_image3_note_pane_t3

0x0002,

0xf88c,	// (0x000896ed) popup_image3_note_pane_t

0x6ed6,	// (0x00080d37) popup_image3_note_pane_t3_copy1

0x6ee4,	// (0x00080d45) bg_myfav_hc_instruction_pane_ParamLimits

0x6ee4,	// (0x00080d45) bg_myfav_hc_instruction_pane

0x6efa,	// (0x00080d5b) cell_myfav_contact_pane_ParamLimits

0x6efa,	// (0x00080d5b) cell_myfav_contact_pane

0x6f16,	// (0x00080d77) cell_myfav_contact_pane_cp1_ParamLimits

0x6f16,	// (0x00080d77) cell_myfav_contact_pane_cp1

0x6f2e,	// (0x00080d8f) cell_myfav_contact_pane_cp2_ParamLimits

0x6f2e,	// (0x00080d8f) cell_myfav_contact_pane_cp2

0x6f46,	// (0x00080da7) cell_myfav_contact_pane_cp3_ParamLimits

0x6f46,	// (0x00080da7) cell_myfav_contact_pane_cp3

0x6f5d,	// (0x00080dbe) cell_myfav_contact_pane_cp4_ParamLimits

0x6f5d,	// (0x00080dbe) cell_myfav_contact_pane_cp4

0x6f75,	// (0x00080dd6) cell_myfav_contact_pane_cp5_ParamLimits

0x6f75,	// (0x00080dd6) cell_myfav_contact_pane_cp5

0x6f89,	// (0x00080dea) cell_myfav_contact_pane_cp6_ParamLimits

0x6f89,	// (0x00080dea) cell_myfav_contact_pane_cp6

0x6f9f,	// (0x00080e00) cell_myfav_contact_pane_cp7_ParamLimits

0x6f9f,	// (0x00080e00) cell_myfav_contact_pane_cp7

0x6fb9,	// (0x00080e1a) listscroll_gen_pane_cp05

0x6fc2,	// (0x00080e23) main_myfav_hc_pane_g1_ParamLimits

0x6fc2,	// (0x00080e23) main_myfav_hc_pane_g1

0x6fdc,	// (0x00080e3d) main_myfav_hc_pane_g2_ParamLimits

0x6fdc,	// (0x00080e3d) main_myfav_hc_pane_g2

0x0002,

0xf893,	// (0x000896f4) main_myfav_hc_pane_g_ParamLimits

0xf893,	// (0x000896f4) main_myfav_hc_pane_g

0x700e,	// (0x00080e6f) main_myfav_hc_pane_t1_ParamLimits

0x700e,	// (0x00080e6f) main_myfav_hc_pane_t1

0x7025,	// (0x00080e86) main_myfav_hc_pane_t2_ParamLimits

0x7025,	// (0x00080e86) main_myfav_hc_pane_t2

0x7037,	// (0x00080e98) main_myfav_hc_pane_t3_ParamLimits

0x7037,	// (0x00080e98) main_myfav_hc_pane_t3

0x7049,	// (0x00080eaa) main_myfav_hc_pane_t4_ParamLimits

0x7049,	// (0x00080eaa) main_myfav_hc_pane_t4

0x0004,

0xf89a,	// (0x000896fb) main_myfav_hc_pane_t_ParamLimits

0xf89a,	// (0x000896fb) main_myfav_hc_pane_t

0xe869,	// (0x000886ca) bg_myfav_hc_instruction_pane_g1

0x7071,	// (0x00080ed2) cell_myfav_contact_pane_g1_ParamLimits

0x7071,	// (0x00080ed2) cell_myfav_contact_pane_g1

0x7071,	// (0x00080ed2) cell_myfav_contact_pane_g2_ParamLimits

0x7071,	// (0x00080ed2) cell_myfav_contact_pane_g2

0x707d,	// (0x00080ede) cell_myfav_contact_pane_g3_ParamLimits

0x707d,	// (0x00080ede) cell_myfav_contact_pane_g3

0xeb64,	// (0x000889c5) cell_myfav_contact_pane_g4_ParamLimits

0xeb64,	// (0x000889c5) cell_myfav_contact_pane_g4

0x708a,	// (0x00080eeb) cell_myfav_contact_pane_g5_ParamLimits

0x708a,	// (0x00080eeb) cell_myfav_contact_pane_g5

0x0004,

0xf8a5,	// (0x00089706) cell_myfav_contact_pane_g_ParamLimits

0xf8a5,	// (0x00089706) cell_myfav_contact_pane_g

0x6ff6,	// (0x00080e57) main_myfav_hc_pane_g3_ParamLimits

0x6ff6,	// (0x00080e57) main_myfav_hc_pane_g3

0x14ef,	// (0x0007b350) popup_adpt_find_window

0x7096,	// (0x00080ef7) afind_page_pane_ParamLimits

0x7096,	// (0x00080ef7) afind_page_pane

0x70ab,	// (0x00080f0c) aid_size_cell_afind_ParamLimits

0x70ab,	// (0x00080f0c) aid_size_cell_afind

0x70c9,	// (0x00080f2a) bg_popup_sub_pane_cp09_ParamLimits

0x70c9,	// (0x00080f2a) bg_popup_sub_pane_cp09

0x70d6,	// (0x00080f37) find_pane_cp01_ParamLimits

0x70d6,	// (0x00080f37) find_pane_cp01

0x70e3,	// (0x00080f44) grid_afind_control_pane_ParamLimits

0x70e3,	// (0x00080f44) grid_afind_control_pane

0x70f7,	// (0x00080f58) grid_afind_pane_ParamLimits

0x70f7,	// (0x00080f58) grid_afind_pane

0x7119,	// (0x00080f7a) cell_afind_pane_ParamLimits

0x7119,	// (0x00080f7a) cell_afind_pane

0xe869,	// (0x000886ca) afind_page_pane_g1

0x717a,	// (0x00080fdb) afind_page_pane_g2

0x7183,	// (0x00080fe4) afind_page_pane_g3

0x0002,

0xf8b0,	// (0x00089711) afind_page_pane_g

0x718c,	// (0x00080fed) afind_page_pane_t1

0x71ac,	// (0x0008100d) cell_afind_grid_control_pane_ParamLimits

0x71ac,	// (0x0008100d) cell_afind_grid_control_pane

0x649f,	// (0x00080300) bg_button_pane_cp69_ParamLimits

0x649f,	// (0x00080300) bg_button_pane_cp69

0x71bb,	// (0x0008101c) cell_afind_pane_g1_ParamLimits

0x71bb,	// (0x0008101c) cell_afind_pane_g1

0x71c8,	// (0x00081029) cell_afind_pane_t1_ParamLimits

0x71c8,	// (0x00081029) cell_afind_pane_t1

0xae0c,	// (0x00084c6d) bg_button_pane_cp72

0x71da,	// (0x0008103b) cell_afind_grid_control_pane_g1

0x3f37,	// (0x0007dd98) aid_image_placing_area_ParamLimits

0x3f37,	// (0x0007dd98) aid_image_placing_area

0xee69,	// (0x00088cca) field_vitu_entry_pane_g1_ParamLimits

0xee69,	// (0x00088cca) field_vitu_entry_pane_g1

0xee75,	// (0x00088cd6) field_vitu_entry_pane_g2_ParamLimits

0xee75,	// (0x00088cd6) field_vitu_entry_pane_g2

0x0001,

0x0221,	// (0x0007a082) field_vitu_entry_pane_g_ParamLimits

0x0221,	// (0x0007a082) field_vitu_entry_pane_g

0x6083,	// (0x0007fee4) cell_vitu_itu_pane_g1_ParamLimits

0x60c5,	// (0x0007ff26) cell_vitu_itu_pane_t3_ParamLimits

0x60c5,	// (0x0007ff26) cell_vitu_itu_pane_t3

0x639e,	// (0x000801ff) mp4_progress_pane_t1_ParamLimits

0x63b7,	// (0x00080218) mp4_progress_pane_t2_ParamLimits

0xf7f6,	// (0x00089657) mp4_progress_pane_t_ParamLimits

0x63d0,	// (0x00080231) mup_progress_pane_cp04_ParamLimits

0x705d,	// (0x00080ebe) main_myfav_hc_pane_t5_ParamLimits

0x705d,	// (0x00080ebe) main_myfav_hc_pane_t5

0xa66a,	// (0x000844cb) aid_zoom_text_primary

0x14ef,	// (0x0007b350) popup_adpt_find_window_ParamLimits

0xa6bc,	// (0x0008451d) main_cam_set_pane

0x69ac,	// (0x0008080d) cam4_zoom_pane_ParamLimits

0x69ac,	// (0x0008080d) cam4_zoom_pane

0x71e3,	// (0x00081044) main_cam_set_pane_g1_ParamLimits

0x71e3,	// (0x00081044) main_cam_set_pane_g1

0x71f1,	// (0x00081052) main_cam_set_pane_g2_ParamLimits

0x71f1,	// (0x00081052) main_cam_set_pane_g2

0x0001,

0xf8b7,	// (0x00089718) main_cam_set_pane_g_ParamLimits

0xf8b7,	// (0x00089718) main_cam_set_pane_g

0x7212,	// (0x00081073) main_cam_set_pane_t1_ParamLimits

0x7212,	// (0x00081073) main_cam_set_pane_t1

0x722d,	// (0x0008108e) main_cset_listscroll_pane_ParamLimits

0x722d,	// (0x0008108e) main_cset_listscroll_pane

0x724d,	// (0x000810ae) main_cset_slider_pane_ParamLimits

0x724d,	// (0x000810ae) main_cset_slider_pane

0x727b,	// (0x000810dc) main_cset_list_pane_ParamLimits

0x727b,	// (0x000810dc) main_cset_list_pane

0x728b,	// (0x000810ec) scroll_pane_cp028

0x7294,	// (0x000810f5) aid_area_touch_slider

0x72b0,	// (0x00081111) cset_slider_pane

0x72da,	// (0x0008113b) main_cset_slider_pane_g1

0x72ef,	// (0x00081150) main_cset_slider_pane_g2

0x0011,

0xf8bc,	// (0x0008971d) main_cset_slider_pane_g

0x73db,	// (0x0008123c) main_cset_slider_pane_t1

0x7409,	// (0x0008126a) main_cset_slider_pane_t2

0x7423,	// (0x00081284) main_cset_slider_pane_t3

0x743d,	// (0x0008129e) main_cset_slider_pane_t4

0x7457,	// (0x000812b8) main_cset_slider_pane_t5

0x7473,	// (0x000812d4) main_cset_slider_pane_t6

0x7488,	// (0x000812e9) main_cset_slider_pane_t7

0x000e,

0xf8e1,	// (0x00089742) main_cset_slider_pane_t

0x75fe,	// (0x0008145f) cset_list_set_pane_ParamLimits

0x75fe,	// (0x0008145f) cset_list_set_pane

0x7612,	// (0x00081473) aid_position_infowindow_above

0x761a,	// (0x0008147b) aid_position_infowindow_below

0x7622,	// (0x00081483) cset_list_set_pane_g1_ParamLimits

0x7622,	// (0x00081483) cset_list_set_pane_g1

0x0bc3,	// (0x0007aa24) cset_list_set_pane_g3_ParamLimits

0x0bc3,	// (0x0007aa24) cset_list_set_pane_g3

0x0001,

0xf900,	// (0x00089761) cset_list_set_pane_g_ParamLimits

0xf900,	// (0x00089761) cset_list_set_pane_g

0x0bd2,	// (0x0007aa33) cset_list_set_pane_t1_ParamLimits

0x0bd2,	// (0x0007aa33) cset_list_set_pane_t1

0xa6bc,	// (0x0008451d) list_highlight_pane_cp021_ParamLimits

0xa6bc,	// (0x0008451d) list_highlight_pane_cp021

0xb9db,	// (0x0008583c) cset_slider_pane_g1

0xb9ed,	// (0x0008584e) cset_slider_pane_g2

0xb9e4,	// (0x00085845) cset_slider_pane_g3

0x0002,

0xf905,	// (0x00089766) cset_slider_pane_g

0xe454,	// (0x000882b5) aid_area_touch_cam4_zoom

0xe45c,	// (0x000882bd) cam4_zoom_cont_pane

0xe464,	// (0x000882c5) cam4_zoom_pane_g1

0xe46c,	// (0x000882cd) cam4_zoom_pane_g2

0x762e,	// (0x0008148f) cam4_zoom_pane_g3

0x0002,

0xf90c,	// (0x0008976d) cam4_zoom_pane_g

0x7636,	// (0x00081497) cam4_zoom_cont_pane_g1

0x763f,	// (0x000814a0) cam4_zoom_cont_pane_g2

0x7648,	// (0x000814a9) cam4_zoom_cont_pane_g3

0x0002,

0xf913,	// (0x00089774) cam4_zoom_cont_pane_g

0x6787,	// (0x000805e8) call4_image_pane_ParamLimits

0x6787,	// (0x000805e8) call4_image_pane

0x67e7,	// (0x00080648) call4_windows_conf_pane_ParamLimits

0x6826,	// (0x00080687) popup_call4_audio_in_window_ParamLimits

0x6826,	// (0x00080687) popup_call4_audio_in_window

0x139f,	// (0x0007b200) bg_popup_call2_act_pane_cp02

0x6921,	// (0x00080782) call4_list_conf_pane

0xe869,	// (0x000886ca) call4_image_pane_g1

0xe869,	// (0x000886ca) call4_image_pane_g2

0x0001,

0x00e7,	// (0x00079f48) call4_image_pane_g

0x7651,	// (0x000814b2) list_single_graphic_popup_conf4_pane_ParamLimits

0x7651,	// (0x000814b2) list_single_graphic_popup_conf4_pane

0x139f,	// (0x0007b200) list_highlight_pane_cp022

0x7664,	// (0x000814c5) list_single_graphic_popup_conf4_pane_g1

0xb6ac,	// (0x0008550d) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf91a,	// (0x0008977b) list_single_graphic_popup_conf4_pane_g

0x766c,	// (0x000814cd) list_single_graphic_popup_conf4_pane_t1

0x25f6,	// (0x0007c457) popup_vtel_slider_window_ParamLimits

0x25f6,	// (0x0007c457) popup_vtel_slider_window

0x6469,	// (0x000802ca) dialer2_ne_pane_t2_ParamLimits

0x6469,	// (0x000802ca) dialer2_ne_pane_t2

0x0001,

0xf7fb,	// (0x0008965c) dialer2_ne_pane_t_ParamLimits

0xf7fb,	// (0x0008965c) dialer2_ne_pane_t

0xe64c,	// (0x000884ad) bg_popup_sub_pane_cp010_ParamLimits

0xe64c,	// (0x000884ad) bg_popup_sub_pane_cp010

0x7682,	// (0x000814e3) popup_vtel_slider_window_g1_ParamLimits

0x7682,	// (0x000814e3) popup_vtel_slider_window_g1

0x7695,	// (0x000814f6) popup_vtel_slider_window_g2_ParamLimits

0x7695,	// (0x000814f6) popup_vtel_slider_window_g2

0x0003,

0xf91f,	// (0x00089780) popup_vtel_slider_window_g_ParamLimits

0xf91f,	// (0x00089780) popup_vtel_slider_window_g

0x76eb,	// (0x0008154c) vtel_slider_pane_ParamLimits

0x76eb,	// (0x0008154c) vtel_slider_pane

0x770d,	// (0x0008156e) vtel_slider_pane_g1_ParamLimits

0x770d,	// (0x0008156e) vtel_slider_pane_g1

0x7721,	// (0x00081582) vtel_slider_pane_g2_ParamLimits

0x7721,	// (0x00081582) vtel_slider_pane_g2

0x7739,	// (0x0008159a) vtel_slider_pane_g3_ParamLimits

0x7739,	// (0x0008159a) vtel_slider_pane_g3

0x770d,	// (0x0008156e) vtel_slider_pane_g4_ParamLimits

0x770d,	// (0x0008156e) vtel_slider_pane_g4

0x774f,	// (0x000815b0) vtel_slider_pane_g5_ParamLimits

0x774f,	// (0x000815b0) vtel_slider_pane_g5

0x0004,

0xf928,	// (0x00089789) vtel_slider_pane_g_ParamLimits

0xf928,	// (0x00089789) vtel_slider_pane_g

0x139f,	// (0x0007b200) main_gallery2_pane

0x6bc0,	// (0x00080a21) aid_size_row_itut2_dropdow_list_ParamLimits

0x6bc0,	// (0x00080a21) aid_size_row_itut2_dropdow_list

0x6c4c,	// (0x00080aad) grid_vitu2_function_top_pane_ParamLimits

0x6c4c,	// (0x00080aad) grid_vitu2_function_top_pane

0x6cb1,	// (0x00080b12) popup_vitu2_dropdown_list_window_ParamLimits

0x6cb1,	// (0x00080b12) popup_vitu2_dropdown_list_window

0x6cda,	// (0x00080b3b) popup_vitu2_match_list_window

0x7765,	// (0x000815c6) cell_vitu2_function_top_pane_ParamLimits

0x7765,	// (0x000815c6) cell_vitu2_function_top_pane

0x7783,	// (0x000815e4) cell_vitu2_function_top_pane_cp01_ParamLimits

0x7783,	// (0x000815e4) cell_vitu2_function_top_pane_cp01

0x77a1,	// (0x00081602) cell_vitu2_function_top_wide_pane_ParamLimits

0x77a1,	// (0x00081602) cell_vitu2_function_top_wide_pane

0xa6bc,	// (0x0008451d) bg_button_pane_cp012

0x77bf,	// (0x00081620) cell_vitu2_function_top_pane_g1

0xe474,	// (0x000882d5) bg_button_pane_cp013_ParamLimits

0xe474,	// (0x000882d5) bg_button_pane_cp013

0x77d3,	// (0x00081634) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x77d3,	// (0x00081634) cell_vitu2_function_top_wide_pane_g1

0xa6bc,	// (0x0008451d) bg_popup_sub_pane_cp20

0x77eb,	// (0x0008164c) list_vitu2_match_list_pane

0x6e60,	// (0x00080cc1) bg_popup_sub_pane_cp20_g1

0x6e68,	// (0x00080cc9) bg_popup_sub_pane_cp20_g2

0xb0d1,	// (0x00084f32) bg_popup_sub_pane_cp20_g3

0x6e70,	// (0x00080cd1) bg_popup_sub_pane_cp20_g4

0xb0b1,	// (0x00084f12) bg_popup_sub_pane_cp20_g5

0x7809,	// (0x0008166a) bg_popup_sub_pane_cp20_g6

0x6e80,	// (0x00080ce1) bg_popup_sub_pane_cp20_g7

0x6e88,	// (0x00080ce9) bg_popup_sub_pane_cp20_g8

0x6e90,	// (0x00080cf1) bg_popup_sub_pane_cp20_g9

0x0008,

0xf933,	// (0x00089794) bg_popup_sub_pane_cp20_g

0xe490,	// (0x000882f1) list_vitu2_match_list_item_pane_ParamLimits

0xe490,	// (0x000882f1) list_vitu2_match_list_item_pane

0xe4a2,	// (0x00088303) list_vitu2_match_list_item_pane_t1

0x139f,	// (0x0007b200) bg_popup_sub_pane_cp21

0xb542,	// (0x000853a3) grid_vitu2_dropdown_list_pane

0x7811,	// (0x00081672) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x7811,	// (0x00081672) cell_vitu2_dropdown_list_char_pane

0x7832,	// (0x00081693) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x7832,	// (0x00081693) cell_vitu2_dropdown_list_ctrl_pane

0x785e,	// (0x000816bf) cell_vitu2_dropdown_list_char_pane_g1

0x7867,	// (0x000816c8) cell_vitu2_dropdown_list_char_pane_g2

0x7870,	// (0x000816d1) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xf950,	// (0x000897b1) cell_vitu2_dropdown_list_char_pane_g

0x7879,	// (0x000816da) cell_vitu2_dropdown_list_char_pane_t1

0x7887,	// (0x000816e8) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7887,	// (0x000816e8) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7897,	// (0x000816f8) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7897,	// (0x000816f8) cell_vitu2_dropdown_list_ctrl_pane_g2

0x78a8,	// (0x00081709) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x78a8,	// (0x00081709) cell_vitu2_dropdown_list_ctrl_pane_g3

0x78b8,	// (0x00081719) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x78b8,	// (0x00081719) cell_vitu2_dropdown_list_ctrl_pane_g4

0xeaff,	// (0x00088960) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xeaff,	// (0x00088960) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xf957,	// (0x000897b8) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xf957,	// (0x000897b8) cell_vitu2_dropdown_list_ctrl_pane_g

0x78d4,	// (0x00081735) aid_size_cell_gallery2_ParamLimits

0x78d4,	// (0x00081735) aid_size_cell_gallery2

0x78ea,	// (0x0008174b) grid_gallery2_pane_ParamLimits

0x78ea,	// (0x0008174b) grid_gallery2_pane

0x78fe,	// (0x0008175f) scroll_pane_cp029_ParamLimits

0x78fe,	// (0x0008175f) scroll_pane_cp029

0x790a,	// (0x0008176b) cell_gallery2_pane_ParamLimits

0x790a,	// (0x0008176b) cell_gallery2_pane

0x7940,	// (0x000817a1) cell_gallery2_pane_g2

0x794a,	// (0x000817ab) cell_gallery2_pane_g3

0x7952,	// (0x000817b3) cell_gallery2_pane_g4

0x795a,	// (0x000817bb) cell_gallery2_pane_g5

0xb885,	// (0x000856e6) grid_highlight_pane_cp10

0x6cda,	// (0x00080b3b) popup_vitu2_match_list_window_ParamLimits

0x6cef,	// (0x00080b50) popup_vitu2_query_window_ParamLimits

0x6cef,	// (0x00080b50) popup_vitu2_query_window

0x139f,	// (0x0007b200) bg_vitu2_candi_button_pane

0x785e,	// (0x000816bf) cell_vitu2_dropdown_list_char_pane_g1_copy1

0x7867,	// (0x000816c8) cell_vitu2_dropdown_list_char_pane_g2_copy1

0x7870,	// (0x000816d1) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x0c1c,	// (0x0007aa7d) bg_button_pane_cp015

0x7962,	// (0x000817c3) bg_button_pane_cp016

0x7975,	// (0x000817d6) bg_button_pane_cp017

0xcd24,	// (0x00086b85) bg_popup_sub_pane_cp22

0x7999,	// (0x000817fa) popup_vitu2_query_window_g1

0x79a5,	// (0x00081806) popup_vitu2_query_window_g2

0x0002,

0xf962,	// (0x000897c3) popup_vitu2_query_window_g

0x0c5d,	// (0x0007aabe) popup_vitu2_query_window_t1_ParamLimits

0x0c5d,	// (0x0007aabe) popup_vitu2_query_window_t1

0x0c92,	// (0x0007aaf3) popup_vitu2_query_window_t2_ParamLimits

0x0c92,	// (0x0007aaf3) popup_vitu2_query_window_t2

0x0ca4,	// (0x0007ab05) popup_vitu2_query_window_t3_ParamLimits

0x0ca4,	// (0x0007ab05) popup_vitu2_query_window_t3

0x79b8,	// (0x00081819) popup_vitu2_query_window_t4_ParamLimits

0x79b8,	// (0x00081819) popup_vitu2_query_window_t4

0x79d9,	// (0x0008183a) popup_vitu2_query_window_t5_ParamLimits

0x79d9,	// (0x0008183a) popup_vitu2_query_window_t5

0x0006,

0xf969,	// (0x000897ca) popup_vitu2_query_window_t_ParamLimits

0xf969,	// (0x000897ca) popup_vitu2_query_window_t

0x7273,	// (0x000810d4) main_cset_text_pane

0x7294,	// (0x000810f5) aid_area_touch_slider_ParamLimits

0x72b0,	// (0x00081111) cset_slider_pane_ParamLimits

0x72da,	// (0x0008113b) main_cset_slider_pane_g1_ParamLimits

0x72ef,	// (0x00081150) main_cset_slider_pane_g2_ParamLimits

0x7304,	// (0x00081165) main_cset_slider_pane_g3_ParamLimits

0x7304,	// (0x00081165) main_cset_slider_pane_g3

0x7310,	// (0x00081171) main_cset_slider_pane_g4_ParamLimits

0x7310,	// (0x00081171) main_cset_slider_pane_g4

0x731f,	// (0x00081180) main_cset_slider_pane_g5_ParamLimits

0x731f,	// (0x00081180) main_cset_slider_pane_g5

0x732b,	// (0x0008118c) main_cset_slider_pane_g6_ParamLimits

0x732b,	// (0x0008118c) main_cset_slider_pane_g6

0xf8bc,	// (0x0008971d) main_cset_slider_pane_g_ParamLimits

0x73db,	// (0x0008123c) main_cset_slider_pane_t1_ParamLimits

0x7409,	// (0x0008126a) main_cset_slider_pane_t2_ParamLimits

0x7423,	// (0x00081284) main_cset_slider_pane_t3_ParamLimits

0x743d,	// (0x0008129e) main_cset_slider_pane_t4_ParamLimits

0x7457,	// (0x000812b8) main_cset_slider_pane_t5_ParamLimits

0x7473,	// (0x000812d4) main_cset_slider_pane_t6_ParamLimits

0x7488,	// (0x000812e9) main_cset_slider_pane_t7_ParamLimits

0x74b2,	// (0x00081313) main_cset_slider_pane_t8_ParamLimits

0x74b2,	// (0x00081313) main_cset_slider_pane_t8

0x74da,	// (0x0008133b) main_cset_slider_pane_t9_ParamLimits

0x74da,	// (0x0008133b) main_cset_slider_pane_t9

0x7502,	// (0x00081363) main_cset_slider_pane_t10_ParamLimits

0x7502,	// (0x00081363) main_cset_slider_pane_t10

0x752a,	// (0x0008138b) main_cset_slider_pane_t11_ParamLimits

0x752a,	// (0x0008138b) main_cset_slider_pane_t11

0x7552,	// (0x000813b3) main_cset_slider_pane_t12_ParamLimits

0x7552,	// (0x000813b3) main_cset_slider_pane_t12

0x756f,	// (0x000813d0) main_cset_slider_pane_t13_ParamLimits

0x756f,	// (0x000813d0) main_cset_slider_pane_t13

0xf8e1,	// (0x00089742) main_cset_slider_pane_t_ParamLimits

0x139f,	// (0x0007b200) bg_popup_sub_pane_cp011

0x79fa,	// (0x0008185b) main_cset_text_pane_g1

0x7a02,	// (0x00081863) main_cset_text_pane_t1

0x7a10,	// (0x00081871) main_cset_text_pane_t2

0x7a1e,	// (0x0008187f) main_cset_text_pane_t3

0x7a2c,	// (0x0008188d) main_cset_text_pane_t4

0x7a3a,	// (0x0008189b) main_cset_text_pane_t5

0x7a48,	// (0x000818a9) main_cset_text_pane_t6

0x7a56,	// (0x000818b7) main_cset_text_pane_t7

0x0006,

0xf978,	// (0x000897d9) main_cset_text_pane_t

0x139f,	// (0x0007b200) main_cam4_burst_pane

0x139f,	// (0x0007b200) main_cam5_pane

0x719a,	// (0x00080ffb) bg_button_pane_cp019

0x71a3,	// (0x00081004) bg_button_pane_cp020

0x733f,	// (0x000811a0) main_cset_slider_pane_g7_ParamLimits

0x733f,	// (0x000811a0) main_cset_slider_pane_g7

0x734b,	// (0x000811ac) main_cset_slider_pane_g8_ParamLimits

0x734b,	// (0x000811ac) main_cset_slider_pane_g8

0x7357,	// (0x000811b8) main_cset_slider_pane_g9_ParamLimits

0x7357,	// (0x000811b8) main_cset_slider_pane_g9

0x7363,	// (0x000811c4) main_cset_slider_pane_g10_ParamLimits

0x7363,	// (0x000811c4) main_cset_slider_pane_g10

0x736f,	// (0x000811d0) main_cset_slider_pane_g11_ParamLimits

0x736f,	// (0x000811d0) main_cset_slider_pane_g11

0x737b,	// (0x000811dc) main_cset_slider_pane_g12_ParamLimits

0x737b,	// (0x000811dc) main_cset_slider_pane_g12

0x7387,	// (0x000811e8) main_cset_slider_pane_g13_ParamLimits

0x7387,	// (0x000811e8) main_cset_slider_pane_g13

0x7393,	// (0x000811f4) main_cset_slider_pane_g14_ParamLimits

0x7393,	// (0x000811f4) main_cset_slider_pane_g14

0x739f,	// (0x00081200) main_cset_slider_pane_g15_ParamLimits

0x739f,	// (0x00081200) main_cset_slider_pane_g15

0x758c,	// (0x000813ed) main_cset_slider_pane_t14_ParamLimits

0x758c,	// (0x000813ed) main_cset_slider_pane_t14

0x75c5,	// (0x00081426) main_cset_slider_pane_t15_ParamLimits

0x75c5,	// (0x00081426) main_cset_slider_pane_t15

0x7a64,	// (0x000818c5) aid_cam4_burst_size_cell_ParamLimits

0x7a64,	// (0x000818c5) aid_cam4_burst_size_cell

0x7a84,	// (0x000818e5) grid_cam4_burst_pane_ParamLimits

0x7a84,	// (0x000818e5) grid_cam4_burst_pane

0x7abc,	// (0x0008191d) linegrid_cam4_burst_pane_ParamLimits

0x7abc,	// (0x0008191d) linegrid_cam4_burst_pane

0x7ae2,	// (0x00081943) scroll_pane_cp30_ParamLimits

0x7ae2,	// (0x00081943) scroll_pane_cp30

0x7aee,	// (0x0008194f) cell_cam4_burst_pane_ParamLimits

0x7aee,	// (0x0008194f) cell_cam4_burst_pane

0x7b3b,	// (0x0008199c) linegrid_cam4_burst_pane_g1_ParamLimits

0x7b3b,	// (0x0008199c) linegrid_cam4_burst_pane_g1

0x7b48,	// (0x000819a9) linegrid_cam4_burst_pane_g2_ParamLimits

0x7b48,	// (0x000819a9) linegrid_cam4_burst_pane_g2

0x7b59,	// (0x000819ba) linegrid_cam4_burst_pane_g3_ParamLimits

0x7b59,	// (0x000819ba) linegrid_cam4_burst_pane_g3

0x0002,

0xf987,	// (0x000897e8) linegrid_cam4_burst_pane_g_ParamLimits

0xf987,	// (0x000897e8) linegrid_cam4_burst_pane_g

0x7b66,	// (0x000819c7) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7b66,	// (0x000819c7) linegrid_cam4_burst_pane_g3_copy1

0x7b80,	// (0x000819e1) linegrid_cam4_burst_pane_g4_ParamLimits

0x7b80,	// (0x000819e1) linegrid_cam4_burst_pane_g4

0x7b8d,	// (0x000819ee) linegrid_cam4_burst_pane_g5_ParamLimits

0x7b8d,	// (0x000819ee) linegrid_cam4_burst_pane_g5

0x7b9e,	// (0x000819ff) linegrid_cam4_burst_pane_g6_ParamLimits

0x7b9e,	// (0x000819ff) linegrid_cam4_burst_pane_g6

0x7bb5,	// (0x00081a16) linegrid_cam4_burst_pane_g7_ParamLimits

0x7bb5,	// (0x00081a16) linegrid_cam4_burst_pane_g7

0x7bc2,	// (0x00081a23) cell_cam4_burst_pane_g1

0x7be3,	// (0x00081a44) main_cam5_pane_t1_ParamLimits

0x7be3,	// (0x00081a44) main_cam5_pane_t1

0x7bf5,	// (0x00081a56) main_cam5_pane_t2_ParamLimits

0x7bf5,	// (0x00081a56) main_cam5_pane_t2

0x7c07,	// (0x00081a68) main_cam5_pane_t3_ParamLimits

0x7c07,	// (0x00081a68) main_cam5_pane_t3

0x7c19,	// (0x00081a7a) main_cam5_pane_t4_ParamLimits

0x7c19,	// (0x00081a7a) main_cam5_pane_t4

0x7c2f,	// (0x00081a90) main_cam5_pane_t5_ParamLimits

0x7c2f,	// (0x00081a90) main_cam5_pane_t5

0x7c41,	// (0x00081aa2) main_cam5_pane_t6_ParamLimits

0x7c41,	// (0x00081aa2) main_cam5_pane_t6

0x7c55,	// (0x00081ab6) main_cam5_pane_t7_ParamLimits

0x7c55,	// (0x00081ab6) main_cam5_pane_t7

0x7c67,	// (0x00081ac8) main_cam5_pane_t8_ParamLimits

0x7c67,	// (0x00081ac8) main_cam5_pane_t8

0x7c83,	// (0x00081ae4) main_cam5_pane_t9_ParamLimits

0x7c83,	// (0x00081ae4) main_cam5_pane_t9

0x7c95,	// (0x00081af6) main_cam5_pane_t10_ParamLimits

0x7c95,	// (0x00081af6) main_cam5_pane_t10

0x7ca7,	// (0x00081b08) main_cam5_pane_t11_ParamLimits

0x7ca7,	// (0x00081b08) main_cam5_pane_t11

0x7cb9,	// (0x00081b1a) main_cam5_pane_t12_ParamLimits

0x7cb9,	// (0x00081b1a) main_cam5_pane_t12

0x7cce,	// (0x00081b2f) main_cam5_pane_t13_ParamLimits

0x7cce,	// (0x00081b2f) main_cam5_pane_t13

0x000c,

0xf993,	// (0x000897f4) main_cam5_pane_t_ParamLimits

0xf993,	// (0x000897f4) main_cam5_pane_t

0x1571,	// (0x0007b3d2) popup_scut_keymap_window_ParamLimits

0x1571,	// (0x0007b3d2) popup_scut_keymap_window

0x7ceb,	// (0x00081b4c) aid_size_cell_brow_shortcut

0xb885,	// (0x000856e6) bg_popup_window_pane_cp010

0x7cf7,	// (0x00081b58) grid_scut_pane

0x7d03,	// (0x00081b64) cell_scut_pane_ParamLimits

0x7d03,	// (0x00081b64) cell_scut_pane

0x7d1a,	// (0x00081b7b) cell_scut_pane_g1

0x7d23,	// (0x00081b84) cell_scut_pane_t1

0x7d32,	// (0x00081b93) cell_scut_pane_t2

0x7d41,	// (0x00081ba2) cell_scut_pane_t3

0x0002,

0xf9ae,	// (0x0008980f) cell_scut_pane_t

0x556f,	// (0x0007f3d0) main_mup3_pane_g8_ParamLimits

0x556f,	// (0x0007f3d0) main_mup3_pane_g8

0x6bd8,	// (0x00080a39) area_vitu2_query_pane_ParamLimits

0x6bd8,	// (0x00080a39) area_vitu2_query_pane

0x0c30,	// (0x0007aa91) input_focus_pane_cp08

0x7d4f,	// (0x00081bb0) area_vitu2_query_pane_g1

0x0d22,	// (0x0007ab83) area_vitu2_query_pane_g2

0x0001,

0xf9b5,	// (0x00089816) area_vitu2_query_pane_g

0x7d5b,	// (0x00081bbc) area_vitu2_query_pane_t1_ParamLimits

0x7d5b,	// (0x00081bbc) area_vitu2_query_pane_t1

0x7d6f,	// (0x00081bd0) area_vitu2_query_pane_t2_ParamLimits

0x7d6f,	// (0x00081bd0) area_vitu2_query_pane_t2

0x0d33,	// (0x0007ab94) area_vitu2_query_pane_t3_ParamLimits

0x0d33,	// (0x0007ab94) area_vitu2_query_pane_t3

0xcf4b,	// (0x00086dac) area_vitu2_query_pane_t4_ParamLimits

0xcf4b,	// (0x00086dac) area_vitu2_query_pane_t4

0xcf73,	// (0x00086dd4) area_vitu2_query_pane_t5_ParamLimits

0xcf73,	// (0x00086dd4) area_vitu2_query_pane_t5

0xcf9b,	// (0x00086dfc) area_vitu2_query_pane_t6_ParamLimits

0xcf9b,	// (0x00086dfc) area_vitu2_query_pane_t6

0x0006,

0xf9ba,	// (0x0008981b) area_vitu2_query_pane_t_ParamLimits

0xf9ba,	// (0x0008981b) area_vitu2_query_pane_t

0x7d83,	// (0x00081be4) bg_button_pane_cp018

0x7d91,	// (0x00081bf2) bg_button_pane_cp021

0x0d5b,	// (0x0007abbc) bg_button_pane_cp022

0x0d6c,	// (0x0007abcd) input_focus_pane_cp09

0x359f,	// (0x0007d400) aid_size_touch_mv_arrow_left

0x35c8,	// (0x0007d429) aid_size_touch_mv_arrow_right

0x73b7,	// (0x00081218) main_cset_slider_pane_g16_ParamLimits

0x73b7,	// (0x00081218) main_cset_slider_pane_g16

0x73c3,	// (0x00081224) main_cset_slider_pane_g17_ParamLimits

0x73c3,	// (0x00081224) main_cset_slider_pane_g17

0x7bc2,	// (0x00081a23) cell_cam4_burst_pane_g1_ParamLimits

0x139f,	// (0x0007b200) compa_mode_pane

0x76a5,	// (0x00081506) popup_vtel_slider_window_g3_ParamLimits

0x76a5,	// (0x00081506) popup_vtel_slider_window_g3

0x76bc,	// (0x0008151d) popup_vtel_slider_window_g4_ParamLimits

0x76bc,	// (0x0008151d) popup_vtel_slider_window_g4

0x76d3,	// (0x00081534) popup_vtel_slider_window_t1_ParamLimits

0x76d3,	// (0x00081534) popup_vtel_slider_window_t1

0x139f,	// (0x0007b200) main_cl_pane

0xcd4c,	// (0x00086bad) popup_imed_adjust2_window_ParamLimits

0xcd24,	// (0x00086b85) bg_tb_trans_pane_cp05_ParamLimits

0xed9e,	// (0x00088bff) popup_imed_adjust2_window_g1_ParamLimits

0xedad,	// (0x00088c0e) popup_imed_adjust2_window_g2_ParamLimits

0xedad,	// (0x00088c0e) popup_imed_adjust2_window_g2

0xedb9,	// (0x00088c1a) popup_imed_adjust2_window_g3_ParamLimits

0xedb9,	// (0x00088c1a) popup_imed_adjust2_window_g3

0x0002,

0x01e5,	// (0x0007a046) popup_imed_adjust2_window_g_ParamLimits

0x01e5,	// (0x0007a046) popup_imed_adjust2_window_g

0xedc5,	// (0x00088c26) popup_imed_adjust2_window_t1_ParamLimits

0xeddd,	// (0x00088c3e) slider_imed_adjust_pane_ParamLimits

0xedf1,	// (0x00088c52) slider_imed_adjust_pane_g1_ParamLimits

0xee01,	// (0x00088c62) slider_imed_adjust_pane_g2_ParamLimits

0xee11,	// (0x00088c72) slider_imed_adjust_pane_g3_ParamLimits

0xee22,	// (0x00088c83) slider_imed_adjust_pane_g4_ParamLimits

0x01ec,	// (0x0007a04d) slider_imed_adjust_pane_g_ParamLimits

0x694d,	// (0x000807ae) aid_touch_area_cam4_ParamLimits

0x694d,	// (0x000807ae) aid_touch_area_cam4

0xe36b,	// (0x000881cc) battery_pane_cp01

0x6a1c,	// (0x0008087d) main_camera4_pane_g6_ParamLimits

0x6a1c,	// (0x0008087d) main_camera4_pane_g6

0x6a46,	// (0x000808a7) main_camera4_pane_t2_ParamLimits

0x6a46,	// (0x000808a7) main_camera4_pane_t2

0x0001,

0xf82f,	// (0x00089690) main_camera4_pane_t_ParamLimits

0xf82f,	// (0x00089690) main_camera4_pane_t

0x6a8d,	// (0x000808ee) aid_touch_area_vid4_ParamLimits

0x6a8d,	// (0x000808ee) aid_touch_area_vid4

0x6ae1,	// (0x00080942) main_video4_pane_g5_ParamLimits

0x6ae1,	// (0x00080942) main_video4_pane_g5

0x6b06,	// (0x00080967) vid4_progress_pane_ParamLimits

0x6b06,	// (0x00080967) vid4_progress_pane

0x73cf,	// (0x00081230) main_cset_slider_pane_g18_ParamLimits

0x73cf,	// (0x00081230) main_cset_slider_pane_g18

0x7bd7,	// (0x00081a38) cell_cam4_burst_pane_g2_ParamLimits

0x7bd7,	// (0x00081a38) cell_cam4_burst_pane_g2

0x0001,

0xf98e,	// (0x000897ef) cell_cam4_burst_pane_g_ParamLimits

0xf98e,	// (0x000897ef) cell_cam4_burst_pane_g

0xab19,	// (0x0008497a) bg_cl_pane_ParamLimits

0xab19,	// (0x0008497a) bg_cl_pane

0x7d9d,	// (0x00081bfe) cl_header_pane_ParamLimits

0x7d9d,	// (0x00081bfe) cl_header_pane

0x7db1,	// (0x00081c12) cl_listscroll_pane_ParamLimits

0x7db1,	// (0x00081c12) cl_listscroll_pane

0x7dc1,	// (0x00081c22) bg_cl_pane_g1

0x7dc9,	// (0x00081c2a) bg_cl_pane_g2

0x7dd1,	// (0x00081c32) bg_cl_pane_g3

0x7dd9,	// (0x00081c3a) bg_cl_pane_g4

0x7de1,	// (0x00081c42) bg_cl_pane_g5

0x7de9,	// (0x00081c4a) bg_cl_pane_g6

0x7df1,	// (0x00081c52) bg_cl_pane_g7

0x7df9,	// (0x00081c5a) bg_cl_pane_g8

0x7e01,	// (0x00081c62) bg_cl_pane_g9

0x0008,

0xf9c9,	// (0x0008982a) bg_cl_pane_g

0x7e09,	// (0x00081c6a) aid_height_cl_leading_ParamLimits

0x7e09,	// (0x00081c6a) aid_height_cl_leading

0x7e15,	// (0x00081c76) aid_height_cl_text_ParamLimits

0x7e15,	// (0x00081c76) aid_height_cl_text

0xa6bc,	// (0x0008451d) bg_cl_header_pane_ParamLimits

0xa6bc,	// (0x0008451d) bg_cl_header_pane

0x7e34,	// (0x00081c95) cl_header_pane_g1_ParamLimits

0x7e34,	// (0x00081c95) cl_header_pane_g1

0x7e4a,	// (0x00081cab) cl_header_pane_t1_ParamLimits

0x7e4a,	// (0x00081cab) cl_header_pane_t1

0x7e63,	// (0x00081cc4) cl_list_pane

0x728b,	// (0x000810ec) hc_scroll_pane_cp01

0xb0b1,	// (0x00084f12) bg_cl_header_pane_g1

0x6e60,	// (0x00080cc1) bg_cl_header_pane_g2

0xb0d1,	// (0x00084f32) bg_cl_header_pane_g3

0x6e70,	// (0x00080cd1) bg_cl_header_pane_g4

0x6e68,	// (0x00080cc9) bg_cl_header_pane_g5

0x7809,	// (0x0008166a) bg_cl_header_pane_g6

0x6e88,	// (0x00080ce9) bg_cl_header_pane_g7

0x6e90,	// (0x00080cf1) bg_cl_header_pane_g8

0x6e80,	// (0x00080ce1) bg_cl_header_pane_g9

0x0008,

0xf9dc,	// (0x0008983d) bg_cl_header_pane_g

0x7e6c,	// (0x00081ccd) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7e6c,	// (0x00081ccd) hc_cl_list_double_graphic_heading_pane

0x7e80,	// (0x00081ce1) hc_cl_list_single_graphic_pane_ParamLimits

0x7e80,	// (0x00081ce1) hc_cl_list_single_graphic_pane

0x7e9a,	// (0x00081cfb) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x7e9a,	// (0x00081cfb) hc_cl_list_single_graphic_pane_g1

0x7ea6,	// (0x00081d07) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7ea6,	// (0x00081d07) hc_cl_list_single_graphic_pane_g2

0x0001,

0xf9ef,	// (0x00089850) hc_cl_list_single_graphic_pane_g_ParamLimits

0xf9ef,	// (0x00089850) hc_cl_list_single_graphic_pane_g

0x7eba,	// (0x00081d1b) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x7eba,	// (0x00081d1b) hc_cl_list_single_graphic_pane_t1

0x7e9a,	// (0x00081cfb) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x7e9a,	// (0x00081cfb) hc_cl_list_double_graphic_heading_pane_g1

0x7ecf,	// (0x00081d30) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7ecf,	// (0x00081d30) hc_cl_list_double_graphic_heading_pane_g2

0x7ee3,	// (0x00081d44) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7ee3,	// (0x00081d44) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xf9f4,	// (0x00089855) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xf9f4,	// (0x00089855) hc_cl_list_double_graphic_heading_pane_g

0x7ef7,	// (0x00081d58) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7ef7,	// (0x00081d58) hc_cl_list_double_graphic_heading_pane_t1

0x7f0c,	// (0x00081d6d) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x7f0c,	// (0x00081d6d) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xf9fb,	// (0x0008985c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xf9fb,	// (0x0008985c) hc_cl_list_double_graphic_heading_pane_t

0x7f21,	// (0x00081d82) vid4_progress_pane_g1

0x7f33,	// (0x00081d94) vid4_progress_pane_g2

0xe4b8,	// (0x00088319) vid4_progress_pane_g3

0xe4c4,	// (0x00088325) vid4_progress_pane_g4

0x0004,

0xfa00,	// (0x00089861) vid4_progress_pane_g

0xe4e2,	// (0x00088343) vid4_progress_pane_t1

0xe4f7,	// (0x00088358) vid4_progress_pane_t2

0x0002,

0xfa0b,	// (0x0008986c) vid4_progress_pane_t

0xe522,	// (0x00088383) wait_bar_pane_cp07

0xe65a,	// (0x000884bb) blid_firmament_pane_ParamLimits

0xe69d,	// (0x000884fe) popup_blid_sat_info2_window_g1

0xe6c1,	// (0x00088522) popup_blid_sat_info2_window_t3

0xe6cf,	// (0x00088530) popup_blid_sat_info2_window_t4

0xe6dd,	// (0x0008853e) popup_blid_sat_info2_window_t5

0xe6eb,	// (0x0008854c) popup_blid_sat_info2_window_t6

0xe6fb,	// (0x0008855c) popup_blid_sat_info2_window_t7

0xe709,	// (0x0008856a) popup_blid_sat_info2_window_t8

0xe717,	// (0x00088578) popup_blid_sat_info2_window_t9

0xe725,	// (0x00088586) popup_blid_sat_info2_window_t10

0xe7e9,	// (0x0008864a) aid_firma_cardinal_ParamLimits

0xe7fd,	// (0x0008865e) blid_firmament_pane_t1_ParamLimits

0xe814,	// (0x00088675) blid_firmament_pane_t2_ParamLimits

0xe82b,	// (0x0008868c) blid_firmament_pane_t3_ParamLimits

0xe842,	// (0x000886a3) blid_firmament_pane_t4_ParamLimits

0x00de,	// (0x00079f3f) blid_firmament_pane_t_ParamLimits

0xe859,	// (0x000886ba) blid_sat_info_pane_ParamLimits

0xa6bc,	// (0x0008451d) main_cam_set_pane_ParamLimits

0x5e2d,	// (0x0007fc8e) aid_size_cell_colour_35_ParamLimits

0x5e4d,	// (0x0007fcae) aid_size_cell_colour_112_ParamLimits

0x5e6d,	// (0x0007fcce) aid_size_cell_effect_ParamLimits

0xcd24,	// (0x00086b85) bg_tb_trans_pane_cp02_ParamLimits

0xb2d1,	// (0x00085132) heading_imed_pane_ParamLimits

0x5e8d,	// (0x0007fcee) listscroll_imed_pane_ParamLimits

0xc34e,	// (0x000861af) popup_call2_audio_first_window_g5_ParamLimits

0xc34e,	// (0x000861af) popup_call2_audio_first_window_g5

0x6513,	// (0x00080374) aid_size_touch_image3_arrow_left_ParamLimits

0x6513,	// (0x00080374) aid_size_touch_image3_arrow_left

0x653f,	// (0x000803a0) aid_size_touch_image3_arrow_right_ParamLimits

0x653f,	// (0x000803a0) aid_size_touch_image3_arrow_right

0xe50d,	// (0x0008836e) vid4_progress_pane_t3

0x61b0,	// (0x00080011) main_hwr_training_symbol_option_pane_ParamLimits

0x61b0,	// (0x00080011) main_hwr_training_symbol_option_pane

0xf08b,	// (0x00088eec) popup_hwr_training_preview_window_ParamLimits

0xf08b,	// (0x00088eec) popup_hwr_training_preview_window

0x61d0,	// (0x00080031) hwr_training_navi_pane_g5_ParamLimits

0x61d0,	// (0x00080031) hwr_training_navi_pane_g5

0x6da8,	// (0x00080c09) popup_char_count_window

0xa6bc,	// (0x0008451d) bg_popup_sub_pane_cp20_ParamLimits

0x77eb,	// (0x0008164c) list_vitu2_match_list_pane_ParamLimits

0x77fa,	// (0x0008165b) vitu2_page_scroll_pane_ParamLimits

0x77fa,	// (0x0008165b) vitu2_page_scroll_pane

0x7f45,	// (0x00081da6) list_single_hwr_training_symbol_option_pane_ParamLimits

0x7f45,	// (0x00081da6) list_single_hwr_training_symbol_option_pane

0x7f58,	// (0x00081db9) list_single_hwr_training_symbol_option_pane_g1

0x7f60,	// (0x00081dc1) list_single_hwr_training_symbol_option_pane_t1

0x7f6e,	// (0x00081dcf) bg_button_pane_cp023

0x7f77,	// (0x00081dd8) bg_button_pane_cp024

0x7faa,	// (0x00081e0b) vitu2_page_scroll_pane_g1

0x7fb2,	// (0x00081e13) vitu2_page_scroll_pane_g2

0x0001,

0xfa12,	// (0x00089873) vitu2_page_scroll_pane_g

0x7fba,	// (0x00081e1b) vitu2_page_scroll_pane_t1

0xe5ba,	// (0x0008841b) popup_char_count_window_g1

0x7fc9,	// (0x00081e2a) popup_char_count_window_g2

0x7fd2,	// (0x00081e33) popup_char_count_window_g3

0x0002,

0xfa17,	// (0x00089878) popup_char_count_window_g

0x7fdb,	// (0x00081e3c) popup_char_count_window_t1

0x139f,	// (0x0007b200) main_vded2_pane

0xed8a,	// (0x00088beb) aid_size_cell_imed_line

0xed94,	// (0x00088bf5) grid_imed_line_width_pane

0xe421,	// (0x00088282) vid4_indicators_pane_g4

0x7fe9,	// (0x00081e4a) cell_imed_line_width_pane_ParamLimits

0x7fe9,	// (0x00081e4a) cell_imed_line_width_pane

0x7ffd,	// (0x00081e5e) cell_imed_line_width_pane_g1

0xeaa9,	// (0x0008890a) cell_imed_line_width_pane_g2

0x0001,

0xfa1e,	// (0x0008987f) cell_imed_line_width_pane_g

0x8006,	// (0x00081e67) main_vded2_pane_g1_ParamLimits

0x8006,	// (0x00081e67) main_vded2_pane_g1

0x801e,	// (0x00081e7f) main_vded2_pane_g2_ParamLimits

0x801e,	// (0x00081e7f) main_vded2_pane_g2

0x0001,

0xfa23,	// (0x00089884) main_vded2_pane_g_ParamLimits

0xfa23,	// (0x00089884) main_vded2_pane_g

0x8030,	// (0x00081e91) vded2_slider_pane_ParamLimits

0x8030,	// (0x00081e91) vded2_slider_pane

0x8040,	// (0x00081ea1) aid_size_touch_vded2_end

0x804a,	// (0x00081eab) aid_size_touch_vded2_playhead

0x8054,	// (0x00081eb5) aid_size_touch_vded2_start

0x805c,	// (0x00081ebd) vded2_slider_bg_pane

0x8065,	// (0x00081ec6) vded2_slider_pane_g1

0x806e,	// (0x00081ecf) vded2_slider_pane_g2

0x8076,	// (0x00081ed7) vded2_slider_pane_g3

0x0002,

0xfa28,	// (0x00089889) vded2_slider_pane_g

0x8081,	// (0x00081ee2) vded2_slider_bg_pane_g1

0x808a,	// (0x00081eeb) vded2_slider_bg_pane_g2

0x8093,	// (0x00081ef4) vded2_slider_bg_pane_g3

0x0002,

0xfa2f,	// (0x00089890) vded2_slider_bg_pane_g

0x3b9d,	// (0x0007d9fe) aid_postcard_touch_down_pane_ParamLimits

0x3b9d,	// (0x0007d9fe) aid_postcard_touch_down_pane

0x3bb3,	// (0x0007da14) aid_postcard_touch_up_pane_ParamLimits

0x3bb3,	// (0x0007da14) aid_postcard_touch_up_pane

0x139f,	// (0x0007b200) main_blid2_pane

0xcd32,	// (0x00086b93) popup_blid2_search_window

0x139f,	// (0x0007b200) blid2_gps_pane

0x139f,	// (0x0007b200) blid2_navig_pane

0x139f,	// (0x0007b200) blid2_search_pane

0x139f,	// (0x0007b200) blid2_tripm_pane

0x809c,	// (0x00081efd) blid2_search_pane_g1_ParamLimits

0x809c,	// (0x00081efd) blid2_search_pane_g1

0x80b4,	// (0x00081f15) blid2_search_pane_t1_ParamLimits

0x80b4,	// (0x00081f15) blid2_search_pane_t1

0x80c6,	// (0x00081f27) aid_size_cell_blid2_gps_ParamLimits

0x80c6,	// (0x00081f27) aid_size_cell_blid2_gps

0x80de,	// (0x00081f3f) blid2_gps_pane_g1_ParamLimits

0x80de,	// (0x00081f3f) blid2_gps_pane_g1

0x80f2,	// (0x00081f53) grid_blid2_satellite_pane_ParamLimits

0x80f2,	// (0x00081f53) grid_blid2_satellite_pane

0x810c,	// (0x00081f6d) blid2_navig_pane_g1_ParamLimits

0x810c,	// (0x00081f6d) blid2_navig_pane_g1

0x8118,	// (0x00081f79) blid2_navig_pane_t1_ParamLimits

0x8118,	// (0x00081f79) blid2_navig_pane_t1

0x8133,	// (0x00081f94) blid2_navig_pane_t2_ParamLimits

0x8133,	// (0x00081f94) blid2_navig_pane_t2

0x0001,

0xfa36,	// (0x00089897) blid2_navig_pane_t_ParamLimits

0xfa36,	// (0x00089897) blid2_navig_pane_t

0x814e,	// (0x00081faf) blid2_navig_ring_pane_ParamLimits

0x814e,	// (0x00081faf) blid2_navig_ring_pane

0x8167,	// (0x00081fc8) blid2_speed_pane_ParamLimits

0x8167,	// (0x00081fc8) blid2_speed_pane

0x8173,	// (0x00081fd4) blid2_tripm_pane_g1_ParamLimits

0x8173,	// (0x00081fd4) blid2_tripm_pane_g1

0x818e,	// (0x00081fef) blid2_tripm_pane_g2_ParamLimits

0x818e,	// (0x00081fef) blid2_tripm_pane_g2

0x81a2,	// (0x00082003) blid2_tripm_pane_g3_ParamLimits

0x81a2,	// (0x00082003) blid2_tripm_pane_g3

0x81b6,	// (0x00082017) blid2_tripm_pane_g4_ParamLimits

0x81b6,	// (0x00082017) blid2_tripm_pane_g4

0x81ca,	// (0x0008202b) blid2_tripm_pane_g5_ParamLimits

0x81ca,	// (0x0008202b) blid2_tripm_pane_g5

0x0005,

0xfa3b,	// (0x0008989c) blid2_tripm_pane_g_ParamLimits

0xfa3b,	// (0x0008989c) blid2_tripm_pane_g

0x81f0,	// (0x00082051) blid2_tripm_pane_t1_ParamLimits

0x81f0,	// (0x00082051) blid2_tripm_pane_t1

0x820b,	// (0x0008206c) blid2_tripm_pane_t2_ParamLimits

0x820b,	// (0x0008206c) blid2_tripm_pane_t2

0x8226,	// (0x00082087) blid2_tripm_pane_t3_ParamLimits

0x8226,	// (0x00082087) blid2_tripm_pane_t3

0x0003,

0xfa48,	// (0x000898a9) blid2_tripm_pane_t_ParamLimits

0xfa48,	// (0x000898a9) blid2_tripm_pane_t

0x826d,	// (0x000820ce) cell_blid2_satellite_pane_ParamLimits

0x826d,	// (0x000820ce) cell_blid2_satellite_pane

0x828b,	// (0x000820ec) cell_blid2_satellite_pane_g1

0x8294,	// (0x000820f5) cell_blid2_satellite_pane_t1

0xe869,	// (0x000886ca) blid2_speed_pane_g1

0x82a2,	// (0x00082103) blid2_speed_pane_t1

0x82b0,	// (0x00082111) blid2_speed_pane_t2

0x0001,

0xfa51,	// (0x000898b2) blid2_speed_pane_t

0xe869,	// (0x000886ca) blid2_navig_ring_pane_g1

0x82be,	// (0x0008211f) blid2_navig_ring_pane_g2

0x82c6,	// (0x00082127) blid2_navig_ring_pane_g3

0x82ce,	// (0x0008212f) blid2_navig_ring_pane_g4

0x82d6,	// (0x00082137) blid2_navig_ring_pane_g5

0x0004,

0xfa56,	// (0x000898b7) blid2_navig_ring_pane_g

0x139f,	// (0x0007b200) bg_popup_window_pane_cp011

0x82de,	// (0x0008213f) popup_blid2_search_window_g1

0x82e6,	// (0x00082147) popup_blid2_search_window_t1

0x82f4,	// (0x00082155) popup_blid2_search_window_t2

0x0001,

0xfa61,	// (0x000898c2) popup_blid2_search_window_t

0xafc0,	// (0x00084e21) main_browser_pane_g1

0xab19,	// (0x0008497a) main_browser_pane_ParamLimits

0xa6bc,	// (0x0008451d) bg_button_pane_cp011_ParamLimits

0x6e42,	// (0x00080ca3) cell_vitu2_function_pane_g1_ParamLimits

0xcd24,	// (0x00086b85) bg_popup_sub_pane_cp22_ParamLimits

0x0c30,	// (0x0007aa91) input_focus_pane_cp08_ParamLimits

0x7988,	// (0x000817e9) popup_vitu2_query_button_pane_ParamLimits

0x7988,	// (0x000817e9) popup_vitu2_query_button_pane

0x0c47,	// (0x0007aaa8) popup_vitu2_query_input_button_pane

0x7999,	// (0x000817fa) popup_vitu2_query_window_g1_ParamLimits

0x79a5,	// (0x00081806) popup_vitu2_query_window_g2_ParamLimits

0xf962,	// (0x000897c3) popup_vitu2_query_window_g_ParamLimits

0x139f,	// (0x0007b200) bg_button_pane_cp026

0x8302,	// (0x00082163) popup_vitu2_query_input_button_pane_g1

0x139f,	// (0x0007b200) bg_button_pane_cp025

0x830a,	// (0x0008216b) popup_vitu2_query_button_pane_t1

0x5239,	// (0x0007f09a) main_mp3_pane_t6

0x5247,	// (0x0007f0a8) popup_slider_window_cp01

0xe387,	// (0x000881e8) cam4_battery_pane

0xe3e0,	// (0x00088241) cam4_battery_pane_cp02

0xe4b0,	// (0x00088311) cam4_battery_pane_cp01

0xe4b0,	// (0x00088311) cam4_battery_pane_cp03

0xe869,	// (0x000886ca) cam4_battery_pane_g1

0x8318,	// (0x00082179) cam4_battery_pane_g2

0x0001,

0xfa66,	// (0x000898c7) cam4_battery_pane_g

0xe733,	// (0x00088594) popup_blid_sat_info2_window_t11

0x359f,	// (0x0007d400) aid_size_touch_mv_arrow_left_ParamLimits

0x35c8,	// (0x0007d429) aid_size_touch_mv_arrow_right_ParamLimits

0xb7e5,	// (0x00085646) navi_pane_g1_ParamLimits

0x3607,	// (0x0007d468) navi_pane_g2_ParamLimits

0x3635,	// (0x0007d496) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00089256) navi_pane_g_ParamLimits

0x368d,	// (0x0007d4ee) navi_pane_mv_t1_ParamLimits

0x5e99,	// (0x0007fcfa) grid_imed_effect_pane_ParamLimits

0x24f3,	// (0x0007c354) aid_placing_vt_slider_lsc

0xaf0f,	// (0x00084d70) aid_placing_vt_slider_prt

0xa6bc,	// (0x0008451d) bg_tb_trans_pane_cp01_ParamLimits

0xe9f0,	// (0x00088851) popup_image_details_window_g1_ParamLimits

0xea03,	// (0x00088864) popup_image_details_window_g2_ParamLimits

0xea18,	// (0x00088879) popup_image_details_window_g3_ParamLimits

0xea18,	// (0x00088879) popup_image_details_window_g3

0xf6c6,	// (0x00089527) popup_image_details_window_g_ParamLimits

0xea2c,	// (0x0008888d) popup_image_details_window_t1_ParamLimits

0xea3e,	// (0x0008889f) popup_image_details_window_t2_ParamLimits

0xea57,	// (0x000888b8) popup_image_details_window_t3_ParamLimits

0xea6b,	// (0x000888cc) popup_image_details_window_t4_ParamLimits

0xea86,	// (0x000888e7) popup_image_details_window_t5_ParamLimits

0xf6cd,	// (0x0008952e) popup_image_details_window_t_ParamLimits

0x7e21,	// (0x00081c82) cl_header_name_pane_ParamLimits

0x7e21,	// (0x00081c82) cl_header_name_pane

0x8322,	// (0x00082183) cl_header_name_pane_t1_ParamLimits

0x8322,	// (0x00082183) cl_header_name_pane_t1

0x8343,	// (0x000821a4) cl_header_name_pane_t2_ParamLimits

0x8343,	// (0x000821a4) cl_header_name_pane_t2

0x8385,	// (0x000821e6) cl_header_name_pane_t3_ParamLimits

0x8385,	// (0x000821e6) cl_header_name_pane_t3

0x0002,

0xfa6b,	// (0x000898cc) cl_header_name_pane_t_ParamLimits

0xfa6b,	// (0x000898cc) cl_header_name_pane_t

0x365e,	// (0x0007d4bf) navi_pane_mv_g2_ParamLimits

0x6d82,	// (0x00080be3) field_vitu2_entry_pane_g1_ParamLimits

0x6d8e,	// (0x00080bef) field_vitu2_entry_pane_g2_ParamLimits

0x6d9a,	// (0x00080bfb) field_vitu2_entry_pane_g3_ParamLimits

0x6d9a,	// (0x00080bfb) field_vitu2_entry_pane_g3

0xf861,	// (0x000896c2) field_vitu2_entry_pane_g_ParamLimits

0x6dbe,	// (0x00080c1f) cell_vitu2_itu_pane_g1_ParamLimits

0x6dce,	// (0x00080c2f) cell_vitu2_itu_pane_g2_ParamLimits

0x6dce,	// (0x00080c2f) cell_vitu2_itu_pane_g2

0x0001,

0xf86d,	// (0x000896ce) cell_vitu2_itu_pane_g_ParamLimits

0xf86d,	// (0x000896ce) cell_vitu2_itu_pane_g

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp05_ParamLimits

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp05

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp03

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp04

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp10_ParamLimits

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp10

0x0d5b,	// (0x0007abbc) bg_vkb2_func_pane_cp08

0x7d83,	// (0x00081be4) bg_vkb2_func_pane_cp06

0x7d91,	// (0x00081bf2) bg_vkb2_func_pane_cp07

0x7f80,	// (0x00081de1) bg_vkb2_func_pane_cp11_ParamLimits

0x7f80,	// (0x00081de1) bg_vkb2_func_pane_cp11

0x7f95,	// (0x00081df6) bg_vkb2_func_pane_cp12_ParamLimits

0x7f95,	// (0x00081df6) bg_vkb2_func_pane_cp12

0x139f,	// (0x0007b200) bg_vkb2_func_pane_cp09

0x6e60,	// (0x00080cc1) bg_vkb2_func_pane_g1

0xb0d1,	// (0x00084f32) bg_vkb2_func_pane_g2

0x6e68,	// (0x00080cc9) bg_vkb2_func_pane_g3

0x6e70,	// (0x00080cd1) bg_vkb2_func_pane_g4

0x7809,	// (0x0008166a) bg_vkb2_func_pane_g5

0x6e88,	// (0x00080ce9) bg_vkb2_func_pane_g6

0x6e90,	// (0x00080cf1) bg_vkb2_func_pane_g7

0x6e80,	// (0x00080ce1) bg_vkb2_func_pane_g8

0xb0b1,	// (0x00084f12) bg_vkb2_func_pane_g9

0x0008,

0xfa72,	// (0x000898d3) bg_vkb2_func_pane_g

0x81de,	// (0x0008203f) blid2_tripm_pane_g6_ParamLimits

0x81de,	// (0x0008203f) blid2_tripm_pane_g6

0x6396,	// (0x000801f7) mp4_progress_pane_g1

0x8259,	// (0x000820ba) blid2_tripm_values_pane_ParamLimits

0x8259,	// (0x000820ba) blid2_tripm_values_pane

0x83b6,	// (0x00082217) blid2_tripm_values_pane_t1

0x83c4,	// (0x00082225) blid2_tripm_values_pane_t2

0x83d2,	// (0x00082233) blid2_tripm_values_pane_t3

0x83e0,	// (0x00082241) blid2_tripm_values_pane_t4

0x83ee,	// (0x0008224f) blid2_tripm_values_pane_t5

0x83fc,	// (0x0008225d) blid2_tripm_values_pane_t6

0x840a,	// (0x0008226b) blid2_tripm_values_pane_t7

0x8418,	// (0x00082279) blid2_tripm_values_pane_t8

0x8426,	// (0x00082287) blid2_tripm_values_pane_t9

0x0008,

0xfa85,	// (0x000898e6) blid2_tripm_values_pane_t

0x2535,	// (0x0007c396) call_video_pane_t1_ParamLimits

0x2553,	// (0x0007c3b4) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000890df) call_video_pane_t_ParamLimits

0x0a63,	// (0x0007a8c4) msg_header_pane_g1_ParamLimits

0xba20,	// (0x00085881) msg_header_pane_g2_ParamLimits

0xba20,	// (0x00085881) msg_header_pane_g2

0x0001,

0xf498,	// (0x000892f9) msg_header_pane_g_ParamLimits

0xf498,	// (0x000892f9) msg_header_pane_g

0xab19,	// (0x0008497a) main_clock2_pane_ParamLimits

0x5ba2,	// (0x0007fa03) grid_clock2_toolbar_pane_ParamLimits

0x5ba2,	// (0x0007fa03) grid_clock2_toolbar_pane

0x5ba2,	// (0x0007fa03) listscroll_clock2_pane_ParamLimits

0x5ba2,	// (0x0007fa03) listscroll_clock2_pane

0x5c8a,	// (0x0007faeb) main_clock2_pane_t3_ParamLimits

0x5c8a,	// (0x0007faeb) main_clock2_pane_t3

0x5cad,	// (0x0007fb0e) main_clock2_pane_t4_ParamLimits

0x5cad,	// (0x0007fb0e) main_clock2_pane_t4

0x8434,	// (0x00082295) cell_clock2_toolbar_pane

0x843c,	// (0x0008229d) cell_clock2_toolbar_pane_cp01

0x843c,	// (0x0008229d) cell_clock2_toolbar_pane_cp02

0x8444,	// (0x000822a5) cell_clock2_toolbar_pane_cp03

0x844c,	// (0x000822ad) list_clock2_pane

0xb738,	// (0x00085599) scroll_pane_cp10

0x8454,	// (0x000822b5) list_single_clock2_pane_ParamLimits

0x8454,	// (0x000822b5) list_single_clock2_pane

0xb885,	// (0x000856e6) list_highlight_pane_cp08

0x8461,	// (0x000822c2) list_single_clock2_pane_t1

0x846f,	// (0x000822d0) list_single_clock2_pane_t2

0x0001,

0xfa98,	// (0x000898f9) list_single_clock2_pane_t

0x139f,	// (0x0007b200) bg_button_pane_cp10

0x847d,	// (0x000822de) cell_clock2_toolbar_pane_g1

0x3b29,	// (0x0007d98a) aid_main_viewer_pane_g1_ParamLimits

0x3b29,	// (0x0007d98a) aid_main_viewer_pane_g1

0x3b37,	// (0x0007d998) aid_main_viewer_pane_g2_ParamLimits

0x3b37,	// (0x0007d998) aid_main_viewer_pane_g2

0x3b45,	// (0x0007d9a6) aid_main_viewer_pane_g3_ParamLimits

0x3b45,	// (0x0007d9a6) aid_main_viewer_pane_g3

0x3b54,	// (0x0007d9b5) aid_main_viewer_pane_g4_ParamLimits

0x3b54,	// (0x0007d9b5) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x0008930a) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x0008930a) aid_main_viewer_pane_g

0x4460,	// (0x0007e2c1) main_calc_pane_ParamLimits

0x4474,	// (0x0007e2d5) main_dialer2_pane_ParamLimits

0x139f,	// (0x0007b200) main_cam6_pane

0x139f,	// (0x0007b200) main_vid6_pane

0x5bae,	// (0x0007fa0f) listscroll_gen_pane_cp06_ParamLimits

0x5bae,	// (0x0007fa0f) listscroll_gen_pane_cp06

0x5cd0,	// (0x0007fb31) main_clock2_pane_t5_ParamLimits

0x5cd0,	// (0x0007fb31) main_clock2_pane_t5

0x5d30,	// (0x0007fb91) aid_call2_pane_cp10_ParamLimits

0x5d42,	// (0x0007fba3) aid_call_pane_cp10_ParamLimits

0xb7ba,	// (0x0008561b) popup_clock_analogue_window_cp10_g1_ParamLimits

0xb7ba,	// (0x0008561b) popup_clock_analogue_window_cp10_g2_ParamLimits

0x5d54,	// (0x0007fbb5) popup_clock_analogue_window_cp10_g3_ParamLimits

0x5d54,	// (0x0007fbb5) popup_clock_analogue_window_cp10_g4_ParamLimits

0xb7ba,	// (0x0008561b) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf771,	// (0x000895d2) popup_clock_analogue_window_cp10_g_ParamLimits

0x5d66,	// (0x0007fbc7) popup_clock_analogue_window_cp10_t1_ParamLimits

0x64c0,	// (0x00080321) cell_dialer2_keypad_pane_g2_ParamLimits

0x64c0,	// (0x00080321) cell_dialer2_keypad_pane_g2

0x0001,

0xf800,	// (0x00089661) cell_dialer2_keypad_pane_g_ParamLimits

0xf800,	// (0x00089661) cell_dialer2_keypad_pane_g

0x64dc,	// (0x0008033d) cell_dialer2_keypad_pane_t1

0x7265,	// (0x000810c6) main_cset_text2_pane_ParamLimits

0x7265,	// (0x000810c6) main_cset_text2_pane

0x7d4f,	// (0x00081bb0) area_vitu2_query_pane_g1_ParamLimits

0x0d22,	// (0x0007ab83) area_vitu2_query_pane_g2_ParamLimits

0xf9b5,	// (0x00089816) area_vitu2_query_pane_g_ParamLimits

0xcfc3,	// (0x00086e24) area_vitu2_query_pane_t7_ParamLimits

0xcfc3,	// (0x00086e24) area_vitu2_query_pane_t7

0x7d83,	// (0x00081be4) bg_button_pane_cp018_ParamLimits

0x7d91,	// (0x00081bf2) bg_button_pane_cp021_ParamLimits

0x0d5b,	// (0x0007abbc) bg_button_pane_cp022_ParamLimits

0x0d5b,	// (0x0007abbc) bg_vkb2_func_pane_cp08_ParamLimits

0x7d83,	// (0x00081be4) bg_vkb2_func_pane_cp06_ParamLimits

0x7d91,	// (0x00081bf2) bg_vkb2_func_pane_cp07_ParamLimits

0x0d6c,	// (0x0007abcd) input_focus_pane_cp09_ParamLimits

0xe543,	// (0x000883a4) cam6_autofocus_pane_ParamLimits

0xe543,	// (0x000883a4) cam6_autofocus_pane

0x8485,	// (0x000822e6) cam6_image_uncrop_pane_ParamLimits

0x8485,	// (0x000822e6) cam6_image_uncrop_pane

0x8494,	// (0x000822f5) cam6_indi_pane_ParamLimits

0x8494,	// (0x000822f5) cam6_indi_pane

0x84aa,	// (0x0008230b) cam6_mode_pane_ParamLimits

0x84aa,	// (0x0008230b) cam6_mode_pane

0x84bc,	// (0x0008231d) cam6_timer_pane_ParamLimits

0x84bc,	// (0x0008231d) cam6_timer_pane

0x84c8,	// (0x00082329) cam6_zoom_pane_ParamLimits

0x84c8,	// (0x00082329) cam6_zoom_pane

0x84d4,	// (0x00082335) cam6_mode_pane_g1_ParamLimits

0x84d4,	// (0x00082335) cam6_mode_pane_g1

0x84e4,	// (0x00082345) cam6_mode_pane_g2_ParamLimits

0x84e4,	// (0x00082345) cam6_mode_pane_g2

0x84f4,	// (0x00082355) cam6_mode_pane_g3_ParamLimits

0x84f4,	// (0x00082355) cam6_mode_pane_g3

0x8504,	// (0x00082365) cam6_mode_pane_g4_ParamLimits

0x8504,	// (0x00082365) cam6_mode_pane_g4

0x0003,

0xfa9d,	// (0x000898fe) cam6_mode_pane_g_ParamLimits

0xfa9d,	// (0x000898fe) cam6_mode_pane_g

0x8514,	// (0x00082375) bg_tb_trans_pane_cp08_ParamLimits

0x8514,	// (0x00082375) bg_tb_trans_pane_cp08

0x8522,	// (0x00082383) cam6_battery_pane_ParamLimits

0x8522,	// (0x00082383) cam6_battery_pane

0x8538,	// (0x00082399) cam6_indi_pane_g1_ParamLimits

0x8538,	// (0x00082399) cam6_indi_pane_g1

0x854a,	// (0x000823ab) cam6_indi_pane_g2_ParamLimits

0x854a,	// (0x000823ab) cam6_indi_pane_g2

0x855c,	// (0x000823bd) cam6_indi_pane_g3_ParamLimits

0x855c,	// (0x000823bd) cam6_indi_pane_g3

0x0002,

0xfaa6,	// (0x00089907) cam6_indi_pane_g_ParamLimits

0xfaa6,	// (0x00089907) cam6_indi_pane_g

0x856e,	// (0x000823cf) cam6_indi_pane_t1_ParamLimits

0x856e,	// (0x000823cf) cam6_indi_pane_t1

0x8594,	// (0x000823f5) cam6_autofocus_pane_g1

0x859c,	// (0x000823fd) cam6_autofocus_pane_g2

0x85a4,	// (0x00082405) cam6_autofocus_pane_g3

0x85ac,	// (0x0008240d) cam6_autofocus_pane_g4

0x0003,

0xfaad,	// (0x0008990e) cam6_autofocus_pane_g

0x85b4,	// (0x00082415) cam6_timer_pane_g1

0x85bc,	// (0x0008241d) cam6_timer_pane_t1

0x85ca,	// (0x0008242b) cam6_zoom_cont_pane

0x85d2,	// (0x00082433) cam6_zoom_pane_g1

0x85da,	// (0x0008243b) cam6_zoom_pane_g2

0x85e2,	// (0x00082443) cam6_zoom_pane_g3

0x0002,

0xfab6,	// (0x00089917) cam6_zoom_pane_g

0xe869,	// (0x000886ca) cam6_battery_pane_g1

0xe869,	// (0x000886ca) cam6_battery_pane_g2

0x0001,

0x00e7,	// (0x00079f48) cam6_battery_pane_g

0x85ea,	// (0x0008244b) cam6_zoom_cont_pane_g1

0x85f3,	// (0x00082454) cam6_zoom_cont_pane_g2

0x85fc,	// (0x0008245d) cam6_zoom_cont_pane_g3

0x0002,

0xfabd,	// (0x0008991e) cam6_zoom_cont_pane_g

0x8619,	// (0x0008247a) cam6_mode_pane_cp_ParamLimits

0x8619,	// (0x0008247a) cam6_mode_pane_cp

0x84c8,	// (0x00082329) cam6_zoom_pane_cp_ParamLimits

0x84c8,	// (0x00082329) cam6_zoom_pane_cp

0x862b,	// (0x0008248c) vid6_image_uncrop_cif_pane_ParamLimits

0x862b,	// (0x0008248c) vid6_image_uncrop_cif_pane

0x863b,	// (0x0008249c) vid6_image_uncrop_nhd_pane_ParamLimits

0x863b,	// (0x0008249c) vid6_image_uncrop_nhd_pane

0x8485,	// (0x000822e6) vid6_image_uncrop_vga_pane_ParamLimits

0x8485,	// (0x000822e6) vid6_image_uncrop_vga_pane

0x865a,	// (0x000824bb) vid6_image_uncrop_wvga_pane_ParamLimits

0x865a,	// (0x000824bb) vid6_image_uncrop_wvga_pane

0x8669,	// (0x000824ca) vid6_indi_pane_ParamLimits

0x8669,	// (0x000824ca) vid6_indi_pane

0x8514,	// (0x00082375) bg_tb_trans_pane_cp09_ParamLimits

0x8514,	// (0x00082375) bg_tb_trans_pane_cp09

0x8681,	// (0x000824e2) cam6_battery_pane_cp_ParamLimits

0x8681,	// (0x000824e2) cam6_battery_pane_cp

0x868d,	// (0x000824ee) vid6_indi_pane_g1_ParamLimits

0x868d,	// (0x000824ee) vid6_indi_pane_g1

0x869f,	// (0x00082500) vid6_indi_pane_g2_ParamLimits

0x869f,	// (0x00082500) vid6_indi_pane_g2

0x86b1,	// (0x00082512) vid6_indi_pane_g3_ParamLimits

0x86b1,	// (0x00082512) vid6_indi_pane_g3

0x86c6,	// (0x00082527) vid6_indi_pane_g4_ParamLimits

0x86c6,	// (0x00082527) vid6_indi_pane_g4

0x86db,	// (0x0008253c) vid6_indi_pane_g5_ParamLimits

0x86db,	// (0x0008253c) vid6_indi_pane_g5

0x0004,

0xfac4,	// (0x00089925) vid6_indi_pane_g_ParamLimits

0xfac4,	// (0x00089925) vid6_indi_pane_g

0x86f5,	// (0x00082556) vid6_indi_pane_t1_ParamLimits

0x86f5,	// (0x00082556) vid6_indi_pane_t1

0x870b,	// (0x0008256c) vid6_indi_pane_t2_ParamLimits

0x870b,	// (0x0008256c) vid6_indi_pane_t2

0x8733,	// (0x00082594) vid6_indi_pane_t3_ParamLimits

0x8733,	// (0x00082594) vid6_indi_pane_t3

0x875b,	// (0x000825bc) vid6_indi_pane_t4_ParamLimits

0x875b,	// (0x000825bc) vid6_indi_pane_t4

0x0003,

0xfacf,	// (0x00089930) vid6_indi_pane_t_ParamLimits

0xfacf,	// (0x00089930) vid6_indi_pane_t

0x877f,	// (0x000825e0) wait_bar_pane_cp08

0x878e,	// (0x000825ef) main_cset_text2_pane_t1_ParamLimits

0x878e,	// (0x000825ef) main_cset_text2_pane_t1

0x8604,	// (0x00082465) listscroll_gen_pane_cp06_t1_ParamLimits

0x8604,	// (0x00082465) listscroll_gen_pane_cp06_t1

0x139f,	// (0x0007b200) main_cam6_set_pane

0xeaff,	// (0x00088960) bg_tb_trans_pane_cp06_ParamLimits

0xe38f,	// (0x000881f0) cam4_indicators_pane_g1_ParamLimits

0xe3a0,	// (0x00088201) cam4_indicators_pane_g2_ParamLimits

0xf83d,	// (0x0008969e) cam4_indicators_pane_g_ParamLimits

0xe3be,	// (0x0008821f) cam4_indicators_pane_t1_ParamLimits

0xa6bc,	// (0x0008451d) bg_tb_trans_pane_cp07_ParamLimits

0xe3e8,	// (0x00088249) vid4_indicators_pane_g1_ParamLimits

0xe3fc,	// (0x0008825d) vid4_indicators_pane_g2_ParamLimits

0xe410,	// (0x00088271) vid4_indicators_pane_g3_ParamLimits

0xe421,	// (0x00088282) vid4_indicators_pane_g4_ParamLimits

0xf84f,	// (0x000896b0) vid4_indicators_pane_g_ParamLimits

0xe43d,	// (0x0008829e) vid4_indicators_pane_t1_ParamLimits

0x7f21,	// (0x00081d82) vid4_progress_pane_g1_ParamLimits

0x7f33,	// (0x00081d94) vid4_progress_pane_g2_ParamLimits

0xe4b8,	// (0x00088319) vid4_progress_pane_g3_ParamLimits

0xe4c4,	// (0x00088325) vid4_progress_pane_g4_ParamLimits

0xfa00,	// (0x00089861) vid4_progress_pane_g_ParamLimits

0xe4e2,	// (0x00088343) vid4_progress_pane_t1_ParamLimits

0xe4f7,	// (0x00088358) vid4_progress_pane_t2_ParamLimits

0xe50d,	// (0x0008836e) vid4_progress_pane_t3_ParamLimits

0xfa0b,	// (0x0008986c) vid4_progress_pane_t_ParamLimits

0xe522,	// (0x00088383) wait_bar_pane_cp07_ParamLimits

0x87ae,	// (0x0008260f) main_cam6_set_pane_g2_ParamLimits

0x87ae,	// (0x0008260f) main_cam6_set_pane_g2

0x87d2,	// (0x00082633) main_cset6_listscroll_pane_ParamLimits

0x87d2,	// (0x00082633) main_cset6_listscroll_pane

0x87ee,	// (0x0008264f) main_cset6_slider_pane_ParamLimits

0x87ee,	// (0x0008264f) main_cset6_slider_pane

0x8804,	// (0x00082665) main_cset6_text2_pane_ParamLimits

0x8804,	// (0x00082665) main_cset6_text2_pane

0x8812,	// (0x00082673) main_cset6_text_pane

0x881a,	// (0x0008267b) main_cset_list_pane_copy1_ParamLimits

0x881a,	// (0x0008267b) main_cset_list_pane_copy1

0x882a,	// (0x0008268b) scroll_pane_cp028_copy1

0x8833,	// (0x00082694) cset_list_set_pane_copy1

0x8846,	// (0x000826a7) aid_position_infowindow_above_copy1

0x884e,	// (0x000826af) aid_position_infowindow_below_copy1

0xe551,	// (0x000883b2) cset_list_set_pane_g1_copy1

0xd027,	// (0x00086e88) cset_list_set_pane_g3_copy1_ParamLimits

0xd027,	// (0x00086e88) cset_list_set_pane_g3_copy1

0xd036,	// (0x00086e97) cset_list_set_pane_t1_copy1_ParamLimits

0xd036,	// (0x00086e97) cset_list_set_pane_t1_copy1

0xa6bc,	// (0x0008451d) list_highlight_pane_cp021_copy1_ParamLimits

0xa6bc,	// (0x0008451d) list_highlight_pane_cp021_copy1

0x8856,	// (0x000826b7) cset6_slider_pane_ParamLimits

0x8856,	// (0x000826b7) cset6_slider_pane

0x8882,	// (0x000826e3) main_cset6_slider_pane_g1_ParamLimits

0x8882,	// (0x000826e3) main_cset6_slider_pane_g1

0x88aa,	// (0x0008270b) main_cset6_slider_pane_g2_ParamLimits

0x88aa,	// (0x0008270b) main_cset6_slider_pane_g2

0x733f,	// (0x000811a0) main_cset6_slider_pane_g3_ParamLimits

0x733f,	// (0x000811a0) main_cset6_slider_pane_g3

0x736f,	// (0x000811d0) main_cset6_slider_pane_g4_ParamLimits

0x736f,	// (0x000811d0) main_cset6_slider_pane_g4

0x73b7,	// (0x00081218) main_cset6_slider_pane_g5_ParamLimits

0x73b7,	// (0x00081218) main_cset6_slider_pane_g5

0x733f,	// (0x000811a0) main_cset6_slider_pane_g7_ParamLimits

0x733f,	// (0x000811a0) main_cset6_slider_pane_g7

0x734b,	// (0x000811ac) main_cset6_slider_pane_g8_ParamLimits

0x734b,	// (0x000811ac) main_cset6_slider_pane_g8

0x7357,	// (0x000811b8) main_cset6_slider_pane_g9_ParamLimits

0x7357,	// (0x000811b8) main_cset6_slider_pane_g9

0x7363,	// (0x000811c4) main_cset6_slider_pane_g10_ParamLimits

0x7363,	// (0x000811c4) main_cset6_slider_pane_g10

0x736f,	// (0x000811d0) main_cset6_slider_pane_g11_ParamLimits

0x736f,	// (0x000811d0) main_cset6_slider_pane_g11

0x737b,	// (0x000811dc) main_cset6_slider_pane_g12_ParamLimits

0x737b,	// (0x000811dc) main_cset6_slider_pane_g12

0x7387,	// (0x000811e8) main_cset6_slider_pane_g13_ParamLimits

0x7387,	// (0x000811e8) main_cset6_slider_pane_g13

0x7393,	// (0x000811f4) main_cset6_slider_pane_g14_ParamLimits

0x7393,	// (0x000811f4) main_cset6_slider_pane_g14

0x88d2,	// (0x00082733) main_cset6_slider_pane_g15_ParamLimits

0x88d2,	// (0x00082733) main_cset6_slider_pane_g15

0x73b7,	// (0x00081218) main_cset6_slider_pane_g16_ParamLimits

0x73b7,	// (0x00081218) main_cset6_slider_pane_g16

0x73c3,	// (0x00081224) main_cset6_slider_pane_g17_ParamLimits

0x73c3,	// (0x00081224) main_cset6_slider_pane_g17

0x0011,

0xfad8,	// (0x00089939) main_cset6_slider_pane_g_ParamLimits

0xfad8,	// (0x00089939) main_cset6_slider_pane_g

0x88ea,	// (0x0008274b) main_cset6_slider_pane_t1_ParamLimits

0x88ea,	// (0x0008274b) main_cset6_slider_pane_t1

0x892b,	// (0x0008278c) main_cset6_slider_pane_t2_ParamLimits

0x892b,	// (0x0008278c) main_cset6_slider_pane_t2

0x8956,	// (0x000827b7) main_cset6_slider_pane_t3_ParamLimits

0x8956,	// (0x000827b7) main_cset6_slider_pane_t3

0x8981,	// (0x000827e2) main_cset6_slider_pane_t4_ParamLimits

0x8981,	// (0x000827e2) main_cset6_slider_pane_t4

0x89ac,	// (0x0008280d) main_cset6_slider_pane_t5_ParamLimits

0x89ac,	// (0x0008280d) main_cset6_slider_pane_t5

0x89d7,	// (0x00082838) main_cset6_slider_pane_t7_ParamLimits

0x89d7,	// (0x00082838) main_cset6_slider_pane_t7

0x8a0d,	// (0x0008286e) main_cset6_slider_pane_t8_ParamLimits

0x8a0d,	// (0x0008286e) main_cset6_slider_pane_t8

0x8a31,	// (0x00082892) main_cset6_slider_pane_t9_ParamLimits

0x8a31,	// (0x00082892) main_cset6_slider_pane_t9

0x8a55,	// (0x000828b6) main_cset6_slider_pane_t10_ParamLimits

0x8a55,	// (0x000828b6) main_cset6_slider_pane_t10

0x8a79,	// (0x000828da) main_cset6_slider_pane_t11_ParamLimits

0x8a79,	// (0x000828da) main_cset6_slider_pane_t11

0x8a9d,	// (0x000828fe) main_cset6_slider_pane_t14_ParamLimits

0x8a9d,	// (0x000828fe) main_cset6_slider_pane_t14

0x8ad6,	// (0x00082937) main_cset6_slider_pane_t15_ParamLimits

0x8ad6,	// (0x00082937) main_cset6_slider_pane_t15

0x000b,

0xfafd,	// (0x0008995e) main_cset6_slider_pane_t_ParamLimits

0xfafd,	// (0x0008995e) main_cset6_slider_pane_t

0x7636,	// (0x00081497) cset_slider_pane_g1_copy1

0x763f,	// (0x000814a0) cset_slider_pane_g2_copy1

0x7648,	// (0x000814a9) cset_slider_pane_g3_copy1

0x139f,	// (0x0007b200) bg_popup_sub_pane_cp011_copy1

0x8b0f,	// (0x00082970) main_cset_text_pane_g1_copy1

0x7a02,	// (0x00081863) main_cset_text_pane_t1_copy1

0x7a10,	// (0x00081871) main_cset_text_pane_t2_copy1

0x7a1e,	// (0x0008187f) main_cset_text_pane_t3_copy1

0x7a2c,	// (0x0008188d) main_cset_text_pane_t4_copy1

0x7a3a,	// (0x0008189b) main_cset_text_pane_t5_copy1

0x8b17,	// (0x00082978) main_cset_text_pane_t6_copy1

0x8b25,	// (0x00082986) main_cset_text_pane_t7_copy1

0x878e,	// (0x000825ef) main_cset_text2_pane_t1_copy1

0xa6bc,	// (0x0008451d) main_ncimui_pane

0x46aa,	// (0x0007e50b) popup_query_ncimui_window_ParamLimits

0x46aa,	// (0x0007e50b) popup_query_ncimui_window

0xced0,	// (0x00086d31) field_cale_ev2_pane_g4_ParamLimits

0xced0,	// (0x00086d31) field_cale_ev2_pane_g4

0x6314,	// (0x00080175) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6314,	// (0x00080175) cell_video_dialer_keypad_pane_g2

0x0001,

0xf7db,	// (0x0008963c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf7db,	// (0x0008963c) cell_video_dialer_keypad_pane_g

0x632c,	// (0x0008018d) cell_video_dialer_keypad_pane_t1

0x139f,	// (0x0007b200) bg_popup_window_pane_cp012

0xb608,	// (0x00085469) heading_pane_cp06

0x8c77,	// (0x00082ad8) ncim_query_content_pane

0x139f,	// (0x0007b200) bg_popup_heading_pane_cp01

0x8c7f,	// (0x00082ae0) ncim_heading_pane_t1

0x8c8d,	// (0x00082aee) ncim_indicator_popup_pane

0x8c9f,	// (0x00082b00) ncim_query_button_pane

0x8cbf,	// (0x00082b20) ncim_query_content_pane_t1

0x8cd1,	// (0x00082b32) ncim_query_content_pane_t2

0x0005,

0xfb41,	// (0x000899a2) ncim_query_content_pane_t

0x8d83,	// (0x00082be4) ncim_query_list_pane

0x8d95,	// (0x00082bf6) ncim_query_popup_pane

0x8c8d,	// (0x00082aee) ncim_indicator_popup_pane_ParamLimits

0x8ca7,	// (0x00082b08) ncim_query_content_pane_g1_ParamLimits

0x8ca7,	// (0x00082b08) ncim_query_content_pane_g1

0x8cbf,	// (0x00082b20) ncim_query_content_pane_t1_ParamLimits

0x8cd1,	// (0x00082b32) ncim_query_content_pane_t2_ParamLimits

0x8ce3,	// (0x00082b44) ncim_query_content_pane_t3_ParamLimits

0x8ce3,	// (0x00082b44) ncim_query_content_pane_t3

0x8d0b,	// (0x00082b6c) ncim_query_content_pane_t4_ParamLimits

0x8d0b,	// (0x00082b6c) ncim_query_content_pane_t4

0x8d33,	// (0x00082b94) ncim_query_content_pane_t5_ParamLimits

0x8d33,	// (0x00082b94) ncim_query_content_pane_t5

0x8d5b,	// (0x00082bbc) ncim_query_content_pane_t6_ParamLimits

0x8d5b,	// (0x00082bbc) ncim_query_content_pane_t6

0xfb41,	// (0x000899a2) ncim_query_content_pane_t_ParamLimits

0x8d83,	// (0x00082be4) ncim_query_list_pane_ParamLimits

0x8d95,	// (0x00082bf6) ncim_query_popup_pane_ParamLimits

0x8da9,	// (0x00082c0a) wait_bar_pane_cp04

0x139f,	// (0x0007b200) input_focus_pane_cp011

0x8db1,	// (0x00082c12) ncim_query_popup_pane_t1

0x8dbf,	// (0x00082c20) ncim_list_query_list_pane_ParamLimits

0x8dbf,	// (0x00082c20) ncim_list_query_list_pane

0x139f,	// (0x0007b200) bg_button_pane_cp027

0x8dd2,	// (0x00082c33) ncim_query_button_pane_g1

0x139f,	// (0x0007b200) list_highlight_pane_cp012

0x8ddc,	// (0x00082c3d) ncim_list_query_list_pane_g1

0x8de4,	// (0x00082c45) ncim_list_query_list_pane_t1

0xe3af,	// (0x00088210) cam4_indicators_pane_g3_ParamLimits

0xe3af,	// (0x00088210) cam4_indicators_pane_g3

0xe42d,	// (0x0008828e) vid4_indicators_pane_g5_ParamLimits

0xe42d,	// (0x0008828e) vid4_indicators_pane_g5

0xe4d3,	// (0x00088334) vid4_progress_pane_g5_ParamLimits

0xe4d3,	// (0x00088334) vid4_progress_pane_g5

0x8b65,	// (0x000829c6) main_ncimui_pane_g1

0x8bcb,	// (0x00082a2c) ncimui_group_query_pane_ParamLimits

0x8bcb,	// (0x00082a2c) ncimui_group_query_pane

0x8c13,	// (0x00082a74) ncimui_list_pane_ParamLimits

0x8c13,	// (0x00082a74) ncimui_list_pane

0x8c3a,	// (0x00082a9b) ncimui_text_pane_ParamLimits

0x8c3a,	// (0x00082a9b) ncimui_text_pane

0x8df2,	// (0x00082c53) ncimui_text_pane_t1_ParamLimits

0x8df2,	// (0x00082c53) ncimui_text_pane_t1

0x8e10,	// (0x00082c71) ncimui_list_single_graphic_pane_ParamLimits

0x8e10,	// (0x00082c71) ncimui_list_single_graphic_pane

0x8e20,	// (0x00082c81) ncimui_query_pane_ParamLimits

0x8e20,	// (0x00082c81) ncimui_query_pane

0x139f,	// (0x0007b200) list_highlight_pane_cp013

0x8e33,	// (0x00082c94) ncim_list_query_list_pane_t1_copy1

0x8ddc,	// (0x00082c3d) ncim_list_single_graphic_pane_g1

0x8e41,	// (0x00082ca2) ncim_query_button_pane_cp01

0x8e4d,	// (0x00082cae) ncim_query_entry_pane_ParamLimits

0x8e4d,	// (0x00082cae) ncim_query_entry_pane

0x8e60,	// (0x00082cc1) ncimui_query_pane_g1

0x8e6c,	// (0x00082ccd) ncimui_query_pane_t1_ParamLimits

0x8e6c,	// (0x00082ccd) ncimui_query_pane_t1

0xa6bc,	// (0x0008451d) input_focus_pane_cp012

0x8e85,	// (0x00082ce6) ncim_query_entry_pane_t1

0xab19,	// (0x0008497a) main_im_pane_ParamLimits

0xa6bc,	// (0x0008451d) main_mobtv_pane_ParamLimits

0xa6bc,	// (0x0008451d) main_mobtv_pane

0x7357,	// (0x000811b8) main_cset6_slider_pane_g18_ParamLimits

0x7357,	// (0x000811b8) main_cset6_slider_pane_g18

0x7387,	// (0x000811e8) main_cset6_slider_pane_g19_ParamLimits

0x7387,	// (0x000811e8) main_cset6_slider_pane_g19

0x8e97,	// (0x00082cf8) bg_main_mobtv_pane_ParamLimits

0x8e97,	// (0x00082cf8) bg_main_mobtv_pane

0x8ea5,	// (0x00082d06) main_mobtv_info_pane

0x8eae,	// (0x00082d0f) main_mobtv_loading_pane_ParamLimits

0x8eae,	// (0x00082d0f) main_mobtv_loading_pane

0x8ebb,	// (0x00082d1c) main_mobtv_pg_channel_list_pane

0x8ec5,	// (0x00082d26) main_mobtv_pg_hdr_pane

0x8ece,	// (0x00082d2f) main_mobtv_programe_curr_pane_ParamLimits

0x8ece,	// (0x00082d2f) main_mobtv_programe_curr_pane

0x8edb,	// (0x00082d3c) main_mobtv_programe_next_pane_ParamLimits

0x8edb,	// (0x00082d3c) main_mobtv_programe_next_pane

0x8ee8,	// (0x00082d49) popup_mobtv_noti_window

0xe869,	// (0x000886ca) main_tv_pg_hdr_pane_g1

0x8ef0,	// (0x00082d51) main_tv_pg_hdr_pane_g2

0x8ef8,	// (0x00082d59) main_tv_pg_hdr_pane_g3

0x8f00,	// (0x00082d61) main_tv_pg_hdr_pane_g4

0x8f08,	// (0x00082d69) main_tv_pg_hdr_pane_g5

0x8f12,	// (0x00082d73) main_tv_pg_hdr_pane_g6

0x8f1c,	// (0x00082d7d) main_tv_pg_hdr_pane_g7

0x8f26,	// (0x00082d87) main_tv_pg_hdr_pane_g8

0x8f30,	// (0x00082d91) main_tv_pg_hdr_pane_g9

0x8f3a,	// (0x00082d9b) main_tv_pg_hdr_pane_g10

0x8f44,	// (0x00082da5) main_tv_pg_hdr_pane_g11

0x000a,

0xfb4e,	// (0x000899af) main_tv_pg_hdr_pane_g

0x8f4e,	// (0x00082daf) main_tv_pg_hdr_pane_t1

0x8f5c,	// (0x00082dbd) main_tv_pg_hdr_pane_t2

0x8f6a,	// (0x00082dcb) main_tv_pg_hdr_pane_t3

0x8f7a,	// (0x00082ddb) main_tv_pg_hdr_pane_t4

0x8f8a,	// (0x00082deb) main_tv_pg_hdr_pane_t5

0x0004,

0xfb65,	// (0x000899c6) main_tv_pg_hdr_pane_t

0x8f9a,	// (0x00082dfb) single_mobtv_pg_channel_pane_ParamLimits

0x8f9a,	// (0x00082dfb) single_mobtv_pg_channel_pane

0x8fac,	// (0x00082e0d) single_mobtv_pg_channel_table_pane

0x8fb5,	// (0x00082e16) single_mobtv_pg_channel_thumb_pane

0x8fbe,	// (0x00082e1f) single_tv_pg_channel_pane_g1

0x8fc7,	// (0x00082e28) single_tv_pg_channel_pane_g2

0x0001,

0xfb70,	// (0x000899d1) single_tv_pg_channel_pane_g

0xeaff,	// (0x00088960) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xeaff,	// (0x00088960) bg_single_mobtv_pg_channel_thumb_pane

0x8fd0,	// (0x00082e31) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0x8fd0,	// (0x00082e31) single_mobtv_pg_channel_thumb_pane_g1

0x8fde,	// (0x00082e3f) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0x8fde,	// (0x00082e3f) single_mobtv_pg_channel_thumb_pane_g2

0x8fea,	// (0x00082e4b) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0x8fea,	// (0x00082e4b) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfb75,	// (0x000899d6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfb75,	// (0x000899d6) single_mobtv_pg_channel_thumb_pane_g

0x8ff6,	// (0x00082e57) single_mobtv_pg_channel_thumb_pane_t1

0x9004,	// (0x00082e65) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfb7c,	// (0x000899dd) single_mobtv_pg_channel_thumb_pane_t

0xe869,	// (0x000886ca) bg_single_mobtv_pg_channel_table_pane_g1

0xe869,	// (0x000886ca) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0x00e7,	// (0x00079f48) bg_single_mobtv_pg_channel_table_pane_g

0x9012,	// (0x00082e73) single_mobtv_pg_channel_table_pane_t1

0x9020,	// (0x00082e81) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfb81,	// (0x000899e2) single_mobtv_pg_channel_table_pane_t

0x9036,	// (0x00082e97) main_mobtv_info_pane_g1_ParamLimits

0x9036,	// (0x00082e97) main_mobtv_info_pane_g1

0x9054,	// (0x00082eb5) main_mobtv_info_pane_t1_ParamLimits

0x9054,	// (0x00082eb5) main_mobtv_info_pane_t1

0x90cc,	// (0x00082f2d) main_mobtv_info_pane_t2_ParamLimits

0x90cc,	// (0x00082f2d) main_mobtv_info_pane_t2

0x0002,

0xfb8b,	// (0x000899ec) main_mobtv_info_pane_t_ParamLimits

0xfb8b,	// (0x000899ec) main_mobtv_info_pane_t

0x915b,	// (0x00082fbc) wait_bar_pane_cp05

0x916d,	// (0x00082fce) main_mobtv_loading_pane_g1_ParamLimits

0x916d,	// (0x00082fce) main_mobtv_loading_pane_g1

0x9180,	// (0x00082fe1) main_mobtv_loading_pane_g2_ParamLimits

0x9180,	// (0x00082fe1) main_mobtv_loading_pane_g2

0x918c,	// (0x00082fed) main_mobtv_loading_pane_g3_ParamLimits

0x918c,	// (0x00082fed) main_mobtv_loading_pane_g3

0x0002,

0xfb92,	// (0x000899f3) main_mobtv_loading_pane_g_ParamLimits

0xfb92,	// (0x000899f3) main_mobtv_loading_pane_g

0x919f,	// (0x00083000) main_mobtv_loading_pane_t1_ParamLimits

0x919f,	// (0x00083000) main_mobtv_loading_pane_t1

0x91b7,	// (0x00083018) main_mobtv_loading_pane_t2_ParamLimits

0x91b7,	// (0x00083018) main_mobtv_loading_pane_t2

0x0001,

0xfb99,	// (0x000899fa) main_mobtv_loading_pane_t_ParamLimits

0xfb99,	// (0x000899fa) main_mobtv_loading_pane_t

0x91db,	// (0x0008303c) wait_bar_pane_cp06_ParamLimits

0x91db,	// (0x0008303c) wait_bar_pane_cp06

0x91ea,	// (0x0008304b) main_mobtv_programe_curr_pane_t1

0x91f8,	// (0x00083059) main_mobtv_programe_curr_pane_t2

0x0001,

0xfb9e,	// (0x000899ff) main_mobtv_programe_curr_pane_t

0x9206,	// (0x00083067) main_mobtv_programe_next_pane_t1

0x9214,	// (0x00083075) main_mobtv_programe_next_pane_t2

0x9222,	// (0x00083083) main_mobtv_programe_next_pane_t3

0x0002,

0xfba3,	// (0x00089a04) main_mobtv_programe_next_pane_t

0x139f,	// (0x0007b200) bg_popup_mobtv_noti_window_pane

0x9230,	// (0x00083091) popup_mobtv_noti_window_g1

0x9238,	// (0x00083099) popup_mobtv_noti_window_t1

0x9246,	// (0x000830a7) popup_mobtv_noti_window_t2

0x0001,

0xfbaa,	// (0x00089a0b) popup_mobtv_noti_window_t

0xe869,	// (0x000886ca) bg_popup_mobtv_noti_window_pane_g1

0x139f,	// (0x0007b200) sc_clock_pane

0x139f,	// (0x0007b200) main_fs_bigclock_pane

0x8243,	// (0x000820a4) blid2_tripm_pane_t4_ParamLimits

0x8243,	// (0x000820a4) blid2_tripm_pane_t4

0x9254,	// (0x000830b5) sc_clock_pane_g1_ParamLimits

0x9254,	// (0x000830b5) sc_clock_pane_g1

0x9266,	// (0x000830c7) sc_clock_pane_t1_ParamLimits

0x9266,	// (0x000830c7) sc_clock_pane_t1

0x9288,	// (0x000830e9) sc_clock_pane_t2_ParamLimits

0x9288,	// (0x000830e9) sc_clock_pane_t2

0x92a0,	// (0x00083101) sc_clock_pane_t3_ParamLimits

0x92a0,	// (0x00083101) sc_clock_pane_t3

0x0004,

0xfbaf,	// (0x00089a10) sc_clock_pane_t_ParamLimits

0xfbaf,	// (0x00089a10) sc_clock_pane_t

0x9d8d,	// (0x00083bee) main_fs_bigclock_indicator_pane_ParamLimits

0x9d8d,	// (0x00083bee) main_fs_bigclock_indicator_pane

0xeacf,	// (0x00088930) main_fs_bigclock_pane_g1_ParamLimits

0xeacf,	// (0x00088930) main_fs_bigclock_pane_g1

0x9d99,	// (0x00083bfa) main_fs_bigclock_pane_t1_ParamLimits

0x9d99,	// (0x00083bfa) main_fs_bigclock_pane_t1

0x9dab,	// (0x00083c0c) main_fs_bigclock_pane_t2_ParamLimits

0x9dab,	// (0x00083c0c) main_fs_bigclock_pane_t2

0x9dbd,	// (0x00083c1e) main_fs_bigclock_pane_t3_ParamLimits

0x9dbd,	// (0x00083c1e) main_fs_bigclock_pane_t3

0x0002,

0xfdb3,	// (0x00089c14) main_fs_bigclock_pane_t_ParamLimits

0xfdb3,	// (0x00089c14) main_fs_bigclock_pane_t

0xdba1,	// (0x00087a02) main_fs_bigclock_indicator_pane_g1

0x8cb3,	// (0x00082b14) ncim_query_content_pane_g2_ParamLimits

0x8cb3,	// (0x00082b14) ncim_query_content_pane_g2

0x0001,

0xfb3c,	// (0x0008999d) ncim_query_content_pane_g_ParamLimits

0xfb3c,	// (0x0008999d) ncim_query_content_pane_g

0x92b9,	// (0x0008311a) sc_clock_pane_t4_ParamLimits

0x92b9,	// (0x0008311a) sc_clock_pane_t4

0xa6bc,	// (0x0008451d) main_radioblah_pane

0x68ef,	// (0x00080750) cell_call4_button_pane_t1_copy1_ParamLimits

0x68ef,	// (0x00080750) cell_call4_button_pane_t1_copy1

0x8b7d,	// (0x000829de) main_ncimui_pane_t1_ParamLimits

0x8b7d,	// (0x000829de) main_ncimui_pane_t1

0x8b97,	// (0x000829f8) main_ncimui_pane_t2_ParamLimits

0x8b97,	// (0x000829f8) main_ncimui_pane_t2

0x0002,

0xfb35,	// (0x00089996) main_ncimui_pane_t_ParamLimits

0xfb35,	// (0x00089996) main_ncimui_pane_t

0x9491,	// (0x000832f2) main_radioblah_anim_pane_ParamLimits

0x9491,	// (0x000832f2) main_radioblah_anim_pane

0x94a2,	// (0x00083303) main_radioblah_info_pane_ParamLimits

0x94a2,	// (0x00083303) main_radioblah_info_pane

0x94c8,	// (0x00083329) main_radioblah_pane_t1_ParamLimits

0x94c8,	// (0x00083329) main_radioblah_pane_t1

0x94e4,	// (0x00083345) main_radioblah_pane_t2_ParamLimits

0x94e4,	// (0x00083345) main_radioblah_pane_t2

0x0003,

0xfbd0,	// (0x00089a31) main_radioblah_pane_t_ParamLimits

0xfbd0,	// (0x00089a31) main_radioblah_pane_t

0x952c,	// (0x0008338d) main_radioblah_rocker_ctrl_pane_ParamLimits

0x952c,	// (0x0008338d) main_radioblah_rocker_ctrl_pane

0x9584,	// (0x000833e5) main_radioblah_info_pane_t1_ParamLimits

0x9584,	// (0x000833e5) main_radioblah_info_pane_t1

0x95be,	// (0x0008341f) main_radioblah_info_pane_t2_ParamLimits

0x95be,	// (0x0008341f) main_radioblah_info_pane_t2

0x0003,

0xfbd9,	// (0x00089a3a) main_radioblah_info_pane_t_ParamLimits

0xfbd9,	// (0x00089a3a) main_radioblah_info_pane_t

0xe869,	// (0x000886ca) main_radioblah_rocker_ctrl_pane_g1

0x9670,	// (0x000834d1) main_radioblah_rocker_ctrl_pane_g2

0x9678,	// (0x000834d9) main_radioblah_rocker_ctrl_pane_g3

0x9680,	// (0x000834e1) main_radioblah_rocker_ctrl_pane_g4

0x9688,	// (0x000834e9) main_radioblah_rocker_ctrl_pane_g5

0x9690,	// (0x000834f1) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfbe2,	// (0x00089a43) main_radioblah_rocker_ctrl_pane_g

0x878e,	// (0x000825ef) main_cset_text2_pane_t1_copy1_ParamLimits

0xe37f,	// (0x000881e0) cam4_image_uncrop_qvga_pane

0xe3d8,	// (0x00088239) vid4_image_uncrop_qcif_pane

0xe543,	// (0x000883a4) cam6_image_uncrop_qvga_pane_ParamLimits

0xe543,	// (0x000883a4) cam6_image_uncrop_qvga_pane

0x864a,	// (0x000824ab) vid6_image_uncrop_qcif_pane_ParamLimits

0x864a,	// (0x000824ab) vid6_image_uncrop_qcif_pane

0x139f,	// (0x0007b200) bg_popup_preview_window_pane_cp03

0x8b33,	// (0x00082994) list_cset_text2_pane

0x8b3b,	// (0x0008299c) main_cset6_text2_pane_g1

0x8b43,	// (0x000829a4) main_cset6_text2_pane_t1

0x9698,	// (0x000834f9) list_cset_text2_pane_t1_ParamLimits

0x9698,	// (0x000834f9) list_cset_text2_pane_t1

0xa6bc,	// (0x0008451d) main_radioblah_pane_ParamLimits

0x9147,	// (0x00082fa8) main_mobtv_info_pane_t3_ParamLimits

0x9147,	// (0x00082fa8) main_mobtv_info_pane_t3

0x94b6,	// (0x00083317) main_radioblah_pane_g1

0x9554,	// (0x000833b5) main_radioblah_info_pane_g1

0x9615,	// (0x00083476) main_radioblah_info_pane_t3_ParamLimits

0x9615,	// (0x00083476) main_radioblah_info_pane_t3

0x3118,	// (0x0007cf79) highlight_cell_cale_month_pane_ParamLimits

0x3118,	// (0x0007cf79) highlight_cell_cale_month_pane

0x139f,	// (0x0007b200) main_phob_fisheye_pane

0xebe7,	// (0x00088a48) scroll_pane_cp0031_ParamLimits

0xebe7,	// (0x00088a48) scroll_pane_cp0031

0x877f,	// (0x000825e0) wait_bar_pane_cp08_ParamLimits

0x8833,	// (0x00082694) cset_list_set_pane_copy1_ParamLimits

0x96b5,	// (0x00083516) highlight_cell_cale_month_pane_g1

0x96bd,	// (0x0008351e) highlight_cell_cale_month_pane_t1

0x7e63,	// (0x00081cc4) list_gen_pane_cp01

0x728b,	// (0x000810ec) scroll_pane_01

0xeab1,	// (0x00088912) list_single_double_fisheye_pane

0xd11c,	// (0x00086f7d) list_double_fisheye_pane_g1_ParamLimits

0xd11c,	// (0x00086f7d) list_double_fisheye_pane_g1

0xe559,	// (0x000883ba) list_double_fisheye_pane_g2_ParamLimits

0xe559,	// (0x000883ba) list_double_fisheye_pane_g2

0xeaba,	// (0x0008891b) list_double_fisheye_pane_g3_ParamLimits

0xeaba,	// (0x0008891b) list_double_fisheye_pane_g3

0x0004,

0xfbef,	// (0x00089a50) list_double_fisheye_pane_g_ParamLimits

0xfbef,	// (0x00089a50) list_double_fisheye_pane_g

0xd134,	// (0x00086f95) list_double_fisheye_pane_t1_ParamLimits

0xd134,	// (0x00086f95) list_double_fisheye_pane_t1

0xd14f,	// (0x00086fb0) list_double_fisheye_pane_t2_ParamLimits

0xd14f,	// (0x00086fb0) list_double_fisheye_pane_t2

0x0001,

0xfbfa,	// (0x00089a5b) list_double_fisheye_pane_t_ParamLimits

0xfbfa,	// (0x00089a5b) list_double_fisheye_pane_t

0x139f,	// (0x0007b200) main_call5_pane

0x92e4,	// (0x00083145) sc_swipe_pane_ParamLimits

0x92e4,	// (0x00083145) sc_swipe_pane

0x96de,	// (0x0008353f) call5_image_pane_ParamLimits

0x96de,	// (0x0008353f) call5_image_pane

0x96fb,	// (0x0008355c) call5_swipe_1_pane_ParamLimits

0x96fb,	// (0x0008355c) call5_swipe_1_pane

0x970e,	// (0x0008356f) call5_swipe_2_pane_ParamLimits

0x970e,	// (0x0008356f) call5_swipe_2_pane

0x9739,	// (0x0008359a) popup_call5_audio_first_window_ParamLimits

0x9739,	// (0x0008359a) popup_call5_audio_first_window

0xeaff,	// (0x00088960) call5_swipe_1_pane_g1_ParamLimits

0xeaff,	// (0x00088960) call5_swipe_1_pane_g1

0x974a,	// (0x000835ab) call5_swipe_1_pane_g2_ParamLimits

0x974a,	// (0x000835ab) call5_swipe_1_pane_g2

0x0001,

0xfbff,	// (0x00089a60) call5_swipe_1_pane_g_ParamLimits

0xfbff,	// (0x00089a60) call5_swipe_1_pane_g

0x9756,	// (0x000835b7) call5_swipe_1_pane_t1_ParamLimits

0x9756,	// (0x000835b7) call5_swipe_1_pane_t1

0xeaff,	// (0x00088960) call5_swipe_2_pane_g1_ParamLimits

0xeaff,	// (0x00088960) call5_swipe_2_pane_g1

0xd171,	// (0x00086fd2) call5_swipe_2_pane_g2_ParamLimits

0xd171,	// (0x00086fd2) call5_swipe_2_pane_g2

0x0001,

0xfc04,	// (0x00089a65) call5_swipe_2_pane_g_ParamLimits

0xfc04,	// (0x00089a65) call5_swipe_2_pane_g

0xd17d,	// (0x00086fde) call5_swipe_2_pane_t1_ParamLimits

0xd17d,	// (0x00086fde) call5_swipe_2_pane_t1

0xd192,	// (0x00086ff3) sc_swipe_pane_g1_ParamLimits

0xd192,	// (0x00086ff3) sc_swipe_pane_g1

0xd19f,	// (0x00087000) sc_swipe_pane_g2_ParamLimits

0xd19f,	// (0x00087000) sc_swipe_pane_g2

0x0001,

0xfc09,	// (0x00089a6a) sc_swipe_pane_g_ParamLimits

0xfc09,	// (0x00089a6a) sc_swipe_pane_g

0xd1ab,	// (0x0008700c) sc_swipe_pane_t1_ParamLimits

0xd1ab,	// (0x0008700c) sc_swipe_pane_t1

0x139f,	// (0x0007b200) main_cmail_launcher_pane

0x976b,	// (0x000835cc) aid_size_cell_cmail_l_ParamLimits

0x976b,	// (0x000835cc) aid_size_cell_cmail_l

0x9785,	// (0x000835e6) grid_cmail_l_pane_ParamLimits

0x9785,	// (0x000835e6) grid_cmail_l_pane

0x97a0,	// (0x00083601) cell_cmail_l_pane_ParamLimits

0x97a0,	// (0x00083601) cell_cmail_l_pane

0x97c6,	// (0x00083627) cell_cmail_l_pane_g1_ParamLimits

0x97c6,	// (0x00083627) cell_cmail_l_pane_g1

0x97d2,	// (0x00083633) cell_cmail_l_pane_t1_ParamLimits

0x97d2,	// (0x00083633) cell_cmail_l_pane_t1

0xd1c0,	// (0x00087021) cell_cmail_l_pane_t2_ParamLimits

0xd1c0,	// (0x00087021) cell_cmail_l_pane_t2

0x0001,

0xfc0e,	// (0x00089a6f) cell_cmail_l_pane_t_ParamLimits

0xfc0e,	// (0x00089a6f) cell_cmail_l_pane_t

0xa6bc,	// (0x0008451d) grid_highlight_pane_cp018_ParamLimits

0xa6bc,	// (0x0008451d) grid_highlight_pane_cp018

0x146f,	// (0x0007b2d0) main2_pane_ParamLimits

0x146f,	// (0x0007b2d0) main2_pane

0xabf2,	// (0x00084a53) popup_sp_fs_action_menu_bg_pane_g1

0xabfa,	// (0x00084a5b) popup_sp_fs_action_menu_bg_pane_g2

0xac02,	// (0x00084a63) popup_sp_fs_action_menu_bg_pane_g3

0xac0a,	// (0x00084a6b) popup_sp_fs_action_menu_bg_pane_g4

0xac12,	// (0x00084a73) popup_sp_fs_action_menu_bg_pane_g5

0xac1a,	// (0x00084a7b) popup_sp_fs_action_menu_bg_pane_g6

0xac22,	// (0x00084a83) popup_sp_fs_action_menu_bg_pane_g7

0xac2a,	// (0x00084a8b) popup_sp_fs_action_menu_bg_pane_g8

0xac32,	// (0x00084a93) popup_sp_fs_action_menu_bg_pane_g9

0xac3a,	// (0x00084a9b) popup_sp_fs_action_menu_bg_pane_g10

0xac3a,	// (0x00084a9b) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00088ff9) popup_sp_fs_action_menu_bg_pane_g

0xae1c,	// (0x00084c7d) list_medium_line_x2_t3_g3_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t3_g3_g1

0xae28,	// (0x00084c89) list_medium_line_x2_t3_g3_g2_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x2_t3_g3_g2

0xae34,	// (0x00084c95) list_medium_line_x2_t3_g3_g3_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000890a9) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000890a9) list_medium_line_x2_t3_g3_g

0xae40,	// (0x00084ca1) list_medium_line_x2_t3_g3_t1_ParamLimits

0xae40,	// (0x00084ca1) list_medium_line_x2_t3_g3_t1

0x0970,	// (0x0007a7d1) list_medium_line_x2_t3_g3_t2_ParamLimits

0x0970,	// (0x0007a7d1) list_medium_line_x2_t3_g3_t2

0xae55,	// (0x00084cb6) list_medium_line_x2_t3_g3_t3_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000890b0) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000890b0) list_medium_line_x2_t3_g3_t

0xae1c,	// (0x00084c7d) list_medium_line_x2_t3_g2_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t3_g2_g1

0xae34,	// (0x00084c95) list_medium_line_x2_t3_g2_g2_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000890b7) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000890b7) list_medium_line_x2_t3_g2_g

0xae6a,	// (0x00084ccb) list_medium_line_x2_t3_g2_t1_ParamLimits

0xae6a,	// (0x00084ccb) list_medium_line_x2_t3_g2_t1

0xae80,	// (0x00084ce1) list_medium_line_x2_t3_g2_t2_ParamLimits

0xae80,	// (0x00084ce1) list_medium_line_x2_t3_g2_t2

0xae92,	// (0x00084cf3) list_medium_line_x2_t3_g2_t3_ParamLimits

0xae92,	// (0x00084cf3) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000890bc) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000890bc) list_medium_line_x2_t3_g2_t

0xae1c,	// (0x00084c7d) list_medium_line_x2_t4_g4_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t4_g4_g1

0xaeb0,	// (0x00084d11) list_medium_line_x2_t4_g4_g2_ParamLimits

0xaeb0,	// (0x00084d11) list_medium_line_x2_t4_g4_g2

0xae28,	// (0x00084c89) list_medium_line_x2_t4_g4_g3_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x2_t4_g4_g3

0xaebc,	// (0x00084d1d) list_medium_line_x2_t4_g4_g4_ParamLimits

0xaebc,	// (0x00084d1d) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000890c3) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000890c3) list_medium_line_x2_t4_g4_g

0x0984,	// (0x0007a7e5) list_medium_line_x2_t4_g4_t1_ParamLimits

0x0984,	// (0x0007a7e5) list_medium_line_x2_t4_g4_t1

0x099b,	// (0x0007a7fc) list_medium_line_x2_t4_g4_t2_ParamLimits

0x099b,	// (0x0007a7fc) list_medium_line_x2_t4_g4_t2

0x09b0,	// (0x0007a811) list_medium_line_x2_t4_g4_t3_ParamLimits

0x09b0,	// (0x0007a811) list_medium_line_x2_t4_g4_t3

0xaec8,	// (0x00084d29) list_medium_line_x2_t4_g4_t4_ParamLimits

0xaec8,	// (0x00084d29) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000890cc) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000890cc) list_medium_line_x2_t4_g4_t

0xae1c,	// (0x00084c7d) list_medium_line_x2_t2_g4_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t2_g4_g1

0xaeb0,	// (0x00084d11) list_medium_line_x2_t2_g4_g2_ParamLimits

0xaeb0,	// (0x00084d11) list_medium_line_x2_t2_g4_g2

0xae28,	// (0x00084c89) list_medium_line_x2_t2_g4_g3_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x2_t2_g4_g3

0xae34,	// (0x00084c95) list_medium_line_x2_t2_g4_g4_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x00089133) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x00089133) list_medium_line_x2_t2_g4_g

0xb1b2,	// (0x00085013) list_medium_line_x2_t2_g4_t1_ParamLimits

0xb1b2,	// (0x00085013) list_medium_line_x2_t2_g4_t1

0xae55,	// (0x00084cb6) list_medium_line_x2_t2_g4_t2_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x0008913c) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x0008913c) list_medium_line_x2_t2_g4_t

0xae1c,	// (0x00084c7d) list_medium_line_x2_t2_g3_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t2_g3_g1

0xae28,	// (0x00084c89) list_medium_line_x2_t2_g3_g2_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x2_t2_g3_g2

0xae34,	// (0x00084c95) list_medium_line_x2_t2_g3_g3_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000890a9) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000890a9) list_medium_line_x2_t2_g3_g

0xb1c7,	// (0x00085028) list_medium_line_x2_t2_g3_t1_ParamLimits

0xb1c7,	// (0x00085028) list_medium_line_x2_t2_g3_t1

0xae55,	// (0x00084cb6) list_medium_line_x2_t2_g3_t2_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x00089141) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x00089141) list_medium_line_x2_t2_g3_t

0x32fe,	// (0x0007d15f) main_sp_fs_list_pane_ParamLimits

0x32fe,	// (0x0007d15f) main_sp_fs_list_pane

0x330a,	// (0x0007d16b) sp_fs_scroll_pane_ParamLimits

0x330a,	// (0x0007d16b) sp_fs_scroll_pane

0x09c2,	// (0x0007a823) list_medium_line_x2_t3_t1

0x09d2,	// (0x0007a833) list_medium_line_x2_t3_t2

0xb3ab,	// (0x0008520c) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x0008918c) list_medium_line_x2_t3_t

0x09e0,	// (0x0007a841) list_medium_line_x3_t4_t1

0x09f0,	// (0x0007a851) list_medium_line_x3_t4_t2

0xb3b9,	// (0x0008521a) list_medium_line_x3_t4_t3

0xb3ab,	// (0x0008520c) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x00089193) list_medium_line_x3_t4_t

0x09fe,	// (0x0007a85f) list_medium_line_x4_t5_t1

0x0a0e,	// (0x0007a86f) list_medium_line_x4_t5_t2

0xb3b9,	// (0x0008521a) list_medium_line_x4_t5_t3

0xb3c7,	// (0x00085228) list_medium_line_x4_t5_t4

0xb3ab,	// (0x0008520c) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x0008919c) list_medium_line_x4_t5_t

0xae1c,	// (0x00084c7d) list_medium_line_t4_g4_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_t4_g4_g1

0xaebc,	// (0x00084d1d) list_medium_line_t4_g4_g2_ParamLimits

0xaebc,	// (0x00084d1d) list_medium_line_t4_g4_g2

0xb3d5,	// (0x00085236) list_medium_line_t4_g4_g3_ParamLimits

0xb3d5,	// (0x00085236) list_medium_line_t4_g4_g3

0xae34,	// (0x00084c95) list_medium_line_t4_g4_g4_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000891a7) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000891a7) list_medium_line_t4_g4_g

0xb3e1,	// (0x00085242) list_medium_line_t4_g4_t1_ParamLimits

0xb3e1,	// (0x00085242) list_medium_line_t4_g4_t1

0xb3f6,	// (0x00085257) list_medium_line_t4_g4_t2_ParamLimits

0xb3f6,	// (0x00085257) list_medium_line_t4_g4_t2

0xb40c,	// (0x0008526d) list_medium_line_t4_g4_t3_ParamLimits

0xb40c,	// (0x0008526d) list_medium_line_t4_g4_t3

0xae55,	// (0x00084cb6) list_medium_line_t4_g4_t4_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000891b0) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000891b0) list_medium_line_t4_g4_t

0x33b4,	// (0x0007d215) chi_dic_find_pane_g1

0x4488,	// (0x0007e2e9) main_tport_pane

0xcf25,	// (0x00086d86) list_medium_line_plain_t1

0xcf33,	// (0x00086d94) list_medium_line_t2_g2_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_t2_g2_g1

0xcf3f,	// (0x00086da0) list_medium_line_t2_g2_g2_ParamLimits

0xcf3f,	// (0x00086da0) list_medium_line_t2_g2_g2

0x0001,

0xf946,	// (0x000897a7) list_medium_line_t2_g2_g_ParamLimits

0xf946,	// (0x000897a7) list_medium_line_t2_g2_g

0x0be7,	// (0x0007aa48) list_medium_line_t2_g2_t1_ParamLimits

0x0be7,	// (0x0007aa48) list_medium_line_t2_g2_t1

0x0c01,	// (0x0007aa62) list_medium_line_t2_g2_t2_ParamLimits

0x0c01,	// (0x0007aa62) list_medium_line_t2_g2_t2

0x0001,

0xf94b,	// (0x000897ac) list_medium_line_t2_g2_t_ParamLimits

0xf94b,	// (0x000897ac) list_medium_line_t2_g2_t

0xcfe7,	// (0x00086e48) aid_sp_fs_list_icon_a_sm

0xe532,	// (0x00088393) aid_sp_fs_list_icon_d

0xeaa0,	// (0x00088901) aid_sp_fs_text_primary

0xcfef,	// (0x00086e50) aid_sp_fs_text_secondary

0xcff8,	// (0x00086e59) list_medium_line

0xcff8,	// (0x00086e59) list_medium_line_g2

0xcff8,	// (0x00086e59) list_medium_line_g3

0xcff8,	// (0x00086e59) list_medium_line_plain

0xcff8,	// (0x00086e59) list_medium_line_plain_t2

0xcff8,	// (0x00086e59) list_medium_line_plain_t3

0xcff8,	// (0x00086e59) list_medium_line_right_icon

0xcff8,	// (0x00086e59) list_medium_line_right_iconx2

0xcff8,	// (0x00086e59) list_medium_line_t2

0xcff8,	// (0x00086e59) list_medium_line_t2_g2

0xcff8,	// (0x00086e59) list_medium_line_t2_g3

0xcff8,	// (0x00086e59) list_medium_line_t2_right_icon

0xcff8,	// (0x00086e59) list_medium_line_t2_right_iconx2

0xcff8,	// (0x00086e59) list_medium_line_t3

0xcff8,	// (0x00086e59) list_medium_line_t3_g2

0xcff8,	// (0x00086e59) list_medium_line_t3_g3

0xcff8,	// (0x00086e59) list_medium_line_t3_right_iconx2

0xd001,	// (0x00086e62) list_medium_line_t4_g4

0xe53a,	// (0x0008839b) list_medium_line_x2

0xe53a,	// (0x0008839b) list_medium_line_x2_t2_g2

0xe53a,	// (0x0008839b) list_medium_line_x2_t2_g3

0xe53a,	// (0x0008839b) list_medium_line_x2_t2_g4

0xe53a,	// (0x0008839b) list_medium_line_x2_t3

0xe53a,	// (0x0008839b) list_medium_line_x2_t3_g2

0xe53a,	// (0x0008839b) list_medium_line_x2_t3_g3

0xe53a,	// (0x0008839b) list_medium_line_x2_t3_g4

0xe53a,	// (0x0008839b) list_medium_line_x2_t4_g2

0xe53a,	// (0x0008839b) list_medium_line_x2_t4_g4

0xd00a,	// (0x00086e6b) list_medium_line_x3

0xd00a,	// (0x00086e6b) list_medium_line_x3_t4

0xd00a,	// (0x00086e6b) list_medium_line_x3_t4_g4

0xd001,	// (0x00086e62) list_medium_line_x4_t4

0xd001,	// (0x00086e62) list_medium_line_x4_t4_g7

0xd001,	// (0x00086e62) list_medium_line_x4_t5

0xd013,	// (0x00086e74) list_single_fs_dyc_pane_ParamLimits

0xd013,	// (0x00086e74) list_single_fs_dyc_pane

0xae1c,	// (0x00084c7d) list_medium_line_x4_t4_g7_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x4_t4_g7_g1

0xd04b,	// (0x00086eac) list_medium_line_x4_t4_g7_g2_ParamLimits

0xd04b,	// (0x00086eac) list_medium_line_x4_t4_g7_g2

0xd057,	// (0x00086eb8) list_medium_line_x4_t4_g7_g3_ParamLimits

0xd057,	// (0x00086eb8) list_medium_line_x4_t4_g7_g3

0xd066,	// (0x00086ec7) list_medium_line_x4_t4_g7_g4_ParamLimits

0xd066,	// (0x00086ec7) list_medium_line_x4_t4_g7_g4

0xd072,	// (0x00086ed3) list_medium_line_x4_t4_g7_g5_ParamLimits

0xd072,	// (0x00086ed3) list_medium_line_x4_t4_g7_g5

0xd081,	// (0x00086ee2) list_medium_line_x4_t4_g7_g6_ParamLimits

0xd081,	// (0x00086ee2) list_medium_line_x4_t4_g7_g6

0xd090,	// (0x00086ef1) list_medium_line_x4_t4_g7_g7_ParamLimits

0xd090,	// (0x00086ef1) list_medium_line_x4_t4_g7_g7

0x0006,

0xfb16,	// (0x00089977) list_medium_line_x4_t4_g7_g_ParamLimits

0xfb16,	// (0x00089977) list_medium_line_x4_t4_g7_g

0xd09c,	// (0x00086efd) list_medium_line_x4_t4_g7_t1_ParamLimits

0xd09c,	// (0x00086efd) list_medium_line_x4_t4_g7_t1

0xd0b1,	// (0x00086f12) list_medium_line_x4_t4_g7_t2_ParamLimits

0xd0b1,	// (0x00086f12) list_medium_line_x4_t4_g7_t2

0xd0c6,	// (0x00086f27) list_medium_line_x4_t4_g7_t3_ParamLimits

0xd0c6,	// (0x00086f27) list_medium_line_x4_t4_g7_t3

0xd0db,	// (0x00086f3c) list_medium_line_x4_t4_g7_t4_ParamLimits

0xd0db,	// (0x00086f3c) list_medium_line_x4_t4_g7_t4

0xd0ed,	// (0x00086f4e) list_medium_line_x4_t4_g7_t5_ParamLimits

0xd0ed,	// (0x00086f4e) list_medium_line_x4_t4_g7_t5

0x0004,

0xfb25,	// (0x00089986) list_medium_line_x4_t4_g7_t_ParamLimits

0xfb25,	// (0x00089986) list_medium_line_x4_t4_g7_t

0xd0ff,	// (0x00086f60) list_single_dyc_row_pane_ParamLimits

0xd0ff,	// (0x00086f60) list_single_dyc_row_pane

0x96cb,	// (0x0008352c) call5_gesture_pane_ParamLimits

0x96cb,	// (0x0008352c) call5_gesture_pane

0x9721,	// (0x00083582) call5_windows_pane_ParamLimits

0x9721,	// (0x00083582) call5_windows_pane

0x97e8,	// (0x00083649) call5_swipe_1_pane_cp_ParamLimits

0x97e8,	// (0x00083649) call5_swipe_1_pane_cp

0x97f4,	// (0x00083655) call5_swipe_2_pane_cp_ParamLimits

0x97f4,	// (0x00083655) call5_swipe_2_pane_cp

0xb885,	// (0x000856e6) call5_image_pane_cp

0x9800,	// (0x00083661) popup_call5_audio_first_window_cp_ParamLimits

0x9800,	// (0x00083661) popup_call5_audio_first_window_cp

0xd192,	// (0x00086ff3) call5_swipe_1_pane_g1_cp_ParamLimits

0xd192,	// (0x00086ff3) call5_swipe_1_pane_g1_cp

0xd1d2,	// (0x00087033) call5_swipe_1_pane_g2_cp

0xd1ab,	// (0x0008700c) call5_swipe_1_pane_t1_cp_ParamLimits

0xd1ab,	// (0x0008700c) call5_swipe_1_pane_t1_cp

0xd192,	// (0x00086ff3) call5_swipe_2_pane_g1_cp_ParamLimits

0xd192,	// (0x00086ff3) call5_swipe_2_pane_g1_cp

0xd1da,	// (0x0008703b) call5_swipe_2_pane_g2_cp

0xd1e2,	// (0x00087043) call5_swipe_2_pane_t1_cp_ParamLimits

0xd1e2,	// (0x00087043) call5_swipe_2_pane_t1_cp

0xa6bc,	// (0x0008451d) main_sp_fs_email_pane

0xd1f7,	// (0x00087058) main_sp_fs_listscroll_pane_te

0xd200,	// (0x00087061) popup_sp_fs_action_menu_pane_ParamLimits

0xd200,	// (0x00087061) popup_sp_fs_action_menu_pane

0xe869,	// (0x000886ca) bg_sp_fs_ctrlbar_pane_g1

0xd242,	// (0x000870a3) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd24b,	// (0x000870ac) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd254,	// (0x000870b5) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xe869,	// (0x000886ca) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfc13,	// (0x00089a74) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xe64c,	// (0x000884ad) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xe64c,	// (0x000884ad) bg_sp_fs_ctrlbar_ddmenu_pane

0xd25d,	// (0x000870be) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd25d,	// (0x000870be) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd269,	// (0x000870ca) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd269,	// (0x000870ca) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfc1c,	// (0x00089a7d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfc1c,	// (0x00089a7d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd275,	// (0x000870d6) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd275,	// (0x000870d6) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd28f,	// (0x000870f0) list_medium_line_t2_right_icon_g1

0x0d7d,	// (0x0007abde) list_medium_line_t2_right_icon_t1

0x0d8d,	// (0x0007abee) list_medium_line_t2_right_icon_t2

0x0001,

0xfc21,	// (0x00089a82) list_medium_line_t2_right_icon_t

0xcd24,	// (0x00086b85) bg_sp_fs_ctrlbar_pane_ParamLimits

0xcd24,	// (0x00086b85) bg_sp_fs_ctrlbar_pane

0x9857,	// (0x000836b8) main_sp_fs_ctrlbar_button_pane_cp01

0x9861,	// (0x000836c2) main_sp_fs_ctrlbar_ddmenu_pane

0xd2cf,	// (0x00087130) main_sp_fs_ctrlbar_pane_g1

0xd2db,	// (0x0008713c) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfc26,	// (0x00089a87) main_sp_fs_ctrlbar_pane_g

0xd2e7,	// (0x00087148) main_sp_fs_ctrlbar_pane_t1

0x0d9f,	// (0x0007ac00) main_sp_fs_ctrlbar_pane

0x0dc3,	// (0x0007ac24) main_sp_fs_listscroll_pane_te_cp01

0x0de3,	// (0x0007ac44) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x0de3,	// (0x0007ac44) popup_sp_fs_action_menu_pane_cp01

0xa6bc,	// (0x0008451d) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa6bc,	// (0x0008451d) bg_sp_fs_highlight_list_pane_cp01

0xd30c,	// (0x0008716d) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd30c,	// (0x0008716d) sp_fs_action_menu_list_gene_pane_g1

0xd31b,	// (0x0008717c) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd31b,	// (0x0008717c) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfc30,	// (0x00089a91) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfc30,	// (0x00089a91) sp_fs_action_menu_list_gene_pane_g

0xd328,	// (0x00087189) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd328,	// (0x00087189) sp_fs_action_menu_list_gene_pane_t1

0xd340,	// (0x000871a1) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd340,	// (0x000871a1) sp_fs_action_menu_list_gene_pane

0xd35f,	// (0x000871c0) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd35f,	// (0x000871c0) popup_sp_fs_action_menu_bg_pane

0xd36d,	// (0x000871ce) sp_fs_action_menu_list_pane_ParamLimits

0xd36d,	// (0x000871ce) sp_fs_action_menu_list_pane

0xd38d,	// (0x000871ee) sp_fs_scroll_pane_cp01_ParamLimits

0xd38d,	// (0x000871ee) sp_fs_scroll_pane_cp01

0x0e13,	// (0x0007ac74) list_medium_line_plain_t2_t1

0x0e23,	// (0x0007ac84) list_medium_line_plain_t2_t2

0x0001,

0xfc35,	// (0x00089a96) list_medium_line_plain_t2_t

0x0e33,	// (0x0007ac94) list_medium_line_plain_t3_t1

0x0e43,	// (0x0007aca4) list_medium_line_plain_t3_t2

0x0e51,	// (0x0007acb2) list_medium_line_plain_t3_t3

0x0002,

0xfc3a,	// (0x00089a9b) list_medium_line_plain_t3_t

0xae1c,	// (0x00084c7d) list_medium_line_x2_t2_g2_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t2_g2_g1

0xae34,	// (0x00084c95) list_medium_line_x2_t2_g2_g2_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000890b7) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000890b7) list_medium_line_x2_t2_g2_g

0xb3e1,	// (0x00085242) list_medium_line_x2_t2_g2_t1_ParamLimits

0xb3e1,	// (0x00085242) list_medium_line_x2_t2_g2_t1

0xae55,	// (0x00084cb6) list_medium_line_x2_t2_g2_t2_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_x2_t2_g2_t2

0x0001,

0xfc41,	// (0x00089aa2) list_medium_line_x2_t2_g2_t_ParamLimits

0xfc41,	// (0x00089aa2) list_medium_line_x2_t2_g2_t

0xae1c,	// (0x00084c7d) list_medium_line_x2_t4_g2_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t4_g2_g1

0xd3b3,	// (0x00087214) list_medium_line_x2_t4_g2_g2_ParamLimits

0xd3b3,	// (0x00087214) list_medium_line_x2_t4_g2_g2

0x0001,

0xfc46,	// (0x00089aa7) list_medium_line_x2_t4_g2_g_ParamLimits

0xfc46,	// (0x00089aa7) list_medium_line_x2_t4_g2_g

0x0e5f,	// (0x0007acc0) list_medium_line_x2_t4_g2_t1_ParamLimits

0x0e5f,	// (0x0007acc0) list_medium_line_x2_t4_g2_t1

0x0e76,	// (0x0007acd7) list_medium_line_x2_t4_g2_t2_ParamLimits

0x0e76,	// (0x0007acd7) list_medium_line_x2_t4_g2_t2

0x0e8b,	// (0x0007acec) list_medium_line_x2_t4_g2_t3_ParamLimits

0x0e8b,	// (0x0007acec) list_medium_line_x2_t4_g2_t3

0xae55,	// (0x00084cb6) list_medium_line_x2_t4_g2_t4_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_x2_t4_g2_t4

0x0003,

0xfc4b,	// (0x00089aac) list_medium_line_x2_t4_g2_t_ParamLimits

0xfc4b,	// (0x00089aac) list_medium_line_x2_t4_g2_t

0xd3c5,	// (0x00087226) list_medium_line_t3_right_iconx2_g1

0xd28f,	// (0x000870f0) list_medium_line_t3_right_iconx2_g2

0x0e9d,	// (0x0007acfe) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfc54,	// (0x00089ab5) list_medium_line_t3_right_iconx2_g

0x0ea7,	// (0x0007ad08) list_medium_line_t3_right_iconx2_t1

0x0eb7,	// (0x0007ad18) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfc5b,	// (0x00089abc) list_medium_line_t3_right_iconx2_t

0xae1c,	// (0x00084c7d) list_medium_line_x3_t4_g4_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x3_t4_g4_g1

0xae28,	// (0x00084c89) list_medium_line_x3_t4_g4_g2_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x3_t4_g4_g2

0xaebc,	// (0x00084d1d) list_medium_line_x3_t4_g4_g3_ParamLimits

0xaebc,	// (0x00084d1d) list_medium_line_x3_t4_g4_g3

0xd3cd,	// (0x0008722e) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd3cd,	// (0x0008722e) list_medium_line_x3_t4_g4_g4

0x0003,

0xfc60,	// (0x00089ac1) list_medium_line_x3_t4_g4_g_ParamLimits

0xfc60,	// (0x00089ac1) list_medium_line_x3_t4_g4_g

0x0ec5,	// (0x0007ad26) list_medium_line_x3_t4_g4_t1_ParamLimits

0x0ec5,	// (0x0007ad26) list_medium_line_x3_t4_g4_t1

0x0edc,	// (0x0007ad3d) list_medium_line_x3_t4_g4_t2_ParamLimits

0x0edc,	// (0x0007ad3d) list_medium_line_x3_t4_g4_t2

0xd3d9,	// (0x0008723a) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd3d9,	// (0x0008723a) list_medium_line_x3_t4_g4_t3

0xd3ee,	// (0x0008724f) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd3ee,	// (0x0008724f) list_medium_line_x3_t4_g4_t4

0x0003,

0xfc69,	// (0x00089aca) list_medium_line_x3_t4_g4_t_ParamLimits

0xfc69,	// (0x00089aca) list_medium_line_x3_t4_g4_t

0x0ef7,	// (0x0007ad58) list_single_dyc_row_text_pane_t1_ParamLimits

0x0ef7,	// (0x0007ad58) list_single_dyc_row_text_pane_t1

0x0f40,	// (0x0007ada1) list_single_dyc_row_text_pane_t2_ParamLimits

0x0f40,	// (0x0007ada1) list_single_dyc_row_text_pane_t2

0xd40b,	// (0x0008726c) list_single_dyc_row_text_pane_t3_ParamLimits

0xd40b,	// (0x0008726c) list_single_dyc_row_text_pane_t3

0x0002,

0xfc72,	// (0x00089ad3) list_single_dyc_row_text_pane_t_ParamLimits

0xfc72,	// (0x00089ad3) list_single_dyc_row_text_pane_t

0xd41d,	// (0x0008727e) list_single_dyc_row_pane_g1_ParamLimits

0xd41d,	// (0x0008727e) list_single_dyc_row_pane_g1

0xd429,	// (0x0008728a) list_single_dyc_row_pane_g2_ParamLimits

0xd429,	// (0x0008728a) list_single_dyc_row_pane_g2

0xd435,	// (0x00087296) list_single_dyc_row_pane_g3_ParamLimits

0xd435,	// (0x00087296) list_single_dyc_row_pane_g3

0xd441,	// (0x000872a2) list_single_dyc_row_pane_g4_ParamLimits

0xd441,	// (0x000872a2) list_single_dyc_row_pane_g4

0x0003,

0xfc79,	// (0x00089ada) list_single_dyc_row_pane_g_ParamLimits

0xfc79,	// (0x00089ada) list_single_dyc_row_pane_g

0xd44d,	// (0x000872ae) list_single_dyc_row_text_pane_ParamLimits

0xd44d,	// (0x000872ae) list_single_dyc_row_text_pane

0x139f,	// (0x0007b200) bg_sp_fs_scroll_pane

0xd46c,	// (0x000872cd) thumb_sp_fs_scroll_pane

0xcf33,	// (0x00086d94) list_medium_line_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_g1

0xd475,	// (0x000872d6) list_medium_line_t1_ParamLimits

0xd475,	// (0x000872d6) list_medium_line_t1

0xae1c,	// (0x00084c7d) list_medium_line_x2_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_g1

0xae28,	// (0x00084c89) list_medium_line_x2_g2_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x2_g2

0x0001,

0xfc82,	// (0x00089ae3) list_medium_line_x2_g_ParamLimits

0xfc82,	// (0x00089ae3) list_medium_line_x2_g

0xd48a,	// (0x000872eb) list_medium_line_x2_t1_ParamLimits

0xd48a,	// (0x000872eb) list_medium_line_x2_t1

0xae1c,	// (0x00084c7d) list_medium_line_x3_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x3_g1

0xae28,	// (0x00084c89) list_medium_line_x3_g2_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x3_g2

0x0001,

0xfc82,	// (0x00089ae3) list_medium_line_x3_g_ParamLimits

0xfc82,	// (0x00089ae3) list_medium_line_x3_g

0xd48a,	// (0x000872eb) list_medium_line_x3_t1_ParamLimits

0xd48a,	// (0x000872eb) list_medium_line_x3_t1

0xd4a0,	// (0x00087301) thumb_sp_fs_scroll_pane_g1

0xd4a9,	// (0x0008730a) thumb_sp_fs_scroll_pane_g2

0xd4b2,	// (0x00087313) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfc87,	// (0x00089ae8) thumb_sp_fs_scroll_pane_g

0xd4a0,	// (0x00087301) bg_sp_fs_scroll_pane_g1

0xd4a9,	// (0x0008730a) bg_sp_fs_scroll_pane_g2

0xd4b2,	// (0x00087313) bg_sp_fs_scroll_pane_g3

0x0002,

0xfc87,	// (0x00089ae8) bg_sp_fs_scroll_pane_g

0xae1c,	// (0x00084c7d) list_medium_line_x2_t3_g4_g1_ParamLimits

0xae1c,	// (0x00084c7d) list_medium_line_x2_t3_g4_g1

0xaeb0,	// (0x00084d11) list_medium_line_x2_t3_g4_g2_ParamLimits

0xaeb0,	// (0x00084d11) list_medium_line_x2_t3_g4_g2

0xae28,	// (0x00084c89) list_medium_line_x2_t3_g4_g3_ParamLimits

0xae28,	// (0x00084c89) list_medium_line_x2_t3_g4_g3

0xae34,	// (0x00084c95) list_medium_line_x2_t3_g4_g4_ParamLimits

0xae34,	// (0x00084c95) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x00089133) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x00089133) list_medium_line_x2_t3_g4_g

0x0f9a,	// (0x0007adfb) list_medium_line_x2_t3_g4_t1_ParamLimits

0x0f9a,	// (0x0007adfb) list_medium_line_x2_t3_g4_t1

0x0fb4,	// (0x0007ae15) list_medium_line_x2_t3_g4_t2_ParamLimits

0x0fb4,	// (0x0007ae15) list_medium_line_x2_t3_g4_t2

0xae55,	// (0x00084cb6) list_medium_line_x2_t3_g4_t3_ParamLimits

0xae55,	// (0x00084cb6) list_medium_line_x2_t3_g4_t3

0x0002,

0xfc8e,	// (0x00089aef) list_medium_line_x2_t3_g4_t_ParamLimits

0xfc8e,	// (0x00089aef) list_medium_line_x2_t3_g4_t

0xcf33,	// (0x00086d94) list_medium_line_g2_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_g2_g1

0xcf3f,	// (0x00086da0) list_medium_line_g2_g2_ParamLimits

0xcf3f,	// (0x00086da0) list_medium_line_g2_g2

0x0001,

0xf946,	// (0x000897a7) list_medium_line_g2_g_ParamLimits

0xf946,	// (0x000897a7) list_medium_line_g2_g

0xd4bb,	// (0x0008731c) list_medium_line_g2_t1_ParamLimits

0xd4bb,	// (0x0008731c) list_medium_line_g2_t1

0xcf33,	// (0x00086d94) list_medium_line_t3_g2_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_t3_g2_g1

0xcf3f,	// (0x00086da0) list_medium_line_t3_g2_g2_ParamLimits

0xcf3f,	// (0x00086da0) list_medium_line_t3_g2_g2

0x0001,

0xf946,	// (0x000897a7) list_medium_line_t3_g2_g_ParamLimits

0xf946,	// (0x000897a7) list_medium_line_t3_g2_g

0x0fcd,	// (0x0007ae2e) list_medium_line_t3_g2_t1_ParamLimits

0x0fcd,	// (0x0007ae2e) list_medium_line_t3_g2_t1

0x0fe4,	// (0x0007ae45) list_medium_line_t3_g2_t2_ParamLimits

0x0fe4,	// (0x0007ae45) list_medium_line_t3_g2_t2

0x0ff9,	// (0x0007ae5a) list_medium_line_t3_g2_t3_ParamLimits

0x0ff9,	// (0x0007ae5a) list_medium_line_t3_g2_t3

0x0002,

0xfc95,	// (0x00089af6) list_medium_line_t3_g2_t_ParamLimits

0xfc95,	// (0x00089af6) list_medium_line_t3_g2_t

0xd28f,	// (0x000870f0) list_medium_line_right_icon_g1

0xd4d0,	// (0x00087331) list_medium_line_right_icon_t1

0xcf33,	// (0x00086d94) list_medium_line_t2_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_t2_g1

0x1012,	// (0x0007ae73) list_medium_line_t2_t1_ParamLimits

0x1012,	// (0x0007ae73) list_medium_line_t2_t1

0x102c,	// (0x0007ae8d) list_medium_line_t2_t2_ParamLimits

0x102c,	// (0x0007ae8d) list_medium_line_t2_t2

0x0001,

0xfc9c,	// (0x00089afd) list_medium_line_t2_t_ParamLimits

0xfc9c,	// (0x00089afd) list_medium_line_t2_t

0xcf33,	// (0x00086d94) list_medium_line_t3_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_t3_g1

0x1045,	// (0x0007aea6) list_medium_line_t3_t1_ParamLimits

0x1045,	// (0x0007aea6) list_medium_line_t3_t1

0x105f,	// (0x0007aec0) list_medium_line_t3_t2_ParamLimits

0x105f,	// (0x0007aec0) list_medium_line_t3_t2

0x1074,	// (0x0007aed5) list_medium_line_t3_t3_ParamLimits

0x1074,	// (0x0007aed5) list_medium_line_t3_t3

0x0002,

0xfca1,	// (0x00089b02) list_medium_line_t3_t_ParamLimits

0xfca1,	// (0x00089b02) list_medium_line_t3_t

0xcf33,	// (0x00086d94) list_medium_line_g3_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_g3_g1

0xd4de,	// (0x0008733f) list_medium_line_g3_g2_ParamLimits

0xd4de,	// (0x0008733f) list_medium_line_g3_g2

0xcf3f,	// (0x00086da0) list_medium_line_g3_g3_ParamLimits

0xcf3f,	// (0x00086da0) list_medium_line_g3_g3

0x0002,

0xfca8,	// (0x00089b09) list_medium_line_g3_g_ParamLimits

0xfca8,	// (0x00089b09) list_medium_line_g3_g

0xd4ea,	// (0x0008734b) list_medium_line_g3_t1_ParamLimits

0xd4ea,	// (0x0008734b) list_medium_line_g3_t1

0xcf33,	// (0x00086d94) list_medium_line_t2_g3_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_t2_g3_g1

0xd4de,	// (0x0008733f) list_medium_line_t2_g3_g2_ParamLimits

0xd4de,	// (0x0008733f) list_medium_line_t2_g3_g2

0xcf3f,	// (0x00086da0) list_medium_line_t2_g3_g3_ParamLimits

0xcf3f,	// (0x00086da0) list_medium_line_t2_g3_g3

0x0002,

0xfca8,	// (0x00089b09) list_medium_line_t2_g3_g_ParamLimits

0xfca8,	// (0x00089b09) list_medium_line_t2_g3_g

0x1089,	// (0x0007aeea) list_medium_line_t2_g3_t1_ParamLimits

0x1089,	// (0x0007aeea) list_medium_line_t2_g3_t1

0x10a0,	// (0x0007af01) list_medium_line_t2_g3_t2_ParamLimits

0x10a0,	// (0x0007af01) list_medium_line_t2_g3_t2

0x0001,

0xfcaf,	// (0x00089b10) list_medium_line_t2_g3_t_ParamLimits

0xfcaf,	// (0x00089b10) list_medium_line_t2_g3_t

0xcf33,	// (0x00086d94) list_medium_line_t3_g3_g1_ParamLimits

0xcf33,	// (0x00086d94) list_medium_line_t3_g3_g1

0xd4de,	// (0x0008733f) list_medium_line_t3_g3_g2_ParamLimits

0xd4de,	// (0x0008733f) list_medium_line_t3_g3_g2

0xcf3f,	// (0x00086da0) list_medium_line_t3_g3_g3_ParamLimits

0xcf3f,	// (0x00086da0) list_medium_line_t3_g3_g3

0x0002,

0xfca8,	// (0x00089b09) list_medium_line_t3_g3_g_ParamLimits

0xfca8,	// (0x00089b09) list_medium_line_t3_g3_g

0x10bb,	// (0x0007af1c) list_medium_line_t3_g3_t1_ParamLimits

0x10bb,	// (0x0007af1c) list_medium_line_t3_g3_t1

0x10d4,	// (0x0007af35) list_medium_line_t3_g3_t2_ParamLimits

0x10d4,	// (0x0007af35) list_medium_line_t3_g3_t2

0x10ea,	// (0x0007af4b) list_medium_line_t3_g3_t3_ParamLimits

0x10ea,	// (0x0007af4b) list_medium_line_t3_g3_t3

0x0002,

0xfcb4,	// (0x00089b15) list_medium_line_t3_g3_t_ParamLimits

0xfcb4,	// (0x00089b15) list_medium_line_t3_g3_t

0xd3c5,	// (0x00087226) list_medium_line_right_iconx2_g1

0xd28f,	// (0x000870f0) list_medium_line_right_iconx2_g2

0x0001,

0xfcbb,	// (0x00089b1c) list_medium_line_right_iconx2_g

0xd4ff,	// (0x00087360) list_medium_line_right_iconx2_t1

0xd3c5,	// (0x00087226) list_medium_line_t2_right_iconx2_g1

0xd28f,	// (0x000870f0) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfcbb,	// (0x00089b1c) list_medium_line_t2_right_iconx2_g

0x1104,	// (0x0007af65) list_medium_line_t2_right_iconx2_t1

0x1114,	// (0x0007af75) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfcc0,	// (0x00089b21) list_medium_line_t2_right_iconx2_t

0xd50d,	// (0x0008736e) list_medium_line_x4_t4_t1

0x1126,	// (0x0007af87) list_medium_line_x4_t4_t2

0x1136,	// (0x0007af97) list_medium_line_x4_t4_t3

0x1146,	// (0x0007afa7) list_medium_line_x4_t4_t4

0x0003,

0xfcc5,	// (0x00089b26) list_medium_line_x4_t4_t

0x98ae,	// (0x0008370f) tport_appsw_pane_ParamLimits

0x98ae,	// (0x0008370f) tport_appsw_pane

0x98bf,	// (0x00083720) tport_contact_pane_ParamLimits

0x98bf,	// (0x00083720) tport_contact_pane

0x98d8,	// (0x00083739) tport_listscroll_pane_ParamLimits

0x98d8,	// (0x00083739) tport_listscroll_pane

0x98f3,	// (0x00083754) cell_tport_appsw_pane_ParamLimits

0x98f3,	// (0x00083754) cell_tport_appsw_pane

0x6d9a,	// (0x00080bfb) tport_appsw_pane_g1_ParamLimits

0x6d9a,	// (0x00080bfb) tport_appsw_pane_g1

0xd51b,	// (0x0008737c) tport_contact_pane_g1

0xd524,	// (0x00087385) tport_contact_pane_t1

0xd532,	// (0x00087393) tport_contact_pane_t2

0x0001,

0xfcce,	// (0x00089b2f) tport_contact_pane_t

0xd540,	// (0x000873a1) list_tport_pane

0xd549,	// (0x000873aa) scroll_pane_cp_030

0xd55a,	// (0x000873bb) cell_tport_appsw_pane_g1

0xd56a,	// (0x000873cb) cell_tport_appsw_pane_t1

0x139f,	// (0x0007b200) grid_highlight_pane_cp019

0x9933,	// (0x00083794) list_tport_double_graphic_pane_ParamLimits

0x9933,	// (0x00083794) list_tport_double_graphic_pane

0xa6bc,	// (0x0008451d) list_highlight_pane_cp023_ParamLimits

0xa6bc,	// (0x0008451d) list_highlight_pane_cp023

0x9940,	// (0x000837a1) list_tport_double_graphic_pane_g1_ParamLimits

0x9940,	// (0x000837a1) list_tport_double_graphic_pane_g1

0x994d,	// (0x000837ae) list_tport_double_graphic_pane_t1_ParamLimits

0x994d,	// (0x000837ae) list_tport_double_graphic_pane_t1

0x9962,	// (0x000837c3) list_tport_double_graphic_pane_t2_ParamLimits

0x9962,	// (0x000837c3) list_tport_double_graphic_pane_t2

0x0001,

0xfcda,	// (0x00089b3b) list_tport_double_graphic_pane_t_ParamLimits

0xfcda,	// (0x00089b3b) list_tport_double_graphic_pane_t

0x139f,	// (0x0007b200) main_cale_note_pane

0x6d4f,	// (0x00080bb0) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x6d4f,	// (0x00080bb0) cell_vitu2_function_top_wide_pane_cp01

0x915b,	// (0x00082fbc) wait_bar_pane_cp05_ParamLimits

0x139f,	// (0x0007b200) listscroll_cmail_pane

0xd580,	// (0x000873e1) list_cmail_pane

0x997e,	// (0x000837df) list_cmail_body_pane

0x9993,	// (0x000837f4) list_single_cmail_header_caption_pane

0x99ac,	// (0x0008380d) list_single_cmail_header_detail_pane_ParamLimits

0x99ac,	// (0x0008380d) list_single_cmail_header_detail_pane

0x99d5,	// (0x00083836) list_single_cmail_header_caption_pane_t1

0x1156,	// (0x0007afb7) list_single_cmail_header_detail_pane_g1_ParamLimits

0x1156,	// (0x0007afb7) list_single_cmail_header_detail_pane_g1

0xe57e,	// (0x000883df) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe57e,	// (0x000883df) list_single_cmail_header_detail_pane_g2

0x0002,

0xfcdf,	// (0x00089b40) list_single_cmail_header_detail_pane_g_ParamLimits

0xfcdf,	// (0x00089b40) list_single_cmail_header_detail_pane_g

0xd5ad,	// (0x0008740e) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd5ad,	// (0x0008740e) list_single_cmail_header_detail_pane_t1

0xd5df,	// (0x00087440) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd5df,	// (0x00087440) list_single_cmail_header_editor_pane_bg

0xd5f1,	// (0x00087452) list_cmail_body_pane_g1

0xd5fa,	// (0x0008745b) list_cmail_body_pane_t1

0x6e60,	// (0x00080cc1) list_single_cmail_header_editor_pane_bg_g1

0xb0d1,	// (0x00084f32) list_single_cmail_header_editor_pane_bg_g1_copy1

0x6e70,	// (0x00080cd1) list_single_cmail_header_editor_pane_bg_g1_copy2

0x6e68,	// (0x00080cc9) list_single_cmail_header_editor_pane_bg_g1_copy3

0x7809,	// (0x0008166a) list_single_cmail_header_editor_pane_bg_g1_copy4

0x6e90,	// (0x00080cf1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0x6e80,	// (0x00080ce1) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0x6e88,	// (0x00080ce9) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xb0b1,	// (0x00084f12) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x99e5,	// (0x00083846) calenote_gesture_pane_ParamLimits

0x99e5,	// (0x00083846) calenote_gesture_pane

0x9a05,	// (0x00083866) calenote_window_pane_ParamLimits

0x9a05,	// (0x00083866) calenote_window_pane

0xd608,	// (0x00087469) popup_note_window_cp01

0x9a21,	// (0x00083882) calenote_swipe_1_pane_ParamLimits

0x9a21,	// (0x00083882) calenote_swipe_1_pane

0x97f4,	// (0x00083655) calenote_swipe_2_pane_ParamLimits

0x97f4,	// (0x00083655) calenote_swipe_2_pane

0xd192,	// (0x00086ff3) calenote_swipe_1_pane_g1_ParamLimits

0xd192,	// (0x00086ff3) calenote_swipe_1_pane_g1

0xd19f,	// (0x00087000) calenote_swipe_1_pane_g2_ParamLimits

0xd19f,	// (0x00087000) calenote_swipe_1_pane_g2

0x0001,

0xfc09,	// (0x00089a6a) calenote_swipe_1_pane_g_ParamLimits

0xfc09,	// (0x00089a6a) calenote_swipe_1_pane_g

0xd61a,	// (0x0008747b) calenote_swipe_1_pane_t1_ParamLimits

0xd61a,	// (0x0008747b) calenote_swipe_1_pane_t1

0xd192,	// (0x00086ff3) calenote_swipe_2_pane_g1_ParamLimits

0xd192,	// (0x00086ff3) calenote_swipe_2_pane_g1

0xd639,	// (0x0008749a) calenote_swipe_2_pane_g2_ParamLimits

0xd639,	// (0x0008749a) calenote_swipe_2_pane_g2

0x0001,

0xfceb,	// (0x00089b4c) calenote_swipe_2_pane_g_ParamLimits

0xfceb,	// (0x00089b4c) calenote_swipe_2_pane_g

0xd645,	// (0x000874a6) calenote_swipe_2_pane_t1_ParamLimits

0xd645,	// (0x000874a6) calenote_swipe_2_pane_t1

0x139f,	// (0x0007b200) main_mup_navstr_pane

0x5850,	// (0x0007f6b1) main_mup3_pane_t7_ParamLimits

0x5850,	// (0x0007f6b1) main_mup3_pane_t7

0xe19d,	// (0x00087ffe) main_mp4_pane_g6_ParamLimits

0xe19d,	// (0x00087ffe) main_mp4_pane_g6

0xe341,	// (0x000881a2) main_image3_pane_t4_ParamLimits

0xe341,	// (0x000881a2) main_image3_pane_t4

0x9a36,	// (0x00083897) popup_navstr_preview_pane_ParamLimits

0x9a36,	// (0x00083897) popup_navstr_preview_pane

0x9a4a,	// (0x000838ab) scroll_navstr_pane_ParamLimits

0x9a4a,	// (0x000838ab) scroll_navstr_pane

0x139f,	// (0x0007b200) bg_popup_preview_window_pane_cp04

0xd66c,	// (0x000874cd) popup_navstr_preview_pane_t1

0x9a5e,	// (0x000838bf) scroll_navstr_pane_g1_ParamLimits

0x9a5e,	// (0x000838bf) scroll_navstr_pane_g1

0x9a72,	// (0x000838d3) scroll_navstr_pane_t1_ParamLimits

0x9a72,	// (0x000838d3) scroll_navstr_pane_t1

0xd611,	// (0x00087472) bg_button_pane_cp014

0xd611,	// (0x00087472) bg_button_pane_cp030

0xd128,	// (0x00086f89) list_double_fisheye_pane_g4_ParamLimits

0xd128,	// (0x00086f89) list_double_fisheye_pane_g4

0xe56d,	// (0x000883ce) list_double_fisheye_pane_g5_ParamLimits

0xe56d,	// (0x000883ce) list_double_fisheye_pane_g5

0xd588,	// (0x000873e9) sp_fs_scroll_pane_cp03

0xd2cf,	// (0x00087130) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd2db,	// (0x0008713c) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfc26,	// (0x00089a87) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd2e7,	// (0x00087148) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x9974,	// (0x000837d5) sp_fs_scroll_pane_cp02

0xaca5,	// (0x00084b06) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xaca5,	// (0x00084b06) popup_sp_fs_calendar_preview_list_single_pane

0x139f,	// (0x0007b200) main_cam6_pano_pane

0xa6bc,	// (0x0008451d) main_mup3_pane_ParamLimits

0x139f,	// (0x0007b200) main_phacti_pane

0x902e,	// (0x00082e8f) bg_button_pane_cp11

0x9048,	// (0x00082ea9) main_mobtv_info_pane_g2_ParamLimits

0x9048,	// (0x00082ea9) main_mobtv_info_pane_g2

0x0001,

0xfb86,	// (0x000899e7) main_mobtv_info_pane_g_ParamLimits

0xfb86,	// (0x000899e7) main_mobtv_info_pane_g

0x92cb,	// (0x0008312c) sc_clock_pane_t5_ParamLimits

0x92cb,	// (0x0008312c) sc_clock_pane_t5

0x94b6,	// (0x00083317) main_radioblah_pane_g1_ParamLimits

0x94fc,	// (0x0008335d) main_radioblah_pane_t3_ParamLimits

0x94fc,	// (0x0008335d) main_radioblah_pane_t3

0x9514,	// (0x00083375) main_radioblah_pane_t4_ParamLimits

0x9514,	// (0x00083375) main_radioblah_pane_t4

0x9542,	// (0x000833a3) main_radioblah_text_pane_ParamLimits

0x9542,	// (0x000833a3) main_radioblah_text_pane

0x9554,	// (0x000833b5) main_radioblah_info_pane_g1_ParamLimits

0x9629,	// (0x0008348a) main_radioblah_info_pane_t4_ParamLimits

0x9629,	// (0x0008348a) main_radioblah_info_pane_t4

0xa6bc,	// (0x0008451d) main_sp_fs_calendar_pane

0x9a88,	// (0x000838e9) main_phacti_pane_g1

0x9a90,	// (0x000838f1) phacti_note_pane_ParamLimits

0x9a90,	// (0x000838f1) phacti_note_pane

0xd683,	// (0x000874e4) phacti_term_pane_ParamLimits

0xd683,	// (0x000874e4) phacti_term_pane

0xd698,	// (0x000874f9) phacti_note_pane_t1_ParamLimits

0xd698,	// (0x000874f9) phacti_note_pane_t1

0xd6af,	// (0x00087510) phacti_term_pane_g1

0xd6b7,	// (0x00087518) phacti_term_pane_t1_ParamLimits

0xd6b7,	// (0x00087518) phacti_term_pane_t1

0xd6e1,	// (0x00087542) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd6e9,	// (0x0008754a) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfcf5,	// (0x00089b56) popup_sp_fs_calendar_preview_list_single_pane_g

0xd6f1,	// (0x00087552) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd6f1,	// (0x00087552) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd707,	// (0x00087568) aid_popup_sp_fs_bg_corner_pane

0xe869,	// (0x000886ca) popup_sp_fs_calendar_preview_bg_pane_g1

0x139f,	// (0x0007b200) popup_sp_fs_calendar_preview_bg_pane

0xd70f,	// (0x00087570) popup_sp_fs_calendar_preview_list_pane

0xa6bc,	// (0x0008451d) bg_main_sp_fs_cale_pane_ParamLimits

0xa6bc,	// (0x0008451d) bg_main_sp_fs_cale_pane

0xd720,	// (0x00087581) listscroll_cale_mrui_pane_ParamLimits

0xd720,	// (0x00087581) listscroll_cale_mrui_pane

0xd734,	// (0x00087595) listscroll_sp_fs_schedule_track_pane

0xd73d,	// (0x0008759e) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd73d,	// (0x0008759e) main_sp_fs_ctrlbar_pane_cp01

0xd74e,	// (0x000875af) main_sp_fs_ribbon_pane

0xd756,	// (0x000875b7) popup_sp_fs_cale_preview_window

0x9af1,	// (0x00083952) list_single_sp_fs_schedule_track_pane_ParamLimits

0x9af1,	// (0x00083952) list_single_sp_fs_schedule_track_pane

0xa6bc,	// (0x0008451d) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xa6bc,	// (0x0008451d) bg_sp_fs_highlight_list_pane_cp03

0x9b06,	// (0x00083967) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x9b06,	// (0x00083967) list_single_sp_fs_schedule_track_pane_g1

0x9b12,	// (0x00083973) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x9b12,	// (0x00083973) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfcfa,	// (0x00089b5b) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfcfa,	// (0x00089b5b) list_single_sp_fs_schedule_track_pane_g

0x9b1e,	// (0x0008397f) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x9b1e,	// (0x0008397f) list_single_sp_fs_schedule_track_pane_t1

0x9b38,	// (0x00083999) sp_fs_schedule_track_pane_ParamLimits

0x9b38,	// (0x00083999) sp_fs_schedule_track_pane

0xd768,	// (0x000875c9) sp_fs_schedule_track_pane_g1

0xd770,	// (0x000875d1) sp_fs_schedule_track_pane_g2

0xd778,	// (0x000875d9) sp_fs_schedule_track_pane_g3

0xd780,	// (0x000875e1) sp_fs_schedule_track_pane_g4

0xd788,	// (0x000875e9) sp_fs_schedule_track_pane_g5

0x0004,

0xfcff,	// (0x00089b60) sp_fs_schedule_track_pane_g

0x6e60,	// (0x00080cc1) bg_sp_fs_schedule_viewer_highlight_g1

0xb0d1,	// (0x00084f32) bg_sp_fs_schedule_viewer_highlight_g2

0x6e68,	// (0x00080cc9) bg_sp_fs_schedule_viewer_highlight_g3

0x6e70,	// (0x00080cd1) bg_sp_fs_schedule_viewer_highlight_g4

0x7809,	// (0x0008166a) bg_sp_fs_schedule_viewer_highlight_g5

0x6e80,	// (0x00080ce1) bg_sp_fs_schedule_viewer_highlight_g6

0x6e88,	// (0x00080ce9) bg_sp_fs_schedule_viewer_highlight_g7

0x6e90,	// (0x00080cf1) bg_sp_fs_schedule_viewer_highlight_g8

0xb0b1,	// (0x00084f12) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfd0a,	// (0x00089b6b) bg_sp_fs_schedule_viewer_highlight_g

0x139f,	// (0x0007b200) bg_main_sp_fs_ribbon_pane

0x9b49,	// (0x000839aa) main_sp_fs_ribbon_pane_g1

0xd790,	// (0x000875f1) main_sp_fs_ribbon_pane_t1

0x9b52,	// (0x000839b3) main_sp_fs_ribbon_pane_t2

0xd79f,	// (0x00087600) main_sp_fs_ribbon_pane_t3

0x0002,

0xfd1d,	// (0x00089b7e) main_sp_fs_ribbon_pane_t

0xd7ae,	// (0x0008760f) main_sp_fs_ribbon_scheduler_pane

0xd7b6,	// (0x00087617) bg_main_sp_fs_ribbon_pane_g1

0xd7bf,	// (0x00087620) bg_main_sp_fs_ribbon_pane_g2

0xd7c8,	// (0x00087629) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfd24,	// (0x00089b85) bg_main_sp_fs_ribbon_pane_g

0xd7d0,	// (0x00087631) main_sp_fs_ribbon_scheduler_pane_g1

0xd7d9,	// (0x0008763a) main_sp_fs_ribbon_scheduler_pane_g2

0xd7e2,	// (0x00087643) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfd2b,	// (0x00089b8c) main_sp_fs_ribbon_scheduler_pane_g

0xd7eb,	// (0x0008764c) list_cale_mrui_pane

0x9b61,	// (0x000839c2) sp_fs_scroll_pane_cp07_ParamLimits

0x9b61,	// (0x000839c2) sp_fs_scroll_pane_cp07

0x9b75,	// (0x000839d6) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x9b75,	// (0x000839d6) bg_sp_fs_schedule_viewer_highlight

0xd7f4,	// (0x00087655) list_single_sp_fs_schedule_track_pane_cp01

0xd7fc,	// (0x0008765d) list_sp_fs_schedule_track_pane

0xd804,	// (0x00087665) sp_fs_scroll_pane_cp06_ParamLimits

0xd804,	// (0x00087665) sp_fs_scroll_pane_cp06

0xe869,	// (0x000886ca) bgmain_sp_fs_calendar_pane_g1

0x1194,	// (0x0007aff5) list_single_cale_mrui_pane_ParamLimits

0x1194,	// (0x0007aff5) list_single_cale_mrui_pane

0xd816,	// (0x00087677) list_single_cale_mrui_row_pane_ParamLimits

0xd816,	// (0x00087677) list_single_cale_mrui_row_pane

0xd823,	// (0x00087684) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd823,	// (0x00087684) list_single_cale_mrui_row_pane_g1

0xd868,	// (0x000876c9) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd868,	// (0x000876c9) list_single_cale_mrui_row_pane_t1

0x11b6,	// (0x0007b017) list_single_cale_mrui_row_pane_t2_ParamLimits

0x11b6,	// (0x0007b017) list_single_cale_mrui_row_pane_t2

0xd87a,	// (0x000876db) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd87a,	// (0x000876db) list_single_cale_mrui_row_pane_t3

0xd8a9,	// (0x0008770a) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd8a9,	// (0x0008770a) list_single_cale_mrui_row_pane_t4

0x0003,

0xfd39,	// (0x00089b9a) list_single_cale_mrui_row_pane_t_ParamLimits

0xfd39,	// (0x00089b9a) list_single_cale_mrui_row_pane_t

0x121e,	// (0x0007b07f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x121e,	// (0x0007b07f) list_single_cmail_header_editor_pane_bg_cp01

0x1244,	// (0x0007b0a5) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x1244,	// (0x0007b0a5) list_single_cmail_header_editor_pane_bg_cp02

0x9b85,	// (0x000839e6) main_radioblah_text_pane_t1_ParamLimits

0x9b85,	// (0x000839e6) main_radioblah_text_pane_t1

0xd8d8,	// (0x00087739) cam6_indi_pane_cp01

0xd8e0,	// (0x00087741) cam6_mode_pane_cp01

0xd8e8,	// (0x00087749) cam6_pano_pane

0xd8f1,	// (0x00087752) cam6_zoom_pane_cp01

0xd8f9,	// (0x0008775a) cam6_pano_image_pane

0xd904,	// (0x00087765) cam6_pano_pane_g1

0x8fc7,	// (0x00082e28) cam6_pano_pane_g2

0xd90d,	// (0x0008776e) cam6_pano_pane_g3

0xd916,	// (0x00087777) cam6_pano_pane_g4

0xee3b,	// (0x00088c9c) cam6_pano_pane_g5

0xd91f,	// (0x00087780) cam6_pano_pane_g6

0xd929,	// (0x0008778a) cam6_pano_pane_g7

0xd931,	// (0x00087792) cam6_pano_pane_g8

0xd93a,	// (0x0008779b) cam6_pano_pane_g9

0x0008,

0xfd42,	// (0x00089ba3) cam6_pano_pane_g

0x139f,	// (0x0007b200) main_browser_tag_pane

0xd664,	// (0x000874c5) grid_navstr_albumart_pane

0xd945,	// (0x000877a6) cell_navstr_albumart_pane_ParamLimits

0xd945,	// (0x000877a6) cell_navstr_albumart_pane

0xba06,	// (0x00085867) cell_navstr_albumart_pane_g1

0xcb39,	// (0x0008699a) cell_navstr_albumart_pane_g2

0xcb49,	// (0x000869aa) cell_navstr_albumart_pane_g3

0xcb41,	// (0x000869a2) cell_navstr_albumart_pane_g4

0x0003,

0xfd55,	// (0x00089bb6) cell_navstr_albumart_pane_g

0x9ba0,	// (0x00083a01) bt_list_pane_ParamLimits

0x9ba0,	// (0x00083a01) bt_list_pane

0x9bb5,	// (0x00083a16) bt_list_pane_t1

0x9bc4,	// (0x00083a25) bt_list_pane_t2

0x0001,

0xfd5e,	// (0x00089bbf) bt_list_pane_t

0x139f,	// (0x0007b200) main_cale_prevew_pane

0x9bd3,	// (0x00083a34) popup_cale_preview_window_ParamLimits

0x9bd3,	// (0x00083a34) popup_cale_preview_window

0xa6bc,	// (0x0008451d) bg_popup_preview_window_pane_cp05_ParamLimits

0xa6bc,	// (0x0008451d) bg_popup_preview_window_pane_cp05

0xd967,	// (0x000877c8) list_cale_preview_pane_ParamLimits

0xd967,	// (0x000877c8) list_cale_preview_pane

0x9bea,	// (0x00083a4b) list_double_cale_preview_pane_ParamLimits

0x9bea,	// (0x00083a4b) list_double_cale_preview_pane

0x9bfc,	// (0x00083a5d) list_single_cale_preview_pane_ParamLimits

0x9bfc,	// (0x00083a5d) list_single_cale_preview_pane

0x9c10,	// (0x00083a71) list_single_cale_preview_pane_g1

0x9c18,	// (0x00083a79) list_single_cale_preview_pane_t1_ParamLimits

0x9c18,	// (0x00083a79) list_single_cale_preview_pane_t1

0x9c2d,	// (0x00083a8e) list_double_cale_preview_pane_g1

0x9c35,	// (0x00083a96) list_double_cale_preview_pane_t1_ParamLimits

0x9c35,	// (0x00083a96) list_double_cale_preview_pane_t1

0x9c4a,	// (0x00083aab) list_double_cale_preview_pane_t2_ParamLimits

0x9c4a,	// (0x00083aab) list_double_cale_preview_pane_t2

0x0001,

0xfd63,	// (0x00089bc4) list_double_cale_preview_pane_t_ParamLimits

0xfd63,	// (0x00089bc4) list_double_cale_preview_pane_t

0x139f,	// (0x0007b200) main_ezdial_pane

0xa6bc,	// (0x0008451d) main_sp_fs_email_pane_ParamLimits

0x980c,	// (0x0008366d) cmail_ddmenu_btn01_pane_ParamLimits

0x980c,	// (0x0008366d) cmail_ddmenu_btn01_pane

0x981f,	// (0x00083680) cmail_ddmenu_btn02_pane_ParamLimits

0x981f,	// (0x00083680) cmail_ddmenu_btn02_pane

0x9842,	// (0x000836a3) cmail_ddmenu_btn03_pane_ParamLimits

0x9842,	// (0x000836a3) cmail_ddmenu_btn03_pane

0x0d9f,	// (0x0007ac00) main_sp_fs_ctrlbar_pane_ParamLimits

0x0dc3,	// (0x0007ac24) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x997e,	// (0x000837df) list_cmail_body_pane_ParamLimits

0xd597,	// (0x000873f8) bg_button_pane_cp12

0xd5a0,	// (0x00087401) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd5a0,	// (0x00087401) list_single_cmail_header_detail_pane_g3

0x116e,	// (0x0007afcf) list_single_cmail_header_detail_pane_t2_ParamLimits

0x116e,	// (0x0007afcf) list_single_cmail_header_detail_pane_t2

0x0001,

0xfce6,	// (0x00089b47) list_single_cmail_header_detail_pane_t_ParamLimits

0xfce6,	// (0x00089b47) list_single_cmail_header_detail_pane_t

0xd6cc,	// (0x0008752d) phacti_term_pane_t2_ParamLimits

0xd6cc,	// (0x0008752d) phacti_term_pane_t2

0x0001,

0xfcf0,	// (0x00089b51) phacti_term_pane_t_ParamLimits

0xfcf0,	// (0x00089b51) phacti_term_pane_t

0xd973,	// (0x000877d4) aid_size_list_single_double

0x9c62,	// (0x00083ac3) popup_ezdial_listscroll_window

0x9c7e,	// (0x00083adf) popup_number_entry_window_cp01

0xb885,	// (0x000856e6) bg_popup_call_pane_cp09

0xd97f,	// (0x000877e0) ezdial_list_pane

0xd987,	// (0x000877e8) scroll_pane_cp23

0xcd24,	// (0x00086b85) bg_button_pane_cp028_ParamLimits

0xcd24,	// (0x00086b85) bg_button_pane_cp028

0x9c8c,	// (0x00083aed) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x9c8c,	// (0x00083aed) cmail_ddmenu_btn01_pane_g1

0x9c9b,	// (0x00083afc) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x9c9b,	// (0x00083afc) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfd68,	// (0x00089bc9) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfd68,	// (0x00089bc9) cmail_ddmenu_btn01_pane_g

0xd98f,	// (0x000877f0) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd98f,	// (0x000877f0) cmail_ddmenu_btn01_pane_t1

0xcd24,	// (0x00086b85) bg_button_pane_cp029_ParamLimits

0xcd24,	// (0x00086b85) bg_button_pane_cp029

0x9cab,	// (0x00083b0c) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9cab,	// (0x00083b0c) cmail_ddmenu_btn02_pane_g1

0x9cc6,	// (0x00083b27) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x9cc6,	// (0x00083b27) cmail_ddmenu_btn02_pane_t1

0xa6bc,	// (0x0008451d) bg_button_pane_cp031_ParamLimits

0xa6bc,	// (0x0008451d) bg_button_pane_cp031

0x9cab,	// (0x00083b0c) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9cab,	// (0x00083b0c) cmail_ddmenu_btn03_pane_g1

0x9cc6,	// (0x00083b27) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x9cc6,	// (0x00083b27) cmail_ddmenu_btn03_pane_t1

0x64dc,	// (0x0008033d) cell_dialer2_keypad_pane_t1_ParamLimits

0x64f6,	// (0x00080357) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x64f6,	// (0x00080357) cell_dialer2_keypad_pane_t1_copy1

0x8bc3,	// (0x00082a24) ncimui_group_button_pane

0xa6bc,	// (0x0008451d) main_sp_fs_calendar_pane_ParamLimits

0x9993,	// (0x000837f4) list_single_cmail_header_caption_pane_ParamLimits

0xd717,	// (0x00087578) aid_recal_txt_sm_pane

0x139f,	// (0x0007b200) mian_recal_day_pane

0xd756,	// (0x000875b7) popup_sp_fs_cale_preview_window_ParamLimits

0x139f,	// (0x0007b200) list_recal_day_pane

0xd9c7,	// (0x00087828) list_single_recal_day_pane_ParamLimits

0xd9c7,	// (0x00087828) list_single_recal_day_pane

0xd9d9,	// (0x0008783a) list_single_recal_day_pane_g1_ParamLimits

0xd9d9,	// (0x0008783a) list_single_recal_day_pane_g1

0xd9e5,	// (0x00087846) list_single_recal_day_pane_g2_ParamLimits

0xd9e5,	// (0x00087846) list_single_recal_day_pane_g2

0xd9f5,	// (0x00087856) list_single_recal_day_pane_g3_ParamLimits

0xd9f5,	// (0x00087856) list_single_recal_day_pane_g3

0x9ced,	// (0x00083b4e) list_single_recal_day_pane_g4_ParamLimits

0x9ced,	// (0x00083b4e) list_single_recal_day_pane_g4

0xda01,	// (0x00087862) list_single_recal_day_pane_g5_ParamLimits

0xda01,	// (0x00087862) list_single_recal_day_pane_g5

0xda11,	// (0x00087872) list_single_recal_day_pane_g6_ParamLimits

0xda11,	// (0x00087872) list_single_recal_day_pane_g6

0x0004,

0xfd77,	// (0x00089bd8) list_single_recal_day_pane_g_ParamLimits

0xfd77,	// (0x00089bd8) list_single_recal_day_pane_g

0xda28,	// (0x00087889) list_single_recal_day_pane_t1

0xda3a,	// (0x0008789b) list_single_recal_day_pane_t2

0x0001,

0xfd82,	// (0x00089be3) list_single_recal_day_pane_t

0x9d0d,	// (0x00083b6e) ncimui_query_button_pane_ParamLimits

0x9d0d,	// (0x00083b6e) ncimui_query_button_pane

0x9d1d,	// (0x00083b7e) ncimui_query_button_pane_t1_ParamLimits

0x9d1d,	// (0x00083b7e) ncimui_query_button_pane_t1

0xda4f,	// (0x000878b0) ncimui_query_button_pane_t2_ParamLimits

0xda4f,	// (0x000878b0) ncimui_query_button_pane_t2

0x0001,

0xfd87,	// (0x00089be8) ncimui_query_button_pane_t_ParamLimits

0xfd87,	// (0x00089be8) ncimui_query_button_pane_t

0x9d30,	// (0x00083b91) query_button_pane_ParamLimits

0x9d30,	// (0x00083b91) query_button_pane

0x139f,	// (0x0007b200) bg_button_pane_cp0028

0xda62,	// (0x000878c3) query_button_pane_t1

0x4488,	// (0x0007e2e9) main_tport_pane_ParamLimits

0x986b,	// (0x000836cc) bg_popup_window_pane_cp01_ParamLimits

0x986b,	// (0x000836cc) bg_popup_window_pane_cp01

0x9885,	// (0x000836e6) heading_pane_cp08_ParamLimits

0x9885,	// (0x000836e6) heading_pane_cp08

0x9899,	// (0x000836fa) heading_pane_cp07_ParamLimits

0x9899,	// (0x000836fa) heading_pane_cp07

0xd55a,	// (0x000873bb) cell_tport_appsw_pane_g2

0x0002,

0xfcd3,	// (0x00089b34) cell_tport_appsw_pane_g

0x0a34,	// (0x0007a895) input_candi_list_open_g1

0xb2c4,	// (0x00085125) list_cale_time_pane_g6_ParamLimits

0xb2c4,	// (0x00085125) list_cale_time_pane_g6

0x5251,	// (0x0007f0b2) aid_size_touch_calib_1_ParamLimits

0x5251,	// (0x0007f0b2) aid_size_touch_calib_1

0x525d,	// (0x0007f0be) aid_size_touch_calib_2_ParamLimits

0x525d,	// (0x0007f0be) aid_size_touch_calib_2

0x5273,	// (0x0007f0d4) aid_size_touch_calib_3_ParamLimits

0x5273,	// (0x0007f0d4) aid_size_touch_calib_3

0x5291,	// (0x0007f0f2) aid_size_touch_calib_4_ParamLimits

0x5291,	// (0x0007f0f2) aid_size_touch_calib_4

0x52a7,	// (0x0007f108) main_touch_calib_button_group_pane_ParamLimits

0x52a7,	// (0x0007f108) main_touch_calib_button_group_pane

0x52bf,	// (0x0007f120) main_touch_calib_pane_g1_ParamLimits

0x52cb,	// (0x0007f12c) main_touch_calib_pane_g2_ParamLimits

0x52d7,	// (0x0007f138) main_touch_calib_pane_g3_ParamLimits

0x52e3,	// (0x0007f144) main_touch_calib_pane_g4_ParamLimits

0xf6ff,	// (0x00089560) main_touch_calib_pane_g_ParamLimits

0x52ef,	// (0x0007f150) main_touch_calib_pane_t1_ParamLimits

0x5309,	// (0x0007f16a) main_touch_calib_pane_t2_ParamLimits

0x5323,	// (0x0007f184) main_touch_calib_pane_t3_ParamLimits

0x5337,	// (0x0007f198) main_touch_calib_pane_t4_ParamLimits

0x534b,	// (0x0007f1ac) main_touch_calib_pane_t5_ParamLimits

0xf708,	// (0x00089569) main_touch_calib_pane_t_ParamLimits

0xec0b,	// (0x00088a6c) list_single_fp_cale_pane_g3_ParamLimits

0xec0b,	// (0x00088a6c) list_single_fp_cale_pane_g3

0xa6bc,	// (0x0008451d) bg_button_pane_cp012_ParamLimits

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp03_ParamLimits

0x77bf,	// (0x00081620) cell_vitu2_function_top_pane_g1_ParamLimits

0xa6bc,	// (0x0008451d) bg_vkb2_func_pane_cp04_ParamLimits

0x8b51,	// (0x000829b2) main_ncimui_button_group_pane_ParamLimits

0x8b51,	// (0x000829b2) main_ncimui_button_group_pane

0x8bb1,	// (0x00082a12) main_ncimui_pane_t3_ParamLimits

0x8bb1,	// (0x00082a12) main_ncimui_pane_t3

0xd67a,	// (0x000874db) phacti_button_group_pane

0xd973,	// (0x000877d4) aid_size_list_single_double_ParamLimits

0x9c62,	// (0x00083ac3) popup_ezdial_listscroll_window_ParamLimits

0x9c7e,	// (0x00083adf) popup_number_entry_window_cp01_ParamLimits

0x9d43,	// (0x00083ba4) phacti_button_pane_ParamLimits

0x9d43,	// (0x00083ba4) phacti_button_pane

0x139f,	// (0x0007b200) bg_button_pane_cp14

0xda70,	// (0x000878d1) phacti_button_pane_t1

0x9d54,	// (0x00083bb5) main_touch_calib_button_pane_ParamLimits

0x9d54,	// (0x00083bb5) main_touch_calib_button_pane

0xab19,	// (0x0008497a) bg_button_pane_cp18_ParamLimits

0xab19,	// (0x0008497a) bg_button_pane_cp18

0xda7e,	// (0x000878df) main_touch_calib_button_pane_t1_ParamLimits

0xda7e,	// (0x000878df) main_touch_calib_button_pane_t1

0xda94,	// (0x000878f5) main_touch_calib_button_pane_t2_ParamLimits

0xda94,	// (0x000878f5) main_touch_calib_button_pane_t2

0x0001,

0xfd8c,	// (0x00089bed) main_touch_calib_button_pane_t_ParamLimits

0xfd8c,	// (0x00089bed) main_touch_calib_button_pane_t

0x139f,	// (0x0007b200) cell_ncimui_button_pane

0x139f,	// (0x0007b200) bg_button_pane_cp032

0xdab2,	// (0x00087913) cell_ncimui_button_pane_t1

0xe321,	// (0x00088182) image3_infobar_pane_ParamLimits

0xe321,	// (0x00088182) image3_infobar_pane

0x92f7,	// (0x00083158) fs_bigclock_status_pane_ParamLimits

0x92f7,	// (0x00083158) fs_bigclock_status_pane

0x9304,	// (0x00083165) main_fs_bigclock_clock_pane_ParamLimits

0x9304,	// (0x00083165) main_fs_bigclock_clock_pane

0x9318,	// (0x00083179) main_fs_bigclock_indi_pane_ParamLimits

0x9318,	// (0x00083179) main_fs_bigclock_indi_pane

0x9330,	// (0x00083191) main_fs_bigclock_swipe_pane_ParamLimits

0x9330,	// (0x00083191) main_fs_bigclock_swipe_pane

0x139f,	// (0x0007b200) main_fs_clock_dumped_data

0x9356,	// (0x000831b7) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0x9356,	// (0x000831b7) list_single_fs_bigclock_indicator_pane_g1

0x937f,	// (0x000831e0) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0x937f,	// (0x000831e0) list_single_fs_bigclock_indicator_pane_g2

0x9399,	// (0x000831fa) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0x9399,	// (0x000831fa) list_single_fs_bigclock_indicator_pane_g3

0x93b3,	// (0x00083214) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0x93b3,	// (0x00083214) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfbba,	// (0x00089a1b) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfbba,	// (0x00089a1b) list_single_fs_bigclock_indicator_pane_g

0x93dc,	// (0x0008323d) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0x93dc,	// (0x0008323d) list_single_fs_bigclock_indicator_pane_t1

0x9404,	// (0x00083265) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0x9404,	// (0x00083265) list_single_fs_bigclock_indicator_pane_t2

0x942c,	// (0x0008328d) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0x942c,	// (0x0008328d) list_single_fs_bigclock_indicator_pane_t3

0x9454,	// (0x000832b5) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0x9454,	// (0x000832b5) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfbc5,	// (0x00089a26) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfbc5,	// (0x00089a26) list_single_fs_bigclock_indicator_pane_t

0xdac0,	// (0x00087921) image3_infobar_fav_pane_ParamLimits

0xdac0,	// (0x00087921) image3_infobar_fav_pane

0xdad0,	// (0x00087931) image3_infobar_loc_pane_ParamLimits

0xdad0,	// (0x00087931) image3_infobar_loc_pane

0xdae4,	// (0x00087945) image3_infobar_time_pane_ParamLimits

0xdae4,	// (0x00087945) image3_infobar_time_pane

0xe869,	// (0x000886ca) image3_infobar_time_pane_g1

0xdaf4,	// (0x00087955) image3_infobar_time_pane_t1

0xe869,	// (0x000886ca) image3_infobar_loc_pane_g1

0xdb02,	// (0x00087963) image3_infobar_loc_pane_g2

0x0001,

0xfd91,	// (0x00089bf2) image3_infobar_loc_pane_g

0xdb0a,	// (0x0008796b) image3_infobar_loc_pane_t1

0xe869,	// (0x000886ca) image3_infobar_fav_pane_g1

0xdb18,	// (0x00087979) image3_infobar_fav_pane_g2

0x0001,

0xfd96,	// (0x00089bf7) image3_infobar_fav_pane_g

0xdb20,	// (0x00087981) fs_bigclock_status_battery_pane

0xdb29,	// (0x0008798a) fs_bigclock_status_signal_pane

0xdb32,	// (0x00087993) fs_bigclock_status_title_pane

0xdb3b,	// (0x0008799c) fs_bigclock_status_signal_pane_g1

0xdb44,	// (0x000879a5) fs_bigclock_status_signal_pane_g2

0x0001,

0xfd9b,	// (0x00089bfc) fs_bigclock_status_signal_pane_g

0xdb4c,	// (0x000879ad) fs_bigclock_status_battery_pane_g1

0xdb55,	// (0x000879b6) fs_bigclock_status_battery_pane_g2

0x0001,

0xfda0,	// (0x00089c01) fs_bigclock_status_battery_pane_g

0xdb5d,	// (0x000879be) fs_bigclock_status_title_pane_t1

0xe869,	// (0x000886ca) main_fs_bigclock_clock_pane_g1

0xdb6b,	// (0x000879cc) main_fs_bigclock_clock_pane_g2

0xdb6b,	// (0x000879cc) main_fs_bigclock_clock_pane_g3

0xdb6b,	// (0x000879cc) main_fs_bigclock_clock_pane_g4

0x0003,

0xfda5,	// (0x00089c06) main_fs_bigclock_clock_pane_g

0xdb73,	// (0x000879d4) main_fs_bigclock_clock_pane_t1

0xdb81,	// (0x000879e2) main_fs_bigclock_clock_pane_t2

0x0001,

0xfdae,	// (0x00089c0f) main_fs_bigclock_clock_pane_t

0xdb90,	// (0x000879f1) list_single_fs_bigclock_indicator_pane_ParamLimits

0xdb90,	// (0x000879f1) list_single_fs_bigclock_indicator_pane

0x9d69,	// (0x00083bca) list_single_fs_bigclock_pane_ParamLimits

0x9d69,	// (0x00083bca) list_single_fs_bigclock_pane

0xdbaa,	// (0x00087a0b) main_fs_bigclock_indicator_pane_t1

0xdbb9,	// (0x00087a1a) list_single_fs_bigclock_pane_g1

0xdbc1,	// (0x00087a22) list_single_fs_bigclock_pane_t1

0xe869,	// (0x000886ca) main_fs_bigclock_swipe_pane_g1

0xdc04,	// (0x00087a65) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfdbf,	// (0x00089c20) main_fs_bigclock_swipe_pane_g

0xdc0c,	// (0x00087a6d) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xdc0c,	// (0x00087a6d) main_fs_bigclock_swipe_pane_t1

0x3316,	// (0x0007d177) call_type_pane_ParamLimits

0x139f,	// (0x0007b200) main_btmg_pane

0xd84f,	// (0x000876b0) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd84f,	// (0x000876b0) list_single_cale_mrui_row_pane_g2

0x0002,

0xfd32,	// (0x00089b93) list_single_cale_mrui_row_pane_g_ParamLimits

0xfd32,	// (0x00089b93) list_single_cale_mrui_row_pane_g

0xd9ae,	// (0x0008780f) list_recal_vselct_arw_lo_pane

0xd9b6,	// (0x00087817) list_recal_vselct_arw_up_pane

0xd9be,	// (0x0008781f) list_recal_vselct_pane

0x9dcf,	// (0x00083c30) btmg_button_pane

0x9dd9,	// (0x00083c3a) main_btmg_pane_g1

0x139f,	// (0x0007b200) bg_button_pane_cp044

0xdc29,	// (0x00087a8a) btmg_button_pane_t1

0xcd1c,	// (0x00086b7d) aid_listscroll_gen

0xa6bc,	// (0x0008451d) main_cntbar_detail_pane

0xd578,	// (0x000873d9) list_cmail_folder_pane

0xd588,	// (0x000873e9) sp_fs_scroll_pane_cp03_ParamLimits

0x1264,	// (0x0007b0c5) list_single_fs_dyc_pane_cp01_ParamLimits

0x1264,	// (0x0007b0c5) list_single_fs_dyc_pane_cp01

0xdc37,	// (0x00087a98) aid_size_cmail_indent

0xdc40,	// (0x00087aa1) list_single_dyc_row_pane_cp01

0x9e0f,	// (0x00083c70) cntbar_detail_list_pane_ParamLimits

0x9e0f,	// (0x00083c70) cntbar_detail_list_pane

0x9e5b,	// (0x00083cbc) main_cntbar_detail_cont_pane_ParamLimits

0x9e5b,	// (0x00083cbc) main_cntbar_detail_cont_pane

0x330a,	// (0x0007d16b) scroll_pane_cp032_ParamLimits

0x330a,	// (0x0007d16b) scroll_pane_cp032

0x9e6f,	// (0x00083cd0) cntbar_detail_list_event_pane_ParamLimits

0x9e6f,	// (0x00083cd0) cntbar_detail_list_event_pane

0x9e1f,	// (0x00083c80) cntbar_detail_list_shct_pane

0xb11f,	// (0x00084f80) aid_list_gen

0xdc49,	// (0x00087aaa) aid_scroll

0xdc52,	// (0x00087ab3) aid_size_touch_scroll_bar

0xdc5b,	// (0x00087abc) aid_list_double

0xdc64,	// (0x00087ac5) aid_list_single

0xeac6,	// (0x00088927) aid_list_single_lg

0xdc6d,	// (0x00087ace) aid_list_z_g_a_sm

0xe58a,	// (0x000883eb) aid_list_z_g_d

0xdc75,	// (0x00087ad6) aid_txt_z_prm

0x127e,	// (0x0007b0df) aid_txt_z_prm_cp01

0x128c,	// (0x0007b0ed) aid_txt_z_sec

0x9e7f,	// (0x00083ce0) main_cntbar_detail_cont_pane_g1_ParamLimits

0x9e7f,	// (0x00083ce0) main_cntbar_detail_cont_pane_g1

0x9e93,	// (0x00083cf4) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9e93,	// (0x00083cf4) main_cntbar_detail_cont_pane_g2

0x0001,

0xfdc4,	// (0x00089c25) main_cntbar_detail_cont_pane_g_ParamLimits

0xfdc4,	// (0x00089c25) main_cntbar_detail_cont_pane_g

0xdc83,	// (0x00087ae4) main_cntbar_detail_cont_pane_t1

0xdc91,	// (0x00087af2) main_cntbar_detail_cont_pane_t2

0xdc9f,	// (0x00087b00) main_cntbar_detail_cont_pane_t3

0x0002,

0xfdc9,	// (0x00089c2a) main_cntbar_detail_cont_pane_t

0x9ea3,	// (0x00083d04) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9ea3,	// (0x00083d04) cell_cntbar_detail_list_shct_pane

0xdcad,	// (0x00087b0e) cntbar_detail_list_shct_pane_g1

0xdcb6,	// (0x00087b17) cntbar_detail_list_shct_pane_g2

0x0001,

0xfdd0,	// (0x00089c31) cntbar_detail_list_shct_pane_g

0x9eb7,	// (0x00083d18) cntbar_detail_list_event_pane_g1_ParamLimits

0x9eb7,	// (0x00083d18) cntbar_detail_list_event_pane_g1

0x9ec3,	// (0x00083d24) cntbar_detail_list_event_pane_g2_ParamLimits

0x9ec3,	// (0x00083d24) cntbar_detail_list_event_pane_g2

0x0005,

0xfdd5,	// (0x00089c36) cntbar_detail_list_event_pane_g_ParamLimits

0xfdd5,	// (0x00089c36) cntbar_detail_list_event_pane_g

0x9f2f,	// (0x00083d90) cntbar_detail_list_event_pane_t1_ParamLimits

0x9f2f,	// (0x00083d90) cntbar_detail_list_event_pane_t1

0x9f44,	// (0x00083da5) cntbar_detail_list_event_pane_t2_ParamLimits

0x9f44,	// (0x00083da5) cntbar_detail_list_event_pane_t2

0x0002,

0xfde2,	// (0x00089c43) cntbar_detail_list_event_pane_t_ParamLimits

0xfde2,	// (0x00089c43) cntbar_detail_list_event_pane_t

0xe869,	// (0x000886ca) cell_cntbar_detail_list_shct_pane_g1

0x367d,	// (0x0007d4de) navi_pane_mv_g3

0xa6bc,	// (0x0008451d) main_cntbar_detail_pane_ParamLimits

0x139f,	// (0x0007b200) main_notif_wgt_pane

0xe137,	// (0x00087f98) aid_tch_main_mp4_pane_g4

0xe319,	// (0x0008817a) popup_slider_window_cp02

0xd9a4,	// (0x00087805) list_recal_day_event_pane

0x9de3,	// (0x00083c44) cntbar_detail_btn_pane_ParamLimits

0x9de3,	// (0x00083c44) cntbar_detail_btn_pane

0x9df9,	// (0x00083c5a) cntbar_detail_btn_pane_cp01_ParamLimits

0x9df9,	// (0x00083c5a) cntbar_detail_btn_pane_cp01

0x9e1f,	// (0x00083c80) cntbar_detail_list_shct_pane_ParamLimits

0x9e2f,	// (0x00083c90) cntbar_detail_pane_g1_ParamLimits

0x9e2f,	// (0x00083c90) cntbar_detail_pane_g1

0x9e3f,	// (0x00083ca0) cntbar_detail_pane_t1_ParamLimits

0x9e3f,	// (0x00083ca0) cntbar_detail_pane_t1

0x9ecf,	// (0x00083d30) cntbar_detail_list_event_pane_g3_ParamLimits

0x9ecf,	// (0x00083d30) cntbar_detail_list_event_pane_g3

0x9ee7,	// (0x00083d48) cntbar_detail_list_event_pane_g4_ParamLimits

0x9ee7,	// (0x00083d48) cntbar_detail_list_event_pane_g4

0x9eff,	// (0x00083d60) cntbar_detail_list_event_pane_g5_ParamLimits

0x9eff,	// (0x00083d60) cntbar_detail_list_event_pane_g5

0x9f17,	// (0x00083d78) cntbar_detail_list_event_pane_g6_ParamLimits

0x9f17,	// (0x00083d78) cntbar_detail_list_event_pane_g6

0x9f59,	// (0x00083dba) cntbar_detail_list_event_pane_t3_ParamLimits

0x9f59,	// (0x00083dba) cntbar_detail_list_event_pane_t3

0x9f6b,	// (0x00083dcc) popup_notif_wgt_window_ParamLimits

0x9f6b,	// (0x00083dcc) popup_notif_wgt_window

0x9f84,	// (0x00083de5) popup_submenu_window_cp01_ParamLimits

0x9f84,	// (0x00083de5) popup_submenu_window_cp01

0xb885,	// (0x000856e6) bg_popup_window_pane_cp10

0xdcbf,	// (0x00087b20) listscroll_notif_wgt_pane

0xdcd0,	// (0x00087b31) list_notif_wgt_window

0xdcd9,	// (0x00087b3a) scroll_pane_cp033

0x9f96,	// (0x00083df7) list_notif_wgt_row_pane_ParamLimits

0x9f96,	// (0x00083df7) list_notif_wgt_row_pane

0xdce2,	// (0x00087b43) aid_size_list_notif_wgt_del

0xdcef,	// (0x00087b50) list_notif_wgt_row_pane_g1

0xdcfb,	// (0x00087b5c) list_notif_wgt_row_pane_g2

0xdd07,	// (0x00087b68) list_notif_wgt_row_pane_g3

0x0002,

0xfde9,	// (0x00089c4a) list_notif_wgt_row_pane_g

0xdd14,	// (0x00087b75) list_notif_wgt_row_pane_t1

0xdd29,	// (0x00087b8a) list_notif_wgt_row_pane_t2

0xdd3b,	// (0x00087b9c) list_notif_wgt_row_pane_t3

0x0002,

0xfdf0,	// (0x00089c51) list_notif_wgt_row_pane_t

0x785e,	// (0x000816bf) list_recal_day_event_pane_g1

0xdd4d,	// (0x00087bae) list_recal_day_event_pane_t1

0x139f,	// (0x0007b200) bg_button_pane_cp045

0xdd5c,	// (0x00087bbd) cntbar_detail_btn_pane_t1

0xcd24,	// (0x00086b85) main_callh_pane_ParamLimits

0xcd24,	// (0x00086b85) main_callh_pane

0x139f,	// (0x0007b200) main_coverflow0_pane

0x139f,	// (0x0007b200) main_wgtman_pane

0x933e,	// (0x0008319f) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x933e,	// (0x0008319f) main_fs_bigclock_unlock_btn_pane

0xd552,	// (0x000873b3) bg_button_pane_cp16

0xd562,	// (0x000873c3) cell_tport_appsw_pane_g3

0x9fa6,	// (0x00083e07) cf0_flow_pane_ParamLimits

0x9fa6,	// (0x00083e07) cf0_flow_pane

0xdd6a,	// (0x00087bcb) listscroll_cf0_pane

0xdd75,	// (0x00087bd6) main_cf0_pane_g1

0x9fbb,	// (0x00083e1c) main_cf0_pane_t1_ParamLimits

0x9fbb,	// (0x00083e1c) main_cf0_pane_t1

0x9fd2,	// (0x00083e33) main_cf0_pane_t2_ParamLimits

0x9fd2,	// (0x00083e33) main_cf0_pane_t2

0x0001,

0xfdf7,	// (0x00089c58) main_cf0_pane_t_ParamLimits

0xfdf7,	// (0x00089c58) main_cf0_pane_t

0xdd7f,	// (0x00087be0) scroll_pane_cp11

0x9fe9,	// (0x00083e4a) cf0_flow_pane_g1

0x9ff1,	// (0x00083e52) cf0_flow_pane_g2

0x0001,

0xfdfc,	// (0x00089c5d) cf0_flow_pane_g

0x9ff9,	// (0x00083e5a) cf0_flow_pane_t1

0x139f,	// (0x0007b200) main_call6_pane

0x139f,	// (0x0007b200) main_calllock_pane

0xa007,	// (0x00083e68) call6_btn_grp_pane_ParamLimits

0xa007,	// (0x00083e68) call6_btn_grp_pane

0xa021,	// (0x00083e82) call6_pane_g1_ParamLimits

0xa021,	// (0x00083e82) call6_pane_g1

0xa036,	// (0x00083e97) popup_call6_1st_window_ParamLimits

0xa036,	// (0x00083e97) popup_call6_1st_window

0xa047,	// (0x00083ea8) popup_call6_2nd_window_ParamLimits

0xa047,	// (0x00083ea8) popup_call6_2nd_window

0xa058,	// (0x00083eb9) cell_call6_btn_pane_ParamLimits

0xa058,	// (0x00083eb9) cell_call6_btn_pane

0xb885,	// (0x000856e6) bg_popup_call2_in_pane_cp03

0xdd8a,	// (0x00087beb) popup_call6_1st_window_g1

0xdd92,	// (0x00087bf3) popup_call6_1st_window_g2

0xdd9a,	// (0x00087bfb) popup_call6_1st_window_g3

0x0002,

0xfe01,	// (0x00089c62) popup_call6_1st_window_g

0xdda2,	// (0x00087c03) popup_call6_1st_window_t1

0xddb1,	// (0x00087c12) popup_call6_1st_window_t2

0xddc1,	// (0x00087c22) popup_call6_1st_window_t3

0x0002,

0xfe08,	// (0x00089c69) popup_call6_1st_window_t

0xb885,	// (0x000856e6) bg_popup_call2_in_pane_cp04

0xdd8a,	// (0x00087beb) popup_call6_2nd_window_g1

0xdd92,	// (0x00087bf3) popup_call6_2nd_window_g2

0xdd9a,	// (0x00087bfb) popup_call6_2nd_window_g3

0x0002,

0xfe01,	// (0x00089c62) popup_call6_2nd_window_g

0xdda2,	// (0x00087c03) popup_call6_2nd_window_t1

0x139f,	// (0x0007b200) bg_button_pane_cp15

0xddd1,	// (0x00087c32) cell_call6_btn_pane_g1

0xddda,	// (0x00087c3b) cell_call6_btn_pane_t1

0xa06c,	// (0x00083ecd) listscroll_wgtman_pane_ParamLimits

0xa06c,	// (0x00083ecd) listscroll_wgtman_pane

0xa08f,	// (0x00083ef0) wgtman_btn_pane_ParamLimits

0xa08f,	// (0x00083ef0) wgtman_btn_pane

0xb738,	// (0x00085599) aid_scroll_copy1

0xdde9,	// (0x00087c4a) list_wgtman_pane

0xa0d2,	// (0x00083f33) wgtman_btn_pane_g1_ParamLimits

0xa0d2,	// (0x00083f33) wgtman_btn_pane_g1

0xa0fe,	// (0x00083f5f) wgtman_btn_pane_t1_ParamLimits

0xa0fe,	// (0x00083f5f) wgtman_btn_pane_t1

0xddf3,	// (0x00087c54) wgtman_btn_pane_t2_ParamLimits

0xddf3,	// (0x00087c54) wgtman_btn_pane_t2

0x0001,

0xfe0f,	// (0x00089c70) wgtman_btn_pane_t_ParamLimits

0xfe0f,	// (0x00089c70) wgtman_btn_pane_t

0xa13b,	// (0x00083f9c) listrow_wgtman_pane_ParamLimits

0xa13b,	// (0x00083f9c) listrow_wgtman_pane

0xa14e,	// (0x00083faf) listrow_wgtman_pane_g1

0xa15b,	// (0x00083fbc) listrow_wgtman_pane_g2

0x0001,

0xfe14,	// (0x00089c75) listrow_wgtman_pane_g

0x129a,	// (0x0007b0fb) listrow_wgtman_pane_t1

0x12b2,	// (0x0007b113) listrow_wgtman_pane_t2

0x0001,

0xfe19,	// (0x00089c7a) listrow_wgtman_pane_t

0x12d8,	// (0x0007b139) wait_bar_pane_cp09

0xde0a,	// (0x00087c6b) main_calllock_btn_pane

0xde14,	// (0x00087c75) main_calllock_pane_g1

0x139f,	// (0x0007b200) bg_button_pane_cp17

0xde1f,	// (0x00087c80) main_calllock_btn_pane_g1

0xde28,	// (0x00087c89) main_calllock_btn_pane_t1

0x139f,	// (0x0007b200) main_dialer3_pane

0x139f,	// (0x0007b200) main_fmrd2_pane

0xe869,	// (0x000886ca) main_fs_bigclock_unlock_btn_pane_g1

0xde3f,	// (0x00087ca0) main_fs_bigclock_unlock_btn_pane_t1

0xa179,	// (0x00083fda) area_fmrd2_info_pane_ParamLimits

0xa179,	// (0x00083fda) area_fmrd2_info_pane

0xa18a,	// (0x00083feb) area_fmrd2_visual_pane_ParamLimits

0xa18a,	// (0x00083feb) area_fmrd2_visual_pane

0xa198,	// (0x00083ff9) fmrd2_indi_pane_ParamLimits

0xa198,	// (0x00083ff9) fmrd2_indi_pane

0xa1a5,	// (0x00084006) area_fmrd2_visual_pane_g1

0xa1ad,	// (0x0008400e) area_fmrd2_visual_pane_t1

0xa1bd,	// (0x0008401e) area_fmrd2_visual_pane_t2

0xa1cd,	// (0x0008402e) area_fmrd2_visual_pane_t3

0x0002,

0xfe23,	// (0x00089c84) area_fmrd2_visual_pane_t

0xa1dd,	// (0x0008403e) area_fmrd2_info_pane_g1

0xa1e5,	// (0x00084046) area_fmrd2_info_pane_t1

0xa1f5,	// (0x00084056) area_fmrd2_info_pane_t2

0xa205,	// (0x00084066) area_fmrd2_info_pane_t3

0xa215,	// (0x00084076) area_fmrd2_info_pane_t4

0x0003,

0xfe2a,	// (0x00089c8b) area_fmrd2_info_pane_t

0xa223,	// (0x00084084) fmrd2_indi_pane_t1

0xa233,	// (0x00084094) fmrd2_indi_pane_t2

0xa243,	// (0x000840a4) fmrd2_indi_pane_t3

0x0002,

0xfe33,	// (0x00089c94) fmrd2_indi_pane_t

0x93c2,	// (0x00083223) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0x93c2,	// (0x00083223) list_single_fs_bigclock_indicator_pane_g5

0x9469,	// (0x000832ca) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0x9469,	// (0x000832ca) list_single_fs_bigclock_indicator_pane_t5

0x9aa4,	// (0x00083905) aid_cell_bcale_month_pane_ParamLimits

0x9aa4,	// (0x00083905) aid_cell_bcale_month_pane

0x9abc,	// (0x0008391d) bcale_month_pane_ParamLimits

0x9abc,	// (0x0008391d) bcale_month_pane

0x9ad3,	// (0x00083934) bcale_preview_pane_ParamLimits

0x9ad3,	// (0x00083934) bcale_preview_pane

0xdbc1,	// (0x00087a22) list_single_fs_bigclock_pane_t1_ParamLimits

0xdbe0,	// (0x00087a41) list_single_fs_bigclock_pane_t2_ParamLimits

0xdbe0,	// (0x00087a41) list_single_fs_bigclock_pane_t2

0x0001,

0xfdba,	// (0x00089c1b) list_single_fs_bigclock_pane_t_ParamLimits

0xfdba,	// (0x00089c1b) list_single_fs_bigclock_pane_t

0xde37,	// (0x00087c98) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfe1e,	// (0x00089c7f) main_fs_bigclock_unlock_btn_pane_g

0xa253,	// (0x000840b4) aid_dia3_key_size_ParamLimits

0xa253,	// (0x000840b4) aid_dia3_key_size

0xa262,	// (0x000840c3) aid_dia3_listrow_size_ParamLimits

0xa262,	// (0x000840c3) aid_dia3_listrow_size

0xa277,	// (0x000840d8) dia3_keypad_fun_pane_ParamLimits

0xa277,	// (0x000840d8) dia3_keypad_fun_pane

0xa293,	// (0x000840f4) dia3_keypad_num_pane_ParamLimits

0xa293,	// (0x000840f4) dia3_keypad_num_pane

0xa2ae,	// (0x0008410f) dia3_listscroll_pane_ParamLimits

0xa2ae,	// (0x0008410f) dia3_listscroll_pane

0xa2c1,	// (0x00084122) dia3_numentry_pane_ParamLimits

0xa2c1,	// (0x00084122) dia3_numentry_pane

0xde4d,	// (0x00087cae) dia3_list_pane

0xde58,	// (0x00087cb9) scroll_pane_cp12

0x139f,	// (0x0007b200) bg_dia3_numentry_pane

0xa2d5,	// (0x00084136) dia3_numentry_pane_t1

0xa2e4,	// (0x00084145) cell_dia3_key_num_pane

0xa2ec,	// (0x0008414d) cell_dia3_key0_fun_pane_ParamLimits

0xa2ec,	// (0x0008414d) cell_dia3_key0_fun_pane

0xa300,	// (0x00084161) cell_dia3_key1_fun_pane_ParamLimits

0xa300,	// (0x00084161) cell_dia3_key1_fun_pane

0xa318,	// (0x00084179) dia3_listrow_pane

0x8dd2,	// (0x00082c33) bg_dia3_numentry_pane_g1

0x139f,	// (0x0007b200) bg_button_pane_cp21

0xde63,	// (0x00087cc4) cell_dia3_key_num_pane_t1

0xde71,	// (0x00087cd2) cell_dia3_key_num_pane_t2

0xde80,	// (0x00087ce1) cell_dia3_key_num_pane_t3

0xde8f,	// (0x00087cf0) cell_dia3_key_num_pane_t4

0x0003,

0xfe3a,	// (0x00089c9b) cell_dia3_key_num_pane_t

0x139f,	// (0x0007b200) bg_button_pane_cp19

0xa32a,	// (0x0008418b) cell_dia3_key0_fun_pane_g1

0x139f,	// (0x0007b200) bg_button_pane_cp20

0xa332,	// (0x00084193) cell_dia3_key1_fun_pane_g1

0xa33a,	// (0x0008419b) area_left_week_number_pane

0xa344,	// (0x000841a5) area_top_day_name_pane

0xa350,	// (0x000841b1) frame_month_view_pane

0xa35a,	// (0x000841bb) grid_month_view_pane

0xde9e,	// (0x00087cff) cell_top_day_name_pane_ParamLimits

0xde9e,	// (0x00087cff) cell_top_day_name_pane

0xa364,	// (0x000841c5) cell_area_left_week_number_pane_ParamLimits

0xa364,	// (0x000841c5) cell_area_left_week_number_pane

0xa378,	// (0x000841d9) cell_month_view_pane_ParamLimits

0xa378,	// (0x000841d9) cell_month_view_pane

0xdeb8,	// (0x00087d19) frm_month_g1

0xa395,	// (0x000841f6) frm_month_g2

0xa39f,	// (0x00084200) frm_month_g3

0xa3a9,	// (0x0008420a) frm_month_g4

0xa3b3,	// (0x00084214) frm_month_g5

0xa3bd,	// (0x0008421e) frm_month_g6

0xa3c7,	// (0x00084228) frm_month_g7

0xdec1,	// (0x00087d22) frm_month_g8

0xdeca,	// (0x00087d2b) frm_month_g9

0xded3,	// (0x00087d34) frm_month_g10

0xdedc,	// (0x00087d3d) frm_month_g11

0xdee5,	// (0x00087d46) frm_month_g12

0xdeee,	// (0x00087d4f) frm_month_g13

0xdef7,	// (0x00087d58) frm_month_g14

0xdf02,	// (0x00087d63) frm_month_g15

0xdf0d,	// (0x00087d6e) frm_month_g16

0x000f,

0xfe43,	// (0x00089ca4) frm_month_g

0xa3d1,	// (0x00084232) cell_top_day_name_pane_t1

0xa3e0,	// (0x00084241) cell_area_left_week_number_pane_g1

0xa3e8,	// (0x00084249) cell_area_left_week_number_pane_t1

0xe869,	// (0x000886ca) cell_month_view_pane_g1

0xa3f7,	// (0x00084258) cell_month_view_pane_t1

0x139f,	// (0x0007b200) main_fps_pane

0xd297,	// (0x000870f8) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd297,	// (0x000870f8) cmail_ddmenu_btn02_pane_cp1

0xd2b3,	// (0x00087114) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd2b3,	// (0x00087114) cmail_ddmenu_btn02_pane_cp2

0x9cba,	// (0x00083b1b) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9cba,	// (0x00083b1b) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfd6d,	// (0x00089bce) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfd6d,	// (0x00089bce) cmail_ddmenu_btn02_pane_g

0x9cdb,	// (0x00083b3c) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9cdb,	// (0x00083b3c) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfd72,	// (0x00089bd3) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfd72,	// (0x00089bd3) cmail_ddmenu_btn02_pane_t

0xa406,	// (0x00084267) fps_text_pane_ParamLimits

0xa406,	// (0x00084267) fps_text_pane

0xa41d,	// (0x0008427e) main_fps_pane_g1_ParamLimits

0xa41d,	// (0x0008427e) main_fps_pane_g1

0xa437,	// (0x00084298) wait_bar_pane_cp010_ParamLimits

0xa437,	// (0x00084298) wait_bar_pane_cp010

0xa448,	// (0x000842a9) fps_text_pane_t1_ParamLimits

0xa448,	// (0x000842a9) fps_text_pane_t1

0x6a67,	// (0x000808c8) cam4_image_uncrop_pane_g1

0x6a70,	// (0x000808d1) cam4_image_uncrop_pane_g2

0x6a79,	// (0x000808da) cam4_image_uncrop_pane_g3

0x6a82,	// (0x000808e3) cam4_image_uncrop_pane_g4

0x0003,

0xf834,	// (0x00089695) cam4_image_uncrop_pane_g

0xa318,	// (0x00084179) dia3_listrow_pane_ParamLimits

0x139f,	// (0x0007b200) main_phob2_pane

0x9904,	// (0x00083765) cell_tport_appsw_pane_cp02_ParamLimits

0x9904,	// (0x00083765) cell_tport_appsw_pane_cp02

0x9918,	// (0x00083779) cell_tport_appsw_pane_cp03_ParamLimits

0x9918,	// (0x00083779) cell_tport_appsw_pane_cp03

0x139f,	// (0x0007b200) phob2_contact_card_pane

0x139f,	// (0x0007b200) phob2_listscroll_pane

0xdf18,	// (0x00087d79) phob2_list_pane

0xdf20,	// (0x00087d81) scroll_pane_cp034

0xa460,	// (0x000842c1) phob2_cc_data_pane_ParamLimits

0xa460,	// (0x000842c1) phob2_cc_data_pane

0xa47f,	// (0x000842e0) phob2_cc_listscroll_pane_ParamLimits

0xa47f,	// (0x000842e0) phob2_cc_listscroll_pane

0x6e98,	// (0x00080cf9) list_double_large_graphic_phob2_pane_ParamLimits

0x6e98,	// (0x00080cf9) list_double_large_graphic_phob2_pane

0xa49d,	// (0x000842fe) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xa49d,	// (0x000842fe) list_double_large_graphic_phob2_pane_g1

0x12ea,	// (0x0007b14b) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x12ea,	// (0x0007b14b) list_double_large_graphic_phob2_pane_g2

0x0001,

0xfe64,	// (0x00089cc5) list_double_large_graphic_phob2_pane_g_ParamLimits

0xfe64,	// (0x00089cc5) list_double_large_graphic_phob2_pane_g

0x12f6,	// (0x0007b157) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x12f6,	// (0x0007b157) list_double_large_graphic_phob2_pane_t1

0x130b,	// (0x0007b16c) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x130b,	// (0x0007b16c) list_double_large_graphic_phob2_pane_t2

0x0001,

0xfe69,	// (0x00089cca) list_double_large_graphic_phob2_pane_t_ParamLimits

0xfe69,	// (0x00089cca) list_double_large_graphic_phob2_pane_t

0x139f,	// (0x0007b200) list_highlight_pane_cp024

0xdf28,	// (0x00087d89) phob2_cc_button_pane

0xa4aa,	// (0x0008430b) phob2_cc_data_pane_g1_ParamLimits

0xa4aa,	// (0x0008430b) phob2_cc_data_pane_g1

0xa4bf,	// (0x00084320) phob2_cc_data_pane_g2_ParamLimits

0xa4bf,	// (0x00084320) phob2_cc_data_pane_g2

0x0001,

0xfe6e,	// (0x00089ccf) phob2_cc_data_pane_g_ParamLimits

0xfe6e,	// (0x00089ccf) phob2_cc_data_pane_g

0xa4d1,	// (0x00084332) phob2_cc_data_pane_t1_ParamLimits

0xa4d1,	// (0x00084332) phob2_cc_data_pane_t1

0xa4e9,	// (0x0008434a) phob2_cc_data_pane_t2_ParamLimits

0xa4e9,	// (0x0008434a) phob2_cc_data_pane_t2

0xa501,	// (0x00084362) phob2_cc_data_pane_t3_ParamLimits

0xa501,	// (0x00084362) phob2_cc_data_pane_t3

0x0002,

0xfe73,	// (0x00089cd4) phob2_cc_data_pane_t_ParamLimits

0xfe73,	// (0x00089cd4) phob2_cc_data_pane_t

0xdf30,	// (0x00087d91) phob2_cc_list_pane_ParamLimits

0xdf30,	// (0x00087d91) phob2_cc_list_pane

0x7ae2,	// (0x00081943) scroll_pane_cp035_ParamLimits

0x7ae2,	// (0x00081943) scroll_pane_cp035

0xa6bc,	// (0x0008451d) bg_button_pane_cp033

0xdf3c,	// (0x00087d9d) phob2_cc_button_pane_g1

0xdf48,	// (0x00087da9) phob2_cc_button_pane_t1

0xdf5d,	// (0x00087dbe) phob2_cc_button_pane_t2

0x0001,

0xfe7a,	// (0x00089cdb) phob2_cc_button_pane_t

0xa51b,	// (0x0008437c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xa51b,	// (0x0008437c) list_double_large_graphic_phob2_cc_pane

0xa52f,	// (0x00084390) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xa52f,	// (0x00084390) list_double_large_graphic_phob2_cc_pane_g1

0xa53b,	// (0x0008439c) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xa53b,	// (0x0008439c) list_double_large_graphic_phob2_cc_pane_g2

0xa547,	// (0x000843a8) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xa547,	// (0x000843a8) list_double_large_graphic_phob2_cc_pane_g3

0x131d,	// (0x0007b17e) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x131d,	// (0x0007b17e) list_double_large_graphic_phob2_cc_pane_g4

0x1329,	// (0x0007b18a) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x1329,	// (0x0007b18a) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xfe7f,	// (0x00089ce0) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xfe7f,	// (0x00089ce0) list_double_large_graphic_phob2_cc_pane_g

0x1335,	// (0x0007b196) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x1335,	// (0x0007b196) list_double_large_graphic_phob2_cc_pane_t1

0x135e,	// (0x0007b1bf) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x135e,	// (0x0007b1bf) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xfe8a,	// (0x00089ceb) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xfe8a,	// (0x00089ceb) list_double_large_graphic_phob2_cc_pane_t

0xdf6f,	// (0x00087dd0) list_highlight_pane_cp025_ParamLimits

0xdf6f,	// (0x00087dd0) list_highlight_pane_cp025

0xa6bc,	// (0x0008451d) bg_button_pane_cp033_ParamLimits

0xdf3c,	// (0x00087d9d) phob2_cc_button_pane_g1_ParamLimits

0xdf48,	// (0x00087da9) phob2_cc_button_pane_t1_ParamLimits

0xdf5d,	// (0x00087dbe) phob2_cc_button_pane_t2_ParamLimits

0xfe7a,	// (0x00089cdb) phob2_cc_button_pane_t_ParamLimits

0x15ab,	// (0x0007b40c) popup_wgtman_window

0x728b,	// (0x000810ec) scroll_pane_cp038

0xa0b4,	// (0x00083f15) wgtman_btn_pane_cp_01_ParamLimits

0xa0b4,	// (0x00083f15) wgtman_btn_pane_cp_01

0xdf7d,	// (0x00087dde) wgtman_content_pane

0xdc5b,	// (0x00087abc) wgtman_heading_pane

0x139f,	// (0x0007b200) bg_heading_pane_cp02

0xdf86,	// (0x00087de7) wgtman_heading_pane_g1

0xdf8e,	// (0x00087def) wgtman_heading_pane_t1

0xdf9c,	// (0x00087dfd) scroll_pane_cp036

0xdfa4,	// (0x00087e05) wgtman_list_pane

0xdfac,	// (0x00087e0d) wgtman_list_pane_t1_ParamLimits

0xdfac,	// (0x00087e0d) wgtman_list_pane_t1

0xe373,	// (0x000881d4) cam4_grid_pane

0x0c1c,	// (0x0007aa7d) bg_button_pane_cp015_ParamLimits

0x7962,	// (0x000817c3) bg_button_pane_cp016_ParamLimits

0x7975,	// (0x000817d6) bg_button_pane_cp017_ParamLimits

0x0c51,	// (0x0007aab2) popup_vitu2_query_window_g3_ParamLimits

0x0c51,	// (0x0007aab2) popup_vitu2_query_window_g3

0x0ccc,	// (0x0007ab2d) popup_vitu2_query_window_t6_ParamLimits

0x0ccc,	// (0x0007ab2d) popup_vitu2_query_window_t6

0x0cf7,	// (0x0007ab58) popup_vitu2_query_window_t7_ParamLimits

0x0cf7,	// (0x0007ab58) popup_vitu2_query_window_t7

0x6a67,	// (0x000808c8) cam4_grid_pane_g1

0x6a70,	// (0x000808d1) cam4_grid_pane_g2

0xdfca,	// (0x00087e2b) cam4_grid_pane_g3

0xdfd3,	// (0x00087e34) cam4_grid_pane_g4

0x0003,

0xfe8f,	// (0x00089cf0) cam4_grid_pane_g

0x24f3,	// (0x0007c354) aid_placing_vt_slider_lsc_ParamLimits

0x27f0,	// (0x0007c651) vidtel_button_pane_ParamLimits

0x27f0,	// (0x0007c651) vidtel_button_pane

0xdfde,	// (0x00087e3f) bg_button_pane_cp034

0xa553,	// (0x000843b4) vidtel_button_pane_g1

0xdfe8,	// (0x00087e49) vidtel_button_pane_t1

0x767a,	// (0x000814db) aid_size_vtel_slider_touch

0x7ae2,	// (0x00081943) scroll_pane_cp039

0x8e41,	// (0x00082ca2) ncim_query_button_pane_cp01_ParamLimits

0x8e60,	// (0x00082cc1) ncimui_query_pane_g1_ParamLimits

0xa6bc,	// (0x0008451d) input_focus_pane_cp012_ParamLimits

0x8e85,	// (0x00082ce6) ncim_query_entry_pane_t1_ParamLimits

0x7ae2,	// (0x00081943) scroll_pane_cp039_ParamLimits

0x35f1,	// (0x0007d452) navi_pane_bcale_mc_g1

0x35f9,	// (0x0007d45a) navi_pane_bcale_mc_t1

0xd2fc,	// (0x0008715d) main_sp_fs_email_pane_g1

0xd304,	// (0x00087165) main_sp_fs_email_pane_g2

0x0001,

0xfc2b,	// (0x00089a8c) main_sp_fs_email_pane_g

0xd85b,	// (0x000876bc) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd85b,	// (0x000876bc) list_single_cale_mrui_row_pane_g3

0x9d03,	// (0x00083b64) list_single_recal_day_pane_g5_event_pane

0xda20,	// (0x00087881) list_single_recal_day_pane_g7

0xdff6,	// (0x00087e57) list_recal_day_event_pane_cp01

0xdfff,	// (0x00087e60) list_recal_vselct_arw_lo_pane_cp01

0xe007,	// (0x00087e68) list_recal_vselct_arw_up_pane_cp01

0xe00f,	// (0x00087e70) list_recal_vselct_pane_cp01

0x785e,	// (0x000816bf) list_recal_day_event_pane_cp01_g1

0xe019,	// (0x00087e7a) list_recal_day_event_pane_cp01_t1

0xda28,	// (0x00087889) list_single_recal_day_pane_t1_ParamLimits

0xda3a,	// (0x0008789b) list_single_recal_day_pane_t2_ParamLimits

0xfd82,	// (0x00089be3) list_single_recal_day_pane_t_ParamLimits

0xaacf,	// (0x00084930) bg_notes_pane_ParamLimits

0xaadd,	// (0x0008493e) list_notes_pane_ParamLimits

0x1c13,	// (0x0007ba74) scroll_pane_cp06_ParamLimits

0xab19,	// (0x0008497a) main_notes_pane_ParamLimits

0x139f,	// (0x0007b200) main_welc_pane

0xa55b,	// (0x000843bc) main_welc_body_pane_ParamLimits

0xa55b,	// (0x000843bc) main_welc_body_pane

0xa578,	// (0x000843d9) main_welc_opti_pane_ParamLimits

0xa578,	// (0x000843d9) main_welc_opti_pane

0xa5c1,	// (0x00084422) main_welc_pane_t1_ParamLimits

0xa5c1,	// (0x00084422) main_welc_pane_t1

0xa5e3,	// (0x00084444) main_welc_body_row_pane_ParamLimits

0xa5e3,	// (0x00084444) main_welc_body_row_pane

0xa5fa,	// (0x0008445b) main_welc_opti_row_pane_ParamLimits

0xa5fa,	// (0x0008445b) main_welc_opti_row_pane

0xe027,	// (0x00087e88) main_welc_opti_row_pane_g1

0xe02f,	// (0x00087e90) main_welc_opti_row_pane_t1

0xe03e,	// (0x00087e9f) main_welc_body_row_pane_t1

0xdcc8,	// (0x00087b29) popup_notif_wgt_heading_pane

0xdce2,	// (0x00087b43) aid_size_list_notif_wgt_del_ParamLimits

0xdcef,	// (0x00087b50) list_notif_wgt_row_pane_g1_ParamLimits

0xdcfb,	// (0x00087b5c) list_notif_wgt_row_pane_g2_ParamLimits

0xdd07,	// (0x00087b68) list_notif_wgt_row_pane_g3_ParamLimits

0xfde9,	// (0x00089c4a) list_notif_wgt_row_pane_g_ParamLimits

0xdd14,	// (0x00087b75) list_notif_wgt_row_pane_t1_ParamLimits

0xdd29,	// (0x00087b8a) list_notif_wgt_row_pane_t2_ParamLimits

0xdd3b,	// (0x00087b9c) list_notif_wgt_row_pane_t3_ParamLimits

0xfdf0,	// (0x00089c51) list_notif_wgt_row_pane_t_ParamLimits

0xa14e,	// (0x00083faf) listrow_wgtman_pane_g1_ParamLimits

0xa15b,	// (0x00083fbc) listrow_wgtman_pane_g2_ParamLimits

0xfe14,	// (0x00089c75) listrow_wgtman_pane_g_ParamLimits

0x129a,	// (0x0007b0fb) listrow_wgtman_pane_t1_ParamLimits

0x12b2,	// (0x0007b113) listrow_wgtman_pane_t2_ParamLimits

0xfe19,	// (0x00089c7a) listrow_wgtman_pane_t_ParamLimits

0x12d8,	// (0x0007b139) wait_bar_pane_cp09_ParamLimits

0x139f,	// (0x0007b200) bg_popup_heading_pane_cp02

0xe04d,	// (0x00087eae) popup_notif_wgt_heading_pane_g1

0xe055,	// (0x00087eb6) popup_notif_wgt_heading_pane_t1

0x139f,	// (0x0007b200) main_vids_pane

0x139f,	// (0x0007b200) vids_listscroll_pane

0xa60a,	// (0x0008446b) scroll_pane_cp040

0x139f,	// (0x0007b200) vids_list_pane

0xa615,	// (0x00084476) vids_list_double_pane_ParamLimits

0xa615,	// (0x00084476) vids_list_double_pane

0xa626,	// (0x00084487) vids_list_double_pane_g1

0xa62f,	// (0x00084490) vids_list_double_pane_t1

0xa63e,	// (0x0008449f) vids_list_double_pane_t2

0x0001,

0xfe9d,	// (0x00089cfe) vids_list_double_pane_t

0xa6bc,	// (0x0008451d) main_ncimui_pane_ParamLimits

0x8b65,	// (0x000829c6) main_ncimui_pane_g1_ParamLimits

0x8b71,	// (0x000829d2) main_ncimui_pane_g2_ParamLimits

0x8b71,	// (0x000829d2) main_ncimui_pane_g2

0x0001,

0xfb30,	// (0x00089991) main_ncimui_pane_g_ParamLimits

0xfb30,	// (0x00089991) main_ncimui_pane_g

0xa597,	// (0x000843f8) main_welc_pane_g1_ParamLimits

0xa597,	// (0x000843f8) main_welc_pane_g1

0xa5ac,	// (0x0008440d) main_welc_pane_g2_ParamLimits

0xa5ac,	// (0x0008440d) main_welc_pane_g2

0x0001,

0xfe98,	// (0x00089cf9) main_welc_pane_g_ParamLimits

0xfe98,	// (0x00089cf9) main_welc_pane_g
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
	};

} // end of namespace AknLayoutScalable_Elaf_pnl4_apps_nhd4_lsc_tch_Large

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
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0001ecd2 };

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
0x2058,	// (0x00020d2a) Screen

0x2064,	// (0x00020d36) application_window

0x20a4,	// (0x00020d76) area_bottom_pane_ParamLimits

0x20a4,	// (0x00020d76) area_bottom_pane

0x20d9,	// (0x00020dab) area_top_pane_ParamLimits

0x20d9,	// (0x00020dab) area_top_pane

0x9c46,	// (0x00028918) call_video_uplink_pane_ParamLimits

0x9c46,	// (0x00028918) call_video_uplink_pane

0x2168,	// (0x00020e3a) main_pane_ParamLimits

0x2168,	// (0x00020e3a) main_pane

0xc34f,	// (0x0002b021) context_pane

0x5591,	// (0x00024263) navi_pane

0x55b5,	// (0x00024287) popup_cale_events_window_ParamLimits

0x55b5,	// (0x00024287) popup_cale_events_window

0xc362,	// (0x0002b034) popup_mup_playback_window

0x55cd,	// (0x0002429f) signal_pane

0xa397,	// (0x00029069) main_browser_pane

0xa54d,	// (0x0002921f) main_burst_pane

0x5443,	// (0x00024115) main_calc_pane

0xc2f2,	// (0x0002afc4) main_cale_day_pane

0x26e1,	// (0x000213b3) main_cale_month_pane

0xc2f2,	// (0x0002afc4) main_cale_week_pane

0xa54d,	// (0x0002921f) main_call_pane

0xa077,	// (0x00028d49) main_call_poc_pane

0xa54d,	// (0x0002921f) main_camera_pane

0xa54d,	// (0x0002921f) main_chi_dic_pane

0xad35,	// (0x00029a07) main_clock_pane

0xa077,	// (0x00028d49) main_fmradio_pane

0xa54d,	// (0x0002921f) main_graph_messa_pane

0xa077,	// (0x00028d49) main_help_pane

0xa397,	// (0x00029069) main_im_pane

0xa2d2,	// (0x00028fa4) main_image_pane_ParamLimits

0xa2d2,	// (0x00028fa4) main_image_pane

0xa077,	// (0x00028d49) main_location2_pane

0xa54d,	// (0x0002921f) main_location_pane

0xa2d2,	// (0x00028fa4) main_messa_pane

0xa077,	// (0x00028d49) main_mp2_pane

0xa54d,	// (0x0002921f) main_mp_pane

0xa077,	// (0x00028d49) main_msg_pane

0xa077,	// (0x00028d49) main_mup_eq_pane

0xa077,	// (0x00028d49) main_mup_pane

0xa397,	// (0x00029069) main_notes_pane

0xa077,	// (0x00028d49) main_pec_pane

0xa077,	// (0x00028d49) main_phob_pane

0xa077,	// (0x00028d49) main_pinb_pane

0xa077,	// (0x00028d49) main_postcard_pane

0xa077,	// (0x00028d49) main_qdial_pane

0xa54d,	// (0x0002921f) main_skin_pane

0xa077,	// (0x00028d49) main_smil2_pane

0xa54d,	// (0x0002921f) main_smil_pane

0xa54d,	// (0x0002921f) main_video_pane

0xa54d,	// (0x0002921f) main_video_tele_pane

0xa2d2,	// (0x00028fa4) main_viewer_pane_ParamLimits

0xa2d2,	// (0x00028fa4) main_viewer_pane

0xa54d,	// (0x0002921f) main_vorec_pane

0x547b,	// (0x0002414d) popup_blid_sat_info_window_ParamLimits

0x547b,	// (0x0002414d) popup_blid_sat_info_window

0x5495,	// (0x00024167) popup_dyc_status_message_window_ParamLimits

0x5495,	// (0x00024167) popup_dyc_status_message_window

0x54a5,	// (0x00024177) popup_grid_large_graphic_window_ParamLimits

0x54a5,	// (0x00024177) popup_grid_large_graphic_window

0x551d,	// (0x000241ef) popup_loc_request_window_ParamLimits

0x551d,	// (0x000241ef) popup_loc_request_window

0x5565,	// (0x00024237) popup_wml_address_window_ParamLimits

0x5565,	// (0x00024237) popup_wml_address_window

0x531b,	// (0x00023fed) call_muted_g1

0x4fda,	// (0x00023cac) popup_call_audio_conf_window_ParamLimits

0x4fda,	// (0x00023cac) popup_call_audio_conf_window

0x532b,	// (0x00023ffd) popup_call_audio_first_window_ParamLimits

0x532b,	// (0x00023ffd) popup_call_audio_first_window

0x536b,	// (0x0002403d) popup_call_audio_in_window_ParamLimits

0x536b,	// (0x0002403d) popup_call_audio_in_window

0x538f,	// (0x00024061) popup_call_audio_out_window_ParamLimits

0x538f,	// (0x00024061) popup_call_audio_out_window

0x53b1,	// (0x00024083) popup_call_audio_second_window_ParamLimits

0x53b1,	// (0x00024083) popup_call_audio_second_window

0x53e1,	// (0x000240b3) popup_call_audio_wait_window_ParamLimits

0x53e1,	// (0x000240b3) popup_call_audio_wait_window

0x5402,	// (0x000240d4) popup_number_entry_window_ParamLimits

0x5402,	// (0x000240d4) popup_number_entry_window

0x9c64,	// (0x00028936) bg_popup_call_pane_cp05_ParamLimits

0x9c64,	// (0x00028936) bg_popup_call_pane_cp05

0x9c84,	// (0x00028956) popup_number_entry_window_t1

0x9c97,	// (0x00028969) popup_number_entry_window_t2

0x9ca9,	// (0x0002897b) popup_number_entry_window_t3

0x0003,

0xf0ca,	// (0x0002dd9c) popup_number_entry_window_t

0x9cbb,	// (0x0002898d) text_title_cp2

0x9cce,	// (0x000289a0) bg_popup_call_pane_cp_ParamLimits

0x9cce,	// (0x000289a0) bg_popup_call_pane_cp

0x9cdc,	// (0x000289ae) call_thumbnail_pane

0x9ce4,	// (0x000289b6) popup_call_audio_in_window_g1_ParamLimits

0x9ce4,	// (0x000289b6) popup_call_audio_in_window_g1

0x9cf0,	// (0x000289c2) popup_call_audio_in_window_g2_ParamLimits

0x9cf0,	// (0x000289c2) popup_call_audio_in_window_g2

0x9cfc,	// (0x000289ce) popup_call_audio_in_window_g3_ParamLimits

0x9cfc,	// (0x000289ce) popup_call_audio_in_window_g3

0x0002,

0xf0d3,	// (0x0002dda5) popup_call_audio_in_window_g_ParamLimits

0xf0d3,	// (0x0002dda5) popup_call_audio_in_window_g

0x9d08,	// (0x000289da) popup_call_audio_in_window_t1_ParamLimits

0x9d08,	// (0x000289da) popup_call_audio_in_window_t1

0x9d24,	// (0x000289f6) popup_call_audio_in_window_t2_ParamLimits

0x9d24,	// (0x000289f6) popup_call_audio_in_window_t2

0x9d40,	// (0x00028a12) popup_call_audio_in_window_t3_ParamLimits

0x9d40,	// (0x00028a12) popup_call_audio_in_window_t3

0x0002,

0xf0da,	// (0x0002ddac) popup_call_audio_in_window_t_ParamLimits

0xf0da,	// (0x0002ddac) popup_call_audio_in_window_t

0x9cce,	// (0x000289a0) bg_popup_call_pane_cp01_ParamLimits

0x9cce,	// (0x000289a0) bg_popup_call_pane_cp01

0x9cdc,	// (0x000289ae) call_thumbnail_pane_cp02

0x9d53,	// (0x00028a25) call_type_pane_cp022

0x9d5b,	// (0x00028a2d) popup_call_audio_out_window_g1_ParamLimits

0x9d5b,	// (0x00028a2d) popup_call_audio_out_window_g1

0x9d6d,	// (0x00028a3f) popup_call_audio_out_window_g2_ParamLimits

0x9d6d,	// (0x00028a3f) popup_call_audio_out_window_g2

0x9d79,	// (0x00028a4b) popup_call_audio_out_window_g3_ParamLimits

0x9d79,	// (0x00028a4b) popup_call_audio_out_window_g3

0x0002,

0xf0e1,	// (0x0002ddb3) popup_call_audio_out_window_g_ParamLimits

0xf0e1,	// (0x0002ddb3) popup_call_audio_out_window_g

0x9d8b,	// (0x00028a5d) popup_call_audio_out_window_t1_ParamLimits

0x9d8b,	// (0x00028a5d) popup_call_audio_out_window_t1

0x9da3,	// (0x00028a75) popup_call_audio_out_window_t2_ParamLimits

0x9da3,	// (0x00028a75) popup_call_audio_out_window_t2

0x0001,

0xf0e8,	// (0x0002ddba) popup_call_audio_out_window_t_ParamLimits

0xf0e8,	// (0x0002ddba) popup_call_audio_out_window_t

0x9db8,	// (0x00028a8a) bg_popup_call_pane_ParamLimits

0x9db8,	// (0x00028a8a) bg_popup_call_pane

0x236c,	// (0x0002103e) call_thumbnail_pane_cp_ParamLimits

0x236c,	// (0x0002103e) call_thumbnail_pane_cp

0x9e3c,	// (0x00028b0e) call_type_pane_cp01_ParamLimits

0x9e3c,	// (0x00028b0e) call_type_pane_cp01

0x9e80,	// (0x00028b52) popup_call_audio_first_window_g1_ParamLimits

0x9e80,	// (0x00028b52) popup_call_audio_first_window_g1

0x9ecc,	// (0x00028b9e) popup_call_audio_first_window_g2_ParamLimits

0x9ecc,	// (0x00028b9e) popup_call_audio_first_window_g2

0x0001,

0xf0ed,	// (0x0002ddbf) popup_call_audio_first_window_g_ParamLimits

0xf0ed,	// (0x0002ddbf) popup_call_audio_first_window_g

0x9f10,	// (0x00028be2) popup_call_audio_first_window_t1_ParamLimits

0x9f10,	// (0x00028be2) popup_call_audio_first_window_t1

0x9fbc,	// (0x00028c8e) popup_call_audio_first_window_t4_ParamLimits

0x9fbc,	// (0x00028c8e) popup_call_audio_first_window_t4

0xa048,	// (0x00028d1a) popup_call_audio_first_window_t5_ParamLimits

0xa048,	// (0x00028d1a) popup_call_audio_first_window_t5

0x0002,

0xf0f2,	// (0x0002ddc4) popup_call_audio_first_window_t_ParamLimits

0xf0f2,	// (0x0002ddc4) popup_call_audio_first_window_t

0xa077,	// (0x00028d49) bg_popup_call_pane_cp02

0xa081,	// (0x00028d53) call_type_pane_cp023

0xa089,	// (0x00028d5b) popup_call_audio_wait_window_g1

0xa091,	// (0x00028d63) popup_call_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002ddcb) popup_call_audio_wait_window_g

0xa099,	// (0x00028d6b) popup_call_audio_wait_window_t3

0xa0a7,	// (0x00028d79) bg_popup_call_pane_cp03_ParamLimits

0xa0a7,	// (0x00028d79) bg_popup_call_pane_cp03

0xa107,	// (0x00028dd9) call_thumbnail_pane_cp011_ParamLimits

0xa107,	// (0x00028dd9) call_thumbnail_pane_cp011

0xa113,	// (0x00028de5) call_type_pane_cp034_ParamLimits

0xa113,	// (0x00028de5) call_type_pane_cp034

0xa14f,	// (0x00028e21) popup_call_audio_second_window_g1_ParamLimits

0xa14f,	// (0x00028e21) popup_call_audio_second_window_g1

0xa18b,	// (0x00028e5d) popup_call_audio_second_window_g2_ParamLimits

0xa18b,	// (0x00028e5d) popup_call_audio_second_window_g2

0x0001,

0xf0fe,	// (0x0002ddd0) popup_call_audio_second_window_g_ParamLimits

0xf0fe,	// (0x0002ddd0) popup_call_audio_second_window_g

0xa1c7,	// (0x00028e99) popup_call_audio_second_window_t1_ParamLimits

0xa1c7,	// (0x00028e99) popup_call_audio_second_window_t1

0xa248,	// (0x00028f1a) popup_call_audio_second_window_t2_ParamLimits

0xa248,	// (0x00028f1a) popup_call_audio_second_window_t2

0xa27e,	// (0x00028f50) popup_call_audio_second_window_t3_ParamLimits

0xa27e,	// (0x00028f50) popup_call_audio_second_window_t3

0x0002,

0xf103,	// (0x0002ddd5) popup_call_audio_second_window_t_ParamLimits

0xf103,	// (0x0002ddd5) popup_call_audio_second_window_t

0xa077,	// (0x00028d49) bg_popup_call_pane_cp04

0xa2b4,	// (0x00028f86) list_conf_pane

0xa2bc,	// (0x00028f8e) popup_call_audio_conf_window_t1

0xa2ca,	// (0x00028f9c) call_thumbnail_pane_g1

0xa2d2,	// (0x00028fa4) bg_pinb_pane_ParamLimits

0xa2d2,	// (0x00028fa4) bg_pinb_pane

0xa2e0,	// (0x00028fb2) find_pinb_pane

0xa2e9,	// (0x00028fbb) listscroll_pinb_pane_ParamLimits

0xa2e9,	// (0x00028fbb) listscroll_pinb_pane

0xa2f8,	// (0x00028fca) pinb_bg_pane_g1

0x2390,	// (0x00021062) pinb_bg_pane_g2

0x239c,	// (0x0002106e) pinb_bg_pane_g3

0x23a8,	// (0x0002107a) pinb_bg_pane_g4

0x23b4,	// (0x00021086) pinb_bg_pane_g5

0x23c0,	// (0x00021092) pinb_bg_pane_g6

0x23cb,	// (0x0002109d) pinb_bg_pane_g7

0x23d6,	// (0x000210a8) pinb_bg_pane_g8

0x23e1,	// (0x000210b3) pinb_bg_pane_g9

0x23eb,	// (0x000210bd) pinb_bg_pane_g10

0x0009,

0xf10a,	// (0x0002dddc) pinb_bg_pane_g

0x2408,	// (0x000210da) grid_pinb_pane

0x2413,	// (0x000210e5) list_pinb_pane

0x241e,	// (0x000210f0) scroll_pane_cp01_ParamLimits

0x241e,	// (0x000210f0) scroll_pane_cp01

0xa302,	// (0x00028fd4) find_pinb_pane_g1_ParamLimits

0xa302,	// (0x00028fd4) find_pinb_pane_g1

0xa31a,	// (0x00028fec) find_pinb_pane_t1

0xa32c,	// (0x00028ffe) find_pinb_pane_t2

0x0001,

0xf124,	// (0x0002ddf6) find_pinb_pane_t

0xa341,	// (0x00029013) input_focus_pane_cp01_ParamLimits

0xa341,	// (0x00029013) input_focus_pane_cp01

0x2430,	// (0x00021102) cell_pinb_pane_ParamLimits

0x2430,	// (0x00021102) cell_pinb_pane

0x2455,	// (0x00021127) cell_pinb_pane_g1_ParamLimits

0x2455,	// (0x00021127) cell_pinb_pane_g1

0x246a,	// (0x0002113c) cell_pinb_pane_g2_ParamLimits

0x246a,	// (0x0002113c) cell_pinb_pane_g2

0xa34d,	// (0x0002901f) cell_pinb_pane_g3_ParamLimits

0xa34d,	// (0x0002901f) cell_pinb_pane_g3

0x0002,

0xf129,	// (0x0002ddfb) cell_pinb_pane_g_ParamLimits

0xf129,	// (0x0002ddfb) cell_pinb_pane_g

0xa077,	// (0x00028d49) grid_highlight_pane_cp01

0x2476,	// (0x00021148) list_pinb_item_pane_ParamLimits

0x2476,	// (0x00021148) list_pinb_item_pane

0xa077,	// (0x00028d49) list_highlight_pane_cp02

0x2494,	// (0x00021166) list_pinb_item_pane_g1_ParamLimits

0x2494,	// (0x00021166) list_pinb_item_pane_g1

0x24a1,	// (0x00021173) list_pinb_item_pane_g2_ParamLimits

0x24a1,	// (0x00021173) list_pinb_item_pane_g2

0x24ad,	// (0x0002117f) list_pinb_item_pane_g3_ParamLimits

0x24ad,	// (0x0002117f) list_pinb_item_pane_g3

0x24be,	// (0x00021190) list_pinb_item_pane_g4_ParamLimits

0x24be,	// (0x00021190) list_pinb_item_pane_g4

0x0003,

0xf130,	// (0x0002de02) list_pinb_item_pane_g_ParamLimits

0xf130,	// (0x0002de02) list_pinb_item_pane_g

0x24ca,	// (0x0002119c) list_pinb_item_pane_t1_ParamLimits

0x24ca,	// (0x0002119c) list_pinb_item_pane_t1

0x0ad6,	// (0x0001f7a8) calc_display_pane

0x0af4,	// (0x0001f7c6) calc_paper_pane

0x0b10,	// (0x0001f7e2) grid_calc_pane

0xa077,	// (0x00028d49) bg_list_pane_cp01

0x24e1,	// (0x000211b3) clock_g1

0x24e9,	// (0x000211bb) clock_g2

0x0001,

0xf139,	// (0x0002de0b) clock_g

0x24f3,	// (0x000211c5) clock_t1_ParamLimits

0x24f3,	// (0x000211c5) clock_t1

0x2508,	// (0x000211da) clock_t2_ParamLimits

0x2508,	// (0x000211da) clock_t2

0x251a,	// (0x000211ec) clock_t3_ParamLimits

0x251a,	// (0x000211ec) clock_t3

0x252c,	// (0x000211fe) clock_t4_ParamLimits

0x252c,	// (0x000211fe) clock_t4

0x253e,	// (0x00021210) clock_t5_ParamLimits

0x253e,	// (0x00021210) clock_t5

0x2553,	// (0x00021225) clock_t6_ParamLimits

0x2553,	// (0x00021225) clock_t6

0x2565,	// (0x00021237) clock_t7_ParamLimits

0x2565,	// (0x00021237) clock_t7

0x2577,	// (0x00021249) clock_t8_ParamLimits

0x2577,	// (0x00021249) clock_t8

0x258d,	// (0x0002125f) clock_t9_ParamLimits

0x258d,	// (0x0002125f) clock_t9

0x0008,

0xf13e,	// (0x0002de10) clock_t_ParamLimits

0xf13e,	// (0x0002de10) clock_t

0xa359,	// (0x0002902b) popup_clock_analogue_window_cp02

0xa359,	// (0x0002902b) popup_clock_digital_window_cp01

0xa361,	// (0x00029033) listscroll_help_pane

0xa077,	// (0x00028d49) phob_pre_status_pane

0xa36b,	// (0x0002903d) grid_qdial_pane

0xa2d2,	// (0x00028fa4) listscroll_mce_pane

0xa2d2,	// (0x00028fa4) bg_notes_pane

0xa375,	// (0x00029047) list_notes_pane

0x25a3,	// (0x00021275) scroll_pane_cp06

0xa383,	// (0x00029055) bg_calc_paper_pane

0x0b46,	// (0x0001f818) list_calc_pane

0xa397,	// (0x00029069) bg_calc_display_pane

0x0b60,	// (0x0001f832) calc_display_pane_t1

0x0b75,	// (0x0001f847) calc_display_pane_t2

0x0b8a,	// (0x0001f85c) calc_display_pane_t3

0x0002,

0xf151,	// (0x0002de23) calc_display_pane_t

0x0b9c,	// (0x0001f86e) cell_calc_pane_ParamLimits

0x0b9c,	// (0x0001f86e) cell_calc_pane

0xa3a3,	// (0x00029075) bg_calc_paper_pane_g1

0xa3af,	// (0x00029081) bg_calc_paper_pane_g2

0xa3bb,	// (0x0002908d) bg_calc_paper_pane_g3

0xa3c7,	// (0x00029099) bg_calc_paper_pane_g4

0xa3d3,	// (0x000290a5) bg_calc_paper_pane_g5

0x25b2,	// (0x00021284) bg_calc_paper_pane_g6

0x25c3,	// (0x00021295) bg_calc_paper_pane_g7

0x25d4,	// (0x000212a6) bg_calc_paper_pane_g8

0x0007,

0xf158,	// (0x0002de2a) bg_calc_paper_pane_g

0x25e7,	// (0x000212b9) calc_bg_paper_pane_g9

0x25fa,	// (0x000212cc) list_calc_item_pane_ParamLimits

0x25fa,	// (0x000212cc) list_calc_item_pane

0xa3df,	// (0x000290b1) list_calc_item_pane_g1

0x0bcb,	// (0x0001f89d) list_calc_item_pane_t1_ParamLimits

0x0bcb,	// (0x0001f89d) list_calc_item_pane_t1

0x0bdd,	// (0x0001f8af) list_calc_item_pane_t2_ParamLimits

0x0bdd,	// (0x0001f8af) list_calc_item_pane_t2

0x0001,

0xf169,	// (0x0002de3b) list_calc_item_pane_t_ParamLimits

0xf169,	// (0x0002de3b) list_calc_item_pane_t

0xa3ec,	// (0x000290be) cell_calc_pane_g1

0xa3f6,	// (0x000290c8) grid_highlight_pane_cp02

0xa418,	// (0x000290ea) bg_calc_display_pane_g1

0x0c0d,	// (0x0001f8df) bg_calc_display_pane_g2

0xa421,	// (0x000290f3) bg_calc_display_pane_g3

0x0002,

0xf173,	// (0x0002de45) bg_calc_display_pane_g

0x0c17,	// (0x0001f8e9) cell_qdial_pane_ParamLimits

0x0c17,	// (0x0001f8e9) cell_qdial_pane

0x261b,	// (0x000212ed) cell_qdial_pane_g1_ParamLimits

0x261b,	// (0x000212ed) cell_qdial_pane_g1

0x2628,	// (0x000212fa) cell_qdial_pane_g2_ParamLimits

0x2628,	// (0x000212fa) cell_qdial_pane_g2

0xa42a,	// (0x000290fc) cell_qdial_pane_g3_ParamLimits

0xa42a,	// (0x000290fc) cell_qdial_pane_g3

0x0003,

0xf17a,	// (0x0002de4c) cell_qdial_pane_g_ParamLimits

0xf17a,	// (0x0002de4c) cell_qdial_pane_g

0x2646,	// (0x00021318) cell_qdial_pane_t1_ParamLimits

0x2646,	// (0x00021318) cell_qdial_pane_t1

0x265e,	// (0x00021330) cell_qdial_pane_t2_ParamLimits

0x265e,	// (0x00021330) cell_qdial_pane_t2

0x2671,	// (0x00021343) cell_qdial_pane_t3_ParamLimits

0x2671,	// (0x00021343) cell_qdial_pane_t3

0x0002,

0xf183,	// (0x0002de55) cell_qdial_pane_t_ParamLimits

0xf183,	// (0x0002de55) cell_qdial_pane_t

0xa077,	// (0x00028d49) grid_highlight_pane_cp04

0xa436,	// (0x00029108) thumbnail_qdial_pane_ParamLimits

0xa436,	// (0x00029108) thumbnail_qdial_pane

0xa492,	// (0x00029164) list_help_pane

0xa49b,	// (0x0002916d) scroll_pane_cp02

0x2684,	// (0x00021356) help_list_pane_t1_ParamLimits

0x2684,	// (0x00021356) help_list_pane_t1

0x0c2d,	// (0x0001f8ff) bg_notes_pane_g2

0x0c35,	// (0x0001f907) bg_notes_pane_g3

0x0c3d,	// (0x0001f90f) notes_bg_pane_g1

0x0c45,	// (0x0001f917) notes_bg_pane_g4

0x0c4d,	// (0x0001f91f) notes_bg_pane_g5

0x0c55,	// (0x0001f927) notes_bg_pane_g6

0x0c5d,	// (0x0001f92f) notes_bg_pane_g7

0x0c65,	// (0x0001f937) notes_bg_pane_g8

0x0c6d,	// (0x0001f93f) notes_bg_pane_g9

0x0006,

0xf1a1,	// (0x0002de73) notes_bg_pane_g

0x26ab,	// (0x0002137d) list_notes_text_pane_ParamLimits

0x26ab,	// (0x0002137d) list_notes_text_pane

0xa4a4,	// (0x00029176) list_notes_text_pane_g1

0x26d3,	// (0x000213a5) list_notes_text_pane_t1

0x26e1,	// (0x000213b3) listscroll_cale_week_pane

0x2717,	// (0x000213e9) bg_cale_heading_pane

0x2740,	// (0x00021412) bg_cale_pane_cp01

0x2762,	// (0x00021434) cale_week_corner_pane

0x2781,	// (0x00021453) cale_week_day_heading_pane

0x27af,	// (0x00021481) cale_week_scroll_pane_g1

0x27d3,	// (0x000214a5) cale_week_scroll_pane_g2

0x27eb,	// (0x000214bd) cale_week_scroll_pane_g3

0x2803,	// (0x000214d5) cale_week_scroll_pane_g4

0x281b,	// (0x000214ed) cale_week_scroll_pane_g5

0x2833,	// (0x00021505) cale_week_scroll_pane_g6

0x2853,	// (0x00021525) cale_week_scroll_pane_g7

0x2873,	// (0x00021545) cale_week_scroll_pane_g8

0x2893,	// (0x00021565) cale_week_scroll_pane_g9

0x28b0,	// (0x00021582) cale_week_scroll_pane_g10

0x28cd,	// (0x0002159f) cale_week_scroll_pane_g11

0x28ea,	// (0x000215bc) cale_week_scroll_pane_g12

0x2907,	// (0x000215d9) cale_week_scroll_pane_g13

0x292c,	// (0x000215fe) cale_week_scroll_pane_g14

0x2955,	// (0x00021627) cale_week_scroll_pane_g15

0x000f,

0xf1b0,	// (0x0002de82) cale_week_scroll_pane_g

0x299e,	// (0x00021670) cale_week_time_pane

0x29be,	// (0x00021690) grid_cale_week_pane

0xa4d0,	// (0x000291a2) scroll_pane_cp08

0x29f1,	// (0x000216c3) cell_cale_week_pane_ParamLimits

0x29f1,	// (0x000216c3) cell_cale_week_pane

0x2a81,	// (0x00021753) cale_week_day_heading_pane_t1

0x2ac9,	// (0x0002179b) cale_week_day_heading_pane_t2

0x2b16,	// (0x000217e8) cale_week_day_heading_pane_t3

0x2b63,	// (0x00021835) cale_week_day_heading_pane_t4

0x2bb0,	// (0x00021882) cale_week_day_heading_pane_t5

0x2bfd,	// (0x000218cf) cale_week_day_heading_pane_t6

0x2c4a,	// (0x0002191c) cale_week_day_heading_pane_t7

0x0006,

0xf1d1,	// (0x0002dea3) cale_week_day_heading_pane_t

0xa4f2,	// (0x000291c4) bg_cale_side_pane

0x0c75,	// (0x0001f947) cale_week_time_pane_t1

0x0cb9,	// (0x0001f98b) cale_week_time_pane_t2

0x0cfd,	// (0x0001f9cf) cale_week_time_pane_t3

0x0d41,	// (0x0001fa13) cale_week_time_pane_t4

0x0d85,	// (0x0001fa57) cale_week_time_pane_t5

0x0dc9,	// (0x0001fa9b) cale_week_time_pane_t6

0x0e0d,	// (0x0001fadf) cale_week_time_pane_t7

0x0e59,	// (0x0001fb2b) cale_week_time_pane_t8

0x0007,

0xf1e0,	// (0x0002deb2) cale_week_time_pane_t

0x2c92,	// (0x00021964) cell_cale_week_pane_g2

0x2cb6,	// (0x00021988) cell_cale_week_pane_g3_ParamLimits

0x2cb6,	// (0x00021988) cell_cale_week_pane_g3

0xa500,	// (0x000291d2) grid_highlight_pane_cp07

0xa508,	// (0x000291da) listscroll_gms_pane

0xa512,	// (0x000291e4) grid_gms_pane

0xa51b,	// (0x000291ed) listscroll_gms_pane_g1

0xa523,	// (0x000291f5) listscroll_gms_pane_g2

0x0001,

0xf1f1,	// (0x0002dec3) listscroll_gms_pane_g

0x2cce,	// (0x000219a0) scroll_pane_cp010

0x2cd9,	// (0x000219ab) cell_gms_pane_ParamLimits

0x2cd9,	// (0x000219ab) cell_gms_pane

0x2cec,	// (0x000219be) cell_gms_pane_g1

0xa52b,	// (0x000291fd) cell_gms_pane_g2

0xa533,	// (0x00029205) cell_gms_pane_g3

0xa53c,	// (0x0002920e) cell_gms_pane_g4

0x0003,

0xf1f6,	// (0x0002dec8) cell_gms_pane_g

0xa545,	// (0x00029217) grid_highlight_pane_cp09

0x52c3,	// (0x00023f95) phob_pre_status_pane_g1

0x52cb,	// (0x00023f9d) phob_pre_status_pane_g2

0x52d3,	// (0x00023fa5) phob_pre_status_pane_g3

0x52db,	// (0x00023fad) phob_pre_status_pane_g4

0x0004,

0xf5e1,	// (0x0002e2b3) phob_pre_status_pane_g

0x52eb,	// (0x00023fbd) phob_pre_status_pane_t1

0x52fb,	// (0x00023fcd) phob_pre_status_pane_t2

0x530b,	// (0x00023fdd) phob_pre_status_pane_t3

0x0002,

0xf5ec,	// (0x0002e2be) phob_pre_status_pane_t

0xa54d,	// (0x0002921f) bg_list_pane_cp05

0x2cfc,	// (0x000219ce) grid_vorec_pane

0x2d08,	// (0x000219da) vorec_t1

0x2d16,	// (0x000219e8) vorec_t2

0x2d24,	// (0x000219f6) vorec_t3

0x2d32,	// (0x00021a04) vorec_t4

0x2032,	// (0x00020d04) vorec_t5

0x2040,	// (0x00020d12) vorec_t6

0x0004,

0xf1ff,	// (0x0002ded1) vorec_t

0x204e,	// (0x00020d20) wait_bar_pane_cp01

0x2d4e,	// (0x00021a20) cell_vorec_pane_ParamLimits

0x2d4e,	// (0x00021a20) cell_vorec_pane

0x0ea7,	// (0x0001fb79) cell_vorec_pane_g1

0xa077,	// (0x00028d49) grid_highlight_pane_cp05

0x2d71,	// (0x00021a43) cams_zoom_pane

0x2d7d,	// (0x00021a4f) image_vga_pane

0x2d8c,	// (0x00021a5e) main_camera_pane_g1

0x2d9a,	// (0x00021a6c) main_camera_pane_g2

0x2da6,	// (0x00021a78) main_camera_pane_g3

0x2db4,	// (0x00021a86) main_camera_pane_g4

0x2dc2,	// (0x00021a94) main_camera_pane_g5

0x2dd0,	// (0x00021aa2) main_camera_pane_g6

0x2dde,	// (0x00021ab0) main_camera_pane_g7

0x0007,

0xf20a,	// (0x0002dedc) main_camera_pane_g

0x2dec,	// (0x00021abe) main_camera_pane_t1

0x2dfe,	// (0x00021ad0) main_camera_pane_t2

0x0001,

0xf21b,	// (0x0002deed) main_camera_pane_t

0x2e21,	// (0x00021af3) cams_zoom_pane_cp_ParamLimits

0x2e21,	// (0x00021af3) cams_zoom_pane_cp

0x2e45,	// (0x00021b17) image_cif_pane_ParamLimits

0x2e45,	// (0x00021b17) image_cif_pane

0x2e63,	// (0x00021b35) image_subqcif_pane

0x2e6d,	// (0x00021b3f) main_video_pane_g1_ParamLimits

0x2e6d,	// (0x00021b3f) main_video_pane_g1

0x2e8d,	// (0x00021b5f) main_video_pane_g2_ParamLimits

0x2e8d,	// (0x00021b5f) main_video_pane_g2

0x2ebd,	// (0x00021b8f) main_video_pane_g3_ParamLimits

0x2ebd,	// (0x00021b8f) main_video_pane_g3

0x2ee6,	// (0x00021bb8) main_video_pane_g4_ParamLimits

0x2ee6,	// (0x00021bb8) main_video_pane_g4

0x2f0f,	// (0x00021be1) main_video_pane_g5_ParamLimits

0x2f0f,	// (0x00021be1) main_video_pane_g5

0xa561,	// (0x00029233) main_video_pane_g6_ParamLimits

0xa561,	// (0x00029233) main_video_pane_g6

0x0006,

0xf220,	// (0x0002def2) main_video_pane_g_ParamLimits

0xf220,	// (0x0002def2) main_video_pane_g

0x2f31,	// (0x00021c03) main_video_pane_t1_ParamLimits

0x2f31,	// (0x00021c03) main_video_pane_t1

0xa57b,	// (0x0002924d) cams_zoom_pane_g1

0xa584,	// (0x00029256) cams_zoom_pane_g2

0xa58d,	// (0x0002925f) cams_zoom_pane_g3

0xa596,	// (0x00029268) cams_zoom_pane_g4

0x0003,

0xf22f,	// (0x0002df01) cams_zoom_pane_g

0x2f7b,	// (0x00021c4d) grid_cams_pane

0x2f89,	// (0x00021c5b) linegrid_cams_pane

0x2f95,	// (0x00021c67) cell_cams_pane_ParamLimits

0x2f95,	// (0x00021c67) cell_cams_pane

0xa59f,	// (0x00029271) cams_burst_image_pane

0xa5a7,	// (0x00029279) cell_cams_pane_g1

0xa077,	// (0x00028d49) grid_highlight_pane_cp03

0xa3ec,	// (0x000290be) mp_bg_pane_g1

0xa077,	// (0x00028d49) bg_list_pane_cp03

0xc215,	// (0x0002aee7) bg_mp_pane

0xc21d,	// (0x0002aeef) grid_mp_pane

0xc225,	// (0x0002aef7) media_player_g1

0xc22f,	// (0x0002af01) media_player_t1

0xc23d,	// (0x0002af0f) media_player_t2

0xc24b,	// (0x0002af1d) media_player_t3

0xc259,	// (0x0002af2b) media_player_t4

0xc267,	// (0x0002af39) media_player_t5

0xc275,	// (0x0002af47) media_player_t6

0xc283,	// (0x0002af55) media_player_t7

0x0006,

0xf5cb,	// (0x0002e29d) media_player_t

0xc291,	// (0x0002af63) wait_bar_pane_cp02

0xf5b0,	// (0x0002e282) main_usb_pane_t

0x52ba,	// (0x00023f8c) cell_mp_pane

0xa3ec,	// (0x000290be) cell_mp_pane_g1

0xa077,	// (0x00028d49) grid_highlight_pane_cp06

0xa5af,	// (0x00029281) grid_skin_colour_pane

0xa5b7,	// (0x00029289) list_highlight_pane_cp03

0x30c1,	// (0x00021d93) skin_g1

0xa5bf,	// (0x00029291) skin_t1

0xa5ce,	// (0x000292a0) skin_t2

0x0001,

0xf264,	// (0x0002df36) skin_t

0x30cb,	// (0x00021d9d) cell_skin_colour_pane_ParamLimits

0x30cb,	// (0x00021d9d) cell_skin_colour_pane

0xa5dc,	// (0x000292ae) cell_skin_colour_pane_g1

0x314b,	// (0x00021e1d) call_video_g1_ParamLimits

0x314b,	// (0x00021e1d) call_video_g1

0x315b,	// (0x00021e2d) call_video_g2_ParamLimits

0x315b,	// (0x00021e2d) call_video_g2

0x0001,

0xf269,	// (0x0002df3b) call_video_g_ParamLimits

0xf269,	// (0x0002df3b) call_video_g

0x31ab,	// (0x00021e7d) call_video_uplink_pane_cp1_ParamLimits

0x31ab,	// (0x00021e7d) call_video_uplink_pane_cp1

0xa5ee,	// (0x000292c0) call_video_uplink_pane_cp2

0x3279,	// (0x00021f4b) video_down_crop_pane_ParamLimits

0x3279,	// (0x00021f4b) video_down_crop_pane

0x336b,	// (0x0002203d) video_down_pane_ParamLimits

0x336b,	// (0x0002203d) video_down_pane

0xa5f6,	// (0x000292c8) video_down_subqcif_pane_ParamLimits

0xa5f6,	// (0x000292c8) video_down_subqcif_pane

0xa61e,	// (0x000292f0) video_down_subqcif_pane_cp_ParamLimits

0xa61e,	// (0x000292f0) video_down_subqcif_pane_cp

0xa646,	// (0x00029318) im_reading_pane_ParamLimits

0xa646,	// (0x00029318) im_reading_pane

0x3488,	// (0x0002215a) im_writing_pane_ParamLimits

0x3488,	// (0x0002215a) im_writing_pane

0x34a6,	// (0x00022178) im_reading_pane_t1

0xa660,	// (0x00029332) list_im_pane

0xa671,	// (0x00029343) scroll_pane_cp07

0x34e8,	// (0x000221ba) im_writing_pane_t1_ParamLimits

0x34e8,	// (0x000221ba) im_writing_pane_t1

0xa68a,	// (0x0002935c) im_writing_pane_t2_ParamLimits

0xa68a,	// (0x0002935c) im_writing_pane_t2

0x0001,

0xf273,	// (0x0002df45) im_writing_pane_t_ParamLimits

0xf273,	// (0x0002df45) im_writing_pane_t

0xa077,	// (0x00028d49) input_focus_pane_cp04

0xa077,	// (0x00028d49) input_focus_pane_cp05

0x34fa,	// (0x000221cc) list_im_single_pane_ParamLimits

0x34fa,	// (0x000221cc) list_im_single_pane

0x3513,	// (0x000221e5) list_single_im_pane_t1

0x527e,	// (0x00023f50) blid_accuracy_pane

0x5286,	// (0x00023f58) blid_compass_pane

0x5290,	// (0x00023f62) main_location_t1

0x529e,	// (0x00023f70) main_location_t2

0x52ac,	// (0x00023f7e) main_location_t3

0x0002,

0xf5da,	// (0x0002e2ac) main_location_t

0xa077,	// (0x00028d49) aid_levels_location

0xa3ec,	// (0x000290be) blid_accuracy_pane_g1

0xa3ec,	// (0x000290be) blid_accuracy_pane_g2

0x0001,

0xf2d5,	// (0x0002dfa7) blid_accuracy_pane_g

0xa6d2,	// (0x000293a4) wml_content_pane

0xa710,	// (0x000293e2) wml_button_pane_ParamLimits

0xa710,	// (0x000293e2) wml_button_pane

0x3522,	// (0x000221f4) wml_list_single_large_pane_ParamLimits

0x3522,	// (0x000221f4) wml_list_single_large_pane

0x3544,	// (0x00022216) wml_list_single_medium_pane_ParamLimits

0x3544,	// (0x00022216) wml_list_single_medium_pane

0x3567,	// (0x00022239) wml_list_single_small_pane_ParamLimits

0x3567,	// (0x00022239) wml_list_single_small_pane

0xa724,	// (0x000293f6) wml_selection_box_pane_ParamLimits

0xa724,	// (0x000293f6) wml_selection_box_pane

0xa737,	// (0x00029409) wml_list_single_pane_t1

0xa746,	// (0x00029418) wml_list_single_medium_pane_t1

0xa755,	// (0x00029427) wml_list_single_large_pane_t1

0xa764,	// (0x00029436) input_focus_pane_cp02_ParamLimits

0xa764,	// (0x00029436) input_focus_pane_cp02

0xa777,	// (0x00029449) wml_selection_box_pane_g1

0xa780,	// (0x00029452) wml_selection_box_pane_t1_ParamLimits

0xa780,	// (0x00029452) wml_selection_box_pane_t1

0xa2d2,	// (0x00028fa4) bg_wml_button_pane_ParamLimits

0xa2d2,	// (0x00028fa4) bg_wml_button_pane

0xa798,	// (0x0002946a) wml_button_pane_g1

0xa7a0,	// (0x00029472) wml_button_pane_t1

0xa798,	// (0x0002946a) wml_button_bg_pane_g1

0xa7b0,	// (0x00029482) wml_button_bg_pane_g2

0xa7b8,	// (0x0002948a) wml_button_bg_pane_g3

0xa7c0,	// (0x00029492) wml_button_bg_pane_g4

0xa7c8,	// (0x0002949a) wml_button_bg_pane_g5

0xa7d0,	// (0x000294a2) wml_button_bg_pane_g6

0xa7d8,	// (0x000294aa) wml_button_bg_pane_g7

0xa7e0,	// (0x000294b2) wml_button_bg_pane_g8

0xa7e8,	// (0x000294ba) wml_button_bg_pane_g9

0x0008,

0xf278,	// (0x0002df4a) wml_button_bg_pane_g

0x358f,	// (0x00022261) bg_list_pane_cp02

0xa7f0,	// (0x000294c2) mce_header_pane_ParamLimits

0xa7f0,	// (0x000294c2) mce_header_pane

0xa806,	// (0x000294d8) mce_icon_pane

0xa806,	// (0x000294d8) mce_image_pane

0xa80f,	// (0x000294e1) mce_text_pane_ParamLimits

0xa80f,	// (0x000294e1) mce_text_pane

0x3599,	// (0x0002226b) scroll_pane_cp03

0xa708,	// (0x000293da) scroll_pane_cp04

0xa822,	// (0x000294f4) scroll_pane_cp05_ParamLimits

0xa822,	// (0x000294f4) scroll_pane_cp05

0x35a3,	// (0x00022275) mce_header_field_pane_ParamLimits

0x35a3,	// (0x00022275) mce_header_field_pane

0x35c5,	// (0x00022297) mce_header_field_pane_2_ParamLimits

0x35c5,	// (0x00022297) mce_header_field_pane_2

0x35db,	// (0x000222ad) mce_header_field_pane_3

0x35e3,	// (0x000222b5) list_single_mce_message_pane_ParamLimits

0x35e3,	// (0x000222b5) list_single_mce_message_pane

0x3602,	// (0x000222d4) list_single_mce_smart_pane_ParamLimits

0x3602,	// (0x000222d4) list_single_mce_smart_pane

0xa82e,	// (0x00029500) input_focus_pane_cp03

0xa837,	// (0x00029509) list_header_data_pane

0x362c,	// (0x000222fe) mce_header_field_pane_t1

0x363c,	// (0x0002230e) list_single_mce_header_pane_ParamLimits

0x363c,	// (0x0002230e) list_single_mce_header_pane

0xa83f,	// (0x00029511) list_single_mce_header_pane_t1

0xa84e,	// (0x00029520) list_single_mce_message_pane_g1

0xa856,	// (0x00029528) list_single_mce_message_pane_t1

0x3680,	// (0x00022352) bg_cale_heading_pane_cp01_ParamLimits

0x3680,	// (0x00022352) bg_cale_heading_pane_cp01

0xa864,	// (0x00029536) bg_cale_pane_cp02_ParamLimits

0xa864,	// (0x00029536) bg_cale_pane_cp02

0x36c7,	// (0x00022399) cale_month_corner_pane

0x36e6,	// (0x000223b8) cale_month_day_heading_pane_ParamLimits

0x36e6,	// (0x000223b8) cale_month_day_heading_pane

0x373d,	// (0x0002240f) cale_month_pane_g1_ParamLimits

0x373d,	// (0x0002240f) cale_month_pane_g1

0x3779,	// (0x0002244b) cale_month_pane_g2_ParamLimits

0x3779,	// (0x0002244b) cale_month_pane_g2

0x37b1,	// (0x00022483) cale_month_pane_g3_ParamLimits

0x37b1,	// (0x00022483) cale_month_pane_g3

0x3805,	// (0x000224d7) cale_month_pane_g4_ParamLimits

0x3805,	// (0x000224d7) cale_month_pane_g4

0x3859,	// (0x0002252b) cale_month_pane_g5_ParamLimits

0x3859,	// (0x0002252b) cale_month_pane_g5

0x38ad,	// (0x0002257f) cale_month_pane_g6_ParamLimits

0x38ad,	// (0x0002257f) cale_month_pane_g6

0x3911,	// (0x000225e3) cale_month_pane_g7_ParamLimits

0x3911,	// (0x000225e3) cale_month_pane_g7

0x3975,	// (0x00022647) cale_month_pane_g8_ParamLimits

0x3975,	// (0x00022647) cale_month_pane_g8

0x39d9,	// (0x000226ab) cale_month_pane_g9_ParamLimits

0x39d9,	// (0x000226ab) cale_month_pane_g9

0x3a31,	// (0x00022703) cale_month_pane_g10_ParamLimits

0x3a31,	// (0x00022703) cale_month_pane_g10

0x3a7f,	// (0x00022751) cale_month_pane_g11_ParamLimits

0x3a7f,	// (0x00022751) cale_month_pane_g11

0x3acb,	// (0x0002279d) cale_month_pane_g12_ParamLimits

0x3acb,	// (0x0002279d) cale_month_pane_g12

0x3b1b,	// (0x000227ed) cale_month_pane_g13_ParamLimits

0x3b1b,	// (0x000227ed) cale_month_pane_g13

0x000c,

0xf28b,	// (0x0002df5d) cale_month_pane_g_ParamLimits

0xf28b,	// (0x0002df5d) cale_month_pane_g

0x3b6b,	// (0x0002283d) cale_month_week_pane

0x3b8b,	// (0x0002285d) grid_cale_month_pane_ParamLimits

0x3b8b,	// (0x0002285d) grid_cale_month_pane

0x3bd9,	// (0x000228ab) cale_month_day_heading_pane_t1

0x3c5b,	// (0x0002292d) cale_month_day_heading_pane_t2

0x3ce8,	// (0x000229ba) cale_month_day_heading_pane_t3

0x3d75,	// (0x00022a47) cale_month_day_heading_pane_t4

0x3e02,	// (0x00022ad4) cale_month_day_heading_pane_t5

0x3e97,	// (0x00022b69) cale_month_day_heading_pane_t6

0x3f34,	// (0x00022c06) cale_month_day_heading_pane_t7

0x0006,

0xf2a6,	// (0x0002df78) cale_month_day_heading_pane_t

0xa4f2,	// (0x000291c4) bg_cale_side_pane_cp01

0x3fd1,	// (0x00022ca3) cale_month_week_pane_t1

0x3fea,	// (0x00022cbc) cale_month_week_pane_t2

0x4003,	// (0x00022cd5) cale_month_week_pane_t3

0x401c,	// (0x00022cee) cale_month_week_pane_t4

0x4035,	// (0x00022d07) cale_month_week_pane_t5

0x4050,	// (0x00022d22) cale_month_week_pane_t6

0x0005,

0xf2b5,	// (0x0002df87) cale_month_week_pane_t

0x4071,	// (0x00022d43) cell_cale_month_pane_ParamLimits

0x4071,	// (0x00022d43) cell_cale_month_pane

0x0eb1,	// (0x0001fb83) cell_cale_month_pane_g1

0x0ebd,	// (0x0001fb8f) cell_cale_month_pane_t1_ParamLimits

0x0ebd,	// (0x0001fb8f) cell_cale_month_pane_t1

0xa500,	// (0x000291d2) grid_highlight_pane_cp08

0xa3ec,	// (0x000290be) main_smil_g1

0x41bd,	// (0x00022e8f) smil_status_pane

0xa8a3,	// (0x00029575) smil_text_pane

0xc133,	// (0x0002ae05) bg_popup_call3_rect_pane_g8

0xc13b,	// (0x0002ae0d) bg_popup_call3_rect_pane_g9

0x0008,

0xf56e,	// (0x0002e240) bg_popup_call3_rect_pane_g

0xc3c9,	// (0x0002b09b) smil_status_volume_pane_g1

0x41d0,	// (0x00022ea2) smil_status_pane_t1

0x0fff,	// (0x0001fcd1) volume_smil_pane

0xa8ad,	// (0x0002957f) list_smil_text_pane

0x41e7,	// (0x00022eb9) scroll_pane_cp011

0x41f2,	// (0x00022ec4) smil_text_list_pane_t1_ParamLimits

0x41f2,	// (0x00022ec4) smil_text_list_pane_t1

0x0edd,	// (0x0001fbaf) aid_volume_smil_ParamLimits

0x0edd,	// (0x0001fbaf) aid_volume_smil

0xa3ec,	// (0x000290be) smil_volume_pane_g1

0xa3ec,	// (0x000290be) smil_volume_pane_g2

0x0001,

0xf2d5,	// (0x0002dfa7) smil_volume_pane_g

0x26e1,	// (0x000213b3) listscroll_cale_day_pane

0xa8b7,	// (0x00029589) bg_cale_pane

0xa8cf,	// (0x000295a1) list_cale_pane

0xa8f2,	// (0x000295c4) scroll_pane_cp09

0xa903,	// (0x000295d5) cale_bg_pane_g1

0xa90b,	// (0x000295dd) cale_bg_pane_g2

0xa913,	// (0x000295e5) cale_bg_pane_g3

0xa91b,	// (0x000295ed) cale_bg_pane_g4

0xa923,	// (0x000295f5) cale_bg_pane_g5

0xa92b,	// (0x000295fd) cale_bg_pane_g6

0xa933,	// (0x00029605) cale_bg_pane_g7

0xa93b,	// (0x0002960d) cale_bg_pane_g8

0xa943,	// (0x00029615) cale_bg_pane_g9

0x0008,

0xf2da,	// (0x0002dfac) cale_bg_pane_g

0x4244,	// (0x00022f16) list_cale_time_pane_ParamLimits

0x4244,	// (0x00022f16) list_cale_time_pane

0xa953,	// (0x00029625) list_cale_time_pane_g1_ParamLimits

0xa953,	// (0x00029625) list_cale_time_pane_g1

0xa95f,	// (0x00029631) list_cale_time_pane_g2_ParamLimits

0xa95f,	// (0x00029631) list_cale_time_pane_g2

0x4258,	// (0x00022f2a) list_cale_time_pane_g3_ParamLimits

0x4258,	// (0x00022f2a) list_cale_time_pane_g3

0x4266,	// (0x00022f38) list_cale_time_pane_g4_ParamLimits

0x4266,	// (0x00022f38) list_cale_time_pane_g4

0x4274,	// (0x00022f46) list_cale_time_pane_g5_ParamLimits

0x4274,	// (0x00022f46) list_cale_time_pane_g5

0x0005,

0xf2ed,	// (0x0002dfbf) list_cale_time_pane_g_ParamLimits

0xf2ed,	// (0x0002dfbf) list_cale_time_pane_g

0xa979,	// (0x0002964b) list_cale_time_pane_t1_ParamLimits

0xa979,	// (0x0002964b) list_cale_time_pane_t1

0xa9a1,	// (0x00029673) list_cale_time_pane_t2_ParamLimits

0xa9a1,	// (0x00029673) list_cale_time_pane_t2

0x45da,	// (0x000232ac) aid_blid_cardinal_pane

0x461c,	// (0x000232ee) compass_pane_t4

0xa9c9,	// (0x0002969b) list_cale_time_pane_t4_ParamLimits

0xa9c9,	// (0x0002969b) list_cale_time_pane_t4

0x462a,	// (0x000232fc) compass_pane_t5

0x463a,	// (0x0002330c) compass_pane_t6

0x4648,	// (0x0002331a) compass_pane_t7

0xade5,	// (0x00029ab7) navi_pane_cc_t1

0xaf32,	// (0x00029c04) aid_phob_thumbnail_center_pane

0x4d7a,	// (0x00023a4c) main_postcard_pane_g4_ParamLimits

0x0002,

0xf2fa,	// (0x0002dfcc) list_cale_time_pane_t_ParamLimits

0xf2fa,	// (0x0002dfcc) list_cale_time_pane_t

0x9cce,	// (0x000289a0) bg_popup_window_pane_cp02_ParamLimits

0x9cce,	// (0x000289a0) bg_popup_window_pane_cp02

0xa9f1,	// (0x000296c3) heading_pane_cp01_ParamLimits

0xa9f1,	// (0x000296c3) heading_pane_cp01

0xa9fd,	// (0x000296cf) loc_req_pane_ParamLimits

0xa9fd,	// (0x000296cf) loc_req_pane

0xaa0d,	// (0x000296df) loc_type_pane_ParamLimits

0xaa0d,	// (0x000296df) loc_type_pane

0xaa1f,	// (0x000296f1) loc_type_pane_t1_ParamLimits

0xaa1f,	// (0x000296f1) loc_type_pane_t1

0xaa31,	// (0x00029703) loc_type_pane_t2_ParamLimits

0xaa31,	// (0x00029703) loc_type_pane_t2

0xaa43,	// (0x00029715) loc_type_pane_t3_ParamLimits

0xaa43,	// (0x00029715) loc_type_pane_t3

0x0002,

0xf301,	// (0x0002dfd3) loc_type_pane_t_ParamLimits

0xf301,	// (0x0002dfd3) loc_type_pane_t

0xaa55,	// (0x00029727) list_loc_req_pane

0xaa5f,	// (0x00029731) scroll_pane_cp012

0x4282,	// (0x00022f54) list_single_loc_request_popup_menu_pane_ParamLimits

0x4282,	// (0x00022f54) list_single_loc_request_popup_menu_pane

0xaa6a,	// (0x0002973c) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xaa6a,	// (0x0002973c) list_single_loc_request_popup_menu_pane_g1

0xaa76,	// (0x00029748) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xaa76,	// (0x00029748) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf308,	// (0x0002dfda) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf308,	// (0x0002dfda) list_single_loc_request_popup_menu_pane_g

0xaa82,	// (0x00029754) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xaa82,	// (0x00029754) list_single_loc_request_popup_menu_pane_t1

0x4294,	// (0x00022f66) bg_popup_window_pane_cp03_ParamLimits

0x4294,	// (0x00022f66) bg_popup_window_pane_cp03

0x42a2,	// (0x00022f74) heading_loc_req_pane_ParamLimits

0x42a2,	// (0x00022f74) heading_loc_req_pane

0x42ae,	// (0x00022f80) popup_dyc_status_message_window_g1_ParamLimits

0x42ae,	// (0x00022f80) popup_dyc_status_message_window_g1

0x42ba,	// (0x00022f8c) popup_dyc_status_message_window_t1_ParamLimits

0x42ba,	// (0x00022f8c) popup_dyc_status_message_window_t1

0x42cc,	// (0x00022f9e) popup_dyc_status_message_window_t2_ParamLimits

0x42cc,	// (0x00022f9e) popup_dyc_status_message_window_t2

0x42de,	// (0x00022fb0) popup_dyc_status_message_window_t3_ParamLimits

0x42de,	// (0x00022fb0) popup_dyc_status_message_window_t3

0x0002,

0xf30d,	// (0x0002dfdf) popup_dyc_status_message_window_t_ParamLimits

0xf30d,	// (0x0002dfdf) popup_dyc_status_message_window_t

0xa077,	// (0x00028d49) bg_heading_pane_cp01

0xaa98,	// (0x0002976a) heading_loc_req_pane_g1

0xaaa0,	// (0x00029772) heading_loc_req_pane_g2

0xaaa8,	// (0x0002977a) heading_loc_req_pane_g3

0x0002,

0xf314,	// (0x0002dfe6) heading_loc_req_pane_g

0xaab0,	// (0x00029782) heading_loc_req_pane_t1

0xaac0,	// (0x00029792) bg_popup_sub_pane_cp01_ParamLimits

0xaac0,	// (0x00029792) bg_popup_sub_pane_cp01

0xaace,	// (0x000297a0) popup_cale_events_window_g1_ParamLimits

0xaace,	// (0x000297a0) popup_cale_events_window_g1

0xaaee,	// (0x000297c0) popup_cale_events_window_g2_ParamLimits

0xaaee,	// (0x000297c0) popup_cale_events_window_g2

0x0001,

0xf348,	// (0x0002e01a) popup_cale_events_window_g_ParamLimits

0xf348,	// (0x0002e01a) popup_cale_events_window_g

0xab0e,	// (0x000297e0) popup_cale_events_window_t1_ParamLimits

0xab0e,	// (0x000297e0) popup_cale_events_window_t1

0xab20,	// (0x000297f2) popup_cale_events_window_t2_ParamLimits

0xab20,	// (0x000297f2) popup_cale_events_window_t2

0xab5e,	// (0x00029830) popup_cale_events_window_t3_ParamLimits

0xab5e,	// (0x00029830) popup_cale_events_window_t3

0xab98,	// (0x0002986a) popup_cale_events_window_t4_ParamLimits

0xab98,	// (0x0002986a) popup_cale_events_window_t4

0x0003,

0xf34d,	// (0x0002e01f) popup_cale_events_window_t_ParamLimits

0xf34d,	// (0x0002e01f) popup_cale_events_window_t

0x43e5,	// (0x000230b7) call_type_pane

0xabce,	// (0x000298a0) popup_call_status_window_g1

0x43f1,	// (0x000230c3) popup_call_status_window_g2

0x43fd,	// (0x000230cf) popup_call_status_window_g3

0x0002,

0xf356,	// (0x0002e028) popup_call_status_window_g

0xabdc,	// (0x000298ae) call_type_pane_g1

0xabe5,	// (0x000298b7) call_type_pane_g2

0x0001,

0xf35d,	// (0x0002e02f) call_type_pane_g

0xa077,	// (0x00028d49) bg_popup_sub_pane_cp02

0xabee,	// (0x000298c0) listscroll_popup_wml_pane

0xabf6,	// (0x000298c8) list_wml_pane

0xac00,	// (0x000298d2) scroll_pane_cp013

0xac0b,	// (0x000298dd) list_single_graphic_popup_wml_pane_ParamLimits

0xac0b,	// (0x000298dd) list_single_graphic_popup_wml_pane

0xa3ec,	// (0x000290be) list_single_graphic_popup_wml_pane_g1

0xac1f,	// (0x000298f1) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf362,	// (0x0002e034) list_single_graphic_popup_wml_pane_g

0xac27,	// (0x000298f9) list_single_graphic_popup_wml_pane_t1

0xac3d,	// (0x0002990f) aid_call_pane

0xa2ca,	// (0x00028f9c) popup_clock_analogue_window_g1

0xa2ca,	// (0x00028f9c) popup_clock_analogue_window_g2

0x0eff,	// (0x0001fbd1) popup_clock_analogue_window_g3

0x0eff,	// (0x0001fbd1) popup_clock_analogue_window_g4

0xa3ec,	// (0x000290be) popup_clock_analogue_window_g5

0x0004,

0xf367,	// (0x0002e039) popup_clock_analogue_window_g

0x0f07,	// (0x0001fbd9) popup_clock_analogue_window_t1

0x0f15,	// (0x0001fbe7) clock_digital_number_pane_ParamLimits

0x0f15,	// (0x0001fbe7) clock_digital_number_pane

0x0f21,	// (0x0001fbf3) clock_digital_number_pane_cp02_ParamLimits

0x0f21,	// (0x0001fbf3) clock_digital_number_pane_cp02

0x0f2d,	// (0x0001fbff) clock_digital_number_pane_cp03_ParamLimits

0x0f2d,	// (0x0001fbff) clock_digital_number_pane_cp03

0x0f39,	// (0x0001fc0b) clock_digital_number_pane_cp04_ParamLimits

0x0f39,	// (0x0001fc0b) clock_digital_number_pane_cp04

0x0f45,	// (0x0001fc17) clock_digital_separator_pane_ParamLimits

0x0f45,	// (0x0001fc17) clock_digital_separator_pane

0x0f51,	// (0x0001fc23) popup_clock_digital_window_t1

0xa3ec,	// (0x000290be) clock_digital_number_pane_g1

0xa3ec,	// (0x000290be) clock_digital_number_pane_g2

0x0001,

0xf2d5,	// (0x0002dfa7) clock_digital_number_pane_g

0xa3ec,	// (0x000290be) clock_digital_separator_pane_g1

0xa3ec,	// (0x000290be) clock_digital_separator_pane_g2

0x0001,

0xf2d5,	// (0x0002dfa7) clock_digital_separator_pane_g

0xa077,	// (0x00028d49) bg_popup_window_pane_cp04

0xac45,	// (0x00029917) heading_pane_cp03

0xac4d,	// (0x0002991f) listscroll_popup_gms_pane

0xac55,	// (0x00029927) grid_large_graphic_popup_pane

0xac5f,	// (0x00029931) listscroll_popup_gms_pane_g1

0xac67,	// (0x00029939) listscroll_popup_gms_pane_g2

0x0001,

0xf372,	// (0x0002e044) listscroll_popup_gms_pane_g

0xa708,	// (0x000293da) scroll_pane_cp014

0x4409,	// (0x000230db) cell_large_graphic_popup_pane_ParamLimits

0x4409,	// (0x000230db) cell_large_graphic_popup_pane

0x4423,	// (0x000230f5) cell_large_graphic_popup_pane_g1_ParamLimits

0x4423,	// (0x000230f5) cell_large_graphic_popup_pane_g1

0xac6f,	// (0x00029941) cell_large_graphic_popup_pane_g2_ParamLimits

0xac6f,	// (0x00029941) cell_large_graphic_popup_pane_g2

0xac7b,	// (0x0002994d) cell_large_graphic_popup_pane_g3_ParamLimits

0xac7b,	// (0x0002994d) cell_large_graphic_popup_pane_g3

0xac88,	// (0x0002995a) cell_large_graphic_popup_pane_g4_ParamLimits

0xac88,	// (0x0002995a) cell_large_graphic_popup_pane_g4

0x0003,

0xf377,	// (0x0002e049) cell_large_graphic_popup_pane_g_ParamLimits

0xf377,	// (0x0002e049) cell_large_graphic_popup_pane_g

0xac98,	// (0x0002996a) grid_highlight_pane_cp010

0xa3ec,	// (0x000290be) bg_popup_call_pane_g1

0xaca2,	// (0x00029974) list_single_graphic_popup_conf_pane_ParamLimits

0xaca2,	// (0x00029974) list_single_graphic_popup_conf_pane

0xacb4,	// (0x00029986) list_highlight_pane_cp01

0xacbd,	// (0x0002998f) list_single_graphic_popup_conf_pane_g1

0xacc5,	// (0x00029997) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf380,	// (0x0002e052) list_single_graphic_popup_conf_pane_g

0xaccd,	// (0x0002999f) list_single_graphic_popup_conf_pane_t1

0xacdb,	// (0x000299ad) linegrid_cams_pane_g1

0x442f,	// (0x00023101) linegrid_cams_pane_g2

0xa533,	// (0x00029205) linegrid_cams_pane_g3

0xace4,	// (0x000299b6) linegrid_cams_pane_g4

0x4438,	// (0x0002310a) linegrid_cams_pane_g5

0x4441,	// (0x00023113) linegrid_cams_pane_g6

0xa53c,	// (0x0002920e) linegrid_cams_pane_g7

0x0006,

0xf385,	// (0x0002e057) linegrid_cams_pane_g

0xaced,	// (0x000299bf) popup_clock_analogue_window

0xaced,	// (0x000299bf) popup_clock_digital_window

0xa077,	// (0x00028d49) popup_phob_thumbnail_window

0xa3ec,	// (0x000290be) call_video_uplink_pane_g1

0xacf6,	// (0x000299c8) call_video_uplink_pane_g2

0x0001,

0xf394,	// (0x0002e066) call_video_uplink_pane_g

0xacfe,	// (0x000299d0) video_uplink_pane

0xad06,	// (0x000299d8) mce_image_pane_g1

0x444c,	// (0x0002311e) mce_image_pane_g2

0x4456,	// (0x00023128) mce_image_pane_g3

0x4460,	// (0x00023132) mce_image_pane_g4

0x4468,	// (0x0002313a) mce_image_pane_g5

0x0004,

0xf399,	// (0x0002e06b) mce_image_pane_g

0xad10,	// (0x000299e2) control_top_pane_stacon_cp01_ParamLimits

0xad10,	// (0x000299e2) control_top_pane_stacon_cp01

0xad24,	// (0x000299f6) uni_indicator_pane_stacon_cp01_ParamLimits

0xad24,	// (0x000299f6) uni_indicator_pane_stacon_cp01

0xad35,	// (0x00029a07) bg_popup_sub_pane_cp03

0x4470,	// (0x00023142) chi_dic_find_pane

0x4478,	// (0x0002314a) listscroll_chi_dic_pane

0x4481,	// (0x00023153) main_pane_chidic_g1

0x4494,	// (0x00023166) chi_dic_find_pane_t1

0xad3f,	// (0x00029a11) find_chidic_pane

0xad48,	// (0x00029a1a) chi_dic_list_pane_ParamLimits

0xad48,	// (0x00029a1a) chi_dic_list_pane

0xad59,	// (0x00029a2b) scroll_pane_cp020

0x44a2,	// (0x00023174) find_chidic_pane_t1

0xa077,	// (0x00028d49) input_focus_pane_cp06

0x44b1,	// (0x00023183) list_chi_dic_pane_ParamLimits

0x44b1,	// (0x00023183) list_chi_dic_pane

0x44c6,	// (0x00023198) list_chi_dic_pane_t1_ParamLimits

0x44c6,	// (0x00023198) list_chi_dic_pane_t1

0xa077,	// (0x00028d49) list_highlight_pane_cp020

0xad61,	// (0x00029a33) bg_cale_heading_pane_g1

0x44d9,	// (0x000231ab) bg_cale_heading_pane_g2

0x44e1,	// (0x000231b3) bg_cale_heading_pane_g3

0x44e9,	// (0x000231bb) bg_cale_heading_pane_g4

0x44f3,	// (0x000231c5) bg_cale_heading_pane_g5

0x44fd,	// (0x000231cf) bg_cale_heading_pane_g6

0x4505,	// (0x000231d7) bg_cale_heading_pane_g7

0x450d,	// (0x000231df) bg_cale_heading_pane_g8

0x4517,	// (0x000231e9) bg_cale_heading_pane_g9

0x0008,

0xf3a4,	// (0x0002e076) bg_cale_heading_pane_g

0xad61,	// (0x00029a33) bg_cale_side_pane_g1

0x4521,	// (0x000231f3) bg_cale_side_pane_g2

0x452b,	// (0x000231fd) bg_cale_side_pane_g3

0x4535,	// (0x00023207) bg_cale_side_pane_g4

0x453f,	// (0x00023211) bg_cale_side_pane_g5

0x4549,	// (0x0002321b) bg_cale_side_pane_g6

0x4553,	// (0x00023225) bg_cale_side_pane_g7

0x455d,	// (0x0002322f) bg_cale_side_pane_g8

0x4565,	// (0x00023237) bg_cale_side_pane_g9

0x0008,

0xf3b7,	// (0x0002e089) bg_cale_side_pane_g

0x456d,	// (0x0002323f) popup_call_status_window_ParamLimits

0x456d,	// (0x0002323f) popup_call_status_window

0xad69,	// (0x00029a3b) stacon_top_pane

0xad71,	// (0x00029a43) status_pane_ParamLimits

0xad71,	// (0x00029a43) status_pane

0xad86,	// (0x00029a58) status_small_pane

0xad8e,	// (0x00029a60) control_pane

0xa077,	// (0x00028d49) stacon_bottom_pane

0xad96,	// (0x00029a68) list_single_mce_smart_pane_t1_ParamLimits

0xad96,	// (0x00029a68) list_single_mce_smart_pane_t1

0xada9,	// (0x00029a7b) list_single_mce_smart_pane_t2_ParamLimits

0xada9,	// (0x00029a7b) list_single_mce_smart_pane_t2

0x0001,

0xf3ca,	// (0x0002e09c) list_single_mce_smart_pane_t_ParamLimits

0xf3ca,	// (0x0002e09c) list_single_mce_smart_pane_t

0x4579,	// (0x0002324b) compass_pane

0x4584,	// (0x00023256) main_location2_pane_t1

0x459a,	// (0x0002326c) main_location2_pane_t2

0x45b0,	// (0x00023282) main_location2_pane_t3

0x0003,

0xf3cf,	// (0x0002e0a1) main_location2_pane_t

0xadc8,	// (0x00029a9a) compass_pane_g1_ParamLimits

0xadc8,	// (0x00029a9a) compass_pane_g1

0x45fe,	// (0x000232d0) compass_pane_t1

0x460d,	// (0x000232df) compass_pane_t2

0x0005,

0xf3d8,	// (0x0002e0aa) compass_pane_t

0x4658,	// (0x0002332a) text_secondary_cp61

0xaddc,	// (0x00029aae) navi_pane_cams_g5

0xadff,	// (0x00029ad1) navi_pane_im_t1

0xae0d,	// (0x00029adf) navi_pane_mp_g1_ParamLimits

0xae0d,	// (0x00029adf) navi_pane_mp_g1

0xae21,	// (0x00029af3) navi_pane_mp_g2_ParamLimits

0xae21,	// (0x00029af3) navi_pane_mp_g2

0xae2d,	// (0x00029aff) navi_pane_mp_g3_ParamLimits

0xae2d,	// (0x00029aff) navi_pane_mp_g3

0x0002,

0xf3ec,	// (0x0002e0be) navi_pane_mp_g_ParamLimits

0xf3ec,	// (0x0002e0be) navi_pane_mp_g

0xae39,	// (0x00029b0b) navi_pane_mp_t1

0xae47,	// (0x00029b19) navi_pane_mp_t2

0x0002,

0xf3f3,	// (0x0002e0c5) navi_pane_mp_t

0xae83,	// (0x00029b55) navi_pane_vt_g1

0xae39,	// (0x00029b0b) navi_pane_vt_t1

0xae8b,	// (0x00029b5d) navi_slider_pane

0xa54d,	// (0x0002921f) zooming_pane

0xae93,	// (0x00029b65) navi_slider_pane_g1

0x0f6e,	// (0x0001fc40) navi_slider_pane_g2

0x0006,

0xf3fa,	// (0x0002e0cc) navi_slider_pane_g

0xaeb7,	// (0x00029b89) aid_levels_zoom

0xaebf,	// (0x00029b91) zooming_pane_g1

0xaec7,	// (0x00029b99) zooming_pane_g2

0xaec7,	// (0x00029b99) zooming_pane_g3

0x0002,

0xf409,	// (0x0002e0db) zooming_pane_g

0xaecf,	// (0x00029ba1) level_10_zoom

0xaed8,	// (0x00029baa) level_11_zoom

0xaee1,	// (0x00029bb3) level_1_zoom

0xaeea,	// (0x00029bbc) level_2_zoom

0xaef3,	// (0x00029bc5) level_3_zoom

0xaefc,	// (0x00029bce) level_4_zoom

0xaf05,	// (0x00029bd7) level_5_zoom

0xaf0e,	// (0x00029be0) level_6_zoom

0xaf17,	// (0x00029be9) level_7_zoom

0xaf20,	// (0x00029bf2) level_8_zoom

0xaf29,	// (0x00029bfb) level_9_zoom

0xaf3a,	// (0x00029c0c) popup_phob_thumbnail_window_g1

0xaf42,	// (0x00029c14) popup_phob_thumbnail_window_g2

0x0001,

0xf410,	// (0x0002e0e2) popup_phob_thumbnail_window_g

0xc299,	// (0x0002af6b) level_1_location

0xc2a1,	// (0x0002af73) level_2_location

0xc2a9,	// (0x0002af7b) level_3_location

0xc2b1,	// (0x0002af83) level_4_location

0xa54d,	// (0x0002921f) level_5_location

0x478d,	// (0x0002345f) mce_icon_pane_g1

0x4795,	// (0x00023467) mce_icon_pane_g2

0x0001,

0xf415,	// (0x0002e0e7) mce_icon_pane_g

0x479d,	// (0x0002346f) main_mup_pane_g1_ParamLimits

0x479d,	// (0x0002346f) main_mup_pane_g1

0x47b5,	// (0x00023487) main_mup_pane_g2_ParamLimits

0x47b5,	// (0x00023487) main_mup_pane_g2

0x47d1,	// (0x000234a3) main_mup_pane_g3_ParamLimits

0x47d1,	// (0x000234a3) main_mup_pane_g3

0x47ed,	// (0x000234bf) main_mup_pane_g4_ParamLimits

0x47ed,	// (0x000234bf) main_mup_pane_g4

0x4809,	// (0x000234db) main_mup_pane_g5_ParamLimits

0x4809,	// (0x000234db) main_mup_pane_g5

0x482a,	// (0x000234fc) main_mup_pane_g6_ParamLimits

0x482a,	// (0x000234fc) main_mup_pane_g6

0x484a,	// (0x0002351c) main_mup_pane_g7_ParamLimits

0x484a,	// (0x0002351c) main_mup_pane_g7

0x486e,	// (0x00023540) main_mup_pane_g8_ParamLimits

0x486e,	// (0x00023540) main_mup_pane_g8

0x4892,	// (0x00023564) main_mup_pane_g9_ParamLimits

0x4892,	// (0x00023564) main_mup_pane_g9

0x48b5,	// (0x00023587) main_mup_pane_g10_ParamLimits

0x48b5,	// (0x00023587) main_mup_pane_g10

0x48d8,	// (0x000235aa) main_mup_pane_g11_ParamLimits

0x48d8,	// (0x000235aa) main_mup_pane_g11

0x48f8,	// (0x000235ca) main_mup_pane_g12_ParamLimits

0x48f8,	// (0x000235ca) main_mup_pane_g12

0x4906,	// (0x000235d8) main_mup_pane_g13_ParamLimits

0x4906,	// (0x000235d8) main_mup_pane_g13

0x000c,

0xf41a,	// (0x0002e0ec) main_mup_pane_g_ParamLimits

0xf41a,	// (0x0002e0ec) main_mup_pane_g

0x491c,	// (0x000235ee) main_mup_pane_t1_ParamLimits

0x491c,	// (0x000235ee) main_mup_pane_t1

0x493b,	// (0x0002360d) main_mup_pane_t2_ParamLimits

0x493b,	// (0x0002360d) main_mup_pane_t2

0x4955,	// (0x00023627) main_mup_pane_t3_ParamLimits

0x4955,	// (0x00023627) main_mup_pane_t3

0x496f,	// (0x00023641) main_mup_pane_t4_ParamLimits

0x496f,	// (0x00023641) main_mup_pane_t4

0x4981,	// (0x00023653) main_mup_pane_t5_ParamLimits

0x4981,	// (0x00023653) main_mup_pane_t5

0x4993,	// (0x00023665) main_mup_pane_t6_ParamLimits

0x4993,	// (0x00023665) main_mup_pane_t6

0x0005,

0xf435,	// (0x0002e107) main_mup_pane_t_ParamLimits

0xf435,	// (0x0002e107) main_mup_pane_t

0x49a9,	// (0x0002367b) mup_progress_pane_ParamLimits

0x49a9,	// (0x0002367b) mup_progress_pane

0x49b5,	// (0x00023687) mup_visualizer_pane_ParamLimits

0x49b5,	// (0x00023687) mup_visualizer_pane

0x49f3,	// (0x000236c5) mup_volume_pane_ParamLimits

0x49f3,	// (0x000236c5) mup_volume_pane

0xabce,	// (0x000298a0) mup_visualizer_pane_g1_ParamLimits

0xabce,	// (0x000298a0) mup_visualizer_pane_g1

0xabce,	// (0x000298a0) mup_visualizer_pane_g2_ParamLimits

0xabce,	// (0x000298a0) mup_visualizer_pane_g2

0xadc8,	// (0x00029a9a) mup_visualizer_pane_g3_ParamLimits

0xadc8,	// (0x00029a9a) mup_visualizer_pane_g3

0x0002,

0xf442,	// (0x0002e114) mup_visualizer_pane_g_ParamLimits

0xf442,	// (0x0002e114) mup_visualizer_pane_g

0xa3ec,	// (0x000290be) mup_volume_pane_g1

0xaf52,	// (0x00029c24) mup_volume_pane_g2

0x0001,

0xf449,	// (0x0002e11b) mup_volume_pane_g

0xa3ec,	// (0x000290be) mup_progress_pane_g1

0xaf5b,	// (0x00029c2d) mup_progress_pane_g2

0xaf64,	// (0x00029c36) mup_progress_pane_g3

0x0002,

0xf44e,	// (0x0002e120) mup_progress_pane_g

0xa077,	// (0x00028d49) bg_popup_window_pane_cp05

0xaf6d,	// (0x00029c3f) heading_pane_cp02_ParamLimits

0xaf6d,	// (0x00029c3f) heading_pane_cp02

0xaf95,	// (0x00029c67) list_popup_blid_pane

0xaf9d,	// (0x00029c6f) list_blid_sat_info_pane_ParamLimits

0xaf9d,	// (0x00029c6f) list_blid_sat_info_pane

0xafb0,	// (0x00029c82) list_blid_sat_info_pane_g1

0xafb8,	// (0x00029c8a) list_blid_sat_info_pane_t1

0x4b12,	// (0x000237e4) mup_equalizer_pane_ParamLimits

0x4b12,	// (0x000237e4) mup_equalizer_pane

0x4b33,	// (0x00023805) mup_equalizer_pane_cp1_ParamLimits

0x4b33,	// (0x00023805) mup_equalizer_pane_cp1

0x4b54,	// (0x00023826) mup_equalizer_pane_cp2_ParamLimits

0x4b54,	// (0x00023826) mup_equalizer_pane_cp2

0x4b75,	// (0x00023847) mup_equalizer_pane_cp3_ParamLimits

0x4b75,	// (0x00023847) mup_equalizer_pane_cp3

0x4b9a,	// (0x0002386c) mup_equalizer_pane_cp4_ParamLimits

0x4b9a,	// (0x0002386c) mup_equalizer_pane_cp4

0x4bbf,	// (0x00023891) mup_equalizer_pane_cp5

0x4bd7,	// (0x000238a9) mup_equalizer_pane_cp6

0x4bef,	// (0x000238c1) mup_equalizer_pane_cp7

0xc1b3,	// (0x0002ae85) bg_popup_call_poc_act_pane_g9

0xc1bb,	// (0x0002ae8d) bg_popup_call_poc_act_pane_g10

0xc1c3,	// (0x0002ae95) bg_popup_call_poc_act_pane_g11

0x000a,

0xa2d2,	// (0x00028fa4) mup_scale_pane

0xa3ec,	// (0x000290be) mup_scale_pane_g1

0xafc6,	// (0x00029c98) mup_scale_pane_g2

0x0006,

0xf46a,	// (0x0002e13c) mup_scale_pane_g

0xafea,	// (0x00029cbc) msg_data_pane

0xaff2,	// (0x00029cc4) scroll_pane_cp017

0x4c19,	// (0x000238eb) bg_list_pane_cp04_ParamLimits

0x4c19,	// (0x000238eb) bg_list_pane_cp04

0xb002,	// (0x00029cd4) msg_data_pane_g1

0x4c39,	// (0x0002390b) msg_data_pane_g2

0x4c43,	// (0x00023915) msg_data_pane_g3

0x4c4d,	// (0x0002391f) msg_data_pane_g4

0x4c55,	// (0x00023927) msg_data_pane_g5

0x4c5d,	// (0x0002392f) msg_data_pane_g6

0x4c65,	// (0x00023937) msg_data_pane_g7

0x0006,

0xf479,	// (0x0002e14b) msg_data_pane_g

0x4c6d,	// (0x0002393f) msg_text_pane_ParamLimits

0x4c6d,	// (0x0002393f) msg_text_pane

0x4c95,	// (0x00023967) qrid_highlight_pane_cp011_ParamLimits

0x4c95,	// (0x00023967) qrid_highlight_pane_cp011

0xa077,	// (0x00028d49) msg_body_pane

0xa077,	// (0x00028d49) msg_header_pane

0xb013,	// (0x00029ce5) input_focus_pane_cp07

0xb028,	// (0x00029cfa) msg_header_pane_t1_ParamLimits

0xb028,	// (0x00029cfa) msg_header_pane_t1

0xb03a,	// (0x00029d0c) msg_header_pane_t2_ParamLimits

0xb03a,	// (0x00029d0c) msg_header_pane_t2

0x0001,

0xf48d,	// (0x0002e15f) msg_header_pane_t_ParamLimits

0xf48d,	// (0x0002e15f) msg_header_pane_t

0xb04c,	// (0x00029d1e) msg_body_pane_g1

0x4cb9,	// (0x0002398b) msg_body_pane_t1_ParamLimits

0x4cb9,	// (0x0002398b) msg_body_pane_t1

0xb054,	// (0x00029d26) msg_body_pane_t2_ParamLimits

0xb054,	// (0x00029d26) msg_body_pane_t2

0xb066,	// (0x00029d38) msg_body_pane_t3_ParamLimits

0xb066,	// (0x00029d38) msg_body_pane_t3

0x0002,

0xf492,	// (0x0002e164) msg_body_pane_t_ParamLimits

0xf492,	// (0x0002e164) msg_body_pane_t

0x0fb0,	// (0x0001fc82) main_viewer_pane_g1_ParamLimits

0x0fb0,	// (0x0001fc82) main_viewer_pane_g1

0x0fbc,	// (0x0001fc8e) main_viewer_pane_g2_ParamLimits

0x0fbc,	// (0x0001fc8e) main_viewer_pane_g2

0x4d0c,	// (0x000239de) main_viewer_pane_g3_ParamLimits

0x4d0c,	// (0x000239de) main_viewer_pane_g3

0x4d1d,	// (0x000239ef) main_viewer_pane_g4_ParamLimits

0x4d1d,	// (0x000239ef) main_viewer_pane_g4

0x0fc8,	// (0x0001fc9a) main_viewer_pane_g5_ParamLimits

0x0fc8,	// (0x0001fc9a) main_viewer_pane_g5

0x0fc8,	// (0x0001fc9a) main_viewer_pane_g7_ParamLimits

0x0fc8,	// (0x0001fc9a) main_viewer_pane_g7

0x0fda,	// (0x0001fcac) main_viewer_pane_g8_ParamLimits

0x0fda,	// (0x0001fcac) main_viewer_pane_g8

0x0007,

0xf4a2,	// (0x0002e174) main_viewer_pane_g_ParamLimits

0xf4a2,	// (0x0002e174) main_viewer_pane_g

0xb078,	// (0x00029d4a) viewer_content_pane_ParamLimits

0xb078,	// (0x00029d4a) viewer_content_pane

0x4d4e,	// (0x00023a20) main_postcard_pane_g1_ParamLimits

0x4d4e,	// (0x00023a20) main_postcard_pane_g1

0x4d5c,	// (0x00023a2e) main_postcard_pane_g2_ParamLimits

0x4d5c,	// (0x00023a2e) main_postcard_pane_g2

0x4d6a,	// (0x00023a3c) main_postcard_pane_g3_ParamLimits

0x4d6a,	// (0x00023a3c) main_postcard_pane_g3

0x0005,

0xf4b3,	// (0x0002e185) main_postcard_pane_g_ParamLimits

0xf4b3,	// (0x0002e185) main_postcard_pane_g

0x4d7a,	// (0x00023a4c) main_postcard_pane_g4

0xc3dc,	// (0x0002b0ae) smil_status_volume_pane_g2

0x4da6,	// (0x00023a78) postcard_pane_ParamLimits

0x4da6,	// (0x00023a78) postcard_pane

0xabce,	// (0x000298a0) postcard_pane_g1_ParamLimits

0xabce,	// (0x000298a0) postcard_pane_g1

0x4de0,	// (0x00023ab2) postcard_pane_g2_ParamLimits

0x4de0,	// (0x00023ab2) postcard_pane_g2

0x4dec,	// (0x00023abe) postcard_pane_g3_ParamLimits

0x4dec,	// (0x00023abe) postcard_pane_g3

0xb086,	// (0x00029d58) postcard_pane_g4_ParamLimits

0xb086,	// (0x00029d58) postcard_pane_g4

0x4df8,	// (0x00023aca) postcard_pane_g5_ParamLimits

0x4df8,	// (0x00023aca) postcard_pane_g5

0x4e04,	// (0x00023ad6) postcard_pane_g6_ParamLimits

0x4e04,	// (0x00023ad6) postcard_pane_g6

0xb094,	// (0x00029d66) postcard_pane_g7_ParamLimits

0xb094,	// (0x00029d66) postcard_pane_g7

0x0006,

0xf4c0,	// (0x0002e192) postcard_pane_g_ParamLimits

0xf4c0,	// (0x0002e192) postcard_pane_g

0x4e12,	// (0x00023ae4) main_mp2_pane_g1_ParamLimits

0x4e12,	// (0x00023ae4) main_mp2_pane_g1

0x4e20,	// (0x00023af2) main_mp2_pane_g2_ParamLimits

0x4e20,	// (0x00023af2) main_mp2_pane_g2

0x4e2c,	// (0x00023afe) main_mp2_pane_g3_ParamLimits

0x4e2c,	// (0x00023afe) main_mp2_pane_g3

0x0002,

0xf4cf,	// (0x0002e1a1) main_mp2_pane_g_ParamLimits

0xf4cf,	// (0x0002e1a1) main_mp2_pane_g

0x4e38,	// (0x00023b0a) main_mp2_pane_t1_ParamLimits

0x4e38,	// (0x00023b0a) main_mp2_pane_t1

0x4e4f,	// (0x00023b21) main_mp2_pane_t2_ParamLimits

0x4e4f,	// (0x00023b21) main_mp2_pane_t2

0x4e63,	// (0x00023b35) main_mp2_pane_t3_ParamLimits

0x4e63,	// (0x00023b35) main_mp2_pane_t3

0x0002,

0xf4d6,	// (0x0002e1a8) main_mp2_pane_t_ParamLimits

0xf4d6,	// (0x0002e1a8) main_mp2_pane_t

0xb0a2,	// (0x00029d74) pec_content_pane_ParamLimits

0xb0a2,	// (0x00029d74) pec_content_pane

0xa708,	// (0x000293da) scroll_pane_cp015

0xb0b4,	// (0x00029d86) pec_attribute_pane_ParamLimits

0xb0b4,	// (0x00029d86) pec_attribute_pane

0x4e75,	// (0x00023b47) pec_content_pane_g1_ParamLimits

0x4e75,	// (0x00023b47) pec_content_pane_g1

0xb0c4,	// (0x00029d96) pec_content_pane_t1_ParamLimits

0xb0c4,	// (0x00029d96) pec_content_pane_t1

0xb0d6,	// (0x00029da8) pec_content_pane_t2_ParamLimits

0xb0d6,	// (0x00029da8) pec_content_pane_t2

0x0001,

0xf4dd,	// (0x0002e1af) pec_content_pane_t_ParamLimits

0xf4dd,	// (0x0002e1af) pec_content_pane_t

0x4e81,	// (0x00023b53) list_single_graphic_pane_cp01_ParamLimits

0x4e81,	// (0x00023b53) list_single_graphic_pane_cp01

0xa2d2,	// (0x00028fa4) bg_popup_sub_pane_cp04

0xb0e8,	// (0x00029dba) popup_mup_playback_window_g1

0xb0f4,	// (0x00029dc6) popup_mup_playback_window_t1

0xb109,	// (0x00029ddb) popup_mup_playback_window_t2

0x0001,

0xf4e2,	// (0x0002e1b4) popup_mup_playback_window_t

0xb140,	// (0x00029e12) main_image_pane_g1_ParamLimits

0xb140,	// (0x00029e12) main_image_pane_g1

0xb183,	// (0x00029e55) scroll_pane_cp018_ParamLimits

0xb183,	// (0x00029e55) scroll_pane_cp018

0xb19b,	// (0x00029e6d) scroll_pane_cp016_ParamLimits

0xb19b,	// (0x00029e6d) scroll_pane_cp016

0x4f0f,	// (0x00023be1) smil2_image_pane_ParamLimits

0x4f0f,	// (0x00023be1) smil2_image_pane

0x4f45,	// (0x00023c17) smil2_root_pane_ParamLimits

0x4f45,	// (0x00023c17) smil2_root_pane

0x4f71,	// (0x00023c43) smil2_text_pane_ParamLimits

0x4f71,	// (0x00023c43) smil2_text_pane

0xa077,	// (0x00028d49) bg_list_pane_cp06

0xb1d7,	// (0x00029ea9) grid_radio_pane

0xa077,	// (0x00028d49) bg_popup_window_pane_cp06

0xb1e1,	// (0x00029eb3) main_fmradio_pane_t1

0xac45,	// (0x00029917) heading_pane_cp04

0xb1ef,	// (0x00029ec1) main_fmradio_pane_t2

0xc1cb,	// (0x0002ae9d) popup_cale_lunar_info_window_g1

0xb1fd,	// (0x00029ecf) main_fmradio_pane_t3

0xc1d3,	// (0x0002aea5) popup_cale_lunar_info_window_g2

0xb20d,	// (0x00029edf) main_fmradio_pane_t4

0x0001,

0xb21b,	// (0x00029eed) main_fmradio_pane_t5

0x0004,

0xf5bd,	// (0x0002e28f) popup_cale_lunar_info_window_g

0xf4f7,	// (0x0002e1c9) main_fmradio_pane_t

0xb229,	// (0x00029efb) wait_bar_pane_cp03

0xb231,	// (0x00029f03) cell_fmradio_pane_ParamLimits

0xb231,	// (0x00029f03) cell_fmradio_pane

0xb094,	// (0x00029d66) cell_fmradio_pane_g1_ParamLimits

0xb094,	// (0x00029d66) cell_fmradio_pane_g1

0xa077,	// (0x00028d49) grid_highlight_pane_cp011

0xb246,	// (0x00029f18) poc_content_pane_ParamLimits

0xb246,	// (0x00029f18) poc_content_pane

0xb258,	// (0x00029f2a) scroll_pane_cp019

0x4fb1,	// (0x00023c83) popup_call_poc_act_window_ParamLimits

0x4fb1,	// (0x00023c83) popup_call_poc_act_window

0x4fbe,	// (0x00023c90) popup_call_poc_inact_window_ParamLimits

0x4fbe,	// (0x00023c90) popup_call_poc_inact_window

0xf594,	// (0x0002e266) bg_popup_call_poc_act_pane_g

0xc143,	// (0x0002ae15) bg_popup_call_poc_inact_pane_g1

0xc14b,	// (0x0002ae1d) bg_popup_call_poc_inact_pane_g2

0xb260,	// (0x00029f32) popup_call_poc_act_window_g2

0xc153,	// (0x0002ae25) bg_popup_call_poc_inact_pane_g3

0xc15b,	// (0x0002ae2d) bg_popup_call_poc_inact_pane_g4

0xc163,	// (0x0002ae35) bg_popup_call_poc_inact_pane_g5

0xb268,	// (0x00029f3a) popup_call_poc_act_window_t1_ParamLimits

0xb268,	// (0x00029f3a) popup_call_poc_act_window_t1

0xb290,	// (0x00029f62) popup_call_poc_act_window_t2_ParamLimits

0xb290,	// (0x00029f62) popup_call_poc_act_window_t2

0xb2b8,	// (0x00029f8a) popup_call_poc_act_window_t3_ParamLimits

0xb2b8,	// (0x00029f8a) popup_call_poc_act_window_t3

0xb2e0,	// (0x00029fb2) popup_call_poc_act_window_t4_ParamLimits

0xb2e0,	// (0x00029fb2) popup_call_poc_act_window_t4

0x0003,

0xf502,	// (0x0002e1d4) popup_call_poc_act_window_t_ParamLimits

0xf502,	// (0x0002e1d4) popup_call_poc_act_window_t

0xc16b,	// (0x0002ae3d) bg_popup_call_poc_inact_pane_g6

0xc173,	// (0x0002ae45) bg_popup_call_poc_inact_pane_g7

0xc17b,	// (0x0002ae4d) bg_popup_call_poc_inact_pane_g8

0xb2f2,	// (0x00029fc4) popup_call_poc_inact_window_g2

0xc183,	// (0x0002ae55) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf581,	// (0x0002e253) bg_popup_call_poc_inact_pane_g

0xb2fa,	// (0x00029fcc) popup_call_poc_inact_window_t1_ParamLimits

0xb2fa,	// (0x00029fcc) popup_call_poc_inact_window_t1

0xb30f,	// (0x00029fe1) popup_call_poc_inact_window_t2_ParamLimits

0xb30f,	// (0x00029fe1) popup_call_poc_inact_window_t2

0xb324,	// (0x00029ff6) popup_call_poc_inact_window_t3_ParamLimits

0xb324,	// (0x00029ff6) popup_call_poc_inact_window_t3

0x0002,

0xf50b,	// (0x0002e1dd) popup_call_poc_inact_window_t_ParamLimits

0xf50b,	// (0x0002e1dd) popup_call_poc_inact_window_t

0xc34f,	// (0x0002b021) context_pane_ParamLimits

0x55cd,	// (0x0002429f) signal_pane_ParamLimits

0xa54d,	// (0x0002921f) main_call2_pane

0xc33d,	// (0x0002b00f) popup_phob_thumbnail2_window_ParamLimits

0xc33d,	// (0x0002b00f) popup_phob_thumbnail2_window

0x0f80,	// (0x0001fc52) aid_hotspot_pointer_arrow_pane

0x0f88,	// (0x0001fc5a) aid_hotspot_pointer_hand_pane

0x52e3,	// (0x00023fb5) phob_pre_status_pane_g5

0x2d71,	// (0x00021a43) cams_zoom_pane_ParamLimits

0x2d7d,	// (0x00021a4f) image_vga_pane_ParamLimits

0x2d8c,	// (0x00021a5e) main_camera_pane_g1_ParamLimits

0x2d9a,	// (0x00021a6c) main_camera_pane_g2_ParamLimits

0x2da6,	// (0x00021a78) main_camera_pane_g3_ParamLimits

0x2db4,	// (0x00021a86) main_camera_pane_g4_ParamLimits

0x2dc2,	// (0x00021a94) main_camera_pane_g5_ParamLimits

0x2dd0,	// (0x00021aa2) main_camera_pane_g6_ParamLimits

0x2dde,	// (0x00021ab0) main_camera_pane_g7_ParamLimits

0xf20a,	// (0x0002dedc) main_camera_pane_g_ParamLimits

0x2dec,	// (0x00021abe) main_camera_pane_t1_ParamLimits

0x2dfe,	// (0x00021ad0) main_camera_pane_t2_ParamLimits

0xf21b,	// (0x0002deed) main_camera_pane_t_ParamLimits

0xa2d2,	// (0x00028fa4) bg_popup_preview_window_pane_cp01_ParamLimits

0xa2d2,	// (0x00028fa4) bg_popup_preview_window_pane_cp01

0xb339,	// (0x0002a00b) popup_phob_thumbnail2_window_g1_ParamLimits

0xb339,	// (0x0002a00b) popup_phob_thumbnail2_window_g1

0xa077,	// (0x00028d49) call2_cli_visual_pane

0x4fda,	// (0x00023cac) popup_call2_audio_conf_window_ParamLimits

0x4fda,	// (0x00023cac) popup_call2_audio_conf_window

0x4ff3,	// (0x00023cc5) popup_call2_audio_first_window_ParamLimits

0x4ff3,	// (0x00023cc5) popup_call2_audio_first_window

0x5091,	// (0x00023d63) popup_call2_audio_in_window_ParamLimits

0x5091,	// (0x00023d63) popup_call2_audio_in_window

0x50d5,	// (0x00023da7) popup_call2_audio_out_window_ParamLimits

0x50d5,	// (0x00023da7) popup_call2_audio_out_window

0x513f,	// (0x00023e11) popup_call2_audio_second_window_ParamLimits

0x513f,	// (0x00023e11) popup_call2_audio_second_window

0x519d,	// (0x00023e6f) popup_call2_audio_wait_window_ParamLimits

0x519d,	// (0x00023e6f) popup_call2_audio_wait_window

0xa077,	// (0x00028d49) bg_popup_call2_act_pane_cp03

0xa2b4,	// (0x00028f86) list_conf_pane_cp

0xb345,	// (0x0002a017) popup_call2_audio_conf_window_t1

0xb353,	// (0x0002a025) list_single_graphic_popup_conf2_pane_ParamLimits

0xb353,	// (0x0002a025) list_single_graphic_popup_conf2_pane

0xacb4,	// (0x00029986) list_highlight_pane_cp04

0xb366,	// (0x0002a038) list_single_graphic_popup_conf2_pane_g1

0xacc5,	// (0x00029997) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf512,	// (0x0002e1e4) list_single_graphic_popup_conf2_pane_g

0xb370,	// (0x0002a042) list_single_graphic_popup_conf2_pane_t1

0xb37e,	// (0x0002a050) bg_popup_call2_act_pane_cp01_ParamLimits

0xb37e,	// (0x0002a050) bg_popup_call2_act_pane_cp01

0xb408,	// (0x0002a0da) call_type_pane_cp05_ParamLimits

0xb408,	// (0x0002a0da) call_type_pane_cp05

0xb45c,	// (0x0002a12e) popup_call2_audio_second_window_g1_ParamLimits

0xb45c,	// (0x0002a12e) popup_call2_audio_second_window_g1

0xb4b0,	// (0x0002a182) popup_call2_audio_second_window_g2_ParamLimits

0xb4b0,	// (0x0002a182) popup_call2_audio_second_window_g2

0x0002,

0xf517,	// (0x0002e1e9) popup_call2_audio_second_window_g_ParamLimits

0xf517,	// (0x0002e1e9) popup_call2_audio_second_window_g

0xb515,	// (0x0002a1e7) popup_call2_audio_second_window_t1_ParamLimits

0xb515,	// (0x0002a1e7) popup_call2_audio_second_window_t1

0xb5d0,	// (0x0002a2a2) popup_call2_audio_second_window_t2_ParamLimits

0xb5d0,	// (0x0002a2a2) popup_call2_audio_second_window_t2

0xb623,	// (0x0002a2f5) popup_call2_audio_second_window_t3_ParamLimits

0xb623,	// (0x0002a2f5) popup_call2_audio_second_window_t3

0x0003,

0xf51e,	// (0x0002e1f0) popup_call2_audio_second_window_t_ParamLimits

0xf51e,	// (0x0002e1f0) popup_call2_audio_second_window_t

0xa077,	// (0x00028d49) bg_popup_call2_in_pane_cp02

0xa081,	// (0x00028d53) call_type_pane_cp04

0xa089,	// (0x00028d5b) popup_call2_audio_wait_window_g1

0xa091,	// (0x00028d63) popup_call2_audio_wait_window_g2

0x0001,

0xf0f9,	// (0x0002ddcb) popup_call2_audio_wait_window_g

0xa099,	// (0x00028d6b) popup_call2_audio_wait_window_t3

0xb716,	// (0x0002a3e8) bg_popup_call2_act_pane_ParamLimits

0xb716,	// (0x0002a3e8) bg_popup_call2_act_pane

0xb7d6,	// (0x0002a4a8) call_type_pane_cp03_ParamLimits

0xb7d6,	// (0x0002a4a8) call_type_pane_cp03

0xb83a,	// (0x0002a50c) popup_call2_audio_first_window_g1_ParamLimits

0xb83a,	// (0x0002a50c) popup_call2_audio_first_window_g1

0xb8aa,	// (0x0002a57c) popup_call2_audio_first_window_g2_ParamLimits

0xb8aa,	// (0x0002a57c) popup_call2_audio_first_window_g2

0xabce,	// (0x000298a0) popup_call2_audio_first_window_g3_ParamLimits

0xabce,	// (0x000298a0) popup_call2_audio_first_window_g3

0x0004,

0xf527,	// (0x0002e1f9) popup_call2_audio_first_window_g_ParamLimits

0xf527,	// (0x0002e1f9) popup_call2_audio_first_window_g

0xb988,	// (0x0002a65a) popup_call2_audio_first_window_t1_ParamLimits

0xb988,	// (0x0002a65a) popup_call2_audio_first_window_t1

0xba8b,	// (0x0002a75d) popup_call2_audio_first_window_t4_ParamLimits

0xba8b,	// (0x0002a75d) popup_call2_audio_first_window_t4

0xbb6e,	// (0x0002a840) popup_call2_audio_first_window_t5_ParamLimits

0xbb6e,	// (0x0002a840) popup_call2_audio_first_window_t5

0x0003,

0xf532,	// (0x0002e204) popup_call2_audio_first_window_t_ParamLimits

0xf532,	// (0x0002e204) popup_call2_audio_first_window_t

0xa2ca,	// (0x00028f9c) bg_popup_call2_act_pane_g1

0xc1dd,	// (0x0002aeaf) popup_cale_lunar_info_window_t1

0xc1eb,	// (0x0002aebd) popup_cale_lunar_info_window_t2

0xc1f9,	// (0x0002aecb) popup_cale_lunar_info_window_t3

0xa077,	// (0x00028d49) bg_popup_call2_bubble_pane

0xbc6f,	// (0x0002a941) bg_popup_call2_in_pane_cp01_ParamLimits

0xbc6f,	// (0x0002a941) bg_popup_call2_in_pane_cp01

0x9d53,	// (0x00028a25) call_type_pane_cp02

0xbcb7,	// (0x0002a989) popup_call2_audio_out_window_g1_ParamLimits

0xbcb7,	// (0x0002a989) popup_call2_audio_out_window_g1

0xbce3,	// (0x0002a9b5) popup_call2_audio_out_window_g2_ParamLimits

0xbce3,	// (0x0002a9b5) popup_call2_audio_out_window_g2

0xbd0b,	// (0x0002a9dd) popup_call2_audio_out_window_g3_ParamLimits

0xbd0b,	// (0x0002a9dd) popup_call2_audio_out_window_g3

0x0003,

0xf53b,	// (0x0002e20d) popup_call2_audio_out_window_g_ParamLimits

0xf53b,	// (0x0002e20d) popup_call2_audio_out_window_g

0xbd46,	// (0x0002aa18) popup_call2_audio_out_window_t1_ParamLimits

0xbd46,	// (0x0002aa18) popup_call2_audio_out_window_t1

0xbda5,	// (0x0002aa77) popup_call2_audio_out_window_t2_ParamLimits

0xbda5,	// (0x0002aa77) popup_call2_audio_out_window_t2

0xbdf9,	// (0x0002aacb) popup_call2_audio_out_window_t3_ParamLimits

0xbdf9,	// (0x0002aacb) popup_call2_audio_out_window_t3

0xbe0f,	// (0x0002aae1) popup_call2_audio_out_window_t4_ParamLimits

0xbe0f,	// (0x0002aae1) popup_call2_audio_out_window_t4

0xbe25,	// (0x0002aaf7) popup_call2_audio_out_window_t5_ParamLimits

0xbe25,	// (0x0002aaf7) popup_call2_audio_out_window_t5

0x0005,

0xf544,	// (0x0002e216) popup_call2_audio_out_window_t_ParamLimits

0xf544,	// (0x0002e216) popup_call2_audio_out_window_t

0xbe89,	// (0x0002ab5b) bg_popup_call2_in_pane_ParamLimits

0xbe89,	// (0x0002ab5b) bg_popup_call2_in_pane

0xbee5,	// (0x0002abb7) popup_call2_audio_in_window_g1_ParamLimits

0xbee5,	// (0x0002abb7) popup_call2_audio_in_window_g1

0xbf1d,	// (0x0002abef) popup_call2_audio_in_window_g2_ParamLimits

0xbf1d,	// (0x0002abef) popup_call2_audio_in_window_g2

0xbf55,	// (0x0002ac27) popup_call2_audio_in_window_g3_ParamLimits

0xbf55,	// (0x0002ac27) popup_call2_audio_in_window_g3

0x0003,

0xf551,	// (0x0002e223) popup_call2_audio_in_window_g_ParamLimits

0xf551,	// (0x0002e223) popup_call2_audio_in_window_g

0xbfad,	// (0x0002ac7f) popup_call2_audio_in_window_t1_ParamLimits

0xbfad,	// (0x0002ac7f) popup_call2_audio_in_window_t1

0xc02d,	// (0x0002acff) popup_call2_audio_in_window_t2_ParamLimits

0xc02d,	// (0x0002acff) popup_call2_audio_in_window_t2

0xc0ad,	// (0x0002ad7f) popup_call2_audio_in_window_t3_ParamLimits

0xc0ad,	// (0x0002ad7f) popup_call2_audio_in_window_t3

0xc0c7,	// (0x0002ad99) popup_call2_audio_in_window_t4_ParamLimits

0xc0c7,	// (0x0002ad99) popup_call2_audio_in_window_t4

0xc0d9,	// (0x0002adab) popup_call2_audio_in_window_t5_ParamLimits

0xc0d9,	// (0x0002adab) popup_call2_audio_in_window_t5

0xc0ee,	// (0x0002adc0) popup_call2_audio_in_window_t6_ParamLimits

0xc0ee,	// (0x0002adc0) popup_call2_audio_in_window_t6

0x0005,

0xf55a,	// (0x0002e22c) popup_call2_audio_in_window_t_ParamLimits

0xf55a,	// (0x0002e22c) popup_call2_audio_in_window_t

0xa2ca,	// (0x00028f9c) bg_popup_call2_in_pane_g1

0xc207,	// (0x0002aed9) popup_cale_lunar_info_window_t4

0x0003,

0xf5c2,	// (0x0002e294) popup_cale_lunar_info_window_t

0xa2d2,	// (0x00028fa4) bg_popup_call2_rect_pane_ParamLimits

0xa2d2,	// (0x00028fa4) bg_popup_call2_rect_pane

0xa077,	// (0x00028d49) call2_cli_visual_graphic_pane

0xa077,	// (0x00028d49) call2_cli_visual_text_pane

0x0ff2,	// (0x0001fcc4) smil_status_volume_pane_g3

0x0002,

0xa3ec,	// (0x000290be) call2_cli_visual_graphic_pane_g1

0xa3ec,	// (0x000290be) call2_cli_visual_graphic_pane_g2

0xa3ec,	// (0x000290be) call2_cli_visual_graphic_pane_g3

0x0002,

0xf567,	// (0x0002e239) call2_cli_visual_graphic_pane_g

0xc103,	// (0x0002add5) bg_popup_call2_rect_pane_g1

0xa48a,	// (0x0002915c) bg_popup_call2_rect_pane_g2

0xc10b,	// (0x0002addd) bg_popup_call2_rect_pane_g3

0xc113,	// (0x0002ade5) bg_popup_call2_rect_pane_g4

0xc11b,	// (0x0002aded) bg_popup_call2_rect_pane_g5

0xc123,	// (0x0002adf5) bg_popup_call2_rect_pane_g6

0xc12b,	// (0x0002adfd) bg_popup_call2_rect_pane_g7

0xc133,	// (0x0002ae05) bg_popup_call2_rect_pane_g8

0xc13b,	// (0x0002ae0d) bg_popup_call2_rect_pane_g9

0x0008,

0xf56e,	// (0x0002e240) bg_popup_call2_rect_pane_g

0xc143,	// (0x0002ae15) bg_popup_call2_bubble_pane_g1

0xc14b,	// (0x0002ae1d) bg_popup_call2_bubble_pane_g2

0xc153,	// (0x0002ae25) bg_popup_call2_bubble_pane_g3

0xc15b,	// (0x0002ae2d) bg_popup_call2_bubble_pane_g4

0xc163,	// (0x0002ae35) bg_popup_call2_bubble_pane_g5

0xc16b,	// (0x0002ae3d) bg_popup_call2_bubble_pane_g6

0xc173,	// (0x0002ae45) bg_popup_call2_bubble_pane_g7

0xc17b,	// (0x0002ae4d) bg_popup_call2_bubble_pane_g8

0xc183,	// (0x0002ae55) bg_popup_call2_bubble_pane_g9

0x0008,

0xf581,	// (0x0002e253) bg_popup_call2_bubble_pane_g

0x26fd,	// (0x000213cf) aid_cale_week_size_cell_pane

0x2e12,	// (0x00021ae4) aid_cams_cif_uncrop_pane_ParamLimits

0x2e12,	// (0x00021ae4) aid_cams_cif_uncrop_pane

0x2f6f,	// (0x00021c41) aid_cams_size_cell_ParamLimits

0x2f6f,	// (0x00021c41) aid_cams_size_cell

0x2f7b,	// (0x00021c4d) grid_cams_pane_ParamLimits

0x2f89,	// (0x00021c5b) linegrid_cams_pane_ParamLimits

0x3171,	// (0x00021e43) call_video_pane_t1

0x318e,	// (0x00021e60) call_video_pane_t2

0x0001,

0xf26e,	// (0x0002df40) call_video_pane_t

0x365a,	// (0x0002232c) aid_cale_month_size_cell_pane_ParamLimits

0x365a,	// (0x0002232c) aid_cale_month_size_cell_pane

0xf60b,	// (0x0002e2dd) smil_status_volume_pane_g

0x0fff,	// (0x0001fcd1) volume_smil_pane_ParamLimits

0x9c15,	// (0x000288e7) aid_popup2_width_pane

0x2639,	// (0x0002130b) cell_qdial_pane_g4_ParamLimits

0x2639,	// (0x0002130b) cell_qdial_pane_g4

0x45da,	// (0x000232ac) aid_blid_cardinal_pane_ParamLimits

0x45ea,	// (0x000232bc) aid_blid_destination_pane_ParamLimits

0x45ea,	// (0x000232bc) aid_blid_destination_pane

0xa2d2,	// (0x00028fa4) bg_popup_call_poc_act_pane_ParamLimits

0xa2d2,	// (0x00028fa4) bg_popup_call_poc_act_pane

0xa2d2,	// (0x00028fa4) bg_popup_call_poc_inact_pane_ParamLimits

0xa2d2,	// (0x00028fa4) bg_popup_call_poc_inact_pane

0xc18b,	// (0x0002ae5d) bg_popup_call_poc_act_pane_g1

0xc193,	// (0x0002ae65) bg_popup_call_poc_act_pane_g2

0xc19b,	// (0x0002ae6d) bg_popup_call_poc_act_pane_g3

0xc15b,	// (0x0002ae2d) bg_popup_call_poc_act_pane_g4

0xc163,	// (0x0002ae35) bg_popup_call_poc_act_pane_g5

0xc1a3,	// (0x0002ae75) bg_popup_call_poc_act_pane_g6

0xc173,	// (0x0002ae45) bg_popup_call_poc_act_pane_g7

0xc1ab,	// (0x0002ae7d) bg_popup_call_poc_act_pane_g8

0xa077,	// (0x00028d49) main_usb_pane

0xc314,	// (0x0002afe6) popup_cale_lunar_info_window

0x34a6,	// (0x00022178) im_reading_pane_t1_ParamLimits

0xa660,	// (0x00029332) list_im_pane_ParamLimits

0xa671,	// (0x00029343) scroll_pane_cp07_ParamLimits

0xa077,	// (0x00028d49) grid_highlight_pane_cp012

0xa2d2,	// (0x00028fa4) mup_scale_pane_ParamLimits

0xabce,	// (0x000298a0) main_usb_pane_g1_ParamLimits

0xabce,	// (0x000298a0) main_usb_pane_g1

0x5206,	// (0x00023ed8) main_usb_pane_g2_ParamLimits

0x5206,	// (0x00023ed8) main_usb_pane_g2

0x0001,

0xf5ab,	// (0x0002e27d) main_usb_pane_g_ParamLimits

0xf5ab,	// (0x0002e27d) main_usb_pane_g

0x5212,	// (0x00023ee4) main_usb_pane_t1_ParamLimits

0x5212,	// (0x00023ee4) main_usb_pane_t1

0x5224,	// (0x00023ef6) main_usb_pane_t2_ParamLimits

0x5224,	// (0x00023ef6) main_usb_pane_t2

0x5236,	// (0x00023f08) main_usb_pane_t3_ParamLimits

0x5236,	// (0x00023f08) main_usb_pane_t3

0x5248,	// (0x00023f1a) main_usb_pane_t4_ParamLimits

0x5248,	// (0x00023f1a) main_usb_pane_t4

0x525a,	// (0x00023f2c) main_usb_pane_t5_ParamLimits

0x525a,	// (0x00023f2c) main_usb_pane_t5

0x526c,	// (0x00023f3e) main_usb_pane_t6_ParamLimits

0x526c,	// (0x00023f3e) main_usb_pane_t6

0x0005,

0xf5b0,	// (0x0002e282) main_usb_pane_t_ParamLimits

0x4579,	// (0x0002324b) aid_text_placing

0x4584,	// (0x00023256) main_location2_pane_t1_ParamLimits

0x459a,	// (0x0002326c) main_location2_pane_t2_ParamLimits

0x45b0,	// (0x00023282) main_location2_pane_t3_ParamLimits

0x45c6,	// (0x00023298) main_location2_pane_t4_ParamLimits

0x45c6,	// (0x00023298) main_location2_pane_t4

0xf3cf,	// (0x0002e0a1) main_location2_pane_t_ParamLimits

0xa30e,	// (0x00028fe0) find_pinb_pane_g2_ParamLimits

0xa30e,	// (0x00028fe0) find_pinb_pane_g2

0x0001,

0xf11f,	// (0x0002ddf1) find_pinb_pane_g_ParamLimits

0xf11f,	// (0x0002ddf1) find_pinb_pane_g

0xa31a,	// (0x00028fec) find_pinb_pane_t1_ParamLimits

0xa32c,	// (0x00028ffe) find_pinb_pane_t2_ParamLimits

0xf124,	// (0x0002ddf6) find_pinb_pane_t_ParamLimits

0xa077,	// (0x00028d49) main_call3_pane

0x3bd9,	// (0x000228ab) cale_month_day_heading_pane_t1_ParamLimits

0x3c5b,	// (0x0002292d) cale_month_day_heading_pane_t2_ParamLimits

0x3ce8,	// (0x000229ba) cale_month_day_heading_pane_t3_ParamLimits

0x3d75,	// (0x00022a47) cale_month_day_heading_pane_t4_ParamLimits

0x3e02,	// (0x00022ad4) cale_month_day_heading_pane_t5_ParamLimits

0x3e97,	// (0x00022b69) cale_month_day_heading_pane_t6_ParamLimits

0x3f34,	// (0x00022c06) cale_month_day_heading_pane_t7_ParamLimits

0xf2a6,	// (0x0002df78) cale_month_day_heading_pane_t_ParamLimits

0x41de,	// (0x00022eb0) smil_status_volume_pane

0x4dc4,	// (0x00023a96) postcard_address_pane_ParamLimits

0x4dc4,	// (0x00023a96) postcard_address_pane

0x4dd2,	// (0x00023aa4) postcard_message_pane_ParamLimits

0x4dd2,	// (0x00023aa4) postcard_message_pane

0x51dc,	// (0x00023eae) call2_cli_visual_pane_t1_ParamLimits

0x51dc,	// (0x00023eae) call2_cli_visual_pane_t1

0x57ad,	// (0x0002447f) postcard_message_pane_t1_ParamLimits

0x57ad,	// (0x0002447f) postcard_message_pane_t1

0x5796,	// (0x00024468) postcard_address_pane_t1_ParamLimits

0x5796,	// (0x00024468) postcard_address_pane_t1

0x5787,	// (0x00024459) popup_call3_audio_in_window_ParamLimits

0x5787,	// (0x00024459) popup_call3_audio_in_window

0x5665,	// (0x00024337) bg_popup_call3_in_pane_ParamLimits

0x5665,	// (0x00024337) bg_popup_call3_in_pane

0x56cd,	// (0x0002439f) popup_call3_audio_in_window_g1_ParamLimits

0x56cd,	// (0x0002439f) popup_call3_audio_in_window_g1

0x56e5,	// (0x000243b7) popup_call3_audio_in_window_g2_ParamLimits

0x56e5,	// (0x000243b7) popup_call3_audio_in_window_g2

0x56fd,	// (0x000243cf) popup_call3_audio_in_window_g3_ParamLimits

0x56fd,	// (0x000243cf) popup_call3_audio_in_window_g3

0x0003,

0xf612,	// (0x0002e2e4) popup_call3_audio_in_window_g_ParamLimits

0xf612,	// (0x0002e2e4) popup_call3_audio_in_window_g

0x5725,	// (0x000243f7) popup_call3_audio_in_window_t1_ParamLimits

0x5725,	// (0x000243f7) popup_call3_audio_in_window_t1

0x574d,	// (0x0002441f) popup_call3_audio_in_window_t2_ParamLimits

0x574d,	// (0x0002441f) popup_call3_audio_in_window_t2

0x5775,	// (0x00024447) popup_call3_audio_in_window_t3_ParamLimits

0x5775,	// (0x00024447) popup_call3_audio_in_window_t3

0x0002,

0xf61b,	// (0x0002e2ed) popup_call3_audio_in_window_t_ParamLimits

0xf61b,	// (0x0002e2ed) popup_call3_audio_in_window_t

0xa54d,	// (0x0002921f) bg_popup_call3_rect_pane

0xc103,	// (0x0002add5) bg_popup_call3_rect_pane_g1

0xa48a,	// (0x0002915c) bg_popup_call3_rect_pane_g2

0xc10b,	// (0x0002addd) bg_popup_call3_rect_pane_g3

0xc113,	// (0x0002ade5) bg_popup_call3_rect_pane_g4

0xc11b,	// (0x0002aded) bg_popup_call3_rect_pane_g5

0xc123,	// (0x0002adf5) bg_popup_call3_rect_pane_g6

0xc12b,	// (0x0002adfd) bg_popup_call3_rect_pane_g7

0x4a0e,	// (0x000236e0) mup_visualizer_osc_pane

0xaf4a,	// (0x00029c1c) mup_visualizer_spec_pane

0x5685,	// (0x00024357) call3_video_qcif_pane_ParamLimits

0x5685,	// (0x00024357) call3_video_qcif_pane

0x5697,	// (0x00024369) call3_video_qcif_uncrop_pane_ParamLimits

0x5697,	// (0x00024369) call3_video_qcif_uncrop_pane

0x56a7,	// (0x00024379) call3_video_subqcif_pane_ParamLimits

0x56a7,	// (0x00024379) call3_video_subqcif_pane

0x56bb,	// (0x0002438d) call3_video_subqcif_uncrop_pane_ParamLimits

0x56bb,	// (0x0002438d) call3_video_subqcif_uncrop_pane

0x5715,	// (0x000243e7) popup_call3_audio_in_window_g4_ParamLimits

0x5715,	// (0x000243e7) popup_call3_audio_in_window_g4

0x5654,	// (0x00024326) mup_spec_half_pane

0x565d,	// (0x0002432f) mup_spec_half_pane_cp

0xc3af,	// (0x0002b081) mup_osc_middle_pane

0xc3b8,	// (0x0002b08a) mup_visualizer_osc_pane_g1

0x5634,	// (0x00024306) mup_spec_bar_pane_ParamLimits

0x5634,	// (0x00024306) mup_spec_bar_pane

0xc39c,	// (0x0002b06e) mup_spec_bar_pane_g1

0xc3a6,	// (0x0002b078) mup_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002e2d8) mup_spec_bar_pane_g

0x26fd,	// (0x000213cf) aid_cale_week_size_cell_pane_ParamLimits

0x2717,	// (0x000213e9) bg_cale_heading_pane_ParamLimits

0x2740,	// (0x00021412) bg_cale_pane_cp01_ParamLimits

0x2762,	// (0x00021434) cale_week_corner_pane_ParamLimits

0x2781,	// (0x00021453) cale_week_day_heading_pane_ParamLimits

0x27af,	// (0x00021481) cale_week_scroll_pane_g1_ParamLimits

0x27d3,	// (0x000214a5) cale_week_scroll_pane_g2_ParamLimits

0x27eb,	// (0x000214bd) cale_week_scroll_pane_g3_ParamLimits

0x2803,	// (0x000214d5) cale_week_scroll_pane_g4_ParamLimits

0x281b,	// (0x000214ed) cale_week_scroll_pane_g5_ParamLimits

0x2833,	// (0x00021505) cale_week_scroll_pane_g6_ParamLimits

0x2853,	// (0x00021525) cale_week_scroll_pane_g7_ParamLimits

0x2873,	// (0x00021545) cale_week_scroll_pane_g8_ParamLimits

0x2893,	// (0x00021565) cale_week_scroll_pane_g9_ParamLimits

0x28b0,	// (0x00021582) cale_week_scroll_pane_g10_ParamLimits

0x28cd,	// (0x0002159f) cale_week_scroll_pane_g11_ParamLimits

0x28ea,	// (0x000215bc) cale_week_scroll_pane_g12_ParamLimits

0x2907,	// (0x000215d9) cale_week_scroll_pane_g13_ParamLimits

0x292c,	// (0x000215fe) cale_week_scroll_pane_g14_ParamLimits

0x2955,	// (0x00021627) cale_week_scroll_pane_g15_ParamLimits

0xf1b0,	// (0x0002de82) cale_week_scroll_pane_g_ParamLimits

0x299e,	// (0x00021670) cale_week_time_pane_ParamLimits

0x29be,	// (0x00021690) grid_cale_week_pane_ParamLimits

0xa4be,	// (0x00029190) listscroll_cale_week_pane_t1

0xa4d0,	// (0x000291a2) scroll_pane_cp08_ParamLimits

0x36c7,	// (0x00022399) cale_month_corner_pane_ParamLimits

0xa891,	// (0x00029563) cale_month_pane_t1

0x3b6b,	// (0x0002283d) cale_month_week_pane_ParamLimits

0xabce,	// (0x000298a0) popup_call_status_window_g1_ParamLimits

0x43f1,	// (0x000230c3) popup_call_status_window_g2_ParamLimits

0x43fd,	// (0x000230cf) popup_call_status_window_g3_ParamLimits

0xf356,	// (0x0002e028) popup_call_status_window_g_ParamLimits

0xac35,	// (0x00029907) aid_call2_pane

0x4cab,	// (0x0002397d) msg_header_pane_g1

0x4dc4,	// (0x00023a96) postcard_address2_pane_ParamLimits

0x4dc4,	// (0x00023a96) postcard_address2_pane

0x4dd2,	// (0x00023aa4) postcard_message2_pane_ParamLimits

0x4dd2,	// (0x00023aa4) postcard_message2_pane

0x55db,	// (0x000242ad) message2_row_pane_ParamLimits

0x55db,	// (0x000242ad) message2_row_pane

0x55f5,	// (0x000242c7) address2_row_pane_ParamLimits

0x55f5,	// (0x000242c7) address2_row_pane

0xc36a,	// (0x0002b03c) postcard_message2_row_pane_g1

0xc372,	// (0x0002b044) postcard_message2_row_pane_t1

0xc36a,	// (0x0002b03c) address2_row_pane_g1

0xc372,	// (0x0002b044) address2_row_pane_t1

0x2cf4,	// (0x000219c6) aid_size_cell_vorec

0xa077,	// (0x00028d49) main_rss_pane

0x5608,	// (0x000242da) rss_list_single_pane_ParamLimits

0x5608,	// (0x000242da) rss_list_single_pane

0xc380,	// (0x0002b052) rss_list_single_pane_t1

0xc38e,	// (0x0002b060) rss_list_single_pane_t2

0x0001,

0xf601,	// (0x0002e2d3) rss_list_single_pane_t

0xa077,	// (0x00028d49) main_camera2_pane

0xa077,	// (0x00028d49) main_video2_pane

0x105f,	// (0x0001fd31) cams_zoom_pane_cp2_ParamLimits

0x105f,	// (0x0001fd31) cams_zoom_pane_cp2

0x106b,	// (0x0001fd3d) image2_vga_pane_ParamLimits

0x106b,	// (0x0001fd3d) image2_vga_pane

0x107a,	// (0x0001fd4c) main_camera2_pane_g1_ParamLimits

0x107a,	// (0x0001fd4c) main_camera2_pane_g1

0x1086,	// (0x0001fd58) main_camera2_pane_g2_ParamLimits

0x1086,	// (0x0001fd58) main_camera2_pane_g2

0x1092,	// (0x0001fd64) main_camera2_pane_g3_ParamLimits

0x1092,	// (0x0001fd64) main_camera2_pane_g3

0x109e,	// (0x0001fd70) main_camera2_pane_g4_ParamLimits

0x109e,	// (0x0001fd70) main_camera2_pane_g4

0x10aa,	// (0x0001fd7c) main_camera2_pane_g5_ParamLimits

0x10aa,	// (0x0001fd7c) main_camera2_pane_g5

0x10b6,	// (0x0001fd88) main_camera2_pane_g6_ParamLimits

0x10b6,	// (0x0001fd88) main_camera2_pane_g6

0x10c2,	// (0x0001fd94) main_camera2_pane_g7_ParamLimits

0x10c2,	// (0x0001fd94) main_camera2_pane_g7

0x10ce,	// (0x0001fda0) main_camera2_pane_g8_ParamLimits

0x10ce,	// (0x0001fda0) main_camera2_pane_g8

0x0008,

0xf622,	// (0x0002e2f4) main_camera2_pane_g_ParamLimits

0xf622,	// (0x0002e2f4) main_camera2_pane_g

0x10e6,	// (0x0001fdb8) main_camera2_pane_t1_ParamLimits

0x10e6,	// (0x0001fdb8) main_camera2_pane_t1

0x10f8,	// (0x0001fdca) main_camera2_pane_t2_ParamLimits

0x10f8,	// (0x0001fdca) main_camera2_pane_t2

0x110a,	// (0x0001fddc) main_camera2_pane_t3_ParamLimits

0x110a,	// (0x0001fddc) main_camera2_pane_t3

0x111c,	// (0x0001fdee) main_camera2_pane_t4_ParamLimits

0x111c,	// (0x0001fdee) main_camera2_pane_t4

0x0006,

0xf635,	// (0x0002e307) main_camera2_pane_t_ParamLimits

0xf635,	// (0x0002e307) main_camera2_pane_t

0x1179,	// (0x0001fe4b) cams_zoom_pane_cp4_ParamLimits

0x1179,	// (0x0001fe4b) cams_zoom_pane_cp4

0x1189,	// (0x0001fe5b) image2_cif_pane_ParamLimits

0x1189,	// (0x0001fe5b) image2_cif_pane

0x119e,	// (0x0001fe70) image2_subqcif_pane_ParamLimits

0x119e,	// (0x0001fe70) image2_subqcif_pane

0x11ad,	// (0x0001fe7f) main_video2_pane_g1_ParamLimits

0x11ad,	// (0x0001fe7f) main_video2_pane_g1

0x11bf,	// (0x0001fe91) main_video2_pane_g2_ParamLimits

0x11bf,	// (0x0001fe91) main_video2_pane_g2

0x11cf,	// (0x0001fea1) main_video2_pane_g3_ParamLimits

0x11cf,	// (0x0001fea1) main_video2_pane_g3

0x11df,	// (0x0001feb1) main_video2_pane_g4_ParamLimits

0x11df,	// (0x0001feb1) main_video2_pane_g4

0x11ef,	// (0x0001fec1) main_video2_pane_g5_ParamLimits

0x11ef,	// (0x0001fec1) main_video2_pane_g5

0x11ff,	// (0x0001fed1) main_video2_pane_g6_ParamLimits

0x11ff,	// (0x0001fed1) main_video2_pane_g6

0x0005,

0xf644,	// (0x0002e316) main_video2_pane_g_ParamLimits

0xf644,	// (0x0002e316) main_video2_pane_g

0x1211,	// (0x0001fee3) main_video2_pane_t1_ParamLimits

0x1211,	// (0x0001fee3) main_video2_pane_t1

0x122b,	// (0x0001fefd) main_video2_pane_t2_ParamLimits

0x122b,	// (0x0001fefd) main_video2_pane_t2

0x1251,	// (0x0001ff23) main_video2_pane_t3_ParamLimits

0x1251,	// (0x0001ff23) main_video2_pane_t3

0x0002,

0xf651,	// (0x0002e323) main_video2_pane_t_ParamLimits

0xf651,	// (0x0002e323) main_video2_pane_t

0x5323,	// (0x00023ff5) call_muted_g2

0x0001,

0xf5f3,	// (0x0002e2c5) call_muted_g

0xa077,	// (0x00028d49) main_mup2_pane

0xc3ef,	// (0x0002b0c1) main_mup2_pane_g1_ParamLimits

0xc3ef,	// (0x0002b0c1) main_mup2_pane_g1

0x57c8,	// (0x0002449a) main_mup2_pane_g2_ParamLimits

0x57c8,	// (0x0002449a) main_mup2_pane_g2

0x12a0,	// (0x0001ff72) main_mup_pane_g13_cp1

0x12a8,	// (0x0001ff7a) mup_volume_pane_cp1

0x57ea,	// (0x000244bc) main_mup2_pane_g4_ParamLimits

0x57ea,	// (0x000244bc) main_mup2_pane_g4

0x57ff,	// (0x000244d1) main_mup2_pane_g5_ParamLimits

0x57ff,	// (0x000244d1) main_mup2_pane_g5

0x5814,	// (0x000244e6) main_mup2_pane_g6_ParamLimits

0x5814,	// (0x000244e6) main_mup2_pane_g6

0x5829,	// (0x000244fb) main_mup2_pane_g7_ParamLimits

0x5829,	// (0x000244fb) main_mup2_pane_g7

0x0006,

0xf658,	// (0x0002e32a) main_mup2_pane_g_ParamLimits

0xf658,	// (0x0002e32a) main_mup2_pane_g

0x5845,	// (0x00024517) main_mup2_pane_t1_ParamLimits

0x5845,	// (0x00024517) main_mup2_pane_t1

0x585c,	// (0x0002452e) main_mup2_pane_t2_ParamLimits

0x585c,	// (0x0002452e) main_mup2_pane_t2

0x5873,	// (0x00024545) main_mup2_pane_t3_ParamLimits

0x5873,	// (0x00024545) main_mup2_pane_t3

0x588a,	// (0x0002455c) main_mup2_pane_t4_ParamLimits

0x588a,	// (0x0002455c) main_mup2_pane_t4

0x58a4,	// (0x00024576) main_mup2_pane_t5_ParamLimits

0x58a4,	// (0x00024576) main_mup2_pane_t5

0x58be,	// (0x00024590) main_mup2_pane_t6_ParamLimits

0x58be,	// (0x00024590) main_mup2_pane_t6

0x0005,

0xf667,	// (0x0002e339) main_mup2_pane_t_ParamLimits

0xf667,	// (0x0002e339) main_mup2_pane_t

0x58f6,	// (0x000245c8) mup2_visualizer_pane_ParamLimits

0x58f6,	// (0x000245c8) mup2_visualizer_pane

0x592c,	// (0x000245fe) mup_progress_pane_cp_ParamLimits

0x592c,	// (0x000245fe) mup_progress_pane_cp

0x128b,	// (0x0001ff5d) mup_volume_pane_cp_ParamLimits

0x128b,	// (0x0001ff5d) mup_volume_pane_cp

0x5945,	// (0x00024617) mup2_visualizer_pane_g1_ParamLimits

0x5945,	// (0x00024617) mup2_visualizer_pane_g1

0xc3fb,	// (0x0002b0cd) mup2_visualizer_pane_g2_ParamLimits

0xc3fb,	// (0x0002b0cd) mup2_visualizer_pane_g2

0x595a,	// (0x0002462c) mup2_visualizer_pane_g3_ParamLimits

0x595a,	// (0x0002462c) mup2_visualizer_pane_g3

0x0002,

0xf674,	// (0x0002e346) mup2_visualizer_pane_g_ParamLimits

0xf674,	// (0x0002e346) mup2_visualizer_pane_g

0xb1cf,	// (0x00029ea1) aid_size_cell_fmradio

0x5439,	// (0x0002410b) aid_height_parent_landcape

0xa6ef,	// (0x000293c1) wml_content_pane_cp

0xa6f7,	// (0x000293c9) wml_tabs_pane

0xa700,	// (0x000293d2) popup_wml_miniature_window

0xa708,	// (0x000293da) scroll_pane_cp021

0xa71c,	// (0x000293ee) wml_content_pane_comp8

0xa077,	// (0x00028d49) bg_popup_sub_pane_cp05

0xc419,	// (0x0002b0eb) popup_wml_miniature_window_g1

0xc421,	// (0x0002b0f3) wml_miniature_view_pane

0x5968,	// (0x0002463a) aid_size_wml_view

0x5970,	// (0x00024642) wml_miniature_view_pane_g1

0x5979,	// (0x0002464b) wml_miniature_view_pane_g2

0x5982,	// (0x00024654) wml_miniature_view_pane_g3

0x598a,	// (0x0002465c) wml_miniature_view_pane_g4

0x5992,	// (0x00024664) wml_miniature_view_pane_g5

0x599a,	// (0x0002466c) wml_miniature_view_pane_g6

0x59a2,	// (0x00024674) wml_miniature_view_pane_g7

0x59aa,	// (0x0002467c) wml_miniature_view_pane_g8

0x0007,

0xf67b,	// (0x0002e34d) wml_miniature_view_pane_g

0xc3ef,	// (0x0002b0c1) background_graphic_ParamLimits

0xc3ef,	// (0x0002b0c1) background_graphic

0xc429,	// (0x0002b0fb) wml_tabs_2_pane

0xc432,	// (0x0002b104) wml_tabs_3_pane_ParamLimits

0xc432,	// (0x0002b104) wml_tabs_3_pane

0xc444,	// (0x0002b116) wml_tabs_4_pane_ParamLimits

0xc444,	// (0x0002b116) wml_tabs_4_pane

0xc45a,	// (0x0002b12c) wml_tabs_5_pane_ParamLimits

0xc45a,	// (0x0002b12c) wml_tabs_5_pane

0xc474,	// (0x0002b146) wml_tabs_pane_g2_ParamLimits

0xc474,	// (0x0002b146) wml_tabs_pane_g2

0xc488,	// (0x0002b15a) wml_tabs_pane_g3_ParamLimits

0xc488,	// (0x0002b15a) wml_tabs_pane_g3

0x59b2,	// (0x00024684) wml_tabs_2_active_pane_ParamLimits

0x59b2,	// (0x00024684) wml_tabs_2_active_pane

0x59c4,	// (0x00024696) wml_tabs_2_passive_pane_ParamLimits

0x59c4,	// (0x00024696) wml_tabs_2_passive_pane

0x59d6,	// (0x000246a8) wml_tabs_3_active_pane_cp_ParamLimits

0x59d6,	// (0x000246a8) wml_tabs_3_active_pane_cp

0x59e9,	// (0x000246bb) wml_tabs_3_passive_pane_ParamLimits

0x59e9,	// (0x000246bb) wml_tabs_3_passive_pane

0x59fa,	// (0x000246cc) wml_tabs_3_passive_pane_cp_ParamLimits

0x59fa,	// (0x000246cc) wml_tabs_3_passive_pane_cp

0x5a0f,	// (0x000246e1) tabs_4_active_pane

0x5a17,	// (0x000246e9) tabs_4_passive_pane

0x5a1f,	// (0x000246f1) tabs_4_passive_pane_cp

0x5a27,	// (0x000246f9) tabs_4_passive_pane_cp2

0x51fe,	// (0x00023ed0) aid_height_text

0x49d7,	// (0x000236a9) mup_volume_cont_pane_ParamLimits

0x49d7,	// (0x000236a9) mup_volume_cont_pane

0x23f6,	// (0x000210c8) aid_size_cell_pinb

0x2400,	// (0x000210d2) aid_size_list_pinb

0x5915,	// (0x000245e7) mup2_volume_cont_pane_ParamLimits

0x5915,	// (0x000245e7) mup2_volume_cont_pane

0x1277,	// (0x0001ff49) mup2_volume_cont_pane_g1_ParamLimits

0x1277,	// (0x0001ff49) mup2_volume_cont_pane_g1

0x2070,	// (0x00020d42) aid_size_cell_touch_ParamLimits

0x2070,	// (0x00020d42) aid_size_cell_touch

0x22e0,	// (0x00020fb2) touch_pane_ParamLimits

0x22e0,	// (0x00020fb2) touch_pane

0x9c03,	// (0x000288d5) main_rss2_pane

0xc4a5,	// (0x0002b177) listscroll_rss2_pane

0xc4ae,	// (0x0002b180) rss2_navigation_pane

0xc4b6,	// (0x0002b188) list_rss2_pane

0xad59,	// (0x00029a2b) scroll_pane_cp22

0xc4be,	// (0x0002b190) rss2_navigation_pane_g1

0xc4c7,	// (0x0002b199) rss2_navigation_pane_g2

0xc4cf,	// (0x0002b1a1) rss2_navigation_pane_g3

0x0002,

0xf68c,	// (0x0002e35e) rss2_navigation_pane_g

0xc4d7,	// (0x0002b1a9) rss2_navigation_pane_t1

0x5a31,	// (0x00024703) rss2_list_single_pane_ParamLimits

0x5a31,	// (0x00024703) rss2_list_single_pane

0xc4e5,	// (0x0002b1b7) rss2_list_single_pane_t2

0xc4f3,	// (0x0002b1c5) rss2_list_single_pane_t3_ParamLimits

0xc4f3,	// (0x0002b1c5) rss2_list_single_pane_t3

0xc510,	// (0x0002b1e2) rss2_list_single_pane_t4

0x41c8,	// (0x00022e9a) smil_status_pane_g1

0xa610,	// (0x000292e2) main_image2_pane_ParamLimits

0xa610,	// (0x000292e2) main_image2_pane

0x10da,	// (0x0001fdac) main_camera2_pane_g9_ParamLimits

0x10da,	// (0x0001fdac) main_camera2_pane_g9

0x112e,	// (0x0001fe00) main_camera2_pane_t5_ParamLimits

0x112e,	// (0x0001fe00) main_camera2_pane_t5

0x1140,	// (0x0001fe12) main_camera2_pane_t6_ParamLimits

0x1140,	// (0x0001fe12) main_camera2_pane_t6

0x5a54,	// (0x00024726) main_image2_pane_g1_ParamLimits

0x5a54,	// (0x00024726) main_image2_pane_g1

0x4f9b,	// (0x00023c6d) smil2_video_pane_ParamLimits

0x4f9b,	// (0x00023c6d) smil2_video_pane

0x9c21,	// (0x000288f3) aid_zoom_text_primary_cp

0x9c5a,	// (0x0002892c) popup_preview_fixed_window

0xa658,	// (0x0002932a) im_reading_pane_g1

0x1024,	// (0x0001fcf6) cams2_bc_adjust_pane_cp_ParamLimits

0x1024,	// (0x0001fcf6) cams2_bc_adjust_pane_cp

0x116b,	// (0x0001fe3d) cams2_bc_adjust_pane_ParamLimits

0x116b,	// (0x0001fe3d) cams2_bc_adjust_pane

0xd51e,	// (0x0002c1f0) cams2_bc_adjust_pane_g1

0x12b0,	// (0x0001ff82) cams2_slider_pane

0x12b9,	// (0x0001ff8b) cams2_slider_pane_g1

0x12c2,	// (0x0001ff94) cams2_slider_pane_g2

0x0006,

0xf693,	// (0x0002e365) cams2_slider_pane_g

0x0ad6,	// (0x0001f7a8) calc_display_pane_ParamLimits

0x0af4,	// (0x0001f7c6) calc_paper_pane_ParamLimits

0x0b10,	// (0x0001f7e2) grid_calc_pane_ParamLimits

0x0f51,	// (0x0001fc23) popup_clock_digital_window_t1_ParamLimits

0xb16c,	// (0x00029e3e) main_image_pane_t1

0x0abc,	// (0x0001f78e) aid_size_cell_calc_ParamLimits

0x0abc,	// (0x0001f78e) aid_size_cell_calc

0x546b,	// (0x0002413d) popup_blid_sat_info2_window_ParamLimits

0x546b,	// (0x0002413d) popup_blid_sat_info2_window

0xc526,	// (0x0002b1f8) aid_size_cell_blid

0xc52e,	// (0x0002b200) bg_popup_window_pane_cp07

0xc551,	// (0x0002b223) grid_popup_blid_pane

0xc55b,	// (0x0002b22d) heading_pane_cp05_ParamLimits

0xc55b,	// (0x0002b22d) heading_pane_cp05

0xc625,	// (0x0002b2f7) cell_popup_blid_pane_ParamLimits

0xc625,	// (0x0002b2f7) cell_popup_blid_pane

0xc64f,	// (0x0002b321) cell_popup_blid_pane_g1

0xc657,	// (0x0002b329) cell_popup_blid_pane_t1

0x58db,	// (0x000245ad) mup2_indicator_pane_ParamLimits

0x58db,	// (0x000245ad) mup2_indicator_pane

0xa54d,	// (0x0002921f) mup2_visualizer_osc_pane

0xc407,	// (0x0002b0d9) mup2_visualizer_spec_pane_ParamLimits

0xc407,	// (0x0002b0d9) mup2_visualizer_spec_pane

0x5a60,	// (0x00024732) mup2_spec_half_pane

0x5a69,	// (0x0002473b) mup2_spec_half_pane_cp

0x5a73,	// (0x00024745) mup2_spec_bar_pane_ParamLimits

0x5a73,	// (0x00024745) mup2_spec_bar_pane

0xc39c,	// (0x0002b06e) mup2_spec_bar_pane_g1

0xc3a6,	// (0x0002b078) mup2_spec_bar_pane_g2

0x0001,

0xf606,	// (0x0002e2d8) mup2_spec_bar_pane_g

0x5a92,	// (0x00024764) mup2_osc_middle_pane

0xc3b8,	// (0x0002b08a) mup2_visualizer_osc_pane_g1

0x9c84,	// (0x00028956) popup_number_entry_window_t1_ParamLimits

0x9c97,	// (0x00028969) popup_number_entry_window_t2_ParamLimits

0x9ca9,	// (0x0002897b) popup_number_entry_window_t3_ParamLimits

0x2337,	// (0x00021009) popup_number_entry_window_t5_ParamLimits

0x2337,	// (0x00021009) popup_number_entry_window_t5

0xf0ca,	// (0x0002dd9c) popup_number_entry_window_t_ParamLimits

0x9cbb,	// (0x0002898d) text_title_cp2_ParamLimits

0x0f90,	// (0x0001fc62) aid_hotspot_pointer_text2_pane

0x0fe6,	// (0x0001fcb8) main_viewer_pane_g9_ParamLimits

0x0fe6,	// (0x0001fcb8) main_viewer_pane_g9

0xa891,	// (0x00029563) cale_month_pane_t1_ParamLimits

0xa8b7,	// (0x00029589) bg_cale_pane_ParamLimits

0xa8cf,	// (0x000295a1) list_cale_pane_ParamLimits

0xa8e0,	// (0x000295b2) listscroll_cale_day_pane_t1

0xa8f2,	// (0x000295c4) scroll_pane_cp09_ParamLimits

0x4a16,	// (0x000236e8) main_mup_eq_pane_t1_ParamLimits

0x4a16,	// (0x000236e8) main_mup_eq_pane_t1

0x4a32,	// (0x00023704) main_mup_eq_pane_t2_ParamLimits

0x4a32,	// (0x00023704) main_mup_eq_pane_t2

0x4a4e,	// (0x00023720) main_mup_eq_pane_t3_ParamLimits

0x4a4e,	// (0x00023720) main_mup_eq_pane_t3

0x4a68,	// (0x0002373a) main_mup_eq_pane_t4_ParamLimits

0x4a68,	// (0x0002373a) main_mup_eq_pane_t4

0x4a82,	// (0x00023754) main_mup_eq_pane_t5_ParamLimits

0x4a82,	// (0x00023754) main_mup_eq_pane_t5

0x4a9c,	// (0x0002376e) main_mup_eq_pane_t6_ParamLimits

0x4a9c,	// (0x0002376e) main_mup_eq_pane_t6

0x4ab2,	// (0x00023784) main_mup_eq_pane_t7_ParamLimits

0x4ab2,	// (0x00023784) main_mup_eq_pane_t7

0x4ac8,	// (0x0002379a) main_mup_eq_pane_t8_ParamLimits

0x4ac8,	// (0x0002379a) main_mup_eq_pane_t8

0x4ade,	// (0x000237b0) main_mup_eq_pane_t9_ParamLimits

0x4ade,	// (0x000237b0) main_mup_eq_pane_t9

0x4afa,	// (0x000237cc) main_mup_eq_pane_t10_ParamLimits

0x4afa,	// (0x000237cc) main_mup_eq_pane_t10

0x0009,

0xf455,	// (0x0002e127) main_mup_eq_pane_t_ParamLimits

0xf455,	// (0x0002e127) main_mup_eq_pane_t

0x4bbf,	// (0x00023891) mup_equalizer_pane_cp5_ParamLimits

0x4bd7,	// (0x000238a9) mup_equalizer_pane_cp6_ParamLimits

0x4bef,	// (0x000238c1) mup_equalizer_pane_cp7_ParamLimits

0x9c03,	// (0x000288d5) main_gallery_pane

0xc3c1,	// (0x0002b093) smil2_volume_pane

0xc3c9,	// (0x0002b09b) smil_status_volume_pane_g1_ParamLimits

0xc3dc,	// (0x0002b0ae) smil_status_volume_pane_g2_ParamLimits

0x0ff2,	// (0x0001fcc4) smil_status_volume_pane_g3_ParamLimits

0xf60b,	// (0x0002e2dd) smil_status_volume_pane_g_ParamLimits

0xc52e,	// (0x0002b200) bg_popup_window_pane_cp07_ParamLimits

0xc53c,	// (0x0002b20e) blid_firmament_pane

0x5a9b,	// (0x0002476d) aid_size_cell_gallery_ParamLimits

0x5a9b,	// (0x0002476d) aid_size_cell_gallery

0x5aa9,	// (0x0002477b) grid_gallery_pane_ParamLimits

0x5aa9,	// (0x0002477b) grid_gallery_pane

0x5ab9,	// (0x0002478b) cell_gallery_pane_ParamLimits

0x5ab9,	// (0x0002478b) cell_gallery_pane

0xc665,	// (0x0002b337) bg_cell_gallery_focus_pane_ParamLimits

0xc665,	// (0x0002b337) bg_cell_gallery_focus_pane

0xc677,	// (0x0002b349) cell_gallery_pane_g1_ParamLimits

0xc677,	// (0x0002b349) cell_gallery_pane_g1

0x5aff,	// (0x000247d1) cell_gallery_pane_g2_ParamLimits

0x5aff,	// (0x000247d1) cell_gallery_pane_g2

0x5b0c,	// (0x000247de) cell_gallery_pane_g3_ParamLimits

0x5b0c,	// (0x000247de) cell_gallery_pane_g3

0xc683,	// (0x0002b355) cell_gallery_pane_g4_ParamLimits

0xc683,	// (0x0002b355) cell_gallery_pane_g4

0x0003,

0xf6b9,	// (0x0002e38b) cell_gallery_pane_g_ParamLimits

0xf6b9,	// (0x0002e38b) cell_gallery_pane_g

0xc68f,	// (0x0002b361) bg_cell_gallery_focus_pane_g1

0xc697,	// (0x0002b369) bg_cell_gallery_focus_pane_g2

0xc69f,	// (0x0002b371) bg_cell_gallery_focus_pane_g3

0xc6a7,	// (0x0002b379) bg_cell_gallery_focus_pane_g4

0xc6af,	// (0x0002b381) bg_cell_gallery_focus_pane_g5

0xc6b7,	// (0x0002b389) bg_cell_gallery_focus_pane_g6

0xc6bf,	// (0x0002b391) bg_cell_gallery_focus_pane_g7

0xc6c7,	// (0x0002b399) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6c2,	// (0x0002e394) bg_cell_gallery_focus_pane_g

0xc6cf,	// (0x0002b3a1) aid_firma_cardinal

0xc6e3,	// (0x0002b3b5) blid_firmament_pane_t1

0xc6fa,	// (0x0002b3cc) blid_firmament_pane_t2

0xc711,	// (0x0002b3e3) blid_firmament_pane_t3

0xc728,	// (0x0002b3fa) blid_firmament_pane_t4

0x0003,

0xf6d3,	// (0x0002e3a5) blid_firmament_pane_t

0xc73f,	// (0x0002b411) blid_sat_info_pane

0xc74f,	// (0x0002b421) blid_sat_info_pane_g1

0xc74f,	// (0x0002b421) blid_sat_info_pane_g2

0x0001,

0xf6dc,	// (0x0002e3ae) blid_sat_info_pane_g

0xc759,	// (0x0002b42b) blid_sat_info_pane_t1

0xc767,	// (0x0002b439) smil2_volume_content_pane

0xc770,	// (0x0002b442) smil2_volume_pane_g1

0xc778,	// (0x0002b44a) smil2_volume_content_pane_g1

0xc781,	// (0x0002b453) smil2_volume_content_pane_g2

0xc78a,	// (0x0002b45c) smil2_volume_content_pane_g3

0xc793,	// (0x0002b465) smil2_volume_content_pane_g4

0xc79c,	// (0x0002b46e) smil2_volume_content_pane_g5

0xc7a5,	// (0x0002b477) smil2_volume_content_pane_g6

0xc7ae,	// (0x0002b480) smil2_volume_content_pane_g7

0xc7b7,	// (0x0002b489) smil2_volume_content_pane_g8

0xc7c0,	// (0x0002b492) smil2_volume_content_pane_g9

0xc7c9,	// (0x0002b49b) smil2_volume_content_pane_g10

0x0009,

0xf6e1,	// (0x0002e3b3) smil2_volume_content_pane_g

0x2a81,	// (0x00021753) cale_week_day_heading_pane_t1_ParamLimits

0x2ac9,	// (0x0002179b) cale_week_day_heading_pane_t2_ParamLimits

0x2b16,	// (0x000217e8) cale_week_day_heading_pane_t3_ParamLimits

0x2b63,	// (0x00021835) cale_week_day_heading_pane_t4_ParamLimits

0x2bb0,	// (0x00021882) cale_week_day_heading_pane_t5_ParamLimits

0x2bfd,	// (0x000218cf) cale_week_day_heading_pane_t6_ParamLimits

0x2c4a,	// (0x0002191c) cale_week_day_heading_pane_t7_ParamLimits

0xf1d1,	// (0x0002dea3) cale_week_day_heading_pane_t_ParamLimits

0xa4f2,	// (0x000291c4) bg_cale_side_pane_ParamLimits

0x0c75,	// (0x0001f947) cale_week_time_pane_t1_ParamLimits

0x0cb9,	// (0x0001f98b) cale_week_time_pane_t2_ParamLimits

0x0cfd,	// (0x0001f9cf) cale_week_time_pane_t3_ParamLimits

0x0d41,	// (0x0001fa13) cale_week_time_pane_t4_ParamLimits

0x0d85,	// (0x0001fa57) cale_week_time_pane_t5_ParamLimits

0x0dc9,	// (0x0001fa9b) cale_week_time_pane_t6_ParamLimits

0x0e0d,	// (0x0001fadf) cale_week_time_pane_t7_ParamLimits

0x0e59,	// (0x0001fb2b) cale_week_time_pane_t8_ParamLimits

0xf1e0,	// (0x0002deb2) cale_week_time_pane_t_ParamLimits

0x2c92,	// (0x00021964) cell_cale_week_pane_g2_ParamLimits

0xa4f2,	// (0x000291c4) bg_cale_side_pane_cp01_ParamLimits

0x3fd1,	// (0x00022ca3) cale_month_week_pane_t1_ParamLimits

0x3fea,	// (0x00022cbc) cale_month_week_pane_t2_ParamLimits

0x4003,	// (0x00022cd5) cale_month_week_pane_t3_ParamLimits

0x401c,	// (0x00022cee) cale_month_week_pane_t4_ParamLimits

0x4035,	// (0x00022d07) cale_month_week_pane_t5_ParamLimits

0x4050,	// (0x00022d22) cale_month_week_pane_t6_ParamLimits

0xf2b5,	// (0x0002df87) cale_month_week_pane_t_ParamLimits

0x0eb1,	// (0x0001fb83) cell_cale_month_pane_g1_ParamLimits

0x9c03,	// (0x000288d5) main_cale_event_viewer_pane

0x9c03,	// (0x000288d5) listscroll_cale_event_viewer_pane

0xc7d2,	// (0x0002b4a4) list_cale_ev_pane

0xc7da,	// (0x0002b4ac) scroll_pane_cp023

0x5b19,	// (0x000247eb) field_cale_ev_pane_ParamLimits

0x5b19,	// (0x000247eb) field_cale_ev_pane

0xc7e6,	// (0x0002b4b8) field_cale_ev_content_pane_ParamLimits

0xc7e6,	// (0x0002b4b8) field_cale_ev_content_pane

0xc7f2,	// (0x0002b4c4) field_cale_ev_pane_g1_ParamLimits

0xc7f2,	// (0x0002b4c4) field_cale_ev_pane_g1

0xc7fe,	// (0x0002b4d0) field_cale_ev_pane_g2_ParamLimits

0xc7fe,	// (0x0002b4d0) field_cale_ev_pane_g2

0xc816,	// (0x0002b4e8) field_cale_ev_pane_g3_ParamLimits

0xc816,	// (0x0002b4e8) field_cale_ev_pane_g3

0x0002,

0xf6f6,	// (0x0002e3c8) field_cale_ev_pane_g_ParamLimits

0xf6f6,	// (0x0002e3c8) field_cale_ev_pane_g

0xc82e,	// (0x0002b500) field_cale_ev_pane_t1_ParamLimits

0xc82e,	// (0x0002b500) field_cale_ev_pane_t1

0x5b3d,	// (0x0002480f) field_cale_ev_content_pane_t1_ParamLimits

0x5b3d,	// (0x0002480f) field_cale_ev_content_pane_t1

0xb00a,	// (0x00029cdc) bg_button_pane_cp01

0x26e1,	// (0x000213b3) listscroll_cale_week_pane_ParamLimits

0x26f3,	// (0x000213c5) popup_toolbar_window_cp01

0xa4be,	// (0x00029190) listscroll_cale_week_pane_t1_ParamLimits

0x26e1,	// (0x000213b3) listscroll_cale_day_pane_ParamLimits

0x26f3,	// (0x000213c5) popup_toolbar_window_cp02

0xa8e0,	// (0x000295b2) listscroll_cale_day_pane_t1_ParamLimits

0x26e1,	// (0x000213b3) main_cale_month_pane_ParamLimits

0x554f,	// (0x00024221) popup_toolbar_window_cp03_ParamLimits

0x554f,	// (0x00024221) popup_toolbar_window_cp03

0x4eab,	// (0x00023b7d) main_image_pane_g2_ParamLimits

0x4eab,	// (0x00023b7d) main_image_pane_g2

0x4eb7,	// (0x00023b89) main_image_pane_g3_ParamLimits

0x4eb7,	// (0x00023b89) main_image_pane_g3

0x0002,

0xf4e7,	// (0x0002e1b9) main_image_pane_g_ParamLimits

0xf4e7,	// (0x0002e1b9) main_image_pane_g

0xb16c,	// (0x00029e3e) main_image_pane_t1_ParamLimits

0x4ec3,	// (0x00023b95) main_image_pane_t2_ParamLimits

0x4ec3,	// (0x00023b95) main_image_pane_t2

0x4ed5,	// (0x00023ba7) main_image_pane_t3_ParamLimits

0x4ed5,	// (0x00023ba7) main_image_pane_t3

0x4ee7,	// (0x00023bb9) main_image_pane_t4_ParamLimits

0x4ee7,	// (0x00023bb9) main_image_pane_t4

0x0003,

0xf4ee,	// (0x0002e1c0) main_image_pane_t_ParamLimits

0xf4ee,	// (0x0002e1c0) main_image_pane_t

0x4ef9,	// (0x00023bcb) popup_image_details_window_cp01

0x4f03,	// (0x00023bd5) popup_toobar_trans_pane_cp01_ParamLimits

0x4f03,	// (0x00023bd5) popup_toobar_trans_pane_cp01

0x54c0,	// (0x00024192) popup_image_details_window_ParamLimits

0x54c0,	// (0x00024192) popup_image_details_window

0xc320,	// (0x0002aff2) popup_image_focus_window

0x1016,	// (0x0001fce8) camera2_autofocus_pane_ParamLimits

0x1016,	// (0x0001fce8) camera2_autofocus_pane

0x9c03,	// (0x000288d5) bg_popup_sub_pane_cp06

0xc845,	// (0x0002b517) popup_image_focus_window_g1

0xc84d,	// (0x0002b51f) popup_image_focus_window_g2

0xc855,	// (0x0002b527) popup_image_focus_window_g3

0xc85d,	// (0x0002b52f) popup_image_focus_window_g4

0x0003,

0xf6fd,	// (0x0002e3cf) popup_image_focus_window_g

0xc865,	// (0x0002b537) popup_image_focus_window_t1

0xc873,	// (0x0002b545) popup_image_focus_window_t2

0xc883,	// (0x0002b555) popup_image_focus_window_t3

0x0002,

0xf706,	// (0x0002e3d8) popup_image_focus_window_t

0xc891,	// (0x0002b563) camera2_autofocus_pane_g1

0xa610,	// (0x000292e2) bg_tb_trans_pane_cp01

0xc89f,	// (0x0002b571) popup_image_details_window_g1

0xc8b2,	// (0x0002b584) popup_image_details_window_g2

0x0002,

0xf718,	// (0x0002e3ea) popup_image_details_window_g

0xc8db,	// (0x0002b5ad) popup_image_details_window_t1

0xc8ed,	// (0x0002b5bf) popup_image_details_window_t2

0xc906,	// (0x0002b5d8) popup_image_details_window_t3

0xc91a,	// (0x0002b5ec) popup_image_details_window_t4

0xc935,	// (0x0002b607) popup_image_details_window_t5

0x0004,

0xf71f,	// (0x0002e3f1) popup_image_details_window_t

0xa383,	// (0x00029055) bg_calc_paper_pane_ParamLimits

0x0b3c,	// (0x0001f80e) grid_highlight_pane_cp013

0x0b46,	// (0x0001f818) list_calc_pane_ParamLimits

0x0b58,	// (0x0001f82a) scroll_pane_cp024

0xa397,	// (0x00029069) bg_calc_display_pane_ParamLimits

0x0b60,	// (0x0001f832) calc_display_pane_t1_ParamLimits

0x0b75,	// (0x0001f847) calc_display_pane_t2_ParamLimits

0x0b8a,	// (0x0001f85c) calc_display_pane_t3_ParamLimits

0xf151,	// (0x0002de23) calc_display_pane_t_ParamLimits

0x0bf5,	// (0x0001f8c7) cell_calc_pane_g2

0x0001,

0xf16e,	// (0x0002de40) cell_calc_pane_g

0x0bfe,	// (0x0001f8d0) cell_calc_pane_t1

0xa3f6,	// (0x000290c8) grid_highlight_pane_cp02_ParamLimits

0xa40c,	// (0x000290de) toolbar_button_pane_cp01_ParamLimits

0xa40c,	// (0x000290de) toolbar_button_pane_cp01

0xb1b1,	// (0x00029e83) temp_image_control_pane_ParamLimits

0xb1b1,	// (0x00029e83) temp_image_control_pane

0xa610,	// (0x000292e2) main_mp3_pane

0xc94f,	// (0x0002b621) temp_image_control_pane_g1_ParamLimits

0xc94f,	// (0x0002b621) temp_image_control_pane_g1

0xc95d,	// (0x0002b62f) temp_image_control_pane_g2_ParamLimits

0xc95d,	// (0x0002b62f) temp_image_control_pane_g2

0xc96f,	// (0x0002b641) temp_image_control_pane_g3_ParamLimits

0xc96f,	// (0x0002b641) temp_image_control_pane_g3

0x5b88,	// (0x0002485a) temp_image_control_pane_g4_ParamLimits

0x5b88,	// (0x0002485a) temp_image_control_pane_g4

0x0003,

0xf72a,	// (0x0002e3fc) temp_image_control_pane_g_ParamLimits

0xf72a,	// (0x0002e3fc) temp_image_control_pane_g

0xc94f,	// (0x0002b621) main_mp3_pane_g1

0x5b99,	// (0x0002486b) main_mp3_pane_g2

0x0007,

0xf733,	// (0x0002e405) main_mp3_pane_g

0xc9b2,	// (0x0002b684) main_mp3_pane_t1

0xa555,	// (0x00029227) main_camera_pane_g8_ParamLimits

0xa555,	// (0x00029227) main_camera_pane_g8

0x2f25,	// (0x00021bf7) main_video_pane_g7_ParamLimits

0x2f25,	// (0x00021bf7) main_video_pane_g7

0x1159,	// (0x0001fe2b) main_camera2_pane_t7_ParamLimits

0x1159,	// (0x0001fe2b) main_camera2_pane_t7

0xa6af,	// (0x00029381) scroll_pane_cp025_ParamLimits

0xa6af,	// (0x00029381) scroll_pane_cp025

0xa6c3,	// (0x00029395) scroll_pane_cp026_ParamLimits

0xa6c3,	// (0x00029395) scroll_pane_cp026

0xa6d2,	// (0x000293a4) wml_content_pane_ParamLimits

0x9c03,	// (0x000288d5) main_touch_calib_pane

0x5c3d,	// (0x0002490f) main_touch_calib_pane_g1

0x5c49,	// (0x0002491b) main_touch_calib_pane_g2

0x5c55,	// (0x00024927) main_touch_calib_pane_g3

0x5c61,	// (0x00024933) main_touch_calib_pane_g4

0x0003,

0xf751,	// (0x0002e423) main_touch_calib_pane_g

0x5c6d,	// (0x0002493f) main_touch_calib_pane_t1

0x5c84,	// (0x00024956) main_touch_calib_pane_t2

0x0004,

0xf75a,	// (0x0002e42c) main_touch_calib_pane_t

0xadd4,	// (0x00029aa6) mup_progress_pane_cp02

0xadf3,	// (0x00029ac5) navi_pane_g1

0xae55,	// (0x00029b27) navi_pane_mp_t3

0xa610,	// (0x000292e2) main_mp3_pane_ParamLimits

0x5591,	// (0x00024263) navi_pane_ParamLimits

0xc94f,	// (0x0002b621) main_mp3_pane_g1_ParamLimits

0x5b99,	// (0x0002486b) main_mp3_pane_g2_ParamLimits

0x5ba5,	// (0x00024877) main_mp3_pane_g3_ParamLimits

0x5ba5,	// (0x00024877) main_mp3_pane_g3

0x5bb1,	// (0x00024883) main_mp3_pane_g4_ParamLimits

0x5bb1,	// (0x00024883) main_mp3_pane_g4

0xc97f,	// (0x0002b651) main_mp3_pane_g5_ParamLimits

0xc97f,	// (0x0002b651) main_mp3_pane_g5

0xc98d,	// (0x0002b65f) main_mp3_pane_g6_ParamLimits

0xc98d,	// (0x0002b65f) main_mp3_pane_g6

0xc99a,	// (0x0002b66c) main_mp3_pane_g7_ParamLimits

0xc99a,	// (0x0002b66c) main_mp3_pane_g7

0xc9a6,	// (0x0002b678) main_mp3_pane_g8_ParamLimits

0xc9a6,	// (0x0002b678) main_mp3_pane_g8

0xf733,	// (0x0002e405) main_mp3_pane_g_ParamLimits

0x5bbd,	// (0x0002488f) main_mp3_pane_t2

0x5bcd,	// (0x0002489f) main_mp3_pane_t3

0xc9c0,	// (0x0002b692) main_mp3_pane_t4

0xc9ce,	// (0x0002b6a0) main_mp3_pane_t5

0x0005,

0xf744,	// (0x0002e416) main_mp3_pane_t

0xc9dc,	// (0x0002b6ae) mup_progress_pane_cp01

0x9c21,	// (0x000288f3) aid_zoom_text_secondary2

0xc7d2,	// (0x0002b4a4) list_cale_ev2_pane

0xc7da,	// (0x0002b4ac) scroll_pane_cp023_ParamLimits

0xd0a0,	// (0x0002bd72) field_cale_ev2_pane_ParamLimits

0xd0a0,	// (0x0002bd72) field_cale_ev2_pane

0x5cdf,	// (0x000249b1) field_cale_ev2_pane_g1_ParamLimits

0x5cdf,	// (0x000249b1) field_cale_ev2_pane_g1

0x5ceb,	// (0x000249bd) field_cale_ev2_pane_g2_ParamLimits

0x5ceb,	// (0x000249bd) field_cale_ev2_pane_g2

0x5d03,	// (0x000249d5) field_cale_ev2_pane_g3_ParamLimits

0x5d03,	// (0x000249d5) field_cale_ev2_pane_g3

0x0003,

0xf765,	// (0x0002e437) field_cale_ev2_pane_g_ParamLimits

0xf765,	// (0x0002e437) field_cale_ev2_pane_g

0x5d1b,	// (0x000249ed) field_cale_ev2_pane_t1_ParamLimits

0x5d1b,	// (0x000249ed) field_cale_ev2_pane_t1

0x5d32,	// (0x00024a04) field_cale_ev2_pane_t2_ParamLimits

0x5d32,	// (0x00024a04) field_cale_ev2_pane_t2

0x0001,

0xf76e,	// (0x0002e440) field_cale_ev2_pane_t_ParamLimits

0xf76e,	// (0x0002e440) field_cale_ev2_pane_t

0x4d8a,	// (0x00023a5c) main_postcard_pane_g5_ParamLimits

0x4d8a,	// (0x00023a5c) main_postcard_pane_g5

0x4d98,	// (0x00023a6a) main_postcard_pane_g6_ParamLimits

0x4d98,	// (0x00023a6a) main_postcard_pane_g6

0x2d63,	// (0x00021a35) camera2_autofocus_pane_cp_ParamLimits

0x2d63,	// (0x00021a35) camera2_autofocus_pane_cp

0xa610,	// (0x000292e2) main_mup3_pane

0x5d67,	// (0x00024a39) main_mup3_pane_g1_ParamLimits

0x5d67,	// (0x00024a39) main_mup3_pane_g1

0x5d88,	// (0x00024a5a) main_mup3_pane_g2_ParamLimits

0x5d88,	// (0x00024a5a) main_mup3_pane_g2

0x5e02,	// (0x00024ad4) main_mup3_pane_g3_ParamLimits

0x5e02,	// (0x00024ad4) main_mup3_pane_g3

0x5e47,	// (0x00024b19) main_mup3_pane_g4_ParamLimits

0x5e47,	// (0x00024b19) main_mup3_pane_g4

0x5e8a,	// (0x00024b5c) main_mup3_pane_g5_ParamLimits

0x5e8a,	// (0x00024b5c) main_mup3_pane_g5

0x5ecf,	// (0x00024ba1) main_mup3_pane_g6_ParamLimits

0x5ecf,	// (0x00024ba1) main_mup3_pane_g6

0xc9f0,	// (0x0002b6c2) main_mup3_pane_g7_ParamLimits

0xc9f0,	// (0x0002b6c2) main_mup3_pane_g7

0x0007,

0xf77e,	// (0x0002e450) main_mup3_pane_g_ParamLimits

0xf77e,	// (0x0002e450) main_mup3_pane_g

0x5f45,	// (0x00024c17) main_mup3_pane_t1_ParamLimits

0x5f45,	// (0x00024c17) main_mup3_pane_t1

0x5fae,	// (0x00024c80) main_mup3_pane_t2_ParamLimits

0x5fae,	// (0x00024c80) main_mup3_pane_t2

0x6077,	// (0x00024d49) main_mup3_pane_t4_ParamLimits

0x6077,	// (0x00024d49) main_mup3_pane_t4

0x60cb,	// (0x00024d9d) main_mup3_pane_t5_ParamLimits

0x60cb,	// (0x00024d9d) main_mup3_pane_t5

0x6179,	// (0x00024e4b) main_mup3_pane_t6_ParamLimits

0x6179,	// (0x00024e4b) main_mup3_pane_t6

0x0005,

0xf78f,	// (0x0002e461) main_mup3_pane_t_ParamLimits

0xf78f,	// (0x0002e461) main_mup3_pane_t

0x6225,	// (0x00024ef7) mup3_progress_pane_ParamLimits

0x6225,	// (0x00024ef7) mup3_progress_pane

0x629f,	// (0x00024f71) popup_mup3_control_window_ParamLimits

0x629f,	// (0x00024f71) popup_mup3_control_window

0xc9fe,	// (0x0002b6d0) popup_mup3_text_window

0x62bc,	// (0x00024f8e) mup3_progress_pane_t1

0x62db,	// (0x00024fad) mup3_progress_pane_t2

0xca06,	// (0x0002b6d8) mup3_progress_pane_t3

0x0002,

0xf79c,	// (0x0002e46e) mup3_progress_pane_t

0xca23,	// (0x0002b6f5) mup_progress_pane_cp03

0x9c03,	// (0x000288d5) bg_tb_trans_pane_cp04

0x62fa,	// (0x00024fcc) mup3_volume_pane

0x6302,	// (0x00024fd4) popup_mup3_control_window_g1

0xd0bb,	// (0x0002bd8d) mup3_volume_pane_g1

0xd0c4,	// (0x0002bd96) mup3_volume_pane_g2

0xd0cd,	// (0x0002bd9f) mup3_volume_pane_g3

0x0002,

0xf7a3,	// (0x0002e475) mup3_volume_pane_g

0x9c03,	// (0x000288d5) bg_tb_trans_pane_cp03

0xca33,	// (0x0002b705) popup_mup3_text_window_g1

0xca3b,	// (0x0002b70d) popup_mup3_text_window_t1

0xa3df,	// (0x000290b1) list_calc_item_pane_g1_ParamLimits

0xc49c,	// (0x0002b16e) mup_volume_pane_cp_g1

0x5c9d,	// (0x0002496f) main_touch_calib_pane_t3

0x5cb3,	// (0x00024985) main_touch_calib_pane_t4

0x5cc9,	// (0x0002499b) main_touch_calib_pane_t5

0x9c0d,	// (0x000288df) aid_cell_size_toolbar2

0x9c15,	// (0x000288e7) aid_popup3_width_pane

0x9c21,	// (0x000288f3) aid_zoom_text_msg_primary

0x2d40,	// (0x00021a12) vorec_t7

0xa3a3,	// (0x00029075) bg_calc_paper_pane_g1_ParamLimits

0xa3af,	// (0x00029081) bg_calc_paper_pane_g2_ParamLimits

0xa3bb,	// (0x0002908d) bg_calc_paper_pane_g3_ParamLimits

0xa3c7,	// (0x00029099) bg_calc_paper_pane_g4_ParamLimits

0xa3d3,	// (0x000290a5) bg_calc_paper_pane_g5_ParamLimits

0x25b2,	// (0x00021284) bg_calc_paper_pane_g6_ParamLimits

0x25c3,	// (0x00021295) bg_calc_paper_pane_g7_ParamLimits

0x25d4,	// (0x000212a6) bg_calc_paper_pane_g8_ParamLimits

0xf158,	// (0x0002de2a) bg_calc_paper_pane_g_ParamLimits

0x25e7,	// (0x000212b9) calc_bg_paper_pane_g9_ParamLimits

0x2e54,	// (0x00021b26) image_qvga_pane_ParamLimits

0x2e54,	// (0x00021b26) image_qvga_pane

0xa2d2,	// (0x00028fa4) bg_popup_sub_pane_cp04_ParamLimits

0xb0e8,	// (0x00029dba) popup_mup_playback_window_g1_ParamLimits

0xb0f4,	// (0x00029dc6) popup_mup_playback_window_t1_ParamLimits

0xb109,	// (0x00029ddb) popup_mup_playback_window_t2_ParamLimits

0xf4e2,	// (0x0002e1b4) popup_mup_playback_window_t_ParamLimits

0x57d9,	// (0x000244ab) main_mup2_pane_g3_ParamLimits

0x57d9,	// (0x000244ab) main_mup2_pane_g3

0x3217,	// (0x00021ee9) popup_toolbar_window_cp04

0xb504,	// (0x0002a1d6) popup_call2_audio_second_window_g3_ParamLimits

0xb504,	// (0x0002a1d6) popup_call2_audio_second_window_g3

0xb90e,	// (0x0002a5e0) popup_call2_audio_first_window_g4_ParamLimits

0xb90e,	// (0x0002a5e0) popup_call2_audio_first_window_g4

0xbf8d,	// (0x0002ac5f) popup_call2_audio_in_window_g4_ParamLimits

0xbf8d,	// (0x0002ac5f) popup_call2_audio_in_window_g4

0x4e9e,	// (0x00023b70) aid_area_sk_bg_cut_ParamLimits

0x4e9e,	// (0x00023b70) aid_area_sk_bg_cut

0xb11e,	// (0x00029df0) aid_area_sk_bg_cut_2_ParamLimits

0xb11e,	// (0x00029df0) aid_area_sk_bg_cut_2

0x5aef,	// (0x000247c1) aid_placing_details_win

0x5af7,	// (0x000247c9) aid_placing_details_win_2

0xc891,	// (0x0002b563) camera2_autofocus_pane_g1_ParamLimits

0x2276,	// (0x00020f48) popup_fixed_preview_cale_window_ParamLimits

0x2276,	// (0x00020f48) popup_fixed_preview_cale_window

0xae9c,	// (0x00029b6e) navi_slider_pane_g3

0xaea5,	// (0x00029b77) navi_slider_pane_g4

0xaeae,	// (0x00029b80) navi_slider_pane_g5

0xae9c,	// (0x00029b6e) navi_slider_pane_g6

0x0f77,	// (0x0001fc49) navi_slider_pane_g7

0xafcf,	// (0x00029ca1) mup_scale_pane_g3

0xafd8,	// (0x00029caa) mup_scale_pane_g4

0xafe1,	// (0x00029cb3) mup_scale_pane_g5

0x4c07,	// (0x000238d9) mup_scale_pane_g6

0x4c10,	// (0x000238e2) mup_scale_pane_g7

0xae9c,	// (0x00029b6e) cams2_slider_pane_g3

0xc51e,	// (0x0002b1f0) cams2_slider_pane_g4

0x12cb,	// (0x0001ff9d) cams2_slider_pane_g5

0xae9c,	// (0x00029b6e) cams2_slider_pane_g6

0x12d3,	// (0x0001ffa5) cams2_slider_pane_g7

0xc74f,	// (0x0002b421) camera2_autofocus_pane_cp_g1

0xc2f2,	// (0x0002afc4) bg_popup_preview_window_pane_cp02_ParamLimits

0xc2f2,	// (0x0002afc4) bg_popup_preview_window_pane_cp02

0xca49,	// (0x0002b71b) list_fp_cale_pane_ParamLimits

0xca49,	// (0x0002b71b) list_fp_cale_pane

0xca55,	// (0x0002b727) popup_fixed_preview_cale_window_t1_ParamLimits

0xca55,	// (0x0002b727) popup_fixed_preview_cale_window_t1

0x630b,	// (0x00024fdd) popup_fixed_preview_cale_window_t2_ParamLimits

0x630b,	// (0x00024fdd) popup_fixed_preview_cale_window_t2

0x6320,	// (0x00024ff2) popup_fixed_preview_cale_window_t3_ParamLimits

0x6320,	// (0x00024ff2) popup_fixed_preview_cale_window_t3

0x0002,

0xf7aa,	// (0x0002e47c) popup_fixed_preview_cale_window_t_ParamLimits

0xf7aa,	// (0x0002e47c) popup_fixed_preview_cale_window_t

0x6335,	// (0x00025007) list_single_fp_cale_pane_ParamLimits

0x6335,	// (0x00025007) list_single_fp_cale_pane

0xca73,	// (0x0002b745) list_single_fp_cale_pane_g1_ParamLimits

0xca73,	// (0x0002b745) list_single_fp_cale_pane_g1

0xca7f,	// (0x0002b751) list_single_fp_cale_pane_g2_ParamLimits

0xca7f,	// (0x0002b751) list_single_fp_cale_pane_g2

0x0002,

0xf7b1,	// (0x0002e483) list_single_fp_cale_pane_g_ParamLimits

0xf7b1,	// (0x0002e483) list_single_fp_cale_pane_g

0xca98,	// (0x0002b76a) list_single_fp_cale_pane_t1_ParamLimits

0xca98,	// (0x0002b76a) list_single_fp_cale_pane_t1

0xcaaa,	// (0x0002b77c) list_single_fp_cale_pane_t2_ParamLimits

0xcaaa,	// (0x0002b77c) list_single_fp_cale_pane_t2

0x0001,

0xf7b8,	// (0x0002e48a) list_single_fp_cale_pane_t_ParamLimits

0xf7b8,	// (0x0002e48a) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0x9c03,	// (0x000288d5) main_dialer_pane

0x6345,	// (0x00025017) aid_cell_size_keypad

0x634f,	// (0x00025021) dialer_ne_pane

0x6359,	// (0x0002502b) grid_dialer_command_1_pane

0x6361,	// (0x00025033) grid_dialer_command_2_pane

0x6369,	// (0x0002503b) grid_dialer_keypad_pane

0x637d,	// (0x0002504f) bg_popup_call_pane_cp06_ParamLimits

0x637d,	// (0x0002504f) bg_popup_call_pane_cp06

0x6389,	// (0x0002505b) dialer_ne_clear_pane_ParamLimits

0x6389,	// (0x0002505b) dialer_ne_clear_pane

0xcadd,	// (0x0002b7af) dialer_ne_pane_g1

0xcae5,	// (0x0002b7b7) dialer_ne_pane_t1_ParamLimits

0xcae5,	// (0x0002b7b7) dialer_ne_pane_t1

0x6395,	// (0x00025067) dialer_ne_pane_t2_ParamLimits

0x6395,	// (0x00025067) dialer_ne_pane_t2

0x63b2,	// (0x00025084) dialer_ne_pane_t3_ParamLimits

0x63b2,	// (0x00025084) dialer_ne_pane_t3

0x0002,

0xf7bd,	// (0x0002e48f) dialer_ne_pane_t_ParamLimits

0xf7bd,	// (0x0002e48f) dialer_ne_pane_t

0x63d6,	// (0x000250a8) dialer_ne_pane_t3_copy1_ParamLimits

0x63d6,	// (0x000250a8) dialer_ne_pane_t3_copy1

0x63fa,	// (0x000250cc) cell_dialer_keypad_pane_ParamLimits

0x63fa,	// (0x000250cc) cell_dialer_keypad_pane

0x6411,	// (0x000250e3) cell_dialer_command_1_pane_ParamLimits

0x6411,	// (0x000250e3) cell_dialer_command_1_pane

0x6427,	// (0x000250f9) cell_dialer_command_2_pane_ParamLimits

0x6427,	// (0x000250f9) cell_dialer_command_2_pane

0xcaf7,	// (0x0002b7c9) bg_button_pane_cp02_ParamLimits

0xcaf7,	// (0x0002b7c9) bg_button_pane_cp02

0x6436,	// (0x00025108) cell_dialer_keypad_pane_g1_ParamLimits

0x6436,	// (0x00025108) cell_dialer_keypad_pane_g1

0xcaf7,	// (0x0002b7c9) bg_button_pane_cp03_ParamLimits

0xcaf7,	// (0x0002b7c9) bg_button_pane_cp03

0x644b,	// (0x0002511d) cell_dialer_command_1_pane_g1_ParamLimits

0x644b,	// (0x0002511d) cell_dialer_command_1_pane_g1

0xcb03,	// (0x0002b7d5) bg_button_pane_cp04

0x645f,	// (0x00025131) cell_dialer_command_2_pane_g1

0xa54d,	// (0x0002921f) bg_button_pane_cp06

0xcb0b,	// (0x0002b7dd) dialer_ne_clear_pane_g1

0x46d1,	// (0x000233a3) navi_pane_g2

0x46ff,	// (0x000233d1) navi_pane_g3

0x0002,

0xf3e5,	// (0x0002e0b7) navi_pane_g

0x472a,	// (0x000233fc) navi_pane_mv_g2

0x4751,	// (0x00023423) navi_pane_mv_g5

0x4759,	// (0x0002342b) navi_pane_mv_t1

0xa397,	// (0x00029069) main_clock2_pane

0x649d,	// (0x0002516f) main_clock2_list_pane_ParamLimits

0x649d,	// (0x0002516f) main_clock2_list_pane

0x64c7,	// (0x00025199) main_clock2_pane_t1_ParamLimits

0x64c7,	// (0x00025199) main_clock2_pane_t1

0x64e9,	// (0x000251bb) main_clock2_pane_t2_ParamLimits

0x64e9,	// (0x000251bb) main_clock2_pane_t2

0x0004,

0xf7c9,	// (0x0002e49b) main_clock2_pane_t_ParamLimits

0xf7c9,	// (0x0002e49b) main_clock2_pane_t

0x6546,	// (0x00025218) popup_clock_analogue_window_cp03_ParamLimits

0x6546,	// (0x00025218) popup_clock_analogue_window_cp03

0x6566,	// (0x00025238) popup_clock_digital_window_cp02_ParamLimits

0x6566,	// (0x00025238) popup_clock_digital_window_cp02

0x65d7,	// (0x000252a9) main_clock2_list_single_pane_ParamLimits

0x65d7,	// (0x000252a9) main_clock2_list_single_pane

0xa54d,	// (0x0002921f) list_highlight_pane_cp05

0xcb47,	// (0x0002b819) main_clock2_list_single_pane_t1

0x3217,	// (0x00021ee9) popup_toolbar_window_cp04_ParamLimits

0x5b58,	// (0x0002482a) camera2_autofocus_pane_g2_ParamLimits

0x5b58,	// (0x0002482a) camera2_autofocus_pane_g2

0x5b64,	// (0x00024836) camera2_autofocus_pane_g3_ParamLimits

0x5b64,	// (0x00024836) camera2_autofocus_pane_g3

0x5b70,	// (0x00024842) camera2_autofocus_pane_g4_ParamLimits

0x5b70,	// (0x00024842) camera2_autofocus_pane_g4

0x5b7c,	// (0x0002484e) camera2_autofocus_pane_g5_ParamLimits

0x5b7c,	// (0x0002484e) camera2_autofocus_pane_g5

0x0004,

0xf70d,	// (0x0002e3df) camera2_autofocus_pane_g_ParamLimits

0xf70d,	// (0x0002e3df) camera2_autofocus_pane_g

0x5d47,	// (0x00024a19) camera2_autofocus_pane_cp_g2

0x5d4f,	// (0x00024a21) camera2_autofocus_pane_cp_g3

0x5d57,	// (0x00024a29) camera2_autofocus_pane_cp_g4

0x5d5f,	// (0x00024a31) camera2_autofocus_pane_cp_g5

0x0004,

0xf773,	// (0x0002e445) camera2_autofocus_pane_cp_g

0x6375,	// (0x00025047) popup_dialer_spcha_window

0x9c03,	// (0x000288d5) bg_popup_sub_pane_cp07

0xcb55,	// (0x0002b827) list_spcha_pane

0xcb5d,	// (0x0002b82f) list_single_spcha_pane_ParamLimits

0xcb5d,	// (0x0002b82f) list_single_spcha_pane

0x9c03,	// (0x000288d5) list_highlight_pane_cp06

0xcb6e,	// (0x0002b840) list_single_spcha_pane_t1

0xbd37,	// (0x0002aa09) popup_call2_audio_out_window_g4_ParamLimits

0xbd37,	// (0x0002aa09) popup_call2_audio_out_window_g4

0x9c03,	// (0x000288d5) main_imed2_pane

0xc32a,	// (0x0002affc) popup_imed_adjust2_window

0x54ce,	// (0x000241a0) popup_imed_trans_window_ParamLimits

0x54ce,	// (0x000241a0) popup_imed_trans_window

0xc587,	// (0x0002b259) popup_blid_sat_info2_window_t1

0xc595,	// (0x0002b267) popup_blid_sat_info2_window_t2

0x000a,

0xf6a2,	// (0x0002e374) popup_blid_sat_info2_window_t

0x6609,	// (0x000252db) aid_size_cell_colour_35

0x6623,	// (0x000252f5) aid_size_cell_colour_112

0x663a,	// (0x0002530c) aid_size_cell_effect

0xa610,	// (0x000292e2) bg_tb_trans_pane_cp02

0xaf89,	// (0x00029c5b) heading_imed_pane

0x6654,	// (0x00025326) listscroll_imed_pane

0xcb7c,	// (0x0002b84e) heading_imed_pane_g1

0xcb84,	// (0x0002b856) heading_imed_pane_t1

0xcb92,	// (0x0002b864) grid_imed_colour_35_pane_ParamLimits

0xcb92,	// (0x0002b864) grid_imed_colour_35_pane

0x6660,	// (0x00025332) grid_imed_effect_pane

0xcbae,	// (0x0002b880) list_imed_aspect_pane

0x6670,	// (0x00025342) scroll_pane_cp027_ParamLimits

0x6670,	// (0x00025342) scroll_pane_cp027

0x667c,	// (0x0002534e) cell_imed_effect_pane_ParamLimits

0x667c,	// (0x0002534e) cell_imed_effect_pane

0xcbb6,	// (0x0002b888) cell_imed_colour_pane_ParamLimits

0xcbb6,	// (0x0002b888) cell_imed_colour_pane

0xcc00,	// (0x0002b8d2) cell_imed_colour_pane_g1_ParamLimits

0xcc00,	// (0x0002b8d2) cell_imed_colour_pane_g1

0xcc11,	// (0x0002b8e3) hgihlgiht_grid_pane_cp016_ParamLimits

0xcc11,	// (0x0002b8e3) hgihlgiht_grid_pane_cp016

0x6698,	// (0x0002536a) cell_imed_effect_pane_g1

0x66a0,	// (0x00025372) grid_highlight_pane_cp017

0xcc22,	// (0x0002b8f4) list_imed_single_pane_ParamLimits

0xcc22,	// (0x0002b8f4) list_imed_single_pane

0x9c03,	// (0x000288d5) list_highlight_pane_cp07

0xcc36,	// (0x0002b908) list_imed_aspect_pane_comp1_t1

0xc2fe,	// (0x0002afd0) bg_tb_trans_pane_cp05

0xcc58,	// (0x0002b92a) popup_imed_adjust2_window_g1

0xcc7f,	// (0x0002b951) popup_imed_adjust2_window_t1

0xcc97,	// (0x0002b969) slider_imed_adjust_pane

0xccab,	// (0x0002b97d) slider_imed_adjust_pane_g1

0xccbb,	// (0x0002b98d) slider_imed_adjust_pane_g2

0xcccb,	// (0x0002b99d) slider_imed_adjust_pane_g3

0xccdc,	// (0x0002b9ae) slider_imed_adjust_pane_g4

0x0003,

0xf7e6,	// (0x0002e4b8) slider_imed_adjust_pane_g

0x66a9,	// (0x0002537b) aid_size_cell_clipart2

0x66b5,	// (0x00025387) grid_imed_clipart_pane

0xcced,	// (0x0002b9bf) scroll_pane_cp031

0x66bf,	// (0x00025391) cell_imed_clipart_pane_ParamLimits

0x66bf,	// (0x00025391) cell_imed_clipart_pane

0x66dd,	// (0x000253af) cell_imed_clipart_pane_g1

0x9c03,	// (0x000288d5) grid_highlight_pane_cp014

0x64a9,	// (0x0002517b) main_clock2_pane_g1_ParamLimits

0x64a9,	// (0x0002517b) main_clock2_pane_g1

0x6582,	// (0x00025254) aid_call2_pane_cp10

0x6594,	// (0x00025266) aid_call_pane_cp10

0xadc8,	// (0x00029a9a) popup_clock_analogue_window_cp10_g1

0xadc8,	// (0x00029a9a) popup_clock_analogue_window_cp10_g2

0x65a6,	// (0x00025278) popup_clock_analogue_window_cp10_g3

0x65a6,	// (0x00025278) popup_clock_analogue_window_cp10_g4

0xadc8,	// (0x00029a9a) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7d4,	// (0x0002e4a6) popup_clock_analogue_window_cp10_g

0x65b8,	// (0x0002528a) popup_clock_analogue_window_cp10_t1

0x12dc,	// (0x0001ffae) clock_digital_number_pane_cp10_ParamLimits

0x12dc,	// (0x0001ffae) clock_digital_number_pane_cp10

0x12f4,	// (0x0001ffc6) clock_digital_number_pane_cp11_ParamLimits

0x12f4,	// (0x0001ffc6) clock_digital_number_pane_cp11

0x130c,	// (0x0001ffde) clock_digital_number_pane_cp12_ParamLimits

0x130c,	// (0x0001ffde) clock_digital_number_pane_cp12

0x1324,	// (0x0001fff6) clock_digital_number_pane_cp13_ParamLimits

0x1324,	// (0x0001fff6) clock_digital_number_pane_cp13

0x133c,	// (0x0002000e) clock_digital_separator_pane_cp10_ParamLimits

0x133c,	// (0x0002000e) clock_digital_separator_pane_cp10

0x65e9,	// (0x000252bb) popup_clock_digital_window_cp02_t1_ParamLimits

0x65e9,	// (0x000252bb) popup_clock_digital_window_cp02_t1

0xa2ca,	// (0x00028f9c) clock_digital_number_pane_cp10_g1

0xa2ca,	// (0x00028f9c) clock_digital_number_pane_cp10_g2

0x0001,

0xf7ef,	// (0x0002e4c1) clock_digital_number_pane_cp10_g

0xa2ca,	// (0x00028f9c) clock_digital_separator_pane_cp10_g1

0xa2ca,	// (0x00028f9c) clock_digital_separator_pane_g2_cp10

0xae63,	// (0x00029b35) navi_pane_vded_g4

0xae6c,	// (0x00029b3e) navi_pane_vded_g5

0xae75,	// (0x00029b47) navi_pane_vded_t1

0x9c03,	// (0x000288d5) main_vded_pane

0x66e6,	// (0x000253b8) main_vded_pane_g1

0x66f2,	// (0x000253c4) main_vded_pane_g2

0x66fc,	// (0x000253ce) main_vded_pane_g3

0x0002,

0xf7f4,	// (0x0002e4c6) main_vded_pane_g

0x6706,	// (0x000253d8) main_vded_pane_t1

0x6714,	// (0x000253e6) main_vded_pane_t2

0x0001,

0xf7fb,	// (0x0002e4cd) main_vded_pane_t

0x6722,	// (0x000253f4) vded_slider_pane

0x672c,	// (0x000253fe) vded_video_pane

0xccf5,	// (0x0002b9c7) vded_video_pane_g1

0x6738,	// (0x0002540a) vded_video_pane_g2

0xc74f,	// (0x0002b421) vded_video_pane_g3

0x0002,

0xf800,	// (0x0002e4d2) vded_video_pane_g

0xccff,	// (0x0002b9d1) vded_slider_pane_g1

0xc49c,	// (0x0002b16e) vded_slider_pane_g2

0xcd08,	// (0x0002b9da) vded_slider_pane_g3

0xcd11,	// (0x0002b9e3) vded_slider_pane_g4

0xcd1a,	// (0x0002b9ec) vded_slider_pane_g5

0x0004,

0xf807,	// (0x0002e4d9) vded_slider_pane_g

0x6293,	// (0x00024f65) mup3_rocker_pane_ParamLimits

0x6293,	// (0x00024f65) mup3_rocker_pane

0x6741,	// (0x00025413) mup3_control_keys_pane_g1

0x6749,	// (0x0002541b) mup3_control_keys_pane_g2

0x6751,	// (0x00025423) mup3_control_keys_pane_g3

0x6759,	// (0x0002542b) mup3_control_keys_pane_g4

0x0003,

0xf812,	// (0x0002e4e4) mup3_control_keys_pane_g

0x2294,	// (0x00020f66) popup_toolbar2_fixed_window_cp01_ParamLimits

0x2294,	// (0x00020f66) popup_toolbar2_fixed_window_cp01

0x62af,	// (0x00024f81) popup_toolbar2_fixed_window_cp02_ParamLimits

0x62af,	// (0x00024f81) popup_toolbar2_fixed_window_cp02

0xb676,	// (0x0002a348) popup_call2_audio_second_window_t4_ParamLimits

0xb676,	// (0x0002a348) popup_call2_audio_second_window_t4

0xbba4,	// (0x0002a876) popup_call2_audio_first_window_t6_ParamLimits

0xbba4,	// (0x0002a876) popup_call2_audio_first_window_t6

0xbe3a,	// (0x0002ab0c) popup_call2_audio_out_window_t6_ParamLimits

0xbe3a,	// (0x0002ab0c) popup_call2_audio_out_window_t6

0x9c03,	// (0x000288d5) main_vitu_pane

0x6769,	// (0x0002543b) aid_size_cell_itu_ParamLimits

0x6769,	// (0x0002543b) aid_size_cell_itu

0x22c6,	// (0x00020f98) bg_popup_window_pane_cp08_ParamLimits

0x22c6,	// (0x00020f98) bg_popup_window_pane_cp08

0x6777,	// (0x00025449) field_vitu_entry_pane_ParamLimits

0x6777,	// (0x00025449) field_vitu_entry_pane

0x6786,	// (0x00025458) grid_vitu_function_pane_ParamLimits

0x6786,	// (0x00025458) grid_vitu_function_pane

0x6796,	// (0x00025468) grid_vitu_itu_pane_ParamLimits

0x6796,	// (0x00025468) grid_vitu_itu_pane

0x67a6,	// (0x00025478) cell_vitu_itu_pane_ParamLimits

0x67a6,	// (0x00025478) cell_vitu_itu_pane

0x67bd,	// (0x0002548f) cell_vitu_function_pane_ParamLimits

0x67bd,	// (0x0002548f) cell_vitu_function_pane

0xa610,	// (0x000292e2) bg_popup_sub_pane_cp08_ParamLimits

0xa610,	// (0x000292e2) bg_popup_sub_pane_cp08

0x67d1,	// (0x000254a3) field_vitu_entry_pane_t1_ParamLimits

0x67d1,	// (0x000254a3) field_vitu_entry_pane_t1

0xcd3b,	// (0x0002ba0d) field_vitu_entry_pane_t2_ParamLimits

0xcd3b,	// (0x0002ba0d) field_vitu_entry_pane_t2

0x0001,

0xf820,	// (0x0002e4f2) field_vitu_entry_pane_t_ParamLimits

0xf820,	// (0x0002e4f2) field_vitu_entry_pane_t

0xcd58,	// (0x0002ba2a) bg_button_pane_cp05_ParamLimits

0xcd58,	// (0x0002ba2a) bg_button_pane_cp05

0x67eb,	// (0x000254bd) cell_vitu_itu_pane_g1

0x6803,	// (0x000254d5) cell_vitu_itu_pane_t1_ParamLimits

0x6803,	// (0x000254d5) cell_vitu_itu_pane_t1

0x6815,	// (0x000254e7) cell_vitu_itu_pane_t2_ParamLimits

0x6815,	// (0x000254e7) cell_vitu_itu_pane_t2

0x0002,

0xf825,	// (0x0002e4f7) cell_vitu_itu_pane_t_ParamLimits

0xf825,	// (0x0002e4f7) cell_vitu_itu_pane_t

0xcd66,	// (0x0002ba38) bg_button_pane_cp07

0x6858,	// (0x0002552a) cell_vitu_function_pane_g1

0x0b34,	// (0x0001f806) main_calc_pane_g1

0x2098,	// (0x00020d6a) aid_visual_content_pane

0x9c03,	// (0x000288d5) main_vradio_pane

0x6861,	// (0x00025533) main_vradio_pane_g1_ParamLimits

0x6861,	// (0x00025533) main_vradio_pane_g1

0xcd70,	// (0x0002ba42) main_vradio_pane_g2_ParamLimits

0xcd70,	// (0x0002ba42) main_vradio_pane_g2

0x0001,

0xf82c,	// (0x0002e4fe) main_vradio_pane_g_ParamLimits

0xf82c,	// (0x0002e4fe) main_vradio_pane_g

0x686f,	// (0x00025541) main_vradio_pane_t1_ParamLimits

0x686f,	// (0x00025541) main_vradio_pane_t1

0x6881,	// (0x00025553) main_vradio_pane_t2_ParamLimits

0x6881,	// (0x00025553) main_vradio_pane_t2

0xcd7d,	// (0x0002ba4f) main_vradio_pane_t3_ParamLimits

0xcd7d,	// (0x0002ba4f) main_vradio_pane_t3

0x0002,

0xf831,	// (0x0002e503) main_vradio_pane_t_ParamLimits

0xf831,	// (0x0002e503) main_vradio_pane_t

0x6893,	// (0x00025565) vradio_rocker_control_pane_ParamLimits

0x6893,	// (0x00025565) vradio_rocker_control_pane

0x689f,	// (0x00025571) vradio_station_info_pane_ParamLimits

0x689f,	// (0x00025571) vradio_station_info_pane

0xcd91,	// (0x0002ba63) vradio_frequency_info_pane_ParamLimits

0xcd91,	// (0x0002ba63) vradio_frequency_info_pane

0xc74f,	// (0x0002b421) vradio_station_info_pane_g1

0xcda0,	// (0x0002ba72) vradio_station_info_pane_t1_ParamLimits

0xcda0,	// (0x0002ba72) vradio_station_info_pane_t1

0xcdc2,	// (0x0002ba94) vradio_station_info_pane_t2_ParamLimits

0xcdc2,	// (0x0002ba94) vradio_station_info_pane_t2

0x0001,

0xf838,	// (0x0002e50a) vradio_station_info_pane_t_ParamLimits

0xf838,	// (0x0002e50a) vradio_station_info_pane_t

0xcdd4,	// (0x0002baa6) vradio_tuning_pane

0xcddc,	// (0x0002baae) vradio_rocker_control_pane_g1

0xcde4,	// (0x0002bab6) vradio_rocker_control_pane_g2

0xcdec,	// (0x0002babe) vradio_rocker_control_pane_g3

0xcdf4,	// (0x0002bac6) vradio_rocker_control_pane_g4

0xcdfc,	// (0x0002bace) vradio_rocker_control_pane_g5

0x0004,

0xf83d,	// (0x0002e50f) vradio_rocker_control_pane_g

0x68ac,	// (0x0002557e) vradio_frequency_info_pane_g1

0xce04,	// (0x0002bad6) vradio_frequency_info_pane_t1_ParamLimits

0xce04,	// (0x0002bad6) vradio_frequency_info_pane_t1

0x68b6,	// (0x00025588) vradio_tuning_pane_g1

0x68c1,	// (0x00025593) vradio_tuning_pane_t1

0x9c31,	// (0x00028903) area_side_right_pane_ParamLimits

0x9c31,	// (0x00028903) area_side_right_pane

0xc2b9,	// (0x0002af8b) status_small_pane_g1

0xc2c1,	// (0x0002af93) status_small_pane_g2

0xc2ca,	// (0x0002af9c) status_small_pane_g3

0xc2d3,	// (0x0002afa5) status_small_pane_g4

0x0003,

0xf5f8,	// (0x0002e2ca) status_small_pane_g

0xc2dc,	// (0x0002afae) status_small_pane_t1

0x9c03,	// (0x000288d5) main_video3_pane

0xce18,	// (0x0002baea) cams_zoom_vslider_pane

0xce20,	// (0x0002baf2) image3_wide_pane_ParamLimits

0xce20,	// (0x0002baf2) image3_wide_pane

0xce3a,	// (0x0002bb0c) image3_wide_small_pane

0xce46,	// (0x0002bb18) main_video3_pane_g1_ParamLimits

0xce46,	// (0x0002bb18) main_video3_pane_g1

0xce62,	// (0x0002bb34) main_video3_pane_g2_ParamLimits

0xce62,	// (0x0002bb34) main_video3_pane_g2

0x0001,

0xf848,	// (0x0002e51a) main_video3_pane_g_ParamLimits

0xf848,	// (0x0002e51a) main_video3_pane_g

0xce7e,	// (0x0002bb50) main_video3_pane_t1_ParamLimits

0xce7e,	// (0x0002bb50) main_video3_pane_t1

0xcea9,	// (0x0002bb7b) main_video3_pane_t2_ParamLimits

0xcea9,	// (0x0002bb7b) main_video3_pane_t2

0xced6,	// (0x0002bba8) main_video3_pane_t3_ParamLimits

0xced6,	// (0x0002bba8) main_video3_pane_t3

0x0002,

0xf84d,	// (0x0002e51f) main_video3_pane_t_ParamLimits

0xf84d,	// (0x0002e51f) main_video3_pane_t

0xcf03,	// (0x0002bbd5) cams_zoom_vslider_pane_g1

0xcf0c,	// (0x0002bbde) cams_zoom_vslider_pane_g2

0x0001,

0xf854,	// (0x0002e526) cams_zoom_vslider_pane_g

0xcf14,	// (0x0002bbe6) small_slider_vertical_pane

0xc74f,	// (0x0002b421) small_slider_vertical_pane_g1

0xc74f,	// (0x0002b421) small_slider_vertical_pane_g2

0xcf1c,	// (0x0002bbee) small_slider_vertical_pane_g3

0x0002,

0xf859,	// (0x0002e52b) small_slider_vertical_pane_g

0x9c03,	// (0x000288d5) main_hwr_training_pane

0xcf25,	// (0x0002bbf7) hwr_training_instruct_pane_ParamLimits

0xcf25,	// (0x0002bbf7) hwr_training_instruct_pane

0x68d0,	// (0x000255a2) hwr_training_navi_pane_ParamLimits

0x68d0,	// (0x000255a2) hwr_training_navi_pane

0x68ea,	// (0x000255bc) hwr_training_write_pane_ParamLimits

0x68ea,	// (0x000255bc) hwr_training_write_pane

0x9c03,	// (0x000288d5) bg_frame_shadow_pane

0xcf5c,	// (0x0002bc2e) hwr_training_write_pane_g1

0xcf64,	// (0x0002bc36) hwr_training_write_pane_g2

0xcf6c,	// (0x0002bc3e) hwr_training_write_pane_g3

0xcf74,	// (0x0002bc46) hwr_training_write_pane_g4

0xcf7c,	// (0x0002bc4e) hwr_training_write_pane_g5

0xcf84,	// (0x0002bc56) hwr_training_write_pane_g6

0xcf8c,	// (0x0002bc5e) hwr_training_write_pane_g7

0x0006,

0xf860,	// (0x0002e532) hwr_training_write_pane_g

0x1354,	// (0x00020026) hwr_training_navi_pane_g1_ParamLimits

0x1354,	// (0x00020026) hwr_training_navi_pane_g1

0x1366,	// (0x00020038) hwr_training_navi_pane_g2_ParamLimits

0x1366,	// (0x00020038) hwr_training_navi_pane_g2

0x1378,	// (0x0002004a) hwr_training_navi_pane_g3_ParamLimits

0x1378,	// (0x0002004a) hwr_training_navi_pane_g3

0x1388,	// (0x0002005a) hwr_training_navi_pane_g4_ParamLimits

0x1388,	// (0x0002005a) hwr_training_navi_pane_g4

0x0004,

0xf86f,	// (0x0002e541) hwr_training_navi_pane_g_ParamLimits

0xf86f,	// (0x0002e541) hwr_training_navi_pane_g

0x13a2,	// (0x00020074) hwr_training_navi_pane_t1

0x6922,	// (0x000255f4) list_single_hwr_training_instruct_pane_ParamLimits

0x6922,	// (0x000255f4) list_single_hwr_training_instruct_pane

0xcf94,	// (0x0002bc66) list_single_hwr_training_instruct_pane_t1

0xc68f,	// (0x0002b361) bg_frame_shadow_pane_g1

0xcfa3,	// (0x0002bc75) bg_frame_shadow_pane_g2

0xcfab,	// (0x0002bc7d) bg_frame_shadow_pane_g3

0xcfb3,	// (0x0002bc85) bg_frame_shadow_pane_g4

0xcfbb,	// (0x0002bc8d) bg_frame_shadow_pane_g5

0xcfc3,	// (0x0002bc95) bg_frame_shadow_pane_g6

0xcfcb,	// (0x0002bc9d) bg_frame_shadow_pane_g7

0xa462,	// (0x00029134) bg_frame_shadow_pane_g8

0x0007,

0xf87a,	// (0x0002e54c) bg_frame_shadow_pane_g

0x9c03,	// (0x000288d5) main_video_tele_dialer_pane

0x13b0,	// (0x00020082) aid_size_cell_video_keypad_ParamLimits

0x13b0,	// (0x00020082) aid_size_cell_video_keypad

0x13c0,	// (0x00020092) grid_video_dialer_keypad_pane_ParamLimits

0x13c0,	// (0x00020092) grid_video_dialer_keypad_pane

0x13f2,	// (0x000200c4) video_down_pane_cp_ParamLimits

0x13f2,	// (0x000200c4) video_down_pane_cp

0x13fe,	// (0x000200d0) cell_video_dialer_keypad_pane_ParamLimits

0x13fe,	// (0x000200d0) cell_video_dialer_keypad_pane

0xcfd3,	// (0x0002bca5) bg_button_pane_cp08_ParamLimits

0xcfd3,	// (0x0002bca5) bg_button_pane_cp08

0x6957,	// (0x00025629) cell_video_dialer_keypad_pane_g1_ParamLimits

0x6957,	// (0x00025629) cell_video_dialer_keypad_pane_g1

0x6287,	// (0x00024f59) mup3_rocker2_pane_ParamLimits

0x6287,	// (0x00024f59) mup3_rocker2_pane

0xc74f,	// (0x0002b421) mup3_rocker2_pane_g1

0x5450,	// (0x00024122) main_dialer2_pane

0x9c03,	// (0x000288d5) main_mp4_pane

0x141d,	// (0x000200ef) main_mp4_pane_g1_ParamLimits

0x141d,	// (0x000200ef) main_mp4_pane_g1

0x142b,	// (0x000200fd) main_mp4_pane_g2_ParamLimits

0x142b,	// (0x000200fd) main_mp4_pane_g2

0x1439,	// (0x0002010b) main_mp4_pane_g3_ParamLimits

0x1439,	// (0x0002010b) main_mp4_pane_g3

0x148c,	// (0x0002015e) main_mp4_pane_g4_ParamLimits

0x148c,	// (0x0002015e) main_mp4_pane_g4

0x14b4,	// (0x00020186) main_mp4_pane_g5_ParamLimits

0x14b4,	// (0x00020186) main_mp4_pane_g5

0x0005,

0xf89a,	// (0x0002e56c) main_mp4_pane_g_ParamLimits

0xf89a,	// (0x0002e56c) main_mp4_pane_g

0x1504,	// (0x000201d6) main_mp4_pane_t1_ParamLimits

0x1504,	// (0x000201d6) main_mp4_pane_t1

0x1560,	// (0x00020232) main_mp4_pane_t2_ParamLimits

0x1560,	// (0x00020232) main_mp4_pane_t2

0xcfdf,	// (0x0002bcb1) main_mp4_pane_t3_ParamLimits

0xcfdf,	// (0x0002bcb1) main_mp4_pane_t3

0x15b2,	// (0x00020284) main_mp4_pane_t4_ParamLimits

0x15b2,	// (0x00020284) main_mp4_pane_t4

0x0003,

0xf8a7,	// (0x0002e579) main_mp4_pane_t_ParamLimits

0xf8a7,	// (0x0002e579) main_mp4_pane_t

0x15f2,	// (0x000202c4) mp4_progress_pane_ParamLimits

0x15f2,	// (0x000202c4) mp4_progress_pane

0x163c,	// (0x0002030e) mp4_rocker_pane_ParamLimits

0x163c,	// (0x0002030e) mp4_rocker_pane

0xd007,	// (0x0002bcd9) mp4_progress_pane_t1

0xd020,	// (0x0002bcf2) mp4_progress_pane_t2

0x0001,

0xf8b0,	// (0x0002e582) mp4_progress_pane_t

0xd039,	// (0x0002bd0b) mup_progress_pane_cp04

0xd526,	// (0x0002c1f8) mp4_rocker_pane_g1

0x165e,	// (0x00020330) aid_cell_size_keypad2_ParamLimits

0x165e,	// (0x00020330) aid_cell_size_keypad2

0x166e,	// (0x00020340) dialer2_ne_pane_ParamLimits

0x166e,	// (0x00020340) dialer2_ne_pane

0x167a,	// (0x0002034c) grid_dialer2_keypad_pane_ParamLimits

0x167a,	// (0x0002034c) grid_dialer2_keypad_pane

0xd0d6,	// (0x0002bda8) bg_popup_call_pane_cp07_ParamLimits

0xd0d6,	// (0x0002bda8) bg_popup_call_pane_cp07

0x698e,	// (0x00025660) dialer2_ne_pane_t1_ParamLimits

0x698e,	// (0x00025660) dialer2_ne_pane_t1

0x1688,	// (0x0002035a) cell_dialer2_keypad_pane_ParamLimits

0x1688,	// (0x0002035a) cell_dialer2_keypad_pane

0xd057,	// (0x0002bd29) bg_button_pane_pane_cp04_ParamLimits

0xd057,	// (0x0002bd29) bg_button_pane_pane_cp04

0x69b3,	// (0x00025685) cell_dialer2_keypad_pane_g1_ParamLimits

0x69b3,	// (0x00025685) cell_dialer2_keypad_pane_g1

0x30e9,	// (0x00021dbb) aid_placing_vt_set_content_ParamLimits

0x30e9,	// (0x00021dbb) aid_placing_vt_set_content

0x3111,	// (0x00021de3) aid_placing_vt_set_title_ParamLimits

0x3111,	// (0x00021de3) aid_placing_vt_set_title

0x9c03,	// (0x000288d5) main_image3_pane

0x16d1,	// (0x000203a3) area_side_right_pane_cp01_ParamLimits

0x16d1,	// (0x000203a3) area_side_right_pane_cp01

0x1700,	// (0x000203d2) main_image3_pane_g1_ParamLimits

0x1700,	// (0x000203d2) main_image3_pane_g1

0x170e,	// (0x000203e0) main_image3_pane_g2_ParamLimits

0x170e,	// (0x000203e0) main_image3_pane_g2

0x1727,	// (0x000203f9) main_image3_pane_g3_ParamLimits

0x1727,	// (0x000203f9) main_image3_pane_g3

0x1740,	// (0x00020412) main_image3_pane_g4_ParamLimits

0x1740,	// (0x00020412) main_image3_pane_g4

0x0003,

0xf8bf,	// (0x0002e591) main_image3_pane_g_ParamLimits

0xf8bf,	// (0x0002e591) main_image3_pane_g

0x1759,	// (0x0002042b) main_image3_pane_t1_ParamLimits

0x1759,	// (0x0002042b) main_image3_pane_t1

0x177e,	// (0x00020450) main_image3_pane_t2_ParamLimits

0x177e,	// (0x00020450) main_image3_pane_t2

0x179d,	// (0x0002046f) main_image3_pane_t3_ParamLimits

0x179d,	// (0x0002046f) main_image3_pane_t3

0x0003,

0xf8c8,	// (0x0002e59a) main_image3_pane_t_ParamLimits

0xf8c8,	// (0x0002e59a) main_image3_pane_t

0x22c6,	// (0x00020f98) grid_sctrl_middle_pane_cp01_ParamLimits

0x22c6,	// (0x00020f98) grid_sctrl_middle_pane_cp01

0x6a1b,	// (0x000256ed) cell_sctrl_middle_pane_cp01_ParamLimits

0x6a1b,	// (0x000256ed) cell_sctrl_middle_pane_cp01

0x6a2c,	// (0x000256fe) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x6a2c,	// (0x000256fe) cell_sctrl_middle_pane_cp01_g1

0x9c03,	// (0x000288d5) main_call4_pane

0x6a39,	// (0x0002570b) aid_size_button_call4_ParamLimits

0x6a39,	// (0x0002570b) aid_size_button_call4

0x6a6b,	// (0x0002573d) call4_windows_pane_ParamLimits

0x6a6b,	// (0x0002573d) call4_windows_pane

0x6a87,	// (0x00025759) grid_call4_button_pane_ParamLimits

0x6a87,	// (0x00025759) grid_call4_button_pane

0xd063,	// (0x0002bd35) call4_windows_conf_pane

0x6aab,	// (0x0002577d) popup_call4_audio_first_window_ParamLimits

0x6aab,	// (0x0002577d) popup_call4_audio_first_window

0x6ad7,	// (0x000257a9) popup_call4_audio_second_window_ParamLimits

0x6ad7,	// (0x000257a9) popup_call4_audio_second_window

0xd0e4,	// (0x0002bdb6) popup_call4_audio_wait_window_ParamLimits

0xd0e4,	// (0x0002bdb6) popup_call4_audio_wait_window

0x6aeb,	// (0x000257bd) cell_call4_button_pane_ParamLimits

0x6aeb,	// (0x000257bd) cell_call4_button_pane

0x6b0e,	// (0x000257e0) bg_button_pane_cp09_ParamLimits

0x6b0e,	// (0x000257e0) bg_button_pane_cp09

0x6b1a,	// (0x000257ec) cell_call4_button_pane_g1_ParamLimits

0x6b1a,	// (0x000257ec) cell_call4_button_pane_g1

0x6b27,	// (0x000257f9) cell_call4_button_pane_t1_ParamLimits

0x6b27,	// (0x000257f9) cell_call4_button_pane_t1

0xd12c,	// (0x0002bdfe) popup_call4_audio_conf_window_ParamLimits

0xd12c,	// (0x0002bdfe) popup_call4_audio_conf_window

0x62bc,	// (0x00024f8e) mup3_progress_pane_t1_ParamLimits

0x62db,	// (0x00024fad) mup3_progress_pane_t2_ParamLimits

0xca06,	// (0x0002b6d8) mup3_progress_pane_t3_ParamLimits

0xf79c,	// (0x0002e46e) mup3_progress_pane_t_ParamLimits

0xca23,	// (0x0002b6f5) mup_progress_pane_cp03_ParamLimits

0x6761,	// (0x00025433) mup3_control_keys_pane_g4_copy1

0x1620,	// (0x000202f2) mp4_rocker2_pane_ParamLimits

0x1620,	// (0x000202f2) mp4_rocker2_pane

0xd146,	// (0x0002be18) mp4_rocker2_pane_g1

0xd14e,	// (0x0002be20) mp4_rocker2_pane_g2

0x17fe,	// (0x000204d0) mp4_rocker2_pane_g3

0x1806,	// (0x000204d8) mp4_rocker2_pane_g4

0x180e,	// (0x000204e0) mp4_rocker2_pane_g5

0x0004,

0xf8d1,	// (0x0002e5a3) mp4_rocker2_pane_g

0x9c03,	// (0x000288d5) main_camera4_pane

0x9c03,	// (0x000288d5) main_video4_pane

0x13ce,	// (0x000200a0) main_video_tele_dialer_pane_t1_ParamLimits

0x13ce,	// (0x000200a0) main_video_tele_dialer_pane_t1

0x13e0,	// (0x000200b2) main_video_tele_dialer_pane_t2_ParamLimits

0x13e0,	// (0x000200b2) main_video_tele_dialer_pane_t2

0x0001,

0xf88b,	// (0x0002e55d) main_video_tele_dialer_pane_t_ParamLimits

0xf88b,	// (0x0002e55d) main_video_tele_dialer_pane_t

0x182e,	// (0x00020500) cam4_autofocus_pane_ParamLimits

0x182e,	// (0x00020500) cam4_autofocus_pane

0x1846,	// (0x00020518) cam4_image_uncrop_pane_ParamLimits

0x1846,	// (0x00020518) cam4_image_uncrop_pane

0x185f,	// (0x00020531) cam4_indicators_pane_ParamLimits

0x185f,	// (0x00020531) cam4_indicators_pane

0x187b,	// (0x0002054d) main_camera4_pane_g1_ParamLimits

0x187b,	// (0x0002054d) main_camera4_pane_g1

0x1887,	// (0x00020559) main_camera4_pane_g2_ParamLimits

0x1887,	// (0x00020559) main_camera4_pane_g2

0x1887,	// (0x00020559) main_camera4_pane_g3_ParamLimits

0x1887,	// (0x00020559) main_camera4_pane_g3

0x1893,	// (0x00020565) main_camera4_pane_g4_ParamLimits

0x1893,	// (0x00020565) main_camera4_pane_g4

0x189f,	// (0x00020571) main_camera4_pane_g5_ParamLimits

0x189f,	// (0x00020571) main_camera4_pane_g5

0x0005,

0xf8dc,	// (0x0002e5ae) main_camera4_pane_g_ParamLimits

0xf8dc,	// (0x0002e5ae) main_camera4_pane_g

0x18b9,	// (0x0002058b) main_camera4_pane_t1_ParamLimits

0x18b9,	// (0x0002058b) main_camera4_pane_t1

0x18dd,	// (0x000205af) bg_tb_trans_pane_cp06

0x18f3,	// (0x000205c5) cam4_indicators_pane_g1

0x1904,	// (0x000205d6) cam4_indicators_pane_g2

0x0002,

0xf8f7,	// (0x0002e5c9) cam4_indicators_pane_g

0x191c,	// (0x000205ee) cam4_indicators_pane_t1

0x1946,	// (0x00020618) main_video4_pane_g1_ParamLimits

0x1946,	// (0x00020618) main_video4_pane_g1

0x1952,	// (0x00020624) main_video4_pane_g2_ParamLimits

0x1952,	// (0x00020624) main_video4_pane_g2

0x195e,	// (0x00020630) main_video4_pane_g3_ParamLimits

0x195e,	// (0x00020630) main_video4_pane_g3

0x196a,	// (0x0002063c) main_video4_pane_g4_ParamLimits

0x196a,	// (0x0002063c) main_video4_pane_g4

0x0004,

0xf8fe,	// (0x0002e5d0) main_video4_pane_g_ParamLimits

0xf8fe,	// (0x0002e5d0) main_video4_pane_g

0x198c,	// (0x0002065e) vid4_indicators_pane_ParamLimits

0x198c,	// (0x0002065e) vid4_indicators_pane

0x19ab,	// (0x0002067d) video4_image_uncrop_cif_pane_ParamLimits

0x19ab,	// (0x0002067d) video4_image_uncrop_cif_pane

0x19ba,	// (0x0002068c) video4_image_uncrop_nhd_pane_ParamLimits

0x19ba,	// (0x0002068c) video4_image_uncrop_nhd_pane

0x1846,	// (0x00020518) video4_image_uncrop_vga_pane_ParamLimits

0x1846,	// (0x00020518) video4_image_uncrop_vga_pane

0x19c9,	// (0x0002069b) bg_tb_trans_pane_cp07

0x19e1,	// (0x000206b3) vid4_indicators_pane_g1

0x19f7,	// (0x000206c9) vid4_indicators_pane_g2

0x1a0b,	// (0x000206dd) vid4_indicators_pane_g3

0x0004,

0xf909,	// (0x0002e5db) vid4_indicators_pane_g

0x1a3c,	// (0x0002070e) vid4_indicators_pane_t1

0x6b5f,	// (0x00025831) cam4_autofocus_pane_g1

0x6b67,	// (0x00025839) cam4_autofocus_pane_g2

0x6b6f,	// (0x00025841) cam4_autofocus_pane_g3

0x0002,

0xf914,	// (0x0002e5e6) cam4_autofocus_pane_g

0x6b77,	// (0x00025849) cam4_autofocus_pane_g3_copy1

0x693b,	// (0x0002560d) video_down_pane_cp_t1

0x6949,	// (0x0002561b) video_down_pane_cp_t2

0x0001,

0xf890,	// (0x0002e562) video_down_pane_cp_t

0x22c6,	// (0x00020f98) popup_vitu2_window_ParamLimits

0x22c6,	// (0x00020f98) popup_vitu2_window

0x1a53,	// (0x00020725) aid_size_cell2_itu2_ParamLimits

0x1a53,	// (0x00020725) aid_size_cell2_itu2

0x1a75,	// (0x00020747) aid_size_cell_itu2_ParamLimits

0x1a75,	// (0x00020747) aid_size_cell_itu2

0x1abb,	// (0x0002078d) bg_popup_window_pane_cp09_ParamLimits

0x1abb,	// (0x0002078d) bg_popup_window_pane_cp09

0x1ac9,	// (0x0002079b) field_vitu2_entry_pane_ParamLimits

0x1ac9,	// (0x0002079b) field_vitu2_entry_pane

0x1ae9,	// (0x000207bb) grid_vitu2_function_pane_ParamLimits

0x1ae9,	// (0x000207bb) grid_vitu2_function_pane

0x1b2d,	// (0x000207ff) grid_vitu2_itu_pane_ParamLimits

0x1b2d,	// (0x000207ff) grid_vitu2_itu_pane

0x1ba9,	// (0x0002087b) cell_vitu2_itu_pane_ParamLimits

0x1ba9,	// (0x0002087b) cell_vitu2_itu_pane

0x1bc0,	// (0x00020892) cell_vitu2_function_pane_ParamLimits

0x1bc0,	// (0x00020892) cell_vitu2_function_pane

0xd156,	// (0x0002be28) bg_popup_call_pane_cp08_ParamLimits

0xd156,	// (0x0002be28) bg_popup_call_pane_cp08

0xd16d,	// (0x0002be3f) field_vitu2_entry_pane_g1

0xd179,	// (0x0002be4b) field_vitu2_entry_pane_g2

0x0002,

0xf91b,	// (0x0002e5ed) field_vitu2_entry_pane_g

0x6b7f,	// (0x00025851) field_vitu2_entry_pane_t1_ParamLimits

0x6b7f,	// (0x00025851) field_vitu2_entry_pane_t1

0xd193,	// (0x0002be65) field_vitu2_entry_pane_t2_ParamLimits

0xd193,	// (0x0002be65) field_vitu2_entry_pane_t2

0x0001,

0xf922,	// (0x0002e5f4) field_vitu2_entry_pane_t_ParamLimits

0xf922,	// (0x0002e5f4) field_vitu2_entry_pane_t

0x1c04,	// (0x000208d6) bg_button_pane_cp010_ParamLimits

0x1c04,	// (0x000208d6) bg_button_pane_cp010

0x1c12,	// (0x000208e4) cell_vitu2_itu_pane_g1

0x1c32,	// (0x00020904) cell_vitu2_itu_pane_t1_ParamLimits

0x1c32,	// (0x00020904) cell_vitu2_itu_pane_t1

0x1c7e,	// (0x00020950) cell_vitu2_itu_pane_t2_ParamLimits

0x1c7e,	// (0x00020950) cell_vitu2_itu_pane_t2

0x0002,

0xf92c,	// (0x0002e5fe) cell_vitu2_itu_pane_t_ParamLimits

0xf92c,	// (0x0002e5fe) cell_vitu2_itu_pane_t

0x19c9,	// (0x0002069b) bg_button_pane_cp011

0x1d46,	// (0x00020a18) cell_vitu2_function_pane_g1

0x9c03,	// (0x000288d5) main_myfav_hc_pane

0x17df,	// (0x000204b1) popup_image3_note_pane_ParamLimits

0x17df,	// (0x000204b1) popup_image3_note_pane

0x17ed,	// (0x000204bf) popup_image3_tool_bar_pane_ParamLimits

0x17ed,	// (0x000204bf) popup_image3_tool_bar_pane

0x1cf4,	// (0x000209c6) cell_vitu2_itu_pane_t3_ParamLimits

0x1cf4,	// (0x000209c6) cell_vitu2_itu_pane_t3

0x9c03,	// (0x000288d5) bg_popup_trans_pane

0xd1b8,	// (0x0002be8a) grid_image3_tool_bar_pane

0xd1c2,	// (0x0002be94) bg_popup_trans_pane_g1

0xa7b8,	// (0x0002948a) bg_popup_trans_pane_g2

0xd1ca,	// (0x0002be9c) bg_popup_trans_pane_g3

0xd1d2,	// (0x0002bea4) bg_popup_trans_pane_g4

0xd1da,	// (0x0002beac) bg_popup_trans_pane_g5

0xd1e2,	// (0x0002beb4) bg_popup_trans_pane_g6

0xd1ea,	// (0x0002bebc) bg_popup_trans_pane_g7

0xd1f2,	// (0x0002bec4) bg_popup_trans_pane_g8

0xa798,	// (0x0002946a) bg_popup_trans_pane_g9

0x0008,

0xf933,	// (0x0002e605) bg_popup_trans_pane_g

0xd1fa,	// (0x0002becc) cell_image3_tool_bar_pane_ParamLimits

0xd1fa,	// (0x0002becc) cell_image3_tool_bar_pane

0xc74f,	// (0x0002b421) cell_image3_tool_bar_pane_g1

0x9c03,	// (0x000288d5) bg_popup_trans_pane_cp1

0xd210,	// (0x0002bee2) popup_image3_note_pane_t1

0xd21e,	// (0x0002bef0) popup_image3_note_pane_t2

0xd22c,	// (0x0002befe) popup_image3_note_pane_t3

0x0002,

0xf946,	// (0x0002e618) popup_image3_note_pane_t

0xd23c,	// (0x0002bf0e) popup_image3_note_pane_t3_copy1

0x6bad,	// (0x0002587f) bg_myfav_hc_instruction_pane_ParamLimits

0x6bad,	// (0x0002587f) bg_myfav_hc_instruction_pane

0x6bc5,	// (0x00025897) cell_myfav_contact_pane_ParamLimits

0x6bc5,	// (0x00025897) cell_myfav_contact_pane

0x6bdf,	// (0x000258b1) cell_myfav_contact_pane_cp1_ParamLimits

0x6bdf,	// (0x000258b1) cell_myfav_contact_pane_cp1

0x6bf7,	// (0x000258c9) cell_myfav_contact_pane_cp2_ParamLimits

0x6bf7,	// (0x000258c9) cell_myfav_contact_pane_cp2

0x6c0f,	// (0x000258e1) cell_myfav_contact_pane_cp3_ParamLimits

0x6c0f,	// (0x000258e1) cell_myfav_contact_pane_cp3

0x6c26,	// (0x000258f8) cell_myfav_contact_pane_cp4_ParamLimits

0x6c26,	// (0x000258f8) cell_myfav_contact_pane_cp4

0x6c3c,	// (0x0002590e) cell_myfav_contact_pane_cp5_ParamLimits

0x6c3c,	// (0x0002590e) cell_myfav_contact_pane_cp5

0x6c50,	// (0x00025922) cell_myfav_contact_pane_cp6_ParamLimits

0x6c50,	// (0x00025922) cell_myfav_contact_pane_cp6

0x6c64,	// (0x00025936) cell_myfav_contact_pane_cp7_ParamLimits

0x6c64,	// (0x00025936) cell_myfav_contact_pane_cp7

0xd24a,	// (0x0002bf1c) listscroll_gen_pane_cp05

0x6c7c,	// (0x0002594e) main_myfav_hc_pane_g1_ParamLimits

0x6c7c,	// (0x0002594e) main_myfav_hc_pane_g1

0x6c96,	// (0x00025968) main_myfav_hc_pane_g2_ParamLimits

0x6c96,	// (0x00025968) main_myfav_hc_pane_g2

0x0002,

0xf94d,	// (0x0002e61f) main_myfav_hc_pane_g_ParamLimits

0xf94d,	// (0x0002e61f) main_myfav_hc_pane_g

0x6cc8,	// (0x0002599a) main_myfav_hc_pane_t1_ParamLimits

0x6cc8,	// (0x0002599a) main_myfav_hc_pane_t1

0xd253,	// (0x0002bf25) main_myfav_hc_pane_t2_ParamLimits

0xd253,	// (0x0002bf25) main_myfav_hc_pane_t2

0xd265,	// (0x0002bf37) main_myfav_hc_pane_t3_ParamLimits

0xd265,	// (0x0002bf37) main_myfav_hc_pane_t3

0x6cdf,	// (0x000259b1) main_myfav_hc_pane_t4_ParamLimits

0x6cdf,	// (0x000259b1) main_myfav_hc_pane_t4

0x0004,

0xf954,	// (0x0002e626) main_myfav_hc_pane_t_ParamLimits

0xf954,	// (0x0002e626) main_myfav_hc_pane_t

0xc74f,	// (0x0002b421) bg_myfav_hc_instruction_pane_g1

0xd277,	// (0x0002bf49) cell_myfav_contact_pane_g1_ParamLimits

0xd277,	// (0x0002bf49) cell_myfav_contact_pane_g1

0xd277,	// (0x0002bf49) cell_myfav_contact_pane_g2_ParamLimits

0xd277,	// (0x0002bf49) cell_myfav_contact_pane_g2

0xd283,	// (0x0002bf55) cell_myfav_contact_pane_g3_ParamLimits

0xd283,	// (0x0002bf55) cell_myfav_contact_pane_g3

0xc9f0,	// (0x0002b6c2) cell_myfav_contact_pane_g4_ParamLimits

0xc9f0,	// (0x0002b6c2) cell_myfav_contact_pane_g4

0xd290,	// (0x0002bf62) cell_myfav_contact_pane_g5_ParamLimits

0xd290,	// (0x0002bf62) cell_myfav_contact_pane_g5

0x0004,

0xf95f,	// (0x0002e631) cell_myfav_contact_pane_g_ParamLimits

0xf95f,	// (0x0002e631) cell_myfav_contact_pane_g

0x6cb0,	// (0x00025982) main_myfav_hc_pane_g3_ParamLimits

0x6cb0,	// (0x00025982) main_myfav_hc_pane_g3

0x21d8,	// (0x00020eaa) popup_adpt_find_window

0x6d09,	// (0x000259db) afind_page_pane_ParamLimits

0x6d09,	// (0x000259db) afind_page_pane

0x6d16,	// (0x000259e8) aid_size_cell_afind_ParamLimits

0x6d16,	// (0x000259e8) aid_size_cell_afind

0x6d30,	// (0x00025a02) bg_popup_sub_pane_cp09_ParamLimits

0x6d30,	// (0x00025a02) bg_popup_sub_pane_cp09

0x6d3d,	// (0x00025a0f) find_pane_cp01_ParamLimits

0x6d3d,	// (0x00025a0f) find_pane_cp01

0xd29c,	// (0x0002bf6e) grid_afind_control_pane_ParamLimits

0xd29c,	// (0x0002bf6e) grid_afind_control_pane

0x6d4a,	// (0x00025a1c) grid_afind_pane_ParamLimits

0x6d4a,	// (0x00025a1c) grid_afind_pane

0x6d66,	// (0x00025a38) cell_afind_pane_ParamLimits

0x6d66,	// (0x00025a38) cell_afind_pane

0xc74f,	// (0x0002b421) afind_page_pane_g1

0x6db0,	// (0x00025a82) afind_page_pane_g2

0x6db9,	// (0x00025a8b) afind_page_pane_g3

0x0002,

0xf96a,	// (0x0002e63c) afind_page_pane_g

0x6dc2,	// (0x00025a94) afind_page_pane_t1

0xd2b0,	// (0x0002bf82) cell_afind_grid_control_pane_ParamLimits

0xd2b0,	// (0x0002bf82) cell_afind_grid_control_pane

0xd057,	// (0x0002bd29) bg_button_pane_cp69_ParamLimits

0xd057,	// (0x0002bd29) bg_button_pane_cp69

0x6de2,	// (0x00025ab4) cell_afind_pane_g1_ParamLimits

0x6de2,	// (0x00025ab4) cell_afind_pane_g1

0x6def,	// (0x00025ac1) cell_afind_pane_t1_ParamLimits

0x6def,	// (0x00025ac1) cell_afind_pane_t1

0xa59f,	// (0x00029271) bg_button_pane_cp72

0xd2bf,	// (0x0002bf91) cell_afind_grid_control_pane_g1

0x4fcb,	// (0x00023c9d) aid_image_placing_area_ParamLimits

0x4fcb,	// (0x00023c9d) aid_image_placing_area

0xcd23,	// (0x0002b9f5) field_vitu_entry_pane_g1_ParamLimits

0xcd23,	// (0x0002b9f5) field_vitu_entry_pane_g1

0xcd2f,	// (0x0002ba01) field_vitu_entry_pane_g2_ParamLimits

0xcd2f,	// (0x0002ba01) field_vitu_entry_pane_g2

0x0001,

0xf81b,	// (0x0002e4ed) field_vitu_entry_pane_g_ParamLimits

0xf81b,	// (0x0002e4ed) field_vitu_entry_pane_g

0x67eb,	// (0x000254bd) cell_vitu_itu_pane_g1_ParamLimits

0x683b,	// (0x0002550d) cell_vitu_itu_pane_t3_ParamLimits

0x683b,	// (0x0002550d) cell_vitu_itu_pane_t3

0xd007,	// (0x0002bcd9) mp4_progress_pane_t1_ParamLimits

0xd020,	// (0x0002bcf2) mp4_progress_pane_t2_ParamLimits

0xf8b0,	// (0x0002e582) mp4_progress_pane_t_ParamLimits

0xd039,	// (0x0002bd0b) mup_progress_pane_cp04_ParamLimits

0x6cf3,	// (0x000259c5) main_myfav_hc_pane_t5_ParamLimits

0x6cf3,	// (0x000259c5) main_myfav_hc_pane_t5

0x9c29,	// (0x000288fb) aid_zoom_text_primary

0x21d8,	// (0x00020eaa) popup_adpt_find_window_ParamLimits

0xa610,	// (0x000292e2) main_cam_set_pane

0x186d,	// (0x0002053f) cam4_zoom_pane_ParamLimits

0x186d,	// (0x0002053f) cam4_zoom_pane

0x6e01,	// (0x00025ad3) main_cam_set_pane_g1_ParamLimits

0x6e01,	// (0x00025ad3) main_cam_set_pane_g1

0x6e0f,	// (0x00025ae1) main_cam_set_pane_g2_ParamLimits

0x6e0f,	// (0x00025ae1) main_cam_set_pane_g2

0x0001,

0xf971,	// (0x0002e643) main_cam_set_pane_g_ParamLimits

0xf971,	// (0x0002e643) main_cam_set_pane_g

0x6e1b,	// (0x00025aed) main_cam_set_pane_t1_ParamLimits

0x6e1b,	// (0x00025aed) main_cam_set_pane_t1

0x6e37,	// (0x00025b09) main_cset_listscroll_pane_ParamLimits

0x6e37,	// (0x00025b09) main_cset_listscroll_pane

0x6e66,	// (0x00025b38) main_cset_slider_pane_ParamLimits

0x6e66,	// (0x00025b38) main_cset_slider_pane

0xd2d0,	// (0x0002bfa2) main_cset_list_pane_ParamLimits

0xd2d0,	// (0x0002bfa2) main_cset_list_pane

0xd2e0,	// (0x0002bfb2) scroll_pane_cp028

0x6e87,	// (0x00025b59) aid_area_touch_slider

0x6ea3,	// (0x00025b75) cset_slider_pane

0x6ecd,	// (0x00025b9f) main_cset_slider_pane_g1

0x6ee2,	// (0x00025bb4) main_cset_slider_pane_g2

0x0011,

0xf976,	// (0x0002e648) main_cset_slider_pane_g

0xd319,	// (0x0002bfeb) main_cset_slider_pane_t1

0x6f9e,	// (0x00025c70) main_cset_slider_pane_t2

0x6fb8,	// (0x00025c8a) main_cset_slider_pane_t3

0x6fd2,	// (0x00025ca4) main_cset_slider_pane_t4

0x6fec,	// (0x00025cbe) main_cset_slider_pane_t5

0x7006,	// (0x00025cd8) main_cset_slider_pane_t6

0x701b,	// (0x00025ced) main_cset_slider_pane_t7

0x000e,

0xf99b,	// (0x0002e66d) main_cset_slider_pane_t

0x711f,	// (0x00025df1) cset_list_set_pane_ParamLimits

0x711f,	// (0x00025df1) cset_list_set_pane

0x7130,	// (0x00025e02) aid_position_infowindow_above

0x7138,	// (0x00025e0a) aid_position_infowindow_below

0x7140,	// (0x00025e12) cset_list_set_pane_g1_ParamLimits

0x7140,	// (0x00025e12) cset_list_set_pane_g1

0x714c,	// (0x00025e1e) cset_list_set_pane_g3_ParamLimits

0x714c,	// (0x00025e1e) cset_list_set_pane_g3

0x0001,

0xf9ba,	// (0x0002e68c) cset_list_set_pane_g_ParamLimits

0xf9ba,	// (0x0002e68c) cset_list_set_pane_g

0x715b,	// (0x00025e2d) cset_list_set_pane_t1_ParamLimits

0x715b,	// (0x00025e2d) cset_list_set_pane_t1

0xa610,	// (0x000292e2) list_highlight_pane_cp021_ParamLimits

0xa610,	// (0x000292e2) list_highlight_pane_cp021

0xafcf,	// (0x00029ca1) cset_slider_pane_g1

0xafe1,	// (0x00029cb3) cset_slider_pane_g2

0xafd8,	// (0x00029caa) cset_slider_pane_g3

0x0002,

0xf9bf,	// (0x0002e691) cset_slider_pane_g

0x1d5a,	// (0x00020a2c) aid_area_touch_cam4_zoom

0x1d62,	// (0x00020a34) cam4_zoom_cont_pane

0x1d6a,	// (0x00020a3c) cam4_zoom_pane_g1

0x1d72,	// (0x00020a44) cam4_zoom_pane_g2

0x1d7a,	// (0x00020a4c) cam4_zoom_pane_g3

0x0002,

0xf9c6,	// (0x0002e698) cam4_zoom_pane_g

0x1d82,	// (0x00020a54) cam4_zoom_cont_pane_g1

0x1d8b,	// (0x00020a5d) cam4_zoom_cont_pane_g2

0x1d94,	// (0x00020a66) cam4_zoom_cont_pane_g3

0x0002,

0xf9cd,	// (0x0002e69f) cam4_zoom_cont_pane_g

0x6a53,	// (0x00025725) call4_image_pane_ParamLimits

0x6a53,	// (0x00025725) call4_image_pane

0xd063,	// (0x0002bd35) call4_windows_conf_pane_ParamLimits

0xd07e,	// (0x0002bd50) popup_call4_audio_in_window_ParamLimits

0xd07e,	// (0x0002bd50) popup_call4_audio_in_window

0x9c03,	// (0x000288d5) bg_popup_call2_act_pane_cp02

0xd124,	// (0x0002bdf6) call4_list_conf_pane

0xc74f,	// (0x0002b421) call4_image_pane_g1

0xc74f,	// (0x0002b421) call4_image_pane_g2

0x0001,

0xf6dc,	// (0x0002e3ae) call4_image_pane_g

0xd3b9,	// (0x0002c08b) list_single_graphic_popup_conf4_pane_ParamLimits

0xd3b9,	// (0x0002c08b) list_single_graphic_popup_conf4_pane

0x9c03,	// (0x000288d5) list_highlight_pane_cp022

0xd3ce,	// (0x0002c0a0) list_single_graphic_popup_conf4_pane_g1

0xacc5,	// (0x00029997) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9d4,	// (0x0002e6a6) list_single_graphic_popup_conf4_pane_g

0xd3d6,	// (0x0002c0a8) list_single_graphic_popup_conf4_pane_t1

0x326b,	// (0x00021f3d) popup_vtel_slider_window_ParamLimits

0x326b,	// (0x00021f3d) popup_vtel_slider_window

0xd045,	// (0x0002bd17) dialer2_ne_pane_t2_ParamLimits

0xd045,	// (0x0002bd17) dialer2_ne_pane_t2

0x0001,

0xf8b5,	// (0x0002e587) dialer2_ne_pane_t_ParamLimits

0xf8b5,	// (0x0002e587) dialer2_ne_pane_t

0xa610,	// (0x000292e2) bg_popup_sub_pane_cp010_ParamLimits

0xa610,	// (0x000292e2) bg_popup_sub_pane_cp010

0x7170,	// (0x00025e42) popup_vtel_slider_window_g1_ParamLimits

0x7170,	// (0x00025e42) popup_vtel_slider_window_g1

0x717c,	// (0x00025e4e) popup_vtel_slider_window_g2_ParamLimits

0x717c,	// (0x00025e4e) popup_vtel_slider_window_g2

0x0003,

0xf9d9,	// (0x0002e6ab) popup_vtel_slider_window_g_ParamLimits

0xf9d9,	// (0x0002e6ab) popup_vtel_slider_window_g

0x71c4,	// (0x00025e96) vtel_slider_pane_ParamLimits

0x71c4,	// (0x00025e96) vtel_slider_pane

0x71d3,	// (0x00025ea5) vtel_slider_pane_g1_ParamLimits

0x71d3,	// (0x00025ea5) vtel_slider_pane_g1

0x71e0,	// (0x00025eb2) vtel_slider_pane_g2_ParamLimits

0x71e0,	// (0x00025eb2) vtel_slider_pane_g2

0x71ed,	// (0x00025ebf) vtel_slider_pane_g3_ParamLimits

0x71ed,	// (0x00025ebf) vtel_slider_pane_g3

0x71d3,	// (0x00025ea5) vtel_slider_pane_g4_ParamLimits

0x71d3,	// (0x00025ea5) vtel_slider_pane_g4

0x71fa,	// (0x00025ecc) vtel_slider_pane_g5_ParamLimits

0x71fa,	// (0x00025ecc) vtel_slider_pane_g5

0x0004,

0xf9e2,	// (0x0002e6b4) vtel_slider_pane_g_ParamLimits

0xf9e2,	// (0x0002e6b4) vtel_slider_pane_g

0xa610,	// (0x000292e2) main_gallery2_pane

0x1a9b,	// (0x0002076d) aid_size_row_itut2_dropdow_list_ParamLimits

0x1a9b,	// (0x0002076d) aid_size_row_itut2_dropdow_list

0x1b0b,	// (0x000207dd) grid_vitu2_function_top_pane_ParamLimits

0x1b0b,	// (0x000207dd) grid_vitu2_function_top_pane

0x1b61,	// (0x00020833) popup_vitu2_dropdown_list_window_ParamLimits

0x1b61,	// (0x00020833) popup_vitu2_dropdown_list_window

0x1b85,	// (0x00020857) popup_vitu2_match_list_window

0x1d9d,	// (0x00020a6f) cell_vitu2_function_top_pane_ParamLimits

0x1d9d,	// (0x00020a6f) cell_vitu2_function_top_pane

0x1dbf,	// (0x00020a91) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1dbf,	// (0x00020a91) cell_vitu2_function_top_pane_cp01

0x1ddb,	// (0x00020aad) cell_vitu2_function_top_wide_pane_ParamLimits

0x1ddb,	// (0x00020aad) cell_vitu2_function_top_wide_pane

0x19c9,	// (0x0002069b) bg_button_pane_cp012

0x1df7,	// (0x00020ac9) cell_vitu2_function_top_pane_g1

0x1e0b,	// (0x00020add) bg_button_pane_cp013_ParamLimits

0x1e0b,	// (0x00020add) bg_button_pane_cp013

0x7207,	// (0x00025ed9) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x7207,	// (0x00025ed9) cell_vitu2_function_top_wide_pane_g1

0x1e27,	// (0x00020af9) bg_popup_sub_pane_cp20

0x1e35,	// (0x00020b07) list_vitu2_match_list_pane

0xd1c2,	// (0x0002be94) bg_popup_sub_pane_cp20_g1

0xd1ca,	// (0x0002be9c) bg_popup_sub_pane_cp20_g2

0xa7b8,	// (0x0002948a) bg_popup_sub_pane_cp20_g3

0xd1d2,	// (0x0002bea4) bg_popup_sub_pane_cp20_g4

0xa798,	// (0x0002946a) bg_popup_sub_pane_cp20_g5

0xd3fa,	// (0x0002c0cc) bg_popup_sub_pane_cp20_g6

0xd1e2,	// (0x0002beb4) bg_popup_sub_pane_cp20_g7

0xd1ea,	// (0x0002bebc) bg_popup_sub_pane_cp20_g8

0xd1f2,	// (0x0002bec4) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9ed,	// (0x0002e6bf) bg_popup_sub_pane_cp20_g

0x1e4d,	// (0x00020b1f) list_vitu2_match_list_item_pane_ParamLimits

0x1e4d,	// (0x00020b1f) list_vitu2_match_list_item_pane

0x1e5f,	// (0x00020b31) list_vitu2_match_list_item_pane_t1

0x0b3c,	// (0x0001f80e) bg_popup_sub_pane_cp21

0x1e6d,	// (0x00020b3f) grid_vitu2_dropdown_list_pane

0x1e75,	// (0x00020b47) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1e75,	// (0x00020b47) cell_vitu2_dropdown_list_char_pane

0x1e9a,	// (0x00020b6c) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1e9a,	// (0x00020b6c) cell_vitu2_dropdown_list_ctrl_pane

0xd40e,	// (0x0002c0e0) cell_vitu2_dropdown_list_char_pane_g1

0xd417,	// (0x0002c0e9) cell_vitu2_dropdown_list_char_pane_g2

0xd420,	// (0x0002c0f2) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa0a,	// (0x0002e6dc) cell_vitu2_dropdown_list_char_pane_g

0x1ec8,	// (0x00020b9a) cell_vitu2_dropdown_list_char_pane_t1

0x7257,	// (0x00025f29) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x7257,	// (0x00025f29) cell_vitu2_dropdown_list_ctrl_pane_g1

0x7267,	// (0x00025f39) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x7267,	// (0x00025f39) cell_vitu2_dropdown_list_ctrl_pane_g2

0x7278,	// (0x00025f4a) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x7278,	// (0x00025f4a) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1ed6,	// (0x00020ba8) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1ed6,	// (0x00020ba8) cell_vitu2_dropdown_list_ctrl_pane_g4

0x18dd,	// (0x000205af) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0x18dd,	// (0x000205af) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa11,	// (0x0002e6e3) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa11,	// (0x0002e6e3) cell_vitu2_dropdown_list_ctrl_pane_g

0x7288,	// (0x00025f5a) aid_size_cell_gallery2_ParamLimits

0x7288,	// (0x00025f5a) aid_size_cell_gallery2

0x72a2,	// (0x00025f74) grid_gallery2_pane_ParamLimits

0x72a2,	// (0x00025f74) grid_gallery2_pane

0x6670,	// (0x00025342) scroll_pane_cp029_ParamLimits

0x6670,	// (0x00025342) scroll_pane_cp029

0x72b9,	// (0x00025f8b) cell_gallery2_pane_ParamLimits

0x72b9,	// (0x00025f8b) cell_gallery2_pane

0xd429,	// (0x0002c0fb) cell_gallery2_pane_g2

0x7305,	// (0x00025fd7) cell_gallery2_pane_g3

0xd431,	// (0x0002c103) cell_gallery2_pane_g4

0xd439,	// (0x0002c10b) cell_gallery2_pane_g5

0xa54d,	// (0x0002921f) grid_highlight_pane_cp10

0x1b85,	// (0x00020857) popup_vitu2_match_list_window_ParamLimits

0x1b99,	// (0x0002086b) popup_vitu2_query_window_ParamLimits

0x1b99,	// (0x0002086b) popup_vitu2_query_window

0x0b3c,	// (0x0001f80e) bg_vitu2_candi_button_pane

0xd40e,	// (0x0002c0e0) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xd417,	// (0x0002c0e9) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xd420,	// (0x0002c0f2) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x730d,	// (0x00025fdf) bg_button_pane_cp015

0x731f,	// (0x00025ff1) bg_button_pane_cp016

0x7332,	// (0x00026004) bg_button_pane_cp017

0xc2fe,	// (0x0002afd0) bg_popup_sub_pane_cp22

0xd441,	// (0x0002c113) popup_vitu2_query_window_g1

0x7377,	// (0x00026049) popup_vitu2_query_window_g2

0x0002,

0xfa1c,	// (0x0002e6ee) popup_vitu2_query_window_g

0x7394,	// (0x00026066) popup_vitu2_query_window_t1_ParamLimits

0x7394,	// (0x00026066) popup_vitu2_query_window_t1

0x73c7,	// (0x00026099) popup_vitu2_query_window_t2_ParamLimits

0x73c7,	// (0x00026099) popup_vitu2_query_window_t2

0x73d9,	// (0x000260ab) popup_vitu2_query_window_t3_ParamLimits

0x73d9,	// (0x000260ab) popup_vitu2_query_window_t3

0x7401,	// (0x000260d3) popup_vitu2_query_window_t4_ParamLimits

0x7401,	// (0x000260d3) popup_vitu2_query_window_t4

0x7424,	// (0x000260f6) popup_vitu2_query_window_t5_ParamLimits

0x7424,	// (0x000260f6) popup_vitu2_query_window_t5

0x0006,

0xfa23,	// (0x0002e6f5) popup_vitu2_query_window_t_ParamLimits

0xfa23,	// (0x0002e6f5) popup_vitu2_query_window_t

0xd2c8,	// (0x0002bf9a) main_cset_text_pane

0x6e87,	// (0x00025b59) aid_area_touch_slider_ParamLimits

0x6ea3,	// (0x00025b75) cset_slider_pane_ParamLimits

0x6ecd,	// (0x00025b9f) main_cset_slider_pane_g1_ParamLimits

0x6ee2,	// (0x00025bb4) main_cset_slider_pane_g2_ParamLimits

0xd2e9,	// (0x0002bfbb) main_cset_slider_pane_g3_ParamLimits

0xd2e9,	// (0x0002bfbb) main_cset_slider_pane_g3

0x6ef7,	// (0x00025bc9) main_cset_slider_pane_g4_ParamLimits

0x6ef7,	// (0x00025bc9) main_cset_slider_pane_g4

0x6f06,	// (0x00025bd8) main_cset_slider_pane_g5_ParamLimits

0x6f06,	// (0x00025bd8) main_cset_slider_pane_g5

0x6f12,	// (0x00025be4) main_cset_slider_pane_g6_ParamLimits

0x6f12,	// (0x00025be4) main_cset_slider_pane_g6

0xf976,	// (0x0002e648) main_cset_slider_pane_g_ParamLimits

0xd319,	// (0x0002bfeb) main_cset_slider_pane_t1_ParamLimits

0x6f9e,	// (0x00025c70) main_cset_slider_pane_t2_ParamLimits

0x6fb8,	// (0x00025c8a) main_cset_slider_pane_t3_ParamLimits

0x6fd2,	// (0x00025ca4) main_cset_slider_pane_t4_ParamLimits

0x6fec,	// (0x00025cbe) main_cset_slider_pane_t5_ParamLimits

0x7006,	// (0x00025cd8) main_cset_slider_pane_t6_ParamLimits

0x701b,	// (0x00025ced) main_cset_slider_pane_t7_ParamLimits

0x7045,	// (0x00025d17) main_cset_slider_pane_t8_ParamLimits

0x7045,	// (0x00025d17) main_cset_slider_pane_t8

0x706d,	// (0x00025d3f) main_cset_slider_pane_t9_ParamLimits

0x706d,	// (0x00025d3f) main_cset_slider_pane_t9

0x7095,	// (0x00025d67) main_cset_slider_pane_t10_ParamLimits

0x7095,	// (0x00025d67) main_cset_slider_pane_t10

0x70bd,	// (0x00025d8f) main_cset_slider_pane_t11_ParamLimits

0x70bd,	// (0x00025d8f) main_cset_slider_pane_t11

0x70e5,	// (0x00025db7) main_cset_slider_pane_t12_ParamLimits

0x70e5,	// (0x00025db7) main_cset_slider_pane_t12

0x7102,	// (0x00025dd4) main_cset_slider_pane_t13_ParamLimits

0x7102,	// (0x00025dd4) main_cset_slider_pane_t13

0xf99b,	// (0x0002e66d) main_cset_slider_pane_t_ParamLimits

0x9c03,	// (0x000288d5) bg_popup_sub_pane_cp011

0xd44d,	// (0x0002c11f) main_cset_text_pane_g1

0xd455,	// (0x0002c127) main_cset_text_pane_t1

0xd463,	// (0x0002c135) main_cset_text_pane_t2

0xd471,	// (0x0002c143) main_cset_text_pane_t3

0xd47f,	// (0x0002c151) main_cset_text_pane_t4

0xd48d,	// (0x0002c15f) main_cset_text_pane_t5

0xd49b,	// (0x0002c16d) main_cset_text_pane_t6

0xd4a9,	// (0x0002c17b) main_cset_text_pane_t7

0x0006,

0xfa32,	// (0x0002e704) main_cset_text_pane_t

0x9c03,	// (0x000288d5) main_cam4_burst_pane

0x9c03,	// (0x000288d5) main_cam5_pane

0x6dd0,	// (0x00025aa2) bg_button_pane_cp019

0x6dd9,	// (0x00025aab) bg_button_pane_cp020

0xd2f5,	// (0x0002bfc7) main_cset_slider_pane_g7_ParamLimits

0xd2f5,	// (0x0002bfc7) main_cset_slider_pane_g7

0xd301,	// (0x0002bfd3) main_cset_slider_pane_g8_ParamLimits

0xd301,	// (0x0002bfd3) main_cset_slider_pane_g8

0x6f26,	// (0x00025bf8) main_cset_slider_pane_g9_ParamLimits

0x6f26,	// (0x00025bf8) main_cset_slider_pane_g9

0x6f32,	// (0x00025c04) main_cset_slider_pane_g10_ParamLimits

0x6f32,	// (0x00025c04) main_cset_slider_pane_g10

0x6f3e,	// (0x00025c10) main_cset_slider_pane_g11_ParamLimits

0x6f3e,	// (0x00025c10) main_cset_slider_pane_g11

0x6f4a,	// (0x00025c1c) main_cset_slider_pane_g12_ParamLimits

0x6f4a,	// (0x00025c1c) main_cset_slider_pane_g12

0x6f56,	// (0x00025c28) main_cset_slider_pane_g13_ParamLimits

0x6f56,	// (0x00025c28) main_cset_slider_pane_g13

0x6f62,	// (0x00025c34) main_cset_slider_pane_g14_ParamLimits

0x6f62,	// (0x00025c34) main_cset_slider_pane_g14

0x6f6e,	// (0x00025c40) main_cset_slider_pane_g15_ParamLimits

0x6f6e,	// (0x00025c40) main_cset_slider_pane_g15

0xd347,	// (0x0002c019) main_cset_slider_pane_t14_ParamLimits

0xd347,	// (0x0002c019) main_cset_slider_pane_t14

0xd380,	// (0x0002c052) main_cset_slider_pane_t15_ParamLimits

0xd380,	// (0x0002c052) main_cset_slider_pane_t15

0x749d,	// (0x0002616f) aid_cam4_burst_size_cell_ParamLimits

0x749d,	// (0x0002616f) aid_cam4_burst_size_cell

0x74b9,	// (0x0002618b) grid_cam4_burst_pane_ParamLimits

0x74b9,	// (0x0002618b) grid_cam4_burst_pane

0x74eb,	// (0x000261bd) linegrid_cam4_burst_pane_ParamLimits

0x74eb,	// (0x000261bd) linegrid_cam4_burst_pane

0x7509,	// (0x000261db) scroll_pane_cp30_ParamLimits

0x7509,	// (0x000261db) scroll_pane_cp30

0x7515,	// (0x000261e7) cell_cam4_burst_pane_ParamLimits

0x7515,	// (0x000261e7) cell_cam4_burst_pane

0xd4b7,	// (0x0002c189) linegrid_cam4_burst_pane_g1_ParamLimits

0xd4b7,	// (0x0002c189) linegrid_cam4_burst_pane_g1

0x7555,	// (0x00026227) linegrid_cam4_burst_pane_g2_ParamLimits

0x7555,	// (0x00026227) linegrid_cam4_burst_pane_g2

0xd4c4,	// (0x0002c196) linegrid_cam4_burst_pane_g3_ParamLimits

0xd4c4,	// (0x0002c196) linegrid_cam4_burst_pane_g3

0x0002,

0xfa41,	// (0x0002e713) linegrid_cam4_burst_pane_g_ParamLimits

0xfa41,	// (0x0002e713) linegrid_cam4_burst_pane_g

0x7566,	// (0x00026238) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x7566,	// (0x00026238) linegrid_cam4_burst_pane_g3_copy1

0xd4d1,	// (0x0002c1a3) linegrid_cam4_burst_pane_g4_ParamLimits

0xd4d1,	// (0x0002c1a3) linegrid_cam4_burst_pane_g4

0x7580,	// (0x00026252) linegrid_cam4_burst_pane_g5_ParamLimits

0x7580,	// (0x00026252) linegrid_cam4_burst_pane_g5

0x7591,	// (0x00026263) linegrid_cam4_burst_pane_g6_ParamLimits

0x7591,	// (0x00026263) linegrid_cam4_burst_pane_g6

0xd4de,	// (0x0002c1b0) linegrid_cam4_burst_pane_g7_ParamLimits

0xd4de,	// (0x0002c1b0) linegrid_cam4_burst_pane_g7

0x75a8,	// (0x0002627a) cell_cam4_burst_pane_g1

0xd53c,	// (0x0002c20e) main_cam5_pane_t1_ParamLimits

0xd53c,	// (0x0002c20e) main_cam5_pane_t1

0xd54e,	// (0x0002c220) main_cam5_pane_t2_ParamLimits

0xd54e,	// (0x0002c220) main_cam5_pane_t2

0xd560,	// (0x0002c232) main_cam5_pane_t3_ParamLimits

0xd560,	// (0x0002c232) main_cam5_pane_t3

0xd572,	// (0x0002c244) main_cam5_pane_t4_ParamLimits

0xd572,	// (0x0002c244) main_cam5_pane_t4

0xd58a,	// (0x0002c25c) main_cam5_pane_t5_ParamLimits

0xd58a,	// (0x0002c25c) main_cam5_pane_t5

0xd59e,	// (0x0002c270) main_cam5_pane_t6_ParamLimits

0xd59e,	// (0x0002c270) main_cam5_pane_t6

0xd5b2,	// (0x0002c284) main_cam5_pane_t7_ParamLimits

0xd5b2,	// (0x0002c284) main_cam5_pane_t7

0xd5c4,	// (0x0002c296) main_cam5_pane_t8_ParamLimits

0xd5c4,	// (0x0002c296) main_cam5_pane_t8

0xd5e2,	// (0x0002c2b4) main_cam5_pane_t9_ParamLimits

0xd5e2,	// (0x0002c2b4) main_cam5_pane_t9

0xd5f4,	// (0x0002c2c6) main_cam5_pane_t10_ParamLimits

0xd5f4,	// (0x0002c2c6) main_cam5_pane_t10

0xd606,	// (0x0002c2d8) main_cam5_pane_t11_ParamLimits

0xd606,	// (0x0002c2d8) main_cam5_pane_t11

0xd61a,	// (0x0002c2ec) main_cam5_pane_t12_ParamLimits

0xd61a,	// (0x0002c2ec) main_cam5_pane_t12

0xd631,	// (0x0002c303) main_cam5_pane_t13_ParamLimits

0xd631,	// (0x0002c303) main_cam5_pane_t13

0x000c,

0xfa4d,	// (0x0002e71f) main_cam5_pane_t_ParamLimits

0xfa4d,	// (0x0002e71f) main_cam5_pane_t

0x2285,	// (0x00020f57) popup_scut_keymap_window_ParamLimits

0x2285,	// (0x00020f57) popup_scut_keymap_window

0x75bb,	// (0x0002628d) aid_size_cell_brow_shortcut

0xa54d,	// (0x0002921f) bg_popup_window_pane_cp010

0x75c7,	// (0x00026299) grid_scut_pane

0x75d3,	// (0x000262a5) cell_scut_pane_ParamLimits

0x75d3,	// (0x000262a5) cell_scut_pane

0x75ee,	// (0x000262c0) cell_scut_pane_g1

0xd654,	// (0x0002c326) cell_scut_pane_t1

0xd663,	// (0x0002c335) cell_scut_pane_t2

0x75f7,	// (0x000262c9) cell_scut_pane_t3

0x0002,

0xfa68,	// (0x0002e73a) cell_scut_pane_t

0x5edd,	// (0x00024baf) main_mup3_pane_g8_ParamLimits

0x5edd,	// (0x00024baf) main_mup3_pane_g8

0x1aab,	// (0x0002077d) area_vitu2_query_pane_ParamLimits

0x1aab,	// (0x0002077d) area_vitu2_query_pane

0x7345,	// (0x00026017) input_focus_pane_cp08

0xd672,	// (0x0002c344) area_vitu2_query_pane_g1

0x7605,	// (0x000262d7) area_vitu2_query_pane_g2

0x0001,

0xfa6f,	// (0x0002e741) area_vitu2_query_pane_g

0x7616,	// (0x000262e8) area_vitu2_query_pane_t1_ParamLimits

0x7616,	// (0x000262e8) area_vitu2_query_pane_t1

0x762a,	// (0x000262fc) area_vitu2_query_pane_t2_ParamLimits

0x762a,	// (0x000262fc) area_vitu2_query_pane_t2

0x763e,	// (0x00026310) area_vitu2_query_pane_t3_ParamLimits

0x763e,	// (0x00026310) area_vitu2_query_pane_t3

0xd67e,	// (0x0002c350) area_vitu2_query_pane_t4_ParamLimits

0xd67e,	// (0x0002c350) area_vitu2_query_pane_t4

0xd6a6,	// (0x0002c378) area_vitu2_query_pane_t5_ParamLimits

0xd6a6,	// (0x0002c378) area_vitu2_query_pane_t5

0xd6ce,	// (0x0002c3a0) area_vitu2_query_pane_t6_ParamLimits

0xd6ce,	// (0x0002c3a0) area_vitu2_query_pane_t6

0x0006,

0xfa74,	// (0x0002e746) area_vitu2_query_pane_t_ParamLimits

0xfa74,	// (0x0002e746) area_vitu2_query_pane_t

0x7666,	// (0x00026338) bg_button_pane_cp018

0x7674,	// (0x00026346) bg_button_pane_cp021

0x7680,	// (0x00026352) bg_button_pane_cp022

0x7691,	// (0x00026363) input_focus_pane_cp09

0x4667,	// (0x00023339) aid_size_touch_mv_arrow_left

0x4692,	// (0x00023364) aid_size_touch_mv_arrow_right

0x6f86,	// (0x00025c58) main_cset_slider_pane_g16_ParamLimits

0x6f86,	// (0x00025c58) main_cset_slider_pane_g16

0x6f92,	// (0x00025c64) main_cset_slider_pane_g17_ParamLimits

0x6f92,	// (0x00025c64) main_cset_slider_pane_g17

0x75a8,	// (0x0002627a) cell_cam4_burst_pane_g1_ParamLimits

0x9c03,	// (0x000288d5) compa_mode_pane

0x7188,	// (0x00025e5a) popup_vtel_slider_window_g3_ParamLimits

0x7188,	// (0x00025e5a) popup_vtel_slider_window_g3

0x719c,	// (0x00025e6e) popup_vtel_slider_window_g4_ParamLimits

0x719c,	// (0x00025e6e) popup_vtel_slider_window_g4

0x71b0,	// (0x00025e82) popup_vtel_slider_window_t1_ParamLimits

0x71b0,	// (0x00025e82) popup_vtel_slider_window_t1

0x9c03,	// (0x000288d5) main_cl_pane

0xc32a,	// (0x0002affc) popup_imed_adjust2_window_ParamLimits

0xc2fe,	// (0x0002afd0) bg_tb_trans_pane_cp05_ParamLimits

0xcc58,	// (0x0002b92a) popup_imed_adjust2_window_g1_ParamLimits

0xcc67,	// (0x0002b939) popup_imed_adjust2_window_g2_ParamLimits

0xcc67,	// (0x0002b939) popup_imed_adjust2_window_g2

0xcc73,	// (0x0002b945) popup_imed_adjust2_window_g3_ParamLimits

0xcc73,	// (0x0002b945) popup_imed_adjust2_window_g3

0x0002,

0xf7df,	// (0x0002e4b1) popup_imed_adjust2_window_g_ParamLimits

0xf7df,	// (0x0002e4b1) popup_imed_adjust2_window_g

0xcc7f,	// (0x0002b951) popup_imed_adjust2_window_t1_ParamLimits

0xcc97,	// (0x0002b969) slider_imed_adjust_pane_ParamLimits

0xccab,	// (0x0002b97d) slider_imed_adjust_pane_g1_ParamLimits

0xccbb,	// (0x0002b98d) slider_imed_adjust_pane_g2_ParamLimits

0xcccb,	// (0x0002b99d) slider_imed_adjust_pane_g3_ParamLimits

0xccdc,	// (0x0002b9ae) slider_imed_adjust_pane_g4_ParamLimits

0xf7e6,	// (0x0002e4b8) slider_imed_adjust_pane_g_ParamLimits

0x1816,	// (0x000204e8) aid_touch_area_cam4_ParamLimits

0x1816,	// (0x000204e8) aid_touch_area_cam4

0x1826,	// (0x000204f8) battery_pane_cp01

0x18ad,	// (0x0002057f) main_camera4_pane_g6_ParamLimits

0x18ad,	// (0x0002057f) main_camera4_pane_g6

0x18cb,	// (0x0002059d) main_camera4_pane_t2_ParamLimits

0x18cb,	// (0x0002059d) main_camera4_pane_t2

0x0001,

0xf8e9,	// (0x0002e5bb) main_camera4_pane_t_ParamLimits

0xf8e9,	// (0x0002e5bb) main_camera4_pane_t

0x1936,	// (0x00020608) aid_touch_area_vid4_ParamLimits

0x1936,	// (0x00020608) aid_touch_area_vid4

0x1976,	// (0x00020648) main_video4_pane_g5_ParamLimits

0x1976,	// (0x00020648) main_video4_pane_g5

0x199c,	// (0x0002066e) vid4_progress_pane_ParamLimits

0x199c,	// (0x0002066e) vid4_progress_pane

0xd30d,	// (0x0002bfdf) main_cset_slider_pane_g18_ParamLimits

0xd30d,	// (0x0002bfdf) main_cset_slider_pane_g18

0xd530,	// (0x0002c202) cell_cam4_burst_pane_g2_ParamLimits

0xd530,	// (0x0002c202) cell_cam4_burst_pane_g2

0x0001,

0xfa48,	// (0x0002e71a) cell_cam4_burst_pane_g_ParamLimits

0xfa48,	// (0x0002e71a) cell_cam4_burst_pane_g

0x76a2,	// (0x00026374) bg_cl_pane_ParamLimits

0x76a2,	// (0x00026374) bg_cl_pane

0x76ae,	// (0x00026380) cl_header_pane_ParamLimits

0x76ae,	// (0x00026380) cl_header_pane

0x76ba,	// (0x0002638c) cl_listscroll_pane_ParamLimits

0x76ba,	// (0x0002638c) cl_listscroll_pane

0xd71a,	// (0x0002c3ec) bg_cl_pane_g1

0xd722,	// (0x0002c3f4) bg_cl_pane_g2

0xd72a,	// (0x0002c3fc) bg_cl_pane_g3

0xd732,	// (0x0002c404) bg_cl_pane_g4

0xd73a,	// (0x0002c40c) bg_cl_pane_g5

0xd742,	// (0x0002c414) bg_cl_pane_g6

0xd74a,	// (0x0002c41c) bg_cl_pane_g7

0xd752,	// (0x0002c424) bg_cl_pane_g8

0xd75a,	// (0x0002c42c) bg_cl_pane_g9

0x0008,

0xfa83,	// (0x0002e755) bg_cl_pane_g

0x76c6,	// (0x00026398) aid_height_cl_leading_ParamLimits

0x76c6,	// (0x00026398) aid_height_cl_leading

0x76d2,	// (0x000263a4) aid_height_cl_text_ParamLimits

0x76d2,	// (0x000263a4) aid_height_cl_text

0x22c6,	// (0x00020f98) bg_cl_header_pane_ParamLimits

0x22c6,	// (0x00020f98) bg_cl_header_pane

0x76ea,	// (0x000263bc) cl_header_pane_g1_ParamLimits

0x76ea,	// (0x000263bc) cl_header_pane_g1

0x76f7,	// (0x000263c9) cl_header_pane_t1_ParamLimits

0x76f7,	// (0x000263c9) cl_header_pane_t1

0xd762,	// (0x0002c434) cl_list_pane

0xd2e0,	// (0x0002bfb2) hc_scroll_pane_cp01

0xa798,	// (0x0002946a) bg_cl_header_pane_g1

0xd1c2,	// (0x0002be94) bg_cl_header_pane_g2

0xa7b8,	// (0x0002948a) bg_cl_header_pane_g3

0xd1d2,	// (0x0002bea4) bg_cl_header_pane_g4

0xd1ca,	// (0x0002be9c) bg_cl_header_pane_g5

0xd3fa,	// (0x0002c0cc) bg_cl_header_pane_g6

0xd1ea,	// (0x0002bebc) bg_cl_header_pane_g7

0xd1f2,	// (0x0002bec4) bg_cl_header_pane_g8

0xd1e2,	// (0x0002beb4) bg_cl_header_pane_g9

0x0008,

0xfa96,	// (0x0002e768) bg_cl_header_pane_g

0x7709,	// (0x000263db) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x7709,	// (0x000263db) hc_cl_list_double_graphic_heading_pane

0x7719,	// (0x000263eb) hc_cl_list_single_graphic_pane_ParamLimits

0x7719,	// (0x000263eb) hc_cl_list_single_graphic_pane

0x772b,	// (0x000263fd) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x772b,	// (0x000263fd) hc_cl_list_single_graphic_pane_g1

0x7737,	// (0x00026409) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x7737,	// (0x00026409) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfaa9,	// (0x0002e77b) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfaa9,	// (0x0002e77b) hc_cl_list_single_graphic_pane_g

0x774b,	// (0x0002641d) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x774b,	// (0x0002641d) hc_cl_list_single_graphic_pane_t1

0x772b,	// (0x000263fd) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x772b,	// (0x000263fd) hc_cl_list_double_graphic_heading_pane_g1

0x7760,	// (0x00026432) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x7760,	// (0x00026432) hc_cl_list_double_graphic_heading_pane_g2

0x7774,	// (0x00026446) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x7774,	// (0x00026446) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfaae,	// (0x0002e780) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfaae,	// (0x0002e780) hc_cl_list_double_graphic_heading_pane_g

0x7788,	// (0x0002645a) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x7788,	// (0x0002645a) hc_cl_list_double_graphic_heading_pane_t1

0x779d,	// (0x0002646f) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x779d,	// (0x0002646f) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfab5,	// (0x0002e787) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfab5,	// (0x0002e787) hc_cl_list_double_graphic_heading_pane_t

0x1ef7,	// (0x00020bc9) vid4_progress_pane_g1

0x1f09,	// (0x00020bdb) vid4_progress_pane_g2

0x0fda,	// (0x0001fcac) vid4_progress_pane_g3

0x1f1b,	// (0x00020bed) vid4_progress_pane_g4

0x0004,

0xfaba,	// (0x0002e78c) vid4_progress_pane_g

0x1f39,	// (0x00020c0b) vid4_progress_pane_t1

0x1f4e,	// (0x00020c20) vid4_progress_pane_t2

0x0002,

0xfac5,	// (0x0002e797) vid4_progress_pane_t

0x1f79,	// (0x00020c4b) wait_bar_pane_cp07

0xc53c,	// (0x0002b20e) blid_firmament_pane_ParamLimits

0xc57f,	// (0x0002b251) popup_blid_sat_info2_window_g1

0xc5a3,	// (0x0002b275) popup_blid_sat_info2_window_t3

0xc5b1,	// (0x0002b283) popup_blid_sat_info2_window_t4

0xc5bf,	// (0x0002b291) popup_blid_sat_info2_window_t5

0xc5cd,	// (0x0002b29f) popup_blid_sat_info2_window_t6

0xc5dd,	// (0x0002b2af) popup_blid_sat_info2_window_t7

0xc5eb,	// (0x0002b2bd) popup_blid_sat_info2_window_t8

0xc5f9,	// (0x0002b2cb) popup_blid_sat_info2_window_t9

0xc607,	// (0x0002b2d9) popup_blid_sat_info2_window_t10

0xc6cf,	// (0x0002b3a1) aid_firma_cardinal_ParamLimits

0xc6e3,	// (0x0002b3b5) blid_firmament_pane_t1_ParamLimits

0xc6fa,	// (0x0002b3cc) blid_firmament_pane_t2_ParamLimits

0xc711,	// (0x0002b3e3) blid_firmament_pane_t3_ParamLimits

0xc728,	// (0x0002b3fa) blid_firmament_pane_t4_ParamLimits

0xf6d3,	// (0x0002e3a5) blid_firmament_pane_t_ParamLimits

0xc73f,	// (0x0002b411) blid_sat_info_pane_ParamLimits

0xa610,	// (0x000292e2) main_cam_set_pane_ParamLimits

0x6609,	// (0x000252db) aid_size_cell_colour_35_ParamLimits

0x6623,	// (0x000252f5) aid_size_cell_colour_112_ParamLimits

0x663a,	// (0x0002530c) aid_size_cell_effect_ParamLimits

0xa610,	// (0x000292e2) bg_tb_trans_pane_cp02_ParamLimits

0xaf89,	// (0x00029c5b) heading_imed_pane_ParamLimits

0x6654,	// (0x00025326) listscroll_imed_pane_ParamLimits

0xb920,	// (0x0002a5f2) popup_call2_audio_first_window_g5_ParamLimits

0xb920,	// (0x0002a5f2) popup_call2_audio_first_window_g5

0x169f,	// (0x00020371) aid_size_touch_image3_arrow_left_ParamLimits

0x169f,	// (0x00020371) aid_size_touch_image3_arrow_left

0x16b5,	// (0x00020387) aid_size_touch_image3_arrow_right_ParamLimits

0x16b5,	// (0x00020387) aid_size_touch_image3_arrow_right

0x1f64,	// (0x00020c36) vid4_progress_pane_t3

0x6902,	// (0x000255d4) main_hwr_training_symbol_option_pane_ParamLimits

0x6902,	// (0x000255d4) main_hwr_training_symbol_option_pane

0xcf47,	// (0x0002bc19) popup_hwr_training_preview_window_ParamLimits

0xcf47,	// (0x0002bc19) popup_hwr_training_preview_window

0x1395,	// (0x00020067) hwr_training_navi_pane_g5_ParamLimits

0x1395,	// (0x00020067) hwr_training_navi_pane_g5

0xd1b0,	// (0x0002be82) popup_char_count_window

0x1e27,	// (0x00020af9) bg_popup_sub_pane_cp20_ParamLimits

0x1e35,	// (0x00020b07) list_vitu2_match_list_pane_ParamLimits

0x1e41,	// (0x00020b13) vitu2_page_scroll_pane_ParamLimits

0x1e41,	// (0x00020b13) vitu2_page_scroll_pane

0xd78d,	// (0x0002c45f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xd78d,	// (0x0002c45f) list_single_hwr_training_symbol_option_pane

0xd7a0,	// (0x0002c472) list_single_hwr_training_symbol_option_pane_g1

0xd7a8,	// (0x0002c47a) list_single_hwr_training_symbol_option_pane_t1

0xd7b6,	// (0x0002c488) bg_button_pane_cp023

0xd7bf,	// (0x0002c491) bg_button_pane_cp024

0x77ea,	// (0x000264bc) vitu2_page_scroll_pane_g1

0x77f2,	// (0x000264c4) vitu2_page_scroll_pane_g2

0x0001,

0xfacc,	// (0x0002e79e) vitu2_page_scroll_pane_g

0x77fc,	// (0x000264ce) vitu2_page_scroll_pane_t1

0xd7f2,	// (0x0002c4c4) popup_char_count_window_g1

0xd7fb,	// (0x0002c4cd) popup_char_count_window_g2

0xd804,	// (0x0002c4d6) popup_char_count_window_g3

0x0002,

0xfad1,	// (0x0002e7a3) popup_char_count_window_g

0xd80d,	// (0x0002c4df) popup_char_count_window_t1

0x9c03,	// (0x000288d5) main_vded2_pane

0xcc44,	// (0x0002b916) aid_size_cell_imed_line

0xcc4e,	// (0x0002b920) grid_imed_line_width_pane

0x1a1e,	// (0x000206f0) vid4_indicators_pane_g4

0xd81b,	// (0x0002c4ed) cell_imed_line_width_pane_ParamLimits

0xd81b,	// (0x0002c4ed) cell_imed_line_width_pane

0xd831,	// (0x0002c503) cell_imed_line_width_pane_g1

0xd51e,	// (0x0002c1f0) cell_imed_line_width_pane_g2

0x0001,

0xfad8,	// (0x0002e7aa) cell_imed_line_width_pane_g

0x780b,	// (0x000264dd) main_vded2_pane_g1_ParamLimits

0x780b,	// (0x000264dd) main_vded2_pane_g1

0x781a,	// (0x000264ec) main_vded2_pane_g2_ParamLimits

0x781a,	// (0x000264ec) main_vded2_pane_g2

0x0001,

0xfadd,	// (0x0002e7af) main_vded2_pane_g_ParamLimits

0xfadd,	// (0x0002e7af) main_vded2_pane_g

0x7828,	// (0x000264fa) vded2_slider_pane_ParamLimits

0x7828,	// (0x000264fa) vded2_slider_pane

0x7835,	// (0x00026507) aid_size_touch_vded2_end

0x783f,	// (0x00026511) aid_size_touch_vded2_playhead

0xd83a,	// (0x0002c50c) aid_size_touch_vded2_start

0xd842,	// (0x0002c514) vded2_slider_bg_pane

0xd84b,	// (0x0002c51d) vded2_slider_pane_g1

0xd854,	// (0x0002c526) vded2_slider_pane_g2

0x7847,	// (0x00026519) vded2_slider_pane_g3

0x0002,

0xfae2,	// (0x0002e7b4) vded2_slider_pane_g

0xd0bb,	// (0x0002bd8d) vded2_slider_bg_pane_g1

0xd0c4,	// (0x0002bd96) vded2_slider_bg_pane_g2

0xd0cd,	// (0x0002bd9f) vded2_slider_bg_pane_g3

0x0002,

0xf7a3,	// (0x0002e475) vded2_slider_bg_pane_g

0x4d2e,	// (0x00023a00) aid_postcard_touch_down_pane_ParamLimits

0x4d2e,	// (0x00023a00) aid_postcard_touch_down_pane

0x4d3e,	// (0x00023a10) aid_postcard_touch_up_pane_ParamLimits

0x4d3e,	// (0x00023a10) aid_postcard_touch_up_pane

0x9c03,	// (0x000288d5) main_blid2_pane

0xc30c,	// (0x0002afde) popup_blid2_search_window

0x9c03,	// (0x000288d5) blid2_gps_pane

0x9c03,	// (0x000288d5) blid2_navig_pane

0x9c03,	// (0x000288d5) blid2_search_pane

0x9c03,	// (0x000288d5) blid2_tripm_pane

0x7850,	// (0x00026522) blid2_search_pane_g1_ParamLimits

0x7850,	// (0x00026522) blid2_search_pane_g1

0x785c,	// (0x0002652e) blid2_search_pane_t1_ParamLimits

0x785c,	// (0x0002652e) blid2_search_pane_t1

0x786e,	// (0x00026540) aid_size_cell_blid2_gps_ParamLimits

0x786e,	// (0x00026540) aid_size_cell_blid2_gps

0x787e,	// (0x00026550) blid2_gps_pane_g1_ParamLimits

0x787e,	// (0x00026550) blid2_gps_pane_g1

0x788a,	// (0x0002655c) grid_blid2_satellite_pane_ParamLimits

0x788a,	// (0x0002655c) grid_blid2_satellite_pane

0x7898,	// (0x0002656a) blid2_navig_pane_g1_ParamLimits

0x7898,	// (0x0002656a) blid2_navig_pane_g1

0x78a4,	// (0x00026576) blid2_navig_pane_t1_ParamLimits

0x78a4,	// (0x00026576) blid2_navig_pane_t1

0x78b6,	// (0x00026588) blid2_navig_pane_t2_ParamLimits

0x78b6,	// (0x00026588) blid2_navig_pane_t2

0x0001,

0xfae9,	// (0x0002e7bb) blid2_navig_pane_t_ParamLimits

0xfae9,	// (0x0002e7bb) blid2_navig_pane_t

0x78c8,	// (0x0002659a) blid2_navig_ring_pane_ParamLimits

0x78c8,	// (0x0002659a) blid2_navig_ring_pane

0x78d8,	// (0x000265aa) blid2_speed_pane_ParamLimits

0x78d8,	// (0x000265aa) blid2_speed_pane

0x78e4,	// (0x000265b6) blid2_tripm_pane_g1_ParamLimits

0x78e4,	// (0x000265b6) blid2_tripm_pane_g1

0x78f4,	// (0x000265c6) blid2_tripm_pane_g2_ParamLimits

0x78f4,	// (0x000265c6) blid2_tripm_pane_g2

0x7900,	// (0x000265d2) blid2_tripm_pane_g3_ParamLimits

0x7900,	// (0x000265d2) blid2_tripm_pane_g3

0x790c,	// (0x000265de) blid2_tripm_pane_g4_ParamLimits

0x790c,	// (0x000265de) blid2_tripm_pane_g4

0x7918,	// (0x000265ea) blid2_tripm_pane_g5_ParamLimits

0x7918,	// (0x000265ea) blid2_tripm_pane_g5

0x0005,

0xfaee,	// (0x0002e7c0) blid2_tripm_pane_g_ParamLimits

0xfaee,	// (0x0002e7c0) blid2_tripm_pane_g

0x7934,	// (0x00026606) blid2_tripm_pane_t1_ParamLimits

0x7934,	// (0x00026606) blid2_tripm_pane_t1

0x7946,	// (0x00026618) blid2_tripm_pane_t2_ParamLimits

0x7946,	// (0x00026618) blid2_tripm_pane_t2

0x7958,	// (0x0002662a) blid2_tripm_pane_t3_ParamLimits

0x7958,	// (0x0002662a) blid2_tripm_pane_t3

0x0003,

0xfafb,	// (0x0002e7cd) blid2_tripm_pane_t_ParamLimits

0xfafb,	// (0x0002e7cd) blid2_tripm_pane_t

0x798a,	// (0x0002665c) cell_blid2_satellite_pane_ParamLimits

0x798a,	// (0x0002665c) cell_blid2_satellite_pane

0x79a8,	// (0x0002667a) cell_blid2_satellite_pane_g1

0xd85c,	// (0x0002c52e) cell_blid2_satellite_pane_t1

0xc74f,	// (0x0002b421) blid2_speed_pane_g1

0xd86a,	// (0x0002c53c) blid2_speed_pane_t1

0xd878,	// (0x0002c54a) blid2_speed_pane_t2

0x0001,

0xfb04,	// (0x0002e7d6) blid2_speed_pane_t

0xc74f,	// (0x0002b421) blid2_navig_ring_pane_g1

0x79b1,	// (0x00026683) blid2_navig_ring_pane_g2

0x79b9,	// (0x0002668b) blid2_navig_ring_pane_g3

0x79c1,	// (0x00026693) blid2_navig_ring_pane_g4

0x79c9,	// (0x0002669b) blid2_navig_ring_pane_g5

0x0004,

0xfb09,	// (0x0002e7db) blid2_navig_ring_pane_g

0x9c03,	// (0x000288d5) bg_popup_window_pane_cp011

0xd886,	// (0x0002c558) popup_blid2_search_window_g1

0xd88e,	// (0x0002c560) popup_blid2_search_window_t1

0xd89c,	// (0x0002c56e) popup_blid2_search_window_t2

0x0001,

0xfb14,	// (0x0002e7e6) popup_blid2_search_window_t

0xa6a7,	// (0x00029379) main_browser_pane_g1

0xa397,	// (0x00029069) main_browser_pane_ParamLimits

0x19c9,	// (0x0002069b) bg_button_pane_cp011_ParamLimits

0x1d46,	// (0x00020a18) cell_vitu2_function_pane_g1_ParamLimits

0xc2fe,	// (0x0002afd0) bg_popup_sub_pane_cp22_ParamLimits

0x7345,	// (0x00026017) input_focus_pane_cp08_ParamLimits

0x735c,	// (0x0002602e) popup_vitu2_query_button_pane_ParamLimits

0x735c,	// (0x0002602e) popup_vitu2_query_button_pane

0x736d,	// (0x0002603f) popup_vitu2_query_input_button_pane

0xd441,	// (0x0002c113) popup_vitu2_query_window_g1_ParamLimits

0x7377,	// (0x00026049) popup_vitu2_query_window_g2_ParamLimits

0xfa1c,	// (0x0002e6ee) popup_vitu2_query_window_g_ParamLimits

0x9c03,	// (0x000288d5) bg_button_pane_cp026

0x79d1,	// (0x000266a3) popup_vitu2_query_input_button_pane_g1

0x9c03,	// (0x000288d5) bg_button_pane_cp025

0xd8aa,	// (0x0002c57c) popup_vitu2_query_button_pane_t1

0x5bdd,	// (0x000248af) main_mp3_pane_t6

0x5bed,	// (0x000248bf) popup_slider_window_cp01

0x18eb,	// (0x000205bd) cam4_battery_pane

0x19d7,	// (0x000206a9) cam4_battery_pane_cp02

0x1eef,	// (0x00020bc1) cam4_battery_pane_cp01

0x1eef,	// (0x00020bc1) cam4_battery_pane_cp03

0xd526,	// (0x0002c1f8) cam4_battery_pane_g1

0xc74f,	// (0x0002b421) cam4_battery_pane_g2

0x0001,

0xfb19,	// (0x0002e7eb) cam4_battery_pane_g

0xc615,	// (0x0002b2e7) popup_blid_sat_info2_window_t11

0x4667,	// (0x00023339) aid_size_touch_mv_arrow_left_ParamLimits

0x4692,	// (0x00023364) aid_size_touch_mv_arrow_right_ParamLimits

0xadf3,	// (0x00029ac5) navi_pane_g1_ParamLimits

0x46d1,	// (0x000233a3) navi_pane_g2_ParamLimits

0x46ff,	// (0x000233d1) navi_pane_g3_ParamLimits

0xf3e5,	// (0x0002e0b7) navi_pane_g_ParamLimits

0x4759,	// (0x0002342b) navi_pane_mv_t1_ParamLimits

0x6660,	// (0x00025332) grid_imed_effect_pane_ParamLimits

0x3133,	// (0x00021e05) aid_placing_vt_slider_lsc

0xa5e4,	// (0x000292b6) aid_placing_vt_slider_prt

0xa610,	// (0x000292e2) bg_tb_trans_pane_cp01_ParamLimits

0xc89f,	// (0x0002b571) popup_image_details_window_g1_ParamLimits

0xc8b2,	// (0x0002b584) popup_image_details_window_g2_ParamLimits

0xc8c7,	// (0x0002b599) popup_image_details_window_g3_ParamLimits

0xc8c7,	// (0x0002b599) popup_image_details_window_g3

0xf718,	// (0x0002e3ea) popup_image_details_window_g_ParamLimits

0xc8db,	// (0x0002b5ad) popup_image_details_window_t1_ParamLimits

0xc8ed,	// (0x0002b5bf) popup_image_details_window_t2_ParamLimits

0xc906,	// (0x0002b5d8) popup_image_details_window_t3_ParamLimits

0xc91a,	// (0x0002b5ec) popup_image_details_window_t4_ParamLimits

0xc935,	// (0x0002b607) popup_image_details_window_t5_ParamLimits

0xf71f,	// (0x0002e3f1) popup_image_details_window_t_ParamLimits

0x76de,	// (0x000263b0) cl_header_name_pane_ParamLimits

0x76de,	// (0x000263b0) cl_header_name_pane

0x79d9,	// (0x000266ab) cl_header_name_pane_t1_ParamLimits

0x79d9,	// (0x000266ab) cl_header_name_pane_t1

0x79f0,	// (0x000266c2) cl_header_name_pane_t2_ParamLimits

0x79f0,	// (0x000266c2) cl_header_name_pane_t2

0x7a1a,	// (0x000266ec) cl_header_name_pane_t3_ParamLimits

0x7a1a,	// (0x000266ec) cl_header_name_pane_t3

0x0002,

0xfb1e,	// (0x0002e7f0) cl_header_name_pane_t_ParamLimits

0xfb1e,	// (0x0002e7f0) cl_header_name_pane_t

0x472a,	// (0x000233fc) navi_pane_mv_g2_ParamLimits

0xd16d,	// (0x0002be3f) field_vitu2_entry_pane_g1_ParamLimits

0xd179,	// (0x0002be4b) field_vitu2_entry_pane_g2_ParamLimits

0xd185,	// (0x0002be57) field_vitu2_entry_pane_g3_ParamLimits

0xd185,	// (0x0002be57) field_vitu2_entry_pane_g3

0xf91b,	// (0x0002e5ed) field_vitu2_entry_pane_g_ParamLimits

0x1c12,	// (0x000208e4) cell_vitu2_itu_pane_g1_ParamLimits

0x1c24,	// (0x000208f6) cell_vitu2_itu_pane_g2_ParamLimits

0x1c24,	// (0x000208f6) cell_vitu2_itu_pane_g2

0x0001,

0xf927,	// (0x0002e5f9) cell_vitu2_itu_pane_g_ParamLimits

0xf927,	// (0x0002e5f9) cell_vitu2_itu_pane_g

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp05_ParamLimits

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp05

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp03

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp04

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp10_ParamLimits

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp10

0x7680,	// (0x00026352) bg_vkb2_func_pane_cp08

0x7666,	// (0x00026338) bg_vkb2_func_pane_cp06

0x7674,	// (0x00026346) bg_vkb2_func_pane_cp07

0xd7c8,	// (0x0002c49a) bg_vkb2_func_pane_cp11_ParamLimits

0xd7c8,	// (0x0002c49a) bg_vkb2_func_pane_cp11

0xd7dd,	// (0x0002c4af) bg_vkb2_func_pane_cp12_ParamLimits

0xd7dd,	// (0x0002c4af) bg_vkb2_func_pane_cp12

0x9c03,	// (0x000288d5) bg_vkb2_func_pane_cp09

0xd1c2,	// (0x0002be94) bg_vkb2_func_pane_g1

0xa7b8,	// (0x0002948a) bg_vkb2_func_pane_g2

0xd1ca,	// (0x0002be9c) bg_vkb2_func_pane_g3

0xd1d2,	// (0x0002bea4) bg_vkb2_func_pane_g4

0xd3fa,	// (0x0002c0cc) bg_vkb2_func_pane_g5

0xd1ea,	// (0x0002bebc) bg_vkb2_func_pane_g6

0xd1f2,	// (0x0002bec4) bg_vkb2_func_pane_g7

0xd1e2,	// (0x0002beb4) bg_vkb2_func_pane_g8

0xa798,	// (0x0002946a) bg_vkb2_func_pane_g9

0x0008,

0xfb25,	// (0x0002e7f7) bg_vkb2_func_pane_g

0x7926,	// (0x000265f8) blid2_tripm_pane_g6_ParamLimits

0x7926,	// (0x000265f8) blid2_tripm_pane_g6

0xcfff,	// (0x0002bcd1) mp4_progress_pane_g1

0x797e,	// (0x00026650) blid2_tripm_values_pane_ParamLimits

0x797e,	// (0x00026650) blid2_tripm_values_pane

0x7a3f,	// (0x00026711) blid2_tripm_values_pane_t1

0x7a4d,	// (0x0002671f) blid2_tripm_values_pane_t2

0x7a5b,	// (0x0002672d) blid2_tripm_values_pane_t3

0x7a69,	// (0x0002673b) blid2_tripm_values_pane_t4

0x7a77,	// (0x00026749) blid2_tripm_values_pane_t5

0x7a85,	// (0x00026757) blid2_tripm_values_pane_t6

0x7a93,	// (0x00026765) blid2_tripm_values_pane_t7

0x7aa1,	// (0x00026773) blid2_tripm_values_pane_t8

0x7aaf,	// (0x00026781) blid2_tripm_values_pane_t9

0x0008,

0xfb38,	// (0x0002e80a) blid2_tripm_values_pane_t

0x3171,	// (0x00021e43) call_video_pane_t1_ParamLimits

0x318e,	// (0x00021e60) call_video_pane_t2_ParamLimits

0xf26e,	// (0x0002df40) call_video_pane_t_ParamLimits

0x4cab,	// (0x0002397d) msg_header_pane_g1_ParamLimits

0xb01c,	// (0x00029cee) msg_header_pane_g2_ParamLimits

0xb01c,	// (0x00029cee) msg_header_pane_g2

0x0001,

0xf488,	// (0x0002e15a) msg_header_pane_g_ParamLimits

0xf488,	// (0x0002e15a) msg_header_pane_g

0xa397,	// (0x00029069) main_clock2_pane_ParamLimits

0x6467,	// (0x00025139) grid_clock2_toolbar_pane_ParamLimits

0x6467,	// (0x00025139) grid_clock2_toolbar_pane

0x6467,	// (0x00025139) listscroll_clock2_pane_ParamLimits

0x6467,	// (0x00025139) listscroll_clock2_pane

0x650f,	// (0x000251e1) main_clock2_pane_t3_ParamLimits

0x650f,	// (0x000251e1) main_clock2_pane_t3

0x6521,	// (0x000251f3) main_clock2_pane_t4_ParamLimits

0x6521,	// (0x000251f3) main_clock2_pane_t4

0xd8b8,	// (0x0002c58a) cell_clock2_toolbar_pane

0xd8c0,	// (0x0002c592) cell_clock2_toolbar_pane_cp01

0xd8c0,	// (0x0002c592) cell_clock2_toolbar_pane_cp02

0xd8c8,	// (0x0002c59a) cell_clock2_toolbar_pane_cp03

0xd8d0,	// (0x0002c5a2) list_clock2_pane

0xad59,	// (0x00029a2b) scroll_pane_cp10

0xd8d8,	// (0x0002c5aa) list_single_clock2_pane_ParamLimits

0xd8d8,	// (0x0002c5aa) list_single_clock2_pane

0xa54d,	// (0x0002921f) list_highlight_pane_cp08

0xd8e5,	// (0x0002c5b7) list_single_clock2_pane_t1

0xd8f3,	// (0x0002c5c5) list_single_clock2_pane_t2

0x0001,

0xfb4b,	// (0x0002e81d) list_single_clock2_pane_t

0x9c03,	// (0x000288d5) bg_button_pane_cp10

0xd901,	// (0x0002c5d3) cell_clock2_toolbar_pane_g1

0x0f98,	// (0x0001fc6a) aid_main_viewer_pane_g1_ParamLimits

0x0f98,	// (0x0001fc6a) aid_main_viewer_pane_g1

0x0fa4,	// (0x0001fc76) aid_main_viewer_pane_g2_ParamLimits

0x0fa4,	// (0x0001fc76) aid_main_viewer_pane_g2

0x4cea,	// (0x000239bc) aid_main_viewer_pane_g3_ParamLimits

0x4cea,	// (0x000239bc) aid_main_viewer_pane_g3

0x4cfb,	// (0x000239cd) aid_main_viewer_pane_g4_ParamLimits

0x4cfb,	// (0x000239cd) aid_main_viewer_pane_g4

0x0003,

0xf499,	// (0x0002e16b) aid_main_viewer_pane_g_ParamLimits

0xf499,	// (0x0002e16b) aid_main_viewer_pane_g

0x5443,	// (0x00024115) main_calc_pane_ParamLimits

0x5450,	// (0x00024122) main_dialer2_pane_ParamLimits

0x9c03,	// (0x000288d5) main_cam6_pane

0x9c03,	// (0x000288d5) main_vid6_pane

0x6473,	// (0x00025145) listscroll_gen_pane_cp06_ParamLimits

0x6473,	// (0x00025145) listscroll_gen_pane_cp06

0x6533,	// (0x00025205) main_clock2_pane_t5_ParamLimits

0x6533,	// (0x00025205) main_clock2_pane_t5

0x6582,	// (0x00025254) aid_call2_pane_cp10_ParamLimits

0x6594,	// (0x00025266) aid_call_pane_cp10_ParamLimits

0xadc8,	// (0x00029a9a) popup_clock_analogue_window_cp10_g1_ParamLimits

0xadc8,	// (0x00029a9a) popup_clock_analogue_window_cp10_g2_ParamLimits

0x65a6,	// (0x00025278) popup_clock_analogue_window_cp10_g3_ParamLimits

0x65a6,	// (0x00025278) popup_clock_analogue_window_cp10_g4_ParamLimits

0xadc8,	// (0x00029a9a) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7d4,	// (0x0002e4a6) popup_clock_analogue_window_cp10_g_ParamLimits

0x65b8,	// (0x0002528a) popup_clock_analogue_window_cp10_t1_ParamLimits

0x69c8,	// (0x0002569a) cell_dialer2_keypad_pane_g2_ParamLimits

0x69c8,	// (0x0002569a) cell_dialer2_keypad_pane_g2

0x0001,

0xf8ba,	// (0x0002e58c) cell_dialer2_keypad_pane_g_ParamLimits

0xf8ba,	// (0x0002e58c) cell_dialer2_keypad_pane_g

0x69e4,	// (0x000256b6) cell_dialer2_keypad_pane_t1

0x6e74,	// (0x00025b46) main_cset_text2_pane_ParamLimits

0x6e74,	// (0x00025b46) main_cset_text2_pane

0xd672,	// (0x0002c344) area_vitu2_query_pane_g1_ParamLimits

0x7605,	// (0x000262d7) area_vitu2_query_pane_g2_ParamLimits

0xfa6f,	// (0x0002e741) area_vitu2_query_pane_g_ParamLimits

0xd6f6,	// (0x0002c3c8) area_vitu2_query_pane_t7_ParamLimits

0xd6f6,	// (0x0002c3c8) area_vitu2_query_pane_t7

0x7666,	// (0x00026338) bg_button_pane_cp018_ParamLimits

0x7674,	// (0x00026346) bg_button_pane_cp021_ParamLimits

0x7680,	// (0x00026352) bg_button_pane_cp022_ParamLimits

0x7680,	// (0x00026352) bg_vkb2_func_pane_cp08_ParamLimits

0x7666,	// (0x00026338) bg_vkb2_func_pane_cp06_ParamLimits

0x7674,	// (0x00026346) bg_vkb2_func_pane_cp07_ParamLimits

0x7691,	// (0x00026363) input_focus_pane_cp09_ParamLimits

0x1f8d,	// (0x00020c5f) cam6_autofocus_pane_ParamLimits

0x1f8d,	// (0x00020c5f) cam6_autofocus_pane

0x1faf,	// (0x00020c81) cam6_image_uncrop_pane_ParamLimits

0x1faf,	// (0x00020c81) cam6_image_uncrop_pane

0x1fdc,	// (0x00020cae) cam6_indi_pane_ParamLimits

0x1fdc,	// (0x00020cae) cam6_indi_pane

0x1ff6,	// (0x00020cc8) cam6_mode_pane_ParamLimits

0x1ff6,	// (0x00020cc8) cam6_mode_pane

0x200a,	// (0x00020cdc) cam6_timer_pane_ParamLimits

0x200a,	// (0x00020cdc) cam6_timer_pane

0x2016,	// (0x00020ce8) cam6_zoom_pane_ParamLimits

0x2016,	// (0x00020ce8) cam6_zoom_pane

0x7abd,	// (0x0002678f) cam6_mode_pane_g1_ParamLimits

0x7abd,	// (0x0002678f) cam6_mode_pane_g1

0x7ac9,	// (0x0002679b) cam6_mode_pane_g2_ParamLimits

0x7ac9,	// (0x0002679b) cam6_mode_pane_g2

0x7ad5,	// (0x000267a7) cam6_mode_pane_g3_ParamLimits

0x7ad5,	// (0x000267a7) cam6_mode_pane_g3

0x7ae1,	// (0x000267b3) cam6_mode_pane_g4_ParamLimits

0x7ae1,	// (0x000267b3) cam6_mode_pane_g4

0x0003,

0xfb50,	// (0x0002e822) cam6_mode_pane_g_ParamLimits

0xfb50,	// (0x0002e822) cam6_mode_pane_g

0xd0d6,	// (0x0002bda8) bg_tb_trans_pane_cp08_ParamLimits

0xd0d6,	// (0x0002bda8) bg_tb_trans_pane_cp08

0xd909,	// (0x0002c5db) cam6_battery_pane_ParamLimits

0xd909,	// (0x0002c5db) cam6_battery_pane

0xd91f,	// (0x0002c5f1) cam6_indi_pane_g1_ParamLimits

0xd91f,	// (0x0002c5f1) cam6_indi_pane_g1

0xd931,	// (0x0002c603) cam6_indi_pane_g2_ParamLimits

0xd931,	// (0x0002c603) cam6_indi_pane_g2

0xd943,	// (0x0002c615) cam6_indi_pane_g3_ParamLimits

0xd943,	// (0x0002c615) cam6_indi_pane_g3

0x0002,

0xfb59,	// (0x0002e82b) cam6_indi_pane_g_ParamLimits

0xfb59,	// (0x0002e82b) cam6_indi_pane_g

0xd955,	// (0x0002c627) cam6_indi_pane_t1_ParamLimits

0xd955,	// (0x0002c627) cam6_indi_pane_t1

0x6b67,	// (0x00025839) cam6_autofocus_pane_g1

0x6b5f,	// (0x00025831) cam6_autofocus_pane_g2

0x6b77,	// (0x00025849) cam6_autofocus_pane_g3

0x6b6f,	// (0x00025841) cam6_autofocus_pane_g4

0x0003,

0xfb60,	// (0x0002e832) cam6_autofocus_pane_g

0xd97b,	// (0x0002c64d) cam6_timer_pane_g1

0xd983,	// (0x0002c655) cam6_timer_pane_t1

0xd991,	// (0x0002c663) cam6_zoom_cont_pane

0xd999,	// (0x0002c66b) cam6_zoom_pane_g1

0xd9a1,	// (0x0002c673) cam6_zoom_pane_g2

0x7aed,	// (0x000267bf) cam6_zoom_pane_g3

0x0002,

0xfb69,	// (0x0002e83b) cam6_zoom_pane_g

0xc74f,	// (0x0002b421) cam6_battery_pane_g1

0xc74f,	// (0x0002b421) cam6_battery_pane_g2

0x0001,

0xf6dc,	// (0x0002e3ae) cam6_battery_pane_g

0xd9a9,	// (0x0002c67b) cam6_zoom_cont_pane_g1

0xd9b2,	// (0x0002c684) cam6_zoom_cont_pane_g2

0xd9bb,	// (0x0002c68d) cam6_zoom_cont_pane_g3

0x0002,

0xfb70,	// (0x0002e842) cam6_zoom_cont_pane_g

0x7b0a,	// (0x000267dc) cam6_mode_pane_cp_ParamLimits

0x7b0a,	// (0x000267dc) cam6_mode_pane_cp

0x7b1e,	// (0x000267f0) cam6_zoom_pane_cp_ParamLimits

0x7b1e,	// (0x000267f0) cam6_zoom_pane_cp

0x7b3a,	// (0x0002680c) vid6_image_uncrop_cif_pane_ParamLimits

0x7b3a,	// (0x0002680c) vid6_image_uncrop_cif_pane

0x7b66,	// (0x00026838) vid6_image_uncrop_nhd_pane_ParamLimits

0x7b66,	// (0x00026838) vid6_image_uncrop_nhd_pane

0x7b85,	// (0x00026857) vid6_image_uncrop_vga_pane_ParamLimits

0x7b85,	// (0x00026857) vid6_image_uncrop_vga_pane

0x7ba4,	// (0x00026876) vid6_image_uncrop_wvga_pane_ParamLimits

0x7ba4,	// (0x00026876) vid6_image_uncrop_wvga_pane

0x7bc3,	// (0x00026895) vid6_indi_pane_ParamLimits

0x7bc3,	// (0x00026895) vid6_indi_pane

0xd0d6,	// (0x0002bda8) bg_tb_trans_pane_cp09_ParamLimits

0xd0d6,	// (0x0002bda8) bg_tb_trans_pane_cp09

0xd9d3,	// (0x0002c6a5) cam6_battery_pane_cp_ParamLimits

0xd9d3,	// (0x0002c6a5) cam6_battery_pane_cp

0xd9df,	// (0x0002c6b1) vid6_indi_pane_g1_ParamLimits

0xd9df,	// (0x0002c6b1) vid6_indi_pane_g1

0xd9f1,	// (0x0002c6c3) vid6_indi_pane_g2_ParamLimits

0xd9f1,	// (0x0002c6c3) vid6_indi_pane_g2

0xda03,	// (0x0002c6d5) vid6_indi_pane_g3_ParamLimits

0xda03,	// (0x0002c6d5) vid6_indi_pane_g3

0xda1a,	// (0x0002c6ec) vid6_indi_pane_g4_ParamLimits

0xda1a,	// (0x0002c6ec) vid6_indi_pane_g4

0xda31,	// (0x0002c703) vid6_indi_pane_g5_ParamLimits

0xda31,	// (0x0002c703) vid6_indi_pane_g5

0x0004,

0xfb77,	// (0x0002e849) vid6_indi_pane_g_ParamLimits

0xfb77,	// (0x0002e849) vid6_indi_pane_g

0xda4b,	// (0x0002c71d) vid6_indi_pane_t1_ParamLimits

0xda4b,	// (0x0002c71d) vid6_indi_pane_t1

0xda61,	// (0x0002c733) vid6_indi_pane_t2_ParamLimits

0xda61,	// (0x0002c733) vid6_indi_pane_t2

0xda89,	// (0x0002c75b) vid6_indi_pane_t3_ParamLimits

0xda89,	// (0x0002c75b) vid6_indi_pane_t3

0xdab1,	// (0x0002c783) vid6_indi_pane_t4_ParamLimits

0xdab1,	// (0x0002c783) vid6_indi_pane_t4

0x0003,

0xfb82,	// (0x0002e854) vid6_indi_pane_t_ParamLimits

0xfb82,	// (0x0002e854) vid6_indi_pane_t

0xdad5,	// (0x0002c7a7) wait_bar_pane_cp08

0x7be8,	// (0x000268ba) main_cset_text2_pane_t1_ParamLimits

0x7be8,	// (0x000268ba) main_cset_text2_pane_t1

0x7af5,	// (0x000267c7) listscroll_gen_pane_cp06_t1_ParamLimits

0x7af5,	// (0x000267c7) listscroll_gen_pane_cp06_t1

0x9c03,	// (0x000288d5) main_cam6_set_pane

0x18dd,	// (0x000205af) bg_tb_trans_pane_cp06_ParamLimits

0x18f3,	// (0x000205c5) cam4_indicators_pane_g1_ParamLimits

0x1904,	// (0x000205d6) cam4_indicators_pane_g2_ParamLimits

0xf8f7,	// (0x0002e5c9) cam4_indicators_pane_g_ParamLimits

0x191c,	// (0x000205ee) cam4_indicators_pane_t1_ParamLimits

0x19c9,	// (0x0002069b) bg_tb_trans_pane_cp07_ParamLimits

0x19e1,	// (0x000206b3) vid4_indicators_pane_g1_ParamLimits

0x19f7,	// (0x000206c9) vid4_indicators_pane_g2_ParamLimits

0x1a0b,	// (0x000206dd) vid4_indicators_pane_g3_ParamLimits

0x1a1e,	// (0x000206f0) vid4_indicators_pane_g4_ParamLimits

0xf909,	// (0x0002e5db) vid4_indicators_pane_g_ParamLimits

0x1a3c,	// (0x0002070e) vid4_indicators_pane_t1_ParamLimits

0x1ef7,	// (0x00020bc9) vid4_progress_pane_g1_ParamLimits

0x1f09,	// (0x00020bdb) vid4_progress_pane_g2_ParamLimits

0x0fda,	// (0x0001fcac) vid4_progress_pane_g3_ParamLimits

0x1f1b,	// (0x00020bed) vid4_progress_pane_g4_ParamLimits

0xfaba,	// (0x0002e78c) vid4_progress_pane_g_ParamLimits

0x1f39,	// (0x00020c0b) vid4_progress_pane_t1_ParamLimits

0x1f4e,	// (0x00020c20) vid4_progress_pane_t2_ParamLimits

0x1f64,	// (0x00020c36) vid4_progress_pane_t3_ParamLimits

0xfac5,	// (0x0002e797) vid4_progress_pane_t_ParamLimits

0x1f79,	// (0x00020c4b) wait_bar_pane_cp07_ParamLimits

0x7c0f,	// (0x000268e1) main_cam6_set_pane_g2_ParamLimits

0x7c0f,	// (0x000268e1) main_cam6_set_pane_g2

0x7c1b,	// (0x000268ed) main_cset6_listscroll_pane_ParamLimits

0x7c1b,	// (0x000268ed) main_cset6_listscroll_pane

0x7c48,	// (0x0002691a) main_cset6_slider_pane_ParamLimits

0x7c48,	// (0x0002691a) main_cset6_slider_pane

0x7c54,	// (0x00026926) main_cset6_text2_pane_ParamLimits

0x7c54,	// (0x00026926) main_cset6_text2_pane

0xdae4,	// (0x0002c7b6) main_cset6_text_pane

0xdaec,	// (0x0002c7be) main_cset_list_pane_copy1_ParamLimits

0xdaec,	// (0x0002c7be) main_cset_list_pane_copy1

0xdafc,	// (0x0002c7ce) scroll_pane_cp028_copy1

0x7c67,	// (0x00026939) cset_list_set_pane_copy1

0x7c77,	// (0x00026949) aid_position_infowindow_above_copy1

0x7c7f,	// (0x00026951) aid_position_infowindow_below_copy1

0x7c87,	// (0x00026959) cset_list_set_pane_g1_copy1

0x7c8f,	// (0x00026961) cset_list_set_pane_g3_copy1_ParamLimits

0x7c8f,	// (0x00026961) cset_list_set_pane_g3_copy1

0x7c9e,	// (0x00026970) cset_list_set_pane_t1_copy1_ParamLimits

0x7c9e,	// (0x00026970) cset_list_set_pane_t1_copy1

0xa610,	// (0x000292e2) list_highlight_pane_cp021_copy1_ParamLimits

0xa610,	// (0x000292e2) list_highlight_pane_cp021_copy1

0xdb05,	// (0x0002c7d7) cset6_slider_pane_ParamLimits

0xdb05,	// (0x0002c7d7) cset6_slider_pane

0xdb31,	// (0x0002c803) main_cset6_slider_pane_g1_ParamLimits

0xdb31,	// (0x0002c803) main_cset6_slider_pane_g1

0x7cb3,	// (0x00026985) main_cset6_slider_pane_g2_ParamLimits

0x7cb3,	// (0x00026985) main_cset6_slider_pane_g2

0xdb59,	// (0x0002c82b) main_cset6_slider_pane_g3_ParamLimits

0xdb59,	// (0x0002c82b) main_cset6_slider_pane_g3

0x7cdb,	// (0x000269ad) main_cset6_slider_pane_g4_ParamLimits

0x7cdb,	// (0x000269ad) main_cset6_slider_pane_g4

0x7ce7,	// (0x000269b9) main_cset6_slider_pane_g5_ParamLimits

0x7ce7,	// (0x000269b9) main_cset6_slider_pane_g5

0xd2f5,	// (0x0002bfc7) main_cset6_slider_pane_g7_ParamLimits

0xd2f5,	// (0x0002bfc7) main_cset6_slider_pane_g7

0xd301,	// (0x0002bfd3) main_cset6_slider_pane_g8_ParamLimits

0xd301,	// (0x0002bfd3) main_cset6_slider_pane_g8

0x7cf3,	// (0x000269c5) main_cset6_slider_pane_g9_ParamLimits

0x7cf3,	// (0x000269c5) main_cset6_slider_pane_g9

0x7cff,	// (0x000269d1) main_cset6_slider_pane_g10_ParamLimits

0x7cff,	// (0x000269d1) main_cset6_slider_pane_g10

0x7d0b,	// (0x000269dd) main_cset6_slider_pane_g11_ParamLimits

0x7d0b,	// (0x000269dd) main_cset6_slider_pane_g11

0x7d17,	// (0x000269e9) main_cset6_slider_pane_g12_ParamLimits

0x7d17,	// (0x000269e9) main_cset6_slider_pane_g12

0x7d23,	// (0x000269f5) main_cset6_slider_pane_g13_ParamLimits

0x7d23,	// (0x000269f5) main_cset6_slider_pane_g13

0x7d2f,	// (0x00026a01) main_cset6_slider_pane_g14_ParamLimits

0x7d2f,	// (0x00026a01) main_cset6_slider_pane_g14

0x7d3b,	// (0x00026a0d) main_cset6_slider_pane_g15_ParamLimits

0x7d3b,	// (0x00026a0d) main_cset6_slider_pane_g15

0x7d53,	// (0x00026a25) main_cset6_slider_pane_g16_ParamLimits

0x7d53,	// (0x00026a25) main_cset6_slider_pane_g16

0x7d5f,	// (0x00026a31) main_cset6_slider_pane_g17_ParamLimits

0x7d5f,	// (0x00026a31) main_cset6_slider_pane_g17

0x0011,

0xfb8b,	// (0x0002e85d) main_cset6_slider_pane_g_ParamLimits

0xfb8b,	// (0x0002e85d) main_cset6_slider_pane_g

0xdb65,	// (0x0002c837) main_cset6_slider_pane_t1_ParamLimits

0xdb65,	// (0x0002c837) main_cset6_slider_pane_t1

0x7d83,	// (0x00026a55) main_cset6_slider_pane_t2_ParamLimits

0x7d83,	// (0x00026a55) main_cset6_slider_pane_t2

0x7dae,	// (0x00026a80) main_cset6_slider_pane_t3_ParamLimits

0x7dae,	// (0x00026a80) main_cset6_slider_pane_t3

0x7dd9,	// (0x00026aab) main_cset6_slider_pane_t4_ParamLimits

0x7dd9,	// (0x00026aab) main_cset6_slider_pane_t4

0x7e04,	// (0x00026ad6) main_cset6_slider_pane_t5_ParamLimits

0x7e04,	// (0x00026ad6) main_cset6_slider_pane_t5

0xdba6,	// (0x0002c878) main_cset6_slider_pane_t7_ParamLimits

0xdba6,	// (0x0002c878) main_cset6_slider_pane_t7

0x7e2f,	// (0x00026b01) main_cset6_slider_pane_t8_ParamLimits

0x7e2f,	// (0x00026b01) main_cset6_slider_pane_t8

0x7e53,	// (0x00026b25) main_cset6_slider_pane_t9_ParamLimits

0x7e53,	// (0x00026b25) main_cset6_slider_pane_t9

0x7e77,	// (0x00026b49) main_cset6_slider_pane_t10_ParamLimits

0x7e77,	// (0x00026b49) main_cset6_slider_pane_t10

0x7e9b,	// (0x00026b6d) main_cset6_slider_pane_t11_ParamLimits

0x7e9b,	// (0x00026b6d) main_cset6_slider_pane_t11

0xdbdc,	// (0x0002c8ae) main_cset6_slider_pane_t14_ParamLimits

0xdbdc,	// (0x0002c8ae) main_cset6_slider_pane_t14

0xdc15,	// (0x0002c8e7) main_cset6_slider_pane_t15_ParamLimits

0xdc15,	// (0x0002c8e7) main_cset6_slider_pane_t15

0x000b,

0xfbb0,	// (0x0002e882) main_cset6_slider_pane_t_ParamLimits

0xfbb0,	// (0x0002e882) main_cset6_slider_pane_t

0xd4eb,	// (0x0002c1bd) cset_slider_pane_g1_copy1

0xd4f4,	// (0x0002c1c6) cset_slider_pane_g2_copy1

0xd4fd,	// (0x0002c1cf) cset_slider_pane_g3_copy1

0x9c03,	// (0x000288d5) bg_popup_sub_pane_cp011_copy1

0xdc4e,	// (0x0002c920) main_cset_text_pane_g1_copy1

0xd455,	// (0x0002c127) main_cset_text_pane_t1_copy1

0xd463,	// (0x0002c135) main_cset_text_pane_t2_copy1

0xd471,	// (0x0002c143) main_cset_text_pane_t3_copy1

0xd47f,	// (0x0002c151) main_cset_text_pane_t4_copy1

0xd48d,	// (0x0002c15f) main_cset_text_pane_t5_copy1

0xdc56,	// (0x0002c928) main_cset_text_pane_t6_copy1

0xdc64,	// (0x0002c936) main_cset_text_pane_t7_copy1

0x7f8e,	// (0x00026c60) main_cset_text2_pane_t1_copy1

0xa610,	// (0x000292e2) main_ncimui_pane

0x5495,	// (0x00024167) popup_query_ncimui_window_ParamLimits

0x5495,	// (0x00024167) popup_query_ncimui_window

0xc9e4,	// (0x0002b6b6) field_cale_ev2_pane_g4_ParamLimits

0xc9e4,	// (0x0002b6b6) field_cale_ev2_pane_g4

0x6968,	// (0x0002563a) cell_video_dialer_keypad_pane_g2_ParamLimits

0x6968,	// (0x0002563a) cell_video_dialer_keypad_pane_g2

0x0001,

0xf895,	// (0x0002e567) cell_video_dialer_keypad_pane_g_ParamLimits

0xf895,	// (0x0002e567) cell_video_dialer_keypad_pane_g

0x6980,	// (0x00025652) cell_video_dialer_keypad_pane_t1

0x9c03,	// (0x000288d5) bg_popup_window_pane_cp012

0xac45,	// (0x00029917) heading_pane_cp06

0xdc90,	// (0x0002c962) ncim_query_content_pane

0x9c03,	// (0x000288d5) bg_popup_heading_pane_cp01

0xdc98,	// (0x0002c96a) ncim_heading_pane_t1

0xdca6,	// (0x0002c978) ncim_indicator_popup_pane

0xdcb8,	// (0x0002c98a) ncim_query_button_pane

0xdcce,	// (0x0002c9a0) ncim_query_content_pane_t1

0xdce0,	// (0x0002c9b2) ncim_query_content_pane_t2

0x0005,

0xfbf4,	// (0x0002e8c6) ncim_query_content_pane_t

0xdd1a,	// (0x0002c9ec) ncim_query_list_pane

0xdd2c,	// (0x0002c9fe) ncim_query_popup_pane

0xdca6,	// (0x0002c978) ncim_indicator_popup_pane_ParamLimits

0x80ea,	// (0x00026dbc) ncim_query_content_pane_g1_ParamLimits

0x80ea,	// (0x00026dbc) ncim_query_content_pane_g1

0xdcce,	// (0x0002c9a0) ncim_query_content_pane_t1_ParamLimits

0xdce0,	// (0x0002c9b2) ncim_query_content_pane_t2_ParamLimits

0x80f6,	// (0x00026dc8) ncim_query_content_pane_t3_ParamLimits

0x80f6,	// (0x00026dc8) ncim_query_content_pane_t3

0x8113,	// (0x00026de5) ncim_query_content_pane_t4_ParamLimits

0x8113,	// (0x00026de5) ncim_query_content_pane_t4

0x8130,	// (0x00026e02) ncim_query_content_pane_t5_ParamLimits

0x8130,	// (0x00026e02) ncim_query_content_pane_t5

0xdcf2,	// (0x0002c9c4) ncim_query_content_pane_t6_ParamLimits

0xdcf2,	// (0x0002c9c4) ncim_query_content_pane_t6

0xfbf4,	// (0x0002e8c6) ncim_query_content_pane_t_ParamLimits

0xdd1a,	// (0x0002c9ec) ncim_query_list_pane_ParamLimits

0xdd2c,	// (0x0002c9fe) ncim_query_popup_pane_ParamLimits

0xdd40,	// (0x0002ca12) wait_bar_pane_cp04

0x9c03,	// (0x000288d5) input_focus_pane_cp011

0xdd48,	// (0x0002ca1a) ncim_query_popup_pane_t1

0xdd56,	// (0x0002ca28) ncim_list_query_list_pane_ParamLimits

0xdd56,	// (0x0002ca28) ncim_list_query_list_pane

0x9c03,	// (0x000288d5) bg_button_pane_cp027

0xdd69,	// (0x0002ca3b) ncim_query_button_pane_g1

0x9c03,	// (0x000288d5) list_highlight_pane_cp012

0xdd73,	// (0x0002ca45) ncim_list_query_list_pane_g1

0xdd7b,	// (0x0002ca4d) ncim_list_query_list_pane_t1

0x1910,	// (0x000205e2) cam4_indicators_pane_g3_ParamLimits

0x1910,	// (0x000205e2) cam4_indicators_pane_g3

0x1a2a,	// (0x000206fc) vid4_indicators_pane_g5_ParamLimits

0x1a2a,	// (0x000206fc) vid4_indicators_pane_g5

0x1f2a,	// (0x00020bfc) vid4_progress_pane_g5_ParamLimits

0x1f2a,	// (0x00020bfc) vid4_progress_pane_g5

0x7fc0,	// (0x00026c92) main_ncimui_pane_g1

0x802c,	// (0x00026cfe) ncimui_group_query_pane_ParamLimits

0x802c,	// (0x00026cfe) ncimui_group_query_pane

0x8086,	// (0x00026d58) ncimui_list_pane_ParamLimits

0x8086,	// (0x00026d58) ncimui_list_pane

0x80ad,	// (0x00026d7f) ncimui_text_pane_ParamLimits

0x80ad,	// (0x00026d7f) ncimui_text_pane

0x814d,	// (0x00026e1f) ncimui_text_pane_t1_ParamLimits

0x814d,	// (0x00026e1f) ncimui_text_pane_t1

0xdd89,	// (0x0002ca5b) ncimui_list_single_graphic_pane_ParamLimits

0xdd89,	// (0x0002ca5b) ncimui_list_single_graphic_pane

0x816c,	// (0x00026e3e) ncimui_query_pane_ParamLimits

0x816c,	// (0x00026e3e) ncimui_query_pane

0x9c03,	// (0x000288d5) list_highlight_pane_cp013

0xdd99,	// (0x0002ca6b) ncim_list_query_list_pane_t1_copy1

0xdd73,	// (0x0002ca45) ncim_list_single_graphic_pane_g1

0xdda7,	// (0x0002ca79) ncim_query_button_pane_cp01

0xddb3,	// (0x0002ca85) ncim_query_entry_pane_ParamLimits

0xddb3,	// (0x0002ca85) ncim_query_entry_pane

0xddc6,	// (0x0002ca98) ncimui_query_pane_g1

0xddd2,	// (0x0002caa4) ncimui_query_pane_t1_ParamLimits

0xddd2,	// (0x0002caa4) ncimui_query_pane_t1

0xa610,	// (0x000292e2) input_focus_pane_cp012

0xddeb,	// (0x0002cabd) ncim_query_entry_pane_t1

0xa397,	// (0x00029069) main_im_pane_ParamLimits

0xa610,	// (0x000292e2) main_mobtv_pane_ParamLimits

0xa610,	// (0x000292e2) main_mobtv_pane

0x7d6b,	// (0x00026a3d) main_cset6_slider_pane_g18_ParamLimits

0x7d6b,	// (0x00026a3d) main_cset6_slider_pane_g18

0x7d77,	// (0x00026a49) main_cset6_slider_pane_g19_ParamLimits

0x7d77,	// (0x00026a49) main_cset6_slider_pane_g19

0xd185,	// (0x0002be57) bg_main_mobtv_pane_ParamLimits

0xd185,	// (0x0002be57) bg_main_mobtv_pane

0x817f,	// (0x00026e51) main_mobtv_info_pane

0x818a,	// (0x00026e5c) main_mobtv_loading_pane_ParamLimits

0x818a,	// (0x00026e5c) main_mobtv_loading_pane

0xddfd,	// (0x0002cacf) main_mobtv_pg_channel_list_pane

0xde07,	// (0x0002cad9) main_mobtv_pg_hdr_pane

0x8197,	// (0x00026e69) main_mobtv_programe_curr_pane_ParamLimits

0x8197,	// (0x00026e69) main_mobtv_programe_curr_pane

0x81a4,	// (0x00026e76) main_mobtv_programe_next_pane_ParamLimits

0x81a4,	// (0x00026e76) main_mobtv_programe_next_pane

0xde10,	// (0x0002cae2) popup_mobtv_noti_window

0xc74f,	// (0x0002b421) main_tv_pg_hdr_pane_g1

0xde1a,	// (0x0002caec) main_tv_pg_hdr_pane_g2

0xde22,	// (0x0002caf4) main_tv_pg_hdr_pane_g3

0xde2a,	// (0x0002cafc) main_tv_pg_hdr_pane_g4

0xde32,	// (0x0002cb04) main_tv_pg_hdr_pane_g5

0xde3c,	// (0x0002cb0e) main_tv_pg_hdr_pane_g6

0xde46,	// (0x0002cb18) main_tv_pg_hdr_pane_g7

0xde50,	// (0x0002cb22) main_tv_pg_hdr_pane_g8

0xde5a,	// (0x0002cb2c) main_tv_pg_hdr_pane_g9

0xde64,	// (0x0002cb36) main_tv_pg_hdr_pane_g10

0xde6e,	// (0x0002cb40) main_tv_pg_hdr_pane_g11

0x000a,

0xfc01,	// (0x0002e8d3) main_tv_pg_hdr_pane_g

0xde78,	// (0x0002cb4a) main_tv_pg_hdr_pane_t1

0xde86,	// (0x0002cb58) main_tv_pg_hdr_pane_t2

0xde94,	// (0x0002cb66) main_tv_pg_hdr_pane_t3

0xdea4,	// (0x0002cb76) main_tv_pg_hdr_pane_t4

0xdeb4,	// (0x0002cb86) main_tv_pg_hdr_pane_t5

0x0004,

0xfc18,	// (0x0002e8ea) main_tv_pg_hdr_pane_t

0xdec4,	// (0x0002cb96) single_mobtv_pg_channel_pane_ParamLimits

0xdec4,	// (0x0002cb96) single_mobtv_pg_channel_pane

0xded6,	// (0x0002cba8) single_mobtv_pg_channel_table_pane

0xdedf,	// (0x0002cbb1) single_mobtv_pg_channel_thumb_pane

0xdee8,	// (0x0002cbba) single_tv_pg_channel_pane_g1

0xdef1,	// (0x0002cbc3) single_tv_pg_channel_pane_g2

0x0001,

0xfc23,	// (0x0002e8f5) single_tv_pg_channel_pane_g

0xc97f,	// (0x0002b651) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0xc97f,	// (0x0002b651) bg_single_mobtv_pg_channel_thumb_pane

0xdefa,	// (0x0002cbcc) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xdefa,	// (0x0002cbcc) single_mobtv_pg_channel_thumb_pane_g1

0xdf08,	// (0x0002cbda) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xdf08,	// (0x0002cbda) single_mobtv_pg_channel_thumb_pane_g2

0xdf14,	// (0x0002cbe6) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xdf14,	// (0x0002cbe6) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc28,	// (0x0002e8fa) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc28,	// (0x0002e8fa) single_mobtv_pg_channel_thumb_pane_g

0xdf20,	// (0x0002cbf2) single_mobtv_pg_channel_thumb_pane_t1

0xdf2e,	// (0x0002cc00) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc2f,	// (0x0002e901) single_mobtv_pg_channel_thumb_pane_t

0xc74f,	// (0x0002b421) bg_single_mobtv_pg_channel_table_pane_g1

0xc74f,	// (0x0002b421) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6dc,	// (0x0002e3ae) bg_single_mobtv_pg_channel_table_pane_g

0xdf3c,	// (0x0002cc0e) single_mobtv_pg_channel_table_pane_t1

0xdf4a,	// (0x0002cc1c) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc34,	// (0x0002e906) single_mobtv_pg_channel_table_pane_t

0x81b9,	// (0x00026e8b) main_mobtv_info_pane_g1_ParamLimits

0x81b9,	// (0x00026e8b) main_mobtv_info_pane_g1

0x81d5,	// (0x00026ea7) main_mobtv_info_pane_t1_ParamLimits

0x81d5,	// (0x00026ea7) main_mobtv_info_pane_t1

0x824d,	// (0x00026f1f) main_mobtv_info_pane_t2_ParamLimits

0x824d,	// (0x00026f1f) main_mobtv_info_pane_t2

0x0002,

0xfc3e,	// (0x0002e910) main_mobtv_info_pane_t_ParamLimits

0xfc3e,	// (0x0002e910) main_mobtv_info_pane_t

0x82de,	// (0x00026fb0) wait_bar_pane_cp05

0x82f0,	// (0x00026fc2) main_mobtv_loading_pane_g1_ParamLimits

0x82f0,	// (0x00026fc2) main_mobtv_loading_pane_g1

0x82fc,	// (0x00026fce) main_mobtv_loading_pane_g2_ParamLimits

0x82fc,	// (0x00026fce) main_mobtv_loading_pane_g2

0x8308,	// (0x00026fda) main_mobtv_loading_pane_g3_ParamLimits

0x8308,	// (0x00026fda) main_mobtv_loading_pane_g3

0x0002,

0xfc45,	// (0x0002e917) main_mobtv_loading_pane_g_ParamLimits

0xfc45,	// (0x0002e917) main_mobtv_loading_pane_g

0xdf58,	// (0x0002cc2a) main_mobtv_loading_pane_t1_ParamLimits

0xdf58,	// (0x0002cc2a) main_mobtv_loading_pane_t1

0xdf70,	// (0x0002cc42) main_mobtv_loading_pane_t2_ParamLimits

0xdf70,	// (0x0002cc42) main_mobtv_loading_pane_t2

0x0001,

0xfc4c,	// (0x0002e91e) main_mobtv_loading_pane_t_ParamLimits

0xfc4c,	// (0x0002e91e) main_mobtv_loading_pane_t

0x8316,	// (0x00026fe8) wait_bar_pane_cp06_ParamLimits

0x8316,	// (0x00026fe8) wait_bar_pane_cp06

0xdf94,	// (0x0002cc66) main_mobtv_programe_curr_pane_t1

0xdfa2,	// (0x0002cc74) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc51,	// (0x0002e923) main_mobtv_programe_curr_pane_t

0xdfb0,	// (0x0002cc82) main_mobtv_programe_next_pane_t1

0xdfbe,	// (0x0002cc90) main_mobtv_programe_next_pane_t2

0xdfcc,	// (0x0002cc9e) main_mobtv_programe_next_pane_t3

0x0002,

0xfc56,	// (0x0002e928) main_mobtv_programe_next_pane_t

0x9c03,	// (0x000288d5) bg_popup_mobtv_noti_window_pane

0xdfda,	// (0x0002ccac) popup_mobtv_noti_window_g1

0xdfe2,	// (0x0002ccb4) popup_mobtv_noti_window_t1

0xdff0,	// (0x0002ccc2) popup_mobtv_noti_window_t2

0x0001,

0xfc5d,	// (0x0002e92f) popup_mobtv_noti_window_t

0xc74f,	// (0x0002b421) bg_popup_mobtv_noti_window_pane_g1

0x9c03,	// (0x000288d5) sc_clock_pane

0x9c03,	// (0x000288d5) main_fs_bigclock_pane

0x796c,	// (0x0002663e) blid2_tripm_pane_t4_ParamLimits

0x796c,	// (0x0002663e) blid2_tripm_pane_t4

0x8322,	// (0x00026ff4) sc_clock_pane_g1_ParamLimits

0x8322,	// (0x00026ff4) sc_clock_pane_g1

0x8330,	// (0x00027002) sc_clock_pane_t1_ParamLimits

0x8330,	// (0x00027002) sc_clock_pane_t1

0x8345,	// (0x00027017) sc_clock_pane_t2_ParamLimits

0x8345,	// (0x00027017) sc_clock_pane_t2

0x8357,	// (0x00027029) sc_clock_pane_t3_ParamLimits

0x8357,	// (0x00027029) sc_clock_pane_t3

0x0004,

0xfc62,	// (0x0002e934) sc_clock_pane_t_ParamLimits

0xfc62,	// (0x0002e934) sc_clock_pane_t

0x91de,	// (0x00027eb0) main_fs_bigclock_indicator_pane_ParamLimits

0x91de,	// (0x00027eb0) main_fs_bigclock_indicator_pane

0x83ea,	// (0x000270bc) main_fs_bigclock_pane_g1_ParamLimits

0x83ea,	// (0x000270bc) main_fs_bigclock_pane_g1

0x91ea,	// (0x00027ebc) main_fs_bigclock_pane_t1_ParamLimits

0x91ea,	// (0x00027ebc) main_fs_bigclock_pane_t1

0x91fc,	// (0x00027ece) main_fs_bigclock_pane_t2_ParamLimits

0x91fc,	// (0x00027ece) main_fs_bigclock_pane_t2

0x9210,	// (0x00027ee2) main_fs_bigclock_pane_t3_ParamLimits

0x9210,	// (0x00027ee2) main_fs_bigclock_pane_t3

0x0002,

0xfe67,	// (0x0002eb39) main_fs_bigclock_pane_t_ParamLimits

0xfe67,	// (0x0002eb39) main_fs_bigclock_pane_t

0xec3c,	// (0x0002d90e) main_fs_bigclock_indicator_pane_g1

0xdcc0,	// (0x0002c992) ncim_query_content_pane_g2_ParamLimits

0xdcc0,	// (0x0002c992) ncim_query_content_pane_g2

0x0001,

0xfbef,	// (0x0002e8c1) ncim_query_content_pane_g_ParamLimits

0xfbef,	// (0x0002e8c1) ncim_query_content_pane_g

0x8369,	// (0x0002703b) sc_clock_pane_t4_ParamLimits

0x8369,	// (0x0002703b) sc_clock_pane_t4

0xa610,	// (0x000292e2) main_radioblah_pane

0xd0f2,	// (0x0002bdc4) cell_call4_button_pane_t1_copy1_ParamLimits

0xd0f2,	// (0x0002bdc4) cell_call4_button_pane_t1_copy1

0x7fdc,	// (0x00026cae) main_ncimui_pane_t1_ParamLimits

0x7fdc,	// (0x00026cae) main_ncimui_pane_t1

0x7ff6,	// (0x00026cc8) main_ncimui_pane_t2_ParamLimits

0x7ff6,	// (0x00026cc8) main_ncimui_pane_t2

0x0002,

0xfbe8,	// (0x0002e8ba) main_ncimui_pane_t_ParamLimits

0xfbe8,	// (0x0002e8ba) main_ncimui_pane_t

0xe143,	// (0x0002ce15) main_radioblah_anim_pane_ParamLimits

0xe143,	// (0x0002ce15) main_radioblah_anim_pane

0xe154,	// (0x0002ce26) main_radioblah_info_pane_ParamLimits

0xe154,	// (0x0002ce26) main_radioblah_info_pane

0xe168,	// (0x0002ce3a) main_radioblah_pane_t1_ParamLimits

0xe168,	// (0x0002ce3a) main_radioblah_pane_t1

0xe184,	// (0x0002ce56) main_radioblah_pane_t2_ParamLimits

0xe184,	// (0x0002ce56) main_radioblah_pane_t2

0x0003,

0xfc83,	// (0x0002e955) main_radioblah_pane_t_ParamLimits

0xfc83,	// (0x0002e955) main_radioblah_pane_t

0x843c,	// (0x0002710e) main_radioblah_rocker_ctrl_pane_ParamLimits

0x843c,	// (0x0002710e) main_radioblah_rocker_ctrl_pane

0xe1cc,	// (0x0002ce9e) main_radioblah_info_pane_t1_ParamLimits

0xe1cc,	// (0x0002ce9e) main_radioblah_info_pane_t1

0x8485,	// (0x00027157) main_radioblah_info_pane_t2_ParamLimits

0x8485,	// (0x00027157) main_radioblah_info_pane_t2

0x0003,

0xfc8c,	// (0x0002e95e) main_radioblah_info_pane_t_ParamLimits

0xfc8c,	// (0x0002e95e) main_radioblah_info_pane_t

0xc74f,	// (0x0002b421) main_radioblah_rocker_ctrl_pane_g1

0x8535,	// (0x00027207) main_radioblah_rocker_ctrl_pane_g2

0x853d,	// (0x0002720f) main_radioblah_rocker_ctrl_pane_g3

0x8545,	// (0x00027217) main_radioblah_rocker_ctrl_pane_g4

0x854d,	// (0x0002721f) main_radioblah_rocker_ctrl_pane_g5

0x8555,	// (0x00027227) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfc95,	// (0x0002e967) main_radioblah_rocker_ctrl_pane_g

0x7f8e,	// (0x00026c60) main_cset_text2_pane_t1_copy1_ParamLimits

0x1855,	// (0x00020527) cam4_image_uncrop_qvga_pane

0x1982,	// (0x00020654) vid4_image_uncrop_qcif_pane

0x1fce,	// (0x00020ca0) cam6_image_uncrop_qvga_pane_ParamLimits

0x1fce,	// (0x00020ca0) cam6_image_uncrop_qvga_pane

0xd9c3,	// (0x0002c695) vid6_image_uncrop_qcif_pane_ParamLimits

0xd9c3,	// (0x0002c695) vid6_image_uncrop_qcif_pane

0x9c03,	// (0x000288d5) bg_popup_preview_window_pane_cp03

0xdc72,	// (0x0002c944) list_cset_text2_pane

0xdc7a,	// (0x0002c94c) main_cset6_text2_pane_g1

0xdc82,	// (0x0002c954) main_cset6_text2_pane_t1

0x855d,	// (0x0002722f) list_cset_text2_pane_t1_ParamLimits

0x855d,	// (0x0002722f) list_cset_text2_pane_t1

0xa610,	// (0x000292e2) main_radioblah_pane_ParamLimits

0x82ca,	// (0x00026f9c) main_mobtv_info_pane_t3_ParamLimits

0x82ca,	// (0x00026f9c) main_mobtv_info_pane_t3

0x842a,	// (0x000270fc) main_radioblah_pane_g1

0x8455,	// (0x00027127) main_radioblah_info_pane_g1

0x84da,	// (0x000271ac) main_radioblah_info_pane_t3_ParamLimits

0x84da,	// (0x000271ac) main_radioblah_info_pane_t3

0x416d,	// (0x00022e3f) highlight_cell_cale_month_pane_ParamLimits

0x416d,	// (0x00022e3f) highlight_cell_cale_month_pane

0x9c03,	// (0x000288d5) main_phob_fisheye_pane

0xca67,	// (0x0002b739) scroll_pane_cp0031_ParamLimits

0xca67,	// (0x0002b739) scroll_pane_cp0031

0xdad5,	// (0x0002c7a7) wait_bar_pane_cp08_ParamLimits

0x7c67,	// (0x00026939) cset_list_set_pane_copy1_ParamLimits

0xe206,	// (0x0002ced8) highlight_cell_cale_month_pane_g1

0x8574,	// (0x00027246) highlight_cell_cale_month_pane_t1

0xd762,	// (0x0002c434) list_gen_pane_cp01

0xd2e0,	// (0x0002bfb2) scroll_pane_01

0x8582,	// (0x00027254) list_single_double_fisheye_pane

0x858b,	// (0x0002725d) list_double_fisheye_pane_g1_ParamLimits

0x858b,	// (0x0002725d) list_double_fisheye_pane_g1

0x8597,	// (0x00027269) list_double_fisheye_pane_g2_ParamLimits

0x8597,	// (0x00027269) list_double_fisheye_pane_g2

0x85ab,	// (0x0002727d) list_double_fisheye_pane_g3_ParamLimits

0x85ab,	// (0x0002727d) list_double_fisheye_pane_g3

0x0004,

0xfca2,	// (0x0002e974) list_double_fisheye_pane_g_ParamLimits

0xfca2,	// (0x0002e974) list_double_fisheye_pane_g

0x85d4,	// (0x000272a6) list_double_fisheye_pane_t1_ParamLimits

0x85d4,	// (0x000272a6) list_double_fisheye_pane_t1

0x85ef,	// (0x000272c1) list_double_fisheye_pane_t2_ParamLimits

0x85ef,	// (0x000272c1) list_double_fisheye_pane_t2

0x0001,

0xfcad,	// (0x0002e97f) list_double_fisheye_pane_t_ParamLimits

0xfcad,	// (0x0002e97f) list_double_fisheye_pane_t

0x9c03,	// (0x000288d5) main_call5_pane

0x838f,	// (0x00027061) sc_swipe_pane_ParamLimits

0x838f,	// (0x00027061) sc_swipe_pane

0x861d,	// (0x000272ef) call5_image_pane_ParamLimits

0x861d,	// (0x000272ef) call5_image_pane

0x862f,	// (0x00027301) call5_swipe_1_pane_ParamLimits

0x862f,	// (0x00027301) call5_swipe_1_pane

0x863b,	// (0x0002730d) call5_swipe_2_pane_ParamLimits

0x863b,	// (0x0002730d) call5_swipe_2_pane

0x8657,	// (0x00027329) popup_call5_audio_first_window_ParamLimits

0x8657,	// (0x00027329) popup_call5_audio_first_window

0xc97f,	// (0x0002b651) call5_swipe_1_pane_g1_ParamLimits

0xc97f,	// (0x0002b651) call5_swipe_1_pane_g1

0xe20e,	// (0x0002cee0) call5_swipe_1_pane_g2_ParamLimits

0xe20e,	// (0x0002cee0) call5_swipe_1_pane_g2

0x0001,

0xfcb2,	// (0x0002e984) call5_swipe_1_pane_g_ParamLimits

0xfcb2,	// (0x0002e984) call5_swipe_1_pane_g

0xe21a,	// (0x0002ceec) call5_swipe_1_pane_t1_ParamLimits

0xe21a,	// (0x0002ceec) call5_swipe_1_pane_t1

0xc97f,	// (0x0002b651) call5_swipe_2_pane_g1_ParamLimits

0xc97f,	// (0x0002b651) call5_swipe_2_pane_g1

0xe22f,	// (0x0002cf01) call5_swipe_2_pane_g2_ParamLimits

0xe22f,	// (0x0002cf01) call5_swipe_2_pane_g2

0x0001,

0xfcb7,	// (0x0002e989) call5_swipe_2_pane_g_ParamLimits

0xfcb7,	// (0x0002e989) call5_swipe_2_pane_g

0xe23b,	// (0x0002cf0d) call5_swipe_2_pane_t1_ParamLimits

0xe23b,	// (0x0002cf0d) call5_swipe_2_pane_t1

0xe250,	// (0x0002cf22) sc_swipe_pane_g1_ParamLimits

0xe250,	// (0x0002cf22) sc_swipe_pane_g1

0xe25d,	// (0x0002cf2f) sc_swipe_pane_g2_ParamLimits

0xe25d,	// (0x0002cf2f) sc_swipe_pane_g2

0x0001,

0xfcbc,	// (0x0002e98e) sc_swipe_pane_g_ParamLimits

0xfcbc,	// (0x0002e98e) sc_swipe_pane_g

0xe269,	// (0x0002cf3b) sc_swipe_pane_t1_ParamLimits

0xe269,	// (0x0002cf3b) sc_swipe_pane_t1

0x9c03,	// (0x000288d5) main_cmail_launcher_pane

0x8667,	// (0x00027339) aid_size_cell_cmail_l_ParamLimits

0x8667,	// (0x00027339) aid_size_cell_cmail_l

0x8677,	// (0x00027349) grid_cmail_l_pane_ParamLimits

0x8677,	// (0x00027349) grid_cmail_l_pane

0x8687,	// (0x00027359) cell_cmail_l_pane_ParamLimits

0x8687,	// (0x00027359) cell_cmail_l_pane

0x869d,	// (0x0002736f) cell_cmail_l_pane_g1_ParamLimits

0x869d,	// (0x0002736f) cell_cmail_l_pane_g1

0x86a9,	// (0x0002737b) cell_cmail_l_pane_t1_ParamLimits

0x86a9,	// (0x0002737b) cell_cmail_l_pane_t1

0xe27e,	// (0x0002cf50) cell_cmail_l_pane_t2_ParamLimits

0xe27e,	// (0x0002cf50) cell_cmail_l_pane_t2

0x0001,

0xfcc1,	// (0x0002e993) cell_cmail_l_pane_t_ParamLimits

0xfcc1,	// (0x0002e993) cell_cmail_l_pane_t

0xa610,	// (0x000292e2) grid_highlight_pane_cp018_ParamLimits

0xa610,	// (0x000292e2) grid_highlight_pane_cp018

0x213d,	// (0x00020e0f) main2_pane_ParamLimits

0x213d,	// (0x00020e0f) main2_pane

0xa442,	// (0x00029114) popup_sp_fs_action_menu_bg_pane_g1

0xa44a,	// (0x0002911c) popup_sp_fs_action_menu_bg_pane_g2

0xa452,	// (0x00029124) popup_sp_fs_action_menu_bg_pane_g3

0xa45a,	// (0x0002912c) popup_sp_fs_action_menu_bg_pane_g4

0xa462,	// (0x00029134) popup_sp_fs_action_menu_bg_pane_g5

0xa46a,	// (0x0002913c) popup_sp_fs_action_menu_bg_pane_g6

0xa472,	// (0x00029144) popup_sp_fs_action_menu_bg_pane_g7

0xa47a,	// (0x0002914c) popup_sp_fs_action_menu_bg_pane_g8

0xa482,	// (0x00029154) popup_sp_fs_action_menu_bg_pane_g9

0xa48a,	// (0x0002915c) popup_sp_fs_action_menu_bg_pane_g10

0xa48a,	// (0x0002915c) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf18a,	// (0x0002de5c) popup_sp_fs_action_menu_bg_pane_g

0x2faa,	// (0x00021c7c) list_medium_line_x2_t3_g3_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t3_g3_g1

0x2fb6,	// (0x00021c88) list_medium_line_x2_t3_g3_g2_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x2_t3_g3_g2

0x2fc2,	// (0x00021c94) list_medium_line_x2_t3_g3_g3_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t3_g3_g3

0x0002,

0xf238,	// (0x0002df0a) list_medium_line_x2_t3_g3_g_ParamLimits

0xf238,	// (0x0002df0a) list_medium_line_x2_t3_g3_g

0x2fce,	// (0x00021ca0) list_medium_line_x2_t3_g3_t1_ParamLimits

0x2fce,	// (0x00021ca0) list_medium_line_x2_t3_g3_t1

0x2fe3,	// (0x00021cb5) list_medium_line_x2_t3_g3_t2_ParamLimits

0x2fe3,	// (0x00021cb5) list_medium_line_x2_t3_g3_t2

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t3_g3_t3_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t3_g3_t3

0x0002,

0xf23f,	// (0x0002df11) list_medium_line_x2_t3_g3_t_ParamLimits

0xf23f,	// (0x0002df11) list_medium_line_x2_t3_g3_t

0x2faa,	// (0x00021c7c) list_medium_line_x2_t3_g2_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t3_g2_g1

0x2fc2,	// (0x00021c94) list_medium_line_x2_t3_g2_g2_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t3_g2_g2

0x0001,

0xf246,	// (0x0002df18) list_medium_line_x2_t3_g2_g_ParamLimits

0xf246,	// (0x0002df18) list_medium_line_x2_t3_g2_g

0x300c,	// (0x00021cde) list_medium_line_x2_t3_g2_t1_ParamLimits

0x300c,	// (0x00021cde) list_medium_line_x2_t3_g2_t1

0x3022,	// (0x00021cf4) list_medium_line_x2_t3_g2_t2_ParamLimits

0x3022,	// (0x00021cf4) list_medium_line_x2_t3_g2_t2

0x3034,	// (0x00021d06) list_medium_line_x2_t3_g2_t3_ParamLimits

0x3034,	// (0x00021d06) list_medium_line_x2_t3_g2_t3

0x0002,

0xf24b,	// (0x0002df1d) list_medium_line_x2_t3_g2_t_ParamLimits

0xf24b,	// (0x0002df1d) list_medium_line_x2_t3_g2_t

0x2faa,	// (0x00021c7c) list_medium_line_x2_t4_g4_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t4_g4_g1

0x3052,	// (0x00021d24) list_medium_line_x2_t4_g4_g2_ParamLimits

0x3052,	// (0x00021d24) list_medium_line_x2_t4_g4_g2

0x2fb6,	// (0x00021c88) list_medium_line_x2_t4_g4_g3_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x2_t4_g4_g3

0x305e,	// (0x00021d30) list_medium_line_x2_t4_g4_g4_ParamLimits

0x305e,	// (0x00021d30) list_medium_line_x2_t4_g4_g4

0x0003,

0xf252,	// (0x0002df24) list_medium_line_x2_t4_g4_g_ParamLimits

0xf252,	// (0x0002df24) list_medium_line_x2_t4_g4_g

0x306a,	// (0x00021d3c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x306a,	// (0x00021d3c) list_medium_line_x2_t4_g4_t1

0x3084,	// (0x00021d56) list_medium_line_x2_t4_g4_t2_ParamLimits

0x3084,	// (0x00021d56) list_medium_line_x2_t4_g4_t2

0x309a,	// (0x00021d6c) list_medium_line_x2_t4_g4_t3_ParamLimits

0x309a,	// (0x00021d6c) list_medium_line_x2_t4_g4_t3

0x30af,	// (0x00021d81) list_medium_line_x2_t4_g4_t4_ParamLimits

0x30af,	// (0x00021d81) list_medium_line_x2_t4_g4_t4

0x0003,

0xf25b,	// (0x0002df2d) list_medium_line_x2_t4_g4_t_ParamLimits

0xf25b,	// (0x0002df2d) list_medium_line_x2_t4_g4_t

0x2faa,	// (0x00021c7c) list_medium_line_x2_t2_g4_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t2_g4_g1

0x3052,	// (0x00021d24) list_medium_line_x2_t2_g4_g2_ParamLimits

0x3052,	// (0x00021d24) list_medium_line_x2_t2_g4_g2

0x2fb6,	// (0x00021c88) list_medium_line_x2_t2_g4_g3_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x2_t2_g4_g3

0x2fc2,	// (0x00021c94) list_medium_line_x2_t2_g4_g4_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2c2,	// (0x0002df94) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2c2,	// (0x0002df94) list_medium_line_x2_t2_g4_g

0x4193,	// (0x00022e65) list_medium_line_x2_t2_g4_t1_ParamLimits

0x4193,	// (0x00022e65) list_medium_line_x2_t2_g4_t1

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t2_g4_t2_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2cb,	// (0x0002df9d) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2cb,	// (0x0002df9d) list_medium_line_x2_t2_g4_t

0x2faa,	// (0x00021c7c) list_medium_line_x2_t2_g3_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t2_g3_g1

0x2fb6,	// (0x00021c88) list_medium_line_x2_t2_g3_g2_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x2_t2_g3_g2

0x2fc2,	// (0x00021c94) list_medium_line_x2_t2_g3_g3_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t2_g3_g3

0x0002,

0xf238,	// (0x0002df0a) list_medium_line_x2_t2_g3_g_ParamLimits

0xf238,	// (0x0002df0a) list_medium_line_x2_t2_g3_g

0x41a8,	// (0x00022e7a) list_medium_line_x2_t2_g3_t1_ParamLimits

0x41a8,	// (0x00022e7a) list_medium_line_x2_t2_g3_t1

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t2_g3_t2_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2d0,	// (0x0002dfa2) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2d0,	// (0x0002dfa2) list_medium_line_x2_t2_g3_t

0x42f0,	// (0x00022fc2) main_sp_fs_list_pane_ParamLimits

0x42f0,	// (0x00022fc2) main_sp_fs_list_pane

0x42fc,	// (0x00022fce) sp_fs_scroll_pane_ParamLimits

0x42fc,	// (0x00022fce) sp_fs_scroll_pane

0x4308,	// (0x00022fda) list_medium_line_x2_t3_t1

0x4318,	// (0x00022fea) list_medium_line_x2_t3_t2

0x4326,	// (0x00022ff8) list_medium_line_x2_t3_t3

0x0002,

0xf31b,	// (0x0002dfed) list_medium_line_x2_t3_t

0x4334,	// (0x00023006) list_medium_line_x3_t4_t1

0x4344,	// (0x00023016) list_medium_line_x3_t4_t2

0x4352,	// (0x00023024) list_medium_line_x3_t4_t3

0x4326,	// (0x00022ff8) list_medium_line_x3_t4_t4

0x0003,

0xf322,	// (0x0002dff4) list_medium_line_x3_t4_t

0x4360,	// (0x00023032) list_medium_line_x4_t5_t1

0x4370,	// (0x00023042) list_medium_line_x4_t5_t2

0x4352,	// (0x00023024) list_medium_line_x4_t5_t3

0x437e,	// (0x00023050) list_medium_line_x4_t5_t4

0x4326,	// (0x00022ff8) list_medium_line_x4_t5_t5

0x0004,

0xf32b,	// (0x0002dffd) list_medium_line_x4_t5_t

0x2faa,	// (0x00021c7c) list_medium_line_t4_g4_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_t4_g4_g1

0x438c,	// (0x0002305e) list_medium_line_t4_g4_g2_ParamLimits

0x438c,	// (0x0002305e) list_medium_line_t4_g4_g2

0x4398,	// (0x0002306a) list_medium_line_t4_g4_g3_ParamLimits

0x4398,	// (0x0002306a) list_medium_line_t4_g4_g3

0x2fc2,	// (0x00021c94) list_medium_line_t4_g4_g4_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_t4_g4_g4

0x0003,

0xf336,	// (0x0002e008) list_medium_line_t4_g4_g_ParamLimits

0xf336,	// (0x0002e008) list_medium_line_t4_g4_g

0x43a4,	// (0x00023076) list_medium_line_t4_g4_t1_ParamLimits

0x43a4,	// (0x00023076) list_medium_line_t4_g4_t1

0x43b9,	// (0x0002308b) list_medium_line_t4_g4_t2_ParamLimits

0x43b9,	// (0x0002308b) list_medium_line_t4_g4_t2

0x43cf,	// (0x000230a1) list_medium_line_t4_g4_t3_ParamLimits

0x43cf,	// (0x000230a1) list_medium_line_t4_g4_t3

0x2ff7,	// (0x00021cc9) list_medium_line_t4_g4_t4_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_t4_g4_t4

0x0003,

0xf33f,	// (0x0002e011) list_medium_line_t4_g4_t_ParamLimits

0xf33f,	// (0x0002e011) list_medium_line_t4_g4_t

0x4489,	// (0x0002315b) chi_dic_find_pane_g1

0x545e,	// (0x00024130) main_tport_pane

0xd3ec,	// (0x0002c0be) list_medium_line_plain_t1

0x721f,	// (0x00025ef1) list_medium_line_t2_g2_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_t2_g2_g1

0xd402,	// (0x0002c0d4) list_medium_line_t2_g2_g2_ParamLimits

0xd402,	// (0x0002c0d4) list_medium_line_t2_g2_g2

0x0001,

0xfa00,	// (0x0002e6d2) list_medium_line_t2_g2_g_ParamLimits

0xfa00,	// (0x0002e6d2) list_medium_line_t2_g2_g

0x722b,	// (0x00025efd) list_medium_line_t2_g2_t1_ParamLimits

0x722b,	// (0x00025efd) list_medium_line_t2_g2_t1

0x7242,	// (0x00025f14) list_medium_line_t2_g2_t2_ParamLimits

0x7242,	// (0x00025f14) list_medium_line_t2_g2_t2

0x0001,

0xfa05,	// (0x0002e6d7) list_medium_line_t2_g2_t_ParamLimits

0xfa05,	// (0x0002e6d7) list_medium_line_t2_g2_t

0xd76b,	// (0x0002c43d) aid_sp_fs_list_icon_a_sm

0xd773,	// (0x0002c445) aid_sp_fs_list_icon_d

0xd77b,	// (0x0002c44d) aid_sp_fs_text_primary

0xd784,	// (0x0002c456) aid_sp_fs_text_secondary

0x77b2,	// (0x00026484) list_medium_line

0x77b2,	// (0x00026484) list_medium_line_g2

0x77b2,	// (0x00026484) list_medium_line_g3

0x77b2,	// (0x00026484) list_medium_line_plain

0x77b2,	// (0x00026484) list_medium_line_plain_t2

0x77b2,	// (0x00026484) list_medium_line_plain_t3

0x77b2,	// (0x00026484) list_medium_line_right_icon

0x77b2,	// (0x00026484) list_medium_line_right_iconx2

0x77b2,	// (0x00026484) list_medium_line_t2

0x77b2,	// (0x00026484) list_medium_line_t2_g2

0x77b2,	// (0x00026484) list_medium_line_t2_g3

0x77b2,	// (0x00026484) list_medium_line_t2_right_icon

0x77b2,	// (0x00026484) list_medium_line_t2_right_iconx2

0x77b2,	// (0x00026484) list_medium_line_t3

0x77b2,	// (0x00026484) list_medium_line_t3_g2

0x77b2,	// (0x00026484) list_medium_line_t3_g3

0x77b2,	// (0x00026484) list_medium_line_t3_right_iconx2

0x77bb,	// (0x0002648d) list_medium_line_t4_g4

0x77c4,	// (0x00026496) list_medium_line_x2

0x77c4,	// (0x00026496) list_medium_line_x2_t2_g2

0x77c4,	// (0x00026496) list_medium_line_x2_t2_g3

0x77c4,	// (0x00026496) list_medium_line_x2_t2_g4

0x77c4,	// (0x00026496) list_medium_line_x2_t3

0x77c4,	// (0x00026496) list_medium_line_x2_t3_g2

0x77c4,	// (0x00026496) list_medium_line_x2_t3_g3

0x77c4,	// (0x00026496) list_medium_line_x2_t3_g4

0x77c4,	// (0x00026496) list_medium_line_x2_t4_g2

0x77c4,	// (0x00026496) list_medium_line_x2_t4_g4

0x77cd,	// (0x0002649f) list_medium_line_x3

0x77cd,	// (0x0002649f) list_medium_line_x3_t4

0x77cd,	// (0x0002649f) list_medium_line_x3_t4_g4

0x77bb,	// (0x0002648d) list_medium_line_x4_t4

0x77bb,	// (0x0002648d) list_medium_line_x4_t4_g7

0x77bb,	// (0x0002648d) list_medium_line_x4_t5

0x77d6,	// (0x000264a8) list_single_fs_dyc_pane_ParamLimits

0x77d6,	// (0x000264a8) list_single_fs_dyc_pane

0x2faa,	// (0x00021c7c) list_medium_line_x4_t4_g7_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x4_t4_g7_g1

0x7ebf,	// (0x00026b91) list_medium_line_x4_t4_g7_g2_ParamLimits

0x7ebf,	// (0x00026b91) list_medium_line_x4_t4_g7_g2

0x7ecb,	// (0x00026b9d) list_medium_line_x4_t4_g7_g3_ParamLimits

0x7ecb,	// (0x00026b9d) list_medium_line_x4_t4_g7_g3

0x7eda,	// (0x00026bac) list_medium_line_x4_t4_g7_g4_ParamLimits

0x7eda,	// (0x00026bac) list_medium_line_x4_t4_g7_g4

0x7ee6,	// (0x00026bb8) list_medium_line_x4_t4_g7_g5_ParamLimits

0x7ee6,	// (0x00026bb8) list_medium_line_x4_t4_g7_g5

0x7ef5,	// (0x00026bc7) list_medium_line_x4_t4_g7_g6_ParamLimits

0x7ef5,	// (0x00026bc7) list_medium_line_x4_t4_g7_g6

0x7f04,	// (0x00026bd6) list_medium_line_x4_t4_g7_g7_ParamLimits

0x7f04,	// (0x00026bd6) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbc9,	// (0x0002e89b) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbc9,	// (0x0002e89b) list_medium_line_x4_t4_g7_g

0x7f10,	// (0x00026be2) list_medium_line_x4_t4_g7_t1_ParamLimits

0x7f10,	// (0x00026be2) list_medium_line_x4_t4_g7_t1

0x7f25,	// (0x00026bf7) list_medium_line_x4_t4_g7_t2_ParamLimits

0x7f25,	// (0x00026bf7) list_medium_line_x4_t4_g7_t2

0x7f3a,	// (0x00026c0c) list_medium_line_x4_t4_g7_t3_ParamLimits

0x7f3a,	// (0x00026c0c) list_medium_line_x4_t4_g7_t3

0x7f4f,	// (0x00026c21) list_medium_line_x4_t4_g7_t4_ParamLimits

0x7f4f,	// (0x00026c21) list_medium_line_x4_t4_g7_t4

0x7f61,	// (0x00026c33) list_medium_line_x4_t4_g7_t5_ParamLimits

0x7f61,	// (0x00026c33) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbd8,	// (0x0002e8aa) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbd8,	// (0x0002e8aa) list_medium_line_x4_t4_g7_t

0x7f73,	// (0x00026c45) list_single_dyc_row_pane_ParamLimits

0x7f73,	// (0x00026c45) list_single_dyc_row_pane

0x8611,	// (0x000272e3) call5_gesture_pane_ParamLimits

0x8611,	// (0x000272e3) call5_gesture_pane

0x8647,	// (0x00027319) call5_windows_pane_ParamLimits

0x8647,	// (0x00027319) call5_windows_pane

0x86bf,	// (0x00027391) call5_swipe_1_pane_cp_ParamLimits

0x86bf,	// (0x00027391) call5_swipe_1_pane_cp

0x86cb,	// (0x0002739d) call5_swipe_2_pane_cp_ParamLimits

0x86cb,	// (0x0002739d) call5_swipe_2_pane_cp

0xa54d,	// (0x0002921f) call5_image_pane_cp

0x86d7,	// (0x000273a9) popup_call5_audio_first_window_cp_ParamLimits

0x86d7,	// (0x000273a9) popup_call5_audio_first_window_cp

0xe250,	// (0x0002cf22) call5_swipe_1_pane_g1_cp_ParamLimits

0xe250,	// (0x0002cf22) call5_swipe_1_pane_g1_cp

0xe290,	// (0x0002cf62) call5_swipe_1_pane_g2_cp

0xe269,	// (0x0002cf3b) call5_swipe_1_pane_t1_cp_ParamLimits

0xe269,	// (0x0002cf3b) call5_swipe_1_pane_t1_cp

0xe250,	// (0x0002cf22) call5_swipe_2_pane_g1_cp_ParamLimits

0xe250,	// (0x0002cf22) call5_swipe_2_pane_g1_cp

0xe298,	// (0x0002cf6a) call5_swipe_2_pane_g2_cp

0xe2a0,	// (0x0002cf72) call5_swipe_2_pane_t1_cp_ParamLimits

0xe2a0,	// (0x0002cf72) call5_swipe_2_pane_t1_cp

0xa610,	// (0x000292e2) main_sp_fs_email_pane

0xe2b5,	// (0x0002cf87) main_sp_fs_listscroll_pane_te

0xe2be,	// (0x0002cf90) popup_sp_fs_action_menu_pane_ParamLimits

0xe2be,	// (0x0002cf90) popup_sp_fs_action_menu_pane

0xc74f,	// (0x0002b421) bg_sp_fs_ctrlbar_pane_g1

0xcd08,	// (0x0002b9da) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xcd1a,	// (0x0002b9ec) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xcd11,	// (0x0002b9e3) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0xc74f,	// (0x0002b421) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcc6,	// (0x0002e998) bg_sp_fs_ctrlbar_ddmenu_pane_g

0xc52e,	// (0x0002b200) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0xc52e,	// (0x0002b200) bg_sp_fs_ctrlbar_ddmenu_pane

0xe304,	// (0x0002cfd6) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xe304,	// (0x0002cfd6) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xe310,	// (0x0002cfe2) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xe310,	// (0x0002cfe2) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfccf,	// (0x0002e9a1) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfccf,	// (0x0002e9a1) main_sp_fs_ctrlbar_ddmenu_pane_g

0xe31c,	// (0x0002cfee) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xe31c,	// (0x0002cfee) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xe336,	// (0x0002d008) list_medium_line_t2_right_icon_g1

0x86e5,	// (0x000273b7) list_medium_line_t2_right_icon_t1

0x86f5,	// (0x000273c7) list_medium_line_t2_right_icon_t2

0x0001,

0xfcd4,	// (0x0002e9a6) list_medium_line_t2_right_icon_t

0xc2fe,	// (0x0002afd0) bg_sp_fs_ctrlbar_pane_ParamLimits

0xc2fe,	// (0x0002afd0) bg_sp_fs_ctrlbar_pane

0x875c,	// (0x0002742e) main_sp_fs_ctrlbar_button_pane_cp01

0x8764,	// (0x00027436) main_sp_fs_ctrlbar_ddmenu_pane

0xd512,	// (0x0002c1e4) main_sp_fs_ctrlbar_pane_g1

0xe376,	// (0x0002d048) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfcd9,	// (0x0002e9ab) main_sp_fs_ctrlbar_pane_g

0xe382,	// (0x0002d054) main_sp_fs_ctrlbar_pane_t1

0x876e,	// (0x00027440) main_sp_fs_ctrlbar_pane

0x8788,	// (0x0002745a) main_sp_fs_listscroll_pane_te_cp01

0x8799,	// (0x0002746b) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0x8799,	// (0x0002746b) popup_sp_fs_action_menu_pane_cp01

0xa610,	// (0x000292e2) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xa610,	// (0x000292e2) bg_sp_fs_highlight_list_pane_cp01

0xe3b2,	// (0x0002d084) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xe3b2,	// (0x0002d084) sp_fs_action_menu_list_gene_pane_g1

0xe3c1,	// (0x0002d093) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xe3c1,	// (0x0002d093) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfce3,	// (0x0002e9b5) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfce3,	// (0x0002e9b5) sp_fs_action_menu_list_gene_pane_g

0xe3ce,	// (0x0002d0a0) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xe3ce,	// (0x0002d0a0) sp_fs_action_menu_list_gene_pane_t1

0xe3e6,	// (0x0002d0b8) sp_fs_action_menu_list_gene_pane_ParamLimits

0xe3e6,	// (0x0002d0b8) sp_fs_action_menu_list_gene_pane

0xe409,	// (0x0002d0db) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xe409,	// (0x0002d0db) popup_sp_fs_action_menu_bg_pane

0xe417,	// (0x0002d0e9) sp_fs_action_menu_list_pane_ParamLimits

0xe417,	// (0x0002d0e9) sp_fs_action_menu_list_pane

0xe43b,	// (0x0002d10d) sp_fs_scroll_pane_cp01_ParamLimits

0xe43b,	// (0x0002d10d) sp_fs_scroll_pane_cp01

0x87c7,	// (0x00027499) list_medium_line_plain_t2_t1

0x87d7,	// (0x000274a9) list_medium_line_plain_t2_t2

0x0001,

0xfce8,	// (0x0002e9ba) list_medium_line_plain_t2_t

0x87e5,	// (0x000274b7) list_medium_line_plain_t3_t1

0x87f5,	// (0x000274c7) list_medium_line_plain_t3_t2

0x8803,	// (0x000274d5) list_medium_line_plain_t3_t3

0x0002,

0xfced,	// (0x0002e9bf) list_medium_line_plain_t3_t

0x2faa,	// (0x00021c7c) list_medium_line_x2_t2_g2_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t2_g2_g1

0x2fc2,	// (0x00021c94) list_medium_line_x2_t2_g2_g2_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t2_g2_g2

0x0001,

0xf246,	// (0x0002df18) list_medium_line_x2_t2_g2_g_ParamLimits

0xf246,	// (0x0002df18) list_medium_line_x2_t2_g2_g

0x43a4,	// (0x00023076) list_medium_line_x2_t2_g2_t1_ParamLimits

0x43a4,	// (0x00023076) list_medium_line_x2_t2_g2_t1

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t2_g2_t2_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t2_g2_t2

0x0001,

0xfcf4,	// (0x0002e9c6) list_medium_line_x2_t2_g2_t_ParamLimits

0xfcf4,	// (0x0002e9c6) list_medium_line_x2_t2_g2_t

0x2faa,	// (0x00021c7c) list_medium_line_x2_t4_g2_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t4_g2_g1

0x2fc2,	// (0x00021c94) list_medium_line_x2_t4_g2_g2_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t4_g2_g2

0x0001,

0xf246,	// (0x0002df18) list_medium_line_x2_t4_g2_g_ParamLimits

0xf246,	// (0x0002df18) list_medium_line_x2_t4_g2_g

0x8811,	// (0x000274e3) list_medium_line_x2_t4_g2_t1_ParamLimits

0x8811,	// (0x000274e3) list_medium_line_x2_t4_g2_t1

0x882b,	// (0x000274fd) list_medium_line_x2_t4_g2_t2_ParamLimits

0x882b,	// (0x000274fd) list_medium_line_x2_t4_g2_t2

0x8841,	// (0x00027513) list_medium_line_x2_t4_g2_t3_ParamLimits

0x8841,	// (0x00027513) list_medium_line_x2_t4_g2_t3

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t4_g2_t4_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t4_g2_t4

0x0003,

0xfcf9,	// (0x0002e9cb) list_medium_line_x2_t4_g2_t_ParamLimits

0xfcf9,	// (0x0002e9cb) list_medium_line_x2_t4_g2_t

0xe461,	// (0x0002d133) list_medium_line_t3_right_iconx2_g1

0xe336,	// (0x0002d008) list_medium_line_t3_right_iconx2_g2

0x8856,	// (0x00027528) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd02,	// (0x0002e9d4) list_medium_line_t3_right_iconx2_g

0x8860,	// (0x00027532) list_medium_line_t3_right_iconx2_t1

0x8870,	// (0x00027542) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd09,	// (0x0002e9db) list_medium_line_t3_right_iconx2_t

0x2faa,	// (0x00021c7c) list_medium_line_x3_t4_g4_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x3_t4_g4_g1

0x2fb6,	// (0x00021c88) list_medium_line_x3_t4_g4_g2_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x3_t4_g4_g2

0x438c,	// (0x0002305e) list_medium_line_x3_t4_g4_g3_ParamLimits

0x438c,	// (0x0002305e) list_medium_line_x3_t4_g4_g3

0x887e,	// (0x00027550) list_medium_line_x3_t4_g4_g4_ParamLimits

0x887e,	// (0x00027550) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd0e,	// (0x0002e9e0) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd0e,	// (0x0002e9e0) list_medium_line_x3_t4_g4_g

0x888a,	// (0x0002755c) list_medium_line_x3_t4_g4_t1_ParamLimits

0x888a,	// (0x0002755c) list_medium_line_x3_t4_g4_t1

0x88a1,	// (0x00027573) list_medium_line_x3_t4_g4_t2_ParamLimits

0x88a1,	// (0x00027573) list_medium_line_x3_t4_g4_t2

0x88b6,	// (0x00027588) list_medium_line_x3_t4_g4_t3_ParamLimits

0x88b6,	// (0x00027588) list_medium_line_x3_t4_g4_t3

0x88cb,	// (0x0002759d) list_medium_line_x3_t4_g4_t4_ParamLimits

0x88cb,	// (0x0002759d) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd17,	// (0x0002e9e9) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd17,	// (0x0002e9e9) list_medium_line_x3_t4_g4_t

0x88e8,	// (0x000275ba) list_single_dyc_row_text_pane_t1_ParamLimits

0x88e8,	// (0x000275ba) list_single_dyc_row_text_pane_t1

0x8925,	// (0x000275f7) list_single_dyc_row_text_pane_t2_ParamLimits

0x8925,	// (0x000275f7) list_single_dyc_row_text_pane_t2

0xe469,	// (0x0002d13b) list_single_dyc_row_text_pane_t3_ParamLimits

0xe469,	// (0x0002d13b) list_single_dyc_row_text_pane_t3

0x0005,

0xfd20,	// (0x0002e9f2) list_single_dyc_row_text_pane_t_ParamLimits

0xfd20,	// (0x0002e9f2) list_single_dyc_row_text_pane_t

0xe48d,	// (0x0002d15f) list_single_dyc_row_pane_g1_ParamLimits

0xe48d,	// (0x0002d15f) list_single_dyc_row_pane_g1

0xe499,	// (0x0002d16b) list_single_dyc_row_pane_g2_ParamLimits

0xe499,	// (0x0002d16b) list_single_dyc_row_pane_g2

0xe4a5,	// (0x0002d177) list_single_dyc_row_pane_g3_ParamLimits

0xe4a5,	// (0x0002d177) list_single_dyc_row_pane_g3

0xe4b1,	// (0x0002d183) list_single_dyc_row_pane_g4_ParamLimits

0xe4b1,	// (0x0002d183) list_single_dyc_row_pane_g4

0x0003,

0xfd2d,	// (0x0002e9ff) list_single_dyc_row_pane_g_ParamLimits

0xfd2d,	// (0x0002e9ff) list_single_dyc_row_pane_g

0xe4bd,	// (0x0002d18f) list_single_dyc_row_text_pane_ParamLimits

0xe4bd,	// (0x0002d18f) list_single_dyc_row_text_pane

0x9c03,	// (0x000288d5) bg_sp_fs_scroll_pane

0xe4dc,	// (0x0002d1ae) thumb_sp_fs_scroll_pane

0x721f,	// (0x00025ef1) list_medium_line_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_g1

0xe4e5,	// (0x0002d1b7) list_medium_line_t1_ParamLimits

0xe4e5,	// (0x0002d1b7) list_medium_line_t1

0x2faa,	// (0x00021c7c) list_medium_line_x2_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_g1

0x2fb6,	// (0x00021c88) list_medium_line_x2_g2_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x2_g2

0x0001,

0xfd36,	// (0x0002ea08) list_medium_line_x2_g_ParamLimits

0xfd36,	// (0x0002ea08) list_medium_line_x2_g

0xe4fa,	// (0x0002d1cc) list_medium_line_x2_t1_ParamLimits

0xe4fa,	// (0x0002d1cc) list_medium_line_x2_t1

0x2faa,	// (0x00021c7c) list_medium_line_x3_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x3_g1

0x2fb6,	// (0x00021c88) list_medium_line_x3_g2_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x3_g2

0x0001,

0xfd36,	// (0x0002ea08) list_medium_line_x3_g_ParamLimits

0xfd36,	// (0x0002ea08) list_medium_line_x3_g

0xe4fa,	// (0x0002d1cc) list_medium_line_x3_t1_ParamLimits

0xe4fa,	// (0x0002d1cc) list_medium_line_x3_t1

0xe510,	// (0x0002d1e2) thumb_sp_fs_scroll_pane_g1

0xe519,	// (0x0002d1eb) thumb_sp_fs_scroll_pane_g2

0xe522,	// (0x0002d1f4) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002ea0d) thumb_sp_fs_scroll_pane_g

0xe510,	// (0x0002d1e2) bg_sp_fs_scroll_pane_g1

0xe519,	// (0x0002d1eb) bg_sp_fs_scroll_pane_g2

0xe522,	// (0x0002d1f4) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3b,	// (0x0002ea0d) bg_sp_fs_scroll_pane_g

0x2faa,	// (0x00021c7c) list_medium_line_x2_t3_g4_g1_ParamLimits

0x2faa,	// (0x00021c7c) list_medium_line_x2_t3_g4_g1

0x3052,	// (0x00021d24) list_medium_line_x2_t3_g4_g2_ParamLimits

0x3052,	// (0x00021d24) list_medium_line_x2_t3_g4_g2

0x2fb6,	// (0x00021c88) list_medium_line_x2_t3_g4_g3_ParamLimits

0x2fb6,	// (0x00021c88) list_medium_line_x2_t3_g4_g3

0x2fc2,	// (0x00021c94) list_medium_line_x2_t3_g4_g4_ParamLimits

0x2fc2,	// (0x00021c94) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2c2,	// (0x0002df94) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2c2,	// (0x0002df94) list_medium_line_x2_t3_g4_g

0x8a4e,	// (0x00027720) list_medium_line_x2_t3_g4_t1_ParamLimits

0x8a4e,	// (0x00027720) list_medium_line_x2_t3_g4_t1

0x8a64,	// (0x00027736) list_medium_line_x2_t3_g4_t2_ParamLimits

0x8a64,	// (0x00027736) list_medium_line_x2_t3_g4_t2

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t3_g4_t3_ParamLimits

0x2ff7,	// (0x00021cc9) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd42,	// (0x0002ea14) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd42,	// (0x0002ea14) list_medium_line_x2_t3_g4_t

0x721f,	// (0x00025ef1) list_medium_line_g2_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_g2_g1

0xd402,	// (0x0002c0d4) list_medium_line_g2_g2_ParamLimits

0xd402,	// (0x0002c0d4) list_medium_line_g2_g2

0x0001,

0xfa00,	// (0x0002e6d2) list_medium_line_g2_g_ParamLimits

0xfa00,	// (0x0002e6d2) list_medium_line_g2_g

0xe52b,	// (0x0002d1fd) list_medium_line_g2_t1_ParamLimits

0xe52b,	// (0x0002d1fd) list_medium_line_g2_t1

0x721f,	// (0x00025ef1) list_medium_line_t3_g2_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_t3_g2_g1

0xd402,	// (0x0002c0d4) list_medium_line_t3_g2_g2_ParamLimits

0xd402,	// (0x0002c0d4) list_medium_line_t3_g2_g2

0x0001,

0xfa00,	// (0x0002e6d2) list_medium_line_t3_g2_g_ParamLimits

0xfa00,	// (0x0002e6d2) list_medium_line_t3_g2_g

0x8a7d,	// (0x0002774f) list_medium_line_t3_g2_t1_ParamLimits

0x8a7d,	// (0x0002774f) list_medium_line_t3_g2_t1

0x8a97,	// (0x00027769) list_medium_line_t3_g2_t2_ParamLimits

0x8a97,	// (0x00027769) list_medium_line_t3_g2_t2

0x8aad,	// (0x0002777f) list_medium_line_t3_g2_t3_ParamLimits

0x8aad,	// (0x0002777f) list_medium_line_t3_g2_t3

0x0002,

0xfd49,	// (0x0002ea1b) list_medium_line_t3_g2_t_ParamLimits

0xfd49,	// (0x0002ea1b) list_medium_line_t3_g2_t

0xe336,	// (0x0002d008) list_medium_line_right_icon_g1

0xe540,	// (0x0002d212) list_medium_line_right_icon_t1

0x721f,	// (0x00025ef1) list_medium_line_t2_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_t2_g1

0x8ac4,	// (0x00027796) list_medium_line_t2_t1_ParamLimits

0x8ac4,	// (0x00027796) list_medium_line_t2_t1

0x8ade,	// (0x000277b0) list_medium_line_t2_t2_ParamLimits

0x8ade,	// (0x000277b0) list_medium_line_t2_t2

0x0001,

0xfd50,	// (0x0002ea22) list_medium_line_t2_t_ParamLimits

0xfd50,	// (0x0002ea22) list_medium_line_t2_t

0x721f,	// (0x00025ef1) list_medium_line_t3_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_t3_g1

0x8af3,	// (0x000277c5) list_medium_line_t3_t1_ParamLimits

0x8af3,	// (0x000277c5) list_medium_line_t3_t1

0x8b0a,	// (0x000277dc) list_medium_line_t3_t2_ParamLimits

0x8b0a,	// (0x000277dc) list_medium_line_t3_t2

0x8b1f,	// (0x000277f1) list_medium_line_t3_t3_ParamLimits

0x8b1f,	// (0x000277f1) list_medium_line_t3_t3

0x0002,

0xfd55,	// (0x0002ea27) list_medium_line_t3_t_ParamLimits

0xfd55,	// (0x0002ea27) list_medium_line_t3_t

0x721f,	// (0x00025ef1) list_medium_line_g3_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_g3_g1

0xe54e,	// (0x0002d220) list_medium_line_g3_g2_ParamLimits

0xe54e,	// (0x0002d220) list_medium_line_g3_g2

0xd402,	// (0x0002c0d4) list_medium_line_g3_g3_ParamLimits

0xd402,	// (0x0002c0d4) list_medium_line_g3_g3

0x0002,

0xfd5c,	// (0x0002ea2e) list_medium_line_g3_g_ParamLimits

0xfd5c,	// (0x0002ea2e) list_medium_line_g3_g

0xe55a,	// (0x0002d22c) list_medium_line_g3_t1_ParamLimits

0xe55a,	// (0x0002d22c) list_medium_line_g3_t1

0x721f,	// (0x00025ef1) list_medium_line_t2_g3_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_t2_g3_g1

0xe54e,	// (0x0002d220) list_medium_line_t2_g3_g2_ParamLimits

0xe54e,	// (0x0002d220) list_medium_line_t2_g3_g2

0xd402,	// (0x0002c0d4) list_medium_line_t2_g3_g3_ParamLimits

0xd402,	// (0x0002c0d4) list_medium_line_t2_g3_g3

0x0002,

0xfd5c,	// (0x0002ea2e) list_medium_line_t2_g3_g_ParamLimits

0xfd5c,	// (0x0002ea2e) list_medium_line_t2_g3_g

0x8b31,	// (0x00027803) list_medium_line_t2_g3_t1_ParamLimits

0x8b31,	// (0x00027803) list_medium_line_t2_g3_t1

0x8b48,	// (0x0002781a) list_medium_line_t2_g3_t2_ParamLimits

0x8b48,	// (0x0002781a) list_medium_line_t2_g3_t2

0x0001,

0xfd63,	// (0x0002ea35) list_medium_line_t2_g3_t_ParamLimits

0xfd63,	// (0x0002ea35) list_medium_line_t2_g3_t

0x721f,	// (0x00025ef1) list_medium_line_t3_g3_g1_ParamLimits

0x721f,	// (0x00025ef1) list_medium_line_t3_g3_g1

0xe54e,	// (0x0002d220) list_medium_line_t3_g3_g2_ParamLimits

0xe54e,	// (0x0002d220) list_medium_line_t3_g3_g2

0xd402,	// (0x0002c0d4) list_medium_line_t3_g3_g3_ParamLimits

0xd402,	// (0x0002c0d4) list_medium_line_t3_g3_g3

0x0002,

0xfd5c,	// (0x0002ea2e) list_medium_line_t3_g3_g_ParamLimits

0xfd5c,	// (0x0002ea2e) list_medium_line_t3_g3_g

0x8b5d,	// (0x0002782f) list_medium_line_t3_g3_t1_ParamLimits

0x8b5d,	// (0x0002782f) list_medium_line_t3_g3_t1

0x8b76,	// (0x00027848) list_medium_line_t3_g3_t2_ParamLimits

0x8b76,	// (0x00027848) list_medium_line_t3_g3_t2

0x8b8c,	// (0x0002785e) list_medium_line_t3_g3_t3_ParamLimits

0x8b8c,	// (0x0002785e) list_medium_line_t3_g3_t3

0x0002,

0xfd68,	// (0x0002ea3a) list_medium_line_t3_g3_t_ParamLimits

0xfd68,	// (0x0002ea3a) list_medium_line_t3_g3_t

0xe461,	// (0x0002d133) list_medium_line_right_iconx2_g1

0xe336,	// (0x0002d008) list_medium_line_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002ea41) list_medium_line_right_iconx2_g

0xe56f,	// (0x0002d241) list_medium_line_right_iconx2_t1

0xe461,	// (0x0002d133) list_medium_line_t2_right_iconx2_g1

0xe336,	// (0x0002d008) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd6f,	// (0x0002ea41) list_medium_line_t2_right_iconx2_g

0x8ba6,	// (0x00027878) list_medium_line_t2_right_iconx2_t1

0x8bb6,	// (0x00027888) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd74,	// (0x0002ea46) list_medium_line_t2_right_iconx2_t

0x8bc4,	// (0x00027896) list_medium_line_x4_t4_t1

0x8bd2,	// (0x000278a4) list_medium_line_x4_t4_t2

0x8be2,	// (0x000278b4) list_medium_line_x4_t4_t3

0x8bf2,	// (0x000278c4) list_medium_line_x4_t4_t4

0x0003,

0xfd79,	// (0x0002ea4b) list_medium_line_x4_t4_t

0x8c2c,	// (0x000278fe) tport_appsw_pane_ParamLimits

0x8c2c,	// (0x000278fe) tport_appsw_pane

0x8c3a,	// (0x0002790c) tport_contact_pane_ParamLimits

0x8c3a,	// (0x0002790c) tport_contact_pane

0x8c4a,	// (0x0002791c) tport_listscroll_pane_ParamLimits

0x8c4a,	// (0x0002791c) tport_listscroll_pane

0x8c5a,	// (0x0002792c) cell_tport_appsw_pane_ParamLimits

0x8c5a,	// (0x0002792c) cell_tport_appsw_pane

0xc9f0,	// (0x0002b6c2) tport_appsw_pane_g1_ParamLimits

0xc9f0,	// (0x0002b6c2) tport_appsw_pane_g1

0xe57d,	// (0x0002d24f) tport_contact_pane_g1

0xe586,	// (0x0002d258) tport_contact_pane_t1

0xe594,	// (0x0002d266) tport_contact_pane_t2

0x0001,

0xfd82,	// (0x0002ea54) tport_contact_pane_t

0xe5a2,	// (0x0002d274) list_tport_pane

0xe5ab,	// (0x0002d27d) scroll_pane_cp_030

0x8c8f,	// (0x00027961) cell_tport_appsw_pane_g1

0x8c9f,	// (0x00027971) cell_tport_appsw_pane_t1

0x8cad,	// (0x0002797f) grid_highlight_pane_cp019

0x8cb5,	// (0x00027987) list_tport_double_graphic_pane_ParamLimits

0x8cb5,	// (0x00027987) list_tport_double_graphic_pane

0xa610,	// (0x000292e2) list_highlight_pane_cp023_ParamLimits

0xa610,	// (0x000292e2) list_highlight_pane_cp023

0x8cc2,	// (0x00027994) list_tport_double_graphic_pane_g1_ParamLimits

0x8cc2,	// (0x00027994) list_tport_double_graphic_pane_g1

0x8ccf,	// (0x000279a1) list_tport_double_graphic_pane_t1_ParamLimits

0x8ccf,	// (0x000279a1) list_tport_double_graphic_pane_t1

0x8ce4,	// (0x000279b6) list_tport_double_graphic_pane_t2_ParamLimits

0x8ce4,	// (0x000279b6) list_tport_double_graphic_pane_t2

0x0001,

0xfd8e,	// (0x0002ea60) list_tport_double_graphic_pane_t_ParamLimits

0xfd8e,	// (0x0002ea60) list_tport_double_graphic_pane_t

0x9c03,	// (0x000288d5) main_cale_note_pane

0x1be9,	// (0x000208bb) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1be9,	// (0x000208bb) cell_vitu2_function_top_wide_pane_cp01

0x82de,	// (0x00026fb0) wait_bar_pane_cp05_ParamLimits

0xa610,	// (0x000292e2) listscroll_cmail_pane

0xe5bc,	// (0x0002d28e) list_cmail_pane

0x8d00,	// (0x000279d2) list_cmail_body_pane

0x8d19,	// (0x000279eb) list_single_cmail_header_caption_pane

0x8d3a,	// (0x00027a0c) list_single_cmail_header_detail_pane_ParamLimits

0x8d3a,	// (0x00027a0c) list_single_cmail_header_detail_pane

0x8d6b,	// (0x00027a3d) list_single_cmail_header_caption_pane_t1

0x8d7b,	// (0x00027a4d) list_single_cmail_header_detail_pane_g1_ParamLimits

0x8d7b,	// (0x00027a4d) list_single_cmail_header_detail_pane_g1

0xe5dc,	// (0x0002d2ae) list_single_cmail_header_detail_pane_g2_ParamLimits

0xe5dc,	// (0x0002d2ae) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd93,	// (0x0002ea65) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd93,	// (0x0002ea65) list_single_cmail_header_detail_pane_g

0xe5f5,	// (0x0002d2c7) list_single_cmail_header_detail_pane_t1_ParamLimits

0xe5f5,	// (0x0002d2c7) list_single_cmail_header_detail_pane_t1

0xe667,	// (0x0002d339) list_single_cmail_header_editor_pane_bg_ParamLimits

0xe667,	// (0x0002d339) list_single_cmail_header_editor_pane_bg

0xdef1,	// (0x0002cbc3) list_cmail_body_pane_g1

0xe67e,	// (0x0002d350) list_cmail_body_pane_t1

0xd1c2,	// (0x0002be94) list_single_cmail_header_editor_pane_bg_g1

0xa7b8,	// (0x0002948a) list_single_cmail_header_editor_pane_bg_g1_copy1

0xd1d2,	// (0x0002bea4) list_single_cmail_header_editor_pane_bg_g1_copy2

0xd1ca,	// (0x0002be9c) list_single_cmail_header_editor_pane_bg_g1_copy3

0xd3fa,	// (0x0002c0cc) list_single_cmail_header_editor_pane_bg_g1_copy4

0xd1f2,	// (0x0002bec4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xd1e2,	// (0x0002beb4) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xd1ea,	// (0x0002bebc) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xa798,	// (0x0002946a) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0x8d93,	// (0x00027a65) calenote_gesture_pane_ParamLimits

0x8d93,	// (0x00027a65) calenote_gesture_pane

0x8dad,	// (0x00027a7f) calenote_window_pane_ParamLimits

0x8dad,	// (0x00027a7f) calenote_window_pane

0xe68c,	// (0x0002d35e) popup_note_window_cp01

0x8dc5,	// (0x00027a97) calenote_swipe_1_pane_ParamLimits

0x8dc5,	// (0x00027a97) calenote_swipe_1_pane

0x86cb,	// (0x0002739d) calenote_swipe_2_pane_ParamLimits

0x86cb,	// (0x0002739d) calenote_swipe_2_pane

0xe250,	// (0x0002cf22) calenote_swipe_1_pane_g1_ParamLimits

0xe250,	// (0x0002cf22) calenote_swipe_1_pane_g1

0xe25d,	// (0x0002cf2f) calenote_swipe_1_pane_g2_ParamLimits

0xe25d,	// (0x0002cf2f) calenote_swipe_1_pane_g2

0x0001,

0xfcbc,	// (0x0002e98e) calenote_swipe_1_pane_g_ParamLimits

0xfcbc,	// (0x0002e98e) calenote_swipe_1_pane_g

0xe69e,	// (0x0002d370) calenote_swipe_1_pane_t1_ParamLimits

0xe69e,	// (0x0002d370) calenote_swipe_1_pane_t1

0xe250,	// (0x0002cf22) calenote_swipe_2_pane_g1_ParamLimits

0xe250,	// (0x0002cf22) calenote_swipe_2_pane_g1

0xe6bd,	// (0x0002d38f) calenote_swipe_2_pane_g2_ParamLimits

0xe6bd,	// (0x0002d38f) calenote_swipe_2_pane_g2

0x0001,

0xfd9f,	// (0x0002ea71) calenote_swipe_2_pane_g_ParamLimits

0xfd9f,	// (0x0002ea71) calenote_swipe_2_pane_g

0xe6c9,	// (0x0002d39b) calenote_swipe_2_pane_t1_ParamLimits

0xe6c9,	// (0x0002d39b) calenote_swipe_2_pane_t1

0x9c03,	// (0x000288d5) main_mup_navstr_pane

0x618b,	// (0x00024e5d) main_mup3_pane_t7_ParamLimits

0x618b,	// (0x00024e5d) main_mup3_pane_t7

0x14dc,	// (0x000201ae) main_mp4_pane_g6_ParamLimits

0x14dc,	// (0x000201ae) main_mp4_pane_g6

0x17cd,	// (0x0002049f) main_image3_pane_t4_ParamLimits

0x17cd,	// (0x0002049f) main_image3_pane_t4

0x8dd8,	// (0x00027aaa) popup_navstr_preview_pane_ParamLimits

0x8dd8,	// (0x00027aaa) popup_navstr_preview_pane

0x8de4,	// (0x00027ab6) scroll_navstr_pane_ParamLimits

0x8de4,	// (0x00027ab6) scroll_navstr_pane

0x9c03,	// (0x000288d5) bg_popup_preview_window_pane_cp04

0xe6f0,	// (0x0002d3c2) popup_navstr_preview_pane_t1

0x8df0,	// (0x00027ac2) scroll_navstr_pane_g1_ParamLimits

0x8df0,	// (0x00027ac2) scroll_navstr_pane_g1

0x8dfd,	// (0x00027acf) scroll_navstr_pane_t1_ParamLimits

0x8dfd,	// (0x00027acf) scroll_navstr_pane_t1

0xe695,	// (0x0002d367) bg_button_pane_cp014

0xe695,	// (0x0002d367) bg_button_pane_cp030

0x85b7,	// (0x00027289) list_double_fisheye_pane_g4_ParamLimits

0x85b7,	// (0x00027289) list_double_fisheye_pane_g4

0x85c3,	// (0x00027295) list_double_fisheye_pane_g5_ParamLimits

0x85c3,	// (0x00027295) list_double_fisheye_pane_g5

0xe5c4,	// (0x0002d296) sp_fs_scroll_pane_cp03

0xd512,	// (0x0002c1e4) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xe376,	// (0x0002d048) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfcd9,	// (0x0002e9ab) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xe382,	// (0x0002d054) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0x8cf6,	// (0x000279c8) sp_fs_scroll_pane_cp02

0xa4ad,	// (0x0002917f) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xa4ad,	// (0x0002917f) popup_sp_fs_calendar_preview_list_single_pane

0x9c03,	// (0x000288d5) main_cam6_pano_pane

0xa610,	// (0x000292e2) main_mup3_pane_ParamLimits

0x9c03,	// (0x000288d5) main_phacti_pane

0x81b1,	// (0x00026e83) bg_button_pane_cp11

0x81c9,	// (0x00026e9b) main_mobtv_info_pane_g2_ParamLimits

0x81c9,	// (0x00026e9b) main_mobtv_info_pane_g2

0x0001,

0xfc39,	// (0x0002e90b) main_mobtv_info_pane_g_ParamLimits

0xfc39,	// (0x0002e90b) main_mobtv_info_pane_g

0x837b,	// (0x0002704d) sc_clock_pane_t5_ParamLimits

0x837b,	// (0x0002704d) sc_clock_pane_t5

0x842a,	// (0x000270fc) main_radioblah_pane_g1_ParamLimits

0xe19c,	// (0x0002ce6e) main_radioblah_pane_t3_ParamLimits

0xe19c,	// (0x0002ce6e) main_radioblah_pane_t3

0xe1b4,	// (0x0002ce86) main_radioblah_pane_t4_ParamLimits

0xe1b4,	// (0x0002ce86) main_radioblah_pane_t4

0x8448,	// (0x0002711a) main_radioblah_text_pane_ParamLimits

0x8448,	// (0x0002711a) main_radioblah_text_pane

0x8455,	// (0x00027127) main_radioblah_info_pane_g1_ParamLimits

0x84ee,	// (0x000271c0) main_radioblah_info_pane_t4_ParamLimits

0x84ee,	// (0x000271c0) main_radioblah_info_pane_t4

0xa610,	// (0x000292e2) main_sp_fs_calendar_pane

0x8e0f,	// (0x00027ae1) main_phacti_pane_g1

0x8e17,	// (0x00027ae9) phacti_note_pane_ParamLimits

0x8e17,	// (0x00027ae9) phacti_note_pane

0xe707,	// (0x0002d3d9) phacti_term_pane_ParamLimits

0xe707,	// (0x0002d3d9) phacti_term_pane

0xe71c,	// (0x0002d3ee) phacti_note_pane_t1_ParamLimits

0xe71c,	// (0x0002d3ee) phacti_note_pane_t1

0xe733,	// (0x0002d405) phacti_term_pane_g1

0xe73b,	// (0x0002d40d) phacti_term_pane_t1_ParamLimits

0xe73b,	// (0x0002d40d) phacti_term_pane_t1

0xe765,	// (0x0002d437) popup_sp_fs_calendar_preview_list_single_pane_g1

0xe76d,	// (0x0002d43f) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfda9,	// (0x0002ea7b) popup_sp_fs_calendar_preview_list_single_pane_g

0xe775,	// (0x0002d447) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xe775,	// (0x0002d447) popup_sp_fs_calendar_preview_list_single_pane_t1

0xe78b,	// (0x0002d45d) aid_popup_sp_fs_bg_corner_pane

0xc74f,	// (0x0002b421) popup_sp_fs_calendar_preview_bg_pane_g1

0x9c03,	// (0x000288d5) popup_sp_fs_calendar_preview_bg_pane

0xe793,	// (0x0002d465) popup_sp_fs_calendar_preview_list_pane

0xc2fe,	// (0x0002afd0) bg_main_sp_fs_cale_pane_ParamLimits

0xc2fe,	// (0x0002afd0) bg_main_sp_fs_cale_pane

0xe7a4,	// (0x0002d476) listscroll_cale_mrui_pane_ParamLimits

0xe7a4,	// (0x0002d476) listscroll_cale_mrui_pane

0xe7b9,	// (0x0002d48b) listscroll_sp_fs_schedule_track_pane

0xe7c2,	// (0x0002d494) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xe7c2,	// (0x0002d494) main_sp_fs_ctrlbar_pane_cp01

0xe7d5,	// (0x0002d4a7) main_sp_fs_ribbon_pane

0xe7dd,	// (0x0002d4af) popup_sp_fs_cale_preview_window

0x8e76,	// (0x00027b48) list_single_sp_fs_schedule_track_pane_ParamLimits

0x8e76,	// (0x00027b48) list_single_sp_fs_schedule_track_pane

0x22c6,	// (0x00020f98) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0x22c6,	// (0x00020f98) bg_sp_fs_highlight_list_pane_cp03

0x8e8b,	// (0x00027b5d) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0x8e8b,	// (0x00027b5d) list_single_sp_fs_schedule_track_pane_g1

0x8e97,	// (0x00027b69) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0x8e97,	// (0x00027b69) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdae,	// (0x0002ea80) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdae,	// (0x0002ea80) list_single_sp_fs_schedule_track_pane_g

0x8ea3,	// (0x00027b75) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0x8ea3,	// (0x00027b75) list_single_sp_fs_schedule_track_pane_t1

0x8ec1,	// (0x00027b93) sp_fs_schedule_track_pane_ParamLimits

0x8ec1,	// (0x00027b93) sp_fs_schedule_track_pane

0xe7ef,	// (0x0002d4c1) sp_fs_schedule_track_pane_g1

0xe7f7,	// (0x0002d4c9) sp_fs_schedule_track_pane_g2

0xe7ff,	// (0x0002d4d1) sp_fs_schedule_track_pane_g3

0xe807,	// (0x0002d4d9) sp_fs_schedule_track_pane_g4

0xe80f,	// (0x0002d4e1) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb3,	// (0x0002ea85) sp_fs_schedule_track_pane_g

0xd1c2,	// (0x0002be94) bg_sp_fs_schedule_viewer_highlight_g1

0xa7b8,	// (0x0002948a) bg_sp_fs_schedule_viewer_highlight_g2

0xd1ca,	// (0x0002be9c) bg_sp_fs_schedule_viewer_highlight_g3

0xd1d2,	// (0x0002bea4) bg_sp_fs_schedule_viewer_highlight_g4

0xd3fa,	// (0x0002c0cc) bg_sp_fs_schedule_viewer_highlight_g5

0xd1e2,	// (0x0002beb4) bg_sp_fs_schedule_viewer_highlight_g6

0xd1ea,	// (0x0002bebc) bg_sp_fs_schedule_viewer_highlight_g7

0xd1f2,	// (0x0002bec4) bg_sp_fs_schedule_viewer_highlight_g8

0xa798,	// (0x0002946a) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdbe,	// (0x0002ea90) bg_sp_fs_schedule_viewer_highlight_g

0x9c03,	// (0x000288d5) bg_main_sp_fs_ribbon_pane

0x8ed3,	// (0x00027ba5) main_sp_fs_ribbon_pane_g1

0xe817,	// (0x0002d4e9) main_sp_fs_ribbon_pane_t1

0x8edc,	// (0x00027bae) main_sp_fs_ribbon_pane_t2

0xe826,	// (0x0002d4f8) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd1,	// (0x0002eaa3) main_sp_fs_ribbon_pane_t

0xe835,	// (0x0002d507) main_sp_fs_ribbon_scheduler_pane

0xe83d,	// (0x0002d50f) bg_main_sp_fs_ribbon_pane_g1

0xe846,	// (0x0002d518) bg_main_sp_fs_ribbon_pane_g2

0xe84f,	// (0x0002d521) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdd8,	// (0x0002eaaa) bg_main_sp_fs_ribbon_pane_g

0xe857,	// (0x0002d529) main_sp_fs_ribbon_scheduler_pane_g1

0xe860,	// (0x0002d532) main_sp_fs_ribbon_scheduler_pane_g2

0xe869,	// (0x0002d53b) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfddf,	// (0x0002eab1) main_sp_fs_ribbon_scheduler_pane_g

0xe872,	// (0x0002d544) list_cale_mrui_pane

0x8eeb,	// (0x00027bbd) sp_fs_scroll_pane_cp07_ParamLimits

0x8eeb,	// (0x00027bbd) sp_fs_scroll_pane_cp07

0x8f07,	// (0x00027bd9) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0x8f07,	// (0x00027bd9) bg_sp_fs_schedule_viewer_highlight

0xe87f,	// (0x0002d551) list_single_sp_fs_schedule_track_pane_cp01

0xe887,	// (0x0002d559) list_sp_fs_schedule_track_pane

0xe88f,	// (0x0002d561) sp_fs_scroll_pane_cp06_ParamLimits

0xe88f,	// (0x0002d561) sp_fs_scroll_pane_cp06

0xc74f,	// (0x0002b421) bgmain_sp_fs_calendar_pane_g1

0x8f14,	// (0x00027be6) list_single_cale_mrui_pane_ParamLimits

0x8f14,	// (0x00027be6) list_single_cale_mrui_pane

0xe8a1,	// (0x0002d573) list_single_cale_mrui_row_pane_ParamLimits

0xe8a1,	// (0x0002d573) list_single_cale_mrui_row_pane

0xe8b7,	// (0x0002d589) list_single_cale_mrui_row_pane_g1_ParamLimits

0xe8b7,	// (0x0002d589) list_single_cale_mrui_row_pane_g1

0xe8fc,	// (0x0002d5ce) list_single_cale_mrui_row_pane_t1_ParamLimits

0xe8fc,	// (0x0002d5ce) list_single_cale_mrui_row_pane_t1

0x8f29,	// (0x00027bfb) list_single_cale_mrui_row_pane_t2_ParamLimits

0x8f29,	// (0x00027bfb) list_single_cale_mrui_row_pane_t2

0xe90e,	// (0x0002d5e0) list_single_cale_mrui_row_pane_t3_ParamLimits

0xe90e,	// (0x0002d5e0) list_single_cale_mrui_row_pane_t3

0xe93d,	// (0x0002d60f) list_single_cale_mrui_row_pane_t4_ParamLimits

0xe93d,	// (0x0002d60f) list_single_cale_mrui_row_pane_t4

0x0003,

0xfded,	// (0x0002eabf) list_single_cale_mrui_row_pane_t_ParamLimits

0xfded,	// (0x0002eabf) list_single_cale_mrui_row_pane_t

0x8f8f,	// (0x00027c61) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0x8f8f,	// (0x00027c61) list_single_cmail_header_editor_pane_bg_cp01

0x8fb3,	// (0x00027c85) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0x8fb3,	// (0x00027c85) list_single_cmail_header_editor_pane_bg_cp02

0x8fcf,	// (0x00027ca1) main_radioblah_text_pane_t1_ParamLimits

0x8fcf,	// (0x00027ca1) main_radioblah_text_pane_t1

0xe96c,	// (0x0002d63e) cam6_indi_pane_cp01

0xe974,	// (0x0002d646) cam6_mode_pane_cp01

0xe97c,	// (0x0002d64e) cam6_pano_pane

0xe985,	// (0x0002d657) cam6_zoom_pane_cp01

0xe98f,	// (0x0002d661) cam6_pano_image_pane

0xe998,	// (0x0002d66a) cam6_pano_pane_g1

0xdef1,	// (0x0002cbc3) cam6_pano_pane_g2

0xe9a1,	// (0x0002d673) cam6_pano_pane_g3

0xe9aa,	// (0x0002d67c) cam6_pano_pane_g4

0xccf5,	// (0x0002b9c7) cam6_pano_pane_g5

0xe9b3,	// (0x0002d685) cam6_pano_pane_g6

0xe9bb,	// (0x0002d68d) cam6_pano_pane_g7

0xe9c3,	// (0x0002d695) cam6_pano_pane_g8

0xe9cc,	// (0x0002d69e) cam6_pano_pane_g9

0x0008,

0xfdf6,	// (0x0002eac8) cam6_pano_pane_g

0x9c03,	// (0x000288d5) main_browser_tag_pane

0xe6e8,	// (0x0002d3ba) grid_navstr_albumart_pane

0xe9d7,	// (0x0002d6a9) cell_navstr_albumart_pane_ParamLimits

0xe9d7,	// (0x0002d6a9) cell_navstr_albumart_pane

0xe9f6,	// (0x0002d6c8) cell_navstr_albumart_pane_g1

0xc10b,	// (0x0002addd) cell_navstr_albumart_pane_g2

0xc11b,	// (0x0002aded) cell_navstr_albumart_pane_g3

0xc113,	// (0x0002ade5) cell_navstr_albumart_pane_g4

0x0003,

0xfe09,	// (0x0002eadb) cell_navstr_albumart_pane_g

0x8fe9,	// (0x00027cbb) bt_list_pane_ParamLimits

0x8fe9,	// (0x00027cbb) bt_list_pane

0x9002,	// (0x00027cd4) bt_list_pane_t1

0x9011,	// (0x00027ce3) bt_list_pane_t2

0x0001,

0xfe12,	// (0x0002eae4) bt_list_pane_t

0x9c03,	// (0x000288d5) main_cale_prevew_pane

0x9020,	// (0x00027cf2) popup_cale_preview_window_ParamLimits

0x9020,	// (0x00027cf2) popup_cale_preview_window

0xa610,	// (0x000292e2) bg_popup_preview_window_pane_cp05_ParamLimits

0xa610,	// (0x000292e2) bg_popup_preview_window_pane_cp05

0xe9fe,	// (0x0002d6d0) list_cale_preview_pane_ParamLimits

0xe9fe,	// (0x0002d6d0) list_cale_preview_pane

0x903b,	// (0x00027d0d) list_double_cale_preview_pane_ParamLimits

0x903b,	// (0x00027d0d) list_double_cale_preview_pane

0x904f,	// (0x00027d21) list_single_cale_preview_pane_ParamLimits

0x904f,	// (0x00027d21) list_single_cale_preview_pane

0x9067,	// (0x00027d39) list_single_cale_preview_pane_g1

0x906f,	// (0x00027d41) list_single_cale_preview_pane_t1_ParamLimits

0x906f,	// (0x00027d41) list_single_cale_preview_pane_t1

0x9084,	// (0x00027d56) list_double_cale_preview_pane_g1

0x908c,	// (0x00027d5e) list_double_cale_preview_pane_t1_ParamLimits

0x908c,	// (0x00027d5e) list_double_cale_preview_pane_t1

0x90a1,	// (0x00027d73) list_double_cale_preview_pane_t2_ParamLimits

0x90a1,	// (0x00027d73) list_double_cale_preview_pane_t2

0x0001,

0xfe17,	// (0x0002eae9) list_double_cale_preview_pane_t_ParamLimits

0xfe17,	// (0x0002eae9) list_double_cale_preview_pane_t

0x9c03,	// (0x000288d5) main_ezdial_pane

0xa610,	// (0x000292e2) main_sp_fs_email_pane_ParamLimits

0x8703,	// (0x000273d5) cmail_ddmenu_btn01_pane_ParamLimits

0x8703,	// (0x000273d5) cmail_ddmenu_btn01_pane

0x8720,	// (0x000273f2) cmail_ddmenu_btn02_pane_ParamLimits

0x8720,	// (0x000273f2) cmail_ddmenu_btn02_pane

0x873e,	// (0x00027410) cmail_ddmenu_btn03_pane_ParamLimits

0x873e,	// (0x00027410) cmail_ddmenu_btn03_pane

0x876e,	// (0x00027440) main_sp_fs_ctrlbar_pane_ParamLimits

0x8788,	// (0x0002745a) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0x8d00,	// (0x000279d2) list_cmail_body_pane_ParamLimits

0xe5d3,	// (0x0002d2a5) bg_button_pane_cp12

0xe5e8,	// (0x0002d2ba) list_single_cmail_header_detail_pane_g3_ParamLimits

0xe5e8,	// (0x0002d2ba) list_single_cmail_header_detail_pane_g3

0xe643,	// (0x0002d315) list_single_cmail_header_detail_pane_t2_ParamLimits

0xe643,	// (0x0002d315) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9a,	// (0x0002ea6c) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9a,	// (0x0002ea6c) list_single_cmail_header_detail_pane_t

0xe750,	// (0x0002d422) phacti_term_pane_t2_ParamLimits

0xe750,	// (0x0002d422) phacti_term_pane_t2

0x0001,

0xfda4,	// (0x0002ea76) phacti_term_pane_t_ParamLimits

0xfda4,	// (0x0002ea76) phacti_term_pane_t

0xea0a,	// (0x0002d6dc) aid_size_list_single_double

0x90b9,	// (0x00027d8b) popup_ezdial_listscroll_window

0x90db,	// (0x00027dad) popup_number_entry_window_cp01

0xa54d,	// (0x0002921f) bg_popup_call_pane_cp09

0xea16,	// (0x0002d6e8) ezdial_list_pane

0xea1e,	// (0x0002d6f0) scroll_pane_cp23

0xc52e,	// (0x0002b200) bg_button_pane_cp028_ParamLimits

0xc52e,	// (0x0002b200) bg_button_pane_cp028

0x90e9,	// (0x00027dbb) cmail_ddmenu_btn01_pane_g1_ParamLimits

0x90e9,	// (0x00027dbb) cmail_ddmenu_btn01_pane_g1

0x90fb,	// (0x00027dcd) cmail_ddmenu_btn01_pane_g2_ParamLimits

0x90fb,	// (0x00027dcd) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1c,	// (0x0002eaee) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1c,	// (0x0002eaee) cmail_ddmenu_btn01_pane_g

0xea26,	// (0x0002d6f8) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xea26,	// (0x0002d6f8) cmail_ddmenu_btn01_pane_t1

0xc2fe,	// (0x0002afd0) bg_button_pane_cp029_ParamLimits

0xc2fe,	// (0x0002afd0) bg_button_pane_cp029

0x9107,	// (0x00027dd9) cmail_ddmenu_btn02_pane_g1_ParamLimits

0x9107,	// (0x00027dd9) cmail_ddmenu_btn02_pane_g1

0x911f,	// (0x00027df1) cmail_ddmenu_btn02_pane_t1_ParamLimits

0x911f,	// (0x00027df1) cmail_ddmenu_btn02_pane_t1

0x22c6,	// (0x00020f98) bg_button_pane_cp031_ParamLimits

0x22c6,	// (0x00020f98) bg_button_pane_cp031

0x9107,	// (0x00027dd9) cmail_ddmenu_btn03_pane_g1_ParamLimits

0x9107,	// (0x00027dd9) cmail_ddmenu_btn03_pane_g1

0x911f,	// (0x00027df1) cmail_ddmenu_btn03_pane_t1_ParamLimits

0x911f,	// (0x00027df1) cmail_ddmenu_btn03_pane_t1

0x69e4,	// (0x000256b6) cell_dialer2_keypad_pane_t1_ParamLimits

0x69fe,	// (0x000256d0) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x69fe,	// (0x000256d0) cell_dialer2_keypad_pane_t1_copy1

0x8022,	// (0x00026cf4) ncimui_group_button_pane

0xa610,	// (0x000292e2) main_sp_fs_calendar_pane_ParamLimits

0x8d19,	// (0x000279eb) list_single_cmail_header_caption_pane_ParamLimits

0xe79b,	// (0x0002d46d) aid_recal_txt_sm_pane

0x9c03,	// (0x000288d5) mian_recal_day_pane

0xe7dd,	// (0x0002d4af) popup_sp_fs_cale_preview_window_ParamLimits

0xea3c,	// (0x0002d70e) list_recal_day_pane

0xea7f,	// (0x0002d751) list_single_recal_day_pane_ParamLimits

0xea7f,	// (0x0002d751) list_single_recal_day_pane

0xea91,	// (0x0002d763) list_single_recal_day_pane_g1_ParamLimits

0xea91,	// (0x0002d763) list_single_recal_day_pane_g1

0xea9d,	// (0x0002d76f) list_single_recal_day_pane_g2_ParamLimits

0xea9d,	// (0x0002d76f) list_single_recal_day_pane_g2

0xeaa9,	// (0x0002d77b) list_single_recal_day_pane_g3_ParamLimits

0xeaa9,	// (0x0002d77b) list_single_recal_day_pane_g3

0x9143,	// (0x00027e15) list_single_recal_day_pane_g4_ParamLimits

0x9143,	// (0x00027e15) list_single_recal_day_pane_g4

0xeab5,	// (0x0002d787) list_single_recal_day_pane_g5_ParamLimits

0xeab5,	// (0x0002d787) list_single_recal_day_pane_g5

0xeac1,	// (0x0002d793) list_single_recal_day_pane_g6_ParamLimits

0xeac1,	// (0x0002d793) list_single_recal_day_pane_g6

0x0004,

0xfe2b,	// (0x0002eafd) list_single_recal_day_pane_g_ParamLimits

0xfe2b,	// (0x0002eafd) list_single_recal_day_pane_g

0xead5,	// (0x0002d7a7) list_single_recal_day_pane_t1

0xeae7,	// (0x0002d7b9) list_single_recal_day_pane_t2

0x0001,

0xfe36,	// (0x0002eb08) list_single_recal_day_pane_t

0x915b,	// (0x00027e2d) ncimui_query_button_pane_ParamLimits

0x915b,	// (0x00027e2d) ncimui_query_button_pane

0x916b,	// (0x00027e3d) ncimui_query_button_pane_t1_ParamLimits

0x916b,	// (0x00027e3d) ncimui_query_button_pane_t1

0xeaf9,	// (0x0002d7cb) ncimui_query_button_pane_t2_ParamLimits

0xeaf9,	// (0x0002d7cb) ncimui_query_button_pane_t2

0x0001,

0xfe3b,	// (0x0002eb0d) ncimui_query_button_pane_t_ParamLimits

0xfe3b,	// (0x0002eb0d) ncimui_query_button_pane_t

0x917e,	// (0x00027e50) query_button_pane_ParamLimits

0x917e,	// (0x00027e50) query_button_pane

0x9c03,	// (0x000288d5) bg_button_pane_cp0028

0xeb0c,	// (0x0002d7de) query_button_pane_t1

0x545e,	// (0x00024130) main_tport_pane_ParamLimits

0x8c02,	// (0x000278d4) bg_popup_window_pane_cp01_ParamLimits

0x8c02,	// (0x000278d4) bg_popup_window_pane_cp01

0x8c10,	// (0x000278e2) heading_pane_cp08_ParamLimits

0x8c10,	// (0x000278e2) heading_pane_cp08

0x8c1e,	// (0x000278f0) heading_pane_cp07_ParamLimits

0x8c1e,	// (0x000278f0) heading_pane_cp07

0x8c8f,	// (0x00027961) cell_tport_appsw_pane_g2

0x0002,

0xfd87,	// (0x0002ea59) cell_tport_appsw_pane_g

0xaffa,	// (0x00029ccc) input_candi_list_open_g1

0xa96c,	// (0x0002963e) list_cale_time_pane_g6_ParamLimits

0xa96c,	// (0x0002963e) list_cale_time_pane_g6

0x5bf7,	// (0x000248c9) aid_size_touch_calib_1_ParamLimits

0x5bf7,	// (0x000248c9) aid_size_touch_calib_1

0x5c03,	// (0x000248d5) aid_size_touch_calib_2_ParamLimits

0x5c03,	// (0x000248d5) aid_size_touch_calib_2

0x5c11,	// (0x000248e3) aid_size_touch_calib_3_ParamLimits

0x5c11,	// (0x000248e3) aid_size_touch_calib_3

0x5c21,	// (0x000248f3) aid_size_touch_calib_4_ParamLimits

0x5c21,	// (0x000248f3) aid_size_touch_calib_4

0x5c2f,	// (0x00024901) main_touch_calib_button_group_pane_ParamLimits

0x5c2f,	// (0x00024901) main_touch_calib_button_group_pane

0x5c3d,	// (0x0002490f) main_touch_calib_pane_g1_ParamLimits

0x5c49,	// (0x0002491b) main_touch_calib_pane_g2_ParamLimits

0x5c55,	// (0x00024927) main_touch_calib_pane_g3_ParamLimits

0x5c61,	// (0x00024933) main_touch_calib_pane_g4_ParamLimits

0xf751,	// (0x0002e423) main_touch_calib_pane_g_ParamLimits

0x5c6d,	// (0x0002493f) main_touch_calib_pane_t1_ParamLimits

0x5c84,	// (0x00024956) main_touch_calib_pane_t2_ParamLimits

0x5c9d,	// (0x0002496f) main_touch_calib_pane_t3_ParamLimits

0x5cb3,	// (0x00024985) main_touch_calib_pane_t4_ParamLimits

0x5cc9,	// (0x0002499b) main_touch_calib_pane_t5_ParamLimits

0xf75a,	// (0x0002e42c) main_touch_calib_pane_t_ParamLimits

0xca8b,	// (0x0002b75d) list_single_fp_cale_pane_g3_ParamLimits

0xca8b,	// (0x0002b75d) list_single_fp_cale_pane_g3

0x19c9,	// (0x0002069b) bg_button_pane_cp012_ParamLimits

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp03_ParamLimits

0x1df7,	// (0x00020ac9) cell_vitu2_function_top_pane_g1_ParamLimits

0x19c9,	// (0x0002069b) bg_vkb2_func_pane_cp04_ParamLimits

0x7fa8,	// (0x00026c7a) main_ncimui_button_group_pane_ParamLimits

0x7fa8,	// (0x00026c7a) main_ncimui_button_group_pane

0x8010,	// (0x00026ce2) main_ncimui_pane_t3_ParamLimits

0x8010,	// (0x00026ce2) main_ncimui_pane_t3

0xe6fe,	// (0x0002d3d0) phacti_button_group_pane

0xea0a,	// (0x0002d6dc) aid_size_list_single_double_ParamLimits

0x90b9,	// (0x00027d8b) popup_ezdial_listscroll_window_ParamLimits

0x90db,	// (0x00027dad) popup_number_entry_window_cp01_ParamLimits

0x918b,	// (0x00027e5d) phacti_button_pane_ParamLimits

0x918b,	// (0x00027e5d) phacti_button_pane

0x9c03,	// (0x000288d5) bg_button_pane_cp14

0xeb1a,	// (0x0002d7ec) phacti_button_pane_t1

0x919c,	// (0x00027e6e) main_touch_calib_button_pane_ParamLimits

0x919c,	// (0x00027e6e) main_touch_calib_button_pane

0xa397,	// (0x00029069) bg_button_pane_cp18_ParamLimits

0xa397,	// (0x00029069) bg_button_pane_cp18

0xeb28,	// (0x0002d7fa) main_touch_calib_button_pane_t1_ParamLimits

0xeb28,	// (0x0002d7fa) main_touch_calib_button_pane_t1

0xeb3e,	// (0x0002d810) main_touch_calib_button_pane_t2_ParamLimits

0xeb3e,	// (0x0002d810) main_touch_calib_button_pane_t2

0x0001,

0xfe40,	// (0x0002eb12) main_touch_calib_button_pane_t_ParamLimits

0xfe40,	// (0x0002eb12) main_touch_calib_button_pane_t

0x9c03,	// (0x000288d5) cell_ncimui_button_pane

0x9c03,	// (0x000288d5) bg_button_pane_cp032

0xeb5c,	// (0x0002d82e) cell_ncimui_button_pane_t1

0x16de,	// (0x000203b0) image3_infobar_pane_ParamLimits

0x16de,	// (0x000203b0) image3_infobar_pane

0x839d,	// (0x0002706f) fs_bigclock_status_pane_ParamLimits

0x839d,	// (0x0002706f) fs_bigclock_status_pane

0x83aa,	// (0x0002707c) main_fs_bigclock_clock_pane_ParamLimits

0x83aa,	// (0x0002707c) main_fs_bigclock_clock_pane

0x83c6,	// (0x00027098) main_fs_bigclock_indi_pane_ParamLimits

0x83c6,	// (0x00027098) main_fs_bigclock_indi_pane

0x83f8,	// (0x000270ca) main_fs_bigclock_swipe_pane_ParamLimits

0x83f8,	// (0x000270ca) main_fs_bigclock_swipe_pane

0x9c03,	// (0x000288d5) main_fs_clock_dumped_data

0xdffe,	// (0x0002ccd0) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xdffe,	// (0x0002ccd0) list_single_fs_bigclock_indicator_pane_g1

0xe028,	// (0x0002ccfa) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xe028,	// (0x0002ccfa) list_single_fs_bigclock_indicator_pane_g2

0xe042,	// (0x0002cd14) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xe042,	// (0x0002cd14) list_single_fs_bigclock_indicator_pane_g3

0xe05c,	// (0x0002cd2e) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xe05c,	// (0x0002cd2e) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc6d,	// (0x0002e93f) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc6d,	// (0x0002e93f) list_single_fs_bigclock_indicator_pane_g

0xe087,	// (0x0002cd59) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xe087,	// (0x0002cd59) list_single_fs_bigclock_indicator_pane_t1

0xe0af,	// (0x0002cd81) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xe0af,	// (0x0002cd81) list_single_fs_bigclock_indicator_pane_t2

0xe0d7,	// (0x0002cda9) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xe0d7,	// (0x0002cda9) list_single_fs_bigclock_indicator_pane_t3

0xe0ff,	// (0x0002cdd1) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xe0ff,	// (0x0002cdd1) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc78,	// (0x0002e94a) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc78,	// (0x0002e94a) list_single_fs_bigclock_indicator_pane_t

0xeb6a,	// (0x0002d83c) image3_infobar_fav_pane_ParamLimits

0xeb6a,	// (0x0002d83c) image3_infobar_fav_pane

0xeb7a,	// (0x0002d84c) image3_infobar_loc_pane_ParamLimits

0xeb7a,	// (0x0002d84c) image3_infobar_loc_pane

0xeb90,	// (0x0002d862) image3_infobar_time_pane_ParamLimits

0xeb90,	// (0x0002d862) image3_infobar_time_pane

0xc74f,	// (0x0002b421) image3_infobar_time_pane_g1

0xeba0,	// (0x0002d872) image3_infobar_time_pane_t1

0xc74f,	// (0x0002b421) image3_infobar_loc_pane_g1

0xebae,	// (0x0002d880) image3_infobar_loc_pane_g2

0x0001,

0xfe45,	// (0x0002eb17) image3_infobar_loc_pane_g

0xebb6,	// (0x0002d888) image3_infobar_loc_pane_t1

0xc74f,	// (0x0002b421) image3_infobar_fav_pane_g1

0xebc4,	// (0x0002d896) image3_infobar_fav_pane_g2

0x0001,

0xfe4a,	// (0x0002eb1c) image3_infobar_fav_pane_g

0xebcc,	// (0x0002d89e) fs_bigclock_status_battery_pane

0xebd5,	// (0x0002d8a7) fs_bigclock_status_signal_pane

0xebde,	// (0x0002d8b0) fs_bigclock_status_title_pane

0xebe7,	// (0x0002d8b9) fs_bigclock_status_signal_pane_g1

0xebf0,	// (0x0002d8c2) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe4f,	// (0x0002eb21) fs_bigclock_status_signal_pane_g

0xebf8,	// (0x0002d8ca) fs_bigclock_status_battery_pane_g1

0xec01,	// (0x0002d8d3) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe54,	// (0x0002eb26) fs_bigclock_status_battery_pane_g

0xec09,	// (0x0002d8db) fs_bigclock_status_title_pane_t1

0xc74f,	// (0x0002b421) main_fs_bigclock_clock_pane_g1

0xec17,	// (0x0002d8e9) main_fs_bigclock_clock_pane_g2

0xec22,	// (0x0002d8f4) main_fs_bigclock_clock_pane_g3

0xec22,	// (0x0002d8f4) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe59,	// (0x0002eb2b) main_fs_bigclock_clock_pane_g

0xec2e,	// (0x0002d900) main_fs_bigclock_clock_pane_t1

0x91ac,	// (0x00027e7e) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe62,	// (0x0002eb34) main_fs_bigclock_clock_pane_t

0x91bb,	// (0x00027e8d) list_single_fs_bigclock_indicator_pane_ParamLimits

0x91bb,	// (0x00027e8d) list_single_fs_bigclock_indicator_pane

0x91cc,	// (0x00027e9e) list_single_fs_bigclock_pane_ParamLimits

0x91cc,	// (0x00027e9e) list_single_fs_bigclock_pane

0xec45,	// (0x0002d917) main_fs_bigclock_indicator_pane_t1

0xec54,	// (0x0002d926) list_single_fs_bigclock_pane_g1

0xec5c,	// (0x0002d92e) list_single_fs_bigclock_pane_t1

0xc74f,	// (0x0002b421) main_fs_bigclock_swipe_pane_g1

0xec9f,	// (0x0002d971) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe73,	// (0x0002eb45) main_fs_bigclock_swipe_pane_g

0xeca7,	// (0x0002d979) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xeca7,	// (0x0002d979) main_fs_bigclock_swipe_pane_t1

0x43e5,	// (0x000230b7) call_type_pane_ParamLimits

0x9c03,	// (0x000288d5) main_btmg_pane

0xe8e3,	// (0x0002d5b5) list_single_cale_mrui_row_pane_g2_ParamLimits

0xe8e3,	// (0x0002d5b5) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde6,	// (0x0002eab8) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde6,	// (0x0002eab8) list_single_cale_mrui_row_pane_g

0xea65,	// (0x0002d737) list_recal_vselct_arw_lo_pane

0xea6d,	// (0x0002d73f) list_recal_vselct_arw_up_pane

0xea75,	// (0x0002d747) list_recal_vselct_pane

0x9222,	// (0x00027ef4) btmg_button_pane

0x922e,	// (0x00027f00) main_btmg_pane_g1

0x9c03,	// (0x000288d5) bg_button_pane_cp044

0xecc4,	// (0x0002d996) btmg_button_pane_t1

0xc2ea,	// (0x0002afbc) aid_listscroll_gen

0xa610,	// (0x000292e2) main_cntbar_detail_pane

0xe5b4,	// (0x0002d286) list_cmail_folder_pane

0xe5c4,	// (0x0002d296) sp_fs_scroll_pane_cp03_ParamLimits

0x9236,	// (0x00027f08) list_single_fs_dyc_pane_cp01_ParamLimits

0x9236,	// (0x00027f08) list_single_fs_dyc_pane_cp01

0xecd2,	// (0x0002d9a4) aid_size_cmail_indent

0xecdb,	// (0x0002d9ad) list_single_dyc_row_pane_cp01

0x9274,	// (0x00027f46) cntbar_detail_list_pane_ParamLimits

0x9274,	// (0x00027f46) cntbar_detail_list_pane

0x92b4,	// (0x00027f86) main_cntbar_detail_cont_pane_ParamLimits

0x92b4,	// (0x00027f86) main_cntbar_detail_cont_pane

0x42fc,	// (0x00022fce) scroll_pane_cp032_ParamLimits

0x42fc,	// (0x00022fce) scroll_pane_cp032

0x92c0,	// (0x00027f92) cntbar_detail_list_event_pane_ParamLimits

0x92c0,	// (0x00027f92) cntbar_detail_list_event_pane

0x9282,	// (0x00027f54) cntbar_detail_list_shct_pane

0xa806,	// (0x000294d8) aid_list_gen

0xece4,	// (0x0002d9b6) aid_scroll

0xeced,	// (0x0002d9bf) aid_size_touch_scroll_bar

0x77c4,	// (0x00026496) aid_list_double

0xecf6,	// (0x0002d9c8) aid_list_single

0x77b2,	// (0x00026484) aid_list_single_lg

0xecff,	// (0x0002d9d1) aid_list_z_g_a_sm

0xed07,	// (0x0002d9d9) aid_list_z_g_d

0x92d0,	// (0x00027fa2) aid_txt_z_prm

0x92e0,	// (0x00027fb2) aid_txt_z_prm_cp01

0x92ee,	// (0x00027fc0) aid_txt_z_sec

0x92fc,	// (0x00027fce) main_cntbar_detail_cont_pane_g1_ParamLimits

0x92fc,	// (0x00027fce) main_cntbar_detail_cont_pane_g1

0x9309,	// (0x00027fdb) main_cntbar_detail_cont_pane_g2_ParamLimits

0x9309,	// (0x00027fdb) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe78,	// (0x0002eb4a) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe78,	// (0x0002eb4a) main_cntbar_detail_cont_pane_g

0xed0f,	// (0x0002d9e1) main_cntbar_detail_cont_pane_t1

0xed1d,	// (0x0002d9ef) main_cntbar_detail_cont_pane_t2

0xed2b,	// (0x0002d9fd) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe7d,	// (0x0002eb4f) main_cntbar_detail_cont_pane_t

0x9315,	// (0x00027fe7) cell_cntbar_detail_list_shct_pane_ParamLimits

0x9315,	// (0x00027fe7) cell_cntbar_detail_list_shct_pane

0xed39,	// (0x0002da0b) cntbar_detail_list_shct_pane_g1

0xed42,	// (0x0002da14) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe84,	// (0x0002eb56) cntbar_detail_list_shct_pane_g

0x9329,	// (0x00027ffb) cntbar_detail_list_event_pane_g1_ParamLimits

0x9329,	// (0x00027ffb) cntbar_detail_list_event_pane_g1

0x9335,	// (0x00028007) cntbar_detail_list_event_pane_g2_ParamLimits

0x9335,	// (0x00028007) cntbar_detail_list_event_pane_g2

0x0005,

0xfe89,	// (0x0002eb5b) cntbar_detail_list_event_pane_g_ParamLimits

0xfe89,	// (0x0002eb5b) cntbar_detail_list_event_pane_g

0x93a3,	// (0x00028075) cntbar_detail_list_event_pane_t1_ParamLimits

0x93a3,	// (0x00028075) cntbar_detail_list_event_pane_t1

0x93b8,	// (0x0002808a) cntbar_detail_list_event_pane_t2_ParamLimits

0x93b8,	// (0x0002808a) cntbar_detail_list_event_pane_t2

0x0002,

0xfe96,	// (0x0002eb68) cntbar_detail_list_event_pane_t_ParamLimits

0xfe96,	// (0x0002eb68) cntbar_detail_list_event_pane_t

0xc74f,	// (0x0002b421) cell_cntbar_detail_list_shct_pane_g1

0x4749,	// (0x0002341b) navi_pane_mv_g3

0xa610,	// (0x000292e2) main_cntbar_detail_pane_ParamLimits

0x9c03,	// (0x000288d5) main_notif_wgt_pane

0x1415,	// (0x000200e7) aid_tch_main_mp4_pane_g4

0x1654,	// (0x00020326) popup_slider_window_cp02

0xea5b,	// (0x0002d72d) list_recal_day_event_pane

0x9254,	// (0x00027f26) cntbar_detail_btn_pane_ParamLimits

0x9254,	// (0x00027f26) cntbar_detail_btn_pane

0x9264,	// (0x00027f36) cntbar_detail_btn_pane_cp01_ParamLimits

0x9264,	// (0x00027f36) cntbar_detail_btn_pane_cp01

0x9282,	// (0x00027f54) cntbar_detail_list_shct_pane_ParamLimits

0x928e,	// (0x00027f60) cntbar_detail_pane_g1_ParamLimits

0x928e,	// (0x00027f60) cntbar_detail_pane_g1

0x929e,	// (0x00027f70) cntbar_detail_pane_t1_ParamLimits

0x929e,	// (0x00027f70) cntbar_detail_pane_t1

0x9341,	// (0x00028013) cntbar_detail_list_event_pane_g3_ParamLimits

0x9341,	// (0x00028013) cntbar_detail_list_event_pane_g3

0x9359,	// (0x0002802b) cntbar_detail_list_event_pane_g4_ParamLimits

0x9359,	// (0x0002802b) cntbar_detail_list_event_pane_g4

0x9371,	// (0x00028043) cntbar_detail_list_event_pane_g5_ParamLimits

0x9371,	// (0x00028043) cntbar_detail_list_event_pane_g5

0x9389,	// (0x0002805b) cntbar_detail_list_event_pane_g6_ParamLimits

0x9389,	// (0x0002805b) cntbar_detail_list_event_pane_g6

0x93cd,	// (0x0002809f) cntbar_detail_list_event_pane_t3_ParamLimits

0x93cd,	// (0x0002809f) cntbar_detail_list_event_pane_t3

0x93df,	// (0x000280b1) popup_notif_wgt_window_ParamLimits

0x93df,	// (0x000280b1) popup_notif_wgt_window

0x93ef,	// (0x000280c1) popup_submenu_window_cp01_ParamLimits

0x93ef,	// (0x000280c1) popup_submenu_window_cp01

0xa54d,	// (0x0002921f) bg_popup_window_pane_cp10

0xed4b,	// (0x0002da1d) listscroll_notif_wgt_pane

0xed5d,	// (0x0002da2f) list_notif_wgt_window

0xed66,	// (0x0002da38) scroll_pane_cp033

0x93ff,	// (0x000280d1) list_notif_wgt_row_pane_ParamLimits

0x93ff,	// (0x000280d1) list_notif_wgt_row_pane

0xed6f,	// (0x0002da41) aid_size_list_notif_wgt_del

0xed7c,	// (0x0002da4e) list_notif_wgt_row_pane_g1

0xed88,	// (0x0002da5a) list_notif_wgt_row_pane_g2

0xed9c,	// (0x0002da6e) list_notif_wgt_row_pane_g3

0x0002,

0xfe9d,	// (0x0002eb6f) list_notif_wgt_row_pane_g

0xeda9,	// (0x0002da7b) list_notif_wgt_row_pane_t1

0xedbf,	// (0x0002da91) list_notif_wgt_row_pane_t2

0xedd1,	// (0x0002daa3) list_notif_wgt_row_pane_t3

0x0002,

0xfea4,	// (0x0002eb76) list_notif_wgt_row_pane_t

0xd420,	// (0x0002c0f2) list_recal_day_event_pane_g1

0xede3,	// (0x0002dab5) list_recal_day_event_pane_t1

0x9c03,	// (0x000288d5) bg_button_pane_cp045

0xedf2,	// (0x0002dac4) cntbar_detail_btn_pane_t1

0xc2fe,	// (0x0002afd0) main_callh_pane_ParamLimits

0xc2fe,	// (0x0002afd0) main_callh_pane

0x9c03,	// (0x000288d5) main_coverflow0_pane

0x9c03,	// (0x000288d5) main_wgtman_pane

0x8410,	// (0x000270e2) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x8410,	// (0x000270e2) main_fs_bigclock_unlock_btn_pane

0x8c87,	// (0x00027959) bg_button_pane_cp16

0x8c97,	// (0x00027969) cell_tport_appsw_pane_g3

0x9410,	// (0x000280e2) cf0_flow_pane_ParamLimits

0x9410,	// (0x000280e2) cf0_flow_pane

0xee00,	// (0x0002dad2) listscroll_cf0_pane

0xee0b,	// (0x0002dadd) main_cf0_pane_g1

0x941f,	// (0x000280f1) main_cf0_pane_t1_ParamLimits

0x941f,	// (0x000280f1) main_cf0_pane_t1

0x9433,	// (0x00028105) main_cf0_pane_t2_ParamLimits

0x9433,	// (0x00028105) main_cf0_pane_t2

0x0001,

0xfeb0,	// (0x0002eb82) main_cf0_pane_t_ParamLimits

0xfeb0,	// (0x0002eb82) main_cf0_pane_t

0xee1d,	// (0x0002daef) scroll_pane_cp11

0x9447,	// (0x00028119) cf0_flow_pane_g1

0x944f,	// (0x00028121) cf0_flow_pane_g2

0x0001,

0xfeb5,	// (0x0002eb87) cf0_flow_pane_g

0x9457,	// (0x00028129) cf0_flow_pane_t1

0x9c03,	// (0x000288d5) main_call6_pane

0x9c03,	// (0x000288d5) main_calllock_pane

0x9465,	// (0x00028137) call6_btn_grp_pane_ParamLimits

0x9465,	// (0x00028137) call6_btn_grp_pane

0x9472,	// (0x00028144) call6_pane_g1_ParamLimits

0x9472,	// (0x00028144) call6_pane_g1

0x9482,	// (0x00028154) popup_call6_1st_window_ParamLimits

0x9482,	// (0x00028154) popup_call6_1st_window

0x9490,	// (0x00028162) popup_call6_2nd_window_ParamLimits

0x9490,	// (0x00028162) popup_call6_2nd_window

0x949e,	// (0x00028170) cell_call6_btn_pane_ParamLimits

0x949e,	// (0x00028170) cell_call6_btn_pane

0xa54d,	// (0x0002921f) bg_popup_call2_in_pane_cp03

0xee28,	// (0x0002dafa) popup_call6_1st_window_g1

0xee30,	// (0x0002db02) popup_call6_1st_window_g2

0xee38,	// (0x0002db0a) popup_call6_1st_window_g3

0x0002,

0xfeba,	// (0x0002eb8c) popup_call6_1st_window_g

0xee40,	// (0x0002db12) popup_call6_1st_window_t1

0xee4f,	// (0x0002db21) popup_call6_1st_window_t2

0xee5f,	// (0x0002db31) popup_call6_1st_window_t3

0x0002,

0xfec1,	// (0x0002eb93) popup_call6_1st_window_t

0xa54d,	// (0x0002921f) bg_popup_call2_in_pane_cp04

0xee28,	// (0x0002dafa) popup_call6_2nd_window_g1

0xee30,	// (0x0002db02) popup_call6_2nd_window_g2

0xee38,	// (0x0002db0a) popup_call6_2nd_window_g3

0x0002,

0xfeba,	// (0x0002eb8c) popup_call6_2nd_window_g

0xee40,	// (0x0002db12) popup_call6_2nd_window_t1

0x9c03,	// (0x000288d5) bg_button_pane_cp15

0xee6f,	// (0x0002db41) cell_call6_btn_pane_g1

0xee78,	// (0x0002db4a) cell_call6_btn_pane_t1

0x94ad,	// (0x0002817f) listscroll_wgtman_pane_ParamLimits

0x94ad,	// (0x0002817f) listscroll_wgtman_pane

0x94c9,	// (0x0002819b) wgtman_btn_pane_ParamLimits

0x94c9,	// (0x0002819b) wgtman_btn_pane

0xad59,	// (0x00029a2b) aid_scroll_copy1

0xee87,	// (0x0002db59) list_wgtman_pane

0x94fe,	// (0x000281d0) wgtman_btn_pane_g1_ParamLimits

0x94fe,	// (0x000281d0) wgtman_btn_pane_g1

0x9526,	// (0x000281f8) wgtman_btn_pane_t1_ParamLimits

0x9526,	// (0x000281f8) wgtman_btn_pane_t1

0xee91,	// (0x0002db63) wgtman_btn_pane_t2_ParamLimits

0xee91,	// (0x0002db63) wgtman_btn_pane_t2

0x0001,

0xfec8,	// (0x0002eb9a) wgtman_btn_pane_t_ParamLimits

0xfec8,	// (0x0002eb9a) wgtman_btn_pane_t

0x955d,	// (0x0002822f) listrow_wgtman_pane_ParamLimits

0x955d,	// (0x0002822f) listrow_wgtman_pane

0x9571,	// (0x00028243) listrow_wgtman_pane_g1

0x957e,	// (0x00028250) listrow_wgtman_pane_g2

0x0001,

0xfecd,	// (0x0002eb9f) listrow_wgtman_pane_g

0x959c,	// (0x0002826e) listrow_wgtman_pane_t1

0x95b4,	// (0x00028286) listrow_wgtman_pane_t2

0x0001,

0xfed2,	// (0x0002eba4) listrow_wgtman_pane_t

0x95da,	// (0x000282ac) wait_bar_pane_cp09

0xeea8,	// (0x0002db7a) main_calllock_btn_pane

0xeeb2,	// (0x0002db84) main_calllock_pane_g1

0x9c03,	// (0x000288d5) bg_button_pane_cp17

0xeebe,	// (0x0002db90) main_calllock_btn_pane_g1

0xeec7,	// (0x0002db99) main_calllock_btn_pane_t1

0x9c03,	// (0x000288d5) main_dialer3_pane

0x9c03,	// (0x000288d5) main_fmrd2_pane

0xc74f,	// (0x0002b421) main_fs_bigclock_unlock_btn_pane_g1

0xeede,	// (0x0002dbb0) main_fs_bigclock_unlock_btn_pane_t1

0x95ec,	// (0x000282be) area_fmrd2_info_pane_ParamLimits

0x95ec,	// (0x000282be) area_fmrd2_info_pane

0x95f8,	// (0x000282ca) area_fmrd2_visual_pane_ParamLimits

0x95f8,	// (0x000282ca) area_fmrd2_visual_pane

0x9606,	// (0x000282d8) fmrd2_indi_pane_ParamLimits

0x9606,	// (0x000282d8) fmrd2_indi_pane

0x9613,	// (0x000282e5) area_fmrd2_visual_pane_g1

0x961b,	// (0x000282ed) area_fmrd2_visual_pane_t1

0x962b,	// (0x000282fd) area_fmrd2_visual_pane_t2

0x963b,	// (0x0002830d) area_fmrd2_visual_pane_t3

0x0002,

0xfedc,	// (0x0002ebae) area_fmrd2_visual_pane_t

0x964b,	// (0x0002831d) area_fmrd2_info_pane_g1

0x9653,	// (0x00028325) area_fmrd2_info_pane_t1

0x9663,	// (0x00028335) area_fmrd2_info_pane_t2

0x9673,	// (0x00028345) area_fmrd2_info_pane_t3

0x9683,	// (0x00028355) area_fmrd2_info_pane_t4

0x0003,

0xfee3,	// (0x0002ebb5) area_fmrd2_info_pane_t

0x9693,	// (0x00028365) fmrd2_indi_pane_t1

0x96a3,	// (0x00028375) fmrd2_indi_pane_t2

0x96b3,	// (0x00028385) fmrd2_indi_pane_t3

0x0002,

0xfeec,	// (0x0002ebbe) fmrd2_indi_pane_t

0xe06b,	// (0x0002cd3d) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xe06b,	// (0x0002cd3d) list_single_fs_bigclock_indicator_pane_g5

0xe11b,	// (0x0002cded) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xe11b,	// (0x0002cded) list_single_fs_bigclock_indicator_pane_t5

0x8e2d,	// (0x00027aff) aid_cell_bcale_month_pane_ParamLimits

0x8e2d,	// (0x00027aff) aid_cell_bcale_month_pane

0x8e4b,	// (0x00027b1d) bcale_month_pane_ParamLimits

0x8e4b,	// (0x00027b1d) bcale_month_pane

0x8e67,	// (0x00027b39) bcale_preview_pane_ParamLimits

0x8e67,	// (0x00027b39) bcale_preview_pane

0xec5c,	// (0x0002d92e) list_single_fs_bigclock_pane_t1_ParamLimits

0xec7b,	// (0x0002d94d) list_single_fs_bigclock_pane_t2_ParamLimits

0xec7b,	// (0x0002d94d) list_single_fs_bigclock_pane_t2

0x0001,

0xfe6e,	// (0x0002eb40) list_single_fs_bigclock_pane_t_ParamLimits

0xfe6e,	// (0x0002eb40) list_single_fs_bigclock_pane_t

0xeed6,	// (0x0002dba8) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed7,	// (0x0002eba9) main_fs_bigclock_unlock_btn_pane_g

0x96c3,	// (0x00028395) aid_dia3_key_size_ParamLimits

0x96c3,	// (0x00028395) aid_dia3_key_size

0x96cf,	// (0x000283a1) aid_dia3_listrow_size_ParamLimits

0x96cf,	// (0x000283a1) aid_dia3_listrow_size

0x96df,	// (0x000283b1) dia3_keypad_fun_pane_ParamLimits

0x96df,	// (0x000283b1) dia3_keypad_fun_pane

0x96ef,	// (0x000283c1) dia3_keypad_num_pane_ParamLimits

0x96ef,	// (0x000283c1) dia3_keypad_num_pane

0x96ff,	// (0x000283d1) dia3_listscroll_pane_ParamLimits

0x96ff,	// (0x000283d1) dia3_listscroll_pane

0x970d,	// (0x000283df) dia3_numentry_pane_ParamLimits

0x970d,	// (0x000283df) dia3_numentry_pane

0xeeec,	// (0x0002dbbe) dia3_list_pane

0xeef7,	// (0x0002dbc9) scroll_pane_cp12

0x9c03,	// (0x000288d5) bg_dia3_numentry_pane

0x971b,	// (0x000283ed) dia3_numentry_pane_t1

0x972a,	// (0x000283fc) cell_dia3_key_num_pane

0x9732,	// (0x00028404) cell_dia3_key0_fun_pane_ParamLimits

0x9732,	// (0x00028404) cell_dia3_key0_fun_pane

0x973f,	// (0x00028411) cell_dia3_key1_fun_pane_ParamLimits

0x973f,	// (0x00028411) cell_dia3_key1_fun_pane

0x974c,	// (0x0002841e) dia3_listrow_pane

0xdd69,	// (0x0002ca3b) bg_dia3_numentry_pane_g1

0x9c03,	// (0x000288d5) bg_button_pane_cp21

0xef02,	// (0x0002dbd4) cell_dia3_key_num_pane_t1

0xef10,	// (0x0002dbe2) cell_dia3_key_num_pane_t2

0xef1f,	// (0x0002dbf1) cell_dia3_key_num_pane_t3

0xef2e,	// (0x0002dc00) cell_dia3_key_num_pane_t4

0x0003,

0xfef3,	// (0x0002ebc5) cell_dia3_key_num_pane_t

0x9c03,	// (0x000288d5) bg_button_pane_cp19

0x9759,	// (0x0002842b) cell_dia3_key0_fun_pane_g1

0x9c03,	// (0x000288d5) bg_button_pane_cp20

0x9761,	// (0x00028433) cell_dia3_key1_fun_pane_g1

0x9769,	// (0x0002843b) area_left_week_number_pane

0x977c,	// (0x0002844e) area_top_day_name_pane

0x978a,	// (0x0002845c) frame_month_view_pane

0xef3d,	// (0x0002dc0f) grid_month_view_pane

0x979f,	// (0x00028471) cell_top_day_name_pane_ParamLimits

0x979f,	// (0x00028471) cell_top_day_name_pane

0x97bb,	// (0x0002848d) cell_area_left_week_number_pane_ParamLimits

0x97bb,	// (0x0002848d) cell_area_left_week_number_pane

0x97dc,	// (0x000284ae) cell_month_view_pane_ParamLimits

0x97dc,	// (0x000284ae) cell_month_view_pane

0xef4b,	// (0x0002dc1d) frm_month_g1

0x9808,	// (0x000284da) frm_month_g2

0x9819,	// (0x000284eb) frm_month_g3

0x982a,	// (0x000284fc) frm_month_g4

0x983b,	// (0x0002850d) frm_month_g5

0x984c,	// (0x0002851e) frm_month_g6

0x985f,	// (0x00028531) frm_month_g7

0xef58,	// (0x0002dc2a) frm_month_g8

0x9872,	// (0x00028544) frm_month_g9

0x987f,	// (0x00028551) frm_month_g10

0x988c,	// (0x0002855e) frm_month_g11

0x9899,	// (0x0002856b) frm_month_g12

0x98a6,	// (0x00028578) frm_month_g13

0x98b5,	// (0x00028587) frm_month_g14

0x98c4,	// (0x00028596) frm_month_g15

0x98d3,	// (0x000285a5) frm_month_g16

0x000f,

0xfefc,	// (0x0002ebce) frm_month_g

0xef65,	// (0x0002dc37) cell_top_day_name_pane_t1

0x98e2,	// (0x000285b4) cell_area_left_week_number_pane_g1

0x98f1,	// (0x000285c3) cell_area_left_week_number_pane_t1

0xc97f,	// (0x0002b651) cell_month_view_pane_g1

0x9907,	// (0x000285d9) cell_month_view_pane_t1

0x9c03,	// (0x000288d5) main_fps_pane

0xe33e,	// (0x0002d010) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xe33e,	// (0x0002d010) cmail_ddmenu_btn02_pane_cp1

0xe35a,	// (0x0002d02c) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xe35a,	// (0x0002d02c) cmail_ddmenu_btn02_pane_cp2

0x9113,	// (0x00027de5) cmail_ddmenu_btn02_pane_g2_ParamLimits

0x9113,	// (0x00027de5) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe21,	// (0x0002eaf3) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe21,	// (0x0002eaf3) cmail_ddmenu_btn02_pane_g

0x9131,	// (0x00027e03) cmail_ddmenu_btn02_pane_t2_ParamLimits

0x9131,	// (0x00027e03) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe26,	// (0x0002eaf8) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe26,	// (0x0002eaf8) cmail_ddmenu_btn02_pane_t

0x991d,	// (0x000285ef) fps_text_pane_ParamLimits

0x991d,	// (0x000285ef) fps_text_pane

0x992a,	// (0x000285fc) main_fps_pane_g1_ParamLimits

0x992a,	// (0x000285fc) main_fps_pane_g1

0x9936,	// (0x00028608) wait_bar_pane_cp010_ParamLimits

0x9936,	// (0x00028608) wait_bar_pane_cp010

0x9942,	// (0x00028614) fps_text_pane_t1_ParamLimits

0x9942,	// (0x00028614) fps_text_pane_t1

0x6b39,	// (0x0002580b) cam4_image_uncrop_pane_g1

0x6b42,	// (0x00025814) cam4_image_uncrop_pane_g2

0x6b4b,	// (0x0002581d) cam4_image_uncrop_pane_g3

0x6b54,	// (0x00025826) cam4_image_uncrop_pane_g4

0x0003,

0xf8ee,	// (0x0002e5c0) cam4_image_uncrop_pane_g

0x974c,	// (0x0002841e) dia3_listrow_pane_ParamLimits

0x9c03,	// (0x000288d5) main_phob2_pane

0x8c69,	// (0x0002793b) cell_tport_appsw_pane_cp02_ParamLimits

0x8c69,	// (0x0002793b) cell_tport_appsw_pane_cp02

0x8c78,	// (0x0002794a) cell_tport_appsw_pane_cp03_ParamLimits

0x8c78,	// (0x0002794a) cell_tport_appsw_pane_cp03

0x9c03,	// (0x000288d5) phob2_contact_card_pane

0x9c03,	// (0x000288d5) phob2_listscroll_pane

0xef78,	// (0x0002dc4a) phob2_list_pane

0xef80,	// (0x0002dc52) scroll_pane_cp034

0x995b,	// (0x0002862d) phob2_cc_data_pane_ParamLimits

0x995b,	// (0x0002862d) phob2_cc_data_pane

0x9977,	// (0x00028649) phob2_cc_listscroll_pane_ParamLimits

0x9977,	// (0x00028649) phob2_cc_listscroll_pane

0x9993,	// (0x00028665) list_double_large_graphic_phob2_pane_ParamLimits

0x9993,	// (0x00028665) list_double_large_graphic_phob2_pane

0x99ab,	// (0x0002867d) list_double_large_graphic_phob2_pane_g1_ParamLimits

0x99ab,	// (0x0002867d) list_double_large_graphic_phob2_pane_g1

0x99c1,	// (0x00028693) list_double_large_graphic_phob2_pane_g2_ParamLimits

0x99c1,	// (0x00028693) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1d,	// (0x0002ebef) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1d,	// (0x0002ebef) list_double_large_graphic_phob2_pane_g

0x99cd,	// (0x0002869f) list_double_large_graphic_phob2_pane_t1_ParamLimits

0x99cd,	// (0x0002869f) list_double_large_graphic_phob2_pane_t1

0x99e2,	// (0x000286b4) list_double_large_graphic_phob2_pane_t2_ParamLimits

0x99e2,	// (0x000286b4) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff22,	// (0x0002ebf4) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff22,	// (0x0002ebf4) list_double_large_graphic_phob2_pane_t

0x9c03,	// (0x000288d5) list_highlight_pane_cp024

0x99f4,	// (0x000286c6) phob2_cc_button_pane

0x99fc,	// (0x000286ce) phob2_cc_data_pane_g1_ParamLimits

0x99fc,	// (0x000286ce) phob2_cc_data_pane_g1

0x9a08,	// (0x000286da) phob2_cc_data_pane_g2_ParamLimits

0x9a08,	// (0x000286da) phob2_cc_data_pane_g2

0x0001,

0xff27,	// (0x0002ebf9) phob2_cc_data_pane_g_ParamLimits

0xff27,	// (0x0002ebf9) phob2_cc_data_pane_g

0x9a14,	// (0x000286e6) phob2_cc_data_pane_t1_ParamLimits

0x9a14,	// (0x000286e6) phob2_cc_data_pane_t1

0x9a26,	// (0x000286f8) phob2_cc_data_pane_t2_ParamLimits

0x9a26,	// (0x000286f8) phob2_cc_data_pane_t2

0x9a38,	// (0x0002870a) phob2_cc_data_pane_t3_ParamLimits

0x9a38,	// (0x0002870a) phob2_cc_data_pane_t3

0x0002,

0xff2c,	// (0x0002ebfe) phob2_cc_data_pane_t_ParamLimits

0xff2c,	// (0x0002ebfe) phob2_cc_data_pane_t

0xef88,	// (0x0002dc5a) phob2_cc_list_pane_ParamLimits

0xef88,	// (0x0002dc5a) phob2_cc_list_pane

0xd506,	// (0x0002c1d8) scroll_pane_cp035_ParamLimits

0xd506,	// (0x0002c1d8) scroll_pane_cp035

0xa610,	// (0x000292e2) bg_button_pane_cp033

0xef94,	// (0x0002dc66) phob2_cc_button_pane_g1

0xefa0,	// (0x0002dc72) phob2_cc_button_pane_t1

0xefb5,	// (0x0002dc87) phob2_cc_button_pane_t2

0x0001,

0xff33,	// (0x0002ec05) phob2_cc_button_pane_t

0x9a4a,	// (0x0002871c) list_double_large_graphic_phob2_cc_pane_ParamLimits

0x9a4a,	// (0x0002871c) list_double_large_graphic_phob2_cc_pane

0x9a66,	// (0x00028738) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0x9a66,	// (0x00028738) list_double_large_graphic_phob2_cc_pane_g1

0x9a77,	// (0x00028749) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0x9a77,	// (0x00028749) list_double_large_graphic_phob2_cc_pane_g2

0x9a86,	// (0x00028758) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0x9a86,	// (0x00028758) list_double_large_graphic_phob2_cc_pane_g3

0x9a95,	// (0x00028767) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0x9a95,	// (0x00028767) list_double_large_graphic_phob2_cc_pane_g4

0x9aa6,	// (0x00028778) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0x9aa6,	// (0x00028778) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff38,	// (0x0002ec0a) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff38,	// (0x0002ec0a) list_double_large_graphic_phob2_cc_pane_g

0x9ab5,	// (0x00028787) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0x9ab5,	// (0x00028787) list_double_large_graphic_phob2_cc_pane_t1

0x9ade,	// (0x000287b0) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0x9ade,	// (0x000287b0) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff43,	// (0x0002ec15) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff43,	// (0x0002ec15) list_double_large_graphic_phob2_cc_pane_t

0xefc7,	// (0x0002dc99) list_highlight_pane_cp025_ParamLimits

0xefc7,	// (0x0002dc99) list_highlight_pane_cp025

0xa610,	// (0x000292e2) bg_button_pane_cp033_ParamLimits

0xef94,	// (0x0002dc66) phob2_cc_button_pane_g1_ParamLimits

0xefa0,	// (0x0002dc72) phob2_cc_button_pane_t1_ParamLimits

0xefb5,	// (0x0002dc87) phob2_cc_button_pane_t2_ParamLimits

0xff33,	// (0x0002ec05) phob2_cc_button_pane_t_ParamLimits

0x22d4,	// (0x00020fa6) popup_wgtman_window

0xd2e0,	// (0x0002bfb2) scroll_pane_cp038

0x94e6,	// (0x000281b8) wgtman_btn_pane_cp_01_ParamLimits

0x94e6,	// (0x000281b8) wgtman_btn_pane_cp_01

0xefd5,	// (0x0002dca7) wgtman_content_pane

0xefde,	// (0x0002dcb0) wgtman_heading_pane

0x9c03,	// (0x000288d5) bg_heading_pane_cp02

0xefe7,	// (0x0002dcb9) wgtman_heading_pane_g1

0xefef,	// (0x0002dcc1) wgtman_heading_pane_t1

0xeffd,	// (0x0002dccf) scroll_pane_cp036

0xf005,	// (0x0002dcd7) wgtman_list_pane

0xf00d,	// (0x0002dcdf) wgtman_list_pane_t1_ParamLimits

0xf00d,	// (0x0002dcdf) wgtman_list_pane_t1

0x183a,	// (0x0002050c) cam4_grid_pane

0x730d,	// (0x00025fdf) bg_button_pane_cp015_ParamLimits

0x731f,	// (0x00025ff1) bg_button_pane_cp016_ParamLimits

0x7332,	// (0x00026004) bg_button_pane_cp017_ParamLimits

0x7388,	// (0x0002605a) popup_vitu2_query_window_g3_ParamLimits

0x7388,	// (0x0002605a) popup_vitu2_query_window_g3

0x7447,	// (0x00026119) popup_vitu2_query_window_t6_ParamLimits

0x7447,	// (0x00026119) popup_vitu2_query_window_t6

0x7472,	// (0x00026144) popup_vitu2_query_window_t7_ParamLimits

0x7472,	// (0x00026144) popup_vitu2_query_window_t7

0xf027,	// (0x0002dcf9) cam4_grid_pane_g1

0xf030,	// (0x0002dd02) cam4_grid_pane_g2

0xf03b,	// (0x0002dd0d) cam4_grid_pane_g3

0xf044,	// (0x0002dd16) cam4_grid_pane_g4

0x0003,

0xff48,	// (0x0002ec1a) cam4_grid_pane_g

0x3133,	// (0x00021e05) aid_placing_vt_slider_lsc_ParamLimits

0x3466,	// (0x00022138) vidtel_button_pane_ParamLimits

0x3466,	// (0x00022138) vidtel_button_pane

0x9c03,	// (0x000288d5) bg_button_pane_cp034

0x9b07,	// (0x000287d9) vidtel_button_pane_g1

0x9b0f,	// (0x000287e1) vidtel_button_pane_t1

0xd3e4,	// (0x0002c0b6) aid_size_vtel_slider_touch

0xd506,	// (0x0002c1d8) scroll_pane_cp039

0xdda7,	// (0x0002ca79) ncim_query_button_pane_cp01_ParamLimits

0xddc6,	// (0x0002ca98) ncimui_query_pane_g1_ParamLimits

0xa610,	// (0x000292e2) input_focus_pane_cp012_ParamLimits

0xddeb,	// (0x0002cabd) ncim_query_entry_pane_t1_ParamLimits

0xd506,	// (0x0002c1d8) scroll_pane_cp039_ParamLimits

0x46bb,	// (0x0002338d) navi_pane_bcale_mc_g1

0x46c3,	// (0x00023395) navi_pane_bcale_mc_t1

0xe397,	// (0x0002d069) main_sp_fs_email_pane_g1

0xe3a3,	// (0x0002d075) main_sp_fs_email_pane_g2

0x0001,

0xfcde,	// (0x0002e9b0) main_sp_fs_email_pane_g

0xe8ef,	// (0x0002d5c1) list_single_cale_mrui_row_pane_g3_ParamLimits

0xe8ef,	// (0x0002d5c1) list_single_cale_mrui_row_pane_g3

0x9151,	// (0x00027e23) list_single_recal_day_pane_g5_event_pane

0xeacd,	// (0x0002d79f) list_single_recal_day_pane_g7

0xf04f,	// (0x0002dd21) list_recal_day_event_pane_cp01

0xf058,	// (0x0002dd2a) list_recal_vselct_arw_lo_pane_cp01

0xf060,	// (0x0002dd32) list_recal_vselct_arw_up_pane_cp01

0xf068,	// (0x0002dd3a) list_recal_vselct_pane_cp01

0xd420,	// (0x0002c0f2) list_recal_day_event_pane_cp01_g1

0xf072,	// (0x0002dd44) list_recal_day_event_pane_cp01_t1

0xead5,	// (0x0002d7a7) list_single_recal_day_pane_t1_ParamLimits

0xeae7,	// (0x0002d7b9) list_single_recal_day_pane_t2_ParamLimits

0xfe36,	// (0x0002eb08) list_single_recal_day_pane_t_ParamLimits

0xa2d2,	// (0x00028fa4) bg_notes_pane_ParamLimits

0xa375,	// (0x00029047) list_notes_pane_ParamLimits

0x25a3,	// (0x00021275) scroll_pane_cp06_ParamLimits

0xa397,	// (0x00029069) main_notes_pane_ParamLimits

0x9c03,	// (0x000288d5) main_welc_pane

0x9b25,	// (0x000287f7) main_welc_body_pane_ParamLimits

0x9b25,	// (0x000287f7) main_welc_body_pane

0x9b40,	// (0x00028812) main_welc_opti_pane_ParamLimits

0x9b40,	// (0x00028812) main_welc_opti_pane

0x9b75,	// (0x00028847) main_welc_pane_t1_ParamLimits

0x9b75,	// (0x00028847) main_welc_pane_t1

0x9b93,	// (0x00028865) main_welc_body_row_pane_ParamLimits

0x9b93,	// (0x00028865) main_welc_body_row_pane

0x9bad,	// (0x0002887f) main_welc_opti_row_pane_ParamLimits

0x9bad,	// (0x0002887f) main_welc_opti_row_pane

0xf080,	// (0x0002dd52) main_welc_opti_row_pane_g1

0xf088,	// (0x0002dd5a) main_welc_opti_row_pane_t1

0xf097,	// (0x0002dd69) main_welc_body_row_pane_t1

0xed55,	// (0x0002da27) popup_notif_wgt_heading_pane

0xed6f,	// (0x0002da41) aid_size_list_notif_wgt_del_ParamLimits

0xed7c,	// (0x0002da4e) list_notif_wgt_row_pane_g1_ParamLimits

0xed88,	// (0x0002da5a) list_notif_wgt_row_pane_g2_ParamLimits

0xed9c,	// (0x0002da6e) list_notif_wgt_row_pane_g3_ParamLimits

0xfe9d,	// (0x0002eb6f) list_notif_wgt_row_pane_g_ParamLimits

0xeda9,	// (0x0002da7b) list_notif_wgt_row_pane_t1_ParamLimits

0xedbf,	// (0x0002da91) list_notif_wgt_row_pane_t2_ParamLimits

0xedd1,	// (0x0002daa3) list_notif_wgt_row_pane_t3_ParamLimits

0xfea4,	// (0x0002eb76) list_notif_wgt_row_pane_t_ParamLimits

0x9571,	// (0x00028243) listrow_wgtman_pane_g1_ParamLimits

0x957e,	// (0x00028250) listrow_wgtman_pane_g2_ParamLimits

0xfecd,	// (0x0002eb9f) listrow_wgtman_pane_g_ParamLimits

0x959c,	// (0x0002826e) listrow_wgtman_pane_t1_ParamLimits

0x95b4,	// (0x00028286) listrow_wgtman_pane_t2_ParamLimits

0xfed2,	// (0x0002eba4) listrow_wgtman_pane_t_ParamLimits

0x95da,	// (0x000282ac) wait_bar_pane_cp09_ParamLimits

0x9c03,	// (0x000288d5) bg_popup_heading_pane_cp02

0xf0a6,	// (0x0002dd78) popup_notif_wgt_heading_pane_g1

0xf0ae,	// (0x0002dd80) popup_notif_wgt_heading_pane_t1

0x9c03,	// (0x000288d5) main_vids_pane

0x9c03,	// (0x000288d5) vids_listscroll_pane

0x9bbe,	// (0x00028890) scroll_pane_cp040

0x9c03,	// (0x000288d5) vids_list_pane

0x9bc9,	// (0x0002889b) vids_list_double_pane_ParamLimits

0x9bc9,	// (0x0002889b) vids_list_double_pane

0x9bdc,	// (0x000288ae) vids_list_double_pane_g1

0x9be5,	// (0x000288b7) vids_list_double_pane_t1

0x9bf5,	// (0x000288c7) vids_list_double_pane_t2

0x0001,

0xff56,	// (0x0002ec28) vids_list_double_pane_t

0xa610,	// (0x000292e2) main_ncimui_pane_ParamLimits

0x7fc0,	// (0x00026c92) main_ncimui_pane_g1_ParamLimits

0x7fce,	// (0x00026ca0) main_ncimui_pane_g2_ParamLimits

0x7fce,	// (0x00026ca0) main_ncimui_pane_g2

0x0001,

0xfbe3,	// (0x0002e8b5) main_ncimui_pane_g_ParamLimits

0xfbe3,	// (0x0002e8b5) main_ncimui_pane_g

0x9b5b,	// (0x0002882d) main_welc_pane_g1_ParamLimits

0x9b5b,	// (0x0002882d) main_welc_pane_g1

0x9b67,	// (0x00028839) main_welc_pane_g2_ParamLimits

0x9b67,	// (0x00028839) main_welc_pane_g2

0x0001,

0xff51,	// (0x0002ec23) main_welc_pane_g_ParamLimits

0xff51,	// (0x0002ec23) main_welc_pane_g

0xa2d2,	// (0x00028fa4) listscroll_mce_pane_ParamLimits

0x4785,	// (0x00023457) wait_bar_pane_cp10

0xc2f2,	// (0x0002afc4) main_cale_day_pane_ParamLimits

0xc2f2,	// (0x0002afc4) main_cale_week_pane_ParamLimits

0xa2d2,	// (0x00028fa4) main_messa_pane_ParamLimits

0x6491,	// (0x00025163) main_clock2_btn_pane_ParamLimits

0x6491,	// (0x00025163) main_clock2_btn_pane

0xcb13,	// (0x0002b7e5) main_clock2_btn_pane_cp01_ParamLimits

0xcb13,	// (0x0002b7e5) main_clock2_btn_pane_cp01

0xe872,	// (0x0002d544) list_cale_mrui_pane_ParamLimits

0xee15,	// (0x0002dae7) main_cf0_pane_g2

0x0001,

0xfeab,	// (0x0002eb7d) main_cf0_pane_g

0x9769,	// (0x0002843b) area_left_week_number_pane_ParamLimits

0x977c,	// (0x0002844e) area_top_day_name_pane_ParamLimits

0x978a,	// (0x0002845c) frame_month_view_pane_ParamLimits

0xef3d,	// (0x0002dc0f) grid_month_view_pane_ParamLimits

0xef4b,	// (0x0002dc1d) frm_month_g1_ParamLimits

0x9808,	// (0x000284da) frm_month_g2_ParamLimits

0x9819,	// (0x000284eb) frm_month_g3_ParamLimits

0x982a,	// (0x000284fc) frm_month_g4_ParamLimits

0x983b,	// (0x0002850d) frm_month_g5_ParamLimits

0x984c,	// (0x0002851e) frm_month_g6_ParamLimits

0x985f,	// (0x00028531) frm_month_g7_ParamLimits

0xef58,	// (0x0002dc2a) frm_month_g8_ParamLimits

0x9872,	// (0x00028544) frm_month_g9_ParamLimits

0x987f,	// (0x00028551) frm_month_g10_ParamLimits

0x988c,	// (0x0002855e) frm_month_g11_ParamLimits

0x9899,	// (0x0002856b) frm_month_g12_ParamLimits

0x98a6,	// (0x00028578) frm_month_g13_ParamLimits

0x98b5,	// (0x00028587) frm_month_g14_ParamLimits

0x98c4,	// (0x00028596) frm_month_g15_ParamLimits

0x98d3,	// (0x000285a5) frm_month_g16_ParamLimits

0xfefc,	// (0x0002ebce) frm_month_g_ParamLimits

0xef65,	// (0x0002dc37) cell_top_day_name_pane_t1_ParamLimits

0x98e2,	// (0x000285b4) cell_area_left_week_number_pane_g1_ParamLimits

0x98f1,	// (0x000285c3) cell_area_left_week_number_pane_t1_ParamLimits

0xc97f,	// (0x0002b651) cell_month_view_pane_g1_ParamLimits

0x9907,	// (0x000285d9) cell_month_view_pane_t1_ParamLimits

0xa2ca,	// (0x00028f9c) main_clock2_btn_pane_g1

0xf0bc,	// (0x0002dd8e) main_clock2_btn_pane_t1

0xa610,	// (0x000292e2) listscroll_cmail_pane_ParamLimits

0xe397,	// (0x0002d069) main_sp_fs_email_pane_g1_ParamLimits

0xe3a3,	// (0x0002d075) main_sp_fs_email_pane_g2_ParamLimits

0xfcde,	// (0x0002e9b0) main_sp_fs_email_pane_g_ParamLimits

0xea3c,	// (0x0002d70e) list_recal_day_pane_ParamLimits

0xea4d,	// (0x0002d71f) mian_recal_day_pane_t1

0x899b,	// (0x0002766d) list_single_dyc_row_text_pane_t4_ParamLimits

0x899b,	// (0x0002766d) list_single_dyc_row_text_pane_t4

0x89d8,	// (0x000276aa) list_single_dyc_row_text_pane_t5_ParamLimits

0x89d8,	// (0x000276aa) list_single_dyc_row_text_pane_t5

0xe47b,	// (0x0002d14d) list_single_dyc_row_text_pane_t6_ParamLimits

0xe47b,	// (0x0002d14d) list_single_dyc_row_text_pane_t6

0xa94b,	// (0x0002961d) aid_mgn_list_cale_time_pane

0xa610,	// (0x000292e2) main_gallery2_pane_ParamLimits

0xcb27,	// (0x0002b7f9) main_clock2_pane_cp01_t1

0xcb37,	// (0x0002b809) main_clock2_pane_cp01_t3

0x0001,

0xf7c4,	// (0x0002e496) main_clock2_pane_cp01_t

0x297e,	// (0x00021650) cale_week_scroll_pane_g16_ParamLimits

0x297e,	// (0x00021650) cale_week_scroll_pane_g16

0xa54d,	// (0x0002921f) vorec_slider_pane

0x9b0f,	// (0x000287e1) vidtel_button_pane_t1_ParamLimits
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
	};

} // end of namespace AknLayoutScalable_Abrw_pvp4_apps_vga4_prt_tch_Normal

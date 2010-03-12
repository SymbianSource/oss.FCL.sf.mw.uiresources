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

#include "aknlayoutscalable_abrw_pvl4_apps_vga4_lsc_tch_normal.h"
#include "AknLayout2ScalableDecode.h"
namespace AknLayoutScalable_Apps { extern const TUint8 KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch[]; }

namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
{

extern const TUint16 KDataLookup[AknLayoutScalable_Apps::E_TApiId_TableSize];
const SCompDataImplData KImplData = { KDataLookup, AknLayoutScalable_Apps::KByteCodedData_AknLayoutScalable_Elaf_pvp4_apps_vga4_prt_tch + 0x0002816c };

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
0x1dda,	// (0x00029f46) Screen

0x1de6,	// (0x00029f52) application_window

0x1df2,	// (0x00029f5e) area_bottom_pane_ParamLimits

0x1df2,	// (0x00029f5e) area_bottom_pane

0x06b4,	// (0x00028820) area_top_pane_ParamLimits

0x06b4,	// (0x00028820) area_top_pane

0xb629,	// (0x00033795) call_video_uplink_pane_ParamLimits

0xb629,	// (0x00033795) call_video_uplink_pane

0x0729,	// (0x00028895) main_pane_ParamLimits

0x0729,	// (0x00028895) main_pane

0x5fde,	// (0x0002e14a) context_pane

0x5ff1,	// (0x0002e15d) navi_pane

0x6021,	// (0x0002e18d) popup_cale_events_window_ParamLimits

0x6021,	// (0x0002e18d) popup_cale_events_window

0x6039,	// (0x0002e1a5) popup_mup_playback_window

0x6041,	// (0x0002e1ad) signal_pane

0xe765,	// (0x000368d1) main_browser_pane

0x3ce8,	// (0x0002be54) main_burst_pane

0x0b80,	// (0x00028cec) main_calc_pane

0x3ce8,	// (0x0002be54) main_cale_day_pane

0xe765,	// (0x000368d1) main_cale_month_pane

0x3ce8,	// (0x0002be54) main_cale_week_pane

0x3ce8,	// (0x0002be54) main_call_pane

0xe437,	// (0x000365a3) main_call_poc_pane

0x3ce8,	// (0x0002be54) main_camera_pane

0x3ce8,	// (0x0002be54) main_chi_dic_pane

0x382b,	// (0x0002b997) main_clock_pane

0xe437,	// (0x000365a3) main_fmradio_pane

0x3ce8,	// (0x0002be54) main_graph_messa_pane

0xe437,	// (0x000365a3) main_help_pane

0xe765,	// (0x000368d1) main_im_pane

0xe692,	// (0x000367fe) main_image_pane_ParamLimits

0xe692,	// (0x000367fe) main_image_pane

0xe437,	// (0x000365a3) main_location2_pane

0x3ce8,	// (0x0002be54) main_location_pane

0xe437,	// (0x000365a3) main_messa_pane

0xe437,	// (0x000365a3) main_mp2_pane

0x3ce8,	// (0x0002be54) main_mp_pane

0xe437,	// (0x000365a3) main_msg_pane

0xe437,	// (0x000365a3) main_mup_eq_pane

0xe437,	// (0x000365a3) main_mup_pane

0xe765,	// (0x000368d1) main_notes_pane

0xe437,	// (0x000365a3) main_pec_pane

0xe437,	// (0x000365a3) main_phob_pane

0xe437,	// (0x000365a3) main_pinb_pane

0xe437,	// (0x000365a3) main_postcard_pane

0xe437,	// (0x000365a3) main_qdial_pane

0x3ce8,	// (0x0002be54) main_skin_pane

0xe437,	// (0x000365a3) main_smil2_pane

0x3ce8,	// (0x0002be54) main_smil_pane

0x3ce8,	// (0x0002be54) main_video_pane

0x3ce8,	// (0x0002be54) main_video_tele_pane

0xe692,	// (0x000367fe) main_viewer_pane_ParamLimits

0xe692,	// (0x000367fe) main_viewer_pane

0x3ce8,	// (0x0002be54) main_vorec_pane

0x0bd6,	// (0x00028d42) popup_blid_sat_info_window_ParamLimits

0x0bd6,	// (0x00028d42) popup_blid_sat_info_window

0x0c3a,	// (0x00028da6) popup_dyc_status_message_window_ParamLimits

0x0c3a,	// (0x00028da6) popup_dyc_status_message_window

0x0c54,	// (0x00028dc0) popup_grid_large_graphic_window_ParamLimits

0x0c54,	// (0x00028dc0) popup_grid_large_graphic_window

0x0d16,	// (0x00028e82) popup_loc_request_window_ParamLimits

0x0d16,	// (0x00028e82) popup_loc_request_window

0x0e52,	// (0x00028fbe) popup_wml_address_window_ParamLimits

0x0e52,	// (0x00028fbe) popup_wml_address_window

0x5ddf,	// (0x0002df4b) call_muted_g1

0x4afc,	// (0x0002cc68) popup_call_audio_conf_window_ParamLimits

0x4afc,	// (0x0002cc68) popup_call_audio_conf_window

0x5def,	// (0x0002df5b) popup_call_audio_first_window_ParamLimits

0x5def,	// (0x0002df5b) popup_call_audio_first_window

0x5e65,	// (0x0002dfd1) popup_call_audio_in_window_ParamLimits

0x5e65,	// (0x0002dfd1) popup_call_audio_in_window

0x5ea1,	// (0x0002e00d) popup_call_audio_out_window_ParamLimits

0x5ea1,	// (0x0002e00d) popup_call_audio_out_window

0x5edb,	// (0x0002e047) popup_call_audio_second_window_ParamLimits

0x5edb,	// (0x0002e047) popup_call_audio_second_window

0x5f31,	// (0x0002e09d) popup_call_audio_wait_window_ParamLimits

0x5f31,	// (0x0002e09d) popup_call_audio_wait_window

0x5f66,	// (0x0002e0d2) popup_number_entry_window_ParamLimits

0x5f66,	// (0x0002e0d2) popup_number_entry_window

0xdfef,	// (0x0003615b) bg_popup_call_pane_cp05_ParamLimits

0xdfef,	// (0x0003615b) bg_popup_call_pane_cp05

0xe00f,	// (0x0003617b) popup_number_entry_window_t1

0xe022,	// (0x0003618e) popup_number_entry_window_t2

0xe034,	// (0x000361a0) popup_number_entry_window_t3

0x0003,

0xf0d8,	// (0x00037244) popup_number_entry_window_t

0xe07b,	// (0x000361e7) text_title_cp2

0xe08e,	// (0x000361fa) bg_popup_call_pane_cp_ParamLimits

0xe08e,	// (0x000361fa) bg_popup_call_pane_cp

0xe09c,	// (0x00036208) call_thumbnail_pane

0xe0a4,	// (0x00036210) popup_call_audio_in_window_g1_ParamLimits

0xe0a4,	// (0x00036210) popup_call_audio_in_window_g1

0xe0b0,	// (0x0003621c) popup_call_audio_in_window_g2_ParamLimits

0xe0b0,	// (0x0003621c) popup_call_audio_in_window_g2

0xe0bc,	// (0x00036228) popup_call_audio_in_window_g3_ParamLimits

0xe0bc,	// (0x00036228) popup_call_audio_in_window_g3

0x0002,

0xf0e1,	// (0x0003724d) popup_call_audio_in_window_g_ParamLimits

0xf0e1,	// (0x0003724d) popup_call_audio_in_window_g

0xe0c8,	// (0x00036234) popup_call_audio_in_window_t1_ParamLimits

0xe0c8,	// (0x00036234) popup_call_audio_in_window_t1

0xe0e4,	// (0x00036250) popup_call_audio_in_window_t2_ParamLimits

0xe0e4,	// (0x00036250) popup_call_audio_in_window_t2

0xe100,	// (0x0003626c) popup_call_audio_in_window_t3_ParamLimits

0xe100,	// (0x0003626c) popup_call_audio_in_window_t3

0x0002,

0xf0e8,	// (0x00037254) popup_call_audio_in_window_t_ParamLimits

0xf0e8,	// (0x00037254) popup_call_audio_in_window_t

0xe08e,	// (0x000361fa) bg_popup_call_pane_cp01_ParamLimits

0xe08e,	// (0x000361fa) bg_popup_call_pane_cp01

0xe09c,	// (0x00036208) call_thumbnail_pane_cp02

0xe113,	// (0x0003627f) call_type_pane_cp022

0xe11b,	// (0x00036287) popup_call_audio_out_window_g1_ParamLimits

0xe11b,	// (0x00036287) popup_call_audio_out_window_g1

0xe12d,	// (0x00036299) popup_call_audio_out_window_g2_ParamLimits

0xe12d,	// (0x00036299) popup_call_audio_out_window_g2

0xe139,	// (0x000362a5) popup_call_audio_out_window_g3_ParamLimits

0xe139,	// (0x000362a5) popup_call_audio_out_window_g3

0x0002,

0xf0ef,	// (0x0003725b) popup_call_audio_out_window_g_ParamLimits

0xf0ef,	// (0x0003725b) popup_call_audio_out_window_g

0xe14b,	// (0x000362b7) popup_call_audio_out_window_t1_ParamLimits

0xe14b,	// (0x000362b7) popup_call_audio_out_window_t1

0xe163,	// (0x000362cf) popup_call_audio_out_window_t2_ParamLimits

0xe163,	// (0x000362cf) popup_call_audio_out_window_t2

0x0001,

0xf0f6,	// (0x00037262) popup_call_audio_out_window_t_ParamLimits

0xf0f6,	// (0x00037262) popup_call_audio_out_window_t

0xe178,	// (0x000362e4) bg_popup_call_pane_ParamLimits

0xe178,	// (0x000362e4) bg_popup_call_pane

0x1e37,	// (0x00029fa3) call_thumbnail_pane_cp_ParamLimits

0x1e37,	// (0x00029fa3) call_thumbnail_pane_cp

0xe1fc,	// (0x00036368) call_type_pane_cp01_ParamLimits

0xe1fc,	// (0x00036368) call_type_pane_cp01

0xe240,	// (0x000363ac) popup_call_audio_first_window_g1_ParamLimits

0xe240,	// (0x000363ac) popup_call_audio_first_window_g1

0xe28c,	// (0x000363f8) popup_call_audio_first_window_g2_ParamLimits

0xe28c,	// (0x000363f8) popup_call_audio_first_window_g2

0x0001,

0xf0fb,	// (0x00037267) popup_call_audio_first_window_g_ParamLimits

0xf0fb,	// (0x00037267) popup_call_audio_first_window_g

0xe2d0,	// (0x0003643c) popup_call_audio_first_window_t1_ParamLimits

0xe2d0,	// (0x0003643c) popup_call_audio_first_window_t1

0xe37c,	// (0x000364e8) popup_call_audio_first_window_t4_ParamLimits

0xe37c,	// (0x000364e8) popup_call_audio_first_window_t4

0xe408,	// (0x00036574) popup_call_audio_first_window_t5_ParamLimits

0xe408,	// (0x00036574) popup_call_audio_first_window_t5

0x0002,

0xf100,	// (0x0003726c) popup_call_audio_first_window_t_ParamLimits

0xf100,	// (0x0003726c) popup_call_audio_first_window_t

0xe437,	// (0x000365a3) bg_popup_call_pane_cp02

0xe441,	// (0x000365ad) call_type_pane_cp023

0xe449,	// (0x000365b5) popup_call_audio_wait_window_g1

0xe451,	// (0x000365bd) popup_call_audio_wait_window_g2

0x0001,

0xf107,	// (0x00037273) popup_call_audio_wait_window_g

0xe459,	// (0x000365c5) popup_call_audio_wait_window_t3

0xe467,	// (0x000365d3) bg_popup_call_pane_cp03_ParamLimits

0xe467,	// (0x000365d3) bg_popup_call_pane_cp03

0xe4c7,	// (0x00036633) call_thumbnail_pane_cp011_ParamLimits

0xe4c7,	// (0x00036633) call_thumbnail_pane_cp011

0xe4d3,	// (0x0003663f) call_type_pane_cp034_ParamLimits

0xe4d3,	// (0x0003663f) call_type_pane_cp034

0xe50f,	// (0x0003667b) popup_call_audio_second_window_g1_ParamLimits

0xe50f,	// (0x0003667b) popup_call_audio_second_window_g1

0xe54b,	// (0x000366b7) popup_call_audio_second_window_g2_ParamLimits

0xe54b,	// (0x000366b7) popup_call_audio_second_window_g2

0x0001,

0xf10c,	// (0x00037278) popup_call_audio_second_window_g_ParamLimits

0xf10c,	// (0x00037278) popup_call_audio_second_window_g

0xe587,	// (0x000366f3) popup_call_audio_second_window_t1_ParamLimits

0xe587,	// (0x000366f3) popup_call_audio_second_window_t1

0xe608,	// (0x00036774) popup_call_audio_second_window_t2_ParamLimits

0xe608,	// (0x00036774) popup_call_audio_second_window_t2

0xe63e,	// (0x000367aa) popup_call_audio_second_window_t3_ParamLimits

0xe63e,	// (0x000367aa) popup_call_audio_second_window_t3

0x0002,

0xf111,	// (0x0003727d) popup_call_audio_second_window_t_ParamLimits

0xf111,	// (0x0003727d) popup_call_audio_second_window_t

0xe437,	// (0x000365a3) bg_popup_call_pane_cp04

0xe674,	// (0x000367e0) list_conf_pane

0xe67c,	// (0x000367e8) popup_call_audio_conf_window_t1

0xe68a,	// (0x000367f6) call_thumbnail_pane_g1

0xe692,	// (0x000367fe) bg_pinb_pane_ParamLimits

0xe692,	// (0x000367fe) bg_pinb_pane

0xe6a0,	// (0x0003680c) find_pinb_pane

0xe6a9,	// (0x00036815) listscroll_pinb_pane_ParamLimits

0xe6a9,	// (0x00036815) listscroll_pinb_pane

0xe6b8,	// (0x00036824) pinb_bg_pane_g1

0x1e5b,	// (0x00029fc7) pinb_bg_pane_g2

0x1e67,	// (0x00029fd3) pinb_bg_pane_g3

0x1e73,	// (0x00029fdf) pinb_bg_pane_g4

0x1e7f,	// (0x00029feb) pinb_bg_pane_g5

0x1e8b,	// (0x00029ff7) pinb_bg_pane_g6

0x1e96,	// (0x0002a002) pinb_bg_pane_g7

0x1ea1,	// (0x0002a00d) pinb_bg_pane_g8

0x1eac,	// (0x0002a018) pinb_bg_pane_g9

0x1eb6,	// (0x0002a022) pinb_bg_pane_g10

0x0009,

0xf118,	// (0x00037284) pinb_bg_pane_g

0x1ed3,	// (0x0002a03f) grid_pinb_pane

0x1ede,	// (0x0002a04a) list_pinb_pane

0x1ee9,	// (0x0002a055) scroll_pane_cp01_ParamLimits

0x1ee9,	// (0x0002a055) scroll_pane_cp01

0xe6c2,	// (0x0003682e) find_pinb_pane_g1_ParamLimits

0xe6c2,	// (0x0003682e) find_pinb_pane_g1

0xe6da,	// (0x00036846) find_pinb_pane_t1

0xe6ec,	// (0x00036858) find_pinb_pane_t2

0x0001,

0xf132,	// (0x0003729e) find_pinb_pane_t

0xe701,	// (0x0003686d) input_focus_pane_cp01_ParamLimits

0xe701,	// (0x0003686d) input_focus_pane_cp01

0x1efb,	// (0x0002a067) cell_pinb_pane_ParamLimits

0x1efb,	// (0x0002a067) cell_pinb_pane

0x1f1d,	// (0x0002a089) cell_pinb_pane_g1_ParamLimits

0x1f1d,	// (0x0002a089) cell_pinb_pane_g1

0x1f31,	// (0x0002a09d) cell_pinb_pane_g2_ParamLimits

0x1f31,	// (0x0002a09d) cell_pinb_pane_g2

0xe70d,	// (0x00036879) cell_pinb_pane_g3_ParamLimits

0xe70d,	// (0x00036879) cell_pinb_pane_g3

0x0002,

0xf137,	// (0x000372a3) cell_pinb_pane_g_ParamLimits

0xf137,	// (0x000372a3) cell_pinb_pane_g

0xe437,	// (0x000365a3) grid_highlight_pane_cp01

0x1f3d,	// (0x0002a0a9) list_pinb_item_pane_ParamLimits

0x1f3d,	// (0x0002a0a9) list_pinb_item_pane

0xe437,	// (0x000365a3) list_highlight_pane_cp02

0x1f50,	// (0x0002a0bc) list_pinb_item_pane_g1_ParamLimits

0x1f50,	// (0x0002a0bc) list_pinb_item_pane_g1

0x1f5d,	// (0x0002a0c9) list_pinb_item_pane_g2_ParamLimits

0x1f5d,	// (0x0002a0c9) list_pinb_item_pane_g2

0x1f69,	// (0x0002a0d5) list_pinb_item_pane_g3_ParamLimits

0x1f69,	// (0x0002a0d5) list_pinb_item_pane_g3

0x1f7a,	// (0x0002a0e6) list_pinb_item_pane_g4_ParamLimits

0x1f7a,	// (0x0002a0e6) list_pinb_item_pane_g4

0x0003,

0xf13e,	// (0x000372aa) list_pinb_item_pane_g_ParamLimits

0xf13e,	// (0x000372aa) list_pinb_item_pane_g

0x1f86,	// (0x0002a0f2) list_pinb_item_pane_t1_ParamLimits

0x1f86,	// (0x0002a0f2) list_pinb_item_pane_t1

0x08c2,	// (0x00028a2e) calc_display_pane

0x08ea,	// (0x00028a56) calc_paper_pane

0x090d,	// (0x00028a79) grid_calc_pane

0xe437,	// (0x000365a3) bg_list_pane_cp01

0x1f9d,	// (0x0002a109) clock_g1

0x1fa5,	// (0x0002a111) clock_g2

0x0001,

0xf147,	// (0x000372b3) clock_g

0x1fad,	// (0x0002a119) clock_t1_ParamLimits

0x1fad,	// (0x0002a119) clock_t1

0x1fc2,	// (0x0002a12e) clock_t2_ParamLimits

0x1fc2,	// (0x0002a12e) clock_t2

0x1fd4,	// (0x0002a140) clock_t3_ParamLimits

0x1fd4,	// (0x0002a140) clock_t3

0x1fe6,	// (0x0002a152) clock_t4_ParamLimits

0x1fe6,	// (0x0002a152) clock_t4

0x1ff8,	// (0x0002a164) clock_t5_ParamLimits

0x1ff8,	// (0x0002a164) clock_t5

0x200d,	// (0x0002a179) clock_t6_ParamLimits

0x200d,	// (0x0002a179) clock_t6

0x201f,	// (0x0002a18b) clock_t7_ParamLimits

0x201f,	// (0x0002a18b) clock_t7

0x2031,	// (0x0002a19d) clock_t8_ParamLimits

0x2031,	// (0x0002a19d) clock_t8

0x2045,	// (0x0002a1b1) clock_t9_ParamLimits

0x2045,	// (0x0002a1b1) clock_t9

0x0008,

0xf14c,	// (0x000372b8) clock_t_ParamLimits

0xf14c,	// (0x000372b8) clock_t

0xe719,	// (0x00036885) popup_clock_analogue_window_cp02

0xe719,	// (0x00036885) popup_clock_digital_window_cp01

0xe721,	// (0x0003688d) listscroll_help_pane

0xe437,	// (0x000365a3) phob_pre_status_pane

0xe72b,	// (0x00036897) grid_qdial_pane

0xe437,	// (0x000365a3) listscroll_mce_pane

0xe735,	// (0x000368a1) bg_notes_pane

0xe743,	// (0x000368af) list_notes_pane

0x205b,	// (0x0002a1c7) scroll_pane_cp06

0xe751,	// (0x000368bd) bg_calc_paper_pane

0xb667,	// (0x000337d3) list_calc_pane

0xe765,	// (0x000368d1) bg_calc_display_pane

0x093b,	// (0x00028aa7) calc_display_pane_t1

0x094d,	// (0x00028ab9) calc_display_pane_t2

0xb681,	// (0x000337ed) calc_display_pane_t3

0x0002,

0xf15f,	// (0x000372cb) calc_display_pane_t

0x095f,	// (0x00028acb) cell_calc_pane_ParamLimits

0x095f,	// (0x00028acb) cell_calc_pane

0xe771,	// (0x000368dd) bg_calc_paper_pane_g1

0xe77d,	// (0x000368e9) bg_calc_paper_pane_g2

0xe789,	// (0x000368f5) bg_calc_paper_pane_g3

0xe795,	// (0x00036901) bg_calc_paper_pane_g4

0xe7a1,	// (0x0003690d) bg_calc_paper_pane_g5

0x206f,	// (0x0002a1db) bg_calc_paper_pane_g6

0x2082,	// (0x0002a1ee) bg_calc_paper_pane_g7

0x2095,	// (0x0002a201) bg_calc_paper_pane_g8

0x0007,

0xf166,	// (0x000372d2) bg_calc_paper_pane_g

0x20a6,	// (0x0002a212) calc_bg_paper_pane_g9

0x20b7,	// (0x0002a223) list_calc_item_pane_ParamLimits

0x20b7,	// (0x0002a223) list_calc_item_pane

0xe7ad,	// (0x00036919) list_calc_item_pane_g1

0xb693,	// (0x000337ff) list_calc_item_pane_t1_ParamLimits

0xb693,	// (0x000337ff) list_calc_item_pane_t1

0x099e,	// (0x00028b0a) list_calc_item_pane_t2_ParamLimits

0x099e,	// (0x00028b0a) list_calc_item_pane_t2

0x0001,

0xf177,	// (0x000372e3) list_calc_item_pane_t_ParamLimits

0xf177,	// (0x000372e3) list_calc_item_pane_t

0xe7ba,	// (0x00036926) cell_calc_pane_g1

0xe7c4,	// (0x00036930) grid_highlight_pane_cp02

0xe7f4,	// (0x00036960) bg_calc_display_pane_g1

0xb6a5,	// (0x00033811) bg_calc_display_pane_g2

0xe7fd,	// (0x00036969) bg_calc_display_pane_g3

0x0002,

0xf181,	// (0x000372ed) bg_calc_display_pane_g

0x09d0,	// (0x00028b3c) cell_qdial_pane_ParamLimits

0x09d0,	// (0x00028b3c) cell_qdial_pane

0x20cc,	// (0x0002a238) cell_qdial_pane_g1_ParamLimits

0x20cc,	// (0x0002a238) cell_qdial_pane_g1

0x20e2,	// (0x0002a24e) cell_qdial_pane_g2_ParamLimits

0x20e2,	// (0x0002a24e) cell_qdial_pane_g2

0xe806,	// (0x00036972) cell_qdial_pane_g3_ParamLimits

0xe806,	// (0x00036972) cell_qdial_pane_g3

0x0003,

0xf188,	// (0x000372f4) cell_qdial_pane_g_ParamLimits

0xf188,	// (0x000372f4) cell_qdial_pane_g

0x2108,	// (0x0002a274) cell_qdial_pane_t1_ParamLimits

0x2108,	// (0x0002a274) cell_qdial_pane_t1

0x2120,	// (0x0002a28c) cell_qdial_pane_t2_ParamLimits

0x2120,	// (0x0002a28c) cell_qdial_pane_t2

0x2133,	// (0x0002a29f) cell_qdial_pane_t3_ParamLimits

0x2133,	// (0x0002a29f) cell_qdial_pane_t3

0x0002,

0xf191,	// (0x000372fd) cell_qdial_pane_t_ParamLimits

0xf191,	// (0x000372fd) cell_qdial_pane_t

0xe437,	// (0x000365a3) grid_highlight_pane_cp04

0xe812,	// (0x0003697e) thumbnail_qdial_pane_ParamLimits

0xe812,	// (0x0003697e) thumbnail_qdial_pane

0xe86e,	// (0x000369da) list_help_pane

0xe877,	// (0x000369e3) scroll_pane_cp02

0x2146,	// (0x0002a2b2) help_list_pane_t1_ParamLimits

0x2146,	// (0x0002a2b2) help_list_pane_t1

0xb6af,	// (0x0003381b) bg_notes_pane_g2

0xb6b7,	// (0x00033823) bg_notes_pane_g3

0xb6bf,	// (0x0003382b) notes_bg_pane_g1

0xb6c7,	// (0x00033833) notes_bg_pane_g4

0xb6cf,	// (0x0003383b) notes_bg_pane_g5

0xb6d7,	// (0x00033843) notes_bg_pane_g6

0xb6df,	// (0x0003384b) notes_bg_pane_g7

0xb6e7,	// (0x00033853) notes_bg_pane_g8

0xb6ef,	// (0x0003385b) notes_bg_pane_g9

0x0006,

0xf1af,	// (0x0003731b) notes_bg_pane_g

0x216a,	// (0x0002a2d6) list_notes_text_pane_ParamLimits

0x216a,	// (0x0002a2d6) list_notes_text_pane

0xe880,	// (0x000369ec) list_notes_text_pane_g1

0x2181,	// (0x0002a2ed) list_notes_text_pane_t1

0xe765,	// (0x000368d1) listscroll_cale_week_pane

0x21ac,	// (0x0002a318) bg_cale_heading_pane

0xe89a,	// (0x00036a06) bg_cale_pane_cp01

0x21c8,	// (0x0002a334) cale_week_corner_pane

0x21de,	// (0x0002a34a) cale_week_day_heading_pane

0x21fa,	// (0x0002a366) cale_week_scroll_pane_g1

0x2213,	// (0x0002a37f) cale_week_scroll_pane_g2

0x2224,	// (0x0002a390) cale_week_scroll_pane_g3

0x2235,	// (0x0002a3a1) cale_week_scroll_pane_g4

0x2246,	// (0x0002a3b2) cale_week_scroll_pane_g5

0x2257,	// (0x0002a3c3) cale_week_scroll_pane_g6

0x2268,	// (0x0002a3d4) cale_week_scroll_pane_g7

0x2279,	// (0x0002a3e5) cale_week_scroll_pane_g8

0x228a,	// (0x0002a3f6) cale_week_scroll_pane_g9

0x229b,	// (0x0002a407) cale_week_scroll_pane_g10

0x22ac,	// (0x0002a418) cale_week_scroll_pane_g11

0x22bd,	// (0x0002a429) cale_week_scroll_pane_g12

0x22ce,	// (0x0002a43a) cale_week_scroll_pane_g13

0x22e7,	// (0x0002a453) cale_week_scroll_pane_g14

0x2300,	// (0x0002a46c) cale_week_scroll_pane_g15

0x000e,

0xf1be,	// (0x0003732a) cale_week_scroll_pane_g

0x2319,	// (0x0002a485) cale_week_time_pane

0x232a,	// (0x0002a496) grid_cale_week_pane

0x2345,	// (0x0002a4b1) scroll_pane_cp08

0x235d,	// (0x0002a4c9) cell_cale_week_pane_ParamLimits

0x235d,	// (0x0002a4c9) cell_cale_week_pane

0x23a5,	// (0x0002a511) cale_week_day_heading_pane_t1

0x23b9,	// (0x0002a525) cale_week_day_heading_pane_t2

0x23cd,	// (0x0002a539) cale_week_day_heading_pane_t3

0x23e1,	// (0x0002a54d) cale_week_day_heading_pane_t4

0x23f5,	// (0x0002a561) cale_week_day_heading_pane_t5

0x2409,	// (0x0002a575) cale_week_day_heading_pane_t6

0x241d,	// (0x0002a589) cale_week_day_heading_pane_t7

0x0006,

0xf1dd,	// (0x00037349) cale_week_day_heading_pane_t

0xe8c5,	// (0x00036a31) bg_cale_side_pane

0x09e6,	// (0x00028b52) cale_week_time_pane_t1

0x09fe,	// (0x00028b6a) cale_week_time_pane_t2

0x0a16,	// (0x00028b82) cale_week_time_pane_t3

0x0a2e,	// (0x00028b9a) cale_week_time_pane_t4

0x0a46,	// (0x00028bb2) cale_week_time_pane_t5

0x0a5e,	// (0x00028bca) cale_week_time_pane_t6

0x0a76,	// (0x00028be2) cale_week_time_pane_t7

0x0a92,	// (0x00028bfe) cale_week_time_pane_t8

0x0007,

0xf1ec,	// (0x00037358) cale_week_time_pane_t

0x2431,	// (0x0002a59d) cell_cale_week_pane_g2

0x2442,	// (0x0002a5ae) cell_cale_week_pane_g3_ParamLimits

0x2442,	// (0x0002a5ae) cell_cale_week_pane_g3

0xe8d3,	// (0x00036a3f) grid_highlight_pane_cp07

0xe8db,	// (0x00036a47) listscroll_gms_pane

0xe8e5,	// (0x00036a51) grid_gms_pane

0xe8ee,	// (0x00036a5a) listscroll_gms_pane_g1

0xe8f6,	// (0x00036a62) listscroll_gms_pane_g2

0x0001,

0xf1fd,	// (0x00037369) listscroll_gms_pane_g

0x245a,	// (0x0002a5c6) scroll_pane_cp010

0x2465,	// (0x0002a5d1) cell_gms_pane_ParamLimits

0x2465,	// (0x0002a5d1) cell_gms_pane

0x247f,	// (0x0002a5eb) cell_gms_pane_g1

0xe8fe,	// (0x00036a6a) cell_gms_pane_g2

0xe906,	// (0x00036a72) cell_gms_pane_g3

0xe90f,	// (0x00036a7b) cell_gms_pane_g4

0x0003,

0xf202,	// (0x0003736e) cell_gms_pane_g

0xe918,	// (0x00036a84) grid_highlight_pane_cp09

0x5d67,	// (0x0002ded3) phob_pre_status_pane_g1

0x5d6f,	// (0x0002dedb) phob_pre_status_pane_g2

0x5d77,	// (0x0002dee3) phob_pre_status_pane_g3

0x5d7f,	// (0x0002deeb) phob_pre_status_pane_g4

0x0004,

0xf5f1,	// (0x0003775d) phob_pre_status_pane_g

0x5d8f,	// (0x0002defb) phob_pre_status_pane_t1

0x5d9f,	// (0x0002df0b) phob_pre_status_pane_t2

0x5daf,	// (0x0002df1b) phob_pre_status_pane_t3

0x0002,

0xf5fc,	// (0x00037768) phob_pre_status_pane_t

0xe437,	// (0x000365a3) bg_list_pane_cp05

0x0aba,	// (0x00028c26) grid_vorec_pane

0x0ac6,	// (0x00028c32) vorec_t1

0x0ad4,	// (0x00028c40) vorec_t2

0x0ae2,	// (0x00028c4e) vorec_t3

0x0af0,	// (0x00028c5c) vorec_t4

0x0afe,	// (0x00028c6a) vorec_t5

0xb6f7,	// (0x00033863) vorec_t6

0x0006,

0xf20b,	// (0x00037377) vorec_t

0x0b1a,	// (0x00028c86) wait_bar_pane_cp01

0x2487,	// (0x0002a5f3) cell_vorec_pane_ParamLimits

0x2487,	// (0x0002a5f3) cell_vorec_pane

0xe920,	// (0x00036a8c) cell_vorec_pane_g1

0xe437,	// (0x000365a3) grid_highlight_pane_cp05

0x24b2,	// (0x0002a61e) cams_zoom_pane

0x24c1,	// (0x0002a62d) image_vga_pane

0x24db,	// (0x0002a647) main_camera_pane_g1

0x24ed,	// (0x0002a659) main_camera_pane_g2

0x24fd,	// (0x0002a669) main_camera_pane_g3

0x2511,	// (0x0002a67d) main_camera_pane_g4

0x2525,	// (0x0002a691) main_camera_pane_g5

0x2539,	// (0x0002a6a5) main_camera_pane_g6

0x254d,	// (0x0002a6b9) main_camera_pane_g7

0x0007,

0xf21a,	// (0x00037386) main_camera_pane_g

0x2561,	// (0x0002a6cd) main_camera_pane_t1

0x2577,	// (0x0002a6e3) main_camera_pane_t2

0x0001,

0xf22b,	// (0x00037397) main_camera_pane_t

0x25b5,	// (0x0002a721) cams_zoom_pane_cp_ParamLimits

0x25b5,	// (0x0002a721) cams_zoom_pane_cp

0x25dd,	// (0x0002a749) image_cif_pane_ParamLimits

0x25dd,	// (0x0002a749) image_cif_pane

0x2618,	// (0x0002a784) image_subqcif_pane

0x2622,	// (0x0002a78e) main_video_pane_g1_ParamLimits

0x2622,	// (0x0002a78e) main_video_pane_g1

0x2646,	// (0x0002a7b2) main_video_pane_g2_ParamLimits

0x2646,	// (0x0002a7b2) main_video_pane_g2

0x267c,	// (0x0002a7e8) main_video_pane_g3_ParamLimits

0x267c,	// (0x0002a7e8) main_video_pane_g3

0x26aa,	// (0x0002a816) main_video_pane_g4_ParamLimits

0x26aa,	// (0x0002a816) main_video_pane_g4

0x26d8,	// (0x0002a844) main_video_pane_g5_ParamLimits

0x26d8,	// (0x0002a844) main_video_pane_g5

0xe936,	// (0x00036aa2) main_video_pane_g6_ParamLimits

0xe936,	// (0x00036aa2) main_video_pane_g6

0x0006,

0xf230,	// (0x0003739c) main_video_pane_g_ParamLimits

0xf230,	// (0x0003739c) main_video_pane_g

0x2701,	// (0x0002a86d) main_video_pane_t1_ParamLimits

0x2701,	// (0x0002a86d) main_video_pane_t1

0xe950,	// (0x00036abc) cams_zoom_pane_g1

0xe959,	// (0x00036ac5) cams_zoom_pane_g2

0xe962,	// (0x00036ace) cams_zoom_pane_g3

0xe96b,	// (0x00036ad7) cams_zoom_pane_g4

0x0003,

0xf23f,	// (0x000373ab) cams_zoom_pane_g

0x275e,	// (0x0002a8ca) grid_cams_pane

0x2778,	// (0x0002a8e4) linegrid_cams_pane

0x278a,	// (0x0002a8f6) cell_cams_pane_ParamLimits

0x278a,	// (0x0002a8f6) cell_cams_pane

0xe974,	// (0x00036ae0) cams_burst_image_pane

0xe97c,	// (0x00036ae8) cell_cams_pane_g1

0xe437,	// (0x000365a3) grid_highlight_pane_cp03

0xe7ba,	// (0x00036926) mp_bg_pane_g1

0xe437,	// (0x000365a3) bg_list_pane_cp03

0x5c9a,	// (0x0002de06) bg_mp_pane

0x5ca2,	// (0x0002de0e) grid_mp_pane

0x5caa,	// (0x0002de16) media_player_g1

0x5cb4,	// (0x0002de20) media_player_t1

0x5cc2,	// (0x0002de2e) media_player_t2

0x5cd0,	// (0x0002de3c) media_player_t3

0x5cde,	// (0x0002de4a) media_player_t4

0x5cec,	// (0x0002de58) media_player_t5

0x5cfa,	// (0x0002de66) media_player_t6

0x5d08,	// (0x0002de74) media_player_t7

0x0006,

0xf5db,	// (0x00037747) media_player_t

0x5d16,	// (0x0002de82) wait_bar_pane_cp02

0xf5c0,	// (0x0003772c) main_usb_pane_t

0x5d5e,	// (0x0002deca) cell_mp_pane

0xe7ba,	// (0x00036926) cell_mp_pane_g1

0xe437,	// (0x000365a3) grid_highlight_pane_cp06

0xea42,	// (0x00036bae) grid_skin_colour_pane

0xea4a,	// (0x00036bb6) list_highlight_pane_cp03

0x27fe,	// (0x0002a96a) skin_g1

0xea52,	// (0x00036bbe) skin_t1

0xea61,	// (0x00036bcd) skin_t2

0x0001,

0xf274,	// (0x000373e0) skin_t

0x2808,	// (0x0002a974) cell_skin_colour_pane_ParamLimits

0x2808,	// (0x0002a974) cell_skin_colour_pane

0xea6f,	// (0x00036bdb) cell_skin_colour_pane_g1

0x287b,	// (0x0002a9e7) call_video_g1_ParamLimits

0x287b,	// (0x0002a9e7) call_video_g1

0x2897,	// (0x0002aa03) call_video_g2_ParamLimits

0x2897,	// (0x0002aa03) call_video_g2

0x0001,

0xf279,	// (0x000373e5) call_video_g_ParamLimits

0xf279,	// (0x000373e5) call_video_g

0x28dc,	// (0x0002aa48) call_video_uplink_pane_cp1_ParamLimits

0x28dc,	// (0x0002aa48) call_video_uplink_pane_cp1

0xea81,	// (0x00036bed) call_video_uplink_pane_cp2

0x297d,	// (0x0002aae9) video_down_crop_pane_ParamLimits

0x297d,	// (0x0002aae9) video_down_crop_pane

0x2a66,	// (0x0002abd2) video_down_pane_ParamLimits

0x2a66,	// (0x0002abd2) video_down_pane

0xea89,	// (0x00036bf5) video_down_subqcif_pane_ParamLimits

0xea89,	// (0x00036bf5) video_down_subqcif_pane

0xeaa3,	// (0x00036c0f) video_down_subqcif_pane_cp_ParamLimits

0xeaa3,	// (0x00036c0f) video_down_subqcif_pane_cp

0xeacb,	// (0x00036c37) im_reading_pane_ParamLimits

0xeacb,	// (0x00036c37) im_reading_pane

0x2b6f,	// (0x0002acdb) im_writing_pane_ParamLimits

0x2b6f,	// (0x0002acdb) im_writing_pane

0x2b8d,	// (0x0002acf9) im_reading_pane_t1

0xeae5,	// (0x00036c51) list_im_pane

0xeaf6,	// (0x00036c62) scroll_pane_cp07

0x2bcc,	// (0x0002ad38) im_writing_pane_t1_ParamLimits

0x2bcc,	// (0x0002ad38) im_writing_pane_t1

0xeb0f,	// (0x00036c7b) im_writing_pane_t2_ParamLimits

0xeb0f,	// (0x00036c7b) im_writing_pane_t2

0x0001,

0xf283,	// (0x000373ef) im_writing_pane_t_ParamLimits

0xf283,	// (0x000373ef) im_writing_pane_t

0xe437,	// (0x000365a3) input_focus_pane_cp04

0xe437,	// (0x000365a3) input_focus_pane_cp05

0x2be1,	// (0x0002ad4d) list_im_single_pane_ParamLimits

0x2be1,	// (0x0002ad4d) list_im_single_pane

0x2bfa,	// (0x0002ad66) list_single_im_pane_t1

0x5d1e,	// (0x0002de8a) blid_accuracy_pane

0x5d26,	// (0x0002de92) blid_compass_pane

0x5d30,	// (0x0002de9c) main_location_t1

0x5d40,	// (0x0002deac) main_location_t2

0x5d50,	// (0x0002debc) main_location_t3

0x0002,

0xf5ea,	// (0x00037756) main_location_t

0xe437,	// (0x000365a3) aid_levels_location

0xe7ba,	// (0x00036926) blid_accuracy_pane_g1

0xe7ba,	// (0x00036926) blid_accuracy_pane_g2

0x0001,

0xf2e5,	// (0x00037451) blid_accuracy_pane_g

0xeb57,	// (0x00036cc3) wml_content_pane

0xeb95,	// (0x00036d01) wml_button_pane_ParamLimits

0xeb95,	// (0x00036d01) wml_button_pane

0x2c09,	// (0x0002ad75) wml_list_single_large_pane_ParamLimits

0x2c09,	// (0x0002ad75) wml_list_single_large_pane

0x2c22,	// (0x0002ad8e) wml_list_single_medium_pane_ParamLimits

0x2c22,	// (0x0002ad8e) wml_list_single_medium_pane

0x2c3c,	// (0x0002ada8) wml_list_single_small_pane_ParamLimits

0x2c3c,	// (0x0002ada8) wml_list_single_small_pane

0xeba9,	// (0x00036d15) wml_selection_box_pane_ParamLimits

0xeba9,	// (0x00036d15) wml_selection_box_pane

0xebbc,	// (0x00036d28) wml_list_single_pane_t1

0xebcb,	// (0x00036d37) wml_list_single_medium_pane_t1

0xebda,	// (0x00036d46) wml_list_single_large_pane_t1

0xebe9,	// (0x00036d55) input_focus_pane_cp02_ParamLimits

0xebe9,	// (0x00036d55) input_focus_pane_cp02

0xebfc,	// (0x00036d68) wml_selection_box_pane_g1

0xec05,	// (0x00036d71) wml_selection_box_pane_t1_ParamLimits

0xec05,	// (0x00036d71) wml_selection_box_pane_t1

0xe692,	// (0x000367fe) bg_wml_button_pane_ParamLimits

0xe692,	// (0x000367fe) bg_wml_button_pane

0xec1d,	// (0x00036d89) wml_button_pane_g1

0xec25,	// (0x00036d91) wml_button_pane_t1

0xec1d,	// (0x00036d89) wml_button_bg_pane_g1

0xec35,	// (0x00036da1) wml_button_bg_pane_g2

0xec3d,	// (0x00036da9) wml_button_bg_pane_g3

0xec45,	// (0x00036db1) wml_button_bg_pane_g4

0xec4d,	// (0x00036db9) wml_button_bg_pane_g5

0xec55,	// (0x00036dc1) wml_button_bg_pane_g6

0xec5d,	// (0x00036dc9) wml_button_bg_pane_g7

0xec65,	// (0x00036dd1) wml_button_bg_pane_g8

0xec6d,	// (0x00036dd9) wml_button_bg_pane_g9

0x0008,

0xf288,	// (0x000373f4) wml_button_bg_pane_g

0x2c5b,	// (0x0002adc7) bg_list_pane_cp02

0xec75,	// (0x00036de1) mce_header_pane_ParamLimits

0xec75,	// (0x00036de1) mce_header_pane

0xec8b,	// (0x00036df7) mce_icon_pane

0xec8b,	// (0x00036df7) mce_image_pane

0xec94,	// (0x00036e00) mce_text_pane_ParamLimits

0xec94,	// (0x00036e00) mce_text_pane

0x2c65,	// (0x0002add1) scroll_pane_cp03

0xeb8d,	// (0x00036cf9) scroll_pane_cp04

0xeca7,	// (0x00036e13) scroll_pane_cp05_ParamLimits

0xeca7,	// (0x00036e13) scroll_pane_cp05

0x2c6f,	// (0x0002addb) mce_header_field_pane_ParamLimits

0x2c6f,	// (0x0002addb) mce_header_field_pane

0x2c88,	// (0x0002adf4) mce_header_field_pane_2_ParamLimits

0x2c88,	// (0x0002adf4) mce_header_field_pane_2

0x2c9e,	// (0x0002ae0a) mce_header_field_pane_3

0x2ca6,	// (0x0002ae12) list_single_mce_message_pane_ParamLimits

0x2ca6,	// (0x0002ae12) list_single_mce_message_pane

0x2cc2,	// (0x0002ae2e) list_single_mce_smart_pane_ParamLimits

0x2cc2,	// (0x0002ae2e) list_single_mce_smart_pane

0xecb3,	// (0x00036e1f) input_focus_pane_cp03

0xecbc,	// (0x00036e28) list_header_data_pane

0x2ce9,	// (0x0002ae55) mce_header_field_pane_t1

0x2cf9,	// (0x0002ae65) list_single_mce_header_pane_ParamLimits

0x2cf9,	// (0x0002ae65) list_single_mce_header_pane

0xecc4,	// (0x00036e30) list_single_mce_header_pane_t1

0xecd3,	// (0x00036e3f) list_single_mce_message_pane_g1

0xecdb,	// (0x00036e47) list_single_mce_message_pane_t1

0x2d2b,	// (0x0002ae97) bg_cale_heading_pane_cp01_ParamLimits

0x2d2b,	// (0x0002ae97) bg_cale_heading_pane_cp01

0xece9,	// (0x00036e55) bg_cale_pane_cp02_ParamLimits

0xece9,	// (0x00036e55) bg_cale_pane_cp02

0x2d5e,	// (0x0002aeca) cale_month_corner_pane

0x2d74,	// (0x0002aee0) cale_month_day_heading_pane_ParamLimits

0x2d74,	// (0x0002aee0) cale_month_day_heading_pane

0x2da7,	// (0x0002af13) cale_month_pane_g1_ParamLimits

0x2da7,	// (0x0002af13) cale_month_pane_g1

0x2dd3,	// (0x0002af3f) cale_month_pane_g2_ParamLimits

0x2dd3,	// (0x0002af3f) cale_month_pane_g2

0x2df4,	// (0x0002af60) cale_month_pane_g3_ParamLimits

0x2df4,	// (0x0002af60) cale_month_pane_g3

0x2e30,	// (0x0002af9c) cale_month_pane_g4_ParamLimits

0x2e30,	// (0x0002af9c) cale_month_pane_g4

0x2e6c,	// (0x0002afd8) cale_month_pane_g5_ParamLimits

0x2e6c,	// (0x0002afd8) cale_month_pane_g5

0x2ea8,	// (0x0002b014) cale_month_pane_g6_ParamLimits

0x2ea8,	// (0x0002b014) cale_month_pane_g6

0x2ee4,	// (0x0002b050) cale_month_pane_g7_ParamLimits

0x2ee4,	// (0x0002b050) cale_month_pane_g7

0x2f20,	// (0x0002b08c) cale_month_pane_g8_ParamLimits

0x2f20,	// (0x0002b08c) cale_month_pane_g8

0x2f5c,	// (0x0002b0c8) cale_month_pane_g9_ParamLimits

0x2f5c,	// (0x0002b0c8) cale_month_pane_g9

0x2f92,	// (0x0002b0fe) cale_month_pane_g10_ParamLimits

0x2f92,	// (0x0002b0fe) cale_month_pane_g10

0x2fbc,	// (0x0002b128) cale_month_pane_g11_ParamLimits

0x2fbc,	// (0x0002b128) cale_month_pane_g11

0x2fe6,	// (0x0002b152) cale_month_pane_g12_ParamLimits

0x2fe6,	// (0x0002b152) cale_month_pane_g12

0x3014,	// (0x0002b180) cale_month_pane_g13_ParamLimits

0x3014,	// (0x0002b180) cale_month_pane_g13

0x000c,

0xf29b,	// (0x00037407) cale_month_pane_g_ParamLimits

0xf29b,	// (0x00037407) cale_month_pane_g

0x3042,	// (0x0002b1ae) cale_month_week_pane

0x3053,	// (0x0002b1bf) grid_cale_month_pane_ParamLimits

0x3053,	// (0x0002b1bf) grid_cale_month_pane

0x3081,	// (0x0002b1ed) cale_month_day_heading_pane_t1

0x30df,	// (0x0002b24b) cale_month_day_heading_pane_t2

0x3144,	// (0x0002b2b0) cale_month_day_heading_pane_t3

0x31a9,	// (0x0002b315) cale_month_day_heading_pane_t4

0x320e,	// (0x0002b37a) cale_month_day_heading_pane_t5

0x3273,	// (0x0002b3df) cale_month_day_heading_pane_t6

0x32d8,	// (0x0002b444) cale_month_day_heading_pane_t7

0x0006,

0xf2b6,	// (0x00037422) cale_month_day_heading_pane_t

0xe8c5,	// (0x00036a31) bg_cale_side_pane_cp01

0x333d,	// (0x0002b4a9) cale_month_week_pane_t1

0x3354,	// (0x0002b4c0) cale_month_week_pane_t2

0x336b,	// (0x0002b4d7) cale_month_week_pane_t3

0x3382,	// (0x0002b4ee) cale_month_week_pane_t4

0x3399,	// (0x0002b505) cale_month_week_pane_t5

0x33b0,	// (0x0002b51c) cale_month_week_pane_t6

0x0005,

0xf2c5,	// (0x00037431) cale_month_week_pane_t

0x33cf,	// (0x0002b53b) cell_cale_month_pane_ParamLimits

0x33cf,	// (0x0002b53b) cell_cale_month_pane

0xb705,	// (0x00033871) cell_cale_month_pane_g1

0x0b22,	// (0x00028c8e) cell_cale_month_pane_t1_ParamLimits

0x0b22,	// (0x00028c8e) cell_cale_month_pane_t1

0xe8d3,	// (0x00036a3f) grid_highlight_pane_cp08

0xe7ba,	// (0x00036926) main_smil_g1

0x347d,	// (0x0002b5e9) smil_status_pane

0xed48,	// (0x00036eb4) smil_text_pane

0x5b25,	// (0x0002dc91) bg_popup_call3_rect_pane_g8

0x5b2d,	// (0x0002dc99) bg_popup_call3_rect_pane_g9

0x0008,

0xf57e,	// (0x000376ea) bg_popup_call3_rect_pane_g

0x6135,	// (0x0002e2a1) smil_status_volume_pane_g1

0xed52,	// (0x00036ebe) smil_status_pane_t1

0xb846,	// (0x000339b2) volume_smil_pane

0xed69,	// (0x00036ed5) list_smil_text_pane

0x3492,	// (0x0002b5fe) scroll_pane_cp011

0x349d,	// (0x0002b609) smil_text_list_pane_t1_ParamLimits

0x349d,	// (0x0002b609) smil_text_list_pane_t1

0xb711,	// (0x0003387d) aid_volume_smil_ParamLimits

0xb711,	// (0x0003387d) aid_volume_smil

0xe7ba,	// (0x00036926) smil_volume_pane_g1

0xe7ba,	// (0x00036926) smil_volume_pane_g2

0x0001,

0xf2e5,	// (0x00037451) smil_volume_pane_g

0xe765,	// (0x000368d1) listscroll_cale_day_pane

0xed73,	// (0x00036edf) bg_cale_pane

0xed8b,	// (0x00036ef7) list_cale_pane

0xed9c,	// (0x00036f08) scroll_pane_cp09

0xedad,	// (0x00036f19) cale_bg_pane_g1

0xedb5,	// (0x00036f21) cale_bg_pane_g2

0xedbd,	// (0x00036f29) cale_bg_pane_g3

0xedc5,	// (0x00036f31) cale_bg_pane_g4

0xedcd,	// (0x00036f39) cale_bg_pane_g5

0xedd5,	// (0x00036f41) cale_bg_pane_g6

0xeddd,	// (0x00036f49) cale_bg_pane_g7

0xede5,	// (0x00036f51) cale_bg_pane_g8

0xeded,	// (0x00036f59) cale_bg_pane_g9

0x0008,

0xf2ea,	// (0x00037456) cale_bg_pane_g

0x34f2,	// (0x0002b65e) list_cale_time_pane_ParamLimits

0x34f2,	// (0x0002b65e) list_cale_time_pane

0x3507,	// (0x0002b673) list_cale_time_pane_g1_ParamLimits

0x3507,	// (0x0002b673) list_cale_time_pane_g1

0xedf5,	// (0x00036f61) list_cale_time_pane_g2_ParamLimits

0xedf5,	// (0x00036f61) list_cale_time_pane_g2

0x3513,	// (0x0002b67f) list_cale_time_pane_g3_ParamLimits

0x3513,	// (0x0002b67f) list_cale_time_pane_g3

0x3521,	// (0x0002b68d) list_cale_time_pane_g4_ParamLimits

0x3521,	// (0x0002b68d) list_cale_time_pane_g4

0x352f,	// (0x0002b69b) list_cale_time_pane_g5_ParamLimits

0x352f,	// (0x0002b69b) list_cale_time_pane_g5

0x0005,

0xf2fd,	// (0x00037469) list_cale_time_pane_g_ParamLimits

0xf2fd,	// (0x00037469) list_cale_time_pane_g

0x353d,	// (0x0002b6a9) list_cale_time_pane_t1_ParamLimits

0x353d,	// (0x0002b6a9) list_cale_time_pane_t1

0x3565,	// (0x0002b6d1) list_cale_time_pane_t2_ParamLimits

0x3565,	// (0x0002b6d1) list_cale_time_pane_t2

0x3a5e,	// (0x0002bbca) aid_blid_cardinal_pane

0x3aac,	// (0x0002bc18) compass_pane_t4

0x358d,	// (0x0002b6f9) list_cale_time_pane_t4_ParamLimits

0x358d,	// (0x0002b6f9) list_cale_time_pane_t4

0x3aba,	// (0x0002bc26) compass_pane_t5

0x3aca,	// (0x0002bc36) compass_pane_t6

0x3ad8,	// (0x0002bc44) compass_pane_t7

0x3b70,	// (0x0002bcdc) navi_pane_cc_t1

0x3d8f,	// (0x0002befb) aid_phob_thumbnail_center_pane

0x44d1,	// (0x0002c63d) main_postcard_pane_g4_ParamLimits

0x0002,

0xf30a,	// (0x00037476) list_cale_time_pane_t_ParamLimits

0xf30a,	// (0x00037476) list_cale_time_pane_t

0xe08e,	// (0x000361fa) bg_popup_window_pane_cp02_ParamLimits

0xe08e,	// (0x000361fa) bg_popup_window_pane_cp02

0xee0f,	// (0x00036f7b) heading_pane_cp01_ParamLimits

0xee0f,	// (0x00036f7b) heading_pane_cp01

0xee1b,	// (0x00036f87) loc_req_pane_ParamLimits

0xee1b,	// (0x00036f87) loc_req_pane

0xee2b,	// (0x00036f97) loc_type_pane_ParamLimits

0xee2b,	// (0x00036f97) loc_type_pane

0xee3d,	// (0x00036fa9) loc_type_pane_t1_ParamLimits

0xee3d,	// (0x00036fa9) loc_type_pane_t1

0xee4f,	// (0x00036fbb) loc_type_pane_t2_ParamLimits

0xee4f,	// (0x00036fbb) loc_type_pane_t2

0xee61,	// (0x00036fcd) loc_type_pane_t3_ParamLimits

0xee61,	// (0x00036fcd) loc_type_pane_t3

0x0002,

0xf311,	// (0x0003747d) loc_type_pane_t_ParamLimits

0xf311,	// (0x0003747d) loc_type_pane_t

0xee73,	// (0x00036fdf) list_loc_req_pane

0xee7d,	// (0x00036fe9) scroll_pane_cp012

0x35b5,	// (0x0002b721) list_single_loc_request_popup_menu_pane_ParamLimits

0x35b5,	// (0x0002b721) list_single_loc_request_popup_menu_pane

0xee88,	// (0x00036ff4) list_single_loc_request_popup_menu_pane_g1_ParamLimits

0xee88,	// (0x00036ff4) list_single_loc_request_popup_menu_pane_g1

0xee94,	// (0x00037000) list_single_loc_request_popup_menu_pane_g2_ParamLimits

0xee94,	// (0x00037000) list_single_loc_request_popup_menu_pane_g2

0x0001,

0xf318,	// (0x00037484) list_single_loc_request_popup_menu_pane_g_ParamLimits

0xf318,	// (0x00037484) list_single_loc_request_popup_menu_pane_g

0xeea0,	// (0x0003700c) list_single_loc_request_popup_menu_pane_t1_ParamLimits

0xeea0,	// (0x0003700c) list_single_loc_request_popup_menu_pane_t1

0xe692,	// (0x000367fe) bg_popup_window_pane_cp03_ParamLimits

0xe692,	// (0x000367fe) bg_popup_window_pane_cp03

0xeeb6,	// (0x00037022) heading_loc_req_pane_ParamLimits

0xeeb6,	// (0x00037022) heading_loc_req_pane

0x35c2,	// (0x0002b72e) popup_dyc_status_message_window_g1_ParamLimits

0x35c2,	// (0x0002b72e) popup_dyc_status_message_window_g1

0x35d6,	// (0x0002b742) popup_dyc_status_message_window_t1_ParamLimits

0x35d6,	// (0x0002b742) popup_dyc_status_message_window_t1

0x35eb,	// (0x0002b757) popup_dyc_status_message_window_t2_ParamLimits

0x35eb,	// (0x0002b757) popup_dyc_status_message_window_t2

0x3600,	// (0x0002b76c) popup_dyc_status_message_window_t3_ParamLimits

0x3600,	// (0x0002b76c) popup_dyc_status_message_window_t3

0x0002,

0xf31d,	// (0x00037489) popup_dyc_status_message_window_t_ParamLimits

0xf31d,	// (0x00037489) popup_dyc_status_message_window_t

0xe437,	// (0x000365a3) bg_heading_pane_cp01

0xeec2,	// (0x0003702e) heading_loc_req_pane_g1

0xeeca,	// (0x00037036) heading_loc_req_pane_g2

0xeed2,	// (0x0003703e) heading_loc_req_pane_g3

0x0002,

0xf324,	// (0x00037490) heading_loc_req_pane_g

0xeeda,	// (0x00037046) heading_loc_req_pane_t1

0xef61,	// (0x000370cd) bg_popup_sub_pane_cp01_ParamLimits

0xef61,	// (0x000370cd) bg_popup_sub_pane_cp01

0xef6f,	// (0x000370db) popup_cale_events_window_g1_ParamLimits

0xef6f,	// (0x000370db) popup_cale_events_window_g1

0xef8f,	// (0x000370fb) popup_cale_events_window_g2_ParamLimits

0xef8f,	// (0x000370fb) popup_cale_events_window_g2

0x0001,

0xf358,	// (0x000374c4) popup_cale_events_window_g_ParamLimits

0xf358,	// (0x000374c4) popup_cale_events_window_g

0xefaf,	// (0x0003711b) popup_cale_events_window_t1_ParamLimits

0xefaf,	// (0x0003711b) popup_cale_events_window_t1

0xefc1,	// (0x0003712d) popup_cale_events_window_t2_ParamLimits

0xefc1,	// (0x0003712d) popup_cale_events_window_t2

0xefff,	// (0x0003716b) popup_cale_events_window_t3_ParamLimits

0xefff,	// (0x0003716b) popup_cale_events_window_t3

0xf039,	// (0x000371a5) popup_cale_events_window_t4_ParamLimits

0xf039,	// (0x000371a5) popup_cale_events_window_t4

0x0003,

0xf35d,	// (0x000374c9) popup_cale_events_window_t_ParamLimits

0xf35d,	// (0x000374c9) popup_cale_events_window_t

0x368e,	// (0x0002b7fa) call_type_pane

0x369e,	// (0x0002b80a) popup_call_status_window_g1

0x36b2,	// (0x0002b81e) popup_call_status_window_g2

0x36c6,	// (0x0002b832) popup_call_status_window_g3

0x0002,

0xf366,	// (0x000374d2) popup_call_status_window_g

0xf06f,	// (0x000371db) call_type_pane_g1

0xf078,	// (0x000371e4) call_type_pane_g2

0x0001,

0xf36d,	// (0x000374d9) call_type_pane_g

0xe437,	// (0x000365a3) bg_popup_sub_pane_cp02

0xf081,	// (0x000371ed) listscroll_popup_wml_pane

0xf089,	// (0x000371f5) list_wml_pane

0xf093,	// (0x000371ff) scroll_pane_cp013

0xf09e,	// (0x0003720a) list_single_graphic_popup_wml_pane_ParamLimits

0xf09e,	// (0x0003720a) list_single_graphic_popup_wml_pane

0xe7ba,	// (0x00036926) list_single_graphic_popup_wml_pane_g1

0xf0b2,	// (0x0003721e) list_single_graphic_popup_wml_pane_g2

0x0001,

0xf372,	// (0x000374de) list_single_graphic_popup_wml_pane_g

0xf0ba,	// (0x00037226) list_single_graphic_popup_wml_pane_t1

0xf0d0,	// (0x0003723c) aid_call_pane

0xe68a,	// (0x000367f6) popup_clock_analogue_window_g1

0xe68a,	// (0x000367f6) popup_clock_analogue_window_g2

0xb733,	// (0x0003389f) popup_clock_analogue_window_g3

0xb733,	// (0x0003389f) popup_clock_analogue_window_g4

0xe7ba,	// (0x00036926) popup_clock_analogue_window_g5

0x0004,

0xf377,	// (0x000374e3) popup_clock_analogue_window_g

0xb73b,	// (0x000338a7) popup_clock_analogue_window_t1

0xb749,	// (0x000338b5) clock_digital_number_pane_ParamLimits

0xb749,	// (0x000338b5) clock_digital_number_pane

0xb755,	// (0x000338c1) clock_digital_number_pane_cp02_ParamLimits

0xb755,	// (0x000338c1) clock_digital_number_pane_cp02

0xb761,	// (0x000338cd) clock_digital_number_pane_cp03_ParamLimits

0xb761,	// (0x000338cd) clock_digital_number_pane_cp03

0xb76d,	// (0x000338d9) clock_digital_number_pane_cp04_ParamLimits

0xb76d,	// (0x000338d9) clock_digital_number_pane_cp04

0xb779,	// (0x000338e5) clock_digital_separator_pane_ParamLimits

0xb779,	// (0x000338e5) clock_digital_separator_pane

0xb785,	// (0x000338f1) popup_clock_digital_window_t1

0xe7ba,	// (0x00036926) clock_digital_number_pane_g1

0xe7ba,	// (0x00036926) clock_digital_number_pane_g2

0x0001,

0xf2e5,	// (0x00037451) clock_digital_number_pane_g

0xe7ba,	// (0x00036926) clock_digital_separator_pane_g1

0xe7ba,	// (0x00036926) clock_digital_separator_pane_g2

0x0001,

0xf2e5,	// (0x00037451) clock_digital_separator_pane_g

0xe437,	// (0x000365a3) bg_popup_window_pane_cp04

0x36d6,	// (0x0002b842) heading_pane_cp03

0x36de,	// (0x0002b84a) listscroll_popup_gms_pane

0x36e6,	// (0x0002b852) grid_large_graphic_popup_pane

0x36f0,	// (0x0002b85c) listscroll_popup_gms_pane_g1

0x36f8,	// (0x0002b864) listscroll_popup_gms_pane_g2

0x0001,

0xf382,	// (0x000374ee) listscroll_popup_gms_pane_g

0xeb8d,	// (0x00036cf9) scroll_pane_cp014

0x3700,	// (0x0002b86c) cell_large_graphic_popup_pane_ParamLimits

0x3700,	// (0x0002b86c) cell_large_graphic_popup_pane

0x3718,	// (0x0002b884) cell_large_graphic_popup_pane_g1_ParamLimits

0x3718,	// (0x0002b884) cell_large_graphic_popup_pane_g1

0x3724,	// (0x0002b890) cell_large_graphic_popup_pane_g2_ParamLimits

0x3724,	// (0x0002b890) cell_large_graphic_popup_pane_g2

0x3730,	// (0x0002b89c) cell_large_graphic_popup_pane_g3_ParamLimits

0x3730,	// (0x0002b89c) cell_large_graphic_popup_pane_g3

0x373d,	// (0x0002b8a9) cell_large_graphic_popup_pane_g4_ParamLimits

0x373d,	// (0x0002b8a9) cell_large_graphic_popup_pane_g4

0x0003,

0xf387,	// (0x000374f3) cell_large_graphic_popup_pane_g_ParamLimits

0xf387,	// (0x000374f3) cell_large_graphic_popup_pane_g

0x374d,	// (0x0002b8b9) grid_highlight_pane_cp010

0xe7ba,	// (0x00036926) bg_popup_call_pane_g1

0x3757,	// (0x0002b8c3) list_single_graphic_popup_conf_pane_ParamLimits

0x3757,	// (0x0002b8c3) list_single_graphic_popup_conf_pane

0x3769,	// (0x0002b8d5) list_highlight_pane_cp01

0x3772,	// (0x0002b8de) list_single_graphic_popup_conf_pane_g1

0x377a,	// (0x0002b8e6) list_single_graphic_popup_conf_pane_g2

0x0001,

0xf390,	// (0x000374fc) list_single_graphic_popup_conf_pane_g

0x3782,	// (0x0002b8ee) list_single_graphic_popup_conf_pane_t1

0x3790,	// (0x0002b8fc) linegrid_cams_pane_g1

0x3799,	// (0x0002b905) linegrid_cams_pane_g2

0xe906,	// (0x00036a72) linegrid_cams_pane_g3

0x37a2,	// (0x0002b90e) linegrid_cams_pane_g4

0x37ab,	// (0x0002b917) linegrid_cams_pane_g5

0x37b4,	// (0x0002b920) linegrid_cams_pane_g6

0xe90f,	// (0x00036a7b) linegrid_cams_pane_g7

0x0006,

0xf395,	// (0x00037501) linegrid_cams_pane_g

0x37bf,	// (0x0002b92b) popup_clock_analogue_window

0x37bf,	// (0x0002b92b) popup_clock_digital_window

0xe437,	// (0x000365a3) popup_phob_thumbnail_window

0xe7ba,	// (0x00036926) call_video_uplink_pane_g1

0x37c8,	// (0x0002b934) call_video_uplink_pane_g2

0x0001,

0xf3a4,	// (0x00037510) call_video_uplink_pane_g

0x37d0,	// (0x0002b93c) video_uplink_pane

0x37d8,	// (0x0002b944) mce_image_pane_g1

0x37e2,	// (0x0002b94e) mce_image_pane_g2

0x37ec,	// (0x0002b958) mce_image_pane_g3

0x37f6,	// (0x0002b962) mce_image_pane_g4

0x37fe,	// (0x0002b96a) mce_image_pane_g5

0x0004,

0xf3a9,	// (0x00037515) mce_image_pane_g

0x3806,	// (0x0002b972) control_top_pane_stacon_cp01_ParamLimits

0x3806,	// (0x0002b972) control_top_pane_stacon_cp01

0x381a,	// (0x0002b986) uni_indicator_pane_stacon_cp01_ParamLimits

0x381a,	// (0x0002b986) uni_indicator_pane_stacon_cp01

0x382b,	// (0x0002b997) bg_popup_sub_pane_cp03

0x3835,	// (0x0002b9a1) chi_dic_find_pane

0x383d,	// (0x0002b9a9) listscroll_chi_dic_pane

0x3846,	// (0x0002b9b2) main_pane_chidic_g1

0x3859,	// (0x0002b9c5) chi_dic_find_pane_t1

0x3867,	// (0x0002b9d3) find_chidic_pane

0x3870,	// (0x0002b9dc) chi_dic_list_pane_ParamLimits

0x3870,	// (0x0002b9dc) chi_dic_list_pane

0x3881,	// (0x0002b9ed) scroll_pane_cp020

0x3889,	// (0x0002b9f5) find_chidic_pane_t1

0xe437,	// (0x000365a3) input_focus_pane_cp06

0x3898,	// (0x0002ba04) list_chi_dic_pane_ParamLimits

0x3898,	// (0x0002ba04) list_chi_dic_pane

0x38aa,	// (0x0002ba16) list_chi_dic_pane_t1_ParamLimits

0x38aa,	// (0x0002ba16) list_chi_dic_pane_t1

0xe437,	// (0x000365a3) list_highlight_pane_cp020

0x38bd,	// (0x0002ba29) bg_cale_heading_pane_g1

0x38c5,	// (0x0002ba31) bg_cale_heading_pane_g2

0x38cd,	// (0x0002ba39) bg_cale_heading_pane_g3

0x38d5,	// (0x0002ba41) bg_cale_heading_pane_g4

0x38dd,	// (0x0002ba49) bg_cale_heading_pane_g5

0x38e5,	// (0x0002ba51) bg_cale_heading_pane_g6

0x38ed,	// (0x0002ba59) bg_cale_heading_pane_g7

0x38f5,	// (0x0002ba61) bg_cale_heading_pane_g8

0x38fd,	// (0x0002ba69) bg_cale_heading_pane_g9

0x0008,

0xf3b4,	// (0x00037520) bg_cale_heading_pane_g

0x38bd,	// (0x0002ba29) bg_cale_side_pane_g1

0x3905,	// (0x0002ba71) bg_cale_side_pane_g2

0x390f,	// (0x0002ba7b) bg_cale_side_pane_g3

0x3919,	// (0x0002ba85) bg_cale_side_pane_g4

0x3923,	// (0x0002ba8f) bg_cale_side_pane_g5

0x392d,	// (0x0002ba99) bg_cale_side_pane_g6

0x3937,	// (0x0002baa3) bg_cale_side_pane_g7

0x3941,	// (0x0002baad) bg_cale_side_pane_g8

0x3949,	// (0x0002bab5) bg_cale_side_pane_g9

0x0008,

0xf3c7,	// (0x00037533) bg_cale_side_pane_g

0x3951,	// (0x0002babd) popup_call_status_window_ParamLimits

0x3951,	// (0x0002babd) popup_call_status_window

0x399e,	// (0x0002bb0a) stacon_top_pane

0x39a6,	// (0x0002bb12) status_pane_ParamLimits

0x39a6,	// (0x0002bb12) status_pane

0x39bb,	// (0x0002bb27) status_small_pane

0x39c3,	// (0x0002bb2f) control_pane

0xe437,	// (0x000365a3) stacon_bottom_pane

0x39cb,	// (0x0002bb37) list_single_mce_smart_pane_t1_ParamLimits

0x39cb,	// (0x0002bb37) list_single_mce_smart_pane_t1

0x39de,	// (0x0002bb4a) list_single_mce_smart_pane_t2_ParamLimits

0x39de,	// (0x0002bb4a) list_single_mce_smart_pane_t2

0x0001,

0xf3da,	// (0x00037546) list_single_mce_smart_pane_t_ParamLimits

0xf3da,	// (0x00037546) list_single_mce_smart_pane_t

0x39fd,	// (0x0002bb69) compass_pane

0x3a08,	// (0x0002bb74) main_location2_pane_t1

0x3a1e,	// (0x0002bb8a) main_location2_pane_t2

0x3a34,	// (0x0002bba0) main_location2_pane_t3

0x0003,

0xf3df,	// (0x0003754b) main_location2_pane_t

0x3a82,	// (0x0002bbee) compass_pane_g1_ParamLimits

0x3a82,	// (0x0002bbee) compass_pane_g1

0x3a8e,	// (0x0002bbfa) compass_pane_t1

0x3a9d,	// (0x0002bc09) compass_pane_t2

0x0005,

0xf3e8,	// (0x00037554) compass_pane_t

0x3ae8,	// (0x0002bc54) text_secondary_cp61

0x3b67,	// (0x0002bcd3) navi_pane_cams_g5

0x3be3,	// (0x0002bd4f) navi_pane_im_t1

0x3bf1,	// (0x0002bd5d) navi_pane_mp_g1_ParamLimits

0x3bf1,	// (0x0002bd5d) navi_pane_mp_g1

0x3c05,	// (0x0002bd71) navi_pane_mp_g2_ParamLimits

0x3c05,	// (0x0002bd71) navi_pane_mp_g2

0x3c11,	// (0x0002bd7d) navi_pane_mp_g3_ParamLimits

0x3c11,	// (0x0002bd7d) navi_pane_mp_g3

0x0002,

0xf3fc,	// (0x00037568) navi_pane_mp_g_ParamLimits

0xf3fc,	// (0x00037568) navi_pane_mp_g

0x3c1d,	// (0x0002bd89) navi_pane_mp_t1

0x3c2b,	// (0x0002bd97) navi_pane_mp_t2

0x0002,

0xf403,	// (0x0003756f) navi_pane_mp_t

0x3cd8,	// (0x0002be44) navi_pane_vt_g1

0x3c1d,	// (0x0002bd89) navi_pane_vt_t1

0x3ce0,	// (0x0002be4c) navi_slider_pane

0x3ce8,	// (0x0002be54) zooming_pane

0x3cf0,	// (0x0002be5c) navi_slider_pane_g1

0xb7a2,	// (0x0003390e) navi_slider_pane_g2

0x0006,

0xf40a,	// (0x00037576) navi_slider_pane_g

0x3d14,	// (0x0002be80) aid_levels_zoom

0x3d1c,	// (0x0002be88) zooming_pane_g1

0x3d24,	// (0x0002be90) zooming_pane_g2

0x3d24,	// (0x0002be90) zooming_pane_g3

0x0002,

0xf419,	// (0x00037585) zooming_pane_g

0x3d2c,	// (0x0002be98) level_10_zoom

0x3d35,	// (0x0002bea1) level_11_zoom

0x3d3e,	// (0x0002beaa) level_1_zoom

0x3d47,	// (0x0002beb3) level_2_zoom

0x3d50,	// (0x0002bebc) level_3_zoom

0x3d59,	// (0x0002bec5) level_4_zoom

0x3d62,	// (0x0002bece) level_5_zoom

0x3d6b,	// (0x0002bed7) level_6_zoom

0x3d74,	// (0x0002bee0) level_7_zoom

0x3d7d,	// (0x0002bee9) level_8_zoom

0x3d86,	// (0x0002bef2) level_9_zoom

0x3d97,	// (0x0002bf03) popup_phob_thumbnail_window_g1

0x3d9f,	// (0x0002bf0b) popup_phob_thumbnail_window_g2

0x0001,

0xf420,	// (0x0003758c) popup_phob_thumbnail_window_g

0x5dbf,	// (0x0002df2b) level_1_location

0x5dc7,	// (0x0002df33) level_2_location

0x5dcf,	// (0x0002df3b) level_3_location

0x5dd7,	// (0x0002df43) level_4_location

0x3ce8,	// (0x0002be54) level_5_location

0x3da7,	// (0x0002bf13) mce_icon_pane_g1

0x3daf,	// (0x0002bf1b) mce_icon_pane_g2

0x0001,

0xf425,	// (0x00037591) mce_icon_pane_g

0x3db7,	// (0x0002bf23) main_mup_pane_g1_ParamLimits

0x3db7,	// (0x0002bf23) main_mup_pane_g1

0x3dcd,	// (0x0002bf39) main_mup_pane_g2_ParamLimits

0x3dcd,	// (0x0002bf39) main_mup_pane_g2

0x3de5,	// (0x0002bf51) main_mup_pane_g3_ParamLimits

0x3de5,	// (0x0002bf51) main_mup_pane_g3

0x3dfd,	// (0x0002bf69) main_mup_pane_g4_ParamLimits

0x3dfd,	// (0x0002bf69) main_mup_pane_g4

0x3e0f,	// (0x0002bf7b) main_mup_pane_g5_ParamLimits

0x3e0f,	// (0x0002bf7b) main_mup_pane_g5

0x3e2b,	// (0x0002bf97) main_mup_pane_g6_ParamLimits

0x3e2b,	// (0x0002bf97) main_mup_pane_g6

0x3e45,	// (0x0002bfb1) main_mup_pane_g7_ParamLimits

0x3e45,	// (0x0002bfb1) main_mup_pane_g7

0x3e63,	// (0x0002bfcf) main_mup_pane_g8_ParamLimits

0x3e63,	// (0x0002bfcf) main_mup_pane_g8

0x3e81,	// (0x0002bfed) main_mup_pane_g9_ParamLimits

0x3e81,	// (0x0002bfed) main_mup_pane_g9

0x3e9d,	// (0x0002c009) main_mup_pane_g10_ParamLimits

0x3e9d,	// (0x0002c009) main_mup_pane_g10

0x3ebb,	// (0x0002c027) main_mup_pane_g11_ParamLimits

0x3ebb,	// (0x0002c027) main_mup_pane_g11

0x3ed5,	// (0x0002c041) main_mup_pane_g12_ParamLimits

0x3ed5,	// (0x0002c041) main_mup_pane_g12

0x3eeb,	// (0x0002c057) main_mup_pane_g13_ParamLimits

0x3eeb,	// (0x0002c057) main_mup_pane_g13

0x000c,

0xf42a,	// (0x00037596) main_mup_pane_g_ParamLimits

0xf42a,	// (0x00037596) main_mup_pane_g

0x3eff,	// (0x0002c06b) main_mup_pane_t1_ParamLimits

0x3eff,	// (0x0002c06b) main_mup_pane_t1

0x3f1b,	// (0x0002c087) main_mup_pane_t2_ParamLimits

0x3f1b,	// (0x0002c087) main_mup_pane_t2

0x3f33,	// (0x0002c09f) main_mup_pane_t3_ParamLimits

0x3f33,	// (0x0002c09f) main_mup_pane_t3

0x3f4b,	// (0x0002c0b7) main_mup_pane_t4_ParamLimits

0x3f4b,	// (0x0002c0b7) main_mup_pane_t4

0x3f69,	// (0x0002c0d5) main_mup_pane_t5_ParamLimits

0x3f69,	// (0x0002c0d5) main_mup_pane_t5

0x3f7e,	// (0x0002c0ea) main_mup_pane_t6_ParamLimits

0x3f7e,	// (0x0002c0ea) main_mup_pane_t6

0x0005,

0xf445,	// (0x000375b1) main_mup_pane_t_ParamLimits

0xf445,	// (0x000375b1) main_mup_pane_t

0x3f90,	// (0x0002c0fc) mup_progress_pane_ParamLimits

0x3f90,	// (0x0002c0fc) mup_progress_pane

0x3f9c,	// (0x0002c108) mup_visualizer_pane_ParamLimits

0x3f9c,	// (0x0002c108) mup_visualizer_pane

0x3fce,	// (0x0002c13a) mup_volume_pane_ParamLimits

0x3fce,	// (0x0002c13a) mup_volume_pane

0x3fec,	// (0x0002c158) mup_visualizer_pane_g1_ParamLimits

0x3fec,	// (0x0002c158) mup_visualizer_pane_g1

0x3fec,	// (0x0002c158) mup_visualizer_pane_g2_ParamLimits

0x3fec,	// (0x0002c158) mup_visualizer_pane_g2

0x3a82,	// (0x0002bbee) mup_visualizer_pane_g3_ParamLimits

0x3a82,	// (0x0002bbee) mup_visualizer_pane_g3

0x0002,

0xf452,	// (0x000375be) mup_visualizer_pane_g_ParamLimits

0xf452,	// (0x000375be) mup_visualizer_pane_g

0xe7ba,	// (0x00036926) mup_volume_pane_g1

0x4002,	// (0x0002c16e) mup_volume_pane_g2

0x0001,

0xf459,	// (0x000375c5) mup_volume_pane_g

0xe7ba,	// (0x00036926) mup_progress_pane_g1

0x400b,	// (0x0002c177) mup_progress_pane_g2

0x4014,	// (0x0002c180) mup_progress_pane_g3

0x0002,

0xf45e,	// (0x000375ca) mup_progress_pane_g

0xe437,	// (0x000365a3) bg_popup_window_pane_cp05

0x401d,	// (0x0002c189) heading_pane_cp02_ParamLimits

0x401d,	// (0x0002c189) heading_pane_cp02

0x4039,	// (0x0002c1a5) list_popup_blid_pane

0x4041,	// (0x0002c1ad) list_blid_sat_info_pane_ParamLimits

0x4041,	// (0x0002c1ad) list_blid_sat_info_pane

0x4054,	// (0x0002c1c0) list_blid_sat_info_pane_g1

0x405c,	// (0x0002c1c8) list_blid_sat_info_pane_t1

0x4176,	// (0x0002c2e2) mup_equalizer_pane_ParamLimits

0x4176,	// (0x0002c2e2) mup_equalizer_pane

0x4197,	// (0x0002c303) mup_equalizer_pane_cp1_ParamLimits

0x4197,	// (0x0002c303) mup_equalizer_pane_cp1

0x41b8,	// (0x0002c324) mup_equalizer_pane_cp2_ParamLimits

0x41b8,	// (0x0002c324) mup_equalizer_pane_cp2

0x41dd,	// (0x0002c349) mup_equalizer_pane_cp3_ParamLimits

0x41dd,	// (0x0002c349) mup_equalizer_pane_cp3

0x4206,	// (0x0002c372) mup_equalizer_pane_cp4_ParamLimits

0x4206,	// (0x0002c372) mup_equalizer_pane_cp4

0x422f,	// (0x0002c39b) mup_equalizer_pane_cp5

0x4247,	// (0x0002c3b3) mup_equalizer_pane_cp6

0x425f,	// (0x0002c3cb) mup_equalizer_pane_cp7

0x5bad,	// (0x0002dd19) bg_popup_call_poc_act_pane_g9

0x5bb5,	// (0x0002dd21) bg_popup_call_poc_act_pane_g10

0x5bbd,	// (0x0002dd29) bg_popup_call_poc_act_pane_g11

0x000a,

0xe692,	// (0x000367fe) mup_scale_pane

0xe7ba,	// (0x00036926) mup_scale_pane_g1

0x4277,	// (0x0002c3e3) mup_scale_pane_g2

0x0006,

0xf47a,	// (0x000375e6) mup_scale_pane_g

0x42ad,	// (0x0002c419) msg_data_pane

0x42b5,	// (0x0002c421) scroll_pane_cp017

0x42bd,	// (0x0002c429) bg_list_pane_cp04_ParamLimits

0x42bd,	// (0x0002c429) bg_list_pane_cp04

0x42e5,	// (0x0002c451) msg_data_pane_g1

0x42ed,	// (0x0002c459) msg_data_pane_g2

0x42f7,	// (0x0002c463) msg_data_pane_g3

0x4301,	// (0x0002c46d) msg_data_pane_g4

0x4309,	// (0x0002c475) msg_data_pane_g5

0x4311,	// (0x0002c47d) msg_data_pane_g6

0x4319,	// (0x0002c485) msg_data_pane_g7

0x0006,

0xf489,	// (0x000375f5) msg_data_pane_g

0x4321,	// (0x0002c48d) msg_text_pane_ParamLimits

0x4321,	// (0x0002c48d) msg_text_pane

0x4350,	// (0x0002c4bc) qrid_highlight_pane_cp011_ParamLimits

0x4350,	// (0x0002c4bc) qrid_highlight_pane_cp011

0xe437,	// (0x000365a3) msg_body_pane

0xe437,	// (0x000365a3) msg_header_pane

0x436f,	// (0x0002c4db) input_focus_pane_cp07

0x4392,	// (0x0002c4fe) msg_header_pane_t1_ParamLimits

0x4392,	// (0x0002c4fe) msg_header_pane_t1

0x43a6,	// (0x0002c512) msg_header_pane_t2_ParamLimits

0x43a6,	// (0x0002c512) msg_header_pane_t2

0x0001,

0xf49d,	// (0x00037609) msg_header_pane_t_ParamLimits

0xf49d,	// (0x00037609) msg_header_pane_t

0x43b8,	// (0x0002c524) msg_body_pane_g1

0x43c0,	// (0x0002c52c) msg_body_pane_t1_ParamLimits

0x43c0,	// (0x0002c52c) msg_body_pane_t1

0x43f1,	// (0x0002c55d) msg_body_pane_t2_ParamLimits

0x43f1,	// (0x0002c55d) msg_body_pane_t2

0x4403,	// (0x0002c56f) msg_body_pane_t3_ParamLimits

0x4403,	// (0x0002c56f) msg_body_pane_t3

0x0002,

0xf4a2,	// (0x0003760e) msg_body_pane_t_ParamLimits

0xf4a2,	// (0x0003760e) msg_body_pane_t

0x0b5a,	// (0x00028cc6) main_viewer_pane_g1_ParamLimits

0x0b5a,	// (0x00028cc6) main_viewer_pane_g1

0x0b68,	// (0x00028cd4) main_viewer_pane_g2_ParamLimits

0x0b68,	// (0x00028cd4) main_viewer_pane_g2

0x4433,	// (0x0002c59f) main_viewer_pane_g3_ParamLimits

0x4433,	// (0x0002c59f) main_viewer_pane_g3

0x4442,	// (0x0002c5ae) main_viewer_pane_g4_ParamLimits

0x4442,	// (0x0002c5ae) main_viewer_pane_g4

0xb7cc,	// (0x00033938) main_viewer_pane_g5_ParamLimits

0xb7cc,	// (0x00033938) main_viewer_pane_g5

0xb7cc,	// (0x00033938) main_viewer_pane_g7_ParamLimits

0xb7cc,	// (0x00033938) main_viewer_pane_g7

0xb7de,	// (0x0003394a) main_viewer_pane_g8_ParamLimits

0xb7de,	// (0x0003394a) main_viewer_pane_g8

0x0007,

0xf4b2,	// (0x0003761e) main_viewer_pane_g_ParamLimits

0xf4b2,	// (0x0003761e) main_viewer_pane_g

0x4451,	// (0x0002c5bd) viewer_content_pane_ParamLimits

0x4451,	// (0x0002c5bd) viewer_content_pane

0x448e,	// (0x0002c5fa) main_postcard_pane_g1_ParamLimits

0x448e,	// (0x0002c5fa) main_postcard_pane_g1

0x44a4,	// (0x0002c610) main_postcard_pane_g2_ParamLimits

0x44a4,	// (0x0002c610) main_postcard_pane_g2

0x44ba,	// (0x0002c626) main_postcard_pane_g3_ParamLimits

0x44ba,	// (0x0002c626) main_postcard_pane_g3

0x0005,

0xf4c3,	// (0x0003762f) main_postcard_pane_g_ParamLimits

0xf4c3,	// (0x0003762f) main_postcard_pane_g

0x44d1,	// (0x0002c63d) main_postcard_pane_g4

0x6148,	// (0x0002e2b4) smil_status_volume_pane_g2

0x4514,	// (0x0002c680) postcard_pane_ParamLimits

0x4514,	// (0x0002c680) postcard_pane

0x4564,	// (0x0002c6d0) postcard_pane_g1_ParamLimits

0x4564,	// (0x0002c6d0) postcard_pane_g1

0x4572,	// (0x0002c6de) postcard_pane_g2_ParamLimits

0x4572,	// (0x0002c6de) postcard_pane_g2

0x457e,	// (0x0002c6ea) postcard_pane_g3_ParamLimits

0x457e,	// (0x0002c6ea) postcard_pane_g3

0x458a,	// (0x0002c6f6) postcard_pane_g4_ParamLimits

0x458a,	// (0x0002c6f6) postcard_pane_g4

0x4598,	// (0x0002c704) postcard_pane_g5_ParamLimits

0x4598,	// (0x0002c704) postcard_pane_g5

0x45aa,	// (0x0002c716) postcard_pane_g6_ParamLimits

0x45aa,	// (0x0002c716) postcard_pane_g6

0x4564,	// (0x0002c6d0) postcard_pane_g7_ParamLimits

0x4564,	// (0x0002c6d0) postcard_pane_g7

0x0006,

0xf4d0,	// (0x0003763c) postcard_pane_g_ParamLimits

0xf4d0,	// (0x0003763c) postcard_pane_g

0x45c2,	// (0x0002c72e) main_mp2_pane_g1_ParamLimits

0x45c2,	// (0x0002c72e) main_mp2_pane_g1

0x45d0,	// (0x0002c73c) main_mp2_pane_g2_ParamLimits

0x45d0,	// (0x0002c73c) main_mp2_pane_g2

0x45dc,	// (0x0002c748) main_mp2_pane_g3_ParamLimits

0x45dc,	// (0x0002c748) main_mp2_pane_g3

0x0002,

0xf4df,	// (0x0003764b) main_mp2_pane_g_ParamLimits

0xf4df,	// (0x0003764b) main_mp2_pane_g

0x45e8,	// (0x0002c754) main_mp2_pane_t1_ParamLimits

0x45e8,	// (0x0002c754) main_mp2_pane_t1

0x45ff,	// (0x0002c76b) main_mp2_pane_t2_ParamLimits

0x45ff,	// (0x0002c76b) main_mp2_pane_t2

0x4613,	// (0x0002c77f) main_mp2_pane_t3_ParamLimits

0x4613,	// (0x0002c77f) main_mp2_pane_t3

0x0002,

0xf4e6,	// (0x00037652) main_mp2_pane_t_ParamLimits

0xf4e6,	// (0x00037652) main_mp2_pane_t

0x4625,	// (0x0002c791) pec_content_pane_ParamLimits

0x4625,	// (0x0002c791) pec_content_pane

0xeb8d,	// (0x00036cf9) scroll_pane_cp015

0x4637,	// (0x0002c7a3) pec_attribute_pane_ParamLimits

0x4637,	// (0x0002c7a3) pec_attribute_pane

0x4647,	// (0x0002c7b3) pec_content_pane_g1_ParamLimits

0x4647,	// (0x0002c7b3) pec_content_pane_g1

0x4653,	// (0x0002c7bf) pec_content_pane_t1_ParamLimits

0x4653,	// (0x0002c7bf) pec_content_pane_t1

0x4665,	// (0x0002c7d1) pec_content_pane_t2_ParamLimits

0x4665,	// (0x0002c7d1) pec_content_pane_t2

0x0001,

0xf4ed,	// (0x00037659) pec_content_pane_t_ParamLimits

0xf4ed,	// (0x00037659) pec_content_pane_t

0x4677,	// (0x0002c7e3) list_single_graphic_pane_cp01_ParamLimits

0x4677,	// (0x0002c7e3) list_single_graphic_pane_cp01

0xe692,	// (0x000367fe) bg_popup_sub_pane_cp04

0x4691,	// (0x0002c7fd) popup_mup_playback_window_g1

0x469d,	// (0x0002c809) popup_mup_playback_window_t1

0x46b2,	// (0x0002c81e) popup_mup_playback_window_t2

0x0001,

0xf4f2,	// (0x0003765e) popup_mup_playback_window_t

0x4707,	// (0x0002c873) main_image_pane_g1_ParamLimits

0x4707,	// (0x0002c873) main_image_pane_g1

0x47e4,	// (0x0002c950) scroll_pane_cp018_ParamLimits

0x47e4,	// (0x0002c950) scroll_pane_cp018

0x47fc,	// (0x0002c968) scroll_pane_cp016_ParamLimits

0x47fc,	// (0x0002c968) scroll_pane_cp016

0x4830,	// (0x0002c99c) smil2_image_pane_ParamLimits

0x4830,	// (0x0002c99c) smil2_image_pane

0x4866,	// (0x0002c9d2) smil2_root_pane_ParamLimits

0x4866,	// (0x0002c9d2) smil2_root_pane

0x489e,	// (0x0002ca0a) smil2_text_pane_ParamLimits

0x489e,	// (0x0002ca0a) smil2_text_pane

0xe437,	// (0x000365a3) bg_list_pane_cp06

0x4936,	// (0x0002caa2) grid_radio_pane

0xe437,	// (0x000365a3) bg_popup_window_pane_cp06

0x4940,	// (0x0002caac) main_fmradio_pane_t1

0x36d6,	// (0x0002b842) heading_pane_cp04

0x494e,	// (0x0002caba) main_fmradio_pane_t2

0x5c50,	// (0x0002ddbc) popup_cale_lunar_info_window_g1

0x495c,	// (0x0002cac8) main_fmradio_pane_t3

0x5c58,	// (0x0002ddc4) popup_cale_lunar_info_window_g2

0x496c,	// (0x0002cad8) main_fmradio_pane_t4

0x0001,

0x497a,	// (0x0002cae6) main_fmradio_pane_t5

0x0004,

0xf5cd,	// (0x00037739) popup_cale_lunar_info_window_g

0xf507,	// (0x00037673) main_fmradio_pane_t

0x4988,	// (0x0002caf4) wait_bar_pane_cp03

0x4990,	// (0x0002cafc) cell_fmradio_pane_ParamLimits

0x4990,	// (0x0002cafc) cell_fmradio_pane

0x4564,	// (0x0002c6d0) cell_fmradio_pane_g1_ParamLimits

0x4564,	// (0x0002c6d0) cell_fmradio_pane_g1

0xe437,	// (0x000365a3) grid_highlight_pane_cp011

0x49a5,	// (0x0002cb11) poc_content_pane_ParamLimits

0x49a5,	// (0x0002cb11) poc_content_pane

0x49b7,	// (0x0002cb23) scroll_pane_cp019

0x49bf,	// (0x0002cb2b) popup_call_poc_act_window_ParamLimits

0x49bf,	// (0x0002cb2b) popup_call_poc_act_window

0x49e3,	// (0x0002cb4f) popup_call_poc_inact_window_ParamLimits

0x49e3,	// (0x0002cb4f) popup_call_poc_inact_window

0xf5a4,	// (0x00037710) bg_popup_call_poc_act_pane_g

0x5b35,	// (0x0002dca1) bg_popup_call_poc_inact_pane_g1

0x5b3d,	// (0x0002dca9) bg_popup_call_poc_inact_pane_g2

0x49fc,	// (0x0002cb68) popup_call_poc_act_window_g2

0x5b45,	// (0x0002dcb1) bg_popup_call_poc_inact_pane_g3

0x5b4d,	// (0x0002dcb9) bg_popup_call_poc_inact_pane_g4

0x5b55,	// (0x0002dcc1) bg_popup_call_poc_inact_pane_g5

0x4a04,	// (0x0002cb70) popup_call_poc_act_window_t1_ParamLimits

0x4a04,	// (0x0002cb70) popup_call_poc_act_window_t1

0x4a2c,	// (0x0002cb98) popup_call_poc_act_window_t2_ParamLimits

0x4a2c,	// (0x0002cb98) popup_call_poc_act_window_t2

0x4a54,	// (0x0002cbc0) popup_call_poc_act_window_t3_ParamLimits

0x4a54,	// (0x0002cbc0) popup_call_poc_act_window_t3

0x4a7c,	// (0x0002cbe8) popup_call_poc_act_window_t4_ParamLimits

0x4a7c,	// (0x0002cbe8) popup_call_poc_act_window_t4

0x0003,

0xf512,	// (0x0003767e) popup_call_poc_act_window_t_ParamLimits

0xf512,	// (0x0003767e) popup_call_poc_act_window_t

0x5b5d,	// (0x0002dcc9) bg_popup_call_poc_inact_pane_g6

0x5b65,	// (0x0002dcd1) bg_popup_call_poc_inact_pane_g7

0x5b6d,	// (0x0002dcd9) bg_popup_call_poc_inact_pane_g8

0x4a8e,	// (0x0002cbfa) popup_call_poc_inact_window_g2

0x5b75,	// (0x0002dce1) bg_popup_call_poc_inact_pane_g9

0x0008,

0xf591,	// (0x000376fd) bg_popup_call_poc_inact_pane_g

0x4a96,	// (0x0002cc02) popup_call_poc_inact_window_t1_ParamLimits

0x4a96,	// (0x0002cc02) popup_call_poc_inact_window_t1

0x4aab,	// (0x0002cc17) popup_call_poc_inact_window_t2_ParamLimits

0x4aab,	// (0x0002cc17) popup_call_poc_inact_window_t2

0x4ac0,	// (0x0002cc2c) popup_call_poc_inact_window_t3_ParamLimits

0x4ac0,	// (0x0002cc2c) popup_call_poc_inact_window_t3

0x0002,

0xf51b,	// (0x00037687) popup_call_poc_inact_window_t_ParamLimits

0xf51b,	// (0x00037687) popup_call_poc_inact_window_t

0x5fde,	// (0x0002e14a) context_pane_ParamLimits

0x6041,	// (0x0002e1ad) signal_pane_ParamLimits

0x3ce8,	// (0x0002be54) main_call2_pane

0xb827,	// (0x00033993) popup_phob_thumbnail2_window_ParamLimits

0xb827,	// (0x00033993) popup_phob_thumbnail2_window

0xb7b4,	// (0x00033920) aid_hotspot_pointer_arrow_pane

0xb7bc,	// (0x00033928) aid_hotspot_pointer_hand_pane

0x5d87,	// (0x0002def3) phob_pre_status_pane_g5

0x24b2,	// (0x0002a61e) cams_zoom_pane_ParamLimits

0x24c1,	// (0x0002a62d) image_vga_pane_ParamLimits

0x24db,	// (0x0002a647) main_camera_pane_g1_ParamLimits

0x24ed,	// (0x0002a659) main_camera_pane_g2_ParamLimits

0x24fd,	// (0x0002a669) main_camera_pane_g3_ParamLimits

0x2511,	// (0x0002a67d) main_camera_pane_g4_ParamLimits

0x2525,	// (0x0002a691) main_camera_pane_g5_ParamLimits

0x2539,	// (0x0002a6a5) main_camera_pane_g6_ParamLimits

0x254d,	// (0x0002a6b9) main_camera_pane_g7_ParamLimits

0xf21a,	// (0x00037386) main_camera_pane_g_ParamLimits

0x2561,	// (0x0002a6cd) main_camera_pane_t1_ParamLimits

0x2577,	// (0x0002a6e3) main_camera_pane_t2_ParamLimits

0xf22b,	// (0x00037397) main_camera_pane_t_ParamLimits

0xe692,	// (0x000367fe) bg_popup_preview_window_pane_cp01_ParamLimits

0xe692,	// (0x000367fe) bg_popup_preview_window_pane_cp01

0x4ad5,	// (0x0002cc41) popup_phob_thumbnail2_window_g1_ParamLimits

0x4ad5,	// (0x0002cc41) popup_phob_thumbnail2_window_g1

0xe437,	// (0x000365a3) call2_cli_visual_pane

0x4afc,	// (0x0002cc68) popup_call2_audio_conf_window_ParamLimits

0x4afc,	// (0x0002cc68) popup_call2_audio_conf_window

0x4b24,	// (0x0002cc90) popup_call2_audio_first_window_ParamLimits

0x4b24,	// (0x0002cc90) popup_call2_audio_first_window

0x4bba,	// (0x0002cd26) popup_call2_audio_in_window_ParamLimits

0x4bba,	// (0x0002cd26) popup_call2_audio_in_window

0x4c06,	// (0x0002cd72) popup_call2_audio_out_window_ParamLimits

0x4c06,	// (0x0002cd72) popup_call2_audio_out_window

0x4c78,	// (0x0002cde4) popup_call2_audio_second_window_ParamLimits

0x4c78,	// (0x0002cde4) popup_call2_audio_second_window

0x4cde,	// (0x0002ce4a) popup_call2_audio_wait_window_ParamLimits

0x4cde,	// (0x0002ce4a) popup_call2_audio_wait_window

0xe437,	// (0x000365a3) bg_popup_call2_act_pane_cp03

0xe674,	// (0x000367e0) list_conf_pane_cp

0x4d18,	// (0x0002ce84) popup_call2_audio_conf_window_t1

0x4d26,	// (0x0002ce92) list_single_graphic_popup_conf2_pane_ParamLimits

0x4d26,	// (0x0002ce92) list_single_graphic_popup_conf2_pane

0x3769,	// (0x0002b8d5) list_highlight_pane_cp04

0x4d39,	// (0x0002cea5) list_single_graphic_popup_conf2_pane_g1

0x377a,	// (0x0002b8e6) list_single_graphic_popup_conf2_pane_g2

0x0001,

0xf522,	// (0x0003768e) list_single_graphic_popup_conf2_pane_g

0x4d43,	// (0x0002ceaf) list_single_graphic_popup_conf2_pane_t1

0x4d51,	// (0x0002cebd) bg_popup_call2_act_pane_cp01_ParamLimits

0x4d51,	// (0x0002cebd) bg_popup_call2_act_pane_cp01

0x4ddb,	// (0x0002cf47) call_type_pane_cp05_ParamLimits

0x4ddb,	// (0x0002cf47) call_type_pane_cp05

0x4e2f,	// (0x0002cf9b) popup_call2_audio_second_window_g1_ParamLimits

0x4e2f,	// (0x0002cf9b) popup_call2_audio_second_window_g1

0x4e83,	// (0x0002cfef) popup_call2_audio_second_window_g2_ParamLimits

0x4e83,	// (0x0002cfef) popup_call2_audio_second_window_g2

0x0002,

0xf527,	// (0x00037693) popup_call2_audio_second_window_g_ParamLimits

0xf527,	// (0x00037693) popup_call2_audio_second_window_g

0x4ee8,	// (0x0002d054) popup_call2_audio_second_window_t1_ParamLimits

0x4ee8,	// (0x0002d054) popup_call2_audio_second_window_t1

0x4fa3,	// (0x0002d10f) popup_call2_audio_second_window_t2_ParamLimits

0x4fa3,	// (0x0002d10f) popup_call2_audio_second_window_t2

0x4ff6,	// (0x0002d162) popup_call2_audio_second_window_t3_ParamLimits

0x4ff6,	// (0x0002d162) popup_call2_audio_second_window_t3

0x0003,

0xf52e,	// (0x0003769a) popup_call2_audio_second_window_t_ParamLimits

0xf52e,	// (0x0003769a) popup_call2_audio_second_window_t

0xe437,	// (0x000365a3) bg_popup_call2_in_pane_cp02

0xe441,	// (0x000365ad) call_type_pane_cp04

0xe449,	// (0x000365b5) popup_call2_audio_wait_window_g1

0xe451,	// (0x000365bd) popup_call2_audio_wait_window_g2

0x0001,

0xf107,	// (0x00037273) popup_call2_audio_wait_window_g

0xe459,	// (0x000365c5) popup_call2_audio_wait_window_t3

0x50e9,	// (0x0002d255) bg_popup_call2_act_pane_ParamLimits

0x50e9,	// (0x0002d255) bg_popup_call2_act_pane

0x51a9,	// (0x0002d315) call_type_pane_cp03_ParamLimits

0x51a9,	// (0x0002d315) call_type_pane_cp03

0x520d,	// (0x0002d379) popup_call2_audio_first_window_g1_ParamLimits

0x520d,	// (0x0002d379) popup_call2_audio_first_window_g1

0x527d,	// (0x0002d3e9) popup_call2_audio_first_window_g2_ParamLimits

0x527d,	// (0x0002d3e9) popup_call2_audio_first_window_g2

0x3fec,	// (0x0002c158) popup_call2_audio_first_window_g3_ParamLimits

0x3fec,	// (0x0002c158) popup_call2_audio_first_window_g3

0x0004,

0xf537,	// (0x000376a3) popup_call2_audio_first_window_g_ParamLimits

0xf537,	// (0x000376a3) popup_call2_audio_first_window_g

0x535b,	// (0x0002d4c7) popup_call2_audio_first_window_t1_ParamLimits

0x535b,	// (0x0002d4c7) popup_call2_audio_first_window_t1

0x545e,	// (0x0002d5ca) popup_call2_audio_first_window_t4_ParamLimits

0x545e,	// (0x0002d5ca) popup_call2_audio_first_window_t4

0x5541,	// (0x0002d6ad) popup_call2_audio_first_window_t5_ParamLimits

0x5541,	// (0x0002d6ad) popup_call2_audio_first_window_t5

0x0003,

0xf542,	// (0x000376ae) popup_call2_audio_first_window_t_ParamLimits

0xf542,	// (0x000376ae) popup_call2_audio_first_window_t

0xe68a,	// (0x000367f6) bg_popup_call2_act_pane_g1

0x5c62,	// (0x0002ddce) popup_cale_lunar_info_window_t1

0x5c70,	// (0x0002dddc) popup_cale_lunar_info_window_t2

0x5c7e,	// (0x0002ddea) popup_cale_lunar_info_window_t3

0xe437,	// (0x000365a3) bg_popup_call2_bubble_pane

0x5642,	// (0x0002d7ae) bg_popup_call2_in_pane_cp01_ParamLimits

0x5642,	// (0x0002d7ae) bg_popup_call2_in_pane_cp01

0xe113,	// (0x0003627f) call_type_pane_cp02

0x568a,	// (0x0002d7f6) popup_call2_audio_out_window_g1_ParamLimits

0x568a,	// (0x0002d7f6) popup_call2_audio_out_window_g1

0x56b6,	// (0x0002d822) popup_call2_audio_out_window_g2_ParamLimits

0x56b6,	// (0x0002d822) popup_call2_audio_out_window_g2

0x56de,	// (0x0002d84a) popup_call2_audio_out_window_g3_ParamLimits

0x56de,	// (0x0002d84a) popup_call2_audio_out_window_g3

0x0003,

0xf54b,	// (0x000376b7) popup_call2_audio_out_window_g_ParamLimits

0xf54b,	// (0x000376b7) popup_call2_audio_out_window_g

0x5719,	// (0x0002d885) popup_call2_audio_out_window_t1_ParamLimits

0x5719,	// (0x0002d885) popup_call2_audio_out_window_t1

0x5778,	// (0x0002d8e4) popup_call2_audio_out_window_t2_ParamLimits

0x5778,	// (0x0002d8e4) popup_call2_audio_out_window_t2

0x57cc,	// (0x0002d938) popup_call2_audio_out_window_t3_ParamLimits

0x57cc,	// (0x0002d938) popup_call2_audio_out_window_t3

0x57e2,	// (0x0002d94e) popup_call2_audio_out_window_t4_ParamLimits

0x57e2,	// (0x0002d94e) popup_call2_audio_out_window_t4

0x57f8,	// (0x0002d964) popup_call2_audio_out_window_t5_ParamLimits

0x57f8,	// (0x0002d964) popup_call2_audio_out_window_t5

0x0005,

0xf554,	// (0x000376c0) popup_call2_audio_out_window_t_ParamLimits

0xf554,	// (0x000376c0) popup_call2_audio_out_window_t

0x585c,	// (0x0002d9c8) bg_popup_call2_in_pane_ParamLimits

0x585c,	// (0x0002d9c8) bg_popup_call2_in_pane

0x58b8,	// (0x0002da24) popup_call2_audio_in_window_g1_ParamLimits

0x58b8,	// (0x0002da24) popup_call2_audio_in_window_g1

0x58f0,	// (0x0002da5c) popup_call2_audio_in_window_g2_ParamLimits

0x58f0,	// (0x0002da5c) popup_call2_audio_in_window_g2

0x5928,	// (0x0002da94) popup_call2_audio_in_window_g3_ParamLimits

0x5928,	// (0x0002da94) popup_call2_audio_in_window_g3

0x0003,

0xf561,	// (0x000376cd) popup_call2_audio_in_window_g_ParamLimits

0xf561,	// (0x000376cd) popup_call2_audio_in_window_g

0x5980,	// (0x0002daec) popup_call2_audio_in_window_t1_ParamLimits

0x5980,	// (0x0002daec) popup_call2_audio_in_window_t1

0x5a00,	// (0x0002db6c) popup_call2_audio_in_window_t2_ParamLimits

0x5a00,	// (0x0002db6c) popup_call2_audio_in_window_t2

0x5a80,	// (0x0002dbec) popup_call2_audio_in_window_t3_ParamLimits

0x5a80,	// (0x0002dbec) popup_call2_audio_in_window_t3

0x5a9a,	// (0x0002dc06) popup_call2_audio_in_window_t4_ParamLimits

0x5a9a,	// (0x0002dc06) popup_call2_audio_in_window_t4

0x5aac,	// (0x0002dc18) popup_call2_audio_in_window_t5_ParamLimits

0x5aac,	// (0x0002dc18) popup_call2_audio_in_window_t5

0x5ac1,	// (0x0002dc2d) popup_call2_audio_in_window_t6_ParamLimits

0x5ac1,	// (0x0002dc2d) popup_call2_audio_in_window_t6

0x0005,

0xf56a,	// (0x000376d6) popup_call2_audio_in_window_t_ParamLimits

0xf56a,	// (0x000376d6) popup_call2_audio_in_window_t

0xe68a,	// (0x000367f6) bg_popup_call2_in_pane_g1

0x5c8c,	// (0x0002ddf8) popup_cale_lunar_info_window_t4

0x0003,

0xf5d2,	// (0x0003773e) popup_cale_lunar_info_window_t

0xe692,	// (0x000367fe) bg_popup_call2_rect_pane_ParamLimits

0xe692,	// (0x000367fe) bg_popup_call2_rect_pane

0xe437,	// (0x000365a3) call2_cli_visual_graphic_pane

0xe437,	// (0x000365a3) call2_cli_visual_text_pane

0xb839,	// (0x000339a5) smil_status_volume_pane_g3

0x0002,

0xe7ba,	// (0x00036926) call2_cli_visual_graphic_pane_g1

0xe7ba,	// (0x00036926) call2_cli_visual_graphic_pane_g2

0xe7ba,	// (0x00036926) call2_cli_visual_graphic_pane_g3

0x0002,

0xf577,	// (0x000376e3) call2_cli_visual_graphic_pane_g

0x5af5,	// (0x0002dc61) bg_popup_call2_rect_pane_g1

0xe866,	// (0x000369d2) bg_popup_call2_rect_pane_g2

0x5afd,	// (0x0002dc69) bg_popup_call2_rect_pane_g3

0x5b05,	// (0x0002dc71) bg_popup_call2_rect_pane_g4

0x5b0d,	// (0x0002dc79) bg_popup_call2_rect_pane_g5

0x5b15,	// (0x0002dc81) bg_popup_call2_rect_pane_g6

0x5b1d,	// (0x0002dc89) bg_popup_call2_rect_pane_g7

0x5b25,	// (0x0002dc91) bg_popup_call2_rect_pane_g8

0x5b2d,	// (0x0002dc99) bg_popup_call2_rect_pane_g9

0x0008,

0xf57e,	// (0x000376ea) bg_popup_call2_rect_pane_g

0x5b35,	// (0x0002dca1) bg_popup_call2_bubble_pane_g1

0x5b3d,	// (0x0002dca9) bg_popup_call2_bubble_pane_g2

0x5b45,	// (0x0002dcb1) bg_popup_call2_bubble_pane_g3

0x5b4d,	// (0x0002dcb9) bg_popup_call2_bubble_pane_g4

0x5b55,	// (0x0002dcc1) bg_popup_call2_bubble_pane_g5

0x5b5d,	// (0x0002dcc9) bg_popup_call2_bubble_pane_g6

0x5b65,	// (0x0002dcd1) bg_popup_call2_bubble_pane_g7

0x5b6d,	// (0x0002dcd9) bg_popup_call2_bubble_pane_g8

0x5b75,	// (0x0002dce1) bg_popup_call2_bubble_pane_g9

0x0008,

0xf591,	// (0x000376fd) bg_popup_call2_bubble_pane_g

0x2199,	// (0x0002a305) aid_cale_week_size_cell_pane

0x2591,	// (0x0002a6fd) aid_cams_cif_uncrop_pane_ParamLimits

0x2591,	// (0x0002a6fd) aid_cams_cif_uncrop_pane

0x274a,	// (0x0002a8b6) aid_cams_size_cell_ParamLimits

0x274a,	// (0x0002a8b6) aid_cams_size_cell

0x275e,	// (0x0002a8ca) grid_cams_pane_ParamLimits

0x2778,	// (0x0002a8e4) linegrid_cams_pane_ParamLimits

0x28a8,	// (0x0002aa14) call_video_pane_t1

0x28c2,	// (0x0002aa2e) call_video_pane_t2

0x0001,

0xf27e,	// (0x000373ea) call_video_pane_t

0x2d0d,	// (0x0002ae79) aid_cale_month_size_cell_pane_ParamLimits

0x2d0d,	// (0x0002ae79) aid_cale_month_size_cell_pane

0xf61b,	// (0x00037787) smil_status_volume_pane_g

0xb846,	// (0x000339b2) volume_smil_pane_ParamLimits

0xb5e8,	// (0x00033754) aid_popup2_width_pane

0x20f3,	// (0x0002a25f) cell_qdial_pane_g4_ParamLimits

0x20f3,	// (0x0002a25f) cell_qdial_pane_g4

0x3a5e,	// (0x0002bbca) aid_blid_cardinal_pane_ParamLimits

0x3a6e,	// (0x0002bbda) aid_blid_destination_pane_ParamLimits

0x3a6e,	// (0x0002bbda) aid_blid_destination_pane

0xe692,	// (0x000367fe) bg_popup_call_poc_act_pane_ParamLimits

0xe692,	// (0x000367fe) bg_popup_call_poc_act_pane

0xe692,	// (0x000367fe) bg_popup_call_poc_inact_pane_ParamLimits

0xe692,	// (0x000367fe) bg_popup_call_poc_inact_pane

0x5b85,	// (0x0002dcf1) bg_popup_call_poc_act_pane_g1

0x5b8d,	// (0x0002dcf9) bg_popup_call_poc_act_pane_g2

0x5b95,	// (0x0002dd01) bg_popup_call_poc_act_pane_g3

0x5b4d,	// (0x0002dcb9) bg_popup_call_poc_act_pane_g4

0x5b55,	// (0x0002dcc1) bg_popup_call_poc_act_pane_g5

0x5b9d,	// (0x0002dd09) bg_popup_call_poc_act_pane_g6

0x5b65,	// (0x0002dcd1) bg_popup_call_poc_act_pane_g7

0x5ba5,	// (0x0002dd11) bg_popup_call_poc_act_pane_g8

0xe437,	// (0x000365a3) main_usb_pane

0xb7fe,	// (0x0003396a) popup_cale_lunar_info_window

0x2b8d,	// (0x0002acf9) im_reading_pane_t1_ParamLimits

0xeae5,	// (0x00036c51) list_im_pane_ParamLimits

0xeaf6,	// (0x00036c62) scroll_pane_cp07_ParamLimits

0xe437,	// (0x000365a3) grid_highlight_pane_cp012

0xe692,	// (0x000367fe) mup_scale_pane_ParamLimits

0x4564,	// (0x0002c6d0) main_usb_pane_g1_ParamLimits

0x4564,	// (0x0002c6d0) main_usb_pane_g1

0x5bc5,	// (0x0002dd31) main_usb_pane_g2_ParamLimits

0x5bc5,	// (0x0002dd31) main_usb_pane_g2

0x0001,

0xf5bb,	// (0x00037727) main_usb_pane_g_ParamLimits

0xf5bb,	// (0x00037727) main_usb_pane_g

0x5bdb,	// (0x0002dd47) main_usb_pane_t1_ParamLimits

0x5bdb,	// (0x0002dd47) main_usb_pane_t1

0x5bed,	// (0x0002dd59) main_usb_pane_t2_ParamLimits

0x5bed,	// (0x0002dd59) main_usb_pane_t2

0x5bff,	// (0x0002dd6b) main_usb_pane_t3_ParamLimits

0x5bff,	// (0x0002dd6b) main_usb_pane_t3

0x5c11,	// (0x0002dd7d) main_usb_pane_t4_ParamLimits

0x5c11,	// (0x0002dd7d) main_usb_pane_t4

0x5c26,	// (0x0002dd92) main_usb_pane_t5_ParamLimits

0x5c26,	// (0x0002dd92) main_usb_pane_t5

0x5c3b,	// (0x0002dda7) main_usb_pane_t6_ParamLimits

0x5c3b,	// (0x0002dda7) main_usb_pane_t6

0x0005,

0xf5c0,	// (0x0003772c) main_usb_pane_t_ParamLimits

0x39fd,	// (0x0002bb69) aid_text_placing

0x3a08,	// (0x0002bb74) main_location2_pane_t1_ParamLimits

0x3a1e,	// (0x0002bb8a) main_location2_pane_t2_ParamLimits

0x3a34,	// (0x0002bba0) main_location2_pane_t3_ParamLimits

0x3a4a,	// (0x0002bbb6) main_location2_pane_t4_ParamLimits

0x3a4a,	// (0x0002bbb6) main_location2_pane_t4

0xf3df,	// (0x0003754b) main_location2_pane_t_ParamLimits

0xe6ce,	// (0x0003683a) find_pinb_pane_g2_ParamLimits

0xe6ce,	// (0x0003683a) find_pinb_pane_g2

0x0001,

0xf12d,	// (0x00037299) find_pinb_pane_g_ParamLimits

0xf12d,	// (0x00037299) find_pinb_pane_g

0xe6da,	// (0x00036846) find_pinb_pane_t1_ParamLimits

0xe6ec,	// (0x00036858) find_pinb_pane_t2_ParamLimits

0xf132,	// (0x0003729e) find_pinb_pane_t_ParamLimits

0xe437,	// (0x000365a3) main_call3_pane

0x3081,	// (0x0002b1ed) cale_month_day_heading_pane_t1_ParamLimits

0x30df,	// (0x0002b24b) cale_month_day_heading_pane_t2_ParamLimits

0x3144,	// (0x0002b2b0) cale_month_day_heading_pane_t3_ParamLimits

0x31a9,	// (0x0002b315) cale_month_day_heading_pane_t4_ParamLimits

0x320e,	// (0x0002b37a) cale_month_day_heading_pane_t5_ParamLimits

0x3273,	// (0x0002b3df) cale_month_day_heading_pane_t6_ParamLimits

0x32d8,	// (0x0002b444) cale_month_day_heading_pane_t7_ParamLimits

0xf2b6,	// (0x00037422) cale_month_day_heading_pane_t_ParamLimits

0xed60,	// (0x00036ecc) smil_status_volume_pane

0x4538,	// (0x0002c6a4) postcard_address_pane_ParamLimits

0x4538,	// (0x0002c6a4) postcard_address_pane

0x454e,	// (0x0002c6ba) postcard_message_pane_ParamLimits

0x454e,	// (0x0002c6ba) postcard_message_pane

0x5ad6,	// (0x0002dc42) call2_cli_visual_pane_t1_ParamLimits

0x5ad6,	// (0x0002dc42) call2_cli_visual_pane_t1

0x6301,	// (0x0002e46d) postcard_message_pane_t1_ParamLimits

0x6301,	// (0x0002e46d) postcard_message_pane_t1

0x62ea,	// (0x0002e456) postcard_address_pane_t1_ParamLimits

0x62ea,	// (0x0002e456) postcard_address_pane_t1

0x62d6,	// (0x0002e442) popup_call3_audio_in_window_ParamLimits

0x62d6,	// (0x0002e442) popup_call3_audio_in_window

0x615b,	// (0x0002e2c7) bg_popup_call3_in_pane_ParamLimits

0x615b,	// (0x0002e2c7) bg_popup_call3_in_pane

0x61d7,	// (0x0002e343) popup_call3_audio_in_window_g1_ParamLimits

0x61d7,	// (0x0002e343) popup_call3_audio_in_window_g1

0x61f7,	// (0x0002e363) popup_call3_audio_in_window_g2_ParamLimits

0x61f7,	// (0x0002e363) popup_call3_audio_in_window_g2

0x6217,	// (0x0002e383) popup_call3_audio_in_window_g3_ParamLimits

0x6217,	// (0x0002e383) popup_call3_audio_in_window_g3

0x0003,

0xf622,	// (0x0003778e) popup_call3_audio_in_window_g_ParamLimits

0xf622,	// (0x0003778e) popup_call3_audio_in_window_g

0x6248,	// (0x0002e3b4) popup_call3_audio_in_window_t1_ParamLimits

0x6248,	// (0x0002e3b4) popup_call3_audio_in_window_t1

0x6286,	// (0x0002e3f2) popup_call3_audio_in_window_t2_ParamLimits

0x6286,	// (0x0002e3f2) popup_call3_audio_in_window_t2

0x62c4,	// (0x0002e430) popup_call3_audio_in_window_t3_ParamLimits

0x62c4,	// (0x0002e430) popup_call3_audio_in_window_t3

0x0002,

0xf62b,	// (0x00037797) popup_call3_audio_in_window_t_ParamLimits

0xf62b,	// (0x00037797) popup_call3_audio_in_window_t

0x3ce8,	// (0x0002be54) bg_popup_call3_rect_pane

0x5af5,	// (0x0002dc61) bg_popup_call3_rect_pane_g1

0xe866,	// (0x000369d2) bg_popup_call3_rect_pane_g2

0x5afd,	// (0x0002dc69) bg_popup_call3_rect_pane_g3

0x5b05,	// (0x0002dc71) bg_popup_call3_rect_pane_g4

0x5b0d,	// (0x0002dc79) bg_popup_call3_rect_pane_g5

0x5b15,	// (0x0002dc81) bg_popup_call3_rect_pane_g6

0x5b1d,	// (0x0002dc89) bg_popup_call3_rect_pane_g7

0x3fe4,	// (0x0002c150) mup_visualizer_osc_pane

0x3ffa,	// (0x0002c166) mup_visualizer_spec_pane

0x618b,	// (0x0002e2f7) call3_video_qcif_pane_ParamLimits

0x618b,	// (0x0002e2f7) call3_video_qcif_pane

0x619e,	// (0x0002e30a) call3_video_qcif_uncrop_pane_ParamLimits

0x619e,	// (0x0002e30a) call3_video_qcif_uncrop_pane

0x61ae,	// (0x0002e31a) call3_video_subqcif_pane_ParamLimits

0x61ae,	// (0x0002e31a) call3_video_subqcif_pane

0x61c4,	// (0x0002e330) call3_video_subqcif_uncrop_pane_ParamLimits

0x61c4,	// (0x0002e330) call3_video_subqcif_uncrop_pane

0x6237,	// (0x0002e3a3) popup_call3_audio_in_window_g4_ParamLimits

0x6237,	// (0x0002e3a3) popup_call3_audio_in_window_g4

0x611c,	// (0x0002e288) mup_spec_half_pane

0x6125,	// (0x0002e291) mup_spec_half_pane_cp

0x610a,	// (0x0002e276) mup_osc_middle_pane

0x6113,	// (0x0002e27f) mup_visualizer_osc_pane_g1

0x60ea,	// (0x0002e256) mup_spec_bar_pane_ParamLimits

0x60ea,	// (0x0002e256) mup_spec_bar_pane

0x60d7,	// (0x0002e243) mup_spec_bar_pane_g1

0x60e1,	// (0x0002e24d) mup_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00037782) mup_spec_bar_pane_g

0x2199,	// (0x0002a305) aid_cale_week_size_cell_pane_ParamLimits

0x21ac,	// (0x0002a318) bg_cale_heading_pane_ParamLimits

0xe89a,	// (0x00036a06) bg_cale_pane_cp01_ParamLimits

0x21c8,	// (0x0002a334) cale_week_corner_pane_ParamLimits

0x21de,	// (0x0002a34a) cale_week_day_heading_pane_ParamLimits

0x21fa,	// (0x0002a366) cale_week_scroll_pane_g1_ParamLimits

0x2213,	// (0x0002a37f) cale_week_scroll_pane_g2_ParamLimits

0x2224,	// (0x0002a390) cale_week_scroll_pane_g3_ParamLimits

0x2235,	// (0x0002a3a1) cale_week_scroll_pane_g4_ParamLimits

0x2246,	// (0x0002a3b2) cale_week_scroll_pane_g5_ParamLimits

0x2257,	// (0x0002a3c3) cale_week_scroll_pane_g6_ParamLimits

0x2268,	// (0x0002a3d4) cale_week_scroll_pane_g7_ParamLimits

0x2279,	// (0x0002a3e5) cale_week_scroll_pane_g8_ParamLimits

0x228a,	// (0x0002a3f6) cale_week_scroll_pane_g9_ParamLimits

0x229b,	// (0x0002a407) cale_week_scroll_pane_g10_ParamLimits

0x22ac,	// (0x0002a418) cale_week_scroll_pane_g11_ParamLimits

0x22bd,	// (0x0002a429) cale_week_scroll_pane_g12_ParamLimits

0x22ce,	// (0x0002a43a) cale_week_scroll_pane_g13_ParamLimits

0x22e7,	// (0x0002a453) cale_week_scroll_pane_g14_ParamLimits

0x2300,	// (0x0002a46c) cale_week_scroll_pane_g15_ParamLimits

0xf1be,	// (0x0003732a) cale_week_scroll_pane_g_ParamLimits

0x2319,	// (0x0002a485) cale_week_time_pane_ParamLimits

0x232a,	// (0x0002a496) grid_cale_week_pane_ParamLimits

0xe8b3,	// (0x00036a1f) listscroll_cale_week_pane_t1

0x2345,	// (0x0002a4b1) scroll_pane_cp08_ParamLimits

0x2d5e,	// (0x0002aeca) cale_month_corner_pane_ParamLimits

0xed0c,	// (0x00036e78) cale_month_pane_t1

0x3042,	// (0x0002b1ae) cale_month_week_pane_ParamLimits

0x369e,	// (0x0002b80a) popup_call_status_window_g1_ParamLimits

0x36b2,	// (0x0002b81e) popup_call_status_window_g2_ParamLimits

0x36c6,	// (0x0002b832) popup_call_status_window_g3_ParamLimits

0xf366,	// (0x000374d2) popup_call_status_window_g_ParamLimits

0xf0c8,	// (0x00037234) aid_call2_pane

0x4378,	// (0x0002c4e4) msg_header_pane_g1

0x4538,	// (0x0002c6a4) postcard_address2_pane_ParamLimits

0x4538,	// (0x0002c6a4) postcard_address2_pane

0x454e,	// (0x0002c6ba) postcard_message2_pane_ParamLimits

0x454e,	// (0x0002c6ba) postcard_message2_pane

0x604f,	// (0x0002e1bb) message2_row_pane_ParamLimits

0x604f,	// (0x0002e1bb) message2_row_pane

0x6072,	// (0x0002e1de) address2_row_pane_ParamLimits

0x6072,	// (0x0002e1de) address2_row_pane

0x6085,	// (0x0002e1f1) postcard_message2_row_pane_g1

0x608d,	// (0x0002e1f9) postcard_message2_row_pane_t1

0x6085,	// (0x0002e1f1) address2_row_pane_g1

0x608d,	// (0x0002e1f9) address2_row_pane_t1

0x0ab2,	// (0x00028c1e) aid_size_cell_vorec

0xe437,	// (0x000365a3) main_rss_pane

0x609b,	// (0x0002e207) rss_list_single_pane_ParamLimits

0x609b,	// (0x0002e207) rss_list_single_pane

0x60bb,	// (0x0002e227) rss_list_single_pane_t1

0x60c9,	// (0x0002e235) rss_list_single_pane_t2

0x0001,

0xf611,	// (0x0003777d) rss_list_single_pane_t

0xe437,	// (0x000365a3) main_camera2_pane

0xe437,	// (0x000365a3) main_video2_pane

0x0ed2,	// (0x0002903e) cams_zoom_pane_cp2_ParamLimits

0x0ed2,	// (0x0002903e) cams_zoom_pane_cp2

0x0ee9,	// (0x00029055) image2_vga_pane_ParamLimits

0x0ee9,	// (0x00029055) image2_vga_pane

0x0f31,	// (0x0002909d) main_camera2_pane_g1_ParamLimits

0x0f31,	// (0x0002909d) main_camera2_pane_g1

0x0f51,	// (0x000290bd) main_camera2_pane_g2_ParamLimits

0x0f51,	// (0x000290bd) main_camera2_pane_g2

0x0f68,	// (0x000290d4) main_camera2_pane_g3_ParamLimits

0x0f68,	// (0x000290d4) main_camera2_pane_g3

0x0f7f,	// (0x000290eb) main_camera2_pane_g4_ParamLimits

0x0f7f,	// (0x000290eb) main_camera2_pane_g4

0x0f96,	// (0x00029102) main_camera2_pane_g5_ParamLimits

0x0f96,	// (0x00029102) main_camera2_pane_g5

0x0fad,	// (0x00029119) main_camera2_pane_g6_ParamLimits

0x0fad,	// (0x00029119) main_camera2_pane_g6

0x0fc4,	// (0x00029130) main_camera2_pane_g7_ParamLimits

0x0fc4,	// (0x00029130) main_camera2_pane_g7

0x0fdb,	// (0x00029147) main_camera2_pane_g8_ParamLimits

0x0fdb,	// (0x00029147) main_camera2_pane_g8

0x0008,

0xf632,	// (0x0003779e) main_camera2_pane_g_ParamLimits

0xf632,	// (0x0003779e) main_camera2_pane_g

0x1009,	// (0x00029175) main_camera2_pane_t1_ParamLimits

0x1009,	// (0x00029175) main_camera2_pane_t1

0x103e,	// (0x000291aa) main_camera2_pane_t2_ParamLimits

0x103e,	// (0x000291aa) main_camera2_pane_t2

0x105b,	// (0x000291c7) main_camera2_pane_t3_ParamLimits

0x105b,	// (0x000291c7) main_camera2_pane_t3

0x10b9,	// (0x00029225) main_camera2_pane_t4_ParamLimits

0x10b9,	// (0x00029225) main_camera2_pane_t4

0x0006,

0xf645,	// (0x000377b1) main_camera2_pane_t_ParamLimits

0xf645,	// (0x000377b1) main_camera2_pane_t

0x1142,	// (0x000292ae) cams_zoom_pane_cp4_ParamLimits

0x1142,	// (0x000292ae) cams_zoom_pane_cp4

0x1158,	// (0x000292c4) image2_cif_pane_ParamLimits

0x1158,	// (0x000292c4) image2_cif_pane

0x1183,	// (0x000292ef) image2_subqcif_pane_ParamLimits

0x1183,	// (0x000292ef) image2_subqcif_pane

0x119e,	// (0x0002930a) main_video2_pane_g1_ParamLimits

0x119e,	// (0x0002930a) main_video2_pane_g1

0x11b8,	// (0x00029324) main_video2_pane_g2_ParamLimits

0x11b8,	// (0x00029324) main_video2_pane_g2

0x11ce,	// (0x0002933a) main_video2_pane_g3_ParamLimits

0x11ce,	// (0x0002933a) main_video2_pane_g3

0x11e4,	// (0x00029350) main_video2_pane_g4_ParamLimits

0x11e4,	// (0x00029350) main_video2_pane_g4

0x11fa,	// (0x00029366) main_video2_pane_g5_ParamLimits

0x11fa,	// (0x00029366) main_video2_pane_g5

0x1210,	// (0x0002937c) main_video2_pane_g6_ParamLimits

0x1210,	// (0x0002937c) main_video2_pane_g6

0x0005,

0xf654,	// (0x000377c0) main_video2_pane_g_ParamLimits

0xf654,	// (0x000377c0) main_video2_pane_g

0x122a,	// (0x00029396) main_video2_pane_t1_ParamLimits

0x122a,	// (0x00029396) main_video2_pane_t1

0x124e,	// (0x000293ba) main_video2_pane_t2_ParamLimits

0x124e,	// (0x000293ba) main_video2_pane_t2

0x129e,	// (0x0002940a) main_video2_pane_t3_ParamLimits

0x129e,	// (0x0002940a) main_video2_pane_t3

0x0002,

0xf661,	// (0x000377cd) main_video2_pane_t_ParamLimits

0xf661,	// (0x000377cd) main_video2_pane_t

0x5de7,	// (0x0002df53) call_muted_g2

0x0001,

0xf603,	// (0x0003776f) call_muted_g

0xe437,	// (0x000365a3) main_mup2_pane

0x631c,	// (0x0002e488) main_mup2_pane_g1_ParamLimits

0x631c,	// (0x0002e488) main_mup2_pane_g1

0x6328,	// (0x0002e494) main_mup2_pane_g2_ParamLimits

0x6328,	// (0x0002e494) main_mup2_pane_g2

0xb8af,	// (0x00033a1b) main_mup_pane_g13_cp1

0xb8b7,	// (0x00033a23) mup_volume_pane_cp1

0x6346,	// (0x0002e4b2) main_mup2_pane_g4_ParamLimits

0x6346,	// (0x0002e4b2) main_mup2_pane_g4

0x6356,	// (0x0002e4c2) main_mup2_pane_g5_ParamLimits

0x6356,	// (0x0002e4c2) main_mup2_pane_g5

0x6366,	// (0x0002e4d2) main_mup2_pane_g6_ParamLimits

0x6366,	// (0x0002e4d2) main_mup2_pane_g6

0x6376,	// (0x0002e4e2) main_mup2_pane_g7_ParamLimits

0x6376,	// (0x0002e4e2) main_mup2_pane_g7

0x0006,

0xf668,	// (0x000377d4) main_mup2_pane_g_ParamLimits

0xf668,	// (0x000377d4) main_mup2_pane_g

0x638e,	// (0x0002e4fa) main_mup2_pane_t1_ParamLimits

0x638e,	// (0x0002e4fa) main_mup2_pane_t1

0x63a4,	// (0x0002e510) main_mup2_pane_t2_ParamLimits

0x63a4,	// (0x0002e510) main_mup2_pane_t2

0x63ba,	// (0x0002e526) main_mup2_pane_t3_ParamLimits

0x63ba,	// (0x0002e526) main_mup2_pane_t3

0x63d0,	// (0x0002e53c) main_mup2_pane_t4_ParamLimits

0x63d0,	// (0x0002e53c) main_mup2_pane_t4

0x63e8,	// (0x0002e554) main_mup2_pane_t5_ParamLimits

0x63e8,	// (0x0002e554) main_mup2_pane_t5

0x6400,	// (0x0002e56c) main_mup2_pane_t6_ParamLimits

0x6400,	// (0x0002e56c) main_mup2_pane_t6

0x0005,

0xf677,	// (0x000377e3) main_mup2_pane_t_ParamLimits

0xf677,	// (0x000377e3) main_mup2_pane_t

0x6430,	// (0x0002e59c) mup2_visualizer_pane_ParamLimits

0x6430,	// (0x0002e59c) mup2_visualizer_pane

0x645e,	// (0x0002e5ca) mup_progress_pane_cp_ParamLimits

0x645e,	// (0x0002e5ca) mup_progress_pane_cp

0xb89a,	// (0x00033a06) mup_volume_pane_cp_ParamLimits

0xb89a,	// (0x00033a06) mup_volume_pane_cp

0x6474,	// (0x0002e5e0) mup2_visualizer_pane_g1_ParamLimits

0x6474,	// (0x0002e5e0) mup2_visualizer_pane_g1

0x6489,	// (0x0002e5f5) mup2_visualizer_pane_g2_ParamLimits

0x6489,	// (0x0002e5f5) mup2_visualizer_pane_g2

0x6495,	// (0x0002e601) mup2_visualizer_pane_g3_ParamLimits

0x6495,	// (0x0002e601) mup2_visualizer_pane_g3

0x0002,

0xf684,	// (0x000377f0) mup2_visualizer_pane_g_ParamLimits

0xf684,	// (0x000377f0) mup2_visualizer_pane_g

0x492e,	// (0x0002ca9a) aid_size_cell_fmradio

0x0b76,	// (0x00028ce2) aid_height_parent_landcape

0xeb74,	// (0x00036ce0) wml_content_pane_cp

0xeb7c,	// (0x00036ce8) wml_tabs_pane

0xeb85,	// (0x00036cf1) popup_wml_miniature_window

0xeb8d,	// (0x00036cf9) scroll_pane_cp021

0xeba1,	// (0x00036d0d) wml_content_pane_comp8

0xe437,	// (0x000365a3) bg_popup_sub_pane_cp05

0x64b3,	// (0x0002e61f) popup_wml_miniature_window_g1

0x64bb,	// (0x0002e627) wml_miniature_view_pane

0x64c3,	// (0x0002e62f) aid_size_wml_view

0x64cb,	// (0x0002e637) wml_miniature_view_pane_g1

0x64d4,	// (0x0002e640) wml_miniature_view_pane_g2

0x64dd,	// (0x0002e649) wml_miniature_view_pane_g3

0x64e5,	// (0x0002e651) wml_miniature_view_pane_g4

0x64ed,	// (0x0002e659) wml_miniature_view_pane_g5

0x64f5,	// (0x0002e661) wml_miniature_view_pane_g6

0x64fd,	// (0x0002e669) wml_miniature_view_pane_g7

0x6505,	// (0x0002e671) wml_miniature_view_pane_g8

0x0007,

0xf68b,	// (0x000377f7) wml_miniature_view_pane_g

0x650d,	// (0x0002e679) background_graphic_ParamLimits

0x650d,	// (0x0002e679) background_graphic

0x6519,	// (0x0002e685) wml_tabs_2_pane

0x6522,	// (0x0002e68e) wml_tabs_3_pane_ParamLimits

0x6522,	// (0x0002e68e) wml_tabs_3_pane

0x6534,	// (0x0002e6a0) wml_tabs_4_pane_ParamLimits

0x6534,	// (0x0002e6a0) wml_tabs_4_pane

0x654a,	// (0x0002e6b6) wml_tabs_5_pane_ParamLimits

0x654a,	// (0x0002e6b6) wml_tabs_5_pane

0x6564,	// (0x0002e6d0) wml_tabs_pane_g2_ParamLimits

0x6564,	// (0x0002e6d0) wml_tabs_pane_g2

0x6578,	// (0x0002e6e4) wml_tabs_pane_g3_ParamLimits

0x6578,	// (0x0002e6e4) wml_tabs_pane_g3

0x658c,	// (0x0002e6f8) wml_tabs_2_active_pane_ParamLimits

0x658c,	// (0x0002e6f8) wml_tabs_2_active_pane

0x65a0,	// (0x0002e70c) wml_tabs_2_passive_pane_ParamLimits

0x65a0,	// (0x0002e70c) wml_tabs_2_passive_pane

0x65b4,	// (0x0002e720) wml_tabs_3_active_pane_cp_ParamLimits

0x65b4,	// (0x0002e720) wml_tabs_3_active_pane_cp

0x65c9,	// (0x0002e735) wml_tabs_3_passive_pane_ParamLimits

0x65c9,	// (0x0002e735) wml_tabs_3_passive_pane

0x65dc,	// (0x0002e748) wml_tabs_3_passive_pane_cp_ParamLimits

0x65dc,	// (0x0002e748) wml_tabs_3_passive_pane_cp

0x65f3,	// (0x0002e75f) tabs_4_active_pane

0x65fb,	// (0x0002e767) tabs_4_passive_pane

0x6605,	// (0x0002e771) tabs_4_passive_pane_cp

0x660d,	// (0x0002e779) tabs_4_passive_pane_cp2

0x5b7d,	// (0x0002dce9) aid_height_text

0x3fb6,	// (0x0002c122) mup_volume_cont_pane_ParamLimits

0x3fb6,	// (0x0002c122) mup_volume_cont_pane

0x1ec1,	// (0x0002a02d) aid_size_cell_pinb

0x1ecb,	// (0x0002a037) aid_size_list_pinb

0x644a,	// (0x0002e5b6) mup2_volume_cont_pane_ParamLimits

0x644a,	// (0x0002e5b6) mup2_volume_cont_pane

0xb886,	// (0x000339f2) mup2_volume_cont_pane_g1_ParamLimits

0xb886,	// (0x000339f2) mup2_volume_cont_pane_g1

0x0684,	// (0x000287f0) aid_size_cell_touch_ParamLimits

0x0684,	// (0x000287f0) aid_size_cell_touch

0x0852,	// (0x000289be) touch_pane_ParamLimits

0x0852,	// (0x000289be) touch_pane

0xb655,	// (0x000337c1) main_rss2_pane

0x6620,	// (0x0002e78c) listscroll_rss2_pane

0x6629,	// (0x0002e795) rss2_navigation_pane

0x6631,	// (0x0002e79d) list_rss2_pane

0x3881,	// (0x0002b9ed) scroll_pane_cp22

0x6639,	// (0x0002e7a5) rss2_navigation_pane_g1

0x6642,	// (0x0002e7ae) rss2_navigation_pane_g2

0x664a,	// (0x0002e7b6) rss2_navigation_pane_g3

0x0002,

0xf69c,	// (0x00037808) rss2_navigation_pane_g

0x6652,	// (0x0002e7be) rss2_navigation_pane_t1

0x6660,	// (0x0002e7cc) rss2_list_single_pane_ParamLimits

0x6660,	// (0x0002e7cc) rss2_list_single_pane

0x667a,	// (0x0002e7e6) rss2_list_single_pane_t2

0x6688,	// (0x0002e7f4) rss2_list_single_pane_t3_ParamLimits

0x6688,	// (0x0002e7f4) rss2_list_single_pane_t3

0x66a5,	// (0x0002e811) rss2_list_single_pane_t4

0x3488,	// (0x0002b5f4) smil_status_pane_g1

0xb647,	// (0x000337b3) main_image2_pane_ParamLimits

0xb647,	// (0x000337b3) main_image2_pane

0x0ff2,	// (0x0002915e) main_camera2_pane_g9_ParamLimits

0x0ff2,	// (0x0002915e) main_camera2_pane_g9

0x110e,	// (0x0002927a) main_camera2_pane_t5_ParamLimits

0x110e,	// (0x0002927a) main_camera2_pane_t5

0xb85b,	// (0x000339c7) main_camera2_pane_t6_ParamLimits

0xb85b,	// (0x000339c7) main_camera2_pane_t6

0x66b3,	// (0x0002e81f) main_image2_pane_g1_ParamLimits

0x66b3,	// (0x0002e81f) main_image2_pane_g1

0x48d8,	// (0x0002ca44) smil2_video_pane_ParamLimits

0x48d8,	// (0x0002ca44) smil2_video_pane

0xb5f4,	// (0x00033760) aid_zoom_text_primary_cp

0xb63d,	// (0x000337a9) popup_preview_fixed_window

0xeadd,	// (0x00036c49) im_reading_pane_g1

0x0ec4,	// (0x00029030) cams2_bc_adjust_pane_cp_ParamLimits

0x0ec4,	// (0x00029030) cams2_bc_adjust_pane_cp

0x1134,	// (0x000292a0) cams2_bc_adjust_pane_ParamLimits

0x1134,	// (0x000292a0) cams2_bc_adjust_pane

0xb8bf,	// (0x00033a2b) cams2_bc_adjust_pane_g1

0xb8c7,	// (0x00033a33) cams2_slider_pane

0xb8d0,	// (0x00033a3c) cams2_slider_pane_g1

0xb8d9,	// (0x00033a45) cams2_slider_pane_g2

0x0006,

0xf6a3,	// (0x0003780f) cams2_slider_pane_g

0x08c2,	// (0x00028a2e) calc_display_pane_ParamLimits

0x08ea,	// (0x00028a56) calc_paper_pane_ParamLimits

0x090d,	// (0x00028a79) grid_calc_pane_ParamLimits

0xb785,	// (0x000338f1) popup_clock_digital_window_t1_ParamLimits

0x4755,	// (0x0002c8c1) main_image_pane_t1

0x08a4,	// (0x00028a10) aid_size_cell_calc_ParamLimits

0x08a4,	// (0x00028a10) aid_size_cell_calc

0x0bbc,	// (0x00028d28) popup_blid_sat_info2_window_ParamLimits

0x0bbc,	// (0x00028d28) popup_blid_sat_info2_window

0x66d1,	// (0x0002e83d) aid_size_cell_blid

0x66d9,	// (0x0002e845) bg_popup_window_pane_cp07

0x66fc,	// (0x0002e868) grid_popup_blid_pane

0x6706,	// (0x0002e872) heading_pane_cp05_ParamLimits

0x6706,	// (0x0002e872) heading_pane_cp05

0x67d0,	// (0x0002e93c) cell_popup_blid_pane_ParamLimits

0x67d0,	// (0x0002e93c) cell_popup_blid_pane

0x67fa,	// (0x0002e966) cell_popup_blid_pane_g1

0x6802,	// (0x0002e96e) cell_popup_blid_pane_t1

0x641a,	// (0x0002e586) mup2_indicator_pane_ParamLimits

0x641a,	// (0x0002e586) mup2_indicator_pane

0x3ce8,	// (0x0002be54) mup2_visualizer_osc_pane

0x64a1,	// (0x0002e60d) mup2_visualizer_spec_pane_ParamLimits

0x64a1,	// (0x0002e60d) mup2_visualizer_spec_pane

0x6810,	// (0x0002e97c) mup2_spec_half_pane

0x6819,	// (0x0002e985) mup2_spec_half_pane_cp

0x6821,	// (0x0002e98d) mup2_spec_bar_pane_ParamLimits

0x6821,	// (0x0002e98d) mup2_spec_bar_pane

0x60d7,	// (0x0002e243) mup2_spec_bar_pane_g1

0x60e1,	// (0x0002e24d) mup2_spec_bar_pane_g2

0x0001,

0xf616,	// (0x00037782) mup2_spec_bar_pane_g

0x6841,	// (0x0002e9ad) mup2_osc_middle_pane

0x6113,	// (0x0002e27f) mup2_visualizer_osc_pane_g1

0xe00f,	// (0x0003617b) popup_number_entry_window_t1_ParamLimits

0xe022,	// (0x0003618e) popup_number_entry_window_t2_ParamLimits

0xe034,	// (0x000361a0) popup_number_entry_window_t3_ParamLimits

0xe046,	// (0x000361b2) popup_number_entry_window_t5_ParamLimits

0xe046,	// (0x000361b2) popup_number_entry_window_t5

0xf0d8,	// (0x00037244) popup_number_entry_window_t_ParamLimits

0xe07b,	// (0x000361e7) text_title_cp2_ParamLimits

0xb7c4,	// (0x00033930) aid_hotspot_pointer_text2_pane

0xb7ea,	// (0x00033956) main_viewer_pane_g9_ParamLimits

0xb7ea,	// (0x00033956) main_viewer_pane_g9

0xed0c,	// (0x00036e78) cale_month_pane_t1_ParamLimits

0xed73,	// (0x00036edf) bg_cale_pane_ParamLimits

0xed8b,	// (0x00036ef7) list_cale_pane_ParamLimits

0xe8b3,	// (0x00036a1f) listscroll_cale_day_pane_t1

0xed9c,	// (0x00036f08) scroll_pane_cp09_ParamLimits

0x406a,	// (0x0002c1d6) main_mup_eq_pane_t1_ParamLimits

0x406a,	// (0x0002c1d6) main_mup_eq_pane_t1

0x4086,	// (0x0002c1f2) main_mup_eq_pane_t2_ParamLimits

0x4086,	// (0x0002c1f2) main_mup_eq_pane_t2

0x40a2,	// (0x0002c20e) main_mup_eq_pane_t3_ParamLimits

0x40a2,	// (0x0002c20e) main_mup_eq_pane_t3

0x40c0,	// (0x0002c22c) main_mup_eq_pane_t4_ParamLimits

0x40c0,	// (0x0002c22c) main_mup_eq_pane_t4

0x40de,	// (0x0002c24a) main_mup_eq_pane_t5_ParamLimits

0x40de,	// (0x0002c24a) main_mup_eq_pane_t5

0x40fc,	// (0x0002c268) main_mup_eq_pane_t6_ParamLimits

0x40fc,	// (0x0002c268) main_mup_eq_pane_t6

0x4112,	// (0x0002c27e) main_mup_eq_pane_t7_ParamLimits

0x4112,	// (0x0002c27e) main_mup_eq_pane_t7

0x4128,	// (0x0002c294) main_mup_eq_pane_t8_ParamLimits

0x4128,	// (0x0002c294) main_mup_eq_pane_t8

0x413e,	// (0x0002c2aa) main_mup_eq_pane_t9_ParamLimits

0x413e,	// (0x0002c2aa) main_mup_eq_pane_t9

0x415a,	// (0x0002c2c6) main_mup_eq_pane_t10_ParamLimits

0x415a,	// (0x0002c2c6) main_mup_eq_pane_t10

0x0009,

0xf465,	// (0x000375d1) main_mup_eq_pane_t_ParamLimits

0xf465,	// (0x000375d1) main_mup_eq_pane_t

0x422f,	// (0x0002c39b) mup_equalizer_pane_cp5_ParamLimits

0x4247,	// (0x0002c3b3) mup_equalizer_pane_cp6_ParamLimits

0x425f,	// (0x0002c3cb) mup_equalizer_pane_cp7_ParamLimits

0xb655,	// (0x000337c1) main_gallery_pane

0x612d,	// (0x0002e299) smil2_volume_pane

0x6135,	// (0x0002e2a1) smil_status_volume_pane_g1_ParamLimits

0x6148,	// (0x0002e2b4) smil_status_volume_pane_g2_ParamLimits

0xb839,	// (0x000339a5) smil_status_volume_pane_g3_ParamLimits

0xf61b,	// (0x00037787) smil_status_volume_pane_g_ParamLimits

0x66d9,	// (0x0002e845) bg_popup_window_pane_cp07_ParamLimits

0x66e7,	// (0x0002e853) blid_firmament_pane

0x684a,	// (0x0002e9b6) aid_size_cell_gallery_ParamLimits

0x684a,	// (0x0002e9b6) aid_size_cell_gallery

0x6860,	// (0x0002e9cc) grid_gallery_pane_ParamLimits

0x6860,	// (0x0002e9cc) grid_gallery_pane

0x687b,	// (0x0002e9e7) cell_gallery_pane_ParamLimits

0x687b,	// (0x0002e9e7) cell_gallery_pane

0x68cc,	// (0x0002ea38) bg_cell_gallery_focus_pane_ParamLimits

0x68cc,	// (0x0002ea38) bg_cell_gallery_focus_pane

0x68de,	// (0x0002ea4a) cell_gallery_pane_g1_ParamLimits

0x68de,	// (0x0002ea4a) cell_gallery_pane_g1

0x68ea,	// (0x0002ea56) cell_gallery_pane_g2_ParamLimits

0x68ea,	// (0x0002ea56) cell_gallery_pane_g2

0x68f7,	// (0x0002ea63) cell_gallery_pane_g3_ParamLimits

0x68f7,	// (0x0002ea63) cell_gallery_pane_g3

0x6904,	// (0x0002ea70) cell_gallery_pane_g4_ParamLimits

0x6904,	// (0x0002ea70) cell_gallery_pane_g4

0x0003,

0xf6c9,	// (0x00037835) cell_gallery_pane_g_ParamLimits

0xf6c9,	// (0x00037835) cell_gallery_pane_g

0x6910,	// (0x0002ea7c) bg_cell_gallery_focus_pane_g1

0x6918,	// (0x0002ea84) bg_cell_gallery_focus_pane_g2

0x6920,	// (0x0002ea8c) bg_cell_gallery_focus_pane_g3

0x6928,	// (0x0002ea94) bg_cell_gallery_focus_pane_g4

0x6930,	// (0x0002ea9c) bg_cell_gallery_focus_pane_g5

0x6938,	// (0x0002eaa4) bg_cell_gallery_focus_pane_g6

0x6940,	// (0x0002eaac) bg_cell_gallery_focus_pane_g7

0x6948,	// (0x0002eab4) bg_cell_gallery_focus_pane_g8

0x0007,

0xf6d2,	// (0x0003783e) bg_cell_gallery_focus_pane_g

0x6950,	// (0x0002eabc) aid_firma_cardinal

0x6964,	// (0x0002ead0) blid_firmament_pane_t1

0x697b,	// (0x0002eae7) blid_firmament_pane_t2

0x6992,	// (0x0002eafe) blid_firmament_pane_t3

0x69a9,	// (0x0002eb15) blid_firmament_pane_t4

0x0003,

0xf6e3,	// (0x0003784f) blid_firmament_pane_t

0x69c0,	// (0x0002eb2c) blid_sat_info_pane

0x69d0,	// (0x0002eb3c) blid_sat_info_pane_g1

0x69d0,	// (0x0002eb3c) blid_sat_info_pane_g2

0x0001,

0xf6ec,	// (0x00037858) blid_sat_info_pane_g

0x69da,	// (0x0002eb46) blid_sat_info_pane_t1

0x69e8,	// (0x0002eb54) smil2_volume_content_pane

0x69f1,	// (0x0002eb5d) smil2_volume_pane_g1

0x69f9,	// (0x0002eb65) smil2_volume_content_pane_g1

0x6a02,	// (0x0002eb6e) smil2_volume_content_pane_g2

0x6a0b,	// (0x0002eb77) smil2_volume_content_pane_g3

0x6a14,	// (0x0002eb80) smil2_volume_content_pane_g4

0x6a1d,	// (0x0002eb89) smil2_volume_content_pane_g5

0x6a26,	// (0x0002eb92) smil2_volume_content_pane_g6

0x6a2f,	// (0x0002eb9b) smil2_volume_content_pane_g7

0x6a38,	// (0x0002eba4) smil2_volume_content_pane_g8

0x6a41,	// (0x0002ebad) smil2_volume_content_pane_g9

0x6a4a,	// (0x0002ebb6) smil2_volume_content_pane_g10

0x0009,

0xf6f1,	// (0x0003785d) smil2_volume_content_pane_g

0x23a5,	// (0x0002a511) cale_week_day_heading_pane_t1_ParamLimits

0x23b9,	// (0x0002a525) cale_week_day_heading_pane_t2_ParamLimits

0x23cd,	// (0x0002a539) cale_week_day_heading_pane_t3_ParamLimits

0x23e1,	// (0x0002a54d) cale_week_day_heading_pane_t4_ParamLimits

0x23f5,	// (0x0002a561) cale_week_day_heading_pane_t5_ParamLimits

0x2409,	// (0x0002a575) cale_week_day_heading_pane_t6_ParamLimits

0x241d,	// (0x0002a589) cale_week_day_heading_pane_t7_ParamLimits

0xf1dd,	// (0x00037349) cale_week_day_heading_pane_t_ParamLimits

0xe8c5,	// (0x00036a31) bg_cale_side_pane_ParamLimits

0x09e6,	// (0x00028b52) cale_week_time_pane_t1_ParamLimits

0x09fe,	// (0x00028b6a) cale_week_time_pane_t2_ParamLimits

0x0a16,	// (0x00028b82) cale_week_time_pane_t3_ParamLimits

0x0a2e,	// (0x00028b9a) cale_week_time_pane_t4_ParamLimits

0x0a46,	// (0x00028bb2) cale_week_time_pane_t5_ParamLimits

0x0a5e,	// (0x00028bca) cale_week_time_pane_t6_ParamLimits

0x0a76,	// (0x00028be2) cale_week_time_pane_t7_ParamLimits

0x0a92,	// (0x00028bfe) cale_week_time_pane_t8_ParamLimits

0xf1ec,	// (0x00037358) cale_week_time_pane_t_ParamLimits

0x2431,	// (0x0002a59d) cell_cale_week_pane_g2_ParamLimits

0xe8c5,	// (0x00036a31) bg_cale_side_pane_cp01_ParamLimits

0x333d,	// (0x0002b4a9) cale_month_week_pane_t1_ParamLimits

0x3354,	// (0x0002b4c0) cale_month_week_pane_t2_ParamLimits

0x336b,	// (0x0002b4d7) cale_month_week_pane_t3_ParamLimits

0x3382,	// (0x0002b4ee) cale_month_week_pane_t4_ParamLimits

0x3399,	// (0x0002b505) cale_month_week_pane_t5_ParamLimits

0x33b0,	// (0x0002b51c) cale_month_week_pane_t6_ParamLimits

0xf2c5,	// (0x00037431) cale_month_week_pane_t_ParamLimits

0xb705,	// (0x00033871) cell_cale_month_pane_g1_ParamLimits

0xb655,	// (0x000337c1) main_cale_event_viewer_pane

0xdfe5,	// (0x00036151) listscroll_cale_event_viewer_pane

0x6a53,	// (0x0002ebbf) list_cale_ev_pane

0x6a5b,	// (0x0002ebc7) scroll_pane_cp023

0x6a67,	// (0x0002ebd3) field_cale_ev_pane_ParamLimits

0x6a67,	// (0x0002ebd3) field_cale_ev_pane

0x6a8b,	// (0x0002ebf7) field_cale_ev_content_pane_ParamLimits

0x6a8b,	// (0x0002ebf7) field_cale_ev_content_pane

0x6a97,	// (0x0002ec03) field_cale_ev_pane_g1_ParamLimits

0x6a97,	// (0x0002ec03) field_cale_ev_pane_g1

0x6aa3,	// (0x0002ec0f) field_cale_ev_pane_g2_ParamLimits

0x6aa3,	// (0x0002ec0f) field_cale_ev_pane_g2

0x6abb,	// (0x0002ec27) field_cale_ev_pane_g3_ParamLimits

0x6abb,	// (0x0002ec27) field_cale_ev_pane_g3

0x0002,

0xf706,	// (0x00037872) field_cale_ev_pane_g_ParamLimits

0xf706,	// (0x00037872) field_cale_ev_pane_g

0x6ad3,	// (0x0002ec3f) field_cale_ev_pane_t1_ParamLimits

0x6ad3,	// (0x0002ec3f) field_cale_ev_pane_t1

0x6aea,	// (0x0002ec56) field_cale_ev_content_pane_t1_ParamLimits

0x6aea,	// (0x0002ec56) field_cale_ev_content_pane_t1

0x4366,	// (0x0002c4d2) bg_button_pane_cp01

0xe765,	// (0x000368d1) listscroll_cale_week_pane_ParamLimits

0x218f,	// (0x0002a2fb) popup_toolbar_window_cp01

0xe8b3,	// (0x00036a1f) listscroll_cale_week_pane_t1_ParamLimits

0xe765,	// (0x000368d1) listscroll_cale_day_pane_ParamLimits

0x34e8,	// (0x0002b654) popup_toolbar_window_cp02

0xe8b3,	// (0x00036a1f) listscroll_cale_day_pane_t1_ParamLimits

0xe765,	// (0x000368d1) main_cale_month_pane_ParamLimits

0x0e3c,	// (0x00028fa8) popup_toolbar_window_cp03_ParamLimits

0x0e3c,	// (0x00028fa8) popup_toolbar_window_cp03

0x4733,	// (0x0002c89f) main_image_pane_g2_ParamLimits

0x4733,	// (0x0002c89f) main_image_pane_g2

0x4744,	// (0x0002c8b0) main_image_pane_g3_ParamLimits

0x4744,	// (0x0002c8b0) main_image_pane_g3

0x0002,

0xf4f7,	// (0x00037663) main_image_pane_g_ParamLimits

0xf4f7,	// (0x00037663) main_image_pane_g

0x4755,	// (0x0002c8c1) main_image_pane_t1_ParamLimits

0x476c,	// (0x0002c8d8) main_image_pane_t2_ParamLimits

0x476c,	// (0x0002c8d8) main_image_pane_t2

0x477e,	// (0x0002c8ea) main_image_pane_t3_ParamLimits

0x477e,	// (0x0002c8ea) main_image_pane_t3

0x47a6,	// (0x0002c912) main_image_pane_t4_ParamLimits

0x47a6,	// (0x0002c912) main_image_pane_t4

0x0003,

0xf4fe,	// (0x0003766a) main_image_pane_t_ParamLimits

0xf4fe,	// (0x0003766a) main_image_pane_t

0x47c6,	// (0x0002c932) popup_image_details_window_cp01

0x47d0,	// (0x0002c93c) popup_toobar_trans_pane_cp01_ParamLimits

0x47d0,	// (0x0002c93c) popup_toobar_trans_pane_cp01

0x0caf,	// (0x00028e1b) popup_image_details_window_ParamLimits

0x0caf,	// (0x00028e1b) popup_image_details_window

0xb80a,	// (0x00033976) popup_image_focus_window

0x0e7e,	// (0x00028fea) camera2_autofocus_pane_ParamLimits

0x0e7e,	// (0x00028fea) camera2_autofocus_pane

0xdfe5,	// (0x00036151) bg_popup_sub_pane_cp06

0x6b0b,	// (0x0002ec77) popup_image_focus_window_g1

0x6b13,	// (0x0002ec7f) popup_image_focus_window_g2

0x6b1b,	// (0x0002ec87) popup_image_focus_window_g3

0x6b23,	// (0x0002ec8f) popup_image_focus_window_g4

0x0003,

0xf70d,	// (0x00037879) popup_image_focus_window_g

0x6b2b,	// (0x0002ec97) popup_image_focus_window_t1

0x6b39,	// (0x0002eca5) popup_image_focus_window_t2

0x6b49,	// (0x0002ecb5) popup_image_focus_window_t3

0x0002,

0xf716,	// (0x00037882) popup_image_focus_window_t

0x6b57,	// (0x0002ecc3) camera2_autofocus_pane_g1

0xe7da,	// (0x00036946) bg_tb_trans_pane_cp01

0x6b95,	// (0x0002ed01) popup_image_details_window_g1

0x6ba8,	// (0x0002ed14) popup_image_details_window_g2

0x0002,

0xf728,	// (0x00037894) popup_image_details_window_g

0x6bd1,	// (0x0002ed3d) popup_image_details_window_t1

0x6be3,	// (0x0002ed4f) popup_image_details_window_t2

0x6bfc,	// (0x0002ed68) popup_image_details_window_t3

0x6c10,	// (0x0002ed7c) popup_image_details_window_t4

0x6c2b,	// (0x0002ed97) popup_image_details_window_t5

0x0004,

0xf72f,	// (0x0003789b) popup_image_details_window_t

0xe751,	// (0x000368bd) bg_calc_paper_pane_ParamLimits

0xb655,	// (0x000337c1) grid_highlight_pane_cp013

0xb667,	// (0x000337d3) list_calc_pane_ParamLimits

0xb679,	// (0x000337e5) scroll_pane_cp024

0xe765,	// (0x000368d1) bg_calc_display_pane_ParamLimits

0x093b,	// (0x00028aa7) calc_display_pane_t1_ParamLimits

0x094d,	// (0x00028ab9) calc_display_pane_t2_ParamLimits

0xb681,	// (0x000337ed) calc_display_pane_t3_ParamLimits

0xf15f,	// (0x000372cb) calc_display_pane_t_ParamLimits

0x09b8,	// (0x00028b24) cell_calc_pane_g2

0x0001,

0xf17c,	// (0x000372e8) cell_calc_pane_g

0x09c1,	// (0x00028b2d) cell_calc_pane_t1

0xe7c4,	// (0x00036930) grid_highlight_pane_cp02_ParamLimits

0xe7e8,	// (0x00036954) toolbar_button_pane_cp01_ParamLimits

0xe7e8,	// (0x00036954) toolbar_button_pane_cp01

0x4812,	// (0x0002c97e) temp_image_control_pane_ParamLimits

0x4812,	// (0x0002c97e) temp_image_control_pane

0xb647,	// (0x000337b3) main_mp3_pane

0x6c45,	// (0x0002edb1) temp_image_control_pane_g1_ParamLimits

0x6c45,	// (0x0002edb1) temp_image_control_pane_g1

0x6c53,	// (0x0002edbf) temp_image_control_pane_g2_ParamLimits

0x6c53,	// (0x0002edbf) temp_image_control_pane_g2

0x6c65,	// (0x0002edd1) temp_image_control_pane_g3_ParamLimits

0x6c65,	// (0x0002edd1) temp_image_control_pane_g3

0x6c75,	// (0x0002ede1) temp_image_control_pane_g4_ParamLimits

0x6c75,	// (0x0002ede1) temp_image_control_pane_g4

0x0003,

0xf73a,	// (0x000378a6) temp_image_control_pane_g_ParamLimits

0xf73a,	// (0x000378a6) temp_image_control_pane_g

0x6c45,	// (0x0002edb1) main_mp3_pane_g1

0x6c88,	// (0x0002edf4) main_mp3_pane_g2

0x0007,

0xf743,	// (0x000378af) main_mp3_pane_g

0x6ce1,	// (0x0002ee4d) main_mp3_pane_t1

0xe92a,	// (0x00036a96) main_camera_pane_g8_ParamLimits

0xe92a,	// (0x00036a96) main_camera_pane_g8

0x26f0,	// (0x0002a85c) main_video_pane_g7_ParamLimits

0x26f0,	// (0x0002a85c) main_video_pane_g7

0xb874,	// (0x000339e0) main_camera2_pane_t7_ParamLimits

0xb874,	// (0x000339e0) main_camera2_pane_t7

0xeb34,	// (0x00036ca0) scroll_pane_cp025_ParamLimits

0xeb34,	// (0x00036ca0) scroll_pane_cp025

0xeb48,	// (0x00036cb4) scroll_pane_cp026_ParamLimits

0xeb48,	// (0x00036cb4) scroll_pane_cp026

0xeb57,	// (0x00036cc3) wml_content_pane_ParamLimits

0xb655,	// (0x000337c1) main_touch_calib_pane

0x6dbf,	// (0x0002ef2b) main_touch_calib_pane_g1

0x6dd1,	// (0x0002ef3d) main_touch_calib_pane_g2

0x6de3,	// (0x0002ef4f) main_touch_calib_pane_g3

0x6df5,	// (0x0002ef61) main_touch_calib_pane_g4

0x0003,

0xf761,	// (0x000378cd) main_touch_calib_pane_g

0x6e07,	// (0x0002ef73) main_touch_calib_pane_t1

0x6e21,	// (0x0002ef8d) main_touch_calib_pane_t2

0x0004,

0xf76a,	// (0x000378d6) main_touch_calib_pane_t

0x3b49,	// (0x0002bcb5) mup_progress_pane_cp02

0x3b7e,	// (0x0002bcea) navi_pane_g1

0x3c39,	// (0x0002bda5) navi_pane_mp_t3

0xb647,	// (0x000337b3) main_mp3_pane_ParamLimits

0x5ff1,	// (0x0002e15d) navi_pane_ParamLimits

0x6c45,	// (0x0002edb1) main_mp3_pane_g1_ParamLimits

0x6c88,	// (0x0002edf4) main_mp3_pane_g2_ParamLimits

0x6c94,	// (0x0002ee00) main_mp3_pane_g3_ParamLimits

0x6c94,	// (0x0002ee00) main_mp3_pane_g3

0x6ca2,	// (0x0002ee0e) main_mp3_pane_g4_ParamLimits

0x6ca2,	// (0x0002ee0e) main_mp3_pane_g4

0x6cae,	// (0x0002ee1a) main_mp3_pane_g5_ParamLimits

0x6cae,	// (0x0002ee1a) main_mp3_pane_g5

0x6cbc,	// (0x0002ee28) main_mp3_pane_g6_ParamLimits

0x6cbc,	// (0x0002ee28) main_mp3_pane_g6

0x6cc9,	// (0x0002ee35) main_mp3_pane_g7_ParamLimits

0x6cc9,	// (0x0002ee35) main_mp3_pane_g7

0x6cd5,	// (0x0002ee41) main_mp3_pane_g8_ParamLimits

0x6cd5,	// (0x0002ee41) main_mp3_pane_g8

0xf743,	// (0x000378af) main_mp3_pane_g_ParamLimits

0x6cef,	// (0x0002ee5b) main_mp3_pane_t2

0x6cfd,	// (0x0002ee69) main_mp3_pane_t3

0x6d0b,	// (0x0002ee77) main_mp3_pane_t4

0x6d19,	// (0x0002ee85) main_mp3_pane_t5

0x0005,

0xf754,	// (0x000378c0) main_mp3_pane_t

0x6d35,	// (0x0002eea1) mup_progress_pane_cp01

0xb5f4,	// (0x00033760) aid_zoom_text_secondary2

0x6a53,	// (0x0002ebbf) list_cale_ev2_pane

0x6a5b,	// (0x0002ebc7) scroll_pane_cp023_ParamLimits

0x6e7b,	// (0x0002efe7) field_cale_ev2_pane_ParamLimits

0x6e7b,	// (0x0002efe7) field_cale_ev2_pane

0x6e9f,	// (0x0002f00b) field_cale_ev2_pane_g1_ParamLimits

0x6e9f,	// (0x0002f00b) field_cale_ev2_pane_g1

0x6eab,	// (0x0002f017) field_cale_ev2_pane_g2_ParamLimits

0x6eab,	// (0x0002f017) field_cale_ev2_pane_g2

0x6ec3,	// (0x0002f02f) field_cale_ev2_pane_g3_ParamLimits

0x6ec3,	// (0x0002f02f) field_cale_ev2_pane_g3

0x0003,

0xf775,	// (0x000378e1) field_cale_ev2_pane_g_ParamLimits

0xf775,	// (0x000378e1) field_cale_ev2_pane_g

0x6ee7,	// (0x0002f053) field_cale_ev2_pane_t1_ParamLimits

0x6ee7,	// (0x0002f053) field_cale_ev2_pane_t1

0x6efe,	// (0x0002f06a) field_cale_ev2_pane_t2_ParamLimits

0x6efe,	// (0x0002f06a) field_cale_ev2_pane_t2

0x0001,

0xf77e,	// (0x000378ea) field_cale_ev2_pane_t_ParamLimits

0xf77e,	// (0x000378ea) field_cale_ev2_pane_t

0x44e8,	// (0x0002c654) main_postcard_pane_g5_ParamLimits

0x44e8,	// (0x0002c654) main_postcard_pane_g5

0x44fe,	// (0x0002c66a) main_postcard_pane_g6_ParamLimits

0x44fe,	// (0x0002c66a) main_postcard_pane_g6

0x249c,	// (0x0002a608) camera2_autofocus_pane_cp_ParamLimits

0x249c,	// (0x0002a608) camera2_autofocus_pane_cp

0xb647,	// (0x000337b3) main_mup3_pane

0x6f33,	// (0x0002f09f) main_mup3_pane_g1_ParamLimits

0x6f33,	// (0x0002f09f) main_mup3_pane_g1

0x6f55,	// (0x0002f0c1) main_mup3_pane_g2_ParamLimits

0x6f55,	// (0x0002f0c1) main_mup3_pane_g2

0x6fd8,	// (0x0002f144) main_mup3_pane_g3_ParamLimits

0x6fd8,	// (0x0002f144) main_mup3_pane_g3

0x7024,	// (0x0002f190) main_mup3_pane_g4_ParamLimits

0x7024,	// (0x0002f190) main_mup3_pane_g4

0x7070,	// (0x0002f1dc) main_mup3_pane_g5_ParamLimits

0x7070,	// (0x0002f1dc) main_mup3_pane_g5

0x70bc,	// (0x0002f228) main_mup3_pane_g6_ParamLimits

0x70bc,	// (0x0002f228) main_mup3_pane_g6

0x70cf,	// (0x0002f23b) main_mup3_pane_g7_ParamLimits

0x70cf,	// (0x0002f23b) main_mup3_pane_g7

0x0007,

0xf78e,	// (0x000378fa) main_mup3_pane_g_ParamLimits

0xf78e,	// (0x000378fa) main_mup3_pane_g

0x714e,	// (0x0002f2ba) main_mup3_pane_t1_ParamLimits

0x714e,	// (0x0002f2ba) main_mup3_pane_t1

0x71c6,	// (0x0002f332) main_mup3_pane_t2_ParamLimits

0x71c6,	// (0x0002f332) main_mup3_pane_t2

0x729c,	// (0x0002f408) main_mup3_pane_t4_ParamLimits

0x729c,	// (0x0002f408) main_mup3_pane_t4

0x72fa,	// (0x0002f466) main_mup3_pane_t5_ParamLimits

0x72fa,	// (0x0002f466) main_mup3_pane_t5

0x73be,	// (0x0002f52a) main_mup3_pane_t6_ParamLimits

0x73be,	// (0x0002f52a) main_mup3_pane_t6

0x0005,

0xf79f,	// (0x0003790b) main_mup3_pane_t_ParamLimits

0xf79f,	// (0x0003790b) main_mup3_pane_t

0x7478,	// (0x0002f5e4) mup3_progress_pane_ParamLimits

0x7478,	// (0x0002f5e4) mup3_progress_pane

0x7514,	// (0x0002f680) popup_mup3_control_window_ParamLimits

0x7514,	// (0x0002f680) popup_mup3_control_window

0x7534,	// (0x0002f6a0) popup_mup3_text_window

0x7552,	// (0x0002f6be) mup3_progress_pane_t1

0x7570,	// (0x0002f6dc) mup3_progress_pane_t2

0x758e,	// (0x0002f6fa) mup3_progress_pane_t3

0x0002,

0xf7ac,	// (0x00037918) mup3_progress_pane_t

0x75ab,	// (0x0002f717) mup_progress_pane_cp03

0xdfe5,	// (0x00036151) bg_tb_trans_pane_cp04

0x75bb,	// (0x0002f727) mup3_volume_pane

0x75c3,	// (0x0002f72f) popup_mup3_control_window_g1

0x75cc,	// (0x0002f738) mup3_volume_pane_g1

0x75d5,	// (0x0002f741) mup3_volume_pane_g2

0x75de,	// (0x0002f74a) mup3_volume_pane_g3

0x0002,

0xf7b3,	// (0x0003791f) mup3_volume_pane_g

0xdfe5,	// (0x00036151) bg_tb_trans_pane_cp03

0x75e7,	// (0x0002f753) popup_mup3_text_window_g1

0x75ef,	// (0x0002f75b) popup_mup3_text_window_t1

0xe7ad,	// (0x00036919) list_calc_item_pane_g1_ParamLimits

0x6617,	// (0x0002e783) mup_volume_pane_cp_g1

0x6e3b,	// (0x0002efa7) main_touch_calib_pane_t3

0x6e4f,	// (0x0002efbb) main_touch_calib_pane_t4

0x6e65,	// (0x0002efd1) main_touch_calib_pane_t5

0xb5e0,	// (0x0003374c) aid_cell_size_toolbar2

0xb5e8,	// (0x00033754) aid_popup3_width_pane

0xb5f4,	// (0x00033760) aid_zoom_text_msg_primary

0x0b0c,	// (0x00028c78) vorec_t7

0xe771,	// (0x000368dd) bg_calc_paper_pane_g1_ParamLimits

0xe77d,	// (0x000368e9) bg_calc_paper_pane_g2_ParamLimits

0xe789,	// (0x000368f5) bg_calc_paper_pane_g3_ParamLimits

0xe795,	// (0x00036901) bg_calc_paper_pane_g4_ParamLimits

0xe7a1,	// (0x0003690d) bg_calc_paper_pane_g5_ParamLimits

0x206f,	// (0x0002a1db) bg_calc_paper_pane_g6_ParamLimits

0x2082,	// (0x0002a1ee) bg_calc_paper_pane_g7_ParamLimits

0x2095,	// (0x0002a201) bg_calc_paper_pane_g8_ParamLimits

0xf166,	// (0x000372d2) bg_calc_paper_pane_g_ParamLimits

0x20a6,	// (0x0002a212) calc_bg_paper_pane_g9_ParamLimits

0x25fe,	// (0x0002a76a) image_qvga_pane_ParamLimits

0x25fe,	// (0x0002a76a) image_qvga_pane

0xe692,	// (0x000367fe) bg_popup_sub_pane_cp04_ParamLimits

0x4691,	// (0x0002c7fd) popup_mup_playback_window_g1_ParamLimits

0x469d,	// (0x0002c809) popup_mup_playback_window_t1_ParamLimits

0x46b2,	// (0x0002c81e) popup_mup_playback_window_t2_ParamLimits

0xf4f2,	// (0x0003765e) popup_mup_playback_window_t_ParamLimits

0x6338,	// (0x0002e4a4) main_mup2_pane_g3_ParamLimits

0x6338,	// (0x0002e4a4) main_mup2_pane_g3

0x2941,	// (0x0002aaad) popup_toolbar_window_cp04

0x4ed7,	// (0x0002d043) popup_call2_audio_second_window_g3_ParamLimits

0x4ed7,	// (0x0002d043) popup_call2_audio_second_window_g3

0x52e1,	// (0x0002d44d) popup_call2_audio_first_window_g4_ParamLimits

0x52e1,	// (0x0002d44d) popup_call2_audio_first_window_g4

0x5960,	// (0x0002dacc) popup_call2_audio_in_window_g4_ParamLimits

0x5960,	// (0x0002dacc) popup_call2_audio_in_window_g4

0x46c7,	// (0x0002c833) aid_area_sk_bg_cut_ParamLimits

0x46c7,	// (0x0002c833) aid_area_sk_bg_cut

0x46e5,	// (0x0002c851) aid_area_sk_bg_cut_2_ParamLimits

0x46e5,	// (0x0002c851) aid_area_sk_bg_cut_2

0x68bc,	// (0x0002ea28) aid_placing_details_win

0x68c4,	// (0x0002ea30) aid_placing_details_win_2

0x6b57,	// (0x0002ecc3) camera2_autofocus_pane_g1_ParamLimits

0x07fd,	// (0x00028969) popup_fixed_preview_cale_window_ParamLimits

0x07fd,	// (0x00028969) popup_fixed_preview_cale_window

0x3cf9,	// (0x0002be65) navi_slider_pane_g3

0x3d02,	// (0x0002be6e) navi_slider_pane_g4

0x3d0b,	// (0x0002be77) navi_slider_pane_g5

0x3cf9,	// (0x0002be65) navi_slider_pane_g6

0xb7ab,	// (0x00033917) navi_slider_pane_g7

0x4280,	// (0x0002c3ec) mup_scale_pane_g3

0x4289,	// (0x0002c3f5) mup_scale_pane_g4

0x4292,	// (0x0002c3fe) mup_scale_pane_g5

0x429b,	// (0x0002c407) mup_scale_pane_g6

0x42a4,	// (0x0002c410) mup_scale_pane_g7

0x3cf9,	// (0x0002be65) cams2_slider_pane_g3

0x66c9,	// (0x0002e835) cams2_slider_pane_g4

0xb8e2,	// (0x00033a4e) cams2_slider_pane_g5

0x3cf9,	// (0x0002be65) cams2_slider_pane_g6

0xb8ea,	// (0x00033a56) cams2_slider_pane_g7

0x69d0,	// (0x0002eb3c) camera2_autofocus_pane_cp_g1

0x75fd,	// (0x0002f769) bg_popup_preview_window_pane_cp02_ParamLimits

0x75fd,	// (0x0002f769) bg_popup_preview_window_pane_cp02

0x7609,	// (0x0002f775) list_fp_cale_pane_ParamLimits

0x7609,	// (0x0002f775) list_fp_cale_pane

0x7615,	// (0x0002f781) popup_fixed_preview_cale_window_t1_ParamLimits

0x7615,	// (0x0002f781) popup_fixed_preview_cale_window_t1

0x7627,	// (0x0002f793) popup_fixed_preview_cale_window_t2_ParamLimits

0x7627,	// (0x0002f793) popup_fixed_preview_cale_window_t2

0x763c,	// (0x0002f7a8) popup_fixed_preview_cale_window_t3_ParamLimits

0x763c,	// (0x0002f7a8) popup_fixed_preview_cale_window_t3

0x0002,

0xf7ba,	// (0x00037926) popup_fixed_preview_cale_window_t_ParamLimits

0xf7ba,	// (0x00037926) popup_fixed_preview_cale_window_t

0x765f,	// (0x0002f7cb) list_single_fp_cale_pane_ParamLimits

0x765f,	// (0x0002f7cb) list_single_fp_cale_pane

0x7677,	// (0x0002f7e3) list_single_fp_cale_pane_g1_ParamLimits

0x7677,	// (0x0002f7e3) list_single_fp_cale_pane_g1

0x7683,	// (0x0002f7ef) list_single_fp_cale_pane_g2_ParamLimits

0x7683,	// (0x0002f7ef) list_single_fp_cale_pane_g2

0x0002,

0xf7c1,	// (0x0003792d) list_single_fp_cale_pane_g_ParamLimits

0xf7c1,	// (0x0003792d) list_single_fp_cale_pane_g

0x769c,	// (0x0002f808) list_single_fp_cale_pane_t1_ParamLimits

0x769c,	// (0x0002f808) list_single_fp_cale_pane_t1

0x76ae,	// (0x0002f81a) list_single_fp_cale_pane_t2_ParamLimits

0x76ae,	// (0x0002f81a) list_single_fp_cale_pane_t2

0x0001,

0xf7c8,	// (0x00037934) list_single_fp_cale_pane_t_ParamLimits

0xf7c8,	// (0x00037934) list_single_fp_cale_pane_t

0x0000,

0x0000,

0x0000,

0x0000,

0xb655,	// (0x000337c1) main_dialer_pane

0x76e1,	// (0x0002f84d) aid_cell_size_keypad

0x76eb,	// (0x0002f857) dialer_ne_pane

0x76f5,	// (0x0002f861) grid_dialer_command_1_pane

0x76fd,	// (0x0002f869) grid_dialer_command_2_pane

0x7705,	// (0x0002f871) grid_dialer_keypad_pane

0x7719,	// (0x0002f885) bg_popup_call_pane_cp06_ParamLimits

0x7719,	// (0x0002f885) bg_popup_call_pane_cp06

0x7725,	// (0x0002f891) dialer_ne_clear_pane_ParamLimits

0x7725,	// (0x0002f891) dialer_ne_clear_pane

0x7731,	// (0x0002f89d) dialer_ne_pane_g1

0x7739,	// (0x0002f8a5) dialer_ne_pane_t1_ParamLimits

0x7739,	// (0x0002f8a5) dialer_ne_pane_t1

0x774b,	// (0x0002f8b7) dialer_ne_pane_t2_ParamLimits

0x774b,	// (0x0002f8b7) dialer_ne_pane_t2

0x7775,	// (0x0002f8e1) dialer_ne_pane_t3_ParamLimits

0x7775,	// (0x0002f8e1) dialer_ne_pane_t3

0x0002,

0xf7cd,	// (0x00037939) dialer_ne_pane_t_ParamLimits

0xf7cd,	// (0x00037939) dialer_ne_pane_t

0x77a5,	// (0x0002f911) dialer_ne_pane_t3_copy1_ParamLimits

0x77a5,	// (0x0002f911) dialer_ne_pane_t3_copy1

0x77d4,	// (0x0002f940) cell_dialer_keypad_pane_ParamLimits

0x77d4,	// (0x0002f940) cell_dialer_keypad_pane

0x77eb,	// (0x0002f957) cell_dialer_command_1_pane_ParamLimits

0x77eb,	// (0x0002f957) cell_dialer_command_1_pane

0x7801,	// (0x0002f96d) cell_dialer_command_2_pane_ParamLimits

0x7801,	// (0x0002f96d) cell_dialer_command_2_pane

0x7810,	// (0x0002f97c) bg_button_pane_cp02_ParamLimits

0x7810,	// (0x0002f97c) bg_button_pane_cp02

0x781c,	// (0x0002f988) cell_dialer_keypad_pane_g1_ParamLimits

0x781c,	// (0x0002f988) cell_dialer_keypad_pane_g1

0x7810,	// (0x0002f97c) bg_button_pane_cp03_ParamLimits

0x7810,	// (0x0002f97c) bg_button_pane_cp03

0x7831,	// (0x0002f99d) cell_dialer_command_1_pane_g1_ParamLimits

0x7831,	// (0x0002f99d) cell_dialer_command_1_pane_g1

0x7845,	// (0x0002f9b1) bg_button_pane_cp04

0x784d,	// (0x0002f9b9) cell_dialer_command_2_pane_g1

0x3ce8,	// (0x0002be54) bg_button_pane_cp06

0x7855,	// (0x0002f9c1) dialer_ne_clear_pane_g1

0x3b8a,	// (0x0002bcf6) navi_pane_g2

0x3bb8,	// (0x0002bd24) navi_pane_g3

0x0002,

0xf3f5,	// (0x00037561) navi_pane_g

0x3c47,	// (0x0002bdb3) navi_pane_mv_g2

0x3c6e,	// (0x0002bdda) navi_pane_mv_g5

0x3c76,	// (0x0002bde2) navi_pane_mv_t1

0xe765,	// (0x000368d1) main_clock2_pane

0x788e,	// (0x0002f9fa) main_clock2_list_pane_ParamLimits

0x788e,	// (0x0002f9fa) main_clock2_list_pane

0x78c8,	// (0x0002fa34) main_clock2_pane_t1_ParamLimits

0x78c8,	// (0x0002fa34) main_clock2_pane_t1

0x7904,	// (0x0002fa70) main_clock2_pane_t2_ParamLimits

0x7904,	// (0x0002fa70) main_clock2_pane_t2

0x0004,

0xf7d4,	// (0x00037940) main_clock2_pane_t_ParamLimits

0xf7d4,	// (0x00037940) main_clock2_pane_t

0x79a3,	// (0x0002fb0f) popup_clock_analogue_window_cp03_ParamLimits

0x79a3,	// (0x0002fb0f) popup_clock_analogue_window_cp03

0x79ca,	// (0x0002fb36) popup_clock_digital_window_cp02_ParamLimits

0x79ca,	// (0x0002fb36) popup_clock_digital_window_cp02

0x7a45,	// (0x0002fbb1) main_clock2_list_single_pane_ParamLimits

0x7a45,	// (0x0002fbb1) main_clock2_list_single_pane

0x3ce8,	// (0x0002be54) list_highlight_pane_cp05

0x7a57,	// (0x0002fbc3) main_clock2_list_single_pane_t1

0x2941,	// (0x0002aaad) popup_toolbar_window_cp04_ParamLimits

0x6b65,	// (0x0002ecd1) camera2_autofocus_pane_g2_ParamLimits

0x6b65,	// (0x0002ecd1) camera2_autofocus_pane_g2

0x6b71,	// (0x0002ecdd) camera2_autofocus_pane_g3_ParamLimits

0x6b71,	// (0x0002ecdd) camera2_autofocus_pane_g3

0x6b7d,	// (0x0002ece9) camera2_autofocus_pane_g4_ParamLimits

0x6b7d,	// (0x0002ece9) camera2_autofocus_pane_g4

0x6b89,	// (0x0002ecf5) camera2_autofocus_pane_g5_ParamLimits

0x6b89,	// (0x0002ecf5) camera2_autofocus_pane_g5

0x0004,

0xf71d,	// (0x00037889) camera2_autofocus_pane_g_ParamLimits

0xf71d,	// (0x00037889) camera2_autofocus_pane_g

0x6f13,	// (0x0002f07f) camera2_autofocus_pane_cp_g2

0x6f1b,	// (0x0002f087) camera2_autofocus_pane_cp_g3

0x6f23,	// (0x0002f08f) camera2_autofocus_pane_cp_g4

0x6f2b,	// (0x0002f097) camera2_autofocus_pane_cp_g5

0x0004,

0xf783,	// (0x000378ef) camera2_autofocus_pane_cp_g

0x7711,	// (0x0002f87d) popup_dialer_spcha_window

0xdfe5,	// (0x00036151) bg_popup_sub_pane_cp07

0x7a87,	// (0x0002fbf3) list_spcha_pane

0x7a8f,	// (0x0002fbfb) list_single_spcha_pane_ParamLimits

0x7a8f,	// (0x0002fbfb) list_single_spcha_pane

0xdfe5,	// (0x00036151) list_highlight_pane_cp06

0x7aa0,	// (0x0002fc0c) list_single_spcha_pane_t1

0x570a,	// (0x0002d876) popup_call2_audio_out_window_g4_ParamLimits

0x570a,	// (0x0002d876) popup_call2_audio_out_window_g4

0xb655,	// (0x000337c1) main_imed2_pane

0xb814,	// (0x00033980) popup_imed_adjust2_window

0x0cc7,	// (0x00028e33) popup_imed_trans_window_ParamLimits

0x0cc7,	// (0x00028e33) popup_imed_trans_window

0x6732,	// (0x0002e89e) popup_blid_sat_info2_window_t1

0x6740,	// (0x0002e8ac) popup_blid_sat_info2_window_t2

0x000a,

0xf6b2,	// (0x0003781e) popup_blid_sat_info2_window_t

0x7aae,	// (0x0002fc1a) aid_size_cell_colour_35

0x7ace,	// (0x0002fc3a) aid_size_cell_colour_112

0x7aee,	// (0x0002fc5a) aid_size_cell_effect

0x5fd0,	// (0x0002e13c) bg_tb_trans_pane_cp02

0xee0f,	// (0x00036f7b) heading_imed_pane

0x7b0e,	// (0x0002fc7a) listscroll_imed_pane

0x7b1a,	// (0x0002fc86) heading_imed_pane_g1

0x7b22,	// (0x0002fc8e) heading_imed_pane_t1

0x7b30,	// (0x0002fc9c) grid_imed_colour_35_pane_ParamLimits

0x7b30,	// (0x0002fc9c) grid_imed_colour_35_pane

0x7b4c,	// (0x0002fcb8) grid_imed_effect_pane

0x7b63,	// (0x0002fccf) list_imed_aspect_pane

0x7b6b,	// (0x0002fcd7) scroll_pane_cp027_ParamLimits

0x7b6b,	// (0x0002fcd7) scroll_pane_cp027

0x7b7c,	// (0x0002fce8) cell_imed_effect_pane_ParamLimits

0x7b7c,	// (0x0002fce8) cell_imed_effect_pane

0x7ba1,	// (0x0002fd0d) cell_imed_colour_pane_ParamLimits

0x7ba1,	// (0x0002fd0d) cell_imed_colour_pane

0x7beb,	// (0x0002fd57) cell_imed_colour_pane_g1_ParamLimits

0x7beb,	// (0x0002fd57) cell_imed_colour_pane_g1

0x7bfc,	// (0x0002fd68) hgihlgiht_grid_pane_cp016_ParamLimits

0x7bfc,	// (0x0002fd68) hgihlgiht_grid_pane_cp016

0x7c0d,	// (0x0002fd79) cell_imed_effect_pane_g1

0x7c15,	// (0x0002fd81) grid_highlight_pane_cp017

0x7c1e,	// (0x0002fd8a) list_imed_single_pane_ParamLimits

0x7c1e,	// (0x0002fd8a) list_imed_single_pane

0xdfe5,	// (0x00036151) list_highlight_pane_cp07

0x7c32,	// (0x0002fd9e) list_imed_aspect_pane_comp1_t1

0x5fd0,	// (0x0002e13c) bg_tb_trans_pane_cp05

0x7c54,	// (0x0002fdc0) popup_imed_adjust2_window_g1

0x7c7b,	// (0x0002fde7) popup_imed_adjust2_window_t1

0x7c93,	// (0x0002fdff) slider_imed_adjust_pane

0x7ca7,	// (0x0002fe13) slider_imed_adjust_pane_g1

0x7cb7,	// (0x0002fe23) slider_imed_adjust_pane_g2

0x7cc7,	// (0x0002fe33) slider_imed_adjust_pane_g3

0x7cd8,	// (0x0002fe44) slider_imed_adjust_pane_g4

0x0003,

0xf7f1,	// (0x0003795d) slider_imed_adjust_pane_g

0x7ce9,	// (0x0002fe55) aid_size_cell_clipart2

0x7cf5,	// (0x0002fe61) grid_imed_clipart_pane

0x7cff,	// (0x0002fe6b) scroll_pane_cp031

0x7d07,	// (0x0002fe73) cell_imed_clipart_pane_ParamLimits

0x7d07,	// (0x0002fe73) cell_imed_clipart_pane

0x7d24,	// (0x0002fe90) cell_imed_clipart_pane_g1

0xdfe5,	// (0x00036151) grid_highlight_pane_cp014

0x78a3,	// (0x0002fa0f) main_clock2_pane_g1_ParamLimits

0x78a3,	// (0x0002fa0f) main_clock2_pane_g1

0x79ec,	// (0x0002fb58) aid_call2_pane_cp10

0x79fe,	// (0x0002fb6a) aid_call_pane_cp10

0x3a82,	// (0x0002bbee) popup_clock_analogue_window_cp10_g1

0x3a82,	// (0x0002bbee) popup_clock_analogue_window_cp10_g2

0x7a10,	// (0x0002fb7c) popup_clock_analogue_window_cp10_g3

0x7a10,	// (0x0002fb7c) popup_clock_analogue_window_cp10_g4

0x3a82,	// (0x0002bbee) popup_clock_analogue_window_cp10_g5

0x0004,

0xf7df,	// (0x0003794b) popup_clock_analogue_window_cp10_g

0x7a26,	// (0x0002fb92) popup_clock_analogue_window_cp10_t1

0x12e6,	// (0x00029452) clock_digital_number_pane_cp10_ParamLimits

0x12e6,	// (0x00029452) clock_digital_number_pane_cp10

0x1300,	// (0x0002946c) clock_digital_number_pane_cp11_ParamLimits

0x1300,	// (0x0002946c) clock_digital_number_pane_cp11

0x131a,	// (0x00029486) clock_digital_number_pane_cp12_ParamLimits

0x131a,	// (0x00029486) clock_digital_number_pane_cp12

0x1334,	// (0x000294a0) clock_digital_number_pane_cp13_ParamLimits

0x1334,	// (0x000294a0) clock_digital_number_pane_cp13

0x134e,	// (0x000294ba) clock_digital_separator_pane_cp10_ParamLimits

0x134e,	// (0x000294ba) clock_digital_separator_pane_cp10

0x7a65,	// (0x0002fbd1) popup_clock_digital_window_cp02_t1_ParamLimits

0x7a65,	// (0x0002fbd1) popup_clock_digital_window_cp02_t1

0xe68a,	// (0x000367f6) clock_digital_number_pane_cp10_g1

0xe68a,	// (0x000367f6) clock_digital_number_pane_cp10_g2

0x0001,

0xf7fa,	// (0x00037966) clock_digital_number_pane_cp10_g

0xe68a,	// (0x000367f6) clock_digital_separator_pane_cp10_g1

0xe68a,	// (0x000367f6) clock_digital_separator_pane_g2_cp10

0x3cb8,	// (0x0002be24) navi_pane_vded_g4

0x3cc1,	// (0x0002be2d) navi_pane_vded_g5

0x3cca,	// (0x0002be36) navi_pane_vded_t1

0xb655,	// (0x000337c1) main_vded_pane

0x7d2d,	// (0x0002fe99) main_vded_pane_g1

0x7d39,	// (0x0002fea5) main_vded_pane_g2

0x7d45,	// (0x0002feb1) main_vded_pane_g3

0x0002,

0xf7ff,	// (0x0003796b) main_vded_pane_g

0x7d51,	// (0x0002febd) main_vded_pane_t1

0x7d5f,	// (0x0002fecb) main_vded_pane_t2

0x0001,

0xf806,	// (0x00037972) main_vded_pane_t

0x7d6d,	// (0x0002fed9) vded_slider_pane

0x7d77,	// (0x0002fee3) vded_video_pane

0x7d83,	// (0x0002feef) vded_video_pane_g1

0x7d8d,	// (0x0002fef9) vded_video_pane_g2

0x69d0,	// (0x0002eb3c) vded_video_pane_g3

0x0002,

0xf80b,	// (0x00037977) vded_video_pane_g

0x7d96,	// (0x0002ff02) vded_slider_pane_g1

0x6617,	// (0x0002e783) vded_slider_pane_g2

0x7d9f,	// (0x0002ff0b) vded_slider_pane_g3

0x7da8,	// (0x0002ff14) vded_slider_pane_g4

0x7db1,	// (0x0002ff1d) vded_slider_pane_g5

0x0004,

0xf812,	// (0x0003797e) vded_slider_pane_g

0x74fe,	// (0x0002f66a) mup3_rocker_pane_ParamLimits

0x74fe,	// (0x0002f66a) mup3_rocker_pane

0x7dba,	// (0x0002ff26) mup3_control_keys_pane_g1

0x7dc2,	// (0x0002ff2e) mup3_control_keys_pane_g2

0x7dca,	// (0x0002ff36) mup3_control_keys_pane_g3

0x7dd2,	// (0x0002ff3e) mup3_control_keys_pane_g4

0x0003,

0xf81d,	// (0x00037989) mup3_control_keys_pane_g

0x0834,	// (0x000289a0) popup_toolbar2_fixed_window_cp01_ParamLimits

0x0834,	// (0x000289a0) popup_toolbar2_fixed_window_cp01

0x753c,	// (0x0002f6a8) popup_toolbar2_fixed_window_cp02_ParamLimits

0x753c,	// (0x0002f6a8) popup_toolbar2_fixed_window_cp02

0x5049,	// (0x0002d1b5) popup_call2_audio_second_window_t4_ParamLimits

0x5049,	// (0x0002d1b5) popup_call2_audio_second_window_t4

0x5577,	// (0x0002d6e3) popup_call2_audio_first_window_t6_ParamLimits

0x5577,	// (0x0002d6e3) popup_call2_audio_first_window_t6

0x580d,	// (0x0002d979) popup_call2_audio_out_window_t6_ParamLimits

0x580d,	// (0x0002d979) popup_call2_audio_out_window_t6

0xb655,	// (0x000337c1) main_vitu_pane

0x7de2,	// (0x0002ff4e) aid_size_cell_itu_ParamLimits

0x7de2,	// (0x0002ff4e) aid_size_cell_itu

0xe7da,	// (0x00036946) bg_popup_window_pane_cp08_ParamLimits

0xe7da,	// (0x00036946) bg_popup_window_pane_cp08

0x7df8,	// (0x0002ff64) field_vitu_entry_pane_ParamLimits

0x7df8,	// (0x0002ff64) field_vitu_entry_pane

0x7e0f,	// (0x0002ff7b) grid_vitu_function_pane_ParamLimits

0x7e0f,	// (0x0002ff7b) grid_vitu_function_pane

0x7e2a,	// (0x0002ff96) grid_vitu_itu_pane_ParamLimits

0x7e2a,	// (0x0002ff96) grid_vitu_itu_pane

0x7e46,	// (0x0002ffb2) cell_vitu_itu_pane_ParamLimits

0x7e46,	// (0x0002ffb2) cell_vitu_itu_pane

0x7e6c,	// (0x0002ffd8) cell_vitu_function_pane_ParamLimits

0x7e6c,	// (0x0002ffd8) cell_vitu_function_pane

0xe7da,	// (0x00036946) bg_popup_sub_pane_cp08_ParamLimits

0xe7da,	// (0x00036946) bg_popup_sub_pane_cp08

0x7e9f,	// (0x0003000b) field_vitu_entry_pane_t1_ParamLimits

0x7e9f,	// (0x0003000b) field_vitu_entry_pane_t1

0x7ebf,	// (0x0003002b) field_vitu_entry_pane_t2_ParamLimits

0x7ebf,	// (0x0003002b) field_vitu_entry_pane_t2

0x0001,

0xf82b,	// (0x00037997) field_vitu_entry_pane_t_ParamLimits

0xf82b,	// (0x00037997) field_vitu_entry_pane_t

0x7edc,	// (0x00030048) bg_button_pane_cp05_ParamLimits

0x7edc,	// (0x00030048) bg_button_pane_cp05

0x7eea,	// (0x00030056) cell_vitu_itu_pane_g1

0x7f02,	// (0x0003006e) cell_vitu_itu_pane_t1_ParamLimits

0x7f02,	// (0x0003006e) cell_vitu_itu_pane_t1

0x7f14,	// (0x00030080) cell_vitu_itu_pane_t2_ParamLimits

0x7f14,	// (0x00030080) cell_vitu_itu_pane_t2

0x0002,

0xf830,	// (0x0003799c) cell_vitu_itu_pane_t_ParamLimits

0xf830,	// (0x0003799c) cell_vitu_itu_pane_t

0x7f49,	// (0x000300b5) bg_button_pane_cp07

0x7f53,	// (0x000300bf) cell_vitu_function_pane_g1

0xb65f,	// (0x000337cb) main_calc_pane_g1

0x06a8,	// (0x00028814) aid_visual_content_pane

0xb655,	// (0x000337c1) main_vradio_pane

0x7f5c,	// (0x000300c8) main_vradio_pane_g1_ParamLimits

0x7f5c,	// (0x000300c8) main_vradio_pane_g1

0x7f73,	// (0x000300df) main_vradio_pane_g2_ParamLimits

0x7f73,	// (0x000300df) main_vradio_pane_g2

0x0001,

0xf837,	// (0x000379a3) main_vradio_pane_g_ParamLimits

0xf837,	// (0x000379a3) main_vradio_pane_g

0x7f80,	// (0x000300ec) main_vradio_pane_t1_ParamLimits

0x7f80,	// (0x000300ec) main_vradio_pane_t1

0x7f95,	// (0x00030101) main_vradio_pane_t2_ParamLimits

0x7f95,	// (0x00030101) main_vradio_pane_t2

0x7faa,	// (0x00030116) main_vradio_pane_t3_ParamLimits

0x7faa,	// (0x00030116) main_vradio_pane_t3

0x0002,

0xf83c,	// (0x000379a8) main_vradio_pane_t_ParamLimits

0xf83c,	// (0x000379a8) main_vradio_pane_t

0x7fbe,	// (0x0003012a) vradio_rocker_control_pane_ParamLimits

0x7fbe,	// (0x0003012a) vradio_rocker_control_pane

0x7fd0,	// (0x0003013c) vradio_station_info_pane_ParamLimits

0x7fd0,	// (0x0003013c) vradio_station_info_pane

0x7fe0,	// (0x0003014c) vradio_frequency_info_pane_ParamLimits

0x7fe0,	// (0x0003014c) vradio_frequency_info_pane

0x69d0,	// (0x0002eb3c) vradio_station_info_pane_g1

0x7fef,	// (0x0003015b) vradio_station_info_pane_t1_ParamLimits

0x7fef,	// (0x0003015b) vradio_station_info_pane_t1

0x8011,	// (0x0003017d) vradio_station_info_pane_t2_ParamLimits

0x8011,	// (0x0003017d) vradio_station_info_pane_t2

0x0001,

0xf843,	// (0x000379af) vradio_station_info_pane_t_ParamLimits

0xf843,	// (0x000379af) vradio_station_info_pane_t

0x8023,	// (0x0003018f) vradio_tuning_pane

0x802b,	// (0x00030197) vradio_rocker_control_pane_g1

0x8033,	// (0x0003019f) vradio_rocker_control_pane_g2

0x803b,	// (0x000301a7) vradio_rocker_control_pane_g3

0x8043,	// (0x000301af) vradio_rocker_control_pane_g4

0x804b,	// (0x000301b7) vradio_rocker_control_pane_g5

0x0004,

0xf848,	// (0x000379b4) vradio_rocker_control_pane_g

0x8053,	// (0x000301bf) vradio_frequency_info_pane_g1

0x805d,	// (0x000301c9) vradio_frequency_info_pane_t1_ParamLimits

0x805d,	// (0x000301c9) vradio_frequency_info_pane_t1

0x8071,	// (0x000301dd) vradio_tuning_pane_g1

0x807c,	// (0x000301e8) vradio_tuning_pane_t1

0xb604,	// (0x00033770) area_side_right_pane_ParamLimits

0xb604,	// (0x00033770) area_side_right_pane

0x5f97,	// (0x0002e103) status_small_pane_g1

0x5f9f,	// (0x0002e10b) status_small_pane_g2

0x5fa8,	// (0x0002e114) status_small_pane_g3

0x5fb1,	// (0x0002e11d) status_small_pane_g4

0x0003,

0xf608,	// (0x00037774) status_small_pane_g

0x5fba,	// (0x0002e126) status_small_pane_t1

0xb655,	// (0x000337c1) main_video3_pane

0x808b,	// (0x000301f7) cams_zoom_vslider_pane

0x8093,	// (0x000301ff) image3_wide_pane_ParamLimits

0x8093,	// (0x000301ff) image3_wide_pane

0x80ad,	// (0x00030219) image3_wide_small_pane

0x80b9,	// (0x00030225) main_video3_pane_g1_ParamLimits

0x80b9,	// (0x00030225) main_video3_pane_g1

0x80d5,	// (0x00030241) main_video3_pane_g2_ParamLimits

0x80d5,	// (0x00030241) main_video3_pane_g2

0x0001,

0xf853,	// (0x000379bf) main_video3_pane_g_ParamLimits

0xf853,	// (0x000379bf) main_video3_pane_g

0x80f1,	// (0x0003025d) main_video3_pane_t1_ParamLimits

0x80f1,	// (0x0003025d) main_video3_pane_t1

0x811c,	// (0x00030288) main_video3_pane_t2_ParamLimits

0x811c,	// (0x00030288) main_video3_pane_t2

0x8149,	// (0x000302b5) main_video3_pane_t3_ParamLimits

0x8149,	// (0x000302b5) main_video3_pane_t3

0x0002,

0xf858,	// (0x000379c4) main_video3_pane_t_ParamLimits

0xf858,	// (0x000379c4) main_video3_pane_t

0x8176,	// (0x000302e2) cams_zoom_vslider_pane_g1

0x817f,	// (0x000302eb) cams_zoom_vslider_pane_g2

0x0001,

0xf85f,	// (0x000379cb) cams_zoom_vslider_pane_g

0x8187,	// (0x000302f3) small_slider_vertical_pane

0x69d0,	// (0x0002eb3c) small_slider_vertical_pane_g1

0x69d0,	// (0x0002eb3c) small_slider_vertical_pane_g2

0x818f,	// (0x000302fb) small_slider_vertical_pane_g3

0x0002,

0xf864,	// (0x000379d0) small_slider_vertical_pane_g

0xb655,	// (0x000337c1) main_hwr_training_pane

0x8198,	// (0x00030304) hwr_training_instruct_pane_ParamLimits

0x8198,	// (0x00030304) hwr_training_instruct_pane

0x81ba,	// (0x00030326) hwr_training_navi_pane_ParamLimits

0x81ba,	// (0x00030326) hwr_training_navi_pane

0x81d9,	// (0x00030345) hwr_training_write_pane_ParamLimits

0x81d9,	// (0x00030345) hwr_training_write_pane

0xdfe5,	// (0x00036151) bg_frame_shadow_pane

0x8229,	// (0x00030395) hwr_training_write_pane_g1

0x8231,	// (0x0003039d) hwr_training_write_pane_g2

0x8239,	// (0x000303a5) hwr_training_write_pane_g3

0x8241,	// (0x000303ad) hwr_training_write_pane_g4

0x8249,	// (0x000303b5) hwr_training_write_pane_g5

0x8251,	// (0x000303bd) hwr_training_write_pane_g6

0x8259,	// (0x000303c5) hwr_training_write_pane_g7

0x0006,

0xf86b,	// (0x000379d7) hwr_training_write_pane_g

0xb8f3,	// (0x00033a5f) hwr_training_navi_pane_g1_ParamLimits

0xb8f3,	// (0x00033a5f) hwr_training_navi_pane_g1

0xb905,	// (0x00033a71) hwr_training_navi_pane_g2_ParamLimits

0xb905,	// (0x00033a71) hwr_training_navi_pane_g2

0xb917,	// (0x00033a83) hwr_training_navi_pane_g3_ParamLimits

0xb917,	// (0x00033a83) hwr_training_navi_pane_g3

0xb927,	// (0x00033a93) hwr_training_navi_pane_g4_ParamLimits

0xb927,	// (0x00033a93) hwr_training_navi_pane_g4

0x0004,

0xf87a,	// (0x000379e6) hwr_training_navi_pane_g_ParamLimits

0xf87a,	// (0x000379e6) hwr_training_navi_pane_g

0xb934,	// (0x00033aa0) hwr_training_navi_pane_t1

0x8261,	// (0x000303cd) list_single_hwr_training_instruct_pane_ParamLimits

0x8261,	// (0x000303cd) list_single_hwr_training_instruct_pane

0x827d,	// (0x000303e9) list_single_hwr_training_instruct_pane_t1

0x6910,	// (0x0002ea7c) bg_frame_shadow_pane_g1

0x828c,	// (0x000303f8) bg_frame_shadow_pane_g2

0x8294,	// (0x00030400) bg_frame_shadow_pane_g3

0x829c,	// (0x00030408) bg_frame_shadow_pane_g4

0x82a4,	// (0x00030410) bg_frame_shadow_pane_g5

0x82ac,	// (0x00030418) bg_frame_shadow_pane_g6

0x82b4,	// (0x00030420) bg_frame_shadow_pane_g7

0xe83e,	// (0x000369aa) bg_frame_shadow_pane_g8

0x0007,

0xf885,	// (0x000379f1) bg_frame_shadow_pane_g

0xb655,	// (0x000337c1) main_video_tele_dialer_pane

0x1375,	// (0x000294e1) aid_size_cell_video_keypad_ParamLimits

0x1375,	// (0x000294e1) aid_size_cell_video_keypad

0x138f,	// (0x000294fb) grid_video_dialer_keypad_pane_ParamLimits

0x138f,	// (0x000294fb) grid_video_dialer_keypad_pane

0x13db,	// (0x00029547) video_down_pane_cp_ParamLimits

0x13db,	// (0x00029547) video_down_pane_cp

0x13ef,	// (0x0002955b) cell_video_dialer_keypad_pane_ParamLimits

0x13ef,	// (0x0002955b) cell_video_dialer_keypad_pane

0x82d8,	// (0x00030444) bg_button_pane_cp08_ParamLimits

0x82d8,	// (0x00030444) bg_button_pane_cp08

0x82e4,	// (0x00030450) cell_video_dialer_keypad_pane_g1_ParamLimits

0x82e4,	// (0x00030450) cell_video_dialer_keypad_pane_g1

0x74e8,	// (0x0002f654) mup3_rocker2_pane_ParamLimits

0x74e8,	// (0x0002f654) mup3_rocker2_pane

0x69d0,	// (0x0002eb3c) mup3_rocker2_pane_g1

0x0b94,	// (0x00028d00) main_dialer2_pane

0xb655,	// (0x000337c1) main_mp4_pane

0xb94a,	// (0x00033ab6) main_mp4_pane_g1_ParamLimits

0xb94a,	// (0x00033ab6) main_mp4_pane_g1

0xb94a,	// (0x00033ab6) main_mp4_pane_g2_ParamLimits

0xb94a,	// (0x00033ab6) main_mp4_pane_g2

0x1415,	// (0x00029581) main_mp4_pane_g3_ParamLimits

0x1415,	// (0x00029581) main_mp4_pane_g3

0xb958,	// (0x00033ac4) main_mp4_pane_g4_ParamLimits

0xb958,	// (0x00033ac4) main_mp4_pane_g4

0xb980,	// (0x00033aec) main_mp4_pane_g5_ParamLimits

0xb980,	// (0x00033aec) main_mp4_pane_g5

0x0005,

0xf8a5,	// (0x00037a11) main_mp4_pane_g_ParamLimits

0xf8a5,	// (0x00037a11) main_mp4_pane_g

0xb9d0,	// (0x00033b3c) main_mp4_pane_t1_ParamLimits

0xb9d0,	// (0x00033b3c) main_mp4_pane_t1

0xba2c,	// (0x00033b98) main_mp4_pane_t2_ParamLimits

0xba2c,	// (0x00033b98) main_mp4_pane_t2

0xba7e,	// (0x00033bea) main_mp4_pane_t3_ParamLimits

0xba7e,	// (0x00033bea) main_mp4_pane_t3

0xba9e,	// (0x00033c0a) main_mp4_pane_t4_ParamLimits

0xba9e,	// (0x00033c0a) main_mp4_pane_t4

0x0003,

0xf8b2,	// (0x00037a1e) main_mp4_pane_t_ParamLimits

0xf8b2,	// (0x00037a1e) main_mp4_pane_t

0xbade,	// (0x00033c4a) mp4_progress_pane_ParamLimits

0xbade,	// (0x00033c4a) mp4_progress_pane

0xbb28,	// (0x00033c94) mp4_rocker_pane_ParamLimits

0xbb28,	// (0x00033c94) mp4_rocker_pane

0xbb52,	// (0x00033cbe) mp4_progress_pane_t1

0xbb6b,	// (0x00033cd7) mp4_progress_pane_t2

0x0001,

0xf8bb,	// (0x00037a27) mp4_progress_pane_t

0xbb84,	// (0x00033cf0) mup_progress_pane_cp04

0xbb90,	// (0x00033cfc) mp4_rocker_pane_g1

0x145f,	// (0x000295cb) aid_cell_size_keypad2_ParamLimits

0x145f,	// (0x000295cb) aid_cell_size_keypad2

0x1475,	// (0x000295e1) dialer2_ne_pane_ParamLimits

0x1475,	// (0x000295e1) dialer2_ne_pane

0x148d,	// (0x000295f9) grid_dialer2_keypad_pane_ParamLimits

0x148d,	// (0x000295f9) grid_dialer2_keypad_pane

0x66d9,	// (0x0002e845) bg_popup_call_pane_cp07_ParamLimits

0x66d9,	// (0x0002e845) bg_popup_call_pane_cp07

0x831f,	// (0x0003048b) dialer2_ne_pane_t1_ParamLimits

0x831f,	// (0x0003048b) dialer2_ne_pane_t1

0x14a9,	// (0x00029615) cell_dialer2_keypad_pane_ParamLimits

0x14a9,	// (0x00029615) cell_dialer2_keypad_pane

0xbbac,	// (0x00033d18) bg_button_pane_pane_cp04_ParamLimits

0xbbac,	// (0x00033d18) bg_button_pane_pane_cp04

0x835f,	// (0x000304cb) cell_dialer2_keypad_pane_g1_ParamLimits

0x835f,	// (0x000304cb) cell_dialer2_keypad_pane_g1

0x2828,	// (0x0002a994) aid_placing_vt_set_content_ParamLimits

0x2828,	// (0x0002a994) aid_placing_vt_set_content

0x284c,	// (0x0002a9b8) aid_placing_vt_set_title_ParamLimits

0x284c,	// (0x0002a9b8) aid_placing_vt_set_title

0xb655,	// (0x000337c1) main_image3_pane

0x152d,	// (0x00029699) area_side_right_pane_cp01_ParamLimits

0x152d,	// (0x00029699) area_side_right_pane_cp01

0xb94a,	// (0x00033ab6) main_image3_pane_g1_ParamLimits

0xb94a,	// (0x00033ab6) main_image3_pane_g1

0x1546,	// (0x000296b2) main_image3_pane_g2_ParamLimits

0x1546,	// (0x000296b2) main_image3_pane_g2

0x156e,	// (0x000296da) main_image3_pane_g3_ParamLimits

0x156e,	// (0x000296da) main_image3_pane_g3

0x1598,	// (0x00029704) main_image3_pane_g4_ParamLimits

0x1598,	// (0x00029704) main_image3_pane_g4

0x0003,

0xf8ca,	// (0x00037a36) main_image3_pane_g_ParamLimits

0xf8ca,	// (0x00037a36) main_image3_pane_g

0x15c2,	// (0x0002972e) main_image3_pane_t1_ParamLimits

0x15c2,	// (0x0002972e) main_image3_pane_t1

0x161a,	// (0x00029786) main_image3_pane_t2_ParamLimits

0x161a,	// (0x00029786) main_image3_pane_t2

0x166c,	// (0x000297d8) main_image3_pane_t3_ParamLimits

0x166c,	// (0x000297d8) main_image3_pane_t3

0x0003,

0xf8d3,	// (0x00037a3f) main_image3_pane_t_ParamLimits

0xf8d3,	// (0x00037a3f) main_image3_pane_t

0xe7da,	// (0x00036946) grid_sctrl_middle_pane_cp01_ParamLimits

0xe7da,	// (0x00036946) grid_sctrl_middle_pane_cp01

0x83c7,	// (0x00030533) cell_sctrl_middle_pane_cp01_ParamLimits

0x83c7,	// (0x00030533) cell_sctrl_middle_pane_cp01

0x83e4,	// (0x00030550) cell_sctrl_middle_pane_cp01_g1_ParamLimits

0x83e4,	// (0x00030550) cell_sctrl_middle_pane_cp01_g1

0xb655,	// (0x000337c1) main_call4_pane

0x83f9,	// (0x00030565) aid_size_button_call4_ParamLimits

0x83f9,	// (0x00030565) aid_size_button_call4

0x842c,	// (0x00030598) call4_windows_pane_ParamLimits

0x842c,	// (0x00030598) call4_windows_pane

0x844e,	// (0x000305ba) grid_call4_button_pane_ParamLimits

0x844e,	// (0x000305ba) grid_call4_button_pane

0xbbec,	// (0x00033d58) call4_windows_conf_pane

0x8479,	// (0x000305e5) popup_call4_audio_first_window_ParamLimits

0x8479,	// (0x000305e5) popup_call4_audio_first_window

0x84a5,	// (0x00030611) popup_call4_audio_second_window_ParamLimits

0x84a5,	// (0x00030611) popup_call4_audio_second_window

0xbc29,	// (0x00033d95) popup_call4_audio_wait_window_ParamLimits

0xbc29,	// (0x00033d95) popup_call4_audio_wait_window

0x84bb,	// (0x00030627) cell_call4_button_pane_ParamLimits

0x84bb,	// (0x00030627) cell_call4_button_pane

0x84e2,	// (0x0003064e) bg_button_pane_cp09_ParamLimits

0x84e2,	// (0x0003064e) bg_button_pane_cp09

0x84ee,	// (0x0003065a) cell_call4_button_pane_g1_ParamLimits

0x84ee,	// (0x0003065a) cell_call4_button_pane_g1

0x8514,	// (0x00030680) cell_call4_button_pane_t1_ParamLimits

0x8514,	// (0x00030680) cell_call4_button_pane_t1

0xbc71,	// (0x00033ddd) popup_call4_audio_conf_window_ParamLimits

0xbc71,	// (0x00033ddd) popup_call4_audio_conf_window

0x7552,	// (0x0002f6be) mup3_progress_pane_t1_ParamLimits

0x7570,	// (0x0002f6dc) mup3_progress_pane_t2_ParamLimits

0x758e,	// (0x0002f6fa) mup3_progress_pane_t3_ParamLimits

0xf7ac,	// (0x00037918) mup3_progress_pane_t_ParamLimits

0x75ab,	// (0x0002f717) mup_progress_pane_cp03_ParamLimits

0x7dda,	// (0x0002ff46) mup3_control_keys_pane_g4_copy1

0xbb0c,	// (0x00033c78) mp4_rocker2_pane_ParamLimits

0xbb0c,	// (0x00033c78) mp4_rocker2_pane

0xbc8b,	// (0x00033df7) mp4_rocker2_pane_g1

0xbc93,	// (0x00033dff) mp4_rocker2_pane_g2

0xbc9b,	// (0x00033e07) mp4_rocker2_pane_g3

0xbca3,	// (0x00033e0f) mp4_rocker2_pane_g4

0xbcab,	// (0x00033e17) mp4_rocker2_pane_g5

0x0004,

0xf8dc,	// (0x00037a48) mp4_rocker2_pane_g

0xb655,	// (0x000337c1) main_camera4_pane

0xb655,	// (0x000337c1) main_video4_pane

0x13a9,	// (0x00029515) main_video_tele_dialer_pane_t1_ParamLimits

0x13a9,	// (0x00029515) main_video_tele_dialer_pane_t1

0x13c2,	// (0x0002952e) main_video_tele_dialer_pane_t2_ParamLimits

0x13c2,	// (0x0002952e) main_video_tele_dialer_pane_t2

0x0001,

0xf896,	// (0x00037a02) main_video_tele_dialer_pane_t_ParamLimits

0xf896,	// (0x00037a02) main_video_tele_dialer_pane_t

0x170c,	// (0x00029878) cam4_autofocus_pane_ParamLimits

0x170c,	// (0x00029878) cam4_autofocus_pane

0x1722,	// (0x0002988e) cam4_image_uncrop_pane_ParamLimits

0x1722,	// (0x0002988e) cam4_image_uncrop_pane

0x173b,	// (0x000298a7) cam4_indicators_pane_ParamLimits

0x173b,	// (0x000298a7) cam4_indicators_pane

0x176a,	// (0x000298d6) main_camera4_pane_g1_ParamLimits

0x176a,	// (0x000298d6) main_camera4_pane_g1

0x177c,	// (0x000298e8) main_camera4_pane_g2_ParamLimits

0x177c,	// (0x000298e8) main_camera4_pane_g2

0x178f,	// (0x000298fb) main_camera4_pane_g3_ParamLimits

0x178f,	// (0x000298fb) main_camera4_pane_g3

0x17a2,	// (0x0002990e) main_camera4_pane_g4_ParamLimits

0x17a2,	// (0x0002990e) main_camera4_pane_g4

0x17b5,	// (0x00029921) main_camera4_pane_g5_ParamLimits

0x17b5,	// (0x00029921) main_camera4_pane_g5

0x0005,

0xf8e7,	// (0x00037a53) main_camera4_pane_g_ParamLimits

0xf8e7,	// (0x00037a53) main_camera4_pane_g

0x17d9,	// (0x00029945) main_camera4_pane_t1_ParamLimits

0x17d9,	// (0x00029945) main_camera4_pane_t1

0xbce5,	// (0x00033e51) bg_tb_trans_pane_cp06

0xbcfb,	// (0x00033e67) cam4_indicators_pane_g1

0xbd0c,	// (0x00033e78) cam4_indicators_pane_g2

0x0002,

0xf902,	// (0x00037a6e) cam4_indicators_pane_g

0xbd24,	// (0x00033e90) cam4_indicators_pane_t1

0x1829,	// (0x00029995) main_video4_pane_g1_ParamLimits

0x1829,	// (0x00029995) main_video4_pane_g1

0x1838,	// (0x000299a4) main_video4_pane_g2_ParamLimits

0x1838,	// (0x000299a4) main_video4_pane_g2

0x1847,	// (0x000299b3) main_video4_pane_g3_ParamLimits

0x1847,	// (0x000299b3) main_video4_pane_g3

0x1856,	// (0x000299c2) main_video4_pane_g4_ParamLimits

0x1856,	// (0x000299c2) main_video4_pane_g4

0x0004,

0xf909,	// (0x00037a75) main_video4_pane_g_ParamLimits

0xf909,	// (0x00037a75) main_video4_pane_g

0x1874,	// (0x000299e0) vid4_indicators_pane_ParamLimits

0x1874,	// (0x000299e0) vid4_indicators_pane

0x18a2,	// (0x00029a0e) video4_image_uncrop_cif_pane_ParamLimits

0x18a2,	// (0x00029a0e) video4_image_uncrop_cif_pane

0x18bc,	// (0x00029a28) video4_image_uncrop_nhd_pane_ParamLimits

0x18bc,	// (0x00029a28) video4_image_uncrop_nhd_pane

0x1722,	// (0x0002988e) video4_image_uncrop_vga_pane_ParamLimits

0x1722,	// (0x0002988e) video4_image_uncrop_vga_pane

0xb647,	// (0x000337b3) bg_tb_trans_pane_cp07

0xbd52,	// (0x00033ebe) vid4_indicators_pane_g1

0xbd68,	// (0x00033ed4) vid4_indicators_pane_g2

0xbd7c,	// (0x00033ee8) vid4_indicators_pane_g3

0x0004,

0xf914,	// (0x00037a80) vid4_indicators_pane_g

0xbdad,	// (0x00033f19) vid4_indicators_pane_t1

0x854e,	// (0x000306ba) cam4_autofocus_pane_g1

0x8556,	// (0x000306c2) cam4_autofocus_pane_g2

0x855e,	// (0x000306ca) cam4_autofocus_pane_g3

0x0002,

0xf91f,	// (0x00037a8b) cam4_autofocus_pane_g

0x8566,	// (0x000306d2) cam4_autofocus_pane_g3_copy1

0x82bc,	// (0x00030428) video_down_pane_cp_t1

0x82ca,	// (0x00030436) video_down_pane_cp_t2

0x0001,

0xf89b,	// (0x00037a07) video_down_pane_cp_t

0xb647,	// (0x000337b3) popup_vitu2_window_ParamLimits

0xb647,	// (0x000337b3) popup_vitu2_window

0x18d2,	// (0x00029a3e) aid_size_cell2_itu2_ParamLimits

0x18d2,	// (0x00029a3e) aid_size_cell2_itu2

0x18f8,	// (0x00029a64) aid_size_cell_itu2_ParamLimits

0x18f8,	// (0x00029a64) aid_size_cell_itu2

0x1956,	// (0x00029ac2) bg_popup_window_pane_cp09_ParamLimits

0x1956,	// (0x00029ac2) bg_popup_window_pane_cp09

0x1964,	// (0x00029ad0) field_vitu2_entry_pane_ParamLimits

0x1964,	// (0x00029ad0) field_vitu2_entry_pane

0x198c,	// (0x00029af8) grid_vitu2_function_pane_ParamLimits

0x198c,	// (0x00029af8) grid_vitu2_function_pane

0x19dd,	// (0x00029b49) grid_vitu2_itu_pane_ParamLimits

0x19dd,	// (0x00029b49) grid_vitu2_itu_pane

0x1a68,	// (0x00029bd4) cell_vitu2_itu_pane_ParamLimits

0x1a68,	// (0x00029bd4) cell_vitu2_itu_pane

0x1a8e,	// (0x00029bfa) cell_vitu2_function_pane_ParamLimits

0x1a8e,	// (0x00029bfa) cell_vitu2_function_pane

0xbdc4,	// (0x00033f30) bg_popup_call_pane_cp08_ParamLimits

0xbdc4,	// (0x00033f30) bg_popup_call_pane_cp08

0xbddd,	// (0x00033f49) field_vitu2_entry_pane_g1

0xbde9,	// (0x00033f55) field_vitu2_entry_pane_g2

0x0002,

0xf926,	// (0x00037a92) field_vitu2_entry_pane_g

0x856e,	// (0x000306da) field_vitu2_entry_pane_t1_ParamLimits

0x856e,	// (0x000306da) field_vitu2_entry_pane_t1

0xbe03,	// (0x00033f6f) field_vitu2_entry_pane_t2_ParamLimits

0xbe03,	// (0x00033f6f) field_vitu2_entry_pane_t2

0x0001,

0xf92d,	// (0x00037a99) field_vitu2_entry_pane_t_ParamLimits

0xf92d,	// (0x00037a99) field_vitu2_entry_pane_t

0x1ad2,	// (0x00029c3e) bg_button_pane_cp010_ParamLimits

0x1ad2,	// (0x00029c3e) bg_button_pane_cp010

0x1ae0,	// (0x00029c4c) cell_vitu2_itu_pane_g1

0x1afe,	// (0x00029c6a) cell_vitu2_itu_pane_t1_ParamLimits

0x1afe,	// (0x00029c6a) cell_vitu2_itu_pane_t1

0x1b64,	// (0x00029cd0) cell_vitu2_itu_pane_t2_ParamLimits

0x1b64,	// (0x00029cd0) cell_vitu2_itu_pane_t2

0x0002,

0xf937,	// (0x00037aa3) cell_vitu2_itu_pane_t_ParamLimits

0xf937,	// (0x00037aa3) cell_vitu2_itu_pane_t

0xb647,	// (0x000337b3) bg_button_pane_cp011

0x1c40,	// (0x00029dac) cell_vitu2_function_pane_g1

0xb655,	// (0x000337c1) main_myfav_hc_pane

0x16bc,	// (0x00029828) popup_image3_note_pane_ParamLimits

0x16bc,	// (0x00029828) popup_image3_note_pane

0x16d8,	// (0x00029844) popup_image3_tool_bar_pane_ParamLimits

0x16d8,	// (0x00029844) popup_image3_tool_bar_pane

0x1be8,	// (0x00029d54) cell_vitu2_itu_pane_t3_ParamLimits

0x1be8,	// (0x00029d54) cell_vitu2_itu_pane_t3

0xdfe5,	// (0x00036151) bg_popup_trans_pane

0xbe28,	// (0x00033f94) grid_image3_tool_bar_pane

0xbe32,	// (0x00033f9e) bg_popup_trans_pane_g1

0xec3d,	// (0x00036da9) bg_popup_trans_pane_g2

0xbe3a,	// (0x00033fa6) bg_popup_trans_pane_g3

0xbe42,	// (0x00033fae) bg_popup_trans_pane_g4

0xbe4a,	// (0x00033fb6) bg_popup_trans_pane_g5

0xbe52,	// (0x00033fbe) bg_popup_trans_pane_g6

0xbe5a,	// (0x00033fc6) bg_popup_trans_pane_g7

0xbe62,	// (0x00033fce) bg_popup_trans_pane_g8

0xec1d,	// (0x00036d89) bg_popup_trans_pane_g9

0x0008,

0xf93e,	// (0x00037aaa) bg_popup_trans_pane_g

0xbe6a,	// (0x00033fd6) cell_image3_tool_bar_pane_ParamLimits

0xbe6a,	// (0x00033fd6) cell_image3_tool_bar_pane

0x69d0,	// (0x0002eb3c) cell_image3_tool_bar_pane_g1

0xdfe5,	// (0x00036151) bg_popup_trans_pane_cp1

0xbe80,	// (0x00033fec) popup_image3_note_pane_t1

0xbe8e,	// (0x00033ffa) popup_image3_note_pane_t2

0xbe9c,	// (0x00034008) popup_image3_note_pane_t3

0x0002,

0xf951,	// (0x00037abd) popup_image3_note_pane_t

0xbeac,	// (0x00034018) popup_image3_note_pane_t3_copy1

0x859d,	// (0x00030709) bg_myfav_hc_instruction_pane_ParamLimits

0x859d,	// (0x00030709) bg_myfav_hc_instruction_pane

0x85b5,	// (0x00030721) cell_myfav_contact_pane_ParamLimits

0x85b5,	// (0x00030721) cell_myfav_contact_pane

0x85d1,	// (0x0003073d) cell_myfav_contact_pane_cp1_ParamLimits

0x85d1,	// (0x0003073d) cell_myfav_contact_pane_cp1

0x85e9,	// (0x00030755) cell_myfav_contact_pane_cp2_ParamLimits

0x85e9,	// (0x00030755) cell_myfav_contact_pane_cp2

0x8601,	// (0x0003076d) cell_myfav_contact_pane_cp3_ParamLimits

0x8601,	// (0x0003076d) cell_myfav_contact_pane_cp3

0x8618,	// (0x00030784) cell_myfav_contact_pane_cp4_ParamLimits

0x8618,	// (0x00030784) cell_myfav_contact_pane_cp4

0x8630,	// (0x0003079c) cell_myfav_contact_pane_cp5_ParamLimits

0x8630,	// (0x0003079c) cell_myfav_contact_pane_cp5

0x8644,	// (0x000307b0) cell_myfav_contact_pane_cp6_ParamLimits

0x8644,	// (0x000307b0) cell_myfav_contact_pane_cp6

0x865a,	// (0x000307c6) cell_myfav_contact_pane_cp7_ParamLimits

0x865a,	// (0x000307c6) cell_myfav_contact_pane_cp7

0xbeba,	// (0x00034026) listscroll_gen_pane_cp05

0x8672,	// (0x000307de) main_myfav_hc_pane_g1_ParamLimits

0x8672,	// (0x000307de) main_myfav_hc_pane_g1

0x868c,	// (0x000307f8) main_myfav_hc_pane_g2_ParamLimits

0x868c,	// (0x000307f8) main_myfav_hc_pane_g2

0x0002,

0xf958,	// (0x00037ac4) main_myfav_hc_pane_g_ParamLimits

0xf958,	// (0x00037ac4) main_myfav_hc_pane_g

0x86c0,	// (0x0003082c) main_myfav_hc_pane_t1_ParamLimits

0x86c0,	// (0x0003082c) main_myfav_hc_pane_t1

0xbec3,	// (0x0003402f) main_myfav_hc_pane_t2_ParamLimits

0xbec3,	// (0x0003402f) main_myfav_hc_pane_t2

0xbed5,	// (0x00034041) main_myfav_hc_pane_t3_ParamLimits

0xbed5,	// (0x00034041) main_myfav_hc_pane_t3

0x86d7,	// (0x00030843) main_myfav_hc_pane_t4_ParamLimits

0x86d7,	// (0x00030843) main_myfav_hc_pane_t4

0x0004,

0xf95f,	// (0x00037acb) main_myfav_hc_pane_t_ParamLimits

0xf95f,	// (0x00037acb) main_myfav_hc_pane_t

0x69d0,	// (0x0002eb3c) bg_myfav_hc_instruction_pane_g1

0xbee7,	// (0x00034053) cell_myfav_contact_pane_g1_ParamLimits

0xbee7,	// (0x00034053) cell_myfav_contact_pane_g1

0xbee7,	// (0x00034053) cell_myfav_contact_pane_g2_ParamLimits

0xbee7,	// (0x00034053) cell_myfav_contact_pane_g2

0xbef3,	// (0x0003405f) cell_myfav_contact_pane_g3_ParamLimits

0xbef3,	// (0x0003405f) cell_myfav_contact_pane_g3

0x70cf,	// (0x0002f23b) cell_myfav_contact_pane_g4_ParamLimits

0x70cf,	// (0x0002f23b) cell_myfav_contact_pane_g4

0xbf00,	// (0x0003406c) cell_myfav_contact_pane_g5_ParamLimits

0xbf00,	// (0x0003406c) cell_myfav_contact_pane_g5

0x0004,

0xf96a,	// (0x00037ad6) cell_myfav_contact_pane_g_ParamLimits

0xf96a,	// (0x00037ad6) cell_myfav_contact_pane_g

0x86a6,	// (0x00030812) main_myfav_hc_pane_g3_ParamLimits

0x86a6,	// (0x00030812) main_myfav_hc_pane_g3

0x0795,	// (0x00028901) popup_adpt_find_window

0x8701,	// (0x0003086d) afind_page_pane_ParamLimits

0x8701,	// (0x0003086d) afind_page_pane

0x8716,	// (0x00030882) aid_size_cell_afind_ParamLimits

0x8716,	// (0x00030882) aid_size_cell_afind

0x8734,	// (0x000308a0) bg_popup_sub_pane_cp09_ParamLimits

0x8734,	// (0x000308a0) bg_popup_sub_pane_cp09

0x8741,	// (0x000308ad) find_pane_cp01_ParamLimits

0x8741,	// (0x000308ad) find_pane_cp01

0xbf0c,	// (0x00034078) grid_afind_control_pane_ParamLimits

0xbf0c,	// (0x00034078) grid_afind_control_pane

0x874e,	// (0x000308ba) grid_afind_pane_ParamLimits

0x874e,	// (0x000308ba) grid_afind_pane

0x8770,	// (0x000308dc) cell_afind_pane_ParamLimits

0x8770,	// (0x000308dc) cell_afind_pane

0x69d0,	// (0x0002eb3c) afind_page_pane_g1

0x87d3,	// (0x0003093f) afind_page_pane_g2

0x87dc,	// (0x00030948) afind_page_pane_g3

0x0002,

0xf975,	// (0x00037ae1) afind_page_pane_g

0x87e5,	// (0x00030951) afind_page_pane_t1

0xbf20,	// (0x0003408c) cell_afind_grid_control_pane_ParamLimits

0xbf20,	// (0x0003408c) cell_afind_grid_control_pane

0xbbac,	// (0x00033d18) bg_button_pane_cp69_ParamLimits

0xbbac,	// (0x00033d18) bg_button_pane_cp69

0x8805,	// (0x00030971) cell_afind_pane_g1_ParamLimits

0x8805,	// (0x00030971) cell_afind_pane_g1

0x8812,	// (0x0003097e) cell_afind_pane_t1_ParamLimits

0x8812,	// (0x0003097e) cell_afind_pane_t1

0xe974,	// (0x00036ae0) bg_button_pane_cp72

0xbf2f,	// (0x0003409b) cell_afind_grid_control_pane_g1

0x4ae1,	// (0x0002cc4d) aid_image_placing_area_ParamLimits

0x4ae1,	// (0x0002cc4d) aid_image_placing_area

0x7e87,	// (0x0002fff3) field_vitu_entry_pane_g1_ParamLimits

0x7e87,	// (0x0002fff3) field_vitu_entry_pane_g1

0x7e93,	// (0x0002ffff) field_vitu_entry_pane_g2_ParamLimits

0x7e93,	// (0x0002ffff) field_vitu_entry_pane_g2

0x0001,

0xf826,	// (0x00037992) field_vitu_entry_pane_g_ParamLimits

0xf826,	// (0x00037992) field_vitu_entry_pane_g

0x7eea,	// (0x00030056) cell_vitu_itu_pane_g1_ParamLimits

0x7f2c,	// (0x00030098) cell_vitu_itu_pane_t3_ParamLimits

0x7f2c,	// (0x00030098) cell_vitu_itu_pane_t3

0xbb52,	// (0x00033cbe) mp4_progress_pane_t1_ParamLimits

0xbb6b,	// (0x00033cd7) mp4_progress_pane_t2_ParamLimits

0xf8bb,	// (0x00037a27) mp4_progress_pane_t_ParamLimits

0xbb84,	// (0x00033cf0) mup_progress_pane_cp04_ParamLimits

0x86eb,	// (0x00030857) main_myfav_hc_pane_t5_ParamLimits

0x86eb,	// (0x00030857) main_myfav_hc_pane_t5

0xb5fc,	// (0x00033768) aid_zoom_text_primary

0x0795,	// (0x00028901) popup_adpt_find_window_ParamLimits

0xb647,	// (0x000337b3) main_cam_set_pane

0x1754,	// (0x000298c0) cam4_zoom_pane_ParamLimits

0x1754,	// (0x000298c0) cam4_zoom_pane

0x8824,	// (0x00030990) main_cam_set_pane_g1_ParamLimits

0x8824,	// (0x00030990) main_cam_set_pane_g1

0x8832,	// (0x0003099e) main_cam_set_pane_g2_ParamLimits

0x8832,	// (0x0003099e) main_cam_set_pane_g2

0x0001,

0xf97c,	// (0x00037ae8) main_cam_set_pane_g_ParamLimits

0xf97c,	// (0x00037ae8) main_cam_set_pane_g

0x8853,	// (0x000309bf) main_cam_set_pane_t1_ParamLimits

0x8853,	// (0x000309bf) main_cam_set_pane_t1

0x886e,	// (0x000309da) main_cset_listscroll_pane_ParamLimits

0x886e,	// (0x000309da) main_cset_listscroll_pane

0x8892,	// (0x000309fe) main_cset_slider_pane_ParamLimits

0x8892,	// (0x000309fe) main_cset_slider_pane

0xbf40,	// (0x000340ac) main_cset_list_pane_ParamLimits

0xbf40,	// (0x000340ac) main_cset_list_pane

0xbf50,	// (0x000340bc) scroll_pane_cp028

0x88bc,	// (0x00030a28) aid_area_touch_slider

0x88d8,	// (0x00030a44) cset_slider_pane

0x8902,	// (0x00030a6e) main_cset_slider_pane_g1

0x8917,	// (0x00030a83) main_cset_slider_pane_g2

0x0011,

0xf981,	// (0x00037aed) main_cset_slider_pane_g

0xbf89,	// (0x000340f5) main_cset_slider_pane_t1

0x89d9,	// (0x00030b45) main_cset_slider_pane_t2

0x89f3,	// (0x00030b5f) main_cset_slider_pane_t3

0x8a0d,	// (0x00030b79) main_cset_slider_pane_t4

0x8a27,	// (0x00030b93) main_cset_slider_pane_t5

0x8a45,	// (0x00030bb1) main_cset_slider_pane_t6

0x8a5c,	// (0x00030bc8) main_cset_slider_pane_t7

0x000e,

0xf9a6,	// (0x00037b12) main_cset_slider_pane_t

0x8b68,	// (0x00030cd4) cset_list_set_pane_ParamLimits

0x8b68,	// (0x00030cd4) cset_list_set_pane

0x8b7c,	// (0x00030ce8) aid_position_infowindow_above

0x8b84,	// (0x00030cf0) aid_position_infowindow_below

0x8b8c,	// (0x00030cf8) cset_list_set_pane_g1_ParamLimits

0x8b8c,	// (0x00030cf8) cset_list_set_pane_g1

0x8b98,	// (0x00030d04) cset_list_set_pane_g3_ParamLimits

0x8b98,	// (0x00030d04) cset_list_set_pane_g3

0x0001,

0xf9c5,	// (0x00037b31) cset_list_set_pane_g_ParamLimits

0xf9c5,	// (0x00037b31) cset_list_set_pane_g

0x8ba7,	// (0x00030d13) cset_list_set_pane_t1_ParamLimits

0x8ba7,	// (0x00030d13) cset_list_set_pane_t1

0xe7da,	// (0x00036946) list_highlight_pane_cp021_ParamLimits

0xe7da,	// (0x00036946) list_highlight_pane_cp021

0x4280,	// (0x0002c3ec) cset_slider_pane_g1

0x4292,	// (0x0002c3fe) cset_slider_pane_g2

0x4289,	// (0x0002c3f5) cset_slider_pane_g3

0x0002,

0xf9ca,	// (0x00037b36) cset_slider_pane_g

0xc029,	// (0x00034195) aid_area_touch_cam4_zoom

0xc031,	// (0x0003419d) cam4_zoom_cont_pane

0xc039,	// (0x000341a5) cam4_zoom_pane_g1

0xc041,	// (0x000341ad) cam4_zoom_pane_g2

0x1c54,	// (0x00029dc0) cam4_zoom_pane_g3

0x0002,

0xf9d1,	// (0x00037b3d) cam4_zoom_pane_g

0xc049,	// (0x000341b5) cam4_zoom_cont_pane_g1

0xc052,	// (0x000341be) cam4_zoom_cont_pane_g2

0xc05b,	// (0x000341c7) cam4_zoom_cont_pane_g3

0x0002,

0xf9d8,	// (0x00037b44) cam4_zoom_cont_pane_g

0x8417,	// (0x00030583) call4_image_pane_ParamLimits

0x8417,	// (0x00030583) call4_image_pane

0xbbec,	// (0x00033d58) call4_windows_conf_pane_ParamLimits

0xbc07,	// (0x00033d73) popup_call4_audio_in_window_ParamLimits

0xbc07,	// (0x00033d73) popup_call4_audio_in_window

0xdfe5,	// (0x00036151) bg_popup_call2_act_pane_cp02

0xbc69,	// (0x00033dd5) call4_list_conf_pane

0x69d0,	// (0x0002eb3c) call4_image_pane_g1

0x69d0,	// (0x0002eb3c) call4_image_pane_g2

0x0001,

0xf6ec,	// (0x00037858) call4_image_pane_g

0xc064,	// (0x000341d0) list_single_graphic_popup_conf4_pane_ParamLimits

0xc064,	// (0x000341d0) list_single_graphic_popup_conf4_pane

0xdfe5,	// (0x00036151) list_highlight_pane_cp022

0xc079,	// (0x000341e5) list_single_graphic_popup_conf4_pane_g1

0x377a,	// (0x0002b8e6) list_single_graphic_popup_conf4_pane_g2

0x0001,

0xf9df,	// (0x00037b4b) list_single_graphic_popup_conf4_pane_g

0xc081,	// (0x000341ed) list_single_graphic_popup_conf4_pane_t1

0x2963,	// (0x0002aacf) popup_vtel_slider_window_ParamLimits

0x2963,	// (0x0002aacf) popup_vtel_slider_window

0xbb9a,	// (0x00033d06) dialer2_ne_pane_t2_ParamLimits

0xbb9a,	// (0x00033d06) dialer2_ne_pane_t2

0x0001,

0xf8c0,	// (0x00037a2c) dialer2_ne_pane_t_ParamLimits

0xf8c0,	// (0x00037a2c) dialer2_ne_pane_t

0x66d9,	// (0x0002e845) bg_popup_sub_pane_cp010_ParamLimits

0x66d9,	// (0x0002e845) bg_popup_sub_pane_cp010

0x8bbc,	// (0x00030d28) popup_vtel_slider_window_g1_ParamLimits

0x8bbc,	// (0x00030d28) popup_vtel_slider_window_g1

0x8bcf,	// (0x00030d3b) popup_vtel_slider_window_g2_ParamLimits

0x8bcf,	// (0x00030d3b) popup_vtel_slider_window_g2

0x0003,

0xf9e4,	// (0x00037b50) popup_vtel_slider_window_g_ParamLimits

0xf9e4,	// (0x00037b50) popup_vtel_slider_window_g

0x8c25,	// (0x00030d91) vtel_slider_pane_ParamLimits

0x8c25,	// (0x00030d91) vtel_slider_pane

0x8c47,	// (0x00030db3) vtel_slider_pane_g1_ParamLimits

0x8c47,	// (0x00030db3) vtel_slider_pane_g1

0x8c5b,	// (0x00030dc7) vtel_slider_pane_g2_ParamLimits

0x8c5b,	// (0x00030dc7) vtel_slider_pane_g2

0x8c73,	// (0x00030ddf) vtel_slider_pane_g3_ParamLimits

0x8c73,	// (0x00030ddf) vtel_slider_pane_g3

0x8c47,	// (0x00030db3) vtel_slider_pane_g4_ParamLimits

0x8c47,	// (0x00030db3) vtel_slider_pane_g4

0x8c89,	// (0x00030df5) vtel_slider_pane_g5_ParamLimits

0x8c89,	// (0x00030df5) vtel_slider_pane_g5

0x0004,

0xf9ed,	// (0x00037b59) vtel_slider_pane_g_ParamLimits

0xf9ed,	// (0x00037b59) vtel_slider_pane_g

0xb655,	// (0x000337c1) main_gallery2_pane

0x1924,	// (0x00029a90) aid_size_row_itut2_dropdow_list_ParamLimits

0x1924,	// (0x00029a90) aid_size_row_itut2_dropdow_list

0x19b4,	// (0x00029b20) grid_vitu2_function_top_pane_ParamLimits

0x19b4,	// (0x00029b20) grid_vitu2_function_top_pane

0x1a13,	// (0x00029b7f) popup_vitu2_dropdown_list_window_ParamLimits

0x1a13,	// (0x00029b7f) popup_vitu2_dropdown_list_window

0x1a3c,	// (0x00029ba8) popup_vitu2_match_list_window

0x1c5c,	// (0x00029dc8) cell_vitu2_function_top_pane_ParamLimits

0x1c5c,	// (0x00029dc8) cell_vitu2_function_top_pane

0x1c7c,	// (0x00029de8) cell_vitu2_function_top_pane_cp01_ParamLimits

0x1c7c,	// (0x00029de8) cell_vitu2_function_top_pane_cp01

0x1c9a,	// (0x00029e06) cell_vitu2_function_top_wide_pane_ParamLimits

0x1c9a,	// (0x00029e06) cell_vitu2_function_top_wide_pane

0xb647,	// (0x000337b3) bg_button_pane_cp012

0x1cb8,	// (0x00029e24) cell_vitu2_function_top_pane_g1

0xc0a5,	// (0x00034211) bg_button_pane_cp013_ParamLimits

0xc0a5,	// (0x00034211) bg_button_pane_cp013

0x8c9f,	// (0x00030e0b) cell_vitu2_function_top_wide_pane_g1_ParamLimits

0x8c9f,	// (0x00030e0b) cell_vitu2_function_top_wide_pane_g1

0xb647,	// (0x000337b3) bg_popup_sub_pane_cp20

0x1ccc,	// (0x00029e38) list_vitu2_match_list_pane

0xbe32,	// (0x00033f9e) bg_popup_sub_pane_cp20_g1

0xbe3a,	// (0x00033fa6) bg_popup_sub_pane_cp20_g2

0xec3d,	// (0x00036da9) bg_popup_sub_pane_cp20_g3

0xbe42,	// (0x00033fae) bg_popup_sub_pane_cp20_g4

0xec1d,	// (0x00036d89) bg_popup_sub_pane_cp20_g5

0xc0c1,	// (0x0003422d) bg_popup_sub_pane_cp20_g6

0xbe52,	// (0x00033fbe) bg_popup_sub_pane_cp20_g7

0xbe5a,	// (0x00033fc6) bg_popup_sub_pane_cp20_g8

0xbe62,	// (0x00033fce) bg_popup_sub_pane_cp20_g9

0x0008,

0xf9f8,	// (0x00037b64) bg_popup_sub_pane_cp20_g

0xc0c9,	// (0x00034235) list_vitu2_match_list_item_pane_ParamLimits

0xc0c9,	// (0x00034235) list_vitu2_match_list_item_pane

0xc0db,	// (0x00034247) list_vitu2_match_list_item_pane_t1

0xb655,	// (0x000337c1) bg_popup_sub_pane_cp21

0xc101,	// (0x0003426d) grid_vitu2_dropdown_list_pane

0x1cea,	// (0x00029e56) cell_vitu2_dropdown_list_char_pane_ParamLimits

0x1cea,	// (0x00029e56) cell_vitu2_dropdown_list_char_pane

0x1d0d,	// (0x00029e79) cell_vitu2_dropdown_list_ctrl_pane_ParamLimits

0x1d0d,	// (0x00029e79) cell_vitu2_dropdown_list_ctrl_pane

0xc109,	// (0x00034275) cell_vitu2_dropdown_list_char_pane_g1

0xc112,	// (0x0003427e) cell_vitu2_dropdown_list_char_pane_g2

0xc11b,	// (0x00034287) cell_vitu2_dropdown_list_char_pane_g3

0x0002,

0xfa15,	// (0x00037b81) cell_vitu2_dropdown_list_char_pane_g

0x1d3b,	// (0x00029ea7) cell_vitu2_dropdown_list_char_pane_t1

0x8ce9,	// (0x00030e55) cell_vitu2_dropdown_list_ctrl_pane_g1_ParamLimits

0x8ce9,	// (0x00030e55) cell_vitu2_dropdown_list_ctrl_pane_g1

0x8cf9,	// (0x00030e65) cell_vitu2_dropdown_list_ctrl_pane_g2_ParamLimits

0x8cf9,	// (0x00030e65) cell_vitu2_dropdown_list_ctrl_pane_g2

0x8d0a,	// (0x00030e76) cell_vitu2_dropdown_list_ctrl_pane_g3_ParamLimits

0x8d0a,	// (0x00030e76) cell_vitu2_dropdown_list_ctrl_pane_g3

0x1d49,	// (0x00029eb5) cell_vitu2_dropdown_list_ctrl_pane_g4_ParamLimits

0x1d49,	// (0x00029eb5) cell_vitu2_dropdown_list_ctrl_pane_g4

0xbce5,	// (0x00033e51) cell_vitu2_dropdown_list_ctrl_pane_g5_ParamLimits

0xbce5,	// (0x00033e51) cell_vitu2_dropdown_list_ctrl_pane_g5

0x0004,

0xfa1c,	// (0x00037b88) cell_vitu2_dropdown_list_ctrl_pane_g_ParamLimits

0xfa1c,	// (0x00037b88) cell_vitu2_dropdown_list_ctrl_pane_g

0x8d1a,	// (0x00030e86) aid_size_cell_gallery2_ParamLimits

0x8d1a,	// (0x00030e86) aid_size_cell_gallery2

0x8d30,	// (0x00030e9c) grid_gallery2_pane_ParamLimits

0x8d30,	// (0x00030e9c) grid_gallery2_pane

0x8d44,	// (0x00030eb0) scroll_pane_cp029_ParamLimits

0x8d44,	// (0x00030eb0) scroll_pane_cp029

0x8d50,	// (0x00030ebc) cell_gallery2_pane_ParamLimits

0x8d50,	// (0x00030ebc) cell_gallery2_pane

0xc124,	// (0x00034290) cell_gallery2_pane_g2

0x8d8a,	// (0x00030ef6) cell_gallery2_pane_g3

0xc12e,	// (0x0003429a) cell_gallery2_pane_g4

0xc136,	// (0x000342a2) cell_gallery2_pane_g5

0x3ce8,	// (0x0002be54) grid_highlight_pane_cp10

0x1a3c,	// (0x00029ba8) popup_vitu2_match_list_window_ParamLimits

0x1a53,	// (0x00029bbf) popup_vitu2_query_window_ParamLimits

0x1a53,	// (0x00029bbf) popup_vitu2_query_window

0xb655,	// (0x000337c1) bg_vitu2_candi_button_pane

0xc109,	// (0x00034275) cell_vitu2_dropdown_list_char_pane_g1_copy1

0xc112,	// (0x0003427e) cell_vitu2_dropdown_list_char_pane_g2_copy1

0xc11b,	// (0x00034287) cell_vitu2_dropdown_list_char_pane_g2_copy2

0x8d92,	// (0x00030efe) bg_button_pane_cp015

0x8da6,	// (0x00030f12) bg_button_pane_cp016

0x8db9,	// (0x00030f25) bg_button_pane_cp017

0x5fd0,	// (0x0002e13c) bg_popup_sub_pane_cp22

0xc13e,	// (0x000342aa) popup_vitu2_query_window_g1

0x8dfe,	// (0x00030f6a) popup_vitu2_query_window_g2

0x0002,

0xfa27,	// (0x00037b93) popup_vitu2_query_window_g

0x8e1d,	// (0x00030f89) popup_vitu2_query_window_t1_ParamLimits

0x8e1d,	// (0x00030f89) popup_vitu2_query_window_t1

0x8e52,	// (0x00030fbe) popup_vitu2_query_window_t2_ParamLimits

0x8e52,	// (0x00030fbe) popup_vitu2_query_window_t2

0x8e64,	// (0x00030fd0) popup_vitu2_query_window_t3_ParamLimits

0x8e64,	// (0x00030fd0) popup_vitu2_query_window_t3

0x8e8c,	// (0x00030ff8) popup_vitu2_query_window_t4_ParamLimits

0x8e8c,	// (0x00030ff8) popup_vitu2_query_window_t4

0x8ead,	// (0x00031019) popup_vitu2_query_window_t5_ParamLimits

0x8ead,	// (0x00031019) popup_vitu2_query_window_t5

0x0006,

0xfa2e,	// (0x00037b9a) popup_vitu2_query_window_t_ParamLimits

0xfa2e,	// (0x00037b9a) popup_vitu2_query_window_t

0xbf38,	// (0x000340a4) main_cset_text_pane

0x88bc,	// (0x00030a28) aid_area_touch_slider_ParamLimits

0x88d8,	// (0x00030a44) cset_slider_pane_ParamLimits

0x8902,	// (0x00030a6e) main_cset_slider_pane_g1_ParamLimits

0x8917,	// (0x00030a83) main_cset_slider_pane_g2_ParamLimits

0xbf59,	// (0x000340c5) main_cset_slider_pane_g3_ParamLimits

0xbf59,	// (0x000340c5) main_cset_slider_pane_g3

0x892c,	// (0x00030a98) main_cset_slider_pane_g4_ParamLimits

0x892c,	// (0x00030a98) main_cset_slider_pane_g4

0x893b,	// (0x00030aa7) main_cset_slider_pane_g5_ParamLimits

0x893b,	// (0x00030aa7) main_cset_slider_pane_g5

0x8949,	// (0x00030ab5) main_cset_slider_pane_g6_ParamLimits

0x8949,	// (0x00030ab5) main_cset_slider_pane_g6

0xf981,	// (0x00037aed) main_cset_slider_pane_g_ParamLimits

0xbf89,	// (0x000340f5) main_cset_slider_pane_t1_ParamLimits

0x89d9,	// (0x00030b45) main_cset_slider_pane_t2_ParamLimits

0x89f3,	// (0x00030b5f) main_cset_slider_pane_t3_ParamLimits

0x8a0d,	// (0x00030b79) main_cset_slider_pane_t4_ParamLimits

0x8a27,	// (0x00030b93) main_cset_slider_pane_t5_ParamLimits

0x8a45,	// (0x00030bb1) main_cset_slider_pane_t6_ParamLimits

0x8a5c,	// (0x00030bc8) main_cset_slider_pane_t7_ParamLimits

0x8a8a,	// (0x00030bf6) main_cset_slider_pane_t8_ParamLimits

0x8a8a,	// (0x00030bf6) main_cset_slider_pane_t8

0x8ab2,	// (0x00030c1e) main_cset_slider_pane_t9_ParamLimits

0x8ab2,	// (0x00030c1e) main_cset_slider_pane_t9

0x8ada,	// (0x00030c46) main_cset_slider_pane_t10_ParamLimits

0x8ada,	// (0x00030c46) main_cset_slider_pane_t10

0x8b02,	// (0x00030c6e) main_cset_slider_pane_t11_ParamLimits

0x8b02,	// (0x00030c6e) main_cset_slider_pane_t11

0x8b2c,	// (0x00030c98) main_cset_slider_pane_t12_ParamLimits

0x8b2c,	// (0x00030c98) main_cset_slider_pane_t12

0x8b49,	// (0x00030cb5) main_cset_slider_pane_t13_ParamLimits

0x8b49,	// (0x00030cb5) main_cset_slider_pane_t13

0xf9a6,	// (0x00037b12) main_cset_slider_pane_t_ParamLimits

0xdfe5,	// (0x00036151) bg_popup_sub_pane_cp011

0xc14a,	// (0x000342b6) main_cset_text_pane_g1

0xc152,	// (0x000342be) main_cset_text_pane_t1

0xc160,	// (0x000342cc) main_cset_text_pane_t2

0xc16e,	// (0x000342da) main_cset_text_pane_t3

0xc17c,	// (0x000342e8) main_cset_text_pane_t4

0xc18a,	// (0x000342f6) main_cset_text_pane_t5

0xc198,	// (0x00034304) main_cset_text_pane_t6

0xc1a6,	// (0x00034312) main_cset_text_pane_t7

0x0006,

0xfa3d,	// (0x00037ba9) main_cset_text_pane_t

0xb655,	// (0x000337c1) main_cam4_burst_pane

0xb655,	// (0x000337c1) main_cam5_pane

0x87f3,	// (0x0003095f) bg_button_pane_cp019

0x87fc,	// (0x00030968) bg_button_pane_cp020

0xbf65,	// (0x000340d1) main_cset_slider_pane_g7_ParamLimits

0xbf65,	// (0x000340d1) main_cset_slider_pane_g7

0xbf71,	// (0x000340dd) main_cset_slider_pane_g8_ParamLimits

0xbf71,	// (0x000340dd) main_cset_slider_pane_g8

0x895d,	// (0x00030ac9) main_cset_slider_pane_g9_ParamLimits

0x895d,	// (0x00030ac9) main_cset_slider_pane_g9

0x8969,	// (0x00030ad5) main_cset_slider_pane_g10_ParamLimits

0x8969,	// (0x00030ad5) main_cset_slider_pane_g10

0x8975,	// (0x00030ae1) main_cset_slider_pane_g11_ParamLimits

0x8975,	// (0x00030ae1) main_cset_slider_pane_g11

0x8981,	// (0x00030aed) main_cset_slider_pane_g12_ParamLimits

0x8981,	// (0x00030aed) main_cset_slider_pane_g12

0x898d,	// (0x00030af9) main_cset_slider_pane_g13_ParamLimits

0x898d,	// (0x00030af9) main_cset_slider_pane_g13

0x8999,	// (0x00030b05) main_cset_slider_pane_g14_ParamLimits

0x8999,	// (0x00030b05) main_cset_slider_pane_g14

0x89a5,	// (0x00030b11) main_cset_slider_pane_g15_ParamLimits

0x89a5,	// (0x00030b11) main_cset_slider_pane_g15

0xbfb7,	// (0x00034123) main_cset_slider_pane_t14_ParamLimits

0xbfb7,	// (0x00034123) main_cset_slider_pane_t14

0xbff0,	// (0x0003415c) main_cset_slider_pane_t15_ParamLimits

0xbff0,	// (0x0003415c) main_cset_slider_pane_t15

0x8f24,	// (0x00031090) aid_cam4_burst_size_cell_ParamLimits

0x8f24,	// (0x00031090) aid_cam4_burst_size_cell

0x8f44,	// (0x000310b0) grid_cam4_burst_pane_ParamLimits

0x8f44,	// (0x000310b0) grid_cam4_burst_pane

0x8f7e,	// (0x000310ea) linegrid_cam4_burst_pane_ParamLimits

0x8f7e,	// (0x000310ea) linegrid_cam4_burst_pane

0xc1b4,	// (0x00034320) scroll_pane_cp30_ParamLimits

0xc1b4,	// (0x00034320) scroll_pane_cp30

0x8fa0,	// (0x0003110c) cell_cam4_burst_pane_ParamLimits

0x8fa0,	// (0x0003110c) cell_cam4_burst_pane

0xc1c0,	// (0x0003432c) linegrid_cam4_burst_pane_g1_ParamLimits

0xc1c0,	// (0x0003432c) linegrid_cam4_burst_pane_g1

0x8ff5,	// (0x00031161) linegrid_cam4_burst_pane_g2_ParamLimits

0x8ff5,	// (0x00031161) linegrid_cam4_burst_pane_g2

0xc1cd,	// (0x00034339) linegrid_cam4_burst_pane_g3_ParamLimits

0xc1cd,	// (0x00034339) linegrid_cam4_burst_pane_g3

0x0002,

0xfa4c,	// (0x00037bb8) linegrid_cam4_burst_pane_g_ParamLimits

0xfa4c,	// (0x00037bb8) linegrid_cam4_burst_pane_g

0x9006,	// (0x00031172) linegrid_cam4_burst_pane_g3_copy1_ParamLimits

0x9006,	// (0x00031172) linegrid_cam4_burst_pane_g3_copy1

0xc1da,	// (0x00034346) linegrid_cam4_burst_pane_g4_ParamLimits

0xc1da,	// (0x00034346) linegrid_cam4_burst_pane_g4

0x9024,	// (0x00031190) linegrid_cam4_burst_pane_g5_ParamLimits

0x9024,	// (0x00031190) linegrid_cam4_burst_pane_g5

0x9035,	// (0x000311a1) linegrid_cam4_burst_pane_g6_ParamLimits

0x9035,	// (0x000311a1) linegrid_cam4_burst_pane_g6

0xc1e7,	// (0x00034353) linegrid_cam4_burst_pane_g7_ParamLimits

0xc1e7,	// (0x00034353) linegrid_cam4_burst_pane_g7

0x904c,	// (0x000311b8) cell_cam4_burst_pane_g1

0xc200,	// (0x0003436c) main_cam5_pane_t1_ParamLimits

0xc200,	// (0x0003436c) main_cam5_pane_t1

0xc212,	// (0x0003437e) main_cam5_pane_t2_ParamLimits

0xc212,	// (0x0003437e) main_cam5_pane_t2

0xc224,	// (0x00034390) main_cam5_pane_t3_ParamLimits

0xc224,	// (0x00034390) main_cam5_pane_t3

0xc236,	// (0x000343a2) main_cam5_pane_t4_ParamLimits

0xc236,	// (0x000343a2) main_cam5_pane_t4

0xc24e,	// (0x000343ba) main_cam5_pane_t5_ParamLimits

0xc24e,	// (0x000343ba) main_cam5_pane_t5

0xc262,	// (0x000343ce) main_cam5_pane_t6_ParamLimits

0xc262,	// (0x000343ce) main_cam5_pane_t6

0xc276,	// (0x000343e2) main_cam5_pane_t7_ParamLimits

0xc276,	// (0x000343e2) main_cam5_pane_t7

0xc288,	// (0x000343f4) main_cam5_pane_t8_ParamLimits

0xc288,	// (0x000343f4) main_cam5_pane_t8

0xc2a6,	// (0x00034412) main_cam5_pane_t9_ParamLimits

0xc2a6,	// (0x00034412) main_cam5_pane_t9

0xc2b8,	// (0x00034424) main_cam5_pane_t10_ParamLimits

0xc2b8,	// (0x00034424) main_cam5_pane_t10

0xc2ca,	// (0x00034436) main_cam5_pane_t11_ParamLimits

0xc2ca,	// (0x00034436) main_cam5_pane_t11

0xc2de,	// (0x0003444a) main_cam5_pane_t12_ParamLimits

0xc2de,	// (0x0003444a) main_cam5_pane_t12

0xc2f5,	// (0x00034461) main_cam5_pane_t13_ParamLimits

0xc2f5,	// (0x00034461) main_cam5_pane_t13

0x000c,

0xfa58,	// (0x00037bc4) main_cam5_pane_t_ParamLimits

0xfa58,	// (0x00037bc4) main_cam5_pane_t

0x0818,	// (0x00028984) popup_scut_keymap_window_ParamLimits

0x0818,	// (0x00028984) popup_scut_keymap_window

0x905f,	// (0x000311cb) aid_size_cell_brow_shortcut

0x3ce8,	// (0x0002be54) bg_popup_window_pane_cp010

0x906b,	// (0x000311d7) grid_scut_pane

0x9077,	// (0x000311e3) cell_scut_pane_ParamLimits

0x9077,	// (0x000311e3) cell_scut_pane

0x9090,	// (0x000311fc) cell_scut_pane_g1

0xc318,	// (0x00034484) cell_scut_pane_t1

0xc327,	// (0x00034493) cell_scut_pane_t2

0x9099,	// (0x00031205) cell_scut_pane_t3

0x0002,

0xfa73,	// (0x00037bdf) cell_scut_pane_t

0x70dd,	// (0x0002f249) main_mup3_pane_g8_ParamLimits

0x70dd,	// (0x0002f249) main_mup3_pane_g8

0x193e,	// (0x00029aaa) area_vitu2_query_pane_ParamLimits

0x193e,	// (0x00029aaa) area_vitu2_query_pane

0x8dcc,	// (0x00030f38) input_focus_pane_cp08

0xc336,	// (0x000344a2) area_vitu2_query_pane_g1

0x90a7,	// (0x00031213) area_vitu2_query_pane_g2

0x0001,

0xfa7a,	// (0x00037be6) area_vitu2_query_pane_g

0x90b8,	// (0x00031224) area_vitu2_query_pane_t1_ParamLimits

0x90b8,	// (0x00031224) area_vitu2_query_pane_t1

0x90cc,	// (0x00031238) area_vitu2_query_pane_t2_ParamLimits

0x90cc,	// (0x00031238) area_vitu2_query_pane_t2

0x90e0,	// (0x0003124c) area_vitu2_query_pane_t3_ParamLimits

0x90e0,	// (0x0003124c) area_vitu2_query_pane_t3

0xc342,	// (0x000344ae) area_vitu2_query_pane_t4_ParamLimits

0xc342,	// (0x000344ae) area_vitu2_query_pane_t4

0xc36a,	// (0x000344d6) area_vitu2_query_pane_t5_ParamLimits

0xc36a,	// (0x000344d6) area_vitu2_query_pane_t5

0xc392,	// (0x000344fe) area_vitu2_query_pane_t6_ParamLimits

0xc392,	// (0x000344fe) area_vitu2_query_pane_t6

0x0006,

0xfa7f,	// (0x00037beb) area_vitu2_query_pane_t_ParamLimits

0xfa7f,	// (0x00037beb) area_vitu2_query_pane_t

0x9108,	// (0x00031274) bg_button_pane_cp018

0x9116,	// (0x00031282) bg_button_pane_cp021

0x9122,	// (0x0003128e) bg_button_pane_cp022

0x9133,	// (0x0003129f) input_focus_pane_cp09

0x3af7,	// (0x0002bc63) aid_size_touch_mv_arrow_left

0x3b20,	// (0x0002bc8c) aid_size_touch_mv_arrow_right

0x89bd,	// (0x00030b29) main_cset_slider_pane_g16_ParamLimits

0x89bd,	// (0x00030b29) main_cset_slider_pane_g16

0x89cb,	// (0x00030b37) main_cset_slider_pane_g17_ParamLimits

0x89cb,	// (0x00030b37) main_cset_slider_pane_g17

0x904c,	// (0x000311b8) cell_cam4_burst_pane_g1_ParamLimits

0xdfe5,	// (0x00036151) compa_mode_pane

0x8bdf,	// (0x00030d4b) popup_vtel_slider_window_g3_ParamLimits

0x8bdf,	// (0x00030d4b) popup_vtel_slider_window_g3

0x8bf6,	// (0x00030d62) popup_vtel_slider_window_g4_ParamLimits

0x8bf6,	// (0x00030d62) popup_vtel_slider_window_g4

0x8c0d,	// (0x00030d79) popup_vtel_slider_window_t1_ParamLimits

0x8c0d,	// (0x00030d79) popup_vtel_slider_window_t1

0xb655,	// (0x000337c1) main_cl_pane

0xb814,	// (0x00033980) popup_imed_adjust2_window_ParamLimits

0x5fd0,	// (0x0002e13c) bg_tb_trans_pane_cp05_ParamLimits

0x7c54,	// (0x0002fdc0) popup_imed_adjust2_window_g1_ParamLimits

0x7c63,	// (0x0002fdcf) popup_imed_adjust2_window_g2_ParamLimits

0x7c63,	// (0x0002fdcf) popup_imed_adjust2_window_g2

0x7c6f,	// (0x0002fddb) popup_imed_adjust2_window_g3_ParamLimits

0x7c6f,	// (0x0002fddb) popup_imed_adjust2_window_g3

0x0002,

0xf7ea,	// (0x00037956) popup_imed_adjust2_window_g_ParamLimits

0xf7ea,	// (0x00037956) popup_imed_adjust2_window_g

0x7c7b,	// (0x0002fde7) popup_imed_adjust2_window_t1_ParamLimits

0x7c93,	// (0x0002fdff) slider_imed_adjust_pane_ParamLimits

0x7ca7,	// (0x0002fe13) slider_imed_adjust_pane_g1_ParamLimits

0x7cb7,	// (0x0002fe23) slider_imed_adjust_pane_g2_ParamLimits

0x7cc7,	// (0x0002fe33) slider_imed_adjust_pane_g3_ParamLimits

0x7cd8,	// (0x0002fe44) slider_imed_adjust_pane_g4_ParamLimits

0xf7f1,	// (0x0003795d) slider_imed_adjust_pane_g_ParamLimits

0x16f4,	// (0x00029860) aid_touch_area_cam4_ParamLimits

0x16f4,	// (0x00029860) aid_touch_area_cam4

0xbcb3,	// (0x00033e1f) battery_pane_cp01

0x17c6,	// (0x00029932) main_camera4_pane_g6_ParamLimits

0x17c6,	// (0x00029932) main_camera4_pane_g6

0x17f0,	// (0x0002995c) main_camera4_pane_t2_ParamLimits

0x17f0,	// (0x0002995c) main_camera4_pane_t2

0x0001,

0xf8f4,	// (0x00037a60) main_camera4_pane_t_ParamLimits

0xf8f4,	// (0x00037a60) main_camera4_pane_t

0x1811,	// (0x0002997d) aid_touch_area_vid4_ParamLimits

0x1811,	// (0x0002997d) aid_touch_area_vid4

0x1865,	// (0x000299d1) main_video4_pane_g5_ParamLimits

0x1865,	// (0x000299d1) main_video4_pane_g5

0x188a,	// (0x000299f6) vid4_progress_pane_ParamLimits

0x188a,	// (0x000299f6) vid4_progress_pane

0xbf7d,	// (0x000340e9) main_cset_slider_pane_g18_ParamLimits

0xbf7d,	// (0x000340e9) main_cset_slider_pane_g18

0xc1f4,	// (0x00034360) cell_cam4_burst_pane_g2_ParamLimits

0xc1f4,	// (0x00034360) cell_cam4_burst_pane_g2

0x0001,

0xfa53,	// (0x00037bbf) cell_cam4_burst_pane_g_ParamLimits

0xfa53,	// (0x00037bbf) cell_cam4_burst_pane_g

0xe765,	// (0x000368d1) bg_cl_pane_ParamLimits

0xe765,	// (0x000368d1) bg_cl_pane

0x9144,	// (0x000312b0) cl_header_pane_ParamLimits

0x9144,	// (0x000312b0) cl_header_pane

0x9158,	// (0x000312c4) cl_listscroll_pane_ParamLimits

0x9158,	// (0x000312c4) cl_listscroll_pane

0xc3de,	// (0x0003454a) bg_cl_pane_g1

0xc3e6,	// (0x00034552) bg_cl_pane_g2

0xc3ee,	// (0x0003455a) bg_cl_pane_g3

0xc3f6,	// (0x00034562) bg_cl_pane_g4

0xc3fe,	// (0x0003456a) bg_cl_pane_g5

0xc406,	// (0x00034572) bg_cl_pane_g6

0xc40e,	// (0x0003457a) bg_cl_pane_g7

0xc416,	// (0x00034582) bg_cl_pane_g8

0xc41e,	// (0x0003458a) bg_cl_pane_g9

0x0008,

0xfa8e,	// (0x00037bfa) bg_cl_pane_g

0x9168,	// (0x000312d4) aid_height_cl_leading_ParamLimits

0x9168,	// (0x000312d4) aid_height_cl_leading

0x9174,	// (0x000312e0) aid_height_cl_text_ParamLimits

0x9174,	// (0x000312e0) aid_height_cl_text

0xe7da,	// (0x00036946) bg_cl_header_pane_ParamLimits

0xe7da,	// (0x00036946) bg_cl_header_pane

0x9193,	// (0x000312ff) cl_header_pane_g1_ParamLimits

0x9193,	// (0x000312ff) cl_header_pane_g1

0x91a9,	// (0x00031315) cl_header_pane_t1_ParamLimits

0x91a9,	// (0x00031315) cl_header_pane_t1

0xc426,	// (0x00034592) cl_list_pane

0xbf50,	// (0x000340bc) hc_scroll_pane_cp01

0xec1d,	// (0x00036d89) bg_cl_header_pane_g1

0xbe32,	// (0x00033f9e) bg_cl_header_pane_g2

0xec3d,	// (0x00036da9) bg_cl_header_pane_g3

0xbe42,	// (0x00033fae) bg_cl_header_pane_g4

0xbe3a,	// (0x00033fa6) bg_cl_header_pane_g5

0xc0c1,	// (0x0003422d) bg_cl_header_pane_g6

0xbe5a,	// (0x00033fc6) bg_cl_header_pane_g7

0xbe62,	// (0x00033fce) bg_cl_header_pane_g8

0xbe52,	// (0x00033fbe) bg_cl_header_pane_g9

0x0008,

0xfaa1,	// (0x00037c0d) bg_cl_header_pane_g

0x91c2,	// (0x0003132e) hc_cl_list_double_graphic_heading_pane_ParamLimits

0x91c2,	// (0x0003132e) hc_cl_list_double_graphic_heading_pane

0x91d5,	// (0x00031341) hc_cl_list_single_graphic_pane_ParamLimits

0x91d5,	// (0x00031341) hc_cl_list_single_graphic_pane

0x91ed,	// (0x00031359) hc_cl_list_single_graphic_pane_g1_ParamLimits

0x91ed,	// (0x00031359) hc_cl_list_single_graphic_pane_g1

0x91f9,	// (0x00031365) hc_cl_list_single_graphic_pane_g2_ParamLimits

0x91f9,	// (0x00031365) hc_cl_list_single_graphic_pane_g2

0x0001,

0xfab4,	// (0x00037c20) hc_cl_list_single_graphic_pane_g_ParamLimits

0xfab4,	// (0x00037c20) hc_cl_list_single_graphic_pane_g

0x920d,	// (0x00031379) hc_cl_list_single_graphic_pane_t1_ParamLimits

0x920d,	// (0x00031379) hc_cl_list_single_graphic_pane_t1

0x91ed,	// (0x00031359) hc_cl_list_double_graphic_heading_pane_g1_ParamLimits

0x91ed,	// (0x00031359) hc_cl_list_double_graphic_heading_pane_g1

0x9222,	// (0x0003138e) hc_cl_list_double_graphic_heading_pane_g2_ParamLimits

0x9222,	// (0x0003138e) hc_cl_list_double_graphic_heading_pane_g2

0x9236,	// (0x000313a2) hc_cl_list_double_graphic_heading_pane_g3_ParamLimits

0x9236,	// (0x000313a2) hc_cl_list_double_graphic_heading_pane_g3

0x0002,

0xfab9,	// (0x00037c25) hc_cl_list_double_graphic_heading_pane_g_ParamLimits

0xfab9,	// (0x00037c25) hc_cl_list_double_graphic_heading_pane_g

0x924a,	// (0x000313b6) hc_cl_list_double_graphic_heading_pane_t1_ParamLimits

0x924a,	// (0x000313b6) hc_cl_list_double_graphic_heading_pane_t1

0x925f,	// (0x000313cb) hc_cl_list_double_graphic_heading_pane_t2_ParamLimits

0x925f,	// (0x000313cb) hc_cl_list_double_graphic_heading_pane_t2

0x0001,

0xfac0,	// (0x00037c2c) hc_cl_list_double_graphic_heading_pane_t_ParamLimits

0xfac0,	// (0x00037c2c) hc_cl_list_double_graphic_heading_pane_t

0x1d65,	// (0x00029ed1) vid4_progress_pane_g1

0x1d77,	// (0x00029ee3) vid4_progress_pane_g2

0xb7de,	// (0x0003394a) vid4_progress_pane_g3

0xc437,	// (0x000345a3) vid4_progress_pane_g4

0x0004,

0xfac5,	// (0x00037c31) vid4_progress_pane_g

0xc455,	// (0x000345c1) vid4_progress_pane_t1

0xc46a,	// (0x000345d6) vid4_progress_pane_t2

0x0002,

0xfad0,	// (0x00037c3c) vid4_progress_pane_t

0xc495,	// (0x00034601) wait_bar_pane_cp07

0x66e7,	// (0x0002e853) blid_firmament_pane_ParamLimits

0x672a,	// (0x0002e896) popup_blid_sat_info2_window_g1

0x674e,	// (0x0002e8ba) popup_blid_sat_info2_window_t3

0x675c,	// (0x0002e8c8) popup_blid_sat_info2_window_t4

0x676a,	// (0x0002e8d6) popup_blid_sat_info2_window_t5

0x6778,	// (0x0002e8e4) popup_blid_sat_info2_window_t6

0x6788,	// (0x0002e8f4) popup_blid_sat_info2_window_t7

0x6796,	// (0x0002e902) popup_blid_sat_info2_window_t8

0x67a4,	// (0x0002e910) popup_blid_sat_info2_window_t9

0x67b2,	// (0x0002e91e) popup_blid_sat_info2_window_t10

0x6950,	// (0x0002eabc) aid_firma_cardinal_ParamLimits

0x6964,	// (0x0002ead0) blid_firmament_pane_t1_ParamLimits

0x697b,	// (0x0002eae7) blid_firmament_pane_t2_ParamLimits

0x6992,	// (0x0002eafe) blid_firmament_pane_t3_ParamLimits

0x69a9,	// (0x0002eb15) blid_firmament_pane_t4_ParamLimits

0xf6e3,	// (0x0003784f) blid_firmament_pane_t_ParamLimits

0x69c0,	// (0x0002eb2c) blid_sat_info_pane_ParamLimits

0xb647,	// (0x000337b3) main_cam_set_pane_ParamLimits

0x7aae,	// (0x0002fc1a) aid_size_cell_colour_35_ParamLimits

0x7ace,	// (0x0002fc3a) aid_size_cell_colour_112_ParamLimits

0x7aee,	// (0x0002fc5a) aid_size_cell_effect_ParamLimits

0x5fd0,	// (0x0002e13c) bg_tb_trans_pane_cp02_ParamLimits

0xee0f,	// (0x00036f7b) heading_imed_pane_ParamLimits

0x7b0e,	// (0x0002fc7a) listscroll_imed_pane_ParamLimits

0x52f3,	// (0x0002d45f) popup_call2_audio_first_window_g5_ParamLimits

0x52f3,	// (0x0002d45f) popup_call2_audio_first_window_g5

0x14cf,	// (0x0002963b) aid_size_touch_image3_arrow_left_ParamLimits

0x14cf,	// (0x0002963b) aid_size_touch_image3_arrow_left

0x14fb,	// (0x00029667) aid_size_touch_image3_arrow_right_ParamLimits

0x14fb,	// (0x00029667) aid_size_touch_image3_arrow_right

0xc480,	// (0x000345ec) vid4_progress_pane_t3

0x81f4,	// (0x00030360) main_hwr_training_symbol_option_pane_ParamLimits

0x81f4,	// (0x00030360) main_hwr_training_symbol_option_pane

0x8214,	// (0x00030380) popup_hwr_training_preview_window_ParamLimits

0x8214,	// (0x00030380) popup_hwr_training_preview_window

0x1368,	// (0x000294d4) hwr_training_navi_pane_g5_ParamLimits

0x1368,	// (0x000294d4) hwr_training_navi_pane_g5

0xbe20,	// (0x00033f8c) popup_char_count_window

0xb647,	// (0x000337b3) bg_popup_sub_pane_cp20_ParamLimits

0x1ccc,	// (0x00029e38) list_vitu2_match_list_pane_ParamLimits

0x1cdb,	// (0x00029e47) vitu2_page_scroll_pane_ParamLimits

0x1cdb,	// (0x00029e47) vitu2_page_scroll_pane

0xc503,	// (0x0003466f) list_single_hwr_training_symbol_option_pane_ParamLimits

0xc503,	// (0x0003466f) list_single_hwr_training_symbol_option_pane

0xc516,	// (0x00034682) list_single_hwr_training_symbol_option_pane_g1

0xc51e,	// (0x0003468a) list_single_hwr_training_symbol_option_pane_t1

0xc52c,	// (0x00034698) bg_button_pane_cp023

0xc535,	// (0x000346a1) bg_button_pane_cp024

0x9274,	// (0x000313e0) vitu2_page_scroll_pane_g1

0x927c,	// (0x000313e8) vitu2_page_scroll_pane_g2

0x0001,

0xfad7,	// (0x00037c43) vitu2_page_scroll_pane_g

0x9286,	// (0x000313f2) vitu2_page_scroll_pane_t1

0x6617,	// (0x0002e783) popup_char_count_window_g1

0xc568,	// (0x000346d4) popup_char_count_window_g2

0xc571,	// (0x000346dd) popup_char_count_window_g3

0x0002,

0xfadc,	// (0x00037c48) popup_char_count_window_g

0xc57a,	// (0x000346e6) popup_char_count_window_t1

0xb655,	// (0x000337c1) main_vded2_pane

0x7c40,	// (0x0002fdac) aid_size_cell_imed_line

0x7c4a,	// (0x0002fdb6) grid_imed_line_width_pane

0xbd8f,	// (0x00033efb) vid4_indicators_pane_g4

0xc588,	// (0x000346f4) cell_imed_line_width_pane_ParamLimits

0xc588,	// (0x000346f4) cell_imed_line_width_pane

0xc59e,	// (0x0003470a) cell_imed_line_width_pane_g1

0xb8bf,	// (0x00033a2b) cell_imed_line_width_pane_g2

0x0001,

0xfae3,	// (0x00037c4f) cell_imed_line_width_pane_g

0x9295,	// (0x00031401) main_vded2_pane_g1_ParamLimits

0x9295,	// (0x00031401) main_vded2_pane_g1

0x92b0,	// (0x0003141c) main_vded2_pane_g2_ParamLimits

0x92b0,	// (0x0003141c) main_vded2_pane_g2

0x0001,

0xfae8,	// (0x00037c54) main_vded2_pane_g_ParamLimits

0xfae8,	// (0x00037c54) main_vded2_pane_g

0x92c2,	// (0x0003142e) vded2_slider_pane_ParamLimits

0x92c2,	// (0x0003142e) vded2_slider_pane

0x92d2,	// (0x0003143e) aid_size_touch_vded2_end

0x92dc,	// (0x00031448) aid_size_touch_vded2_playhead

0xc5a7,	// (0x00034713) aid_size_touch_vded2_start

0xc5af,	// (0x0003471b) vded2_slider_bg_pane

0xc5b8,	// (0x00034724) vded2_slider_pane_g1

0xc5c1,	// (0x0003472d) vded2_slider_pane_g2

0x92e6,	// (0x00031452) vded2_slider_pane_g3

0x0002,

0xfaed,	// (0x00037c59) vded2_slider_pane_g

0xc5c9,	// (0x00034735) vded2_slider_bg_pane_g1

0xc5d2,	// (0x0003473e) vded2_slider_bg_pane_g2

0xc5db,	// (0x00034747) vded2_slider_bg_pane_g3

0x0002,

0xfaf4,	// (0x00037c60) vded2_slider_bg_pane_g

0x445f,	// (0x0002c5cb) aid_postcard_touch_down_pane_ParamLimits

0x445f,	// (0x0002c5cb) aid_postcard_touch_down_pane

0x4477,	// (0x0002c5e3) aid_postcard_touch_up_pane_ParamLimits

0x4477,	// (0x0002c5e3) aid_postcard_touch_up_pane

0xb655,	// (0x000337c1) main_blid2_pane

0xb7f6,	// (0x00033962) popup_blid2_search_window

0xdfe5,	// (0x00036151) blid2_gps_pane

0xdfe5,	// (0x00036151) blid2_navig_pane

0xdfe5,	// (0x00036151) blid2_search_pane

0xdfe5,	// (0x00036151) blid2_tripm_pane

0x92f1,	// (0x0003145d) blid2_search_pane_g1_ParamLimits

0x92f1,	// (0x0003145d) blid2_search_pane_g1

0x9304,	// (0x00031470) blid2_search_pane_t1_ParamLimits

0x9304,	// (0x00031470) blid2_search_pane_t1

0x9316,	// (0x00031482) aid_size_cell_blid2_gps_ParamLimits

0x9316,	// (0x00031482) aid_size_cell_blid2_gps

0x932e,	// (0x0003149a) blid2_gps_pane_g1_ParamLimits

0x932e,	// (0x0003149a) blid2_gps_pane_g1

0x9342,	// (0x000314ae) grid_blid2_satellite_pane_ParamLimits

0x9342,	// (0x000314ae) grid_blid2_satellite_pane

0x935a,	// (0x000314c6) blid2_navig_pane_g1_ParamLimits

0x935a,	// (0x000314c6) blid2_navig_pane_g1

0x9366,	// (0x000314d2) blid2_navig_pane_t1_ParamLimits

0x9366,	// (0x000314d2) blid2_navig_pane_t1

0x9381,	// (0x000314ed) blid2_navig_pane_t2_ParamLimits

0x9381,	// (0x000314ed) blid2_navig_pane_t2

0x0001,

0xfafb,	// (0x00037c67) blid2_navig_pane_t_ParamLimits

0xfafb,	// (0x00037c67) blid2_navig_pane_t

0x939c,	// (0x00031508) blid2_navig_ring_pane_ParamLimits

0x939c,	// (0x00031508) blid2_navig_ring_pane

0x93b7,	// (0x00031523) blid2_speed_pane_ParamLimits

0x93b7,	// (0x00031523) blid2_speed_pane

0x93c3,	// (0x0003152f) blid2_tripm_pane_g1_ParamLimits

0x93c3,	// (0x0003152f) blid2_tripm_pane_g1

0x93de,	// (0x0003154a) blid2_tripm_pane_g2_ParamLimits

0x93de,	// (0x0003154a) blid2_tripm_pane_g2

0x93f2,	// (0x0003155e) blid2_tripm_pane_g3_ParamLimits

0x93f2,	// (0x0003155e) blid2_tripm_pane_g3

0x9406,	// (0x00031572) blid2_tripm_pane_g4_ParamLimits

0x9406,	// (0x00031572) blid2_tripm_pane_g4

0x941a,	// (0x00031586) blid2_tripm_pane_g5_ParamLimits

0x941a,	// (0x00031586) blid2_tripm_pane_g5

0x0005,

0xfb00,	// (0x00037c6c) blid2_tripm_pane_g_ParamLimits

0xfb00,	// (0x00037c6c) blid2_tripm_pane_g

0x9440,	// (0x000315ac) blid2_tripm_pane_t1_ParamLimits

0x9440,	// (0x000315ac) blid2_tripm_pane_t1

0x9459,	// (0x000315c5) blid2_tripm_pane_t2_ParamLimits

0x9459,	// (0x000315c5) blid2_tripm_pane_t2

0x9472,	// (0x000315de) blid2_tripm_pane_t3_ParamLimits

0x9472,	// (0x000315de) blid2_tripm_pane_t3

0x0003,

0xfb0d,	// (0x00037c79) blid2_tripm_pane_t_ParamLimits

0xfb0d,	// (0x00037c79) blid2_tripm_pane_t

0x94b9,	// (0x00031625) cell_blid2_satellite_pane_ParamLimits

0x94b9,	// (0x00031625) cell_blid2_satellite_pane

0x94d5,	// (0x00031641) cell_blid2_satellite_pane_g1

0xc5e4,	// (0x00034750) cell_blid2_satellite_pane_t1

0x69d0,	// (0x0002eb3c) blid2_speed_pane_g1

0xc5f2,	// (0x0003475e) blid2_speed_pane_t1

0xc600,	// (0x0003476c) blid2_speed_pane_t2

0x0001,

0xfb16,	// (0x00037c82) blid2_speed_pane_t

0x69d0,	// (0x0002eb3c) blid2_navig_ring_pane_g1

0x94de,	// (0x0003164a) blid2_navig_ring_pane_g2

0x94e6,	// (0x00031652) blid2_navig_ring_pane_g3

0x94ee,	// (0x0003165a) blid2_navig_ring_pane_g4

0x94f6,	// (0x00031662) blid2_navig_ring_pane_g5

0x0004,

0xfb1b,	// (0x00037c87) blid2_navig_ring_pane_g

0xdfe5,	// (0x00036151) bg_popup_window_pane_cp011

0xc60e,	// (0x0003477a) popup_blid2_search_window_g1

0xc616,	// (0x00034782) popup_blid2_search_window_t1

0xc624,	// (0x00034790) popup_blid2_search_window_t2

0x0001,

0xfb26,	// (0x00037c92) popup_blid2_search_window_t

0xeb2c,	// (0x00036c98) main_browser_pane_g1

0xe765,	// (0x000368d1) main_browser_pane_ParamLimits

0xb647,	// (0x000337b3) bg_button_pane_cp011_ParamLimits

0x1c40,	// (0x00029dac) cell_vitu2_function_pane_g1_ParamLimits

0x5fd0,	// (0x0002e13c) bg_popup_sub_pane_cp22_ParamLimits

0x8dcc,	// (0x00030f38) input_focus_pane_cp08_ParamLimits

0x8de3,	// (0x00030f4f) popup_vitu2_query_button_pane_ParamLimits

0x8de3,	// (0x00030f4f) popup_vitu2_query_button_pane

0x8df4,	// (0x00030f60) popup_vitu2_query_input_button_pane

0xc13e,	// (0x000342aa) popup_vitu2_query_window_g1_ParamLimits

0x8dfe,	// (0x00030f6a) popup_vitu2_query_window_g2_ParamLimits

0xfa27,	// (0x00037b93) popup_vitu2_query_window_g_ParamLimits

0xdfe5,	// (0x00036151) bg_button_pane_cp026

0x94fe,	// (0x0003166a) popup_vitu2_query_input_button_pane_g1

0xdfe5,	// (0x00036151) bg_button_pane_cp025

0xc632,	// (0x0003479e) popup_vitu2_query_button_pane_t1

0x6d27,	// (0x0002ee93) main_mp3_pane_t6

0x6d3d,	// (0x0002eea9) popup_slider_window_cp01

0xbcf3,	// (0x00033e5f) cam4_battery_pane

0xbd48,	// (0x00033eb4) cam4_battery_pane_cp02

0xc42f,	// (0x0003459b) cam4_battery_pane_cp01

0xc42f,	// (0x0003459b) cam4_battery_pane_cp03

0xbb90,	// (0x00033cfc) cam4_battery_pane_g1

0x69d0,	// (0x0002eb3c) cam4_battery_pane_g2

0x0001,

0xfb2b,	// (0x00037c97) cam4_battery_pane_g

0x67c0,	// (0x0002e92c) popup_blid_sat_info2_window_t11

0x3af7,	// (0x0002bc63) aid_size_touch_mv_arrow_left_ParamLimits

0x3b20,	// (0x0002bc8c) aid_size_touch_mv_arrow_right_ParamLimits

0x3b7e,	// (0x0002bcea) navi_pane_g1_ParamLimits

0x3b8a,	// (0x0002bcf6) navi_pane_g2_ParamLimits

0x3bb8,	// (0x0002bd24) navi_pane_g3_ParamLimits

0xf3f5,	// (0x00037561) navi_pane_g_ParamLimits

0x3c76,	// (0x0002bde2) navi_pane_mv_t1_ParamLimits

0x7b4c,	// (0x0002fcb8) grid_imed_effect_pane_ParamLimits

0x286b,	// (0x0002a9d7) aid_placing_vt_slider_lsc

0xea77,	// (0x00036be3) aid_placing_vt_slider_prt

0xe7da,	// (0x00036946) bg_tb_trans_pane_cp01_ParamLimits

0x6b95,	// (0x0002ed01) popup_image_details_window_g1_ParamLimits

0x6ba8,	// (0x0002ed14) popup_image_details_window_g2_ParamLimits

0x6bbd,	// (0x0002ed29) popup_image_details_window_g3_ParamLimits

0x6bbd,	// (0x0002ed29) popup_image_details_window_g3

0xf728,	// (0x00037894) popup_image_details_window_g_ParamLimits

0x6bd1,	// (0x0002ed3d) popup_image_details_window_t1_ParamLimits

0x6be3,	// (0x0002ed4f) popup_image_details_window_t2_ParamLimits

0x6bfc,	// (0x0002ed68) popup_image_details_window_t3_ParamLimits

0x6c10,	// (0x0002ed7c) popup_image_details_window_t4_ParamLimits

0x6c2b,	// (0x0002ed97) popup_image_details_window_t5_ParamLimits

0xf72f,	// (0x0003789b) popup_image_details_window_t_ParamLimits

0x9180,	// (0x000312ec) cl_header_name_pane_ParamLimits

0x9180,	// (0x000312ec) cl_header_name_pane

0x9506,	// (0x00031672) cl_header_name_pane_t1_ParamLimits

0x9506,	// (0x00031672) cl_header_name_pane_t1

0x9527,	// (0x00031693) cl_header_name_pane_t2_ParamLimits

0x9527,	// (0x00031693) cl_header_name_pane_t2

0x9569,	// (0x000316d5) cl_header_name_pane_t3_ParamLimits

0x9569,	// (0x000316d5) cl_header_name_pane_t3

0x0002,

0xfb30,	// (0x00037c9c) cl_header_name_pane_t_ParamLimits

0xfb30,	// (0x00037c9c) cl_header_name_pane_t

0x3c47,	// (0x0002bdb3) navi_pane_mv_g2_ParamLimits

0xbddd,	// (0x00033f49) field_vitu2_entry_pane_g1_ParamLimits

0xbde9,	// (0x00033f55) field_vitu2_entry_pane_g2_ParamLimits

0xbdf5,	// (0x00033f61) field_vitu2_entry_pane_g3_ParamLimits

0xbdf5,	// (0x00033f61) field_vitu2_entry_pane_g3

0xf926,	// (0x00037a92) field_vitu2_entry_pane_g_ParamLimits

0x1ae0,	// (0x00029c4c) cell_vitu2_itu_pane_g1_ParamLimits

0x1af0,	// (0x00029c5c) cell_vitu2_itu_pane_g2_ParamLimits

0x1af0,	// (0x00029c5c) cell_vitu2_itu_pane_g2

0x0001,

0xf932,	// (0x00037a9e) cell_vitu2_itu_pane_g_ParamLimits

0xf932,	// (0x00037a9e) cell_vitu2_itu_pane_g

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp05_ParamLimits

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp05

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp03

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp04

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp10_ParamLimits

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp10

0x9122,	// (0x0003128e) bg_vkb2_func_pane_cp08

0x9108,	// (0x00031274) bg_vkb2_func_pane_cp06

0x9116,	// (0x00031282) bg_vkb2_func_pane_cp07

0xc53e,	// (0x000346aa) bg_vkb2_func_pane_cp11_ParamLimits

0xc53e,	// (0x000346aa) bg_vkb2_func_pane_cp11

0xc553,	// (0x000346bf) bg_vkb2_func_pane_cp12_ParamLimits

0xc553,	// (0x000346bf) bg_vkb2_func_pane_cp12

0xdfe5,	// (0x00036151) bg_vkb2_func_pane_cp09

0xbe32,	// (0x00033f9e) bg_vkb2_func_pane_g1

0xec3d,	// (0x00036da9) bg_vkb2_func_pane_g2

0xbe3a,	// (0x00033fa6) bg_vkb2_func_pane_g3

0xbe42,	// (0x00033fae) bg_vkb2_func_pane_g4

0xc0c1,	// (0x0003422d) bg_vkb2_func_pane_g5

0xbe5a,	// (0x00033fc6) bg_vkb2_func_pane_g6

0xbe62,	// (0x00033fce) bg_vkb2_func_pane_g7

0xbe52,	// (0x00033fbe) bg_vkb2_func_pane_g8

0xec1d,	// (0x00036d89) bg_vkb2_func_pane_g9

0x0008,

0xfb37,	// (0x00037ca3) bg_vkb2_func_pane_g

0x942e,	// (0x0003159a) blid2_tripm_pane_g6_ParamLimits

0x942e,	// (0x0003159a) blid2_tripm_pane_g6

0xbb4a,	// (0x00033cb6) mp4_progress_pane_g1

0x94a5,	// (0x00031611) blid2_tripm_values_pane_ParamLimits

0x94a5,	// (0x00031611) blid2_tripm_values_pane

0x959a,	// (0x00031706) blid2_tripm_values_pane_t1

0x95a8,	// (0x00031714) blid2_tripm_values_pane_t2

0x95b6,	// (0x00031722) blid2_tripm_values_pane_t3

0x95c4,	// (0x00031730) blid2_tripm_values_pane_t4

0x95d2,	// (0x0003173e) blid2_tripm_values_pane_t5

0x95e0,	// (0x0003174c) blid2_tripm_values_pane_t6

0x95ee,	// (0x0003175a) blid2_tripm_values_pane_t7

0x95fc,	// (0x00031768) blid2_tripm_values_pane_t8

0x960a,	// (0x00031776) blid2_tripm_values_pane_t9

0x0008,

0xfb4a,	// (0x00037cb6) blid2_tripm_values_pane_t

0x28a8,	// (0x0002aa14) call_video_pane_t1_ParamLimits

0x28c2,	// (0x0002aa2e) call_video_pane_t2_ParamLimits

0xf27e,	// (0x000373ea) call_video_pane_t_ParamLimits

0x4378,	// (0x0002c4e4) msg_header_pane_g1_ParamLimits

0x4386,	// (0x0002c4f2) msg_header_pane_g2_ParamLimits

0x4386,	// (0x0002c4f2) msg_header_pane_g2

0x0001,

0xf498,	// (0x00037604) msg_header_pane_g_ParamLimits

0xf498,	// (0x00037604) msg_header_pane_g

0xe765,	// (0x000368d1) main_clock2_pane_ParamLimits

0x785d,	// (0x0002f9c9) grid_clock2_toolbar_pane_ParamLimits

0x785d,	// (0x0002f9c9) grid_clock2_toolbar_pane

0x785d,	// (0x0002f9c9) listscroll_clock2_pane_ParamLimits

0x785d,	// (0x0002f9c9) listscroll_clock2_pane

0x7944,	// (0x0002fab0) main_clock2_pane_t3_ParamLimits

0x7944,	// (0x0002fab0) main_clock2_pane_t3

0x7967,	// (0x0002fad3) main_clock2_pane_t4_ParamLimits

0x7967,	// (0x0002fad3) main_clock2_pane_t4

0xc640,	// (0x000347ac) cell_clock2_toolbar_pane

0xc648,	// (0x000347b4) cell_clock2_toolbar_pane_cp01

0xc648,	// (0x000347b4) cell_clock2_toolbar_pane_cp02

0xc650,	// (0x000347bc) cell_clock2_toolbar_pane_cp03

0xc658,	// (0x000347c4) list_clock2_pane

0x3881,	// (0x0002b9ed) scroll_pane_cp10

0xc660,	// (0x000347cc) list_single_clock2_pane_ParamLimits

0xc660,	// (0x000347cc) list_single_clock2_pane

0x3ce8,	// (0x0002be54) list_highlight_pane_cp08

0xc66d,	// (0x000347d9) list_single_clock2_pane_t1

0xc67b,	// (0x000347e7) list_single_clock2_pane_t2

0x0001,

0xfb5d,	// (0x00037cc9) list_single_clock2_pane_t

0xdfe5,	// (0x00036151) bg_button_pane_cp10

0xc689,	// (0x000347f5) cell_clock2_toolbar_pane_g1

0x0b3e,	// (0x00028caa) aid_main_viewer_pane_g1_ParamLimits

0x0b3e,	// (0x00028caa) aid_main_viewer_pane_g1

0x0b4c,	// (0x00028cb8) aid_main_viewer_pane_g2_ParamLimits

0x0b4c,	// (0x00028cb8) aid_main_viewer_pane_g2

0x4415,	// (0x0002c581) aid_main_viewer_pane_g3_ParamLimits

0x4415,	// (0x0002c581) aid_main_viewer_pane_g3

0x4424,	// (0x0002c590) aid_main_viewer_pane_g4_ParamLimits

0x4424,	// (0x0002c590) aid_main_viewer_pane_g4

0x0003,

0xf4a9,	// (0x00037615) aid_main_viewer_pane_g_ParamLimits

0xf4a9,	// (0x00037615) aid_main_viewer_pane_g

0x0b80,	// (0x00028cec) main_calc_pane_ParamLimits

0x0b94,	// (0x00028d00) main_dialer2_pane_ParamLimits

0xb655,	// (0x000337c1) main_cam6_pane

0xb655,	// (0x000337c1) main_vid6_pane

0x7869,	// (0x0002f9d5) listscroll_gen_pane_cp06_ParamLimits

0x7869,	// (0x0002f9d5) listscroll_gen_pane_cp06

0x798a,	// (0x0002faf6) main_clock2_pane_t5_ParamLimits

0x798a,	// (0x0002faf6) main_clock2_pane_t5

0x79ec,	// (0x0002fb58) aid_call2_pane_cp10_ParamLimits

0x79fe,	// (0x0002fb6a) aid_call_pane_cp10_ParamLimits

0x3a82,	// (0x0002bbee) popup_clock_analogue_window_cp10_g1_ParamLimits

0x3a82,	// (0x0002bbee) popup_clock_analogue_window_cp10_g2_ParamLimits

0x7a10,	// (0x0002fb7c) popup_clock_analogue_window_cp10_g3_ParamLimits

0x7a10,	// (0x0002fb7c) popup_clock_analogue_window_cp10_g4_ParamLimits

0x3a82,	// (0x0002bbee) popup_clock_analogue_window_cp10_g5_ParamLimits

0xf7df,	// (0x0003794b) popup_clock_analogue_window_cp10_g_ParamLimits

0x7a26,	// (0x0002fb92) popup_clock_analogue_window_cp10_t1_ParamLimits

0x8374,	// (0x000304e0) cell_dialer2_keypad_pane_g2_ParamLimits

0x8374,	// (0x000304e0) cell_dialer2_keypad_pane_g2

0x0001,

0xf8c5,	// (0x00037a31) cell_dialer2_keypad_pane_g_ParamLimits

0xf8c5,	// (0x00037a31) cell_dialer2_keypad_pane_g

0x8390,	// (0x000304fc) cell_dialer2_keypad_pane_t1

0x88ae,	// (0x00030a1a) main_cset_text2_pane_ParamLimits

0x88ae,	// (0x00030a1a) main_cset_text2_pane

0xc336,	// (0x000344a2) area_vitu2_query_pane_g1_ParamLimits

0x90a7,	// (0x00031213) area_vitu2_query_pane_g2_ParamLimits

0xfa7a,	// (0x00037be6) area_vitu2_query_pane_g_ParamLimits

0xc3ba,	// (0x00034526) area_vitu2_query_pane_t7_ParamLimits

0xc3ba,	// (0x00034526) area_vitu2_query_pane_t7

0x9108,	// (0x00031274) bg_button_pane_cp018_ParamLimits

0x9116,	// (0x00031282) bg_button_pane_cp021_ParamLimits

0x9122,	// (0x0003128e) bg_button_pane_cp022_ParamLimits

0x9122,	// (0x0003128e) bg_vkb2_func_pane_cp08_ParamLimits

0x9108,	// (0x00031274) bg_vkb2_func_pane_cp06_ParamLimits

0x9116,	// (0x00031282) bg_vkb2_func_pane_cp07_ParamLimits

0x9133,	// (0x0003129f) input_focus_pane_cp09_ParamLimits

0xc691,	// (0x000347fd) cam6_autofocus_pane_ParamLimits

0xc691,	// (0x000347fd) cam6_autofocus_pane

0x1d89,	// (0x00029ef5) cam6_image_uncrop_pane_ParamLimits

0x1d89,	// (0x00029ef5) cam6_image_uncrop_pane

0x1d98,	// (0x00029f04) cam6_indi_pane_ParamLimits

0x1d98,	// (0x00029f04) cam6_indi_pane

0x1dae,	// (0x00029f1a) cam6_mode_pane_ParamLimits

0x1dae,	// (0x00029f1a) cam6_mode_pane

0x1dc0,	// (0x00029f2c) cam6_timer_pane_ParamLimits

0x1dc0,	// (0x00029f2c) cam6_timer_pane

0x1dcc,	// (0x00029f38) cam6_zoom_pane_ParamLimits

0x1dcc,	// (0x00029f38) cam6_zoom_pane

0x9618,	// (0x00031784) cam6_mode_pane_g1_ParamLimits

0x9618,	// (0x00031784) cam6_mode_pane_g1

0x9628,	// (0x00031794) cam6_mode_pane_g2_ParamLimits

0x9628,	// (0x00031794) cam6_mode_pane_g2

0x9638,	// (0x000317a4) cam6_mode_pane_g3_ParamLimits

0x9638,	// (0x000317a4) cam6_mode_pane_g3

0x9648,	// (0x000317b4) cam6_mode_pane_g4_ParamLimits

0x9648,	// (0x000317b4) cam6_mode_pane_g4

0x0003,

0xfb62,	// (0x00037cce) cam6_mode_pane_g_ParamLimits

0xfb62,	// (0x00037cce) cam6_mode_pane_g

0xc69f,	// (0x0003480b) bg_tb_trans_pane_cp08_ParamLimits

0xc69f,	// (0x0003480b) bg_tb_trans_pane_cp08

0xc6ad,	// (0x00034819) cam6_battery_pane_ParamLimits

0xc6ad,	// (0x00034819) cam6_battery_pane

0xc6c3,	// (0x0003482f) cam6_indi_pane_g1_ParamLimits

0xc6c3,	// (0x0003482f) cam6_indi_pane_g1

0xc6d5,	// (0x00034841) cam6_indi_pane_g2_ParamLimits

0xc6d5,	// (0x00034841) cam6_indi_pane_g2

0xc6e7,	// (0x00034853) cam6_indi_pane_g3_ParamLimits

0xc6e7,	// (0x00034853) cam6_indi_pane_g3

0x0002,

0xfb6b,	// (0x00037cd7) cam6_indi_pane_g_ParamLimits

0xfb6b,	// (0x00037cd7) cam6_indi_pane_g

0xc6f9,	// (0x00034865) cam6_indi_pane_t1_ParamLimits

0xc6f9,	// (0x00034865) cam6_indi_pane_t1

0x8556,	// (0x000306c2) cam6_autofocus_pane_g1

0x854e,	// (0x000306ba) cam6_autofocus_pane_g2

0x8566,	// (0x000306d2) cam6_autofocus_pane_g3

0x855e,	// (0x000306ca) cam6_autofocus_pane_g4

0x0003,

0xfb72,	// (0x00037cde) cam6_autofocus_pane_g

0xc71f,	// (0x0003488b) cam6_timer_pane_g1

0xc727,	// (0x00034893) cam6_timer_pane_t1

0xc735,	// (0x000348a1) cam6_zoom_cont_pane

0xc73d,	// (0x000348a9) cam6_zoom_pane_g1

0xc745,	// (0x000348b1) cam6_zoom_pane_g2

0x9658,	// (0x000317c4) cam6_zoom_pane_g3

0x0002,

0xfb7b,	// (0x00037ce7) cam6_zoom_pane_g

0x69d0,	// (0x0002eb3c) cam6_battery_pane_g1

0x69d0,	// (0x0002eb3c) cam6_battery_pane_g2

0x0001,

0xf6ec,	// (0x00037858) cam6_battery_pane_g

0xc74d,	// (0x000348b9) cam6_zoom_cont_pane_g1

0xc756,	// (0x000348c2) cam6_zoom_cont_pane_g2

0xc75f,	// (0x000348cb) cam6_zoom_cont_pane_g3

0x0002,

0xfb82,	// (0x00037cee) cam6_zoom_cont_pane_g

0x9675,	// (0x000317e1) cam6_mode_pane_cp_ParamLimits

0x9675,	// (0x000317e1) cam6_mode_pane_cp

0x9687,	// (0x000317f3) cam6_zoom_pane_cp_ParamLimits

0x9687,	// (0x000317f3) cam6_zoom_pane_cp

0x9695,	// (0x00031801) vid6_image_uncrop_cif_pane_ParamLimits

0x9695,	// (0x00031801) vid6_image_uncrop_cif_pane

0x96a5,	// (0x00031811) vid6_image_uncrop_nhd_pane_ParamLimits

0x96a5,	// (0x00031811) vid6_image_uncrop_nhd_pane

0x96b4,	// (0x00031820) vid6_image_uncrop_vga_pane_ParamLimits

0x96b4,	// (0x00031820) vid6_image_uncrop_vga_pane

0x96c3,	// (0x0003182f) vid6_image_uncrop_wvga_pane_ParamLimits

0x96c3,	// (0x0003182f) vid6_image_uncrop_wvga_pane

0x96d2,	// (0x0003183e) vid6_indi_pane_ParamLimits

0x96d2,	// (0x0003183e) vid6_indi_pane

0xc69f,	// (0x0003480b) bg_tb_trans_pane_cp09_ParamLimits

0xc69f,	// (0x0003480b) bg_tb_trans_pane_cp09

0xc777,	// (0x000348e3) cam6_battery_pane_cp_ParamLimits

0xc777,	// (0x000348e3) cam6_battery_pane_cp

0xc783,	// (0x000348ef) vid6_indi_pane_g1_ParamLimits

0xc783,	// (0x000348ef) vid6_indi_pane_g1

0xc795,	// (0x00034901) vid6_indi_pane_g2_ParamLimits

0xc795,	// (0x00034901) vid6_indi_pane_g2

0xc7a7,	// (0x00034913) vid6_indi_pane_g3_ParamLimits

0xc7a7,	// (0x00034913) vid6_indi_pane_g3

0xc7be,	// (0x0003492a) vid6_indi_pane_g4_ParamLimits

0xc7be,	// (0x0003492a) vid6_indi_pane_g4

0xc7d5,	// (0x00034941) vid6_indi_pane_g5_ParamLimits

0xc7d5,	// (0x00034941) vid6_indi_pane_g5

0x0004,

0xfb89,	// (0x00037cf5) vid6_indi_pane_g_ParamLimits

0xfb89,	// (0x00037cf5) vid6_indi_pane_g

0xc7ef,	// (0x0003495b) vid6_indi_pane_t1_ParamLimits

0xc7ef,	// (0x0003495b) vid6_indi_pane_t1

0xc805,	// (0x00034971) vid6_indi_pane_t2_ParamLimits

0xc805,	// (0x00034971) vid6_indi_pane_t2

0xc82d,	// (0x00034999) vid6_indi_pane_t3_ParamLimits

0xc82d,	// (0x00034999) vid6_indi_pane_t3

0xc855,	// (0x000349c1) vid6_indi_pane_t4_ParamLimits

0xc855,	// (0x000349c1) vid6_indi_pane_t4

0x0003,

0xfb94,	// (0x00037d00) vid6_indi_pane_t_ParamLimits

0xfb94,	// (0x00037d00) vid6_indi_pane_t

0xc879,	// (0x000349e5) wait_bar_pane_cp08

0x96ea,	// (0x00031856) main_cset_text2_pane_t1_ParamLimits

0x96ea,	// (0x00031856) main_cset_text2_pane_t1

0x9660,	// (0x000317cc) listscroll_gen_pane_cp06_t1_ParamLimits

0x9660,	// (0x000317cc) listscroll_gen_pane_cp06_t1

0xb655,	// (0x000337c1) main_cam6_set_pane

0xbce5,	// (0x00033e51) bg_tb_trans_pane_cp06_ParamLimits

0xbcfb,	// (0x00033e67) cam4_indicators_pane_g1_ParamLimits

0xbd0c,	// (0x00033e78) cam4_indicators_pane_g2_ParamLimits

0xf902,	// (0x00037a6e) cam4_indicators_pane_g_ParamLimits

0xbd24,	// (0x00033e90) cam4_indicators_pane_t1_ParamLimits

0xb647,	// (0x000337b3) bg_tb_trans_pane_cp07_ParamLimits

0xbd52,	// (0x00033ebe) vid4_indicators_pane_g1_ParamLimits

0xbd68,	// (0x00033ed4) vid4_indicators_pane_g2_ParamLimits

0xbd7c,	// (0x00033ee8) vid4_indicators_pane_g3_ParamLimits

0xbd8f,	// (0x00033efb) vid4_indicators_pane_g4_ParamLimits

0xf914,	// (0x00037a80) vid4_indicators_pane_g_ParamLimits

0xbdad,	// (0x00033f19) vid4_indicators_pane_t1_ParamLimits

0x1d65,	// (0x00029ed1) vid4_progress_pane_g1_ParamLimits

0x1d77,	// (0x00029ee3) vid4_progress_pane_g2_ParamLimits

0xb7de,	// (0x0003394a) vid4_progress_pane_g3_ParamLimits

0xc437,	// (0x000345a3) vid4_progress_pane_g4_ParamLimits

0xfac5,	// (0x00037c31) vid4_progress_pane_g_ParamLimits

0xc455,	// (0x000345c1) vid4_progress_pane_t1_ParamLimits

0xc46a,	// (0x000345d6) vid4_progress_pane_t2_ParamLimits

0xc480,	// (0x000345ec) vid4_progress_pane_t3_ParamLimits

0xfad0,	// (0x00037c3c) vid4_progress_pane_t_ParamLimits

0xc495,	// (0x00034601) wait_bar_pane_cp07_ParamLimits

0x970b,	// (0x00031877) main_cam6_set_pane_g2_ParamLimits

0x970b,	// (0x00031877) main_cam6_set_pane_g2

0x9731,	// (0x0003189d) main_cset6_listscroll_pane_ParamLimits

0x9731,	// (0x0003189d) main_cset6_listscroll_pane

0x974f,	// (0x000318bb) main_cset6_slider_pane_ParamLimits

0x974f,	// (0x000318bb) main_cset6_slider_pane

0x9765,	// (0x000318d1) main_cset6_text2_pane_ParamLimits

0x9765,	// (0x000318d1) main_cset6_text2_pane

0xc888,	// (0x000349f4) main_cset6_text_pane

0xc890,	// (0x000349fc) main_cset_list_pane_copy1_ParamLimits

0xc890,	// (0x000349fc) main_cset_list_pane_copy1

0xc8a0,	// (0x00034a0c) scroll_pane_cp028_copy1

0x9773,	// (0x000318df) cset_list_set_pane_copy1

0x9787,	// (0x000318f3) aid_position_infowindow_above_copy1

0x978f,	// (0x000318fb) aid_position_infowindow_below_copy1

0x9797,	// (0x00031903) cset_list_set_pane_g1_copy1

0x979f,	// (0x0003190b) cset_list_set_pane_g3_copy1_ParamLimits

0x979f,	// (0x0003190b) cset_list_set_pane_g3_copy1

0x97ae,	// (0x0003191a) cset_list_set_pane_t1_copy1_ParamLimits

0x97ae,	// (0x0003191a) cset_list_set_pane_t1_copy1

0xe7da,	// (0x00036946) list_highlight_pane_cp021_copy1_ParamLimits

0xe7da,	// (0x00036946) list_highlight_pane_cp021_copy1

0xc8a9,	// (0x00034a15) cset6_slider_pane_ParamLimits

0xc8a9,	// (0x00034a15) cset6_slider_pane

0xc8d5,	// (0x00034a41) main_cset6_slider_pane_g1_ParamLimits

0xc8d5,	// (0x00034a41) main_cset6_slider_pane_g1

0x97c3,	// (0x0003192f) main_cset6_slider_pane_g2_ParamLimits

0x97c3,	// (0x0003192f) main_cset6_slider_pane_g2

0xc8fd,	// (0x00034a69) main_cset6_slider_pane_g3_ParamLimits

0xc8fd,	// (0x00034a69) main_cset6_slider_pane_g3

0x97eb,	// (0x00031957) main_cset6_slider_pane_g4_ParamLimits

0x97eb,	// (0x00031957) main_cset6_slider_pane_g4

0x97f7,	// (0x00031963) main_cset6_slider_pane_g5_ParamLimits

0x97f7,	// (0x00031963) main_cset6_slider_pane_g5

0xbf65,	// (0x000340d1) main_cset6_slider_pane_g7_ParamLimits

0xbf65,	// (0x000340d1) main_cset6_slider_pane_g7

0xbf71,	// (0x000340dd) main_cset6_slider_pane_g8_ParamLimits

0xbf71,	// (0x000340dd) main_cset6_slider_pane_g8

0x895d,	// (0x00030ac9) main_cset6_slider_pane_g9_ParamLimits

0x895d,	// (0x00030ac9) main_cset6_slider_pane_g9

0x8969,	// (0x00030ad5) main_cset6_slider_pane_g10_ParamLimits

0x8969,	// (0x00030ad5) main_cset6_slider_pane_g10

0x8975,	// (0x00030ae1) main_cset6_slider_pane_g11_ParamLimits

0x8975,	// (0x00030ae1) main_cset6_slider_pane_g11

0x8981,	// (0x00030aed) main_cset6_slider_pane_g12_ParamLimits

0x8981,	// (0x00030aed) main_cset6_slider_pane_g12

0x898d,	// (0x00030af9) main_cset6_slider_pane_g13_ParamLimits

0x898d,	// (0x00030af9) main_cset6_slider_pane_g13

0x8999,	// (0x00030b05) main_cset6_slider_pane_g14_ParamLimits

0x8999,	// (0x00030b05) main_cset6_slider_pane_g14

0x9805,	// (0x00031971) main_cset6_slider_pane_g15_ParamLimits

0x9805,	// (0x00031971) main_cset6_slider_pane_g15

0x89bd,	// (0x00030b29) main_cset6_slider_pane_g16_ParamLimits

0x89bd,	// (0x00030b29) main_cset6_slider_pane_g16

0x89cb,	// (0x00030b37) main_cset6_slider_pane_g17_ParamLimits

0x89cb,	// (0x00030b37) main_cset6_slider_pane_g17

0x0011,

0xfb9d,	// (0x00037d09) main_cset6_slider_pane_g_ParamLimits

0xfb9d,	// (0x00037d09) main_cset6_slider_pane_g

0xc909,	// (0x00034a75) main_cset6_slider_pane_t1_ParamLimits

0xc909,	// (0x00034a75) main_cset6_slider_pane_t1

0x9835,	// (0x000319a1) main_cset6_slider_pane_t2_ParamLimits

0x9835,	// (0x000319a1) main_cset6_slider_pane_t2

0x9860,	// (0x000319cc) main_cset6_slider_pane_t3_ParamLimits

0x9860,	// (0x000319cc) main_cset6_slider_pane_t3

0x988b,	// (0x000319f7) main_cset6_slider_pane_t4_ParamLimits

0x988b,	// (0x000319f7) main_cset6_slider_pane_t4

0x98b8,	// (0x00031a24) main_cset6_slider_pane_t5_ParamLimits

0x98b8,	// (0x00031a24) main_cset6_slider_pane_t5

0xc94a,	// (0x00034ab6) main_cset6_slider_pane_t7_ParamLimits

0xc94a,	// (0x00034ab6) main_cset6_slider_pane_t7

0x98e5,	// (0x00031a51) main_cset6_slider_pane_t8_ParamLimits

0x98e5,	// (0x00031a51) main_cset6_slider_pane_t8

0x9909,	// (0x00031a75) main_cset6_slider_pane_t9_ParamLimits

0x9909,	// (0x00031a75) main_cset6_slider_pane_t9

0x992d,	// (0x00031a99) main_cset6_slider_pane_t10_ParamLimits

0x992d,	// (0x00031a99) main_cset6_slider_pane_t10

0x9951,	// (0x00031abd) main_cset6_slider_pane_t11_ParamLimits

0x9951,	// (0x00031abd) main_cset6_slider_pane_t11

0xc980,	// (0x00034aec) main_cset6_slider_pane_t14_ParamLimits

0xc980,	// (0x00034aec) main_cset6_slider_pane_t14

0xc9b9,	// (0x00034b25) main_cset6_slider_pane_t15_ParamLimits

0xc9b9,	// (0x00034b25) main_cset6_slider_pane_t15

0x000b,

0xfbc2,	// (0x00037d2e) main_cset6_slider_pane_t_ParamLimits

0xfbc2,	// (0x00037d2e) main_cset6_slider_pane_t

0xc9f2,	// (0x00034b5e) cset_slider_pane_g1_copy1

0xc9fb,	// (0x00034b67) cset_slider_pane_g2_copy1

0xca04,	// (0x00034b70) cset_slider_pane_g3_copy1

0xdfe5,	// (0x00036151) bg_popup_sub_pane_cp011_copy1

0xcade,	// (0x00034c4a) main_cset_text_pane_g1_copy1

0xc152,	// (0x000342be) main_cset_text_pane_t1_copy1

0xc160,	// (0x000342cc) main_cset_text_pane_t2_copy1

0xc16e,	// (0x000342da) main_cset_text_pane_t3_copy1

0xc17c,	// (0x000342e8) main_cset_text_pane_t4_copy1

0xc18a,	// (0x000342f6) main_cset_text_pane_t5_copy1

0xcae6,	// (0x00034c52) main_cset_text_pane_t6_copy1

0xcaf4,	// (0x00034c60) main_cset_text_pane_t7_copy1

0x96ea,	// (0x00031856) main_cset_text2_pane_t1_copy1

0xb647,	// (0x000337b3) main_ncimui_pane

0x0e22,	// (0x00028f8e) popup_query_ncimui_window_ParamLimits

0x0e22,	// (0x00028f8e) popup_query_ncimui_window

0x6edb,	// (0x0002f047) field_cale_ev2_pane_g4_ParamLimits

0x6edb,	// (0x0002f047) field_cale_ev2_pane_g4

0x82f9,	// (0x00030465) cell_video_dialer_keypad_pane_g2_ParamLimits

0x82f9,	// (0x00030465) cell_video_dialer_keypad_pane_g2

0x0001,

0xf8a0,	// (0x00037a0c) cell_video_dialer_keypad_pane_g_ParamLimits

0xf8a0,	// (0x00037a0c) cell_video_dialer_keypad_pane_g

0x8311,	// (0x0003047d) cell_video_dialer_keypad_pane_t1

0xdfe5,	// (0x00036151) bg_popup_window_pane_cp012

0x36d6,	// (0x0002b842) heading_pane_cp06

0xcb20,	// (0x00034c8c) ncim_query_content_pane

0xdfe5,	// (0x00036151) bg_popup_heading_pane_cp01

0xcb28,	// (0x00034c94) ncim_heading_pane_t1

0xcb36,	// (0x00034ca2) ncim_indicator_popup_pane

0xcb48,	// (0x00034cb4) ncim_query_button_pane

0xcb5e,	// (0x00034cca) ncim_query_content_pane_t1

0xcb70,	// (0x00034cdc) ncim_query_content_pane_t2

0x0005,

0xfc06,	// (0x00037d72) ncim_query_content_pane_t

0xcbaa,	// (0x00034d16) ncim_query_list_pane

0xcbbc,	// (0x00034d28) ncim_query_popup_pane

0xcb36,	// (0x00034ca2) ncim_indicator_popup_pane_ParamLimits

0x9a9d,	// (0x00031c09) ncim_query_content_pane_g1_ParamLimits

0x9a9d,	// (0x00031c09) ncim_query_content_pane_g1

0xcb5e,	// (0x00034cca) ncim_query_content_pane_t1_ParamLimits

0xcb70,	// (0x00034cdc) ncim_query_content_pane_t2_ParamLimits

0x9aa9,	// (0x00031c15) ncim_query_content_pane_t3_ParamLimits

0x9aa9,	// (0x00031c15) ncim_query_content_pane_t3

0x9ad1,	// (0x00031c3d) ncim_query_content_pane_t4_ParamLimits

0x9ad1,	// (0x00031c3d) ncim_query_content_pane_t4

0x9af9,	// (0x00031c65) ncim_query_content_pane_t5_ParamLimits

0x9af9,	// (0x00031c65) ncim_query_content_pane_t5

0xcb82,	// (0x00034cee) ncim_query_content_pane_t6_ParamLimits

0xcb82,	// (0x00034cee) ncim_query_content_pane_t6

0xfc06,	// (0x00037d72) ncim_query_content_pane_t_ParamLimits

0xcbaa,	// (0x00034d16) ncim_query_list_pane_ParamLimits

0xcbbc,	// (0x00034d28) ncim_query_popup_pane_ParamLimits

0xcbd0,	// (0x00034d3c) wait_bar_pane_cp04

0xdfe5,	// (0x00036151) input_focus_pane_cp011

0xcbd8,	// (0x00034d44) ncim_query_popup_pane_t1

0xcbe6,	// (0x00034d52) ncim_list_query_list_pane_ParamLimits

0xcbe6,	// (0x00034d52) ncim_list_query_list_pane

0xdfe5,	// (0x00036151) bg_button_pane_cp027

0xcbf9,	// (0x00034d65) ncim_query_button_pane_g1

0xdfe5,	// (0x00036151) list_highlight_pane_cp012

0xcc03,	// (0x00034d6f) ncim_list_query_list_pane_g1

0xcc0b,	// (0x00034d77) ncim_list_query_list_pane_t1

0xbd18,	// (0x00033e84) cam4_indicators_pane_g3_ParamLimits

0xbd18,	// (0x00033e84) cam4_indicators_pane_g3

0xbd9b,	// (0x00033f07) vid4_indicators_pane_g5_ParamLimits

0xbd9b,	// (0x00033f07) vid4_indicators_pane_g5

0xc446,	// (0x000345b2) vid4_progress_pane_g5_ParamLimits

0xc446,	// (0x000345b2) vid4_progress_pane_g5

0x998b,	// (0x00031af7) main_ncimui_pane_g1

0x99f1,	// (0x00031b5d) ncimui_group_query_pane_ParamLimits

0x99f1,	// (0x00031b5d) ncimui_group_query_pane

0x9a39,	// (0x00031ba5) ncimui_list_pane_ParamLimits

0x9a39,	// (0x00031ba5) ncimui_list_pane

0x9a60,	// (0x00031bcc) ncimui_text_pane_ParamLimits

0x9a60,	// (0x00031bcc) ncimui_text_pane

0x9b21,	// (0x00031c8d) ncimui_text_pane_t1_ParamLimits

0x9b21,	// (0x00031c8d) ncimui_text_pane_t1

0xcc19,	// (0x00034d85) ncimui_list_single_graphic_pane_ParamLimits

0xcc19,	// (0x00034d85) ncimui_list_single_graphic_pane

0x9b3f,	// (0x00031cab) ncimui_query_pane_ParamLimits

0x9b3f,	// (0x00031cab) ncimui_query_pane

0xdfe5,	// (0x00036151) list_highlight_pane_cp013

0xcc29,	// (0x00034d95) ncim_list_query_list_pane_t1_copy1

0xcc03,	// (0x00034d6f) ncim_list_single_graphic_pane_g1

0xcc37,	// (0x00034da3) ncim_query_button_pane_cp01

0xcc43,	// (0x00034daf) ncim_query_entry_pane_ParamLimits

0xcc43,	// (0x00034daf) ncim_query_entry_pane

0xcc56,	// (0x00034dc2) ncimui_query_pane_g1

0xcc62,	// (0x00034dce) ncimui_query_pane_t1_ParamLimits

0xcc62,	// (0x00034dce) ncimui_query_pane_t1

0xe7da,	// (0x00036946) input_focus_pane_cp012

0xcc7b,	// (0x00034de7) ncim_query_entry_pane_t1

0xe765,	// (0x000368d1) main_im_pane_ParamLimits

0xb647,	// (0x000337b3) main_mobtv_pane_ParamLimits

0xb647,	// (0x000337b3) main_mobtv_pane

0x981d,	// (0x00031989) main_cset6_slider_pane_g18_ParamLimits

0x981d,	// (0x00031989) main_cset6_slider_pane_g18

0x9829,	// (0x00031995) main_cset6_slider_pane_g19_ParamLimits

0x9829,	// (0x00031995) main_cset6_slider_pane_g19

0xcc8d,	// (0x00034df9) bg_main_mobtv_pane_ParamLimits

0xcc8d,	// (0x00034df9) bg_main_mobtv_pane

0x9b52,	// (0x00031cbe) main_mobtv_info_pane

0x9b5d,	// (0x00031cc9) main_mobtv_loading_pane_ParamLimits

0x9b5d,	// (0x00031cc9) main_mobtv_loading_pane

0xcc9b,	// (0x00034e07) main_mobtv_pg_channel_list_pane

0xcca5,	// (0x00034e11) main_mobtv_pg_hdr_pane

0x9b6a,	// (0x00031cd6) main_mobtv_programe_curr_pane_ParamLimits

0x9b6a,	// (0x00031cd6) main_mobtv_programe_curr_pane

0x9b77,	// (0x00031ce3) main_mobtv_programe_next_pane_ParamLimits

0x9b77,	// (0x00031ce3) main_mobtv_programe_next_pane

0xccae,	// (0x00034e1a) popup_mobtv_noti_window

0x69d0,	// (0x0002eb3c) main_tv_pg_hdr_pane_g1

0xccb8,	// (0x00034e24) main_tv_pg_hdr_pane_g2

0xccc0,	// (0x00034e2c) main_tv_pg_hdr_pane_g3

0xccc8,	// (0x00034e34) main_tv_pg_hdr_pane_g4

0xccd0,	// (0x00034e3c) main_tv_pg_hdr_pane_g5

0xccda,	// (0x00034e46) main_tv_pg_hdr_pane_g6

0xcce4,	// (0x00034e50) main_tv_pg_hdr_pane_g7

0xccee,	// (0x00034e5a) main_tv_pg_hdr_pane_g8

0xccf8,	// (0x00034e64) main_tv_pg_hdr_pane_g9

0xcd02,	// (0x00034e6e) main_tv_pg_hdr_pane_g10

0xcd0c,	// (0x00034e78) main_tv_pg_hdr_pane_g11

0x000a,

0xfc13,	// (0x00037d7f) main_tv_pg_hdr_pane_g

0xcd16,	// (0x00034e82) main_tv_pg_hdr_pane_t1

0xcd24,	// (0x00034e90) main_tv_pg_hdr_pane_t2

0xcd32,	// (0x00034e9e) main_tv_pg_hdr_pane_t3

0xcd42,	// (0x00034eae) main_tv_pg_hdr_pane_t4

0xcd52,	// (0x00034ebe) main_tv_pg_hdr_pane_t5

0x0004,

0xfc2a,	// (0x00037d96) main_tv_pg_hdr_pane_t

0xcd62,	// (0x00034ece) single_mobtv_pg_channel_pane_ParamLimits

0xcd62,	// (0x00034ece) single_mobtv_pg_channel_pane

0xcd74,	// (0x00034ee0) single_mobtv_pg_channel_table_pane

0xcd7d,	// (0x00034ee9) single_mobtv_pg_channel_thumb_pane

0xcd86,	// (0x00034ef2) single_tv_pg_channel_pane_g1

0xcd8f,	// (0x00034efb) single_tv_pg_channel_pane_g2

0x0001,

0xfc35,	// (0x00037da1) single_tv_pg_channel_pane_g

0x6cae,	// (0x0002ee1a) bg_single_mobtv_pg_channel_thumb_pane_ParamLimits

0x6cae,	// (0x0002ee1a) bg_single_mobtv_pg_channel_thumb_pane

0xcd98,	// (0x00034f04) single_mobtv_pg_channel_thumb_pane_g1_ParamLimits

0xcd98,	// (0x00034f04) single_mobtv_pg_channel_thumb_pane_g1

0xcda6,	// (0x00034f12) single_mobtv_pg_channel_thumb_pane_g2_ParamLimits

0xcda6,	// (0x00034f12) single_mobtv_pg_channel_thumb_pane_g2

0xcdb2,	// (0x00034f1e) single_mobtv_pg_channel_thumb_pane_g3_ParamLimits

0xcdb2,	// (0x00034f1e) single_mobtv_pg_channel_thumb_pane_g3

0x0002,

0xfc3a,	// (0x00037da6) single_mobtv_pg_channel_thumb_pane_g_ParamLimits

0xfc3a,	// (0x00037da6) single_mobtv_pg_channel_thumb_pane_g

0xcdbe,	// (0x00034f2a) single_mobtv_pg_channel_thumb_pane_t1

0xcdcc,	// (0x00034f38) single_mobtv_pg_channel_thumb_pane_t2

0x0001,

0xfc41,	// (0x00037dad) single_mobtv_pg_channel_thumb_pane_t

0x69d0,	// (0x0002eb3c) bg_single_mobtv_pg_channel_table_pane_g1

0x69d0,	// (0x0002eb3c) bg_single_mobtv_pg_channel_table_pane_g2

0x0001,

0xf6ec,	// (0x00037858) bg_single_mobtv_pg_channel_table_pane_g

0xcdda,	// (0x00034f46) single_mobtv_pg_channel_table_pane_t1

0xcde8,	// (0x00034f54) single_mobtv_pg_channel_table_pane_t2

0x0001,

0xfc46,	// (0x00037db2) single_mobtv_pg_channel_table_pane_t

0x9b8c,	// (0x00031cf8) main_mobtv_info_pane_g1_ParamLimits

0x9b8c,	// (0x00031cf8) main_mobtv_info_pane_g1

0x9baa,	// (0x00031d16) main_mobtv_info_pane_t1_ParamLimits

0x9baa,	// (0x00031d16) main_mobtv_info_pane_t1

0x9c22,	// (0x00031d8e) main_mobtv_info_pane_t2_ParamLimits

0x9c22,	// (0x00031d8e) main_mobtv_info_pane_t2

0x0002,

0xfc50,	// (0x00037dbc) main_mobtv_info_pane_t_ParamLimits

0xfc50,	// (0x00037dbc) main_mobtv_info_pane_t

0x9cb3,	// (0x00031e1f) wait_bar_pane_cp05

0x9cc5,	// (0x00031e31) main_mobtv_loading_pane_g1_ParamLimits

0x9cc5,	// (0x00031e31) main_mobtv_loading_pane_g1

0x9cd6,	// (0x00031e42) main_mobtv_loading_pane_g2_ParamLimits

0x9cd6,	// (0x00031e42) main_mobtv_loading_pane_g2

0x9ce2,	// (0x00031e4e) main_mobtv_loading_pane_g3_ParamLimits

0x9ce2,	// (0x00031e4e) main_mobtv_loading_pane_g3

0x0002,

0xfc57,	// (0x00037dc3) main_mobtv_loading_pane_g_ParamLimits

0xfc57,	// (0x00037dc3) main_mobtv_loading_pane_g

0xcdf6,	// (0x00034f62) main_mobtv_loading_pane_t1_ParamLimits

0xcdf6,	// (0x00034f62) main_mobtv_loading_pane_t1

0xce0e,	// (0x00034f7a) main_mobtv_loading_pane_t2_ParamLimits

0xce0e,	// (0x00034f7a) main_mobtv_loading_pane_t2

0x0001,

0xfc5e,	// (0x00037dca) main_mobtv_loading_pane_t_ParamLimits

0xfc5e,	// (0x00037dca) main_mobtv_loading_pane_t

0x9cf5,	// (0x00031e61) wait_bar_pane_cp06_ParamLimits

0x9cf5,	// (0x00031e61) wait_bar_pane_cp06

0xce32,	// (0x00034f9e) main_mobtv_programe_curr_pane_t1

0xce40,	// (0x00034fac) main_mobtv_programe_curr_pane_t2

0x0001,

0xfc63,	// (0x00037dcf) main_mobtv_programe_curr_pane_t

0xce4e,	// (0x00034fba) main_mobtv_programe_next_pane_t1

0xce5c,	// (0x00034fc8) main_mobtv_programe_next_pane_t2

0xce6a,	// (0x00034fd6) main_mobtv_programe_next_pane_t3

0x0002,

0xfc68,	// (0x00037dd4) main_mobtv_programe_next_pane_t

0xdfe5,	// (0x00036151) bg_popup_mobtv_noti_window_pane

0xce78,	// (0x00034fe4) popup_mobtv_noti_window_g1

0xce80,	// (0x00034fec) popup_mobtv_noti_window_t1

0xce8e,	// (0x00034ffa) popup_mobtv_noti_window_t2

0x0001,

0xfc6f,	// (0x00037ddb) popup_mobtv_noti_window_t

0x69d0,	// (0x0002eb3c) bg_popup_mobtv_noti_window_pane_g1

0xb655,	// (0x000337c1) sc_clock_pane

0xb655,	// (0x000337c1) main_fs_bigclock_pane

0x948f,	// (0x000315fb) blid2_tripm_pane_t4_ParamLimits

0x948f,	// (0x000315fb) blid2_tripm_pane_t4

0x9d04,	// (0x00031e70) sc_clock_pane_g1_ParamLimits

0x9d04,	// (0x00031e70) sc_clock_pane_g1

0x9d16,	// (0x00031e82) sc_clock_pane_t1_ParamLimits

0x9d16,	// (0x00031e82) sc_clock_pane_t1

0x9d3a,	// (0x00031ea6) sc_clock_pane_t2_ParamLimits

0x9d3a,	// (0x00031ea6) sc_clock_pane_t2

0x9d52,	// (0x00031ebe) sc_clock_pane_t3_ParamLimits

0x9d52,	// (0x00031ebe) sc_clock_pane_t3

0x0004,

0xfc74,	// (0x00037de0) sc_clock_pane_t_ParamLimits

0xfc74,	// (0x00037de0) sc_clock_pane_t

0xab94,	// (0x00032d00) main_fs_bigclock_indicator_pane_ParamLimits

0xab94,	// (0x00032d00) main_fs_bigclock_indicator_pane

0x6c45,	// (0x0002edb1) main_fs_bigclock_pane_g1_ParamLimits

0x6c45,	// (0x0002edb1) main_fs_bigclock_pane_g1

0xaba0,	// (0x00032d0c) main_fs_bigclock_pane_t1_ParamLimits

0xaba0,	// (0x00032d0c) main_fs_bigclock_pane_t1

0xabb2,	// (0x00032d1e) main_fs_bigclock_pane_t2_ParamLimits

0xabb2,	// (0x00032d1e) main_fs_bigclock_pane_t2

0xabc6,	// (0x00032d32) main_fs_bigclock_pane_t3_ParamLimits

0xabc6,	// (0x00032d32) main_fs_bigclock_pane_t3

0x0002,

0xfe69,	// (0x00037fd5) main_fs_bigclock_pane_t_ParamLimits

0xfe69,	// (0x00037fd5) main_fs_bigclock_pane_t

0xdb33,	// (0x00035c9f) main_fs_bigclock_indicator_pane_g1

0xcb50,	// (0x00034cbc) ncim_query_content_pane_g2_ParamLimits

0xcb50,	// (0x00034cbc) ncim_query_content_pane_g2

0x0001,

0xfc01,	// (0x00037d6d) ncim_query_content_pane_g_ParamLimits

0xfc01,	// (0x00037d6d) ncim_query_content_pane_g

0x9d69,	// (0x00031ed5) sc_clock_pane_t4_ParamLimits

0x9d69,	// (0x00031ed5) sc_clock_pane_t4

0xb647,	// (0x000337b3) main_radioblah_pane

0xbc37,	// (0x00033da3) cell_call4_button_pane_t1_copy1_ParamLimits

0xbc37,	// (0x00033da3) cell_call4_button_pane_t1_copy1

0x99a3,	// (0x00031b0f) main_ncimui_pane_t1_ParamLimits

0x99a3,	// (0x00031b0f) main_ncimui_pane_t1

0x99bd,	// (0x00031b29) main_ncimui_pane_t2_ParamLimits

0x99bd,	// (0x00031b29) main_ncimui_pane_t2

0x0002,

0xfbfa,	// (0x00037d66) main_ncimui_pane_t_ParamLimits

0xfbfa,	// (0x00037d66) main_ncimui_pane_t

0xcfda,	// (0x00035146) main_radioblah_anim_pane_ParamLimits

0xcfda,	// (0x00035146) main_radioblah_anim_pane

0xcfeb,	// (0x00035157) main_radioblah_info_pane_ParamLimits

0xcfeb,	// (0x00035157) main_radioblah_info_pane

0xcfff,	// (0x0003516b) main_radioblah_pane_t1_ParamLimits

0xcfff,	// (0x0003516b) main_radioblah_pane_t1

0xd01b,	// (0x00035187) main_radioblah_pane_t2_ParamLimits

0xd01b,	// (0x00035187) main_radioblah_pane_t2

0x0003,

0xfc95,	// (0x00037e01) main_radioblah_pane_t_ParamLimits

0xfc95,	// (0x00037e01) main_radioblah_pane_t

0x9e19,	// (0x00031f85) main_radioblah_rocker_ctrl_pane_ParamLimits

0x9e19,	// (0x00031f85) main_radioblah_rocker_ctrl_pane

0xd063,	// (0x000351cf) main_radioblah_info_pane_t1_ParamLimits

0xd063,	// (0x000351cf) main_radioblah_info_pane_t1

0x9e71,	// (0x00031fdd) main_radioblah_info_pane_t2_ParamLimits

0x9e71,	// (0x00031fdd) main_radioblah_info_pane_t2

0x0003,

0xfc9e,	// (0x00037e0a) main_radioblah_info_pane_t_ParamLimits

0xfc9e,	// (0x00037e0a) main_radioblah_info_pane_t

0x69d0,	// (0x0002eb3c) main_radioblah_rocker_ctrl_pane_g1

0x9f21,	// (0x0003208d) main_radioblah_rocker_ctrl_pane_g2

0x9f29,	// (0x00032095) main_radioblah_rocker_ctrl_pane_g3

0x9f31,	// (0x0003209d) main_radioblah_rocker_ctrl_pane_g4

0x9f39,	// (0x000320a5) main_radioblah_rocker_ctrl_pane_g5

0x9f41,	// (0x000320ad) main_radioblah_rocker_ctrl_pane_g6

0x0005,

0xfca7,	// (0x00037e13) main_radioblah_rocker_ctrl_pane_g

0x96ea,	// (0x00031856) main_cset_text2_pane_t1_copy1_ParamLimits

0xbcc7,	// (0x00033e33) cam4_image_uncrop_qvga_pane

0xbd3e,	// (0x00033eaa) vid4_image_uncrop_qcif_pane

0xc691,	// (0x000347fd) cam6_image_uncrop_qvga_pane_ParamLimits

0xc691,	// (0x000347fd) cam6_image_uncrop_qvga_pane

0xc767,	// (0x000348d3) vid6_image_uncrop_qcif_pane_ParamLimits

0xc767,	// (0x000348d3) vid6_image_uncrop_qcif_pane

0xdfe5,	// (0x00036151) bg_popup_preview_window_pane_cp03

0xcb02,	// (0x00034c6e) list_cset_text2_pane

0xcb0a,	// (0x00034c76) main_cset6_text2_pane_g1

0xcb12,	// (0x00034c7e) main_cset6_text2_pane_t1

0xd09d,	// (0x00035209) list_cset_text2_pane_t1_ParamLimits

0xd09d,	// (0x00035209) list_cset_text2_pane_t1

0xb647,	// (0x000337b3) main_radioblah_pane_ParamLimits

0x9c9f,	// (0x00031e0b) main_mobtv_info_pane_t3_ParamLimits

0x9c9f,	// (0x00031e0b) main_mobtv_info_pane_t3

0x9e07,	// (0x00031f73) main_radioblah_pane_g1

0x9e41,	// (0x00031fad) main_radioblah_info_pane_g1

0x9ec6,	// (0x00032032) main_radioblah_info_pane_t3_ParamLimits

0x9ec6,	// (0x00032032) main_radioblah_info_pane_t3

0x345f,	// (0x0002b5cb) highlight_cell_cale_month_pane_ParamLimits

0x345f,	// (0x0002b5cb) highlight_cell_cale_month_pane

0xb655,	// (0x000337c1) main_phob_fisheye_pane

0x7653,	// (0x0002f7bf) scroll_pane_cp0031_ParamLimits

0x7653,	// (0x0002f7bf) scroll_pane_cp0031

0xc879,	// (0x000349e5) wait_bar_pane_cp08_ParamLimits

0x9773,	// (0x000318df) cset_list_set_pane_copy1_ParamLimits

0xd0b7,	// (0x00035223) highlight_cell_cale_month_pane_g1

0x9f49,	// (0x000320b5) highlight_cell_cale_month_pane_t1

0xc426,	// (0x00034592) list_gen_pane_cp01

0xbf50,	// (0x000340bc) scroll_pane_01

0x9f57,	// (0x000320c3) list_single_double_fisheye_pane

0x9f60,	// (0x000320cc) list_double_fisheye_pane_g1_ParamLimits

0x9f60,	// (0x000320cc) list_double_fisheye_pane_g1

0x9f6c,	// (0x000320d8) list_double_fisheye_pane_g2_ParamLimits

0x9f6c,	// (0x000320d8) list_double_fisheye_pane_g2

0x9f80,	// (0x000320ec) list_double_fisheye_pane_g3_ParamLimits

0x9f80,	// (0x000320ec) list_double_fisheye_pane_g3

0x0004,

0xfcb4,	// (0x00037e20) list_double_fisheye_pane_g_ParamLimits

0xfcb4,	// (0x00037e20) list_double_fisheye_pane_g

0x9fa9,	// (0x00032115) list_double_fisheye_pane_t1_ParamLimits

0x9fa9,	// (0x00032115) list_double_fisheye_pane_t1

0x9fc4,	// (0x00032130) list_double_fisheye_pane_t2_ParamLimits

0x9fc4,	// (0x00032130) list_double_fisheye_pane_t2

0x0001,

0xfcbf,	// (0x00037e2b) list_double_fisheye_pane_t_ParamLimits

0xfcbf,	// (0x00037e2b) list_double_fisheye_pane_t

0xb655,	// (0x000337c1) main_call5_pane

0x9d94,	// (0x00031f00) sc_swipe_pane_ParamLimits

0x9d94,	// (0x00031f00) sc_swipe_pane

0x9ff9,	// (0x00032165) call5_image_pane_ParamLimits

0x9ff9,	// (0x00032165) call5_image_pane

0xa016,	// (0x00032182) call5_swipe_1_pane_ParamLimits

0xa016,	// (0x00032182) call5_swipe_1_pane

0xa029,	// (0x00032195) call5_swipe_2_pane_ParamLimits

0xa029,	// (0x00032195) call5_swipe_2_pane

0xa056,	// (0x000321c2) popup_call5_audio_first_window_ParamLimits

0xa056,	// (0x000321c2) popup_call5_audio_first_window

0x6cae,	// (0x0002ee1a) call5_swipe_1_pane_g1_ParamLimits

0x6cae,	// (0x0002ee1a) call5_swipe_1_pane_g1

0xd0bf,	// (0x0003522b) call5_swipe_1_pane_g2_ParamLimits

0xd0bf,	// (0x0003522b) call5_swipe_1_pane_g2

0x0001,

0xfcc4,	// (0x00037e30) call5_swipe_1_pane_g_ParamLimits

0xfcc4,	// (0x00037e30) call5_swipe_1_pane_g

0xd0cb,	// (0x00035237) call5_swipe_1_pane_t1_ParamLimits

0xd0cb,	// (0x00035237) call5_swipe_1_pane_t1

0x6cae,	// (0x0002ee1a) call5_swipe_2_pane_g1_ParamLimits

0x6cae,	// (0x0002ee1a) call5_swipe_2_pane_g1

0xd0e0,	// (0x0003524c) call5_swipe_2_pane_g2_ParamLimits

0xd0e0,	// (0x0003524c) call5_swipe_2_pane_g2

0x0001,

0xfcc9,	// (0x00037e35) call5_swipe_2_pane_g_ParamLimits

0xfcc9,	// (0x00037e35) call5_swipe_2_pane_g

0xd0ec,	// (0x00035258) call5_swipe_2_pane_t1_ParamLimits

0xd0ec,	// (0x00035258) call5_swipe_2_pane_t1

0xd101,	// (0x0003526d) sc_swipe_pane_g1_ParamLimits

0xd101,	// (0x0003526d) sc_swipe_pane_g1

0xd10e,	// (0x0003527a) sc_swipe_pane_g2_ParamLimits

0xd10e,	// (0x0003527a) sc_swipe_pane_g2

0x0001,

0xfcce,	// (0x00037e3a) sc_swipe_pane_g_ParamLimits

0xfcce,	// (0x00037e3a) sc_swipe_pane_g

0xd11a,	// (0x00035286) sc_swipe_pane_t1_ParamLimits

0xd11a,	// (0x00035286) sc_swipe_pane_t1

0xb655,	// (0x000337c1) main_cmail_launcher_pane

0xa06b,	// (0x000321d7) aid_size_cell_cmail_l_ParamLimits

0xa06b,	// (0x000321d7) aid_size_cell_cmail_l

0xa085,	// (0x000321f1) grid_cmail_l_pane_ParamLimits

0xa085,	// (0x000321f1) grid_cmail_l_pane

0xa0a0,	// (0x0003220c) cell_cmail_l_pane_ParamLimits

0xa0a0,	// (0x0003220c) cell_cmail_l_pane

0xa0c8,	// (0x00032234) cell_cmail_l_pane_g1_ParamLimits

0xa0c8,	// (0x00032234) cell_cmail_l_pane_g1

0xa0d4,	// (0x00032240) cell_cmail_l_pane_t1_ParamLimits

0xa0d4,	// (0x00032240) cell_cmail_l_pane_t1

0xd12f,	// (0x0003529b) cell_cmail_l_pane_t2_ParamLimits

0xd12f,	// (0x0003529b) cell_cmail_l_pane_t2

0x0001,

0xfcd3,	// (0x00037e3f) cell_cmail_l_pane_t_ParamLimits

0xfcd3,	// (0x00037e3f) cell_cmail_l_pane_t

0xe7da,	// (0x00036946) grid_highlight_pane_cp018_ParamLimits

0xe7da,	// (0x00036946) grid_highlight_pane_cp018

0x0711,	// (0x0002887d) main2_pane_ParamLimits

0x0711,	// (0x0002887d) main2_pane

0xe81e,	// (0x0003698a) popup_sp_fs_action_menu_bg_pane_g1

0xe826,	// (0x00036992) popup_sp_fs_action_menu_bg_pane_g2

0xe82e,	// (0x0003699a) popup_sp_fs_action_menu_bg_pane_g3

0xe836,	// (0x000369a2) popup_sp_fs_action_menu_bg_pane_g4

0xe83e,	// (0x000369aa) popup_sp_fs_action_menu_bg_pane_g5

0xe846,	// (0x000369b2) popup_sp_fs_action_menu_bg_pane_g6

0xe84e,	// (0x000369ba) popup_sp_fs_action_menu_bg_pane_g7

0xe856,	// (0x000369c2) popup_sp_fs_action_menu_bg_pane_g8

0xe85e,	// (0x000369ca) popup_sp_fs_action_menu_bg_pane_g9

0xe866,	// (0x000369d2) popup_sp_fs_action_menu_bg_pane_g10

0xe866,	// (0x000369d2) popup_sp_fs_action_menu_bg_pane_g11

0x000a,

0xf198,	// (0x00037304) popup_sp_fs_action_menu_bg_pane_g

0xe984,	// (0x00036af0) list_medium_line_x2_t3_g3_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t3_g3_g1

0xe990,	// (0x00036afc) list_medium_line_x2_t3_g3_g2_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x2_t3_g3_g2

0xe99c,	// (0x00036b08) list_medium_line_x2_t3_g3_g3_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t3_g3_g3

0x0002,

0xf248,	// (0x000373b4) list_medium_line_x2_t3_g3_g_ParamLimits

0xf248,	// (0x000373b4) list_medium_line_x2_t3_g3_g

0xe9a8,	// (0x00036b14) list_medium_line_x2_t3_g3_t1_ParamLimits

0xe9a8,	// (0x00036b14) list_medium_line_x2_t3_g3_t1

0x27ac,	// (0x0002a918) list_medium_line_x2_t3_g3_t2_ParamLimits

0x27ac,	// (0x0002a918) list_medium_line_x2_t3_g3_t2

0xe9bd,	// (0x00036b29) list_medium_line_x2_t3_g3_t3_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_x2_t3_g3_t3

0x0002,

0xf24f,	// (0x000373bb) list_medium_line_x2_t3_g3_t_ParamLimits

0xf24f,	// (0x000373bb) list_medium_line_x2_t3_g3_t

0xe984,	// (0x00036af0) list_medium_line_x2_t3_g2_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t3_g2_g1

0xe99c,	// (0x00036b08) list_medium_line_x2_t3_g2_g2_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t3_g2_g2

0x0001,

0xf256,	// (0x000373c2) list_medium_line_x2_t3_g2_g_ParamLimits

0xf256,	// (0x000373c2) list_medium_line_x2_t3_g2_g

0xe9d2,	// (0x00036b3e) list_medium_line_x2_t3_g2_t1_ParamLimits

0xe9d2,	// (0x00036b3e) list_medium_line_x2_t3_g2_t1

0xe9e8,	// (0x00036b54) list_medium_line_x2_t3_g2_t2_ParamLimits

0xe9e8,	// (0x00036b54) list_medium_line_x2_t3_g2_t2

0xe9fa,	// (0x00036b66) list_medium_line_x2_t3_g2_t3_ParamLimits

0xe9fa,	// (0x00036b66) list_medium_line_x2_t3_g2_t3

0x0002,

0xf25b,	// (0x000373c7) list_medium_line_x2_t3_g2_t_ParamLimits

0xf25b,	// (0x000373c7) list_medium_line_x2_t3_g2_t

0xe984,	// (0x00036af0) list_medium_line_x2_t4_g4_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t4_g4_g1

0xea18,	// (0x00036b84) list_medium_line_x2_t4_g4_g2_ParamLimits

0xea18,	// (0x00036b84) list_medium_line_x2_t4_g4_g2

0xe990,	// (0x00036afc) list_medium_line_x2_t4_g4_g3_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x2_t4_g4_g3

0xea24,	// (0x00036b90) list_medium_line_x2_t4_g4_g4_ParamLimits

0xea24,	// (0x00036b90) list_medium_line_x2_t4_g4_g4

0x0003,

0xf262,	// (0x000373ce) list_medium_line_x2_t4_g4_g_ParamLimits

0xf262,	// (0x000373ce) list_medium_line_x2_t4_g4_g

0x27c0,	// (0x0002a92c) list_medium_line_x2_t4_g4_t1_ParamLimits

0x27c0,	// (0x0002a92c) list_medium_line_x2_t4_g4_t1

0x27d7,	// (0x0002a943) list_medium_line_x2_t4_g4_t2_ParamLimits

0x27d7,	// (0x0002a943) list_medium_line_x2_t4_g4_t2

0x27ec,	// (0x0002a958) list_medium_line_x2_t4_g4_t3_ParamLimits

0x27ec,	// (0x0002a958) list_medium_line_x2_t4_g4_t3

0xea30,	// (0x00036b9c) list_medium_line_x2_t4_g4_t4_ParamLimits

0xea30,	// (0x00036b9c) list_medium_line_x2_t4_g4_t4

0x0003,

0xf26b,	// (0x000373d7) list_medium_line_x2_t4_g4_t_ParamLimits

0xf26b,	// (0x000373d7) list_medium_line_x2_t4_g4_t

0xe984,	// (0x00036af0) list_medium_line_x2_t2_g4_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t2_g4_g1

0xea18,	// (0x00036b84) list_medium_line_x2_t2_g4_g2_ParamLimits

0xea18,	// (0x00036b84) list_medium_line_x2_t2_g4_g2

0xe990,	// (0x00036afc) list_medium_line_x2_t2_g4_g3_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x2_t2_g4_g3

0xe99c,	// (0x00036b08) list_medium_line_x2_t2_g4_g4_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t2_g4_g4

0x0003,

0xf2d2,	// (0x0003743e) list_medium_line_x2_t2_g4_g_ParamLimits

0xf2d2,	// (0x0003743e) list_medium_line_x2_t2_g4_g

0xed1e,	// (0x00036e8a) list_medium_line_x2_t2_g4_t1_ParamLimits

0xed1e,	// (0x00036e8a) list_medium_line_x2_t2_g4_t1

0xe9bd,	// (0x00036b29) list_medium_line_x2_t2_g4_t2_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_x2_t2_g4_t2

0x0001,

0xf2db,	// (0x00037447) list_medium_line_x2_t2_g4_t_ParamLimits

0xf2db,	// (0x00037447) list_medium_line_x2_t2_g4_t

0xe984,	// (0x00036af0) list_medium_line_x2_t2_g3_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t2_g3_g1

0xe990,	// (0x00036afc) list_medium_line_x2_t2_g3_g2_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x2_t2_g3_g2

0xe99c,	// (0x00036b08) list_medium_line_x2_t2_g3_g3_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t2_g3_g3

0x0002,

0xf248,	// (0x000373b4) list_medium_line_x2_t2_g3_g_ParamLimits

0xf248,	// (0x000373b4) list_medium_line_x2_t2_g3_g

0xed33,	// (0x00036e9f) list_medium_line_x2_t2_g3_t1_ParamLimits

0xed33,	// (0x00036e9f) list_medium_line_x2_t2_g3_t1

0xe9bd,	// (0x00036b29) list_medium_line_x2_t2_g3_t2_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_x2_t2_g3_t2

0x0001,

0xf2e0,	// (0x0003744c) list_medium_line_x2_t2_g3_t_ParamLimits

0xf2e0,	// (0x0003744c) list_medium_line_x2_t2_g3_t

0x361c,	// (0x0002b788) main_sp_fs_list_pane_ParamLimits

0x361c,	// (0x0002b788) main_sp_fs_list_pane

0x3628,	// (0x0002b794) sp_fs_scroll_pane_ParamLimits

0x3628,	// (0x0002b794) sp_fs_scroll_pane

0x3634,	// (0x0002b7a0) list_medium_line_x2_t3_t1

0x3644,	// (0x0002b7b0) list_medium_line_x2_t3_t2

0xeeea,	// (0x00037056) list_medium_line_x2_t3_t3

0x0002,

0xf32b,	// (0x00037497) list_medium_line_x2_t3_t

0x3652,	// (0x0002b7be) list_medium_line_x3_t4_t1

0x3662,	// (0x0002b7ce) list_medium_line_x3_t4_t2

0xeef8,	// (0x00037064) list_medium_line_x3_t4_t3

0xeeea,	// (0x00037056) list_medium_line_x3_t4_t4

0x0003,

0xf332,	// (0x0003749e) list_medium_line_x3_t4_t

0x3670,	// (0x0002b7dc) list_medium_line_x4_t5_t1

0x3680,	// (0x0002b7ec) list_medium_line_x4_t5_t2

0xeef8,	// (0x00037064) list_medium_line_x4_t5_t3

0xef06,	// (0x00037072) list_medium_line_x4_t5_t4

0xeeea,	// (0x00037056) list_medium_line_x4_t5_t5

0x0004,

0xf33b,	// (0x000374a7) list_medium_line_x4_t5_t

0xe984,	// (0x00036af0) list_medium_line_t4_g4_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_t4_g4_g1

0xea24,	// (0x00036b90) list_medium_line_t4_g4_g2_ParamLimits

0xea24,	// (0x00036b90) list_medium_line_t4_g4_g2

0xef14,	// (0x00037080) list_medium_line_t4_g4_g3_ParamLimits

0xef14,	// (0x00037080) list_medium_line_t4_g4_g3

0xe99c,	// (0x00036b08) list_medium_line_t4_g4_g4_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_t4_g4_g4

0x0003,

0xf346,	// (0x000374b2) list_medium_line_t4_g4_g_ParamLimits

0xf346,	// (0x000374b2) list_medium_line_t4_g4_g

0xef20,	// (0x0003708c) list_medium_line_t4_g4_t1_ParamLimits

0xef20,	// (0x0003708c) list_medium_line_t4_g4_t1

0xef35,	// (0x000370a1) list_medium_line_t4_g4_t2_ParamLimits

0xef35,	// (0x000370a1) list_medium_line_t4_g4_t2

0xef4b,	// (0x000370b7) list_medium_line_t4_g4_t3_ParamLimits

0xef4b,	// (0x000370b7) list_medium_line_t4_g4_t3

0xe9bd,	// (0x00036b29) list_medium_line_t4_g4_t4_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_t4_g4_t4

0x0003,

0xf34f,	// (0x000374bb) list_medium_line_t4_g4_t_ParamLimits

0xf34f,	// (0x000374bb) list_medium_line_t4_g4_t

0x384e,	// (0x0002b9ba) chi_dic_find_pane_g1

0x0ba8,	// (0x00028d14) main_tport_pane

0xc097,	// (0x00034203) list_medium_line_plain_t1

0xc0e9,	// (0x00034255) list_medium_line_t2_g2_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_t2_g2_g1

0xc0f5,	// (0x00034261) list_medium_line_t2_g2_g2_ParamLimits

0xc0f5,	// (0x00034261) list_medium_line_t2_g2_g2

0x0001,

0xfa0b,	// (0x00037b77) list_medium_line_t2_g2_g_ParamLimits

0xfa0b,	// (0x00037b77) list_medium_line_t2_g2_g

0x8cb7,	// (0x00030e23) list_medium_line_t2_g2_t1_ParamLimits

0x8cb7,	// (0x00030e23) list_medium_line_t2_g2_t1

0x8cce,	// (0x00030e3a) list_medium_line_t2_g2_t2_ParamLimits

0x8cce,	// (0x00030e3a) list_medium_line_t2_g2_t2

0x0001,

0xfa10,	// (0x00037b7c) list_medium_line_t2_g2_t_ParamLimits

0xfa10,	// (0x00037b7c) list_medium_line_t2_g2_t

0xc4a9,	// (0x00034615) aid_sp_fs_list_icon_a_sm

0xc4b1,	// (0x0003461d) aid_sp_fs_list_icon_d

0xc4b9,	// (0x00034625) aid_sp_fs_text_primary

0xc4c2,	// (0x0003462e) aid_sp_fs_text_secondary

0xc4cb,	// (0x00034637) list_medium_line

0xc4cb,	// (0x00034637) list_medium_line_g2

0xc4cb,	// (0x00034637) list_medium_line_g3

0xc4cb,	// (0x00034637) list_medium_line_plain

0xc4cb,	// (0x00034637) list_medium_line_plain_t2

0xc4cb,	// (0x00034637) list_medium_line_plain_t3

0xc4cb,	// (0x00034637) list_medium_line_right_icon

0xc4cb,	// (0x00034637) list_medium_line_right_iconx2

0xc4cb,	// (0x00034637) list_medium_line_t2

0xc4cb,	// (0x00034637) list_medium_line_t2_g2

0xc4cb,	// (0x00034637) list_medium_line_t2_g3

0xc4cb,	// (0x00034637) list_medium_line_t2_right_icon

0xc4cb,	// (0x00034637) list_medium_line_t2_right_iconx2

0xc4cb,	// (0x00034637) list_medium_line_t3

0xc4cb,	// (0x00034637) list_medium_line_t3_g2

0xc4cb,	// (0x00034637) list_medium_line_t3_g3

0xc4cb,	// (0x00034637) list_medium_line_t3_right_iconx2

0xc4d4,	// (0x00034640) list_medium_line_t4_g4

0xc4dd,	// (0x00034649) list_medium_line_x2

0xc4dd,	// (0x00034649) list_medium_line_x2_t2_g2

0xc4dd,	// (0x00034649) list_medium_line_x2_t2_g3

0xc4dd,	// (0x00034649) list_medium_line_x2_t2_g4

0xc4dd,	// (0x00034649) list_medium_line_x2_t3

0xc4dd,	// (0x00034649) list_medium_line_x2_t3_g2

0xc4dd,	// (0x00034649) list_medium_line_x2_t3_g3

0xc4dd,	// (0x00034649) list_medium_line_x2_t3_g4

0xc4dd,	// (0x00034649) list_medium_line_x2_t4_g2

0xc4dd,	// (0x00034649) list_medium_line_x2_t4_g4

0xc4e6,	// (0x00034652) list_medium_line_x3

0xc4e6,	// (0x00034652) list_medium_line_x3_t4

0xc4e6,	// (0x00034652) list_medium_line_x3_t4_g4

0xc4d4,	// (0x00034640) list_medium_line_x4_t4

0xc4d4,	// (0x00034640) list_medium_line_x4_t4_g7

0xc4d4,	// (0x00034640) list_medium_line_x4_t5

0xc4ef,	// (0x0003465b) list_single_fs_dyc_pane_ParamLimits

0xc4ef,	// (0x0003465b) list_single_fs_dyc_pane

0xe984,	// (0x00036af0) list_medium_line_x4_t4_g7_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x4_t4_g7_g1

0xca0d,	// (0x00034b79) list_medium_line_x4_t4_g7_g2_ParamLimits

0xca0d,	// (0x00034b79) list_medium_line_x4_t4_g7_g2

0xca19,	// (0x00034b85) list_medium_line_x4_t4_g7_g3_ParamLimits

0xca19,	// (0x00034b85) list_medium_line_x4_t4_g7_g3

0xca28,	// (0x00034b94) list_medium_line_x4_t4_g7_g4_ParamLimits

0xca28,	// (0x00034b94) list_medium_line_x4_t4_g7_g4

0xca34,	// (0x00034ba0) list_medium_line_x4_t4_g7_g5_ParamLimits

0xca34,	// (0x00034ba0) list_medium_line_x4_t4_g7_g5

0xca43,	// (0x00034baf) list_medium_line_x4_t4_g7_g6_ParamLimits

0xca43,	// (0x00034baf) list_medium_line_x4_t4_g7_g6

0xca52,	// (0x00034bbe) list_medium_line_x4_t4_g7_g7_ParamLimits

0xca52,	// (0x00034bbe) list_medium_line_x4_t4_g7_g7

0x0006,

0xfbdb,	// (0x00037d47) list_medium_line_x4_t4_g7_g_ParamLimits

0xfbdb,	// (0x00037d47) list_medium_line_x4_t4_g7_g

0xca5e,	// (0x00034bca) list_medium_line_x4_t4_g7_t1_ParamLimits

0xca5e,	// (0x00034bca) list_medium_line_x4_t4_g7_t1

0xca73,	// (0x00034bdf) list_medium_line_x4_t4_g7_t2_ParamLimits

0xca73,	// (0x00034bdf) list_medium_line_x4_t4_g7_t2

0xca88,	// (0x00034bf4) list_medium_line_x4_t4_g7_t3_ParamLimits

0xca88,	// (0x00034bf4) list_medium_line_x4_t4_g7_t3

0xca9d,	// (0x00034c09) list_medium_line_x4_t4_g7_t4_ParamLimits

0xca9d,	// (0x00034c09) list_medium_line_x4_t4_g7_t4

0xcaaf,	// (0x00034c1b) list_medium_line_x4_t4_g7_t5_ParamLimits

0xcaaf,	// (0x00034c1b) list_medium_line_x4_t4_g7_t5

0x0004,

0xfbea,	// (0x00037d56) list_medium_line_x4_t4_g7_t_ParamLimits

0xfbea,	// (0x00037d56) list_medium_line_x4_t4_g7_t

0xcac1,	// (0x00034c2d) list_single_dyc_row_pane_ParamLimits

0xcac1,	// (0x00034c2d) list_single_dyc_row_pane

0x9fe6,	// (0x00032152) call5_gesture_pane_ParamLimits

0x9fe6,	// (0x00032152) call5_gesture_pane

0xa03c,	// (0x000321a8) call5_windows_pane_ParamLimits

0xa03c,	// (0x000321a8) call5_windows_pane

0xa0ea,	// (0x00032256) call5_swipe_1_pane_cp_ParamLimits

0xa0ea,	// (0x00032256) call5_swipe_1_pane_cp

0xa0f6,	// (0x00032262) call5_swipe_2_pane_cp_ParamLimits

0xa0f6,	// (0x00032262) call5_swipe_2_pane_cp

0x3ce8,	// (0x0002be54) call5_image_pane_cp

0xa102,	// (0x0003226e) popup_call5_audio_first_window_cp_ParamLimits

0xa102,	// (0x0003226e) popup_call5_audio_first_window_cp

0xd101,	// (0x0003526d) call5_swipe_1_pane_g1_cp_ParamLimits

0xd101,	// (0x0003526d) call5_swipe_1_pane_g1_cp

0xd141,	// (0x000352ad) call5_swipe_1_pane_g2_cp

0xd11a,	// (0x00035286) call5_swipe_1_pane_t1_cp_ParamLimits

0xd11a,	// (0x00035286) call5_swipe_1_pane_t1_cp

0xd101,	// (0x0003526d) call5_swipe_2_pane_g1_cp_ParamLimits

0xd101,	// (0x0003526d) call5_swipe_2_pane_g1_cp

0xd149,	// (0x000352b5) call5_swipe_2_pane_g2_cp

0xd151,	// (0x000352bd) call5_swipe_2_pane_t1_cp_ParamLimits

0xd151,	// (0x000352bd) call5_swipe_2_pane_t1_cp

0xe7da,	// (0x00036946) main_sp_fs_email_pane

0xd166,	// (0x000352d2) main_sp_fs_listscroll_pane_te

0xd16f,	// (0x000352db) popup_sp_fs_action_menu_pane_ParamLimits

0xd16f,	// (0x000352db) popup_sp_fs_action_menu_pane

0x69d0,	// (0x0002eb3c) bg_sp_fs_ctrlbar_pane_g1

0xd1b5,	// (0x00035321) bg_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1be,	// (0x0003532a) bg_sp_fs_ctrlbar_ddmenu_pane_g2

0xd1c7,	// (0x00035333) bg_sp_fs_ctrlbar_ddmenu_pane_g3

0x69d0,	// (0x0002eb3c) bg_sp_fs_ctrlbar_ddmenu_pane_g4

0x0003,

0xfcd8,	// (0x00037e44) bg_sp_fs_ctrlbar_ddmenu_pane_g

0x66d9,	// (0x0002e845) bg_sp_fs_ctrlbar_ddmenu_pane_ParamLimits

0x66d9,	// (0x0002e845) bg_sp_fs_ctrlbar_ddmenu_pane

0xd1d0,	// (0x0003533c) main_sp_fs_ctrlbar_ddmenu_pane_g1_ParamLimits

0xd1d0,	// (0x0003533c) main_sp_fs_ctrlbar_ddmenu_pane_g1

0xd1dc,	// (0x00035348) main_sp_fs_ctrlbar_ddmenu_pane_g2_ParamLimits

0xd1dc,	// (0x00035348) main_sp_fs_ctrlbar_ddmenu_pane_g2

0x0001,

0xfce1,	// (0x00037e4d) main_sp_fs_ctrlbar_ddmenu_pane_g_ParamLimits

0xfce1,	// (0x00037e4d) main_sp_fs_ctrlbar_ddmenu_pane_g

0xd1e8,	// (0x00035354) main_sp_fs_ctrlbar_ddmenu_pane_t1_ParamLimits

0xd1e8,	// (0x00035354) main_sp_fs_ctrlbar_ddmenu_pane_t1

0xd202,	// (0x0003536e) list_medium_line_t2_right_icon_g1

0xa110,	// (0x0003227c) list_medium_line_t2_right_icon_t1

0xa120,	// (0x0003228c) list_medium_line_t2_right_icon_t2

0x0001,

0xfce6,	// (0x00037e52) list_medium_line_t2_right_icon_t

0x5fd0,	// (0x0002e13c) bg_sp_fs_ctrlbar_pane_ParamLimits

0x5fd0,	// (0x0002e13c) bg_sp_fs_ctrlbar_pane

0xa17f,	// (0x000322eb) main_sp_fs_ctrlbar_button_pane_cp01

0xa189,	// (0x000322f5) main_sp_fs_ctrlbar_ddmenu_pane

0xd244,	// (0x000353b0) main_sp_fs_ctrlbar_pane_g1

0xd250,	// (0x000353bc) main_sp_fs_ctrlbar_pane_g2

0x0001,

0xfceb,	// (0x00037e57) main_sp_fs_ctrlbar_pane_g

0xd25c,	// (0x000353c8) main_sp_fs_ctrlbar_pane_t1

0xa193,	// (0x000322ff) main_sp_fs_ctrlbar_pane

0xa1b7,	// (0x00032323) main_sp_fs_listscroll_pane_te_cp01

0xa1d7,	// (0x00032343) popup_sp_fs_action_menu_pane_cp01_ParamLimits

0xa1d7,	// (0x00032343) popup_sp_fs_action_menu_pane_cp01

0xe7da,	// (0x00036946) bg_sp_fs_highlight_list_pane_cp01_ParamLimits

0xe7da,	// (0x00036946) bg_sp_fs_highlight_list_pane_cp01

0xd281,	// (0x000353ed) sp_fs_action_menu_list_gene_pane_g1_ParamLimits

0xd281,	// (0x000353ed) sp_fs_action_menu_list_gene_pane_g1

0xd290,	// (0x000353fc) sp_fs_action_menu_list_gene_pane_g2_ParamLimits

0xd290,	// (0x000353fc) sp_fs_action_menu_list_gene_pane_g2

0x0001,

0xfcf5,	// (0x00037e61) sp_fs_action_menu_list_gene_pane_g_ParamLimits

0xfcf5,	// (0x00037e61) sp_fs_action_menu_list_gene_pane_g

0xd29d,	// (0x00035409) sp_fs_action_menu_list_gene_pane_t1_ParamLimits

0xd29d,	// (0x00035409) sp_fs_action_menu_list_gene_pane_t1

0xd2b5,	// (0x00035421) sp_fs_action_menu_list_gene_pane_ParamLimits

0xd2b5,	// (0x00035421) sp_fs_action_menu_list_gene_pane

0xd2d8,	// (0x00035444) popup_sp_fs_action_menu_bg_pane_ParamLimits

0xd2d8,	// (0x00035444) popup_sp_fs_action_menu_bg_pane

0xd2e6,	// (0x00035452) sp_fs_action_menu_list_pane_ParamLimits

0xd2e6,	// (0x00035452) sp_fs_action_menu_list_pane

0xd30a,	// (0x00035476) sp_fs_scroll_pane_cp01_ParamLimits

0xd30a,	// (0x00035476) sp_fs_scroll_pane_cp01

0xa20d,	// (0x00032379) list_medium_line_plain_t2_t1

0xa21d,	// (0x00032389) list_medium_line_plain_t2_t2

0x0001,

0xfcfa,	// (0x00037e66) list_medium_line_plain_t2_t

0xa22d,	// (0x00032399) list_medium_line_plain_t3_t1

0xa23d,	// (0x000323a9) list_medium_line_plain_t3_t2

0xa24b,	// (0x000323b7) list_medium_line_plain_t3_t3

0x0002,

0xfcff,	// (0x00037e6b) list_medium_line_plain_t3_t

0xe984,	// (0x00036af0) list_medium_line_x2_t2_g2_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t2_g2_g1

0xe99c,	// (0x00036b08) list_medium_line_x2_t2_g2_g2_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t2_g2_g2

0x0001,

0xf256,	// (0x000373c2) list_medium_line_x2_t2_g2_g_ParamLimits

0xf256,	// (0x000373c2) list_medium_line_x2_t2_g2_g

0xef20,	// (0x0003708c) list_medium_line_x2_t2_g2_t1_ParamLimits

0xef20,	// (0x0003708c) list_medium_line_x2_t2_g2_t1

0xe9bd,	// (0x00036b29) list_medium_line_x2_t2_g2_t2_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_x2_t2_g2_t2

0x0001,

0x0428,	// (0x00028594) list_medium_line_x2_t2_g2_t_ParamLimits

0x0428,	// (0x00028594) list_medium_line_x2_t2_g2_t

0xe984,	// (0x00036af0) list_medium_line_x2_t4_g2_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t4_g2_g1

0xe99c,	// (0x00036b08) list_medium_line_x2_t4_g2_g2_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t4_g2_g2

0x0001,

0xf256,	// (0x000373c2) list_medium_line_x2_t4_g2_g_ParamLimits

0xf256,	// (0x000373c2) list_medium_line_x2_t4_g2_g

0xa259,	// (0x000323c5) list_medium_line_x2_t4_g2_t1_ParamLimits

0xa259,	// (0x000323c5) list_medium_line_x2_t4_g2_t1

0xa273,	// (0x000323df) list_medium_line_x2_t4_g2_t2_ParamLimits

0xa273,	// (0x000323df) list_medium_line_x2_t4_g2_t2

0xa289,	// (0x000323f5) list_medium_line_x2_t4_g2_t3_ParamLimits

0xa289,	// (0x000323f5) list_medium_line_x2_t4_g2_t3

0xe9bd,	// (0x00036b29) list_medium_line_x2_t4_g2_t4_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_x2_t4_g2_t4

0x0003,

0xfd06,	// (0x00037e72) list_medium_line_x2_t4_g2_t_ParamLimits

0xfd06,	// (0x00037e72) list_medium_line_x2_t4_g2_t

0xd330,	// (0x0003549c) list_medium_line_t3_right_iconx2_g1

0xd202,	// (0x0003536e) list_medium_line_t3_right_iconx2_g2

0xa29e,	// (0x0003240a) list_medium_line_t3_right_iconx2_g3

0x0002,

0xfd0f,	// (0x00037e7b) list_medium_line_t3_right_iconx2_g

0xa2a8,	// (0x00032414) list_medium_line_t3_right_iconx2_t1

0xa2b8,	// (0x00032424) list_medium_line_t3_right_iconx2_t2

0x0001,

0xfd16,	// (0x00037e82) list_medium_line_t3_right_iconx2_t

0xe984,	// (0x00036af0) list_medium_line_x3_t4_g4_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x3_t4_g4_g1

0xe990,	// (0x00036afc) list_medium_line_x3_t4_g4_g2_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x3_t4_g4_g2

0xea24,	// (0x00036b90) list_medium_line_x3_t4_g4_g3_ParamLimits

0xea24,	// (0x00036b90) list_medium_line_x3_t4_g4_g3

0xd338,	// (0x000354a4) list_medium_line_x3_t4_g4_g4_ParamLimits

0xd338,	// (0x000354a4) list_medium_line_x3_t4_g4_g4

0x0003,

0xfd1b,	// (0x00037e87) list_medium_line_x3_t4_g4_g_ParamLimits

0xfd1b,	// (0x00037e87) list_medium_line_x3_t4_g4_g

0xa2c6,	// (0x00032432) list_medium_line_x3_t4_g4_t1_ParamLimits

0xa2c6,	// (0x00032432) list_medium_line_x3_t4_g4_t1

0xa2dd,	// (0x00032449) list_medium_line_x3_t4_g4_t2_ParamLimits

0xa2dd,	// (0x00032449) list_medium_line_x3_t4_g4_t2

0xd344,	// (0x000354b0) list_medium_line_x3_t4_g4_t3_ParamLimits

0xd344,	// (0x000354b0) list_medium_line_x3_t4_g4_t3

0xd359,	// (0x000354c5) list_medium_line_x3_t4_g4_t4_ParamLimits

0xd359,	// (0x000354c5) list_medium_line_x3_t4_g4_t4

0x0003,

0xfd24,	// (0x00037e90) list_medium_line_x3_t4_g4_t_ParamLimits

0xfd24,	// (0x00037e90) list_medium_line_x3_t4_g4_t

0xa2f8,	// (0x00032464) list_single_dyc_row_text_pane_t1_ParamLimits

0xa2f8,	// (0x00032464) list_single_dyc_row_text_pane_t1

0xa341,	// (0x000324ad) list_single_dyc_row_text_pane_t2_ParamLimits

0xa341,	// (0x000324ad) list_single_dyc_row_text_pane_t2

0xd376,	// (0x000354e2) list_single_dyc_row_text_pane_t3_ParamLimits

0xd376,	// (0x000354e2) list_single_dyc_row_text_pane_t3

0x0002,

0xfd2d,	// (0x00037e99) list_single_dyc_row_text_pane_t_ParamLimits

0xfd2d,	// (0x00037e99) list_single_dyc_row_text_pane_t

0xd388,	// (0x000354f4) list_single_dyc_row_pane_g1_ParamLimits

0xd388,	// (0x000354f4) list_single_dyc_row_pane_g1

0xd394,	// (0x00035500) list_single_dyc_row_pane_g2_ParamLimits

0xd394,	// (0x00035500) list_single_dyc_row_pane_g2

0xd3a0,	// (0x0003550c) list_single_dyc_row_pane_g3_ParamLimits

0xd3a0,	// (0x0003550c) list_single_dyc_row_pane_g3

0xd3ac,	// (0x00035518) list_single_dyc_row_pane_g4_ParamLimits

0xd3ac,	// (0x00035518) list_single_dyc_row_pane_g4

0x0003,

0xfd34,	// (0x00037ea0) list_single_dyc_row_pane_g_ParamLimits

0xfd34,	// (0x00037ea0) list_single_dyc_row_pane_g

0xd3b8,	// (0x00035524) list_single_dyc_row_text_pane_ParamLimits

0xd3b8,	// (0x00035524) list_single_dyc_row_text_pane

0xdfe5,	// (0x00036151) bg_sp_fs_scroll_pane

0xd3d7,	// (0x00035543) thumb_sp_fs_scroll_pane

0xc0e9,	// (0x00034255) list_medium_line_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_g1

0xd3e0,	// (0x0003554c) list_medium_line_t1_ParamLimits

0xd3e0,	// (0x0003554c) list_medium_line_t1

0xe984,	// (0x00036af0) list_medium_line_x2_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_g1

0xe990,	// (0x00036afc) list_medium_line_x2_g2_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x2_g2

0x0001,

0x0464,	// (0x000285d0) list_medium_line_x2_g_ParamLimits

0x0464,	// (0x000285d0) list_medium_line_x2_g

0xd3f5,	// (0x00035561) list_medium_line_x2_t1_ParamLimits

0xd3f5,	// (0x00035561) list_medium_line_x2_t1

0xe984,	// (0x00036af0) list_medium_line_x3_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x3_g1

0xe990,	// (0x00036afc) list_medium_line_x3_g2_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x3_g2

0x0001,

0x0464,	// (0x000285d0) list_medium_line_x3_g_ParamLimits

0x0464,	// (0x000285d0) list_medium_line_x3_g

0xd3f5,	// (0x00035561) list_medium_line_x3_t1_ParamLimits

0xd3f5,	// (0x00035561) list_medium_line_x3_t1

0xd40b,	// (0x00035577) thumb_sp_fs_scroll_pane_g1

0xd414,	// (0x00035580) thumb_sp_fs_scroll_pane_g2

0xd41d,	// (0x00035589) thumb_sp_fs_scroll_pane_g3

0x0002,

0xfd3d,	// (0x00037ea9) thumb_sp_fs_scroll_pane_g

0xd40b,	// (0x00035577) bg_sp_fs_scroll_pane_g1

0xd414,	// (0x00035580) bg_sp_fs_scroll_pane_g2

0xd41d,	// (0x00035589) bg_sp_fs_scroll_pane_g3

0x0002,

0xfd3d,	// (0x00037ea9) bg_sp_fs_scroll_pane_g

0xe984,	// (0x00036af0) list_medium_line_x2_t3_g4_g1_ParamLimits

0xe984,	// (0x00036af0) list_medium_line_x2_t3_g4_g1

0xea18,	// (0x00036b84) list_medium_line_x2_t3_g4_g2_ParamLimits

0xea18,	// (0x00036b84) list_medium_line_x2_t3_g4_g2

0xe990,	// (0x00036afc) list_medium_line_x2_t3_g4_g3_ParamLimits

0xe990,	// (0x00036afc) list_medium_line_x2_t3_g4_g3

0xe99c,	// (0x00036b08) list_medium_line_x2_t3_g4_g4_ParamLimits

0xe99c,	// (0x00036b08) list_medium_line_x2_t3_g4_g4

0x0003,

0xf2d2,	// (0x0003743e) list_medium_line_x2_t3_g4_g_ParamLimits

0xf2d2,	// (0x0003743e) list_medium_line_x2_t3_g4_g

0xa39b,	// (0x00032507) list_medium_line_x2_t3_g4_t1_ParamLimits

0xa39b,	// (0x00032507) list_medium_line_x2_t3_g4_t1

0xa3b1,	// (0x0003251d) list_medium_line_x2_t3_g4_t2_ParamLimits

0xa3b1,	// (0x0003251d) list_medium_line_x2_t3_g4_t2

0xe9bd,	// (0x00036b29) list_medium_line_x2_t3_g4_t3_ParamLimits

0xe9bd,	// (0x00036b29) list_medium_line_x2_t3_g4_t3

0x0002,

0xfd44,	// (0x00037eb0) list_medium_line_x2_t3_g4_t_ParamLimits

0xfd44,	// (0x00037eb0) list_medium_line_x2_t3_g4_t

0xc0e9,	// (0x00034255) list_medium_line_g2_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_g2_g1

0xc0f5,	// (0x00034261) list_medium_line_g2_g2_ParamLimits

0xc0f5,	// (0x00034261) list_medium_line_g2_g2

0x0001,

0xfa0b,	// (0x00037b77) list_medium_line_g2_g_ParamLimits

0xfa0b,	// (0x00037b77) list_medium_line_g2_g

0xd426,	// (0x00035592) list_medium_line_g2_t1_ParamLimits

0xd426,	// (0x00035592) list_medium_line_g2_t1

0xc0e9,	// (0x00034255) list_medium_line_t3_g2_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_t3_g2_g1

0xc0f5,	// (0x00034261) list_medium_line_t3_g2_g2_ParamLimits

0xc0f5,	// (0x00034261) list_medium_line_t3_g2_g2

0x0001,

0xfa0b,	// (0x00037b77) list_medium_line_t3_g2_g_ParamLimits

0xfa0b,	// (0x00037b77) list_medium_line_t3_g2_g

0xa3ca,	// (0x00032536) list_medium_line_t3_g2_t1_ParamLimits

0xa3ca,	// (0x00032536) list_medium_line_t3_g2_t1

0xa3e4,	// (0x00032550) list_medium_line_t3_g2_t2_ParamLimits

0xa3e4,	// (0x00032550) list_medium_line_t3_g2_t2

0xa3fa,	// (0x00032566) list_medium_line_t3_g2_t3_ParamLimits

0xa3fa,	// (0x00032566) list_medium_line_t3_g2_t3

0x0002,

0xfd4b,	// (0x00037eb7) list_medium_line_t3_g2_t_ParamLimits

0xfd4b,	// (0x00037eb7) list_medium_line_t3_g2_t

0xd202,	// (0x0003536e) list_medium_line_right_icon_g1

0xd43b,	// (0x000355a7) list_medium_line_right_icon_t1

0xc0e9,	// (0x00034255) list_medium_line_t2_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_t2_g1

0xa411,	// (0x0003257d) list_medium_line_t2_t1_ParamLimits

0xa411,	// (0x0003257d) list_medium_line_t2_t1

0xa42b,	// (0x00032597) list_medium_line_t2_t2_ParamLimits

0xa42b,	// (0x00032597) list_medium_line_t2_t2

0x0001,

0xfd52,	// (0x00037ebe) list_medium_line_t2_t_ParamLimits

0xfd52,	// (0x00037ebe) list_medium_line_t2_t

0xc0e9,	// (0x00034255) list_medium_line_t3_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_t3_g1

0xa444,	// (0x000325b0) list_medium_line_t3_t1_ParamLimits

0xa444,	// (0x000325b0) list_medium_line_t3_t1

0xa45e,	// (0x000325ca) list_medium_line_t3_t2_ParamLimits

0xa45e,	// (0x000325ca) list_medium_line_t3_t2

0xa474,	// (0x000325e0) list_medium_line_t3_t3_ParamLimits

0xa474,	// (0x000325e0) list_medium_line_t3_t3

0x0002,

0xfd57,	// (0x00037ec3) list_medium_line_t3_t_ParamLimits

0xfd57,	// (0x00037ec3) list_medium_line_t3_t

0xc0e9,	// (0x00034255) list_medium_line_g3_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_g3_g1

0xd449,	// (0x000355b5) list_medium_line_g3_g2_ParamLimits

0xd449,	// (0x000355b5) list_medium_line_g3_g2

0xc0f5,	// (0x00034261) list_medium_line_g3_g3_ParamLimits

0xc0f5,	// (0x00034261) list_medium_line_g3_g3

0x0002,

0xfd5e,	// (0x00037eca) list_medium_line_g3_g_ParamLimits

0xfd5e,	// (0x00037eca) list_medium_line_g3_g

0xd455,	// (0x000355c1) list_medium_line_g3_t1_ParamLimits

0xd455,	// (0x000355c1) list_medium_line_g3_t1

0xc0e9,	// (0x00034255) list_medium_line_t2_g3_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_t2_g3_g1

0xd449,	// (0x000355b5) list_medium_line_t2_g3_g2_ParamLimits

0xd449,	// (0x000355b5) list_medium_line_t2_g3_g2

0xc0f5,	// (0x00034261) list_medium_line_t2_g3_g3_ParamLimits

0xc0f5,	// (0x00034261) list_medium_line_t2_g3_g3

0x0002,

0xfd5e,	// (0x00037eca) list_medium_line_t2_g3_g_ParamLimits

0xfd5e,	// (0x00037eca) list_medium_line_t2_g3_g

0xa489,	// (0x000325f5) list_medium_line_t2_g3_t1_ParamLimits

0xa489,	// (0x000325f5) list_medium_line_t2_g3_t1

0xa4a0,	// (0x0003260c) list_medium_line_t2_g3_t2_ParamLimits

0xa4a0,	// (0x0003260c) list_medium_line_t2_g3_t2

0x0001,

0xfd65,	// (0x00037ed1) list_medium_line_t2_g3_t_ParamLimits

0xfd65,	// (0x00037ed1) list_medium_line_t2_g3_t

0xc0e9,	// (0x00034255) list_medium_line_t3_g3_g1_ParamLimits

0xc0e9,	// (0x00034255) list_medium_line_t3_g3_g1

0xd449,	// (0x000355b5) list_medium_line_t3_g3_g2_ParamLimits

0xd449,	// (0x000355b5) list_medium_line_t3_g3_g2

0xc0f5,	// (0x00034261) list_medium_line_t3_g3_g3_ParamLimits

0xc0f5,	// (0x00034261) list_medium_line_t3_g3_g3

0x0002,

0xfd5e,	// (0x00037eca) list_medium_line_t3_g3_g_ParamLimits

0xfd5e,	// (0x00037eca) list_medium_line_t3_g3_g

0xa4b9,	// (0x00032625) list_medium_line_t3_g3_t1_ParamLimits

0xa4b9,	// (0x00032625) list_medium_line_t3_g3_t1

0xa4d2,	// (0x0003263e) list_medium_line_t3_g3_t2_ParamLimits

0xa4d2,	// (0x0003263e) list_medium_line_t3_g3_t2

0xa4e8,	// (0x00032654) list_medium_line_t3_g3_t3_ParamLimits

0xa4e8,	// (0x00032654) list_medium_line_t3_g3_t3

0x0002,

0xfd6a,	// (0x00037ed6) list_medium_line_t3_g3_t_ParamLimits

0xfd6a,	// (0x00037ed6) list_medium_line_t3_g3_t

0xd330,	// (0x0003549c) list_medium_line_right_iconx2_g1

0xd202,	// (0x0003536e) list_medium_line_right_iconx2_g2

0x0001,

0xfd71,	// (0x00037edd) list_medium_line_right_iconx2_g

0xd46a,	// (0x000355d6) list_medium_line_right_iconx2_t1

0xd330,	// (0x0003549c) list_medium_line_t2_right_iconx2_g1

0xd202,	// (0x0003536e) list_medium_line_t2_right_iconx2_g2

0x0001,

0xfd71,	// (0x00037edd) list_medium_line_t2_right_iconx2_g

0xa502,	// (0x0003266e) list_medium_line_t2_right_iconx2_t1

0xa512,	// (0x0003267e) list_medium_line_t2_right_iconx2_t2

0x0001,

0xfd76,	// (0x00037ee2) list_medium_line_t2_right_iconx2_t

0xd478,	// (0x000355e4) list_medium_line_x4_t4_t1

0xa524,	// (0x00032690) list_medium_line_x4_t4_t2

0xa534,	// (0x000326a0) list_medium_line_x4_t4_t3

0xa544,	// (0x000326b0) list_medium_line_x4_t4_t4

0x0003,

0xfd7b,	// (0x00037ee7) list_medium_line_x4_t4_t

0xa597,	// (0x00032703) tport_appsw_pane_ParamLimits

0xa597,	// (0x00032703) tport_appsw_pane

0xa5aa,	// (0x00032716) tport_contact_pane_ParamLimits

0xa5aa,	// (0x00032716) tport_contact_pane

0xa5c3,	// (0x0003272f) tport_listscroll_pane_ParamLimits

0xa5c3,	// (0x0003272f) tport_listscroll_pane

0xa5de,	// (0x0003274a) cell_tport_appsw_pane_ParamLimits

0xa5de,	// (0x0003274a) cell_tport_appsw_pane

0xbdf5,	// (0x00033f61) tport_appsw_pane_g1_ParamLimits

0xbdf5,	// (0x00033f61) tport_appsw_pane_g1

0xd486,	// (0x000355f2) tport_contact_pane_g1

0xd48f,	// (0x000355fb) tport_contact_pane_t1

0xd49d,	// (0x00035609) tport_contact_pane_t2

0x0001,

0xfd84,	// (0x00037ef0) tport_contact_pane_t

0xd4ab,	// (0x00035617) list_tport_pane

0xd4b4,	// (0x00035620) scroll_pane_cp_030

0xd4c5,	// (0x00035631) cell_tport_appsw_pane_g1

0xd4d5,	// (0x00035641) cell_tport_appsw_pane_t1

0xdfe5,	// (0x00036151) grid_highlight_pane_cp019

0xa622,	// (0x0003278e) list_tport_double_graphic_pane_ParamLimits

0xa622,	// (0x0003278e) list_tport_double_graphic_pane

0xe7da,	// (0x00036946) list_highlight_pane_cp023_ParamLimits

0xe7da,	// (0x00036946) list_highlight_pane_cp023

0xa62f,	// (0x0003279b) list_tport_double_graphic_pane_g1_ParamLimits

0xa62f,	// (0x0003279b) list_tport_double_graphic_pane_g1

0xa63c,	// (0x000327a8) list_tport_double_graphic_pane_t1_ParamLimits

0xa63c,	// (0x000327a8) list_tport_double_graphic_pane_t1

0xa651,	// (0x000327bd) list_tport_double_graphic_pane_t2_ParamLimits

0xa651,	// (0x000327bd) list_tport_double_graphic_pane_t2

0x0001,

0xfd90,	// (0x00037efc) list_tport_double_graphic_pane_t_ParamLimits

0xfd90,	// (0x00037efc) list_tport_double_graphic_pane_t

0xdfe5,	// (0x00036151) main_cale_note_pane

0x1ab7,	// (0x00029c23) cell_vitu2_function_top_wide_pane_cp01_ParamLimits

0x1ab7,	// (0x00029c23) cell_vitu2_function_top_wide_pane_cp01

0x9cb3,	// (0x00031e1f) wait_bar_pane_cp05_ParamLimits

0xdfe5,	// (0x00036151) listscroll_cmail_pane

0xd4eb,	// (0x00035657) list_cmail_pane

0xa66d,	// (0x000327d9) list_cmail_body_pane

0xa685,	// (0x000327f1) list_single_cmail_header_caption_pane

0xa6a2,	// (0x0003280e) list_single_cmail_header_detail_pane_ParamLimits

0xa6a2,	// (0x0003280e) list_single_cmail_header_detail_pane

0xa6d4,	// (0x00032840) list_single_cmail_header_caption_pane_t1

0xa6e4,	// (0x00032850) list_single_cmail_header_detail_pane_g1_ParamLimits

0xa6e4,	// (0x00032850) list_single_cmail_header_detail_pane_g1

0xd50b,	// (0x00035677) list_single_cmail_header_detail_pane_g2_ParamLimits

0xd50b,	// (0x00035677) list_single_cmail_header_detail_pane_g2

0x0002,

0xfd95,	// (0x00037f01) list_single_cmail_header_detail_pane_g_ParamLimits

0xfd95,	// (0x00037f01) list_single_cmail_header_detail_pane_g

0xd524,	// (0x00035690) list_single_cmail_header_detail_pane_t1_ParamLimits

0xd524,	// (0x00035690) list_single_cmail_header_detail_pane_t1

0xd562,	// (0x000356ce) list_single_cmail_header_editor_pane_bg_ParamLimits

0xd562,	// (0x000356ce) list_single_cmail_header_editor_pane_bg

0xcd8f,	// (0x00034efb) list_cmail_body_pane_g1

0xd574,	// (0x000356e0) list_cmail_body_pane_t1

0xbe32,	// (0x00033f9e) list_single_cmail_header_editor_pane_bg_g1

0xec3d,	// (0x00036da9) list_single_cmail_header_editor_pane_bg_g1_copy1

0xbe42,	// (0x00033fae) list_single_cmail_header_editor_pane_bg_g1_copy2

0xbe3a,	// (0x00033fa6) list_single_cmail_header_editor_pane_bg_g1_copy3

0xc0c1,	// (0x0003422d) list_single_cmail_header_editor_pane_bg_g1_copy4

0xbe62,	// (0x00033fce) list_single_cmail_header_editor_pane_bg_g1_copy4_copy1

0xbe52,	// (0x00033fbe) list_single_cmail_header_editor_pane_bg_g1_copy4_copy2

0xbe5a,	// (0x00033fc6) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3

0xec1d,	// (0x00036d89) list_single_cmail_header_editor_pane_bg_g1_copy4_copy3_copy1

0xa722,	// (0x0003288e) calenote_gesture_pane_ParamLimits

0xa722,	// (0x0003288e) calenote_gesture_pane

0xa742,	// (0x000328ae) calenote_window_pane_ParamLimits

0xa742,	// (0x000328ae) calenote_window_pane

0xd582,	// (0x000356ee) popup_note_window_cp01

0xa75e,	// (0x000328ca) calenote_swipe_1_pane_ParamLimits

0xa75e,	// (0x000328ca) calenote_swipe_1_pane

0xa0f6,	// (0x00032262) calenote_swipe_2_pane_ParamLimits

0xa0f6,	// (0x00032262) calenote_swipe_2_pane

0xd101,	// (0x0003526d) calenote_swipe_1_pane_g1_ParamLimits

0xd101,	// (0x0003526d) calenote_swipe_1_pane_g1

0xd10e,	// (0x0003527a) calenote_swipe_1_pane_g2_ParamLimits

0xd10e,	// (0x0003527a) calenote_swipe_1_pane_g2

0x0001,

0xfcce,	// (0x00037e3a) calenote_swipe_1_pane_g_ParamLimits

0xfcce,	// (0x00037e3a) calenote_swipe_1_pane_g

0xd594,	// (0x00035700) calenote_swipe_1_pane_t1_ParamLimits

0xd594,	// (0x00035700) calenote_swipe_1_pane_t1

0xd101,	// (0x0003526d) calenote_swipe_2_pane_g1_ParamLimits

0xd101,	// (0x0003526d) calenote_swipe_2_pane_g1

0xd5b3,	// (0x0003571f) calenote_swipe_2_pane_g2_ParamLimits

0xd5b3,	// (0x0003571f) calenote_swipe_2_pane_g2

0x0001,

0xfda1,	// (0x00037f0d) calenote_swipe_2_pane_g_ParamLimits

0xfda1,	// (0x00037f0d) calenote_swipe_2_pane_g

0xd5bf,	// (0x0003572b) calenote_swipe_2_pane_t1_ParamLimits

0xd5bf,	// (0x0003572b) calenote_swipe_2_pane_t1

0xdfe5,	// (0x00036151) main_mup_navstr_pane

0x73d0,	// (0x0002f53c) main_mup3_pane_t7_ParamLimits

0x73d0,	// (0x0002f53c) main_mup3_pane_t7

0xb9a8,	// (0x00033b14) main_mp4_pane_g6_ParamLimits

0xb9a8,	// (0x00033b14) main_mp4_pane_g6

0xbbda,	// (0x00033d46) main_image3_pane_t4_ParamLimits

0xbbda,	// (0x00033d46) main_image3_pane_t4

0xa773,	// (0x000328df) popup_navstr_preview_pane_ParamLimits

0xa773,	// (0x000328df) popup_navstr_preview_pane

0xa783,	// (0x000328ef) scroll_navstr_pane_ParamLimits

0xa783,	// (0x000328ef) scroll_navstr_pane

0xdfe5,	// (0x00036151) bg_popup_preview_window_pane_cp04

0xd5e6,	// (0x00035752) popup_navstr_preview_pane_t1

0xa797,	// (0x00032903) scroll_navstr_pane_g1_ParamLimits

0xa797,	// (0x00032903) scroll_navstr_pane_g1

0xa7ab,	// (0x00032917) scroll_navstr_pane_t1_ParamLimits

0xa7ab,	// (0x00032917) scroll_navstr_pane_t1

0xd58b,	// (0x000356f7) bg_button_pane_cp014

0xd58b,	// (0x000356f7) bg_button_pane_cp030

0x9f8c,	// (0x000320f8) list_double_fisheye_pane_g4_ParamLimits

0x9f8c,	// (0x000320f8) list_double_fisheye_pane_g4

0x9f98,	// (0x00032104) list_double_fisheye_pane_g5_ParamLimits

0x9f98,	// (0x00032104) list_double_fisheye_pane_g5

0xd4f3,	// (0x0003565f) sp_fs_scroll_pane_cp03

0xd244,	// (0x000353b0) main_sp_fs_ctrlbar_pane_g1_ParamLimits

0xd250,	// (0x000353bc) main_sp_fs_ctrlbar_pane_g2_ParamLimits

0xfceb,	// (0x00037e57) main_sp_fs_ctrlbar_pane_g_ParamLimits

0xd25c,	// (0x000353c8) main_sp_fs_ctrlbar_pane_t1_ParamLimits

0xa663,	// (0x000327cf) sp_fs_scroll_pane_cp02

0xe889,	// (0x000369f5) popup_sp_fs_calendar_preview_list_single_pane_ParamLimits

0xe889,	// (0x000369f5) popup_sp_fs_calendar_preview_list_single_pane

0xdfe5,	// (0x00036151) main_cam6_pano_pane

0xb647,	// (0x000337b3) main_mup3_pane_ParamLimits

0xdfe5,	// (0x00036151) main_phacti_pane

0x9b84,	// (0x00031cf0) bg_button_pane_cp11

0x9b9e,	// (0x00031d0a) main_mobtv_info_pane_g2_ParamLimits

0x9b9e,	// (0x00031d0a) main_mobtv_info_pane_g2

0x0001,

0xfc4b,	// (0x00037db7) main_mobtv_info_pane_g_ParamLimits

0xfc4b,	// (0x00037db7) main_mobtv_info_pane_g

0x9d7b,	// (0x00031ee7) sc_clock_pane_t5_ParamLimits

0x9d7b,	// (0x00031ee7) sc_clock_pane_t5

0x9e07,	// (0x00031f73) main_radioblah_pane_g1_ParamLimits

0xd033,	// (0x0003519f) main_radioblah_pane_t3_ParamLimits

0xd033,	// (0x0003519f) main_radioblah_pane_t3

0xd04b,	// (0x000351b7) main_radioblah_pane_t4_ParamLimits

0xd04b,	// (0x000351b7) main_radioblah_pane_t4

0x9e2f,	// (0x00031f9b) main_radioblah_text_pane_ParamLimits

0x9e2f,	// (0x00031f9b) main_radioblah_text_pane

0x9e41,	// (0x00031fad) main_radioblah_info_pane_g1_ParamLimits

0x9eda,	// (0x00032046) main_radioblah_info_pane_t4_ParamLimits

0x9eda,	// (0x00032046) main_radioblah_info_pane_t4

0xe7da,	// (0x00036946) main_sp_fs_calendar_pane

0xa7c2,	// (0x0003292e) main_phacti_pane_g1

0xa7ca,	// (0x00032936) phacti_note_pane_ParamLimits

0xa7ca,	// (0x00032936) phacti_note_pane

0xd5fd,	// (0x00035769) phacti_term_pane_ParamLimits

0xd5fd,	// (0x00035769) phacti_term_pane

0xd612,	// (0x0003577e) phacti_note_pane_t1_ParamLimits

0xd612,	// (0x0003577e) phacti_note_pane_t1

0xd629,	// (0x00035795) phacti_term_pane_g1

0xd631,	// (0x0003579d) phacti_term_pane_t1_ParamLimits

0xd631,	// (0x0003579d) phacti_term_pane_t1

0xd65b,	// (0x000357c7) popup_sp_fs_calendar_preview_list_single_pane_g1

0xd663,	// (0x000357cf) popup_sp_fs_calendar_preview_list_single_pane_g2

0x0001,

0xfdab,	// (0x00037f17) popup_sp_fs_calendar_preview_list_single_pane_g

0xd66b,	// (0x000357d7) popup_sp_fs_calendar_preview_list_single_pane_t1_ParamLimits

0xd66b,	// (0x000357d7) popup_sp_fs_calendar_preview_list_single_pane_t1

0xd681,	// (0x000357ed) aid_popup_sp_fs_bg_corner_pane

0x69d0,	// (0x0002eb3c) popup_sp_fs_calendar_preview_bg_pane_g1

0xdfe5,	// (0x00036151) popup_sp_fs_calendar_preview_bg_pane

0xd689,	// (0x000357f5) popup_sp_fs_calendar_preview_list_pane

0xe7da,	// (0x00036946) bg_main_sp_fs_cale_pane_ParamLimits

0xe7da,	// (0x00036946) bg_main_sp_fs_cale_pane

0xd69a,	// (0x00035806) listscroll_cale_mrui_pane_ParamLimits

0xd69a,	// (0x00035806) listscroll_cale_mrui_pane

0xd6ae,	// (0x0003581a) listscroll_sp_fs_schedule_track_pane

0xd6b7,	// (0x00035823) main_sp_fs_ctrlbar_pane_cp01_ParamLimits

0xd6b7,	// (0x00035823) main_sp_fs_ctrlbar_pane_cp01

0xd6c8,	// (0x00035834) main_sp_fs_ribbon_pane

0xd6d0,	// (0x0003583c) popup_sp_fs_cale_preview_window

0xa82b,	// (0x00032997) list_single_sp_fs_schedule_track_pane_ParamLimits

0xa82b,	// (0x00032997) list_single_sp_fs_schedule_track_pane

0xe7da,	// (0x00036946) bg_sp_fs_highlight_list_pane_cp03_ParamLimits

0xe7da,	// (0x00036946) bg_sp_fs_highlight_list_pane_cp03

0xa83e,	// (0x000329aa) list_single_sp_fs_schedule_track_pane_g1_ParamLimits

0xa83e,	// (0x000329aa) list_single_sp_fs_schedule_track_pane_g1

0xa84a,	// (0x000329b6) list_single_sp_fs_schedule_track_pane_g2_ParamLimits

0xa84a,	// (0x000329b6) list_single_sp_fs_schedule_track_pane_g2

0x0001,

0xfdb0,	// (0x00037f1c) list_single_sp_fs_schedule_track_pane_g_ParamLimits

0xfdb0,	// (0x00037f1c) list_single_sp_fs_schedule_track_pane_g

0xa856,	// (0x000329c2) list_single_sp_fs_schedule_track_pane_t1_ParamLimits

0xa856,	// (0x000329c2) list_single_sp_fs_schedule_track_pane_t1

0xa878,	// (0x000329e4) sp_fs_schedule_track_pane_ParamLimits

0xa878,	// (0x000329e4) sp_fs_schedule_track_pane

0xd6e2,	// (0x0003584e) sp_fs_schedule_track_pane_g1

0xd6ea,	// (0x00035856) sp_fs_schedule_track_pane_g2

0xd6f2,	// (0x0003585e) sp_fs_schedule_track_pane_g3

0xd6fa,	// (0x00035866) sp_fs_schedule_track_pane_g4

0xd702,	// (0x0003586e) sp_fs_schedule_track_pane_g5

0x0004,

0xfdb5,	// (0x00037f21) sp_fs_schedule_track_pane_g

0xbe32,	// (0x00033f9e) bg_sp_fs_schedule_viewer_highlight_g1

0xec3d,	// (0x00036da9) bg_sp_fs_schedule_viewer_highlight_g2

0xbe3a,	// (0x00033fa6) bg_sp_fs_schedule_viewer_highlight_g3

0xbe42,	// (0x00033fae) bg_sp_fs_schedule_viewer_highlight_g4

0xc0c1,	// (0x0003422d) bg_sp_fs_schedule_viewer_highlight_g5

0xbe52,	// (0x00033fbe) bg_sp_fs_schedule_viewer_highlight_g6

0xbe5a,	// (0x00033fc6) bg_sp_fs_schedule_viewer_highlight_g7

0xbe62,	// (0x00033fce) bg_sp_fs_schedule_viewer_highlight_g8

0xec1d,	// (0x00036d89) bg_sp_fs_schedule_viewer_highlight_g9

0x0008,

0xfdc0,	// (0x00037f2c) bg_sp_fs_schedule_viewer_highlight_g

0xdfe5,	// (0x00036151) bg_main_sp_fs_ribbon_pane

0xa88d,	// (0x000329f9) main_sp_fs_ribbon_pane_g1

0xd70a,	// (0x00035876) main_sp_fs_ribbon_pane_t1

0xa896,	// (0x00032a02) main_sp_fs_ribbon_pane_t2

0xd719,	// (0x00035885) main_sp_fs_ribbon_pane_t3

0x0002,

0xfdd3,	// (0x00037f3f) main_sp_fs_ribbon_pane_t

0xd728,	// (0x00035894) main_sp_fs_ribbon_scheduler_pane

0xd730,	// (0x0003589c) bg_main_sp_fs_ribbon_pane_g1

0xd739,	// (0x000358a5) bg_main_sp_fs_ribbon_pane_g2

0xd742,	// (0x000358ae) bg_main_sp_fs_ribbon_pane_g3

0x0002,

0xfdda,	// (0x00037f46) bg_main_sp_fs_ribbon_pane_g

0xd74a,	// (0x000358b6) main_sp_fs_ribbon_scheduler_pane_g1

0xd753,	// (0x000358bf) main_sp_fs_ribbon_scheduler_pane_g2

0xd75c,	// (0x000358c8) main_sp_fs_ribbon_scheduler_pane_g3

0x0002,

0xfde1,	// (0x00037f4d) main_sp_fs_ribbon_scheduler_pane_g

0xd765,	// (0x000358d1) list_cale_mrui_pane

0xa8a5,	// (0x00032a11) sp_fs_scroll_pane_cp07_ParamLimits

0xa8a5,	// (0x00032a11) sp_fs_scroll_pane_cp07

0xa8bb,	// (0x00032a27) bg_sp_fs_schedule_viewer_highlight_ParamLimits

0xa8bb,	// (0x00032a27) bg_sp_fs_schedule_viewer_highlight

0xd76e,	// (0x000358da) list_single_sp_fs_schedule_track_pane_cp01

0xd776,	// (0x000358e2) list_sp_fs_schedule_track_pane

0xd77e,	// (0x000358ea) sp_fs_scroll_pane_cp06_ParamLimits

0xd77e,	// (0x000358ea) sp_fs_scroll_pane_cp06

0x69d0,	// (0x0002eb3c) bgmain_sp_fs_calendar_pane_g1

0xd790,	// (0x000358fc) list_single_cale_mrui_pane_ParamLimits

0xd790,	// (0x000358fc) list_single_cale_mrui_pane

0xd7b7,	// (0x00035923) list_single_cale_mrui_row_pane_ParamLimits

0xd7b7,	// (0x00035923) list_single_cale_mrui_row_pane

0xd7c4,	// (0x00035930) list_single_cale_mrui_row_pane_g1_ParamLimits

0xd7c4,	// (0x00035930) list_single_cale_mrui_row_pane_g1

0xd809,	// (0x00035975) list_single_cale_mrui_row_pane_t1_ParamLimits

0xd809,	// (0x00035975) list_single_cale_mrui_row_pane_t1

0xa8cd,	// (0x00032a39) list_single_cale_mrui_row_pane_t2_ParamLimits

0xa8cd,	// (0x00032a39) list_single_cale_mrui_row_pane_t2

0xd81b,	// (0x00035987) list_single_cale_mrui_row_pane_t3_ParamLimits

0xd81b,	// (0x00035987) list_single_cale_mrui_row_pane_t3

0xd84a,	// (0x000359b6) list_single_cale_mrui_row_pane_t4_ParamLimits

0xd84a,	// (0x000359b6) list_single_cale_mrui_row_pane_t4

0x0003,

0xfdef,	// (0x00037f5b) list_single_cale_mrui_row_pane_t_ParamLimits

0xfdef,	// (0x00037f5b) list_single_cale_mrui_row_pane_t

0xa933,	// (0x00032a9f) list_single_cmail_header_editor_pane_bg_cp01_ParamLimits

0xa933,	// (0x00032a9f) list_single_cmail_header_editor_pane_bg_cp01

0xa957,	// (0x00032ac3) list_single_cmail_header_editor_pane_bg_cp02_ParamLimits

0xa957,	// (0x00032ac3) list_single_cmail_header_editor_pane_bg_cp02

0xa975,	// (0x00032ae1) main_radioblah_text_pane_t1_ParamLimits

0xa975,	// (0x00032ae1) main_radioblah_text_pane_t1

0xd879,	// (0x000359e5) cam6_indi_pane_cp01

0xd881,	// (0x000359ed) cam6_mode_pane_cp01

0xd889,	// (0x000359f5) cam6_pano_pane

0xd892,	// (0x000359fe) cam6_zoom_pane_cp01

0xd89c,	// (0x00035a08) cam6_pano_image_pane

0xd8a5,	// (0x00035a11) cam6_pano_pane_g1

0xcd8f,	// (0x00034efb) cam6_pano_pane_g2

0xd8ae,	// (0x00035a1a) cam6_pano_pane_g3

0xd8b7,	// (0x00035a23) cam6_pano_pane_g4

0x7d83,	// (0x0002feef) cam6_pano_pane_g5

0xd8c0,	// (0x00035a2c) cam6_pano_pane_g6

0xd8c8,	// (0x00035a34) cam6_pano_pane_g7

0xd8d0,	// (0x00035a3c) cam6_pano_pane_g8

0xd8d9,	// (0x00035a45) cam6_pano_pane_g9

0x0008,

0xfdf8,	// (0x00037f64) cam6_pano_pane_g

0xdfe5,	// (0x00036151) main_browser_tag_pane

0xd5de,	// (0x0003574a) grid_navstr_albumart_pane

0xd8e4,	// (0x00035a50) cell_navstr_albumart_pane_ParamLimits

0xd8e4,	// (0x00035a50) cell_navstr_albumart_pane

0xd900,	// (0x00035a6c) cell_navstr_albumart_pane_g1

0x5afd,	// (0x0002dc69) cell_navstr_albumart_pane_g2

0x5b0d,	// (0x0002dc79) cell_navstr_albumart_pane_g3

0x5b05,	// (0x0002dc71) cell_navstr_albumart_pane_g4

0x0003,

0xfe0b,	// (0x00037f77) cell_navstr_albumart_pane_g

0xa990,	// (0x00032afc) bt_list_pane_ParamLimits

0xa990,	// (0x00032afc) bt_list_pane

0xa9a6,	// (0x00032b12) bt_list_pane_t1

0xa9b5,	// (0x00032b21) bt_list_pane_t2

0x0001,

0xfe14,	// (0x00037f80) bt_list_pane_t

0xdfe5,	// (0x00036151) main_cale_prevew_pane

0xa9c4,	// (0x00032b30) popup_cale_preview_window_ParamLimits

0xa9c4,	// (0x00032b30) popup_cale_preview_window

0xe7da,	// (0x00036946) bg_popup_preview_window_pane_cp05_ParamLimits

0xe7da,	// (0x00036946) bg_popup_preview_window_pane_cp05

0xd908,	// (0x00035a74) list_cale_preview_pane_ParamLimits

0xd908,	// (0x00035a74) list_cale_preview_pane

0xa9df,	// (0x00032b4b) list_double_cale_preview_pane_ParamLimits

0xa9df,	// (0x00032b4b) list_double_cale_preview_pane

0xa9f3,	// (0x00032b5f) list_single_cale_preview_pane_ParamLimits

0xa9f3,	// (0x00032b5f) list_single_cale_preview_pane

0xaa0b,	// (0x00032b77) list_single_cale_preview_pane_g1

0xaa13,	// (0x00032b7f) list_single_cale_preview_pane_t1_ParamLimits

0xaa13,	// (0x00032b7f) list_single_cale_preview_pane_t1

0xaa28,	// (0x00032b94) list_double_cale_preview_pane_g1

0xaa30,	// (0x00032b9c) list_double_cale_preview_pane_t1_ParamLimits

0xaa30,	// (0x00032b9c) list_double_cale_preview_pane_t1

0xaa45,	// (0x00032bb1) list_double_cale_preview_pane_t2_ParamLimits

0xaa45,	// (0x00032bb1) list_double_cale_preview_pane_t2

0x0001,

0xfe19,	// (0x00037f85) list_double_cale_preview_pane_t_ParamLimits

0xfe19,	// (0x00037f85) list_double_cale_preview_pane_t

0xdfe5,	// (0x00036151) main_ezdial_pane

0xe7da,	// (0x00036946) main_sp_fs_email_pane_ParamLimits

0xa132,	// (0x0003229e) cmail_ddmenu_btn01_pane_ParamLimits

0xa132,	// (0x0003229e) cmail_ddmenu_btn01_pane

0xa145,	// (0x000322b1) cmail_ddmenu_btn02_pane_ParamLimits

0xa145,	// (0x000322b1) cmail_ddmenu_btn02_pane

0xa168,	// (0x000322d4) cmail_ddmenu_btn03_pane_ParamLimits

0xa168,	// (0x000322d4) cmail_ddmenu_btn03_pane

0xa193,	// (0x000322ff) main_sp_fs_ctrlbar_pane_ParamLimits

0xa1b7,	// (0x00032323) main_sp_fs_listscroll_pane_te_cp01_ParamLimits

0xa66d,	// (0x000327d9) list_cmail_body_pane_ParamLimits

0xd502,	// (0x0003566e) bg_button_pane_cp12

0xd517,	// (0x00035683) list_single_cmail_header_detail_pane_g3_ParamLimits

0xd517,	// (0x00035683) list_single_cmail_header_detail_pane_g3

0xa6fc,	// (0x00032868) list_single_cmail_header_detail_pane_t2_ParamLimits

0xa6fc,	// (0x00032868) list_single_cmail_header_detail_pane_t2

0x0001,

0xfd9c,	// (0x00037f08) list_single_cmail_header_detail_pane_t_ParamLimits

0xfd9c,	// (0x00037f08) list_single_cmail_header_detail_pane_t

0xd646,	// (0x000357b2) phacti_term_pane_t2_ParamLimits

0xd646,	// (0x000357b2) phacti_term_pane_t2

0x0001,

0xfda6,	// (0x00037f12) phacti_term_pane_t_ParamLimits

0xfda6,	// (0x00037f12) phacti_term_pane_t

0xd914,	// (0x00035a80) aid_size_list_single_double

0xaa5d,	// (0x00032bc9) popup_ezdial_listscroll_window

0xaa79,	// (0x00032be5) popup_number_entry_window_cp01

0x3ce8,	// (0x0002be54) bg_popup_call_pane_cp09

0xd920,	// (0x00035a8c) ezdial_list_pane

0xd928,	// (0x00035a94) scroll_pane_cp23

0x5fd0,	// (0x0002e13c) bg_button_pane_cp028_ParamLimits

0x5fd0,	// (0x0002e13c) bg_button_pane_cp028

0xaa87,	// (0x00032bf3) cmail_ddmenu_btn01_pane_g1_ParamLimits

0xaa87,	// (0x00032bf3) cmail_ddmenu_btn01_pane_g1

0xaa96,	// (0x00032c02) cmail_ddmenu_btn01_pane_g2_ParamLimits

0xaa96,	// (0x00032c02) cmail_ddmenu_btn01_pane_g2

0x0001,

0xfe1e,	// (0x00037f8a) cmail_ddmenu_btn01_pane_g_ParamLimits

0xfe1e,	// (0x00037f8a) cmail_ddmenu_btn01_pane_g

0xd930,	// (0x00035a9c) cmail_ddmenu_btn01_pane_t1_ParamLimits

0xd930,	// (0x00035a9c) cmail_ddmenu_btn01_pane_t1

0x5fd0,	// (0x0002e13c) bg_button_pane_cp029_ParamLimits

0x5fd0,	// (0x0002e13c) bg_button_pane_cp029

0xaaa6,	// (0x00032c12) cmail_ddmenu_btn02_pane_g1_ParamLimits

0xaaa6,	// (0x00032c12) cmail_ddmenu_btn02_pane_g1

0xaac1,	// (0x00032c2d) cmail_ddmenu_btn02_pane_t1_ParamLimits

0xaac1,	// (0x00032c2d) cmail_ddmenu_btn02_pane_t1

0xe7da,	// (0x00036946) bg_button_pane_cp031_ParamLimits

0xe7da,	// (0x00036946) bg_button_pane_cp031

0xaaa6,	// (0x00032c12) cmail_ddmenu_btn03_pane_g1_ParamLimits

0xaaa6,	// (0x00032c12) cmail_ddmenu_btn03_pane_g1

0xaac1,	// (0x00032c2d) cmail_ddmenu_btn03_pane_t1_ParamLimits

0xaac1,	// (0x00032c2d) cmail_ddmenu_btn03_pane_t1

0x8390,	// (0x000304fc) cell_dialer2_keypad_pane_t1_ParamLimits

0x83aa,	// (0x00030516) cell_dialer2_keypad_pane_t1_copy1_ParamLimits

0x83aa,	// (0x00030516) cell_dialer2_keypad_pane_t1_copy1

0x99e9,	// (0x00031b55) ncimui_group_button_pane

0xe7da,	// (0x00036946) main_sp_fs_calendar_pane_ParamLimits

0xa685,	// (0x000327f1) list_single_cmail_header_caption_pane_ParamLimits

0xd691,	// (0x000357fd) aid_recal_txt_sm_pane

0xdfe5,	// (0x00036151) mian_recal_day_pane

0xd6d0,	// (0x0003583c) popup_sp_fs_cale_preview_window_ParamLimits

0xdfe5,	// (0x00036151) list_recal_day_pane

0xd968,	// (0x00035ad4) list_single_recal_day_pane_ParamLimits

0xd968,	// (0x00035ad4) list_single_recal_day_pane

0xd97a,	// (0x00035ae6) list_single_recal_day_pane_g1_ParamLimits

0xd97a,	// (0x00035ae6) list_single_recal_day_pane_g1

0xd986,	// (0x00035af2) list_single_recal_day_pane_g2_ParamLimits

0xd986,	// (0x00035af2) list_single_recal_day_pane_g2

0xd996,	// (0x00035b02) list_single_recal_day_pane_g3_ParamLimits

0xd996,	// (0x00035b02) list_single_recal_day_pane_g3

0xaae8,	// (0x00032c54) list_single_recal_day_pane_g4_ParamLimits

0xaae8,	// (0x00032c54) list_single_recal_day_pane_g4

0xd9a2,	// (0x00035b0e) list_single_recal_day_pane_g5_ParamLimits

0xd9a2,	// (0x00035b0e) list_single_recal_day_pane_g5

0xd9b2,	// (0x00035b1e) list_single_recal_day_pane_g6_ParamLimits

0xd9b2,	// (0x00035b1e) list_single_recal_day_pane_g6

0x0004,

0xfe2d,	// (0x00037f99) list_single_recal_day_pane_g_ParamLimits

0xfe2d,	// (0x00037f99) list_single_recal_day_pane_g

0xd9c9,	// (0x00035b35) list_single_recal_day_pane_t1

0xd9db,	// (0x00035b47) list_single_recal_day_pane_t2

0x0001,

0xfe38,	// (0x00037fa4) list_single_recal_day_pane_t

0xab08,	// (0x00032c74) ncimui_query_button_pane_ParamLimits

0xab08,	// (0x00032c74) ncimui_query_button_pane

0xab18,	// (0x00032c84) ncimui_query_button_pane_t1_ParamLimits

0xab18,	// (0x00032c84) ncimui_query_button_pane_t1

0xd9f0,	// (0x00035b5c) ncimui_query_button_pane_t2_ParamLimits

0xd9f0,	// (0x00035b5c) ncimui_query_button_pane_t2

0x0001,

0xfe3d,	// (0x00037fa9) ncimui_query_button_pane_t_ParamLimits

0xfe3d,	// (0x00037fa9) ncimui_query_button_pane_t

0xab2b,	// (0x00032c97) query_button_pane_ParamLimits

0xab2b,	// (0x00032c97) query_button_pane

0xdfe5,	// (0x00036151) bg_button_pane_cp0028

0xda03,	// (0x00035b6f) query_button_pane_t1

0x0ba8,	// (0x00028d14) main_tport_pane_ParamLimits

0xa554,	// (0x000326c0) bg_popup_window_pane_cp01_ParamLimits

0xa554,	// (0x000326c0) bg_popup_window_pane_cp01

0xa56e,	// (0x000326da) heading_pane_cp08_ParamLimits

0xa56e,	// (0x000326da) heading_pane_cp08

0xa582,	// (0x000326ee) heading_pane_cp07_ParamLimits

0xa582,	// (0x000326ee) heading_pane_cp07

0xd4c5,	// (0x00035631) cell_tport_appsw_pane_g2

0x0002,

0xfd89,	// (0x00037ef5) cell_tport_appsw_pane_g

0x42dd,	// (0x0002c449) input_candi_list_open_g1

0xee02,	// (0x00036f6e) list_cale_time_pane_g6_ParamLimits

0xee02,	// (0x00036f6e) list_cale_time_pane_g6

0x6d47,	// (0x0002eeb3) aid_size_touch_calib_1_ParamLimits

0x6d47,	// (0x0002eeb3) aid_size_touch_calib_1

0x6d59,	// (0x0002eec5) aid_size_touch_calib_2_ParamLimits

0x6d59,	// (0x0002eec5) aid_size_touch_calib_2

0x6d71,	// (0x0002eedd) aid_size_touch_calib_3_ParamLimits

0x6d71,	// (0x0002eedd) aid_size_touch_calib_3

0x6d8f,	// (0x0002eefb) aid_size_touch_calib_4_ParamLimits

0x6d8f,	// (0x0002eefb) aid_size_touch_calib_4

0x6da7,	// (0x0002ef13) main_touch_calib_button_group_pane_ParamLimits

0x6da7,	// (0x0002ef13) main_touch_calib_button_group_pane

0x6dbf,	// (0x0002ef2b) main_touch_calib_pane_g1_ParamLimits

0x6dd1,	// (0x0002ef3d) main_touch_calib_pane_g2_ParamLimits

0x6de3,	// (0x0002ef4f) main_touch_calib_pane_g3_ParamLimits

0x6df5,	// (0x0002ef61) main_touch_calib_pane_g4_ParamLimits

0xf761,	// (0x000378cd) main_touch_calib_pane_g_ParamLimits

0x6e07,	// (0x0002ef73) main_touch_calib_pane_t1_ParamLimits

0x6e21,	// (0x0002ef8d) main_touch_calib_pane_t2_ParamLimits

0x6e3b,	// (0x0002efa7) main_touch_calib_pane_t3_ParamLimits

0x6e4f,	// (0x0002efbb) main_touch_calib_pane_t4_ParamLimits

0x6e65,	// (0x0002efd1) main_touch_calib_pane_t5_ParamLimits

0xf76a,	// (0x000378d6) main_touch_calib_pane_t_ParamLimits

0x768f,	// (0x0002f7fb) list_single_fp_cale_pane_g3_ParamLimits

0x768f,	// (0x0002f7fb) list_single_fp_cale_pane_g3

0xb647,	// (0x000337b3) bg_button_pane_cp012_ParamLimits

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp03_ParamLimits

0x1cb8,	// (0x00029e24) cell_vitu2_function_top_pane_g1_ParamLimits

0xb647,	// (0x000337b3) bg_vkb2_func_pane_cp04_ParamLimits

0x9977,	// (0x00031ae3) main_ncimui_button_group_pane_ParamLimits

0x9977,	// (0x00031ae3) main_ncimui_button_group_pane

0x99d7,	// (0x00031b43) main_ncimui_pane_t3_ParamLimits

0x99d7,	// (0x00031b43) main_ncimui_pane_t3

0xd5f4,	// (0x00035760) phacti_button_group_pane

0xd914,	// (0x00035a80) aid_size_list_single_double_ParamLimits

0xaa5d,	// (0x00032bc9) popup_ezdial_listscroll_window_ParamLimits

0xaa79,	// (0x00032be5) popup_number_entry_window_cp01_ParamLimits

0xab3e,	// (0x00032caa) phacti_button_pane_ParamLimits

0xab3e,	// (0x00032caa) phacti_button_pane

0xdfe5,	// (0x00036151) bg_button_pane_cp14

0xda11,	// (0x00035b7d) phacti_button_pane_t1

0xab4f,	// (0x00032cbb) main_touch_calib_button_pane_ParamLimits

0xab4f,	// (0x00032cbb) main_touch_calib_button_pane

0xe765,	// (0x000368d1) bg_button_pane_cp18_ParamLimits

0xe765,	// (0x000368d1) bg_button_pane_cp18

0xda1f,	// (0x00035b8b) main_touch_calib_button_pane_t1_ParamLimits

0xda1f,	// (0x00035b8b) main_touch_calib_button_pane_t1

0xda35,	// (0x00035ba1) main_touch_calib_button_pane_t2_ParamLimits

0xda35,	// (0x00035ba1) main_touch_calib_button_pane_t2

0x0001,

0xfe42,	// (0x00037fae) main_touch_calib_button_pane_t_ParamLimits

0xfe42,	// (0x00037fae) main_touch_calib_button_pane_t

0xdfe5,	// (0x00036151) cell_ncimui_button_pane

0xdfe5,	// (0x00036151) bg_button_pane_cp032

0xda53,	// (0x00035bbf) cell_ncimui_button_pane_t1

0xbbb8,	// (0x00033d24) image3_infobar_pane_ParamLimits

0xbbb8,	// (0x00033d24) image3_infobar_pane

0x9da7,	// (0x00031f13) fs_bigclock_status_pane_ParamLimits

0x9da7,	// (0x00031f13) fs_bigclock_status_pane

0x9db4,	// (0x00031f20) main_fs_bigclock_clock_pane_ParamLimits

0x9db4,	// (0x00031f20) main_fs_bigclock_clock_pane

0x9dc8,	// (0x00031f34) main_fs_bigclock_indi_pane_ParamLimits

0x9dc8,	// (0x00031f34) main_fs_bigclock_indi_pane

0x9de3,	// (0x00031f4f) main_fs_bigclock_swipe_pane_ParamLimits

0x9de3,	// (0x00031f4f) main_fs_bigclock_swipe_pane

0xdfe5,	// (0x00036151) main_fs_clock_dumped_data

0xce9c,	// (0x00035008) list_single_fs_bigclock_indicator_pane_g1_ParamLimits

0xce9c,	// (0x00035008) list_single_fs_bigclock_indicator_pane_g1

0xcec6,	// (0x00035032) list_single_fs_bigclock_indicator_pane_g2_ParamLimits

0xcec6,	// (0x00035032) list_single_fs_bigclock_indicator_pane_g2

0xcee0,	// (0x0003504c) list_single_fs_bigclock_indicator_pane_g3_ParamLimits

0xcee0,	// (0x0003504c) list_single_fs_bigclock_indicator_pane_g3

0xcefa,	// (0x00035066) list_single_fs_bigclock_indicator_pane_g4_ParamLimits

0xcefa,	// (0x00035066) list_single_fs_bigclock_indicator_pane_g4

0x0004,

0xfc7f,	// (0x00037deb) list_single_fs_bigclock_indicator_pane_g_ParamLimits

0xfc7f,	// (0x00037deb) list_single_fs_bigclock_indicator_pane_g

0xcf25,	// (0x00035091) list_single_fs_bigclock_indicator_pane_t1_ParamLimits

0xcf25,	// (0x00035091) list_single_fs_bigclock_indicator_pane_t1

0xcf4d,	// (0x000350b9) list_single_fs_bigclock_indicator_pane_t2_ParamLimits

0xcf4d,	// (0x000350b9) list_single_fs_bigclock_indicator_pane_t2

0xcf75,	// (0x000350e1) list_single_fs_bigclock_indicator_pane_t3_ParamLimits

0xcf75,	// (0x000350e1) list_single_fs_bigclock_indicator_pane_t3

0xcf9d,	// (0x00035109) list_single_fs_bigclock_indicator_pane_t4_ParamLimits

0xcf9d,	// (0x00035109) list_single_fs_bigclock_indicator_pane_t4

0x0004,

0xfc8a,	// (0x00037df6) list_single_fs_bigclock_indicator_pane_t_ParamLimits

0xfc8a,	// (0x00037df6) list_single_fs_bigclock_indicator_pane_t

0xda61,	// (0x00035bcd) image3_infobar_fav_pane_ParamLimits

0xda61,	// (0x00035bcd) image3_infobar_fav_pane

0xda71,	// (0x00035bdd) image3_infobar_loc_pane_ParamLimits

0xda71,	// (0x00035bdd) image3_infobar_loc_pane

0xda87,	// (0x00035bf3) image3_infobar_time_pane_ParamLimits

0xda87,	// (0x00035bf3) image3_infobar_time_pane

0x69d0,	// (0x0002eb3c) image3_infobar_time_pane_g1

0xda97,	// (0x00035c03) image3_infobar_time_pane_t1

0x69d0,	// (0x0002eb3c) image3_infobar_loc_pane_g1

0xdaa5,	// (0x00035c11) image3_infobar_loc_pane_g2

0x0001,

0xfe47,	// (0x00037fb3) image3_infobar_loc_pane_g

0xdaad,	// (0x00035c19) image3_infobar_loc_pane_t1

0x69d0,	// (0x0002eb3c) image3_infobar_fav_pane_g1

0xdabb,	// (0x00035c27) image3_infobar_fav_pane_g2

0x0001,

0xfe4c,	// (0x00037fb8) image3_infobar_fav_pane_g

0xdac3,	// (0x00035c2f) fs_bigclock_status_battery_pane

0xdacc,	// (0x00035c38) fs_bigclock_status_signal_pane

0xdad5,	// (0x00035c41) fs_bigclock_status_title_pane

0xdade,	// (0x00035c4a) fs_bigclock_status_signal_pane_g1

0xdae7,	// (0x00035c53) fs_bigclock_status_signal_pane_g2

0x0001,

0xfe51,	// (0x00037fbd) fs_bigclock_status_signal_pane_g

0xdaef,	// (0x00035c5b) fs_bigclock_status_battery_pane_g1

0xdaf8,	// (0x00035c64) fs_bigclock_status_battery_pane_g2

0x0001,

0xfe56,	// (0x00037fc2) fs_bigclock_status_battery_pane_g

0xdb00,	// (0x00035c6c) fs_bigclock_status_title_pane_t1

0x69d0,	// (0x0002eb3c) main_fs_bigclock_clock_pane_g1

0xdb0e,	// (0x00035c7a) main_fs_bigclock_clock_pane_g2

0xdb0e,	// (0x00035c7a) main_fs_bigclock_clock_pane_g3

0xdb0e,	// (0x00035c7a) main_fs_bigclock_clock_pane_g4

0x0003,

0xfe5b,	// (0x00037fc7) main_fs_bigclock_clock_pane_g

0xdb16,	// (0x00035c82) main_fs_bigclock_clock_pane_t1

0xdb24,	// (0x00035c90) main_fs_bigclock_clock_pane_t2

0x0001,

0xfe64,	// (0x00037fd0) main_fs_bigclock_clock_pane_t

0xab64,	// (0x00032cd0) list_single_fs_bigclock_indicator_pane_ParamLimits

0xab64,	// (0x00032cd0) list_single_fs_bigclock_indicator_pane

0xab75,	// (0x00032ce1) list_single_fs_bigclock_pane_ParamLimits

0xab75,	// (0x00032ce1) list_single_fs_bigclock_pane

0xdb3c,	// (0x00035ca8) main_fs_bigclock_indicator_pane_t1

0xdb4b,	// (0x00035cb7) list_single_fs_bigclock_pane_g1

0xdb53,	// (0x00035cbf) list_single_fs_bigclock_pane_t1

0x69d0,	// (0x0002eb3c) main_fs_bigclock_swipe_pane_g1

0xdb96,	// (0x00035d02) main_fs_bigclock_swipe_pane_g2

0x0001,

0xfe75,	// (0x00037fe1) main_fs_bigclock_swipe_pane_g

0xdb9e,	// (0x00035d0a) main_fs_bigclock_swipe_pane_t1_ParamLimits

0xdb9e,	// (0x00035d0a) main_fs_bigclock_swipe_pane_t1

0x368e,	// (0x0002b7fa) call_type_pane_ParamLimits

0xdfe5,	// (0x00036151) main_btmg_pane

0xd7f0,	// (0x0003595c) list_single_cale_mrui_row_pane_g2_ParamLimits

0xd7f0,	// (0x0003595c) list_single_cale_mrui_row_pane_g2

0x0002,

0xfde8,	// (0x00037f54) list_single_cale_mrui_row_pane_g_ParamLimits

0xfde8,	// (0x00037f54) list_single_cale_mrui_row_pane_g

0xd94f,	// (0x00035abb) list_recal_vselct_arw_lo_pane

0xd957,	// (0x00035ac3) list_recal_vselct_arw_up_pane

0xd95f,	// (0x00035acb) list_recal_vselct_pane

0xabd8,	// (0x00032d44) btmg_button_pane

0xabe2,	// (0x00032d4e) main_btmg_pane_g1

0xdfe5,	// (0x00036151) bg_button_pane_cp044

0xdbbb,	// (0x00035d27) btmg_button_pane_t1

0x5fc8,	// (0x0002e134) aid_listscroll_gen

0xe7da,	// (0x00036946) main_cntbar_detail_pane

0xd4e3,	// (0x0003564f) list_cmail_folder_pane

0xd4f3,	// (0x0003565f) sp_fs_scroll_pane_cp03_ParamLimits

0xabec,	// (0x00032d58) list_single_fs_dyc_pane_cp01_ParamLimits

0xabec,	// (0x00032d58) list_single_fs_dyc_pane_cp01

0xdbc9,	// (0x00035d35) aid_size_cmail_indent

0xdbd2,	// (0x00035d3e) list_single_dyc_row_pane_cp01

0xac39,	// (0x00032da5) cntbar_detail_list_pane_ParamLimits

0xac39,	// (0x00032da5) cntbar_detail_list_pane

0xac8b,	// (0x00032df7) main_cntbar_detail_cont_pane_ParamLimits

0xac8b,	// (0x00032df7) main_cntbar_detail_cont_pane

0x3628,	// (0x0002b794) scroll_pane_cp032_ParamLimits

0x3628,	// (0x0002b794) scroll_pane_cp032

0xac9f,	// (0x00032e0b) cntbar_detail_list_event_pane_ParamLimits

0xac9f,	// (0x00032e0b) cntbar_detail_list_event_pane

0xac4b,	// (0x00032db7) cntbar_detail_list_shct_pane

0xec8b,	// (0x00036df7) aid_list_gen

0xdbdb,	// (0x00035d47) aid_scroll

0xdbe4,	// (0x00035d50) aid_size_touch_scroll_bar

0xacaf,	// (0x00032e1b) aid_list_double

0xacb8,	// (0x00032e24) aid_list_single

0xacc2,	// (0x00032e2e) aid_list_single_lg

0xdbed,	// (0x00035d59) aid_list_z_g_a_sm

0xdbf5,	// (0x00035d61) aid_list_z_g_d

0xaccb,	// (0x00032e37) aid_txt_z_prm

0xacdb,	// (0x00032e47) aid_txt_z_prm_cp01

0xace9,	// (0x00032e55) aid_txt_z_sec

0xacf7,	// (0x00032e63) main_cntbar_detail_cont_pane_g1_ParamLimits

0xacf7,	// (0x00032e63) main_cntbar_detail_cont_pane_g1

0xad0b,	// (0x00032e77) main_cntbar_detail_cont_pane_g2_ParamLimits

0xad0b,	// (0x00032e77) main_cntbar_detail_cont_pane_g2

0x0001,

0xfe7a,	// (0x00037fe6) main_cntbar_detail_cont_pane_g_ParamLimits

0xfe7a,	// (0x00037fe6) main_cntbar_detail_cont_pane_g

0xdbfd,	// (0x00035d69) main_cntbar_detail_cont_pane_t1

0xdc0b,	// (0x00035d77) main_cntbar_detail_cont_pane_t2

0xdc19,	// (0x00035d85) main_cntbar_detail_cont_pane_t3

0x0002,

0xfe7f,	// (0x00037feb) main_cntbar_detail_cont_pane_t

0xad1b,	// (0x00032e87) cell_cntbar_detail_list_shct_pane_ParamLimits

0xad1b,	// (0x00032e87) cell_cntbar_detail_list_shct_pane

0xdc27,	// (0x00035d93) cntbar_detail_list_shct_pane_g1

0xdc30,	// (0x00035d9c) cntbar_detail_list_shct_pane_g2

0x0001,

0xfe86,	// (0x00037ff2) cntbar_detail_list_shct_pane_g

0xad2d,	// (0x00032e99) cntbar_detail_list_event_pane_g1_ParamLimits

0xad2d,	// (0x00032e99) cntbar_detail_list_event_pane_g1

0xad39,	// (0x00032ea5) cntbar_detail_list_event_pane_g2_ParamLimits

0xad39,	// (0x00032ea5) cntbar_detail_list_event_pane_g2

0x0005,

0xfe8b,	// (0x00037ff7) cntbar_detail_list_event_pane_g_ParamLimits

0xfe8b,	// (0x00037ff7) cntbar_detail_list_event_pane_g

0xada7,	// (0x00032f13) cntbar_detail_list_event_pane_t1_ParamLimits

0xada7,	// (0x00032f13) cntbar_detail_list_event_pane_t1

0xadbc,	// (0x00032f28) cntbar_detail_list_event_pane_t2_ParamLimits

0xadbc,	// (0x00032f28) cntbar_detail_list_event_pane_t2

0x0002,

0xfe98,	// (0x00038004) cntbar_detail_list_event_pane_t_ParamLimits

0xfe98,	// (0x00038004) cntbar_detail_list_event_pane_t

0x69d0,	// (0x0002eb3c) cell_cntbar_detail_list_shct_pane_g1

0x3c66,	// (0x0002bdd2) navi_pane_mv_g3

0xe7da,	// (0x00036946) main_cntbar_detail_pane_ParamLimits

0xdfe5,	// (0x00036151) main_notif_wgt_pane

0xb942,	// (0x00033aae) aid_tch_main_mp4_pane_g4

0xbb40,	// (0x00033cac) popup_slider_window_cp02

0xd945,	// (0x00035ab1) list_recal_day_event_pane

0xac09,	// (0x00032d75) cntbar_detail_btn_pane_ParamLimits

0xac09,	// (0x00032d75) cntbar_detail_btn_pane

0xac21,	// (0x00032d8d) cntbar_detail_btn_pane_cp01_ParamLimits

0xac21,	// (0x00032d8d) cntbar_detail_btn_pane_cp01

0xac4b,	// (0x00032db7) cntbar_detail_list_shct_pane_ParamLimits

0xac5b,	// (0x00032dc7) cntbar_detail_pane_g1_ParamLimits

0xac5b,	// (0x00032dc7) cntbar_detail_pane_g1

0xac6f,	// (0x00032ddb) cntbar_detail_pane_t1_ParamLimits

0xac6f,	// (0x00032ddb) cntbar_detail_pane_t1

0xad45,	// (0x00032eb1) cntbar_detail_list_event_pane_g3_ParamLimits

0xad45,	// (0x00032eb1) cntbar_detail_list_event_pane_g3

0xad5d,	// (0x00032ec9) cntbar_detail_list_event_pane_g4_ParamLimits

0xad5d,	// (0x00032ec9) cntbar_detail_list_event_pane_g4

0xad75,	// (0x00032ee1) cntbar_detail_list_event_pane_g5_ParamLimits

0xad75,	// (0x00032ee1) cntbar_detail_list_event_pane_g5

0xad8d,	// (0x00032ef9) cntbar_detail_list_event_pane_g6_ParamLimits

0xad8d,	// (0x00032ef9) cntbar_detail_list_event_pane_g6

0xadd1,	// (0x00032f3d) cntbar_detail_list_event_pane_t3_ParamLimits

0xadd1,	// (0x00032f3d) cntbar_detail_list_event_pane_t3

0xade3,	// (0x00032f4f) popup_notif_wgt_window_ParamLimits

0xade3,	// (0x00032f4f) popup_notif_wgt_window

0xadfc,	// (0x00032f68) popup_submenu_window_cp01_ParamLimits

0xadfc,	// (0x00032f68) popup_submenu_window_cp01

0x3ce8,	// (0x0002be54) bg_popup_window_pane_cp10

0xdc39,	// (0x00035da5) listscroll_notif_wgt_pane

0xdc4b,	// (0x00035db7) list_notif_wgt_window

0xdc54,	// (0x00035dc0) scroll_pane_cp033

0xae10,	// (0x00032f7c) list_notif_wgt_row_pane_ParamLimits

0xae10,	// (0x00032f7c) list_notif_wgt_row_pane

0xdc5d,	// (0x00035dc9) aid_size_list_notif_wgt_del

0xdc6a,	// (0x00035dd6) list_notif_wgt_row_pane_g1

0xdc76,	// (0x00035de2) list_notif_wgt_row_pane_g2

0xdc82,	// (0x00035dee) list_notif_wgt_row_pane_g3

0x0002,

0xfe9f,	// (0x0003800b) list_notif_wgt_row_pane_g

0xdc8f,	// (0x00035dfb) list_notif_wgt_row_pane_t1

0xdca4,	// (0x00035e10) list_notif_wgt_row_pane_t2

0xdcb6,	// (0x00035e22) list_notif_wgt_row_pane_t3

0x0002,

0xfea6,	// (0x00038012) list_notif_wgt_row_pane_t

0xc11b,	// (0x00034287) list_recal_day_event_pane_g1

0xdcc8,	// (0x00035e34) list_recal_day_event_pane_t1

0xdfe5,	// (0x00036151) bg_button_pane_cp045

0xdcd7,	// (0x00035e43) cntbar_detail_btn_pane_t1

0x5fd0,	// (0x0002e13c) main_callh_pane_ParamLimits

0x5fd0,	// (0x0002e13c) main_callh_pane

0xdfe5,	// (0x00036151) main_coverflow0_pane

0xdfe5,	// (0x00036151) main_wgtman_pane

0x9df1,	// (0x00031f5d) main_fs_bigclock_unlock_btn_pane_ParamLimits

0x9df1,	// (0x00031f5d) main_fs_bigclock_unlock_btn_pane

0xd4bd,	// (0x00035629) bg_button_pane_cp16

0xd4cd,	// (0x00035639) cell_tport_appsw_pane_g3

0xae20,	// (0x00032f8c) cf0_flow_pane_ParamLimits

0xae20,	// (0x00032f8c) cf0_flow_pane

0xdce5,	// (0x00035e51) listscroll_cf0_pane

0xdcf0,	// (0x00035e5c) main_cf0_pane_g1

0xae35,	// (0x00032fa1) main_cf0_pane_t1_ParamLimits

0xae35,	// (0x00032fa1) main_cf0_pane_t1

0xae4c,	// (0x00032fb8) main_cf0_pane_t2_ParamLimits

0xae4c,	// (0x00032fb8) main_cf0_pane_t2

0x0001,

0xfead,	// (0x00038019) main_cf0_pane_t_ParamLimits

0xfead,	// (0x00038019) main_cf0_pane_t

0xdcfa,	// (0x00035e66) scroll_pane_cp11

0xae63,	// (0x00032fcf) cf0_flow_pane_g1

0xae6f,	// (0x00032fdb) cf0_flow_pane_g2

0x0001,

0xfeb2,	// (0x0003801e) cf0_flow_pane_g

0xae7b,	// (0x00032fe7) cf0_flow_pane_t1

0xdfe5,	// (0x00036151) main_call6_pane

0xdfe5,	// (0x00036151) main_calllock_pane

0xae8d,	// (0x00032ff9) call6_btn_grp_pane_ParamLimits

0xae8d,	// (0x00032ff9) call6_btn_grp_pane

0xaea7,	// (0x00033013) call6_pane_g1_ParamLimits

0xaea7,	// (0x00033013) call6_pane_g1

0xaebd,	// (0x00033029) popup_call6_1st_window_ParamLimits

0xaebd,	// (0x00033029) popup_call6_1st_window

0xaece,	// (0x0003303a) popup_call6_2nd_window_ParamLimits

0xaece,	// (0x0003303a) popup_call6_2nd_window

0xaedf,	// (0x0003304b) cell_call6_btn_pane_ParamLimits

0xaedf,	// (0x0003304b) cell_call6_btn_pane

0x3ce8,	// (0x0002be54) bg_popup_call2_in_pane_cp03

0xdd05,	// (0x00035e71) popup_call6_1st_window_g1

0xdd0d,	// (0x00035e79) popup_call6_1st_window_g2

0xdd15,	// (0x00035e81) popup_call6_1st_window_g3

0x0002,

0xfeb7,	// (0x00038023) popup_call6_1st_window_g

0xdd1d,	// (0x00035e89) popup_call6_1st_window_t1

0xdd2c,	// (0x00035e98) popup_call6_1st_window_t2

0xdd3c,	// (0x00035ea8) popup_call6_1st_window_t3

0x0002,

0xfebe,	// (0x0003802a) popup_call6_1st_window_t

0x3ce8,	// (0x0002be54) bg_popup_call2_in_pane_cp04

0xdd05,	// (0x00035e71) popup_call6_2nd_window_g1

0xdd0d,	// (0x00035e79) popup_call6_2nd_window_g2

0xdd15,	// (0x00035e81) popup_call6_2nd_window_g3

0x0002,

0xfeb7,	// (0x00038023) popup_call6_2nd_window_g

0xdd1d,	// (0x00035e89) popup_call6_2nd_window_t1

0xdfe5,	// (0x00036151) bg_button_pane_cp15

0xdd4c,	// (0x00035eb8) cell_call6_btn_pane_g1

0xdd55,	// (0x00035ec1) cell_call6_btn_pane_t1

0xaef3,	// (0x0003305f) listscroll_wgtman_pane_ParamLimits

0xaef3,	// (0x0003305f) listscroll_wgtman_pane

0xaf16,	// (0x00033082) wgtman_btn_pane_ParamLimits

0xaf16,	// (0x00033082) wgtman_btn_pane

0x3881,	// (0x0002b9ed) aid_scroll_copy1

0xdd64,	// (0x00035ed0) list_wgtman_pane

0xaf59,	// (0x000330c5) wgtman_btn_pane_g1_ParamLimits

0xaf59,	// (0x000330c5) wgtman_btn_pane_g1

0xaf85,	// (0x000330f1) wgtman_btn_pane_t1_ParamLimits

0xaf85,	// (0x000330f1) wgtman_btn_pane_t1

0xdd6e,	// (0x00035eda) wgtman_btn_pane_t2_ParamLimits

0xdd6e,	// (0x00035eda) wgtman_btn_pane_t2

0x0001,

0xfec5,	// (0x00038031) wgtman_btn_pane_t_ParamLimits

0xfec5,	// (0x00038031) wgtman_btn_pane_t

0xafc2,	// (0x0003312e) listrow_wgtman_pane_ParamLimits

0xafc2,	// (0x0003312e) listrow_wgtman_pane

0xafd6,	// (0x00033142) listrow_wgtman_pane_g1

0xafe3,	// (0x0003314f) listrow_wgtman_pane_g2

0x0001,

0xfeca,	// (0x00038036) listrow_wgtman_pane_g

0xb001,	// (0x0003316d) listrow_wgtman_pane_t1

0xb019,	// (0x00033185) listrow_wgtman_pane_t2

0x0001,

0xfecf,	// (0x0003803b) listrow_wgtman_pane_t

0xb03f,	// (0x000331ab) wait_bar_pane_cp09

0xdd85,	// (0x00035ef1) main_calllock_btn_pane

0xdd8f,	// (0x00035efb) main_calllock_pane_g1

0xdfe5,	// (0x00036151) bg_button_pane_cp17

0xdd9b,	// (0x00035f07) main_calllock_btn_pane_g1

0xdda4,	// (0x00035f10) main_calllock_btn_pane_t1

0xdfe5,	// (0x00036151) main_dialer3_pane

0xdfe5,	// (0x00036151) main_fmrd2_pane

0x69d0,	// (0x0002eb3c) main_fs_bigclock_unlock_btn_pane_g1

0xddbb,	// (0x00035f27) main_fs_bigclock_unlock_btn_pane_t1

0xb051,	// (0x000331bd) area_fmrd2_info_pane_ParamLimits

0xb051,	// (0x000331bd) area_fmrd2_info_pane

0xb062,	// (0x000331ce) area_fmrd2_visual_pane_ParamLimits

0xb062,	// (0x000331ce) area_fmrd2_visual_pane

0xb070,	// (0x000331dc) fmrd2_indi_pane_ParamLimits

0xb070,	// (0x000331dc) fmrd2_indi_pane

0xb07d,	// (0x000331e9) area_fmrd2_visual_pane_g1

0xb085,	// (0x000331f1) area_fmrd2_visual_pane_t1

0xb095,	// (0x00033201) area_fmrd2_visual_pane_t2

0xb0a5,	// (0x00033211) area_fmrd2_visual_pane_t3

0x0002,

0xfed9,	// (0x00038045) area_fmrd2_visual_pane_t

0xb0b5,	// (0x00033221) area_fmrd2_info_pane_g1

0xb0bd,	// (0x00033229) area_fmrd2_info_pane_t1

0xb0cd,	// (0x00033239) area_fmrd2_info_pane_t2

0xb0dd,	// (0x00033249) area_fmrd2_info_pane_t3

0xb0ed,	// (0x00033259) area_fmrd2_info_pane_t4

0x0003,

0xfee0,	// (0x0003804c) area_fmrd2_info_pane_t

0xb0fd,	// (0x00033269) fmrd2_indi_pane_t1

0xb10d,	// (0x00033279) fmrd2_indi_pane_t2

0xb11d,	// (0x00033289) fmrd2_indi_pane_t3

0x0002,

0xfee9,	// (0x00038055) fmrd2_indi_pane_t

0xcf09,	// (0x00035075) list_single_fs_bigclock_indicator_pane_g5_ParamLimits

0xcf09,	// (0x00035075) list_single_fs_bigclock_indicator_pane_g5

0xcfb2,	// (0x0003511e) list_single_fs_bigclock_indicator_pane_t5_ParamLimits

0xcfb2,	// (0x0003511e) list_single_fs_bigclock_indicator_pane_t5

0xa7de,	// (0x0003294a) aid_cell_bcale_month_pane_ParamLimits

0xa7de,	// (0x0003294a) aid_cell_bcale_month_pane

0xa7f6,	// (0x00032962) bcale_month_pane_ParamLimits

0xa7f6,	// (0x00032962) bcale_month_pane

0xa80d,	// (0x00032979) bcale_preview_pane_ParamLimits

0xa80d,	// (0x00032979) bcale_preview_pane

0xdb53,	// (0x00035cbf) list_single_fs_bigclock_pane_t1_ParamLimits

0xdb72,	// (0x00035cde) list_single_fs_bigclock_pane_t2_ParamLimits

0xdb72,	// (0x00035cde) list_single_fs_bigclock_pane_t2

0x0001,

0xfe70,	// (0x00037fdc) list_single_fs_bigclock_pane_t_ParamLimits

0xfe70,	// (0x00037fdc) list_single_fs_bigclock_pane_t

0xddb3,	// (0x00035f1f) main_fs_bigclock_unlock_btn_pane_g2

0x0001,

0xfed4,	// (0x00038040) main_fs_bigclock_unlock_btn_pane_g

0xb12d,	// (0x00033299) aid_dia3_key_size_ParamLimits

0xb12d,	// (0x00033299) aid_dia3_key_size

0xb13c,	// (0x000332a8) aid_dia3_listrow_size_ParamLimits

0xb13c,	// (0x000332a8) aid_dia3_listrow_size

0xb151,	// (0x000332bd) dia3_keypad_fun_pane_ParamLimits

0xb151,	// (0x000332bd) dia3_keypad_fun_pane

0xb16d,	// (0x000332d9) dia3_keypad_num_pane_ParamLimits

0xb16d,	// (0x000332d9) dia3_keypad_num_pane

0xb186,	// (0x000332f2) dia3_listscroll_pane_ParamLimits

0xb186,	// (0x000332f2) dia3_listscroll_pane

0xb199,	// (0x00033305) dia3_numentry_pane_ParamLimits

0xb199,	// (0x00033305) dia3_numentry_pane

0xddc9,	// (0x00035f35) dia3_list_pane

0xddd4,	// (0x00035f40) scroll_pane_cp12

0xdfe5,	// (0x00036151) bg_dia3_numentry_pane

0xb1ad,	// (0x00033319) dia3_numentry_pane_t1

0xb1bc,	// (0x00033328) cell_dia3_key_num_pane

0xb1c4,	// (0x00033330) cell_dia3_key0_fun_pane_ParamLimits

0xb1c4,	// (0x00033330) cell_dia3_key0_fun_pane

0xb1d8,	// (0x00033344) cell_dia3_key1_fun_pane_ParamLimits

0xb1d8,	// (0x00033344) cell_dia3_key1_fun_pane

0xb1f0,	// (0x0003335c) dia3_listrow_pane

0xcbf9,	// (0x00034d65) bg_dia3_numentry_pane_g1

0xdfe5,	// (0x00036151) bg_button_pane_cp21

0xdddf,	// (0x00035f4b) cell_dia3_key_num_pane_t1

0xdded,	// (0x00035f59) cell_dia3_key_num_pane_t2

0xddfc,	// (0x00035f68) cell_dia3_key_num_pane_t3

0xde0b,	// (0x00035f77) cell_dia3_key_num_pane_t4

0x0003,

0xfef0,	// (0x0003805c) cell_dia3_key_num_pane_t

0xdfe5,	// (0x00036151) bg_button_pane_cp19

0xb202,	// (0x0003336e) cell_dia3_key0_fun_pane_g1

0xdfe5,	// (0x00036151) bg_button_pane_cp20

0xb20a,	// (0x00033376) cell_dia3_key1_fun_pane_g1

0xb212,	// (0x0003337e) area_left_week_number_pane

0xb21e,	// (0x0003338a) area_top_day_name_pane

0xb22a,	// (0x00033396) frame_month_view_pane

0xb236,	// (0x000333a2) grid_month_view_pane

0xde1a,	// (0x00035f86) cell_top_day_name_pane_ParamLimits

0xde1a,	// (0x00035f86) cell_top_day_name_pane

0xb242,	// (0x000333ae) cell_area_left_week_number_pane_ParamLimits

0xb242,	// (0x000333ae) cell_area_left_week_number_pane

0xb258,	// (0x000333c4) cell_month_view_pane_ParamLimits

0xb258,	// (0x000333c4) cell_month_view_pane

0xde36,	// (0x00035fa2) frm_month_g1

0xb279,	// (0x000333e5) frm_month_g2

0xb283,	// (0x000333ef) frm_month_g3

0xb28d,	// (0x000333f9) frm_month_g4

0xb297,	// (0x00033403) frm_month_g5

0xb2a1,	// (0x0003340d) frm_month_g6

0xb2ad,	// (0x00033419) frm_month_g7

0xde3f,	// (0x00035fab) frm_month_g8

0xde48,	// (0x00035fb4) frm_month_g9

0xde51,	// (0x00035fbd) frm_month_g10

0xde5a,	// (0x00035fc6) frm_month_g11

0xde63,	// (0x00035fcf) frm_month_g12

0xde6c,	// (0x00035fd8) frm_month_g13

0xde77,	// (0x00035fe3) frm_month_g14

0xde82,	// (0x00035fee) frm_month_g15

0xde8d,	// (0x00035ff9) frm_month_g16

0x000f,

0xfef9,	// (0x00038065) frm_month_g

0xb2b9,	// (0x00033425) cell_top_day_name_pane_t1

0xb2c8,	// (0x00033434) cell_area_left_week_number_pane_g1

0xb2d0,	// (0x0003343c) cell_area_left_week_number_pane_t1

0x69d0,	// (0x0002eb3c) cell_month_view_pane_g1

0xb2df,	// (0x0003344b) cell_month_view_pane_t1

0xdfe5,	// (0x00036151) main_fps_pane

0xd20a,	// (0x00035376) cmail_ddmenu_btn02_pane_cp1_ParamLimits

0xd20a,	// (0x00035376) cmail_ddmenu_btn02_pane_cp1

0xd226,	// (0x00035392) cmail_ddmenu_btn02_pane_cp2_ParamLimits

0xd226,	// (0x00035392) cmail_ddmenu_btn02_pane_cp2

0xaab5,	// (0x00032c21) cmail_ddmenu_btn02_pane_g2_ParamLimits

0xaab5,	// (0x00032c21) cmail_ddmenu_btn02_pane_g2

0x0001,

0xfe23,	// (0x00037f8f) cmail_ddmenu_btn02_pane_g_ParamLimits

0xfe23,	// (0x00037f8f) cmail_ddmenu_btn02_pane_g

0xaad6,	// (0x00032c42) cmail_ddmenu_btn02_pane_t2_ParamLimits

0xaad6,	// (0x00032c42) cmail_ddmenu_btn02_pane_t2

0x0001,

0xfe28,	// (0x00037f94) cmail_ddmenu_btn02_pane_t_ParamLimits

0xfe28,	// (0x00037f94) cmail_ddmenu_btn02_pane_t

0xb2ee,	// (0x0003345a) fps_text_pane_ParamLimits

0xb2ee,	// (0x0003345a) fps_text_pane

0xb305,	// (0x00033471) main_fps_pane_g1_ParamLimits

0xb305,	// (0x00033471) main_fps_pane_g1

0xb31d,	// (0x00033489) wait_bar_pane_cp010_ParamLimits

0xb31d,	// (0x00033489) wait_bar_pane_cp010

0xb330,	// (0x0003349c) fps_text_pane_t1_ParamLimits

0xb330,	// (0x0003349c) fps_text_pane_t1

0xbcd1,	// (0x00033e3d) cam4_image_uncrop_pane_g1

0xbcda,	// (0x00033e46) cam4_image_uncrop_pane_g2

0x853a,	// (0x000306a6) cam4_image_uncrop_pane_g3

0x8543,	// (0x000306af) cam4_image_uncrop_pane_g4

0x0003,

0xf8f9,	// (0x00037a65) cam4_image_uncrop_pane_g

0xb1f0,	// (0x0003335c) dia3_listrow_pane_ParamLimits

0xdfe5,	// (0x00036151) main_phob2_pane

0xa5f1,	// (0x0003275d) cell_tport_appsw_pane_cp02_ParamLimits

0xa5f1,	// (0x0003275d) cell_tport_appsw_pane_cp02

0xa605,	// (0x00032771) cell_tport_appsw_pane_cp03_ParamLimits

0xa605,	// (0x00032771) cell_tport_appsw_pane_cp03

0xdfe5,	// (0x00036151) phob2_contact_card_pane

0xdfe5,	// (0x00036151) phob2_listscroll_pane

0xde98,	// (0x00036004) phob2_list_pane

0xdea0,	// (0x0003600c) scroll_pane_cp034

0xb348,	// (0x000334b4) phob2_cc_data_pane_ParamLimits

0xb348,	// (0x000334b4) phob2_cc_data_pane

0xb369,	// (0x000334d5) phob2_cc_listscroll_pane_ParamLimits

0xb369,	// (0x000334d5) phob2_cc_listscroll_pane

0xb38b,	// (0x000334f7) list_double_large_graphic_phob2_pane_ParamLimits

0xb38b,	// (0x000334f7) list_double_large_graphic_phob2_pane

0xb3a0,	// (0x0003350c) list_double_large_graphic_phob2_pane_g1_ParamLimits

0xb3a0,	// (0x0003350c) list_double_large_graphic_phob2_pane_g1

0xb3ad,	// (0x00033519) list_double_large_graphic_phob2_pane_g2_ParamLimits

0xb3ad,	// (0x00033519) list_double_large_graphic_phob2_pane_g2

0x0001,

0xff1a,	// (0x00038086) list_double_large_graphic_phob2_pane_g_ParamLimits

0xff1a,	// (0x00038086) list_double_large_graphic_phob2_pane_g

0xb3b9,	// (0x00033525) list_double_large_graphic_phob2_pane_t1_ParamLimits

0xb3b9,	// (0x00033525) list_double_large_graphic_phob2_pane_t1

0xb3ce,	// (0x0003353a) list_double_large_graphic_phob2_pane_t2_ParamLimits

0xb3ce,	// (0x0003353a) list_double_large_graphic_phob2_pane_t2

0x0001,

0xff1f,	// (0x0003808b) list_double_large_graphic_phob2_pane_t_ParamLimits

0xff1f,	// (0x0003808b) list_double_large_graphic_phob2_pane_t

0xdfe5,	// (0x00036151) list_highlight_pane_cp024

0xdea8,	// (0x00036014) phob2_cc_button_pane

0xb3e0,	// (0x0003354c) phob2_cc_data_pane_g1_ParamLimits

0xb3e0,	// (0x0003354c) phob2_cc_data_pane_g1

0xb3f6,	// (0x00033562) phob2_cc_data_pane_g2_ParamLimits

0xb3f6,	// (0x00033562) phob2_cc_data_pane_g2

0x0001,

0xff24,	// (0x00038090) phob2_cc_data_pane_g_ParamLimits

0xff24,	// (0x00038090) phob2_cc_data_pane_g

0xb40a,	// (0x00033576) phob2_cc_data_pane_t1_ParamLimits

0xb40a,	// (0x00033576) phob2_cc_data_pane_t1

0xb424,	// (0x00033590) phob2_cc_data_pane_t2_ParamLimits

0xb424,	// (0x00033590) phob2_cc_data_pane_t2

0xb43e,	// (0x000335aa) phob2_cc_data_pane_t3_ParamLimits

0xb43e,	// (0x000335aa) phob2_cc_data_pane_t3

0x0002,

0xff29,	// (0x00038095) phob2_cc_data_pane_t_ParamLimits

0xff29,	// (0x00038095) phob2_cc_data_pane_t

0xdeb0,	// (0x0003601c) phob2_cc_list_pane_ParamLimits

0xdeb0,	// (0x0003601c) phob2_cc_list_pane

0xc1b4,	// (0x00034320) scroll_pane_cp035_ParamLimits

0xc1b4,	// (0x00034320) scroll_pane_cp035

0xe7da,	// (0x00036946) bg_button_pane_cp033

0xdebc,	// (0x00036028) phob2_cc_button_pane_g1

0xdec8,	// (0x00036034) phob2_cc_button_pane_t1

0xdedd,	// (0x00036049) phob2_cc_button_pane_t2

0x0001,

0xff30,	// (0x0003809c) phob2_cc_button_pane_t

0xb458,	// (0x000335c4) list_double_large_graphic_phob2_cc_pane_ParamLimits

0xb458,	// (0x000335c4) list_double_large_graphic_phob2_cc_pane

0xb46d,	// (0x000335d9) list_double_large_graphic_phob2_cc_pane_g1_ParamLimits

0xb46d,	// (0x000335d9) list_double_large_graphic_phob2_cc_pane_g1

0xb479,	// (0x000335e5) list_double_large_graphic_phob2_cc_pane_g2_ParamLimits

0xb479,	// (0x000335e5) list_double_large_graphic_phob2_cc_pane_g2

0xb485,	// (0x000335f1) list_double_large_graphic_phob2_cc_pane_g3_ParamLimits

0xb485,	// (0x000335f1) list_double_large_graphic_phob2_cc_pane_g3

0xb491,	// (0x000335fd) list_double_large_graphic_phob2_cc_pane_g4_ParamLimits

0xb491,	// (0x000335fd) list_double_large_graphic_phob2_cc_pane_g4

0xb49d,	// (0x00033609) list_double_large_graphic_phob2_cc_pane_g5_ParamLimits

0xb49d,	// (0x00033609) list_double_large_graphic_phob2_cc_pane_g5

0x0004,

0xff35,	// (0x000380a1) list_double_large_graphic_phob2_cc_pane_g_ParamLimits

0xff35,	// (0x000380a1) list_double_large_graphic_phob2_cc_pane_g

0xb4a9,	// (0x00033615) list_double_large_graphic_phob2_cc_pane_t1_ParamLimits

0xb4a9,	// (0x00033615) list_double_large_graphic_phob2_cc_pane_t1

0xb4d2,	// (0x0003363e) list_double_large_graphic_phob2_cc_pane_t2_ParamLimits

0xb4d2,	// (0x0003363e) list_double_large_graphic_phob2_cc_pane_t2

0x0001,

0xff40,	// (0x000380ac) list_double_large_graphic_phob2_cc_pane_t_ParamLimits

0xff40,	// (0x000380ac) list_double_large_graphic_phob2_cc_pane_t

0xdeef,	// (0x0003605b) list_highlight_pane_cp025_ParamLimits

0xdeef,	// (0x0003605b) list_highlight_pane_cp025

0xe7da,	// (0x00036946) bg_button_pane_cp033_ParamLimits

0xdebc,	// (0x00036028) phob2_cc_button_pane_g1_ParamLimits

0xdec8,	// (0x00036034) phob2_cc_button_pane_t1_ParamLimits

0xdedd,	// (0x00036049) phob2_cc_button_pane_t2_ParamLimits

0xff30,	// (0x0003809c) phob2_cc_button_pane_t_ParamLimits

0x1e2b,	// (0x00029f97) popup_wgtman_window

0xbf50,	// (0x000340bc) scroll_pane_cp038

0xaf3b,	// (0x000330a7) wgtman_btn_pane_cp_01_ParamLimits

0xaf3b,	// (0x000330a7) wgtman_btn_pane_cp_01

0xdefd,	// (0x00036069) wgtman_content_pane

0xdf06,	// (0x00036072) wgtman_heading_pane

0xdfe5,	// (0x00036151) bg_heading_pane_cp02

0xdf0f,	// (0x0003607b) wgtman_heading_pane_g1

0xdf17,	// (0x00036083) wgtman_heading_pane_t1

0xdf25,	// (0x00036091) scroll_pane_cp036

0xdf2d,	// (0x00036099) wgtman_list_pane

0xd09d,	// (0x00035209) wgtman_list_pane_t1_ParamLimits

0xd09d,	// (0x00035209) wgtman_list_pane_t1

0xbcbb,	// (0x00033e27) cam4_grid_pane

0x8d92,	// (0x00030efe) bg_button_pane_cp015_ParamLimits

0x8da6,	// (0x00030f12) bg_button_pane_cp016_ParamLimits

0x8db9,	// (0x00030f25) bg_button_pane_cp017_ParamLimits

0x8e11,	// (0x00030f7d) popup_vitu2_query_window_g3_ParamLimits

0x8e11,	// (0x00030f7d) popup_vitu2_query_window_g3

0x8ece,	// (0x0003103a) popup_vitu2_query_window_t6_ParamLimits

0x8ece,	// (0x0003103a) popup_vitu2_query_window_t6

0x8ef9,	// (0x00031065) popup_vitu2_query_window_t7_ParamLimits

0x8ef9,	// (0x00031065) popup_vitu2_query_window_t7

0xbcd1,	// (0x00033e3d) cam4_grid_pane_g1

0xbcda,	// (0x00033e46) cam4_grid_pane_g2

0xdf35,	// (0x000360a1) cam4_grid_pane_g3

0xdf3e,	// (0x000360aa) cam4_grid_pane_g4

0x0003,

0xff45,	// (0x000380b1) cam4_grid_pane_g

0x286b,	// (0x0002a9d7) aid_placing_vt_slider_lsc_ParamLimits

0x2b58,	// (0x0002acc4) vidtel_button_pane_ParamLimits

0x2b58,	// (0x0002acc4) vidtel_button_pane

0xdf49,	// (0x000360b5) bg_button_pane_cp034

0xb4fb,	// (0x00033667) vidtel_button_pane_g1

0xdf53,	// (0x000360bf) vidtel_button_pane_t1

0xc08f,	// (0x000341fb) aid_size_vtel_slider_touch

0xc1b4,	// (0x00034320) scroll_pane_cp039

0xcc37,	// (0x00034da3) ncim_query_button_pane_cp01_ParamLimits

0xcc56,	// (0x00034dc2) ncimui_query_pane_g1_ParamLimits

0xe7da,	// (0x00036946) input_focus_pane_cp012_ParamLimits

0xcc7b,	// (0x00034de7) ncim_query_entry_pane_t1_ParamLimits

0xc1b4,	// (0x00034320) scroll_pane_cp039_ParamLimits

0x3b51,	// (0x0002bcbd) navi_pane_bcale_mc_g1

0x3b59,	// (0x0002bcc5) navi_pane_bcale_mc_t1

0xd271,	// (0x000353dd) main_sp_fs_email_pane_g1

0xd279,	// (0x000353e5) main_sp_fs_email_pane_g2

0x0001,

0xfcf0,	// (0x00037e5c) main_sp_fs_email_pane_g

0xd7fc,	// (0x00035968) list_single_cale_mrui_row_pane_g3_ParamLimits

0xd7fc,	// (0x00035968) list_single_cale_mrui_row_pane_g3

0xaafe,	// (0x00032c6a) list_single_recal_day_pane_g5_event_pane

0xd9c1,	// (0x00035b2d) list_single_recal_day_pane_g7

0xdf61,	// (0x000360cd) list_recal_day_event_pane_cp01

0xdf6a,	// (0x000360d6) list_recal_vselct_arw_lo_pane_cp01

0xdf72,	// (0x000360de) list_recal_vselct_arw_up_pane_cp01

0xdf7a,	// (0x000360e6) list_recal_vselct_pane_cp01

0xc11b,	// (0x00034287) list_recal_day_event_pane_cp01_g1

0xdf84,	// (0x000360f0) list_recal_day_event_pane_cp01_t1

0xd9c9,	// (0x00035b35) list_single_recal_day_pane_t1_ParamLimits

0xd9db,	// (0x00035b47) list_single_recal_day_pane_t2_ParamLimits

0xfe38,	// (0x00037fa4) list_single_recal_day_pane_t_ParamLimits

0xe735,	// (0x000368a1) bg_notes_pane_ParamLimits

0xe743,	// (0x000368af) list_notes_pane_ParamLimits

0x205b,	// (0x0002a1c7) scroll_pane_cp06_ParamLimits

0xe765,	// (0x000368d1) main_notes_pane_ParamLimits

0xdfe5,	// (0x00036151) main_welc_pane

0xb503,	// (0x0003366f) main_welc_body_pane_ParamLimits

0xb503,	// (0x0003366f) main_welc_body_pane

0xb522,	// (0x0003368e) main_welc_opti_pane_ParamLimits

0xb522,	// (0x0003368e) main_welc_opti_pane

0xb569,	// (0x000336d5) main_welc_pane_t1_ParamLimits

0xb569,	// (0x000336d5) main_welc_pane_t1

0xdf92,	// (0x000360fe) main_welc_body_row_pane_ParamLimits

0xdf92,	// (0x000360fe) main_welc_body_row_pane

0xb58b,	// (0x000336f7) main_welc_opti_row_pane_ParamLimits

0xb58b,	// (0x000336f7) main_welc_opti_row_pane

0xdfa9,	// (0x00036115) main_welc_opti_row_pane_g1

0xdfb1,	// (0x0003611d) main_welc_opti_row_pane_t1

0xdfc0,	// (0x0003612c) main_welc_body_row_pane_t1

0xdc43,	// (0x00035daf) popup_notif_wgt_heading_pane

0xdc5d,	// (0x00035dc9) aid_size_list_notif_wgt_del_ParamLimits

0xdc6a,	// (0x00035dd6) list_notif_wgt_row_pane_g1_ParamLimits

0xdc76,	// (0x00035de2) list_notif_wgt_row_pane_g2_ParamLimits

0xdc82,	// (0x00035dee) list_notif_wgt_row_pane_g3_ParamLimits

0xfe9f,	// (0x0003800b) list_notif_wgt_row_pane_g_ParamLimits

0xdc8f,	// (0x00035dfb) list_notif_wgt_row_pane_t1_ParamLimits

0xdca4,	// (0x00035e10) list_notif_wgt_row_pane_t2_ParamLimits

0xdcb6,	// (0x00035e22) list_notif_wgt_row_pane_t3_ParamLimits

0xfea6,	// (0x00038012) list_notif_wgt_row_pane_t_ParamLimits

0xafd6,	// (0x00033142) listrow_wgtman_pane_g1_ParamLimits

0xafe3,	// (0x0003314f) listrow_wgtman_pane_g2_ParamLimits

0xfeca,	// (0x00038036) listrow_wgtman_pane_g_ParamLimits

0xb001,	// (0x0003316d) listrow_wgtman_pane_t1_ParamLimits

0xb019,	// (0x00033185) listrow_wgtman_pane_t2_ParamLimits

0xfecf,	// (0x0003803b) listrow_wgtman_pane_t_ParamLimits

0xb03f,	// (0x000331ab) wait_bar_pane_cp09_ParamLimits

0xdfe5,	// (0x00036151) bg_popup_heading_pane_cp02

0xdfcf,	// (0x0003613b) popup_notif_wgt_heading_pane_g1

0xdfd7,	// (0x00036143) popup_notif_wgt_heading_pane_t1

0xdfe5,	// (0x00036151) main_vids_pane

0xdfe5,	// (0x00036151) vids_listscroll_pane

0xb59b,	// (0x00033707) scroll_pane_cp040

0xdfe5,	// (0x00036151) vids_list_pane

0xb5a6,	// (0x00033712) vids_list_double_pane_ParamLimits

0xb5a6,	// (0x00033712) vids_list_double_pane

0xb5b7,	// (0x00033723) vids_list_double_pane_g1

0xb5c0,	// (0x0003372c) vids_list_double_pane_t1

0xb5d0,	// (0x0003373c) vids_list_double_pane_t2

0x0001,

0xff53,	// (0x000380bf) vids_list_double_pane_t

0xb647,	// (0x000337b3) main_ncimui_pane_ParamLimits

0x998b,	// (0x00031af7) main_ncimui_pane_g1_ParamLimits

0x9997,	// (0x00031b03) main_ncimui_pane_g2_ParamLimits

0x9997,	// (0x00031b03) main_ncimui_pane_g2

0x0001,

0xfbf5,	// (0x00037d61) main_ncimui_pane_g_ParamLimits

0xfbf5,	// (0x00037d61) main_ncimui_pane_g

0xb541,	// (0x000336ad) main_welc_pane_g1_ParamLimits

0xb541,	// (0x000336ad) main_welc_pane_g1

0xb556,	// (0x000336c2) main_welc_pane_g2_ParamLimits

0xb556,	// (0x000336c2) main_welc_pane_g2

0x0001,

0xff4e,	// (0x000380ba) main_welc_pane_g_ParamLimits

0xff4e,	// (0x000380ba) main_welc_pane_g
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

} // end of namespace AknLayoutScalable_Abrw_pvl4_apps_vga4_lsc_tch_Normal
